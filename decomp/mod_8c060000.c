/* Seaman (USA) region 0x8c060000-0x8c070000 (Ghidra decompiler, cleaned up by tools/readable.py) */

#include "seaman.h"
#include "globals.h"

/*
 * game_update_fields_060044  0x8c060044
 * area name: game code; nothing names its area yet; behaviour name: conditionally writes members
 * called by: Class_12a078_uses_set_field_38_05ff40, FrogMan_choose_status_event
 */
u32 game_update_fields_060044(int a0, u32 a1, u32 a2, u32 a3) {
    u32 uVar1;
    int iVar2;

    if ((*(int *)(a0 + 0x38) == 2) && (*(int *)(a0 + 0x6c) != 0)) {
        iVar2 = *(int *)(*(int *)(a0 + 0x6c) + 8);
        (**(code **)(iVar2 + 0x78))(*(int *)(a0 + 0x6c), a1, a2, iVar2);
        *(u32 *)(a0 + 0x6c) = 0;
    }
    iVar2 = *(int *)(a0 + 0x40);
    uVar1 = 0x10;
    if ((iVar2 < 0x11) && (uVar1 = 1, 0 < iVar2)) {
        /* WARNING: Could not recover jumptable at 0x8c0600b8. Too many branches */
        /* WARNING: Treating indirect jump as call */
        uVar1 = (*(code *)(&(&DATA_8c0600fc))[iVar2 + -1])();
        return uVar1;
    }
    return uVar1;
}

/*
 * set_byte_51_2col  0x8c06115c
 * byte a0[0x51 + a1*2 + a2] = a3
 */
u32 set_byte_51_2col(int a0, u32 a1, u32 a2, u32 a3) {
    *(u8 *)(a0 + (short)a1 * 2 + (int)(short)a2 + 0x51) = (u8)a3;
    return 0x51;
}

/*
 * get_field_c8_061174  0x8c061174
 * called by: FrogMan_react_feed_full
 */
u32 get_field_c8_061174(int a0) {
    return *(u32 *)(0xc8 + a0);
}

/*
 * set_field_0_u8_061180  0x8c061180
 * called by: FrogMan_ending_event, FrogMan_gratification_events, Higyo_gratification_events, game_uses_Vec3_dtor_1089e4
 */
u32 set_field_0_u8_061180(u8 *a0, u32 a1) {
    u32 in_r0;

    *a0 = (u8)a1;
    return in_r0;
}

/*
 * get_field_38_s8  0x8c061188
 */
int get_field_38_s8(int a0) {
    return (int)*(char *)(a0 + 0x38);
}

/*
 * ret_const_0_061190  0x8c061190
 */
u32 ret_const_0_061190(void) {
    return 0;
}

/*
 * get_field_2c_061198  0x8c061198
 */
u32 get_field_2c_061198(int a0) {
    return *(u32 *)(a0 + 0x2c);
}

/*
 * get_field_34_0611a0  0x8c0611a0
 */
u32 get_field_34_0611a0(int a0) {
    return *(u32 *)(a0 + 0x34);
}

/*
 * set_field_4_on_field_f8_0611a8  0x8c0611a8
 * calls set_field_4 on the member at +0xf8
 */
u32 set_field_4_on_field_f8_0611a8(int a0) {
    u32 uVar1;

    uVar1 = set_field_4(a0 + 0xf8, 0x5f);
    return uVar1;
}

/*
 * FrogMan_gratification_events  0x8c0611cc
 * FrogMan line: after eating, copulation, jumps and the ending (GRATIFIC_*, EVENT_JUMP_*, EVENT_ENDING)
 * called by: Class_12a078_uses_set_field_38_05ff40
 * strings: "REACTION_SPIDER_AFTER_EAT"; "REACTION_SPIDER_AFTER_EAT"; "GRATIFIC_EAT"; "GRATIFIC_EAT" ...
 */
u8 **FrogMan_gratification_events(u8 **a0, int *a1, code *a2, char *a3) {
    int iVar1;
    u8 **ppuVar2;
    u32 uVar3;
    u8 **ppuVar4;
    u32 uVar5;
    u8 *puVar6;
    char *pcVar7;
    u32 uVar8;
    u32 uVar9;
    u32 uVar10;
    code *pcVar11;
    code *pcVar12;
    int iVar13;
    char cVar14;
    u8 auStack_28[20];

    cVar14 = '\0';
    iVar13 = 0;
    iVar1 = *(int *)(a2 + 8);
    pcVar11 = a2;
    ppuVar2 = (u8 **)get_field_124_027930(iVar1, a1, a2, a3);
    puVar6 = (u8 *)0x35;
    ppuVar4 = ppuVar2;
    if (((int)ppuVar2 < 0x36) && (-1 < (int)ppuVar2)) {
        ppuVar4 = &switchD_8c061214::switchdataD_8c061220;
        switch (ppuVar2) {
        case NULL:
            if (((*(char *)((int)a0 + 0x879) == '\x02') && (puVar6 = a0[0x21f], puVar6 == (u8 *)0x1)) &&
                ((a0[0x220] == NULL && (uVar3 = get_field_a0_035724(*(int *)(a2 + 0x18), 1), (char)uVar3 == '\x02')))) {
                pcVar11 = (code *)0x880;
                a0[0x220] = (u8 *)0x1;
                speech_uses_identity_0fa688(0x8c35468c, puVar6, 0x880, a3);
            }
            uVar5 = get_field_a0_035724(*(int *)(a2 + 0x18), puVar6);
            ppuVar4 = (u8 **)(uVar5 & 0xff);
            if ((u8 **)(uVar5 & 0xff) == (u8 **)0x3) {
                a0[3] = a0[3] + -1;
                ppuVar4 = a0;
            }
            break;
        case (u8 **)0x3:
            a0[3] = a0[3] + -1;
            a0[2] = (u8 *)0x32;
            ppuVar4 = a0;
            break;
        case (u8 **)0x5:
            ppuVar4 = (u8 **)counter_set_clamped(*(int *)(a2 + 4) + 0x90, 0, pcVar11);
            break;
        case (u8 **)0x6:
            ppuVar4 = (u8 **)game_uses_get_field_6c_02f414(a0, 0x35, pcVar11, a3);
            if (ppuVar4 == (u8 **)0x1) {
                uVar3 = get_field_6c_02f46c(a0[0x1b]);
                uVar3 = take_from_field_6c(a0[0x1b], uVar3, pcVar11, a3);
                pcVar11 = game_calls_update_fields_05fec4;
                game_calls_update_fields_05fec4(*(int *)(a2 + 4));
                puVar6 = (u8 *)game_copy_02ea00(a0 + 0x207, 0x81c);
                ppuVar4 = (u8 **)0x850;
                a0[0x214] = puVar6;
            }
            if (a0[0x1b] != NULL) {
                iVar1 = (**(code **)(*(int *)(a0[0x1b] + 8) + 0x114))(a0[0x1b], a0 + 0x1b, pcVar11, a3);
                if (iVar1 == 0x18) {
                    set_field_0_u8(*(int *)(a2 + 4) + 0x78, 1);
                    pcVar7 = "REACTION_SPIDER_AFTER_EAT";
                    uVar8 = 0;
                    uVar3 = 2;
                    talk_start_line(a0 + 0x27, 2, 0, "REACTION_SPIDER_AFTER_EAT");
                } else {
                    pcVar7 = "GRATIFIC_EAT";
                    uVar8 = 0;
                    uVar3 = 2;
                    talk_start_line(a0 + 0x27, 2, 0, "GRATIFIC_EAT");
                }
                (**(code **)(*(int *)(a0[0x1b] + 8) + 0x78))(a0[0x1b], uVar3, uVar8, pcVar7);
                a0[0x1b] = NULL;
                ppuVar4 = (u8 **)0x6c;
            }
            break;
        case (u8 **)0x8:
            (**(code **)(*(int *)(*(int *)a2 + 8) + 0xbc))(*(int *)a2, 0x35, pcVar11, a3);
            uVar3 = (**(code **)(*a1 + 0x148))(a1, puVar6, pcVar11, a3);
            uVar8 = table13019c_find_row(*(int *)(a2 + 4));
            uVar9 = get_field_140_025f70(*(int *)(a2 + 4), puVar6);
            uVar10 = 1;
            iVar1 = (int)(short)uVar8;
            set_byte_grid_75(uVar3, iVar1, uVar9, 1);
            uVar3 = (**(code **)(*a1 + 0x148))(a1, iVar1, uVar9, uVar10);
            uVar8 = table13019c_find_row(*(int *)(a2 + 4));
            iVar1 = get_field_140_025f70(*(int *)(a2 + 4), get_field_140_025f70);
            uVar3 = get_byte_75_2col(uVar3, (int)(short)uVar8, 1 - iVar1);
            if ((char)uVar3 == '\x01') {
                ppuVar4 = (u8 **)0x1;
            } else {
                a0[3] = a0[3] + -1;
                a0[0x216] = a0[0x216] + 1;
                iVar1 = *a1;
                ppuVar4 = a0;
                uVar3 = (**(code **)(iVar1 + 0x148))(a1, iVar1, a0, uVar10);
                uVar8 = table13019c_find_row(*(int *)(a2 + 4));
                iVar1 = get_field_140_025f70(*(int *)(a2 + 4), iVar1);
                uVar3 = get_byte_51_2col(uVar3, (int)(short)uVar8, 1 - iVar1);
                if ((char)uVar3 == '\x01') {
                    a0[0x216] = NULL;
                }
                ppuVar4 = (u8 **)a0[0x216];
                if (0x708 < (int)a0[0x216]) {
                    uVar9 = 0;
                    a0[0x216] = NULL;
                    uVar3 = (**(code **)(*a1 + 0x148))(a1, *a1, 0, uVar10);
                    pcVar11 = table13019c_find_row;
                    uVar8 = table13019c_find_row(*(int *)(a2 + 4));
                    uVar9 = get_field_140_025f70(*(int *)(a2 + 4), pcVar11);
                    uVar10 = 0;
                    set_byte_grid_75(uVar3, (int)(short)uVar8, uVar9, 0);
                    a0[0x10] = NULL;
                    a0[1] = NULL;
                    a0[2] = (u8 *)0x5;
                    a0[3] = NULL;
                    a0[0x10] = NULL;
                    *(u8 *)(a0 + 0x26) = 4;
                    ppuVar4 = (u8 **)set_field_1_s8(*(int *)(a2 + 4) + 0xa8, 1);
                }
            }
            break;
        case (u8 **)0x9:
            iVar1 = get_field_140_025f70(*(int *)(a2 + 4), 0x35);
            if (iVar1 == 1) {
                *(u8 *)(a0 + 0x26) = 4;
                puVar6 = (u8 *)0x1;
                set_field_1_s8(*(int *)(a2 + 4) + 0xa8, 1);
                (**(code **)(*(int *)(*(int *)a2 + 8) + 0xc0))(*(int *)a2, puVar6, pcVar11, a3);
            }
            iVar1 = get_field_140_025f70(*(int *)(a2 + 4), puVar6);
            if (iVar1 == 0) {
                a3 = "GRATIFIC_COPULATION_DONE";
                pcVar11 = NULL;
                talk_start_line(a0 + 0x27, 9, 0, "GRATIFIC_COPULATION_DONE");
                *(u8 *)(a0 + 0x26) = 4;
            }
            uVar3 = 1;
            iVar1 = *(int *)(a2 + 4) + 0xa8;
            set_field_4_s8(iVar1, 1);
            ppuVar4 = (u8 **)CAnimal_calls_test_0c4e2c(iVar1, uVar3, pcVar11, a3);
            break;
        case (u8 **)0xb:
            if (a0[0xe1] == (u8 *)0xffffffff) {
                ppuVar4 = (u8 **)0xffffffff;
            } else {
                ppuVar4 = (u8 **)set_field_770(a0 + 0x27, 2, a0[0xe1], a3);
            }
            break;
        case (u8 **)0xf:
            iVar1 = game_uses_get_field_6c_02f414(a0, 0x35, pcVar11, a3);
            if (iVar1 == 1) {
                uVar3 = get_field_6c_02f46c(a0[0x1b]);
                uVar3 = take_from_field_6c(a0[0x1b], uVar3, pcVar11, a3);
                game_calls_update_fields_05fec4(*(int *)(a2 + 4));
                (**(code **)(*(int *)(a0[0x1b] + 8) + 0x78))(a0[0x1b], uVar3, pcVar11, a3);
                pcVar11 = NULL;
                a0[0x1b] = NULL;
            }
            for (pcVar12 = NULL; iVar1 = (**(code **)(*a1 + 0x11c))(a1, 5, pcVar11, a3), (int)pcVar12 < iVar1;
                 pcVar12 = pcVar12 + 1) {
                uVar3 = 5;
                iVar1 = (**(code **)(*a1 + 0x100))(a1, 5, pcVar12, a3);
                pcVar11 = *(code **)(iVar1 + 8);
                iVar1 = (**(code **)(pcVar11 + 0x114))(iVar1, uVar3, pcVar11, a3);
                if (iVar1 == 6) {
                    uVar3 = 5;
                    pcVar11 = pcVar12;
                    iVar1 = (**(code **)(*a1 + 0x100))(a1, 5, pcVar12, a3);
                    iVar1 = (**(code **)(*(int *)(iVar1 + 8) + 0xb4))(iVar1, uVar3, pcVar11, a3);
                    if (iVar1 == 1) {
                        uVar3 = 5;
                        pcVar11 = pcVar12;
                        iVar1 = (**(code **)(*a1 + 0x100))(a1, 5, pcVar12, a3);
                        iVar1 = (**(code **)(*(int *)(iVar1 + 8) + 0xb8))(iVar1, uVar3, pcVar11, a3);
                        if (iVar1 == 0) {
                            iVar13 = iVar13 + 1;
                        }
                    }
                }
            }
            if (iVar13 == 2) {
                set_field_0_u8_061180(*(int *)(a2 + 0xc), 3);
            }
            ppuVar4 = (u8 **)set_field_38_u8(*(int *)(a2 + 0xc), 0);
            break;
        case (u8 **)0x13:
            *(u8 *)(a0 + 0x26) = 7;
            uVar3 = get_field_13c_028d9c(*(int *)(a2 + 4), 0x35, pcVar11);
            ppuVar4 = (u8 **)recent5_push_unique(*(int *)(a2 + 0x18), 0x22, uVar3);
            break;
        case (u8 **)0x14:
            ppuVar4 = (u8 **)talk_start_line(a0 + 0x27, 0x1f, a0[0x41], "REACTION_AFTER_DEKOPIN");
            break;
        case (u8 **)0x17:
            counter_set_clamped(*(int *)(a2 + 4) + 0x90, 1, pcVar11);
            counter_set_clamped_4(*(int *)(a2 + 4) + 0x90, 1);
            set_field_0_u8(*(int *)(a2 + 4) + 0x60, 0);
            if (a0[0x21f] == (u8 *)0x1) {
                *(u8 *)(a0 + 0x26) = 9;
            }
            if (((a0[0xe1] == (u8 *)0xffffffff) && (a0[0x21f] != (u8 *)0x1)) &&
                (*(char *)((int)a0 + 0x879) == '\x02')) {
                set_field_770(a0 + 0x27, 0, pcVar11, a3);
                pcVar7 = "EVENT_ENDING";
                talk_queue_mode1(a0 + 0x27, 0x2a, 0, "EVENT_ENDING", "start");
                a0[0x3f] = NULL;
                puVar6 = (u8 *)speech_request(0x8c35468c, a0[0xe2], a0 + 0x27, pcVar7);
                a0[0xe1] = puVar6;
                a0[0x53] = (u8 *)0x1;
            }
            if ((*(char *)((int)a0 + 0x879) == '\x02') && (a0[0xe1] != (u8 *)0xffffffff)) {
                a0[1] = (u8 *)0xd;
                a0[2] = (u8 *)0x5f;
                a0[3] = NULL;
                a0[0x210] = (u8 *)0x30;
                g_8c136908 = 0x30;
                a0[0x211] = (u8 *)0x36;
                g_8c13690c = 0x36;
                a0[0x212] = (u8 *)0x36;
                g_8c136910 = 0x36;
                pcVar12 = Vec3_ctor_copy;
                Vec3_ctor_copy(auStack_28, *(int *)(a2 + 0x14) + 0x10, *(int *)(a2 + 0x14), Vec3_ctor_copy);
                pcVar11 = Vec3_assign_wrap_05f640;
                Vec3_assign_wrap_05f640(a0, auStack_28, Vec3_assign_wrap_05f640, pcVar12);
                Vec3_dtor(auStack_28, 0xffffffff, pcVar11, pcVar12);
                ppuVar4 = a0 + 0x1e;
                if (cVar14 == '\0') {
                    *ppuVar4 = (u8 *)0x44af0000;
                } else {
                    ppuVar4[0] = (u8 *)0x44af0000;
                    ppuVar4[1] = (u8 *)0x80;
                }
                *(u8 *)(a0 + 0x20) = 0;
            }
            *(u8 *)(a0 + 0x26) = 8;
            ppuVar4 = (u8 **)0x98;
            break;
        case (u8 **)0x18:
            *(u8 *)(a0 + 0x26) = 2;
            ppuVar4 = (u8 **)CAnimal_calls_test_0c4e2c(iVar1, 0x35, pcVar11, a3);
            break;
        case (u8 **)0x1b:
            ppuVar4 = (u8 **)set_field_40_05f498(*(int *)(a2 + 0xc), 3, *(int *)(a2 + 0xc), a3);
            break;
        case (u8 **)0x1c:
            set_field_40_05f498(*(int *)(a2 + 0xc), 8);
            ppuVar4 = (u8 **)talk_queue_mode2(a0 + 0x27, 0x1f, 0, "EVENT_JUMP_FAIL", &g_8c1369bf);
            break;
        case (u8 **)0x1d:
            ppuVar4 = (u8 **)set_field_40_05f498(*(int *)(a2 + 0xc), 5);
            break;
        case (u8 **)0x21:
        case (u8 **)0x25:
            a0[0x216] = NULL;
            uVar3 = (**(code **)(*a1 + 0x148))(a1, 0x35, pcVar11, a3);
            uVar9 = 0;
            uVar8 = 0;
            set_word_array_9c(uVar3, 0, 0);
            uVar3 = (**(code **)(*a1 + 0x148))(a1, uVar8, uVar9, a3);
            ppuVar4 = (u8 **)set_word_array_a4(uVar3, 0, 0);
            break;
        case (u8 **)0x22:
        case (u8 **)0x26:
            a0[0x216] = NULL;
            uVar3 = (**(code **)(*a1 + 0x148))(a1, 0x35, pcVar11, a3);
            uVar9 = 0;
            uVar8 = 1;
            set_word_array_9c(uVar3, 1, 0);
            uVar8 = (**(code **)(*a1 + 0x148))(a1, uVar8, uVar9, uVar3);
            uVar9 = 0;
            set_word_array_a4(uVar8, 1, 0);
            ppuVar4 = (u8 **)set_field_ac(*(int *)(a2 + 0xc), 4);
            break;
        case (u8 **)0x23:
        case (u8 **)0x27:
            uVar3 = (**(code **)(*a1 + 0x148))(a1, 0x35, pcVar11, a3);
            pcVar11 = set_word_array_9c;
            set_word_array_9c(uVar3, 0, 1);
            iVar1 = *a1;
            uVar3 = (**(code **)(iVar1 + 0x148))(a1, *(code **)(iVar1 + 0x148), iVar1, pcVar11);
            iVar1 = get_word_9c(uVar3, 1);
            if (iVar1 == 1) {
                ppuVar4 = (u8 **)0x1;
            } else {
                a0[3] = a0[3] + -1;
                a0[0x216] = a0[0x216] + 1;
                ppuVar4 = (u8 **)0x858;
                if (0x708 < (int)a0[0x216]) {
                    a0[0x216] = NULL;
                    uVar3 = (**(code **)(*a1 + 0x148))(a1, 0x858, a0, 0x858);
                    uVar8 = 0;
                    pcVar11 = set_word_array_9c;
                    set_word_array_9c(uVar3, 0, 0);
                    uVar3 = (**(code **)(*a1 + 0x148))(a1, uVar8, *(code **)(*a1 + 0x148), pcVar11);
                    set_word_array_a4(uVar3, 0, 0);
                    a0[0x10] = NULL;
                    a0[1] = NULL;
                    a0[2] = (u8 *)0x5;
                    a0[3] = NULL;
                    a0[0x10] = NULL;
                    ppuVar4 = (u8 **)0x40;
                }
            }
            break;
        case (u8 **)0x24:
        case (u8 **)0x28:
            uVar3 = (**(code **)(*a1 + 0x148))(a1, 0x35, pcVar11, a3);
            uVar8 = 1;
            set_word_array_9c(uVar3, 1, 1);
            uVar3 = (**(code **)(*a1 + 0x148))(a1, *a1, uVar8, a3);
            iVar1 = get_word_9c(uVar3, 0);
            if (iVar1 == 1) {
                ppuVar4 = (u8 **)0x1;
            } else {
                a0[3] = a0[3] + -1;
                a0[0x216] = a0[0x216] + 1;
                ppuVar4 = (u8 **)0x858;
                if (0x708 < (int)a0[0x216]) {
                    a0[0x216] = NULL;
                    uVar3 = (**(code **)(*a1 + 0x148))(a1, 0x708, uVar8, a3);
                    uVar9 = 0;
                    uVar8 = 1;
                    set_word_array_9c(uVar3, 1, 0);
                    uVar3 = (**(code **)(*a1 + 0x148))(a1, uVar8, uVar9, a3);
                    set_word_array_a4(uVar3, 1, 0);
                    a0[0x10] = NULL;
                    a0[1] = NULL;
                    a0[2] = (u8 *)0x5;
                    a0[3] = NULL;
                    a0[0x10] = NULL;
                    ppuVar4 = (u8 **)0x40;
                }
            }
            break;
        case (u8 **)0x29:
            ppuVar4 = (u8 **)set_field_b4(*(u32 *)(*(int *)(a2 + 0x18) + 0x7cc), 1);
            break;
        case (u8 **)0x30:
            ppuVar4 = (u8 **)a0[3];
            a0[3] = (u8 *)((int)ppuVar4 + -1);
            break;
        case (u8 **)0x31:
            set_field_40_05f498(*(int *)(a2 + 0xc), 8);
            ppuVar4 = (u8 **)talk_queue_mode2(a0 + 0x27, 0x1f, 0, "EVENT_JUMP_HALF_SUCCESS", &g_8c1369bf);
        }
    }
    return ppuVar4;
}

/*
 * set_field_ac  0x8c062048
 * called by: FrogMan_gratification_events, game_uses_get_word_array_a4_0620d4
 */
int set_field_ac(int a0, u32 a1) {
    int iVar1;

    iVar1 = 0xac;
    *(u32 *)(0xac + a0) = a1;
    return iVar1;
}

/*
 * set_word_array_a4  0x8c062054
 * +0xa4[a1] = a2
 * called by: FrogMan_gratification_events, game_uses_get_word_array_a4_0620d4
 */
int set_word_array_a4(int a0, int a1, u32 a2) {
    int iVar1;

    iVar1 = 0xa4;
    *(u32 *)(0xa4 + a0 + a1 * 4) = a2;
    return iVar1;
}

/*
 * get_word_9c  0x8c06206c
 * word a1 of the array at +0x9c
 * called by: FrogMan_gratification_events
 */
u32 get_word_9c(int a0, int a1) {
    return *(u32 *)(0x9c + a0 + a1 * 4);
}

/*
 * set_word_array_9c  0x8c062084
 * +0x9c[a1] = a2
 * called by: FrogMan_gratification_events
 */
int set_word_array_9c(int a0, int a1, u32 a2) {
    int iVar1;

    iVar1 = 0x9c;
    *(u32 *)(0x9c + a0 + a1 * 4) = a2;
    return iVar1;
}

/*
 * set_field_4_s8  0x8c06209c
 * called by: FrogMan_gratification_events, Higyo_gratification_events
 */
u32 set_field_4_s8(int a0, u32 a1) {
    *(char *)(a0 + 4) = (char)a1;
    return a1;
}

/*
 * get_byte_75_2col  0x8c0620a4
 * signed byte at a0[0x75 + a1*2 + a2]
 * called by: FrogMan_gratification_events, Higyo_gratification_events
 */
int get_byte_75_2col(int a0, u32 a1, u32 a2) {
    return (int)*(char *)(a0 + (short)a1 * 2 + (int)(short)a2 + 0x75);
}

/*
 * set_byte_grid_75  0x8c0620bc
 * +0x75[a1*2 + a2] = a3
 * called by: FrogMan_gratification_events, Higyo_gratification_events
 */
u32 set_byte_grid_75(int a0, u32 a1, u32 a2, u32 a3) {
    *(u8 *)(a0 + (short)a1 * 2 + (int)(short)a2 + 0x75) = (u8)a3;
    return 0x75;
}

/*
 * game_uses_get_word_array_a4_0620d4  0x8c0620d4
 * area name: game code; nothing names its area yet; behaviour name: its main named callee is get_word_array_a4
 * called by: FrogMan_update_sleep_light
 */
int game_uses_get_word_array_a4_0620d4(int a0, int *a1, int a2, u32 a3) {
    u32 uVar1;
    u32 uVar2;
    int iVar3;
    int iVar4;
    u32 uVar5;
    int ar6_00;
    char cVar6;
    int iVar7;
    float fVar8;
    u64 in_dr0;
    float fVar9;
    code *pcVar10;
    char cVar11;
    char cVar12;

    fVar8 = (float)((u64)in_dr0 >> 0x20);
    cVar12 = '\0';
    cVar11 = '\0';
    iVar7 = 0;
    cVar6 = '\0';
    ar6_00 = a2;
    uVar1 = get_field_a4_s16(*(u32 *)(a2 + 0x18), a1);
    uVar5 = 0x3c;
    uVar1 = libgcc_divide_helper_0101e4(uVar1 & 0xffff, 0x3c);
    uVar2 = get_field_a0_035724(*(u32 *)(a2 + 0x18), uVar5);
    if ((char)uVar2 == '\x02') {
        iVar3 = percent_field_4_of_c(*(int *)(a2 + 4) + 0x90, uVar5, ar6_00, a3);
        if (iVar3 < 0x28) {
            (**(code **)(*a1 + 0x178))(a1, uVar5, ar6_00, a3);
            if (cVar12 == '\0') {
                fVar9 = 21.0;
            } else {
                fVar8 = 21.0;
                fVar9 = 2.46629e-43;
            }
            if (cVar11 == '\0' && fVar9 < fVar8) {
                (**(code **)(*a1 + 0x178))(a1, uVar5, ar6_00, a3);
                if (cVar12 == '\0') {
                    fVar8 = 25.0;
                } else {
                    fVar9 = 25.0;
                    fVar8 = 5.49309e-43;
                }
                if (cVar11 == '\0' && fVar9 < fVar8) {
                    (**(code **)(*a1 + 0x188))(a1, uVar5, ar6_00, a3);
                    if (cVar12 == '\0') {
                        pcVar10 = (code *)0x42a60000;
                    } else {
                        fVar8 = 83.0;
                        pcVar10 = get_field_40_03598c;
                    }
                    if ((cVar11 == '\0' && (float)pcVar10 < fVar8) &&
                        (iVar3 = get_field_40_03598c(*(u32 *)(a2 + 0xc), uVar5), iVar3 == 0)) {
                        cVar6 = '\x01';
                    }
                }
            }
        }
    } else {
        uVar2 = get_field_a0_035724(*(u32 *)(a2 + 0x18), uVar5);
        if ((char)uVar2 == '\x03') {
            cVar6 = '\x01';
        }
    }
    uVar2 = talk_uses_table13019c_find_row_02bef8(*(u32 *)(a2 + 4), uVar5, ar6_00);
    iVar3 = 3;
    if ((((3 < (short)uVar2) && (iVar3 = (int)cVar6, iVar3 == 1)) &&
         (iVar3 = game_uses_get_field_0_s8_02c518(*(u32 *)(a2 + 4), uVar5, ar6_00), iVar3 == -1)) &&
        (iVar3 = 0xf, 0xf < uVar1)) {
        for (iVar3 = 0; iVar4 = (**(code **)(*a1 + 0x11c))(a1, 5, ar6_00, a3), iVar3 < iVar4; iVar3 = iVar3 + 1) {
            uVar2 = 5;
            ar6_00 = iVar3;
            iVar4 = (**(code **)(*a1 + 0x100))(a1, 5, iVar3, a3);
            iVar4 = (**(code **)(*(int *)(iVar4 + 8) + 0xb4))(iVar4, uVar2, ar6_00, a3);
            if (iVar4 == 1) {
                uVar2 = 5;
                ar6_00 = iVar3;
                iVar4 = (**(code **)(*a1 + 0x100))(a1, 5, iVar3, a3);
                iVar4 = (**(code **)(*(int *)(iVar4 + 8) + 0x114))(iVar4, uVar2, ar6_00, a3);
                if ((iVar4 == 7) && (uVar2 = talk_uses_table13019c_find_row_02bef8(*(u32 *)(a2 + 4), uVar2, ar6_00),
                                     3 < (short)uVar2)) {
                    iVar7 = iVar7 + 1;
                }
            }
        }
        iVar3 = 1;
        if (1 < iVar7) {
            get_word_array_a4(*(u32 *)(a2 + 0xc), 0);
            uVar2 = 0;
            iVar7 = get_word_array_a4(*(u32 *)(a2 + 0xc), 0);
            if ((iVar7 == 0) && (*(int *)(a0 + 0x40) == 0)) {
                uVar5 = (**(code **)(*a1 + 0x148))(a1, uVar2, ar6_00, a3);
                iVar7 = get_field_ac_062880(uVar5);
                if (iVar7 == 4) {
                    uVar5 = *(u32 *)(a2 + 8);
                    iVar7 = get_field_178_035734(uVar5, uVar2, ar6_00);
                    if (iVar7 == 0) {
                        uVar2 = rand();
                        uVar5 = 0x1e;
                        iVar7 = libgcc_divide_helper_01031c(uVar2, 0x1e, ar6_00);
                        if ((iVar7 == 1) && (iVar7 = get_field_4_062878(*(u32 *)(a2 + 0xc)), iVar7 == 1)) {
                            *(u32 *)(a0 + 0x38) = 1;
                            set_word_array_a4(*(u32 *)(a2 + 0xc), 0, 1);
                            ar6_00 = 0;
                            set_word_array_a4(*(u32 *)(a2 + 0xc), 1, 0);
                            *(u32 *)(a0 + 4) = 0xd;
                            *(u32 *)(a0 + 8) = 0x5f;
                            *(u32 *)(a0 + 0xc) = 0;
                            uVar2 = 0;
                            iVar7 = *(int *)(a2 + 4) + 0x90;
                            counter_set_clamped(iVar7, 0, ar6_00);
                            uVar2 = rand();
                            uVar2 = libgcc_divide_helper_01031c(uVar2, 3, ar6_00);
                            set_field_ac(*(u32 *)(a2 + 0xc), uVar2);
                            iVar7 = get_field_ac_062880(*(u32 *)(a2 + 0xc));
                            if (iVar7 == 0) {
                                *(u32 *)(a0 + 0x40) = 0x23;
                                *(u32 *)(a0 + 0x840) = 0x23;
                                g_8c136908 = 0x23;
                                *(u32 *)(a0 + 0x844) = 0x21;
                                g_8c13690c = 0x21;
                                *(u32 *)(a0 + 0x848) = 0x36;
                                g_8c136910 = 0x36;
                            } else if (iVar7 == 1) {
                                *(u32 *)(a0 + 0x40) = 0x27;
                                *(u32 *)(a0 + 0x840) = 0x27;
                                g_8c136908 = 0x27;
                                *(u32 *)(a0 + 0x844) = 0x25;
                                g_8c13690c = 0x25;
                                *(u32 *)(a0 + 0x848) = 0x36;
                                g_8c136910 = 0x36;
                            } else if (iVar7 == 2) {
                                *(u32 *)(a0 + 0x40) = 0x32;
                                *(u32 *)(a0 + 0x840) = 0x32;
                                g_8c136908 = 0x32;
                                *(u32 *)(a0 + 0x844) = 0x34;
                                g_8c13690c = 0x34;
                                *(u32 *)(a0 + 0x848) = 0x36;
                                g_8c136910 = 0x36;
                            }
                        }
                    }
                }
            }
            uVar2 = 0;
            iVar3 = get_word_array_a4(*(u32 *)(a2 + 0xc), 0);
            if ((((iVar3 == 1) && (iVar3 = get_field_178_035734(*(u32 *)(a2 + 8), uVar2, ar6_00), iVar3 == 0)) &&
                 (iVar3 = get_word_array_a4(*(u32 *)(a2 + 0xc), 1), iVar3 == 0)) &&
                (iVar3 = *(int *)(a0 + 0x40), iVar3 == 0)) {
                counter_set_clamped(*(int *)(a2 + 4) + 0x90, 0, ar6_00);
                *(u32 *)(a0 + 0x38) = 1;
                uVar5 = 1;
                uVar2 = 1;
                set_word_array_a4(*(u32 *)(a2 + 0xc), 1, 1);
                *(u32 *)(a0 + 4) = 0xd;
                *(u32 *)(a0 + 8) = 0x5f;
                *(u32 *)(a0 + 0xc) = 0;
                iVar3 = get_field_ac_062880(*(u32 *)(a2 + 0xc));
                if (iVar3 == 0) {
                    *(u32 *)(a0 + 0x40) = 0x24;
                    *(u32 *)(a0 + 0x840) = 0x24;
                    g_8c136908 = 0x24;
                    *(u32 *)(a0 + 0x844) = 0x22;
                    g_8c13690c = 0x22;
                    *(u32 *)(a0 + 0x848) = 0x36;
                    iVar3 = 0xa4;
                    g_8c136910 = 0x36;
                } else if (iVar3 == 1) {
                    *(u32 *)(a0 + 0x40) = 0x28;
                    *(u32 *)(a0 + 0x840) = 0x28;
                    g_8c136908 = 0x28;
                    *(u32 *)(a0 + 0x844) = 0x26;
                    g_8c13690c = 0x26;
                    *(u32 *)(a0 + 0x848) = 0x36;
                    iVar3 = 0xa4;
                    g_8c136910 = 0x36;
                } else if (iVar3 == 2) {
                    *(u32 *)(a0 + 0x40) = 0x33;
                    *(u32 *)(a0 + 0x840) = 0x33;
                    g_8c136908 = 0x33;
                    *(u32 *)(a0 + 0x844) = 0x35;
                    g_8c13690c = 0x35;
                    *(u32 *)(a0 + 0x848) = 0x36;
                    iVar3 = 0xa4;
                    g_8c136910 = 0x36;
                }
            }
        }
    }
    return iVar3;
}

/*
 * get_field_4_062878  0x8c062878
 * called by: FrogMan_jump_events, FrogMan_react_tap, Higyo_attention_events, game_uses_get_word_array_a4_0620d4
 */
u32 get_field_4_062878(int a0) {
    return *(u32 *)(a0 + 4);
}

/*
 * get_field_ac_062880  0x8c062880
 * called by: FrogMan_jump_events, game_uses_get_word_array_a4_0620d4
 */
u32 get_field_ac_062880(int a0) {
    return *(u32 *)(0xac + a0);
}

/*
 * get_word_array_a4  0x8c06288c
 * +0xa4[a1] (pairs with set_word_array_a4)
 * called by: game_uses_get_word_array_a4_0620d4
 */
u32 get_word_array_a4(int a0, int a1) {
    return *(u32 *)(0xa4 + a0 + a1 * 4);
}

/*
 * FrogMan_react_environment  0x8c0628a4
 * FrogMan line: reactions to oxygen lack, low temperature and the switch being turned off
 * called by: FrogMan_update_sleep_light
 * strings: "REACTION_TEMP_LACK"; "REACTION_TEMP_LACK"; "REACTION_SWITCH_OFF"; "REACTION_SWITCH_OFF" ...
 */
u32 *FrogMan_react_environment(int a0, int *a1, int a2, char *a3) {
    int iVar1;
    u32 uVar2;
    u32 *puVar3;
    u32 uVar4;
    int a6;
    float fVar5;
    u64 in_dr0;
    float fVar6;
    char cVar7;
    char cVar8;

    cVar8 = '\0';
    cVar7 = '\0';
    a6 = a2;
    if ((*(int *)(a0 + 0x88c) == 0) &&
        (iVar1 = (**(code **)(*a1 + 0x1ac))(a1, 0, a2, a3), *(int *)(a0 + 0x884) != iVar1)) {
        uVar4 = 0;
        uVar2 = (**(code **)(*a1 + 0x1ac))(a1, 0, a6, a3);
        *(u32 *)(a0 + 0x884) = uVar2;
        if (*(int *)(a0 + 0x884) == 0) {
            (**(code **)(*a1 + 0x178))(a1, uVar4, a6, a3);
            if (cVar8 == '\0') {
                in_dr0 = CONCAT44(0x41980000, (int)(in_dr0 >> 0x20));
            } else {
                in_dr0 = 0x419f333341980000;
            }
            if (cVar7 != '\0' || (float)(in_dr0 >> 0x20) <= (float)in_dr0) {
                (**(code **)(*a1 + 0x178))(a1, uVar4, a6, a3);
                if (cVar8 == '\0') {
                    in_dr0 = CONCAT44(0x419f3333, (int)(in_dr0 >> 0x20));
                } else {
                    in_dr0 = 0x8c02602c419f3333;
                }
                if ((cVar7 != '\0' || (float)in_dr0 <= (float)(in_dr0 >> 0x20)) &&
                    (uVar2 = get_field_a4_s16(*(u32 *)(a2 + 0x18), uVar4), 2 < (u16)uVar2)) {
                    a3 = "REACTION_TEMP_LACK";
                    a6 = 0;
                    talk_start_line(a0 + 0x9c, 0x2c, 0, "REACTION_TEMP_LACK");
                    *(u32 *)(a0 + 0x88c) = 1;
                }
            }
        }
    }
    if (*(int *)(a0 + 0x890) == 0) {
        uVar2 = 0;
        iVar1 = (**(code **)(*a1 + 0x1a4))(a1, 0, a6, a3);
        if (iVar1 == 2) {
            (**(code **)(*a1 + 0x178))(a1, uVar2, a6, a3);
            if (cVar8 == '\0') {
                in_dr0 = CONCAT44(0x41c8cccd, (int)(in_dr0 >> 0x20));
            } else {
                in_dr0 = 0x32d41c8cccd;
            }
            if ((cVar7 != '\0' || (float)(in_dr0 >> 0x20) <= (float)in_dr0) &&
                (uVar2 = get_field_a4_s16(*(u32 *)(a2 + 0x18), uVar2), 2 < (u16)uVar2)) {
                a3 = "REACTION_SWITCH_OFF";
                a6 = 0;
                talk_start_line(a0 + 0x9c, 0x2c, 0, "REACTION_SWITCH_OFF");
                *(u32 *)(a0 + 0x890) = 1;
            }
        }
    }
    puVar3 = *(u32 **)(a0 + 0x894);
    if ((puVar3 == NULL) &&
        (puVar3 = (u32 *)(**(code **)(*a1 + 0x1ac))(a1, 1, a6, a3), *(u32 **)(a0 + 0x888) != puVar3)) {
        uVar4 = 1;
        uVar2 = (**(code **)(*a1 + 0x1ac))(a1, 1, a6, a3);
        *(u32 *)(a0 + 0x888) = uVar2;
        puVar3 = *(u32 **)(a0 + 0x888);
        if (puVar3 == NULL) {
            (**(code **)(*a1 + 0x17c))(a1, uVar4, a6, a3);
            if (cVar8 == '\0') {
                in_dr0 = in_dr0 >> 0x20;
            }
            puVar3 = &g_8c062af8;
            if (cVar8 == '\0') {
                fVar5 = (float)in_dr0;
                fVar6 = 79.0;
            } else {
                fVar5 = 79.0;
                fVar6 = 79.9;
            }
            if (cVar7 != '\0' || fVar6 <= fVar5) {
                (**(code **)(*a1 + 0x17c))(a1, uVar4, a6, a3);
                if (cVar8 == '\0') {
                    fVar5 = fVar6;
                }
                puVar3 = (u32 *)&g_8c062afc;
                if (cVar8 == '\0') {
                    fVar6 = 79.9;
                } else {
                    fVar5 = 79.9;
                    fVar6 = 1.16728e-42;
                }
                if (cVar7 != '\0' || fVar5 <= fVar6) {
                    uVar2 = get_field_a4_s16(*(u32 *)(a2 + 0x18), uVar4);
                    puVar3 = (u32 *)0x3;
                    if (2 < (u16)uVar2) {
                        talk_start_line(a0 + 0x9c, 0x2c, 0, "REACTION_OXYGEN_LACK");
                        puVar3 = (u32 *)0x894;
                        *(u32 *)(a0 + 0x894) = 1;
                    }
                }
            }
        }
    }
    return puVar3;
}

/*
 * ret_const_0_062b04  0x8c062b04
 */
u32 ret_const_0_062b04(void) {
    return 0;
}

/*
 * FrogMan_react_tap  0x8c062b0c
 * FrogMan line: woken by a tap, attention request, getting the sprinkler
 * called by: FrogMan_update_sleep_light
 * strings: "REACTION_WAKED_TAP"; "REACTION_WAKED_TAP"; "REACTION_WAKED_TAP"; "REACTION_WAKED_TAP" ...
 */
int FrogMan_react_tap(int a0, code *a1, code *a2, char *a3) {
    u32 uVar1;
    int iVar2;
    u32 uVar3;
    int iVar4;
    code *pcVar5;
    int ar5_00;
    code *pcVar6;
    char *ar7_00;
    float fVar7;
    u64 in_dr0;
    float fVar8;
    char cVar9;
    char cVar10;
    u8 auStack_94[16];
    u8 auStack_84[16];
    u8 auStack_74[16];
    u8 auStack_64[16];
    u8 auStack_54[16];
    u8 auStack_44[16];
    u8 auStack_34[16];
    u8 auStack_24[20];

    fVar7 = (float)((u64)in_dr0 >> 0x20);
    cVar10 = '\0';
    cVar9 = '\0';
    pcVar5 = a1;
    pcVar6 = a2;
    if (((*(char *)(a0 + 0x81) == '\x01') && (1 < *(int *)(a0 + 0x104))) && (*(int *)(a0 + 4) != 0xd)) {
        iVar2 = get_field_124_027930(*(u32 *)(a2 + 8), a1, a2, a3);
        if (iVar2 == 0) {
            iVar2 = get_field_13c_028d9c(*(u32 *)(a2 + 4), pcVar5, pcVar6);
            if (iVar2 == 6) {
                uVar1 = get_field_a4_s16(*(u32 *)(a2 + 0x18), pcVar5);
                pcVar6 = (code *)0xd;
                *(u32 *)(a0 + 4) = 0xd;
                *(u32 *)(a0 + 8) = 0x5f;
                *(u32 *)(a0 + 0xc) = 0;
                pcVar5 = (code *)0x3c;
                iVar2 = libgcc_divide_helper_010284(uVar1 & 0xffff, 0x3c, 0xd);
                if (iVar2 == 0) {
                    *(u32 *)(a0 + 0x40) = 0x11;
                    *(u32 *)(a0 + 0x840) = 0x11;
                    g_8c136908 = 0x11;
                    *(u32 *)(a0 + 0x844) = 0x36;
                    g_8c13690c = 0x36;
                    *(u32 *)(a0 + 0x848) = 0x36;
                    g_8c136910 = 0x36;
                } else if (iVar2 == 1) {
                    *(u32 *)(a0 + 0x40) = 0xb;
                    *(u32 *)(a0 + 0x840) = 0xb;
                    g_8c136908 = 0xb;
                    *(u32 *)(a0 + 0x844) = 0x2c;
                    g_8c13690c = 0x2c;
                    *(u32 *)(a0 + 0x848) = 0x36;
                    g_8c136910 = 0x36;
                    pcVar5 = (code *)0x36;
                } else {
                    Vec3_ctor_copy(auStack_44, *(int *)(a2 + 0x14) + 0x10, pcVar6, a3);
                    Vec3_assign_wrap_063818(a0, auStack_44, pcVar6, a3);
                    Vec3_dtor(auStack_44, 0xffffffff, pcVar6, a3);
                    Vec3_ctor_copy(auStack_54, *(int *)(a2 + 0x14) + 0x10, pcVar6, a3);
                    Vec3_assign_wrap_05f640(a0, auStack_54, pcVar6, a3);
                    pcVar5 = (code *)0xffffffff;
                    Vec3_dtor(auStack_54, 0xffffffff, pcVar6, a3);
                    if (cVar10 == '\0') {
                        *(u32 *)(a0 + 0x30) = 0x44960000;
                        fVar7 = 1400.0;
                        *(u32 *)(a0 + 0x78) = 0x44af0000;
                    } else {
                        *(u64 *)(a0 + 0x30) = 0x44af000044960000;
                        fVar7 = 2.95954e-42;
                        *(u64 *)(a0 + 0x78) = 0x84044af0000;
                    }
                    *(u32 *)(a0 + 0x40) = 0x12;
                    *(u32 *)(a0 + 0x840) = 0x12;
                    g_8c136908 = 0x12;
                    *(u32 *)(a0 + 0x844) = 0x36;
                    g_8c13690c = 0x36;
                    *(u32 *)(a0 + 0x848) = 0x36;
                    g_8c136910 = 0x36;
                }
            } else if (iVar2 == 7) {
                pcVar5 = Vec3_ctor_copy;
                Vec3_ctor_copy(auStack_24, *(int *)(a2 + 0x14) + 0x10, pcVar6, Vec3_ctor_copy);
                pcVar6 = (code *)auStack_24;
                Vec3_assign_wrap_063818(a0, pcVar6, pcVar6, pcVar5);
                Vec3_dtor(auStack_24, 0xffffffff, pcVar6, pcVar5);
                Vec3_ctor_copy(auStack_34, *(int *)(a2 + 0x14) + 0x10, pcVar6, pcVar5);
                Vec3_assign_wrap_05f640(a0, auStack_34, pcVar6, pcVar5);
                Vec3_dtor(auStack_34, 0xffffffff, pcVar6, pcVar5);
                if (cVar10 == '\0') {
                    *(u32 *)(a0 + 0x30) = 0x44960000;
                    fVar7 = 1400.0;
                    *(u32 *)(a0 + 0x78) = 0x44af0000;
                } else {
                    *(u64 *)(a0 + 0x30) = 0x44af000044960000;
                    fVar7 = 2.95954e-42;
                    *(u64 *)(a0 + 0x78) = 0x84044af0000;
                }
                *(u32 *)(a0 + 4) = 0xd;
                *(u32 *)(a0 + 8) = 0x4b;
                *(u32 *)(a0 + 0xc) = 0;
                *(u32 *)(a0 + 0x40) = 0x12;
                a3 = (char *)0x12;
                *(u32 *)(a0 + 0x840) = 0x12;
                g_8c136908 = 0x12;
                *(u32 *)(a0 + 0x844) = 0x36;
                g_8c13690c = 0x36;
                *(u32 *)(a0 + 0x848) = 0x36;
                g_8c136910 = 0x36;
                pcVar5 = (code *)0x12;
            }
        } else {
            iVar2 = get_field_124_027930(*(u32 *)(a2 + 8), pcVar5, pcVar6, a3);
            if (iVar2 == 3) {
                set_field_2c(*(int *)(a2 + 4) + 0xf8, 1, pcVar6, 0xf8);
                a3 = "REACTION_WAKED_TAP";
                pcVar6 = NULL;
                pcVar5 = NULL;
                talk_start_line(a0 + 0x9c, 0, 0, "REACTION_WAKED_TAP");
            }
        }
    } else if (*(char *)(a0 + 0x83) == '\x02') {
        pcVar5 = (code *)get_field_124_027930(*(u32 *)(a2 + 8), a1, a2, a3);
        if (pcVar5 == NULL) {
            iVar2 = get_field_13c_028d9c(*(u32 *)(a2 + 4), 0, pcVar6);
            if (iVar2 == 6) {
                *(u32 *)(a0 + 4) = 0xd;
                *(u32 *)(a0 + 8) = 0x5f;
                *(u32 *)(a0 + 0xc) = 0;
                *(u32 *)(a0 + 0x40) = 0x11;
                *(u32 *)(a0 + 0x840) = 0x11;
                g_8c136908 = 0x11;
                *(u32 *)(a0 + 0x844) = 0x36;
                g_8c13690c = 0x36;
                *(u32 *)(a0 + 0x848) = 0x36;
                g_8c136910 = 0x36;
                pcVar5 = NULL;
                pcVar6 = (code *)0xd;
            } else if (iVar2 == 7) {
                Vec3_ctor_copy(auStack_64, *(int *)(a2 + 0x14) + 0x10, pcVar6, a3);
                Vec3_assign_wrap_063818(a0, auStack_64, pcVar6, a3);
                Vec3_dtor(auStack_64, 0xffffffff, pcVar6, a3);
                Vec3_ctor_copy(auStack_74, *(int *)(a2 + 0x14) + 0x10, pcVar6, a3);
                Vec3_assign_wrap_05f640(a0, auStack_74, pcVar6, a3);
                Vec3_dtor(auStack_74, 0xffffffff, pcVar6, a3);
                if (cVar10 == '\0') {
                    *(u32 *)(a0 + 0x30) = 0x44960000;
                    fVar7 = 1400.0;
                    *(u32 *)(a0 + 0x78) = 0x44af0000;
                } else {
                    *(u64 *)(a0 + 0x30) = 0x44af000044960000;
                    fVar7 = 2.95954e-42;
                    *(u64 *)(a0 + 0x78) = 0x84044af0000;
                }
                *(u32 *)(a0 + 4) = 0xd;
                *(u32 *)(a0 + 8) = 0x4b;
                *(u32 *)(a0 + 0xc) = 0;
                *(u32 *)(a0 + 0x40) = 0xb;
                *(u32 *)(a0 + 0x840) = 0xb;
                g_8c136908 = 0xb;
                *(u32 *)(a0 + 0x844) = 0x2c;
                a3 = &g_8c13686c;
                g_8c13690c = 0x2c;
                *(u32 *)(a0 + 0x848) = 0x36;
                g_8c136910 = 0x36;
                pcVar5 = (code *)0x2c;
            }
        } else {
            iVar2 = get_field_124_027930(*(u32 *)(a2 + 8), pcVar5, pcVar6, a3);
            if (iVar2 == 3) {
                set_field_2c(*(int *)(a2 + 4) + 0xf8, 2, pcVar6, a3);
                a3 = "REACTION_WAKED_TAP";
                pcVar6 = NULL;
                pcVar5 = NULL;
                talk_start_line(a0 + 0x9c, 0, 0, "REACTION_WAKED_TAP");
            }
        }
    }
    if (*(char *)(a0 + 0x81) == '\x01') {
        pcVar5 = get_field_124_027930;
        iVar2 = get_field_124_027930(*(u32 *)(a2 + 8), get_field_124_027930, pcVar6, a3);
        if (iVar2 == 3) {
            set_field_2c(*(int *)(a2 + 4) + 0xf8, 1, pcVar6, a3);
            a3 = "REACTION_WAKED_TAP";
            pcVar6 = NULL;
            pcVar5 = NULL;
            talk_start_line(a0 + 0x9c, 0, 0, "REACTION_WAKED_TAP");
        }
    }
    if ((*(char *)(a0 + 0x83) == '\x02') &&
        (iVar2 = get_field_124_027930(*(u32 *)(a2 + 8), pcVar5, pcVar6, a3), iVar2 == 3)) {
        set_field_2c(*(int *)(a2 + 4) + 0xf8, 2, pcVar6, a3);
        a3 = "REACTION_WAKED_TAP";
        pcVar6 = NULL;
        pcVar5 = NULL;
        talk_start_line(a0 + 0x9c, 0, 0, "REACTION_WAKED_TAP");
    }
    *(u8 *)(a0 + 0x81) = 0;
    uVar3 = talk_uses_table13019c_find_row_02bef8(*(u32 *)(a2 + 4), pcVar5, pcVar6);
    if (((short)uVar3 == 3) &&
        (iVar2 = percent_field_4_of_c(*(int *)(a2 + 4) + 0x90, pcVar5, pcVar6, a3), iVar2 < 0x31)) {
        (**(code **)(*(int *)a1 + 0x178))(a1, pcVar5, pcVar6, a3);
        if (cVar10 == '\0') {
            fVar8 = 20.0;
        } else {
            fVar7 = 20.0;
            fVar8 = 25.0;
        }
        if (cVar9 == '\0' && fVar8 < fVar7) {
            (**(code **)(*(int *)a1 + 0x178))(a1, pcVar5, pcVar6, a3);
            if (cVar10 == '\0') {
                fVar7 = 25.0;
            } else {
                fVar8 = 25.0;
                fVar7 = 5.54914e-43;
            }
            if (((((cVar9 == '\0' && fVar8 < fVar7) &&
                   (iVar2 = (**(code **)(*(int *)a1 + 0x18c))(a1, pcVar5, pcVar6, a3), iVar2 == 0)) &&
                  (uVar3 = get_field_bc_s8(*(u32 *)(a2 + 0xc), pcVar5, pcVar6, a3), (char)uVar3 == '\x02')) &&
                 ((iVar2 = game_uses_get_field_0_s8_02c518(*(u32 *)(a2 + 4), pcVar5, pcVar6),
                   iVar2 == -1 && (uVar3 = get_field_0_s8(*(int *)(a2 + 4) + 0x78), (char)uVar3 != '\x01')))) &&
                (iVar2 = get_field_4_062878(*(u32 *)(a2 + 0xc)), iVar2 == 1)) {
                counter_set_clamped(*(int *)(a2 + 4) + 0x90, 0, pcVar6);
                set_field_4_063800(*(u32 *)(a2 + 0xc), 0);
                *(u32 *)(a0 + 0x854) = 0xfffffff6;
                pcVar5 = NULL;
                *(u32 *)(a0 + 0x86c) = 0;
            }
        }
    }
    uVar3 = talk_uses_table13019c_find_row_02bef8(*(u32 *)(a2 + 4), pcVar5, pcVar6);
    iVar2 = (int)(short)uVar3;
    if (iVar2 == 3) {
        ar5_00 = iVar2;
        iVar4 = (**(code **)(*(int *)a1 + 0x18c))(a1, 3, pcVar6, a3);
        iVar2 = 0x80;
        if (iVar4 == 0) {
            iVar4 = get_field_4_on_field_d8(*(u32 *)(*(int *)(a2 + 0x18) + 0x7cc), ar5_00, pcVar6);
            iVar2 = 0x7c;
            if ((iVar4 == 0) && (iVar2 = *(int *)(a0 + 0x854), iVar2 == -10)) {
                uVar3 = get_field_44_s8(*(u32 *)(a2 + 0xc), ar5_00, pcVar6, a3);
                if (((char)uVar3 == '\0') && (iVar2 = game_vec_02fcc4(a0, a2, pcVar6, a3), iVar2 != 1)) {
                    if (*(int *)(a0 + 900) == -1) {
                        set_field_770(a0 + 0x9c, 0, pcVar6, a3);
                        a3 = "REQUEST_ATTENTION";
                        talk_queue_mode1(a0 + 0x9c, 10, 0, "REQUEST_ATTENTION", &g_8c1369bf);
                        *(u32 *)(a0 + 0xfc) = 0;
                        pcVar6 = (code *)(a0 + 0x9c);
                        uVar3 = speech_request(0x8c35468c, *(u32 *)(a0 + 0x388), pcVar6, a3);
                        *(u32 *)(a0 + 900) = uVar3;
                        *(u32 *)(a0 + 0x14c) = 0;
                        set_field_770(a0 + 0x9c, 2, pcVar6, a3);
                    }
                    pcVar5 = (code *)(*(int *)(a0 + 0x86c) + 1);
                    *(code **)(a0 + 0x86c) = pcVar5;
                } else {
                    pcVar5 = get_field_44_s8;
                    uVar3 = get_field_44_s8(*(u32 *)(a2 + 0xc), get_field_44_s8, pcVar6, a3);
                    if (((char)uVar3 == '\0') &&
                        (pcVar5 = a2, iVar2 = game_vec_02fcc4(a0, a2, pcVar6, a3), iVar2 == 1)) {
                        pcVar5 = (code *)0x1;
                        set_field_44_u8(*(u32 *)(a2 + 0xc), 1);
                    }
                }
                uVar3 = get_field_44_s8(*(u32 *)(a2 + 0xc), pcVar5, pcVar6, a3);
                if (((char)uVar3 == '\x01') && (iVar2 = game_vec_02fcc4(a0, a2, pcVar6, a3), iVar2 == 1)) {
                    if (*(int *)(a0 + 900) == -1) {
                        set_field_770(a0 + 0x9c, 0, pcVar6, a3);
                        ar7_00 = "EVENT_GET_SPRINKLER";
                        talk_queue_mode1(a0 + 0x9c, 0x2a, 0, "EVENT_GET_SPRINKLER", &g_8c1369bf);
                        *(u32 *)(a0 + 0xfc) = 0;
                        pcVar6 = (code *)(a0 + 0x9c);
                        uVar3 = speech_request(0x8c35468c, *(u32 *)(a0 + 0x388), pcVar6, ar7_00);
                        *(u32 *)(a0 + 900) = uVar3;
                        *(u32 *)(a0 + 0x14c) = 1;
                    }
                    if ((*(int *)(a0 + 0x14c) != 0) && (*(int *)(a0 + 900) != -1)) {
                        *(u32 *)(a0 + 4) = 0xd;
                        *(u32 *)(a0 + 8) = 0x5f;
                        *(u32 *)(a0 + 0xc) = 0;
                        *(u32 *)(a0 + 0x840) = 0x12;
                        g_8c136908 = 0x12;
                        *(u32 *)(a0 + 0x844) = 0xb;
                        g_8c13690c = 0xb;
                        *(u32 *)(a0 + 0x848) = 0xc;
                        g_8c136910 = 0xc;
                        iVar2 = *(int *)(a2 + 0x14) + 0x10;
                        pcVar6 = (code *)auStack_84;
                        Vec3_ctor_copy(pcVar6, iVar2, pcVar6, iVar2);
                        Vec3_assign_wrap_063818(a0, auStack_84, pcVar6, iVar2);
                        Vec3_dtor(auStack_84, 0xffffffff, pcVar6, iVar2);
                        if (cVar10 == '\0') {
                            *(u32 *)(a0 + 0x30) = 0x44960000;
                        } else {
                            *(u64 *)(a0 + 0x30) = 0xbc44960000;
                        }
                        Vec3_ctor_copy(auStack_94, *(int *)(a2 + 0x14) + 0x10, pcVar6, iVar2);
                        Vec3_assign_wrap_05f640(a0, auStack_94, pcVar6, iVar2);
                        Vec3_dtor(auStack_94, 0xffffffff, pcVar6, iVar2);
                        if (cVar10 == '\0') {
                            *(u32 *)(a0 + 0x78) = 0x44af0000;
                        } else {
                            *(u64 *)(a0 + 0x78) = 0x8044af0000;
                        }
                        *(u8 *)(a0 + 0x80) = 0;
                    }
                }
                iVar2 = 300;
                if (300 < *(int *)(a0 + 0x86c)) {
                    uVar3 = get_field_44_s8(*(u32 *)(a2 + 0xc), *(u32 *)(a2 + 0xc), pcVar6, *(int *)(a0 + 0x86c));
                    iVar2 = (int)(char)uVar3;
                    if (iVar2 == 0) {
                        *(u32 *)(a0 + 0x854) = 0;
                        iVar2 = 0x86c;
                        *(u32 *)(a0 + 0x86c) = 0;
                    }
                }
            }
        }
    }
    return iVar2;
}

/*
 * set_field_44_u8  0x8c0637c0
 * called by: FrogMan_ending_event, FrogMan_jump_events, FrogMan_react_tap, Higyo_attention_events,
 * Higyo_choose_status_event, game_uses_Vec3_dtor_1089e4
 */
u32 set_field_44_u8(int a0, u32 a1) {
    *(u8 *)(a0 + 0x44) = (u8)a1;
    return 0x44;
}

/*
 * get_field_44_s8  0x8c0637c8
 * called by: FrogMan_ending_event, FrogMan_jump_events, FrogMan_react_tap, Higyo_attention_events,
 * game_uses_Vec3_dtor_1089e4
 */
int get_field_44_s8(int a0, u32 a1, u32 a2, u32 a3) {
    return (int)*(char *)(a0 + 0x44);
}

/*
 * get_field_4_on_field_d8  0x8c0637d0
 * calls get_field_4_0637f8 on the member at +0xd8
 * called by: FrogMan_jump_events, FrogMan_react_tap, Higyo_attention_events, Vec3_uses_clear_3_words_0c84f4,
 * confirm_exit_save, game_uses_clear_3_words_0c9588, game_uses_clear_3_words_0c9ee0, game_uses_clear_3_words_0ca88c (+9
 * more)
 */
u32 get_field_4_on_field_d8(int a0, u32 unused_a1, u32 a2) {
    u32 uVar1;

    uVar1 = get_field_4_0637f8(a0 + 0xd8);
    return uVar1;
}

/*
 * get_field_4_0637f8  0x8c0637f8
 * called by: get_field_4_on_field_d8, input_input_helper_100154, input_l_and_r_held, input_uses_get_field_4_10031c,
 * input_uses_set_timeout_120_1003b0
 */
u32 get_field_4_0637f8(int a0) {
    return *(u32 *)(a0 + 4);
}

/*
 * set_field_4_063800  0x8c063800
 * called by: FrogMan_jump_events, FrogMan_react_tap, Higyo_attention_events
 */
u32 set_field_4_063800(int a0, u32 a1) {
    u32 in_r0;

    *(u32 *)(a0 + 4) = a1;
    return in_r0;
}

/*
 * ret_const_0_063808  0x8c063808
 */
u32 ret_const_0_063808(void) {
    return 0;
}

/*
 * set_field_2c  0x8c063810
 * called by: FrogMan_react_tap, Higyo_react_tap
 */
u32 set_field_2c(int a0, u32 a1, u32 unused_a2, u32 a3) {
    u32 in_r0;

    *(u32 *)(a0 + 0x2c) = a1;
    return in_r0;
}

/*
 * Vec3_assign_wrap_063818  0x8c063818
 * called by: Class_12acc8_m1_09f470, FrogMan_ending_event, FrogMan_jump_events, FrogMan_react_tap, FrogMan_react_touch,
 * Higyo_attention_events, Higyo_react_tap, game_uses_Vec3_dtor_1089e4 (+2 more)
 */
u32 Vec3_assign_wrap_063818(int a0, u32 a1, u32 a2, u32 a3) {
    u32 uVar1;

    uVar1 = Vec3_assign(a0 + 0x28, a1, a2, a3);
    return uVar1;
}

/*
 * FrogMan_jump_events  0x8c063838
 * FrogMan line: the three jump events and attention requests
 * called by: FrogMan_update_sleep_light
 * strings: "REQUEST_ATTENTION"; "REQUEST_ATTENTION"; "EVENT_JUMP1"; "EVENT_JUMP1" ...
 */
u8 **FrogMan_jump_events(code *a0, int *a1, code *a2, u32 a3) {
    u32 uVar1;
    code *ar7_00;
    int iVar2;
    u8 **ppuVar3;
    int *ar5_00;
    int iVar4;
    code *ar5_01;
    u32 uVar5;
    code *pcVar6;
    char *ar7_01;
    float fVar7;
    u64 in_dr0;
    float fVar8;
    code *pcVar9;
    char cVar10;
    char cVar11;
    u8 auStack_50[16];
    u8 auStack_40[16];
    u8 auStack_30[20];

    cVar11 = '\0';
    cVar10 = '\0';
    uVar5 = *(u32 *)(a2 + 0xc);
    ar5_00 = a1;
    get_field_44_s8(uVar5, a1, uVar5, a3);
    game_uses_get_field_0_s8_02c518(*(u32 *)(a2 + 4), ar5_00, uVar5);
    get_field_4_on_field_d8(*(u32 *)(*(int *)(a2 + 0x18) + 0x7cc), ar5_00, uVar5);
    get_field_a0_035724(*(u32 *)(a2 + 0x18), ar5_00);
    uVar1 = talk_uses_table13019c_find_row_02bef8(*(u32 *)(a2 + 4), ar5_00, uVar5);
    iVar4 = (int)(short)uVar1;
    if (iVar4 < 4) {
        return (u8 **)(int)(short)uVar1;
    }
    ar7_00 = (code *)get_field_a0_035724(*(u32 *)(a2 + 0x18), iVar4, uVar5, *(u32 *)(a2 + 0x18));
    pcVar6 = (code *)((u32)ar7_00 & 0xff);
    if (pcVar6 != (code *)0x2) {
        return (u8 **)pcVar6;
    }
    iVar2 = get_field_178_035734(*(u32 *)(a2 + 8), iVar4, 2);
    if (iVar2 != 0) {
        return (u8 **)iVar2;
    }
    uVar1 = get_field_44_s8(*(u32 *)(a2 + 0xc), iVar4, pcVar6, ar7_00);
    ar5_01 = (code *)(int)(char)uVar1;
    if (ar5_01 == NULL) {
        uVar1 = (**(code **)(*a1 + 0x148))(a1, 0, pcVar6, ar7_00);
        iVar4 = get_field_ac_062880(uVar1);
        if (iVar4 == 4) {
            ar5_01 = *(code **)(a2 + 0x18);
            pcVar6 = (code *)get_field_4_on_field_d8(*(u32 *)(ar5_01 + 0x7cc), ar5_01, pcVar6);
            if (((pcVar6 == NULL) && (ar5_01 = (code *)game_uses_get_field_0_s8_02c518(*(u32 *)(a2 + 4), ar5_01, 0),
                                      ar5_01 == (code *)0xffffffff)) &&
                (iVar4 = get_field_124_027930(*(u32 *)(a2 + 8), 0xffffffff, pcVar6, ar7_00), iVar4 == 0)) {
                ar5_01 = *(code **)(a2 + 0x18);
                uVar1 = get_field_a0_035724(ar5_01, ar5_01);
                if ((((char)uVar1 == '\x02') && (uVar1 = get_field_3a_s8(*(u32 *)(a2 + 0xc)), (char)uVar1 == '\x01')) &&
                    ((a0[0x879] == (code)0x0 &&
                      ((iVar4 = get_field_40_03598c(*(u32 *)(a2 + 0xc), ar5_01),
                        iVar4 == 0 && (uVar1 = get_field_bc_s8(*(u32 *)(a2 + 0xc), ar5_01, pcVar6, ar7_00),
                                       (char)uVar1 == '\x02')))))) {
                    iVar4 = percent_field_4_of_c(*(int *)(a2 + 4) + 0x90, ar5_01, pcVar6, ar7_00);
                    uVar1 = (u32)((u64)in_dr0 >> 0x20);
                    if (iVar4 < 0x2d) {
                        (**(code **)(*a1 + 0x178))(a1, ar5_01, pcVar6, ar7_00);
                        if (cVar11 == '\0') {
                            in_dr0 = CONCAT44(0x41a80000, uVar1);
                        } else {
                            in_dr0 = 0xfc41a80000;
                        }
                        if (cVar10 != '\0' || (float)((u64)in_dr0 >> 0x20) <= (float)in_dr0) {
                            (**(code **)(*a1 + 0x178))(a1, ar5_01, pcVar6, ar7_00);
                            if (cVar11 == '\0') {
                                in_dr0 = CONCAT44(0x41c80000, (int)((u64)in_dr0 >> 0x20));
                            } else {
                                in_dr0 = 0x18841c80000;
                            }
                            if (cVar10 == '\0' && (float)in_dr0 < (float)((u64)in_dr0 >> 0x20)) {
                                (**(code **)(*a1 + 0x188))(a1, ar5_01, pcVar6, ar7_00);
                                if (cVar11 == '\0') {
                                    in_dr0 = CONCAT44(0x42980000, (int)((u64)in_dr0 >> 0x20));
                                } else {
                                    in_dr0 = 0x8c025f6842980000;
                                }
                                if (((cVar10 == '\0' && (float)((u64)in_dr0 >> 0x20) < (float)in_dr0) &&
                                     (uVar1 = get_field_0_s8(*(int *)(a2 + 4) + 0x78), (char)uVar1 != '\x01')) &&
                                    (iVar4 = get_field_40_03598c(*(u32 *)(a2 + 0xc), ar5_01), iVar4 == 0)) {
                                    set_field_3a_u8(*(u32 *)(a2 + 0xc), 0);
                                    a0[0x879] = (code)0x1;
                                    *(u32 *)(a0 + 0x86c) = 0;
                                    ar5_01 = NULL;
                                    counter_set_clamped(*(int *)(a2 + 4) + 0x90, 0, pcVar6);
                                    *(u32 *)(a0 + 4) = 0xd;
                                    *(u32 *)(a0 + 8) = 0x5f;
                                    *(u32 *)(a0 + 0xc) = 0;
                                    *(u32 *)(a0 + 0x840) = 0x12;
                                    ar7_00 = (code *)0x12;
                                    g_8c136908 = 0x12;
                                    *(u32 *)(a0 + 0x844) = 0xb;
                                    g_8c13690c = 0xb;
                                    pcVar6 = (code *)0xc;
                                    *(u32 *)(a0 + 0x848) = 0xc;
                                    g_8c136910 = 0xc;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    fVar7 = (float)((u64)in_dr0 >> 0x20);
    iVar4 = get_field_4_on_field_d8(*(u32 *)(*(int *)(a2 + 0x18) + 0x7cc), ar5_01, pcVar6);
    if (iVar4 == 0) {
        iVar4 = *a1;
        uVar1 = (**(code **)(iVar4 + 0x148))(a1, iVar4, pcVar6, ar7_00);
        ar7_00 = get_field_ac_062880;
        ar5_01 = (code *)get_field_ac_062880(uVar1);
        pcVar6 = ar5_01;
        if ((ar5_01 == (code *)0x4) &&
            (uVar1 = get_field_44_s8(*(u32 *)(a2 + 0xc), 4, 4, ar7_00), (char)uVar1 == '\0')) {
            pcVar6 = get_field_bc_s8;
            uVar1 = get_field_bc_s8(*(u32 *)(a2 + 0xc), ar5_01, get_field_bc_s8, ar7_00);
            if (((char)uVar1 == '\x02') &&
                (iVar4 = game_uses_get_field_0_s8_02c518(*(u32 *)(a2 + 4), ar5_01, pcVar6), iVar4 == -1)) {
                ar5_01 = get_field_124_027930;
                iVar4 = get_field_124_027930(*(u32 *)(a2 + 8), get_field_124_027930, pcVar6, ar7_00);
                if ((((iVar4 == 0) &&
                      (uVar1 = get_field_a0_035724(*(u32 *)(a2 + 0x18), ar5_01), (char)uVar1 == '\x02')) &&
                     (a0[0x879] == (code)0x0)) &&
                    (((ar5_01 = (code *)get_field_4_062878(*(u32 *)(a2 + 0xc)),
                       ar5_01 == (code *)0x1 && (iVar4 = get_field_40_03598c(*(u32 *)(a2 + 0xc), 1), iVar4 == 0)) &&
                      (uVar1 = get_field_bc_s8(*(u32 *)(a2 + 0xc), ar5_01, pcVar6, ar7_00), (char)uVar1 == '\x02')))) {
                    iVar4 = percent_field_4_of_c(*(int *)(a2 + 4) + 0x90, percent_field_4_of_c, pcVar6, ar7_00);
                    ar5_01 = (code *)0x2d;
                    if (iVar4 < 0x2d) {
                        (**(code **)(*a1 + 0x178))(a1, 0x2d, pcVar6, ar7_00);
                        if (cVar11 == '\0') {
                            fVar8 = 21.0;
                        } else {
                            fVar7 = 21.0;
                            fVar8 = 2.85865e-43;
                        }
                        if (cVar10 != '\0' || fVar8 <= fVar7) {
                            (**(code **)(*a1 + 0x178))(a1, ar5_01, pcVar6, ar7_00);
                            if (cVar11 == '\0') {
                                fVar7 = 25.0;
                            } else {
                                fVar8 = 25.0;
                                fVar7 = 5.49309e-43;
                            }
                            if (cVar10 == '\0' && fVar8 < fVar7) {
                                (**(code **)(*a1 + 0x188))(a1, ar5_01, pcVar6, ar7_00);
                                if (cVar11 == '\0') {
                                    pcVar9 = (code *)0x42980000;
                                } else {
                                    fVar7 = 76.0;
                                    pcVar9 = get_field_0_s8;
                                }
                                if (cVar10 == '\0' && (float)pcVar9 < fVar7) {
                                    ar5_01 = *(code **)(a2 + 4);
                                    uVar1 = get_field_0_s8(ar5_01 + 0x78);
                                    if ((char)uVar1 != '\x01') {
                                        if ((char)a0[0x98] < '\x04') {
                                            ar5_01 = (code *)0x5;
                                            iVar4 = (**(code **)(*a1 + 0x11c))(a1, 5, pcVar6, ar7_00);
                                            if (iVar4 != 1)
                                                goto LAB_8c063f66;
                                        }
                                        iVar4 = get_field_40_03598c(*(u32 *)(a2 + 0xc), ar5_01);
                                        if (iVar4 == 0) {
                                            counter_set_clamped(*(int *)(a2 + 4) + 0x90, 0, pcVar6);
                                            ar5_01 = NULL;
                                            set_field_4_063800(*(u32 *)(a2 + 0xc), 0);
                                            a0[0x879] = (code)0x1;
                                            *(u32 *)(a0 + 0x86c) = 0;
                                            *(u32 *)(a0 + 4) = 0xd;
                                            *(u32 *)(a0 + 8) = 0x5f;
                                            *(u32 *)(a0 + 0xc) = 0;
                                            *(u32 *)(a0 + 0x840) = 0x12;
                                            g_8c136908 = 0x12;
                                            *(u32 *)(a0 + 0x844) = 0xb;
                                            g_8c13690c = 0xb;
                                            *(u32 *)(a0 + 0x848) = 0xc;
                                            g_8c136910 = 0xc;
                                            pcVar6 = (code *)&g_8c13686c;
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
LAB_8c063f66:
    ar7_01 = (char *)ar7_00;
    if (a0[0x879] == (code)0x1) {
        if (*(int *)(a0 + 900) == -1) {
            set_field_770(a0 + 0x9c, 0, pcVar6, ar7_00);
            ar7_01 = "REQUEST_ATTENTION";
            talk_queue_mode1(a0 + 0x9c, 10, 0, "REQUEST_ATTENTION", &g_8c1369bf);
            *(u32 *)(a0 + 0xfc) = 0;
            pcVar6 = a0 + 0x9c;
            uVar1 = speech_request(0x8c35468c, *(u32 *)(a0 + 0x388), pcVar6, ar7_01);
            *(u32 *)(a0 + 900) = uVar1;
            *(u32 *)(a0 + 0x14c) = 0;
            set_field_770(a0 + 0x9c, 2, pcVar6, ar7_01);
        }
        *(int *)(a0 + 0x86c) = *(int *)(a0 + 0x86c) + 1;
        pcVar6 = a0;
        if ((300 < *(int *)(a0 + 0x86c)) ||
            (iVar4 = get_field_40_03598c(*(u32 *)(a2 + 0xc), get_field_40_03598c), iVar4 != 0)) {
            a0[0x879] = (code)0x0;
            *(u32 *)(a0 + 0x86c) = 0;
        }
        ar5_01 = a2;
        iVar4 = game_vec_02fcc4(a0, a2, pcVar6, ar7_01);
        if (((iVar4 == 1) &&
             (uVar1 = get_field_44_s8(*(u32 *)(a2 + 0xc), ar5_01, pcVar6, ar7_01), (char)uVar1 == '\0')) &&
            (iVar4 = get_field_40_03598c(*(u32 *)(a2 + 0xc), ar5_01), iVar4 == 0)) {
            set_field_44_u8(*(u32 *)(a2 + 0xc), 1);
            a0[0x879] = (code)0x2;
            ar5_01 = (code *)0x2;
            set_field_40_05f498(*(u32 *)(a2 + 0xc), 2);
        }
    }
    uVar1 = get_field_44_s8(*(u32 *)(a2 + 0xc), ar5_01, pcVar6, ar7_01);
    if ((char)uVar1 != 1) {
        return (u8 **)(int)(char)uVar1;
    }
    if ((char)a0[0x879] != 2) {
        return (u8 **)(int)(char)a0[0x879];
    }
    iVar4 = get_field_40_03598c(*(u32 *)(a2 + 0xc), ar5_01);
    if (8 < iVar4) {
        return (u8 **)8;
    }
    if (iVar4 < 0) {
        return (u8 **)8;
    }
    ppuVar3 = &switchD_8c0641a8::switchdataD_8c0641ac;
    switch (iVar4) {
    case 1:
        if (*(int *)(a0 + 0x40) == 0x1b) {
            ppuVar3 = (u8 **)0x1b;
        } else {
            set_field_44_u8(*(u32 *)(a2 + 0xc), 1);
            *(u32 *)(a0 + 4) = 0xd;
            *(u32 *)(a0 + 8) = 0x4b;
            *(u32 *)(a0 + 0xc) = 0;
            *(u32 *)(a0 + 0x40) = 0x1b;
            *(u32 *)(a0 + 0x840) = 0x1b;
            g_8c136908 = 0x1b;
            *(u32 *)(a0 + 0x844) = 0x36;
            g_8c13690c = 0x36;
            *(u32 *)(a0 + 0x848) = 0x36;
            ppuVar3 = (u8 **)0xa4;
            g_8c136910 = 0x36;
        }
        break;
    case 2:
        ppuVar3 = *(u8 ***)(a0 + 900);
        if (ppuVar3 == (u8 **)0xffffffff) {
            if (*(int *)(a0 + 4) == 0xd) {
                ppuVar3 = (u8 **)0xd;
            } else {
                iVar4 = game_vec_02fcc4(a0, a2, pcVar6, ar7_01);
                if (iVar4 == 1) {
                    ppuVar3 = (u8 **)0x1;
                } else {
                    if (*(int *)(a0 + 900) == -1) {
                        uVar1 = 0;
                        set_field_770(a0 + 0x9c, 0, pcVar6, ar7_01);
                        uVar1 = get_field_3b_s8(*(u32 *)(a2 + 0xc));
                        if ((char)uVar1 == '\0') {
                            ar7_01 = "EVENT_JUMP1";
                            talk_queue_mode1(a0 + 0x9c, 0x2a, 0, "EVENT_JUMP1", "start");
                            *(u32 *)(a0 + 0xfc) = 0;
                            pcVar6 = a0 + 0x9c;
                            uVar1 = speech_request(0x8c35468c, *(u32 *)(a0 + 0x388), pcVar6, ar7_01);
                            *(u32 *)(a0 + 900) = uVar1;
                            *(u32 *)(a0 + 0x14c) = 1;
                        } else {
                            ar7_01 = "EVENT_JUMP3";
                            talk_queue_mode1(a0 + 0x9c, 0x2a, 0, "EVENT_JUMP3", &g_8c1369bf);
                            *(u32 *)(a0 + 0xfc) = 0;
                            pcVar6 = a0 + 0x9c;
                            uVar1 = speech_request(0x8c35468c, *(u32 *)(a0 + 0x388), pcVar6, ar7_01);
                            *(u32 *)(a0 + 900) = uVar1;
                            *(u32 *)(a0 + 0x14c) = 1;
                        }
                    }
                    if (*(int *)(a0 + 0x14c) == 0) {
                        ppuVar3 = NULL;
                    } else if (*(int *)(a0 + 900) == -1) {
                        ppuVar3 = (u8 **)0xffffffff;
                    } else {
                        *(u32 *)(a0 + 4) = 0xd;
                        *(u32 *)(a0 + 8) = 0x5f;
                        *(u32 *)(a0 + 0xc) = 0;
                        *(u32 *)(a0 + 0x840) = 0x12;
                        g_8c136908 = 0x12;
                        *(u32 *)(a0 + 0x844) = 0xb;
                        g_8c13690c = 0xb;
                        *(u32 *)(a0 + 0x848) = 0xc;
                        g_8c136910 = 0xc;
                        Vec3_ctor_copy(auStack_30, *(int *)(a2 + 0x14) + 0x10, pcVar6, ar7_01);
                        Vec3_assign_wrap_063818(a0, auStack_30, pcVar6, ar7_01);
                        Vec3_dtor(auStack_30, 0xffffffff, pcVar6, ar7_01);
                        if (cVar11 == '\0') {
                            *(u32 *)(a0 + 0x30) = 0x44960000;
                        } else {
                            *(u64 *)(a0 + 0x30) = 0x13c44960000;
                        }
                        Vec3_ctor_copy(auStack_40, *(int *)(a2 + 0x14) + 0x10, pcVar6, ar7_01);
                        Vec3_assign_wrap_05f640(a0, auStack_40, pcVar6, ar7_01);
                        Vec3_dtor(auStack_40, 0xffffffff, pcVar6, ar7_01);
                        if (cVar11 == '\0') {
                            *(u32 *)(a0 + 0x78) = 0x44af0000;
                        } else {
                            *(u64 *)(a0 + 0x78) = 0x8044af0000;
                        }
                        ppuVar3 = (u8 **)0x80;
                        a0[0x80] = (code)0x0;
                    }
                }
            }
        }
        break;
    case 3:
        ppuVar3 = *(u8 ***)(a0 + 900);
        if (ppuVar3 == (u8 **)0xffffffff) {
            set_field_770(a0 + 0x9c, 0, pcVar6, ar7_01);
            talk_queue_mode1(a0 + 0x9c, 3, 0, "EVENT_JUMP2", "start");
            *(u32 *)(a0 + 0xfc) = 0;
            uVar1 = speech_request(0x8c35468c, *(u32 *)(a0 + 0x388), a0 + 0x9c, speech_request);
            uVar5 = 900;
            *(u32 *)(a0 + 900) = uVar1;
            *(u32 *)(a0 + 0x14c) = 0;
            if (*(int *)(a0 + 900) == -1) {
                ppuVar3 = (u8 **)0xffffffff;
            } else {
                *(u32 *)(a0 + 4) = 0xd;
                *(u32 *)(a0 + 8) = 0x5f;
                *(u32 *)(a0 + 0xc) = 0;
                *(u32 *)(a0 + 0x840) = 0xb;
                g_8c136908 = 0xb;
                *(u32 *)(a0 + 0x844) = 0xc;
                g_8c13690c = 0xc;
                uVar1 = 0x36;
                *(u32 *)(a0 + 0x848) = 0x36;
                g_8c136910 = 0x36;
                Vec3_ctor_copy(auStack_50, *(int *)(a2 + 0x14) + 0x10, 0x36, 900);
                Vec3_assign_wrap_05f640(a0, auStack_50, uVar1, uVar5);
                Vec3_dtor(auStack_50, 0xffffffff, uVar1, uVar5);
                if (cVar11 == '\0') {
                    *(u32 *)(a0 + 0x78) = 0x44af0000;
                } else {
                    *(u64 *)(a0 + 0x78) = 0x8044af0000;
                }
                ppuVar3 = (u8 **)0x80;
                a0[0x80] = (code)0x0;
            }
        }
        break;
    case 4:
        if (*(int *)(a0 + 0x40) == 0x1d) {
            return (u8 **)0x1d;
        }
        if (*(int *)(a0 + 0x40) == 0x1c) {
            return (u8 **)0x1c;
        }
        if (*(int *)(a0 + 0x10c) == 0) {
            return (u8 **)0;
        }
        uVar1 = get_field_3b_s8(*(u32 *)(a2 + 0xc));
        if (((((char)uVar1 < '\x02') ||
              (iVar4 = game_uses_get_field_0_s8_02c518(*(u32 *)(a2 + 4), ar5_01, pcVar6), iVar4 != -1)) ||
             (uVar1 = get_field_bc_s8(*(u32 *)(a2 + 0xc), ar5_01, pcVar6, ar7_01), (char)uVar1 != '\x02')) ||
            (*(int *)(a0 + 0x10c) != 4)) {
            if (*(int *)(a0 + 0x10c) == 4) {
            LAB_8c064842:
                inc_field_3b_s8(*(u32 *)(a2 + 0xc));
            } else {
                ar7_01 = (char *)0x10c;
                pcVar6 = *(code **)(a0 + 0x10c);
                if (pcVar6 == (code *)0x6)
                    goto LAB_8c064842;
            }
            set_field_44_u8(*(u32 *)(a2 + 0xc), 1);
            *(u32 *)(a0 + 4) = 0xd;
            *(u32 *)(a0 + 8) = 0x5f;
            *(u32 *)(a0 + 0xc) = 0;
            if (*(int *)(a0 + 0x10c) == 4) {
                *(u32 *)(a0 + 0x40) = 0x31;
                *(u32 *)(a0 + 0x840) = 0x31;
                g_8c136908 = 0x31;
            } else {
                *(u32 *)(a0 + 0x40) = 0x1c;
                ar7_01 = (char *)0x840;
                *(u32 *)(a0 + 0x840) = 0x1c;
                g_8c136908 = 0x1c;
            }
            *(u32 *)(a0 + 0x844) = 0x36;
            g_8c13690c = 0x36;
            *(u32 *)(a0 + 0x848) = 0x36;
            g_8c136910 = 0x36;
            recent5_push_unique(*(u32 *)(a2 + 0x18), 0x24, 0x1b);
        } else {
            set_field_a1_u8(*(u32 *)(a2 + 0x18), 3);
            (**(code **)(*a1 + 0xd8))(a1, *(u32 *)a2, pcVar6, ar7_01);
            set_field_44_u8(*(u32 *)(a2 + 0xc), 1);
            *(u32 *)(a0 + 4) = 0xd;
            *(u32 *)(a0 + 8) = 0x5f;
            *(u32 *)(a0 + 0xc) = 0;
            *(u32 *)(a0 + 0x40) = 0x1d;
            *(u32 *)(a0 + 0x840) = 0x1d;
            g_8c136908 = 0x1d;
            *(u32 *)(a0 + 0x844) = 0x2c;
            g_8c13690c = 0x2c;
            *(u32 *)(a0 + 0x848) = 0x36;
            g_8c136910 = 0x36;
            speech_uses_identity_0fa6c8(0x8c35468c, 0x2c, pcVar6, ar7_01);
        }
        ppuVar3 = (u8 **)0x10c;
        *(u32 *)(a0 + 0x10c) = 0;
        break;
    case 5:
        iVar4 = (**(code **)(*a1 + 0xf0))(a1, ar5_01, pcVar6, ar7_01);
        if (iVar4 == 1) {
            set_field_40_05f498(*(u32 *)(a2 + 0xc), 6);
            ppuVar3 = (u8 **)recent5_push_unique(*(u32 *)(a2 + 0x18), 0x25, 0x1b);
        } else {
            *(u32 *)(a0 + 4) = 0xd;
            *(u32 *)(a0 + 8) = 0x5f;
            *(u32 *)(a0 + 0xc) = 0;
            *(u32 *)(a0 + 0x40) = 0x2c;
            *(u32 *)(a0 + 0x840) = 0x2c;
            g_8c136908 = 0x2c;
            *(u32 *)(a0 + 0x844) = 0x36;
            g_8c13690c = 0x36;
            *(u32 *)(a0 + 0x848) = 0x36;
            ppuVar3 = (u8 **)0xa4;
            g_8c136910 = 0x36;
        }
        break;
    case 6:
        ppuVar3 = (u8 **)set_field_40_05f498(*(u32 *)(a2 + 0xc), 7);
        break;
    case 7:
        if (*(int *)(a0 + 0x40) == 0x17) {
            ppuVar3 = (u8 **)0x17;
        } else {
            set_field_44_u8(*(u32 *)(a2 + 0xc), 1);
            *(u32 *)(a0 + 4) = 0xd;
            *(u32 *)(a0 + 8) = 99;
            *(u32 *)(a0 + 0xc) = 0;
            *(u32 *)(a0 + 0x40) = 0x17;
            *(u32 *)(a0 + 0x840) = 0x17;
            g_8c136908 = 0x17;
            *(u32 *)(a0 + 0x844) = 0x36;
            g_8c13690c = 0x36;
            *(u32 *)(a0 + 0x848) = 0x36;
            ppuVar3 = (u8 **)0xa4;
            g_8c136910 = 0x36;
        }
        break;
    case 8:
        a0[0x879] = (code)0x0;
        pcVar6 = set_field_3a_u8;
        set_field_3a_u8(*(u32 *)(a2 + 0xc), 0);
        a0[0x871] = (code)0x0;
        set_field_40_05f498(*(u32 *)(a2 + 0xc), 0);
        set_field_44_u8(*(u32 *)(a2 + 0xc), 0);
        *(u32 *)(a0 + 4) = 0;
        *(u32 *)(a0 + 8) = 0x14;
        *(u32 *)(a0 + 0xc) = 0;
        *(u32 *)(a0 + 0x40) = 0;
        *(u32 *)(a0 + 0x840) = 0;
        g_8c136908 = 0;
        *(u32 *)(a0 + 0x844) = 0x36;
        g_8c13690c = 0x36;
        *(u32 *)(a0 + 0x848) = 0x36;
        g_8c136910 = 0x36;
        ppuVar3 = (u8 **)CAnimal_calls_test_0c4e2c(0x36, 0xa0, &g_8c13686c, 0x36);
    }
    return ppuVar3;
}

/*
 * ret_const_0_064b7c  0x8c064b7c
 */
u32 ret_const_0_064b7c(void) {
    return 0;
}

/*
 * inc_field_3b_s8  0x8c064b84
 * called by: FrogMan_jump_events
 */
u32 inc_field_3b_s8(int a0) {
    *(char *)(a0 + 0x3b) = *(char *)(a0 + 0x3b) + '\x01';
    return 0x3b;
}

/*
 * noop_064b9c  0x8c064b9c
 */
u32 noop_064b9c(void) {
    u32 in_r0;

    return in_r0;
}

/*
 * set_field_a1_u8  0x8c064ba0
 * called by: FrogMan_jump_events, Higyo_choose_status_event, game_uses_Vec3_dtor_1089e4
 */
int set_field_a1_u8(int a0, u32 a1) {
    int iVar1;

    iVar1 = 0xa1;
    *(u8 *)(0xa1 + a0) = (u8)a1;
    return iVar1;
}

/*
 * get_field_3b_s8  0x8c064bac
 * called by: FrogMan_jump_events
 */
int get_field_3b_s8(int a0) {
    return (int)*(char *)(a0 + 0x3b);
}

/*
 * FrogMan_react_touch  0x8c064bb4
 * FrogMan line: reactions to a flick (DEKOPIN) or tickle (TITILLATE), after a dance
 * called by: FrogMan_update_sleep_light
 * strings: "REACTION_TITILLATE"; "REACTION_TITILLATE"; "REACTION_DEKOPIN"; "REACTION_DEKOPIN" ...
 */
u32 FrogMan_react_touch(int a0, u32 unused_a1, int a2, char *a3) {
    u32 uVar1;
    int iVar2;
    u8 *puVar3;
    u8 *puVar4;
    u8 *ar5_00;
    char cVar5;
    u8 auStack_4c[16];
    u8 auStack_3c[16];
    u8 auStack_2c[36];

    cVar5 = '\0';
    ar5_00 = auStack_2c;
    puVar3 = &g_8c136968;
    iVar2 = 0x10;
    do {
        puVar4 = puVar3 + 1;
        *ar5_00 = *puVar3;
        puVar3 = puVar3 + 2;
        ar5_00[1] = *puVar4;
        ar5_00 = ar5_00 + 2;
        iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    iVar2 = a2;
    if (*(char *)(a0 + 0x84) == '\x01') {
        if (((*(int *)(a0 + 0x40) == 0x15) || (*(int *)(a0 + 0x40) != 0)) || (*(int *)(a0 + 4) == 0xd)) {
            if (((*(int *)(a0 + 0x40) == 0x15) &&
                 ((*(u32 *)(a0 + 0x40) = 0x15, *(int *)(a0 + 0x874) == 6 || (*(int *)(a0 + 0x874) == 7)))) &&
                (*(int *)(a0 + 900) == -1)) {
                set_field_770(a0 + 0x9c, 0, a2, a3);
                a3 = "REACTION_TITILLATE";
                talk_queue_mode1(a0 + 0x9c, 0x28, 0, "REACTION_TITILLATE", &g_8c1369bf);
                *(u32 *)(a0 + 0xfc) = 0;
                iVar2 = a0 + 0x9c;
                uVar1 = speech_request(0x8c35468c, *(u32 *)(a0 + 0x388), iVar2, a3);
                *(u32 *)(a0 + 900) = uVar1;
                *(u32 *)(a0 + 0x14c) = 0;
                ar5_00 = (u8 *)0x2;
                set_field_770(a0 + 0x9c, 2, iVar2, a3);
            }
        } else {
            *(u32 *)(a0 + 4) = 0xd;
            *(u32 *)(a0 + 8) = 0x4b;
            *(u32 *)(a0 + 0xc) = 0;
            *(u32 *)(a0 + 0x40) = 0x15;
            *(u32 *)(a0 + 0x840) = 0x15;
            g_8c136908 = 0x15;
            *(u32 *)(a0 + 0x844) = 0x36;
            g_8c13690c = 0x36;
            *(u32 *)(a0 + 0x848) = 0x36;
            g_8c136910 = 0x36;
            ar5_00 = (u8 *)0x1;
            set_field_68_clamp_0_4_wrap(a0 + 0x9c, 1);
        }
    } else if (*(int *)(a0 + 0x40) == 0x15) {
        *(u32 *)(a0 + 4) = 0;
        *(u32 *)(a0 + 8) = 0x14;
        *(u32 *)(a0 + 0xc) = 0;
        *(u32 *)(a0 + 0x40) = 0;
        *(u32 *)(a0 + 0x840) = 0;
        g_8c136908 = 0;
    }
    if (*(char *)(a0 + 0x85) == '\x01') {
        if (((*(int *)(a0 + 0x40) == 0x16) || (*(int *)(a0 + 0x40) != 0)) || (*(int *)(a0 + 4) == 0xd)) {
            if (*(int *)(a0 + 0x40) == 0x16) {
                *(u32 *)(a0 + 0x40) = 0x16;
            }
        } else {
            ar5_00 = (u8 *)0x1;
            set_field_68_clamp_0_4_wrap(a0 + 0x9c, 1);
            *(u32 *)(a0 + 4) = 0xd;
            *(u32 *)(a0 + 8) = 0x4b;
            *(u32 *)(a0 + 0xc) = 0;
            *(u32 *)(a0 + 0x40) = 0x16;
            *(u32 *)(a0 + 0x840) = 0x16;
            g_8c136908 = 0x16;
            *(u32 *)(a0 + 0x844) = 0x36;
            g_8c13690c = 0x36;
            *(u32 *)(a0 + 0x848) = 0x36;
            g_8c136910 = 0x36;
        }
    }
    if (*(char *)(a0 + 0x87) == '\x01') {
        if (*(int *)(a0 + 0x40) == 0x14) {
            if (*(int *)(a0 + 0x40) == 0x14) {
                *(u32 *)(a0 + 0x40) = 0x14;
            }
        } else if (((*(int *)(a0 + 0x40) == 0) || (*(int *)(a0 + 0x40) == 0x12)) || (*(int *)(a0 + 0x40) == 0x10)) {
            *(u32 *)(a0 + 4) = 0xd;
            *(u32 *)(a0 + 8) = 0x4b;
            *(u32 *)(a0 + 0xc) = 0;
            *(u32 *)(a0 + 0x40) = 0x14;
            *(u32 *)(a0 + 0x840) = 0x14;
            g_8c136908 = 0x14;
            *(u32 *)(a0 + 0x844) = 0x36;
            g_8c13690c = 0x36;
            *(u32 *)(a0 + 0x848) = 0x36;
            g_8c136910 = 0x36;
            set_field_68_clamp_0_4_wrap(a0 + 0x9c, 0xffffffff);
            a3 = "REACTION_DEKOPIN";
            iVar2 = 0;
            ar5_00 = (u8 *)0x27;
            talk_start_line(a0 + 0x9c, 0x27, 0, "REACTION_DEKOPIN");
        }
    }
    if (((*(char *)(a0 + 0x86) == '\x01') &&
         (uVar1 = get_field_0_s8(*(int *)(a2 + 4) + 0x78), (char)uVar1 != '\x01')) &&
        (uVar1 = talk_uses_table13019c_find_row_02bef8(*(u32 *)(a2 + 4), ar5_00, iVar2), 2 < (short)uVar1)) {
        if ((*(int *)(a0 + 4) == 0xd) || (*(int *)(a0 + 0x40) != 0)) {
            if ((*(int *)(a0 + 0x40) == 0x2a) || (*(int *)(a0 + 0x40) == 0x2b)) {
                uVar1 = get_field_b8_101178(*(u32 *)(*(int *)(a2 + 0x18) + 0x7cc));
                if ((char)uVar1 == '\x01') {
                    *(u32 *)(a0 + 0x844) = 0x2a;
                    g_8c13690c = 0x2a;
                    *(u8 *)(a0 + 0x91) = 1;
                    set_field_68_clamp_0_4_wrap(a0 + 0x9c, 1);
                    *(int *)(a0 + 0x860) = *(int *)(a0 + 0x860) + 1;
                }
                uVar1 = get_field_b8_101178(*(u32 *)(*(int *)(a2 + 0x18) + 0x7cc));
                if ((char)uVar1 == '\x02') {
                    *(u32 *)(a0 + 0x40) = 0x2b;
                    *(u32 *)(a0 + 0x844) = 0x2b;
                    g_8c13690c = 0x2b;
                    *(u8 *)(a0 + 0x91) = 1;
                    *(int *)(a0 + 0x860) = *(int *)(a0 + 0x860) + 1;
                }
            }
        } else {
            *(u32 *)(a0 + 4) = 0xd;
            *(u32 *)(a0 + 8) = 0x4b;
            *(u32 *)(a0 + 0xc) = 0;
            *(u32 *)(a0 + 0x40) = 0x29;
            *(u32 *)(a0 + 0x840) = 0x29;
            g_8c136908 = 0x29;
            *(u32 *)(a0 + 0x844) = 0x2a;
            g_8c13690c = 0x2a;
            *(u32 *)(a0 + 0x848) = 0x36;
            g_8c136910 = 0x36;
            Vec3_ctor_copy(auStack_3c, *(int *)(a2 + 0x14) + 0x10, iVar2, a3);
            Vec3_assign_wrap_063818(a0, auStack_3c, iVar2, a3);
            Vec3_dtor(auStack_3c, 0xffffffff, iVar2, a3);
            Vec3_ctor_copy(auStack_4c, *(int *)(a2 + 0x14) + 0x10, iVar2, a3);
            Vec3_assign_wrap_05f640(a0, auStack_4c, iVar2, a3);
            Vec3_dtor(auStack_4c, 0xffffffff, iVar2, a3);
            if (cVar5 == '\0') {
                *(u32 *)(a0 + 0x30) = 0x44960000;
            } else {
                *(u64 *)(a0 + 0x30) = 0x714061e344960000;
            }
        }
    } else if ((*(int *)(a0 + 0x40) == 0x29) || (*(int *)(a0 + 0x40) == 0x2a)) {
        if ((*(int *)(a0 + 0x40) == 0x2a) && (0x1e < *(int *)(a0 + 0x860))) {
            talk_start_line(a0 + 0x9c, 0x15, 0, "STATUS_AFTER_DANCE");
            *(u32 *)(a0 + 0x860) = 0;
        }
        *(u32 *)(a0 + 4) = 0;
        *(u32 *)(a0 + 8) = 0x14;
        *(u32 *)(a0 + 0xc) = 0;
        *(u32 *)(a0 + 0x40) = 0;
        *(u32 *)(a0 + 0x840) = 0;
        g_8c136908 = 0;
    }
    *(u8 *)(a0 + 0x84) = 0;
    *(u8 *)(a0 + 0x85) = 0;
    *(u8 *)(a0 + 0x87) = 0;
    return 0x87;
}

/*
 * talk_complain_tank_env  0x8c065228
 * queues the GRATIFIC_RID_HOT / _COLD / _HUMIDITY line for the tank condition
 * called by: FrogMan_update_sleep_light
 * strings: "GRATIFIC_RID_HOT"; "GRATIFIC_RID_COLD"; "GRATIFIC_RID_HUMIDITY"
 */
int talk_complain_tank_env(int a0, u32 unused_a1, int a2) {
    int iVar1;

    iVar1 = talk_find_slot_state2(*(u32 *)(a2 + 4));
    if (iVar1 != -1) {
        if (iVar1 == 0) {
            (*(code *)(&talk_queue_mode1))(a0 + 0x9c, 7, 0, "GRATIFIC_RID_HOT", (&DATA_8c136988) + 0x37);
            iVar1 = 0x118;
            *(u32 *)(0x118 + a0) = 7;
        } else if (iVar1 == 1) {
            (*(code *)(&talk_queue_mode1))(a0 + 0x9c, 8, 0, "GRATIFIC_RID_COLD", (&DATA_8c136988) + 0x37);
            iVar1 = 0x118;
            *(u32 *)(0x118 + a0) = 7;
        } else if (iVar1 == 3) {
            (*(code *)(&talk_queue_mode1))(a0 + 0x9c, 0x1c, 0, "GRATIFIC_RID_HUMIDITY", (&DATA_8c136988) + 0x37);
            iVar1 = 0x118;
            *(u32 *)(0x118 + a0) = 7;
        }
    }
    return iVar1;
}

/*
 * talk_uses_get_field_8_s8_0652f4  0x8c0652f4
 * area name: sits between talk functions (same compilation unit); behaviour name: its main named callee is
 * get_field_8_s8 called by: FrogMan_update_sleep_light
 */
int talk_uses_get_field_8_s8_0652f4(int a0, u32 a1, int a2, u32 a3) {
    int iVar1;
    u32 uVar2;
    u32 ar5_00;
    int ar6_00;
    char cVar3;
    u8 auStack_34[16];
    u8 auStack_24[20];

    cVar3 = '\0';
    ar6_00 = a2;
    iVar1 = game_uses_get_field_0_s8_02c518(*(u32 *)(a2 + 4), a1, a2);
    if (iVar1 == 0) {
        *(u32 *)(a0 + 0x118) = 0;
        uVar2 = get_field_8_s8(*(u32 *)(a2 + 4), a1);
        *(int *)(a0 + 0xfc) = (int)(char)uVar2;
    } else if (iVar1 == 1) {
        *(u32 *)(a0 + 0x118) = 1;
        uVar2 = get_field_8_s8(*(int *)(a2 + 4) + 0x18, a1);
        *(int *)(a0 + 0xfc) = (int)(char)uVar2;
    } else if (iVar1 == 3) {
        *(u32 *)(a0 + 0x118) = 3;
        uVar2 = get_field_8_s8(*(int *)(a2 + 4) + 0x48, a1);
        *(int *)(a0 + 0xfc) = (int)(char)uVar2;
    } else if (iVar1 == 4) {
        *(u32 *)(a0 + 0x118) = 4;
        uVar2 = get_field_8_s8(*(int *)(a2 + 4) + 0x60, a1);
        *(int *)(a0 + 0xfc) = (int)(char)uVar2;
    } else {
        *(u32 *)(a0 + 0x118) = 7;
        *(u32 *)(a0 + 0xfc) = 0;
        iVar1 = get_field_24_05eed0(*(int *)(a2 + 4) + 0xf8, a1);
        if (iVar1 == 1) {
            *(u32 *)(a0 + 0x118) = 8;
        }
        if (*(int *)(a0 + 0x40) == 3) {
            *(u32 *)(a0 + 0x118) = 9;
        }
    }
    if ((*(int *)(a0 + 0x40) == 0) && (uVar2 = get_field_0_s8(*(int *)(a2 + 4) + 0x78), (char)uVar2 == '\x01')) {
        *(u32 *)(a0 + 0x118) = 5;
        uVar2 = get_field_8_s8(*(int *)(a2 + 4) + 0x78, a1);
        *(int *)(a0 + 0xfc) = (int)(char)uVar2;
    }
    if ((*(int *)(a0 + 0x40) == 0) || (iVar1 = *(int *)(a0 + 0x40), iVar1 == 3)) {
        iVar1 = get_field_40_03598c(*(u32 *)(a2 + 0xc), a1);
        if ((iVar1 == 0) &&
            ((((iVar1 = (**(code **)(**(int **)(a2 + 8) + 0x34))(*(int **)(a2 + 8), a1, ar6_00, a3),
                iVar1 != 1 && (iVar1 = get_field_178_035734(*(u32 *)(a2 + 8), a1, ar6_00), iVar1 == 0)) &&
               (iVar1 = get_field_770_05eeb8(a0 + 0x9c), iVar1 == 0)) &&
              (*(int *)(a0 + 900) == -1)))) {
            uVar2 = get_field_a0_035724(*(u32 *)(a2 + 0x18), a1);
            ar5_00 = (u32)((char)uVar2 == '\x03');
            iVar1 = talk_set_start_scene(a0 + 0x9c, ar5_00, ar6_00, a3);
            if (iVar1 != 0) {
                for (iVar1 = 0; iVar1 < 6; iVar1 = iVar1 + 1) {
                    uVar2 = get_field_0_s8(iVar1 * 0x18 + *(int *)(a2 + 4));
                    if ((char)uVar2 == '\x01') {
                        *(u32 *)(a0 + iVar1 * 4 + 0x11c) = 1;
                    } else {
                        *(u32 *)(a0 + iVar1 * 4 + 0x11c) = 0;
                    }
                }
                ar6_00 = a0 + 0x9c;
                uVar2 = speech_request(0x8c35468c, 1, ar6_00, a3);
                *(u32 *)(a0 + 900) = uVar2;
            }
            if ((*(int *)(a0 + 0x40) == 3) && (*(int *)(a0 + 900) != -1)) {
                set_field_770(a0 + 0x9c, 1, ar6_00, a3);
            }
        }
        iVar1 = *(int *)(a0 + 4);
        if (((iVar1 == 0) && (iVar1 = 0, *(int *)(a0 + 0x14c) != 0)) && (iVar1 = *(int *)(a0 + 900), iVar1 != -1)) {
            *(u32 *)(a0 + 4) = 0xd;
            *(u32 *)(a0 + 8) = 0x5f;
            *(u32 *)(a0 + 0xc) = 0;
            *(u32 *)(a0 + 0x840) = 0x12;
            g_8c136908 = 0x12;
            *(u32 *)(a0 + 0x844) = 0xb;
            g_8c13690c = 0xb;
            *(u32 *)(a0 + 0x848) = 0xc;
            g_8c136910 = 0xc;
            Vec3_ctor_copy(auStack_24, *(int *)(a2 + 0x14) + 0x10, ar6_00, a3);
            Vec3_assign_wrap_063818(a0, auStack_24, ar6_00, a3);
            Vec3_dtor(auStack_24, 0xffffffff, ar6_00, a3);
            if (cVar3 == '\0') {
                *(u32 *)(a0 + 0x30) = 0x44960000;
            } else {
                *(u64 *)(a0 + 0x30) = 0x8c05f64044960000;
            }
            Vec3_ctor_copy(auStack_34, *(int *)(a2 + 0x14) + 0x10, ar6_00, a3);
            Vec3_assign_wrap_05f640(a0, auStack_34, ar6_00, a3);
            Vec3_dtor(auStack_34, 0xffffffff, ar6_00, a3);
            if (cVar3 == '\0') {
                *(u32 *)(a0 + 0x78) = 0x44af0000;
            } else {
                *(u64 *)(a0 + 0x78) = 0x8044af0000;
            }
            iVar1 = 0x80;
            *(u8 *)(a0 + 0x80) = 0;
        }
    }
    return iVar1;
}

/*
 * FrogMan_ending_event  0x8c0656d4
 * FrogMan line: starts EVENT_ENDING
 * called by: FrogMan_update_sleep_light
 * strings: "EVENT_ENDING"; "EVENT_ENDING"
 */
u32 FrogMan_ending_event(int a0, int *a1, u32 *a2, u32 a3) {
    int iVar1;
    u32 uVar2;
    code *ar5_00;
    char *ar5_01;
    u32 *ar6_00;
    u32 in_fr1;
    double dVar3;
    char cVar4;
    char cVar5;
    u8 auStack_60[16];
    u8 auStack_50[16];
    u8 auStack_40[16];
    u8 auStack_30[16];
    u32 uStack_20;
    u32 uStack_1c;
    u32 uStack_18;
    u32 uStack_14;

    cVar5 = '\0';
    cVar4 = '\0';
    ar5_00 = Vec3_ctor_zero;
    ar6_00 = a2;
    Vec3_ctor_zero(&uStack_20, Vec3_ctor_zero, a2);
    if (*(int *)(a0 + 900) == -1)
        goto LAB_8c065be6;
    if ((*(int *)(a0 + 4) == 0) && (*(int *)(a0 + 0x14c) != 0)) {
        *(u32 *)(a0 + 4) = 0xd;
        *(u32 *)(a0 + 8) = 0x5f;
        *(u32 *)(a0 + 0xc) = 0;
        *(u32 *)(a0 + 0x840) = 0x12;
        g_8c136908 = 0x12;
        *(u32 *)(a0 + 0x844) = 0xb;
        g_8c13690c = 0xb;
        *(u32 *)(a0 + 0x848) = 0xc;
        g_8c136910 = 0xc;
        Vec3_ctor_copy(auStack_30, a2[5] + 0x10, ar6_00, a3);
        Vec3_assign_wrap_063818(a0, auStack_30, ar6_00, a3);
        Vec3_dtor(auStack_30, 0xffffffff, ar6_00, a3);
        if (cVar5 == '\0') {
            *(u32 *)(a0 + 0x30) = 0x44960000;
        } else {
            in_fr1 = 0x44960000;
            *(u64 *)(a0 + 0x30) = 0x8044960000;
        }
        *(u8 *)(a0 + 0x80) = 0;
    }
    Vec3_ctor_copy(auStack_40, a2[5] + 0x10, ar6_00, a3);
    Vec3_assign_wrap_05f640(a0, auStack_40, ar6_00, a3);
    uVar2 = 0xffffffff;
    Vec3_dtor(auStack_40, 0xffffffff, ar6_00, a3);
    Vec3_ctor_copy_wrap_02f670(*a2, uVar2, ar6_00, a3, auStack_50);
    Vec3_sub(auStack_50, a2[5] + 0x10, ar6_00, a3, auStack_60);
    Vec3_assign(&uStack_20, auStack_60, ar6_00, a3);
    Vec3_dtor(auStack_60, 0xffffffff, ar6_00, a3);
    uVar2 = 0xffffffff;
    Vec3_dtor(auStack_50, 0xffffffff, ar6_00, a3);
    if (cVar5 == '\0') {
        dVar3 = (double)CONCAT44(uStack_18, in_fr1);
    } else {
        dVar3 = (double)CONCAT44(uStack_14, uStack_18);
    }
    if (cVar4 == '\0') {
        iVar1 = (int)(float)((u64)dVar3 >> 0x20);
    } else {
        iVar1 = (int)dVar3;
    }
    *(int *)(a0 + 0x158) = iVar1;
    if (cVar5 == '\0') {
        dVar3 = (double)CONCAT44(uStack_20, SUB84(dVar3, 0));
    } else {
        dVar3 = (double)CONCAT44(uStack_1c, uStack_20);
    }
    if (cVar4 == '\0') {
        iVar1 = (int)(float)((u64)dVar3 >> 0x20);
    } else {
        iVar1 = (int)dVar3;
    }
    *(int *)(a0 + 0x15c) = iVar1;
    iVar1 = get_field_89130_0fa740(0x8c35468c);
    if ((iVar1 == 3) || (iVar1 = get_field_89130_0fa740(0x8c35468c), iVar1 == 5)) {
        ar5_00 = (code *)0x1;
        set_field_c8(a2[3], 1);
    } else {
        ar5_00 = NULL;
        set_field_c8(a2[3], 0);
    }
    iVar1 = get_field_770_05eeb8(a0 + 0x9c);
    if (iVar1 == 2) {
        *(u32 *)(a0 + 0x14c) = 0;
    }
    iVar1 = speech_is_playing(0x8c35468c, ar5_00);
    if (iVar1 != 0)
        goto LAB_8c065be6;
    *(u32 *)(a0 + 0x94) = 0;
    ar5_01 = (char *)0x3;
    set_field_770(a0 + 0x9c, 3, ar6_00, a3);
    if (*(int *)(a0 + 0x40) == 0xc) {
        *(u32 *)(a0 + 4) = 0;
        *(u32 *)(a0 + 0x40) = 0;
        *(u32 *)(a0 + 8) = 0;
        *(u32 *)(a0 + 0xc) = 0;
    }
    uVar2 = talk_uses_table13019c_find_row_02bef8(a2[1], ar5_01, ar6_00);
    if ((((short)uVar2 == 3) && (iVar1 = (**(code **)(*a1 + 0x18c))(a1, ar5_01, ar6_00, a3), iVar1 == 0)) &&
        (*(int *)(a0 + 0x10c) == 2)) {
        set_field_44_u8(a2[3], 1);
        ar6_00 = (u32 *)0x1b;
        recent5_push_unique(a2[6], 0x20, 0x1b);
        set_field_3d_u8(a2[3], 1);
        (**(code **)(*a1 + 0x16c))(a1, 1, ar6_00, a3);
        *(u32 *)(a0 + 0x10c) = 0;
        ar5_01 = (char *)0x4;
        uVar2 = a2[3];
        set_field_0_u8_061180(uVar2, 4);
        *(u32 *)(a0 + 0x854) = 0;
        CAnimal_calls_test_0c4e2c(uVar2, ar5_01, ar6_00, a3);
    }
    uVar2 = talk_uses_table13019c_find_row_02bef8(a2[1], ar5_01, ar6_00);
    if (((3 < (short)uVar2) && (uVar2 = get_field_44_s8(a2[3], ar5_01, ar6_00, a3), (char)uVar2 == '\x01')) &&
        (*(int *)(a0 + 0x10c) == 7)) {
        *(u32 *)(a0 + 0x10c) = 0;
        ar5_01 = (char *)0x1;
        set_field_40_05f498(a2[3], 1);
    }
    if (((*(int *)(a0 + 0x10c) == 6) || (*(int *)(a0 + 0x10c) == 4)) &&
        ((uVar2 = talk_uses_table13019c_find_row_02bef8(a2[1], ar5_01, ar6_00),
          3 < (short)uVar2 && (uVar2 = get_field_44_s8(a2[3], ar5_01, ar6_00, a3), (char)uVar2 == '\x01')))) {
        if (*(int *)(a0 + 0x10c) == 4) {
            *(u8 *)(a0 + 0x871) = 1;
        }
        ar5_01 = (char *)0x4;
        set_field_40_05f498(a2[3], 4);
    }
    if (*(int *)(a0 + 0x10c) == 5) {
    LAB_8c065a4a:
        *(u32 *)(a0 + 0x87c) = 1;
        *(u32 *)(a0 + 0x10c) = 0;
    } else {
        ar5_01 = "EVENT_ENDING";
        iVar1 = strcmp_05edfc(a0 + 0xbc, "EVENT_ENDING");
        if (iVar1 == 0)
            goto LAB_8c065a4a;
    }
    uVar2 = get_field_0_s8(a2[1] + 0x78);
    if (((char)uVar2 == '\x01') && (*(int *)(a0 + 0x10c) == 3)) {
        game_update_fields_02e438(a2[1] + 0x78);
        *(u32 *)(a0 + 0x10c) = 0;
    }
    if (*(int *)(a0 + 0x10c) == 0xf) {
        *(u32 *)(a0 + 4) = 5;
        *(u32 *)(a0 + 8) = 0x55;
        *(u32 *)(a0 + 0xc) = 0;
        *(u32 *)(a0 + 0x40) = 5;
        *(u32 *)(a0 + 0x840) = 5;
        g_8c136908 = 5;
        *(u32 *)(a0 + 0x844) = 0x36;
        g_8c13690c = 0x36;
        *(u32 *)(a0 + 0x848) = 0x36;
        g_8c136910 = 0x36;
        *(u32 *)(a0 + 0x10c) = 0;
    }
    if ((*(int *)(a0 + 0x100) < 1) || (iVar1 = get_field_b0_065c8c(a2[3]), *(int *)(a0 + 0x100) < iVar1)) {
        ar5_00 = NULL;
        game_update_fields_02af68(*a2, 0);
    } else {
        set_field_b0(a2[3], *(u32 *)(a0 + 0x100));
        ar5_00 = (code *)0x1;
        game_update_fields_02af68(*a2, 1);
    }
    talk_set_status_format(a0 + 0x9c, ar5_00, ar6_00, a3);
    *(u8 *)(a0 + 0x80) = 1;
    *(u32 *)(a0 + 900) = 0xffffffff;
    *(u32 *)(a0 + 0xfc) = 0;
LAB_8c065be6:
    iVar1 = speech_is_playing(0x8c35468c, ar5_00);
    if ((iVar1 == 0) && ((*(int *)(a0 + 0x40) == 0xc || (*(int *)(a0 + 0x40) == 0xb)))) {
        set_field_770(a0 + 0x9c, 3, ar6_00, a3);
        *(u32 *)(a0 + 4) = 0;
        *(u32 *)(a0 + 0x40) = 0;
        *(u32 *)(a0 + 8) = 0;
        *(u32 *)(a0 + 0xc) = 0;
        *(u8 *)(a0 + 0x80) = 1;
    }
    uVar2 = Vec3_dtor(&uStack_20, 0xffffffff, ar6_00, a3);
    return uVar2;
}

/*
 * set_field_b0  0x8c065c80
 * called by: FrogMan_ending_event, game_uses_Vec3_dtor_1089e4
 */
int set_field_b0(int a0, u32 a1) {
    int iVar1;

    iVar1 = 0xb0;
    *(u32 *)(0xb0 + a0) = a1;
    return iVar1;
}

/*
 * get_field_b0_065c8c  0x8c065c8c
 * called by: FrogMan_ending_event, game_uses_Vec3_dtor_1089e4
 */
u32 get_field_b0_065c8c(int a0) {
    return *(u32 *)(0xb0 + a0);
}

/*
 * noop_065c98  0x8c065c98
 */
u32 noop_065c98(void) {
    u32 in_r0;

    return in_r0;
}

/*
 * set_field_3d_u8  0x8c065c9c
 * called by: FrogMan_ending_event
 */
u32 set_field_3d_u8(int a0, u32 a1) {
    *(u8 *)(a0 + 0x3d) = (u8)a1;
    return 0x3d;
}

/*
 * set_field_c8  0x8c065ca4
 * called by: FrogMan_ending_event, game_uses_Vec3_dtor_1089e4
 */
int set_field_c8(int a0, u32 a1) {
    int iVar1;

    iVar1 = 0xc8;
    *(u32 *)(0xc8 + a0) = a1;
    return iVar1;
}

/*
 * game_uses_get_field_0_s8_065cb0  0x8c065cb0
 * area name: game code; nothing names its area yet; behaviour name: its main named callee is get_field_0_s8
 * called by: FrogMan_update_sleep_light
 */
int game_uses_get_field_0_s8_065cb0(int a0, u32 a1, int a2) {
    u32 uVar1;
    int iVar2;
    int iVar3;

    *(u32 *)(a0 + 0x94) = *(u32 *)(a0 + 0x154);
    if (*(int *)(a0 + 900) != -1)
        goto LAB_8c065e2a;
    *(u32 *)(a0 + 0x94) = 0;
    iVar3 = *(int *)(a0 + 0x104);
    if ((iVar3 < 5) && (-1 < iVar3)) {
        switch (iVar3) {
        case 0:
            *(u32 *)(a0 + 0x94) = 0x14;
            break;
        case 1:
            *(u32 *)(a0 + 0x94) = 0x2d;
            break;
        case 4:
            *(u32 *)(a0 + 0x94) = 0x1e;
        }
    }
    iVar3 = a2;
    uVar1 = get_field_0_s8(*(int *)(a2 + 4) + 0x78);
    if ((char)uVar1 == '\x01') {
        *(u32 *)(a0 + 0x94) = 0x14;
    }
    iVar2 = *(int *)(a0 + 0x40);
    if (iVar2 < 0xf) {
        if (0xd < iVar2) {
            *(u32 *)(a0 + 0x94) = 0xf;
            goto LAB_8c065e2a;
        }
        if (5 < iVar2) {
            if (iVar2 == 9) {
                iVar3 = get_field_140_025f70(*(u32 *)(a2 + 4), a1);
                if (iVar3 == 0) {
                    *(u32 *)(a0 + 0x94) = 0x19;
                } else {
                    *(u32 *)(a0 + 0x94) = 0x1e;
                }
            }
            goto LAB_8c065e2a;
        }
        if (iVar2 < 0)
            goto LAB_8c065e2a;
        if (iVar2 != 0) {
            if (iVar2 == 3) {
                *(u32 *)(a0 + 0x94) = 0x37;
            } else if (iVar2 == 5) {
                *(u32 *)(a0 + 0x94) = 0x14;
            }
            goto LAB_8c065e2a;
        }
    } else {
        if (0x13 < iVar2) {
            if (iVar2 == 0x2f) {
                *(u32 *)(a0 + 0x94) = 0x14;
            }
            goto LAB_8c065e2a;
        }
        if (0x12 < iVar2) {
            *(u32 *)(a0 + 0x94) = 0x23;
            goto LAB_8c065e2a;
        }
        if (iVar2 != 0x10)
            goto LAB_8c065e2a;
    }
    iVar3 = game_uses_get_field_0_s8_02c518(*(u32 *)(a2 + 4), a1, iVar3);
    if (iVar3 == 0) {
        *(u32 *)(a0 + 0x94) = 0x14;
    } else if (iVar3 == 1) {
        *(u32 *)(a0 + 0x94) = 0x14;
    } else if (iVar3 == 3) {
        *(u32 *)(a0 + 0x94) = 0x14;
    } else if (iVar3 == 4) {
        *(u32 *)(a0 + 0x94) = 0x14;
    }
LAB_8c065e2a:
    iVar3 = *(int *)(a0 + 0x88);
    if (iVar3 == 1) {
        *(u32 *)(a0 + 0x94) = 0x47;
        iVar3 = 0x88;
        *(u32 *)(a0 + 0x88) = 0;
    }
    return iVar3;
}

/*
 * FrogMan_pick_idle_action  0x8c065e6c
 * FrogMan line: picks an idle action (jump, bite, paw, shiver, sneeze, tail swing, want free, what, yawn)
 * called by: FrogMan_update_sleep_light
 * strings: "IDLEACTION_SNEEZE"; "IDLEACTION_SNEEZE"; "IDLEACTION_YAWN"; "IDLEACTION_PURUPURU" ...
 */
u8 *FrogMan_pick_idle_action(int a0, u32 a1, int a2, char *a3) {
    int iVar1;
    u8 *puVar2;
    int iVar3;

    iVar3 = a2;
    if ((((*(int *)(a0 + 900) == -1) && (iVar1 = get_field_40_03598c(*(u32 *)(a2 + 0xc), a1), iVar1 == 0)) &&
         (*(int *)(a0 + 0x40) == 0x10)) &&
        (iVar1 = (**(code **)(**(int **)(a2 + 8) + 0x30))(*(int **)(a2 + 8), a1, iVar3, a3), iVar1 == 5)) {
        a3 = "IDLEACTION_SNEEZE";
        iVar3 = 0;
        a1 = 0x19;
        talk_start_line(a0 + 0x9c, 0x19, 0, "IDLEACTION_SNEEZE");
    }
    puVar2 = *(u8 **)(a0 + 900);
    if (((puVar2 == (u8 *)0xffffffff) &&
         (puVar2 = (u8 *)get_field_40_03598c(*(u32 *)(a2 + 0xc), a1), puVar2 == NULL)) &&
        (puVar2 = *(u8 **)(a0 + 4), puVar2 == NULL)) {
        iVar3 = (**(code **)(**(int **)(a2 + 8) + 0x30))(*(int **)(a2 + 8), a1, iVar3, a3);
        puVar2 = (u8 *)0xe;
        if ((iVar3 < 0xf) && (puVar2 = (u8 *)0x2, 1 < iVar3)) {
            puVar2 = (&switchD_8c065f22::switchdataD_8c065f28)[iVar3 + -2];
            switch (iVar3) {
            case 2:
                puVar2 = (u8 *)talk_queue_mode2(a0 + 0x9c, 0x19, 0, "IDLEACTION_YAWN", &g_8c1369bf);
                break;
            case 3:
                puVar2 = (u8 *)talk_queue_mode2(a0 + 0x9c, 0x19, 0, "IDLEACTION_PURUPURU", &g_8c1369bf);
                break;
            case 4:
                puVar2 = (u8 *)talk_queue_mode2(a0 + 0x9c, 0x19, 0, "IDLEACTION_WHAT", &g_8c1369bf);
                break;
            case 5:
                puVar2 = (u8 *)talk_queue_mode2(a0 + 0x9c, 0x19, 0, "IDLEACTION_SNEEZE", &g_8c1369bf);
                break;
            case 6:
                puVar2 = (u8 *)talk_queue_mode2(a0 + 0x9c, 0x19, 0, "IDLEACTION_STERN_SWING", &g_8c1369bf);
                break;
            case 9:
                puVar2 = (u8 *)talk_queue_mode2(a0 + 0x9c, 0x19, 0, "IDLEACTION_WANT_FREE", &g_8c1369bf);
                break;
            case 0xb:
                puVar2 = (u8 *)talk_queue_mode2(a0 + 0x9c, 0x19, 0, "IDLEACTION_PAW", &g_8c1369bf);
                break;
            case 0xd:
                puVar2 = (u8 *)talk_queue_mode2(a0 + 0x9c, 0x19, 0, "IDLEACTION_BITE", &g_8c1369bf);
                break;
            case 0xe:
                puVar2 = (u8 *)talk_queue_mode2(a0 + 0x9c, 0x19, 0, "IDLEACTION_ACTION_JUMP", &g_8c1369bf);
            }
        }
    }
    return puVar2;
}

/*
 * FrogMan_react_feed_full  0x8c0660d4
 * FrogMan line: refusing food when full, being sucked
 * called by: FrogMan_update_sleep_light
 * strings: "STATUS_SUCKED"; "STATUS_SUCKED"; "REACTION_FEED_FULL"
 */
int FrogMan_react_feed_full(int a0, int *a1, int *a2, char *a3) {
    u32 uVar1;
    int iVar2;
    int iVar3;
    int *a5;
    int *a6;
    u32 in_stack_ffffffbc;

    a5 = a1;
    a6 = a2;
    if (((*(int *)(a0 + 0x6c) == 0) && (*(int *)(a0 + 0x40) == 0)) && (*(int *)(a0 + 0x874) == 7)) {
        uVar1 = game_vec_066834(a0, a1, a2, a3);
        *(u32 *)(a0 + 0x6c) = uVar1;
        if ((*(int *)(a0 + 0x6c) == 0) || (*(int *)(a0 + 4) != 0)) {
            *(u32 *)(a0 + 0x6c) = 0;
        } else {
            (**(code **)(*(int *)(*(int *)(a0 + 0x6c) + 8) + 0x74))(*(int *)(a0 + 0x6c), a5, a6, a3);
            *(u32 *)(a0 + 0x40) = 6;
            *(u32 *)(a0 + 4) = 6;
            *(u32 *)(a0 + 0xc) = 0;
            a5 = (int *)0x2bb;
            list5_push(a0, 699);
        }
    }
    iVar2 = (**(code **)(*(int *)(*a2 + 8) + 0xb8))(*a2, a5, a6, a3);
    if ((iVar2 == 1) && (*(int *)(a0 + 4) != 1)) {
        iVar2 = get_field_6c_02f46c(*a2);
        if (iVar2 == 0) {
            iVar2 = get_field_70_05f490(*a2);
            if (iVar2 != 0)
                goto LAB_8c0661e8;
            a6 = (int *)0x1b;
            recent5_push_unique(a2[6], 0x1b, 0x1b);
            *(u32 *)(a0 + 0x38) = 2;
            *(u32 *)(a0 + 4) = 1;
            *(u32 *)(a0 + 0xc) = 0;
            *(u32 *)(a0 + 8) = 99;
            a5 = (int *)0xc7;
            list5_push(a0, 199);
        } else {
        LAB_8c0661e8:
            if (*(int *)(a0 + 4) != 0xb) {
                *(u32 *)(a0 + 0x38) = 2;
                *(u32 *)(a0 + 4) = 0xb;
                *(u32 *)(a0 + 8) = 99;
                *(u32 *)(a0 + 0x40) = 0xe;
                a5 = (int *)0x4af;
                list5_push(a0, 0x4af);
                iVar2 = get_field_c8_061174(a2[3]);
                if ((iVar2 == 0) || (*(int *)(a0 + 900) != -1)) {
                    a3 = "STATUS_SUCKED";
                    a6 = NULL;
                    a5 = (int *)0x19;
                    talk_start_line(a0 + 0x9c, 0x19, 0, "STATUS_SUCKED");
                }
                if (*(int *)(a0 + 0x6c) != 0) {
                    (**(code **)(*(int *)(*(int *)(a0 + 0x6c) + 8) + 0x78))(*(int *)(a0 + 0x6c), a5, a6, a3);
                    *(u32 *)(a0 + 0x6c) = 0;
                }
            }
        }
        if ((*(char *)(a0 + 0x878) == '\x01') && (*(int *)(a0 + 4) == 0)) {
            *(u8 *)(a0 + 0x878) = 0;
        }
    }
    uVar1 = talk_uses_table13019c_find_row_02bef8(a2[1], a5, a6);
    if ((short)uVar1 != 1) {
        uVar1 = talk_uses_table13019c_find_row_02bef8(a2[1], a5, a6);
        in_stack_ffffffbc = CONCAT22((short)uVar1, (short)in_stack_ffffffbc);
        if ((short)uVar1 != 2)
            goto LAB_8c0662e6;
    }
    iVar2 = get_field_c_06645c(a2[3]);
    if (((iVar2 == 1) && (*(char *)(a0 + 0x878) != '\x01')) && (*(int *)(a0 + 4) != 0xd)) {
        *(u8 *)(a0 + 0x878) = 1;
        list5_push(a0, 0x2b9);
        a5 = NULL;
        set_field_c_066454(a2[3], 0);
        *(u32 *)(a0 + 8) = 0x5f;
        *(u32 *)(a0 + 0xc) = 0;
        *(u32 *)(a0 + 4) = 6;
        *(u32 *)(a0 + 0x38) = 2;
    }
LAB_8c0662e6:
    if (*(int *)(a0 + 0x6c) == 0) {
        iVar2 = get_field_13c_028d9c(a2[1], a5, a6);
        if ((iVar2 == 6) && (*(int *)(a0 + 0x40) == 0)) {
            a5 = (int *)0xf;
            iVar2 = (**(code **)(*a1 + 0x11c))(a1, 0xf, a6, a3);
            if ((0 < iVar2) && ((*(int *)(a0 + 4) != 0xd && (*(int *)(a0 + 4) != 6)))) {
                a5 = (int *)0x2b9;
                list5_push(a0, 0x2b9);
                *(u32 *)(a0 + 8) = 0x5f;
                *(u32 *)(a0 + 0xc) = 0;
                *(u32 *)(a0 + 4) = 6;
                *(u32 *)(a0 + 0x38) = 2;
            }
        }
    }
    iVar2 = get_field_c4_066448(a2[3]);
    if (((iVar2 == 0) && (iVar2 = *(int *)(a0 + 0x40), iVar2 == 0)) && (iVar2 = *(int *)(a0 + 900), iVar2 == -1)) {
        iVar2 = get_field_13c_028d9c(a2[1], a5, a6);
        if (iVar2 == 7) {
            uVar1 = 10;
            iVar3 = (**(code **)(*a1 + 0x11c))(a1, 10, a6, a3);
            iVar2 = 1;
            if (0 < iVar3) {
                uVar1 = get_field_be_s8(a2[3]);
                iVar2 = (int)(char)uVar1;
                if (iVar2 == 2) {
                    uVar1 = 0;
                    talk_start_line(a0 + 0x9c, 0x2c, 0, "REACTION_FEED_FULL");
                    iVar2 = set_field_c4(a2[3], 1);
                }
            }
        }
    }
    return iVar2;
}

/*
 * set_field_c4  0x8c06643c
 * called by: FrogMan_react_feed_full, Higyo_react_feed_full
 */
int set_field_c4(int a0, u32 a1) {
    int iVar1;

    iVar1 = 0xc4;
    *(u32 *)(0xc4 + a0) = a1;
    return iVar1;
}

/*
 * get_field_c4_066448  0x8c066448
 * called by: FrogMan_react_feed_full, Higyo_react_feed_full
 */
u32 get_field_c4_066448(int a0) {
    return *(u32 *)(0xc4 + a0);
}

/*
 * set_field_c_066454  0x8c066454
 * called by: FrogMan_react_feed_full
 */
u32 set_field_c_066454(int a0, u32 a1) {
    u32 in_r0;

    *(u32 *)(a0 + 0xc) = a1;
    return in_r0;
}

/*
 * get_field_c_06645c  0x8c06645c
 * called by: FrogMan_react_feed_full
 */
u32 get_field_c_06645c(int a0) {
    return *(u32 *)(a0 + 0xc);
}

/*
 * talk_check_status_lastone  0x8c066464
 * queues the STATUS_LASTONE line once, when only one creature is left
 * called by: FrogMan_update_sleep_light
 * strings: "STATUS_LASTONE"
 */
int talk_check_status_lastone(int a0, int *a1, int a2, u32 a3) {
    int iVar1;
    u32 uVar2;
    int iVar3;
    int ar5_00;
    u32 ar5_01;

    iVar3 = a2;
    iVar1 = get_field_13c_028d9c(*(u32 *)(a2 + 4), a1, a2);
    if (iVar1 == 7) {
        iVar1 = (**(code **)(0x11c + *a1))(a1, 5, iVar3, a3);
        if (iVar1 == 1) {
            ar5_00 = a2;
            iVar1 = game_vec_02fcc4(a0, a2, iVar3, a3);
            if (iVar1 == 1) {
                iVar1 = (*(code *)(&get_field_40_03598c))(*(u32 *)(a2 + 0xc), ar5_00, iVar3, a3);
                if (iVar1 == 0) {
                    iVar1 =
                        (*(code *)(&get_field_4_on_field_d8))(*(u32 *)(0x7cc + *(int *)(a2 + 0x18)), ar5_00, iVar3, a3);
                    if (((iVar1 == 0) && (iVar1 = *(int *)(0x384 + a0), iVar1 == -1)) &&
                        (iVar1 = 3, *(char *)(0x98 + a0) < '\x04')) {
                        uVar2 = get_field_a4_s16(*(u32 *)(a2 + 0x18), ar5_00);
                        ar5_01 = 0x43;
                        iVar1 = (*(code *)(&libgcc_divide_helper_01031c))(uVar2 & 0xffff, 0x43, iVar3, a3);
                        if (iVar1 == 2) {
                            uVar2 = get_field_a4_s16(*(u32 *)(a2 + 0x18), ar5_01);
                            iVar3 = (*(code *)(&libgcc_divide_helper_0101e4))(uVar2 & 0xffff, 0x3c, iVar3, a3);
                            iVar1 = 2;
                            if ((2 < iVar3) && (iVar1 = *(int *)(0x868 + a0), iVar1 == 0)) {
                                *(u32 *)(0x868 + a0) = 1;
                                iVar1 = (*(code *)(&talk_queue_mode1))(a0 + 0x9c, 0x16, 0, "STATUS_LASTONE",
                                                                       (&DATA_8c136988) + 0x37);
                            }
                        }
                    }
                }
            }
        }
    }
    return iVar1;
}

/*
 * Class_12a078_uses_get_field_8_0665a0  0x8c0665a0
 * area name: only called from Class_12a078 methods; behaviour name: its main named callee is get_field_8_066620
 * called by: Class_12a078_m2_05eee0, FrogMan_update_sleep_light
 */
u32 *Class_12a078_uses_get_field_8_0665a0(int a0, int a1, u32 a2) {
    int iVar1;
    u32 *puVar2;

    iVar1 = game_uses_get_field_0_s8_02c518(*(u32 *)(a1 + 4), a1, a2);
    if ((iVar1 == 0) || (iVar1 != 1)) {
        if (*(int *)(a0 + 4) == 2) {
            puVar2 = (u32 *)get_field_8_066620(a0);
        } else {
            get_field_8_066620(a0);
            puVar2 = &g_8c06661c;
        }
    } else {
        puVar2 = (u32 *)&g_8c066614;
    }
    return puVar2;
}

/*
 * get_field_8_066620  0x8c066620
 * called by: Class_12a078_uses_get_field_8_0665a0, Class_12a7a8_uses_get_field_8_099ab8,
 * Class_12acc8_uses_get_field_8_0a0224, Class_12b0c4_uses_get_field_8_0ac19c, Class_12b2e8_uses_get_field_8_0b65b0,
 * Class_12c3c4_uses_get_field_8_109b18
 */
u32 get_field_8_066620(int a0) {
    return *(u32 *)(a0 + 8);
}

/*
 * talk_vec_066628  0x8c066628
 * area name: sits between talk functions (same compilation unit); behaviour name: mostly calls vec functions
 * called by: FrogMan_choose_status_event
 */
u32 talk_vec_066628(int a0, int *a1, u32 a2) {
    u32 uVar1;
    u8 *a5;
    u8 *a6;
    u8 *a7;
    char cVar2;
    u8 auStack_44[4];
    u8 auStack_40[4];
    u8 auStack_3c[4];
    u8 auStack_38[16];
    u8 auStack_28[16];
    u32 uStack_18;
    u32 uStack_14;
    u32 uStack_10;
    u32 uStack_c;

    cVar2 = '\0';
    Vec3_ctor_zero(&uStack_18, a1, a2);
    a7 = auStack_44;
    a6 = auStack_40;
    a5 = auStack_3c;
    (**(code **)(*a1 + 0x120))(a1, a5, a6, a7);
    uVar1 = get_field_4_05eed8(a0);
    switch (uVar1) {
    case 6:
        if (*(int *)(a0 + 0x6c) != 0) {
            Vec3_ctor_copy_wrap_02f670(*(u32 *)(a0 + 0x6c), a5, a6, a7, auStack_38);
            uVar1 = Vec3_assign(&uStack_18, auStack_38, a6, a7);
            uVar1 = Vec3_assign(a0 + 0x70, uVar1, a6, a7);
            Vec3_assign(a0 + 0x28, uVar1, a6, a7);
            Vec3_dtor(auStack_38, 0xffffffff, a6, a7);
            if (cVar2 == '\0') {
                *(u32 *)(a0 + 0x28) = uStack_18;
                *(u32 *)(a0 + 0x70) = uStack_18;
                *(u32 *)(a0 + 0x2c) = uStack_14;
                *(u32 *)(a0 + 0x74) = uStack_14;
                *(u32 *)(a0 + 0x30) = uStack_10;
                *(u32 *)(a0 + 0x78) = uStack_10;
            } else {
                *(u64 *)(a0 + 0x28) = CONCAT44(uStack_14, uStack_18);
                *(u64 *)(a0 + 0x70) = CONCAT44(uStack_14, uStack_18);
                *(u64 *)(a0 + 0x2c) = CONCAT44(uStack_10, uStack_14);
                *(u64 *)(a0 + 0x74) = CONCAT44(uStack_10, uStack_14);
                *(u64 *)(a0 + 0x30) = CONCAT44(uStack_c, uStack_10);
                *(u64 *)(a0 + 0x78) = CONCAT44(uStack_c, uStack_10);
            }
        }
        break;
    case 0xd:
        if (*(int *)(a0 + 0x6c) != 0) {
            Vec3_ctor_copy_wrap_02f670(*(u32 *)(a0 + 0x6c), a5, a6, a7, auStack_28);
            Vec3_assign(&uStack_18, auStack_28, a6, a7);
            Vec3_dtor(auStack_28, 0xffffffff, a6, a7);
            if (cVar2 == '\0') {
                *(u32 *)(a0 + 0x28) = uStack_18;
                *(u32 *)(a0 + 0x70) = uStack_18;
                *(u32 *)(a0 + 0x2c) = uStack_14;
                *(u32 *)(a0 + 0x74) = uStack_14;
                *(u32 *)(a0 + 0x30) = uStack_10;
                *(u32 *)(a0 + 0x78) = uStack_10;
            } else {
                *(u64 *)(a0 + 0x28) = CONCAT44(uStack_14, uStack_18);
                *(u64 *)(a0 + 0x70) = CONCAT44(uStack_14, uStack_18);
                *(u64 *)(a0 + 0x2c) = CONCAT44(uStack_10, uStack_14);
                *(u64 *)(a0 + 0x74) = CONCAT44(uStack_10, uStack_14);
                *(u64 *)(a0 + 0x30) = CONCAT44(uStack_c, uStack_10);
                *(u64 *)(a0 + 0x78) = CONCAT44(uStack_c, uStack_10);
            }
        }
    }
    uVar1 = Vec3_dtor(&uStack_18, 0xffffffff, a6, a7);
    return uVar1;
}

/*
 * game_vec_066834  0x8c066834
 * area name: game code; nothing names its area yet; behaviour name: mostly calls vec functions
 * called by: FrogMan_react_feed_full
 */
u32 game_vec_066834(int a0, int *a1, u32 *a2, u32 a3) {
    int iVar1;
    u32 uVar2;
    code *pcVar3;
    u32 uVar4;
    u32 *ar6_00;
    u8 *ar6_01;
    u8 *ar7_00;
    u8 *a6;
    u8 *puVar5;
    u32 in_fr1;
    double dVar6;
    float in_fr15;
    u32 in_fr14;
    bool bVar7;
    char cVar8;
    char cVar9;
    u8 auStack_184[4];
    u8 auStack_180[4];
    u8 auStack_17c[4];
    u8 auStack_178[16];
    u8 auStack_168[16];
    u8 auStack_158[16];
    u8 auStack_148[16];
    u8 auStack_138[16];
    u8 auStack_128[12];
    u8 auStack_11c[16];
    u8 auStack_10c[12];
    u8 auStack_100[16];
    u8 auStack_f0[16];
    u8 auStack_e0[16];
    u8 auStack_d0[16];
    u8 auStack_c0[16];
    u8 auStack_b0[12];
    u8 auStack_a4[16];
    u8 auStack_94[12];
    u8 auStack_88[12];
    u8 auStack_7c[16];
    u8 auStack_6c[16];
    u8 auStack_5c[16];
    u8 auStack_4c[16];
    u8 auStack_3c[16];
    u32 auStack_2c[5];

    cVar9 = '\0';
    cVar8 = '\0';
    uVar2 = 0;
    ar6_00 = a2;
    Vec3_ctor_zero(auStack_2c, 0, a2);
    if (cVar9 == '\0') {
        in_fr15 = 50.0;
    }
    Vec3_ctor_xyz(auStack_3c, uVar2, ar6_00, a3);
    pcVar3 = Vec3_ctor_xyz;
    Vec3_ctor_xyz(auStack_4c, Vec3_ctor_xyz, ar6_00, a3);
    Vec3_ctor_xyz(auStack_5c, pcVar3, ar6_00, a3);
    Vec3_ctor_xyz(auStack_6c, pcVar3, ar6_00, a3);
    Vec3_ctor_zero(auStack_7c, Vec3_ctor_zero, ar6_00);
    if (cVar9 == '\0') {
        auStack_2c[0] = 0;
    } else {
        auStack_2c[3] = 0;
        auStack_2c[0] = in_fr1;
    }
    dVar6 = (double)(u64)in_fr1;
    auStack_2c[2] = 0;
    auStack_2c[1] = 0;
    if (*(int *)(a0 + 0x6c) == 0) {
        ar7_00 = auStack_184;
        ar6_01 = auStack_180;
        puVar5 = auStack_17c;
        get_vec3_field_50(*a2, puVar5, ar6_01, ar7_00);
        Vec3_set_xyz(auStack_88, puVar5, ar6_01, ar7_00);
        iVar1 = game_uses_get_field_0_s8_02c518(a2[1], puVar5, ar6_01);
        if (iVar1 == 4) {
            uVar2 = talk_uses_table13019c_find_row_02bef8(a2[1], puVar5, ar6_01);
            if ((short)uVar2 < 3) {
                vec3_copy_8c02b5fc(auStack_b0, auStack_88, ar6_01);
                Vec3_vec_023484(auStack_3c, auStack_b0, ar6_01, ar7_00, auStack_c0);
                Vec3_assign(auStack_7c, auStack_c0, ar6_01, ar7_00);
                Vec3_dtor(auStack_c0, 0xffffffff, ar6_01, ar7_00);
                object_dtor_delete(auStack_b0, 0xffffffff, ar6_01, ar7_00);
            } else {
                vec3_copy_8c02b5fc(auStack_94, auStack_88, ar6_01);
                Vec3_vec_023484(auStack_5c, auStack_94, ar6_01, ar7_00, auStack_a4);
                Vec3_assign(auStack_7c, auStack_a4, ar6_01, ar7_00);
                Vec3_dtor(auStack_a4, 0xffffffff, ar6_01, ar7_00);
                object_dtor_delete(auStack_94, 0xffffffff, ar6_01, ar7_00);
            }
            a6 = NULL;
            while (true) {
                puVar5 = (u8 *)0xa;
                iVar1 = (**(code **)(*a1 + 0x11c))(a1, 10, ar6_01, ar7_00);
                if (iVar1 <= (int)a6)
                    break;
                uVar4 = 10;
                ar6_01 = a6;
                uVar2 = (**(code **)(*a1 + 0x100))(a1, 10, a6, ar7_00);
                iVar1 = get_field_6c_02f46c(uVar2);
                if (iVar1 != 0) {
                    uVar2 = 10;
                    ar6_01 = a6;
                    iVar1 = (**(code **)(*a1 + 0x100))(a1, 10, a6, ar7_00);
                    iVar1 = (**(code **)(*(int *)(iVar1 + 8) + 0x114))(iVar1, uVar2, ar6_01, ar7_00);
                    if (iVar1 == 0x13) {
                        Vec3_ctor_copy_wrap_02f670(*a2, uVar2, ar6_01, ar7_00, auStack_d0);
                        Vec3_add(auStack_d0, auStack_7c, ar6_01, ar7_00, auStack_e0);
                        uVar4 = 10;
                        ar6_01 = a6;
                        uVar2 = (**(code **)(*a1 + 0x100))(a1, 10, a6, ar7_00);
                        Vec3_ctor_copy_wrap_02f670(uVar2, uVar4, ar6_01, ar7_00, auStack_f0);
                        Vec3_sub(auStack_e0, auStack_f0, ar6_01, ar7_00, auStack_100);
                        Vec3_assign(auStack_2c, auStack_100, ar6_01, ar7_00);
                        Vec3_dtor(auStack_100, 0xffffffff, ar6_01, ar7_00);
                        Vec3_dtor(auStack_f0, 0xffffffff, ar6_01, ar7_00);
                        Vec3_dtor(auStack_e0, 0xffffffff, ar6_01, ar7_00);
                        uVar2 = 0xffffffff;
                        Vec3_dtor(auStack_d0, 0xffffffff, ar6_01, ar7_00);
                        Vec3_length_sq(auStack_2c, uVar2, ar6_01, ar7_00);
                        if (cVar8 == '\0') {
                            bVar7 = (float)((u64)dVar6 >> 0x20) < in_fr15;
                        } else {
                            bVar7 = dVar6 < (double)CONCAT44(in_fr14, in_fr15);
                        }
                        if (bVar7) {
                            uVar2 = (**(code **)(*a1 + 0x100))(a1, 10, a6, ar7_00);
                            object_dtor_delete(auStack_88, 0xffffffff, a6, ar7_00);
                            Vec3_dtor(auStack_7c, 0xffffffff, a6, ar7_00);
                            Vec3_dtor(auStack_6c, 0xffffffff, a6, ar7_00);
                            Vec3_dtor(auStack_5c, 0xffffffff, a6, ar7_00);
                            Vec3_dtor(auStack_4c, 0xffffffff, a6, ar7_00);
                            Vec3_dtor(auStack_3c, 0xffffffff, a6, ar7_00);
                            Vec3_dtor(auStack_2c, 0xffffffff, a6, ar7_00);
                            return uVar2;
                        }
                    }
                }
                a6 = a6 + 1;
            }
        }
        uVar2 = get_field_a0_035724(a2[6], puVar5);
        if ((char)uVar2 == '\x02') {
            uVar2 = talk_uses_table13019c_find_row_02bef8(a2[1], puVar5, ar6_01);
            if ((short)uVar2 < 3) {
                vec3_copy_8c02b5fc(auStack_128, auStack_88, ar6_01);
                Vec3_vec_023484(auStack_4c, auStack_128, ar6_01, ar7_00, auStack_138);
                Vec3_assign(auStack_7c, auStack_138, ar6_01, ar7_00);
                Vec3_dtor(auStack_138, 0xffffffff, ar6_01, ar7_00);
                object_dtor_delete(auStack_128, 0xffffffff, ar6_01, ar7_00);
            } else {
                vec3_copy_8c02b5fc(auStack_10c, auStack_88, ar6_01);
                Vec3_vec_023484(auStack_6c, auStack_10c, ar6_01, ar7_00, auStack_11c);
                Vec3_assign(auStack_7c, auStack_11c, ar6_01, ar7_00);
                Vec3_dtor(auStack_11c, 0xffffffff, ar6_01, ar7_00);
                object_dtor_delete(auStack_10c, 0xffffffff, ar6_01, ar7_00);
            }
            for (puVar5 = NULL; iVar1 = (**(code **)(*a1 + 0x11c))(a1, 0xd, ar6_01, ar7_00), (int)puVar5 < iVar1;
                 puVar5 = puVar5 + 1) {
                uVar4 = 0xd;
                ar6_01 = puVar5;
                uVar2 = (**(code **)(*a1 + 0x100))(a1, 0xd, puVar5, ar7_00);
                iVar1 = get_field_6c_02f46c(uVar2);
                if (iVar1 != 0) {
                    Vec3_ctor_copy_wrap_02f670(*a2, uVar4, ar6_01, ar7_00, auStack_148);
                    Vec3_add(auStack_148, auStack_7c, ar6_01, ar7_00, auStack_158);
                    uVar4 = 0xd;
                    ar6_01 = puVar5;
                    uVar2 = (**(code **)(*a1 + 0x100))(a1, 0xd, puVar5, ar7_00);
                    Vec3_ctor_copy_wrap_02f670(uVar2, uVar4, ar6_01, ar7_00, auStack_168);
                    Vec3_sub(auStack_158, auStack_168, ar6_01, ar7_00, auStack_178);
                    Vec3_assign(auStack_2c, auStack_178, ar6_01, ar7_00);
                    Vec3_dtor(auStack_178, 0xffffffff, ar6_01, ar7_00);
                    Vec3_dtor(auStack_168, 0xffffffff, ar6_01, ar7_00);
                    Vec3_dtor(auStack_158, 0xffffffff, ar6_01, ar7_00);
                    uVar2 = 0xffffffff;
                    Vec3_dtor(auStack_148, 0xffffffff, ar6_01, ar7_00);
                    Vec3_length_sq(auStack_2c, uVar2, ar6_01, ar7_00);
                    if (cVar8 == '\0') {
                        bVar7 = (float)((u64)dVar6 >> 0x20) < in_fr15;
                    } else {
                        bVar7 = dVar6 < (double)CONCAT44(in_fr14, in_fr15);
                    }
                    if (bVar7) {
                        uVar2 = (**(code **)(*a1 + 0x100))(a1, 0xd, puVar5, ar7_00);
                        object_dtor_delete(auStack_88, 0xffffffff, puVar5, ar7_00);
                        Vec3_dtor(auStack_7c, 0xffffffff, puVar5, ar7_00);
                        Vec3_dtor(auStack_6c, 0xffffffff, puVar5, ar7_00);
                        Vec3_dtor(auStack_5c, 0xffffffff, puVar5, ar7_00);
                        pcVar3 = Vec3_dtor;
                        Vec3_dtor(auStack_4c, 0xffffffff, puVar5, Vec3_dtor);
                        uVar4 = 0xffffffff;
                        Vec3_dtor(auStack_3c, 0xffffffff, 0xffffffff, pcVar3);
                        Vec3_dtor(auStack_2c, 0xffffffff, uVar4, pcVar3);
                        return uVar2;
                    }
                }
            }
        }
        object_dtor_delete(auStack_88, 0xffffffff, ar6_01, ar7_00);
        Vec3_dtor(auStack_7c, 0xffffffff, ar6_01, ar7_00);
        Vec3_dtor(auStack_6c, 0xffffffff, ar6_01, ar7_00);
        Vec3_dtor(auStack_5c, 0xffffffff, ar6_01, ar7_00);
        Vec3_dtor(auStack_4c, 0xffffffff, ar6_01, ar7_00);
        Vec3_dtor(auStack_3c, 0xffffffff, ar6_01, ar7_00);
        Vec3_dtor(auStack_2c, 0xffffffff, ar6_01, ar7_00);
        uVar2 = 0;
    } else {
        uVar2 = *(u32 *)(a0 + 0x6c);
        Vec3_dtor(auStack_7c, 0xffffffff, ar6_00, a3);
        Vec3_dtor(auStack_6c, 0xffffffff, ar6_00, a3);
        Vec3_dtor(auStack_5c, 0xffffffff, ar6_00, a3);
        Vec3_dtor(auStack_4c, 0xffffffff, ar6_00, a3);
        Vec3_dtor(auStack_3c, 0xffffffff, ar6_00, a3);
        Vec3_dtor(auStack_2c, 0xffffffff, ar6_00, a3);
    }
    return uVar2;
}

/*
 * Class_12a078_m6_0670f0  0x8c0670f0
 */
u32 Class_12a078_m6_0670f0(void) {
    int iVar1;

    iVar1 = speech_test_0fa2d8(0x8c35468c);
    return (u32)(iVar1 == 0);
}

/*
 * Class_12a078_test_06711c  0x8c06711c
 * area name: sits between Class_12a078 functions (same compilation unit); behaviour name: returns the result of a
 * comparison
 */
u32 Class_12a078_test_06711c(int a0) {
    if ((*(int *)(0x87c + a0) == 1) && (*(int *)(0x880 + a0) == 1)) {
        return 1;
    }
    return 0;
}

/*
 * get_field_150_067140  0x8c067140
 */
u32 get_field_150_067140(int a0) {
    return *(u32 *)(0x150 + a0);
}

/*
 * set_field_150  0x8c06714c
 */
int set_field_150(int a0, u32 a1) {
    int iVar1;

    iVar1 = 0x150;
    *(u32 *)(0x150 + a0) = a1;
    return iVar1;
}

/*
 * Class_12a078_m7_067158  0x8c067158
 */
int Class_12a078_m7_067158(int a0, u8 *a1) {
    int iVar1;

    *(u32 *)(0x868 + a0) = *(u32 *)(a1 + 4);
    *(u8 *)(0x98 + a0) = *a1;
    Class_12c3c4_load_record(a0 + 0x9c, a1 + 8);
    iVar1 = 0x99;
    *(u8 *)(0x99 + a0) = a1[1];
    return iVar1;
}

/*
 * Class_12a078_m8_0671a8  0x8c0671a8
 */
u32 Class_12a078_m8_0671a8(int a0, u8 *a1) {
    u32 uVar1;

    *(u32 *)(a1 + 4) = *(u32 *)(0x868 + a0);
    *a1 = *(u8 *)(0x98 + a0);
    a1[1] = *(u8 *)(0x99 + a0);
    uVar1 = Class_12c3c4_save_record(a0 + 0x9c, a1 + 8);
    return uVar1;
}

/*
 * Class_12a078_m5_0671f4  0x8c0671f4
 */
int Class_12a078_m5_0671f4(int a0, u32 a1, u32 a2, u32 a3) {
    int iVar1;
    u32 ar5_00;

    iVar1 = *(int *)(0x384 + a0);
    if (iVar1 != -1) {
        speech_stop(0x8c35468c, a1, a2, a3);
        ar5_00 = 3;
        set_field_770(a0 + 0x9c, 3, a2, a3);
        *(u8 *)(0x80 + a0) = 1;
        *(u32 *)(0x384 + a0) = 0xffffffff;
        *(u32 *)(0xfc + a0) = 0;
        talk_set_status_format(a0 + 0x9c, ar5_00, a2, a3);
        if ((*(int *)(a0 + 0x40) == 0xb) || (iVar1 = *(int *)(a0 + 0x40), iVar1 == 0xc)) {
            *(u32 *)(a0 + 4) = 0;
            *(u32 *)(a0 + 8) = 0x14;
            *(u32 *)(a0 + 0xc) = 0;
            iVar1 = 0x40;
            *(u32 *)(a0 + 0x40) = 0;
        }
    }
    return iVar1;
}

/*
 * Class_12a078_m4_067284  0x8c067284
 */
u8 *Class_12a078_m4_067284(u32 unused_a0, u32 a1, u32 a2) {
    u8 *puVar1;
    int iVar2;

    iVar2 = (int)(char)a2;
    puVar1 = (u8 *)0x4;
    if ((iVar2 < 5) && (-1 < iVar2)) {
        puVar1 = (&switchD_8c0672a4::switchdataD_8c0672a8)[iVar2];
        switch (iVar2) {
        case 1:
            puVar1 = (u8 *)recent5_push_unique(a1, 0x1d, 0x1b);
            break;
        case 2:
            puVar1 = (u8 *)recent5_push_unique(a1, 0x1c, 0x1b);
            break;
        case 3:
            puVar1 = (u8 *)recent5_push_unique(a1, 0x1e, 0x1b);
            break;
        case 4:
            puVar1 = (u8 *)recent5_push_unique(a1, 0x1f, 0x1b);
        }
    }
    return puVar1;
}

/*
 * get_field_100_067308  0x8c067308
 */
u32 get_field_100_067308(int a0) {
    return *(u32 *)(0x100 + a0);
}

/*
 * static_init_vec3s_280480  0x8c067314
 * static initialiser: builds 4 global Vec3 constants (8c280480..8c2804a4) and registers their destructors
 */
u32 static_init_vec3s_280480(u32 unused_a0, u32 a1, u32 a2, u32 a3) {
    u32 uVar1;
    code *pcVar2;
    u32 uVar3;
    char cVar4;

    cVar4 = '\0';
    uVar1 = Vec3_ctor_xyz(&g_8c125db8, a1, a2, a3);
    uVar3 = 0x8c280480;
    pcVar2 = Vec3_dtor;
    global_list_push(uVar1, Vec3_dtor, 0x8c280480, a3);
    uVar1 = Vec3_ctor_xyz(&g_8c125dc8, pcVar2, uVar3, a3);
    uVar3 = 0x8c28048c;
    pcVar2 = Vec3_dtor;
    global_list_push(uVar1, Vec3_dtor, 0x8c28048c, a3);
    uVar1 = Vec3_ctor_xyz(&g_8c125dd8, pcVar2, uVar3, a3);
    uVar3 = 0x8c280498;
    pcVar2 = Vec3_dtor;
    global_list_push(uVar1, Vec3_dtor, 0x8c280498, a3);
    uVar1 = Vec3_ctor_xyz(&g_8c125de8, pcVar2, uVar3, a3);
    global_list_push(uVar1, Vec3_dtor, 0x8c2804a4, a3);
    if (cVar4 == '\0') {
        g_8c125df8 = CONCAT44(_UNK_8c125dfc, 0x800000);
        /* WARNING: Read-only address (ram,0x8c125dfc) is written */
    } else {
        g_8c125df8 = 0xffffffff00800000;
    }
    return 0x8c125864;
}

/*
 * set_fields_0_4_0673cc  0x8c0673cc
 * stores +0x0, +0x4
 */
u32 *set_fields_0_4_0673cc(u32 *a0) {
    *a0 = 0;
    a0[1] = 0;
    return a0;
}

/*
 * free_if_nonnull_wrap_0673dc  0x8c0673dc
 */
int free_if_nonnull_wrap_0673dc(int a0, u32 a1, u32 a2, u32 a3) {
    u32 in_stack_fffffff4;

    if ((a0 != 0) && (0 < (short)a1)) {
        free_if_nonnull(a0, a1, a2, a3, CONCAT22((short)((u32)in_stack_fffffff4 >> 0x10), (short)a1));
    }
    return a0;
}

/*
 * Class_12a0c4_ctor  0x8c06740c
 * CAnimal base constructor (kind 0xe), Class_12a0c4 vtable at +8, its members, then the state reset
 * called by: CItemGLoader_state_switch_0fef94
 */
int Class_12a0c4_ctor(int a0, u32 a1) {
    u32 ar5_00;
    u32 ar6_00;
    u32 ar7_00;

    ar7_00 = 0;
    ar6_00 = 0;
    ar5_00 = 0xe;
    Class_12c1f0_ctor_kind(a0, 0xe, 0, 0, a1);
    *(u8 **)(a0 + 8) = (&DATA_8c12a0c4);
    Class_129938_ctor(a0 + 0x170, ar5_00, ar6_00);
    clear_field_0_wrap_015ab8(a0 + 0x204);
    Class_129920_ctor(a0 + 0x208, ar5_00);
    Vec3_ctor_zero(a0 + 0x268, ar5_00, ar6_00);
    Vec3_set_zero(a0 + 0x278);
    Vec3_set_one(a0 + 0x284);
    Class_12a0c4_uses_libgcc_divide_helper_067594(a0, ar5_00, ar6_00, ar7_00);
    return a0;
}

/*
 * Class_12a0c4_m0_0674c8  0x8c0674c8
 */
int Class_12a0c4_m0_0674c8(int a0, u32 a1, u32 a2, u32 a3) {
    u32 ar5_00;
    u32 in_stack_fffffff4;
    u32 ain0;

    ain0 = CONCAT22((short)((u32)in_stack_fffffff4 >> 0x10), (u16)a1);
    if (a0 != 0) {
        *(u8 **)(a0 + 8) = &g_8c12a0c4;
        free_if_nonnull_wrap_016ac4(a0 + 0x284, 0xffffffff, a2, a3);
        object_dtor_delete(a0 + 0x278, 0xffffffff, a2, a3);
        Vec3_dtor(a0 + 0x268, 0xffffffff, a2, a3);
        Class_129920_dtor(a0 + 0x208, 0xffffffff, a2, a3);
        free_if_nonnull_wrap_016bfc(a0 + 0x204, 0xffffffff, a2, a3);
        Class_129938_dtor(a0 + 0x170, 0xffffffff, a2, a3);
        ar5_00 = 0;
        Class_12c1f0_m0_0f4108(a0, 0, a2, a3);
        if (0 < (short)ain0) {
            free_if_nonnull(a0);
        }
    }
    return a0;
}

/*
 * Class_12a0c4_uses_libgcc_divide_helper_067594  0x8c067594
 * name hint from a string it uses: herb3 pvm; area name: only called from Class_12a0c4 methods; behaviour name: its
 * main named callee is libgcc_divide_helper_01031c called by: Class_12a0c4_ctor
 */
u32 Class_12a0c4_uses_libgcc_divide_helper_067594(int a0, u32 a1, u32 a2, u32 a3) {
    u32 uVar1;
    int iVar2;
    u32 in_fr1;
    u64 uVar3;
    char cVar4;

    cVar4 = '\0';
    uVar1 = rand();
    uVar1 = libgcc_divide_helper_01031c(uVar1, 4, a2);
    *(u32 *)(a0 + 0x210) = uVar1;
    *(u32 *)(a0 + 0x214) = 0x1ff;
    *(u32 *)(a0 + 0x21c) = 0xffffffff;
    *(u32 *)(a0 + 0x218) = 0xffffffff;
    *(u32 *)(a0 + 0x220) = 0;
    if (cVar4 == '\0') {
        *(u32 *)(a0 + 0x244) = 0;
    } else {
        *(u64 *)(a0 + 0x244) = (u64)in_fr1;
    }
    for (iVar2 = 0; iVar2 < 9; iVar2 = iVar2 + 1) {
        *(u8 *)(a0 + iVar2 + 0x248) = 0;
    }
    *(u32 *)(a0 + 0x230) = 0;
    if (cVar4 == '\0') {
        *(u32 *)(a0 + 0x234) = 0;
    } else {
        *(u64 *)(a0 + 0x234) = (u64)in_fr1;
    }
    if (cVar4 == '\0') {
        *(u32 *)(a0 + 0x238) = 0;
    } else {
        *(u64 *)(a0 + 0x238) = (u64)in_fr1;
    }
    if (cVar4 == '\0') {
        *(u32 *)(a0 + 0x23c) = 0;
    } else {
        *(u64 *)(a0 + 0x23c) = (u64)in_fr1;
    }
    *(u32 *)(a0 + 0x290) = 0;
    if (cVar4 == '\0') {
        *(u32 *)(a0 + 0x254) = g_8c136f2c;
        *(u32 *)(a0 + 600) = g_8c136f30;
        *(u32 *)(a0 + 0x25c) = g_8c136f34;
        uVar3 = CONCAT44(g_8c136f38, in_fr1);
        *(u32 *)(a0 + 0x260) = g_8c136f38;
    } else {
        *(u64 *)(a0 + 0x254) = CONCAT44(g_8c136f30, g_8c136f2c);
        *(u64 *)(a0 + 600) = CONCAT44(g_8c136f34, g_8c136f30);
        *(u64 *)(a0 + 0x25c) = CONCAT44(g_8c136f38, g_8c136f34);
        uVar3 = CONCAT44((u32)g_8c136f3c, g_8c136f38);
        *(u64 *)(a0 + 0x260) = uVar3;
    }
    iVar2 = libgcc_divide_helper_01031c(*(u32 *)(a0 + 0x210), 4, a2);
    *(int *)(a0 + 0x228) = iVar2 * 3 + 2;
    if (cVar4 == '\0') {
        *(u32 *)(a0 + 0x22c) = 0;
    } else {
        *(u64 *)(a0 + 0x22c) = uVar3 & 0xffffffff;
    }
    *(u32 *)(a0 + 0x224) = 0x8c2804f0;
    iVar2 = libgcc_divide_helper_01031c(*(u32 *)(a0 + 0x210), 4, a2);
    g_8c280620 = (&PTR_s_herb_3Leaves_home_njd_8c136f54)[iVar2];
    iVar2 = libgcc_divide_helper_01031c(*(u32 *)(a0 + 0x210), 4, a2);
    g_8c280628 = (&PTR_s_HERB_1_8c136f68)[iVar2];
    g_8c280618 = &PTR_s_herb_3Leaves_die_njm_8c136f84;
    g_8c28061c = &PTR_s_herb_3Leaves_die_njs_8c136fb8;
    g_8c280634 = PTR_s_herb3_pvm_8c136f78;
    g_8c280648 = PTR_s_herb5_pvm_8c136f7c;
    g_8c280638 = 0x12;
    g_8c28064c = 0x16;
    g_8c280644 = 0x8c280738;
    g_8c280658 = 0x8c280810;
    uVar1 = game_update_fields_0f532c(a0, *(u32 *)(*(int *)(a0 + 0x224) + 0xb4), a0 + 0x170, a3);
    return uVar1;
}

/*
 * Class_12a0c4_m2_0677dc  0x8c0677dc
 */
u32 Class_12a0c4_m2_0677dc(int a0, u32 a1, u32 unused_a2, u32 a3) {
    float fVar1;
    double dVar2;
    u64 in_xd0;
    char cVar3;
    char cVar4;

    cVar4 = '\0';
    cVar3 = '\0';
    if (*(int *)(a0 + 0x220) == 0) {
        Class_12a0c4_state_switch_0679cc(a0, a1, a3, a3);
        if (cVar4 == '\0') {
            dVar2 = (double)CONCAT44(*(u32 *)(a0 + 0x244), (u32)g_8c136f3c);
        } else {
            in_xd0 = CONCAT44(g_8c136f3c._4_4_, (u32)g_8c136f3c);
            dVar2 = *(double *)(a0 + 0x244);
        }
        if (cVar3 == '\0') {
            fVar1 = SUB84(dVar2, 0) * (float)((u64)dVar2 >> 0x20);
        } else {
            fVar1 = SUB84(dVar2 * dVar2, 0);
        }
        if (cVar4 == '\0') {
            *(float *)(a0 + 0x254) = fVar1;
            dVar2 = (double)CONCAT44(*(u32 *)(a0 + 0x244), g_8c136f3c._4_4_);
        } else {
            *(u64 *)(a0 + 0x254) = in_xd0;
            in_xd0 = CONCAT44(g_8c136f44, g_8c136f3c._4_4_);
            dVar2 = *(double *)(a0 + 0x244);
        }
        if (cVar3 == '\0') {
            fVar1 = SUB84(dVar2, 0) * (float)((u64)dVar2 >> 0x20);
        } else {
            fVar1 = SUB84(dVar2 * dVar2, 0);
        }
        if (cVar4 == '\0') {
            *(float *)(a0 + 600) = fVar1;
            dVar2 = (double)CONCAT44(*(u32 *)(a0 + 0x244), g_8c136f44);
        } else {
            *(u64 *)(a0 + 600) = in_xd0;
            in_xd0 = CONCAT44(g_8c136f48, g_8c136f44);
            dVar2 = *(double *)(a0 + 0x244);
        }
        if (cVar3 == '\0') {
            fVar1 = SUB84(dVar2, 0) * (float)((u64)dVar2 >> 0x20);
        } else {
            fVar1 = SUB84(dVar2 * dVar2, 0);
        }
        if (cVar4 == '\0') {
            *(float *)(a0 + 0x25c) = fVar1;
            dVar2 = (double)CONCAT44(*(u32 *)(a0 + 0x244), g_8c136f48);
        } else {
            *(u64 *)(a0 + 0x25c) = in_xd0;
            in_xd0 = CONCAT44(PTR_s_GRAPHICS_HERBLINE_8c136f4c, g_8c136f48);
            dVar2 = *(double *)(a0 + 0x244);
        }
        if (cVar3 == '\0') {
            fVar1 = SUB84(dVar2, 0) * (float)((u64)dVar2 >> 0x20);
        } else {
            fVar1 = SUB84(dVar2 * dVar2, 0);
        }
        if (cVar4 == '\0') {
            *(float *)(a0 + 0x260) = fVar1;
        } else {
            *(u64 *)(a0 + 0x260) = in_xd0;
        }
    } else if (*(int *)(a0 + 0x220) == 1) {
        if (*(int *)(a0 + 0x210) < 4) {
            Class_12a0c4_state_switch_068e64(a0, a1, a3, a3);
        } else {
            Class_12a0c4_uses_libgcc_divide_helper_068a4c(a0, a1, a3, a3);
        }
        if (cVar4 == '\0') {
            dVar2 = (double)CONCAT44(0xc3160000, *(u32 *)(a0 + 0x244));
        } else {
            in_xd0 = *(u64 *)(a0 + 0x244);
            dVar2 = 1.4411529281182106e+17;
        }
        if (cVar3 == '\0') {
            fVar1 = SUB84(dVar2, 0) * (float)((u64)dVar2 >> 0x20);
        } else {
            fVar1 = SUB84(dVar2 * dVar2, 0);
        }
        if (cVar4 == '\0') {
            dVar2 = (double)CONCAT44(0x43800000, fVar1);
        } else {
            dVar2 = -633318839156736.0;
        }
        if (cVar3 == '\0') {
            fVar1 = SUB84(dVar2, 0) / (float)((u64)dVar2 >> 0x20);
        } else {
            fVar1 = SUB84(dVar2 / dVar2, 0);
        }
        if (cVar4 == '\0') {
            *(float *)(a0 + 600) = fVar1;
            dVar2 = (double)CONCAT44(0xc3020000, *(u32 *)(a0 + 0x244));
        } else {
            *(u64 *)(a0 + 600) = in_xd0;
            in_xd0 = *(u64 *)(a0 + 0x244);
            dVar2 = -52776583693312.0;
        }
        if (cVar3 == '\0') {
            fVar1 = SUB84(dVar2, 0) * (float)((u64)dVar2 >> 0x20);
        } else {
            fVar1 = SUB84(dVar2 * dVar2, 0);
        }
        if (cVar4 == '\0') {
            dVar2 = (double)CONCAT44(0x43800000, fVar1);
        } else {
            dVar2 = -633318839156736.0;
        }
        if (cVar3 == '\0') {
            fVar1 = SUB84(dVar2, 0) / (float)((u64)dVar2 >> 0x20);
        } else {
            fVar1 = SUB84(dVar2 / dVar2, 0);
        }
        if (cVar4 == '\0') {
            *(float *)(a0 + 0x25c) = fVar1;
            dVar2 = (double)CONCAT44(0xc2c80000, *(u32 *)(a0 + 0x244));
        } else {
            *(u64 *)(a0 + 0x25c) = in_xd0;
            in_xd0 = *(u64 *)(a0 + 0x244);
            dVar2 = -4.193431188391697e-250;
        }
        if (cVar3 == '\0') {
            fVar1 = SUB84(dVar2, 0) * (float)((u64)dVar2 >> 0x20);
        } else {
            fVar1 = SUB84(dVar2 * dVar2, 0);
        }
        if (cVar4 == '\0') {
            dVar2 = (double)CONCAT44(0x43800000, fVar1);
        } else {
            dVar2 = -633318839156736.0;
        }
        if (cVar3 == '\0') {
            fVar1 = SUB84(dVar2, 0) / (float)((u64)dVar2 >> 0x20);
        } else {
            fVar1 = SUB84(dVar2 / dVar2, 0);
        }
        if (cVar4 == '\0') {
            *(float *)(a0 + 0x260) = fVar1;
        } else {
            *(u64 *)(a0 + 0x260) = in_xd0;
        }
    }
    g_8c2804e0 = 1;
    return 1;
}

/*
 * Class_12a0c4_m3_067934  0x8c067934
 */
u32 Class_12a0c4_m3_067934(int a0, u32 a1, u32 a2, u32 a3) {
    (**(code **)(*(int *)(a0 + 8) + 0x10))(a0, a1, a2, a3);
    g_8c2804e0 = 0;
    return 1;
}

/*
 * vcall_field_8_slot7  0x8c067964
 * calls virtual slot 7 of the object at +0x8
 */
u32 vcall_field_8_slot7(int a0, u32 a1, u32 a2, u32 a3) {
    u32 uVar1;

    uVar1 = (**(code **)(*(int *)(a0 + 8) + 0x1c))(a0, a1, a2, a3);
    return uVar1;
}

/*
 * set_state_flag_40_only_06797c  0x8c06797c
 * clears state bits 0x10, 0x20, 0x40 of +0x74, then sets 0x40
 */
u32 set_state_flag_40_only_06797c(int a0) {
    *(u32 *)(a0 + 0x74) = *(u32 *)(a0 + 0x74) & 0xffffffbf;
    *(u32 *)(a0 + 0x74) = *(u32 *)(a0 + 0x74) & 0xffffffef;
    *(u32 *)(a0 + 0x74) = *(u32 *)(a0 + 0x74) & 0xffffffdf;
    *(u32 *)(a0 + 0x74) = *(u32 *)(a0 + 0x74) | 0x40;
    return 0x74;
}

/*
 * Class_12a0c4_state_switch_0679cc  0x8c0679cc
 * area name: only called from Class_12a0c4 methods; behaviour name: dispatches on a state or mode value (switch)
 * called by: Class_12a0c4_m2_0677dc
 */
u32 Class_12a0c4_state_switch_0679cc(u8 **a0, u8 **a1, u8 **a2, u8 *a3) {
    bool bVar1;
    int iVar2;
    u32 uVar3;
    int iVar4;
    u32 uVar5;
    u8 *puVar6;
    u8 **ppuVar7;
    u8 *ar5_00;
    code *pcVar8;
    u8 **ppuVar9;
    u32 in_fr1;
    u32 uVar10;
    float fVar11;
    u64 uVar12;
    float fVar14;
    double dVar13;
    u64 in_xd0;
    char cVar15;
    char cVar16;
    u8 auStack_3724[1996];
    u8 auStack_2f58[16];
    u8 auStack_2f48[16];
    u8 auStack_2f38[12];
    u8 auStack_2f2c[16];
    u8 auStack_2f1c[16];
    u8 auStack_2f0c[12];
    u8 auStack_2f00[1996];
    u8 auStack_2734[1996];
    u8 auStack_1f68[1996];
    u8 auStack_179c[1996];
    u8 auStack_fd0[1996];
    u8 auStack_804[1996];
    u8 auStack_38[12];
    u8 auStack_2c[20];

    cVar16 = '\0';
    cVar15 = '\0';
    ppuVar7 = a1;
    ppuVar9 = a2;
    Vec3_ctor_zero(auStack_2c, a1, a2);
    Vec3_set_zero(auStack_38);
    if (0 < (int)a0[0x8c]) {
        pcVar8 = game_float_calc_06add8;
        ppuVar7 = a2;
        game_float_calc_06add8(a0, a2, game_float_calc_06add8, a3);
        ppuVar9 = (u8 **)pcVar8;
    }
    puVar6 = a0[0x8c];
    if (((int)puVar6 < 8) && (-1 < (int)puVar6)) {
        ppuVar9 = &switchD_8c067a30::switchdataD_8c067a50;
        switch (puVar6) {
        case NULL:
            ar5_00 = &g_8c2809a8;
            g_8c2809a8 = g_8c2809a8 + 1;
            ppuVar7 = a2;
            iVar4 = get_field_24_026024(a2, &g_8c2809a8, &switchD_8c067a30::switchdataD_8c067a50, a3);
            if (iVar4 == 0) {
                a0[0x86] = NULL;
                uVar5 = rand();
                puVar6 = (u8 *)libgcc_divide_helper_01031c(uVar5, 7, ppuVar9);
                iVar4 = 7;
                while (true) {
                    a3 = (u8 *)((int)puVar6 * 8);
                    ppuVar9 = (u8 **)0x8c2809b8;
                    if ((*(int *)(a3 + 0x8c2809b8) != 1) || (iVar4 < 1))
                        break;
                    puVar6 = puVar6 + 1;
                    iVar4 = iVar4 + -1;
                    if (6 < (int)puVar6) {
                        puVar6 = NULL;
                    }
                }
                if (0 < iVar4) {
                    *(u32 *)((int)puVar6 * 8 + 0x8c2809b8) = 1;
                    a0[0x87] = puVar6;
                }
                ar5_00 = (u8 *)((int)puVar6 * 0x10 + 0x8c280abc);
                Vec3_assign(a0 + 0xc, ar5_00, 0x8c2809b8, a3);
            } else if (iVar4 == 1) {
                a0[0x86] = (u8 *)0x1;
                uVar5 = rand();
                puVar6 = (u8 *)libgcc_divide_helper_01031c(uVar5, 6, ppuVar9);
                iVar4 = 6;
                while ((*(int *)((int)puVar6 * 8 + 0x8c2809fc) == 1 && (0 < iVar4))) {
                    puVar6 = puVar6 + 1;
                    iVar4 = iVar4 + -1;
                    if (5 < (int)puVar6) {
                        puVar6 = NULL;
                    }
                }
                if (0 < iVar4) {
                    *(u32 *)((int)puVar6 * 8 + 0x8c2809fc) = 1;
                    a0[0x87] = puVar6;
                }
                ar5_00 = (u8 *)((int)puVar6 * 0x10 + 0x8c280b74);
                Vec3_assign(a0 + 0xc, ar5_00, ppuVar9, a3);
            } else if (iVar4 == 2) {
                a0[0x86] = (u8 *)0x2;
                uVar5 = rand();
                puVar6 = (u8 *)libgcc_divide_helper_01031c(uVar5, 6, ppuVar9);
                iVar4 = 6;
                while ((*(int *)((int)puVar6 * 8 + 0x8c280a38) == 1 && (0 < iVar4))) {
                    puVar6 = puVar6 + 1;
                    iVar4 = iVar4 + -1;
                    if (5 < (int)puVar6) {
                        puVar6 = NULL;
                    }
                }
                if (0 < iVar4) {
                    *(u32 *)((int)puVar6 * 8 + 0x8c280a38) = 1;
                    a0[0x87] = puVar6;
                }
                ar5_00 = (u8 *)((int)puVar6 * 0x10 + 0x8c280c1c);
                Vec3_assign(a0 + 0xc, ar5_00, ppuVar9, a3);
            }
            ppuVar7 = a0 + 0x14;
            uVar12 = (u64)in_fr1;
            if (cVar16 == '\0') {
                *ppuVar7 = NULL;
            } else {
                *(u64 *)ppuVar7 = uVar12;
            }
            uVar5 = rand();
            uVar10 = (u32)uVar12;
            iVar4 = libgcc_divide_helper_01031c(uVar5, 0x168, ppuVar9);
            if (cVar15 == '\0') {
                dVar13 = (double)CONCAT44((float)iVar4, uVar10);
            } else {
                dVar13 = (double)iVar4;
            }
            if (cVar16 == '\0') {
                a0[0x15] = (u8 *)((u64)dVar13 >> 0x20);
            } else {
                *(double *)(a0 + 0x15) = dVar13;
            }
            uVar5 = SUB84(dVar13, 0);
            if (cVar16 == '\0') {
                a0[0x16] = NULL;
            } else {
                *(u64 *)(a0 + 0x16) = (u64)dVar13 & 0xffffffff;
            }
            if (cVar16 == '\0') {
                a0[0x17] = (u8 *)0x3f800000;
            } else {
                *(u64 *)(a0 + 0x17) = CONCAT44(0x3f800000, uVar5);
            }
            if (cVar16 == '\0') {
                a0[0x18] = (u8 *)0x3f800000;
            } else {
                *(u64 *)(a0 + 0x18) = CONCAT44(0x3f800000, uVar5);
            }
            if (cVar16 == '\0') {
                a0[0x19] = (u8 *)0x3f800000;
            } else {
                *(u64 *)(a0 + 0x19) = CONCAT44(0x3f800000, uVar5);
            }
            a0[0x8c] = a0[0x8c] + 1;
        case (u8 *)0x1:
            if (((u32)a0[0x1d] & 0x20) == 0x20) {
                a0[0x8c] = a0[0x8c] + 1;
                game_copy_068890(auStack_804, a1);
                time_mark_set(a0, auStack_804);
                dtor_delete_with_ac(auStack_804, 0xffffffff, ppuVar9, a3);
                if (g_8c2804e0 == (u8 *)0x1) {
                    a3 = (u8 *)0xe;
                    ppuVar9 = (u8 **)0x1;
                    (**(code **)(*a2 + 0xd0))(a2, a0 + 0xc, 1, 0xe);
                }
            } else if (((u32)a0[0x1d] & 0x40) == 0x40) {
                if (cVar16 == '\0') {
                    dVar13 = (double)CONCAT44(0x41000000, a0[0xd]);
                } else {
                    in_xd0 = *(u64 *)(a0 + 0xd);
                    dVar13 = 5.062009702363989e+233;
                }
                if (cVar15 == '\0') {
                    puVar6 = (u8 *)(SUB84(dVar13, 0) - (float)((u64)dVar13 >> 0x20));
                } else {
                    puVar6 = SUB84(dVar13 - dVar13, 0);
                }
                if (cVar16 == '\0') {
                    a0[0xd] = puVar6;
                } else {
                    *(u64 *)(a0 + 0xd) = in_xd0;
                }
            } else if (((u32)a0[0x1d] & 0x10) == 0x10) {
                if (cVar16 == '\0') {
                    dVar13 = (double)CONCAT44(0x40000000, a0[0xd]);
                } else {
                    in_xd0 = *(u64 *)(a0 + 0xd);
                    dVar13 = -1.8982214199917473e+78;
                }
                if (cVar15 == '\0') {
                    puVar6 = (u8 *)(SUB84(dVar13, 0) - (float)((u64)dVar13 >> 0x20));
                } else {
                    puVar6 = SUB84(dVar13 - dVar13, 0);
                }
                if (cVar16 == '\0') {
                    a0[0xd] = puVar6;
                } else {
                    *(u64 *)(a0 + 0xd) = in_xd0;
                }
            }
            break;
        case (u8 *)0x2:
            iVar4 = get_field_24_026024(a2, ppuVar7, &switchD_8c067a30::switchdataD_8c067a50, a3);
            if ((iVar4 == 0) || (iVar2 = get_field_24_026024(a2, iVar4, ppuVar9, a3), iVar2 == 2)) {
                iVar4 = get_field_24_026024(a2, iVar4, ppuVar9, a3);
                if (iVar4 == 0) {
                    if ((g_8c280998 < 4) && (-1 < (int)a0[0x87])) {
                        g_8c280998 = g_8c280998 + 1;
                        g_8c2809a8 = g_8c2809a8 + -1;
                        *(u8 ***)((int)a0[0x87] * 8 + 0x8c2809bc) = a0;
                        a0[0x84] = a0[0x84] + 4;
                        a0[0x8c] = a0[0x8c] + 1;
                        ppuVar9 = a0;
                    } else {
                        game_copy_068890(auStack_fd0, a1);
                        uVar5 = elapsed_ticks_since(a0, auStack_fd0);
                        dtor_delete_with_ac(auStack_fd0, 0xffffffff, ppuVar9, a3);
                        if (0x383f < (u16)uVar5) {
                            if (-1 < (int)a0[0x87]) {
                                *(u32 *)((int)a0[0x87] * 8 + 0x8c2809b8) = 0;
                                *(u32 *)((int)a0[0x87] * 8 + 0x8c2809bc) = 0;
                            }
                            a0[0x8c] = (u8 *)0x7;
                        }
                    }
                } else if ((g_8c2809a4 < 3) && (-1 < (int)a0[0x87])) {
                    g_8c2809a4 = g_8c2809a4 + 1;
                    g_8c2809a8 = g_8c2809a8 + -1;
                    *(u8 ***)((int)a0[0x87] * 8 + 0x8c280a3c) = a0;
                    a0[0x84] = a0[0x84] + 4;
                    a0[0x8c] = a0[0x8c] + 1;
                    ppuVar9 = a0;
                } else {
                    game_copy_068890(auStack_179c, a1);
                    uVar5 = elapsed_ticks_since(a0, auStack_179c);
                    dtor_delete_with_ac(auStack_179c, 0xffffffff, ppuVar9, a3);
                    if (0x383f < (u16)uVar5) {
                        if (-1 < (int)a0[0x87]) {
                            a3 = a0[0x87];
                            ppuVar9 = (u8 **)((int)a3 * 8);
                            ppuVar9[-0x1cf5fd72] = NULL;
                            *(u32 *)((int)a0[0x87] * 8 + 0x8c280a3c) = 0;
                        }
                        a0[0x8c] = (u8 *)0x7;
                    }
                }
            } else if ((g_8c28099c + g_8c2809a0 < 2) && (-1 < (int)a0[0x87])) {
                uVar5 = rand();
                iVar4 = libgcc_divide_helper_01031c(uVar5, 100, ppuVar9);
                if ((iVar4 < 0x32) && (1 < g_8c2809a0)) {
                    a0[0x84] = a0[0x84] + 4;
                    g_8c28099c = g_8c28099c + 1;
                } else {
                    g_8c2809a0 = g_8c2809a0 + 1;
                }
                g_8c2809a8 = g_8c2809a8 + -1;
                a0[0x8c] = a0[0x8c] + 1;
                *(u8 ***)((int)a0[0x87] * 8 + 0x8c280a00) = a0;
            } else {
                game_copy_068890(auStack_1f68, a1);
                uVar5 = elapsed_ticks_since(a0, auStack_1f68);
                dtor_delete_with_ac(auStack_1f68, 0xffffffff, ppuVar9, a3);
                if (0x383f < (u16)uVar5) {
                    if (-1 < (int)a0[0x87]) {
                        *(u32 *)((int)a0[0x87] * 8 + 0x8c2809fc) = 0;
                        *(u32 *)((int)a0[0x87] * 8 + 0x8c280a00) = 0;
                    }
                    a0[0x8c] = (u8 *)0x7;
                }
            }
            break;
        case (u8 *)0x3:
            game_copy_068890(auStack_2734, a1, &switchD_8c067a30::switchdataD_8c067a50, a3);
            uVar3 = elapsed_ticks_since(a0, auStack_2734);
            fVar11 = (float)(uVar3 & 0xffff);
            if (cVar16 == '\0') {
                fVar14 = 600.0;
            } else {
                fVar11 = 600.0;
                fVar14 = 3.08286e-43;
            }
            bVar1 = cVar15 != '\0';
            dtor_delete_with_ac(auStack_2734, 0xffffffff, ppuVar9, a3);
            if (bVar1 || fVar14 <= fVar11) {
                game_copy_068890(auStack_2f00, a1);
                time_mark_set(a0, auStack_2f00);
                a3 = auStack_2f00;
                pcVar8 = dtor_delete_with_ac;
                dtor_delete_with_ac(a3, 0xffffffff, dtor_delete_with_ac, a3);
                a0[0x88] = a0[0x88] + 1;
                a0[0x8c] = NULL;
                ppuVar7 = a0;
                iVar4 = get_field_24_026024(a2, a0, pcVar8, a3);
                if (iVar4 == 0) {
                    uVar5 = rand();
                    puVar6 = a0[0x87];
                    iVar4 = libgcc_divide_helper_01031c(uVar5, 3, pcVar8);
                    if (cVar16 == '\0') {
                        dVar13 = (double)CONCAT44(0x41200000, (float)(*(int *)(&g_8c136fec + (int)puVar6 * 4) + iVar4));
                    } else {
                        dVar13 = 227873.6567993164;
                    }
                    if (cVar15 == '\0') {
                        puVar6 = (u8 *)(SUB84(dVar13, 0) / (float)((u64)dVar13 >> 0x20));
                    } else {
                        puVar6 = SUB84(dVar13 / dVar13, 0);
                    }
                    ppuVar9 = (u8 **)pcVar8;
                    if (cVar16 == '\0') {
                        a0[0x90] = puVar6;
                    } else {
                        *(u64 *)(a0 + 0x90) = in_xd0;
                    }
                } else if (iVar4 == 1) {
                    uVar5 = rand();
                    iVar4 = libgcc_divide_helper_01031c(uVar5, 3, pcVar8);
                    if (cVar16 == '\0') {
                        dVar13 = (double)CONCAT44(0x41200000, (float)(iVar4 + 6));
                    } else {
                        dVar13 = 3.4765896880999207;
                    }
                    if (cVar15 == '\0') {
                        puVar6 = (u8 *)(SUB84(dVar13, 0) / (float)((u64)dVar13 >> 0x20));
                    } else {
                        puVar6 = SUB84(dVar13 / dVar13, 0);
                    }
                    ppuVar9 = (u8 **)pcVar8;
                    if (cVar16 == '\0') {
                        a0[0x90] = puVar6;
                    } else {
                        *(u64 *)(a0 + 0x90) = in_xd0;
                    }
                } else {
                    ppuVar9 = (u8 **)pcVar8;
                    if (iVar4 == 2) {
                        uVar5 = rand();
                        iVar4 = libgcc_divide_helper_01031c(uVar5, 3, pcVar8);
                        if (cVar16 == '\0') {
                            dVar13 = (double)CONCAT44(0x41200000, (float)(iVar4 + 10));
                        } else {
                            dVar13 = 7.937828837308101e+110;
                        }
                        if (cVar15 == '\0') {
                            puVar6 = (u8 *)(SUB84(dVar13, 0) / (float)((u64)dVar13 >> 0x20));
                        } else {
                            puVar6 = SUB84(dVar13 / dVar13, 0);
                        }
                        ppuVar9 = (u8 **)pcVar8;
                        if (cVar16 == '\0') {
                            a0[0x90] = puVar6;
                        } else {
                            *(u64 *)(a0 + 0x90) = in_xd0;
                        }
                    }
                }
            }
            break;
        case (u8 *)0x4:
            if (cVar16 == '\0') {
                dVar13 = (double)CONCAT44(0x3dcccccd, a0[0x8b]);
            } else {
                in_xd0 = *(u64 *)(a0 + 0x8b);
                dVar13 = 4.89807854859436e-311;
            }
            if (cVar15 == '\0') {
                puVar6 = (u8 *)(SUB84(dVar13, 0) + (float)((u64)dVar13 >> 0x20));
            } else {
                puVar6 = SUB84(dVar13 + dVar13, 0);
            }
            if (cVar16 == '\0') {
                a0[0x8b] = puVar6;
            } else {
                *(u64 *)(a0 + 0x8b) = in_xd0;
            }
            ppuVar7 = a0;
            game_vec_06abb8(a0, a0 + 0x8b, a0, a3);
            vec3_copy_8c023d8c(a0 + 0x14, auStack_2f0c, ppuVar7, a3);
            uVar5 = 0xffffffff;
            object_dtor_delete(auStack_2f0c, 0xffffffff, ppuVar7, a3);
            if (cVar16 == '\0') {
                a0[0x15] = a0[0x9f];
            } else {
                *(u64 *)(a0 + 0x15) = *(u64 *)(a0 + 0x9f);
            }
            game_vec_06aa04(a0, uVar5, ppuVar7, a3);
            Vec3_scale(auStack_2f1c, a0 + 0x18, ppuVar7, a3, auStack_2f2c);
            Vec3_set_xyz(auStack_2f38, Vec3_set_xyz, ppuVar7, a3);
            Vec3_vec_023484(auStack_2f2c, auStack_2f38, ppuVar7, a3, auStack_2f48);
            Vec3_add(a0 + 0x9a, auStack_2f48, ppuVar7, a3, auStack_2f58);
            Vec3_assign(a0 + 0xc, auStack_2f58, ppuVar7, a3);
            Vec3_dtor(auStack_2f58, 0xffffffff, ppuVar7, a3);
            Vec3_dtor(auStack_2f48, 0xffffffff, ppuVar7, a3);
            object_dtor_delete(auStack_2f38, 0xffffffff, ppuVar7, a3);
            Vec3_dtor(auStack_2f2c, 0xffffffff, ppuVar7, a3);
            ppuVar9 = (u8 **)0xffffffff;
            Vec3_dtor(auStack_2f1c, 0xffffffff, 0xffffffff, a3);
            if (cVar16 == '\0') {
                puVar6 = a0[0x8b];
                fVar11 = 45.0;
            } else {
                puVar6 = (u8 *)0x42340000;
                fVar11 = 7.84727e-43;
            }
            if (cVar15 != '\0' || fVar11 <= (float)puVar6) {
                a0[0x8c] = a0[0x8c] + 1;
                ppuVar9 = (u8 **)0x230;
            }
            break;
        case (u8 *)0x5:
            if (((u32)a0[0x1d] & 0x20) == 0x20) {
                a0[0x8c] = a0[0x8c] + 1;
                game_copy_068890(auStack_3724, a1, &switchD_8c067a30::switchdataD_8c067a50, a3);
                time_mark_set(a0, auStack_3724);
                dtor_delete_with_ac(auStack_3724, 0xffffffff, ppuVar9, a3);
                a3 = g_8c2804e0;
                if (g_8c2804e0 == (u8 *)0x1) {
                    a3 = (u8 *)0xe;
                    ppuVar9 = (u8 **)0x1;
                    (**(code **)(*a2 + 0xd0))(a2, a0 + 0xc, 1, 0xe);
                }
            } else if (((u32)a0[0x1d] & 0x40) == 0x40) {
                if (cVar16 == '\0') {
                    dVar13 = (double)CONCAT44(0x41000000, a0[0xd]);
                } else {
                    in_xd0 = *(u64 *)(a0 + 0xd);
                    dVar13 = 5.062009702363989e+233;
                }
                if (cVar15 == '\0') {
                    puVar6 = (u8 *)(SUB84(dVar13, 0) - (float)((u64)dVar13 >> 0x20));
                } else {
                    puVar6 = SUB84(dVar13 - dVar13, 0);
                }
                if (cVar16 == '\0') {
                    a0[0xd] = puVar6;
                } else {
                    *(u64 *)(a0 + 0xd) = in_xd0;
                }
            } else if (((u32)a0[0x1d] & 0x10) == 0x10) {
                if (cVar16 == '\0') {
                    dVar13 = (double)CONCAT44(0x40000000, a0[0xd]);
                } else {
                    in_xd0 = *(u64 *)(a0 + 0xd);
                    dVar13 = 5.633522802342751e+86;
                }
                if (cVar15 == '\0') {
                    puVar6 = (u8 *)(SUB84(dVar13, 0) - (float)((u64)dVar13 >> 0x20));
                } else {
                    puVar6 = SUB84(dVar13 - dVar13, 0);
                }
                if (cVar16 == '\0') {
                    a0[0xd] = puVar6;
                } else {
                    *(u64 *)(a0 + 0xd) = in_xd0;
                }
            }
            break;
        case (u8 *)0x7:
            if (cVar16 == '\0') {
                dVar13 = (double)CONCAT44(0x3a83126f, a0[0x91]);
            } else {
                in_xd0 = *(u64 *)(a0 + 0x91);
                dVar13 = -4.1966905022930605e-250;
            }
            if (cVar15 == '\0') {
                puVar6 = (u8 *)(SUB84(dVar13, 0) + (float)((u64)dVar13 >> 0x20));
            } else {
                puVar6 = SUB84(dVar13 + dVar13, 0);
            }
            if (cVar16 == '\0') {
                a0[0x91] = puVar6;
                puVar6 = a0[0x91];
            } else {
                *(u64 *)(a0 + 0x91) = in_xd0;
            }
            if (cVar15 == '\0' && 1.0 < (float)puVar6) {
                g_8c2809a8 = g_8c2809a8 + -1;
                mask_74_7fffffff(a0, a0, &switchD_8c067a30::switchdataD_8c067a50, a3);
            }
        }
    }
    object_dtor_delete(auStack_38, 0xffffffff, ppuVar9, a3);
    uVar5 = Vec3_dtor(auStack_2c, 0xffffffff, ppuVar9, a3);
    return uVar5;
}

/*
 * dtor_delete_with_ac  0x8c068818
 * destroys the member at +0xac and frees the object when the delete flag is set
 * called by: Class_12a0c4_state_switch_0679cc, Class_12a0c4_state_switch_068e64,
 * Class_12a0c4_uses_libgcc_divide_helper_068a4c, Class_12a7f4_m5_09aa48, Class_12a990_m5_09c738,
 * Class_12ad50_m5_0a5328, game_release_0c0328
 */
int dtor_delete_with_ac(int a0, u32 a1, u32 a2, u32 a3) {
    u32 ar5_00;
    u32 in_stack_fffffff4;
    u32 ain0;

    ain0 = CONCAT22((short)((u32)in_stack_fffffff4 >> 0x10), (u16)a1);
    if (a0 != 0) {
        ar5_00 = 0xffffffff;
        free_if_nonnull_wrap_068860(a0 + 0xac, 0xffffffff, a2, a3);
        if (0 < (short)ain0) {
            free_if_nonnull(a0);
        }
    }
    return a0;
}

/*
 * free_if_nonnull_wrap_068860  0x8c068860
 * called by: dtor_delete_with_ac
 */
int free_if_nonnull_wrap_068860(int a0, u32 a1, u32 a2, u32 a3) {
    u32 in_stack_fffffff4;

    if ((a0 != 0) && (0 < (short)a1)) {
        free_if_nonnull(a0, a1, a2, a3, CONCAT22((short)((u32)in_stack_fffffff4 >> 0x10), (short)a1));
    }
    return a0;
}

/*
 * game_copy_068890  0x8c068890
 * area name: game code; nothing names its area yet; behaviour name: mostly calls copy functions
 * called by: Class_12a0c4_state_switch_0679cc, Class_12a0c4_state_switch_068e64,
 * Class_12a0c4_uses_libgcc_divide_helper_068a4c
 */
u32 *game_copy_068890(u32 *a0, u32 *a1) {
    u32 uVar1;
    int iVar2;
    u16 *puVar3;
    u32 *puVar4;
    u16 *puVar6;
    u8 *puVar7;
    u32 *puVar8;
    u8 *puVar9;
    u8 *puVar10;
    u32 *puVar5;

    *a0 = *a1;
    uVar1 = a1[2];
    a0[1] = a1[1];
    a0[2] = uVar1;
    uVar1 = a1[4];
    a0[3] = a1[3];
    a0[4] = uVar1;
    uVar1 = a1[6];
    a0[5] = a1[5];
    a0[6] = uVar1;
    uVar1 = a1[8];
    a0[7] = a1[7];
    a0[8] = uVar1;
    a0[9] = a1[9];
    *(u16 *)(a0 + 10) = *(u16 *)(a1 + 10);
    puVar8 = a0 + 0xb;
    puVar4 = a1 + 0xb;
    iVar2 = 0xb;
    do {
        puVar5 = puVar4 + 1;
        *puVar8 = *puVar4;
        puVar4 = puVar4 + 2;
        puVar8[1] = *puVar5;
        puVar8 = puVar8 + 2;
        iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    *(u32 *)(0x84 + (int)a0) = *(u32 *)(0x84 + (int)a1);
    *(u32 *)(0x88 + (int)a0) = *(u32 *)(0x88 + (int)a1);
    puVar6 = (u16 *)((int)a0 + 0x8c);
    puVar3 = (u16 *)((int)a1 + 0x8c);
    *puVar6 = *puVar3;
    puVar6[1] = puVar3[1];
    puVar6[2] = puVar3[2];
    puVar6[3] = puVar3[3];
    puVar6[4] = puVar3[4];
    puVar6 = (u16 *)((int)a0 + 0x96);
    puVar3 = (u16 *)((int)a1 + 0x96);
    *puVar6 = *puVar3;
    puVar6[1] = puVar3[1];
    puVar6[2] = puVar3[2];
    puVar6[3] = puVar3[3];
    puVar6[4] = puVar3[4];
    *(u8 *)(0xa0 + (int)a0) = *(u8 *)(0xa0 + (int)a1);
    *(u8 *)(0xa1 + (int)a0) = *(u8 *)(0xa1 + (int)a1);
    *(u16 *)(0xa2 + (int)a0) = *(u16 *)(0xa2 + (int)a1);
    *(u16 *)(0xa4 + (int)a0) = *(u16 *)(0xa4 + (int)a1);
    *(u32 *)(0xa8 + (int)a0) = *(u32 *)(0xa8 + (int)a1);
    copy_record_10((int)a0 + 0xac, (int)a1 + 0xac);
    *(u32 *)(0xb8 + (int)a0) = *(u32 *)(0xb8 + (int)a1);
    *(u32 *)(0xbc + (int)a0) = *(u32 *)(0xbc + (int)a1);
    *(u32 *)(0xc0 + (int)a0) = *(u32 *)(0xc0 + (int)a1);
    *(u32 *)(0xc4 + (int)a0) = *(u32 *)(0xc4 + (int)a1);
    *(u32 *)(0xc8 + (int)a0) = *(u32 *)(0xc8 + (int)a1);
    puVar7 = (u8 *)((int)a0 + 0xcc);
    puVar9 = (u8 *)((int)a1 + 0xcc);
    iVar2 = 0x37f;
    do {
        puVar10 = puVar9 + 1;
        *puVar7 = *puVar9;
        puVar9 = puVar9 + 2;
        puVar7[1] = *puVar10;
        puVar7 = puVar7 + 2;
        iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    return a0;
}

/*
 * copy_record_10  0x8c068a2c
 * copies a 10-byte record: four shorts and two bytes
 * called by: game_copy_068890
 */
u16 *copy_record_10(u16 *a0, u16 *a1) {
    *a0 = *a1;
    a0[1] = a1[1];
    a0[2] = a1[2];
    a0[3] = a1[3];
    *(u8 *)(a0 + 4) = *(u8 *)(a1 + 4);
    *(u8 *)((int)a0 + 9) = *(u8 *)((int)a1 + 9);
    return a0;
}

/*
 * Class_12a0c4_uses_libgcc_divide_helper_068a4c  0x8c068a4c
 * area name: only called from Class_12a0c4 methods; behaviour name: its main named callee is
 * libgcc_divide_helper_01031c called by: Class_12a0c4_m2_0677dc
 */
u32 Class_12a0c4_uses_libgcc_divide_helper_068a4c(int a0, u32 a1, int *a2, u32 a3) {
    int iVar1;
    u32 uVar2;
    u32 uVar3;
    u32 ar5_00;
    int *a6;
    float fVar4;
    double in_dr0;
    double dVar5;
    double dVar6;
    double dVar7;
    float fVar8;
    u32 in_fr3;
    double in_dr14;
    double in_xd0;
    u64 in_xd14;
    bool bVar9;
    char cVar10;
    char cVar11;
    u8 auStack_1798[1996];
    u8 auStack_fcc[1996];
    u8 auStack_800[1996];
    u32 auStack_34[4];
    u32 auStack_24[5];

    cVar11 = '\0';
    cVar10 = '\0';
    auStack_34[0] = g_8c1370e0;
    auStack_34[1] = g_8c1370e4;
    auStack_34[2] = g_8c1370e8;
    auStack_34[3] = g_8c1370ec;
    auStack_24[0] = g_8c1370f0;
    auStack_24[1] = g_8c1370f4;
    auStack_24[2] = g_8c1370f8;
    auStack_24[3] = g_8c1370fc;
    iVar1 = *(int *)(a0 + 0x230);
    if (iVar1 == 0) {
        game_copy_068890(auStack_800, a1);
        uVar3 = SUB84(in_dr0, 0);
        uVar2 = elapsed_ticks_since(a0, auStack_800);
        if (cVar11 == '\0') {
            in_dr14 = (double)CONCAT44((int)((u64)in_dr14 >> 0x20), *(u32 *)(a0 + 0x240));
            dVar5 = (double)CONCAT44(0x44610000, uVar3);
        } else {
            in_xd14 = *(u64 *)(a0 + 0x240);
            dVar5 = -9.834358688611842e-251;
        }
        if (cVar10 == '\0') {
            dVar6 = (double)CONCAT44((float)(uVar2 & 0xffff), SUB84(dVar5, 0));
            in_dr14 = (double)CONCAT44((int)((u64)in_dr14 >> 0x20),
                                       (SUB84(in_dr14, 0) / (float)((u64)dVar5 >> 0x20)) * (float)(uVar2 & 0xffff));
        } else {
            dVar6 = (double)(uVar2 & 0xffff);
            in_dr14 = (in_dr14 / dVar5) * dVar6;
        }
        uVar3 = SUB84(dVar6, 0);
        dtor_delete_with_ac(auStack_800, 0xffffffff, a2, a3);
        if (cVar11 == '\0') {
            in_dr0 = (double)CONCAT44(*(u32 *)(a0 + 0x240), uVar3);
        } else {
            in_dr0 = *(double *)(a0 + 0x240);
        }
        if (cVar10 == '\0') {
            bVar9 = (float)((u64)in_dr0 >> 0x20) < SUB84(in_dr14, 0);
        } else {
            bVar9 = in_dr0 < in_dr14;
        }
        if (bVar9) {
            if (cVar11 == '\0') {
                in_dr14 = (double)CONCAT44((int)((u64)in_dr14 >> 0x20), *(u32 *)(a0 + 0x240));
            } else {
                in_xd14 = *(u64 *)(a0 + 0x240);
            }
            *(int *)(a0 + 0x230) = *(int *)(a0 + 0x230) + 1;
            iVar1 = libgcc_divide_helper_01031c(*(u32 *)(a0 + 0x210), 4, a2);
            *(u32 *)(a0 + 0x214) = *(u32 *)(a0 + 0x214) & ~auStack_34[iVar1];
        }
        if (cVar11 == '\0') {
            *(int *)(a0 + 0x234) = SUB84(in_dr14, 0);
        } else {
            *(u64 *)(a0 + 0x234) = in_xd14;
        }
    } else if (iVar1 != 1) {
        if (iVar1 != 2) {
            if (iVar1 != 3) {
                return iVar1;
            }
            a6 = a2;
            iVar1 = get_field_24_026024(a2, a1, a2, a3);
            if (iVar1 != 1) {
                return iVar1;
            }
            (**(code **)(*a2 + 0x188))(a2, a1, a6, a3);
            dVar5 = in_dr0;
            if (cVar11 == '\0') {
                in_dr0 = (double)((u64)in_dr0 >> 0x20);
                dVar5 = in_xd0;
            }
            if (cVar10 == '\0' && 0.0 < SUB84(in_dr0, 0)) {
                uVar3 = rand();
                iVar1 = libgcc_divide_helper_01031c(uVar3, 5, a6);
                if (cVar11 == '\0') {
                    dVar6 = (double)CONCAT44(*(u32 *)(a0 + 0x244), in_fr3);
                } else {
                    dVar6 = *(double *)(a0 + 0x244);
                }
                if (cVar11 == '\0') {
                    dVar7 = (double)CONCAT44(0x41200000, (float)(iVar1 + 8));
                } else {
                    dVar7 = 2.2974389978324538e-39;
                }
                if (cVar10 == '\0') {
                    fVar4 = SUB84(dVar7, 0) / (float)((u64)dVar7 >> 0x20);
                } else {
                    fVar4 = SUB84(dVar7 / dVar7, 0);
                }
                if (cVar11 == '\0') {
                    dVar7 = (double)CONCAT44(0x37e90453, fVar4);
                } else {
                    dVar7 = 1.18029310218391e-311;
                }
                if (cVar10 == '\0') {
                    fVar8 = (float)((u64)dVar7 >> 0x20);
                    fVar4 = SUB84(dVar7, 0) * fVar8;
                    dVar7 = (double)CONCAT44(fVar8, fVar4);
                    dVar6 = (double)CONCAT44((float)((u64)dVar6 >> 0x20) - fVar4, SUB84(dVar6, 0));
                } else {
                    dVar7 = dVar7 * dVar7;
                    dVar6 = dVar6 - dVar7;
                }
                if (cVar11 == '\0') {
                    *(int *)(a0 + 0x244) = (int)((u64)dVar6 >> 0x20);
                    dVar7 = (double)(u64) * (u32 *)(a0 + 0x244);
                } else {
                    *(double *)(a0 + 0x244) = dVar6;
                    dVar5 = *(double *)(a0 + 0x244);
                }
                fVar4 = SUB84(dVar7, 0);
                if (cVar10 == '\0' && fVar4 < 0.0) {
                    if (cVar11 == '\0') {
                        *(u32 *)(a0 + 0x244) = 0;
                    } else {
                        *(u64 *)(a0 + 0x244) = (u64)dVar7 & 0xffffffff;
                    }
                }
                if (cVar11 == '\0') {
                    fVar4 = *(float *)(a0 + 0x244);
                } else {
                    dVar5 = *(double *)(a0 + 0x244);
                }
                if (cVar11 == '\0') {
                    dVar6 = (double)CONCAT44(0x42b40000, fVar4);
                } else {
                    dVar6 = 1.29532152133274e-310;
                }
                if (cVar10 == '\0') {
                    fVar4 = SUB84(dVar6, 0) * (float)((u64)dVar6 >> 0x20);
                } else {
                    fVar4 = SUB84(dVar6 * dVar6, 0);
                }
                if (cVar11 == '\0') {
                    *(float *)(a0 + 0x22c) = fVar4;
                    return &g_8c068e5c;
                }
                *(double *)(a0 + 0x22c) = dVar5;
                return &g_8c068e5c;
            }
            uVar3 = rand();
            ar5_00 = 5;
            iVar1 = libgcc_divide_helper_01031c(uVar3, 5, a6);
            if (cVar11 == '\0') {
                dVar6 = (double)CONCAT44(*(u32 *)(a0 + 0x244), in_fr3);
            } else {
                dVar6 = *(double *)(a0 + 0x244);
            }
            if (cVar11 == '\0') {
                dVar7 = (double)CONCAT44(0x41200000, (float)(iVar1 + 8));
            } else {
                dVar7 = 2.2974389978324538e-39;
            }
            if (cVar10 == '\0') {
                fVar4 = SUB84(dVar7, 0) / (float)((u64)dVar7 >> 0x20);
            } else {
                fVar4 = SUB84(dVar7 / dVar7, 0);
            }
            if (cVar11 == '\0') {
                dVar7 = (double)CONCAT44(0x37e90453, fVar4);
            } else {
                dVar7 = 1.18029310218391e-311;
            }
            if (cVar10 == '\0') {
                dVar6 = (double)CONCAT44((float)((u64)dVar6 >> 0x20) + SUB84(dVar7, 0) * (float)((u64)dVar7 >> 0x20),
                                         SUB84(dVar6, 0));
            } else {
                dVar6 = dVar6 + dVar7 * dVar7;
            }
            if (cVar11 == '\0') {
                *(int *)(a0 + 0x244) = (int)((u64)dVar6 >> 0x20);
                dVar6 = (double)CONCAT44(0x42b40000, *(u32 *)(a0 + 0x244));
            } else {
                *(double *)(a0 + 0x244) = dVar6;
                dVar5 = *(double *)(a0 + 0x244);
                dVar6 = 1.14643063239662e-311;
            }
            if (cVar10 == '\0') {
                fVar4 = SUB84(dVar6, 0) * (float)((u64)dVar6 >> 0x20);
            } else {
                fVar4 = SUB84(dVar6 * dVar6, 0);
            }
            if (cVar11 == '\0') {
                *(float *)(a0 + 0x22c) = fVar4;
                fVar4 = *(float *)(a0 + 0x244);
            } else {
                *(double *)(a0 + 0x22c) = dVar5;
            }
            if (cVar10 == '\0' && fVar4 < 1.0) {
                return a0 + 0x244;
            }
            *(u32 *)(*(int *)(a0 + 0x21c) * 8 + 0x8c2809fc) = 0;
            *(u32 *)(*(int *)(a0 + 0x21c) * 8 + 0x8c280a00) = 0;
            mask_74_7fffffff(a0);
            g_8c28099c = g_8c28099c + -1;
            return g_8c28099c;
        }
        goto LAB_8c068bfc;
    }
    uVar3 = SUB84(in_dr0, 0);
    game_copy_068890(auStack_fcc, a1);
    uVar2 = elapsed_ticks_since(a0, auStack_fcc);
    if (cVar11 == '\0') {
        in_dr14 = (double)CONCAT44((int)((u64)in_dr14 >> 0x20), *(u32 *)(a0 + 0x240));
        dVar5 = (double)CONCAT44(0x44e10000, uVar3);
    } else {
        in_xd14 = *(u64 *)(a0 + 0x240);
        dVar5 = 1.20586454969464e-311;
    }
    if (cVar10 == '\0') {
        dVar6 = (double)CONCAT44((float)(uVar2 & 0xffff), SUB84(dVar5, 0));
        in_dr14 = (double)CONCAT44((int)((u64)in_dr14 >> 0x20),
                                   (SUB84(in_dr14, 0) / (float)((u64)dVar5 >> 0x20)) * (float)(uVar2 & 0xffff));
    } else {
        dVar6 = (double)(uVar2 & 0xffff);
        in_dr14 = (in_dr14 / dVar5) * dVar6;
    }
    uVar3 = SUB84(dVar6, 0);
    dtor_delete_with_ac(auStack_fcc, 0xffffffff, a2, a3);
    if (cVar11 == '\0') {
        in_dr0 = (double)CONCAT44(*(u32 *)(a0 + 0x240), uVar3);
    } else {
        in_dr0 = *(double *)(a0 + 0x240);
    }
    if (cVar10 == '\0') {
        bVar9 = (float)((u64)in_dr0 >> 0x20) < SUB84(in_dr14, 0);
    } else {
        bVar9 = in_dr0 < in_dr14;
    }
    if (bVar9) {
        if (cVar11 == '\0') {
            in_dr14 = (double)CONCAT44((int)((u64)in_dr14 >> 0x20), *(u32 *)(a0 + 0x240));
        } else {
            in_xd14 = *(u64 *)(a0 + 0x240);
        }
        *(int *)(a0 + 0x230) = *(int *)(a0 + 0x230) + 1;
        iVar1 = libgcc_divide_helper_01031c(*(u32 *)(a0 + 0x210), 4, a2);
        *(u32 *)(a0 + 0x214) = *(u32 *)(a0 + 0x214) & ~auStack_24[iVar1];
    }
    if (cVar11 == '\0') {
        *(int *)(a0 + 0x238) = SUB84(in_dr14, 0);
    } else {
        *(u64 *)(a0 + 0x238) = in_xd14;
    }
LAB_8c068bfc:
    uVar3 = SUB84(in_dr0, 0);
    game_copy_068890(auStack_1798, a1);
    uVar2 = elapsed_ticks_since(a0, auStack_1798);
    if (cVar11 == '\0') {
        in_dr14 = (double)CONCAT44((int)((u64)in_dr14 >> 0x20), *(u32 *)(a0 + 0x240));
        dVar5 = (double)CONCAT44(0x45610000, uVar3);
    } else {
        in_xd14 = *(u64 *)(a0 + 0x240);
        dVar5 = 1.21435667738153e-311;
    }
    if (cVar10 == '\0') {
        dVar6 = (double)CONCAT44((float)(uVar2 & 0xffff), SUB84(dVar5, 0));
        dVar5 = (double)CONCAT44((int)((u64)in_dr14 >> 0x20),
                                 (SUB84(in_dr14, 0) / (float)((u64)dVar5 >> 0x20)) * (float)(uVar2 & 0xffff));
    } else {
        dVar6 = (double)(uVar2 & 0xffff);
        dVar5 = (in_dr14 / dVar5) * dVar6;
    }
    uVar3 = SUB84(dVar6, 0);
    dtor_delete_with_ac(auStack_1798, 0xffffffff, a2, a3);
    if (cVar11 == '\0') {
        dVar6 = (double)CONCAT44(*(u32 *)(a0 + 0x240), uVar3);
    } else {
        dVar6 = *(double *)(a0 + 0x240);
    }
    if (cVar10 == '\0') {
        bVar9 = (float)((u64)dVar6 >> 0x20) < SUB84(dVar5, 0);
    } else {
        bVar9 = dVar6 < dVar5;
    }
    if (bVar9) {
        if (cVar11 == '\0') {
            dVar5 = (double)(u64) * (u32 *)(a0 + 0x240);
        } else {
            in_xd14 = *(u64 *)(a0 + 0x240);
        }
        *(int *)(a0 + 0x230) = *(int *)(a0 + 0x230) + 1;
    }
    if (cVar11 == '\0') {
        *(int *)(a0 + 0x23c) = SUB84(dVar5, 0);
    } else {
        *(u64 *)(a0 + 0x23c) = in_xd14;
    }
    return 0x23c;
}

/*
 * Class_12a0c4_state_switch_068e64  0x8c068e64
 * area name: only called from Class_12a0c4 methods; behaviour name: dispatches on a state or mode value (switch)
 * called by: Class_12a0c4_m2_0677dc
 */
u32 Class_12a0c4_state_switch_068e64(int *a0, u32 a1, int *a2, u32 a3) {
    u32 uVar1;
    u32 uVar2;
    int iVar3;
    int *ar4_00;
    int *a5;
    u8 *ar5_00;
    double *pdVar4;
    code *ar6_00;
    int *piVar5;
    float fVar6;
    double in_dr0;
    double dVar7;
    float fVar10;
    double dVar8;
    u64 uVar9;
    u32 in_fr3;
    double in_dr14;
    double in_xd0;
    u64 in_xd14;
    bool bVar11;
    char cVar12;
    char cVar13;
    u64 uStack_3050;
    u8 auStack_3048[1996];
    u8 auStack_287c[16];
    u8 auStack_286c[16];
    u8 auStack_285c[12];
    u8 auStack_2850[16];
    u8 auStack_2840[16];
    u8 auStack_2830[16];
    u8 auStack_2820[16];
    u8 auStack_2810[12];
    u8 auStack_2804[16];
    u8 auStack_27f4[16];
    u8 auStack_27e4[16];
    u8 auStack_27d4[16];
    u8 auStack_27c4[12];
    u8 auStack_27b8[16];
    u8 auStack_27a8[16];
    u8 auStack_2798[16];
    u8 auStack_2788[16];
    u8 auStack_2778[12];
    u8 auStack_276c[16];
    u8 auStack_275c[16];
    u8 auStack_274c[12];
    u8 auStack_2740[1996];
    u8 auStack_1f74[1996];
    u8 auStack_17a8[1996];
    u8 auStack_fdc[1996];
    u8 auStack_810[1996];
    u32 auStack_44[4];
    u32 auStack_34[4];
    u8 auStack_24[20];

    cVar13 = '\0';
    cVar12 = '\0';
    piVar5 = a2;
    Vec3_ctor_zero(auStack_24, a1, a2);
    auStack_44[0] = g_8c137100;
    auStack_44[1] = g_8c137104;
    auStack_44[2] = g_8c137108;
    auStack_44[3] = g_8c13710c;
    auStack_34[0] = g_8c137110;
    auStack_34[1] = g_8c137114;
    auStack_34[2] = g_8c137118;
    auStack_34[3] = g_8c13711c;
    iVar3 = a0[0x8c];
    if ((5 < iVar3) || (iVar3 < 0))
        goto switchD_8c068ec8_default;
    switch (iVar3) {
    case 0:
        game_copy_068890(auStack_810, a1);
        uVar2 = SUB84(in_dr0, 0);
        uVar1 = elapsed_ticks_since(a0, auStack_810);
        if (cVar13 == '\0') {
            in_dr14 = (double)CONCAT44((int)((u64)in_dr14 >> 0x20), a0[0x90]);
            dVar8 = (double)CONCAT44(0x44610000, uVar2);
        } else {
            in_xd14 = *(u64 *)(a0 + 0x90);
            dVar8 = -9.834358688611842e-251;
        }
        if (cVar12 == '\0') {
            dVar7 = (double)CONCAT44((float)(uVar1 & 0xffff), SUB84(dVar8, 0));
            in_dr14 = (double)CONCAT44((int)((u64)in_dr14 >> 0x20),
                                       (SUB84(in_dr14, 0) / (float)((u64)dVar8 >> 0x20)) * (float)(uVar1 & 0xffff));
        } else {
            dVar7 = (double)(uVar1 & 0xffff);
            in_dr14 = (in_dr14 / dVar8) * dVar7;
        }
        uVar2 = SUB84(dVar7, 0);
        dtor_delete_with_ac(auStack_810, 0xffffffff, piVar5, a3);
        if (cVar13 == '\0') {
            in_dr0 = (double)CONCAT44(a0[0x90], uVar2);
        } else {
            in_dr0 = *(double *)(a0 + 0x90);
        }
        if (cVar12 == '\0') {
            bVar11 = (float)((u64)in_dr0 >> 0x20) < SUB84(in_dr14, 0);
        } else {
            bVar11 = in_dr0 < in_dr14;
        }
        if (bVar11) {
            if (cVar13 == '\0') {
                in_dr14 = (double)CONCAT44((int)((u64)in_dr14 >> 0x20), a0[0x90]);
            } else {
                in_xd14 = *(u64 *)(a0 + 0x90);
            }
            a0[0x8c] = a0[0x8c] + 1;
            iVar3 = libgcc_divide_helper_01031c(a0[0x84], 4, piVar5);
            a0[0x85] = a0[0x85] & ~auStack_44[iVar3];
            piVar5 = a0;
        }
        if (cVar13 == '\0') {
            a0[0x8d] = SUB84(in_dr14, 0);
        } else {
            *(u64 *)(a0 + 0x8d) = in_xd14;
        }
    case 1:
        uVar2 = SUB84(in_dr0, 0);
        game_copy_068890(auStack_fdc, a1);
        uVar1 = elapsed_ticks_since(a0, auStack_fdc);
        if (cVar13 == '\0') {
            in_dr14 = (double)CONCAT44((int)((u64)in_dr14 >> 0x20), a0[0x90]);
            dVar8 = (double)CONCAT44(0x44e10000, uVar2);
        } else {
            in_xd14 = *(u64 *)(a0 + 0x90);
            dVar8 = 1.20586454969464e-311;
        }
        if (cVar12 == '\0') {
            dVar7 = (double)CONCAT44((float)(uVar1 & 0xffff), SUB84(dVar8, 0));
            in_dr14 = (double)CONCAT44((int)((u64)in_dr14 >> 0x20),
                                       (SUB84(in_dr14, 0) / (float)((u64)dVar8 >> 0x20)) * (float)(uVar1 & 0xffff));
        } else {
            dVar7 = (double)(uVar1 & 0xffff);
            in_dr14 = (in_dr14 / dVar8) * dVar7;
        }
        uVar2 = SUB84(dVar7, 0);
        dtor_delete_with_ac(auStack_fdc, 0xffffffff, piVar5, a3);
        if (cVar13 == '\0') {
            in_dr0 = (double)CONCAT44(a0[0x90], uVar2);
        } else {
            in_dr0 = *(double *)(a0 + 0x90);
        }
        if (cVar12 == '\0') {
            bVar11 = (float)((u64)in_dr0 >> 0x20) < SUB84(in_dr14, 0);
        } else {
            bVar11 = in_dr0 < in_dr14;
        }
        if (bVar11) {
            if (cVar13 == '\0') {
                in_dr14 = (double)CONCAT44((int)((u64)in_dr14 >> 0x20), a0[0x90]);
            } else {
                in_xd14 = *(u64 *)(a0 + 0x90);
            }
            a0[0x8c] = a0[0x8c] + 1;
            iVar3 = libgcc_divide_helper_01031c(a0[0x84], 4, piVar5);
            a0[0x85] = a0[0x85] & ~auStack_34[iVar3];
        }
        if (cVar13 == '\0') {
            a0[0x8e] = SUB84(in_dr14, 0);
        } else {
            *(u64 *)(a0 + 0x8e) = in_xd14;
        }
    case 2:
        uVar2 = SUB84(in_dr0, 0);
        game_copy_068890(auStack_17a8, a1);
        uVar1 = elapsed_ticks_since(a0, auStack_17a8);
        if (cVar13 == '\0') {
            in_dr14 = (double)CONCAT44((int)((u64)in_dr14 >> 0x20), a0[0x90]);
            dVar8 = (double)CONCAT44(0x45610000, uVar2);
        } else {
            in_xd14 = *(u64 *)(a0 + 0x90);
            dVar8 = 9.4222363968352e-311;
        }
        if (cVar12 == '\0') {
            dVar7 = (double)CONCAT44((float)(uVar1 & 0xffff), SUB84(dVar8, 0));
            dVar8 = (double)CONCAT44((int)((u64)in_dr14 >> 0x20),
                                     (SUB84(in_dr14, 0) / (float)((u64)dVar8 >> 0x20)) * (float)(uVar1 & 0xffff));
        } else {
            dVar7 = (double)(uVar1 & 0xffff);
            dVar8 = (in_dr14 / dVar8) * dVar7;
        }
        uVar2 = SUB84(dVar7, 0);
        dtor_delete_with_ac(auStack_17a8, 0xffffffff, piVar5, a3);
        if (cVar13 == '\0') {
            dVar7 = (double)CONCAT44(a0[0x90], uVar2);
        } else {
            dVar7 = *(double *)(a0 + 0x90);
        }
        if (cVar12 == '\0') {
            bVar11 = (float)((u64)dVar7 >> 0x20) < SUB84(dVar8, 0);
        } else {
            bVar11 = dVar7 < dVar8;
        }
        if (bVar11) {
            if (cVar13 == '\0') {
                dVar8 = (double)(u64)(u32)a0[0x90];
            } else {
                in_xd14 = *(u64 *)(a0 + 0x90);
            }
            a0[0x8c] = a0[0x8c] + 1;
            game_copy_068890(auStack_1f74, a1);
            time_mark_set(a0, auStack_1f74);
            dtor_delete_with_ac(auStack_1f74, 0xffffffff, piVar5, a3);
        }
        if (cVar13 == '\0') {
            a0[0x8f] = SUB84(dVar8, 0);
        } else {
            *(u64 *)(a0 + 0x8f) = in_xd14;
        }
        break;
    case 3:
        game_copy_068890(auStack_2740, a1);
        uVar2 = elapsed_ticks_since(a0, auStack_2740);
        bVar11 = 0x707f < (u16)uVar2;
        dtor_delete_with_ac(auStack_2740, 0xffffffff, piVar5, a3);
        a5 = NULL;
        if ((bVar11) && (a5 = (int *)0x2, (int)g_8c2809a8 < 2)) {
            g_8c2809a8 = (double *)((int)g_8c2809a8 + 1);
            a0[0x8c] = a0[0x8c] + 1;
            a5 = a0;
        }
        ar4_00 = a2;
        (**(code **)(*a2 + 0x188))(a2, a5, piVar5, a3);
        dVar8 = in_dr0;
        if (cVar13 == '\0') {
            uStack_3050 = (u64)CONCAT14(bVar11, (int)((u64)in_dr0 >> 0x20));
            in_dr0 = (double)(uStack_3050 & 0xffffffff);
            dVar8 = in_xd0;
        }
        in_xd0 = dVar8;
        fVar6 = SUB84(in_dr0, 0);
        if ((cVar12 == '\0' && 0.0 < fVar6) ||
            (ar4_00 = a0, a5 = a2, iVar3 = CHerb_vec_06d714(a0, a2, piVar5, a3), iVar3 != 0)) {
            uVar2 = rand();
            iVar3 = libgcc_divide_helper_01031c(uVar2, 5, piVar5);
            if (cVar13 == '\0') {
                dVar8 = (double)CONCAT44(a0[0x91], in_fr3);
            } else {
                dVar8 = *(double *)(a0 + 0x91);
            }
            if (cVar13 == '\0') {
                dVar7 = (double)CONCAT44(0x41200000, (float)(iVar3 + 8));
            } else {
                dVar7 = 2.2974389978324538e-39;
            }
            if (cVar12 == '\0') {
                fVar6 = SUB84(dVar7, 0) / (float)((u64)dVar7 >> 0x20);
            } else {
                fVar6 = SUB84(dVar7 / dVar7, 0);
            }
            if (cVar13 == '\0') {
                dVar7 = (double)CONCAT44(0x37e90453, fVar6);
            } else {
                dVar7 = 1.18029310218391e-311;
            }
            if (cVar12 == '\0') {
                fVar10 = (float)((u64)dVar7 >> 0x20);
                fVar6 = SUB84(dVar7, 0) * fVar10;
                dVar7 = (double)CONCAT44(fVar10, fVar6);
                dVar8 = (double)CONCAT44((float)((u64)dVar8 >> 0x20) - fVar6, SUB84(dVar8, 0));
            } else {
                dVar7 = dVar7 * dVar7;
                dVar8 = dVar8 - dVar7;
            }
            if (cVar13 == '\0') {
                a0[0x91] = (int)((u64)dVar8 >> 0x20);
                dVar7 = (double)(u64)(u32)a0[0x91];
            } else {
                *(double *)(a0 + 0x91) = dVar8;
                in_xd0 = *(double *)(a0 + 0x91);
            }
            if (cVar12 == '\0' && SUB84(dVar7, 0) < 0.0) {
                if (cVar13 == '\0') {
                    a0[0x91] = 0;
                } else {
                    *(u64 *)(a0 + 0x91) = (u64)dVar7 & 0xffffffff;
                }
            }
            if (cVar13 == '\0') {
                in_dr0 = (double)CONCAT44(0x42b40000, a0[0x91]);
            } else {
                in_xd0 = *(double *)(a0 + 0x91);
                in_dr0 = 1.18887054821592e-311;
            }
            if (cVar12 == '\0') {
                in_dr0 = (double)(u64)(u32)(SUB84(in_dr0, 0) * (float)((u64)in_dr0 >> 0x20));
            } else {
                in_dr0 = in_dr0 * in_dr0;
            }
            if (cVar13 == '\0') {
                a0[0x8b] = SUB84(in_dr0, 0);
            } else {
                *(double *)(a0 + 0x8b) = in_xd0;
            }
        } else {
            pdVar4 = g_8c2809a8;
            if ((int)g_8c2809a8 < 2) {
                pdVar4 = (double *)(a0 + 0x91);
                if (cVar13 == '\0') {
                    fVar6 = *(float *)pdVar4;
                } else {
                    in_xd0 = *pdVar4;
                }
                in_dr0 = (double)(u64)(u32)fVar6;
                if (fVar6 == 0.0) {
                    g_8c2809a8 = (double *)((int)g_8c2809a8 + 1);
                    a0[0x8c] = a0[0x8c] + 1;
                    piVar5 = a0;
                    goto LAB_8c06940e;
                }
            }
            uVar2 = rand();
            iVar3 = libgcc_divide_helper_01031c(uVar2, 5, piVar5);
            if (cVar13 == '\0') {
                dVar8 = (double)CONCAT44(a0[0x91], in_fr3);
            } else {
                dVar8 = *(double *)(a0 + 0x91);
            }
            if (cVar13 == '\0') {
                dVar7 = (double)CONCAT44(0x41200000, (float)(iVar3 + 8));
            } else {
                dVar7 = 2.2974389978324538e-39;
            }
            if (cVar12 == '\0') {
                fVar6 = SUB84(dVar7, 0) / (float)((u64)dVar7 >> 0x20);
            } else {
                fVar6 = SUB84(dVar7 / dVar7, 0);
            }
            if (cVar13 == '\0') {
                dVar7 = (double)CONCAT44(0x37e90453, fVar6);
            } else {
                dVar7 = 1.12087722003689e-311;
            }
            if (cVar12 == '\0') {
                dVar8 = (double)CONCAT44((float)((u64)dVar8 >> 0x20) + SUB84(dVar7, 0) * (float)((u64)dVar7 >> 0x20),
                                         SUB84(dVar8, 0));
            } else {
                dVar8 = dVar8 + dVar7 * dVar7;
            }
            if (cVar13 == '\0') {
                a0[0x91] = (int)((u64)dVar8 >> 0x20);
            } else {
                *(double *)(a0 + 0x91) = dVar8;
            }
            iVar3 = libgcc_divide_helper_01031c(a0[0x84], 4, piVar5);
            a0[0x8a] = iVar3 * 3;
            if (cVar13 == '\0') {
                dVar8 = (double)CONCAT44(0x42b40000, a0[0x91]);
            } else {
                in_xd0 = *(double *)(a0 + 0x91);
                dVar8 = 1.14643063239662e-311;
            }
            if (cVar12 == '\0') {
                fVar6 = SUB84(dVar8, 0) * (float)((u64)dVar8 >> 0x20);
            } else {
                fVar6 = SUB84(dVar8 * dVar8, 0);
            }
            if (cVar13 == '\0') {
                a0[0x8b] = (int)fVar6;
                fVar6 = (float)a0[0x91];
            } else {
                *(double *)(a0 + 0x8b) = in_xd0;
                in_xd0 = *(double *)(a0 + 0x91);
            }
            in_dr0 = (double)CONCAT44(0x3f800000, fVar6);
            if (cVar12 != '\0' || 1.0 <= fVar6) {
                *(u32 *)(a0[0x87] * 8 + 0x8c2809fc) = 0;
                *(u32 *)(a0[0x87] * 8 + 0x8c280a00) = 0;
                ar5_00 = (u8 *)0x4;
                if (a0[0x84] < 4) {
                    g_8c2809a0 = g_8c2809a0 + -1;
                } else {
                    ar5_00 = &g_8c28099c;
                    g_8c28099c = g_8c28099c + -1;
                }
                mask_74_7fffffff(a0);
            }
        }
    LAB_8c06940e:
        if (a0[0x8c] != 3) {
            in_dr0 = (double)((u64)in_dr0 & 0xffffffff);
            if (cVar13 == '\0') {
                a0[0x8b] = 0;
            } else {
                *(double *)(a0 + 0x8b) = in_dr0;
            }
        switchD_8c068ec8_caseD_4:
            uVar1 = SUB84(in_dr0, 0);
            iVar3 = game_state_switch_0d19dc(0xe, 0x1b, piVar5, a3);
            a0[0xa4] = iVar3;
            *(u32 *)(a0[0xa4] + 0x230) = 4;
            uVar2 = get_field_24_026024(a2, 0x230, piVar5, a3);
            *(u32 *)(a0[0xa4] + 0x218) = uVar2;
            *(u32 *)(a0[0xa4] + 0x21c) = 0xffffffff;
            uVar9 = (u64)uVar1;
            if (cVar13 == '\0') {
                *(u32 *)(a0[0xa4] + 0x22c) = 0;
            } else {
                *(u64 *)(a0[0xa4] + 0x22c) = uVar9;
            }
            iVar3 = a0[0xa4];
            (**(code **)(*a2 + 0x4c))(a2, iVar3, piVar5, a3);
            fVar6 = (float)uVar9;
            game_vec_06abb8(a0, iVar3, piVar5, a3);
            ar6_00 = vec3_copy_8c023d8c;
            vec3_copy_8c023d8c(a0[0xa4] + 0x50, auStack_274c, vec3_copy_8c023d8c, a3);
            object_dtor_delete(auStack_274c, 0xffffffff, ar6_00, a3);
            uVar2 = 4;
            iVar3 = libgcc_divide_helper_01031c(a0[0x84], 4, ar6_00);
            if (iVar3 == 0) {
                if (cVar13 == '\0') {
                    dVar8 = (double)CONCAT44(0x430d0000, a0[0x15]);
                } else {
                    in_xd0 = *(double *)(a0 + 0x15);
                    dVar8 = 1.35014511006795e-311;
                }
                if (cVar12 == '\0') {
                    fVar6 = SUB84(dVar8, 0) - (float)((u64)dVar8 >> 0x20);
                } else {
                    fVar6 = SUB84(dVar8 - dVar8, 0);
                }
                if (cVar13 == '\0') {
                    *(float *)(a0[0xa4] + 0x54) = fVar6;
                } else {
                    *(double *)(a0[0xa4] + 0x54) = in_xd0;
                }
                iVar3 = a0[0xa4];
                pdVar4 = (double *)(iVar3 + 0x27c);
                if (cVar13 == '\0') {
                    dVar8 = (double)CONCAT44(0x430d0000, a0[0x15]);
                } else {
                    in_xd0 = *(double *)(a0 + 0x15);
                    dVar8 = 1.35014511006795e-311;
                }
                if (cVar12 == '\0') {
                    fVar6 = SUB84(dVar8, 0) - (float)((u64)dVar8 >> 0x20);
                } else {
                    fVar6 = SUB84(dVar8 - dVar8, 0);
                }
                if (cVar13 == '\0') {
                    *(float *)pdVar4 = fVar6;
                } else {
                    *pdVar4 = in_xd0;
                }
                game_vec_06aa04(a0, iVar3, ar6_00, a3);
                piVar5 = a0 + 0x90;
                Vec3_scale(auStack_275c, piVar5, ar6_00, a3, auStack_276c);
                if (cVar13 != '\0') {
                    fVar6 = 141.0;
                }
                Vec3_set_xyz(auStack_2778, piVar5, ar6_00, a3);
                Vec3_vec_023484(auStack_276c, auStack_2778, ar6_00, a3, auStack_2788);
                Vec3_add(a0 + 0xc, auStack_2788, ar6_00, a3, auStack_2798);
                Vec3_assign(a0[0xa4] + 0x30, auStack_2798, ar6_00, a3);
                Vec3_dtor(auStack_2798, 0xffffffff, ar6_00, a3);
                Vec3_dtor(auStack_2788, 0xffffffff, ar6_00, a3);
                object_dtor_delete(auStack_2778, 0xffffffff, ar6_00, a3);
                Vec3_dtor(auStack_276c, 0xffffffff, ar6_00, a3);
                Vec3_dtor(auStack_275c, 0xffffffff, ar6_00, a3);
            } else if (iVar3 == 1) {
                if (cVar13 == '\0') {
                    dVar8 = (double)CONCAT44(0x4286999a, a0[0x15]);
                } else {
                    in_xd0 = *(double *)(a0 + 0x15);
                    dVar8 = 1.35014075831897e-311;
                }
                if (cVar12 == '\0') {
                    fVar6 = SUB84(dVar8, 0) + (float)((u64)dVar8 >> 0x20);
                } else {
                    fVar6 = SUB84(dVar8 + dVar8, 0);
                }
                if (cVar13 == '\0') {
                    *(float *)(a0[0xa4] + 0x54) = fVar6;
                } else {
                    *(double *)(a0[0xa4] + 0x54) = in_xd0;
                }
                pdVar4 = (double *)(a0[0xa4] + 0x27c);
                if (cVar13 == '\0') {
                    dVar8 = (double)CONCAT44(0x4286999a, a0[0x15]);
                } else {
                    in_xd0 = *(double *)(a0 + 0x15);
                    dVar8 = 1.35014075831897e-311;
                }
                if (cVar12 == '\0') {
                    fVar6 = SUB84(dVar8, 0) + (float)((u64)dVar8 >> 0x20);
                } else {
                    fVar6 = SUB84(dVar8 + dVar8, 0);
                }
                if (cVar13 == '\0') {
                    *(float *)pdVar4 = fVar6;
                } else {
                    *pdVar4 = in_xd0;
                }
                game_vec_06aa04(a0, pdVar4, ar6_00, a3);
                piVar5 = a0 + 0x90;
                Vec3_scale(auStack_27a8, piVar5, ar6_00, a3, auStack_27b8);
                if (cVar13 != '\0') {
                    fVar6 = 67.3;
                }
                Vec3_set_xyz(auStack_27c4, piVar5, ar6_00, a3);
                Vec3_vec_023484(auStack_27b8, auStack_27c4, ar6_00, a3, auStack_27d4);
                Vec3_add(a0 + 0xc, auStack_27d4, ar6_00, a3, auStack_27e4);
                Vec3_assign(a0[0xa4] + 0x30, auStack_27e4, ar6_00, a3);
                Vec3_dtor(auStack_27e4, 0xffffffff, ar6_00, a3);
                Vec3_dtor(auStack_27d4, 0xffffffff, ar6_00, a3);
                object_dtor_delete(auStack_27c4, 0xffffffff, ar6_00, a3);
                Vec3_dtor(auStack_27b8, 0xffffffff, ar6_00, a3);
                Vec3_dtor(auStack_27a8, 0xffffffff, ar6_00, a3);
            } else if (iVar3 == 2) {
                pdVar4 = (double *)(a0[0xa4] + 0x54);
                if (cVar13 == '\0') {
                    dVar8 = (double)CONCAT44(0x41680000, a0[0x15]);
                } else {
                    in_xd0 = *(double *)(a0 + 0x15);
                    dVar8 = 1.35013147847267e-311;
                }
                if (cVar12 == '\0') {
                    fVar6 = SUB84(dVar8, 0) + (float)((u64)dVar8 >> 0x20);
                } else {
                    fVar6 = SUB84(dVar8 + dVar8, 0);
                }
                if (cVar13 == '\0') {
                    *(float *)pdVar4 = fVar6;
                } else {
                    *pdVar4 = in_xd0;
                }
                if (cVar13 == '\0') {
                    dVar8 = (double)CONCAT44(0x41680000, a0[0x15]);
                } else {
                    in_xd0 = *(double *)(a0 + 0x15);
                    dVar8 = 1.35013147847267e-311;
                }
                if (cVar12 == '\0') {
                    fVar6 = SUB84(dVar8, 0) + (float)((u64)dVar8 >> 0x20);
                } else {
                    fVar6 = SUB84(dVar8 + dVar8, 0);
                }
                if (cVar13 == '\0') {
                    *(float *)(a0[0xa4] + 0x27c) = fVar6;
                } else {
                    *(double *)(a0[0xa4] + 0x27c) = in_xd0;
                }
                game_vec_06aa04(a0, pdVar4, ar6_00, a3);
                piVar5 = a0 + 0x90;
                Vec3_scale(auStack_27f4, piVar5, ar6_00, a3, auStack_2804);
                if (cVar13 != '\0') {
                    fVar6 = 14.5;
                }
                Vec3_set_xyz(auStack_2810, piVar5, ar6_00, a3);
                ar6_00 = Vec3_vec_023484;
                Vec3_vec_023484(auStack_2804, auStack_2810, Vec3_vec_023484, a3, auStack_2820);
                Vec3_add(a0 + 0xc, auStack_2820, ar6_00, a3, auStack_2830);
                Vec3_assign(a0[0xa4] + 0x30, auStack_2830, ar6_00, a3);
                Vec3_dtor(auStack_2830, 0xffffffff, ar6_00, a3);
                Vec3_dtor(auStack_2820, 0xffffffff, ar6_00, a3);
                object_dtor_delete(auStack_2810, 0xffffffff, ar6_00, a3);
                Vec3_dtor(auStack_2804, 0xffffffff, ar6_00, a3);
                Vec3_dtor(auStack_27f4, 0xffffffff, ar6_00, a3);
            } else if (iVar3 == 3) {
                if (cVar13 == '\0') {
                    dVar8 = (double)CONCAT44(0x4299999a, a0[0x15]);
                } else {
                    in_xd0 = *(double *)(a0 + 0x15);
                    dVar8 = 1.3501413735216e-311;
                }
                if (cVar12 == '\0') {
                    fVar6 = SUB84(dVar8, 0) - (float)((u64)dVar8 >> 0x20);
                } else {
                    fVar6 = SUB84(dVar8 - dVar8, 0);
                }
                if (cVar13 == '\0') {
                    *(float *)(a0[0xa4] + 0x54) = fVar6;
                } else {
                    *(double *)(a0[0xa4] + 0x54) = in_xd0;
                }
                if (cVar13 == '\0') {
                    dVar8 = (double)CONCAT44(0x4299999a, a0[0x15]);
                } else {
                    in_xd0 = *(double *)(a0 + 0x15);
                    dVar8 = 1.3501413735216e-311;
                }
                if (cVar12 == '\0') {
                    fVar6 = SUB84(dVar8, 0) - (float)((u64)dVar8 >> 0x20);
                } else {
                    fVar6 = SUB84(dVar8 - dVar8, 0);
                }
                if (cVar13 == '\0') {
                    *(float *)(a0[0xa4] + 0x27c) = fVar6;
                } else {
                    *(double *)(a0[0xa4] + 0x27c) = in_xd0;
                }
                game_vec_06aa04(a0, uVar2, ar6_00, a3);
                piVar5 = a0 + 0x90;
                Vec3_scale(auStack_2840, piVar5, ar6_00, a3, auStack_2850);
                if (cVar13 != '\0') {
                    fVar6 = 76.8;
                }
                Vec3_set_xyz(auStack_285c, piVar5, ar6_00, a3);
                Vec3_vec_023484(auStack_2850, auStack_285c, ar6_00, a3, auStack_286c);
                Vec3_add(a0 + 0xc, auStack_286c, ar6_00, a3, auStack_287c);
                Vec3_assign(a0[0xa4] + 0x30, auStack_287c, ar6_00, a3);
                Vec3_dtor(auStack_287c, 0xffffffff, ar6_00, a3);
                Vec3_dtor(auStack_286c, 0xffffffff, ar6_00, a3);
                object_dtor_delete(auStack_285c, 0xffffffff, ar6_00, a3);
                Vec3_dtor(auStack_2850, 0xffffffff, ar6_00, a3);
                Vec3_dtor(auStack_2840, 0xffffffff, ar6_00, a3);
            }
            Vec3_assign(a0[0xa4] + 0x268, a0 + 0xc, ar6_00, a3);
            if (cVar13 == '\0') {
                *(u32 *)(a0[0xa4] + 0x278) = 0;
            } else {
                *(u64 *)(a0[0xa4] + 0x278) = (u64)(u32)fVar6;
            }
            if (cVar13 == '\0') {
                *(u32 *)(a0[0xa4] + 0x280) = 0;
            } else {
                *(u64 *)(a0[0xa4] + 0x280) = (u64)(u32)fVar6;
            }
            if (cVar13 == '\0') {
                *(int *)(a0[0xa4] + 0x5c) = a0[0x90];
            } else {
                *(u64 *)(a0[0xa4] + 0x5c) = *(u64 *)(a0 + 0x90);
            }
            if (cVar13 == '\0') {
                *(int *)(a0[0xa4] + 0x60) = a0[0x90];
            } else {
                *(u64 *)(a0[0xa4] + 0x60) = *(u64 *)(a0 + 0x90);
            }
            if (cVar13 == '\0') {
                *(int *)(a0[0xa4] + 100) = a0[0x90];
            } else {
                *(u64 *)(a0[0xa4] + 100) = *(u64 *)(a0 + 0x90);
            }
            a0[0xa4] = 0;
            game_copy_068890(auStack_3048, a1);
            time_mark_set(a0, auStack_3048);
            dtor_delete_with_ac(auStack_3048, 0xffffffff, ar6_00, a3);
            piVar5 = (int *)(a0[0x8c] + 1);
            a0[0x8c] = (int)piVar5;
            goto switchD_8c068ec8_caseD_5;
        }
        break;
    case 4:
        goto switchD_8c068ec8_caseD_4;
    case 5:
    switchD_8c068ec8_caseD_5:
        iVar3 = libgcc_divide_helper_01031c(a0[0x84], 4, piVar5);
        a0[0x8a] = iVar3 * 3 + 1;
        if (cVar13 == '\0') {
            dVar8 = (double)CONCAT44(0x3dcccccd, a0[0x8b]);
        } else {
            in_xd0 = *(double *)(a0 + 0x8b);
            dVar8 = 21990236605644.8;
        }
        if (cVar12 == '\0') {
            fVar6 = SUB84(dVar8, 0) + (float)((u64)dVar8 >> 0x20);
        } else {
            fVar6 = SUB84(dVar8 + dVar8, 0);
        }
        if (cVar13 == '\0') {
            a0[0x8b] = (int)fVar6;
            uVar9 = CONCAT44(0x42b40000, a0[0x8b]);
        } else {
            *(double *)(a0 + 0x8b) = in_xd0;
            uVar9 = 0x30a842b40000;
        }
        if (cVar12 != '\0' || (float)(uVar9 >> 0x20) <= (float)uVar9) {
            a0[0x8c] = 3;
            if (cVar13 == '\0') {
                a0[0x8b] = 0;
            } else {
                *(u64 *)(a0 + 0x8b) = uVar9 & 0xffffffff;
            }
        }
    }
switchD_8c068ec8_default:
    uVar2 = Vec3_dtor(auStack_24, 0xffffffff, piVar5, a3);
    return uVar2;
}

/*
 * game_uses_rand_069c24  0x8c069c24
 * area name: game code; nothing names its area yet; behaviour name: its main named callee is rand
 * called by: game_vec_08fd38, game_vec_090bc4
 */
u32 game_uses_rand_069c24(int *a0, int a1, int a2, u32 a3) {
    u32 *puVar1;
    u32 uVar2;
    u32 *puVar3;
    int iVar5;
    int iVar6;
    int *ar5_00;
    int *ar6_00;
    int *ar7_00;
    u32 unaff_r8;
    int iVar7;
    int iVar8;
    int unaff_r14;
    float fVar9;
    u64 in_dr0;
    u64 uVar10;
    double dVar11;
    u64 uStack_1d8;
    int iStack_1d0;
    int iStack_1c0;
    int iStack_1b8;
    int iStack_1b0;
    int iStack_1a8;
    int iStack_1a4;
    int iStack_190;
    int iStack_18c;
    int iStack_184;
    int iStack_17c;
    int iStack_174;
    int iStack_170;
    int iStack_15c;
    u32 *puVar4;

    iVar8 = -1;
    puVar1 = (u32 *)((int)&uStack_1d8 + 0x128);
    iVar5 = 0x12;
    puVar3 = (u32 *)(&DATA_8c137120);
    uStack_1d8._0_4_ = a1;
    do {
        puVar4 = puVar3 + 1;
        *puVar1 = *puVar3;
        puVar3 = puVar3 + 2;
        puVar1[1] = *puVar4;
        puVar1 = puVar1 + 2;
        iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
    iVar5 = a2;
    if ((int)uStack_1d8 == 0) {
        uVar2 = rand();
        *(u32 *)((int)&uStack_1d8 + 0x114) = uVar2;
        a1 = 7;
        uVar2 = (*(code *)(&libgcc_divide_helper_01031c))(*(u32 *)((int)&uStack_1d8 + 0x114), 7, iVar5, a3);
        *(u32 *)((int)&uStack_1d8 + 0xb0) = uVar2;
        unaff_r14 = *(int *)((int)&uStack_1d8 + 0xb0);
        iVar7 = 7;
        do {
            *(int *)((int)&uStack_1d8 + 0xac) = unaff_r14;
            if (*(int *)(*(int *)((int)&uStack_1d8 + 0xac) * 8 + 0x8c2809b8 + 4) == 0) {
                iVar7 = iVar7 + -1;
                unaff_r14 = unaff_r14 + 1;
            } else {
                *(int *)((int)&uStack_1d8 + 0xa8) = unaff_r14;
                (*(code *)(&ret_const_244))(*(u32 *)(*(int *)((int)&uStack_1d8 + 0xa8) * 8 + 0x8c2809b8 + 4), a1, iVar5,
                                            a3);

                *(int *)((int)&uStack_1d8 + 0x110) = (int)(in_dr0 >> 0x20);
                uVar10 = (u64) * (u32 *)((int)&uStack_1d8 + 0x110);

                in_dr0 = uVar10 & 0xffffffff;
                if ((float)uVar10 == 0.0) {
                    if (a2 == 0) {
                        *(int *)((int)&uStack_1d8 + 0xa4) = unaff_r14;
                        uVar2 = (*(code *)(&get_field_210_06b3f4))(
                            *(u32 *)(*(int *)((int)&uStack_1d8 + 0xa4) * 8 + 0x8c2809b8 + 4), a1, iVar5, a3);
                        *(u32 *)((int)&uStack_1d8 + 0x10c) = uVar2;
                        *(int *)((int)&uStack_1d8 + 0xa0) = unaff_r14;
                        iVar8 = *(int *)((int)&uStack_1d8 + 0xa0) * 8 + 0x8c2809b8;
                        uVar2 = (*(code *)(&get_field_210_06b3f4))(*(u32 *)(iVar8 + 4), iVar8, iVar5, a3);
                        *(u32 *)((int)&uStack_1d8 + 0x108) = uVar2;
                        *(int *)((int)&uStack_1d8 + 0x9c) = unaff_r14;
                        uVar2 =
                            (*(code *)(&libgcc_divide_helper_01031c))(*(u32 *)((int)&uStack_1d8 + 0x10c), 4, iVar5, a3);
                        *(u32 *)((int)&uStack_1d8 + 0x98) = uVar2;
                        uVar2 =
                            (*(code *)(&libgcc_divide_helper_01031c))(*(u32 *)((int)&uStack_1d8 + 0x108), 4, iVar5, a3);
                        *(u32 *)((int)&uStack_1d8 + 0x90) = uVar2;
                        *(u32 *)((int)&uStack_1d8 + 0x94) = *(u32 *)((int)&uStack_1d8 + 0x90);
                        iVar5 = *(int *)((int)&uStack_1d8 + 0x94) * 2 + 3;
                        a1 = *(int *)((int)&uStack_1d8 + 0x98);
                        uVar2 = (*(code *)(&game_uses_set_flags_214_06b29c))(
                            *(u32 *)(*(int *)((int)&uStack_1d8 + 0x9c) * 8 + 0x8c2809b8 + 4), a1, iVar5, a3);
                        *(u32 *)((int)&uStack_1d8 + 0x104) = uVar2;
                        iVar8 = *(int *)((int)&uStack_1d8 + 0x104);
                    } else {
                        *(int *)((int)&uStack_1d8 + 0x8c) = unaff_r14;
                        uVar2 = (*(code *)(&get_field_210_06b3f4))(
                            *(u32 *)(*(int *)((int)&uStack_1d8 + 0x8c) * 8 + 0x8c2809b8 + 4), a1, iVar5, a3);
                        *(u32 *)((int)&uStack_1d8 + 0x100) = uVar2;
                        *(int *)((int)&uStack_1d8 + 0x88) = unaff_r14;
                        uVar2 =
                            (*(code *)(&libgcc_divide_helper_01031c))(*(u32 *)((int)&uStack_1d8 + 0x100), 4, iVar5, a3);
                        *(u32 *)((int)&uStack_1d8 + 0x80) = uVar2;
                        *(u32 *)((int)&uStack_1d8 + 0x84) = *(u32 *)((int)&uStack_1d8 + 0x80);
                        a1 = *(int *)((int)&uStack_1d8 + 0x84) * 2 + 3;
                        uVar2 = (*(code *)(&game_uses_set_flags_214_06b35c))(
                            *(u32 *)(*(int *)((int)&uStack_1d8 + 0x88) * 8 + 0x8c2809b8 + 4), a1, iVar5, a3);
                        *(u32 *)((int)&uStack_1d8 + 0xfc) = uVar2;
                        iVar8 = *(int *)((int)&uStack_1d8 + 0xfc);
                    }
                }
                if (iVar8 == -1) {
                    iVar7 = iVar7 + -1;
                    unaff_r14 = unaff_r14 + 1;
                }
            }
            if (5 < unaff_r14) {
                unaff_r14 = 0;
            }
        } while ((-1 < iVar7) && (iVar8 == -1));
    } else if ((int)uStack_1d8 == 1) {
        uVar2 = rand();
        *(u32 *)((int)&uStack_1d8 + 0xf8) = uVar2;
        a1 = 6;
        iStack_15c = (*(code *)(&libgcc_divide_helper_01031c))(*(u32 *)((int)&uStack_1d8 + 0xf8), 6, iVar5, a3);
        iVar7 = 6;
        unaff_r14 = iStack_15c;
        do {
            if (*(int *)(unaff_r14 * 8 + 0x8c2809fc + 4) == 0) {
                iVar7 = iVar7 + -1;
                unaff_r14 = unaff_r14 + 1;
            } else {
                ret_const_244(*(u32 *)(unaff_r14 * 8 + 0x8c2809fc + 4), a1, iVar5, a3);

                *(int *)((int)&uStack_1d8 + 0xf4) = (int)(in_dr0 >> 0x20);
                uVar10 = (u64) * (u32 *)((int)&uStack_1d8 + 0xf4);

                in_dr0 = uVar10 & 0xffffffff;
                if ((float)uVar10 == 0.0) {
                    if (a2 == 0) {
                        uVar2 =
                            (*(code *)(&get_field_210_06b3f4))(*(u32 *)(unaff_r14 * 8 + 0x8c2809fc + 4), a1, iVar5, a3);
                        *(u32 *)((int)&uStack_1d8 + 0xf0) = uVar2;
                        uVar2 =
                            (*(code *)(&get_field_210_06b3f4))(*(u32 *)(unaff_r14 * 8 + 0x8c2809fc + 4), a1, iVar5, a3);
                        *(u32 *)((int)&uStack_1d8 + 0xec) = uVar2;
                        iStack_170 = unaff_r14;
                        iStack_174 =
                            (*(code *)(&libgcc_divide_helper_01031c))(*(u32 *)((int)&uStack_1d8 + 0xf0), 4, iVar5, a3);
                        iStack_17c =
                            (*(code *)(&libgcc_divide_helper_01031c))(*(u32 *)((int)&uStack_1d8 + 0xec), 4, iVar5, a3);
                        iVar5 = iStack_17c * 2 + 3;
                        a1 = iStack_174;
                        uVar2 = (*(code *)(&game_uses_set_flags_214_06b29c))(*(u32 *)(iStack_170 * 8 + 0x8c2809fc + 4),
                                                                             iStack_174, iVar5, a3);
                        *(u32 *)((int)&uStack_1d8 + 0xe8) = uVar2;
                        iVar8 = *(int *)((int)&uStack_1d8 + 0xe8);
                    } else {
                        uVar2 =
                            (*(code *)(&get_field_210_06b3f4))(*(u32 *)(unaff_r14 * 8 + 0x8c2809fc + 4), a1, iVar5, a3);
                        *(u32 *)((int)&uStack_1d8 + 0xe4) = uVar2;
                        iStack_184 = unaff_r14;
                        iStack_18c =
                            (*(code *)(&libgcc_divide_helper_01031c))(*(u32 *)((int)&uStack_1d8 + 0xe4), 4, iVar5, a3);
                        a1 = iStack_18c * 2 + 3;
                        uVar2 = (*(code *)(&game_uses_set_flags_214_06b35c))(*(u32 *)(iStack_184 * 8 + 0x8c2809fc + 4),
                                                                             a1, iVar5, a3);
                        *(u32 *)((int)&uStack_1d8 + 0xe0) = uVar2;
                        iVar8 = *(int *)((int)&uStack_1d8 + 0xe0);
                    }
                }
                if (iVar8 == -1) {
                    iVar7 = iVar7 + -1;
                    unaff_r14 = unaff_r14 + 1;
                }
            }
            if (5 < unaff_r14) {
                unaff_r14 = 0;
            }
        } while ((-1 < iVar7) && (iVar8 == -1));
    } else if ((int)uStack_1d8 == 2) {
        uVar2 = rand();
        *(u32 *)((int)&uStack_1d8 + 0xdc) = uVar2;
        a1 = 6;
        iStack_190 = (*(code *)(&libgcc_divide_helper_01031c))(*(u32 *)((int)&uStack_1d8 + 0xdc), 6, iVar5, a3);
        iVar7 = 6;
        unaff_r14 = iStack_190;
        do {
            if (*(int *)(unaff_r14 * 8 + 0x8c280a38 + 4) == 0) {
                iVar7 = iVar7 + -1;
                unaff_r14 = unaff_r14 + 1;
            } else {
                ret_const_244(*(u32 *)(unaff_r14 * 8 + 0x8c280a38 + 4), a1, iVar5, a3);

                *(int *)((int)&uStack_1d8 + 0xd8) = (int)(in_dr0 >> 0x20);
                uVar10 = (u64) * (u32 *)((int)&uStack_1d8 + 0xd8);

                in_dr0 = uVar10 & 0xffffffff;
                if ((float)uVar10 == 0.0) {
                    if (a2 == 0) {
                        uVar2 =
                            (*(code *)(&get_field_210_06b3f4))(*(u32 *)(unaff_r14 * 8 + 0x8c280a38 + 4), a1, iVar5, a3);
                        *(u32 *)((int)&uStack_1d8 + 0xd4) = uVar2;
                        uVar2 =
                            (*(code *)(&get_field_210_06b3f4))(*(u32 *)(unaff_r14 * 8 + 0x8c280a38 + 4), a1, iVar5, a3);
                        *(u32 *)((int)&uStack_1d8 + 0xd0) = uVar2;
                        iStack_1a4 = unaff_r14;
                        iStack_1a8 =
                            (*(code *)(&libgcc_divide_helper_01031c))(*(u32 *)((int)&uStack_1d8 + 0xd4), 4, iVar5, a3);
                        iStack_1b0 =
                            (*(code *)(&libgcc_divide_helper_01031c))(*(u32 *)((int)&uStack_1d8 + 0xd0), 4, iVar5, a3);
                        iVar5 = iStack_1b0 * 2 + 3;
                        a1 = iStack_1a8;
                        uVar2 = (*(code *)(&game_uses_set_flags_214_06b29c))(*(u32 *)(iStack_1a4 * 8 + 0x8c280a38 + 4),
                                                                             iStack_1a8, iVar5, a3);
                        *(u32 *)((int)&uStack_1d8 + 0xcc) = uVar2;
                        iVar8 = *(int *)((int)&uStack_1d8 + 0xcc);
                    } else {
                        uVar2 =
                            (*(code *)(&get_field_210_06b3f4))(*(u32 *)(unaff_r14 * 8 + 0x8c280a38 + 4), a1, iVar5, a3);
                        *(u32 *)((int)&uStack_1d8 + 0xc8) = uVar2;
                        iStack_1b8 = unaff_r14;
                        iStack_1c0 =
                            (*(code *)(&libgcc_divide_helper_01031c))(*(u32 *)((int)&uStack_1d8 + 0xc8), 4, iVar5, a3);
                        a1 = iStack_1c0 * 2 + 3;
                        uVar2 = (*(code *)(&game_uses_set_flags_214_06b35c))(*(u32 *)(iStack_1b8 * 8 + 0x8c280a38 + 4),
                                                                             a1, iVar5, a3);
                        *(u32 *)((int)&uStack_1d8 + 0xc4) = uVar2;
                        iVar8 = *(int *)((int)&uStack_1d8 + 0xc4);
                    }
                }
                if (iVar8 == -1) {
                    iVar7 = iVar7 + -1;
                    unaff_r14 = unaff_r14 + 1;
                }
            }
            if (5 < unaff_r14) {
                unaff_r14 = 0;
            }
        } while ((-1 < iVar7) && (iVar8 == -1));
    }
    if (iVar8 == -1) {
        uVar2 = 0;
    } else {
        iVar7 = unaff_r14;
        if ((int)uStack_1d8 == 0) {
            unaff_r8 = *(u32 *)(unaff_r14 * 8 + 0x8c2809b8 + 4);
            a1 = 0x8c2809b8;
        } else if ((int)uStack_1d8 == 1) {
            unaff_r8 = *(u32 *)(unaff_r14 * 8 + 0x8c2809fc + 4);
            iVar7 = unaff_r14 + 7;
        } else if ((int)uStack_1d8 == 2) {
            unaff_r8 = *(u32 *)(unaff_r14 * 8 + 0x8c280a38 + 4);
            iVar7 = unaff_r14 + 0xd;
        }
        uVar2 = field_ptr_204(unaff_r8);
        *(u32 *)((int)&uStack_1d8 + 0xc0) = uVar2;
        uVar2 = (*(code *)(&get_field_0_015bb8))(*(u32 *)((int)&uStack_1d8 + 0xc0), a1, iVar5, a3);
        *(u32 *)((int)&uStack_1d8 + 0xbc) = uVar2;
        iVar6 = *(int *)(*(int *)((int)&uStack_1d8 + 0xbc) + 0x2c);
        uVar2 = get_field_210_06b3f4(unaff_r8);
        *(u32 *)((int)&uStack_1d8 + 0xb8) = uVar2;
        *a0 = *(int *)((int)&uStack_1d8 + 0xb8);
        (*(code *)(&Vec3_ctor_copy_wrap_02f670))(unaff_r8, (int)&uStack_1d8 + 0x118, iVar5, a3,
                                                 (int)&uStack_1d8 + 0x118);
        Vec3_assign(a0 + 4, (int)&uStack_1d8 + 0x118, iVar5, a3);
        Vec3_dtor((int)&uStack_1d8 + 0x118, 0xffffffff, iVar5, a3);
        iStack_1d0 = *a0;
        uStack_1d8._4_4_ = iVar8;
        a0[1] = *(int *)((int)&uStack_1d8 + iVar8 * 4 + *a0 * 0x24 + 0x128);
        a0[2] = iVar7;
        a0[3] = iVar8;
        ar7_00 = a0 + 0xe;
        ar6_00 = a0 + 0xd;
        get_vec3_field_50(unaff_r8, a0 + 0xc, ar6_00, ar7_00);
        if ((iVar8 < 9) && (-1 < iVar8)) {
            uVar2 = (*(code *)(&(&DATA_8c06a404))[iVar8])();
            return uVar2;
        }
        ar5_00 = (int *)(iVar6 + 8);

        a0[8] = *ar5_00;
        a0[9] = *(int *)(iVar6 + 0xc);
        a0[10] = *(int *)(iVar6 + 0x10);

        dVar11 = (double)CONCAT44(g_8c06a4f4, (float)*(int *)(iVar6 + 0x14));

        fVar9 = SUB84(dVar11, 0) * (float)((u64)dVar11 >> 0x20);

        dVar11 = (double)CONCAT44(g_8c06a4f8, fVar9);

        fVar9 = SUB84(dVar11, 0) / (float)((u64)dVar11 >> 0x20);

        a0[0xf] = (int)fVar9;

        dVar11 = (double)CONCAT44(g_8c06a4f4, (float)*(int *)(iVar6 + 0x18));

        fVar9 = SUB84(dVar11, 0) * (float)((u64)dVar11 >> 0x20);

        dVar11 = (double)CONCAT44(g_8c06a4f8, fVar9);

        fVar9 = SUB84(dVar11, 0) / (float)((u64)dVar11 >> 0x20);

        a0[0x10] = (int)fVar9;

        dVar11 = (double)CONCAT44(g_8c06a4f4, (float)*(int *)(iVar6 + 0x1c));

        fVar9 = SUB84(dVar11, 0) * (float)((u64)dVar11 >> 0x20);

        dVar11 = (double)CONCAT44(g_8c06a4f8, fVar9);

        fVar9 = (float)((u64)dVar11 >> 0x20);
        dVar11 = (double)CONCAT44(fVar9, SUB84(dVar11, 0) / fVar9);

        a0[0x11] = SUB84(dVar11, 0);

        ret_const_240();

        *(int *)((int)&uStack_1d8 + 0xb4) = (int)((u64)dVar11 >> 0x20);
        a0[0x12] = *(int *)((int)&uStack_1d8 + 0xb4);

        uVar2 = 1;
    }
    return uVar2;
}

/*
 * clear_globals_280998  0x8c06a524
 * zeroes the counters at 8c280998..8c2809a8 and the three pair tables at 8c2809b8, 8c2809fc and 8c280a38
 * called by: CGame_Initial
 */
u32 clear_globals_280998(void) {
    int iVar1;

    g_8c280998 = 0;
    g_8c28099c = 0;
    g_8c2809a0 = 0;
    g_8c2809a4 = 0;
    g_8c2809a8 = 0;
    for (iVar1 = 0; iVar1 < 7; iVar1 = iVar1 + 1) {
        *(u32 *)(0x8c2809b8 + iVar1 * 8) = 0;
        *(u32 *)(iVar1 * 8 + 0x8c2809b8 + 4) = 0;
    }
    for (iVar1 = 0; iVar1 < 6; iVar1 = iVar1 + 1) {
        *(u32 *)(0x8c2809fc + iVar1 * 8) = 0;
        *(u32 *)(iVar1 * 8 + 0x8c2809fc + 4) = 0;
    }
    for (iVar1 = 0; iVar1 < 6; iVar1 = iVar1 + 1) {
        *(u32 *)(0x8c280a38 + iVar1 * 8) = 0;
        *(u32 *)(iVar1 * 8 + 0x8c280a38 + 4) = 0;
    }
    return 6;
}

/*
 * game_uses_rand_06a5f0  0x8c06a5f0
 * area name: game code; nothing names its area yet; behaviour name: its main named callee is rand
 */
u64 *game_uses_rand_06a5f0(int a0, u64 *a1, int a2, u32 a3) {
    u32 uVar1;
    int iVar2;
    int iVar3;
    u64 *puVar4;
    int iVar5;
    u32 in_fr1;
    u32 uVar6;
    u64 uVar7;
    double dVar8;
    char cVar9;
    char cVar10;

    cVar10 = '\0';
    cVar9 = '\0';
    if (*(int *)(a0 + 0x218) == -1) {
        g_8c2809a8 = g_8c2809a8 + 1;
    }
    if (-1 < *(int *)(a0 + 0x21c)) {
        iVar3 = *(int *)(a0 + 0x218);
        if (iVar3 == 0) {
            *(u32 *)(*(int *)(a0 + 0x21c) * 8 + 0x8c2809b8) = 0;
            if (*(int *)(a0 + 0x230) == 3) {
                g_8c280998 = g_8c280998 + -1;
                g_8c2809a8 = g_8c2809a8 + 1;
            }
        } else if (iVar3 == 1) {
            *(u32 *)(*(int *)(a0 + 0x21c) * 8 + 0x8c2809fc) = 0;
            if (*(int *)(a0 + 0x230) == 3) {
                if (*(int *)(a0 + 0x210) < 4) {
                    g_8c2809a0 = g_8c2809a0 + -1;
                } else {
                    g_8c28099c = g_8c28099c + -1;
                }
                g_8c2809a8 = g_8c2809a8 + 1;
            }
        } else if ((iVar3 == 2) && (*(u32 *)(*(int *)(a0 + 0x21c) * 8 + 0x8c280a38) = 0, *(int *)(a0 + 0x230) == 3)) {
            g_8c2809a4 = g_8c2809a4 + -1;
            g_8c2809a8 = g_8c2809a8 + 1;
        }
        *(u32 *)(a0 + 0x21c) = 0xffffffff;
    }
    iVar3 = a2;
    if (a2 == 0) {
        *(u32 *)(a0 + 0x218) = 0;
        uVar1 = rand();
        iVar2 = libgcc_divide_helper_01031c(uVar1, 7, iVar3);
        iVar5 = 7;
        while ((*(int *)(iVar2 * 8 + 0x8c2809b8) == 1 && (0 < iVar5))) {
            iVar2 = iVar2 + 1;
            iVar5 = iVar5 + -1;
            if (6 < iVar2) {
                iVar2 = 0;
            }
        }
        if (0 < iVar5) {
            *(u32 *)(iVar2 * 8 + 0x8c2809b8) = 1;
            *(int *)(a0 + 0x21c) = iVar2;
        }
        puVar4 = (u64 *)(iVar2 * 0x10 + 0x8c280abc);
        iVar2 = a0 + 0x30;
        Vec3_assign(iVar2, puVar4, iVar3, a3);
    } else if (a2 == 1) {
        *(u32 *)(a0 + 0x218) = 1;
        uVar1 = rand();
        iVar2 = libgcc_divide_helper_01031c(uVar1, 6, iVar3);
        iVar5 = 6;
        while ((*(int *)(iVar2 * 8 + 0x8c2809fc) == 1 && (0 < iVar5))) {
            iVar2 = iVar2 + 1;
            iVar5 = iVar5 + -1;
            if (5 < iVar2) {
                iVar2 = 0;
            }
        }
        if (0 < iVar5) {
            *(u32 *)(iVar2 * 8 + 0x8c2809fc) = 1;
            *(int *)(a0 + 0x21c) = iVar2;
        }
        puVar4 = (u64 *)(iVar2 * 0x10 + 0x8c280b74);
        iVar2 = a0 + 0x30;
        Vec3_assign(iVar2, puVar4, iVar3, a3);
    } else if (a2 == 2) {
        *(u32 *)(a0 + 0x218) = 2;
        uVar1 = rand();
        iVar2 = libgcc_divide_helper_01031c(uVar1, 6, iVar3);
        iVar5 = 6;
        while ((*(int *)(iVar2 * 8 + 0x8c280a38) == 1 && (0 < iVar5))) {
            iVar2 = iVar2 + 1;
            iVar5 = iVar5 + -1;
            if (5 < iVar2) {
                iVar2 = 0;
            }
        }
        if (0 < iVar5) {
            *(u32 *)(iVar2 * 8 + 0x8c280a38) = 1;
            *(int *)(a0 + 0x21c) = iVar2;
        }
        puVar4 = (u64 *)(iVar2 * 0x10 + 0x8c280c1c);
        iVar2 = a0 + 0x30;
        Vec3_assign(iVar2, puVar4, iVar3, a3);
    } else {
        iVar2 = a0;
        puVar4 = a1;
        if (a2 == 3) {
            *(u32 *)(a0 + 0x218) = 3;
            *(u32 *)(a0 + 0x21c) = 0xffffffff;
        }
    }
    uVar7 = (u64)in_fr1;
    if (cVar10 == '\0') {
        *(u32 *)(a0 + 0x50) = 0;
    } else {
        *(u64 *)(a0 + 0x50) = uVar7;
    }
    uVar1 = rand();
    uVar6 = (u32)uVar7;
    iVar3 = libgcc_divide_helper_01031c(uVar1, 0x168, iVar3);
    if (cVar9 == '\0') {
        dVar8 = (double)CONCAT44((float)iVar3, uVar6);
    } else {
        dVar8 = (double)iVar3;
    }
    if (cVar10 == '\0') {
        *(int *)(a0 + 0x54) = (int)((u64)dVar8 >> 0x20);
    } else {
        *(double *)(a0 + 0x54) = dVar8;
    }
    if (cVar10 == '\0') {
        *(u32 *)(a0 + 0x58) = 0;
    } else {
        *(u64 *)(a0 + 0x58) = (u64)dVar8 & 0xffffffff;
    }
    *(u32 *)(a0 + 0x230) = 1;
    if (cVar10 == '\0') {
        *(u32 *)(a0 + 0x244) = 0;
    } else {
        *(u64 *)(a0 + 0x244) = (u64)dVar8 & 0xffffffff;
    }
    if (a2 == 3) {
        if (cVar10 == '\0') {
            *(u32 *)a1 = 0;
        } else {
            *a1 = (u64)dVar8 & 0xffffffff;
        }
        puVar4 = (u64 *)((int)a1 + 4);
        if (cVar10 == '\0') {
            *(u32 *)puVar4 = 0;
        } else {
            *puVar4 = (u64)dVar8 & 0xffffffff;
        }
        if (cVar10 == '\0') {
            *(u32 *)(a1 + 1) = 0;
        } else {
            a1[1] = (u64)dVar8 & 0xffffffff;
        }
    } else {
        if (cVar10 == '\0') {
            *(u32 *)a1 = *(u32 *)(a0 + 0x30);
            *(u32 *)(a1 + 1) = *(u32 *)(a0 + 0x38);
            *(u32 *)((int)a1 + 4) = *(u32 *)(a0 + 0x34);
        } else {
            *a1 = *(u64 *)(a0 + 0x30);
            a1[1] = *(u64 *)(a0 + 0x38);
            *(u64 *)((int)a1 + 4) = *(u64 *)(a0 + 0x34);
        }
        puVar4 = (u64 *)(a0 + 0x38);
    }
    return puVar4;
}

/*
 * get_vec3_field_30_06a9e8  0x8c06a9e8
 * copies the three words at +0x30 to the pointers in a1..a3
 */
u32 *get_vec3_field_30_06a9e8(int a0, u32 *a1, u32 *a2, u32 *a3) {
    *a1 = *(u32 *)(a0 + 0x30);
    *a2 = *(u32 *)(a0 + 0x34);
    *a3 = *(u32 *)(a0 + 0x38);
    return (u32 *)(a0 + 0x34);
}

/*
 * game_vec_06aa04  0x8c06aa04
 * area name: game code; nothing names its area yet; behaviour name: mostly calls vec functions
 * called by: Class_12a0c4_state_switch_0679cc, Class_12a0c4_state_switch_068e64
 */
u32 game_vec_06aa04(u32 unused_a0, u32 a1, u32 a2, u32 a3) {
    u32 *puVar1;
    int *piVar2;
    int *piVar3;
    float fVar4;
    float fVar5;
    double dVar6;
    double dVar7;
    u32 in_fr3;
    double dVar8;
    u32 uVar9;
    float fVar10;
    u32 in_fr4;
    u64 in_dr14;
    double dVar11;
    u64 in_xd0;
    u64 uVar12;
    u64 uVar13;
    u64 in_xd14;
    bool bVar14;
    char cVar15;
    char cVar16;
    u32 in_stack_00000000;
    float fStack_24;
    float fStack_20;
    float fStack_1c;
    u32 uStack_18;

    cVar16 = '\0';
    cVar15 = '\0';
    dVar11 = (double)CONCAT44((int)((u64)in_dr14 >> 0x20), in_fr4);
    Vec3_ctor_zero(&fStack_24, a1, a2);
    puVar1 = (u32 *)deref_u32(0x8c280954);
    piVar2 = *(int **)*puVar1;
    while (true) {
        fVar4 = (float)*piVar2;
        dVar6 = (double)(u64)(u32)fVar4;
        if (cVar15 == '\0' && fVar4 < 0.0) {
            if (cVar16 == '\0') {
                dVar6 = (double)CONCAT44(0x4f800000, fVar4);
            } else {
                dVar6 = -7.932371899434731e-251;
            }
            if (cVar15 == '\0') {
                fVar4 = (float)((u64)dVar6 >> 0x20);
                dVar6 = (double)CONCAT44(fVar4, SUB84(dVar6, 0) + fVar4);
            } else {
                dVar6 = dVar6 + dVar6;
            }
        }
        fVar4 = SUB84(dVar11, 0);
        if (cVar15 == '\0') {
            bVar14 = SUB84(dVar6, 0) < fVar4;
        } else {
            bVar14 = dVar6 < dVar11;
        }
        if (!bVar14)
            break;
        piVar2 = piVar2 + 4;
    }
    fVar5 = (float)*piVar2;
    if (cVar15 == '\0' && fVar5 < 0.0) {
        if (cVar16 == '\0') {
            dVar6 = (double)CONCAT44(0x4f800000, fVar5);
        } else {
            dVar6 = -7.932371899434731e-251;
        }
        if (cVar15 == '\0') {
            fVar5 = SUB84(dVar6, 0) + (float)((u64)dVar6 >> 0x20);
        } else {
            fVar5 = SUB84(dVar6 + dVar6, 0);
        }
    }
    if (fVar5 == fVar4) {
        if (cVar16 == '\0') {
            fStack_24 = (float)piVar2[1];
            fStack_20 = (float)piVar2[2];
            fStack_1c = (float)piVar2[3];
        } else {
            fStack_24 = (float)*(u64 *)(piVar2 + 1);
            fStack_20 = (float)*(u64 *)(piVar2 + 2);
            fStack_1c = (float)*(u64 *)(piVar2 + 3);
            uStack_18 = (u32)((u64) * (u64 *)(piVar2 + 3) >> 0x20);
        }
    } else {
        piVar3 = piVar2 + -4;
        if (cVar16 == '\0') {
            dVar6 = (double)CONCAT44(piVar2[1], in_fr3);
            dVar7 = (double)CONCAT44(piVar2[-3], fVar5);
        } else {
            dVar6 = *(double *)(piVar2 + 1);
            dVar7 = *(double *)(piVar2 + -3);
        }
        if (cVar15 == '\0') {
            dVar6 = (double)CONCAT44((float)((u64)dVar6 >> 0x20) - (float)((u64)dVar7 >> 0x20), SUB84(dVar6, 0));
        } else {
            dVar6 = dVar6 - dVar7;
        }
        fVar5 = (float)(*piVar2 - *piVar3);
        dVar7 = (double)(u64)(u32)fVar5;
        if (cVar15 == '\0' && fVar5 < 0.0) {
            if (cVar16 == '\0') {
                dVar7 = (double)CONCAT44(0x4f800000, fVar5);
            } else {
                dVar7 = -7.932371899434731e-251;
            }
            if (cVar15 == '\0') {
                fVar5 = (float)((u64)dVar7 >> 0x20);
                dVar7 = (double)CONCAT44(fVar5, SUB84(dVar7, 0) + fVar5);
            } else {
                dVar7 = dVar7 + dVar7;
            }
        }
        if (cVar15 == '\0') {
            dVar6 = (double)CONCAT44((float)((u64)dVar6 >> 0x20) / SUB84(dVar7, 0), SUB84(dVar6, 0));
        } else {
            dVar6 = dVar6 / dVar7;
        }
        fStack_24 = SUB84(dVar6, 0);
        if (cVar16 == '\0') {
            dVar8 = (double)CONCAT44(piVar2[2], fStack_24);
            dVar7 = (double)CONCAT44(piVar2[-2], SUB84(dVar7, 0));
            fStack_24 = (float)((u64)dVar6 >> 0x20);
        } else {
            dVar8 = *(double *)(piVar2 + 2);
            dVar7 = *(double *)(piVar2 + -2);
        }
        if (cVar15 == '\0') {
            dVar8 = (double)CONCAT44((float)((u64)dVar8 >> 0x20) - (float)((u64)dVar7 >> 0x20), SUB84(dVar8, 0));
        } else {
            dVar8 = dVar8 - dVar7;
        }
        fVar5 = (float)(*piVar2 - *piVar3);
        dVar6 = (double)(u64)(u32)fVar5;
        if (cVar15 == '\0' && fVar5 < 0.0) {
            if (cVar16 == '\0') {
                dVar6 = (double)CONCAT44(0x4f800000, fVar5);
            } else {
                dVar6 = -7.932371899434731e-251;
            }
            if (cVar15 == '\0') {
                fVar5 = (float)((u64)dVar6 >> 0x20);
                dVar6 = (double)CONCAT44(fVar5, SUB84(dVar6, 0) + fVar5);
            } else {
                dVar6 = dVar6 + dVar6;
            }
        }
        if (cVar15 == '\0') {
            dVar8 = (double)CONCAT44((float)((u64)dVar8 >> 0x20) / SUB84(dVar6, 0), SUB84(dVar8, 0));
        } else {
            dVar8 = dVar8 / dVar6;
        }
        fStack_20 = SUB84(dVar8, 0);
        if (cVar16 == '\0') {
            dVar7 = (double)CONCAT44(piVar2[3], fStack_20);
            dVar6 = (double)CONCAT44(piVar2[-1], SUB84(dVar6, 0));
            fStack_20 = (float)(int)((u64)dVar8 >> 0x20);
        } else {
            dVar7 = *(double *)(piVar2 + 3);
            dVar6 = *(double *)(piVar2 + -1);
        }
        if (cVar15 == '\0') {
            dVar7 = (double)CONCAT44((float)((u64)dVar7 >> 0x20) - (float)((u64)dVar6 >> 0x20), SUB84(dVar7, 0));
        } else {
            dVar7 = dVar7 - dVar6;
        }
        fVar5 = (float)(*piVar2 - *piVar3);
        dVar6 = (double)(u64)(u32)fVar5;
        if (cVar15 == '\0' && fVar5 < 0.0) {
            if (cVar16 == '\0') {
                dVar6 = (double)CONCAT44(0x4f800000, fVar5);
            } else {
                dVar6 = -7.932371899434731e-251;
            }
            if (cVar15 == '\0') {
                fVar5 = (float)((u64)dVar6 >> 0x20);
                dVar6 = (double)CONCAT44(fVar5, SUB84(dVar6, 0) + fVar5);
            } else {
                dVar6 = dVar6 + dVar6;
            }
        }
        if (cVar15 == '\0') {
            dVar7 = (double)CONCAT44((float)((u64)dVar7 >> 0x20) / SUB84(dVar6, 0), SUB84(dVar7, 0));
        } else {
            dVar7 = dVar7 / dVar6;
        }
        uVar9 = (u32)((u64)dVar7 >> 0x20);
        fStack_1c = (float)SUB84(dVar7, 0);
        if (cVar16 == '\0') {
            fStack_1c = (float)uVar9;
            uVar9 = uStack_18;
        }
        uStack_18 = uVar9;
        if (cVar15 == '\0') {
            dVar7 = (double)CONCAT44((float)*piVar3, SUB84(dVar7, 0));
        } else {
            dVar7 = (double)*piVar3;
        }
        dVar8 = (double)((u64)dVar6 & 0xffffffff);
        fVar5 = (float)((u64)dVar7 >> 0x20);
        if (cVar15 == '\0') {
            bVar14 = fVar5 < 0.0;
        } else {
            bVar14 = dVar7 < dVar8;
        }
        if (bVar14) {
            if (cVar16 == '\0') {
                dVar8 = (double)CONCAT44(0x4f800000, SUB84(dVar6, 0));
            } else {
                dVar8 = -7.932371899434731e-251;
            }
            if (cVar15 == '\0') {
                dVar7 = (double)CONCAT44(fVar5 + (float)((u64)dVar8 >> 0x20), SUB84(dVar7, 0));
            } else {
                dVar7 = dVar7 + dVar8;
            }
        }
        uVar12 = in_xd14;
        if (cVar16 == '\0') {
            dVar8 = (double)CONCAT44((int)((u64)dVar8 >> 0x20), fVar4);
            uVar12 = in_xd0;
        }
        if (cVar15 == '\0') {
            fVar5 = SUB84(dVar8, 0) - (float)((u64)dVar7 >> 0x20);
        } else {
            fVar5 = SUB84(dVar8 - dVar7, 0);
        }
        if (cVar16 == '\0') {
            dVar6 = (double)CONCAT44(fStack_24, fVar5);
        } else {
            dVar6 = (double)CONCAT44(fStack_20, fStack_24);
        }
        if (cVar15 == '\0') {
            fVar5 = SUB84(dVar6, 0) * (float)((u64)dVar6 >> 0x20);
        } else {
            fVar5 = SUB84(dVar6 * dVar6, 0);
        }
        if (cVar16 == '\0') {
            dVar6 = (double)CONCAT44(piVar2[-3], fVar5);
        } else {
            dVar6 = *(double *)(piVar2 + -3);
        }
        if (cVar15 == '\0') {
            fVar5 = SUB84(dVar6, 0) + (float)((u64)dVar6 >> 0x20);
        } else {
            fVar5 = SUB84(dVar6 + dVar6, 0);
        }
        fStack_24 = fVar5;
        if (cVar16 != '\0') {
            fStack_24 = (float)uVar12;
            fStack_20 = (float)((u64)uVar12 >> 0x20);
        }
        if (cVar15 == '\0') {
            dVar6 = (double)CONCAT44((float)*piVar3, SUB84(dVar7, 0));
        } else {
            dVar6 = (double)*piVar3;
        }
        dVar7 = (double)(u64)(u32)fVar5;
        fVar10 = (float)((u64)dVar6 >> 0x20);
        if (cVar15 == '\0') {
            bVar14 = fVar10 < 0.0;
        } else {
            bVar14 = dVar6 < dVar7;
        }
        if (bVar14) {
            if (cVar16 == '\0') {
                dVar7 = (double)CONCAT44(0x4f800000, fVar5);
            } else {
                dVar7 = -7.932371899434731e-251;
            }
            if (cVar15 == '\0') {
                dVar6 = (double)CONCAT44(fVar10 + (float)((u64)dVar7 >> 0x20), SUB84(dVar6, 0));
            } else {
                dVar6 = dVar6 + dVar7;
            }
        }
        uVar13 = in_xd14;
        if (cVar16 == '\0') {
            dVar7 = (double)CONCAT44((int)((u64)dVar7 >> 0x20), fVar4);
            uVar13 = uVar12;
        }
        if (cVar15 == '\0') {
            fVar5 = SUB84(dVar7, 0) - (float)((u64)dVar6 >> 0x20);
        } else {
            fVar5 = SUB84(dVar7 - dVar6, 0);
        }
        if (cVar16 == '\0') {
            dVar6 = (double)CONCAT44(fStack_20, fVar5);
        } else {
            dVar6 = (double)CONCAT44(fStack_1c, fStack_20);
        }
        if (cVar15 == '\0') {
            fVar5 = SUB84(dVar6, 0) * (float)((u64)dVar6 >> 0x20);
        } else {
            fVar5 = SUB84(dVar6 * dVar6, 0);
        }
        if (cVar16 == '\0') {
            dVar6 = (double)CONCAT44(piVar2[-2], fVar5);
        } else {
            dVar6 = *(double *)(piVar2 + -2);
        }
        if (cVar15 == '\0') {
            fStack_20 = SUB84(dVar6, 0) + (float)((u64)dVar6 >> 0x20);
        } else {
            fStack_20 = SUB84(dVar6 + dVar6, 0);
        }
        if (cVar16 != '\0') {
            fStack_20 = (float)uVar13;
            fStack_1c = (float)((u64)uVar13 >> 0x20);
        }
        fVar5 = (float)*piVar3;
        dVar6 = (double)(u64)(u32)fVar5;
        if (cVar15 == '\0' && fVar5 < 0.0) {
            if (cVar16 == '\0') {
                dVar6 = (double)CONCAT44(0x4f800000, fVar5);
            } else {
                dVar6 = -7.932371899434731e-251;
            }
            if (cVar15 == '\0') {
                fVar5 = (float)((u64)dVar6 >> 0x20);
                dVar6 = (double)CONCAT44(fVar5, SUB84(dVar6, 0) + fVar5);
            } else {
                dVar6 = dVar6 + dVar6;
            }
        }
        if (cVar15 == '\0') {
            dVar11 = (double)CONCAT44((int)((u64)dVar11 >> 0x20), fVar4 - SUB84(dVar6, 0));
        } else {
            dVar11 = dVar11 - dVar6;
        }
        if (cVar16 == '\0') {
            dVar6 = (double)CONCAT44(fStack_1c, SUB84(dVar6, 0));
        } else {
            dVar6 = (double)CONCAT44(uStack_18, fStack_1c);
        }
        if (cVar15 == '\0') {
            dVar11 = (double)CONCAT44((int)((u64)dVar11 >> 0x20), SUB84(dVar11, 0) * (float)((u64)dVar6 >> 0x20));
        } else {
            dVar11 = dVar11 * dVar6;
        }
        if (cVar16 == '\0') {
            dVar6 = (double)CONCAT44(piVar2[-1], SUB84(dVar6, 0));
        } else {
            dVar6 = *(double *)(piVar2 + -1);
        }
        if (cVar15 == '\0') {
            fStack_1c = SUB84(dVar11, 0) + (float)((u64)dVar6 >> 0x20);
        } else {
            fStack_1c = SUB84(dVar11 + dVar6, 0);
        }
        if (cVar16 != '\0') {
            fStack_1c = (float)in_xd14;
            uStack_18 = (u32)((u64)in_xd14 >> 0x20);
        }
    }
    Vec3_ctor_copy(in_stack_00000000, &fStack_24, a2, a3);
    Vec3_dtor(&fStack_24, 0xffffffff, a2, a3);
    return 0;
}

/*
 * game_vec_06abb8  0x8c06abb8
 * area name: game code; nothing names its area yet; behaviour name: mostly calls vec functions
 * called by: Class_12a0c4_state_switch_0679cc, Class_12a0c4_state_switch_068e64
 */
u32 game_vec_06abb8(u32 unused_a0, u32 unused_a1, u32 a2, u32 a3) {
    int *piVar1;
    int *piVar2;
    float fVar3;
    float fVar4;
    double dVar5;
    double dVar6;
    double dVar7;
    u32 in_fr3;
    double dVar8;
    u32 in_fr4;
    u64 in_dr14;
    u64 in_xd0;
    double in_xd14;
    bool bVar9;
    float in_PR;
    char cVar10;
    char cVar11;
    u32 in_stack_00000000;
    float fStack_20;
    float fStack_1c;
    float fStack_18;
    float fStack_14;

    cVar11 = '\0';
    cVar10 = '\0';
    dVar6 = (double)CONCAT44((int)((u64)in_dr14 >> 0x20), in_fr4);
    fStack_14 = in_PR;
    Vec3_set_zero(&fStack_20);
    piVar1 = (int *)deref_u32(0x8c280954);
    piVar1 = *(int **)(*piVar1 + 4);
    while (true) {
        fVar3 = (float)*piVar1;
        dVar5 = (double)(u64)(u32)fVar3;
        if (cVar10 == '\0' && fVar3 < 0.0) {
            if (cVar11 == '\0') {
                dVar5 = (double)CONCAT44(0x4f800000, fVar3);
            } else {
                dVar5 = 1.4411522222084588e+18;
            }
            if (cVar10 == '\0') {
                fVar3 = (float)((u64)dVar5 >> 0x20);
                dVar5 = (double)CONCAT44(fVar3, SUB84(dVar5, 0) + fVar3);
            } else {
                dVar5 = dVar5 + dVar5;
            }
        }
        fVar3 = SUB84(dVar6, 0);
        if (cVar10 == '\0') {
            bVar9 = SUB84(dVar5, 0) < fVar3;
        } else {
            bVar9 = dVar5 < dVar6;
        }
        if (!bVar9)
            break;
        piVar1 = piVar1 + 4;
    }
    fVar4 = (float)*piVar1;
    if (cVar10 == '\0' && fVar4 < 0.0) {
        if (cVar11 == '\0') {
            dVar5 = (double)CONCAT44(0x4f800000, fVar4);
        } else {
            dVar5 = 1.4411522222084588e+18;
        }
        if (cVar10 == '\0') {
            fVar4 = SUB84(dVar5, 0) + (float)((u64)dVar5 >> 0x20);
        } else {
            fVar4 = SUB84(dVar5 + dVar5, 0);
        }
    }
    if (fVar4 == fVar3) {
        if (cVar11 == '\0') {
            dVar6 = (double)CONCAT44(0x43b40000, (float)piVar1[1]);
        } else {
            dVar6 = 2.6584566620691055e+36;
        }
        if (cVar10 == '\0') {
            fVar3 = SUB84(dVar6, 0) * (float)((u64)dVar6 >> 0x20);
        } else {
            fVar3 = SUB84(dVar6 * dVar6, 0);
        }
        if (cVar11 == '\0') {
            dVar6 = (double)CONCAT44(0x47800000, fVar3);
        } else {
            dVar6 = -8.166723480339562e-251;
        }
        if (cVar10 == '\0') {
            fVar3 = SUB84(dVar6, 0) / (float)((u64)dVar6 >> 0x20);
        } else {
            fVar3 = SUB84(dVar6 / dVar6, 0);
        }
        fStack_20 = (float)in_xd0;
        fVar4 = fStack_20;
        if (cVar11 == '\0') {
            fStack_20 = fVar3;
        }
        if (cVar11 == '\0') {
            dVar6 = (double)CONCAT44(0x43b40000, (float)piVar1[2]);
        } else {
            dVar6 = 2.6584566620691055e+36;
        }
        if (cVar10 == '\0') {
            fVar3 = SUB84(dVar6, 0) * (float)((u64)dVar6 >> 0x20);
        } else {
            fVar3 = SUB84(dVar6 * dVar6, 0);
        }
        if (cVar11 == '\0') {
            dVar6 = (double)CONCAT44(0x47800000, fVar3);
        } else {
            dVar6 = -8.166723480339562e-251;
        }
        if (cVar10 == '\0') {
            fVar3 = SUB84(dVar6, 0) / (float)((u64)dVar6 >> 0x20);
        } else {
            fVar3 = SUB84(dVar6 / dVar6, 0);
        }
        fStack_1c = fVar4;
        if (cVar11 == '\0') {
            fStack_1c = fVar3;
        }
        if (cVar11 == '\0') {
            dVar6 = (double)CONCAT44(0x43b40000, (float)piVar1[3]);
        } else {
            dVar6 = 2.6584566620691055e+36;
        }
        if (cVar10 == '\0') {
            fVar3 = SUB84(dVar6, 0) * (float)((u64)dVar6 >> 0x20);
        } else {
            fVar3 = SUB84(dVar6 * dVar6, 0);
        }
        if (cVar11 == '\0') {
            dVar6 = (double)CONCAT44(0x47800000, fVar3);
        } else {
            dVar6 = -8.166723480339562e-251;
        }
        if (cVar10 == '\0') {
            fStack_18 = SUB84(dVar6, 0) / (float)((u64)dVar6 >> 0x20);
        } else {
            fStack_18 = SUB84(dVar6 / dVar6, 0);
        }
        if (cVar11 != '\0') {
            fStack_14 = (float)((u64)in_xd0 >> 0x20);
            fStack_18 = fVar4;
        }
    } else {
        piVar2 = piVar1 + -4;
        if (cVar10 == '\0') {
            dVar5 = (double)CONCAT44((float)(piVar1[1] - piVar1[-3]), in_fr3);
        } else {
            dVar5 = (double)(piVar1[1] - piVar1[-3]);
        }
        if (cVar11 == '\0') {
            dVar7 = (double)CONCAT44(0x43b40000, fVar4);
        } else {
            dVar7 = 2.6584566620691055e+36;
        }
        if (cVar10 == '\0') {
            dVar5 = (double)CONCAT44((float)((u64)dVar5 >> 0x20) * (float)((u64)dVar7 >> 0x20), SUB84(dVar5, 0));
        } else {
            dVar5 = dVar5 * dVar7;
        }
        if (cVar11 == '\0') {
            dVar7 = (double)CONCAT44(0x47800000, SUB84(dVar7, 0));
        } else {
            dVar7 = -8.166723480339562e-251;
        }
        if (cVar10 == '\0') {
            dVar5 = (double)CONCAT44((float)((u64)dVar5 >> 0x20) / (float)((u64)dVar7 >> 0x20), SUB84(dVar5, 0));
        } else {
            dVar5 = dVar5 / dVar7;
        }
        fVar4 = (float)(*piVar1 - *piVar2);
        dVar7 = (double)(u64)(u32)fVar4;
        if (cVar10 == '\0' && fVar4 < 0.0) {
            if (cVar11 == '\0') {
                dVar7 = (double)CONCAT44(0x4f800000, fVar4);
            } else {
                dVar7 = 1.4411522222084588e+18;
            }
            if (cVar10 == '\0') {
                fVar4 = (float)((u64)dVar7 >> 0x20);
                dVar7 = (double)CONCAT44(fVar4, SUB84(dVar7, 0) + fVar4);
            } else {
                dVar7 = dVar7 + dVar7;
            }
        }
        if (cVar10 == '\0') {
            dVar5 = (double)CONCAT44((float)((u64)dVar5 >> 0x20) / SUB84(dVar7, 0), SUB84(dVar5, 0));
        } else {
            dVar5 = dVar5 / dVar7;
        }
        fStack_20 = SUB84(dVar5, 0);
        if (cVar11 == '\0') {
            fStack_20 = (float)((u64)dVar5 >> 0x20);
        }
        if (cVar10 == '\0') {
            dVar5 = (double)CONCAT44((float)(piVar1[2] - piVar1[-2]), SUB84(dVar5, 0));
        } else {
            dVar5 = (double)(piVar1[2] - piVar1[-2]);
        }
        if (cVar11 == '\0') {
            dVar7 = (double)CONCAT44(0x43b40000, SUB84(dVar7, 0));
        } else {
            dVar7 = 2.6584566620691055e+36;
        }
        if (cVar10 == '\0') {
            dVar5 = (double)CONCAT44((float)((u64)dVar5 >> 0x20) * (float)((u64)dVar7 >> 0x20), SUB84(dVar5, 0));
        } else {
            dVar5 = dVar5 * dVar7;
        }
        if (cVar11 == '\0') {
            dVar7 = (double)CONCAT44(0x47800000, SUB84(dVar7, 0));
        } else {
            dVar7 = -8.166723480339562e-251;
        }
        if (cVar10 == '\0') {
            dVar5 = (double)CONCAT44((float)((u64)dVar5 >> 0x20) / (float)((u64)dVar7 >> 0x20), SUB84(dVar5, 0));
        } else {
            dVar5 = dVar5 / dVar7;
        }
        fVar4 = (float)(*piVar1 - *piVar2);
        dVar7 = (double)(u64)(u32)fVar4;
        if (cVar10 == '\0' && fVar4 < 0.0) {
            if (cVar11 == '\0') {
                dVar7 = (double)CONCAT44(0x4f800000, fVar4);
            } else {
                dVar7 = 1.4411522222084588e+18;
            }
            if (cVar10 == '\0') {
                fVar4 = (float)((u64)dVar7 >> 0x20);
                dVar7 = (double)CONCAT44(fVar4, SUB84(dVar7, 0) + fVar4);
            } else {
                dVar7 = dVar7 + dVar7;
            }
        }
        if (cVar10 == '\0') {
            dVar5 = (double)CONCAT44((float)((u64)dVar5 >> 0x20) / SUB84(dVar7, 0), SUB84(dVar5, 0));
        } else {
            dVar5 = dVar5 / dVar7;
        }
        fStack_1c = SUB84(dVar5, 0);
        if (cVar11 == '\0') {
            fStack_1c = (float)((u64)dVar5 >> 0x20);
        }
        if (cVar10 == '\0') {
            dVar5 = (double)CONCAT44((float)(piVar1[3] - piVar1[-1]), SUB84(dVar5, 0));
        } else {
            dVar5 = (double)(piVar1[3] - piVar1[-1]);
        }
        if (cVar11 == '\0') {
            dVar7 = (double)CONCAT44(0x43b40000, SUB84(dVar7, 0));
        } else {
            dVar7 = 2.6584566620691055e+36;
        }
        if (cVar10 == '\0') {
            dVar5 = (double)CONCAT44((float)((u64)dVar5 >> 0x20) * (float)((u64)dVar7 >> 0x20), SUB84(dVar5, 0));
        } else {
            dVar5 = dVar5 * dVar7;
        }
        if (cVar11 == '\0') {
            dVar7 = (double)CONCAT44(0x47800000, SUB84(dVar7, 0));
        } else {
            dVar7 = -8.166723480339562e-251;
        }
        if (cVar10 == '\0') {
            dVar5 = (double)CONCAT44((float)((u64)dVar5 >> 0x20) / (float)((u64)dVar7 >> 0x20), SUB84(dVar5, 0));
        } else {
            dVar5 = dVar5 / dVar7;
        }
        fVar4 = (float)(*piVar1 - *piVar2);
        dVar7 = (double)(u64)(u32)fVar4;
        if (cVar10 == '\0' && fVar4 < 0.0) {
            if (cVar11 == '\0') {
                dVar7 = (double)CONCAT44(0x4f800000, fVar4);
            } else {
                dVar7 = 1.4411522222084588e+18;
            }
            if (cVar10 == '\0') {
                fVar4 = (float)((u64)dVar7 >> 0x20);
                dVar7 = (double)CONCAT44(fVar4, SUB84(dVar7, 0) + fVar4);
            } else {
                dVar7 = dVar7 + dVar7;
            }
        }
        if (cVar10 == '\0') {
            dVar5 = (double)CONCAT44((float)((u64)dVar5 >> 0x20) / SUB84(dVar7, 0), SUB84(dVar5, 0));
        } else {
            dVar5 = dVar5 / dVar7;
        }
        fVar4 = (float)((u64)dVar5 >> 0x20);
        fStack_18 = SUB84(dVar5, 0);
        if (cVar11 == '\0') {
            fStack_18 = fVar4;
            fVar4 = fStack_14;
        }
        fStack_14 = fVar4;
        fVar4 = (float)*piVar2;
        dVar7 = (double)(u64)(u32)fVar4;
        if (cVar10 == '\0' && fVar4 < 0.0) {
            if (cVar11 == '\0') {
                dVar7 = (double)CONCAT44(0x4f800000, fVar4);
            } else {
                dVar7 = 1.4411522222084588e+18;
            }
            if (cVar10 == '\0') {
                fVar4 = (float)((u64)dVar7 >> 0x20);
                dVar7 = (double)CONCAT44(fVar4, SUB84(dVar7, 0) + fVar4);
            } else {
                dVar7 = dVar7 + dVar7;
            }
        }
        dVar8 = in_xd14;
        if (cVar11 == '\0') {
            dVar8 = (double)CONCAT44(fVar3, SUB84(dVar5, 0));
        }
        if (cVar10 == '\0') {
            dVar8 = (double)CONCAT44((float)((u64)dVar8 >> 0x20) - SUB84(dVar7, 0), SUB84(dVar8, 0));
        } else {
            dVar8 = dVar8 - dVar7;
        }
        if (cVar11 == '\0') {
            dVar5 = (double)CONCAT44(fStack_20, SUB84(dVar7, 0));
        } else {
            dVar5 = (double)CONCAT44(fStack_1c, fStack_20);
        }
        if (cVar10 == '\0') {
            dVar8 = (double)CONCAT44((float)((u64)dVar8 >> 0x20) * (float)((u64)dVar5 >> 0x20), SUB84(dVar8, 0));
        } else {
            dVar8 = dVar8 * dVar5;
        }
        if (cVar11 == '\0') {
            dVar5 = (double)CONCAT44(0x43b40000, (float)piVar1[-3]);
        } else {
            dVar5 = 2.6584566620691055e+36;
        }
        if (cVar10 == '\0') {
            fVar4 = SUB84(dVar5, 0) * (float)((u64)dVar5 >> 0x20);
        } else {
            fVar4 = SUB84(dVar5 * dVar5, 0);
        }
        if (cVar11 == '\0') {
            dVar5 = (double)CONCAT44(0x47800000, fVar4);
        } else {
            dVar5 = -8.166723480339562e-251;
        }
        if (cVar10 == '\0') {
            dVar8 = (double)CONCAT44((float)((u64)dVar8 >> 0x20) + SUB84(dVar5, 0) / (float)((u64)dVar5 >> 0x20),
                                     SUB84(dVar8, 0));
        } else {
            dVar8 = dVar8 + dVar5 / dVar5;
        }
        fVar4 = (float)((u64)dVar8 >> 0x20);
        fStack_20 = SUB84(dVar8, 0);
        if (cVar11 == '\0') {
            fStack_20 = fVar4;
            fVar4 = fStack_1c;
        }
        fStack_1c = fVar4;
        fVar4 = (float)*piVar2;
        dVar5 = (double)(u64)(u32)fVar4;
        if (cVar10 == '\0' && fVar4 < 0.0) {
            if (cVar11 == '\0') {
                dVar5 = (double)CONCAT44(0x4f800000, fVar4);
            } else {
                dVar5 = 1.4411522222084588e+18;
            }
            if (cVar10 == '\0') {
                fVar4 = (float)((u64)dVar5 >> 0x20);
                dVar5 = (double)CONCAT44(fVar4, SUB84(dVar5, 0) + fVar4);
            } else {
                dVar5 = dVar5 + dVar5;
            }
        }
        dVar7 = in_xd14;
        if (cVar11 == '\0') {
            dVar7 = (double)CONCAT44(fVar3, SUB84(dVar8, 0));
        }
        if (cVar10 == '\0') {
            dVar7 = (double)CONCAT44((float)((u64)dVar7 >> 0x20) - SUB84(dVar5, 0), SUB84(dVar7, 0));
        } else {
            dVar7 = dVar7 - dVar5;
        }
        if (cVar11 == '\0') {
            dVar5 = (double)CONCAT44(fStack_1c, SUB84(dVar5, 0));
        } else {
            dVar5 = (double)CONCAT44(fStack_18, fStack_1c);
        }
        if (cVar10 == '\0') {
            dVar7 = (double)CONCAT44((float)((u64)dVar7 >> 0x20) * (float)((u64)dVar5 >> 0x20), SUB84(dVar7, 0));
        } else {
            dVar7 = dVar7 * dVar5;
        }
        if (cVar11 == '\0') {
            dVar5 = (double)CONCAT44(0x43b40000, (float)piVar1[-2]);
        } else {
            dVar5 = 2.6584566620691055e+36;
        }
        if (cVar10 == '\0') {
            fVar4 = SUB84(dVar5, 0) * (float)((u64)dVar5 >> 0x20);
        } else {
            fVar4 = SUB84(dVar5 * dVar5, 0);
        }
        if (cVar11 == '\0') {
            dVar5 = (double)CONCAT44(0x47800000, fVar4);
        } else {
            dVar5 = -8.166723480339562e-251;
        }
        if (cVar10 == '\0') {
            dVar7 = (double)CONCAT44((float)((u64)dVar7 >> 0x20) + SUB84(dVar5, 0) / (float)((u64)dVar5 >> 0x20),
                                     SUB84(dVar7, 0));
        } else {
            dVar7 = dVar7 + dVar5 / dVar5;
        }
        fVar4 = (float)((u64)dVar7 >> 0x20);
        fStack_1c = fVar4;
        if (cVar11 != '\0') {
            fStack_1c = SUB84(dVar7, 0);
            fStack_18 = fVar4;
        }
        fVar4 = (float)*piVar2;
        dVar5 = (double)(u64)(u32)fVar4;
        if (cVar10 == '\0' && fVar4 < 0.0) {
            if (cVar11 == '\0') {
                dVar5 = (double)CONCAT44(0x4f800000, fVar4);
            } else {
                dVar5 = 1.4411522222084588e+18;
            }
            if (cVar10 == '\0') {
                fVar4 = (float)((u64)dVar5 >> 0x20);
                dVar5 = (double)CONCAT44(fVar4, SUB84(dVar5, 0) + fVar4);
            } else {
                dVar5 = dVar5 + dVar5;
            }
        }
        if (cVar10 == '\0') {
            dVar6 = (double)CONCAT44((int)((u64)dVar6 >> 0x20), fVar3 - SUB84(dVar5, 0));
        } else {
            dVar6 = dVar6 - dVar5;
        }
        if (cVar11 == '\0') {
            dVar5 = (double)CONCAT44(fStack_18, SUB84(dVar5, 0));
        } else {
            dVar5 = (double)CONCAT44(fStack_14, fStack_18);
        }
        if (cVar10 == '\0') {
            dVar6 = (double)CONCAT44((int)((u64)dVar6 >> 0x20), SUB84(dVar6, 0) * (float)((u64)dVar5 >> 0x20));
        } else {
            dVar6 = dVar6 * dVar5;
        }
        if (cVar11 == '\0') {
            dVar5 = (double)CONCAT44(0x43b40000, (float)piVar1[-1]);
        } else {
            dVar5 = 2.6584566620691055e+36;
        }
        if (cVar10 == '\0') {
            fVar3 = SUB84(dVar5, 0) * (float)((u64)dVar5 >> 0x20);
        } else {
            fVar3 = SUB84(dVar5 * dVar5, 0);
        }
        if (cVar11 == '\0') {
            dVar5 = (double)CONCAT44(0x47800000, fVar3);
        } else {
            dVar5 = -8.166723480339562e-251;
        }
        if (cVar10 == '\0') {
            fStack_18 = SUB84(dVar6, 0) + SUB84(dVar5, 0) / (float)((u64)dVar5 >> 0x20);
        } else {
            fStack_18 = SUB84(dVar6 + dVar5 / dVar5, 0);
        }
        if (cVar11 != '\0') {
            fStack_18 = SUB84(in_xd14, 0);
            fStack_14 = (float)((u64)in_xd14 >> 0x20);
        }
    }
    vec3_copy_8c02b5fc(in_stack_00000000, &fStack_20, a2);
    object_dtor_delete(&fStack_20, 0xffffffff, a2, a3);
    return 0;
}

/*
 * game_float_calc_06add8  0x8c06add8
 * area name: game code; nothing names its area yet; behaviour name: floating-point arithmetic
 * called by: Class_12a0c4_state_switch_0679cc
 */
u32 game_float_calc_06add8(int a0, int *a1, u32 a2, u32 a3) {
    float fVar1;
    u64 in_dr0;
    float fVar3;
    double dVar2;
    float in_fr15;
    u32 in_fr14;
    bool bVar4;
    char cVar5;
    char cVar6;

    cVar6 = '\0';
    cVar5 = '\0';
    (**(code **)(*a1 + 0x184))(a1, a1, a2, a3);
    fVar1 = (float)in_dr0;
    if (cVar6 == '\0') {
        in_fr15 = (float)((u64)in_dr0 >> 0x20);
    }
    *(u32 *)(a0 + 0x74) = *(u32 *)(a0 + 0x74) & 0xffffffbf;
    *(u32 *)(a0 + 0x74) = *(u32 *)(a0 + 0x74) & 0xffffffef;
    *(u32 *)(a0 + 0x74) = *(u32 *)(a0 + 0x74) & 0xffffffdf;
    if (cVar6 == '\0') {
        fVar3 = 1.1754944e-38;
    } else {
        fVar1 = 1.1754944e-38;
        fVar3 = -NAN;
    }
    if (in_fr15 == fVar3) {
        (**(code **)(*a1 + 0x128))(a1, a0 + 0x30, a2, a3);
        if (cVar6 == '\0') {
            fVar1 = *(float *)(a0 + 0x34);
        }
        if (cVar5 != '\0' || fVar1 <= fVar3) {
            *(u32 *)(a0 + 0x74) = *(u32 *)(a0 + 0x74) | 0x20;
        } else {
            *(u32 *)(a0 + 0x74) = *(u32 *)(a0 + 0x74) | 0x40;
        }
    } else {
        (**(code **)(*a1 + 0x128))(a1, a0 + 0x30, a2, a3);
        if (cVar6 == '\0') {
            fVar1 = *(float *)(a0 + 0x34);
        }
        if (cVar5 != '\0' || fVar1 <= fVar3) {
            *(u32 *)(a0 + 0x74) = *(u32 *)(a0 + 0x74) | 0x20;
        } else {
            if (cVar6 == '\0') {
                dVar2 = (double)CONCAT44(*(u32 *)(a0 + 0x34), fVar1);
            } else {
                dVar2 = *(double *)(a0 + 0x34);
            }
            if (cVar5 == '\0') {
                bVar4 = in_fr15 < (float)((u64)dVar2 >> 0x20);
            } else {
                bVar4 = (double)CONCAT44(in_fr14, in_fr15) < dVar2;
            }
            if (bVar4) {
                *(u32 *)(a0 + 0x74) = *(u32 *)(a0 + 0x74) | 0x40;
            } else {
                *(u32 *)(a0 + 0x74) = *(u32 *)(a0 + 0x74) | 0x10;
            }
        }
    }
    return 0x74;
}

/*
 * dec_counters_248  0x8c06af1c
 * decrements each of the nine byte counters at +0x248 down to 0
 */
u32 dec_counters_248(int a0) {
    int iVar1;

    for (iVar1 = 0; iVar1 < 9; iVar1 = iVar1 + 1) {
        if ('\0' < *(char *)(0x248 + a0 + iVar1)) {
            *(char *)(0x248 + a0 + iVar1) = *(char *)(0x248 + a0 + iVar1) + -1;
        }
    }
    return 9;
}

/*
 * time_mark_set  0x8c06af5c
 * stores a1's day (+0xa2) and tick (+0xa4) at +0x264 / +0x266 (read back by elapsed_ticks_since)
 * called by: Class_12a0c4_state_switch_0679cc, Class_12a0c4_state_switch_068e64
 */
int time_mark_set(int a0, u32 a1) {
    u32 uVar1;
    u32 uVar2;
    int iVar3;

    uVar2 = a1;
    uVar1 = get_field_a2_s16(a1, a1);
    *(short *)(0x264 + a0) = (short)uVar1;
    uVar2 = get_field_a4_s16(a1, uVar2);
    iVar3 = 0x266;
    *(short *)(0x266 + a0) = (short)uVar2;
    return iVar3;
}

/*
 * elapsed_ticks_since  0x8c06afb0
 * ticks from the time stored at +0x264 (day) / +0x266 (tick) to a1's, 0x3840 ticks a day
 * called by: Class_12a0c4_state_switch_0679cc, Class_12a0c4_state_switch_068e64,
 * Class_12a0c4_uses_libgcc_divide_helper_068a4c
 */
int elapsed_ticks_since(int a0, u32 a1) {
    u32 uVar1;
    u32 uVar2;
    u32 uVar3;
    u32 ar5_00;
    int iVar4;

    ar5_00 = a1;
    uVar1 = get_field_a2_s16(a1, a1);
    if (*(short *)(0x264 + a0) == (short)uVar1) {
        uVar2 = get_field_a4_s16(a1, ar5_00);
        iVar4 = (uVar2 & 0xffff) - (int)*(short *)(0x266 + a0);
    } else {
        uVar2 = get_field_a4_s16(a1, ar5_00);
        uVar3 = get_field_a2_s16(a1, ar5_00);
        iVar4 = (0x3840 - *(short *)(0x266 + a0)) + (((uVar3 & 0xffff) - (u32) * (u16 *)(0x264 + a0)) + -1) * 0x3840 +
                (uVar2 & 0xffff);
    }
    return iVar4;
}

/*
 * game_uses_ret_const_244_06b054  0x8c06b054
 * area name: game code; nothing names its area yet; behaviour name: its main named callee is ret_const_244
 * called by: game_vec_08fd38, game_vec_090bc4
 */
u32 game_uses_ret_const_244_06b054(int a0) {
    u32 r5;
    u32 r6;
    u32 r7;
    u32 uVar1;
    float extraout_fr1;
    float extraout_fr1_00;
    float extraout_fr1_01;
    float fVar2;
    float extraout_fr0;
    float extraout_fr0_00;
    float extraout_fr0_01;
    char cVar3;
    char cVar4;

    cVar4 = '\0';
    cVar3 = '\0';
    uVar1 = 1;
    if (a0 < 7) {
        if (*(int *)(a0 * 8 + 0x8c2809bc) == 0) {
            uVar1 = 0;
        } else {
            ret_const_244(*(u32 *)(a0 * 8 + 0x8c2809bc), r5, r6, r7);
            fVar2 = extraout_fr1;
            if (cVar4 == '\0') {
                fVar2 = extraout_fr0;
            }
            if (cVar3 == '\0' && 0.0 < fVar2) {
                uVar1 = 0;
            }
        }
    } else if (a0 < 0xd) {
        if (*(int *)((a0 + -7) * 8 + 0x8c280a00) == 0) {
            uVar1 = 0;
        } else {
            ret_const_244(*(u32 *)((a0 + -7) * 8 + 0x8c280a00), r5, r6, r7);
            fVar2 = extraout_fr1_00;
            if (cVar4 == '\0') {
                fVar2 = extraout_fr0_00;
            }
            if (cVar3 == '\0' && 0.0 < fVar2) {
                uVar1 = 0;
            }
        }
    } else if (*(int *)((a0 + -1) * 8 + 0x8c280a3c) == 0) {
        uVar1 = 1;
    } else {
        ret_const_244(*(u32 *)((a0 + -1) * 8 + 0x8c280a3c), r5, r6, r7);
        fVar2 = extraout_fr1_01;
        if (cVar4 == '\0') {
            fVar2 = extraout_fr0_01;
        }
        if (cVar3 == '\0' && 0.0 < fVar2) {
            uVar1 = 0;
        }
    }
    return uVar1;
}

/*
 * inc_table_counter_248  0x8c06b154
 * inc_counter_248_max2 on entry a0 of the three tables at 8c2809b8, 8c2809fc and 8c280a38
 * called by: game_uses_Vec3_dtor_08f354
 */
u32 inc_table_counter_248(int a0, u32 a1, u32 a2, u32 a3) {
    u32 uVar1;

    if (a0 < 7) {
        uVar1 = inc_counter_248_max2(*(u32 *)(a0 * 8 + 0x8c2809b8 + 4), a1);
    } else if (a0 < 0xd) {
        uVar1 = (*(code *)(&inc_counter_248_max2))(*(u32 *)((a0 + -7) * 8 + 0x8c2809fc + 4), a1, a2, a3);
    } else {
        uVar1 = (*(code *)(&inc_counter_248_max2))(*(u32 *)((a0 + -1) * 8 + 0x8c280a38 + 4), a1, a2, a3);
    }
    return uVar1;
}

/*
 * game_copy_06b1d8  0x8c06b1d8
 * area name: game code; nothing names its area yet; behaviour name: mostly calls copy functions
 * called by: Class_12a76c_uses_flags6_set_all_08dd98, game_state_switch_092a28, game_uses_reset_fields_2c_6c_097ef0,
 * game_vec_08fd38, game_vec_090bc4
 */
u32 game_copy_06b1d8(int a0, u32 a1, u32 a2, u32 a3) {
    u32 uVar1;

    if (a0 < 7) {
        uVar1 = clear_flags_214_bit(*(u32 *)(a0 * 8 + 0x8c2809b8 + 4), a1);
    } else if (a0 < 0xd) {
        uVar1 = (*(code *)(&clear_flags_214_bit))(*(u32 *)((a0 + -7) * 8 + 0x8c2809fc + 4), a1, a2, a3);
    } else {
        uVar1 = (*(code *)(&clear_flags_214_bit))(*(u32 *)((a0 + -1) * 8 + 0x8c280a38 + 4), a1, a2, a3);
    }
    return uVar1;
}

/*
 * set_flags_214  0x8c06b25c
 * ORs a1 into the flag word at +0x214
 * called by: game_uses_set_flags_214_06b29c, game_uses_set_flags_214_06b35c
 */
int set_flags_214(int a0, u32 a1) {
    int iVar1;

    iVar1 = 0x214;
    *(u32 *)(0x214 + a0) = *(u32 *)(0x214 + a0) | a1;
    return iVar1;
}

/*
 * clear_flags_214_bit  0x8c06b278
 * clears bit a1 of the flag word at +0x214
 * called by: game_copy_06b1d8
 */
int clear_flags_214_bit(int a0, u32 a1) {
    u32 uVar1;
    int iVar2;

    if ((int)a1 < 0) {
        uVar1 = 1 >> (~a1 & 0x1f) + 1;
    } else {
        uVar1 = 1 << (a1 & 0x1f);
    }
    iVar2 = 0x214;
    *(u32 *)(0x214 + a0) = *(u32 *)(0x214 + a0) & ~uVar1;
    return iVar2;
}

/*
 * game_uses_set_flags_214_06b29c  0x8c06b29c
 * area name: game code; nothing names its area yet; behaviour name: its main named callee is set_flags_214
 */
int game_uses_set_flags_214_06b29c(int a0, int a1, int a2) {
    int iVar1;
    int iVar2;
    u32 uVar3;
    u32 ar5_00;
    u32 auStack_2c[5];

    ar5_00 = 1;
    auStack_2c[0] = *(u32 *)(&DATA_8c1371b0);
    auStack_2c[1] = *(u32 *)((&DATA_8c1371b0) + 4);
    auStack_2c[2] = *(u32 *)((&DATA_8c1371b0) + 8);
    auStack_2c[3] = *(u32 *)((&DATA_8c1371b0) + 0xc);
    iVar1 = -1;
    iVar2 = a2;
    do {
        iVar1 = iVar1 + 1;
        uVar3 = (*(u32 *)(0x214 + a0) | auStack_2c[a1]) & ar5_00;
        if ((uVar3 != 0) || (*(char *)(0x248 + a0 + iVar1) == '\x02')) {
            iVar2 = iVar2 + -1;
            ar5_00 = ar5_00 << 1;
        }
    } while (((uVar3 != 0) || (*(char *)(0x248 + a0 + iVar1) == '\x02')) && (0 < iVar2));
    if (iVar2 < 1) {
        iVar2 = -1;
    } else {
        set_flags_214(a0, ar5_00);
        iVar2 = 0;
        for (; ar5_00 != 0; ar5_00 = (int)ar5_00 >> 1) {
            iVar2 = iVar2 + 1;
        }
        iVar2 = iVar2 + -1;
    }
    return iVar2;
}

/*
 * game_uses_set_flags_214_06b35c  0x8c06b35c
 * area name: game code; nothing names its area yet; behaviour name: its main named callee is set_flags_214
 */
int game_uses_set_flags_214_06b35c(int a0, int a1) {
    int iVar1;
    u32 uVar2;
    u32 ar5_00;

    ar5_00 = 1;
    iVar1 = -1;
    do {
        iVar1 = iVar1 + 1;
        uVar2 = (*(u32 *)(0x214 + a0) | 0x1ab) & ar5_00;
        if ((uVar2 != 0) || (*(char *)(0x248 + a0 + iVar1) == '\x02')) {
            a1 = a1 + -1;
            ar5_00 = ar5_00 << 1;
        }
    } while (((uVar2 != 0) || (*(char *)(0x248 + a0 + iVar1) == '\x02')) && (0 < a1));
    if (a1 < 1) {
        iVar1 = -1;
    } else {
        set_flags_214(a0, ar5_00);
        iVar1 = 0;
        for (; ar5_00 != 0; ar5_00 = (int)ar5_00 >> 1) {
            iVar1 = iVar1 + 1;
        }
        iVar1 = iVar1 + -1;
    }
    return iVar1;
}

/*
 * get_field_210_06b3f4  0x8c06b3f4
 * called by: game_uses_rand_069c24
 */
u32 get_field_210_06b3f4(int a0) {
    return *(u32 *)(0x210 + a0);
}

/*
 * ret_const_240  0x8c06b400
 * called by: game_uses_rand_069c24
 */
u32 ret_const_240(void) {
    return 0x240;
}

/*
 * ret_const_244  0x8c06b410
 * called by: game_uses_rand_069c24, game_uses_ret_const_244_06b054
 */
u32 ret_const_244(void) {
    return 0x244;
}

/*
 * field_ptr_204  0x8c06b420
 * returns the address of the member at +0x204
 * called by: game_uses_rand_069c24
 */
int field_ptr_204(int a0) {
    return a0 + 0x204;
}

/*
 * inc_counter_248_max2  0x8c06b430
 * increments byte a1 of the counters at +0x248 up to 2
 * called by: inc_table_counter_248
 */
int inc_counter_248_max2(int a0, int a1) {
    int iVar1;
    int iVar2;

    iVar1 = 0x248;
    iVar2 = 2;
    if (*(char *)(0x248 + a0 + a1) < '\x02') {
        *(char *)(0x248 + a0 + a1) = *(char *)(0x248 + a0 + a1) + '\x01';
        iVar2 = iVar1;
    }
    return iVar2;
}

/*
 * game_uses_get_field_0_06b460  0x8c06b460
 * area name: game code; nothing names its area yet; behaviour name: its main named callee is get_field_0_015bb8
 */
u32 game_uses_get_field_0_06b460(int a0) {
    u32 r5;
    u32 r6;
    u32 r7;
    u16 uVar1;
    int iVar2;
    int iVar3;
    u32 ar4_00;
    u32 uVar4;
    u64 *puVar5;
    u32 *ar5_00;
    u32 unaff_r13;
    float fVar6;
    double dVar7;
    int iVar8;
    int ar6_00;
    int iVar9;
    char cVar10;
    char cVar11;
    u32 in_stack_fffffef4;

    cVar11 = '\0';
    cVar10 = '\0';
    gfx_set_color4_4aa52c(a0 + 0x254);
    matrix_push(0, r5, r6, r7, in_stack_fffffef4);
    touch_fields_30_3c(0, r5, r6, r7, in_stack_fffffef4);
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
        iVar8 = (int)(SUB84(dVar7, 0) / (float)((u64)dVar7 >> 0x20));
    } else {
        iVar8 = (int)(dVar7 / dVar7);
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
        ar6_00 = (int)(SUB84(dVar7, 0) / (float)((u64)dVar7 >> 0x20));
    } else {
        ar6_00 = (int)(dVar7 / dVar7);
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
        iVar9 = (int)(SUB84(dVar7, 0) / (float)((u64)dVar7 >> 0x20));
    } else {
        iVar9 = (int)(dVar7 / dVar7);
    }
    njRotateXYZ(0, iVar9, ar6_00, iVar8, in_stack_fffffef4);
    if (*(int *)(a0 + 0x220) < 1) {
        iVar9 = a0 + 100;
        matrix_scale(0, iVar9, ar6_00, iVar8, in_stack_fffffef4);
        obj_set_texlist(*(int *)(a0 + 0x224) + *(int *)(a0 + 0x220) * 0x124 + 0x78, iVar9, ar6_00);
        uVar4 = get_field_0_015bb8(*(int *)(a0 + 0x224) + *(int *)(a0 + 0x220) * 0x124 + 0x70);
        gfxlib_draw_219a9a(uVar4, iVar9, ar6_00, iVar8);
    } else {
        matrix_scale(0, iVar9, ar6_00, iVar8, in_stack_fffffef4);
        iVar2 = get_field_0_015bb8(a0 + 0x204);
        puVar5 = (u64 *)(*(int *)(iVar2 + 0x2c) + 0x20);
        if (cVar11 == '\0') {
            *(u32 *)puVar5 = *(u32 *)(a0 + 0x234);
        } else {
            *puVar5 = *(u64 *)(a0 + 0x234);
        }
        iVar2 = get_field_0_015bb8(a0 + 0x204);
        puVar5 = (u64 *)(*(int *)(iVar2 + 0x2c) + 0x24);
        if (cVar11 == '\0') {
            *(u32 *)puVar5 = *(u32 *)(a0 + 0x234);
        } else {
            *puVar5 = *(u64 *)(a0 + 0x234);
        }
        iVar2 = get_field_0_015bb8(a0 + 0x204);
        puVar5 = (u64 *)(*(int *)(iVar2 + 0x2c) + 0x28);
        if (cVar11 == '\0') {
            *(u32 *)puVar5 = *(u32 *)(a0 + 0x234);
        } else {
            *puVar5 = *(u64 *)(a0 + 0x234);
        }
        iVar2 = get_field_0_015bb8(a0 + 0x204);
        puVar5 = (u64 *)(*(int *)(*(int *)(iVar2 + 0x2c) + 0x30) + 0x20);
        if (cVar11 == '\0') {
            *(u32 *)puVar5 = *(u32 *)(a0 + 0x238);
        } else {
            *puVar5 = *(u64 *)(a0 + 0x238);
        }
        iVar2 = get_field_0_015bb8(a0 + 0x204);
        puVar5 = (u64 *)(*(int *)(*(int *)(iVar2 + 0x2c) + 0x30) + 0x24);
        if (cVar11 == '\0') {
            *(u32 *)puVar5 = *(u32 *)(a0 + 0x238);
        } else {
            *puVar5 = *(u64 *)(a0 + 0x238);
        }
        iVar2 = get_field_0_015bb8(a0 + 0x204);
        puVar5 = (u64 *)(*(int *)(*(int *)(iVar2 + 0x2c) + 0x30) + 0x28);
        if (cVar11 == '\0') {
            *(u32 *)puVar5 = *(u32 *)(a0 + 0x238);
        } else {
            *puVar5 = *(u64 *)(a0 + 0x238);
        }
        iVar2 = get_field_0_015bb8(a0 + 0x204);
        puVar5 = (u64 *)(*(int *)(*(int *)(*(int *)(iVar2 + 0x2c) + 0x30) + 0x30) + 0x20);
        if (cVar11 == '\0') {
            *(u32 *)puVar5 = *(u32 *)(a0 + 0x23c);
        } else {
            *puVar5 = *(u64 *)(a0 + 0x23c);
        }
        iVar2 = get_field_0_015bb8(a0 + 0x204);
        puVar5 = (u64 *)(*(int *)(*(int *)(*(int *)(iVar2 + 0x2c) + 0x30) + 0x30) + 0x24);
        if (cVar11 == '\0') {
            *(u32 *)puVar5 = *(u32 *)(a0 + 0x23c);
        } else {
            *puVar5 = *(u64 *)(a0 + 0x23c);
        }
        iVar2 = get_field_0_015bb8(a0 + 0x204);
        puVar5 = (u64 *)(*(int *)(*(int *)(*(int *)(iVar2 + 0x2c) + 0x30) + 0x30) + 0x28);
        if (cVar11 == '\0') {
            *(u32 *)puVar5 = *(u32 *)(a0 + 0x23c);
        } else {
            *puVar5 = *(u64 *)(a0 + 0x23c);
        }
        if (*(int *)(a0 + 0x210) < 4) {
            iVar2 = get_field_0_015bb8(a0 + 0x204);
            **(u32 **)(*(int *)(*(int *)(*(int *)(iVar2 + 0x2c) + 0x30) + 0x30) + 0x2c) = 0x25;
            iVar2 = get_field_0_015bb8(a0 + 0x204);
            **(u32 **)(*(int *)(*(int *)(*(int *)(*(int *)(iVar2 + 0x2c) + 0x30) + 0x30) + 0x2c) + 0x2c) = 0x24;
            iVar2 = get_field_0_015bb8(a0 + 0x204);
            **(u32 **)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(iVar2 + 0x2c) + 0x30) + 0x30) + 0x2c) + 0x2c) +
                       0x2c) = 0x24;
            iVar2 = get_field_0_015bb8(a0 + 0x204);
            **(u32 **)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(iVar2 + 0x2c) + 0x30) + 0x30) + 0x2c) +
                                         0x2c) +
                                0x2c) +
                       0x2c) = 0x24;
            iVar2 = get_field_0_015bb8(a0 + 0x204);
            **(u32 **)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(iVar2 + 0x2c) + 0x30) +
                                                                             0x30) +
                                                                    0x2c) +
                                                           0x2c) +
                                                  0x2c) +
                                         0x2c) +
                                0x2c) +
                       0x2c) = 0x37;
            iVar9 = get_field_0_015bb8(a0 + 0x204);
            iVar2 = *(int *)(*(int *)(*(int *)(*(int *)(*(int *)(iVar9 + 0x2c) + 0x30) + 0x30) + 0x2c) + 0x2c);
            **(u32 **)(*(int *)(*(int *)(*(int *)(*(int *)(iVar2 + 0x2c) + 0x2c) + 0x2c) + 0x2c) + 0x2c) = 0x37;
            iVar9 = get_field_0_015bb8(a0 + 0x204);
            **(u32 **)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(iVar9 + 0x2c) +
                                                                                               0x30) +
                                                                                      0x30) +
                                                                             0x2c) +
                                                                    0x2c) +
                                                           0x2c) +
                                                  0x2c) +
                                         0x2c) +
                                0x2c) +
                       0x30) = 0x35;
            iVar9 = get_field_0_015bb8(a0 + 0x204);
            **(u32 **)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(iVar9 +
                                                                                                                 0x2c) +
                                                                                                        0x30) +
                                                                                               0x30) +
                                                                                      0x2c) +
                                                                             0x2c) +
                                                                    0x2c) +
                                                           0x2c) +
                                                  0x2c) +
                                         0x2c) +
                                0x30) +
                       0x2c) = 0x37;
            iVar2 = get_field_0_015bb8(a0 + 0x204);
            **(u32 **)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(iVar2 +
                                                                                                                 0x2c) +
                                                                                                        0x30) +
                                                                                               0x30) +
                                                                                      0x2c) +
                                                                             0x2c) +
                                                                    0x2c) +
                                                           0x2c) +
                                                  0x2c) +
                                         0x2c) +
                                0x30) +
                       0x30) = 0x35;
            iVar8 = get_field_0_015bb8(a0 + 0x204);
            iVar2 =
                *(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(iVar8 + 0x2c) + 0x30) + 0x30) + 0x2c) +
                                           0x2c) +
                                  0x2c) +
                         0x2c);
            iVar9 = *(int *)(*(int *)(*(int *)(*(int *)(iVar2 + 0x2c) + 0x2c) + 0x30) + 0x30);
            **(u32 **)(iVar9 + 0x2c) = 0x37;
            iVar8 = get_field_0_015bb8(a0 + 0x204);
            **(u32 *
                   *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(iVar8 +
                                                                                                                         0x2c) +
                                                                                                                0x30) +
                                                                                                       0x30) +
                                                                                              0x2c) +
                                                                                     0x2c) +
                                                                            0x2c) +
                                                                   0x2c) +
                                                          0x2c) +
                                                 0x2c) +
                                        0x30) +
                               0x30) +
                      0x30) = 0x35;
            iVar8 = get_field_0_015bb8(a0 + 0x204);
            **(u32 *
                   *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(iVar8 +
                                                                                                                                  0x2c) +
                                                                                                                         0x30) +
                                                                                                                0x30) +
                                                                                                       0x2c) +
                                                                                              0x2c) +
                                                                                     0x2c) +
                                                                            0x2c) +
                                                                   0x2c) +
                                                          0x2c) +
                                                 0x30) +
                                        0x30) +
                               0x30) +
                      0x2c) = 0x37;
            iVar8 = get_field_0_015bb8(a0 + 0x204);
            **(u32 *
                   *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(iVar8 +
                                                                                                                                  0x2c) +
                                                                                                                         0x30) +
                                                                                                                0x30) +
                                                                                                       0x2c) +
                                                                                              0x2c) +
                                                                                     0x2c) +
                                                                            0x2c) +
                                                                   0x2c) +
                                                          0x2c) +
                                                 0x30) +
                                        0x30) +
                               0x30) +
                      0x30) = 0x35;
            iVar8 = get_field_0_015bb8(a0 + 0x204);
            **(u32 *
                   *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(iVar8 +
                                                                                                                                           0x2c) +
                                                                                                                                  0x30) +
                                                                                                                         0x30) +
                                                                                                                0x2c) +
                                                                                                       0x2c) +
                                                                                              0x2c) +
                                                                                     0x2c) +
                                                                            0x2c) +
                                                                   0x2c) +
                                                          0x30) +
                                                 0x30) +
                                        0x30) +
                               0x30) +
                      0x2c) = 0x37;
        } else {
            iVar2 = get_field_0_015bb8(a0 + 0x204);
            **(u32 **)(*(int *)(*(int *)(*(int *)(iVar2 + 0x2c) + 0x30) + 0x30) + 0x2c) = 0x2d;
            iVar2 = get_field_0_015bb8(a0 + 0x204);
            **(u32 **)(*(int *)(*(int *)(*(int *)(*(int *)(iVar2 + 0x2c) + 0x30) + 0x30) + 0x2c) + 0x2c) = 0x2c;
            iVar2 = get_field_0_015bb8(a0 + 0x204);
            **(u32 **)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(iVar2 + 0x2c) + 0x30) + 0x30) + 0x2c) + 0x2c) +
                       0x2c) = 0x2c;
            iVar2 = get_field_0_015bb8(a0 + 0x204);
            **(u32 **)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(iVar2 + 0x2c) + 0x30) + 0x30) + 0x2c) +
                                         0x2c) +
                                0x2c) +
                       0x2c) = 0x2c;
            iVar2 = get_field_0_015bb8(a0 + 0x204);
            **(u32 **)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(iVar2 + 0x2c) + 0x30) +
                                                                             0x30) +
                                                                    0x2c) +
                                                           0x2c) +
                                                  0x2c) +
                                         0x2c) +
                                0x2c) +
                       0x2c) = 0x3f;
            iVar2 = get_field_0_015bb8(a0 + 0x204);
            **(u32 **)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(iVar2 + 0x2c) +
                                                                                               0x30) +
                                                                                      0x30) +
                                                                             0x2c) +
                                                                    0x2c) +
                                                           0x2c) +
                                                  0x2c) +
                                         0x2c) +
                                0x2c) +
                       0x2c) = 0x3f;
            iVar9 = get_field_0_015bb8(a0 + 0x204);
            ar5_00 = *(
                u32 **)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(iVar9 + 0x2c) +
                                                                                                0x30) +
                                                                                       0x30) +
                                                                              0x2c) +
                                                                     0x2c) +
                                                            0x2c) +
                                                   0x2c) +
                                          0x2c) +
                                 0x2c) +
                        0x30);
            *ar5_00 = 0x3d;
            iVar9 = get_field_0_015bb8(a0 + 0x204);
            **(u32 **)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(iVar9 +
                                                                                                                 0x2c) +
                                                                                                        0x30) +
                                                                                               0x30) +
                                                                                      0x2c) +
                                                                             0x2c) +
                                                                    0x2c) +
                                                           0x2c) +
                                                  0x2c) +
                                         0x2c) +
                                0x30) +
                       0x2c) = 0x3f;
            iVar9 = get_field_0_015bb8(a0 + 0x204);
            iVar2 = *(int *)(*(int *)(*(int *)(*(int *)(iVar9 + 0x2c) + 0x30) + 0x30) + 0x2c);
            **(u32 **)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(iVar2 + 0x2c) + 0x2c) + 0x2c) + 0x2c) +
                                         0x2c) +
                                0x30) +
                       0x30) = 0x3d;
            iVar9 = get_field_0_015bb8(a0 + 0x204);
            **(u32 *
                   *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(iVar9 +
                                                                                                                         0x2c) +
                                                                                                                0x30) +
                                                                                                       0x30) +
                                                                                              0x2c) +
                                                                                     0x2c) +
                                                                            0x2c) +
                                                                   0x2c) +
                                                          0x2c) +
                                                 0x2c) +
                                        0x30) +
                               0x30) +
                      0x2c) = 0x3f;
            iVar8 = get_field_0_015bb8(a0 + 0x204);
            iVar2 = *(
                int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(iVar8 +
                                                                                                                 0x2c) +
                                                                                                        0x30) +
                                                                                               0x30) +
                                                                                      0x2c) +
                                                                             0x2c) +
                                                                    0x2c) +
                                                           0x2c) +
                                                  0x2c) +
                                         0x2c) +
                                0x30) +
                       0x30);
            **(u32 **)(iVar2 + 0x30) = 0x3d;
            iVar9 = a0 + 0x204;
            iVar8 = get_field_0_015bb8(iVar9);
            **(u32 *
                   *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(iVar8 +
                                                                                                                                  0x2c) +
                                                                                                                         0x30) +
                                                                                                                0x30) +
                                                                                                       0x2c) +
                                                                                              0x2c) +
                                                                                     0x2c) +
                                                                            0x2c) +
                                                                   0x2c) +
                                                          0x2c) +
                                                 0x30) +
                                        0x30) +
                               0x30) +
                      0x2c) = 0x3f;
            iVar8 = get_field_0_015bb8(a0 + 0x204);
            **(u32 *
                   *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(iVar8 +
                                                                                                                                  0x2c) +
                                                                                                                         0x30) +
                                                                                                                0x30) +
                                                                                                       0x2c) +
                                                                                              0x2c) +
                                                                                     0x2c) +
                                                                            0x2c) +
                                                                   0x2c) +
                                                          0x2c) +
                                                 0x30) +
                                        0x30) +
                               0x30) +
                      0x30) = 0x3d;
            iVar8 = get_field_0_015bb8(a0 + 0x204);
            **(u32 *
                   *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(iVar8 +
                                                                                                                                           0x2c) +
                                                                                                                                  0x30) +
                                                                                                                         0x30) +
                                                                                                                0x2c) +
                                                                                                       0x2c) +
                                                                                              0x2c) +
                                                                                     0x2c) +
                                                                            0x2c) +
                                                                   0x2c) +
                                                          0x30) +
                                                 0x30) +
                                        0x30) +
                               0x30) +
                      0x2c) = 0x3f;
        }
        iVar8 = 0;
        while (true) {
            uVar4 = 4;
            iVar9 = libgcc_divide_helper_01031c(*(u32 *)(a0 + 0x210), 4, ar6_00);
            if (iVar9 * 2 + 3 <= iVar8)
                break;
            if ((iVar8 < 9) && (-1 < iVar8)) {
                switch (iVar8) {
                case 0:
                    iVar9 = get_field_0_015bb8(a0 + 0x204);
                    unaff_r13 = *(u32 *)(*(int *)(*(int *)(*(int *)(iVar9 + 0x2c) + 0x2c) + 4) + 4);
                    break;
                case 1:
                    iVar9 = get_field_0_015bb8(a0 + 0x204);
                    unaff_r13 = *(u32 *)(*(int *)(*(int *)(*(int *)(*(int *)(iVar9 + 0x2c) + 0x2c) + 0x30) + 4) + 4);
                    break;
                case 2:
                    iVar9 = get_field_0_015bb8(a0 + 0x204);
                    unaff_r13 = *(u32 *)(*(int *)(*(int *)(*(int *)(*(int *)(iVar9 + 0x2c) + 0x30) + 0x2c) + 4) + 4);
                    break;
                case 3:
                    iVar9 = get_field_0_015bb8(a0 + 0x204);
                    unaff_r13 = *(
                        u32 *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(iVar9 + 0x2c) + 0x2c) + 0x30) + 0x30) + 4) +
                               4);
                    break;
                case 4:
                    iVar9 = get_field_0_015bb8(a0 + 0x204);
                    unaff_r13 = *(
                        u32 *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(iVar9 + 0x2c) + 0x30) + 0x2c) + 0x30) + 4) +
                               4);
                    break;
                case 5:
                    iVar9 = get_field_0_015bb8(a0 + 0x204);
                    unaff_r13 =
                        *(u32 *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(iVar9 + 0x2c) + 0x2c) + 0x30) +
                                                            0x30) +
                                                   0x30) +
                                          4) +
                                 4);
                    break;
                case 6:
                    iVar9 = get_field_0_015bb8(a0 + 0x204);
                    unaff_r13 =
                        *(u32 *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(iVar9 + 0x2c) + 0x30) + 0x2c) +
                                                            0x30) +
                                                   0x30) +
                                          4) +
                                 4);
                    break;
                case 7:
                    iVar9 = get_field_0_015bb8(a0 + 0x204);
                    unaff_r13 =
                        *(u32 *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(iVar9 + 0x2c) + 0x2c) +
                                                                              0x30) +
                                                                     0x30) +
                                                            0x30) +
                                                   0x30) +
                                          4) +
                                 4);
                    break;
                case 8:
                    iVar9 = get_field_0_015bb8(a0 + 0x204);
                    unaff_r13 =
                        *(u32 *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(iVar9 + 0x2c) +
                                                                                                0x2c) +
                                                                                       0x30) +
                                                                              0x30) +
                                                                     0x30) +
                                                            0x30) +
                                                   0x30) +
                                          4) +
                                 4);
                }
            }
            iVar9 = thunk_FUN_8c0151e8(unaff_r13, 8);
            if (iVar9 != 0) {
                uVar1 = *(u16 *)(iVar9 + 2);
                iVar3 = libgcc_divide_helper_01031c(*(u32 *)(a0 + 0x210), 4, ar6_00);
                *(u16 *)(iVar9 + 2) =
                    *(short *)(&g_8c137008 + ((int)*(char *)(a0 + iVar8 + 0x248) + iVar8 * 3) * 2 + iVar3 * 0x36) +
                    (uVar1 & 0xe000);
            }
            iVar8 = iVar8 + 1;
        }
        obj_set_texlist(a0 + 0x208, uVar4, ar6_00);
        ar4_00 = get_field_0_015bb8(a0 + 0x204);
        iVar9 = deref_u32(*(int *)(*(int *)(a0 + 0x224) + 0x1c4) + *(int *)(a0 + 0x228) * 4);
        ar6_00 = get_field_0_026d74(*(int *)(*(int *)(a0 + 0x224) + 0x1cc) + *(int *)(a0 + 0x228) * 4);
        iVar8 = ar6_00;
        gfxlib_draw_21bbb0(ar4_00, iVar9, ar6_00, ar6_00, in_stack_fffffef4);
    }
    matrix_pop_n(1);
    uVar4 = gfx_set_color4_4aa52c(&g_8c136f2c);
    return uVar4;
}

/*
 * game_draw_06c04c  0x8c06c04c
 * area name: game code; nothing names its area yet; behaviour name: mostly calls draw functions
 */
u32 game_draw_06c04c(int a0, u32 a1, u32 a2, u32 a3) {
    u32 uVar1;

    (*(code *)(&obj_set_texlist))(*(int *)(0x224 + a0) + *(int *)(0x220 + a0) * 0x124 + 0x78, a1, a2, a3);
    uVar1 = (*(code *)(&get_field_0_015bb8))(*(int *)(0x224 + a0) + *(int *)(0x220 + a0) * 0x124 + 0x70, a1, a2, a3);
    uVar1 = gfxlib_draw_219a9a(uVar1, a1, a2, a3);
    return uVar1;
}

/*
 * game_draw_06c0b8  0x8c06c0b8
 * area name: game code; nothing names its area yet; behaviour name: mostly calls draw functions
 */
u32 game_draw_06c0b8(int a0, u32 a1, u32 a2, u32 a3) {
    u32 uVar1;

    (*(code *)(&obj_set_texlist))(*(int *)(0x224 + a0) + *(int *)(0x220 + a0) * 0x124 + 0x78, a1, a2, a3);
    uVar1 = (*(code *)(&get_field_0_015bb8))(*(int *)(0x224 + a0) + *(int *)(0x220 + a0) * 0x124 + 0x70, a1, a2, a3);
    uVar1 = gfxlib_draw_219a9a(uVar1, a1, a2, a3);
    return uVar1;
}

/*
 * ret_const_d4  0x8c06c124
 */
u32 ret_const_d4(void) {
    return 0xd4;
}

/*
 * get_ptr_8c06c144  0x8c06c13c
 * returns the address 0x8c06c144
 */
u32 *get_ptr_8c06c144(void) {
    return &g_8c06c144;
}

/*
 * game_uses_libgcc_divide_helper_06c148  0x8c06c148
 * name hint from a string it uses: herb3 pvm; area name: game code; nothing names its area yet; behaviour name: its
 * main named callee is libgcc_divide_helper_01031c
 */
u32 game_uses_libgcc_divide_helper_06c148(code *a0, int a1, u32 a2, u32 a3) {
    int iVar1;
    u32 uVar2;
    code *ar6_00;
    u32 uVar3;
    code *ar7_00;
    char cVar4;
    u32 auStack_2c[4];
    u32 auStack_1c[5];

    cVar4 = '\0';
    auStack_2c[0] = g_8c1371c0;
    auStack_2c[1] = g_8c1371c4;
    auStack_2c[2] = g_8c1371c8;
    auStack_2c[3] = g_8c1371cc;
    auStack_1c[0] = g_8c1371d0;
    auStack_1c[1] = g_8c1371d4;
    auStack_1c[2] = g_8c1371d8;
    auStack_1c[3] = g_8c1371dc;
    obj_state_load(a0, a1, a2, a3);
    Vec3_assign(a0 + 0x30, a1 + 0x1c, a2, a3);
    if (cVar4 == '\0') {
        *(u32 *)(a0 + 0x50) = *(u32 *)(a1 + 0x2c);
        *(u32 *)(a0 + 0x54) = *(u32 *)(a1 + 0x30);
        *(u32 *)(a0 + 0x58) = *(u32 *)(a1 + 0x34);
        *(u32 *)(a0 + 0x5c) = *(u32 *)(a1 + 0x38);
        *(u32 *)(a0 + 0x60) = *(u32 *)(a1 + 0x38);
        *(u32 *)(a0 + 100) = *(u32 *)(a1 + 0x38);
    } else {
        *(u64 *)(a0 + 0x50) = *(u64 *)(a1 + 0x2c);
        *(u64 *)(a0 + 0x54) = *(u64 *)(a1 + 0x30);
        *(u64 *)(a0 + 0x58) = *(u64 *)(a1 + 0x34);
        *(u64 *)(a0 + 0x5c) = *(u64 *)(a1 + 0x38);
        *(u64 *)(a0 + 0x60) = *(u64 *)(a1 + 0x38);
        *(u64 *)(a0 + 100) = *(u64 *)(a1 + 0x38);
    }
    ar7_00 = Vec3_assign;
    Vec3_assign(a0 + 0x268, a1 + 0x4c, a2, Vec3_assign);
    vec3_copy_8c023d8c(a0 + 0x278, a1 + 0x5c, vec3_copy_8c023d8c, ar7_00);
    *(int *)(a0 + 0x210) = (int)*(char *)(a1 + 0x68);
    *(int *)(a0 + 0x218) = (int)*(char *)(a1 + 0x69);
    *(int *)(a0 + 0x21c) = (int)*(char *)(a1 + 0x6a);
    *(int *)(a0 + 0x220) = (int)*(char *)(a1 + 0x6b);
    *(int *)(a0 + 0x230) = (int)*(char *)(a1 + 0x6c);
    if (cVar4 == '\0') {
        *(u32 *)(a0 + 0x244) = *(u32 *)(a1 + 0x70);
    } else {
        *(u64 *)(a0 + 0x244) = *(u64 *)(a1 + 0x70);
    }
    *(u16 *)(a0 + 0x264) = *(u16 *)(a1 + 0x74);
    *(u16 *)(a0 + 0x266) = *(u16 *)(a1 + 0x76);
    ar6_00 = (code *)0x240;
    if (cVar4 == '\0') {
        *(u32 *)(a0 + 0x240) = *(u32 *)(a1 + 0x78);
        *(u32 *)(a0 + 0x234) = *(u32 *)(a1 + 0x7c);
        *(u32 *)(a0 + 0x238) = *(u32 *)(a1 + 0x80);
        *(u32 *)(a0 + 0x23c) = *(u32 *)(a1 + 0x84);
    } else {
        *(u64 *)(a0 + 0x240) = *(u64 *)(a1 + 0x78);
        *(u64 *)(a0 + 0x234) = *(u64 *)(a1 + 0x7c);
        *(u64 *)(a0 + 0x238) = *(u64 *)(a1 + 0x80);
        *(u64 *)(a0 + 0x23c) = *(u64 *)(a1 + 0x84);
    }
    iVar1 = libgcc_divide_helper_01031c(*(u32 *)(a0 + 0x210), 4, 0x240);
    *(int *)(a0 + 0x228) = iVar1 * 3 + 2;
    if (*(int *)(a0 + 0x220) == 0) {
        if (*(int *)(a0 + 0x230) == 3) {
            iVar1 = *(int *)(a0 + 0x218);
            if (iVar1 == 0) {
                g_8c280998 = g_8c280998 + 1;
                *(u32 *)(*(int *)(a0 + 0x21c) * 8 + 0x8c2809b8) = 1;
                *(code **)(*(int *)(a0 + 0x21c) * 8 + 0x8c2809bc) = a0;
            } else if (iVar1 == 1) {
                if (*(int *)(a0 + 0x210) < 4) {
                    g_8c2809a0 = g_8c2809a0 + 1;
                } else {
                    g_8c28099c = g_8c28099c + 1;
                }
                *(u32 *)(*(int *)(a0 + 0x21c) * 8 + 0x8c2809fc) = 1;
                *(code **)(*(int *)(a0 + 0x21c) * 8 + 0x8c280a00) = a0;
            } else if (iVar1 == 2) {
                g_8c2809a4 = g_8c2809a4 + 1;
                *(u32 *)(*(int *)(a0 + 0x21c) * 8 + 0x8c280a38) = 1;
                *(code **)(*(int *)(a0 + 0x21c) * 8 + 0x8c280a3c) = a0;
            }
        } else {
            g_8c2809a8 = g_8c2809a8 + 1;
            if ((*(int *)(a0 + 0x230) == 1) || (*(int *)(a0 + 0x230) == 2)) {
                iVar1 = *(int *)(a0 + 0x218);
                if (iVar1 == 0) {
                    *(u32 *)(*(int *)(a0 + 0x21c) * 8 + 0x8c2809b8) = 1;
                } else if (iVar1 == 1) {
                    *(u32 *)(*(int *)(a0 + 0x21c) * 8 + 0x8c2809fc) = 1;
                } else if (iVar1 == 2) {
                    *(u32 *)(*(int *)(a0 + 0x21c) * 8 + 0x8c280a38) = 1;
                }
            }
        }
    } else {
        if (*(int *)(a0 + 0x210) < 4) {
            iVar1 = *(int *)(a0 + 0x230);
            if ((iVar1 < 6) && (-1 < iVar1)) {
                switch (iVar1) {
                default:
                    g_8c2809a0 = g_8c2809a0 + 1;
                    break;
                case 4:
                    g_8c2809a0 = g_8c2809a0 + 1;
                    g_8c2809a8 = g_8c2809a8 + 1;
                    break;
                case 5:
                    g_8c2809a0 = g_8c2809a0 + 1;
                }
            }
            *(u32 *)(*(int *)(a0 + 0x21c) * 8 + 0x8c2809fc) = 1;
            *(code **)(*(int *)(a0 + 0x21c) * 8 + 0x8c280a00) = a0;
        } else {
            iVar1 = *(int *)(a0 + 0x218);
            if (iVar1 == 0) {
                g_8c280998 = g_8c280998 + 1;
                *(u32 *)(*(int *)(a0 + 0x21c) * 8 + 0x8c2809b8) = 1;
                *(code **)(*(int *)(a0 + 0x21c) * 8 + 0x8c2809bc) = a0;
            } else if (iVar1 == 1) {
                g_8c28099c = g_8c28099c + 1;
                *(u32 *)(*(int *)(a0 + 0x21c) * 8 + 0x8c2809fc) = 1;
                *(code **)(*(int *)(a0 + 0x21c) * 8 + 0x8c280a00) = a0;
            } else if (iVar1 == 2) {
                g_8c2809a4 = g_8c2809a4 + 1;
                *(u32 *)(*(int *)(a0 + 0x21c) * 8 + 0x8c280a38) = 1;
                *(code **)(*(int *)(a0 + 0x21c) * 8 + 0x8c280a3c) = a0;
            }
        }
        if (*(int *)(a0 + 0x230) != 0) {
            if (*(int *)(a0 + 0x230) == 1) {
                iVar1 = libgcc_divide_helper_01031c(*(u32 *)(a0 + 0x210), 4, ar6_00);
                ar6_00 = (code *)(*(u32 *)(a0 + 0x214) & ~auStack_2c[iVar1]);
                *(code **)(a0 + 0x214) = ar6_00;
                ar7_00 = a0;
            } else {
                iVar1 = libgcc_divide_helper_01031c(*(u32 *)(a0 + 0x210), 4, ar6_00);
                uVar3 = *(u32 *)(a0 + 0x214);
                uVar2 = auStack_2c[iVar1];
                *(u32 *)(a0 + 0x214) = uVar3 & ~uVar2;
                iVar1 = libgcc_divide_helper_01031c(*(u32 *)(a0 + 0x210), 4, uVar3 & ~uVar2);
                *(u32 *)(a0 + 0x214) = *(u32 *)(a0 + 0x214) & ~auStack_1c[iVar1];
                ar6_00 = a0;
            }
        }
    }
    *(u32 *)(a0 + 0x224) = 0x8c2804f0;
    iVar1 = libgcc_divide_helper_01031c(*(u32 *)(a0 + 0x210), 4, ar6_00);
    g_8c280620 = (&PTR_s_herb_3Leaves_home_njd_8c136f54)[iVar1];
    iVar1 = libgcc_divide_helper_01031c(*(u32 *)(a0 + 0x210), 4, ar6_00);
    g_8c280628 = (&PTR_s_HERB_1_8c136f68)[iVar1];
    g_8c280618 = &PTR_s_herb_3Leaves_die_njm_8c136f84;
    g_8c28061c = &PTR_s_herb_3Leaves_die_njs_8c136fb8;
    g_8c280634 = PTR_s_herb3_pvm_8c136f78;
    g_8c280648 = PTR_s_herb5_pvm_8c136f7c;
    g_8c280638 = 0x12;
    g_8c28064c = 0x16;
    g_8c280644 = 0x8c280738;
    g_8c280658 = 0x8c280810;
    return 0x168;
}

/*
 * game_vec_06c89c  0x8c06c89c
 * area name: game code; nothing names its area yet; behaviour name: mostly calls vec functions
 */
int game_vec_06c89c(int a0, int a1, u32 a2, u32 a3) {
    int iVar1;
    char cVar2;

    cVar2 = '\0';
    if ((*(int *)(a0 + 0x220) != 0) || (iVar1 = *(int *)(a0 + 0x230), iVar1 != 7)) {
        obj_state_save(a0, a1, a2, a3);
        Vec3_assign(a1 + 0x4c, a0 + 0x268, a2, a3);
        vec3_copy_8c023d8c(a1 + 0x5c, a0 + 0x278, a2, a3);
        *(char *)(a1 + 0x68) = (char)*(u32 *)(a0 + 0x210);
        *(char *)(a1 + 0x69) = (char)*(u32 *)(a0 + 0x218);
        *(char *)(a1 + 0x6a) = (char)*(u32 *)(a0 + 0x21c);
        *(char *)(a1 + 0x6b) = (char)*(u32 *)(a0 + 0x220);
        *(char *)(a1 + 0x6c) = (char)*(u32 *)(a0 + 0x230);
        if (cVar2 == '\0') {
            *(u32 *)(a1 + 0x70) = *(u32 *)(a0 + 0x244);
        } else {
            *(u64 *)(a1 + 0x70) = *(u64 *)(a0 + 0x244);
        }
        *(u16 *)(a1 + 0x74) = *(u16 *)(a0 + 0x264);
        *(u16 *)(a1 + 0x76) = *(u16 *)(a0 + 0x266);
        if (cVar2 == '\0') {
            *(u32 *)(a1 + 0x78) = *(u32 *)(a0 + 0x240);
            *(u32 *)(a1 + 0x7c) = *(u32 *)(a0 + 0x234);
            *(u32 *)(a1 + 0x80) = *(u32 *)(a0 + 0x238);
        } else {
            *(u64 *)(a1 + 0x78) = *(u64 *)(a0 + 0x240);
            *(u64 *)(a1 + 0x7c) = *(u64 *)(a0 + 0x234);
            *(u64 *)(a1 + 0x80) = *(u64 *)(a0 + 0x238);
        }
        iVar1 = 0x23c;
        if (cVar2 == '\0') {
            *(u32 *)(a1 + 0x84) = *(u32 *)(a0 + 0x23c);
        } else {
            *(u64 *)(a1 + 0x84) = *(u64 *)(a0 + 0x23c);
        }
    }
    return iVar1;
}

/*
 * game_vec_06c9c8  0x8c06c9c8
 * area name: game code; nothing names its area yet; behaviour name: mostly calls vec functions
 */
int game_vec_06c9c8(int a0, u32 *a1, u32 a2, u32 a3) {
    int iVar1;

    *(u32 *)(a0 + 0x24) = *a1;
    vec3_copy_8c023d8c(a0 + 0x50, a1 + 1, a2, a3);
    Vec3_assign_copy(a0 + 0x5c, a1 + 4);
    *(u32 *)(a0 + 0x74) = a1[8];
    *(u32 *)(0x218 + a0) = 3;
    *(u32 *)(0x21c + a0) = 0xffffffff;
    iVar1 = g_8c2809a8;
    g_8c2809a8 = iVar1 + 1;
    return iVar1 + 1;
}

/*
 * game_vec_06ca34  0x8c06ca34
 * area name: game code; nothing names its area yet; behaviour name: mostly calls vec functions
 */
u32 game_vec_06ca34(int a0, u32 *a1, u32 a2, u32 a3) {
    u32 uVar1;

    *a1 = *(u32 *)(a0 + 0x24);
    vec3_copy_8c023d8c(a1 + 1, a0 + 0x50, a2, a3);
    Vec3_assign_copy(a1 + 4, a0 + 0x5c);
    uVar1 = *(u32 *)(a0 + 0x74);
    a1[8] = uVar1;
    return uVar1;
}

/*
 * game_update_fields_06ca7c  0x8c06ca7c
 * area name: game code; nothing names its area yet; behaviour name: conditionally writes members
 */
int game_update_fields_06ca7c(int a0) {
    int iVar1;

    *(u16 *)(a0 + 0x266) = 0;
    iVar1 = *(int *)(a0 + 0x220);
    if ((iVar1 == 0) && ((*(int *)(a0 + 0x230) == 1 || (iVar1 = *(int *)(a0 + 0x230), iVar1 == 5)))) {
        iVar1 = *(int *)(a0 + 0x218);
        if (iVar1 == 0) {
            *(u32 *)(a0 + 0x34) = 0x43340000;
        } else if (iVar1 == 1) {
            *(u32 *)(a0 + 0x34) = 0x42c80000;
        } else if (iVar1 == 2) {
            *(u32 *)(a0 + 0x34) = 0x43340000;
        }
        iVar1 = 0x230;
        *(int *)(a0 + 0x230) = *(int *)(a0 + 0x230) + 1;
    }
    return iVar1;
}

/*
 * Herb_asset_table_init  0x8c06cb08
 * fills the herb asset table (HERB_1, SEED_1, herb_3Leaves_*)
 * called by: game_init_sound_and_messages
 */
u32 Herb_asset_table_init(void) {
    int iVar1;

    for (iVar1 = 0; iVar1 < 2; iVar1 = iVar1 + 1) {
        *(u32 *)(iVar1 * 0x124 + 0x8c2804f0) = 0;
        *(u32 *)(iVar1 * 0x124 + 0x8c280590) = 0;
        *(u32 *)(&g_8c2805a4 + iVar1 * 0x124) = 0x8c280d68;
        *(u32 *)(iVar1 * 0x124 + 0x8c280500) = 0;
        *(u16 *)(iVar1 * 0x124 + 0x8c280594) = 0;
        *(u16 *)(iVar1 * 0x124 + 0x8c28059c) = 0;
        *(u32 *)(iVar1 * 0x124 + 0x8c2804f4) = 0;
        *(u32 *)(iVar1 * 0x124 + 0x8c2804f8) = 0;
        *(u32 *)(iVar1 * 0x124 + 0x8c280508) = 0;
        *(u32 *)(iVar1 * 0x124 + 0x8c280590) = 0;
        *(u16 *)(iVar1 * 0x124 + 0x8c280594) = 0;
        *(u32 *)(iVar1 * 0x124 + 0x8c280598) = 0;
        *(u16 *)(iVar1 * 0x124 + 0x8c28059c) = 0;
    }
    g_8c2804fc = PTR_s_herb_seed_nj_8c136f50;
    g_8c280504 = PTR_s_SEED_1_8c136f64;
    g_8c2805ac = 0x3f800000;
    g_8c2805bc = 0x3ca3d70a;
    g_8c2805c0 = 0x3f4ccccd;
    g_8c2805c4 = 0x43c80000;
    for (iVar1 = 1; iVar1 < 2; iVar1 = iVar1 + 1) {
        *(u8 ***)(iVar1 * 0x124 + 0x8c2804f4) = &PTR_s_herb_3Leaves_die_njm_8c136f84;
        *(u8 ***)(iVar1 * 0x124 + 0x8c2804f8) = &PTR_s_herb_3Leaves_die_njs_8c136fb8;
        *(u8 **)(&g_8c2804fc + iVar1 * 0x124) = PTR_s_herb_3Leaves_home_njd_8c136f54;
        *(u8 **)(&g_8c280504 + iVar1 * 0x124) = PTR_s_HERB_1_8c136f68;
        *(u8 **)(iVar1 * 0x124 + 0x8c280508) = PTR_s_herb_motionpack_npd_8c136f80;
        *(u32 *)(&g_8c2805ac + iVar1 * 0x124) = 0x3f800000;
        *(u32 *)(&g_8c2805bc + iVar1 * 0x124) = 0x3ca3d70a;
        *(u32 *)(&g_8c2805c0 + iVar1 * 0x124) = 0x3f4ccccd;
        *(u32 *)(&g_8c2805c4 + iVar1 * 0x124) = 0x43c80000;
        *(u32 *)(iVar1 * 0x124 + 0x8c280590) = 0x8c280924;
        *(u16 *)(iVar1 * 0x124 + 0x8c280594) = 0xd;
        *(u32 *)(iVar1 * 0x124 + 0x8c280598) = 0x8c280964;
        *(u16 *)(iVar1 * 0x124 + 0x8c28059c) = 0xd;
    }
    return 2;
}

/*
 * CHerb_LoadGRWait  0x8c06ce04
 * loads the two herb-line graphics packs from GRAPHICS\HERBLINE
 * strings: "Failed to Load :CHerb::LoadGRWait"; "Attach NULL!!"; "CHerb::LoadGRWait()"; "Read NMDM Failed.." ...
 */
u32 CHerb_LoadGRWait(int a0, u32 a1) {
    u32 uVar1;
    int iVar2;
    int iVar3;
    u32 a5;
    int iVar4;
    char *pcVar5;
    u8 *puVar6;
    u32 *puVar7;
    u32 **ar7_00;
    int *a4;
    int a6;
    int in_stack_ffffff74;
    u32 uStack_2c;
    u32 *puStack_28;
    u32 auStack_24[2];

    auStack_24[0] = 0;
    puVar7 = NULL;
    puStack_28 = NULL;
    puVar6 = NULL;
    uStack_2c = 0;
    uVar1 = 0;
    for (a6 = 0; a6 < 2; a6 = a6 + 1) {
        iVar4 = *(int *)(a0 + 0x224) + a6 * 0x124;
        if (*(int *)(iVar4 + 0x18) != 0) {
            puVar7 = (u32 *)(a0 + a6);
            puVar6 = PTR_s_GRAPHICS_HERBLINE_8c136f4c;
            iVar2 = retry_until_done_020d90(a1, *(u32 *)(iVar4 + 0x18), PTR_s_GRAPHICS_HERBLINE_8c136f4c, puVar7);
            if (iVar2 == 0) {
                puVar7 = (u32 *)0x2;
                puVar6 = NULL;
                report_error_message(*(u32 *)(iVar4 + 0x18), "Failed to Load :CHerb::LoadGRWait", 0, 2);
            }
        }
        for (iVar2 = 0; iVar2 < *(short *)(iVar4 + 0xa4); iVar2 = iVar2 + 1) {
            if (**(char **)(iVar2 * 4 + *(int *)(iVar4 + 4)) == '\0') {
                puVar7 = (u32 *)0x2;
                puVar6 = NULL;
                report_error_message("Attach NULL!!", "CHerb::LoadGRWait()", 0, 2);
                auStack_24[0] = 0;
            } else {
                puVar7 = auStack_24;
                puVar6 = PTR_s_GRAPHICS_HERBLINE_8c136f4c;
                iVar3 = retry_until_done_020ba0(a1, *(u32 *)(iVar2 * 4 + *(int *)(iVar4 + 4)),
                                                PTR_s_GRAPHICS_HERBLINE_8c136f4c, puVar7);
                if (iVar3 == 0) {
                    puVar7 = (u32 *)0x2;
                    puVar6 = NULL;
                    report_error_message(*(u32 *)(iVar2 * 4 + *(int *)(iVar4 + 4)), "Read NMDM Failed..", 0, 2);
                }
            }
            set_field_0_015bb0(*(int *)(iVar4 + 0xa0) + iVar2 * 4, auStack_24[0]);
        }
        for (iVar2 = 0; iVar2 < *(short *)(iVar4 + 0xac); iVar2 = iVar2 + 1) {
            if (**(char **)(iVar2 * 4 + *(int *)(iVar4 + 8)) == '\0') {
                auStack_24[0] = 0;
            } else {
                puVar7 = auStack_24;
                puVar6 = PTR_s_GRAPHICS_HERBLINE_8c136f4c;
                iVar3 = retry_until_done_020c98(a1, *(u32 *)(iVar2 * 4 + *(int *)(iVar4 + 8)),
                                                PTR_s_GRAPHICS_HERBLINE_8c136f4c, puVar7);
                if (iVar3 == 0) {
                    puVar7 = (u32 *)0x2;
                    puVar6 = NULL;
                    report_error_message(*(u32 *)(iVar2 * 4 + *(int *)(iVar4 + 8)), "Read NSSM Failed..", 0, 2);
                }
                set_field_0_015be4(*(int *)(*(int *)(a0 + 0x224) + a6 * 0x124 + 0xa8) + iVar2 * 4, auStack_24[0]);
            }
            set_field_0_015be4(*(int *)(iVar4 + 0xa8) + iVar2 * 4, auStack_24[0]);
        }
        ar7_00 = &puStack_28;
        puVar6 = PTR_s_GRAPHICS_HERBLINE_8c136f4c;
        iVar2 = retry_until_done_0209b0(a1, *(u32 *)(iVar4 + 0xc), PTR_s_GRAPHICS_HERBLINE_8c136f4c, ar7_00);
        if (iVar2 == 0) {
            ar7_00 = (u32 **)0x2;
            puVar6 = NULL;
            report_error_message(*(u32 *)(iVar4 + 0xc), "Read NJCM Failed..:CHerb::LoadGRWait()", 0, 2);
        }
        set_field_0_015ad4(iVar4 + 0x70, puStack_28, puVar6);
        in_stack_ffffff74 = libgcc_divide_helper_01031c(*(u32 *)(a0 + 0x210), 4, puVar6);
        if (in_stack_ffffff74 == 0) {
            if (*(int *)(iVar4 + 0x20) == 0) {
                puVar7 = &uStack_2c;
                puVar6 = PTR_s_GRAPHICS_HERBLINE_8c136f4c;
                iVar2 = retry_until_done_020aa8(a1, *(u32 *)(iVar4 + 0xc), PTR_s_GRAPHICS_HERBLINE_8c136f4c, puVar7);
                if (iVar2 == 0) {
                    puVar7 = (u32 *)0x2;
                    puVar6 = NULL;
                    report_error_message(*(u32 *)(iVar4 + 0xc), "Read NJTL Failed..:CHerb::LoadGRWait()", 0, 2);
                }
                (**(code **)(*(int *)(iVar4 + 0x78) + 8))((int *)(iVar4 + 0x78), uStack_2c, puVar6, puVar7);
                iVar4 = a6;
                (**(code **)(*(int *)(a0 + 8) + 0xe4))(a0, a1, a6, puVar7);
                (**(code **)(*(int *)(a0 + 0x208) + 8))((int *)(a0 + 0x208), uStack_2c, iVar4, puVar7);
            } else {
                uVar1 = *(u32 *)(iVar4 + 0xc);
                CHerb_SetPVMTexture(a0, iVar4 + 0x20, uVar1, ar7_00);
                iVar2 = iVar4 + 0x28;
                (**(code **)(*(int *)(iVar4 + 0x78) + 8))((int *)(iVar4 + 0x78), iVar2, uVar1, ar7_00);
                uVar1 = get_field_4_0253e4(iVar4 + 0x78, iVar2, uVar1, ar7_00);
                pcVar5 = *(char **)(iVar4 + 0x20);
                puVar6 = PTR_s_GRAPHICS_HERBLINE_8c136f4c;
                iVar2 = retry_until_done_020f90(a1, pcVar5, PTR_s_GRAPHICS_HERBLINE_8c136f4c, uVar1);
                if (iVar2 == 0) {
                    uVar1 = 2;
                    puVar6 = NULL;
                    pcVar5 = "CAnimal::LoadGResourceWait()";
                    report_error_message("Failed to load body pvm textuer..", "CAnimal::LoadGResourceWait()", 0, 2);
                }
                a5 = get_field_4_0253e4(iVar4 + 0x78, pcVar5, puVar6, uVar1);
                (**(code **)(*(int *)(a0 + 0x208) + 8))((int *)(a0 + 0x208), a5, puVar6, uVar1);
            }
        } else if (*(int *)(iVar4 + 0x34) == 0) {
            iVar2 = retry_until_done_020aa8(a1, *(u32 *)(iVar4 + 0xc), PTR_s_GRAPHICS_HERBLINE_8c136f4c, &uStack_2c);
            if (iVar2 == 0) {
                report_error_message(*(u32 *)(iVar4 + 0xc), "Read NJTL Failed..:CHerb::LoadGRWait()", 0, 2);
            }
            a4 = (int *)(iVar4 + 0x78);
            (**(code **)(*a4 + 8))(a4, uStack_2c, *(code **)(*a4 + 8), a4);
            iVar4 = a6;
            (**(code **)(*(int *)(a0 + 8) + 0xe4))(a0, a1, a6, a4);
            (**(code **)(*(int *)(a0 + 0x208) + 8))((int *)(a0 + 0x208), uStack_2c, iVar4, a4);
        } else {
            uVar1 = *(u32 *)(iVar4 + 0xc);
            CHerb_SetPVMTexture(a0, iVar4 + 0x34, uVar1, ar7_00);
            iVar2 = iVar4 + 0x3c;
            (**(code **)(*(int *)(iVar4 + 0x80) + 8))((int *)(iVar4 + 0x80), iVar2, uVar1, ar7_00);
            uVar1 = get_field_4_0253e4(iVar4 + 0x80, iVar2, uVar1, ar7_00);
            pcVar5 = *(char **)(iVar4 + 0x34);
            puVar6 = PTR_s_GRAPHICS_HERBLINE_8c136f4c;
            iVar2 = retry_until_done_020f90(a1, pcVar5, PTR_s_GRAPHICS_HERBLINE_8c136f4c, uVar1);
            if (iVar2 == 0) {
                uVar1 = 2;
                puVar6 = NULL;
                pcVar5 = "CAnimal::LoadGResourceWait()";
                report_error_message("Failed to load body pvm textuer..", "CAnimal::LoadGResourceWait()", 0, 2);
            }
            uVar1 = get_field_4_0253e4(iVar4 + 0x80, pcVar5, puVar6, uVar1);
            (**(code **)(*(int *)(a0 + 0x208) + 8))((int *)(a0 + 0x208), uVar1, 0x208, uVar1);
        }
        puVar6 = (u8 *)0x204;
        puVar7 = puStack_28;
        uVar1 = set_field_0_015ad4(a0 + 0x204, puStack_28, 0x204);
    }
    return uVar1;
}

/*
 * CHerb_LoadTRWait  0x8c06d3ec
 * loads the texture of herb entry a2 (0x124-byte entries at +0x224), retrying until done
 * strings: "Failed to load tex:CHerb::LoadTRWait()"
 */
int CHerb_LoadTRWait(int a0, u32 a1, int a2, u32 a3) {
    u32 ar7_00;
    int iVar1;
    int iVar2;

    iVar2 = *(int *)(0x224 + a0) + a2 * 0x124;
    ar7_00 = get_field_4_0253e4(iVar2 + 0x78, a1, a2, a3);
    iVar1 = (*(code *)(&retry_until_done_020e80))(a1, *(u32 *)(iVar2 + 0x14), *(u32 *)(&DATA_8c136f4c), ar7_00);
    if (iVar1 == 0) {
        iVar1 =
            (*(code *)(&report_error_message))(*(u32 *)(iVar2 + 0x14), "Failed to load tex:CHerb::LoadTRWait()", 0, 2);
    }
    return iVar1;
}

/*
 * CHerb_release_06d474  0x8c06d474
 * name hint from a string it uses: GRAPHICS HERBLINE; area name: sits between CHerb functions (same compilation unit);
 * behaviour name: mostly calls release functions
 */
u32 CHerb_release_06d474(int a0, u32 a1, u32 a2, int a3) {
    u32 uVar1;
    int iVar2;
    int iVar3;
    int iVar4;

    for (iVar2 = 0; iVar2 < 2; iVar2 = iVar2 + 1) {
        iVar3 = *(int *)(0x224 + a0) + iVar2 * 0x124;
        for (iVar4 = 0; iVar4 < *(short *)(0xa4 + iVar3); iVar4 = iVar4 + 1) {
            if (**(char **)(iVar4 * 4 + *(int *)(iVar3 + 4)) != '\0') {
                a3 = a0 + iVar2;
                a2 = *(u32 *)(&DATA_8c136f4c);
                CDCGD_release_request_wrap(a1, *(u32 *)(iVar4 * 4 + *(int *)(iVar3 + 4)), a2, a3);
            }
            if (**(char **)(iVar4 * 4 + *(int *)(iVar3 + 8)) != '\0') {
                a3 = a0 + iVar2;
                a2 = *(u32 *)(&DATA_8c136f4c);
                CDCGD_release_request_wrap_020d58(a1, *(u32 *)(iVar4 * 4 + *(int *)(iVar3 + 8)), a2, a3);
            }
        }
        if (*(int *)(iVar3 + 0x18) != 0) {
            a3 = a0 + iVar2;
            a2 = *(u32 *)(&DATA_8c136f4c);
            CDCGD_release_request_wrap_020e48(a1, *(u32 *)(iVar3 + 0x18), a2, a3);
        }
    }
    iVar2 = (*(code *)(&libgcc_divide_helper_01031c))(*(u32 *)(0x210 + a0), 4, a2, a3);
    (*(code *)(&CDCGD_release_type0))(a1, *(u32 *)((&DATA_8c136f54) + iVar2 * 4), *(u32 *)(&DATA_8c136f4c), a0 + 1);
    (*(code *)(&CDCGD_release_type0))(a1, *(u32 *)(&DATA_8c136f50), *(u32 *)(&DATA_8c136f4c), a0);
    iVar2 = a0;
    (*(code *)(&CDCGD_release_type2))(a1, *(u32 *)(&DATA_8c136f50), *(u32 *)(&DATA_8c136f4c), a0);
    uVar1 = (**(code **)(0xf0 + *(int *)(a0 + 8)))(a0, a1, 0, iVar2);
    return uVar1;
}

/*
 * CHerb_release_06d5e4  0x8c06d5e4
 * area name: sits between CHerb functions (same compilation unit); behaviour name: mostly calls release functions
 */
u32 CHerb_release_06d5e4(int a0, u32 a1, u32 a2, u32 a3) {
    u32 uVar1;

    CTexture_ReleaseFromVRAM(*(int *)(0x224 + a0) + 0x78, a1, a2, a3);
    uVar1 = CTexture_ReleaseFromVRAM(a0 + 0x208, a1, a2, a3);
    return uVar1;
}

/*
 * CHerb_SetPVMTexture  0x8c06d618
 * called by: CHerb_LoadGRWait
 * strings: "CHerb::SetPVMTexture():%s"; "PVM TexName Area is null.."; "CHerb::SetPVMTexture():%s"; "PVM Texcount is
 * 0.."
 */
u8 *CHerb_SetPVMTexture(u32 unused_a0, u8 *a1, u32 a2, u32 a3) {
    u8 *ar5_00;
    u8 auStack_10c[260];

    ar5_00 = a1;
    if (*(int *)(a1 + 0x10) == 0) {
        (*(code *)(&sprintf))(auStack_10c, a1, a2, a3, "CHerb::SetPVMTexture():%s");
        a3 = 2;
        a2 = 0;
        ar5_00 = auStack_10c;
        (*(code *)(&report_error_message))("PVM TexName Area is null..", ar5_00, 0, 2);
    }
    if (*(int *)(a1 + 4) == 0) {
        (*(code *)(&sprintf))(auStack_10c, ar5_00, a2, a3, "CHerb::SetPVMTexture():%s");
        (*(code *)(&report_error_message))("PVM Texcount is 0..", auStack_10c, 0, 2);
    }
    (*(code *)(&ptr_list_build_1c))(a1 + 8, *(u32 *)(a1 + 0x10), 0x8c4312a8, *(u32 *)(a1 + 4));
    return a1 + 8;
}

/*
 * noop_06d6d8  0x8c06d6d8
 */
u32 noop_06d6d8(void) {
    u32 in_r0;

    return in_r0;
}

/*
 * noop_06d6dc  0x8c06d6dc
 */
u32 noop_06d6dc(void) {
    u32 in_r0;

    return in_r0;
}

/*
 * noop_06d6e0  0x8c06d6e0
 */
u32 noop_06d6e0(void) {
    u32 in_r0;

    return in_r0;
}

/*
 * ret_const_1_06d6e4  0x8c06d6e4
 */
u32 ret_const_1_06d6e4(void) {
    return 1;
}

/*
 * CHerb_test_06d6ec  0x8c06d6ec
 * area name: sits between CHerb functions (same compilation unit); behaviour name: returns the result of a comparison
 */
u32 CHerb_test_06d6ec(int a0) {
    if ((*(int *)(0x220 + a0) == 0) && (*(int *)(0x230 + a0) == 7)) {
        return 1;
    }
    return *(u32 *)(0x220 + a0);
}

/*
 * CHerb_vec_06d714  0x8c06d714
 * area name: sits between CHerb functions (same compilation unit); behaviour name: mostly calls vec functions
 * called by: Class_12a0c4_state_switch_068e64
 */
int CHerb_vec_06d714(u32 unused_a0, int *a1, float *a2, u8 *a3) {
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
 * ret_const_0_06d7e4  0x8c06d7e4
 */
u32 ret_const_0_06d7e4(void) {
    return 0;
}

/*
 * noop_06d7ec  0x8c06d7ec
 */
u32 noop_06d7ec(void) {
    u32 in_r0;

    return in_r0;
}

/*
 * noop_06d7f0  0x8c06d7f0
 */
u32 noop_06d7f0(void) {
    u32 in_r0;

    return in_r0;
}

/*
 * noop_06d7f4  0x8c06d7f4
 */
u32 noop_06d7f4(void) {
    u32 in_r0;

    return in_r0;
}

/*
 * noop_06d7f8  0x8c06d7f8
 */
u32 noop_06d7f8(void) {
    u32 in_r0;

    return in_r0;
}

/*
 * noop_06d7fc  0x8c06d7fc
 */
u32 noop_06d7fc(void) {
    u32 in_r0;

    return in_r0;
}

/*
 * noop_06d800  0x8c06d800
 */
u32 noop_06d800(void) {
    u32 in_r0;

    return in_r0;
}

/*
 * noop_06d804  0x8c06d804
 */
u32 noop_06d804(void) {
    u32 in_r0;

    return in_r0;
}

/*
 * noop_06d808  0x8c06d808
 */
u32 noop_06d808(void) {
    u32 in_r0;

    return in_r0;
}

/*
 * noop_06d80c  0x8c06d80c
 */
u32 noop_06d80c(void) {
    u32 in_r0;

    return in_r0;
}

/*
 * noop_06d810  0x8c06d810
 */
u32 noop_06d810(void) {
    u32 in_r0;

    return in_r0;
}

/*
 * noop_06d814  0x8c06d814
 */
u32 noop_06d814(void) {
    u32 in_r0;

    return in_r0;
}

/*
 * ret_const_0_06d818  0x8c06d818
 */
u32 ret_const_0_06d818(void) {
    return 0;
}

/*
 * ret_const_3f800000_06d820  0x8c06d820
 */
u32 ret_const_3f800000_06d820(void) {
    u32 in_r0;

    return in_r0;
}

/*
 * ret_const_3f800000_06d828  0x8c06d828
 */
u32 ret_const_3f800000_06d828(void) {
    u32 in_r0;

    return in_r0;
}

/*
 * ret_const_0_06d830  0x8c06d830
 */
u32 ret_const_0_06d830(void) {
    u32 in_r0;

    return in_r0;
}

/*
 * game_vec_06d838  0x8c06d838
 * area name: game code; nothing names its area yet; behaviour name: mostly calls vec functions
 */
u32 game_vec_06d838(u32 unused_a0, u32 unused_a1, u32 a2, u32 a3, u32 s0) {
    u8 auStack_10[16];

    Vec3_set_zero(auStack_10);
    vec3_copy_8c02b5fc(s0, auStack_10, a2);
    object_dtor_delete(auStack_10, 0xffffffff, a2, a3);
    return 0;
}

/*
 * get_ptr_8c06d878  0x8c06d870
 * returns the address 0x8c06d878
 */
u32 *get_ptr_8c06d878(void) {
    return &g_8c06d878;
}

/*
 * ret_const_0_06d87c  0x8c06d87c
 */
u32 ret_const_0_06d87c(void) {
    return 0;
}

/*
 * ret_const_0_06d884  0x8c06d884
 */
u32 ret_const_0_06d884(void) {
    u32 in_r0;

    return in_r0;
}

/*
 * game_calc_06d88c  0x8c06d88c
 * area name: game code; nothing names its area yet; behaviour name: integer arithmetic on its arguments
 */
u32 game_calc_06d88c(u32 unused_a0, u32 *a1) {
    *a1 = 0x43480000;
    return 0x8c06d8a0;
}

/*
 * ret_const_0_06d8a4  0x8c06d8a4
 */
u32 ret_const_0_06d8a4(void) {
    return 0;
}

/*
 * ret_const_0_06d8ac  0x8c06d8ac
 */
u32 ret_const_0_06d8ac(void) {
    return 0;
}

/*
 * ret_const_0_06d8b4  0x8c06d8b4
 */
u32 ret_const_0_06d8b4(void) {
    return 0;
}

/*
 * ret_const_0_06d8bc  0x8c06d8bc
 */
u32 ret_const_0_06d8bc(void) {
    u32 in_r0;

    return in_r0;
}

/*
 * ret_const_ffffffff_06d8c4  0x8c06d8c4
 */
u32 ret_const_ffffffff_06d8c4(void) {
    return 0xffffffff;
}

/*
 * noop_06d8cc  0x8c06d8cc
 */
u32 noop_06d8cc(void) {
    u32 in_r0;

    return in_r0;
}

/*
 * noop_06d8d0  0x8c06d8d0
 */
u32 noop_06d8d0(void) {
    u32 in_r0;

    return in_r0;
}

/*
 * ret_const_0_06d8d4  0x8c06d8d4
 */
u32 ret_const_0_06d8d4(void) {
    return 0;
}

/*
 * ret_const_1_06d8dc  0x8c06d8dc
 */
u32 ret_const_1_06d8dc(void) {
    return 1;
}

/*
 * static_init_vec3s_2804b0  0x8c06d8e4
 * static initialiser: builds 31 global Vec3 constants (8c2804b0..8c280d40) and registers their destructors
 */
u32 static_init_vec3s_2804b0(u32 unused_a0, u32 a1, u32 a2, u32 a3) {
    u32 uVar1;
    code *pcVar2;
    u32 uVar3;
    u32 uVar4;
    u8 *puVar5;
    code *ar7_00;
    char cVar6;
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
    u8 auStack_34[16];
    u8 auStack_24[16];
    u8 auStack_14[20];

    cVar6 = '\0';
    uVar1 = Vec3_ctor_xyz(&g_8c125e00, a1, a2, a3);
    uVar3 = 0x8c2804b0;
    global_list_push(uVar1, Vec3_dtor, 0x8c2804b0, a3);
    uVar1 = Vec3_ctor_xyz(&g_8c125e10, Vec3_ctor_xyz, uVar3, a3);
    uVar3 = 0x8c2804bc;
    pcVar2 = Vec3_dtor;
    global_list_push(uVar1, Vec3_dtor, 0x8c2804bc, a3);
    uVar1 = Vec3_ctor_xyz(&g_8c125e20, pcVar2, uVar3, a3);
    uVar3 = 0x8c2804c8;
    global_list_push(uVar1, Vec3_dtor, 0x8c2804c8, a3);
    uVar1 = Vec3_ctor_xyz(&g_8c125e30, Vec3_ctor_xyz, uVar3, a3);
    global_list_push(uVar1, Vec3_dtor, 0x8c2804d4, a3);
    if (cVar6 == '\0') {
        g_8c125e40 = CONCAT44(_UNK_8c125e44, 0x800000);
        /* WARNING: Read-only address (ram,0x8c125e44) is written */
    } else {
        g_8c125e40 = 0xffffffff00800000;
    }
    uVar1 = 0x124;
    vec_new_array(0x8c2804f0, game_list_02452c, game_release_03a4ac, 0x124, 2);
    global_list_push(0, destroy_array_8c2804f0, 0x8c2804e4, uVar1);
    uVar1 = 4;
    vec_new_array(0x8c280924, clear_field_0_wrap_015b94, free_if_nonnull_wrap_0247b0, 4, 0xd);
    global_list_push(0, destroy_array_8c280924, 0x8c280918, uVar1);
    uVar1 = 4;
    vec_new_array(0x8c280964, clear_field_0_wrap_015bc8, free_if_nonnull_wrap_03a3dc, 4, 0xd);
    global_list_push(0, destroy_array_8c280964, 0x8c280958, uVar1);
    uVar1 = 8;
    vec_new_array(0x8c2809b8, set_fields_0_4_0673cc, free_if_nonnull_wrap_0673dc, 8, 7);
    global_list_push(0, destroy_array_8c2809b8, 0x8c2809ac, uVar1);
    uVar1 = 8;
    vec_new_array(0x8c2809fc, set_fields_0_4_0673cc, free_if_nonnull_wrap_0673dc, 8, 6);
    global_list_push(0, destroy_array_8c2809fc, 0x8c2809f0, uVar1);
    uVar4 = 8;
    vec_new_array(0x8c280a38, set_fields_0_4_0673cc, free_if_nonnull_wrap_0673dc, 8, 6);
    uVar1 = 0x8c280a2c;
    global_list_push(0, destroy_array_8c280a38, 0x8c280a2c, uVar4);
    Vec3_ctor_xyz(auStack_14, Vec3_ctor_xyz, uVar1, uVar4);
    uVar1 = Vec3_ctor_copy(0x8c280abc, auStack_14, uVar1, uVar4);
    uVar3 = 0x8c280a68;
    global_list_push(uVar1, Vec3_dtor, 0x8c280a68, uVar4);
    uVar1 = 0xffffffff;
    Vec3_dtor(auStack_14, 0xffffffff, uVar3, uVar4);
    pcVar2 = Vec3_ctor_xyz;
    Vec3_ctor_xyz(auStack_24, uVar1, Vec3_ctor_xyz, uVar4);
    uVar1 = Vec3_ctor_copy(0x8c280acc, auStack_24, pcVar2, uVar4);
    uVar3 = 0x8c280a74;
    global_list_push(uVar1, Vec3_dtor, 0x8c280a74, uVar4);
    uVar1 = 0xffffffff;
    Vec3_dtor(auStack_24, 0xffffffff, uVar3, uVar4);
    Vec3_ctor_xyz(auStack_34, uVar1, uVar3, uVar4);
    uVar1 = Vec3_ctor_copy(0x8c280adc, auStack_34, uVar3, uVar4);
    uVar3 = 0x8c280a80;
    global_list_push(uVar1, Vec3_dtor, 0x8c280a80, uVar4);
    uVar1 = 0xffffffff;
    Vec3_dtor(auStack_34, 0xffffffff, uVar3, uVar4);
    Vec3_ctor_xyz(auStack_44, uVar1, uVar3, uVar4);
    uVar1 = Vec3_ctor_copy(0x8c280aec, auStack_44, uVar3, uVar4);
    uVar3 = 0x8c280a8c;
    global_list_push(uVar1, Vec3_dtor, 0x8c280a8c, uVar4);
    uVar1 = 0xffffffff;
    Vec3_dtor(auStack_44, 0xffffffff, uVar3, uVar4);
    Vec3_ctor_xyz(auStack_54, uVar1, uVar3, uVar4);
    uVar1 = Vec3_ctor_copy(0x8c280afc, auStack_54, uVar3, uVar4);
    uVar3 = 0x8c280a98;
    global_list_push(uVar1, Vec3_dtor, 0x8c280a98, uVar4);
    uVar1 = 0xffffffff;
    Vec3_dtor(auStack_54, 0xffffffff, uVar3, uVar4);
    Vec3_ctor_xyz(auStack_64, uVar1, uVar3, uVar4);
    uVar1 = Vec3_ctor_copy(0x8c280b0c, auStack_64, uVar3, uVar4);
    uVar3 = 0x8c280aa4;
    global_list_push(uVar1, Vec3_dtor, 0x8c280aa4, uVar4);
    pcVar2 = Vec3_dtor;
    Vec3_dtor(auStack_64, 0xffffffff, uVar3, Vec3_dtor);
    Vec3_ctor_xyz(auStack_74, Vec3_ctor_xyz, uVar3, pcVar2);
    uVar1 = Vec3_ctor_copy(0x8c280b1c, auStack_74, Vec3_ctor_copy, pcVar2);
    uVar3 = 0x8c280ab0;
    global_list_push(uVar1, Vec3_dtor, 0x8c280ab0, pcVar2);
    uVar1 = 0xffffffff;
    Vec3_dtor(auStack_74, 0xffffffff, uVar3, pcVar2);
    Vec3_ctor_xyz(auStack_84, uVar1, uVar3, pcVar2);
    uVar1 = Vec3_ctor_copy(0x8c280b74, auStack_84, uVar3, pcVar2);
    uVar3 = 0x8c280b2c;
    global_list_push(uVar1, Vec3_dtor, 0x8c280b2c, pcVar2);
    uVar1 = 0xffffffff;
    Vec3_dtor(auStack_84, 0xffffffff, uVar3, pcVar2);
    Vec3_ctor_xyz(auStack_94, uVar1, uVar3, pcVar2);
    uVar1 = Vec3_ctor_copy(0x8c280b84, auStack_94, uVar3, pcVar2);
    uVar3 = 0x8c280b38;
    global_list_push(uVar1, Vec3_dtor, 0x8c280b38, pcVar2);
    uVar1 = 0xffffffff;
    Vec3_dtor(auStack_94, 0xffffffff, uVar3, pcVar2);
    Vec3_ctor_xyz(auStack_a4, uVar1, uVar3, pcVar2);
    uVar1 = Vec3_ctor_copy(0x8c280b94, auStack_a4, uVar3, pcVar2);
    uVar3 = 0x8c280b44;
    global_list_push(uVar1, Vec3_dtor, 0x8c280b44, pcVar2);
    uVar1 = 0xffffffff;
    Vec3_dtor(auStack_a4, 0xffffffff, uVar3, pcVar2);
    Vec3_ctor_xyz(auStack_b4, uVar1, uVar3, pcVar2);
    uVar1 = Vec3_ctor_copy(0x8c280ba4, auStack_b4, uVar3, pcVar2);
    uVar3 = 0x8c280b50;
    global_list_push(uVar1, Vec3_dtor, 0x8c280b50, pcVar2);
    uVar1 = 0xffffffff;
    Vec3_dtor(auStack_b4, 0xffffffff, uVar3, pcVar2);
    Vec3_ctor_xyz(auStack_c4, uVar1, uVar3, pcVar2);
    uVar1 = Vec3_ctor_copy(0x8c280bb4, auStack_c4, 0x8c280b74, pcVar2);
    uVar3 = 0x8c280b5c;
    global_list_push(uVar1, Vec3_dtor, 0x8c280b5c, pcVar2);
    uVar1 = 0xffffffff;
    Vec3_dtor(auStack_c4, 0xffffffff, uVar3, pcVar2);
    Vec3_ctor_xyz(auStack_d4, uVar1, uVar3, pcVar2);
    uVar1 = Vec3_ctor_copy(0x8c280bc4, auStack_d4, 0x8c280b74, pcVar2);
    uVar3 = 0x8c280b68;
    global_list_push(uVar1, Vec3_dtor, 0x8c280b68, pcVar2);
    uVar1 = 0xffffffff;
    Vec3_dtor(auStack_d4, 0xffffffff, uVar3, pcVar2);
    Vec3_ctor_xyz(auStack_e4, uVar1, uVar3, pcVar2);
    uVar4 = 0x8c280c1c;
    uVar1 = Vec3_ctor_copy(0x8c280c1c, auStack_e4, Vec3_ctor_copy, 0x8c280c1c);
    uVar3 = 0x8c280bd4;
    global_list_push(uVar1, Vec3_dtor, 0x8c280bd4, uVar4);
    uVar1 = 0xffffffff;
    Vec3_dtor(auStack_e4, 0xffffffff, uVar3, uVar4);
    puVar5 = auStack_f4;
    Vec3_ctor_xyz(puVar5, uVar1, Vec3_ctor_xyz, puVar5);
    uVar1 = Vec3_ctor_copy(0x8c280c2c, auStack_f4, Vec3_ctor_copy, puVar5);
    ar7_00 = global_list_push;
    global_list_push(uVar1, Vec3_dtor, 0x8c280be0, global_list_push);
    uVar1 = 0xffffffff;
    Vec3_dtor(auStack_f4, 0xffffffff, 0xffffffff, ar7_00);
    pcVar2 = Vec3_ctor_xyz;
    Vec3_ctor_xyz(auStack_104, uVar1, Vec3_ctor_xyz, ar7_00);
    uVar1 = Vec3_ctor_copy(0x8c280c3c, auStack_104, pcVar2, ar7_00);
    global_list_push(uVar1, Vec3_dtor, 0x8c280bec, uVar1);
    uVar4 = 0xffffffff;
    uVar3 = 0xffffffff;
    Vec3_dtor(auStack_104, 0xffffffff, 0xffffffff, uVar1);
    Vec3_ctor_xyz(auStack_114, uVar3, uVar4, uVar1);
    puVar5 = auStack_114;
    uVar1 = Vec3_ctor_copy(0x8c280c4c, puVar5, 0x8c280c1c, puVar5);
    global_list_push(uVar1, Vec3_dtor, 0x8c280bf8, puVar5);
    puVar5 = auStack_114;
    pcVar2 = Vec3_dtor;
    Vec3_dtor(puVar5, 0xffffffff, Vec3_dtor, puVar5);
    Vec3_ctor_xyz(auStack_124, auStack_124, pcVar2, puVar5);
    uVar1 = Vec3_ctor_copy(0x8c280c5c, auStack_124, 0x8c280c1c, puVar5);
    global_list_push(uVar1, Vec3_dtor, 0x8c280c04, puVar5);
    pcVar2 = Vec3_dtor;
    Vec3_dtor(auStack_124, 0xffffffff, Vec3_dtor, puVar5);
    Vec3_ctor_xyz(auStack_134, auStack_134, pcVar2, puVar5);
    uVar1 = Vec3_ctor_copy(0x8c280c6c, auStack_134, pcVar2, puVar5);
    global_list_push(uVar1, Vec3_dtor, 0x8c280c10, puVar5);
    pcVar2 = Vec3_dtor;
    Vec3_dtor(auStack_134, 0xffffffff, Vec3_dtor, puVar5);
    uVar1 = Vec3_ctor_xyz(0x8c280c88, 0x8c280c88, pcVar2, puVar5);
    uVar3 = 0x8c280c7c;
    global_list_push(uVar1, Vec3_dtor, 0x8c280c7c, puVar5);
    uVar1 = Vec3_ctor_xyz(0x8c280ca4, Vec3_ctor_xyz, uVar3, puVar5);
    uVar3 = 0x8c280c98;
    global_list_push(uVar1, Vec3_dtor, 0x8c280c98, puVar5);
    uVar1 = Vec3_ctor_xyz(0x8c280cc0, 0x8c280cc0, uVar3, puVar5);
    uVar3 = 0x8c280cb4;
    global_list_push(uVar1, Vec3_dtor, 0x8c280cb4, puVar5);
    uVar1 = Vec3_ctor_xyz(0x8c280cdc, Vec3_ctor_xyz, uVar3, puVar5);
    uVar3 = 0x8c280cd0;
    global_list_push(uVar1, Vec3_dtor, 0x8c280cd0, puVar5);
    uVar1 = Vec3_ctor_xyz(0x8c280cf8, 0x8c280cf8, uVar3, puVar5);
    uVar3 = 0x8c280cec;
    global_list_push(uVar1, Vec3_dtor, 0x8c280cec, puVar5);
    uVar1 = Vec3_ctor_xyz(0x8c280d14, Vec3_ctor_xyz, uVar3, puVar5);
    uVar3 = 0x8c280d08;
    global_list_push(uVar1, Vec3_dtor, 0x8c280d08, puVar5);
    uVar1 = Vec3_ctor_xyz(0x8c280d30, 0x8c280d30, uVar3, puVar5);
    uVar3 = 0x8c280d24;
    global_list_push(uVar1, Vec3_dtor, 0x8c280d24, puVar5);
    uVar1 = Vec3_ctor_xyz(0x8c280d4c, Vec3_ctor_xyz, uVar3, puVar5);
    global_list_push(uVar1, Vec3_dtor, 0x8c280d40, puVar5);
    uVar3 = 0x8c280cc0;
    uVar1 = Class_129938_ctor_init(0x8c280d68, 0x8c280c88, 0x8c280ca4, 0x8c280cc0, 0x8c280cdc, 0x8c280cf8, 0x8c280d14,
                                   0x8c280d30, 0x8c280d4c);
    uVar1 = global_list_push(uVar1, Class_129938_dtor, 0x8c280d5c, uVar3);
    return uVar1;
}

/*
 * destroy_array_8c280a38  0x8c06e410
 * destroys the global array at 0x8c280a38
 */
u32 destroy_array_8c280a38(void) {
    u32 uVar1;

    uVar1 = vec_delete_array(0x8c280a38, free_if_nonnull_wrap_0673dc, 8, 6);
    return uVar1;
}

/*
 * destroy_array_8c2809fc  0x8c06e434
 * destroys the global array at 0x8c2809fc
 */
u32 destroy_array_8c2809fc(void) {
    u32 uVar1;

    uVar1 = vec_delete_array(0x8c2809fc, free_if_nonnull_wrap_0673dc, 8, 6);
    return uVar1;
}

/*
 * destroy_array_8c2809b8  0x8c06e458
 * destroys the global array at 0x8c2809b8
 */
u32 destroy_array_8c2809b8(void) {
    u32 uVar1;

    uVar1 = vec_delete_array(0x8c2809b8, free_if_nonnull_wrap_0673dc, 8, 7);
    return uVar1;
}

/*
 * destroy_array_8c280964  0x8c06e47c
 * destroys the global array at 0x8c280964
 */
u32 destroy_array_8c280964(void) {
    u32 uVar1;

    uVar1 = vec_delete_array(0x8c280964, free_if_nonnull_wrap_03a3dc, 4, 0xd);
    return uVar1;
}

/*
 * destroy_array_8c280924  0x8c06e4a0
 * destroys the global array at 0x8c280924
 */
u32 destroy_array_8c280924(void) {
    u32 uVar1;

    uVar1 = vec_delete_array(0x8c280924, free_if_nonnull_wrap_0247b0, 4, 0xd);
    return uVar1;
}

/*
 * destroy_array_8c2804f0  0x8c06e4c4
 * destroys the global array at 0x8c2804f0
 */
u32 destroy_array_8c2804f0(void) {
    u32 uVar1;

    uVar1 = vec_delete_array(0x8c2804f0, game_release_03a4ac, 0x124, 2);
    return uVar1;
}

/*
 * Class_12a25c_ctor  0x8c06e4ec
 * Class_129cbc base constructor, Class_12a25c vtable, eight vectors, then the state reset
 * called by: CHigyoLine_ctor
 */
u32 *Class_12a25c_ctor(u32 *a0, u32 a1, u32 a2, u32 a3) {
    Class_129cbc_ctor(a0, a1, a2, a3);
    *a0 = (&DATA_8c12a25c);
    Vec3_set_zero((int)a0 + 0x224);
    Vec3_ctor_zero((int)a0 + 0x230, a1, a2);
    Vec3_ctor_zero((int)a0 + 0x244, a1, a2);
    Vec3_set_zero((int)a0 + 0x254);
    Vec3_set_zero((int)a0 + 0x264);
    Vec3_ctor_zero((int)a0 + 0x270, a1, a2);
    Vec3_ctor_zero((int)a0 + 0x280, a1, a2);
    Vec3_ctor_zero((int)a0 + 0x2bc, a1, a2);
    Class_12a25c_reset(a0, a1, a2, a3);
    return a0;
}

/*
 * Class_12a25c_reset  0x8c06e5a4
 * clears the motion state, sets the action table (Idle, 0x22 entries) and starts the timer
 * called by: Class_12a25c_ctor
 */
u32 Class_12a25c_reset(int a0, u32 a1, u32 a2, u32 a3) {
    u32 uVar1;

    *(u32 *)(a0 + 0x260) = 0;
    *(u32 *)(a0 + 0x220) = 0;
    *(u32 *)(a0 + 0x240) = 0;
    Vec3_assign_f(a0 + 0x270, a1, a2, a3);
    *(u8 ***)(a0 + 0x1c8) = &PTR_s_Idle_8c13758c;
    *(u32 *)(a0 + 0x1cc) = 0x22;
    *(u32 *)(a0 + 100) = 0;
    *(u32 *)(a0 + 0x290) = 0xffffffff;
    *(u32 *)(a0 + 0x294) = 0;
    *(u32 *)(a0 + 0x298) = 1;
    *(u32 *)(a0 + 0x29c) = 0;
    *(u32 *)(a0 + 0x2a4) = 0;
    *(u32 *)(a0 + 0x2a8) = 0;
    *(u32 *)(a0 + 0x2ac) = 0;
    *(u32 *)(a0 + 0x2a0) = 0;
    *(u32 *)(a0 + 0x2b0) = 0;
    *(u32 *)(a0 + 0x2b4) = 0;
    *(u32 *)(a0 + 0x2d4) = 0;
    *(u32 *)(a0 + 0x2d8) = 0;
    uVar1 = timer_start_94(a0, a1, a2);
    return uVar1;
}

/*
 * Class_12a25c_m6_06e69c  0x8c06e69c
 */
u32 *Class_12a25c_m6_06e69c(int a0, u32 a1, u32 a2) {
    u32 ar6_00;
    u32 uVar1;
    u32 uVar2;
    u32 *puVar3;
    u32 uVar4;
    int *piVar5;
    int iVar6;
    u32 uVar7;
    u32 uVar8;
    u32 uVar9;
    u8 *puVar10;
    code *pcVar11;
    int iVar12;

    *(u32 *)(a0 + 0x128) = a1;
    iVar12 = *(int *)(a0 + 0x128);
    copy6_to_fields(a0, iVar12 * 0x18 + 0x8c280eb4, a2, iVar12);
    uVar2 = g_8c13797c;
    uVar1 = g_8c137964;
    ar6_00 = g_8c137960;
    uVar8 = g_8c13794c;
    uVar9 = g_8c137934;
    uVar7 = g_8c13791c;
    uVar4 = g_8c137904;
    puVar3 = (u32 *)0x128;
    iVar6 = *(int *)(a0 + 0x128);
    if ((iVar6 < 8) && (-1 < iVar6)) {
        switch (iVar6) {
        case 0:
            *(u32 *)(a0 + 0x2dc) = g_8c137900;
            *(u32 *)(a0 + 0x2e0) = uVar4;
            *(u8 **)(a0 + 0x2e4) = PTR_FUN_8c137908;
            uVar4 = g_8c137910;
            puVar3 = &g_8c13790c;
            *(u32 *)(a0 + 0x2e8) = g_8c13790c;
            *(u32 *)(a0 + 0x2ec) = uVar4;
            *(u8 **)(a0 + 0x2f0) = PTR_FUN_8c137914;
            break;
        case 1:
            *(u32 *)(a0 + 0x2dc) = g_8c137918;
            *(u32 *)(a0 + 0x2e0) = uVar7;
            *(u8 **)(a0 + 0x2e4) = PTR_FUN_8c137920;
            uVar4 = g_8c137928;
            puVar3 = (u32 *)(a0 + 0x2e8);
            *puVar3 = g_8c137924;
            *(u32 *)(a0 + 0x2ec) = uVar4;
            *(u8 **)(a0 + 0x2f0) = PTR_FUN_8c13792c;
            break;
        case 2:
            *(u32 *)(a0 + 0x2dc) = g_8c137930;
            *(u32 *)(a0 + 0x2e0) = uVar9;
            *(u8 **)(a0 + 0x2e4) = PTR_FUN_8c137938;
            uVar4 = g_8c137940;
            puVar3 = &g_8c13793c;
            *(u32 *)(a0 + 0x2e8) = g_8c13793c;
            *(u32 *)(a0 + 0x2ec) = uVar4;
            *(u8 **)(a0 + 0x2f0) = PTR_FUN_8c137944;
            uVar7 = 9;
            uVar9 = 0xb0;
            uVar4 = array_at_field_14(a0 + 0xb0, 9, &g_8c13793c, 0xb0);
            piVar5 = (int *)deref_u32(uVar4);
            if (*(int *)(*piVar5 + 4) == 0) {
                puVar3 = NULL;
            } else {
                uVar7 = 9;
                uVar4 = array_at_field_14(a0 + 0xb0, 9, puVar3, uVar9);
                uVar4 = deref_u32(uVar4);
                uVar9 = 0;
                puVar10 = &g_8c137618;
                record18_take(a0 + 0xb0, uVar4, &g_8c137618, 0);
                uVar7 = 10;
                uVar4 = array_at_field_14(a0 + 0xb0, 10, puVar10, uVar9);
                uVar4 = deref_u32(uVar4);
                uVar9 = 0;
                puVar10 = &g_8c137630;
                record18_take(a0 + 0xb0, uVar4, &g_8c137630, 0);
                uVar7 = 2;
                uVar4 = array_at_field_14(a0 + 0xb0, 2, puVar10, uVar9);
                uVar4 = deref_u32(uVar4);
                uVar9 = 0;
                puVar10 = &g_8c137648;
                record18_take(a0 + 0xb0, uVar4, &g_8c137648, 0);
                uVar7 = 3;
                uVar4 = array_at_field_14(a0 + 0xb0, 3, puVar10, uVar9);
                uVar4 = deref_u32(uVar4);
                puVar3 = (u32 *)record18_take(a0 + 0xb0, uVar4, &g_8c137660, 0);
            }
            break;
        default:
            *(u32 *)(a0 + 0x2dc) = g_8c137948;
            *(u32 *)(a0 + 0x2e0) = uVar8;
            *(u8 **)(a0 + 0x2e4) = PTR_FUN_8c137950;
            uVar4 = g_8c137958;
            *(u32 *)(a0 + 0x2e8) = g_8c137954;
            *(u32 *)(a0 + 0x2ec) = uVar4;
            *(u8 **)(a0 + 0x2f0) = PTR_FUN_8c13795c;
            uVar7 = 9;
            pcVar11 = array_at_field_14;
            uVar4 = array_at_field_14(a0 + 0xb0, 9, array_at_field_14, iVar12);
            puVar3 = (u32 *)deref_u32(uVar4);
            puVar3 = (u32 *)*puVar3;
            if (puVar3[1] != 0) {
                uVar9 = 9;
                uVar7 = 9;
                uVar4 = array_at_field_14(a0 + 0xb0, 9, 9, iVar12);
                uVar4 = deref_u32(uVar4);
                uVar9 = 0;
                puVar10 = &g_8c137678;
                record18_take(a0 + 0xb0, uVar4, &g_8c137678, 0);
                uVar7 = 10;
                uVar4 = array_at_field_14(a0 + 0xb0, 10, puVar10, uVar9);
                uVar4 = deref_u32(uVar4);
                uVar9 = 0;
                puVar10 = &g_8c137690;
                record18_take(a0 + 0xb0, uVar4, &g_8c137690, 0);
                uVar7 = 2;
                uVar4 = array_at_field_14(a0 + 0xb0, 2, puVar10, uVar9);
                uVar4 = deref_u32(uVar4);
                uVar9 = 0;
                puVar10 = &g_8c1376a8;
                record18_take(a0 + 0xb0, uVar4, &g_8c1376a8, 0);
                uVar7 = 3;
                uVar4 = array_at_field_14(a0 + 0xb0, 3, puVar10, uVar9);
                uVar4 = deref_u32(uVar4);
                puVar3 = (u32 *)record18_take(a0 + 0xb0, uVar4, &g_8c1376c0, 0);
            }
            break;
        case 6:
            puVar3 = (u32 *)(a0 + 0x2dc);
            *puVar3 = g_8c137960;
            *(u32 *)(a0 + 0x2e0) = uVar1;
            *(u8 **)(a0 + 0x2e4) = PTR_FUN_8c137968;
            uVar4 = g_8c137970;
            *(u32 *)(a0 + 0x2e8) = g_8c13796c;
            *(u32 *)(a0 + 0x2ec) = uVar4;
            *(u8 **)(a0 + 0x2f0) = PTR_FUN_8c137974;
            uVar7 = 9;
            uVar4 = array_at_field_14(a0 + 0xb0, 9, ar6_00, puVar3);
            pcVar11 = deref_u32;
            piVar5 = (int *)deref_u32(uVar4);
            if (*(int *)(*piVar5 + 4) == 0) {
                puVar3 = NULL;
            } else {
                uVar7 = 0x11;
                uVar4 = array_at_field_14(a0 + 0xb0, 0x11, pcVar11, puVar3);
                uVar4 = deref_u32(uVar4);
                uVar9 = 0;
                puVar10 = &g_8c1377f8;
                record18_take(a0 + 0xb0, uVar4, &g_8c1377f8, 0);
                uVar7 = 0x11;
                uVar4 = array_at_field_14(a0 + 0xb0, 0x11, puVar10, uVar9);
                piVar5 = (int *)deref_u32(uVar4);
                *(u32 *)(*piVar5 + 4) = g_8c1377fc;
                uVar7 = 0x11;
                uVar4 = array_at_field_14(a0 + 0xb0, 0x11, puVar10, piVar5);
                piVar5 = (int *)deref_u32(uVar4);
                uVar4 = g_8c137808;
                *(u32 *)(*piVar5 + 0x10) = g_8c137808;
                uVar9 = 9;
                uVar8 = 0xb0;
                uVar7 = array_at_field_14(a0 + 0xb0, 9, 0xb0, uVar4);
                uVar4 = deref_u32(uVar7);
                uVar9 = 0;
                puVar10 = &g_8c1376d8;
                record18_take(a0 + 0xb0, uVar4, &g_8c1376d8, 0);
                uVar7 = 10;
                uVar4 = array_at_field_14(a0 + 0xb0, 10, puVar10, uVar9);
                uVar4 = deref_u32(uVar4);
                record18_take(a0 + 0xb0, uVar4, &g_8c137708, 0);
                uVar7 = 2;
                uVar9 = 0xb0;
                pcVar11 = array_at_field_14;
                uVar4 = array_at_field_14(a0 + 0xb0, 2, array_at_field_14, 0xb0);
                uVar4 = deref_u32(uVar4);
                uVar7 = 0;
                puVar10 = &g_8c137798;
                record18_take(a0 + 0xb0, uVar4, &g_8c137798, 0);
                uVar4 = array_at_field_14(a0 + 0xb0, 3, puVar10, uVar7);
                uVar4 = deref_u32(uVar4);
                uVar7 = 0;
                puVar10 = &g_8c1377c8;
                record18_take(a0 + 0xb0, uVar4, &g_8c1377c8, 0);
                uVar4 = array_at_field_14(a0 + 0xb0, 0x14, puVar10, uVar7);
                uVar4 = deref_u32(uVar4);
                uVar7 = 0;
                puVar10 = &g_8c137828;
                record18_take(a0 + 0xb0, uVar4, &g_8c137828, 0);
                uVar4 = array_at_field_14(a0 + 0xb0, 0x19, puVar10, uVar7);
                uVar4 = deref_u32(uVar4);
                uVar7 = 1;
                puVar10 = &g_8c137738;
                record18_take(a0 + 0xb0, uVar4, &g_8c137738, 1);
                uVar4 = array_at_field_14(a0 + 0xb0, 0x1a, puVar10, uVar7);
                uVar4 = deref_u32(uVar4);
                uVar7 = 1;
                puVar10 = &g_8c137768;
                record18_take(a0 + 0xb0, uVar4, &g_8c137768, 1);
                uVar4 = array_at_field_14(a0 + 0xb0, 0x20, puVar10, uVar7);
                uVar4 = deref_u32(uVar4);
                puVar3 = (u32 *)record18_take(a0 + 0xb0, uVar4, &g_8c137858, 0);
            }
            break;
        case 7:
            *(u32 *)(a0 + 0x2dc) = g_8c137978;
            *(u32 *)(a0 + 0x2e0) = uVar2;
            *(u8 **)(a0 + 0x2e4) = PTR_FUN_8c137980;
            uVar4 = g_8c137988;
            *(u32 *)(a0 + 0x2e8) = g_8c137984;
            *(u32 *)(a0 + 0x2ec) = uVar4;
            *(u8 **)(a0 + 0x2f0) = PTR_FUN_8c13798c;
            uVar7 = 9;
            uVar9 = 0xb0;
            uVar4 = array_at_field_14(a0 + 0xb0, 9, 0xb0, iVar12);
            piVar5 = (int *)deref_u32(uVar4);
            iVar12 = *piVar5;
            iVar6 = *(int *)(iVar12 + 4);
            if (iVar6 != 0) {
                uVar4 = array_at_field_14(a0 + 0xb0, 0x11, iVar6, iVar12);
                uVar4 = deref_u32(uVar4);
                uVar9 = 0;
                puVar10 = &g_8c137810;
                record18_take(a0 + 0xb0, uVar4, &g_8c137810, 0);
                uVar7 = 0x11;
                uVar4 = array_at_field_14(a0 + 0xb0, 0x11, puVar10, uVar9);
                piVar5 = (int *)deref_u32(uVar4);
                uVar4 = g_8c137814;
                *(u32 *)(*piVar5 + 4) = g_8c137814;
                uVar9 = 0x11;
                uVar7 = array_at_field_14(a0 + 0xb0, 0x11, 0x11, uVar4);
                piVar5 = (int *)deref_u32(uVar7);
                *(u32 *)(*piVar5 + 0x10) = g_8c137820;
                uVar7 = 9;
                uVar9 = 0xb0;
                iVar6 = a0 + 0xb0;
                uVar4 = array_at_field_14(iVar6, 9, iVar6, 0xb0);
                uVar4 = deref_u32(uVar4);
                uVar7 = 0;
                puVar10 = &g_8c1376f0;
                record18_take(a0 + 0xb0, uVar4, &g_8c1376f0, 0);
                uVar4 = array_at_field_14(a0 + 0xb0, 10, puVar10, uVar7);
                uVar4 = deref_u32(uVar4);
                uVar9 = 0;
                puVar10 = &g_8c137720;
                record18_take(a0 + 0xb0, uVar4, &g_8c137720, 0);
                uVar7 = 2;
                uVar4 = array_at_field_14(a0 + 0xb0, 2, puVar10, uVar9);
                uVar4 = deref_u32(uVar4);
                uVar9 = 0;
                puVar10 = &g_8c1377b0;
                record18_take(a0 + 0xb0, uVar4, &g_8c1377b0, 0);
                uVar7 = 3;
                uVar4 = array_at_field_14(a0 + 0xb0, 3, puVar10, uVar9);
                uVar4 = deref_u32(uVar4);
                uVar9 = 0;
                puVar10 = &g_8c1377e0;
                record18_take(a0 + 0xb0, uVar4, &g_8c1377e0, 0);
                uVar7 = 0x14;
                uVar4 = array_at_field_14(a0 + 0xb0, 0x14, puVar10, uVar9);
                uVar4 = deref_u32(uVar4);
                record18_take(a0 + 0xb0, uVar4, &g_8c137840, 0);
                iVar6 = a0 + 0xb0;
                pcVar11 = array_at_field_14;
                uVar4 = array_at_field_14(iVar6, 0x19, array_at_field_14, iVar6);
                uVar4 = deref_u32(uVar4);
                record18_take(a0 + 0xb0, uVar4, &g_8c137750, 1);
                uVar7 = 0x1a;
                uVar9 = 0xb0;
                iVar6 = a0 + 0xb0;
                uVar4 = array_at_field_14(iVar6, 0x1a, iVar6, 0xb0);
                uVar4 = deref_u32(uVar4);
                puVar10 = &g_8c137780;
                record18_take(a0 + 0xb0, uVar4, &g_8c137780, 1);
                uVar9 = 0x20;
                uVar7 = 0x20;
                uVar4 = array_at_field_14(a0 + 0xb0, 0x20, puVar10, 0x20);
                uVar4 = deref_u32(uVar4);
                uVar7 = 0;
                puVar10 = &g_8c137870;
                record18_take(a0 + 0xb0, uVar4, &g_8c137870, 0);
                uVar4 = array_at_field_14(a0 + 0xb0, 0x27, puVar10, uVar7);
                uVar4 = deref_u32(uVar4);
                uVar7 = 0;
                puVar10 = &g_8c137888;
                record18_take(a0 + 0xb0, uVar4, &g_8c137888, 0);
                uVar4 = array_at_field_14(a0 + 0xb0, 0x28, puVar10, uVar7);
                uVar4 = deref_u32(uVar4);
                uVar7 = 0;
                puVar10 = &g_8c1378a0;
                record18_take(a0 + 0xb0, uVar4, &g_8c1378a0, 0);
                uVar4 = array_at_field_14(a0 + 0xb0, 0x21, puVar10, uVar7);
                uVar4 = deref_u32(uVar4);
                uVar7 = 0;
                puVar10 = &g_8c1378b8;
                record18_take(a0 + 0xb0, uVar4, &g_8c1378b8, 0);
                uVar4 = array_at_field_14(a0 + 0xb0, 0x22, puVar10, uVar7);
                uVar4 = deref_u32(uVar4);
                uVar7 = 0;
                puVar10 = &g_8c1378d0;
                record18_take(a0 + 0xb0, uVar4, &g_8c1378d0, 0);
                uVar4 = array_at_field_14(a0 + 0xb0, 0x32, puVar10, uVar7);
                uVar4 = deref_u32(uVar4);
                record18_take(a0 + 0xb0, uVar4, &g_8c1378e8, 0);
            }
            puVar3 = *(u32 **)(a0 + 100);
            if (puVar3 == (u32 *)0x1) {
                puVar3 = (u32 *)CAnimBody_SetAnimation(a0 + 0xb0, 0x13, 0xffffffff, 0);
            }
        }
    }
    return puVar3;
}

/*
 * Class_12a25c_dtor  0x8c06f3c4
 * stores the vtable 0x8c12a25c
 * called by: CAnimal_m0_08516c
 */
u32 *Class_12a25c_dtor(u32 *a0, u32 a1, u32 a2, u32 a3) {
    int *a4;
    u32 ar5_00;
    u32 in_stack_fffffff0;
    u32 ain0;

    ain0 = CONCAT22((short)((u32)in_stack_fffffff0 >> 0x10), (u16)a1);
    if (a0 != NULL) {
        *a0 = &g_8c12a25c;
        if ((a0[0x6b] != 0) && (a4 = (int *)a0[0x6b], a4 != NULL)) {
            (**(code **)(*a4 + 8))(a4, 1, a2, a3);
        }
        Vec3_dtor(a0 + 0xaf, 0xffffffff, a2, a3);
        Vec3_dtor(a0 + 0xa0, 0xffffffff, a2, a3);
        Vec3_dtor(a0 + 0x9c, 0xffffffff, a2, a3);
        object_dtor_delete(a0 + 0x99, 0xffffffff, a2, a3);
        object_dtor_delete(a0 + 0x95, 0xffffffff, a2, a3);
        Vec3_dtor(a0 + 0x91, 0xffffffff, a2, a3);
        Vec3_dtor(a0 + 0x8c, 0xffffffff, a2, a3);
        object_dtor_delete(a0 + 0x89, 0xffffffff, a2, a3);
        ar5_00 = 0;
        Class_129cbc_dtor(a0, 0, a2, a3);
        if (0 < (short)ain0) {
            free_if_nonnull(a0);
        }
    }
    return a0;
}

/*
 * Class_12a25c_vec_06f4c8  0x8c06f4c8
 * area name: sits between Class_12a25c functions (same compilation unit); behaviour name: mostly calls vec functions
 */
int Class_12a25c_vec_06f4c8(int a0, u32 a1, u32 a2, u32 a3) {
    int iVar1;

    game_uses_reset_fields_2c_6c_032160(a0, a1, a2, a3);
    *(u32 *)(0x2ac + a0) = 0;
    *(u32 *)(0x2b0 + a0) = 0;
    *(u32 *)(0x2b4 + a0) = 0;
    vec3_clear(a0 + 0x244, a1, a2, a3);
    vec3_clear(a0 + 0x2bc, a1, a2, a3);
    iVar1 = 0x2cc;
    *(u32 *)(0x2cc + a0) = 0;
    return iVar1;
}

/*
 * Class_12a25c_m1_06f530  0x8c06f530
 */
u32 Class_12a25c_m1_06f530(int a0, u32 *a1, u32 a2, u32 a3) {
    int ar5_00;
    u32 *puVar1;
    u32 uVar2;
    u32 in_fr1;
    float fVar3;
    code *pcVar6;
    double dVar4;
    double dVar5;
    float fVar7;
    double in_dr14;
    double in_xd0;
    double dVar8;
    bool bVar9;
    char cVar10;
    char cVar11;
    u8 auStack_84[16];
    u8 auStack_74[16];
    u8 auStack_64[16];
    u8 auStack_54[16];
    u8 auStack_44[16];
    u8 auStack_34[16];
    u8 auStack_24[20];

    cVar11 = '\0';
    cVar10 = '\0';
    puVar1 = a1;
    if ((((*(int *)(a0 + 0x124) == 0x10) || (*(int *)(a0 + 0x124) == 0x11)) || (*(int *)(a0 + 0x124) == 0x12)) ||
        ((*(int *)(a0 + 0x124) == 0x18 || (*(int *)(a0 + 0x124) == 6)))) {
        *(u8 *)(a0 + 0x210) = *(u8 *)(a1 + 10);
    } else {
        Class_129cbc_m1_031598(a0, a1, a2, a3);
    }
    *(u32 *)(a0 + 0x2a4) = 0;
    *(u32 *)(a0 + 0x218) = 0;
    if (a1[4] != 1) {
        if (cVar11 != '\0') {
            in_fr1 = 0x43800000;
        }
        game_vec_03207c(a0, puVar1);
        game_float_calc_0324ac(a0);
    }
    ar5_00 = pure_virtual_stub();
    if ((*(int *)(a0 + 0x178) == 1) && (ar5_00 != 1)) {
        *(u32 *)(a0 + 0x178) = 0;
    }
    set_field_3c_02f2c0(*a1, ar5_00);
    if ((((*(int *)(a0 + 0x124) == 0x10) || (*(int *)(a0 + 0x124) == 0x11)) || (*(int *)(a0 + 0x124) == 0x12)) ||
        (*(int *)(a0 + 0x124) == 0x18)) {
        Vec3_scale(a0 + 0x14, a0 + 0x28, a2, a3, auStack_74);
        Vec3_add(auStack_74, a0 + 0x90, a2, a3, auStack_84);
        Vec3_assign(a0 + 4, auStack_84, a2, a3);
        Vec3_dtor(auStack_84, 0xffffffff, a2, a3);
        uVar2 = 0xffffffff;
        Vec3_dtor(auStack_74, 0xffffffff, a2, a3);
        if (cVar11 == '\0') {
            in_dr14 = (double)CONCAT44((int)((u64)in_dr14 >> 0x20), *(u32 *)(*(int *)a1[1] + 4));
            dVar5 = (double)CONCAT44(*(u32 *)(a0 + 8), in_fr1);
        } else {
            dVar5 = *(double *)(a0 + 8);
        }
        if (cVar10 == '\0') {
            in_dr14 = (double)CONCAT44((int)((u64)in_dr14 >> 0x20), SUB84(in_dr14, 0) + (float)((u64)dVar5 >> 0x20));
        } else {
            in_dr14 = in_dr14 + dVar5;
        }
        (**(code **)(*(int *)a1[6] + 0x184))((int *)a1[6], uVar2, a2, a3);
        fVar3 = (float)((u64)dVar5 >> 0x20);
        if (cVar11 == '\0') {
            fVar7 = 160.0;
            dVar5 = in_xd0;
        } else {
            fVar3 = 160.0;
            fVar7 = 9.80909e-43;
        }
        if ((cVar10 == '\0' && fVar7 < fVar3) && (a1[4] != 3)) {
            (**(code **)(*(int *)a1[6] + 0x184))((int *)a1[6], uVar2, a2, a3);
            dVar4 = (double)CONCAT44(fVar7, fVar3);
            if (cVar10 == '\0') {
                bVar9 = SUB84(in_dr14, 0) < fVar7;
            } else {
                bVar9 = in_dr14 < dVar4;
            }
            if (!bVar9) {
                (**(code **)(*(int *)a1[6] + 0x184))((int *)a1[6], uVar2, a2, a3);
                dVar8 = dVar4;
                if (cVar11 == '\0') {
                    dVar4 = (double)((u64)dVar4 >> 0x20);
                    dVar8 = dVar5;
                }
                if (cVar11 == '\0') {
                    dVar5 = (double)CONCAT44(*(u32 *)(*(int *)a1[1] + 4), SUB84(dVar4, 0));
                } else {
                    dVar5 = *(double *)(*(int *)a1[1] + 4);
                }
                if (cVar10 == '\0') {
                    fVar3 = SUB84(dVar5, 0) - (float)((u64)dVar5 >> 0x20);
                } else {
                    fVar3 = SUB84(dVar5 - dVar5, 0);
                }
                if (cVar11 == '\0') {
                    *(float *)(a0 + 8) = fVar3;
                } else {
                    *(double *)(a0 + 8) = dVar8;
                }
            }
        }
        vec3_clear(a0 + 700, uVar2, a2, a3);
    } else {
        Vec3_scale(a0 + 0x14, a0 + 0x28, a2, a3, auStack_24);
        Vec3_add(auStack_24, a0 + 0x90, a2, a3, auStack_34);
        Vec3_add(auStack_34, a0 + 0x6c, a2, a3, auStack_44);
        Vec3_add(auStack_44, a0 + 0x13c, a2, a3, auStack_54);
        Vec3_add(auStack_54, a0 + 700, a2, a3, auStack_64);
        Vec3_assign(a0 + 4, auStack_64, a2, a3);
        Vec3_dtor(auStack_64, 0xffffffff, a2, a3);
        Vec3_dtor(auStack_54, 0xffffffff, a2, a3);
        Vec3_dtor(auStack_44, 0xffffffff, a2, a3);
        Vec3_dtor(auStack_34, 0xffffffff, a2, a3);
        uVar2 = 0xffffffff;
        Vec3_dtor(auStack_24, 0xffffffff, a2, a3);
        if (cVar11 == '\0') {
            in_dr14 = (double)CONCAT44((int)((u64)in_dr14 >> 0x20), *(u32 *)(*(int *)a1[1] + 4));
            dVar5 = (double)CONCAT44(*(u32 *)(a0 + 8), in_fr1);
        } else {
            dVar5 = *(double *)(a0 + 8);
        }
        if (cVar10 == '\0') {
            in_dr14 = (double)CONCAT44((int)((u64)in_dr14 >> 0x20), SUB84(in_dr14, 0) + (float)((u64)dVar5 >> 0x20));
        } else {
            in_dr14 = in_dr14 + dVar5;
        }
        (**(code **)(*(int *)a1[6] + 0x184))((int *)a1[6], uVar2, a2, a3);
        fVar3 = (float)((u64)dVar5 >> 0x20);
        if (cVar11 == '\0') {
            pcVar6 = (code *)0x43200000;
            dVar5 = in_xd0;
        } else {
            fVar3 = 160.0;
            pcVar6 = vec3_clear;
        }
        if ((cVar10 == '\0' && (float)pcVar6 < fVar3) && (a1[4] != 3)) {
            (**(code **)(*(int *)a1[6] + 0x184))((int *)a1[6], uVar2, a2, a3);
            dVar4 = (double)CONCAT44(pcVar6, fVar3);
            if (cVar10 == '\0') {
                bVar9 = SUB84(in_dr14, 0) < (float)pcVar6;
            } else {
                bVar9 = in_dr14 < dVar4;
            }
            if (!bVar9) {
                (**(code **)(*(int *)a1[6] + 0x184))((int *)a1[6], uVar2, a2, a3);
                dVar8 = dVar4;
                if (cVar11 == '\0') {
                    dVar4 = (double)((u64)dVar4 >> 0x20);
                    dVar8 = dVar5;
                }
                if (cVar11 == '\0') {
                    dVar5 = (double)CONCAT44(*(u32 *)(*(int *)a1[1] + 4), SUB84(dVar4, 0));
                } else {
                    dVar5 = *(double *)(*(int *)a1[1] + 4);
                }
                if (cVar10 == '\0') {
                    fVar3 = SUB84(dVar5, 0) - (float)((u64)dVar5 >> 0x20);
                } else {
                    fVar3 = SUB84(dVar5 - dVar5, 0);
                }
                if (cVar11 == '\0') {
                    *(float *)(a0 + 8) = fVar3;
                } else {
                    *(double *)(a0 + 8) = dVar8;
                }
            }
        }
        vec3_clear(a0 + 0x13c, uVar2, a2, a3);
        vec3_clear(a0 + 700, uVar2, a2, a3);
    }
    if (*(int *)(a0 + 0x124) != 2) {
        timer_vec_031ab4(a0, *(u32 *)(a1[1] + 4), a2, a3);
    }
    *(u32 *)(a0 + 0x21c) = 0;
    *(u32 *)(a0 + 0x1d4) = 0;
    return 0x1d4;
}

/*
 * Class_12a25c_m7_06f918  0x8c06f918
 */
int Class_12a25c_m7_06f918(int a0) {
    int iVar1;

    game_uses_CAnimBody_SetAnimation_031684(a0);
    iVar1 = 0x298;
    *(u32 *)(0x298 + a0) = 1;
    return iVar1;
}

/*
 * Class_12a25c_vec_06f93c  0x8c06f93c
 * area name: sits between Class_12a25c functions (same compilation unit); behaviour name: mostly calls vec functions
 */
code *Class_12a25c_vec_06f93c(int a0, u32 *a1, u32 unused_a2, code *a3) {
    u32 uVar1;
    u32 ar7_00;
    int iVar2;
    code *pcVar3;
    u32 *a5;
    u64 *ar5_00;
    int iVar4;
    u8 *puVar5;
    u64 *ar6_00;
    u32 uVar6;
    u64 *ar7_01;
    u32 ar7_02;
    code *pcVar7;
    u32 in_fr1;
    float fVar8;
    double dVar9;
    double dVar10;
    u64 uVar11;
    double in_dr12;
    double in_dr14;
    double in_xd0;
    u64 in_xd12;
    double in_xd14;
    bool bVar12;
    char cVar13;
    char cVar14;
    u64 uStack_158;
    u8 auStack_144[16];
    u8 auStack_134[16];
    u8 auStack_124[16];
    u8 auStack_114[16];
    u8 auStack_104[16];
    u8 auStack_f4[12];
    u8 auStack_e8[16];
    u8 auStack_d8[16];
    u8 auStack_c8[16];
    u8 auStack_b8[12];
    u8 auStack_ac[16];
    u8 auStack_9c[16];
    u8 auStack_8c[16];
    u8 auStack_7c[16];
    u8 auStack_6c[16];
    u8 auStack_5c[16];
    u8 auStack_4c[16];
    u8 auStack_3c[4];
    u8 auStack_38[4];
    u8 auStack_34[4];
    u8 auStack_30[4];
    float fStack_2c;
    float fStack_28;
    u32 uStack_24;

    cVar14 = '\0';
    cVar13 = '\0';
    pcVar7 = (code *)0x1;
    puVar5 = auStack_5c;
    Vec3_ctor_copy_wrap_03f480(*a1, a1, puVar5, a3, puVar5);
    Vec3_ctor_copy(auStack_30, auStack_5c, puVar5, a3);
    Vec3_dtor(auStack_5c, 0xffffffff, puVar5, a3);
    pcVar3 = Vec3_set_zero;
    Vec3_set_zero(auStack_3c);
    dVar9 = (double)CONCAT44(0x3f800000, in_fr1);
    dVar10 = dVar9;
    if (cVar14 == '\0') {
        uStack_158 = (double)CONCAT44(uStack_158._4_4_, 0x3f800000);
        dVar10 = uStack_158;
    }
    uStack_158 = dVar10;
    if (((a1[4] == 3) || (pcVar3 = *(code **)(a0 + 0x68), pcVar3 != NULL)) && (*(int *)(a0 + 0x298) == 1)) {
        if (((*(int *)(a0 + 0x124) == 4) && (*(int *)(a0 + 300) == 2)) &&
            (iVar2 = get_field_6c_028cc4(*a1, get_field_6c_028cc4), iVar2 != 0)) {
            Vec3_scale(a0 + 0x80, a0 + 0x48, 0x80, a3, auStack_6c);
            pcVar7 = Vec3_scale;
            Vec3_scale(auStack_6c, *(int *)(a1[1] + 8) + 4, Vec3_scale, a3, auStack_7c);
            Vec3_add(auStack_7c, *(u32 *)a1[1], pcVar7, a3, auStack_8c);
            Vec3_ctor_copy(auStack_4c, auStack_8c, pcVar7, a3);
            Vec3_dtor(auStack_8c, 0xffffffff, 0xffffffff, a3);
            uVar6 = 0xffffffff;
            pcVar7 = Vec3_dtor;
            Vec3_dtor(auStack_7c, 0xffffffff, Vec3_dtor, 0xffffffff);
            Vec3_dtor(auStack_6c, 0xffffffff, pcVar7, uVar6);
            uVar1 = get_field_6c_028cc4(*a1, get_field_6c_028cc4);
            set_vec3_field_30(uVar1, set_vec3_field_30, uVar1);
            Vec3_dtor(auStack_4c, 0xffffffff, uVar1, uVar6);
        }
        uVar1 = a1[4];
        game_state_switch_07a68c(a0, *(u32 *)a1[1], uVar1, a1[3]);
        uVar6 = 0x80;
        Vec3_assign(a0 + 0x80, a0 + 0x14, uVar1, 0x80);
        object_dtor_delete(auStack_3c, 0xffffffff, uVar1, uVar6);
        Vec3_dtor(auStack_30, 0xffffffff, uVar1, uVar6);
        return (code *)1;
    }
    iVar2 = *(int *)(a0 + 0x124);
    if ((0x1f < iVar2) || (iVar2 < 0))
        goto override_jmp_8c06fb96_case_5;
    switch (iVar2) {
    case 0:
    case 0xe:
    case 0xf:
        flags6_set_all(a0 + 0x1fc, 0x1fc, puVar5);
        a3 = (code *)a1[3];
        pcVar7 = (code *)game_vec_078fd0(a0, *(u32 *)a1[1], *(u32 *)(a1[1] + 4), a3);
        break;
    case 1:
        a3 = (code *)pure_virtual_stub();
        pcVar7 = a3;
        break;
    case 2:
        a3 = (code *)a1[6];
        pcVar7 = (code *)game_uses_CAnimBody_AdvanceFrame_wrapp_07af10(a0, *(u32 *)a1[1], a1[4], a3);
        timer_vec_031c74(a0, auStack_30, *(u32 *)a1[1], a3);
        break;
    case 3:
        pcVar7 = (code *)game_vec_07f76c(a0, *(u32 *)a1[1], a1[6], a3);
        break;
    case 4:
        a3 = (code *)*a1;
        pcVar7 = (code *)game_vec_077a38(a0, *(u32 *)a1[1], auStack_30, a3);
        break;
    case 6:
        pcVar7 = (code *)game_state_switch_07edac(a0, *(u32 *)a1[1], a1[6], a3);
        break;
    case 7:
        reset_fields_2c_6c(a0 + 0xb0, 0xb0, puVar5);
        uVar1 = 0xb0;
        a3 = CAnimBody_AdvanceFrame_wrapper;
        iVar2 = CAnimBody_AdvanceFrame_wrapper(a0 + 0xb0, 0xb0, puVar5, CAnimBody_AdvanceFrame_wrapper);
        if (iVar2 == 1) {
            timer_start_94(a0, uVar1, 1);
            pcVar7 = NULL;
        }
        break;
    case 8:
    case 9:
        uVar6 = 0xfffffffb;
        *(u8 *)(a0 + 0x1fc) = *(u8 *)(a0 + 0x1fc) & 0xfb;
        uVar1 = 300;
        if (*(int *)(a0 + 300) == 0) {
            if (*(int *)(a0 + 0x124) == 9) {
                a3 = (code *)a1[6];
                uVar6 = *(u32 *)a1[1];
                uVar1 = 8;
                se_play_at_object(a0, 8, uVar6, a3);
            } else {
                a3 = (code *)a1[6];
                uVar6 = *(u32 *)a1[1];
                uVar1 = 7;
                se_play_at_object(a0, 7, uVar6, a3);
            }
        }
        Vec3_ctor_xyz(auStack_144, uVar1, uVar6, a3);
        pcVar7 = (code *)game_uses_Vec3_dtor_07b7d0(a0, *(u32 *)a1[1], auStack_144, a1[3], a1[6]);
        a3 = (code *)0xffffffff;
        Vec3_dtor(auStack_144, 0xffffffff, auStack_144, 0xffffffff);
        break;
    case 10:
        if (*(int *)(a0 + 0x128) < 3) {
            pcVar7 = (code *)game_uses_CAnimBody_AdvanceFrame_wrap_076750(a0, *a1, 0, a3);
        } else {
            a5 = a1;
            pcVar7 = (code *)game_state_switch_076994(a0, a1, puVar5, a3);
            (**(code **)(*(int *)a1[6] + 0x184))((int *)a1[6], a5, puVar5, a3);
            if (cVar14 == '\0') {
                dVar10 = (double)CONCAT44(*(u32 *)(a0 + 0x48), (int)((u64)dVar9 >> 0x20));
            } else {
                dVar10 = *(double *)(a0 + 0x48);
                in_xd0 = dVar9;
            }
            if (cVar13 == '\0') {
                fVar8 = SUB84(dVar10, 0) - (float)((u64)dVar10 >> 0x20);
            } else {
                fVar8 = SUB84(dVar10 - dVar10, 0);
            }
            if (cVar14 == '\0') {
                uVar11 = CONCAT44(*(u32 *)(*(int *)a1[1] + 4), fVar8);
            } else {
                uVar11 = *(u64 *)(*(int *)a1[1] + 4);
            }
            if (cVar13 == '\0' && (float)uVar11 < (float)((u64)uVar11 >> 0x20)) {
                a3 = timer_start_94;
                timer_start_94(a0, a5, puVar5);
            } else {
                timer_stop_94(a0, a5, puVar5, a3);
            }
        }
        if (cVar14 == '\0') {
            dVar9 = (double)CONCAT44(0x3f666666, *(u32 *)(a0 + 0x28));
        } else {
            in_xd0 = *(double *)(a0 + 0x28);
            dVar9 = 2.651015428457012e+77;
        }
        if (cVar13 == '\0') {
            fVar8 = SUB84(dVar9, 0) * (float)((u64)dVar9 >> 0x20);
        } else {
            fVar8 = SUB84(dVar9 * dVar9, 0);
        }
        if (cVar14 == '\0') {
            *(float *)(a0 + 0x28) = fVar8;
        } else {
            *(double *)(a0 + 0x28) = in_xd0;
        }
        break;
    case 0xb:
        if (*(int *)(a0 + 0x128) < 2) {
            pcVar7 = (code *)game_vec_075ef4(a0, *(int *)(a0 + 0x128), puVar5, a3);
        } else {
            Vec3_ctor_copy(auStack_9c, &g_8c125e68, puVar5, a3);
            uVar1 = 0;
            pcVar7 = (code *)game_uses_CAnimBody_SetAnimation_0811b4(a0, auStack_9c, 0);
            Vec3_dtor(auStack_9c, 0xffffffff, uVar1, a3);
        }
        timer_vec_031c74(a0, auStack_30, *(u32 *)a1[1], a3);
        break;
    case 0xc:
        iVar2 = get_field_6c_028cc4(*a1, pcVar3);
        if (iVar2 == 0) {
            *(u32 *)(a0 + 0x178) = 0;
            object_dtor_delete(auStack_3c, 0xffffffff, puVar5, a3);
            Vec3_dtor(auStack_30, 0xffffffff, puVar5, a3);
            return (code *)2;
        }
        get_vec3_field_30(iVar2, auStack_30, &fStack_2c, &fStack_28);
        get_vec3_field_50(iVar2, auStack_3c, auStack_38, auStack_34);
        ar7_01 = &uStack_158;
        ar6_00 = &uStack_158;
        ar5_00 = &uStack_158;
        get_vec3_field_5c(iVar2, ar5_00, ar6_00, ar7_01);
        if (*(int *)(a0 + 0x128) == 1) {
            Vec3_ctor_xyz(auStack_ac, Vec3_ctor_xyz, ar6_00, ar7_01);
            puVar5 = auStack_b8;
            vec3_copy_8c02b5fc(puVar5, auStack_3c, puVar5);
            Vec3_vec_023484(auStack_ac, auStack_b8, puVar5, ar7_01, auStack_c8);
            pcVar3 = Vec3_scale;
            Vec3_scale(auStack_c8, &uStack_158, Vec3_scale, ar7_01, auStack_d8);
            a3 = Vec3_add_assign;
            Vec3_add_assign(auStack_30, auStack_d8);
            puVar5 = auStack_d8;
            Vec3_dtor(puVar5, 0xffffffff, puVar5, a3);
            Vec3_dtor(auStack_c8, 0xffffffff, puVar5, a3);
            pcVar3 = object_dtor_delete;
            object_dtor_delete(auStack_b8, 0xffffffff, object_dtor_delete, a3);
            Vec3_dtor(auStack_ac, 0xffffffff, pcVar3, a3);
        } else {
            if (*(int *)(a0 + 0x128) != 2) {
                uVar1 = 0;
                *(u32 *)(a0 + 0x178) = 0;
                object_dtor_delete(auStack_3c, 0xffffffff, 0, ar7_01);
                Vec3_dtor(auStack_30, 0xffffffff, uVar1, ar7_01);
                return (code *)2;
            }
            puVar5 = auStack_e8;
            pcVar3 = Vec3_ctor_xyz;
            Vec3_ctor_xyz(puVar5, ar5_00, Vec3_ctor_xyz, puVar5);
            vec3_copy_8c02b5fc(auStack_f4, auStack_3c, pcVar3);
            puVar5 = auStack_f4;
            Vec3_vec_023484(auStack_e8, puVar5, pcVar3, puVar5, auStack_104);
            Vec3_scale(auStack_104, &uStack_158, pcVar3, puVar5, auStack_114);
            Vec3_add_assign(auStack_30, auStack_114);
            Vec3_dtor(auStack_114, 0xffffffff, pcVar3, puVar5);
            Vec3_dtor(auStack_104, 0xffffffff, pcVar3, puVar5);
            object_dtor_delete(auStack_f4, 0xffffffff, pcVar3, puVar5);
            a3 = Vec3_dtor;
            Vec3_dtor(auStack_e8, 0xffffffff, pcVar3, Vec3_dtor);
        }
        iVar2 = *(int *)(a0 + 0x134);
        if (iVar2 == 0) {
            *(u32 *)(a0 + 0x178) = 1;
            *(u32 *)(a0 + 0x40) = 5;
            *(int *)(a0 + 0x134) = *(int *)(a0 + 0x134) + 1;
        } else if (iVar2 != 1) {
            if (iVar2 == 2) {
                a3 = (code *)*a1;
                iVar2 = game_vec_07cce0(a0, *(u32 *)a1[1], auStack_30, a3);
                if (iVar2 == 0) {
                    *(u32 *)(a0 + 0x134) = 0;
                    *(u32 *)(a0 + 0x178) = 0;
                    pcVar7 = NULL;
                }
            }
            break;
        }
        a3 = (code *)(*(int *)(a0 + 0x128) * 0x18 + 0x8c280ec8);
        puVar5 = auStack_30;
        uVar1 = *(u32 *)a1[1];
        iVar2 = pure_virtual_stub();
        if (iVar2 == 0) {
            set_field_88_to_1(*a1, uVar1, puVar5);
            *(int *)(a0 + 0x134) = *(int *)(a0 + 0x134) + 1;
        }
        Vec3_assign(a0 + 0x80, a0 + 0x14, puVar5, a3);
        break;
    case 0xd:
        *(u32 *)(a0 + 0x214) = 0;
        ar7_00 = *(u8 *)(a0 + 0x1fc) & 0xfffffffb;
        *(char *)(a0 + 0x1fc) = (char)ar7_00;
        if (*(int *)(a0 + 0x128) == 1) {
            a3 = NULL;
            uVar1 = 0xffffffff;
            CAnimBody_SetAnimation(a0 + 0xb0, 0x10, 0xffffffff, 0);
            CAnimBody_AdvanceFrame_wrap(a0 + 0xb0, 0xb0, uVar1, a3);
        } else {
            if (*(int *)(a0 + 0x128) != 2) {
                uVar1 = 0xffffffff;
                object_dtor_delete(auStack_3c, 0xffffffff, 0xffffffff, ar7_00);
                Vec3_dtor(auStack_30, 0xffffffff, uVar1, ar7_00);
                return (code *)2;
            }
            a3 = NULL;
            uVar1 = 0xffffffff;
            CAnimBody_SetAnimation(a0 + 0xb0, 0x16, 0xffffffff, 0);
            CAnimBody_AdvanceFrame_wrap(a0 + 0xb0, a0 + 0xb0, uVar1, a3);
        }
        if (*(int *)(a0 + 300) == 0) {
            iVar4 = a0 + 0x48;
            iVar2 = a0 + 0x48;
            rand_float(a0, iVar2, iVar4);
            uVar1 = SUB84(dVar9, 0);
            rand_float(a0, iVar2, iVar4);
            if (cVar14 == '\0') {
                dVar9 = (double)CONCAT44(0x40000000, uVar1);
            } else {
                dVar9 = 5.52249404598712e-312;
            }
            iVar2 = a0 + 0x48;
            Vec3_ctor_xyz(auStack_124, auStack_124, iVar2, a3);
            Vec3_add(*(u32 *)a1[1], auStack_124, iVar2, a3, auStack_134);
            Vec3_assign(a0 + 0x54, auStack_134, iVar2, a3);
            Vec3_dtor(auStack_134, 0xffffffff, iVar2, a3);
            Vec3_dtor(auStack_124, 0xffffffff, iVar2, a3);
            a3 = (code *)a1[6];
            iVar2 = game_test_0329ac(a0, a0 + 0x54, a1[3], a3);
            if (iVar2 == 0) {
                *(u32 *)(a0 + 300) = 2;
            } else {
                a3 = (code *)0x12c;
                *(u32 *)(a0 + 300) = 1;
                *(u32 *)(a0 + 0x40) = 3;
            }
        }
        if (*(int *)(a0 + 300) == 1) {
            pcVar3 = *(code **)a1[1];
            iVar4 = a0 + 0x54;
            a3 = pcVar3;
            iVar2 = CMushroomerBody_vec_031764(a0, iVar4, pcVar3, pcVar3);
            if (iVar2 == 0) {
                pcVar3 = (code *)0x12c;
                *(u32 *)(a0 + 300) = 0;
            }
            rand_float(a0, iVar4, pcVar3);
            if (cVar14 == '\0') {
                dVar9 = (double)CONCAT44((int)((u64)dVar9 >> 0x20), *(u32 *)(a0 + 0x24));
            } else {
                in_xd0 = *(double *)(a0 + 0x24);
            }
            if (cVar13 == '\0') {
                fVar8 = SUB84(dVar9, 0) * (float)((u64)dVar9 >> 0x20);
            } else {
                fVar8 = SUB84(dVar9 * dVar9, 0);
            }
            if (cVar14 == '\0') {
                *(float *)(a0 + 0x28) = fVar8;
            } else {
                *(double *)(a0 + 0x28) = in_xd0;
            }
        } else {
            timer_vec_031c74(a0, auStack_30, *(u32 *)a1[1], a3);
        }
        break;
    case 0x14:
        if (*(int *)(a0 + 0x21c) == 1) {
            iVar2 = *(int *)(a0 + 0x128) * 0x18 + 0x8c280eb4;
            copy6_to_fields(a0, iVar2, puVar5, 0x21c);
            if (cVar14 == '\0') {
                dVar9 = (double)CONCAT44(0x3f000000, *(u32 *)(a0 + 0x38));
            } else {
                in_xd0 = *(double *)(a0 + 0x38);
                dVar9 = 3.73993469111571e-312;
            }
            if (cVar13 == '\0') {
                fVar8 = SUB84(dVar9, 0) * (float)((u64)dVar9 >> 0x20);
            } else {
                fVar8 = SUB84(dVar9 * dVar9, 0);
            }
            if (cVar14 == '\0') {
                *(float *)(a0 + 0x38) = fVar8;
            } else {
                *(double *)(a0 + 0x38) = in_xd0;
            }
            a3 = CAnimBody_AdvanceFrame_wrapper;
            iVar2 = CAnimBody_AdvanceFrame_wrapper(a0 + 0xb0, iVar2, puVar5, CAnimBody_AdvanceFrame_wrapper);
            if (iVar2 == 1) {
                a3 = NULL;
                CAnimBody_SetAnimation(a0 + 0xb0, 0, 0xffffffff, 0);
            }
            uVar1 = *(u32 *)a1[1];
            timer_vec_031c74(a0, auStack_30, uVar1, a3);
            if (*(int *)(a0 + 0x40) == 0) {
                a3 = (code *)0x8c280eb4;
                copy6_to_fields(a0, *(int *)(a0 + 0x128) * 0x18 + 0x8c280eb4, uVar1, 0x8c280eb4);
                *(u32 *)(a0 + 300) = 0;
                *(u32 *)(a0 + 0x2a0) = 2;
                pcVar7 = NULL;
            }
        } else {
            if (cVar14 == '\0') {
                in_dr12 = (double)CONCAT44((int)((u64)in_dr12 >> 0x20), *(u32 *)(a1[3] + 8));
                dVar9 = (double)CONCAT44(*(u32 *)(a0 + 0x48), in_fr1);
            } else {
                in_xd12 = *(u64 *)(a1[3] + 8);
                dVar9 = *(double *)(a0 + 0x48);
            }
            if (cVar13 == '\0') {
                fStack_28 = SUB84(in_dr12, 0) - (float)((u64)dVar9 >> 0x20);
            } else {
                fStack_28 = SUB84(in_dr12 - dVar9, 0);
            }
            if (cVar14 != '\0') {
                fStack_28 = (float)in_xd12;
                uStack_24 = (u32)((u64)in_xd12 >> 0x20);
            }
            iVar2 = *(int *)a1[6];
            pcVar7 = *(code **)(iVar2 + 0x184);
            (*pcVar7)((int *)a1[6], pcVar3, iVar2, pcVar7);
            if (cVar14 == '\0') {
                in_dr14 = (double)CONCAT44((int)((u64)in_dr14 >> 0x20), (int)((u64)dVar9 >> 0x20));
                dVar10 = (double)CONCAT44(*(u32 *)(a0 + 0x48), SUB84(dVar9, 0));
                dVar9 = in_xd14;
            } else {
                dVar10 = *(double *)(a0 + 0x48);
            }
            if (cVar13 == '\0') {
                in_dr14 =
                    (double)CONCAT44((int)((u64)in_dr14 >> 0x20), SUB84(in_dr14, 0) - (float)((u64)dVar10 >> 0x20));
            } else {
                in_dr14 = in_dr14 - dVar10;
            }
            if (cVar14 == '\0') {
                dVar10 = (double)CONCAT44(fStack_2c, SUB84(dVar10, 0));
            } else {
                dVar10 = (double)CONCAT44(fStack_28, fStack_2c);
            }
            if (cVar13 == '\0') {
                bVar12 = SUB84(in_dr14, 0) < (float)((u64)dVar10 >> 0x20);
            } else {
                bVar12 = in_dr14 < dVar10;
            }
            if ((bVar12) && (fStack_2c = SUB84(in_dr14, 0), cVar14 != '\0')) {
                fStack_2c = SUB84(dVar9, 0);
                fStack_28 = (float)((u64)dVar9 >> 0x20);
            }
            (**(code **)(*(int *)a1[6] + 0x128))((int *)a1[6], auStack_30, iVar2, pcVar7);
            if (cVar14 == '\0') {
                dVar9 = (double)CONCAT44(*(u32 *)(a0 + 0x48), SUB84(in_dr14, 0));
            } else {
                dVar9 = *(double *)(a0 + 0x48);
            }
            if (cVar13 == '\0') {
                dVar9 = (double)CONCAT44((float)((u64)dVar9 >> 0x20) + (float)((u64)dVar10 >> 0x20), SUB84(dVar9, 0));
            } else {
                dVar9 = dVar9 + dVar10;
            }
            if (cVar14 == '\0') {
                dVar10 = (double)CONCAT44(fStack_2c, SUB84(dVar10, 0));
            } else {
                dVar10 = (double)CONCAT44(fStack_28, fStack_2c);
            }
            fVar8 = (float)((u64)dVar9 >> 0x20);
            if (cVar13 == '\0') {
                bVar12 = (float)((u64)dVar10 >> 0x20) < fVar8;
            } else {
                bVar12 = dVar10 < dVar9;
            }
            if ((bVar12) && (fStack_2c = fVar8, cVar14 != '\0')) {
                fStack_2c = SUB84(dVar9, 0);
                fStack_28 = fVar8;
            }
            a3 = (code *)a1[3];
            pcVar7 = (code *)game_uses_Vec3_assign_07baa0(a0, *(u32 *)a1[1], auStack_30, a3);
        }
        break;
    case 0x15:
        Vec3_ctor_xyz((int)&uStack_158 + 4, pcVar3, puVar5, a3);
        a3 = (code *)a1[3];
        iVar2 = (int)&uStack_158 + 4;
        pcVar7 = (code *)game_uses_Vec3_dtor_07b7d0(a0, *(u32 *)a1[1], iVar2, a3, a1[6]);
        Vec3_dtor((int)&uStack_158 + 4, 0xffffffff, iVar2, a3);
        break;
    case 0x16:
        a3 = NULL;
        CAnimBody_SetAnimation(a0 + 0xb0, 0, 0xffffffff, 0);
        timer_vec_031c74(a0, auStack_30, *(u32 *)a1[1], a3);
        pcVar7 = NULL;
        break;
    case 0x19:
        *(u32 *)(a0 + 0x214) = 0;
        iVar2 = *(int *)(a0 + 300);
        if (iVar2 == 0) {
            ar7_02 = a1[6];
            uVar1 = *(u32 *)a1[1];
            uVar6 = 0x1e;
            se_play_at_object(a0, 0x1e, uVar1, ar7_02);
            timer_stop_94(a0, uVar6, uVar1, ar7_02);
            a3 = NULL;
            uVar6 = 0xffffffff;
            CAnimBody_SetAnimation(a0 + 0xb0, 8, 0xffffffff, 0);
            uVar1 = Vec3_vec_023334(a0 + 0x14, &g_8c125e68, uVar6, a3);
            *(u32 *)(a0 + 0x220) = uVar1;
            if (*(int *)(a0 + 0x220) == 3) {
                a3 = CAnimBody_SetFrame;
                CAnimBody_SetFrame(a0 + 0xb0, a0 + 0xb0, uVar6, CAnimBody_SetFrame);
            } else {
                CAnimBody_SetFrame(a0 + 0xb0, 0xb0, uVar6, a3);
            }
            *(int *)(a0 + 300) = *(int *)(a0 + 300) + 1;
        LAB_8c070b94:
            if (*(int *)(a0 + 0x40) == 0) {
                a3 = (code *)0x12c;
                *(int *)(a0 + 300) = *(int *)(a0 + 300) + 1;
            }
        } else {
            if (iVar2 == 1)
                goto LAB_8c070b94;
            if (iVar2 == 2) {
                if (*(int *)(a0 + 0x220) == 3) {
                    a3 = (code *)(a0 + 0xb0);
                    iVar2 = CAnimBody_AdvanceFrame_033b98(a3, pcVar3, CAnimBody_AdvanceFrame_033b98, a3);
                    if (iVar2 == 1) {
                        *(u32 *)(a0 + 0x214) = 1;
                        pcVar7 = NULL;
                        *(u32 *)(a0 + 300) = 0;
                    }
                } else {
                    uVar1 = 0xb0;
                    CAnimBody_AdvanceFrame_033b98(a0 + 0xb0, 0xb0, puVar5, a3);
                    a3 = CAnimBody_GetCurFrame;
                    CAnimBody_GetCurFrame(a0 + 0xb0, uVar1, puVar5, CAnimBody_GetCurFrame);
                    if (cVar14 == '\0') {
                        dVar9 = (double)((u64)dVar9 >> 0x20);
                    }
                    if (cVar13 != '\0' || SUB84(dVar9, 0) <= 0.0) {
                        CAnimBody_SetFrame(a0 + 0xb0, a0 + 0xb0, puVar5, a3);
                        *(u32 *)(a0 + 0x214) = 1;
                        pcVar7 = NULL;
                        *(u32 *)(a0 + 300) = 0;
                    }
                }
            }
        }
        timer_vec_031c74(a0, auStack_30, *(u32 *)a1[1], a3);
        break;
    case 0x1a:
        timer_stop_94(a0, pcVar3, puVar5, a3);
        a3 = NULL;
        uVar6 = 0xffffffff;
        uVar1 = 8;
        CAnimBody_SetAnimation(a0 + 0xb0, 8, 0xffffffff, 0);
        rand_float(a0, uVar1, uVar6);
        CAnimBody_AdvanceFrame_033b98(a0 + 0xb0, a0 + 0xb0, uVar6, a3);
        timer_vec_031c74(a0, auStack_30, *(u32 *)a1[1], a3);
        break;
    case 0x1b:
        uVar1 = *(u32 *)a1[1];
        timer_vec_031c74(a0, auStack_30, uVar1, a3);
        pcVar7 = (code *)game_uses_CAnimBody_AdvanceFrame_wrapp_07d904(a0, *a1, uVar1, a3);
        break;
    case 0x1c:
        pcVar7 = (code *)timer_uses_CAnimBody_PlayToEnd_031de8(a0, 0x10, puVar5, a3);
        break;
    case 0x1e:
        uVar1 = *(u32 *)a1[1];
        timer_vec_031c74(a0, auStack_30, uVar1, a3);
        iVar2 = CAnimBody_AdvanceFrame_wrapper(a0 + 0xb0, a0 + 0xb0, uVar1, a3);
        if (iVar2 == 1) {
            pcVar7 = NULL;
        }
        break;
    case 0x1f:
        a3 = (code *)a1[6];
        pcVar7 = (code *)game_vec_07f56c(a0, *(u32 *)a1[1], auStack_30, a3, a1[3]);
    }
override_jmp_8c06fb96_case_5:
    uVar1 = 0x124;
    if (*(int *)(a0 + 0x124) != 0xc) {
        Vec3_assign(a0 + 0x80, a0 + 0x14, 0x124, a3);
    }
    object_dtor_delete(auStack_3c, 0xffffffff, uVar1, a3);
    Vec3_dtor(auStack_30, 0xffffffff, uVar1, a3);
    return pcVar7;
}
