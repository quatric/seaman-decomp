/* Seaman (USA) region 0x8c030000-0x8c040000 (Ghidra decompiler, cleaned up by tools/readable.py) */

#include "seaman.h"
#include "globals.h"

/*
 * Class_129c24_sub_0300a4  0x8c0300a4
 * area name: sits between Class_129c24 functions (same compilation unit)
 * called by: Class_12a078_ctor, Class_12c3c4_ctor, game_sub_09f3b4
 */
int Class_129c24_sub_0300a4(int a0) {
    int iVar1;
    int iVar2;

    game_sub_0fdc98(a0);
    for (iVar1 = 0; iVar1 < 0x2d; iVar1 = iVar1 + 1) {
        *(u32 *)(0x674 + a0 + iVar1 * 4) = 0;
        for (iVar2 = 0; iVar2 < 5; iVar2 = iVar2 + 1) {
            *(u32 *)(0x2f0 + iVar1 * 0x14 + a0 + iVar2 * 4) = 0;
        }
    }
    for (iVar1 = 0; iVar1 < 0x20; iVar1 = iVar1 + 1) {
        *(u8 *)(0x750 + a0 + iVar1) = 0;
        *(u8 *)(0x730 + a0 + iVar1) = 0;
        *(u8 *)(0x2c8 + a0 + iVar1) = 0;
    }
    *(u32 *)(0x2e8 + a0) = 0xffffffff;
    *(u8 *)(0x774 + a0) = 0;
    *(u32 *)(0x72c + a0) = 0;
    *(u32 *)(a0 + 0x60) = 0;
    *(u32 *)(0x770 + a0) = 0;
    *(u32 *)(0x77c + a0) = 0;
    *(u32 *)(0xb8 + a0) = 0;
    *(u32 *)(a0 + 100) = 0;
    *(u32 *)(a0 + 0x70) = 0;
    *(u32 *)(a0 + 0x68) = 3;
    *(u32 *)(0x2ec + a0) = 4;
    *(u32 *)(0x778 + a0) = 0;
    for (iVar1 = 0; iVar1 < 0x10; iVar1 = iVar1 + 1) {
        *(u8 *)(0xc8 + a0 + iVar1 * 0x20) = 0;
    }
    return a0;
}

/*
 * game_sub_0301f8  0x8c0301f8
 * area name: game code; nothing names its area yet
 * called by: Class_12a078_sub_05d860, Class_12c3c4_sub_103100
 */
int game_sub_0301f8(int a0, u32 unused_a1, u32 a2, u32 a3) {
    u32 uVar1;
    int iVar2;

    for (iVar2 = 0; iVar2 < 0x2d; iVar2 = iVar2 + 1) {
        uVar1 = (*(code *)(&libgcc_divide_helper_0101e4))(0x3e8, *(int *)(a0 + 0x60) + 1, a2, a3);
        if (uVar1 < (u32)(*(int *)(0x77c + a0) - *(int *)(0x674 + a0 + iVar2 * 4))) {
            *(u32 *)(0x674 + a0 + iVar2 * 4) = 0;
        }
    }
    *(u32 *)(0x708 + a0) = 0;
    *(u32 *)(0x724 + a0) = 0;
    *(u32 *)(0x714 + a0) = 0;
    *(u32 *)(0x710 + a0) = 0;
    if (*(int *)(0x770 + a0) == 2) {
        *(u32 *)(0x770 + a0) = 2;
    }
    if (*(int *)(0x770 + a0) == 3) {
        *(u32 *)(0x770 + a0) = 0;
        *(u32 *)(0x674 + a0 + *(int *)(0x72c + a0) * 4) = *(u32 *)(0x77c + a0);
        *(u8 *)(0x774 + a0) = 0;
        *(u32 *)(0x72c + a0) = 0;
        *(u32 *)(a0 + 0x60) = 0;
    }
    if (*(int *)(0x770 + a0) == 1) {
        *(u32 *)(0x770 + a0) = 1;
    }
    iVar2 = 0x77c;
    *(int *)(0x77c + a0) = *(int *)(0x77c + a0) + 1;
    return iVar2;
}

/*
 * talk_set_status_format  0x8c030304
 * sets the talker's line to STATUS_FORMAT
 * called by: Class_12a078_m2_05eee0, Class_12a078_m5_0671f4, Class_12a078_sub_05d860, Class_12c3c4_m5_10a0dc,
 * game_sub_0656d4, game_sub_1089e4 strings: "STATUS_FORMAT"
 */
u32 talk_set_status_format(int a0, u32 unused_a1, u32 a2, u32 a3) {
    u32 uVar1;
    int iVar2;
    u8 *puVar3;
    u8 *puVar4;
    u8 *puVar5;
    u8 auStack_28[36];

    puVar5 = auStack_28;
    puVar3 = &g_8c13292c;
    iVar2 = 0x10;
    do {
        puVar4 = puVar3 + 1;
        *puVar5 = *puVar3;
        puVar3 = puVar3 + 2;
        puVar5[1] = *puVar4;
        puVar5 = puVar5 + 2;
        iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    uVar1 = CONCAT13(g_8c13294f, CONCAT12(g_8c13294e, CONCAT11(g_8c13294d, g_8c13294c)));
    strcpy(auStack_28, a0 + 0x2c8);
    uVar1 = CONCAT31((s32)((u32)uVar1 >> 8), (char)uVar1 + *(char *)(a0 + 0x728));
    strcat(auStack_28, &stack0xffffffd4);
    strcpy(a0, auStack_28);
    *(u32 *)(a0 + 0x2ec) = 4;
    strcpy(a0 + 0x20, "STATUS_FORMAT");
    uVar1 = strcpy(a0 + 0x40, &g_8c132a22);
    return uVar1;
}

/*
 * talk_queue_mode1  0x8c0303b8
 * queues a talk line (name built from +0x2c8 and a letter) with priority a2, cancelling a pending one; sets +0x770 = 1
 * called by: Class_12a078_sub_05d860, Class_12a078_sub_05f660, Vec3_sub_063838, game_sub_0611cc, game_sub_062b0c,
 * game_sub_064bb4, game_sub_1063a8, game_sub_106f58 (+1 more)
 */
u32 talk_queue_mode1(int a0, u32 a1, int a2, u32 a3, u32 s0) {
    int iVar1;
    u32 uVar2;
    u32 uVar3;
    int iVar4;
    u8 *puVar5;
    u8 *puVar6;
    u8 *puVar7;
    u32 uVar8;
    u8 auStack_34[36];

    puVar7 = auStack_34;
    puVar5 = &g_8c132950;
    iVar4 = 0x10;
    do {
        puVar6 = puVar5 + 1;
        *puVar7 = *puVar5;
        puVar5 = puVar5 + 2;
        puVar7[1] = *puVar6;
        puVar7 = puVar7 + 2;
        iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
    uVar8 = CONCAT13(g_8c132973, CONCAT12(g_8c132972, CONCAT11(g_8c132971, g_8c132970)));
    iVar4 = a2;
    uVar3 = a3;
    if (0 < a2) {
        iVar4 = 0;
        talk_sub_030550(a0, a1, 0);
    }
    if ((((*(int *)(a0 + 0x2e8) == -1) && (iVar1 = talk_sub_030538(a0, a1), iVar1 == 0)) &&
         (*(int *)(a0 + 0x770) == 0)) &&
        ((*(int *)(a0 + 0x778) == 0 && (*(int *)(a0 + 0x60) <= a2)))) {
        uVar2 = talk_event_priority(a0, a3, iVar4, uVar3);
        *(u32 *)(a0 + 0x2ec) = uVar2;
        *(u32 *)(a0 + 0x72c) = a1;
        *(u32 *)(a0 + 0x770) = 1;
        *(int *)(a0 + 0x60) = a2;
        strcpy(auStack_34, a0 + 0x2c8);
        uVar8 = CONCAT31((s32)((u32)uVar8 >> 8), (char)uVar8 + *(char *)(a0 + 0x728));
        strcat(auStack_34, &stack0xffffffb4);
        strcpy(a0, auStack_34);
        strcpy(a0 + 0x20, a3);
        strcpy(a0 + 0x40, s0);
        uVar3 = talk_event_priority(a0, a3, iVar4, uVar3);
        *(u32 *)(a0 + 0x2ec) = uVar3;
        *(u32 *)(*(int *)(a0 + 0x72c) * 0x14 + a0 + *(int *)(a0 + 0x60) * 4 + 0x2f0) = 1;
        return 1;
    }
    return 0;
}

/*
 * talk_sub_030538  0x8c030538
 * area name: sits between talk functions (same compilation unit)
 * called by: talk_queue_mode1, talk_queue_mode2
 */
u32 talk_sub_030538(int a0, int a1) {
    return *(u32 *)(0x674 + a0 + a1 * 4);
}

/*
 * talk_sub_030550  0x8c030550
 * area name: sits between talk functions (same compilation unit)
 * called by: talk_queue_mode1, talk_start_line
 */
int talk_sub_030550(int a0, int a1, u32 a2) {
    int iVar1;

    iVar1 = 0x674;
    *(u32 *)(0x674 + a0 + a1 * 4) = a2;
    return iVar1;
}

/*
 * talk_queue_mode2  0x8c030568
 * same as talk_queue_mode1 without the cancel; sets +0x770 = 2
 * called by: Class_12c3c4_sub_104854, game_sub_05f4a0, game_sub_0611cc, game_sub_065e6c, game_sub_10469c,
 * game_sub_1091cc
 */
u32 talk_queue_mode2(int a0, u32 a1, int a2, u32 a3, u32 s0) {
    int iVar1;
    u32 uVar2;
    u32 uVar3;
    int iVar4;
    u8 *puVar5;
    u8 *puVar6;
    u8 *puVar7;
    u32 ar7_00;
    u8 auStack_34[36];

    puVar7 = auStack_34;
    puVar5 = &g_8c132974;
    iVar4 = 0x10;
    do {
        puVar6 = puVar5 + 1;
        *puVar7 = *puVar5;
        puVar5 = puVar5 + 2;
        puVar7[1] = *puVar6;
        puVar7 = puVar7 + 2;
        iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
    uVar3 = CONCAT13(g_8c132997, CONCAT12(g_8c132996, CONCAT11(g_8c132995, g_8c132994)));
    if ((((*(int *)(a0 + 0x2e8) == -1) && (iVar4 = a2, ar7_00 = a3, iVar1 = talk_sub_030538(a0, a1), iVar1 == 0)) &&
         (*(int *)(a0 + 0x770) == 0)) &&
        ((*(int *)(a0 + 0x778) == 0 && (*(int *)(a0 + 0x60) <= a2)))) {
        uVar2 = talk_event_priority(a0, a3, iVar4, ar7_00);
        *(u32 *)(a0 + 0x2ec) = uVar2;
        *(u32 *)(a0 + 0x72c) = a1;
        *(u32 *)(a0 + 0x770) = 2;
        *(int *)(a0 + 0x60) = a2;
        strcpy(auStack_34, a0 + 0x2c8);
        uVar3 = CONCAT31((s32)((u32)uVar3 >> 8), (char)uVar3 + *(char *)(a0 + 0x728));
        strcat(auStack_34, &stack0xffffffb4);
        strcpy(a0, auStack_34);
        strcpy(a0 + 0x20, a3);
        strcpy(a0 + 0x40, s0);
        uVar3 = talk_event_priority(a0, a3, iVar4, ar7_00);
        *(u32 *)(a0 + 0x2ec) = uVar3;
        *(u32 *)(*(int *)(a0 + 0x72c) * 0x14 + a0 + *(int *)(a0 + 0x60) * 4 + 0x2f0) = 1;
        return 1;
    }
    return 0;
}

/*
 * talk_start_line  0x8c0306d4
 * starts the talk line through speech_restart when the talker is idle (+0x774, +0x778 clear)
 * called by: Class_12a078_sub_05d860, Class_12a078_sub_05f660, Class_12c3c4_sub_103100, Class_12c3c4_sub_104854,
 * game_sub_0611cc, game_sub_0628a4, game_sub_062b0c, game_sub_064bb4 (+9 more)
 */
u32 talk_start_line(int a0, u32 a1, u32 a2, u32 a3) {
    u32 uVar1;
    u32 uVar2;
    u8 *puVar3;
    u8 *puVar4;
    u8 *puVar5;
    int iVar6;
    u32 ar7_00;
    u32 uVar7;
    u32 in_stack_00000000;
    u8 auStack_3c[36];

    puVar3 = auStack_3c;
    iVar6 = 0x10;
    puVar5 = (&DATA_8c132998);
    do {
        puVar4 = puVar5 + 1;
        *puVar3 = *puVar5;
        puVar5 = puVar5 + 2;
        puVar3[1] = *puVar4;
        puVar3 = puVar3 + 2;
        iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
    uVar7 = 0;
    if ((*(char *)(0x774 + a0) == '\0') && (*(int *)(0x778 + a0) == 0)) {
        uVar2 = a2;
        ar7_00 = a3;
        uVar1 = talk_event_priority(a0, a3, a2, a3);
        *(u32 *)(0x2ec + a0) = uVar1;
        if (*(int *)(0x2e8 + a0) == -1) {
            if (*(int *)(0x2e8 + a0) == -1) {
                set_field_770(a0, 0, uVar2, ar7_00);
                talk_sub_030550(a0, a1, 0);
                uVar7 = talk_sub_03087c(a0, a1, a2, a3, in_stack_00000000);
                *(u32 *)(0xb0 + a0) = 0;
                *(u32 *)(a0 + 0x60) = a2;
                iVar6 = a0;
                uVar2 = (*(code *)(&speech_restart))(0x8c35468c, *(u32 *)(0x2ec + a0), a0, a3);
                *(u32 *)(0x2e8 + a0) = uVar2;
                set_field_770(a0, 2, iVar6, a3);
                if (*(int *)(0x2e8 + a0) != -1) {
                    *(u8 *)(0x774 + a0) = 1;
                }
            }
        } else {
            *(u32 *)(0x2e8 + a0) = 0xffffffff;
            uVar7 = 0;
            talk_sub_030550(a0, a1, 0);
            set_field_770(a0, 0, uVar7, ar7_00);
            uVar2 = a2;
            uVar7 = talk_sub_03087c(a0, a1, a2, a3, in_stack_00000000);
            *(u32 *)(0xb0 + a0) = 0;
            *(u32 *)(a0 + 0x60) = a2;
            set_field_770(a0, 2, uVar2, a3);
            uVar2 = speech_restart(0x8c35468c, *(u32 *)(0x2ec + a0), a0, a3);
            *(u32 *)(0x2e8 + a0) = uVar2;
            if (*(int *)(0x2e8 + a0) != -1) {
                *(u8 *)(0x774 + a0) = 1;
            }
        }
    }
    return uVar7;
}

/*
 * set_field_770  0x8c030870
 * called by: Class_12a078_m2_05eee0, Class_12a078_m5_0671f4, Class_12a078_sub_05d860, Class_12c3c4_m2_104264,
 * Class_12c3c4_m5_10a0dc, Class_12c3c4_sub_103100, Vec3_sub_063838, game_sub_05f4a0 (+12 more)
 */
int set_field_770(int a0, u32 a1, u32 a2, u32 a3) {
    int iVar1;

    iVar1 = 0x770;
    *(u32 *)(0x770 + a0) = a1;
    return iVar1;
}

/*
 * talk_sub_03087c  0x8c03087c
 * area name: sits between talk functions (same compilation unit)
 * called by: talk_start_line
 */
u32 talk_sub_03087c(int a0, u32 a1, u32 a2, u32 a3, u32 s0) {
    u32 uVar1;
    int iVar2;
    u8 *puVar3;
    u8 *puVar4;
    u8 *puVar5;
    u32 ar7_00;
    char cStack_40;
    int iStack_3c;
    int iStack_38;
    u32 uStack_30;
    u8 auStack_2c[36];

    puVar5 = auStack_2c;
    puVar3 = &g_8c1329bc;
    iVar2 = 0x10;
    do {
        puVar4 = puVar3 + 1;
        *puVar5 = *puVar3;
        puVar3 = puVar3 + 2;
        puVar5[1] = *puVar4;
        puVar5 = puVar5 + 2;
        iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    cStack_40 = g_8c1329dc;
    if (((*(int *)(a0 + 0x2e8) == -1) && (*(int *)(a0 + 0x770) == 0)) && (*(int *)(a0 + 0x778) == 0)) {
        uVar1 = a2;
        ar7_00 = a3;
        uStack_30 = talk_event_priority(a0, a3, a2, a3);
        *(u32 *)(a0 + 0x2ec) = uStack_30;
        *(u32 *)(a0 + 0x72c) = a1;
        *(u32 *)(a0 + 0x770) = 2;
        *(u32 *)(a0 + 0x60) = a2;
        strcpy(auStack_2c, a0 + 0x2c8);
        cStack_40 = cStack_40 + *(char *)(a0 + 0x728);
        strcat(auStack_2c, &cStack_40);
        strcpy(a0, auStack_2c);
        strcpy(a0 + 0x20, a3);
        strcpy(a0 + 0x40, s0);
        iStack_38 = *(int *)(a0 + 0x72c);
        iStack_3c = *(int *)(a0 + 0x60);
        *(u32 *)(iStack_38 * 0x14 + a0 + iStack_3c * 4 + 0x2f0) = 1;
        uVar1 = talk_event_priority(a0, a3, uVar1, ar7_00);
        *(u32 *)(a0 + 0x2ec) = uVar1;
        uVar1 = 1;
    } else {
        uVar1 = 0;
    }
    return uVar1;
}

/*
 * talk_sub_0309c8  0x8c0309c8
 * name hint from a string it uses: JUNGLE; area name: sits between talk functions (same compilation unit)
 * called by: game_sub_0652f4, game_sub_10862c
 * strings: "JUNGLE"; "start"
 */
u32 talk_sub_0309c8(int a0, u32 a1, u32 a2, u32 a3) {
    u32 uVar1;
    int iVar2;
    u8 *puVar3;
    u8 *puVar4;
    u8 *puVar5;
    u8 auStack_2b[39];

    puVar5 = auStack_2b;
    puVar3 = &g_8c1329e0;
    iVar2 = 0x10;
    do {
        puVar4 = puVar3 + 1;
        *puVar5 = *puVar3;
        puVar3 = puVar3 + 2;
        puVar5[1] = *puVar4;
        puVar5 = puVar5 + 2;
        iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    uVar1 = CONCAT13(g_8c132a02, CONCAT12(g_8c132a01, CONCAT11(g_8c132a00, (char)a1)));
    if (((*(int *)(a0 + 0x2e8) == -1) && (*(int *)(a0 + 0x770) == 0)) && (*(int *)(a0 + 0x778) == 0)) {
        *(u32 *)(a0 + 0x60) = 0;
        if ((char)a1 == '\x01') {
            strcpy(a0, "JUNGLE");
        } else {
            strcpy(auStack_2b, a0 + 0x2c8);
            uVar1 = CONCAT22((short)((u32)uVar1 >> 0x10),
                             CONCAT11((char)((u32)uVar1 >> 8) + *(char *)(a0 + 0x728), (char)uVar1));
            strcat(auStack_2b, &stack0xffffffd1);
            strcpy(a0, auStack_2b);
        }
        strcpy(a0 + 0x20, &g_8c132a2b);
        strcpy(a0 + 0x40, "start");
        uVar1 = 1;
    } else {
        uVar1 = 0;
    }
    return uVar1;
}

/*
 * talk_event_priority  0x8c030ac4
 * 5 for the scripted events (EVENT_ROCK_PUSH, EVENT_QUIZ, EVENT_ENDING, ...), 4 for anything else
 * called by: talk_queue_mode1, talk_queue_mode2, talk_start_line, talk_sub_03087c
 * strings: "EVENT_ROCK_PUSH"; "EVENT_GET_WORMBOX"; "EVENT_GET_SPRINKLER"; "EVENT_JUNGLE_JUMP" ...
 */
u32 talk_event_priority(u32 unused_a0, u32 a1, u32 a2, u32 a3) {
    int iVar1;
    u32 uVar2;

    iVar1 = strcmp_030c9c(a1, "EVENT_ROCK_PUSH");
    if (((((((iVar1 == 0) || (iVar1 = strcmp_030c9c(a1, "EVENT_GET_WORMBOX"), iVar1 == 0)) ||
            (iVar1 = strcmp_030c9c(a1, "EVENT_GET_SPRINKLER"), iVar1 == 0)) ||
           ((iVar1 = strcmp_030c9c(a1, "EVENT_JUNGLE_JUMP"),
             iVar1 == 0 || (iVar1 = strcmp_030c9c(a1, "EVENT_LAST_TALK"), iVar1 == 0)))) ||
          ((iVar1 = (*(code *)(&strcmp_030c9c))(a1, "EVENT_JUMP_HALF_SUCCESS", a2, a3),
            iVar1 == 0 || ((iVar1 = (*(code *)(&strcmp_030c9c))(a1, "EVENT_JUMP_FAIL", a2, a3),
                            iVar1 == 0 || (iVar1 = (*(code *)(&strcmp_030c9c))(a1, "EVENT_USER_ROCK_PUSH", a2, a3),
                                           iVar1 == 0)))))) ||
         (iVar1 = (*(code *)(&strcmp_030c9c))(a1, "EVENT_WANT_LAND", a2, a3), iVar1 == 0)) ||
        ((((iVar1 = (*(code *)(&strcmp_030c9c))(a1, "EVENT_AFTER_ROCK_PUSH", a2, a3),
            iVar1 == 0 || (iVar1 = (*(code *)(&strcmp_030c9c))(a1, "EVENT_LANDING", a2, a3), iVar1 == 0)) ||
           (iVar1 = (*(code *)(&strcmp_030c9c))(a1, "EVENT_JUMP3", a2, a3), iVar1 == 0)) ||
          (((iVar1 = (*(code *)(&strcmp_030c9c))(a1, "EVENT_JUMP1", a2, a3),
             iVar1 == 0 || (iVar1 = (*(code *)(&strcmp_030c9c))(a1, "EVENT_JUMP2", a2, a3), iVar1 == 0)) ||
            ((iVar1 = (*(code *)(&strcmp_030c9c))(a1, "EVENT_ENDING", a2, a3),
              iVar1 == 0 ||
                  ((iVar1 = (*(code *)(&strcmp_030c9c))(a1, "EVENT_QUIZ", a2, a3),
                    iVar1 == 0 || (iVar1 = (*(code *)(&strcmp_030c9c))(a1, "EVENT_ROCK_PUSH_INTERVAL", a2, a3),
                                   iVar1 == 0)))))))))) {
        uVar2 = 5;
    } else {
        uVar2 = 4;
    }
    return uVar2;
}

/*
 * strcmp_030c9c  0x8c030c9c
 * called by: talk_event_priority
 */
u32 strcmp_030c9c(u8 *a0, u8 *a1) {
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
 * set_field_728_u8  0x8c030d04
 * called by: Class_12a078_sub_05d860, Class_12c3c4_sub_103100
 */
int set_field_728_u8(int a0, u32 a1) {
    int iVar1;

    iVar1 = 0x728;
    *(u8 *)(0x728 + a0) = (u8)a1;
    return iVar1;
}

/*
 * Class_12c3c4_load_record  0x8c030d10
 * loads two bytes and a word from the record a1 into +0x64, +0x68, +0x6c
 * called by: Class_12a078_m7_067158, Class_12c3c4_m7_109f70, Class_12c3c4_m9_10a00c, game_sub_0a06c0
 */
u32 Class_12c3c4_load_record(int a0, char *a1) {
    *(int *)(a0 + 100) = (int)*a1;
    *(int *)(a0 + 0x68) = (int)a1[1];
    *(u32 *)(a0 + 0x6c) = *(u32 *)(a1 + 4);
    return 0x6c;
}

/*
 * Class_12c3c4_save_record  0x8c030d2c
 * saves +0x64 and +0x6c into the record a1 (second byte 3)
 * called by: Class_12a078_m8_0671a8, Class_12c3c4_m10_10a074, Class_12c3c4_m8_109fc0, game_sub_0a06f8
 */
u32 Class_12c3c4_save_record(int a0, u8 *a1) {
    u32 uVar1;

    *a1 = (char)*(u32 *)(a0 + 100);
    a1[1] = 3;
    uVar1 = *(u32 *)(a0 + 0x6c);
    *(u32 *)(a1 + 4) = uVar1;
    return uVar1;
}

/*
 * set_fields_0_1_4  0x8c030d44
 * stores +0x0, +0x1, +0x4
 * called by: game_sub_02ff40
 */
u8 *set_fields_0_1_4(u8 *a0) {
    *a0 = 0;
    a0[1] = 0;
    *(u32 *)(a0 + 4) = 0;
    return a0;
}

/*
 * Class_12c3c4_sub_030d58  0x8c030d58
 * area name: sits between Class_12c3c4 functions (same compilation unit)
 */
u32 Class_12c3c4_sub_030d58(u32 unused_a0, u32 a1, u32 a2, u32 a3) {
    u32 uVar1;
    code *pcVar2;
    u32 uVar3;
    char cVar4;

    cVar4 = '\0';
    uVar1 = Vec3_ctor_xyz(&g_8c125b58, a1, a2, a3);
    uVar3 = 0x8c27d500;
    pcVar2 = Vec3_dtor;
    global_list_push(uVar1, Vec3_dtor, 0x8c27d500, a3);
    uVar1 = Vec3_ctor_xyz(&g_8c125b68, pcVar2, uVar3, a3);
    uVar3 = 0x8c27d50c;
    pcVar2 = Vec3_dtor;
    global_list_push(uVar1, Vec3_dtor, 0x8c27d50c, a3);
    uVar1 = Vec3_ctor_xyz(&g_8c125b78, pcVar2, uVar3, a3);
    uVar3 = 0x8c27d518;
    pcVar2 = Vec3_dtor;
    global_list_push(uVar1, Vec3_dtor, 0x8c27d518, a3);
    uVar1 = Vec3_ctor_xyz(&g_8c125b88, pcVar2, uVar3, a3);
    global_list_push(uVar1, Vec3_dtor, 0x8c27d524, a3);
    if (cVar4 == '\0') {
        g_8c125b98 = CONCAT44(_UNK_8c125b9c, 0x800000);
        /* WARNING: Read-only address (ram,0x8c125b9c) is written */
    } else {
        g_8c125b98 = 0xffffffff00800000;
    }
    return 0x8c125864;
}

/*
 * CAnimal_sub_030e10  0x8c030e10
 * area name: only called from CAnimal methods
 * called by: CAnimal_m2_02573c, CAnimal_m3_026078
 */
int CAnimal_sub_030e10(int a0) {
    u32 extraout_fr1;
    char cVar1;

    cVar1 = '\0';
    clear_3_words_102748(a0);
    if (cVar1 == '\0') {
        *(u32 *)(a0 + 0xc) = 0;
    } else {
        *(u64 *)(a0 + 0xc) = (u64)extraout_fr1;
    }
    return a0;
}

/*
 * set_6_floats  0x8c030e34
 * a0[0..5] = fr4..fr9
 * called by: Class_12ad14_sub_0a4448, game_sub_05d2bc, game_sub_084bcc, game_sub_098b6c, game_sub_0ab5c0,
 * game_sub_0b590c
 */
u32 *set_6_floats(u32 *a0) {
    u32 in_fr5;
    u32 in_fr4;
    u32 in_fr7;
    u32 in_fr6;
    u32 in_fr9;
    u32 in_fr8;

    *a0 = in_fr4;
    a0[1] = in_fr5;
    a0[2] = in_fr6;
    a0[3] = in_fr7;
    a0[4] = in_fr8;
    a0[5] = in_fr9;
    return a0;
}

/*
 * CAnimal_sub_030e5c  0x8c030e5c
 * area name: only called from CAnimal methods
 * called by: CAnimal_m2_02573c, CAnimal_m3_026078
 */
u32 *CAnimal_sub_030e5c(u32 *a0) {
    *a0 = 0;
    a0[1] = 0;
    a0[2] = 0;
    a0[6] = 0;
    a0[3] = 0;
    a0[4] = 3;
    a0[5] = 0;
    a0[7] = 0;
    a0[8] = 0;
    a0[9] = 0x3f800000;
    *(u8 *)(a0 + 10) = 1;
    return a0;
}

/*
 * flags6_set_all_wrap  0x8c030e9c
 * only calls flags6_set_all
 * called by: Class_129cbc_ctor
 */
u32 flags6_set_all_wrap(u32 a0, u32 a1, u32 a2) {
    flags6_set_all(a0, a1, a2);
    return a0;
}

/*
 * flags6_set_all  0x8c030eb8
 * sets bits 0..5 of *a0
 * called by: Class_12a25c_sub_06f93c, Class_12a76c_sub_08dd98, Vec3_sub_03f4a4, flags6_set_all_wrap, game_sub_032160,
 * game_sub_04ddd4, game_sub_04f034, game_sub_054a14 (+14 more)
 */
u32 flags6_set_all(u8 *a0, u32 a1, u32 a2) {
    u32 uVar1;

    *a0 = *a0 & 0xfe | 1;
    *a0 = *a0 & 0xfd | 2;
    *a0 = *a0 & 0xfb | 4;
    *a0 = *a0 & 0xf7 | 8;
    *a0 = *a0 & 0xef | 0x10;
    uVar1 = *a0 & 0xffffffdf | 0x20;
    *a0 = (u8)uVar1;
    return uVar1;
}

/*
 * flags6_clear_all  0x8c030f2c
 * clears bits 0..5 of *a0
 * called by: Vec3_sub_03f4a4, game_sub_04f034, game_sub_055c38, game_sub_0564c4, game_sub_058d60, game_sub_0593cc,
 * game_sub_059fc4, game_sub_078fd0 (+10 more)
 */
u32 flags6_clear_all(u8 *a0, u32 a1, u32 a2, u32 a3) {
    u8 bVar1;

    *a0 = *a0 & 0xfe;
    *a0 = *a0 & 0xfd;
    *a0 = *a0 & 0xfb;
    *a0 = *a0 & 0xf7;
    *a0 = *a0 & 0xef;
    bVar1 = *a0;
    *a0 = (u8)(bVar1 & 0xffffffdf);
    return bVar1 & 0xffffffdf;
}

/*
 * Class_129cbc_ctor  0x8c030fa0
 * stores the vtable 0x8c129cbc and constructs the object's Vec3 members
 * called by: CSquid_sub_0afa50, game_sub_0384f8, game_sub_03a5a4, game_sub_06e4ec, game_sub_087ed0, game_sub_08dad4,
 * game_sub_099e74, game_sub_09b8e4 (+3 more)
 */
u32 *Class_129cbc_ctor(u32 *a0, u32 a1, u32 a2, u32 a3) {
    *a0 = (&DATA_8c129cbc);
    Vec3_ctor_zero(a0 + 1, a1, a2);
    Vec3_ctor_zero(a0 + 5, a1, a2);
    Vec3_ctor_zero(a0 + 0x15, a1, a2);
    Vec3_ctor_zero(a0 + 0x1b, a1, a2);
    Vec3_ctor_zero((int)a0 + 0x80, a1, a2);
    Vec3_ctor_zero((int)a0 + 0x90, a1, a2);
    Class_129cbc_sub_033954((int)a0 + 0xb0);
    Vec3_ctor_zero((int)a0 + 0x13c, a1, a2);
    Vec3_set_zero((int)a0 + 0x14c);
    Vec3_set_zero((int)a0 + 0x158);
    Vec3_ctor_zero((int)a0 + 0x168, a1, a2);
    clear_field_0_wrap_015ab8((int)a0 + 0x1b0);
    Vec3_ctor_zero((int)a0 + 0x1d8, a1, a2);
    Vec3_set_zero((int)a0 + 0x1ec);
    flags6_set_all_wrap((int)a0 + 0x1fc, a1, a2);
    Vec3_ctor_zero((int)a0 + 0x200, a1, a2);
    Class_129cbc_sub_0310c0(a0, a1, a2, a3);
    return a0;
}

/*
 * Class_129cbc_sub_0310c0  0x8c0310c0
 * area name: only called from Class_129cbc methods
 * called by: Class_129cbc_ctor
 */
u32 Class_129cbc_sub_0310c0(int a0, u32 a1, u32 a2, u32 a3) {
    u32 in_fr1;
    char cVar1;

    cVar1 = '\0';
    Vec3_assign_f(a0 + 0x14, a1, a2, a3);
    Vec3_assign(a0 + 0x80, a0 + 0x14, a2, a3);
    if (cVar1 == '\0') {
        *(u32 *)(a0 + 0x24) = 0x41200000;
    } else {
        in_fr1 = 0x41200000;
        *(u64 *)(a0 + 0x24) = 0x41f0000041200000;
    }
    if (cVar1 == '\0') {
        *(u32 *)(a0 + 0x28) = 0;
    } else {
        *(u64 *)(a0 + 0x28) = (u64)in_fr1;
    }
    if (cVar1 == '\0') {
        *(u32 *)(a0 + 0x2c) = 0x3f800000;
    } else {
        *(u64 *)(a0 + 0x2c) = CONCAT44(0x3f800000, in_fr1);
    }
    if (cVar1 == '\0') {
        *(u32 *)(a0 + 0x30) = 0x3f800000;
        *(u32 *)(a0 + 0x34) = 0x41f00000;
        *(u32 *)(a0 + 0x38) = 0x42700000;
    } else {
        *(u64 *)(a0 + 0x30) = CONCAT44(0x3f800000, in_fr1);
        *(u64 *)(a0 + 0x34) = 0x4270000041f00000;
        in_fr1 = 0x42700000;
        *(u64 *)(a0 + 0x38) = 0x12442700000;
    }
    if (cVar1 == '\0') {
        *(u32 *)(a0 + 0x3c) = 0;
    } else {
        *(u64 *)(a0 + 0x3c) = (u64)in_fr1;
    }
    *(u32 *)(a0 + 0x40) = 0;
    *(u32 *)(a0 + 0x44) = 0;
    *(u32 *)(a0 + 0x124) = 0;
    *(u32 *)(a0 + 300) = 0;
    *(u32 *)(a0 + 0x138) = 0;
    *(u32 *)(a0 + 0x134) = 0;
    if (cVar1 == '\0') {
        *(u32 *)(a0 + 0x130) = 0x42480000;
    } else {
        in_fr1 = 0x42480000;
        *(u64 *)(a0 + 0x130) = 0xa042480000;
    }
    if (cVar1 == '\0') {
        *(u32 *)(a0 + 0x48) = 0x3f800000;
    } else {
        *(u64 *)(a0 + 0x48) = CONCAT44(0x3f800000, in_fr1);
    }
    if (cVar1 == '\0') {
        *(u32 *)(a0 + 0xa0) = 0;
    } else {
        *(u64 *)(a0 + 0xa0) = (u64)in_fr1;
    }
    if (cVar1 == '\0') {
        *(u32 *)(a0 + 0xa8) = 0;
    } else {
        *(u64 *)(a0 + 0xa8) = (u64)in_fr1;
    }
    if (cVar1 == '\0') {
        *(u32 *)(a0 + 0xac) = 0;
    } else {
        *(u64 *)(a0 + 0xac) = (u64)in_fr1;
    }
    *(u32 *)(a0 + 0x128) = 0;
    *(u32 *)(a0 + 100) = 3;
    *(u32 *)(a0 + 0x68) = 0;
    if (cVar1 == '\0') {
        *(u32 *)(a0 + 0x7c) = 0;
    } else {
        *(u64 *)(a0 + 0x7c) = (u64)in_fr1;
    }
    *(u32 *)(a0 + 0x1d4) = 0;
    *(u32 *)(a0 + 0x1e8) = 0;
    if (cVar1 == '\0') {
        *(u32 *)(a0 + 0x1f8) = 0;
    } else {
        *(u64 *)(a0 + 0x1f8) = (u64)in_fr1;
    }
    *(u8 *)(a0 + 0x210) = 1;
    *(u32 *)(a0 + 0x214) = 1;
    *(u32 *)(a0 + 0x218) = 0;
    *(u32 *)(a0 + 0x21c) = 0;
    *(u32 *)(a0 + 0x178) = 0;
    *(u32 *)(a0 + 0x1a8) = 0xffffffff;
    *(u32 *)(a0 + 0x1a4) = 0xffffffff;
    *(int *)(a0 + 0x17c) = a0 + 0x18c;
    *(int *)(a0 + 0x180) = a0 + 0x1a4;
    *(u32 *)(a0 + 0x184) = 0;
    *(u32 *)(a0 + 0x188) = 2;
    *(u32 *)(a0 + 0x1ac) = 0;
    set_field_0_015ad4(a0 + 0x1b0, &g_8c12f2cc, a2);
    *(u32 *)(a0 + 0x1b4) = 0;
    *(u32 *)(a0 + 0x1b8) = 0;
    *(u32 *)(a0 + 0x1bc) = 0;
    *(u32 *)(a0 + 0x1c0) = 0;
    *(u32 *)(a0 + 0x1c4) = 0;
    *(u32 *)(a0 + 0x1c8) = 0;
    *(u32 *)(a0 + 0x1cc) = 0;
    *(u32 *)(a0 + 0x1d0) = 0;
    return 0x1d0;
}

/*
 * Class_129cbc_dtor  0x8c0312f4
 * stores the vtable 0x8c129cbc
 * called by: CAnimal_m0_038648, CAnimal_m0_08800c, Class_12a03c_dtor, Class_12a25c_dtor, Class_12a76c_dtor,
 * Class_12a7f4_m0_099fd8, Class_12a990_m0_09bb44, Class_12ad14_dtor (+3 more)
 */
u32 *Class_129cbc_dtor(u32 *a0, u32 a1, u32 a2, u32 a3) {
    u32 ar5_00;
    u32 in_stack_fffffff4;
    u32 ain0;

    ain0 = CONCAT22((short)((u32)in_stack_fffffff4 >> 0x10), (u16)a1);
    if (a0 != NULL) {
        *a0 = &g_8c129cbc;
        Vec3_dtor(a0 + 0x80, 0xffffffff, a2, a3);
        object_dtor_delete(a0 + 0x7b, 0xffffffff, a2, a3);
        Vec3_dtor(a0 + 0x76, 0xffffffff, a2, a3);
        free_if_nonnull_wrap_016bfc(a0 + 0x6c, 0xffffffff, a2, a3);
        Vec3_dtor(a0 + 0x5a, 0xffffffff, a2, a3);
        object_dtor_delete(a0 + 0x56, 0xffffffff, a2, a3);
        object_dtor_delete(a0 + 0x53, 0xffffffff, a2, a3);
        Vec3_dtor(a0 + 0x4f, 0xffffffff, a2, a3);
        Class_129cf8_dtor(a0 + 0x2c, 0xffffffff, a2, a3);
        Vec3_dtor(a0 + 0x24, 0xffffffff, a2, a3);
        Vec3_dtor(a0 + 0x20, 0xffffffff, a2, a3);
        Vec3_dtor(a0 + 0x1b, 0xffffffff, a2, a3);
        Vec3_dtor(a0 + 0x15, 0xffffffff, a2, a3);
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
 * set_field_128  0x8c031434
 */
int set_field_128(int a0, u32 a1) {
    int iVar1;

    iVar1 = 0x128;
    *(u32 *)(0x128 + a0) = a1;
    return iVar1;
}

/*
 * Class_129cbc_m5_031440  0x8c031440
 */
u32 Class_129cbc_m5_031440(int a0) {
    int iVar1;
    int iVar2;
    u32 uVar3;
    u32 ar7_00;

    iVar1 = get_field_10_031590(a0 + 0xb0);
    ar7_00 = 0;
    uVar3 = 0xffffffff;
    iVar1 = iVar1 + -1;
    iVar2 = (*(code *)(&CAnimBody_SetAnimation))(a0 + 0xb0, iVar1, 0xffffffff, 0);
    if (iVar2 != 6) {
        iVar1 = get_field_1c_026dd8(a0 + 0xb0, iVar1, uVar3);
        get_motion_data(a0 + 0xb0, iVar1, uVar3, ar7_00);
        CAnimBody_SetFrame(a0 + 0xb0, iVar1, uVar3, ar7_00);
    }
    uVar3 = (*(code *)(&CAnimBody_AdvanceFrame_033b98))(a0 + 0xb0, iVar1, uVar3, ar7_00);
    return uVar3;
}

/*
 * get_motion_data  0x8c0314f8
 * motion data entry a1 of the object's table; reports "Check This Motion Data" when it is missing
 * called by: CAnimBody_AdvanceFrame_033b98, CAnimBody_SetFrame, CAnimBody_SetInterpolate, CAnimBody_sub_033d34,
 Class_129cbc_m5_031440, Class_12ad14_m3_0a427c, Class_12ad14_m4_0a43d4, Vec3_sub_03f4a4 (+21 more)
 * strings: ",a1);
    (*(code *)(&report_error_message))
              ("
 */
u32 get_motion_data(int a0, int a1, u32 a2, u32 a3) {
    u32 uVar1;
    u8 auStack_24[8];
    int iStack_10;
    iStack_10 = deref_u32(*(int *)(a0 + 0x14) + a1 * 4);
    if (iStack_10 == 0) {
        (*(code *)(&sprintf))(auStack_24, "%d", a1);
        (*(code *)(&report_error_message))("Check This Motion Data ->", auStack_24, 1, 2, 5);
    }
    uVar1 = get_field_4_of_field_0(*(int *)(a0 + 0x14) + a1 * 4);
    return uVar1;
}

/*
 * CAnimBody_CheckThisMotionData  0x8c0314fc
 * strings: ");
    a3 = 2;
    a2 = 1;
    ar5_00 = auStack_1c;
    (*(c"
 */
u32 CAnimBody_CheckThisMotionData(int a0, u8 *a1, u32 a2, u32 a3) {
    u32 uVar1;
    u8 *ar5_00;
    u8 auStack_1c[8];
    int iStack_8;

    ar5_00 = a1;
    iStack_8 = deref_u32(*(int *)(a0 + 0x14) + (int)a1 * 4);
    if (iStack_8 == 0) {
        (*(code *)(&sprintf))(auStack_1c, ar5_00, a2, a3, "%d");
        a3 = 2;
        a2 = 1;
        ar5_00 = auStack_1c;
        (*(code *)(&report_error_message))("Check This Motion Data ->", ar5_00, 1, 2);
    }
    uVar1 = get_field_4_of_field_0(*(int *)(a0 + 0x14) + (int)a1 * 4);
    return uVar1;
}

/*
 * get_field_4_of_field_0  0x8c031588
 * (*a0)->+4
 * called by: CAnimBody_CheckThisMotionData, Class_12a7f4_m2_09a060, Class_12a7f4_m3_09a558, Class_12ad50_m2_0a4fdc,
 * Class_12b930_sub_0d9600, game_sub_0cbd74, get_motion_data
 */
u32 get_field_4_of_field_0(int *a0) {
    return *(u32 *)(*a0 + 4);
}

/*
 * get_field_10_031590  0x8c031590
 * called by: Class_129cbc_m5_031440, Class_12b2ac_m5_0afddc
 */
u32 get_field_10_031590(int a0) {
    return *(u32 *)(a0 + 0x10);
}

/*
 * Class_129cbc_m1_031598  0x8c031598
 * called by: Class_12a03c_m1_03c43c, Class_12a25c_m1_06f530, Class_12ad14_m1_0a09e8, Class_12b088_m1_0a6468,
 * Class_12b2ac_m1_0aff3c
 */
u32 Class_129cbc_m1_031598(int a0, int a1, u32 a2, u32 a3) {
    u32 uVar1;
    u8 auStack_40[16];
    u8 auStack_30[12];
    u8 auStack_24[16];
    u8 auStack_14[16];

    *(u8 *)(0x210 + a0) = *(u8 *)(a1 + 0x28);
    vec3_copy_8c02b5fc(auStack_14, a0 + 0x14c, a2);
    Vec3_sub_023484(a0 + 0x14, auStack_14, a2, a3, auStack_24);
    Vec3_assign(a0 + 0x14, auStack_24, a2, a3);
    Vec3_dtor(auStack_24, 0xffffffff, a2, a3);
    object_dtor_delete(auStack_14, 0xffffffff, a2, a3);
    vec3_copy_8c02b5fc(auStack_30, a0 + 0x14c, a2);
    Vec3_sub_023484(a0 + 0x80, auStack_30, a2, a3, auStack_40);
    Vec3_assign(a0 + 0x80, auStack_40, a2, a3);
    Vec3_dtor(auStack_40, 0xffffffff, a2, a3);
    uVar1 = 0xffffffff;
    object_dtor_delete(auStack_30, 0xffffffff, a2, a3);
    uVar1 = clear_3_words(a0 + 0x14c, uVar1, a2, a3);
    return uVar1;
}

/*
 * game_sub_031684  0x8c031684
 * area name: game code; nothing names its area yet
 * called by: Class_12a03c_m7_03c40c, Class_12a25c_m7_06f918, Class_12a76c_sub_08dd98, Class_12b088_sub_0a6370,
 * Class_12b2ac_m7_0b58e8
 */
u32 game_sub_031684(int *a0) {
    u32 ar5_00;
    u32 ar6_00;
    u32 ar7_00;
    u32 extraout_fr1;
    char cVar1;

    cVar1 = '\0';
    ar7_00 = 0;
    ar6_00 = 0xffffffff;
    ar5_00 = 0;
    CAnimBody_SetAnimation(a0 + 0x2c, 0, 0xffffffff, 0);
    CAnimBody_SetFrame(a0 + 0x2c, ar5_00, ar6_00, ar7_00);
    if (cVar1 == '\0') {
        a0[10] = 0;
        a0[9] = 0;
    } else {
        *(u64 *)(a0 + 10) = (u64)extraout_fr1;
        *(u64 *)(a0 + 9) = (u64)extraout_fr1;
    }
    timer_stop_94(a0, ar5_00, ar6_00, ar7_00);
    Class_12b2ac_sub_031700(a0, ar5_00, ar6_00, ar7_00);
    (**(code **)(*a0 + 0x2c))(a0, ar5_00, ar6_00, ar7_00);
    a0[0x1a] = 0;
    return 0x68;
}

/*
 * Class_12b2ac_sub_031700  0x8c031700
 * area name: only called from Class_12b2ac methods
 * called by: Class_12b088_sub_0a99c4, Class_12b2ac_m1_0aff3c, game_sub_031684, game_sub_04d62c, game_sub_04ddd4,
 * game_sub_0507c0, game_sub_055c38, game_sub_0755e0 (+6 more)
 */
u32 Class_12b2ac_sub_031700(int a0, u32 a1, u32 a2, u32 a3) {
    u32 in_fr1;
    u32 in_PR;
    char cVar1;
    u64 uStack_c;

    cVar1 = '\0';
    vec3_clear(a0 + 0x6c, a1, a2, a3);
    uStack_c = (u64)in_fr1;
    if (cVar1 == '\0') {
        uStack_c = (u64)in_PR << 0x20;
        *(u32 *)(a0 + 0xac) = 0;
    } else {
        *(u64 *)(a0 + 0xac) = uStack_c;
    }
    if (cVar1 == '\0') {
        *(int *)(a0 + 0xa8) = (int)uStack_c;
    } else {
        *(u64 *)(a0 + 0xa8) = uStack_c;
    }
    return 0;
}

/*
 * timer_stop_94  0x8c031748
 * clears +0x94 and +0xa4
 * called by: Class_12a03c_m1_03c43c, Class_12a25c_sub_06f93c, Class_12b2ac_sub_0b5344, Vec3_sub_03f4a4,
 * game_sub_031684, game_sub_03c94c, game_sub_048868, game_sub_04c314 (+37 more)
 */
u32 timer_stop_94(int a0, u32 a1, u32 a2, u32 a3) {
    *(u32 *)(a0 + 0xa4) = 0;
    *(u32 *)(a0 + 0x94) = 0;
    return 0x94;
}

/*
 * CMushroomerBody_sub_031764  0x8c031764
 * area name: only called from CMushroomerBody methods
 * called by: CMushroomerBody_AwayFrom, Class_12a25c_sub_06f93c, game_sub_032d48, game_sub_0737fc, game_sub_073cac,
 * game_sub_074d1c, game_sub_0755e0, game_sub_07b7d0 (+11 more)
 */
u32 CMushroomerBody_sub_031764(int a0, u32 a1, u32 a2, u32 a3) {
    u32 uVar1;
    u32 uVar2;
    int iVar3;
    double *pdVar4;
    u32 uVar5;
    u32 ar6_00;
    float in_fr1;
    float fVar6;
    u64 uVar7;
    double dVar8;
    double in_xd0;
    char cVar9;
    char cVar10;
    u64 uStack_9c;
    u64 uStack_94;
    u64 uStack_84;
    u64 uStack_78;
    u8 auStack_64[16];
    u8 auStack_54[16];
    u8 auStack_44[16];
    u8 auStack_34[16];
    u8 auStack_24[20];

    cVar10 = '\0';
    cVar9 = '\0';
    if (*(int *)(a0 + 0x40) == 0) {
        uVar1 = 0;
    } else {
        uVar2 = a2;
        ar6_00 = a2;
        Vec3_sub(a1, a2, a2, a3, auStack_44);
        uVar2 = Vec3_length(auStack_44, uVar2, ar6_00, a3);
        Vec3_ctor_copy(auStack_24, uVar2, ar6_00, a3);
        uVar5 = 0xffffffff;
        Vec3_dtor(auStack_44, 0xffffffff, ar6_00, a3);
        uVar1 = 1;
        iVar3 = *(int *)(a0 + 0x40);
        if ((iVar3 == 1) || (iVar3 == 3)) {
            if (*(int *)(a0 + 0x44) == 1) {
                game_sub_031fc4(a0);
            }
            if (cVar10 == '\0') {
                in_fr1 = *(float *)(a0 + 0x30);
            } else {
                in_xd0 = *(double *)(a0 + 0x30);
            }
            if (in_fr1 == 0.0) {
                dVar8 = (double)CONCAT44(0x3f800000, in_fr1);
                if (cVar10 == '\0') {
                    uStack_78 = (double)CONCAT44(uStack_78._4_4_, 0x3f800000);
                    dVar8 = uStack_78;
                }
            } else {
                pdVar4 = (double *)(a0 + 0x2c);
                if (cVar10 != '\0') {
                    in_xd0 = *pdVar4;
                    pdVar4 = (double *)(a0 + 0x30);
                }
                dVar8 = *pdVar4;
                if (cVar9 == '\0') {
                    fVar6 = SUB84(dVar8, 0) / (float)((u64)dVar8 >> 0x20);
                } else {
                    fVar6 = SUB84(dVar8 / dVar8, 0);
                }
                dVar8 = in_xd0;
                if (cVar10 == '\0') {
                    uStack_78 = (double)CONCAT44(uStack_78._4_4_, fVar6);
                    dVar8 = uStack_78;
                }
            }
            uStack_78 = dVar8;
            Vec3_scale(auStack_24, &uStack_78, ar6_00, a3, auStack_54);
            Vec3_add_assign(a0 + 0x14, auStack_54);
            uVar5 = 0xffffffff;
            Vec3_dtor(auStack_54, 0xffffffff, ar6_00, a3);
            Vec3_length(a0 + 0x14, uVar5, ar6_00, a3);
            pdVar4 = (double *)(a0 + 0x2c);
            if (cVar10 != '\0') {
                in_xd0 = *pdVar4;
                pdVar4 = (double *)(a0 + 0x30);
            }
            uStack_84 = *pdVar4;
            if (SUB84(uStack_84, 0) != (float)((u64)uStack_84 >> 0x20)) {
                if (cVar10 == '\0') {
                    dVar8 = (double)(u64) * (u32 *)(a0 + 0x28);
                } else {
                    in_xd0 = *(double *)(a0 + 0x28);
                    dVar8 = uStack_84;
                }
                uStack_84 = (double)((u64)dVar8 & 0xffffffff);
                if (cVar9 == '\0' && 0.0 < SUB84(dVar8, 0)) {
                    if (cVar10 == '\0') {
                        uStack_84 = (double)(u64) * (u32 *)(a0 + 0x24);
                    } else {
                        in_xd0 = *(double *)(a0 + 0x24);
                    }
                    if (SUB84(uStack_84, 0) == 0.0) {
                        if (cVar10 == '\0') {
                            *(u32 *)(a0 + 0x2c) = *(u32 *)(a0 + 0x28);
                        } else {
                            *(u64 *)(a0 + 0x2c) = *(u64 *)(a0 + 0x28);
                        }
                    } else {
                        if (cVar10 == '\0') {
                            dVar8 = (double)CONCAT44(*(u32 *)(a0 + 0x24), *(u32 *)(a0 + 0x28));
                        } else {
                            in_xd0 = *(double *)(a0 + 0x28);
                            dVar8 = *(double *)(a0 + 0x24);
                        }
                        if (cVar9 == '\0') {
                            fVar6 = SUB84(dVar8, 0) / (float)((u64)dVar8 >> 0x20);
                        } else {
                            fVar6 = SUB84(dVar8 / dVar8, 0);
                        }
                        if (cVar10 == '\0') {
                            dVar8 = (double)CONCAT44(*(u32 *)(a0 + 0x2c), fVar6);
                        } else {
                            dVar8 = *(double *)(a0 + 0x2c);
                        }
                        if (cVar9 == '\0') {
                            fVar6 = SUB84(dVar8, 0) + (float)((u64)dVar8 >> 0x20);
                        } else {
                            fVar6 = SUB84(dVar8 + dVar8, 0);
                        }
                        if (cVar10 == '\0') {
                            *(float *)(a0 + 0x2c) = fVar6;
                        } else {
                            *(double *)(a0 + 0x2c) = in_xd0;
                        }
                    }
                    pdVar4 = (double *)(a0 + 0x2c);
                    if (cVar10 != '\0') {
                        in_xd0 = *pdVar4;
                        pdVar4 = (double *)(a0 + 0x30);
                    }
                    uStack_84 = *pdVar4;
                    if (cVar9 == '\0' && (float)((u64)uStack_84 >> 0x20) < SUB84(uStack_84, 0)) {
                        if (cVar10 == '\0') {
                            uVar5 = *(u32 *)(a0 + 0x30);
                            uStack_84 = (double)CONCAT44(uVar5, SUB84(uStack_84, 0));
                            *(u32 *)(a0 + 0x2c) = uVar5;
                        } else {
                            uStack_84 = *(double *)(a0 + 0x30);
                            *(double *)(a0 + 0x2c) = uStack_84;
                        }
                    }
                }
            }
            Vec3_distance_sq(a2, a1, ar6_00, a3);
            if (cVar10 == '\0') {
                uStack_84 = (double)CONCAT44(uVar2, (int)((u64)uStack_84 >> 0x20));
                dVar8 = (double)CONCAT44(*(u32 *)(a0 + 0x48), *(u32 *)(a0 + 0x28));
            } else {
                in_xd0 = *(double *)(a0 + 0x28);
                dVar8 = *(double *)(a0 + 0x48);
            }
            if (cVar9 == '\0') {
                fVar6 = SUB84(dVar8, 0) + (float)((u64)dVar8 >> 0x20);
            } else {
                fVar6 = SUB84(dVar8 + dVar8, 0);
            }
            if (cVar10 == '\0') {
                uStack_84 = (double)CONCAT44((u32)uStack_84, fVar6);
            }
            if (cVar9 != '\0' || (float)((u64)uStack_84 >> 0x20) <= SUB84(uStack_84, 0)) {
                uVar7 = CONCAT44(0x3f800000, SUB84(uStack_84, 0));
                if (cVar10 == '\0') {
                    *(u32 *)(a0 + 0x2c) = 0x3f800000;
                    uVar7 = (u64) * (u32 *)(a0 + 0x38);
                } else {
                    *(u64 *)(a0 + 0x2c) = uVar7;
                    in_xd0 = *(double *)(a0 + 0x38);
                }
                if ((float)uVar7 == 0.0) {
                    if (cVar10 == '\0') {
                        *(u32 *)(a0 + 0x3c) = *(u32 *)(a0 + 0x28);
                    } else {
                        *(u64 *)(a0 + 0x3c) = *(u64 *)(a0 + 0x28);
                    }
                } else {
                    if (cVar10 == '\0') {
                        dVar8 = (double)CONCAT44(*(u32 *)(a0 + 0x38), *(u32 *)(a0 + 0x28));
                    } else {
                        in_xd0 = *(double *)(a0 + 0x28);
                        dVar8 = *(double *)(a0 + 0x38);
                    }
                    if (cVar9 == '\0') {
                        fVar6 = SUB84(dVar8, 0) / (float)((u64)dVar8 >> 0x20);
                    } else {
                        fVar6 = SUB84(dVar8 / dVar8, 0);
                    }
                    if (cVar10 == '\0') {
                        *(float *)(a0 + 0x3c) = fVar6;
                    } else {
                        *(double *)(a0 + 0x3c) = in_xd0;
                    }
                }
                *(u32 *)(a0 + 0x40) = 4;
                uVar1 = 0;
            }
        } else if (iVar3 == 4) {
            uVar1 = 0;
            Vec3_make(a0 + 0x14, uVar5, ar6_00, a3, auStack_64);
            uVar2 = Vec3_length(auStack_64, uVar5, ar6_00, a3);
            Vec3_ctor_copy(auStack_34, uVar2, ar6_00, a3);
            Vec3_dtor(auStack_64, 0xffffffff, ar6_00, a3);
            if (cVar10 == '\0') {
                dVar8 = (double)CONCAT44(*(u32 *)(a0 + 0x38), *(u32 *)(a0 + 0x2c));
            } else {
                in_xd0 = *(double *)(a0 + 0x2c);
                dVar8 = *(double *)(a0 + 0x38);
            }
            if (cVar9 == '\0') {
                fVar6 = SUB84(dVar8, 0) / (float)((u64)dVar8 >> 0x20);
            } else {
                fVar6 = SUB84(dVar8 / dVar8, 0);
            }
            dVar8 = in_xd0;
            if (cVar10 == '\0') {
                uStack_78 = (double)CONCAT44(uStack_78._4_4_, fVar6);
                dVar8 = uStack_78;
            }
            uStack_78 = dVar8;
            Vec3_scale(auStack_34, &uStack_78, ar6_00, a3, (int)&uStack_78 + 4);
            Vec3_add_assign(a0 + 0x14, (int)&uStack_78 + 4);
            uVar2 = 0xffffffff;
            Vec3_dtor((int)&uStack_78 + 4, 0xffffffff, ar6_00, a3);
            Vec3_length(a0 + 0x14, uVar2, ar6_00, a3);
            Vec3_dtor(auStack_34, 0xffffffff, ar6_00, a3);
            if (cVar10 == '\0') {
                fVar6 = *(float *)(a0 + 0x28);
            } else {
                in_xd0 = *(double *)(a0 + 0x28);
            }
            if (cVar9 == '\0' && fVar6 < 0.0) {
                if (cVar10 == '\0') {
                    dVar8 = (double)CONCAT44(*(u32 *)(a0 + 0x3c), *(u32 *)(a0 + 0x28));
                } else {
                    in_xd0 = *(double *)(a0 + 0x28);
                    dVar8 = *(double *)(a0 + 0x3c);
                }
                if (cVar9 == '\0') {
                    fVar6 = SUB84(dVar8, 0) - (float)((u64)dVar8 >> 0x20);
                } else {
                    fVar6 = SUB84(dVar8 - dVar8, 0);
                }
                uStack_9c = in_xd0;
                if (cVar10 == '\0') {
                    uStack_9c = (double)CONCAT44(a0, fVar6);
                }
                if (cVar10 == '\0') {
                    *(u32 *)(uStack_9c._4_4_ + 0x28) = (u32)uStack_9c;
                    uStack_9c = (double)((u64)uStack_9c & 0xffffffff);
                } else {
                    *(double *)(uStack_9c._4_4_ + 0x28) = uStack_9c;
                }
                if (cVar9 != '\0' || 0.0 <= SUB84(uStack_9c, 0)) {
                    *(u32 *)(a0 + 0x40) = 0;
                    if (cVar10 == '\0') {
                        *(u32 *)(a0 + 0x28) = 0;
                    } else {
                        *(u64 *)(a0 + 0x28) = (u64)uStack_9c & 0xffffffff;
                    }
                    if (cVar10 == '\0') {
                        *(u32 *)(a0 + 0x2c) = 0x3f800000;
                    } else {
                        *(u64 *)(a0 + 0x2c) = CONCAT44(0x3f800000, SUB84(uStack_9c, 0));
                    }
                }
            } else {
                if (cVar10 == '\0') {
                    dVar8 = (double)CONCAT44(*(u32 *)(a0 + 0x3c), *(u32 *)(a0 + 0x28));
                } else {
                    in_xd0 = *(double *)(a0 + 0x28);
                    dVar8 = *(double *)(a0 + 0x3c);
                }
                if (cVar9 == '\0') {
                    fVar6 = SUB84(dVar8, 0) - (float)((u64)dVar8 >> 0x20);
                } else {
                    fVar6 = SUB84(dVar8 - dVar8, 0);
                }
                uStack_94 = in_xd0;
                if (cVar10 == '\0') {
                    uStack_94 = (double)CONCAT44(a0, fVar6);
                }
                if (cVar10 == '\0') {
                    *(u32 *)(uStack_94._4_4_ + 0x28) = (u32)uStack_94;
                    uStack_94 = (double)((u64)uStack_94 & 0xffffffff);
                } else {
                    *(double *)(uStack_94._4_4_ + 0x28) = uStack_94;
                }
                if (cVar9 != '\0' || SUB84(uStack_94, 0) <= 0.0) {
                    *(u32 *)(a0 + 0x40) = 0;
                    if (cVar10 == '\0') {
                        *(u32 *)(a0 + 0x28) = 0;
                    } else {
                        *(u64 *)(a0 + 0x28) = (u64)uStack_94 & 0xffffffff;
                    }
                    if (cVar10 == '\0') {
                        *(u32 *)(a0 + 0x2c) = 0x3f800000;
                    } else {
                        *(u64 *)(a0 + 0x2c) = CONCAT44(0x3f800000, SUB84(uStack_94, 0));
                    }
                }
            }
        }
        Vec3_dtor(auStack_24, 0xffffffff, ar6_00, a3);
    }
    return uVar1;
}

/*
 * timer_sub_031ab4  0x8c031ab4
 * area name: sits between timer functions (same compilation unit)
 * called by: Class_12a03c_m1_03c43c, Class_12a25c_m1_06f530, Class_12ad14_m1_0a09e8, Class_12b088_m1_0a6468,
 * Class_12b2ac_m1_0aff3c, Vec3_sub_03f4a4, game_sub_0336e8, game_sub_03c94c (+2 more)
 */
u32 timer_sub_031ab4(int a0, u64 *a1, u32 a2, u32 a3) {
    u64 *ar5_00;
    u64 in_dr0;
    u32 uVar1;
    char cVar2;
    u32 uStack_14;
    u32 uStack_10;

    cVar2 = '\0';
    ar5_00 = a1;
    Vec3_sub_0231c8(a0 + 0x80, a1, a2, a3);
    uStack_10 = (u32)in_dr0;
    uVar1 = (u32)((u64)in_dr0 >> 0x20);
    if (cVar2 == '\0') {
        *(u32 *)a1 = uVar1;
        uStack_10 = uVar1;
    } else {
        *a1 = in_dr0;
    }
    Vec3_sub_02327c(a0 + 0x80, ar5_00, a2, a3);
    uVar1 = (u32)((u64)in_dr0 >> 0x20);
    uStack_14 = uVar1;
    if (cVar2 != '\0') {
        uStack_14 = (u32)in_dr0;
        uStack_10 = uVar1;
    }
    if (cVar2 == '\0') {
        *(u32 *)((int)a1 + 4) = uStack_14;
    } else {
        *(u64 *)((int)a1 + 4) = CONCAT44(uStack_10, uStack_14);
    }
    return 0;
}

/*
 * timer_sub_031b08  0x8c031b08
 * area name: sits between timer functions (same compilation unit)
 * called by: Class_12a078_m2_05eee0, Class_12a078_sub_05d860, Class_12a5d0_m2_08a49c, Class_12a5d0_m3_08a704,
 * Class_12a7a8_m1_098d14, Class_12acc8_m1_09f470, Class_12b0c4_m1_0ab7f4, Class_12b0c4_m2_0abc38 (+4 more)
 */
int timer_sub_031b08(int *a0, u32 a1, int a2, u32 a3) {
    int iVar1;
    u32 ar5_00;

    iVar1 = *(int *)(0x178 + (int)a0);
    if (iVar1 == 0) {
        if (a2 == 1) {
            ar5_00 = a1;
            (**(code **)(*a0 + 0x2c))(a0, a1, 1, a3);
            reset_fields_2c_6c((int)a0 + 0xb0, ar5_00, a2);
        }
        iVar1 = 0x124;
        *(u32 *)(0x124 + (int)a0) = a1;
    }
    return iVar1;
}

/*
 * reset_fields_2c_6c  0x8c031b58
 * sets +0x2c and +0x6c to -1
 * called by: CAnimBody_SetAnimation, Class_12a25c_sub_06f93c, game_sub_032160, game_sub_070d7c, game_sub_071a38,
 * game_sub_097ef0, timer_sub_031b08
 */
u32 reset_fields_2c_6c(int a0, u32 a1, u32 a2) {
    *(u32 *)(a0 + 0x2c) = 0xffffffff;
    *(u32 *)(a0 + 0x6c) = 0xffffffff;
    return 0x6c;
}

/*
 * copy6_to_fields  0x8c031b68
 * copies six words from a1 to +0xa0, +0x34, +0x38, +0x48, +0x4c, +0x50
 * called by: CMushroomerBody_AwayFrom, Class_12a03c_m6_03a65c, Class_12a25c_m6_06e69c, Class_12a25c_sub_06f93c,
 * Class_12a76c_sub_08de3c, Class_12b2ac_m6_0afcc0, game_sub_048f8c, game_sub_049b68 (+34 more)
 */
u32 *copy6_to_fields(int a0, u32 *a1, u32 a2, u32 a3) {
    *(u32 *)(a0 + 0xa0) = *a1;
    *(u32 *)(a0 + 0x34) = a1[1];
    *(u32 *)(a0 + 0x38) = a1[2];
    *(u32 *)(a0 + 0x48) = a1[3];
    *(u32 *)(a0 + 0x4c) = a1[4];
    *(u32 *)(a0 + 0x50) = a1[5];
    return a1 + 4;
}

/*
 * CMushroomerBody_sub_031bb4  0x8c031bb4
 * area name: only called from CMushroomerBody methods
 * called by: CMushroomerBody_AwayFrom, game_sub_032d48, game_sub_046684, game_sub_048868, game_sub_048f8c,
 * game_sub_049b68, game_sub_04b168, game_sub_055490 (+12 more)
 */
u32 CMushroomerBody_sub_031bb4(int a0, u32 a1, u32 a2, u32 a3) {
    u32 uVar1;
    u32 uVar2;
    u32 in_fr1;
    float fVar3;
    u64 uVar4;
    double dVar5;
    double dVar6;
    double in_dr4;
    double in_xd0;
    u64 in_xd14;
    bool bVar7;
    char cVar8;
    char cVar9;

    cVar9 = '\0';
    cVar8 = '\0';
    fVar3 = (float)((u64)in_dr4 >> 0x20);
    *(u32 *)(a0 + 0x2c) = 0x3f800000;
    uVar4 = (u64)in_fr1;
    uVar1 = a1;
    uVar2 = a2;
    if (0.0 < fVar3) {
        *(float *)(a0 + 0x24) = fVar3;
    } else {
        rand_float(a0, a1, a2);
        if (cVar9 == '\0') {
            *(int *)(a0 + 0x24) = (int)(uVar4 >> 0x20);
        } else {
            *(u64 *)(a0 + 0x24) = uVar4;
        }
    }
    dVar5 = (double)(uVar4 & 0xffffffff);
    if (cVar8 == '\0') {
        bVar7 = 0.0 < SUB84(in_dr4, 0);
    } else {
        bVar7 = dVar5 < in_dr4;
    }
    if (bVar7) {
        a2 = uVar1;
        if (cVar9 == '\0') {
            *(float *)(a0 + 0x30) = SUB84(in_dr4, 0);
        } else {
            *(u64 *)(a0 + 0x30) = in_xd14;
        }
    } else {
        Vec3_distance_sq(a1, a2, uVar2, a3);
        if (cVar9 == '\0') {
            dVar6 = (double)CONCAT44(*(u32 *)(a0 + 0x24), (int)((u64)dVar5 >> 0x20));
            dVar5 = in_xd0;
        } else {
            dVar6 = *(double *)(a0 + 0x24);
        }
        if (cVar8 == '\0') {
            fVar3 = SUB84(dVar6, 0) / (float)((u64)dVar6 >> 0x20);
        } else {
            fVar3 = SUB84(dVar6 / dVar6, 0);
        }
        if (cVar9 == '\0') {
            *(float *)(a0 + 0x30) = fVar3;
        } else {
            *(double *)(a0 + 0x30) = dVar5;
        }
    }
    timer_start_24(a0);
    *(u32 *)(a0 + 0x40) = 1;
    return 0x40;
}

/*
 * timer_start_24  0x8c031c64
 * +0x24 = fr4, +0x44 = 1
 * called by: CMushroomerBody_sub_031bb4, game_sub_032d48, game_sub_093aec, game_sub_093e80, game_sub_094514,
 * game_sub_095548, game_sub_0967d8, game_sub_097888 (+3 more)
 */
u32 timer_start_24(int a0) {
    u32 in_fr4;

    *(u32 *)(a0 + 0x24) = in_fr4;
    *(u32 *)(a0 + 0x44) = 1;
    return 0x44;
}

/*
 * timer_sub_031c74  0x8c031c74
 * area name: sits between timer functions (same compilation unit)
 * called by: Class_12a25c_sub_06f93c, Class_12b2ac_sub_0b0784, Vec3_sub_03f4a4, game_sub_03c94c, game_sub_046684,
 * game_sub_048868, game_sub_04e7e0, game_sub_0526a0 (+19 more)
 */
u32 timer_sub_031c74(int a0, u32 a1, u32 a2, u32 a3) {
    u32 uVar1;

    uVar1 = 0;
    if (*(int *)(a0 + 0x40) != 0) {
        if (*(int *)(a0 + 0x40) != 4) {
            *(u32 *)(a0 + 0x2c) = 0x3f800000;
            if (*(float *)(a0 + 0x38) == 0.0) {
                *(u32 *)(a0 + 0x3c) = 0x3f800000;
            } else {
                *(float *)(a0 + 0x3c) = *(float *)(a0 + 0x28) / *(float *)(a0 + 0x38);
            }
            *(u32 *)(a0 + 0x40) = 4;
        }
        uVar1 = CMushroomerBody_sub_031764(a0, a1, a2, a3);
    }
    return uVar1;
}

/*
 * timer_sub_031ce8  0x8c031ce8
 * area name: sits between timer functions (same compilation unit)
 * called by: Class_12ad14_sub_0a0c88, Class_12b088_sub_0a6628, game_sub_094514, game_sub_0967d8, game_sub_097888,
 * game_sub_0a6974
 */
u32 timer_sub_031ce8(u32 a0, u32 a1, int *a2, u32 a3) {
    u32 uVar1;
    int *ar6_00;
    u64 in_dr0;
    u32 uVar2;
    char cVar3;
    u32 in_stack_00000000;
    u32 auStack_34[4];
    u32 uStack_24;
    u32 uStack_20;
    u32 uStack_1c;
    u32 uStack_18;

    cVar3 = '\0';
    ar6_00 = a2;
    Vec3_ctor_zero(&uStack_24, a1, a2);
    rand_float(a0, a1, ar6_00);
    uStack_24 = (u32)in_dr0;
    uVar2 = (u32)((u64)in_dr0 >> 0x20);
    uVar1 = uVar2;
    if (cVar3 == '\0') {
        uVar1 = auStack_34[0];
        uStack_24 = uVar2;
        uVar2 = uStack_20;
    }
    uStack_20 = uVar2;
    auStack_34[0] = uVar1;
    rand_float(a0, a1, ar6_00);
    uStack_1c = (u32)in_dr0;
    uVar1 = (u32)((u64)in_dr0 >> 0x20);
    if (cVar3 == '\0') {
        uStack_1c = uVar1;
        uVar1 = uStack_18;
    }
    uStack_18 = uVar1;
    Vec3_ctor_xyz(auStack_34, a1, ar6_00, a3);
    (**(code **)(*a2 + 0x128))(a2, auStack_34, ar6_00, a3);
    uVar1 = 0xffffffff;
    Vec3_dtor(auStack_34, 0xffffffff, ar6_00, a3);
    rand_float(a0, uVar1, ar6_00);
    uVar1 = (u32)((u64)in_dr0 >> 0x20);
    uStack_20 = uVar1;
    if (cVar3 != '\0') {
        uStack_20 = (u32)in_dr0;
        uStack_1c = uVar1;
    }
    Vec3_ctor_copy(in_stack_00000000, &uStack_24, ar6_00, a3);
    Vec3_dtor(&uStack_24, 0xffffffff, ar6_00, a3);
    return 0;
}

/*
 * get_ptr_8c031de4  0x8c031ddc
 * returns the address 0x8c031de4
 */
u32 *get_ptr_8c031de4(void) {
    return &g_8c031de4;
}

/*
 * timer_sub_031de8  0x8c031de8
 * area name: sits between timer functions (same compilation unit)
 * called by: Class_12a25c_sub_06f93c, Class_12b088_sub_0a6628, Vec3_sub_03f4a4, game_sub_0507c0, game_sub_071a38,
 * game_sub_077a38, game_sub_07a3cc, game_sub_07baa0 (+6 more)
 */
u32 timer_sub_031de8(int a0, u32 a1, u32 a2, u32 a3) {
    int iVar1;
    u32 uVar2;

    uVar2 = 1;
    if (*(int *)(0x138 + a0) == 0) {
        iVar1 = CAnimBody_PlayToEnd(a0 + 0xb0, a1, a2, a3);
        if (iVar1 != 0) {
            if (iVar1 != 1) {
                if (iVar1 != 2) {
                    return 1;
                }
                CAnimBody_AdvanceFrame_wrapper(a0 + 0xb0, a1, a2, a3);
            }
            *(int *)(0x138 + a0) = *(int *)(0x138 + a0) + 1;
        }
    } else if ((*(int *)(0x138 + a0) == 1) &&
               (iVar1 = (*(code *)(&CAnimBody_AdvanceFrame_wrapper))(a0 + 0xb0, a1, a2, a3), iVar1 == 1)) {
        *(u32 *)(0x138 + a0) = 0;
        uVar2 = 0;
    }
    return uVar2;
}

/*
 * game_sub_031e84  0x8c031e84
 * area name: game code; nothing names its area yet
 * called by: game_sub_0737fc, game_sub_073cac, game_sub_074d1c
 */
float *game_sub_031e84(int a0, u32 a1) {
    float *pfVar1;
    float in_fr5;
    float in_fr4;

    *(float *)(a0 + 0x28) = *(float *)(a0 + 0x28) - in_fr4;
    pfVar1 = (float *)(a0 + 0x28);
    if (*pfVar1 <= in_fr5) {
        *(float *)(a0 + 0x28) = in_fr5;
        pfVar1 = (float *)0x40;
        *(u32 *)(a0 + 0x40) = 5;
    }
    return pfVar1;
}

/*
 * game_sub_031eb0  0x8c031eb0
 * area name: game code; nothing names its area yet
 * called by: Vec3_sub_03f4a4, game_sub_03c94c, game_sub_048f8c, game_sub_049b68, game_sub_04b168, game_sub_04c314,
 * game_sub_04e2d0, game_sub_051c14 (+4 more)
 */
u32 game_sub_031eb0(u32 unused_a0, u32 a1, u32 a2, u32 a3, u32 s0) {
    u32 uVar1;
    u8 *ar5_00;
    u32 ar7_00;
    u32 in_stack_00000004;
    u8 auStack_5c[16];
    u8 auStack_4c[16];
    u8 auStack_3c[12];
    u8 auStack_30[12];
    u8 auStack_24[16];
    u8 auStack_14[16];

    ar7_00 = a3;
    game_sub_0332b4(unused_a0, a1, a2, a3, auStack_30, in_stack_00000004);
    vec3_copy_8c02b5fc(auStack_14, auStack_30, a2);
    uVar1 = 0xffffffff;
    object_dtor_delete(auStack_30, 0xffffffff, a2, ar7_00);
    Vec3_set_xyz(auStack_3c, uVar1, a2, ar7_00);
    ar5_00 = auStack_3c;
    Vec3_sub_023484(a3, ar5_00, a2, ar7_00, auStack_4c);
    Vec3_sub_02374c(auStack_4c, ar5_00, a2, ar7_00);
    uVar1 = Vec3_length(auStack_5c, ar5_00, a2, ar7_00);
    Vec3_ctor_copy(auStack_24, uVar1, a2, ar7_00);
    Vec3_dtor(auStack_5c, 0xffffffff, a2, ar7_00);
    Vec3_dtor(auStack_4c, 0xffffffff, a2, ar7_00);
    object_dtor_delete(auStack_3c, 0xffffffff, a2, ar7_00);
    Vec3_ctor_copy(s0, auStack_24, a2, ar7_00);
    Vec3_dtor(auStack_24, 0xffffffff, a2, ar7_00);
    object_dtor_delete(auStack_14, 0xffffffff, a2, ar7_00);
    return 0;
}

/*
 * game_sub_031fc4  0x8c031fc4
 * area name: game code; nothing names its area yet
 * called by: CMushroomerBody_sub_031764, game_sub_07c318, game_sub_097ba4
 */
float *game_sub_031fc4(int a0) {
    float *pfVar1;

    if (*(float *)(a0 + 0x24) <= *(float *)(a0 + 0x28)) {
        if (*(float *)(a0 + 0x28) <= *(float *)(a0 + 0x24)) {
            pfVar1 = (float *)0x44;
            *(u32 *)(a0 + 0x44) = 0;
        } else {
            *(float *)(a0 + 0x28) = *(float *)(a0 + 0x28) - *(float *)(a0 + 0x24) / *(float *)(a0 + 0x38);
            pfVar1 = (float *)(a0 + 0x24);
            if (*(float *)(a0 + 0x28) <= *pfVar1) {
                *(u32 *)(a0 + 0x28) = *(u32 *)(a0 + 0x24);
                pfVar1 = (float *)0x44;
                *(u32 *)(a0 + 0x44) = 0;
            }
        }
    } else {
        *(float *)(a0 + 0x28) = *(float *)(a0 + 0x28) + *(float *)(a0 + 0x24) / *(float *)(a0 + 0x34);
        pfVar1 = (float *)(a0 + 0x24);
        if (*pfVar1 <= *(float *)(a0 + 0x28)) {
            *(u32 *)(a0 + 0x28) = *(u32 *)(a0 + 0x24);
            pfVar1 = (float *)0x44;
            *(u32 *)(a0 + 0x44) = 0;
        }
    }
    return pfVar1;
}

/*
 * game_sub_03207c  0x8c03207c
 * area name: game code; nothing names its area yet
 * called by: Class_12a03c_m1_03c43c, Class_12a25c_m1_06f530, Class_12b088_sub_0a99c4, Class_12b2ac_m1_0aff3c,
 * game_sub_0a14d8
 */
u32 game_sub_03207c(int a0, u32 a1) {
    u32 r6;
    u32 r7;
    float fVar1;
    float fVar2;
    float fVar4;
    double dVar3;
    float in_fr5;
    float in_fr4;
    u32 in_fr7;
    u32 in_fr6;
    u64 in_xd0;
    int ar4_00;
    char cVar5;
    char cVar6;
    u32 uStack_20;
    u32 uStack_1c;
    u32 uStack_10;
    u32 uStack_c;

    cVar6 = '\0';
    cVar5 = '\0';
    fVar1 = *(float *)(a0 + 0xa8) + in_fr5;
    *(float *)(a0 + 0xa8) = fVar1;
    fVar2 = (fVar1 * 65536.0) / 6.283184;
    fVar4 = 6.283184;
    njSinCos((int)fVar2, a1, r6, r7, in_fr4);
    uStack_c = fVar4;
    fVar1 = in_fr4;
    if (cVar6 != '\0') {
        in_xd0 = CONCAT44(in_fr5, in_fr4);
        uStack_c = fVar2;
        fVar1 = fVar2;
    }
    if (cVar5 == '\0') {
        fVar1 = fVar1 * fVar4;
    } else {
        fVar1 = SUB84((double)CONCAT44(fVar4, fVar1) * (double)CONCAT44(fVar4, fVar1), 0);
    }
    if (cVar6 == '\0') {
        *(float *)(a0 + 0x6c) = fVar1;
        dVar3 = (double)CONCAT44(in_fr7, *(u32 *)(a0 + 0xac));
    } else {
        *(u64 *)(a0 + 0x6c) = in_xd0;
        in_xd0 = *(u64 *)(a0 + 0xac);
        dVar3 = (double)CONCAT44(uStack_20, in_fr7);
    }
    if (cVar5 == '\0') {
        uStack_20 = SUB84(dVar3, 0) + (float)((u64)dVar3 >> 0x20);
    } else {
        uStack_20 = SUB84(dVar3 + dVar3, 0);
    }
    uStack_1c = a0;
    if (cVar6 != '\0') {
        uStack_20 = (float)in_xd0;
        uStack_1c = (int)((u64)in_xd0 >> 0x20);
    }
    if (cVar6 == '\0') {
        *(float *)(uStack_1c + 0xac) = uStack_20;
        dVar3 = (double)CONCAT44(0x47800000, uStack_20);
    } else {
        *(u64 *)(uStack_1c + 0xac) = CONCAT44(uStack_1c, uStack_20);
        in_xd0 = CONCAT44(uStack_1c, uStack_20);
        dVar3 = 12831.689682006836;
    }
    if (cVar5 == '\0') {
        fVar1 = SUB84(dVar3, 0) * (float)((u64)dVar3 >> 0x20);
    } else {
        fVar1 = SUB84(dVar3 * dVar3, 0);
    }
    if (cVar6 == '\0') {
        dVar3 = (double)CONCAT44(0x40c90fd8, fVar1);
    } else {
        dVar3 = -3.74578248742155e-250;
    }
    if (cVar5 == '\0') {
        fVar2 = (float)((u64)dVar3 >> 0x20);
        fVar1 = SUB84(dVar3, 0) / fVar2;
        dVar3 = (double)CONCAT44(fVar2, fVar1);
        ar4_00 = (int)fVar1;
    } else {
        dVar3 = dVar3 / dVar3;
        ar4_00 = (int)dVar3;
    }
    njSinCos(ar4_00, a1, r6, r7, in_fr4);
    fVar1 = (float)((u64)dVar3 >> 0x20);
    if (cVar6 == '\0') {
        dVar3 = (double)(u64)in_fr6;
        uStack_10 = fVar1;
    } else {
        uStack_10 = SUB84(dVar3, 0);
        in_xd0 = CONCAT44(in_fr7, in_fr6);
        uStack_c = fVar1;
    }
    if (cVar6 == '\0') {
        dVar3 = (double)CONCAT44(uStack_10, SUB84(dVar3, 0));
    } else {
        dVar3 = (double)CONCAT44(uStack_c, uStack_10);
    }
    if (cVar5 == '\0') {
        fVar1 = SUB84(dVar3, 0) * (float)((u64)dVar3 >> 0x20);
    } else {
        fVar1 = SUB84(dVar3 * dVar3, 0);
    }
    if (cVar6 == '\0') {
        *(float *)(a0 + 0x70) = fVar1;
    } else {
        *(u64 *)(a0 + 0x70) = in_xd0;
    }
    return 0x20;
}

/*
 * noop_032150  0x8c032150
 */
u32 noop_032150(void) {
    u32 in_r0;

    return in_r0;
}

/*
 * get_field_a4_032154  0x8c032154
 * called by: CAnimal_sub_0f4258, game_sub_0dac50, game_sub_0db224
 */
u32 get_field_a4_032154(int a0) {
    return *(u32 *)(0xa4 + a0);
}

/*
 * game_sub_032160  0x8c032160
 * area name: game code; nothing names its area yet
 * called by: Class_12a25c_sub_06f4c8, Class_12b088_sub_0a6430, game_sub_055b50, game_sub_0a0c4c
 */
u32 game_sub_032160(int a0, u32 a1, u32 a2, u32 a3) {
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
    flags6_set_all(a0 + 0x1fc, ar5_00, a2);
    *(u32 *)(a0 + 0x214) = 1;
    *(u32 *)(a0 + 0x218) = 0;
    *(u32 *)(a0 + 0x1e8) = 0;
    return 0x1e8;
}

/*
 * set_field_24  0x8c0321fc
 * called by: game_sub_032160, game_sub_073cac, game_sub_097ef0
 */
u32 set_field_24(int a0, u32 a1) {
    u32 in_r0;

    *(u32 *)(a0 + 0x24) = a1;
    return in_r0;
}

/*
 * set_field_68  0x8c032204
 * called by: game_sub_032160, game_sub_070d7c, game_sub_073cac, game_sub_07f8e0, game_sub_07ff08, game_sub_0831c8,
 * game_sub_083d8c, game_sub_0845f4 (+2 more)
 */
u32 set_field_68(int a0, u32 a1, u32 unused_a2, u32 a3, u32 ain0) {
    u32 in_fr4;

    *(u32 *)(a0 + 0x68) = in_fr4;
    return ain0;
}

/*
 * Class_12b088_sub_03220c  0x8c03220c
 * area name: only called from Class_12b088 methods
 * called by: Class_12b088_m1_0a6468
 */
int Class_12b088_sub_03220c(int a0, u32 *a1, u32 a2, u32 a3) {
    int iVar1;
    int iVar2;
    u64 *puVar3;
    code *ar6_00;
    u8 *ar6_01;
    u32 uVar4;
    int iVar5;
    u64 uVar6;
    char cVar7;
    u32 uStack_9b8;
    u8 auStack_9b4[16];
    u8 auStack_9a4[16];
    u32 uStack_994;
    u32 uStack_990;
    u32 uStack_98c;
    u32 *puStack_988;
    u32 *puStack_984;
    u32 uStack_980;
    u32 uStack_97c;
    u8 auStack_978[2404];

    cVar7 = '\0';
    if (*(int *)(a0 + 0x1b4) == 1) {
        if (g_8c27defc == '\0') {
            uVar4 = 0x10;
            vec_new_array(0x8c27d590, Vec3_ctor_zero, Vec3_dtor, 0x10, 0x96);
            global_list_push(0, destroy_array_8c27d590, 0x8c27def0, uVar4);
            g_8c27defc = '\x01';
        }
        uVar4 = 0x10;
        ar6_00 = Vec3_dtor;
        vec_new_array(auStack_978, Vec3_ctor_zero, Vec3_dtor, 0x10, 0x96);
        if (g_8c27df04 == '\0') {
            g_8c27df00 = 0;
            g_8c27df04 = '\x01';
        }
        uStack_9b8 = 0xffffffff;
        puStack_988 = &uStack_994;
        puStack_984 = &uStack_9b8;
        uStack_980 = 0;
        uStack_97c = 1;
        Vec3_assign(g_8c27df00 * 0x10 + 0x8c27d590, *a1, ar6_00, uVar4);
        iVar1 = g_8c27df00;
        iVar2 = g_8c27df00 + 1;
        g_8c27df00 = g_8c27df00 + 1;
        if (0x95 < iVar2) {
            g_8c27df00 = 0;
        }
        iVar2 = iVar1;
        for (iVar5 = 0; iVar5 < 0x96; iVar5 = iVar5 + 1) {
            if (0x95 < iVar2) {
                iVar2 = iVar2 + -0x96;
            }
            puVar3 = (u64 *)(iVar2 * 0x10 + 0x8c27d590);
            if (cVar7 == '\0') {
                uStack_994 = *(u32 *)puVar3;
            } else {
                uStack_994 = (u32)*puVar3;
            }
            puVar3 = (u64 *)(iVar2 * 0x10 + 0x8c27d594);
            if (cVar7 == '\0') {
                uStack_990 = *(u32 *)puVar3;
            } else {
                uStack_990 = (u32)*puVar3;
            }
            puVar3 = (u64 *)(iVar2 * 0x10 + 0x8c27d598);
            if (cVar7 == '\0') {
                uStack_98c = *(u32 *)puVar3;
            } else {
                uVar6 = *puVar3;
                uStack_98c = (u32)uVar6;
                puStack_988 = (u32 *)((u64)uVar6 >> 0x20);
            }
            if (iVar1 < 0) {
                iVar1 = 0x95;
            }
            Vec3_assign(auStack_978 + iVar5 * 0x10, iVar1 * 0x10 + 0x8c27d590, ar6_00, uVar4);
            ar6_00 = NULL;
            gfxlib_sub_234fd0(&puStack_988, uStack_97c, 0, uVar4);
            iVar2 = iVar2 + 1;
            iVar1 = iVar1 + -1;
        }
        a3 = 0x96;
        a2 = 0x10;
        vec_delete_array(auStack_978, Vec3_dtor, 0x10, 0x96);
    }
    if (*(int *)(a0 + 0x1b8) == 1) {
        a2 = 0;
        gfxlib_sub_234d68(a0 + 0x17c, *(int *)(a0 + 0x188) + -1, 0, a3);
    }
    iVar1 = *(int *)(a0 + 0x1c0);
    if (iVar1 == 1) {
        Vec3_scale(a0 + 0x80, a0 + 0x48, a2, a3, auStack_9a4);
        Vec3_scale(auStack_9a4, &g_8c132bf8, a2, a3, auStack_9b4);
        uVar4 = 0xffff0000;
        ar6_01 = auStack_9b4;
        game_sub_032cb8(a0, *a1, ar6_01, 0xffff0000);
        Vec3_dtor(auStack_9b4, 0xffffffff, ar6_01, uVar4);
        iVar1 = Vec3_dtor(auStack_9a4, 0xffffffff, ar6_01, uVar4);
    }
    return iVar1;
}

/*
 * destroy_array_8c27d590  0x8c032484
 * destroys the global array at 0x8c27d590
 */
u32 destroy_array_8c27d590(void) {
    u32 uVar1;

    uVar1 = vec_delete_array(0x8c27d590, Vec3_dtor, 0x10, 0x96);
    return uVar1;
}

/*
 * game_sub_0324ac  0x8c0324ac
 * area name: game code; nothing names its area yet
 * called by: Class_12a03c_m1_03c43c, Class_12a25c_m1_06f530, Class_12ad14_sub_0a37c8, Class_12b088_sub_0a99c4,
 * Class_12b2ac_m1_0aff3c, game_sub_091e60, game_sub_0988a4
 */
float *game_sub_0324ac(int a0) {
    float *pfVar1;
    float in_fr4;

    pfVar1 = *(float **)(a0 + 0xa4);
    if (pfVar1 == (float *)0x1) {
        *(float *)(a0 + 0x94) = *(float *)(a0 + 0x94) - *(float *)(a0 + 0xa0);
        pfVar1 = (float *)(a0 + 0x94);
        if (*pfVar1 < *(float *)(a0 + 0xa0) * in_fr4 * -1.0) {
            pfVar1 = (float *)&g_8c032514;
            *(float *)(a0 + 0x94) = *(float *)(a0 + 0xa0) * in_fr4 * -1.0;
        }
    }
    return pfVar1;
}

/*
 * CMushroomerBody_sub_032518  0x8c032518
 * area name: only called from CMushroomerBody methods
 * called by: CMushroomerBody_AwayFrom, game_sub_03c94c, game_sub_046684, game_sub_048868, game_sub_0507c0,
 * game_sub_055490, game_sub_05c9fc, game_sub_07a3cc (+10 more)
 */
u32 CMushroomerBody_sub_032518(int a0, u32 a1, u32 a2, u32 a3) {
    int iVar1;
    u32 uVar2;
    u32 uVar3;
    u32 in_stack_00000000;
    u8 auStack_48[16];
    u8 auStack_38[16];
    u8 auStack_28[20];

    uVar2 = a2;
    uVar3 = a3;
    game_sub_03263c(a0, a0 + 0x14, a2, a3);
    Vec3_add(auStack_38, a1, uVar2, uVar3, auStack_48);
    Vec3_ctor_copy(auStack_28, auStack_48, uVar2, uVar3);
    Vec3_dtor(auStack_48, 0xffffffff, uVar2, uVar3);
    Vec3_dtor(auStack_38, 0xffffffff, uVar2, uVar3);
    uVar2 = a2;
    uVar3 = a3;
    iVar1 = game_sub_0329ac(a0, auStack_28, a2, a3);
    if (iVar1 == 0) {
        uVar2 = game_sub_032788(a0, auStack_28, a2, a3);
        Vec3_ctor_copy(in_stack_00000000, uVar2, a2, a3);
        Vec3_dtor(auStack_28, 0xffffffff, a2, a3);
    } else {
        Vec3_ctor_copy(in_stack_00000000, auStack_28, uVar2, uVar3);
        Vec3_dtor(auStack_28, 0xffffffff, uVar2, uVar3);
    }
    return 0;
}

/*
 * game_sub_03263c  0x8c03263c
 * area name: game code; nothing names its area yet
 * called by: CMushroomerBody_sub_032518, game_sub_055750, game_sub_078fd0, game_sub_07b7d0, game_sub_07f56c,
 * game_sub_08fd38, game_sub_0a14d8, game_sub_0b3604
 */
u32 game_sub_03263c(u32 a0, u32 a1, u32 a2, u32 a3) {
    u32 ar5_00;
    u8 *ar5_01;
    u64 uVar1;
    double dVar2;
    u64 in_dr4;
    float fVar3;
    u32 in_fr7;
    u32 in_fr6;
    float fVar5;
    double dVar4;
    u64 in_xd12;
    bool bVar6;
    char cVar7;
    char cVar8;
    u32 in_stack_00000000;
    float fStack_54;
    float fStack_48;
    float afStack_44[4];
    u8 auStack_34[16];
    u8 auStack_24[16];

    cVar8 = '\0';
    cVar7 = '\0';
    fVar3 = (float)((u64)in_dr4 >> 0x20);
    dVar4 = (double)CONCAT44((int)in_dr4, in_fr7);
    uVar1 = (u64)(u32)fVar3;
    ar5_00 = a1;
    fVar5 = fStack_48;
    if (0.0 < fVar3) {
        uVar1 = CONCAT44(0xbf000000, fVar3);
        rand_float(a0, a1, a2);
        fVar5 = (float)(uVar1 >> 0x20);
        if (cVar8 == '\0') {
            fVar5 = fStack_48;
        }
    }
    fStack_48 = fVar5;
    dVar2 = (double)(uVar1 & 0xffffffff);
    fVar5 = (float)((u64)dVar4 >> 0x20);
    if (cVar7 == '\0') {
        bVar6 = 0.0 < fVar5;
    } else {
        bVar6 = dVar2 < dVar4;
    }
    if (bVar6) {
        if (cVar8 == '\0') {
            dVar2 = (double)CONCAT44(0xbf000000, (int)uVar1);
        } else {
            dVar2 = -8.365700502157518e-251;
        }
        if (cVar7 == '\0') {
            dVar4 = (double)CONCAT44(fVar5 * (float)((u64)dVar2 >> 0x20), SUB84(dVar4, 0));
        } else {
            dVar4 = dVar4 * dVar2;
        }
        rand_float(a0, ar5_00, a2);
    }
    if (cVar8 == '\0') {
        dVar2 = (double)CONCAT44(in_fr6, SUB84(dVar2, 0));
    } else {
        dVar2 = (double)CONCAT44(a1, in_fr6);
    }
    if (cVar7 == '\0') {
        bVar6 = SUB84(dVar4, 0) < (float)((u64)dVar2 >> 0x20);
    } else {
        bVar6 = dVar4 < dVar2;
    }
    if (bVar6) {
        fStack_48 = SUB84(dVar4, 0);
        if (cVar8 != '\0') {
            fStack_48 = (float)in_xd12;
            afStack_44[0] = (float)((u64)in_xd12 >> 0x20);
        }
    } else {
        rand_float(a0, ar5_00, a2);
        fVar5 = (float)((u64)dVar2 >> 0x20);
        fStack_48 = fVar5;
        if (cVar8 != '\0') {
            fStack_54 = SUB84(dVar2, 0);
            fStack_48 = fStack_54;
            afStack_44[0] = fVar5;
        }
    }
    Vec3_set_xyz(auStack_24, ar5_00, a2, a3);
    ar5_01 = auStack_24;
    Vec3_sub_023484(a1, ar5_01, a2, a3, auStack_34);
    Vec3_sub_02374c(auStack_34, ar5_01, a2, a3);
    Vec3_scale(afStack_44, &fStack_48, a2, a3, in_stack_00000000);
    Vec3_dtor(afStack_44, 0xffffffff, a2, a3);
    Vec3_dtor(auStack_34, 0xffffffff, a2, a3);
    object_dtor_delete(auStack_24, 0xffffffff, a2, a3);
    return 0;
}

/*
 * game_sub_032788  0x8c032788
 * area name: game code; nothing names its area yet
 * called by: CMushroomerBody_sub_032518, Class_12ad14_sub_0a0c88, Vec3_sub_03f4a4, game_sub_055750, game_sub_078fd0,
 * game_sub_07b7d0, game_sub_07baa0, game_sub_07f56c (+9 more)
 */
float *game_sub_032788(u32 unused_a0, float *a1, float *a2, int *a3) {
    float in_fr1;
    double dVar1;
    double dVar2;
    u32 in_fr3;
    float in_fr4;
    float fVar3;
    float fVar4;
    float fVar5;
    float fVar6;
    u64 in_xd0;
    float in_PR;
    char cVar7;
    char cVar8;
    float *in_stack_00000000;
    float fStack_28;
    float fStack_24;
    float fStack_20;

    cVar8 = '\0';
    cVar7 = '\0';
    fVar5 = in_fr4 + *in_stack_00000000;
    fVar6 = (*a2 + *in_stack_00000000) - in_fr4;
    fVar3 = in_fr4 + in_stack_00000000[2];
    fVar4 = (a2[2] + in_stack_00000000[2]) - in_fr4;
    if (fVar5 < *a1) {
        if (fVar6 <= *a1) {
            in_fr1 = *a1 - fVar6;
            if (fVar5 < fVar6 - in_fr1) {
                *a1 = (fVar6 - (*a1 - fVar6)) - 1.0;
            } else {
                *a1 = fVar5 + 1.0;
            }
        }
    } else {
        in_fr1 = *a1;
        if ((fVar5 - in_fr1) + fVar5 < fVar6) {
            in_fr1 = (fVar5 - *a1) + fVar5 + 1.0;
            *a1 = in_fr1;
        } else {
            *a1 = fVar6 - 1.0;
        }
    }
    if (fVar3 < a1[2]) {
        fVar5 = a1[2];
        if (fVar4 <= fVar5) {
            in_fr1 = a1[2] - fVar4;
            if (fVar3 < fVar4 - in_fr1) {
                fVar5 = 1.0;
                a1[2] = (fVar4 - (a1[2] - fVar4)) - 1.0;
            } else {
                fVar5 = 1.0;
                a1[2] = fVar3 + 1.0;
            }
        }
    } else {
        in_fr1 = a1[2];
        if ((fVar3 - in_fr1) + fVar3 < fVar4) {
            in_fr1 = (fVar3 - a1[2]) + fVar3 + 1.0;
            fVar5 = 1.0;
            a1[2] = in_fr1;
        } else {
            fVar5 = 1.0;
            a1[2] = fVar4 - 1.0;
        }
    }
    (**(code **)(*a3 + 0x128))(a3, a1, a2, a3);
    fStack_24 = in_fr4;
    if (cVar8 != '\0') {
        in_xd0 = CONCAT44(a3, in_fr4);
        fStack_24 = in_fr1;
    }
    if (cVar7 == '\0') {
        fStack_24 = fStack_24 + fVar5;
    } else {
        fStack_24 = SUB84((double)CONCAT44(fVar5, fStack_24) + (double)CONCAT44(fVar5, fStack_24), 0);
    }
    if (cVar8 == '\0') {
        dVar1 = (double)CONCAT44(in_fr4, a2[1]);
        fStack_20 = in_PR;
    } else {
        fStack_24 = (float)in_xd0;
        fStack_20 = (float)((u64)in_xd0 >> 0x20);
        in_xd0 = *(u64 *)(a2 + 1);
        dVar1 = (double)CONCAT44(a3, in_fr4);
    }
    if (cVar7 == '\0') {
        fStack_28 = SUB84(dVar1, 0) - (float)((u64)dVar1 >> 0x20);
    } else {
        fStack_28 = SUB84(dVar1 - dVar1, 0);
    }
    if (cVar8 == '\0') {
        fVar3 = a1[1];
        fVar4 = fStack_24;
    } else {
        fStack_28 = (float)in_xd0;
        fStack_24 = (float)((u64)in_xd0 >> 0x20);
        in_xd0 = *(u64 *)(a1 + 1);
        fVar3 = fStack_24;
        fVar4 = fStack_20;
    }
    if (cVar7 == '\0' && fVar4 < fVar3) {
        if (cVar8 == '\0') {
            fVar3 = a1[1];
            fVar4 = fStack_28;
        } else {
            in_xd0 = *(u64 *)(a1 + 1);
            fVar3 = fStack_28;
            fVar4 = fStack_24;
        }
        if (cVar7 != '\0' || fVar4 <= fVar3) {
            if (cVar8 == '\0') {
                dVar1 = (double)CONCAT44(a1[1], in_fr3);
                dVar2 = (double)CONCAT44(fStack_28, fVar3);
            } else {
                dVar1 = *(double *)(a1 + 1);
                dVar2 = (double)CONCAT44(fStack_24, fStack_28);
            }
            fVar3 = (float)((u64)dVar2 >> 0x20);
            if (cVar7 == '\0') {
                dVar1 = (double)CONCAT44((float)((u64)dVar1 >> 0x20) - fVar3, SUB84(dVar1, 0));
            } else {
                dVar1 = dVar1 - dVar2;
            }
            if (cVar8 == '\0') {
                dVar2 = (double)CONCAT44(fVar3, fStack_28);
            } else {
                in_xd0 = CONCAT44(fStack_24, fStack_28);
            }
            if (cVar7 == '\0') {
                fVar3 = SUB84(dVar2, 0) - (float)((u64)dVar1 >> 0x20);
            } else {
                fVar3 = SUB84(dVar2 - dVar1, 0);
            }
            fVar4 = fStack_24;
            fVar5 = fStack_20;
            if (cVar8 == '\0') {
                fVar4 = fVar3;
                fVar5 = fStack_24;
            }
            if (cVar7 == '\0' && fVar5 < fVar4) {
                if (cVar8 == '\0') {
                    dVar1 = (double)CONCAT44(a1[1], SUB84(dVar1, 0));
                    dVar2 = (double)CONCAT44(fStack_28, fVar4);
                } else {
                    dVar1 = *(double *)(a1 + 1);
                    dVar2 = (double)CONCAT44(fStack_24, fStack_28);
                }
                fVar3 = (float)((u64)dVar2 >> 0x20);
                if (cVar7 == '\0') {
                    dVar1 = (double)CONCAT44((float)((u64)dVar1 >> 0x20) - fVar3, SUB84(dVar1, 0));
                } else {
                    dVar1 = dVar1 - dVar2;
                }
                if (cVar8 == '\0') {
                    dVar2 = (double)CONCAT44(fVar3, fStack_28);
                } else {
                    in_xd0 = CONCAT44(fStack_24, fStack_28);
                }
                if (cVar7 == '\0') {
                    fVar3 = SUB84(dVar2, 0) - (float)((u64)dVar1 >> 0x20);
                } else {
                    fVar3 = SUB84(dVar2 - dVar1, 0);
                }
                if (cVar7 == '\0') {
                    fVar3 = fVar3 - 1.0;
                } else {
                    fVar3 = SUB84((double)CONCAT44(0x3f800000, fVar3) - (double)CONCAT44(0x3f800000, fVar3), 0);
                }
                if (cVar8 == '\0') {
                    a1[1] = fVar3;
                } else {
                    *(u64 *)(a1 + 1) = in_xd0;
                }
            } else {
                if (cVar8 != '\0') {
                    in_xd0 = CONCAT44(fStack_20, fStack_24);
                    fStack_24 = fVar4;
                }
                if (cVar7 == '\0') {
                    fStack_24 = fStack_24 + 1.0;
                } else {
                    fStack_24 =
                        SUB84((double)CONCAT44(0x3f800000, fStack_24) + (double)CONCAT44(0x3f800000, fStack_24), 0);
                }
                if (cVar8 == '\0') {
                    a1[1] = fStack_24;
                } else {
                    *(u64 *)(a1 + 1) = in_xd0;
                }
            }
        }
    } else {
        if (cVar8 == '\0') {
            dVar1 = (double)CONCAT44(a1[1], fStack_24);
        } else {
            in_xd0 = CONCAT44(fStack_20, fStack_24);
            dVar1 = *(double *)(a1 + 1);
        }
        if (cVar7 == '\0') {
            fVar3 = SUB84(dVar1, 0) - (float)((u64)dVar1 >> 0x20);
        } else {
            fVar3 = SUB84(dVar1 - dVar1, 0);
        }
        if (cVar8 == '\0') {
            dVar1 = (double)CONCAT44(fStack_24, fVar3);
        } else {
            dVar1 = (double)CONCAT44(fStack_20, fStack_24);
        }
        if (cVar7 == '\0') {
            fVar3 = SUB84(dVar1, 0) + (float)((u64)dVar1 >> 0x20);
        } else {
            fVar3 = SUB84(dVar1 + dVar1, 0);
        }
        fVar4 = fStack_28;
        fVar5 = fStack_24;
        if (cVar8 == '\0') {
            fVar4 = fVar3;
            fVar5 = fStack_28;
        }
        if (cVar7 == '\0' && fVar4 < fVar5) {
            if (cVar8 == '\0') {
                dVar1 = (double)CONCAT44(a1[1], fStack_24);
            } else {
                in_xd0 = CONCAT44(fStack_20, fStack_24);
                dVar1 = *(double *)(a1 + 1);
            }
            if (cVar7 == '\0') {
                fVar3 = SUB84(dVar1, 0) - (float)((u64)dVar1 >> 0x20);
            } else {
                fVar3 = SUB84(dVar1 - dVar1, 0);
            }
            if (cVar8 == '\0') {
                dVar1 = (double)CONCAT44(fStack_24, fVar3);
            } else {
                dVar1 = (double)CONCAT44(fStack_20, fStack_24);
            }
            if (cVar7 == '\0') {
                fVar3 = SUB84(dVar1, 0) + (float)((u64)dVar1 >> 0x20);
            } else {
                fVar3 = SUB84(dVar1 + dVar1, 0);
            }
            if (cVar7 == '\0') {
                fVar3 = fVar3 + 1.0;
            } else {
                fVar3 = SUB84((double)CONCAT44(0x3f800000, fVar3) + (double)CONCAT44(0x3f800000, fVar3), 0);
            }
            if (cVar8 == '\0') {
                a1[1] = fVar3;
            } else {
                *(u64 *)(a1 + 1) = in_xd0;
            }
        } else {
            if (cVar8 != '\0') {
                in_xd0 = CONCAT44(fStack_24, fStack_28);
                fStack_28 = fVar4;
            }
            if (cVar7 == '\0') {
                fStack_28 = fStack_28 - 1.0;
            } else {
                fStack_28 = SUB84((double)CONCAT44(0x3f800000, fStack_28) - (double)CONCAT44(0x3f800000, fStack_28), 0);
            }
            if (cVar8 == '\0') {
                a1[1] = fStack_28;
            } else {
                *(u64 *)(a1 + 1) = in_xd0;
            }
        }
    }
    return a1;
}

/*
 * game_sub_0329ac  0x8c0329ac
 * area name: game code; nothing names its area yet
 * called by: CMushroomerBody_sub_032518, Class_12a25c_sub_06f93c, Class_12ad14_sub_0a0c88, game_sub_07baa0
 */
u32 game_sub_0329ac(u32 unused_a0, float *a1, float *a2, int *a3) {
    float fVar1;
    double dVar2;
    u64 uVar3;
    float in_fr4;
    u32 in_fr14;
    char cVar4;
    char cVar5;
    float *in_stack_00000000;

    cVar5 = '\0';
    cVar4 = '\0';
    if ((((in_fr4 + *in_stack_00000000 < *a1) && (*a1 < (*a2 + *in_stack_00000000) - in_fr4)) &&
         (in_fr4 + in_stack_00000000[2] < a1[2])) &&
        (fVar1 = (a2[2] + in_stack_00000000[2]) - in_fr4, dVar2 = (double)CONCAT44(a1[2], fVar1), a1[2] < fVar1)) {
        (**(code **)(*a3 + 0x128))(a3, a1, a2, a3);
        if (cVar5 == '\0') {
            dVar2 = (double)CONCAT44((int)((u64)dVar2 >> 0x20), in_fr4);
        }
        if (cVar4 == '\0') {
            fVar1 = SUB84(dVar2, 0) + (float)((u64)dVar2 >> 0x20);
        } else {
            fVar1 = SUB84(dVar2 + dVar2, 0);
        }
        if (cVar5 == '\0') {
            dVar2 = (double)CONCAT44(a1[1], fVar1);
        } else {
            dVar2 = *(double *)(a1 + 1);
        }
        fVar1 = (float)((u64)dVar2 >> 0x20);
        if (cVar4 == '\0' && SUB84(dVar2, 0) < fVar1) {
            if (cVar5 == '\0') {
                dVar2 = (double)CONCAT44(fVar1, a2[1]);
            }
            if (cVar4 == '\0') {
                fVar1 = SUB84(dVar2, 0) - in_fr4;
            } else {
                fVar1 = SUB84(dVar2 - (double)CONCAT44(in_fr14, in_fr4), 0);
            }
            if (cVar5 == '\0') {
                uVar3 = CONCAT44(a1[1], fVar1);
            } else {
                uVar3 = *(u64 *)(a1 + 1);
            }
            if (cVar4 == '\0' && (float)((u64)uVar3 >> 0x20) < (float)uVar3) {
                return 1;
            }
        }
    }
    return 0;
}

/*
 * rand_range  0x8c032a64
 * called by: CMushroomerBody_AwayFrom, Class_12a03c_sub_03c100, Class_12ad14_m3_0a427c, Class_12b2ac_m5_0afddc,
 * Class_12b2ac_sub_0b0784, Vec3_sub_03f4a4, game_sub_032af8, game_sub_03c94c (+48 more)
 */
int rand_range(u32 a0, int a1, int a2) {
    int iVar1;
    double dVar2;
    u32 in_fr3;
    double dVar3;
    char cVar4;
    char cVar5;

    cVar5 = '\0';
    cVar4 = '\0';
    iVar1 = rand();
    if (cVar4 == '\0') {
        dVar3 = (double)CONCAT44((float)(a2 - a1), in_fr3);
    } else {
        dVar3 = (double)(a2 - a1);
    }
    if (cVar5 == '\0') {
        dVar2 = (double)CONCAT44(0x47000000, (float)iVar1);
    } else {
        dVar2 = -1.5729774447110699e+308;
    }
    if (cVar4 == '\0') {
        iVar1 = (int)((float)((u64)dVar3 >> 0x20) * (SUB84(dVar2, 0) / (float)((u64)dVar2 >> 0x20)));
    } else {
        iVar1 = (int)(dVar3 * (dVar2 / dVar2));
    }
    return iVar1 + a1;
}

/*
 * rand_float  0x8c032ab0
 * rand() scaled to a float (result in fr0)
 * called by: CMushroomerBody_AwayFrom, CMushroomerBody_sub_031bb4, Class_12a25c_sub_06f93c, Class_12ad14_sub_0a37c8,
 * Class_12b2ac_m5_0afddc, Class_12b2ac_sub_0b5344, Vec3_sub_03f4a4, game_sub_03263c (+37 more)
 */
u32 *rand_float(u32 a0, u32 a1, u32 a2) {
    rand();
    return &g_8c032af4;
}

/*
 * game_sub_032af8  0x8c032af8
 * area name: game code; nothing names its area yet
 * called by: game_sub_0530e0, game_sub_0b1ac0
 */
int game_sub_032af8(u32 a0, int a1, int a2, int a3) {
    int iVar1;
    int iVar2;
    int iVar3;
    u32 in_fr1;
    double dVar4;
    float fVar5;
    double dVar6;
    float fVar7;
    bool bVar8;
    char cVar9;
    char cVar10;

    cVar10 = '\0';
    cVar9 = '\0';
    iVar3 = a1;
    if (a1 != a2) {
        iVar1 = rand_range(a0, a1, a2);
        iVar3 = a2;
        iVar2 = rand_range(a0, a1, a2);
        iVar3 = libgcc_divide_helper_0101e4(iVar1 + iVar2, 2);
        if (cVar9 == '\0') {
            dVar6 = (double)CONCAT44((float)(a3 + -0x32), (float)iVar3);
        } else {
            dVar6 = (double)(a3 + -0x32);
        }
        if (cVar10 == '\0') {
            dVar4 = (double)CONCAT44(0x3c23d70a, in_fr1);
        } else {
            dVar4 = -1.5729774083467465e+308;
        }
        if (cVar9 == '\0') {
            fVar7 = (float)((u64)dVar6 >> 0x20) * (float)((u64)dVar4 >> 0x20) * (float)(a2 - a1);
            fVar5 = SUB84(dVar6, 0) + fVar7;
            dVar6 = (double)CONCAT44(fVar7, fVar5);
            bVar8 = (float)a2 < fVar5;
        } else {
            dVar6 = dVar6 * dVar4 * (double)(a2 - a1);
            dVar6 = dVar6 + dVar6;
            fVar5 = SUB84(dVar6, 0);
            bVar8 = (double)a2 < dVar6;
        }
        if (bVar8) {
            if (cVar9 == '\0') {
                iVar3 = (int)((float)(a2 << 1) - fVar5);
            } else {
                iVar3 = (int)((double)(a2 << 1) - dVar6);
            }
        } else {
            if (cVar9 == '\0') {
                bVar8 = fVar5 < (float)a1;
            } else {
                bVar8 = dVar6 < (double)a1;
            }
            if (bVar8) {
                if (cVar9 == '\0') {
                    iVar3 = (int)((float)(a1 << 1) - fVar5);
                } else {
                    iVar3 = (int)((double)(a1 << 1) - dVar6);
                }
            } else if (cVar9 == '\0') {
                iVar3 = (int)fVar5;
            } else {
                iVar3 = (int)dVar6;
            }
        }
    }
    if (iVar3 < a1) {
        iVar3 = a1;
    }
    if (a2 < iVar3) {
        iVar3 = a2;
    }
    return iVar3;
}

/*
 * game_sub_032be0  0x8c032be0
 * area name: game code; nothing names its area yet
 * called by: game_sub_046684
 */
u32 *game_sub_032be0(u32 a0, int a1, u32 a2) {
    u32 *puVar1;
    int ar5_00;
    float in_fr1;
    float fVar3;
    float fVar4;
    double dVar2;
    float fVar5;
    u64 in_dr4;
    float fVar6;
    double dVar7;
    u32 in_fr15;
    double dVar8;
    u64 in_xd0;
    bool bVar9;
    u32 in_PR;
    char cVar10;
    char cVar11;
    float fStack_28;
    float fStack_24;
    float fStack_20;
    float fStack_1c;
    u32 uStack_18;

    cVar11 = '\0';
    cVar10 = '\0';
    fVar6 = (float)((u64)in_dr4 >> 0x20);
    dVar8 = (double)CONCAT44(fVar6, in_fr15);
    fVar5 = (float)in_dr4;
    fVar3 = fVar5 - fVar6;
    puVar1 = (u32 *)0xc;
    if (fVar6 != fVar5) {
        ar5_00 = a1;
        fVar4 = fVar3;
        rand_float(a0, a1, a2);
        fStack_28 = fVar4;
        fStack_20 = in_fr1;
        fVar6 = fVar4;
        if (cVar11 == '\0') {
            fStack_28 = fVar3;
            fStack_20 = fVar4;
            fVar6 = fStack_1c;
        }
        fStack_1c = fVar6;
        rand_float(a0, ar5_00, a2);
        if (cVar11 == '\0') {
            dVar7 = (double)CONCAT44(fStack_20, fVar5);
            fStack_24 = fVar4;
        } else {
            dVar7 = (double)CONCAT44(fStack_1c, fVar4);
            fStack_24 = in_fr1;
        }
        if (cVar10 == '\0') {
            dVar7 = (double)CONCAT44((float)((u64)dVar7 >> 0x20) + fVar4, SUB84(dVar7, 0));
        } else {
            dVar7 = dVar7 + (double)CONCAT44(fVar4, in_fr1);
        }
        if (cVar11 == '\0') {
            dVar2 = (double)CONCAT44(0x40000000, in_fr1);
        } else {
            dVar2 = 5.377642816887133e-19;
        }
        if (cVar10 == '\0') {
            dVar7 = (double)CONCAT44((float)((u64)dVar7 >> 0x20) / (float)((u64)dVar2 >> 0x20), SUB84(dVar7, 0));
        } else {
            dVar7 = dVar7 / dVar2;
        }
        if (cVar11 == '\0') {
            dVar2 = (double)CONCAT44(0x3c23d70a, (float)(a1 + -0x32));
        } else {
            dVar2 = 2.9939311649880902e-78;
        }
        if (cVar10 == '\0') {
            fVar3 = SUB84(dVar2, 0) * (float)((u64)dVar2 >> 0x20);
        } else {
            fVar3 = SUB84(dVar2 * dVar2, 0);
        }
        if (cVar11 == '\0') {
            dVar2 = (double)CONCAT44(fStack_28, fVar3);
        } else {
            dVar2 = (double)CONCAT44(fStack_24, fStack_28);
        }
        if (cVar10 == '\0') {
            fVar3 = SUB84(dVar2, 0) * (float)((u64)dVar2 >> 0x20);
        } else {
            fVar3 = SUB84(dVar2 * dVar2, 0);
        }
        fStack_1c = fVar3;
        uStack_18 = in_PR;
        if (cVar11 != '\0') {
            fStack_1c = (float)in_xd0;
            uStack_18 = (u32)((u64)in_xd0 >> 0x20);
        }
        puVar1 = (u32 *)0x18;
        if (cVar11 == '\0') {
            dVar2 = (double)CONCAT44(fStack_1c, fVar3);
        } else {
            dVar2 = (double)CONCAT44(uStack_18, fStack_1c);
        }
        if (cVar10 == '\0') {
            dVar7 = (double)CONCAT44((float)((u64)dVar7 >> 0x20) + (float)((u64)dVar2 >> 0x20), SUB84(dVar7, 0));
        } else {
            dVar7 = dVar7 + dVar2;
        }
        fVar3 = (float)((u64)dVar7 >> 0x20);
        if (cVar10 != '\0' || fVar3 <= SUB84(dVar7, 0)) {
            if (cVar10 == '\0') {
                bVar9 = fVar3 < (float)((u64)dVar8 >> 0x20);
            } else {
                bVar9 = dVar7 < dVar8;
            }
            if (bVar9) {
                puVar1 = &g_8c032cb0;
            }
        } else {
            puVar1 = &g_8c032cb0;
        }
    }
    return puVar1;
}

/*
 * game_sub_032cb8  0x8c032cb8
 * area name: game code; nothing names its area yet
 * called by: Class_12b088_sub_03220c
 */
u32 game_sub_032cb8(u32 unused_a0, float *a1, float *a2, u32 a3) {
    u32 uVar1;
    u32 uStack_3c;
    float fStack_34;
    float fStack_30;
    float fStack_2c;
    float fStack_28;
    float fStack_24;
    float fStack_20;
    float *pfStack_1c;
    u32 *puStack_18;
    u32 uStack_14;
    u32 uStack_10;

    pfStack_1c = &fStack_34;
    puStack_18 = &uStack_3c;
    uStack_14 = 0;
    uStack_10 = 2;
    fStack_34 = *a1;
    fStack_30 = a1[1];
    fStack_2c = a1[2];
    fStack_28 = fStack_34 + *a2;
    fStack_24 = fStack_30 + a2[1];
    fStack_20 = fStack_2c + a2[2];
    uStack_3c = a3;
    uVar1 = gfxlib_sub_234d68(&pfStack_1c, 1, 0, a3);
    return uVar1;
}

/*
 * game_sub_032d48  0x8c032d48
 * area name: game code; nothing names its area yet
 * called by: game_sub_071a38, game_sub_07c5f8, game_sub_07d048
 */
u32 game_sub_032d48(int a0, int a1, int a2, int a3) {
    int iVar1;
    int iVar2;
    int ar6_00;
    int ar7_00;
    u32 uVar3;
    u32 uVar4;
    float fVar5;
    double in_dr0;
    double dVar6;
    float fVar8;
    u64 uVar7;
    u32 in_fr3;
    double dVar9;
    u64 in_xd0;
    bool bVar10;
    char cVar11;
    char cVar12;
    u8 auStack_b4[16];
    u8 auStack_a4[16];
    u8 auStack_94[16];
    u8 auStack_84[12];
    u8 auStack_78[12];
    u8 auStack_6c[12];
    u8 auStack_60[16];
    u8 auStack_50[16];
    u8 auStack_40[16];
    float fStack_30;
    float fStack_2c;
    float fStack_28;
    u32 auStack_24[5];

    cVar12 = '\0';
    cVar11 = '\0';
    uVar3 = 1;
    iVar2 = a1;
    ar6_00 = a2;
    ar7_00 = a3;
    Vec3_ctor_zero(auStack_24, a1, a2);
    Vec3_set_zero(&fStack_30);
    iVar1 = *(int *)(a0 + 0x1e8);
    if ((iVar1 < 7) && (-1 < iVar1)) {
        switch (iVar1) {
        case 0:
            Vec3_scale(a3, &g_8c132bfc, ar6_00, ar7_00, auStack_40);
            Vec3_assign(auStack_24, auStack_40, ar6_00, ar7_00);
            Vec3_dtor(auStack_40, 0xffffffff, ar6_00, ar7_00);
            Vec3_scale(auStack_24, &g_8c132c00, ar6_00, ar7_00, auStack_50);
            Vec3_add(a2, auStack_50, ar6_00, ar7_00, auStack_60);
            Vec3_assign(a0 + 0x54, auStack_60, ar6_00, ar7_00);
            Vec3_dtor(auStack_60, 0xffffffff, ar6_00, ar7_00);
            Vec3_dtor(auStack_50, 0xffffffff, ar6_00, ar7_00);
            CMushroomerBody_sub_031bb4(a0, a1, a0 + 0x54, ar7_00);
            *(int *)(a0 + 0x1e8) = *(int *)(a0 + 0x1e8) + 1;
        case 1:
            iVar2 = CMushroomerBody_sub_031764(a0, a0 + 0x54, a1, ar7_00);
            ar6_00 = a1;
            if (iVar2 == 0) {
                *(u32 *)(a0 + 0x40) = 5;
                *(int *)(a0 + 0x1e8) = *(int *)(a0 + 0x1e8) + 1;
            }
            break;
        case 2:
            Vec3_set_xyz(auStack_6c, iVar2, ar6_00, ar7_00);
            ar7_00 = a0 + 0x14;
            game_sub_0332b4(a0, a1, a2, ar7_00, auStack_78, auStack_6c);
            vec3_copy_8c023d8c(a0 + 0x1ec, auStack_78, a2, ar7_00);
            object_dtor_delete(auStack_78, 0xffffffff, a2, ar7_00);
            object_dtor_delete(auStack_6c, 0xffffffff, a2, ar7_00);
            *(int *)(a0 + 0x1e8) = *(int *)(a0 + 0x1e8) + 1;
            ar6_00 = a2;
        case 3:
            if (cVar12 == '\0') {
                dVar6 = (double)CONCAT44(0x41200000, *(u32 *)(a0 + 0x1ec));
            } else {
                in_xd0 = *(u64 *)(a0 + 0x1ec);
                dVar6 = 4.33426965481473e-312;
            }
            if (cVar11 == '\0') {
                fStack_30 = SUB84(dVar6, 0) / (float)((u64)dVar6 >> 0x20);
            } else {
                fStack_30 = SUB84(dVar6 / dVar6, 0);
            }
            if (cVar12 == '\0') {
                dVar6 = (double)CONCAT44(0x41200000, *(u32 *)(a0 + 0x1f0));
            } else {
                fStack_30 = (float)in_xd0;
                in_xd0 = *(u64 *)(a0 + 0x1f0);
                dVar6 = 4.33426965481473e-312;
            }
            if (cVar11 == '\0') {
                fStack_2c = SUB84(dVar6, 0) / (float)((u64)dVar6 >> 0x20);
            } else {
                fStack_2c = SUB84(dVar6 / dVar6, 0);
            }
            if (cVar12 == '\0') {
                dVar6 = (double)CONCAT44(0x41200000, *(u32 *)(a0 + 500));
            } else {
                fStack_2c = (float)in_xd0;
                in_xd0 = *(u64 *)(a0 + 500);
                dVar6 = 4.33426965481473e-312;
            }
            if (cVar11 == '\0') {
                fVar5 = SUB84(dVar6, 0) / (float)((u64)dVar6 >> 0x20);
            } else {
                fVar5 = SUB84(dVar6 / dVar6, 0);
            }
            fStack_28 = fVar5;
            if (cVar12 != '\0') {
                fStack_28 = (float)in_xd0;
                auStack_24[0] = (u32)((u64)in_xd0 >> 0x20);
            }
            vec3_copy_8c02b5fc(auStack_84, &fStack_30, ar6_00);
            Vec3_sub_023484(a0 + 0x14, auStack_84, ar6_00, ar7_00, auStack_94);
            Vec3_assign(a0 + 0x14, auStack_94, ar6_00, ar7_00);
            Vec3_dtor(auStack_94, 0xffffffff, ar6_00, ar7_00);
            object_dtor_delete(auStack_84, 0xffffffff, ar6_00, ar7_00);
            if (cVar12 == '\0') {
                fVar5 = *(float *)(a0 + 0x1f8);
            } else {
                in_xd0 = *(u64 *)(a0 + 0x1f8);
            }
            if (cVar11 == '\0') {
                fVar5 = fVar5 + 1.0;
            } else {
                fVar5 = SUB84((double)CONCAT44(0x3f800000, fVar5) + (double)CONCAT44(0x3f800000, fVar5), 0);
            }
            if (cVar12 == '\0') {
                *(float *)(a0 + 0x1f8) = fVar5;
                uVar7 = CONCAT44(0x41200000, *(u32 *)(a0 + 0x1f8));
            } else {
                *(u64 *)(a0 + 0x1f8) = in_xd0;
                uVar7 = 0xcc41200000;
            }
            if (cVar11 != '\0' || (float)(uVar7 >> 0x20) <= (float)uVar7) {
                if (cVar12 == '\0') {
                    *(u32 *)(a0 + 0x1f8) = 0;
                } else {
                    *(u64 *)(a0 + 0x1f8) = uVar7 & 0xffffffff;
                }
                *(int *)(a0 + 0x1e8) = *(int *)(a0 + 0x1e8) + 1;
            }
            break;
        case 4:
            Vec3_add(a1, a2, ar6_00, ar7_00, auStack_a4);
            Class_1299f8_sub_023c30(auStack_a4, &g_8c132c04, ar6_00, ar7_00, auStack_b4);
            Vec3_assign(a0 + 0x54, auStack_b4, ar6_00, ar7_00);
            Vec3_dtor(auStack_b4, 0xffffffff, ar6_00, ar7_00);
            Vec3_dtor(auStack_a4, 0xffffffff, ar6_00, ar7_00);
            ar6_00 = a0 + 0x54;
            CMushroomerBody_sub_031bb4(a0, a1, ar6_00, ar7_00);
            *(int *)(a0 + 0x1e8) = *(int *)(a0 + 0x1e8) + 1;
        case 5:
            iVar2 = a0 + 0x54;
            Vec3_distance_sq(a1, iVar2, ar6_00, ar7_00);
            if (cVar12 == '\0') {
                in_dr0 = (double)CONCAT44((int)((u64)in_dr0 >> 0x20), in_fr3);
                dVar6 = (double)CONCAT44(0x42480000, *(u32 *)(a0 + 0x28));
            } else {
                in_xd0 = *(u64 *)(a0 + 0x28);
                dVar6 = -8.341321687789945e-251;
            }
            if (cVar11 == '\0') {
                fVar8 = (float)((u64)dVar6 >> 0x20);
                fVar5 = SUB84(dVar6, 0) * fVar8;
                dVar6 = (double)CONCAT44(fVar8, fVar5);
                bVar10 = fVar5 < (float)((u64)in_dr0 >> 0x20);
            } else {
                dVar6 = dVar6 * dVar6;
                bVar10 = dVar6 < in_dr0;
            }
            if (!bVar10) {
                Vec3_distance_sq(a1, a2, ar6_00, ar7_00);
                if (cVar12 == '\0') {
                    dVar9 = (double)CONCAT44(*(u32 *)(a0 + 0x28), SUB84(in_dr0, 0));
                } else {
                    dVar9 = *(double *)(a0 + 0x28);
                }
                fVar5 = (float)((u64)dVar6 >> 0x20);
                if (cVar11 == '\0') {
                    dVar9 = (double)CONCAT44((float)((u64)dVar9 >> 0x20) / fVar5, SUB84(dVar9, 0));
                } else {
                    dVar9 = dVar9 / dVar6;
                }
                if (cVar11 == '\0') {
                    fVar5 = 1.0 - (float)((u64)dVar9 >> 0x20);
                } else {
                    fVar5 = SUB84((double)CONCAT44(fVar5, 0x3f800000) - dVar9, 0);
                }
                if (cVar12 == '\0') {
                    dVar6 = (double)CONCAT44(*(u32 *)(a0 + 0x28), fVar5);
                } else {
                    dVar6 = *(double *)(a0 + 0x28);
                }
                if (cVar11 == '\0') {
                    dVar6 = (double)(u64)(u32)(SUB84(dVar6, 0) * (float)((u64)dVar6 >> 0x20));
                } else {
                    dVar6 = dVar6 * dVar6;
                }
                iVar2 = a2;
                if (cVar12 == '\0') {
                    *(int *)(a0 + 0x28) = SUB84(dVar6, 0);
                } else {
                    *(u64 *)(a0 + 0x28) = in_xd0;
                }
            }
            uVar4 = SUB84(dVar6, 0);
            timer_start_24(a0);
            iVar2 = CMushroomerBody_sub_031764(a0, a0 + 0x54, a1, ar7_00);
            ar6_00 = a1;
            if (iVar2 == 0) {
                *(int *)(a0 + 0x1e8) = *(int *)(a0 + 0x1e8) + 1;
                *(u32 *)(a0 + 0x40) = 3;
                if (cVar12 == '\0') {
                    *(u32 *)(a0 + 0x48) = 0x3f800000;
                } else {
                    *(u64 *)(a0 + 0x48) = CONCAT44(0x3f800000, uVar4);
                }
            }
            break;
        case 6:
            iVar2 = a2;
            Vec3_distance_sq(a1, a2, ar6_00, ar7_00);
            if (cVar12 == '\0') {
                in_dr0 = (double)CONCAT44((int)((u64)in_dr0 >> 0x20), in_fr3);
                dVar6 = (double)CONCAT44(0x42480000, *(u32 *)(a0 + 0x28));
            } else {
                in_xd0 = *(u64 *)(a0 + 0x28);
                dVar6 = 5.2386907559463314e-11;
            }
            if (cVar11 == '\0') {
                fVar8 = (float)((u64)dVar6 >> 0x20);
                fVar5 = SUB84(dVar6, 0) * fVar8;
                dVar6 = (double)CONCAT44(fVar8, fVar5);
                bVar10 = fVar5 < (float)((u64)in_dr0 >> 0x20);
            } else {
                dVar6 = dVar6 * dVar6;
                bVar10 = dVar6 < in_dr0;
            }
            if (!bVar10) {
                iVar2 = a2;
                Vec3_distance_sq(a1, a2, ar6_00, ar7_00);
                if (cVar12 == '\0') {
                    dVar9 = (double)CONCAT44(*(u32 *)(a0 + 0x28), SUB84(in_dr0, 0));
                } else {
                    dVar9 = *(double *)(a0 + 0x28);
                }
                fVar5 = (float)((u64)dVar6 >> 0x20);
                if (cVar11 == '\0') {
                    dVar9 = (double)CONCAT44((float)((u64)dVar9 >> 0x20) / fVar5, SUB84(dVar9, 0));
                } else {
                    dVar9 = dVar9 / dVar6;
                }
                if (cVar11 == '\0') {
                    fVar5 = 1.0 - (float)((u64)dVar9 >> 0x20);
                } else {
                    fVar5 = SUB84((double)CONCAT44(fVar5, 0x3f800000) - dVar9, 0);
                }
                if (cVar12 == '\0') {
                    dVar6 = (double)CONCAT44(*(u32 *)(a0 + 0x28), fVar5);
                } else {
                    dVar6 = *(double *)(a0 + 0x28);
                }
                if (cVar11 == '\0') {
                    fVar5 = SUB84(dVar6, 0) * (float)((u64)dVar6 >> 0x20);
                } else {
                    fVar5 = SUB84(dVar6 * dVar6, 0);
                }
                if (cVar12 == '\0') {
                    *(float *)(a0 + 0x28) = fVar5;
                } else {
                    *(u64 *)(a0 + 0x28) = in_xd0;
                }
            }
            if (cVar12 == '\0') {
                uVar7 = CONCAT44(0x3dcccccd, *(u32 *)(a0 + 0x28));
            } else {
                uVar7 = 0x8c031c643dcccccd;
            }
            if (cVar11 == '\0' && (float)uVar7 < (float)(uVar7 >> 0x20)) {
                if (cVar12 == '\0') {
                    uVar7 = CONCAT44(0x3dcccccd, (float)uVar7);
                    *(u32 *)(a0 + 0x28) = 0x3dcccccd;
                } else {
                    uVar7 = 0x8c031c643dcccccd;
                    *(u64 *)(a0 + 0x28) = 0x8c031c643dcccccd;
                }
            }
            timer_start_24(a0);
            ar6_00 = a1;
            CMushroomerBody_sub_031764(a0, a2, a1, ar7_00);
            Vec3_distance_sq(a1, a2, ar6_00, ar7_00);
            if (cVar12 == '\0') {
                uVar7 = uVar7 >> 0x20;
            }
            if (cVar11 != '\0' || (float)uVar7 <= 1.0) {
                if (cVar12 == '\0') {
                    *(u32 *)(a0 + 0x28) = 0;
                } else {
                    *(u64 *)(a0 + 0x28) = uVar7 & 0xffffffff;
                }
                uVar3 = 0;
                *(u32 *)(a0 + 0x1e8) = 0;
            }
        }
    }
    object_dtor_delete(&fStack_30, 0xffffffff, ar6_00, ar7_00);
    Vec3_dtor(auStack_24, 0xffffffff, ar6_00, ar7_00);
    return uVar3;
}

/*
 * game_sub_0332b4  0x8c0332b4
 * area name: game code; nothing names its area yet
 * called by: CAnimal_sub_036adc, game_sub_031eb0, game_sub_032d48, game_sub_085c3c
 */
u32 game_sub_0332b4(u32 unused_a0, u32 a1, u32 a2, u32 a3, u32 s0, float *s4) {
    u32 uVar1;
    u8 *ar5_00;
    u32 ar6_00;
    u32 ar7_00;
    double in_dr0;
    float fVar5;
    int iVar6;
    u64 uVar2;
    double dVar3;
    double dVar4;
    double in_dr2;
    u64 in_xd0;
    bool bVar7;
    char cVar8;
    char cVar9;
    int iStack_68;
    int iStack_64;
    u8 auStack_58[16];
    u8 auStack_48[16];
    u8 auStack_38[16];
    u8 auStack_28[16];
    float fStack_18;
    float fStack_14;
    float fStack_10;

    cVar9 = '\0';
    cVar8 = '\0';
    ar6_00 = a2;
    ar7_00 = a3;
    Vec3_set_zero(&fStack_18);
    Vec3_sub(a2, a1, ar6_00, ar7_00, auStack_38);
    uVar1 = Vec3_length(auStack_38, a1, ar6_00, ar7_00);
    Vec3_ctor_copy(auStack_28, uVar1, ar6_00, ar7_00);
    uVar1 = 0xffffffff;
    Vec3_dtor(auStack_38, 0xffffffff, ar6_00, ar7_00);
    Vec3_make(a3, uVar1, ar6_00, ar7_00, auStack_48);
    Vec3_make(auStack_28, uVar1, ar6_00, ar7_00, auStack_58);
    Vec3_cos_angle(auStack_48, auStack_58, ar6_00, ar7_00);
    fStack_14 = SUB84(in_dr0, 0);
    fVar5 = (float)((u64)in_dr0 >> 0x20);
    if (cVar9 == '\0') {
        fStack_14 = fVar5;
        fVar5 = fStack_10;
    }
    fStack_10 = fVar5;
    Vec3_dtor(auStack_58, 0xffffffff, ar6_00, ar7_00);
    Vec3_dtor(auStack_48, 0xffffffff, ar6_00, ar7_00);
    ar5_00 = auStack_28;
    iStack_64 = Vec3_sub_023334(a3, ar5_00, ar6_00, ar7_00);
    if (iStack_64 == 4) {
        if (cVar9 == '\0') {
            in_dr0 = (double)CONCAT44(0xbf800000, fStack_14);
        } else {
            in_xd0 = CONCAT44(fStack_10, fStack_14);
            in_dr0 = -7.941325842067545e-251;
        }
        if (cVar8 == '\0') {
            fVar5 = (float)((u64)in_dr0 >> 0x20);
            in_dr0 = (double)CONCAT44(fVar5, SUB84(in_dr0, 0) * fVar5);
        } else {
            in_dr0 = in_dr0 * in_dr0;
        }
        if (cVar9 == '\0') {
            fStack_14 = SUB84(in_dr0, 0);
        } else {
            fStack_14 = (float)in_xd0;
            fStack_10 = (float)((u64)in_xd0 >> 0x20);
        }
    }
    Vec3_sub_0231c8(auStack_28, ar5_00, ar6_00, ar7_00);
    iVar6 = (int)((u64)in_dr0 >> 0x20);
    iStack_68 = iVar6;
    if (cVar9 != '\0') {
        iStack_68 = SUB84(in_dr0, 0);
        iStack_64 = iVar6;
    }
    Vec3_sub_0231c8(a3, ar5_00, ar6_00, ar7_00);
    uVar1 = (u32)((u64)in_dr0 >> 0x20);
    if (cVar9 == '\0') {
        in_dr0 = (double)CONCAT44(uVar1, iStack_68);
    } else {
        in_xd0 = CONCAT44(iStack_64, uVar1);
    }
    if (cVar8 == '\0') {
        fStack_18 = SUB84(in_dr0, 0) - (float)((u64)in_dr0 >> 0x20);
    } else {
        fStack_18 = SUB84(in_dr0 - in_dr0, 0);
    }
    if (cVar9 == '\0') {
        uVar2 = CONCAT44(*s4, fStack_18);
    } else {
        fStack_18 = (float)in_xd0;
        fStack_14 = (float)((u64)in_xd0 >> 0x20);
        uVar2 = *(u64 *)s4;
    }
    if (cVar8 != '\0' || (float)uVar2 <= (float)((u64)uVar2 >> 0x20)) {
        if (cVar9 == '\0') {
            in_dr2 = (double)CONCAT44(fStack_18, SUB84(in_dr2, 0));
            dVar4 = (double)CONCAT44(0xbf800000, *s4);
        } else {
            in_dr2 = (double)CONCAT44(fStack_14, fStack_18);
            in_xd0 = *(u64 *)s4;
            dVar4 = -7.941325842067545e-251;
        }
        if (cVar8 == '\0') {
            bVar7 = (float)((u64)in_dr2 >> 0x20) < SUB84(dVar4, 0) * (float)((u64)dVar4 >> 0x20);
        } else {
            bVar7 = in_dr2 < dVar4 * dVar4;
        }
        if (bVar7) {
            if (cVar9 == '\0') {
                dVar4 = (double)CONCAT44(0xbf800000, *s4);
            } else {
                in_xd0 = *(u64 *)s4;
                dVar4 = -7.941325842067545e-251;
            }
            if (cVar8 == '\0') {
                fStack_18 = SUB84(dVar4, 0) * (float)((u64)dVar4 >> 0x20);
            } else {
                fStack_18 = SUB84(dVar4 * dVar4, 0);
            }
            if (cVar9 != '\0') {
                fStack_18 = (float)in_xd0;
                fStack_14 = (float)((u64)in_xd0 >> 0x20);
            }
        }
    } else if (cVar9 == '\0') {
        fStack_18 = *s4;
    } else {
        fStack_18 = (float)*(u64 *)s4;
        fStack_14 = (float)((u64) * (u64 *)s4 >> 0x20);
    }
    if (cVar9 == '\0') {
        uVar2 = CONCAT44(s4[1], fStack_14);
    } else {
        in_xd0 = CONCAT44(fStack_10, fStack_14);
        uVar2 = *(u64 *)(s4 + 1);
    }
    if (cVar8 != '\0' || (float)uVar2 <= (float)((u64)uVar2 >> 0x20)) {
        if (cVar9 == '\0') {
            dVar4 = (double)CONCAT44(fStack_14, SUB84(in_dr2, 0));
            dVar3 = (double)CONCAT44(0xbf800000, s4[1]);
        } else {
            dVar4 = (double)CONCAT44(fStack_10, fStack_14);
            in_xd0 = *(u64 *)(s4 + 1);
            dVar3 = -7.941325842067545e-251;
        }
        if (cVar8 == '\0') {
            bVar7 = (float)((u64)dVar4 >> 0x20) < SUB84(dVar3, 0) * (float)((u64)dVar3 >> 0x20);
        } else {
            bVar7 = dVar4 < dVar3 * dVar3;
        }
        if (bVar7) {
            if (cVar9 == '\0') {
                dVar4 = (double)CONCAT44(0xbf800000, s4[1]);
            } else {
                in_xd0 = *(u64 *)(s4 + 1);
                dVar4 = -7.941325842067545e-251;
            }
            if (cVar8 == '\0') {
                fStack_14 = SUB84(dVar4, 0) * (float)((u64)dVar4 >> 0x20);
            } else {
                fStack_14 = SUB84(dVar4 * dVar4, 0);
            }
            if (cVar9 != '\0') {
                fStack_14 = (float)in_xd0;
                fStack_10 = (float)((u64)in_xd0 >> 0x20);
            }
        }
    } else if (cVar9 == '\0') {
        fStack_14 = s4[1];
    } else {
        uVar2 = *(u64 *)(s4 + 1);
        fStack_14 = (float)uVar2;
        fStack_10 = (float)((u64)uVar2 >> 0x20);
    }
    vec3_copy_8c02b5fc(s0, &fStack_18, ar6_00);
    Vec3_dtor(auStack_28, 0xffffffff, ar6_00, ar7_00);
    object_dtor_delete(&fStack_18, 0xffffffff, ar6_00, ar7_00);
    return 0;
}

/*
 * se_play_at_object  0x8c033474
 * plays a 3D sound effect at an object's position
 * called by: CMushroomerBody_AwayFrom, Class_12a25c_sub_06f93c, Vec3_sub_03f4a4, game_sub_046684, game_sub_04c314,
 * game_sub_04ddd4, game_sub_04f034, game_sub_054a14 (+18 more)
 */
u32 se_play_at_object(int a0, u32 a1, u32 a2, int *a3) {
    u32 uVar1;
    u8 *a6;
    u8 *a7;
    u8 auStack_34[16];
    u8 auStack_24[16];
    u8 auStack_14[4];
    u8 auStack_10[4];
    u8 auStack_c[12];

    uVar1 = 0;
    if (*(char *)(0x210 + a0) != '\0') {
        Vec3_ctor_zero(auStack_14, a1, a2);
        a7 = auStack_c;
        a6 = auStack_10;
        (**(code **)(0x13c + *a3))(a3, auStack_14, a6, a7);
        Vec3_sub(a2, auStack_14, a6, a7, auStack_34);
        Vec3_ctor_copy(auStack_24, auStack_34, a6, a7);
        Vec3_dtor(auStack_34, 0xffffffff, a6, a7);
        se_play_3d(0x8c2b59d0, a1, a6, a7);
        Vec3_dtor(auStack_24, 0xffffffff, a6, a7);
        uVar1 = Vec3_dtor(auStack_14, 0xffffffff, a6, a7);
    }
    return uVar1;
}

/*
 * se_sub_033530  0x8c033530
 * area name: sits between se functions (same compilation unit)
 * called by: game_sub_07c0b8
 */
u32 se_sub_033530(int a0, u32 a1, u32 a2, u32 a3) {
    u64 uVar1;
    double dVar2;
    u32 uVar3;
    u32 ar4_00;
    u32 ar4_01;
    int iVar4;
    u8 *puVar5;
    float fVar6;
    code *pcVar8;
    double dVar7;
    u64 in_dr4;
    u64 in_dr14;
    double dVar9;
    u64 in_xd0;
    double in_xd14;
    bool bVar10;
    char cVar11;
    char cVar12;
    u32 in_stack_00000000;
    u64 uStack_5c;
    u8 auStack_48[16];
    u8 auStack_38[16];
    u8 auStack_28[16];
    u8 auStack_18[4];
    double dStack_14;
    u32 uStack_4;

    cVar12 = '\0';
    cVar11 = '\0';
    uStack_4 = (u32)in_dr14;
    dVar9 = (double)CONCAT44((int)((u64)in_dr14 >> 0x20), (int)((u64)in_dr4 >> 0x20));
    Vec3_ctor_zero(auStack_18, a1, a2);
    puVar5 = auStack_28;
    Vec3_ctor_xyz(puVar5, a1, a2, a3);
    if (cVar12 == '\0') {
        uStack_5c = CONCAT44(uStack_5c._4_4_, 0x43c6c000);
    } else {
        uStack_5c = 0x8c01420043c6c000;
    }
    uVar3 = rand();
    ar4_00 = rand();
    ar4_01 = rand();
    libgcc_divide_helper_01031c(uVar3, 100, a2);
    libgcc_divide_helper_01031c(ar4_00, 100, a2);
    uVar3 = 100;
    libgcc_divide_helper_01031c(ar4_01, 100, a2);
    Vec3_assign_f(auStack_18, uVar3, a2, a3);
    Vec3_normalize(auStack_18, uVar3, a2, a3);
    Vec3_assign(auStack_18, auStack_38, a2, a3);
    uVar3 = 0xffffffff;
    puVar5 = auStack_38;
    Vec3_dtor(puVar5, 0xffffffff, a2, a3);
    uVar3 = rand();
    iVar4 = libgcc_divide_helper_01031c(uVar3, 100, a2);
    if (cVar12 == '\0') {
        pcVar8 = (code *)0x42c80000;
        fVar6 = (float)uStack_5c;
    } else {
        fVar6 = 100.0;
        pcVar8 = Vec3_scale;
        in_xd0 = uStack_5c;
    }
    if (cVar11 == '\0') {
        fVar6 = (fVar6 / (float)pcVar8) * (float)iVar4;
    } else {
        fVar6 = SUB84((double)iVar4 * (double)iVar4, 0);
    }
    uVar1 = in_xd0;
    if (cVar12 == '\0') {
        uStack_5c = CONCAT44(uStack_5c._4_4_, fVar6);
        uVar1 = uStack_5c;
    }
    uStack_5c = uVar1;
    Vec3_scale(auStack_18, &uStack_5c, a2, a3, auStack_48);
    Vec3_add(auStack_48, auStack_28, a2, a3, (int)&uStack_5c + 4);
    Vec3_assign(auStack_18, (int)&uStack_5c + 4, a2, a3);
    Vec3_dtor((int)&uStack_5c + 4, 0xffffffff, a2, a3);
    Vec3_dtor(auStack_48, 0xffffffff, a2, a3);
    dVar7 = dStack_14;
    if (cVar12 == '\0') {
        dVar7 = (double)CONCAT44(dStack_14._0_4_, fVar6);
    }
    if (cVar11 == '\0') {
        bVar10 = SUB84(dVar9, 0) < (float)((u64)dVar7 >> 0x20);
    } else {
        bVar10 = dVar9 < dVar7;
    }
    dVar2 = dStack_14;
    if (bVar10) {
        if (cVar12 == '\0') {
            dVar7 = (double)CONCAT44(*(u32 *)(a0 + 0x48), SUB84(dVar7, 0));
        } else {
            dVar7 = *(double *)(a0 + 0x48);
        }
        if (cVar11 == '\0') {
            fVar6 = SUB84(dVar9, 0) - (float)((u64)dVar7 >> 0x20);
        } else {
            fVar6 = SUB84(dVar9 - dVar7, 0);
        }
        dVar2 = in_xd14;
        if (cVar12 == '\0') {
            dStack_14 = (double)CONCAT44(dStack_14._4_4_, fVar6);
            dVar2 = dStack_14;
        }
    }
    dStack_14 = dVar2;
    Vec3_ctor_copy(in_stack_00000000, auStack_18, a2, a3);
    Vec3_dtor(auStack_28, 0xffffffff, a2, a3);
    Vec3_dtor(auStack_18, 0xffffffff, a2, a3);
    return 0;
}

/*
 * game_sub_0336e8  0x8c0336e8
 * area name: game code; nothing names its area yet
 * called by: Vec3_sub_0278bc
 */
u32 game_sub_0336e8(int a0, u64 *a1, u32 a2, u32 a3) {
    u32 uVar1;
    float fVar2;
    double dVar3;
    u64 in_xd0;
    u32 in_PR;
    char cVar4;
    char cVar5;
    u32 uStack_18;
    u32 uStack_14;
    u32 uStack_10;
    u32 uStack_c;

    cVar5 = '\0';
    cVar4 = '\0';
    uStack_c = in_PR;
    Vec3_set_zero(&uStack_18);
    timer_sub_031ab4(a0, &uStack_18, a2, a3);
    if (cVar5 == '\0') {
        dVar3 = (double)CONCAT44(uStack_18, *(u32 *)a1);
    } else {
        in_xd0 = *a1;
        dVar3 = (double)CONCAT44(uStack_14, uStack_18);
    }
    if (cVar4 == '\0') {
        fVar2 = SUB84(dVar3, 0) + (float)((u64)dVar3 >> 0x20);
    } else {
        fVar2 = SUB84(dVar3 + dVar3, 0);
    }
    if (cVar5 == '\0') {
        *(float *)(a0 + 0x158) = fVar2;
        dVar3 = (double)CONCAT44(uStack_14, *(u32 *)((int)a1 + 4));
    } else {
        *(u64 *)(a0 + 0x158) = in_xd0;
        in_xd0 = *(u64 *)((int)a1 + 4);
        dVar3 = (double)CONCAT44(uStack_10, uStack_14);
    }
    if (cVar4 == '\0') {
        fVar2 = SUB84(dVar3, 0) + (float)((u64)dVar3 >> 0x20);
    } else {
        fVar2 = SUB84(dVar3 + dVar3, 0);
    }
    if (cVar5 == '\0') {
        *(float *)(a0 + 0x15c) = fVar2;
        dVar3 = (double)CONCAT44(uStack_10, *(u32 *)(a1 + 1));
    } else {
        *(u64 *)(a0 + 0x15c) = in_xd0;
        in_xd0 = a1[1];
        dVar3 = (double)CONCAT44(uStack_c, uStack_10);
    }
    if (cVar4 == '\0') {
        fVar2 = SUB84(dVar3, 0) + (float)((u64)dVar3 >> 0x20);
    } else {
        fVar2 = SUB84(dVar3 + dVar3, 0);
    }
    if (cVar5 == '\0') {
        *(float *)(a0 + 0x160) = fVar2;
    } else {
        *(u64 *)(a0 + 0x160) = in_xd0;
    }
    uVar1 = object_dtor_delete(&uStack_18, 0xffffffff, a2, a3);
    return uVar1;
}

/*
 * CAnimBody_AdvanceFrame_wrapper_wrap_03376c  0x8c03376c
 */
u32 CAnimBody_AdvanceFrame_wrapper_wrap_03376c(int a0, u32 a1, u32 a2, u32 a3) {
    u32 uVar1;

    uVar1 = CAnimBody_AdvanceFrame_wrapper(a0 + 0xb0, a1, a2, a3);
    return uVar1;
}

/*
 * CAnimBody_AdvanceFrame_wrapper_wrap_033790  0x8c033790
 */
u32 CAnimBody_AdvanceFrame_wrapper_wrap_033790(int a0, u32 a1, u32 a2, u32 a3) {
    u32 uVar1;

    uVar1 = CAnimBody_AdvanceFrame_wrapper(a0 + 0xb0, a1, a2, a3);
    return uVar1;
}

/*
 * ret_const_0_0337b4  0x8c0337b4
 */
u32 ret_const_0_0337b4(void) {
    return 0;
}

/*
 * get_field_218_0337bc  0x8c0337bc
 */
u32 get_field_218_0337bc(int a0) {
    return *(u32 *)(0x218 + a0);
}

/*
 * ret_const_0_0337c8  0x8c0337c8
 */
u32 ret_const_0_0337c8(void) {
    return 0;
}

/*
 * game_sub_0337d0  0x8c0337d0
 * area name: game code; nothing names its area yet
 */
u32 game_sub_0337d0(u32 unused_a0, u32 a1, u32 a2, u32 a3) {
    u32 uVar1;
    u32 uVar2;
    u8 *puVar3;

    uVar1 = Vec3_ctor_xyz((&DATA_8c125ba0), a1, a2, a3);
    puVar3 = (&Vec3_dtor);
    uVar2 = 0x8c27d530;
    global_list_push(uVar1, (&Vec3_dtor), 0x8c27d530, a3);
    uVar1 = Vec3_ctor_xyz((&DATA_8c125bb0), puVar3, uVar2, a3);
    puVar3 = (&Vec3_dtor);
    uVar2 = 0x8c27d53c;
    global_list_push(uVar1, (&Vec3_dtor), 0x8c27d53c, a3);
    uVar1 = Vec3_ctor_xyz((&DATA_8c125bc0), puVar3, uVar2, a3);
    puVar3 = (&Vec3_dtor);
    uVar2 = 0x8c27d548;
    global_list_push(uVar1, (&Vec3_dtor), 0x8c27d548, a3);
    uVar1 = Vec3_ctor_xyz((&DATA_8c125bd0), puVar3, uVar2, a3);
    puVar3 = (&Vec3_dtor);
    uVar2 = 0x8c27d554;
    global_list_push(uVar1, (&Vec3_dtor), 0x8c27d554, a3);
    uVar1 = Vec3_ctor_xyz((&DATA_8c125be0), puVar3, uVar2, a3);
    puVar3 = (&Vec3_dtor);
    uVar2 = 0x8c27d560;
    global_list_push(uVar1, (&Vec3_dtor), 0x8c27d560, a3);
    uVar1 = Vec3_assign_f_10277c((&DATA_8c125bf0));
    puVar3 = (&free_if_nonnull_wrap_102790);
    uVar2 = 0x8c27d56c;
    (*(code *)(&global_list_push))(uVar1, (&free_if_nonnull_wrap_102790), 0x8c27d56c, a3);
    uVar1 = Vec3_ctor_xyz(0x8c125bfc, puVar3, uVar2, a3);
    puVar3 = (&Vec3_dtor);
    uVar2 = 0x8c27d578;
    global_list_push(uVar1, (&Vec3_dtor), 0x8c27d578, a3);
    uVar2 = Vec3_assign_f_10277c((&DATA_8c125c0c));
    uVar2 = (*(code *)(&global_list_push))(uVar2, (&free_if_nonnull_wrap_102790), 0x8c27d584, a3);
    return uVar2;
}

/*
 * Class_129cbc_sub_033954  0x8c033954
 * area name: only called from Class_129cbc methods
 * called by: CSquid_sub_0afa50, Class_129cbc_ctor
 */
u32 *Class_129cbc_sub_033954(u32 *a0) {
    *a0 = (&DATA_8c129cf8);
    game_sub_0339b0(a0);
    return a0;
}

/*
 * Class_129cf8_dtor  0x8c033978
 * stores the vtable 0x8c129cf8
 * called by: Class_129cbc_dtor, Class_12b2ac_dtor
 */
u32 *Class_129cf8_dtor(u32 *a0, u32 a1, u32 a2, u32 a3) {
    u32 in_stack_fffffff4;

    if ((a0 != NULL) && (*a0 = &g_8c129cf8, 0 < (short)a1)) {
        free_if_nonnull(a0, a1, a2, a3, CONCAT22((short)((u32)in_stack_fffffff4 >> 0x10), (short)a1));
    }
    return a0;
}

/*
 * game_sub_0339b0  0x8c0339b0
 * area name: game code; nothing names its area yet
 * called by: Class_129cbc_sub_033954
 */
u32 game_sub_0339b0(int a0) {
    *(u32 *)(a0 + 0x14) = 0;
    *(u32 *)(a0 + 0x10) = 0;
    *(u32 *)(a0 + 0x18) = 0;
    *(u32 *)(a0 + 0x20) = 0;
    *(u32 *)(a0 + 0x1c) = 0;
    *(u32 *)(a0 + 0x2c) = 0xffffffff;
    *(u32 *)(a0 + 0x30) = 0;
    *(u32 *)(a0 + 0x28) = 0;
    *(u32 *)(a0 + 0x24) = 1;
    *(u8 *)(a0 + 0x54) = 0;
    *(u32 *)(a0 + 0x58) = 0;
    *(u32 *)(a0 + 100) = 0x41f00000;
    *(u32 *)(a0 + 0x60) = 0;
    *(u32 *)(a0 + 0x5c) = 0;
    *(u32 *)(a0 + 0x38) = 0;
    *(u32 *)(a0 + 0x34) = 0;
    *(u32 *)(a0 + 0x40) = 0;
    *(u32 *)(a0 + 0x3c) = 0;
    *(u32 *)(a0 + 0x48) = 0;
    *(u32 *)(a0 + 0x44) = 0;
    *(u32 *)(a0 + 0x50) = 0;
    *(u32 *)(a0 + 0x4c) = 0;
    *(u32 *)(a0 + 0x68) = 0x3f800000;
    *(u32 *)(a0 + 0x6c) = 0xffffffff;
    *(u32 *)(a0 + 0x70) = 0;
    *(u32 *)(a0 + 4) = 0;
    *(u32 *)(a0 + 8) = 0;
    *(u16 *)(a0 + 0xc) = 0;
    *(u16 *)(a0 + 0xe) = 0;
    return 0;
}

/*
 * CAnimBody_SetAnimation  0x8c033a8c
 * called by: CAnimBody_PlayToEnd, CMushroomerBody_AwayFrom, Class_12a25c_m6_06e69c, Class_12a25c_sub_06f93c,
 * Class_12a76c_sub_08de3c, Class_12ad14_m3_0a427c, Class_12ad14_m4_0a43d4, Class_12ad14_sub_0a37c8 (+105 more) strings:
 * "Invalid AnimationID.."; "CAnimBody::SetAnimation()"
 */
u32 CAnimBody_SetAnimation(int a0, int a1, int a2, u32 a3) {
    u32 uVar1;
    int ar5_00;

    if (*(int *)(a0 + 0x1c) == a1) {
        *(u32 *)(a0 + 0x70) = 0;
        uVar1 = 6;
    } else if (a2 == -1) {
        *(int *)(a0 + 0x1c) = a1;
        *(u32 *)(a0 + 0x28) = a3;
        reset_fields_2c_6c(a0, a1, 0xffffffff);
        *(u8 *)(a0 + 0x54) = 0;
        *(u32 *)(a0 + 0x70) = 0;
        uVar1 = 0;
    } else if ((*(int *)(a0 + 0x2c) < 0) || (a2 == 1)) {
        if (*(char *)(a0 + 0x54) == '\x01') {
            *(u32 *)(a0 + 0x70) = 0;
            uVar1 = 3;
        } else if (*(int *)(a0 + 0x10) + -1 < a1) {
            (*(code *)(&report_error_message))("Invalid AnimationID..", "CAnimBody::SetAnimation()", 1, 2);
            uVar1 = 4;
        } else if (a2 == 0) {
            if (*(int *)(a0 + 0x70) == 0) {
                *(int *)(a0 + 0x2c) = a1;
                *(u32 *)(a0 + 0x30) = a3;
                uVar1 = 1;
            } else {
                *(int *)(a0 + 0x1c) = a1;
                *(u32 *)(a0 + 0x28) = a3;
                uVar1 = 0;
            }
        } else if (a2 == 1) {
            ar5_00 = a1;
            CAnimBody_SetInterpolate(a0, a1, 1, a3);
            *(int *)(a0 + 0x1c) = a1;
            reset_fields_2c_6c(a0, ar5_00, a2);
            uVar1 = 2;
        } else {
            uVar1 = 0xffffffff;
        }
    } else {
        *(u32 *)(a0 + 0x70) = 0;
        uVar1 = 5;
    }
    return uVar1;
}

/*
 * CAnimBody_AdvanceFrame_033b98  0x8c033b98
 * called by: CAnimBody_AdvanceFrame_wrapper, CAnimBody_PlayToEnd, Class_12a25c_sub_06f93c, Class_12b2ac_m5_0afddc,
 * Vec3_sub_03f4a4, game_sub_03c94c, game_sub_046684, game_sub_048868 (+44 more) strings: "Motion is NO SET!";
 * "CAnimBody::AdvanceFrame()"
 */
u32 CAnimBody_AdvanceFrame_033b98(int a0, u32 a1, u32 a2, u32 a3) {
    int iVar1;
    u32 ar5_00;
    u32 uVar2;
    u32 in_fr1;
    float fVar3;
    double dVar4;
    float in_fr4;
    u32 in_fr14;
    u64 in_xd0;
    u64 in_xd14;
    char cVar5;
    char cVar6;

    cVar6 = '\0';
    cVar5 = '\0';
    if (*(int *)(a0 + 0x1c) < 0) {
        a3 = 2;
        a2 = 1;
        report_error_message("Motion is NO SET!", "CAnimBody::AdvanceFrame()", 1, 2);
        *(u32 *)(a0 + 0x1c) = 0;
    }
    uVar2 = 0;
    if (cVar5 == '\0') {
        dVar4 = (double)CONCAT44((float)*(int *)(a0 + 0x24), in_fr1);
    } else {
        dVar4 = (double)*(int *)(a0 + 0x24);
    }
    if (cVar6 == '\0') {
        dVar4 = (double)CONCAT44((int)((u64)dVar4 >> 0x20), in_fr4);
        in_xd14 = in_xd0;
    }
    if (cVar5 == '\0') {
        fVar3 = SUB84(dVar4, 0) * (float)((u64)dVar4 >> 0x20);
    } else {
        fVar3 = SUB84(dVar4 * dVar4, 0);
    }
    if (cVar6 == '\0') {
        dVar4 = (double)CONCAT44(*(u32 *)(a0 + 0x20), fVar3);
    } else {
        dVar4 = *(double *)(a0 + 0x20);
    }
    if (cVar5 == '\0') {
        fVar3 = SUB84(dVar4, 0) + (float)((u64)dVar4 >> 0x20);
    } else {
        fVar3 = SUB84(dVar4 + dVar4, 0);
    }
    if (cVar6 == '\0') {
        *(float *)(a0 + 0x20) = fVar3;
    } else {
        *(u64 *)(a0 + 0x20) = in_xd14;
    }
    ar5_00 = *(u32 *)(a0 + 0x1c);
    iVar1 = get_motion_data(a0, ar5_00, a2, a3);
    *(u32 *)(a0 + 0x70) = 0;
    if (*(int *)(a0 + 0x28) == 0) {
        if (cVar6 == '\0') {
            fVar3 = *(float *)(a0 + 0x20);
        } else {
            in_xd14 = *(u64 *)(a0 + 0x20);
        }
        if (cVar5 == '\0') {
            dVar4 = (double)CONCAT44((float)(iVar1 + -1), fVar3);
        } else {
            dVar4 = (double)(iVar1 + -1);
        }
        if (cVar5 == '\0' && (float)((u64)dVar4 >> 0x20) < SUB84(dVar4, 0)) {
            CAnimBody_sub_033d34(a0, ar5_00, a2, a3);
            uVar2 = 1;
            *(u32 *)(a0 + 0x70) = 1;
            if (*(int *)(a0 + 0x2c) != -1) {
                *(u32 *)(a0 + 0x1c) = *(u32 *)(a0 + 0x2c);
                *(u32 *)(a0 + 0x28) = *(u32 *)(a0 + 0x30);
                *(u32 *)(a0 + 0x2c) = 0xffffffff;
                uVar2 = 2;
                *(u32 *)(a0 + 0x70) = 0;
            }
        }
        if (*(char *)(a0 + 0x54) != '\0') {
            if (cVar6 == '\0') {
                dVar4 = (double)CONCAT44((int)((u64)dVar4 >> 0x20), *(u32 *)(a0 + 0x60));
            } else {
                in_xd14 = *(u64 *)(a0 + 0x60);
            }
            if (cVar5 == '\0') {
                fVar3 = SUB84(dVar4, 0) * in_fr4;
            } else {
                fVar3 = SUB84(dVar4 * (double)CONCAT44(in_fr14, in_fr4), 0);
            }
            if (cVar6 == '\0') {
                dVar4 = (double)CONCAT44(*(u32 *)(a0 + 0x58), fVar3);
            } else {
                dVar4 = *(double *)(a0 + 0x58);
            }
            if (cVar5 == '\0') {
                fVar3 = SUB84(dVar4, 0) + (float)((u64)dVar4 >> 0x20);
            } else {
                fVar3 = SUB84(dVar4 + dVar4, 0);
            }
            if (cVar6 == '\0') {
                *(float *)(a0 + 0x58) = fVar3;
            } else {
                *(u64 *)(a0 + 0x58) = in_xd14;
            }
            uVar2 = 3;
            *(u32 *)(a0 + 0x70) = 0;
            if (cVar6 == '\0') {
                fVar3 = *(float *)(a0 + 0x58);
            }
            if (cVar5 != '\0' || 1.0 <= fVar3) {
                *(u8 *)(a0 + 0x54) = 0;
                if (cVar6 == '\0') {
                    *(u32 *)(a0 + 0x58) = 0;
                } else {
                    *(u64 *)(a0 + 0x58) = (u64)(u32)fVar3;
                }
                uVar2 = 4;
                *(u32 *)(a0 + 0x70) = 1;
            }
        }
    } else if (*(int *)(a0 + 0x28) == 1) {
        if (cVar6 == '\0') {
            fVar3 = *(float *)(a0 + 0x20);
        }
        if (cVar5 == '\0') {
            dVar4 = (double)CONCAT44((float)(iVar1 + -1), fVar3);
        } else {
            dVar4 = (double)(iVar1 + -1);
        }
        if (cVar5 != '\0' || SUB84(dVar4, 0) <= (float)((u64)dVar4 >> 0x20)) {
            if (cVar6 == '\0') {
                dVar4 = (double)(u64) * (u32 *)(a0 + 0x20);
            }
            fVar3 = SUB84(dVar4, 0);
            if (cVar5 != '\0' || fVar3 <= 0.0) {
                if (cVar6 == '\0') {
                    fVar3 = *(float *)(a0 + 0x20);
                }
                if (fVar3 != 0.0) {
                    if (cVar6 == '\0') {
                        dVar4 = (double)CONCAT44(*(u32 *)(a0 + 0x20), fVar3);
                    } else {
                        dVar4 = *(double *)(a0 + 0x20);
                    }
                    if (cVar5 == '\0') {
                        dVar4 = (double)CONCAT44((float)((u64)dVar4 >> 0x20) + in_fr4, SUB84(dVar4, 0));
                    } else {
                        dVar4 = dVar4 + (double)CONCAT44(in_fr14, in_fr4);
                    }
                    if (cVar6 == '\0') {
                        *(int *)(a0 + 0x20) = (int)((u64)dVar4 >> 0x20);
                    } else {
                        *(double *)(a0 + 0x20) = dVar4;
                    }
                }
                *(u32 *)(a0 + 0x24) = 1;
                uVar2 = 1;
                *(u32 *)(a0 + 0x70) = 1;
                if (*(int *)(a0 + 0x2c) != -1) {
                    *(u32 *)(a0 + 0x1c) = *(u32 *)(a0 + 0x2c);
                    *(u32 *)(a0 + 0x28) = *(u32 *)(a0 + 0x30);
                    *(u32 *)(a0 + 0x2c) = 0xffffffff;
                    uVar2 = 2;
                    *(u32 *)(a0 + 0x70) = 0;
                }
            }
        } else {
            if (cVar6 == '\0') {
                dVar4 = (double)CONCAT44(*(u32 *)(a0 + 0x20), SUB84(dVar4, 0));
            } else {
                dVar4 = *(double *)(a0 + 0x20);
            }
            if (cVar5 == '\0') {
                dVar4 = (double)CONCAT44((float)((u64)dVar4 >> 0x20) - in_fr4, SUB84(dVar4, 0));
            } else {
                dVar4 = dVar4 - (double)CONCAT44(in_fr14, in_fr4);
            }
            if (cVar6 == '\0') {
                *(int *)(a0 + 0x20) = (int)((u64)dVar4 >> 0x20);
            } else {
                *(double *)(a0 + 0x20) = dVar4;
            }
            *(u32 *)(a0 + 0x24) = 0xffffffff;
            uVar2 = 5;
        }
    }
    return uVar2;
}

/*
 * CAnimBody_sub_033d34  0x8c033d34
 * area name: only called from CAnimBody methods
 * called by: CAnimBody_AdvanceFrame_033b98, CAnimBody_AdvanceFrame_033d88, CAnimBody_SetFrame, CAnimBody_SetInterpolate
 */
int CAnimBody_sub_033d34(int a0, u32 unused_a1, u32 a2, u32 a3) {
    int iVar1;
    int iVar2;
    u32 uVar3;
    double in_dr0;
    double dVar4;
    u64 in_xd0;
    char cVar5;
    char cVar6;

    cVar6 = '\0';
    cVar5 = '\0';
    iVar1 = get_motion_data(a0, *(u32 *)(a0 + 0x1c), a2, a3);
    while (true) {
        uVar3 = SUB84(in_dr0, 0);
        if (cVar6 == '\0') {
            uVar3 = *(u32 *)(a0 + 0x20);
        } else {
            in_xd0 = *(u64 *)(a0 + 0x20);
        }
        iVar2 = iVar1 + -1;
        if (cVar5 == '\0') {
            dVar4 = (double)CONCAT44((float)iVar2, uVar3);
        } else {
            dVar4 = (double)iVar2;
        }
        if (cVar5 != '\0' || SUB84(dVar4, 0) <= (float)((u64)dVar4 >> 0x20))
            break;
        if (cVar6 == '\0') {
            dVar4 = (double)(u64) * (u32 *)(a0 + 0x20);
        } else {
            in_xd0 = *(u64 *)(a0 + 0x20);
        }
        if (cVar5 == '\0') {
            in_dr0 = (double)(u64)(u32)(SUB84(dVar4, 0) - (float)iVar1);
        } else {
            in_dr0 = (double)iVar1 - (double)iVar1;
        }
        if (cVar6 == '\0') {
            *(int *)(a0 + 0x20) = SUB84(in_dr0, 0);
        } else {
            *(u64 *)(a0 + 0x20) = in_xd0;
        }
    }
    return iVar2;
}

/*
 * CAnimBody_AdvanceFrame_033d88  0x8c033d88
 * called by: CAnimBody_AdvanceFrame_wrap, CMushroomerBody_AwayFrom, Class_12b2ac_m5_0afddc, Vec3_sub_03f4a4,
 * game_sub_046684, game_sub_048868, game_sub_048f8c, game_sub_049b68 (+15 more) strings: "CAnimBody::AdvanceFrame()";
 * "Motion is NO SET!"; "CAnimBody::AdvanceFrame()"
 */
u32 CAnimBody_AdvanceFrame_033d88(int a0, char *a1, u32 a2, u32 a3) {
    u32 uVar1;
    u32 in_fr1;
    float fVar2;
    double dVar3;
    double dVar4;
    u32 in_fr5;
    u32 in_fr4;
    u32 in_fr6;
    double in_xd0;
    double dVar5;
    bool bVar6;
    char cVar7;
    char cVar8;
    u32 uStack_1c;

    cVar8 = '\0';
    cVar7 = '\0';
    dVar4 = (double)CONCAT44(in_fr4, in_fr6);
    if (*(int *)(a0 + 0x1c) < 0) {
        a3 = 2;
        a2 = 1;
        a1 = "CAnimBody::AdvanceFrame()";
        report_error_message("Motion is NO SET!", "CAnimBody::AdvanceFrame()", 1, 2);
        *(u32 *)(a0 + 0x1c) = 0;
    }
    *(u32 *)(a0 + 0x70) = 0;
    uVar1 = 0;
    if (cVar7 == '\0') {
        dVar3 = (double)CONCAT44((float)*(int *)(a0 + 0x24), in_fr1);
    } else {
        dVar3 = (double)*(int *)(a0 + 0x24);
    }
    dVar5 = dVar4;
    if (cVar8 == '\0') {
        dVar3 = (double)CONCAT44((int)((u64)dVar3 >> 0x20), (int)((u64)dVar4 >> 0x20));
        dVar5 = in_xd0;
    }
    if (cVar7 == '\0') {
        fVar2 = SUB84(dVar3, 0) * (float)((u64)dVar3 >> 0x20);
    } else {
        fVar2 = SUB84(dVar3 * dVar3, 0);
    }
    if (cVar8 == '\0') {
        dVar3 = (double)CONCAT44(*(u32 *)(a0 + 0x20), fVar2);
    } else {
        dVar3 = *(double *)(a0 + 0x20);
    }
    if (cVar7 == '\0') {
        fVar2 = SUB84(dVar3, 0) + (float)((u64)dVar3 >> 0x20);
    } else {
        fVar2 = SUB84(dVar3 + dVar3, 0);
    }
    if (cVar8 == '\0') {
        *(float *)(a0 + 0x20) = fVar2;
    } else {
        *(double *)(a0 + 0x20) = dVar5;
    }
    CAnimBody_sub_033d34(a0, a1, a2, a3);
    if (cVar8 == '\0') {
        dVar3 = (double)CONCAT44(*(u32 *)(a0 + 0x20), fVar2);
    } else {
        dVar3 = *(double *)(a0 + 0x20);
    }
    fVar2 = (float)((u64)dVar3 >> 0x20);
    if (cVar7 == '\0') {
        bVar6 = fVar2 < SUB84(dVar4, 0);
    } else {
        bVar6 = dVar3 < dVar4;
    }
    if (!bVar6) {
        if (cVar8 == '\0') {
            dVar3 = (double)CONCAT44(fVar2, *(u32 *)(a0 + 0x20));
        } else {
            dVar5 = *(double *)(a0 + 0x20);
        }
        if (cVar7 == '\0') {
            fVar2 = SUB84(dVar3, 0) - SUB84(dVar4, 0);
        } else {
            fVar2 = SUB84(dVar3 - dVar4, 0);
        }
        if (cVar8 == '\0') {
            dVar3 = (double)CONCAT44(in_fr5, fVar2);
        } else {
            dVar3 = (double)CONCAT44(uStack_1c, in_fr5);
        }
        if (cVar7 == '\0') {
            fVar2 = (float)((u64)dVar3 >> 0x20);
            dVar3 = (double)CONCAT44(fVar2, SUB84(dVar3, 0) + fVar2);
        } else {
            dVar3 = dVar3 + dVar3;
        }
        if (cVar8 == '\0') {
            *(int *)(a0 + 0x20) = SUB84(dVar3, 0);
        } else {
            *(double *)(a0 + 0x20) = dVar5;
        }
        uVar1 = 7;
    }
    if (*(char *)(a0 + 0x54) != '\0') {
        if (cVar8 == '\0') {
            dVar3 = (double)CONCAT44((int)((u64)dVar3 >> 0x20), *(u32 *)(a0 + 0x60));
        } else {
            dVar5 = *(double *)(a0 + 0x60);
        }
        if (cVar7 == '\0') {
            fVar2 = SUB84(dVar3, 0) * (float)((u64)dVar4 >> 0x20);
        } else {
            fVar2 = SUB84(dVar3 * dVar4, 0);
        }
        if (cVar8 == '\0') {
            dVar4 = (double)CONCAT44(*(u32 *)(a0 + 0x58), fVar2);
        } else {
            dVar4 = *(double *)(a0 + 0x58);
        }
        if (cVar7 == '\0') {
            fVar2 = SUB84(dVar4, 0) + (float)((u64)dVar4 >> 0x20);
        } else {
            fVar2 = SUB84(dVar4 + dVar4, 0);
        }
        if (cVar8 == '\0') {
            *(float *)(a0 + 0x58) = fVar2;
        } else {
            *(double *)(a0 + 0x58) = dVar5;
        }
        uVar1 = 3;
        if (cVar8 == '\0') {
            fVar2 = *(float *)(a0 + 0x58);
        }
        if (cVar7 != '\0' || 1.0 <= fVar2) {
            *(u8 *)(a0 + 0x54) = 0;
            if (cVar8 == '\0') {
                *(u32 *)(a0 + 0x58) = 0;
            } else {
                *(u64 *)(a0 + 0x58) = (u64)(u32)fVar2;
            }
            uVar1 = 4;
        }
    }
    return uVar1;
}

/*
 * CAnimBody_SetFrame  0x8c033e68
 * called by: CMushroomerBody_AwayFrom, Class_129cbc_m5_031440, Class_12a25c_sub_06f93c, Class_12a76c_sub_08de3c,
 * Class_12ad14_sub_0a37c8, Class_12b088_sub_0a6628, Class_12b088_sub_0a99c4, Class_12b088_sub_0aa70c (+98 more)
 * strings: "Motion is NO SET!"; "CAnimBody::SetFrame()"
 */
u32 CAnimBody_SetFrame(int a0, u32 a1, u32 a2, u32 a3) {
    int iVar1;
    u32 ar5_00;
    u32 uVar2;
    u32 in_fr1;
    float fVar3;
    u32 uVar4;
    u64 uVar5;
    double dVar6;
    u32 in_fr4;
    u64 in_xd0;
    char cVar7;
    char cVar8;
    u32 uStack_14;

    cVar8 = '\0';
    cVar7 = '\0';
    if (*(int *)(a0 + 0x1c) < 0) {
        a3 = 2;
        a2 = 1;
        report_error_message("Motion is NO SET!", "CAnimBody::SetFrame()", 1, 2);
        *(u32 *)(a0 + 0x1c) = 0;
    }
    *(u32 *)(a0 + 0x70) = 0;
    uVar2 = 0;
    if (cVar8 == '\0') {
        uVar5 = CONCAT44(in_fr4, in_fr1);
        *(u32 *)(a0 + 0x20) = in_fr4;
    } else {
        uVar5 = CONCAT44(uStack_14, in_fr4);
        *(u64 *)(a0 + 0x20) = uVar5;
    }
    uVar4 = (u32)uVar5;
    ar5_00 = *(u32 *)(a0 + 0x1c);
    iVar1 = get_motion_data(a0, ar5_00, a2, a3);
    if (*(char *)(a0 + 0x54) == '\0') {
        if (cVar8 == '\0') {
            uVar4 = *(u32 *)(a0 + 0x20);
        }
        if (cVar7 == '\0') {
            dVar6 = (double)CONCAT44((float)(iVar1 + -1), uVar4);
        } else {
            dVar6 = (double)(iVar1 + -1);
        }
        if (cVar7 == '\0' && (float)((u64)dVar6 >> 0x20) < SUB84(dVar6, 0)) {
            CAnimBody_sub_033d34(a0, ar5_00, a2, a3);
            uVar2 = 1;
            *(u32 *)(a0 + 0x70) = 1;
            if (*(int *)(a0 + 0x2c) != -1) {
                *(u32 *)(a0 + 0x1c) = *(u32 *)(a0 + 0x2c);
                *(u32 *)(a0 + 0x2c) = 0xffffffff;
                uVar2 = 2;
                *(u32 *)(a0 + 0x70) = 0;
            }
        }
    } else {
        if (cVar8 == '\0') {
            dVar6 = (double)CONCAT44(*(u32 *)(a0 + 0x5c), *(u32 *)(a0 + 0x20));
        } else {
            in_xd0 = *(u64 *)(a0 + 0x20);
            dVar6 = *(double *)(a0 + 0x5c);
        }
        if (cVar7 == '\0') {
            fVar3 = SUB84(dVar6, 0) - (float)((u64)dVar6 >> 0x20);
        } else {
            fVar3 = SUB84(dVar6 - dVar6, 0);
        }
        if (cVar8 == '\0') {
            dVar6 = (double)CONCAT44(*(u32 *)(a0 + 100), fVar3);
        } else {
            dVar6 = *(double *)(a0 + 100);
        }
        if (cVar7 == '\0') {
            fVar3 = SUB84(dVar6, 0) / (float)((u64)dVar6 >> 0x20);
        } else {
            fVar3 = SUB84(dVar6 / dVar6, 0);
        }
        if (cVar8 == '\0') {
            *(float *)(a0 + 0x58) = fVar3;
        } else {
            *(u64 *)(a0 + 0x58) = in_xd0;
        }
        uVar2 = 3;
        if (cVar8 == '\0') {
            fVar3 = *(float *)(a0 + 0x58);
        }
        if (cVar7 != '\0' || 1.0 <= fVar3) {
            *(u8 *)(a0 + 0x54) = 0;
            if (cVar8 == '\0') {
                *(u32 *)(a0 + 0x5c) = 0;
            } else {
                *(u64 *)(a0 + 0x5c) = (u64)(u32)fVar3;
            }
            if (cVar8 == '\0') {
                *(u32 *)(a0 + 0x58) = 0;
            } else {
                *(u64 *)(a0 + 0x58) = (u64)(u32)fVar3;
            }
            CAnimBody_sub_033d34(a0, ar5_00, a2, a3);
            uVar2 = 4;
            *(u32 *)(a0 + 0x70) = 1;
        }
    }
    return uVar2;
}

/*
 * CAnimBody_SetInterpolate  0x8c033f74
 * called by: CAnimBody_SetAnimation
 * strings: "CAnimBody::SetInterpolate()"; "Motion is NO SET!"; "CAnimBody::SetInterpolate()"
 */
u32 CAnimBody_SetInterpolate(int a0, char *a1, u32 a2, u32 a3) {
    u32 uVar1;
    int iVar2;
    char *ar5_00;
    u32 in_fr1;
    float fVar3;
    u64 uVar4;
    double dVar5;
    u64 uVar6;
    float in_fr4;
    u64 in_xd0;
    u64 in_xd14;
    char cVar7;
    char cVar8;

    cVar8 = '\0';
    cVar7 = '\0';
    ar5_00 = a1;
    if (*(int *)(a0 + 0x1c) < 0) {
        a3 = 2;
        a2 = 1;
        ar5_00 = "CAnimBody::SetInterpolate()";
        report_error_message("Motion is NO SET!", "CAnimBody::SetInterpolate()", 1, 2);
        *(u32 *)(a0 + 0x1c) = 0;
    }
    uVar1 = deref_u32(*(int *)(a0 + 0x14) + *(int *)(a0 + 0x1c) * 4);
    *(u32 *)(a0 + 0x34) = uVar1;
    uVar1 = deref_u32(*(int *)(a0 + 0x14) + (int)a1 * 4);
    *(u32 *)(a0 + 0x38) = uVar1;
    uVar1 = get_field_0_026d74(*(int *)(a0 + 0x18) + *(int *)(a0 + 0x1c) * 4);
    *(u32 *)(a0 + 0x44) = uVar1;
    uVar1 = get_field_0_026d74(*(int *)(a0 + 0x18) + (int)a1 * 4);
    *(u32 *)(a0 + 0x48) = uVar1;
    CAnimBody_sub_033d34(a0, ar5_00, a2, a3);
    if (cVar8 == '\0') {
        uVar1 = *(u32 *)(a0 + 0x20);
        *(u32 *)(a0 + 0x4c) = uVar1;
        *(u32 *)(a0 + 0x3c) = uVar1;
        dVar5 = (double)CONCAT44(0xbf800000, in_fr1);
    } else {
        uVar4 = *(u64 *)(a0 + 0x20);
        *(u64 *)(a0 + 0x4c) = uVar4;
        *(u64 *)(a0 + 0x3c) = uVar4;
        dVar5 = -8.32867096114109e-251;
    }
    if (in_fr4 == (float)((u64)dVar5 >> 0x20)) {
        if (cVar8 == '\0') {
            dVar5 = (double)CONCAT44(*(u32 *)(a0 + 100), *(u32 *)(a0 + 0x20));
        } else {
            in_xd0 = *(u64 *)(a0 + 0x20);
            dVar5 = *(double *)(a0 + 100);
        }
        if (cVar7 == '\0') {
            dVar5 = (double)(u64)(u32)(SUB84(dVar5, 0) + (float)((u64)dVar5 >> 0x20));
        } else {
            dVar5 = dVar5 + dVar5;
        }
        if (cVar8 == '\0') {
            *(int *)(a0 + 0x40) = SUB84(dVar5, 0);
        } else {
            *(u64 *)(a0 + 0x40) = in_xd0;
        }
        iVar2 = get_motion_data(a0, *(u32 *)(a0 + 0x1c), a2, a3);
        while (true) {
            uVar1 = SUB84(dVar5, 0);
            if (cVar8 == '\0') {
                uVar1 = *(u32 *)(a0 + 0x40);
            } else {
                in_xd0 = *(u64 *)(a0 + 0x40);
            }
            if (cVar7 == '\0') {
                dVar5 = (double)CONCAT44((float)(iVar2 + -1), uVar1);
            } else {
                dVar5 = (double)(iVar2 + -1);
            }
            if (cVar7 != '\0' || SUB84(dVar5, 0) <= (float)((u64)dVar5 >> 0x20))
                break;
            if (cVar8 == '\0') {
                dVar5 = (double)(u64) * (u32 *)(a0 + 0x40);
            } else {
                in_xd0 = *(u64 *)(a0 + 0x40);
            }
            if (cVar7 == '\0') {
                dVar5 = (double)(u64)(u32)(SUB84(dVar5, 0) - (float)iVar2);
            } else {
                dVar5 = (double)iVar2 - (double)iVar2;
            }
            if (cVar8 == '\0') {
                *(int *)(a0 + 0x40) = SUB84(dVar5, 0);
            } else {
                *(u64 *)(a0 + 0x40) = in_xd0;
            }
        }
    } else {
        if (cVar8 == '\0') {
            *(float *)(a0 + 0x40) = in_fr4;
        } else {
            *(u64 *)(a0 + 0x40) = in_xd14;
        }
        iVar2 = get_motion_data(a0, *(u32 *)(a0 + 0x1c), a2, a3);
        while (true) {
            uVar1 = SUB84(dVar5, 0);
            if (cVar8 == '\0') {
                uVar1 = *(u32 *)(a0 + 0x40);
            } else {
                in_xd0 = *(u64 *)(a0 + 0x40);
            }
            if (cVar7 == '\0') {
                dVar5 = (double)CONCAT44((float)(iVar2 + -1), uVar1);
            } else {
                dVar5 = (double)(iVar2 + -1);
            }
            if (cVar7 != '\0' || SUB84(dVar5, 0) <= (float)((u64)dVar5 >> 0x20))
                break;
            if (cVar8 == '\0') {
                dVar5 = (double)(u64) * (u32 *)(a0 + 0x40);
            } else {
                in_xd0 = *(u64 *)(a0 + 0x40);
            }
            if (cVar7 == '\0') {
                dVar5 = (double)(u64)(u32)(SUB84(dVar5, 0) - (float)iVar2);
            } else {
                dVar5 = (double)iVar2 - (double)iVar2;
            }
            if (cVar8 == '\0') {
                *(int *)(a0 + 0x40) = SUB84(dVar5, 0);
            } else {
                *(u64 *)(a0 + 0x40) = in_xd0;
            }
        }
        if (cVar8 == '\0') {
            dVar5 = (double)CONCAT44(*(u32 *)(a0 + 100), *(u32 *)(a0 + 0x40));
        } else {
            in_xd0 = *(u64 *)(a0 + 0x40);
            dVar5 = *(double *)(a0 + 100);
        }
        if (cVar7 == '\0') {
            fVar3 = SUB84(dVar5, 0) - (float)((u64)dVar5 >> 0x20);
        } else {
            fVar3 = SUB84(dVar5 - dVar5, 0);
        }
        if (cVar8 == '\0') {
            *(float *)(a0 + 0x20) = fVar3;
        } else {
            *(u64 *)(a0 + 0x20) = in_xd0;
        }
    }
    if (cVar8 == '\0') {
        *(u32 *)(a0 + 0x50) = *(u32 *)(a0 + 0x40);
        *(u32 *)(a0 + 0x5c) = *(u32 *)(a0 + 0x20);
        uVar6 = (u64) * (u32 *)(a0 + 100);
    } else {
        *(u64 *)(a0 + 0x50) = *(u64 *)(a0 + 0x40);
        uVar6 = *(u64 *)(a0 + 0x20);
        *(u64 *)(a0 + 0x5c) = uVar6;
    }
    fVar3 = (float)uVar6;
    if (cVar7 == '\0') {
        dVar5 = (double)CONCAT44(1.0 / fVar3, fVar3);
    } else {
        dVar5 = (double)CONCAT44(0x3f800000, fVar3) / (double)CONCAT44(0x3f800000, fVar3);
    }
    if (cVar8 == '\0') {
        *(int *)(a0 + 0x60) = (int)((u64)dVar5 >> 0x20);
    } else {
        *(double *)(a0 + 0x60) = dVar5;
    }
    if (cVar8 == '\0') {
        *(u32 *)(a0 + 0x58) = 0;
    } else {
        *(u64 *)(a0 + 0x58) = (u64)dVar5 & 0xffffffff;
    }
    *(u8 *)(a0 + 0x54) = 1;
    return 0x54;
}

/*
 * CAnimBody_PlayToEnd  0x8c034148
 * starts animation a1 and steps it each call; 1 when it finishes, 2 when it cannot start
 * called by: game_sub_0737fc, game_sub_073cac, game_sub_074d1c, game_sub_0755e0, game_sub_075ef4, game_sub_076198,
 * game_sub_07af10, game_sub_07b7d0 (+25 more)
 */
u32 CAnimBody_PlayToEnd(int a0, u32 a1, u32 a2, u32 a3) {
    u32 uVar1;
    u32 uVar2;
    int iVar3;
    u32 uVar4;

    uVar4 = 0;
    uVar2 = a1;
    if (*(int *)(a0 + 0x6c) == -1) {
        a3 = 0;
        a2 = 0;
        uVar1 = CAnimBody_SetAnimation(a0, a1, 0, 0);
        *(u32 *)(a0 + 0x6c) = uVar1;
    }
    iVar3 = *(int *)(a0 + 0x6c);
    if ((iVar3 < 7) && (-1 < iVar3)) {
        switch (iVar3) {
        case 0:
            uVar4 = 2;
            *(u32 *)(a0 + 0x6c) = 0xffffffff;
            break;
        case 1:
            iVar3 = CAnimBody_AdvanceFrame_033b98(a0, uVar2, a2, a3);
            if (iVar3 == 2) {
                uVar4 = 1;
                *(u32 *)(a0 + 0x6c) = 0xffffffff;
            }
            break;
        case 3:
            iVar3 = CAnimBody_AdvanceFrame_033b98(a0, uVar2, a2, a3);
            if (iVar3 == 4) {
                uVar2 = CAnimBody_SetAnimation(a0, a1, 0, 0);
                *(u32 *)(a0 + 0x6c) = uVar2;
            }
            break;
        case 5:
            iVar3 = CAnimBody_AdvanceFrame_033b98(a0, uVar2, a2, a3);
            if (iVar3 == 2) {
                uVar2 = CAnimBody_SetAnimation(a0, a1, 0, 0);
                *(u32 *)(a0 + 0x6c) = uVar2;
            }
            break;
        case 6:
            if (*(int *)(a0 + 0x2c) == -1) {
                uVar4 = 2;
                *(u32 *)(a0 + 0x6c) = 0xffffffff;
            } else {
                iVar3 = CAnimBody_AdvanceFrame_033b98(a0, uVar2, a2, a3);
                if (iVar3 == 2) {
                    uVar2 = CAnimBody_SetAnimation(a0, a1, 0, 0);
                    *(u32 *)(a0 + 0x6c) = uVar2;
                }
            }
        }
    }
    return uVar4;
}

/*
 * motion_entry_get_0  0x8c0342ac
 * word 0 of record a2 of the 0x18-byte motion table *a1
 * called by: game_sub_08eef4, game_sub_08f354, game_sub_08f9e8, game_sub_0911f0, game_sub_091570, game_sub_0b0eec,
 * record18_take
 */
int motion_entry_get_0(u32 unused_a0, u32 *a1, int a2) {
    int *piVar1;
    int iVar2;

    piVar1 = (int *)*a1;
    for (iVar2 = 0; iVar2 < a2; iVar2 = iVar2 + 1) {
        piVar1 = piVar1 + 6;
    }
    iVar2 = *piVar1;
    if (iVar2 == 0) {
        iVar2 = 0;
    }
    return iVar2;
}

/*
 * CAnimBody_sub_0342d8  0x8c0342d8
 * area name: sits between CAnimBody functions (same compilation unit)
 * called by: game_sub_07e828
 */
u32 CAnimBody_sub_0342d8(u32 unused_a0, int *a1, u32 a2, u32 a3) {
    u32 in_fr1;
    float in_fr4;
    u32 in_fr14;
    bool bVar1;
    int iVar2;
    char cVar3;
    char cVar4;
    u32 in_stack_00000000;
    int iStack_20;
    int iStack_1c;
    int iStack_18;
    u32 uStack_14;

    cVar4 = '\0';
    cVar3 = '\0';
    Vec3_ctor_xyz(&iStack_20, a1, a2, a3);
    if (a1 == NULL) {
        Vec3_ctor_copy(in_stack_00000000, &iStack_20, a2, a3);
        Vec3_dtor(&iStack_20, 0xffffffff, a2, a3);
    } else {
        if (cVar3 == '\0') {
            bVar1 = in_fr4 < 0.0;
        } else {
            bVar1 = (double)CONCAT44(in_fr14, in_fr4) < (double)(u64)in_fr1;
        }
        if (bVar1) {
            in_fr4 = 0.0;
        }
        while (true) {
            if (cVar3 == '\0') {
                iVar2 = (int)in_fr4;
            } else {
                iVar2 = (int)(double)CONCAT44(in_fr14, in_fr4);
            }
            if (iVar2 <= *a1)
                break;
            a1 = a1 + 4;
        }
        if (cVar3 == '\0') {
            iVar2 = (int)in_fr4;
        } else {
            iVar2 = (int)(double)CONCAT44(in_fr14, in_fr4);
        }
        if (*a1 != iVar2) {
            a1 = a1 + -4;
        }
        if (cVar4 == '\0') {
            iStack_20 = a1[1];
            iStack_1c = a1[2];
            iStack_18 = a1[3];
        } else {
            iStack_20 = (int)*(u64 *)(a1 + 1);
            iStack_1c = (int)*(u64 *)(a1 + 2);
            iStack_18 = (int)*(u64 *)(a1 + 3);
            uStack_14 = (u32)((u64) * (u64 *)(a1 + 3) >> 0x20);
        }
        Vec3_ctor_copy(in_stack_00000000, &iStack_20, a2, a3);
        Vec3_dtor(&iStack_20, 0xffffffff, a2, a3);
    }
    return 0;
}

/*
 * game_sub_034384  0x8c034384
 * area name: game code; nothing names its area yet
 * called by: Vec3_sub_03f4a4, game_sub_04c314, game_sub_04f034, game_sub_055c38, game_sub_0564c4, game_sub_058024,
 * game_sub_05c9fc, game_sub_071a38 (+13 more)
 */
u32 game_sub_034384(u32 unused_a0, int *a1, u32 a2, u32 a3) {
    int *piVar1;
    u32 in_fr1;
    float fVar2;
    float fVar3;
    double dVar4;
    double dVar5;
    u32 in_fr3;
    double dVar6;
    u32 uVar7;
    float fVar8;
    u32 in_fr4;
    u64 in_dr14;
    double dVar9;
    u64 in_xd0;
    u64 uVar10;
    u64 uVar11;
    u64 in_xd14;
    bool bVar12;
    char cVar13;
    char cVar14;
    u32 in_stack_00000000;
    float fStack_24;
    float fStack_20;
    float fStack_1c;
    u32 uStack_18;
    u32 uStack_10;

    cVar14 = '\0';
    cVar13 = '\0';
    uStack_10 = 1;
    dVar9 = (double)CONCAT44((int)((u64)in_dr14 >> 0x20), in_fr4);
    Vec3_ctor_xyz(&fStack_24, a1, a2, a3);
    if (a1 == NULL) {
        Vec3_ctor_copy(in_stack_00000000, &fStack_24, a2, a3);
        Vec3_dtor(&fStack_24, 0xffffffff, a2, a3);
    } else {
        if (cVar13 == '\0') {
            bVar12 = SUB84(dVar9, 0) < 0.0;
        } else {
            bVar12 = dVar9 < (double)(u64)in_fr1;
        }
        if (bVar12) {
            dVar9 = (double)((u64)dVar9 & 0xffffffff00000000);
        }
        while (true) {
            fVar2 = (float)*a1;
            dVar4 = (double)(u64)(u32)fVar2;
            if (cVar13 == '\0' && fVar2 < 0.0) {
                if (cVar14 == '\0') {
                    dVar4 = (double)CONCAT44(0x4f800000, fVar2);
                } else {
                    dVar4 = 2.9939313207017074e-78;
                }
                if (cVar13 == '\0') {
                    fVar2 = (float)((u64)dVar4 >> 0x20);
                    dVar4 = (double)CONCAT44(fVar2, SUB84(dVar4, 0) + fVar2);
                } else {
                    dVar4 = dVar4 + dVar4;
                }
            }
            fVar2 = SUB84(dVar9, 0);
            if (cVar13 == '\0') {
                bVar12 = SUB84(dVar4, 0) < fVar2;
            } else {
                bVar12 = dVar4 < dVar9;
            }
            if (!bVar12)
                break;
            a1 = a1 + 4;
        }
        fVar3 = (float)*a1;
        if (cVar13 == '\0' && fVar3 < 0.0) {
            if (cVar14 == '\0') {
                dVar4 = (double)CONCAT44(0x4f800000, fVar3);
            } else {
                dVar4 = 2.9939313207017074e-78;
            }
            if (cVar13 == '\0') {
                fVar3 = SUB84(dVar4, 0) + (float)((u64)dVar4 >> 0x20);
            } else {
                fVar3 = SUB84(dVar4 + dVar4, 0);
            }
        }
        if (fVar3 == fVar2) {
            if (cVar14 == '\0') {
                fStack_24 = (float)a1[1];
                fStack_20 = (float)a1[2];
                fStack_1c = (float)a1[3];
            } else {
                fStack_24 = (float)*(u64 *)(a1 + 1);
                fStack_20 = (float)*(u64 *)(a1 + 2);
                fStack_1c = (float)*(u64 *)(a1 + 3);
                uStack_18 = (u32)((u64) * (u64 *)(a1 + 3) >> 0x20);
            }
        } else {
            piVar1 = a1 + -4;
            if (cVar14 == '\0') {
                dVar4 = (double)CONCAT44(a1[1], in_fr3);
                dVar5 = (double)CONCAT44(a1[-3], fVar3);
            } else {
                dVar4 = *(double *)(a1 + 1);
                dVar5 = *(double *)(a1 + -3);
            }
            if (cVar13 == '\0') {
                dVar4 = (double)CONCAT44((float)((u64)dVar4 >> 0x20) - (float)((u64)dVar5 >> 0x20), SUB84(dVar4, 0));
            } else {
                dVar4 = dVar4 - dVar5;
            }
            fVar3 = (float)(*a1 - *piVar1);
            dVar5 = (double)(u64)(u32)fVar3;
            if (cVar13 == '\0' && fVar3 < 0.0) {
                if (cVar14 == '\0') {
                    dVar5 = (double)CONCAT44(0x4f800000, fVar3);
                } else {
                    dVar5 = 2.9939313207017074e-78;
                }
                if (cVar13 == '\0') {
                    fVar3 = (float)((u64)dVar5 >> 0x20);
                    dVar5 = (double)CONCAT44(fVar3, SUB84(dVar5, 0) + fVar3);
                } else {
                    dVar5 = dVar5 + dVar5;
                }
            }
            if (cVar13 == '\0') {
                dVar4 = (double)CONCAT44((float)((u64)dVar4 >> 0x20) / SUB84(dVar5, 0), SUB84(dVar4, 0));
            } else {
                dVar4 = dVar4 / dVar5;
            }
            fStack_24 = SUB84(dVar4, 0);
            if (cVar14 == '\0') {
                dVar6 = (double)CONCAT44(a1[2], fStack_24);
                dVar5 = (double)CONCAT44(a1[-2], SUB84(dVar5, 0));
                fStack_24 = (float)((u64)dVar4 >> 0x20);
            } else {
                dVar6 = *(double *)(a1 + 2);
                dVar5 = *(double *)(a1 + -2);
            }
            if (cVar13 == '\0') {
                dVar6 = (double)CONCAT44((float)((u64)dVar6 >> 0x20) - (float)((u64)dVar5 >> 0x20), SUB84(dVar6, 0));
            } else {
                dVar6 = dVar6 - dVar5;
            }
            fVar3 = (float)(*a1 - *piVar1);
            dVar4 = (double)(u64)(u32)fVar3;
            if (cVar13 == '\0' && fVar3 < 0.0) {
                if (cVar14 == '\0') {
                    dVar4 = (double)CONCAT44(0x4f800000, fVar3);
                } else {
                    dVar4 = 2.9939313207017074e-78;
                }
                if (cVar13 == '\0') {
                    fVar3 = (float)((u64)dVar4 >> 0x20);
                    dVar4 = (double)CONCAT44(fVar3, SUB84(dVar4, 0) + fVar3);
                } else {
                    dVar4 = dVar4 + dVar4;
                }
            }
            if (cVar13 == '\0') {
                dVar6 = (double)CONCAT44((float)((u64)dVar6 >> 0x20) / SUB84(dVar4, 0), SUB84(dVar6, 0));
            } else {
                dVar6 = dVar6 / dVar4;
            }
            fStack_20 = SUB84(dVar6, 0);
            if (cVar14 == '\0') {
                dVar5 = (double)CONCAT44(a1[3], fStack_20);
                dVar4 = (double)CONCAT44(a1[-1], SUB84(dVar4, 0));
                fStack_20 = (float)(int)((u64)dVar6 >> 0x20);
            } else {
                dVar5 = *(double *)(a1 + 3);
                dVar4 = *(double *)(a1 + -1);
            }
            if (cVar13 == '\0') {
                dVar5 = (double)CONCAT44((float)((u64)dVar5 >> 0x20) - (float)((u64)dVar4 >> 0x20), SUB84(dVar5, 0));
            } else {
                dVar5 = dVar5 - dVar4;
            }
            fVar3 = (float)(*a1 - *piVar1);
            dVar4 = (double)(u64)(u32)fVar3;
            if (cVar13 == '\0' && fVar3 < 0.0) {
                if (cVar14 == '\0') {
                    dVar4 = (double)CONCAT44(0x4f800000, fVar3);
                } else {
                    dVar4 = 2.9939313207017074e-78;
                }
                if (cVar13 == '\0') {
                    fVar3 = (float)((u64)dVar4 >> 0x20);
                    dVar4 = (double)CONCAT44(fVar3, SUB84(dVar4, 0) + fVar3);
                } else {
                    dVar4 = dVar4 + dVar4;
                }
            }
            if (cVar13 == '\0') {
                dVar5 = (double)CONCAT44((float)((u64)dVar5 >> 0x20) / SUB84(dVar4, 0), SUB84(dVar5, 0));
            } else {
                dVar5 = dVar5 / dVar4;
            }
            uVar7 = (u32)((u64)dVar5 >> 0x20);
            fStack_1c = (float)SUB84(dVar5, 0);
            if (cVar14 == '\0') {
                fStack_1c = (float)uVar7;
                uVar7 = uStack_18;
            }
            uStack_18 = uVar7;
            if (cVar13 == '\0') {
                dVar5 = (double)CONCAT44((float)*piVar1, SUB84(dVar5, 0));
            } else {
                dVar5 = (double)*piVar1;
            }
            dVar6 = (double)((u64)dVar4 & 0xffffffff);
            fVar3 = (float)((u64)dVar5 >> 0x20);
            if (cVar13 == '\0') {
                bVar12 = fVar3 < 0.0;
            } else {
                bVar12 = dVar5 < dVar6;
            }
            if (bVar12) {
                if (cVar14 == '\0') {
                    dVar6 = (double)CONCAT44(0x4f800000, SUB84(dVar4, 0));
                } else {
                    dVar6 = 2.9939313207017074e-78;
                }
                if (cVar13 == '\0') {
                    dVar5 = (double)CONCAT44(fVar3 + (float)((u64)dVar6 >> 0x20), SUB84(dVar5, 0));
                } else {
                    dVar5 = dVar5 + dVar6;
                }
            }
            uVar10 = in_xd14;
            if (cVar14 == '\0') {
                dVar6 = (double)CONCAT44((int)((u64)dVar6 >> 0x20), fVar2);
                uVar10 = in_xd0;
            }
            if (cVar13 == '\0') {
                fVar3 = SUB84(dVar6, 0) - (float)((u64)dVar5 >> 0x20);
            } else {
                fVar3 = SUB84(dVar6 - dVar5, 0);
            }
            if (cVar14 == '\0') {
                dVar4 = (double)CONCAT44(fStack_24, fVar3);
            } else {
                dVar4 = (double)CONCAT44(fStack_20, fStack_24);
            }
            if (cVar13 == '\0') {
                fVar3 = SUB84(dVar4, 0) * (float)((u64)dVar4 >> 0x20);
            } else {
                fVar3 = SUB84(dVar4 * dVar4, 0);
            }
            if (cVar14 == '\0') {
                dVar4 = (double)CONCAT44(a1[-3], fVar3);
            } else {
                dVar4 = *(double *)(a1 + -3);
            }
            if (cVar13 == '\0') {
                fVar3 = SUB84(dVar4, 0) + (float)((u64)dVar4 >> 0x20);
            } else {
                fVar3 = SUB84(dVar4 + dVar4, 0);
            }
            fStack_24 = fVar3;
            if (cVar14 != '\0') {
                fStack_24 = (float)uVar10;
                fStack_20 = (float)((u64)uVar10 >> 0x20);
            }
            if (cVar13 == '\0') {
                dVar4 = (double)CONCAT44((float)*piVar1, SUB84(dVar5, 0));
            } else {
                dVar4 = (double)*piVar1;
            }
            dVar5 = (double)(u64)(u32)fVar3;
            fVar8 = (float)((u64)dVar4 >> 0x20);
            if (cVar13 == '\0') {
                bVar12 = fVar8 < 0.0;
            } else {
                bVar12 = dVar4 < dVar5;
            }
            if (bVar12) {
                if (cVar14 == '\0') {
                    dVar5 = (double)CONCAT44(0x4f800000, fVar3);
                } else {
                    dVar5 = 2.9939313207017074e-78;
                }
                if (cVar13 == '\0') {
                    dVar4 = (double)CONCAT44(fVar8 + (float)((u64)dVar5 >> 0x20), SUB84(dVar4, 0));
                } else {
                    dVar4 = dVar4 + dVar5;
                }
            }
            uVar11 = in_xd14;
            if (cVar14 == '\0') {
                dVar5 = (double)CONCAT44((int)((u64)dVar5 >> 0x20), fVar2);
                uVar11 = uVar10;
            }
            if (cVar13 == '\0') {
                fVar3 = SUB84(dVar5, 0) - (float)((u64)dVar4 >> 0x20);
            } else {
                fVar3 = SUB84(dVar5 - dVar4, 0);
            }
            if (cVar14 == '\0') {
                dVar4 = (double)CONCAT44(fStack_20, fVar3);
            } else {
                dVar4 = (double)CONCAT44(fStack_1c, fStack_20);
            }
            if (cVar13 == '\0') {
                fVar3 = SUB84(dVar4, 0) * (float)((u64)dVar4 >> 0x20);
            } else {
                fVar3 = SUB84(dVar4 * dVar4, 0);
            }
            if (cVar14 == '\0') {
                dVar4 = (double)CONCAT44(a1[-2], fVar3);
            } else {
                dVar4 = *(double *)(a1 + -2);
            }
            if (cVar13 == '\0') {
                fStack_20 = SUB84(dVar4, 0) + (float)((u64)dVar4 >> 0x20);
            } else {
                fStack_20 = SUB84(dVar4 + dVar4, 0);
            }
            if (cVar14 != '\0') {
                fStack_20 = (float)uVar11;
                fStack_1c = (float)((u64)uVar11 >> 0x20);
            }
            fVar3 = (float)*piVar1;
            dVar4 = (double)(u64)(u32)fVar3;
            if (cVar13 == '\0' && fVar3 < 0.0) {
                if (cVar14 == '\0') {
                    dVar4 = (double)CONCAT44(0x4f800000, fVar3);
                } else {
                    dVar4 = 2.9939313207017074e-78;
                }
                if (cVar13 == '\0') {
                    fVar3 = (float)((u64)dVar4 >> 0x20);
                    dVar4 = (double)CONCAT44(fVar3, SUB84(dVar4, 0) + fVar3);
                } else {
                    dVar4 = dVar4 + dVar4;
                }
            }
            if (cVar13 == '\0') {
                dVar9 = (double)CONCAT44((int)((u64)dVar9 >> 0x20), fVar2 - SUB84(dVar4, 0));
            } else {
                dVar9 = dVar9 - dVar4;
            }
            if (cVar14 == '\0') {
                dVar4 = (double)CONCAT44(fStack_1c, SUB84(dVar4, 0));
            } else {
                dVar4 = (double)CONCAT44(uStack_18, fStack_1c);
            }
            if (cVar13 == '\0') {
                dVar9 = (double)CONCAT44((int)((u64)dVar9 >> 0x20), SUB84(dVar9, 0) * (float)((u64)dVar4 >> 0x20));
            } else {
                dVar9 = dVar9 * dVar4;
            }
            if (cVar14 == '\0') {
                dVar4 = (double)CONCAT44(a1[-1], SUB84(dVar4, 0));
            } else {
                dVar4 = *(double *)(a1 + -1);
            }
            if (cVar13 == '\0') {
                fStack_1c = SUB84(dVar9, 0) + (float)((u64)dVar4 >> 0x20);
            } else {
                fStack_1c = SUB84(dVar9 + dVar4, 0);
            }
            if (cVar14 != '\0') {
                fStack_1c = (float)in_xd14;
                uStack_18 = (u32)((u64)in_xd14 >> 0x20);
            }
        }
        Vec3_ctor_copy(in_stack_00000000, &fStack_24, a2, a3);
        Vec3_dtor(&fStack_24, 0xffffffff, a2, a3);
    }
    return 0;
}

/*
 * motion_entry_get_4  0x8c034548
 * word 1 of record a2 of the 0x18-byte motion table *a1
 * called by: game_sub_08eef4, game_sub_08f354, game_sub_08f9e8, game_sub_0911f0, game_sub_091570, record18_take
 */
int motion_entry_get_4(u32 unused_a0, int *a1, int a2) {
    int iVar1;
    int iVar2;

    iVar1 = *a1;
    for (iVar2 = 0; iVar2 < a2; iVar2 = iVar2 + 1) {
        iVar1 = iVar1 + 0x18;
    }
    iVar1 = *(int *)(iVar1 + 4);
    if (iVar1 == 0) {
        iVar1 = 0;
    }
    return iVar1;
}

/*
 * game_sub_034574  0x8c034574
 * area name: game code; nothing names its area yet
 * called by: game_sub_073cac, game_sub_074d1c, game_sub_076198, game_sub_07dc50
 */
u32 game_sub_034574(u32 unused_a0, int *a1, u32 a2, u32 a3) {
    float fVar1;
    u32 in_fr1;
    float fVar2;
    double dVar3;
    float in_fr4;
    u32 in_fr14;
    u64 in_xd0;
    bool bVar4;
    u32 in_PR;
    int iVar5;
    char cVar6;
    char cVar7;
    u32 in_stack_00000000;
    float fStack_1c;
    float fStack_14;
    u32 uStack_10;

    cVar7 = '\0';
    cVar6 = '\0';
    uStack_10 = in_PR;
    Vec3_set_xyz(&fStack_1c, a1, a2, a3);
    if (a1 == NULL) {
        vec3_copy_8c02b5fc(in_stack_00000000, &fStack_1c, a2);
        object_dtor_delete(&fStack_1c, 0xffffffff, a2, a3);
    } else {
        if (cVar6 == '\0') {
            bVar4 = in_fr4 < 0.0;
        } else {
            bVar4 = (double)CONCAT44(in_fr14, in_fr4) < (double)(u64)in_fr1;
        }
        if (bVar4) {
            in_fr4 = 0.0;
        }
        while (true) {
            if (cVar6 == '\0') {
                iVar5 = (int)in_fr4;
            } else {
                iVar5 = (int)(double)CONCAT44(in_fr14, in_fr4);
            }
            if (iVar5 <= *a1)
                break;
            a1 = a1 + 4;
        }
        if (cVar6 == '\0') {
            iVar5 = (int)in_fr4;
        } else {
            iVar5 = (int)(double)CONCAT44(in_fr14, in_fr4);
        }
        if (*a1 != iVar5) {
            a1 = a1 + -4;
        }
        if (cVar7 == '\0') {
            dVar3 = (double)CONCAT44(0x43b40000, (float)a1[1]);
        } else {
            dVar3 = 2.6584566620691055e+36;
        }
        if (cVar6 == '\0') {
            fVar2 = SUB84(dVar3, 0) * (float)((u64)dVar3 >> 0x20);
        } else {
            fVar2 = SUB84(dVar3 * dVar3, 0);
        }
        if (cVar7 == '\0') {
            dVar3 = (double)CONCAT44(0x47800000, fVar2);
        } else {
            dVar3 = 6.207226708901173e-78;
        }
        if (cVar6 == '\0') {
            fVar2 = SUB84(dVar3, 0) / (float)((u64)dVar3 >> 0x20);
        } else {
            fVar2 = SUB84(dVar3 / dVar3, 0);
        }
        fStack_1c = (float)in_xd0;
        fVar1 = fStack_1c;
        if (cVar7 == '\0') {
            fStack_1c = fVar2;
        }
        if (cVar7 == '\0') {
            dVar3 = (double)CONCAT44(0x43b40000, (float)a1[2]);
        } else {
            dVar3 = 2.6584566620691055e+36;
        }
        if (cVar6 == '\0') {
            fVar2 = SUB84(dVar3, 0) * (float)((u64)dVar3 >> 0x20);
        } else {
            fVar2 = SUB84(dVar3 * dVar3, 0);
        }
        if (cVar7 == '\0') {
            dVar3 = (double)CONCAT44(0x47800000, fVar2);
        } else {
            dVar3 = 6.207226708901173e-78;
        }
        if (cVar6 == '\0') {
            fVar2 = SUB84(dVar3, 0) / (float)((u64)dVar3 >> 0x20);
        } else {
            fVar2 = SUB84(dVar3 / dVar3, 0);
        }
        if (cVar7 == '\0') {
        }
        if (cVar7 == '\0') {
            dVar3 = (double)CONCAT44(0x43b40000, (float)a1[3]);
        } else {
            dVar3 = 2.6584566620691055e+36;
        }
        if (cVar6 == '\0') {
            fVar2 = SUB84(dVar3, 0) * (float)((u64)dVar3 >> 0x20);
        } else {
            fVar2 = SUB84(dVar3 * dVar3, 0);
        }
        if (cVar7 == '\0') {
            dVar3 = (double)CONCAT44(0x47800000, fVar2);
        } else {
            dVar3 = 6.207226708901173e-78;
        }
        if (cVar6 == '\0') {
            fStack_14 = SUB84(dVar3, 0) / (float)((u64)dVar3 >> 0x20);
        } else {
            fStack_14 = SUB84(dVar3 / dVar3, 0);
        }
        if (cVar7 != '\0') {
            uStack_10 = (u32)((u64)in_xd0 >> 0x20);
            fStack_14 = fVar1;
        }
        vec3_copy_8c02b5fc(in_stack_00000000, &fStack_1c, a2);
        object_dtor_delete(&fStack_1c, 0xffffffff, a2, a3);
    }
    return 0;
}

/*
 * game_sub_034650  0x8c034650
 * area name: game code; nothing names its area yet
 * called by: game_sub_049b68, game_sub_04b168, game_sub_051c14, game_sub_057e58, game_sub_0755e0, game_sub_077a38,
 * game_sub_07f418, game_sub_0811b4 (+5 more)
 */
u32 game_sub_034650(u32 unused_a0, int *a1, u32 a2, u32 a3) {
    int *piVar1;
    u32 in_fr1;
    float fVar2;
    float fVar3;
    double dVar4;
    double dVar5;
    double dVar6;
    u32 in_fr3;
    double dVar7;
    u32 in_fr4;
    u64 in_dr14;
    u64 in_xd0;
    double in_xd14;
    bool bVar8;
    float in_PR;
    char cVar9;
    char cVar10;
    u32 in_stack_00000000;
    float fStack_20;
    float fStack_1c;
    float fStack_18;
    float fStack_14;
    u32 uStack_10;

    cVar10 = '\0';
    cVar9 = '\0';
    uStack_10 = 1;
    dVar5 = (double)CONCAT44((int)((u64)in_dr14 >> 0x20), in_fr4);
    fStack_14 = in_PR;
    Vec3_set_xyz(&fStack_20, a1, a2, a3);
    if (a1 == NULL) {
        vec3_copy_8c02b5fc(in_stack_00000000, &fStack_20, a2);
        object_dtor_delete(&fStack_20, 0xffffffff, a2, a3);
    } else {
        if (cVar9 == '\0') {
            bVar8 = SUB84(dVar5, 0) < 0.0;
        } else {
            bVar8 = dVar5 < (double)(u64)in_fr1;
        }
        if (bVar8) {
            dVar5 = (double)((u64)dVar5 & 0xffffffff00000000);
        }
        while (true) {
            fVar2 = (float)*a1;
            dVar4 = (double)(u64)(u32)fVar2;
            if (cVar9 == '\0' && fVar2 < 0.0) {
                if (cVar10 == '\0') {
                    dVar4 = (double)CONCAT44(0x4f800000, fVar2);
                } else {
                    dVar4 = 1.4411522222084588e+18;
                }
                if (cVar9 == '\0') {
                    fVar2 = (float)((u64)dVar4 >> 0x20);
                    dVar4 = (double)CONCAT44(fVar2, SUB84(dVar4, 0) + fVar2);
                } else {
                    dVar4 = dVar4 + dVar4;
                }
            }
            fVar2 = SUB84(dVar5, 0);
            if (cVar9 == '\0') {
                bVar8 = SUB84(dVar4, 0) < fVar2;
            } else {
                bVar8 = dVar4 < dVar5;
            }
            if (!bVar8)
                break;
            a1 = a1 + 4;
        }
        fVar3 = (float)*a1;
        if (cVar9 == '\0' && fVar3 < 0.0) {
            if (cVar10 == '\0') {
                dVar4 = (double)CONCAT44(0x4f800000, fVar3);
            } else {
                dVar4 = 1.4411522222084588e+18;
            }
            if (cVar9 == '\0') {
                fVar3 = SUB84(dVar4, 0) + (float)((u64)dVar4 >> 0x20);
            } else {
                fVar3 = SUB84(dVar4 + dVar4, 0);
            }
        }
        if (fVar3 == fVar2) {
            if (cVar10 == '\0') {
                dVar5 = (double)CONCAT44(0x43b40000, (float)a1[1]);
            } else {
                dVar5 = 2.6584566620691055e+36;
            }
            if (cVar9 == '\0') {
                fVar2 = SUB84(dVar5, 0) * (float)((u64)dVar5 >> 0x20);
            } else {
                fVar2 = SUB84(dVar5 * dVar5, 0);
            }
            if (cVar10 == '\0') {
                dVar5 = (double)CONCAT44(0x47800000, fVar2);
            } else {
                dVar5 = 2.9939312563572376e-78;
            }
            if (cVar9 == '\0') {
                fVar2 = SUB84(dVar5, 0) / (float)((u64)dVar5 >> 0x20);
            } else {
                fVar2 = SUB84(dVar5 / dVar5, 0);
            }
            fStack_20 = (float)in_xd0;
            fVar3 = fStack_20;
            if (cVar10 == '\0') {
                fStack_20 = fVar2;
            }
            if (cVar10 == '\0') {
                dVar5 = (double)CONCAT44(0x43b40000, (float)a1[2]);
            } else {
                dVar5 = 2.6584566620691055e+36;
            }
            if (cVar9 == '\0') {
                fVar2 = SUB84(dVar5, 0) * (float)((u64)dVar5 >> 0x20);
            } else {
                fVar2 = SUB84(dVar5 * dVar5, 0);
            }
            if (cVar10 == '\0') {
                dVar5 = (double)CONCAT44(0x47800000, fVar2);
            } else {
                dVar5 = 2.9939312563572376e-78;
            }
            if (cVar9 == '\0') {
                fVar2 = SUB84(dVar5, 0) / (float)((u64)dVar5 >> 0x20);
            } else {
                fVar2 = SUB84(dVar5 / dVar5, 0);
            }
            fStack_1c = fVar3;
            if (cVar10 == '\0') {
                fStack_1c = fVar2;
            }
            if (cVar10 == '\0') {
                dVar5 = (double)CONCAT44(0x43b40000, (float)a1[3]);
            } else {
                dVar5 = 2.6584566620691055e+36;
            }
            if (cVar9 == '\0') {
                fVar2 = SUB84(dVar5, 0) * (float)((u64)dVar5 >> 0x20);
            } else {
                fVar2 = SUB84(dVar5 * dVar5, 0);
            }
            if (cVar10 == '\0') {
                dVar5 = (double)CONCAT44(0x47800000, fVar2);
            } else {
                dVar5 = 2.9939312563572376e-78;
            }
            if (cVar9 == '\0') {
                fStack_18 = SUB84(dVar5, 0) / (float)((u64)dVar5 >> 0x20);
            } else {
                fStack_18 = SUB84(dVar5 / dVar5, 0);
            }
            if (cVar10 != '\0') {
                fStack_14 = (float)((u64)in_xd0 >> 0x20);
                fStack_18 = fVar3;
            }
        } else {
            piVar1 = a1 + -4;
            if (cVar9 == '\0') {
                dVar4 = (double)CONCAT44((float)(a1[1] - a1[-3]), in_fr3);
            } else {
                dVar4 = (double)(a1[1] - a1[-3]);
            }
            if (cVar10 == '\0') {
                dVar6 = (double)CONCAT44(0x43b40000, fVar3);
            } else {
                dVar6 = 2.6584566620691055e+36;
            }
            if (cVar9 == '\0') {
                dVar4 = (double)CONCAT44((float)((u64)dVar4 >> 0x20) * (float)((u64)dVar6 >> 0x20), SUB84(dVar4, 0));
            } else {
                dVar4 = dVar4 * dVar6;
            }
            if (cVar10 == '\0') {
                dVar6 = (double)CONCAT44(0x47800000, SUB84(dVar6, 0));
            } else {
                dVar6 = 2.9939312563572376e-78;
            }
            if (cVar9 == '\0') {
                dVar4 = (double)CONCAT44((float)((u64)dVar4 >> 0x20) / (float)((u64)dVar6 >> 0x20), SUB84(dVar4, 0));
            } else {
                dVar4 = dVar4 / dVar6;
            }
            fVar3 = (float)(*a1 - *piVar1);
            dVar6 = (double)(u64)(u32)fVar3;
            if (cVar9 == '\0' && fVar3 < 0.0) {
                if (cVar10 == '\0') {
                    dVar6 = (double)CONCAT44(0x4f800000, fVar3);
                } else {
                    dVar6 = 1.4411522222084588e+18;
                }
                if (cVar9 == '\0') {
                    fVar3 = (float)((u64)dVar6 >> 0x20);
                    dVar6 = (double)CONCAT44(fVar3, SUB84(dVar6, 0) + fVar3);
                } else {
                    dVar6 = dVar6 + dVar6;
                }
            }
            if (cVar9 == '\0') {
                dVar4 = (double)CONCAT44((float)((u64)dVar4 >> 0x20) / SUB84(dVar6, 0), SUB84(dVar4, 0));
            } else {
                dVar4 = dVar4 / dVar6;
            }
            fStack_20 = SUB84(dVar4, 0);
            if (cVar10 == '\0') {
                fStack_20 = (float)((u64)dVar4 >> 0x20);
            }
            if (cVar9 == '\0') {
                dVar4 = (double)CONCAT44((float)(a1[2] - a1[-2]), SUB84(dVar4, 0));
            } else {
                dVar4 = (double)(a1[2] - a1[-2]);
            }
            if (cVar10 == '\0') {
                dVar6 = (double)CONCAT44(0x43b40000, SUB84(dVar6, 0));
            } else {
                dVar6 = 2.6584566620691055e+36;
            }
            if (cVar9 == '\0') {
                dVar4 = (double)CONCAT44((float)((u64)dVar4 >> 0x20) * (float)((u64)dVar6 >> 0x20), SUB84(dVar4, 0));
            } else {
                dVar4 = dVar4 * dVar6;
            }
            if (cVar10 == '\0') {
                dVar6 = (double)CONCAT44(0x47800000, SUB84(dVar6, 0));
            } else {
                dVar6 = 2.9939312563572376e-78;
            }
            if (cVar9 == '\0') {
                dVar4 = (double)CONCAT44((float)((u64)dVar4 >> 0x20) / (float)((u64)dVar6 >> 0x20), SUB84(dVar4, 0));
            } else {
                dVar4 = dVar4 / dVar6;
            }
            fVar3 = (float)(*a1 - *piVar1);
            dVar6 = (double)(u64)(u32)fVar3;
            if (cVar9 == '\0' && fVar3 < 0.0) {
                if (cVar10 == '\0') {
                    dVar6 = (double)CONCAT44(0x4f800000, fVar3);
                } else {
                    dVar6 = 1.4411522222084588e+18;
                }
                if (cVar9 == '\0') {
                    fVar3 = (float)((u64)dVar6 >> 0x20);
                    dVar6 = (double)CONCAT44(fVar3, SUB84(dVar6, 0) + fVar3);
                } else {
                    dVar6 = dVar6 + dVar6;
                }
            }
            if (cVar9 == '\0') {
                dVar4 = (double)CONCAT44((float)((u64)dVar4 >> 0x20) / SUB84(dVar6, 0), SUB84(dVar4, 0));
            } else {
                dVar4 = dVar4 / dVar6;
            }
            fStack_1c = SUB84(dVar4, 0);
            if (cVar10 == '\0') {
                fStack_1c = (float)((u64)dVar4 >> 0x20);
            }
            if (cVar9 == '\0') {
                dVar4 = (double)CONCAT44((float)(a1[3] - a1[-1]), SUB84(dVar4, 0));
            } else {
                dVar4 = (double)(a1[3] - a1[-1]);
            }
            if (cVar10 == '\0') {
                dVar6 = (double)CONCAT44(0x43b40000, SUB84(dVar6, 0));
            } else {
                dVar6 = 2.6584566620691055e+36;
            }
            if (cVar9 == '\0') {
                dVar4 = (double)CONCAT44((float)((u64)dVar4 >> 0x20) * (float)((u64)dVar6 >> 0x20), SUB84(dVar4, 0));
            } else {
                dVar4 = dVar4 * dVar6;
            }
            if (cVar10 == '\0') {
                dVar6 = (double)CONCAT44(0x47800000, SUB84(dVar6, 0));
            } else {
                dVar6 = 2.9939312563572376e-78;
            }
            if (cVar9 == '\0') {
                dVar4 = (double)CONCAT44((float)((u64)dVar4 >> 0x20) / (float)((u64)dVar6 >> 0x20), SUB84(dVar4, 0));
            } else {
                dVar4 = dVar4 / dVar6;
            }
            fVar3 = (float)(*a1 - *piVar1);
            dVar6 = (double)(u64)(u32)fVar3;
            if (cVar9 == '\0' && fVar3 < 0.0) {
                if (cVar10 == '\0') {
                    dVar6 = (double)CONCAT44(0x4f800000, fVar3);
                } else {
                    dVar6 = 1.4411522222084588e+18;
                }
                if (cVar9 == '\0') {
                    fVar3 = (float)((u64)dVar6 >> 0x20);
                    dVar6 = (double)CONCAT44(fVar3, SUB84(dVar6, 0) + fVar3);
                } else {
                    dVar6 = dVar6 + dVar6;
                }
            }
            if (cVar9 == '\0') {
                dVar4 = (double)CONCAT44((float)((u64)dVar4 >> 0x20) / SUB84(dVar6, 0), SUB84(dVar4, 0));
            } else {
                dVar4 = dVar4 / dVar6;
            }
            fVar3 = (float)((u64)dVar4 >> 0x20);
            fStack_18 = SUB84(dVar4, 0);
            if (cVar10 == '\0') {
                fStack_18 = fVar3;
                fVar3 = fStack_14;
            }
            fStack_14 = fVar3;
            fVar3 = (float)*piVar1;
            dVar6 = (double)(u64)(u32)fVar3;
            if (cVar9 == '\0' && fVar3 < 0.0) {
                if (cVar10 == '\0') {
                    dVar6 = (double)CONCAT44(0x4f800000, fVar3);
                } else {
                    dVar6 = 1.4411522222084588e+18;
                }
                if (cVar9 == '\0') {
                    fVar3 = (float)((u64)dVar6 >> 0x20);
                    dVar6 = (double)CONCAT44(fVar3, SUB84(dVar6, 0) + fVar3);
                } else {
                    dVar6 = dVar6 + dVar6;
                }
            }
            dVar7 = in_xd14;
            if (cVar10 == '\0') {
                dVar7 = (double)CONCAT44(fVar2, SUB84(dVar4, 0));
            }
            if (cVar9 == '\0') {
                dVar7 = (double)CONCAT44((float)((u64)dVar7 >> 0x20) - SUB84(dVar6, 0), SUB84(dVar7, 0));
            } else {
                dVar7 = dVar7 - dVar6;
            }
            if (cVar10 == '\0') {
                dVar4 = (double)CONCAT44(fStack_20, SUB84(dVar6, 0));
            } else {
                dVar4 = (double)CONCAT44(fStack_1c, fStack_20);
            }
            if (cVar9 == '\0') {
                dVar7 = (double)CONCAT44((float)((u64)dVar7 >> 0x20) * (float)((u64)dVar4 >> 0x20), SUB84(dVar7, 0));
            } else {
                dVar7 = dVar7 * dVar4;
            }
            if (cVar10 == '\0') {
                dVar4 = (double)CONCAT44(0x43b40000, (float)a1[-3]);
            } else {
                dVar4 = 2.6584566620691055e+36;
            }
            if (cVar9 == '\0') {
                fVar3 = SUB84(dVar4, 0) * (float)((u64)dVar4 >> 0x20);
            } else {
                fVar3 = SUB84(dVar4 * dVar4, 0);
            }
            if (cVar10 == '\0') {
                dVar4 = (double)CONCAT44(0x47800000, fVar3);
            } else {
                dVar4 = 2.9939312563572376e-78;
            }
            if (cVar9 == '\0') {
                dVar7 = (double)CONCAT44((float)((u64)dVar7 >> 0x20) + SUB84(dVar4, 0) / (float)((u64)dVar4 >> 0x20),
                                         SUB84(dVar7, 0));
            } else {
                dVar7 = dVar7 + dVar4 / dVar4;
            }
            fVar3 = (float)((u64)dVar7 >> 0x20);
            fStack_20 = SUB84(dVar7, 0);
            if (cVar10 == '\0') {
                fStack_20 = fVar3;
                fVar3 = fStack_1c;
            }
            fStack_1c = fVar3;
            fVar3 = (float)*piVar1;
            dVar4 = (double)(u64)(u32)fVar3;
            if (cVar9 == '\0' && fVar3 < 0.0) {
                if (cVar10 == '\0') {
                    dVar4 = (double)CONCAT44(0x4f800000, fVar3);
                } else {
                    dVar4 = 1.4411522222084588e+18;
                }
                if (cVar9 == '\0') {
                    fVar3 = (float)((u64)dVar4 >> 0x20);
                    dVar4 = (double)CONCAT44(fVar3, SUB84(dVar4, 0) + fVar3);
                } else {
                    dVar4 = dVar4 + dVar4;
                }
            }
            dVar6 = in_xd14;
            if (cVar10 == '\0') {
                dVar6 = (double)CONCAT44(fVar2, SUB84(dVar7, 0));
            }
            if (cVar9 == '\0') {
                dVar6 = (double)CONCAT44((float)((u64)dVar6 >> 0x20) - SUB84(dVar4, 0), SUB84(dVar6, 0));
            } else {
                dVar6 = dVar6 - dVar4;
            }
            if (cVar10 == '\0') {
                dVar4 = (double)CONCAT44(fStack_1c, SUB84(dVar4, 0));
            } else {
                dVar4 = (double)CONCAT44(fStack_18, fStack_1c);
            }
            if (cVar9 == '\0') {
                dVar6 = (double)CONCAT44((float)((u64)dVar6 >> 0x20) * (float)((u64)dVar4 >> 0x20), SUB84(dVar6, 0));
            } else {
                dVar6 = dVar6 * dVar4;
            }
            if (cVar10 == '\0') {
                dVar4 = (double)CONCAT44(0x43b40000, (float)a1[-2]);
            } else {
                dVar4 = 2.6584566620691055e+36;
            }
            if (cVar9 == '\0') {
                fVar3 = SUB84(dVar4, 0) * (float)((u64)dVar4 >> 0x20);
            } else {
                fVar3 = SUB84(dVar4 * dVar4, 0);
            }
            if (cVar10 == '\0') {
                dVar4 = (double)CONCAT44(0x47800000, fVar3);
            } else {
                dVar4 = 2.9939312563572376e-78;
            }
            if (cVar9 == '\0') {
                dVar6 = (double)CONCAT44((float)((u64)dVar6 >> 0x20) + SUB84(dVar4, 0) / (float)((u64)dVar4 >> 0x20),
                                         SUB84(dVar6, 0));
            } else {
                dVar6 = dVar6 + dVar4 / dVar4;
            }
            fVar3 = (float)((u64)dVar6 >> 0x20);
            fStack_1c = fVar3;
            if (cVar10 != '\0') {
                fStack_1c = SUB84(dVar6, 0);
                fStack_18 = fVar3;
            }
            fVar3 = (float)*piVar1;
            dVar4 = (double)(u64)(u32)fVar3;
            if (cVar9 == '\0' && fVar3 < 0.0) {
                if (cVar10 == '\0') {
                    dVar4 = (double)CONCAT44(0x4f800000, fVar3);
                } else {
                    dVar4 = 1.4411522222084588e+18;
                }
                if (cVar9 == '\0') {
                    fVar3 = (float)((u64)dVar4 >> 0x20);
                    dVar4 = (double)CONCAT44(fVar3, SUB84(dVar4, 0) + fVar3);
                } else {
                    dVar4 = dVar4 + dVar4;
                }
            }
            if (cVar9 == '\0') {
                dVar5 = (double)CONCAT44((int)((u64)dVar5 >> 0x20), fVar2 - SUB84(dVar4, 0));
            } else {
                dVar5 = dVar5 - dVar4;
            }
            if (cVar10 == '\0') {
                dVar4 = (double)CONCAT44(fStack_18, SUB84(dVar4, 0));
            } else {
                dVar4 = (double)CONCAT44(fStack_14, fStack_18);
            }
            if (cVar9 == '\0') {
                dVar5 = (double)CONCAT44((int)((u64)dVar5 >> 0x20), SUB84(dVar5, 0) * (float)((u64)dVar4 >> 0x20));
            } else {
                dVar5 = dVar5 * dVar4;
            }
            if (cVar10 == '\0') {
                dVar4 = (double)CONCAT44(0x43b40000, (float)a1[-1]);
            } else {
                dVar4 = 2.6584566620691055e+36;
            }
            if (cVar9 == '\0') {
                fVar2 = SUB84(dVar4, 0) * (float)((u64)dVar4 >> 0x20);
            } else {
                fVar2 = SUB84(dVar4 * dVar4, 0);
            }
            if (cVar10 == '\0') {
                dVar4 = (double)CONCAT44(0x47800000, fVar2);
            } else {
                dVar4 = 2.9939312563572376e-78;
            }
            if (cVar9 == '\0') {
                fStack_18 = SUB84(dVar5, 0) + SUB84(dVar4, 0) / (float)((u64)dVar4 >> 0x20);
            } else {
                fStack_18 = SUB84(dVar5 + dVar4 / dVar4, 0);
            }
            if (cVar10 != '\0') {
                fStack_18 = SUB84(in_xd14, 0);
                fStack_14 = (float)((u64)in_xd14 >> 0x20);
            }
        }
        vec3_copy_8c02b5fc(in_stack_00000000, &fStack_20, a2);
        object_dtor_delete(&fStack_20, 0xffffffff, a2, a3);
    }
    return 0;
}

/*
 * game_sub_034880  0x8c034880
 * area name: game code; nothing names its area yet
 * called by: record18_take
 */
int game_sub_034880(u32 unused_a0, int *a1, int a2) {
    int iVar1;
    int iVar2;

    iVar1 = *a1;
    for (iVar2 = 0; iVar2 < a2; iVar2 = iVar2 + 1) {
        iVar1 = iVar1 + 0x18;
    }
    iVar1 = *(int *)(iVar1 + 8);
    if (iVar1 == 0) {
        iVar1 = 0;
    }
    return iVar1;
}

/*
 * game_sub_0348ac  0x8c0348ac
 * area name: game code; nothing names its area yet
 * called by: game_sub_04f034, game_sub_077a38
 */
u32 game_sub_0348ac(u32 unused_a0, int *a1, u32 a2, u32 a3) {
    int *piVar1;
    u32 in_fr1;
    float fVar2;
    float fVar3;
    double dVar4;
    double dVar5;
    u32 in_fr3;
    double dVar6;
    u32 uVar7;
    float fVar8;
    u32 in_fr4;
    u64 in_dr14;
    double dVar9;
    u64 in_xd0;
    u64 uVar10;
    u64 uVar11;
    u64 in_xd14;
    bool bVar12;
    u32 in_PR;
    char cVar13;
    char cVar14;
    u32 in_stack_00000000;
    float fStack_20;
    float fStack_1c;
    float fStack_18;
    u32 uStack_14;

    cVar14 = '\0';
    cVar13 = '\0';
    dVar9 = (double)CONCAT44((int)((u64)in_dr14 >> 0x20), in_fr4);
    uStack_14 = in_PR;
    set_fields_0_4_8(&fStack_20, a1);
    if (a1 == NULL) {
        Vec3_assign_copy_023e24(in_stack_00000000, &fStack_20);
        free_if_nonnull_wrap_016ac4(&fStack_20, 0xffffffff, a2, a3);
    } else {
        if (cVar13 == '\0') {
            bVar12 = SUB84(dVar9, 0) < 0.0;
        } else {
            bVar12 = dVar9 < (double)(u64)in_fr1;
        }
        if (bVar12) {
            dVar9 = (double)((u64)dVar9 & 0xffffffff00000000);
        }
        while (true) {
            fVar2 = (float)*a1;
            dVar4 = (double)(u64)(u32)fVar2;
            if (cVar13 == '\0' && fVar2 < 0.0) {
                if (cVar14 == '\0') {
                    dVar4 = (double)CONCAT44(0x4f800000, fVar2);
                } else {
                    dVar4 = 2.9939313207017074e-78;
                }
                if (cVar13 == '\0') {
                    fVar2 = (float)((u64)dVar4 >> 0x20);
                    dVar4 = (double)CONCAT44(fVar2, SUB84(dVar4, 0) + fVar2);
                } else {
                    dVar4 = dVar4 + dVar4;
                }
            }
            fVar2 = SUB84(dVar9, 0);
            if (cVar13 == '\0') {
                bVar12 = SUB84(dVar4, 0) < fVar2;
            } else {
                bVar12 = dVar4 < dVar9;
            }
            if (!bVar12)
                break;
            a1 = a1 + 4;
        }
        fVar3 = (float)*a1;
        if (cVar13 == '\0' && fVar3 < 0.0) {
            if (cVar14 == '\0') {
                dVar4 = (double)CONCAT44(0x4f800000, fVar3);
            } else {
                dVar4 = 2.9939313207017074e-78;
            }
            if (cVar13 == '\0') {
                fVar3 = SUB84(dVar4, 0) + (float)((u64)dVar4 >> 0x20);
            } else {
                fVar3 = SUB84(dVar4 + dVar4, 0);
            }
        }
        if (fVar3 == fVar2) {
            if (cVar14 == '\0') {
                fStack_20 = (float)a1[1];
                fStack_1c = (float)a1[2];
                fStack_18 = (float)a1[3];
            } else {
                fStack_20 = (float)*(u64 *)(a1 + 1);
                fStack_1c = (float)*(u64 *)(a1 + 2);
                fStack_18 = (float)*(u64 *)(a1 + 3);
                uStack_14 = (u32)((u64) * (u64 *)(a1 + 3) >> 0x20);
            }
        } else {
            piVar1 = a1 + -4;
            if (cVar14 == '\0') {
                dVar4 = (double)CONCAT44(a1[1], in_fr3);
                dVar5 = (double)CONCAT44(a1[-3], fVar3);
            } else {
                dVar4 = *(double *)(a1 + 1);
                dVar5 = *(double *)(a1 + -3);
            }
            if (cVar13 == '\0') {
                dVar4 = (double)CONCAT44((float)((u64)dVar4 >> 0x20) - (float)((u64)dVar5 >> 0x20), SUB84(dVar4, 0));
            } else {
                dVar4 = dVar4 - dVar5;
            }
            fVar3 = (float)(*a1 - *piVar1);
            dVar5 = (double)(u64)(u32)fVar3;
            if (cVar13 == '\0' && fVar3 < 0.0) {
                if (cVar14 == '\0') {
                    dVar5 = (double)CONCAT44(0x4f800000, fVar3);
                } else {
                    dVar5 = 2.9939313207017074e-78;
                }
                if (cVar13 == '\0') {
                    fVar3 = (float)((u64)dVar5 >> 0x20);
                    dVar5 = (double)CONCAT44(fVar3, SUB84(dVar5, 0) + fVar3);
                } else {
                    dVar5 = dVar5 + dVar5;
                }
            }
            if (cVar13 == '\0') {
                dVar4 = (double)CONCAT44((float)((u64)dVar4 >> 0x20) / SUB84(dVar5, 0), SUB84(dVar4, 0));
            } else {
                dVar4 = dVar4 / dVar5;
            }
            fStack_20 = SUB84(dVar4, 0);
            if (cVar14 == '\0') {
                dVar6 = (double)CONCAT44(a1[2], fStack_20);
                dVar5 = (double)CONCAT44(a1[-2], SUB84(dVar5, 0));
                fStack_20 = (float)((u64)dVar4 >> 0x20);
            } else {
                dVar6 = *(double *)(a1 + 2);
                dVar5 = *(double *)(a1 + -2);
            }
            if (cVar13 == '\0') {
                dVar6 = (double)CONCAT44((float)((u64)dVar6 >> 0x20) - (float)((u64)dVar5 >> 0x20), SUB84(dVar6, 0));
            } else {
                dVar6 = dVar6 - dVar5;
            }
            fVar3 = (float)(*a1 - *piVar1);
            dVar4 = (double)(u64)(u32)fVar3;
            if (cVar13 == '\0' && fVar3 < 0.0) {
                if (cVar14 == '\0') {
                    dVar4 = (double)CONCAT44(0x4f800000, fVar3);
                } else {
                    dVar4 = 2.9939313207017074e-78;
                }
                if (cVar13 == '\0') {
                    fVar3 = (float)((u64)dVar4 >> 0x20);
                    dVar4 = (double)CONCAT44(fVar3, SUB84(dVar4, 0) + fVar3);
                } else {
                    dVar4 = dVar4 + dVar4;
                }
            }
            if (cVar13 == '\0') {
                dVar6 = (double)CONCAT44((float)((u64)dVar6 >> 0x20) / SUB84(dVar4, 0), SUB84(dVar6, 0));
            } else {
                dVar6 = dVar6 / dVar4;
            }
            fStack_1c = SUB84(dVar6, 0);
            if (cVar14 == '\0') {
                dVar5 = (double)CONCAT44(a1[3], fStack_1c);
                dVar4 = (double)CONCAT44(a1[-1], SUB84(dVar4, 0));
                fStack_1c = (float)(int)((u64)dVar6 >> 0x20);
            } else {
                dVar5 = *(double *)(a1 + 3);
                dVar4 = *(double *)(a1 + -1);
            }
            if (cVar13 == '\0') {
                dVar5 = (double)CONCAT44((float)((u64)dVar5 >> 0x20) - (float)((u64)dVar4 >> 0x20), SUB84(dVar5, 0));
            } else {
                dVar5 = dVar5 - dVar4;
            }
            fVar3 = (float)(*a1 - *piVar1);
            dVar4 = (double)(u64)(u32)fVar3;
            if (cVar13 == '\0' && fVar3 < 0.0) {
                if (cVar14 == '\0') {
                    dVar4 = (double)CONCAT44(0x4f800000, fVar3);
                } else {
                    dVar4 = 2.9939313207017074e-78;
                }
                if (cVar13 == '\0') {
                    fVar3 = (float)((u64)dVar4 >> 0x20);
                    dVar4 = (double)CONCAT44(fVar3, SUB84(dVar4, 0) + fVar3);
                } else {
                    dVar4 = dVar4 + dVar4;
                }
            }
            if (cVar13 == '\0') {
                dVar5 = (double)CONCAT44((float)((u64)dVar5 >> 0x20) / SUB84(dVar4, 0), SUB84(dVar5, 0));
            } else {
                dVar5 = dVar5 / dVar4;
            }
            uVar7 = (u32)((u64)dVar5 >> 0x20);
            fStack_18 = (float)SUB84(dVar5, 0);
            if (cVar14 == '\0') {
                fStack_18 = (float)uVar7;
                uVar7 = uStack_14;
            }
            uStack_14 = uVar7;
            if (cVar13 == '\0') {
                dVar5 = (double)CONCAT44((float)*piVar1, SUB84(dVar5, 0));
            } else {
                dVar5 = (double)*piVar1;
            }
            dVar6 = (double)((u64)dVar4 & 0xffffffff);
            fVar3 = (float)((u64)dVar5 >> 0x20);
            if (cVar13 == '\0') {
                bVar12 = fVar3 < 0.0;
            } else {
                bVar12 = dVar5 < dVar6;
            }
            if (bVar12) {
                if (cVar14 == '\0') {
                    dVar6 = (double)CONCAT44(0x4f800000, SUB84(dVar4, 0));
                } else {
                    dVar6 = 2.9939313207017074e-78;
                }
                if (cVar13 == '\0') {
                    dVar5 = (double)CONCAT44(fVar3 + (float)((u64)dVar6 >> 0x20), SUB84(dVar5, 0));
                } else {
                    dVar5 = dVar5 + dVar6;
                }
            }
            uVar10 = in_xd14;
            if (cVar14 == '\0') {
                dVar6 = (double)CONCAT44((int)((u64)dVar6 >> 0x20), fVar2);
                uVar10 = in_xd0;
            }
            if (cVar13 == '\0') {
                fVar3 = SUB84(dVar6, 0) - (float)((u64)dVar5 >> 0x20);
            } else {
                fVar3 = SUB84(dVar6 - dVar5, 0);
            }
            if (cVar14 == '\0') {
                dVar4 = (double)CONCAT44(fStack_20, fVar3);
            } else {
                dVar4 = (double)CONCAT44(fStack_1c, fStack_20);
            }
            if (cVar13 == '\0') {
                fVar3 = SUB84(dVar4, 0) * (float)((u64)dVar4 >> 0x20);
            } else {
                fVar3 = SUB84(dVar4 * dVar4, 0);
            }
            if (cVar14 == '\0') {
                dVar4 = (double)CONCAT44(a1[-3], fVar3);
            } else {
                dVar4 = *(double *)(a1 + -3);
            }
            if (cVar13 == '\0') {
                fVar3 = SUB84(dVar4, 0) + (float)((u64)dVar4 >> 0x20);
            } else {
                fVar3 = SUB84(dVar4 + dVar4, 0);
            }
            fStack_20 = fVar3;
            if (cVar14 != '\0') {
                fStack_20 = (float)uVar10;
                fStack_1c = (float)((u64)uVar10 >> 0x20);
            }
            if (cVar13 == '\0') {
                dVar4 = (double)CONCAT44((float)*piVar1, SUB84(dVar5, 0));
            } else {
                dVar4 = (double)*piVar1;
            }
            dVar5 = (double)(u64)(u32)fVar3;
            fVar8 = (float)((u64)dVar4 >> 0x20);
            if (cVar13 == '\0') {
                bVar12 = fVar8 < 0.0;
            } else {
                bVar12 = dVar4 < dVar5;
            }
            if (bVar12) {
                if (cVar14 == '\0') {
                    dVar5 = (double)CONCAT44(0x4f800000, fVar3);
                } else {
                    dVar5 = 2.9939313207017074e-78;
                }
                if (cVar13 == '\0') {
                    dVar4 = (double)CONCAT44(fVar8 + (float)((u64)dVar5 >> 0x20), SUB84(dVar4, 0));
                } else {
                    dVar4 = dVar4 + dVar5;
                }
            }
            uVar11 = in_xd14;
            if (cVar14 == '\0') {
                dVar5 = (double)CONCAT44((int)((u64)dVar5 >> 0x20), fVar2);
                uVar11 = uVar10;
            }
            if (cVar13 == '\0') {
                fVar3 = SUB84(dVar5, 0) - (float)((u64)dVar4 >> 0x20);
            } else {
                fVar3 = SUB84(dVar5 - dVar4, 0);
            }
            if (cVar14 == '\0') {
                dVar4 = (double)CONCAT44(fStack_1c, fVar3);
            } else {
                dVar4 = (double)CONCAT44(fStack_18, fStack_1c);
            }
            if (cVar13 == '\0') {
                fVar3 = SUB84(dVar4, 0) * (float)((u64)dVar4 >> 0x20);
            } else {
                fVar3 = SUB84(dVar4 * dVar4, 0);
            }
            if (cVar14 == '\0') {
                dVar4 = (double)CONCAT44(a1[-2], fVar3);
            } else {
                dVar4 = *(double *)(a1 + -2);
            }
            if (cVar13 == '\0') {
                fStack_1c = SUB84(dVar4, 0) + (float)((u64)dVar4 >> 0x20);
            } else {
                fStack_1c = SUB84(dVar4 + dVar4, 0);
            }
            if (cVar14 != '\0') {
                fStack_1c = (float)uVar11;
                fStack_18 = (float)((u64)uVar11 >> 0x20);
            }
            fVar3 = (float)*piVar1;
            dVar4 = (double)(u64)(u32)fVar3;
            if (cVar13 == '\0' && fVar3 < 0.0) {
                if (cVar14 == '\0') {
                    dVar4 = (double)CONCAT44(0x4f800000, fVar3);
                } else {
                    dVar4 = 2.9939313207017074e-78;
                }
                if (cVar13 == '\0') {
                    fVar3 = (float)((u64)dVar4 >> 0x20);
                    dVar4 = (double)CONCAT44(fVar3, SUB84(dVar4, 0) + fVar3);
                } else {
                    dVar4 = dVar4 + dVar4;
                }
            }
            if (cVar13 == '\0') {
                dVar9 = (double)CONCAT44((int)((u64)dVar9 >> 0x20), fVar2 - SUB84(dVar4, 0));
            } else {
                dVar9 = dVar9 - dVar4;
            }
            if (cVar14 == '\0') {
                dVar4 = (double)CONCAT44(fStack_18, SUB84(dVar4, 0));
            } else {
                dVar4 = (double)CONCAT44(uStack_14, fStack_18);
            }
            if (cVar13 == '\0') {
                dVar9 = (double)CONCAT44((int)((u64)dVar9 >> 0x20), SUB84(dVar9, 0) * (float)((u64)dVar4 >> 0x20));
            } else {
                dVar9 = dVar9 * dVar4;
            }
            if (cVar14 == '\0') {
                dVar4 = (double)CONCAT44(a1[-1], SUB84(dVar4, 0));
            } else {
                dVar4 = *(double *)(a1 + -1);
            }
            if (cVar13 == '\0') {
                fStack_18 = SUB84(dVar9, 0) + (float)((u64)dVar4 >> 0x20);
            } else {
                fStack_18 = SUB84(dVar9 + dVar4, 0);
            }
            if (cVar14 != '\0') {
                fStack_18 = (float)in_xd14;
                uStack_14 = (u32)((u64)in_xd14 >> 0x20);
            }
        }
        Vec3_assign_copy_023e24(in_stack_00000000, &fStack_20);
        free_if_nonnull_wrap_016ac4(&fStack_20, 0xffffffff, a2, a3);
    }
    return 0;
}

/*
 * record18_take  0x8c034a70
 * returns record a3 of the 0x18-byte table *a1 in a2 and clears it
 * called by: Class_12a03c_m6_03a65c, Class_12a25c_m6_06e69c, Class_12b2ac_m6_0afcc0
 */
u32 record18_take(u32 unused_a0, int *a1, u32 *a2, int a3) {
    u32 uVar1;
    u32 uVar2;
    u32 uVar3;
    uVar1 = motion_entry_get_0(unused_a0, a1, a3);
    uVar2 = motion_entry_get_4(unused_a0, a1, a3);
    uVar3 = game_sub_034880(unused_a0, a1, a3);
    *a2 = uVar1;
    a2[1] = uVar2;
    a2[2] = uVar3;
    a2[3] = *(u32 *)(a3 * 0x18 + *a1 + 0xc);
    a2[4] = *(u32 *)(a3 * 0x18 + *a1 + 0x10);
    a2[5] = *(u32 *)(a3 * 0x18 + *a1 + 0x14);
    *(u32 *)(*a1 + a3 * 0x18) = 0;
    *(u32 *)(a3 * 0x18 + *a1 + 4) = 0;
    *(u32 *)(a3 * 0x18 + *a1 + 8) = 0;
    *(u32 *)(a3 * 0x18 + *a1 + 0xc) = 0;
    *(u32 *)(a3 * 0x18 + *a1 + 0x10) = 0;
    *(u32 *)(a3 * 0x18 + *a1 + 0x14) = 0;
    return 0;
}

/*
 * game_sub_034ba8  0x8c034ba8
 * area name: game code; nothing names its area yet
 */
u32 game_sub_034ba8(u32 unused_a0, u32 a1, u32 a2, u32 a3) {
    u32 uVar1;
    u32 uVar2;
    u8 *puVar3;

    uVar1 = Vec3_ctor_xyz((&DATA_8c125c18), a1, a2, a3);
    puVar3 = (&Vec3_dtor);
    uVar2 = 0x8c27df08;
    global_list_push(uVar1, (&Vec3_dtor), 0x8c27df08, a3);
    uVar1 = Vec3_ctor_xyz((&DATA_8c125c28), puVar3, uVar2, a3);
    puVar3 = (&Vec3_dtor);
    uVar2 = 0x8c27df14;
    global_list_push(uVar1, (&Vec3_dtor), 0x8c27df14, a3);
    uVar1 = Vec3_ctor_xyz((&DATA_8c125c38), puVar3, uVar2, a3);
    puVar3 = (&Vec3_dtor);
    uVar2 = 0x8c27df20;
    global_list_push(uVar1, (&Vec3_dtor), 0x8c27df20, a3);
    uVar2 = Vec3_ctor_xyz((&DATA_8c125c48), puVar3, uVar2, a3);
    uVar2 = global_list_push(uVar2, (&Vec3_dtor), 0x8c27df2c, a3);
    return uVar2;
}

/*
 * game_sub_034c50  0x8c034c50
 * area name: game code; nothing names its area yet
 * called by: game_sub_0254d0
 */
u16 *game_sub_034c50(u16 *a0, int a1, int a2) {
    int iVar1;

    *a0 = 0xffff;
    *(u32 *)(a0 + 4) = 0;
    for (iVar1 = 0; iVar1 < 0xf; iVar1 = iVar1 + 1) {
        *(u8 *)((int)a0 + iVar1 + 0xc) = (&DATA_8c132dd0)[iVar1 + a2 * 0xf];
    }
    *(u8 **)(a0 + 0xe) = (&DATA_8c133318) + a1 * 0x30;
    a0[2] = 0xffff;
    *(u8 *)(a0 + 1) = 0;
    *(u32 *)(a0 + 0x10) = 0;
    *(u32 *)(a0 + 0x12) = 0;
    for (iVar1 = 0; iVar1 < *(short *)(*(int *)(a0 + 0xe) + 2); iVar1 = iVar1 + 1) {
        if (((*(char *)((int)a0 + iVar1 + 0xc) == '\0') &&
             (*(short *)(*(int *)(*(int *)(a0 + 0xe) + iVar1 * 4 + 4) + 4) == 0)) &&
            (*(short *)(*(int *)(*(int *)(a0 + 0xe) + iVar1 * 4 + 4) + 6) == 0)) {
            *(u8 *)((int)a0 + iVar1 + 0xc) = 1;
        }
    }
    return a0;
}

/*
 * free_if_nonnull_wrap_034d08  0x8c034d08
 * called by: CAnimal_m0_025688
 */
int free_if_nonnull_wrap_034d08(int a0, u32 a1, u32 a2, u32 a3) {
    u32 in_stack_fffffff4;

    if ((a0 != 0) && (0 < (short)a1)) {
        free_if_nonnull(a0, a1, a2, a3, CONCAT22((short)((u32)in_stack_fffffff4 >> 0x10), (short)a1));
    }
    return a0;
}

/*
 * game_sub_034d38  0x8c034d38
 * area name: game code; nothing names its area yet
 * called by: CAnimal_sub_028e20, CAnimal_sub_036260, CAnimal_sub_0851f4, game_sub_08a17c
 */
int game_sub_034d38(u32 unused_a0, int a1) {
    return (int)*(char *)(0x8c132f56 + a1);
}

/*
 * CAnimal_sub_034d48  0x8c034d48
 * area name: only called from CAnimal methods
 * called by: CAnimal_m2_02573c, CAnimal_m3_026078
 */
u32 CAnimal_sub_034d48(short *a0, u32 *a1, u32 *a2, u32 a3) {
    u32 uVar1;
    int iVar2;
    int iVar3;
    u32 uVar4;
    u32 *ar5_00;
    u32 *ar6_00;

    ar5_00 = a1;
    ar6_00 = a2;
    uVar1 = table13019c_find_row(a2[2]);
    if (((((short)uVar1 != 8) || (iVar2 = get_field_24_026024(*a2, ar5_00, ar6_00, a3), iVar2 == 1)) &&
         ((uVar1 = table13019c_find_row(a2[2]),
           (short)uVar1 != 0x10 || (iVar2 = get_field_24_026024(*a2, ar5_00, ar6_00, a3), iVar2 == 1)))) &&
        ((*(int *)(a0 + 4) != 0 || (iVar2 = get_field_c0_034f3c(a2[5]), iVar2 != 1)))) {
        if ((char)a0[0x14] == '\x01') {
            ar5_00 = a2;
            game_sub_034f48(a0, a2, ar6_00);
        }
        iVar2 = get_field_c_02d1b8(a2[2] + 0xa8);
        iVar2 = (int)a1 - iVar2;
        uVar1 = 0x3c;
        iVar3 = libgcc_divide_helper_0103d0(iVar2, 0x3c);
        if ((iVar3 == 1) && (iVar2 != *(int *)(a0 + 0x10))) {
            *(int *)(a0 + 0x12) = *(int *)(a0 + 0x12) + 1;
            uVar1 = libgcc_divide_helper_010284(iVar2, 0x3c, ar6_00);
            ar6_00 = a2;
            game_sub_035028(a0, uVar1);
        }
        *(int *)(a0 + 0x10) = iVar2;
        if (*a0 == -1) {
            game_sub_035110(a0, a2, ar6_00, a3);
        } else {
            if (*(int *)(a0 + 4) == 1) {
                uVar4 = (**(code **)(*(int *)(*(int *)(a0 + 0xe) + *a0 * 4 + 4) + 0x14))(a2, uVar1, ar6_00, a3);
                *(u32 *)(a0 + 4) = uVar4;
            }
            if ((*(int *)(a0 + 4) == 2) || (*(int *)(a0 + 4) == 3)) {
                uVar4 = (**(code **)(*(int *)(*(int *)(a0 + 0xe) + *a0 * 4 + 4) + 0x18))(a2, uVar1, ar6_00, a3);
                *(u32 *)(a0 + 4) = uVar4;
                *(u8 *)((int)a0 + *a0 + 0xc) = 4;
            }
            if (*(int *)(a0 + 4) == 4) {
                uVar1 = (**(code **)(*(int *)(*(int *)(a0 + 0xe) + *a0 * 4 + 4) + 0x1c))(a2, uVar1, ar6_00, a3);
                *(u32 *)(a0 + 4) = uVar1;
            }
            if (*(int *)(a0 + 4) == 5) {
                *(u8 *)((int)a0 + *a0 + 0xc) = 5;
                if (*(char *)(*(int *)(*(int *)(a0 + 0xe) + *a0 * 4 + 4) + 0x22) == '\0') {
                    *(u8 *)((int)a0 + *a0 + 0xc) = 6;
                }
                *a0 = -1;
                a0[0x12] = 0;
                a0[0x13] = 0;
                a0[4] = 0;
                a0[5] = 0;
            }
        }
    }
    *(u8 *)(a0 + 1) = 0;
    *(u8 *)(a0 + 0x14) = 0;
    return 0x28;
}

/*
 * get_field_c0_034f3c  0x8c034f3c
 * called by: CAnimal_sub_034d48, game_sub_035858
 */
u32 get_field_c0_034f3c(int a0) {
    return *(u32 *)(0xc0 + a0);
}

/*
 * game_sub_034f48  0x8c034f48
 * area name: game code; nothing names its area yet
 * called by: CAnimal_sub_034d48
 */
int game_sub_034f48(int a0, int a1, u32 a2) {
    u32 uVar1;
    int iVar2;
    int ar5_00;
    int iVar3;

    ar5_00 = a1;
    game_sub_02bef8(*(u32 *)(a1 + 8), a1, a2);
    get_field_18_on_field_a8(*(u32 *)(a1 + 8));
    for (iVar3 = 0; iVar2 = (int)*(short *)(*(int *)(a0 + 0x1c) + 2), iVar3 < iVar2; iVar3 = iVar3 + 1) {
        if ((*(char *)(a0 + iVar3 + 0xc) == '\0') || (*(char *)(a0 + iVar3 + 0xc) == '\x06')) {
            uVar1 = game_sub_02bef8(*(u32 *)(a1 + 8), ar5_00, a2);
            if (*(short *)(*(int *)(*(int *)(a0 + 0x1c) + iVar3 * 4 + 4) + 4) <= (short)uVar1) {
                iVar2 = get_field_18_on_field_a8(*(u32 *)(a1 + 8));
                if (*(short *)(*(int *)(*(int *)(a0 + 0x1c) + iVar3 * 4 + 4) + 6) <= iVar2) {
                    *(u8 *)(a0 + iVar3 + 0xc) = 1;
                }
            }
        }
    }
    return iVar2;
}

/*
 * get_field_18_on_field_a8  0x8c035000
 * calls get_field_18_02d1a0 on the member at +0xa8
 * called by: game_sub_034f48, game_sub_0353bc, game_sub_0bcedc, game_sub_107590
 */
u32 get_field_18_on_field_a8(int a0) {
    u32 uVar1;

    uVar1 = get_field_18_02d1a0(a0 + 0xa8);
    return uVar1;
}

/*
 * game_sub_035028  0x8c035028
 * area name: game code; nothing names its area yet
 * called by: CAnimal_sub_034d48
 */
int game_sub_035028(int a0, u32 a1) {
    int iVar1;
    int iVar2;
    int iVar3;

    iVar2 = *(int *)(a0 + 0x24);
    for (iVar3 = 0; iVar1 = (int)*(short *)(*(int *)(a0 + 0x1c) + 2), iVar3 < iVar1; iVar3 = iVar3 + 1) {
        if ((((*(short *)(*(int *)(*(int *)(a0 + 0x1c) + iVar3 * 4 + 4) + 0xc) == -1) ||
              ('\x04' < *(char *)(*(short *)(*(int *)(*(int *)(a0 + 0x1c) + iVar3 * 4 + 4) + 0xc) + a0 + 0xc))) &&
             (*(u32 *)(*(int *)(*(int *)(a0 + 0x1c) + iVar3 * 4 + 4) + 8) <= a1)) &&
            ((*(short *)(*(int *)(*(int *)(a0 + 0x1c) + iVar3 * 4 + 4) + 0xe) <= iVar2 &&
              (*(char *)(a0 + iVar3 + 0xc) == '\x01')))) {
            *(u32 *)(a0 + 0x24) = 0;
            *(u8 *)(a0 + iVar3 + 0xc) = 2;
        }
    }
    return iVar1;
}

/*
 * game_sub_035110  0x8c035110
 * area name: game code; nothing names its area yet
 * called by: CAnimal_sub_034d48
 */
int game_sub_035110(u16 *a0, int a1, u32 a2, u32 a3) {
    int iVar1;
    int ar5_00;
    int iVar2;
    short sVar3;
    int iVar4;

    iVar2 = -1;
    sVar3 = 0;
    ar5_00 = a1;
    for (iVar4 = 0; iVar4 < *(short *)(*(int *)(a0 + 0xe) + 2); iVar4 = iVar4 + 1) {
        if (*(char *)((int)a0 + iVar4 + 0xc) == '\x02') {
            iVar1 = game_sub_02c518(*(u32 *)(a1 + 8), ar5_00, a2);
            if ((iVar1 == -1) && (sVar3 < *(short *)(*(int *)(*(int *)(a0 + 0xe) + iVar4 * 4 + 4) + 2))) {
                if (*(char *)(*(int *)(*(int *)(a0 + 0xe) + iVar4 * 4 + 4) + 0x21) == '\0') {
                    iVar1 = (**(code **)(*(int *)(*(int *)(a0 + 0xe) + iVar4 * 4 + 4) + 0x10))(a1, ar5_00, a2, a3);
                    if (iVar1 == 1) {
                        iVar2 = (int)**(short **)(*(int *)(a0 + 0xe) + iVar4 * 4 + 4);
                        sVar3 = *(short *)(*(int *)(*(int *)(a0 + 0xe) + iVar4 * 4 + 4) + 2);
                    }
                } else if (*(char *)(*(int *)(*(int *)(a0 + 0xe) + iVar4 * 4 + 4) + 0x21) == '\x01') {
                    ar5_00 = a1;
                    iVar1 = game_sub_03525c(a0, a1, a2, a3);
                    if (iVar1 == 1) {
                        iVar1 = (**(code **)(*(int *)(*(int *)(a0 + 0xe) + iVar4 * 4 + 4) + 0x10))(a1, ar5_00, a2, a3);
                        if (iVar1 == 1) {
                            iVar2 = (int)**(short **)(*(int *)(a0 + 0xe) + iVar4 * 4 + 4);
                            sVar3 = *(short *)(*(int *)(*(int *)(a0 + 0xe) + iVar4 * 4 + 4) + 2);
                        }
                    }
                }
            }
        }
    }
    if (iVar2 == -1) {
        iVar2 = -1;
    } else {
        *(u8 *)((int)a0 + iVar2 + 0xc) = 3;
        *a0 = (short)iVar2;
        *(u32 *)(a0 + 4) = 1;
        *(u32 *)(a0 + 0x12) = 0;
    }
    return iVar2;
}

/*
 * game_sub_03525c  0x8c03525c
 * area name: game code; nothing names its area yet
 * called by: game_sub_035110
 */
u32 game_sub_03525c(u32 unused_a0, int a1, u32 a2, u32 a3) {
    float *ar6_00;
    float fVar1;
    float fVar2;
    char cVar3;
    char cVar4;
    float fStack_38;
    float fStack_34;
    u8 auStack_30[16];
    u8 auStack_20[16];
    u8 auStack_10[16];

    cVar4 = '\0';
    cVar3 = '\0';
    Vec3_ctor_copy_wrap_02f670(*(u32 *)(a1 + 4), a1, a2, a3, auStack_30);
    Vec3_ctor_copy(auStack_20, auStack_30, a2, a3);
    Vec3_dtor(auStack_30, 0xffffffff, a2, a3);
    ar6_00 = &fStack_38;
    matrix_sub_256294(0, auStack_10, ar6_00);
    if (cVar4 == '\0') {
        fVar2 = 150.0;
        fVar1 = fStack_38;
    } else {
        fVar1 = 150.0;
        fVar2 = 500.0;
    }
    if (cVar3 == '\0' && fVar2 < fVar1) {
        if (cVar4 == '\0') {
            fVar1 = 500.0;
        } else {
            fStack_38 = 500.0;
            fVar1 = 80.0;
        }
        if (cVar3 == '\0' && fStack_38 < fVar1) {
            if (cVar4 == '\0') {
                fVar2 = 80.0;
                fVar1 = fStack_34;
            } else {
                fVar1 = 80.0;
                fVar2 = 400.0;
            }
            if (cVar3 == '\0' && fVar2 < fVar1) {
                if (cVar4 == '\0') {
                    fVar1 = 400.0;
                } else {
                    fStack_34 = 400.0;
                    fVar1 = -9.917997e+27;
                }
                if (cVar3 == '\0' && fStack_34 < fVar1) {
                    Vec3_dtor(auStack_20, 0xffffffff, ar6_00, a3);
                    return 1;
                }
            }
        }
    }
    Vec3_dtor(auStack_20, 0xffffffff, ar6_00, a3);
    return 0;
}

/*
 * copy15_in_normalize  0x8c035338
 * copies 15 bytes from a1 to +0xc, turning values 2, 3, 4 and 6 into 1
 * called by: CAnimal_sub_028ccc, CAnimal_sub_028da8, Class_12a990_sub_09c7c0, Class_12a990_sub_09c820, game_sub_038a44,
 * game_sub_0883e0, game_sub_08b694, game_sub_08b720 (+4 more)
 */
u32 copy15_in_normalize(int a0, int a1) {
    int iVar1;

    for (iVar1 = 0; iVar1 < 0xf; iVar1 = iVar1 + 1) {
        *(u8 *)(a0 + iVar1 + 0xc) = *(u8 *)(iVar1 + a1);
    }
    for (iVar1 = 0; iVar1 < 0xf; iVar1 = iVar1 + 1) {
        if ((((*(char *)(a0 + iVar1 + 0xc) == '\x06') || (*(char *)(a0 + iVar1 + 0xc) == '\x02')) ||
             (*(char *)(a0 + iVar1 + 0xc) == '\x03')) ||
            (*(char *)(a0 + iVar1 + 0xc) == '\x04')) {
            *(u8 *)(a0 + iVar1 + 0xc) = 1;
        }
    }
    return 0xf;
}

/*
 * copy15_out  0x8c03539c
 * copies the 15 bytes at +0xc to a1
 * called by: CAnimal_sub_028f60, Class_12a990_sub_09c878, Class_12a990_sub_09c8d8, game_sub_02903c, game_sub_038aa4,
 * game_sub_088440, game_sub_09adec, game_sub_09ae4c (+2 more)
 */
u32 copy15_out(int a0, int a1) {
    int iVar1;

    for (iVar1 = 0; iVar1 < 0xf; iVar1 = iVar1 + 1) {
        *(u8 *)(iVar1 + a1) = *(u8 *)(a0 + iVar1 + 0xc);
    }
    return 0xf;
}

/*
 * game_sub_0353bc  0x8c0353bc
 * area name: game code; nothing names its area yet
 * called by: game_sub_0274bc
 */
int game_sub_0353bc(int a0, u32 a1, u32 a2) {
    u32 uVar1;
    int iVar2;
    u32 ar5_00;
    int iVar3;

    ar5_00 = a1;
    game_sub_02bef8(a1, a1, a2);
    get_field_18_on_field_a8(a1);
    for (iVar3 = 0; iVar2 = (int)*(short *)(*(int *)(a0 + 0x1c) + 2), iVar3 < iVar2; iVar3 = iVar3 + 1) {
        if (*(char *)(a0 + iVar3 + 0xc) == '\0') {
            uVar1 = game_sub_02bef8(a1, ar5_00, a2);
            if (*(short *)(*(int *)(*(int *)(a0 + 0x1c) + iVar3 * 4 + 4) + 4) <= (short)uVar1) {
                iVar2 = get_field_18_on_field_a8(a1);
                if (*(short *)(*(int *)(*(int *)(a0 + 0x1c) + iVar3 * 4 + 4) + 6) <= iVar2) {
                    *(u8 *)(a0 + iVar3 + 0xc) = 1;
                }
            }
        }
    }
    return iVar2;
}

/*
 * game_sub_035470  0x8c035470
 * area name: game code; nothing names its area yet
 */
u32 game_sub_035470(int a0, u32 a1, u32 a2, u32 a3) {
    int iVar1;
    u32 uVar2;
    u32 uVar3;

    uVar3 = 0;
    iVar1 = (**(code **)(0x180 + *(int *)(*(int *)(a0 + 4) + 8)))(*(int *)(a0 + 4), a1, a2, a3);
    if (iVar1 != 2) {
        uVar3 = get_field_a4_s16(*(u32 *)(a0 + 0x20), a1);
        a1 = 0x3c;
        uVar3 = libgcc_divide_helper_0101e4(uVar3 & 0xffff, 0x3c);
    }
    iVar1 = (**(code **)(**(int **)(a0 + 0x10) + 0x44))(*(int **)(a0 + 0x10), a1, a2, a3);
    if (iVar1 < 8) {
        iVar1 = (**(code **)(**(int **)(a0 + 0x10) + 0x44))(*(int **)(a0 + 0x10), a1, a2, a3);
        if ((iVar1 < 7) || ((uVar3 & 0xffff) < 10)) {
            iVar1 = (**(code **)(**(int **)(a0 + 0x10) + 0x44))(*(int **)(a0 + 0x10), a1, a2, a3);
            if ((iVar1 < 6) || ((uVar3 & 0xffff) < 0xc)) {
                iVar1 = (**(code **)(**(int **)(a0 + 0x10) + 0x44))(*(int **)(a0 + 0x10), a1, a2, a3);
                if ((iVar1 < 5) || ((uVar3 & 0xffff) < 0xf)) {
                    iVar1 = (**(code **)(**(int **)(a0 + 0x10) + 0x44))(*(int **)(a0 + 0x10), a1, a2, a3);
                    if ((iVar1 < 4) || ((uVar3 & 0xffff) < 0x14)) {
                        uVar2 = 0;
                    } else {
                        uVar2 = 1;
                    }
                } else {
                    uVar2 = 1;
                }
            } else {
                uVar2 = 1;
            }
        } else {
            uVar2 = 1;
        }
    } else {
        uVar2 = 1;
    }
    return uVar2;
}

/*
 * game_sub_035580  0x8c035580
 * area name: game code; nothing names its area yet
 */
u32 game_sub_035580(int a0, u32 a1, u32 a2, u32 a3) {
    int iVar1;

    iVar1 = (**(code **)(**(int **)(a0 + 0x10) + 0x44))(*(int **)(a0 + 0x10), a1, a2, a3);
    if ((3 < iVar1) &&
        (iVar1 = (**(code **)(0x180 + *(int *)(*(int *)(a0 + 4) + 8)))(*(int *)(a0 + 4), a1, a2, a3), iVar1 != 2)) {
        return 1;
    }
    return 0;
}

/*
 * game_sub_0355cc  0x8c0355cc
 * area name: game code; nothing names its area yet
 */
u32 game_sub_0355cc(int a0, u32 a1, u32 a2, u32 a3) {
    int iVar1;
    u32 uVar2;

    iVar1 = (**(code **)(0x180 + *(int *)(*(int *)(a0 + 4) + 8)))(*(int *)(a0 + 4), a1, a2, a3);
    if ((((iVar1 == 0) && (uVar2 = get_field_1_s8(*(int *)(a0 + 8) + 0xa8), (char)uVar2 == '\x01')) &&
         (iVar1 = get_field_178_035734(*(u32 *)(a0 + 0xc), a1, a2), iVar1 == 0)) &&
        (iVar1 = get_field_140_025f70(*(u32 *)(a0 + 8), a1), iVar1 == 1)) {
        a1 = 7;
        iVar1 = speech_sub_0fa388(0x8c35468c, 7, a2, a3);
        if (((iVar1 == 1) &&
             (uVar2 = (*(code *)(&get_field_a0_035724))(*(u32 *)(a0 + 0x20), a1, a2, a3), (char)uVar2 == '\x02')) &&
            (iVar1 = (**(code **)(**(int **)(a0 + 0x10) + 0x44))(*(int **)(a0 + 0x10), a1, a2, a3), iVar1 == 0)) {
            return 1;
        }
    }
    iVar1 = (**(code **)(0x180 + *(int *)(*(int *)(a0 + 4) + 8)))(*(int *)(a0 + 4), a1, a2, a3);
    if (((iVar1 == 0x1d) && (uVar2 = get_field_1_s8(*(int *)(a0 + 8) + 0xa8), (char)uVar2 == '\x01')) &&
        ((iVar1 = get_field_178_035734(*(u32 *)(a0 + 0xc), a1, a2),
          iVar1 == 0 && (((iVar1 = get_field_140_025f70(*(u32 *)(a0 + 8), a1),
                           iVar1 == 1 && (uVar2 = (*(code *)(&get_field_a0_035724))(*(u32 *)(a0 + 0x20), a1, a2, a3),
                                          (char)uVar2 == '\x02')) &&
                          (iVar1 = (**(code **)(**(int **)(a0 + 0x10) + 0x44))(*(int **)(a0 + 0x10), a1, a2, a3),
                           iVar1 == 0)))))) {
        game_sub_035718(*(u32 *)(a0 + 0x18), 4);
        return 1;
    }
    return 0;
}

/*
 * game_sub_035718  0x8c035718
 * area name: game code; nothing names its area yet
 * called by: Class_12c3c4_sub_109e40, game_sub_0355cc
 */
u32 game_sub_035718(int a0, u32 a1) {
    *(u8 *)(a0 + (char)a1 + 0xc) = 1;
    return 1;
}

/*
 * get_field_a0_035724  0x8c035724
 * called by: CAnimal_m2_03640c, CAnimal_m3_036568, CAnimal_sub_0858e4, CTexture_sub_0d97ec, Class_12a078_sub_05d860,
 * Class_12b0c4_m1_0ab7f4, Class_12b930_m1_0de1dc, Class_12b930_m2_0de3d4 (+9 more)
 */
u32 get_field_a0_035724(int a0, u32 a1) {
    return (u32) * (u8 *)(0xa0 + a0);
}

/*
 * get_field_178_035734  0x8c035734
 * called by: Class_12a078_sub_05d860, Class_12c3c4_sub_103100, Vec3_sub_063838, game_sub_0355cc, game_sub_035740,
 * game_sub_035858, game_sub_035994, game_sub_035a3c (+4 more)
 */
u32 get_field_178_035734(int a0, u32 unused_a1, u32 a2) {
    return *(u32 *)(0x178 + a0);
}

/*
 * game_sub_035740  0x8c035740
 * area name: game code; nothing names its area yet
 */
u32 game_sub_035740(u32 *a0, u32 unused_a1, int a2, u32 a3) {
    int iVar1;
    u32 uVar2;
    int iVar3;
    int a6;

    iVar3 = 0;
    a6 = 0;
    while (true) {
        uVar2 = 3;
        iVar1 = (**(code **)(0x11c + *(int *)*a0))((int *)*a0, 3, a2, a3);
        if (iVar1 <= a6)
            break;
        uVar2 = 3;
        a2 = a6;
        iVar1 = (**(code **)(0x100 + *(int *)*a0))((int *)*a0, 3, a6, a3);
        iVar1 = (**(code **)(0x114 + *(int *)(iVar1 + 8)))(iVar1, uVar2, a2, a3);
        if (iVar1 == 4) {
            uVar2 = 3;
            a2 = a6;
            iVar1 = (**(code **)(0x100 + *(int *)*a0))((int *)*a0, 3, a6, a3);
            iVar1 = (**(code **)(0xb4 + *(int *)(iVar1 + 8)))(iVar1, uVar2, a2, a3);
            if (iVar1 == 1) {
                iVar3 = iVar3 + 1;
            }
        }
        a6 = a6 + 1;
    }
    if ((((1 < iVar3) && (iVar3 = get_field_178_035734(a0[3], uVar2, a2), iVar3 == 0)) &&
         (iVar3 = percent_field_4_of_c(a0[2] + 0x90, uVar2, a2, a3), iVar3 < 0x31)) &&
        (uVar2 = get_field_be_s8(a0[5]), (char)uVar2 == '\x02')) {
        counter_set_clamped(a0[2] + 0x90, 0, a2);
        return 1;
    }
    return 0;
}

/*
 * get_field_be_s8  0x8c03584c
 * called by: game_sub_035740, game_sub_035858, game_sub_0660d4, game_sub_1093a4
 */
int get_field_be_s8(int a0) {
    return (int)*(char *)(0xbe + a0);
}

/*
 * game_sub_035858  0x8c035858
 * area name: game code; nothing names its area yet
 */
u32 game_sub_035858(u32 *a0, u32 unused_a1, int a2, u32 a3) {
    int iVar1;
    u32 uVar2;
    u32 uVar3;
    int iVar4;
    int a6;

    iVar4 = 0;
    a6 = 0;
    while (true) {
        uVar3 = 5;
        iVar1 = (**(code **)(0x11c + *(int *)*a0))((int *)*a0, 5, a2, a3);
        if (iVar1 <= a6)
            break;
        uVar3 = 5;
        a2 = a6;
        iVar1 = (**(code **)(0x100 + *(int *)*a0))((int *)*a0, 5, a6, a3);
        iVar1 = (**(code **)(0x114 + *(int *)(iVar1 + 8)))(iVar1, uVar3, a2, a3);
        if (iVar1 == 7) {
            uVar3 = 5;
            a2 = a6;
            iVar1 = (**(code **)(0x100 + *(int *)*a0))((int *)*a0, 5, a6, a3);
            iVar1 = (**(code **)(0xb4 + *(int *)(iVar1 + 8)))(iVar1, uVar3, a2, a3);
            if (iVar1 == 1) {
                iVar4 = iVar4 + 1;
            }
        }
        a6 = a6 + 1;
    }
    if ((((1 < iVar4) && (iVar4 = get_field_178_035734(a0[3], uVar3, a2), iVar4 == 0)) &&
         (iVar4 = percent_field_4_of_c(a0[2] + 0x90, uVar3, a2, a3), iVar4 < 0x31)) &&
        (((uVar2 = get_field_be_s8(a0[5]), (char)uVar2 == '\x02' && (iVar4 = get_field_c0_034f3c(a0[5]), iVar4 == 0)) &&
          (iVar4 = get_field_40_03598c(a0[5], uVar3), iVar4 == 0)))) {
        counter_set_clamped(a0[2] + 0x90, 0, a2);
        return 1;
    }
    return 0;
}

/*
 * get_field_40_03598c  0x8c03598c
 * called by: Class_12a078_m2_05eee0, Class_12a078_sub_05d860, Vec3_sub_063838, game_sub_035858, game_sub_035e94,
 * game_sub_0620d4, game_sub_0652f4, game_sub_065e6c
 */
u32 get_field_40_03598c(int a0, u32 a1) {
    return *(u32 *)(a0 + 0x40);
}

/*
 * game_sub_035994  0x8c035994
 * area name: game code; nothing names its area yet
 */
u32 game_sub_035994(int a0, u32 a1, u32 a2, u32 a3) {
    u32 uVar1;
    int iVar2;

    uVar1 = get_field_1_s8(*(int *)(a0 + 8) + 0xa8);
    if (((((char)uVar1 == '\x01') && (iVar2 = get_field_178_035734(*(u32 *)(a0 + 0xc), a1, a2), iVar2 == 0)) &&
         (iVar2 = get_field_140_025f70(*(u32 *)(a0 + 8), a1), iVar2 == 1)) &&
        (uVar1 = get_field_a0_035724(*(u32 *)(a0 + 0x20), a1), (char)uVar1 == '\x02')) {
        iVar2 = get_field_13c_028d9c(*(u32 *)(a0 + 8), a1, a2);
        if (iVar2 != 4) {
            return 1;
        }
        iVar2 = (**(code **)(**(int **)(a0 + 0x10) + 0x44))(*(int **)(a0 + 0x10), a1, a2, a3);
        if (iVar2 == 0) {
            return 1;
        }
    }
    return 0;
}

/*
 * game_sub_035a3c  0x8c035a3c
 * area name: game code; nothing names its area yet
 */
u32 game_sub_035a3c(int a0, u32 a1, u32 a2) {
    u32 uVar1;
    int iVar2;

    uVar1 = get_field_1_s8(*(int *)(a0 + 8) + 0xa8);
    if (((((char)uVar1 == '\x01') && (iVar2 = get_field_178_035734(*(u32 *)(a0 + 0xc), a1, a2), iVar2 == 0)) &&
         (iVar2 = get_field_140_025f70(*(u32 *)(a0 + 8), a1), iVar2 == 1)) &&
        (uVar1 = get_field_90_s8(*(u32 *)(a0 + 0x10)), (char)uVar1 == '\x02')) {
        return 1;
    }
    return 0;
}

/*
 * get_field_90_s8  0x8c035ab4
 * called by: CAnimal_m2_03640c, CAnimal_m2_085390, CAnimal_m2_0acaec, CAnimal_m3_036568, CAnimal_m3_085550,
 * CAnimal_m3_0acd74, CAnimal_sub_0859c8, CAnimal_sub_0ad0e0 (+6 more)
 */
int get_field_90_s8(int a0) {
    return (int)*(char *)(0x90 + a0);
}

/*
 * game_sub_035ac8  0x8c035ac8
 * area name: game code; nothing names its area yet
 */
u32 game_sub_035ac8(int a0) {
    u32 uVar1;

    uVar1 = get_field_90_s8(*(u32 *)(a0 + 0x10));
    return (u32)((char)uVar1 == '\x02');
}

/*
 * game_sub_035af8  0x8c035af8
 * area name: game code; nothing names its area yet
 */
u32 game_sub_035af8(u32 *a0, u32 a1, u32 a2, u32 a3) {
    u32 uVar1;
    u64 in_dr0;
    float fVar2;
    float fVar3;
    char cVar4;
    char cVar5;

    fVar2 = (float)((u64)in_dr0 >> 0x20);
    cVar5 = '\0';
    cVar4 = '\0';
    uVar1 = get_field_4e_s8(a0[5]);
    if ((char)uVar1 < '\x04') {
        (**(code **)(*(int *)*a0 + 0x188))((int *)*a0, a1, a2, a3);
        if (cVar5 == '\0') {
            fVar3 = 40.0;
        } else {
            fVar2 = 40.0;
            fVar3 = 5.547118e+19;
        }
        if (cVar4 == '\0' && fVar3 < fVar2) {
            return 1;
        }
    }
    return 0;
}

/*
 * get_field_4e_s8  0x8c035b50
 * called by: Class_12a7f4_m2_09a060, Class_12a7f4_m3_09a558, game_sub_035af8, game_sub_035ca8, game_sub_0cdf50
 */
int get_field_4e_s8(int a0) {
    return (int)*(char *)(a0 + 0x4e);
}

/*
 * game_sub_035b58  0x8c035b58
 * area name: game code; nothing names its area yet
 */
u32 game_sub_035b58(u32 *a0, u32 a1, u32 a2, u32 a3) {
    u32 uVar1;
    float fVar2;
    u64 in_dr0;
    code *pcVar3;
    char cVar4;
    char cVar5;

    fVar2 = (float)((u64)in_dr0 >> 0x20);
    cVar5 = '\0';
    cVar4 = '\0';
    uVar1 = get_field_4f_s8(a0[5]);
    if ((char)uVar1 < '\x01') {
        (**(code **)(*(int *)*a0 + 0x188))((int *)*a0, a1, a2, a3);
        if (cVar5 == '\0') {
            pcVar3 = (code *)0x42200000;
        } else {
            fVar2 = 40.0;
            pcVar3 = inc_field_4f_s8;
        }
        if (cVar4 == '\0' && (float)pcVar3 < fVar2) {
            inc_field_4f_s8(a0[5]);
            game_sub_035bc8(a0[5]);
            return 1;
        }
    }
    return 0;
}

/*
 * game_sub_035bc8  0x8c035bc8
 * area name: game code; nothing names its area yet
 * called by: game_sub_035b58, game_sub_0c4dd0
 */
u32 game_sub_035bc8(int a0) {
    *(char *)(a0 + 0x4e) = *(char *)(a0 + 0x4e) + -1;
    return 0x4e;
}

/*
 * inc_field_4f_s8  0x8c035be0
 * called by: game_sub_035b58
 */
u32 inc_field_4f_s8(int a0) {
    *(char *)(a0 + 0x4f) = *(char *)(a0 + 0x4f) + '\x01';
    return 0x4f;
}

/*
 * get_field_4f_s8  0x8c035bf8
 * called by: Class_12a7a8_m1_098d14, game_sub_035b58
 */
int get_field_4f_s8(int a0) {
    return (int)*(char *)(a0 + 0x4f);
}

/*
 * game_sub_035c00  0x8c035c00
 * area name: game code; nothing names its area yet
 */
u32 game_sub_035c00(u32 *a0, u32 a1, u32 a2, u32 a3) {
    u32 uVar1;
    float fVar2;
    u64 in_dr0;
    code *pcVar3;
    char cVar4;
    char cVar5;

    fVar2 = (float)((u64)in_dr0 >> 0x20);
    cVar5 = '\0';
    cVar4 = '\0';
    uVar1 = get_field_50_s8(a0[5]);
    if ((char)uVar1 < '\x04') {
        (**(code **)(*(int *)*a0 + 0x188))((int *)*a0, a1, a2, a3);
        if (cVar5 == '\0') {
            pcVar3 = (code *)0x42200000;
        } else {
            fVar2 = 40.0;
            pcVar3 = inc_field_50_s8;
        }
        if (cVar4 == '\0' && (float)pcVar3 < fVar2) {
            inc_field_50_s8(a0[5]);
            game_sub_035c70(a0[5]);
            return 1;
        }
    }
    return 0;
}

/*
 * game_sub_035c70  0x8c035c70
 * area name: game code; nothing names its area yet
 * called by: game_sub_035c00
 */
u32 game_sub_035c70(int a0) {
    *(char *)(a0 + 0x4f) = *(char *)(a0 + 0x4f) + -1;
    return 0x4f;
}

/*
 * inc_field_50_s8  0x8c035c88
 * called by: game_sub_035c00, game_sub_0cdf50
 */
u32 inc_field_50_s8(int a0) {
    *(char *)(a0 + 0x50) = *(char *)(a0 + 0x50) + '\x01';
    return 0x50;
}

/*
 * get_field_50_s8  0x8c035ca0
 * called by: game_sub_035c00, game_sub_0cdf50
 */
int get_field_50_s8(int a0) {
    return (int)*(char *)(a0 + 0x50);
}

/*
 * game_sub_035ca8  0x8c035ca8
 * area name: game code; nothing names its area yet
 */
u32 game_sub_035ca8(u32 *a0, u32 unused_a1, u32 a2, u32 a3) {
    u32 uVar1;
    int iVar2;
    float fVar3;
    u64 in_dr0;
    code *pcVar4;
    char cVar5;
    char cVar6;

    fVar3 = (float)((u64)in_dr0 >> 0x20);
    cVar6 = '\0';
    cVar5 = '\0';
    uVar1 = get_field_4d_s8(a0[5]);
    if (((char)uVar1 < '\x02') && (uVar1 = get_field_4e_s8(a0[5]), (char)uVar1 < '\x03')) {
        uVar1 = 0xb;
        iVar2 = (**(code **)(*(int *)*a0 + 0x11c))((int *)*a0, 0xb, a2, a3);
        if (iVar2 < 2) {
            (**(code **)(*(int *)*a0 + 0x188))((int *)*a0, uVar1, a2, a3);
            if (cVar6 == '\0') {
                pcVar4 = (code *)0x42200000;
            } else {
                fVar3 = 40.0;
                pcVar4 = inc_field_4d_s8;
            }
            if (cVar5 == '\0' && (float)pcVar4 < fVar3) {
                inc_field_4d_s8(a0[5]);
                inc_field_4d_s8(a0[5]);
                return 1;
            }
        }
    }
    return 0;
}

/*
 * inc_field_4d_s8  0x8c035d4c
 * called by: game_sub_035ca8
 */
u32 inc_field_4d_s8(int a0) {
    *(char *)(a0 + 0x4d) = *(char *)(a0 + 0x4d) + '\x01';
    return 0x4d;
}

/*
 * get_field_4d_s8  0x8c035d64
 * called by: game_sub_035ca8
 */
int get_field_4d_s8(int a0) {
    return (int)*(char *)(a0 + 0x4d);
}

/*
 * set_field_98_u8_wrap  0x8c035d7c
 * only calls set_field_98_u8
 */
u32 set_field_98_u8_wrap(int a0) {
    set_field_98_u8(*(u32 *)(a0 + 0x10), 1);
    return 4;
}

/*
 * set_field_98_u8_wrap_035d9c  0x8c035d9c
 * only calls set_field_98_u8
 */
u32 set_field_98_u8_wrap_035d9c(int a0) {
    set_field_98_u8(*(u32 *)(a0 + 0x10), 3);
    return 4;
}

/*
 * set_field_98_u8_wrap_035dbc  0x8c035dbc
 * only calls set_field_98_u8
 */
u32 set_field_98_u8_wrap_035dbc(int a0) {
    set_field_98_u8(*(u32 *)(a0 + 0x10), 4);
    return 4;
}

/*
 * set_field_98_u8_wrap_035ddc  0x8c035ddc
 * only calls set_field_98_u8
 */
u32 set_field_98_u8_wrap_035ddc(int a0) {
    set_field_98_u8(*(u32 *)(a0 + 0x10), 6);
    return 4;
}

/*
 * set_field_98_u8_wrap_035dfc  0x8c035dfc
 * only calls set_field_98_u8
 */
u32 set_field_98_u8_wrap_035dfc(int a0) {
    set_field_98_u8(*(u32 *)(a0 + 0x10), 7);
    return 4;
}

/*
 * set_field_98_u8_wrap_035e1c  0x8c035e1c
 * only calls set_field_98_u8
 */
u32 set_field_98_u8_wrap_035e1c(int a0) {
    set_field_98_u8(*(u32 *)(a0 + 0x10), 8);
    return 4;
}

/*
 * set_field_98_u8_wrap_035e3c  0x8c035e3c
 * only calls set_field_98_u8
 */
u32 set_field_98_u8_wrap_035e3c(int a0) {
    set_field_98_u8(*(u32 *)(a0 + 0x10), 9);
    return 4;
}

/*
 * set_field_0_u8_wrap  0x8c035e5c
 * only calls set_field_0_u8_02cb7c
 */
u32 set_field_0_u8_wrap(int a0, u32 unused_a1, u32 a2, u32 a3) {
    set_field_0_u8_02cb7c(*(int *)(a0 + 8) + 0xa8, 1, a2, a3);
    return 4;
}

/*
 * set_field_3a_u8  0x8c035e84
 * called by: Vec3_sub_063838, game_sub_035e94
 */
u32 set_field_3a_u8(int a0, u32 a1) {
    *(u8 *)(a0 + 0x3a) = (u8)a1;
    return 0x3a;
}

/*
 * get_field_3a_s8  0x8c035e8c
 * called by: Vec3_sub_063838, game_sub_035e94
 */
int get_field_3a_s8(int a0) {
    return (int)*(char *)(a0 + 0x3a);
}

/*
 * game_sub_035e94  0x8c035e94
 * area name: game code; nothing names its area yet
 */
u32 game_sub_035e94(int a0, u32 a1) {
    u32 uVar1;
    int iVar2;

    uVar1 = get_field_3a_s8(*(u32 *)(a0 + 0x14));
    if ((char)uVar1 == '\0') {
        iVar2 = get_field_40_03598c(*(u32 *)(a0 + 0x14), a1);
        if (iVar2 == 0) {
            a1 = 1;
            set_field_3a_u8(*(u32 *)(a0 + 0x14), 1);
        }
    }
    iVar2 = get_field_98_s8(*(u32 *)(a0 + 0x10));
    if (iVar2 < 4) {
        set_field_98_u8(*(u32 *)(a0 + 0x10), 4);
    }
    return 4;
}

/*
 * get_field_98_s8  0x8c035f04
 * called by: game_sub_035e94
 */
int get_field_98_s8(int a0) {
    return (int)*(char *)(0x98 + a0);
}

/*
 * game_sub_035f14  0x8c035f14
 * area name: game code; nothing names its area yet
 */
u32 game_sub_035f14(int a0) {
    u32 uVar1;

    uVar1 = get_field_90_s8(*(u32 *)(a0 + 0x10));
    if ((char)uVar1 == '\0') {
        set_field_90_u8(*(u32 *)(a0 + 0x10), 1);
    }
    return 4;
}

/*
 * set_field_90_u8  0x8c035f4c
 * called by: CAnimal_sub_03679c, CAnimal_sub_0859c8, CAnimal_sub_0ad0e0, Class_12a5d0_m2_08a49c,
 * Class_12a5d0_m3_08a704, Class_12a5d0_sub_08ac38, game_sub_035f14
 */
int set_field_90_u8(int a0, u32 a1) {
    int iVar1;

    iVar1 = 0x90;
    *(u8 *)(0x90 + a0) = (u8)a1;
    return iVar1;
}

/*
 * game_sub_035f58  0x8c035f58
 * area name: game code; nothing names its area yet
 */
u32 game_sub_035f58(int a0) {

    set_field_98_u8(*(u32 *)(a0 + 0x10), 5);
    set_field_3c(*(int *)(a0 + 8) + 0xa8, 1);
    set_field_30(*(int *)(a0 + 8) + 0xa8, 0xd);
    return 4;
}

/*
 * game_sub_035fa0  0x8c035fa0
 * area name: game code; nothing names its area yet
 */
u32 game_sub_035fa0(int a0) {

    set_field_98_u8(*(u32 *)(a0 + 0x10), 3);
    set_field_3c(*(int *)(a0 + 8) + 0xa8, 1);
    set_field_30(*(int *)(a0 + 8) + 0xa8, 0x12);
    return 4;
}

/*
 * game_sub_035fe8  0x8c035fe8
 * area name: game code; nothing names its area yet
 */
u32 game_sub_035fe8(int a0) {

    set_field_98_u8(*(u32 *)(a0 + 0x10), 4);
    set_field_3c(*(int *)(a0 + 8) + 0xa8, 1);
    set_field_30(*(int *)(a0 + 8) + 0xa8, 0x13);
    return 4;
}

/*
 * set_field_4_s16_wrap  0x8c036030
 * only calls set_field_4_s16
 */
u32 set_field_4_s16_wrap(int a0) {
    set_field_4_s16(*(u32 *)(a0 + 0x18), 0xffffffff);
    return 5;
}

/*
 * set_field_4_s16  0x8c036050
 * called by: set_field_4_s16_wrap
 */
u32 set_field_4_s16(int a0, u32 a1) {
    *(short *)(a0 + 4) = (short)a1;
    return a1;
}

/*
 * game_sub_036058  0x8c036058
 * area name: game code; nothing names its area yet
 * called by: game_sub_0243b0, game_sub_0ba284
 */
int game_sub_036058(int a0) {
    int iVar1;

    for (iVar1 = 0; iVar1 < 0xf; iVar1 = iVar1 + 1) {
        *(u8 *)(iVar1 + a0) = 0;
    }
    return a0;
}

/*
 * game_sub_036078  0x8c036078
 * area name: game code; nothing names its area yet
 */
u32 game_sub_036078(u32 unused_a0, u32 a1, u32 a2, u32 a3) {
    u32 uVar1;
    code *pcVar2;
    u32 uVar3;
    char cVar4;

    cVar4 = '\0';
    uVar1 = Vec3_ctor_xyz(&g_8c125c58, a1, a2, a3);
    uVar3 = 0x8c27df38;
    pcVar2 = Vec3_dtor;
    global_list_push(uVar1, Vec3_dtor, 0x8c27df38, a3);
    uVar1 = Vec3_ctor_xyz(&g_8c125c68, pcVar2, uVar3, a3);
    uVar3 = 0x8c27df44;
    pcVar2 = Vec3_dtor;
    global_list_push(uVar1, Vec3_dtor, 0x8c27df44, a3);
    uVar1 = Vec3_ctor_xyz(&g_8c125c78, pcVar2, uVar3, a3);
    uVar3 = 0x8c27df50;
    pcVar2 = Vec3_dtor;
    global_list_push(uVar1, Vec3_dtor, 0x8c27df50, a3);
    uVar1 = Vec3_ctor_xyz(&g_8c125c88, pcVar2, uVar3, a3);
    global_list_push(uVar1, Vec3_dtor, 0x8c27df5c, a3);
    if (cVar4 == '\0') {
        g_8c125c98 = CONCAT44(_UNK_8c125c9c, 0x800000);
        /* WARNING: Read-only address (ram,0x8c125c9c) is written */
    } else {
        g_8c125c98 = 0xffffffff00800000;
    }
    return 0x8c125864;
}

/*
 * game_sub_036130  0x8c036130
 * area name: game code; nothing names its area yet
 */
u32 game_sub_036130(u32 unused_a0, u32 a1, u32 a2, u32 a3) {
    u32 uVar1;
    u32 uVar2;
    u8 *puVar3;

    uVar1 = Vec3_ctor_xyz((&DATA_8c125ca0), a1, a2, a3);
    puVar3 = (&Vec3_dtor);
    uVar2 = 0x8c27df68;
    global_list_push(uVar1, (&Vec3_dtor), 0x8c27df68, a3);
    uVar1 = Vec3_ctor_xyz((&DATA_8c125cb0), puVar3, uVar2, a3);
    puVar3 = (&Vec3_dtor);
    uVar2 = 0x8c27df74;
    global_list_push(uVar1, (&Vec3_dtor), 0x8c27df74, a3);
    uVar1 = Vec3_ctor_xyz((&DATA_8c125cc0), puVar3, uVar2, a3);
    puVar3 = (&Vec3_dtor);
    uVar2 = 0x8c27df80;
    global_list_push(uVar1, (&Vec3_dtor), 0x8c27df80, a3);
    uVar2 = Vec3_ctor_xyz((&DATA_8c125cd0), puVar3, uVar2, a3);
    uVar2 = global_list_push(uVar2, (&Vec3_dtor), 0x8c27df8c, a3);
    return uVar2;
}

/*
 * CAnimal_m0_0361d8  0x8c0361d8
 */
int CAnimal_m0_0361d8(int a0, u32 a1, u32 a2, u32 a3) {
    u32 ar5_00;
    u32 in_stack_fffffff4;
    u32 ain0;

    ain0 = CONCAT22((short)((u32)in_stack_fffffff4 >> 0x10), (u16)a1);
    if (a0 != 0) {
        *(u8 **)(a0 + 8) = &g_8c129ea0;
        Class_129938_dtor(a0 + 0x1088, 0xffffffff, a2, a3);
        Class_12a03c_dtor(a0 + 0xd2c, 0xffffffff, a2, a3);
        Class_12a078_dtor(a0 + 0x490, 0xffffffff, a2, a3);
        ar5_00 = 0;
        CAnimal_m0_025688(a0, 0, a2, a3);
        if (0 < (short)ain0) {
            free_if_nonnull(a0);
        }
    }
    return a0;
}

/*
 * CAnimal_sub_036260  0x8c036260
 * name hint from a string it uses: GRAPHICS FROGMANLINE; area name: sits between CAnimal functions (same compilation
 * unit) called by: CFrogManEgg_sub_0fef94 strings: "FrogManLine"
 */
int CAnimal_sub_036260(int a0, u32 a1, u32 a2) {
    u32 uVar1;
    u32 ar6_00;
    u32 ar7_00;
    int iVar2;
    u32 extraout_fr1;
    char cVar3;

    cVar3 = '\0';
    ar6_00 = 1;
    uVar1 = 5;
    ar7_00 = a2;
    game_sub_0254d0(a0, 5, 1, a2, 0, a1, 0x8c27dfd4, &g_8c27e594, PTR_s_GRAPHICS_FROGMANLINE_8c13368c);
    *(u8 **)(a0 + 8) = &g_8c129ea0;
    Class_12a078_ctor(a0 + 0x490, uVar1, ar6_00, ar7_00);
    game_sub_03a5a4(a0 + 0xd2c, uVar1, ar6_00, ar7_00);
    Class_129938_ctor(a0 + 0x1088, uVar1, ar6_00);
    sprintf(a0 + 0xc, uVar1, ar6_00, ar7_00, "FrogManLine");
    *(int *)(a0 + 0x308) = a0 + 0x490;
    uVar1 = game_sub_034d38(a0 + 0x2dc, a2);
    set_field_98_u8(*(u32 *)(a0 + 0x308), uVar1);
    *(int *)(a0 + 0x30c) = a0 + 0xd2c;
    for (iVar2 = 0; iVar2 < 6; iVar2 = iVar2 + 1) {
        *(u32 *)(a0 + iVar2 * 4 + 0x111c) = 0;
        *(u32 *)(a0 + iVar2 * 4 + 0x1134) = 0;
    }
    *(u8 *)(a0 + 0x114c) = 0;
    Class_12c058_sub_0f532c(a0, *(u32 *)(*(int *)(a0 + 0x328) + 0xb4), a0 + 0x1088, ar7_00);
    *(u32 *)(a0 + 0x3d8) = *(u32 *)(**(int **)(a0 + 0x328) + 0x40);
    *(u32 *)(a0 + 0x3dc) = *(u32 *)(**(int **)(a0 + 0x328) + 0x40);
    if (cVar3 == '\0') {
        *(u32 *)(a0 + 0x468) = 0x3f800000;
    } else {
        *(u64 *)(a0 + 0x468) = CONCAT44(0x3f800000, extraout_fr1);
    }
    *(u32 *)(a0 + 0x74) = *(u32 *)(a0 + 0x74) | 0x40;
    return a0;
}

/*
 * CAnimal_m2_03640c  0x8c03640c
 */
u32 CAnimal_m2_03640c(int a0, int a1, int a2, int a3) {
    u32 uVar1;
    int iVar2;
    int ar5_00;
    int ar7_00;

    uVar1 = get_field_a0_035724(a1, a1);
    if (((char)uVar1 == '\x02') && (*(int *)(0x7d4 + a1) == 1)) {
        *(u32 *)(a0 + 0x74) = *(u32 *)(a0 + 0x74) & 0xffffffbf;
        *(u32 *)(a0 + 0x74) = *(u32 *)(a0 + 0x74) & 0xffffffef;
        *(u32 *)(a0 + 0x74) = *(u32 *)(a0 + 0x74) & 0xffffffdf;
        *(u32 *)(a0 + 0x74) = *(u32 *)(a0 + 0x74) | 0x20;
    }
    ar5_00 = a1;
    ar7_00 = a3;
    CAnimal_m2_02573c(a0, a1, a2, a3);
    uVar1 = get_field_90_s8(a0 + 0x490);
    if (((char)uVar1 == '\x01') && (*(int *)(0x1148 + a0) == 0)) {
        ar5_00 = a1;
        CAnimal_sub_0366f0(a0, a1, a2, ar7_00);
    }
    if (*(int *)(0x1134 + a0) != 0) {
        ar5_00 = a1;
        CAnimal_sub_03679c(a0, a1, a2, ar7_00);
    }
    uVar1 = get_field_90_s8(a0 + 0x490);
    if ((char)uVar1 == '\x02') {
        iVar2 = get_field_2f0_03655c(a0 + 0xd2c);
        if (iVar2 == 1) {
            CAnimal_sub_03688c(a0, a3, a1, ar7_00);
            ar5_00 = a3;
            a2 = a1;
        }
    }
    CAnimal_sub_02a788(a0, ar5_00, a2, ar7_00);
    CAnimal_sub_02aabc(a0, ar5_00, a2, ar7_00);
    return 1;
}

/*
 * get_field_2f0_03655c  0x8c03655c
 * called by: CAnimal_m2_03640c, CAnimal_m3_036568
 */
u32 get_field_2f0_03655c(int a0) {
    return *(u32 *)(0x2f0 + a0);
}

/*
 * CAnimal_m3_036568  0x8c036568
 */
u32 CAnimal_m3_036568(int a0, int a1, int a2, int a3) {
    u32 uVar1;
    int iVar2;
    int ar5_00;
    int ar7_00;

    uVar1 = get_field_a0_035724(a1, a1);
    if (((char)uVar1 == '\x02') && (*(int *)(0x7d4 + a1) == 1)) {
        *(u32 *)(a0 + 0x74) = *(u32 *)(a0 + 0x74) & 0xffffffbf;
        *(u32 *)(a0 + 0x74) = *(u32 *)(a0 + 0x74) & 0xffffffef;
        *(u32 *)(a0 + 0x74) = *(u32 *)(a0 + 0x74) & 0xffffffdf;
        *(u32 *)(a0 + 0x74) = *(u32 *)(a0 + 0x74) | 0x20;
    }
    ar5_00 = a1;
    ar7_00 = a3;
    CAnimal_m3_026078(a0, a1, a2, a3);
    uVar1 = get_field_90_s8(a0 + 0x490);
    if (((char)uVar1 == '\x01') && (*(int *)(0x1148 + a0) == 0)) {
        ar5_00 = a1;
        CAnimal_sub_0366f0(a0, a1, a2, ar7_00);
    }
    if (*(int *)(0x1134 + a0) != 0) {
        ar5_00 = a1;
        CAnimal_sub_03679c(a0, a1, a2, ar7_00);
    }
    uVar1 = get_field_90_s8(a0 + 0x490);
    if ((char)uVar1 == '\x02') {
        iVar2 = get_field_2f0_03655c(a0 + 0xd2c);
        if (iVar2 == 1) {
            CAnimal_sub_03688c(a0, a3, a1, ar7_00);
            ar5_00 = a3;
            a2 = a1;
        }
    }
    CAnimal_sub_02a788(a0, ar5_00, a2, ar7_00);
    CAnimal_sub_02aabc(a0, ar5_00, a2, ar7_00);
    return 1;
}

/*
 * noop_0366b8  0x8c0366b8
 */
u32 noop_0366b8(void) {
    u32 in_r0;

    return in_r0;
}

/*
 * set_field_83_u8_wrap  0x8c0366bc
 * only calls set_field_83_u8
 */
u32 set_field_83_u8_wrap(int a0, u32 a1) {
    u32 uVar1;

    uVar1 = set_field_83_u8(*(u32 *)(0x308 + a0), a1);
    return uVar1;
}

/*
 * set_field_83_u8  0x8c0366e4
 * called by: set_field_83_u8_wrap, set_field_83_u8_wrap_0858bc, set_field_83_u8_wrap_09dc64
 */
int set_field_83_u8(int a0, u32 a1) {
    int iVar1;

    iVar1 = 0x83;
    *(u8 *)(0x83 + a0) = (u8)a1;
    return iVar1;
}

/*
 * CAnimal_sub_0366f0  0x8c0366f0
 * area name: only called from CAnimal methods
 * called by: CAnimal_m2_03640c, CAnimal_m3_036568
 */
u32 CAnimal_sub_0366f0(int a0, int a1, u32 unused_a2, u32 a3) {
    u32 uVar1;
    int a4;
    u32 a6;
    int iVar2;

    for (iVar2 = 0; iVar2 < 6; iVar2 = iVar2 + 1) {
        a6 = 5;
        uVar1 = CFrogManEgg_sub_0fef94(0x8c3eb324, 6, 5, a3);
        *(u32 *)(0x111c + a0 + iVar2 * 4) = uVar1;
        a4 = *(int *)(0x111c + a0 + iVar2 * 4);
        (**(code **)(*(int *)(a4 + 8) + 0x54))(a4, 0x8c3eb324, a6, a3);
        uVar1 = (*(code *)(&CItemGLoader_RegistToLoad))(*(u32 *)(0x7d0 + a1), *(u32 *)(0x111c + a0 + iVar2 * 4), 0, a3);
        *(u32 *)(0x1134 + a0 + iVar2 * 4) = uVar1;
    }
    return 6;
}

/*
 * CAnimal_sub_03679c  0x8c03679c
 * area name: only called from CAnimal methods
 * called by: CAnimal_m2_03640c, CAnimal_m3_036568
 */
int CAnimal_sub_03679c(int a0, int a1, u32 a2, u32 a3) {
    int iVar1;
    u32 uVar2;
    int iVar3;

    for (iVar3 = 0; iVar3 < 5; iVar3 = iVar3 + 1) {
        iVar1 = (*(code *)(&CItemGLoader_is_done))(*(u32 *)(0x7d0 + a1), *(u32 *)(0x1134 + a0 + iVar3 * 4), a2, a3);
        if ((iVar1 == 1) && (*(int *)(0x1134 + a0 + iVar3 * 4) != 0)) {
            uVar2 = (*(code *)(&CItemGLoader_sub_0feeb0))(*(u32 *)(0x7d0 + a1), a0 + iVar3 * 4 + 0x1134, a2, a3);
            *(u32 *)(0x111c + a0 + iVar3 * 4) = uVar2;
        }
    }
    iVar3 = (*(code *)(&CItemGLoader_is_done))(*(u32 *)(0x7d0 + a1), *(u32 *)(0x1148 + a0), a2, a3);
    if ((iVar3 == 1) && (iVar3 = 0, *(int *)(0x1148 + a0) != 0)) {
        set_field_90_u8(a0 + 0x490, 2);
        uVar2 = (*(code *)(&CItemGLoader_sub_0feeb0))(*(u32 *)(0x7d0 + a1), a0 + 0x1148, a2, a3);
        iVar3 = 0x1130;
        *(u32 *)(0x1130 + a0) = uVar2;
    }
    return iVar3;
}

/*
 * CAnimal_sub_03688c  0x8c03688c
 * name hint from a string it uses: CSquidLine; area name: only called from CAnimal methods
 * called by: CAnimal_m2_03640c, CAnimal_m3_036568
 * strings: "CSquidLine"; "Ryu-Zan"
 */
u32 CAnimal_sub_03688c(int a0, int *a1, u32 a2, u32 a3) {
    int iVar1;
    u32 ar5_00;
    u32 a6;
    int iVar2;

    a6 = a2;
    for (iVar2 = 0; iVar2 < 6; iVar2 = iVar2 + 1) {
        if (*(int *)(0x111c + a0 + iVar2 * 4) == 0) {
            a3 = 2;
            a6 = 1;
            (*(code *)(&report_error_message))("CSquidLine", "Ryu-Zan", 1, 2);
        } else {
            iVar1 = *(int *)(0x111c + a0 + iVar2 * 4);
            ar5_00 = a2;
            (**(code **)(0x10c + *(int *)(iVar1 + 8)))(iVar1, a2, a6, a3);
            set_vec3_field_30(*(u32 *)(0x111c + a0 + iVar2 * 4), ar5_00, a6);
            iVar1 = *(int *)(0x111c + a0 + iVar2 * 4);
            (**(code **)(*(int *)(iVar1 + 8) + 0x5c))(iVar1, ar5_00, a6, a3);
            (**(code **)(*a1 + 0x4c))(a1, *(u32 *)(0x111c + a0 + iVar2 * 4), a6, a3);
        }
    }
    return 6;
}

/*
 * noop_036984  0x8c036984
 */
u32 noop_036984(void) {
    u32 in_r0;

    return in_r0;
}

/*
 * set_vec3_field_30  0x8c036988
 * stores fr4..fr6 at +0x30
 * called by: CAnimal_m2_0386d0, CAnimal_m2_088094, CAnimal_sub_03688c, CAnimal_sub_085b14, CAnimal_sub_0ad240,
 * CGame_sub_0cc784, CProlog_sub_0cd3c8, CTexture_sub_0e81b4 (+24 more)
 */
u32 set_vec3_field_30(int a0, u32 unused_a1, u32 a2) {
    u32 in_fr5;
    u32 in_fr4;
    u32 in_fr6;

    *(u32 *)(a0 + 0x30) = in_fr4;
    *(u32 *)(a0 + 0x34) = in_fr5;
    *(u32 *)(a0 + 0x38) = in_fr6;
    return 1;
}

/*
 * noop_0369a0  0x8c0369a0
 */
u32 noop_0369a0(void) {
    u32 in_r0;

    return in_r0;
}

/*
 * CAnimal_sub_0369a4  0x8c0369a4
 * area name: sits between CAnimal functions (same compilation unit)
 */
u32 CAnimal_sub_0369a4(int a0, u32 a1, u32 a2, u32 a3) {
    u32 uVar1;

    uVar1 = (**(code **)(*(int *)(a0 + 0x490) + 0x1c))((int *)(a0 + 0x490), a1, a2, a3);
    return uVar1;
}

/*
 * CAnimal_sub_0369c4  0x8c0369c4
 * area name: sits between CAnimal functions (same compilation unit)
 */
double *CAnimal_sub_0369c4(int a0, int a1, u32 a2, u32 a3) {
    u32 uVar1;
    double *pdVar2;
    int iVar3;
    float fVar4;
    double dVar5;
    u32 in_fr15;
    double in_xd14;
    char cVar6;
    char cVar7;
    u32 in_stack_ffffffe4;

    cVar7 = '\0';
    cVar6 = '\0';
    *(float *)(a0 + 0x468) = *(float *)(a0 + 0x468) + (float)(int)*(char *)(a0 + 0x46c) * 2.3148148e-06 * 8.0;
    fVar4 = *(float *)(a0 + 0x468);
    iVar3 = a1;
    if (fVar4 <= 1.0) {
        if (*(float *)(a0 + 0x468) < 0.0) {
            *(u32 *)(a0 + 0x468) = 0;
        }
    } else {
        uVar1 = game_sub_02bef8(a0 + 0x174, a1, a2);
        in_stack_ffffffe4 = CONCAT22((short)((u32)in_stack_ffffffe4 >> 0x10), (short)uVar1);
        if ((short)uVar1 == 1) {
            if (cVar7 == '\0') {
                *(u32 *)(a0 + 0x468) = 0x3f8147ae;
            } else {
                *(u64 *)(a0 + 0x468) = 0x8c256fec3f8147ae;
            }
        } else if (cVar7 == '\0') {
            *(u32 *)(a0 + 0x468) = 0x3f800000;
        } else {
            *(u64 *)(a0 + 0x468) = CONCAT44(0x3f800000, fVar4);
        }
    }
    pdVar2 = (double *)(*(int *)(a1 + 4) + 0x14);
    if (cVar7 == '\0') {
        in_fr15 = *(u32 *)pdVar2;
    } else {
        in_xd14 = *pdVar2;
    }
    pdVar2 = (double *)(*(int *)(a1 + 4) + 0x14);
    dVar5 = in_xd14;
    if (cVar7 == '\0') {
        dVar5 = (double)CONCAT44(in_fr15, *(u32 *)(a0 + 0x468));
    }
    if (cVar6 == '\0') {
        dVar5 = (double)CONCAT44((float)((u64)dVar5 >> 0x20) * SUB84(dVar5, 0), SUB84(dVar5, 0));
    } else {
        dVar5 = dVar5 * dVar5;
    }
    if (cVar7 == '\0') {
        *(int *)pdVar2 = (int)((u64)dVar5 >> 0x20);
    } else {
        *pdVar2 = dVar5;
    }
    matrix_scale(0, iVar3, a2, a3, in_stack_ffffffe4);
    game_sub_02a29c(a0, *(u32 *)(a1 + 4), a2, a3);
    pdVar2 = (double *)(*(int *)(a1 + 4) + 0x14);
    if (cVar7 == '\0') {
        *(u32 *)pdVar2 = in_fr15;
    } else {
        *pdVar2 = in_xd14;
    }
    return pdVar2;
}

/*
 * CAnimal_sub_036adc  0x8c036adc
 * area name: sits between CAnimal functions (same compilation unit)
 */
int CAnimal_sub_036adc(int a0, u32 unused_a1, u32 a2, u32 a3) {
    int iVar1;
    u32 ar5_00;
    u8 *puVar2;
    u32 *ar6_00;
    float *ar6_01;
    float fVar3;
    double dVar4;
    float fVar5;
    u64 in_dr6;
    float in_fr8;
    float in_xf0;
    char cVar6;
    char cVar7;
    u32 uStack_90;
    u32 uStack_8c;
    u32 auStack_88[3];
    u8 auStack_7c[12];
    u8 auStack_70[16];
    u8 auStack_60[16];
    u8 auStack_50[16];
    u8 auStack_40[12];
    float fStack_34;
    float fStack_30;
    u32 uStack_2c;
    float fStack_28;
    u8 auStack_24[12];
    u32 uStack_18;
    u32 uStack_14;
    u32 uStack_10;
    u32 uStack_c;

    cVar7 = '\0';
    cVar6 = '\0';
    fVar5 = (float)in_dr6;
    ar5_00 = 1;
    set_field_85_u8(*(u32 *)(a0 + 0x308), 1);
    set_field_328_to_1(a0 + 0xd2c);
    iVar1 = get_field_2fc_036d20(a0 + 0xd2c);
    if (iVar1 == 1) {
        iVar1 = a0 + 0x50;
        vec3_copy_8c02b5fc(auStack_40, iVar1, a2);
        iVar1 = (**(code **)(*(int *)(a0 + 8) + 0x144))(a0, iVar1, a2, a3);
        Vec3_sub_023484(iVar1 + 0xd8, auStack_40, a2, a3, auStack_50);
        Vec3_add(a0 + 0x30, auStack_50, a2, a3, auStack_60);
        Vec3_ctor_copy(&uStack_18, auStack_60, a2, a3);
        Vec3_dtor(auStack_60, 0xffffffff, a2, a3);
        Vec3_dtor(auStack_50, 0xffffffff, a2, a3);
        object_dtor_delete(auStack_40, 0xffffffff, a2, a3);
        if (cVar7 != '\0') {
            uStack_18 = uStack_c;
        }
        ar6_00 = &uStack_90;
        puVar2 = auStack_24;
        matrix_sub_256294(0, puVar2, ar6_00);
        Vec3_ctor_zero(&fStack_34, puVar2, ar6_00);
        if (cVar7 == '\0') {
            dVar4 = (double)CONCAT44(uStack_90, fVar5);
            fStack_30 = in_xf0;
        } else {
            dVar4 = (double)CONCAT44(uStack_8c, uStack_90);
            fStack_30 = fVar5;
        }
        if (cVar6 == '\0') {
            fVar3 = SUB84(dVar4, 0) - (float)((u64)dVar4 >> 0x20);
        } else {
            fVar3 = SUB84(dVar4 - dVar4, 0);
        }
        if (cVar7 == '\0') {
            dVar4 = (double)CONCAT44(uStack_18, fVar3);
        } else {
            dVar4 = (double)CONCAT44(uStack_14, uStack_18);
        }
        if (cVar6 == '\0') {
            fStack_34 = SUB84(dVar4, 0) + (float)((u64)dVar4 >> 0x20);
        } else {
            fStack_34 = SUB84(dVar4 + dVar4, 0);
        }
        if (cVar7 == '\0') {
            dVar4 = (double)CONCAT44(uStack_8c, in_fr8);
        } else {
            dVar4 = (double)CONCAT44(auStack_88[0], uStack_8c);
            fStack_34 = fStack_30;
            fStack_30 = in_fr8;
        }
        if (cVar6 == '\0') {
            fVar3 = SUB84(dVar4, 0) - (float)((u64)dVar4 >> 0x20);
        } else {
            fVar3 = SUB84(dVar4 - dVar4, 0);
        }
        if (cVar7 == '\0') {
            dVar4 = (double)CONCAT44(0xbf800000, fVar3);
        } else {
            dVar4 = 1.65674406927311e-311;
        }
        if (cVar6 == '\0') {
            fVar3 = SUB84(dVar4, 0) * (float)((u64)dVar4 >> 0x20);
        } else {
            fVar3 = SUB84(dVar4 * dVar4, 0);
        }
        if (cVar7 == '\0') {
            dVar4 = (double)CONCAT44(uStack_14, fVar3);
        } else {
            dVar4 = (double)CONCAT44(uStack_10, uStack_14);
        }
        if (cVar6 == '\0') {
            fVar3 = SUB84(dVar4, 0) + (float)((u64)dVar4 >> 0x20);
        } else {
            fVar3 = SUB84(dVar4 + dVar4, 0);
        }
        if (cVar7 == '\0') {
            fStack_30 = fVar3;
            fVar5 = fStack_28;
        }
        fStack_28 = fVar5;
        uStack_2c = (int)((u64)in_dr6 >> 0x20);
        Vec3_ctor_copy_wrap_02ace4(*(u32 *)(a0 + 0x30c), puVar2, ar6_00, a3, auStack_70);
        Vec3_set_xyz(auStack_7c, puVar2, ar6_00, a3);
        puVar2 = auStack_70;
        ar6_01 = &fStack_34;
        game_sub_0332b4(*(u32 *)(a0 + 0x30c), &uStack_18, ar6_01, puVar2, auStack_88, auStack_7c);
        vec3_copy_8c023d8c(a0 + 0x3fc, auStack_88, ar6_01, puVar2);
        object_dtor_delete(auStack_88, 0xffffffff, ar6_01, puVar2);
        object_dtor_delete(auStack_7c, 0xffffffff, ar6_01, puVar2);
        Vec3_dtor(auStack_70, 0xffffffff, ar6_01, puVar2);
        Vec3_dtor(&fStack_34, 0xffffffff, ar6_01, puVar2);
        iVar1 = Vec3_dtor(&uStack_18, 0xffffffff, ar6_01, puVar2);
    }
    return iVar1;
}

/*
 * get_field_2fc_036d20  0x8c036d20
 * called by: CAnimal_sub_036adc
 */
u32 get_field_2fc_036d20(int a0) {
    return *(u32 *)(0x2fc + a0);
}

/*
 * set_field_328_to_1  0x8c036d2c
 * called by: CAnimal_sub_036adc
 */
int set_field_328_to_1(int a0) {
    int iVar1;

    iVar1 = 0x328;
    *(u32 *)(0x328 + a0) = 1;
    return iVar1;
}

/*
 * set_field_85_u8  0x8c036d3c
 * called by: CAnimal_sub_036adc, game_sub_085c3c
 */
int set_field_85_u8(int a0, u32 a1) {
    int iVar1;

    iVar1 = 0x85;
    *(u8 *)(0x85 + a0) = (u8)a1;
    return iVar1;
}

/*
 * set_field_86_u8_wrap  0x8c036d48
 * only calls set_field_86_u8
 */
u32 set_field_86_u8_wrap(int a0, u32 a1) {
    u32 uVar1;

    uVar1 = set_field_86_u8(*(u32 *)(0x308 + a0), a1);
    return uVar1;
}

/*
 * set_field_86_u8  0x8c036d70
 * called by: set_field_86_u8_wrap
 */
int set_field_86_u8(int a0, u32 a1) {
    int iVar1;

    iVar1 = 0x86;
    *(u8 *)(0x86 + a0) = (u8)a1;
    return iVar1;
}

/*
 * CAnimal_m7_036d7c  0x8c036d7c
 */
u32 CAnimal_m7_036d7c(int a0, int *a1, u32 a2, u32 a3) {
    int iVar1;
    u32 uVar2;
    int *ar5_00;
    u32 *a5;
    u32 *a6;
    float fVar3;
    double in_dr0;
    double dVar4;
    double dVar5;
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

    uVar2 = (u32)((u64)in_dr14 >> 0x20);
    cVar9 = '\0';
    cVar8 = '\0';
    ar5_00 = a1;
    Vec3_ctor_zero(&uStack_24, a1, a2);
    Vec3_ctor_zero(&uStack_34, ar5_00, a2);
    dVar5 = (double)CONCAT44(uVar2, 0x3f800000);
    iVar1 = get_field_300_036f50(a0 + 0xd2c);
    if ((iVar1 == 1) && ((**(code **)(*(int *)(a0 + 8) + 0x170))(a0, ar5_00, a2, a3), cVar9 == '\0')) {
        dVar5 = (double)CONCAT44((int)((u64)dVar5 >> 0x20), (int)((u64)in_dr0 >> 0x20));
    }
    a6 = &uStack_34;
    a5 = &uStack_24;
    (**(code **)(*a1 + 0x124))(a1, a5, a6, a3);
    if (cVar9 == '\0') {
        in_dr0 = (double)CONCAT44((int)((u64)in_dr0 >> 0x20), *(u32 *)(a0 + 0x30));
    }
    fVar6 = SUB84(dVar5, 0);
    if (cVar8 == '\0') {
        fVar3 = SUB84(in_dr0, 0) - fVar6;
    } else {
        fVar3 = SUB84(in_dr0 - dVar5, 0);
    }
    if (cVar9 == '\0') {
        dVar4 = (double)CONCAT44(uStack_24, fVar3);
    } else {
        dVar4 = (double)CONCAT44(uStack_20, uStack_24);
    }
    fVar3 = (float)((u64)dVar4 >> 0x20);
    if (cVar8 == '\0' && fVar3 < SUB84(dVar4, 0)) {
        if (cVar9 == '\0') {
            dVar4 = (double)CONCAT44(fVar3, *(u32 *)(a0 + 0x30));
        }
        if (cVar8 == '\0') {
            fVar3 = SUB84(dVar4, 0) + fVar6;
        } else {
            fVar3 = SUB84(dVar4 + dVar5, 0);
        }
        if (cVar9 == '\0') {
            dVar4 = (double)CONCAT44(uStack_34, fVar3);
        } else {
            dVar4 = (double)CONCAT44(fStack_30, uStack_34);
        }
        if (cVar8 != '\0' || (float)((u64)dVar4 >> 0x20) <= SUB84(dVar4, 0)) {
            if (cVar9 == '\0') {
                dVar4 = (double)CONCAT44(uStack_34, SUB84(dVar4, 0));
            } else {
                dVar4 = (double)CONCAT44(fStack_30, uStack_34);
            }
            if (cVar8 == '\0') {
                dVar4 = (double)CONCAT44((float)((u64)dVar4 >> 0x20) - fVar6, SUB84(dVar4, 0));
            } else {
                dVar4 = dVar4 - dVar5;
            }
            if (cVar9 == '\0') {
                *(int *)(a0 + 0x30) = (int)((u64)dVar4 >> 0x20);
            } else {
                *(double *)(a0 + 0x30) = dVar4;
            }
        }
    } else {
        if (cVar9 == '\0') {
            dVar4 = (double)CONCAT44(uStack_24, SUB84(dVar4, 0));
        } else {
            dVar4 = (double)CONCAT44(uStack_20, uStack_24);
        }
        if (cVar8 == '\0') {
            dVar4 = (double)CONCAT44((float)((u64)dVar4 >> 0x20) + fVar6, SUB84(dVar4, 0));
        } else {
            dVar4 = dVar4 + dVar5;
        }
        if (cVar9 == '\0') {
            *(int *)(a0 + 0x30) = (int)((u64)dVar4 >> 0x20);
        } else {
            *(double *)(a0 + 0x30) = dVar4;
        }
    }
    if (cVar9 == '\0') {
        dVar4 = (double)CONCAT44((int)((u64)dVar4 >> 0x20), *(u32 *)(a0 + 0x38));
    }
    if (cVar8 == '\0') {
        fVar3 = SUB84(dVar4, 0) - fVar6;
    } else {
        fVar3 = SUB84(dVar4 - dVar5, 0);
    }
    if (cVar9 == '\0') {
        dVar4 = (double)CONCAT44(uStack_1c, fVar3);
    } else {
        dVar4 = (double)CONCAT44(uStack_18, uStack_1c);
    }
    fVar3 = (float)((u64)dVar4 >> 0x20);
    if (cVar8 == '\0' && fVar3 < SUB84(dVar4, 0)) {
        if (cVar9 == '\0') {
            dVar4 = (double)CONCAT44(fVar3, *(u32 *)(a0 + 0x38));
        }
        if (cVar8 == '\0') {
            fVar3 = SUB84(dVar4, 0) + fVar6;
        } else {
            fVar3 = SUB84(dVar4 + dVar5, 0);
        }
        if (cVar9 == '\0') {
            dVar4 = (double)CONCAT44(fStack_2c, fVar3);
        } else {
            dVar4 = (double)CONCAT44(uStack_28, fStack_2c);
        }
        if (cVar8 != '\0' || (float)((u64)dVar4 >> 0x20) <= SUB84(dVar4, 0)) {
            if (cVar9 == '\0') {
                dVar4 = (double)CONCAT44(fStack_2c, SUB84(dVar4, 0));
            } else {
                dVar4 = (double)CONCAT44(uStack_28, fStack_2c);
            }
            if (cVar8 == '\0') {
                dVar4 = (double)CONCAT44((float)((u64)dVar4 >> 0x20) - fVar6, SUB84(dVar4, 0));
            } else {
                dVar4 = dVar4 - dVar5;
            }
            if (cVar9 == '\0') {
                *(int *)(a0 + 0x38) = (int)((u64)dVar4 >> 0x20);
            } else {
                *(double *)(a0 + 0x38) = dVar4;
            }
        }
    } else {
        if (cVar9 == '\0') {
            dVar4 = (double)CONCAT44(uStack_1c, SUB84(dVar4, 0));
        } else {
            dVar4 = (double)CONCAT44(uStack_18, uStack_1c);
        }
        if (cVar8 == '\0') {
            dVar4 = (double)CONCAT44((float)((u64)dVar4 >> 0x20) + fVar6, SUB84(dVar4, 0));
        } else {
            dVar4 = dVar4 + dVar5;
        }
        if (cVar9 == '\0') {
            *(int *)(a0 + 0x38) = (int)((u64)dVar4 >> 0x20);
        } else {
            *(double *)(a0 + 0x38) = dVar4;
        }
    }
    iVar1 = get_field_338_036f00(a0 + 0xd2c);
    uVar2 = SUB84(dVar5, 0);
    if (iVar1 != 1) {
        (**(code **)(*a1 + 0x128))(a1, a0 + 0x30, a6, a3);
        if (cVar9 == '\0') {
            dVar5 = (double)CONCAT44(*(u32 *)(a0 + 0x34), SUB84(dVar4, 0));
            dVar4 = (double)CONCAT44((int)((u64)dVar4 >> 0x20), uVar2);
        } else {
            dVar5 = *(double *)(a0 + 0x34);
        }
        fVar6 = (float)((u64)dVar4 >> 0x20);
        if (cVar8 == '\0') {
            bVar7 = fVar6 < (float)((u64)dVar5 >> 0x20);
        } else {
            bVar7 = dVar4 < dVar5;
        }
        if (bVar7) {
            fVar6 = fStack_30;
            fVar3 = fStack_2c;
            if (cVar9 == '\0') {
                fVar6 = *(float *)(a0 + 0x34);
                fVar3 = fStack_30;
            }
            if (cVar8 != '\0' || fVar3 <= fVar6) {
                if (cVar9 == '\0') {
                    *(float *)(a0 + 0x34) = fStack_30;
                } else {
                    *(u64 *)(a0 + 0x34) = CONCAT44(fStack_2c, fStack_30);
                }
            }
        } else if (cVar9 == '\0') {
            *(float *)(a0 + 0x34) = fVar6;
        } else {
            *(double *)(a0 + 0x34) = dVar4;
        }
    }
    Vec3_dtor(&uStack_34, 0xffffffff, a6, a3);
    uVar2 = Vec3_dtor(&uStack_24, 0xffffffff, a6, a3);
    return uVar2;
}

/*
 * get_field_338_036f00  0x8c036f00
 * called by: CAnimal_m7_036d7c
 */
u32 get_field_338_036f00(int a0) {
    return *(u32 *)(0x338 + a0);
}

/*
 * CAnimal_sub_036f0c  0x8c036f0c
 * area name: sits between CAnimal functions (same compilation unit)
 */
u32 CAnimal_sub_036f0c(int a0, u32 *a1, u32 *a2) {
    *a1 = 0;
    a1[1] = 0;
    a1[2] = 0;
    *a2 = *(u32 *)(a0 + 0xba8);
    a2[1] = *(u32 *)(a0 + 0xbac);
    a2[2] = *(u32 *)(a0 + 0xbb0);
    return 0xbb0;
}

/*
 * get_field_300_036f50  0x8c036f50
 * called by: CAnimal_m7_036d7c
 */
u32 get_field_300_036f50(int a0) {
    return *(u32 *)(0x300 + a0);
}

/*
 * CAnimal_sub_036f5c  0x8c036f5c
 * area name: sits between CAnimal functions (same compilation unit)
 */
u32 CAnimal_sub_036f5c(int a0, u32 a1, u32 a2, u32 a3) {
    u32 uVar1;

    uVar1 = (**(code **)(**(int **)(0x308 + a0) + 0x48))(*(int **)(0x308 + a0), a1, a2, a3);
    return uVar1;
}

/*
 * game_sub_036f84  0x8c036f84
 * area name: game code; nothing names its area yet
 */
u32 game_sub_036f84(int a0) {
    int iVar1;
    u32 uVar2;
    float fVar3;

    fVar3 = (float)*(int *)(a0 + 0x458) / 216000.0;
    *(float *)(a0 + 0x438) = g_8c13367c * fVar3;
    *(float *)(a0 + 0x43c) = g_8c133680 * fVar3;
    *(float *)(a0 + 0x440) = g_8c133684 * fVar3;
    *(float *)(a0 + 0x444) = g_8c133688 * fVar3;
    iVar1 = *(int *)(a0 + 0x458);
    *(int *)(a0 + 0x458) = iVar1 + 1;
    uVar2 = 0x34bc0;
    if (0x34bc0 < iVar1 + 1) {
        *(u32 *)(a0 + 0x458) = 0;
        uVar2 = 0x74;
        *(u32 *)(a0 + 0x74) = *(u32 *)(a0 + 0x74) & 0x7fffffff;
    }
    return uVar2;
}

/*
 * game_sub_037034  0x8c037034
 * area name: game code; nothing names its area yet
 */
float *game_sub_037034(int a0, u32 a1, u32 a2, u32 a3) {
    short sVar1;
    u32 uVar2;
    int iVar3;
    float *pfVar4;
    int iVar5;
    float in_fr1;
    char cVar6;
    char cVar7;

    cVar7 = '\0';
    cVar6 = '\0';
    game_sub_02702c(a0, a1, a2);
    uVar2 = game_sub_02bef8(a0 + 0x174, a1, a2);
    sVar1 = (short)uVar2;
    uVar2 = get_field_0(*(int *)(sVar1 * 0x124 + *(int *)(a0 + 0x328)) + 0x1e8);
    iVar3 = get_field_0_015bb8(*(int *)(a0 + 0x328) + sVar1 * 0x124 + 0x70);
    *(u32 *)(a0 + 0x344) = *(u32 *)(*(int *)(*(int *)(iVar3 + 0x2c) + 0x2c) + 0x2c);
    *(u32 *)(a0 + 0x348) = *(u32 *)(*(int *)(a0 + 0x344) + 0x2c);
    *(u32 *)(a0 + 0x34c) = *(u32 *)(*(int *)(*(int *)(a0 + 0x344) + 0x2c) + 0x30);
    if (sVar1 < 3) {
        *(u32 *)(a0 + 0x350) = *(u32 *)(*(int *)(*(int *)(*(int *)(a0 + 0x344) + 0x2c) + 0x30) + 0x30);
    } else {
        *(u32 *)(a0 + 0x350) = *(u32 *)(*(int *)(*(int *)(*(int *)(*(int *)(a0 + 0x344) + 0x2c) + 0x30) + 0x30) + 0x30);
    }
    *(u32 *)(*(int *)(a0 + 0x348) + 4) = uVar2;
    *(u32 *)(*(int *)(a0 + 0x34c) + 4) = uVar2;
    if (cVar7 == '\0') {
        *(u32 *)(a0 + 0x374) = 0;
    } else {
        *(u64 *)(a0 + 0x374) = (u64)(u32)in_fr1;
    }
    if (cVar7 == '\0') {
        *(u32 *)(a0 + 0x378) = 0;
        *(u32 *)(a0 + 0x37c) = 0x40a00000;
    } else {
        *(u64 *)(a0 + 0x378) = (u64)(u32)in_fr1;
        in_fr1 = 5.0;
        *(u64 *)(a0 + 0x37c) = 0x3a040a00000;
    }
    if (cVar7 == '\0') {
        *(u32 *)(a0 + 0x3a0) = 0;
    } else {
        *(u64 *)(a0 + 0x3a0) = (u64)(u32)in_fr1;
    }
    if (cVar7 == '\0') {
        *(u32 *)(a0 + 0x3a4) = 0;
        *(u32 *)(a0 + 0x3a8) = 0x40a00000;
    } else {
        *(u64 *)(a0 + 0x3a4) = (u64)(u32)in_fr1;
        in_fr1 = 5.0;
        *(u64 *)(a0 + 0x3a8) = 0x3a040a00000;
    }
    CAnimal_sub_02a788(a0, a1, a2, a3);
    CAnimal_sub_02aabc(a0, a1, a2, a3);
    uVar2 = game_sub_02bef8(a0 + 0x174, a1, a2);
    iVar5 = (int)(short)uVar2;
    pfVar4 = (float *)0x4;
    if ((iVar5 < 5) && (-1 < iVar5)) {
        pfVar4 = (float *)(&switchD_8c03716a::switchdataD_8c037170)[iVar5];
        switch (iVar5) {
        case 0:
            *(u32 *)(a0 + 0x360) = *(u32 *)(*(int *)(*(int *)(*(int *)(iVar3 + 0x2c) + 0x2c) + 0x2c) + 0x30);
            *(u32 *)(a0 + 0x35c) =
                *(u32 *)(*(int *)(*(int *)(*(int *)(*(int *)(iVar3 + 0x2c) + 0x2c) + 0x2c) + 0x30) + 0x30);
            pfVar4 = (float *)0x46c;
            *(u8 *)(a0 + 0x46c) = 0xff;
            break;
        case 1:
            *(u32 *)(a0 + 0x358) =
                *(u32 *)(*(int *)(*(int *)(*(int *)(*(int *)(iVar3 + 0x2c) + 0x2c) + 0x2c) + 0x30) + 0x2c);
            pfVar4 = (float *)0x354;
            *(u32 *)(a0 + 0x354) =
                *(u32 *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(iVar3 + 0x2c) + 0x2c) + 0x2c) + 0x30) + 0x30) +
                         0x2c);
            break;
        case 2:
            *(u32 *)(a0 + 0x360) =
                *(u32 *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(iVar3 + 0x2c) + 0x2c) + 0x2c) + 0x30) +
                                           0x30) +
                                  0x30) +
                         0x2c);
            *(u32 *)(a0 + 0x35c) =
                *(u32 *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(iVar3 + 0x2c) + 0x2c) + 0x2c) +
                                                             0x30) +
                                                    0x30) +
                                           0x30) +
                                  0x30) +
                         0x2c);
            pfVar4 = (float *)(a0 + 0x468);
            if (cVar7 == '\0') {
                in_fr1 = *pfVar4;
            }
            if (cVar6 == '\0' && 1.0 < in_fr1) {
                pfVar4 = (float *)0x468;
                if (cVar7 == '\0') {
                    *(u32 *)(a0 + 0x468) = 0;
                } else {
                    *(u64 *)(a0 + 0x468) = (u64)(u32)in_fr1;
                }
            }
            break;
        case 3:
            *(u32 *)(a0 + 0x360) =
                *(u32 *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(iVar3 + 0x2c) + 0x2c) + 0x2c) +
                                                             0x30) +
                                                    0x30) +
                                           0x30) +
                                  0x30) +
                         0x30);
            pfVar4 = (float *)0x46c;
            *(u8 *)(a0 + 0x46c) = 0xff;
        }
    }
    return pfVar4;
}

/*
 * game_sub_0372a0  0x8c0372a0
 * name hint from a string it uses: Tm1 Home njd; area name: game code; nothing names its area yet
 * called by: game_sub_0c0444
 */
u32 game_sub_0372a0(void) {
    u32 uVar1;
    u8 **ar5_00;
    u8 *ar6_00;
    code *pcVar2;
    u32 uVar3;
    u32 uVar4;
    u32 uVar5;
    int iVar6;
    float fVar7;
    float fVar8;
    double dVar9;
    u64 uVar10;
    u64 in_xd0;
    char cVar11;
    char cVar12;
    u8 auStack_bc[12];
    u8 auStack_b0[12];
    u8 auStack_a4[12];
    u8 auStack_98[12];
    u8 auStack_8c[12];
    u8 auStack_80[12];
    u8 auStack_74[12];
    u8 auStack_68[12];
    u8 auStack_5c[12];
    u8 auStack_50[12];
    u8 auStack_44[12];
    u8 auStack_38[12];
    u8 auStack_2c[12];
    u8 auStack_20[12];
    u8 auStack_14[16];

    g_8c27e09c = (u64)g_8c27e09c;
    cVar12 = '\0';
    cVar11 = '\0';
    for (iVar6 = 0; iVar6 < 5; iVar6 = iVar6 + 1) {
        *(u8 **)(iVar6 * 0x124 + 0x8c27dfd4) = &g_8c27d1fc;
    }
    g_8c27dfd8 = &PTR_s_Tm1_Idle1_njm_8c1336b8;
    g_8c27dfdc = &PTR_s_Tm1_Idle1_njs_8c133718;
    g_8c27dfe0 = PTR_s_Tm1_Home_njd_8c133694;
    g_8c27dfe4 = PTR_s_TM1_FACE_8c1336ac;
    g_8c27dfe8 = PTR_s_TM1_BODY_TEX_8c1336b0;
    g_8c27dfec = PTR_s_Tm1_MotionPack_npd_8c133698;
    g_8c27dff0 = PTR_s_Hand_for_tm1_njm_8c1336b4;
    g_8c27dff4 = PTR_s_Tm1_normal_PVM_8c13369c;
    g_8c27dff8 = 2;
    g_8c27e004 = 0x8c27eea4;
    g_8c27e008 = PTR_s_Tm1_special_PVM_8c1336a0;
    g_8c27e00c = 2;
    g_8c27e018 = 0x8c27eebc;
    g_8c27e01c = PTR_s_Tm1_head_normal_PVM_8c1336a4;
    g_8c27e020 = 10;
    g_8c27e02c = 0x8c27eed4;
    g_8c27e030 = PTR_s_Tm1_head_special_PVM_8c1336a8;
    g_8c27e034 = 10;
    g_8c27e040 = 0x8c27ef4c;
    g_8c27e088 = 0x8c27fd30;
    g_8c27e08c = 0x3f000000;
    g_8c27e090 = 0x3f800000;
    uVar4 = 0x8c27dfd4;
    g_8c27e098 = (short)(int)(14400.0 / (0.5 / g_8c27e094));
    if (g_8c27e098 == 0) {
        g_8c27e098 = 1;
    }
    g_8c27e09c = CONCAT44(0x3ca3d70a, g_8c27e09c);
    g_8c27e0a4 = 0x3f4ccccd;
    g_8c27e0a8 = 0x43480000;
    g_8c27e0ac = 0;
    ar6_00 = &g_8c27e0b0;
    g_8c27e0b0 = 0;
    g_8c27e0b4 = 0x41400000;
    Class_129920_m0_015248(0x8c27e05c, &PTR_PTR_8c13400c, &g_8c27e0b0, 0x8c27dfd4);
    Class_129920_m0_015248(0x8c27e064, &PTR_PTR_8c13400c, ar6_00, uVar4);
    g_8c27e074 = 0x8c27e5c0;
    g_8c27e078 = 0x18;
    g_8c27e07c = 0x8c27e62c;
    g_8c27e080 = 0x18;
    Vec3_set_xyz(auStack_14, 0x8c27e62c, ar6_00, uVar4);
    vec3_copy_8c023d8c(0x8c27e0cc, auStack_14, ar6_00, uVar4);
    uVar1 = 0xffffffff;
    object_dtor_delete(auStack_14, 0xffffffff, ar6_00, uVar4);
    Vec3_set_xyz(auStack_20, uVar1, ar6_00, uVar4);
    vec3_copy_8c023d8c(0x8c27e0d8, auStack_20, ar6_00, uVar4);
    uVar1 = 0xffffffff;
    object_dtor_delete(auStack_20, 0xffffffff, ar6_00, uVar4);
    Vec3_set_xyz(auStack_2c, uVar1, ar6_00, uVar4);
    vec3_copy_8c023d8c(0x8c27e0e4, auStack_2c, ar6_00, uVar4);
    object_dtor_delete(auStack_2c, 0xffffffff, ar6_00, uVar4);
    if (cVar12 == '\0') {
        g_8c27e0f4 = CONCAT44(DAT_8c27e0f4_4, 0x42dc0000);
        g_8c27e0c0 = CONCAT44(DAT_8c27e0c0_4, 0x41c00000);
        dVar9 = (double)CONCAT44(0x3f000000, g_8c27e09c);
    } else {
        g_8c27e0f4 = 0xec42dc0000;
        g_8c27e0c0 = 0xc841c00000;
        dVar9 = 3.99457418603154e-312;
        in_xd0 = g_8c27e09c;
    }
    if (cVar11 == '\0') {
        g_8c27e1b4 = SUB84(dVar9, 0) * (float)((u64)dVar9 >> 0x20);
    } else {
        g_8c27e1b4 = SUB84(dVar9 * dVar9, 0);
    }
    uVar10 = in_xd0;
    if (cVar12 == '\0') {
        g_8c27e09c = CONCAT44(g_8c27e0a0, g_8c27e1b4);
        uVar10 = g_8c27e09c;
    }
    g_8c27e09c = uVar10;
    g_8c27e0fc = &PTR_s_Tm2_Idle1_njm_8c1337a0;
    g_8c27e100 = &PTR_s_Tm2_Idle1_njs_8c1337f8;
    g_8c27e104 = PTR_s_Tm2_Home_njd_8c13377c;
    uVar4 = 0x134;
    g_8c27e108 = PTR_s_TM2_FACE_8c133794;
    g_8c27e10c = PTR_s_TM2_BODY_TEX_8c133798;
    g_8c27e110 = PTR_s_Tm2_MotionPack_npd_8c133780;
    g_8c27e114 = PTR_s_Hand_for_tm2_njm_8c13379c;
    g_8c27e118 = PTR_s_Tm2_normal_PVM_8c133784;
    g_8c27e11c = 9;
    g_8c27e128 = 0x8c27efc4;
    g_8c27e12c = PTR_s_Tm2_special_PVM_8c133788;
    g_8c27e130 = 9;
    g_8c27e13c = 0x8c27f030;
    g_8c27e140 = PTR_s_Tm2_head_normal_PVM_8c13378c;
    g_8c27e144 = 10;
    g_8c27e150 = 0x8c27f09c;
    g_8c27e154 = PTR_s_Tm2_head_special_PVM_8c133790;
    g_8c27e158 = 10;
    g_8c27e164 = 0x8c27f114;
    g_8c27e1ac = 0x8c27fdd0;
    if (cVar12 != '\0') {
        g_8c27e1b4 = 0.55;
    }
    g_8c27e1b0 = 0x3f0ccccd;
    if (cVar12 == '\0') {
        g_8c27e1b4 = 1.0;
        dVar9 = 5.493165366488029e-05;
    } else {
        g_8c27e1b8 = 0x3f800000;
        in_xd0 = CONCAT44(0x3f800000, g_8c27e1b4);
        dVar9 = (double)CONCAT44(g_8c27e1b4, 0x3f0ccccd);
    }
    if (cVar11 == '\0') {
        fVar7 = SUB84(dVar9, 0) - (float)((u64)dVar9 >> 0x20);
    } else {
        fVar7 = SUB84(dVar9 - dVar9, 0);
    }
    if (cVar12 == '\0') {
        dVar9 = (double)CONCAT44(g_8c27e1b8, fVar7);
    } else {
        dVar9 = (double)CONCAT26(uRam8c27e1be, CONCAT24(g_8c27e1bc, g_8c27e1b8));
    }
    if (cVar11 == '\0') {
        fVar7 = SUB84(dVar9, 0) / (float)((u64)dVar9 >> 0x20);
    } else {
        fVar7 = SUB84(dVar9 / dVar9, 0);
    }
    if (cVar12 == '\0') {
        dVar9 = (double)CONCAT44(0x46610000, fVar7);
    } else {
        dVar9 = 1.05309328631423e-311;
    }
    if (cVar11 == '\0') {
        fVar7 = (float)((u64)dVar9 >> 0x20) / SUB84(dVar9, 0);
        dVar9 = (double)CONCAT44(fVar7, SUB84(dVar9, 0));
        g_8c27e1bc = (short)(int)fVar7;
    } else {
        dVar9 = dVar9 / dVar9;
        g_8c27e1bc = (short)(int)dVar9;
    }
    uVar1 = 0x8c27dfd4;
    if (g_8c27e1bc == 0) {
        g_8c27e1bc = 1;
    }
    if (cVar12 == '\0') {
        g_8c27e1d4 = SUB84(dVar9, 0);
    } else {
        g_8c27e1d4 = 0x437a0000;
    }
    g_8c27e1cc = 0x437a0000;
    g_8c27e1c8 = 0x3f4ccccd;
    g_8c27e1c0 = CONCAT44(0x3ca3d70a, (int)g_8c27e1c0);
    if (cVar12 == '\0') {
        g_8c27e1d4 = 0;
    } else {
        ppuRam8c27e1dc = &PTR_PTR_8c134050;
    }
    g_8c27e1d8 = 0x41900000;
    g_8c27e1d0 = g_8c27e1d4;
    Class_129920_m0_015248(0x8c27e180, &PTR_PTR_8c134050, 0x8c27dfd4, 0x134);
    Class_129920_m0_015248(0x8c27e188, &PTR_PTR_8c134050, uVar1, uVar4);
    g_8c27e198 = 0x8c27e698;
    g_8c27e19c = 0x16;
    g_8c27e1a0 = 0x8c27e6fc;
    g_8c27e1a4 = 0x16;
    Vec3_set_xyz(auStack_38, 0x16, 0x8c27dfd4, uVar4);
    uVar1 = 0x8c27e1f0;
    pcVar2 = vec3_copy_8c023d8c;
    vec3_copy_8c023d8c(0x8c27e1f0, auStack_38, vec3_copy_8c023d8c, 0x8c27e1f0);
    object_dtor_delete(auStack_38, 0xffffffff, pcVar2, uVar1);
    Vec3_set_xyz(auStack_44, auStack_44, pcVar2, uVar1);
    vec3_copy_8c023d8c(0x8c27e1fc, auStack_44, pcVar2, uVar1);
    uVar4 = 0xffffffff;
    object_dtor_delete(auStack_44, 0xffffffff, pcVar2, uVar1);
    Vec3_set_xyz(auStack_50, uVar4, pcVar2, uVar1);
    vec3_copy_8c023d8c(0x8c27e208, auStack_50, pcVar2, uVar1);
    object_dtor_delete(auStack_50, 0xffffffff, auStack_50, uVar1);
    if (cVar12 == '\0') {
        g_8c27e218 = CONCAT44(DAT_8c27e218_4, 0x43200000);
        g_8c27e1e4 = CONCAT44(DAT_8c27e1e4_4, 0x42200000);
        dVar9 = (double)CONCAT44(0x3f19999a, g_8c27e1c0);
    } else {
        g_8c27e218 = 0x21043200000;
        g_8c27e1e4 = 0x1ec42200000;
        dVar9 = 1.24825656389407e-311;
        in_xd0 = g_8c27e1c0;
    }
    if (cVar11 == '\0') {
        fVar7 = SUB84(dVar9, 0) * (float)((u64)dVar9 >> 0x20);
    } else {
        fVar7 = SUB84(dVar9 * dVar9, 0);
    }
    uVar10 = in_xd0;
    if (cVar12 == '\0') {
        g_8c27e1c0 = CONCAT44(g_8c27e1c4, fVar7);
        uVar10 = g_8c27e1c0;
    }
    g_8c27e1c0 = uVar10;
    g_8c27e220 = &PTR_s_Tm3_Idle_njm_8c133878;
    g_8c27e224 = &PTR_s_Tm3_Idle_njs_8c1338d4;
    g_8c27e228 = PTR_s_Tm3_Home_njd_8c133854;
    g_8c27e22c = PTR_s_TM3_FACE_8c13386c;
    g_8c27e230 = PTR_s_TM3_BODY_TEX_8c133870;
    g_8c27e234 = PTR_s_Tm3_MotionPack_npd_8c133858;
    g_8c27e238 = PTR_s_Hand_for_tm3_njm_8c133874;
    g_8c27e23c = PTR_s_Tm3_normal_PVM_8c13385c;
    g_8c27e240 = 0xf;
    g_8c27e24c = 0x8c27f18c;
    g_8c27e250 = PTR_s_Tm3_special_PVM_8c133860;
    g_8c27e254 = 0xf;
    g_8c27e260 = 0x8c27f240;
    g_8c27e264 = PTR_s_Tm3_head_normal_PVM_8c133864;
    g_8c27e268 = 10;
    g_8c27e274 = 0x8c27f2f4;
    g_8c27e278 = PTR_s_Tm3_head_special_PVM_8c133868;
    g_8c27e27c = 10;
    g_8c27e288 = 0x8c27f36c;
    g_8c27e2d0 = 0x8c27fe70;
    if (cVar12 == '\0') {
        g_8c27e2d8 = 1.0;
    } else {
        g_8c27e2d8 = 0.7;
        g_8c27e2dc = 0x3f800000;
    }
    uVar4 = 0x30c;
    if (cVar12 == '\0') {
        dVar9 = (double)CONCAT44(0x3f333333, g_8c27e2d8);
    } else {
        in_xd0 = CONCAT44(g_8c27e2dc, g_8c27e2d8);
        dVar9 = (double)CONCAT44(g_8c27e2d8, 0x3f333333);
    }
    if (cVar11 == '\0') {
        fVar7 = SUB84(dVar9, 0) - (float)((u64)dVar9 >> 0x20);
    } else {
        fVar7 = SUB84(dVar9 - dVar9, 0);
    }
    if (cVar12 == '\0') {
        dVar9 = (double)CONCAT44(g_8c27e2dc, fVar7);
    } else {
        dVar9 = (double)CONCAT26(uRam8c27e2e2, CONCAT24(g_8c27e2e0, g_8c27e2dc));
    }
    if (cVar11 == '\0') {
        fVar7 = SUB84(dVar9, 0) / (float)((u64)dVar9 >> 0x20);
    } else {
        fVar7 = SUB84(dVar9 / dVar9, 0);
    }
    if (cVar12 == '\0') {
        dVar9 = (double)CONCAT44(0x46610000, fVar7);
    } else {
        dVar9 = 1.05309328631423e-311;
    }
    if (cVar11 == '\0') {
        fVar7 = (float)((u64)dVar9 >> 0x20) / SUB84(dVar9, 0);
        dVar9 = (double)CONCAT44(fVar7, SUB84(dVar9, 0));
        g_8c27e2e0 = (short)(int)fVar7;
    } else {
        dVar9 = dVar9 / dVar9;
        g_8c27e2e0 = (short)(int)dVar9;
    }
    if (g_8c27e2e0 == 0) {
        g_8c27e2e0 = 1;
    }
    if (cVar12 == '\0') {
        uVar1 = SUB84(dVar9, 0);
    } else {
        uVar1 = 0x43660000;
    }
    g_8c27e2f0 = 0x43660000;
    g_8c27e2ec = 0x3f4ccccd;
    g_8c27e2e4 = CONCAT44(0x3ca3d70a, (int)g_8c27e2e4);
    if (cVar12 == '\0') {
        g_8c27e2f8 = 0;
        g_8c27e2d8 = (float)uVar1;
    } else {
        uRam8c27e300 = 0x300;
        g_8c27e2d8 = 0.92;
        g_8c27e2f8 = uVar1;
    }
    g_8c27e2fc = 0x41ec0000;
    g_8c27e2d4 = 0x3f6b851f;
    if (cVar12 == '\0') {
        g_8c27e2d8 = 1.0;
    } else {
        g_8c27e2dc = 0x3f800000;
    }
    g_8c27e2f4 = g_8c27e2f8;
    Class_129920_m0_015248(0x8c27e2a4, &PTR_PTR_8c134094, Class_129920_m0_015248, 0x30c);
    ar5_00 = &PTR_PTR_8c134094;
    Class_129920_m0_015248(0x8c27e2ac, &PTR_PTR_8c134094, Class_129920_m0_015248, uVar4);
    g_8c27e2bc = 0x8c27e760;
    g_8c27e2c0 = 0x17;
    g_8c27e2c4 = 0x8c27e7c8;
    uVar1 = 0x2f4;
    g_8c27e2c8 = 0x17;
    Vec3_set_xyz(auStack_5c, ar5_00, 0x2f4, uVar4);
    vec3_copy_8c023d8c(0x8c27e314, auStack_5c, uVar1, uVar4);
    uVar1 = 0xffffffff;
    pcVar2 = object_dtor_delete;
    object_dtor_delete(auStack_5c, 0xffffffff, object_dtor_delete, uVar4);
    Vec3_set_xyz(auStack_68, uVar1, pcVar2, uVar4);
    vec3_copy_8c023d8c(0x8c27e320, auStack_68, pcVar2, uVar4);
    object_dtor_delete(auStack_68, 0xffffffff, pcVar2, uVar4);
    Vec3_set_xyz(auStack_74, auStack_74, pcVar2, uVar4);
    vec3_copy_8c023d8c(0x8c27e32c, auStack_74, pcVar2, uVar4);
    object_dtor_delete(auStack_74, 0xffffffff, pcVar2, uVar4);
    if (cVar12 == '\0') {
        g_8c27e33c = CONCAT44(DAT_8c27e33c_4, 0x435c0000);
        g_8c27e308 = CONCAT44(DAT_8c27e308_4, 0x42820000);
    } else {
        g_8c27e33c = 0x334435c0000;
        g_8c27e308 = 0x31042820000;
    }
    uVar4 = 0x8c27dfd4;
    if (cVar12 == '\0') {
        dVar9 = (double)CONCAT44(0x3f4ccccd, g_8c27e2e4);
    } else {
        dVar9 = 1.68963334622396e-311;
        in_xd0 = g_8c27e2e4;
    }
    if (cVar11 == '\0') {
        fVar7 = SUB84(dVar9, 0) * (float)((u64)dVar9 >> 0x20);
    } else {
        fVar7 = SUB84(dVar9 * dVar9, 0);
    }
    uVar10 = in_xd0;
    if (cVar12 == '\0') {
        g_8c27e2e4 = CONCAT44(g_8c27e2e8, fVar7);
        uVar10 = g_8c27e2e4;
    }
    g_8c27e2e4 = uVar10;
    g_8c27e344 = &PTR_s_fm1_W_Idle_njm_8c133958;
    g_8c27e348 = &PTR_DAT_8c133aec;
    g_8c27e34c = PTR_s_Fm1_G_Home_njd_8c133934;
    g_8c27e350 = PTR_s_FM1_FACE_8c13394c;
    g_8c27e354 = PTR_s_FM1_BODY_TEX_8c133950;
    uVar5 = 900;
    g_8c27e358 = PTR_s_fm1_MotionPack_npd_8c133938;
    g_8c27e35c = PTR_s_Hand_for_fm1_njm_8c133954;
    g_8c27e360 = PTR_s_fm1_normal_PVM_8c13393c;
    g_8c27e364 = 0x11;
    g_8c27e370 = 0x8c27f3e4;
    g_8c27e374 = PTR_s_fm1_special_PVM_8c133940;
    g_8c27e378 = 0x11;
    g_8c27e384 = 0x8c27f4b0;
    g_8c27e388 = PTR_s_Fm1_head_normal_PVM_8c133944;
    g_8c27e38c = 10;
    uVar1 = 0x8c27dfd4;
    g_8c27e398 = 0x8c27f57c;
    g_8c27e39c = PTR_s_Fm1_head_special_PVM_8c133948;
    g_8c27e3a0 = 10;
    g_8c27e3ac = 0x8c27f5f4;
    g_8c27e3f4 = 0x8c27ff10;
    uVar10 = CONCAT44(0x3f800000, fVar7);
    if (cVar12 == '\0') {
        g_8c27e3fc = CONCAT44(DAT_8c27e3fc_4, 0x3f800000);
    } else {
        fVar7 = 240.0;
        g_8c27e3fc = uVar10;
    }
    g_8c27e414 = 0x43700000;
    g_8c27e410 = 0x3e99999a;
    g_8c27e40c = 0x3a1d4952;
    if (cVar12 == '\0') {
        g_8c27e418 = 0.0;
        fVar8 = fVar7;
    } else {
        ppuRam8c27e424 = &PTR_PTR_8c1340d8;
        fVar8 = 0.8;
        g_8c27e418 = fVar7;
    }
    g_8c27e420 = 0x427e0000;
    g_8c27e41c = 0x42600000;
    g_8c27e2d4 = 0x3f4ccccd;
    if (cVar12 == '\0') {
        g_8c27e2d8 = 1.0;
    } else {
        g_8c27e2dc = 0x3f800000;
        g_8c27e2d8 = fVar8;
    }
    Class_129920_m0_015248(0x8c27e3c8, &PTR_PTR_8c1340d8, 0x8c27dfd4, 900);
    Class_129920_m0_015248(0x8c27e3d0, &PTR_PTR_8c1340d8, uVar1, uVar5);
    g_8c27e3e0 = 0x8c27e830;
    g_8c27e3e4 = 0x65;
    g_8c27e3e8 = 0x8c27e9d0;
    g_8c27e3ec = 0x65;
    Vec3_set_xyz(auStack_80, 0x414, Vec3_set_xyz, uVar5);
    uVar3 = 0x8c27e438;
    vec3_copy_8c023d8c(0x8c27e438, auStack_80, 0x8c27e438, uVar5);
    uVar1 = 0xffffffff;
    object_dtor_delete(auStack_80, 0xffffffff, uVar3, uVar5);
    Vec3_set_xyz(auStack_8c, uVar1, uVar3, uVar5);
    uVar5 = 0x470;
    uVar3 = 0x8c27e444;
    vec3_copy_8c023d8c(0x8c27e444, auStack_8c, 0x470, 0x8c27e444);
    uVar1 = 0xffffffff;
    object_dtor_delete(auStack_8c, 0xffffffff, uVar5, uVar3);
    Vec3_set_xyz(auStack_98, uVar1, uVar5, uVar3);
    vec3_copy_8c023d8c(0x8c27e450, auStack_98, uVar5, uVar3);
    object_dtor_delete(auStack_98, 0xffffffff, uVar5, uVar3);
    if (cVar12 == '\0') {
        g_8c27e460 = CONCAT44(DAT_8c27e460_4, 0x43660000);
        g_8c27e42c = CONCAT44(DAT_8c27e42c_4, 0x42a00000);
    } else {
        g_8c27e460 = 0x45843660000;
        fVar8 = 80.0;
        g_8c27e42c = 0x49442a00000;
    }
    g_8c27e468 = &PTR_s_fm2_W_Idle1_njm_8c133ca8;
    g_8c27e46c = &PTR_s_fm2_W_Idle1_njs_8c133e3c;
    g_8c27e470 = PTR_s_Fm2_G_Home_njd_8c133c84;
    g_8c27e474 = PTR_s_FM2_FACE_8c133c9c;
    g_8c27e478 = PTR_s_FM2_BODY_TEX_8c133ca0;
    g_8c27e47c = PTR_s_fm2_MotionPack_npd_8c133c88;
    g_8c27e480 = PTR_s_Hand_for_fm2_njm_8c133ca4;
    g_8c27e484 = PTR_s_fm2_normal_PVM_8c133c8c;
    g_8c27e488 = 0xf;
    g_8c27e494 = 0x8c27f66c;
    g_8c27e498 = PTR_s_fm2_special_PVM_8c133c90;
    g_8c27e49c = 0xf;
    g_8c27e4a8 = 0x8c27f720;
    g_8c27e4ac = PTR_s_Fm2_head_normal_PVM_8c133c94;
    g_8c27e4b0 = 10;
    g_8c27e4bc = 0x8c27f7d4;
    g_8c27e4c0 = PTR_s_Fm2_head_special_PVM_8c133c98;
    g_8c27e4c4 = 10;
    g_8c27e4d0 = 0x8c27f84c;
    g_8c27e518 = 0x8c27ffb0;
    if (cVar12 == '\0') {
        g_8c27e520 = CONCAT44(DAT_8c27e520_4, 0x3f800000);
        g_8c27e53c = fVar8;
    } else {
        g_8c27e53c = 270.0;
        g_8c27e520 = CONCAT44(0x3f800000, fVar8);
    }
    g_8c27e538 = 0x43870000;
    g_8c27e534 = 0x3e99999a;
    g_8c27e530 = 0x3a03126f;
    if (cVar12 == '\0') {
        g_8c27e53c = 0.0;
    } else {
        ppuRam8c27e548 = &PTR_PTR_8c1340d8;
    }
    g_8c27e544 = 0x42880000;
    g_8c27e540 = 0x429a0000;
    Class_129920_m0_015248(0x8c27e4ec, &PTR_PTR_8c1340d8, Class_129920_m0_015248, uVar3);
    Class_129920_m0_015248(0x8c27e4f4, &PTR_PTR_8c1340d8, Class_129920_m0_015248, uVar3);
    g_8c27e504 = 0x8c27eb70;
    g_8c27e508 = 0x65;
    uVar5 = 0x538;
    uVar1 = 0x8c27ed10;
    g_8c27e50c = 0x8c27ed10;
    g_8c27e510 = 0x65;
    Vec3_set_xyz(auStack_a4, auStack_a4, 0x8c27ed10, 0x538);
    vec3_copy_8c023d8c(0x8c27e55c, auStack_a4, uVar1, uVar5);
    uVar4 = 0xffffffff;
    object_dtor_delete(auStack_a4, 0xffffffff, uVar1, uVar5);
    Vec3_set_xyz(auStack_b0, uVar4, uVar1, uVar5);
    vec3_copy_8c023d8c(0x8c27e568, auStack_b0, uVar1, uVar5);
    uVar4 = 0xffffffff;
    object_dtor_delete(auStack_b0, 0xffffffff, auStack_b0, uVar5);
    Vec3_set_xyz(auStack_bc, uVar4, auStack_bc, uVar5);
    vec3_copy_8c023d8c(0x8c27e574, auStack_bc, auStack_bc, uVar5);
    object_dtor_delete(auStack_bc, 0xffffffff, object_dtor_delete, uVar5);
    if (cVar12 == '\0') {
        g_8c27e584 = CONCAT44(DAT_8c27e584_4, 0x43870000);
        g_8c27e550 = CONCAT44(DAT_8c27e550_4, 0x42c80000);
    } else {
        g_8c27e584 = 0x56843870000;
        g_8c27e550 = 0x8c27e59442c80000;
    }
    g_8c27e594 = 3;
    g_8c27e598 = 1;
    g_8c27e59c = 0;
    g_8c27e5a0 = 0;
    g_8c27e5a4 = 0xffff;
    g_8c27e5a8 = 1;
    g_8c27e5ac = 0;
    g_8c27e5b0 = 0;
    return 0xffffffff;
}

/*
 * game_sub_0384f8  0x8c0384f8
 * name hint from a string it uses: GRAPHICS FROGMANLINE; area name: game code; nothing names its area yet
 * called by: CFrogManEgg_sub_0fef94
 * strings: "FrogManEgg"
 */
int game_sub_0384f8(int a0, u32 a1) {
    u32 uVar1;
    u32 ar6_00;
    int ar6_01;
    u32 ar7_00;

    ar7_00 = 5;
    ar6_00 = 1;
    uVar1 = 6;
    game_sub_0254d0(a0, 6, 1, 5, 0, a1, 0x8c280050, 0x8c280180, PTR_s_GRAPHICS_FROGMANLINE_8c1340e0);
    *(u8 **)(a0 + 8) = &g_8c129d04;
    Class_129938_ctor(a0 + 0x490, uVar1, ar6_00);
    Class_129c24_ctor(a0 + 0x528, uVar1, ar6_00);
    Class_129cbc_ctor(a0 + 0x5c4, uVar1, ar6_00, ar7_00);
    sprintf(a0 + 0xc, uVar1, ar6_00, ar7_00, "FrogManEgg");
    *(u8 *)(a0 + 0x524) = 0xff;
    ar6_01 = a0 + 0x490;
    uVar1 = *(u32 *)(*(int *)(a0 + 0x328) + 0xb4);
    Class_12c058_sub_0f532c(a0, uVar1, ar6_01, ar7_00);
    noop_027224(a0 + 0x5c4, uVar1, ar6_01, ar7_00, a1);
    (**(code **)(*(int *)(a0 + 0xa8) + 0x28))((int *)(a0 + 0xa8), a0 + 0x30, ar6_01, ar7_00);
    *(u32 *)(a0 + 0x330) = 0;
    *(u32 *)(a0 + 0x74) = *(u32 *)(a0 + 0x74) | 0x10;
    *(int *)(a0 + 0x308) = a0 + 0x528;
    *(int *)(a0 + 0x30c) = a0 + 0x5c4;
    return a0;
}

/*
 * CAnimal_m0_038648  0x8c038648
 */
int CAnimal_m0_038648(int a0, u32 a1, u32 a2, u32 a3) {
    u32 ar5_00;
    u32 in_stack_fffffff4;
    u32 ain0;

    ain0 = CONCAT22((short)((u32)in_stack_fffffff4 >> 0x10), (u16)a1);
    if (a0 != 0) {
        *(u8 **)(a0 + 8) = &g_8c129d04;
        Class_129cbc_dtor(a0 + 0x5c4, 0xffffffff, a2, a3);
        Class_129c24_dtor(a0 + 0x528, 0xffffffff, a2, a3);
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
 * CAnimal_m2_0386d0  0x8c0386d0
 */
u32 CAnimal_m2_0386d0(int a0, u32 a1, int *a2, int *a3) {
    char cVar1;
    u32 uVar2;
    u32 uVar3;
    int iVar4;
    u32 uVar5;
    int *piVar6;
    int *piVar7;
    u16 uVar8;
    u32 in_stack_ffffffb8;

    cVar1 = *(char *)(a0 + 0x524);
    if (cVar1 == -1) {
        piVar6 = a2;
        piVar7 = a3;
        uVar5 = get_field_a2_s16(a1, a1);
        uVar5 = uVar5 & 0xffff;
        set_field_8(a0 + 0x21c, uVar5);
        uVar5 = get_field_a4_s16(a1, uVar5);
        uVar5 = uVar5 & 0xffff;
        set_field_c(a0 + 0x21c, uVar5);
        if (*(int *)(a0 + 0x330) != 0) {
            (**(code **)(*(int *)(*(int *)(a0 + 0x330) + 8) + 0x10c))(*(int *)(a0 + 0x330), a1, piVar6, piVar7);
            (**(code **)(*(int *)(*(int *)(a0 + 0x330) + 8) + 0x110))(*(int *)(a0 + 0x330), 1, piVar6, piVar7);
            uVar5 = a1;
            (**(code **)(*(int *)(*(int *)(a0 + 0x330) + 8) + 0x10))(*(int *)(a0 + 0x330), a1, a2, a3);
            set_vec3_field_30(*(u32 *)(a0 + 0x330), uVar5, a2);
            (**(code **)(*(int *)(*(int *)(a0 + 0x330) + 8) + 0x144))(*(int *)(a0 + 0x330), uVar5, a2, a3);
            set_fields_5c_60_64(*(u32 *)(a0 + 0x330));
            piVar6 = a2;
            piVar7 = a3;
        }
        uVar2 = get_field_a4_s16(a1, uVar5);
        a1 = uVar5;
        a2 = piVar6;
        a3 = piVar7;
        if (((u16)uVar2 < 5) &&
            (iVar4 = get_field_18_02d1a0(a0 + 0x21c), a1 = uVar5, a2 = piVar6, a3 = piVar7, -1 < iVar4)) {
            *(u8 *)(a0 + 0x524) = 0;
        }
    } else if (cVar1 == '\0') {
        uVar5 = a1;
        piVar6 = a2;
        piVar7 = a3;
        uVar3 = get_field_a4_s16(a1, a1);
        uVar8 = (u16)in_stack_ffffffb8;
        iVar4 = get_field_c_02d1b8(a0 + 0x21c);
        uVar3 = (uVar3 & 0xffff) - iVar4;
        if (*(int *)(a0 + 0x330) != 0) {
            (**(code **)(*(int *)(*(int *)(a0 + 0x330) + 8) + 0x10c))(*(int *)(a0 + 0x330), a1, piVar6, piVar7);
            (**(code **)(*(int *)(*(int *)(a0 + 0x330) + 8) + 0x110))(*(int *)(a0 + 0x330), 1, piVar6, piVar7);
            uVar5 = a1;
            piVar7 = a3;
            (**(code **)(*(int *)(*(int *)(a0 + 0x330) + 8) + 0x10))(*(int *)(a0 + 0x330), a1, a2, a3);
            set_vec3_field_30(*(u32 *)(a0 + 0x330), uVar5, a2);
            (**(code **)(*(int *)(*(int *)(a0 + 0x330) + 8) + 0x144))(*(int *)(a0 + 0x330), uVar5, a2, piVar7);
            set_fields_5c_60_64(*(u32 *)(a0 + 0x330));
            piVar6 = a2;
        }
        iVar4 = (**(code **)(*(int *)(a0 + 8) + 0xb4))(a0, uVar5, piVar6, piVar7);
        if (iVar4 != 0) {
            uVar5 = uVar3;
            CAnimal_sub_02c030(a0 + 0x174, uVar3, a3, piVar7);
            piVar6 = a3;
        }
        iVar4 = game_sub_02c518(a0 + 0x174, uVar5, piVar6);
        if (iVar4 == -1) {
            a1 = 0x3c;
            iVar4 = libgcc_divide_helper_0101e4(uVar3, 0x3c);
            a2 = piVar6;
            a3 = piVar7;
            if (3 < iVar4) {
                *(u8 *)(a0 + 0x524) = 1;
            }
        } else {
            uVar5 = get_field_a2_s16(a1, uVar5);
            uVar2 = CONCAT22((short)uVar5, uVar8);
            uVar5 = uVar5 & 0xffff;
            set_field_8(a0 + 0x21c, uVar5);
            uVar8 = (u16)((u32)uVar2 >> 0x10);
            uVar5 = get_field_a4_s16(a1, uVar5);
            a1 = uVar5 & 0xffff;
            set_field_c(a0 + 0x21c, a1, piVar6, piVar7, CONCAT22(uVar8, (short)uVar5));
            a2 = piVar6;
            a3 = piVar7;
        }
    } else if (cVar1 == '\x01') {
        piVar6 = a3;
        (**(code **)(*(int *)(*(int *)(a0 + 0x330) + 8) + 0x110))(*(int *)(a0 + 0x330), 0, a2, a3);
        (**(code **)(*a3 + 0x4c))(a3, *(u32 *)(a0 + 0x330), a2, piVar6);
        *(u32 *)(a0 + 0x330) = 0;
        a2 = (int *)0x1b;
        uVar5 = 0x1a;
        recent5_push_unique(a1, 0x1a, 0x1b);
        mask_74_7fffffff(a0);
        a1 = uVar5;
        a3 = piVar6;
    }
    (**(code **)(*(int *)(a0 + 8) + 0xf8))(a0, a1, a2, a3);
    game_sub_0f79b8(a0 + 0xa0, a1, a2, a3);
    return 1;
}

/*
 * set_fields_5c_60_64  0x8c038a10
 * stores +0x5c, +0x60, +0x64
 * called by: CAnimal_m2_0386d0, Class_12a7f4_m2_09a060, Class_12a7f4_m3_09a558, Class_12ad50_m2_0a4fdc,
 * game_sub_04f034, game_sub_077a38
 */
u32 set_fields_5c_60_64(int a0) {
    u32 in_fr5;
    u32 in_fr4;
    u32 in_fr6;

    *(u32 *)(a0 + 0x5c) = in_fr4;
    *(u32 *)(a0 + 0x60) = in_fr5;
    *(u32 *)(a0 + 100) = in_fr6;
    return 1;
}

/*
 * ret_const_0_038a28  0x8c038a28
 */
u32 ret_const_0_038a28(void) {
    return 0;
}

/*
 * ret_const_1_038a30  0x8c038a30
 */
u32 ret_const_1_038a30(void) {
    return 1;
}

/*
 * noop_038a38  0x8c038a38
 */
u32 noop_038a38(void) {
    u32 in_r0;

    return in_r0;
}

/*
 * noop_038a3c  0x8c038a3c
 */
u32 noop_038a3c(void) {
    u32 in_r0;

    return in_r0;
}

/*
 * noop_038a40  0x8c038a40
 */
u32 noop_038a40(void) {
    u32 in_r0;

    return in_r0;
}

/*
 * game_sub_038a44  0x8c038a44
 * area name: game code; nothing names its area yet
 */
u32 game_sub_038a44(int a0, int a1, u32 a2, u32 a3) {
    u32 uVar1;

    obj_state_load(a0, a1, a2, a3);
    game_sub_02cbe4(a0 + 0x174, a1 + 0x4c, a2, a3);
    uVar1 = copy15_in_normalize(a0 + 0x2dc, a1 + 0xd8);
    return uVar1;
}

/*
 * game_sub_038aa4  0x8c038aa4
 * area name: game code; nothing names its area yet
 */
u32 game_sub_038aa4(int a0, int a1, u32 a2, u32 a3) {
    u32 uVar1;

    obj_state_save(a0, a1, a2, a3);
    game_sub_02cf20(a0 + 0x174, a1 + 0x4c, a2);
    uVar1 = copy15_out(a0 + 0x2dc, a1 + 0xd8);
    return uVar1;
}

/*
 * game_sub_038b04  0x8c038b04
 * area name: game code; nothing names its area yet
 */
u32 game_sub_038b04(int a0, u32 a1, u32 a2) {
    u32 r7;
    u32 uVar1;
    float fVar2;
    double dVar3;
    int ar7_00;
    int ar6_00;
    int ar5_00;
    char cVar4;
    char cVar5;
    u32 in_stack_fffffff4;

    cVar5 = '\0';
    cVar4 = '\0';
    obj_set_texlist(*(int *)(a0 + 0x328) + 0x78, a1, a2);
    matrix_push(0, a1, a2, r7, in_stack_fffffff4);
    touch_fields_30_3c(0, a1, a2, r7, in_stack_fffffff4);
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
    matrix_sub_256b0c(0, ar5_00, ar6_00, ar7_00, in_stack_fffffff4);
    matrix_scale(0, ar5_00, ar6_00, ar7_00, in_stack_fffffff4);
    matrix_scale(0, ar5_00, ar6_00, ar7_00, in_stack_fffffff4);
    uVar1 = get_field_0_015bb8(*(int *)(a0 + 0x328) + 0x70);
    gfxlib_sub_219a9a(uVar1, ar5_00, ar6_00, ar7_00);
    matrix_pop_n(1);
    uVar1 = 0;
    if (*(int *)(a0 + 0x330) != 0) {
        game_sub_0f4b44(*(u32 *)(a0 + 0x330));
        uVar1 = (**(code **)(*(int *)(*(int *)(a0 + 0x330) + 8) + 0x34))(*(int *)(a0 + 0x330), ar5_00, ar6_00, ar7_00);
    }
    return uVar1;
}

/*
 * game_sub_038c54  0x8c038c54
 * area name: game code; nothing names its area yet
 */
u32 game_sub_038c54(int a0, u32 a1, u32 a2, u32 a3) {
    u32 uVar1;

    noop_038c8c();
    uVar1 = 0;
    if (*(int *)(a0 + 0x330) != 0) {
        uVar1 = (**(code **)(*(int *)(*(int *)(a0 + 0x330) + 8) + 0x5c))(*(int *)(a0 + 0x330), a1, a2, a3);
    }
    return uVar1;
}

/*
 * noop_038c8c  0x8c038c8c
 * called by: Class_12a7f4_sub_09ac70, Class_12ad50_sub_0a5550, game_sub_038c54, game_sub_0883a8, game_sub_09cb58
 */
u32 noop_038c8c(void) {
    u32 in_r0;

    return in_r0;
}

/*
 * CFrogManEgg_NewChild  0x8c038c90
 * strings: "Ryu-zan"; "CFrogManEgg::NewChild()"
 */
u32 CFrogManEgg_NewChild(int a0, u32 a1, u32 unused_a2, u32 a3) {
    int a6;
    u32 uVar1;

    a6 = CFrogManEgg_sub_0fef94(a1, 5, 6, a3);
    if (a6 == 0) {
        uVar1 = (*(code *)(&report_error_message))("Ryu-zan", "CFrogManEgg::NewChild()", 1, 2);
    } else {
        uVar1 = (**(code **)(0x100 + *(int *)(a0 + 8)))(a0, 0, a6, a3);
    }
    return uVar1;
}

/*
 * CFrogManEgg_sub_038d0c  0x8c038d0c
 * area name: sits between CFrogManEgg functions (same compilation unit)
 */
int CFrogManEgg_sub_038d0c(int a0, u32 unused_a1, u32 a2) {
    int iVar1;

    iVar1 = 0x330;
    *(u32 *)(0x330 + a0) = a2;
    return iVar1;
}

/*
 * CFrogManEgg_sub_038d18  0x8c038d18
 * area name: sits between CFrogManEgg functions (same compilation unit)
 */
u32 CFrogManEgg_sub_038d18(int a0, u32 a1, u32 a2, u32 a3) {
    u32 uVar1;

    uVar1 = 0;
    if (*(int *)(0x330 + a0) != 0) {
        uVar1 = game_sub_0ff500(a1, a0 + 0x330, a2, a3);
    }
    return uVar1;
}

/*
 * CFrogManEgg_LoadGRReq  0x8c038d4c
 * strings: "Kidsptr is null.."; "CFrogManEgg::LoadGRReq()"
 */
u32 CFrogManEgg_LoadGRReq(int a0, u32 a1, u32 a2, u32 a3) {
    int iVar1;
    u32 uVar2;

    uVar2 = 0;
    if (*(int *)(0x420 + a0) == 0) {
        iVar1 = Vec3_sub_027a78(a0, a1, a2);
        if (iVar1 == 1) {
            *(u32 *)(0x420 + a0) = 1;
        }
    } else if (*(int *)(0x420 + a0) == 1) {
        if (*(int *)(0x330 + a0) == 0) {
            (*(code *)(&report_error_message))("Kidsptr is null..", "CFrogManEgg::LoadGRReq()", 0, 2);
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
 * ret_const_1_038e1c  0x8c038e1c
 */
u32 ret_const_1_038e1c(void) {
    return 1;
}

/*
 * CFrogManEgg_sub_038e24  0x8c038e24
 * area name: sits between CFrogManEgg functions (same compilation unit)
 */
u32 CFrogManEgg_sub_038e24(int a0, u32 a1, u32 a2, u32 a3) {
    u32 uVar1;

    CAnimal_LoadGRWait(a0, a1, a2, a3);
    uVar1 = 0;
    if (*(int *)(0x330 + a0) != 0) {
        uVar1 = (**(code **)(0xe0 + *(int *)(*(int *)(0x330 + a0) + 8)))(*(int *)(0x330 + a0), a1, 0, a3);
    }
    return uVar1;
}

/*
 * noop_038e74  0x8c038e74
 */
u32 noop_038e74(void) {
    u32 in_r0;

    return in_r0;
}

/*
 * CFrogManEgg_sub_038e78  0x8c038e78
 * area name: sits between CFrogManEgg functions (same compilation unit)
 */
u32 CFrogManEgg_sub_038e78(int a0, u32 a1, u32 a2, u32 a3) {
    u32 uVar1;

    CMothLine_sub_028afc(a0, a1, a2);
    uVar1 = 0;
    if (*(int *)(0x330 + a0) != 0) {
        uVar1 = (**(code **)(0xec + *(int *)(*(int *)(0x330 + a0) + 8)))(*(int *)(0x330 + a0), a1, 0, a3);
    }
    return uVar1;
}

/*
 * noop_038ec8  0x8c038ec8
 */
u32 noop_038ec8(void) {
    u32 in_r0;

    return in_r0;
}

/*
 * CFrogManEgg_sub_038ecc  0x8c038ecc
 * name hint from a string it uses: FROG EGG; area name: sits between CFrogManEgg functions (same compilation unit)
 * called by: game_sub_0c0444
 */
u32 CFrogManEgg_sub_038ecc(void) {
    int iVar1;

    for (iVar1 = 0; iVar1 < 1; iVar1 = iVar1 + 1) {
        *(u32 *)(iVar1 * 0x124 + 0x8c280050) = 0;
        *(u8 ***)(iVar1 * 0x124 + 0x8c280054) = &PTR_s_Tme_Birth_njm_8c1340ec;
        *(u8 ***)(iVar1 * 0x124 + 0x8c280058) = &PTR_s_Tme_Birth_njs_8c1340f0;
        *(u8 **)(iVar1 * 0x124 + 0x8c28005c) = PTR_s_Tm_Egg_nj_8c1340e4;
        *(u32 *)(iVar1 * 0x124 + 0x8c280060) = 0;
        *(u8 **)(iVar1 * 0x124 + 0x8c280064) = PTR_s_FROG_EGG_8c1340e8;
        *(u32 *)(iVar1 * 0x124 + 0x8c280068) = 0;
        *(u32 *)(iVar1 * 0x124 + 0x8c28006c) = 0;
        *(u32 *)(iVar1 * 0x124 + 0x8c2800f0) = 0x8c28019c;
        *(u16 *)(iVar1 * 0x124 + 0x8c2800f4) = 1;
        *(u32 *)(iVar1 * 0x124 + 0x8c2800f8) = 0x8c2801ac;
        *(u16 *)(iVar1 * 0x124 + 0x8c2800fc) = 1;
        *(u32 *)(iVar1 * 0x124 + 0x8c280104) = 0x8c28029c;
        *(u32 *)(iVar1 * 0x124 + 0x8c28010c) = 0x3f800000;
        *(u32 *)(iVar1 * 0x124 + 0x8c28011c) = 0x3ca3d70a;
        *(u32 *)(iVar1 * 0x124 + 0x8c280120) = 0x3f4ccccd;
        *(u32 *)(iVar1 * 0x124 + 0x8c280124) = 0x42c80000;
    }
    for (iVar1 = 0; iVar1 < 1; iVar1 = iVar1 + 1) {
        *(u16 *)(iVar1 * 0x10 + 0x8c280180) = 0xffff;
        *(u32 *)(iVar1 * 0x10 + 0x8c280184) = 1;
        *(u32 *)(iVar1 * 0x10 + 0x8c280188) = 0;
        *(u32 *)(iVar1 * 0x10 + 0x8c28018c) = 0;
    }
    return 1;
}

/*
 * CAnimal_m3_0390f4  0x8c0390f4
 */
u32 CAnimal_m3_0390f4(int a0, u32 a1, u32 a2, u32 a3) {
    u32 uVar1;

    uVar1 = (**(code **)(*(int *)(a0 + 8) + 0x10))(a0, a1, a2, a3);
    return uVar1;
}

/*
 * ret_const_1_03911c  0x8c03911c
 */
u32 ret_const_1_03911c(void) {
    return 1;
}

/*
 * CAnimal_sub_039124  0x8c039124
 * area name: sits between CAnimal functions (same compilation unit)
 */
u32 CAnimal_sub_039124(u32 unused_a0, u32 unused_a1, u32 a2, u32 a3) {
    u32 uVar1;
    code *pcVar2;
    u32 uVar3;
    u32 uVar4;
    code *pcVar5;
    char cVar6;

    cVar6 = '\0';
    uVar1 = Vec3_ctor_xyz(&g_8c125ce0, Vec3_ctor_xyz, a2, a3);
    uVar3 = 0x8c27df98;
    pcVar2 = Vec3_dtor;
    global_list_push(uVar1, Vec3_dtor, 0x8c27df98, a3);
    uVar1 = Vec3_ctor_xyz(&g_8c125cf0, pcVar2, uVar3, a3);
    pcVar2 = Vec3_dtor;
    global_list_push(uVar1, Vec3_dtor, 0x8c27dfa4, a3);
    uVar1 = Vec3_ctor_xyz(&g_8c125d00, pcVar2, Vec3_ctor_xyz, a3);
    pcVar2 = Vec3_dtor;
    global_list_push(uVar1, Vec3_dtor, 0x8c27dfb0, a3);
    uVar1 = Vec3_ctor_xyz(&g_8c125d10, pcVar2, Vec3_ctor_xyz, a3);
    global_list_push(uVar1, Vec3_dtor, 0x8c27dfbc, a3);
    if (cVar6 == '\0') {
        g_8c125d20 = CONCAT44(_UNK_8c125d24, 0x800000);
        /* WARNING: Read-only address (ram,0x8c125d24) is written */
    } else {
        g_8c125d20 = 0xffffffff00800000;
    }
    uVar1 = 0x124;
    vec_new_array(0x8c27dfd4, game_sub_02452c, game_sub_03a4ac, 0x124, 5);
    global_list_push(0, destroy_array_8c27dfd4, 0x8c27dfc8, uVar1);
    uVar1 = 0x10;
    vec_new_array(&g_8c27e594, game_sub_024824, free_if_nonnull_wrap_03a454, 0x10, 2);
    global_list_push(0, destroy_array_8c27e594, 0x8c27e588, uVar1);
    uVar1 = 4;
    vec_new_array(0x8c27e5c0, clear_field_0_wrap_015b94, free_if_nonnull_wrap_0247b0, 4, 0x18);
    global_list_push(0, destroy_array_8c27e5c0, 0x8c27e5b4, uVar1);
    uVar1 = 4;
    vec_new_array(0x8c27e62c, clear_field_0_wrap_015bc8, free_if_nonnull_wrap_03a3dc, 4, 0x18);
    global_list_push(0, destroy_array_8c27e62c, 0x8c27e620, uVar1);
    uVar1 = 4;
    vec_new_array(0x8c27e698, clear_field_0_wrap_015b94, free_if_nonnull_wrap_0247b0, 4, 0x16);
    global_list_push(0, destroy_array_8c27e698, 0x8c27e68c, uVar1);
    uVar1 = 4;
    vec_new_array(0x8c27e6fc, clear_field_0_wrap_015bc8, free_if_nonnull_wrap_03a3dc, 4, 0x16);
    global_list_push(0, destroy_array_8c27e6fc, 0x8c27e6f0, uVar1);
    uVar1 = 4;
    vec_new_array(0x8c27e760, clear_field_0_wrap_015b94, free_if_nonnull_wrap_0247b0, 4, 0x17);
    global_list_push(0, destroy_array_8c27e760, 0x8c27e754, uVar1);
    uVar1 = 4;
    vec_new_array(0x8c27e7c8, clear_field_0_wrap_015bc8, free_if_nonnull_wrap_03a3dc, 4, 0x17);
    global_list_push(0, destroy_array_8c27e7c8, 0x8c27e7bc, uVar1);
    uVar1 = 4;
    vec_new_array(0x8c27e830, clear_field_0_wrap_015b94, free_if_nonnull_wrap_0247b0, 4, 0x65);
    global_list_push(0, destroy_array_8c27e830, 0x8c27e824, uVar1);
    uVar1 = 4;
    vec_new_array(0x8c27e9d0, clear_field_0_wrap_015bc8, free_if_nonnull_wrap_03a3dc, 4, 0x65);
    global_list_push(0, destroy_array_8c27e9d0, 0x8c27e9c4, uVar1);
    uVar1 = 4;
    vec_new_array(0x8c27eb70, clear_field_0_wrap_015b94, free_if_nonnull_wrap_0247b0, 4, 0x65);
    global_list_push(0, destroy_array_8c27eb70, 0x8c27eb64, uVar1);
    uVar4 = 4;
    vec_new_array(0x8c27ed10, clear_field_0_wrap_015bc8, free_if_nonnull_wrap_03a3dc, 4, 0x65);
    uVar1 = 0x8c27ed04;
    global_list_push(0, destroy_array_8c27ed10, 0x8c27ed04, uVar4);
    uVar1 = Vec3_ctor_xyz(0x8c27f8d0, Vec3_ctor_xyz, uVar1, uVar4);
    uVar3 = 0x8c27f8c4;
    global_list_push(uVar1, Vec3_dtor, 0x8c27f8c4, uVar4);
    uVar1 = Vec3_ctor_xyz(0x8c27f8ec, Vec3_ctor_xyz, uVar3, uVar4);
    uVar3 = 0x8c27f8e0;
    global_list_push(uVar1, Vec3_dtor, 0x8c27f8e0, uVar4);
    uVar1 = Vec3_ctor_xyz(0x8c27f908, Vec3_ctor_xyz, uVar3, uVar4);
    uVar3 = 0x8c27f8fc;
    global_list_push(uVar1, Vec3_dtor, 0x8c27f8fc, uVar4);
    uVar1 = Vec3_ctor_xyz(0x8c27f924, Vec3_ctor_xyz, uVar3, uVar4);
    uVar3 = 0x8c27f918;
    global_list_push(uVar1, Vec3_dtor, 0x8c27f918, uVar4);
    uVar1 = Vec3_ctor_xyz(0x8c27f940, Vec3_ctor_xyz, uVar3, uVar4);
    uVar3 = 0x8c27f934;
    global_list_push(uVar1, Vec3_dtor, 0x8c27f934, uVar4);
    uVar1 = Vec3_ctor_xyz(0x8c27f95c, Vec3_ctor_xyz, uVar3, uVar4);
    uVar3 = 0x8c27f950;
    pcVar2 = Vec3_dtor;
    global_list_push(uVar1, Vec3_dtor, 0x8c27f950, uVar4);
    uVar1 = Vec3_ctor_xyz(0x8c27f978, pcVar2, uVar3, uVar4);
    pcVar2 = Vec3_dtor;
    global_list_push(uVar1, Vec3_dtor, 0x8c27f96c, uVar4);
    uVar1 = Vec3_ctor_xyz(0x8c27f994, pcVar2, Vec3_ctor_xyz, uVar4);
    uVar3 = 0x8c27f988;
    pcVar2 = Vec3_dtor;
    global_list_push(uVar1, Vec3_dtor, 0x8c27f988, uVar4);
    uVar1 = Vec3_ctor_xyz(0x8c27f9b0, pcVar2, uVar3, uVar4);
    uVar3 = 0x8c27f9a4;
    pcVar2 = Vec3_dtor;
    global_list_push(uVar1, Vec3_dtor, 0x8c27f9a4, uVar4);
    uVar1 = Vec3_ctor_xyz(0x8c27f9cc, pcVar2, uVar3, uVar4);
    uVar3 = 0x8c27f9c0;
    pcVar2 = Vec3_dtor;
    global_list_push(uVar1, Vec3_dtor, 0x8c27f9c0, uVar4);
    uVar1 = Vec3_ctor_xyz(0x8c27f9e8, pcVar2, uVar3, uVar4);
    uVar3 = 0x8c27f9dc;
    pcVar2 = Vec3_dtor;
    global_list_push(uVar1, Vec3_dtor, 0x8c27f9dc, uVar4);
    uVar1 = Vec3_ctor_xyz(0x8c27fa04, pcVar2, uVar3, uVar4);
    uVar3 = 0x8c27f9f8;
    pcVar2 = Vec3_dtor;
    global_list_push(uVar1, Vec3_dtor, 0x8c27f9f8, uVar4);
    uVar1 = Vec3_ctor_xyz(0x8c27fa20, pcVar2, uVar3, uVar4);
    uVar3 = 0x8c27fa14;
    global_list_push(uVar1, Vec3_dtor, 0x8c27fa14, uVar4);
    uVar1 = Vec3_ctor_xyz(0x8c27fa3c, Vec3_ctor_xyz, uVar3, uVar4);
    uVar3 = 0x8c27fa30;
    pcVar2 = Vec3_dtor;
    global_list_push(uVar1, Vec3_dtor, 0x8c27fa30, uVar4);
    uVar1 = Vec3_ctor_xyz(0x8c27fa58, pcVar2, uVar3, uVar4);
    pcVar2 = Vec3_dtor;
    global_list_push(uVar1, Vec3_dtor, 0x8c27fa4c, uVar4);
    uVar1 = Vec3_ctor_xyz(0x8c27fa74, pcVar2, Vec3_ctor_xyz, uVar4);
    pcVar2 = Vec3_dtor;
    global_list_push(uVar1, Vec3_dtor, 0x8c27fa68, uVar4);
    uVar1 = Vec3_ctor_xyz(0x8c27fa90, pcVar2, Vec3_ctor_xyz, uVar4);
    pcVar2 = Vec3_dtor;
    global_list_push(uVar1, Vec3_dtor, 0x8c27fa84, uVar4);
    uVar1 = Vec3_ctor_xyz(0x8c27faac, pcVar2, Vec3_ctor_xyz, uVar4);
    uVar3 = 0x8c27faa0;
    pcVar2 = Vec3_dtor;
    global_list_push(uVar1, Vec3_dtor, 0x8c27faa0, 0x8c27faa0);
    uVar1 = Vec3_ctor_xyz(0x8c27fac8, pcVar2, Vec3_ctor_xyz, uVar3);
    pcVar5 = global_list_push;
    global_list_push(uVar1, Vec3_dtor, 0x8c27fabc, global_list_push);
    uVar1 = Vec3_ctor_xyz(0x8c27fae4, Vec3_ctor_xyz, 0x8c27fae4, pcVar5);
    pcVar2 = Vec3_dtor;
    global_list_push(uVar1, Vec3_dtor, 0x8c27fad8, pcVar5);
    uVar1 = Vec3_ctor_xyz(0x8c27fb00, pcVar2, Vec3_ctor_xyz, pcVar5);
    global_list_push(uVar1, Vec3_dtor, 0x8c27faf4, uVar1);
    uVar1 = Vec3_ctor_xyz(0x8c27fb1c, Vec3_ctor_xyz, 0x8c27fb1c, uVar1);
    uVar3 = 0x8c27fb10;
    global_list_push(uVar1, Vec3_dtor, 0x8c27fb10, uVar1);
    uVar3 = Vec3_ctor_xyz(0x8c27fb38, 0x8c27fb38, uVar3, uVar1);
    uVar4 = 0x8c27fb2c;
    pcVar2 = Vec3_dtor;
    global_list_push(uVar3, Vec3_dtor, 0x8c27fb2c, uVar1);
    pcVar5 = Vec3_ctor_xyz;
    uVar1 = Vec3_ctor_xyz(0x8c27fb54, pcVar2, uVar4, Vec3_ctor_xyz);
    uVar3 = 0x8c27fb48;
    global_list_push(uVar1, Vec3_dtor, 0x8c27fb48, pcVar5);
    uVar1 = Vec3_ctor_xyz(0x8c27fb70, 0x8c27fb70, uVar3, pcVar5);
    uVar3 = 0x8c27fb64;
    pcVar5 = Vec3_dtor;
    pcVar2 = Vec3_dtor;
    global_list_push(uVar1, Vec3_dtor, 0x8c27fb64, Vec3_dtor);
    uVar1 = Vec3_ctor_xyz(0x8c27fb8c, pcVar2, uVar3, pcVar5);
    pcVar2 = Vec3_dtor;
    global_list_push(uVar1, Vec3_dtor, 0x8c27fb80, pcVar5);
    uVar4 = 0x8c27fba8;
    uVar1 = Vec3_ctor_xyz(0x8c27fba8, pcVar2, Vec3_ctor_xyz, 0x8c27fba8);
    uVar3 = 0x8c27fb9c;
    pcVar2 = Vec3_dtor;
    global_list_push(uVar1, Vec3_dtor, 0x8c27fb9c, uVar4);
    uVar1 = Vec3_ctor_xyz(0x8c27fbc4, pcVar2, uVar3, uVar4);
    uVar4 = 0x8c27fbb8;
    pcVar2 = Vec3_dtor;
    global_list_push(uVar1, Vec3_dtor, 0x8c27fbb8, 0x8c27fbb8);
    uVar1 = Vec3_ctor_xyz(0x8c27fbe0, pcVar2, Vec3_ctor_xyz, uVar4);
    uVar3 = 0x8c27fbd4;
    global_list_push(uVar1, Vec3_dtor, 0x8c27fbd4, uVar4);
    uVar1 = Vec3_ctor_xyz(0x8c27fbfc, Vec3_ctor_xyz, uVar3, uVar4);
    uVar3 = 0x8c27fbf0;
    pcVar2 = Vec3_dtor;
    global_list_push(uVar1, Vec3_dtor, 0x8c27fbf0, uVar4);
    uVar1 = Vec3_ctor_xyz(0x8c27fc18, pcVar2, uVar3, uVar4);
    global_list_push(uVar1, Vec3_dtor, 0x8c27fc0c, uVar1);
    uVar1 = Vec3_ctor_xyz(0x8c27fc34, Vec3_ctor_xyz, 0x8c27fc34, uVar1);
    uVar3 = 0x8c27fc28;
    global_list_push(uVar1, Vec3_dtor, 0x8c27fc28, uVar1);
    uVar3 = Vec3_ctor_xyz(0x8c27fc50, 0x8c27fc50, uVar3, uVar1);
    uVar4 = 0x8c27fc44;
    pcVar2 = Vec3_dtor;
    global_list_push(uVar3, Vec3_dtor, 0x8c27fc44, uVar1);
    pcVar5 = Vec3_ctor_xyz;
    uVar1 = Vec3_ctor_xyz(0x8c27fc6c, pcVar2, uVar4, Vec3_ctor_xyz);
    uVar3 = 0x8c27fc60;
    global_list_push(uVar1, Vec3_dtor, 0x8c27fc60, pcVar5);
    uVar1 = Vec3_ctor_xyz(0x8c27fc88, 0x8c27fc88, uVar3, pcVar5);
    uVar3 = 0x8c27fc7c;
    global_list_push(uVar1, Vec3_dtor, 0x8c27fc7c, pcVar5);
    uVar1 = Vec3_ctor_xyz(0x8c27fca4, 0x8c27fca4, uVar3, pcVar5);
    uVar3 = 0x8c27fc98;
    global_list_push(uVar1, Vec3_dtor, 0x8c27fc98, pcVar5);
    uVar1 = Vec3_ctor_xyz(0x8c27fcc0, 0x8c27fcc0, uVar3, pcVar5);
    uVar3 = 0x8c27fcb4;
    global_list_push(uVar1, Vec3_dtor, 0x8c27fcb4, pcVar5);
    uVar1 = Vec3_ctor_xyz(0x8c27fcdc, 0x8c27fcdc, uVar3, pcVar5);
    uVar3 = 0x8c27fcd0;
    global_list_push(uVar1, Vec3_dtor, 0x8c27fcd0, pcVar5);
    uVar1 = Vec3_ctor_xyz(0x8c27fcf8, 0x8c27fcf8, uVar3, pcVar5);
    uVar3 = 0x8c27fcec;
    global_list_push(uVar1, Vec3_dtor, 0x8c27fcec, pcVar5);
    uVar1 = Vec3_ctor_xyz(0x8c27fd14, 0x8c27fd14, uVar3, pcVar5);
    global_list_push(uVar1, Vec3_dtor, 0x8c27fd08, pcVar5);
    uVar3 = 0x8c27f908;
    uVar1 = Class_129938_ctor_init(0x8c27fd30, 0x8c27f8d0, 0x8c27f8ec, 0x8c27f908, 0x8c27f924, 0x8c27f940, 0x8c27f95c,
                                   0x8c27f978, 0x8c27f994);
    global_list_push(uVar1, Class_129938_dtor, 0x8c27fd24, uVar3);
    uVar3 = 0x8c27f9e8;
    uVar1 = Class_129938_ctor_init(0x8c27fdd0, 0x8c27f9b0, 0x8c27f9cc, 0x8c27f9e8, 0x8c27fa04, 0x8c27fa20, 0x8c27fa3c,
                                   0x8c27fa58, 0x8c27fa74);
    global_list_push(uVar1, Class_129938_dtor, 0x8c27fdc4, uVar3);
    uVar3 = 0x8c27fac8;
    uVar1 = Class_129938_ctor_init(0x8c27fe70, 0x8c27fa90, 0x8c27faac, 0x8c27fac8, 0x8c27fae4, 0x8c27fb00, 0x8c27fb1c,
                                   0x8c27fb38, 0x8c27fb54);
    global_list_push(uVar1, Class_129938_dtor, 0x8c27fe64, uVar3);
    uVar3 = 0x8c27fba8;
    uVar1 = Class_129938_ctor_init(0x8c27ff10, 0x8c27fb70, 0x8c27fb8c, 0x8c27fba8, 0x8c27fbc4, 0x8c27fbe0, 0x8c27fbfc,
                                   0x8c27fc18, 0x8c27fc34);
    global_list_push(uVar1, Class_129938_dtor, 0x8c27ff04, uVar3);
    uVar4 = 0x8c27fc88;
    uVar1 = Class_129938_ctor_init(0x8c27ffb0, 0x8c27fc50, 0x8c27fc6c, 0x8c27fc88, 0x8c27fca4, 0x8c27fcc0, 0x8c27fcdc,
                                   0x8c27fcf8, 0x8c27fd14);
    uVar3 = 0x8c27ffa4;
    pcVar2 = Class_129938_dtor;
    global_list_push(uVar1, Class_129938_dtor, 0x8c27ffa4, uVar4);
    uVar1 = game_sub_02452c(0x8c280050, pcVar2);
    uVar3 = 0x8c280044;
    pcVar2 = game_sub_03a4ac;
    global_list_push(uVar1, game_sub_03a4ac, 0x8c280044, uVar4);
    uVar1 = game_sub_024824(0x8c280180);
    uVar3 = 0x8c280174;
    pcVar2 = free_if_nonnull_wrap_03a454;
    global_list_push(uVar1, free_if_nonnull_wrap_03a454, 0x8c280174, uVar1);
    uVar3 = clear_field_0_wrap_015b94(0x8c28019c, pcVar2);
    uVar4 = 0x8c280190;
    pcVar2 = free_if_nonnull_wrap_0247b0;
    global_list_push(uVar3, free_if_nonnull_wrap_0247b0, 0x8c280190, uVar1);
    pcVar5 = clear_field_0_wrap_015bc8;
    uVar1 = clear_field_0_wrap_015bc8(0x8c2801ac);
    uVar3 = 0x8c2801a0;
    pcVar2 = free_if_nonnull_wrap_03a3dc;
    global_list_push(uVar1, free_if_nonnull_wrap_03a3dc, 0x8c2801a0, pcVar5);
    uVar1 = Vec3_ctor_xyz(0x8c2801bc, pcVar2, uVar3, pcVar5);
    uVar3 = 0x8c2801b0;
    pcVar5 = Vec3_dtor;
    pcVar2 = Vec3_dtor;
    global_list_push(uVar1, Vec3_dtor, 0x8c2801b0, Vec3_dtor);
    uVar1 = Vec3_ctor_xyz(0x8c2801d8, pcVar2, uVar3, pcVar5);
    uVar3 = 0x8c2801cc;
    pcVar2 = Vec3_dtor;
    global_list_push(uVar1, Vec3_dtor, 0x8c2801cc, pcVar5);
    uVar4 = 0x8c2801f4;
    uVar1 = Vec3_ctor_xyz(0x8c2801f4, pcVar2, uVar3, 0x8c2801f4);
    uVar3 = 0x8c2801e8;
    pcVar2 = Vec3_dtor;
    global_list_push(uVar1, Vec3_dtor, 0x8c2801e8, uVar4);
    uVar1 = Vec3_ctor_xyz(0x8c280210, pcVar2, uVar3, uVar4);
    uVar4 = 0x8c280204;
    uVar3 = 0x8c280204;
    pcVar2 = Vec3_dtor;
    global_list_push(uVar1, Vec3_dtor, 0x8c280204, 0x8c280204);
    uVar1 = Vec3_ctor_xyz(0x8c28022c, pcVar2, uVar3, uVar4);
    uVar3 = 0x8c280220;
    pcVar2 = Vec3_dtor;
    pcVar5 = global_list_push;
    global_list_push(uVar1, Vec3_dtor, 0x8c280220, global_list_push);
    uVar1 = Vec3_ctor_xyz(0x8c280248, pcVar2, uVar3, pcVar5);
    uVar3 = 0x8c28023c;
    pcVar2 = Vec3_dtor;
    global_list_push(uVar1, Vec3_dtor, 0x8c28023c, pcVar5);
    uVar1 = Vec3_ctor_xyz(0x8c280264, pcVar2, uVar3, pcVar5);
    uVar3 = 0x8c280258;
    pcVar2 = Vec3_dtor;
    global_list_push(uVar1, Vec3_dtor, 0x8c280258, uVar1);
    uVar1 = Vec3_ctor_xyz(0x8c280280, pcVar2, uVar3, uVar1);
    global_list_push(uVar1, Vec3_dtor, 0x8c280274, uVar1);
    uVar3 = 0x8c2801f4;
    uVar1 = Class_129938_ctor_init(0x8c28029c, 0x8c2801bc, 0x8c2801d8, 0x8c2801f4, 0x8c280210, 0x8c28022c, 0x8c280248,
                                   0x8c280264, 0x8c280280);
    uVar1 = global_list_push(uVar1, Class_129938_dtor, 0x8c280290, uVar3);
    return uVar1;
}

/*
 * destroy_array_8c27ed10  0x8c03a298
 * destroys the global array at 0x8c27ed10
 */
u32 destroy_array_8c27ed10(void) {
    u32 uVar1;

    uVar1 = vec_delete_array(0x8c27ed10, free_if_nonnull_wrap_03a3dc, 4, 0x65);
    return uVar1;
}

/*
 * destroy_array_8c27eb70  0x8c03a2bc
 * destroys the global array at 0x8c27eb70
 */
u32 destroy_array_8c27eb70(void) {
    u32 uVar1;

    uVar1 = vec_delete_array(0x8c27eb70, free_if_nonnull_wrap_0247b0, 4, 0x65);
    return uVar1;
}

/*
 * destroy_array_8c27e9d0  0x8c03a2e0
 * destroys the global array at 0x8c27e9d0
 */
u32 destroy_array_8c27e9d0(void) {
    u32 uVar1;

    uVar1 = vec_delete_array(0x8c27e9d0, free_if_nonnull_wrap_03a3dc, 4, 0x65);
    return uVar1;
}

/*
 * destroy_array_8c27e830  0x8c03a304
 * destroys the global array at 0x8c27e830
 */
u32 destroy_array_8c27e830(void) {
    u32 uVar1;

    uVar1 = vec_delete_array(0x8c27e830, free_if_nonnull_wrap_0247b0, 4, 0x65);
    return uVar1;
}

/*
 * destroy_array_8c27e7c8  0x8c03a328
 * destroys the global array at 0x8c27e7c8
 */
u32 destroy_array_8c27e7c8(void) {
    u32 uVar1;

    uVar1 = vec_delete_array(0x8c27e7c8, free_if_nonnull_wrap_03a3dc, 4, 0x17);
    return uVar1;
}

/*
 * destroy_array_8c27e760  0x8c03a34c
 * destroys the global array at 0x8c27e760
 */
u32 destroy_array_8c27e760(void) {
    u32 uVar1;

    uVar1 = vec_delete_array(0x8c27e760, free_if_nonnull_wrap_0247b0, 4, 0x17);
    return uVar1;
}

/*
 * destroy_array_8c27e6fc  0x8c03a370
 * destroys the global array at 0x8c27e6fc
 */
u32 destroy_array_8c27e6fc(void) {
    u32 uVar1;

    uVar1 = vec_delete_array(0x8c27e6fc, free_if_nonnull_wrap_03a3dc, 4, 0x16);
    return uVar1;
}

/*
 * destroy_array_8c27e698  0x8c03a394
 * destroys the global array at 0x8c27e698
 */
u32 destroy_array_8c27e698(void) {
    u32 uVar1;

    uVar1 = vec_delete_array(0x8c27e698, free_if_nonnull_wrap_0247b0, 4, 0x16);
    return uVar1;
}

/*
 * destroy_array_8c27e62c  0x8c03a3b8
 * destroys the global array at 0x8c27e62c
 */
u32 destroy_array_8c27e62c(void) {
    u32 uVar1;

    uVar1 = vec_delete_array(0x8c27e62c, free_if_nonnull_wrap_03a3dc, 4, 0x18);
    return uVar1;
}

/*
 * free_if_nonnull_wrap_03a3dc  0x8c03a3dc
 * called by: Class_12a5d0_m0_08a3a4
 */
int free_if_nonnull_wrap_03a3dc(int a0, u32 a1, u32 a2, u32 a3) {
    u32 in_stack_fffffff4;

    if ((a0 != 0) && (0 < (short)a1)) {
        free_if_nonnull(a0, a1, a2, a3, CONCAT22((short)((u32)in_stack_fffffff4 >> 0x10), (short)a1));
    }
    return a0;
}

/*
 * destroy_array_8c27e5c0  0x8c03a40c
 * destroys the global array at 0x8c27e5c0
 */
u32 destroy_array_8c27e5c0(void) {
    u32 uVar1;

    uVar1 = vec_delete_array(0x8c27e5c0, free_if_nonnull_wrap_0247b0, 4, 0x18);
    return uVar1;
}

/*
 * destroy_array_8c27e594  0x8c03a430
 * destroys the global array at 0x8c27e594
 */
u32 destroy_array_8c27e594(void) {
    u32 uVar1;

    uVar1 = vec_delete_array(&g_8c27e594, free_if_nonnull_wrap_03a454, 0x10, 2);
    return uVar1;
}

/*
 * free_if_nonnull_wrap_03a454  0x8c03a454
 */
int free_if_nonnull_wrap_03a454(int a0, u32 a1, u32 a2, u32 a3) {
    u32 in_stack_fffffff4;

    if ((a0 != 0) && (0 < (short)a1)) {
        free_if_nonnull(a0, a1, a2, a3, CONCAT22((short)((u32)in_stack_fffffff4 >> 0x10), (short)a1));
    }
    return a0;
}

/*
 * destroy_array_8c27dfd4  0x8c03a484
 * destroys the global array at 0x8c27dfd4
 */
u32 destroy_array_8c27dfd4(void) {
    u32 uVar1;

    uVar1 = vec_delete_array(0x8c27dfd4, game_sub_03a4ac, 0x124, 5);
    return uVar1;
}

/*
 * game_sub_03a4ac  0x8c03a4ac
 * area name: game code; nothing names its area yet
 */
int game_sub_03a4ac(int a0, u32 a1, u32 a2, u32 a3) {
    u32 uVar1;
    u32 uVar2;
    u32 in_stack_fffffff4;
    u32 ain0;

    ain0 = CONCAT22((short)((u32)in_stack_fffffff4 >> 0x10), (u16)a1);
    if (a0 != 0) {
        game_sub_024758(a0 + 0xf8, 0xffffffff, a2, a3);
        Vec3_dtor(a0 + 0xd8, 0xffffffff, a2, a3);
        free_if_nonnull_wrap_0247b0(a0 + 0xb0, 0xffffffff, a2, a3);
        Class_129920_dtor(a0 + 0x98, 0xffffffff, a2, a3);
        vec_delete_array(a0 + 0x88, Class_129920_dtor, 8, 2);
        uVar2 = 2;
        uVar1 = 8;
        vec_delete_array(a0 + 0x78, Class_129920_dtor, 8, 2);
        free_if_nonnull_wrap_016bfc(a0 + 0x74, 0xffffffff, uVar1, uVar2);
        vec_delete_array(a0 + 0x70, free_if_nonnull_wrap_016bfc, 4, 1);
        vec_delete_array(a0 + 0x48, free_if_nonnull_wrap_0247e0, 0x14, 2);
        uVar2 = 2;
        uVar1 = 0x14;
        vec_delete_array(a0 + 0x20, free_if_nonnull_wrap_0247e0, 0x14, 2);
        if (0 < (short)ain0) {
            free_if_nonnull(a0);
        }
    }
    return a0;
}

/*
 * game_sub_03a5a4  0x8c03a5a4
 * area name: game code; nothing names its area yet
 * called by: CAnimal_sub_036260
 */
u32 *game_sub_03a5a4(u32 *a0, u32 a1, u32 a2, u32 a3) {
    Class_129cbc_ctor(a0, a1, a2, a3);
    *a0 = (&DATA_8c12a03c);
    Vec3_ctor_zero((int)a0 + 0x248, a1, a2);
    Vec3_ctor_zero((int)a0 + 0x258, a1, a2);
    Vec3_ctor_zero((int)a0 + 0x268, a1, a2);
    Vec3_ctor_zero((int)a0 + 0x2a8, a1, a2);
    Vec3_set_zero((int)a0 + 0x2c8);
    Vec3_ctor_zero((int)a0 + 0x2d4, a1, a2);
    Vec3_ctor_zero((int)a0 + 0x308, a1, a2);
    Vec3_ctor_zero((int)a0 + 0x34c, a1, a2);
    Class_12a03c_sub_03c100(a0, a1, a2, a3);
    return a0;
}

/*
 * Class_12a03c_m6_03a65c  0x8c03a65c
 */
u64 *Class_12a03c_m6_03a65c(int a0, int a1) {
    u64 *puVar1;
    u32 uVar2;
    int *piVar3;
    int *piVar4;
    int iVar5;
    u32 uVar6;
    u32 *puVar7;
    u32 uVar8;
    code *pcVar9;
    u8 *puVar10;
    u32 *ar7_00;
    u32 uVar11;
    int ar7_01;
    u32 extraout_fr1;
    char cVar12;
    u32 uStack_3c;
    u32 uStack_24;
    u32 uStack_20;
    u32 uStack_14;

    cVar12 = '\0';
    ar7_00 = &uStack_24;
    uStack_24 = g_8c1364c8;
    uStack_20 = g_8c1364cc;
    uStack_14 = g_8c1364d8;
    puVar7 = &g_8c1364e0;
    uStack_3c = g_8c1364e0;
    *(int *)(a0 + 0x128) = a1;
    iVar5 = a1 * 0x18 + 0x8c2803f4;
    copy6_to_fields(a0, iVar5, &g_8c1364e0, ar7_00);
    Class_12a03c_sub_03c100(a0, iVar5, puVar7, ar7_00);
    iVar5 = (int)g_8c280470;
    if (g_8c280470 == '\0') {
        g_8c28046c = 0;
        g_8c280470 = '\x01';
    }
    if (1 < g_8c28046c) {
        g_8c28046c = 0;
    }
    Vec3_assign(a0 + 0x34c, g_8c28046c * 0x10 + 0x8c2803d4, 0x8c2803d4, iVar5);
    g_8c28046c = g_8c28046c + 1;
    puVar1 = (u64 *)(a0 + 0x7c);
    if (cVar12 == '\0') {
        *(u32 *)puVar1 = 0;
    } else {
        *puVar1 = (u64)extraout_fr1;
    }
    uVar6 = g_8c13655c;
    uVar2 = g_8c136544;
    uVar8 = 4;
    if ((a1 < 5) && (-1 < a1)) {
        switch (a1) {
        case 0:
            uVar6 = 10;
            uVar2 = array_at_field_14(a0 + 0xb0, 10, 4, iVar5);
            piVar3 = (int *)deref_u32(uVar2);
            if (*(int *)(*piVar3 + 0x18) != 0) {
                uVar6 = 10;
                iVar5 = a0 + 0xb0;
                pcVar9 = array_at_field_14;
                uVar2 = array_at_field_14(iVar5, 10, array_at_field_14, iVar5);
                uVar2 = deref_u32(uVar2);
                uVar6 = 1;
                puVar7 = &uStack_24;
                record18_take(a0 + 0xb0, uVar2, puVar7, 1);
                uVar2 = array_at_field_14(a0 + 0xb0, 0x14, puVar7, uVar6);
                uVar2 = deref_u32(uVar2);
                record18_take(a0 + 0xb0, uVar2, &g_8c1362f4, 1);
            }
            uVar2 = g_8c1364fc;
            *(u32 *)(a0 + 0x22c) = g_8c1364f8;
            *(u32 *)(a0 + 0x230) = uVar2;
            *(u8 **)(a0 + 0x234) = PTR_FUN_8c136500;
            uVar2 = g_8c136508;
            puVar1 = (u64 *)(a0 + 0x238);
            *(u32 *)puVar1 = g_8c136504;
            *(u32 *)(a0 + 0x23c) = uVar2;
            *(u8 **)(a0 + 0x240) = PTR_FUN_8c13650c;
            break;
        case 1:
            uVar6 = 7;
            uVar2 = array_at_field_14(a0 + 0xb0, 7, 4, iVar5);
            piVar3 = (int *)deref_u32(uVar2);
            if (*(int *)(*piVar3 + 0x1c) != 0) {
                uVar6 = 7;
                pcVar9 = array_at_field_14;
                uVar2 = array_at_field_14(a0 + 0xb0, 7, array_at_field_14, iVar5);
                uVar2 = deref_u32(uVar2);
                uVar8 = 1;
                puVar10 = &g_8c13630c;
                record18_take(a0 + 0xb0, uVar2, &g_8c13630c, 1);
                uVar6 = 8;
                uVar2 = array_at_field_14(a0 + 0xb0, 8, puVar10, uVar8);
                uVar2 = deref_u32(uVar2);
                puVar10 = &g_8c136324;
                record18_take(a0 + 0xb0, uVar2, &g_8c136324, 1);
                pcVar9 = array_at_field_14;
                uVar2 = array_at_field_14(a0 + 0xb0, 5, puVar10, array_at_field_14);
                uVar2 = deref_u32(uVar2);
                uVar8 = 1;
                puVar7 = &uStack_24;
                record18_take(a0 + 0xb0, uVar2, puVar7, 1);
                uVar6 = 5;
                uVar2 = array_at_field_14(a0 + 0xb0, 5, puVar7, uVar8);
                pcVar9 = deref_u32;
                piVar3 = (int *)deref_u32(uVar2);
                *(u32 *)(*piVar3 + 0x1c) = uStack_20;
                uVar6 = 5;
                uVar2 = array_at_field_14(a0 + 0xb0, 5, pcVar9, uVar8);
                pcVar9 = deref_u32;
                piVar3 = (int *)deref_u32(uVar2);
                *(u32 *)(*piVar3 + 0x28) = uStack_14;
                uVar6 = 0x14;
                uVar2 = array_at_field_14(a0 + 0xb0, 0x14, pcVar9, uVar8);
                uVar2 = deref_u32(uVar2);
                record18_take(a0 + 0xb0, uVar2, &g_8c13633c, 1);
            }
            uVar2 = g_8c136514;
            *(u32 *)(a0 + 0x22c) = g_8c136510;
            *(u32 *)(a0 + 0x230) = uVar2;
            *(u8 **)(a0 + 0x234) = PTR_FUN_8c136518;
            uVar2 = g_8c136520;
            *(u32 *)(a0 + 0x238) = g_8c13651c;
            *(u32 *)(a0 + 0x23c) = uVar2;
            puVar1 = (u64 *)PTR_FUN_8c136524;
            *(u8 **)(a0 + 0x240) = PTR_FUN_8c136524;
            break;
        case 2:
            uVar6 = 7;
            uVar2 = array_at_field_14(a0 + 0xb0, 7, 4, iVar5);
            piVar3 = (int *)deref_u32(uVar2);
            if (*(int *)(*piVar3 + 0x1c) != 0) {
                uVar6 = 7;
                uVar2 = array_at_field_14(a0 + 0xb0, 7, uVar8, iVar5);
                uVar2 = deref_u32(uVar2);
                uVar8 = 1;
                puVar10 = &g_8c136354;
                record18_take(a0 + 0xb0, uVar2, &g_8c136354, 1);
                uVar6 = 8;
                uVar2 = array_at_field_14(a0 + 0xb0, 8, puVar10, uVar8);
                uVar2 = deref_u32(uVar2);
                uVar8 = 1;
                record18_take(a0 + 0xb0, uVar2, &g_8c13636c, 1);
                uVar6 = 0x15;
                pcVar9 = array_at_field_14;
                uVar2 = array_at_field_14(a0 + 0xb0, 0x15, array_at_field_14, uVar8);
                uVar2 = deref_u32(uVar2);
                record18_take(a0 + 0xb0, uVar2, &g_8c136384, 1);
            }
            uVar2 = g_8c13652c;
            *(u32 *)(a0 + 0x22c) = g_8c136528;
            *(u32 *)(a0 + 0x230) = uVar2;
            *(u8 **)(a0 + 0x234) = PTR_FUN_8c136530;
            puVar1 = g_8c136538;
            *(u32 *)(a0 + 0x238) = g_8c136534;
            *(u64 **)(a0 + 0x23c) = puVar1;
            *(u8 **)(a0 + 0x240) = PTR_FUN_8c13653c;
            break;
        case 3:
            *(u32 *)(a0 + 0x22c) = g_8c136540;
            *(u32 *)(a0 + 0x230) = uVar2;
            *(u8 **)(a0 + 0x234) = PTR_FUN_8c136548;
            uVar2 = g_8c136550;
            *(u32 *)(a0 + 0x238) = g_8c13654c;
            *(u32 *)(a0 + 0x23c) = uVar2;
            *(u8 **)(a0 + 0x240) = PTR_FUN_8c136554;
            uVar6 = 0x41;
            pcVar9 = array_at_field_14;
            uVar2 = array_at_field_14(a0 + 0xb0, 0x41, array_at_field_14, iVar5);
            piVar3 = (int *)deref_u32(uVar2);
            if (*(int *)(*piVar3 + 4) == 0) {
                puVar1 = NULL;
            } else {
                uVar6 = 0x41;
                uVar2 = array_at_field_14(a0 + 0xb0, 0x41, *piVar3, iVar5);
                uVar2 = deref_u32(uVar2);
                record18_take(a0 + 0xb0, uVar2, &g_8c135ebc, 0);
                uVar6 = 0x44;
                uVar8 = 0xb0;
                uVar2 = array_at_field_14(a0 + 0xb0, 0x44, 0xb0, 0x44);
                uVar2 = deref_u32(uVar2);
                uVar6 = 0;
                puVar10 = &g_8c135f04;
                record18_take(a0 + 0xb0, uVar2, &g_8c135f04, 0);
                uVar2 = array_at_field_14(a0 + 0xb0, 0x42, puVar10, uVar6);
                uVar2 = deref_u32(uVar2);
                record18_take(a0 + 0xb0, uVar2, &g_8c135ed4, 0);
                uVar8 = 0x45;
                uVar6 = 0xb0;
                uVar2 = array_at_field_14(a0 + 0xb0, 0x45, 0xb0, 0x45);
                uVar2 = deref_u32(uVar2);
                uVar8 = 0;
                puVar10 = &g_8c135f1c;
                record18_take(a0 + 0xb0, uVar2, &g_8c135f1c, 0);
                uVar6 = 0x43;
                uVar2 = array_at_field_14(a0 + 0xb0, 0x43, puVar10, uVar8);
                uVar2 = deref_u32(uVar2);
                uVar8 = 0;
                puVar10 = &g_8c135eec;
                record18_take(a0 + 0xb0, uVar2, &g_8c135eec, 0);
                uVar6 = 0x46;
                uVar2 = array_at_field_14(a0 + 0xb0, 0x46, puVar10, uVar8);
                uVar2 = deref_u32(uVar2);
                uVar8 = 0;
                puVar10 = &g_8c135f34;
                record18_take(a0 + 0xb0, uVar2, &g_8c135f34, 0);
                uVar6 = 7;
                uVar2 = array_at_field_14(a0 + 0xb0, 7, puVar10, uVar8);
                uVar2 = deref_u32(uVar2);
                uVar8 = 1;
                puVar10 = &g_8c135fdc;
                record18_take(a0 + 0xb0, uVar2, &g_8c135fdc, 1);
                uVar6 = 8;
                uVar2 = array_at_field_14(a0 + 0xb0, 8, puVar10, uVar8);
                uVar2 = deref_u32(uVar2);
                uVar8 = 1;
                puVar10 = &g_8c135ff4;
                record18_take(a0 + 0xb0, uVar2, &g_8c135ff4, 1);
                uVar6 = 0x4a;
                uVar2 = array_at_field_14(a0 + 0xb0, 0x4a, puVar10, uVar8);
                uVar2 = deref_u32(uVar2);
                uVar8 = 1;
                puVar7 = &g_8c135f64;
                record18_take(a0 + 0xb0, uVar2, &g_8c135f64, 1);
                uVar6 = 0x4a;
                uVar2 = array_at_field_14(a0 + 0xb0, 0x4a, puVar7, uVar8);
                pcVar9 = deref_u32;
                piVar3 = (int *)deref_u32(uVar2);
                *(u32 *)(*piVar3 + 0x1c) = g_8c135f68;
                uVar8 = 0x4a;
                uVar6 = array_at_field_14(a0 + 0xb0, 0x4a, pcVar9, uVar2);
                piVar3 = (int *)deref_u32(uVar6);
                iVar5 = *piVar3;
                *(u32 *)(iVar5 + 0x28) = g_8c135f74;
                uVar8 = 0x48;
                uVar6 = array_at_field_14(a0 + 0xb0, 0x48, iVar5, uVar2);
                uVar2 = deref_u32(uVar6);
                uVar8 = 0;
                puVar7 = &g_8c135f94;
                record18_take(a0 + 0xb0, uVar2, &g_8c135f94, 0);
                uVar6 = 0x48;
                uVar2 = array_at_field_14(a0 + 0xb0, 0x48, puVar7, uVar8);
                uVar2 = deref_u32(uVar2);
                uVar8 = 1;
                puVar7 = &g_8c135f7c;
                record18_take(a0 + 0xb0, uVar2, &g_8c135f7c, 1);
                uVar6 = 0x48;
                uVar2 = array_at_field_14(a0 + 0xb0, 0x48, puVar7, uVar8);
                piVar3 = (int *)deref_u32(uVar2);
                *(u32 *)(*piVar3 + 0x1c) = g_8c135f98;
                uVar8 = 0x48;
                iVar5 = a0 + 0xb0;
                uVar6 = array_at_field_14(iVar5, 0x48, iVar5, uVar2);
                piVar3 = (int *)deref_u32(uVar6);
                *(u32 *)(*piVar3 + 0x28) = g_8c135fa4;
                uVar6 = array_at_field_14(a0 + 0xb0, 0x18, iVar5, uVar2);
                uVar2 = deref_u32(uVar6);
                uVar8 = 1;
                puVar10 = &g_8c135fc4;
                record18_take(a0 + 0xb0, uVar2, &g_8c135fc4, 1);
                uVar6 = 0x19;
                uVar2 = array_at_field_14(a0 + 0xb0, 0x19, puVar10, uVar8);
                uVar2 = deref_u32(uVar2);
                uVar8 = 1;
                record18_take(a0 + 0xb0, uVar2, &uStack_24, 1);
                uVar6 = 0x12;
                uVar2 = array_at_field_14(a0 + 0xb0, 0x12, 0x12, uVar8);
                uVar2 = deref_u32(uVar2);
                uVar11 = 0;
                record18_take(a0 + 0xb0, uVar2, &g_8c135fac, 0);
                uVar8 = 99;
                uVar6 = 99;
                uVar2 = array_at_field_14(a0 + 0xb0, 99, 99, uVar11);
                uVar2 = deref_u32(uVar2);
                puVar1 = (u64 *)record18_take(a0 + 0xb0, uVar2, &uStack_3c, 1);
            }
            break;
        case 4:
            *(u32 *)(a0 + 0x238) = g_8c136558;
            *(u32 *)(a0 + 0x23c) = uVar6;
            *(u8 **)(a0 + 0x240) = PTR_FUN_8c136560;
            uVar2 = g_8c136568;
            *(u32 *)(a0 + 0x22c) = g_8c136564;
            *(u32 *)(a0 + 0x230) = uVar2;
            *(u8 **)(a0 + 0x234) = PTR_FUN_8c13656c;
            uVar6 = 0x41;
            iVar5 = a0 + 0xb0;
            pcVar9 = array_at_field_14;
            uVar2 = array_at_field_14(iVar5, 0x41, array_at_field_14, iVar5);
            piVar3 = (int *)deref_u32(uVar2);
            if (*(int *)(*piVar3 + 4) == 0) {
                puVar1 = NULL;
            } else {
                uVar8 = 0x41;
                uVar6 = 0xb0;
                uVar2 = array_at_field_14(a0 + 0xb0, 0x41, 0xb0, 0x41);
                uVar2 = deref_u32(uVar2);
                uVar8 = 0;
                puVar10 = &g_8c13600c;
                record18_take(a0 + 0xb0, uVar2, &g_8c13600c, 0);
                uVar6 = 0x44;
                uVar2 = array_at_field_14(a0 + 0xb0, 0x44, puVar10, uVar8);
                uVar2 = deref_u32(uVar2);
                uVar8 = 0;
                puVar10 = &g_8c136054;
                record18_take(a0 + 0xb0, uVar2, &g_8c136054, 0);
                uVar6 = 0x42;
                uVar2 = array_at_field_14(a0 + 0xb0, 0x42, puVar10, uVar8);
                uVar2 = deref_u32(uVar2);
                uVar8 = 0;
                puVar10 = &g_8c136024;
                record18_take(a0 + 0xb0, uVar2, &g_8c136024, 0);
                uVar6 = 0x45;
                uVar2 = array_at_field_14(a0 + 0xb0, 0x45, puVar10, uVar8);
                uVar2 = deref_u32(uVar2);
                uVar8 = 0;
                puVar10 = &g_8c13606c;
                record18_take(a0 + 0xb0, uVar2, &g_8c13606c, 0);
                uVar6 = 0x43;
                uVar2 = array_at_field_14(a0 + 0xb0, 0x43, puVar10, uVar8);
                uVar2 = deref_u32(uVar2);
                uVar8 = 0;
                puVar10 = &g_8c13603c;
                record18_take(a0 + 0xb0, uVar2, &g_8c13603c, 0);
                uVar6 = 0x46;
                uVar2 = array_at_field_14(a0 + 0xb0, 0x46, puVar10, uVar8);
                uVar2 = deref_u32(uVar2);
                uVar6 = 0;
                puVar10 = &g_8c136084;
                record18_take(a0 + 0xb0, uVar2, &g_8c136084, 0);
                uVar2 = array_at_field_14(a0 + 0xb0, 7, puVar10, uVar6);
                uVar2 = deref_u32(uVar2);
                uVar8 = 1;
                puVar10 = &g_8c1362c4;
                record18_take(a0 + 0xb0, uVar2, &g_8c1362c4, 1);
                uVar6 = 8;
                uVar2 = array_at_field_14(a0 + 0xb0, 8, puVar10, uVar8);
                uVar2 = deref_u32(uVar2);
                uVar8 = 1;
                puVar10 = &g_8c1362dc;
                record18_take(a0 + 0xb0, uVar2, &g_8c1362dc, 1);
                uVar6 = 0x18;
                uVar2 = array_at_field_14(a0 + 0xb0, 0x18, puVar10, uVar8);
                uVar2 = deref_u32(uVar2);
                uVar8 = 1;
                record18_take(a0 + 0xb0, uVar2, &g_8c136264, 1);
                uVar6 = 0x19;
                uVar2 = array_at_field_14(a0 + 0xb0, 0x19, 0x19, uVar8);
                uVar2 = deref_u32(uVar2);
                record18_take(a0 + 0xb0, uVar2, &uStack_24, 1);
                uVar11 = 0x4a;
                uVar6 = 0x4a;
                uVar8 = 0xb0;
                uVar2 = array_at_field_14(a0 + 0xb0, 0x4a, 0xb0, 0x4a);
                uVar2 = deref_u32(uVar2);
                uVar8 = 1;
                puVar10 = &g_8c136204;
                record18_take(a0 + 0xb0, uVar2, &g_8c136204, 1);
                uVar6 = 0x4a;
                uVar2 = array_at_field_14(a0 + 0xb0, 0x4a, puVar10, uVar8);
                piVar3 = (int *)deref_u32(uVar2);
                *(u32 *)(*piVar3 + 0x1c) = g_8c136208;
                uVar6 = 0x4a;
                uVar8 = 0xb0;
                iVar5 = a0 + 0xb0;
                uVar2 = array_at_field_14(iVar5, 0x4a, iVar5, 0xb0);
                piVar3 = (int *)deref_u32(uVar2);
                *(u32 *)(*piVar3 + 0x28) = g_8c136214;
                uVar6 = 0x48;
                uVar2 = array_at_field_14(a0 + 0xb0, 0x48, iVar5, uVar8);
                uVar2 = deref_u32(uVar2);
                uVar11 = 0;
                record18_take(a0 + 0xb0, uVar2, &g_8c136234, 0);
                uVar6 = 0x48;
                uVar8 = 0xb0;
                uVar2 = array_at_field_14(a0 + 0xb0, 0x48, 0xb0, uVar11);
                uVar2 = deref_u32(uVar2);
                puVar10 = &g_8c13621c;
                record18_take(a0 + 0xb0, uVar2, &g_8c13621c, 1);
                uVar6 = 0x48;
                pcVar9 = array_at_field_14;
                uVar2 = array_at_field_14(a0 + 0xb0, 0x48, puVar10, array_at_field_14);
                piVar3 = (int *)deref_u32(uVar2);
                iVar5 = *piVar3;
                puVar10 = &g_8c136234;
                *(u32 *)(iVar5 + 0x1c) = g_8c136238;
                uVar6 = 0x48;
                uVar2 = array_at_field_14(a0 + 0xb0, 0x48, &g_8c136234, iVar5);
                piVar3 = (int *)deref_u32(uVar2);
                uVar2 = g_8c136244;
                *(u32 *)(*piVar3 + 0x28) = g_8c136244;
                uVar11 = 0x50;
                uVar8 = 0x50;
                uVar6 = array_at_field_14(a0 + 0xb0, 0x50, 0x50, uVar2);
                uVar2 = deref_u32(uVar6);
                puVar10 = &g_8c13612c;
                record18_take(a0 + 0xb0, uVar2, &g_8c13612c, 1);
                uVar6 = 0x50;
                iVar5 = a0 + 0xb0;
                uVar2 = array_at_field_14(iVar5, 0x50, puVar10, iVar5);
                piVar3 = (int *)deref_u32(uVar2);
                *(u32 *)(*piVar3 + 0x1c) = g_8c136130;
                uVar6 = 0x50;
                uVar2 = array_at_field_14(a0 + 0xb0, 0x50, puVar10, iVar5);
                piVar3 = (int *)deref_u32(uVar2);
                *(u32 *)(*piVar3 + 0x28) = g_8c13613c;
                uVar8 = 0x51;
                uVar6 = array_at_field_14(a0 + 0xb0, 0x51, uVar2, iVar5);
                uVar2 = deref_u32(uVar6);
                uVar8 = 1;
                puVar10 = &g_8c136144;
                record18_take(a0 + 0xb0, uVar2, &g_8c136144, 1);
                uVar6 = 0x51;
                uVar2 = array_at_field_14(a0 + 0xb0, 0x51, puVar10, uVar8);
                pcVar9 = deref_u32;
                piVar3 = (int *)deref_u32(uVar2);
                *(u32 *)(*piVar3 + 0x1c) = g_8c136148;
                uVar6 = 0x51;
                uVar2 = array_at_field_14(a0 + 0xb0, 0x51, puVar10, pcVar9);
                piVar3 = (int *)deref_u32(uVar2);
                uVar2 = g_8c136154;
                *(u32 *)(*piVar3 + 0x28) = g_8c136154;
                uVar8 = 0x52;
                uVar6 = array_at_field_14(a0 + 0xb0, 0x52, uVar2, pcVar9);
                uVar2 = deref_u32(uVar6);
                uVar8 = 1;
                puVar10 = &g_8c13615c;
                record18_take(a0 + 0xb0, uVar2, &g_8c13615c, 1);
                uVar6 = 0x52;
                uVar2 = array_at_field_14(a0 + 0xb0, 0x52, puVar10, uVar8);
                piVar3 = (int *)deref_u32(uVar2);
                iVar5 = *piVar3;
                *(u32 *)(iVar5 + 0x1c) = g_8c136160;
                uVar6 = 0x52;
                uVar2 = array_at_field_14(a0 + 0xb0, 0x52, iVar5, piVar3);
                piVar4 = (int *)deref_u32(uVar2);
                uVar2 = g_8c13616c;
                *(u32 *)(*piVar4 + 0x28) = g_8c13616c;
                uVar8 = 0x53;
                uVar6 = array_at_field_14(a0 + 0xb0, 0x53, uVar2, piVar3);
                uVar2 = deref_u32(uVar6);
                uVar8 = 1;
                puVar10 = &g_8c13609c;
                record18_take(a0 + 0xb0, uVar2, &g_8c13609c, 1);
                uVar6 = 0x53;
                uVar2 = array_at_field_14(a0 + 0xb0, 0x53, puVar10, uVar8);
                piVar3 = (int *)deref_u32(uVar2);
                *(u32 *)(*piVar3 + 0x1c) = g_8c1360a0;
                uVar6 = 0x53;
                uVar2 = array_at_field_14(a0 + 0xb0, 0x53, piVar3, uVar8);
                piVar3 = (int *)deref_u32(uVar2);
                iVar5 = *piVar3;
                *(u32 *)(iVar5 + 0x28) = g_8c1360ac;
                uVar6 = 0x54;
                uVar2 = array_at_field_14(a0 + 0xb0, 0x54, iVar5, piVar3);
                uVar2 = deref_u32(uVar2);
                uVar6 = 1;
                puVar10 = &g_8c1360b4;
                record18_take(a0 + 0xb0, uVar2, &g_8c1360b4, 1);
                uVar2 = array_at_field_14(a0 + 0xb0, 0x54, puVar10, uVar6);
                piVar3 = (int *)deref_u32(uVar2);
                iVar5 = *piVar3;
                *(u32 *)(iVar5 + 0x1c) = g_8c1360b8;
                uVar6 = 0x54;
                uVar2 = array_at_field_14(a0 + 0xb0, 0x54, iVar5, piVar3);
                piVar4 = (int *)deref_u32(uVar2);
                uVar2 = g_8c1360c4;
                *(u32 *)(*piVar4 + 0x28) = g_8c1360c4;
                uVar6 = 0x55;
                uVar2 = array_at_field_14(a0 + 0xb0, 0x55, uVar2, piVar3);
                uVar2 = deref_u32(uVar2);
                uVar8 = 1;
                record18_take(a0 + 0xb0, uVar2, &g_8c1360cc, 1);
                uVar6 = 0x55;
                pcVar9 = array_at_field_14;
                uVar2 = array_at_field_14(a0 + 0xb0, 0x55, array_at_field_14, uVar8);
                piVar3 = (int *)deref_u32(uVar2);
                uVar2 = g_8c1360d0;
                *(u32 *)(*piVar3 + 0x1c) = g_8c1360d0;
                uVar6 = 0x55;
                uVar2 = array_at_field_14(a0 + 0xb0, 0x55, 0x55, uVar2);
                pcVar9 = deref_u32;
                piVar3 = (int *)deref_u32(uVar2);
                *(u32 *)(*piVar3 + 0x28) = g_8c1360dc;
                uVar2 = array_at_field_14(a0 + 0xb0, 0x58, pcVar9, uVar2);
                uVar2 = deref_u32(uVar2);
                record18_take(a0 + 0xb0, uVar2, &g_8c1361d4, 1);
                uVar6 = 0x58;
                uVar8 = 0xb0;
                iVar5 = a0 + 0xb0;
                uVar2 = array_at_field_14(iVar5, 0x58, iVar5, 0xb0);
                piVar3 = (int *)deref_u32(uVar2);
                ar7_01 = *piVar3;
                *(u32 *)(ar7_01 + 0x1c) = g_8c1361d8;
                uVar6 = 0x58;
                uVar2 = array_at_field_14(a0 + 0xb0, 0x58, iVar5, ar7_01);
                piVar3 = (int *)deref_u32(uVar2);
                *(u32 *)(*piVar3 + 0x28) = g_8c1361e4;
                uVar8 = 0x5c;
                uVar6 = 0x5c;
                uVar2 = array_at_field_14(a0 + 0xb0, 0x5c, 0x5c, ar7_01);
                uVar2 = deref_u32(uVar2);
                uVar8 = 1;
                puVar7 = &g_8c13627c;
                record18_take(a0 + 0xb0, uVar2, &g_8c13627c, 1);
                uVar6 = 0x5c;
                uVar2 = array_at_field_14(a0 + 0xb0, 0x5c, puVar7, uVar8);
                piVar3 = (int *)deref_u32(uVar2);
                *(u32 *)(*piVar3 + 0x1c) = g_8c136280;
                iVar5 = a0 + 0xb0;
                uVar2 = array_at_field_14(iVar5, 0x5c, puVar7, iVar5);
                piVar3 = (int *)deref_u32(uVar2);
                *(u32 *)(*piVar3 + 0x28) = g_8c13628c;
                uVar6 = 0x5b;
                uVar2 = array_at_field_14(a0 + 0xb0, 0x5b, puVar7, iVar5);
                uVar2 = deref_u32(uVar2);
                uVar8 = 1;
                record18_take(a0 + 0xb0, uVar2, &g_8c136294, 1);
                uVar6 = 0x5b;
                uVar2 = array_at_field_14(a0 + 0xb0, 0x5b, array_at_field_14, uVar8);
                piVar3 = (int *)deref_u32(uVar2);
                *(u32 *)(*piVar3 + 0x1c) = g_8c136298;
                uVar6 = 0x5b;
                uVar2 = array_at_field_14(a0 + 0xb0, 0x5b, uVar2, uVar8);
                pcVar9 = deref_u32;
                piVar3 = (int *)deref_u32(uVar2);
                *(u32 *)(*piVar3 + 0x28) = g_8c1362a4;
                uVar8 = 0x4c;
                uVar6 = array_at_field_14(a0 + 0xb0, 0x4c, pcVar9, uVar2);
                uVar2 = deref_u32(uVar6);
                uVar11 = 1;
                puVar7 = &g_8c1362ac;
                record18_take(a0 + 0xb0, uVar2, &g_8c1362ac, 1);
                uVar6 = 0x4c;
                uVar2 = array_at_field_14(a0 + 0xb0, 0x4c, puVar7, uVar11);
                piVar3 = (int *)deref_u32(uVar2);
                *(u32 *)(*piVar3 + 0x1c) = g_8c1362b0;
                uVar6 = 0x4c;
                uVar2 = array_at_field_14(a0 + 0xb0, 0x4c, puVar7, uVar11);
                piVar3 = (int *)deref_u32(uVar2);
                *(u32 *)(*piVar3 + 0x28) = g_8c1362bc;
                uVar8 = 0x12;
                uVar6 = array_at_field_14(a0 + 0xb0, 0x12, uVar2, uVar11);
                uVar2 = deref_u32(uVar6);
                uVar8 = 0;
                record18_take(a0 + 0xb0, uVar2, &g_8c13624c, 0);
                uVar6 = 99;
                pcVar9 = array_at_field_14;
                uVar2 = array_at_field_14(a0 + 0xb0, 99, array_at_field_14, uVar8);
                uVar2 = deref_u32(uVar2);
                puVar1 = (u64 *)record18_take(a0 + 0xb0, uVar2, &uStack_3c, 1);
            }
        }
    }
    return puVar1;
}

/*
 * array_at_field_14  0x8c03c0f0
 * address of element a1 of the 32-bit array the object keeps at +0x14
 * called by: Class_12a03c_m6_03a65c, Class_12a25c_m6_06e69c, Class_12b2ac_m6_0afcc0, Vec3_sub_03f4a4, game_sub_049b68,
 * game_sub_04b168, game_sub_04c314, game_sub_04f034 (+23 more)
 */
int array_at_field_14(int a0, int a1, u32 a2, u32 a3) {
    return *(int *)(a0 + 0x14) + a1 * 4;
}

/*
 * Class_12a03c_sub_03c100  0x8c03c100
 * area name: only called from Class_12a03c methods
 * called by: Class_12a03c_m6_03a65c, game_sub_03a5a4
 */
u32 Class_12a03c_sub_03c100(int a0, u32 a1, u32 a2, u32 a3) {
    u32 uVar1;
    u32 in_fr1;
    char cVar2;

    cVar2 = '\0';
    *(u32 *)(a0 + 0x324) = 0;
    timer_start_94(a0, a1, a2);
    *(u32 *)(a0 + 0x2b8) = 2;
    *(u32 *)(a0 + 0x31c) = 0;
    *(u32 *)(a0 + 800) = 0;
    *(u32 *)(a0 + 0x318) = 0;
    *(u32 *)(a0 + 0x304) = 0;
    if (cVar2 == '\0') {
        *(u32 *)(a0 + 0x220) = 0x41a00000;
        *(u32 *)(a0 + 0x224) = 0x42340000;
    } else {
        *(u64 *)(a0 + 0x220) = 0x22441a00000;
        in_fr1 = 0x42340000;
        *(u64 *)(a0 + 0x224) = 0x2e842340000;
    }
    *(u32 *)(a0 + 0x2e8) = 0;
    *(u32 *)(a0 + 0x2fc) = 0;
    *(u32 *)(a0 + 0x300) = 1;
    *(u32 *)(a0 + 0x2f8) = 0x14;
    *(u32 *)(a0 + 0x68) = 0;
    Vec3_assign_f(a0 + 600, a1, a2, a3);
    Vec3_assign_f(a0 + 0x2d4, a1, a2, a3);
    Vec3_assign_f(a0 + 0x2a8, a1, a2, a3);
    *(u32 *)(a0 + 0x29c) = 0;
    *(u32 *)(a0 + 0x2a0) = 0;
    *(u32 *)(a0 + 0x298) = 0;
    *(u32 *)(a0 + 0x294) = 0;
    *(u32 *)(a0 + 0x28c) = 0;
    *(u8 ***)(a0 + 0x1c8) = &PTR_s_Idle_8c1363ec;
    *(u32 *)(a0 + 0x1cc) = 0x36;
    *(u32 *)(a0 + 0x290) = 0;
    *(u32 *)(a0 + 0x134) = 0;
    if (cVar2 == '\0') {
        *(u32 *)(a0 + 0x278) = 0x3f800000;
    } else {
        *(u64 *)(a0 + 0x278) = CONCAT44(0x3f800000, in_fr1);
    }
    if (cVar2 == '\0') {
        *(u32 *)(a0 + 0x340) = 0x3f800000;
    } else {
        *(u64 *)(a0 + 0x340) = CONCAT44(0x3f800000, in_fr1);
    }
    *(u32 *)(a0 + 0x27c) = 3;
    *(u32 *)(a0 + 0x284) = 0;
    *(u32 *)(a0 + 0x280) = 0;
    *(u32 *)(a0 + 0x288) = 0;
    *(u32 *)(a0 + 700) = 0;
    *(u32 *)(a0 + 0x2f0) = 0xffffffff;
    *(u32 *)(a0 + 0x2f4) = 0;
    if (cVar2 == '\0') {
        *(u32 *)(a0 + 0x2e4) = 0x3f800000;
    } else {
        *(u64 *)(a0 + 0x2e4) = CONCAT44(0x3f800000, in_fr1);
    }
    uVar1 = rand_range(a0, 0, 100);
    *(u32 *)(a0 + 0x33c) = uVar1;
    *(u32 *)(a0 + 0x330) = 0;
    *(u32 *)(a0 + 0x32c) = 0;
    *(u32 *)(a0 + 0x344) = 0;
    *(u32 *)(a0 + 0x348) = 0;
    return 0x348;
}

/*
 * timer_start_94  0x8c03c314
 * +0x94 = fr4, +0xa4 = 1
 * called by: Class_12a03c_m1_03c43c, Class_12a03c_sub_03c100, Class_12a25c_sub_06f93c, Class_12ad14_sub_0a37c8,
 * Class_12b088_sub_0a99c4, Class_12b2ac_sub_0b5344, Vec3_sub_03f4a4, game_sub_03c94c (+34 more)
 */
u32 timer_start_94(int a0, u32 a1, u32 a2) {
    u32 in_fr4;

    *(u32 *)(a0 + 0xa4) = 1;
    *(u32 *)(a0 + 0x94) = in_fr4;
    return 0x94;
}

/*
 * Class_12a03c_dtor  0x8c03c32c
 * stores the vtable 0x8c12a03c
 * called by: CAnimal_m0_0361d8
 */
u32 *Class_12a03c_dtor(u32 *a0, u32 a1, u32 a2, u32 a3) {
    u32 ar5_00;
    u32 in_stack_fffffff4;
    u32 ain0;

    ain0 = CONCAT22((short)((u32)in_stack_fffffff4 >> 0x10), (u16)a1);
    if (a0 != NULL) {
        *a0 = &g_8c12a03c;
        Vec3_dtor(a0 + 0xd3, 0xffffffff, a2, a3);
        Vec3_dtor(a0 + 0xc2, 0xffffffff, a2, a3);
        Vec3_dtor(a0 + 0xb5, 0xffffffff, a2, a3);
        object_dtor_delete(a0 + 0xb2, 0xffffffff, a2, a3);
        Vec3_dtor(a0 + 0xaa, 0xffffffff, a2, a3);
        Vec3_dtor(a0 + 0x9a, 0xffffffff, a2, a3);
        Vec3_dtor(a0 + 0x96, 0xffffffff, a2, a3);
        Vec3_dtor(a0 + 0x92, 0xffffffff, a2, a3);
        ar5_00 = 0;
        Class_129cbc_dtor(a0, 0, a2, a3);
        if (0 < (short)ain0) {
            free_if_nonnull(a0);
        }
    }
    return a0;
}

/*
 * Class_12a03c_m7_03c40c  0x8c03c40c
 */
int Class_12a03c_m7_03c40c(int a0) {
    int iVar1;

    game_sub_031684(a0);
    *(u32 *)(0x2e8 + a0) = 0;
    iVar1 = 0x178;
    *(u32 *)(0x178 + a0) = 0;
    return iVar1;
}

/*
 * Class_12a03c_m1_03c43c  0x8c03c43c
 */
u32 Class_12a03c_m1_03c43c(int a0, u32 *a1, u32 a2, u32 a3) {
    int iVar1;
    u32 uVar2;
    u32 *ar5_00;
    u32 *ar5_01;
    float fVar3;
    double in_dr0;
    double dVar4;
    float fVar5;
    double in_dr14;
    u64 in_xd0;
    double in_xd14;
    bool bVar6;
    char cVar7;
    char cVar8;
    u32 uStack_ac;
    int iStack_a8;
    int iStack_a4;
    u8 auStack_98[16];
    u8 auStack_88[16];
    u8 auStack_78[16];
    u8 auStack_68[16];
    u8 auStack_58[16];
    u8 auStack_48[16];
    u8 auStack_38[16];
    u32 uStack_28;
    u32 uStack_24;
    float fStack_20;
    u32 uStack_1c;

    cVar8 = '\0';
    cVar7 = '\0';
    Vec3_ctor_zero(&uStack_28, a1, a2);
    ar5_00 = a1;
    Class_129cbc_m1_031598(a0, a1, a2, a3);
    *(u32 *)(a0 + 0x244) = a1[6];
    if ((a1[4] == 0) || (a1[4] == 2)) {
        if (cVar8 == '\0') {
            in_dr0 = (double)CONCAT44(0x43fa0000, SUB84(in_dr0, 0));
        } else {
            in_dr0 = 1.3411048382276983e-08;
        }
        game_sub_03207c(a0, ar5_00);
    }
    game_sub_0324ac(a0);
    iVar1 = pure_virtual_stub();
    if ((*(int *)(a0 + 0x178) == 1) && (iVar1 != 1)) {
        *(u32 *)(a0 + 0x178) = 0;
    }
    set_field_3c_02f2c0(*a1, iVar1);
    timer_sub_031ab4(a0, *(u32 *)(a1[1] + 4), a2, a3);
    Vec3_scale(a0 + 0x14, a0 + 0x28, a2, a3, auStack_38);
    Vec3_add(auStack_38, a0 + 0x90, a2, a3, auStack_48);
    Vec3_add(auStack_48, a0 + 0x6c, a2, a3, auStack_58);
    Vec3_add(auStack_58, a0 + 0x2a8, a2, a3, auStack_68);
    Vec3_assign(a0 + 4, auStack_68, a2, a3);
    Vec3_dtor(auStack_68, 0xffffffff, a2, a3);
    Vec3_dtor(auStack_58, 0xffffffff, a2, a3);
    Vec3_dtor(auStack_48, 0xffffffff, a2, a3);
    ar5_01 = (u32 *)0xffffffff;
    Vec3_dtor(auStack_38, 0xffffffff, a2, a3);
    vec3_clear(a0 + 0x2a8, ar5_01, a2, a3);
    if ((((a1[4] == 0) || (a1[4] == 2)) && (*(int *)(a0 + 0x124) != 0x18)) &&
        ((*(int *)(a0 + 0x124) != 2 && (*(int *)(a0 + 0x334) != 1)))) {
        (**(code **)(*(int *)a1[6] + 0x184))((int *)a1[6], ar5_01, a2, a3);
        if (cVar8 == '\0') {
            in_dr14 = (double)CONCAT44((int)((u64)in_dr14 >> 0x20), (int)((u64)in_dr0 >> 0x20));
            dVar4 = (double)CONCAT44(0x3dcccccd, *(u32 *)(a0 + 0x48));
        } else {
            in_xd0 = *(u64 *)(a0 + 0x48);
            dVar4 = 2.9975963366641684e+19;
            in_xd14 = in_dr0;
        }
        if (cVar7 == '\0') {
            in_dr14 = (double)CONCAT44((int)((u64)in_dr14 >> 0x20),
                                       SUB84(in_dr14, 0) - SUB84(dVar4, 0) * (float)((u64)dVar4 >> 0x20));
        } else {
            in_dr14 = in_dr14 - dVar4 * dVar4;
        }
        if (cVar8 == '\0') {
            in_dr0 = (double)CONCAT44(*(u32 *)(a0 + 8), *(u32 *)(*(int *)a1[1] + 4));
        } else {
            in_xd0 = *(u64 *)(*(int *)a1[1] + 4);
            in_dr0 = *(double *)(a0 + 8);
        }
        if (cVar7 == '\0') {
            fVar5 = (float)((u64)in_dr0 >> 0x20);
            fVar3 = SUB84(in_dr0, 0) + fVar5;
            in_dr0 = (double)CONCAT44(fVar5, fVar3);
            bVar6 = SUB84(in_dr14, 0) < fVar3;
        } else {
            in_dr0 = in_dr0 + in_dr0;
            fVar3 = SUB84(in_dr0, 0);
            bVar6 = in_dr14 < in_dr0;
        }
        if (bVar6) {
            if (cVar8 == '\0') {
                in_dr0 = (double)CONCAT44(*(u32 *)(*(int *)a1[1] + 4), fVar3);
            } else {
                in_dr0 = *(double *)(*(int *)a1[1] + 4);
            }
            if (cVar7 == '\0') {
                in_dr14 =
                    (double)CONCAT44((int)((u64)in_dr14 >> 0x20), SUB84(in_dr14, 0) - (float)((u64)in_dr0 >> 0x20));
            } else {
                in_dr14 = in_dr14 - in_dr0;
            }
            if (cVar8 == '\0') {
                *(int *)(a0 + 8) = SUB84(in_dr14, 0);
            } else {
                *(double *)(a0 + 8) = in_xd14;
            }
        }
    }
    iVar1 = get_field_24_026024(a1[6], ar5_01, a2, a3);
    if (iVar1 == 0) {
        if (cVar8 == '\0') {
            in_dr14 = (double)CONCAT44(*(u32 *)(*(int *)a1[1] + 8), SUB84(in_dr14, 0));
            dVar4 = (double)CONCAT44(*(u32 *)(a0 + 0xc), SUB84(in_dr0, 0));
        } else {
            in_dr14 = *(double *)(*(int *)a1[1] + 8);
            dVar4 = *(double *)(a0 + 0xc);
        }
        if (cVar7 == '\0') {
            in_dr14 = (double)CONCAT44((float)((u64)in_dr14 >> 0x20) + (float)((u64)dVar4 >> 0x20), SUB84(in_dr14, 0));
        } else {
            in_dr14 = in_dr14 + dVar4;
        }
        if (cVar8 == '\0') {
            dVar4 = (double)CONCAT44(0x3f99999a, *(u32 *)(a0 + 0x48));
        } else {
            in_xd0 = *(u64 *)(a0 + 0x48);
            dVar4 = 1.2986509618072377e+23;
        }
        if (cVar7 == '\0') {
            fVar3 = SUB84(dVar4, 0) * (float)((u64)dVar4 >> 0x20);
            in_dr14 = (double)CONCAT44((float)((u64)in_dr14 >> 0x20) + fVar3, SUB84(in_dr14, 0));
        } else {
            fVar3 = SUB84(dVar4 * dVar4, 0);
            in_dr14 = in_dr14 + dVar4 * dVar4;
        }
        if (cVar8 == '\0') {
            in_dr0 = (double)CONCAT44(0x44bb8000, fVar3);
        } else {
            in_dr0 = 6.28680480336352e-312;
        }
        fVar3 = (float)((u64)in_dr14 >> 0x20);
        if (cVar7 == '\0') {
            bVar6 = (float)((u64)in_dr0 >> 0x20) < fVar3;
        } else {
            bVar6 = in_dr0 < in_dr14;
        }
        if (bVar6) {
            if (cVar8 == '\0') {
                in_dr0 = (double)CONCAT44(0x44bb8000, *(u32 *)(a0 + 0xc));
            } else {
                in_xd0 = *(u64 *)(a0 + 0xc);
                in_dr0 = 6.28680480336352e-312;
            }
            fVar5 = (float)((u64)in_dr0 >> 0x20);
            if (cVar7 == '\0') {
                fVar3 = fVar3 - fVar5;
                in_dr14 = (double)CONCAT44(fVar3, SUB84(in_dr14, 0));
                in_dr0 = (double)CONCAT44(fVar5, SUB84(in_dr0, 0) - fVar3);
            } else {
                in_dr14 = in_dr14 - in_dr0;
                in_dr0 = in_dr0 - in_dr14;
            }
            if (cVar8 == '\0') {
                *(int *)(a0 + 0xc) = SUB84(in_dr0, 0);
            } else {
                *(u64 *)(a0 + 0xc) = in_xd0;
            }
        }
    }
    if (*(int *)(a0 + 0x128) < 3) {
        if (((*(int *)(a0 + 0x124) != 0x2e) && (*(int *)(a0 + 0x124) != 0x18)) && (*(int *)(a0 + 0x124) != 2)) {
            Vec3_add(*(u32 *)a1[1], a0 + 4, a2, a3, auStack_78);
            Vec3_assign(&uStack_28, auStack_78, a2, a3);
            Vec3_dtor(auStack_78, 0xffffffff, a2, a3);
            fVar3 = fStack_20;
            if (cVar8 != '\0') {
                in_xd0 = CONCAT44(uStack_1c, fStack_20);
                fVar3 = 0.0;
            }
            if (cVar7 == '\0' && fVar3 < 0.0) {
                if (cVar8 == '\0') {
                    fVar3 = 0.0;
                } else {
                    in_xd0 = 0;
                }
                if (cVar8 == '\0') {
                    dVar4 = (double)CONCAT44(*(u32 *)(*(int *)a1[1] + 8), fVar3);
                } else {
                    dVar4 = *(double *)(*(int *)a1[1] + 8);
                }
                if (cVar7 == '\0') {
                    fVar3 = SUB84(dVar4, 0) - (float)((u64)dVar4 >> 0x20);
                } else {
                    fVar3 = SUB84(dVar4 - dVar4, 0);
                }
                if (cVar8 == '\0') {
                    *(float *)(a0 + 0xc) = fVar3;
                } else {
                    *(u64 *)(a0 + 0xc) = in_xd0;
                }
            }
            if (cVar8 == '\0') {
                dVar4 = (double)(u64)uStack_28;
            } else {
                in_xd0 = CONCAT44(uStack_24, uStack_28);
                dVar4 = 0.0;
            }
            if (cVar7 == '\0' && SUB84(dVar4, 0) < 0.0) {
                if (cVar8 == '\0') {
                    dVar4 = 0.0;
                } else {
                    in_xd0 = 0;
                }
                if (cVar8 == '\0') {
                    dVar4 = (double)CONCAT44(*(u32 *)*(double **)a1[1], SUB84(dVar4, 0));
                } else {
                    dVar4 = **(double **)a1[1];
                }
                if (cVar7 == '\0') {
                    fVar3 = (float)((u64)dVar4 >> 0x20);
                    dVar4 = (double)CONCAT44(fVar3, SUB84(dVar4, 0) - fVar3);
                } else {
                    dVar4 = dVar4 - dVar4;
                }
                if (cVar8 == '\0') {
                    *(int *)(a0 + 4) = SUB84(dVar4, 0);
                } else {
                    *(u64 *)(a0 + 4) = in_xd0;
                }
            }
            Vec3_add(*(u32 *)a1[1], a0 + 4, a2, a3, auStack_88);
            Vec3_assign(&uStack_28, auStack_88, a2, a3);
            ar5_01 = (u32 *)0xffffffff;
            Vec3_dtor(auStack_88, 0xffffffff, a2, a3);
            timer_start_94(a0, ar5_01, a2);
            if ((*(int *)(a0 + 0x124) != 0x18) && (*(int *)(a0 + 0x124) != 2)) {
                ar5_01 = &uStack_28;
                (**(code **)(*(int *)a1[6] + 0x128))((int *)a1[6], ar5_01, a2, a3);
                iStack_a8 = SUB84(dVar4, 0);
                iStack_a4 = (int)((u64)dVar4 >> 0x20);
                if (cVar8 == '\0') {
                    in_dr14 = (double)CONCAT44((int)((u64)in_dr14 >> 0x20), *(u32 *)(a0 + 0x48));
                    dVar4 = (double)CONCAT44(0x3e99999a, iStack_a8);
                    iStack_a8 = iStack_a4;
                    iStack_a4 = iVar1;
                } else {
                    in_xd14 = *(double *)(a0 + 0x48);
                    dVar4 = 2.97598305018595e-312;
                }
                if (cVar7 == '\0') {
                    in_dr14 =
                        (double)CONCAT44((int)((u64)in_dr14 >> 0x20), SUB84(in_dr14, 0) * (float)((u64)dVar4 >> 0x20));
                } else {
                    in_dr14 = in_dr14 * dVar4;
                }
                if (cVar8 == '\0') {
                    dVar4 = (double)CONCAT44(iStack_a8, SUB84(dVar4, 0));
                } else {
                    dVar4 = (double)CONCAT44(iStack_a4, iStack_a8);
                }
                if (cVar7 == '\0') {
                    in_dr14 =
                        (double)CONCAT44((int)((u64)in_dr14 >> 0x20), SUB84(in_dr14, 0) + (float)((u64)dVar4 >> 0x20));
                } else {
                    in_dr14 = in_dr14 + dVar4;
                }
                if (cVar8 == '\0') {
                    dVar4 = (double)CONCAT44(uStack_24, SUB84(dVar4, 0));
                } else {
                    dVar4 = (double)CONCAT44(fStack_20, uStack_24);
                }
                if (cVar7 == '\0') {
                    bVar6 = (float)((u64)dVar4 >> 0x20) < SUB84(in_dr14, 0);
                } else {
                    bVar6 = dVar4 < in_dr14;
                }
                if (bVar6) {
                    if (cVar8 == '\0') {
                        dVar4 = (double)CONCAT44(*(u32 *)(*(int *)a1[1] + 4), SUB84(dVar4, 0));
                    } else {
                        dVar4 = *(double *)(*(int *)a1[1] + 4);
                    }
                    if (cVar7 == '\0') {
                        fVar3 = SUB84(in_dr14, 0) - (float)((u64)dVar4 >> 0x20);
                    } else {
                        fVar3 = SUB84(in_dr14 - dVar4, 0);
                    }
                    if (cVar8 == '\0') {
                        *(float *)(a0 + 8) = fVar3;
                    } else {
                        *(double *)(a0 + 8) = in_xd14;
                    }
                    timer_stop_94(a0, ar5_01, a2, a3);
                }
            }
        }
    } else if ((a1[4] == 0) || (a1[4] == 2)) {
        Vec3_add(*(u32 *)a1[1], a0 + 4, a2, a3, auStack_98);
        Vec3_assign(&uStack_28, auStack_98, a2, a3);
        ar5_01 = (u32 *)0xffffffff;
        Vec3_dtor(auStack_98, 0xffffffff, a2, a3);
        if ((*(int *)(a0 + 0x124) != 2) && (*(int *)(a0 + 0x334) != 1)) {
            timer_start_94(a0, ar5_01, a2);
            ar5_01 = &uStack_28;
            (**(code **)(*(int *)a1[6] + 0x128))((int *)a1[6], ar5_01, a2, a3);
            uStack_ac = SUB84(in_dr0, 0);
            uVar2 = (u32)((u64)in_dr0 >> 0x20);
            if (cVar8 == '\0') {
                in_dr14 = (double)CONCAT44((int)((u64)in_dr14 >> 0x20), *(u32 *)(a0 + 0x48));
                dVar4 = (double)CONCAT44(0x3e99999a, uStack_ac);
                uStack_ac = uVar2;
            } else {
                in_xd14 = *(double *)(a0 + 0x48);
                dVar4 = 2.97598305018595e-312;
                iStack_a8 = uVar2;
            }
            if (cVar7 == '\0') {
                in_dr14 =
                    (double)CONCAT44((int)((u64)in_dr14 >> 0x20), SUB84(in_dr14, 0) * (float)((u64)dVar4 >> 0x20));
            } else {
                in_dr14 = in_dr14 * dVar4;
            }
            if (cVar8 == '\0') {
                dVar4 = (double)CONCAT44(uStack_ac, SUB84(dVar4, 0));
            } else {
                dVar4 = (double)CONCAT44(iStack_a8, uStack_ac);
            }
            if (cVar7 == '\0') {
                in_dr14 =
                    (double)CONCAT44((int)((u64)in_dr14 >> 0x20), SUB84(in_dr14, 0) + (float)((u64)dVar4 >> 0x20));
            } else {
                in_dr14 = in_dr14 + dVar4;
            }
            if (cVar8 == '\0') {
                dVar4 = (double)CONCAT44(uStack_24, SUB84(dVar4, 0));
            } else {
                dVar4 = (double)CONCAT44(fStack_20, uStack_24);
            }
            if (cVar7 == '\0') {
                bVar6 = (float)((u64)dVar4 >> 0x20) < SUB84(in_dr14, 0);
            } else {
                bVar6 = dVar4 < in_dr14;
            }
            if (bVar6) {
                if (cVar8 == '\0') {
                    dVar4 = (double)CONCAT44(*(u32 *)(*(int *)a1[1] + 4), SUB84(dVar4, 0));
                } else {
                    dVar4 = *(double *)(*(int *)a1[1] + 4);
                }
                if (cVar7 == '\0') {
                    fVar3 = SUB84(in_dr14, 0) - (float)((u64)dVar4 >> 0x20);
                } else {
                    fVar3 = SUB84(in_dr14 - dVar4, 0);
                }
                if (cVar8 == '\0') {
                    *(float *)(a0 + 8) = fVar3;
                } else {
                    *(double *)(a0 + 8) = in_xd14;
                }
                timer_stop_94(a0, ar5_01, a2, a3);
            }
        }
    }
    vec3_clear(a0 + 0x2a8, ar5_01, a2, a3);
    *(u32 *)(a0 + 0x21c) = 0;
    uVar2 = Vec3_dtor(&uStack_28, 0xffffffff, a2, a3);
    return uVar2;
}

/*
 * game_sub_03c94c  0x8c03c94c
 * area name: game code; nothing names its area yet
 */
code *game_sub_03c94c(code *a0, u32 *a1, u32 unused_a2, u32 a3) {
    double dVar1;
    int iVar2;
    u32 uVar3;
    u8 *puVar4;
    u32 *puVar5;
    double *pdVar6;
    code *pcVar7;
    float *pfVar8;
    code *pcVar9;
    u32 *ar6_00;
    u32 a6;
    code *pcVar10;
    u8 *ar7_00;
    u8 *puVar11;
    u64 *ar4_00;
    u32 uVar12;
    code *pcVar13;
    u32 uVar14;
    float fVar15;
    double in_dr0;
    float fVar18;
    u64 uVar16;
    u64 uVar17;
    u32 in_fr3;
    u32 in_fr5;
    u32 uVar19;
    double dVar20;
    u32 in_fr7;
    double dVar21;
    u64 in_xd0;
    bool bVar22;
    char cVar23;
    char cVar24;
    int iStack_444;
    int iStack_440;
    u32 uStack_438;
    u32 uStack_434;
    u32 uStack_3c8;
    u32 uStack_3c4;
    u32 uStack_378;
    u32 uStack_374;
    u32 uStack_370;
    code *pcStack_36c;
    u32 uStack_368;
    u32 uStack_364;
    u32 uStack_360;
    u32 uStack_35c;
    u8 auStack_358[4];
    u32 uStack_354;
    u8 auStack_350[16];
    u8 auStack_340[16];
    u8 auStack_330[12];
    u8 auStack_324[16];
    u8 auStack_314[16];
    u8 auStack_304[12];
    u8 auStack_2f8[16];
    u8 auStack_2e8[16];
    u8 auStack_2d8[16];
    u8 auStack_2c8[12];
    u8 auStack_2bc[16];
    u8 auStack_2ac[16];
    u8 auStack_29c[16];
    u8 auStack_28c[16];
    u8 auStack_27c[12];
    u8 auStack_270[16];
    u8 auStack_260[16];
    u8 auStack_250[16];
    u8 auStack_240[16];
    u8 auStack_230[16];
    u8 auStack_220[16];
    u8 auStack_210[16];
    u8 auStack_200[12];
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
    u8 auStack_154[12];
    u8 auStack_148[16];
    u8 auStack_138[16];
    u8 auStack_128[16];
    u8 auStack_118[12];
    u8 auStack_10c[16];
    u8 auStack_fc[16];
    u8 auStack_ec[16];
    u8 auStack_dc[12];
    u8 auStack_d0[16];
    u8 auStack_c0[16];
    u8 auStack_b0[16];
    u8 auStack_a0[16];
    u64 auStack_90[2];
    u8 auStack_80[16];
    u8 auStack_70[16];
    u8 auStack_60[4];
    u8 auStack_5c[4];
    u8 auStack_58[4];
    float fStack_54;
    float fStack_50;
    float fStack_4c;
    float fStack_48;
    float fStack_44;
    double dStack_40;
    u8 auStack_38[12];
    u32 uStack_2c;
    u32 uStack_28;
    u32 uStack_24;
    u32 uStack_20;

    cVar24 = '\0';
    cVar23 = '\0';
    pcVar13 = (code *)0x1;
    uStack_354 = 1;
    Vec3_ctor_copy_wrap_03f480(*a1, Vec3_ctor_copy_wrap_03f480, 1, a3, auStack_a0);
    pcVar7 = Vec3_ctor_copy;
    Vec3_ctor_copy(&uStack_2c, auStack_a0, Vec3_ctor_copy, a3);
    uVar3 = 0xffffffff;
    Vec3_dtor(auStack_a0, 0xffffffff, pcVar7, a3);
    if (cVar24 == '\0') {
        dVar21 = (double)(u64)in_fr7;
    } else {
        dVar21 = *(double *)(a1[7] + 8);
    }
    if (cVar24 == '\0') {
        in_fr5 = *(u32 *)(a1[7] + 0xc);
    }
    if (cVar24 != '\0') {
        in_fr5 = (u32) * (u64 *)a1[7];
    }
    pcVar10 = Vec3_assign_f_10277c;
    Vec3_assign_f_10277c(auStack_38);
    pfVar8 = &fStack_48;
    Vec3_ctor_zero(pfVar8, uVar3, pfVar8);
    clear_3_words_102748(&fStack_54);
    pcVar7 = Vec3_set_zero;
    Vec3_set_zero(auStack_60);
    pcVar10 = (code *)a1[4];
    Vec3_ctor_zero(auStack_70, uVar3, pfVar8);
    *(u32 *)(a0 + 0x2fc) = 0;
    *(u32 *)(a0 + 0x300) = 1;
    *(u32 *)(a0 + 0x218) = 0;
    *(u32 *)(a0 + 0x338) = 0;
    if (pcVar10 == (code *)0x1) {
        if (cVar24 == '\0') {
            in_dr0 = (double)((u64)in_dr0 & 0xffffffff);
            dVar20 = (double)(u64)in_fr5;
        } else {
            in_dr0 = 0.0;
            dVar20 = 0.0;
        }
        if (cVar23 != '\0') {
            in_dr0 = in_dr0 + dVar20;
        }
        fStack_4c = SUB84(in_dr0, 0);
        fVar15 = (float)((u64)in_dr0 >> 0x20);
        if (cVar24 == '\0') {
            dVar21 = (double)((u64)dVar21 & 0xffffffff);
            fStack_4c = fVar15;
        } else {
            dVar20 = 0.0;
            dVar21 = 0.0;
            fStack_48 = fVar15;
        }
        if (cVar23 != '\0') {
            dVar20 = dVar20 + dVar21;
        }
        fStack_54 = SUB84(dVar20, 0);
        if (cVar24 == '\0') {
            fStack_54 = (float)((u64)dVar20 >> 0x20);
            dVar20 = (double)((u64)dVar20 & 0xffffffff);
            in_dr0 = (double)((u64)in_dr0 & 0xffffffff);
        } else {
            dVar20 = 0.0;
            in_dr0 = 0.0;
        }
        if (cVar23 != '\0') {
            dVar20 = dVar20 + in_dr0;
        }
        fVar15 = (float)((u64)dVar20 >> 0x20);
        fStack_50 = fVar15;
        if (cVar24 != '\0') {
            fStack_50 = SUB84(dVar20, 0);
            fStack_4c = fVar15;
        }
        uVar3 = *(u32 *)a1[1];
        Vec3_assign(&fStack_48, uVar3, (u32 *)a1[1], pcVar7);
        uVar19 = SUB84(dVar20, 0);
        pcVar10 = NULL;
        if (cVar24 == '\0') {
            dVar20 = (double)CONCAT44(fStack_48, SUB84(in_dr0, 0));
            dVar21 = (double)((u64)dVar21 & 0xffffffff);
        } else {
            dVar20 = (double)CONCAT44(fStack_44, fStack_48);
            dVar21 = 0.0;
        }
        if (cVar23 == '\0') {
            bVar22 = (float)((u64)dVar20 >> 0x20) < 0.0;
        } else {
            bVar22 = dVar20 < dVar21;
        }
        if (bVar22) {
            pcVar7 = (code *)&g_8c125be0;
            if (cVar24 == '\0') {
                uVar19 = 0;
                fStack_48 = 0.0;
            } else {
                fStack_48 = 0.0;
                fStack_44 = 0.0;
            }
        }
        if (cVar24 == '\0') {
            dVar20 = (double)((u64)dVar20 & 0xffffffff);
            dVar1 = (double)CONCAT44(dStack_40._0_4_, uVar19);
        } else {
            dVar20 = 0.0;
            dVar1 = dStack_40;
        }
        if (cVar23 == '\0') {
            bVar22 = (float)((u64)dVar1 >> 0x20) < 0.0;
        } else {
            bVar22 = dVar1 < dVar20;
        }
        if (bVar22) {
            if (cVar24 == '\0') {
                dStack_40 = (double)((u64)dStack_40 & 0xffffffff00000000);
            } else {
                dStack_40 = 0.0;
            }
        }
        fVar15 = fStack_48;
        fVar18 = fStack_54;
        if (cVar24 != '\0') {
            in_xd0 = CONCAT44(fStack_44, fStack_48);
            fVar15 = fStack_54;
            fVar18 = fStack_50;
        }
        if (cVar23 == '\0' && fVar15 < fVar18) {
            if (cVar24 == '\0') {
                fStack_48 = fStack_54;
                fVar15 = fStack_54;
            } else {
                in_xd0 = CONCAT44(fStack_50, fStack_54);
                fStack_48 = fStack_54;
                fStack_44 = fStack_50;
            }
        }
        if (cVar24 == '\0') {
            in_dr0 = (double)CONCAT44(fStack_4c, fVar15);
            dVar20 = (double)CONCAT44(dStack_40._0_4_, SUB84(dVar1, 0));
        } else {
            in_dr0 = (double)CONCAT44(fStack_48, fStack_4c);
            dVar20 = dStack_40;
        }
        if (cVar23 == '\0') {
            bVar22 = (float)((u64)dVar20 >> 0x20) < (float)((u64)in_dr0 >> 0x20);
        } else {
            bVar22 = dVar20 < in_dr0;
        }
        if (bVar22) {
            if (cVar24 == '\0') {
                in_dr0 = (double)CONCAT44(fStack_4c, SUB84(in_dr0, 0));
                dStack_40 = (double)CONCAT44(dStack_40._4_4_, fStack_4c);
            } else {
                in_dr0 = (double)CONCAT44(fStack_48, fStack_4c);
                dStack_40 = in_dr0;
            }
        }
    }
    uVar19 = SUB84(dVar21, 0);
    pcVar9 = *(code **)(a0 + 0x2e8);
    if ((pcVar9 == NULL) && (*(int *)(a0 + 0x124) != 0x2e)) {
        if ((pcVar10 == (code *)0x3) || (*(int *)(a0 + 0x68) != 0)) {
            uVar3 = a1[1];
            game_sub_0507c0(a0, *(u32 *)a1[1], uVar3, pcVar10);
            uStack_35c = 1;
            pcVar13 = Vec3_dtor;
            Vec3_dtor(auStack_70, 0xffffffff, uVar3, Vec3_dtor);
            object_dtor_delete(auStack_60, 0xffffffff, uVar3, pcVar13);
            free_if_nonnull_wrap_102790(&fStack_54, 0xffffffff, uVar3, pcVar13);
            Vec3_dtor(&fStack_48, 0xffffffff, uVar3, pcVar13);
            free_if_nonnull_wrap_102790(auStack_38, 0xffffffff, uVar3, pcVar13);
            Vec3_dtor(&uStack_2c, 0xffffffff, uVar3, pcVar13);
            return (code *)uStack_35c;
        }
        uVar3 = 0;
    }
    iVar2 = *(int *)(a0 + 0x124);
    if ((iVar2 < 0x2f) && (-1 < iVar2)) {
        pcVar7 = (code *)(&(&DATA_8c03cce4))[iVar2];
        switch (iVar2) {
        case 0:
            game_sub_03f430(auStack_b0, a1[7], pcVar9);
            pcVar9 = (code *)&uStack_2c;
            pcVar13 = (code *)game_sub_048868(a0, *(u32 *)a1[1], pcVar9, pcVar10);
            pcVar7 = CAnimal_sub_026038;
            CAnimal_sub_026038(auStack_b0, 0xffffffff, pcVar9, CAnimal_sub_026038);
            break;
        case 1:
            pcVar9 = (code *)&uStack_2c;
            pcVar13 = (code *)pure_virtual_stub();
            break;
        case 2:
            *(u32 *)(a0 + 0x214) = 0;
            pcVar13 = (code *)game_sub_04d62c(a0, *(u32 *)a1[1], a1[6], pcVar7);
            pcVar9 = *(code **)a1[1];
            timer_sub_031c74(a0, &uStack_2c, pcVar9, pcVar7);
            break;
        case 3:
            puVar5 = &uStack_2c;
            timer_sub_031c74(a0, puVar5, *(u32 *)a1[1], pcVar7);
            pcVar9 = (code *)0x12c;
            if (*(int *)(a0 + 300) == 0) {
                *(u32 *)(a0 + 0x214) = 0;
                uVar19 = 0;
                uVar3 = 0xffffffff;
                CAnimBody_SetAnimation(a0 + 0xb0, 0x11, 0xffffffff, 0);
                uVar14 = SUB84(in_dr0, 0);
                CAnimBody_SetFrame(a0 + 0xb0, 0xb0, uVar3, uVar19);
                pcVar7 = *(code **)(a0 + 300);
                pcVar9 = pcVar7 + 1;
                *(code **)(a0 + 300) = pcVar9;
                if (cVar24 == '\0') {
                    *(u32 *)(a0 + 0x2c) = 0;
                } else {
                    *(u64 *)(a0 + 0x2c) = (u64)uVar14;
                }
            } else if (*(int *)(a0 + 300) == 1) {
                game_sub_05ae54(a0, puVar5, 300, pcVar7);
                fVar15 = (float)((u64)in_dr0 >> 0x20);
                CAnimBody_AdvanceFrame_033b98(a0 + 0xb0, puVar5, pcVar9, pcVar7);
                CAnimBody_GetCurFrame(a0 + 0xb0, puVar5, pcVar9, pcVar7);
                if (cVar24 == '\0') {
                    fVar18 = 190.0;
                } else {
                    fVar15 = 190.0;
                    fVar18 = 1.90577e-43;
                }
                if (cVar23 != '\0' || fVar18 <= fVar15) {
                    pcVar7 = CAnimBody_GetCurFrame;
                    CAnimBody_GetCurFrame(a0 + 0xb0, puVar5, pcVar9, CAnimBody_GetCurFrame);
                    pcVar9 = (code *)0xb0;
                    CAnimBody_SetFrame(a0 + 0xb0, CAnimBody_SetFrame, 0xb0, pcVar7);
                }
            }
            break;
        case 4:
            pcVar9 = CAnimBody_AdvanceFrame_033b98;
            iVar2 = CAnimBody_AdvanceFrame_033b98(a0 + 0xb0, uVar3, CAnimBody_AdvanceFrame_033b98, pcVar7);
            if (iVar2 == 1) {
                *(u32 *)(a0 + 0x214) = 1;
                pcVar13 = NULL;
                *(u32 *)(a0 + 300) = 0;
            }
            break;
        case 5:
            *(u32 *)(a0 + 0x214) = 0;
            *(u32 *)(a0 + 0x178) = 1;
            puVar5 = &uStack_2c;
            timer_sub_031c74(a0, puVar5, *(u32 *)a1[1], pcVar7);
            fVar15 = (float)((u64)in_dr0 >> 0x20);
            iVar2 = *(int *)(a0 + 300);
            if (iVar2 == 0) {
                pcVar7 = Vec3_ctor_copy;
                Vec3_ctor_copy(auStack_220, &g_8c125d48, &g_8c125d48, Vec3_ctor_copy);
                puVar11 = auStack_220;
                iVar2 = game_sub_051c14(a0, *(u32 *)a1[1], puVar11, pcVar7);
                uStack_370 = (u32)(iVar2 == 0);
                Vec3_dtor(auStack_220, 0xffffffff, puVar11, pcVar7);
                if (uStack_370 != 0) {
                    *(int *)(a0 + 300) = *(int *)(a0 + 300) + 1;
                    pcVar7 = NULL;
                    uVar19 = 0xffffffff;
                    uVar3 = 0xe;
                    CAnimBody_SetAnimation(a0 + 0xb0, 0xe, 0xffffffff, 0);
                    CAnimBody_SetFrame(a0 + 0xb0, uVar3, uVar19, pcVar7);
                }
            } else if (iVar2 == 1) {
                pcVar7 = (code *)0xb0;
                pcVar10 = a0 + 0xb0;
                CAnimBody_AdvanceFrame_wrapper(pcVar10, puVar5, pcVar10, 0xb0);
                uVar3 = 0xb0;
                CAnimBody_GetCurFrame(a0 + 0xb0, 0xb0, pcVar10, pcVar7);
                if (cVar24 == '\0') {
                    fVar18 = 34.0;
                } else {
                    fVar15 = 34.0;
                    fVar18 = 1.47977e-42;
                }
                if (cVar23 == '\0' && fVar18 < fVar15) {
                    puVar11 = auStack_80;
                    Vec3_ctor_zero(puVar11, uVar3, puVar11);
                    iVar2 = get_field_24_026024(*(u32 *)(a0 + 0x244), uVar3, puVar11, pcVar7);
                    if (iVar2 == 0) {
                        if (cVar24 == '\0') {
                            dVar21 = (double)CONCAT44(0x44bb8000, *(u32 *)(*(int *)a1[1] + 8));
                        } else {
                            dVar21 = 6.37168463500213e-312;
                        }
                        if (cVar23 == '\0') {
                            dVar21 =
                                (double)CONCAT44((float)((u64)dVar21 >> 0x20) - SUB84(dVar21, 0), SUB84(dVar21, 0));
                        } else {
                            dVar21 = dVar21 - dVar21;
                        }
                        uVar14 = (u32)((u64)dVar21 >> 0x20);
                        uStack_374 = uVar14;
                        if (cVar24 != '\0') {
                            uStack_374 = SUB84(dVar21, 0);
                            uStack_370 = uVar14;
                        }
                        Vec3_scale(a0 + 0x14, &uStack_374, puVar11, pcVar7, auStack_230);
                        pcVar10 = Vec3_scale;
                        Vec3_scale(auStack_230, &g_8c136570, Vec3_scale, pcVar7, auStack_240);
                        Vec3_assign(auStack_80, auStack_240, pcVar10, pcVar7);
                        Vec3_dtor(auStack_240, 0xffffffff, pcVar10, pcVar7);
                        puVar11 = (u8 *)0xffffffff;
                        Vec3_dtor(auStack_230, 0xffffffff, pcVar10, 0xffffffff);
                    } else {
                        if (cVar24 == '\0') {
                            dVar21 = (double)CONCAT44(0x45034000, *(u32 *)(*(int *)a1[1] + 8));
                        } else {
                            dVar21 = 6.28682803535784e-312;
                        }
                        if (cVar23 == '\0') {
                            dVar21 =
                                (double)CONCAT44((float)((u64)dVar21 >> 0x20) - SUB84(dVar21, 0), SUB84(dVar21, 0));
                        } else {
                            dVar21 = dVar21 - dVar21;
                        }
                        uVar14 = (u32)((u64)dVar21 >> 0x20);
                        uStack_378 = uVar14;
                        if (cVar24 != '\0') {
                            uStack_378 = SUB84(dVar21, 0);
                            uStack_374 = uVar14;
                        }
                        puVar5 = &uStack_378;
                        Vec3_scale(a0 + 0x14, puVar5, puVar5, auStack_250, auStack_250);
                        puVar11 = auStack_260;
                        Vec3_scale(auStack_250, &g_8c136574, puVar5, puVar11, puVar11);
                        Vec3_assign(auStack_80, auStack_260, puVar5, puVar11);
                        Vec3_dtor(auStack_260, 0xffffffff, puVar5, puVar11);
                        Vec3_dtor(auStack_250, 0xffffffff, 0xffffffff, puVar11);
                    }
                    puVar4 = auStack_80;
                    Vec3_sub_02374c(puVar4, Vec3_sub_02374c, puVar4, puVar11);
                    Vec3_assign(auStack_80, auStack_270, puVar4, puVar11);
                    pcVar10 = Vec3_dtor;
                    Vec3_dtor(auStack_270, 0xffffffff, Vec3_dtor, puVar11);
                    pcVar7 = rand_float;
                    rand_float(a0, rand_float, pcVar10);
                    Vec3_set_xyz(auStack_27c, pcVar7, pcVar10, puVar11);
                    Vec3_sub_023484(auStack_80, auStack_27c, pcVar10, puVar11, auStack_28c);
                    ar4_00 = (u64 *)auStack_80;
                    pcVar7 = Vec3_assign;
                    Vec3_assign(ar4_00, auStack_28c, Vec3_assign, ar4_00);
                    Vec3_dtor(auStack_28c, 0xffffffff, pcVar7, ar4_00);
                    uVar3 = 0xffffffff;
                    pcVar7 = object_dtor_delete;
                    object_dtor_delete(auStack_27c, 0xffffffff, object_dtor_delete, ar4_00);
                    Vec3_ctor_zero(auStack_90, uVar3, pcVar7);
                    iVar2 = *(int *)(a0 + 0x128);
                    if (iVar2 == 0) {
                        Vec3_ctor_xyz(auStack_29c, uVar3, pcVar7, ar4_00);
                        Vec3_assign(auStack_90, auStack_29c, pcVar7, ar4_00);
                        Vec3_dtor(auStack_29c, 0xffffffff, pcVar7, ar4_00);
                    } else if (iVar2 == 1) {
                        Vec3_ctor_xyz(auStack_2ac, uVar3, pcVar7, ar4_00);
                        Vec3_assign(auStack_90, auStack_2ac, pcVar7, ar4_00);
                        Vec3_dtor(auStack_2ac, 0xffffffff, pcVar7, ar4_00);
                    } else {
                        if (iVar2 != 2) {
                            uVar3 = 2;
                            uStack_368 = 2;
                            Vec3_dtor(auStack_90, 0xffffffff, 2, ar4_00);
                            Vec3_dtor(auStack_80, 0xffffffff, uVar3, ar4_00);
                            uVar3 = 0xffffffff;
                            Vec3_dtor(auStack_70, 0xffffffff, 0xffffffff, ar4_00);
                            object_dtor_delete(auStack_60, 0xffffffff, uVar3, ar4_00);
                            free_if_nonnull_wrap_102790(&fStack_54, 0xffffffff, uVar3, ar4_00);
                            pfVar8 = &fStack_48;
                            pcVar13 = Vec3_dtor;
                            Vec3_dtor(pfVar8, 0xffffffff, Vec3_dtor, pfVar8);
                            free_if_nonnull_wrap_102790(auStack_38, 0xffffffff, pcVar13, pfVar8);
                            Vec3_dtor(&uStack_2c, 0xffffffff, pcVar13, Vec3_dtor);
                            return (code *)uStack_368;
                        }
                        Vec3_ctor_xyz(auStack_2bc, Vec3_ctor_xyz, pcVar7, ar4_00);
                        ar4_00 = auStack_90;
                        pcVar7 = Vec3_assign;
                        Vec3_assign(ar4_00, auStack_2bc, Vec3_assign, ar4_00);
                        Vec3_dtor(auStack_2bc, 0xffffffff, pcVar7, ar4_00);
                    }
                    vec3_copy_8c02b5fc(auStack_2c8, *(u32 *)(a1[1] + 4), pcVar7);
                    Vec3_sub_023484(auStack_90, auStack_2c8, pcVar7, ar4_00, auStack_2d8);
                    puVar11 = auStack_2e8;
                    Vec3_add(*(u32 *)a1[1], auStack_2d8, puVar11, ar4_00, puVar11);
                    Vec3_assign(auStack_90, auStack_2e8, puVar11, ar4_00);
                    Vec3_dtor(auStack_2e8, 0xffffffff, puVar11, ar4_00);
                    puVar11 = auStack_2d8;
                    Vec3_dtor(puVar11, 0xffffffff, puVar11, ar4_00);
                    object_dtor_delete(auStack_2c8, 0xffffffff, puVar11, ar4_00);
                    pcVar7 = (code *)auStack_80;
                    game_sub_0dba50(a1[6], auStack_90, pcVar7, pcVar7);
                    *(int *)(a0 + 300) = *(int *)(a0 + 300) + 1;
                    Vec3_dtor(auStack_90, 0xffffffff, a0, pcVar7);
                    Vec3_dtor(auStack_80, 0xffffffff, Vec3_dtor, pcVar7);
                }
            } else if ((iVar2 == 2) &&
                       (iVar2 = CAnimBody_AdvanceFrame_wrapper(a0 + 0xb0, a0 + 0xb0, 0xb0, pcVar7), iVar2 == 1)) {
                *(u32 *)(a0 + 300) = 0;
                pcVar13 = NULL;
                *(u32 *)(a0 + 0x178) = 0;
                pcVar7 = NULL;
                uVar3 = 0xffffffff;
                CAnimBody_SetAnimation(a0 + 0xb0, 0, 0xffffffff, 0);
                CAnimBody_SetFrame(a0 + 0xb0, 0xb0, uVar3, pcVar7);
                *(u32 *)(a0 + 0x214) = 1;
            }
            pcVar9 = (code *)0x80;
            Vec3_assign(a0 + 0x80, a0 + 0x14, 0x80, pcVar7);
            break;
        case 6:
            pcVar7 = (code *)&uStack_2c;
            pcVar9 = *(code **)a1[1];
            pcVar13 = (code *)game_sub_050300(a0, *a1, pcVar9, pcVar7);
            break;
        default:
            goto override_jmp_8c03cc1e_case_7;
        case 0xb:
            Vec3_ctor_copy(auStack_194, &g_8c125d48, &g_8c125d48, pcVar7);
            pcVar10 = (code *)auStack_194;
            pcVar7 = pcVar10;
            pcVar13 = (code *)game_sub_051c14(a0, *(u32 *)a1[1], pcVar10, pcVar10);
            Vec3_dtor(auStack_194, 0xffffffff, pcVar10, pcVar7);
            pcVar9 = *(code **)a1[1];
            timer_sub_031c74(a0, &uStack_2c, pcVar9, pcVar7);
            break;
        case 0xc:
            pcVar9 = *(code **)a1[1];
            pcVar13 = (code *)game_sub_0530e0(a0, *a1, pcVar9, pcVar7);
            break;
        case 0xe:
            iVar2 = *(int *)(a0 + 300);
            if (iVar2 == 0) {
                *(u32 *)(a0 + 0x214) = 0;
                a0[0x1fc] = (code)((u8)a0[0x1fc] & 0xfb);
                CAnimBody_SetAnimation(a0 + 0xb0, 0x13, 0xffffffff, 0);
                *(int *)(a0 + 300) = *(int *)(a0 + 300) + 1;
            LAB_8c03d4b8:
                ar6_00 = &g_8c125bf0;
                if (cVar24 == '\0') {
                    uVar3 = SUB84(in_dr0, 0);
                    uVar19 = 0x40400000;
                } else {
                    uVar3 = 0x40400000;
                    uVar19 = 0x42c80000;
                }
                CMushroomerBody_sub_032518(a0, *(u32 *)a1[1], &g_8c125bf0, a1[6]);
                pcVar7 = Vec3_assign;
                Vec3_assign(a0 + 0x248, auStack_184, ar6_00, Vec3_assign);
                a6 = 0xffffffff;
                uVar12 = 0xffffffff;
                Vec3_dtor(auStack_184, 0xffffffff, 0xffffffff, pcVar7);
                (**(code **)(*(int *)a1[6] + 0x184))((int *)a1[6], uVar12, a6, pcVar7);
                if (cVar24 == '\0') {
                    dVar21 = (double)CONCAT44(*(u32 *)(a0 + 0x48), uVar19);
                } else {
                    in_xd0 = CONCAT44(uVar19, uVar3);
                    dVar21 = *(double *)(a0 + 0x48);
                }
                if (cVar23 == '\0') {
                    fVar15 = SUB84(dVar21, 0) - (float)((u64)dVar21 >> 0x20);
                } else {
                    fVar15 = SUB84(dVar21 - dVar21, 0);
                }
                if (cVar24 == '\0') {
                    *(float *)(a0 + 0x24c) = fVar15;
                } else {
                    *(u64 *)(a0 + 0x24c) = in_xd0;
                }
                pcVar7 = (code *)a1[7];
                if (cVar24 == '\0') {
                    dVar21 = (double)CONCAT44(*(u32 *)(pcVar7 + 8), in_fr3);
                    in_dr0 = (double)CONCAT44(0x40400000, *(u32 *)(a0 + 0x48));
                } else {
                    dVar21 = *(double *)(pcVar7 + 8);
                    in_dr0 = 52776566554624.0;
                }
                if (cVar23 == '\0') {
                    fVar18 = (float)((u64)in_dr0 >> 0x20);
                    fVar15 = SUB84(in_dr0, 0) * fVar18;
                    in_dr0 = (double)CONCAT44(fVar18, fVar15);
                    dVar21 = (double)CONCAT44((float)((u64)dVar21 >> 0x20) - fVar15, SUB84(dVar21, 0));
                } else {
                    in_dr0 = in_dr0 * in_dr0;
                    dVar21 = dVar21 - in_dr0;
                }
                if (cVar24 == '\0') {
                    *(int *)(a0 + 0x250) = (int)((u64)dVar21 >> 0x20);
                } else {
                    *(double *)(a0 + 0x250) = dVar21;
                }
                *(u32 *)(a0 + 0x40) = 5;
                pcVar9 = (code *)0x12c;
                *(int *)(a0 + 300) = *(int *)(a0 + 300) + 1;
                pdVar6 = (double *)(a0 + 0x2c);
                in_dr0 = (double)((u64)in_dr0 & 0xffffffff);
                if (cVar24 == '\0') {
                    *(u32 *)pdVar6 = 0;
                } else {
                    *pdVar6 = in_dr0;
                }
            LAB_8c03d592:
                game_sub_05ae54(a0, pdVar6, pcVar9, pcVar7);
                CAnimBody_AdvanceFrame_wrap(a0 + 0xb0, pdVar6, pcVar9, pcVar7);
                *(u32 *)(a0 + 0x40) = 3;
                timer_sub_031c74(a0, a0 + 0x248, *(u32 *)a1[1], pcVar7);
            } else {
                if (iVar2 == 1)
                    goto LAB_8c03d4b8;
                if (iVar2 == 2) {
                    pdVar6 = (double *)0x2;
                    goto LAB_8c03d592;
                }
            }
            uVar3 = (u32)((u64)in_dr0 >> 0x20);
            pcVar10 = a0 + 0x14;
            pcVar9 = pcVar10;
            Vec3_assign(a0 + 0x80, pcVar10, pcVar10, pcVar7);
            timer_start_94(a0, pcVar10, pcVar9);
            pcVar7 = (code *)**(u32 **)(a0 + 0x244);
            (**(code **)(pcVar7 + 0x184))(*(u32 **)(a0 + 0x244), pcVar10, pcVar9, pcVar7);
            if (cVar24 == '\0') {
                dVar21 = (double)CONCAT44(*(u32 *)(a0 + 0x48), uVar3);
            } else {
                dVar21 = *(double *)(a0 + 0x48);
            }
            if (cVar23 == '\0') {
                fVar15 = SUB84(dVar21, 0) - (float)((u64)dVar21 >> 0x20);
            } else {
                fVar15 = SUB84(dVar21 - dVar21, 0);
            }
            if (cVar24 == '\0') {
                uVar16 = CONCAT44(*(u32 *)(*(int *)a1[1] + 4), fVar15);
            } else {
                uVar16 = *(u64 *)(*(int *)a1[1] + 4);
            }
            if (cVar23 == '\0' && (float)uVar16 < (float)((u64)uVar16 >> 0x20)) {
                pcVar7 = timer_stop_94;
                timer_stop_94(a0, pcVar10, pcVar9, timer_stop_94);
            }
            break;
        case 0xf:
            *(u32 *)(a0 + 0x178) = 1;
            iVar2 = get_field_6c_028cc4(*a1, 1);
            if (iVar2 == 0) {
                uStack_360 = 2;
                Vec3_dtor(auStack_70, 0xffffffff, pcVar9, pcVar7);
                object_dtor_delete(auStack_60, 0xffffffff, pcVar9, pcVar7);
                uVar3 = 0xffffffff;
                free_if_nonnull_wrap_102790(&fStack_54, 0xffffffff, 0xffffffff, pcVar7);
                Vec3_dtor(&fStack_48, 0xffffffff, uVar3, pcVar7);
                puVar11 = auStack_38;
                free_if_nonnull_wrap_102790(puVar11, 0xffffffff, uVar3, puVar11);
                Vec3_dtor(&uStack_2c, 0xffffffff, uVar3, puVar11);
                return (code *)uStack_360;
            }
            get_vec3_field_50(iVar2, auStack_60, auStack_5c, auStack_58);
            ar7_00 = auStack_358;
            puVar11 = auStack_358;
            puVar4 = auStack_358;
            get_vec3_field_5c(iVar2, puVar4, puVar11, ar7_00);
            iVar2 = *(int *)(a0 + 0x128);
            if (iVar2 == 0) {
                Vec3_ctor_xyz(auStack_d0, puVar4, puVar11, ar7_00);
                vec3_copy_8c02b5fc(auStack_dc, auStack_60, vec3_copy_8c02b5fc);
                pcVar7 = Vec3_sub_023484;
                Vec3_sub_023484(auStack_d0, auStack_dc, Vec3_sub_023484, ar7_00, auStack_ec);
                Vec3_scale(auStack_ec, auStack_358, pcVar7, ar7_00, auStack_fc);
                pcVar10 = Vec3_add_assign;
                Vec3_add_assign(&uStack_2c, auStack_fc);
                Vec3_dtor(auStack_fc, 0xffffffff, pcVar10, ar7_00);
                Vec3_dtor(auStack_ec, 0xffffffff, pcVar10, ar7_00);
                pcVar7 = object_dtor_delete;
                object_dtor_delete(auStack_dc, 0xffffffff, pcVar10, object_dtor_delete);
                pcVar9 = (code *)0xffffffff;
                Vec3_dtor(auStack_d0, 0xffffffff, 0xffffffff, pcVar7);
            } else if (iVar2 == 1) {
                Vec3_ctor_xyz(auStack_10c, puVar4, puVar11, ar7_00);
                pcVar9 = (code *)auStack_118;
                vec3_copy_8c02b5fc(pcVar9, auStack_60, pcVar9);
                Vec3_sub_023484(auStack_10c, auStack_118, pcVar9, ar7_00, auStack_128);
                Vec3_scale(auStack_128, auStack_358, pcVar9, ar7_00, auStack_138);
                Vec3_add_assign(&uStack_2c, auStack_138);
                Vec3_dtor(auStack_138, 0xffffffff, pcVar9, ar7_00);
                Vec3_dtor(auStack_128, 0xffffffff, pcVar9, ar7_00);
                object_dtor_delete(auStack_118, 0xffffffff, pcVar9, ar7_00);
                pcVar7 = Vec3_dtor;
                Vec3_dtor(auStack_10c, 0xffffffff, pcVar9, Vec3_dtor);
            } else {
                if (iVar2 != 2) {
                    uStack_364 = 2;
                    uVar3 = 0xffffffff;
                    Vec3_dtor(auStack_70, 0xffffffff, puVar11, 0xffffffff);
                    object_dtor_delete(auStack_60, 0xffffffff, puVar11, uVar3);
                    free_if_nonnull_wrap_102790(&fStack_54, 0xffffffff, puVar11, uVar3);
                    pfVar8 = &fStack_48;
                    Vec3_dtor(pfVar8, 0xffffffff, pfVar8, uVar3);
                    free_if_nonnull_wrap_102790(auStack_38, 0xffffffff, pfVar8, uVar3);
                    Vec3_dtor(&uStack_2c, 0xffffffff, pfVar8, uVar3);
                    return (code *)uStack_364;
                }
                puVar11 = auStack_148;
                Vec3_ctor_xyz(puVar11, Vec3_ctor_xyz, puVar11, ar7_00);
                vec3_copy_8c02b5fc(auStack_154, auStack_60, puVar11);
                Vec3_sub_023484(auStack_148, auStack_154, auStack_164, ar7_00, auStack_164);
                pcVar7 = Vec3_scale;
                Vec3_scale(auStack_164, auStack_358, Vec3_scale, ar7_00, auStack_174);
                Vec3_add_assign(&uStack_2c, auStack_174);
                Vec3_dtor(auStack_174, 0xffffffff, pcVar7, ar7_00);
                Vec3_dtor(auStack_164, 0xffffffff, pcVar7, ar7_00);
                pcVar7 = (code *)0xffffffff;
                pcVar9 = (code *)auStack_154;
                object_dtor_delete(pcVar9, 0xffffffff, pcVar9, 0xffffffff);
                Vec3_dtor(auStack_148, 0xffffffff, pcVar9, pcVar7);
            }
            if (*(int *)(a0 + 0x134) == 0) {
                *(u32 *)(a0 + 0x214) = 0;
                pcVar9 = (code *)&uStack_2c;
                pcVar7 = pure_virtual_stub;
                iVar2 = pure_virtual_stub();
                if ((iVar2 == 0) || (*(int *)(a0 + 0x40) == 4)) {
                    *(u32 *)(a0 + 0x2b8) = 2;
                    *(u32 *)(a0 + 0x40) = 5;
                    set_field_88_to_1(*a1, set_field_88_to_1, 2);
                    pcVar9 = (code *)(*(int *)(a0 + 0x134) + 1);
                    *(code **)(a0 + 0x134) = pcVar9;
                }
                Vec3_assign(a0 + 0x80, a0 + 0x14, pcVar9, pcVar7);
            } else if (*(int *)(a0 + 0x134) == 1) {
                pcVar7 = (code *)*a1;
                pcVar9 = (code *)&uStack_2c;
                iVar2 = game_sub_04ddd4(a0, *(u32 *)a1[1], pcVar9, pcVar7);
                if (iVar2 == 0) {
                    *(u32 *)(a0 + 0x134) = 0;
                    *(u32 *)(a0 + 0x214) = 1;
                    pcVar13 = NULL;
                }
            }
            break;
        case 0x10:
            pcVar7 = (code *)a1[7];
            pcVar13 = (code *)game_sub_04e7e0(a0, *(u32 *)a1[1], pcVar10, pcVar7);
            pcVar9 = pcVar10;
            break;
        case 0x11:
            Vec3_ctor_xyz(auStack_c0, uVar3, pcVar9, pcVar7);
            pcVar7 = (code *)a1[3];
            pcVar13 = (code *)game_sub_055490(a0, *(u32 *)a1[1], auStack_c0, pcVar7);
            pcVar9 = pcVar13;
            Vec3_dtor(auStack_c0, 0xffffffff, pcVar13, pcVar7);
            break;
        case 0x12:
            if (*(int *)(a0 + 0x134) == 0) {
                if (cVar24 == '\0') {
                    uVar17 = (u64)uStack_2c;
                } else {
                    uVar17 = 0;
                }
                if (cVar23 == '\0' && (float)uVar17 < 0.0) {
                    pcVar13 = (code *)0x2;
                    break;
                }
                if (*(int *)(a0 + 0x21c) != 0) {
                    if (cVar24 == '\0') {
                        *(u32 *)(a0 + 0x2c) = 0;
                    } else {
                        *(u64 *)(a0 + 0x2c) = uVar17;
                    }
                    *(u32 *)(a0 + 0x28c) = 0;
                    *(u32 *)(a0 + 0x134) = 0;
                    pcVar13 = NULL;
                    pcVar9 = NULL;
                    break;
                }
                if (cVar24 != '\0') {
                    uStack_20 = (u32)((u64) * (u64 *)(a1[7] + 8) >> 0x20);
                }
                if (cVar24 == '\0') {
                    dVar21 = (double)CONCAT44(*(u32 *)(a1[3] + 8), in_fr3);
                    dVar20 = (double)CONCAT44(0x3fc00000, *(u32 *)(a0 + 0x48));
                } else {
                    dVar21 = *(double *)(a1[3] + 8);
                    dVar20 = 2.43657959471436e-311;
                }
                if (cVar23 == '\0') {
                    fVar15 = SUB84(dVar20, 0) * (float)((u64)dVar20 >> 0x20);
                    dVar21 = (double)CONCAT44((float)((u64)dVar21 >> 0x20) - fVar15, SUB84(dVar21, 0));
                } else {
                    fVar15 = SUB84(dVar20 * dVar20, 0);
                    dVar21 = dVar21 - dVar20 * dVar20;
                }
                uVar3 = (u32)((u64)dVar21 >> 0x20);
                uStack_24 = uVar3;
                if (cVar24 != '\0') {
                    uStack_24 = SUB84(dVar21, 0);
                    uStack_20 = uVar3;
                }
                pdVar6 = (double *)(*(int *)a1[1] + 4);
                if (cVar24 == '\0') {
                    uStack_28 = *(u32 *)pdVar6;
                    in_dr0 = (double)CONCAT44(uStack_28, fVar15);
                } else {
                    in_dr0 = *pdVar6;
                    uStack_28 = SUB84(in_dr0, 0);
                    uStack_24 = (u32)((u64)in_dr0 >> 0x20);
                }
                Vec3_assign(a0 + 0x248, &uStack_2c, 0x21c, pdVar6);
                *(int *)(a0 + 0x134) = *(int *)(a0 + 0x134) + 1;
            } else if (*(int *)(a0 + 0x134) != 1)
                break;
            uVar14 = SUB84(in_dr0, 0);
            pcVar9 = (code *)game_sub_054d6c(a0, *(u32 *)a1[1], a0 + 0x248, pcVar10);
            pcVar7 = pcVar10;
            if (pcVar9 == NULL) {
                if (cVar24 == '\0') {
                    *(u32 *)(a0 + 0x2c) = 0;
                } else {
                    *(u64 *)(a0 + 0x2c) = (u64)uVar14;
                }
                *(u32 *)(a0 + 0x134) = 0;
                pcVar13 = NULL;
                pcVar7 = NULL;
            }
            break;
        case 0x14:
            *(u32 *)(a0 + 0x214) = 0;
            game_sub_05ae54(a0, uVar3, pcVar9, pcVar7);
            timer_sub_031c74(a0, &uStack_2c, *(u32 *)a1[1], pcVar7);
            pcVar7 = (code *)game_sub_057280(a0, *(u32 *)a1[1], pcVar10, pcVar7);
            pcVar9 = pcVar10;
            if (pcVar7 == NULL) {
                *(u32 *)(a0 + 0x214) = 1;
                pcVar13 = NULL;
            }
            break;
        case 0x15:
            uVar3 = *(u32 *)a1[1];
            puVar5 = &uStack_2c;
            timer_sub_031c74(a0, puVar5, uVar3, pcVar7);
            uVar14 = SUB84(in_dr0, 0);
            timer_stop_94(a0, puVar5, uVar3, pcVar7);
            uVar17 = (u64)uVar14;
            if (cVar24 == '\0') {
                *(u32 *)(a0 + 0xa0) = 0;
            } else {
                *(u64 *)(a0 + 0xa0) = uVar17;
            }
            iVar2 = *(int *)(a0 + 300);
            if (iVar2 == 0) {
                iVar2 = Vec3_sub_05c28c(a0, 0, uVar3, pcVar7);
                if (iVar2 == 0) {
                    *(int *)(a0 + 300) = *(int *)(a0 + 300) + 1;
                }
            } else if (iVar2 == 1) {
                *(u32 *)(a0 + 0x2b8) = 3;
                rand_float(a0, 1, uVar3);
                uVar14 = (u32)uVar17;
                pcVar7 = (code *)CAnimBody_AdvanceFrame_033b98(a0 + 0xb0, CAnimBody_AdvanceFrame_033b98, uVar3, pcVar7);
                if (pcVar7 == (code *)0x1) {
                    pcVar7 = NULL;
                    CAnimBody_SetAnimation(a0 + 0xb0, 0xb, 0xffffffff, 0);
                    CAnimBody_SetFrame(a0 + 0xb0, a0 + 0xb0, 0xb0, pcVar7);
                    *(int *)(a0 + 300) = *(int *)(a0 + 300) + 1;
                    if (cVar24 == '\0') {
                        *(u32 *)(a0 + 0x2c) = 0;
                    } else {
                        *(u64 *)(a0 + 0x2c) = (u64)uVar14;
                    }
                }
            } else if (iVar2 == 2) {
                game_sub_05ae54(a0, 2, uVar3, pcVar7);
                rand_float(a0, iVar2, uVar3);
                iVar2 = CAnimBody_AdvanceFrame_033b98(a0 + 0xb0, iVar2, uVar3, pcVar7);
                if (iVar2 == 1) {
                    uVar19 = 0xffffffff;
                    uVar3 = 0xc;
                    CAnimBody_SetAnimation(a0 + 0xb0, 0xc, 0xffffffff, 0);
                    pcVar7 = a0 + 0xb0;
                    CAnimBody_SetFrame(pcVar7, uVar3, uVar19, pcVar7);
                    *(u32 *)(a0 + 300) = 1;
                    *(u32 *)(a0 + 0x2b8) = 2;
                    pcVar13 = NULL;
                }
            }
            pcVar9 = Vec3_assign;
            Vec3_assign(a0 + 0x80, a0 + 0x14, Vec3_assign, pcVar7);
            break;
        case 0x16:
            pcVar9 = *(code **)a1[1];
            puVar5 = &uStack_2c;
            timer_sub_031c74(a0, puVar5, pcVar9, pcVar7);
            uVar14 = SUB84(in_dr0, 0);
            timer_stop_94(a0, puVar5, pcVar9, pcVar7);
            uVar17 = (u64)uVar14;
            if (cVar24 == '\0') {
                *(u32 *)(a0 + 0xa0) = 0;
            } else {
                *(u64 *)(a0 + 0xa0) = uVar17;
            }
            iVar2 = *(int *)(a0 + 300);
            if (iVar2 == 0) {
                pcVar10 = Vec3_make;
                Vec3_make(a0 + 0x14, 0, Vec3_make, pcVar7, auStack_1a4);
                Vec3_ctor_xyz(auStack_1b4, auStack_1b4, pcVar10, pcVar7);
                Vec3_cos_angle(auStack_1a4, auStack_1b4, pcVar10, pcVar7);
                uVar3 = (u32)(uVar17 >> 0x20);
                uStack_3c8 = (int)uVar17;
                if (cVar24 == '\0') {
                    uStack_3c8 = uVar3;
                    uVar3 = uStack_3c4;
                }
                uStack_3c4 = uVar3;
                uVar3 = 0x224;
                if (cVar24 == '\0') {
                    uVar16 = CONCAT44(uStack_3c8, (int)uVar17);
                    *(u32 *)(a0 + 0x224) = uStack_3c8;
                } else {
                    uVar16 = CONCAT44(uStack_3c4, uStack_3c8);
                    *(u64 *)(a0 + 0x224) = uVar16;
                }
                Vec3_dtor(auStack_1b4, 0xffffffff, pcVar10, 0x224);
                uVar19 = 0xffffffff;
                Vec3_dtor(auStack_1a4, 0xffffffff, pcVar10, uVar3);
                Vec3_ctor_xyz(auStack_1c4, uVar19, pcVar10, uVar3);
                Vec3_sub_0231c8(auStack_1c4, auStack_1c4, pcVar10, uVar3);
                pcVar7 = Vec3_sub_0231c8;
                Vec3_sub_0231c8(a0 + 0x14, Vec3_sub_0231c8, pcVar10, uVar3);
                float_check_errno(float_check_errno, pcVar7, pcVar10, uVar3);
                if (cVar24 == '\0') {
                    *(int *)(a0 + 0x228) = (int)((u64)uVar16 >> 0x20);
                } else {
                    *(u64 *)(a0 + 0x228) = uVar16;
                }
                Vec3_dtor(auStack_1c4, 0xffffffff, a0 + 0x228, uVar3);
                *(u32 *)(a0 + 0x40) = 5;
                if (cVar24 == '\0') {
                    fVar15 = *(float *)(a0 + 0x224);
                    fVar18 = 5.0;
                } else {
                    fVar15 = 5.0;
                    fVar18 = 4.14784e-43;
                }
                if (cVar23 == '\0' && fVar18 < fVar15) {
                    if (*(int *)(a0 + 0x128) == 0) {
                        uVar3 = 5;
                        CAnimBody_SetAnimation(a0 + 0xb0, 5, 0xffffffff, 0);
                        if (cVar24 == '\0') {
                            *(u32 *)(a0 + 0x278) = 0x40c00000;
                        } else {
                            *(u64 *)(a0 + 0x278) = 0x66e3d71d40c00000;
                        }
                    } else {
                        uVar3 = 0x278;
                        pcVar7 = a0 + 0x278;
                        if (cVar24 == '\0') {
                            *(u32 *)pcVar7 = 0x3f800000;
                        } else {
                            *(u64 *)pcVar7 = CONCAT44(0x3f800000, fVar15);
                        }
                        Vec3_ctor_xyz(auStack_1d4, a0 + 0x224, pcVar7, 0x278);
                        uVar19 = Vec3_sub_023334(a0 + 0x14, auStack_1d4, pcVar7, uVar3);
                        *(u32 *)(a0 + 0x27c) = uVar19;
                        Vec3_dtor(auStack_1d4, 0xffffffff, pcVar7, uVar3);
                        if (*(int *)(a0 + 0x27c) == 3) {
                            uVar3 = 7;
                            CAnimBody_SetAnimation(a0 + 0xb0, 7, 0xffffffff, 0);
                        } else {
                            uVar3 = 8;
                            CAnimBody_SetAnimation(a0 + 0xb0, 8, 0xffffffff, 0);
                        }
                    }
                    uVar19 = 0xb0;
                    CAnimBody_SetFrame(a0 + 0xb0, uVar3, a0 + 0xb0, 0xb0);
                    pcVar9 = (code *)0x12c;
                    *(int *)(a0 + 300) = *(int *)(a0 + 300) + 1;
                    CAnimBody_AdvanceFrame_033b98(a0 + 0xb0, 0xb0, 300, uVar19);
                } else {
                    *(u32 *)(a0 + 300) = 2;
                    uVar19 = 0;
                    uVar3 = 0;
                    CAnimBody_SetAnimation(a0 + 0xb0, 0, 0xffffffff, 0);
                    CAnimBody_SetFrame(a0 + 0xb0, uVar3, a0 + 0xb0, uVar19);
                    pcVar9 = (code *)0x190;
                    uVar3 = rand_range(a0, 0xfa, 400);
                    *(u32 *)(a0 + 0x280) = uVar3;
                }
            } else if (iVar2 == 1) {
                Vec3_ctor_xyz(auStack_1e4, 1, pcVar9, pcVar7);
                puVar11 = auStack_1e4;
                pcVar7 = Vec3_add;
                Vec3_add(*(u32 *)a1[1], puVar11, Vec3_add, *(u32 *)a1[1], auStack_1f4);
                pcVar10 = get_field_1c_026dd8;
                uVar3 = get_field_1c_026dd8(a0 + 0xb0, puVar11, pcVar7);
                get_motion_data(a0 + 0xb0, uVar3, pcVar7, pcVar10);
                uVar3 = get_field_1c_026dd8(a0 + 0xb0, uVar3, pcVar7);
                get_motion_data(a0 + 0xb0, uVar3, get_motion_data, pcVar10);
                Vec3_set_xyz(auStack_200, a0 + 0x278, 0x228, pcVar10);
                pcVar10 = a0 + 0x14;
                game_sub_031eb0(a0, *(u32 *)a1[1], auStack_1f4, pcVar10, auStack_210);
                pcVar9 = Vec3_assign;
                Vec3_assign(a0 + 0x14, auStack_210, Vec3_assign, pcVar10);
                Vec3_dtor(auStack_210, 0xffffffff, pcVar9, pcVar10);
                object_dtor_delete(auStack_200, 0xffffffff, pcVar9, pcVar10);
                Vec3_dtor(auStack_1f4, 0xffffffff, pcVar9, pcVar10);
                Vec3_dtor(auStack_1e4, 0xffffffff, pcVar9, pcVar10);
                pcVar7 = a0 + 0x14;
                Vec3_assign(a0 + 0x80, pcVar7, pcVar9, pcVar10);
                iVar2 = CAnimBody_AdvanceFrame_033b98(a0 + 0xb0, pcVar7, pcVar9, pcVar10);
                if (iVar2 == 1) {
                    uVar3 = 0;
                    CAnimBody_SetAnimation(a0 + 0xb0, 0, 0xffffffff, 0);
                    pcVar9 = (code *)0xb0;
                    CAnimBody_SetFrame(a0 + 0xb0, a0 + 0xb0, 0xb0, uVar3);
                    *(u32 *)(a0 + 300) = 0;
                    if (*(int *)(a0 + 0x328) == 0) {
                        pcVar9 = (code *)0x12c;
                        *(u32 *)(a0 + 300) = 0;
                        pcVar13 = NULL;
                    }
                }
            } else if (iVar2 == 2) {
                *(u32 *)(a0 + 0x2fc) = 1;
                iVar2 = *(int *)(a0 + 0x280);
                pcVar9 = (code *)(iVar2 + -1);
                *(code **)(a0 + 0x280) = pcVar9;
                if (iVar2 < 0) {
                    set_field_8c_to_1(*a1, 2, pcVar9, iVar2);
                    *(u32 *)(a0 + 0x280) = 0;
                    uVar12 = 0;
                    uVar19 = 0xffffffff;
                    uVar3 = 0x10;
                    CAnimBody_SetAnimation(a0 + 0xb0, 0x10, 0xffffffff, 0);
                    CAnimBody_SetFrame(a0 + 0xb0, uVar3, uVar19, uVar12);
                    pcVar9 = (code *)0x12c;
                    *(int *)(a0 + 300) = *(int *)(a0 + 300) + 1;
                } else if (*(int *)(a0 + 0x328) == 0) {
                    *(u32 *)(a0 + 300) = 0;
                    pcVar13 = NULL;
                }
            } else if (iVar2 == 3) {
                pcVar9 = CAnimBody_AdvanceFrame_033b98;
                iVar2 = CAnimBody_AdvanceFrame_033b98(a0 + 0xb0, 3, CAnimBody_AdvanceFrame_033b98, pcVar7);
                if (iVar2 == 1) {
                    pcVar13 = NULL;
                    *(u32 *)(a0 + 300) = 0;
                }
            }
            *(u32 *)(a0 + 0x328) = 0;
            pcVar7 = (code *)0x328;
            break;
        case 0x18:
            *(u32 *)(a0 + 0x214) = 0;
            Vec3_ctor_xyz(auStack_2f8, uVar3, pcVar9, pcVar7);
            iVar2 = game_sub_054f7c(a0, *(u32 *)a1[1], auStack_2f8, a1[6]);
            pcVar10 = (code *)(u32)(iVar2 == 0);
            pcVar7 = Vec3_dtor;
            pcVar9 = pcVar10;
            Vec3_dtor(auStack_2f8, 0xffffffff, pcVar10, Vec3_dtor);
            if (pcVar10 != NULL) {
                pcVar13 = NULL;
                *(u32 *)(a0 + 0x214) = 1;
            }
            break;
        case 0x2c:
            game_sub_05ae54(a0, game_sub_05ae54, pcVar9, pcVar7);
            uVar14 = SUB84(in_dr0, 0);
            uVar19 = *(u32 *)a1[1];
            puVar5 = &uStack_2c;
            timer_sub_031c74(a0, puVar5, uVar19, pcVar7);
            timer_stop_94(a0, puVar5, uVar19, pcVar7);
            uVar3 = 0xa0;
            if (cVar24 == '\0') {
                *(u32 *)(a0 + 0xa0) = 0;
            } else {
                *(u64 *)(a0 + 0xa0) = (u64)uVar14;
            }
            vec3_clear(a0 + 0x90, 0xa0, uVar19, pcVar7);
            pcVar7 = (code *)0xb0;
            pcVar9 = a0 + 0xb0;
            iVar2 = CAnimBody_AdvanceFrame_wrapper(pcVar9, uVar3, pcVar9, 0xb0);
            if (iVar2 == 1) {
                pcVar13 = NULL;
            }
            break;
        case 0x2e:
            if (*(int *)(a0 + 0x128) != 0) {
                pcVar13 = (code *)0x2;
                break;
            }
            iVar2 = *(int *)(a0 + 300);
            if (iVar2 == 0) {
                *(u32 *)(a0 + 0x214) = 0;
                *(u32 *)(a0 + 0x2e8) = 1;
                uVar3 = 0x2d4;
                vec3_clear(a0 + 0x2d4, a0 + 0x2d4, 0x2d4, pcVar7);
                uVar14 = SUB84(in_dr0, 0);
                vec3_clear(a0 + 0x2a8, vec3_clear, uVar3, pcVar7);
                vec3_clear(a0 + 0x90, vec3_clear, a0 + 0x90, pcVar7);
                if (cVar24 == '\0') {
                    *(u32 *)(a0 + 0xa0) = 0;
                } else {
                    *(u64 *)(a0 + 0xa0) = (u64)uVar14;
                }
                if (cVar24 == '\0') {
                    *(u32 *)(a0 + 0x28) = 0;
                } else {
                    *(u64 *)(a0 + 0x28) = (u64)uVar14;
                }
                if (cVar24 == '\0') {
                    *(u32 *)(a0 + 0x278) = 0x3f800000;
                } else {
                    *(u64 *)(a0 + 0x278) = CONCAT44(0x3f800000, uVar14);
                }
                if (cVar24 == '\0') {
                    *(u32 *)(a0 + 0x2c) = 0;
                    in_dr0 = (double)CONCAT44(0x40000000, uVar14);
                    *(u32 *)(a0 + 0x2c4) = 0x40000000;
                } else {
                    *(u64 *)(a0 + 0x2c) = (u64)uVar14;
                    in_dr0 = -0.00781250186264515;
                    *(u64 *)(a0 + 0x2c4) = 0xbf80000040000000;
                }
                pcVar7 = NULL;
                CAnimBody_SetAnimation(a0 + 0xb0, 0x15, 0xffffffff, 0);
                *(int *)(a0 + 300) = *(int *)(a0 + 300) + 1;
                pcVar9 = a0;
            LAB_8c03ee06:
                *(u32 *)(a0 + 0x2e8) = 1;
                if (cVar24 == '\0') {
                    uVar3 = SUB84(in_dr0, 0);
                    *(u32 *)(a0 + 0x2e4) = 0x42200000;
                } else {
                    uVar3 = 0x42200000;
                    *(u64 *)(a0 + 0x2e4) = 0x8042200000;
                }
                Vec3_assign(a0 + 0x80, a0 + 0x14, pcVar9, pcVar7);
                if (cVar24 == '\0') {
                    uVar17 = CONCAT44(0x3f000000, uVar3);
                    *(u32 *)(a0 + 0x278) = 0x3f000000;
                } else {
                    uVar17 = 0x8c032a643f000000;
                    *(u64 *)(a0 + 0x278) = 0x8c032a643f000000;
                }
                if (cVar24 == '\0') {
                    *(u32 *)(a0 + 0x2c) = 0;
                } else {
                    *(u64 *)(a0 + 0x2c) = uVar17 & 0xffffffff;
                }
                iVar2 = rand_range(a0, 0, 10);
                if (5 < iVar2) {
                    uVar3 = rand_range(a0, 0x3c, 0x78);
                    *(u32 *)(a0 + 0x280) = uVar3;
                    *(int *)(a0 + 300) = *(int *)(a0 + 300) + 2;
                    pcVar9 = (code *)0x12c;
                    break;
                }
                uVar3 = 300;
                *(int *)(a0 + 300) = *(int *)(a0 + 300) + 1;
            } else {
                if (iVar2 == 1)
                    goto LAB_8c03ee06;
                if (iVar2 != 2) {
                    if (iVar2 == 3) {
                        *(u32 *)(a0 + 0x2e8) = 1;
                        if (cVar24 == '\0') {
                            uVar3 = SUB84(in_dr0, 0);
                        } else {
                            uVar3 = (u32) * (u64 *)(a0 + 0x278);
                        }
                        iStack_440 = CAnimBody_AdvanceFrame_033b98(a0 + 0xb0, a0 + 0xb0, pcVar9, pcVar7);
                        iVar2 = iStack_440;
                        if (iStack_440 == 1) {
                            pcVar9 = CAnimBody_SetFrame;
                            CAnimBody_SetFrame(a0 + 0xb0, 1, CAnimBody_SetFrame, pcVar7);
                        }
                        if (cVar24 == '\0') {
                            uVar19 = *(u32 *)(a0 + 0x2e4);
                        } else {
                            uVar19 = (u32) * (u64 *)(a0 + 0x2c4);
                        }
                        puVar11 = auStack_330;
                        Vec3_set_xyz(puVar11, iVar2, pcVar9, puVar11);
                        Vec3_sub_023484(a0 + 0x14, auStack_330, pcVar9, puVar11, auStack_340);
                        Vec3_assign(a0 + 0x14, auStack_340, pcVar9, puVar11);
                        Vec3_dtor(auStack_340, 0xffffffff, Vec3_dtor, puVar11);
                        puVar11 = auStack_330;
                        pcVar7 = object_dtor_delete;
                        object_dtor_delete(puVar11, 0xffffffff, object_dtor_delete, puVar11);
                        Vec3_assign(a0 + 0x80, a0 + 0x14, pcVar7, puVar11);
                        pdVar6 = (double *)(a0 + 0x2e4);
                        if (cVar24 == '\0') {
                            dVar21 = (double)CONCAT44(*(u32 *)(a0 + 0x2e4), uVar3);
                            dVar20 = (double)CONCAT44(0x3f4ccccd, uVar19);
                        } else {
                            dVar21 = *(double *)(a0 + 0x2e4);
                            dVar20 = 1.35860200283337e-311;
                        }
                        if (cVar23 == '\0') {
                            dVar21 = (double)CONCAT44((float)((u64)dVar21 >> 0x20) * (float)((u64)dVar20 >> 0x20),
                                                      SUB84(dVar21, 0));
                        } else {
                            dVar21 = dVar21 * dVar20;
                        }
                        if (cVar24 == '\0') {
                            *(int *)pdVar6 = (int)((u64)dVar21 >> 0x20);
                        } else {
                            *pdVar6 = dVar21;
                        }
                        iVar2 = *(int *)(a0 + 0x280);
                        uVar3 = 0x280;
                        *(int *)(a0 + 0x280) = iVar2 + -1;
                        if (iVar2 < 0) {
                            *(u32 *)(a0 + 300) = 1;
                        }
                        pcVar7 = a0;
                        Vec3_ctor_xyz(auStack_350, pdVar6, 0x280, a0);
                        Vec3_sub_0231c8(auStack_350, pdVar6, uVar3, pcVar7);
                        iVar2 = (int)((u64)dVar21 >> 0x20);
                        iStack_444 = iVar2;
                        if (cVar24 != '\0') {
                            iStack_444 = SUB84(dVar21, 0);
                            iStack_440 = iVar2;
                        }
                        pcVar7 = Vec3_sub_0231c8;
                        Vec3_sub_0231c8(a0 + 0x14, pdVar6, uVar3, Vec3_sub_0231c8);
                        uVar3 = (u32)((u64)dVar21 >> 0x20);
                        if (cVar24 == '\0') {
                            dVar21 = (double)CONCAT44(uVar3, iStack_444);
                        } else {
                            in_xd0 = CONCAT44(iStack_440, uVar3);
                        }
                        if (cVar23 == '\0') {
                            fVar15 = SUB84(dVar21, 0) - (float)((u64)dVar21 >> 0x20);
                        } else {
                            fVar15 = SUB84(dVar21 - dVar21, 0);
                        }
                        if (cVar24 == '\0') {
                            *(float *)(a0 + 0x224) = fVar15;
                        } else {
                            *(u64 *)(a0 + 0x224) = in_xd0;
                        }
                        uVar3 = 0xffffffff;
                        Vec3_dtor(auStack_350, 0xffffffff, 0x224, pcVar7);
                        pcVar9 = game_sub_05ae54;
                        game_sub_05ae54(a0, uVar3, game_sub_05ae54, pcVar7);
                    }
                    break;
                }
            }
            *(u32 *)(a0 + 0x2e8) = 1;
            pcVar10 = a0 + 0xb0;
            pcVar7 = CAnimBody_AdvanceFrame_033b98;
            iVar2 = CAnimBody_AdvanceFrame_033b98(pcVar10, uVar3, CAnimBody_AdvanceFrame_033b98, pcVar10);
            if (iVar2 == 1) {
                CAnimBody_SetFrame(a0 + 0xb0, uVar3, pcVar7, pcVar10);
            }
            uVar12 = 0x2e4;
            Vec3_set_xyz(auStack_304, uVar3, pcVar7, 0x2e4);
            Vec3_sub_023484(a0 + 0x14, auStack_304, pcVar7, uVar12, auStack_314);
            puVar11 = auStack_314;
            Vec3_assign(a0 + 0x14, puVar11, puVar11, uVar12);
            Vec3_dtor(auStack_314, 0xffffffff, puVar11, uVar12);
            object_dtor_delete(auStack_304, 0xffffffff, puVar11, uVar12);
            pcVar10 = a0 + 0x14;
            pcVar9 = Vec3_assign;
            Vec3_assign(a0 + 0x80, pcVar10, Vec3_assign, uVar12);
            pcVar7 = a0 + 0x2e4;
            if (cVar24 == '\0') {
                dVar21 = (double)CONCAT44(0x3f4ccccd, *(u32 *)pcVar7);
            } else {
                in_xd0 = *(u64 *)pcVar7;
                dVar21 = 3.051758532137683e-05;
            }
            if (cVar23 == '\0') {
                fVar15 = (float)((u64)dVar21 >> 0x20);
                dVar21 = (double)CONCAT44(fVar15, SUB84(dVar21, 0) * fVar15);
            } else {
                dVar21 = dVar21 * dVar21;
            }
            if (cVar24 == '\0') {
                *(int *)(a0 + 0x2e4) = SUB84(dVar21, 0);
            } else {
                *(u64 *)(a0 + 0x2e4) = in_xd0;
            }
            rand_float(a0, pcVar10, pcVar9);
            uStack_434 = (u32)((u64)dVar21 >> 0x20);
            if (cVar24 == '\0') {
                dVar21 = (double)CONCAT44(uStack_434, *(u32 *)(a0 + 0x2e4));
            } else {
                uStack_434 = SUB84(dVar21, 0);
                in_xd0 = *(u64 *)(a0 + 0x2e4);
            }
            if (cVar23 == '\0' && SUB84(dVar21, 0) < (float)((u64)dVar21 >> 0x20)) {
                *(u32 *)(a0 + 300) = 1;
            }
            dVar20 = 0.0;
            puVar11 = auStack_324;
            Vec3_ctor_xyz(puVar11, pcVar10, puVar11, pcVar7);
            Vec3_sub_0231c8(auStack_324, pcVar10, puVar11, pcVar7);
            uVar3 = (u32)((u64)dVar21 >> 0x20);
            uStack_438 = uVar3;
            if (cVar24 != '\0') {
                uStack_438 = SUB84(dVar21, 0);
                uStack_434 = uVar3;
            }
            Vec3_sub_0231c8(a0 + 0x14, a0 + 0x14, puVar11, pcVar7);
            uVar3 = (u32)((u64)dVar21 >> 0x20);
            if (cVar24 == '\0') {
                dVar21 = (double)CONCAT44(uVar3, uStack_438);
            } else {
                in_xd0 = CONCAT44(uStack_434, uVar3);
            }
            if (cVar23 == '\0') {
                fVar15 = SUB84(dVar21, 0) - (float)((u64)dVar21 >> 0x20);
            } else {
                fVar15 = SUB84(dVar21 - dVar21, 0);
            }
            if (cVar24 == '\0') {
                *(float *)(a0 + 0x224) = fVar15;
            } else {
                *(u64 *)(a0 + 0x224) = in_xd0;
            }
            pcVar9 = Vec3_dtor;
            Vec3_dtor(auStack_324, 0xffffffff, Vec3_dtor, pcVar7);
            if (cVar24 == '\0') {
                fVar15 = *(float *)(a0 + 0x224);
                fVar18 = 80.0;
            } else {
                fVar15 = 80.0;
                fVar18 = -80.0;
            }
            if (cVar23 != '\0' || fVar15 <= fVar18) {
                if (cVar24 == '\0') {
                    dVar21 = (double)CONCAT44(*(u32 *)(a0 + 0x224), uVar19);
                    dVar20 = (double)CONCAT44((int)((u64)dVar20 >> 0x20), 0xc2a00000);
                } else {
                    dVar21 = *(double *)(a0 + 0x224);
                }
                if (cVar23 == '\0') {
                    bVar22 = (float)((u64)dVar21 >> 0x20) < SUB84(dVar20, 0);
                } else {
                    bVar22 = dVar21 < dVar20;
                }
                if (!bVar22)
                    break;
            }
            if (cVar24 == '\0') {
                dVar21 = (double)CONCAT44(*(u32 *)(a0 + 0x2c4), SUB84(dVar20, 0));
                dVar20 = (double)CONCAT44(0xbf800000, fVar15);
            } else {
                dVar21 = *(double *)(a0 + 0x2c4);
                dVar20 = -8.410980261839484e+168;
            }
            if (cVar23 == '\0') {
                dVar21 =
                    (double)CONCAT44((float)((u64)dVar21 >> 0x20) * (float)((u64)dVar20 >> 0x20), SUB84(dVar21, 0));
            } else {
                dVar21 = dVar21 * dVar20;
            }
            pcVar7 = (code *)0x2c4;
            if (cVar24 == '\0') {
                *(int *)(a0 + 0x2c4) = (int)((u64)dVar21 >> 0x20);
            } else {
                *(double *)(a0 + 0x2c4) = dVar21;
            }
        }
    } else {
    override_jmp_8c03cc1e_case_7:
        pcVar13 = (code *)0x2;
    }
    timer_sub_031ab4(a0, *(u32 *)(a1[1] + 4), pcVar9, pcVar7);
    pcStack_36c = pcVar13;
    Vec3_dtor(auStack_70, 0xffffffff, pcVar9, pcVar7);
    object_dtor_delete(auStack_60, 0xffffffff, pcVar9, pcVar7);
    free_if_nonnull_wrap_102790(&fStack_54, 0xffffffff, pcVar9, pcVar7);
    Vec3_dtor(&fStack_48, 0xffffffff, pcVar9, pcVar7);
    uVar3 = 0xffffffff;
    free_if_nonnull_wrap_102790(auStack_38, 0xffffffff, 0xffffffff, pcVar7);
    Vec3_dtor(&uStack_2c, 0xffffffff, uVar3, pcVar7);
    return pcStack_36c;
}

/*
 * set_field_8c_to_1  0x8c03f39c
 * called by: Vec3_sub_03f4a4, game_sub_03c94c, game_sub_04ddd4, game_sub_0593cc, game_sub_071a38, game_sub_07c5f8,
 * game_sub_07cce0, game_sub_07d048 (+4 more)
 */
int set_field_8c_to_1(int a0, u32 a1, u32 unused_a2, u32 a3) {
    int iVar1;

    iVar1 = 0x8c;
    *(u32 *)(0x8c + a0) = 1;
    return iVar1;
}

/*
 * CAnimBody_AdvanceFrame_wrap  0x8c03f3ac
 * only calls CAnimBody_AdvanceFrame_033d88
 * called by: Class_12a25c_sub_06f93c, Class_12ad14_m3_0a427c, Class_12b088_sub_0aa70c, game_sub_03c94c,
 * game_sub_04ddd4, game_sub_071a38, game_sub_074d1c, game_sub_0755e0 (+25 more)
 */
u32 CAnimBody_AdvanceFrame_wrap(u32 a0, u32 a1, u32 a2, u32 a3) {
    u32 uVar1;

    uVar1 = CAnimBody_AdvanceFrame_033d88(a0, a1, a2, a3);
    return uVar1;
}

/*
 * set_field_88_to_1  0x8c03f3e8
 * called by: Class_12a25c_sub_06f93c, game_sub_03c94c, game_sub_04f034, game_sub_050300, game_sub_077a38,
 * game_sub_0aa11c, game_sub_0b4d14
 */
int set_field_88_to_1(int a0, u32 unused_a1, u32 a2) {
    int iVar1;

    iVar1 = 0x88;
    *(u32 *)(0x88 + a0) = 1;
    return iVar1;
}

/*
 * get_vec3_field_5c  0x8c03f3f8
 * copies the three words at +0x5c to the pointers in a1..a3
 * called by: Class_12a25c_sub_06f93c, game_sub_03c94c, game_sub_077a38
 */
u32 *get_vec3_field_5c(int a0, u32 *a1, u32 *a2, u32 *a3) {
    *a1 = *(u32 *)(a0 + 0x5c);
    *a2 = *(u32 *)(a0 + 0x60);
    *a3 = *(u32 *)(a0 + 100);
    return (u32 *)(a0 + 0x60);
}

/*
 * get_vec3_field_50  0x8c03f414
 * copies x, y, z at +0x50 to three out pointers
 * called by: Class_12a25c_sub_06f93c, Class_12a7a8_sub_099b0c, Class_12acc8_sub_0a0278, Class_12b0c4_sub_0ac1f0,
 * Class_12b2e8_sub_0b67cc, game_sub_03c94c, game_sub_066834, game_sub_069c24
 */
u32 *get_vec3_field_50(int a0, u32 *a1, u32 *a2, u32 *a3) {
    *a1 = *(u32 *)(a0 + 0x50);
    *a2 = *(u32 *)(a0 + 0x54);
    *a3 = *(u32 *)(a0 + 0x58);
    return (u32 *)(a0 + 0x54);
}

/*
 * game_sub_03f430  0x8c03f430
 * area name: game code; nothing names its area yet
 * called by: Vec3_sub_03f4a4, game_sub_03c94c
 */
int game_sub_03f430(int a0, int a1, u32 a2) {
    char cVar1;

    cVar1 = '\0';
    Vec3_copy_assign(a0, a1);
    if (cVar1 == '\0') {
        *(u32 *)(a0 + 0xc) = *(u32 *)(a1 + 0xc);
    } else {
        *(u64 *)(a0 + 0xc) = *(u64 *)(a1 + 0xc);
    }
    return a0;
}

/*
 * Vec3_copy_assign  0x8c03f460
 * a0 = a1
 * called by: Class_12ad14_m1_0a09e8, Class_12ad14_sub_0a0c88, Class_12ad14_sub_0a37c8, Class_12b088_sub_0a6628,
 * Class_12b088_sub_0aa70c, Vec3_sub_03f4a4, game_sub_03f430, game_sub_046684 (+6 more)
 */
u32 *Vec3_copy_assign(u32 *a0, u32 *a1) {
    *a0 = *a1;
    a0[1] = a1[1];
    a0[2] = a1[2];
    return a0;
}

/*
 * Vec3_ctor_copy_wrap_03f480  0x8c03f480
 * only calls Vec3_ctor_copy
 * called by: Class_12a25c_sub_06f93c, Class_12ad14_sub_0a0c88, Class_12b088_m1_0a6468, Class_12b088_sub_0a6628,
 * Class_12b2ac_sub_0b0784, Vec3_sub_03f4a4, game_sub_03c94c, game_sub_070d7c (+3 more)
 */
u32 Vec3_ctor_copy_wrap_03f480(int a0, u32 a1, u32 a2, u32 a3, u32 s0) {
    u32 uVar1;

    uVar1 = Vec3_ctor_copy(s0, a0 + 0x28, a2, a3);
    return uVar1;
}

/*
 * Vec3_sub_03f4a4  0x8c03f4a4
 * area name: sits between Vec3 functions (same compilation unit)
 */
u32 Vec3_sub_03f4a4(int a0, int *a1, u32 a2, u32 a3) {
    int *piVar1;
    u32 uVar2;
    u32 *puVar3;
    u8 *ar5_00;
    code *pcVar4;
    u8 *puVar5;
    double *pdVar6;
    u32 uVar7;
    u8 *puVar8;
    u32 uVar9;
    code *pcVar10;
    int iVar11;
    u32 uVar12;
    u64 *puVar13;
    u32 unaff_r8;
    code *pcVar14;
    u32 unaff_r9;
    int iVar15;
    u32 unaff_r10;
    u32 unaff_r11;
    u32 unaff_r12;
    int iVar16;
    u32 unaff_r13;
    u32 unaff_r14;
    u64 *puVar17;
    u32 in_fr1;
    u32 uVar18;
    double dVar19;
    float fVar20;
    double dVar21;
    u32 uVar23;
    double dVar22;
    u32 in_fr7;
    double dVar24;
    u64 uVar25;
    double in_dr14;
    float fVar26;
    double in_xd4;
    bool bVar27;
    u32 in_PR;
    u8 auStack_10[8];
    u64 uStack_8;

    uStack_8 = CONCAT44(SUB84(in_dr14, 0), (u32)uStack_8);
    puVar17 = &uStack_8;
    uStack_8._0_4_ = (int)((u64)in_dr14 >> 0x20);

    *(u32 *)((int)puVar17 + -4) = unaff_r14;
    *(u32 *)((int)puVar17 + -8) = unaff_r13;
    *(u32 *)((int)puVar17 + -0xc) = unaff_r12;
    *(u32 *)((int)puVar17 + -0x10) = unaff_r11;
    *(u32 *)((int)puVar17 + -0x14) = unaff_r10;
    *(u32 *)((int)puVar17 + -0x18) = unaff_r9;
    *(u32 *)((int)puVar17 + -0x1c) = unaff_r8;
    *(u32 *)((int)puVar17 + -0x20) = in_PR;
    iVar16 = 1;
    puVar5 = (u8 *)((int)puVar17 + -0xe8);
    *(u8 **)((int)puVar17 + -0xa74) = puVar5;
    Vec3_ctor_copy_wrap_03f480(*a1, 1, puVar5, a3, *(u32 *)((int)puVar17 + -0xa74));
    pcVar10 = Vec3_ctor_copy;
    Vec3_ctor_copy((u8 *)((int)puVar17 + -0x30), (u8 *)((int)puVar17 + -0xe8), puVar5, Vec3_ctor_copy);
    uVar2 = 0xffffffff;
    Vec3_dtor((u8 *)((int)puVar17 + -0xe8), 0xffffffff, puVar5, pcVar10);
    Vec3_ctor_zero((u8 *)((int)puVar17 + -0x40), uVar2, puVar5);
    pcVar14 = (code *)a1[4];
    Vec3_ctor_zero((u8 *)((int)puVar17 + -0x50), uVar2, puVar5);
    puVar5 = (u8 *)((int)puVar17 + -0x60);
    pcVar10 = Vec3_ctor_zero;
    Vec3_ctor_zero(puVar5, uVar2, Vec3_ctor_zero);
    *(u32 *)((int)puVar17 + -0x640) = 0;

    dVar24 = (double)(u64)in_fr7;

    Vec3_assign_f_10277c((u8 *)((int)puVar17 + -0x6c));
    puVar5 = (u8 *)((int)puVar17 + -0x7c);
    pcVar10 = Vec3_ctor_zero;
    Vec3_ctor_zero(puVar5, uVar2, Vec3_ctor_zero);
    Vec3_ctor_zero((u8 *)((int)puVar17 + -0x8c), uVar2, pcVar10);
    puVar3 = &g_8c125bf0;
    Vec3_copy_assign((u8 *)((int)puVar17 + -0x98), &g_8c125bf0);
    Vec3_ctor_zero((u8 *)((int)puVar17 + -0xa8), puVar3, Vec3_ctor_zero, (u8 *)((int)puVar17 + -0xa8));
    if (((((0 < *(int *)(a0 + 0x31c)) && (*(int *)(a0 + 0x124) != 0x29)) && (*(int *)(a0 + 0x124) != 0x23)) &&
         ((*(int *)(a0 + 0x124) != 0x24 && (*(int *)(a0 + 0x124) != 0x27)))) &&
        ((*(int *)(a0 + 0x124) != 0x28 && ((*(int *)(a0 + 0x124) != 0x32 && (*(int *)(a0 + 0x124) != 0x33)))))) {
        Vec3_assign(&g_8c2803a8, *(u32 *)a1[1], *(int *)(a0 + 0x124), 0x124);
        *(u32 *)((int)puVar17 + -0x644) = 2;
        puVar5 = (u8 *)((int)puVar17 + -0xa8);
        pcVar10 = Vec3_dtor;
        g_8c2803b8 = pcVar14;
        Vec3_dtor(puVar5, 0xffffffff, Vec3_dtor, puVar5);
        free_if_nonnull_wrap_102790((u8 *)((int)puVar17 + -0x98), 0xffffffff, pcVar10, puVar5);
        pcVar10 = Vec3_dtor;
        Vec3_dtor((u8 *)((int)puVar17 + -0x8c), 0xffffffff, Vec3_dtor, puVar5);
        Vec3_dtor((u8 *)((int)puVar17 + -0x7c), 0xffffffff, pcVar10, puVar5);
        free_if_nonnull_wrap_102790((u8 *)((int)puVar17 + -0x6c), 0xffffffff, pcVar10, puVar5);
        Vec3_dtor((u8 *)((int)puVar17 + -0x60), 0xffffffff, pcVar10, puVar5);
        uVar2 = 0xffffffff;
        Vec3_dtor((u8 *)((int)puVar17 + -0x50), 0xffffffff, pcVar10, 0xffffffff);
        Vec3_dtor((u8 *)((int)puVar17 + -0x40), 0xffffffff, pcVar10, uVar2);
        Vec3_dtor((u8 *)((int)puVar17 + -0x30), 0xffffffff, (u8 *)((int)puVar17 + -0x30), uVar2);
        return *(u32 *)((int)puVar17 + -0x644);
    }
    *(u32 *)(a0 + 0x2fc) = 0;
    *(u32 *)(a0 + 0x300) = 1;
    pcVar10 = (code *)0x218;
    uVar2 = 0;
    *(u32 *)(a0 + 0x218) = 0;
    *(u32 *)(a0 + 0x338) = 0;

    dVar21 = (double)((u64) * (u32 *)((int)puVar17 + -0x90) << 0x20);

    dVar21 = (double)CONCAT44((float)((u64)dVar21 >> 0x20) + SUB84(dVar21, 0), SUB84(dVar21, 0));

    *(int *)((int)puVar17 + -0x38) = (int)((u64)dVar21 >> 0x20);
    dVar21 = (double)CONCAT44(*(u32 *)((int)puVar17 + -0x98), SUB84(dVar21, 0));
    dVar19 = (double)(u64)in_fr1;

    dVar21 = (double)CONCAT44((float)((u64)dVar21 >> 0x20) + 0.0, SUB84(dVar21, 0));

    *(int *)((int)puVar17 + -0x40) = (int)((u64)dVar21 >> 0x20);
    dVar21 = (double)CONCAT44(*(u32 *)((int)puVar17 + -0x94), SUB84(dVar21, 0));

    ar5_00 = &g_8c125be4;

    dVar21 = (double)CONCAT44((float)((u64)dVar21 >> 0x20) + 0.0, SUB84(dVar21, 0));

    *(int *)((int)puVar17 + -0x3c) = (int)((u64)dVar21 >> 0x20);

    if ((pcVar14 == (code *)0x3) && (0 < *(int *)(a0 + 0x2e8))) {
        pcVar14 = (code *)0x1;
    }
    if (((pcVar14 == (code *)0x3) || (*(int *)(a0 + 0x68) != 0)) && (*(int *)(a0 + 0x2e8) == 0)) {
        *(int *)((int)puVar17 + -0xa74) = a1[0xb];
        *(int *)((int)puVar17 + -0xa78) = a1[6];
        *(int *)((int)puVar17 + -0xa7c) = a1[3];
        game_sub_0507c0(a0, *(u32 *)a1[1], a1[1], pcVar14);
        puVar3 = (u32 *)a1[1];
        pcVar10 = Vec3_assign;
        Vec3_assign(&g_8c2803a8, *puVar3, Vec3_assign, puVar3);
        *(u32 *)((int)puVar17 + -0x648) = 1;
        g_8c2803b8 = pcVar14;
        Vec3_dtor((u8 *)((int)puVar17 + -0xa8), 0xffffffff, pcVar10, puVar3);
        free_if_nonnull_wrap_102790((u8 *)((int)puVar17 + -0x98), 0xffffffff, pcVar10, puVar3);
        Vec3_dtor((u8 *)((int)puVar17 + -0x8c), 0xffffffff, pcVar10, puVar3);
        Vec3_dtor((u8 *)((int)puVar17 + -0x7c), 0xffffffff, pcVar10, puVar3);
        puVar5 = (u8 *)((int)puVar17 + -0x6c);
        pcVar14 = free_if_nonnull_wrap_102790;
        free_if_nonnull_wrap_102790(puVar5, 0xffffffff, puVar5, free_if_nonnull_wrap_102790);
        Vec3_dtor((u8 *)((int)puVar17 + -0x60), 0xffffffff, puVar5, pcVar14);
        Vec3_dtor((u8 *)((int)puVar17 + -0x50), 0xffffffff, puVar5, pcVar14);
        pcVar10 = Vec3_dtor;
        Vec3_dtor((u8 *)((int)puVar17 + -0x40), 0xffffffff, Vec3_dtor, pcVar14);
        Vec3_dtor((u8 *)((int)puVar17 + -0x30), 0xffffffff, pcVar10, pcVar14);
        return *(u32 *)((int)puVar17 + -0x648);
    }
    if (pcVar14 == (code *)0x1) {
        vec3_clear(a0 + 0x6c, &g_8c125be4, 0, 0x218);
        uVar23 = (u32)((u64)dVar21 >> 0x20);
        *(u8 **)((int)puVar17 + -0xa70) = (u8 *)((int)puVar17 + -0xf8);
        *(u32 *)((int)puVar17 + -0xa74) = *(u32 *)((int)puVar17 + -0xa70);
        pcVar10 = Vec3_make;
        Vec3_make(a0 + 0x14, ar5_00, uVar2, Vec3_make, *(u32 *)((int)puVar17 + -0xa74));
        uVar2 = Vec3_length((u8 *)((int)puVar17 + -0xf8), ar5_00, (u8 *)((int)puVar17 + -0xf8), pcVar10);
        *(u32 *)((int)puVar17 + -0x694) = uVar2;
        Vec3_assign(a0 + 0x14, *(u32 *)((int)puVar17 + -0x694), uVar2, pcVar10);
        ar5_00 = (u8 *)0xffffffff;
        Vec3_dtor((u8 *)((int)puVar17 + -0xf8), 0xffffffff, uVar2, pcVar10);
        timer_stop_94(a0, ar5_00, uVar2, pcVar10);
        pcVar10 = (code *)0xa0;
        dVar21 = (double)((u64)uVar23 << 0x20);

        *(u32 *)(a0 + 0xa0) = 0;
    }
    uVar2 = SUB84(dVar24, 0);
    pdVar6 = (double *)0x2e8;
    if (*(int *)(a0 + 0x2e8) == 2) {

        dVar21 = (double)CONCAT44(0x43340000, SUB84(dVar21, 0));
        *(u32 *)(*(int *)a1[1] + 4) = 0x43340000;
    }
    iVar15 = *(int *)(a0 + 0x124);
    if ((iVar15 < 0x36) && (-1 < iVar15)) {
        uVar9 = SUB84(dVar21, 0);
        switch (iVar15) {
        case 0:
            game_sub_03f430((u8 *)((int)puVar17 + -0x108), a1[7], 0x2e8);
            iVar16 = a1[1];
            *(int *)((int)puVar17 + -0xaa0) = *a1;
            *(int *)((int)puVar17 + -0xa9c) = iVar16;
            iVar16 = a1[3];
            *(int *)((int)puVar17 + -0xa98) = a1[2];
            *(int *)((int)puVar17 + -0xa94) = iVar16;
            iVar16 = a1[5];
            *(int *)((int)puVar17 + -0xa90) = a1[4];
            *(int *)((int)puVar17 + -0xa8c) = iVar16;
            iVar16 = a1[7];
            *(int *)((int)puVar17 + -0xa88) = a1[6];
            *(int *)((int)puVar17 + -0xa84) = iVar16;
            iVar16 = a1[9];
            *(int *)((int)puVar17 + -0xa80) = a1[8];
            *(int *)((int)puVar17 + -0xa7c) = iVar16;
            iVar16 = a1[0xb];
            *(int *)((int)puVar17 + -0xa78) = a1[10];
            *(int *)((int)puVar17 + -0xa74) = iVar16;
            *(int *)((int)puVar17 + -0xaa4) = a1[6];
            *(u8 **)((int)puVar17 + -0xaa8) = (u8 *)((int)puVar17 + -0x108);
            pcVar10 = (code *)game_sub_046684(a0, *(u32 *)a1[1], (u8 *)((int)puVar17 + -0x30), pcVar14);
            *(code **)((int)puVar17 + -0x698) = pcVar10;
            iVar16 = *(int *)((int)puVar17 + -0x698);
            CAnimal_sub_026038((u8 *)((int)puVar17 + -0x108), 0xffffffff, 0xffffffff, pcVar10);
            break;
        case 1:
            if ((pcVar14 == NULL) || (pcVar14 == (code *)0x2)) {
                uVar2 = game_sub_04b168(a0, *(u32 *)a1[1], (u8 *)((int)puVar17 + -0x30), pcVar10);
                *(u32 *)((int)puVar17 + -0x69c) = uVar2;
                iVar16 = *(int *)((int)puVar17 + -0x69c);
            } else if (pcVar14 == (code *)0x1) {
                timer_stop_94(a0, ar5_00, 0x2e8, pcVar10);

                *(u32 *)((int)puVar17 + -0x2c) = 0x43340000;

                uVar2 = game_sub_04c314(a0, *(u32 *)a1[1], (u8 *)((int)puVar17 + -0x30));
                *(u32 *)((int)puVar17 + -0x6a0) = uVar2;
                iVar16 = *(int *)((int)puVar17 + -0x6a0);
            }
            break;
        case 2:
            *(u32 *)(a0 + 0x214) = 0;
            (**(code **)(*(int *)a1[6] + 0x128))((int *)a1[6], *(u32 *)a1[1], 0x2e8, pcVar10);

            *(int *)((int)puVar17 + -0x8f4) = (int)((u64)dVar19 >> 0x20);
            in_dr14 = (double)CONCAT44((int)((u64)in_dr14 >> 0x20), *(u32 *)((int)puVar17 + -0x8f4));
            dVar24 = (double)CONCAT44(0x43340000, SUB84(dVar21, 0));

            bVar27 = SUB84(in_dr14, 0) < (float)((u64)dVar24 >> 0x20);

            if (bVar27) {
                iVar16 = a1[6];
                *(int *)((int)puVar17 + -0xa70) = a1[1];
                pcVar10 = game_sub_04d62c;
                uVar2 = game_sub_04d62c(a0, **(u32 **)((int)puVar17 + -0xa70), iVar16, game_sub_04d62c);
                *(u32 *)((int)puVar17 + -0x900) = uVar2;
                iVar16 = *(int *)((int)puVar17 + -0x900);
                timer_sub_031c74(a0, (u8 *)((int)puVar17 + -0x30), *(u32 *)a1[1], pcVar10);
            } else {
                uVar9 = *(u32 *)a1[1];
                pcVar10 = game_sub_057164;
                uVar2 = game_sub_057164(a0, uVar9, uVar9, game_sub_057164);
                *(u32 *)((int)puVar17 + -0x8f8) = uVar2;
                if (*(int *)((int)puVar17 + -0x8f8) == 0) {
                    uVar2 = game_sub_04db38(a0, *(u32 *)a1[1], uVar9, pcVar10);
                    *(u32 *)((int)puVar17 + -0x8fc) = uVar2;
                    iVar16 = *(int *)((int)puVar17 + -0x8fc);
                    uVar2 = *(u32 *)(a1[1] + 4);
                    timer_sub_031ab4(a0, uVar2, uVar2, pcVar10);
                    Vec3_assign(a0 + 0x80, a0 + 0x14, uVar2, pcVar10);
                }
            }
            break;
        case 3:
            iVar15 = *(int *)(a0 + 300);
            if (iVar15 == 0) {
                *(u32 *)(a0 + 0x178) = 1;
                pcVar10 = pcVar14;
                uVar2 = game_sub_055c38(a0, *(u32 *)a1[1], a0 + 0x34c, pcVar14);
                *(u32 *)((int)puVar17 + -0x734) = uVar2;
                if (*(int *)((int)puVar17 + -0x734) == 0) {
                    *(u32 *)(a0 + 0x178) = 0;
                    *(int *)((int)puVar17 + -0x950) = a0;
                    pcVar10 = *(code **)((int)puVar17 + -0x950);
                    *(int *)(*(int *)((int)puVar17 + -0x950) + 300) = *(int *)(pcVar10 + 300) + 1;
                }
            } else if (iVar15 == 1) {
                uVar2 = game_sub_057164(a0, *(u32 *)a1[1], 300, pcVar10);
                *(u32 *)((int)puVar17 + -0x738) = uVar2;
                if (*(int *)((int)puVar17 + -0x738) == 0) {
                    *(u32 *)(a0 + 0x2b8) = 3;
                    uVar12 = 0;
                    uVar9 = 0xffffffff;
                    uVar2 = 0x1d;
                    CAnimBody_SetAnimation(a0 + 0xb0, 0x1d, 0xffffffff, 0);
                    CAnimBody_SetFrame(a0 + 0xb0, uVar2, uVar9, uVar12);
                    *(int *)((int)puVar17 + -0x954) = a0;
                    pcVar10 = *(code **)(*(int *)((int)puVar17 + -0x954) + 300);
                    *(code **)(*(int *)((int)puVar17 + -0x954) + 300) = pcVar10 + 1;
                }
            } else if (iVar15 == 2) {
                *(code **)((int)puVar17 + -0xa6c) = CAnimBody_AdvanceFrame_wrapper;
                uVar2 = (**(code **)((int)puVar17 + -0xa6c))(a0 + 0xb0, ar5_00, 300, pcVar10);
                *(u32 *)((int)puVar17 + -0x73c) = uVar2;
                if (*(int *)((int)puVar17 + -0x73c) == 1) {
                    *(int *)((int)puVar17 + -0x958) = a0;
                    *(u32 *)((int)puVar17 + -0xa68) = *(u32 *)(*(int *)((int)puVar17 + -0x958) + 300);
                    *(u32 *)((int)puVar17 + -0xa64) = *(u32 *)((int)puVar17 + -0xa68);
                    *(int *)((int)puVar17 + -0xa64) = *(int *)((int)puVar17 + -0xa64) + 1;
                    *(u32 *)(*(int *)((int)puVar17 + -0x958) + 300) = *(u32 *)((int)puVar17 + -0xa64);
                    uVar2 = 0x11;
                    CAnimBody_SetAnimation(a0 + 0xb0, 0x11, 0xffffffff, 0);
                    pcVar10 = (code *)(a0 + 0xb0);
                    CAnimBody_SetFrame(pcVar10, uVar2, 0xb0, pcVar10);
                    *(u32 *)(a0 + 0x2b8) = 3;
                }
            } else if (iVar15 == 3) {
                CAnimBody_AdvanceFrame_033d88(a0 + 0xb0, ar5_00, 300, pcVar10);
            }
            break;
        case 4:
            *(u32 *)(a0 + 0x214) = 0;
            pcVar10 = NULL;
            iVar15 = -1;
            uVar9 = 0x11;
            uVar2 = CAnimBody_SetAnimation(a0 + 0xb0, 0x11, 0xffffffff, 0);
            *(u32 *)((int)puVar17 + -0x740) = uVar2;
            if (*(int *)((int)puVar17 + -0x740) != 6) {
                pcVar10 = (code *)0xb0;
                iVar15 = a0 + 0xb0;
                CAnimBody_SetFrame(iVar15, uVar9, iVar15, 0xb0);
            }
            *(u32 *)(a0 + 0x2b8) = 3;
            uVar2 = CAnimBody_AdvanceFrame_wrapper(a0 + 0xb0, uVar9, iVar15, pcVar10);
            *(u32 *)((int)puVar17 + -0x744) = uVar2;
            if (*(int *)((int)puVar17 + -0x744) == 1) {
                pcVar10 = (code *)0x2b8;
                *(u32 *)(a0 + 0x2b8) = 2;
                *(u32 *)(a0 + 0x214) = 1;
                iVar16 = 0;
                *(u32 *)(a0 + 300) = 0;
            }
            break;
        case 5:
            *(u32 *)(a0 + 0x178) = 1;
            *(u32 *)(a0 + 0x214) = 0;
            iVar15 = *(int *)(a0 + 300);
            if ((iVar15 < 6) && (-1 < iVar15)) {
                /* WARNING: Could not recover jumptable at 0x8c040962. Too many branches */
                /* WARNING: Treating indirect jump as call */
                uVar2 = (*(code *)(&(&DATA_8c04098c))[iVar15])();
                return uVar2;
            }
            break;
        case 6:
            *(u32 *)(a0 + 0x214) = 0;
            *(code **)((int)puVar17 + -0xa74) = pcVar14;
            *(u32 *)((int)puVar17 + -0xa78) = *(u32 *)(a1[1] + 4);
            pcVar10 = (code *)((int)puVar17 + -0x30);
            uVar2 = game_sub_04f034(a0, *a1, *(u32 *)a1[1], pcVar10);
            *(u32 *)((int)puVar17 + -0x704) = uVar2;
            iVar16 = *(int *)((int)puVar17 + -0x704);
            if (iVar16 != 1) {
                *(u32 *)(a0 + 0x214) = 1;
            }
            break;
        default:
            goto override_jmp_8c03f9a2_case_7;
        case 8:
            pcVar10 = (code *)0x214;
            *(u32 *)(a0 + 0x214) = 0;
            *(u32 *)(a0 + 0x178) = 1;
            if (*(int *)(a0 + 0x128) < 4) {
                iVar16 = 2;
            } else {
                uVar2 = 300;
                iVar15 = *(int *)(a0 + 300);
                if (iVar15 == 0) {
                    uVar2 = game_sub_055c38(a0, *(u32 *)a1[1], a0 + 0x34c, pcVar14);
                    *(u32 *)((int)puVar17 + -0x748) = uVar2;
                    pcVar10 = *(code **)((int)puVar17 + -0x748);
                    if (pcVar10 == NULL) {
                        *(int *)((int)puVar17 + -0x95c) = a0;
                        *(int *)(*(int *)((int)puVar17 + -0x95c) + 300) =
                            *(int *)(*(int *)((int)puVar17 + -0x95c) + 300) + 1;
                    }
                } else if (iVar15 == 1) {
                    pcVar10 = game_sub_057164;
                    uVar2 = game_sub_057164(a0, *(u32 *)a1[1], 300, game_sub_057164);
                    *(u32 *)((int)puVar17 + -0x74c) = uVar2;
                    if (*(int *)((int)puVar17 + -0x74c) == 0) {
                        *(int *)((int)puVar17 + -0x960) = a0;
                        *(int *)(*(int *)((int)puVar17 + -0x960) + 300) =
                            *(int *)(*(int *)((int)puVar17 + -0x960) + 300) + 1;
                        *(u32 *)(a0 + 0x290) = 0;
                        *(u32 *)(a0 + 0x40) = 5;
                        *(u32 *)(a0 + 700) = 1;
                    }
                } else if (iVar15 == 2) {
                    *(u32 *)(a0 + 700) = 1;
                    pdVar6 = (double *)a1[7];

                    dVar24 = (double)CONCAT44(*(u32 *)pdVar6, uVar9);
                    dVar21 = (double)CONCAT44(0x40800000, SUB84(dVar19, 0));

                    dVar24 =
                        (double)CONCAT44((float)((u64)dVar24 >> 0x20) / (float)((u64)dVar21 >> 0x20), SUB84(dVar24, 0));

                    *(int *)((int)puVar17 + -0x50) = (int)((u64)dVar24 >> 0x20);
                    *(u32 *)((int)puVar17 + -0x48) = 0x44898000;

                    puVar5 = (u8 *)((int)puVar17 + -0x50);
                    (**(code **)(*(int *)a1[6] + 0x128))((int *)a1[6], puVar5, 300, pdVar6);

                    *(int *)((int)puVar17 + -0x750) = (int)((u64)dVar21 >> 0x20);
                    *(u32 *)((int)puVar17 + -0x4c) = *(u32 *)((int)puVar17 + -0x750);

                    uVar23 = 0;
                    Vec3_ctor_xyz((u8 *)((int)puVar17 + -0x270), puVar5, uVar2, pdVar6);
                    uVar9 = SUB84(dVar21, 0);
                    pcVar10 = (code *)((int)puVar17 + -0x270);
                    Vec3_assign(a0 + 0x54, pcVar10, pcVar10, pdVar6);
                    uVar2 = 0xffffffff;
                    Vec3_dtor((u8 *)((int)puVar17 + -0x270), 0xffffffff, pcVar10, pdVar6);
                    if (a1[2] == 1) {
                        dVar24 = (double)(u64)uVar23;

                        uVar23 = 0;
                        dVar24 = in_xd4;

                        pdVar6 = (double *)((int)puVar17 + -0x280);
                        pcVar10 = Vec3_ctor_xyz;
                        Vec3_ctor_xyz(pdVar6, uVar2, Vec3_ctor_xyz, pdVar6);
                        Vec3_assign(a0 + 0x54, (u8 *)((int)puVar17 + -0x280), pcVar10, pdVar6);
                        Vec3_dtor((u8 *)((int)puVar17 + -0x280), 0xffffffff, pcVar10, pdVar6);

                        dVar21 = (double)CONCAT44(*(u32 *)((int)puVar17 + -0x50), uVar23);
                        dVar19 = (double)CONCAT44(0x42a08000, uVar9);

                        dVar21 = (double)CONCAT44((float)((u64)dVar21 >> 0x20) + (float)((u64)dVar19 >> 0x20),
                                                  SUB84(dVar21, 0));

                        *(int *)((int)puVar17 + -0x50) = (int)((u64)dVar21 >> 0x20);
                        dVar21 = (double)CONCAT44(0x43608000, *(u32 *)((int)puVar17 + -0x48));

                        fVar20 = SUB84(dVar21, 0) + (float)((u64)dVar21 >> 0x20);

                        *(float *)((int)puVar17 + -0x48) = fVar20;
                    }
                    Vec3_ctor_copy((u8 *)((int)puVar17 + -0x290), a0 + 0x54, pcVar10, pdVar6);
                    pcVar10 = (code *)((int)puVar17 + -0x290);
                    uVar2 = Vec3_sub_04e0e0(a0, *(u32 *)a1[1], (u8 *)((int)puVar17 + -0x50), pcVar10);
                    *(u32 *)((int)puVar17 + -0x754) = uVar2;
                    *(u32 *)((int)puVar17 + -0x668) = (u32)(*(int *)((int)puVar17 + -0x754) == 0);
                    uVar2 = 0xffffffff;
                    pcVar4 = Vec3_dtor;
                    Vec3_dtor((u8 *)((int)puVar17 + -0x290), 0xffffffff, Vec3_dtor, pcVar10);
                    if (*(int *)((int)puVar17 + -0x668) != 0) {
                        Vec3_assign_f(a0 + 0x2d4, uVar2, pcVar4, pcVar10);
                        Vec3_assign_f(a0 + 0x2a8, uVar2, pcVar4, 0x2a8);
                        *(int *)((int)puVar17 + -0x964) = a0;
                        *(int *)(*(int *)((int)puVar17 + -0x964) + 300) =
                            *(int *)(*(int *)((int)puVar17 + -0x964) + 300) + 1;
                        pcVar10 = NULL;
                        CAnimBody_SetAnimation(a0 + 0xb0, 0x1a, 0xffffffff, 0);
                        *(u32 *)(a0 + 0x218) = 0;
                    }
                    if (*(int *)(a0 + 0x290) == 1) {
                        *(int *)((int)puVar17 + -0x968) = a0;
                        pcVar10 = *(code **)((int)puVar17 + -0x968);
                        pcVar10[0x1fc] = (code)(*(u8 *)(*(int *)((int)puVar17 + -0x968) + 0x1fc) & 0xfb);
                    }
                } else if (iVar15 == 3) {
                    CAnimBody_AdvanceFrame_wrapper(a0 + 0xb0, ar5_00, a0 + 0xb0, 0x214);
                    iVar16 = 0;
                }
                *(u32 *)(a0 + 0x178) = 1;
            }
            break;
        case 9:
            *(int *)((int)puVar17 + -0x96c) = a0;
            *(u32 *)((int)puVar17 + -0xa70) = *(u32 *)((int)puVar17 + -0x96c);
            *(u8 *)(*(int *)((int)puVar17 + -0x96c) + 0x1fc) = *(u8 *)(*(int *)((int)puVar17 + -0xa70) + 0x1fc) & 0xfb;
            *(u32 *)(a0 + 0x214) = 0;
            *(u32 *)(a0 + 0x178) = 1;
            if (*(int *)(a0 + 0x128) < 4) {
                pcVar10 = (code *)0x2;
                iVar16 = 2;
            } else {
                uVar2 = 0;

                uVar7 = 0xffffffff;
                iVar15 = a1[2] + 0x4c;
                uVar12 = CAnimBody_SetAnimation(a0 + 0xb0, iVar15, 0xffffffff, 0);
                *(u32 *)((int)puVar17 + -0x758) = uVar12;
                if (*(int *)((int)puVar17 + -0x758) != 6) {
                    CAnimBody_SetFrame(a0 + 0xb0, iVar15, uVar7, uVar2);
                }
                pcVar10 = get_field_1c_026dd8;
                uVar2 = get_field_1c_026dd8(a0 + 0xb0, iVar15, uVar7);
                *(u32 *)((int)puVar17 + -0x75c) = uVar2;
                if (*(int *)((int)puVar17 + -0x75c) == 0x4c) {
                    uVar2 = get_field_1c_on_field_b0(a0, iVar15, get_field_1c_on_field_b0);
                    uVar7 = SUB84(in_dr14, 0);
                    *(u32 *)((int)puVar17 + -0x760) = uVar2;
                    uVar12 = *(u32 *)((int)puVar17 + -0x760);
                    iVar15 = a0 + 0xb0;
                    uVar2 = uVar12;
                    uVar9 = array_at_field_14(iVar15, uVar12, uVar12, iVar15);
                    *(u32 *)((int)puVar17 + -0x764) = uVar9;
                    uVar2 = deref_u32(*(u32 *)((int)puVar17 + -0x764));
                    *(u32 *)((int)puVar17 + -0x768) = uVar2;
                    puVar3 = *(u32 **)((int)puVar17 + -0x768);
                    uVar2 = puVar3[1];
                    *(u32 *)(a0 + 0xb4) = *puVar3;
                    *(u32 *)(a0 + 0xb8) = uVar2;
                    *(u32 *)(a0 + 0xbc) = puVar3[2];
                    puVar3 = &g_8c1362ac;
                    *(u32 **)(a0 + 0xb4) = &g_8c1362ac;
                    iVar15 = a0 + 0xb0;
                    CAnimBody_GetCurFrame(iVar15, uVar12, iVar15, &g_8c1362ac);

                    *(int *)((int)puVar17 + -0x76c) = (int)((u64)dVar19 >> 0x20);

                    *(u8 **)((int)puVar17 + -0xa74) = (u8 *)((int)puVar17 + -0x2a0);
                    game_sub_034384(a0 + 0xb0, **(u32 **)(a0 + 0xb4), iVar15, puVar3);
                    Vec3_assign((u8 *)((int)puVar17 + -0x7c), (u8 *)((int)puVar17 + -0x2a0), iVar15, puVar3);
                    uVar2 = 0xffffffff;
                    Vec3_dtor((u8 *)((int)puVar17 + -0x2a0), 0xffffffff, iVar15, puVar3);
                    Vec3_assign_f(a0 + 0x2a8, uVar2, iVar15, puVar3);
                    *(u8 **)((int)puVar17 + -0xa74) = (u8 *)((int)puVar17 + -0x2b0);
                    pcVar10 = Vec3_sub;
                    Vec3_sub((u8 *)((int)puVar17 + -0x7c), a0 + 0x2d4, iVar15, Vec3_sub,
                             *(u32 *)((int)puVar17 + -0xa74));
                    puVar5 = (u8 *)((int)puVar17 + -0x2b0);
                    *(code **)((int)puVar17 + -0xa6c) = Vec3_assign;
                    (**(code **)((int)puVar17 + -0xa6c))(a0 + 0x2a8, puVar5, puVar5, pcVar10);
                    uVar2 = 0xffffffff;
                    Vec3_dtor((u8 *)((int)puVar17 + -0x2b0), 0xffffffff, puVar5, pcVar10);
                    *(u8 **)((int)puVar17 + -0xa74) = (u8 *)((int)puVar17 + -0x2c0);
                    Vec3_make(a0 + 0x14, uVar2, puVar5, pcVar10, *(u32 *)((int)puVar17 + -0xa74));
                    dVar24 = 5.26354424712089e-315;

                    dVar24 = in_xd4;

                    *(u8 **)((int)puVar17 + -0xa68) = (u8 *)((int)puVar17 + -0x2d0);
                    *(code **)((int)puVar17 + -0xa64) = Vec3_ctor_xyz;
                    (**(code **)((int)puVar17 + -0xa64))(*(u32 *)((int)puVar17 + -0xa68), uVar2, puVar5, pcVar10);
                    Vec3_cos_angle((u8 *)((int)puVar17 + -0x2c0), (u8 *)((int)puVar17 + -0x2d0), puVar5, pcVar10);

                    *(int *)((int)puVar17 + -0x770) = (int)((u64)dVar19 >> 0x20);
                    dVar21 = (double)CONCAT44(*(u32 *)((int)puVar17 + -0x770), uVar7);

                    Vec3_dtor((u8 *)((int)puVar17 + -0x2d0), 0xffffffff, puVar5, pcVar10);
                    puVar5 = (u8 *)((int)puVar17 + -0x2c0);
                    Vec3_dtor(puVar5, 0xffffffff, 0xffffffff, puVar5);
                    fVar20 = 0.0;
                    pcVar4 = Vec3_ctor_xyz;
                    Vec3_ctor_xyz((u8 *)((int)puVar17 + -0x2e0), (u8 *)((int)puVar17 + -0x2e0), Vec3_ctor_xyz, puVar5);
                    uVar2 = Vec3_sub_023334(a0 + 0x14, (u8 *)((int)puVar17 + -0x2e0), pcVar4, puVar5);
                    *(u32 *)((int)puVar17 + -0x774) = uVar2;
                    uVar9 = *(u32 *)((int)puVar17 + -0x774);
                    *(u32 *)((int)puVar17 + -0x66c) = uVar9;
                    uVar2 = 0xffffffff;
                    Vec3_dtor((u8 *)((int)puVar17 + -0x2e0), 0xffffffff, pcVar4, uVar9);
                    fVar26 = (float)((u64)dVar21 >> 0x20);
                    if (*(int *)((int)puVar17 + -0x66c) == 3) {

                        dVar21 = (double)CONCAT44(-fVar26, SUB84(dVar21, 0));

                        dVar22 = dVar21;

                        fVar20 = (float)((u64)dVar21 >> 0x20);
                        dVar22 = dVar24;

                        dVar24 = dVar22;
                        Vec3_set_xyz((u8 *)((int)puVar17 + -0x2ec), uVar2, pcVar4, uVar9);
                        *(u8 **)((int)puVar17 + -0xa74) = (u8 *)((int)puVar17 + -0x2fc);
                        uVar2 = 0x2a8;
                        iVar15 = a0 + 0x2a8;
                        Vec3_sub_023484(iVar15, (u8 *)((int)puVar17 + -0x2ec), iVar15, 0x2a8,
                                        *(u32 *)((int)puVar17 + -0xa74));
                        Vec3_assign(a0 + 0x2a8, (u8 *)((int)puVar17 + -0x2fc), iVar15, uVar2);
                        Vec3_dtor((u8 *)((int)puVar17 + -0x2fc), 0xffffffff, iVar15, uVar2);
                        pcVar4 = (code *)((int)puVar17 + -0x2ec);
                        object_dtor_delete(pcVar4, 0xffffffff, pcVar4, 0xffffffff);
                    } else if (*(int *)((int)puVar17 + -0x66c) == 4) {
                        fVar20 = 0.0;
                        dVar22 = dVar21;

                        dVar22 = dVar24;
                        fVar20 = fVar26;

                        dVar24 = dVar22;
                        Vec3_set_xyz((u8 *)((int)puVar17 + -0x308), uVar2, pcVar4, uVar9);
                        *(u8 **)((int)puVar17 + -0xa74) = (u8 *)((int)puVar17 + -0x318);
                        uVar2 = 0x2a8;
                        iVar15 = a0 + 0x2a8;
                        Vec3_sub_023484(iVar15, (u8 *)((int)puVar17 + -0x308), iVar15, 0x2a8,
                                        *(u32 *)((int)puVar17 + -0xa74));
                        Vec3_assign(a0 + 0x2a8, (u8 *)((int)puVar17 + -0x318), iVar15, uVar2);
                        pcVar4 = (code *)((int)puVar17 + -0x318);
                        Vec3_dtor(pcVar4, 0xffffffff, pcVar4, uVar2);
                        object_dtor_delete((u8 *)((int)puVar17 + -0x308), 0xffffffff, pcVar4, uVar2);
                    }
                    puVar8 = (u8 *)((int)puVar17 + -0x7c);
                    pcVar10 = Vec3_assign;
                    Vec3_assign(a0 + 0x2d4, puVar8, pcVar4, Vec3_assign);
                    puVar5 = (u8 *)0xb0;
                    CAnimBody_GetCurFrame(a0 + 0xb0, puVar8, 0xb0, pcVar10);

                    *(int *)((int)puVar17 + -0x778) = (int)((u64)dVar19 >> 0x20);
                    dVar21 = (double)CONCAT44((int)((u64)dVar21 >> 0x20), *(u32 *)((int)puVar17 + -0x778));

                    dVar22 = (double)CONCAT44(0x3f800000, fVar20);

                    bVar27 = SUB84(dVar21, 0) < 1.0;

                    if (bVar27) {
                        vec3_clear(a0 + 0x54, puVar8, puVar5, pcVar10);

                        dVar21 = (double)CONCAT44(g_8c2803b0, SUB84(dVar19, 0));

                        pcVar10 = (code *)a1[1];
                        puVar5 = *(u8 **)pcVar10;

                        dVar19 = (double)CONCAT44(*(u32 *)(puVar5 + 8), SUB84(dVar22, 0));

                        dVar21 = (double)CONCAT44((float)((u64)dVar21 >> 0x20) - (float)((u64)dVar19 >> 0x20),
                                                  SUB84(dVar21, 0));

                        dVar21 = (double)CONCAT44((int)((u64)dVar21 >> 0x20), 0x43608000);

                        dVar21 = (double)CONCAT44((float)((u64)dVar21 >> 0x20) - SUB84(dVar21, 0), SUB84(dVar21, 0));

                        dVar21 = (double)CONCAT44((int)((u64)dVar21 >> 0x20), 0x43480000);

                        dVar21 = (double)CONCAT44((float)((u64)dVar21 >> 0x20) / SUB84(dVar21, 0), SUB84(dVar21, 0));

                        *(int *)(a0 + 0x5c) = (int)((u64)dVar21 >> 0x20);
                        dVar19 = (double)(u64)g_8c2803a8;

                        dVar21 = (double)CONCAT44(*(u32 *)*(double **)a1[1], SUB84(dVar19, 0));

                        fVar20 = SUB84(dVar21, 0) - (float)((u64)dVar21 >> 0x20);

                        dVar21 = (double)CONCAT44(0x42a08000, fVar20);

                        fVar20 = SUB84(dVar21, 0) - (float)((u64)dVar21 >> 0x20);

                        dVar21 = (double)CONCAT44(0x43480000, fVar20);

                        fVar20 = SUB84(dVar21, 0) / (float)((u64)dVar21 >> 0x20);

                        *(float *)(a0 + 0x54) = fVar20;

                    } else {

                        dVar24 = (double)CONCAT44(0x43480000, fVar20);

                        bVar27 = SUB84(dVar21, 0) < (float)((u64)dVar24 >> 0x20);

                        if (bVar27) {
                            puVar8 = (u8 *)(a0 + 0x54);
                            puVar5 = puVar8;
                            Vec3_add_assign(a0 + 0x2a8, puVar8);
                        }
                    }
                    uVar2 = CAnimBody_AdvanceFrame_033b98(a0 + 0xb0, puVar8, puVar5, pcVar10);
                    *(u32 *)((int)puVar17 + -0x77c) = uVar2;
                    if (*(int *)((int)puVar17 + -0x77c) == 1) {
                        *(u32 *)(a0 + 0x214) = 1;
                        Vec3_assign_f(a0 + 0x2a8, puVar8, puVar5, 1);
                        *(u32 *)(a0 + 300) = 0;
                        *(int *)((int)puVar17 + -0x970) = a0;
                        *(u8 *)(*(int *)((int)puVar17 + -0x970) + 0x1fc) =
                            *(u8 *)(*(int *)((int)puVar17 + -0x970) + 0x1fc) & 0xfb | 4;
                        pcVar10 = NULL;
                        iVar16 = 0;
                        *(u32 *)(a0 + 0x178) = 0;
                    }
                } else {
                    CAnimBody_GetCurFrame(a0 + 0xb0, iVar15, uVar7, pcVar10);

                    *(int *)((int)puVar17 + -0x780) = (int)((u64)dVar19 >> 0x20);
                    in_dr14 = (double)CONCAT44((int)((u64)in_dr14 >> 0x20), *(u32 *)((int)puVar17 + -0x780));

                    iVar11 = *(int *)(a0 + 800);
                    fVar20 = SUB84(in_dr14, 0);
                    if (iVar11 == 0) {

                        dVar24 = (double)CONCAT44(0x43928000, uVar9);

                        bVar27 = fVar20 < (float)((u64)dVar24 >> 0x20);

                        if (!bVar27) {
                            iVar15 = 0x14;
                            se_play_at_object(a0, 0x14, *(u32 *)a1[1], *(u32 *)(a0 + 0x244));
                            *(int *)((int)puVar17 + -0x974) = a0;
                            *(int *)(*(int *)((int)puVar17 + -0x974) + 800) =
                                *(int *)(*(int *)((int)puVar17 + -0x974) + 800) + 1;
                        }
                    } else if (iVar11 == 1) {

                        dVar24 = (double)CONCAT44(0x43b18000, SUB84(dVar19, 0));

                        bVar27 = fVar20 < (float)((u64)dVar24 >> 0x20);

                        if (!bVar27) {
                            iVar15 = 0x16;
                            se_play_at_object(a0, 0x16, *(u32 *)a1[1], *(u32 *)(a0 + 0x244));
                            *(int *)((int)puVar17 + -0x978) = a0;
                            *(int *)(*(int *)((int)puVar17 + -0x978) + 800) =
                                *(int *)(*(int *)((int)puVar17 + -0x978) + 800) + 1;
                        }
                    } else if (iVar11 == 2) {

                        dVar24 = (double)CONCAT44(0x43eb0000, SUB84(dVar19, 0));

                        bVar27 = fVar20 < (float)((u64)dVar24 >> 0x20);

                        if (!bVar27) {
                            iVar15 = 0x18;
                            se_play_at_object(a0, 0x18, *(u32 *)a1[1], *(u32 *)(a0 + 0x244));
                            *(int *)((int)puVar17 + -0x97c) = a0;
                            *(int *)(*(int *)((int)puVar17 + -0x97c) + 800) =
                                *(int *)(*(int *)((int)puVar17 + -0x97c) + 800) + 1;
                        }
                    }
                    pcVar10 = (code *)(a0 + 0xb0);
                    uVar2 = CAnimBody_AdvanceFrame_033b98(pcVar10, iVar15, 0xb0, pcVar10);
                    *(u32 *)((int)puVar17 + -0x784) = uVar2;
                    if (*(int *)((int)puVar17 + -0x784) == 1) {
                        *(u32 *)(a0 + 0x214) = 1;
                        iVar16 = 0;
                        *(u32 *)(a0 + 0x178) = 0;
                        flags6_set_all(a0 + 0x1fc, 0x178, 0x1fc);
                        *(u32 *)(a0 + 800) = 0;
                    }
                }
                *(u32 *)(a0 + 0x178) = 1;
            }
            break;
        case 0xb:
            if (pcVar14 == (code *)0x1) {
                pcVar10 = (code *)game_sub_0526a0(a0, *(u32 *)a1[1], 1, pcVar10);
                *(code **)((int)puVar17 + -0x6ac) = pcVar10;
                iVar16 = *(int *)((int)puVar17 + -0x6ac);
            } else if ((pcVar14 == NULL) || (pcVar14 == (code *)0x2)) {
                timer_sub_031c74(a0, (u8 *)((int)puVar17 + -0x30), *(u32 *)a1[1], pcVar10);
                pcVar10 = (code *)game_sub_0526a0(a0, *(u32 *)a1[1], pcVar14, pcVar10);
                *(code **)((int)puVar17 + -0x6b0) = pcVar10;
                iVar16 = *(int *)((int)puVar17 + -0x6b0);
            } else {
                iVar16 = 0;
            }
            break;
        case 0xc:
            if (pcVar14 == (code *)0x1) {
                *(u32 *)((int)puVar17 + -0xa74) = 0xffffffff;
                pcVar10 = *(code **)a1[1];
                uVar2 = game_sub_053f24(a0, *a1, 1, pcVar10);
                *(u32 *)((int)puVar17 + -0x6b4) = uVar2;
                iVar16 = *(int *)((int)puVar17 + -0x6b4);
            } else {
                *(u32 *)((int)puVar17 + -0xa74) = 0xffffffff;
                pcVar10 = *(code **)a1[1];
                uVar2 = game_sub_053730(a0, *a1, pcVar14, pcVar10);
                *(u32 *)((int)puVar17 + -0x6b8) = uVar2;
                iVar16 = *(int *)((int)puVar17 + -0x6b8);
            }
            break;
        case 0x10:
            if (pcVar14 == (code *)0x1) {
                *(int *)((int)puVar17 + -0xa74) = a1[6];
                pcVar10 = (code *)a1[7];
                uVar2 = game_sub_04eb14(a0, *(u32 *)a1[1], 1, pcVar10);
                *(u32 *)((int)puVar17 + -0x7a4) = uVar2;
                iVar16 = *(int *)((int)puVar17 + -0x7a4);
            } else {
                *(int *)((int)puVar17 + -0xa74) = a1[6];
                pcVar10 = (code *)a1[7];
                uVar2 = game_sub_04e7e0(a0, *(u32 *)a1[1], pcVar14, pcVar10);
                *(u32 *)((int)puVar17 + -0x7a0) = uVar2;
                iVar16 = *(int *)((int)puVar17 + -0x7a0);
            }
            break;
        case 0x11:
            if (pcVar14 == (code *)0x1) {
                *(u32 *)(a0 + 700) = 1;
                Vec3_ctor_xyz((u8 *)((int)puVar17 + -0x118), ar5_00, 0x2e8, pcVar10);
                *(int *)((int)puVar17 + -0xa74) = a1[6];
                pcVar10 = (code *)a1[3];
                puVar5 = (u8 *)((int)puVar17 + -0x118);
                uVar2 = *(u32 *)a1[1];
                *(code **)((int)puVar17 + -0xa6c) = game_sub_055750;
                uVar2 = (**(code **)((int)puVar17 + -0xa6c))(a0, uVar2, puVar5, pcVar10);
                *(u32 *)((int)puVar17 + -0x6a4) = uVar2;
                iVar16 = *(int *)((int)puVar17 + -0x6a4);
                Vec3_dtor((u8 *)((int)puVar17 + -0x118), 0xffffffff, puVar5, pcVar10);
            } else {
                *(code **)((int)puVar17 + -0xa68) = Vec3_ctor_xyz;
                (**(code **)((int)puVar17 + -0xa68))((u8 *)((int)puVar17 + -0x128), ar5_00, 0x2e8, pcVar10);
                *(int *)((int)puVar17 + -0xa64) = a1[6];
                *(u32 *)((int)puVar17 + -0xa74) = *(u32 *)((int)puVar17 + -0xa64);
                pcVar10 = (code *)a1[3];
                uVar2 = game_sub_055490(a0, *(u32 *)a1[1], (u8 *)((int)puVar17 + -0x128), pcVar10);
                *(u32 *)((int)puVar17 + -0x6a8) = uVar2;
                iVar16 = *(int *)((int)puVar17 + -0x6a8);
                Vec3_dtor((u8 *)((int)puVar17 + -0x128), 0xffffffff, (u8 *)((int)puVar17 + -0x128), pcVar10);
            }
            break;
        case 0x12:
            *(u32 *)(a0 + 700) = 1;
            while (iVar15 = *(int *)(a0 + 0x134), iVar15 == 0) {
                if (a1[0xb] == 1) {
                    *(u32 *)((int)puVar17 + -0x64c) = 0;
                    uVar2 = 0xffffffff;
                    pcVar10 = Vec3_dtor;
                    Vec3_dtor((u8 *)((int)puVar17 + -0xa8), 0xffffffff, Vec3_dtor, 0xffffffff);
                    free_if_nonnull_wrap_102790((u8 *)((int)puVar17 + -0x98), 0xffffffff, pcVar10, uVar2);
                    Vec3_dtor((u8 *)((int)puVar17 + -0x8c), 0xffffffff, pcVar10, uVar2);
                    Vec3_dtor((u8 *)((int)puVar17 + -0x7c), 0xffffffff, pcVar10, uVar2);
                    free_if_nonnull_wrap_102790((u8 *)((int)puVar17 + -0x6c), 0xffffffff, pcVar10, uVar2);
                    uVar2 = 0xffffffff;
                    Vec3_dtor((u8 *)((int)puVar17 + -0x60), 0xffffffff, pcVar10, 0xffffffff);
                    pcVar10 = Vec3_dtor;
                    Vec3_dtor((u8 *)((int)puVar17 + -0x50), 0xffffffff, Vec3_dtor, uVar2);
                    puVar5 = (u8 *)((int)puVar17 + -0x40);
                    Vec3_dtor(puVar5, 0xffffffff, pcVar10, puVar5);
                    Vec3_dtor((u8 *)((int)puVar17 + -0x30), 0xffffffff, pcVar10, puVar5);
                    return *(u32 *)((int)puVar17 + -0x64c);
                }
                uVar2 = get_field_24_026024(a1[6], 0x134, pdVar6, pcVar10);
                *(u32 *)((int)puVar17 + -0x6d4) = uVar2;
                if (*(int *)((int)puVar17 + -0x6d4) == 0) {
                    *(u32 *)(a0 + 700) = 1;
                    pcVar10 = *(code **)(a0 + 0x21c);
                    if (pcVar10 == NULL) {
                        pdVar6 = (double *)(a1[7] + 8);

                        dVar21 = (double)CONCAT44(*(u32 *)pdVar6, *(u32 *)(a0 + 0x48));

                        dVar21 = (double)CONCAT44((float)((u64)dVar21 >> 0x20) - SUB84(dVar21, 0), SUB84(dVar21, 0));

                        *(int *)((int)puVar17 + -0x28) = (int)((u64)dVar21 >> 0x20);

                        Vec3_assign(a0 + 0x248, (u8 *)((int)puVar17 + -0x30), pdVar6, 0);
                        *(u32 *)(a0 + 0x40) = 5;
                        piVar1 = (int *)a1[6];
                        uVar2 = (**(code **)(*piVar1 + 0x130))(piVar1, a0 + 0x248, pdVar6, pcVar10);
                        *(u32 *)((int)puVar17 + -0x6d8) = uVar2;
                        iVar15 = *(int *)((int)puVar17 + -0x6d8);
                        if (iVar15 == 0) {
                            *(int *)((int)puVar17 + -0x918) = a0;
                            *(int *)(*(int *)((int)puVar17 + -0x918) + 0x134) =
                                *(int *)(*(int *)((int)puVar17 + -0x918) + 0x134) + 1;
                            *(u8 **)((int)puVar17 + -0xa74) = &g_8c125d58;
                            pcVar10 = (code *)a1[6];

                            dVar21 = (double)CONCAT44(*(u32 *)(a0 + 0x48), 0x3f99999a);

                            uVar2 = SUB84(dVar21, 0);

                            *(int *)((int)puVar17 + -0xa6c) = a1[3];
                            pdVar6 = *(double **)((int)puVar17 + -0xa6c);
                            game_sub_032788(a0, a0 + 0x248, pdVar6, pcVar10);

                            dVar21 = (double)CONCAT44(0x43340000, uVar2);
                            *(u32 *)(a0 + 0x24c) = 0x43340000;

                        } else if (iVar15 == 1) {
                            *(int *)((int)puVar17 + -0x91c) = a0;
                            *(u32 *)((int)puVar17 + -0xa68) = 0x134;
                            *(u32 *)((int)puVar17 + -0xa64) = *(u32 *)((int)puVar17 + -0x91c);
                            *(int *)(*(int *)((int)puVar17 + -0xa68) + *(int *)((int)puVar17 + -0x91c)) =
                                *(int *)(*(int *)((int)puVar17 + -0xa64) + 0x134) + 2;
                            iVar15 = *(int *)a1[6];
                            pcVar10 = *(code **)(iVar15 + 0x128);
                            (*pcVar10)((int *)a1[6], a0 + 0x248, iVar15, pcVar10);
                            uVar2 = SUB84(dVar21, 0);

                            *(int *)((int)puVar17 + -0x6dc) = (int)((u64)dVar19 >> 0x20);

                            puVar3 = (u32 *)a1[6];
                            pdVar6 = (double *)*puVar3;
                            (**(code **)((int)pdVar6 + 0x184))(puVar3, puVar3, pdVar6, pcVar10);
                            uVar9 = (u32)((u64)dVar19 >> 0x20);

                            *(u32 *)((int)puVar17 + -0x6e0) = uVar9;
                            dVar19 = (double)CONCAT44(uVar9, *(u32 *)((int)puVar17 + -0x6dc));
                            dVar21 = (double)CONCAT44(*(u32 *)((int)puVar17 + -0x6e0), uVar2);

                            dVar19 = (double)CONCAT44((int)((u64)dVar19 >> 0x20),
                                                      SUB84(dVar19, 0) + (float)((u64)dVar21 >> 0x20));

                            dVar21 = (double)CONCAT44(0x3f000000, SUB84(dVar21, 0));

                            dVar19 = (double)CONCAT44((int)((u64)dVar19 >> 0x20),
                                                      SUB84(dVar19, 0) * (float)((u64)dVar21 >> 0x20));

                            *(int *)(a0 + 0x24c) = SUB84(dVar19, 0);

                        } else if (iVar15 == 2) {
                            puVar13 = (u64 *)(a0 + 0x248);

                            dVar19 = (double)CONCAT44(0x44c80000, SUB84(dVar21, 0));
                            dVar21 = (double)CONCAT44(0x44c80000, *(u32 *)puVar13);

                            uVar2 = SUB84(dVar19, 0);

                            pcVar10 = float_check_errno;
                            float_check_errno(piVar1, float_check_errno, pdVar6, puVar13);

                            *(int *)((int)puVar17 + -0x6e4) = (int)((u64)dVar21 >> 0x20);
                            dVar19 = (double)CONCAT44(*(u32 *)(a0 + 0x248), uVar2);
                            dVar21 = (double)CONCAT44(0x44898000, SUB84(dVar21, 0));

                            uVar2 = SUB84(dVar19, 0);

                            float_check_errno(piVar1, pcVar10, pdVar6, puVar13);

                            *(int *)((int)puVar17 + -0x6e8) = (int)((u64)dVar21 >> 0x20);
                            dVar22 = (double)CONCAT44(*(u32 *)((int)puVar17 + -0x6e4), uVar2);
                            dVar19 = (double)CONCAT44(*(u32 *)((int)puVar17 + -0x6e8), SUB84(dVar21, 0));

                            bVar27 = (float)((u64)dVar22 >> 0x20) < (float)((u64)dVar19 >> 0x20);

                            uVar2 = SUB84(dVar22, 0);
                            if (bVar27) {

                                uVar2 = 0x44c80000;
                                *(u32 *)(a0 + 0x248) = 0x44c80000;

                                *(int *)((int)puVar17 + -0x920) = a0;
                                iVar11 = *(int *)((int)puVar17 + -0x920);
                                *(int *)(*(int *)((int)puVar17 + -0x920) + 0x134) = *(int *)(iVar11 + 0x134) + 2;
                                iVar15 = a0 + 0x248;
                                (**(code **)(*(int *)a1[6] + 0x128))((int *)a1[6], iVar15, 0x134, iVar11);

                                *(int *)((int)puVar17 + -0x6ec) = (int)((u64)dVar19 >> 0x20);

                                pcVar10 = *(code **)a1[6];
                                pdVar6 = *(double **)(pcVar10 + 0x184);
                                (*(code *)pdVar6)((u32 *)a1[6], iVar15, pdVar6, pcVar10);

                                *(int *)((int)puVar17 + -0x6f0) = (int)((u64)dVar19 >> 0x20);
                                in_dr14 =
                                    (double)CONCAT44((int)((u64)in_dr14 >> 0x20), *(u32 *)((int)puVar17 + -0x6ec));
                                dVar21 = (double)CONCAT44(*(u32 *)((int)puVar17 + -0x6f0), uVar2);

                                dVar22 = (double)CONCAT44((int)((u64)in_dr14 >> 0x20),
                                                          SUB84(in_dr14, 0) + (float)((u64)dVar21 >> 0x20));

                                dVar21 = (double)CONCAT44(0x3f000000, SUB84(dVar21, 0));

                                in_dr14 = (double)CONCAT44((int)((u64)dVar22 >> 0x20),
                                                           SUB84(dVar22, 0) * (float)((u64)dVar21 >> 0x20));

                                *(int *)(a0 + 0x24c) = SUB84(in_dr14, 0);

                            } else {

                                dVar19 = (double)CONCAT44(0x44898000, SUB84(dVar19, 0));
                                *(u32 *)(a0 + 0x248) = 0x44898000;

                                *(int *)((int)puVar17 + -0x924) = a0;
                                *(int *)(*(int *)((int)puVar17 + -0x924) + 0x134) =
                                    *(int *)(*(int *)((int)puVar17 + -0x924) + 0x134) + 1;
                                *(u8 **)((int)puVar17 + -0xa74) = &g_8c125d58;
                                pcVar10 = (code *)a1[6];

                                dVar21 = (double)CONCAT44(*(u32 *)(a0 + 0x48), uVar2);
                                dVar24 = (double)CONCAT44(0x3f99999a, SUB84(dVar24, 0));

                                uVar2 = SUB84(dVar21, 0);

                                pdVar6 = (double *)a1[3];
                                game_sub_032788(a0, a0 + 0x248, pdVar6, pcVar10);

                                dVar21 = (double)CONCAT44(0x43340000, uVar2);
                                *(u32 *)(a0 + 0x24c) = 0x43340000;
                            }
                        }
                        goto LAB_8c040722;
                    }
                    *(u32 *)(a0 + 0x134) = 3;
                } else {
                    *(u32 *)(a0 + 700) = 1;
                    iVar15 = a1[7];
                    pdVar6 = (double *)(iVar15 + 8);

                    dVar21 = (double)CONCAT44((int)((u64)dVar21 >> 0x20), *(u32 *)pdVar6);
                    dVar24 = (double)CONCAT44(*(u32 *)(a0 + 0x48), SUB84(dVar24, 0));
                    dVar19 = (double)CONCAT44(0x40800000, SUB84(dVar19, 0));

                    fVar20 = (float)((u64)dVar24 >> 0x20) * (float)((u64)dVar19 >> 0x20);
                    dVar24 = (double)CONCAT44(fVar20, SUB84(dVar24, 0));
                    dVar21 = (double)CONCAT44((int)((u64)dVar21 >> 0x20), SUB84(dVar21, 0) - fVar20);

                    *(int *)((int)puVar17 + -0x28) = SUB84(dVar21, 0);

                    (**(code **)(*(int *)a1[6] + 0x128))((int *)a1[6], (u8 *)((int)puVar17 + -0x30), pdVar6, iVar15);

                    *(int *)((int)puVar17 + -0x6f4) = (int)((u64)dVar19 >> 0x20);
                    dVar19 = (double)CONCAT44(*(u32 *)((int)puVar17 + -0x6f4), SUB84(dVar19, 0));
                    *(u32 *)((int)puVar17 + -0x2c) = *(u32 *)((int)puVar17 + -0x6f4);

                    pcVar10 = (code *)(a0 + 0x248);
                    Vec3_assign(pcVar10, (u8 *)((int)puVar17 + -0x30), Vec3_assign, pcVar10);
                    *(int *)((int)puVar17 + -0x928) = a0;
                    pdVar6 = (double *)(*(int *)(*(int *)((int)puVar17 + -0x928) + 0x134) + 1);
                    *(double **)(*(int *)((int)puVar17 + -0x928) + 0x134) = pdVar6;
                LAB_8c040722:
                    *(u32 *)(a0 + 0x40) = 5;
                }
            }
            if (iVar15 == 1) {
                pcVar10 = pcVar14;
                uVar2 = game_sub_054b74(a0, *(u32 *)a1[1], a0 + 0x248, pcVar14);
                *(u32 *)((int)puVar17 + -0x6f8) = uVar2;
                if (*(int *)((int)puVar17 + -0x6f8) == 0) {
                    *(int *)((int)puVar17 + -0x92c) = a0;
                    pcVar10 = *(code **)((int)puVar17 + -0x92c);
                    *(int *)(pcVar10 + 0x134) = *(int *)(*(int *)((int)puVar17 + -0x92c) + 0x134) + 2;
                }
            } else if (iVar15 == 2) {
                pcVar10 = pcVar14;
                uVar2 = game_sub_054d6c(a0, *(u32 *)a1[1], a0 + 0x248, pcVar14);
                *(u32 *)((int)puVar17 + -0x6fc) = uVar2;
                if (*(int *)((int)puVar17 + -0x6fc) == 0) {

                    *(u32 *)(a0 + 0x2c) = 0;

                    *(int *)((int)puVar17 + -0x930) = a0;
                    pcVar10 = *(code **)((int)puVar17 + -0x930);
                    *(int *)(pcVar10 + 0x134) = *(int *)(*(int *)((int)puVar17 + -0x930) + 0x134) + 1;
                    *(u32 *)(a0 + 0x28c) = 0;
                }
            } else if (iVar15 == 3) {
                *(u32 *)(a0 + 700) = 1;
                uVar2 = game_sub_0526a0(a0, *(u32 *)a1[1], pcVar14, pcVar10);
                *(u32 *)((int)puVar17 + -0x700) = uVar2;
                if (*(int *)((int)puVar17 + -0x700) == 0) {
                    *(u32 *)(a0 + 700) = 0;
                    *(u32 *)(a0 + 0x134) = 0;
                    *(u32 *)(a0 + 700) = 0;
                    *(u32 *)(a0 + 0x134) = 0;
                    iVar16 = 0;
                }
            }
            break;
        case 0x13:
            pcVar10 = (code *)0x214;
            *(u32 *)(a0 + 0x214) = 0;
            if (*(int *)(a0 + 0x128) < 4) {
                iVar16 = 2;
            } else {
                uVar2 = game_sub_054a14(a0, *(u32 *)a1[1], game_sub_054a14, 0x214);
                *(u32 *)((int)puVar17 + -0x6bc) = uVar2;
                if (*(int *)((int)puVar17 + -0x6bc) == 0) {
                    *(u32 *)(a0 + 0x214) = 1;
                    iVar16 = 0;
                }
            }
            break;
        case 0x14:
            *(u32 *)(a0 + 0x214) = 0;
            if (pcVar14 != (code *)0x1) {
                timer_sub_031c74(a0, (u8 *)((int)puVar17 + -0x30), *(u32 *)a1[1], pcVar10);
            }
            uVar2 = game_sub_057280(a0, *(u32 *)a1[1], pcVar14, pcVar10);
            *(u32 *)((int)puVar17 + -0x828) = uVar2;
            if (*(int *)((int)puVar17 + -0x828) == 0) {
                iVar16 = 0;
                pcVar10 = (code *)0x214;
                *(u32 *)(a0 + 0x214) = 1;
            }
            break;
        case 0x15:
            if (pcVar14 == (code *)0x1) {
                if (*(int *)(a0 + 300) == 0) {
                    pcVar10 = *(code **)a1[1];
                    game_sub_057164(a0, pcVar10, game_sub_057164, pcVar10);
                    if (*(int *)(a0 + 0x2b8) == 3) {
                        *(int *)((int)puVar17 + -0x984) = a0;
                        *(u32 *)((int)puVar17 + -0xa6c) = *(u32 *)((int)puVar17 + -0x984);
                        *(int *)(*(int *)((int)puVar17 + -0xa6c) + 300) =
                            *(int *)(*(int *)((int)puVar17 + -0x984) + 300) + 1;
                    } else {
                        *(u32 *)((int)puVar17 + -0xa68) = *(u32 *)(a0 + 0x2b8);
                        if (*(int *)((int)puVar17 + -0xa68) == 2) {
                            *(int *)((int)puVar17 + -0x988) = a0;
                            *(u32 *)((int)puVar17 + -0xa64) = *(u32 *)((int)puVar17 + -0x988);
                            *(int *)(*(int *)((int)puVar17 + -0xa64) + 300) =
                                *(int *)(*(int *)((int)puVar17 + -0x988) + 300) + 1;
                            *(u32 *)(a0 + 0x2b8) = 3;
                            uVar2 = 0xffffffff;
                            CAnimBody_SetAnimation(a0 + 0xb0, 0x1d, 0xffffffff, 0);
                            pcVar10 = (code *)0xb0;
                            CAnimBody_SetFrame(a0 + 0xb0, a0 + 0xb0, uVar2, 0xb0);
                        }
                    }
                } else if (*(int *)(a0 + 300) == 1) {

                    dVar19 = (double)CONCAT44((int)((u64)dVar19 >> 0x20), 0x40400000);

                    rand_float(a0, ar5_00, 0x2e8);

                    *(int *)((int)puVar17 + -0x798) = (int)((u64)dVar19 >> 0x20);

                    uVar2 = CAnimBody_AdvanceFrame_033b98(a0 + 0xb0, ar5_00, pdVar6, pcVar10);
                    *(u32 *)((int)puVar17 + -0x79c) = uVar2;
                    if (*(int *)((int)puVar17 + -0x79c) == 1) {
                        uVar12 = 0;
                        uVar9 = 0xffffffff;
                        uVar2 = 0x1d;
                        CAnimBody_SetAnimation(a0 + 0xb0, 0x1d, 0xffffffff, 0);
                        CAnimBody_SetFrame(a0 + 0xb0, uVar2, uVar9, uVar12);
                        *(int *)((int)puVar17 + -0x98c) = a0;
                        *(int *)(*(int *)((int)puVar17 + -0x98c) + 300) =
                            *(int *)(*(int *)((int)puVar17 + -0x98c) + 300) + 1;
                        *(u32 *)(a0 + 0x2b8) = 2;
                        pcVar10 = NULL;
                        iVar16 = 0;
                    }
                }
            } else if (*(int *)(a0 + 300) == 0) {
                uVar2 = *(u32 *)a1[1];
                puVar5 = (u8 *)((int)puVar17 + -0x30);
                timer_sub_031c74(a0, puVar5, uVar2, pcVar10);
                uVar2 = CAnimBody_AdvanceFrame_wrapper(a0 + 0xb0, puVar5, uVar2, pcVar10);
                *(u32 *)((int)puVar17 + -0x790) = uVar2;
                if (*(int *)((int)puVar17 + -0x790) == 1) {

                    *(u32 *)(a0 + 0x2c) = 0;

                    *(int *)((int)puVar17 + -0x980) = a0;
                    pcVar10 = *(code **)((int)puVar17 + -0x980);
                    *(int *)(pcVar10 + 300) = *(int *)(*(int *)((int)puVar17 + -0x980) + 300) + 1;
                }
            } else if (*(int *)(a0 + 300) == 1) {
                timer_stop_94(a0, ar5_00, 0x2e8, pcVar10);

                *(u32 *)(a0 + 0xa0) = 0;

                game_sub_05ae54(a0, ar5_00, pdVar6, pcVar10);
                uVar2 = *(u32 *)a1[1];
                timer_sub_031c74(a0, (u8 *)((int)puVar17 + -0x30), uVar2, pcVar10);
                uVar2 = timer_sub_031de8(a0, 0x10, uVar2, pcVar10);
                *(u32 *)((int)puVar17 + -0x794) = uVar2;
                if (*(int *)((int)puVar17 + -0x794) == 0) {
                    iVar16 = 0;
                    *(u32 *)(a0 + 300) = 0;
                }
            }
            break;
        case 0x16:
            if (pcVar14 != (code *)0x1) {
                pdVar6 = *(double **)a1[1];
                ar5_00 = (u8 *)((int)puVar17 + -0x30);
                timer_sub_031c74(a0, ar5_00, pdVar6, pcVar10);
            }
        LAB_8c04475a:
            uVar9 = SUB84(dVar24, 0);
            uVar2 = SUB84(dVar21, 0);
            iVar15 = *(int *)(a0 + 300);
            if ((0xd < iVar15) || (iVar15 < 0))
                goto switchD_8c04477e_caseD_6;
            switch ((&switchD_8c04477e::switchdataD_8c044790)[iVar15]) {
            case (u8 *)0x8c0447c8:
                if (pcVar14 == (code *)0x1) {
                    *(int *)((int)puVar17 + -0x9ec) = a0;
                    pdVar6 = (double *)0x12c;
                    pcVar10 = *(code **)((int)puVar17 + -0x9ec);
                    *(int *)(*(int *)((int)puVar17 + -0x9ec) + 300) = *(int *)(pcVar10 + 300) + 1;
                } else {
                    *(u32 *)(a0 + 300) = 10;
                }
                *(u32 *)(a0 + 0x280) = 0;
                goto LAB_8c04475a;
            case (u8 *)0x8c044814:
                uVar2 = game_sub_057164(a0, *(u32 *)a1[1], pdVar6, pcVar10);
                *(u32 *)((int)puVar17 + -0x854) = uVar2;
                if (*(int *)((int)puVar17 + -0x854) == 0) {
                    if (*(int *)(a0 + 0x328) == 0) {
                        *(u32 *)(a0 + 300) = 0;
                        iVar16 = 0;
                    } else {
                        *(int *)((int)puVar17 + -0x9f0) = a0;
                        *(u32 *)((int)puVar17 + -0xa70) = *(u32 *)((int)puVar17 + -0x9f0);
                        pcVar10 = *(code **)((int)puVar17 + -0x9f0);
                        *(int *)(*(int *)((int)puVar17 + -0xa70) + 300) = *(int *)(pcVar10 + 300) + 1;
                    }
                }
                goto switchD_8c04477e_caseD_6;
            case (u8 *)0x8c044888:
                *(u8 **)((int)puVar17 + -0xa74) = (u8 *)((int)puVar17 + -0x4c0);
                Vec3_make(a0 + 0x14, (u8 *)((int)puVar17 + -0x4c0), pdVar6, pcVar10, *(u32 *)((int)puVar17 + -0xa74));

                uVar2 = uVar9;

                dVar24 = 0.0;
                puVar5 = (u8 *)((int)puVar17 + -0x4d0);
                Vec3_ctor_xyz(puVar5, puVar5, pdVar6, pcVar10);
                *(u8 **)((int)puVar17 + -0xa74) = (u8 *)((int)puVar17 + -0x4e0);
                pcVar10 = Vec3_make;
                Vec3_make((u8 *)((int)puVar17 + -0x4d0), puVar5, pdVar6, Vec3_make, *(u32 *)((int)puVar17 + -0xa74));
                puVar5 = (u8 *)((int)puVar17 + -0x4c0);
                Vec3_cos_angle(puVar5, (u8 *)((int)puVar17 + -0x4e0), puVar5, pcVar10);

                *(int *)((int)puVar17 + -0x858) = (int)((u64)dVar19 >> 0x20);
                dVar21 = (double)CONCAT44(*(u32 *)((int)puVar17 + -0x858), uVar2);
                dVar24 = (double)CONCAT44((int)((u64)dVar24 >> 0x20), 0x40a00000);

                bVar27 = SUB84(dVar24, 0) < (float)((u64)dVar21 >> 0x20);

                *(u32 *)((int)puVar17 + -0x680) = (u32)bVar27;
                Vec3_dtor((u8 *)((int)puVar17 + -0x4e0), 0xffffffff, puVar5, pcVar10);
                Vec3_dtor((u8 *)((int)puVar17 + -0x4d0), 0xffffffff, puVar5, pcVar10);
                uVar2 = 0xffffffff;
                Vec3_dtor((u8 *)((int)puVar17 + -0x4c0), 0xffffffff, puVar5, pcVar10);
                if (*(int *)((int)puVar17 + -0x680) == 0) {
                    uVar2 = rand_range(a0, 0xfa, 400);
                    *(u32 *)((int)puVar17 + -0x85c) = uVar2;
                    *(u32 *)(a0 + 0x280) = *(u32 *)((int)puVar17 + -0x85c);
                    uVar12 = 0;
                    uVar9 = 0xffffffff;
                    uVar2 = 0x1a;
                    CAnimBody_SetAnimation(a0 + 0xb0, 0x1a, 0xffffffff, 0);
                    CAnimBody_SetFrame(a0 + 0xb0, uVar2, uVar9, uVar12);
                    *(int *)((int)puVar17 + -0x9f8) = a0;
                    pcVar10 = *(code **)((int)puVar17 + -0x9f8);
                    *(u32 *)((int)puVar17 + -0xa6c) = *(u32 *)(*(int *)((int)puVar17 + -0x9f8) + 300);
                    *(int *)(pcVar10 + 300) = *(int *)((int)puVar17 + -0xa6c) + 2;
                    if (*(int *)(a0 + 0x328) == 0) {
                        *(u32 *)(a0 + 300) = 0;
                        iVar16 = 0;
                    }
                } else {
                    puVar8 = (u8 *)((int)puVar17 + -0x4f0);
                    Vec3_ctor_xyz(puVar8, uVar2, puVar5, puVar8);
                    *(u8 **)((int)puVar17 + -0xa74) = (u8 *)((int)puVar17 + -0x500);
                    uVar2 = *(u32 *)a1[1];
                    Vec3_add(uVar2, (u8 *)((int)puVar17 + -0x4f0), uVar2, puVar8, *(u32 *)((int)puVar17 + -0xa74));
                    puVar5 = (u8 *)((int)puVar17 + -0x500);
                    Vec3_ctor_copy((u8 *)((int)puVar17 + -0xd8), puVar5, uVar2, puVar5);
                    Vec3_dtor((u8 *)((int)puVar17 + -0x500), 0xffffffff, uVar2, puVar5);
                    Vec3_dtor((u8 *)((int)puVar17 + -0x4f0), 0xffffffff, uVar2, puVar5);
                    game_sub_057b6c(a0, *(u32 *)a1[1], (u8 *)((int)puVar17 + -0xd8), puVar5);
                    *(int *)((int)puVar17 + -0x9f4) = a0;
                    pcVar10 = *(code **)((int)puVar17 + -0x9f4);
                    iVar15 = *(int *)((int)puVar17 + -0x9f4);
                    *(int *)(pcVar10 + 300) = *(int *)(iVar15 + 300) + 1;
                    Vec3_dtor((u8 *)((int)puVar17 + -0xd8), 0xffffffff, iVar15, pcVar10);
                }
                goto switchD_8c04477e_caseD_6;
            case (u8 *)0x8c044ad0:
                *(code **)((int)puVar17 + -0xa68) = game_sub_057e58;
                uVar2 = (**(code **)((int)puVar17 + -0xa68))(a0, ar5_00, pdVar6, pcVar10);
                *(u32 *)((int)puVar17 + -0xa64) = uVar2;
                *(u32 *)((int)puVar17 + -0x860) = *(u32 *)((int)puVar17 + -0xa64);
                if (*(int *)((int)puVar17 + -0x860) == 0) {
                    if (*(int *)(a0 + 0x328) == 0) {
                        *(u32 *)(a0 + 300) = 0;
                        iVar16 = 0;
                    } else {
                        *(int *)((int)puVar17 + -0x9fc) = a0;
                        pcVar10 = (code *)0x12c;
                        *(int *)(*(int *)((int)puVar17 + -0x9fc) + 300) =
                            *(int *)(*(int *)((int)puVar17 + -0x9fc) + 300) + -1;
                    }
                }
                goto switchD_8c04477e_caseD_6;
            case (u8 *)0x8c044b44:
                uVar9 = 1;
                *(u32 *)(a0 + 0x2fc) = 1;
                CAnimBody_AdvanceFrame_033b98(a0 + 0xb0, 0x2fc, 1, pcVar10);
                uVar12 = SUB84(dVar19, 0);
                *(int *)((int)puVar17 + -0xa00) = a0;
                uVar2 = *(u32 *)(*(int *)((int)puVar17 + -0xa00) + 0x280);
                *(u32 *)((int)puVar17 + -0xa04) = uVar2;
                *(int *)(*(int *)((int)puVar17 + -0xa00) + 0x280) = *(int *)((int)puVar17 + -0xa04) + -1;
                if (*(int *)((int)puVar17 + -0xa04) < 0) {
                    set_field_8c_to_1(*a1, uVar2, uVar9, 0x280);
                    *(u32 *)(a0 + 0x280) = 0;
                    if (*(int *)(a0 + 0x128) == 3) {
                        pcVar10 = NULL;
                        uVar2 = 0x11;
                        CAnimBody_SetAnimation(a0 + 0xb0, 0x11, 0xffffffff, 0);
                    } else {
                        uVar2 = 0x22;
                        CAnimBody_SetAnimation(a0 + 0xb0, 0x22, 0xffffffff, 0);
                        pcVar10 = (code *)0x7;
                        *(u32 *)(a0 + 0x218) = 7;
                    }

                    uVar25 = CONCAT44(0x3f4ccccd, uVar12);

                    pcVar4 = rand_float;
                    rand_float(a0, uVar2, rand_float);

                    *(int *)((int)puVar17 + -0x864) = (int)((u64)uVar25 >> 0x20);
                    *(u32 *)(a0 + 0x278) = *(u32 *)((int)puVar17 + -0x864);

                    CAnimBody_SetFrame(a0 + 0xb0, uVar2, pcVar4, pcVar10);
                    *(u32 *)(a0 + 0x2b8) = 3;
                    *(int *)((int)puVar17 + -0xa08) = a0;
                    *(int *)(*(int *)((int)puVar17 + -0xa08) + 300) =
                        *(int *)(*(int *)((int)puVar17 + -0xa08) + 300) + 1;
                } else {
                    pcVar10 = *(code **)(a0 + 0x328);
                    if (pcVar10 == NULL) {
                        *(u32 *)(a0 + 300) = 0;
                        iVar16 = 0;
                    }
                }
                goto switchD_8c04477e_caseD_6;
            case (u8 *)0x8c044cc8:
                if (*(int *)(a0 + 0x128) == 3) {
                    pcVar10 = (code *)(a0 + 0xb0);
                    CAnimBody_AdvanceFrame_033d88(pcVar10, ar5_00, CAnimBody_AdvanceFrame_033d88, pcVar10);
                } else {
                    CAnimBody_AdvanceFrame_033d88(a0 + 0xb0, ar5_00, pdVar6, pcVar10);
                }
                if (*(int *)(a0 + 0x328) == 0) {
                    *(u32 *)(a0 + 300) = 0;
                    *(u32 *)(a0 + 0x2b8) = 3;
                    iVar16 = 0;
                }
                goto switchD_8c04477e_caseD_6;
            case (u8 *)0x8c044d7c:
                *(u8 **)((int)puVar17 + -0xa74) = (u8 *)((int)puVar17 + -0x510);
                Vec3_make(a0 + 0x14, ar5_00, pdVar6, pcVar10, *(u32 *)((int)puVar17 + -0xa74));
                puVar5 = (u8 *)((int)puVar17 + -0x520);
                Vec3_ctor_xyz(puVar5, ar5_00, pdVar6, puVar5);
                *(u8 **)((int)puVar17 + -0xa74) = (u8 *)((int)puVar17 + -0x530);
                Vec3_make((u8 *)((int)puVar17 + -0x520), ar5_00, pdVar6, puVar5, *(u32 *)((int)puVar17 + -0xa74));
                pcVar10 = Vec3_cos_angle;
                Vec3_cos_angle((u8 *)((int)puVar17 + -0x510), (u8 *)((int)puVar17 + -0x530), Vec3_cos_angle, puVar5);

                *(int *)((int)puVar17 + -0x868) = (int)((u64)dVar19 >> 0x20);
                *(u32 *)(a0 + 0x224) = *(u32 *)((int)puVar17 + -0x868);

                Vec3_dtor((u8 *)((int)puVar17 + -0x530), 0xffffffff, pcVar10, puVar5);
                puVar5 = (u8 *)((int)puVar17 + -0x520);
                pcVar4 = Vec3_dtor;
                Vec3_dtor(puVar5, 0xffffffff, Vec3_dtor, puVar5);
                uVar2 = 0xffffffff;
                Vec3_dtor((u8 *)((int)puVar17 + -0x510), 0xffffffff, pcVar4, puVar5);
                Vec3_ctor_xyz((u8 *)((int)puVar17 + -0x540), uVar2, pcVar4, puVar5);
                pcVar10 = Vec3_sub_0231c8;
                Vec3_sub_0231c8((u8 *)((int)puVar17 + -0x540), Vec3_sub_0231c8, pcVar4, puVar5);

                *(int *)((int)puVar17 + -0x86c) = (int)((u64)dVar19 >> 0x20);

                iVar15 = a0 + 0x14;
                Vec3_sub_0231c8(iVar15, pcVar10, pcVar4, puVar5);

                *(int *)((int)puVar17 + -0x870) = (int)((u64)dVar19 >> 0x20);
                uVar25 = CONCAT44(*(u32 *)((int)puVar17 + -0x870), SUB84(dVar19, 0));

                float_check_errno(iVar15, pcVar10, pcVar4, puVar5);

                *(int *)((int)puVar17 + -0x874) = (int)((u64)uVar25 >> 0x20);
                *(u32 *)(a0 + 0x228) = *(u32 *)((int)puVar17 + -0x874);

                uVar2 = 0xffffffff;
                Vec3_dtor((u8 *)((int)puVar17 + -0x540), 0xffffffff, pcVar4, puVar5);
                timer_stop_94(a0, uVar2, pcVar4, puVar5);
                *(u32 *)(a0 + 0x40) = 1;
                puVar13 = (u64 *)(a0 + 0x224);

                uVar25 = CONCAT44(*(u32 *)puVar13, 0x40a00000);

                if ((float)uVar25 < (float)((u64)uVar25 >> 0x20)) {
                    Vec3_ctor_xyz((u8 *)((int)puVar17 + -0x550), uVar2, puVar13, puVar5);
                    pcVar10 = Vec3_sub_023334;
                    uVar2 = Vec3_sub_023334(a0 + 0x14, (u8 *)((int)puVar17 + -0x550), puVar13, Vec3_sub_023334);
                    *(u32 *)((int)puVar17 + -0x878) = uVar2;
                    uVar2 = *(u32 *)((int)puVar17 + -0x878);
                    *(u32 *)(a0 + 0x27c) = uVar2;
                    Vec3_dtor((u8 *)((int)puVar17 + -0x550), 0xffffffff, uVar2, pcVar10);
                    if (*(int *)(a0 + 0x27c) == 3) {
                        uVar2 = 7;
                        uVar9 = CAnimBody_SetAnimation(a0 + 0xb0, 7, 0xffffffff, 0);
                        *(u32 *)((int)puVar17 + -0x87c) = uVar9;
                        if (*(int *)((int)puVar17 + -0x87c) != 6) {
                            CAnimBody_SetFrame(a0 + 0xb0, uVar2, a0 + 0xb0, CAnimBody_SetFrame);
                        }
                    } else {
                        uVar9 = 0;
                        uVar2 = CAnimBody_SetAnimation(a0 + 0xb0, 8, 0xffffffff, 0);
                        *(u32 *)((int)puVar17 + -0x880) = uVar2;
                        if (*(int *)((int)puVar17 + -0x880) != 6) {
                            CAnimBody_SetFrame(a0 + 0xb0, uVar2, 0xb0, uVar9);
                        }
                    }
                    *(int *)((int)puVar17 + -0xa0c) = a0;
                    *(u32 *)((int)puVar17 + -0xa70) = *(u32 *)(*(int *)((int)puVar17 + -0xa0c) + 300);
                    *(int *)(*(int *)((int)puVar17 + -0xa0c) + 300) = *(int *)((int)puVar17 + -0xa70) + 1;
                    pcVar10 = (code *)0xb0;
                    CAnimBody_AdvanceFrame_033b98(a0 + 0xb0, uVar2, a0 + 0xb0, 0xb0);
                } else {
                    *(u32 *)(a0 + 300) = 0xc;
                    uVar2 = 0;
                    CAnimBody_SetAnimation(a0 + 0xb0, 0, 0xffffffff, 0);
                    pcVar10 = (code *)0xb0;
                    CAnimBody_SetFrame(a0 + 0xb0, uVar2, CAnimBody_SetFrame, 0xb0);
                    *(u32 *)(a0 + 0x280) = 0;
                    if (*(int *)(a0 + 0x328) == 0) {
                        *(u32 *)(a0 + 300) = 0;
                        iVar16 = 0;
                    }
                }
            switchD_8c04477e_caseD_6:
                *(u32 *)(a0 + 0x328) = 0;
                break;
            case (u8 *)0x8c04509c:
                Vec3_ctor_xyz((u8 *)((int)puVar17 + -0x560), ar5_00, pdVar6, pcVar10);
                *(u8 **)((int)puVar17 + -0xa74) = (u8 *)((int)puVar17 + -0x570);
                puVar5 = (u8 *)((int)puVar17 + -0x560);
                uVar2 = *(u32 *)a1[1];
                Vec3_add(uVar2, puVar5, pdVar6, uVar2, *(u32 *)((int)puVar17 + -0xa74));
                uVar2 = get_field_1c_026dd8(a0 + 0xb0, puVar5, a0 + 0xb0);
                *(u32 *)((int)puVar17 + -0x884) = uVar2;
                uVar9 = *(u32 *)((int)puVar17 + -0x884);
                uVar7 = 0xb0;
                uVar12 = get_motion_data(a0 + 0xb0, uVar9, uVar2, 0xb0);
                *(u32 *)((int)puVar17 + -0x888) = uVar12;
                uVar9 = get_field_1c_026dd8(a0 + 0xb0, uVar9, uVar2);
                *(u32 *)((int)puVar17 + -0x88c) = uVar9;
                uVar9 = *(u32 *)((int)puVar17 + -0x88c);
                uVar2 = get_motion_data(a0 + 0xb0, uVar9, uVar2, uVar7);
                *(u32 *)((int)puVar17 + -0x890) = uVar2;
                Vec3_set_xyz((u8 *)((int)puVar17 + -0x57c), uVar9, *(u32 *)((int)puVar17 + -0x890), 0x224);
                *(u8 **)((int)puVar17 + -0xa74) = (u8 *)((int)puVar17 + -0x57c);
                *(u8 **)((int)puVar17 + -0xa78) = (u8 *)((int)puVar17 + -0x58c);
                iVar15 = a0 + 0x14;
                puVar5 = (u8 *)((int)puVar17 + -0x570);
                game_sub_031eb0(a0, *(u32 *)a1[1], puVar5, iVar15, *(u32 *)((int)puVar17 + -0xa78));
                Vec3_assign(a0 + 0x14, (u8 *)((int)puVar17 + -0x58c), puVar5, iVar15);
                Vec3_dtor((u8 *)((int)puVar17 + -0x58c), 0xffffffff, puVar5, iVar15);
                object_dtor_delete((u8 *)((int)puVar17 + -0x57c), 0xffffffff, puVar5, iVar15);
                pcVar10 = (code *)0xffffffff;
                puVar5 = (u8 *)((int)puVar17 + -0x570);
                Vec3_dtor(puVar5, 0xffffffff, puVar5, 0xffffffff);
                uVar2 = 0xffffffff;
                *(u8 **)((int)puVar17 + -0xa6c) = (u8 *)((int)puVar17 + -0x560);
                Vec3_dtor(*(u32 *)((int)puVar17 + -0xa6c), 0xffffffff, puVar5, pcVar10);
                uVar2 = CAnimBody_AdvanceFrame_033b98(a0 + 0xb0, uVar2, puVar5, pcVar10);
                *(u32 *)((int)puVar17 + -0x894) = uVar2;
                if (*(int *)((int)puVar17 + -0x894) == 1) {
                    *(u32 *)((int)puVar17 + -0xa68) = 0;
                    uVar9 = *(u32 *)((int)puVar17 + -0xa68);
                    *(u32 *)((int)puVar17 + -0xa64) = 0xffffffff;
                    uVar2 = 0;
                    CAnimBody_SetAnimation(a0 + 0xb0, 0, *(u32 *)((int)puVar17 + -0xa64), uVar9);
                    CAnimBody_SetFrame(a0 + 0xb0, uVar2, CAnimBody_SetFrame, uVar9);
                    *(u32 *)(a0 + 300) = 0xc;
                    uVar2 = rand_range(a0, 0xfa, 400);
                    *(u32 *)((int)puVar17 + -0x898) = uVar2;
                    pcVar10 = (code *)0x280;
                    *(u32 *)(a0 + 0x280) = *(u32 *)((int)puVar17 + -0x898);
                    if (*(int *)(a0 + 0x328) == 0) {
                        *(u32 *)(a0 + 300) = 0;
                        iVar16 = 0;
                    }
                }
                goto switchD_8c04477e_caseD_6;
            case (u8 *)0x8c045328:
                *(u32 *)(a0 + 0x2fc) = 1;
                *(int *)((int)puVar17 + -0xa10) = a0;
                pcVar10 = *(code **)((int)puVar17 + -0xa10);
                *(u32 *)((int)puVar17 + -0xa14) = *(u32 *)(pcVar10 + 0x280);
                *(int *)(*(int *)((int)puVar17 + -0xa10) + 0x280) = *(int *)((int)puVar17 + -0xa14) + -1;
                if (*(int *)((int)puVar17 + -0xa14) < 0) {
                    *(u32 *)(a0 + 0x280) = 0;
                    uVar2 = 0x10;
                    CAnimBody_SetAnimation(a0 + 0xb0, 0x10, 0xffffffff, 0);
                    pcVar10 = (code *)(a0 + 0xb0);
                    CAnimBody_SetFrame(pcVar10, uVar2, CAnimBody_SetFrame, pcVar10);
                    *(int *)((int)puVar17 + -0xa18) = a0;
                    *(int *)(*(int *)((int)puVar17 + -0xa18) + 300) =
                        *(int *)(*(int *)((int)puVar17 + -0xa18) + 300) + 1;
                } else if (*(int *)(a0 + 0x328) == 0) {
                    *(u32 *)(a0 + 300) = 0;
                    iVar16 = 0;
                }
                goto switchD_8c04477e_caseD_6;
            case (u8 *)0x8c0453ec:
                pcVar10 = (code *)CAnimBody_AdvanceFrame_033b98(a0 + 0xb0, ar5_00, pdVar6, pcVar10);
                *(code **)((int)puVar17 + -0x89c) = pcVar10;
                if (*(int *)((int)puVar17 + -0x89c) == 1) {
                    *(u32 *)(a0 + 0x2fc) = 0;
                    *(u32 *)(a0 + 300) = 0;
                    iVar16 = 0;
                }
            case (u8 *)0x8c045422:
                goto switchD_8c04477e_caseD_6;
            }
            break;
        case 0x17:
            *(u32 *)(a0 + 0x178) = 1;
            iVar15 = *(int *)(a0 + 300);
            if (iVar15 == 0) {
                pcVar10 = (code *)0x214;
                *(u32 *)(a0 + 0x214) = 0;
                *(u32 *)(a0 + 0x2e8) = 2;
                *(int *)((int)puVar17 + -0xa1c) = a0;
                *(int *)(*(int *)((int)puVar17 + -0xa1c) + 300) = *(int *)(*(int *)((int)puVar17 + -0xa1c) + 300) + 1;
            } else {
                if (iVar15 == 1) {
                    Vec3_assign(a0 + 0x248, *(u32 *)a1[1], 0x2e8, pcVar10);
                    *(u32 *)(a0 + 700) = 1;

                    *(u32 *)(a0 + 0x250) = 0xc3fa0000;
                    *(u32 *)(a0 + 0x24c) = 0x43340000;

                    *(u32 *)(a0 + 800) = 0;
                    *(int *)((int)puVar17 + -0xa20) = a0;
                    pcVar10 = (code *)0x12c;
                    *(int *)(*(int *)((int)puVar17 + -0xa20) + 300) =
                        *(int *)(*(int *)((int)puVar17 + -0xa20) + 300) + 1;
                } else if (iVar15 != 2) {
                    if (iVar15 == 3) {
                        uVar2 =
                            CAnimBody_AdvanceFrame_wrapper(a0 + 0xb0, 0xb0, CAnimBody_AdvanceFrame_wrapper, pcVar10);
                        *(u32 *)((int)puVar17 + -0x8b0) = uVar2;
                        if (*(int *)((int)puVar17 + -0x8b0) == 1) {
                            *(u32 *)(a0 + 0x178) = 0;
                            iVar16 = 0;
                            *(u32 *)((int)puVar17 + -0xa70) = 0;
                            *(u32 *)(a0 + 300) = *(u32 *)((int)puVar17 + -0xa70);
                            pcVar10 = (code *)0xffffffff;
                            *(u32 *)(a0 + 0x31c) = 0xffffffff;
                            *(u32 *)(a0 + 0x284) = 0;
                        }
                    }
                    break;
                }
                uVar2 = game_sub_04c314(a0, *(u32 *)a1[1], a0 + 0x248);
                *(u32 *)((int)puVar17 + -0x8ac) = uVar2;
                if (*(int *)((int)puVar17 + -0x8ac) == 0) {
                    uVar2 = 0x1a;
                    CAnimBody_SetAnimation(a0 + 0xb0, 0x1a, 0xffffffff, 0);
                    pcVar10 = CAnimBody_SetFrame;
                    CAnimBody_SetFrame(a0 + 0xb0, uVar2, a0 + 0xb0, CAnimBody_SetFrame);
                    *(int *)((int)puVar17 + -0xa24) = a0;
                    *(int *)(*(int *)((int)puVar17 + -0xa24) + 300) =
                        *(int *)(*(int *)((int)puVar17 + -0xa24) + 300) + 1;
                }
            }
            break;
        case 0x19:
            *(u32 *)((int)puVar17 + -0xa70) = 0x214;
            *(u32 *)(*(int *)((int)puVar17 + -0xa70) + a0) = 0;
            *(u32 *)(a0 + 0x178) = 1;
            pcVar10 = pcVar14;
            uVar2 = game_sub_055c38(a0, *(u32 *)a1[1], a0 + 0x34c, pcVar14);
            *(u32 *)((int)puVar17 + -0x788) = uVar2;
            if (*(int *)((int)puVar17 + -0x788) == 0) {
                *(u32 *)(a0 + 0x178) = 0;
                pcVar10 = NULL;
                iVar16 = 0;
                *(u32 *)(a0 + 0x214) = 1;
            }
            break;
        case 0x1a:
            *(u32 *)(a0 + 700) = 1;
            *(u32 *)(a0 + 0x178) = 1;
            *(u32 *)(a0 + 0x214) = 0;
            uVar2 = game_sub_0564c4(a0, *(u32 *)a1[1], a0 + 0x34c, pcVar14);
            *(u32 *)((int)puVar17 + -0x78c) = uVar2;
            pcVar10 = *(code **)((int)puVar17 + -0x78c);
            if (pcVar10 == NULL) {
                *(u32 *)(a0 + 0x178) = 0;
                iVar16 = 0;
                *(u32 *)(a0 + 700) = 0;
                pcVar10 = (code *)0x1;
                *(u32 *)(a0 + 0x214) = 1;
            }
            break;
        case 0x1b:
            *(u32 *)(a0 + 0x214) = 0;
            *(u32 *)(a0 + 0x324) = 1;
            *(u32 *)(a0 + 0x178) = 1;
            pcVar10 = (code *)0x128;
            if (*(int *)(a0 + 0x128) < 4) {
                *(u32 *)(a0 + 0x178) = 0;
                iVar16 = 2;
            } else {
                uVar2 = (**(code **)(*(int *)a1[6] + 0x1cc))((int *)a1[6], *(int *)(a0 + 0x128), 0, 0x128);
                *(u32 *)((int)puVar17 + -0x834) = uVar2;
                pcVar10 = pcVar14;
                uVar2 = game_sub_058d60(a0, *(u32 *)a1[1], *(int *)((int)puVar17 + -0x834) + 4, pcVar14);
                *(u32 *)((int)puVar17 + -0x838) = uVar2;
                if (*(int *)((int)puVar17 + -0x838) == 0) {
                    iVar16 = 0;
                    pcVar10 = NULL;
                    *(u32 *)(a0 + 0x178) = 0;
                    *(u32 *)(a0 + 0x2e8) = 1;
                }
            }
            break;
        case 0x1c:
            *(u32 *)(a0 + 0x214) = 0;
            *(u32 *)(a0 + 0x2e8) = 1;
            *(u32 *)(a0 + 0x178) = 1;
            *(u32 *)(a0 + 0x324) = 1;
            if (*(int *)(a0 + 0x128) < 4) {
                pcVar10 = (code *)0x2;
                iVar16 = 2;
            } else {
                uVar2 = (**(code **)(*(int *)a1[6] + 0x1cc))((int *)a1[6], ar5_00, 0, pcVar10);
                *(u32 *)((int)puVar17 + -0x844) = uVar2;
                *(u32 *)((int)puVar17 + -0xa74) = *(u32 *)(a0 + 0x124);
                *(int *)((int)puVar17 + -0xa78) = *(int *)((int)puVar17 + -0x844) + 4;
                pcVar10 = (code *)game_sub_0593cc(a0, a1[6], *a1, *(u32 *)a1[1]);
                *(code **)((int)puVar17 + -0x848) = pcVar10;
                if (*(int *)((int)puVar17 + -0x848) == 0) {
                    *(u32 *)(a0 + 0x324) = 0;
                    iVar16 = 0;
                    *(u32 *)(a0 + 0x214) = 1;
                    *(u32 *)(a0 + 0x2e8) = 2;
                }
            }
            break;
        case 0x1d:
            *(u32 *)(a0 + 0x214) = 0;
            *(u32 *)(a0 + 0x324) = 1;
            pcVar10 = (code *)0x2e8;
            *(u32 *)(a0 + 0x2e8) = 1;
            *(u32 *)(a0 + 0x178) = 1;
            if (*(int *)(a0 + 0x128) < 4) {
                *(u32 *)(a0 + 0x178) = 0;
                iVar16 = 2;
            } else {
                uVar2 = (**(code **)(*(int *)a1[6] + 0x1cc))((int *)a1[6], ar5_00, 1, 0x2e8);
                *(u32 *)((int)puVar17 + -0x83c) = uVar2;
                *(u32 *)((int)puVar17 + -0xa74) = 0x1d;
                *(int *)((int)puVar17 + -0xa78) = *(int *)((int)puVar17 + -0x83c) + 4;
                pcVar10 = *(code **)a1[1];
                uVar2 = game_sub_0593cc(a0, a1[6], *a1, pcVar10);
                *(u32 *)((int)puVar17 + -0x840) = uVar2;
                if (*(int *)((int)puVar17 + -0x840) == 0) {
                    pcVar10 = NULL;
                    *(u32 *)(a0 + 0x324) = 0;
                    iVar16 = 0;
                    *(u32 *)(a0 + 0x214) = 1;
                    *(u32 *)(a0 + 0x2e8) = 2;
                }
            }
            break;
        case 0x1e:
            if (*(int *)(a0 + 0x128) < 4) {
                iVar16 = 2;
            } else if (*(int *)(a0 + 300) == 0) {
                *(u32 *)(a0 + 0x178) = 1;
                pcVar10 = pcVar14;
                uVar2 = game_sub_055c38(a0, *(u32 *)a1[1], a0 + 0x34c, pcVar14);
                *(u32 *)((int)puVar17 + -0x82c) = uVar2;
                if (*(int *)((int)puVar17 + -0x82c) == 0) {
                    *(u32 *)(a0 + 0x178) = 0;
                    *(int *)((int)puVar17 + -0x9e8) = a0;
                    pcVar10 = (code *)(*(int *)(*(int *)((int)puVar17 + -0x9e8) + 300) + 1);
                    *(code **)(*(int *)((int)puVar17 + -0x9e8) + 300) = pcVar10;
                }
            } else if (*(int *)(a0 + 300) == 1) {
                Vec3_copy_assign((u8 *)((int)puVar17 + -0x4b0), a1[7]);
                *(u32 *)((int)puVar17 + -0xa6c) = 0xffffffff;
                *(u32 *)((int)puVar17 + -0xa74) = *(u32 *)((int)puVar17 + -0xa6c);
                pcVar10 = (code *)((int)puVar17 + -0x4b0);
                puVar5 = (u8 *)((int)puVar17 + -0x30);
                uVar2 = game_sub_059fc4(a0, *(u32 *)a1[1], puVar5, pcVar10);
                *(u32 *)((int)puVar17 + -0x830) = uVar2;
                *(u32 *)((int)puVar17 + -0xa68) = *(u32 *)((int)puVar17 + -0x830);
                *(u32 *)((int)puVar17 + -0xa64) = (u32)(*(int *)((int)puVar17 + -0xa68) == 0);
                *(u32 *)((int)puVar17 + -0x67c) = *(u32 *)((int)puVar17 + -0xa64);
                free_if_nonnull_wrap_102790((u8 *)((int)puVar17 + -0x4b0), 0xffffffff, puVar5, pcVar10);
                if (*(int *)((int)puVar17 + -0x67c) != 0) {
                    iVar16 = 0;
                    *(u32 *)(a0 + 300) = 0;
                }
            }
            break;
        case 0x21:
        case 0x22:
        case 0x25:
        case 0x26:
            if (*(int *)(a0 + 0x128) < 4) {
                pcVar10 = (code *)0x2;
                iVar16 = 2;
            } else {
                iVar15 = *(int *)(a0 + 300);
                if ((iVar15 < 6) && (-1 < iVar15)) {
                    /* WARNING: Could not recover jumptable at 0x8c042cbe. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                    uVar2 = (*(code *)(&(&DATA_8c042ce0))[iVar15])();
                    return uVar2;
                }
            }
            break;
        case 0x23:
        case 0x24:
        case 0x27:
        case 0x28:
            pcVar10 = NULL;
            *(u32 *)(a0 + 0x31c) = 0;
            *(u32 *)(a0 + 0x214) = 0;
            *(u32 *)(a0 + 0x178) = 1;
            if (*(int *)(a0 + 0x128) < 4) {
                iVar16 = 2;
            } else {
                pcVar10 = (code *)0x12c;
                iVar15 = *(int *)(a0 + 300);
                if (iVar15 == 0) {
                    pcVar10 = pcVar14;
                    uVar2 = game_sub_055c38(a0, *(u32 *)a1[1], a0 + 0x34c, pcVar14);
                    *(u32 *)((int)puVar17 + -0x7a8) = uVar2;
                    if (*(int *)((int)puVar17 + -0x7a8) == 0) {
                        *(int *)((int)puVar17 + -0x990) = a0;
                        *(int *)(*(int *)((int)puVar17 + -0x990) + 300) =
                            *(int *)(*(int *)((int)puVar17 + -0x990) + 300) + 1;
                    }
                } else if (iVar15 == 1) {
                    pcVar10 = game_sub_057164;
                    uVar2 = game_sub_057164(a0, *(u32 *)a1[1], 1, game_sub_057164);
                    *(u32 *)((int)puVar17 + -0x7ac) = uVar2;
                    if (*(int *)((int)puVar17 + -0x7ac) == 0) {
                        *(int *)((int)puVar17 + -0x994) = a0;
                        *(int *)(*(int *)((int)puVar17 + -0x994) + 300) =
                            *(int *)(*(int *)((int)puVar17 + -0x994) + 300) + 1;
                        *(u32 *)(a0 + 0x290) = 0;
                        *(u32 *)(a0 + 0x40) = 5;
                        pcVar10 = (code *)0x1;
                        *(u32 *)(a0 + 700) = 1;
                    }
                } else if (iVar15 == 2) {
                    uVar12 = 700;
                    *(u32 *)(a0 + 700) = 1;

                    dVar24 = (double)CONCAT44(*(u32 *)a1[7], uVar9);
                    dVar21 = (double)CONCAT44(0x40800000, SUB84(dVar19, 0));

                    dVar24 =
                        (double)CONCAT44((float)((u64)dVar24 >> 0x20) / (float)((u64)dVar21 >> 0x20), SUB84(dVar24, 0));

                    *(int *)(a0 + 0x248) = (int)((u64)dVar24 >> 0x20);
                    uVar25 = CONCAT44(0x44898000, uVar2);
                    *(u32 *)(a0 + 0x250) = 0x44898000;

                    puVar5 = (u8 *)((int)puVar17 + -0x50);
                    (**(code **)(*(int *)a1[6] + 0x128))((int *)a1[6], puVar5, 700, 300);

                    *(int *)((int)puVar17 + -0x7b0) = (int)((u64)dVar21 >> 0x20);
                    *(u32 *)(a0 + 0x24c) = *(u32 *)((int)puVar17 + -0x7b0);

                    uVar18 = (u32)uVar25;
                    uVar2 = 0;
                    Vec3_ctor_xyz((u8 *)((int)puVar17 + -0x328), puVar5, uVar12, pcVar10);
                    uVar7 = SUB84(dVar21, 0);
                    Vec3_assign(a0 + 0x54, (u8 *)((int)puVar17 + -0x328), uVar12, pcVar10);
                    uVar9 = 0xffffffff;
                    pcVar4 = Vec3_dtor;
                    Vec3_dtor((u8 *)((int)puVar17 + -0x328), 0xffffffff, Vec3_dtor, pcVar10);
                    iVar15 = *(int *)(a0 + 0x124);
                    if (iVar15 < 0x33) {
                        if (iVar15 < 0x32) {
                            pcVar10 = (code *)0x28;
                            if ((iVar15 < 0x29) && (0x22 < iVar15)) {
                                if (iVar15 == 0x23) {

                                    uVar2 = 0;

                                    pcVar4 = Vec3_ctor_xyz;
                                    Vec3_ctor_xyz((u8 *)((int)puVar17 + -0x338), uVar9, Vec3_ctor_xyz, 0x28);
                                    Vec3_assign(a0 + 0x54, (u8 *)((int)puVar17 + -0x338), pcVar4, pcVar10);
                                    Vec3_dtor((u8 *)((int)puVar17 + -0x338), 0xffffffff, pcVar4, pcVar10);
                                    *(int *)((int)puVar17 + -0x998) = a0;

                                    dVar24 = (double)CONCAT44(*(u32 *)(*(int *)((int)puVar17 + -0x998) + 0x248), uVar2);
                                    dVar21 = (double)CONCAT44(0x42d20000, uVar7);

                                    dVar24 = (double)CONCAT44(
                                        (float)((u64)dVar24 >> 0x20) + (float)((u64)dVar21 >> 0x20), SUB84(dVar24, 0));

                                    *(int *)(*(int *)((int)puVar17 + -0x998) + 0x248) = (int)((u64)dVar24 >> 0x20);

                                } else if (iVar15 == 0x24) {

                                    uVar2 = uVar18;

                                    Vec3_ctor_xyz((u8 *)((int)puVar17 + -0x358), uVar9, pcVar4, 0x28);
                                    Vec3_assign(a0 + 0x54, (u8 *)((int)puVar17 + -0x358), pcVar4, pcVar10);
                                    *(u32 *)((int)puVar17 + -0xa70) = 0xffffffff;
                                    pcVar10 = Vec3_dtor;
                                    Vec3_dtor((u8 *)((int)puVar17 + -0x358), *(u32 *)((int)puVar17 + -0xa70), pcVar4,
                                              Vec3_dtor);
                                    *(int *)((int)puVar17 + -0x9a0) = a0;
                                    pcVar4 = (code *)(*(int *)((int)puVar17 + -0x9a0) + 0x248);

                                    uVar9 = *(u32 *)(*(int *)((int)puVar17 + -0x9a0) + 0x248);
                                    dVar24 = (double)CONCAT44(0x42d20000, uVar9);
                                    dVar21 = (double)CONCAT44(uVar9, uVar2);

                                    dVar21 = (double)CONCAT44(
                                        (float)((u64)dVar21 >> 0x20) - (float)((u64)dVar24 >> 0x20), SUB84(dVar21, 0));

                                    *(int *)pcVar4 = (int)((u64)dVar21 >> 0x20);

                                } else if (iVar15 == 0x27) {

                                    dVar24 = -0.0078125;

                                    Vec3_ctor_xyz((u8 *)((int)puVar17 + -0x348), uVar9, pcVar4, 0x28);
                                    puVar5 = (u8 *)((int)puVar17 + -0x348);
                                    pcVar10 = (code *)(a0 + 0x54);
                                    Vec3_assign(pcVar10, puVar5, puVar5, pcVar10);
                                    Vec3_dtor((u8 *)((int)puVar17 + -0x348), 0xffffffff, puVar5, pcVar10);
                                    *(int *)((int)puVar17 + -0x99c) = a0;
                                    pcVar4 = (code *)0x248;

                                    dVar24 = (double)CONCAT44((int)((u64)dVar24 >> 0x20), 0x42dc0000);
                                    dVar21 = (double)CONCAT44(*(u32 *)(*(int *)((int)puVar17 + -0x99c) + 0x248), uVar7);

                                    dVar21 = (double)CONCAT44((float)((u64)dVar21 >> 0x20) + SUB84(dVar24, 0),
                                                              SUB84(dVar21, 0));

                                    *(int *)(*(int *)((int)puVar17 + -0x99c) + 0x248) = (int)((u64)dVar21 >> 0x20);

                                } else if (iVar15 == 0x28) {
                                    dVar24 = 0.0;

                                    dVar24 = in_xd4;

                                    Vec3_ctor_xyz((u8 *)((int)puVar17 + -0x368), (u8 *)((int)puVar17 + -0x368), pcVar4,
                                                  0x28);
                                    pcVar10 = Vec3_assign;
                                    Vec3_assign(a0 + 0x54, (u8 *)((int)puVar17 + -0x368), pcVar4, Vec3_assign);
                                    pcVar4 = (code *)((int)puVar17 + -0x368);
                                    Vec3_dtor(pcVar4, 0xffffffff, pcVar4, pcVar10);
                                    *(int *)((int)puVar17 + -0x9a4) = a0;

                                    dVar21 =
                                        (double)CONCAT44(0x42dc0000, *(u32 *)(*(int *)((int)puVar17 + -0x9a4) + 0x248));

                                    fVar20 = SUB84(dVar21, 0) - (float)((u64)dVar21 >> 0x20);

                                    *(float *)(*(int *)((int)puVar17 + -0x9a4) + 0x248) = fVar20;
                                }
                            }
                        } else {
                            Vec3_ctor_xyz((u8 *)((int)puVar17 + -0x388), uVar9, (u8 *)((int)puVar17 + -0x388), pcVar10);
                            pcVar4 = (code *)((int)puVar17 + -0x388);
                            pcVar10 = Vec3_assign;
                            Vec3_assign(a0 + 0x54, pcVar4, pcVar4, Vec3_assign);
                            Vec3_dtor((u8 *)((int)puVar17 + -0x388), 0xffffffff, pcVar4, pcVar10);
                            *(int *)((int)puVar17 + -0x9a8) = a0;

                            dVar24 = (double)CONCAT44(0x43140000, *(u32 *)(*(int *)((int)puVar17 + -0x9a8) + 0x248));

                            fVar20 = SUB84(dVar24, 0) + (float)((u64)dVar24 >> 0x20);

                            *(float *)(*(int *)((int)puVar17 + -0x9a8) + 0x248) = fVar20;
                        }
                    } else if (iVar15 == 0x33) {
                        Vec3_ctor_xyz((u8 *)((int)puVar17 + -0x378), uVar9, pcVar4, pcVar10);
                        Vec3_assign(a0 + 0x54, (u8 *)((int)puVar17 + -0x378), pcVar4, pcVar10);
                        pcVar10 = (code *)0xffffffff;
                        Vec3_dtor((u8 *)((int)puVar17 + -0x378), 0xffffffff, pcVar4, 0xffffffff);
                    }
                    Vec3_ctor_copy((u8 *)((int)puVar17 + -0x398), a0 + 0x54, pcVar4, pcVar10);
                    pcVar10 = (code *)((int)puVar17 + -0x398);
                    iVar15 = a0 + 0x248;
                    uVar2 = Vec3_sub_04e0e0(a0, *(u32 *)a1[1], iVar15, pcVar10);
                    *(u32 *)((int)puVar17 + -0x7b4) = uVar2;
                    *(u32 *)((int)puVar17 + -0x670) = (u32)(*(int *)((int)puVar17 + -0x7b4) == 0);
                    uVar2 = 0xffffffff;
                    Vec3_dtor((u8 *)((int)puVar17 + -0x398), 0xffffffff, iVar15, pcVar10);
                    if (*(int *)((int)puVar17 + -0x670) != 0) {
                        Vec3_assign_f(a0 + 0x2d4, uVar2, iVar15, pcVar10);
                        Vec3_assign_f(a0 + 0x2a8, uVar2, iVar15, pcVar10);
                        *(int *)((int)puVar17 + -0x9ac) = a0;
                        *(int *)(*(int *)((int)puVar17 + -0x9ac) + 300) =
                            *(int *)(*(int *)((int)puVar17 + -0x9ac) + 300) + 1;
                        pcVar10 = NULL;
                        *(u32 *)((int)puVar17 + -0xa6c) = 0xb0;
                        CAnimBody_SetAnimation(a0 + *(int *)((int)puVar17 + -0xa6c), 0x1a, 0xffffffff, 0);
                        *(u32 *)(a0 + 0x218) = 0;
                    }
                    if (*(int *)(a0 + 0x290) == 1) {
                        *(int *)((int)puVar17 + -0x9b0) = a0;
                        *(u32 *)((int)puVar17 + -0xa68) = *(u32 *)((int)puVar17 + -0x9b0);
                        *(u32 *)((int)puVar17 + -0xa64) = 0x1fc;
                        *(u8 *)(*(int *)((int)puVar17 + -0xa64) + *(int *)((int)puVar17 + -0xa68)) =
                            *(u8 *)(*(int *)((int)puVar17 + -0x9b0) + 0x1fc) & 0xfb;
                    }
                } else if (iVar15 == 3) {
                    pcVar10 = (code *)(a0 + 0xb0);
                    CAnimBody_AdvanceFrame_wrapper(pcVar10, ar5_00, 0xb0, pcVar10);
                    iVar16 = 0;
                }
                *(u32 *)(a0 + 0x178) = 1;
            }
            break;
        case 0x29:
            *(u32 *)(a0 + 700) = 1;
            pcVar10 = (code *)0x134;
            iVar15 = *(int *)(a0 + 0x134);
            if ((iVar15 < 5) && (-1 < iVar15)) {
                /* WARNING: Could not recover jumptable at 0x8c03fee2. Too many branches */
                /* WARNING: Treating indirect jump as call */
                uVar2 = (*(code *)(&(&DATA_8c03ff04))[iVar15])();
                return uVar2;
            }
            break;
        case 0x2a:
            *(u32 *)(a0 + 0x214) = 0;
            game_sub_05a54c(a0, *(u32 *)a1[1], 0x2e8, pcVar10);
            break;
        case 0x2b:
            uVar12 = 0;
            uVar9 = 0x47;
            uVar2 = CAnimBody_SetAnimation(a0 + 0xb0, 0x47, 0xffffffff, 0);
            *(u32 *)((int)puVar17 + -0x84c) = uVar2;
            iVar15 = *(int *)((int)puVar17 + -0x84c);
            if (iVar15 != 6) {
                CAnimBody_SetFrame(a0 + 0xb0, uVar9, iVar15, uVar12);
            }
            pcVar10 = (code *)(a0 + 0xb0);
            uVar2 = CAnimBody_AdvanceFrame_033b98(pcVar10, uVar9, iVar15, pcVar10);
            *(u32 *)((int)puVar17 + -0x850) = uVar2;
            if (*(int *)((int)puVar17 + -0x850) == 1) {
                iVar16 = 0;
            }
            break;
        case 0x2c:
            if (pcVar14 == (code *)0x1) {
                pcVar10 = *(code **)a1[1];
                uVar2 = game_sub_057164(a0, pcVar10, 0x2e8, pcVar10);
                *(u32 *)((int)puVar17 + -0x8a4) = uVar2;
                if (*(int *)((int)puVar17 + -0x8a4) == 0) {
                    uVar2 = game_sub_0570cc(a0, 0x1a, pdVar6, pcVar10);
                    *(u32 *)((int)puVar17 + -0x8a8) = uVar2;
                    iVar16 = *(int *)((int)puVar17 + -0x8a8);
                    *(u32 *)(a0 + 0x218) = 0;
                }
            } else {
                pcVar10 = (code *)0x2e8;
                *(u32 *)(a0 + 0x2e8) = 0;
                game_sub_05ae54(a0, ar5_00, 0, 0x2e8);
                puVar5 = (u8 *)((int)puVar17 + -0x30);
                timer_sub_031c74(a0, puVar5, *(u32 *)a1[1], pcVar10);
                pcVar4 = timer_stop_94;
                timer_stop_94(a0, puVar5, timer_stop_94, pcVar10);
                uVar9 = 0;
                uVar2 = timer_sub_031de8(a0, 0, pcVar4, pcVar10);
                *(u32 *)((int)puVar17 + -0x8a0) = uVar2;
                if (*(int *)((int)puVar17 + -0x8a0) == 0) {
                    *(u32 *)(a0 + 300) = 0;
                    timer_start_94(a0, uVar9, pcVar4);
                    iVar16 = 0;
                }
            }
            break;
        case 0x2f:
            pcVar10 = (code *)0x3;
            if (*(int *)(a0 + 0x128) < 4) {
                iVar16 = 2;
            } else {
                iVar15 = *(int *)(a0 + 300);
                if (iVar15 == 0) {
                    *(u32 *)((int)puVar17 + -0xa6c) = 0x214;
                    *(u32 *)(*(int *)((int)puVar17 + -0xa6c) + a0) = 0;
                    pcVar10 = pcVar14;
                    uVar2 = game_sub_055c38(a0, *(u32 *)a1[1], a0 + 0x34c, pcVar14);
                    *(u32 *)((int)puVar17 + -0xa68) = uVar2;
                    *(u32 *)((int)puVar17 + -0x8ec) = *(u32 *)((int)puVar17 + -0xa68);
                    *(u32 *)((int)puVar17 + -0xa64) = *(u32 *)((int)puVar17 + -0x8ec);
                    if (*(int *)((int)puVar17 + -0xa64) == 0) {
                        *(u32 *)(a0 + 0x2e8) = 2;
                        *(int *)((int)puVar17 + -0xa54) = a0;
                        pcVar10 = (code *)(*(int *)(*(int *)((int)puVar17 + -0xa54) + 300) + 1);
                        *(code **)(*(int *)((int)puVar17 + -0xa54) + 300) = pcVar10;
                    }
                } else {
                    if (iVar15 == 1) {
                        iVar15 = a0 + 0x34c;
                        Vec3_assign(a0 + 0x248, iVar15, iVar15, 3);
                        puVar13 = (u64 *)(a0 + 0x248);

                        *(u32 *)puVar13 = 0x449b0000;
                        *(u32 *)(a0 + 0x24c) = 0x439b0000;

                        Vec3_ctor_xyz((u8 *)((int)puVar17 + -0x5cc), 0x24c, iVar15, puVar13);
                        *(u8 **)((int)puVar17 + -0xa74) = (u8 *)((int)puVar17 + -0x5dc);
                        puVar5 = (u8 *)((int)puVar17 + -0x5cc);
                        pcVar10 = Vec3_sub;
                        Vec3_sub(a0 + 0x248, puVar5, iVar15, Vec3_sub, *(u32 *)((int)puVar17 + -0xa74));
                        puVar8 = (u8 *)((int)puVar17 + -0x5ec);
                        *(u8 **)((int)puVar17 + -0xa74) = puVar8;
                        Vec3_normalize((u8 *)((int)puVar17 + -0x5dc), puVar5, puVar8, pcVar10);
                        *(u8 **)((int)puVar17 + -0xa74) = (u8 *)((int)puVar17 + -0x5fc);
                        Vec3_scale((u8 *)((int)puVar17 + -0x5ec), &g_8c136580, puVar8, pcVar10,
                                   *(u32 *)((int)puVar17 + -0xa74));
                        iVar15 = a0 + 0x248;
                        pcVar10 = Vec3_add_assign;
                        Vec3_add_assign(iVar15, (u8 *)((int)puVar17 + -0x5fc));
                        Vec3_dtor((u8 *)((int)puVar17 + -0x5fc), 0xffffffff, pcVar10, iVar15);
                        pcVar4 = Vec3_dtor;
                        Vec3_dtor((u8 *)((int)puVar17 + -0x5ec), 0xffffffff, pcVar10, Vec3_dtor);
                        uVar9 = 0xffffffff;
                        Vec3_dtor((u8 *)((int)puVar17 + -0x5dc), 0xffffffff, 0xffffffff, pcVar4);
                        uVar2 = 0xffffffff;
                        Vec3_dtor((u8 *)((int)puVar17 + -0x5cc), 0xffffffff, uVar9, pcVar4);
                        pcVar10 = Vec3_ctor_xyz;
                        Vec3_ctor_xyz((u8 *)((int)puVar17 + -0x60c), uVar2, Vec3_ctor_xyz, pcVar4);
                        *(u8 **)((int)puVar17 + -0xa74) = (u8 *)((int)puVar17 + -0x61c);
                        iVar15 = a0 + 0x248;
                        Vec3_sub((u8 *)((int)puVar17 + -0x60c), iVar15, pcVar10, pcVar4,
                                 *(u32 *)((int)puVar17 + -0xa74));
                        *(u8 **)((int)puVar17 + -0xa74) = (u8 *)((int)puVar17 + -0x62c);
                        pcVar4 = Vec3_normalize;
                        Vec3_normalize((u8 *)((int)puVar17 + -0x61c), iVar15, pcVar10, Vec3_normalize);
                        puVar5 = (u8 *)((int)puVar17 + -0x62c);
                        Vec3_assign(a0 + 0x54, puVar5, puVar5, pcVar4);
                        Vec3_dtor((u8 *)((int)puVar17 + -0x62c), 0xffffffff, puVar5, pcVar4);
                        pcVar10 = Vec3_dtor;
                        Vec3_dtor((u8 *)((int)puVar17 + -0x61c), 0xffffffff, puVar5, Vec3_dtor);
                        Vec3_dtor((u8 *)((int)puVar17 + -0x60c), 0xffffffff, 0xffffffff, pcVar10);
                        *(int *)((int)puVar17 + -0xa58) = a0;
                        pdVar6 = (double *)0x12c;
                        *(int *)(*(int *)((int)puVar17 + -0xa58) + 300) =
                            *(int *)(*(int *)((int)puVar17 + -0xa58) + 300) + 1;
                        *(u32 *)(a0 + 700) = 1;
                        *(u32 *)(a0 + 0x40) = 5;
                    } else if (iVar15 != 2) {
                        if (iVar15 == 3) {
                            CAnimBody_AdvanceFrame_wrapper(a0 + 0xb0, ar5_00, 0x2e8, 3);
                            iVar16 = 0;
                        }
                        break;
                    }
                    Vec3_ctor_copy((u8 *)((int)puVar17 + -0x63c), a0 + 0x54, pdVar6, pcVar10);
                    pcVar10 = (code *)((int)puVar17 + -0x63c);
                    uVar2 = Vec3_sub_04e0e0(a0, *(u32 *)a1[1], a0 + 0x248, pcVar10);
                    *(u32 *)((int)puVar17 + -0x8f0) = uVar2;
                    *(u32 *)((int)puVar17 + -0x690) = (u32)(*(int *)((int)puVar17 + -0x8f0) == 0);
                    pcVar4 = (code *)0xffffffff;
                    Vec3_dtor((u8 *)((int)puVar17 + -0x63c), 0xffffffff, uVar2, pcVar10);
                    if (*(int *)((int)puVar17 + -0x690) != 0) {
                        pcVar10 = NULL;
                        uVar2 = 0;
                        CAnimBody_SetAnimation(a0 + 0xb0, 0x1a, 0, 0);
                        pcVar4 = CAnimBody_SetFrame;
                        CAnimBody_SetFrame(a0 + 0xb0, CAnimBody_SetFrame, uVar2, pcVar10);
                        *(u32 *)(a0 + 0x40) = 5;
                        *(u32 *)(a0 + 0x218) = 0;
                        *(int *)((int)puVar17 + -0xa5c) = a0;
                        *(int *)(*(int *)((int)puVar17 + -0xa5c) + 300) =
                            *(int *)(*(int *)((int)puVar17 + -0xa5c) + 300) + 1;
                    }
                    if (*(int *)(a0 + 0x290) == 1) {
                        *(int *)((int)puVar17 + -0xa60) = a0;
                        pcVar10 = (code *)0xfffffffb;
                        *(u8 *)(*(int *)((int)puVar17 + -0xa60) + 0x1fc) =
                            *(u8 *)(*(int *)((int)puVar17 + -0xa60) + 0x1fc) & 0xfb;
                        flags6_clear_all(a0 + 0x1fc, pcVar4, 0x1fc, 0xfffffffb);
                    }
                }
            }
            break;
        case 0x30:
            *(u32 *)(a0 + 0x178) = 1;
            *(u32 *)(a0 + 700) = 0;
            *(int *)((int)puVar17 + -0xa28) = a0;
            iVar15 = *(int *)((int)puVar17 + -0xa28);
            pcVar10 = *(code **)(*(int *)((int)puVar17 + -0xa28) + 0x284);
            *(code **)(iVar15 + 0x284) = pcVar10 + 1;
            switch (*(u32 *)(a0 + 300)) {
            case 0:
                uVar9 = 0x1a;
                uVar2 = CAnimBody_SetAnimation(a0 + 0xb0, 0x1a, 0xffffffff, 0);
                *(u32 *)((int)puVar17 + -0x8b4) = uVar2;
                iVar15 = *(int *)((int)puVar17 + -0x8b4);
                if (iVar15 != 6) {
                    CAnimBody_SetFrame(a0 + 0xb0, uVar9, CAnimBody_SetFrame, iVar15);
                }
                iVar11 = a0 + 0xb0;
                CAnimBody_AdvanceFrame_wrapper(iVar11, uVar9, iVar11, iVar15);
                pcVar10 = (code *)*a1;
                uVar2 = (**(code **)(*(int *)pcVar10 + 0x34))(pcVar10, uVar9, iVar11, pcVar10);
                *(u32 *)((int)puVar17 + -0x8b8) = uVar2;
                if (*(int *)((int)puVar17 + -0x8b8) == 1) {
                    (**(code **)(*(int *)*a1 + 0x38))((int *)*a1, 0, iVar11, pcVar10);
                    *(int *)((int)puVar17 + -0xa2c) = a0;
                    pcVar10 = *(code **)(*(int *)((int)puVar17 + -0xa2c) + 300);
                    *(code **)(*(int *)((int)puVar17 + -0xa2c) + 300) = pcVar10 + 1;
                }
                break;
            case 1:
                Vec3_ctor_xyz((u8 *)((int)puVar17 + -0x59c), iVar15, (u8 *)((int)puVar17 + -0x59c), pcVar10);
                pcVar10 = (code *)((int)puVar17 + -0x59c);
                uVar9 = *(u32 *)a1[1];
                uVar2 = Vec3_sub_04e0e0(a0, *(u32 *)a1[1], uVar9, pcVar10);
                *(u32 *)((int)puVar17 + -0x8bc) = uVar2;
                *(u32 *)((int)puVar17 + -0x684) = (u32)(*(int *)((int)puVar17 + -0x8bc) == 0);
                Vec3_dtor((u8 *)((int)puVar17 + -0x59c), 0xffffffff, uVar9, pcVar10);
                if (*(int *)((int)puVar17 + -0x684) != 0) {
                    uVar2 = 0x1a;
                    CAnimBody_SetAnimation(a0 + 0xb0, 0x1a, 0xffffffff, 0);
                    pcVar10 = (code *)0xb0;
                    CAnimBody_SetFrame(a0 + 0xb0, uVar2, a0 + 0xb0, 0xb0);
                    *(int *)((int)puVar17 + -0xa30) = a0;
                    *(u32 *)((int)puVar17 + -0xa6c) = 300;
                    *(int *)(*(int *)((int)puVar17 + -0xa6c) + *(int *)((int)puVar17 + -0xa30)) =
                        *(int *)(*(int *)((int)puVar17 + -0xa30) + 300) + 1;
                }
                break;
            case 2:
                uVar7 = 0;
                *(u32 *)((int)puVar17 + -0xa68) = 0x1a;
                uVar12 = *(u32 *)((int)puVar17 + -0xa68);
                *(u32 *)((int)puVar17 + -0xa64) = 0xb0;
                uVar9 = CAnimBody_SetAnimation(a0 + *(int *)((int)puVar17 + -0xa64), uVar12, 0xffffffff, 0);
                uVar18 = SUB84(dVar19, 0);
                *(u32 *)((int)puVar17 + -0x8c0) = uVar9;
                if (*(int *)((int)puVar17 + -0x8c0) != 6) {
                    CAnimBody_SetFrame(a0 + 0xb0, uVar12, CAnimBody_SetFrame, uVar7);
                }
                uVar9 = 0xb0;
                iVar15 = a0 + 0xb0;
                CAnimBody_AdvanceFrame_wrapper(iVar15, 0xb0, iVar15, uVar7);
                pcVar10 = (code *)(**(code **)(*(int *)*a1 + 0x34))((int *)*a1, uVar9, iVar15, uVar7);
                *(code **)((int)puVar17 + -0x8c4) = pcVar10;
                if (*(int *)((int)puVar17 + -0x8c4) == 1) {
                    (**(code **)(*(int *)*a1 + 0x38))((int *)*a1, 0, iVar15, pcVar10);
                    *(int *)((int)puVar17 + -0xa34) = a0;
                    *(int *)(*(int *)((int)puVar17 + -0xa34) + 300) =
                        *(int *)(*(int *)((int)puVar17 + -0xa34) + 300) + 1;

                    uVar9 = 0x1d;
                    CAnimBody_SetAnimation(a0 + 0xb0, 0x1d, 0xffffffff, 0);
                    uVar23 = 0;
                    iVar15 = a0 + 0xb0;
                    pcVar10 = CAnimBody_SetFrame;
                    CAnimBody_SetFrame(iVar15, uVar9, CAnimBody_SetFrame, iVar15);
                    uVar9 = get_motion_data(a0 + 0xb0, 0x1d, pcVar10, iVar15);
                    *(u32 *)((int)puVar17 + -0x8c8) = uVar9;
                    pcVar10 = (code *)0x278;

                    dVar24 = (double)CONCAT44((float)*(int *)((int)puVar17 + -0x8c8), uVar18);

                    dVar21 = (double)((u64)uVar23 << 0x20);
                    fVar20 = (float)((u64)dVar24 >> 0x20);

                    bVar27 = fVar20 < 0.0;

                    dVar19 = dVar24;
                    if (bVar27) {

                        dVar21 = (double)CONCAT44(0x4f800000, fVar20);

                        fVar20 = (float)((u64)dVar21 >> 0x20);
                        dVar21 = (double)CONCAT44(fVar20, SUB84(dVar21, 0) + fVar20);

                        dVar19 = in_xd4;

                        dVar19 = (double)CONCAT44(SUB84(dVar21, 0), SUB84(dVar24, 0));
                    }

                    dVar24 = (double)CONCAT44(0x42b60000, uVar2);
                    dVar21 = (double)CONCAT44((int)((u64)dVar21 >> 0x20), (int)((u64)dVar19 >> 0x20));
                    dVar19 = in_xd4;

                    fVar20 = SUB84(dVar21, 0) / (float)((u64)dVar24 >> 0x20);

                    *(float *)(a0 + 0x278) = fVar20;
                }
                break;
            case 3:
                uVar2 = CAnimBody_AdvanceFrame_033b98(a0 + 0xb0, iVar15, 300, pcVar10);
                *(u32 *)((int)puVar17 + -0x8cc) = uVar2;
                if (*(int *)((int)puVar17 + -0x8cc) == 1) {
                    *(int *)((int)puVar17 + -0xa38) = a0;
                    *(int *)(*(int *)((int)puVar17 + -0xa38) + 300) =
                        *(int *)(*(int *)((int)puVar17 + -0xa38) + 300) + 1;
                    pcVar10 = NULL;
                    uVar9 = 0xffffffff;
                    uVar2 = 0x1a;
                    CAnimBody_SetAnimation(a0 + 0xb0, 0x1a, 0xffffffff, 0);
                    CAnimBody_SetFrame(a0 + 0xb0, uVar2, uVar9, pcVar10);
                }
                break;
            case 4:
                uVar12 = 0;
                uVar9 = 0x1a;
                uVar2 = CAnimBody_SetAnimation(a0 + 0xb0, 0x1a, 0xffffffff, 0);
                *(u32 *)((int)puVar17 + -0x8d0) = uVar2;
                iVar15 = *(int *)((int)puVar17 + -0x8d0);
                if (iVar15 != 6) {
                    CAnimBody_SetFrame(a0 + 0xb0, uVar9, iVar15, uVar12);
                }
                CAnimBody_AdvanceFrame_wrapper(a0 + 0xb0, uVar9, iVar15, uVar12);
                pcVar10 = (code *)(**(code **)(*(int *)*a1 + 0x34))((int *)*a1, uVar9, iVar15, uVar12);
                *(code **)((int)puVar17 + -0x8d4) = pcVar10;
                if (*(int *)((int)puVar17 + -0x8d4) == 1) {
                    (**(code **)(*(int *)*a1 + 0x38))((int *)*a1, 0, iVar15, pcVar10);
                    *(int *)((int)puVar17 + -0xa3c) = a0;
                    *(int *)(*(int *)((int)puVar17 + -0xa3c) + 300) =
                        *(int *)(*(int *)((int)puVar17 + -0xa3c) + 300) + 1;
                }
                break;
            case 5:
                Vec3_ctor_xyz((u8 *)((int)puVar17 + -0x5ac), iVar15, 300, pcVar10);
                pcVar10 = (code *)((int)puVar17 + -0x5ac);
                uVar9 = *(u32 *)a1[1];
                uVar2 = Vec3_sub_04e0e0(a0, *(u32 *)a1[1], uVar9, pcVar10);
                *(u32 *)((int)puVar17 + -0x8d8) = uVar2;
                *(u32 *)((int)puVar17 + -0x688) = (u32)(*(int *)((int)puVar17 + -0x8d8) == 0);
                Vec3_dtor((u8 *)((int)puVar17 + -0x5ac), 0xffffffff, uVar9, pcVar10);
                if (*(int *)((int)puVar17 + -0x688) != 0) {
                    *(int *)((int)puVar17 + -0xa40) = a0;
                    *(int *)(*(int *)((int)puVar17 + -0xa40) + 300) =
                        *(int *)(*(int *)((int)puVar17 + -0xa40) + 300) + 1;
                }
                break;
            case 6:
                uVar9 = 0xffffffff;
                uVar2 = 0x1a;
                CAnimBody_SetAnimation(a0 + 0xb0, 0x1a, 0xffffffff, 0);
                pcVar10 = (code *)0xb0;
                CAnimBody_SetFrame(a0 + 0xb0, uVar2, uVar9, 0xb0);
                piVar1 = (int *)*a1;
                uVar2 = (**(code **)(*piVar1 + 0x34))(piVar1, uVar2, piVar1, pcVar10);
                *(u32 *)((int)puVar17 + -0x8dc) = uVar2;
                if (*(int *)((int)puVar17 + -0x8dc) == 1) {
                    (**(code **)(*(int *)*a1 + 0x38))((int *)*a1, 0, piVar1, pcVar10);
                    uVar2 = 0x26;
                    CAnimBody_SetAnimation(a0 + 0xb0, 0x26, 0xffffffff, 0);
                    pcVar10 = (code *)(a0 + 0xb0);
                    CAnimBody_SetFrame(pcVar10, uVar2, 0xb0, pcVar10);
                    *(int *)((int)puVar17 + -0xa44) = a0;
                    *(int *)(*(int *)((int)puVar17 + -0xa44) + 300) =
                        *(int *)(*(int *)((int)puVar17 + -0xa44) + 300) + 1;
                }
                break;
            case 7:
                if (*(int *)(a0 + 0x128) == 4) {
                    CAnimBody_AdvanceFrame_033d88(a0 + 0xb0, iVar15, 4, pcVar10);
                } else {
                    CAnimBody_AdvanceFrame_033d88(a0 + 0xb0, iVar15, *(int *)(a0 + 0x128), pcVar10);
                }
                *(int *)((int)puVar17 + -0xa48) = a0;
                *(u32 *)((int)puVar17 + -0xa70) = *(u32 *)((int)puVar17 + -0xa48);
                pcVar10 = *(code **)((int)puVar17 + -0xa48);
                *(int *)(*(int *)((int)puVar17 + -0xa70) + 300) = *(int *)(pcVar10 + 300) + 1;
                break;
            case 8:
                uVar2 = CAnimBody_AdvanceFrame_wrapper(a0 + 0xb0, 0xb0, 300, pcVar10);
                *(u32 *)((int)puVar17 + -0x8e0) = uVar2;
                if (*(int *)((int)puVar17 + -0x8e0) == 1) {
                    *(u32 *)(a0 + 0x40) = 5;
                    *(int *)((int)puVar17 + -0xa4c) = a0;
                    pcVar10 = *(code **)((int)puVar17 + -0xa4c);
                    *(int *)(pcVar10 + 300) = *(int *)(*(int *)((int)puVar17 + -0xa4c) + 300) + 1;
                }
                break;
            case 9:
                Vec3_ctor_xyz((u8 *)((int)puVar17 + -0x5bc), iVar15, 300, pcVar10);
                pcVar10 = (code *)Vec3_sub_04e0e0(a0, *(u32 *)a1[1], *(u32 *)a1[1], (u8 *)((int)puVar17 + -0x5bc));
                *(code **)((int)puVar17 + -0x8e4) = pcVar10;
                *(u32 *)((int)puVar17 + -0x68c) = (u32)(*(int *)((int)puVar17 + -0x8e4) == 0);
                Vec3_dtor((u8 *)((int)puVar17 + -0x5bc), 0xffffffff, Vec3_dtor, pcVar10);
                if (*(int *)((int)puVar17 + -0x68c) != 0) {
                    uVar12 = 0;
                    uVar9 = 0xffffffff;
                    uVar2 = 0x1a;
                    CAnimBody_SetAnimation(a0 + 0xb0, 0x1a, 0xffffffff, 0);
                    CAnimBody_SetFrame(a0 + 0xb0, uVar2, uVar9, uVar12);
                    *(int *)((int)puVar17 + -0xa50) = a0;
                    pcVar10 = *(code **)(*(int *)((int)puVar17 + -0xa50) + 300);
                    *(code **)(*(int *)((int)puVar17 + -0xa50) + 300) = pcVar10 + 1;
                }
                break;
            case 10:
                pcVar10 = NULL;
                uVar12 = 0xffffffff;
                uVar9 = 0x1a;
                uVar2 = CAnimBody_SetAnimation(a0 + 0xb0, 0x1a, 0xffffffff, 0);
                *(u32 *)((int)puVar17 + -0x8e8) = uVar2;
                if (*(int *)((int)puVar17 + -0x8e8) != 6) {
                    CAnimBody_SetFrame(a0 + 0xb0, uVar9, uVar12, pcVar10);
                }
                *(u32 *)(a0 + 0x178) = 0;
                CAnimBody_AdvanceFrame_wrapper(a0 + 0xb0, uVar9, uVar12, pcVar10);
                *(u32 *)(a0 + 0x214) = 1;
                *(u32 *)(a0 + 700) = 0;
            }
        }
    } else {
    override_jmp_8c03f9a2_case_7:
        iVar16 = 0;
        pcVar10 = timer_sub_031c74;
        timer_sub_031c74(a0, (u8 *)((int)puVar17 + -0x30), *(u32 *)a1[1], timer_sub_031c74);
    }
    iVar15 = *(int *)(a0 + 0x124);
    if ((iVar15 != 2) && (*(int *)(a0 + 0x124) != 0x14)) {
        timer_sub_031ab4(a0, *(u32 *)(a1[1] + 4), iVar15, pcVar10);
        Vec3_assign(a0 + 0x80, a0 + 0x14, iVar15, pcVar10);
    }
    pcVar10 = Vec3_assign;
    Vec3_assign(&g_8c2803a8, *(u32 *)a1[1], iVar15, Vec3_assign);
    *(int *)((int)puVar17 + -0x650) = iVar16;
    g_8c2803b8 = pcVar14;
    Vec3_dtor((u8 *)((int)puVar17 + -0xa8), 0xffffffff, (u8 *)((int)puVar17 + -0xa8), pcVar10);
    uVar2 = 0xffffffff;
    pcVar10 = free_if_nonnull_wrap_102790;
    free_if_nonnull_wrap_102790((u8 *)((int)puVar17 + -0x98), 0xffffffff, 0xffffffff, free_if_nonnull_wrap_102790);
    Vec3_dtor((u8 *)((int)puVar17 + -0x8c), 0xffffffff, uVar2, pcVar10);
    Vec3_dtor((u8 *)((int)puVar17 + -0x7c), 0xffffffff, uVar2, pcVar10);
    free_if_nonnull_wrap_102790((u8 *)((int)puVar17 + -0x6c), 0xffffffff, uVar2, pcVar10);
    Vec3_dtor((u8 *)((int)puVar17 + -0x60), 0xffffffff, uVar2, pcVar10);
    uVar2 = 0xffffffff;
    pcVar10 = Vec3_dtor;
    Vec3_dtor((u8 *)((int)puVar17 + -0x50), 0xffffffff, Vec3_dtor, 0xffffffff);
    Vec3_dtor((u8 *)((int)puVar17 + -0x40), 0xffffffff, pcVar10, uVar2);
    Vec3_dtor((u8 *)((int)puVar17 + -0x30), 0xffffffff, pcVar10, uVar2);
    return *(u32 *)((int)puVar17 + -0x650);
}
