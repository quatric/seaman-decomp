/* Seaman (USA) region 0x8c1e0000-0x8c1f0000 (Ghidra decompiler, cleaned up by tools/readable.py) */

#include "seaman.h"
#include "globals.h"

/*
 * crt0_start  0x8c1ef400
 */
u32 crt0_start(u32 unused_a0, u32 unused_a1, u32 unused_a2, u32 a3) {
    u32 uVar1;
    u32 *a4;
    u32 *a5;

    a5 = 0x8c00f400;
    uVar1 = 0x41474553;
    a4 = 0x8c00c000;
    do {
        *a4 = uVar1;
        a4 = a4 + 1;
    } while (a4 < a5);
    crt_init_sections();
    lib_handles_add_all_wrap();
    main(a4, a5, uVar1, a3);
    uVar1 = lib_handles_remove_all_wrap();
    return uVar1;
}

/*
 * lib_handles_add_all_wrap  0x8c1ef430
 * only calls lib_handles_add_all
 * called by: crt0_start
 */
u32 lib_handles_add_all_wrap(void) {
    u32 uVar1;

    uVar1 = lib_handles_add_all(*(u32 *)(&DATA_8c26be70));
    return uVar1;
}

/*
 * lib_handles_remove_all_wrap  0x8c1ef438
 * only calls lib_handles_remove_all
 * called by: crt0_start
 */
u32 lib_handles_remove_all_wrap(void) {
    u32 uVar1;

    uVar1 = lib_handles_remove_all(*(u32 *)(&DATA_8c26be70));
    return uVar1;
}

/*
 * crt_init_sections  0x8c1ef440
 * start-up: zeroes the two BSS ranges and copies the two initialised-data ranges from their load addresses
 * called by: crt0_start
 */
u32 crt_init_sections(void) {
    u8 uVar1;
    u8 *puVar2;
    u8 *puVar3;
    u32 in_r0;
    u32 *puVar4;
    u8 *puVar5;
    u8 *puVar6;

    puVar2 = (&DATA_8c125404);
    for (puVar4 = *(u32 **)(&DATA_8c1253f8); puVar3 = (&DATA_8c1253f4), puVar4 < *(u32 **)puVar2; puVar4 = puVar4 + 1) {
        *puVar4 = 0;
    }
    puVar6 = *(u8 **)(&DATA_8c1253e0);
    for (puVar5 = *(u8 **)(&DATA_8c1253e8); puVar2 = (&DATA_8c26bea4), puVar5 < *(u8 **)puVar3; puVar5 = puVar5 + 1) {
        uVar1 = *puVar6;
        puVar6 = puVar6 + 1;
        *puVar5 = uVar1;
    }
    for (puVar5 = *(u8 **)(&DATA_8c26be98); puVar3 = (&DATA_8c26be94), puVar5 < *(u8 **)puVar2; puVar5 = puVar5 + 1) {
        *puVar5 = 0;
    }
    puVar6 = *(u8 **)(&DATA_8c26be80);
    for (puVar5 = *(u8 **)(&DATA_8c26be88); puVar5 < *(u8 **)puVar3; puVar5 = puVar5 + 1) {
        uVar1 = *puVar6;
        puVar6 = puVar6 + 1;
        *puVar5 = uVar1;
    }
    return in_r0;
}

/*
 * shinobi_vsync_callbacks  0x8c1ef4fa
 * on alternate calls counts the frame, runs the PVR/TA update and calls each registered vsync callback
 */
u32 shinobi_vsync_callbacks(u32 unused_a0, u32 unused_a1, u32 a2, u32 a3, u32 ain0) {
    u32 uVar1;
    u32 in_r3;
    u8 *puVar2;
    u8 *a5;
    u32 *puVar3;
    int *piVar4;

    uVar1 = ain0 & in_r3 | 0xf0;
    puVar2 = &g_8c470e90;
    if (g_8c470e90 == 0) {
        g_8c470bec = g_8c470bec + 1;
        pvr_1efaf4(&g_8c470e90, unused_a1, a2, a3);
        uVar1 = ta_fifo_1ef558();
        a5 = &g_8c470920;
        piVar4 = (int *)&g_8c470920;
        puVar2 = &g_8c470920;
        puVar3 = (u32 *)&g_8c470920;
        do {
            if (*piVar4 != 0) {
                uVar1 = (*(code *)*puVar3)(puVar2, a5, a2, a3);
            }
            piVar4 = piVar4 + 1;
            puVar3 = puVar3 + 1;
        } while (piVar4 < &g_8c4709a0);
    } else {
        g_8c470e90 = 0;
        g_8c470e94 = g_8c470e94 + 1;
    }
    return uVar1;
}

/*
 * ta_fifo_1ef558  0x8c1ef558
 * called by: shinobi_vsync_callbacks
 */
