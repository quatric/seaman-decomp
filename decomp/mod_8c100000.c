/* Seaman (USA) region 0x8c100000-0x8c110000 (Ghidra decompiler, cleaned up by tools/readable.py) */

#include "seaman.h"
#include "globals.h"

/*
 * input_get_held_bits  0x8c100030
 * the PDS_PERIPHERAL on bits (+0xa528) of the controller state a0
 */
u32 input_get_held_bits(int a0) {
    return *(u32 *)(0xa528 + a0);
}

/*
 * input_no_buttons_held  0x8c10003c
 * 1 when A, B, X, Y and Start are all up on the pad at +0xcc
 * called by: game_uses_speech_is_playing_0bad68
 */
u32 input_no_buttons_held(int a0, u32 a1, u32 a2, u32 a3) {
    int iVar1;

    iVar1 = input_a_held(*(u32 *)(0xcc + a0));
    if ((((iVar1 == 0) && (iVar1 = input_b_held(*(u32 *)(0xcc + a0)), iVar1 == 0)) &&
         (iVar1 = (*(code *)(&input_x_held))(*(u32 *)(0xcc + a0), a1, a2, a3), iVar1 == 0)) &&
        ((iVar1 = (*(code *)(&input_y_held))(*(u32 *)(0xcc + a0), a1, a2, a3),
          iVar1 == 0 && (iVar1 = input_start_held(*(u32 *)(0xcc + a0)), iVar1 == 0)))) {
        return 1;
    }
    return 0;
}

/*
 * input_start_only_pressed  0x8c1000c8
 * 1 when Start was just pressed on the pad at +0xcc with A, B, X and Y all up
 * called by: confirm_exit_save, game_uses_get_field_d0_0c6e74
 */
u32 input_start_only_pressed(int a0, u32 a1, u32 a2, u32 a3) {
    int iVar1;

    iVar1 = input_start_pressed(*(u32 *)(0xcc + a0));
    if ((((iVar1 == 1) && (iVar1 = input_a_held(*(u32 *)(0xcc + a0)), iVar1 == 0)) &&
         (iVar1 = input_b_held(*(u32 *)(0xcc + a0)), iVar1 == 0)) &&
        ((iVar1 = (*(code *)(&input_x_held))(*(u32 *)(0xcc + a0), a1, a2, a3),
          iVar1 == 0 && (iVar1 = (*(code *)(&input_y_held))(*(u32 *)(0xcc + a0), a1, a2, a3), iVar1 == 0)))) {
        return 1;
    }
    return 0;
}

/*
 * input_input_helper_100154  0x8c100154
 * area name: sits between input functions (same compilation unit); behaviour name: mostly calls input functions
 * called by: menu_pick_option_0, menu_pick_option_1, menu_pick_option_2, menu_pick_option_3
 */
u32 input_input_helper_100154(int a0) {
    int iVar1;
    u32 uVar2;

    iVar1 = get_field_4_0637f8(a0 + 0xd8);
    if (iVar1 == 0) {
        iVar1 = input_l_pressed(*(u32 *)(0xcc + a0));
        if ((iVar1 == 1) && (uVar2 = get_field_a546_s16(*(u32 *)(0xcc + a0)), (u16)uVar2 < 0x1e)) {
            return 1;
        }
        uVar2 = 0;
    } else {
        uVar2 = input_l_pressed(*(u32 *)(0xcc + a0));
    }
    return uVar2;
}

/*
 * get_field_a546_s16  0x8c1001d4
 * called by: input_input_helper_100154
 */
int get_field_a546_s16(int a0) {
    return (int)*(short *)(0xa546 + a0);
}

/*
 * input_input_helper_1001e0  0x8c1001e0
 * area name: sits between input functions (same compilation unit); behaviour name: mostly calls input functions
 * called by: game_uses_Vec3_ctor_zero_0ff7d4, static_init_437330
 */
u32 input_input_helper_1001e0(int a0) {
    int iVar1;

    iVar1 = input_x_off(*(u32 *)(0xcc + a0));
    if ((iVar1 == 0) && (iVar1 = input_r_off(*(u32 *)(0xcc + a0)), iVar1 == 0)) {
        return 0;
    }
    return 1;
}

/*
 * input_r_only_start_timeout  0x8c10022c
 * R pressed with neither L nor X held (and state +0x188 not 3) starts the 120-frame timeout
 * called by: game_uses_ret_const_140_0dbf90, input_uses_input_y_pressed_wrap_0dc28c
 */
u32 input_r_only_start_timeout(int a0, u32 a1, u32 a2, u32 a3) {
    int iVar1;
    u32 uVar2;

    uVar2 = 0;
    iVar1 = input_r_pressed(*(u32 *)(0xcc + a0));
    if (iVar1 == 1) {
        iVar1 = (*(code *)(&input_l_held))(*(u32 *)(0xcc + a0), a1, a2, a3);
        if (iVar1 == 0) {
            iVar1 = (*(code *)(&input_x_held))(*(u32 *)(0xcc + a0), a1, a2, a3);
            if ((iVar1 == 0) && (*(int *)(0x188 + a0) != 3)) {
                set_timeout_120(a0, 1);
                uVar2 = 1;
            }
        }
    }
    return uVar2;
}

/*
 * input_input_helper_1002a8  0x8c1002a8
 * area name: sits between input functions (same compilation unit); behaviour name: mostly calls input functions
 * called by: game_uses_free_if_nonnull_wrap_0e8280, game_uses_ret_const_140_0dbf90,
 * input_uses_input_y_pressed_wrap_0dc28c
 */
u32 input_input_helper_1002a8(int a0) {
    int iVar1;
    u32 uVar2;

    uVar2 = 0;
    iVar1 = input_x_held(*(u32 *)(a0 + 0xcc));
    if (iVar1 == 1) {
        iVar1 = input_r_held(*(u32 *)(a0 + 0xcc));
        if (iVar1 == 0) {
            set_field_20(a0 + 0x15c, u____8c1421cc);
            set_timeout_120(a0, 2);
            uVar2 = 1;
        }
    }
    return uVar2;
}

/*
 * input_uses_get_field_4_10031c  0x8c10031c
 * area name: sits between input functions (same compilation unit); behaviour name: its main named callee is
 * get_field_4_0637f8 called by: game_uses_free_if_nonnull_wrap_0e8280, game_uses_get_field_24_0e5238,
 * game_uses_stick_x_right_half_0e1f90, input_uses_get_field_24_0e25c0
 */
u32 input_uses_get_field_4_10031c(int a0) {
    int iVar1;
    u32 uVar2;

    uVar2 = 0;
    iVar1 = get_field_4_0637f8(a0 + 0xd8);
    if (iVar1 == 0) {
        iVar1 = input_r_held(*(u32 *)(a0 + 0xcc));
        if ((iVar1 == 1) && (*(int *)(a0 + 0x188) == 2)) {
            set_field_20(a0 + 0x15c, u____8c1421cc);
            set_timeout_120(a0, 3);
            uVar2 = 1;
        }
    } else {
        uVar2 = 0;
    }
    return uVar2;
}

/*
 * input_uses_set_timeout_120_1003b0  0x8c1003b0
 * area name: sits between input functions (same compilation unit); behaviour name: its main named callee is
 * set_timeout_120 called by: game_uses_stick_x_right_half_0e1f90
 */
int input_uses_set_timeout_120_1003b0(int a0, u32 a1, u32 a2, u32 a3) {
    int iVar1;

    if (g_8c441430 == '\0') {
        g_8c44142c = 0;
        g_8c441430 = '\x01';
    }
    iVar1 = get_field_4_0637f8(a0 + 0xd8);
    if (iVar1 == 0) {
        iVar1 = (*(code *)(&input_r_held))(*(u32 *)(0xcc + a0), a1, a2, a3);
        if ((iVar1 == 1) && (*(int *)(0x188 + a0) == 2)) {
            iVar1 = (*(code *)(&input_r_held))(*(u32 *)(0xcc + a0), a1, a2, a3);
            if (iVar1 == 0) {
                g_8c44142c = 0;
            } else {
                g_8c44142c = 1;
            }
        }
        if ((g_8c44142c == 1) && (iVar1 = (*(code *)(&input_r_held))(*(u32 *)(0xcc + a0), a1, a2, a3), iVar1 == 0)) {
            g_8c44142c = 0;
            set_timeout_120(a0, 2);
        } else if ((g_8c44142c == 1) &&
                   (iVar1 = (*(code *)(&input_x_held))(*(u32 *)(0xcc + a0), a1, a2, a3), iVar1 == 0)) {
            g_8c44142c = 0;
            set_timeout_120(a0, 0);
        }
        return g_8c44142c;
    }
    g_8c44142c = 0;
    return 0;
}

/*
 * input_uses_set_timeout_120_1004b4  0x8c1004b4
 * area name: sits between input functions (same compilation unit); behaviour name: its main named callee is
 * set_timeout_120 called by: game_uses_free_if_nonnull_wrap_0e8280, game_uses_ret_const_140_0dbf90,
 * input_stick_with_x_dispatch, input_uses_input_y_pressed_wrap_0dc28c
 */
u32 *input_uses_set_timeout_120_1004b4(int a0) {
    float fVar1;
    double dVar2;
    float fVar3;
    u64 in_xd0;
    char cVar4;
    char cVar5;

    cVar5 = '\0';
    cVar4 = '\0';
    if (*(int *)(a0 + 0x188) == 6) {
        set_timeout_120(a0, 0);
    }
    *(u16 *)(a0 + 0x18c) = 0x78;
    if (cVar5 == '\0') {
        dVar2 = (double)CONCAT44(*(u32 *)(a0 + 0x140), *(u32 *)(a0 + 0x130));
    } else {
        in_xd0 = *(u64 *)(a0 + 0x130);
        dVar2 = *(double *)(a0 + 0x140);
    }
    if (cVar4 == '\0') {
        fVar1 = SUB84(dVar2, 0) + (float)((u64)dVar2 >> 0x20);
    } else {
        fVar1 = SUB84(dVar2 + dVar2, 0);
    }
    if (cVar5 == '\0') {
        *(float *)(a0 + 0x130) = fVar1;
        fVar1 = *(float *)(a0 + 0x130);
        fVar3 = 50.0;
    } else {
        *(u64 *)(a0 + 0x130) = in_xd0;
        fVar1 = 50.0;
        fVar3 = 2.721048e+09;
    }
    if (cVar4 != '\0' || fVar1 <= fVar3) {
        if (cVar5 == '\0') {
            *(u32 *)(a0 + 0x130) = 0x42480000;
        } else {
            *(u64 *)(a0 + 0x130) = 0x4f222fe642480000;
        }
    }
    return &g_8c100528;
}

/*
 * input_uses_set_timeout_120_10052c  0x8c10052c
 * area name: sits between input functions (same compilation unit); behaviour name: its main named callee is
 * set_timeout_120 called by: game_uses_free_if_nonnull_wrap_0e8280, game_uses_ret_const_140_0dbf90,
 * input_stick_with_x_dispatch, input_uses_input_y_pressed_wrap_0dc28c
 */
u32 *input_uses_set_timeout_120_10052c(int a0) {
    float fVar1;
    double dVar2;
    float fVar3;
    u64 in_xd0;
    char cVar4;
    char cVar5;

    cVar5 = '\0';
    cVar4 = '\0';
    if (*(int *)(a0 + 0x188) == 6) {
        set_timeout_120(a0, 0);
    }
    *(u16 *)(a0 + 0x18c) = 0x78;
    if (cVar5 == '\0') {
        dVar2 = (double)CONCAT44(*(u32 *)(a0 + 0x140), *(u32 *)(a0 + 0x130));
    } else {
        in_xd0 = *(u64 *)(a0 + 0x130);
        dVar2 = *(double *)(a0 + 0x140);
    }
    if (cVar4 == '\0') {
        fVar1 = SUB84(dVar2, 0) + (float)((u64)dVar2 >> 0x20);
    } else {
        fVar1 = SUB84(dVar2 + dVar2, 0);
    }
    if (cVar5 == '\0') {
        *(float *)(a0 + 0x130) = fVar1;
        fVar1 = *(float *)(a0 + 0x130);
        fVar3 = 430.0;
    } else {
        *(u64 *)(a0 + 0x130) = in_xd0;
        fVar1 = 430.0;
        fVar3 = 2.721048e+09;
    }
    if (cVar4 != '\0' || fVar3 <= fVar1) {
        if (cVar5 == '\0') {
            *(u32 *)(a0 + 0x130) = 0x43d70000;
        } else {
            *(u64 *)(a0 + 0x130) = 0x4f222fe643d70000;
        }
    }
    return &g_8c1005a0;
}

/*
 * input_uses_set_timeout_120_1005a4  0x8c1005a4
 * area name: sits between input functions (same compilation unit); behaviour name: its main named callee is
 * set_timeout_120 called by: game_uses_free_if_nonnull_wrap_0e8280, game_uses_ret_const_140_0dbf90,
 * input_stick_with_x_dispatch, input_uses_input_y_pressed_wrap_0dc28c
 */
u32 *input_uses_set_timeout_120_1005a4(int a0) {
    float fVar1;
    double dVar2;
    float fVar3;
    u64 in_xd0;
    char cVar4;
    char cVar5;

    cVar5 = '\0';
    cVar4 = '\0';
    if (*(int *)(a0 + 0x188) == 6) {
        set_timeout_120(a0, 0);
    }
    *(u16 *)(a0 + 0x18c) = 0x78;
    if (cVar5 == '\0') {
        dVar2 = (double)CONCAT44(*(u32 *)(a0 + 0x13c), *(u32 *)(a0 + 300));
    } else {
        in_xd0 = *(u64 *)(a0 + 300);
        dVar2 = *(double *)(a0 + 0x13c);
    }
    if (cVar4 == '\0') {
        fVar1 = SUB84(dVar2, 0) + (float)((u64)dVar2 >> 0x20);
    } else {
        fVar1 = SUB84(dVar2 + dVar2, 0);
    }
    if (cVar5 == '\0') {
        *(float *)(a0 + 300) = fVar1;
        fVar1 = *(float *)(a0 + 300);
        fVar3 = 615.0;
    } else {
        *(u64 *)(a0 + 300) = in_xd0;
        fVar1 = 615.0;
        fVar3 = 2.721048e+09;
    }
    if (cVar4 != '\0' || fVar3 <= fVar1) {
        if (cVar5 == '\0') {
            *(u32 *)(a0 + 300) = 0x4419c000;
        } else {
            *(u64 *)(a0 + 300) = 0x4f222fe64419c000;
        }
    }
    return &g_8c100618;
}

/*
 * input_uses_set_timeout_120_10061c  0x8c10061c
 * area name: sits between input functions (same compilation unit); behaviour name: its main named callee is
 * set_timeout_120 called by: game_uses_free_if_nonnull_wrap_0e8280, game_uses_ret_const_140_0dbf90,
 * input_stick_with_x_dispatch, input_uses_input_y_pressed_wrap_0dc28c
 */
u32 *input_uses_set_timeout_120_10061c(int a0) {
    float fVar1;
    double dVar2;
    float fVar3;
    u64 in_xd0;
    char cVar4;
    char cVar5;

    cVar5 = '\0';
    cVar4 = '\0';
    if (*(int *)(a0 + 0x188) == 6) {
        set_timeout_120(a0, 0);
    }
    *(u16 *)(a0 + 0x18c) = 0x78;
    if (cVar5 == '\0') {
        dVar2 = (double)CONCAT44(*(u32 *)(a0 + 0x13c), *(u32 *)(a0 + 300));
    } else {
        in_xd0 = *(u64 *)(a0 + 300);
        dVar2 = *(double *)(a0 + 0x13c);
    }
    if (cVar4 == '\0') {
        fVar1 = SUB84(dVar2, 0) + (float)((u64)dVar2 >> 0x20);
    } else {
        fVar1 = SUB84(dVar2 + dVar2, 0);
    }
    if (cVar5 == '\0') {
        *(float *)(a0 + 300) = fVar1;
        fVar1 = *(float *)(a0 + 300);
        fVar3 = 25.0;
    } else {
        *(u64 *)(a0 + 300) = in_xd0;
        fVar1 = 25.0;
        fVar3 = NAN;
    }
    if (cVar4 != '\0' || fVar1 <= fVar3) {
        if (cVar5 == '\0') {
            *(u32 *)(a0 + 300) = 0x41c80000;
        } else {
            *(u64 *)(a0 + 300) = 0x7ffc4f2241c80000;
        }
    }
    return &g_8c100690;
}

/*
 * set_field_20_on_field_15c  0x8c100694
 * calls set_field_20 on the member at +0x15c
 * called by: game_uses_set_field_d0_0c4e58
 */
u32 set_field_20_on_field_15c(int a0) {
    u32 uVar1;

    uVar1 = set_field_20(a0 + 0x15c, u____8c1421cc);
    return uVar1;
}

/*
 * clear_field_59c_wrap  0x8c1006bc
 * only calls clear_field_59c
 * called by: event1_begin, game_uses_set_field_d0_0c4e58, game_uses_set_field_d4_0e4298,
 * game_uses_set_timeout_120_mode6_0caac0
 */
u32 clear_field_59c_wrap(u32 a0) {
    u32 uVar1;

    uVar1 = clear_field_59c(a0);
    return uVar1;
}

/*
 * stick_up_with_x  0x8c1006d8
 * 1 when X is held and the stick Y is below -0.3
 * called by: input_stick_with_x_dispatch
 */
u32 stick_up_with_x(int a0) {
    int iVar1;
    u32 uVar2;

    if ((-0.3 <= *(float *)(a0 + 0x140)) || (iVar1 = input_x_held(*(u32 *)(a0 + 0xcc)), iVar1 == 0)) {
        uVar2 = 0;
    } else {
        uVar2 = 1;
    }
    return uVar2;
}

/*
 * stick_down_with_x  0x8c100724
 * 1 when X is held and the stick Y is above 0.3
 * called by: input_stick_with_x_dispatch
 */
u32 stick_down_with_x(int a0) {
    int iVar1;
    u32 uVar2;

    if ((*(float *)(a0 + 0x140) <= 0.3) || (iVar1 = input_x_held(*(u32 *)(a0 + 0xcc)), iVar1 == 0)) {
        uVar2 = 0;
    } else {
        uVar2 = 1;
    }
    return uVar2;
}

/*
 * stick_right_with_x  0x8c100770
 * 1 when X is held and the stick X (+0x13c) is above 0.3
 * called by: input_stick_with_x_dispatch
 */
u32 stick_right_with_x(int a0) {
    int iVar1;
    u32 uVar2;

    if ((*(float *)(a0 + 0x13c) <= 0.3) || (iVar1 = input_x_held(*(u32 *)(a0 + 0xcc)), iVar1 == 0)) {
        uVar2 = 0;
    } else {
        uVar2 = 1;
    }
    return uVar2;
}

/*
 * stick_left_with_x  0x8c1007bc
 * 1 when X is held and the stick X (+0x13c) is below -0.3
 * called by: input_stick_with_x_dispatch
 */
u32 stick_left_with_x(int a0) {
    int iVar1;
    u32 uVar2;

    if ((-0.3 <= *(float *)(a0 + 0x13c)) || (iVar1 = input_x_held(*(u32 *)(a0 + 0xcc)), iVar1 == 0)) {
        uVar2 = 0;
    } else {
        uVar2 = 1;
    }
    return uVar2;
}

/*
 * stick_y_up_half  0x8c100808
 * 1 when the stick Y (+0x140) is below -0.5
 * called by: game_uses_stick_x_right_half_0e1f90
 */
u32 stick_y_up_half(int a0) {
    if (-0.5 <= *(float *)(a0 + 0x140)) {
        return 0;
    }
    return 1;
}

/*
 * stick_y_down_half  0x8c10082c
 * 1 when the stick Y (+0x140) is above 0.5
 * called by: game_uses_stick_x_right_half_0e1f90
 */
u32 stick_y_down_half(int a0) {
    if (*(float *)(a0 + 0x140) <= 0.5) {
        return 0;
    }
    return 1;
}

/*
 * stick_x_right_half  0x8c100850
 * 1 when the stick X (+0x13c) is above 0.5
 * called by: game_uses_stick_x_right_half_0e1f90
 */
u32 stick_x_right_half(int a0) {
    if (*(float *)(a0 + 0x13c) <= 0.5) {
        return 0;
    }
    return 1;
}

/*
 * stick_x_left_half  0x8c100874
 * 1 when the stick X (+0x13c) is below -0.5
 * called by: game_uses_stick_x_right_half_0e1f90
 */
u32 stick_x_left_half(int a0) {
    if (-0.5 <= *(float *)(a0 + 0x13c)) {
        return 0;
    }
    return 1;
}

/*
 * input_up_or_stick_up  0x8c100898
 * 1 when the stick Y (+0x140) is below -0.3 or Up is held
 * called by: game_uses_free_if_nonnull_wrap_0e8280
 */
u32 input_up_or_stick_up(int a0) {
    int iVar1;
    u32 uVar2;

    if ((*(float *)(a0 + 0x140) < -0.3) || (iVar1 = input_up_held(*(u32 *)(a0 + 0xcc)), iVar1 != 0)) {
        uVar2 = 1;
    } else {
        uVar2 = 0;
    }
    return uVar2;
}

/*
 * input_down_or_stick_down  0x8c1008e4
 * 1 when the stick Y (+0x140) is above 0.3 or Down is held
 * called by: game_uses_free_if_nonnull_wrap_0e8280
 */
u32 input_down_or_stick_down(int a0) {
    int iVar1;
    u32 uVar2;

    if ((0.3 < *(float *)(a0 + 0x140)) || (iVar1 = input_down_held(*(u32 *)(a0 + 0xcc)), iVar1 != 0)) {
        uVar2 = 1;
    } else {
        uVar2 = 0;
    }
    return uVar2;
}

/*
 * input_right_or_stick_right  0x8c100930
 * 1 when the stick X (+0x13c) is above 0.3 or Right is held
 * called by: game_uses_free_if_nonnull_wrap_0e8280
 */
u32 input_right_or_stick_right(int a0) {
    int iVar1;
    u32 uVar2;

    if ((0.3 < *(float *)(a0 + 0x13c)) || (iVar1 = input_right_held(*(u32 *)(a0 + 0xcc)), iVar1 != 0)) {
        uVar2 = 1;
    } else {
        uVar2 = 0;
    }
    return uVar2;
}

/*
 * input_left_or_stick_left  0x8c10097c
 * 1 when the stick X (+0x13c) is below -0.3 or Left is held
 * called by: game_uses_free_if_nonnull_wrap_0e8280
 */
u32 input_left_or_stick_left(int a0) {
    int iVar1;
    u32 uVar2;

    if ((*(float *)(a0 + 0x13c) < -0.3) || (iVar1 = input_left_held(*(u32 *)(a0 + 0xcc)), iVar1 != 0)) {
        uVar2 = 1;
    } else {
        uVar2 = 0;
    }
    return uVar2;
}

/*
 * field_150_below_neg03  0x8c1009c8
 * 1 when the float at +0x150 is at most -0.3
 * called by: static_init_437330
 */
u32 field_150_below_neg03(int a0) {
    if (*(float *)(a0 + 0x150) <= -0.3) {
        return 1;
    }
    return 0;
}

/*
 * field_150_above_03  0x8c1009ec
 * 1 when the float at +0x150 is at least 0.3
 * called by: static_init_437330
 */
u32 field_150_above_03(int a0) {
    if (0.3 <= *(float *)(a0 + 0x150)) {
        return 1;
    }
    return 0;
}

/*
 * field_14c_above_03  0x8c100a10
 * 1 when the float at +0x14c is at least 0.3
 * called by: static_init_437330
 */
u32 field_14c_above_03(int a0) {
    if (0.3 <= *(float *)(a0 + 0x14c)) {
        return 1;
    }
    return 0;
}

/*
 * field_14c_below_neg03  0x8c100a34
 * 1 when the float at +0x14c is at most -0.3
 * called by: static_init_437330
 */
u32 field_14c_below_neg03(int a0) {
    if (*(float *)(a0 + 0x14c) <= -0.3) {
        return 1;
    }
    return 0;
}

/*
 * stick_up_with_b_x_up  0x8c100a58
 * 1 when B is held, X is up and the stick Y is below -0.4
 * called by: game_uses_ret_const_140_0dbf90
 */
u32 stick_up_with_b_x_up(int a0) {
    int iVar1;
    u32 uVar2;

    if (((-0.4 <= *(float *)(a0 + 0x140)) || (iVar1 = input_b_held(*(u32 *)(a0 + 0xcc)), iVar1 == 0)) ||
        (iVar1 = input_x_off(*(u32 *)(a0 + 0xcc)), iVar1 == 0)) {
        uVar2 = 0;
    } else {
        uVar2 = 1;
    }
    return uVar2;
}

/*
 * stick_down_with_b_x_up  0x8c100abc
 * 1 when B is held, X is up and the stick Y is above 0.4
 * called by: game_uses_ret_const_140_0dbf90
 */
u32 stick_down_with_b_x_up(int a0) {
    int iVar1;
    u32 uVar2;

    if (((*(float *)(a0 + 0x140) <= 0.4) || (iVar1 = input_b_held(*(u32 *)(a0 + 0xcc)), iVar1 == 0)) ||
        (iVar1 = input_x_off(*(u32 *)(a0 + 0xcc)), iVar1 == 0)) {
        uVar2 = 0;
    } else {
        uVar2 = 1;
    }
    return uVar2;
}

/*
 * input_input_helper_100b20  0x8c100b20
 * area name: sits between input functions (same compilation unit); behaviour name: mostly calls input functions
 * called by: game_uses_ret_const_140_0dbf90, input_uses_input_y_pressed_wrap_0dc28c, input_uses_ret_const_140_0e28a0
 */
u32 input_input_helper_100b20(int a0) {
    int iVar1;
    u32 uVar2;

    if (((-0.3 <= *(float *)(a0 + 0x140)) || (iVar1 = input_b_off(*(u32 *)(a0 + 0xcc)), iVar1 == 0)) ||
        (iVar1 = input_x_off(*(u32 *)(a0 + 0xcc)), iVar1 == 0)) {
        uVar2 = 0;
    } else {
        uVar2 = 1;
    }
    return uVar2;
}

/*
 * input_input_helper_100b84  0x8c100b84
 * area name: sits between input functions (same compilation unit); behaviour name: mostly calls input functions
 * called by: game_uses_ret_const_140_0dbf90, input_uses_input_y_pressed_wrap_0dc28c, input_uses_ret_const_140_0e28a0
 */
u32 input_input_helper_100b84(int a0) {
    int iVar1;
    u32 uVar2;

    if (((*(float *)(a0 + 0x140) <= 0.3) || (iVar1 = input_b_off(*(u32 *)(a0 + 0xcc)), iVar1 == 0)) ||
        (iVar1 = input_x_off(*(u32 *)(a0 + 0xcc)), iVar1 == 0)) {
        uVar2 = 0;
    } else {
        uVar2 = 1;
    }
    return uVar2;
}

/*
 * input_input_helper_100be8  0x8c100be8
 * area name: sits between input functions (same compilation unit); behaviour name: mostly calls input functions
 * called by: game_uses_ret_const_140_0dbf90, input_uses_input_y_pressed_wrap_0dc28c, input_uses_ret_const_140_0e28a0
 */
u32 input_input_helper_100be8(int a0) {
    int iVar1;
    u32 uVar2;

    if ((*(float *)(a0 + 0x13c) <= 0.3) || (iVar1 = input_x_off(*(u32 *)(a0 + 0xcc)), iVar1 == 0)) {
        uVar2 = 0;
    } else {
        uVar2 = 1;
    }
    return uVar2;
}

/*
 * input_input_helper_100c34  0x8c100c34
 * area name: sits between input functions (same compilation unit); behaviour name: mostly calls input functions
 * called by: game_uses_ret_const_140_0dbf90, input_uses_input_y_pressed_wrap_0dc28c, input_uses_ret_const_140_0e28a0
 */
u32 input_input_helper_100c34(int a0) {
    int iVar1;
    u32 uVar2;

    if ((-0.3 <= *(float *)(a0 + 0x13c)) || (iVar1 = input_x_off(*(u32 *)(a0 + 0xcc)), iVar1 == 0)) {
        uVar2 = 0;
    } else {
        uVar2 = 1;
    }
    return uVar2;
}

/*
 * input_asr_flag_b_set  0x8c100c80
 * 1 when input_asr_take_flag_b returns 1
 * called by: input_uses_get_field_300_0dc61c
 */
u32 input_asr_flag_b_set(int a0) {
    int iVar1;

    iVar1 = input_asr_take_flag_b(*(u32 *)(0xcc + a0));
    return (u32)(iVar1 == 1);
}

/*
 * input_input_helper_100cb4  0x8c100cb4
 * area name: sits between input functions (same compilation unit); behaviour name: mostly calls input functions
 * called by: game_uses_get_field_24_0e727c, input_uses_get_field_24_0e25c0, input_uses_get_field_300_0dc61c
 */
u32 input_input_helper_100cb4(int a0) {
    int iVar1;

    iVar1 = input_asr_take_flag_a(*(u32 *)(0xcc + a0));
    return (u32)(iVar1 == 1);
}

/*
 * input_calls_scan_loop_100ce8  0x8c100ce8
 * area name: sits between input functions (same compilation unit); behaviour name: its callees mostly do: scan_loop
 * called by: env_handle_input, game_uses_get_field_24_0e727c, game_uses_stick_x_right_half_0e1f90,
 * input_uses_get_field_24_0e25c0
 */
u32 input_calls_scan_loop_100ce8(int a0, u32 a1, u32 a2, u32 a3) {
    int iVar1;

    iVar1 = (*(code *)(&input_r_held))(*(u32 *)(0xcc + a0), a1, a2, a3);
    if (iVar1 == 0) {
        iVar1 = input_scan_loop_101358(a0);
        if (iVar1 == 1) {
            *(u32 *)(0x594 + a0) = 0xf;
        }
        *(int *)(0x594 + a0) = *(int *)(0x594 + a0) + -1;
        if (0 < *(int *)(0x594 + a0)) {
            return 1;
        }
    }
    *(u32 *)(0x594 + a0) = 0;
    return 0;
}

/*
 * input_calls_test_100d5c  0x8c100d5c
 * area name: sits between input functions (same compilation unit); behaviour name: its callees mostly do: calls_test
 * called by: input_uses_get_field_24_0dc7e8
 */
u32 input_calls_test_100d5c(int a0) {
    int iVar1;

    if (*(int *)(0x590 + a0) == 0) {
        iVar1 = game_calls_test_101510(a0, 5);
        if (((iVar1 == 1) || (iVar1 = game_calls_test_101510(a0, 10), iVar1 == 1)) ||
            (iVar1 = game_calls_test_101510(a0, 0xf), iVar1 == 1)) {
            *(u32 *)(0x590 + a0) = 1;
        }
    } else {
        if ((((*(char *)(0x190 + a0 + (u32) * (u8 *)(0x598 + a0) * 4) != '\0') ||
              (*(char *)(0x190 + a0 + (*(u8 *)(0x598 + a0) - 1) * 4) != '\0')) ||
             (*(char *)(0x191 + a0 + (u32) * (u8 *)(0x598 + a0) * 4) != '\0')) ||
            (*(char *)(0x191 + a0 + (*(u8 *)(0x598 + a0) - 1) * 4) != '\0')) {
            return 1;
        }
        *(u32 *)(0x590 + a0) = 0;
    }
    return 0;
}

/*
 * input_input_helper_100e4c  0x8c100e4c
 * area name: sits between input functions (same compilation unit); behaviour name: mostly calls input functions
 * called by: env_handle_input, game_uses_get_field_24_0e727c, game_uses_stick_x_right_half_0e1f90,
 * input_uses_get_field_24_0e25c0
 */
u32 input_input_helper_100e4c(int a0, u64 *a1) {
    int iVar1;
    u32 uVar2;
    u8 bVar3;
    u32 in_fr1;
    char cVar4;

    cVar4 = '\0';
    *(u32 *)a1 = 0;
    iVar1 = input_x_held(0x8c3dd7dc);
    if (iVar1 == 1) {
        *(u32 *)(a0 + 0x59c) = 0;
        uVar2 = 0;
    } else {
        if ((9 < *(int *)(a0 + 0x59c)) &&
            (*(int *)(a0 + 0x59c) = *(int *)(a0 + 0x59c) + 1, 0x27 < *(int *)(a0 + 0x59c))) {
            *(u32 *)(a0 + 0x59c) = 0;
        }
        iVar1 = input_r_released(0x8c3dd7dc);
        if ((iVar1 == 1) || (iVar1 = input_x_held(0x8c3dd7dc), iVar1 == 1)) {
            if (*(int *)(a0 + 0x59c) < 2) {
                *(u32 *)(a0 + 0x59c) = 0;
                uVar2 = 0;
            } else {
                if (*(int *)(a0 + 0x59c) == 2) {
                    if (cVar4 == '\0') {
                        *(u32 *)a1 = 0x3f000000;
                    } else {
                        *a1 = 0x3f3333333f000000;
                    }
                } else if (*(int *)(a0 + 0x59c) == 3) {
                    if (cVar4 == '\0') {
                        *(u32 *)a1 = 0x3f333333;
                    } else {
                        *a1 = 0x8c0c51a03f333333;
                    }
                } else if (cVar4 == '\0') {
                    *(u32 *)a1 = 0x3f800000;
                } else {
                    *a1 = CONCAT44(0x3f800000, in_fr1);
                }
                set_timeout_120(a0, 5);
                *(u32 *)(a0 + 0x59c) = 10;
                uVar2 = 2;
            }
        } else {
            iVar1 = input_r_pressed(0x8c3dd7dc);
            if ((iVar1 == 1) && (iVar1 = input_x_held(0x8c3dd7dc), iVar1 != 1)) {
                *(u32 *)(a0 + 0x59c) = 1;
                uVar2 = 0;
            } else if (*(int *)(a0 + 0x59c) < 1) {
                uVar2 = 0;
            } else {
                for (bVar3 = 0; bVar3 < 0x78; bVar3 = bVar3 + 1) {
                    if (*(char *)(a0 + (u32)(u8)(*(char *)(a0 + 0x598) - bVar3) * 4 + 0x193) == '\0') {
                        if (bVar3 < 0x3c) {
                            return 0;
                        }
                        if (0x3b < bVar3) {
                            set_timeout_120(a0, 4);
                            *(u32 *)(a0 + 0x59c) = 2;
                        }
                        if (0x59 < bVar3) {
                            *(u32 *)(a0 + 0x59c) = 3;
                        }
                        return 1;
                    }
                }
                *(u32 *)(a0 + 0x59c) = 4;
                uVar2 = 1;
            }
        }
    }
    return uVar2;
}

/*
 * input_uses_input_r_pressed_101004  0x8c101004
 * area name: sits between input functions (same compilation unit); behaviour name: its main named callee is
 * input_r_pressed called by: static_init_4372a8, static_init_4372f4
 */
int input_uses_input_r_pressed_101004(int a0, u32 a1, u32 a2, u32 a3) {
    bool bVar1;
    int iVar2;

    bVar1 = false;
    while (!bVar1) {
        if (*(int *)(0x88 + a0) != -1) {
            a1 = *(u32 *)(0x88 + a0);
            iVar2 = pack_state_switch_021f18(0x8c2b59d0, a1, a2);
            if ((iVar2 == 1) || (iVar2 == 2)) {
                *(u32 *)(0x88 + a0) = 0xffffffff;
            }
        }
        bVar1 = true;
    }
    iVar2 = input_r_pressed(*(u32 *)(0xcc + a0));
    if (iVar2 == 1) {
        iVar2 = input_x_off(*(u32 *)(0xcc + a0));
        if (iVar2 == 1) {
            input_uses_libgcc_divide_helper_1017f4(a0, a1, a2, a3);
            *(u8 *)(0xb8 + a0) = 1;
            *(int *)(0xc4 + a0) = *(int *)(0xc4 + a0) + 1;
            goto LAB_8c1010c2;
        }
    }
    *(u8 *)(0xb8 + a0) = 0;
LAB_8c1010c2:
    game_uses_sh4_tmu_1019f8(a0, a1, a2, a3);
    if (*(int *)(0xb0 + a0) == 1) {
        iVar2 = game_calls_update_fields_101a4c(a0, a1, a2, a3);
    } else {
        iVar2 = (int)*(char *)(a0 + 0x28);
        if (iVar2 == 4) {
            game_calls_update_fields_101a4c(a0, a1, a2, a3);
            iVar2 = clear_5_pairs(a0);
        }
    }
    return iVar2;
}

/*
 * get_field_b0_10113c  0x8c10113c
 * called by: input_list_0dc8fc
 */
u32 get_field_b0_10113c(int a0) {
    return *(u32 *)(0xb0 + a0);
}

/*
 * set_field_b4  0x8c101148
 * called by: FrogMan_gratification_events
 */
int set_field_b4(int a0, u32 a1) {
    int iVar1;

    iVar1 = 0xb4;
    *(u32 *)(0xb4 + a0) = a1;
    return iVar1;
}

/*
 * Class_12b580_test_101154  0x8c101154
 * area name: only called from Class_12b580 methods; behaviour name: returns the result of a comparison
 * called by: CWaterTank_uses_Vec3_distance_sq_to_xyz_0e1398, Class_12b580_m1_0e634c, static_init_4372f4
 */
u32 Class_12b580_test_101154(int a0) {
    if ((*(int *)(0xb0 + a0) == 1) && (*(int *)(0xb4 + a0) == 1)) {
        return 1;
    }
    return 0;
}

/*
 * get_field_b8_101178  0x8c101178
 * called by: CWaterTank_uses_Vec3_distance_sq_to_xyz_0e1398, FrogMan_react_touch
 */
u32 get_field_b8_101178(int a0) {
    return (u32) * (u8 *)(0xb8 + a0);
}

/*
 * input_sound_101188  0x8c101188
 * area name: sits between input functions (same compilation unit); behaviour name: mostly calls sound functions
 * called by: static_init_4372f4
 */
int input_sound_101188(int a0, u32 unused_a1, u32 unused_a2, u32 a3) {
    int iVar1;

    iVar1 = *(int *)(0xb0 + a0);
    if (iVar1 == 1) {
        iVar1 = game_sound_101e1c(a0, unused_a1, unused_a2, a3);
    }
    return iVar1;
}

/*
 * get_field_18e_div30  0x8c1011b0
 * the u16 at +0x18e divided by 30 (frames to seconds)
 * called by: CAnimal_m2_02573c, Class_12acc8_m1_09f470, game_vec_02fcc4
 */
u32 get_field_18e_div30(int a0, u32 a1, u32 a2, u32 a3) {
    u32 uVar1;

    uVar1 = (*(code *)(&libgcc_divide_helper_0101e4))((u32) * (u16 *)(0x18e + a0), 0x1e, a2, a3);
    return uVar1;
}

/*
 * CGame_uses_cursor_reset_center_1011e0  0x8c1011e0
 * area name: only called from CGame methods; behaviour name: its main named callee is cursor_reset_center
 * called by: CGame_Initial
 */
u32 CGame_uses_cursor_reset_center_1011e0(int a0, u32 unused_a1, u32 a2, u32 a3) {
    cursor_reset_center(a0, unused_a1, a2, a3);
    ret_const_1_0ffb90(a0 + 0xd8, unused_a1, a2, a3);
    return 1;
}

/*
 * Class_12acc8_calc_101210  0x8c101210
 * area name: only called from Class_12acc8 methods; behaviour name: integer arithmetic on its arguments
 * called by: Class_12acc8_m1_09f470, game_uses_free_if_nonnull_wrap_0e8280, input_uses_get_field_24_0dc7e8,
 * static_init_437218, static_init_43724c, static_init_4372a8, static_init_4372f4
 */
u32 *Class_12acc8_calc_101210(int a0, u32 *a1, u32 *a2) {
    if (*(int *)(a0 + 0x188) == 6) {
        *a1 = g_8c1266e0;
        *a2 = g_8c1266e0;
        return &g_8c1266e0;
    }
    *a1 = *(u32 *)(a0 + 300);
    *a2 = *(u32 *)(a0 + 0x130);
    return (u32 *)0x130;
}

/*
 * cursor_reset_center  0x8c101250
 * puts the cursor at (320, 240), clears its motion and state and sets the 120-frame timeout value
 * called by: CGame_uses_cursor_reset_center_1011e0, game_vec_0ffb98
 */
u32 cursor_reset_center(int a0, u32 unused_a1, u32 a2, u32 a3) {
    u32 uVar1;

    *(u32 *)(a0 + 0xd0) = 0;
    *(u32 *)(a0 + 300) = 0x43a00000;
    *(u32 *)(a0 + 0x130) = 0x43700000;
    *(u32 *)(a0 + 0x140) = 0;
    *(u32 *)(a0 + 0x13c) = 0;
    *(u32 *)(a0 + 0x150) = 0;
    *(u32 *)(a0 + 0x14c) = 0;
    *(u32 *)(a0 + 0x188) = 0;
    uVar1 = *(u32 *)(a0 + 0x188);
    set_field_24_0fffec(a0 + 0x15c, uVar1);
    *(u16 *)(a0 + 0x18c) = 0x78;
    *(u32 *)(a0 + 0xd4) = 0;
    *(u32 *)(a0 + 0x128) = 0xffffffff;
    *(u16 *)(a0 + 0x18e) = 0;
    game_copy_10169c(a0, uVar1, a2, a3);
    input_copy_101784(a0, uVar1, a2, a3);
    uVar1 = clear_field_59c(a0);
    return uVar1;
}

/*
 * input_scan_loop_101358  0x8c101358
 * area name: sits between input functions (same compilation unit); behaviour name: a loop that only reads
 * called by: input_calls_scan_loop_100ce8
 */
u32 input_scan_loop_101358(int a0) {
    bool bVar1;
    int iVar2;
    int iVar3;
    char cVar4;
    u8 bVar5;

    iVar3 = 0;
    iVar2 = 0;
    cVar4 = *(char *)(0x598 + a0) + -0x50;
    do {
        if (cVar4 == *(char *)(0x598 + a0)) {
            return 0;
        }
        bVar1 = false;
        for (bVar5 = 0; bVar5 < 10; bVar5 = bVar5 + 1) {
            if (*(char *)(0x192 + a0 + (u32)(u8)(cVar4 + bVar5) * 4) == '\x01') {
                bVar1 = true;
                break;
            }
        }
        if (bVar1) {
            iVar3 = iVar3 + 1;
            if (iVar2 < iVar3) {
                iVar2 = iVar3;
            }
        } else {
            iVar3 = 0;
        }
        if (4 < iVar2) {
            return 1;
        }
        cVar4 = cVar4 + '\n';
    } while (true);
}

/*
 * input_test_1013f4  0x8c1013f4
 * area name: sits between input functions (same compilation unit); behaviour name: returns the result of a comparison
 * called by: game_calls_test_101510
 */
int input_test_1013f4(u32 unused_a0, int *a1, int a2) {
    int iVar1;

    iVar1 = *a1;
    if (iVar1 == 0) {
        if (a2 == 0) {
            *a1 = 1;
            return 1;
        }
    } else {
        if (iVar1 == 1) {
            if (a2 == 0) {
                *a1 = 1;
                return 1;
            }
            if (a2 == 1) {
                *a1 = 2;
                return 2;
            }
            *a1 = 0;
            return 0;
        }
        if (iVar1 == 2) {
            if (a2 == 1) {
                *a1 = 2;
                return 2;
            }
            if (a2 == 2) {
                *a1 = 3;
                return 3;
            }
            *a1 = 0;
            return 0;
        }
        if (iVar1 != 3) {
            return iVar1;
        }
        if (a2 == 2) {
            *a1 = 3;
            return 3;
        }
        if (a2 == 3) {
            *a1 = 4;
            return 4;
        }
        *a1 = 0;
    }
    return 0;
}

/*
 * game_test_101480  0x8c101480
 * area name: game code; nothing names its area yet; behaviour name: returns the result of a comparison
 * called by: game_calls_test_101510
 */
int game_test_101480(u32 unused_a0, int *a1, int a2) {
    int iVar1;

    iVar1 = *a1;
    if (iVar1 == 0) {
        if (a2 == 3) {
            *a1 = 1;
            return 1;
        }
    } else {
        if (iVar1 == 1) {
            if (a2 == 3) {
                *a1 = 1;
                return 1;
            }
            if (a2 == 2) {
                *a1 = 2;
                return 2;
            }
            *a1 = 0;
            return 0;
        }
        if (iVar1 == 2) {
            if (a2 == 2) {
                *a1 = 2;
                return 2;
            }
            if (a2 == 1) {
                *a1 = 3;
                return 3;
            }
            *a1 = 0;
            return 0;
        }
        if (iVar1 != 3) {
            return iVar1;
        }
        if (a2 == 1) {
            *a1 = 3;
            return 3;
        }
        if (a2 == 0) {
            *a1 = 4;
            return 4;
        }
        a2 = 0;
        *a1 = 0;
    }
    return a2;
}

/*
 * game_calls_test_101510  0x8c101510
 * area name: game code; nothing names its area yet; behaviour name: its callees mostly do: test
 * called by: input_calls_test_100d5c
 */
u32 game_calls_test_101510(int a0, u32 a1) {
    char cVar1;
    char cVar2;
    char cVar3;
    char cVar4;
    u8 bVar5;
    u32 ar6_00;
    int iStack_30;
    int iStack_2c;
    int iStack_28;
    int aiStack_24[2];

    aiStack_24[0] = 0;
    iStack_28 = 0;
    iStack_2c = 0;
    iStack_30 = 0;
    bVar5 = *(char *)(0x598 + a0) + (char)a1 * -8;
    do {
        if (bVar5 == *(u8 *)(0x598 + a0)) {
            return 0;
        }
        cVar1 = *(char *)(0x190 + a0 + (u32)bVar5 * 4);
        cVar2 = *(char *)(0x191 + a0 + (u32)bVar5 * 4);
        cVar3 = *(char *)(0x190 + a0 + (u32)(u8)(bVar5 + (char)a1) * 4);
        cVar4 = *(char *)(0x191 + a0 + (u32)(u8)(bVar5 + (char)a1) * 4);
        if ((cVar1 < cVar3) && (cVar4 < cVar2)) {
            ar6_00 = 0;
        LAB_8c1015f0:
            input_test_1013f4(a0, aiStack_24, ar6_00);
            if (aiStack_24[0] == 4) {
                iStack_28 = iStack_28 + 1;
                aiStack_24[0] = 0;
                if (1 < iStack_28) {
                    return 1;
                }
            }
            game_test_101480(a0, &iStack_2c, ar6_00);
            if (iStack_2c == 4) {
                iStack_30 = iStack_30 + 1;
                iStack_2c = 0;
                if (1 < iStack_30) {
                    return 1;
                }
            }
        } else {
            if ((cVar1 < cVar3) && (cVar2 < cVar4)) {
                ar6_00 = 1;
                goto LAB_8c1015f0;
            }
            if ((cVar3 < cVar1) && (cVar2 < cVar4)) {
                ar6_00 = 2;
                goto LAB_8c1015f0;
            }
            if ((cVar3 < cVar1) && (cVar4 < cVar2)) {
                ar6_00 = 3;
                goto LAB_8c1015f0;
            }
        }
        bVar5 = bVar5 + (char)a1;
    } while (true);
}

/*
 * clear_field_59c  0x8c10168c
 * called by: clear_field_59c_wrap, cursor_reset_center, set_timeout_120_mode6
 */
int clear_field_59c(int a0) {
    int iVar1;

    iVar1 = 0x59c;
    *(u32 *)(0x59c + a0) = 0;
    return iVar1;
}

/*
 * game_copy_10169c  0x8c10169c
 * area name: game code; nothing names its area yet; behaviour name: mostly calls copy functions
 * called by: cursor_reset_center
 */
int game_copy_10169c(int a0, u32 unused_a1, u32 unused_a2, u32 a3) {
    int iVar1;

    memset(a0 + 0x190, 0, 0x400);
    *(u8 *)(0x598 + a0) = 0;
    *(u32 *)(0x590 + a0) = 0;
    *(u32 *)(0x594 + a0) = 0;
    iVar1 = 0x59c;
    *(u32 *)(0x59c + a0) = 0;
    return iVar1;
}

/*
 * input_history_push  0x8c1016f0
 * appends this frame's two pad words, X-pressed and R-held as four bytes to the ring at +0x190, index byte +0x598
 * called by: game_input_0ffdb0
 */
u32 input_history_push(int a0) {
    u32 uVar1;
    u8 *puVar2;

    *(char *)(0x598 + a0) = *(char *)(0x598 + a0) + '\x01';
    puVar2 = (u8 *)(a0 + (u32) * (u8 *)(0x598 + a0) * 4 + 0x190);
    uVar1 = input_get_word_a538(0x8c3dd7dc);
    *puVar2 = (char)uVar1;
    uVar1 = input_get_word_a53c(0x8c3dd7dc);
    puVar2[1] = (char)uVar1;
    uVar1 = input_x_pressed(0x8c3dd7dc);
    puVar2[2] = (char)uVar1;
    uVar1 = input_r_held(0x8c3dd7dc);
    puVar2[3] = (char)uVar1;
    return uVar1;
}

/*
 * input_copy_101784  0x8c101784
 * area name: sits between input functions (same compilation unit); behaviour name: mostly calls copy functions
 * called by: cursor_reset_center
 */
u32 input_copy_101784(int a0, u32 unused_a1, u32 a2, u32 a3) {
    bool bVar1;
    u32 uVar2;
    u8 bVar3;

    *(u32 *)(a0 + 0x2c) = 0;
    for (bVar3 = 0; bVar3 < 4; bVar3 = bVar3 + 1) {
        *(u32 *)(a0 + (u32)bVar3 * 0x10 + 0x38) = 0xffffffff;
    }
    bVar1 = false;
    while (!bVar1) {
        *(u32 *)(0x88 + a0) = 0xffffffff;
        bVar1 = true;
    }
    uVar2 = game_copy_101c64(a0, unused_a1, a2, a3);
    return uVar2;
}

/*
 * input_uses_libgcc_divide_helper_1017f4  0x8c1017f4
 * area name: sits between input functions (same compilation unit); behaviour name: its main named callee is
 * libgcc_divide_helper_01031c called by: input_uses_input_r_pressed_101004
 */
u32 input_uses_libgcc_divide_helper_1017f4(int a0, u32 unused_a1, u32 a2, u32 a3) {
    u32 uVar1;
    u32 uVar2;
    int ar4_00;
    u32 ar5_00;

    *(char *)(a0 + 0x28) = *(char *)(a0 + 0x28) + '\x01';
    ar5_00 = 5;
    ar4_00 = (int)*(char *)(a0 + 0x28);
    uVar1 = libgcc_divide_helper_01031c(ar4_00, 5, a2);
    *(char *)(a0 + 0x28) = (char)uVar1;
    uVar1 = sh4_tmu_1f88e6(ar4_00);
    *(u32 *)(*(char *)(a0 + 0x28) * 8 + a0) = uVar1;
    *(u32 *)(a0 + 0x2c) = *(u32 *)(*(char *)(a0 + 0x28) * 8 + a0);
    if (*(char *)(a0 + 0x28) == '\0') {
        *(u32 *)(a0 + *(char *)(a0 + 0x28) * 8 + 4) = 0;
    } else {
        a2 = *(u32 *)(*(char *)(a0 + 0x28) * 8 + a0);
        ar5_00 = *(u32 *)((*(char *)(a0 + 0x28) + -1) * 8 + a0);
        uVar1 = game_uses_int_diff_101de0(a0, ar5_00, a2);
        *(u32 *)(a0 + *(char *)(a0 + 0x28) * 8 + 4) = uVar1;
    }
    uVar2 = 0;
    if (*(int *)(0xb0 + a0) != 0) {
        if (*(u32 *)(0xbc + a0) < *(u32 *)(a0 + *(char *)(a0 + 0x28) * 8 + 4)) {
            if (0x124f80 < (u32)(*(int *)(a0 + *(char *)(a0 + 0x28) * 8 + 4) - *(int *)(0xbc + a0))) {
                uVar2 = game_copy_101c64(a0, ar5_00, a2, a3);
            } else {
                uVar2 = 0xc3500;
                if (0xc3500 < (u32)(*(int *)(a0 + *(char *)(a0 + 0x28) * 8 + 4) - *(int *)(0xbc + a0))) {
                    *(u8 *)(0xb8 + a0) = 2;
                    uVar2 = 0xc4;
                    *(u32 *)(0xc4 + a0) = 0;
                }
            }
        } else {
            uVar2 = *(u32 *)(0xbc + a0);
            if (*(u32 *)(a0 + *(char *)(a0 + 0x28) * 8 + 4) < *(u32 *)(0xbc + a0)) {
                if (0x124f80 < (u32)(*(int *)(0xbc + a0) - *(int *)(a0 + *(char *)(a0 + 0x28) * 8 + 4))) {
                    uVar2 = game_copy_101c64(a0, ar5_00, a2, a3);
                } else {
                    uVar2 = 0xc3500;
                    if (0xc3500 < (u32)(*(int *)(0xbc + a0) - *(int *)(a0 + *(char *)(a0 + 0x28) * 8 + 4))) {
                        *(u8 *)(0xb8 + a0) = 2;
                        uVar2 = 0xc4;
                        *(u32 *)(0xc4 + a0) = 0;
                    }
                }
            }
        }
    }
    return uVar2;
}

/*
 * game_uses_sh4_tmu_1019f8  0x8c1019f8
 * area name: game code; nothing names its area yet; behaviour name: its main named callee is sh4_tmu_1f88e6
 * called by: input_uses_input_r_pressed_101004
 */
u32 game_uses_sh4_tmu_1019f8(int a0, u32 unused_a1, u32 unused_a2, u32 a3) {
    u32 ar6_00;
    u32 uVar1;
    u32 uVar2;
    u32 ar5_00;

    ar6_00 = sh4_tmu_1f88e6(a0);
    ar5_00 = *(u32 *)(a0 + 0x2c);
    uVar1 = game_uses_int_diff_101de0(a0, ar5_00, ar6_00);
    uVar2 = 0x16e360;
    if (0x16e360 < uVar1) {
        uVar2 = game_copy_101c64(a0, ar5_00, ar6_00, a3);
    }
    return uVar2;
}

/*
 * game_calls_update_fields_101a4c  0x8c101a4c
 * area name: game code; nothing names its area yet; behaviour name: its callees mostly do: update_fields
 * called by: input_uses_input_r_pressed_101004
 */
u32 game_calls_update_fields_101a4c(int a0, u32 unused_a1, u32 a2, u32 a3) {
    u32 uVar1;
    u8 bVar2;
    u32 uVar3;

    uVar3 = 0;
    if (*(int *)(0xb0 + a0) == 0) {
        for (bVar2 = 0; bVar2 < 5; bVar2 = bVar2 + 1) {
            uVar3 = *(int *)(a0 + (u32)bVar2 * 8 + 4) + uVar3;
        }
        uVar3 = uVar3 >> 2;
        uVar1 = 0x16e360;
        if ((uVar3 < 0x16e360) && (uVar1 = 0xc350, 0xc350 < uVar3)) {
            uVar1 = game_sound_101b5c(a0, uVar3);
        }
    } else {
        if (*(int *)(a0 + *(char *)(a0 + 0x28) * 8 + 4) == 0) {
            uVar3 = *(u32 *)(0xbc + a0);
        } else {
            uVar3 = *(u32 *)(a0 + *(char *)(a0 + 0x28) * 8 + 4);
        }
        if ((uVar3 < 0x16e360) && (0xc350 < uVar3)) {
            uVar1 = 0x186a0;
            if (*(u32 *)(0xbc + a0) < uVar3) {
                if (0x186a0 < uVar3 - *(int *)(0xbc + a0)) {
                    uVar1 = game_update_fields_101c10(a0, uVar3);
                }
            } else if (0x186a0 < *(int *)(0xbc + a0) - uVar3) {
                uVar1 = game_update_fields_101c10(a0, uVar3);
            }
        } else {
            uVar1 = game_copy_101c64(a0, unused_a1, a2, a3);
        }
    }
    return uVar1;
}

/*
 * game_sound_101b5c  0x8c101b5c
 * area name: game code; nothing names its area yet; behaviour name: mostly calls sound functions
 * called by: game_calls_update_fields_101a4c
 */
int game_sound_101b5c(int a0, u32 a1) {
    u32 uVar1;
    int iVar2;
    u32 uVar3;
    u8 bVar4;

    uVar3 = 0x61a1c;
    if (((0x61a1c < a1) && (uVar3 = 0x82334, 0x82334 < a1)) && (uVar3 = 0xc349c, a1 <= 0xc349c)) {
        uVar3 = 0xa2be8;
    }
    *(u32 *)(0xbc + a0) = uVar3;
    g_8c4413c0 = *(u32 *)(0xbc + a0) >> 3;
    for (bVar4 = 0; bVar4 < 4; bVar4 = bVar4 + 1) {
        uVar1 = se_open_bank3(0x8c2b59d0);
        *(u32 *)(a0 + (u32)bVar4 * 0x10 + 0x38) = uVar1;
    }
    *(u32 *)(0xb0 + a0) = 1;
    iVar2 = 0xc4;
    *(u32 *)(0xc4 + a0) = 1;
    return iVar2;
}

/*
 * game_update_fields_101c10  0x8c101c10
 * area name: game code; nothing names its area yet; behaviour name: conditionally writes members
 * called by: game_calls_update_fields_101a4c
 */
u32 game_update_fields_101c10(int a0, u32 a1) {
    u32 uVar1;

    uVar1 = 0x61a1c;
    if (((0x61a1c < a1) && (uVar1 = 0x82334, 0x82334 < a1)) && (uVar1 = 0xc349c, a1 <= 0xc349c)) {
        uVar1 = 0xa2be8;
    }
    *(u32 *)(0xbc + a0) = uVar1;
    uVar1 = *(u32 *)(0xbc + a0) >> 3;
    g_8c4413c0 = uVar1;
    return uVar1;
}

/*
 * game_copy_101c64  0x8c101c64
 * area name: game code; nothing names its area yet; behaviour name: mostly calls copy functions
 * called by: game_calls_update_fields_101a4c, game_uses_sh4_tmu_1019f8, input_copy_101784,
 * input_uses_libgcc_divide_helper_1017f4
 */
int game_copy_101c64(int a0, u32 unused_a1, u32 a2, u32 a3) {
    bool bVar1;
    int iVar2;
    u8 bVar3;

    clear_5_pairs(a0);
    *(u32 *)(0xb4 + a0) = 0;
    *(u8 *)(0xb8 + a0) = 0;
    *(u32 *)(0xbc + a0) = 0xa2be8;
    *(u32 *)(0xc4 + a0) = 0;
    for (bVar3 = 0; bVar3 < 4; bVar3 = bVar3 + 1) {
        *(u32 *)(a0 + (u32)bVar3 * 0x10 + 0x30) = 0;
        *(u32 *)(a0 + (u32)bVar3 * 0x10 + 0x34) = 0;
        if (*(int *)(a0 + (u32)bVar3 * 0x10 + 0x38) != -1) {
            (*(code *)(&game_sound_021ab4))(0x8c2b59d0, *(u32 *)(a0 + (u32)bVar3 * 0x10 + 0x38), a2, a3);
            *(u32 *)(a0 + (u32)bVar3 * 0x10 + 0x38) = 0xffffffff;
        }
        *(u32 *)(a0 + (u32)bVar3 * 0x10 + 0x3c) = 0;
    }
    bVar1 = false;
    while (!bVar1) {
        *(u32 *)(0x80 + a0) = 0;
        *(u32 *)(0x84 + a0) = 0;
        *(u32 *)(0x8c + a0) = 0;
        bVar1 = true;
    }
    iVar2 = 0xb0;
    *(u32 *)(0xb0 + a0) = 0;
    return iVar2;
}

/*
 * clear_5_pairs  0x8c101da0
 * zeroes five word pairs at a0 and sets byte +0x28 to 0xff
 * called by: game_copy_101c64, input_uses_input_r_pressed_101004
 */
u32 clear_5_pairs(int a0) {
    char cVar1;

    for (cVar1 = '\0'; cVar1 < '\x05'; cVar1 = cVar1 + '\x01') {
        *(u32 *)(cVar1 * 8 + a0) = 0;
        *(u32 *)(a0 + cVar1 * 8 + 4) = 0;
    }
    *(u8 *)(a0 + 0x28) = 0xff;
    return 0x28;
}

/*
 * game_uses_int_diff_101de0  0x8c101de0
 * area name: game code; nothing names its area yet; behaviour name: its main named callee is int_diff
 * called by: game_sound_101e1c, game_uses_sh4_tmu_1019f8, input_uses_libgcc_divide_helper_1017f4
 */
u32 game_uses_int_diff_101de0(u32 unused_a0, u32 a1, u32 a2) {
    u32 ar4_00;
    u32 uVar1;

    uVar1 = a2;
    ar4_00 = int_diff(a1, a2);
    uVar1 = sh4_uses_libgcc_divide_helper_1f88f6(ar4_00);
    return uVar1;
}

/*
 * game_sound_101e1c  0x8c101e1c
 * area name: game code; nothing names its area yet; behaviour name: mostly calls sound functions
 * called by: input_sound_101188
 * strings: "TGU52"
 */
u32 game_sound_101e1c(int a0, u32 unused_a1, u32 unused_a2, u32 a3) {
    bool bVar1;
    bool bVar2;
    u32 uVar3;
    int iVar4;
    int ar6_00;
    int iVar5;
    u32 uVar6;
    int iVar7;
    u32 auStack_cc[4];
    int iStack_b8;
    u32 uStack_b4;
    int iStack_ac;
    u32 uStack_a8;
    int iStack_a0;
    u32 uStack_9c;
    int iStack_94;
    int iStack_90;
    u32 uStack_8c;
    int iStack_84;
    u32 uStack_80;
    int iStack_78;
    int iStack_74;
    u32 uStack_70;
    int iStack_68;
    int iStack_60;
    int iStack_5c;
    u32 uStack_58;
    int iStack_50;

    uVar3 = sh4_tmu_1f88e6(a0);
    *(u32 *)((int)auStack_cc + 0x9c) = uVar3;
    ar6_00 = *(int *)((int)auStack_cc + 0x9c);
    *(u32 *)((int)auStack_cc + 0xa8) = 0;
    bVar1 = false;
    bVar2 = false;
    *(u32 *)((int)auStack_cc + 0xa4) = 0;
    if (0x10 < *(u32 *)(0xc4 + a0)) {
        *(u32 *)((int)auStack_cc + 0x80) = *(u32 *)(a0 + 100);
        iVar7 = g_8c4413c0;
        iVar5 = *(int *)((&DATA_8c12682c) + *(int *)((int)auStack_cc + 0x80) * 4);
        uVar3 = game_uses_int_diff_101de0(a0, *(u32 *)(a0 + 0x60), ar6_00);
        *(u32 *)((int)auStack_cc + 0x98) = uVar3;
        if ((*(int *)(a0 + 0x6c) == 0) || ((u32)(iVar7 * iVar5) <= *(u32 *)((int)auStack_cc + 0x98))) {
            iStack_50 = *(int *)(a0 + 100);
            (*(code *)(&se_play_2))(0x8c2b59d0, *(u32 *)(a0 + 0x68), *(u32 *)((&DATA_8c126764) + iStack_50 * 4), a3);
            if (*(int *)(a0 + 100) == 0) {
                *(u32 *)((int)auStack_cc + 0xa4) = 1;
            }
            iVar5 = *(int *)(a0 + 100);
            if ((iVar5 == 0) || (*(int *)(a0 + 100) == 0x1a)) {
                bVar1 = true;
            }
            if ((*(int *)(a0 + 100) == 0xe) || (*(int *)(a0 + 100) == 0x28)) {
                bVar2 = true;
            }
            if ((bVar1) || (bVar2)) {
                *(u32 *)((int)auStack_cc + 0xa8) = 1;
            }
            *(int *)(a0 + 0x60) = ar6_00;
            *(int *)(a0 + 100) = *(int *)(a0 + 100) + 1;
            uStack_58 = (*(code *)(&libgcc_divide_helper_0103d0))(*(u32 *)(a0 + 100), 0x32, iVar5, a3);
            *(u32 *)(a0 + 100) = uStack_58;
            *(u32 *)(a0 + 0x6c) = 1;
        }
    }
    iStack_5c = *(int *)(a0 + 0x54);
    iVar7 = g_8c4413c0;
    iVar5 = *(int *)((&DATA_8c126724) + iStack_5c * 4);
    uVar3 = game_uses_int_diff_101de0(a0, *(u32 *)(a0 + 0x50), ar6_00);
    *(u32 *)((int)auStack_cc + 0x94) = uVar3;
    if (((*(int *)(a0 + 0x5c) == 0) || ((u32)(iVar7 * iVar5) <= *(u32 *)((int)auStack_cc + 0x94))) ||
        (*(int *)((int)auStack_cc + 0xa8) == 1)) {
        if (*(int *)((int)auStack_cc + 0xa8) == 1) {
            *(u32 *)(a0 + 0x54) = 0;
        }
        iStack_60 = *(int *)(a0 + 0x54);
        (*(code *)(&se_play_2))(0x8c2b59d0, *(u32 *)(a0 + 0x58), *(u32 *)((&DATA_8c1266e4) + iStack_60 * 4), a3);
        *(int *)(a0 + 0x50) = ar6_00;
        *(int *)(a0 + 0x54) = *(int *)(a0 + 0x54) + 1;
        *(u32 *)(a0 + 0x54) = *(u32 *)(a0 + 0x54) & 0xf;
        *(u32 *)(a0 + 0x5c) = 1;
    }
    if (0x20 < *(u32 *)(0xc4 + a0)) {
        if (*(int *)(a0 + 0x3c) == 0) {
            if (*(int *)((int)auStack_cc + 0xa4) == 1) {
                iStack_68 = *(int *)(a0 + 0x34);
                uVar3 = *(u32 *)((&DATA_8c1268f4) + iStack_68 * 4);
                se_play_2(0x8c2b59d0, *(u32 *)(a0 + 0x38), uVar3);
                *(int *)(a0 + 0x30) = ar6_00;
                *(int *)(a0 + 0x34) = *(int *)(a0 + 0x34) + 1;
                uStack_70 = (*(code *)(&libgcc_divide_helper_0103d0))(*(u32 *)(a0 + 0x34), 0x19, uVar3, a3);
                *(u32 *)(a0 + 0x34) = uStack_70;
                *(u32 *)(a0 + 0x3c) = 1;
            }
        } else {
            iStack_74 = *(int *)(a0 + 0x34);
            iVar7 = g_8c4413c0;
            iVar5 = *(int *)((&DATA_8c126958) + iStack_74 * 4);
            uVar3 = game_uses_int_diff_101de0(a0, *(u32 *)(a0 + 0x30), ar6_00);
            *(u32 *)((int)auStack_cc + 0x90) = uVar3;
            if ((((u32)(iVar7 * iVar5) <= *(u32 *)((int)auStack_cc + 0x90)) || (bVar1)) || (bVar2)) {
                if ((bVar1) || (bVar2)) {
                    *(u32 *)(a0 + 0x34) = 0;
                }
                iStack_78 = *(int *)(a0 + 0x34);
                uVar3 = *(u32 *)((&DATA_8c1268f4) + iStack_78 * 4);
                se_play_2(0x8c2b59d0, *(u32 *)(a0 + 0x38), uVar3);
                *(int *)(a0 + 0x30) = ar6_00;
                *(int *)(a0 + 0x34) = *(int *)(a0 + 0x34) + 1;
                uStack_80 = (*(code *)(&libgcc_divide_helper_0103d0))(*(u32 *)(a0 + 0x34), 0x19, uVar3, a3);
                *(u32 *)(a0 + 0x34) = uStack_80;
            }
        }
    }
    *(u32 *)((int)auStack_cc + 0xa0) = 1;
    if (*(u32 *)(0xc4 + a0) < 0x41) {
        *(u32 *)((int)auStack_cc + 0xa0) = 0;
    }
    if (0xa2be8 < *(u32 *)(0xbc + a0)) {
        *(u32 *)((int)auStack_cc + 0xa0) = 0;
    }
    if (*(u32 *)(0xbc + a0) < 0x82334) {
        *(u32 *)((int)auStack_cc + 0xa0) = 0;
    }
    if (*(int *)((int)auStack_cc + 0xa0) == 0) {
        *(u32 *)(a0 + 0x44) = 0;
    }
    if (*(int *)((int)auStack_cc + 0xa0) == 1) {
        if (*(int *)(a0 + 0x4c) == 0) {
            if (*(int *)((int)auStack_cc + 0xa4) == 1) {
                iStack_84 = *(int *)(a0 + 0x44);
                uVar3 = *(u32 *)((&DATA_8c1269bc) + iStack_84 * 4);
                se_play_2(0x8c2b59d0, *(u32 *)(a0 + 0x48), uVar3);
                *(int *)(a0 + 0x40) = ar6_00;
                *(int *)(a0 + 0x44) = *(int *)(a0 + 0x44) + 1;
                uStack_8c = (*(code *)(&libgcc_divide_helper_0103d0))(*(u32 *)(a0 + 0x44), 0x1c, uVar3, a3);
                *(u32 *)(a0 + 0x44) = uStack_8c;
                *(u32 *)(a0 + 0x4c) = 1;
            }
        } else {
            iStack_90 = *(int *)(a0 + 0x44);
            iVar7 = g_8c4413c0;
            iVar5 = *(int *)((&DATA_8c126a2c) + iStack_90 * 4);
            uVar3 = game_uses_int_diff_101de0(a0, *(u32 *)(a0 + 0x40), ar6_00);
            *(u32 *)((int)auStack_cc + 0x8c) = uVar3;
            if ((u32)(iVar7 * iVar5) <= *(u32 *)((int)auStack_cc + 0x8c)) {
                if (*(int *)(a0 + 0x44) == 0) {
                    if (bVar1) {
                        iStack_94 = *(int *)(a0 + 0x44);
                        uVar3 = *(u32 *)((&DATA_8c1269bc) + iStack_94 * 4);
                        se_play_2(0x8c2b59d0, *(u32 *)(a0 + 0x48), uVar3);
                        *(int *)(a0 + 0x40) = ar6_00;
                        *(int *)(a0 + 0x44) = *(int *)(a0 + 0x44) + 1;
                        uStack_9c = (*(code *)(&libgcc_divide_helper_0103d0))(*(u32 *)(a0 + 0x44), 0x1c, uVar3, a3);
                        *(u32 *)(a0 + 0x44) = uStack_9c;
                    }
                } else if (*(int *)(a0 + 0x44) == 7) {
                    if (bVar2) {
                        iStack_a0 = *(int *)(a0 + 0x44);
                        uVar3 = *(u32 *)((&DATA_8c1269bc) + iStack_a0 * 4);
                        se_play_2(0x8c2b59d0, *(u32 *)(a0 + 0x48), uVar3);
                        *(int *)(a0 + 0x40) = ar6_00;
                        *(int *)(a0 + 0x44) = *(int *)(a0 + 0x44) + 1;
                        uStack_a8 = (*(code *)(&libgcc_divide_helper_0103d0))(*(u32 *)(a0 + 0x44), 0x1c, uVar3, a3);
                        *(u32 *)(a0 + 0x44) = uStack_a8;
                    }
                } else if (*(int *)(a0 + 0x44) == 0xe) {
                    if (bVar1) {
                        iStack_ac = *(int *)(a0 + 0x44);
                        uVar3 = *(u32 *)((&DATA_8c1269bc) + iStack_ac * 4);
                        se_play_2(0x8c2b59d0, *(u32 *)(a0 + 0x48), uVar3);
                        *(int *)(a0 + 0x40) = ar6_00;
                        *(int *)(a0 + 0x44) = *(int *)(a0 + 0x44) + 1;
                        uStack_b4 = (*(code *)(&libgcc_divide_helper_0103d0))(*(u32 *)(a0 + 0x44), 0x1c, uVar3, a3);
                        *(u32 *)(a0 + 0x44) = uStack_b4;
                    }
                } else if (*(int *)(a0 + 0x44) == 0x15) {
                    if (bVar2) {
                        iStack_b8 = *(int *)(a0 + 0x44);
                        uVar3 = *(u32 *)((&DATA_8c1269bc) + iStack_b8 * 4);
                        se_play_2(0x8c2b59d0, *(u32 *)(a0 + 0x48), uVar3);
                        *(int *)(a0 + 0x40) = ar6_00;
                        *(int *)(a0 + 0x44) = *(int *)(a0 + 0x44) + 1;
                        auStack_cc[3] = (*(code *)(&libgcc_divide_helper_0103d0))(*(u32 *)(a0 + 0x44), 0x1c, uVar3, a3);
                        *(u32 *)(a0 + 0x44) = auStack_cc[3];
                    }
                } else {
                    auStack_cc[2] = *(int *)(a0 + 0x44);
                    uVar3 = *(u32 *)((&DATA_8c1269bc) + auStack_cc[2] * 4);
                    se_play_2(0x8c2b59d0, *(u32 *)(a0 + 0x48), uVar3);
                    *(int *)(a0 + 0x40) = ar6_00;
                    *(int *)(a0 + 0x44) = *(int *)(a0 + 0x44) + 1;
                    auStack_cc[1] = a0;
                    auStack_cc[0] = (*(code *)(&libgcc_divide_helper_0103d0))(*(u32 *)(a0 + 0x44), 0x1c, uVar3, a3);
                    *(u32 *)(a0 + 0x44) = auStack_cc[0];
                }
            }
        }
    }
    uVar6 = (u32)(0x70 < *(u32 *)(0xc4 + a0));
    if (0xc349c < *(u32 *)(0xbc + a0)) {
        uVar6 = 0;
    }
    if (*(u32 *)(0xbc + a0) < 0x82334) {
        uVar6 = 0;
    }
    if (*(int *)(0x88 + a0) != -1) {
        uVar6 = 0;
    }
    if (*(int *)(a0 + 0x44) != 0) {
        uVar6 = 0;
    }
    if (ar6_00 == *(int *)(a0 + 0x40)) {
        uVar6 = 0;
    }
    if (uVar6 == 1) {
        iVar7 = *(int *)(&DATA_8c126a9c);
        iVar4 = g_8c4413c0;
        iVar5 = ar6_00;
        uVar3 = game_uses_int_diff_101de0(a0, *(u32 *)(0x80 + a0), ar6_00);
        *(u32 *)((int)auStack_cc + 0x88) = uVar3;
        uVar6 = *(u32 *)(0x8c + a0);
        if (((uVar6 == 0) || ((u32)(iVar7 * iVar4) <= *(u32 *)((int)auStack_cc + 0x88))) &&
            (uVar6 = *(u32 *)((int)auStack_cc + 0xa4), uVar6 == 1)) {
            uVar3 = (*(code *)(&pack_acquire_entry_handle))(0x8c2b59d0, "TGU52", iVar5, a3);
            *(u32 *)((int)auStack_cc + 0x84) = uVar3;
            *(u32 *)(0x88 + a0) = *(u32 *)((int)auStack_cc + 0x84);
            *(int *)(0x80 + a0) = ar6_00;
            uVar6 = 0x8c;
            *(u32 *)(0x8c + a0) = 1;
        }
    }
    return uVar6;
}

/*
 * static_init_vec3s_441390  0x8c102634
 * static initialiser: builds 4 global Vec3 constants (8c441390..8c4413b4) and registers their destructors
 */
u32 static_init_vec3s_441390(u32 unused_a0, u32 a1, u32 a2, u32 a3) {
    u32 uVar1;
    code *pcVar2;
    u32 uVar3;
    char cVar4;

    cVar4 = '\0';
    uVar1 = Vec3_ctor_xyz(&g_8c1266a0, a1, a2, a3);
    uVar3 = 0x8c441390;
    pcVar2 = Vec3_dtor;
    global_list_push(uVar1, Vec3_dtor, 0x8c441390, a3);
    uVar1 = Vec3_ctor_xyz(&g_8c1266b0, pcVar2, uVar3, a3);
    uVar3 = 0x8c44139c;
    pcVar2 = Vec3_dtor;
    global_list_push(uVar1, Vec3_dtor, 0x8c44139c, a3);
    uVar1 = Vec3_ctor_xyz(&g_8c1266c0, pcVar2, uVar3, a3);
    uVar3 = 0x8c4413a8;
    pcVar2 = Vec3_dtor;
    global_list_push(uVar1, Vec3_dtor, 0x8c4413a8, a3);
    uVar1 = Vec3_ctor_xyz(&g_8c1266d0, pcVar2, uVar3, a3);
    global_list_push(uVar1, Vec3_dtor, 0x8c4413b4, a3);
    if (cVar4 == '\0') {
        g_8c1266e0 = CONCAT44(g_8c1266e4, 0x800000);
        /* WARNING: Read-only address (ram,0x8c1266e4) is written */
    } else {
        g_8c1266e0 = 0xffffffff00800000;
    }
    return 0x8c125864;
}

/*
 * clear_2_words  0x8c1026ec
 * a0[0..1] = 0
 * called by: Class_12bce0_ctor, Vec3_uses_clear_3_words_0c84f4, game_copy_0bf478, game_uses_clear_3_words_0c9588,
 * game_uses_clear_3_words_0c9ee0, game_uses_clear_3_words_0ca88c, game_uses_clear_3_words_0cb9c8
 */
u32 *clear_2_words(u32 *a0) {
    a0[1] = 0;
    *a0 = 0;
    return a0;
}

/*
 * free_if_nonnull_wrap_10270c  0x8c10270c
 * called by: Class_12bce0_dtor, Vec3_uses_clear_3_words_0c84f4, game_release_0c0148, game_uses_clear_3_words_0c9588,
 * game_uses_clear_3_words_0c9ee0, game_uses_clear_3_words_0ca88c, game_uses_clear_3_words_0cb9c8
 */
int free_if_nonnull_wrap_10270c(int a0, u32 a1, u32 a2, u32 a3) {
    u32 in_stack_fffffff4;

    if ((a0 != 0) && (0 < (short)a1)) {
        free_if_nonnull(a0, a1, a2, a3, CONCAT22((short)((u32)in_stack_fffffff4 >> 0x10), (short)a1));
    }
    return a0;
}

/*
 * set_fields_0_2  0x8c10273c
 * stores +0x0, +0x2
 * called by: game_uses_copy_2_u16_0e89c4, item_grid_find_free, set_fields_0_2_wrap
 */
u16 *set_fields_0_2(u16 *a0, u32 a1, u32 a2) {
    *a0 = (u16)a1;
    a0[1] = (u16)a2;
    return a0;
}

/*
 * clear_3_words_102748  0x8c102748
 * a0[0..2] = 0
 * called by: CAnimal_copy_030e10, Class_12b088_vec_0aa70c, Class_12bce0_ctor, Vec3_uses_clear_3_words_0c84f4,
 * alt_entry_046684, game_uses_clear_3_words_0c9588, game_uses_clear_3_words_0c9ee0, game_uses_clear_3_words_0ca88c (+7
 * more)
 */
u32 *clear_3_words_102748(u32 *a0) {
    a0[2] = 0;
    a0[1] = 0;
    *a0 = 0;
    return a0;
}

/*
 * Vec3_assign_f_10277c  0x8c10277c
 * stores fr4..fr6 as x, y, z
 * called by: CAnimal_m2_02573c, CAnimal_m3_026078, Class_12bb08_ctor, Vec3_state_switch_03f4a4, alt_entry_046684,
 * game_state_switch_071a38, game_state_switch_0a6974, game_uses_get_field_1c_048868 (+4 more)
 */
u32 *Vec3_assign_f_10277c(u32 *a0) {
    u32 in_fr5;
    u32 in_fr4;
    u32 in_fr6;

    *a0 = in_fr4;
    a0[1] = in_fr5;
    a0[2] = in_fr6;
    return a0;
}

/*
 * free_if_nonnull_wrap_102790  0x8c102790
 * called by: CAnimal_m2_02573c, CAnimal_m3_026078, CAnimal_release_026038, Class_12ad14_m1_0a09e8,
 * Class_12ad14_uses_rand_float_0a37c8, Class_12ad14_vec_0a0c88, Class_12b088_vec_0a6628, Class_12b088_vec_0aa70c (+25
 * more)
 */
int free_if_nonnull_wrap_102790(int a0, u32 a1, u32 a2, u32 a3) {
    u32 in_stack_fffffff4;

    if ((a0 != 0) && (0 < (short)a1)) {
        free_if_nonnull(a0, a1, a2, a3, CONCAT22((short)((u32)in_stack_fffffff4 >> 0x10), (short)a1));
    }
    return a0;
}

/*
 * clear_record_10  0x8c1027c0
 * zeroes a 10-byte record: four shorts and two bytes
 * called by: game_copy_0b7a54
 */
u16 *clear_record_10(u16 *a0) {
    a0[3] = 0;
    a0[2] = 0;
    a0[1] = 0;
    *a0 = 0;
    *(u8 *)((int)a0 + 9) = 0;
    *(u8 *)(a0 + 4) = 0;
    return a0;
}

/*
 * color_set_white  0x8c102800
 * a0[0..3] = 1.0
 * called by: Class_12b580_uses_Vec3_ctor_zero_0d7f18, Class_12c1f0_ctor, Class_12c1f0_ctor_kind
 */
u32 *color_set_white(u32 *a0) {
    *a0 = 0x3f800000;
    a0[1] = 0x3f800000;
    a0[2] = 0x3f800000;
    a0[3] = 0x3f800000;
    return a0;
}

/*
 * noop_102824  0x8c102824
 * called by: CItemList_DeleteItem, CItemList_TakeOutItem, CNodePtrList_DeleteItem, CNodePtrList_TakeOutItem,
 * debug_print_object, debug_print_vec3, game_uses_malloc_thunk_015f18, noop_0bf440
 */
u32 noop_102824(u32 a0, u32 a1, u32 a2, u32 a3) {
    u32 in_r0;

    return in_r0;
}

/*
 * report_error_message  0x8c102828
 * called by: C3DRenderPly_SetMem, CAnimBody_AdvanceFrame_033b98, CAnimBody_AdvanceFrame_033d88, CAnimBody_SetFrame,
 * CAnimBody_SetInterpolate, CAnimal_LoadGRReq, CAnimal_LoadGRReq_b, CAnimal_LoadGRWait (+37 more)
 */
u32 report_error_message(u32 a0, u32 a1, int a2, u32 a3) {
    int ar6_00;

    ar6_00 = a2;
    log_message(a0, a1, a2);
    if (a2 == 0) {
        game_shutdown_a(a0, a1, ar6_00, a3);
        game_shutdown_b();
    }
    return 0;
}

/*
 * malloc_thunk_wrap_10287c  0x8c10287c
 * only calls malloc_thunk
 * called by: game_uses_free_ptr_and_clear_0b95a0
 */
u32 malloc_thunk_wrap_10287c(u32 a0, u32 a1, u32 a2, u32 a3) {
    u32 uVar1;

    uVar1 = malloc_thunk(a0, a1, a2, a3);
    return uVar1;
}

/*
 * free_ptr_and_clear  0x8c10289c
 * frees *a0 if set and clears it
 * called by: game_uses_free_ptr_and_clear_0b95a0
 */
u32 free_ptr_and_clear(int *a0, u32 a1, u32 a2, u32 a3) {
    if (*a0 != 0) {
        free_sys(*a0, a1, a2, a3);
        *a0 = 0;
    }
    return 0;
}

/*
 * date_compare  0x8c1028c0
 * compares two dates as RTC seconds: 1 when a0 is later, 2 when a1 is later, 0 when equal
 * called by: static_init_4367d4
 */
u32 date_compare(u32 a0, u32 a1, u32 a2) {
    u32 uVar1;
    u32 uStack_c;
    u32 auStack_8[2];

    auStack_8[0] = 0;
    uStack_c = 0;
    date_to_rtc_seconds(a0, auStack_8, a2);
    date_to_rtc_seconds(a1, &uStack_c, a2);
    if (uStack_c < auStack_8[0]) {
        uVar1 = 1;
    } else if (auStack_8[0] < uStack_c) {
        uVar1 = 2;
    } else {
        uVar1 = 0;
    }
    return uVar1;
}

/*
 * game_update_fields_102914  0x8c102914
 * area name: game code; nothing names its area yet; behaviour name: conditionally writes members
 */
u32 game_update_fields_102914(int a0, u32 a1) {
    *(u32 *)(a0 + 4) = a1;
    return *(u32 *)(a0 + 8);
}

/*
 * Class_12c3a4_ctor  0x8c10291c
 * stores the Class_12c3a4 vtable in a0 and sets up its linear maps
 * called by: Class_12c3a4_ctor_wrap, static_init_vec3s_437520
 */
u32 *Class_12c3a4_ctor(u32 *a0) {
    *a0 = (&DATA_8c12c3a4);
    linear_map_set_range(a0);
    return a0;
}

/*
 * linear_map_set_range  0x8c102974
 * linear_map_set plus a range (+0xc, +0x10) from fr8, fr9
 * called by: Class_12b580_uses_linear_map_set_0e6ef0, Class_12b758_uses_linear_map_set_0e5c4c,
 * Class_12b930_uses_linear_map_set_0e0da4, Class_12bea8_uses_linear_map_set_range_0d7e80, Class_12c3a4_ctor,
 * linear_map_set
 */
int linear_map_set_range(int a0) {
    u64 in_dr4;
    float fVar1;
    float in_fr7;
    float in_fr6;
    u32 in_fr9;
    u32 in_fr8;
    u32 uVar2;

    fVar1 = (float)((u64)in_dr4 >> 0x20);
    *(float *)(a0 + 4) = (fVar1 * in_fr7 - in_fr6 * (float)in_dr4) / (fVar1 - in_fr6);
    *(float *)(a0 + 8) = ((float)in_dr4 - in_fr7) / (fVar1 - in_fr6);
    *(u32 *)(a0 + 0xc) = in_fr8;
    *(u32 *)(a0 + 0x10) = in_fr9;
    if (*(float *)(a0 + 0x10) < *(float *)(a0 + 0xc)) {
        uVar2 = *(u32 *)(a0 + 0xc);
        *(u32 *)(a0 + 0xc) = *(u32 *)(a0 + 0x10);
        *(u32 *)(a0 + 0xc) = uVar2;
    }
    return a0 + 0x10;
}

/*
 * Class_12c3a4_m0_1029d0  0x8c1029d0
 * called by: Class_12c394_m1_102b58, game_draw_0d82f0
 */
int Class_12c3a4_m0_1029d0(int a0) {
    return a0 + 0xc;
}

/*
 * Class_12c394_ctor_b  0x8c102a08
 * constructs the base (8c0d63f8), stores the vtable 0x8c12c394 and resets the linear map
 * called by: Class_12c394_ctor_b_wrap, static_init_vec3s_437520
 */
u32 *Class_12c394_ctor_b(u32 *a0) {
    Class_12c3a4_ctor_wrap(a0);
    *a0 = (&DATA_8c12c394);
    linear_map_set(a0);
    return a0;
}

/*
 * linear_map_set  0x8c102a7c
 * sets the slope (+0x18) and intercept (+0x14) of the line through two points passed in dr6/dr8
 * called by: Class_12b580_uses_linear_map_set_0e6ef0, Class_12b758_uses_linear_map_set_0e5c4c,
 * Class_12b930_uses_linear_map_set_0e0da4, Class_12bb08_vec_0d6264, Class_12c394_ctor_b,
 * game_uses_linear_map_set_0d69a8
 */
u32 linear_map_set(int a0) {
    u32 uVar1;
    u64 in_dr6;
    u64 in_dr8;
    float fVar2;
    float fVar3;

    fVar2 = (float)((u64)in_dr8 >> 0x20);
    fVar3 = (float)((u64)in_dr6 >> 0x20);
    *(float *)(a0 + 0x14) = (fVar3 * (float)in_dr8 - fVar2 * (float)in_dr6) / (fVar3 - fVar2);
    *(float *)(a0 + 0x18) = ((float)in_dr6 - (float)in_dr8) / (fVar3 - fVar2);
    *(float *)(a0 + 0x1c) = fVar3;
    uVar1 = linear_map_set_range(a0);
    return uVar1;
}

/*
 * Class_12c394_m0_102b04  0x8c102b04
 * called by: game_uses_Class_12c394_m0_0d4e88
 */
int Class_12c394_m0_102b04(int a0) {
    Class_12c394_m1_102b58(a0);
    return a0 + 0xc;
}

/*
 * Class_12c394_m1_102b58  0x8c102b58
 * called by: Class_12c394_m0_102b04
 */
int Class_12c394_m1_102b58(int a0) {
    int iVar1;
    u64 in_dr4;

    if (*(float *)(a0 + 0x1c) <= (float)((u64)in_dr4 >> 0x20)) {
        iVar1 = a0 + 0x18;
    } else {
        Class_12c3a4_m0_1029d0(a0);
        iVar1 = 0;
    }
    return iVar1;
}

/*
 * set_fields_4_c  0x8c102ba4
 * stores +0x4, +0xc
 */
u32 set_fields_4_c(int a0) {
    *(u32 *)(a0 + 4) = 0;
    *(u32 *)(a0 + 0xc) = 0;
    return 1;
}

/*
 * field_ptr_8  0x8c102bb4
 * returns the address of the member at +0x8
 */
int field_ptr_8(int a0) {
    return a0 + 8;
}

/*
 * clear_field_4_102bc8  0x8c102bc8
 */
u32 clear_field_4_102bc8(int a0) {
    *(u32 *)(a0 + 4) = 0;
    return 0;
}

/*
 * Class_12c394_uses_imask_to_sr_bits_102bd0  0x8c102bd0
 * area name: sits between Class_12c394 functions (same compilation unit); behaviour name: its main named callee is
 * imask_to_sr_bits called by: game_init
 */
u32 Class_12c394_uses_imask_to_sr_bits_102bd0(u32 a0, u32 a1, u32 a2, u32 a3) {
    int iVar1;
    u32 uVar2;
    u32 uVar3;
    u32 uVar4;
    u32 ar6_00;
    int iVar5;

    uVar2 = 0xf;
    uVar3 = a1;
    uVar4 = a2;
    imask_to_sr_bits(0xf);
    shinobi_uses_intc_reset_and_init_regs_1fa6b8(uVar2, uVar3, uVar4, a3);
    sys_heap_init(0x8c4c3ea0, 0xb3b160, uVar4, a3);
    uVar4 = a0;
    pvr_25825a(a0, a1, a2, a3);
    shinobi_draw_1fa6e2();
    ar6_00 = 0x8c44d498;
    uVar3 = 0x8c441478;
    uVar2 = 0;
    irq_input_1f5dd0(0, 0x8c441478, 0x8c44d498, a3);
    shinobi_install_event900(uVar2);
    uVar2 = 0;
    imask_to_sr_bits(0);
    for (iVar5 = 8; 0 < iVar5; iVar5 = iVar5 + -1) {
        ar6_00 = 0x800;
        uVar2 = 8;
        uVar3 = 0x8c4594c0;
        a3 = 0x8c45a860;
        iVar1 = thunk_FUN_8c1f38c0(8, 0x8c4594c0, 0x800, 0x8c45a860);
        if ((iVar1 == -0x17) || (iVar1 == -0x21)) {
            system_init_libs(uVar2, uVar3, ar6_00, a3);
            game_shutdown_b();
        } else if (iVar1 == 0)
            break;
    }
    if (iVar5 == 0) {
        system_init_libs(uVar2, uVar3, ar6_00, a3);
        game_shutdown_b();
    }
    uVar3 = run_static_ctors(uVar2, uVar3, ar6_00, a3);
    return uVar3;
}

/*
 * imask_to_sr_bits  0x8c102d20
 * (a0 & 15) << 4, the SR IMASK field
 * called by: Class_12c394_uses_imask_to_sr_bits_102bd0, system_init_libs
 */
int imask_to_sr_bits(u32 a0) {
    return (a0 & 0xf) << 4;
}

/*
 * system_init_libs  0x8c102d40
 * initialises the runtime, the disc file system, Shinobi, Ninja and the sound/graphics services at boot
 * called by: Class_12c394_uses_imask_to_sr_bits_102bd0, game_shutdown_a, game_uses_memcard_flush_and_close_8c3d_0b6c10
 */
u32 system_init_libs(u32 a0, u32 a1, u32 a2, u32 a3) {
    u32 uVar1;
    u32 in_PR;

    run_atexit_list(a0, a1, a2, a3);
    gdfs_drv_close(a0, a1, a2, a3, in_PR);
    shinobi_remove_event900();
    device_info_table_reset();
    ninja_release_2590bc(a0, a1, a2, a3);
    noop_1fb43a();
    shinobi_uses_utlb_invalidate_saved_entrie_1fa6f2(a0, a1, a2, a3);
    uVar1 = imask_to_sr_bits(0xf);
    return uVar1;
}

/*
 * static_init_vec3s_470880  0x8c102d9c
 * static initialiser: builds 4 global Vec3 constants (8c470880..8c4708a4) and registers their destructors
 */
u32 static_init_vec3s_470880(u32 unused_a0, u32 a1, u32 a2, u32 a3) {
    u32 uVar1;
    u32 uVar2;
    u8 *puVar3;

    uVar1 = Vec3_ctor_xyz((&DATA_8c126aa0), a1, a2, a3);
    puVar3 = (&Vec3_dtor);
    uVar2 = 0x8c470880;
    global_list_push(uVar1, (&Vec3_dtor), 0x8c470880, a3);
    uVar1 = Vec3_ctor_xyz((&DATA_8c126ab0), puVar3, uVar2, a3);
    puVar3 = (&Vec3_dtor);
    uVar2 = 0x8c47088c;
    global_list_push(uVar1, (&Vec3_dtor), 0x8c47088c, a3);
    uVar1 = Vec3_ctor_xyz((&DATA_8c126ac0), puVar3, uVar2, a3);
    puVar3 = (&Vec3_dtor);
    uVar2 = 0x8c470898;
    global_list_push(uVar1, (&Vec3_dtor), 0x8c470898, a3);
    uVar2 = Vec3_ctor_xyz((&DATA_8c126ad0), puVar3, uVar2, a3);
    uVar2 = global_list_push(uVar2, (&Vec3_dtor), 0x8c4708a4, a3);
    return uVar2;
}

/*
 * static_init_vec3s_4708b0  0x8c102e44
 * static initialiser: builds 4 global Vec3 constants (8c4708b0..8c4708d4) and registers their destructors
 */
u32 static_init_vec3s_4708b0(u32 unused_a0, u32 a1, u32 a2, u32 a3) {
    u32 uVar1;
    u32 uVar2;
    u8 *puVar3;

    uVar1 = Vec3_ctor_xyz((&DATA_8c126ae0), a1, a2, a3);
    puVar3 = (&Vec3_dtor);
    uVar2 = 0x8c4708b0;
    global_list_push(uVar1, (&Vec3_dtor), 0x8c4708b0, a3);
    uVar1 = Vec3_ctor_xyz((&DATA_8c126af0), puVar3, uVar2, a3);
    puVar3 = (&Vec3_dtor);
    uVar2 = 0x8c4708bc;
    global_list_push(uVar1, (&Vec3_dtor), 0x8c4708bc, a3);
    uVar1 = Vec3_ctor_xyz((&DATA_8c126b00), puVar3, uVar2, a3);
    puVar3 = (&Vec3_dtor);
    uVar2 = 0x8c4708c8;
    global_list_push(uVar1, (&Vec3_dtor), 0x8c4708c8, a3);
    uVar2 = Vec3_ctor_xyz((&DATA_8c126b10), puVar3, uVar2, a3);
    uVar2 = global_list_push(uVar2, (&Vec3_dtor), 0x8c4708d4, a3);
    return uVar2;
}

/*
 * Class_12c3c4_ctor  0x8c102eec
 * stores the vtable 0x8c12c3c4
 * called by: CHigyoLine_ctor
 * strings: "HIGYOLINE"; "HIGYOLINE1"; "STATUS_FORMAT"
 */
u32 *Class_12c3c4_ctor(u32 *a0, u32 a1, u32 a2, u32 a3) {

    Class_129c70_ctor(a0, a1, a2);
    *a0 = &g_8c12c3c4;
    Class_129c24_calls_fill_loop_0300a4(a0 + 0x27);
    clear_fields_0_to_20(a0 + 0x207, a1);
    *(u8 *)(a0 + 0x20) = 0;
    a0[0xe1] = 0xffffffff;
    a0[0x213] = 0;
    a0[0x214] = 0;
    *(u8 *)((int)a0 + 0x855) = 0;
    a0[0x217] = 0;
    a0[0x216] = 0;
    *(u8 *)(a0 + 0x215) = 0;
    strcpy(a0 + 0xd9, "HIGYOLINE");
    strcpy(a0 + 0x27, "HIGYOLINE1");
    strcpy(a0 + 0x2f, "STATUS_FORMAT");
    strcpy(a0 + 0x37, &g_8c1eeec3);
    a0[0xe2] = 4;
    a0[0x210] = 0;
    a0[0x211] = 0;
    a0[0x212] = 0x22;
    *(u8 *)((int)a0 + 0x9a) = 2;
    *(u8 *)((int)a0 + 0x865) = 0;
    a0[0x21c] = 1;
    a0[0x21b] = 1;
    a0[0x21a] = 1;
    a0[0x21c] = 0;
    a0[0x21d] = 0;
    *(u8 *)(a0 + 0x219) = 0;
    a0[0x218] = 0x1b;
    a0[0x21e] = 0;
    *(u8 *)(a0 + 0x21f) = 0;
    a0[0x220] = 0;
    a0[0x221] = 0;
    a0[0x222] = 0;
    a0[0x223] = 0;
    return a0;
}

/*
 * Class_12c3c4_dtor  0x8c1030a4
 * stores the vtable 0x8c12c3c4
 * called by: CAnimal_m0_08516c
 */
u32 *Class_12c3c4_dtor(u32 *a0, u32 a1, u32 a2, u32 a3) {
    u32 ar5_00;
    u32 in_stack_fffffff4;
    u32 ain0;

    ain0 = CONCAT22((short)((u32)in_stack_fffffff4 >> 0x10), (u16)a1);
    if (a0 != NULL) {
        *a0 = &g_8c12c3c4;
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
 * Higyo_update_sleep_light  0x8c103100
 * Higyo line: sleep, wake-up and light requests (REQUEST_SLEEP/WAKE_UP/WANT_LIGHT, STATUS_LIGHT/LIGHT_OFF)
 * strings: "REQUEST_SLEEP"; "REQUEST_SLEEP"; "REQUEST_WAKE_UP"; "REQUEST_WAKE_UP" ...
 */
u32 Higyo_update_sleep_light(int *a0, code *a1, code *a2, u32 a3) {
    u32 uVar1;
    code *pcVar2;
    int iVar3;
    char *ar7_00;
    code *pcVar4;
    u32 uVar5;
    u8 *puVar6;
    u8 *puVar7;
    u8 *puVar8;
    u8 *ar5_00;
    int iVar9;
    code *pcVar10;
    int *ar5_01;
    u32 uVar11;
    u32 in_stack_fffffef8;
    u8 auStack_38[36];

    puVar8 = auStack_38;
    puVar6 = &g_8c1eee70;
    ar5_00 = (u8 *)0x10;
    do {
        puVar7 = puVar6 + 1;
        *puVar8 = *puVar6;
        puVar6 = puVar6 + 2;
        puVar8[1] = *puVar7;
        puVar8 = puVar8 + 2;
        ar5_00 = ar5_00 + -1;
    } while (ar5_00 != NULL);
    pcVar2 = a2;
    uVar1 = get_field_a4_s16(*(int *)(a2 + 0x18), 0);
    if ((short)uVar1 == 3) {
        uVar1 = talk_uses_table13019c_find_row_02bef8(*(int *)(a2 + 4), ar5_00, pcVar2);
        pcVar2 = (code *)(int)(short)uVar1;
        ar5_00 = *(u8 **)(a2 + 0x18);
        (**(code **)(*a0 + 0x18))(a0, ar5_00, pcVar2, a3);
    }
    if ((g_8c27d430 == 1) && (a0[0x21d] == 0)) {
        Class_12c3c4_uses_set_field_0_u8_109e40(a0, a2, pcVar2, a3);
        ar5_00 = &g_8c27d430;
        g_8c27d430 = 0;
    }
    if (*(char *)((int)a0 + 0x9b) == '\x01') {
        *(u8 *)((int)a0 + 0x865) = 0;
        uVar1 = talk_uses_table13019c_find_row_02bef8(*(int *)(a2 + 4), ar5_00, pcVar2);
        (**(code **)(*a0 + 0x18))(a0, *(int *)(a2 + 0x18), (int)(short)uVar1, a3);
    }
    uVar11 = 0x9c;
    g_8c1eee30 = a0[0x210];
    g_8c1eee34 = a0[0x211];
    iVar9 = a0[0x212];
    g_8c1eee38 = iVar9;
    iVar3 = get_field_13c_028d9c(*(int *)(a2 + 4), iVar9, 0x9c);
    a0[0x218] = iVar3;
    uVar1 = talk_uses_table13019c_find_row_02bef8(*(int *)(a2 + 4), iVar9, uVar11);
    set_field_728_u8(a0 + 0x27, (int)(short)uVar1);
    Class_12c3c4_uses_set_field_38_104f5c(a0, a1, a2, a3);
    Higyo_react_feed_full(a0, a1, a2, a3);
    Higyo_life_status(a0, a1, a2, a3);
    pcVar2 = a1;
    pcVar10 = a2;
    Higyo_pick_idle_action(a0, a1, a2, a3);
    iVar3 = get_field_124_027930(*(int *)(a2 + 8), pcVar2, pcVar10, a3);
    if (iVar3 != 2) {
        pcVar2 = a2;
        Class_129c70_uses_get_field_4_02f20c(a0, a2, pcVar10, a3);
    }
    ar7_00 = (char *)get_field_4_05eed8(a0);
    pcVar2 = a1;
    pcVar10 = a2;
    Higyo_choose_status_event(a0, a1, a2, ar7_00);
    iVar3 = get_field_124_027930(*(int *)(a2 + 8), pcVar2, pcVar10, ar7_00);
    if ((iVar3 != 2) && (iVar3 = get_field_178_035734(*(int *)(a2 + 8), pcVar2, pcVar10), iVar3 == 0)) {
        pcVar2 = a1;
        pcVar10 = a2;
        Higyo_react_touch(a0, a1, a2, ar7_00);
    }
    iVar3 = get_field_124_027930(*(int *)(a2 + 8), pcVar2, pcVar10, ar7_00);
    if (iVar3 != 2) {
        game_copy_02e8e0(a0 + 0x207, 1);
        Higyo_react_tap(a0, a1, a2, ar7_00);
        talk_complain_tank_env_b(a0, a1, a2);
        pcVar2 = a1;
        pcVar10 = a2;
        Higyo_react_environment(a0, a1, a2, ar7_00);
    }
    iVar3 = get_field_124_027930(*(int *)(a2 + 8), pcVar2, pcVar10, ar7_00);
    if (iVar3 == 0) {
        iVar3 = get_field_124_027930(*(int *)(a2 + 8), pcVar2, pcVar10, ar7_00);
        if ((iVar3 != 2) && (a0[1] == 0)) {
            iVar3 = get_field_24_05eed0(*(int *)(a2 + 4) + 0xf8, pcVar2);
            if (iVar3 == 1) {
                uVar5 = get_field_a4_s16(*(int *)(a2 + 0x18), pcVar2);
                pcVar2 = (code *)0x7;
                iVar3 = libgcc_divide_helper_01031c(uVar5 & 0xffff, 7, pcVar10);
                if ((iVar3 == 1) && (a0[0xe1] == -1)) {
                    ar7_00 = "REQUEST_SLEEP";
                    pcVar10 = NULL;
                    pcVar2 = NULL;
                    talk_start_line(a0 + 0x27, 0, 0, "REQUEST_SLEEP");
                }
            }
            uVar1 = get_field_bc_s8(*(int *)(a2 + 0xc), pcVar2, pcVar10, ar7_00);
            if ((char)uVar1 == '\0') {
                uVar5 = get_field_a4_s16(*(int *)(a2 + 0x18), pcVar2);
                pcVar2 = (code *)0x7;
                iVar3 = libgcc_divide_helper_01031c(uVar5 & 0xffff, 7, pcVar10);
                if ((iVar3 == 1) && (a0[0xe1] == -1)) {
                    if (a0[0x223] == 1) {
                        ar7_00 = "REQUEST_WAKE_UP";
                        pcVar10 = NULL;
                        talk_start_line(a0 + 0x27, 0x21, 0, "REQUEST_WAKE_UP");
                    } else {
                        ar7_00 = "REQUEST_WANT_LIGHT";
                        pcVar10 = NULL;
                        talk_start_line(a0 + 0x27, 0x21, 0, "REQUEST_WANT_LIGHT");
                    }
                    pcVar2 = NULL;
                    a0[0x223] = 0;
                }
            }
            uVar1 = get_field_bc_s8(*(int *)(a2 + 0xc), pcVar2, pcVar10, ar7_00);
            if (*(char *)((int)a0 + 0x9a) != (char)uVar1) {
                iVar3 = get_field_124_027930(*(int *)(a2 + 8), pcVar2, pcVar10, ar7_00);
                if (iVar3 != 2) {
                    uVar5 = get_field_a4_s16(*(int *)(a2 + 0x18), pcVar2);
                    pcVar2 = (code *)(uVar5 & 0xffff);
                    if ((code *)0x3 < pcVar2) {
                        uVar1 = get_field_bc_s8(*(int *)(a2 + 0xc), pcVar2, pcVar10, ar7_00);
                        if ((char)uVar1 == '\0') {
                            ar7_00 = "STATUS_LIGHT_OFF";
                            pcVar10 = NULL;
                            pcVar2 = (code *)0xa;
                            talk_start_line(a0 + 0x27, 10, 0, "STATUS_LIGHT_OFF");
                        } else {
                            uVar1 = get_field_bc_s8(*(int *)(a2 + 0xc), pcVar2, pcVar10, ar7_00);
                            if (*(char *)((int)a0 + 0x9a) < (char)uVar1) {
                                ar7_00 = "STATUS_LIGHT";
                                pcVar10 = NULL;
                                pcVar2 = NULL;
                                talk_start_line(a0 + 0x27, 0, 0, "STATUS_LIGHT");
                            }
                        }
                    }
                }
                uVar1 = get_field_bc_s8(*(int *)(a2 + 0xc), pcVar2, pcVar10, ar7_00);
                *(char *)((int)a0 + 0x9a) = (char)uVar1;
            }
        }
        iVar3 = get_field_124_027930(*(int *)(a2 + 8), pcVar2, pcVar10, ar7_00);
        if (iVar3 != 2) {
            pcVar2 = a1;
            pcVar10 = a2;
            Higyo_attention_events(a0, a1, a2, ar7_00);
        }
        if ((a0[0x10] != 2) && (iVar3 = get_field_770_05eeb8(a0 + 0x27), iVar3 == 1)) {
            if (a0[0xe1] == -1) {
                if ((char)a0[0x26] < '\0') {
                    a0[0x25] = 0;
                    pcVar2 = (code *)0x3;
                    set_field_770(a0 + 0x27, 3, pcVar10, ar7_00);
                    a0[1] = 0;
                    a0[0x10] = 0;
                    a0[2] = 0x19;
                    a0[3] = 0;
                    pcVar10 = (code *)0x1;
                    *(u8 *)(a0 + 0x20) = 1;
                } else {
                    pcVar10 = (code *)(a0 + 0x27);
                    pcVar2 = (code *)a0[0xe2];
                    iVar3 = speech_request(0x8c35468c, pcVar2, pcVar10, ar7_00);
                    a0[0xe1] = iVar3;
                }
            } else {
                pcVar2 = (code *)0x2;
                set_field_770(a0 + 0x27, 2, pcVar10, ar7_00);
            }
        }
        iVar3 = get_field_124_027930(*(int *)(a2 + 8), pcVar2, pcVar10, ar7_00);
        if (((iVar3 != 2) || (pcVar2 = (code *)(a0 + 0x10), *(int *)pcVar2 != 2)) &&
            (uVar1 = get_field_4_s8(*(int *)(a2 + 4) + 0xa8), (char)uVar1 == '\x01')) {
            pcVar10 = get_field_140_025f70;
            pcVar2 = (code *)get_field_140_025f70(*(int *)(a2 + 4), pcVar2);
            if (pcVar2 == NULL) {
                *(u8 *)(a0 + 0x26) = 10;
                pcVar10 = (code *)0x1b;
                pcVar2 = (code *)0x14;
                recent5_push_unique(*(int *)(a2 + 0x18), 0x14, 0x1b);
            }
        }
    }
    pcVar4 = (code *)ar7_00;
    if ((((a0[0x10] == 0) || (a0[0x10] == 6)) &&
         ((a0[1] != 7 || (pcVar2 = (code *)(int)(char)a0[0x26], (char)a0[0x26] != '\x04')))) &&
        ((*(char *)((int)a0 + 0x83) == '\0' || (*(char *)((int)a0 + 0x83) == '\x01')))) {
        pcVar2 = a1;
        pcVar10 = a2;
        talk_state_switch_10862c(a0, a1, a2, ar7_00);
        pcVar4 = (code *)ar7_00;
    }
    iVar3 = get_field_124_027930(*(int *)(a2 + 8), pcVar2, pcVar10, pcVar4);
    if (((iVar3 != 2) && (iVar3 = (int)(char)a0[0x26], iVar3 < 0xb)) && (-1 < iVar3)) {
        switch (iVar3) {
        case 0:
            pcVar2 = (code *)0x2;
            iVar3 = (**(code **)(*(int *)a1 + 0x11c))(a1, 2, pcVar10, pcVar4);
            if (iVar3 == 0) {
                *(u8 *)(a0 + 0x26) = 3;
            } else {
                pcVar4 = (code *)0x5f;
                a0[2] = 0x5f;
                a0[3] = 0;
                a0[1] = 0xd;
                a0[0x210] = 9;
                a0[0x10] = 9;
                g_8c1eee30 = 9;
            }
            break;
        case 1:
            a0[2] = 0x5f;
            a0[3] = 0;
            a0[1] = 0xd;
            uVar1 = 0x840;
            a0[0x210] = 0x1c;
            a0[0x10] = 0x1c;
            g_8c1eee30 = 0x1c;
            uVar5 = get_field_a4_s16(*(int *)(a2 + 0x18), 0x840);
            if (a0[0x217] != (uVar5 & 0xffff)) {
                uVar5 = get_field_a4_s16(*(int *)(a2 + 0x18), uVar1);
                a0[0x217] = uVar5 & 0xffff;
                a0[0x214] = a0[0x214] + 1;
                if (a0[0x214] == 600) {
                    *(u8 *)(a0 + 0x26) = 2;
                }
            }
            pcVar2 = (code *)0x2;
            pcVar4 = (code *)(**(code **)(*(int *)a1 + 0x11c))(a1, 2, pcVar10, pcVar4);
            if (pcVar4 == NULL) {
                pcVar4 = (code *)0x98;
                pcVar10 = (code *)0x3;
                *(u8 *)(a0 + 0x26) = 3;
            }
            break;
        case 2:
            a0[2] = 0x5f;
            a0[3] = 0;
            a0[1] = 0xd;
            a0[0x210] = 8;
            a0[0x10] = 8;
            g_8c1eee30 = 8;
            pcVar2 = (code *)0x2;
            iVar3 = (**(code **)(*(int *)a1 + 0x11c))(a1, 2, pcVar10, pcVar4);
            if (iVar3 == 0) {
                *(u8 *)(a0 + 0x26) = 3;
            }
            break;
        case 3:
            uVar1 = get_field_0_s8_05eea8(*(int *)(a2 + 0xc));
            *(char *)((int)a0 + 0x99) = (char)uVar1;
            break;
        case 4:
            pcVar4 = (code *)a0[0xe1];
            if (pcVar4 != (code *)0xffffffff) {
                pcVar4 = (code *)0xdc;
                pcVar2 = (code *)(a0 + 0x37);
                pcVar10 = pcVar2;
                iVar3 = strcmp_1041fc("start", pcVar2);
                if (iVar3 == 0) {
                    pcVar4 = speech_stop;
                    speech_stop(0x8c35468c, pcVar2, pcVar10, speech_stop);
                    pcVar10 = (code *)0x3;
                    set_field_770(a0 + 0x27, 3, 3, pcVar4);
                    *(u8 *)(a0 + 0x20) = 1;
                    pcVar2 = (code *)0x384;
                    a0[0xe1] = -1;
                    a0[0x3f] = 0;
                }
            }
            if ((a0[1] != 7) && (a0[0xe1] != -1)) {
                uVar1 = field_ptr_730(a0 + 0x27);
                pcVar2 = (code *)strcmp_1041fc(uVar1, &g_8c1eef1a);
                if (pcVar2 == NULL) {
                    speech_stop(0x8c35468c, 0, pcVar10, pcVar4);
                    a0[0xe1] = -1;
                }
            }
            break;
        default:
            pcVar2 = NULL;
            pcVar4 = set_field_0_u8_02cb7c;
            set_field_0_u8_02cb7c(*(int *)(a2 + 4) + 0xa8, 0, pcVar10, set_field_0_u8_02cb7c);
            break;
        case 7:
            pcVar4 = NULL;
            pcVar10 = *(code **)(a2 + 4);
            set_field_0_u8_02cb7c(pcVar10 + 0xa8, 0, pcVar10, 0);
            pcVar2 = (code *)0x1;
            set_field_1_s8(*(int *)(a2 + 4) + 0xa8, 1);
            break;
        case 8:
            uVar1 = get_field_0_s8_02d3e0(*(int *)(a2 + 4) + 0x90);
            uVar11 = CONCAT13((char)uVar1, (s32)in_stack_fffffef8);
            pcVar4 = (code *)(int)(char)uVar1;
            if (pcVar4 == (code *)0x1) {
                pcVar4 = (code *)0x98;
                pcVar10 = (code *)0xa;
                *(u8 *)(a0 + 0x26) = 10;
            } else {
                if (a0[0x10] != 0x1d) {
                    a0[2] = 99;
                    a0[3] = 0;
                    a0[1] = 0xd;
                    a0[0x210] = 0x1d;
                    a0[0x10] = 0x1d;
                    g_8c1eee30 = 0x1d;
                    uVar1 = 0;
                    counter_set_clamped(*(int *)(a2 + 4) + 0x90, 0, pcVar10);
                    speech_uses_identity_0fa6c8(0x8c35468c, uVar1, pcVar10, pcVar4);
                }
                counter_set_clamped_4(*(int *)(a2 + 4) + 0x90, 0);
                pcVar10 = (code *)(*(int *)(a2 + 4) + 0x18);
                set_field_14_1041e4(pcVar10, 0);
                pcVar2 = NULL;
                set_field_14_1041e4(*(int *)(a2 + 4), 0);
            }
            break;
        case 9:
            a0[3] = 0;
            a0[1] = 0xd;
            a0[2] = 99;
            a0[0x210] = 0x13;
            a0[0x10] = 0x13;
            g_8c1eee30 = 0x13;
            pcVar10 = NULL;
            counter_set_clamped(*(int *)(a2 + 4) + 0x90, 0, 0);
            set_field_14_1041e4(*(int *)(a2 + 4) + 0x18, 0);
            pcVar2 = NULL;
            set_field_14_1041e4(*(int *)(a2 + 4), 0);
            break;
        case 10:
            if ((a0[0x10] != 2) || (a0[1] != 1)) {
                a0[3] = 0;
                a0[1] = 1;
                a0[2] = 99;
                pcVar10 = (code *)0x2;
                a0[0x10] = 2;
                pcVar2 = (code *)(a0 + 0x1b);
                if (*(int *)pcVar2 != 0) {
                    pcVar10 = *(code **)(a0[0x1b] + 8);
                    (**(code **)(pcVar10 + 0x78))(a0[0x1b], pcVar2, pcVar10, pcVar4);
                    a0[0x1b] = 0;
                }
            }
        }
    }
    game_fill_loop_0301f8(a0 + 0x27, pcVar2, pcVar10, pcVar4);
    game_uses_Vec3_dtor_1089e4(a0, a1, a2, pcVar4);
    pcVar2 = a2;
    game_talk_108f3c(a0, a1, a2);
    pcVar10 = get_field_124_027930;
    iVar3 = get_field_124_027930(*(int *)(a2 + 8), get_field_124_027930, pcVar2, pcVar4);
    if (iVar3 != 2) {
        pcVar10 = a2;
        Class_12c3c4_uses_get_field_8_109b18(a0, a2, pcVar2);
        set_field_130(*(int *)(a2 + 8));
        iVar3 = get_field_4_05eed8(a0);
        uVar1 = *(u32 *)(&g_8c1eed94 + a0[3] * 4 + iVar3 * 0xc);
        set_field_40(a0, uVar1);
        if ((a0[1] == 2) &&
            (pcVar4 = (code *)get_field_a0_035724(*(int *)(a2 + 0x18), uVar1), (char)pcVar4 != '\x02')) {
            iVar3 = talk_pick_highest_active(*(int *)(a2 + 4), uVar1, pcVar2);
            if (iVar3 == 0) {
                if (a0[0xe1] == -1) {
                    a0[0x10] = 0;
                }
            } else if (iVar3 == 1) {
                if (a0[0xe1] == -1) {
                    a0[0x10] = 0;
                }
            } else if (iVar3 == 2) {
                if (a0[0xe1] == -1) {
                    a0[0x10] = 0;
                }
            } else if (iVar3 == 4) {
                uVar1 = 900;
                if (a0[0xe1] == -1) {
                    a0[0x10] = 0;
                }
                uVar11 = get_field_8_s8(*(int *)(a2 + 4) + 0x60, 900);
                if ((char)uVar11 < '\x04') {
                    a0[0x10] = 0;
                }
            }
        }
        if ((*(char *)((int)a0 + 0x91) == '\x01') ||
            (pcVar10 = (code *)get_field_124_027930(*(int *)(a2 + 8), uVar1, pcVar2, pcVar4),
             (code *)a0[0x10] != pcVar10)) {
            pcVar2 = (code *)0x1;
            pcVar10 = (code *)a0[0x10];
            timer_uses_reset_fields_2c_6c_031b08(*(int *)(a2 + 8), pcVar10, 1, pcVar4);
        }
    }
    *(u8 *)((int)a0 + 0x83) = 4;
    pcVar4 = (code *)talk_pick_highest_active(*(int *)(a2 + 4), pcVar10, pcVar2);
    if (pcVar4 != (code *)0xffffffff) {
        pcVar2 = NULL;
        pcVar10 = NULL;
        set_field_cc(*(int *)(a2 + 0xc), 0, 0);
    }
    uVar5 = get_field_a4_s16(*(int *)(a2 + 0x18), pcVar10);
    if (a0[0x217] != (uVar5 & 0xffff)) {
        uVar5 = get_field_a4_s16(*(int *)(a2 + 0x18), pcVar10);
        a0[0x217] = uVar5 & 0xffff;
        iVar3 = percent_field_4_of_c(*(int *)(a2 + 4) + 0x90, pcVar10, pcVar2, pcVar4);
        if (iVar3 < 0x31) {
            inc_counter_be_max2(*(int *)(a2 + 0xc));
        } else {
            pcVar4 = dec_counter_be;
            dec_counter_be(*(int *)(a2 + 0xc));
        }
        iVar9 = *(int *)(a2 + 0xc);
        iVar3 = get_field_cc_1041cc(iVar9);
        if (iVar3 == 0) {
            pcVar10 = NULL;
            pcVar4 = set_field_18_05ee64;
            set_field_18_05ee64(*(int *)(a2 + 4) + 0xf8, 0);
        }
        pcVar2 = (code *)0x878;
        if (0 < a0[0x21e]) {
            pcVar10 = (code *)a0[0x21e];
            a0[0x21e] = (int)(pcVar10 + -1);
        }
    }
    if ((a0[0x10] != 0x1d) || (a0[0x10] != 0x1b)) {
        a0[0x23] = 0;
    }
    iVar3 = get_field_124_027930(*(int *)(a2 + 8), pcVar10, pcVar2, pcVar4);
    if ((iVar3 == 2) && (a0[0x25] = 0x36, a0[0xe1] != -1)) {
        ar5_01 = a0 + 0x37;
        iVar3 = strcmp_1041fc("start", ar5_01);
        if (iVar3 == 0) {
            speech_stop(0x8c35468c, ar5_01, pcVar2, pcVar4);
            set_field_770(a0 + 0x27, 3, a0 + 0x27, 0x9c);
            a0[2] = 0;
            a0[3] = 0;
            *(u8 *)(a0 + 0x20) = 1;
            a0[0xe1] = -1;
            a0[0x3f] = 0;
        }
    }
    *(u8 *)((int)a0 + 0x82) = 0;
    *(u8 *)(a0 + 0x21) = 0;
    *(u8 *)((int)a0 + 0x85) = 0;
    *(u8 *)((int)a0 + 0x87) = 0;
    uVar1 = get_field_bc_s8(*(int *)(a2 + 0xc), *(int *)(a2 + 0xc), 0, 0x87);
    *(char *)((int)a0 + 0x9a) = (char)uVar1;
    return 0x9a;
}

/*
 * get_field_cc_1041cc  0x8c1041cc
 * called by: Higyo_update_sleep_light
 */
u32 get_field_cc_1041cc(int a0) {
    return *(u32 *)(0xcc + a0);
}

/*
 * set_field_cc  0x8c1041d8
 * called by: Higyo_update_sleep_light
 */
int set_field_cc(int a0, u32 a1, u32 a2) {
    int iVar1;

    iVar1 = 0xcc;
    *(u32 *)(0xcc + a0) = a1;
    return iVar1;
}

/*
 * set_field_14_1041e4  0x8c1041e4
 * called by: Higyo_update_sleep_light
 */
u32 set_field_14_1041e4(int a0, u32 a1) {
    u32 in_r0;

    *(u32 *)(a0 + 0x14) = a1;
    return in_r0;
}

/*
 * field_ptr_730  0x8c1041ec
 * returns the address of the member at +0x730
 * called by: Higyo_update_sleep_light
 */
int field_ptr_730(int a0) {
    return a0 + 0x730;
}

/*
 * strcmp_1041fc  0x8c1041fc
 * called by: Higyo_update_sleep_light
 */
u32 strcmp_1041fc(u8 *a0, u8 *a1) {
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
 * Class_12c3c4_m2_104264  0x8c104264
 */
u32 Class_12c3c4_m2_104264(int *a0, int a1, int *a2, u32 a3) {
    u32 uVar1;
    int *piVar2;
    int iVar3;
    u32 uVar4;
    int iVar5;
    int *piVar6;

    g_8c1eee30 = a0[0x210];
    g_8c1eee34 = a0[0x211];
    g_8c1eee38 = a0[0x212];
    iVar5 = a1;
    piVar2 = a2;
    uVar1 = get_field_a4_s16(a2[6], a1);
    if ((short)uVar1 == 3) {
        uVar1 = talk_uses_table13019c_find_row_02bef8(a2[1], iVar5, piVar2);
        piVar2 = (int *)(int)(short)uVar1;
        iVar5 = a2[6];
        (**(code **)(*a0 + 0x18))(a0, iVar5, piVar2, a3);
    }
    iVar5 = get_field_13c_028d9c(a2[1], iVar5, piVar2);
    a0[0x218] = iVar5;
    iVar5 = a1;
    piVar2 = a2;
    Class_12c3c4_uses_set_field_38_104f5c(a0, a1, a2, a3);
    iVar3 = (**(code **)(*(int *)(*a2 + 8) + 0xb8))(*a2, iVar5, piVar2, a3);
    if ((iVar3 == 1) && (a0[1] != 1)) {
        iVar3 = get_field_6c_02f46c(*a2);
        if ((iVar3 == 0) && (iVar5 = get_field_70_05f490(*a2), iVar5 == 0)) {
            a0[0xe] = 2;
            a0[1] = 2;
            a0[3] = 0;
            a0[2] = 99;
            list5_push(a0, 199);
            set_field_38_u8(a2[3], 0);
        } else {
            a0[0xe] = 2;
            a0[1] = 0xb;
            a0[2] = 99;
            a0[0x10] = 0xd;
            uVar1 = 0x577;
            list5_push(a0, 0x577);
            if (a0[0x1b] != 0) {
                (**(code **)(*(int *)(a0[0x1b] + 8) + 0x78))(a0[0x1b], uVar1, piVar2, a3);
                a0[0x1b] = 0;
            }
        }
    }
    piVar6 = a2;
    Class_129c70_uses_get_field_4_02f20c(a0, a2, piVar2, a3);
    uVar1 = get_field_4_05eed8(a0);
    piVar2 = a2;
    Higyo_choose_status_event(a0, a1, a2, uVar1);
    iVar5 = get_field_124_027930(a2[2], a1, piVar2, uVar1);
    if (((iVar5 != 2) && (iVar5 = (int)(char)a0[0x26], iVar5 < 0xb)) && (-1 < iVar5)) {
        switch (iVar5) {
        case 0:
            a0[2] = 0x5f;
            a0[3] = 0;
            a0[1] = 0xd;
            a0[0x210] = 9;
            a0[0x10] = 9;
            g_8c1eee30 = 9;
            break;
        case 3:
            uVar4 = get_field_0_s8_05eea8(a2[3]);
            *(char *)((int)a0 + 0x99) = (char)uVar4;
            break;
        case 8:
            a0[2] = 0x5f;
            a0[3] = 0;
            a0[1] = 0xd;
            a0[0x210] = 0x1d;
            a0[0x10] = 0x1d;
            g_8c1eee30 = 0x1d;
            break;
        case 9:
            a0[3] = 0;
            a0[1] = 0xd;
            a0[2] = 99;
            a0[0x210] = 0x13;
            a0[0x10] = 0x13;
            g_8c1eee30 = 0x13;
            break;
        case 10:
            if ((a0[0x10] != 2) || (a0[1] != 1)) {
                a0[3] = 0;
                a0[1] = 1;
                a0[2] = 99;
                a0[0x10] = 2;
                if (a0[0x1b] != 0) {
                    (**(code **)(*(int *)(a0[0x1b] + 8) + 0x78))(a0[0x1b], a1, piVar2, uVar1);
                    a0[0x1b] = 0;
                }
            }
        }
    }
    if (a0[0xe1] != -1) {
        iVar5 = speech_is_playing(0x8c35468c, a1);
        if (iVar5 == 0) {
            a0[0x25] = 0;
            set_field_770(a0 + 0x27, 3, piVar2, uVar1);
            a0[1] = 0;
            a0[0x10] = 0;
            a0[2] = 0x19;
            *(u8 *)((int)a0 + 0x91) = 1;
            a0[3] = 0;
            *(u8 *)(a0 + 0x20) = 1;
            a0[0xe1] = -1;
        } else {
            speech_stop(0x8c35468c, a1, piVar2, uVar1);
        }
        a0[0x25] = a0[0x55];
    }
    if (a0[0x22] == 1) {
        a0[0x22] = 0;
    }
    piVar6 = a2;
    Class_12c3c4_uses_get_field_8_109b18(a0, a2, piVar2);
    set_field_130(a2[2]);
    if (*(char *)((int)a0 + 0x91) != '\x01') {
        iVar5 = get_field_124_027930(a2[2], piVar6, piVar2, uVar1);
        iVar3 = get_field_40_05eea0(a0);
        if (iVar5 == iVar3) {
            return iVar3;
        }
    }
    uVar4 = get_field_40_05eea0(a0);
    uVar1 = timer_uses_reset_fields_2c_6c_031b08(a2[2], uVar4, 1, uVar1);
    return uVar1;
}

/*
 * react_catch_object_b  0x8c10469c
 * another creature's version of react_catch_object
 * strings: "REACTION_CATCH"; "REACTION_CATCH"; "REACTION_CATCH"
 */
int react_catch_object_b(int a0, int a1, int a2, char *a3) {
    int iVar1;
    u32 uVar2;
    u8 auStack_1c[20];

    if (*(int *)(a0 + 4) == 1) {
        iVar1 = 1;
    } else {
        if (*(int *)(a0 + 0x6c) != 0) {
            (**(code **)(*(int *)(*(int *)(a0 + 0x6c) + 8) + 0x78))(*(int *)(a0 + 0x6c), a1, a2, a3);
            *(u32 *)(a0 + 0x6c) = 0;
        }
        Vec3_ctor_copy(auStack_1c, a1 + 0x10, a2, a3);
        Vec3_assign_wrap_05f640(a0, auStack_1c, a2, a3);
        uVar2 = 0xffffffff;
        Vec3_dtor(auStack_1c, 0xffffffff, a2, a3);
        *(u32 *)(a0 + 0x94) = 0x15;
        if (*(int *)(a0 + 900) == -1) {
            set_field_770(a0 + 0x9c, 0, a2, a3);
            a3 = "REACTION_CATCH";
            uVar2 = 0;
            talk_queue_mode2(a0 + 0x9c, 0x25, 0, "REACTION_CATCH", &g_8c1eeec3);
            strcpy(a0 + 0xbc, "REACTION_CATCH");
            strcpy(a0 + 0xdc, &g_8c1eeec3);
            *(u32 *)(a0 + 0xfc) = 0;
            a2 = a0 + 0x9c;
            uVar2 = speech_request(0x8c35468c, *(u32 *)(a0 + 0x388), a2, a3);
            *(u32 *)(a0 + 900) = uVar2;
            *(u32 *)(a0 + 0x14c) = 0;
            uVar2 = 2;
            set_field_770(a0 + 0x9c, 2, a2, a3);
        }
        iVar1 = *(int *)(a0 + 900);
        if (iVar1 != -1) {
            *(u32 *)(a0 + 0x94) = *(u32 *)(a0 + 0x154);
            iVar1 = speech_is_playing(0x8c35468c, uVar2);
            if (iVar1 == 0) {
                *(u32 *)(a0 + 0x94) = 0;
                set_field_770(a0 + 0x9c, 3, a2, a3);
                *(u32 *)(a0 + 4) = 0;
                *(u32 *)(a0 + 0x40) = 0;
                *(u32 *)(a0 + 8) = 0x19;
                *(u8 *)(a0 + 0x91) = 1;
                *(u32 *)(a0 + 0xc) = 0;
                *(u8 *)(a0 + 0x80) = 1;
                iVar1 = 900;
                *(u32 *)(a0 + 900) = 0xffffffff;
            }
        }
    }
    return iVar1;
}

/*
 * Higyo_choose_status_event  0x8c104854
 * Higyo line: picks a status or event (landing, rock push, spinning, in spider, coupling, groan, snore)
 * called by: Class_12c3c4_m2_104264, Higyo_update_sleep_light
 * strings: "STATUS_SNORE"; "STATUS_SNORE"; "STATUS_UNCONSIDERED"; "STATUS_COUPLING" ...
 */
u32 Higyo_choose_status_event(int a0, u32 a1, int *a2, char *a3) {
    u32 uVar1;
    int iVar2;
    u32 uVar3;
    int a5;
    u32 ar5_00;
    int *piVar4;
    code *pcVar5;
    char *pcVar6;
    char cVar7;
    char cVar8;
    u32 in_stack_ffffff84;
    u32 ain0;
    u8 auStack_38[4];
    float fStack_34;
    u8 auStack_28[20];

    cVar8 = '\0';
    cVar7 = '\0';
    piVar4 = a2;
    if (*(int *)(a0 + 0x38) == 2) {
        *(u32 *)(a0 + 0xc) = 0;
        *(u32 *)(a0 + 0x40) = *(u32 *)(&g_8c1eed94 + *(int *)(a0 + 0xc) * 4 + (int)a3 * 0xc);
        game_update_fields_105094(a0, a1, a2, a3);
        uVar3 = 1;
        set_field_38_02f404(a0, 1);
    } else {
        uVar3 = *(u32 *)(&g_8c1eed94 + *(int *)(a0 + 0xc) * 4 + (int)a3 * 0xc);
        *(u32 *)(a0 + 0x40) = uVar3;
    }
    iVar2 = *(int *)(a0 + 0x40);
    if ((iVar2 < 0x22) && (-1 < iVar2)) {
        switch (iVar2) {
        case 0:
            set_field_38_02f404(a0, 3);
            break;
        case 1:
            uVar3 = 3;
            set_field_38_02f404(a0, 3);
            iVar2 = game_uses_get_field_6c_02f414(a0, uVar3, piVar4, a3);
            if (iVar2 == 1) {
                game_vec_109b98(a0, a1, piVar4);
            } else {
                *(u32 *)(a0 + 0x6c) = 0;
                *(u32 *)(a0 + 0x38) = 2;
            }
            game_float_calc_02fdd8(a0, a1);
            break;
        case 2:
            a5 = *(int *)(*a2 + 8);
            iVar2 = (**(code **)(a5 + 0xb4))(*a2, a5, piVar4, a3);
            if (iVar2 == 1) {
                iVar2 = *a2;
                mask_74_fffffffe(iVar2);
                CAnimal_calls_test_0c4e2c(iVar2, a5, piVar4, CAnimal_calls_test_0c4e2c);
            }
            break;
        case 4:
            iVar2 = game_uses_get_field_6c_02f414(a0, uVar3, piVar4, a3);
            if (iVar2 == 1) {
                if (*(int *)(a0 + 0x88) == 1) {
                    take_from_field_6c(*(u32 *)(a0 + 0x6c), 1, piVar4, a3);
                }
                game_vec_109b98(a0, a1, piVar4);
            } else {
                *(u32 *)(a0 + 0x38) = 2;
            }
            break;
        case 6:
            pcVar5 = get_field_a4_s16;
            uVar1 = get_field_a4_s16(a2[6], uVar3);
            iVar2 = libgcc_divide_helper_01031c(uVar1 & 0xffff, 0x25, piVar4);
            if (iVar2 == 0xe) {
                pcVar6 = "STATUS_SNORE";
                uVar3 = 0;
                talk_start_line(a0 + 0x9c, 0x11, 0, "STATUS_SNORE");
                set_field_38_02f404(a0, 3);
            }
            break;
        case 7:
            set_field_38_02f404(a0, 3);
            break;
        case 10:
        case 0x14:
            Vec3_ctor_copy(auStack_28, a2[5] + 0x10, piVar4, a3);
            Vec3_assign_wrap_05f640(a0, auStack_28, piVar4, a3);
            Vec3_dtor(auStack_28, 0xffffffff, piVar4, a3);
            if (cVar8 == '\0') {
                *(u32 *)(a0 + 0x78) = 0x44af0000;
            } else {
                *(u64 *)(a0 + 0x78) = 0x6513e10344af0000;
            }
            break;
        case 0xc:
            iVar2 = game_uses_get_field_6c_02f414(a0, uVar3, piVar4, a3);
            if (iVar2 == 1) {
                if (*(int *)(a0 + 0x88) == 1) {
                    take_from_field_6c(*(u32 *)(a0 + 0x6c), 1, piVar4, a3);
                    *(u32 *)(a0 + 0x88) = 0;
                }
                game_vec_109b98(a0, a1, piVar4);
            } else {
                *(u32 *)(a0 + 0x38) = 2;
                set_field_38_u8(a2[3], 0);
            }
            break;
        case 0x11:
            uVar1 = get_field_a4_s16(a2[6], uVar3);
            uVar3 = 10;
            iVar2 = libgcc_divide_helper_01031c(uVar1 & 0xffff, 10, piVar4);
            if (((iVar2 == 5) && (*(char *)(a0 + 0x855) == '\0')) &&
                (iVar2 = get_field_140_025f70(a2[1], uVar3), iVar2 == 0)) {
                format_int_at_10(0x8c35468c, (int)*(char *)(a0 + 0x855), piVar4, a3);
                iVar2 = game_vec_02fcc4(a0, a2, piVar4, a3);
                if (iVar2 == 0) {
                    talk_start_line(a0 + 0x9c, 10, 0, "STATUS_UNCONSIDERED");
                } else {
                    talk_start_line(a0 + 0x9c, 10, 0, "STATUS_COUPLING");
                }
                *(u8 *)(a0 + 0x855) = 1;
            }
            break;
        case 0x18:
            if (*(int *)(a0 + 0x8c) == 1) {
                inc_field_39_s8(a2[3]);
                ar5_00 = 0;
                set_field_44_u8(a2[3], 0);
                *(char *)(a0 + 0x87c) = *(char *)(a0 + 0x87c) + '\x01';
                *(u32 *)(a0 + 0x878) = 0xb4;
                uVar3 = get_field_39_s8(a2[3]);
                ain0 =
                    CONCAT13((char)((u32)in_stack_ffffff84 >> 0x18), CONCAT12((char)uVar3, (short)in_stack_ffffff84));
                if ((char)uVar3 < '\x04') {
                    uVar3 = get_field_39_s8(a2[3]);
                    ain0 = CONCAT22((short)((u32)ain0 >> 0x10), CONCAT11((char)uVar3, (char)ain0));
                    if ((char)uVar3 == '\x01') {
                        set_field_18(a2[1] + 0xa8, 0);
                    }
                    piVar4 = (int *)0x1b;
                    ar5_00 = 0x17;
                    iVar2 = a2[6];
                    recent5_push_unique(iVar2, 0x17, 0x1b);
                    CAnimal_calls_test_0c4e2c(iVar2, ar5_00, piVar4, a3);
                }
                uVar3 = get_field_39_s8(a2[3]);
                if ((char)uVar3 == '\x04') {
                    *(u8 *)(a0 + 0x98) = 7;
                    set_field_18(a2[1] + 0xa8, 1, piVar4, a3, CONCAT31((s32)((u32)ain0 >> 8), (char)uVar3));
                    set_field_a1_u8(a2[6], 2);
                    recent5_push_unique(a2[6], 0x18, 0x1b);
                }
                talk_start_line(a0 + 0x9c, 0x1f, 0, "EVENT_ROCK_PUSH");
                *(u32 *)(a0 + 0x8c) = 0;
            }
            break;
        case 0x1b:
            if (*(int *)(a0 + 0x8c) == 1) {
                talk_start_line(a0 + 0x9c, 0x2a, 0, "REACTION_GURUGURU");
                *(u32 *)(a0 + 0x8c) = 0;
            }
            break;
        case 0x1d:
            if (*(int *)(a0 + 0x8c) == 1) {
                a3 = "EVENT_LANDING";
                piVar4 = NULL;
                talk_start_line(a0 + 0x9c, 0x2a, 0, "EVENT_LANDING");
                *(u32 *)(a0 + 0x8c) = 0;
            }
            Vec3_ctor_copy_wrap_02f670(*a2, *a2, piVar4, a3, auStack_38);
            if (cVar8 == '\0') {
                pcVar5 = (code *)0x432a0000;
            } else {
                fStack_34 = 170.0;
                pcVar5 = Vec3_dtor;
            }
            Vec3_dtor(auStack_38, 0xffffffff, piVar4, a3);
            if (cVar7 != '\0' || (float)pcVar5 <= fStack_34) {
                talk_start_line(a0 + 0x9c, 0x14, 0, "STATUS_GROAN");
            }
            break;
        case 0x1f:
            iVar2 = game_uses_get_field_6c_02f414(a0, uVar3, piVar4, a3);
            if (iVar2 == 1) {
                pcVar6 = "REACTION_INSPIDER";
                uVar3 = 0;
                talk_queue_mode2(a0 + 0x9c, 0x26, 0, "REACTION_INSPIDER", &g_8c1eeec3);
                game_vec_109b98(a0, a1, uVar3);
            } else {
                *(u32 *)(a0 + 0x38) = 2;
                if (*(int *)(a0 + 0x6c) != 0) {
                    *(u32 *)(a0 + 0x6c) = 0;
                }
            }
        }
    }
    return 1;
}

/*
 * inc_field_39_s8  0x8c104f44
 * called by: Higyo_choose_status_event
 */
u32 inc_field_39_s8(int a0) {
    *(char *)(a0 + 0x39) = *(char *)(a0 + 0x39) + '\x01';
    return 0x39;
}

/*
 * Class_12c3c4_uses_set_field_38_104f5c  0x8c104f5c
 * area name: only called from Class_12c3c4 methods; behaviour name: its main named callee is set_field_38_02f404
 * called by: Class_12c3c4_m2_104264, Higyo_update_sleep_light
 */
int Class_12c3c4_uses_set_field_38_104f5c(int a0, u32 a1, int a2, u32 a3) {
    int iVar1;
    u32 uVar2;
    char cVar3;

    cVar3 = '\0';
    if (*(int *)(a0 + 0x3c) == 0) {
        get_field_124_027930(*(u32 *)(a2 + 8), a1, a2, a3);
        uVar2 = a1;
        iVar1 = a2;
        Higyo_gratification_events(a0, a1, a2, a3);
        *(int *)(a0 + 0xc) = *(int *)(a0 + 0xc) + 1;
        *(u32 *)(a0 + 0x40) = *(u32 *)(&g_8c1eed94 + *(int *)(a0 + 0xc) * 4 + *(int *)(a0 + 4) * 0xc);
        if ((*(int *)(a0 + 0x40) == 0x22) || (*(int *)(a0 + 0xc) == 3)) {
            *(u32 *)(a0 + 0x40) = 0;
            *(u32 *)(a0 + 8) = 0;
            if (*(int *)(a0 + 4) == 1) {
                *(int *)(a0 + 0xc) = *(int *)(a0 + 0xc) + -1;
                a1 = uVar2;
                a2 = iVar1;
            } else {
                if (cVar3 == '\0') {
                    *(u32 *)(a0 + 0x70) = 0xc7c35000;
                } else {
                    *(u64 *)(a0 + 0x70) = 0x8c02f404c7c35000;
                }
                *(u32 *)(a0 + 0xc) = 0;
                a1 = 0;
                set_field_38_02f404(a0, 0);
                a2 = iVar1;
            }
        } else {
            game_update_fields_105094(a0, a1, a2, a3);
        }
    }
    if (*(int *)(a0 + 0x3c) == 2) {
        a1 = 2;
        set_field_38_02f404(a0, 2);
    }
    iVar1 = *(int *)(a0 + 0x38);
    if (iVar1 == 2) {
        *(u32 *)(a0 + 4) = 0;
        *(u32 *)(a0 + 0x40) = 0;
        *(u32 *)(a0 + 8) = 0;
        *(u32 *)(a0 + 0xc) = 0;
        iVar1 = 0;
        if (*(int *)(a0 + 0x6c) != 0) {
            (**(code **)(*(int *)(*(int *)(a0 + 0x6c) + 8) + 0x78))(*(int *)(a0 + 0x6c), a1, a2, a3);
            iVar1 = 0x6c;
            *(u32 *)(a0 + 0x6c) = 0;
        }
    }
    return iVar1;
}

/*
 * game_update_fields_105094  0x8c105094
 * area name: game code; nothing names its area yet; behaviour name: conditionally writes members
 * called by: Class_12c3c4_uses_set_field_38_104f5c, Higyo_choose_status_event
 */
u32 game_update_fields_105094(int a0, u32 a1, u32 a2, u32 a3) {
    u32 uVar1;
    int iVar2;
    u32 uVar3;

    uVar3 = 0xffffffff;
    if ((*(int *)(a0 + 0x38) == 2) && (*(int *)(a0 + 0x6c) != 0)) {
        (**(code **)(*(int *)(*(int *)(a0 + 0x6c) + 8) + 0x78))(*(int *)(a0 + 0x6c), a1, a2, a3);
        *(u32 *)(a0 + 0x6c) = 0;
    }
    iVar2 = *(int *)(a0 + 0x40);
    uVar1 = 0x20;
    if ((iVar2 < 0x21) && (uVar1 = 1, 0 < iVar2)) {
        /* WARNING: Could not recover jumptable at 0x8c105114. Too many branches */
        /* WARNING: Treating indirect jump as call */
        uVar3 = (*(code *)(&(&DATA_8c10519c))[iVar2 + -1])(uVar3);
        return uVar3;
    }
    return uVar1;
}

/*
 * Higyo_gratification_events  0x8c1063a8
 * Higyo line: after eating, copulation, groaning and rock pushing
 * called by: Class_12c3c4_uses_set_field_38_104f5c
 * strings: "GRATIFIC_EAT"; "GRATIFIC_COPULATION_DONE"; "GRATIFIC_COPULATION_DONE"; "GRATIFIC_GROAN_DONE" ...
 */
u8 *Higyo_gratification_events(int a0, int *a1, int *a2, char *a3) {
    int iVar1;
    u8 *puVar2;
    u32 ar6_00;
    u32 uVar3;
    int *ar4_00;
    char *ar7_00;
    int *piVar4;
    u32 uVar5;
    int *piVar6;
    u32 a7;
    code *ar7_01;
    int iVar7;
    u32 in_stack_ffffff6c;

    iVar7 = 0;
    piVar4 = a1;
    piVar6 = a2;
    iVar1 = get_field_124_027930(a2[2], a1, a2, a3);
    puVar2 = (u8 *)0x21;
    if ((iVar1 < 0x22) && (puVar2 = (u8 *)0x1, 0 < iVar1)) {
        puVar2 = (&switchD_8c1063ec::switchdataD_8c1063f4)[iVar1 + -1];
        switch (iVar1) {
        case 4:
            iVar1 = game_uses_get_field_6c_02f414(a0, piVar4, piVar6, a3);
            if (iVar1 == 1) {
                iVar1 = get_field_24_05c284(*(u32 *)(a0 + 0x6c), piVar4);
                if ((iVar1 == 0xf) && (a3 = (char *)get_field_13c_028d9c(a2[1], piVar4, piVar6), a3 == (char *)0x2)) {
                    piVar4 = (int *)0x1e;
                    take_from_field_6c(*(u32 *)(a0 + 0x6c), 0x1e, piVar6, 2);
                } else {
                    iVar1 = get_field_24_05c284(*(u32 *)(a0 + 0x6c), piVar4);
                    if (iVar1 == 0xf) {
                        uVar3 = get_field_6c_02f46c(*(u32 *)(a0 + 0x6c));
                        piVar4 = (int *)take_from_field_6c(*(u32 *)(a0 + 0x6c), uVar3, piVar6, a3);
                        game_calls_update_fields_05fec4(a2[1]);
                    } else {
                        piVar4 = (int *)take_from_field_6c(*(u32 *)(a0 + 0x6c), 0x1e, piVar6, a3);
                        game_calls_update_fields_05fec4(a2[1]);
                    }
                }
            }
            if (*(int *)(a0 + 0x6c) == 0) {
                puVar2 = NULL;
            } else {
                (**(code **)(*(int *)(*(int *)(a0 + 0x6c) + 8) + 0x78))(*(int *)(a0 + 0x6c), piVar4, piVar6, a3);
                *(u32 *)(a0 + 0x6c) = 0;
                puVar2 = (u8 *)talk_start_line(a0 + 0x9c, 2, 0, "GRATIFIC_EAT");
            }
            break;
        case 6:
            *(int *)(a0 + 0xc) = *(int *)(a0 + 0xc) + -1;
            puVar2 = (u8 *)0x32;
            *(u32 *)(a0 + 8) = 0x32;
            break;
        case 8:
            puVar2 = (u8 *)0x98;
            *(u8 *)(a0 + 0x98) = 3;
            break;
        case 9:
            *(u32 *)(a0 + 8) = 0;
            *(u32 *)(a0 + 0xc) = 0;
            *(u32 *)(a0 + 4) = 0;
            *(u32 *)(a0 + 0x40) = 0;
            puVar2 = (u8 *)0x98;
            *(u8 *)(a0 + 0x98) = 3;
            break;
        case 0xb:
            if (*(int *)(a0 + 900) == -1) {
                puVar2 = (u8 *)0xffffffff;
            } else {
                puVar2 = (u8 *)set_field_770(a0 + 0x9c, 2, piVar6, a3);
            }
            break;
        case 0xc:
            iVar1 = game_uses_get_field_6c_02f414(a0, piVar4, piVar6, a3);
            if (iVar1 == 1) {
                uVar3 = get_field_6c_02f46c(*(u32 *)(a0 + 0x6c));
                uVar3 = take_from_field_6c(*(u32 *)(a0 + 0x6c), uVar3, piVar6, a3);
                game_calls_update_fields_05fec4(a2[1]);
                piVar6 = *(int **)(*(int *)(a0 + 0x6c) + 8);
                (*(code *)piVar6[0x1e])(*(int *)(a0 + 0x6c), uVar3, piVar6, a3);
                *(u32 *)(a0 + 0x6c) = 0;
                uVar3 = talk_uses_table13019c_find_row_02bef8(a2[1], talk_uses_table13019c_find_row_02bef8, piVar6);
                if ((short)uVar3 == 2) {
                    piVar4 = NULL;
                    while (true) {
                        uVar3 = 3;
                        ar4_00 = a1;
                        iVar1 = (**(code **)(*a1 + 0x11c))(a1, 3, piVar6, a3);
                        if (iVar1 <= (int)piVar4)
                            break;
                        uVar3 = 3;
                        piVar6 = piVar4;
                        iVar1 = (**(code **)(*a1 + 0x100))(a1, 3, piVar4, a3);
                        iVar1 = (**(code **)(*(int *)(iVar1 + 8) + 0x114))(iVar1, uVar3, piVar6, a3);
                        if (iVar1 == 2) {
                            uVar3 = 3;
                            iVar1 = (**(code **)(*a1 + 0x100))(a1, 3, piVar4, a3);
                            piVar6 = *(int **)(iVar1 + 8);
                            iVar1 = (*(code *)piVar6[0x2d])(iVar1, uVar3, piVar6, a3);
                            if (iVar1 == 1) {
                                uVar3 = 3;
                                piVar6 = piVar4;
                                iVar1 = (**(code **)(*a1 + 0x100))(a1, 3, piVar4, a3);
                                piVar6 = (int *)(**(code **)(*(int *)(iVar1 + 8) + 0xb8))(iVar1, uVar3, piVar6, a3);
                                if (piVar6 == NULL) {
                                    iVar7 = iVar7 + 1;
                                }
                            }
                        }
                        piVar4 = (int *)((int)piVar4 + 1);
                    }
                    if (iVar7 == 2) {
                        piVar6 = (int *)0x1b;
                        recent5_push_unique(a2[6], 0xf, 0x1b);
                        uVar3 = 1;
                        ar4_00 = (int *)a2[3];
                        set_field_0_u8_061180(ar4_00, 1);
                    }
                    CAnimal_calls_test_0c4e2c(ar4_00, uVar3, piVar6, a3);
                }
            }
            puVar2 = (u8 *)set_field_38_u8(a2[3], 0);
            break;
        case 0xe:
            counter_set_clamped(a2[1] + 0x90, 0, piVar6);
            uVar3 = get_field_13c_028d9c(a2[1], a2[1], piVar6);
            puVar2 = (u8 *)recent5_push_unique(a2[6], 0x11, uVar3);
            break;
        case 0x10:
            (**(code **)(*(int *)(*a2 + 8) + 0xbc))(*a2, piVar4, piVar6, a3);
            uVar3 = (**(code **)(*a1 + 0x148))(a1, piVar4, piVar6, a3);
            uVar5 = table13019c_find_row(a2[1]);
            ar6_00 = get_field_140_025f70(a2[1], piVar4);
            a7 = 1;
            iVar1 = (int)(short)uVar5;
            set_byte_grid_75(uVar3, iVar1, ar6_00, 1);
            uVar3 = (**(code **)(*a1 + 0x148))(a1, iVar1, ar6_00, a7);
            uVar5 = table13019c_find_row(a2[1]);
            iVar1 = get_field_140_025f70(a2[1], iVar1);
            uVar3 = get_byte_75_2col(uVar3, (int)(short)uVar5, 1 - iVar1);
            if ((char)uVar3 == '\x01') {
                puVar2 = (u8 *)0x1;
            } else {
                puVar2 = (u8 *)(*(int *)(a0 + 0xc) + -1);
                *(u8 **)(a0 + 0xc) = puVar2;
            }
            break;
        case 0x11:
            iVar1 = get_field_140_025f70(a2[1], piVar4);
            if (iVar1 == 1) {
                *(u8 *)(a0 + 0x98) = 5;
                (**(code **)(*(int *)(*a2 + 8) + 0xc0))(*a2, piVar4, piVar6, a3);
                piVar4 = (int *)0x1;
                set_field_1_s8(a2[1] + 0xa8, 1);
                g_8c13bcc4 = 1;
            }
            iVar1 = get_field_140_025f70(a2[1], piVar4);
            if (iVar1 == 0) {
                *(u8 *)(a0 + 0x98) = 10;
                speech_uses_identity_0fa688(0x8c35468c, piVar4, piVar6, a3);
                a3 = "GRATIFIC_COPULATION_DONE";
                talk_start_line(a0 + 0x9c, 9, 0, "GRATIFIC_COPULATION_DONE");
                piVar6 = (int *)0x1b;
                recent5_push_unique(a2[6], 0x14, 0x1b);
            }
            *(u32 *)(a0 + 4) = 0;
            *(u32 *)(a0 + 0x40) = 0;
            *(u32 *)(a0 + 8) = 0;
            *(u32 *)(a0 + 0xc) = 0;
            set_field_18(a2[1] + 0xa8, 0);
            uVar3 = 1;
            iVar1 = a2[1] + 0xa8;
            set_field_4_s8(iVar1, 1);
            puVar2 = (u8 *)CAnimal_calls_test_0c4e2c(iVar1, uVar3, piVar6, a3);
            break;
        case 0x13:
            *(u8 *)(a0 + 0x98) = 10;
            g_8c13bcc4 = 1;
            uVar3 = get_field_13c_028d9c(a2[1], piVar4, piVar6);
            uVar5 = 0x19;
            recent5_push_unique(a2[6], 0x19, uVar3);
            speech_uses_identity_0fa688(0x8c35468c, uVar5, uVar3, a3);
            ar7_00 = "GRATIFIC_GROAN_DONE";
            uVar3 = 0;
            iVar1 = a0 + 0x9c;
            talk_start_line(iVar1, 0x1f, 0, "GRATIFIC_GROAN_DONE");
            puVar2 = (u8 *)CAnimal_calls_test_0c4e2c(iVar1, CAnimal_calls_test_0c4e2c, uVar3, ar7_00);
            break;
        case 0x18:
            speech_uses_identity_0fa688(0x8c35468c, piVar4, piVar6, a3);
            uVar3 = get_field_39_s8(a2[3]);
            uVar5 = CONCAT13((char)uVar3, (s32)in_stack_ffffff6c);
            if ('\x03' < (char)uVar3) {
                uVar3 = get_field_39_s8(a2[3]);
                uVar5 = CONCAT13((char)((u32)uVar5 >> 0x18), CONCAT12((char)uVar3, (short)uVar5));
                format_int_at_10(0x8c35468c, (int)(char)uVar3, piVar6, a3);
                a3 = "EVENT_AFTER_ROCK_PUSH";
                piVar6 = NULL;
                talk_start_line(a0 + 0x9c, 0x26, 0, "EVENT_AFTER_ROCK_PUSH");
                counter_set_clamped_4(a2[1] + 0x90, 1);
                set_field_0_u8(a2[1], 0);
                set_field_0_u8(a2[1] + 0x18, 0);
                set_field_0_u8(a2[1] + 0x60, 0);
                set_field_0_u8(a2[1] + 0x30, 0);
                piVar4 = (int *)0x1;
                set_field_18(a2[1] + 0xa8, 1);
                *(u32 *)(a0 + 0x870) = 1;
            }
            uVar3 = get_field_39_s8(a2[3]);
            puVar2 = (u8 *)(int)(char)uVar3;
            if ((char)uVar3 < '\x04') {
                ar7_01 = recent5_push_unique;
                recent5_push_unique(a2[6], 0x17, 0x1b);
                iVar1 = a2[3];
                uVar3 = get_field_39_s8(iVar1);
                format_int_at_10(0x8c35468c, (int)(char)uVar3, iVar1, ar7_01);
                if (*(char *)(a0 + 0x87c) < '\x03') {
                    format_int_at_14(0x8c35468c, 0, iVar1, ar7_01);
                } else {
                    format_int_at_14(0x8c35468c, 1, iVar1, ar7_01);
                }
                puVar2 = (u8 *)talk_start_line(a0 + 0x9c, 0x1e, 0, "EVENT_AFTER_ROCK_PUSH");
            }
            break;
        case 0x19:
            puVar2 = (u8 *)talk_queue_mode1(a0 + 0x9c, 0x1f, 0, "REACTION_AFTER_DEKOPIN", &g_8c1eeec3);
            break;
        case 0x1f:
            if (*(int *)(a0 + 0x6c) == 0) {
                puVar2 = NULL;
            } else {
                puVar2 = (u8 *)0x6c;
                *(u32 *)(a0 + 0x6c) = 0;
            }
        }
    }
    return puVar2;
}

/*
 * Higyo_react_environment  0x8c106c84
 * Higyo line: reactions to oxygen lack, low temperature and the switch being turned off
 * called by: Higyo_update_sleep_light
 * strings: "REACTION_TEMP_LACK"; "REACTION_TEMP_LACK"; "REACTION_SWITCH_OFF"; "REACTION_SWITCH_OFF" ...
 */
u32 *Higyo_react_environment(int a0, int *a1, int a2, char *a3) {
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
    if ((*(int *)(a0 + 0x880) == 0) &&
        (iVar1 = (**(code **)(*a1 + 0x1ac))(a1, 0, a2, a3), *(int *)(a0 + 0x868) != iVar1)) {
        uVar4 = 0;
        uVar2 = (**(code **)(*a1 + 0x1ac))(a1, 0, a6, a3);
        *(u32 *)(a0 + 0x868) = uVar2;
        if (*(int *)(a0 + 0x868) == 0) {
            (**(code **)(*a1 + 0x178))(a1, uVar4, a6, a3);
            if (cVar8 == '\0') {
                in_dr0 = CONCAT44(0x41600000, (int)(in_dr0 >> 0x20));
            } else {
                in_dr0 = 0x416e666641600000;
            }
            if (cVar7 != '\0' || (float)(in_dr0 >> 0x20) <= (float)in_dr0) {
                (**(code **)(*a1 + 0x178))(a1, uVar4, a6, a3);
                if (cVar8 == '\0') {
                    in_dr0 = CONCAT44(0x416e6666, (int)(in_dr0 >> 0x20));
                } else {
                    in_dr0 = 0x8c02602c416e6666;
                }
                if ((cVar7 != '\0' || (float)in_dr0 <= (float)(in_dr0 >> 0x20)) &&
                    (uVar2 = get_field_a4_s16(*(u32 *)(a2 + 0x18), uVar4), 2 < (u16)uVar2)) {
                    a3 = "REACTION_TEMP_LACK";
                    a6 = 0;
                    talk_start_line(a0 + 0x9c, 0x2c, 0, "REACTION_TEMP_LACK");
                    *(u32 *)(a0 + 0x880) = 1;
                }
            }
        }
    }
    if (*(int *)(a0 + 0x884) == 0) {
        uVar2 = 0;
        iVar1 = (**(code **)(*a1 + 0x1a4))(a1, 0, a6, a3);
        if (iVar1 == 2) {
            iVar1 = get_field_13c_028d9c(*(u32 *)(a2 + 4), uVar2, a6);
            uVar4 = (u32)(in_dr0 >> 0x20);
            if (iVar1 == 4) {
                (**(code **)(*a1 + 0x178))(a1, uVar2, a6, a3);
                if (cVar8 == '\0') {
                    in_dr0 = CONCAT44(0x41c8cccd, uVar4);
                } else {
                    in_dr0 = 0x88841c8cccd;
                }
                if ((cVar7 != '\0' || (float)(in_dr0 >> 0x20) <= (float)in_dr0) &&
                    (uVar2 = get_field_a4_s16(*(u32 *)(a2 + 0x18), uVar2), 2 < (u16)uVar2)) {
                    a3 = "REACTION_SWITCH_OFF";
                    a6 = 0;
                    talk_start_line(a0 + 0x9c, 0x2c, 0, "REACTION_SWITCH_OFF");
                    *(u32 *)(a0 + 0x884) = 1;
                }
            } else {
                (**(code **)(*a1 + 0x178))(a1, uVar2, a6, a3);
                if (cVar8 == '\0') {
                    in_dr0 = CONCAT44(0x41a0cccd, uVar4);
                } else {
                    in_dr0 = 0x2dc41a0cccd;
                }
                if ((cVar7 != '\0' || (float)(in_dr0 >> 0x20) <= (float)in_dr0) &&
                    (uVar2 = get_field_a4_s16(*(u32 *)(a2 + 0x18), uVar2), 2 < (u16)uVar2)) {
                    a3 = "REACTION_SWITCH_OFF";
                    a6 = 0;
                    talk_start_line(a0 + 0x9c, 0x2c, 0, "REACTION_SWITCH_OFF");
                    *(u32 *)(a0 + 0x884) = 1;
                }
            }
        }
    }
    puVar3 = *(u32 **)(a0 + 0x888);
    if ((puVar3 == NULL) &&
        (puVar3 = (u32 *)(**(code **)(*a1 + 0x1ac))(a1, 1, a6, a3), *(u32 **)(a0 + 0x86c) != puVar3)) {
        uVar4 = 1;
        uVar2 = (**(code **)(*a1 + 0x1ac))(a1, 1, a6, a3);
        *(u32 *)(a0 + 0x86c) = uVar2;
        puVar3 = *(u32 **)(a0 + 0x86c);
        if (puVar3 == NULL) {
            (**(code **)(*a1 + 0x17c))(a1, uVar4, a6, a3);
            if (cVar8 == '\0') {
                in_dr0 = in_dr0 >> 0x20;
            }
            puVar3 = &g_8c106f4c;
            if (cVar8 == '\0') {
                fVar5 = (float)in_dr0;
                fVar6 = 65.0;
            } else {
                fVar5 = 65.0;
                fVar6 = 65.9;
            }
            if (cVar7 != '\0' || fVar6 <= fVar5) {
                (**(code **)(*a1 + 0x17c))(a1, uVar4, a6, a3);
                if (cVar8 == '\0') {
                    fVar5 = fVar6;
                }
                puVar3 = (u32 *)&g_8c106f50;
                if (cVar8 == '\0') {
                    fVar6 = 65.9;
                } else {
                    fVar5 = 65.9;
                    fVar6 = 1.05378e-42;
                }
                if (cVar7 != '\0' || fVar5 <= fVar6) {
                    uVar2 = get_field_a4_s16(*(u32 *)(a2 + 0x18), uVar4);
                    puVar3 = (u32 *)0x3;
                    if (2 < (u16)uVar2) {
                        talk_start_line(a0 + 0x9c, 0x2c, 0, "REACTION_OXYGEN_LACK");
                        puVar3 = (u32 *)0x888;
                        *(u32 *)(a0 + 0x888) = 1;
                    }
                }
            }
        }
    }
    return puVar3;
}

/*
 * Higyo_react_tap  0x8c106f58
 * Higyo line: tap responses and being woken by a tap
 * called by: Higyo_update_sleep_light
 * strings: "REACTION_TAP_RESPONSE"; "REACTION_WAKED_TAP"; "REACTION_WAKED_TAP"
 */
u32 Higyo_react_tap(int a0, u32 a1, int a2, u32 a3) {
    u32 uVar1;
    int iVar2;
    int iVar3;
    code *ar7_00;
    char cVar4;
    u8 auStack_70[16];
    u8 auStack_60[16];
    u8 auStack_50[16];
    u8 auStack_40[16];
    u8 auStack_30[16];
    u8 auStack_20[20];

    cVar4 = '\0';
    if (((*(char *)(a0 + 0x81) == '\x01') && (1 < *(int *)(a0 + 0x104))) && (*(int *)(a0 + 4) != 0xd)) {
        iVar3 = a2;
        iVar2 = get_field_124_027930(*(u32 *)(a2 + 8), a1, a2, a3);
        if (iVar2 == 0) {
            iVar2 = get_field_13c_028d9c(*(u32 *)(a2 + 4), a1, iVar3);
            if (iVar2 == 2) {
                uVar1 = get_field_a4_s16(*(u32 *)(a2 + 0x18), a1);
                *(u32 *)(a0 + 4) = 0xd;
                *(u32 *)(a0 + 8) = 0x5f;
                *(u32 *)(a0 + 0xc) = 0;
                iVar2 = libgcc_divide_helper_010284(uVar1 & 0xffff, 0x3c, iVar3);
                if (iVar2 == 0) {
                    *(u32 *)(a0 + 0x40) = 0x15;
                    *(u32 *)(a0 + 0x840) = 0x15;
                    g_8c1eee30 = 0x15;
                    *(u32 *)(a0 + 0x844) = 0x22;
                    g_8c1eee34 = 0x22;
                    *(u32 *)(a0 + 0x848) = 0x22;
                    g_8c1eee38 = 0x22;
                } else if (iVar2 == 1) {
                    *(u32 *)(a0 + 0x40) = 0xb;
                    *(u32 *)(a0 + 0x840) = 0xb;
                    g_8c1eee30 = 0xb;
                    *(u32 *)(a0 + 0x844) = 0x1e;
                    g_8c1eee34 = 0x1e;
                    *(u32 *)(a0 + 0x848) = 0x22;
                    g_8c1eee38 = 0x22;
                } else {
                    Vec3_ctor_copy(auStack_40, *(int *)(a2 + 0x14) + 0x10, iVar3, a3);
                    Vec3_assign_wrap_063818(a0, auStack_40, iVar3, a3);
                    Vec3_dtor(auStack_40, 0xffffffff, iVar3, a3);
                    Vec3_ctor_copy(auStack_50, *(int *)(a2 + 0x14) + 0x10, iVar3, a3);
                    Vec3_assign_wrap_05f640(a0, auStack_50, iVar3, a3);
                    Vec3_dtor(auStack_50, 0xffffffff, iVar3, a3);
                    if (cVar4 == '\0') {
                        *(u32 *)(a0 + 0x30) = 0x44960000;
                        *(u32 *)(a0 + 0x78) = 0x44af0000;
                    } else {
                        *(u64 *)(a0 + 0x30) = 0x44af000044960000;
                        *(u64 *)(a0 + 0x78) = 0x84044af0000;
                    }
                    *(u32 *)(a0 + 0x40) = 0x14;
                    *(u32 *)(a0 + 0x840) = 0x14;
                    g_8c1eee30 = 0x14;
                    *(u32 *)(a0 + 0x844) = 0x22;
                    g_8c1eee34 = 0x22;
                    *(u32 *)(a0 + 0x848) = 0x22;
                    g_8c1eee38 = 0x22;
                }
            } else if ((iVar2 == 3) || (iVar2 == 4)) {
                Vec3_ctor_copy(auStack_20, *(int *)(a2 + 0x14) + 0x10, iVar3, a3);
                Vec3_assign_wrap_063818(a0, auStack_20, iVar3, a3);
                Vec3_dtor(auStack_20, 0xffffffff, iVar3, a3);
                ar7_00 = Vec3_ctor_copy;
                Vec3_ctor_copy(auStack_30, *(int *)(a2 + 0x14) + 0x10, iVar3, Vec3_ctor_copy);
                Vec3_assign_wrap_05f640(a0, auStack_30, iVar3, ar7_00);
                Vec3_dtor(auStack_30, 0xffffffff, iVar3, ar7_00);
                if (cVar4 == '\0') {
                    *(u32 *)(a0 + 0x30) = 0x44960000;
                    *(u32 *)(a0 + 0x78) = 0x44af0000;
                } else {
                    *(u64 *)(a0 + 0x30) = 0x44af000044960000;
                    *(u64 *)(a0 + 0x78) = 0x8c1eee9044af0000;
                }
                talk_queue_mode1(a0 + 0x9c, 0, 0, "REACTION_TAP_RESPONSE", &g_8c1eeec3);
                *(u32 *)(a0 + 4) = 0xd;
                *(u32 *)(a0 + 8) = 0x4b;
                *(u32 *)(a0 + 0xc) = 0;
                *(u32 *)(a0 + 0x40) = 0x14;
                *(u32 *)(a0 + 0x840) = 0x14;
                g_8c1eee30 = 0x14;
                *(u32 *)(a0 + 0x844) = 0x22;
                g_8c1eee34 = 0x22;
                *(u32 *)(a0 + 0x848) = 0x22;
                g_8c1eee38 = 0x22;
            }
        } else {
            iVar2 = get_field_124_027930(*(u32 *)(a2 + 8), a1, iVar3, a3);
            if (iVar2 == 6) {
                set_field_2c(*(int *)(a2 + 4) + 0xf8, 1, iVar3, a3);
                talk_start_line(a0 + 0x9c, 0x22, 0, "REACTION_WAKED_TAP");
            }
        }
    } else if (*(char *)(a0 + 0x83) == '\x02') {
        iVar3 = a2;
        iVar2 = get_field_124_027930(*(u32 *)(a2 + 8), a1, a2, a3);
        if (iVar2 == 0) {
            iVar2 = get_field_13c_028d9c(*(u32 *)(a2 + 4), a1, iVar3);
            if (iVar2 == 2) {
                *(u32 *)(a0 + 4) = 0xd;
                *(u32 *)(a0 + 8) = 0x55;
                *(u32 *)(a0 + 0xc) = 0;
                *(u32 *)(a0 + 0x40) = 0x15;
                *(u32 *)(a0 + 0x840) = 0x15;
                g_8c1eee30 = 0x15;
                *(u32 *)(a0 + 0x844) = 0x22;
                g_8c1eee34 = 0x22;
                *(u32 *)(a0 + 0x848) = 0x22;
                g_8c1eee38 = 0x22;
            } else if ((iVar2 == 3) || (iVar2 == 4)) {
                Vec3_ctor_copy(auStack_60, *(int *)(a2 + 0x14) + 0x10, iVar3, a3);
                Vec3_assign_wrap_063818(a0, auStack_60, iVar3, a3);
                Vec3_dtor(auStack_60, 0xffffffff, iVar3, a3);
                Vec3_ctor_copy(auStack_70, *(int *)(a2 + 0x14) + 0x10, iVar3, a3);
                Vec3_assign_wrap_05f640(a0, auStack_70, iVar3, a3);
                Vec3_dtor(auStack_70, 0xffffffff, iVar3, a3);
                if (cVar4 == '\0') {
                    *(u32 *)(a0 + 0x30) = 0x44960000;
                    *(u32 *)(a0 + 0x78) = 0x44af0000;
                } else {
                    *(u64 *)(a0 + 0x30) = 0x44af000044960000;
                    *(u64 *)(a0 + 0x78) = 0x84044af0000;
                }
                *(u32 *)(a0 + 4) = 0xd;
                *(u32 *)(a0 + 8) = 0x4b;
                *(u32 *)(a0 + 0xc) = 0;
                *(u32 *)(a0 + 0x40) = 0xb;
                *(u32 *)(a0 + 0x840) = 0xb;
                g_8c1eee30 = 0xb;
                *(u32 *)(a0 + 0x844) = 0x1e;
                g_8c1eee34 = 0x1e;
                *(u32 *)(a0 + 0x848) = 0x22;
                g_8c1eee38 = 0x22;
            }
        } else {
            iVar2 = get_field_124_027930(*(u32 *)(a2 + 8), get_field_124_027930, iVar3, a3);
            if (iVar2 == 6) {
                set_field_2c(*(int *)(a2 + 4) + 0xf8, 2, iVar3, a3);
                talk_start_line(a0 + 0x9c, 0x23, 0, "REACTION_WAKED_TAP");
            }
        }
    }
    *(u8 *)(a0 + 0x81) = 0;
    return 0x81;
}

/*
 * Higyo_attention_events  0x8c107590
 * Higyo line: attention requests, the quiz, the worm box and rock-push intervals
 * called by: Higyo_update_sleep_light
 * strings: "EVENT_QUIZ"; "EVENT_QUIZ"; "EVENT_QUIZ"; "EVENT_QUIZ" ...
 */
int Higyo_attention_events(code *a0, code *a1, code *a2, char *a3) {
    u32 uVar1;
    u32 uVar2;
    int iVar3;
    code *pcVar4;
    char *pcVar5;
    code *ar7_00;
    code *pcVar6;
    char cVar7;
    u8 auStack_70[16];
    u8 auStack_60[16];
    u8 auStack_50[16];
    u8 auStack_40[16];
    u8 auStack_30[16];
    u8 auStack_20[20];

    cVar7 = '\0';
    pcVar6 = a2;
    pcVar4 = a1;
    uVar1 = talk_uses_table13019c_find_row_02bef8(*(int *)(a2 + 4), a1, a2);
    if (((6 < (short)uVar1) && (iVar3 = percent_field_4_of_c(*(int *)(a2 + 4) + 0x90, a1, pcVar6, a3), iVar3 < 0x30)) &&
        (iVar3 = talk_pick_highest_active(*(int *)(a2 + 4), a1, pcVar6), iVar3 == -1)) {
        uVar1 = get_field_bc_s8(*(int *)(a2 + 0xc), a1, pcVar6, a3);
        pcVar6 = (code *)(int)(char)uVar1;
        if ((((char)uVar1 == '\x02') &&
             (iVar3 = (**(code **)(*(int *)pcVar4 + 0x1d0))(pcVar4, a1, 2, a3), iVar3 == 1)) &&
            ((iVar3 = get_field_178_035734(*(int *)(a2 + 8), a1, pcVar6), iVar3 == 0 && (a0[0x98] == (code)0x5)))) {
            uVar1 = get_field_39_s8(*(int *)(a2 + 0xc));
            if ((((char)uVar1 < '\x03') &&
                 (iVar3 = talk_pick_highest_active(*(int *)(a2 + 4), a1, pcVar6), iVar3 == -1)) &&
                ((a1 = a2, iVar3 = game_vec_02fcc4(a0, a2, pcVar6, a3),
                  iVar3 == 1 && ((iVar3 = get_field_4_on_field_d8(*(u32 *)(*(int *)(a2 + 0x18) + 0x7cc), a1, pcVar6),
                                  iVar3 == 0 && (iVar3 = *(int *)(a0 + 0x878), iVar3 == 0)))))) {
                a1 = get_field_44_s8;
                uVar1 = get_field_44_s8(*(int *)(a2 + 0xc), get_field_44_s8, pcVar6, 0);
                if ((char)uVar1 == '\0') {
                    if (*(int *)(a0 + 0x40) == 0x14) {
                        a3 = (char *)0x18;
                        *(int *)(a0 + 0x40) = 0x18;
                    } else {
                        uVar1 = get_field_39_s8(*(int *)(a2 + 0xc));
                        format_int_at_10(0x8c35468c, (int)(char)uVar1, pcVar6, iVar3);
                        a3 = "EVENT_QUIZ";
                        pcVar6 = NULL;
                        talk_start_line(a0 + 0x9c, 0x2c, 0, "EVENT_QUIZ");
                        counter_set_clamped(*(int *)(a2 + 4) + 0x90, 0, pcVar6);
                        *(int *)(a0 + 4) = 0xd;
                        *(int *)(a0 + 8) = 99;
                        *(int *)(a0 + 0xc) = 0;
                        *(int *)(a0 + 0x40) = 0x21;
                        *(int *)(a0 + 0x840) = 0x21;
                        g_8c1eee30 = 0x21;
                        *(int *)(a0 + 0x844) = 0xb;
                        g_8c1eee34 = 0xb;
                        *(int *)(a0 + 0x848) = 10;
                        g_8c1eee38 = 10;
                        a0[0x80] = (code)0x0;
                        Vec3_ctor_copy(auStack_20, *(int *)(a2 + 0x14) + 0x10, pcVar6, a3);
                        Vec3_assign_wrap_063818(a0, auStack_20, pcVar6, a3);
                        Vec3_dtor(auStack_20, 0xffffffff, pcVar6, a3);
                        if (cVar7 == '\0') {
                            *(int *)(a0 + 0x30) = 0x44960000;
                        } else {
                            *(u64 *)(a0 + 0x30) = 0xe444960000;
                        }
                        Vec3_ctor_copy(auStack_30, *(int *)(a2 + 0x14) + 0x10, pcVar6, a3);
                        Vec3_assign_wrap_05f640(a0, auStack_30, pcVar6, a3);
                        a1 = (code *)0xffffffff;
                        Vec3_dtor(auStack_30, 0xffffffff, pcVar6, a3);
                    }
                    goto LAB_8c107c10;
                }
            }
            ar7_00 = get_field_39_s8;
            uVar1 = get_field_39_s8(*(int *)(a2 + 0xc));
            a3 = (char *)ar7_00;
            if (((char)uVar1 == '\x03') &&
                (iVar3 = talk_pick_highest_active(*(int *)(a2 + 4), a1, pcVar6), a3 = (char *)ar7_00, iVar3 == -1)) {
                pcVar6 = get_field_18_on_field_a8;
                a1 = (code *)get_field_18_on_field_a8(*(int *)(a2 + 4));
                a3 = (char *)ar7_00;
                if ((0 < (int)a1) &&
                    ((((iVar3 = get_field_4_on_field_d8(*(u32 *)(*(int *)(a2 + 0x18) + 0x7cc), a1, pcVar6),
                        a3 = (char *)ar7_00, iVar3 == 0 && ((char)a0[0x87c] < '\x03')) &&
                       (a1 = (code *)0x878, *(int *)(a0 + 0x878) == 0)) &&
                      (uVar1 = get_field_44_s8(*(int *)(a2 + 0xc), 0x878, pcVar6, ar7_00), a3 = (char *)ar7_00,
                       (char)uVar1 == '\0')))) {
                    if (*(int *)(a0 + 0x40) != 0x14) {
                        uVar1 = get_field_39_s8(*(int *)(a2 + 0xc));
                        format_int_at_10(0x8c35468c, (int)(char)uVar1, pcVar6, ar7_00);
                        pcVar5 = "EVENT_QUIZ";
                        uVar1 = 0;
                        talk_start_line(a0 + 0x9c, 0x2c, 0, "EVENT_QUIZ");
                        counter_set_clamped(*(int *)(a2 + 4) + 0x90, 0, uVar1);
                        *(int *)(a0 + 4) = 0xd;
                        *(int *)(a0 + 8) = 99;
                        *(int *)(a0 + 0xc) = 0;
                        a3 = (char *)0x21;
                        *(int *)(a0 + 0x40) = 0x21;
                        *(int *)(a0 + 0x840) = 0x21;
                        g_8c1eee30 = 0x21;
                        pcVar6 = (code *)0xb;
                        *(int *)(a0 + 0x844) = 0xb;
                        g_8c1eee34 = 0xb;
                        *(int *)(a0 + 0x848) = 10;
                        g_8c1eee38 = 10;
                        a0[0x80] = (code)0x0;
                        Vec3_ctor_copy(auStack_40, *(int *)(a2 + 0x14) + 0x10, 0xb, 0x21);
                        Vec3_assign_wrap_063818(a0, auStack_40, pcVar6, a3);
                        Vec3_dtor(auStack_40, 0xffffffff, pcVar6, a3);
                        if (cVar7 == '\0') {
                            *(int *)(a0 + 0x30) = 0x44960000;
                        } else {
                            *(u64 *)(a0 + 0x30) = 0xc444960000;
                        }
                        Vec3_ctor_copy(auStack_50, *(int *)(a2 + 0x14) + 0x10, pcVar6, a3);
                        Vec3_assign_wrap_05f640(a0, auStack_50, pcVar6, a3);
                        a1 = (code *)0xffffffff;
                        Vec3_dtor(auStack_50, 0xffffffff, pcVar6, a3);
                    }
                    goto LAB_8c107c10;
                }
            }
            uVar2 = get_field_a4_s16(*(int *)(a2 + 0x18), a1);
            a1 = (code *)0xa;
            iVar3 = libgcc_divide_helper_01031c(uVar2 & 0xffff, 10, pcVar6);
            if (iVar3 == 1) {
                a1 = *(code **)(a0 + 0x878);
                if (0 < (int)a1) {
                    libgcc_divide_helper_0101e4(*(int *)(a0 + 0x878), 3);
                    iVar3 = libgcc_divide_helper_0101e4(*(int *)(a0 + 0x878), 0x3c);
                    if (2 < iVar3) {
                        iVar3 = 2;
                    }
                    format_int_at_10(0x8c35468c, iVar3, pcVar6, a3);
                    a3 = "EVENT_ROCK_PUSH_INTERVAL";
                    pcVar6 = NULL;
                    a1 = (code *)0x3;
                    talk_start_line(a0 + 0x9c, 3, 0, "EVENT_ROCK_PUSH_INTERVAL");
                }
                uVar1 = get_field_39_s8(*(int *)(a2 + 0xc));
                if (((char)uVar1 == '\x03') && (iVar3 = get_field_18_on_field_a8(*(int *)(a2 + 4)), iVar3 == 0)) {
                    libgcc_divide_helper_0101e4(*(int *)(a0 + 0x878), 3);
                    iVar3 = libgcc_divide_helper_0101e4(*(int *)(a0 + 0x878), 0x3c);
                    if (2 < iVar3) {
                        iVar3 = 2;
                    }
                    format_int_at_10(0x8c35468c, iVar3, pcVar6, a3);
                    a3 = "EVENT_ROCK_PUSH_INTERVAL";
                    pcVar6 = NULL;
                    a1 = (code *)0x3;
                    talk_start_line(a0 + 0x9c, 3, 0, "EVENT_ROCK_PUSH_INTERVAL");
                }
            }
        }
    }
LAB_8c107c10:
    uVar1 = talk_uses_table13019c_find_row_02bef8(*(int *)(a2 + 4), a1, pcVar6);
    if ((short)uVar1 == 3) {
        a1 = get_field_44_s8;
        uVar1 = get_field_44_s8(*(int *)(a2 + 0xc), get_field_44_s8, pcVar6, a3);
        if ((char)uVar1 == '\0') {
            uVar2 = get_field_a0_035724(*(int *)(a2 + 0x18), a1);
            pcVar6 = (code *)(uVar2 & 0xff);
            a3 = (char *)pcVar6;
            if (pcVar6 == NULL) {
                uVar1 = get_field_bc_s8(*(int *)(a2 + 0xc), *(int *)(a2 + 0xc), 0, 0);
                a1 = (code *)(int)(char)uVar1;
                if (((a1 == (code *)0x2) &&
                     (iVar3 = talk_pick_highest_active(*(int *)(a2 + 4), 2, pcVar6), iVar3 == -1)) &&
                    (iVar3 = get_field_4_062878(*(int *)(a2 + 0xc)), iVar3 == 1)) {
                    a1 = NULL;
                    set_field_4_063800(*(int *)(a2 + 0xc), 0);
                    *(int *)(a0 + 0x850) = -10;
                    *(int *)(a0 + 0x858) = 0;
                }
            }
        }
    }
    uVar1 = talk_uses_table13019c_find_row_02bef8(*(int *)(a2 + 4), a1, pcVar6);
    if ((short)uVar1 != 3) {
        return (int)(short)uVar1;
    }
    iVar3 = get_field_4_on_field_d8(*(u32 *)(*(int *)(a2 + 0x18) + 0x7cc), a1, pcVar6);
    if (iVar3 != 0) {
        return iVar3;
    }
    uVar1 = get_field_a0_035724(*(int *)(a2 + 0x18), a1);
    if ((char)uVar1 != '\0') {
        return (int)(char)uVar1;
    }
    if (*(int *)(a0 + 0x850) != -10) {
        return *(int *)(a0 + 0x850);
    }
    pcVar4 = (code *)get_field_44_s8(*(int *)(a2 + 0xc), *(int *)(a2 + 0xc), pcVar6, a3);
    if ((char)pcVar4 == '\0') {
        iVar3 = game_vec_02fcc4(a0, a2, pcVar6, a3);
        pcVar4 = (code *)0x1;
        if (iVar3 != 1) {
            if (*(int *)(a0 + 900) == -1) {
                set_field_770(a0 + 0x9c, 0, pcVar6, a3);
                pcVar5 = "REQUEST_ATTENTION";
                talk_queue_mode1(a0 + 0x9c, 10, 0, "REQUEST_ATTENTION", &g_8c1eeec3);
                *(int *)(a0 + 0xfc) = 0;
                pcVar6 = a0 + 0x9c;
                iVar3 = speech_request(0x8c35468c, *(int *)(a0 + 0x388), pcVar6, pcVar5);
                *(int *)(a0 + 900) = iVar3;
                *(int *)(a0 + 0x14c) = 0;
                set_field_770(a0 + 0x9c, 2, pcVar6, pcVar5);
            }
            *(int *)(a0 + 0x858) = *(int *)(a0 + 0x858) + 1;
            pcVar4 = a0;
            goto LAB_8c107eb4;
        }
    }
    uVar1 = get_field_44_s8(*(int *)(a2 + 0xc), pcVar4, pcVar6, a3);
    if (((char)uVar1 == '\0') && (pcVar4 = (code *)game_vec_02fcc4(a0, a2, pcVar6, a3), pcVar4 == (code *)0x1)) {
        pcVar4 = (code *)0x1;
        set_field_44_u8(*(int *)(a2 + 0xc), 1);
    }
LAB_8c107eb4:
    uVar1 = get_field_44_s8(*(int *)(a2 + 0xc), pcVar4, pcVar6, get_field_44_s8);
    pcVar5 = (char *)(int)(char)uVar1;
    pcVar6 = (code *)(int)(char)uVar1;
    if ((pcVar6 == (code *)0x1) && (pcVar4 = a2, iVar3 = game_vec_02fcc4(a0, a2, 1, pcVar5), iVar3 == 1)) {
        pcVar4 = *(code **)(a0 + 900);
        if (pcVar4 == (code *)0xffffffff) {
            set_field_770(a0 + 0x9c, 0, pcVar6, pcVar5);
            pcVar5 = "EVENT_GET_WORMBOX";
            talk_queue_mode1(a0 + 0x9c, 0x2a, 0, "EVENT_GET_WORMBOX", &g_8c1eeec3);
            *(int *)(a0 + 0xfc) = 0;
            pcVar6 = a0 + 0x9c;
            pcVar4 = *(code **)(a0 + 0x388);
            iVar3 = speech_request(0x8c35468c, pcVar4, pcVar6, pcVar5);
            *(int *)(a0 + 900) = iVar3;
            *(int *)(a0 + 0x14c) = 1;
        }
        if ((*(int *)(a0 + 0x14c) != 0) && (pcVar4 = *(code **)(a0 + 900), pcVar4 != (code *)0xffffffff)) {
            *(int *)(a0 + 4) = 0xd;
            *(int *)(a0 + 8) = 0x5f;
            *(int *)(a0 + 0xc) = 0;
            *(int *)(a0 + 0x840) = 0x14;
            g_8c1eee30 = 0x14;
            *(int *)(a0 + 0x844) = 0xb;
            g_8c1eee34 = 0xb;
            *(int *)(a0 + 0x848) = 10;
            g_8c1eee38 = 10;
            Vec3_ctor_copy(auStack_60, *(int *)(a2 + 0x14) + 0x10, pcVar6, pcVar5);
            Vec3_assign_wrap_063818(a0, auStack_60, pcVar6, pcVar5);
            Vec3_dtor(auStack_60, 0xffffffff, pcVar6, pcVar5);
            if (cVar7 == '\0') {
                *(int *)(a0 + 0x30) = 0x44960000;
            } else {
                *(u64 *)(a0 + 0x30) = 0x8c05f64044960000;
            }
            Vec3_ctor_copy(auStack_70, *(int *)(a2 + 0x14) + 0x10, pcVar6, pcVar5);
            Vec3_assign_wrap_05f640(a0, auStack_70, pcVar6, pcVar5);
            pcVar4 = (code *)0xffffffff;
            Vec3_dtor(auStack_70, 0xffffffff, pcVar6, pcVar5);
            a0[0x80] = (code)0x0;
        }
    }
    iVar3 = 0x858;
    if (300 < *(int *)(a0 + 0x858)) {
        uVar1 = get_field_44_s8(*(int *)(a2 + 0xc), pcVar4, pcVar6, pcVar5);
        iVar3 = (int)(char)uVar1;
        if ((char)uVar1 == '\0') {
            *(int *)(a0 + 0x850) = 0;
            iVar3 = 0x858;
            *(int *)(a0 + 0x858) = 0;
        }
    }
    return iVar3;
}

/*
 * Higyo_react_touch  0x8c1080dc
 * Higyo line: reactions to a flick (DEKOPIN) or tickle (TITILLATE)
 * called by: Higyo_update_sleep_light
 * strings: "REACTION_TITILLATE"; "REACTION_DEKOPIN"
 */
int Higyo_react_touch(int a0, int *a1, int a2, u8 *a3) {
    u32 uVar1;
    int iVar2;
    u32 a6;

    iVar2 = a2;
    if (*(char *)(0x84 + a0) == '\x01') {
        if ((*(int *)(a0 + 0x40) == 0x1a) || (*(int *)(a0 + 0x40) != 0)) {
            if ((*(int *)(a0 + 0x40) == 0x1a) && (*(u32 *)(a0 + 0x40) = 0x1a, *(int *)(0x384 + a0) == -1)) {
                set_field_770(a0 + 0x9c, 0, a2, a3);
                a3 = "REACTION_TITILLATE";
                (*(code *)(&talk_queue_mode1))(a0 + 0x9c, 0x28, 0, a3, (&DATA_8c1eee90) + 0x33);
                *(u32 *)(0xfc + a0) = 0;
                iVar2 = a0 + 0x9c;
                uVar1 = (*(code *)(&speech_request))(0x8c35468c, *(u32 *)(0x388 + a0), iVar2, a3);
                *(u32 *)(0x384 + a0) = uVar1;
                *(u32 *)(0x14c + a0) = 0;
                set_field_770(a0 + 0x9c, 2, iVar2, a3);
            }
        } else {
            *(u32 *)(a0 + 4) = 0xd;
            *(u32 *)(a0 + 8) = 0x4b;
            *(u32 *)(a0 + 0xc) = 0;
            *(u32 *)(a0 + 0x40) = 0x1a;
            *(u32 *)(0x840 + a0) = 0x1a;
            *(u32 *)((&DATA_8c1eed94) + 0x9c) = 0x1a;
            *(u32 *)(0x844 + a0) = 0x22;
            *(u32 *)((&DATA_8c1eed94) + 0xa0) = 0x22;
            *(u32 *)(0x848 + a0) = 0x22;
            *(u32 *)((&DATA_8c1eed94) + 0xa4) = 0x22;
            set_field_68_clamp_0_4_wrap(a0 + 0x9c, 1);
        }
    } else if (*(int *)(a0 + 0x40) == 0x1a) {
        *(u32 *)(a0 + 4) = 0;
        *(u32 *)(a0 + 8) = 0x14;
        *(u32 *)(a0 + 0xc) = 0;
        *(u32 *)(a0 + 0x40) = 0;
        *(u32 *)(0x840 + a0) = 0;
        *(u32 *)((&DATA_8c1eed94) + 0x9c) = 0;
    }
    if (*(char *)(0x85 + a0) == '\x01') {
        if ((*(int *)(a0 + 0x40) == 0x1b) || (*(int *)(a0 + 0x40) != 0)) {
            if (*(int *)(a0 + 0x40) == 0x1b) {
                *(u32 *)(a0 + 0x40) = 0x1b;
            }
        } else {
            set_field_68_clamp_0_4_wrap(a0 + 0x9c, 1);
            *(u32 *)(a0 + 4) = 0xd;
            *(u32 *)(a0 + 8) = 0x4b;
            *(u32 *)(a0 + 0xc) = 0;
            *(u32 *)(a0 + 0x40) = 0x1b;
            *(u32 *)(0x840 + a0) = 0x1b;
            *(u32 *)((&DATA_8c1eed94) + 0x9c) = 0x1b;
            *(u32 *)(0x844 + a0) = 0x22;
            *(u32 *)((&DATA_8c1eed94) + 0xa0) = 0x22;
            *(u32 *)(0x848 + a0) = 0x22;
            *(u32 *)((&DATA_8c1eed94) + 0xa4) = 0x22;
        }
    }
    if ((*(char *)(0x87 + a0) == '\x01') && (*(int *)(a0 + 0x40) != 0x19)) {
        if ((*(int *)(a0 + 0x40) == 0) || ((*(int *)(a0 + 0x40) == 3 || (*(int *)(a0 + 0x40) == 0x14)))) {
            *(u32 *)(a0 + 4) = 0xd;
            *(u32 *)(a0 + 8) = 0x4b;
            *(u32 *)(a0 + 0xc) = 0;
            *(u32 *)(a0 + 0x40) = 0x19;
            *(u32 *)(0x840 + a0) = 0x19;
            *(u32 *)((&DATA_8c1eed94) + 0x9c) = 0x19;
            *(u32 *)(0x844 + a0) = 0x22;
            *(u32 *)((&DATA_8c1eed94) + 0xa0) = 0x22;
            *(u32 *)(0x848 + a0) = 0x22;
            *(u32 *)((&DATA_8c1eed94) + 0xa4) = 0x22;
            set_field_68_clamp_0_4_wrap(a0 + 0x9c, 0xffffffff);
            a3 = "REACTION_DEKOPIN";
            iVar2 = 4;
            talk_start_line(a0 + 0x9c, 0x27, 4, a3);
        } else if (*(int *)(a0 + 0x40) == 0x19) {
            *(u32 *)(a0 + 0x40) = 0x19;
        }
    }
    iVar2 = (**(code **)(0x11c + *a1))(a1, 0xd, iVar2, a3);
    if (0 < iVar2) {
        a6 = 0;
        uVar1 = 0xd;
        iVar2 = (**(code **)(0x100 + *a1))(a1, 0xd, 0, a3);
        iVar2 = (**(code **)(0xb4 + *(int *)(iVar2 + 8)))(iVar2, uVar1, a6, a3);
        if (((iVar2 == 1) &&
             (uVar1 = (*(code *)(&get_field_a0_035724))(*(u32 *)(a2 + 0x18), uVar1, a6, a3), (u8)uVar1 < 2)) &&
            (*(int *)(a0 + 0x40) != 0x1f)) {
            if (*(int *)(a0 + 0x40) == 0) {
                uVar1 = (**(code **)(0x100 + *a1))(a1, 0xd, 0, a3);
                *(u32 *)(a0 + 0x6c) = uVar1;
                *(u32 *)(a0 + 4) = 0xd;
                *(u32 *)(a0 + 8) = 0x41;
                *(u32 *)(a0 + 0xc) = 0;
                *(u32 *)(a0 + 0x40) = 0x1f;
                *(u32 *)(0x840 + a0) = 0x1f;
                *(u32 *)((&DATA_8c1eed94) + 0x9c) = 0x1f;
                *(u32 *)(0x844 + a0) = 0x22;
                *(u32 *)((&DATA_8c1eed94) + 0xa0) = 0x22;
                *(u32 *)(0x848 + a0) = 0x22;
                *(u32 *)((&DATA_8c1eed94) + 0xa4) = 0x22;
            } else if (*(int *)(a0 + 0x40) == 0x1f) {
                *(u32 *)(a0 + 0x40) = 0x1f;
            }
        }
    }
    *(u8 *)(0x84 + a0) = 0;
    *(u8 *)(0x85 + a0) = 0;
    iVar2 = 0x87;
    *(u8 *)(0x87 + a0) = 0;
    return iVar2;
}

/*
 * talk_complain_tank_env_b  0x8c108560
 * queues the GRATIFIC_RID_HOT / _COLD / _OXYGEN line for the tank condition
 * called by: Higyo_update_sleep_light
 * strings: "GRATIFIC_RID_HOT"; "GRATIFIC_RID_COLD"; "GRATIFIC_RID_OXYGEN"
 */
int talk_complain_tank_env_b(int a0, u32 unused_a1, int a2) {
    int iVar1;

    iVar1 = talk_find_slot_state2(*(u32 *)(a2 + 4));
    if (iVar1 != -1) {
        if (iVar1 == 0) {
            (*(code *)(&talk_queue_mode1))(a0 + 0x9c, 7, 0, "GRATIFIC_RID_HOT", (&DATA_8c1eee90) + 0x33);
            iVar1 = 0x118;
            *(u32 *)(0x118 + a0) = 7;
        } else if (iVar1 == 1) {
            (*(code *)(&talk_queue_mode1))(a0 + 0x9c, 8, 0, "GRATIFIC_RID_COLD", (&DATA_8c1eee90) + 0x33);
            iVar1 = 0x118;
            *(u32 *)(0x118 + a0) = 7;
        } else if (iVar1 == 2) {
            (*(code *)(&talk_queue_mode1))(a0 + 0x9c, 0x1a, 0, "GRATIFIC_RID_OXYGEN", (&DATA_8c1eee90) + 0x33);
            iVar1 = 0x118;
            *(u32 *)(0x118 + a0) = 7;
        }
    }
    return iVar1;
}

/*
 * talk_state_switch_10862c  0x8c10862c
 * area name: sits between talk functions (same compilation unit); behaviour name: dispatches on a state or mode value
 * (switch) called by: Higyo_update_sleep_light
 */
int talk_state_switch_10862c(int a0, u32 a1, int a2, u32 a3) {
    int iVar1;
    u32 uVar2;
    u32 uVar3;
    int ar6_00;
    char cVar4;
    u8 auStack_34[16];
    u8 auStack_24[20];

    cVar4 = '\0';
    ar6_00 = a2;
    iVar1 = talk_pick_highest_active(*(u32 *)(a2 + 4), a1, a2);
    if ((iVar1 < 6) && (-1 < iVar1)) {
        switch (iVar1) {
        case 0:
            *(u32 *)(a0 + 0x118) = 0;
            uVar3 = get_field_8_s8(*(u32 *)(a2 + 4), a1);
            *(int *)(a0 + 0xfc) = (int)(char)uVar3;
            break;
        case 1:
            *(u32 *)(a0 + 0x118) = 1;
            uVar3 = get_field_8_s8(*(int *)(a2 + 4) + 0x18, a1);
            *(int *)(a0 + 0xfc) = (int)(char)uVar3;
            break;
        case 2:
            *(u32 *)(a0 + 0x118) = 2;
            uVar3 = get_field_8_s8(*(int *)(a2 + 4) + 0x30, a1);
            *(int *)(a0 + 0xfc) = (int)(char)uVar3;
            break;
        case 3:
            goto switchD_8c108664_caseD_3;
        case 4:
            *(u32 *)(a0 + 0x118) = 4;
            uVar3 = get_field_8_s8(*(int *)(a2 + 4) + 0x60, a1);
            *(int *)(a0 + 0xfc) = (int)(char)uVar3;
            break;
        case 5:
            *(u32 *)(a0 + 0x118) = 5;
            uVar3 = get_field_8_s8(*(int *)(a2 + 4) + 0x78, a1);
            *(int *)(a0 + 0xfc) = (int)(char)uVar3;
        }
    } else {
    switchD_8c108664_caseD_3:
        *(u32 *)(a0 + 0x118) = 7;
        *(u32 *)(a0 + 0xfc) = 0;
        if (*(int *)(a0 + 0x40) == 6) {
            *(u32 *)(a0 + 0x118) = 9;
        }
        iVar1 = get_field_24_05eed0(*(int *)(a2 + 4) + 0xf8, a1);
        if (iVar1 == 1) {
            *(u32 *)(a0 + 0x118) = 8;
        }
    }
    if ((*(int *)(a0 + 0x40) == 0) || (*(int *)(a0 + 0x40) == 6)) {
        if ((*(int *)(a0 + 900) == -1) && ((iVar1 = get_field_178_035734(*(u32 *)(a2 + 8), a1, ar6_00),
                                            iVar1 == 0 && (iVar1 = get_field_770_05eeb8(a0 + 0x9c), iVar1 == 0)))) {
            uVar3 = 0;
            iVar1 = talk_set_start_scene(a0 + 0x9c, 0, ar6_00, a3);
            if (iVar1 != 0) {
                for (iVar1 = 0; iVar1 < 6; iVar1 = iVar1 + 1) {
                    uVar2 = get_field_0_s8(iVar1 * 0x18 + *(int *)(a2 + 4));
                    if ((char)uVar2 == '\x01') {
                        *(u32 *)(a0 + iVar1 * 4 + 0x11c) = 1;
                    } else {
                        *(u32 *)(a0 + iVar1 * 4 + 0x11c) = 0;
                    }
                }
                uVar3 = get_field_1_s8(*(int *)(a2 + 4) + 0xa8);
                if ((char)uVar3 == '\x01') {
                    *(u32 *)(a0 + 0x148) = 1;
                }
                ar6_00 = a0 + 0x9c;
                uVar3 = speech_request(0x8c35468c, 1, ar6_00, a3);
                *(u32 *)(a0 + 900) = uVar3;
            }
        }
        if ((*(int *)(a0 + 0x40) == 6) && (*(int *)(a0 + 900) != -1)) {
            set_field_770(a0 + 0x9c, 1, ar6_00, a3);
        }
    }
    iVar1 = *(int *)(a0 + 4);
    if (((iVar1 == 0) && (iVar1 = 0, *(int *)(a0 + 0x14c) != 0)) && (iVar1 = *(int *)(a0 + 900), iVar1 != -1)) {
        *(u32 *)(a0 + 4) = 0xd;
        *(u32 *)(a0 + 8) = 0x5f;
        *(u32 *)(a0 + 0xc) = 0;
        *(u32 *)(a0 + 0x840) = 0x14;
        g_8c1eee30 = 0x14;
        *(u32 *)(a0 + 0x844) = 0xb;
        g_8c1eee34 = 0xb;
        *(u32 *)(a0 + 0x848) = 10;
        g_8c1eee38 = 10;
        Vec3_ctor_copy(auStack_24, *(int *)(a2 + 0x14) + 0x10, ar6_00, a3);
        Vec3_assign_wrap_063818(a0, auStack_24, ar6_00, a3);
        Vec3_dtor(auStack_24, 0xffffffff, ar6_00, a3);
        if (cVar4 == '\0') {
            *(u32 *)(a0 + 0x30) = 0x44960000;
        } else {
            *(u64 *)(a0 + 0x30) = 0x8c05f64044960000;
        }
        Vec3_ctor_copy(auStack_34, *(int *)(a2 + 0x14) + 0x10, ar6_00, a3);
        Vec3_assign_wrap_05f640(a0, auStack_34, ar6_00, a3);
        Vec3_dtor(auStack_34, 0xffffffff, ar6_00, a3);
        iVar1 = 0x80;
        *(u8 *)(a0 + 0x80) = 0;
    }
    return iVar1;
}

/*
 * game_uses_Vec3_dtor_1089e4  0x8c1089e4
 * area name: game code; nothing names its area yet; behaviour name: its main named callee is Vec3_dtor
 * called by: Higyo_update_sleep_light
 */
u32 game_uses_Vec3_dtor_1089e4(int a0, u32 a1, u32 *a2, u32 a3) {
    short sVar1;
    u32 uVar2;
    int iVar3;
    u32 uVar4;
    u32 *ar6_00;
    u32 in_fr1;
    double dVar5;
    char cVar6;
    char cVar7;
    u32 uVar8;
    u32 ain0;
    u8 auStack_5c[16];
    u8 auStack_4c[16];
    u8 auStack_3c[16];
    u8 auStack_2c[16];
    u32 uStack_1c;
    u32 uStack_18;
    u32 uStack_14;
    u32 uStack_10;

    cVar7 = '\0';
    cVar6 = '\0';
    ar6_00 = a2;
    Vec3_ctor_zero(&uStack_1c, a1, a2);
    if (*(int *)(a0 + 900) != -1) {
        if ((*(int *)(a0 + 4) == 0) && (*(int *)(a0 + 0x14c) != 0)) {
            *(u32 *)(a0 + 4) = 0xd;
            *(u32 *)(a0 + 8) = 0x5f;
            *(u32 *)(a0 + 0xc) = 0;
            *(u32 *)(a0 + 0x840) = 0x14;
            g_8c1eee30 = 0x14;
            *(u32 *)(a0 + 0x844) = 0xb;
            g_8c1eee34 = 0xb;
            *(u32 *)(a0 + 0x848) = 10;
            g_8c1eee38 = 10;
            Vec3_ctor_copy(auStack_2c, a2[5] + 0x10, ar6_00, a3);
            Vec3_assign_wrap_063818(a0, auStack_2c, ar6_00, a3);
            Vec3_dtor(auStack_2c, 0xffffffff, ar6_00, a3);
            if (cVar7 == '\0') {
                *(u32 *)(a0 + 0x30) = 0x44960000;
            } else {
                in_fr1 = 0x44960000;
                *(u64 *)(a0 + 0x30) = 0x8044960000;
            }
            *(u8 *)(a0 + 0x80) = 0;
        }
        Vec3_ctor_copy(auStack_3c, a2[5] + 0x10, ar6_00, a3);
        Vec3_assign_wrap_05f640(a0, auStack_3c, ar6_00, a3);
        uVar4 = 0xffffffff;
        Vec3_dtor(auStack_3c, 0xffffffff, ar6_00, a3);
        Vec3_ctor_copy_wrap_02f670(*a2, uVar4, ar6_00, a3, auStack_4c);
        Vec3_sub(auStack_4c, a2[5] + 0x10, ar6_00, a3, auStack_5c);
        Vec3_assign(&uStack_1c, auStack_5c, ar6_00, a3);
        Vec3_dtor(auStack_5c, 0xffffffff, ar6_00, a3);
        uVar4 = 0xffffffff;
        Vec3_dtor(auStack_4c, 0xffffffff, ar6_00, a3);
        if (cVar7 == '\0') {
            dVar5 = (double)CONCAT44(uStack_14, in_fr1);
        } else {
            dVar5 = (double)CONCAT44(uStack_10, uStack_14);
        }
        if (cVar6 == '\0') {
            iVar3 = (int)(float)((u64)dVar5 >> 0x20);
        } else {
            iVar3 = (int)dVar5;
        }
        *(int *)(a0 + 0x158) = iVar3;
        if (cVar7 == '\0') {
            dVar5 = (double)CONCAT44(uStack_1c, SUB84(dVar5, 0));
        } else {
            dVar5 = (double)CONCAT44(uStack_18, uStack_1c);
        }
        if (cVar6 == '\0') {
            iVar3 = (int)(float)((u64)dVar5 >> 0x20);
        } else {
            iVar3 = (int)dVar5;
        }
        *(int *)(a0 + 0x15c) = iVar3;
        iVar3 = get_field_89130_0fa740(0x8c35468c);
        if ((iVar3 == 3) || (iVar3 = get_field_89130_0fa740(0x8c35468c), iVar3 == 5)) {
            a1 = 1;
            set_field_c8(a2[3], 1);
        } else {
            a1 = 0;
            set_field_c8(a2[3], 0);
        }
        iVar3 = get_field_770_05eeb8(a0 + 0x9c);
        if (iVar3 == 2) {
            *(u32 *)(a0 + 0x14c) = 0;
        }
        iVar3 = speech_is_playing(0x8c35468c, a1);
        if (iVar3 == 0) {
            *(u32 *)(a0 + 0x94) = 0;
            uVar4 = 3;
            set_field_770(a0 + 0x9c, 3, ar6_00, a3);
            if (*(int *)(a0 + 0x40) == 10) {
                *(u32 *)(a0 + 4) = 0;
                *(u32 *)(a0 + 0x40) = 0;
                *(u32 *)(a0 + 8) = 0;
                *(u32 *)(a0 + 0xc) = 0;
            }
            uVar2 = talk_uses_table13019c_find_row_02bef8(a2[1], uVar4, ar6_00);
            if ((short)uVar2 == 0) {
                uVar4 = 0;
                iVar3 = speech_talk_0fa388(0x8c35468c, 0, ar6_00, a3);
                if (iVar3 == 1) {
                    ar6_00 = (u32 *)0x1b;
                    uVar4 = 0xb;
                    recent5_push_unique(a2[6], 0xb, 0x1b);
                }
            }
            uVar2 = talk_uses_table13019c_find_row_02bef8(a2[1], uVar4, ar6_00);
            sVar1 = (short)uVar2;
            if (sVar1 == 3) {
                uVar2 = get_field_a0_035724(a2[6], uVar4);
                uVar8 = CONCAT21(sVar1, (char)uVar2);
                if ((char)uVar2 == '\0') {
                    uVar2 = get_field_44_s8(a2[3], uVar4, ar6_00, a3);
                    ain0 = CONCAT31(uVar8, (char)uVar2);
                    if (((char)uVar2 == '\x01') && (*(int *)(a0 + 0x10c) == 1)) {
                        ar6_00 = (u32 *)0x1b;
                        recent5_push_unique(a2[6], 0xc, 0x1b);
                        set_field_44_u8(a2[3], 0);
                        set_field_3c_u8(a2[3], 1);
                        set_field_a1_u8(a2[6], 1);
                        *(u32 *)(a0 + 0x10c) = 0;
                        uVar4 = 2;
                        set_field_0_u8_061180(a2[3], 2);
                        *(u32 *)(a0 + 0x850) = 0;
                    }
                }
            }
            if ((*(int *)(a0 + 0x100) < 1) || (iVar3 = get_field_b0_065c8c(a2[3]), *(int *)(a0 + 0x100) < iVar3)) {
                a1 = 0;
                game_update_fields_02af68(*a2, 0);
            } else {
                set_field_b0(a2[3], *(u32 *)(a0 + 0x100));
                game_update_fields_02af68(*a2, 1);
                ar6_00 = (u32 *)0x1b;
                a1 = 0xd;
                recent5_push_unique(a2[6], 0xd, 0x1b);
            }
            if (*(int *)(a0 + 0x10c) == 0xf) {
                *(u32 *)(a0 + 4) = 5;
                *(u32 *)(a0 + 8) = 0x55;
                *(u32 *)(a0 + 0xc) = 0;
                *(u32 *)(a0 + 0x40) = 0xe;
                *(u32 *)(a0 + 0x840) = 0xe;
                g_8c1eee30 = 0xe;
                *(u32 *)(a0 + 0x844) = 0x22;
                g_8c1eee34 = 0x22;
                *(u32 *)(a0 + 0x848) = 0x22;
                g_8c1eee38 = 0x22;
                *(u32 *)(a0 + 0x10c) = 0;
            }
            if (*(int *)(a0 + 0x10c) == 0x10) {
                counter_set_clamped(a2[1] + 0x90, 0, ar6_00);
                a1 = 1;
                set_field_44_u8(a2[3], 1);
                *(u32 *)(a0 + 4) = 0xd;
                *(u32 *)(a0 + 8) = 99;
                *(u32 *)(a0 + 0xc) = 0;
                *(u32 *)(a0 + 0x40) = 0x20;
                *(u32 *)(a0 + 0x840) = 0x20;
                g_8c1eee30 = 0x20;
                *(u32 *)(a0 + 0x844) = 0x22;
                g_8c1eee34 = 0x22;
                *(u32 *)(a0 + 0x848) = 0x22;
                g_8c1eee38 = 0x22;
                *(u32 *)(a0 + 0x10c) = 0;
                speech_uses_identity_0fa6c8(0x8c35468c, a1, ar6_00, a3);
            }
            talk_set_status_format(a0 + 0x9c, a1, ar6_00, a3);
            *(u8 *)(a0 + 0x80) = 1;
            *(u32 *)(a0 + 900) = 0xffffffff;
            *(u32 *)(a0 + 0xfc) = 0;
        }
    }
    iVar3 = speech_is_playing(0x8c35468c, a1);
    if ((iVar3 == 0) && ((*(int *)(a0 + 0x40) == 10 || (*(int *)(a0 + 0x40) == 0xb)))) {
        set_field_770(a0 + 0x9c, 3, ar6_00, a3);
        *(u32 *)(a0 + 4) = 0;
        *(u32 *)(a0 + 0x40) = 0;
        *(u32 *)(a0 + 0xfc) = 0;
        *(u32 *)(a0 + 8) = 0;
        *(u32 *)(a0 + 0xc) = 0;
        *(u8 *)(a0 + 0x80) = 1;
    }
    uVar4 = Vec3_dtor(&uStack_1c, 0xffffffff, ar6_00, a3);
    return uVar4;
}

/*
 * game_talk_108f3c  0x8c108f3c
 * area name: game code; nothing names its area yet; behaviour name: mostly calls talk functions
 * called by: Higyo_update_sleep_light
 */
int game_talk_108f3c(int a0, u32 a1, int a2) {
    int iVar1;
    u32 uVar2;
    int iVar3;

    *(u32 *)(a0 + 0x94) = *(u32 *)(a0 + 0x154);
    if (*(int *)(a0 + 900) == -1) {
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
        iVar3 = *(int *)(a0 + 0x40);
        if (iVar3 < 0xf) {
            if (iVar3 < 0xe) {
                if (iVar3 < 7) {
                    if (-1 < iVar3) {
                        if (iVar3 == 0) {
                            iVar3 = a2;
                            iVar1 = talk_pick_highest_active(*(u32 *)(a2 + 4), a1, a2);
                            uVar2 = get_field_8_s8(iVar1 * 0x18 + *(int *)(a2 + 4), a1);
                            if ('\0' < (char)uVar2) {
                                iVar3 = talk_pick_highest_active(*(u32 *)(a2 + 4), a1, iVar3);
                                if (iVar3 == 0) {
                                    *(u32 *)(a0 + 0x94) = 0x14;
                                } else if (iVar3 == 1) {
                                    *(u32 *)(a0 + 0x94) = 0x14;
                                } else if (iVar3 == 2) {
                                    *(u32 *)(a0 + 0x94) = 0x14;
                                } else if (iVar3 == 4) {
                                    *(u32 *)(a0 + 0x94) = 0x14;
                                }
                            }
                        } else if (iVar3 == 3) {
                            iVar3 = talk_pick_highest_active(*(u32 *)(a2 + 4), a1, a2);
                            if (iVar3 == 0) {
                                *(u32 *)(a0 + 0x94) = 0x14;
                            } else if (iVar3 == 1) {
                                *(u32 *)(a0 + 0x94) = 0x14;
                            } else if (iVar3 == 2) {
                                *(u32 *)(a0 + 0x94) = 0x14;
                            } else if (iVar3 == 4) {
                                *(u32 *)(a0 + 0x94) = 0x14;
                            }
                        } else if (iVar3 == 6) {
                            *(u32 *)(a0 + 0x94) = 0x37;
                        }
                    }
                } else if (iVar3 == 0xd) {
                    *(u32 *)(a0 + 0x94) = 0xf;
                }
            } else {
                *(u32 *)(a0 + 0x94) = 0x14;
            }
        } else if (iVar3 < 0x14) {
            if (0x10 < iVar3) {
                if (iVar3 == 0x11) {
                    iVar3 = get_field_140_025f70(*(u32 *)(a2 + 4), a1);
                    if (iVar3 == 0) {
                        *(u32 *)(a0 + 0x94) = 0x19;
                    } else {
                        *(u32 *)(a0 + 0x94) = 0x1e;
                    }
                } else if (iVar3 == 0x13) {
                    *(u32 *)(a0 + 0x94) = 0x23;
                }
            }
        } else if (iVar3 == 0x1d) {
            *(u32 *)(a0 + 0x94) = 0x14;
        }
    }
    iVar3 = *(int *)(a0 + 0x88);
    if (iVar3 == 1) {
        *(u32 *)(a0 + 0x94) = 0x47;
        iVar3 = 0x88;
        *(u32 *)(a0 + 0x88) = 0;
    }
    return iVar3;
}

/*
 * Higyo_pick_idle_action  0x8c1091cc
 * Higyo line: picks an idle action (jump, bite, head damage, paw, reverse/stand swim, tremor, want land)
 * called by: Higyo_update_sleep_light
 * strings: "IDLEACTION_PAW"; "IDLEACTION_PAW"; "IDLEACTION_TREMOR"; "IDLEACTION_TREMOR" ...
 */
int Higyo_pick_idle_action(int a0, u32 a1, int a2, char *a3) {
    int iVar1;
    int iVar2;

    iVar1 = *(int *)(a0 + 4);
    if (iVar1 == 0) {
        iVar1 = a2;
        if (((*(int *)(a0 + 900) == -1) &&
             (iVar2 = (**(code **)(**(int **)(a2 + 8) + 0x30))(*(int **)(a2 + 8), a1, a2, a3), iVar2 < 0x11)) &&
            (10 < iVar2)) {
            switch (iVar2) {
            case 0xb:
                a3 = "IDLEACTION_PAW";
                iVar1 = 0;
                a1 = 0x19;
                talk_queue_mode2(a0 + 0x9c, 0x19, 0, "IDLEACTION_PAW", &g_8c1eeec3);
                break;
            case 0xc:
                a3 = "IDLEACTION_TREMOR";
                iVar1 = 0;
                a1 = 0x19;
                talk_queue_mode2(a0 + 0x9c, 0x19, 0, "IDLEACTION_TREMOR", &g_8c1eeec3);
                break;
            case 0xd:
                a3 = "IDLEACTION_BITE";
                iVar1 = 0;
                a1 = 0x19;
                talk_queue_mode2(a0 + 0x9c, 0x19, 0, "IDLEACTION_BITE", &g_8c1eeec3);
                break;
            case 0xe:
                a3 = "IDLEACTION_ACTION_JUMP";
                iVar1 = 0;
                a1 = 0x19;
                talk_queue_mode2(a0 + 0x9c, 0x19, 0, "IDLEACTION_ACTION_JUMP", &g_8c1eeec3);
                break;
            case 0xf:
                if (*(char *)(a0 + 0x98) < '\x05') {
                    a3 = "IDLEACTION_STAND_SWIM";
                    iVar1 = 0;
                    a1 = 0x19;
                    talk_queue_mode2(a0 + 0x9c, 0x19, 0, "IDLEACTION_STAND_SWIM", &g_8c1eeec3);
                } else {
                    a3 = "EVENT_WANT_LAND";
                    iVar1 = 0;
                    a1 = 0x19;
                    talk_queue_mode2(a0 + 0x9c, 0x19, 0, "EVENT_WANT_LAND", &g_8c1eeec3);
                }
                break;
            case 0x10:
                a3 = "IDLEACTION_REVERSE_SWIM";
                iVar1 = 0;
                a1 = 0x19;
                talk_queue_mode2(a0 + 0x9c, 0x19, 0, "IDLEACTION_REVERSE_SWIM", &g_8c1eeec3);
            }
        }
        iVar1 = (**(code **)(**(int **)(a2 + 8) + 0x30))(*(int **)(a2 + 8), a1, iVar1, a3);
        if (iVar1 == 0x11) {
            iVar1 = talk_start_line(a0 + 0x9c, 0x2c, 0, "IDLEACTION_HEAD_DAMAGE");
        }
    }
    return iVar1;
}

/*
 * Higyo_react_feed_full  0x8c1093a4
 * Higyo line: refusing food when full, being sucked
 * called by: Higyo_update_sleep_light
 * strings: "STATUS_SUCKED"; "STATUS_SUCKED"; "REACTION_FEED_FULL"; "REACTION_FEED_FULL" ...
 */
int Higyo_react_feed_full(int a0, int *a1, int *a2, char *a3) {
    int iVar1;
    u32 uVar2;
    int iVar3;
    int *ar5_00;
    int *ar6_00;
    u32 in_stack_ffffffac;

    ar5_00 = a1;
    ar6_00 = a2;
    iVar1 = (**(code **)(*(int *)(*a2 + 8) + 0xb8))(*a2, a1, a2, a3);
    if ((iVar1 == 1) && (*(int *)(a0 + 4) != 1)) {
        iVar1 = get_field_6c_02f46c(*a2);
        if ((iVar1 == 0) && (iVar1 = get_field_70_05f490(*a2), iVar1 == 0)) {
            ar6_00 = (int *)0x1b;
            recent5_push_unique(a2[6], 0xe, 0x1b);
            *(u32 *)(a0 + 0x38) = 2;
            *(u32 *)(a0 + 4) = 1;
            *(u32 *)(a0 + 0xc) = 0;
            *(u32 *)(a0 + 8) = 99;
            ar5_00 = (int *)0xc7;
            list5_push(a0, 199);
            *(u8 *)(a0 + 0x98) = 10;
        } else if (*(int *)(a0 + 4) != 0xb) {
            *(u32 *)(a0 + 0x38) = 2;
            *(u32 *)(a0 + 4) = 0xb;
            *(u32 *)(a0 + 8) = 99;
            *(u32 *)(a0 + 0x40) = 0xd;
            list5_push(a0, 0x4af);
            *(u32 *)(a0 + 0xc) = 0;
            *(u32 *)(a0 + 0x840) = 0xd;
            g_8c1eee30 = 0xd;
            *(u32 *)(a0 + 0x844) = 0x22;
            g_8c1eee34 = 0x22;
            a3 = "STATUS_SUCKED";
            ar6_00 = NULL;
            ar5_00 = (int *)0x19;
            talk_start_line(a0 + 0x9c, 0x19, 0, "STATUS_SUCKED");
            if (*(int *)(a0 + 0x6c) != 0) {
                (**(code **)(*(int *)(*(int *)(a0 + 0x6c) + 8) + 0x78))(*(int *)(a0 + 0x6c), ar5_00, ar6_00, a3);
                *(u32 *)(a0 + 0x6c) = 0;
            }
        }
        if ((*(char *)(a0 + 0x864) == '\x01') && (*(int *)(a0 + 4) == 0)) {
            *(u8 *)(a0 + 0x864) = 0;
        }
    }
    uVar2 = talk_uses_table13019c_find_row_02bef8(a2[1], ar5_00, ar6_00);
    if ((short)uVar2 == 1) {
    LAB_8c109510:
        iVar1 = get_field_8_1097a0(a2[3]);
        if ((((iVar1 == 1) && (*(char *)(a0 + 0x864) != '\x01')) &&
             (iVar1 = talk_pick_highest_active(a2[1], ar5_00, ar6_00), iVar1 == -1)) &&
            (*(int *)(a0 + 4) != 0xd)) {
            *(u8 *)(a0 + 0x864) = 1;
            list5_push(a0, 0x2b9);
            ar5_00 = NULL;
            set_field_8_109798(a2[3], 0);
            *(u32 *)(a0 + 8) = 0x5f;
            *(u32 *)(a0 + 0xc) = 0;
            *(u32 *)(a0 + 4) = 6;
            *(u32 *)(a0 + 0x38) = 2;
        }
    } else {
        uVar2 = talk_uses_table13019c_find_row_02bef8(a2[1], ar5_00, ar6_00);
        in_stack_ffffffac = CONCAT22((short)uVar2, (short)in_stack_ffffffac);
        if ((short)uVar2 == 2)
            goto LAB_8c109510;
    }
    iVar1 = get_field_c4_066448(a2[3]);
    if (((iVar1 == 0) && (*(int *)(a0 + 0x40) == 0)) && (*(int *)(a0 + 900) == -1)) {
        iVar1 = get_field_13c_028d9c(a2[1], ar5_00, ar6_00);
        if ((iVar1 == 3) || (iVar1 = get_field_13c_028d9c(a2[1], ar5_00, ar6_00), iVar1 == 4)) {
            ar5_00 = (int *)0xf;
            iVar1 = (**(code **)(*a1 + 0x11c))(a1, 0xf, ar6_00, a3);
            if (iVar1 < 1) {
                a3 = (char *)0xa;
                ar5_00 = a1;
                ar6_00 = a2;
                iVar1 = game_vec_02f880(a0, a1, a2, 10);
                if (iVar1 == 0)
                    goto LAB_8c1096ec;
            }
            uVar2 = get_field_be_s8(a2[3]);
            if (((char)uVar2 == '\x02') && (*(char *)(a0 + 0x98) < '\b')) {
                a3 = "REACTION_FEED_FULL";
                ar6_00 = NULL;
                talk_start_line(a0 + 0x9c, 0x2c, 0, "REACTION_FEED_FULL");
                ar5_00 = (int *)0x1;
                set_field_c4(a2[3], 1);
            }
        } else {
            ar5_00 = (int *)0xf;
            iVar1 = (**(code **)(*a1 + 0x11c))(a1, 0xf, ar6_00, a3);
            if ((0 < iVar1) && (*(char *)(a0 + 0x865) == '\x01')) {
                a3 = "REACTION_FEED_FULL";
                ar6_00 = NULL;
                talk_start_line(a0 + 0x9c, 0x2c, 0, "REACTION_FEED_FULL");
                ar5_00 = (int *)0x1;
                set_field_c4(a2[3], 1);
            }
        }
    }
LAB_8c1096ec:
    iVar1 = *(int *)(a0 + 0x6c);
    if (((iVar1 == 0) && (iVar1 = get_field_13c_028d9c(a2[1], ar5_00, ar6_00), iVar1 == 2)) &&
        (iVar1 = *(int *)(a0 + 0x40), iVar1 == 0)) {
        iVar3 = (**(code **)(*a1 + 0x11c))(a1, 0xf, ar6_00, a3);
        iVar1 = 1;
        if (((0 < iVar3) && (iVar1 = (int)*(char *)(a0 + 0x865), iVar1 == 0)) &&
            ((iVar1 = *(int *)(a0 + 4), iVar1 != 0xd && (iVar1 = *(int *)(a0 + 4), iVar1 != 6)))) {
            list5_push(a0, 0x2b9);
            *(u32 *)(a0 + 8) = 0x5f;
            *(u32 *)(a0 + 0xc) = 0;
            *(u32 *)(a0 + 4) = 6;
            *(u32 *)(a0 + 0x38) = 2;
            iVar1 = 0x865;
            *(u8 *)(a0 + 0x865) = 1;
        }
    }
    return iVar1;
}

/*
 * set_field_8_109798  0x8c109798
 * called by: Higyo_react_feed_full
 */
u32 set_field_8_109798(int a0, u32 a1) {
    u32 in_r0;

    *(u32 *)(a0 + 8) = a1;
    return in_r0;
}

/*
 * get_field_8_1097a0  0x8c1097a0
 * called by: Higyo_react_feed_full
 */
u32 get_field_8_1097a0(int a0) {
    return *(u32 *)(a0 + 8);
}

/*
 * Higyo_life_status  0x8c1097a8
 * Higyo line: STATUS_LIFE / STATUS_LASTONE
 * called by: Higyo_update_sleep_light
 * strings: "STATUS_LIFE"; "STATUS_LASTONE"
 */
int Higyo_life_status(int a0, int *a1, int *a2, u8 *a3) {
    int iVar1;
    u32 uVar2;
    int *piVar3;
    u32 uVar4;
    int *piVar5;
    int iVar6;

    iVar6 = 0;
    piVar3 = a1;
    piVar5 = a2;
    iVar1 = get_field_124_027930(a2[2], a1, a2, a3);
    if ((iVar1 != 2) && (piVar3 = a2, iVar1 = game_vec_02fcc4(a0, a2, piVar5, a3), iVar1 == 1)) {
        uVar2 = get_field_a4_s16(a2[6], piVar3);
        piVar3 = (int *)0x3c;
        iVar1 = libgcc_divide_helper_0101e4(uVar2 & 0xffff, 0x3c);
        if (1 < iVar1) {
            piVar3 = NULL;
            while (true) {
                uVar4 = 3;
                iVar1 = (**(code **)(0x11c + *a1))(a1, 3, piVar5, a3);
                if (iVar1 <= (int)piVar3)
                    break;
                uVar4 = 3;
                piVar5 = piVar3;
                iVar1 = (**(code **)(0x100 + *a1))(a1, 3, piVar3, a3);
                iVar1 = (**(code **)(0x114 + *(int *)(iVar1 + 8)))(iVar1, uVar4, piVar5, a3);
                if (iVar1 == 4) {
                LAB_8c1098a4:
                    uVar4 = 3;
                    piVar5 = piVar3;
                    iVar1 = (**(code **)(0x100 + *a1))(a1, 3, piVar3, a3);
                    iVar1 = (**(code **)(0xb4 + *(int *)(iVar1 + 8)))(iVar1, uVar4, piVar5, a3);
                    if (iVar1 == 1) {
                        iVar6 = iVar6 + 1;
                    }
                } else {
                    uVar4 = 3;
                    piVar5 = piVar3;
                    iVar1 = (**(code **)(0x100 + *a1))(a1, 3, piVar3, a3);
                    iVar1 = (**(code **)(0x114 + *(int *)(iVar1 + 8)))(iVar1, uVar4, piVar5, a3);
                    if (iVar1 == 3)
                        goto LAB_8c1098a4;
                }
                piVar3 = (int *)((int)piVar3 + 1);
            }
            uVar2 = get_field_a4_s16(a2[6], uVar4);
            piVar3 = (int *)0x3c;
            iVar1 = libgcc_divide_helper_0101e4(uVar2 & 0xffff, 0x3c);
            if ((((0 < iVar1) &&
                  (uVar4 = talk_uses_table13019c_find_row_02bef8(a2[1], piVar3, piVar5), 6 < (short)uVar4)) &&
                 (iVar1 = (*(code *)(&get_field_18_02d1a0))(a2[1] + 0xa8, piVar3, piVar5, a3), 0 < iVar1)) &&
                (((iVar1 = get_field_13c_028d9c(a2[1], piVar3, piVar5), iVar1 == 4 && (*(int *)(0x384 + a0) == -1)) &&
                  ((iVar6 == 1 && ((*(char *)(0x98 + a0) < '\x04' && (*(int *)(a0 + 4) == 0)))))))) {
                a3 = "STATUS_LIFE";
                piVar5 = NULL;
                (*(code *)(&talk_queue_mode2))(a0 + 0x9c, 0x16, 0, a3, (&DATA_8c1eee90) + 0x33);
                piVar3 = NULL;
                set_field_1c_u8(a2[1] + 0xa8, 0);
            }
        }
    }
    iVar1 = get_field_13c_028d9c(a2[1], piVar3, piVar5);
    if ((iVar1 == 3) || (iVar1 = get_field_13c_028d9c(a2[1], piVar3, piVar5), iVar1 == 4)) {
        uVar2 = get_field_a4_s16(a2[6], piVar3);
        iVar1 = libgcc_divide_helper_01031c(uVar2 & 0xffff, 0x45, piVar5);
        if (iVar1 == 0x14) {
            *(u8 *)(0x854 + a0) = 0;
        }
        iVar1 = (**(code **)(0x11c + *a1))(a1, 3, piVar5, a3);
        if (((((iVar1 == 1) && (iVar1 = *(int *)(0x384 + a0), iVar1 == -1)) &&
              (iVar1 = 3, *(char *)(0x98 + a0) < '\x04')) &&
             ((piVar3 = a2, iVar1 = game_vec_02fcc4(a0, a2, piVar5, a3),
               iVar1 == 1 &&
                   (iVar1 = (*(code *)(&get_field_4_on_field_d8))(*(u32 *)(0x7cc + a2[6]), piVar3, piVar5, a3),
                    iVar1 == 0)))) &&
            (iVar1 = (int)*(char *)(0x854 + a0), iVar1 == 0)) {
            uVar2 = get_field_a4_s16(a2[6], piVar3);
            iVar6 = libgcc_divide_helper_0101e4(uVar2 & 0xffff, 0x3c);
            iVar1 = 2;
            if (2 < iVar6) {
                *(u8 *)(0x854 + a0) = 1;
                iVar1 = (*(code *)(&talk_queue_mode1))(a0 + 0x9c, 0x16, 0, "STATUS_LASTONE", (&DATA_8c1eee90) + 0x33);
            }
        }
    }
    return iVar1;
}

/*
 * set_field_1c_u8  0x8c109b10
 * called by: Higyo_life_status
 */
u32 set_field_1c_u8(int a0, u32 a1) {
    *(u8 *)(a0 + 0x1c) = (u8)a1;
    return 0x1c;
}

/*
 * Class_12c3c4_uses_get_field_8_109b18  0x8c109b18
 * area name: only called from Class_12c3c4 methods; behaviour name: its main named callee is get_field_8_066620
 * called by: Class_12c3c4_m2_104264, Higyo_update_sleep_light
 */
u32 *Class_12c3c4_uses_get_field_8_109b18(int a0, int a1, u32 a2) {
    int iVar1;
    u32 *puVar2;

    iVar1 = talk_pick_highest_active(*(u32 *)(a1 + 4), a1, a2);
    if ((iVar1 == 0) || (iVar1 != 1)) {
        if (*(int *)(a0 + 4) == 2) {
            puVar2 = (u32 *)get_field_8_066620(a0);
        } else {
            get_field_8_066620(a0);
            puVar2 = &g_8c109b94;
        }
    } else {
        puVar2 = (u32 *)&g_8c109b8c;
    }
    return puVar2;
}

/*
 * game_vec_109b98  0x8c109b98
 * area name: game code; nothing names its area yet; behaviour name: mostly calls vec functions
 * called by: Higyo_choose_status_event
 */
u32 game_vec_109b98(int a0, int *a1, u32 a2) {
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
 * Class_12c3c4_m6_109d98  0x8c109d98
 */
u32 Class_12c3c4_m6_109d98(void) {
    int iVar1;

    iVar1 = speech_test_0fa2d8(0x8c35468c);
    return (u32)(iVar1 == 0);
}

/*
 * Class_12c3c4_uses_get_byte_c_s8_109dc4  0x8c109dc4
 * area name: sits between Class_12c3c4 functions (same compilation unit); behaviour name: its main named callee is
 * get_byte_c_s8 called by: Class_12c3c4_uses_get_byte_c_s8_109f08
 */
u32 Class_12c3c4_uses_get_byte_c_s8_109dc4(int a0, int a1) {
    u32 uVar1;
    u32 ar5_00;

    if (*(char *)(0x98 + a0) == '\x03') {
        ar5_00 = 1;
        uVar1 = get_byte_c_s8(*(u32 *)(a1 + 0x10), 1);
        if ((((char)uVar1 == '\x05') && (*(int *)(0x874 + a0) == 0)) &&
            (uVar1 = get_field_0_s8_02d1d0(*(int *)(a1 + 4) + 0xa8), (char)uVar1 == '\x01')) {
            return 1;
        }
    }
    return 0;
}

/*
 * get_byte_c_s8  0x8c109e34
 * signed byte a0[0xc + a1]
 * called by: Class_12c3c4_uses_get_byte_c_s8_109dc4
 */
int get_byte_c_s8(int a0, u32 a1) {
    return (int)*(char *)(a0 + (char)a1 + 0xc);
}

/*
 * Class_12c3c4_uses_set_field_0_u8_109e40  0x8c109e40
 * area name: sits between Class_12c3c4 functions (same compilation unit); behaviour name: its main named callee is
 * set_field_0_u8_02cb7c called by: Class_12c3c4_uses_get_byte_c_s8_109f08, Higyo_update_sleep_light
 */
int Class_12c3c4_uses_set_field_0_u8_109e40(int a0, int a1, u32 a2, u32 a3) {
    int iVar1;
    u32 uVar2;

    iVar1 = *(int *)(a0 + 0x874);
    if (iVar1 == 0) {
        *(u8 *)(a0 + 0x98) = 3;
        set_field_0_u8_02cb7c(*(int *)(a1 + 4) + 0xa8, 0, a2, a3);
        set_field_1_s8(*(int *)(a1 + 4) + 0xa8, 0);
        uVar2 = 1;
        set_flag_byte(*(u32 *)(a1 + 0x10), 1);
        iVar1 = percent_field_4_of_c(*(int *)(a1 + 4) + 0x90, uVar2, a2, a3);
        if (0x5e < iVar1) {
            uVar2 = get_field_4_02d1e0(*(int *)(a1 + 4) + 0x90);
            iVar1 = libgcc_divide_helper_0101e4(uVar2, 10);
            counter_set_clamped_4(*(int *)(a1 + 4) + 0x90, iVar1 * 9);
        }
        iVar1 = 0x874;
        *(u32 *)(a0 + 0x874) = 1;
    }
    return iVar1;
}

/*
 * Class_12c3c4_uses_get_byte_c_s8_109f08  0x8c109f08
 * area name: sits between Class_12c3c4 functions (same compilation unit); behaviour name: its callees mostly do:
 * uses_get_byte_c_s8
 */
int Class_12c3c4_uses_get_byte_c_s8_109f08(u32 a0, u32 a1, u32 a2, u32 a3) {
    int iVar1;
    u8 auStack_24[4];
    iVar1 = Class_12c3c4_uses_get_byte_c_s8_109dc4(a0, auStack_24);
    if (iVar1 == 1) {
        Class_12c3c4_uses_set_field_0_u8_109e40(a0, auStack_24, a2, a3);
        iVar1 = 1;
        g_8c27d430 = 1;
    }
    return iVar1;
}

/*
 * get_field_150_109f58  0x8c109f58
 */
u32 get_field_150_109f58(int a0) {
    return *(u32 *)(0x150 + a0);
}

/*
 * set_field_150_109f64  0x8c109f64
 */
int set_field_150_109f64(int a0, u32 a1) {
    int iVar1;

    iVar1 = 0x150;
    *(u32 *)(0x150 + a0) = a1;
    return iVar1;
}

/*
 * Class_12c3c4_m7_109f70  0x8c109f70
 */
int Class_12c3c4_m7_109f70(int a0, u8 *a1) {
    int iVar1;

    *(char *)(0x854 + a0) = (char)*(u32 *)(a1 + 4);
    *(u8 *)(0x98 + a0) = *a1;
    Class_12c3c4_load_record(a0 + 0x9c, a1 + 8);
    iVar1 = 0x99;
    *(u8 *)(0x99 + a0) = a1[1];
    return iVar1;
}

/*
 * Class_12c3c4_m8_109fc0  0x8c109fc0
 */
u32 Class_12c3c4_m8_109fc0(int a0, u8 *a1) {
    u32 uVar1;

    *(int *)(a1 + 4) = (int)*(char *)(0x854 + a0);
    *a1 = *(u8 *)(0x98 + a0);
    a1[1] = *(u8 *)(0x99 + a0);
    uVar1 = Class_12c3c4_save_record(a0 + 0x9c, a1 + 8);
    return uVar1;
}

/*
 * Class_12c3c4_m9_10a00c  0x8c10a00c
 */
int Class_12c3c4_m9_10a00c(int a0, u8 *a1, int a2) {
    int iVar1;

    if (a2 == 2) {
        *(char *)(0x865 + a0) = (char)*(u32 *)(a1 + 4);
    } else {
        *(char *)(0x854 + a0) = (char)*(u32 *)(a1 + 4);
    }
    *(u8 *)(0x98 + a0) = *a1;
    Class_12c3c4_load_record(a0 + 0x9c, a1 + 8);
    iVar1 = 0x99;
    *(u8 *)(0x99 + a0) = a1[1];
    return iVar1;
}

/*
 * Class_12c3c4_m10_10a074  0x8c10a074
 */
u32 Class_12c3c4_m10_10a074(int a0, u8 *a1, int a2) {
    u32 uVar1;

    if (a2 == 2) {
        *(int *)(a1 + 4) = (int)*(char *)(0x865 + a0);
    } else {
        *(int *)(a1 + 4) = (int)*(char *)(0x854 + a0);
    }
    *a1 = *(u8 *)(0x98 + a0);
    a1[1] = *(u8 *)(0x99 + a0);
    uVar1 = Class_12c3c4_save_record(a0 + 0x9c, a1 + 8);
    return uVar1;
}

/*
 * Class_12c3c4_m5_10a0dc  0x8c10a0dc
 */
int Class_12c3c4_m5_10a0dc(int a0, u32 a1, u32 a2, u32 a3) {
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
        if ((*(int *)(a0 + 0x40) == 0xb) || (iVar1 = *(int *)(a0 + 0x40), iVar1 == 10)) {
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
 * Class_12c3c4_m4_10a16c  0x8c10a16c
 */
u8 *Class_12c3c4_m4_10a16c(u32 unused_a0, u32 a1, u32 a2) {
    u8 *puVar1;
    int iVar2;

    iVar2 = (int)(char)a2;
    puVar1 = (u8 *)0x7;
    if ((iVar2 < 8) && (-1 < iVar2)) {
        puVar1 = (&switchD_8c10a18c::switchdataD_8c10a190)[iVar2];
        switch (iVar2) {
        case 0:
            puVar1 = (u8 *)recent5_push_unique(a1, 10, 0x1b);
            break;
        case 3:
            puVar1 = (u8 *)recent5_push_unique(a1, 0x10, 0x1b);
            break;
        case 6:
            puVar1 = (u8 *)recent5_push_unique(a1, 0x12, 0x1b);
            break;
        case 7:
            puVar1 = (u8 *)recent5_push_unique(a1, 0x13, 0x1b);
        }
    }
    return puVar1;
}

/*
 * get_field_100_10a1fc  0x8c10a1fc
 */
u32 get_field_100_10a1fc(int a0) {
    return *(u32 *)(0x100 + a0);
}

/*
 * get_field_870_10a208  0x8c10a208
 */
u32 get_field_870_10a208(int a0) {
    return *(u32 *)(0x870 + a0);
}

/*
 * static_init_vec3s_4708e0  0x8c10a214
 * static initialiser: builds 4 global Vec3 constants (8c4708e0..8c470904) and registers their destructors
 */
u32 static_init_vec3s_4708e0(u32 unused_a0, u32 a1, u32 a2, u32 a3) {
    u32 uVar1;
    code *pcVar2;
    u32 uVar3;
    char cVar4;

    cVar4 = '\0';
    uVar1 = Vec3_ctor_xyz(&g_8c126b20, a1, a2, a3);
    uVar3 = 0x8c4708e0;
    pcVar2 = Vec3_dtor;
    global_list_push(uVar1, Vec3_dtor, 0x8c4708e0, a3);
    uVar1 = Vec3_ctor_xyz(&g_8c126b30, pcVar2, uVar3, a3);
    uVar3 = 0x8c4708ec;
    pcVar2 = Vec3_dtor;
    global_list_push(uVar1, Vec3_dtor, 0x8c4708ec, a3);
    uVar1 = Vec3_ctor_xyz(&g_8c126b40, pcVar2, uVar3, a3);
    uVar3 = 0x8c4708f8;
    pcVar2 = Vec3_dtor;
    global_list_push(uVar1, Vec3_dtor, 0x8c4708f8, a3);
    uVar1 = Vec3_ctor_xyz(&g_8c126b50, pcVar2, uVar3, a3);
    global_list_push(uVar1, Vec3_dtor, 0x8c470904, a3);
    if (cVar4 == '\0') {
        g_8c126b60 = CONCAT44(_UNK_8c126b64, 0x800000);
        /* WARNING: Read-only address (ram,0x8c126b64) is written */
    } else {
        g_8c126b60 = 0xffffffff00800000;
    }
    return 0x8c125864;
}

/*
 * asr_calls_2_10a2cc  0x8c10a2cc
 * area name: in the asr library code range; behaviour name: calls 2 not yet named functions
 * called by: asr_copy_10a564
 */
u32 asr_calls_2_10a2cc(void) {
    u32 uVar1;

    thunk_FUN_8c013cd8();
    thunk_FUN_8c013cd8();
    uVar1 = thunk_FUN_8c013dfc();
    return uVar1;
}

/*
 * asr_copy_10a308  0x8c10a308
 * area name: in the asr library code range; behaviour name: mostly calls copy functions
 * called by: asr_copy_10ac3c, asr_talk_10ad00
 */
u32 asr_copy_10a308(int a0, u32 unused_a1, u32 a2, u32 a3) {
    u32 uVar1;
    int ar6_00;
    char cVar2;

    *(u32 *)(a0 + 0x30) = *(u32 *)(a0 + 0x28);
    *(u32 *)(a0 + 0x34) = *(u32 *)(a0 + 0x28);
    *(u32 *)(a0 + 0x38) = 0;
    *(u32 *)(a0 + 0x4c) = 2;
    *(u8 *)(a0 + 0x50) = 0;
    if (*(float *)(a0 + 0xa0) <= 0.0) {
        memset(*(u32 *)(a0 + 0x58), 0, *(int *)(a0 + 0x7c) << 2);
        *(u8 *)(a0 + 0x51) = 0;
    } else {
        memmove(*(u32 *)(a0 + 0x58), *(u32 *)(a0 + 0xa8), *(int *)(a0 + 0x7c) << 2);
        ar6_00 = *(int *)(a0 + 0x7c) << 2;
        memmove(*(u32 *)(a0 + 0x54), *(u32 *)(a0 + 0xa8), ar6_00);
        uVar1 = asr_talk_11b93c(*(u32 *)(a0 + 0xb0), *(u32 *)(a0 + 0x54));
        if ((uVar1 & 0xff) != 0) {
            return 1;
        }
        *(u8 *)(a0 + 0x51) = 1;
    }
    cVar2 = '\0';
    memset(*(u32 *)(a0 + 0x5c), 0, *(int *)(a0 + 0x7c) << 2);
    if (cVar2 == '\0') {
        *(u32 *)(a0 + 0x60) = 0x47c35000;
        *(u32 *)(a0 + 100) = *(u32 *)(a0 + 0xa0);
    } else {
        *(u64 *)(a0 + 0x60) = 0x3f00000047c35000;
        *(u64 *)(a0 + 100) = *(u64 *)(a0 + 0xa0);
    }
    *(u32 *)(a0 + 0x68) = 0;
    if (cVar2 == '\0') {
        *(u32 *)(a0 + 0x6c) = 0x3f000000;
        *(u32 *)(a0 + 0x70) = 0;
    } else {
        *(u64 *)(a0 + 0x6c) = 0x2fd62fe63f000000;
        *(u64 *)(a0 + 0x70) = 0x8c013ef400000000;
    }
    *(u32 *)(a0 + 0x74) = 0;
    *(u32 *)(a0 + 0x78) = 0;
    return 0;
}

/*
 * alt_entry_10a312  0x8c10a312
 * probably an entry 10 bytes into 8c10a308: it reads registers that code sets before it
 */
u32 alt_entry_10a312(u32 unused_a0, u32 unused_a1, u32 unused_a2, u32 a3) {
    int in_r0;
    u32 uVar1;
    int ar6_00;
    u32 unaff_r13;
    int unaff_r14;
    u32 in_fr3;
    u64 uVar2;
    u8 in_FPSCR_DN;
    u8 bVar3;
    u8 in_FPSCR_PR;
    u8 bVar4;
    u8 in_FPSCR_SZ;
    u8 bVar5;
    char cVar6;

    *(u32 *)(unaff_r14 + 0x30) = *(u32 *)(unaff_r14 + 0x28);
    *(u32 *)(unaff_r14 + 0x34) = *(u32 *)(unaff_r14 + 0x28);
    *(u32 *)(unaff_r14 + 0x38) = unaff_r13;
    *(u32 *)(in_r0 + unaff_r14) = 2;
    *(char *)(unaff_r14 + 0x50) = (char)unaff_r13;
    if (in_FPSCR_SZ == 0) {
        in_fr3 = g_8c10a3f8;
    }
    if (in_FPSCR_SZ == 0) {
        uVar2 = CONCAT44(*(u32 *)(0xa0 + unaff_r14), in_fr3);
    } else {
        uVar2 = *(u64 *)(0xa0 + unaff_r14);
    }
    if (in_FPSCR_PR != 0 || (float)((u64)uVar2 >> 0x20) <= (float)uVar2) {
        (*(code *)(&memset))(*(u32 *)(unaff_r14 + 0x58), 0, *(int *)(unaff_r14 + 0x7c) << 2, a3);
        *(char *)(unaff_r14 + 0x51) = (char)unaff_r13;
    } else {
        (*(code *)(&memmove))(*(u32 *)(unaff_r14 + 0x58), *(u32 *)(unaff_r14 + 0xa8), *(int *)(unaff_r14 + 0x7c) << 2,
                              a3);
        ar6_00 = *(int *)(unaff_r14 + 0x7c) << 2;
        bVar3 = 0;
        bVar4 = 0;
        bVar5 = (u8)((((u32)in_FPSCR_DN << 0x12 | (u32)in_FPSCR_PR << 0x13 | (u32)in_FPSCR_SZ << 0x14) & 0xffe7ffff &
                      0x100000) >>
                     0x14);
        (*(code *)(&memmove))(*(u32 *)(unaff_r14 + 0x54), *(u32 *)(unaff_r14 + 0xa8), ar6_00, a3);
        in_FPSCR_DN = 0;
        in_FPSCR_PR = 0;
        in_FPSCR_SZ =
            (u8)((((u32)bVar3 << 0x12 | (u32)bVar4 << 0x13 | (u32)bVar5 << 0x14) & 0xffe7ffff & 0x100000) >> 0x14);
        uVar1 = (*(code *)(&asr_talk_11b93c))(*(u32 *)(unaff_r14 + 0xb0), *(u32 *)(unaff_r14 + 0x54), ar6_00, a3);
        if ((uVar1 & 0xff) != 0) {
            return 1;
        }
        *(u8 *)(unaff_r14 + 0x51) = 1;
    }
    cVar6 = (char)((((u32)in_FPSCR_DN << 0x12 | (u32)in_FPSCR_PR << 0x13 | (u32)in_FPSCR_SZ << 0x14) & 0xffe7ffff &
                    0x100000) >>
                   0x14);
    (*(code *)(&memset))(*(u32 *)(unaff_r14 + 0x5c), 0, *(int *)(unaff_r14 + 0x7c) << 2, a3);
    if (cVar6 == '\0') {
        *(u32 *)(unaff_r14 + 0x60) = (u32)g_8c10a408;
        *(u32 *)(unaff_r14 + 100) = *(u32 *)(unaff_r14 + 0xa0);
    } else {
        *(u64 *)(unaff_r14 + 0x60) = CONCAT44(g_8c10a408._4_4_, (u32)g_8c10a408);
        *(u64 *)(unaff_r14 + 100) = *(u64 *)(unaff_r14 + 0xa0);
    }
    *(u32 *)(unaff_r14 + 0x68) = 0;
    if (cVar6 == '\0') {
        *(u32 *)(unaff_r14 + 0x6c) = g_8c10a408._4_4_;
        *(u32 *)(unaff_r14 + 0x70) = g_8c10a3f8;
    } else {
        *(u64 *)(unaff_r14 + 0x6c) = CONCAT44(_FUN_8c10a410, g_8c10a408._4_4_);
        *(u64 *)(unaff_r14 + 0x70) = CONCAT44((&memmove), g_8c10a3f8);
    }
    *(u32 *)(unaff_r14 + 0x74) = unaff_r13;
    *(u32 *)(unaff_r14 + 0x78) = 0;
    return 0;
}

/*
 * asr_copy_10a410  0x8c10a410
 * area name: in the asr library code range; behaviour name: mostly calls copy functions
 * called by: asr_copy_10ac3c
 */
u32 asr_copy_10a410(int a0, u32 *a1) {
    int iVar1;
    int a6;
    u32 *puVar2;
    u64 *puVar3;
    u32 extraout_fr3;
    u32 uVar4;
    u64 in_xd2;
    char cVar5;

    iVar1 = *(int *)(a0 + 0x7c);
    *a1 = *(u32 *)(a0 + 0x4c);
    *(u8 *)(a1 + 1) = *(u8 *)(a0 + 0x50);
    *(u8 *)(a1 + 2) = *(u8 *)(a0 + 0x51);
    puVar2 = a1 + 3;
    a6 = iVar1 * 4;
    memmove(puVar2, *(u32 *)(a0 + 0x54), a6);
    puVar2 = puVar2 + iVar1;
    memmove(puVar2, *(u32 *)(a0 + 0x58), a6);
    cVar5 = '\0';
    memmove(puVar2 + iVar1, *(u32 *)(a0 + 0x5c), a6);
    if (cVar5 == '\0') {
        uVar4 = *(u32 *)(a0 + 0x60);
    } else {
        in_xd2 = *(u64 *)(a0 + 0x60);
        uVar4 = extraout_fr3;
    }
    puVar3 = (u64 *)(puVar2 + iVar1 + iVar1);
    if (cVar5 == '\0') {
        *(u32 *)puVar3 = uVar4;
        *(u32 *)((int)puVar3 + 4) = *(u32 *)(a0 + 100);
    } else {
        *puVar3 = in_xd2;
        *(u64 *)((int)puVar3 + 4) = *(u64 *)(a0 + 100);
    }
    *(u32 *)(puVar3 + 1) = *(u32 *)(a0 + 0x68);
    if (cVar5 == '\0') {
        *(u32 *)((int)puVar3 + 0xc) = *(u32 *)(a0 + 0x6c);
        *(u32 *)(puVar3 + 2) = *(u32 *)(a0 + 0x70);
    } else {
        *(u64 *)((int)puVar3 + 0xc) = *(u64 *)(a0 + 0x6c);
        puVar3[2] = *(u64 *)(a0 + 0x70);
    }
    *(u32 *)((int)puVar3 + 0x14) = *(u32 *)(a0 + 0x74);
    *(u32 *)(puVar3 + 3) = *(u32 *)(a0 + 0x78);
    return 0x78;
}

/*
 * asr_copy_10a4bc  0x8c10a4bc
 * area name: in the asr library code range; behaviour name: mostly calls copy functions
 * called by: asr_copy_10ac3c
 */
u32 asr_copy_10a4bc(int a0, u32 *a1) {
    int iVar1;
    int a6;
    u64 *puVar2;
    u64 *puVar3;
    u32 *puVar4;
    char cVar5;

    iVar1 = *(int *)(a0 + 0x7c);
    *(u32 *)(a0 + 0x4c) = *a1;
    *(u8 *)(a0 + 0x50) = *(u8 *)(a1 + 1);
    puVar4 = a1 + 3;
    *(u8 *)(a0 + 0x51) = *(u8 *)(a1 + 2);
    a6 = iVar1 * 4;
    memmove(*(u32 *)(a0 + 0x54), puVar4, a6);
    puVar4 = puVar4 + iVar1;
    memmove(*(u32 *)(a0 + 0x58), puVar4, a6);
    cVar5 = '\0';
    memmove(*(u32 *)(a0 + 0x5c), puVar4 + iVar1, a6);
    puVar2 = (u64 *)(puVar4 + iVar1 + iVar1);
    if (cVar5 == '\0') {
        *(u32 *)(a0 + 0x60) = *(u32 *)puVar2;
        puVar3 = puVar2 + 1;
        *(u32 *)(a0 + 100) = *(u32 *)((int)puVar2 + 4);
    } else {
        *(u64 *)(a0 + 0x60) = *puVar2;
        puVar3 = puVar2 + 2;
        *(u64 *)(a0 + 100) = puVar2[1];
    }
    *(u32 *)(a0 + 0x68) = *(u32 *)puVar3;
    if (cVar5 == '\0') {
        *(u32 *)(a0 + 0x6c) = *(u32 *)((int)puVar3 + 4);
        puVar4 = (u32 *)((int)puVar3 + 0xc);
        *(u32 *)(a0 + 0x70) = *(u32 *)(puVar3 + 1);
    } else {
        *(u64 *)(a0 + 0x6c) = *(u64 *)((int)puVar3 + 4);
        puVar4 = (u32 *)((int)puVar3 + 0x14);
        *(u64 *)(a0 + 0x70) = *(u64 *)((int)puVar3 + 0xc);
    }
    *(u32 *)(a0 + 0x74) = *puVar4;
    *(u32 *)(a0 + 0x78) = puVar4[1];
    return 0x78;
}

/*
 * asr_copy_10a564  0x8c10a564
 * area name: in the asr library code range; behaviour name: mostly calls copy functions
 * called by: asr_copy_10a80c
 */
u32 asr_copy_10a564(int a0, u32 a1) {
    u32 uVar1;
    double *pdVar2;
    u64 *puVar3;
    int iVar4;
    float *a5;
    int a6;
    float *a5_00;
    float *a4_00;
    float **ppfVar6;
    double *pdVar7;
    float **ppfVar8;
    double in_dr0;
    double dVar9;
    u64 uVar10;
    float fVar11;
    u32 uVar12;
    u64 in_dr12;
    u32 uVar13;
    u64 in_dr14;
    double dVar14;
    u64 in_xd2;
    u8 bVar15;
    u8 bVar16;
    char cVar17;
    u8 bVar18;
    float *apfStack_44[3];
    u32 uStack_38;
    u32 uStack_2c;
    u32 uStack_28;
    u32 uStack_24;
    u32 uStack_20;

    uStack_20 = (u32)in_dr14;
    uStack_24 = (u32)((u64)in_dr14 >> 0x20);
    uStack_28 = (u32)in_dr12;
    uStack_2c = (u32)((u64)in_dr12 >> 0x20);
    ppfVar8 = apfStack_44;
    a5_00 = *(float **)(a0 + 0xa4);
    iVar4 = *(int *)(a0 + 0x7c);
    a6 = iVar4 * 4;
    if (*(float *)(a0 + 0x80) < *(float *)(a0 + 0x70)) {
        *(u32 *)(a0 + 0x70) = 0;
        memmove(*(u32 *)(a0 + 0x54), *(u32 *)(a0 + 0x58), a6);
        a1 = *(u32 *)(a0 + 0x54);
        uVar1 = asr_talk_11b93c(*(u32 *)(a0 + 0xb0), a1);
        if ((uVar1 & 0xff) != 0) {
            return 0;
        }
        *(u8 *)(a0 + 0x51) = 1;
    }
    uVar13 = (u32)in_dr14;
    if ((*(int *)(a0 + 0x38) != 0) && (*(char *)(**(int **)(a0 + 0x10) + 0x30) != '\x01')) {
        pdVar2 = (double *)mring_write_advance(**(u32 **)(a0 + 0x10));
        a4_00 = (float *)((int)pdVar2 + 4);
        if (*(char *)(a0 + 0x51) == '\0') {
            cVar17 = '\0';
            memmove(a4_00, a5_00, a6);
            a5 = a5_00;
            ppfVar8 = apfStack_44;
        } else {
            apfStack_44[0] = a4_00 + iVar4;
            a5 = *(float **)(a0 + 0x30);
            cVar17 = '\0';
            memmove(a4_00, a5, a6);
            uStack_38 = *(u32 *)(a0 + 0x54);
            if (cVar17 == '\0') {
                uVar12 = 0;
                dVar14 = (double)CONCAT44(0x40000000, uVar13);
            } else {
                uVar12 = 0x3ff00000;
                dVar14 = -1.5697950159475534e-250;
            }
            if (cVar17 == '\0') {
                dVar14 = (double)CONCAT44((int)((u64)dVar14 >> 0x20), uVar12);
            }
            ppfVar6 = apfStack_44;
            if (a4_00 < apfStack_44[0]) {
                do {
                    puVar3 = *(u64 **)((int)ppfVar6 + 0xc);
                    *(u32 **)((int)ppfVar6 + 0xc) = (u32 *)((int)puVar3 + 4);
                    if (cVar17 == '\0') {
                        uVar10 = CONCAT44(*a4_00, *(u32 *)puVar3);
                    } else {
                        in_xd2 = *puVar3;
                        uVar10 = *(u64 *)a4_00;
                    }
                    fVar11 = (float)((u64)uVar10 >> 0x20) - (float)uVar10;
                    *a4_00 = fVar11;
                    if (*a5_00 <= fVar11) {
                        fVar11 = *a4_00;
                        *(float *)((int)ppfVar6 + 8) = fVar11;
                        *(double *)((int)ppfVar6 + -8) = (double)fVar11;
                        fVar11 = (float)((u64)((double)(*a5_00 - *(float *)((int)ppfVar6 + 8)) * dVar14) >> 0x20);
                        thunk_FUN_8c013cd8();
                        bVar15 = 0;
                        bVar16 = 0;
                        bVar18 = 0;
                        thunk_FUN_8c013dfc();
                        cVar17 =
                            (char)((((u32)bVar15 << 0x12 | (u32)bVar16 << 0x13 | (u32)bVar18 << 0x14) & 0x100000) >>
                                   0x14);
                    } else {
                        fVar11 = *a5_00;
                        *(float *)((int)ppfVar6 + 4) = fVar11;
                        *(double *)((int)ppfVar6 + -8) = (double)fVar11;
                        fVar11 = (float)((u64)((double)(*a4_00 - *(float *)((int)ppfVar6 + 4)) * dVar14) >> 0x20);
                        thunk_FUN_8c013cd8();
                        bVar15 = 0;
                        bVar16 = 0;
                        bVar18 = 0;
                        thunk_FUN_8c013dfc();
                        cVar17 =
                            (char)((((u32)bVar15 << 0x12 | (u32)bVar16 << 0x13 | (u32)bVar18 << 0x14) & 0x100000) >>
                                   0x14);
                    }
                    pdVar7 = (double *)((int)ppfVar6 + -8);
                    if (cVar17 == '\0') {
                        dVar9 = 0.5;
                    } else {
                        dVar9 = -7.963806069003694e+87;
                    }
                    ppfVar8 = ppfVar6;
                    if (cVar17 != '\0') {
                        ppfVar8 = (float **)((int)ppfVar6 + 8);
                        pdVar7 = (double *)ppfVar6;
                    }
                    in_dr0 = *pdVar7 + (double)fVar11 * dVar9;
                    if (cVar17 == '\0') {
                        *a4_00 = (float)in_dr0;
                    } else {
                        *(u64 *)a4_00 = in_xd2;
                    }
                    a4_00 = a4_00 + 1;
                    a5_00 = a5_00 + 1;
                    ppfVar6 = ppfVar8;
                } while (a4_00 < *ppfVar8);
            }
        }
        if (cVar17 == '\0') {
            *(u32 *)((int)ppfVar8 + 0x10) = *(u32 *)(*(int *)(a0 + 0x30) + a6);
        } else {
            *(u64 *)((int)ppfVar8 + 0x10) = *(u64 *)(*(int *)(a0 + 0x30) + a6);
        }
        cVar17 = '\0';
        asr_calls_2_10a2cc();
        if (cVar17 == '\0') {
            *(int *)pdVar2 = (int)((u64)in_dr0 >> 0x20);
        } else {
            *pdVar2 = in_dr0;
        }
        iVar4 = *(int *)(a0 + 0x30) + *(int *)(a0 + 0x40) * 4;
        *(int *)(a0 + 0x30) = iVar4;
        if (iVar4 == *(int *)(a0 + 0x2c)) {
            *(u32 *)(a0 + 0x30) = *(u32 *)(a0 + 0x28);
        }
        *(int *)(a0 + 0x38) = *(int *)(a0 + 0x38) + -1;
        return 1;
    }
    return 0;
}

/*
 * asr_copy_10a80c  0x8c10a80c
 * area name: in the asr library code range; behaviour name: mostly calls copy functions
 */
u32 asr_copy_10a80c(int a0, u32 a1, u32 unused_a2, float *a3) {
    float fVar1;
    u32 uVar2;
    int iVar3;
    float *pfVar4;
    float *ar5_00;
    float *pfVar5;
    float *a6;
    int iVar6;
    float fVar7;
    float fVar8;
    float fVar9;
    float fVar10;
    float fVar11;
    float in_fr15;
    u64 in_xd2;
    u64 uVar12;
    char cVar13;
    u64 uStack_34;
    u32 uStack_2c;
    float *pfStack_28;
    float *pfStack_24;
    u64 *puStack_20;

    fVar7 = *(float *)(a0 + 0x88);
    if (fVar7 <= *(float *)(a0 + 100)) {
        *(u32 *)(a0 + 0x4c) = 0;
        *(u8 *)(a0 + 0x50) = 1;
    }
    if (*(char *)(a0 + 0x50) != '\0') {
        if (*(int *)(a0 + 0x38) == 0) {
            *(u8 *)(a0 + 0x50) = 0;
        }
        if (*(char *)(a0 + 0x50) != '\0') {
            asr_copy_10a564(a0, a1);
            return 1;
        }
    }
    if (*(char *)(**(int **)(a0 + 0x10) + 0x30) != '\x01') {
        cVar13 = '\0';
        uVar2 = asr_talk_112074(*(u32 *)(a0 + 0xc), 5, (int)&uStack_34 + 4, a3);
        ar5_00 = uStack_34._4_4_;
        if ((uVar2 & 0xff) == 0) {
            return 0;
        }
        iVar6 = *(int *)(a0 + 0x7c);
        if (cVar13 == '\0') {
            in_fr15 = *pfStack_28;
            uStack_34 = CONCAT44(uStack_34._4_4_, *(u32 *)puStack_20);
            fVar7 = *pfStack_24;
            *(float *)(a0 + 0x60) = fVar7;
        } else {
            uStack_34 = *puStack_20;
            in_xd2 = *(u64 *)pfStack_24;
            *(u64 *)(a0 + 0x60) = in_xd2;
        }
        memmove(*(u32 *)(a0 + 0x5c), uStack_2c, iVar6);
        pfVar5 = (float *)(iVar6 * 4);
        cVar13 = '\0';
        a6 = pfVar5;
        memmove(*(u32 *)(a0 + 0x34), ar5_00, pfVar5);
        uVar12 = uStack_34;
        if (cVar13 == '\0') {
            uVar12 = in_xd2;
            fVar7 = (float)uStack_34;
        }
        if (cVar13 == '\0') {
            *(float *)(*(int *)(a0 + 0x34) + (int)pfVar5) = fVar7;
        } else {
            *(u64 *)(*(int *)(a0 + 0x34) + (int)pfVar5) = uVar12;
        }
        iVar3 = *(int *)(a0 + 0x34) + *(int *)(a0 + 0x40) * 4;
        *(int *)(a0 + 0x34) = iVar3;
        if (iVar3 == *(int *)(a0 + 0x2c)) {
            *(u32 *)(a0 + 0x34) = *(u32 *)(a0 + 0x28);
        }
        *(int *)(a0 + 0x38) = *(int *)(a0 + 0x38) + 1;
        *(int *)(a0 + 0x74) = *(int *)(a0 + 0x74) + 1;
        if (cVar13 == '\0') {
            fVar7 = 0.0009999999;
        }
        if (fVar7 < in_fr15) {
            a3 = *(float **)(a0 + 0x5c);
            pfVar4 = *(float **)(a0 + 0x58);
            a6 = (float *)(*(int *)(a0 + 0x34) + *(int *)(a0 + 0x48) * -4);
            ar5_00 = (float *)((int)pfVar5 + (int)pfVar4);
            if (a6 < *(float **)(a0 + 0x28)) {
                a6 = a6 + *(int *)(a0 + 0x44);
            }
            *(float *)(a0 + 100) = *(float *)(a0 + 100) + in_fr15;
            if (*(float *)(a0 + 0x88) <= *(float *)(a0 + 100)) {
                *(u32 *)(a0 + 100) = *(u32 *)(a0 + 0x88);
            }
            fVar7 = in_fr15 / *(float *)(a0 + 100);
            *(float *)(a0 + 0x70) = *(float *)(a0 + 0x70) + fVar7;
            fVar11 = fVar7 * *(float *)(a0 + 0x90);
            if (1.0 < fVar11) {
                fVar11 = 1.0;
            }
            fVar7 = fVar7 / *(float *)(a0 + 0x90);
            if (1.0 < fVar7) {
                fVar7 = 1.0;
            }
            fVar8 = 0.0;
            for (; pfVar4 < ar5_00; pfVar4 = pfVar4 + 1) {
                fVar10 = *a6;
                if (fVar10 < *a3 + *(float *)(a0 + 0x94)) {
                    fVar10 = *a3 + *(float *)(a0 + 0x94);
                }
                fVar9 = fVar10 - *pfVar4;
                if (fVar9 < *(float *)(a0 + 0x98)) {
                    fVar9 = *(float *)(a0 + 0x98);
                }
                fVar1 = fVar7;
                if (0.0 < fVar9) {
                    fVar1 = fVar11;
                }
                fVar9 = *pfVar4 + fVar9 * fVar1;
                fVar10 = fVar10 - fVar9;
                *pfVar4 = fVar9;
                if (fVar10 <= 0.0) {
                    fVar10 = fVar10 / *(float *)(a0 + 0x90);
                } else {
                    fVar10 = fVar10 * *(float *)(a0 + 0x90);
                }
                a6 = a6 + 1;
                fVar8 = fVar8 + fVar10;
                a3 = a3 + 1;
            }
            fVar7 = *(float *)(a0 + 0x6c) + in_fr15;
            *(float *)(a0 + 0x6c) = fVar7;
            if (200.0 < fVar7) {
                *(u32 *)(a0 + 0x6c) = 0x43480000;
            }
            fVar11 = in_fr15 / *(float *)(a0 + 0x6c);
            *(float *)(a0 + 0x70) = *(float *)(a0 + 0x70) + fVar11;
            fVar7 = (float)iVar6;
            if (iVar6 < 0) {
                fVar7 = fVar7 + 4.2949673e+09;
            }
            fVar8 = fVar8 * (fVar11 / fVar7);
            if (0.7 < fVar8) {
                fVar8 = 0.7;
            }
            if (fVar8 < -0.7) {
                fVar8 = -0.7;
            }
            for (pfVar5 = *(float **)(a0 + 0x58); pfVar5 < ar5_00; pfVar5 = pfVar5 + 1) {
                *pfVar5 = *pfVar5 + fVar8;
            }
        }
        if ((in_fr15 == 0.0) && (*(u32 *)(a0 + 0x9c) < *(u32 *)(a0 + 0x74))) {
            *(int *)(a0 + 0x78) = *(int *)(a0 + 0x78) + 1;
            iVar6 = *(int *)(a0 + 0x68) + 1;
            *(int *)(a0 + 0x68) = iVar6;
            if (0x32 < iVar6) {
                *(u32 *)(a0 + 0x68) = 0x32;
            }
        } else {
            *(u32 *)(a0 + 0x78) = 0;
        }
        iVar6 = *(int *)(a0 + 0x4c);
        if (iVar6 == 0) {
            asr_copy_10a564(a0, ar5_00);
        } else if (iVar6 == 1) {
            if (*(int *)(a0 + 0x84) < *(int *)(a0 + 0x78)) {
                *(u32 *)(a0 + 0x4c) = 2;
                *(u8 *)(a0 + 0x50) = 1;
                asr_copy_10a564(a0, ar5_00);
            } else if (*(int *)(a0 + 0x38) == *(int *)(a0 + 0x3c)) {
                asr_copy_10a564(a0, ar5_00);
            }
        } else if (iVar6 == 2) {
            if (in_fr15 <= 0.0009999999) {
                asr_copy_10a564(a0, ar5_00);
            } else {
                *(u32 *)(a0 + 0x4c) = 1;
            }
        }
    }
    if ((*(char *)(a0 + 0x50) == '\0') &&
        (*(int *)(*(int *)(**(int **)(a0 + 0xc) + 0x40) + (*(int **)(a0 + 0xc))[1] * 4) ==
         *(int *)(**(int **)(a0 + 0xc) + 0x3c))) {
        return 0;
    }
    return 1;
}

/*
 * asr_free_model  0x8c10abf4
 * frees the buffers at +0x28 and +0x58 and the model parts at +0xb0
 * called by: asr_copy_10ac3c
 */
u32 asr_free_model(int *a0) {
    u32 uVar1;
    int ar5_00;

    ar5_00 = *a0;
    (**(code **)(ar5_00 + 0x18))(ar5_00, a0[10]);
    (**(code **)(ar5_00 + 0x18))(ar5_00, a0[0x16]);
    uVar1 = asr_free_model_parts(a0[0x2c], ar5_00);
    return uVar1;
}

/*
 * alt_entry_10abfa  0x8c10abfa
 * probably an entry 6 bytes into 8c10abf4: it reads registers that code sets before it
 */
u32 alt_entry_10abfa(u32 unused_a0, u32 unused_a1, u32 a2, u32 a3) {
    u32 uVar1;
    int *unaff_r13;
    int a4;

    a4 = *unaff_r13;
    (**(code **)(a4 + 0x18))(a4, unaff_r13[10], a2, a3);
    (**(code **)(a4 + 0x18))(a4, unaff_r13[0x16], a2, a3);
    uVar1 = asr_free_model_parts(*(u32 *)((int)0xb0 + (int)unaff_r13), a4);
    return uVar1;
}

/*
 * asr_copy_10ac3c  0x8c10ac3c
 * area name: sits between asr functions (same compilation unit); behaviour name: mostly calls copy functions
 */
u32 asr_copy_10ac3c(u32 unused_a0, u32 unused_a1, int a2, int *a3) {
    int in_r0;
    u32 uVar1;
    int iVar2;
    int unaff_r14;
    char in_T;

    if (in_T == '\x01') {
        *(u8 *)(unaff_r14 + 0x50) = 1;
        return 1;
    }
    if (in_r0 == 3) {
        if (a2 != 0) {
            asr_copy_10a410(unaff_r14, *a3 + a2);
        }
        iVar2 = *a3 + (*(int *)(unaff_r14 + 0x7c) * 3 + 10) * 4;
    } else {
        if (in_r0 != 4) {
            if (in_r0 == 0xf8) {
                *a3 = *(int *)(unaff_r14 + 0x38);
                return 1;
            }
            if (in_r0 == 0xff) {
                asr_free_model(unaff_r14);
                asr_calc_120668(unaff_r14, unused_a1, a2, a3);
                return 1;
            }
            return 0;
        }
        if (a2 == 0) {
            uVar1 = asr_copy_10a308(unaff_r14, unused_a1, 0, a3);
            if ((uVar1 & 0xff) == 0) {
                return 1;
            }
            return 0;
        }
        asr_copy_10a4bc(unaff_r14, *a3 + a2);
        iVar2 = *a3 + (*(int *)(unaff_r14 + 0x7c) * 3 + 10) * 4;
    }
    *a3 = iVar2;
    return 1;
}

/*
 * asr_talk_10ad00  0x8c10ad00
 * area name: sits between asr functions (same compilation unit); behaviour name: mostly calls talk functions
 */
u32 asr_talk_10ad00(int *a0, u32 unused_a1, u32 a2, u32 a3) {
    char cVar1;
    u8 *puVar2;
    u8 *puVar3;
    u8 *puVar4;
    int iVar5;
    u32 uVar6;
    u32 uVar7;
    u32 ar6_00;
    u32 uVar8;
    int a4;
    double in_dr0;
    double in_dr2;
    u64 uVar9;
    double dVar10;
    u64 in_xd2;
    short sVar11;
    u8 in_FPSCR_CAUSE;
    u8 bVar12;
    u8 bVar13;
    u8 bVar14;
    u8 in_FPSCR_DN;
    u8 bVar15;
    u8 in_FPSCR_PR;
    u8 in_FPSCR_SZ;

    puVar2 = (&asr_state_has_event);
    a4 = *a0;
    asr_state_has_event(a0, 9, a2);
    uVar8 =
        ((u32)in_FPSCR_CAUSE << 0xc | (u32)in_FPSCR_DN << 0x12 | (u32)in_FPSCR_PR << 0x13 | (u32)in_FPSCR_SZ << 0x14) &
        0xffe7ffff;
    bVar12 = 0;
    bVar13 = 0;
    bVar15 = (u8)((uVar8 & 0x80000) >> 0x13);
    bVar14 = (u8)((uVar8 & 0x100000) >> 0x14);
    if (bVar15 == 0) {
        uVar8 = (u32)(float)((u64)in_dr0 >> 0x20);
    } else {
        uVar8 = (u32)in_dr0;
    }
    uVar8 = uVar8 & 0xffff;
    a0[0x1f] = uVar8;
    iVar5 = uVar8 + 1;
    *(short *)(*(int *)a0[4] + 0xc) = (short)iVar5 * 4;
    (*(code *)puVar2)(a0, 1, a2, a3);
    uVar6 = ((u32)bVar12 << 0xc | (u32)bVar13 << 0x12 | (u32)bVar15 << 0x13 | (u32)bVar14 << 0x14) & 0xffe7ffff;
    bVar13 = 0;
    bVar15 = 0;
    bVar14 = (u8)((uVar6 & 0x80000) >> 0x13);
    bVar12 = (u8)((uVar6 & 0x100000) >> 0x14);
    if (bVar14 == 0) {
        uVar6 = (u32)(float)((u64)in_dr0 >> 0x20);
    } else {
        uVar6 = (u32)in_dr0;
    }
    *(u32 *)((int)0x9c + (int)a0) = uVar6 & 0xffff;
    (*(code *)puVar2)(a0, 2, a2, a3);
    uVar6 = ((u32)bVar13 << 0xc | (u32)bVar15 << 0x12 | (u32)bVar14 << 0x13 | (u32)bVar12 << 0x14) & 0xffe7ffff;
    bVar12 = 0;
    bVar13 = 0;
    bVar15 = (u8)((uVar6 & 0x80000) >> 0x13);
    bVar14 = (u8)((uVar6 & 0x100000) >> 0x14);
    if (bVar15 == 0) {
        uVar6 = (u32)(float)((u64)in_dr0 >> 0x20);
    } else {
        uVar6 = (u32)in_dr0;
    }
    a0[0xf] = uVar6 & 0xffff;
    a0[0x10] = iVar5;
    a0[0x11] = iVar5 * a0[0xf];
    a0[0x12] = a0[0x10] * (a0[0x27] + 1);
    iVar5 = (**(code **)(a4 + 0x14))(a4, a0[0x11], 4, a3);
    a0[10] = iVar5;
    a0[0xb] = a0[0x11] * 4 + a0[10];
    uVar7 = 4;
    uVar6 = ((u32)bVar12 << 0xc | (u32)bVar13 << 0x12 | (u32)bVar15 << 0x13 | (u32)bVar14 << 0x14) & 0xffe7ffff;
    bVar12 = 0;
    bVar13 = 0;
    bVar15 = (u8)((uVar6 & 0x80000) >> 0x13);
    bVar14 = (u8)((uVar6 & 0x100000) >> 0x14);
    iVar5 = (**(code **)(a4 + 0x14))(a4, uVar8 * 3, 4, a3);
    a0[0x16] = iVar5;
    iVar5 = a0[0x16] + uVar8 * 4;
    a0[0x17] = iVar5;
    uVar6 = 0xffe7ffff;
    a0[0x15] = uVar8 * 4 + iVar5;
    uVar6 = ((u32)bVar12 << 0xc | (u32)bVar13 << 0x12 | (u32)bVar15 << 0x13 | (u32)bVar14 << 0x14) & uVar6;
    bVar12 = 0;
    bVar13 = 0;
    bVar15 = (u8)((uVar6 & 0x80000) >> 0x13);
    bVar14 = (u8)((uVar6 & 0x100000) >> 0x14);
    (*(code *)puVar2)(a0, 3, uVar7, a3);
    if (bVar14 == 0) {
        in_dr2 = (double)CONCAT44((int)((u64)in_dr2 >> 0x20), g_8c10aeac);
    } else {
        in_xd2 = CONCAT44(g_8c10aeb0, g_8c10aeac);
    }
    uVar6 = ((u32)bVar12 << 0xc | (u32)bVar13 << 0x12 | (u32)bVar15 << 0x13 | (u32)bVar14 << 0x14) & 0xffe7ffff;
    bVar12 = 0;
    bVar14 = 0;
    bVar15 = (u8)((uVar6 & 0x80000) >> 0x13);
    bVar13 = (u8)((uVar6 & 0x100000) >> 0x14);
    if (bVar15 == 0) {
        in_dr0 = (double)CONCAT44((float)((u64)in_dr0 >> 0x20) * SUB84(in_dr2, 0), SUB84(in_dr0, 0));
    } else {
        in_dr0 = in_dr0 * in_dr2;
    }
    if (bVar13 == 0) {
        *(int *)((int)0x94 + (int)a0) = (int)((u64)in_dr0 >> 0x20);
    } else {
        *(double *)((int)0x94 + (int)a0) = in_dr0;
    }
    (*(code *)puVar2)(a0, 4, uVar7, a3);
    if (bVar13 == 0) {
        in_dr2 = (double)CONCAT44((int)((u64)in_dr2 >> 0x20), g_8c10aeac);
    } else {
        in_xd2 = CONCAT44(g_8c10aeb0, g_8c10aeac);
    }
    uVar6 = ((u32)bVar12 << 0xc | (u32)bVar14 << 0x12 | (u32)bVar15 << 0x13 | (u32)bVar13 << 0x14) & 0xffe7ffff;
    bVar14 = 0;
    bVar12 = 0;
    bVar13 = (u8)((uVar6 & 0x80000) >> 0x13);
    bVar15 = (u8)((uVar6 & 0x100000) >> 0x14);
    if (bVar13 == 0) {
        in_dr0 = (double)CONCAT44((float)((u64)in_dr0 >> 0x20) * SUB84(in_dr2, 0), SUB84(in_dr0, 0));
    } else {
        in_dr0 = in_dr0 * in_dr2;
    }
    if (bVar15 == 0) {
        *(int *)((int)0x98 + (int)a0) = (int)((u64)in_dr0 >> 0x20);
        uVar9 = CONCAT44(g_8c10aeb0, SUB84(in_dr2, 0));
    } else {
        *(double *)((int)0x98 + (int)a0) = in_dr0;
        uVar9 = CONCAT44(g_8c10aeb4, g_8c10aeb0);
    }
    if (bVar15 == 0) {
        *(int *)((int)0x90 + (int)a0) = (int)((u64)uVar9 >> 0x20);
    } else {
        *(u64 *)((int)0x90 + (int)a0) = uVar9;
    }
    (*(code *)puVar2)(a0, 5, uVar7, a3);
    iVar5 = (int)0x88;
    uVar6 = ((u32)bVar14 << 0xc | (u32)bVar12 << 0x12 | (u32)bVar13 << 0x13 | (u32)bVar15 << 0x14) & 0xffe7ffff;
    bVar12 = 0;
    bVar13 = 0;
    bVar15 = (u8)((uVar6 & 0x80000) >> 0x13);
    bVar14 = (u8)((uVar6 & 0x100000) >> 0x14);
    if (bVar15 == 0) {
        sVar11 = (short)(int)(float)((u64)in_dr0 >> 0x20);
    } else {
        sVar11 = (short)(int)in_dr0;
    }
    if (bVar14 == 0) {
        *(float *)(iVar5 + (int)a0) = (float)(int)sVar11;
        dVar10 = (double)CONCAT44(g_8c10aeb8, *(u32 *)(iVar5 + (int)a0));
    } else {
        *(u64 *)(iVar5 + (int)a0) = in_xd2;
        dVar10 = (double)CONCAT44(g_8c10aebc, g_8c10aeb8);
    }
    if (bVar15 == 0) {
        dVar10 = (double)CONCAT44((float)((u64)dVar10 >> 0x20) / SUB84(dVar10, 0), SUB84(dVar10, 0));
    } else {
        dVar10 = dVar10 / dVar10;
    }
    if (bVar14 == 0) {
        *(int *)((int)0x80 + (int)a0) = (int)((u64)dVar10 >> 0x20);
    } else {
        *(double *)((int)0x80 + (int)a0) = dVar10;
    }
    (*(code *)puVar2)(a0, 6, uVar7, a3);
    uVar6 = ((u32)bVar12 << 0xc | (u32)bVar13 << 0x12 | (u32)bVar15 << 0x13 | (u32)bVar14 << 0x14) & 0xffe7ffff;
    bVar12 = 0;
    bVar13 = 0;
    bVar15 = (u8)((uVar6 & 0x80000) >> 0x13);
    bVar14 = (u8)((uVar6 & 0x100000) >> 0x14);
    if (bVar15 == 0) {
        sVar11 = (short)(int)(float)((u64)in_dr0 >> 0x20);
    } else {
        sVar11 = (short)(int)in_dr0;
    }
    *(int *)((int)0x84 + (int)a0) = (int)sVar11;
    (*(code *)puVar2)(a0, 7, uVar7, a3);
    puVar4 = (&DATA_8c126b78);
    puVar3 = (&DATA_8c126bcc);
    if (bVar14 == 0) {
        dVar10 = (double)CONCAT44((int)((u64)dVar10 >> 0x20), g_8c10aec4);
    }
    uVar6 = ((u32)bVar12 << 0xc | (u32)bVar13 << 0x12 | (u32)bVar15 << 0x13 | (u32)bVar14 << 0x14) & 0xffe7ffff;
    cVar1 = (char)((uVar6 & 0x100000) >> 0x14);
    if ((char)((uVar6 & 0x80000) >> 0x13) == '\0') {
        in_dr0 = (double)CONCAT44((float)((u64)in_dr0 >> 0x20) * SUB84(dVar10, 0), SUB84(in_dr0, 0));
    } else {
        in_dr0 = in_dr0 * dVar10;
    }
    if (cVar1 == '\0') {
        *(int *)((int)0x8c + (int)a0) = (int)((u64)in_dr0 >> 0x20);
        uVar9 = CONCAT44(g_8c10af6c, SUB84(dVar10, 0));
    } else {
        *(double *)((int)0x8c + (int)a0) = in_dr0;
        uVar9 = CONCAT44((&DATA_8c126bcc), g_8c10af6c);
    }
    iVar5 = (int)0xa0;
    if (cVar1 == '\0') {
        *(int *)(iVar5 + (int)a0) = (int)((u64)uVar9 >> 0x20);
    } else {
        *(u64 *)(iVar5 + (int)a0) = uVar9;
    }
    *(u8 **)(iVar5 + 4 + (int)a0) = puVar3;
    puVar3 = (&DATA_8c128fac);
    *(u8 **)(iVar5 + 8 + (int)a0) = puVar4;
    *(u8 **)(iVar5 + 0xc + (int)a0) = puVar3;
    (*(code *)puVar2)(a0, 8, uVar7, a3);
    ar6_00 = *(u32 *)((int)0xac + (int)a0);
    uVar7 = asr_talk_11b6b8(a4, uVar8, ar6_00, a3);
    *(u32 *)((int)0xb0 + (int)a0) = uVar7;
    uVar8 = asr_copy_10a308(a0, uVar8, ar6_00, a3);
    return (u32)((uVar8 & 0xff) != 0);
}

/*
 * asr_module_def_10af3c  0x8c10af3c
 * registers an ASR processing module (inputs: 5, outputs: 1, state size 0xb4) through 8c120580
 */
u32 asr_module_def_10af3c(u32 a0, u32 a1) {
    u32 uVar1;

    uVar1 = (*(code *)(&asr_talk_120580))(a0, a1, 5, 1, (&asr_copy_10a80c), (&asr_talk_10ad00), (&DATA_8c10ac30),
                                          (int)0xb4);
    return uVar1;
}

/*
 * asr_calc_10af94  0x8c10af94
 * area name: sits between asr functions (same compilation unit); behaviour name: integer arithmetic on its arguments
 * called by: asr_calls_calc_10afbe
 */
int asr_calc_10af94(int a0) {
    int iVar1;

    iVar1 = (int)0xa4;
    return (*(int *)(iVar1 + a0) * 2 + a0 + (int)0xb4 + 3U & 0xfffffffc) + (*(int *)(iVar1 + -0x1c + a0) + 1) * 4 +
           (*(int *)(iVar1 + -0x14 + a0) + 1) * 4;
}

/*
 * asr_calls_calc_10afbe  0x8c10afbe
 * area name: sits between asr functions (same compilation unit); behaviour name: its callees mostly do: calc
 * called by: asr_uses_asr_call_11eb6c_err_10c0b4, asr_uses_lib11c_check_handle_10b1ec,
 * asr_uses_lib11c_take_error_10b6cc
 */
int asr_calls_calc_10afbe(int a0) {
    int iVar1;
    int iVar2;

    iVar1 = asr_calc_10af94(a0);
    iVar2 = (int)0xa8;
    return (iVar1 + *(int *)(iVar2 + a0) * 2 + 3U & 0xfffffffc) + (*(int *)(iVar2 + -0x1c + a0) + 1) * 4 +
           (*(int *)(iVar2 + -0x14 + a0) + 1) * 4;
}

/*
 * asr_vcall_8_10aff4  0x8c10aff4
 * calls interface slot 8 with the (id, sub-id) context of its handle pair
 */
u32 asr_vcall_8_10aff4(u32 a0, int *a1, u32 a2, u32 a3) {
    u32 uVar1;
    u32 uStack_10;
    u32 uStack_c;

    uStack_10 = *(u32 *)(*a1 + 4);
    uStack_c = 0;
    if (a1[1] != 0) {
        uStack_c = *(u32 *)(a1[1] + 8);
    }
    uVar1 = (**(code **)(*a1 + 8))(a0, &uStack_10, a2, a3);
    return uVar1;
}

/*
 * asr_vcall_0xc_10b02a  0x8c10b02a
 * calls interface slot 0xc with the (id, sub-id) context of its handle pair
 */
u32 asr_vcall_0xc_10b02a(u32 a0, int *a1, u32 a2, u32 a3) {
    u32 uVar1;
    u32 uStack_10;
    u32 uStack_c;

    uStack_10 = *(u32 *)(*a1 + 4);
    uStack_c = 0;
    if (a1[1] != 0) {
        uStack_c = *(u32 *)(a1[1] + 8);
    }
    uVar1 = (**(code **)(*a1 + 0xc))(a0, &uStack_10, a2, a3);
    return uVar1;
}

/*
 * asr_vcall_0x10_10b060  0x8c10b060
 * calls interface slot 0x10 with the (id, sub-id) context of its handle pair
 */
u32 asr_vcall_0x10_10b060(u32 a0, u32 a1, int *a2, u32 a3) {
    u32 uVar1;
    u32 uStack_10;
    u32 uStack_c;

    uStack_10 = *(u32 *)(*a2 + 4);
    uStack_c = 0;
    if (a2[1] != 0) {
        uStack_c = *(u32 *)(a2[1] + 8);
    }
    uVar1 = (**(code **)(*a2 + 0x10))(a0, a1, &uStack_10, a3);
    return uVar1;
}

/*
 * asr_vcall_0x14_10b096  0x8c10b096
 * calls interface slot 0x14 with the (id, sub-id) context of its handle pair
 */
u32 asr_vcall_0x14_10b096(int *a0, u32 a1, u32 a2, u32 a3) {
    u32 uVar1;
    u32 uStack_10;
    u32 uStack_c;

    uStack_10 = *(u32 *)(*a0 + 4);
    uStack_c = 0;
    if (a0[1] != 0) {
        uStack_c = *(u32 *)(a0[1] + 8);
    }
    uVar1 = (**(code **)(*a0 + 0x14))(&uStack_10, a1, a2, a3);
    return uVar1;
}

/*
 * asr_vcall_0x18_10b0d8  0x8c10b0d8
 * calls interface slot 0x18 with the (id, sub-id) context of its handle pair
 */
u32 asr_vcall_0x18_10b0d8(int *a0, u32 a1, u32 a2, u32 a3) {
    u32 uVar1;
    u32 uStack_10;
    u32 uStack_c;

    uStack_10 = *(u32 *)(*a0 + 4);
    uStack_c = 0;
    if (a0[1] != 0) {
        uStack_c = *(u32 *)(a0[1] + 8);
    }
    uVar1 = (**(code **)(*a0 + 0x18))(&uStack_10, a1, a2, a3);
    return uVar1;
}

/*
 * asr_vcall_0x1c_10b10e  0x8c10b10e
 * calls interface slot 0x1c with the (id, sub-id) context of its handle pair
 */
u32 asr_vcall_0x1c_10b10e(int *a0, u32 a1, u32 a2, u32 a3) {
    u32 uVar1;
    u32 uStack_10;
    u32 uStack_c;

    uStack_10 = *(u32 *)(*a0 + 4);
    uStack_c = 0;
    if (a0[1] != 0) {
        uStack_c = *(u32 *)(a0[1] + 8);
    }
    uVar1 = (**(code **)(*a0 + 0x1c))(&uStack_10, a1, a2, a3);
    return uVar1;
}

/*
 * asr_vcall_0x20_10b144  0x8c10b144
 * calls interface slot 0x20 with the (id, sub-id) context of its handle pair
 */
u32 asr_vcall_0x20_10b144(u32 a0, int *a1, u32 a2, u32 a3) {
    u32 uVar1;
    u32 uStack_10;
    u32 uStack_c;

    uStack_10 = *(u32 *)(*a1 + 4);
    uStack_c = 0;
    if (a1[1] != 0) {
        uStack_c = *(u32 *)(a1[1] + 8);
    }
    uVar1 = (**(code **)(*a1 + 0x20))(a0, &uStack_10, a2, a3);
    return uVar1;
}

/*
 * asr_vcall_0x24_10b17a  0x8c10b17a
 * calls interface slot 0x24 with the (id, sub-id) context of its handle pair
 */
u32 asr_vcall_0x24_10b17a(u32 a0, int *a1, u32 a2, u32 a3) {
    u32 uVar1;
    u32 uStack_10;
    u32 uStack_c;

    uStack_10 = *(u32 *)(*a1 + 4);
    uStack_c = 0;
    if (a1[1] != 0) {
        uStack_c = *(u32 *)(a1[1] + 8);
    }
    uVar1 = (**(code **)(*a1 + 0x24))(a0, &uStack_10, a2, a3);
    return uVar1;
}

/*
 * asr_vcall_0x28_10b1b0  0x8c10b1b0
 * calls interface slot 0x28 with the (id, sub-id) context of its handle pair
 */
u32 asr_vcall_0x28_10b1b0(u32 a0, int *a1, u32 a2, u32 a3) {
    u32 uVar1;
    u32 uStack_10;
    u32 uStack_c;

    uStack_10 = *(u32 *)(*a1 + 4);
    uStack_c = 0;
    if (a1[1] != 0) {
        uStack_c = *(u32 *)(a1[1] + 8);
    }
    uVar1 = (**(code **)(*a1 + 0x28))(a0, &uStack_10, a2, a3);
    return uVar1;
}

/*
 * asr_uses_lib11c_check_handle_10b1ec  0x8c10b1ec
 * area name: sits between asr functions (same compilation unit); behaviour name: its callees mostly do:
 * uses_lib11c_check_handle
 */
u32 asr_uses_lib11c_check_handle_10b1ec(int *a0, int *a1, u32 *a2, int *a3) {
    u16 uVar1;
    int *piVar2;
    int *piVar3;
    int iVar4;
    int *piVar5;
    int iVar6;
    u32 *puVar7;
    int iVar8;
    int iVar9;
    u32 uVar10;
    int a4;
    int iVar11;
    int iVar12;
    int iVar13;
    int iStack_64;
    int iStack_60;
    u32 *puStack_5c;
    u32 *puStack_58;
    int *piStack_4c;
    int *piStack_48;
    int *piStack_44;
    int *piStack_3c;
    u32 *puStack_38;
    u32 *puStack_34;
    int *piStack_30;
    int *piStack_2c;
    u32 uStack_28;
    u32 uStack_24;

    piStack_2c = NULL;
    piStack_30 = NULL;
    puStack_34 = NULL;
    iVar13 = *a1;
    uStack_28 = *(u32 *)(iVar13 + 4);
    uStack_24 = 0;
    if (a1[1] != 0) {
        uStack_24 = *(u32 *)(a1[1] + 8);
    }
    piVar5 = a1;
    piVar3 = (int *)asr_uses_lib11c_check_handle_11eb6c(*(u32 *)a1[1], a1, a2, a3);
    a4 = *piVar3;
    iVar4 = asr_calls_calc_10afbe(a4);
    uVar1 = 0x80;
    iVar6 = *a0;
    puStack_58 = NULL;
    piStack_44 = NULL;
    iVar12 = 0;
    piStack_3c = a3;
    puStack_38 = (u32 *)a0[1];
    if (0 < iVar6) {
        do {
            piStack_3c = (int *)*puStack_38;
            iStack_64 = 0;
            iVar11 = 0;
            piStack_4c = (int *)puStack_38[5];
            if (0 < (int)piStack_3c) {
                do {
                    iVar9 = 0;
                    iVar8 = *piStack_4c;
                    a2 = NULL;
                    iStack_60 = piStack_4c[3];
                    if (0 < iVar8) {
                        do {
                            a2 = (u32 *)((int)a2 + 1);
                            if ((*(u16 *)(iVar4 + *(int *)(iStack_60 + 8) * 2) & 0x80) == 0) {
                                iVar9 = iVar9 + 1;
                            }
                            iStack_60 = iStack_60 + 0xc;
                        } while ((int)a2 < iVar8);
                    }
                    iVar12 = (iVar12 + iVar8) - iVar9;
                    if (iVar9 == iVar8) {
                        iStack_64 = iStack_64 + 1;
                    }
                    iVar11 = iVar11 + 1;
                    piStack_4c = piStack_4c + 4;
                } while (iVar11 < (int)piStack_3c);
            }
            puStack_58 = (u32 *)((int)piStack_3c + ((int)puStack_58 - iStack_64));
            piStack_44 = (int *)((int)piStack_44 + 1);
            puStack_38 = puStack_38 + 6;
        } while ((int)piStack_44 < iVar6);
    }
    piVar5 = (int *)(**(code **)(iVar13 + 8))(0xc, &uStack_28, a2, piStack_3c);
    if (piVar5 != NULL) {
        if (iVar6 < 1) {
        LAB_8c10b3fc:
            *piVar5 = *a0;
            piVar5[1] = (int)piStack_2c;
            piStack_4c = NULL;
            puStack_58 = a2;
            piVar3 = piStack_30;
            puStack_5c = puStack_34;
            piStack_44 = (int *)a0[1];
            piVar2 = piStack_2c;
            if (0 < iVar6) {
                do {
                    piStack_3c = piVar2;
                    piStack_48 = (int *)piStack_44[5];
                    iVar12 = *piStack_44;
                    *piStack_3c = iVar12;
                    piStack_3c[1] = piStack_44[1];
                    piStack_3c[2] = piStack_44[2];
                    piStack_3c[3] = piStack_44[3];
                    piStack_3c[4] = piStack_44[4];
                    piStack_3c[5] = (int)piVar3;
                    iStack_60 = 0;
                    if (0 < iVar12) {
                        do {
                            puVar7 = (u32 *)piStack_48[3];
                            iVar8 = *piStack_48;
                            *piVar3 = iVar8;
                            piVar3[1] = piStack_48[1];
                            piVar3[2] = piStack_48[2];
                            piVar3[3] = (int)puStack_5c;
                            iVar11 = 0;
                            if (0 < iVar8) {
                                do {
                                    puStack_58 = puVar7;
                                    uVar10 = puStack_58[2];
                                    if ((*(u16 *)(iVar4 + uVar10 * 2) & uVar1) == 0) {
                                        *piVar3 = *piVar3 + -1;
                                    } else {
                                        if (*(u32 *)(0x88 + a4) <= uVar10) {
                                            puStack_58[2] = (uVar10 - *(int *)(0x88 + a4)) + 0x80000000;
                                        }
                                        *puStack_5c = *puStack_58;
                                        puStack_5c[1] = puStack_58[1];
                                        puStack_5c[2] = puStack_58[2];
                                        puStack_5c = puStack_5c + 3;
                                    }
                                    iVar11 = iVar11 + 1;
                                    puVar7 = puStack_58 + 3;
                                } while (iVar11 < iVar8);
                            }
                            if (*piVar3 == 0) {
                                *piStack_3c = *piStack_3c + -1;
                            } else {
                                piVar3 = piVar3 + 4;
                            }
                            iStack_60 = iStack_60 + 1;
                            piStack_48 = piStack_48 + 4;
                        } while (iStack_60 < iVar12);
                    }
                    piStack_4c = (int *)((int)piStack_4c + 1);
                    piStack_44 = piStack_44 + 6;
                    piVar2 = piStack_3c + 6;
                } while ((int)piStack_4c < iVar6);
            }
            uVar10 = (**(code **)(a1[1] + 0xc))(piVar5, &uStack_28, puStack_58, piStack_3c);
            (**(code **)(iVar13 + 0xc))(piVar5, &uStack_28, puStack_58, piStack_3c);
            if (piStack_2c != NULL) {
                (**(code **)(iVar13 + 0xc))(piStack_2c, &uStack_28, puStack_58, piStack_3c);
            }
            if (piStack_30 != NULL) {
                (**(code **)(iVar13 + 0xc))(piStack_30, &uStack_28, puStack_58, piStack_3c);
            }
            if (puStack_34 == NULL) {
                return uVar10 & 0xff;
            }
            (**(code **)(iVar13 + 0xc))(puStack_34, &uStack_28, puStack_58, piStack_3c);
            return uVar10 & 0xff;
        }
        piStack_2c = (int *)(**(code **)(iVar13 + 8))(iVar6 * 0x18, &uStack_28, a2, piStack_3c);
        if (piStack_2c == NULL) {
            (**(code **)(iVar13 + 0xc))(piVar5, &uStack_28, a2, piStack_3c);
        } else {
            piStack_30 = (int *)(**(code **)(iVar13 + 8))(((int)puStack_58 + 1) * 0x10, &uStack_28, a2, piStack_3c);
            if (piStack_30 == NULL) {
                (**(code **)(iVar13 + 0xc))(piVar5, &uStack_28, a2, piStack_3c);
                (**(code **)(iVar13 + 0xc))(piStack_2c, &uStack_28, a2, piStack_3c);
            } else {
                if ((iVar12 == 0) ||
                    (puStack_34 = (u32 *)(**(code **)(iVar13 + 8))(iVar12 * 0xc, &uStack_28, a2, piStack_3c),
                     puStack_34 != NULL))
                    goto LAB_8c10b3fc;
                (**(code **)(iVar13 + 0xc))(piVar5, &uStack_28, a2, piStack_3c);
                (**(code **)(iVar13 + 0xc))(piStack_2c, &uStack_28, a2, piStack_3c);
                (**(code **)(iVar13 + 0xc))(piStack_30, &uStack_28, a2, piStack_3c);
            }
        }
    }
    return 1;
}

/*
 * asr_vcall_0x10_10b576  0x8c10b576
 * calls interface slot 0x10 with the (id, sub-id) context of its handle pair
 */
u32 asr_vcall_0x10_10b576(u32 a0, int *a1, u32 a2, u32 a3) {
    u32 uVar1;
    u32 uStack_10;
    u32 uStack_c;

    uStack_c = *(u32 *)(a1[1] + 8);
    uStack_10 = 0;
    if (*a1 != 0) {
        uStack_10 = *(u32 *)(*a1 + 4);
    }
    uVar1 = (**(code **)(a1[1] + 0x10))(a0, &uStack_10, a2, a3);
    return uVar1 & 0xff;
}

/*
 * asr_vcall_0x14_10b5b8  0x8c10b5b8
 * calls interface slot 0x14 with the (id, sub-id) context of its handle pair
 */
u32 asr_vcall_0x14_10b5b8(u32 a0, int *a1, u32 a2, u32 a3) {
    u32 uVar1;
    u32 uStack_10;
    u32 uStack_c;

    uStack_c = *(u32 *)(a1[1] + 8);
    uStack_10 = 0;
    if (*a1 != 0) {
        uStack_10 = *(u32 *)(*a1 + 4);
    }
    uVar1 = (**(code **)(a1[1] + 0x14))(a0, &uStack_10, a2, a3);
    return uVar1 & 0xff;
}

/*
 * asr_vcall_0x18_10b5f0  0x8c10b5f0
 * calls interface slot 0x18 with the (id, sub-id) context of its handle pair
 */
u32 asr_vcall_0x18_10b5f0(u32 a0, int *a1, u32 a2, u32 a3) {
    u32 uVar1;
    u32 uStack_10;
    u32 uStack_c;

    uStack_c = *(u32 *)(a1[1] + 8);
    uStack_10 = 0;
    if (*a1 != 0) {
        uStack_10 = *(u32 *)(*a1 + 4);
    }
    uVar1 = (**(code **)(a1[1] + 0x18))(a0, &uStack_10, a2, a3);
    return uVar1 & 0xff;
}

/*
 * asr_vcall_0x1c_10b628  0x8c10b628
 * calls interface slot 0x1c with the (id, sub-id) context of its handle pair
 */
u32 asr_vcall_0x1c_10b628(u32 a0, int *a1, u32 a2, u32 a3) {
    u32 uVar1;
    u32 uStack_10;
    u32 uStack_c;

    uStack_c = *(u32 *)(a1[1] + 8);
    uStack_10 = 0;
    if (*a1 != 0) {
        uStack_10 = *(u32 *)(*a1 + 4);
    }
    uVar1 = (**(code **)(a1[1] + 0x1c))(a0, &uStack_10, a2, a3);
    return uVar1 & 0xff;
}

/*
 * asr_vcall_0x20_10b660  0x8c10b660
 * calls interface slot 0x20 with the (id, sub-id) context of its handle pair
 */
u32 asr_vcall_0x20_10b660(int *a0, u32 a1, u32 a2, u32 a3) {
    u32 uVar1;
    u32 uStack_10;
    u32 uStack_c;

    uStack_c = *(u32 *)(a0[1] + 8);
    uStack_10 = 0;
    if (*a0 != 0) {
        uStack_10 = *(u32 *)(*a0 + 4);
    }
    uVar1 = (**(code **)(a0[1] + 0x20))(&uStack_10, a1, a2, a3);
    return uVar1 & 0xff;
}

/*
 * asr_call_11f258_err  0x8c10b698
 * calls 8c11f258 on the handle; the library error code when it fails, else 0
 * called by: asr_state_switch_01d15c
 */
u32 asr_call_11f258_err(u32 *a0, u32 a1) {
    int iVar1;
    u32 uVar2;

    uVar2 = 0;
    iVar1 = asr_uses_lib11c_check_handle_11f258(*a0);
    if (iVar1 != 0) {
        uVar2 = lib11c_take_error(*(u32 *)a0[1], *a0);
    }
    return uVar2;
}

/*
 * asr_call_11f258_err_10b6a0  0x8c10b6a0
 * calls 8c11f258 on the handle; the library error code when it fails, else 0
 */
u32 asr_call_11f258_err_10b6a0(u32 unused_a0, u32 a1, u32 a2, u32 a3) {
    int iVar1;
    u32 unaff_r13;
    u32 *unaff_r14;

    iVar1 = asr_uses_lib11c_check_handle_11f258(*unaff_r14, a1, a2, a3);
    if (iVar1 != 0) {
        unaff_r13 = lib11c_take_error(*(u32 *)unaff_r14[1], *unaff_r14, a2, a3);
    }
    return unaff_r13;
}

/*
 * asr_uses_lib11c_take_error_10b6cc  0x8c10b6cc
 * area name: sits between asr functions (same compilation unit); behaviour name: its main named callee is
 * lib11c_take_error called by: game_uses_strcpy_01dc80
 */
int asr_uses_lib11c_take_error_10b6cc(u32 *a0, u32 *a1, u32 a2, u32 a3) {
    int iVar1;
    u16 *puVar2;
    int iVar3;
    u16 *puVar4;
    int *ar5_00;
    u32 uVar5;
    u32 *puVar6;
    int iVar7;
    int iVar8;
    u32 *ar5_01;
    int *ar5_02;
    u32 uVar9;
    u32 uStack_28;
    u32 uStack_24;

    iVar8 = 0;
    iVar3 = a0[1];
    iVar7 = 0;
    ar5_01 = NULL;
    if (a1 == NULL) {
        ar5_02 = NULL;
    } else {
        ar5_02 = (int *)*a1;
    }
    uStack_28 = *(u32 *)(iVar3 + 4);
    uStack_24 = a0[2];
    ar5_00 = ar5_02;
    iVar1 = asr_uses_lib11c_check_handle_11ea3c(*a0, ar5_02, a2, a3);
    if (iVar1 != 0) {
        ar5_00 = (int *)*a0;
        iVar8 = lib11c_take_error(*(u32 *)a0[1], ar5_00, a2, a3);
    }
    if ((iVar8 == 0) && (ar5_02 != NULL)) {
        iVar1 = *ar5_02;
        uVar9 = *(int *)(0x8c + -4 + iVar1) + *(int *)(0x8c + iVar1);
        puVar2 = (u16 *)asr_calls_calc_10afbe(iVar1);
        uVar5 = 0;
        puVar4 = puVar2;
        if (uVar9 != 0) {
            do {
                uVar5 = uVar5 + 1;
                if ((*puVar4 & 0x40) != 0) {
                    iVar7 = iVar7 + 1;
                }
                puVar4 = puVar4 + 1;
            } while (uVar5 < uVar9);
        }
        iVar7 = uVar9 - iVar7;
        if (iVar7 != 0) {
            ar5_01 = (u32 *)(**(code **)(iVar3 + 8))(iVar7 * 4, &uStack_28, a2, a3);
            if (ar5_01 == NULL) {
                return 1;
            }
            uVar5 = 0;
            puVar6 = ar5_01;
            if (uVar9 != 0) {
                do {
                    if ((puVar2[uVar5] & 0x40) == 0) {
                        *puVar6 = uVar5;
                        puVar6 = puVar6 + 1;
                    }
                    uVar5 = uVar5 + 1;
                } while (uVar5 < uVar9);
            }
        }
        iVar1 = asr_uses_lib11c_check_handle_11d6f0(*a0, ar5_01, iVar7, a3);
        if (iVar1 != 0) {
            iVar8 = lib11c_take_error(*(u32 *)a0[1], *a0, iVar7, a3);
        }
        if (ar5_01 != NULL) {
            (**(code **)(iVar3 + 0xc))(ar5_01, &uStack_28, iVar7, a3);
        }
    }
    a0[0xb] = a1;
    return iVar8;
}

/*
 * asr_lib_bind_recognizer_model  0x8c10b840
 * called by: asr_talk_01d008
 */
int asr_lib_bind_recognizer_model(u32 *a0, u32 *a1) {
    int iVar1;
    u32 uVar2;
    int iVar3;

    iVar3 = 0;
    if (a1 == NULL) {
        uVar2 = 0;
    } else {
        uVar2 = *a1;
    }
    iVar1 = asr_uses_lib11c_check_handle_11e534(*a0, uVar2);
    if (iVar1 != 0) {
        iVar3 = lib11c_take_error(*(u32 *)a0[1], *a0);
    }
    if (iVar3 == 0) {
        if (a1 == NULL) {
            a0[9] = 0;
            a0[0xb] = 0;
            a0[10] = 0;
        } else {
            iVar1 = a1[1];
            if (iVar1 == 4) {
                a0[10] = a1;
            } else if ((iVar1 == 10) || (iVar1 == 0xb)) {
                a0[9] = a1;
                a0[0xb] = 0;
            } else {
                iVar3 = 0xd;
            }
        }
    }
    return iVar3;
}

/*
 * alt_entry_10b852  0x8c10b852
 * probably an entry 18 bytes into 8c10b840: it reads registers that code sets before it
 */
int alt_entry_10b852(u32 *a0, u32 unused_a1, u32 a2, u32 a3) {
    int iVar1;
    u32 ar5_00;
    int unaff_r11;
    u32 unaff_r12;
    u32 *unaff_r13;
    char in_T;

    ar5_00 = unaff_r12;
    if (in_T != '\x01') {
        ar5_00 = *unaff_r13;
    }
    iVar1 = asr_uses_lib11c_check_handle_11e534(*a0, ar5_00, a2, a3);
    if (iVar1 != 0) {
        unaff_r11 = lib11c_take_error(*(u32 *)a0[1], *a0, a2, a3);
    }
    if (unaff_r11 == 0) {
        if (unaff_r13 == NULL) {
            a0[9] = unaff_r12;
            a0[0xb] = unaff_r12;
            a0[10] = unaff_r12;
        } else {
            iVar1 = unaff_r13[1];
            if (iVar1 == 4) {
                a0[10] = unaff_r13;
            } else if ((iVar1 == 10) || (iVar1 == 0xb)) {
                a0[9] = unaff_r13;
                a0[0xb] = unaff_r12;
            } else {
                unaff_r11 = 0xd;
            }
        }
    }
    return unaff_r11;
}

/*
 * asr_call_11ce44_err  0x8c10b8c6
 * calls 8c11ce44 on the handle; the library error code when it fails, else 0
 * called by: asr_talk_01d008
 */
u32 asr_call_11ce44_err(u32 *a0, u32 unused_a1, u32 a2, u32 a3) {
    int iVar1;
    u32 uVar2;
    u32 uStack_14;
    u32 uStack_10;

    uStack_14 = a0[1];
    uVar2 = 0;
    uStack_10 = 0;
    iVar1 = asr_talk_11ce44(*a0, 0, a2, a3);
    if (iVar1 != 0) {
        uVar2 = lib11c_take_error(*a0, 0, a2, a3);
    }
    (*(code *)a0[3])(a0, &uStack_14, a2, a3);
    return uVar2;
}

/*
 * asr_lib_create_engine  0x8c10b914
 * called by: asr_init_from_model
 */
u32 asr_lib_create_engine(int *a0, int a1, int *a2, u32 a3) {
    int *ar5_00;
    int iVar1;
    int *ar6_00;
    u32 uVar2;
    int aiStack_3c[2];
    u8 *puStack_34;
    u8 *puStack_30;
    u8 *puStack_2c;
    u8 *puStack_28;
    u8 *puStack_24;
    u8 *puStack_20;
    u8 *puStack_1c;
    u8 *puStack_18;
    u8 *puStack_14;

    uVar2 = 0;
    aiStack_3c[1] = 0;
    ar6_00 = a2;
    aiStack_3c[0] = a1;
    ar5_00 = (int *)(*(code *)*a0)(0x2c, aiStack_3c, a2, a3);
    if (ar5_00 == NULL) {
        uVar2 = 1;
    } else {
        ar5_00[2] = *a0;
        ar5_00[3] = a0[1];
        ar5_00[4] = a0[2];
        ar5_00[5] = a0[3];
        ar5_00[6] = a0[4];
        ar5_00[7] = a0[5];
        ar5_00[8] = a0[6];
        ar5_00[9] = a0[7];
        ar5_00[10] = a0[8];
        ar5_00[1] = a1;
        puStack_34 = (&asr_vcall_8_10aff4);
        *a2 = (int)ar5_00;
        puStack_30 = (&asr_vcall_0xc_10b02a);
        puStack_2c = (&asr_vcall_0x10_10b060);
        puStack_28 = (&asr_vcall_0x14_10b096);
        puStack_24 = (&asr_vcall_0x18_10b0d8);
        puStack_20 = (&asr_vcall_0x1c_10b10e);
        puStack_1c = (&asr_vcall_0x20_10b144);
        puStack_18 = (&asr_vcall_0x24_10b17a);
        puStack_14 = (&asr_vcall_0x28_10b1b0);
        iVar1 = asr_update_fields_11cdb6(&puStack_34, ar5_00, ar6_00, a3);
        if (iVar1 == 0) {
            uVar2 = lib11c_take_error(0, 0, ar6_00, a3);
            (*(code *)a0[1])(ar5_00, aiStack_3c, ar6_00, a3);
        } else {
            *ar5_00 = iVar1;
        }
    }
    return uVar2;
}

/*
 * asr_uses_lib11c_take_error_10ba20  0x8c10ba20
 * area name: sits between asr functions (same compilation unit); behaviour name: its main named callee is
 * lib11c_take_error called by: asr_talk_01d008
 */
u32 asr_uses_lib11c_take_error_10ba20(u32 *a0, u32 unused_a1, u32 a2, u32 a3) {
    int iVar1;
    u32 uVar2;
    int iVar3;
    u32 uStack_1c;
    u32 uStack_18;

    iVar3 = a0[1];
    uVar2 = 0;
    uStack_1c = *(u32 *)(iVar3 + 4);
    uStack_18 = a0[2];
    iVar1 = asr_uses_lib11c_check_handle_11d200(*a0, unused_a1, a2, a3);
    if (iVar1 != 0) {
        uVar2 = lib11c_take_error(*(u32 *)a0[1], *a0, a2, a3);
    }
    (**(code **)(iVar3 + 0xc))(a0, &uStack_1c, a2, a3);
    return uVar2;
}

/*
 * asr_talk_10ba7c  0x8c10ba7c
 * area name: sits between asr functions (same compilation unit); behaviour name: mostly calls talk functions
 * called by: asr_talk_01d008
 */
int asr_talk_10ba7c(u32 *a0, u32 unused_a1, u32 a2, u32 a3) {
    int iVar1;
    int iVar2;
    u32 uStack_14;
    u32 uStack_10;

    uStack_14 = *(u32 *)(a0[1] + 4);
    iVar2 = 0;
    uStack_10 = 0;
    iVar1 = asr_handle_destroy_2783d5f5(*a0, 0, a2, a3);
    if (iVar1 != 0) {
        iVar2 = lib11c_take_error(*(u32 *)a0[1], 0, a2, a3);
    }
    if (iVar2 == 0) {
        (**(code **)(a0[1] + 0xc))(a0, &uStack_14, a2, a3);
    }
    return iVar2;
}

/*
 * asr_talk_10bad4  0x8c10bad4
 * area name: sits between asr functions (same compilation unit); behaviour name: mostly calls talk functions
 * called by: asr_talk_01d008
 */
int asr_talk_10bad4(u32 *a0, u32 unused_a1, u32 a2, u32 a3) {
    int iVar1;
    int iVar2;
    u32 uStack_14;
    u32 uStack_10;

    iVar2 = 0;
    uStack_14 = *(u32 *)(a0[2] + 4);
    uStack_10 = 0;
    iVar1 = asr_handle_destroy_2d79b6f5(*a0, unused_a1, a2, a3);
    if (iVar1 != 0) {
        iVar2 = lib11c_take_error(*(u32 *)a0[2], 0, a2, a3);
    }
    if (iVar2 == 0) {
        (**(code **)(a0[2] + 0xc))(a0, &uStack_14, a2, a3);
    }
    return iVar2;
}

/*
 * asr_call_11e3ea_err  0x8c10bb3a
 * calls 8c11e3ea on the handle; the library error code when it fails, else 0
 */
u32 asr_call_11e3ea_err(u32 unused_a0, u32 a1, u32 a2, u32 a3) {
    int iVar1;
    u32 unaff_r13;
    u32 *unaff_r14;

    iVar1 = asr_talk_11e3ea(*unaff_r14, a1, a2, a3);
    if (iVar1 != 0) {
        unaff_r13 = lib11c_take_error(*(u32 *)unaff_r14[1], *unaff_r14, a2, a3);
    }
    return unaff_r13;
}

/*
 * asr_call_11e146_err  0x8c10bb6e
 * calls 8c11e146 on the handle; the library error code when it fails, else 0
 */
u32 asr_call_11e146_err(u32 unused_a0, u32 a1, u32 a2, u32 a3) {
    int iVar1;
    u32 *unaff_r13;
    u32 unaff_r14;

    iVar1 = asr_talk_11e146(*unaff_r13, a1, a2, a3);
    if (iVar1 != 0) {
        unaff_r14 = lib11c_take_error(*(u32 *)unaff_r13[1], *unaff_r13, a2, a3);
    }
    return unaff_r14;
}

/*
 * asr_call_11eb6c_err  0x8c10bb9a
 * calls 8c11eb6c on the handle; the library error code when it fails, else 0
 * called by: asr_uses_asr_call_11eb6c_err_10c0b4
 */
int asr_call_11eb6c_err(u32 *a0, int *a1, u32 a2, u32 a3) {
    int iVar1;
    int iVar2;
    int iVar3;

    iVar3 = 0;
    iVar1 = asr_uses_lib11c_check_handle_11eb6c(*a0, a1, a2, a3);
    if (iVar1 == 0) {
        iVar3 = lib11c_take_error(*(u32 *)a0[1], *a0, a2, a3);
    }
    if (((iVar3 == 0) && (iVar2 = a0[0xb], *a1 = iVar2, iVar2 != 0)) && (iVar1 != *(int *)*a1)) {
        iVar3 = 0xb;
    }
    return iVar3;
}

/*
 * asr_call_11eb6c_err_10bba8  0x8c10bba8
 * calls 8c11eb6c on the handle; the library error code when it fails, else 0
 */
int asr_call_11eb6c_err_10bba8(u32 unused_a0, u32 unused_a1, u32 a2, u32 a3) {
    int iVar1;
    int iVar2;
    int *unaff_r11;
    u32 *unaff_r13;
    int unaff_r14;

    iVar1 = asr_uses_lib11c_check_handle_11eb6c(*unaff_r13, unused_a1, a2, a3);
    if (iVar1 == 0) {
        unaff_r14 = lib11c_take_error(*(u32 *)unaff_r13[1], *unaff_r13, a2, a3);
    }
    if (((unaff_r14 == 0) && (iVar2 = unaff_r13[0xb], *unaff_r11 = iVar2, iVar2 != 0)) &&
        (iVar1 != *(int *)*unaff_r11)) {
        unaff_r14 = 0xb;
    }
    return unaff_r14;
}

/*
 * asr_talk_10bbf2  0x8c10bbf2
 * area name: sits between asr functions (same compilation unit); behaviour name: mostly calls talk functions
 */
int asr_talk_10bbf2(u32 *a0, int *a1, u32 *a2, u32 a3) {
    int iVar1;
    u32 *puVar2;
    int iVar3;
    int iVar4;
    int *piStack_28;
    u32 *puStack_24;
    u32 *puStack_20;
    u32 uStack_1c;
    u32 uStack_18;

    iVar4 = 0;
    iVar3 = a0[1];
    uStack_1c = *(u32 *)(iVar3 + 4);
    uStack_18 = a0[2];
    puStack_24 = a2;
    puStack_20 = a0;
    iVar1 = asr_talk_11e48a(*a0, &piStack_28, a2, a3);
    if (iVar1 != 0) {
        iVar4 = lib11c_take_error(*(u32 *)puStack_20[1], *a0, a2, a3);
    }
    if (iVar4 == 0) {
        puVar2 = (u32 *)(**(code **)(iVar3 + 8))(8, &uStack_1c, a2, a3);
        if (puVar2 == NULL) {
            iVar4 = 1;
        } else {
            *a1 = (int)puVar2;
            *puVar2 = a0[9];
            puVar2[1] = a0[10];
        }
        if (iVar4 == 0) {
            if (*piStack_28 != **(int **)*a1) {
                iVar4 = 0xb;
            }
            if ((1 < *puStack_24) && (piStack_28[1] != **(int **)a1[1])) {
                iVar4 = 0xb;
            }
        }
        (**(code **)(iVar3 + 0xc))(piStack_28, &uStack_1c, a2, a3);
    }
    return iVar4;
}

/*
 * asr_call_11d7b8_err  0x8c10bce4
 * calls 8c11d7b8 on the handle; the library error code when it fails, else 0
 */
u32 asr_call_11d7b8_err(u32 unused_a0, u32 a1, u32 a2, u32 a3) {
    int iVar1;
    u32 unaff_r13;
    u32 *unaff_r14;

    iVar1 = asr_talk_11d7b8(*unaff_r14, a1, a2, a3);
    if (iVar1 != 0) {
        unaff_r13 = lib11c_take_error(*(u32 *)unaff_r14[1], *unaff_r14, a2, a3);
    }
    return unaff_r13;
}

/*
 * asr_call_11dc7e_err  0x8c10bd20
 * calls 8c11dc7e on the handle; the library error code when it fails, else 0
 */
u32 asr_call_11dc7e_err(u32 unused_a0, u32 a1, u32 a2, u32 a3) {
    int iVar1;
    u32 unaff_r13;
    u32 *unaff_r14;

    iVar1 = asr_uses_lib11c_check_handle_11dc7e(*unaff_r14, a1, a2, a3);
    if (iVar1 != 0) {
        unaff_r13 = lib11c_take_error(*(u32 *)unaff_r14[1], *unaff_r14, a2, a3);
    }
    return unaff_r13;
}

/*
 * asr_uses_lib11c_take_error_10bd4c  0x8c10bd4c
 * area name: sits between asr functions (same compilation unit); behaviour name: its main named callee is
 * lib11c_take_error
 */
u32 asr_uses_lib11c_take_error_10bd4c(u32 *a0, u32 *a1, u32 unused_a2, u32 a3) {
    int iVar1;
    u8 *ar6_00;
    u32 *puVar2;
    u32 uVar3;
    u32 *puStack_24;
    u8 auStack_20[4];
    u32 *puStack_1c;
    u32 uStack_18;
    u32 uStack_14;

    puVar2 = (u32 *)a0[1];
    uVar3 = 0;
    ar6_00 = auStack_20;
    uStack_18 = puVar2[1];
    uStack_14 = a0[2];
    puStack_1c = a1;
    iVar1 = asr_uses_lib11c_check_handle_11d996(*a0, &puStack_24, ar6_00, a3);
    if (iVar1 != 0) {
        uVar3 = lib11c_take_error(*puVar2, *a0, ar6_00, a3);
    }
    *puStack_1c = *puStack_24;
    puStack_1c[1] = puStack_24[1];
    puStack_1c[2] = puStack_24[2];
    puStack_1c[3] = puStack_24[3];
    puStack_1c[4] = puStack_24[4];
    puStack_1c[5] = puStack_24[5];
    puStack_1c[6] = puStack_24[6];
    puStack_1c[7] = puStack_24[7];
    puStack_1c[8] = puStack_24[8];
    puStack_1c[9] = puStack_24[9];
    puStack_1c[10] = puStack_24[10];
    puStack_1c[0xb] = puStack_24[0xb];
    puStack_1c[0xc] = puStack_24[0xc];
    puStack_1c[0xd] = puStack_24[0xd];
    (*(code *)puVar2[3])(puStack_24, &uStack_18, ar6_00, a3);
    return uVar3;
}

/*
 * asr_call_11e214_err  0x8c10bdee
 * calls 8c11e214 on the handle; the library error code when it fails, else 0
 */
u32 asr_call_11e214_err(u32 unused_a0, u32 a1, u32 a2, u32 a3) {
    int iVar1;
    u32 *unaff_r13;
    u32 unaff_r14;

    iVar1 = asr_get_first_result(*unaff_r13, a1);
    if (iVar1 != 0) {
        unaff_r14 = lib11c_take_error(*(u32 *)unaff_r13[1], *unaff_r13, a2, a3);
    }
    return unaff_r14;
}

/*
 * asr_call_11e274_err  0x8c10be22
 * calls 8c11e274 on the handle; the library error code when it fails, else 0
 */
u32 asr_call_11e274_err(u32 unused_a0, u32 a1, u32 a2, u32 a3) {
    int iVar1;
    u32 *unaff_r13;
    u32 unaff_r14;

    iVar1 = asr_talk_11e274(*unaff_r13, a1, a2, a3);
    if (iVar1 != 0) {
        unaff_r14 = lib11c_take_error(*(u32 *)unaff_r13[1], *unaff_r13, a2, a3);
    }
    return unaff_r14;
}

/*
 * asr_calls_calc_10be4e  0x8c10be4e
 * area name: sits between asr functions (same compilation unit); behaviour name: its callees mostly do: calc
 */
u32 asr_calls_calc_10be4e(u32 unused_a0, u32 *a1) {
    u32 uVar1;

    uVar1 = asr_calc_11ce88();
    *a1 = uVar1;
    return 0;
}

/*
 * asr_call_11e190_err  0x8c10be70
 * calls 8c11e190 on the handle; the library error code when it fails, else 0
 */
u32 asr_call_11e190_err(u32 unused_a0, u32 a1, u32 a2, u32 a3) {
    int iVar1;
    u32 *unaff_r13;
    u32 unaff_r14;

    iVar1 = asr_get_status_3e(*unaff_r13, a1);
    if (iVar1 != 0) {
        unaff_r14 = lib11c_take_error(*(u32 *)unaff_r13[1], *unaff_r13, a2, a3);
    }
    return unaff_r14;
}

/*
 * asr_uses_lib11c_take_error_10be9c  0x8c10be9c
 * area name: sits between asr functions (same compilation unit); behaviour name: its main named callee is
 * lib11c_take_error called by: game_uses_strcpy_01dc80
 */
u32 asr_uses_lib11c_take_error_10be9c(u32 *a0, u32 a1, u32 a2, int *a3) {
    u8 *puVar1;
    int *a4;
    int iVar2;
    int *ar7_00;
    u32 uVar3;
    u32 uStack_18;
    u32 uStack_14;

    uVar3 = 0;
    uStack_18 = a0[1];
    uStack_14 = 0;
    ar7_00 = a3;
    a4 = (int *)(*(code *)a0[2])(8, &uStack_18, a2, a3);
    puVar1 = (&asr_uses_lib11c_set_error_11e8d6);
    a4[1] = (int)a0;
    iVar2 = (*(code *)puVar1)(*a0, a1, a2, ar7_00);
    *a4 = iVar2;
    if (iVar2 == 0) {
        uVar3 = lib11c_take_error(*a0, 0, a2, ar7_00);
        (*(code *)a0[3])(a4, &uStack_18, a2, ar7_00);
    }
    *a3 = (int)a4;
    return uVar3;
}

/*
 * asr_lib_load_model  0x8c10bf44
 */
u32 asr_lib_load_model(u32 *a0, int *a1, u32 a2, int *a3) {
    u8 *puVar1;
    int *a4;
    int iVar2;
    int *ar7_00;
    u32 uVar3;
    u32 uStack_18;
    u32 uStack_14;

    uVar3 = 0;
    uStack_18 = a0[1];
    uStack_14 = 0;
    ar7_00 = a3;
    a4 = (int *)(*(code *)a0[2])(0xc, &uStack_18, a2, a3);
    a4[2] = (int)a0;
    puVar1 = (&asr_uses_lib11c_set_error_11e2de);
    a4[1] = *a1;
    iVar2 = (*(code *)puVar1)(*a0, a1, a2, ar7_00);
    *a4 = iVar2;
    if (iVar2 == 0) {
        uVar3 = lib11c_take_error(*a0, 0, a2, ar7_00);
        (*(code *)a0[3])(a4, &uStack_18, a2, ar7_00);
    }
    *a3 = (int)a4;
    return uVar3;
}

/*
 * asr_lib_create_recognizer  0x8c10bfc6
 */
u32 asr_lib_create_recognizer(u32 *a0, int *a1, int a2, int *a3) {
    u8 *puVar1;
    int *ar6_00;
    int iVar2;
    int *ar6_01;
    int *ar7_00;
    u32 uVar3;
    u32 uStack_34;
    u8 *puStack_2c;
    u8 *puStack_28;
    u8 *puStack_24;
    u8 *puStack_20;
    u8 *puStack_1c;
    u8 *puStack_18;

    uVar3 = 0;
    puStack_2c = (&asr_uses_lib11c_check_handle_10b1ec);
    puStack_28 = (&asr_vcall_0x10_10b576);
    puStack_24 = (&asr_vcall_0x14_10b5b8);
    puStack_20 = (&asr_vcall_0x18_10b5f0);
    puStack_1c = (&asr_vcall_0x1c_10b628);
    puStack_18 = (&asr_vcall_0x20_10b660);
    uStack_34 = a0[1];
    ar7_00 = a3;
    ar6_00 = (int *)(*(code *)a0[2])(0x30, &uStack_34, a2, a3);
    ar6_00[2] = a2;
    ar6_00[1] = (int)a0;
    ar6_00[3] = *a1;
    ar6_00[4] = a1[1];
    ar6_00[5] = a1[2];
    ar6_00[6] = a1[3];
    ar6_00[7] = a1[4];
    puVar1 = (&asr_uses_lib11c_set_error_11ce8e);
    ar6_00[8] = a1[5];
    ar6_00[9] = 0;
    ar6_00[10] = 0;
    ar6_00[0xb] = 0;
    ar6_01 = ar6_00;
    iVar2 = (*(code *)puVar1)(*a0, &puStack_2c, ar6_00, ar7_00);
    if (iVar2 == 0) {
        uVar3 = lib11c_take_error(*a0, 0, ar6_01, ar7_00);
        (*(code *)a0[3])(ar6_00, &uStack_34, ar6_01, ar7_00);
    } else {
        *ar6_00 = iVar2;
        *a3 = (int)ar6_00;
    }
    return uVar3;
}

/*
 * asr_uses_asr_call_11eb6c_err_10c0b4  0x8c10c0b4
 * area name: sits between asr functions (same compilation unit); behaviour name: its main named callee is
 * asr_call_11eb6c_err
 */
int asr_uses_asr_call_11eb6c_err_10c0b4(u32 *a0, u32 *a1, u32 a2, u32 a3) {
    int iVar1;
    int iVar2;
    int iVar3;
    u32 uVar4;
    u32 **a5;
    u32 *puVar5;
    u32 *puVar6;
    u32 *a7;
    u32 *puVar7;
    int ar6_00;
    int ar4_00;
    u32 *puStack_38;
    int iStack_30;
    u32 *puStack_2c;
    u32 uStack_28;
    u32 uStack_24;

    a5 = &puStack_2c;
    puStack_38 = NULL;
    iVar3 = a0[1];
    uStack_28 = *(u32 *)(iVar3 + 4);
    uStack_24 = a0[2];
    uVar4 = a2;
    iStack_30 = asr_call_11eb6c_err(a0, a5, a2, a3);
    if (iStack_30 == 0) {
        ar4_00 = *(int *)*puStack_2c;
        iVar1 = asr_calls_calc_10afbe(ar4_00);
        iVar2 = 0x80000000;
        uVar4 = 0;
        ar6_00 = a2 + *(int *)(0xac + ar4_00) + 1;
        puVar5 = a1;
        puVar6 = a1;
        a7 = a1;
        if (a2 != 0) {
            do {
                if (a1[uVar4] < *(u32 *)(0x88 + ar4_00)) {
                    if ((*(u16 *)(*a7 * 2 + iVar1) & 0x40) != 0) {
                        ar6_00 = ar6_00 + -1;
                    }
                    if (*puVar6 <= *(u32 *)(0xac + ar4_00)) {
                        ar6_00 = ar6_00 + -1;
                    }
                } else if ((*(u16 *)((*puVar5 + *(int *)(0x88 + ar4_00) + 0x80000000) * 2 + iVar1) & 0x40) != 0) {
                    ar6_00 = ar6_00 + -1;
                }
                uVar4 = uVar4 + 1;
                puVar5 = puVar5 + 1;
                puVar6 = puVar6 + 1;
                a7 = a7 + 1;
            } while (uVar4 < a2);
        }
        if (ar6_00 != 0) {
            puStack_38 = (u32 *)(**(code **)(iVar3 + 8))(ar6_00 << 2, &uStack_28, puVar6, a7);
            if (puStack_38 == NULL) {
                return 1;
            }
            uVar4 = 0;
            puVar5 = puStack_38;
            puVar6 = a1;
            a7 = a1;
            puVar7 = a1;
            if (a2 != 0) {
                do {
                    if (a1[uVar4] < *(u32 *)(0x88 + ar4_00)) {
                        if (((*(u16 *)(a1[uVar4] * 2 + iVar1) & 0x40) == 0) && (*(u32 *)(0xac + ar4_00) < a1[uVar4])) {
                            *puVar5 = *a7;
                            puVar5 = puVar5 + 1;
                        }
                    } else if ((*(u16 *)((*puVar6 + *(int *)(0x88 + ar4_00) + iVar2) * 2 + iVar1) & 0x40) == 0) {
                        *puVar5 = *puVar7 + *(int *)(0x88 + ar4_00) + iVar2;
                        puVar5 = puVar5 + 1;
                    }
                    uVar4 = uVar4 + 1;
                    puVar7 = puVar7 + 1;
                    puVar6 = puVar6 + 1;
                    a7 = a7 + 1;
                } while (uVar4 < a2);
            }
            iVar2 = (int)0xac;
            uVar4 = 0;
            if (*(int *)(iVar2 + ar4_00) != -1) {
                do {
                    *puVar5 = uVar4;
                    uVar4 = uVar4 + 1;
                    puVar5 = puVar5 + 1;
                } while (uVar4 < *(int *)(iVar2 + ar4_00) + 1U);
            }
        }
        iVar2 = asr_uses_lib11c_check_handle_11d6f0(*a0, puStack_38, ar6_00, a7);
        if (iVar2 != 0) {
            iStack_30 = lib11c_take_error(*(u32 *)a0[1], *a0, ar6_00, a7);
        }
        if (puStack_38 != NULL) {
            (**(code **)(iVar3 + 0xc))(puStack_38, &uStack_28, ar6_00, a7);
        }
    }
    return iStack_30;
}

/*
 * asr_call_11dda2_err  0x8c10c2a2
 * calls 8c11dda2 on the handle; the library error code when it fails, else 0
 * called by: asr_talk_01cee0
 */
u32 asr_call_11dda2_err(u32 *a0, u32 a1, u32 a2) {
    int iVar1;
    u32 uVar2;

    uVar2 = 0;
    iVar1 = asr_talk_11dda2(*a0);
    if (iVar1 != 0) {
        uVar2 = lib11c_take_error(*(u32 *)a0[1], *a0);
    }
    return uVar2;
}

/*
 * asr_call_11dda2_err_10c2aa  0x8c10c2aa
 * calls 8c11dda2 on the handle; the library error code when it fails, else 0
 */
u32 asr_call_11dda2_err_10c2aa(u32 unused_a0, u32 a1, u32 a2, u32 a3) {
    int iVar1;
    u32 unaff_r13;
    u32 *unaff_r14;

    iVar1 = asr_talk_11dda2(*unaff_r14, a1, a2, a3);
    if (iVar1 != 0) {
        unaff_r13 = lib11c_take_error(*(u32 *)unaff_r14[1], *unaff_r14, a2, a3);
    }
    return unaff_r13;
}

/*
 * asr_call_11daa4_err  0x8c10c2f4
 * calls 8c11daa4 on the handle; the library error code when it fails, else 0
 */
u32 asr_call_11daa4_err(u32 unused_a0, u32 a1, u32 a2, u32 a3) {
    int iVar1;
    u32 *unaff_r13;
    u32 uVar2;

    uVar2 = 0;
    iVar1 = asr_talk_11daa4(*unaff_r13, a1, a2, a3);
    if (iVar1 != 0) {
        uVar2 = lib11c_take_error(*(u32 *)unaff_r13[1], *unaff_r13, a2, a3);
    }
    return uVar2;
}

/*
 * asr_call_11d370_err  0x8c10c322
 * calls 8c11d370 on the handle; the library error code when it fails, else 0
 * called by: speech_talk_01d9e0
 */
u32 asr_call_11d370_err(u32 *a0) {
    int iVar1;
    u32 uVar2;

    uVar2 = 0;
    iVar1 = asr_talk_11d370(*a0);
    if (iVar1 != 0) {
        uVar2 = lib11c_take_error(*(u32 *)a0[1], *a0);
    }
    return uVar2;
}

/*
 * asr_call_11d370_err_10c32a  0x8c10c32a
 * calls 8c11d370 on the handle; the library error code when it fails, else 0
 */
u32 asr_call_11d370_err_10c32a(u32 unused_a0, u32 unused_a1, u32 a2, u32 a3) {
    int iVar1;
    u32 unaff_r13;
    u32 *unaff_r14;

    iVar1 = asr_talk_11d370(*unaff_r14, unused_a1, a2, a3);
    if (iVar1 != 0) {
        unaff_r13 = lib11c_take_error(*(u32 *)unaff_r14[1], *unaff_r14, a2, a3);
    }
    return unaff_r13;
}

/*
 * asr_call_11d5d4_err  0x8c10c356
 * calls 8c11d5d4 on the handle; the library error code when it fails, else 0
 * called by: speech_talk_01d984, speech_talk_01da60
 */
u32 asr_call_11d5d4_err(u32 *a0) {
    int iVar1;
    u32 uVar2;

    uVar2 = 0;
    iVar1 = asr_talk_11d5d4(*a0);
    if (iVar1 != 0) {
        uVar2 = lib11c_take_error(*(u32 *)a0[1], *a0);
    }
    return uVar2;
}

/*
 * asr_call_11d5d4_err_10c35e  0x8c10c35e
 * calls 8c11d5d4 on the handle; the library error code when it fails, else 0
 */
u32 asr_call_11d5d4_err_10c35e(u32 unused_a0, u32 unused_a1, u32 a2, u32 a3) {
    int iVar1;
    u32 unaff_r13;
    u32 *unaff_r14;

    iVar1 = asr_talk_11d5d4(*unaff_r14, unused_a1, a2, a3);
    if (iVar1 != 0) {
        unaff_r13 = lib11c_take_error(*(u32 *)unaff_r14[1], *unaff_r14, a2, a3);
    }
    return unaff_r13;
}

/*
 * asr_test_10c3a0  0x8c10c3a0
 * area name: sits between asr functions (same compilation unit); behaviour name: returns the result of a comparison
 * called by: asr_talk_01d008
 */
u32 asr_test_10c3a0(int *a0, u32 unused_a1, u32 a2, u32 a3) {
    int iVar1;
    u32 uStack_14;
    u32 uStack_10;

    iVar1 = *a0;
    uStack_14 = *(u32 *)(iVar1 + 4);
    uStack_10 = 0;
    if (a0[3] != 0) {
        (**(code **)(iVar1 + 0xc))(a0[3], &uStack_14, a2, a3);
    }
    (**(code **)(iVar1 + 0xc))(a0, &uStack_14, a2, a3);
    return 0;
}

/*
 * asr_copy_10c3de  0x8c10c3de
 * area name: sits between asr functions (same compilation unit); behaviour name: mostly calls copy functions
 * called by: game_uses_strcpy_01dc80
 */
u32 asr_copy_10c3de(int a0, int *a1, int *a2, u32 a3) {
    int *a4;
    int iVar1;
    u32 uVar2;
    int *a6;
    u32 uStack_18;
    u32 uStack_14;

    uStack_18 = *(u32 *)(a0 + 4);
    uStack_14 = 0;
    a6 = a2;
    a4 = (int *)(**(code **)(a0 + 8))(0x10, &uStack_18, a2, a3);
    if (a4 == NULL) {
    LAB_8c10c44a:
        uVar2 = 1;
    } else {
        a4[2] = *a1 + -8;
        a4[1] = a1[1];
        if (a4[2] == 0) {
            a4[3] = 0;
        } else {
            iVar1 = (**(code **)(a0 + 8))(a4[2], &uStack_18, a6, a3);
            a4[3] = iVar1;
            if (iVar1 == 0) {
                (**(code **)(a0 + 0xc))(a4, &uStack_18, a6, a3);
                goto LAB_8c10c44a;
            }
            memmove(a4[3], a1 + 2, a4[2]);
        }
        uVar2 = 0;
        *a4 = a0;
        *a2 = (int)a4;
    }
    return uVar2;
}

/*
 * asr_talk_10c48c  0x8c10c48c
 * area name: sits between asr functions (same compilation unit); behaviour name: mostly calls talk functions
 */
u32 asr_talk_10c48c(u32 a0, u32 unused_a1, u32 a2, u32 a3) {
    u32 uVar1;
    int iVar2;
    int iVar3;
    int *unaff_r14;
    float extraout_fr0;

    iVar3 = *unaff_r14;
    asr_state_has_event(a0, 2, a2);
    *(short *)((int)unaff_r14 + 0x2e) = (short)(int)extraout_fr0;
    *(short *)(unaff_r14 + 0xc) = *(short *)((int)unaff_r14 + 0x2e) * 3 + 3;
    *(short *)(*(int *)unaff_r14[4] + 0xc) = ((short)unaff_r14[0xc] + -1) * 4;
    iVar3 = (**(code **)(iVar3 + 0x14))(iVar3, (u32) * (u16 *)(unaff_r14 + 0xc) << 3, 4, a3);
    unaff_r14[0x15] = iVar3;
    if (unaff_r14[0x15] == 0) {
        uVar1 = 2;
    } else {
        iVar2 = unaff_r14[0x15];
        iVar3 = 0;
        do {
            unaff_r14[iVar3 + 0xd] = iVar2;
            iVar2 = iVar2 + (u32) * (u16 *)(unaff_r14 + 0xc) * 4;
            unaff_r14[iVar3 + 0xe] = iVar2;
            iVar3 = iVar3 + 2;
            iVar2 = iVar2 + (u32) * (u16 *)(unaff_r14 + 0xc) * 4;
        } while (iVar3 < 8);
        *(u16 *)(unaff_r14 + 0xb) = 0;
        uVar1 = 0;
    }
    return uVar1;
}

/*
 * asr_uses_mring_read_advance_10c530  0x8c10c530
 * area name: sits between asr functions (same compilation unit); behaviour name: its main named callee is
 * mring_read_advance
 */
u32 asr_uses_mring_read_advance_10c530(int a0, float *a1, float *a2, int a3) {
    u32 uVar1;
    float *pfVar2;
    float *pfVar3;
    u32 uVar4;
    int iVar5;
    float *pfVar6;
    float *pfVar7;
    float *pfVar8;
    int iVar9;
    float *pfVar10;
    float *pfVar11;
    float *pfVar12;
    float in_fr3;
    float fVar13;
    float fVar14;
    float fVar15;
    float fVar16;
    float in_fr5;
    u64 uVar17;
    u64 in_xd2;
    u64 uVar18;
    u64 in_xd4;
    char cVar19;
    int iStack_24;

    iVar9 = **(int **)(a0 + 0x10);
    pfVar12 = NULL;
    if (*(char *)(iVar9 + 0x30) == '\0') {
        if (*(char *)(a0 + 0x58) == '\0') {
            a1 = (float *)0x1;
            uVar1 = asr_talk_112170(*(u32 *)(a0 + 0xc), 1);
            if ((uVar1 & 0xff) != 0) {
                cVar19 = '\0';
                pfVar2 = (float *)mring_read_advance(**(u32 **)(a0 + 0xc), (*(u32 **)(a0 + 0xc))[1], a2, a3);
                iVar5 = a0 + 0x34;
                uVar1 = (u32) * (u16 *)(a0 + 0x2c);
                pfVar3 = *(float **)((uVar1 & 7) * 4 + iVar5);
                pfVar10 = *(float **)((uVar1 + 7 & 7) * 4 + iVar5);
                pfVar8 = (float *)(*(int *)((uVar1 + 6 & 7) * 4 + iVar5) + 4);
                pfVar6 = *(float **)((uVar1 + 5 & 7) * 4 + iVar5);
                if (cVar19 == '\0') {
                    in_fr5 = *pfVar2;
                    pfVar2 = pfVar2 + 1;
                } else {
                    in_xd4 = *(u64 *)pfVar2;
                    pfVar2 = pfVar2 + 2;
                }
                pfVar7 = *(float **)((uVar1 + 4 & 7) * 4 + iVar5);
                *(int *)(a0 + 0x28) = *(int *)(a0 + 0x28) + 1;
                if (cVar19 == '\0') {
                    *pfVar3 = in_fr5;
                    fVar13 = 2.0;
                } else {
                    *(u64 *)pfVar3 = in_xd4;
                    in_fr5 = 2.0;
                    fVar13 = 0.19999999;
                }
                pfVar3 = pfVar3 + 3;
                pfVar12 = pfVar6 + 1;
                pfVar11 = pfVar10 + 3;
                *pfVar8 = (((in_fr5 * fVar13 - *pfVar7 * fVar13) + *pfVar10) - *pfVar6) * 0.19999999;
                in_fr3 = 0.19999999;
                in_fr5 = 1.0;
                pfVar6[2] = (*pfVar8 - pfVar7[1]) * 1.0;
                pfVar6 = pfVar6 + 3;
                iStack_24 = 0;
                pfVar8 = pfVar8 + *(u16 *)(a0 + 0x2e) + 2;
                a1 = pfVar7 + 3;
                if (*(short *)(a0 + 0x2e) != 0) {
                    do {
                        pfVar2 = pfVar2 + 1;
                        *pfVar3 = *pfVar2;
                        pfVar3 = pfVar3 + 1;
                        fVar14 = *pfVar11;
                        pfVar11 = pfVar11 + 1;
                        fVar15 = *pfVar6;
                        pfVar6 = pfVar6 + 1;
                        fVar16 = *a1;
                        a1 = a1 + 1;
                        in_fr3 = (((fVar13 * *pfVar2 + fVar14) - fVar15) - fVar16 * fVar13) * 0.375;
                        *pfVar8 = in_fr3;
                        iStack_24 = iStack_24 + 1;
                        pfVar8 = pfVar8 + 1;
                    } while (iStack_24 < (int)(u32) * (u16 *)(a0 + 0x2e));
                }
                a2 = pfVar8 + -(u32) * (u16 *)(a0 + 0x2e);
                pfVar6 = pfVar6 + *(u16 *)(a0 + 0x2e);
                a3 = 0;
                if (*(short *)(a0 + 0x2e) != 0) {
                    do {
                        a3 = a3 + 1;
                        fVar13 = *a2;
                        a2 = a2 + 1;
                        in_fr3 = *a1;
                        a1 = a1 + 1;
                        *pfVar6 = (fVar13 - in_fr3) * 1.0;
                        pfVar6 = pfVar6 + 1;
                    } while (a3 < (int)(u32) * (u16 *)(a0 + 0x2e));
                }
            }
        }
        if (*(char *)(a0 + 0x58) != '\0') {
            iVar5 = *(int *)(a0 + 0x28) + -1;
            *(int *)(a0 + 0x28) = iVar5;
            if (iVar5 == 4) {
                *(u8 *)(a0 + 0x58) = 0;
            }
            pfVar12 = (float *)(*(int *)((*(u16 *)(a0 + 0x2c) + 5 & 7) * 4 + a0 + 0x34) + 4);
        }
        if (pfVar12 != NULL) {
            if (3 < *(u32 *)(a0 + 0x28)) {
                cVar19 = '\0';
                pfVar3 = (float *)mring_write_advance(iVar9);
                if (*(u32 *)(a0 + 0x28) < 7) {
                    if (cVar19 == '\0') {
                        uVar17 = (u64)(u32)in_fr5;
                    } else {
                        uVar17 = 0x233853ea00000000;
                    }
                    fVar13 = (float)(uVar17 >> 0x20);
                    if (*(int *)(a0 + 0x28) == 6) {
                        if (cVar19 == '\0') {
                            in_fr3 = *pfVar12;
                            pfVar12 = pfVar12 + 1;
                        } else {
                            in_xd2 = *(u64 *)pfVar12;
                            pfVar12 = pfVar12 + 2;
                        }
                        iVar9 = 0;
                        if (cVar19 == '\0') {
                            *pfVar3 = in_fr3;
                            pfVar3[1] = fVar13;
                        } else {
                            *(u64 *)pfVar3 = in_xd2;
                            *(u64 *)(pfVar3 + 1) = uVar17;
                        }
                        pfVar12 = pfVar12 + 1;
                        pfVar3 = pfVar3 + 2;
                        if (*(short *)(a0 + 0x2e) != 0) {
                            do {
                                if (cVar19 == '\0') {
                                    fVar14 = *pfVar12;
                                    pfVar12 = pfVar12 + 1;
                                    *pfVar3 = fVar14;
                                } else {
                                    uVar18 = *(u64 *)pfVar12;
                                    pfVar12 = pfVar12 + 2;
                                    *(u64 *)pfVar3 = uVar18;
                                }
                                iVar9 = iVar9 + 1;
                                pfVar3 = pfVar3 + 1;
                            } while (iVar9 < (int)((u32) * (u16 *)(a0 + 0x2e) << 1));
                        }
                        iVar9 = 0;
                        if (*(short *)(a0 + 0x2e) != 0) {
                            do {
                                iVar9 = iVar9 + 1;
                                if (cVar19 == '\0') {
                                    *pfVar3 = fVar13;
                                } else {
                                    *(u64 *)pfVar3 = uVar17;
                                }
                                pfVar3 = pfVar3 + 1;
                            } while (iVar9 < (int)(u32) * (u16 *)(a0 + 0x2e));
                        }
                    } else {
                        if (cVar19 == '\0') {
                            *pfVar3 = fVar13;
                        } else {
                            *(u64 *)pfVar3 = uVar17;
                        }
                        iVar9 = 0;
                        if (cVar19 == '\0') {
                            pfVar3[1] = fVar13;
                        } else {
                            *(u64 *)(pfVar3 + 1) = uVar17;
                        }
                        pfVar12 = pfVar12 + 2;
                        pfVar3 = pfVar3 + 2;
                        if (*(short *)(a0 + 0x2e) != 0) {
                            do {
                                if (cVar19 == '\0') {
                                    fVar14 = *pfVar12;
                                    pfVar12 = pfVar12 + 1;
                                    *pfVar3 = fVar14;
                                } else {
                                    uVar18 = *(u64 *)pfVar12;
                                    pfVar12 = pfVar12 + 2;
                                    *(u64 *)pfVar3 = uVar18;
                                }
                                iVar9 = iVar9 + 1;
                                pfVar3 = pfVar3 + 1;
                            } while (iVar9 < (int)(u32) * (u16 *)(a0 + 0x2e));
                        }
                        iVar9 = 0;
                        if (*(short *)(a0 + 0x2e) != 0) {
                            do {
                                iVar9 = iVar9 + 1;
                                if (cVar19 == '\0') {
                                    *pfVar3 = fVar13;
                                } else {
                                    *(u64 *)pfVar3 = uVar17;
                                }
                                pfVar3 = pfVar3 + 1;
                            } while (iVar9 < (int)((u32) * (u16 *)(a0 + 0x2e) << 1));
                        }
                    }
                } else {
                    iVar9 = 0;
                    if (0 < (int)(*(u16 *)(a0 + 0x30) - 1)) {
                        do {
                            if (cVar19 == '\0') {
                                fVar13 = *pfVar12;
                                pfVar12 = pfVar12 + 1;
                                *pfVar3 = fVar13;
                            } else {
                                uVar18 = *(u64 *)pfVar12;
                                pfVar12 = pfVar12 + 2;
                                *(u64 *)pfVar3 = uVar18;
                            }
                            iVar9 = iVar9 + 1;
                            pfVar3 = pfVar3 + 1;
                        } while (iVar9 < (int)(*(u16 *)(a0 + 0x30) - 1));
                    }
                }
            }
            if (pfVar12 != NULL) {
                *(u16 *)(a0 + 0x2c) = (short)*(char *)(a0 + 0x2c) + 1U & 7;
            }
        }
    }
    iVar9 = **(int **)(a0 + 0xc);
    if ((*(int *)((*(int **)(a0 + 0xc))[1] * 4 + *(int *)(iVar9 + 0x40)) == *(int *)(iVar9 + 0x3c)) &&
        (*(char *)(a0 + 0x58) == '\0')) {
        uVar4 = 0;
    } else {
        uVar4 = 1;
    }
    return uVar4;
}

/*
 * asr_calls_calc_10c838  0x8c10c838
 * area name: sits between asr functions (same compilation unit); behaviour name: its callees mostly do: calc
 */
u32 asr_calls_calc_10c838(int *a0, u32 a1, int a2, int *a3) {
    u8 *puVar1;
    u32 uVar2;
    int iVar3;

    puVar1 = (&memset);
    uVar2 = a1 & 0xff;
    if (uVar2 == 1) {
        a0[10] = 0;
        (*(code *)puVar1)(a0[0x15], 0, (u32) * (u16 *)(a0 + 0xc) << 5, a3);
    } else if (uVar2 == 2) {
        if ((a0[10] != 0) || (a2 != 0)) {
            *(u8 *)(a0 + 0x16) = 1;
            if ((u32)a0[10] < 3) {
                iVar3 = a0[10] + 4;
            } else {
                iVar3 = 7;
            }
            a0[10] = iVar3;
        }
    } else if (uVar2 == (int)0xf8) {
        *a3 = a0[10] + -4;
    } else {
        if (uVar2 != (int)0xff) {
            return 0;
        }
        iVar3 = a0[0x15];
        (**(code **)(*a0 + 0x18))(*a0, iVar3, a2, a3);
        asr_calc_120668(a0, iVar3, a2, a3);
    }
    return 1;
}

/*
 * asr_module_def_10c8e2  0x8c10c8e2
 * registers an ASR processing module (inputs: 1, outputs: 1, state size 0x5c) through 8c120580
 */
u32 asr_module_def_10c8e2(u32 a0, u32 a1) {
    u32 uVar1;

    uVar1 = (*(code *)(&asr_talk_120580))(a0, a1, 1, 1, (&asr_uses_mring_read_advance_10c530), (&DATA_8c10c484),
                                          (&asr_calls_calc_10c838), 0x5c);
    return uVar1;
}

/*
 * asr_calc_10c986  0x8c10c986
 * area name: sits between asr functions (same compilation unit); behaviour name: integer arithmetic on its arguments
 * called by: asr_calls_calc_10c99c
 */
int asr_calc_10c986(int *a0) {
    u32 uVar1;

    uVar1 = *(u32 *)((int)0xa4 + *a0);
    return 0xa4 + 0x10 + *a0 + (uVar1 + (uVar1 & 1)) * 2;
}

/*
 * asr_calls_calc_10c99c  0x8c10c99c
 * area name: sits between asr functions (same compilation unit); behaviour name: its callees mostly do: calc
 * called by: alt_entry_10c9cc, asr_calls_calc_10c9c8
 */
int asr_calls_calc_10c99c(int *a0) {
    int iVar1;
    int iVar2;

    iVar2 = *a0;
    iVar1 = asr_calc_10c986(a0);
    return iVar1 + (*(int *)(0x88 + iVar2) + 1) * 4 + (*(int *)(0x90 + iVar2) + 1) * 4;
}

/*
 * asr_calls_calc_10c9c8  0x8c10c9c8
 * area name: sits between asr functions (same compilation unit); behaviour name: its callees mostly do: calls_calc
 * called by: asr_calls_calc_10c9e4
 */
int asr_calls_calc_10c9c8(int *a0) {
    int iVar1;
    u32 uVar2;

    uVar2 = *(u32 *)((int)0xa8 + *a0);
    iVar1 = asr_calls_calc_10c99c(a0);
    return iVar1 + (uVar2 + (uVar2 & 1)) * 2;
}

/*
 * alt_entry_10c9cc  0x8c10c9cc
 * probably an entry 4 bytes into 8c10c9c8: it reads registers that code sets before it
 */
int alt_entry_10c9cc(int *a0) {
    int in_r0;
    int iVar1;
    u32 in_r3;
    u32 uVar2;

    uVar2 = *(u32 *)(in_r0 + *a0);
    iVar1 = asr_calls_calc_10c99c(a0);
    return iVar1 + (uVar2 + (in_r3 & uVar2)) * 2;
}

/*
 * asr_calls_calc_10c9e4  0x8c10c9e4
 * area name: sits between asr functions (same compilation unit); behaviour name: its callees mostly do: calls_calc
 * called by: asr_calls_calc_10ca10
 */
int asr_calls_calc_10c9e4(int *a0) {
    int iVar1;
    int iVar2;

    iVar2 = *a0;
    iVar1 = asr_calls_calc_10c9c8(a0);
    return iVar1 + (*(int *)(0x8c + iVar2) + 1) * 4 + (*(int *)(0x8c + 8 + iVar2) + 1) * 4;
}

/*
 * asr_calls_calc_10ca10  0x8c10ca10
 * area name: sits between asr functions (same compilation unit); behaviour name: its callees mostly do: calls_calc
 */
int asr_calls_calc_10ca10(int *a0) {
    int in_r0;
    u32 in_r2;
    int iVar1;
    u32 uVar2;

    iVar1 = *a0;
    uVar2 = *(int *)(in_r0 + -4 + iVar1) + *(int *)(in_r0 + iVar1);
    iVar1 = asr_calls_calc_10c9e4(a0);
    return iVar1 + (uVar2 + (in_r2 & uVar2)) * 2;
}

/*
 * memmove_wrap_10ca2e  0x8c10ca2e
 * only calls memmove
 * called by: asr_uses_lib11c_check_handle_11d6f0, asr_uses_lib11c_check_handle_11ea3c
 */
u32 memmove_wrap_10ca2e(void) {
    u32 uVar1;

    uVar1 = memmove((&DATA_8c1274a8), 0x4c);
    return uVar1;
}

/*
 * asr_uses_strcmp_word_10ca58  0x8c10ca58
 * area name: sits between asr functions (same compilation unit); behaviour name: its main named callee is strcmp_word
 * called by: asr_copy_122664, asr_copy_122e7c
 */
u32 asr_uses_strcmp_word_10ca58(int *a0, u32 a1, int *a2, int *a3) {
    u8 *puVar1;
    int iVar2;
    u32 uVar3;
    int iVar4;
    int *ar6_00;
    int *ar7_00;
    u32 uVar5;
    int iVar6;
    u32 uStack_28;
    u32 uStack_24;

    puVar1 = (&log_message);
    iVar4 = *a0;
    iVar6 = a0[3];
    uStack_28 = *(u32 *)(iVar4 + 4);
    uVar5 = 0;
    uStack_24 = 0;
    *a3 = 0;
    ar6_00 = a2;
    ar7_00 = a3;
    if (a0[1] != 0) {
        do {
            uVar3 = a1;
            iVar2 = strcmp_word(iVar6, a1);
            if (iVar2 == 0) {
                *a3 = *a3 + 1;
            }
            iVar2 = (*(code *)puVar1)(iVar6, uVar3, ar6_00, ar7_00);
            uVar5 = uVar5 + 1;
            iVar6 = iVar6 + iVar2 + 1;
        } while (uVar5 < (u32)a0[1]);
    }
    if (*a3 == 0) {
        uVar3 = 0x78;
    } else {
        iVar4 = (**(code **)(iVar4 + 8))(*a3 << 2, &uStack_28, ar6_00, ar7_00);
        *a2 = iVar4;
        if (iVar4 == 0) {
            uVar3 = 1;
        } else {
            iVar4 = a0[3];
            *a3 = 0;
            uVar5 = 0;
            if (a0[1] != 0) {
                do {
                    uVar3 = a1;
                    iVar6 = strcmp_word(iVar4, a1);
                    if (iVar6 == 0) {
                        iVar6 = *a3;
                        *a3 = iVar6 + 1;
                        *(u32 *)(*a2 + iVar6 * 4) = uVar5;
                    }
                    iVar6 = (*(code *)puVar1)(iVar4, uVar3, ar6_00, ar7_00);
                    uVar5 = uVar5 + 1;
                    iVar4 = iVar4 + iVar6 + 1;
                } while (uVar5 < (u32)a0[1]);
            }
            uVar3 = 0;
        }
    }
    return uVar3;
}

/*
 * asr_word_array_contains  0x8c10cb4c
 * 1 when one of a1 words at a0 equals a2
 * called by: asr_copy_122e7c
 */
u32 asr_word_array_contains(int *a0, u32 a1, int a2) {
    u32 uVar1;

    uVar1 = 0;
    if (a1 != 0) {
        do {
            if (*a0 == a2) {
                return 1;
            }
            uVar1 = uVar1 + 1;
            a0 = a0 + 1;
        } while (uVar1 < a1);
    }
    return 0;
}

/*
 * asr_uses_mring_read_advance_10cb90  0x8c10cb90
 * area name: sits between asr functions (same compilation unit); behaviour name: its main named callee is
 * mring_read_advance
 */
u32 asr_uses_mring_read_advance_10cb90(int a0, u32 unused_a1, u32 unused_a2, u32 a3) {
    u32 *puVar1;
    u32 *puVar2;
    float *pfVar3;
    float *pfVar4;
    u32 ar5_00;
    float *pfVar5;
    int iVar6;
    float *pfVar7;
    u32 *puVar8;
    float fVar9;
    u64 in_dr2;
    u64 uVar10;
    u32 in_fr5;
    u64 uVar11;
    char cVar12;

    if (*(char *)(**(int **)(a0 + 0x10) + 0x30) != '\x01') {
        ar5_00 = *(u32 *)(*(int *)(a0 + 0xc) + 4);
        puVar1 = (u32 *)mring_read_advance(**(u32 **)(a0 + 0xc), ar5_00, unused_a2, a3);
        if (puVar1 != NULL) {
            cVar12 = '\0';
            puVar2 = (u32 *)mring_write_advance(**(u32 **)(a0 + 0x10));
            puVar8 = *(u32 **)(a0 + 0x34);
            if (cVar12 == '\0') {
                in_fr5 = *(u32 *)(a0 + 0x38);
                in_dr2 = (u64)*puVar1;
                *puVar2 = *puVar1;
            } else {
                *(u64 *)puVar2 = *(u64 *)puVar1;
            }
            pfVar4 = (float *)(puVar2 + 1);
            pfVar3 = (float *)(puVar1 + *(int *)(a0 + 0x30) + 1);
            pfVar7 = pfVar4 + *(int *)(a0 + 0x28);
            iVar6 = *(int *)(a0 + 0x2c);
            if (cVar12 == '\0') {
                uVar11 = (u64)in_fr5;
            } else {
                uVar11 = 0x3f00000000000000;
            }
            for (; pfVar4 < pfVar7; pfVar4 = pfVar4 + 1) {
                pfVar5 = pfVar3;
                if (cVar12 == '\0') {
                    *pfVar4 = (float)(uVar11 >> 0x20);
                } else {
                    *(u64 *)pfVar4 = uVar11;
                }
                while (fVar9 = (float)in_dr2, pfVar5 < pfVar3 + iVar6) {
                    if (cVar12 == '\0') {
                        fVar9 = *pfVar5;
                        pfVar5 = pfVar5 + 1;
                        uVar10 = CONCAT44(*pfVar4, *puVar8);
                        puVar8 = puVar8 + 1;
                    } else {
                        fVar9 = (float)((u64) * (u64 *)pfVar5 >> 0x20);
                        pfVar5 = pfVar5 + 2;
                        uVar10 = *(u64 *)pfVar4;
                        puVar8 = puVar8 + 2;
                    }
                    cVar12 = '\0';
                    fVar9 = fVar9 * (float)uVar10 + (float)((u64)uVar10 >> 0x20);
                    in_dr2 = CONCAT44(fVar9, (float)uVar10);
                    *pfVar4 = fVar9;
                }
                if (cVar12 == '\0') {
                    fVar9 = *pfVar4;
                }
                cVar12 = '\0';
                fVar9 = fVar9 * (float)uVar11;
                in_dr2 = (u64)(u32)fVar9;
                *pfVar4 = fVar9;
            }
            pfVar7 = pfVar7 + -*(int *)(a0 + 0x28);
            if (cVar12 == '\0') {
                uVar10 = CONCAT44(*pfVar7, 0x3f000000);
            } else {
                uVar10 = *(u64 *)pfVar7;
            }
            *pfVar7 = (float)((u64)uVar10 >> 0x20) * (float)uVar10;
            iVar6 = **(int **)(a0 + 0xc);
            return *(int *)((*(int **)(a0 + 0xc))[1] * 4 + *(int *)(iVar6 + 0x40)) == *(int *)(iVar6 + 0x3c) ^ 1;
        }
    }
    return 0;
}

/*
 * asr_calls_calc_10cc6e  0x8c10cc6e
 * area name: sits between asr functions (same compilation unit); behaviour name: its callees mostly do: calc
 */
u32 asr_calls_calc_10cc6e(int *a0, u32 a1, u32 a2, u32 a3) {
    int a5;

    if ((a1 & 0xff) == (int)0xff) {
        a5 = a0[0xd];
        (**(code **)(*a0 + 0x18))(*a0, a5, a2, a3);
        asr_calc_120668(a0, a5, a2, a3);
        return 1;
    }
    return 0;
}

/*
 * asr_talk_10cccc  0x8c10cccc
 * area name: sits between asr functions (same compilation unit); behaviour name: mostly calls talk functions
 */
u32 asr_talk_10cccc(int *a0, u32 unused_a1, u32 a2, u32 a3) {
    float *pfVar1;
    u32 uVar2;
    int a4;
    int a5;
    float *pfVar3;
    u32 uVar4;
    u32 uVar5;
    float fVar6;
    float fVar7;
    u64 in_dr0;
    double dVar8;
    float fVar9;
    double dVar10;
    u32 in_fr13;
    double dVar11;
    float in_fr15;
    u32 uVar12;
    int iVar13;
    float fVar14;
    char cVar15;

    fVar9 = (float)((u64)in_dr0 >> 0x20);
    asr_state_has_event(a0, 2, a2);
    uVar12 = (u32)fVar9;
    uVar4 = uVar12 & 0xffff;
    a0[10] = uVar4;
    asr_state_has_event(a0, 3, a2);
    iVar13 = (int)fVar9;
    asr_state_has_event(a0, 4, a2);
    a0[0xc] = (int)fVar9 & 0xffff;
    asr_state_has_event(a0, 1, a2);
    uVar2 = ((int)fVar9 & 0xffffU) - a0[0xc];
    a0[0xb] = uVar2;
    *(short *)(*(int *)a0[4] + 0xc) = ((short)uVar12 + 1) * 4;
    fVar9 = (float)(int)uVar2;
    if ((int)uVar2 < 0) {
        fVar9 = fVar9 + 4.2949673e+09;
    }
    a5 = uVar2 * uVar4 * 4;
    a0[0xe] = (int)(2.0 / fVar9);
    a4 = *a0;
    cVar15 = '\0';
    pfVar1 = (float *)(**(code **)(a4 + 0x10))(a4, a5, a2, a3);
    a0[0xd] = (int)pfVar1;
    if (cVar15 == '\0') {
        fVar9 = 1.0;
        dVar11 = (double)CONCAT44(0x400921fb, in_fr13);
    } else {
        in_fr15 = 1.0;
        fVar9 = 2.142699;
        dVar11 = 8.619199512815383e+97;
    }
    uVar12 = 0;
    if (cVar15 == '\0') {
        dVar11 = (double)CONCAT44((int)((u64)dVar11 >> 0x20), 0x54442d18);
    }
    if (uVar4 != 0) {
        do {
            dVar10 = (double)(int)uVar12;
            if ((int)uVar12 < 0) {
                dVar10 = dVar10 + 4294967296.0;
            }
            dVar8 = (double)(int)(short)iVar13;
            fVar14 = (float)((dVar10 * dVar11) / dVar8);
            cVar15 = '\0';
            thunk_FUN_8c0142e4();
            if (cVar15 == '\0') {
                fVar14 = (float)((u64)dVar8 >> 0x20);
                fVar6 = 6.0;
                in_fr15 = fVar9;
            } else {
                fVar6 = 1.75;
            }
            in_fr15 = fVar6 * fVar14 + in_fr15;
            uVar5 = 0;
            pfVar3 = pfVar1;
            if (uVar2 != 0) {
                do {
                    pfVar1 = pfVar3 + 1;
                    fVar14 = (float)(int)uVar5;
                    if ((int)uVar5 < 0) {
                        fVar14 = fVar14 + 4.2949673e+09;
                    }
                    fVar6 = (float)(int)uVar12;
                    if ((int)uVar12 < 0) {
                        fVar6 = fVar6 + 4.2949673e+09;
                    }
                    fVar7 = (float)(int)uVar2;
                    if ((int)uVar2 < 0) {
                        fVar7 = fVar7 + 4.2949673e+09;
                    }
                    dVar10 = (double)fVar7;
                    fVar14 = (float)((((double)fVar14 + 0.5) * (double)fVar6 * dVar11) / dVar10);
                    cVar15 = '\0';
                    thunk_FUN_8c013c88();
                    uVar5 = uVar5 + 1;
                    if (cVar15 == '\0') {
                        fVar14 = in_fr15;
                    }
                    *pfVar3 = fVar14 * (float)((u64)dVar10 >> 0x20);
                    pfVar3 = pfVar1;
                } while (uVar5 < uVar2);
            }
            uVar12 = uVar12 + 1;
        } while (uVar12 < uVar4);
    }
    return 0;
}

/*
 * asr_module_def_10cefa  0x8c10cefa
 * registers an ASR processing module (inputs: 1, outputs: 1, state size 0x3c) through 8c120580
 */
u32 asr_module_def_10cefa(u32 a0, u32 a1) {
    u32 uVar1;

    uVar1 = (*(code *)(&asr_talk_120580))(a0, a1, 1, 1, (&asr_uses_mring_read_advance_10cb90), (&asr_talk_10cccc),
                                          (&asr_calls_calc_10cc6e), 0x3c);
    return uVar1;
}

/*
 * asr_scan_loop_10cf6c  0x8c10cf6c
 * area name: sits between asr functions (same compilation unit); behaviour name: a loop that only reads
 * called by: alt_entry_10ddb6, asr_calls_scan_loop_10d458, asr_calls_scan_loop_10ddaa
 */
u32 asr_scan_loop_10cf6c(int *a0, u32 *a1, u16 *a2, u32 a3) {
    int iVar1;
    int *piVar2;
    int iVar3;
    u32 uVar4;

    uVar4 = 1;
    piVar2 = (int *)*a1;
    iVar3 = *a0;
    iVar1 = 0;
    if (*a2 != 0) {
        do {
            if (*piVar2 != 0) {
                (**(code **)(iVar3 + 0x18))(iVar3, *piVar2, uVar4);
                (**(code **)(iVar3 + 0x18))(iVar3, piVar2[2]);
                *piVar2 = 0;
            }
            iVar1 = iVar1 + 1;
            piVar2 = piVar2 + 3;
        } while (iVar1 < (int)(u32)*a2);
    }
    if (*a2 != (u16)a3) {
        if (*a2 != 0) {
            (**(code **)(iVar3 + 0x18))(iVar3, *a1);
        }
        if ((u16)a3 != 0) {
            uVar4 = (**(code **)(iVar3 + 0x14))(iVar3, (u16)a3, 0xc);
            *a1 = uVar4;
        }
        *a2 = (u16)a3;
    }
    return *a1;
}

/*
 * alt_entry_10cf82  0x8c10cf82
 * probably an entry 22 bytes into 8c10cf6c: it reads registers that code sets before it
 */
u32 alt_entry_10cf82(int *a0, u32 unused_a1, u32 a2, u32 a3) {
    u32 uVar1;
    u16 unaff_r8;
    int iVar2;
    u32 *unaff_r10;
    int unaff_r11;
    u16 *unaff_r12;
    int *piVar3;
    int a4;

    piVar3 = (int *)*unaff_r10;
    a4 = *a0;
    iVar2 = unaff_r11;
    if (*unaff_r12 != 0) {
        do {
            if (*piVar3 != 0) {
                (**(code **)(a4 + 0x18))(a4, *piVar3, a2, a3);
                (**(code **)(a4 + 0x18))(a4, piVar3[2], a2, a3);
                *piVar3 = unaff_r11;
            }
            iVar2 = iVar2 + 1;
            piVar3 = piVar3 + 3;
        } while (iVar2 < (int)(u32)*unaff_r12);
    }
    if (*unaff_r12 != unaff_r8) {
        if (*unaff_r12 != 0) {
            (**(code **)(a4 + 0x18))(a4, *unaff_r10, a2, a3);
        }
        if (unaff_r8 != 0) {
            uVar1 = (**(code **)(a4 + 0x14))(a4, (u32)unaff_r8, 0xc, a3);
            *unaff_r10 = uVar1;
        }
        *unaff_r12 = unaff_r8;
    }
    return *unaff_r10;
}

/*
 * asr_talk_10d016  0x8c10d016
 * area name: sits between asr functions (same compilation unit); behaviour name: mostly calls talk functions
 * called by: asr_calls_scan_loop_10d458
 */
u32 asr_talk_10d016(int *a0, int *a1, u32 a2, u32 a3, int s0) {
    int iVar1;
    u32 uVar2;
    u32 a6;
    u32 a7;
    int iVar3;

    iVar3 = *a0;
    a6 = a2;
    a7 = a3;
    if (*a1 != 0) {
        (**(code **)(iVar3 + 0x18))(iVar3, *a1, a2, a3);
        (**(code **)(iVar3 + 0x18))(iVar3, a1[2], a6, a7);
    }
    *(short *)(a1 + 1) = (short)a2;
    *(short *)((int)a1 + 6) = (short)a3;
    iVar1 = (**(code **)(iVar3 + 0x10))(iVar3, (a2 & 0xffff) << 2, a6, a7);
    *a1 = iVar1;
    iVar3 = (**(code **)(iVar3 + 0x14))(iVar3, a2 & 0xffff, 1, a7);
    a1[2] = iVar3;
    if ((*a1 != 0) && (a1[2] != 0)) {
        iVar3 = 0;
        if ((a2 & 0xffff) != 0) {
            do {
                iVar1 = iVar3 + 1;
                *(int *)(*a1 + iVar3 * 4) = s0;
                s0 = s0 + (a3 & 0xffff);
                iVar3 = iVar1;
            } while (iVar1 < (int)(a2 & 0xffff));
        }
        return 0;
    }
    uVar2 = asr_fsm_set_result(a0, 2);
    return uVar2;
}

/*
 * asr_talk_10d0da  0x8c10d0da
 * area name: sits between asr functions (same compilation unit); behaviour name: mostly calls talk functions
 * called by: asr_calls_scan_loop_10d458
 */
u32 asr_talk_10d0da(int a0, int a1, u32 unused_a2, u32 a3) {
    u32 uVar1;
    u32 ar6_00;
    u32 ar6_01;
    int iVar2;

    ar6_01 = a1 * 2;
    if (*(u16 *)(*(int *)(a0 + 100) + 0xc) == ar6_01) {
    LAB_8c10d11a:
        ar6_00 = a1 * 3;
        if (*(u16 *)(**(int **)(a0 + 0x60) + 0xc) != ar6_00) {
            a3 = 1;
            uVar1 = 1;
            iVar2 = asr_talk_111adc(**(u32 **)(a0 + 0x60), 1, ar6_00, 1);
            if (iVar2 == 0)
                goto LAB_8c10d152;
            iVar2 = mring_write_advance(**(u32 **)(a0 + 0x60));
            *(int *)(a0 + 0x28) = iVar2;
            *(u32 *)(a0 + 0x2c) = ar6_01 + iVar2;
        }
        (*(code *)(&mring_read_advance))(**(u32 **)(a0 + 0x60), (*(u32 **)(a0 + 0x60))[1], ar6_00, a3);
        uVar1 = 0;
    } else {
        iVar2 = *(int *)(a0 + 100);
        a3 = *(u32 *)(iVar2 + 0x18);
        iVar2 = asr_talk_111adc(iVar2, *(u32 *)(iVar2 + 8), ar6_01, a3);
        if (iVar2 != 0)
            goto LAB_8c10d11a;
    LAB_8c10d152:
        uVar1 = 1;
    }
    return uVar1;
}

/*
 * asr_update_fields_10d196  0x8c10d196
 * area name: in the asr library code range; behaviour name: conditionally writes members
 * called by: asr_calls_scan_loop_10d458
 */
u32 asr_update_fields_10d196(u32 *a0, u32 a1, u32 a2, u32 a3) {
    *(u16 *)(a0 + 1) = (u16)a1;
    *(u16 *)((int)a0 + 6) = (u16)a2;
    *a0 = a3;
    return 0;
}

/*
 * asr_scan_loop_10d1bc  0x8c10d1bc
 * area name: in the asr library code range; behaviour name: a loop that only reads
 * called by: asr_calls_fill_loop_10ea62, asr_calls_scan_loop_10d458
 */
u32 asr_scan_loop_10d1bc(int a0) {
    u16 uVar1;
    u32 uVar2;
    char cVar3;
    int iVar4;
    u32 uVar5;
    char *pcVar6;
    u32 uVar7;
    u32 uVar8;
    int iVar9;
    char cVar10;
    int iVar11;
    u32 uVar12;
    u32 uVar13;
    u32 uVar14;

    uVar8 = 0;
    if (*(short *)(a0 + 0x30) != 0) {
        do {
            iVar11 = 0;
            uVar12 = (u32)0xff;
            uVar1 =
                *(u16 *)((u32) * (u16 *)(0xe8 + a0) * (u32) * (u16 *)(a0 + 0x30) * 2 + *(int *)(a0 + 0x7c) + uVar8 * 2);
            uVar14 = (u32)(short)uVar1;
            iVar9 = *(int *)(uVar8 * 0xc + *(int *)(a0 + 0x70));
            cVar10 = '\x01';
            if (*(u8 **)(a0 + 0x68) == (&asr_fill_loop_10da96)) {
                cVar10 = '\x11';
                if ((uVar1 & 1) == 0) {
                    iVar11 = 4;
                } else {
                    uVar12 = 0xf;
                }
                uVar14 = (u32)(uVar1 >> 1);
            }
            uVar7 = 0;
            uVar13 = (u32) * (u16 *)(uVar8 * 0xc + *(int *)(a0 + 0x70) + 4);
            if (uVar13 != 0) {
                do {
                    iVar4 = uVar7 * 4;
                    pcVar6 = (char *)(*(int *)(0xc0 + a0 + uVar8 * 4) + uVar7);
                    uVar7 = uVar7 + 1;
                    uVar5 = (u32) * (u8 *)(*(int *)(iVar4 + iVar9) + (uVar14 & 0xffff)) & uVar12 & 0xff;
                    uVar2 = -iVar11;
                    if ((int)uVar2 < 0) {
                        cVar3 = (char)((int)uVar5 >> (~uVar2 & 0x1f) + 1);
                    } else {
                        cVar3 = (char)(uVar5 << (uVar2 & 0x1f));
                    }
                    *pcVar6 = cVar3 * cVar10;
                } while (uVar7 < uVar13);
            }
            uVar8 = uVar8 + 1;
        } while (uVar8 < *(u16 *)(a0 + 0x30));
    }
    return 0x30;
}

/*
 * asr_fill_loop_10d29c  0x8c10d29c
 * area name: in the asr library code range; behaviour name: a loop that writes memory
 * called by: asr_calls_fill_loop_10ea62
 */
int asr_fill_loop_10d29c(int a0, u32 unused_a1, u32 a2) {
    int iVar1;
    int iVar2;
    int iVar3;

    iVar1 = (int)0x114;
    *(u32 *)(iVar1 + a0) = 0;
    *(u32 *)(iVar1 + 4 + a0) = 0;
    iVar3 = *(int *)(0x84 + a0);
    iVar1 = 0x84 + 0xc;
    iVar2 = 0;
    if (*(short *)(iVar1 + a0) != 0) {
        do {
            iVar1 = 0;
            if (*(short *)(iVar3 + 4) != 0) {
                do {
                    *(u8 *)(*(int *)(iVar3 + 8) + iVar1) = 0;
                    iVar1 = iVar1 + 1;
                } while (iVar1 < (int)(u32) * (u16 *)(iVar3 + 4));
            }
            iVar1 = (int)0x90;
            iVar2 = iVar2 + 1;
            iVar3 = iVar3 + 0xc;
        } while (iVar2 < (int)(u32) * (u16 *)(iVar1 + a0));
    }
    return iVar1;
}

/*
 * asr_fill_loop_10d2f0  0x8c10d2f0
 * area name: in the asr library code range; behaviour name: a loop that writes memory
 * called by: asr_calls_fill_loop_10ea62
 */
int asr_fill_loop_10d2f0(int a0, u32 *a1) {
    int iVar1;
    u8 *puVar2;
    u32 *puVar3;
    int iVar4;
    int iVar5;

    iVar1 = (int)0x114;
    *(u32 *)(iVar1 + a0) = *a1;
    puVar3 = a1 + 2;
    *(u32 *)(iVar1 + 4 + a0) = a1[1];
    iVar1 = (int)0x90;
    iVar4 = 0;
    if (*(short *)(iVar1 + a0) != 0) {
        do {
            iVar5 = iVar4 * 0xc;
            iVar1 = 0;
            if (*(short *)(*(int *)(0x84 + a0) + iVar5 + 4) != 0) {
                do {
                    puVar2 = (u8 *)((int)puVar3 + 1);
                    *(u8 *)(*(int *)(0xc0 + a0 + iVar4 * 4) + iVar1) = *(u8 *)puVar3;
                    puVar3 = (u32 *)((int)puVar3 + 2);
                    *(u8 *)(*(int *)(*(int *)(0x84 + a0) + iVar5 + 8) + iVar1) = *puVar2;
                    iVar1 = iVar1 + 1;
                } while (iVar1 < (int)(u32) * (u16 *)(*(int *)(0x84 + a0) + iVar5 + 4));
            }
            iVar1 = (int)0x90;
            iVar4 = iVar4 + 1;
        } while (iVar4 < (int)(u32) * (u16 *)(iVar1 + a0));
    }
    return iVar1;
}

/*
 * asr_fill_loop_10d366  0x8c10d366
 * area name: in the asr library code range; behaviour name: a loop that writes memory
 * called by: asr_calls_fill_loop_10ea62
 */
int asr_fill_loop_10d366(int a0, u32 *a1) {
    u8 *puVar1;
    int iVar2;
    int iVar3;
    int iVar4;
    u32 *puVar5;
    int iVar6;

    iVar2 = (int)0x114;
    *a1 = *(u32 *)(iVar2 + a0);
    iVar3 = (int)0x90;
    a1[1] = *(u32 *)(iVar2 + 4 + a0);
    puVar5 = a1 + 2;
    iVar2 = 0;
    if (*(short *)(iVar3 + a0) != 0) {
        do {
            iVar6 = iVar2 * 0xc;
            iVar3 = 0;
            if (*(short *)(*(int *)(0x84 + a0) + iVar6 + 4) != 0) {
                do {
                    iVar4 = (int)0x84;
                    *(u8 *)puVar5 = *(u8 *)(*(int *)(0xc0 + a0 + iVar2 * 4) + iVar3);
                    puVar1 = (u8 *)(*(int *)(*(int *)(iVar4 + a0) + iVar6 + 8) + iVar3);
                    iVar3 = iVar3 + 1;
                    iVar4 = (int)0x84;
                    *(u8 *)((int)puVar5 + 1) = *puVar1;
                    puVar5 = (u32 *)((int)puVar5 + 2);
                } while (iVar3 < (int)(u32) * (u16 *)(*(int *)(iVar4 + a0) + iVar6 + 4));
            }
            iVar3 = (int)0x90;
            iVar2 = iVar2 + 1;
        } while (iVar2 < (int)(u32) * (u16 *)(iVar3 + a0));
    }
    return iVar3;
}

/*
 * asr_scan_loop_10d3ec  0x8c10d3ec
 * area name: in the asr library code range; behaviour name: a loop that only reads
 * called by: asr_calls_fill_loop_10ea62, asr_calls_scan_loop_10d458
 */
u32 asr_scan_loop_10d3ec(int a0) {
    int iVar1;
    u32 uVar2;
    u16 *puVar3;
    short sVar4;
    u16 *puVar5;
    short *psVar6;

    iVar1 = (int)0xb4;
    puVar3 = *(u16 **)(iVar1 + a0);
    puVar5 = *(u16 **)(iVar1 + -0xc + a0);
    uVar2 = (u32)0xb0;
    psVar6 = *(short **)(uVar2 + a0);
    puVar5 = puVar3 + ((u32)puVar5[*(u16 *)(iVar1 + -0x18 + a0)] - (u32)*puVar5);
    for (; puVar3 < puVar5; puVar3 = puVar3 + 1) {
        uVar2 = (u32)(short)*puVar3;
        sVar4 = (short)((int)uVar2 >> 2);
        if ((uVar2 & 1) != 0) {
            uVar2 = (u32)0x96;
            sVar4 = sVar4 + *(short *)(uVar2 + a0);
        }
        if ((*puVar3 & 2) != 0) {
            uVar2 = (u32)0x94;
            sVar4 = sVar4 + *(short *)(uVar2 + a0);
        }
        *psVar6 = sVar4;
        psVar6 = psVar6 + 1;
    }
    return uVar2;
}

/*
 * asr_calls_scan_loop_10d458  0x8c10d458
 * area name: in the asr library code range; behaviour name: its callees mostly do: scan_loop
 * called by: asr_calls_fill_loop_10ea62
 */
u32 asr_calls_scan_loop_10d458(int *a0, int a1, u32 a2, u32 a3) {
    int iVar1;
    u32 uVar2;
    u32 a6;
    u32 a5;
    u32 uVar3;
    u32 uVar4;
    int *a5_00;
    code *pcVar5;
    int iVar6;
    int iVar7;
    int iVar8;
    int iVar9;
    u32 uVar10;
    int a4;

    a4 = *a0;
    iVar7 = a1;
    iVar1 = (**(code **)(0x9c + a1))(a1, a1, a2, a3);
    uVar2 = (**(code **)(a1 + 0x14))(a1, iVar7, a2, a3);
    *(short *)((int)0xe8 + (int)a0) = (short)uVar2;
    uVar2 = (**(code **)(a1 + 0x18))(a1, iVar7, a2, a3);
    *(short *)((int)0x98 + (int)a0) = (short)uVar2;
    uVar2 = (**(code **)(a1 + 0x10))(a1, iVar7, a2, a3);
    *(short *)((int)0x9a + (int)a0) = (short)uVar2;
    uVar2 = (**(code **)(a1 + 0x28))(a1, iVar7, a2, a3);
    *(short *)((int)0x9e + (int)a0) = (short)uVar2;
    uVar2 = (**(code **)(a1 + 0x20))(a1, iVar7, a2, a3);
    *(short *)((int)0x9c + (int)a0) = (short)uVar2;
    *(short *)(0x9c + 4 + (int)a0) = -*(short *)((int)0x9c + (int)a0);
    uVar2 = (**(code **)(a1 + 0x78))(a1, iVar7, a2, a3);
    *(u32 *)((int)0xa4 + (int)a0) = uVar2;
    uVar2 = (**(code **)(a1 + 0x7c))(a1, iVar7, a2, a3);
    *(u32 *)((int)0xa8 + (int)a0) = uVar2;
    uVar2 = (**(code **)(0x80 + a1))(a1, iVar7, a2, a3);
    *(u32 *)((int)0xb4 + (int)a0) = uVar2;
    if (*(int *)((int)0xac + (int)a0) != 0) {
        (**(code **)(a4 + 0x18))(a4, *(u32 *)((int)0xac + (int)a0), a2, a3);
        (**(code **)(a4 + 0x18))(a4, *(u32 *)((int)0xb0 + (int)a0), a2, a3);
    }
    uVar2 = (**(code **)(a4 + 0x10))(a4, (u32) * (u16 *)((int)0x98 + (int)a0) << 1, a2, a3);
    iVar7 = (int)0x9c;
    *(u32 *)((int)0xac + (int)a0) = uVar2;
    iVar7 =
        ((u32)(*(u16 **)((int)0xa8 + (int)a0))[*(u16 *)(iVar7 + (int)a0)] - (u32) * *(u16 **)((int)0xa8 + (int)a0)) * 2;
    uVar2 = (**(code **)(a4 + 0x10))(a4, iVar7, a2, a3);
    *(u32 *)((int)0xb0 + (int)a0) = uVar2;
    asr_scan_loop_10d3ec(a0);
    uVar2 = (**(code **)(a1 + 0x38))(a1, iVar7, a2, a3);
    *(short *)((int)0x92 + (int)a0) = (short)uVar2;
    uVar2 = (**(code **)(a1 + 0x70))(a1, iVar7, a2, a3);
    a6 = (**(code **)(a1 + 8))(a1, iVar7, a2, a3);
    a5 = (**(code **)(a1 + 0xc))(a1, iVar7, a6, a3);
    uVar3 = asr_update_fields_10d196(a0 + 0x1f, a5, a6, uVar2);
    if ((uVar3 & 0xff) == 0) {
        *(int **)((int)0x88 + (int)a0) = a0 + 0x1f;
        uVar2 = (**(code **)(a1 + 8))(a1, a5, a6, uVar2);
        iVar8 = (int)0x8e;
        *(short *)(a0 + 0xc) = (short)uVar2;
        iVar8 = iVar8 + (int)a0;
        uVar3 = (u32)(short)a0[0xc];
        a5_00 = a0 + 0x1c;
        iVar7 = asr_scan_loop_10cf6c(a0, a5_00, iVar8, uVar3);
        if (iVar7 != 0) {
            uVar10 = 0;
            if ((short)a0[0xc] != 0) {
                do {
                    uVar4 = uVar10;
                    uVar2 = (**(code **)(0x84 + a1))(a1, uVar10, iVar8, uVar3);
                    (**(code **)(0xc0 + a1))(uVar2, uVar4, iVar8, uVar3);
                    if (iVar1 == 0) {
                        uVar3 = (**(code **)(a1 + 0x68))(uVar2, uVar4, iVar8, uVar3);
                    } else {
                        iVar7 = (**(code **)(a1 + 0x68))(uVar2, uVar4, iVar8, uVar3);
                        uVar3 = iVar7 + 1U >> 1;
                    }
                    iVar8 = (**(code **)(a1 + 0x60))(uVar2, uVar4, iVar8, uVar3);
                    iVar7 = uVar10 * 0xc + a0[0x1c];
                    uVar4 = asr_talk_10d016(a0, iVar7, iVar8, uVar3);
                    if ((uVar4 & 0xff) != 0) {
                        return 1;
                    }
                    iVar9 = uVar10 * 4;
                    if (*(int *)((int)a0 + iVar9 + 0xc0) != 0) {
                        iVar7 = *(int *)((int)a0 + iVar9 + 0xc0);
                        (**(code **)(a4 + 0x18))(a4, iVar7, iVar8, uVar3);
                    }
                    pcVar5 = *(code **)(a4 + 0x10);
                    iVar6 = (int)0xc0;
                    a5_00 = (int *)(**(code **)(a1 + 0x60))(uVar2, iVar7, iVar8, uVar3);
                    uVar2 = (*pcVar5)(a4, a5_00, iVar8, uVar3);
                    *(u32 *)((int)a0 + iVar9 + iVar6) = uVar2;
                    uVar10 = uVar10 + 1;
                } while (uVar10 < *(u16 *)(a0 + 0xc));
            }
            a0[0x21] = a0[0x1c];
            *(u16 *)(a0 + 0x24) = *(u16 *)((int)a0 + 0x8e);
            uVar2 = (**(code **)(a1 + 0x10))(a1, a5_00, iVar8, uVar3);
            uVar10 = asr_talk_10d0da(a0, uVar2, iVar8, uVar3);
            if ((uVar10 & 0xff) == 0) {
                if (iVar1 == 0) {
                    a0[0x1a] = (int)(&asr_fill_loop_10d7f4);
                } else {
                    a0[0x1a] = (int)(&asr_fill_loop_10da96);
                }
                asr_scan_loop_10d1bc(a0);
                return 0;
            }
        }
    }
    return 1;
}

/*
 * asr_fill_loop_10d7f4  0x8c10d7f4
 * area name: in the asr library code range; behaviour name: a loop that writes memory
 */
int asr_fill_loop_10d7f4(int a0, int a1, int a2, u32 a3) {
    int iVar1;
    u16 uVar2;
    u32 uVar3;
    u16 *puVar4;
    int *piVar5;
    u32 uVar6;
    u32 uVar7;
    u16 *puVar8;
    u16 *ar7_00;
    int iVar9;
    int iVar10;
    int *piVar11;
    int *piVar12;
    int iVar13;
    int iStack_3c;
    u16 *puStack_38;
    short *psStack_30;

    iVar9 = *(int *)(0xac + a0);
    piVar11 = (int *)(a0 + 0x34);
    iVar1 = (int)0x9c;
    piVar12 = piVar11 + a2 + -1;
    uVar3 = (u32) * *(u16 **)(a0 + 0x28);
    psStack_30 = *(short **)(iVar1 + 0x14 + a0);
    iVar13 = a2 * *(short *)(iVar1 + 4 + a0);
    iVar10 = **(int **)(0xac + -0x24 + a0) + iVar13 * 2;
    if (uVar3 == *(u16 *)(0x9a + a0)) {
        puVar4 = (u16 *)(uVar3 * 2 + a1);
        ar7_00 = (u16 *)((u32) * (u16 *)(iVar1 + a0) * 2 + a1);
        puVar8 = (u16 *)(a2 * uVar3 * 2 + iVar10 + -2);
        while (puVar4 = puVar4 + -1, ar7_00 <= puVar4) {
            *puVar4 = (u16) * (u8 *)(*piVar12 + (u32)*puVar8);
            for (piVar5 = piVar11 + a2 + -2; puVar8 = puVar8 + -1, piVar11 <= piVar5; piVar5 = piVar5 + -1) {
                *puVar4 = (u16) * (u8 *)(*piVar5 + (u32)*puVar8) + *puVar4;
            }
        }
        (*(code *)(&memset))(*(int *)(a0 + 0x2c) + (u32) * (u16 *)(0x9c + a0), 0, uVar3 - *(u16 *)(0x9c + a0), ar7_00);
    } else {
        uVar7 = *(u16 *)(iVar1 + a0) + 1;
        puVar4 = (u16 *)(uVar7 * 2 + *(int *)(a0 + 0x28));
        if (uVar7 <= uVar3) {
            do {
                uVar6 = (u32)*puVar4;
                puStack_38 = (u16 *)(a2 * uVar6 * 2 + iVar10);
                puVar8 = (u16 *)(uVar6 * 2 + a1);
                *puVar8 = (u16) * (u8 *)(*piVar11 + (u32)*puStack_38);
                for (piVar5 = (int *)(a0 + 0x38); piVar5 <= piVar12; piVar5 = piVar5 + 1) {
                    puStack_38 = puStack_38 + 1;
                    *puVar8 = (u16) * (u8 *)(*piVar5 + (u32)*puStack_38) + *puVar8;
                }
                uVar7 = uVar7 + 1;
                *(u8 *)(*(int *)(a0 + 0x2c) + uVar6) = 0;
                puVar4 = puVar4 + 1;
            } while ((int)uVar7 <= (int)uVar3);
        }
    }
    iStack_3c = 0;
    puVar4 = *(u16 **)(0xa4 + a0) + **(u16 **)(0xa4 + a0);
    if (*(short *)(0x98 + a0) != 0) {
        do {
            uVar3 = a2 * 0xff;
            while (puVar4 <
                   (u16 *)((u32) * (u16 *)(iStack_3c * 2 + *(int *)(0xa4 + a0) + 2) * 2 + *(int *)(0xa4 + a0))) {
                if (*puVar4 == *(u16 *)(0xe8 + a0)) {
                    uVar7 = (u32)(u16)a3;
                } else {
                    puVar8 = (u16 *)((u32)*puVar4 * a2 * 2 + iVar10 + iVar13 * -2);
                    uVar7 = (u32) * (u8 *)(*piVar11 + (u32)*puVar8);
                    for (piVar5 = (int *)(a0 + 0x38); piVar5 <= piVar12; piVar5 = piVar5 + 1) {
                        puVar8 = puVar8 + 1;
                        uVar7 = uVar7 + *(u8 *)(*piVar5 + (u32)*puVar8);
                    }
                }
                puVar4 = puVar4 + 1;
                if (uVar7 < uVar3) {
                    uVar3 = uVar7;
                }
            }
            *(short *)(iStack_3c * 2 + iVar9) = (short)uVar3;
            iStack_3c = iStack_3c + 1;
        } while (iStack_3c < (int)(u32) * (u16 *)(0x98 + a0));
    }
    puVar4 = *(u16 **)(0xa8 + a0);
    iVar1 = 0xa8 + -0xc;
    puVar4 = puVar4 + *puVar4;
    iVar10 = 0;
    if (*(short *)(iVar1 + a0) != 0) {
        do {
            iVar1 = (u32) * (u16 *)((u32)*puVar4 * 2 + iVar9) + (int)*psStack_30;
            while (true) {
                puVar4 = puVar4 + 1;
                psStack_30 = psStack_30 + 1;
                if ((u16 *)((u32) * (u16 *)(iVar10 * 2 + *(int *)(0xa8 + a0) + 2) * 2 + *(int *)(0xa8 + a0)) <= puVar4)
                    break;
                iVar13 = (u32) * (u16 *)((u32)*puVar4 * 2 + iVar9) + (int)*psStack_30;
                if (iVar13 < iVar1) {
                    iVar1 = iVar13;
                }
            }
            if (iVar1 < 1) {
                uVar2 = 0;
            } else {
                uVar2 = (u16)iVar1;
            }
            *(u16 *)(a1 + iVar10 * 2) = uVar2;
            iVar10 = iVar10 + 1;
            iVar1 = (int)0x9c;
        } while (iVar10 < (int)(u32) * (u16 *)(iVar1 + a0));
    }
    return iVar1;
}

/*
 * asr_fill_loop_10da96  0x8c10da96
 * area name: in the asr library code range; behaviour name: a loop that writes memory
 */
int asr_fill_loop_10da96(int a0, int a1, int a2, u32 a3) {
    int iVar1;
    u16 uVar2;
    int iVar3;
    u16 *puVar4;
    int *piVar5;
    u32 uVar6;
    u32 uVar7;
    u16 *puVar8;
    int iVar9;
    u32 uVar10;
    int *piVar11;
    int *piVar12;
    int iVar13;
    u32 uStack_44;
    u16 *puStack_40;
    short *psStack_2c;

    piVar11 = (int *)(a0 + 0x34);
    iVar3 = *(int *)(0xac + a0);
    iVar1 = (int)0x88;
    psStack_2c = *(short **)(iVar1 + 0x28 + a0);
    uStack_44 = (u32) * (u16 *)(iVar1 + 0x14 + a0);
    uVar10 = (u32) * *(u16 **)(a0 + 0x28);
    iVar13 = *(short *)(iVar1 + 0x18 + a0) * a2;
    piVar12 = piVar11 + a2 + -1;
    iVar1 = **(int **)(iVar1 + a0) + iVar13 * 2;
    if (uVar10 == *(u16 *)(0x9a + a0)) {
        puVar4 = (u16 *)(uVar10 * 2 + a1);
        puVar8 = (u16 *)(a2 * uVar10 * 2 + iVar1 + -2);
        while (puVar4 = puVar4 + -1, (u16 *)(uStack_44 * 2 + a1) <= puVar4) {
            *puVar4 = (u16) * (u8 *)(*piVar12 + (u32)(*puVar8 >> 1)) << ((*puVar8 & 1) << 2) & 0xf0;
            for (piVar5 = piVar11 + a2 + -2; puVar8 = puVar8 + -1, piVar11 <= piVar5; piVar5 = piVar5 + -1) {
                *puVar4 = ((u16) * (u8 *)(*piVar5 + (u32)(*puVar8 >> 1)) << ((*puVar8 & 1) << 2) & 0xf0) + *puVar4;
            }
        }
        (*(code *)(&memset))(*(int *)(a0 + 0x2c) + (u32) * (u16 *)(0x9c + a0), 0, uVar10 - *(u16 *)(0x9c + a0), puVar8);
    } else {
        uStack_44 = uStack_44 + 1;
        puStack_40 = (u16 *)(uStack_44 * 2 + *(int *)(a0 + 0x28));
        if (uStack_44 <= uVar10) {
            do {
                uVar6 = (u32)*puStack_40;
                puVar4 = (u16 *)(a2 * uVar6 * 2 + iVar1);
                puVar8 = (u16 *)(uVar6 * 2 + a1);
                *puVar8 = (u16) * (u8 *)((u32)(*puVar4 >> 1) + *piVar11) << ((*puVar4 & 1) << 2) & 0xf0;
                for (piVar5 = (int *)(a0 + 0x38); piVar5 <= piVar12; piVar5 = piVar5 + 1) {
                    puVar4 = puVar4 + 1;
                    *puVar8 = ((u16) * (u8 *)((u32)(*puVar4 >> 1) + *piVar5) << ((*puVar4 & 1) << 2) & 0xf0) + *puVar8;
                }
                *(u8 *)(*(int *)(a0 + 0x2c) + uVar6) = 0;
                uStack_44 = uStack_44 + 1;
                puStack_40 = puStack_40 + 1;
            } while ((int)uStack_44 <= (int)uVar10);
        }
    }
    uVar10 = (u32)0xf0;
    uStack_44 = 0;
    puVar4 = *(u16 **)(0xa4 + a0) + **(u16 **)(0xa4 + a0);
    if (*(short *)((uVar10 - 0x58) + a0) != 0) {
        do {
            uVar6 = a2 * 0xff;
            while (puVar4 <
                   (u16 *)((u32) * (u16 *)(uStack_44 * 2 + *(int *)(0xa4 + a0) + 2) * 2 + *(int *)(0xa4 + a0))) {
                if (*puVar4 == *(u16 *)(0xe8 + a0)) {
                    uVar7 = (u32)(u16)a3;
                } else {
                    puVar8 = (u16 *)((u32)*puVar4 * a2 * 2 + iVar1 + iVar13 * -2);
                    uVar7 = (u32) * (u8 *)(*piVar11 + (u32)(*puVar8 >> 1)) << ((*puVar8 & 1) << 2) & uVar10;
                    for (piVar5 = (int *)(a0 + 0x38); piVar5 <= piVar12; piVar5 = piVar5 + 1) {
                        puVar8 = puVar8 + 1;
                        uVar7 =
                            uVar7 + ((u32) * (u8 *)(*piVar5 + (u32)(*puVar8 >> 1)) << ((*puVar8 & 1) << 2) & uVar10);
                    }
                }
                puVar4 = puVar4 + 1;
                if (uVar7 < uVar6) {
                    uVar6 = uVar7;
                }
            }
            *(short *)(iVar3 + uStack_44 * 2) = (short)uVar6;
            uStack_44 = uStack_44 + 1;
        } while ((int)uStack_44 < (int)(u32) * (u16 *)(0x98 + a0));
    }
    puVar4 = *(u16 **)(0xa8 + a0);
    iVar1 = 0xa8 + -0xc;
    puVar4 = puVar4 + *puVar4;
    iVar13 = 0;
    if (*(short *)(iVar1 + a0) != 0) {
        do {
            iVar1 = (u32) * (u16 *)(iVar3 + (u32)*puVar4 * 2) + (int)*psStack_2c;
            while (true) {
                puVar4 = puVar4 + 1;
                psStack_2c = psStack_2c + 1;
                if ((u16 *)((u32) * (u16 *)(iVar13 * 2 + *(int *)(0xa8 + a0) + 2) * 2 + *(int *)(0xa8 + a0)) <= puVar4)
                    break;
                iVar9 = (u32) * (u16 *)(iVar3 + (u32)*puVar4 * 2) + (int)*psStack_2c;
                if (iVar9 < iVar1) {
                    iVar1 = iVar9;
                }
            }
            if (iVar1 < 1) {
                uVar2 = 0;
            } else {
                uVar2 = (u16)iVar1;
            }
            *(u16 *)(a1 + iVar13 * 2) = uVar2;
            iVar13 = iVar13 + 1;
            iVar1 = (int)0x9c;
        } while (iVar13 < (int)(u32) * (u16 *)(iVar1 + a0));
    }
    return iVar1;
}

/*
 * asr_calls_scan_loop_10ddaa  0x8c10ddaa
 * area name: in the asr library code range; behaviour name: its callees mostly do: scan_loop
 * called by: asr_calls_fill_loop_10ea62
 */
u32 asr_calls_scan_loop_10ddaa(int *a0) {
    int *piVar1;
    int iVar2;
    int *piVar3;
    int iVar4;

    iVar4 = *a0;
    (**(code **)(iVar4 + 0x18))(iVar4, **(u32 **)((int)0x134 + (int)a0), 1);
    (**(code **)(iVar4 + 0x18))(iVar4, *(u32 *)((int)0x134 + (int)a0));
    (**(code **)(iVar4 + 0x18))(iVar4, *(u32 *)((int)0x120 + (int)a0));
    asr_scan_loop_10cf6c(a0, a0 + 0x1b, (int)0x8c + (int)a0, 0);
    asr_scan_loop_10cf6c(a0, a0 + 0x1c, (int)0x8e + (int)a0, 0);
    iVar2 = 0;
    piVar1 = (int *)((int)0xc0 + (int)a0);
    piVar3 = piVar1;
    do {
        if (*piVar3 != 0) {
            (**(code **)(iVar4 + 0x18))(iVar4, *piVar1);
        }
        if (piVar3[1] != 0) {
            (**(code **)(iVar4 + 0x18))(iVar4, piVar1[1]);
        }
        if (piVar3[2] != 0) {
            (**(code **)(iVar4 + 0x18))(iVar4, piVar1[2]);
        }
        if (piVar3[3] != 0) {
            (**(code **)(iVar4 + 0x18))(iVar4, piVar1[3]);
        }
        iVar2 = iVar2 + 4;
        piVar1 = piVar1 + 4;
        piVar3 = piVar3 + 4;
    } while (iVar2 < 6);
    for (; iVar2 < 10; iVar2 = iVar2 + 1) {
        if (*piVar3 != 0) {
            (**(code **)(iVar4 + 0x18))(iVar4, *piVar1);
        }
        piVar1 = piVar1 + 1;
        piVar3 = piVar3 + 1;
    }
    if (*(int *)((int)0xac + (int)a0) != 0) {
        (**(code **)(iVar4 + 0x18))(iVar4, *(u32 *)((int)0xac + (int)a0));
        (**(code **)(iVar4 + 0x18))(iVar4, *(u32 *)((int)0xb0 + (int)a0));
    }
    (**(code **)(iVar4 + 0x18))(iVar4, a0[3]);
    (**(code **)(iVar4 + 0x18))(iVar4, a0[4]);
    (**(code **)(iVar4 + 0x18))(iVar4, a0);
    return 0;
}

/*
 * alt_entry_10ddb6  0x8c10ddb6
 * probably an entry 12 bytes into 8c10ddaa: it reads registers that code sets before it
 */
u32 alt_entry_10ddb6(u32 unused_a0, u32 unused_a1, u32 a2, u32 a3) {
    int in_r0;
    int *piVar1;
    int a6;
    u32 a7;
    int iVar2;
    int *unaff_r11;
    int *piVar3;
    int a4;

    a4 = *unaff_r11;
    (**(code **)(a4 + 0x18))(a4, **(u32 **)(in_r0 + (int)unaff_r11), a2, a3);
    (**(code **)(a4 + 0x18))(a4, *(u32 *)((int)0x134 + (int)unaff_r11), a2, a3);
    (**(code **)(a4 + 0x18))(a4, *(u32 *)((int)0x120 + (int)unaff_r11), a2, a3);
    asr_scan_loop_10cf6c(unaff_r11, unaff_r11 + 0x1b, (int)0x8c + (int)unaff_r11, 0);
    a7 = 0;
    a6 = (int)0x8e + (int)unaff_r11;
    asr_scan_loop_10cf6c(unaff_r11, unaff_r11 + 0x1c, a6, 0);
    iVar2 = 0;
    piVar1 = (int *)((int)0xc0 + (int)unaff_r11);
    piVar3 = piVar1;
    do {
        if (*piVar3 != 0) {
            (**(code **)(a4 + 0x18))(a4, *piVar1, a6, a7);
        }
        if (piVar3[1] != 0) {
            (**(code **)(a4 + 0x18))(a4, piVar1[1], a6, a7);
        }
        if (piVar3[2] != 0) {
            (**(code **)(a4 + 0x18))(a4, piVar1[2], a6, a7);
        }
        if (piVar3[3] != 0) {
            (**(code **)(a4 + 0x18))(a4, piVar1[3], a6, a7);
        }
        iVar2 = iVar2 + 4;
        piVar1 = piVar1 + 4;
        piVar3 = piVar3 + 4;
    } while (iVar2 < 6);
    for (; iVar2 < 10; iVar2 = iVar2 + 1) {
        if (*piVar3 != 0) {
            (**(code **)(a4 + 0x18))(a4, *piVar1, a6, a7);
        }
        piVar1 = piVar1 + 1;
        piVar3 = piVar3 + 1;
    }
    if (*(int *)((int)0xac + (int)unaff_r11) != 0) {
        (**(code **)(a4 + 0x18))(a4, *(u32 *)((int)0xac + (int)unaff_r11), a6, a7);
        (**(code **)(a4 + 0x18))(a4, *(u32 *)((int)0xb0 + (int)unaff_r11), a6, a7);
    }
    (**(code **)(a4 + 0x18))(a4, unaff_r11[3], a6, a7);
    (**(code **)(a4 + 0x18))(a4, unaff_r11[4], a6, a7);
    (**(code **)(a4 + 0x18))(a4, unaff_r11, a6, a7);
    return 0;
}

/*
 * asr_talk_10df48  0x8c10df48
 * area name: in the asr library code range; behaviour name: mostly calls talk functions
 */
u32 asr_talk_10df48(int *a0, u32 unused_a1, u32 a2, u32 a3) {
    int iVar1;
    int iVar2;
    u32 a5;
    int iVar3;
    u32 uVar4;
    u32 uVar5;
    u8 *puVar6;
    double *pdVar7;
    double *pdVar8;
    float fVar9;
    u64 in_dr0;
    u64 uVar10;
    double dVar11;
    double dVar12;
    float fVar13;
    float fVar14;
    u64 in_dr12;
    double dVar15;
    u64 in_dr14;
    u64 uVar16;
    u64 in_xd2;
    u8 bVar17;
    u8 bVar18;
    u8 bVar19;
    char cVar20;
    u8 auStack_3c[16];
    u32 uStack_2c;
    u32 uStack_28;
    u32 uStack_24;
    u32 uStack_20;

    fVar9 = (float)((u64)in_dr0 >> 0x20);
    uStack_20 = (u32)in_dr14;
    uStack_24 = (u32)(in_dr14 >> 0x20);
    uStack_28 = (u32)in_dr12;
    uStack_2c = (u32)((u64)in_dr12 >> 0x20);
    puVar6 = auStack_3c;
    iVar3 = *a0;
    *(u16 *)((int)a0 + 0x92) = 0xffff;
    uVar16 = in_dr14 & 0xffffffff;
    asr_state_has_event(a0, 0x1e, a2);
    *(short *)(a0 + 0x25) = (short)(int)fVar9;
    asr_state_has_event(a0, 0x1f, a2);
    *(short *)((int)a0 + 0x96) = (short)(int)fVar9;
    a0[0x17] = a0[3] + 8;
    a0[0x18] = a0[3] + 0x10;
    a0[0x19] = *(int *)a0[4];
    asr_state_has_event(a0, 0x13, a2);
    a5 = 0x400;
    bVar17 = 0;
    bVar18 = 0;
    bVar19 = 0;
    a0[0x4c] = (int)fVar9 & 0xffff;
    a0[0x49] = (int)(uVar16 >> 0x20);
    a0[0x4a] = -0x3eec6e59;
    iVar2 = iVar3;
    iVar1 = (**(code **)(iVar3 + 0x10))(iVar3, 0x400, a2, a3);
    uVar4 = 0;
    a0[0x48] = iVar1;
    if (bVar19 == 0) {
        dVar15 = 255.0;
        puVar6 = auStack_3c;
    } else {
        dVar15 = 1.1125374633749587e-308;
    }
    do {
        *(u32 *)(puVar6 + -4) = a0[0x48] + uVar4 * 4;
        if (bVar19 == 0) {
            uVar16 = CONCAT44((int)(uVar16 >> 0x20), a0[0x49]);
        }
        dVar12 = (double)(float)uVar16;
        if ((char)((((u32)bVar17 << 0x12 | (u32)bVar18 << 0x13 | (u32)bVar19 << 0x14) & 0x100000) >> 0x14) == '\0') {
            pdVar8 = (double *)(puVar6 + -0xc);
            *(double *)(puVar6 + -0xc) = dVar12;
        } else {
            *(double *)(puVar6 + -0xc) = dVar12;
            pdVar8 = (double *)(puVar6 + -0x14);
            *(u64 *)(puVar6 + -0x14) = in_xd2;
        }
        fVar9 = (float)(int)uVar4;
        if ((int)uVar4 < 0) {
            fVar9 = fVar9 + 4.2949673e+09;
        }
        dVar12 = (double)(fVar9 * ((float)uVar16 - (float)a0[0x4a])) / dVar15;
        bVar17 = 0;
        bVar18 = 0;
        bVar19 = 0;
        thunk_FUN_8c013cd8();
        iVar1 = uVar4 + 1;
        if (bVar19 == 0) {
            *(int *)*(double **)(pdVar8 + 1) = (int)((u64)dVar12 >> 0x20);
        } else {
            **(double **)(pdVar8 + 1) = dVar12;
        }
        *(int *)(pdVar8 + 1) = a0[0x48] + iVar1 * 4;
        if (bVar19 == 0) {
            uVar16 = CONCAT44((int)(uVar16 >> 0x20), a0[0x49]);
        }
        dVar12 = (double)(float)uVar16;
        if ((char)((((u32)bVar17 << 0x12 | (u32)bVar18 << 0x13 | (u32)bVar19 << 0x14) & 0x100000) >> 0x14) == '\0') {
            *pdVar8 = dVar12;
        } else {
            *pdVar8 = dVar12;
            pdVar7 = pdVar8 + -1;
            pdVar8 = pdVar8 + -1;
            *pdVar7 = (double)in_xd2;
        }
        fVar9 = (float)iVar1;
        if (iVar1 < 0) {
            fVar9 = fVar9 + 4.2949673e+09;
        }
        dVar12 = (double)(fVar9 * ((float)uVar16 - (float)a0[0x4a])) / dVar15;
        bVar17 = 0;
        bVar18 = 0;
        bVar19 = 0;
        thunk_FUN_8c013cd8();
        uVar4 = uVar4 + 2;
        puVar6 = (u8 *)((int)pdVar8 + 0xc);
        if (bVar19 == 0) {
            *(int *)*(double **)((int)pdVar8 + 8) = (int)((u64)dVar12 >> 0x20);
        } else {
            **(double **)((int)pdVar8 + 8) = dVar12;
        }
    } while (uVar4 < 0x100);
    cVar20 = '\0';
    asr_state_has_event(a0, 0x12, a2);
    if (cVar20 == '\0') {
        a0[0x4b] = (int)((u64)dVar12 >> 0x20);
    } else {
        *(double *)(a0 + 0x4b) = dVar12;
    }
    iVar2 = (**(code **)(iVar3 + 0x10))(iVar3, (a0[0x4c] + 1) * 4, a2, a3);
    a0[0x4d] = iVar2;
    iVar2 = (**(code **)(iVar3 + 0x10))(iVar3, (a0[0x4c] + 1) * 0x100, a2, a3);
    uVar4 = 0;
    do {
        iVar1 = uVar4 * 4;
        uVar4 = uVar4 + 1;
        *(int *)(a0[0x4d] + iVar1) = iVar2;
        iVar2 = iVar2 + 0x100;
    } while (uVar4 <= (u32)a0[0x4c]);
    uVar10 = 0x3ff0000000000000;
    cVar20 = '\0';
    thunk_FUN_8c013dfc();
    if (cVar20 == '\0') {
        *(int *)((int)pdVar8 + 0xc) = (int)((u64)uVar10 >> 0x20);
    } else {
        *(u64 *)((int)pdVar8 + 0xc) = uVar10;
    }
    *(u32 *)((int)pdVar8 + 0x14) = 0;
    if (cVar20 == '\0') {
        uVar16 = CONCAT44((int)(uVar16 >> 0x20), 0x437f0000);
    }
    do {
        fVar9 = (float)*(int *)((int)pdVar8 + 0x14);
        if (*(int *)((int)pdVar8 + 0x14) < 0) {
            fVar9 = fVar9 + 4.2949673e+09;
        }
        uVar5 = 0;
        *(float *)((int)pdVar8 + 0x10) = fVar9 * (float)a0[0x4b];
        iVar1 = *(int *)((int)pdVar8 + 0x14) * 4;
        do {
            fVar14 = (float)a0[0x49];
            *(double *)((int)pdVar8 + 4) = (double)fVar14;
            fVar9 = (float)(int)uVar5;
            if ((int)uVar5 < 0) {
                fVar9 = fVar9 + 4.2949673e+09;
            }
            dVar12 = (double)((fVar14 - (float)a0[0x4a]) * fVar9) / dVar15;
            fVar9 = (float)(*(double *)((int)pdVar8 + 4) - dVar12);
            cVar20 = '\0';
            thunk_FUN_8c013cd8();
            fVar14 = (float)((u64)dVar12 >> 0x20);
            if (cVar20 == '\0') {
                fVar9 = *(float *)((int)pdVar8 + 0x10);
            }
            cVar20 = '\0';
            thunk_FUN_8c013dfc();
            if (cVar20 == '\0') {
                fVar9 = *(float *)((int)pdVar8 + 0xc);
            }
            fVar13 = (float)a0[0x49];
            fVar9 = (float)(-((double)((fVar14 - fVar9) - fVar13) * dVar15) / (double)(fVar13 - (float)a0[0x4a]) + 0.5);
            if (0.0 <= fVar9) {
                if ((float)uVar16 < fVar9) {
                    fVar9 = (float)uVar16;
                }
            } else {
                fVar9 = (float)(uVar16 >> 0x20);
            }
            *(char *)(*(int *)(a0[0x4d] + iVar1) + uVar5) = (char)(int)fVar9;
            iVar3 = uVar5 + 1;
            fVar14 = (float)a0[0x49];
            *(double *)((int)pdVar8 + 4) = (double)fVar14;
            fVar9 = (float)iVar3;
            if (iVar3 < 0) {
                fVar9 = fVar9 + 4.2949673e+09;
            }
            dVar11 = (double)((fVar14 - (float)a0[0x4a]) * fVar9) / dVar15;
            fVar9 = (float)(*(double *)((int)pdVar8 + 4) - dVar11);
            cVar20 = '\0';
            thunk_FUN_8c013cd8();
            dVar12 = dVar11;
            if (cVar20 == '\0') {
                fVar9 = *(float *)((int)pdVar8 + 0x10);
                dVar12 = (double)(u64)(u32)fVar13;
            }
            cVar20 = '\0';
            fVar14 = SUB84(dVar12, 0);
            thunk_FUN_8c013dfc();
            if (cVar20 == '\0') {
                fVar9 = *(float *)((int)pdVar8 + 0xc);
                fVar14 = (float)((u64)dVar11 >> 0x20);
            }
            fVar9 = (float)(-((double)((fVar14 - fVar9) - (float)a0[0x49]) * dVar15) /
                                (double)((float)a0[0x49] - (float)a0[0x4a]) +
                            0.5);
            if (0.0 <= fVar9) {
                if ((float)uVar16 < fVar9) {
                    fVar9 = (float)uVar16;
                }
            } else {
                fVar9 = (float)(uVar16 >> 0x20);
            }
            *(char *)(*(int *)(a0[0x4d] + iVar1) + iVar3) = (char)(int)fVar9;
            iVar3 = uVar5 + 2;
            fVar14 = (float)a0[0x49];
            *(double *)((int)pdVar8 + 4) = (double)fVar14;
            fVar9 = (float)iVar3;
            if (iVar3 < 0) {
                fVar9 = fVar9 + 4.2949673e+09;
            }
            dVar12 = (double)((fVar14 - (float)a0[0x4a]) * fVar9) / dVar15;
            fVar9 = (float)(*(double *)((int)pdVar8 + 4) - dVar12);
            cVar20 = '\0';
            thunk_FUN_8c013cd8();
            fVar14 = (float)((u64)dVar12 >> 0x20);
            if (cVar20 == '\0') {
                fVar9 = *(float *)((int)pdVar8 + 0x10);
            }
            cVar20 = '\0';
            thunk_FUN_8c013dfc();
            if (cVar20 == '\0') {
                fVar9 = *(float *)((int)pdVar8 + 0xc);
            }
            fVar9 = (float)(-((double)((fVar14 - fVar9) - (float)a0[0x49]) * dVar15) /
                                (double)((float)a0[0x49] - (float)a0[0x4a]) +
                            0.5);
            if (0.0 <= fVar9) {
                if ((float)uVar16 < fVar9) {
                    fVar9 = (float)uVar16;
                }
            } else {
                fVar9 = (float)(uVar16 >> 0x20);
            }
            *(char *)(*(int *)(a0[0x4d] + iVar1) + iVar3) = (char)(int)fVar9;
            iVar3 = uVar5 + 3;
            fVar14 = (float)a0[0x49];
            *(double *)((int)pdVar8 + 4) = (double)fVar14;
            fVar9 = (float)iVar3;
            if (iVar3 < 0) {
                fVar9 = fVar9 + 4.2949673e+09;
            }
            dVar12 = (double)((fVar14 - (float)a0[0x4a]) * fVar9) / dVar15;
            fVar9 = (float)(*(double *)((int)pdVar8 + 4) - dVar12);
            cVar20 = '\0';
            thunk_FUN_8c013cd8();
            fVar14 = (float)((u64)dVar12 >> 0x20);
            if (cVar20 == '\0') {
                fVar9 = *(float *)((int)pdVar8 + 0x10);
            }
            cVar20 = '\0';
            thunk_FUN_8c013dfc();
            if (cVar20 == '\0') {
                fVar9 = *(float *)((int)pdVar8 + 0xc);
            }
            fVar13 = 1.75;
            fVar9 = (float)(-((double)((fVar14 - fVar9) - (float)a0[0x49]) * dVar15) /
                                (double)((float)a0[0x49] - (float)a0[0x4a]) +
                            0.5);
            if (0.0 <= fVar9) {
                if ((float)uVar16 < fVar9) {
                    fVar9 = (float)uVar16;
                }
            } else {
                fVar9 = (float)(uVar16 >> 0x20);
            }
            *(char *)(*(int *)(a0[0x4d] + iVar1) + iVar3) = (char)(int)fVar9;
            uVar5 = uVar5 + 4;
        } while (uVar5 < 0x100);
        iVar1 = *(int *)((int)pdVar8 + 0x14);
        *(u32 *)((int)pdVar8 + 0x14) = iVar1 + 1U;
    } while (iVar1 + 1U <= (u32)a0[0x4c]);
    a0[0x45] = 0;
    a0[0x46] = 0;
    asr_state_has_event(a0, 0x14, a2);
    *(char *)(a0 + 0x47) = (char)(int)fVar13;
    *(u8 *)((int)a0 + 0x11d) = 1;
    return 0;
}

/*
 * asr_calls_one_10e6c0  0x8c10e6c0
 * area name: in the asr library code range; behaviour name: calls 1 not yet named function
 * called by: asr_uses_mring_read_advance_10e818
 */
u32 asr_calls_one_10e6c0(int a0, int a1, int a2) {
    char cVar1;
    float fVar2;
    u32 uVar3;
    int iVar4;
    int iVar5;
    float extraout_fr0;
    u64 uVar6;
    u32 uVar7;
    u8 bVar8;
    u8 bVar9;
    u8 bVar10;

    iVar4 = 0;
    if (*(short *)(a1 + 4) != 0) {
        do {
            iVar4 = iVar4 + 1;
        } while (iVar4 < (int)(u32) * (u16 *)(a1 + 4));
    }
    bVar8 = 0;
    bVar9 = 0;
    bVar10 = 0;
    thunk_FUN_8c013dfc();
    cVar1 = (char)((((u32)bVar8 << 0x12 | (u32)bVar9 << 0x13 | (u32)bVar10 << 0x14) & 0x100000) >> 0x14);
    if (cVar1 == '\0') {
        fVar2 = 255.0;
    } else {
        fVar2 = -0.5000001;
    }
    if (cVar1 == '\0') {
        uVar6 = CONCAT44(*(u32 *)(a0 + 0x124), *(u32 *)(a0 + 0x128));
    } else {
        uVar6 = *(u64 *)(a0 + 0x124);
    }
    fVar2 = (extraout_fr0 * fVar2) / ((float)((u64)uVar6 >> 0x20) - (float)uVar6);
    if (0.0 <= fVar2) {
        uVar7 = 0x3fe00000;
    } else {
        uVar7 = 0xbfe00000;
    }
    iVar4 = 0;
    uVar3 = 0;
    if (*(short *)(a1 + 4) != 0) {
        do {
            iVar5 = (u32) * (u8 *)(iVar4 + a2) + (int)((double)fVar2 + (double)((u64)uVar7 << 0x20));
            if (iVar5 < 0x100) {
                if (iVar5 < 0) {
                    iVar5 = 0;
                }
            } else {
                iVar5 = 0xff;
            }
            *(char *)(iVar4 + a2) = (char)iVar5;
            iVar4 = iVar4 + 1;
            uVar3 = (u32) * (u16 *)(a1 + 4);
        } while (iVar4 < (int)uVar3);
    }
    return uVar3;
}

/*
 * alt_entry_10e6d0  0x8c10e6d0
 * probably an entry 16 bytes into 8c10e6c0: it reads registers that code sets before it
 */
u32 alt_entry_10e6d0(void) {
    char cVar1;
    char cVar2;
    u8 *puVar3;
    int iVar4;
    u32 uVar5;
    u32 uVar6;
    int iVar7;
    int iVar8;
    int iVar9;
    int iVar10;
    int unaff_r11;
    int unaff_r12;
    int unaff_r14;
    u64 in_dr0;
    double dVar11;
    float fVar12;
    double dVar13;
    float fVar14;
    u64 in_xd2;
    bool bVar15;
    u8 in_FPSCR_CAUSE;
    u8 bVar16;
    u8 in_FPSCR_DN;
    u8 bVar17;
    u8 in_FPSCR_PR;
    u8 bVar18;
    u8 in_FPSCR_SZ;
    u8 bVar19;

    fVar12 = (float)((u64)in_dr0 >> 0x20);
    fVar14 = (float)((u64)in_xd2 >> 0x20);
    iVar7 = 0;
    iVar4 = iVar7;
    if (*(short *)(unaff_r14 + 4) != 0) {
        do {
            iVar7 = iVar4 + 1;
            if (in_FPSCR_SZ != 0) {
                in_xd2 = *(u64 *)(*(int *)(0x120 + unaff_r11) + (u32) * (u8 *)(iVar4 + unaff_r12) * 4);
            }
            fVar14 = (float)((u64)in_xd2 >> 0x20);
            uVar5 = ((u32)in_FPSCR_CAUSE << 0xc | (u32)in_FPSCR_DN << 0x12 | (u32)in_FPSCR_PR << 0x13 |
                     (u32)in_FPSCR_SZ << 0x14) &
                    0xffe7ffff;
            in_FPSCR_CAUSE = 0;
            in_FPSCR_DN = 0;
            in_FPSCR_PR = (u8)((uVar5 & 0x80000) >> 0x13);
            in_FPSCR_SZ = (u8)((uVar5 & 0x100000) >> 0x14);
            iVar4 = iVar7;
        } while (iVar7 < (int)(u32) * (u16 *)(unaff_r14 + 4));
    }
    uVar5 =
        ((u32)in_FPSCR_CAUSE << 0xc | (u32)in_FPSCR_DN << 0x12 | (u32)in_FPSCR_PR << 0x13 | (u32)in_FPSCR_SZ << 0x14) &
        0xffe7ffff;
    bVar16 = 0;
    bVar17 = 0;
    bVar18 = (u8)((uVar5 & 0x80000) >> 0x13);
    bVar19 = (u8)((uVar5 & 0x100000) >> 0x14);
    thunk_FUN_8c013dfc();
    uVar6 = (u32)bVar16 << 0xc | (u32)bVar17 << 0x12 | (u32)bVar18 << 0x13 | (u32)bVar19 << 0x14 | 0x80000;
    uVar5 = (uVar6 & 0x80000) >> 0x13;
    uVar6 = (uVar6 & 0x100000) >> 0x14;
    cVar1 = (char)uVar6;
    dVar13 = (double)fVar12;
    if (cVar1 == '\0') {
        dVar11 = (double)CONCAT44((u32)g_8c10e788, g_8c10e77c);
    } else {
        dVar11 = (double)CONCAT44(g_8c10e788._4_4_, (u32)g_8c10e788);
    }
    if ((char)uVar5 == '\0') {
        dVar13 = (double)CONCAT44((float)((u64)dVar13 >> 0x20) * (float)((u64)dVar11 >> 0x20), SUB84(dVar13, 0));
    } else {
        dVar13 = dVar13 * dVar11;
    }
    if (cVar1 == '\0') {
        dVar11 = (double)(u64) * (u32 *)(0x128 + unaff_r11);
    }
    iVar4 = 0x128 + -4;
    uVar5 = (uVar5 << 0x13 | uVar6 << 0x14) & 0xffe7ffff;
    if (cVar1 == '\0') {
        dVar11 = (double)CONCAT44(*(u32 *)(iVar4 + unaff_r11), SUB84(dVar11, 0));
    } else {
        dVar11 = *(double *)(iVar4 + unaff_r11);
    }
    uVar6 = (uVar5 & 0x80000) >> 0x13;
    if ((char)uVar6 == '\0') {
        fVar12 = (float)((u64)dVar11 >> 0x20) - SUB84(dVar11, 0);
    } else {
        fVar12 = (float)((u64)(dVar11 - dVar11) >> 0x20);
    }
    uVar5 = uVar6 << 0x13 | uVar5 & 0xfff00000 | 0x80000 & 0x3fffff;
    cVar1 = (char)((uVar5 & 0x80000) >> 0x13);
    cVar2 = (char)((uVar5 & 0x100000) >> 0x14);
    if (cVar1 == '\0') {
        dVar13 =
            (double)CONCAT44((float)((u64)dVar13 >> 0x20) / (float)((u64)(double)fVar12 >> 0x20), SUB84(dVar13, 0));
    } else {
        dVar13 = dVar13 / (double)fVar12;
    }
    if (cVar2 == '\0') {
        fVar14 = (float)dVar13;
    }
    puVar3 = (&thunk_FUN_8c013dfc);
    if (cVar2 == '\0') {
        puVar3 = g_8c10e77c;
    }
    if (cVar1 == '\0') {
        bVar15 = (float)((u64)(double)fVar14 >> 0x20) < (float)puVar3;
    } else {
        bVar15 = (double)fVar14 < (double)CONCAT44(puVar3, g_8c10e77c);
    }
    if (bVar15) {
        if (cVar2 == '\0') {
            dVar13 = (double)CONCAT44(g_8c10e788._4_4_, g_8c10e77c);
        } else {
            dVar13 = (double)CONCAT44(uRam8c10e790, g_8c10e788._4_4_);
        }
    } else if (cVar2 == '\0') {
        dVar13 = (double)CONCAT44((u32)g_8c10e850, g_8c10e77c);
    } else {
        dVar13 = (double)CONCAT44(g_8c10e850._4_4_, (u32)g_8c10e850);
    }
    dVar11 = (double)fVar14;
    iVar4 = (int)0xff;
    if (cVar2 == '\0') {
        dVar13 = (double)CONCAT44((int)((u64)dVar13 >> 0x20), g_8c10e850._4_4_);
    }
    if (cVar1 == '\0') {
        dVar11 = (double)CONCAT44((float)((u64)dVar11 >> 0x20) + (float)((u64)dVar13 >> 0x20), SUB84(dVar11, 0));
    } else {
        dVar11 = dVar11 + dVar13;
    }
    if (cVar1 == '\0') {
        iVar7 = (int)(float)((u64)dVar11 >> 0x20);
    } else {
        iVar7 = (int)dVar11;
    }
    iVar10 = 0;
    uVar5 = 0;
    if (*(short *)(unaff_r14 + 4) != 0) {
        do {
            iVar8 = (u32) * (u8 *)(iVar10 + unaff_r12) + iVar7;
            iVar9 = iVar4;
            if ((iVar8 <= iVar4) && (iVar9 = iVar8, iVar8 < 0)) {
                iVar9 = 0;
            }
            *(char *)(iVar10 + unaff_r12) = (char)iVar9;
            iVar10 = iVar10 + 1;
            uVar5 = (u32) * (u16 *)(unaff_r14 + 4);
        } while (iVar10 < (int)uVar5);
    }
    return uVar5;
}

/*
 * asr_fill_loop_10e7de  0x8c10e7de
 * area name: in the asr library code range; behaviour name: a loop that writes memory
 * called by: asr_uses_mring_read_advance_10e818
 */
u32 asr_fill_loop_10e7de(int a0, int a1, int a2) {
    u32 uVar1;
    int iVar2;

    iVar2 = 0;
    uVar1 = 0;
    if (*(short *)(a0 + 4) != 0) {
        do {
            *(u8 *)(iVar2 + a1) =
                *(u8 *)(*(int *)((u32) * (u8 *)(*(int *)(a0 + 8) + iVar2) * 4 + a2) + (u32) * (u8 *)(iVar2 + a1));
            *(u8 *)(*(int *)(a0 + 8) + iVar2) = 0;
            iVar2 = iVar2 + 1;
            uVar1 = (u32) * (u16 *)(a0 + 4);
        } while (iVar2 < (int)uVar1);
    }
    return uVar1;
}

/*
 * asr_uses_mring_read_advance_10e818  0x8c10e818
 * area name: in the asr library code range; behaviour name: its main named callee is mring_read_advance
 */
u32 asr_uses_mring_read_advance_10e818(int a0, u32 unused_a1, int *a2, u32 a3) {
    u8 bVar1;
    bool bVar2;
    u32 uVar3;
    u8 *pbVar4;
    u32 uVar5;
    char *pcVar6;
    int iVar7;
    int *a5;
    int *a5_00;
    int *a4;
    char cVar8;
    int iStack_28;

    if (*(char *)(*(int *)(a0 + 100) + 0x30) == '\0') {
        uVar3 = asr_talk_112170(*(u32 *)(a0 + 0xc), 2);
        if ((uVar3 & 0xff) == 0) {
            return 0;
        }
        pbVar4 = (u8 *)mring_read_advance(**(u32 **)(a0 + 0x5c), (*(u32 **)(a0 + 0x5c))[1], a2, a3);
        if (pbVar4 != NULL) {
            cVar8 = '\0';
            a5 = (int *)(*(u32 **)(a0 + 0x60))[1];
            uVar5 = mring_read_advance(**(u32 **)(a0 + 0x60), a5, a2, a3);
            *(u32 *)(a0 + 0x28) = uVar5;
            *(u32 *)(a0 + 0x2c) = (u32) * (u16 *)(a0 + 0x9a) * 2 + *(int *)(a0 + 0x28);
            if (*(char *)(a0 + 0x11d) != '\0') {
                a5 = (int *)(*(u32 **)(a0 + 0xc))[1];
                pcVar6 = (char *)mring_read_advance(**(u32 **)(a0 + 0xc), a5, a2, a3);
                cVar8 = '\x01' - *pcVar6;
            }
            if (*(char *)(a0 + 0x11c) != '\0') {
                cVar8 = '\0';
            }
            bVar2 = false;
            if (cVar8 != '\0') {
                iVar7 = *(int *)(a0 + 0x114) + 1;
                *(int *)(a0 + 0x114) = iVar7;
                iVar7 = libgcc_divide_helper_0106dc(iVar7, *(u32 *)(a0 + 0x130));
                if (iVar7 == 0) {
                    *(u32 *)(a0 + 0x114) = 0;
                    *(int *)(a0 + 0x118) = *(int *)(a0 + 0x118) + 1;
                    bVar2 = true;
                }
            }
            iVar7 = 0;
            iStack_28 = 0;
            a4 = *(int **)(a0 + 0x84);
            if (*(short *)(a0 + 0x90) != 0) {
                do {
                    a5_00 = *(int **)(iVar7 * 4 + a0 + 0xc0);
                    if (cVar8 != '\0') {
                        *(char *)(a4[2] + (u32)*pbVar4) = *(char *)(a4[2] + (u32)*pbVar4) + '\x01';
                    }
                    *(u32 *)(iVar7 * 4 + a0 + 0x34) = *(u32 *)(*a4 + (u32)*pbVar4 * 4);
                    if (bVar2) {
                        a2 = *(int **)(a0 + 0x134);
                        a5 = a5_00;
                        asr_fill_loop_10e7de(a4, a5_00, a2);
                        if (0x13 < *(u32 *)(a0 + 0x118)) {
                            a5 = a4;
                            a2 = a5_00;
                            asr_calls_one_10e6c0(a0, a4, a5_00);
                        }
                    }
                    bVar1 = *pbVar4;
                    pbVar4 = pbVar4 + 1;
                    iVar7 = iVar7 + 1;
                    iStack_28 = iStack_28 + (u32) * (u8 *)((u32)bVar1 + (int)a5_00);
                    a4 = a4 + 3;
                } while (iVar7 < (int)(u32) * (u16 *)(a0 + 0x90));
            }
            if (*(int *)(a0 + 0x28) != 0) {
                uVar5 = mring_write_advance(*(u32 *)(a0 + 100));
                (**(code **)(a0 + 0x68))(a0, uVar5, iVar7, iStack_28);
            }
            if (0x13 < *(u32 *)(a0 + 0x118)) {
                *(u32 *)(a0 + 0x118) = 0;
            }
        }
    }
    iVar7 = **(int **)(a0 + 0x5c);
    return *(int *)((*(int **)(a0 + 0x5c))[1] * 4 + *(int *)(iVar7 + 0x40)) == *(int *)(iVar7 + 0x3c) ^ 1;
}

/*
 * asr_calls_fill_loop_10ea24  0x8c10ea24
 * area name: in the asr library code range; behaviour name: its callees mostly do: calls_fill_loop
 * called by: asr_calls_fill_loop_10ea62
 */
u32 asr_calls_fill_loop_10ea24(int a0, u32 a1) {
    u32 uVar1;
    u32 ar5_00;
    u32 ar6_00;
    u32 *puStack_c;

    *(char *)(0x11d + a0) = (char)a1;
    if ((char)a1 == '\0') {
        puStack_c = *(u32 **)(a0 + 0xc);
        ar5_00 = 6;
        ar6_00 = puStack_c[1];
    } else {
        puStack_c = *(u32 **)(a0 + 0xc);
        ar6_00 = puStack_c[1];
        ar5_00 = 5;
    }
    uVar1 = asr_calls_fill_loop_1113d0(*puStack_c, ar5_00, ar6_00, 0);
    return (u32)((uVar1 & 0xff) == 0);
}

/*
 * asr_calls_fill_loop_10ea62  0x8c10ea62
 * area name: in the asr library code range; behaviour name: its callees mostly do: fill_loop
 */
u32 asr_calls_fill_loop_10ea62(int a0, u32 a1, u16 *a2, int *a3) {
    u32 uVar1;
    int iVar2;
    u8 *puVar3;
    int iVar4;
    u32 uVar5;
    u32 ar6_00;
    u16 *ar6_01;
    u32 *puStack_1c;

    uVar1 = a1 & 0xff;
    if (uVar1 == 2) {
        uVar5 = 1;
    } else {
        if (uVar1 != 3) {
            if (uVar1 == 10) {
                if (a2 == NULL) {
                    asr_fill_loop_10d29c(a0, a1, 0);
                    asr_scan_loop_10d1bc(a0);
                    return 1;
                }
                asr_fill_loop_10d2f0(a0, *a3 + (int)a2);
                iVar2 = (int)0x90;
                *a3 = *a3 + 8;
                iVar4 = 0;
                if (*(short *)(iVar2 + a0) == 0) {
                    return 1;
                }
                do {
                    iVar2 = iVar4 * 0xc;
                    iVar4 = iVar4 + 1;
                    *a3 = (u32) * (u16 *)(iVar2 + *(int *)(0x84 + a0) + 4) * 2 + *a3;
                } while (iVar4 < (int)(u32) * (u16 *)(0x90 + a0));
                return 1;
            }
            if (uVar1 == 0xb) {
                if (a2 != NULL) {
                    asr_fill_loop_10d366(a0, *a3 + (int)a2);
                }
                iVar2 = (int)0x90;
                *a3 = *a3 + 8;
                iVar4 = 0;
                if (*(short *)(iVar2 + a0) == 0) {
                    return 1;
                }
                do {
                    iVar2 = iVar4 * 0xc;
                    iVar4 = iVar4 + 1;
                    *a3 = (u32) * (u16 *)(iVar2 + *(int *)(0x84 + a0) + 4) * 2 + *a3;
                } while (iVar4 < (int)(u32) * (u16 *)(0x90 + a0));
                return 1;
            }
            if (uVar1 == 0xd) {
                a2[1] = *(u16 *)(0x96 + a0);
                *a2 = *(u16 *)(0x94 + a0);
                return 1;
            }
            if (uVar1 == 0xf) {
                *(u16 *)(0x96 + a0) = a2[1];
                iVar2 = (int)0x94;
                *(u16 *)(iVar2 + a0) = *a2;
                if (*(int *)(iVar2 + 0x20 + a0) == 0) {
                    return 1;
                }
                asr_scan_loop_10d3ec(a0);
                return 1;
            }
            if (uVar1 == 0x10) {
                ar6_01 = a2;
                uVar1 = asr_calls_scan_loop_10d458(a0, a2, a2, a3);
                puVar3 = (&DATA_8c10dda0);
                if ((uVar1 & 0xff) == 0) {
                    asr_fill_loop_10d29c(a0, a2, ar6_01);
                    puVar3 = (&asr_uses_mring_read_advance_10e818);
                }
                *(u8 **)(a0 + 0x18) = puVar3;
                return 1;
            }
            if (uVar1 == 0x16) {
                asr_fill_loop_10d29c(a0, a1, a2);
                return 1;
            }
            if (uVar1 == 0x17) {
                puStack_1c = *(u32 **)(a0 + 0xc);
                ar6_00 = puStack_1c[1];
                uVar5 = 7;
            LAB_8c10eaee:
                uVar5 = asr_calls_fill_loop_1113d0(*puStack_1c, uVar5, ar6_00, a2);
                return uVar5;
            }
            if (uVar1 == 0x18) {
                puStack_1c = *(u32 **)(a0 + 0xc);
                uVar5 = 6;
                a2 = NULL;
                ar6_00 = puStack_1c[1];
                goto LAB_8c10eaee;
            }
            if (uVar1 != (int)0xff) {
                return 0;
            }
            uVar1 = asr_calls_scan_loop_10ddaa(a0);
            goto LAB_8c10ec56;
        }
        uVar5 = 0;
    }
    uVar1 = asr_calls_fill_loop_10ea24(a0, uVar5);
LAB_8c10ec56:
    return (u32)((uVar1 & 0xff) == 0);
}

/*
 * asr_update_fields_10ec78  0x8c10ec78
 * area name: in the asr library code range; behaviour name: conditionally writes members
 */
int asr_update_fields_10ec78(u32 a0, u32 a1, u32 unused_a2, u32 a3) {
    int iVar1;

    iVar1 = (*(code *)(&asr_talk_120580))(a0, a1, 3, a3, (&DATA_8c10dda0), (&asr_talk_10df48),
                                          (&asr_calls_fill_loop_10ea62), (int)0x138);
    if (iVar1 != 0) {
        *(u32 *)(iVar1 + 0x70) = 0;
        *(u32 *)(iVar1 + 0x6c) = 0;
        *(u32 *)(iVar1 + 0x84) = 0;
        *(u32 *)(iVar1 + 0x88) = 0;
    }
    return iVar1;
}

/*
 * asr_fill_loop_10ecd8  0x8c10ecd8
 * area name: in the asr library code range; behaviour name: a loop that writes memory
 * called by: alt_entry_10f110, asr_calls_fill_loop_10f108
 */
u32 *asr_fill_loop_10ecd8(float *a0, u32 a1) {
    u32 *puVar1;
    float *pfVar2;
    float *pfVar3;
    u32 uVar4;
    float *pfVar5;
    u32 uVar6;
    float *pfVar7;
    int iVar8;
    u32 uVar9;
    float *pfVar10;
    float fVar11;
    float fVar12;
    float fVar13;
    float fVar14;
    float fVar15;
    float fVar16;
    float fVar17;
    float fVar18;
    float fVar19;
    float fVar20;
    float fVar21;
    float fVar22;
    float fVar23;
    float fVar24;
    float fVar25;
    float fVar26;
    u32 uStack_5c;

    uVar4 = 1;
    uVar9 = 0;
    uVar6 = a1;
    if (1 < a1) {
        do {
            do {
                uVar6 = uVar6 >> 1;
                uVar9 = uVar9 ^ uVar6;
            } while ((uVar9 & uVar6) == 0);
            if (uVar9 < uVar4) {
                fVar11 = a0[uVar4];
                a0[uVar4] = a0[uVar9];
                a0[uVar9] = fVar11;
            }
            uVar4 = uVar4 + 1;
            uVar6 = a1;
        } while (uVar4 < a1);
    }
    uVar6 = 0;
    if (1 < a1) {
        do {
            uVar6 = uVar6 + 1;
            if ((int)uVar6 < 0) {
                uVar4 = 1 >> (~uVar6 & 0x1f) + 1;
            } else {
                uVar4 = 1 << (uVar6 & 0x1f);
            }
        } while (uVar4 < a1);
    }
    puVar1 = &g_8c10eda0;
    uVar6 = uVar6 & 1;
    pfVar10 = a0 + a1;
    pfVar5 = a0;
    if (uVar6 == 0) {
        for (; pfVar5 < pfVar10; pfVar5 = pfVar5 + 4) {
            fVar12 = pfVar5[1];
            fVar14 = pfVar5[2];
            fVar11 = *pfVar5 - fVar12;
            fVar16 = pfVar5[3];
            fVar12 = fVar12 + *pfVar5;
            fVar13 = fVar14 - fVar16;
            fVar16 = fVar16 + fVar14;
            pfVar5[2] = fVar12 - fVar16;
            *pfVar5 = fVar12 + fVar16;
            pfVar5[3] = fVar11 - fVar13;
            pfVar5[1] = fVar11 + fVar13;
        }
    } else {
        pfVar5 = a0 + 1;
        for (pfVar7 = a0; pfVar7 < pfVar10; pfVar7 = pfVar7 + 8) {
            fVar16 = *pfVar7 - *pfVar5;
            fVar13 = *pfVar5 + *pfVar7;
            fVar11 = pfVar7[2];
            fVar12 = pfVar5[2];
            fVar14 = fVar11 - fVar12;
            fVar12 = fVar12 + fVar11;
            fVar11 = pfVar7[4];
            fVar22 = pfVar5[4];
            fVar20 = pfVar5[6];
            fVar15 = fVar22 + fVar11;
            fVar19 = pfVar7[6];
            fVar24 = fVar20 + fVar19;
            fVar18 = fVar16 - fVar14;
            fVar16 = fVar16 + fVar14;
            fVar17 = fVar15 - fVar24;
            fVar14 = fVar13 + fVar12;
            fVar13 = fVar13 - fVar12;
            fVar15 = fVar15 + fVar24;
            fVar12 = (fVar11 - fVar22) * 1.4142135;
            fVar11 = (fVar19 - fVar20) * 1.4142135;
            pfVar7[4] = fVar14 - fVar15;
            *pfVar7 = fVar14 + fVar15;
            pfVar7[6] = fVar13 - fVar17;
            pfVar7[2] = fVar13 + fVar17;
            pfVar5[4] = fVar16 - fVar12;
            *pfVar5 = fVar16 + fVar12;
            pfVar5[6] = fVar18 - fVar11;
            pfVar5[2] = fVar18 + fVar11;
            pfVar5 = pfVar5 + 8;
        }
    }
    if (0xf < a1) {
        do {
            uVar6 = uVar6 + 2;
            if ((int)uVar6 < 0) {
                uVar4 = 1 >> (~uVar6 & 0x1f) + 1;
            } else {
                uVar4 = 1 << (uVar6 & 0x1f);
            }
            uVar9 = uVar4 >> 1;
            pfVar7 = a0 + uVar9;
            pfVar5 = a0;
            do {
                fVar12 = pfVar5[uVar4];
                fVar11 = *pfVar5 - fVar12;
                fVar12 = fVar12 + *pfVar5;
                fVar16 = pfVar5[uVar4 * 2];
                fVar14 = pfVar5[uVar4 * 3];
                fVar13 = fVar16 - fVar14;
                fVar14 = fVar14 + fVar16;
                pfVar5[uVar4 * 2] = fVar12 - fVar14;
                *pfVar5 = fVar12 + fVar14;
                pfVar5[uVar4 * 3] = fVar11 - fVar13;
                pfVar5[uVar4] = fVar11 + fVar13;
                fVar11 = pfVar7[uVar4];
                fVar14 = fVar11 + *pfVar7;
                fVar11 = *pfVar7 - fVar11;
                fVar12 = pfVar7[uVar4 * 3] * 1.4142135;
                fVar13 = pfVar7[uVar4 * 2] * 1.4142135;
                pfVar7[uVar4 * 2] = fVar14 - fVar13;
                *pfVar7 = fVar14 + fVar13;
                pfVar5 = pfVar5 + uVar4 * 4;
                pfVar7[uVar4 * 3] = fVar11 - fVar12;
                pfVar7[uVar4] = fVar11 + fVar12;
                pfVar7 = pfVar7 + uVar4 * 4;
            } while (pfVar5 < pfVar10);
            fVar12 = *(float *)(&g_8c1274f8 + uVar6 * 4);
            fVar14 = *(float *)(&g_8c127538 + uVar6 * 4);
            iVar8 = 4;
            puVar1 = &g_8c10f100;
            fVar13 = 0.0;
            uStack_5c = 1;
            fVar11 = 1.0;
            if (1 < uVar9) {
                do {
                    fVar16 = fVar12 * fVar11 - fVar14 * fVar13;
                    fVar13 = fVar11 * fVar14 + fVar12 * fVar13;
                    fVar11 = fVar16 * fVar16 - fVar13 * fVar13;
                    fVar17 = fVar13 * fVar16 * 2.0;
                    pfVar7 = (float *)((uVar4 * 4 - iVar8) + (int)a0);
                    pfVar5 = (float *)(iVar8 + (int)a0);
                    do {
                        pfVar3 = pfVar5 + uVar4;
                        fVar15 = *pfVar3;
                        fVar18 = pfVar7[uVar4];
                        fVar19 = fVar11 * fVar15 + fVar18 * fVar17;
                        fVar22 = fVar15 * fVar17 - fVar18 * fVar11;
                        fVar20 = *pfVar5 + fVar19;
                        fVar19 = *pfVar5 - fVar19;
                        pfVar2 = pfVar5 + uVar4 * 3;
                        fVar21 = *pfVar7 + fVar22;
                        fVar22 = *pfVar7 - fVar22;
                        fVar24 = *pfVar2;
                        fVar15 = pfVar7[uVar4 * 3];
                        fVar18 = fVar11 * fVar24 + fVar15 * fVar17;
                        fVar23 = fVar24 * fVar17 - fVar15 * fVar11;
                        fVar24 = pfVar5[uVar4 * 2];
                        fVar25 = fVar24 + fVar18;
                        fVar24 = fVar24 - fVar18;
                        fVar26 = pfVar7[uVar4 * 2];
                        fVar15 = fVar26 - fVar23;
                        fVar26 = fVar26 + fVar23;
                        fVar18 = fVar13 * fVar25 - fVar16 * fVar15;
                        fVar15 = fVar25 * fVar16 + fVar13 * fVar15;
                        pfVar5[uVar4 * 2] = fVar20 - fVar15;
                        *pfVar5 = fVar15 + fVar20;
                        pfVar7[uVar4 * 3] = fVar22 - fVar18;
                        pfVar7[uVar4] = fVar18 + fVar22;
                        fVar18 = fVar16 * fVar26 - fVar13 * fVar24;
                        fVar15 = fVar13 * fVar26 + fVar16 * fVar24;
                        pfVar7[uVar4 * 2] = fVar21 - fVar15;
                        *pfVar7 = fVar15 + fVar21;
                        puVar1 = (u32 *)0x1c;
                        pfVar5 = pfVar5 + uVar4 * 4;
                        *pfVar2 = fVar19 - fVar18;
                        *pfVar3 = fVar18 + fVar19;
                        pfVar7 = pfVar7 + uVar4 * 4;
                    } while (pfVar5 < pfVar10);
                    uStack_5c = uStack_5c + 1;
                    iVar8 = iVar8 + 4;
                    fVar11 = fVar16;
                } while (uStack_5c < uVar9);
            }
        } while (uVar4 * 4 < a1);
    }
    return puVar1;
}

/*
 * asr_calls_fill_loop_10f108  0x8c10f108
 * area name: in the asr library code range; behaviour name: its callees mostly do: fill_loop
 * called by: asr_uses_mring_read_advance_10f22a
 */
u64 *asr_calls_fill_loop_10f108(u32 a0, int a1) {
    u32 uVar1;
    float *pfVar2;
    u32 uVar3;
    float *pfVar4;
    float fVar5;
    u64 in_dr2;
    float in_fr5;
    float fVar6;
    float fVar7;
    char cVar8;

    cVar8 = '\0';
    asr_fill_loop_10ecd8(a1, a0);
    uVar1 = 1;
    uVar3 = a0 >> 1;
    if (cVar8 == '\0') {
        fVar6 = 0.5;
    } else {
        in_fr5 = 0.5;
        fVar6 = -NAN;
    }
    if (1 < uVar3) {
        do {
            fVar5 = (float)in_dr2;
            a0 = a0 - 1;
            pfVar4 = (float *)(uVar1 * 4 + a1);
            if (cVar8 == '\0') {
                in_fr5 = *pfVar4;
            }
            pfVar2 = (float *)(a0 * 4 + a1);
            if (cVar8 == '\0') {
                fVar7 = *pfVar2;
                fVar5 = in_fr5;
            } else {
                fVar7 = (float)((u64) * (u64 *)pfVar2 >> 0x20);
            }
            uVar1 = uVar1 + 1;
            cVar8 = '\0';
            in_fr5 = (in_fr5 + fVar7) * fVar6;
            fVar5 = (fVar5 - fVar7) * fVar6;
            in_dr2 = (u64)(u32)fVar5;
            *pfVar2 = fVar5;
            *pfVar4 = in_fr5;
        } while (uVar1 < uVar3);
    }
    return &g_8c10f160;
}

/*
 * alt_entry_10f110  0x8c10f110
 * probably an entry 8 bytes into 8c10f108: it reads registers that code sets before it
 */
u64 *alt_entry_10f110(u32 a0, u32 a1) {
    u32 uVar1;
    u32 uVar2;
    double *pdVar3;
    u32 uVar4;
    double *pdVar5;
    int unaff_r14;
    double in_dr2;
    u32 in_fr5;
    float fVar7;
    double dVar6;
    double in_dr6;
    float fVar8;
    double in_xd2;
    double in_xd4;
    u8 in_FPSCR_CAUSE;
    u8 in_FPSCR_DN;
    u8 in_FPSCR_PR;
    u8 in_FPSCR_SZ;

    asr_fill_loop_10ecd8(unaff_r14, a1);
    uVar2 = 1;
    uVar4 = a0 >> 1;
    if (in_FPSCR_SZ == 0) {
        dVar6 = (double)CONCAT44((u32)g_8c10f160, in_fr5);
    } else {
        dVar6 = (double)CONCAT44(0xffe7ffff, (u32)g_8c10f160);
    }
    if (1 < uVar4) {
        do {
            a0 = a0 - 1;
            pdVar5 = (double *)(uVar2 * 4 + unaff_r14);
            if (in_FPSCR_SZ == 0) {
                dVar6 = (double)CONCAT44((int)((u64)dVar6 >> 0x20), *(u32 *)pdVar5);
            } else {
                in_xd4 = *pdVar5;
            }
            pdVar3 = (double *)(a0 * 4 + unaff_r14);
            uVar1 = ((u32)in_FPSCR_CAUSE << 0xc | (u32)in_FPSCR_DN << 0x12 | (u32)in_FPSCR_PR << 0x13 |
                     (u32)in_FPSCR_SZ << 0x14) &
                    0xffe7ffff;
            if (in_FPSCR_SZ == 0) {
                in_dr6 = (double)CONCAT44(*(u32 *)pdVar3, SUB84(in_dr6, 0));
                in_dr2 = (double)CONCAT44((int)((u64)in_dr2 >> 0x20), SUB84(dVar6, 0));
            } else {
                in_dr6 = *pdVar3;
                in_xd2 = in_xd4;
            }
            uVar2 = uVar2 + 1;
            in_FPSCR_CAUSE = 0;
            in_FPSCR_DN = 0;
            in_FPSCR_PR = (u8)((uVar1 & 0x80000) >> 0x13);
            in_FPSCR_SZ = (u8)((uVar1 & 0x100000) >> 0x14);
            fVar8 = (float)((u64)in_dr6 >> 0x20);
            if (in_FPSCR_PR == 0) {
                fVar7 = (float)((u64)dVar6 >> 0x20);
                dVar6 = (double)CONCAT44(fVar7, (SUB84(dVar6, 0) + fVar8) * fVar7);
                in_dr2 = (double)CONCAT44((int)((u64)in_dr2 >> 0x20), (SUB84(in_dr2, 0) - fVar8) * fVar7);
            } else {
                dVar6 = (dVar6 + in_dr6) * (dVar6 + in_dr6);
                in_dr2 = (in_dr2 - in_dr6) * dVar6;
            }
            if (in_FPSCR_SZ == 0) {
                *(int *)pdVar3 = SUB84(in_dr2, 0);
                *(int *)pdVar5 = SUB84(dVar6, 0);
            } else {
                *pdVar3 = in_xd2;
                *pdVar5 = in_xd4;
            }
        } while (uVar2 < uVar4);
    }
    return &g_8c10f160;
}

/*
 * asr_scan_loop_10f168  0x8c10f168
 * area name: in the asr library code range; behaviour name: a loop that only reads
 * called by: asr_uses_mring_read_advance_10f22a
 */
u32 asr_scan_loop_10f168(int a0, float *a1, float *a2) {
    u32 uVar1;
    float *pfVar2;
    int iVar3;
    float *pfVar4;
    float *pfVar5;
    float *pfVar6;
    float fVar7;
    float fVar8;

    uVar1 = *(u32 *)(a0 + 0x2c);
    pfVar2 = a1 + uVar1;
    iVar3 = *(int *)(a0 + 0x34);
    pfVar6 = a2 + *(int *)(a0 + 0x30);
    *a2 = *a1 * *a1;
    pfVar4 = a2 + iVar3;
    pfVar5 = a2 + (uVar1 >> 1);
    if (a2 == pfVar6) {
        pfVar6 = pfVar6 + 1;
    }
    while (true) {
        a2 = a2 + 1;
        pfVar2 = pfVar2 + -1;
        a1 = a1 + 1;
        if (pfVar6 <= a2)
            break;
        *a2 = *a1 * *a1 + *pfVar2 * *pfVar2;
    }
    for (; a2 <= pfVar4; a2 = a2 + 1) {
        fVar8 = *pfVar2;
        pfVar2 = pfVar2 + -1;
        fVar7 = *a1;
        a1 = a1 + 1;
        *a2 = fVar7 * fVar7 + fVar8 * fVar8;
    }
    for (; a2 < pfVar5; a2 = a2 + 1) {
        fVar7 = *a1;
        a1 = a1 + 1;
        *a2 = fVar7 * fVar7 + *pfVar2 * *pfVar2;
        pfVar2 = pfVar2 + -1;
    }
    *a2 = *a1 * *a1;
    return 0x38;
}

/*
 * asr_uses_mring_read_advance_10f22a  0x8c10f22a
 * area name: in the asr library code range; behaviour name: its main named callee is mring_read_advance
 */
u32 asr_uses_mring_read_advance_10f22a(int a0, u32 unused_a1, u32 a2, u32 a3) {
    u64 uVar1;
    u32 uVar2;
    short sVar3;
    int iVar4;
    u32 *puVar5;
    u32 uVar6;
    u64 in_dr0;
    char cVar7;
    u64 uStack_14;

    if ((*(char *)(**(int **)(a0 + 0x10) + 0x30) != '\x01') &&
        (*(char *)((*(int **)(a0 + 0x10))[1] + 0x30) != '\x01')) {
        if (*(char *)(a0 + 0x3c) == '\0') {
            puVar5 = *(u32 **)(a0 + 0xc);
            uStack_14 = CONCAT44(puVar5, (u32)uStack_14);
            uVar6 = puVar5[1];
            iVar4 = mring_read_advance(*puVar5, uVar6, a2, a3);
        } else {
            puVar5 = *(u32 **)(a0 + 0xc);
            a3 = 1;
            a2 = *(u32 *)(a0 + 0x44);
            uStack_14 = CONCAT44(puVar5, (u32)uStack_14);
            uVar6 = puVar5[1];
            uVar2 = asr_copy_111e72(*puVar5, uVar6, a2, 1);
            if ((uVar2 & 0xff) == 0) {
                iVar4 = 0;
            } else {
                iVar4 = *(int *)(a0 + 0x44);
                a2 = *(u32 *)(a0 + 0x40);
                uVar6 = 0;
                memset(*(int *)(a0 + 0x2c) * 4 + iVar4, 0, a2);
            }
        }
        if (iVar4 != 0) {
            uVar6 = mring_write_advance(*(u32 *)(*(int *)(a0 + 0x10) + 4));
            uStack_14._4_4_ = uVar6;
            asr_calls_fill_loop_10f108(*(u32 *)(a0 + 0x2c), iVar4);
            uVar6 = uStack_14._4_4_;
            asr_scan_loop_10f168(a0, iVar4, uStack_14._4_4_);
            cVar7 = '\0';
            thunk_FUN_8c013dfc();
            uVar1 = in_dr0;
            if (cVar7 == '\0') {
                uStack_14 = CONCAT44(uStack_14._4_4_, (int)((u64)in_dr0 >> 0x20));
                uVar1 = uStack_14;
            }
            uStack_14 = uVar1;
            cVar7 = '\0';
            asr_copy_111cdc(**(u32 **)(a0 + 0x10), &uStack_14, 1);
            if (cVar7 == '\0') {
                uStack_14 = CONCAT44((u32)uStack_14, 0xc1daf5c2);
            }
            sVar3 = (short)(int)(((float)((u64)uStack_14 >> 0x20) + (float)uStack_14) * 4.3429446 * 100.0);
            if (0x708 < sVar3) {
                sVar3 = 0x708;
            }
            if ((int)*(short *)(a0 + 0x48) < (int)sVar3) {
                *(short *)(a0 + 0x48) = sVar3;
            } else {
                *(short *)(a0 + 0x48) = (short)((u32)((*(short *)(a0 + 0x48) + 0x1c20) * 64000) >> 0x10) + -0x1c20;
            }
        }
    }
    iVar4 = **(int **)(a0 + 0xc);
    return *(int *)((*(int **)(a0 + 0xc))[1] * 4 + *(int *)(iVar4 + 0x40)) == *(int *)(iVar4 + 0x3c) ^ 1;
}

/*
 * asr_calls_calc_10f39a  0x8c10f39a
 * area name: in the asr library code range; behaviour name: its callees mostly do: calc
 */
u32 asr_calls_calc_10f39a(int *a0, int a1, int *a2, u32 a3) {
    int in_r0;
    char in_T;

    if (in_T == '\x01') {
        *a2 = (int)(a0 + 0x12);
    } else {
        if (in_r0 != 0xff) {
            return 0;
        }
        if ((char)a0[0xf] != '\0') {
            a1 = a0[0x11];
            (**(code **)(*a0 + 0x18))(*a0, a1, a2, a3);
        }
        asr_calc_120668(a0, a1, a2, a3);
    }
    return 1;
}

/*
 * asr_talk_10f41e  0x8c10f41e
 * area name: in the asr library code range; behaviour name: mostly calls talk functions
 */
u32 asr_talk_10f41e(int *a0, u32 unused_a1, u32 a2, u32 a3) {
    u32 uVar1;
    u32 uVar2;
    int iVar4;
    u32 uVar5;
    float fVar6;
    u64 in_dr0;
    s64 lVar7;
    float fVar8;
    float fVar9;
    float fVar10;
    s64 lVar11;
    char cVar12;
    float fStack_24;
    float fStack_20;
    float fStack_1c;

    iVar4 = *a0;
    asr_state_has_event(a0, 3, a2);
    fStack_1c = (float)(int)(short)(int)(float)((u64)in_dr0 >> 0x20);
    asr_state_has_event(a0, 4, a2);
    uVar5 = (int)(float)((u64)in_dr0 >> 0x20) & 0xffff;
    a0[0xb] = uVar5;
    uVar1 = (u32)(*(u16 *)(*(int *)a0[3] + 0xc) >> 2);
    a0[10] = uVar1;
    if (uVar5 < uVar1) {
        uVar2 = 1;
    } else {
        if ((u32)a0[10] < uVar5) {
            *(u8 *)(a0 + 0xf) = 1;
            a0[0x10] = (uVar5 - a0[10]) * 4;
            iVar4 = (**(code **)(iVar4 + 0x10))(iVar4, uVar5 << 2, a2, a3);
            a0[0x11] = iVar4;
        }
        *(u16 *)(*(int *)a0[4] + 0xc) = 4;
        *(short *)(*(int *)(a0[4] + 4) + 0xc) = ((short)(uVar5 >> 1) + 1) * 4;
        uVar2 = 1;
        cVar12 = '\0';
        asr_state_has_event(a0, 1, a2);
        fVar8 = (float)((u64)in_dr0 >> 0x20);
        fStack_20 = fVar8;
        if (cVar12 != '\0') {
            fStack_20 = (float)in_dr0;
            fStack_1c = fVar8;
        }
        cVar12 = '\0';
        fVar8 = (float)a0[0xb];
        if (a0[0xb] < 0) {
            fVar8 = fVar8 + 4.2949673e+09;
        }
        fVar8 = fVar8 * fStack_20;
        fVar6 = (float)(int)fStack_1c * 2.0;
        fVar10 = 2.0;
        fStack_24 = fVar6;
        thunk_FUN_8c013d28();
        if (cVar12 == '\0') {
            fVar8 = 2.1474836e+09;
        }
        fVar9 = fVar10;
        if (fVar8 < fVar10) {
            fVar9 = fVar10 + -4.2949673e+09;
        }
        uVar1 = (u32)fVar9;
        a0[0xc] = uVar1;
        if (uVar1 == 0) {
            uVar1 = 0;
        }
        a0[0xc] = uVar1;
        if (((u32)a0[0xb] >> 1) - 1 <= uVar1) {
            uVar1 = ((u32)a0[0xb] >> 1) - 2;
        }
        a0[0xc] = uVar1;
        uVar2 = 2;
        cVar12 = '\0';
        asr_state_has_event(a0, 2, a2);
        if (cVar12 == '\0') {
            fStack_24 = fVar10;
        }
        cVar12 = '\0';
        fVar8 = (float)a0[0xb];
        if (a0[0xb] < 0) {
            fVar8 = fVar8 + 4.2949673e+09;
        }
        lVar7 = CONCAT44(0x3f7ff972, fVar6);
        fVar6 = (fVar8 * fStack_24) / fVar6;
        thunk_FUN_8c013d28();
        fVar8 = (float)((u64)lVar7 >> 0x20);
        lVar11 = lVar7;
        if (cVar12 == '\0') {
            fVar6 = 2.1474836e+09;
            lVar11 = (u64)(u32)fVar8 << 0x20;
        }
        fVar10 = (float)((u64)lVar11 >> 0x20);
        if (fVar6 < fVar8) {
            fVar10 = fVar10 + -4.2949673e+09;
        }
        uVar1 = (u32)fVar10;
        a0[0xd] = uVar1;
        if (uVar1 == 0) {
            uVar1 = 0;
        }
        a0[0xd] = uVar1;
        if (((u32)a0[0xb] >> 1) - 1 <= uVar1) {
            uVar1 = ((u32)a0[0xb] >> 1) - 2;
        }
        a0[0xd] = uVar1;
        uVar5 = a0[0xc];
        if (uVar5 < uVar1) {
            uVar5 = uVar1;
        }
        a0[0xd] = uVar5;
        cVar12 = '\0';
        asr_state_has_event(a0, 5, a2);
        if (cVar12 == '\0') {
            a0[0xe] = (int)((u64)lVar7 >> 0x20);
        } else {
            *(s64 *)(a0 + 0xe) = lVar7;
        }
        uVar2 = 0;
    }
    return uVar2;
}

/*
 * asr_module_def_10f632  0x8c10f632
 * registers an ASR processing module (inputs: 1, outputs: 2, state size 0x4c) through 8c120580
 */
u32 asr_module_def_10f632(u32 a0, u32 a1) {
    u32 uVar1;

    uVar1 = (*(code *)(&asr_talk_120580))(a0, a1, 1, 2, (&asr_uses_mring_read_advance_10f22a), (&asr_talk_10f41e),
                                          (&DATA_8c10f392), 0x4c);
    return uVar1;
}

/*
 * asr_scores_export  0x8c10f69c
 * copies the result header (+0x28, +0x30), every score (+0x44, count +0x78) and the four trailing words into a1
 * called by: asr_uses_asr_scores_import_10f8e6
 */
u32 asr_scores_export(int a0, u32 *a1) {
    int iVar1;
    u32 *puVar2;
    u32 uVar3;

    uVar3 = 0;
    *a1 = *(u32 *)(a0 + 0x28);
    a1[1] = (u32) * (u16 *)(a0 + 0x30);
    puVar2 = a1 + 2;
    if (*(int *)(a0 + 0x78) != 0) {
        do {
            iVar1 = uVar3 * 4;
            uVar3 = uVar3 + 1;
            *puVar2 = *(u32 *)(*(int *)(a0 + 0x44) + iVar1);
            puVar2 = puVar2 + 1;
        } while (uVar3 < *(u32 *)(a0 + 0x78));
    }
    *puVar2 = *(u32 *)(a0 + 0x48);
    puVar2[1] = *(u32 *)(a0 + 0x4c);
    puVar2[2] = *(u32 *)(a0 + 0x50);
    puVar2[3] = *(u32 *)(a0 + 0x54);
    return 0x54;
}

/*
 * asr_scores_import  0x8c10f6f0
 * the counterpart of asr_scores_export: loads the header, the scores and the four trailing words from a1
 * called by: asr_uses_asr_scores_import_10f8e6
 */
u32 asr_scores_import(int a0, u32 *a1) {
    u32 *puVar1;
    u32 uVar2;
    u32 uVar3;

    uVar2 = 0;
    *(u32 *)(a0 + 0x28) = *a1;
    puVar1 = a1 + 2;
    *(short *)(a0 + 0x30) = (short)a1[1];
    if (*(int *)(a0 + 0x78) != 0) {
        do {
            uVar3 = *puVar1;
            puVar1 = puVar1 + 1;
            *(u32 *)(*(int *)(a0 + 0x44) + uVar2 * 4) = uVar3;
            uVar2 = uVar2 + 1;
        } while (uVar2 < *(u32 *)(a0 + 0x78));
    }
    *(u32 *)(a0 + 0x48) = *puVar1;
    *(u32 *)(a0 + 0x4c) = puVar1[1];
    *(u32 *)(a0 + 0x50) = puVar1[2];
    *(u32 *)(a0 + 0x54) = puVar1[3];
    return 0x54;
}

/*
 * asr_talk_10f736  0x8c10f736
 * area name: sits between asr functions (same compilation unit); behaviour name: mostly calls talk functions
 * called by: asr_uses_asr_scores_import_10f8e6
 */
u32 asr_talk_10f736(int a0, int a1) {
    u8 uVar1;
    u16 uVar2;
    u32 uVar3;
    u32 uVar4;

    uVar3 = (**(code **)(0x84 + a1))(a1, 1, 1);
    uVar1 = (**(code **)(a1 + 0x54))(uVar3);
    *(u8 *)(a0 + 0x58) = uVar1;
    uVar1 = (**(code **)(a1 + 0x58))(uVar3);
    *(u8 *)(a0 + 0x59) = uVar1;
    uVar1 = (**(code **)(a1 + 0x5c))(uVar3);
    *(u8 *)(a0 + 0x5a) = uVar1;
    uVar1 = (**(code **)(a1 + 0x60))(uVar3);
    *(u8 *)(a0 + 0x5b) = uVar1;
    uVar2 = (**(code **)(a1 + 100))(uVar3);
    *(u16 *)(a0 + 0x5c) = uVar2 & 0xff;
    uVar4 = (**(code **)(0xb4 + a1))(uVar3);
    *(u32 *)(a0 + 0x60) = uVar4;
    uVar4 = (**(code **)(0xb8 + a1))(uVar3);
    *(u32 *)(a0 + 100) = uVar4;
    uVar3 = (**(code **)(0xbc + a1))(uVar3);
    *(u32 *)(a0 + 0x68) = uVar3;
    if ((u32) * (u8 *)(a0 + 0x58) != *(int *)(a0 + 0x70) - *(int *)(a0 + 0x74)) {
        uVar3 = asr_fsm_set_result(a0, 0x66);
        return uVar3;
    }
    *(int *)(0x90 + a0) = a1;
    return 0;
}

/*
 * alt_entry_10f742  0x8c10f742
 * probably an entry 12 bytes into 8c10f736: it reads registers that code sets before it
 */
u32 alt_entry_10f742(u32 unused_a0, u32 a1, u32 a2, u32 a3) {
    int in_r0;
    u32 uVar1;
    u32 uVar2;
    int unaff_r13;
    int unaff_r14;

    uVar1 = (**(code **)(in_r0 + unaff_r13))(unaff_r13, a1, a2, a3);
    uVar2 = (**(code **)(unaff_r13 + 0x54))(uVar1, a1, a2, a3);
    *(char *)(unaff_r14 + 0x58) = (char)uVar2;
    uVar2 = (**(code **)(unaff_r13 + 0x58))(uVar1, a1, a2, a3);
    *(char *)(unaff_r14 + 0x59) = (char)uVar2;
    uVar2 = (**(code **)(unaff_r13 + 0x5c))(uVar1, a1, a2, a3);
    *(char *)(unaff_r14 + 0x5a) = (char)uVar2;
    uVar2 = (**(code **)(unaff_r13 + 0x60))(uVar1, a1, a2, a3);
    *(char *)(unaff_r14 + 0x5b) = (char)uVar2;
    uVar2 = (**(code **)(unaff_r13 + 100))(uVar1, a1, a2, a3);
    *(u16 *)(unaff_r14 + 0x5c) = (u16)uVar2 & 0xff;
    uVar2 = (**(code **)(0xb4 + unaff_r13))(uVar1, a1, a2, a3);
    *(u32 *)(unaff_r14 + 0x60) = uVar2;
    uVar2 = (**(code **)(0xb8 + unaff_r13))(uVar1, a1, a2, a3);
    *(u32 *)(unaff_r14 + 100) = uVar2;
    uVar1 = (**(code **)(0xbc + unaff_r13))(uVar1, a1, a2, a3);
    *(u32 *)(unaff_r14 + 0x68) = uVar1;
    if ((u32) * (u8 *)(unaff_r14 + 0x58) != *(int *)(unaff_r14 + 0x70) - *(int *)(unaff_r14 + 0x74)) {
        uVar1 = asr_fsm_set_result(0x66);
        return uVar1;
    }
    *(int *)(0x90 + unaff_r14) = unaff_r13;
    return 0;
}

/*
 * asr_calls_fill_loop_10f850  0x8c10f850
 * area name: sits between asr functions (same compilation unit); behaviour name: its callees mostly do: fill_loop
 * called by: asr_uses_asr_scores_import_10f8e6
 */
u32 asr_calls_fill_loop_10f850(int a0, u32 a1, u32 a2, u32 a3) {
    int a7;
    u32 uVar1;
    int a5;
    short sVar2;
    bool bVar4;
    u32 uVar3;

    a7 = (**(code **)(*(int *)(0x90 + a0) + 0x6c))(*(int *)(0x90 + a0), a1, a2, a3);
    a5 = 0;
    uVar3 = 0;
    sVar2 = 0;
    uVar1 = 0;
    if (*(int *)(a0 + 0x78) != 0) {
        do {
            if ((*(u32 *)(uVar1 * 8 + a7) & a1) != 0) {
                a5 = a5 + 1;
                uVar3 = uVar1;
            }
            sVar2 = (short)uVar3;
            uVar1 = uVar1 + 1;
        } while (uVar1 < *(u32 *)(a0 + 0x78));
    }
    bVar4 = a5 == 1;
    if (bVar4 != (bool)*(char *)(a0 + 0x32)) {
        asr_fill_loop_10fa6c(a0, a5, 0);
    }
    if ((bVar4) && (*(short *)(a0 + 0x30) = sVar2 + 1, *(int *)(a0 + 0x28) == 0)) {
        *(u32 *)(a0 + 0x28) = 1;
    }
    *(bool *)(a0 + 0x32) = bVar4;
    *(u32 *)(a0 + 0x2c) = a1;
    return 0x32;
}

/*
 * asr_uses_asr_scores_import_10f8e6  0x8c10f8e6
 * area name: sits between asr functions (same compilation unit); behaviour name: its main named callee is
 * asr_scores_import
 */
u32 asr_uses_asr_scores_import_10f8e6(int *a0, u32 a1, int *a2, int *a3) {
    u32 uVar1;
    u32 ar5_00;
    int a5;
    u32 ar6_00;
    int iVar2;
    u32 uVar3;
    u32 *puStack_1c;

    iVar2 = *a0;
    uVar1 = a1 & 0xff;
    uVar3 = 1;
    if (uVar1 == 1) {
        uVar1 = asr_talk_10f736(a0, a2);
        uVar3 = (u32)((uVar1 & 0xff) == 0);
    } else if (uVar1 == 2) {
        *(char *)((int)a2 + a0[0x1b] + 1) = (char)a3;
    } else if (uVar1 == 3) {
        if ((a0[0x12] != 0) || (a2 != NULL)) {
            if ((short)a0[0xc] == 0) {
                a0[0x15] = (int)((float)a0[0x22] + 1.0);
            }
            a0[10] = 1;
        }
    } else {
        if (uVar1 == 4) {
            puStack_1c = (u32 *)a0[3];
            ar6_00 = puStack_1c[1];
            ar5_00 = 7;
        } else {
            if (uVar1 != 5) {
                if (uVar1 == 6) {
                    if (a2 != NULL) {
                        asr_scores_import(a0, *a3 + (int)a2);
                        *a3 = *a3 + (a0[0x1e] + 6) * 4;
                        return 1;
                    }
                    asr_fill_loop_10fa6c(a0, a1, 0);
                    return 1;
                }
                if (uVar1 == 7) {
                    if (a2 != NULL) {
                        asr_scores_export(a0, *a3 + (int)a2);
                    }
                    iVar2 = *a3 + (a0[0x1e] + 6) * 4;
                } else {
                    if (uVar1 == 8) {
                        asr_calls_fill_loop_10f850(a0, *a2, a2, a3);
                        return 1;
                    }
                    if (uVar1 == 9) {
                        *a2 = a0[0xb];
                        return 1;
                    }
                    if (uVar1 != 0xf8) {
                        if (uVar1 != 0xff) {
                            return 0;
                        }
                        (**(code **)(iVar2 + 0x18))(iVar2, a0[0x11], a2, a3);
                        (**(code **)(iVar2 + 0x18))(iVar2, a0[0xd], a2, a3);
                        a5 = a0[0x1b];
                        (**(code **)(iVar2 + 0x18))(iVar2, a5, a2, a3);
                        asr_calc_120668(a0, a5, a2, a3);
                        return 1;
                    }
                    iVar2 = a0[0x12];
                }
                *a3 = iVar2;
                return 1;
            }
            puStack_1c = (u32 *)a0[3];
            ar5_00 = 6;
            ar6_00 = puStack_1c[1];
        }
        uVar3 = asr_calls_fill_loop_1113d0(*puStack_1c, ar5_00, ar6_00, a2);
    }
    return uVar3;
}

/*
 * asr_fill_loop_10fa6c  0x8c10fa6c
 * area name: sits between asr functions (same compilation unit); behaviour name: a loop that writes memory
 * called by: asr_calls_fill_loop_10f850, asr_talk_10fece, asr_uses_asr_scores_import_10f8e6
 */
u32 asr_fill_loop_10fa6c(int a0, u32 unused_a1, u32 a2) {
    int iVar1;
    u32 uVar2;

    *(u32 *)(a0 + 0x28) = 0;
    *(u16 *)(a0 + 0x30) = 0;
    *(u32 *)(a0 + 0x40) = *(u32 *)(a0 + 0x34);
    *(u32 *)(a0 + 0x3c) = *(u32 *)(a0 + 0x34);
    uVar2 = 0;
    if (*(int *)(a0 + 0x78) != 0) {
        do {
            iVar1 = uVar2 * 4;
            uVar2 = uVar2 + 1;
            *(u32 *)(*(int *)(a0 + 0x44) + iVar1) = 0;
        } while (uVar2 < *(u32 *)(a0 + 0x78));
    }
    *(u32 *)(a0 + 0x48) = 0;
    *(u32 *)(a0 + 0x4c) = 0;
    *(u32 *)(a0 + 0x50) = 0;
    *(u32 *)(a0 + 0x54) = 0;
    return 0x54;
}

/*
 * asr_uses_libgcc_divide_helper_10fab2  0x8c10fab2
 * area name: sits between asr functions (same compilation unit); behaviour name: its main named callee is
 * libgcc_divide_helper_010468 called by: asr_uses_mring_read_advance_10fc96
 */
u32 asr_uses_libgcc_divide_helper_10fab2(int a0, int a1) {
    char cVar1;
    int iVar2;
    float *ain0;
    float *ar4_00;
    u32 *puVar3;
    int *ar6_00;
    int iVar4;
    int iVar5;
    u32 uVar6;
    float *pfVar7;
    s64 in_dr0;
    float fVar9;
    u64 uVar8;
    u32 uVar10;
    float fVar11;
    u64 in_dr4;
    u64 uVar12;
    u64 uVar13;
    u64 uVar14;
    s64 lVar15;
    u64 in_xd4;
    u64 in_xd6;
    u64 in_xd14;
    char cVar16;

    fVar11 = (float)((u64)in_dr4 >> 0x20);
    if (*(float *)(a0 + 0x4c) <= (float)*(int *)(a0 + 0x8c)) {
        *(float *)(a0 + 0x4c) = *(float *)(a0 + 0x4c) + fVar11;
    }
    fVar9 = *(float *)(a0 + 0x54) + fVar11;
    *(float *)(a0 + 0x54) = fVar9;
    if (*(int *)(a0 + 0x50) < *(int *)(a0 + 0x84)) {
        *(int *)(a0 + 0x50) = *(int *)(a0 + 0x50) + 1;
    }
    uVar6 = 0;
    uVar8 = CONCAT44(fVar9, (float)*(int *)(a0 + 0x50));
    lVar15 = (u64)(u32)fVar11 << 0x20;
    uVar14 = (u64)(u32)(1.0 / (float)*(int *)(a0 + 0x50));
    pfVar7 = (float *)(a1 + *(int *)(a0 + 0x74) * 4);
    if (*(int *)(a0 + 0x78) != 0) {
        do {
            cVar16 = '\0';
            uVar10 = (u32)in_dr4;
            if (*(char *)(*(int *)(a0 + 0x6c) + uVar6 + 1) != '\0') {
                iVar5 = -1;
                puVar3 = *(u32 **)(a0 + 0x60);
                ar4_00 = pfVar7 + (*(int *)(a0 + 0x70) - *(int *)(a0 + 0x74));
                uVar12 = 0x7f7fffff7f7fffff;
                iVar4 = 0;
                uVar13 = uVar12;
                if (*(char *)(a0 + 0x59) != '\0') {
                    do {
                        a1 = (int)pfVar7;
                        uVar12 = in_xd14;
                        if (cVar16 == '\0') {
                            uVar12 = CONCAT44((int)lVar15, (int)in_dr4);
                        }
                        for (; in_dr4 = uVar12, (u32)a1 < ar4_00; a1 = (int)(a1 + 4)) {
                            if (cVar16 == '\0') {
                                uVar8 = (u64)*puVar3;
                                in_dr4 = CONCAT44((int)((u64)in_dr4 >> 0x20), *(float *)a1);
                            } else {
                                in_xd4 = *(u64 *)a1;
                            }
                            cVar16 = '\0';
                            fVar11 = (float)in_dr4 - (float)uVar8;
                            in_dr0 = (u64)(u32)fVar11 << 0x20;
                            fVar9 = fVar11 * fVar11 + (float)((u64)in_dr4 >> 0x20);
                            in_dr4 = CONCAT44(fVar9, fVar11);
                            if ((float)((u64)uVar13 >> 0x20) < fVar9)
                                break;
                            puVar3 = puVar3 + 1;
                            uVar12 = in_dr4;
                            cVar16 = '\0';
                        }
                        if ((float *)a1 == ar4_00) {
                            iVar5 = iVar4;
                            uVar12 = in_dr4;
                            if (cVar16 == '\0') {
                                uVar12 = CONCAT44((int)((u64)in_dr4 >> 0x20), (int)uVar13);
                            }
                        } else {
                            iVar2 = libgcc_divide_helper_010468((int)ar4_00 - a1, 4);
                            puVar3 = puVar3 + iVar2;
                            uVar12 = uVar13;
                        }
                        uVar10 = (u32)in_dr4;
                        iVar4 = iVar4 + 1;
                        uVar13 = uVar12;
                    } while (iVar4 < (int)(u32) * (u8 *)(a0 + 0x59));
                }
                fVar11 = (float)((u64)in_dr0 >> 0x20);
                in_dr4 = in_xd6;
                if (cVar16 == '\0') {
                    in_dr4 = CONCAT44((int)uVar12, uVar10);
                }
                ar6_00 = (int *)((u32) * (u8 *)(a0 + 0x5a) * iVar5 * 4 + *(int *)(a0 + 100));
                iVar5 = 0;
                if (*(char *)(a0 + 0x5a) != '\0') {
                    do {
                        puVar3 = (u32 *)(*ar6_00 * 4 + *(int *)(a0 + 0x68));
                        a1 = (int)pfVar7;
                        uVar12 = in_dr4;
                        cVar1 = cVar16;
                        uVar13 = in_xd14;
                        if (cVar16 == '\0') {
                            uVar12 = CONCAT44((int)((u64)in_dr4 >> 0x20), (int)lVar15);
                            uVar13 = in_xd4;
                        }
                        do {
                            in_xd4 = uVar13;
                            cVar16 = cVar1;
                            if (ar4_00 <= (u32)a1)
                                break;
                            if (cVar16 == '\0') {
                                uVar8 = (u64)*puVar3;
                                puVar3 = puVar3 + 1;
                                fVar11 = *(float *)a1;
                                a1 = a1 + 4;
                            } else {
                                puVar3 = puVar3 + 2;
                                fVar11 = (float)((u64) * (u64 *)a1 >> 0x20);
                                a1 = a1 + 8;
                            }
                            cVar16 = '\0';
                            fVar11 = fVar11 - (float)uVar8;
                            in_dr0 = (u64)(u32)fVar11 << 0x20;
                            fVar9 = (float)((u64)uVar12 >> 0x20);
                            fVar11 = fVar11 * fVar11 + (float)uVar12;
                            uVar12 = CONCAT44(fVar9, fVar11);
                            cVar1 = '\0';
                            uVar13 = in_xd4;
                        } while (fVar11 <= fVar9);
                        fVar11 = (float)((u64)in_dr0 >> 0x20);
                        ar6_00 = ar6_00 + 1;
                        in_dr4 = uVar12;
                        if (((float *)a1 == ar4_00) && (in_dr4 = in_xd4, cVar16 == '\0')) {
                            in_dr4 = CONCAT44((int)uVar12, (int)uVar12);
                        }
                        iVar5 = iVar5 + 1;
                    } while (iVar5 < (int)(u32) * (u8 *)(a0 + 0x5a));
                }
                ain0 = (float *)(*(int *)(a0 + 0x44) + uVar6 * 4);
                noop_11fbb6();
                fVar11 = fVar11 * (float)((u64)lVar15 >> 0x20) - *(float *)(*(int *)(a0 + 0x44) + uVar6 * 4);
                in_dr0 = (u64)(u32)fVar11 << 0x20;
                fVar11 = fVar11 * (float)uVar14 + *ain0;
                uVar8 = (u64)(u32)fVar11;
                *ain0 = fVar11;
            }
            uVar6 = uVar6 + 1;
            pfVar7 = pfVar7 + *(int *)(a0 + 0x70);
        } while (uVar6 < *(u32 *)(a0 + 0x78));
    }
    return 0x78;
}

/*
 * alt_entry_10fabc  0x8c10fabc
 * probably an entry 10 bytes into 8c10fab2: it reads registers that code sets before it
 */
u32 alt_entry_10fabc(u32 unused_a0, double *a1, u32 unused_a2, u32 unused_a3, int ain0) {
    char cVar1;
    int iVar2;
    double *ar4_00;
    u32 *puVar3;
    int *ar6_00;
    int iVar4;
    int iVar5;
    u32 uVar6;
    int unaff_r13;
    double *pdVar7;
    int unaff_r14;
    u8 *puVar8;
    s64 in_dr0;
    float fVar9;
    float fVar11;
    u64 uVar10;
    u32 uVar12;
    double in_dr4;
    double dVar13;
    double dVar14;
    u64 uVar15;
    u64 in_dr14;
    float fVar17;
    s64 lVar16;
    double in_xd4;
    double in_xd6;
    double in_xd14;
    u32 in_PR;
    char cVar18;
    u8 auStack_2c[12];
    u8 auStack_20[4];
    u64 uStack_1c;

    uStack_1c = (double)CONCAT44((int)in_dr14, (u32)uStack_1c);
    uStack_1c._0_4_ = (int)((u64)in_dr14 >> 0x20);
    puVar8 = auStack_20;

    *(u32 *)(puVar8 + -4) = in_PR;

    fVar11 = *(float *)(unaff_r14 + 0x4c);

    fVar9 = (float)*(int *)(ain0 + unaff_r14);
    dVar13 = in_dr4;

    dVar13 = (double)CONCAT44((int)((u64)in_dr4 >> 0x20), (int)in_dr14);

    fVar17 = (float)((u64)dVar13 >> 0x20);
    if (fVar11 <= fVar9) {

        fVar9 = *(float *)(unaff_r14 + 0x4c);

        fVar9 = fVar9 + fVar17;

        *(float *)(unaff_r14 + 0x4c) = fVar9;
    }

    fVar11 = *(float *)(unaff_r14 + 0x54);

    *(float *)(unaff_r14 + 0x54) = fVar11 + fVar17;
    if (*(int *)(unaff_r14 + 0x50) < *(int *)(unaff_r14 + 0x84)) {
        *(int *)(unaff_r14 + 0x50) = *(int *)(unaff_r14 + 0x50) + 1;
    }
    uVar6 = 0;
    uVar10 = CONCAT44(fVar11 + fVar17, (float)*(int *)(unaff_r14 + 0x50));
    lVar16 = (u64)(u32)fVar17 << 0x20;
    uVar15 = (u64)(u32)(1.0 / (float)*(int *)(unaff_r14 + 0x50));
    pdVar7 = (double *)(unaff_r13 + *(int *)(unaff_r14 + 0x74) * 4);
    if (*(int *)(unaff_r14 + 0x78) != 0) {
        do {
            cVar18 = '\0';
            uVar12 = SUB84(in_dr4, 0);
            if (*(char *)(*(int *)(unaff_r14 + 0x6c) + uVar6 + 1) != '\0') {
                iVar5 = -1;
                puVar3 = *(u32 **)(unaff_r14 + 0x60);
                ar4_00 = (double *)((int)pdVar7 + *(int *)(unaff_r14 + 0x74) * -4 + *(int *)(unaff_r14 + 0x70) * 4);
                dVar13 = 1.4044474254567505e+306;
                iVar4 = 0;
                dVar14 = dVar13;
                if (*(char *)(unaff_r14 + 0x59) != '\0') {
                    do {
                        a1 = pdVar7;
                        dVar13 = in_xd14;
                        if (cVar18 == '\0') {
                            dVar13 = (double)CONCAT44((int)lVar16, SUB84(in_dr4, 0));
                        }
                        for (; in_dr4 = dVar13, a1 < ar4_00; a1 = (double *)((int)a1 + 4)) {
                            if (cVar18 == '\0') {
                                uVar10 = (u64)*puVar3;
                                in_dr4 = (double)CONCAT44((int)((u64)in_dr4 >> 0x20), *(u32 *)a1);
                            } else {
                                in_xd4 = *a1;
                            }
                            cVar18 = '\0';
                            fVar11 = SUB84(in_dr4, 0) - (float)uVar10;
                            in_dr0 = (u64)(u32)fVar11 << 0x20;
                            fVar9 = fVar11 * fVar11 + (float)((u64)in_dr4 >> 0x20);
                            in_dr4 = (double)CONCAT44(fVar9, fVar11);
                            if ((float)((u64)dVar14 >> 0x20) < fVar9)
                                break;
                            puVar3 = puVar3 + 1;
                            dVar13 = in_dr4;
                            cVar18 = '\0';
                        }
                        if (a1 == ar4_00) {
                            iVar5 = iVar4;
                            dVar13 = in_dr4;
                            if (cVar18 == '\0') {
                                dVar13 = (double)CONCAT44((int)((u64)in_dr4 >> 0x20), SUB84(dVar14, 0));
                            }
                        } else {
                            iVar2 = libgcc_divide_helper_010468((int)ar4_00 - (int)a1, 4);
                            puVar3 = puVar3 + iVar2;
                            dVar13 = dVar14;
                        }
                        uVar12 = SUB84(in_dr4, 0);
                        iVar4 = iVar4 + 1;
                        dVar14 = dVar13;
                    } while (iVar4 < (int)(u32) * (u8 *)(unaff_r14 + 0x59));
                }
                fVar11 = (float)((u64)in_dr0 >> 0x20);
                in_dr4 = in_xd6;
                if (cVar18 == '\0') {
                    in_dr4 = (double)CONCAT44(SUB84(dVar13, 0), uVar12);
                }
                ar6_00 = (int *)((u32) * (u8 *)(unaff_r14 + 0x5a) * iVar5 * 4 + *(int *)(unaff_r14 + 100));
                iVar5 = 0;
                if (*(char *)(unaff_r14 + 0x5a) != '\0') {
                    do {
                        puVar3 = (u32 *)(*ar6_00 * 4 + *(int *)(unaff_r14 + 0x68));
                        a1 = pdVar7;
                        dVar13 = in_dr4;
                        cVar1 = cVar18;
                        dVar14 = in_xd14;
                        if (cVar18 == '\0') {
                            dVar13 = (double)CONCAT44((int)((u64)in_dr4 >> 0x20), (int)lVar16);
                            dVar14 = in_xd4;
                        }
                        do {
                            in_xd4 = dVar14;
                            cVar18 = cVar1;
                            if (ar4_00 <= a1)
                                break;
                            if (cVar18 == '\0') {
                                uVar10 = (u64)*puVar3;
                                puVar3 = puVar3 + 1;
                                fVar11 = *(float *)a1;
                                a1 = (double *)((int)a1 + 4);
                            } else {
                                puVar3 = puVar3 + 2;
                                fVar11 = (float)((u64)*a1 >> 0x20);
                                a1 = a1 + 1;
                            }
                            cVar18 = '\0';
                            fVar11 = fVar11 - (float)uVar10;
                            in_dr0 = (u64)(u32)fVar11 << 0x20;
                            fVar9 = (float)((u64)dVar13 >> 0x20);
                            fVar11 = fVar11 * fVar11 + SUB84(dVar13, 0);
                            dVar13 = (double)CONCAT44(fVar9, fVar11);
                            cVar1 = '\0';
                            dVar14 = in_xd4;
                        } while (fVar11 <= fVar9);
                        fVar11 = (float)((u64)in_dr0 >> 0x20);
                        ar6_00 = ar6_00 + 1;
                        in_dr4 = dVar13;
                        if ((a1 == ar4_00) && (in_dr4 = in_xd4, cVar18 == '\0')) {
                            in_dr4 = (double)CONCAT44(SUB84(dVar13, 0), SUB84(dVar13, 0));
                        }
                        iVar5 = iVar5 + 1;
                    } while (iVar5 < (int)(u32) * (u8 *)(unaff_r14 + 0x5a));
                }
                *(u32 *)(puVar8 + -8) = *(int *)(unaff_r14 + 0x44) + uVar6 * 4;
                noop_11fbb6(ar4_00, a1, ar6_00, iVar5, *(u32 *)(puVar8 + -8));
                fVar11 = fVar11 * (float)((u64)lVar16 >> 0x20) - *(float *)(*(int *)(unaff_r14 + 0x44) + uVar6 * 4);
                in_dr0 = (u64)(u32)fVar11 << 0x20;
                fVar11 = fVar11 * (float)uVar15 + **(float **)(puVar8 + -8);
                uVar10 = (u64)(u32)fVar11;
                **(float **)(puVar8 + -8) = fVar11;
            }
            uVar6 = uVar6 + 1;
            pdVar7 = (double *)((int)pdVar7 + *(int *)(unaff_r14 + 0x70) * 4);
        } while (uVar6 < *(u32 *)(unaff_r14 + 0x78));
    }
    return 0x78;
}

/*
 * asr_uses_mring_read_advance_10fc96  0x8c10fc96
 * area name: sits between asr functions (same compilation unit); behaviour name: its main named callee is
 * mring_read_advance called by: asr_uses_mring_write_advance_110060
 */
u32 asr_uses_mring_read_advance_10fc96(int a0, u32 unused_a1, int a2, u32 a3) {
    u32 uVar1;
    u32 uVar2;
    float *pfVar3;
    int ar4_00;
    u32 *puVar4;
    int a4;
    float extraout_fr3;
    float fVar5;
    float fVar6;
    char cVar7;

    a4 = *(int *)(a0 + 0x40);
    ar4_00 = *(int *)(a0 + 0xc);
    uVar1 = asr_talk_112170(ar4_00, *(int *)(a0 + 0x78) + 1);
    uVar2 = 0;
    if ((uVar1 & 0xff) != 0) {
        uVar1 = 1;
        if (*(int *)(a0 + 0x78) != 0) {
            do {
                if (*(char *)(*(int *)(a0 + 0x6c) + uVar1) != '\0') {
                    puVar4 = (u32 *)(uVar1 * 8 + ar4_00);
                    uVar2 = mring_read_advance(*puVar4, puVar4[1], a2, a3);
                    a2 = *(int *)(a0 + 0x70) << 2;
                    memmove(a4, uVar2, a2);
                }
                uVar1 = uVar1 + 1;
                a4 = a4 + *(int *)(a0 + 0x70) * 4;
            } while (uVar1 <= *(u32 *)(a0 + 0x78));
        }
        cVar7 = '\0';
        pfVar3 = (float *)mring_read_advance(**(u32 **)(a0 + 0xc), (*(u32 **)(a0 + 0xc))[1], a2, a3);
        if (cVar7 == '\0') {
            fVar6 = *pfVar3;
        } else {
            fVar6 = (float)((u64) * (u64 *)pfVar3 >> 0x20);
        }
        if (*(char *)(a0 + 0x32) == '\0') {
            fVar5 = extraout_fr3;
            if (cVar7 == '\0') {
                fVar5 = 0.0009999999;
            }
            if (fVar5 < fVar6) {
                asr_uses_libgcc_divide_helper_10fab2(a0, *(u32 *)(a0 + 0x40));
            }
        }
        *(int *)(a0 + 0x48) = *(int *)(a0 + 0x48) + 1;
        uVar2 = 0x40;
        if (a4 == *(int *)(a0 + 0x38)) {
            a4 = *(int *)(a0 + 0x34);
        }
        *(int *)(a0 + 0x40) = a4;
    }
    return uVar2;
}

/*
 * asr_find_min_active_score  0x8c10fd82
 * 1-based index of the smallest score at +0x44 among active entries (+0x6c flags), count +0x78
 * called by: alt_entry_10fe0a, asr_uses_mring_write_advance_10fe04
 */
int asr_find_min_active_score(int a0) {
    u32 uVar1;
    u32 uVar2;
    float fVar3;

    fVar3 = 3.4028235e+38;
    uVar2 = 0;
    uVar1 = 0;
    if (*(int *)(a0 + 0x78) != 0) {
        do {
            if ((*(char *)(*(int *)(a0 + 0x6c) + uVar1 + 1) != '\0') &&
                (*(float *)(*(int *)(a0 + 0x44) + uVar1 * 4) < fVar3)) {
                fVar3 = *(float *)(uVar1 * 4 + *(int *)(a0 + 0x44));
                uVar2 = uVar1;
            }
            uVar1 = uVar1 + 1;
        } while (uVar1 < *(u32 *)(a0 + 0x78));
    }
    *(u32 *)(a0 + 0x54) = 0;
    return uVar2 + 1;
}

/*
 * asr_uses_mring_write_advance_10fe04  0x8c10fe04
 * area name: sits between asr functions (same compilation unit); behaviour name: its main named callee is
 * mring_write_advance called by: asr_uses_mring_write_advance_110060
 */
u32 asr_uses_mring_write_advance_10fe04(int a0) {
    u32 uVar1;
    int iVar2;

    uVar1 = 0x48;
    if ((*(int *)(a0 + 0x48) != 0) && (iVar2 = mring_write_advance(**(u32 **)(a0 + 0x10)), uVar1 = 0, iVar2 != 0)) {
        if ((*(char *)(a0 + 0x32) == '\0') &&
            ((*(int *)(a0 + 0x28) == 0 || ((float)*(int *)(a0 + 0x88) < *(float *)(a0 + 0x54))))) {
            uVar1 = asr_find_min_active_score(a0);
            *(short *)(a0 + 0x30) = (short)uVar1;
        }
        memmove(iVar2, (*(u16 *)(a0 + 0x30) - 1) * *(int *)(a0 + 0x70) * 4 + *(int *)(a0 + 0x3c),
                *(int *)(a0 + 0x70) << 2);
        iVar2 = *(int *)(a0 + 0x3c) + *(int *)(a0 + 0x80) * 4;
        *(int *)(a0 + 0x3c) = iVar2;
        uVar1 = 0x48;
        if (iVar2 == *(int *)(a0 + 0x38)) {
            *(u32 *)(a0 + 0x3c) = *(u32 *)(a0 + 0x34);
        }
        *(int *)(a0 + 0x48) = *(int *)(a0 + 0x48) + -1;
    }
    return uVar1;
}

/*
 * alt_entry_10fe0a  0x8c10fe0a
 * probably an entry 6 bytes into 8c10fe04: it reads registers that code sets before it
 */
u32 alt_entry_10fe0a(u32 unused_a0, u32 unused_a1, u32 unused_a2, u32 a3) {
    int in_r0;
    int iVar1;
    u32 uVar2;
    u32 uVar3;
    int unaff_r14;
    float fVar4;
    u8 in_FPSCR_CAUSE;
    u8 bVar5;
    u8 in_FPSCR_DN;
    u8 bVar6;
    u8 in_FPSCR_PR;
    u8 bVar7;
    u8 in_FPSCR_SZ;
    u8 bVar8;

    if (*(int *)(in_r0 + unaff_r14) == 0) {
        return in_r0;
    }
    uVar3 =
        ((u32)in_FPSCR_CAUSE << 0xc | (u32)in_FPSCR_DN << 0x12 | (u32)in_FPSCR_PR << 0x13 | (u32)in_FPSCR_SZ << 0x14) &
        0xffe7ffff;
    bVar5 = 0;
    bVar6 = 0;
    bVar7 = (u8)((uVar3 & 0x80000) >> 0x13);
    bVar8 = (u8)((uVar3 & 0x100000) >> 0x14);
    iVar1 = mring_write_advance(**(u32 **)(unaff_r14 + 0x10));
    if (iVar1 == 0) {
        return 0;
    }
    if (*(char *)(unaff_r14 + 0x32) == '\0') {
        if (*(int *)(unaff_r14 + 0x28) != 0) {
            uVar3 = ((u32)bVar5 << 0xc | (u32)bVar6 << 0x12 | (u32)bVar7 << 0x13 | (u32)bVar8 << 0x14) & 0xffe7ffff;
            if ((char)((uVar3 & 0x100000) >> 0x14) == '\0') {
                fVar4 = *(float *)(unaff_r14 + 0x54);
            } else {
                fVar4 = (float)((u64) * (u64 *)(unaff_r14 + 0x54) >> 0x20);
            }
            if ((char)((uVar3 & 0x80000) >> 0x13) != '\0' || fVar4 <= (float)*(int *)(0x88 + unaff_r14))
                goto LAB_8c10fe62;
        }
        uVar2 = asr_find_min_active_score(unaff_r14);
        *(short *)(unaff_r14 + 0x30) = (short)uVar2;
    }
LAB_8c10fe62:
    (*(code *)(&memmove))(
        iVar1, (*(u16 *)(unaff_r14 + 0x30) - 1) * *(int *)(unaff_r14 + 0x70) * 4 + *(int *)(unaff_r14 + 0x3c),
        *(int *)(unaff_r14 + 0x70) << 2, a3);
    iVar1 = *(int *)(unaff_r14 + 0x3c) + *(int *)(0x80 + unaff_r14) * 4;
    *(int *)(unaff_r14 + 0x3c) = iVar1;
    if (iVar1 == *(int *)(unaff_r14 + 0x38)) {
        *(u32 *)(unaff_r14 + 0x3c) = *(u32 *)(unaff_r14 + 0x34);
    }
    *(int *)(unaff_r14 + 0x48) = *(int *)(unaff_r14 + 0x48) + -1;
    return 0x48;
}

/*
 * asr_talk_10fece  0x8c10fece
 * area name: sits between asr functions (same compilation unit); behaviour name: mostly calls talk functions
 */
u32 asr_talk_10fece(u32 unused_a0, u32 unused_a1, u32 a2, u32 a3, int *ain1) {
    int iVar1;
    u32 uVar2;
    int a4;
    int *unaff_r14;
    float extraout_fr0;
    float extraout_fr0_00;
    float extraout_fr0_01;
    float extraout_fr0_02;
    float extraout_fr0_03;
    float extraout_fr0_04;

    a4 = *unaff_r14;
    *ain1 = *(u8 *)(unaff_r14 + 2) - 1;
    asr_state_has_event(unaff_r14, 5, a2);
    unaff_r14[0x1d] = (int)extraout_fr0 & 0xffff;
    asr_state_has_event(unaff_r14, 6, a2);
    unaff_r14[0x1c] = (int)extraout_fr0_00 & 0xffff;
    asr_state_has_event(unaff_r14, 1, a2);
    unaff_r14[0x1f] = (int)extraout_fr0_01 & 0xffff;
    asr_state_has_event(unaff_r14, 2, a2);
    unaff_r14[0x21] = (int)(short)(int)extraout_fr0_02;
    asr_state_has_event(unaff_r14, 3, a2);
    unaff_r14[0x22] = (int)(short)(int)extraout_fr0_03;
    asr_state_has_event(unaff_r14, 4, a2);
    uVar2 = 4;
    unaff_r14[0x23] = (int)(short)(int)extraout_fr0_04;
    unaff_r14[0x20] = unaff_r14[0x1e] * unaff_r14[0x1c];
    iVar1 = (**(code **)(a4 + 0x14))(a4, unaff_r14[0x1f] * unaff_r14[0x20], 4, a3);
    unaff_r14[0xd] = iVar1;
    unaff_r14[0xe] = unaff_r14[0x1f] * unaff_r14[0x20] * 4 + unaff_r14[0xd];
    iVar1 = (**(code **)(a4 + 0x10))(a4, unaff_r14[0x1e] << 2, uVar2, a3);
    unaff_r14[0x11] = iVar1;
    iVar1 = (**(code **)(a4 + 0x10))(a4, unaff_r14[0x1e] + 1, uVar2, a3);
    unaff_r14[0x1b] = iVar1;
    uVar2 = 1;
    iVar1 = unaff_r14[0x1e] + 1;
    memset(unaff_r14[0x1b], 1, iVar1);
    *(short *)(*(int *)unaff_r14[4] + 0xc) = (short)unaff_r14[0x1c] << 2;
    unaff_r14[0xb] = -1;
    asr_fill_loop_10fa6c(unaff_r14, uVar2, iVar1);
    return 0;
}