u32 ta_fifo_1ef558(void) {
    int *piVar1;
    u32 in_r0;
    int iVar2;
    u32 uVar3;
    int iVar4;
    u32 auStack_10[2];

    if (g_8c470e70 != 0) {
        iVar4 = g_8c470e70 + -1;
        iVar2 = (int)0x10f4;
        uVar3 = (0x8c470e98 & 0x1fffffe0) + 0x20;
        *(u32 *)(0xa0000000 | uVar3) = iVar4 * 0x10000 | 0x80000200;
        piVar1 = 0x8c4727b4;
        g_8c470e90 = 1;
        *(u32 *)(*(int *)(iVar2 + *piVar1) + 4) = uVar3;
        *(u32 *)(*(int *)(iVar2 + *piVar1) + 0x18) = 1;
        auStack_10[0] = 1;
        in_r0 = shinobi_uses_addr_to_physical_1f4cb8(iVar4 * 6, 9, auStack_10, 1, 0, 0);
        g_8c470e78 = g_8c470e70;
    }
    return in_r0;
}

/*
 * maple_port_info_refresh  0x8c1ef640
 * copies the 24 0x2c-byte port records at (0x8c4727b4)+0x28 into the 0x18-byte records at 0x8c4709a0
 * called by: pvr_1ef84c, pvr_1efaf4, shinobi_input_1ef78c, shinobi_input_1ef7e6
 */
int maple_port_info_refresh(void) {
    char cVar1;
    u8 *puVar2;
    u8 *puVar3;
    int iVar4;

    iVar4 = 0;
    puVar2 = (u8 *)(g_8c4727b4 + 0x28);
    puVar3 = 0x8c4709a0;
    do {
        iVar4 = iVar4 + 1;
        *puVar3 = *puVar2;
        puVar3[1] = puVar2[1];
        puVar3[2] = puVar2[2];
        puVar3[3] = puVar2[3];
        *(u32 *)(puVar3 + 8) = *(u32 *)(puVar2 + 0x10);
        puVar3[4] = puVar2[8];
        puVar3[5] = puVar2[9];
        puVar3[6] = puVar2[10];
        cVar1 = puVar2[0xb];
        puVar3[7] = cVar1;
        *(u32 *)(puVar3 + 0xc) = *(u32 *)(puVar2 + 0x14);
        puVar3 = puVar3 + 0x18;
        puVar2 = puVar2 + 0x2c;
    } while (iVar4 < 0x18);
    return (int)cVar1;
}

/*
 * shinobi_register_pvr_irqs_entry  0x8c1ef682
 * alternate entry of shinobi_register_pvr_irqs
 * called by: shinobi_input_1ef78c, shinobi_input_1ef7e6
 */
u32 shinobi_register_pvr_irqs_entry(void) {
    u8 *puVar1;
    u8 *puVar2;
    u32 *puVar3;
    u8 *puVar4;
    u32 *puVar5;
    u32 *puVar6;
    u32 uVar7;
    int iVar8;

    puVar3 = 0x8c470910;
    puVar2 = (&ta_uses_ret_const_1_1fa244);
    puVar1 = (&DATA_8c26bf98);
    uVar7 =
        (*(code *)(&ta_uses_ret_const_1_1fa244))((int)0x900, (&DATA_8c1ef4e4), *(u32 *)(&DATA_8c26bf98), 0, 0x8c4727c4);
    puVar4 = (&DATA_8c1ef4f0);
    iVar8 = (int)0xa00;
    *puVar3 = uVar7;
    uVar7 = (*(code *)puVar2)(iVar8, puVar4, *(u32 *)(puVar1 + 4), 0);
    puVar4 = (&DATA_8c1ef5ca);
    iVar8 = (int)0xa00;
    puVar3[1] = uVar7;
    uVar7 = (*(code *)puVar2)(iVar8, puVar4, *(u32 *)(puVar1 + 8), 0);
    puVar4 = (&DATA_8c1ef5d2);
    iVar8 = (int)0xa20;
    puVar3[2] = uVar7;
    uVar7 = (*(code *)puVar2)(iVar8, puVar4, *(u32 *)(puVar1 + 0xc), 0);
    puVar5 = 0x8c470c18;
    puVar3[3] = uVar7;
    puVar6 = 0x8c470e68;
    puVar3 = 0x8c470e64;
    *puVar5 = 0;
    *puVar3 = 0;
    *puVar6 = 0;
    puVar1 = (&memset);
    g_8c470e6c = 0;
    g_8c470e70 = 0;
    g_8c470e78 = 0;
    g_8c470e74 = 0xffffffff;
    g_8c470e8c = 0;
    g_8c470e90 = 0;
    g_8c470e94 = 0;
    (*(code *)puVar1)(0x8c470be0, 0, 0x38);
    (*(code *)puVar1)(0x8c4709a0, 0, (int)0x240);
    (*(code *)puVar1)(0x8c470c20, 0, (int)0x240);
    uVar7 = (*(code *)puVar1)(0x8c470920, 0, (int)0x80);
    return uVar7;
}

/*
 * shinobi_register_pvr_irqs  0x8c1ef686
 * registers the four PVR interrupt handlers (events 0x900, 0xa00, 0xa00, 0xa20) and clears the vsync state and callback
 * tables
 */
u32 shinobi_register_pvr_irqs(u32 unused_a0, u32 unused_a1, u32 unused_a2, u32 a3) {
    u8 *puVar1;
    u8 *puVar2;
    u32 *puVar3;
    u8 *puVar4;
    u32 *puVar5;
    u32 *puVar6;
    u32 uVar7;
    int iVar8;
    u32 a7;

    puVar3 = 0x8c470910;
    puVar2 = (&ta_uses_ret_const_1_1fa244);
    puVar1 = (&DATA_8c26bf98);
    uVar7 = (*(code *)(&ta_uses_ret_const_1_1fa244))((int)0x900, (&DATA_8c1ef4e4), *(u32 *)(&DATA_8c26bf98), a3);
    puVar4 = (&DATA_8c1ef4f0);
    iVar8 = (int)0xa00;
    *puVar3 = uVar7;
    uVar7 = (*(code *)puVar2)(iVar8, puVar4, *(u32 *)(puVar1 + 4), 0);
    puVar4 = (&DATA_8c1ef5ca);
    iVar8 = (int)0xa00;
    puVar3[1] = uVar7;
    uVar7 = (*(code *)puVar2)(iVar8, puVar4, *(u32 *)(puVar1 + 8), 0);
    puVar4 = (&DATA_8c1ef5d2);
    a7 = 0;
    iVar8 = (int)0xa20;
    puVar3[2] = uVar7;
    uVar7 = (*(code *)puVar2)(iVar8, puVar4, *(u32 *)(puVar1 + 0xc), 0);
    puVar5 = 0x8c470c18;
    puVar3[3] = uVar7;
    puVar6 = 0x8c470e68;
    puVar3 = 0x8c470e64;
    *puVar5 = 0;
    *puVar3 = 0;
    *puVar6 = 0;
    puVar1 = (&memset);
    g_8c470e6c = 0;
    g_8c470e70 = 0;
    g_8c470e78 = 0;
    g_8c470e74 = 0xffffffff;
    g_8c470e8c = 0;
    g_8c470e90 = 0;
    g_8c470e94 = 0;
    (*(code *)puVar1)(0x8c470be0, 0, 0x38, a7);
    (*(code *)puVar1)(0x8c4709a0, 0, (int)0x240, a7);
    (*(code *)puVar1)(0x8c470c20, 0, (int)0x240, a7);
    uVar7 = (*(code *)puVar1)(0x8c470920, 0, (int)0x80, a7);
    return uVar7;
}

/*
 * shinobi_input_1ef78c  0x8c1ef78c
 * area name: in the shinobi library code range; behaviour name: mostly calls input functions
 * called by: irq_input_1f5dd0
 */
u32 shinobi_input_1ef78c(u32 a0, u32 a1) {
    u8 *a4;
    u32 uVar1;
    u32 a5;
    u32 a7;

    a4 = (&DATA_8c1f5a28);
    *(u32 *)(&DATA_8c1f5a28) = *(u32 *)(&DATA_8c1f5a28) | 0xa0000000;
    shinobi_register_pvr_irqs_entry();
    a5 = 0xc000;
    a7 = 0xc000;
    uVar1 = shinobi_input_1f3dd8(a1, 0xc000, a0, 0xc000);
    maple_port_info_refresh();
    g_8c470e60 = 1;
    return uVar1;
}

/*
 * shinobi_input_1ef7e6  0x8c1ef7e6
 * area name: in the shinobi library code range; behaviour name: mostly calls input functions
 * called by: shinobi_input_1f5ea8
 */
u32 shinobi_input_1ef7e6(u32 a0, u32 a1, u32 a2, u32 a3) {
    u8 *a4;
    u32 uVar1;

    a4 = (&DATA_8c1f5a28);
    *(u32 *)(&DATA_8c1f5a28) = *(u32 *)(&DATA_8c1f5a28) | 0xa0000000;
    shinobi_register_pvr_irqs_entry();
    uVar1 = shinobi_input_1f3ef4(a0, a1, a2, a3);
    maple_port_info_refresh();
    g_8c470e60 = 1;
    return uVar1;
}

/*
 * pvr_1ef84c  0x8c1ef84c
 */
int pvr_1ef84c(u32 unused_a0, u32 *unused_a1, u32 unused_a2, u32 a3) {
    u16 uVar1;
    u32 *puVar2;
    u32 *puVar3;
    int *piVar4;
    int *piVar5;
    int *a4;
    int a7;
    int *in_r2;
    int *piVar6;
    int *ar6_00;
    u32 uVar7;

    ar6_00 = 0x8c470e70;
    piVar6 = 0x8c470e78;
    uVar1 = 0x3ff;
    if (*in_r2 == 0) {
        a7 = 0;
    } else {
        uVar7 = (u32)(short)0x3ff;
        g_8c470e74 = g_8c470e78 + -1;
        *piVar6 = 0;
        puVar3 = 0x8c470e7c;
        puVar2 = 0xa05f80c4;
        if (*ar6_00 != 0) {
            g_8c470e7c = *0xa05f80c4 & uVar7;
            puVar3[1] = (int)(short)((u16)(*puVar2 >> 0x10) & uVar1);
            unused_a1 = puVar2;
        }
        piVar6 = 0x8c470e6c;
        *ar6_00 = 0;
        if (*piVar6 != 0) {
            *0xa05f8040 = g_8c470e68;
            *0xa05f80e8 = *0xa05f80e8 & 0xfffffff7;
            *piVar6 = 0;
        }
        piVar5 = 0x8c470be0;
        piVar4 = 0x8c470c18;
        puVar2 = 0xa05f6908;
        if ((*0xa05f6908 & (int)0xf00) == 0) {
            a7 = shinobi_uses_libgcc_divide_helper_1f4202();
            a4 = 0x8c470e64;
            if (a7 < 0) {
                pvr_1efaf4(piVar6, unused_a1, ar6_00, a3);
                piVar5[4] = piVar5[4] + 1;
                if (*piVar4 != 0) {
                    (*(code *)*piVar4)(1, 0xfffffff9, piVar5[2], a7);
                }
            } else {
                g_8c470e90 = 0;
                *(u16 *)((int)piVar5 + *a4 * 2 + 0x34) = 0;
                *(u16 *)((int)piVar5 + *a4 * 2 + 0x2c) = (u16) * 0xa05f810c & uVar1;
                maple_port_info_refresh();
                *piVar5 = *piVar5 + 1;
            }
        } else {
            if (((*0xa05f6908 & (int)0x800) != 0) && (0x8c470be0 [7] = 0x8c470be0 [7] + 1, *piVar4 != 0)) {
                a3 = *puVar2;
                ar6_00 = (int *)piVar5[2];
                unused_a1 = (u32 *)0xfffffffe;
                piVar6 = (int *)0x1;
                (*(code *)*piVar4)(1, 0xfffffffe, ar6_00, a3);
            }
            if (((*puVar2 & (int)0x400) != 0) && (piVar5[8] = piVar5[8] + 1, *piVar4 != 0)) {
                a3 = *puVar2;
                ar6_00 = (int *)piVar5[2];
                unused_a1 = (u32 *)0xfffffffd;
                piVar6 = (int *)0x1;
                (*(code *)*piVar4)(1, 0xfffffffd, ar6_00, a3);
            }
            if (((*puVar2 & (int)0x200) != 0) && (piVar5[9] = piVar5[9] + 1, *piVar4 != 0)) {
                a3 = *puVar2;
                ar6_00 = (int *)piVar5[2];
                unused_a1 = (u32 *)0xfffffffc;
                piVar6 = (int *)0x1;
                (*(code *)*piVar4)(1, 0xfffffffc, ar6_00, a3);
            }
            if (((*puVar2 & (int)0x100) != 0) && (piVar5[10] = piVar5[10] + 1, *piVar4 != 0)) {
                a3 = *puVar2;
                ar6_00 = (int *)piVar5[2];
                unused_a1 = (u32 *)0xfffffffb;
                piVar6 = (int *)0x1;
                (*(code *)*piVar4)(1, 0xfffffffb, ar6_00, a3);
            }
            *puVar2 = (int)0xf00;
            pvr_1efaf4(piVar6, unused_a1, ar6_00, a3);
            a7 = shinobi_uses_libgcc_divide_helper_1f4202();
            if (a7 < 0) {
                if (*piVar4 != 0) {
                    (*(code *)*piVar4)(1, 0xfffffffa, piVar5[2], a7);
                }
            } else {
                maple_port_info_refresh();
            }
        }
    }
    return a7;
}

/*
 * maple_first_port_bit2_pressed  0x8c1efa2a
 * returns 1 + the first enabled maple port whose controller bit 2 newly reads 0 (pressed, active low), or 0
 * called by: pvr_1efaf4
 */
u32 maple_first_port_bit2_pressed(u32 unused_a0, u32 a1) {
    u8 bVar1;
    int iVar2;
    int iVar3;
    int iVar4;
    u32 *puVar5;
    u32 uVar6;
    u8 *pbVar7;
    u32 uVar8;

    iVar3 = 0x8c470ed8;
    iVar2 = 0x8c470edc;
    bVar1 = *(u8 *)((int)0xfb0 + g_8c4727b4);
    uVar8 = 0;
    do {
        if (3 < (int)uVar8) {
            return 0;
        }
        if ((int)uVar8 < 0) {
            uVar6 = 1 >> (~uVar8 & 0x1f) + 1;
        } else {
            uVar6 = 1 << (uVar8 & 0x1f);
        }
        if ((uVar6 & bVar1) != 0) {
            pbVar7 = (&DATA_8c26bfac) + uVar8;
            iVar4 = maple_port_info((u32)*pbVar7, a1);
            puVar5 = (u32 *)maple_port_status((u32)*pbVar7);
            *(u8 *)(uVar8 + iVar3) = *(u8 *)(uVar8 + iVar2);
            if ((((*puVar5 & 0x80) != 0) && (*(char *)(iVar4 + 2) == '\0')) && (*(char *)(iVar4 + 4) == '\b')) {
                uVar6 = (int)*(char *)(*(int *)(iVar4 + 8) + 8) & 4;
                *(char *)(uVar8 + iVar2) = (char)uVar6;
                a1 = (int)*(char *)(uVar8 + iVar3) ^ uVar6;
                if ((uVar6 == 0) && (a1 = a1 & 0xff, a1 != 0)) {
                    return uVar8 + 1;
                }
            }
        }
        uVar8 = uVar8 + 1;
    } while (true);
}

/*
 * pvr_1efaf4  0x8c1efaf4
 * called by: maple_all_status_request_hooked, maple_all_status_request_sync, maple_block_complete_hooked,
 * maple_block_complete_sync, maple_block_read_hooked, maple_block_read_sync, maple_block_write_hooked,
 * maple_block_write_sync (+20 more)
 */
int pvr_1efaf4(u32 a0, u32 unused_a1, u32 a2, u32 a3) {
    int *piVar1;
    int iVar2;
    int *piVar3;
    u32 *puVar4;
    int a7;
    int iVar5;
    u32 a7_00;
    code *pcVar6;
    int iVar7;
    int a5;
    u32 a5_00;
    u32 *puVar8;

    iVar2 = 0x8c470be0;
    piVar1 = 0x8c4727b4;
    a7 = maple_try_lock();
    if (a7 == -2) {
        *(u32 *)((int)0x10e8 + *piVar1) = 1;
    } else if (a7 < 0) {
        if ((code *)*0x8c470c18 != NULL) {
            (*(code *)*0x8c470c18)(2, 0xfffffff8, *(u32 *)(iVar2 + 8), a7);
        }
    } else {
        shinobi_calls_update_fields_1f442a();
        a5 = (int)(short)0x3ff;
        iVar7 = g_8c470e64 * 2;
        *(u16 *)(iVar2 + 0x30 + iVar7) =
            ((u16) * 0xa05f810c & 0x3ff) + *(short *)(iVar2 + 0x34 + iVar7) * ((u16) * 0xa05f80dc & 0x3ff);
        maple_port_info_refresh();
        shinobi_update_fields_1f4414();
        iVar5 = shinobi_calc_1f4734();
        if (iVar5 != 0) {
            if (((code *)*0x8c470c1c == NULL) || (iVar5 = (*(code *)*0x8c470c1c)(iVar7, a5, a2, a3), iVar5 != 0)) {
                iVar5 = maple_first_port_bit2_pressed(iVar7, a5);
                g_8c470e70 = iVar5;
            }
            puVar8 = 0xa05f8040;
            if ((*(int *)((int)0xfbc + *piVar1) != 0) && (g_8c470e70 != 0)) {
                g_8c470e68 = *0xa05f8040;
                *puVar8 = *(u32 *)(*piVar1 + (int)0xfbc);
                *0xa05f80e8 = *0xa05f80e8 | 8;
                piVar3 = 0x8c470e8c;
                g_8c470e6c = 1;
                *piVar3 = *piVar3 + 1;
            }
        }
        puVar8 = 0x8c470c20;
        for (iVar5 = 0; puVar4 = 0x8c470e64, iVar5 < 0x30; iVar5 = iVar5 + 1) {
            a7_00 = a3;
            if (puVar8[2] != 0) {
                a5_00 = puVar8[1];
                iVar7 = thunk_FUN_8c1f461c();
                a7_00 = a3;
                if (iVar7 != 0) {
                    pcVar6 = (code *)puVar8[2];
                    puVar8[2] = 0;
                    a7_00 = maple_port_status(*puVar8);
                    a2 = maple_port_info(*puVar8, a5_00);
                    (*pcVar6)(*puVar8, puVar8[1], a2, a7_00);
                }
            }
            puVar8 = puVar8 + 3;
            a3 = a7_00;
        }
        *(u32 *)((int)0x10e8 + *piVar1) = 0;
        *puVar4 = *puVar4 ^ 1;
        *(int *)(iVar2 + 4) = *(int *)(iVar2 + 4) + 1;
    }
    return a7;
}

/*
 * pvr_uses_memset_1efcae  0x8c1efcae
 * area name: sits between pvr functions (same compilation unit); behaviour name: its main named callee is memset
 * called by: device_info_table_reset, device_info_table_reset_alt
 */
u32 pvr_uses_memset_1efcae(u32 a0, u32 a1, u32 a2, u32 a3) {
    u8 *puVar1;
    int iVar2;
    u32 ar4_00;
    u8 in_MD;
    u8 bVar3;
    u8 in_RB;
    u8 bVar4;
    u8 in_BL;
    u8 bVar5;
    u8 in_FD;
    u8 bVar6;
    u8 in_M;
    u8 extraout_M;
    u8 in_Q;
    u8 extraout_Q;
    u8 in_IMASK;
    u8 bVar7;
    u8 in_S;
    u8 extraout_S;
    u8 in_T;
    u8 extraout_T;

    bVar5 = (u8)(((u32)in_BL << 0x1c) >> 0x18);
    bVar3 = bVar5 | (u8)(((u32)in_RB << 0x1d) >> 0x18);
    bVar7 = (u8)((((u32)in_T | (u32)in_S << 1 | (u32)in_IMASK << 4) & 0xf0) >> 4);
    bVar6 = (u8)((((u32)in_Q << 8 | (u32)in_M << 9 | (u32)in_FD << 0xf) & 0x8000) >> 0xf);
    bVar5 = (bVar5 & 0x10) >> 4;
    bVar4 = (bVar3 & 0x20) >> 5;
    bVar3 = ((bVar3 | (u8)(((u32)in_MD << 0x1e) >> 0x18)) & 0x40) >> 6;
    *0xa05f6920 = *0xa05f6920 & (int)(int)0xffffcfff;
    iVar2 = 0x8c470910;
    puVar1 = (&shinobi_uses_ret_const_1_1fa54c);
    shinobi_uses_ret_const_1_1fa54c(*(u32 *)(0x8c470910 + 0xc));
    (*(code *)puVar1)(*(u32 *)(iVar2 + 0x10), a1, a2, a3);
    (*(code *)puVar1)(*(u32 *)(iVar2 + 8), a1, a2, a3);
    ar4_00 = *(u32 *)(iVar2 + 4);
    (*(code *)puVar1)(ar4_00, a1, a2, a3);
    shinobi_uses_sh4_tmu_1f44cc(ar4_00, a1, a2, a3);
    memset(0x8c4709a0, 0, (int)0x240);
    return ((u32)in_T | (u32)in_S << 1 | (u32)in_IMASK << 4) & 0xf0 |
           ((u32)extraout_T | (u32)extraout_S << 1 | (u32)bVar7 << 4 | (u32)extraout_Q << 8 | (u32)extraout_M << 9 |
            (u32)bVar6 << 0xf | (u32)bVar5 << 0x1c | (u32)bVar4 << 0x1d | (u32)bVar3 << 0x1e) &
               (int)(int)0xffffff0f;
}

/*
 * maple_port_info  0x8c1efd14
 * the 0x18-byte device record of port a0 (0x8c4709a0)
 * called by: alt_entry_2020ba, alt_entry_202280, alt_entry_202550, maple_device_ready, maple_device_ready_idle,
 * maple_first_port_bit2_pressed, pvr_1efaf4, shinobi_input_1fd008 (+9 more)
 */
int maple_port_info(int a0, u32 a1) {
    return a0 * 0x18 + 0x8c4709a0;
}

/*
 * maple_port_status  0x8c1efd26
 * status flags of port a0
 * called by: bios_input_1f3b5c, bios_input_1f3d28, irq_input_1f5dd0, maple_device_ready, maple_device_ready_idle,
 * maple_first_port_bit2_pressed, maple_port_status_wrap, pvr_1efaf4 (+6 more)
 */
u32 maple_port_status(u32 a0) {
    u32 uVar1;

    uVar1 = shinobi_calc_1f45c8(a0);
    return uVar1;
}

/*
 * shinobi_calls_calc_1efd34  0x8c1efd34
 * area name: in the shinobi library code range; behaviour name: its callees mostly do: calc
 * called by: shinobi_uses_libgcc_divide_helper_202a30, shinobi_uses_libgcc_divide_helper_202a34
 */
u32 shinobi_calls_calc_1efd34(u32 a0) {
    u32 uVar1;

    uVar1 = shinobi_calc_1f45da(a0);
    return uVar1;
}

/*
 * thunk_FUN_8c1f461c  0x8c1efd42
 * called by: pvr_1efaf4, shinobi_calls_one_201f8a, shinobi_input_1fd008, shinobi_input_1fd1e2, shinobi_input_1fd312
 */
u32 thunk_FUN_8c1f461c(void) {
    u32 uVar1;

    uVar1 = shinobi_calls_calc_1f461c();
    return uVar1;
}

/*
 * maple_device_request_hooked  0x8c1efd7c
 * maple_device_request_locked, then the PVR hook when +0x10e8 is set
 * called by: alt_entry_202786, shinobi_input_202424, shinobi_uses_maple_device_reset_hooked_202782
 */
u32 maple_device_request_hooked(u32 a0, u32 unused_a1, u32 a2, u32 a3) {
    u32 uVar1;

    uVar1 = maple_device_request_locked(a0);
    if (*(int *)((int)0x10e8 + g_8c4727b4) != 0) {
        pvr_1efaf4(a0, unused_a1, a2, a3);
    }
    return uVar1;
}

/*
 * maple_all_status_request_hooked  0x8c1efda2
 * maple_all_status_request_locked, then the PVR hook when +0x10e8 is set
 */
u32 maple_all_status_request_hooked(u32 a0, u32 unused_a1, u32 a2, u32 a3) {
    u32 uVar1;

    uVar1 = maple_all_status_request_locked(a0);
    if (*(int *)((int)0x10e8 + g_8c4727b4) != 0) {
        pvr_1efaf4(a0, unused_a1, a2, a3);
    }
    return uVar1;
}

/*
 * maple_device_reset_hooked  0x8c1efdc8
 * maple_device_reset_locked, then the PVR hook when +0x10e8 is set
 * called by: alt_entry_202786, shinobi_input_202424, shinobi_uses_maple_device_reset_hooked_202782
 */
u32 maple_device_reset_hooked(u32 a0, u32 unused_a1, u32 a2, u32 a3) {
    u32 uVar1;

    uVar1 = maple_device_reset_locked(a0);
    if (*(int *)((int)0x10e8 + g_8c4727b4) != 0) {
        pvr_1efaf4(a0, unused_a1, a2, a3);
    }
    return uVar1;
}

/*
 * maple_device_kill_hooked  0x8c1efdee
 * maple_device_kill_locked, then the PVR hook when +0x10e8 is set
 */
u32 maple_device_kill_hooked(u32 a0, u32 unused_a1, u32 a2, u32 a3) {
    u32 uVar1;

    uVar1 = maple_device_kill_locked(a0);
    if (*(int *)((int)0x10e8 + g_8c4727b4) != 0) {
        pvr_1efaf4(a0, unused_a1, a2, a3);
    }
    return uVar1;
}

/*
 * maple_get_condition_hooked  0x8c1efe14
 * maple_get_condition_locked, then the PVR hook when +0x10e8 is set
 */
u32 maple_get_condition_hooked(u32 a0, u32 a1, u32 a2, u32 a3) {
    u32 uVar1;

    uVar1 = maple_get_condition_locked(a0, a1);
    if (*(int *)((int)0x10e8 + g_8c4727b4) != 0) {
        pvr_1efaf4(a0, a1, a2, a3);
    }
    return uVar1;
}

/*
 * maple_get_mem_info_hooked  0x8c1efe3a
 * maple_get_mem_info_locked, then the PVR hook when +0x10e8 is set
 * called by: shinobi_input_1fd008
 */
u32 maple_get_mem_info_hooked(u32 a0, u32 a1, u32 a2, u32 a3) {
    u32 uVar1;

    uVar1 = maple_get_mem_info_locked(a0, a1, a2);
    if (*(int *)((int)0x10e8 + g_8c4727b4) != 0) {
        pvr_1efaf4(a0, a1, a2, a3);
    }
    return uVar1;
}

/*
 * maple_block_read_hooked  0x8c1efe80
 * maple_block_read_locked, then the PVR hook when +0x10e8 is set
 * called by: shinobi_input_1fd1e2
 */
u32 maple_block_read_hooked(u32 a0, u32 a1, u32 a2, u32 a3) {
    u32 uVar1;

    uVar1 = maple_block_read_locked(a0, a1, a2, a3);
    if (*(int *)((int)0x10e8 + g_8c4727b4) != 0) {
        pvr_1efaf4(a0, a1, a2, a3);
    }
    return uVar1;
}

/*
 * maple_block_write_hooked  0x8c1efeac
 * maple_block_write_locked, then the PVR hook when +0x10e8 is set
 * called by: bios_input_1f3c78, bios_input_1f3cde, shinobi_input_1fd312
 */
u32 maple_block_write_hooked(u32 a0, u32 a1, u32 a2, u32 a3) {
    u32 uVar1;

    uVar1 = maple_block_write_locked(a0, a1, a2, a3);
    if (*(int *)((int)0x10e8 + g_8c4727b4) != 0) {
        pvr_1efaf4(a0, a1, a2, a3);
    }
    return uVar1;
}

/*
 * maple_block_complete_hooked  0x8c1efee0
 * maple_block_complete_locked, then the PVR hook when +0x10e8 is set
 * called by: shinobi_input_1fd312
 */
u32 maple_block_complete_hooked(u32 a0, u32 a1, u32 a2, u32 a3) {
    u32 uVar1;

    uVar1 = maple_block_complete_locked(a0, a1, a2, a3);
    if (*(int *)((int)0x10e8 + g_8c4727b4) != 0) {
        pvr_1efaf4(a0, a1, a2, a3);
    }
    return uVar1;
}

/*
 * maple_cmd16_func20_hooked  0x8c1eff0c
 * maple_cmd16_func20_locked, then the PVR hook when +0x10e8 is set
 */
u32 maple_cmd16_func20_hooked(u32 a0, u32 a1, u32 a2, u32 a3) {
    u32 uVar1;

    uVar1 = maple_cmd16_func20_locked(a0, a1);
    if (*(int *)((int)0x10e8 + g_8c4727b4) != 0) {
        pvr_1efaf4(a0, a1, a2, a3);
    }
    return uVar1;
}

/*
 * maple_cmd15_func10_hooked  0x8c1eff32
 * maple_cmd15_func10_locked, then the PVR hook when +0x10e8 is set
 * called by: alt_entry_202786, shinobi_uses_maple_cmd15_func10_hooked_202342,
 * shinobi_uses_maple_device_reset_hooked_202782
 */
u32 maple_cmd15_func10_hooked(u32 a0, u32 a1, u32 a2, u32 a3) {
    u32 uVar1;

    uVar1 = maple_cmd15_func10_locked(a0, a1);
    if (*(int *)((int)0x10e8 + g_8c4727b4) != 0) {
        pvr_1efaf4(a0, a1, a2, a3);
    }
    return uVar1;
}

/*
 * maple_set_condition_hooked  0x8c1eff58
 * maple_set_condition_locked, then the PVR hook when +0x10e8 is set
 * called by: irq_input_1f5d6c
 */
u32 maple_set_condition_hooked(u32 a0, u32 a1, u32 a2, u32 a3) {
    u32 uVar1;

    uVar1 = maple_set_condition_locked(a0, a1, a2, a3);
    if (*(int *)((int)0x10e8 + g_8c4727b4) != 0) {
        pvr_1efaf4(a0, a1, a2, a3);
    }
    return uVar1;
}

/*
 * maple_queue_frame_wrap_hooked  0x8c1eff9c
 * maple_queue_frame_wrap_locked, then the PVR hook when +0x10e8 is set
 */
u32 maple_queue_frame_wrap_hooked(u32 a0, u32 unused_a1, u32 a2, u32 a3) {
    u32 uVar1;

    uVar1 = maple_queue_frame_wrap_locked(a0);
    if (*(int *)((int)0x10e8 + g_8c4727b4) != 0) {
        pvr_1efaf4(a0, unused_a1, a2, a3);
    }
    return uVar1;
}

/*
 * shinobi_draw_1effc2  0x8c1effc2
 * area name: in the shinobi library code range; behaviour name: mostly calls draw functions
 */
u32 shinobi_draw_1effc2(u32 a0, u32 unused_a1, u32 a2, u32 a3) {
    u32 uVar1;

    uVar1 = thunk_FUN_8c1f4ec6(a0);
    if (*(int *)((int)0x10e8 + g_8c4727b4) != 0) {
        pvr_1efaf4(a0, unused_a1, a2, a3);
    }
    return uVar1;
}

/*
 * thunk_FUN_8c1f4636  0x8c1effee
 * called by: maple_device_ready_idle, shinobi_input_1fd008, shinobi_input_1fd1e2, shinobi_input_1fd312
 */
u32 thunk_FUN_8c1f4636(void) {
    u32 uVar1;

    uVar1 = shinobi_calls_calc_1f4636();
    return uVar1;
}

/*
 * thunk_FUN_8c1f4646  0x8c1efff4
 * called by: shinobi_input_1fd008
 */
u32 thunk_FUN_8c1f4646(void) {
    u32 uVar1;

    uVar1 = shinobi_calls_calc_1f4646();
    return uVar1;
}

/*
 * bitmask_table_find  0x8c1efffa
 * entry a1 of a table whose first word flags which of 32 entries follow; NULL if absent
 * called by: maple_argun_info, maple_clock_info, maple_controller_caps, maple_lcd_info, maple_mic_info,
 * maple_storage_info, maple_vibration_info
 */
u32 *bitmask_table_find(u32 *a0, u32 a1) {
    int iVar1;
    u32 *puVar2;
    u32 uVar3;
    u32 *puVar4;

    puVar2 = a0 + 1;
    puVar4 = a0 + 1;
    iVar1 = 0;
    uVar3 = 0x80000000;
    do {
        if ((uVar3 & *a0) != 0) {
            if (a1 == uVar3) {
                return puVar4;
            }
            puVar2 = puVar2 + 1;
            puVar4 = puVar2;
        }
        iVar1 = iVar1 + 1;
        uVar3 = uVar3 >> 1;
    } while (iVar1 < 0x20);
    return (u32 *)0;
}
