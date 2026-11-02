/* Seaman (USA) region 0x8c010000-0x8c020000 (Ghidra decompiler, cleaned up by tools/readable.py) */

#include "seaman.h"
#include "globals.h"

/*
 * run_atexit_list  0x8c010080
 * pops and calls every handler on the exit list at 8c2787a0
 * called by: system_init_libs
 */
u32 *run_atexit_list(u32 unused_a0, u32 unused_a1, u32 a2, u32 a3) {
    u32 *puVar1;

    while (true) {
        puVar1 = (u32 *)*0x8c2787a0;
        if (puVar1 == NULL)
            break;
        g_8c2787a0 = *puVar1;
        (*(code *)puVar1[1])(puVar1[2], 0xffffffff, a2, a3);
    }
    return 0x8c2787a0;
}

/*
 * run_static_ctors  0x8c0100b0
 * calls each function of the static constructor table at 8c12c410 until a null entry
 * called by: startup_init_hardware
 */
u32 run_static_ctors(u32 a0, u32 a1, u32 a2, u32 a3) {
    u32 in_r0;
    u32 *puVar1;

    puVar1 = (u32 *)(&DATA_8c12c410);
    if ((&DATA_8c12c410) != NULL) {
        while (true) {
            in_r0 = 0;
            if ((code *)*puVar1 == NULL)
                break;
            (*(code *)*puVar1)();
            puVar1 = puVar1 + 1;
        }
    }
    return in_r0;
}

/*
 * call_function_list  0x8c0100b6
 * calls each function of the null-terminated list in r13
 */
u32 call_function_list(u32 a0, u32 a1, u32 a2, u32 a3) {
    u32 in_r0;
    u32 *unaff_r13;

    if (unaff_r13 != NULL) {
        while (true) {
            in_r0 = 0;
            if ((code *)*unaff_r13 == NULL)
                break;
            (*(code *)*unaff_r13)(a0, a1, a2, a3);
            unaff_r13 = unaff_r13 + 1;
        }
    }
    return in_r0;
}

/*
 * vec_delete_array  0x8c0100dc
 * called by: Class_12a990_m0_09bb44, Class_12b088_dtor, Class_12b3b8_dtor, Class_12b580_dtor,
 * Class_12b580_release_0e6114, Class_12b758_dtor, Class_12b930_destroy, Class_12b930_dtor (+78 more)
 */
u32 vec_delete_array(int a0, code *a1, int a2, int a3) {
    u32 in_r0;
    int iVar1;
    u32 uVar2;

    uVar2 = 1;
    iVar1 = a2 * a3 + a0;
    for (; a3 != 0; a3 = a3 + -1) {
        iVar1 = iVar1 - a2;
        in_r0 = (*a1)(iVar1, 0xffffffff, uVar2);
    }
    return in_r0;
}

/*
 * array_destruct_backwards  0x8c0100ec
 * calls destructor a1 on each of r11 elements of size r10 at a0, last first
 */
u32 array_destruct_backwards(int a0, code *a1, u32 a2, u32 a3) {
    u32 in_r0;
    int unaff_r10;
    int unaff_r11;
    int a4;

    a4 = unaff_r10 * unaff_r11 + a0;
    for (; unaff_r11 != 0; unaff_r11 = unaff_r11 + -1) {
        a4 = a4 - unaff_r10;
        in_r0 = (*a1)(a4, 0xffffffff, a2, a3);
    }
    return in_r0;
}

/*
 * vec_new_array  0x8c010120
 * constructs count elements of size bytes with ctor; on failure destroys the built ones with dtor (pairs with
 * vec_delete_array) called by: CAnimal_uses_set_field_b_s8_02b9a8, CMushroomerEgg_ctor, CSquid_Init, Class_12b3b8_ctor,
 * Class_12b580_ctor, Class_12b580_uses_Vec3_ctor_zero_0d7f18, Class_12b758_ctor, Class_12b930_ctor (+25 more)
 */
u32 vec_new_array(int a0, code *a1, code *a2, int a3, u32 s0) {
    int iVar1;
    u32 uStackY_1c;
    u32 uVar2;

    uVar2 = 1;
    iVar1 = a0;
    for (uStackY_1c = 0; uStackY_1c < s0; uStackY_1c = uStackY_1c + 1) {
        (*a1)(iVar1, 1, uVar2);
        iVar1 = iVar1 + a3;
    }
    if ((uStackY_1c < s0) && (s0 = 0, a2 != NULL)) {
        iVar1 = a3 * uStackY_1c + a0;
        for (; s0 = 0, uStackY_1c != 0; uStackY_1c = uStackY_1c - 1) {
            iVar1 = iVar1 - a3;
            (*a2)(iVar1, 0xffffffff);
        }
    }
    return s0;
}

/*
 * alt_entry_01012c  0x8c01012c
 * probably an entry 12 bytes into 8c010120: it reads registers that code sets before it
 */
u32 alt_entry_01012c(int a0, code *a1, code *a2, u32 a3, u32 s0, u32 s4, u32 s8, u32 s12, u32 s16, u32 s20) {
    code *a6;
    int unaff_r11;
    int iVar1;
    u32 uStack_8;

    a6 = a2;
    iVar1 = a0;
    for (uStack_8 = 0; uStack_8 < s20; uStack_8 = uStack_8 + 1) {
        (*a1)(iVar1, 1, a6, a3);
        iVar1 = iVar1 + unaff_r11;
    }
    if ((uStack_8 < s20) && (s20 = 0, a2 != NULL)) {
        iVar1 = unaff_r11 * uStack_8 + a0;
        for (; s20 = 0, uStack_8 != 0; uStack_8 = uStack_8 - 1) {
            iVar1 = iVar1 - unaff_r11;
            (*a2)(iVar1, 0xffffffff, a6, a3);
        }
    }
    return s20;
}

/*
 * global_list_push  0x8c0101a0
 * called by: confirm_exit_save, static_init_27def0, static_init_285204, static_init_4367d4, static_init_437218,
 * static_init_43724c, static_init_4372a8, static_init_4372f4 (+55 more)
 */
u32 global_list_push(u32 a0, u32 a1, u32 *a2, u32 a3) {
    u32 *puVar1;

    puVar1 = 0x8c2787a0;
    *a2 = g_8c2787a0;
    a2[1] = a1;
    a2[2] = a0;
    *puVar1 = a2;
    return a0;
}

/*
 * pure_virtual_stub  0x8c0101bc
 * called by: Class_1297f4_m0_014cf0, Class_12a03c_m1_03c43c, Class_12a25c_m1_06f530, Class_12a25c_vec_06f93c,
 * Class_12b334_m1_0bf3d4, Class_12b350_m1_0baa84, Class_12b388_m1_0c5c08, Class_12b930_m1_0de1dc (+34 more) decompiler:
 * Control flow encountered unimplemented instructions
 */
u32 pure_virtual_stub(void) {
    /* WARNING: Unimplemented instruction - Truncating control flow here */
    halt_unimplemented();
}

/*
 * strcpy  0x8c0101d4
 * called by: CDCGD_copy_01fc78, CDCGD_new_request_c, CSeamanDomain_warning_message, Class_12a078_ctor,
 * Class_12c3c4_ctor, asr_switch_vocab, asr_uses_strcpy_0fbf28, cd_load_open_read (+41 more)
 */
u32 strcpy(char *a0, char *a1) {
    char cVar1;
    u32 in_r0;

    do {
        cVar1 = *a1;
        a1 = a1 + 1;
        *a0 = cVar1;
        a0 = a0 + 1;
    } while (cVar1 != '\0');
    return in_r0;
}

/*
 * libgcc_divide_helper_0101e4  0x8c0101e4
 * called by: CAnimal_m2_0386d0, CGame_uses_libgcc_divide_helper_0cc784, CProlog_uses_libgcc_divide_helper_0cd3c8,
 * Class_129808_uses_libgcc_divide_helper_01679c, Class_129938_vec_017900, Class_129c70_split_min_value,
 * Class_12a7f4_m2_09a060, Class_12a7f4_m3_09a558 (+32 more)
 */
int libgcc_divide_helper_0101e4(u32 a0, u32 a1) {
    u32 uVar1;
    u32 uVar2;
    u32 uVar3;
    bool bVar4;
    bool bVar5;
    bool bVar6;
    bool bVar8;
    bool bVar9;
    bool bVar10;
    bool bVar11;
    bool bVar12;
    bool bVar13;
    bool bVar14;
    bool bVar15;
    bool bVar16;
    bool bVar17;
    bool bVar18;
    bool bVar19;
    bool bVar20;
    bool bVar21;
    bool bVar22;
    bool bVar23;
    bool bVar24;
    bool bVar25;
    bool bVar26;
    bool bVar27;
    bool bVar28;
    bool bVar29;
    bool bVar30;
    bool bVar31;
    bool bVar32;
    bool bVar33;
    bool bVar34;
    bool bVar35;
    bool bVar36;
    bool bVar37;
    bool bVar38;
    bool bVar7;

    if (a1 == 0) {
        return a0;
    }
    uVar2 = (u32)((a0 & 0x80000000) != 0);
    uVar3 = a0 - (uVar2 != 0);
    bVar5 = (-uVar2 & 0x80000000) != 0;
    bVar4 = (a1 & 0x80000000) != 0;
    uVar1 = uVar3 * 2;
    bVar6 = (-uVar2 & 0x80000000) == 0;
    uVar2 = uVar2 * -2 | (u32)((uVar3 & 0x80000000) != 0);
    if (bVar5 || bVar4) {
        if (!bVar5 && bVar4) {
            uVar3 = uVar2 + a1;
            bVar7 = uVar3 < uVar2;
            if (bVar6) {
                bVar7 = !bVar7;
            }
        } else if (bVar5 && !bVar4) {
            uVar3 = uVar2 + a1;
            bVar7 = uVar3 < uVar2;
            if (!bVar6) {
                bVar7 = !bVar7;
            }
        } else {
            uVar3 = uVar2 - a1;
            bVar7 = uVar2 < uVar3;
            if (bVar6) {
                bVar7 = !bVar7;
            }
        }
    } else {
        uVar3 = uVar2 - a1;
        bVar7 = uVar2 < uVar3;
        if (!bVar6) {
            bVar7 = !bVar7;
        }
    }
    bVar6 = (uVar3 & 0x80000000) == 0;
    uVar2 = uVar3 << 1 | (u32)((uVar1 & 0x80000000) != 0);
    if (bVar7 == false && !bVar4) {
        uVar3 = uVar2 - a1;
        bVar8 = uVar2 < uVar3;
        if (!bVar6) {
            bVar8 = !bVar8;
        }
    } else if (bVar7 == false && bVar4) {
        uVar3 = uVar2 + a1;
        bVar8 = uVar3 < uVar2;
        if (bVar6) {
            bVar8 = !bVar8;
        }
    } else if (bVar7 == true && !bVar4) {
        uVar3 = uVar2 + a1;
        bVar8 = uVar3 < uVar2;
        if (!bVar6) {
            bVar8 = !bVar8;
        }
    } else {
        uVar3 = uVar2 - a1;
        bVar8 = uVar2 < uVar3;
        if (bVar6) {
            bVar8 = !bVar8;
        }
    }
    bVar6 = (uVar3 & 0x80000000) == 0;
    uVar2 = uVar3 << 1 | (u32)((uVar1 & 0x40000000) != 0);
    if (bVar8 == false && !bVar4) {
        uVar3 = uVar2 - a1;
        bVar9 = uVar2 < uVar3;
        if (!bVar6) {
            bVar9 = !bVar9;
        }
    } else if (bVar8 == false && bVar4) {
        uVar3 = uVar2 + a1;
        bVar9 = uVar3 < uVar2;
        if (bVar6) {
            bVar9 = !bVar9;
        }
    } else if (bVar8 == true && !bVar4) {
        uVar3 = uVar2 + a1;
        bVar9 = uVar3 < uVar2;
        if (!bVar6) {
            bVar9 = !bVar9;
        }
    } else {
        uVar3 = uVar2 - a1;
        bVar9 = uVar2 < uVar3;
        if (bVar6) {
            bVar9 = !bVar9;
        }
    }
    bVar6 = (uVar3 & 0x80000000) == 0;
    uVar2 = uVar3 << 1 | (u32)((uVar1 & 0x20000000) != 0);
    if (bVar9 == false && !bVar4) {
        uVar3 = uVar2 - a1;
        bVar10 = uVar2 < uVar3;
        if (!bVar6) {
            bVar10 = !bVar10;
        }
    } else if (bVar9 == false && bVar4) {
        uVar3 = uVar2 + a1;
        bVar10 = uVar3 < uVar2;
        if (bVar6) {
            bVar10 = !bVar10;
        }
    } else if (bVar9 == true && !bVar4) {
        uVar3 = uVar2 + a1;
        bVar10 = uVar3 < uVar2;
        if (!bVar6) {
            bVar10 = !bVar10;
        }
    } else {
        uVar3 = uVar2 - a1;
        bVar10 = uVar2 < uVar3;
        if (bVar6) {
            bVar10 = !bVar10;
        }
    }
    bVar6 = (uVar3 & 0x80000000) == 0;
    uVar2 = uVar3 << 1 | (u32)((uVar1 & 0x10000000) != 0);
    if (bVar10 == false && !bVar4) {
        uVar3 = uVar2 - a1;
        bVar11 = uVar2 < uVar3;
        if (!bVar6) {
            bVar11 = !bVar11;
        }
    } else if (bVar10 == false && bVar4) {
        uVar3 = uVar2 + a1;
        bVar11 = uVar3 < uVar2;
        if (bVar6) {
            bVar11 = !bVar11;
        }
    } else if (bVar10 == true && !bVar4) {
        uVar3 = uVar2 + a1;
        bVar11 = uVar3 < uVar2;
        if (!bVar6) {
            bVar11 = !bVar11;
        }
    } else {
        uVar3 = uVar2 - a1;
        bVar11 = uVar2 < uVar3;
        if (bVar6) {
            bVar11 = !bVar11;
        }
    }
    bVar6 = (uVar3 & 0x80000000) == 0;
    uVar2 = uVar3 << 1 | (u32)((uVar1 & 0x8000000) != 0);
    if (bVar11 == false && !bVar4) {
        uVar3 = uVar2 - a1;
        bVar12 = uVar2 < uVar3;
        if (!bVar6) {
            bVar12 = !bVar12;
        }
    } else if (bVar11 == false && bVar4) {
        uVar3 = uVar2 + a1;
        bVar12 = uVar3 < uVar2;
        if (bVar6) {
            bVar12 = !bVar12;
        }
    } else if (bVar11 == true && !bVar4) {
        uVar3 = uVar2 + a1;
        bVar12 = uVar3 < uVar2;
        if (!bVar6) {
            bVar12 = !bVar12;
        }
    } else {
        uVar3 = uVar2 - a1;
        bVar12 = uVar2 < uVar3;
        if (bVar6) {
            bVar12 = !bVar12;
        }
    }
    bVar6 = (uVar3 & 0x80000000) == 0;
    uVar2 = uVar3 << 1 | (u32)((uVar1 & 0x4000000) != 0);
    if (bVar12 == false && !bVar4) {
        uVar3 = uVar2 - a1;
        bVar13 = uVar2 < uVar3;
        if (!bVar6) {
            bVar13 = !bVar13;
        }
    } else if (bVar12 == false && bVar4) {
        uVar3 = uVar2 + a1;
        bVar13 = uVar3 < uVar2;
        if (bVar6) {
            bVar13 = !bVar13;
        }
    } else if (bVar12 == true && !bVar4) {
        uVar3 = uVar2 + a1;
        bVar13 = uVar3 < uVar2;
        if (!bVar6) {
            bVar13 = !bVar13;
        }
    } else {
        uVar3 = uVar2 - a1;
        bVar13 = uVar2 < uVar3;
        if (bVar6) {
            bVar13 = !bVar13;
        }
    }
    bVar6 = (uVar3 & 0x80000000) == 0;
    uVar2 = uVar3 << 1 | (u32)((uVar1 & 0x2000000) != 0);
    if (bVar13 == false && !bVar4) {
        uVar3 = uVar2 - a1;
        bVar14 = uVar2 < uVar3;
        if (!bVar6) {
            bVar14 = !bVar14;
        }
    } else if (bVar13 == false && bVar4) {
        uVar3 = uVar2 + a1;
        bVar14 = uVar3 < uVar2;
        if (bVar6) {
            bVar14 = !bVar14;
        }
    } else if (bVar13 == true && !bVar4) {
        uVar3 = uVar2 + a1;
        bVar14 = uVar3 < uVar2;
        if (!bVar6) {
            bVar14 = !bVar14;
        }
    } else {
        uVar3 = uVar2 - a1;
        bVar14 = uVar2 < uVar3;
        if (bVar6) {
            bVar14 = !bVar14;
        }
    }
    bVar6 = (uVar3 & 0x80000000) == 0;
    uVar2 = uVar3 << 1 | (u32)((uVar1 & 0x1000000) != 0);
    if (bVar14 == false && !bVar4) {
        uVar3 = uVar2 - a1;
        bVar15 = uVar2 < uVar3;
        if (!bVar6) {
            bVar15 = !bVar15;
        }
    } else if (bVar14 == false && bVar4) {
        uVar3 = uVar2 + a1;
        bVar15 = uVar3 < uVar2;
        if (bVar6) {
            bVar15 = !bVar15;
        }
    } else if (bVar14 == true && !bVar4) {
        uVar3 = uVar2 + a1;
        bVar15 = uVar3 < uVar2;
        if (!bVar6) {
            bVar15 = !bVar15;
        }
    } else {
        uVar3 = uVar2 - a1;
        bVar15 = uVar2 < uVar3;
        if (bVar6) {
            bVar15 = !bVar15;
        }
    }
    bVar6 = (uVar3 & 0x80000000) == 0;
    uVar2 = uVar3 << 1 | (u32)((uVar1 & 0x800000) != 0);
    if (bVar15 == false && !bVar4) {
        uVar3 = uVar2 - a1;
        bVar16 = uVar2 < uVar3;
        if (!bVar6) {
            bVar16 = !bVar16;
        }
    } else if (bVar15 == false && bVar4) {
        uVar3 = uVar2 + a1;
        bVar16 = uVar3 < uVar2;
        if (bVar6) {
            bVar16 = !bVar16;
        }
    } else if (bVar15 == true && !bVar4) {
        uVar3 = uVar2 + a1;
        bVar16 = uVar3 < uVar2;
        if (!bVar6) {
            bVar16 = !bVar16;
        }
    } else {
        uVar3 = uVar2 - a1;
        bVar16 = uVar2 < uVar3;
        if (bVar6) {
            bVar16 = !bVar16;
        }
    }
    bVar6 = (uVar3 & 0x80000000) == 0;
    uVar2 = uVar3 << 1 | (u32)((uVar1 & 0x400000) != 0);
    if (bVar16 == false && !bVar4) {
        uVar3 = uVar2 - a1;
        bVar17 = uVar2 < uVar3;
        if (!bVar6) {
            bVar17 = !bVar17;
        }
    } else if (bVar16 == false && bVar4) {
        uVar3 = uVar2 + a1;
        bVar17 = uVar3 < uVar2;
        if (bVar6) {
            bVar17 = !bVar17;
        }
    } else if (bVar16 == true && !bVar4) {
        uVar3 = uVar2 + a1;
        bVar17 = uVar3 < uVar2;
        if (!bVar6) {
            bVar17 = !bVar17;
        }
    } else {
        uVar3 = uVar2 - a1;
        bVar17 = uVar2 < uVar3;
        if (bVar6) {
            bVar17 = !bVar17;
        }
    }
    bVar6 = (uVar3 & 0x80000000) == 0;
    uVar2 = uVar3 << 1 | (u32)((uVar1 & 0x200000) != 0);
    if (bVar17 == false && !bVar4) {
        uVar3 = uVar2 - a1;
        bVar18 = uVar2 < uVar3;
        if (!bVar6) {
            bVar18 = !bVar18;
        }
    } else if (bVar17 == false && bVar4) {
        uVar3 = uVar2 + a1;
        bVar18 = uVar3 < uVar2;
        if (bVar6) {
            bVar18 = !bVar18;
        }
    } else if (bVar17 == true && !bVar4) {
        uVar3 = uVar2 + a1;
        bVar18 = uVar3 < uVar2;
        if (!bVar6) {
            bVar18 = !bVar18;
        }
    } else {
        uVar3 = uVar2 - a1;
        bVar18 = uVar2 < uVar3;
        if (bVar6) {
            bVar18 = !bVar18;
        }
    }
    bVar6 = (uVar3 & 0x80000000) == 0;
    uVar2 = uVar3 << 1 | (u32)((uVar1 & 0x100000) != 0);
    if (bVar18 == false && !bVar4) {
        uVar3 = uVar2 - a1;
        bVar19 = uVar2 < uVar3;
        if (!bVar6) {
            bVar19 = !bVar19;
        }
    } else if (bVar18 == false && bVar4) {
        uVar3 = uVar2 + a1;
        bVar19 = uVar3 < uVar2;
        if (bVar6) {
            bVar19 = !bVar19;
        }
    } else if (bVar18 == true && !bVar4) {
        uVar3 = uVar2 + a1;
        bVar19 = uVar3 < uVar2;
        if (!bVar6) {
            bVar19 = !bVar19;
        }
    } else {
        uVar3 = uVar2 - a1;
        bVar19 = uVar2 < uVar3;
        if (bVar6) {
            bVar19 = !bVar19;
        }
    }
    bVar6 = (uVar3 & 0x80000000) == 0;
    uVar2 = uVar3 << 1 | (u32)((uVar1 & 0x80000) != 0);
    if (bVar19 == false && !bVar4) {
        uVar3 = uVar2 - a1;
        bVar20 = uVar2 < uVar3;
        if (!bVar6) {
            bVar20 = !bVar20;
        }
    } else if (bVar19 == false && bVar4) {
        uVar3 = uVar2 + a1;
        bVar20 = uVar3 < uVar2;
        if (bVar6) {
            bVar20 = !bVar20;
        }
    } else if (bVar19 == true && !bVar4) {
        uVar3 = uVar2 + a1;
        bVar20 = uVar3 < uVar2;
        if (!bVar6) {
            bVar20 = !bVar20;
        }
    } else {
        uVar3 = uVar2 - a1;
        bVar20 = uVar2 < uVar3;
        if (bVar6) {
            bVar20 = !bVar20;
        }
    }
    bVar6 = (uVar3 & 0x80000000) == 0;
    uVar2 = uVar3 << 1 | (u32)((uVar1 & 0x40000) != 0);
    if (bVar20 == false && !bVar4) {
        uVar3 = uVar2 - a1;
        bVar21 = uVar2 < uVar3;
        if (!bVar6) {
            bVar21 = !bVar21;
        }
    } else if (bVar20 == false && bVar4) {
        uVar3 = uVar2 + a1;
        bVar21 = uVar3 < uVar2;
        if (bVar6) {
            bVar21 = !bVar21;
        }
    } else if (bVar20 == true && !bVar4) {
        uVar3 = uVar2 + a1;
        bVar21 = uVar3 < uVar2;
        if (!bVar6) {
            bVar21 = !bVar21;
        }
    } else {
        uVar3 = uVar2 - a1;
        bVar21 = uVar2 < uVar3;
        if (bVar6) {
            bVar21 = !bVar21;
        }
    }
    bVar6 = (uVar3 & 0x80000000) == 0;
    uVar2 = uVar3 << 1 | (u32)((uVar1 & 0x20000) != 0);
    if (bVar21 == false && !bVar4) {
        uVar3 = uVar2 - a1;
        bVar22 = uVar2 < uVar3;
        if (!bVar6) {
            bVar22 = !bVar22;
        }
    } else if (bVar21 == false && bVar4) {
        uVar3 = uVar2 + a1;
        bVar22 = uVar3 < uVar2;
        if (bVar6) {
            bVar22 = !bVar22;
        }
    } else if (bVar21 == true && !bVar4) {
        uVar3 = uVar2 + a1;
        bVar22 = uVar3 < uVar2;
        if (!bVar6) {
            bVar22 = !bVar22;
        }
    } else {
        uVar3 = uVar2 - a1;
        bVar22 = uVar2 < uVar3;
        if (bVar6) {
            bVar22 = !bVar22;
        }
    }
    bVar6 = (uVar3 & 0x80000000) == 0;
    uVar2 = uVar3 << 1 | (u32)((uVar1 & 0x10000) != 0);
    if (bVar22 == false && !bVar4) {
        uVar3 = uVar2 - a1;
        bVar23 = uVar2 < uVar3;
        if (!bVar6) {
            bVar23 = !bVar23;
        }
    } else if (bVar22 == false && bVar4) {
        uVar3 = uVar2 + a1;
        bVar23 = uVar3 < uVar2;
        if (bVar6) {
            bVar23 = !bVar23;
        }
    } else if (bVar22 == true && !bVar4) {
        uVar3 = uVar2 + a1;
        bVar23 = uVar3 < uVar2;
        if (!bVar6) {
            bVar23 = !bVar23;
        }
    } else {
        uVar3 = uVar2 - a1;
        bVar23 = uVar2 < uVar3;
        if (bVar6) {
            bVar23 = !bVar23;
        }
    }
    bVar6 = (uVar3 & 0x80000000) == 0;
    uVar2 = uVar3 << 1 | (u32)((uVar1 & 0x8000) != 0);
    if (bVar23 == false && !bVar4) {
        uVar3 = uVar2 - a1;
        bVar24 = uVar2 < uVar3;
        if (!bVar6) {
            bVar24 = !bVar24;
        }
    } else if (bVar23 == false && bVar4) {
        uVar3 = uVar2 + a1;
        bVar24 = uVar3 < uVar2;
        if (bVar6) {
            bVar24 = !bVar24;
        }
    } else if (bVar23 == true && !bVar4) {
        uVar3 = uVar2 + a1;
        bVar24 = uVar3 < uVar2;
        if (!bVar6) {
            bVar24 = !bVar24;
        }
    } else {
        uVar3 = uVar2 - a1;
        bVar24 = uVar2 < uVar3;
        if (bVar6) {
            bVar24 = !bVar24;
        }
    }
    bVar6 = (uVar3 & 0x80000000) == 0;
    uVar2 = uVar3 << 1 | (u32)((uVar1 & 0x4000) != 0);
    if (bVar24 == false && !bVar4) {
        uVar3 = uVar2 - a1;
        bVar25 = uVar2 < uVar3;
        if (!bVar6) {
            bVar25 = !bVar25;
        }
    } else if (bVar24 == false && bVar4) {
        uVar3 = uVar2 + a1;
        bVar25 = uVar3 < uVar2;
        if (bVar6) {
            bVar25 = !bVar25;
        }
    } else if (bVar24 == true && !bVar4) {
        uVar3 = uVar2 + a1;
        bVar25 = uVar3 < uVar2;
        if (!bVar6) {
            bVar25 = !bVar25;
        }
    } else {
        uVar3 = uVar2 - a1;
        bVar25 = uVar2 < uVar3;
        if (bVar6) {
            bVar25 = !bVar25;
        }
    }
    bVar6 = (uVar3 & 0x80000000) == 0;
    uVar2 = uVar3 << 1 | (u32)((uVar1 & 0x2000) != 0);
    if (bVar25 == false && !bVar4) {
        uVar3 = uVar2 - a1;
        bVar26 = uVar2 < uVar3;
        if (!bVar6) {
            bVar26 = !bVar26;
        }
    } else if (bVar25 == false && bVar4) {
        uVar3 = uVar2 + a1;
        bVar26 = uVar3 < uVar2;
        if (bVar6) {
            bVar26 = !bVar26;
        }
    } else if (bVar25 == true && !bVar4) {
        uVar3 = uVar2 + a1;
        bVar26 = uVar3 < uVar2;
        if (!bVar6) {
            bVar26 = !bVar26;
        }
    } else {
        uVar3 = uVar2 - a1;
        bVar26 = uVar2 < uVar3;
        if (bVar6) {
            bVar26 = !bVar26;
        }
    }
    bVar6 = (uVar3 & 0x80000000) == 0;
    uVar2 = uVar3 << 1 | (u32)((uVar1 & 0x1000) != 0);
    if (bVar26 == false && !bVar4) {
        uVar3 = uVar2 - a1;
        bVar27 = uVar2 < uVar3;
        if (!bVar6) {
            bVar27 = !bVar27;
        }
    } else if (bVar26 == false && bVar4) {
        uVar3 = uVar2 + a1;
        bVar27 = uVar3 < uVar2;
        if (bVar6) {
            bVar27 = !bVar27;
        }
    } else if (bVar26 == true && !bVar4) {
        uVar3 = uVar2 + a1;
        bVar27 = uVar3 < uVar2;
        if (!bVar6) {
            bVar27 = !bVar27;
        }
    } else {
        uVar3 = uVar2 - a1;
        bVar27 = uVar2 < uVar3;
        if (bVar6) {
            bVar27 = !bVar27;
        }
    }
    bVar6 = (uVar3 & 0x80000000) == 0;
    uVar2 = uVar3 << 1 | (u32)((uVar1 & 0x800) != 0);
    if (bVar27 == false && !bVar4) {
        uVar3 = uVar2 - a1;
        bVar28 = uVar2 < uVar3;
        if (!bVar6) {
            bVar28 = !bVar28;
        }
    } else if (bVar27 == false && bVar4) {
        uVar3 = uVar2 + a1;
        bVar28 = uVar3 < uVar2;
        if (bVar6) {
            bVar28 = !bVar28;
        }
    } else if (bVar27 == true && !bVar4) {
        uVar3 = uVar2 + a1;
        bVar28 = uVar3 < uVar2;
        if (!bVar6) {
            bVar28 = !bVar28;
        }
    } else {
        uVar3 = uVar2 - a1;
        bVar28 = uVar2 < uVar3;
        if (bVar6) {
            bVar28 = !bVar28;
        }
    }
    bVar6 = (uVar3 & 0x80000000) == 0;
    uVar2 = uVar3 << 1 | (u32)((uVar1 & 0x400) != 0);
    if (bVar28 == false && !bVar4) {
        uVar3 = uVar2 - a1;
        bVar29 = uVar2 < uVar3;
        if (!bVar6) {
            bVar29 = !bVar29;
        }
    } else if (bVar28 == false && bVar4) {
        uVar3 = uVar2 + a1;
        bVar29 = uVar3 < uVar2;
        if (bVar6) {
            bVar29 = !bVar29;
        }
    } else if (bVar28 == true && !bVar4) {
        uVar3 = uVar2 + a1;
        bVar29 = uVar3 < uVar2;
        if (!bVar6) {
            bVar29 = !bVar29;
        }
    } else {
        uVar3 = uVar2 - a1;
        bVar29 = uVar2 < uVar3;
        if (bVar6) {
            bVar29 = !bVar29;
        }
    }
    bVar6 = (uVar3 & 0x80000000) == 0;
    uVar2 = uVar3 << 1 | (u32)((uVar1 & 0x200) != 0);
    if (bVar29 == false && !bVar4) {
        uVar3 = uVar2 - a1;
        bVar30 = uVar2 < uVar3;
        if (!bVar6) {
            bVar30 = !bVar30;
        }
    } else if (bVar29 == false && bVar4) {
        uVar3 = uVar2 + a1;
        bVar30 = uVar3 < uVar2;
        if (bVar6) {
            bVar30 = !bVar30;
        }
    } else if (bVar29 == true && !bVar4) {
        uVar3 = uVar2 + a1;
        bVar30 = uVar3 < uVar2;
        if (!bVar6) {
            bVar30 = !bVar30;
        }
    } else {
        uVar3 = uVar2 - a1;
        bVar30 = uVar2 < uVar3;
        if (bVar6) {
            bVar30 = !bVar30;
        }
    }
    bVar6 = (uVar3 & 0x80000000) == 0;
    uVar2 = uVar3 << 1 | (u32)((uVar1 & 0x100) != 0);
    if (bVar30 == false && !bVar4) {
        uVar3 = uVar2 - a1;
        bVar31 = uVar2 < uVar3;
        if (!bVar6) {
            bVar31 = !bVar31;
        }
    } else if (bVar30 == false && bVar4) {
        uVar3 = uVar2 + a1;
        bVar31 = uVar3 < uVar2;
        if (bVar6) {
            bVar31 = !bVar31;
        }
    } else if (bVar30 == true && !bVar4) {
        uVar3 = uVar2 + a1;
        bVar31 = uVar3 < uVar2;
        if (!bVar6) {
            bVar31 = !bVar31;
        }
    } else {
        uVar3 = uVar2 - a1;
        bVar31 = uVar2 < uVar3;
        if (bVar6) {
            bVar31 = !bVar31;
        }
    }
    bVar6 = (uVar3 & 0x80000000) == 0;
    uVar2 = uVar3 << 1 | (u32)((uVar1 & 0x80) != 0);
    if (bVar31 == false && !bVar4) {
        uVar3 = uVar2 - a1;
        bVar32 = uVar2 < uVar3;
        if (!bVar6) {
            bVar32 = !bVar32;
        }
    } else if (bVar31 == false && bVar4) {
        uVar3 = uVar2 + a1;
        bVar32 = uVar3 < uVar2;
        if (bVar6) {
            bVar32 = !bVar32;
        }
    } else if (bVar31 == true && !bVar4) {
        uVar3 = uVar2 + a1;
        bVar32 = uVar3 < uVar2;
        if (!bVar6) {
            bVar32 = !bVar32;
        }
    } else {
        uVar3 = uVar2 - a1;
        bVar32 = uVar2 < uVar3;
        if (bVar6) {
            bVar32 = !bVar32;
        }
    }
    bVar6 = (uVar3 & 0x80000000) == 0;
    uVar2 = uVar3 << 1 | (u32)((uVar1 & 0x40) != 0);
    if (bVar32 == false && !bVar4) {
        uVar3 = uVar2 - a1;
        bVar33 = uVar2 < uVar3;
        if (!bVar6) {
            bVar33 = !bVar33;
        }
    } else if (bVar32 == false && bVar4) {
        uVar3 = uVar2 + a1;
        bVar33 = uVar3 < uVar2;
        if (bVar6) {
            bVar33 = !bVar33;
        }
    } else if (bVar32 == true && !bVar4) {
        uVar3 = uVar2 + a1;
        bVar33 = uVar3 < uVar2;
        if (!bVar6) {
            bVar33 = !bVar33;
        }
    } else {
        uVar3 = uVar2 - a1;
        bVar33 = uVar2 < uVar3;
        if (bVar6) {
            bVar33 = !bVar33;
        }
    }
    bVar6 = (uVar3 & 0x80000000) == 0;
    uVar2 = uVar3 << 1 | (u32)((uVar1 & 0x20) != 0);
    if (bVar33 == false && !bVar4) {
        uVar3 = uVar2 - a1;
        bVar34 = uVar2 < uVar3;
        if (!bVar6) {
            bVar34 = !bVar34;
        }
    } else if (bVar33 == false && bVar4) {
        uVar3 = uVar2 + a1;
        bVar34 = uVar3 < uVar2;
        if (bVar6) {
            bVar34 = !bVar34;
        }
    } else if (bVar33 == true && !bVar4) {
        uVar3 = uVar2 + a1;
        bVar34 = uVar3 < uVar2;
        if (!bVar6) {
            bVar34 = !bVar34;
        }
    } else {
        uVar3 = uVar2 - a1;
        bVar34 = uVar2 < uVar3;
        if (bVar6) {
            bVar34 = !bVar34;
        }
    }
    bVar6 = (uVar3 & 0x80000000) == 0;
    uVar2 = uVar3 << 1 | (u32)((uVar1 & 0x10) != 0);
    if (bVar34 == false && !bVar4) {
        uVar3 = uVar2 - a1;
        bVar35 = uVar2 < uVar3;
        if (!bVar6) {
            bVar35 = !bVar35;
        }
    } else if (bVar34 == false && bVar4) {
        uVar3 = uVar2 + a1;
        bVar35 = uVar3 < uVar2;
        if (bVar6) {
            bVar35 = !bVar35;
        }
    } else if (bVar34 == true && !bVar4) {
        uVar3 = uVar2 + a1;
        bVar35 = uVar3 < uVar2;
        if (!bVar6) {
            bVar35 = !bVar35;
        }
    } else {
        uVar3 = uVar2 - a1;
        bVar35 = uVar2 < uVar3;
        if (bVar6) {
            bVar35 = !bVar35;
        }
    }
    bVar6 = (uVar3 & 0x80000000) == 0;
    uVar2 = uVar3 << 1 | (u32)((uVar1 & 8) != 0);
    if (bVar35 == false && !bVar4) {
        uVar3 = uVar2 - a1;
        bVar36 = uVar2 < uVar3;
        if (!bVar6) {
            bVar36 = !bVar36;
        }
    } else if (bVar35 == false && bVar4) {
        uVar3 = uVar2 + a1;
        bVar36 = uVar3 < uVar2;
        if (bVar6) {
            bVar36 = !bVar36;
        }
    } else if (bVar35 == true && !bVar4) {
        uVar3 = uVar2 + a1;
        bVar36 = uVar3 < uVar2;
        if (!bVar6) {
            bVar36 = !bVar36;
        }
    } else {
        uVar3 = uVar2 - a1;
        bVar36 = uVar2 < uVar3;
        if (bVar6) {
            bVar36 = !bVar36;
        }
    }
    bVar6 = (uVar3 & 0x80000000) == 0;
    uVar2 = uVar3 << 1 | (u32)((uVar1 & 4) != 0);
    if (bVar36 == false && !bVar4) {
        uVar3 = uVar2 - a1;
        bVar37 = uVar2 < uVar3;
        if (!bVar6) {
            bVar37 = !bVar37;
        }
    } else if (bVar36 == false && bVar4) {
        uVar3 = uVar2 + a1;
        bVar37 = uVar3 < uVar2;
        if (bVar6) {
            bVar37 = !bVar37;
        }
    } else if (bVar36 == true && !bVar4) {
        uVar3 = uVar2 + a1;
        bVar37 = uVar3 < uVar2;
        if (!bVar6) {
            bVar37 = !bVar37;
        }
    } else {
        uVar3 = uVar2 - a1;
        bVar37 = uVar2 < uVar3;
        if (bVar6) {
            bVar37 = !bVar37;
        }
    }
    bVar6 = (uVar3 & 0x80000000) == 0;
    uVar2 = uVar3 << 1 | (u32)((uVar1 & 2) != 0);
    if (bVar37 == false && !bVar4) {
        bVar38 = uVar2 < uVar2 - a1;
        if (!bVar6) {
            bVar38 = !bVar38;
        }
    } else if (bVar37 == false && bVar4) {
        bVar38 = uVar2 + a1 < uVar2;
        if (bVar6) {
            bVar38 = !bVar38;
        }
    } else if (bVar37 == true && !bVar4) {
        bVar38 = uVar2 + a1 < uVar2;
        if (!bVar6) {
            bVar38 = !bVar38;
        }
    } else {
        bVar38 = uVar2 < uVar2 - a1;
        if (bVar6) {
            bVar38 = !bVar38;
        }
    }
    return ((((((((((((((((((((((((((((((((u32)(bVar7 == bVar4) << 1 | (u32)(bVar8 == bVar4)) << 1 |
                                         (u32)(bVar9 == bVar4))
                                            << 1 |
                                        (u32)(bVar10 == bVar4))
                                           << 1 |
                                       (u32)(bVar11 == bVar4))
                                          << 1 |
                                      (u32)(bVar12 == bVar4))
                                         << 1 |
                                     (u32)(bVar13 == bVar4))
                                        << 1 |
                                    (u32)(bVar14 == bVar4))
                                       << 1 |
                                   (u32)(bVar15 == bVar4))
                                      << 1 |
                                  (u32)(bVar16 == bVar4))
                                     << 1 |
                                 (u32)(bVar17 == bVar4))
                                    << 1 |
                                (u32)(bVar18 == bVar4))
                                   << 1 |
                               (u32)(bVar19 == bVar4))
                                  << 1 |
                              (u32)(bVar20 == bVar4))
                                 << 1 |
                             (u32)(bVar21 == bVar4))
                                << 1 |
                            (u32)(bVar22 == bVar4))
                               << 1 |
                           (u32)(bVar23 == bVar4))
                              << 1 |
                          (u32)(bVar24 == bVar4))
                             << 1 |
                         (u32)(bVar25 == bVar4))
                            << 1 |
                        (u32)(bVar26 == bVar4))
                           << 1 |
                       (u32)(bVar27 == bVar4))
                          << 1 |
                      (u32)(bVar28 == bVar4))
                         << 1 |
                     (u32)(bVar29 == bVar4))
                        << 1 |
                    (u32)(bVar30 == bVar4))
                       << 1 |
                   (u32)(bVar31 == bVar4))
                      << 1 |
                  (u32)(bVar32 == bVar4))
                     << 1 |
                 (u32)(bVar33 == bVar4))
                    << 1 |
                (u32)(bVar34 == bVar4))
                   << 1 |
               (u32)(bVar35 == bVar4))
                  << 1 |
              (u32)(bVar36 == bVar4))
                 << 1 |
             (u32)(bVar37 == bVar4))
                << 1 |
            (u32)(bVar38 == bVar4)) +
           (u32)(bVar4 != bVar5);
}

/*
 * libgcc_divide_helper_010284  0x8c010284
 * called by: CAnimal_uses_table13019c_find_row_034d48, CGame_draw_0c3e78, CGame_uses_libgcc_divide_helper_0cc784,
 * CProlog_uses_libgcc_divide_helper_0cd3c8, FrogMan_react_tap, Higyo_react_tap, game_draw_0c3530,
 * game_select_intro_or_ending (+1 more)
 */
u32 libgcc_divide_helper_010284(u32 a0, int a1, u32 a2) {
    u32 uVar1;
    u32 uVar2;
    u32 uVar3;
    bool bVar4;
    bool bVar5;
    bool bVar7;
    bool bVar8;
    bool bVar9;
    bool bVar10;
    bool bVar11;
    bool bVar12;
    bool bVar13;
    bool bVar14;
    bool bVar15;
    bool bVar16;
    bool bVar17;
    bool bVar18;
    bool bVar19;
    bool bVar20;
    bool bVar21;
    bool bVar22;
    bool bVar23;
    bool bVar24;
    bool bVar25;
    bool bVar26;
    bool bVar27;
    bool bVar28;
    bool bVar29;
    bool bVar30;
    bool bVar31;
    bool bVar32;
    bool bVar33;
    bool bVar34;
    bool bVar35;
    bool bVar36;
    bool bVar6;

    if (a1 == 0) {
        return a0;
    }
    uVar3 = (u32)((a0 & 0x80000000) != 0);
    uVar1 = uVar3 - a1;
    bVar4 = uVar3 < uVar1;
    uVar3 = a0 << 2;
    bVar5 = (uVar1 & 0x80000000) == 0;
    uVar1 = uVar1 * 2 | (u32)((a0 & 0x40000000) != 0);
    if (bVar4) {
        if (bVar4) {
            uVar2 = uVar1 + a1;
            bVar6 = uVar2 < uVar1;
            if (!bVar5) {
                bVar6 = !bVar6;
            }
        } else {
            uVar2 = uVar1 - a1;
            bVar6 = uVar1 < uVar2;
            if (bVar5) {
                bVar6 = !bVar6;
            }
        }
    } else {
        uVar2 = uVar1 - a1;
        bVar6 = uVar1 < uVar2;
        if (!bVar5) {
            bVar6 = !bVar6;
        }
    }
    bVar5 = (uVar2 & 0x80000000) == 0;
    uVar1 = uVar2 << 1 | (u32)((uVar3 & 0x80000000) != 0);
    if (bVar6) {
        if (bVar6) {
            uVar2 = uVar1 + a1;
            bVar7 = uVar2 < uVar1;
            if (!bVar5) {
                bVar7 = !bVar7;
            }
        } else {
            uVar2 = uVar1 - a1;
            bVar7 = uVar1 < uVar2;
            if (bVar5) {
                bVar7 = !bVar7;
            }
        }
    } else {
        uVar2 = uVar1 - a1;
        bVar7 = uVar1 < uVar2;
        if (!bVar5) {
            bVar7 = !bVar7;
        }
    }
    bVar5 = (uVar2 & 0x80000000) == 0;
    uVar1 = uVar2 << 1 | (u32)((uVar3 & 0x40000000) != 0);
    if (bVar7) {
        if (bVar7) {
            uVar2 = uVar1 + a1;
            bVar8 = uVar2 < uVar1;
            if (!bVar5) {
                bVar8 = !bVar8;
            }
        } else {
            uVar2 = uVar1 - a1;
            bVar8 = uVar1 < uVar2;
            if (bVar5) {
                bVar8 = !bVar8;
            }
        }
    } else {
        uVar2 = uVar1 - a1;
        bVar8 = uVar1 < uVar2;
        if (!bVar5) {
            bVar8 = !bVar8;
        }
    }
    bVar5 = (uVar2 & 0x80000000) == 0;
    uVar1 = uVar2 << 1 | (u32)((uVar3 & 0x20000000) != 0);
    if (bVar8) {
        if (bVar8) {
            uVar2 = uVar1 + a1;
            bVar9 = uVar2 < uVar1;
            if (!bVar5) {
                bVar9 = !bVar9;
            }
        } else {
            uVar2 = uVar1 - a1;
            bVar9 = uVar1 < uVar2;
            if (bVar5) {
                bVar9 = !bVar9;
            }
        }
    } else {
        uVar2 = uVar1 - a1;
        bVar9 = uVar1 < uVar2;
        if (!bVar5) {
            bVar9 = !bVar9;
        }
    }
    bVar5 = (uVar2 & 0x80000000) == 0;
    uVar1 = uVar2 << 1 | (u32)((uVar3 & 0x10000000) != 0);
    if (bVar9) {
        if (bVar9) {
            uVar2 = uVar1 + a1;
            bVar10 = uVar2 < uVar1;
            if (!bVar5) {
                bVar10 = !bVar10;
            }
        } else {
            uVar2 = uVar1 - a1;
            bVar10 = uVar1 < uVar2;
            if (bVar5) {
                bVar10 = !bVar10;
            }
        }
    } else {
        uVar2 = uVar1 - a1;
        bVar10 = uVar1 < uVar2;
        if (!bVar5) {
            bVar10 = !bVar10;
        }
    }
    bVar5 = (uVar2 & 0x80000000) == 0;
    uVar1 = uVar2 << 1 | (u32)((uVar3 & 0x8000000) != 0);
    if (bVar10) {
        if (bVar10) {
            uVar2 = uVar1 + a1;
            bVar11 = uVar2 < uVar1;
            if (!bVar5) {
                bVar11 = !bVar11;
            }
        } else {
            uVar2 = uVar1 - a1;
            bVar11 = uVar1 < uVar2;
            if (bVar5) {
                bVar11 = !bVar11;
            }
        }
    } else {
        uVar2 = uVar1 - a1;
        bVar11 = uVar1 < uVar2;
        if (!bVar5) {
            bVar11 = !bVar11;
        }
    }
    bVar5 = (uVar2 & 0x80000000) == 0;
    uVar1 = uVar2 << 1 | (u32)((uVar3 & 0x4000000) != 0);
    if (bVar11) {
        if (bVar11) {
            uVar2 = uVar1 + a1;
            bVar12 = uVar2 < uVar1;
            if (!bVar5) {
                bVar12 = !bVar12;
            }
        } else {
            uVar2 = uVar1 - a1;
            bVar12 = uVar1 < uVar2;
            if (bVar5) {
                bVar12 = !bVar12;
            }
        }
    } else {
        uVar2 = uVar1 - a1;
        bVar12 = uVar1 < uVar2;
        if (!bVar5) {
            bVar12 = !bVar12;
        }
    }
    bVar5 = (uVar2 & 0x80000000) == 0;
    uVar1 = uVar2 << 1 | (u32)((uVar3 & 0x2000000) != 0);
    if (bVar12) {
        if (bVar12) {
            uVar2 = uVar1 + a1;
            bVar13 = uVar2 < uVar1;
            if (!bVar5) {
                bVar13 = !bVar13;
            }
        } else {
            uVar2 = uVar1 - a1;
            bVar13 = uVar1 < uVar2;
            if (bVar5) {
                bVar13 = !bVar13;
            }
        }
    } else {
        uVar2 = uVar1 - a1;
        bVar13 = uVar1 < uVar2;
        if (!bVar5) {
            bVar13 = !bVar13;
        }
    }
    bVar5 = (uVar2 & 0x80000000) == 0;
    uVar1 = uVar2 << 1 | (u32)((uVar3 & 0x1000000) != 0);
    if (bVar13) {
        if (bVar13) {
            uVar2 = uVar1 + a1;
            bVar14 = uVar2 < uVar1;
            if (!bVar5) {
                bVar14 = !bVar14;
            }
        } else {
            uVar2 = uVar1 - a1;
            bVar14 = uVar1 < uVar2;
            if (bVar5) {
                bVar14 = !bVar14;
            }
        }
    } else {
        uVar2 = uVar1 - a1;
        bVar14 = uVar1 < uVar2;
        if (!bVar5) {
            bVar14 = !bVar14;
        }
    }
    bVar5 = (uVar2 & 0x80000000) == 0;
    uVar1 = uVar2 << 1 | (u32)((uVar3 & 0x800000) != 0);
    if (bVar14) {
        if (bVar14) {
            uVar2 = uVar1 + a1;
            bVar15 = uVar2 < uVar1;
            if (!bVar5) {
                bVar15 = !bVar15;
            }
        } else {
            uVar2 = uVar1 - a1;
            bVar15 = uVar1 < uVar2;
            if (bVar5) {
                bVar15 = !bVar15;
            }
        }
    } else {
        uVar2 = uVar1 - a1;
        bVar15 = uVar1 < uVar2;
        if (!bVar5) {
            bVar15 = !bVar15;
        }
    }
    bVar5 = (uVar2 & 0x80000000) == 0;
    uVar1 = uVar2 << 1 | (u32)((uVar3 & 0x400000) != 0);
    if (bVar15) {
        if (bVar15) {
            uVar2 = uVar1 + a1;
            bVar16 = uVar2 < uVar1;
            if (!bVar5) {
                bVar16 = !bVar16;
            }
        } else {
            uVar2 = uVar1 - a1;
            bVar16 = uVar1 < uVar2;
            if (bVar5) {
                bVar16 = !bVar16;
            }
        }
    } else {
        uVar2 = uVar1 - a1;
        bVar16 = uVar1 < uVar2;
        if (!bVar5) {
            bVar16 = !bVar16;
        }
    }
    bVar5 = (uVar2 & 0x80000000) == 0;
    uVar1 = uVar2 << 1 | (u32)((uVar3 & 0x200000) != 0);
    if (bVar16) {
        if (bVar16) {
            uVar2 = uVar1 + a1;
            bVar17 = uVar2 < uVar1;
            if (!bVar5) {
                bVar17 = !bVar17;
            }
        } else {
            uVar2 = uVar1 - a1;
            bVar17 = uVar1 < uVar2;
            if (bVar5) {
                bVar17 = !bVar17;
            }
        }
    } else {
        uVar2 = uVar1 - a1;
        bVar17 = uVar1 < uVar2;
        if (!bVar5) {
            bVar17 = !bVar17;
        }
    }
    bVar5 = (uVar2 & 0x80000000) == 0;
    uVar1 = uVar2 << 1 | (u32)((uVar3 & 0x100000) != 0);
    if (bVar17) {
        if (bVar17) {
            uVar2 = uVar1 + a1;
            bVar18 = uVar2 < uVar1;
            if (!bVar5) {
                bVar18 = !bVar18;
            }
        } else {
            uVar2 = uVar1 - a1;
            bVar18 = uVar1 < uVar2;
            if (bVar5) {
                bVar18 = !bVar18;
            }
        }
    } else {
        uVar2 = uVar1 - a1;
        bVar18 = uVar1 < uVar2;
        if (!bVar5) {
            bVar18 = !bVar18;
        }
    }
    bVar5 = (uVar2 & 0x80000000) == 0;
    uVar1 = uVar2 << 1 | (u32)((uVar3 & 0x80000) != 0);
    if (bVar18) {
        if (bVar18) {
            uVar2 = uVar1 + a1;
            bVar19 = uVar2 < uVar1;
            if (!bVar5) {
                bVar19 = !bVar19;
            }
        } else {
            uVar2 = uVar1 - a1;
            bVar19 = uVar1 < uVar2;
            if (bVar5) {
                bVar19 = !bVar19;
            }
        }
    } else {
        uVar2 = uVar1 - a1;
        bVar19 = uVar1 < uVar2;
        if (!bVar5) {
            bVar19 = !bVar19;
        }
    }
    bVar5 = (uVar2 & 0x80000000) == 0;
    uVar1 = uVar2 << 1 | (u32)((uVar3 & 0x40000) != 0);
    if (bVar19) {
        if (bVar19) {
            uVar2 = uVar1 + a1;
            bVar20 = uVar2 < uVar1;
            if (!bVar5) {
                bVar20 = !bVar20;
            }
        } else {
            uVar2 = uVar1 - a1;
            bVar20 = uVar1 < uVar2;
            if (bVar5) {
                bVar20 = !bVar20;
            }
        }
    } else {
        uVar2 = uVar1 - a1;
        bVar20 = uVar1 < uVar2;
        if (!bVar5) {
            bVar20 = !bVar20;
        }
    }
    bVar5 = (uVar2 & 0x80000000) == 0;
    uVar1 = uVar2 << 1 | (u32)((uVar3 & 0x20000) != 0);
    if (bVar20) {
        if (bVar20) {
            uVar2 = uVar1 + a1;
            bVar21 = uVar2 < uVar1;
            if (!bVar5) {
                bVar21 = !bVar21;
            }
        } else {
            uVar2 = uVar1 - a1;
            bVar21 = uVar1 < uVar2;
            if (bVar5) {
                bVar21 = !bVar21;
            }
        }
    } else {
        uVar2 = uVar1 - a1;
        bVar21 = uVar1 < uVar2;
        if (!bVar5) {
            bVar21 = !bVar21;
        }
    }
    bVar5 = (uVar2 & 0x80000000) == 0;
    uVar1 = uVar2 << 1 | (u32)((uVar3 & 0x10000) != 0);
    if (bVar21) {
        if (bVar21) {
            uVar2 = uVar1 + a1;
            bVar22 = uVar2 < uVar1;
            if (!bVar5) {
                bVar22 = !bVar22;
            }
        } else {
            uVar2 = uVar1 - a1;
            bVar22 = uVar1 < uVar2;
            if (bVar5) {
                bVar22 = !bVar22;
            }
        }
    } else {
        uVar2 = uVar1 - a1;
        bVar22 = uVar1 < uVar2;
        if (!bVar5) {
            bVar22 = !bVar22;
        }
    }
    bVar5 = (uVar2 & 0x80000000) == 0;
    uVar1 = uVar2 << 1 | (u32)((uVar3 & 0x8000) != 0);
    if (bVar22) {
        if (bVar22) {
            uVar2 = uVar1 + a1;
            bVar23 = uVar2 < uVar1;
            if (!bVar5) {
                bVar23 = !bVar23;
            }
        } else {
            uVar2 = uVar1 - a1;
            bVar23 = uVar1 < uVar2;
            if (bVar5) {
                bVar23 = !bVar23;
            }
        }
    } else {
        uVar2 = uVar1 - a1;
        bVar23 = uVar1 < uVar2;
        if (!bVar5) {
            bVar23 = !bVar23;
        }
    }
    bVar5 = (uVar2 & 0x80000000) == 0;
    uVar1 = uVar2 << 1 | (u32)((uVar3 & 0x4000) != 0);
    if (bVar23) {
        if (bVar23) {
            uVar2 = uVar1 + a1;
            bVar24 = uVar2 < uVar1;
            if (!bVar5) {
                bVar24 = !bVar24;
            }
        } else {
            uVar2 = uVar1 - a1;
            bVar24 = uVar1 < uVar2;
            if (bVar5) {
                bVar24 = !bVar24;
            }
        }
    } else {
        uVar2 = uVar1 - a1;
        bVar24 = uVar1 < uVar2;
        if (!bVar5) {
            bVar24 = !bVar24;
        }
    }
    bVar5 = (uVar2 & 0x80000000) == 0;
    uVar1 = uVar2 << 1 | (u32)((uVar3 & 0x2000) != 0);
    if (bVar24) {
        if (bVar24) {
            uVar2 = uVar1 + a1;
            bVar25 = uVar2 < uVar1;
            if (!bVar5) {
                bVar25 = !bVar25;
            }
        } else {
            uVar2 = uVar1 - a1;
            bVar25 = uVar1 < uVar2;
            if (bVar5) {
                bVar25 = !bVar25;
            }
        }
    } else {
        uVar2 = uVar1 - a1;
        bVar25 = uVar1 < uVar2;
        if (!bVar5) {
            bVar25 = !bVar25;
        }
    }
    bVar5 = (uVar2 & 0x80000000) == 0;
    uVar1 = uVar2 << 1 | (u32)((uVar3 & 0x1000) != 0);
    if (bVar25) {
        if (bVar25) {
            uVar2 = uVar1 + a1;
            bVar26 = uVar2 < uVar1;
            if (!bVar5) {
                bVar26 = !bVar26;
            }
        } else {
            uVar2 = uVar1 - a1;
            bVar26 = uVar1 < uVar2;
            if (bVar5) {
                bVar26 = !bVar26;
            }
        }
    } else {
        uVar2 = uVar1 - a1;
        bVar26 = uVar1 < uVar2;
        if (!bVar5) {
            bVar26 = !bVar26;
        }
    }
    bVar5 = (uVar2 & 0x80000000) == 0;
    uVar1 = uVar2 << 1 | (u32)((uVar3 & 0x800) != 0);
    if (bVar26) {
        if (bVar26) {
            uVar2 = uVar1 + a1;
            bVar27 = uVar2 < uVar1;
            if (!bVar5) {
                bVar27 = !bVar27;
            }
        } else {
            uVar2 = uVar1 - a1;
            bVar27 = uVar1 < uVar2;
            if (bVar5) {
                bVar27 = !bVar27;
            }
        }
    } else {
        uVar2 = uVar1 - a1;
        bVar27 = uVar1 < uVar2;
        if (!bVar5) {
            bVar27 = !bVar27;
        }
    }
    bVar5 = (uVar2 & 0x80000000) == 0;
    uVar1 = uVar2 << 1 | (u32)((uVar3 & 0x400) != 0);
    if (bVar27) {
        if (bVar27) {
            uVar2 = uVar1 + a1;
            bVar28 = uVar2 < uVar1;
            if (!bVar5) {
                bVar28 = !bVar28;
            }
        } else {
            uVar2 = uVar1 - a1;
            bVar28 = uVar1 < uVar2;
            if (bVar5) {
                bVar28 = !bVar28;
            }
        }
    } else {
        uVar2 = uVar1 - a1;
        bVar28 = uVar1 < uVar2;
        if (!bVar5) {
            bVar28 = !bVar28;
        }
    }
    bVar5 = (uVar2 & 0x80000000) == 0;
    uVar1 = uVar2 << 1 | (u32)((uVar3 & 0x200) != 0);
    if (bVar28) {
        if (bVar28) {
            uVar2 = uVar1 + a1;
            bVar29 = uVar2 < uVar1;
            if (!bVar5) {
                bVar29 = !bVar29;
            }
        } else {
            uVar2 = uVar1 - a1;
            bVar29 = uVar1 < uVar2;
            if (bVar5) {
                bVar29 = !bVar29;
            }
        }
    } else {
        uVar2 = uVar1 - a1;
        bVar29 = uVar1 < uVar2;
        if (!bVar5) {
            bVar29 = !bVar29;
        }
    }
    bVar5 = (uVar2 & 0x80000000) == 0;
    uVar1 = uVar2 << 1 | (u32)((uVar3 & 0x100) != 0);
    if (bVar29) {
        if (bVar29) {
            uVar2 = uVar1 + a1;
            bVar30 = uVar2 < uVar1;
            if (!bVar5) {
                bVar30 = !bVar30;
            }
        } else {
            uVar2 = uVar1 - a1;
            bVar30 = uVar1 < uVar2;
            if (bVar5) {
                bVar30 = !bVar30;
            }
        }
    } else {
        uVar2 = uVar1 - a1;
        bVar30 = uVar1 < uVar2;
        if (!bVar5) {
            bVar30 = !bVar30;
        }
    }
    bVar5 = (uVar2 & 0x80000000) == 0;
    uVar1 = uVar2 << 1 | (u32)((uVar3 & 0x80) != 0);
    if (bVar30) {
        if (bVar30) {
            uVar2 = uVar1 + a1;
            bVar31 = uVar2 < uVar1;
            if (!bVar5) {
                bVar31 = !bVar31;
            }
        } else {
            uVar2 = uVar1 - a1;
            bVar31 = uVar1 < uVar2;
            if (bVar5) {
                bVar31 = !bVar31;
            }
        }
    } else {
        uVar2 = uVar1 - a1;
        bVar31 = uVar1 < uVar2;
        if (!bVar5) {
            bVar31 = !bVar31;
        }
    }
    bVar5 = (uVar2 & 0x80000000) == 0;
    uVar1 = uVar2 << 1 | (u32)((uVar3 & 0x40) != 0);
    if (bVar31) {
        if (bVar31) {
            uVar2 = uVar1 + a1;
            bVar32 = uVar2 < uVar1;
            if (!bVar5) {
                bVar32 = !bVar32;
            }
        } else {
            uVar2 = uVar1 - a1;
            bVar32 = uVar1 < uVar2;
            if (bVar5) {
                bVar32 = !bVar32;
            }
        }
    } else {
        uVar2 = uVar1 - a1;
        bVar32 = uVar1 < uVar2;
        if (!bVar5) {
            bVar32 = !bVar32;
        }
    }
    bVar5 = (uVar2 & 0x80000000) == 0;
    uVar1 = uVar2 << 1 | (u32)((uVar3 & 0x20) != 0);
    if (bVar32) {
        if (bVar32) {
            uVar2 = uVar1 + a1;
            bVar33 = uVar2 < uVar1;
            if (!bVar5) {
                bVar33 = !bVar33;
            }
        } else {
            uVar2 = uVar1 - a1;
            bVar33 = uVar1 < uVar2;
            if (bVar5) {
                bVar33 = !bVar33;
            }
        }
    } else {
        uVar2 = uVar1 - a1;
        bVar33 = uVar1 < uVar2;
        if (!bVar5) {
            bVar33 = !bVar33;
        }
    }
    bVar5 = (uVar2 & 0x80000000) == 0;
    uVar1 = uVar2 << 1 | (u32)((uVar3 & 0x10) != 0);
    if (bVar33) {
        if (bVar33) {
            uVar2 = uVar1 + a1;
            bVar34 = uVar2 < uVar1;
            if (!bVar5) {
                bVar34 = !bVar34;
            }
        } else {
            uVar2 = uVar1 - a1;
            bVar34 = uVar1 < uVar2;
            if (bVar5) {
                bVar34 = !bVar34;
            }
        }
    } else {
        uVar2 = uVar1 - a1;
        bVar34 = uVar1 < uVar2;
        if (!bVar5) {
            bVar34 = !bVar34;
        }
    }
    bVar5 = (uVar2 & 0x80000000) == 0;
    uVar1 = uVar2 << 1 | (u32)((uVar3 & 8) != 0);
    if (bVar34) {
        if (bVar34) {
            uVar2 = uVar1 + a1;
            bVar35 = uVar2 < uVar1;
            if (!bVar5) {
                bVar35 = !bVar35;
            }
        } else {
            uVar2 = uVar1 - a1;
            bVar35 = uVar1 < uVar2;
            if (bVar5) {
                bVar35 = !bVar35;
            }
        }
    } else {
        uVar2 = uVar1 - a1;
        bVar35 = uVar1 < uVar2;
        if (!bVar5) {
            bVar35 = !bVar35;
        }
    }
    bVar5 = (uVar2 & 0x80000000) == 0;
    uVar1 = uVar2 << 1 | (u32)((uVar3 & 4) != 0);
    if (bVar35) {
        if (bVar35) {
            bVar36 = uVar1 + a1 < uVar1;
            if (!bVar5) {
                bVar36 = !bVar36;
            }
        } else {
            bVar36 = uVar1 < uVar1 - a1;
            if (bVar5) {
                bVar36 = !bVar36;
            }
        }
    } else {
        bVar36 = uVar1 < uVar1 - a1;
        if (!bVar5) {
            bVar36 = !bVar36;
        }
    }
    return (((((((((((((((((((((((((((((((u32)!bVar4 << 1 | (u32)!bVar6) << 1 | (u32)!bVar7) << 1 | (u32)!bVar8) << 1 |
                                      (u32)!bVar9)
                                         << 1 |
                                     (u32)!bVar10)
                                        << 1 |
                                    (u32)!bVar11)
                                       << 1 |
                                   (u32)!bVar12)
                                      << 1 |
                                  (u32)!bVar13)
                                     << 1 |
                                 (u32)!bVar14)
                                    << 1 |
                                (u32)!bVar15)
                                   << 1 |
                               (u32)!bVar16)
                                  << 1 |
                              (u32)!bVar17)
                                 << 1 |
                             (u32)!bVar18)
                                << 1 |
                            (u32)!bVar19)
                               << 1 |
                           (u32)!bVar20)
                              << 1 |
                          (u32)!bVar21)
                             << 1 |
                         (u32)!bVar22)
                            << 1 |
                        (u32)!bVar23)
                           << 1 |
                       (u32)!bVar24)
                          << 1 |
                      (u32)!bVar25)
                         << 1 |
                     (u32)!bVar26)
                        << 1 |
                    (u32)!bVar27)
                       << 1 |
                   (u32)!bVar28)
                      << 1 |
                  (u32)!bVar29)
                     << 1 |
                 (u32)!bVar30)
                    << 1 |
                (u32)!bVar31)
                   << 1 |
               (u32)!bVar32)
                  << 1 |
              (u32)!bVar33)
                 << 1 |
             (u32)!bVar34)
                << 1 |
            (u32)!bVar35)
               << 1 |
           (u32)!bVar36;
}

/*
 * libgcc_divide_helper_01031c  0x8c01031c
 * called by: CAnimBody_random_flags_delay, CAnimal_ctor, CAnimal_m2_02573c, CAnimal_m3_026078,
 * CAnimal_uses_set_field_4_on_field_f8_02911c, CHerb_LoadGRWait, CProlog_uses_libgcc_divide_helper_0b9d30,
 * Class_129808_uses_libgcc_divide_helper_01679c (+69 more)
 */
int libgcc_divide_helper_01031c(u32 a0, u32 a1, u32 a2) {
    u32 uVar1;
    u32 in_r0;
    u32 uVar2;
    u32 uVar3;
    bool bVar4;
    bool bVar5;
    bool bVar6;
    bool bVar7;

    if (a1 == 0) {
        return in_r0;
    }
    bVar5 = (a0 & 0x80000000) != 0;
    uVar2 = (u32)bVar5;
    uVar3 = a0 - (uVar2 != 0);
    bVar6 = (-uVar2 & 0x80000000) != 0;
    bVar4 = (a1 & 0x80000000) != 0;
    bVar7 = (-uVar2 & 0x80000000) == 0;
    uVar2 = uVar2 * -2 | (u32)((uVar3 & 0x80000000) != 0);
    if (bVar6 || bVar4) {
        if (!bVar6 && bVar4) {
            uVar1 = uVar2 + a1;
            bVar6 = uVar1 < uVar2;
            if (bVar7) {
                bVar6 = !bVar6;
            }
        } else if (bVar6 && !bVar4) {
            uVar1 = uVar2 + a1;
            bVar6 = uVar1 < uVar2;
            if (!bVar7) {
                bVar6 = !bVar6;
            }
        } else {
            uVar1 = uVar2 - a1;
            bVar6 = uVar2 < uVar1;
            if (bVar7) {
                bVar6 = !bVar6;
            }
        }
    } else {
        uVar1 = uVar2 - a1;
        bVar6 = uVar2 < uVar1;
        if (!bVar7) {
            bVar6 = !bVar6;
        }
    }
    bVar7 = (uVar1 & 0x80000000) == 0;
    uVar2 = uVar1 << 1 | (u32)((uVar3 * 2 & 0x80000000) != 0);
    if (bVar6 || bVar4) {
        if (!bVar6 && bVar4) {
            uVar1 = uVar2 + a1;
            bVar6 = uVar1 < uVar2;
            if (bVar7) {
                bVar6 = !bVar6;
            }
        } else if (bVar6 && !bVar4) {
            uVar1 = uVar2 + a1;
            bVar6 = uVar1 < uVar2;
            if (!bVar7) {
                bVar6 = !bVar6;
            }
        } else {
            uVar1 = uVar2 - a1;
            bVar6 = uVar2 < uVar1;
            if (bVar7) {
                bVar6 = !bVar6;
            }
        }
    } else {
        uVar1 = uVar2 - a1;
        bVar6 = uVar2 < uVar1;
        if (!bVar7) {
            bVar6 = !bVar6;
        }
    }
    bVar7 = (uVar1 & 0x80000000) == 0;
    uVar2 = uVar1 << 1 | (u32)((uVar3 * 4 & 0x80000000) != 0);
    if (bVar6 || bVar4) {
        if (!bVar6 && bVar4) {
            uVar1 = uVar2 + a1;
            bVar6 = uVar1 < uVar2;
            if (bVar7) {
                bVar6 = !bVar6;
            }
        } else if (bVar6 && !bVar4) {
            uVar1 = uVar2 + a1;
            bVar6 = uVar1 < uVar2;
            if (!bVar7) {
                bVar6 = !bVar6;
            }
        } else {
            uVar1 = uVar2 - a1;
            bVar6 = uVar2 < uVar1;
            if (bVar7) {
                bVar6 = !bVar6;
            }
        }
    } else {
        uVar1 = uVar2 - a1;
        bVar6 = uVar2 < uVar1;
        if (!bVar7) {
            bVar6 = !bVar6;
        }
    }
    bVar7 = (uVar1 & 0x80000000) == 0;
    uVar2 = uVar1 << 1 | (u32)((uVar3 * 8 & 0x80000000) != 0);
    if (bVar6 || bVar4) {
        if (!bVar6 && bVar4) {
            uVar1 = uVar2 + a1;
            bVar6 = uVar1 < uVar2;
            if (bVar7) {
                bVar6 = !bVar6;
            }
        } else if (bVar6 && !bVar4) {
            uVar1 = uVar2 + a1;
            bVar6 = uVar1 < uVar2;
            if (!bVar7) {
                bVar6 = !bVar6;
            }
        } else {
            uVar1 = uVar2 - a1;
            bVar6 = uVar2 < uVar1;
            if (bVar7) {
                bVar6 = !bVar6;
            }
        }
    } else {
        uVar1 = uVar2 - a1;
        bVar6 = uVar2 < uVar1;
        if (!bVar7) {
            bVar6 = !bVar6;
        }
    }
    bVar7 = (uVar1 & 0x80000000) == 0;
    uVar2 = uVar1 << 1 | (u32)((uVar3 * 0x10 & 0x80000000) != 0);
    if (bVar6 || bVar4) {
        if (!bVar6 && bVar4) {
            uVar1 = uVar2 + a1;
            bVar6 = uVar1 < uVar2;
            if (bVar7) {
                bVar6 = !bVar6;
            }
        } else if (bVar6 && !bVar4) {
            uVar1 = uVar2 + a1;
            bVar6 = uVar1 < uVar2;
            if (!bVar7) {
                bVar6 = !bVar6;
            }
        } else {
            uVar1 = uVar2 - a1;
            bVar6 = uVar2 < uVar1;
            if (bVar7) {
                bVar6 = !bVar6;
            }
        }
    } else {
        uVar1 = uVar2 - a1;
        bVar6 = uVar2 < uVar1;
        if (!bVar7) {
            bVar6 = !bVar6;
        }
    }
    bVar7 = (uVar1 & 0x80000000) == 0;
    uVar2 = uVar1 << 1 | (u32)((uVar3 * 0x20 & 0x80000000) != 0);
    if (bVar6 || bVar4) {
        if (!bVar6 && bVar4) {
            uVar1 = uVar2 + a1;
            bVar6 = uVar1 < uVar2;
            if (bVar7) {
                bVar6 = !bVar6;
            }
        } else if (bVar6 && !bVar4) {
            uVar1 = uVar2 + a1;
            bVar6 = uVar1 < uVar2;
            if (!bVar7) {
                bVar6 = !bVar6;
            }
        } else {
            uVar1 = uVar2 - a1;
            bVar6 = uVar2 < uVar1;
            if (bVar7) {
                bVar6 = !bVar6;
            }
        }
    } else {
        uVar1 = uVar2 - a1;
        bVar6 = uVar2 < uVar1;
        if (!bVar7) {
            bVar6 = !bVar6;
        }
    }
    bVar7 = (uVar1 & 0x80000000) == 0;
    uVar2 = uVar1 << 1 | (u32)((uVar3 * 0x40 & 0x80000000) != 0);
    if (bVar6 || bVar4) {
        if (!bVar6 && bVar4) {
            uVar1 = uVar2 + a1;
            bVar6 = uVar1 < uVar2;
            if (bVar7) {
                bVar6 = !bVar6;
            }
        } else if (bVar6 && !bVar4) {
            uVar1 = uVar2 + a1;
            bVar6 = uVar1 < uVar2;
            if (!bVar7) {
                bVar6 = !bVar6;
            }
        } else {
            uVar1 = uVar2 - a1;
            bVar6 = uVar2 < uVar1;
            if (bVar7) {
                bVar6 = !bVar6;
            }
        }
    } else {
        uVar1 = uVar2 - a1;
        bVar6 = uVar2 < uVar1;
        if (!bVar7) {
            bVar6 = !bVar6;
        }
    }
    bVar7 = (uVar1 & 0x80000000) == 0;
    uVar2 = uVar1 << 1 | (u32)((uVar3 * 0x80 & 0x80000000) != 0);
    if (bVar6 || bVar4) {
        if (!bVar6 && bVar4) {
            uVar1 = uVar2 + a1;
            bVar6 = uVar1 < uVar2;
            if (bVar7) {
                bVar6 = !bVar6;
            }
        } else if (bVar6 && !bVar4) {
            uVar1 = uVar2 + a1;
            bVar6 = uVar1 < uVar2;
            if (!bVar7) {
                bVar6 = !bVar6;
            }
        } else {
            uVar1 = uVar2 - a1;
            bVar6 = uVar2 < uVar1;
            if (bVar7) {
                bVar6 = !bVar6;
            }
        }
    } else {
        uVar1 = uVar2 - a1;
        bVar6 = uVar2 < uVar1;
        if (!bVar7) {
            bVar6 = !bVar6;
        }
    }
    bVar7 = (uVar1 & 0x80000000) == 0;
    uVar2 = uVar1 << 1 | (u32)((uVar3 * 0x100 & 0x80000000) != 0);
    if (bVar6 || bVar4) {
        if (!bVar6 && bVar4) {
            uVar1 = uVar2 + a1;
            bVar6 = uVar1 < uVar2;
            if (bVar7) {
                bVar6 = !bVar6;
            }
        } else if (bVar6 && !bVar4) {
            uVar1 = uVar2 + a1;
            bVar6 = uVar1 < uVar2;
            if (!bVar7) {
                bVar6 = !bVar6;
            }
        } else {
            uVar1 = uVar2 - a1;
            bVar6 = uVar2 < uVar1;
            if (bVar7) {
                bVar6 = !bVar6;
            }
        }
    } else {
        uVar1 = uVar2 - a1;
        bVar6 = uVar2 < uVar1;
        if (!bVar7) {
            bVar6 = !bVar6;
        }
    }
    bVar7 = (uVar1 & 0x80000000) == 0;
    uVar2 = uVar1 << 1 | (u32)((uVar3 * 0x200 & 0x80000000) != 0);
    if (bVar6 || bVar4) {
        if (!bVar6 && bVar4) {
            uVar1 = uVar2 + a1;
            bVar6 = uVar1 < uVar2;
            if (bVar7) {
                bVar6 = !bVar6;
            }
        } else if (bVar6 && !bVar4) {
            uVar1 = uVar2 + a1;
            bVar6 = uVar1 < uVar2;
            if (!bVar7) {
                bVar6 = !bVar6;
            }
        } else {
            uVar1 = uVar2 - a1;
            bVar6 = uVar2 < uVar1;
            if (bVar7) {
                bVar6 = !bVar6;
            }
        }
    } else {
        uVar1 = uVar2 - a1;
        bVar6 = uVar2 < uVar1;
        if (!bVar7) {
            bVar6 = !bVar6;
        }
    }
    bVar7 = (uVar1 & 0x80000000) == 0;
    uVar2 = uVar1 << 1 | (u32)((uVar3 * 0x400 & 0x80000000) != 0);
    if (bVar6 || bVar4) {
        if (!bVar6 && bVar4) {
            uVar1 = uVar2 + a1;
            bVar6 = uVar1 < uVar2;
            if (bVar7) {
                bVar6 = !bVar6;
            }
        } else if (bVar6 && !bVar4) {
            uVar1 = uVar2 + a1;
            bVar6 = uVar1 < uVar2;
            if (!bVar7) {
                bVar6 = !bVar6;
            }
        } else {
            uVar1 = uVar2 - a1;
            bVar6 = uVar2 < uVar1;
            if (bVar7) {
                bVar6 = !bVar6;
            }
        }
    } else {
        uVar1 = uVar2 - a1;
        bVar6 = uVar2 < uVar1;
        if (!bVar7) {
            bVar6 = !bVar6;
        }
    }
    bVar7 = (uVar1 & 0x80000000) == 0;
    uVar2 = uVar1 << 1 | (u32)((uVar3 * 0x800 & 0x80000000) != 0);
    if (bVar6 || bVar4) {
        if (!bVar6 && bVar4) {
            uVar1 = uVar2 + a1;
            bVar6 = uVar1 < uVar2;
            if (bVar7) {
                bVar6 = !bVar6;
            }
        } else if (bVar6 && !bVar4) {
            uVar1 = uVar2 + a1;
            bVar6 = uVar1 < uVar2;
            if (!bVar7) {
                bVar6 = !bVar6;
            }
        } else {
            uVar1 = uVar2 - a1;
            bVar6 = uVar2 < uVar1;
            if (bVar7) {
                bVar6 = !bVar6;
            }
        }
    } else {
        uVar1 = uVar2 - a1;
        bVar6 = uVar2 < uVar1;
        if (!bVar7) {
            bVar6 = !bVar6;
        }
    }
    bVar7 = (uVar1 & 0x80000000) == 0;
    uVar2 = uVar1 << 1 | (u32)((uVar3 * 0x1000 & 0x80000000) != 0);
    if (bVar6 || bVar4) {
        if (!bVar6 && bVar4) {
            uVar1 = uVar2 + a1;
            bVar6 = uVar1 < uVar2;
            if (bVar7) {
                bVar6 = !bVar6;
            }
        } else if (bVar6 && !bVar4) {
            uVar1 = uVar2 + a1;
            bVar6 = uVar1 < uVar2;
            if (!bVar7) {
                bVar6 = !bVar6;
            }
        } else {
            uVar1 = uVar2 - a1;
            bVar6 = uVar2 < uVar1;
            if (bVar7) {
                bVar6 = !bVar6;
            }
        }
    } else {
        uVar1 = uVar2 - a1;
        bVar6 = uVar2 < uVar1;
        if (!bVar7) {
            bVar6 = !bVar6;
        }
    }
    bVar7 = (uVar1 & 0x80000000) == 0;
    uVar2 = uVar1 << 1 | (u32)((uVar3 * 0x2000 & 0x80000000) != 0);
    if (bVar6 || bVar4) {
        if (!bVar6 && bVar4) {
            uVar1 = uVar2 + a1;
            bVar6 = uVar1 < uVar2;
            if (bVar7) {
                bVar6 = !bVar6;
            }
        } else if (bVar6 && !bVar4) {
            uVar1 = uVar2 + a1;
            bVar6 = uVar1 < uVar2;
            if (!bVar7) {
                bVar6 = !bVar6;
            }
        } else {
            uVar1 = uVar2 - a1;
            bVar6 = uVar2 < uVar1;
            if (bVar7) {
                bVar6 = !bVar6;
            }
        }
    } else {
        uVar1 = uVar2 - a1;
        bVar6 = uVar2 < uVar1;
        if (!bVar7) {
            bVar6 = !bVar6;
        }
    }
    bVar7 = (uVar1 & 0x80000000) == 0;
    uVar2 = uVar1 << 1 | (u32)((uVar3 * 0x4000 & 0x80000000) != 0);
    if (bVar6 || bVar4) {
        if (!bVar6 && bVar4) {
            uVar1 = uVar2 + a1;
            bVar6 = uVar1 < uVar2;
            if (bVar7) {
                bVar6 = !bVar6;
            }
        } else if (bVar6 && !bVar4) {
            uVar1 = uVar2 + a1;
            bVar6 = uVar1 < uVar2;
            if (!bVar7) {
                bVar6 = !bVar6;
            }
        } else {
            uVar1 = uVar2 - a1;
            bVar6 = uVar2 < uVar1;
            if (bVar7) {
                bVar6 = !bVar6;
            }
        }
    } else {
        uVar1 = uVar2 - a1;
        bVar6 = uVar2 < uVar1;
        if (!bVar7) {
            bVar6 = !bVar6;
        }
    }
    bVar7 = (uVar1 & 0x80000000) == 0;
    uVar2 = uVar1 << 1 | (u32)((uVar3 * 0x8000 & 0x80000000) != 0);
    if (bVar6 || bVar4) {
        if (!bVar6 && bVar4) {
            uVar1 = uVar2 + a1;
            bVar6 = uVar1 < uVar2;
            if (bVar7) {
                bVar6 = !bVar6;
            }
        } else if (bVar6 && !bVar4) {
            uVar1 = uVar2 + a1;
            bVar6 = uVar1 < uVar2;
            if (!bVar7) {
                bVar6 = !bVar6;
            }
        } else {
            uVar1 = uVar2 - a1;
            bVar6 = uVar2 < uVar1;
            if (bVar7) {
                bVar6 = !bVar6;
            }
        }
    } else {
        uVar1 = uVar2 - a1;
        bVar6 = uVar2 < uVar1;
        if (!bVar7) {
            bVar6 = !bVar6;
        }
    }
    bVar7 = (uVar1 & 0x80000000) == 0;
    uVar2 = uVar1 << 1 | (u32)((uVar3 * 0x10000 & 0x80000000) != 0);
    if (bVar6 || bVar4) {
        if (!bVar6 && bVar4) {
            uVar1 = uVar2 + a1;
            bVar6 = uVar1 < uVar2;
            if (bVar7) {
                bVar6 = !bVar6;
            }
        } else if (bVar6 && !bVar4) {
            uVar1 = uVar2 + a1;
            bVar6 = uVar1 < uVar2;
            if (!bVar7) {
                bVar6 = !bVar6;
            }
        } else {
            uVar1 = uVar2 - a1;
            bVar6 = uVar2 < uVar1;
            if (bVar7) {
                bVar6 = !bVar6;
            }
        }
    } else {
        uVar1 = uVar2 - a1;
        bVar6 = uVar2 < uVar1;
        if (!bVar7) {
            bVar6 = !bVar6;
        }
    }
    bVar7 = (uVar1 & 0x80000000) == 0;
    uVar2 = uVar1 << 1 | (u32)((uVar3 * 0x20000 & 0x80000000) != 0);
    if (bVar6 || bVar4) {
        if (!bVar6 && bVar4) {
            uVar1 = uVar2 + a1;
            bVar6 = uVar1 < uVar2;
            if (bVar7) {
                bVar6 = !bVar6;
            }
        } else if (bVar6 && !bVar4) {
            uVar1 = uVar2 + a1;
            bVar6 = uVar1 < uVar2;
            if (!bVar7) {
                bVar6 = !bVar6;
            }
        } else {
            uVar1 = uVar2 - a1;
            bVar6 = uVar2 < uVar1;
            if (bVar7) {
                bVar6 = !bVar6;
            }
        }
    } else {
        uVar1 = uVar2 - a1;
        bVar6 = uVar2 < uVar1;
        if (!bVar7) {
            bVar6 = !bVar6;
        }
    }
    bVar7 = (uVar1 & 0x80000000) == 0;
    uVar2 = uVar1 << 1 | (u32)((uVar3 * 0x40000 & 0x80000000) != 0);
    if (bVar6 || bVar4) {
        if (!bVar6 && bVar4) {
            uVar1 = uVar2 + a1;
            bVar6 = uVar1 < uVar2;
            if (bVar7) {
                bVar6 = !bVar6;
            }
        } else if (bVar6 && !bVar4) {
            uVar1 = uVar2 + a1;
            bVar6 = uVar1 < uVar2;
            if (!bVar7) {
                bVar6 = !bVar6;
            }
        } else {
            uVar1 = uVar2 - a1;
            bVar6 = uVar2 < uVar1;
            if (bVar7) {
                bVar6 = !bVar6;
            }
        }
    } else {
        uVar1 = uVar2 - a1;
        bVar6 = uVar2 < uVar1;
        if (!bVar7) {
            bVar6 = !bVar6;
        }
    }
    bVar7 = (uVar1 & 0x80000000) == 0;
    uVar2 = uVar1 << 1 | (u32)((uVar3 * 0x80000 & 0x80000000) != 0);
    if (bVar6 || bVar4) {
        if (!bVar6 && bVar4) {
            uVar1 = uVar2 + a1;
            bVar6 = uVar1 < uVar2;
            if (bVar7) {
                bVar6 = !bVar6;
            }
        } else if (bVar6 && !bVar4) {
            uVar1 = uVar2 + a1;
            bVar6 = uVar1 < uVar2;
            if (!bVar7) {
                bVar6 = !bVar6;
            }
        } else {
            uVar1 = uVar2 - a1;
            bVar6 = uVar2 < uVar1;
            if (bVar7) {
                bVar6 = !bVar6;
            }
        }
    } else {
        uVar1 = uVar2 - a1;
        bVar6 = uVar2 < uVar1;
        if (!bVar7) {
            bVar6 = !bVar6;
        }
    }
    bVar7 = (uVar1 & 0x80000000) == 0;
    uVar2 = uVar1 << 1 | (u32)((uVar3 * 0x100000 & 0x80000000) != 0);
    if (bVar6 || bVar4) {
        if (!bVar6 && bVar4) {
            uVar1 = uVar2 + a1;
            bVar6 = uVar1 < uVar2;
            if (bVar7) {
                bVar6 = !bVar6;
            }
        } else if (bVar6 && !bVar4) {
            uVar1 = uVar2 + a1;
            bVar6 = uVar1 < uVar2;
            if (!bVar7) {
                bVar6 = !bVar6;
            }
        } else {
            uVar1 = uVar2 - a1;
            bVar6 = uVar2 < uVar1;
            if (bVar7) {
                bVar6 = !bVar6;
            }
        }
    } else {
        uVar1 = uVar2 - a1;
        bVar6 = uVar2 < uVar1;
        if (!bVar7) {
            bVar6 = !bVar6;
        }
    }
    bVar7 = (uVar1 & 0x80000000) == 0;
    uVar2 = uVar1 << 1 | (u32)((uVar3 * 0x200000 & 0x80000000) != 0);
    if (bVar6 || bVar4) {
        if (!bVar6 && bVar4) {
            uVar1 = uVar2 + a1;
            bVar6 = uVar1 < uVar2;
            if (bVar7) {
                bVar6 = !bVar6;
            }
        } else if (bVar6 && !bVar4) {
            uVar1 = uVar2 + a1;
            bVar6 = uVar1 < uVar2;
            if (!bVar7) {
                bVar6 = !bVar6;
            }
        } else {
            uVar1 = uVar2 - a1;
            bVar6 = uVar2 < uVar1;
            if (bVar7) {
                bVar6 = !bVar6;
            }
        }
    } else {
        uVar1 = uVar2 - a1;
        bVar6 = uVar2 < uVar1;
        if (!bVar7) {
            bVar6 = !bVar6;
        }
    }
    bVar7 = (uVar1 & 0x80000000) == 0;
    uVar2 = uVar1 << 1 | (u32)((uVar3 * 0x400000 & 0x80000000) != 0);
    if (bVar6 || bVar4) {
        if (!bVar6 && bVar4) {
            uVar1 = uVar2 + a1;
            bVar6 = uVar1 < uVar2;
            if (bVar7) {
                bVar6 = !bVar6;
            }
        } else if (bVar6 && !bVar4) {
            uVar1 = uVar2 + a1;
            bVar6 = uVar1 < uVar2;
            if (!bVar7) {
                bVar6 = !bVar6;
            }
        } else {
            uVar1 = uVar2 - a1;
            bVar6 = uVar2 < uVar1;
            if (bVar7) {
                bVar6 = !bVar6;
            }
        }
    } else {
        uVar1 = uVar2 - a1;
        bVar6 = uVar2 < uVar1;
        if (!bVar7) {
            bVar6 = !bVar6;
        }
    }
    bVar7 = (uVar1 & 0x80000000) == 0;
    uVar2 = uVar1 << 1 | (u32)((uVar3 * 0x800000 & 0x80000000) != 0);
    if (bVar6 || bVar4) {
        if (!bVar6 && bVar4) {
            uVar1 = uVar2 + a1;
            bVar6 = uVar1 < uVar2;
            if (bVar7) {
                bVar6 = !bVar6;
            }
        } else if (bVar6 && !bVar4) {
            uVar1 = uVar2 + a1;
            bVar6 = uVar1 < uVar2;
            if (!bVar7) {
                bVar6 = !bVar6;
            }
        } else {
            uVar1 = uVar2 - a1;
            bVar6 = uVar2 < uVar1;
            if (bVar7) {
                bVar6 = !bVar6;
            }
        }
    } else {
        uVar1 = uVar2 - a1;
        bVar6 = uVar2 < uVar1;
        if (!bVar7) {
            bVar6 = !bVar6;
        }
    }
    bVar7 = (uVar1 & 0x80000000) == 0;
    uVar2 = uVar1 << 1 | (u32)((uVar3 * 0x1000000 & 0x80000000) != 0);
    if (bVar6 || bVar4) {
        if (!bVar6 && bVar4) {
            uVar1 = uVar2 + a1;
            bVar6 = uVar1 < uVar2;
            if (bVar7) {
                bVar6 = !bVar6;
            }
        } else if (bVar6 && !bVar4) {
            uVar1 = uVar2 + a1;
            bVar6 = uVar1 < uVar2;
            if (!bVar7) {
                bVar6 = !bVar6;
            }
        } else {
            uVar1 = uVar2 - a1;
            bVar6 = uVar2 < uVar1;
            if (bVar7) {
                bVar6 = !bVar6;
            }
        }
    } else {
        uVar1 = uVar2 - a1;
        bVar6 = uVar2 < uVar1;
        if (!bVar7) {
            bVar6 = !bVar6;
        }
    }
    bVar7 = (uVar1 & 0x80000000) == 0;
    uVar2 = uVar1 << 1 | (u32)((uVar3 * 0x2000000 & 0x80000000) != 0);
    if (bVar6 || bVar4) {
        if (!bVar6 && bVar4) {
            uVar1 = uVar2 + a1;
            bVar6 = uVar1 < uVar2;
            if (bVar7) {
                bVar6 = !bVar6;
            }
        } else if (bVar6 && !bVar4) {
            uVar1 = uVar2 + a1;
            bVar6 = uVar1 < uVar2;
            if (!bVar7) {
                bVar6 = !bVar6;
            }
        } else {
            uVar1 = uVar2 - a1;
            bVar6 = uVar2 < uVar1;
            if (bVar7) {
                bVar6 = !bVar6;
            }
        }
    } else {
        uVar1 = uVar2 - a1;
        bVar6 = uVar2 < uVar1;
        if (!bVar7) {
            bVar6 = !bVar6;
        }
    }
    bVar7 = (uVar1 & 0x80000000) == 0;
    uVar2 = uVar1 << 1 | (u32)((uVar3 * 0x4000000 & 0x80000000) != 0);
    if (bVar6 || bVar4) {
        if (!bVar6 && bVar4) {
            uVar1 = uVar2 + a1;
            bVar6 = uVar1 < uVar2;
            if (bVar7) {
                bVar6 = !bVar6;
            }
        } else if (bVar6 && !bVar4) {
            uVar1 = uVar2 + a1;
            bVar6 = uVar1 < uVar2;
            if (!bVar7) {
                bVar6 = !bVar6;
            }
        } else {
            uVar1 = uVar2 - a1;
            bVar6 = uVar2 < uVar1;
            if (bVar7) {
                bVar6 = !bVar6;
            }
        }
    } else {
        uVar1 = uVar2 - a1;
        bVar6 = uVar2 < uVar1;
        if (!bVar7) {
            bVar6 = !bVar6;
        }
    }
    bVar7 = (uVar1 & 0x80000000) == 0;
    uVar2 = uVar1 << 1 | (u32)((uVar3 * 0x8000000 & 0x80000000) != 0);
    if (bVar6 || bVar4) {
        if (!bVar6 && bVar4) {
            uVar1 = uVar2 + a1;
            bVar6 = uVar1 < uVar2;
            if (bVar7) {
                bVar6 = !bVar6;
            }
        } else if (bVar6 && !bVar4) {
            uVar1 = uVar2 + a1;
            bVar6 = uVar1 < uVar2;
            if (!bVar7) {
                bVar6 = !bVar6;
            }
        } else {
            uVar1 = uVar2 - a1;
            bVar6 = uVar2 < uVar1;
            if (bVar7) {
                bVar6 = !bVar6;
            }
        }
    } else {
        uVar1 = uVar2 - a1;
        bVar6 = uVar2 < uVar1;
        if (!bVar7) {
            bVar6 = !bVar6;
        }
    }
    bVar7 = (uVar1 & 0x80000000) == 0;
    uVar2 = uVar1 << 1 | (u32)((uVar3 * 0x10000000 & 0x80000000) != 0);
    if (bVar6 || bVar4) {
        if (!bVar6 && bVar4) {
            uVar1 = uVar2 + a1;
            bVar6 = uVar1 < uVar2;
            if (bVar7) {
                bVar6 = !bVar6;
            }
        } else if (bVar6 && !bVar4) {
            uVar1 = uVar2 + a1;
            bVar6 = uVar1 < uVar2;
            if (!bVar7) {
                bVar6 = !bVar6;
            }
        } else {
            uVar1 = uVar2 - a1;
            bVar6 = uVar2 < uVar1;
            if (bVar7) {
                bVar6 = !bVar6;
            }
        }
    } else {
        uVar1 = uVar2 - a1;
        bVar6 = uVar2 < uVar1;
        if (!bVar7) {
            bVar6 = !bVar6;
        }
    }
    bVar7 = (uVar1 & 0x80000000) == 0;
    uVar2 = uVar1 << 1 | (u32)((uVar3 * 0x20000000 & 0x80000000) != 0);
    if (bVar6 || bVar4) {
        if (!bVar6 && bVar4) {
            uVar1 = uVar2 + a1;
            bVar6 = uVar1 < uVar2;
            if (bVar7) {
                bVar6 = !bVar6;
            }
        } else if (bVar6 && !bVar4) {
            uVar1 = uVar2 + a1;
            bVar6 = uVar1 < uVar2;
            if (!bVar7) {
                bVar6 = !bVar6;
            }
        } else {
            uVar1 = uVar2 - a1;
            bVar6 = uVar2 < uVar1;
            if (bVar7) {
                bVar6 = !bVar6;
            }
        }
    } else {
        uVar1 = uVar2 - a1;
        bVar6 = uVar2 < uVar1;
        if (!bVar7) {
            bVar6 = !bVar6;
        }
    }
    bVar7 = (uVar1 & 0x80000000) == 0;
    uVar2 = uVar1 << 1 | (u32)((uVar3 * 0x40000000 & 0x80000000) != 0);
    if (bVar6 || bVar4) {
        if (!bVar6 && bVar4) {
            uVar1 = uVar2 + a1;
            bVar6 = uVar1 < uVar2;
            if (bVar7) {
                bVar6 = !bVar6;
            }
        } else if (bVar6 && !bVar4) {
            uVar1 = uVar2 + a1;
            bVar6 = uVar1 < uVar2;
            if (!bVar7) {
                bVar6 = !bVar6;
            }
        } else {
            uVar1 = uVar2 - a1;
            bVar6 = uVar2 < uVar1;
            if (bVar7) {
                bVar6 = !bVar6;
            }
        }
    } else {
        uVar1 = uVar2 - a1;
        bVar6 = uVar2 < uVar1;
        if (!bVar7) {
            bVar6 = !bVar6;
        }
    }
    uVar2 = uVar1 << 1 | (u32)((uVar3 & 1) != 0);
    if (bVar6 || bVar4) {
        if (!bVar6 && bVar4) {
            uVar2 = uVar2 + a1;
        } else if (bVar6 && !bVar4) {
            uVar2 = uVar2 + a1;
        } else {
            uVar2 = uVar2 - a1;
        }
    } else {
        uVar2 = uVar2 - a1;
    }
    if (((uVar2 & 0x80000000) != 0) != bVar5) {
        bVar6 = (uVar2 & 0x80000000) != 0;
        bVar4 = (a1 & 0x80000000) != 0;
        uVar2 = ((int)uVar2 >> 1) << 1 | (u32)((uVar2 & 1) != 0);
        if (bVar6 || bVar4) {
            if (!bVar6 && bVar4) {
                uVar2 = uVar2 + a1;
            } else if (bVar6 && !bVar4) {
                uVar2 = uVar2 + a1;
            } else {
                uVar2 = uVar2 - a1;
            }
        } else {
            uVar2 = uVar2 - a1;
        }
    }
    return uVar2 + bVar5;
}

/*
 * libgcc_divide_helper_0103d0  0x8c0103d0
 * called by: CAnimal_uses_table13019c_find_row_034d48, CGame_uses_libgcc_divide_helper_0cc784,
 * CProlog_uses_libgcc_divide_helper_0cd3c8, Class_12bea8_uses_libgcc_divide_helper_0d7b60,
 * game_uses_libgcc_divide_helper_02d854, game_uses_libgcc_divide_helper_0ba3e0, game_uses_rand_0d8890, game_vec_0d8aa0
 * (+2 more)
 */
u32 libgcc_divide_helper_0103d0(u32 a0, int a1) {
    u32 uVar1;
    u32 uVar2;
    u32 in_r0;
    u32 uVar3;
    bool bVar4;
    bool bVar5;

    if (a1 == 0) {
        return in_r0;
    }
    uVar2 = (u32)((a0 & 0x80000000) != 0);
    uVar1 = uVar2 - a1;
    bVar4 = (uVar1 & 0x80000000) == 0;
    uVar3 = uVar1 * 2 | (u32)((a0 & 0x40000000) != 0);
    if (uVar2 < uVar1) {
        if (uVar2 < uVar1) {
            uVar1 = uVar3 + a1;
            bVar5 = uVar1 < uVar3;
            if (!bVar4) {
                bVar5 = !bVar5;
            }
        } else {
            uVar1 = uVar3 - a1;
            bVar5 = uVar3 < uVar1;
            if (bVar4) {
                bVar5 = !bVar5;
            }
        }
    } else {
        uVar1 = uVar3 - a1;
        bVar5 = uVar3 < uVar1;
        if (!bVar4) {
            bVar5 = !bVar5;
        }
    }
    bVar4 = (uVar1 & 0x80000000) == 0;
    uVar1 = uVar1 << 1 | (u32)((a0 & 0x20000000) != 0);
    if (bVar5) {
        if (bVar5) {
            uVar3 = uVar1 + a1;
            bVar5 = uVar3 < uVar1;
            if (!bVar4) {
                bVar5 = !bVar5;
            }
        } else {
            uVar3 = uVar1 - a1;
            bVar5 = uVar1 < uVar3;
            if (bVar4) {
                bVar5 = !bVar5;
            }
        }
    } else {
        uVar3 = uVar1 - a1;
        bVar5 = uVar1 < uVar3;
        if (!bVar4) {
            bVar5 = !bVar5;
        }
    }
    bVar4 = (uVar3 & 0x80000000) == 0;
    uVar1 = uVar3 << 1 | (u32)((a0 & 0x10000000) != 0);
    if (bVar5) {
        if (bVar5) {
            uVar3 = uVar1 + a1;
            bVar5 = uVar3 < uVar1;
            if (!bVar4) {
                bVar5 = !bVar5;
            }
        } else {
            uVar3 = uVar1 - a1;
            bVar5 = uVar1 < uVar3;
            if (bVar4) {
                bVar5 = !bVar5;
            }
        }
    } else {
        uVar3 = uVar1 - a1;
        bVar5 = uVar1 < uVar3;
        if (!bVar4) {
            bVar5 = !bVar5;
        }
    }
    bVar4 = (uVar3 & 0x80000000) == 0;
    uVar1 = uVar3 << 1 | (u32)((a0 & 0x8000000) != 0);
    if (bVar5) {
        if (bVar5) {
            uVar3 = uVar1 + a1;
            bVar5 = uVar3 < uVar1;
            if (!bVar4) {
                bVar5 = !bVar5;
            }
        } else {
            uVar3 = uVar1 - a1;
            bVar5 = uVar1 < uVar3;
            if (bVar4) {
                bVar5 = !bVar5;
            }
        }
    } else {
        uVar3 = uVar1 - a1;
        bVar5 = uVar1 < uVar3;
        if (!bVar4) {
            bVar5 = !bVar5;
        }
    }
    bVar4 = (uVar3 & 0x80000000) == 0;
    uVar1 = uVar3 << 1 | (u32)((a0 & 0x4000000) != 0);
    if (bVar5) {
        if (bVar5) {
            uVar3 = uVar1 + a1;
            bVar5 = uVar3 < uVar1;
            if (!bVar4) {
                bVar5 = !bVar5;
            }
        } else {
            uVar3 = uVar1 - a1;
            bVar5 = uVar1 < uVar3;
            if (bVar4) {
                bVar5 = !bVar5;
            }
        }
    } else {
        uVar3 = uVar1 - a1;
        bVar5 = uVar1 < uVar3;
        if (!bVar4) {
            bVar5 = !bVar5;
        }
    }
    bVar4 = (uVar3 & 0x80000000) == 0;
    uVar1 = uVar3 << 1 | (u32)((a0 & 0x2000000) != 0);
    if (bVar5) {
        if (bVar5) {
            uVar3 = uVar1 + a1;
            bVar5 = uVar3 < uVar1;
            if (!bVar4) {
                bVar5 = !bVar5;
            }
        } else {
            uVar3 = uVar1 - a1;
            bVar5 = uVar1 < uVar3;
            if (bVar4) {
                bVar5 = !bVar5;
            }
        }
    } else {
        uVar3 = uVar1 - a1;
        bVar5 = uVar1 < uVar3;
        if (!bVar4) {
            bVar5 = !bVar5;
        }
    }
    bVar4 = (uVar3 & 0x80000000) == 0;
    uVar1 = uVar3 << 1 | (u32)((a0 & 0x1000000) != 0);
    if (bVar5) {
        if (bVar5) {
            uVar3 = uVar1 + a1;
            bVar5 = uVar3 < uVar1;
            if (!bVar4) {
                bVar5 = !bVar5;
            }
        } else {
            uVar3 = uVar1 - a1;
            bVar5 = uVar1 < uVar3;
            if (bVar4) {
                bVar5 = !bVar5;
            }
        }
    } else {
        uVar3 = uVar1 - a1;
        bVar5 = uVar1 < uVar3;
        if (!bVar4) {
            bVar5 = !bVar5;
        }
    }
    bVar4 = (uVar3 & 0x80000000) == 0;
    uVar1 = uVar3 << 1 | (u32)((a0 & 0x800000) != 0);
    if (bVar5) {
        if (bVar5) {
            uVar3 = uVar1 + a1;
            bVar5 = uVar3 < uVar1;
            if (!bVar4) {
                bVar5 = !bVar5;
            }
        } else {
            uVar3 = uVar1 - a1;
            bVar5 = uVar1 < uVar3;
            if (bVar4) {
                bVar5 = !bVar5;
            }
        }
    } else {
        uVar3 = uVar1 - a1;
        bVar5 = uVar1 < uVar3;
        if (!bVar4) {
            bVar5 = !bVar5;
        }
    }
    bVar4 = (uVar3 & 0x80000000) == 0;
    uVar1 = uVar3 << 1 | (u32)((a0 & 0x400000) != 0);
    if (bVar5) {
        if (bVar5) {
            uVar3 = uVar1 + a1;
            bVar5 = uVar3 < uVar1;
            if (!bVar4) {
                bVar5 = !bVar5;
            }
        } else {
            uVar3 = uVar1 - a1;
            bVar5 = uVar1 < uVar3;
            if (bVar4) {
                bVar5 = !bVar5;
            }
        }
    } else {
        uVar3 = uVar1 - a1;
        bVar5 = uVar1 < uVar3;
        if (!bVar4) {
            bVar5 = !bVar5;
        }
    }
    bVar4 = (uVar3 & 0x80000000) == 0;
    uVar1 = uVar3 << 1 | (u32)((a0 & 0x200000) != 0);
    if (bVar5) {
        if (bVar5) {
            uVar3 = uVar1 + a1;
            bVar5 = uVar3 < uVar1;
            if (!bVar4) {
                bVar5 = !bVar5;
            }
        } else {
            uVar3 = uVar1 - a1;
            bVar5 = uVar1 < uVar3;
            if (bVar4) {
                bVar5 = !bVar5;
            }
        }
    } else {
        uVar3 = uVar1 - a1;
        bVar5 = uVar1 < uVar3;
        if (!bVar4) {
            bVar5 = !bVar5;
        }
    }
    bVar4 = (uVar3 & 0x80000000) == 0;
    uVar1 = uVar3 << 1 | (u32)((a0 & 0x100000) != 0);
    if (bVar5) {
        if (bVar5) {
            uVar3 = uVar1 + a1;
            bVar5 = uVar3 < uVar1;
            if (!bVar4) {
                bVar5 = !bVar5;
            }
        } else {
            uVar3 = uVar1 - a1;
            bVar5 = uVar1 < uVar3;
            if (bVar4) {
                bVar5 = !bVar5;
            }
        }
    } else {
        uVar3 = uVar1 - a1;
        bVar5 = uVar1 < uVar3;
        if (!bVar4) {
            bVar5 = !bVar5;
        }
    }
    bVar4 = (uVar3 & 0x80000000) == 0;
    uVar1 = uVar3 << 1 | (u32)((a0 & 0x80000) != 0);
    if (bVar5) {
        if (bVar5) {
            uVar3 = uVar1 + a1;
            bVar5 = uVar3 < uVar1;
            if (!bVar4) {
                bVar5 = !bVar5;
            }
        } else {
            uVar3 = uVar1 - a1;
            bVar5 = uVar1 < uVar3;
            if (bVar4) {
                bVar5 = !bVar5;
            }
        }
    } else {
        uVar3 = uVar1 - a1;
        bVar5 = uVar1 < uVar3;
        if (!bVar4) {
            bVar5 = !bVar5;
        }
    }
    bVar4 = (uVar3 & 0x80000000) == 0;
    uVar1 = uVar3 << 1 | (u32)((a0 & 0x40000) != 0);
    if (bVar5) {
        if (bVar5) {
            uVar3 = uVar1 + a1;
            bVar5 = uVar3 < uVar1;
            if (!bVar4) {
                bVar5 = !bVar5;
            }
        } else {
            uVar3 = uVar1 - a1;
            bVar5 = uVar1 < uVar3;
            if (bVar4) {
                bVar5 = !bVar5;
            }
        }
    } else {
        uVar3 = uVar1 - a1;
        bVar5 = uVar1 < uVar3;
        if (!bVar4) {
            bVar5 = !bVar5;
        }
    }
    bVar4 = (uVar3 & 0x80000000) == 0;
    uVar1 = uVar3 << 1 | (u32)((a0 & 0x20000) != 0);
    if (bVar5) {
        if (bVar5) {
            uVar3 = uVar1 + a1;
            bVar5 = uVar3 < uVar1;
            if (!bVar4) {
                bVar5 = !bVar5;
            }
        } else {
            uVar3 = uVar1 - a1;
            bVar5 = uVar1 < uVar3;
            if (bVar4) {
                bVar5 = !bVar5;
            }
        }
    } else {
        uVar3 = uVar1 - a1;
        bVar5 = uVar1 < uVar3;
        if (!bVar4) {
            bVar5 = !bVar5;
        }
    }
    bVar4 = (uVar3 & 0x80000000) == 0;
    uVar1 = uVar3 << 1 | (u32)((a0 & 0x10000) != 0);
    if (bVar5) {
        if (bVar5) {
            uVar3 = uVar1 + a1;
            bVar5 = uVar3 < uVar1;
            if (!bVar4) {
                bVar5 = !bVar5;
            }
        } else {
            uVar3 = uVar1 - a1;
            bVar5 = uVar1 < uVar3;
            if (bVar4) {
                bVar5 = !bVar5;
            }
        }
    } else {
        uVar3 = uVar1 - a1;
        bVar5 = uVar1 < uVar3;
        if (!bVar4) {
            bVar5 = !bVar5;
        }
    }
    bVar4 = (uVar3 & 0x80000000) == 0;
    uVar1 = uVar3 << 1 | (u32)((a0 & 0x8000) != 0);
    if (bVar5) {
        if (bVar5) {
            uVar3 = uVar1 + a1;
            bVar5 = uVar3 < uVar1;
            if (!bVar4) {
                bVar5 = !bVar5;
            }
        } else {
            uVar3 = uVar1 - a1;
            bVar5 = uVar1 < uVar3;
            if (bVar4) {
                bVar5 = !bVar5;
            }
        }
    } else {
        uVar3 = uVar1 - a1;
        bVar5 = uVar1 < uVar3;
        if (!bVar4) {
            bVar5 = !bVar5;
        }
    }
    bVar4 = (uVar3 & 0x80000000) == 0;
    uVar1 = uVar3 << 1 | (u32)((a0 & 0x4000) != 0);
    if (bVar5) {
        if (bVar5) {
            uVar3 = uVar1 + a1;
            bVar5 = uVar3 < uVar1;
            if (!bVar4) {
                bVar5 = !bVar5;
            }
        } else {
            uVar3 = uVar1 - a1;
            bVar5 = uVar1 < uVar3;
            if (bVar4) {
                bVar5 = !bVar5;
            }
        }
    } else {
        uVar3 = uVar1 - a1;
        bVar5 = uVar1 < uVar3;
        if (!bVar4) {
            bVar5 = !bVar5;
        }
    }
    bVar4 = (uVar3 & 0x80000000) == 0;
    uVar1 = uVar3 << 1 | (u32)((a0 & 0x2000) != 0);
    if (bVar5) {
        if (bVar5) {
            uVar3 = uVar1 + a1;
            bVar5 = uVar3 < uVar1;
            if (!bVar4) {
                bVar5 = !bVar5;
            }
        } else {
            uVar3 = uVar1 - a1;
            bVar5 = uVar1 < uVar3;
            if (bVar4) {
                bVar5 = !bVar5;
            }
        }
    } else {
        uVar3 = uVar1 - a1;
        bVar5 = uVar1 < uVar3;
        if (!bVar4) {
            bVar5 = !bVar5;
        }
    }
    bVar4 = (uVar3 & 0x80000000) == 0;
    uVar1 = uVar3 << 1 | (u32)((a0 & 0x1000) != 0);
    if (bVar5) {
        if (bVar5) {
            uVar3 = uVar1 + a1;
            bVar5 = uVar3 < uVar1;
            if (!bVar4) {
                bVar5 = !bVar5;
            }
        } else {
            uVar3 = uVar1 - a1;
            bVar5 = uVar1 < uVar3;
            if (bVar4) {
                bVar5 = !bVar5;
            }
        }
    } else {
        uVar3 = uVar1 - a1;
        bVar5 = uVar1 < uVar3;
        if (!bVar4) {
            bVar5 = !bVar5;
        }
    }
    bVar4 = (uVar3 & 0x80000000) == 0;
    uVar1 = uVar3 << 1 | (u32)((a0 & 0x800) != 0);
    if (bVar5) {
        if (bVar5) {
            uVar3 = uVar1 + a1;
            bVar5 = uVar3 < uVar1;
            if (!bVar4) {
                bVar5 = !bVar5;
            }
        } else {
            uVar3 = uVar1 - a1;
            bVar5 = uVar1 < uVar3;
            if (bVar4) {
                bVar5 = !bVar5;
            }
        }
    } else {
        uVar3 = uVar1 - a1;
        bVar5 = uVar1 < uVar3;
        if (!bVar4) {
            bVar5 = !bVar5;
        }
    }
    bVar4 = (uVar3 & 0x80000000) == 0;
    uVar1 = uVar3 << 1 | (u32)((a0 & 0x400) != 0);
    if (bVar5) {
        if (bVar5) {
            uVar3 = uVar1 + a1;
            bVar5 = uVar3 < uVar1;
            if (!bVar4) {
                bVar5 = !bVar5;
            }
        } else {
            uVar3 = uVar1 - a1;
            bVar5 = uVar1 < uVar3;
            if (bVar4) {
                bVar5 = !bVar5;
            }
        }
    } else {
        uVar3 = uVar1 - a1;
        bVar5 = uVar1 < uVar3;
        if (!bVar4) {
            bVar5 = !bVar5;
        }
    }
    bVar4 = (uVar3 & 0x80000000) == 0;
    uVar1 = uVar3 << 1 | (u32)((a0 & 0x200) != 0);
    if (bVar5) {
        if (bVar5) {
            uVar3 = uVar1 + a1;
            bVar5 = uVar3 < uVar1;
            if (!bVar4) {
                bVar5 = !bVar5;
            }
        } else {
            uVar3 = uVar1 - a1;
            bVar5 = uVar1 < uVar3;
            if (bVar4) {
                bVar5 = !bVar5;
            }
        }
    } else {
        uVar3 = uVar1 - a1;
        bVar5 = uVar1 < uVar3;
        if (!bVar4) {
            bVar5 = !bVar5;
        }
    }
    bVar4 = (uVar3 & 0x80000000) == 0;
    uVar1 = uVar3 << 1 | (u32)((a0 & 0x100) != 0);
    if (bVar5) {
        if (bVar5) {
            uVar3 = uVar1 + a1;
            bVar5 = uVar3 < uVar1;
            if (!bVar4) {
                bVar5 = !bVar5;
            }
        } else {
            uVar3 = uVar1 - a1;
            bVar5 = uVar1 < uVar3;
            if (bVar4) {
                bVar5 = !bVar5;
            }
        }
    } else {
        uVar3 = uVar1 - a1;
        bVar5 = uVar1 < uVar3;
        if (!bVar4) {
            bVar5 = !bVar5;
        }
    }
    bVar4 = (uVar3 & 0x80000000) == 0;
    uVar1 = uVar3 << 1 | (u32)((a0 & 0x80) != 0);
    if (bVar5) {
        if (bVar5) {
            uVar3 = uVar1 + a1;
            bVar5 = uVar3 < uVar1;
            if (!bVar4) {
                bVar5 = !bVar5;
            }
        } else {
            uVar3 = uVar1 - a1;
            bVar5 = uVar1 < uVar3;
            if (bVar4) {
                bVar5 = !bVar5;
            }
        }
    } else {
        uVar3 = uVar1 - a1;
        bVar5 = uVar1 < uVar3;
        if (!bVar4) {
            bVar5 = !bVar5;
        }
    }
    bVar4 = (uVar3 & 0x80000000) == 0;
    uVar1 = uVar3 << 1 | (u32)((a0 & 0x40) != 0);
    if (bVar5) {
        if (bVar5) {
            uVar3 = uVar1 + a1;
            bVar5 = uVar3 < uVar1;
            if (!bVar4) {
                bVar5 = !bVar5;
            }
        } else {
            uVar3 = uVar1 - a1;
            bVar5 = uVar1 < uVar3;
            if (bVar4) {
                bVar5 = !bVar5;
            }
        }
    } else {
        uVar3 = uVar1 - a1;
        bVar5 = uVar1 < uVar3;
        if (!bVar4) {
            bVar5 = !bVar5;
        }
    }
    bVar4 = (uVar3 & 0x80000000) == 0;
    uVar1 = uVar3 << 1 | (u32)((a0 & 0x20) != 0);
    if (bVar5) {
        if (bVar5) {
            uVar3 = uVar1 + a1;
            bVar5 = uVar3 < uVar1;
            if (!bVar4) {
                bVar5 = !bVar5;
            }
        } else {
            uVar3 = uVar1 - a1;
            bVar5 = uVar1 < uVar3;
            if (bVar4) {
                bVar5 = !bVar5;
            }
        }
    } else {
        uVar3 = uVar1 - a1;
        bVar5 = uVar1 < uVar3;
        if (!bVar4) {
            bVar5 = !bVar5;
        }
    }
    bVar4 = (uVar3 & 0x80000000) == 0;
    uVar1 = uVar3 << 1 | (u32)((a0 & 0x10) != 0);
    if (bVar5) {
        if (bVar5) {
            uVar3 = uVar1 + a1;
            bVar5 = uVar3 < uVar1;
            if (!bVar4) {
                bVar5 = !bVar5;
            }
        } else {
            uVar3 = uVar1 - a1;
            bVar5 = uVar1 < uVar3;
            if (bVar4) {
                bVar5 = !bVar5;
            }
        }
    } else {
        uVar3 = uVar1 - a1;
        bVar5 = uVar1 < uVar3;
        if (!bVar4) {
            bVar5 = !bVar5;
        }
    }
    bVar4 = (uVar3 & 0x80000000) == 0;
    uVar1 = uVar3 << 1 | (u32)((a0 & 8) != 0);
    if (bVar5) {
        if (bVar5) {
            uVar3 = uVar1 + a1;
            bVar5 = uVar3 < uVar1;
            if (!bVar4) {
                bVar5 = !bVar5;
            }
        } else {
            uVar3 = uVar1 - a1;
            bVar5 = uVar1 < uVar3;
            if (bVar4) {
                bVar5 = !bVar5;
            }
        }
    } else {
        uVar3 = uVar1 - a1;
        bVar5 = uVar1 < uVar3;
        if (!bVar4) {
            bVar5 = !bVar5;
        }
    }
    bVar4 = (uVar3 & 0x80000000) == 0;
    uVar1 = uVar3 << 1 | (u32)((a0 & 4) != 0);
    if (bVar5) {
        if (bVar5) {
            uVar3 = uVar1 + a1;
            bVar5 = uVar3 < uVar1;
            if (!bVar4) {
                bVar5 = !bVar5;
            }
        } else {
            uVar3 = uVar1 - a1;
            bVar5 = uVar1 < uVar3;
            if (bVar4) {
                bVar5 = !bVar5;
            }
        }
    } else {
        uVar3 = uVar1 - a1;
        bVar5 = uVar1 < uVar3;
        if (!bVar4) {
            bVar5 = !bVar5;
        }
    }
    bVar4 = (uVar3 & 0x80000000) == 0;
    uVar1 = uVar3 << 1 | (u32)((a0 & 2) != 0);
    if (bVar5) {
        if (bVar5) {
            uVar3 = uVar1 + a1;
            bVar5 = uVar3 < uVar1;
            if (!bVar4) {
                bVar5 = !bVar5;
            }
        } else {
            uVar3 = uVar1 - a1;
            bVar5 = uVar1 < uVar3;
            if (bVar4) {
                bVar5 = !bVar5;
            }
        }
    } else {
        uVar3 = uVar1 - a1;
        bVar5 = uVar1 < uVar3;
        if (!bVar4) {
            bVar5 = !bVar5;
        }
    }
    bVar4 = (uVar3 & 0x80000000) == 0;
    uVar1 = uVar3 << 1 | (u32)((a0 & 1) != 0);
    if (bVar5) {
        if (bVar5) {
            uVar3 = uVar1 + a1;
            bVar5 = uVar3 < uVar1;
            if (!bVar4) {
                bVar5 = !bVar5;
            }
        } else {
            uVar3 = uVar1 - a1;
            bVar5 = uVar1 < uVar3;
            if (bVar4) {
                bVar5 = !bVar5;
            }
        }
    } else {
        uVar3 = uVar1 - a1;
        bVar5 = uVar1 < uVar3;
        if (!bVar4) {
            bVar5 = !bVar5;
        }
    }
    if (bVar5) {
        uVar3 = uVar3 + a1;
    }
    return uVar3;
}

/*
 * libgcc_divide_helper_010468  0x8c010468
 * called by: ADXF_AddPartition, ADXF_LoadPartition, ADXT_GetTime_like, ADXT_buffered_samples_like,
 * ADXT_uses_ADXT_Stop_like_264c92, ADXT_uses_libgcc_divide_helper_264308, ADXT_uses_libgcc_divide_helper_2647f4,
 * adx_parse_header (+58 more)
 */
int libgcc_divide_helper_010468(u32 a0, u32 a1) {
    u32 uVar1;
    u32 uVar2;
    u32 in_r0;
    u32 in_r1;
    u32 uVar3;
    bool bVar4;
    bool bVar5;
    bool bVar6;
    bool bVar8;
    bool bVar9;
    bool bVar10;
    bool bVar11;
    bool bVar12;
    bool bVar13;
    bool bVar14;
    bool bVar15;
    bool bVar16;
    bool bVar17;
    bool bVar18;
    bool bVar19;
    bool bVar20;
    bool bVar21;
    bool bVar22;
    bool bVar23;
    bool bVar24;
    bool bVar25;
    bool bVar26;
    bool bVar27;
    bool bVar28;
    bool bVar29;
    bool bVar30;
    bool bVar31;
    bool bVar32;
    bool bVar33;
    bool bVar34;
    bool bVar35;
    bool bVar36;
    bool bVar37;
    bool bVar38;
    bool bVar7;

    if (in_r0 == 0) {
        g_8c2787a8 = 0x44e;
        return 0;
    }
    uVar2 = (u32)((in_r1 & 0x80000000) != 0);
    uVar3 = in_r1 - (uVar2 != 0);
    bVar5 = (-uVar2 & 0x80000000) != 0;
    bVar4 = (in_r0 & 0x80000000) != 0;
    uVar1 = uVar3 * 2;
    bVar6 = (-uVar2 & 0x80000000) == 0;
    uVar2 = uVar2 * -2 | (u32)((uVar3 & 0x80000000) != 0);
    if (bVar5 || bVar4) {
        if (!bVar5 && bVar4) {
            uVar3 = uVar2 + in_r0;
            bVar7 = uVar3 < uVar2;
            if (bVar6) {
                bVar7 = !bVar7;
            }
        } else if (bVar5 && !bVar4) {
            uVar3 = uVar2 + in_r0;
            bVar7 = uVar3 < uVar2;
            if (!bVar6) {
                bVar7 = !bVar7;
            }
        } else {
            uVar3 = uVar2 - in_r0;
            bVar7 = uVar2 < uVar3;
            if (bVar6) {
                bVar7 = !bVar7;
            }
        }
    } else {
        uVar3 = uVar2 - in_r0;
        bVar7 = uVar2 < uVar3;
        if (!bVar6) {
            bVar7 = !bVar7;
        }
    }
    bVar6 = (uVar3 & 0x80000000) == 0;
    uVar2 = uVar3 << 1 | (u32)((uVar1 & 0x80000000) != 0);
    if (bVar7 == false && !bVar4) {
        uVar3 = uVar2 - in_r0;
        bVar8 = uVar2 < uVar3;
        if (!bVar6) {
            bVar8 = !bVar8;
        }
    } else if (bVar7 == false && bVar4) {
        uVar3 = uVar2 + in_r0;
        bVar8 = uVar3 < uVar2;
        if (bVar6) {
            bVar8 = !bVar8;
        }
    } else if (bVar7 == true && !bVar4) {
        uVar3 = uVar2 + in_r0;
        bVar8 = uVar3 < uVar2;
        if (!bVar6) {
            bVar8 = !bVar8;
        }
    } else {
        uVar3 = uVar2 - in_r0;
        bVar8 = uVar2 < uVar3;
        if (bVar6) {
            bVar8 = !bVar8;
        }
    }
    bVar6 = (uVar3 & 0x80000000) == 0;
    uVar2 = uVar3 << 1 | (u32)((uVar1 & 0x40000000) != 0);
    if (bVar8 == false && !bVar4) {
        uVar3 = uVar2 - in_r0;
        bVar9 = uVar2 < uVar3;
        if (!bVar6) {
            bVar9 = !bVar9;
        }
    } else if (bVar8 == false && bVar4) {
        uVar3 = uVar2 + in_r0;
        bVar9 = uVar3 < uVar2;
        if (bVar6) {
            bVar9 = !bVar9;
        }
    } else if (bVar8 == true && !bVar4) {
        uVar3 = uVar2 + in_r0;
        bVar9 = uVar3 < uVar2;
        if (!bVar6) {
            bVar9 = !bVar9;
        }
    } else {
        uVar3 = uVar2 - in_r0;
        bVar9 = uVar2 < uVar3;
        if (bVar6) {
            bVar9 = !bVar9;
        }
    }
    bVar6 = (uVar3 & 0x80000000) == 0;
    uVar2 = uVar3 << 1 | (u32)((uVar1 & 0x20000000) != 0);
    if (bVar9 == false && !bVar4) {
        uVar3 = uVar2 - in_r0;
        bVar10 = uVar2 < uVar3;
        if (!bVar6) {
            bVar10 = !bVar10;
        }
    } else if (bVar9 == false && bVar4) {
        uVar3 = uVar2 + in_r0;
        bVar10 = uVar3 < uVar2;
        if (bVar6) {
            bVar10 = !bVar10;
        }
    } else if (bVar9 == true && !bVar4) {
        uVar3 = uVar2 + in_r0;
        bVar10 = uVar3 < uVar2;
        if (!bVar6) {
            bVar10 = !bVar10;
        }
    } else {
        uVar3 = uVar2 - in_r0;
        bVar10 = uVar2 < uVar3;
        if (bVar6) {
            bVar10 = !bVar10;
        }
    }
    bVar6 = (uVar3 & 0x80000000) == 0;
    uVar2 = uVar3 << 1 | (u32)((uVar1 & 0x10000000) != 0);
    if (bVar10 == false && !bVar4) {
        uVar3 = uVar2 - in_r0;
        bVar11 = uVar2 < uVar3;
        if (!bVar6) {
            bVar11 = !bVar11;
        }
    } else if (bVar10 == false && bVar4) {
        uVar3 = uVar2 + in_r0;
        bVar11 = uVar3 < uVar2;
        if (bVar6) {
            bVar11 = !bVar11;
        }
    } else if (bVar10 == true && !bVar4) {
        uVar3 = uVar2 + in_r0;
        bVar11 = uVar3 < uVar2;
        if (!bVar6) {
            bVar11 = !bVar11;
        }
    } else {
        uVar3 = uVar2 - in_r0;
        bVar11 = uVar2 < uVar3;
        if (bVar6) {
            bVar11 = !bVar11;
        }
    }
    bVar6 = (uVar3 & 0x80000000) == 0;
    uVar2 = uVar3 << 1 | (u32)((uVar1 & 0x8000000) != 0);
    if (bVar11 == false && !bVar4) {
        uVar3 = uVar2 - in_r0;
        bVar12 = uVar2 < uVar3;
        if (!bVar6) {
            bVar12 = !bVar12;
        }
    } else if (bVar11 == false && bVar4) {
        uVar3 = uVar2 + in_r0;
        bVar12 = uVar3 < uVar2;
        if (bVar6) {
            bVar12 = !bVar12;
        }
    } else if (bVar11 == true && !bVar4) {
        uVar3 = uVar2 + in_r0;
        bVar12 = uVar3 < uVar2;
        if (!bVar6) {
            bVar12 = !bVar12;
        }
    } else {
        uVar3 = uVar2 - in_r0;
        bVar12 = uVar2 < uVar3;
        if (bVar6) {
            bVar12 = !bVar12;
        }
    }
    bVar6 = (uVar3 & 0x80000000) == 0;
    uVar2 = uVar3 << 1 | (u32)((uVar1 & 0x4000000) != 0);
    if (bVar12 == false && !bVar4) {
        uVar3 = uVar2 - in_r0;
        bVar13 = uVar2 < uVar3;
        if (!bVar6) {
            bVar13 = !bVar13;
        }
    } else if (bVar12 == false && bVar4) {
        uVar3 = uVar2 + in_r0;
        bVar13 = uVar3 < uVar2;
        if (bVar6) {
            bVar13 = !bVar13;
        }
    } else if (bVar12 == true && !bVar4) {
        uVar3 = uVar2 + in_r0;
        bVar13 = uVar3 < uVar2;
        if (!bVar6) {
            bVar13 = !bVar13;
        }
    } else {
        uVar3 = uVar2 - in_r0;
        bVar13 = uVar2 < uVar3;
        if (bVar6) {
            bVar13 = !bVar13;
        }
    }
    bVar6 = (uVar3 & 0x80000000) == 0;
    uVar2 = uVar3 << 1 | (u32)((uVar1 & 0x2000000) != 0);
    if (bVar13 == false && !bVar4) {
        uVar3 = uVar2 - in_r0;
        bVar14 = uVar2 < uVar3;
        if (!bVar6) {
            bVar14 = !bVar14;
        }
    } else if (bVar13 == false && bVar4) {
        uVar3 = uVar2 + in_r0;
        bVar14 = uVar3 < uVar2;
        if (bVar6) {
            bVar14 = !bVar14;
        }
    } else if (bVar13 == true && !bVar4) {
        uVar3 = uVar2 + in_r0;
        bVar14 = uVar3 < uVar2;
        if (!bVar6) {
            bVar14 = !bVar14;
        }
    } else {
        uVar3 = uVar2 - in_r0;
        bVar14 = uVar2 < uVar3;
        if (bVar6) {
            bVar14 = !bVar14;
        }
    }
    bVar6 = (uVar3 & 0x80000000) == 0;
    uVar2 = uVar3 << 1 | (u32)((uVar1 & 0x1000000) != 0);
    if (bVar14 == false && !bVar4) {
        uVar3 = uVar2 - in_r0;
        bVar15 = uVar2 < uVar3;
        if (!bVar6) {
            bVar15 = !bVar15;
        }
    } else if (bVar14 == false && bVar4) {
        uVar3 = uVar2 + in_r0;
        bVar15 = uVar3 < uVar2;
        if (bVar6) {
            bVar15 = !bVar15;
        }
    } else if (bVar14 == true && !bVar4) {
        uVar3 = uVar2 + in_r0;
        bVar15 = uVar3 < uVar2;
        if (!bVar6) {
            bVar15 = !bVar15;
        }
    } else {
        uVar3 = uVar2 - in_r0;
        bVar15 = uVar2 < uVar3;
        if (bVar6) {
            bVar15 = !bVar15;
        }
    }
    bVar6 = (uVar3 & 0x80000000) == 0;
    uVar2 = uVar3 << 1 | (u32)((uVar1 & 0x800000) != 0);
    if (bVar15 == false && !bVar4) {
        uVar3 = uVar2 - in_r0;
        bVar16 = uVar2 < uVar3;
        if (!bVar6) {
            bVar16 = !bVar16;
        }
    } else if (bVar15 == false && bVar4) {
        uVar3 = uVar2 + in_r0;
        bVar16 = uVar3 < uVar2;
        if (bVar6) {
            bVar16 = !bVar16;
        }
    } else if (bVar15 == true && !bVar4) {
        uVar3 = uVar2 + in_r0;
        bVar16 = uVar3 < uVar2;
        if (!bVar6) {
            bVar16 = !bVar16;
        }
    } else {
        uVar3 = uVar2 - in_r0;
        bVar16 = uVar2 < uVar3;
        if (bVar6) {
            bVar16 = !bVar16;
        }
    }
    bVar6 = (uVar3 & 0x80000000) == 0;
    uVar2 = uVar3 << 1 | (u32)((uVar1 & 0x400000) != 0);
    if (bVar16 == false && !bVar4) {
        uVar3 = uVar2 - in_r0;
        bVar17 = uVar2 < uVar3;
        if (!bVar6) {
            bVar17 = !bVar17;
        }
    } else if (bVar16 == false && bVar4) {
        uVar3 = uVar2 + in_r0;
        bVar17 = uVar3 < uVar2;
        if (bVar6) {
            bVar17 = !bVar17;
        }
    } else if (bVar16 == true && !bVar4) {
        uVar3 = uVar2 + in_r0;
        bVar17 = uVar3 < uVar2;
        if (!bVar6) {
            bVar17 = !bVar17;
        }
    } else {
        uVar3 = uVar2 - in_r0;
        bVar17 = uVar2 < uVar3;
        if (bVar6) {
            bVar17 = !bVar17;
        }
    }
    bVar6 = (uVar3 & 0x80000000) == 0;
    uVar2 = uVar3 << 1 | (u32)((uVar1 & 0x200000) != 0);
    if (bVar17 == false && !bVar4) {
        uVar3 = uVar2 - in_r0;
        bVar18 = uVar2 < uVar3;
        if (!bVar6) {
            bVar18 = !bVar18;
        }
    } else if (bVar17 == false && bVar4) {
        uVar3 = uVar2 + in_r0;
        bVar18 = uVar3 < uVar2;
        if (bVar6) {
            bVar18 = !bVar18;
        }
    } else if (bVar17 == true && !bVar4) {
        uVar3 = uVar2 + in_r0;
        bVar18 = uVar3 < uVar2;
        if (!bVar6) {
            bVar18 = !bVar18;
        }
    } else {
        uVar3 = uVar2 - in_r0;
        bVar18 = uVar2 < uVar3;
        if (bVar6) {
            bVar18 = !bVar18;
        }
    }
    bVar6 = (uVar3 & 0x80000000) == 0;
    uVar2 = uVar3 << 1 | (u32)((uVar1 & 0x100000) != 0);
    if (bVar18 == false && !bVar4) {
        uVar3 = uVar2 - in_r0;
        bVar19 = uVar2 < uVar3;
        if (!bVar6) {
            bVar19 = !bVar19;
        }
    } else if (bVar18 == false && bVar4) {
        uVar3 = uVar2 + in_r0;
        bVar19 = uVar3 < uVar2;
        if (bVar6) {
            bVar19 = !bVar19;
        }
    } else if (bVar18 == true && !bVar4) {
        uVar3 = uVar2 + in_r0;
        bVar19 = uVar3 < uVar2;
        if (!bVar6) {
            bVar19 = !bVar19;
        }
    } else {
        uVar3 = uVar2 - in_r0;
        bVar19 = uVar2 < uVar3;
        if (bVar6) {
            bVar19 = !bVar19;
        }
    }
    bVar6 = (uVar3 & 0x80000000) == 0;
    uVar2 = uVar3 << 1 | (u32)((uVar1 & 0x80000) != 0);
    if (bVar19 == false && !bVar4) {
        uVar3 = uVar2 - in_r0;
        bVar20 = uVar2 < uVar3;
        if (!bVar6) {
            bVar20 = !bVar20;
        }
    } else if (bVar19 == false && bVar4) {
        uVar3 = uVar2 + in_r0;
        bVar20 = uVar3 < uVar2;
        if (bVar6) {
            bVar20 = !bVar20;
        }
    } else if (bVar19 == true && !bVar4) {
        uVar3 = uVar2 + in_r0;
        bVar20 = uVar3 < uVar2;
        if (!bVar6) {
            bVar20 = !bVar20;
        }
    } else {
        uVar3 = uVar2 - in_r0;
        bVar20 = uVar2 < uVar3;
        if (bVar6) {
            bVar20 = !bVar20;
        }
    }
    bVar6 = (uVar3 & 0x80000000) == 0;
    uVar2 = uVar3 << 1 | (u32)((uVar1 & 0x40000) != 0);
    if (bVar20 == false && !bVar4) {
        uVar3 = uVar2 - in_r0;
        bVar21 = uVar2 < uVar3;
        if (!bVar6) {
            bVar21 = !bVar21;
        }
    } else if (bVar20 == false && bVar4) {
        uVar3 = uVar2 + in_r0;
        bVar21 = uVar3 < uVar2;
        if (bVar6) {
            bVar21 = !bVar21;
        }
    } else if (bVar20 == true && !bVar4) {
        uVar3 = uVar2 + in_r0;
        bVar21 = uVar3 < uVar2;
        if (!bVar6) {
            bVar21 = !bVar21;
        }
    } else {
        uVar3 = uVar2 - in_r0;
        bVar21 = uVar2 < uVar3;
        if (bVar6) {
            bVar21 = !bVar21;
        }
    }
    bVar6 = (uVar3 & 0x80000000) == 0;
    uVar2 = uVar3 << 1 | (u32)((uVar1 & 0x20000) != 0);
    if (bVar21 == false && !bVar4) {
        uVar3 = uVar2 - in_r0;
        bVar22 = uVar2 < uVar3;
        if (!bVar6) {
            bVar22 = !bVar22;
        }
    } else if (bVar21 == false && bVar4) {
        uVar3 = uVar2 + in_r0;
        bVar22 = uVar3 < uVar2;
        if (bVar6) {
            bVar22 = !bVar22;
        }
    } else if (bVar21 == true && !bVar4) {
        uVar3 = uVar2 + in_r0;
        bVar22 = uVar3 < uVar2;
        if (!bVar6) {
            bVar22 = !bVar22;
        }
    } else {
        uVar3 = uVar2 - in_r0;
        bVar22 = uVar2 < uVar3;
        if (bVar6) {
            bVar22 = !bVar22;
        }
    }
    bVar6 = (uVar3 & 0x80000000) == 0;
    uVar2 = uVar3 << 1 | (u32)((uVar1 & 0x10000) != 0);
    if (bVar22 == false && !bVar4) {
        uVar3 = uVar2 - in_r0;
        bVar23 = uVar2 < uVar3;
        if (!bVar6) {
            bVar23 = !bVar23;
        }
    } else if (bVar22 == false && bVar4) {
        uVar3 = uVar2 + in_r0;
        bVar23 = uVar3 < uVar2;
        if (bVar6) {
            bVar23 = !bVar23;
        }
    } else if (bVar22 == true && !bVar4) {
        uVar3 = uVar2 + in_r0;
        bVar23 = uVar3 < uVar2;
        if (!bVar6) {
            bVar23 = !bVar23;
        }
    } else {
        uVar3 = uVar2 - in_r0;
        bVar23 = uVar2 < uVar3;
        if (bVar6) {
            bVar23 = !bVar23;
        }
    }
    bVar6 = (uVar3 & 0x80000000) == 0;
    uVar2 = uVar3 << 1 | (u32)((uVar1 & 0x8000) != 0);
    if (bVar23 == false && !bVar4) {
        uVar3 = uVar2 - in_r0;
        bVar24 = uVar2 < uVar3;
        if (!bVar6) {
            bVar24 = !bVar24;
        }
    } else if (bVar23 == false && bVar4) {
        uVar3 = uVar2 + in_r0;
        bVar24 = uVar3 < uVar2;
        if (bVar6) {
            bVar24 = !bVar24;
        }
    } else if (bVar23 == true && !bVar4) {
        uVar3 = uVar2 + in_r0;
        bVar24 = uVar3 < uVar2;
        if (!bVar6) {
            bVar24 = !bVar24;
        }
    } else {
        uVar3 = uVar2 - in_r0;
        bVar24 = uVar2 < uVar3;
        if (bVar6) {
            bVar24 = !bVar24;
        }
    }
    bVar6 = (uVar3 & 0x80000000) == 0;
    uVar2 = uVar3 << 1 | (u32)((uVar1 & 0x4000) != 0);
    if (bVar24 == false && !bVar4) {
        uVar3 = uVar2 - in_r0;
        bVar25 = uVar2 < uVar3;
        if (!bVar6) {
            bVar25 = !bVar25;
        }
    } else if (bVar24 == false && bVar4) {
        uVar3 = uVar2 + in_r0;
        bVar25 = uVar3 < uVar2;
        if (bVar6) {
            bVar25 = !bVar25;
        }
    } else if (bVar24 == true && !bVar4) {
        uVar3 = uVar2 + in_r0;
        bVar25 = uVar3 < uVar2;
        if (!bVar6) {
            bVar25 = !bVar25;
        }
    } else {
        uVar3 = uVar2 - in_r0;
        bVar25 = uVar2 < uVar3;
        if (bVar6) {
            bVar25 = !bVar25;
        }
    }
    bVar6 = (uVar3 & 0x80000000) == 0;
    uVar2 = uVar3 << 1 | (u32)((uVar1 & 0x2000) != 0);
    if (bVar25 == false && !bVar4) {
        uVar3 = uVar2 - in_r0;
        bVar26 = uVar2 < uVar3;
        if (!bVar6) {
            bVar26 = !bVar26;
        }
    } else if (bVar25 == false && bVar4) {
        uVar3 = uVar2 + in_r0;
        bVar26 = uVar3 < uVar2;
        if (bVar6) {
            bVar26 = !bVar26;
        }
    } else if (bVar25 == true && !bVar4) {
        uVar3 = uVar2 + in_r0;
        bVar26 = uVar3 < uVar2;
        if (!bVar6) {
            bVar26 = !bVar26;
        }
    } else {
        uVar3 = uVar2 - in_r0;
        bVar26 = uVar2 < uVar3;
        if (bVar6) {
            bVar26 = !bVar26;
        }
    }
    bVar6 = (uVar3 & 0x80000000) == 0;
    uVar2 = uVar3 << 1 | (u32)((uVar1 & 0x1000) != 0);
    if (bVar26 == false && !bVar4) {
        uVar3 = uVar2 - in_r0;
        bVar27 = uVar2 < uVar3;
        if (!bVar6) {
            bVar27 = !bVar27;
        }
    } else if (bVar26 == false && bVar4) {
        uVar3 = uVar2 + in_r0;
        bVar27 = uVar3 < uVar2;
        if (bVar6) {
            bVar27 = !bVar27;
        }
    } else if (bVar26 == true && !bVar4) {
        uVar3 = uVar2 + in_r0;
        bVar27 = uVar3 < uVar2;
        if (!bVar6) {
            bVar27 = !bVar27;
        }
    } else {
        uVar3 = uVar2 - in_r0;
        bVar27 = uVar2 < uVar3;
        if (bVar6) {
            bVar27 = !bVar27;
        }
    }
    bVar6 = (uVar3 & 0x80000000) == 0;
    uVar2 = uVar3 << 1 | (u32)((uVar1 & 0x800) != 0);
    if (bVar27 == false && !bVar4) {
        uVar3 = uVar2 - in_r0;
        bVar28 = uVar2 < uVar3;
        if (!bVar6) {
            bVar28 = !bVar28;
        }
    } else if (bVar27 == false && bVar4) {
        uVar3 = uVar2 + in_r0;
        bVar28 = uVar3 < uVar2;
        if (bVar6) {
            bVar28 = !bVar28;
        }
    } else if (bVar27 == true && !bVar4) {
        uVar3 = uVar2 + in_r0;
        bVar28 = uVar3 < uVar2;
        if (!bVar6) {
            bVar28 = !bVar28;
        }
    } else {
        uVar3 = uVar2 - in_r0;
        bVar28 = uVar2 < uVar3;
        if (bVar6) {
            bVar28 = !bVar28;
        }
    }
    bVar6 = (uVar3 & 0x80000000) == 0;
    uVar2 = uVar3 << 1 | (u32)((uVar1 & 0x400) != 0);
    if (bVar28 == false && !bVar4) {
        uVar3 = uVar2 - in_r0;
        bVar29 = uVar2 < uVar3;
        if (!bVar6) {
            bVar29 = !bVar29;
        }
    } else if (bVar28 == false && bVar4) {
        uVar3 = uVar2 + in_r0;
        bVar29 = uVar3 < uVar2;
        if (bVar6) {
            bVar29 = !bVar29;
        }
    } else if (bVar28 == true && !bVar4) {
        uVar3 = uVar2 + in_r0;
        bVar29 = uVar3 < uVar2;
        if (!bVar6) {
            bVar29 = !bVar29;
        }
    } else {
        uVar3 = uVar2 - in_r0;
        bVar29 = uVar2 < uVar3;
        if (bVar6) {
            bVar29 = !bVar29;
        }
    }
    bVar6 = (uVar3 & 0x80000000) == 0;
    uVar2 = uVar3 << 1 | (u32)((uVar1 & 0x200) != 0);
    if (bVar29 == false && !bVar4) {
        uVar3 = uVar2 - in_r0;
        bVar30 = uVar2 < uVar3;
        if (!bVar6) {
            bVar30 = !bVar30;
        }
    } else if (bVar29 == false && bVar4) {
        uVar3 = uVar2 + in_r0;
        bVar30 = uVar3 < uVar2;
        if (bVar6) {
            bVar30 = !bVar30;
        }
    } else if (bVar29 == true && !bVar4) {
        uVar3 = uVar2 + in_r0;
        bVar30 = uVar3 < uVar2;
        if (!bVar6) {
            bVar30 = !bVar30;
        }
    } else {
        uVar3 = uVar2 - in_r0;
        bVar30 = uVar2 < uVar3;
        if (bVar6) {
            bVar30 = !bVar30;
        }
    }
    bVar6 = (uVar3 & 0x80000000) == 0;
    uVar2 = uVar3 << 1 | (u32)((uVar1 & 0x100) != 0);
    if (bVar30 == false && !bVar4) {
        uVar3 = uVar2 - in_r0;
        bVar31 = uVar2 < uVar3;
        if (!bVar6) {
            bVar31 = !bVar31;
        }
    } else if (bVar30 == false && bVar4) {
        uVar3 = uVar2 + in_r0;
        bVar31 = uVar3 < uVar2;
        if (bVar6) {
            bVar31 = !bVar31;
        }
    } else if (bVar30 == true && !bVar4) {
        uVar3 = uVar2 + in_r0;
        bVar31 = uVar3 < uVar2;
        if (!bVar6) {
            bVar31 = !bVar31;
        }
    } else {
        uVar3 = uVar2 - in_r0;
        bVar31 = uVar2 < uVar3;
        if (bVar6) {
            bVar31 = !bVar31;
        }
    }
    bVar6 = (uVar3 & 0x80000000) == 0;
    uVar2 = uVar3 << 1 | (u32)((uVar1 & 0x80) != 0);
    if (bVar31 == false && !bVar4) {
        uVar3 = uVar2 - in_r0;
        bVar32 = uVar2 < uVar3;
        if (!bVar6) {
            bVar32 = !bVar32;
        }
    } else if (bVar31 == false && bVar4) {
        uVar3 = uVar2 + in_r0;
        bVar32 = uVar3 < uVar2;
        if (bVar6) {
            bVar32 = !bVar32;
        }
    } else if (bVar31 == true && !bVar4) {
        uVar3 = uVar2 + in_r0;
        bVar32 = uVar3 < uVar2;
        if (!bVar6) {
            bVar32 = !bVar32;
        }
    } else {
        uVar3 = uVar2 - in_r0;
        bVar32 = uVar2 < uVar3;
        if (bVar6) {
            bVar32 = !bVar32;
        }
    }
    bVar6 = (uVar3 & 0x80000000) == 0;
    uVar2 = uVar3 << 1 | (u32)((uVar1 & 0x40) != 0);
    if (bVar32 == false && !bVar4) {
        uVar3 = uVar2 - in_r0;
        bVar33 = uVar2 < uVar3;
        if (!bVar6) {
            bVar33 = !bVar33;
        }
    } else if (bVar32 == false && bVar4) {
        uVar3 = uVar2 + in_r0;
        bVar33 = uVar3 < uVar2;
        if (bVar6) {
            bVar33 = !bVar33;
        }
    } else if (bVar32 == true && !bVar4) {
        uVar3 = uVar2 + in_r0;
        bVar33 = uVar3 < uVar2;
        if (!bVar6) {
            bVar33 = !bVar33;
        }
    } else {
        uVar3 = uVar2 - in_r0;
        bVar33 = uVar2 < uVar3;
        if (bVar6) {
            bVar33 = !bVar33;
        }
    }
    bVar6 = (uVar3 & 0x80000000) == 0;
    uVar2 = uVar3 << 1 | (u32)((uVar1 & 0x20) != 0);
    if (bVar33 == false && !bVar4) {
        uVar3 = uVar2 - in_r0;
        bVar34 = uVar2 < uVar3;
        if (!bVar6) {
            bVar34 = !bVar34;
        }
    } else if (bVar33 == false && bVar4) {
        uVar3 = uVar2 + in_r0;
        bVar34 = uVar3 < uVar2;
        if (bVar6) {
            bVar34 = !bVar34;
        }
    } else if (bVar33 == true && !bVar4) {
        uVar3 = uVar2 + in_r0;
        bVar34 = uVar3 < uVar2;
        if (!bVar6) {
            bVar34 = !bVar34;
        }
    } else {
        uVar3 = uVar2 - in_r0;
        bVar34 = uVar2 < uVar3;
        if (bVar6) {
            bVar34 = !bVar34;
        }
    }
    bVar6 = (uVar3 & 0x80000000) == 0;
    uVar2 = uVar3 << 1 | (u32)((uVar1 & 0x10) != 0);
    if (bVar34 == false && !bVar4) {
        uVar3 = uVar2 - in_r0;
        bVar35 = uVar2 < uVar3;
        if (!bVar6) {
            bVar35 = !bVar35;
        }
    } else if (bVar34 == false && bVar4) {
        uVar3 = uVar2 + in_r0;
        bVar35 = uVar3 < uVar2;
        if (bVar6) {
            bVar35 = !bVar35;
        }
    } else if (bVar34 == true && !bVar4) {
        uVar3 = uVar2 + in_r0;
        bVar35 = uVar3 < uVar2;
        if (!bVar6) {
            bVar35 = !bVar35;
        }
    } else {
        uVar3 = uVar2 - in_r0;
        bVar35 = uVar2 < uVar3;
        if (bVar6) {
            bVar35 = !bVar35;
        }
    }
    bVar6 = (uVar3 & 0x80000000) == 0;
    uVar2 = uVar3 << 1 | (u32)((uVar1 & 8) != 0);
    if (bVar35 == false && !bVar4) {
        uVar3 = uVar2 - in_r0;
        bVar36 = uVar2 < uVar3;
        if (!bVar6) {
            bVar36 = !bVar36;
        }
    } else if (bVar35 == false && bVar4) {
        uVar3 = uVar2 + in_r0;
        bVar36 = uVar3 < uVar2;
        if (bVar6) {
            bVar36 = !bVar36;
        }
    } else if (bVar35 == true && !bVar4) {
        uVar3 = uVar2 + in_r0;
        bVar36 = uVar3 < uVar2;
        if (!bVar6) {
            bVar36 = !bVar36;
        }
    } else {
        uVar3 = uVar2 - in_r0;
        bVar36 = uVar2 < uVar3;
        if (bVar6) {
            bVar36 = !bVar36;
        }
    }
    bVar6 = (uVar3 & 0x80000000) == 0;
    uVar2 = uVar3 << 1 | (u32)((uVar1 & 4) != 0);
    if (bVar36 == false && !bVar4) {
        uVar3 = uVar2 - in_r0;
        bVar37 = uVar2 < uVar3;
        if (!bVar6) {
            bVar37 = !bVar37;
        }
    } else if (bVar36 == false && bVar4) {
        uVar3 = uVar2 + in_r0;
        bVar37 = uVar3 < uVar2;
        if (bVar6) {
            bVar37 = !bVar37;
        }
    } else if (bVar36 == true && !bVar4) {
        uVar3 = uVar2 + in_r0;
        bVar37 = uVar3 < uVar2;
        if (!bVar6) {
            bVar37 = !bVar37;
        }
    } else {
        uVar3 = uVar2 - in_r0;
        bVar37 = uVar2 < uVar3;
        if (bVar6) {
            bVar37 = !bVar37;
        }
    }
    bVar6 = (uVar3 & 0x80000000) == 0;
    uVar2 = uVar3 << 1 | (u32)((uVar1 & 2) != 0);
    if (bVar37 == false && !bVar4) {
        bVar38 = uVar2 < uVar2 - in_r0;
        if (!bVar6) {
            bVar38 = !bVar38;
        }
    } else if (bVar37 == false && bVar4) {
        bVar38 = uVar2 + in_r0 < uVar2;
        if (bVar6) {
            bVar38 = !bVar38;
        }
    } else if (bVar37 == true && !bVar4) {
        bVar38 = uVar2 + in_r0 < uVar2;
        if (!bVar6) {
            bVar38 = !bVar38;
        }
    } else {
        bVar38 = uVar2 < uVar2 - in_r0;
        if (bVar6) {
            bVar38 = !bVar38;
        }
    }
    return ((((((((((((((((((((((((((((((((u32)(bVar7 == bVar4) << 1 | (u32)(bVar8 == bVar4)) << 1 |
                                         (u32)(bVar9 == bVar4))
                                            << 1 |
                                        (u32)(bVar10 == bVar4))
                                           << 1 |
                                       (u32)(bVar11 == bVar4))
                                          << 1 |
                                      (u32)(bVar12 == bVar4))
                                         << 1 |
                                     (u32)(bVar13 == bVar4))
                                        << 1 |
                                    (u32)(bVar14 == bVar4))
                                       << 1 |
                                   (u32)(bVar15 == bVar4))
                                      << 1 |
                                  (u32)(bVar16 == bVar4))
                                     << 1 |
                                 (u32)(bVar17 == bVar4))
                                    << 1 |
                                (u32)(bVar18 == bVar4))
                                   << 1 |
                               (u32)(bVar19 == bVar4))
                                  << 1 |
                              (u32)(bVar20 == bVar4))
                                 << 1 |
                             (u32)(bVar21 == bVar4))
                                << 1 |
                            (u32)(bVar22 == bVar4))
                               << 1 |
                           (u32)(bVar23 == bVar4))
                              << 1 |
                          (u32)(bVar24 == bVar4))
                             << 1 |
                         (u32)(bVar25 == bVar4))
                            << 1 |
                        (u32)(bVar26 == bVar4))
                           << 1 |
                       (u32)(bVar27 == bVar4))
                          << 1 |
                      (u32)(bVar28 == bVar4))
                         << 1 |
                     (u32)(bVar29 == bVar4))
                        << 1 |
                    (u32)(bVar30 == bVar4))
                       << 1 |
                   (u32)(bVar31 == bVar4))
                      << 1 |
                  (u32)(bVar32 == bVar4))
                     << 1 |
                 (u32)(bVar33 == bVar4))
                    << 1 |
                (u32)(bVar34 == bVar4))
                   << 1 |
               (u32)(bVar35 == bVar4))
                  << 1 |
              (u32)(bVar36 == bVar4))
                 << 1 |
             (u32)(bVar37 == bVar4))
                << 1 |
            (u32)(bVar38 == bVar4)) +
           (u32)(bVar4 != bVar5);
}

/*
 * libgcc_divide_helper_01051c  0x8c01051c
 * called by: alt_entry_11319e, alt_entry_11d9a0, alt_entry_205644, alt_entry_25f42c, array44_index_of,
 * asr_fill_loop_1117e4, asr_talk_11daa4, asr_talk_11dda2 (+29 more)
 */
u32 libgcc_divide_helper_01051c(u32 a0, u32 a1) {
    u32 uVar1;
    u32 uVar2;
    u32 uVar3;
    bool bVar4;
    int in_r0;
    u32 in_r1;
    bool bVar5;
    bool bVar7;
    bool bVar8;
    bool bVar9;
    bool bVar10;
    bool bVar11;
    bool bVar12;
    bool bVar13;
    bool bVar14;
    bool bVar15;
    bool bVar16;
    bool bVar17;
    bool bVar18;
    bool bVar19;
    bool bVar20;
    bool bVar21;
    bool bVar22;
    bool bVar23;
    bool bVar24;
    bool bVar25;
    bool bVar26;
    bool bVar27;
    bool bVar28;
    bool bVar29;
    bool bVar30;
    bool bVar31;
    bool bVar32;
    bool bVar33;
    bool bVar34;
    bool bVar35;
    bool bVar36;
    bool bVar6;

    if (in_r0 == 0) {
        g_8c2787a8 = 0x44e;
        return 0;
    }
    uVar3 = (u32)((in_r1 & 0x80000000) != 0);
    uVar1 = uVar3 - in_r0;
    bVar4 = uVar3 < uVar1;
    uVar3 = in_r1 << 2;
    bVar5 = (uVar1 & 0x80000000) == 0;
    uVar1 = uVar1 * 2 | (u32)((in_r1 & 0x40000000) != 0);
    if (bVar4) {
        if (bVar4) {
            uVar2 = uVar1 + in_r0;
            bVar6 = uVar2 < uVar1;
            if (!bVar5) {
                bVar6 = !bVar6;
            }
        } else {
            uVar2 = uVar1 - in_r0;
            bVar6 = uVar1 < uVar2;
            if (bVar5) {
                bVar6 = !bVar6;
            }
        }
    } else {
        uVar2 = uVar1 - in_r0;
        bVar6 = uVar1 < uVar2;
        if (!bVar5) {
            bVar6 = !bVar6;
        }
    }
    bVar5 = (uVar2 & 0x80000000) == 0;
    uVar1 = uVar2 << 1 | (u32)((uVar3 & 0x80000000) != 0);
    if (bVar6) {
        if (bVar6) {
            uVar2 = uVar1 + in_r0;
            bVar7 = uVar2 < uVar1;
            if (!bVar5) {
                bVar7 = !bVar7;
            }
        } else {
            uVar2 = uVar1 - in_r0;
            bVar7 = uVar1 < uVar2;
            if (bVar5) {
                bVar7 = !bVar7;
            }
        }
    } else {
        uVar2 = uVar1 - in_r0;
        bVar7 = uVar1 < uVar2;
        if (!bVar5) {
            bVar7 = !bVar7;
        }
    }
    bVar5 = (uVar2 & 0x80000000) == 0;
    uVar1 = uVar2 << 1 | (u32)((uVar3 & 0x40000000) != 0);
    if (bVar7) {
        if (bVar7) {
            uVar2 = uVar1 + in_r0;
            bVar8 = uVar2 < uVar1;
            if (!bVar5) {
                bVar8 = !bVar8;
            }
        } else {
            uVar2 = uVar1 - in_r0;
            bVar8 = uVar1 < uVar2;
            if (bVar5) {
                bVar8 = !bVar8;
            }
        }
    } else {
        uVar2 = uVar1 - in_r0;
        bVar8 = uVar1 < uVar2;
        if (!bVar5) {
            bVar8 = !bVar8;
        }
    }
    bVar5 = (uVar2 & 0x80000000) == 0;
    uVar1 = uVar2 << 1 | (u32)((uVar3 & 0x20000000) != 0);
    if (bVar8) {
        if (bVar8) {
            uVar2 = uVar1 + in_r0;
            bVar9 = uVar2 < uVar1;
            if (!bVar5) {
                bVar9 = !bVar9;
            }
        } else {
            uVar2 = uVar1 - in_r0;
            bVar9 = uVar1 < uVar2;
            if (bVar5) {
                bVar9 = !bVar9;
            }
        }
    } else {
        uVar2 = uVar1 - in_r0;
        bVar9 = uVar1 < uVar2;
        if (!bVar5) {
            bVar9 = !bVar9;
        }
    }
    bVar5 = (uVar2 & 0x80000000) == 0;
    uVar1 = uVar2 << 1 | (u32)((uVar3 & 0x10000000) != 0);
    if (bVar9) {
        if (bVar9) {
            uVar2 = uVar1 + in_r0;
            bVar10 = uVar2 < uVar1;
            if (!bVar5) {
                bVar10 = !bVar10;
            }
        } else {
            uVar2 = uVar1 - in_r0;
            bVar10 = uVar1 < uVar2;
            if (bVar5) {
                bVar10 = !bVar10;
            }
        }
    } else {
        uVar2 = uVar1 - in_r0;
        bVar10 = uVar1 < uVar2;
        if (!bVar5) {
            bVar10 = !bVar10;
        }
    }
    bVar5 = (uVar2 & 0x80000000) == 0;
    uVar1 = uVar2 << 1 | (u32)((uVar3 & 0x8000000) != 0);
    if (bVar10) {
        if (bVar10) {
            uVar2 = uVar1 + in_r0;
            bVar11 = uVar2 < uVar1;
            if (!bVar5) {
                bVar11 = !bVar11;
            }
        } else {
            uVar2 = uVar1 - in_r0;
            bVar11 = uVar1 < uVar2;
            if (bVar5) {
                bVar11 = !bVar11;
            }
        }
    } else {
        uVar2 = uVar1 - in_r0;
        bVar11 = uVar1 < uVar2;
        if (!bVar5) {
            bVar11 = !bVar11;
        }
    }
    bVar5 = (uVar2 & 0x80000000) == 0;
    uVar1 = uVar2 << 1 | (u32)((uVar3 & 0x4000000) != 0);
    if (bVar11) {
        if (bVar11) {
            uVar2 = uVar1 + in_r0;
            bVar12 = uVar2 < uVar1;
            if (!bVar5) {
                bVar12 = !bVar12;
            }
        } else {
            uVar2 = uVar1 - in_r0;
            bVar12 = uVar1 < uVar2;
            if (bVar5) {
                bVar12 = !bVar12;
            }
        }
    } else {
        uVar2 = uVar1 - in_r0;
        bVar12 = uVar1 < uVar2;
        if (!bVar5) {
            bVar12 = !bVar12;
        }
    }
    bVar5 = (uVar2 & 0x80000000) == 0;
    uVar1 = uVar2 << 1 | (u32)((uVar3 & 0x2000000) != 0);
    if (bVar12) {
        if (bVar12) {
            uVar2 = uVar1 + in_r0;
            bVar13 = uVar2 < uVar1;
            if (!bVar5) {
                bVar13 = !bVar13;
            }
        } else {
            uVar2 = uVar1 - in_r0;
            bVar13 = uVar1 < uVar2;
            if (bVar5) {
                bVar13 = !bVar13;
            }
        }
    } else {
        uVar2 = uVar1 - in_r0;
        bVar13 = uVar1 < uVar2;
        if (!bVar5) {
            bVar13 = !bVar13;
        }
    }
    bVar5 = (uVar2 & 0x80000000) == 0;
    uVar1 = uVar2 << 1 | (u32)((uVar3 & 0x1000000) != 0);
    if (bVar13) {
        if (bVar13) {
            uVar2 = uVar1 + in_r0;
            bVar14 = uVar2 < uVar1;
            if (!bVar5) {
                bVar14 = !bVar14;
            }
        } else {
            uVar2 = uVar1 - in_r0;
            bVar14 = uVar1 < uVar2;
            if (bVar5) {
                bVar14 = !bVar14;
            }
        }
    } else {
        uVar2 = uVar1 - in_r0;
        bVar14 = uVar1 < uVar2;
        if (!bVar5) {
            bVar14 = !bVar14;
        }
    }
    bVar5 = (uVar2 & 0x80000000) == 0;
    uVar1 = uVar2 << 1 | (u32)((uVar3 & 0x800000) != 0);
    if (bVar14) {
        if (bVar14) {
            uVar2 = uVar1 + in_r0;
            bVar15 = uVar2 < uVar1;
            if (!bVar5) {
                bVar15 = !bVar15;
            }
        } else {
            uVar2 = uVar1 - in_r0;
            bVar15 = uVar1 < uVar2;
            if (bVar5) {
                bVar15 = !bVar15;
            }
        }
    } else {
        uVar2 = uVar1 - in_r0;
        bVar15 = uVar1 < uVar2;
        if (!bVar5) {
            bVar15 = !bVar15;
        }
    }
    bVar5 = (uVar2 & 0x80000000) == 0;
    uVar1 = uVar2 << 1 | (u32)((uVar3 & 0x400000) != 0);
    if (bVar15) {
        if (bVar15) {
            uVar2 = uVar1 + in_r0;
            bVar16 = uVar2 < uVar1;
            if (!bVar5) {
                bVar16 = !bVar16;
            }
        } else {
            uVar2 = uVar1 - in_r0;
            bVar16 = uVar1 < uVar2;
            if (bVar5) {
                bVar16 = !bVar16;
            }
        }
    } else {
        uVar2 = uVar1 - in_r0;
        bVar16 = uVar1 < uVar2;
        if (!bVar5) {
            bVar16 = !bVar16;
        }
    }
    bVar5 = (uVar2 & 0x80000000) == 0;
    uVar1 = uVar2 << 1 | (u32)((uVar3 & 0x200000) != 0);
    if (bVar16) {
        if (bVar16) {
            uVar2 = uVar1 + in_r0;
            bVar17 = uVar2 < uVar1;
            if (!bVar5) {
                bVar17 = !bVar17;
            }
        } else {
            uVar2 = uVar1 - in_r0;
            bVar17 = uVar1 < uVar2;
            if (bVar5) {
                bVar17 = !bVar17;
            }
        }
    } else {
        uVar2 = uVar1 - in_r0;
        bVar17 = uVar1 < uVar2;
        if (!bVar5) {
            bVar17 = !bVar17;
        }
    }
    bVar5 = (uVar2 & 0x80000000) == 0;
    uVar1 = uVar2 << 1 | (u32)((uVar3 & 0x100000) != 0);
    if (bVar17) {
        if (bVar17) {
            uVar2 = uVar1 + in_r0;
            bVar18 = uVar2 < uVar1;
            if (!bVar5) {
                bVar18 = !bVar18;
            }
        } else {
            uVar2 = uVar1 - in_r0;
            bVar18 = uVar1 < uVar2;
            if (bVar5) {
                bVar18 = !bVar18;
            }
        }
    } else {
        uVar2 = uVar1 - in_r0;
        bVar18 = uVar1 < uVar2;
        if (!bVar5) {
            bVar18 = !bVar18;
        }
    }
    bVar5 = (uVar2 & 0x80000000) == 0;
    uVar1 = uVar2 << 1 | (u32)((uVar3 & 0x80000) != 0);
    if (bVar18) {
        if (bVar18) {
            uVar2 = uVar1 + in_r0;
            bVar19 = uVar2 < uVar1;
            if (!bVar5) {
                bVar19 = !bVar19;
            }
        } else {
            uVar2 = uVar1 - in_r0;
            bVar19 = uVar1 < uVar2;
            if (bVar5) {
                bVar19 = !bVar19;
            }
        }
    } else {
        uVar2 = uVar1 - in_r0;
        bVar19 = uVar1 < uVar2;
        if (!bVar5) {
            bVar19 = !bVar19;
        }
    }
    bVar5 = (uVar2 & 0x80000000) == 0;
    uVar1 = uVar2 << 1 | (u32)((uVar3 & 0x40000) != 0);
    if (bVar19) {
        if (bVar19) {
            uVar2 = uVar1 + in_r0;
            bVar20 = uVar2 < uVar1;
            if (!bVar5) {
                bVar20 = !bVar20;
            }
        } else {
            uVar2 = uVar1 - in_r0;
            bVar20 = uVar1 < uVar2;
            if (bVar5) {
                bVar20 = !bVar20;
            }
        }
    } else {
        uVar2 = uVar1 - in_r0;
        bVar20 = uVar1 < uVar2;
        if (!bVar5) {
            bVar20 = !bVar20;
        }
    }
    bVar5 = (uVar2 & 0x80000000) == 0;
    uVar1 = uVar2 << 1 | (u32)((uVar3 & 0x20000) != 0);
    if (bVar20) {
        if (bVar20) {
            uVar2 = uVar1 + in_r0;
            bVar21 = uVar2 < uVar1;
            if (!bVar5) {
                bVar21 = !bVar21;
            }
        } else {
            uVar2 = uVar1 - in_r0;
            bVar21 = uVar1 < uVar2;
            if (bVar5) {
                bVar21 = !bVar21;
            }
        }
    } else {
        uVar2 = uVar1 - in_r0;
        bVar21 = uVar1 < uVar2;
        if (!bVar5) {
            bVar21 = !bVar21;
        }
    }
    bVar5 = (uVar2 & 0x80000000) == 0;
    uVar1 = uVar2 << 1 | (u32)((uVar3 & 0x10000) != 0);
    if (bVar21) {
        if (bVar21) {
            uVar2 = uVar1 + in_r0;
            bVar22 = uVar2 < uVar1;
            if (!bVar5) {
                bVar22 = !bVar22;
            }
        } else {
            uVar2 = uVar1 - in_r0;
            bVar22 = uVar1 < uVar2;
            if (bVar5) {
                bVar22 = !bVar22;
            }
        }
    } else {
        uVar2 = uVar1 - in_r0;
        bVar22 = uVar1 < uVar2;
        if (!bVar5) {
            bVar22 = !bVar22;
        }
    }
    bVar5 = (uVar2 & 0x80000000) == 0;
    uVar1 = uVar2 << 1 | (u32)((uVar3 & 0x8000) != 0);
    if (bVar22) {
        if (bVar22) {
            uVar2 = uVar1 + in_r0;
            bVar23 = uVar2 < uVar1;
            if (!bVar5) {
                bVar23 = !bVar23;
            }
        } else {
            uVar2 = uVar1 - in_r0;
            bVar23 = uVar1 < uVar2;
            if (bVar5) {
                bVar23 = !bVar23;
            }
        }
    } else {
        uVar2 = uVar1 - in_r0;
        bVar23 = uVar1 < uVar2;
        if (!bVar5) {
            bVar23 = !bVar23;
        }
    }
    bVar5 = (uVar2 & 0x80000000) == 0;
    uVar1 = uVar2 << 1 | (u32)((uVar3 & 0x4000) != 0);
    if (bVar23) {
        if (bVar23) {
            uVar2 = uVar1 + in_r0;
            bVar24 = uVar2 < uVar1;
            if (!bVar5) {
                bVar24 = !bVar24;
            }
        } else {
            uVar2 = uVar1 - in_r0;
            bVar24 = uVar1 < uVar2;
            if (bVar5) {
                bVar24 = !bVar24;
            }
        }
    } else {
        uVar2 = uVar1 - in_r0;
        bVar24 = uVar1 < uVar2;
        if (!bVar5) {
            bVar24 = !bVar24;
        }
    }
    bVar5 = (uVar2 & 0x80000000) == 0;
    uVar1 = uVar2 << 1 | (u32)((uVar3 & 0x2000) != 0);
    if (bVar24) {
        if (bVar24) {
            uVar2 = uVar1 + in_r0;
            bVar25 = uVar2 < uVar1;
            if (!bVar5) {
                bVar25 = !bVar25;
            }
        } else {
            uVar2 = uVar1 - in_r0;
            bVar25 = uVar1 < uVar2;
            if (bVar5) {
                bVar25 = !bVar25;
            }
        }
    } else {
        uVar2 = uVar1 - in_r0;
        bVar25 = uVar1 < uVar2;
        if (!bVar5) {
            bVar25 = !bVar25;
        }
    }
    bVar5 = (uVar2 & 0x80000000) == 0;
    uVar1 = uVar2 << 1 | (u32)((uVar3 & 0x1000) != 0);
    if (bVar25) {
        if (bVar25) {
            uVar2 = uVar1 + in_r0;
            bVar26 = uVar2 < uVar1;
            if (!bVar5) {
                bVar26 = !bVar26;
            }
        } else {
            uVar2 = uVar1 - in_r0;
            bVar26 = uVar1 < uVar2;
            if (bVar5) {
                bVar26 = !bVar26;
            }
        }
    } else {
        uVar2 = uVar1 - in_r0;
        bVar26 = uVar1 < uVar2;
        if (!bVar5) {
            bVar26 = !bVar26;
        }
    }
    bVar5 = (uVar2 & 0x80000000) == 0;
    uVar1 = uVar2 << 1 | (u32)((uVar3 & 0x800) != 0);
    if (bVar26) {
        if (bVar26) {
            uVar2 = uVar1 + in_r0;
            bVar27 = uVar2 < uVar1;
            if (!bVar5) {
                bVar27 = !bVar27;
            }
        } else {
            uVar2 = uVar1 - in_r0;
            bVar27 = uVar1 < uVar2;
            if (bVar5) {
                bVar27 = !bVar27;
            }
        }
    } else {
        uVar2 = uVar1 - in_r0;
        bVar27 = uVar1 < uVar2;
        if (!bVar5) {
            bVar27 = !bVar27;
        }
    }
    bVar5 = (uVar2 & 0x80000000) == 0;
    uVar1 = uVar2 << 1 | (u32)((uVar3 & 0x400) != 0);
    if (bVar27) {
        if (bVar27) {
            uVar2 = uVar1 + in_r0;
            bVar28 = uVar2 < uVar1;
            if (!bVar5) {
                bVar28 = !bVar28;
            }
        } else {
            uVar2 = uVar1 - in_r0;
            bVar28 = uVar1 < uVar2;
            if (bVar5) {
                bVar28 = !bVar28;
            }
        }
    } else {
        uVar2 = uVar1 - in_r0;
        bVar28 = uVar1 < uVar2;
        if (!bVar5) {
            bVar28 = !bVar28;
        }
    }
    bVar5 = (uVar2 & 0x80000000) == 0;
    uVar1 = uVar2 << 1 | (u32)((uVar3 & 0x200) != 0);
    if (bVar28) {
        if (bVar28) {
            uVar2 = uVar1 + in_r0;
            bVar29 = uVar2 < uVar1;
            if (!bVar5) {
                bVar29 = !bVar29;
            }
        } else {
            uVar2 = uVar1 - in_r0;
            bVar29 = uVar1 < uVar2;
            if (bVar5) {
                bVar29 = !bVar29;
            }
        }
    } else {
        uVar2 = uVar1 - in_r0;
        bVar29 = uVar1 < uVar2;
        if (!bVar5) {
            bVar29 = !bVar29;
        }
    }
    bVar5 = (uVar2 & 0x80000000) == 0;
    uVar1 = uVar2 << 1 | (u32)((uVar3 & 0x100) != 0);
    if (bVar29) {
        if (bVar29) {
            uVar2 = uVar1 + in_r0;
            bVar30 = uVar2 < uVar1;
            if (!bVar5) {
                bVar30 = !bVar30;
            }
        } else {
            uVar2 = uVar1 - in_r0;
            bVar30 = uVar1 < uVar2;
            if (bVar5) {
                bVar30 = !bVar30;
            }
        }
    } else {
        uVar2 = uVar1 - in_r0;
        bVar30 = uVar1 < uVar2;
        if (!bVar5) {
            bVar30 = !bVar30;
        }
    }
    bVar5 = (uVar2 & 0x80000000) == 0;
    uVar1 = uVar2 << 1 | (u32)((uVar3 & 0x80) != 0);
    if (bVar30) {
        if (bVar30) {
            uVar2 = uVar1 + in_r0;
            bVar31 = uVar2 < uVar1;
            if (!bVar5) {
                bVar31 = !bVar31;
            }
        } else {
            uVar2 = uVar1 - in_r0;
            bVar31 = uVar1 < uVar2;
            if (bVar5) {
                bVar31 = !bVar31;
            }
        }
    } else {
        uVar2 = uVar1 - in_r0;
        bVar31 = uVar1 < uVar2;
        if (!bVar5) {
            bVar31 = !bVar31;
        }
    }
    bVar5 = (uVar2 & 0x80000000) == 0;
    uVar1 = uVar2 << 1 | (u32)((uVar3 & 0x40) != 0);
    if (bVar31) {
        if (bVar31) {
            uVar2 = uVar1 + in_r0;
            bVar32 = uVar2 < uVar1;
            if (!bVar5) {
                bVar32 = !bVar32;
            }
        } else {
            uVar2 = uVar1 - in_r0;
            bVar32 = uVar1 < uVar2;
            if (bVar5) {
                bVar32 = !bVar32;
            }
        }
    } else {
        uVar2 = uVar1 - in_r0;
        bVar32 = uVar1 < uVar2;
        if (!bVar5) {
            bVar32 = !bVar32;
        }
    }
    bVar5 = (uVar2 & 0x80000000) == 0;
    uVar1 = uVar2 << 1 | (u32)((uVar3 & 0x20) != 0);
    if (bVar32) {
        if (bVar32) {
            uVar2 = uVar1 + in_r0;
            bVar33 = uVar2 < uVar1;
            if (!bVar5) {
                bVar33 = !bVar33;
            }
        } else {
            uVar2 = uVar1 - in_r0;
            bVar33 = uVar1 < uVar2;
            if (bVar5) {
                bVar33 = !bVar33;
            }
        }
    } else {
        uVar2 = uVar1 - in_r0;
        bVar33 = uVar1 < uVar2;
        if (!bVar5) {
            bVar33 = !bVar33;
        }
    }
    bVar5 = (uVar2 & 0x80000000) == 0;
    uVar1 = uVar2 << 1 | (u32)((uVar3 & 0x10) != 0);
    if (bVar33) {
        if (bVar33) {
            uVar2 = uVar1 + in_r0;
            bVar34 = uVar2 < uVar1;
            if (!bVar5) {
                bVar34 = !bVar34;
            }
        } else {
            uVar2 = uVar1 - in_r0;
            bVar34 = uVar1 < uVar2;
            if (bVar5) {
                bVar34 = !bVar34;
            }
        }
    } else {
        uVar2 = uVar1 - in_r0;
        bVar34 = uVar1 < uVar2;
        if (!bVar5) {
            bVar34 = !bVar34;
        }
    }
    bVar5 = (uVar2 & 0x80000000) == 0;
    uVar1 = uVar2 << 1 | (u32)((uVar3 & 8) != 0);
    if (bVar34) {
        if (bVar34) {
            uVar2 = uVar1 + in_r0;
            bVar35 = uVar2 < uVar1;
            if (!bVar5) {
                bVar35 = !bVar35;
            }
        } else {
            uVar2 = uVar1 - in_r0;
            bVar35 = uVar1 < uVar2;
            if (bVar5) {
                bVar35 = !bVar35;
            }
        }
    } else {
        uVar2 = uVar1 - in_r0;
        bVar35 = uVar1 < uVar2;
        if (!bVar5) {
            bVar35 = !bVar35;
        }
    }
    bVar5 = (uVar2 & 0x80000000) == 0;
    uVar1 = uVar2 << 1 | (u32)((uVar3 & 4) != 0);
    if (bVar35) {
        if (bVar35) {
            bVar36 = uVar1 + in_r0 < uVar1;
            if (!bVar5) {
                bVar36 = !bVar36;
            }
        } else {
            bVar36 = uVar1 < uVar1 - in_r0;
            if (bVar5) {
                bVar36 = !bVar36;
            }
        }
    } else {
        bVar36 = uVar1 < uVar1 - in_r0;
        if (!bVar5) {
            bVar36 = !bVar36;
        }
    }
    return (((((((((((((((((((((((((((((((u32)!bVar4 << 1 | (u32)!bVar6) << 1 | (u32)!bVar7) << 1 | (u32)!bVar8) << 1 |
                                      (u32)!bVar9)
                                         << 1 |
                                     (u32)!bVar10)
                                        << 1 |
                                    (u32)!bVar11)
                                       << 1 |
                                   (u32)!bVar12)
                                      << 1 |
                                  (u32)!bVar13)
                                     << 1 |
                                 (u32)!bVar14)
                                    << 1 |
                                (u32)!bVar15)
                                   << 1 |
                               (u32)!bVar16)
                                  << 1 |
                              (u32)!bVar17)
                                 << 1 |
                             (u32)!bVar18)
                                << 1 |
                            (u32)!bVar19)
                               << 1 |
                           (u32)!bVar20)
                              << 1 |
                          (u32)!bVar21)
                             << 1 |
                         (u32)!bVar22)
                            << 1 |
                        (u32)!bVar23)
                           << 1 |
                       (u32)!bVar24)
                          << 1 |
                      (u32)!bVar25)
                         << 1 |
                     (u32)!bVar26)
                        << 1 |
                    (u32)!bVar27)
                       << 1 |
                   (u32)!bVar28)
                      << 1 |
                  (u32)!bVar29)
                     << 1 |
                 (u32)!bVar30)
                    << 1 |
                (u32)!bVar31)
                   << 1 |
               (u32)!bVar32)
                  << 1 |
              (u32)!bVar33)
                 << 1 |
             (u32)!bVar34)
                << 1 |
            (u32)!bVar35)
               << 1 |
           (u32)!bVar36;
}

/*
 * libc_test_0105c4  0x8c0105c4
 * area name: in the libc library code range; behaviour name: returns the result of a comparison
 * called by: libc_uses_softfloat_scale_pow10_010b60
 */
int libc_test_0105c4(void) {
    u32 uVar1;
    short in_r0;
    int iVar2;
    u32 uVar3;
    short in_r1;
    u32 uVar4;
    bool bVar5;
    bool bVar6;
    bool bVar7;

    iVar2 = (int)in_r0;
    if (iVar2 == 0) {
        g_8c2787a8 = 0x44e;
        return 0;
    }
    uVar4 = (int)in_r1 - (u32)(((int)in_r1 & 0x80000000U) != 0);
    uVar3 = iVar2 * 0x10000;
    bVar6 = (uVar4 & 0x80000000) != 0;
    bVar5 = (uVar3 & 0x80000000) != 0;
    bVar7 = (uVar4 & 0x80000000) == 0;
    uVar4 = uVar4 * 2 | (u32)(bVar5 != bVar6);
    if (bVar6 || bVar5) {
        if (!bVar6 && bVar5) {
            uVar1 = uVar4 + uVar3;
            bVar6 = uVar1 < uVar4;
            if (bVar7) {
                bVar6 = !bVar6;
            }
        } else if (bVar6 && !bVar5) {
            uVar1 = uVar4 + uVar3;
            bVar6 = uVar1 < uVar4;
            if (!bVar7) {
                bVar6 = !bVar6;
            }
        } else {
            uVar1 = uVar4 + iVar2 * -0x10000;
            bVar6 = uVar4 < uVar1;
            if (bVar7) {
                bVar6 = !bVar6;
            }
        }
    } else {
        uVar1 = uVar4 + iVar2 * -0x10000;
        bVar6 = uVar4 < uVar1;
        if (!bVar7) {
            bVar6 = !bVar6;
        }
    }
    bVar7 = (uVar1 & 0x80000000) == 0;
    uVar4 = uVar1 << 1 | (u32)(bVar6 == bVar5);
    if (bVar6 == false && !bVar5) {
        uVar1 = uVar4 + iVar2 * -0x10000;
        bVar6 = uVar4 < uVar1;
        if (!bVar7) {
            bVar6 = !bVar6;
        }
    } else if (bVar6 == false && bVar5) {
        uVar1 = uVar4 + uVar3;
        bVar6 = uVar1 < uVar4;
        if (bVar7) {
            bVar6 = !bVar6;
        }
    } else if (bVar6 == true && !bVar5) {
        uVar1 = uVar4 + uVar3;
        bVar6 = uVar1 < uVar4;
        if (!bVar7) {
            bVar6 = !bVar6;
        }
    } else {
        uVar1 = uVar4 + iVar2 * -0x10000;
        bVar6 = uVar4 < uVar1;
        if (bVar7) {
            bVar6 = !bVar6;
        }
    }
    bVar7 = (uVar1 & 0x80000000) == 0;
    uVar4 = uVar1 << 1 | (u32)(bVar6 == bVar5);
    if (bVar6 == false && !bVar5) {
        uVar1 = uVar4 + iVar2 * -0x10000;
        bVar6 = uVar4 < uVar1;
        if (!bVar7) {
            bVar6 = !bVar6;
        }
    } else if (bVar6 == false && bVar5) {
        uVar1 = uVar4 + uVar3;
        bVar6 = uVar1 < uVar4;
        if (bVar7) {
            bVar6 = !bVar6;
        }
    } else if (bVar6 == true && !bVar5) {
        uVar1 = uVar4 + uVar3;
        bVar6 = uVar1 < uVar4;
        if (!bVar7) {
            bVar6 = !bVar6;
        }
    } else {
        uVar1 = uVar4 + iVar2 * -0x10000;
        bVar6 = uVar4 < uVar1;
        if (bVar7) {
            bVar6 = !bVar6;
        }
    }
    bVar7 = (uVar1 & 0x80000000) == 0;
    uVar4 = uVar1 << 1 | (u32)(bVar6 == bVar5);
    if (bVar6 == false && !bVar5) {
        uVar1 = uVar4 + iVar2 * -0x10000;
        bVar6 = uVar4 < uVar1;
        if (!bVar7) {
            bVar6 = !bVar6;
        }
    } else if (bVar6 == false && bVar5) {
        uVar1 = uVar4 + uVar3;
        bVar6 = uVar1 < uVar4;
        if (bVar7) {
            bVar6 = !bVar6;
        }
    } else if (bVar6 == true && !bVar5) {
        uVar1 = uVar4 + uVar3;
        bVar6 = uVar1 < uVar4;
        if (!bVar7) {
            bVar6 = !bVar6;
        }
    } else {
        uVar1 = uVar4 + iVar2 * -0x10000;
        bVar6 = uVar4 < uVar1;
        if (bVar7) {
            bVar6 = !bVar6;
        }
    }
    bVar7 = (uVar1 & 0x80000000) == 0;
    uVar4 = uVar1 << 1 | (u32)(bVar6 == bVar5);
    if (bVar6 == false && !bVar5) {
        uVar1 = uVar4 + iVar2 * -0x10000;
        bVar6 = uVar4 < uVar1;
        if (!bVar7) {
            bVar6 = !bVar6;
        }
    } else if (bVar6 == false && bVar5) {
        uVar1 = uVar4 + uVar3;
        bVar6 = uVar1 < uVar4;
        if (bVar7) {
            bVar6 = !bVar6;
        }
    } else if (bVar6 == true && !bVar5) {
        uVar1 = uVar4 + uVar3;
        bVar6 = uVar1 < uVar4;
        if (!bVar7) {
            bVar6 = !bVar6;
        }
    } else {
        uVar1 = uVar4 + iVar2 * -0x10000;
        bVar6 = uVar4 < uVar1;
        if (bVar7) {
            bVar6 = !bVar6;
        }
    }
    bVar7 = (uVar1 & 0x80000000) == 0;
    uVar4 = uVar1 << 1 | (u32)(bVar6 == bVar5);
    if (bVar6 == false && !bVar5) {
        uVar1 = uVar4 + iVar2 * -0x10000;
        bVar6 = uVar4 < uVar1;
        if (!bVar7) {
            bVar6 = !bVar6;
        }
    } else if (bVar6 == false && bVar5) {
        uVar1 = uVar4 + uVar3;
        bVar6 = uVar1 < uVar4;
        if (bVar7) {
            bVar6 = !bVar6;
        }
    } else if (bVar6 == true && !bVar5) {
        uVar1 = uVar4 + uVar3;
        bVar6 = uVar1 < uVar4;
        if (!bVar7) {
            bVar6 = !bVar6;
        }
    } else {
        uVar1 = uVar4 + iVar2 * -0x10000;
        bVar6 = uVar4 < uVar1;
        if (bVar7) {
            bVar6 = !bVar6;
        }
    }
    bVar7 = (uVar1 & 0x80000000) == 0;
    uVar4 = uVar1 << 1 | (u32)(bVar6 == bVar5);
    if (bVar6 == false && !bVar5) {
        uVar1 = uVar4 + iVar2 * -0x10000;
        bVar6 = uVar4 < uVar1;
        if (!bVar7) {
            bVar6 = !bVar6;
        }
    } else if (bVar6 == false && bVar5) {
        uVar1 = uVar4 + uVar3;
        bVar6 = uVar1 < uVar4;
        if (bVar7) {
            bVar6 = !bVar6;
        }
    } else if (bVar6 == true && !bVar5) {
        uVar1 = uVar4 + uVar3;
        bVar6 = uVar1 < uVar4;
        if (!bVar7) {
            bVar6 = !bVar6;
        }
    } else {
        uVar1 = uVar4 + iVar2 * -0x10000;
        bVar6 = uVar4 < uVar1;
        if (bVar7) {
            bVar6 = !bVar6;
        }
    }
    bVar7 = (uVar1 & 0x80000000) == 0;
    uVar4 = uVar1 << 1 | (u32)(bVar6 == bVar5);
    if (bVar6 == false && !bVar5) {
        uVar1 = uVar4 + iVar2 * -0x10000;
        bVar6 = uVar4 < uVar1;
        if (!bVar7) {
            bVar6 = !bVar6;
        }
    } else if (bVar6 == false && bVar5) {
        uVar1 = uVar4 + uVar3;
        bVar6 = uVar1 < uVar4;
        if (bVar7) {
            bVar6 = !bVar6;
        }
    } else if (bVar6 == true && !bVar5) {
        uVar1 = uVar4 + uVar3;
        bVar6 = uVar1 < uVar4;
        if (!bVar7) {
            bVar6 = !bVar6;
        }
    } else {
        uVar1 = uVar4 + iVar2 * -0x10000;
        bVar6 = uVar4 < uVar1;
        if (bVar7) {
            bVar6 = !bVar6;
        }
    }
    bVar7 = (uVar1 & 0x80000000) == 0;
    uVar4 = uVar1 << 1 | (u32)(bVar6 == bVar5);
    if (bVar6 == false && !bVar5) {
        uVar1 = uVar4 + iVar2 * -0x10000;
        bVar6 = uVar4 < uVar1;
        if (!bVar7) {
            bVar6 = !bVar6;
        }
    } else if (bVar6 == false && bVar5) {
        uVar1 = uVar4 + uVar3;
        bVar6 = uVar1 < uVar4;
        if (bVar7) {
            bVar6 = !bVar6;
        }
    } else if (bVar6 == true && !bVar5) {
        uVar1 = uVar4 + uVar3;
        bVar6 = uVar1 < uVar4;
        if (!bVar7) {
            bVar6 = !bVar6;
        }
    } else {
        uVar1 = uVar4 + iVar2 * -0x10000;
        bVar6 = uVar4 < uVar1;
        if (bVar7) {
            bVar6 = !bVar6;
        }
    }
    bVar7 = (uVar1 & 0x80000000) == 0;
    uVar4 = uVar1 << 1 | (u32)(bVar6 == bVar5);
    if (bVar6 == false && !bVar5) {
        uVar1 = uVar4 + iVar2 * -0x10000;
        bVar6 = uVar4 < uVar1;
        if (!bVar7) {
            bVar6 = !bVar6;
        }
    } else if (bVar6 == false && bVar5) {
        uVar1 = uVar4 + uVar3;
        bVar6 = uVar1 < uVar4;
        if (bVar7) {
            bVar6 = !bVar6;
        }
    } else if (bVar6 == true && !bVar5) {
        uVar1 = uVar4 + uVar3;
        bVar6 = uVar1 < uVar4;
        if (!bVar7) {
            bVar6 = !bVar6;
        }
    } else {
        uVar1 = uVar4 + iVar2 * -0x10000;
        bVar6 = uVar4 < uVar1;
        if (bVar7) {
            bVar6 = !bVar6;
        }
    }
    bVar7 = (uVar1 & 0x80000000) == 0;
    uVar4 = uVar1 << 1 | (u32)(bVar6 == bVar5);
    if (bVar6 == false && !bVar5) {
        uVar1 = uVar4 + iVar2 * -0x10000;
        bVar6 = uVar4 < uVar1;
        if (!bVar7) {
            bVar6 = !bVar6;
        }
    } else if (bVar6 == false && bVar5) {
        uVar1 = uVar4 + uVar3;
        bVar6 = uVar1 < uVar4;
        if (bVar7) {
            bVar6 = !bVar6;
        }
    } else if (bVar6 == true && !bVar5) {
        uVar1 = uVar4 + uVar3;
        bVar6 = uVar1 < uVar4;
        if (!bVar7) {
            bVar6 = !bVar6;
        }
    } else {
        uVar1 = uVar4 + iVar2 * -0x10000;
        bVar6 = uVar4 < uVar1;
        if (bVar7) {
            bVar6 = !bVar6;
        }
    }
    bVar7 = (uVar1 & 0x80000000) == 0;
    uVar4 = uVar1 << 1 | (u32)(bVar6 == bVar5);
    if (bVar6 == false && !bVar5) {
        uVar1 = uVar4 + iVar2 * -0x10000;
        bVar6 = uVar4 < uVar1;
        if (!bVar7) {
            bVar6 = !bVar6;
        }
    } else if (bVar6 == false && bVar5) {
        uVar1 = uVar4 + uVar3;
        bVar6 = uVar1 < uVar4;
        if (bVar7) {
            bVar6 = !bVar6;
        }
    } else if (bVar6 == true && !bVar5) {
        uVar1 = uVar4 + uVar3;
        bVar6 = uVar1 < uVar4;
        if (!bVar7) {
            bVar6 = !bVar6;
        }
    } else {
        uVar1 = uVar4 + iVar2 * -0x10000;
        bVar6 = uVar4 < uVar1;
        if (bVar7) {
            bVar6 = !bVar6;
        }
    }
    bVar7 = (uVar1 & 0x80000000) == 0;
    uVar4 = uVar1 << 1 | (u32)(bVar6 == bVar5);
    if (bVar6 == false && !bVar5) {
        uVar1 = uVar4 + iVar2 * -0x10000;
        bVar6 = uVar4 < uVar1;
        if (!bVar7) {
            bVar6 = !bVar6;
        }
    } else if (bVar6 == false && bVar5) {
        uVar1 = uVar4 + uVar3;
        bVar6 = uVar1 < uVar4;
        if (bVar7) {
            bVar6 = !bVar6;
        }
    } else if (bVar6 == true && !bVar5) {
        uVar1 = uVar4 + uVar3;
        bVar6 = uVar1 < uVar4;
        if (!bVar7) {
            bVar6 = !bVar6;
        }
    } else {
        uVar1 = uVar4 + iVar2 * -0x10000;
        bVar6 = uVar4 < uVar1;
        if (bVar7) {
            bVar6 = !bVar6;
        }
    }
    bVar7 = (uVar1 & 0x80000000) == 0;
    uVar4 = uVar1 << 1 | (u32)(bVar6 == bVar5);
    if (bVar6 == false && !bVar5) {
        uVar1 = uVar4 + iVar2 * -0x10000;
        bVar6 = uVar4 < uVar1;
        if (!bVar7) {
            bVar6 = !bVar6;
        }
    } else if (bVar6 == false && bVar5) {
        uVar1 = uVar4 + uVar3;
        bVar6 = uVar1 < uVar4;
        if (bVar7) {
            bVar6 = !bVar6;
        }
    } else if (bVar6 == true && !bVar5) {
        uVar1 = uVar4 + uVar3;
        bVar6 = uVar1 < uVar4;
        if (!bVar7) {
            bVar6 = !bVar6;
        }
    } else {
        uVar1 = uVar4 + iVar2 * -0x10000;
        bVar6 = uVar4 < uVar1;
        if (bVar7) {
            bVar6 = !bVar6;
        }
    }
    bVar7 = (uVar1 & 0x80000000) == 0;
    uVar4 = uVar1 << 1 | (u32)(bVar6 == bVar5);
    if (bVar6 == false && !bVar5) {
        uVar1 = uVar4 + iVar2 * -0x10000;
        bVar6 = uVar4 < uVar1;
        if (!bVar7) {
            bVar6 = !bVar6;
        }
    } else if (bVar6 == false && bVar5) {
        uVar1 = uVar4 + uVar3;
        bVar6 = uVar1 < uVar4;
        if (bVar7) {
            bVar6 = !bVar6;
        }
    } else if (bVar6 == true && !bVar5) {
        uVar1 = uVar4 + uVar3;
        bVar6 = uVar1 < uVar4;
        if (!bVar7) {
            bVar6 = !bVar6;
        }
    } else {
        uVar1 = uVar4 + iVar2 * -0x10000;
        bVar6 = uVar4 < uVar1;
        if (bVar7) {
            bVar6 = !bVar6;
        }
    }
    bVar7 = (uVar1 & 0x80000000) == 0;
    uVar4 = uVar1 << 1 | (u32)(bVar6 == bVar5);
    if (bVar6 == false && !bVar5) {
        uVar3 = uVar4 + iVar2 * -0x10000;
        bVar6 = uVar4 < uVar3;
        if (!bVar7) {
            bVar6 = !bVar6;
        }
    } else if (bVar6 == false && bVar5) {
        uVar3 = uVar4 + uVar3;
        bVar6 = uVar3 < uVar4;
        if (bVar7) {
            bVar6 = !bVar6;
        }
    } else if (bVar6 == true && !bVar5) {
        uVar3 = uVar4 + uVar3;
        bVar6 = uVar3 < uVar4;
        if (!bVar7) {
            bVar6 = !bVar6;
        }
    } else {
        uVar3 = uVar4 + iVar2 * -0x10000;
        bVar6 = uVar4 < uVar3;
        if (bVar7) {
            bVar6 = !bVar6;
        }
    }
    return ((int)(short)uVar3 << 1 | (u32)(bVar6 == bVar5)) + (u32)(((int)(short)uVar3 & 0x80000000U) != 0);
}

/*
 * libgcc_divide_helper_010614  0x8c010614
 * called by: ADXT_uses_libgcc_divide_helper_2647f4, alt_entry_200c08, cri_uses_libgcc_divide_helper_260062,
 * cri_uses_libgcc_divide_helper_260198, date_to_bcd8, day_of_week, game_sound_26b132,
 * game_uses_libgcc_divide_helper_26b64e (+14 more)
 */
int libgcc_divide_helper_010614(u32 unused_a0, u32 a1) {
    u32 uVar1;
    u32 in_r0;
    u32 in_r1;
    u32 uVar2;
    u32 uVar3;
    bool bVar4;
    bool bVar5;
    bool bVar6;
    bool bVar7;

    if (in_r0 == 0) {
        g_8c2787a8 = 0x44e;
        return 0;
    }
    bVar5 = (in_r1 & 0x80000000) != 0;
    uVar3 = (u32)bVar5;
    uVar2 = in_r1 - (uVar3 != 0);
    bVar6 = (-uVar3 & 0x80000000) != 0;
    bVar4 = (in_r0 & 0x80000000) != 0;
    bVar7 = (-uVar3 & 0x80000000) == 0;
    uVar3 = uVar3 * -2 | (u32)((uVar2 & 0x80000000) != 0);
    if (bVar6 || bVar4) {
        if (!bVar6 && bVar4) {
            uVar1 = uVar3 + in_r0;
            bVar6 = uVar1 < uVar3;
            if (bVar7) {
                bVar6 = !bVar6;
            }
        } else if (bVar6 && !bVar4) {
            uVar1 = uVar3 + in_r0;
            bVar6 = uVar1 < uVar3;
            if (!bVar7) {
                bVar6 = !bVar6;
            }
        } else {
            uVar1 = uVar3 - in_r0;
            bVar6 = uVar3 < uVar1;
            if (bVar7) {
                bVar6 = !bVar6;
            }
        }
    } else {
        uVar1 = uVar3 - in_r0;
        bVar6 = uVar3 < uVar1;
        if (!bVar7) {
            bVar6 = !bVar6;
        }
    }
    bVar7 = (uVar1 & 0x80000000) == 0;
    uVar3 = uVar1 << 1 | (u32)((uVar2 * 2 & 0x80000000) != 0);
    if (bVar6 || bVar4) {
        if (!bVar6 && bVar4) {
            uVar1 = uVar3 + in_r0;
            bVar6 = uVar1 < uVar3;
            if (bVar7) {
                bVar6 = !bVar6;
            }
        } else if (bVar6 && !bVar4) {
            uVar1 = uVar3 + in_r0;
            bVar6 = uVar1 < uVar3;
            if (!bVar7) {
                bVar6 = !bVar6;
            }
        } else {
            uVar1 = uVar3 - in_r0;
            bVar6 = uVar3 < uVar1;
            if (bVar7) {
                bVar6 = !bVar6;
            }
        }
    } else {
        uVar1 = uVar3 - in_r0;
        bVar6 = uVar3 < uVar1;
        if (!bVar7) {
            bVar6 = !bVar6;
        }
    }
    bVar7 = (uVar1 & 0x80000000) == 0;
    uVar3 = uVar1 << 1 | (u32)((uVar2 * 4 & 0x80000000) != 0);
    if (bVar6 || bVar4) {
        if (!bVar6 && bVar4) {
            uVar1 = uVar3 + in_r0;
            bVar6 = uVar1 < uVar3;
            if (bVar7) {
                bVar6 = !bVar6;
            }
        } else if (bVar6 && !bVar4) {
            uVar1 = uVar3 + in_r0;
            bVar6 = uVar1 < uVar3;
            if (!bVar7) {
                bVar6 = !bVar6;
            }
        } else {
            uVar1 = uVar3 - in_r0;
            bVar6 = uVar3 < uVar1;
            if (bVar7) {
                bVar6 = !bVar6;
            }
        }
    } else {
        uVar1 = uVar3 - in_r0;
        bVar6 = uVar3 < uVar1;
        if (!bVar7) {
            bVar6 = !bVar6;
        }
    }
    bVar7 = (uVar1 & 0x80000000) == 0;
    uVar3 = uVar1 << 1 | (u32)((uVar2 * 8 & 0x80000000) != 0);
    if (bVar6 || bVar4) {
        if (!bVar6 && bVar4) {
            uVar1 = uVar3 + in_r0;
            bVar6 = uVar1 < uVar3;
            if (bVar7) {
                bVar6 = !bVar6;
            }
        } else if (bVar6 && !bVar4) {
            uVar1 = uVar3 + in_r0;
            bVar6 = uVar1 < uVar3;
            if (!bVar7) {
                bVar6 = !bVar6;
            }
        } else {
            uVar1 = uVar3 - in_r0;
            bVar6 = uVar3 < uVar1;
            if (bVar7) {
                bVar6 = !bVar6;
            }
        }
    } else {
        uVar1 = uVar3 - in_r0;
        bVar6 = uVar3 < uVar1;
        if (!bVar7) {
            bVar6 = !bVar6;
        }
    }
    bVar7 = (uVar1 & 0x80000000) == 0;
    uVar3 = uVar1 << 1 | (u32)((uVar2 * 0x10 & 0x80000000) != 0);
    if (bVar6 || bVar4) {
        if (!bVar6 && bVar4) {
            uVar1 = uVar3 + in_r0;
            bVar6 = uVar1 < uVar3;
            if (bVar7) {
                bVar6 = !bVar6;
            }
        } else if (bVar6 && !bVar4) {
            uVar1 = uVar3 + in_r0;
            bVar6 = uVar1 < uVar3;
            if (!bVar7) {
                bVar6 = !bVar6;
            }
        } else {
            uVar1 = uVar3 - in_r0;
            bVar6 = uVar3 < uVar1;
            if (bVar7) {
                bVar6 = !bVar6;
            }
        }
    } else {
        uVar1 = uVar3 - in_r0;
        bVar6 = uVar3 < uVar1;
        if (!bVar7) {
            bVar6 = !bVar6;
        }
    }
    bVar7 = (uVar1 & 0x80000000) == 0;
    uVar3 = uVar1 << 1 | (u32)((uVar2 * 0x20 & 0x80000000) != 0);
    if (bVar6 || bVar4) {
        if (!bVar6 && bVar4) {
            uVar1 = uVar3 + in_r0;
            bVar6 = uVar1 < uVar3;
            if (bVar7) {
                bVar6 = !bVar6;
            }
        } else if (bVar6 && !bVar4) {
            uVar1 = uVar3 + in_r0;
            bVar6 = uVar1 < uVar3;
            if (!bVar7) {
                bVar6 = !bVar6;
            }
        } else {
            uVar1 = uVar3 - in_r0;
            bVar6 = uVar3 < uVar1;
            if (bVar7) {
                bVar6 = !bVar6;
            }
        }
    } else {
        uVar1 = uVar3 - in_r0;
        bVar6 = uVar3 < uVar1;
        if (!bVar7) {
            bVar6 = !bVar6;
        }
    }
    bVar7 = (uVar1 & 0x80000000) == 0;
    uVar3 = uVar1 << 1 | (u32)((uVar2 * 0x40 & 0x80000000) != 0);
    if (bVar6 || bVar4) {
        if (!bVar6 && bVar4) {
            uVar1 = uVar3 + in_r0;
            bVar6 = uVar1 < uVar3;
            if (bVar7) {
                bVar6 = !bVar6;
            }
        } else if (bVar6 && !bVar4) {
            uVar1 = uVar3 + in_r0;
            bVar6 = uVar1 < uVar3;
            if (!bVar7) {
                bVar6 = !bVar6;
            }
        } else {
            uVar1 = uVar3 - in_r0;
            bVar6 = uVar3 < uVar1;
            if (bVar7) {
                bVar6 = !bVar6;
            }
        }
    } else {
        uVar1 = uVar3 - in_r0;
        bVar6 = uVar3 < uVar1;
        if (!bVar7) {
            bVar6 = !bVar6;
        }
    }
    bVar7 = (uVar1 & 0x80000000) == 0;
    uVar3 = uVar1 << 1 | (u32)((uVar2 * 0x80 & 0x80000000) != 0);
    if (bVar6 || bVar4) {
        if (!bVar6 && bVar4) {
            uVar1 = uVar3 + in_r0;
            bVar6 = uVar1 < uVar3;
            if (bVar7) {
                bVar6 = !bVar6;
            }
        } else if (bVar6 && !bVar4) {
            uVar1 = uVar3 + in_r0;
            bVar6 = uVar1 < uVar3;
            if (!bVar7) {
                bVar6 = !bVar6;
            }
        } else {
            uVar1 = uVar3 - in_r0;
            bVar6 = uVar3 < uVar1;
            if (bVar7) {
                bVar6 = !bVar6;
            }
        }
    } else {
        uVar1 = uVar3 - in_r0;
        bVar6 = uVar3 < uVar1;
        if (!bVar7) {
            bVar6 = !bVar6;
        }
    }
    bVar7 = (uVar1 & 0x80000000) == 0;
    uVar3 = uVar1 << 1 | (u32)((uVar2 * 0x100 & 0x80000000) != 0);
    if (bVar6 || bVar4) {
        if (!bVar6 && bVar4) {
            uVar1 = uVar3 + in_r0;
            bVar6 = uVar1 < uVar3;
            if (bVar7) {
                bVar6 = !bVar6;
            }
        } else if (bVar6 && !bVar4) {
            uVar1 = uVar3 + in_r0;
            bVar6 = uVar1 < uVar3;
            if (!bVar7) {
                bVar6 = !bVar6;
            }
        } else {
            uVar1 = uVar3 - in_r0;
            bVar6 = uVar3 < uVar1;
            if (bVar7) {
                bVar6 = !bVar6;
            }
        }
    } else {
        uVar1 = uVar3 - in_r0;
        bVar6 = uVar3 < uVar1;
        if (!bVar7) {
            bVar6 = !bVar6;
        }
    }
    bVar7 = (uVar1 & 0x80000000) == 0;
    uVar3 = uVar1 << 1 | (u32)((uVar2 * 0x200 & 0x80000000) != 0);
    if (bVar6 || bVar4) {
        if (!bVar6 && bVar4) {
            uVar1 = uVar3 + in_r0;
            bVar6 = uVar1 < uVar3;
            if (bVar7) {
                bVar6 = !bVar6;
            }
        } else if (bVar6 && !bVar4) {
            uVar1 = uVar3 + in_r0;
            bVar6 = uVar1 < uVar3;
            if (!bVar7) {
                bVar6 = !bVar6;
            }
        } else {
            uVar1 = uVar3 - in_r0;
            bVar6 = uVar3 < uVar1;
            if (bVar7) {
                bVar6 = !bVar6;
            }
        }
    } else {
        uVar1 = uVar3 - in_r0;
        bVar6 = uVar3 < uVar1;
        if (!bVar7) {
            bVar6 = !bVar6;
        }
    }
    bVar7 = (uVar1 & 0x80000000) == 0;
    uVar3 = uVar1 << 1 | (u32)((uVar2 * 0x400 & 0x80000000) != 0);
    if (bVar6 || bVar4) {
        if (!bVar6 && bVar4) {
            uVar1 = uVar3 + in_r0;
            bVar6 = uVar1 < uVar3;
            if (bVar7) {
                bVar6 = !bVar6;
            }
        } else if (bVar6 && !bVar4) {
            uVar1 = uVar3 + in_r0;
            bVar6 = uVar1 < uVar3;
            if (!bVar7) {
                bVar6 = !bVar6;
            }
        } else {
            uVar1 = uVar3 - in_r0;
            bVar6 = uVar3 < uVar1;
            if (bVar7) {
                bVar6 = !bVar6;
            }
        }
    } else {
        uVar1 = uVar3 - in_r0;
        bVar6 = uVar3 < uVar1;
        if (!bVar7) {
            bVar6 = !bVar6;
        }
    }
    bVar7 = (uVar1 & 0x80000000) == 0;
    uVar3 = uVar1 << 1 | (u32)((uVar2 * 0x800 & 0x80000000) != 0);
    if (bVar6 || bVar4) {
        if (!bVar6 && bVar4) {
            uVar1 = uVar3 + in_r0;
            bVar6 = uVar1 < uVar3;
            if (bVar7) {
                bVar6 = !bVar6;
            }
        } else if (bVar6 && !bVar4) {
            uVar1 = uVar3 + in_r0;
            bVar6 = uVar1 < uVar3;
            if (!bVar7) {
                bVar6 = !bVar6;
            }
        } else {
            uVar1 = uVar3 - in_r0;
            bVar6 = uVar3 < uVar1;
            if (bVar7) {
                bVar6 = !bVar6;
            }
        }
    } else {
        uVar1 = uVar3 - in_r0;
        bVar6 = uVar3 < uVar1;
        if (!bVar7) {
            bVar6 = !bVar6;
        }
    }
    bVar7 = (uVar1 & 0x80000000) == 0;
    uVar3 = uVar1 << 1 | (u32)((uVar2 * 0x1000 & 0x80000000) != 0);
    if (bVar6 || bVar4) {
        if (!bVar6 && bVar4) {
            uVar1 = uVar3 + in_r0;
            bVar6 = uVar1 < uVar3;
            if (bVar7) {
                bVar6 = !bVar6;
            }
        } else if (bVar6 && !bVar4) {
            uVar1 = uVar3 + in_r0;
            bVar6 = uVar1 < uVar3;
            if (!bVar7) {
                bVar6 = !bVar6;
            }
        } else {
            uVar1 = uVar3 - in_r0;
            bVar6 = uVar3 < uVar1;
            if (bVar7) {
                bVar6 = !bVar6;
            }
        }
    } else {
        uVar1 = uVar3 - in_r0;
        bVar6 = uVar3 < uVar1;
        if (!bVar7) {
            bVar6 = !bVar6;
        }
    }
    bVar7 = (uVar1 & 0x80000000) == 0;
    uVar3 = uVar1 << 1 | (u32)((uVar2 * 0x2000 & 0x80000000) != 0);
    if (bVar6 || bVar4) {
        if (!bVar6 && bVar4) {
            uVar1 = uVar3 + in_r0;
            bVar6 = uVar1 < uVar3;
            if (bVar7) {
                bVar6 = !bVar6;
            }
        } else if (bVar6 && !bVar4) {
            uVar1 = uVar3 + in_r0;
            bVar6 = uVar1 < uVar3;
            if (!bVar7) {
                bVar6 = !bVar6;
            }
        } else {
            uVar1 = uVar3 - in_r0;
            bVar6 = uVar3 < uVar1;
            if (bVar7) {
                bVar6 = !bVar6;
            }
        }
    } else {
        uVar1 = uVar3 - in_r0;
        bVar6 = uVar3 < uVar1;
        if (!bVar7) {
            bVar6 = !bVar6;
        }
    }
    bVar7 = (uVar1 & 0x80000000) == 0;
    uVar3 = uVar1 << 1 | (u32)((uVar2 * 0x4000 & 0x80000000) != 0);
    if (bVar6 || bVar4) {
        if (!bVar6 && bVar4) {
            uVar1 = uVar3 + in_r0;
            bVar6 = uVar1 < uVar3;
            if (bVar7) {
                bVar6 = !bVar6;
            }
        } else if (bVar6 && !bVar4) {
            uVar1 = uVar3 + in_r0;
            bVar6 = uVar1 < uVar3;
            if (!bVar7) {
                bVar6 = !bVar6;
            }
        } else {
            uVar1 = uVar3 - in_r0;
            bVar6 = uVar3 < uVar1;
            if (bVar7) {
                bVar6 = !bVar6;
            }
        }
    } else {
        uVar1 = uVar3 - in_r0;
        bVar6 = uVar3 < uVar1;
        if (!bVar7) {
            bVar6 = !bVar6;
        }
    }
    bVar7 = (uVar1 & 0x80000000) == 0;
    uVar3 = uVar1 << 1 | (u32)((uVar2 * 0x8000 & 0x80000000) != 0);
    if (bVar6 || bVar4) {
        if (!bVar6 && bVar4) {
            uVar1 = uVar3 + in_r0;
            bVar6 = uVar1 < uVar3;
            if (bVar7) {
                bVar6 = !bVar6;
            }
        } else if (bVar6 && !bVar4) {
            uVar1 = uVar3 + in_r0;
            bVar6 = uVar1 < uVar3;
            if (!bVar7) {
                bVar6 = !bVar6;
            }
        } else {
            uVar1 = uVar3 - in_r0;
            bVar6 = uVar3 < uVar1;
            if (bVar7) {
                bVar6 = !bVar6;
            }
        }
    } else {
        uVar1 = uVar3 - in_r0;
        bVar6 = uVar3 < uVar1;
        if (!bVar7) {
            bVar6 = !bVar6;
        }
    }
    bVar7 = (uVar1 & 0x80000000) == 0;
    uVar3 = uVar1 << 1 | (u32)((uVar2 * 0x10000 & 0x80000000) != 0);
    if (bVar6 || bVar4) {
        if (!bVar6 && bVar4) {
            uVar1 = uVar3 + in_r0;
            bVar6 = uVar1 < uVar3;
            if (bVar7) {
                bVar6 = !bVar6;
            }
        } else if (bVar6 && !bVar4) {
            uVar1 = uVar3 + in_r0;
            bVar6 = uVar1 < uVar3;
            if (!bVar7) {
                bVar6 = !bVar6;
            }
        } else {
            uVar1 = uVar3 - in_r0;
            bVar6 = uVar3 < uVar1;
            if (bVar7) {
                bVar6 = !bVar6;
            }
        }
    } else {
        uVar1 = uVar3 - in_r0;
        bVar6 = uVar3 < uVar1;
        if (!bVar7) {
            bVar6 = !bVar6;
        }
    }
    bVar7 = (uVar1 & 0x80000000) == 0;
    uVar3 = uVar1 << 1 | (u32)((uVar2 * 0x20000 & 0x80000000) != 0);
    if (bVar6 || bVar4) {
        if (!bVar6 && bVar4) {
            uVar1 = uVar3 + in_r0;
            bVar6 = uVar1 < uVar3;
            if (bVar7) {
                bVar6 = !bVar6;
            }
        } else if (bVar6 && !bVar4) {
            uVar1 = uVar3 + in_r0;
            bVar6 = uVar1 < uVar3;
            if (!bVar7) {
                bVar6 = !bVar6;
            }
        } else {
            uVar1 = uVar3 - in_r0;
            bVar6 = uVar3 < uVar1;
            if (bVar7) {
                bVar6 = !bVar6;
            }
        }
    } else {
        uVar1 = uVar3 - in_r0;
        bVar6 = uVar3 < uVar1;
        if (!bVar7) {
            bVar6 = !bVar6;
        }
    }
    bVar7 = (uVar1 & 0x80000000) == 0;
    uVar3 = uVar1 << 1 | (u32)((uVar2 * 0x40000 & 0x80000000) != 0);
    if (bVar6 || bVar4) {
        if (!bVar6 && bVar4) {
            uVar1 = uVar3 + in_r0;
            bVar6 = uVar1 < uVar3;
            if (bVar7) {
                bVar6 = !bVar6;
            }
        } else if (bVar6 && !bVar4) {
            uVar1 = uVar3 + in_r0;
            bVar6 = uVar1 < uVar3;
            if (!bVar7) {
                bVar6 = !bVar6;
            }
        } else {
            uVar1 = uVar3 - in_r0;
            bVar6 = uVar3 < uVar1;
            if (bVar7) {
                bVar6 = !bVar6;
            }
        }
    } else {
        uVar1 = uVar3 - in_r0;
        bVar6 = uVar3 < uVar1;
        if (!bVar7) {
            bVar6 = !bVar6;
        }
    }
    bVar7 = (uVar1 & 0x80000000) == 0;
    uVar3 = uVar1 << 1 | (u32)((uVar2 * 0x80000 & 0x80000000) != 0);
    if (bVar6 || bVar4) {
        if (!bVar6 && bVar4) {
            uVar1 = uVar3 + in_r0;
            bVar6 = uVar1 < uVar3;
            if (bVar7) {
                bVar6 = !bVar6;
            }
        } else if (bVar6 && !bVar4) {
            uVar1 = uVar3 + in_r0;
            bVar6 = uVar1 < uVar3;
            if (!bVar7) {
                bVar6 = !bVar6;
            }
        } else {
            uVar1 = uVar3 - in_r0;
            bVar6 = uVar3 < uVar1;
            if (bVar7) {
                bVar6 = !bVar6;
            }
        }
    } else {
        uVar1 = uVar3 - in_r0;
        bVar6 = uVar3 < uVar1;
        if (!bVar7) {
            bVar6 = !bVar6;
        }
    }
    bVar7 = (uVar1 & 0x80000000) == 0;
    uVar3 = uVar1 << 1 | (u32)((uVar2 * 0x100000 & 0x80000000) != 0);
    if (bVar6 || bVar4) {
        if (!bVar6 && bVar4) {
            uVar1 = uVar3 + in_r0;
            bVar6 = uVar1 < uVar3;
            if (bVar7) {
                bVar6 = !bVar6;
            }
        } else if (bVar6 && !bVar4) {
            uVar1 = uVar3 + in_r0;
            bVar6 = uVar1 < uVar3;
            if (!bVar7) {
                bVar6 = !bVar6;
            }
        } else {
            uVar1 = uVar3 - in_r0;
            bVar6 = uVar3 < uVar1;
            if (bVar7) {
                bVar6 = !bVar6;
            }
        }
    } else {
        uVar1 = uVar3 - in_r0;
        bVar6 = uVar3 < uVar1;
        if (!bVar7) {
            bVar6 = !bVar6;
        }
    }
    bVar7 = (uVar1 & 0x80000000) == 0;
    uVar3 = uVar1 << 1 | (u32)((uVar2 * 0x200000 & 0x80000000) != 0);
    if (bVar6 || bVar4) {
        if (!bVar6 && bVar4) {
            uVar1 = uVar3 + in_r0;
            bVar6 = uVar1 < uVar3;
            if (bVar7) {
                bVar6 = !bVar6;
            }
        } else if (bVar6 && !bVar4) {
            uVar1 = uVar3 + in_r0;
            bVar6 = uVar1 < uVar3;
            if (!bVar7) {
                bVar6 = !bVar6;
            }
        } else {
            uVar1 = uVar3 - in_r0;
            bVar6 = uVar3 < uVar1;
            if (bVar7) {
                bVar6 = !bVar6;
            }
        }
    } else {
        uVar1 = uVar3 - in_r0;
        bVar6 = uVar3 < uVar1;
        if (!bVar7) {
            bVar6 = !bVar6;
        }
    }
    bVar7 = (uVar1 & 0x80000000) == 0;
    uVar3 = uVar1 << 1 | (u32)((uVar2 * 0x400000 & 0x80000000) != 0);
    if (bVar6 || bVar4) {
        if (!bVar6 && bVar4) {
            uVar1 = uVar3 + in_r0;
            bVar6 = uVar1 < uVar3;
            if (bVar7) {
                bVar6 = !bVar6;
            }
        } else if (bVar6 && !bVar4) {
            uVar1 = uVar3 + in_r0;
            bVar6 = uVar1 < uVar3;
            if (!bVar7) {
                bVar6 = !bVar6;
            }
        } else {
            uVar1 = uVar3 - in_r0;
            bVar6 = uVar3 < uVar1;
            if (bVar7) {
                bVar6 = !bVar6;
            }
        }
    } else {
        uVar1 = uVar3 - in_r0;
        bVar6 = uVar3 < uVar1;
        if (!bVar7) {
            bVar6 = !bVar6;
        }
    }
    bVar7 = (uVar1 & 0x80000000) == 0;
    uVar3 = uVar1 << 1 | (u32)((uVar2 * 0x800000 & 0x80000000) != 0);
    if (bVar6 || bVar4) {
        if (!bVar6 && bVar4) {
            uVar1 = uVar3 + in_r0;
            bVar6 = uVar1 < uVar3;
            if (bVar7) {
                bVar6 = !bVar6;
            }
        } else if (bVar6 && !bVar4) {
            uVar1 = uVar3 + in_r0;
            bVar6 = uVar1 < uVar3;
            if (!bVar7) {
                bVar6 = !bVar6;
            }
        } else {
            uVar1 = uVar3 - in_r0;
            bVar6 = uVar3 < uVar1;
            if (bVar7) {
                bVar6 = !bVar6;
            }
        }
    } else {
        uVar1 = uVar3 - in_r0;
        bVar6 = uVar3 < uVar1;
        if (!bVar7) {
            bVar6 = !bVar6;
        }
    }
    bVar7 = (uVar1 & 0x80000000) == 0;
    uVar3 = uVar1 << 1 | (u32)((uVar2 * 0x1000000 & 0x80000000) != 0);
    if (bVar6 || bVar4) {
        if (!bVar6 && bVar4) {
            uVar1 = uVar3 + in_r0;
            bVar6 = uVar1 < uVar3;
            if (bVar7) {
                bVar6 = !bVar6;
            }
        } else if (bVar6 && !bVar4) {
            uVar1 = uVar3 + in_r0;
            bVar6 = uVar1 < uVar3;
            if (!bVar7) {
                bVar6 = !bVar6;
            }
        } else {
            uVar1 = uVar3 - in_r0;
            bVar6 = uVar3 < uVar1;
            if (bVar7) {
                bVar6 = !bVar6;
            }
        }
    } else {
        uVar1 = uVar3 - in_r0;
        bVar6 = uVar3 < uVar1;
        if (!bVar7) {
            bVar6 = !bVar6;
        }
    }
    bVar7 = (uVar1 & 0x80000000) == 0;
    uVar3 = uVar1 << 1 | (u32)((uVar2 * 0x2000000 & 0x80000000) != 0);
    if (bVar6 || bVar4) {
        if (!bVar6 && bVar4) {
            uVar1 = uVar3 + in_r0;
            bVar6 = uVar1 < uVar3;
            if (bVar7) {
                bVar6 = !bVar6;
            }
        } else if (bVar6 && !bVar4) {
            uVar1 = uVar3 + in_r0;
            bVar6 = uVar1 < uVar3;
            if (!bVar7) {
                bVar6 = !bVar6;
            }
        } else {
            uVar1 = uVar3 - in_r0;
            bVar6 = uVar3 < uVar1;
            if (bVar7) {
                bVar6 = !bVar6;
            }
        }
    } else {
        uVar1 = uVar3 - in_r0;
        bVar6 = uVar3 < uVar1;
        if (!bVar7) {
            bVar6 = !bVar6;
        }
    }
    bVar7 = (uVar1 & 0x80000000) == 0;
    uVar3 = uVar1 << 1 | (u32)((uVar2 * 0x4000000 & 0x80000000) != 0);
    if (bVar6 || bVar4) {
        if (!bVar6 && bVar4) {
            uVar1 = uVar3 + in_r0;
            bVar6 = uVar1 < uVar3;
            if (bVar7) {
                bVar6 = !bVar6;
            }
        } else if (bVar6 && !bVar4) {
            uVar1 = uVar3 + in_r0;
            bVar6 = uVar1 < uVar3;
            if (!bVar7) {
                bVar6 = !bVar6;
            }
        } else {
            uVar1 = uVar3 - in_r0;
            bVar6 = uVar3 < uVar1;
            if (bVar7) {
                bVar6 = !bVar6;
            }
        }
    } else {
        uVar1 = uVar3 - in_r0;
        bVar6 = uVar3 < uVar1;
        if (!bVar7) {
            bVar6 = !bVar6;
        }
    }
    bVar7 = (uVar1 & 0x80000000) == 0;
    uVar3 = uVar1 << 1 | (u32)((uVar2 * 0x8000000 & 0x80000000) != 0);
    if (bVar6 || bVar4) {
        if (!bVar6 && bVar4) {
            uVar1 = uVar3 + in_r0;
            bVar6 = uVar1 < uVar3;
            if (bVar7) {
                bVar6 = !bVar6;
            }
        } else if (bVar6 && !bVar4) {
            uVar1 = uVar3 + in_r0;
            bVar6 = uVar1 < uVar3;
            if (!bVar7) {
                bVar6 = !bVar6;
            }
        } else {
            uVar1 = uVar3 - in_r0;
            bVar6 = uVar3 < uVar1;
            if (bVar7) {
                bVar6 = !bVar6;
            }
        }
    } else {
        uVar1 = uVar3 - in_r0;
        bVar6 = uVar3 < uVar1;
        if (!bVar7) {
            bVar6 = !bVar6;
        }
    }
    bVar7 = (uVar1 & 0x80000000) == 0;
    uVar3 = uVar1 << 1 | (u32)((uVar2 * 0x10000000 & 0x80000000) != 0);
    if (bVar6 || bVar4) {
        if (!bVar6 && bVar4) {
            uVar1 = uVar3 + in_r0;
            bVar6 = uVar1 < uVar3;
            if (bVar7) {
                bVar6 = !bVar6;
            }
        } else if (bVar6 && !bVar4) {
            uVar1 = uVar3 + in_r0;
            bVar6 = uVar1 < uVar3;
            if (!bVar7) {
                bVar6 = !bVar6;
            }
        } else {
            uVar1 = uVar3 - in_r0;
            bVar6 = uVar3 < uVar1;
            if (bVar7) {
                bVar6 = !bVar6;
            }
        }
    } else {
        uVar1 = uVar3 - in_r0;
        bVar6 = uVar3 < uVar1;
        if (!bVar7) {
            bVar6 = !bVar6;
        }
    }
    bVar7 = (uVar1 & 0x80000000) == 0;
    uVar3 = uVar1 << 1 | (u32)((uVar2 * 0x20000000 & 0x80000000) != 0);
    if (bVar6 || bVar4) {
        if (!bVar6 && bVar4) {
            uVar1 = uVar3 + in_r0;
            bVar6 = uVar1 < uVar3;
            if (bVar7) {
                bVar6 = !bVar6;
            }
        } else if (bVar6 && !bVar4) {
            uVar1 = uVar3 + in_r0;
            bVar6 = uVar1 < uVar3;
            if (!bVar7) {
                bVar6 = !bVar6;
            }
        } else {
            uVar1 = uVar3 - in_r0;
            bVar6 = uVar3 < uVar1;
            if (bVar7) {
                bVar6 = !bVar6;
            }
        }
    } else {
        uVar1 = uVar3 - in_r0;
        bVar6 = uVar3 < uVar1;
        if (!bVar7) {
            bVar6 = !bVar6;
        }
    }
    bVar7 = (uVar1 & 0x80000000) == 0;
    uVar3 = uVar1 << 1 | (u32)((uVar2 * 0x40000000 & 0x80000000) != 0);
    if (bVar6 || bVar4) {
        if (!bVar6 && bVar4) {
            uVar1 = uVar3 + in_r0;
            bVar6 = uVar1 < uVar3;
            if (bVar7) {
                bVar6 = !bVar6;
            }
        } else if (bVar6 && !bVar4) {
            uVar1 = uVar3 + in_r0;
            bVar6 = uVar1 < uVar3;
            if (!bVar7) {
                bVar6 = !bVar6;
            }
        } else {
            uVar1 = uVar3 - in_r0;
            bVar6 = uVar3 < uVar1;
            if (bVar7) {
                bVar6 = !bVar6;
            }
        }
    } else {
        uVar1 = uVar3 - in_r0;
        bVar6 = uVar3 < uVar1;
        if (!bVar7) {
            bVar6 = !bVar6;
        }
    }
    uVar3 = uVar1 << 1 | (u32)((uVar2 & 1) != 0);
    if (bVar6 || bVar4) {
        if (!bVar6 && bVar4) {
            uVar3 = uVar3 + in_r0;
        } else if (bVar6 && !bVar4) {
            uVar3 = uVar3 + in_r0;
        } else {
            uVar3 = uVar3 - in_r0;
        }
    } else {
        uVar3 = uVar3 - in_r0;
    }
    if (((uVar3 & 0x80000000) != 0) != bVar5) {
        bVar6 = (uVar3 & 0x80000000) != 0;
        bVar4 = (in_r0 & 0x80000000) != 0;
        uVar3 = ((int)uVar3 >> 1) << 1 | (u32)((uVar3 & 1) != 0);
        if (bVar6 || bVar4) {
            if (!bVar6 && bVar4) {
                uVar3 = uVar3 + in_r0;
            } else if (bVar6 && !bVar4) {
                uVar3 = uVar3 + in_r0;
            } else {
                uVar3 = uVar3 - in_r0;
            }
        } else {
            uVar3 = uVar3 - in_r0;
        }
    }
    return uVar3 + bVar5;
}

/*
 * libgcc_divide_helper_0106dc  0x8c0106dc
 * called by: array44_index_of, asr_uses_mring_read_advance_10e818, gfxlib_uses_libgcc_divide_helper_21c47c,
 * gfxlib_uses_libgcc_divide_helper_21c5ca, gfxlib_uses_libgcc_divide_helper_21c774,
 * gfxlib_uses_libgcc_divide_helper_21caa0, gfxlib_uses_libgcc_divide_helper_21d3e8,
 * gfxlib_uses_libgcc_divide_helper_22123c (+22 more)
 */
u32 libgcc_divide_helper_0106dc(u32 a0, u32 a1) {
    u32 uVar1;
    u32 uVar2;
    u32 uVar3;
    int in_r0;
    u32 in_r1;
    bool bVar4;
    bool bVar5;

    if (in_r0 == 0) {
        g_8c2787a8 = 0x44e;
        return 0;
    }
    uVar3 = (u32)((in_r1 & 0x80000000) != 0);
    uVar1 = uVar3 - in_r0;
    bVar4 = (uVar1 & 0x80000000) == 0;
    uVar2 = uVar1 * 2 | (u32)((in_r1 & 0x40000000) != 0);
    if (uVar3 < uVar1) {
        if (uVar3 < uVar1) {
            uVar1 = uVar2 + in_r0;
            bVar5 = uVar1 < uVar2;
            if (!bVar4) {
                bVar5 = !bVar5;
            }
        } else {
            uVar1 = uVar2 - in_r0;
            bVar5 = uVar2 < uVar1;
            if (bVar4) {
                bVar5 = !bVar5;
            }
        }
    } else {
        uVar1 = uVar2 - in_r0;
        bVar5 = uVar2 < uVar1;
        if (!bVar4) {
            bVar5 = !bVar5;
        }
    }
    bVar4 = (uVar1 & 0x80000000) == 0;
    uVar1 = uVar1 << 1 | (u32)((in_r1 & 0x20000000) != 0);
    if (bVar5) {
        if (bVar5) {
            uVar2 = uVar1 + in_r0;
            bVar5 = uVar2 < uVar1;
            if (!bVar4) {
                bVar5 = !bVar5;
            }
        } else {
            uVar2 = uVar1 - in_r0;
            bVar5 = uVar1 < uVar2;
            if (bVar4) {
                bVar5 = !bVar5;
            }
        }
    } else {
        uVar2 = uVar1 - in_r0;
        bVar5 = uVar1 < uVar2;
        if (!bVar4) {
            bVar5 = !bVar5;
        }
    }
    bVar4 = (uVar2 & 0x80000000) == 0;
    uVar1 = uVar2 << 1 | (u32)((in_r1 & 0x10000000) != 0);
    if (bVar5) {
        if (bVar5) {
            uVar2 = uVar1 + in_r0;
            bVar5 = uVar2 < uVar1;
            if (!bVar4) {
                bVar5 = !bVar5;
            }
        } else {
            uVar2 = uVar1 - in_r0;
            bVar5 = uVar1 < uVar2;
            if (bVar4) {
                bVar5 = !bVar5;
            }
        }
    } else {
        uVar2 = uVar1 - in_r0;
        bVar5 = uVar1 < uVar2;
        if (!bVar4) {
            bVar5 = !bVar5;
        }
    }
    bVar4 = (uVar2 & 0x80000000) == 0;
    uVar1 = uVar2 << 1 | (u32)((in_r1 & 0x8000000) != 0);
    if (bVar5) {
        if (bVar5) {
            uVar2 = uVar1 + in_r0;
            bVar5 = uVar2 < uVar1;
            if (!bVar4) {
                bVar5 = !bVar5;
            }
        } else {
            uVar2 = uVar1 - in_r0;
            bVar5 = uVar1 < uVar2;
            if (bVar4) {
                bVar5 = !bVar5;
            }
        }
    } else {
        uVar2 = uVar1 - in_r0;
        bVar5 = uVar1 < uVar2;
        if (!bVar4) {
            bVar5 = !bVar5;
        }
    }
    bVar4 = (uVar2 & 0x80000000) == 0;
    uVar1 = uVar2 << 1 | (u32)((in_r1 & 0x4000000) != 0);
    if (bVar5) {
        if (bVar5) {
            uVar2 = uVar1 + in_r0;
            bVar5 = uVar2 < uVar1;
            if (!bVar4) {
                bVar5 = !bVar5;
            }
        } else {
            uVar2 = uVar1 - in_r0;
            bVar5 = uVar1 < uVar2;
            if (bVar4) {
                bVar5 = !bVar5;
            }
        }
    } else {
        uVar2 = uVar1 - in_r0;
        bVar5 = uVar1 < uVar2;
        if (!bVar4) {
            bVar5 = !bVar5;
        }
    }
    bVar4 = (uVar2 & 0x80000000) == 0;
    uVar1 = uVar2 << 1 | (u32)((in_r1 & 0x2000000) != 0);
    if (bVar5) {
        if (bVar5) {
            uVar2 = uVar1 + in_r0;
            bVar5 = uVar2 < uVar1;
            if (!bVar4) {
                bVar5 = !bVar5;
            }
        } else {
            uVar2 = uVar1 - in_r0;
            bVar5 = uVar1 < uVar2;
            if (bVar4) {
                bVar5 = !bVar5;
            }
        }
    } else {
        uVar2 = uVar1 - in_r0;
        bVar5 = uVar1 < uVar2;
        if (!bVar4) {
            bVar5 = !bVar5;
        }
    }
    bVar4 = (uVar2 & 0x80000000) == 0;
    uVar1 = uVar2 << 1 | (u32)((in_r1 & 0x1000000) != 0);
    if (bVar5) {
        if (bVar5) {
            uVar2 = uVar1 + in_r0;
            bVar5 = uVar2 < uVar1;
            if (!bVar4) {
                bVar5 = !bVar5;
            }
        } else {
            uVar2 = uVar1 - in_r0;
            bVar5 = uVar1 < uVar2;
            if (bVar4) {
                bVar5 = !bVar5;
            }
        }
    } else {
        uVar2 = uVar1 - in_r0;
        bVar5 = uVar1 < uVar2;
        if (!bVar4) {
            bVar5 = !bVar5;
        }
    }
    bVar4 = (uVar2 & 0x80000000) == 0;
    uVar1 = uVar2 << 1 | (u32)((in_r1 & 0x800000) != 0);
    if (bVar5) {
        if (bVar5) {
            uVar2 = uVar1 + in_r0;
            bVar5 = uVar2 < uVar1;
            if (!bVar4) {
                bVar5 = !bVar5;
            }
        } else {
            uVar2 = uVar1 - in_r0;
            bVar5 = uVar1 < uVar2;
            if (bVar4) {
                bVar5 = !bVar5;
            }
        }
    } else {
        uVar2 = uVar1 - in_r0;
        bVar5 = uVar1 < uVar2;
        if (!bVar4) {
            bVar5 = !bVar5;
        }
    }
    bVar4 = (uVar2 & 0x80000000) == 0;
    uVar1 = uVar2 << 1 | (u32)((in_r1 & 0x400000) != 0);
    if (bVar5) {
        if (bVar5) {
            uVar2 = uVar1 + in_r0;
            bVar5 = uVar2 < uVar1;
            if (!bVar4) {
                bVar5 = !bVar5;
            }
        } else {
            uVar2 = uVar1 - in_r0;
            bVar5 = uVar1 < uVar2;
            if (bVar4) {
                bVar5 = !bVar5;
            }
        }
    } else {
        uVar2 = uVar1 - in_r0;
        bVar5 = uVar1 < uVar2;
        if (!bVar4) {
            bVar5 = !bVar5;
        }
    }
    bVar4 = (uVar2 & 0x80000000) == 0;
    uVar1 = uVar2 << 1 | (u32)((in_r1 & 0x200000) != 0);
    if (bVar5) {
        if (bVar5) {
            uVar2 = uVar1 + in_r0;
            bVar5 = uVar2 < uVar1;
            if (!bVar4) {
                bVar5 = !bVar5;
            }
        } else {
            uVar2 = uVar1 - in_r0;
            bVar5 = uVar1 < uVar2;
            if (bVar4) {
                bVar5 = !bVar5;
            }
        }
    } else {
        uVar2 = uVar1 - in_r0;
        bVar5 = uVar1 < uVar2;
        if (!bVar4) {
            bVar5 = !bVar5;
        }
    }
    bVar4 = (uVar2 & 0x80000000) == 0;
    uVar1 = uVar2 << 1 | (u32)((in_r1 & 0x100000) != 0);
    if (bVar5) {
        if (bVar5) {
            uVar2 = uVar1 + in_r0;
            bVar5 = uVar2 < uVar1;
            if (!bVar4) {
                bVar5 = !bVar5;
            }
        } else {
            uVar2 = uVar1 - in_r0;
            bVar5 = uVar1 < uVar2;
            if (bVar4) {
                bVar5 = !bVar5;
            }
        }
    } else {
        uVar2 = uVar1 - in_r0;
        bVar5 = uVar1 < uVar2;
        if (!bVar4) {
            bVar5 = !bVar5;
        }
    }
    bVar4 = (uVar2 & 0x80000000) == 0;
    uVar1 = uVar2 << 1 | (u32)((in_r1 & 0x80000) != 0);
    if (bVar5) {
        if (bVar5) {
            uVar2 = uVar1 + in_r0;
            bVar5 = uVar2 < uVar1;
            if (!bVar4) {
                bVar5 = !bVar5;
            }
        } else {
            uVar2 = uVar1 - in_r0;
            bVar5 = uVar1 < uVar2;
            if (bVar4) {
                bVar5 = !bVar5;
            }
        }
    } else {
        uVar2 = uVar1 - in_r0;
        bVar5 = uVar1 < uVar2;
        if (!bVar4) {
            bVar5 = !bVar5;
        }
    }
    bVar4 = (uVar2 & 0x80000000) == 0;
    uVar1 = uVar2 << 1 | (u32)((in_r1 & 0x40000) != 0);
    if (bVar5) {
        if (bVar5) {
            uVar2 = uVar1 + in_r0;
            bVar5 = uVar2 < uVar1;
            if (!bVar4) {
                bVar5 = !bVar5;
            }
        } else {
            uVar2 = uVar1 - in_r0;
            bVar5 = uVar1 < uVar2;
            if (bVar4) {
                bVar5 = !bVar5;
            }
        }
    } else {
        uVar2 = uVar1 - in_r0;
        bVar5 = uVar1 < uVar2;
        if (!bVar4) {
            bVar5 = !bVar5;
        }
    }
    bVar4 = (uVar2 & 0x80000000) == 0;
    uVar1 = uVar2 << 1 | (u32)((in_r1 & 0x20000) != 0);
    if (bVar5) {
        if (bVar5) {
            uVar2 = uVar1 + in_r0;
            bVar5 = uVar2 < uVar1;
            if (!bVar4) {
                bVar5 = !bVar5;
            }
        } else {
            uVar2 = uVar1 - in_r0;
            bVar5 = uVar1 < uVar2;
            if (bVar4) {
                bVar5 = !bVar5;
            }
        }
    } else {
        uVar2 = uVar1 - in_r0;
        bVar5 = uVar1 < uVar2;
        if (!bVar4) {
            bVar5 = !bVar5;
        }
    }
    bVar4 = (uVar2 & 0x80000000) == 0;
    uVar1 = uVar2 << 1 | (u32)((in_r1 & 0x10000) != 0);
    if (bVar5) {
        if (bVar5) {
            uVar2 = uVar1 + in_r0;
            bVar5 = uVar2 < uVar1;
            if (!bVar4) {
                bVar5 = !bVar5;
            }
        } else {
            uVar2 = uVar1 - in_r0;
            bVar5 = uVar1 < uVar2;
            if (bVar4) {
                bVar5 = !bVar5;
            }
        }
    } else {
        uVar2 = uVar1 - in_r0;
        bVar5 = uVar1 < uVar2;
        if (!bVar4) {
            bVar5 = !bVar5;
        }
    }
    bVar4 = (uVar2 & 0x80000000) == 0;
    uVar1 = uVar2 << 1 | (u32)((in_r1 & 0x8000) != 0);
    if (bVar5) {
        if (bVar5) {
            uVar2 = uVar1 + in_r0;
            bVar5 = uVar2 < uVar1;
            if (!bVar4) {
                bVar5 = !bVar5;
            }
        } else {
            uVar2 = uVar1 - in_r0;
            bVar5 = uVar1 < uVar2;
            if (bVar4) {
                bVar5 = !bVar5;
            }
        }
    } else {
        uVar2 = uVar1 - in_r0;
        bVar5 = uVar1 < uVar2;
        if (!bVar4) {
            bVar5 = !bVar5;
        }
    }
    bVar4 = (uVar2 & 0x80000000) == 0;
    uVar1 = uVar2 << 1 | (u32)((in_r1 & 0x4000) != 0);
    if (bVar5) {
        if (bVar5) {
            uVar2 = uVar1 + in_r0;
            bVar5 = uVar2 < uVar1;
            if (!bVar4) {
                bVar5 = !bVar5;
            }
        } else {
            uVar2 = uVar1 - in_r0;
            bVar5 = uVar1 < uVar2;
            if (bVar4) {
                bVar5 = !bVar5;
            }
        }
    } else {
        uVar2 = uVar1 - in_r0;
        bVar5 = uVar1 < uVar2;
        if (!bVar4) {
            bVar5 = !bVar5;
        }
    }
    bVar4 = (uVar2 & 0x80000000) == 0;
    uVar1 = uVar2 << 1 | (u32)((in_r1 & 0x2000) != 0);
    if (bVar5) {
        if (bVar5) {
            uVar2 = uVar1 + in_r0;
            bVar5 = uVar2 < uVar1;
            if (!bVar4) {
                bVar5 = !bVar5;
            }
        } else {
            uVar2 = uVar1 - in_r0;
            bVar5 = uVar1 < uVar2;
            if (bVar4) {
                bVar5 = !bVar5;
            }
        }
    } else {
        uVar2 = uVar1 - in_r0;
        bVar5 = uVar1 < uVar2;
        if (!bVar4) {
            bVar5 = !bVar5;
        }
    }
    bVar4 = (uVar2 & 0x80000000) == 0;
    uVar1 = uVar2 << 1 | (u32)((in_r1 & 0x1000) != 0);
    if (bVar5) {
        if (bVar5) {
            uVar2 = uVar1 + in_r0;
            bVar5 = uVar2 < uVar1;
            if (!bVar4) {
                bVar5 = !bVar5;
            }
        } else {
            uVar2 = uVar1 - in_r0;
            bVar5 = uVar1 < uVar2;
            if (bVar4) {
                bVar5 = !bVar5;
            }
        }
    } else {
        uVar2 = uVar1 - in_r0;
        bVar5 = uVar1 < uVar2;
        if (!bVar4) {
            bVar5 = !bVar5;
        }
    }
    bVar4 = (uVar2 & 0x80000000) == 0;
    uVar1 = uVar2 << 1 | (u32)((in_r1 & 0x800) != 0);
    if (bVar5) {
        if (bVar5) {
            uVar2 = uVar1 + in_r0;
            bVar5 = uVar2 < uVar1;
            if (!bVar4) {
                bVar5 = !bVar5;
            }
        } else {
            uVar2 = uVar1 - in_r0;
            bVar5 = uVar1 < uVar2;
            if (bVar4) {
                bVar5 = !bVar5;
            }
        }
    } else {
        uVar2 = uVar1 - in_r0;
        bVar5 = uVar1 < uVar2;
        if (!bVar4) {
            bVar5 = !bVar5;
        }
    }
    bVar4 = (uVar2 & 0x80000000) == 0;
    uVar1 = uVar2 << 1 | (u32)((in_r1 & 0x400) != 0);
    if (bVar5) {
        if (bVar5) {
            uVar2 = uVar1 + in_r0;
            bVar5 = uVar2 < uVar1;
            if (!bVar4) {
                bVar5 = !bVar5;
            }
        } else {
            uVar2 = uVar1 - in_r0;
            bVar5 = uVar1 < uVar2;
            if (bVar4) {
                bVar5 = !bVar5;
            }
        }
    } else {
        uVar2 = uVar1 - in_r0;
        bVar5 = uVar1 < uVar2;
        if (!bVar4) {
            bVar5 = !bVar5;
        }
    }
    bVar4 = (uVar2 & 0x80000000) == 0;
    uVar1 = uVar2 << 1 | (u32)((in_r1 & 0x200) != 0);
    if (bVar5) {
        if (bVar5) {
            uVar2 = uVar1 + in_r0;
            bVar5 = uVar2 < uVar1;
            if (!bVar4) {
                bVar5 = !bVar5;
            }
        } else {
            uVar2 = uVar1 - in_r0;
            bVar5 = uVar1 < uVar2;
            if (bVar4) {
                bVar5 = !bVar5;
            }
        }
    } else {
        uVar2 = uVar1 - in_r0;
        bVar5 = uVar1 < uVar2;
        if (!bVar4) {
            bVar5 = !bVar5;
        }
    }
    bVar4 = (uVar2 & 0x80000000) == 0;
    uVar1 = uVar2 << 1 | (u32)((in_r1 & 0x100) != 0);
    if (bVar5) {
        if (bVar5) {
            uVar2 = uVar1 + in_r0;
            bVar5 = uVar2 < uVar1;
            if (!bVar4) {
                bVar5 = !bVar5;
            }
        } else {
            uVar2 = uVar1 - in_r0;
            bVar5 = uVar1 < uVar2;
            if (bVar4) {
                bVar5 = !bVar5;
            }
        }
    } else {
        uVar2 = uVar1 - in_r0;
        bVar5 = uVar1 < uVar2;
        if (!bVar4) {
            bVar5 = !bVar5;
        }
    }
    bVar4 = (uVar2 & 0x80000000) == 0;
    uVar1 = uVar2 << 1 | (u32)((in_r1 & 0x80) != 0);
    if (bVar5) {
        if (bVar5) {
            uVar2 = uVar1 + in_r0;
            bVar5 = uVar2 < uVar1;
            if (!bVar4) {
                bVar5 = !bVar5;
            }
        } else {
            uVar2 = uVar1 - in_r0;
            bVar5 = uVar1 < uVar2;
            if (bVar4) {
                bVar5 = !bVar5;
            }
        }
    } else {
        uVar2 = uVar1 - in_r0;
        bVar5 = uVar1 < uVar2;
        if (!bVar4) {
            bVar5 = !bVar5;
        }
    }
    bVar4 = (uVar2 & 0x80000000) == 0;
    uVar1 = uVar2 << 1 | (u32)((in_r1 & 0x40) != 0);
    if (bVar5) {
        if (bVar5) {
            uVar2 = uVar1 + in_r0;
            bVar5 = uVar2 < uVar1;
            if (!bVar4) {
                bVar5 = !bVar5;
            }
        } else {
            uVar2 = uVar1 - in_r0;
            bVar5 = uVar1 < uVar2;
            if (bVar4) {
                bVar5 = !bVar5;
            }
        }
    } else {
        uVar2 = uVar1 - in_r0;
        bVar5 = uVar1 < uVar2;
        if (!bVar4) {
            bVar5 = !bVar5;
        }
    }
    bVar4 = (uVar2 & 0x80000000) == 0;
    uVar1 = uVar2 << 1 | (u32)((in_r1 & 0x20) != 0);
    if (bVar5) {
        if (bVar5) {
            uVar2 = uVar1 + in_r0;
            bVar5 = uVar2 < uVar1;
            if (!bVar4) {
                bVar5 = !bVar5;
            }
        } else {
            uVar2 = uVar1 - in_r0;
            bVar5 = uVar1 < uVar2;
            if (bVar4) {
                bVar5 = !bVar5;
            }
        }
    } else {
        uVar2 = uVar1 - in_r0;
        bVar5 = uVar1 < uVar2;
        if (!bVar4) {
            bVar5 = !bVar5;
        }
    }
    bVar4 = (uVar2 & 0x80000000) == 0;
    uVar1 = uVar2 << 1 | (u32)((in_r1 & 0x10) != 0);
    if (bVar5) {
        if (bVar5) {
            uVar2 = uVar1 + in_r0;
            bVar5 = uVar2 < uVar1;
            if (!bVar4) {
                bVar5 = !bVar5;
            }
        } else {
            uVar2 = uVar1 - in_r0;
            bVar5 = uVar1 < uVar2;
            if (bVar4) {
                bVar5 = !bVar5;
            }
        }
    } else {
        uVar2 = uVar1 - in_r0;
        bVar5 = uVar1 < uVar2;
        if (!bVar4) {
            bVar5 = !bVar5;
        }
    }
    bVar4 = (uVar2 & 0x80000000) == 0;
    uVar1 = uVar2 << 1 | (u32)((in_r1 & 8) != 0);
    if (bVar5) {
        if (bVar5) {
            uVar2 = uVar1 + in_r0;
            bVar5 = uVar2 < uVar1;
            if (!bVar4) {
                bVar5 = !bVar5;
            }
        } else {
            uVar2 = uVar1 - in_r0;
            bVar5 = uVar1 < uVar2;
            if (bVar4) {
                bVar5 = !bVar5;
            }
        }
    } else {
        uVar2 = uVar1 - in_r0;
        bVar5 = uVar1 < uVar2;
        if (!bVar4) {
            bVar5 = !bVar5;
        }
    }
    bVar4 = (uVar2 & 0x80000000) == 0;
    uVar1 = uVar2 << 1 | (u32)((in_r1 & 4) != 0);
    if (bVar5) {
        if (bVar5) {
            uVar2 = uVar1 + in_r0;
            bVar5 = uVar2 < uVar1;
            if (!bVar4) {
                bVar5 = !bVar5;
            }
        } else {
            uVar2 = uVar1 - in_r0;
            bVar5 = uVar1 < uVar2;
            if (bVar4) {
                bVar5 = !bVar5;
            }
        }
    } else {
        uVar2 = uVar1 - in_r0;
        bVar5 = uVar1 < uVar2;
        if (!bVar4) {
            bVar5 = !bVar5;
        }
    }
    bVar4 = (uVar2 & 0x80000000) == 0;
    uVar1 = uVar2 << 1 | (u32)((in_r1 & 2) != 0);
    if (bVar5) {
        if (bVar5) {
            uVar2 = uVar1 + in_r0;
            bVar5 = uVar2 < uVar1;
            if (!bVar4) {
                bVar5 = !bVar5;
            }
        } else {
            uVar2 = uVar1 - in_r0;
            bVar5 = uVar1 < uVar2;
            if (bVar4) {
                bVar5 = !bVar5;
            }
        }
    } else {
        uVar2 = uVar1 - in_r0;
        bVar5 = uVar1 < uVar2;
        if (!bVar4) {
            bVar5 = !bVar5;
        }
    }
    bVar4 = (uVar2 & 0x80000000) == 0;
    uVar1 = uVar2 << 1 | (u32)((in_r1 & 1) != 0);
    if (bVar5) {
        if (bVar5) {
            uVar2 = uVar1 + in_r0;
            bVar5 = uVar2 < uVar1;
            if (!bVar4) {
                bVar5 = !bVar5;
            }
        } else {
            uVar2 = uVar1 - in_r0;
            bVar5 = uVar1 < uVar2;
            if (bVar4) {
                bVar5 = !bVar5;
            }
        }
    } else {
        uVar2 = uVar1 - in_r0;
        bVar5 = uVar1 < uVar2;
        if (!bVar4) {
            bVar5 = !bVar5;
        }
    }
    if (!bVar5) {
        return uVar2;
    }
    return in_r0 + uVar2;
}

/*
 * switch_jump  0x8c010794
 * compiler switch helper: jumps through the table at 0x8c0107f4
 * called by: aica_sound_265704, alt_entry_2359ae, alt_entry_26570c, date_to_rtc_seconds,
 * game_uses_sr_get_imask_c_26bbe2, game_uses_sr_get_imask_c_26bcaa, game_uses_switch_jump_26bb16,
 * game_uses_switch_jump_26bd86 (+44 more)
 */
u32 switch_jump(u32 a0, u32 a1, u32 a2, u32 a3) {
    int in_r0;
    u32 uVar1;

    /* WARNING: Could not recover jumptable at 0x8c01079c. Too many branches */
    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)((&DATA_8c0107f4) + in_r0))();
    return uVar1;
}

/*
 * switch_jump_r0  0x8c0107a0
 * compiler switch helper: jumps through the table at 0x8c0107f4 indexed by r0
 * called by: alt_entry_26892c, flags_4c0db0_set, flags_4c0ed0_set, gfxlib_uses_noop_fr4_test_2336e8,
 * kamui_uses_switch_jump_r0_2140a4, sd_cmd_ring_push, sd_set_cmd_queue_buffer, ta_uses_switch_jump_r0_2218f4
 */
u32 switch_jump_r0(u32 a0, u32 a1, u32 a2, u32 a3) {
    int in_r0;
    u32 uVar1;

    /* WARNING: Could not recover jumptable at 0x8c0107a8. Too many branches */
    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)((&DATA_8c0107f4) + in_r0))();
    return uVar1;
}

/*
 * noop  0x8c0107f0
 * does nothing
 */
u32 noop(void) {
    u32 in_r0;

    return in_r0;
}

/*
 * libgcc_movstr_i4  0x8c010838
 * compiler block-copy helper: copies r0 bytes from r2 to r1 in 32-bit words
 * called by: gfxlib_uses_libgcc_movstr_i4_23340c, gfxlib_uses_noop_fr4_test_2336e8, ninja_draw_2588f8,
 * ninja_draw_25e540, ninja_draw_25e884, ninja_draw_25eb60, pvr_uses_libgcc_divide_helper_25dc60,
 * ta_uses_libgcc_movstr_i4_20df7a decompiler: Exceeded maximum restarts with more pending
 */
u32 libgcc_movstr_i4(u32 a0, u32 a1, u32 a2, u32 a3) {
    int in_r0;
    u32 uVar1;
    u32 *in_r1;
    u32 *in_r2;
    u32 *puVar2;

    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
    switch (in_r0) {
    case 0:
        return in_r0;
    default:
        puVar2 = (u32 *)((int)in_r2 + in_r0);
    }
    while (true) {
        if (puVar2 < in_r2 + 1) {
            return *in_r2;
        }
        *in_r1 = *in_r2;
        uVar1 = in_r2[1];
        in_r2 = in_r2 + 2;
        if (puVar2 < in_r2)
            break;
        in_r1[1] = uVar1;
        in_r1 = in_r1 + 2;
    }
    return uVar1;
}

/*
 * strcpy_words_entry  0x8c0108f8
 * alternate entry of strcpy_words: copies the string at r1 to r0 a word at a time until a word holds a zero byte
 */
u32 *strcpy_words_entry(void) {
    char cVar1;
    u32 *in_r0;
    u32 *puVar2;
    u32 *in_r1;
    u32 *puVar3;
    u32 uVar4;
    u32 uVar5;

    uVar4 = *in_r1;
    puVar2 = in_r0;
    do {
        puVar3 = in_r1 + 1;
        if (((uVar4 >> 0x18 == 0 || (uVar4 & 0xff0000) == 0) || (uVar4 & 0xff00) == 0) || (uVar4 & 0xff) == 0) {
        LAB_8c010934:
            uVar4 = puVar3[-1];
            *(char *)puVar2 = (char)uVar4;
            if ((char)uVar4 != '\0') {
                cVar1 = *(char *)((int)puVar3 + -3);
                *(char *)((int)puVar2 + 1) = cVar1;
                if (cVar1 != '\0') {
                    cVar1 = *(char *)((int)puVar3 + -2);
                    *(char *)((int)puVar2 + 2) = cVar1;
                    if (cVar1 != '\0') {
                        *(char *)((int)puVar2 + 3) = *(char *)((int)puVar3 + -1);
                    }
                }
            }
            return in_r0;
        }
        uVar5 = *puVar3;
        puVar3 = in_r1 + 2;
        *puVar2 = uVar4;
        if (((uVar5 >> 0x18 == 0 || (uVar5 & 0xff0000) == 0) || (uVar5 & 0xff00) == 0) || (uVar5 & 0xff) == 0) {
            puVar2 = puVar2 + 1;
            goto LAB_8c010934;
        }
        uVar4 = *puVar3;
        puVar3 = in_r1 + 3;
        puVar2[1] = uVar5;
        if (((uVar4 >> 0x18 == 0 || (uVar4 & 0xff0000) == 0) || (uVar4 & 0xff00) == 0) || (uVar4 & 0xff) == 0) {
            puVar2 = puVar2 + 2;
            goto LAB_8c010934;
        }
        uVar5 = *puVar3;
        puVar3 = in_r1 + 4;
        puVar2[2] = uVar4;
        if (((uVar5 >> 0x18 == 0 || (uVar5 & 0xff0000) == 0) || (uVar5 & 0xff00) == 0) || (uVar5 & 0xff) == 0) {
            puVar2 = puVar2 + 3;
            goto LAB_8c010934;
        }
        uVar4 = *puVar3;
        puVar2[3] = uVar5;
        puVar2 = puVar2 + 4;
        in_r1 = puVar3;
    } while (true);
}

/*
 * strcpy_words  0x8c0108fc
 * copies the string at r1 to r0 a word at a time until a word holds a zero byte, then finishes byte by byte
 * called by: strcpy_like
 */
u32 *strcpy_words(void) {
    char cVar1;
    u32 *in_r0;
    u32 *puVar2;
    u32 *in_r1;
    u32 *puVar3;
    u32 uVar4;
    u32 uVar5;

    uVar4 = *in_r1;
    puVar2 = in_r0;
    do {
        puVar3 = in_r1 + 1;
        if (((uVar4 >> 0x18 == 0 || (uVar4 & 0xff0000) == 0) || (uVar4 & 0xff00) == 0) || (uVar4 & 0xff) == 0) {
        LAB_8c010934:
            uVar4 = puVar3[-1];
            *(char *)puVar2 = (char)uVar4;
            if ((char)uVar4 != '\0') {
                cVar1 = *(char *)((int)puVar3 + -3);
                *(char *)((int)puVar2 + 1) = cVar1;
                if (cVar1 != '\0') {
                    cVar1 = *(char *)((int)puVar3 + -2);
                    *(char *)((int)puVar2 + 2) = cVar1;
                    if (cVar1 != '\0') {
                        *(char *)((int)puVar2 + 3) = *(char *)((int)puVar3 + -1);
                    }
                }
            }
            return in_r0;
        }
        uVar5 = *puVar3;
        puVar3 = in_r1 + 2;
        *puVar2 = uVar4;
        if (((uVar5 >> 0x18 == 0 || (uVar5 & 0xff0000) == 0) || (uVar5 & 0xff00) == 0) || (uVar5 & 0xff) == 0) {
            puVar2 = puVar2 + 1;
            goto LAB_8c010934;
        }
        uVar4 = *puVar3;
        puVar3 = in_r1 + 3;
        puVar2[1] = uVar5;
        if (((uVar4 >> 0x18 == 0 || (uVar4 & 0xff0000) == 0) || (uVar4 & 0xff00) == 0) || (uVar4 & 0xff) == 0) {
            puVar2 = puVar2 + 2;
            goto LAB_8c010934;
        }
        uVar5 = *puVar3;
        puVar3 = in_r1 + 4;
        puVar2[2] = uVar4;
        if (((uVar5 >> 0x18 == 0 || (uVar5 & 0xff0000) == 0) || (uVar5 & 0xff00) == 0) || (uVar5 & 0xff) == 0) {
            puVar2 = puVar2 + 3;
            goto LAB_8c010934;
        }
        uVar4 = *puVar3;
        puVar2[3] = uVar5;
        puVar2 = puVar2 + 4;
        in_r1 = puVar3;
    } while (true);
}

/*
 * memcpy_bytes_unrolled  0x8c010960
 * copies r0 bytes from r2 to r1 four at a time (the unaligned tail of memcpy)
 * called by: g2dma_1f4794
 */
int memcpy_bytes_unrolled(u32 unused_a0, u32 a1) {
    char cVar1;
    int in_r0;
    int iVar2;
    char *in_r1;
    char *in_r2;
    char *pcVar3;

    iVar2 = 0;
    if (in_r0 != 0) {
        pcVar3 = in_r2 + in_r0;
        do {
            cVar1 = *in_r2;
            *in_r1 = cVar1;
            if (pcVar3 <= in_r2 + 1) {
                return (int)cVar1;
            }
            cVar1 = in_r2[1];
            in_r1[1] = cVar1;
            if (pcVar3 <= in_r2 + 2) {
                return (int)cVar1;
            }
            cVar1 = in_r2[2];
            in_r1[2] = cVar1;
            if (pcVar3 <= in_r2 + 3) {
                return (int)cVar1;
            }
            cVar1 = in_r2[3];
            iVar2 = (int)cVar1;
            in_r2 = in_r2 + 4;
            in_r1[3] = cVar1;
            in_r1 = in_r1 + 4;
        } while (in_r2 < pcVar3);
    }
    return iVar2;
}

/*
 * strcpy_like  0x8c010998
 * copies the string at r1 to r0 (word-wise when both are aligned) and returns r0
 * called by: filename_add_ext_if_missing, flash_header_signature, strcpy_like_wrap
 */
char *strcpy_like(void) {
    char cVar1;
    char *in_r0;
    u32 uVar2;
    char *in_r1;
    char *pcVar3;

    if (((u32)in_r1 & 3) == 0 && ((u32)in_r0 & 3) == 0) {
        uVar2 = strcpy_words();
        return (char *)uVar2;
    }
    cVar1 = *in_r1;
    pcVar3 = in_r0;
    while (true) {
        *pcVar3 = cVar1;
        if (cVar1 == '\0') {
            return in_r0;
        }
        cVar1 = in_r1[1];
        pcVar3[1] = cVar1;
        if (cVar1 == '\0') {
            return in_r0;
        }
        cVar1 = in_r1[2];
        pcVar3[2] = cVar1;
        if (cVar1 == '\0') {
            return in_r0;
        }
        cVar1 = in_r1[3];
        in_r1 = in_r1 + 4;
        pcVar3[3] = cVar1;
        if (cVar1 == '\0')
            break;
        cVar1 = *in_r1;
        pcVar3 = pcVar3 + 4;
    }
    return in_r0;
}

/*
 * strcmp_word  0x8c0109e8
 * strcmp that compares a word at a time when both strings are aligned
 * called by: asr_uses_strcmp_word_10ca58, filename_add_ext_if_missing, strcmp_01439c
 */
int strcmp_word(u32 *a0, u32 *a1) {
    int iVar1;
    u32 uVar2;
    int iVar3;
    u32 uVar4;
    u32 uVar5;
    u32 *puVar6;
    u32 *puVar7;
    u32 *puVar8;

    if ((((u32)a0 | (u32)a1) & 3) != 0) {
        while (true) {
            iVar1 = (int)(char)*a0;
            iVar3 = (int)(char)*a1;
            if ((iVar1 == 0) || (iVar3 != iVar1))
                break;
            iVar1 = (int)*(char *)((int)a0 + 1);
            iVar3 = (int)*(char *)((int)a1 + 1);
            if ((iVar1 == 0) || (iVar3 != iVar1))
                break;
            iVar1 = (int)*(char *)((int)a0 + 2);
            iVar3 = (int)*(char *)((int)a1 + 2);
            if ((iVar1 == 0) || (iVar3 != iVar1))
                break;
            iVar1 = (int)*(char *)((int)a0 + 3);
            a0 = a0 + 1;
            iVar3 = (int)*(char *)((int)a1 + 3);
            a1 = a1 + 1;
            if ((iVar1 == 0) || (iVar3 != iVar1))
                break;
        }
        return iVar1 - iVar3;
    }
    uVar4 = *a1;
    puVar7 = a1 + 1;
    do {
        puVar6 = a0 + 1;
        puVar8 = puVar7;
        if (((uVar4 >> 0x18 == 0 || (uVar4 & 0xff0000) == 0) || (uVar4 & 0xff00) == 0) || (uVar4 & 0xff) == 0)
            goto LAB_8c010a26;
        uVar2 = *puVar7;
        puVar8 = puVar7 + 1;
        if (uVar4 != *a0)
            break;
        uVar4 = *puVar6;
        puVar6 = a0 + 2;
        if (((uVar2 >> 0x18 == 0 || (uVar2 & 0xff0000) == 0) || (uVar2 & 0xff00) == 0) || (uVar2 & 0xff) == 0)
            goto LAB_8c010a26;
        uVar5 = *puVar8;
        puVar8 = puVar7 + 2;
        if (uVar2 != uVar4)
            break;
        uVar4 = *puVar6;
        puVar6 = a0 + 3;
        if (((uVar5 >> 0x18 == 0 || (uVar5 & 0xff0000) == 0) || (uVar5 & 0xff00) == 0) || (uVar5 & 0xff) == 0)
            goto LAB_8c010a26;
        uVar2 = *puVar8;
        puVar8 = puVar7 + 3;
        if (uVar5 != uVar4)
            break;
        uVar5 = *puVar6;
        puVar6 = a0 + 4;
        if (((uVar2 >> 0x18 == 0 || (uVar2 & 0xff0000) == 0) || (uVar2 & 0xff00) == 0) || (uVar2 & 0xff) == 0)
            goto LAB_8c010a26;
        uVar4 = *puVar8;
        puVar7 = puVar7 + 4;
        a0 = puVar6;
        puVar8 = puVar7;
    } while (uVar2 == uVar5);
    puVar8 = puVar8 + -1;
LAB_8c010a26:
    iVar3 = (int)(char)puVar8[-1];
    iVar1 = (int)(char)puVar6[-1];
    if ((iVar3 != 0) && (iVar3 == iVar1)) {
        iVar3 = (int)*(char *)((int)puVar8 + -3);
        iVar1 = (int)*(char *)((int)puVar6 + -3);
        if ((iVar3 != 0) && (iVar3 == iVar1)) {
            iVar3 = (int)*(char *)((int)puVar8 + -2);
            iVar1 = (int)*(char *)((int)puVar6 + -2);
            if ((iVar3 != 0) && (iVar3 == iVar1)) {
                iVar1 = (int)*(char *)((int)puVar6 + -1);
                iVar3 = (int)*(char *)((int)puVar8 + -1);
            }
        }
    }
    return iVar1 - iVar3;
}

/*
 * busy_wait_5  0x8c010a90
 * spins 5 times
 * called by: libc_uses_busy_wait_5_011960
 */
u32 busy_wait_5(void) {
    u32 in_r0;
    int iVar1;

    iVar1 = 5;
    do {
        iVar1 = iVar1 + -1;
    } while (0 < iVar1);
    return in_r0;
}

/*
 * delay_loop_6  0x8c010ab4
 * a short busy-wait (six iterations)
 * called by: libc_uses_delay_loop_6_011e10, libc_uses_delay_loop_6_012328
 */
u32 delay_loop_6(void) {
    u32 in_r0;
    int iVar1;

    iVar1 = 6;
    do {
        iVar1 = iVar1 + -1;
    } while (0 < iVar1);
    return in_r0;
}

/*
 * delay_loop_6_010ad4  0x8c010ad4
 * a short busy-wait (six iterations)
 * called by: libc_uses_delay_loop_6_011e10, libc_uses_delay_loop_6_012328
 */
u32 delay_loop_6_010ad4(void) {
    u32 in_r0;
    int iVar1;

    iVar1 = 6;
    do {
        iVar1 = iVar1 + -1;
    } while (0 < iVar1);
    return in_r0;
}

/*
 * bytes_add_be  0x8c010af8
 * adds the a2-byte big-endian number at a1 to the one at a0
 * called by: bytes_mul_8x8_be, softfloat_div_mantissa
 */
int bytes_add_be(char *a0, int a1, int a2, u32 unused_a3, int ain0) {
    u8 *pbVar1;
    u8 *pbVar2;
    int iVar3;

    pbVar2 = (u8 *)(a2 + -1 + a1);
    pbVar1 = (u8 *)(a0 + a2 + -1);
    iVar3 = 0;
    if (a0 <= pbVar1) {
        do {
            iVar3 = (u32)*pbVar1 + (u32)*pbVar2 + iVar3;
            *pbVar1 = (u8)iVar3;
            ain0 = libgcc_divide_helper_010468(iVar3, 0x100);
            pbVar1 = pbVar1 + -1;
            pbVar2 = pbVar2 + -1;
            iVar3 = ain0;
        } while (a0 <= pbVar1);
    }
    return ain0;
}

/*
 * alt_entry_010b08  0x8c010b08
 * probably an entry 16 bytes into 8c010af8: it reads registers that code sets before it
 */
int alt_entry_010b08(char *a0, int a1, char *a2, u32 unused_a3, int ain0) {
    u8 *pbVar1;
    u32 unaff_r13;
    int iVar2;

    pbVar1 = (u8 *)(a0 + a1);
    iVar2 = 0;
    if (a0 <= pbVar1) {
        do {
            iVar2 = (u32)*pbVar1 + (u32)(u8)*a2 + iVar2;
            *pbVar1 = (u8)iVar2;
            ain0 = libgcc_divide_helper_010468(iVar2, unaff_r13);
            pbVar1 = pbVar1 + -1;
            a2 = a2 + -1;
            iVar2 = ain0;
        } while (a0 <= pbVar1);
    }
    return ain0;
}

/*
 * bytes_all_zero  0x8c010b40
 * 1 when the a1 bytes at a0 are all zero
 * called by: libc_uses_memmove_013060
 */
u32 bytes_all_zero(char *a0, int a1) {
    int iVar1;

    iVar1 = 0;
    if (0 < a1) {
        do {
            if (*a0 != '\0') {
                return 0;
            }
            iVar1 = iVar1 + 1;
            a0 = a0 + 1;
        } while (iVar1 < a1);
    }
    return 1;
}

/*
 * libc_uses_softfloat_scale_pow10_010b60  0x8c010b60
 * area name: in the libc library code range; behaviour name: its main named callee is softfloat_scale_pow10
 * called by: libc_uses_memmove_013060
 */
u32 libc_uses_softfloat_scale_pow10_010b60(u32 a0, u32 a1, int a2, u32 a3) {
    short sVar1;
    int iVar2;
    int iVar3;
    u32 uVar4;
    u8 *puVar5;
    int iVar7;
    u8 *puVar8;
    int iVar9;
    u8 auStackY_8028[8];
    u8 auStackY_8020[32748];
    u32 in_stack_ffffffcc;
    u32 in_stack_ffffffd0;
    u8 auStack_20[16];

    puVar5 = &stack0xffffffcc;
    puVar8 = &stack0xffffffcc;
    uVar4 = CONCAT22((short)((u32)in_stack_ffffffd0 >> 0x10), (u16)a0);
    if (a2 < 1) {
        softfloat_scale_pow10(-a2, &stack0xffffffcc, auStack_20, a3);
        iVar2 = (int)(short)uVar4;
        libc_uses_bytes_shl1_0129b4(&stack0xffffffcc, auStack_20, iVar2, a1);
    } else {
        softfloat_scale_pow10(a2, &stack0xffffffcc, auStack_20, a3);
        iVar2 = (int)(short)uVar4;
        softfloat_div_mantissa(&stack0xffffffcc, auStack_20, iVar2, a1);
        puVar8 = puVar5;
    }
    iVar9 = 0x3f - (short)in_stack_ffffffcc;
    iVar3 = libc_test_0105c4();
    libc_uses_libgcc_divide_helper_012e00(auStack_20, 9, 0x42 - (short)iVar9);
    iVar7 = (int)(short)iVar3;
    iVar2 = 8;
    if (iVar7 < 9) {
        do {
            sVar1 = (short)iVar2;
            auStack_20[sVar1] = auStack_20[sVar1 - iVar7];
            iVar2 = sVar1 + -1;
        } while (iVar7 <= (short)iVar2);
    }
    sVar1 = (short)iVar2;
    puVar8 = auStack_20 + sVar1 + 1;
    while (-1 < sVar1) {
        iVar2 = iVar2 + -1;
        puVar8 = puVar8 + -1;
        *puVar8 = 0;
        sVar1 = (short)iVar2;
    }
    iVar9 = iVar9 + iVar3 * -8;
    libc_scan_loop_012da8(auStack_20, 9, iVar9);
    libc_uses_libgcc_divide_helper_012c70(auStack_20, 0x40);
    uVar4 = memmove(a3, auStack_20, 8);
    return uVar4;
}

/*
 * softfloat_div_mantissa  0x8c010c60
 * divides the 8-byte mantissa a1 by a3 with shift-and-subtract long division into a 9-byte quotient (sticky bit kept)
 * and adjusts the exponent *a0 called by: libc_uses_softfloat_scale_pow10_010b60
 */
u32 softfloat_div_mantissa(short *a0, u32 a1, u32 a2, u32 a3) {
    int iVar1;
    u32 uVar2;
    u8 *a6;
    int iVar3;
    char *ain0;
    u8 auStack_48[4];
    u8 bStack_44;
    char cStack_43;
    char cStack_42;
    char cStack_41;
    char cStack_40;
    char cStack_3f;
    char cStack_3e;
    char cStack_3d;
    u8 bStack_3c;
    u8 auStack_38[4];
    u8 auStack_34[8];
    char cStack_2c;
    char cStack_2b;
    char cStack_2a;
    char cStack_29;
    char cStack_28;
    char cStack_27;
    char cStack_26;
    char cStack_25;
    char cStack_24;
    char cStack_23;
    char cStack_22;
    char cStack_21;

    uVar2 = a3;
    memset(&cStack_2c, 0, 4);
    memmove(&cStack_28, uVar2, 8);
    memset(auStack_38, 0, 4);
    memmove(auStack_34, a1, 8);
    a6 = (u8 *)0x10;
    memset(auStack_48, 0, 0x10);
    ain0 = &cStack_3d;
    for (iVar3 = 0x42; iVar3 != 0; iVar3 = iVar3 + -1) {
        bytes_shl1(auStack_48, 0xc);
        a3 = 0xc;
        a6 = auStack_38;
        iVar1 = bytes_sub_be(0, &cStack_2c, auStack_38, 0xc);
        if (iVar1 < 0) {
            a6 = (u8 *)0xc;
            bytes_add_be(&cStack_2c, auStack_38, 0xc, a3, ain0);
        } else {
            *ain0 = *ain0 + '\x01';
        }
        bytes_shl1(&cStack_2c, 0xc);
    }
    for (iVar3 = 2; iVar3 != 0; iVar3 = iVar3 + -1) {
        bytes_shr1(auStack_48, 0x10);
    }
    if (((((cStack_2c != '\0') || (cStack_2b != '\0')) || (cStack_2a != '\0')) ||
         (((cStack_29 != '\0' || (cStack_28 != '\0')) ||
           ((cStack_27 != '\0' || ((cStack_26 != '\0' || (cStack_25 != '\0')))))))) ||
        ((cStack_24 != '\0' || (((cStack_23 != '\0' || (cStack_22 != '\0')) || (cStack_21 != '\0')))))) {
        bStack_3c = bStack_3c | 0x20;
    }
    *a0 = (short)a2 - *a0;
    if ((((bStack_44 != 0) || (cStack_43 != '\0')) ||
         (((cStack_42 != '\0' || ((cStack_41 != '\0' || (cStack_40 != '\0')))) || (cStack_3f != '\0')))) ||
        (((cStack_3e != '\0' || (*ain0 != '\0')) || (bStack_3c != 0)))) {
        while ((bStack_44 & 0x80) == 0) {
            bytes_shl1(&bStack_44, 9);
            *a0 = *a0 + -1;
        }
    }
    uVar2 = memmove(a1, &bStack_44, 9);
    return uVar2;
}

/*
 * double_inf_or_nan  0x8c010df4
 * 2 for an infinite double fr4:fr5, 1 for NaN, else 0
 * called by: libc_uses_double_inf_or_nan_012734, libm_frexp
 */
u32 double_inf_or_nan(void) {
    int in_fr5;
    u32 in_fr4;

    if ((in_fr4 & 0x7ff00000) != 0x7ff00000) {
        return 0;
    }
    if (((in_fr4 & 0xfffff) == 0) && (in_fr5 == 0)) {
        return 2;
    }
    return 1;
}

/*
 * float_check_errno  0x8c010e38
 * sets errno 0x44c (inf) or 0x44d (NaN) for a non-finite fr4
 * called by: Class_12a990_uses_float_check_errno_09b6c4, Class_12b580_uses_njSinCos_0e705c, Vec3_state_switch_03f4a4,
 * game_draw_0d4124, game_draw_0d4428, game_state_switch_049b68, game_state_switch_04b168, game_state_switch_07ff08 (+4
 * more)
 */
u32 float_check_errno(u32 unused_a0, u32 unused_a1, u32 unused_a2, u32 unused_a3, u32 ain0) {
    u32 in_fr4;

    if ((in_fr4 & 0x7f800000) == 0x7f800000) {
        if ((in_fr4 & 0x7fffff) == 0) {
            g_8c2787a8 = 0x44c;
        } else {
            g_8c2787a8 = 0x44d;
        }
    }
    return ain0;
}

/*
 * format_output  0x8c010e84
 * printf core used by sprintf (mode, stream, buffer, format)
 * called by: sprintf, vsprintf_like
 */
u32 format_output(int a0, u8 *a1, int *a2, u8 *a3) {
    u8 bVar1;
    int iVar2;
    u32 uVar3;
    u32 *puVar4;
    u32 *puVar5;
    int iVar6;
    u32 uVar7;
    u8 *a7;
    u8 *pbVar8;
    u8 *pbVar9;
    u32 in_stack_00000000;
    u8 *pbStack_f0;
    u8 *pbStack_ec;
    u8 auStack_e8[4];
    u8 *pbStack_e4;
    u8 *pbStack_e0;
    u8 abStack_dc[128];
    u8 abStack_5c[4];
    int iStack_58;
    u8 *pbStack_54;
    int iStack_50;
    u8 *pbStack_4c;
    u8 *pbStack_48;
    u32 uStack_44;
    int iStack_40;
    int iStack_3c;
    int iStack_38;
    int iStack_34;
    int iStack_30;
    u32 uStack_28;

    abStack_5c[1] = 0;
    abStack_5c[2] = 0;
    abStack_5c[3] = 0;
    iStack_58 = 0;
    pbStack_54 = NULL;
    pbStack_4c = NULL;
    pbStack_48 = NULL;
    uStack_44 = 0;
    iStack_40 = 0;
    iStack_3c = 0;
    iStack_38 = 0;
    iStack_34 = 0;
    a7 = a3;
    if (a0 == 0) {
        if (a2 == NULL) {
            g_8c2787a8 = 0x452;
            return 0xffffffff;
        }
        if ((*(u8 *)(a2 + 4) & 7) == 0) {
            g_8c2787a8 = 0x514;
            return 0xffffffff;
        }
        a7 = (u8 *)(int)(char)a2[4];
        if ((((u32)a7 & 4) == 0) && (((u32)a7 & 1) != 0)) {
            g_8c2787a8 = 0x516;
            return 0xffffffff;
        }
    }
    uStack_28 = 0;
    abStack_5c[0] = 0;
    auStack_e8[0] = 0x30;
    iStack_30 = a0;
    iVar2 = libc_test_011836(&iStack_30);
    if (iVar2 != 0) {
        return 0xffffffff;
    }
    pbStack_e0 = abStack_dc;
    do {
        while (true) {
            if (((*a3 == 0) || (iVar2 = libc_test_011836(&iStack_30), iVar2 != 0)) || ((abStack_5c[0] & 1) != 0)) {
                libc_calc_011826(&iStack_30);
                return uStack_28;
            }
            pbStack_f0 = a3;
            if (*a3 == 0x25)
                break;
            for (; (*pbStack_f0 != 0 && (*pbStack_f0 != 0x25)); pbStack_f0 = pbStack_f0 + 1) {
            }
            a1 = pbStack_f0 + -(int)a3;
            a2 = &iStack_30;
            printf_emit_chars(a3, a1, &iStack_30);
            a3 = pbStack_f0;
        }
        abStack_5c[0] = 0;
        uStack_44 = 0;
        iStack_40 = 0;
        iStack_3c = 0;
        iStack_38 = 0;
        iStack_34 = 0;
        while (true) {
            pbVar8 = a3 + 1;
            bVar1 = *pbVar8;
            if (((bVar1 != 0x2d) && (bVar1 != 0x2b)) && ((bVar1 != 0x20 && (bVar1 != 0x23))))
                break;
            bVar1 = *pbVar8;
            a3 = pbVar8;
            if (bVar1 == 0x2d) {
                abStack_5c[0] = abStack_5c[0] | 2;
            } else if (bVar1 == 0x2b) {
                abStack_5c[0] = abStack_5c[0] | 8;
            } else if (bVar1 == 0x20) {
                if ((abStack_5c[0] & 8) == 0) {
                    abStack_5c[0] = abStack_5c[0] | 0x10;
                }
            } else if (bVar1 == 0x23) {
                abStack_5c[0] = abStack_5c[0] | 4;
            }
        }
        abStack_5c[1] = 0x20;
        if (*pbVar8 == 0x30) {
            pbVar8 = a3 + 2;
            abStack_5c[1] = 0x30;
        }
        iStack_58 = 0;
        if (*pbVar8 == 0x2a) {
            uVar3 = in_stack_00000000 + 4;
            if ((uVar3 & 3) != 0) {
                uVar3 = in_stack_00000000 + 8;
            }
            a1 = (u8 *)(uVar3 - 4);
            pbVar9 = a1;
            if (((u32)a1 & 3) != 0) {
                pbVar9 = (u8 *)(uVar3 - 8);
            }
            iStack_58 = *(int *)pbVar9;
            if (iStack_58 < 0) {
                abStack_5c[0] = abStack_5c[0] | 2;
                iStack_58 = -iStack_58;
            }
            pbVar8 = pbVar8 + 1;
            in_stack_00000000 = uVar3;
            if (0x200 < iStack_58) {
                abStack_5c[0] = abStack_5c[0] | 1;
                g_8c2787a8 = 0x518;
            }
        }
        pbStack_4c = abStack_dc;
        pbStack_48 = abStack_dc;
        if (((&g_8c125470)[*pbVar8] & 4) != 0) {
            iStack_58 = 0;
            while (((&g_8c125470)[*pbVar8] & 4) != 0) {
                iVar6 = (char)*pbVar8 + -0x30;
                iVar2 = libgcc_divide_helper_010468(0x200 - iVar6, 10);
                pbVar8 = pbVar8 + 1;
                if (iVar2 < iStack_58) {
                    abStack_5c[0] = abStack_5c[0] | 1;
                    g_8c2787a8 = 0x518;
                } else {
                    iStack_58 = iStack_58 * 10 + iVar6;
                }
            }
        }
        pbStack_54 = (u8 *)0xffffffff;
        pbVar9 = pbVar8;
        if (*pbVar8 == 0x2e) {
            pbVar9 = pbVar8 + 1;
            if (*pbVar9 == 0x2a) {
                uVar3 = in_stack_00000000 + 4;
                if ((uVar3 & 3) != 0) {
                    uVar3 = in_stack_00000000 + 8;
                }
                a1 = (u8 *)(uVar3 - 4);
                pbStack_54 = a1;
                if (((u32)a1 & 3) != 0) {
                    pbStack_54 = (u8 *)(uVar3 - 8);
                }
                pbStack_54 = *(u8 **)pbStack_54;
                if ((int)pbStack_54 < 0) {
                    pbStack_54 = (u8 *)0xffffffff;
                }
                pbVar9 = pbVar8 + 2;
                in_stack_00000000 = uVar3;
                if (0x200 < (int)pbStack_54) {
                    abStack_5c[0] = abStack_5c[0] | 1;
                    g_8c2787a8 = 0x518;
                }
            }
            if (((&g_8c125470)[*pbVar9] & 4) != 0) {
                pbStack_54 = NULL;
                while (((&g_8c125470)[*pbVar9] & 4) != 0) {
                    iVar6 = (char)*pbVar9 + -0x30;
                    iVar2 = libgcc_divide_helper_010468(0x200 - iVar6, 10);
                    pbVar9 = pbVar9 + 1;
                    if (iVar2 < (int)pbStack_54) {
                        abStack_5c[0] = abStack_5c[0] | 1;
                        g_8c2787a8 = 0x518;
                    } else {
                        pbStack_54 = (u8 *)((int)pbStack_54 * 10 + iVar6);
                    }
                }
            }
        }
        iStack_50 = 0x20;
        bVar1 = *pbVar9;
        if (((bVar1 == 0x68) || (bVar1 == 0x6c)) || (bVar1 == 0x4c)) {
            iStack_50 = (int)(char)*pbVar9;
            pbVar9 = pbVar9 + 1;
        }
        bVar1 = *pbVar9;
        if (((((bVar1 == 100) || (bVar1 == 0x69)) || (bVar1 == 0x6f)) || ((bVar1 == 0x75 || (bVar1 == 0x78)))) ||
            (bVar1 == 0x58)) {
            if (iStack_50 == 0x6c) {
                uVar7 = in_stack_00000000 + 4;
                if ((uVar7 & 3) != 0) {
                    uVar7 = in_stack_00000000 + 8;
                }
                puVar5 = (u32 *)(uVar7 - 4);
                if (((u32)puVar5 & 3) != 0) {
                    puVar5 = (u32 *)(uVar7 - 8);
                }
                uVar3 = *puVar5;
                in_stack_00000000 = uVar7;
            } else if (iStack_50 == 0x68) {
                bVar1 = *pbVar9;
                if ((((bVar1 == 0x75) || (bVar1 == 0x58)) || (bVar1 == 0x78)) || (bVar1 == 0x6f)) {
                    uVar7 = in_stack_00000000 + 4;
                    if ((uVar7 & 3) != 0) {
                        uVar7 = in_stack_00000000 + 8;
                    }
                    puVar5 = (u32 *)(uVar7 - 4);
                    if (((u32)puVar5 & 3) != 0) {
                        puVar5 = (u32 *)(uVar7 - 8);
                    }
                    uVar3 = *puVar5 & 0xffff;
                    in_stack_00000000 = uVar7;
                } else {
                    uVar7 = in_stack_00000000 + 4;
                    if ((uVar7 & 3) != 0) {
                        uVar7 = in_stack_00000000 + 8;
                    }
                    puVar4 = (u32 *)(uVar7 - 4);
                    if (((u32)puVar4 & 3) != 0) {
                        puVar4 = (u32 *)(uVar7 - 8);
                    }
                    uVar3 = (u32)(short)*puVar4;
                    in_stack_00000000 = uVar7;
                }
            } else {
                bVar1 = *pbVar9;
                if (((bVar1 == 0x75) || (bVar1 == 0x58)) || ((bVar1 == 0x78 || (bVar1 == 0x6f)))) {
                    uVar3 = in_stack_00000000 + 4;
                    if ((uVar3 & 3) != 0) {
                        uVar3 = in_stack_00000000 + 8;
                    }
                    puVar5 = (u32 *)(uVar3 - 4);
                    in_stack_00000000 = uVar3;
                    if (((u32)puVar5 & 3) != 0) {
                        puVar5 = (u32 *)(uVar3 - 8);
                    }
                } else {
                    uVar3 = in_stack_00000000 + 4;
                    if ((uVar3 & 3) != 0) {
                        uVar3 = in_stack_00000000 + 8;
                    }
                    puVar5 = (u32 *)(uVar3 - 4);
                    in_stack_00000000 = uVar3;
                    if (((u32)puVar5 & 3) != 0) {
                        puVar5 = (u32 *)(uVar3 - 8);
                    }
                }
                uVar3 = *puVar5;
            }
            if (pbStack_54 == (u8 *)0xffffffff) {
                pbStack_54 = (u8 *)0x1;
            }
            a2 = (int *)(int)(char)*pbVar9;
            a1 = abStack_dc;
            a7 = abStack_5c;
            libc_uses_libgcc_divide_helper_0115c4(uVar3, abStack_dc, a2, abStack_5c);
            pbStack_e4 = (u8 *)log_message(abStack_dc, a1, a2);
            pbStack_ec = abStack_dc;
        } else if (((bVar1 == 0x66) || (bVar1 == 0x65)) || ((bVar1 == 0x45 || ((bVar1 == 0x67 || (bVar1 == 0x47)))))) {
            a2 = (int *)(int)(char)*pbVar9;
            a1 = abStack_dc;
            a7 = abStack_5c;
            libc_uses_log_message_013374(&stack0x00000000, abStack_dc, a2, abStack_5c);
            pbStack_e4 = (u8 *)log_message(abStack_dc, a1, a2);
            pbStack_ec = abStack_dc;
        } else if (bVar1 == 99) {
            uVar3 = in_stack_00000000 + 4;
            if ((uVar3 & 3) != 0) {
                uVar3 = in_stack_00000000 + 8;
            }
            a1 = (u8 *)(uVar3 - 4);
            pbVar8 = a1;
            if (((u32)a1 & 3) != 0) {
                pbVar8 = (u8 *)(uVar3 - 8);
            }
            *pbStack_e0 = (u8) * (u32 *)pbVar8;
            in_stack_00000000 = uVar3;
        LAB_8c011442:
            pbStack_e4 = (u8 *)0x1;
            iStack_3c = 0;
            iStack_34 = iStack_58 + -1;
            pbStack_ec = abStack_dc;
            pbStack_48 = abStack_dc;
        } else if (bVar1 == 0x73) {
            uVar3 = in_stack_00000000 + 4;
            if ((uVar3 & 3) != 0) {
                uVar3 = in_stack_00000000 + 8;
            }
            a1 = (u8 *)(uVar3 - 4);
            pbVar8 = a1;
            if (((u32)a1 & 3) != 0) {
                pbVar8 = (u8 *)(uVar3 - 8);
            }
            pbStack_ec = *(u8 **)pbVar8;
            in_stack_00000000 = uVar3;
            pbStack_e4 = (u8 *)log_message(pbStack_ec, a1, a2);
            if ((pbStack_54 != (u8 *)0xffffffff) && ((int)pbStack_54 < (int)pbStack_e4)) {
                pbStack_e4 = pbStack_54;
            }
            iStack_3c = 0;
            iStack_34 = iStack_58 - (int)pbStack_e4;
            pbStack_48 = abStack_dc;
        } else if (bVar1 == 0x70) {
            uVar3 = in_stack_00000000 + 4;
            if ((uVar3 & 3) != 0) {
                uVar3 = in_stack_00000000 + 8;
            }
            puVar4 = (u32 *)(uVar3 - 4);
            if (((u32)puVar4 & 3) != 0) {
                puVar4 = (u32 *)(uVar3 - 8);
            }
            if (pbStack_54 == (u8 *)0xffffffff) {
                pbStack_54 = (u8 *)0x1;
            }
            a2 = (int *)0x78;
            a1 = abStack_dc;
            a7 = abStack_5c;
            in_stack_00000000 = uVar3;
            libc_uses_libgcc_divide_helper_0115c4(*puVar4, abStack_dc, 0x78, abStack_5c);
            pbStack_e4 = (u8 *)log_message(abStack_dc, a1, a2);
            pbStack_ec = abStack_dc;
        } else if (bVar1 == 0x6e) {
            uVar3 = in_stack_00000000 + 4;
            if ((uVar3 & 3) != 0) {
                uVar3 = in_stack_00000000 + 8;
            }
            a1 = (u8 *)(uVar3 - 4);
            pbVar8 = a1;
            if (((u32)a1 & 3) != 0) {
                pbVar8 = (u8 *)(uVar3 - 8);
            }
            **(u32 **)pbVar8 = uStack_28;
            in_stack_00000000 = uVar3;
        } else {
            if (bVar1 == 0x25) {
                *pbStack_e0 = 0x25;
                goto LAB_8c011442;
            }
            g_8c2787a8 = 0x518;
            abStack_5c[0] = abStack_5c[0] | 1;
        }
        if ((*pbVar9 != 0x6e) && ((abStack_5c[0] & 1) == 0)) {
            if (((abStack_5c[0] & 2) == 0) && (0 < iStack_34)) {
                for (; 0 < iStack_34; iStack_34 = iStack_34 + -1) {
                    printf_emit_chars(abStack_5c + 1, 1, &iStack_30);
                }
            }
            if (((iStack_40 == 0) && (iStack_3c == 0)) && (iStack_38 == 0)) {
                a1 = pbStack_e4;
                a2 = &iStack_30;
                printf_emit_chars(pbStack_ec, pbStack_e4, &iStack_30);
            } else {
                iVar2 = (int)pbStack_4c - (int)pbStack_ec;
                if (0 < iVar2) {
                    printf_emit_chars(pbStack_ec, iVar2, &iStack_30);
                }
                for (; 0 < iStack_40; iStack_40 = iStack_40 + -1) {
                    printf_emit_chars(auStack_e8, 1, &iStack_30);
                }
                iVar6 = (int)pbStack_48 - (int)pbStack_4c;
                if (0 < iVar6) {
                    printf_emit_chars(pbStack_4c, iVar6, &iStack_30);
                }
                for (; 0 < iStack_3c; iStack_3c = iStack_3c + -1) {
                    printf_emit_chars(auStack_e8, 1, &iStack_30);
                }
                a1 = pbStack_e4 + -(iVar2 + iVar6);
                a2 = &iStack_30;
                printf_emit_chars(pbStack_48, a1, &iStack_30);
                for (; 0 < iStack_38; iStack_38 = iStack_38 + -1) {
                    a1 = (u8 *)0x1;
                    a2 = &iStack_30;
                    printf_emit_chars(auStack_e8, 1, &iStack_30);
                }
            }
            if (((abStack_5c[0] & 2) != 0) && (0 < iStack_34)) {
                for (; 0 < iStack_34; iStack_34 = iStack_34 + -1) {
                    a1 = (u8 *)0x1;
                    a2 = &iStack_30;
                    printf_emit_chars(abStack_5c + 1, 1, &iStack_30);
                }
            }
        }
        a3 = pbVar9 + 1;
    } while (true);
}

/*
 * libc_uses_libgcc_divide_helper_0115c4  0x8c0115c4
 * area name: in the libc library code range; behaviour name: its main named callee is libgcc_divide_helper_0106dc
 * called by: format_output
 */
int libc_uses_libgcc_divide_helper_0115c4(int a0, char *a1, int a2, u8 *a3) {
    char cVar1;
    u32 uVar2;
    int iVar3;
    char *pcVar4;
    u8 *extraout_r2;
    char *pcVar5;
    u32 unaff_r8;
    int iVar6;
    int iVar7;
    char acStack_2d[17];

    *a1 = '\0';
    if (((a2 == 100) || (a2 == 0x69)) || (a2 == 0x75)) {
        unaff_r8 = 10;
    } else if (a2 == 0x6f) {
        unaff_r8 = 8;
    } else if ((a2 == 0x78) || (a2 == 0x58)) {
        unaff_r8 = 0x10;
    }
    iVar3 = a0;
    if (((a2 == 100) || (a2 == 0x69)) && (a0 < 0)) {
        iVar3 = -a0;
    }
    iVar7 = 0;
    iVar6 = 0;
    pcVar5 = a1;
    if ((iVar3 == 0) && (*(int *)(a3 + 8) != 0)) {
        acStack_2d[1] = 0x30;
        iVar7 = 1;
    } else {
        while (iVar3 != 0) {
            uVar2 = libgcc_divide_helper_0106dc(iVar3, unaff_r8);
            *extraout_r2 = (char)uVar2;
            if (acStack_2d[iVar7 + 1] < '\n') {
                acStack_2d[iVar7 + 1] = acStack_2d[iVar7 + 1] + '0';
            } else {
                pcVar4 = acStack_2d + iVar7 + 1;
                if (a2 == 0x78) {
                    *pcVar4 = *pcVar4 + 'W';
                } else {
                    *pcVar4 = *pcVar4 + '7';
                }
            }
            iVar3 = libgcc_divide_helper_01051c(iVar3, unaff_r8);
            iVar7 = iVar7 + 1;
        }
    }
    if ((*a3 & 4) != 0) {
        if (a2 == 0x6f) {
            if (a0 != 0) {
                acStack_2d[iVar7 + 1] = '0';
                iVar7 = iVar7 + 1;
            }
        } else if (((a2 == 0x78) || (a2 == 0x58)) && (a0 != 0)) {
            *pcVar5 = '0';
            pcVar5[1] = (char)a2;
            iVar6 = 2;
            pcVar5 = pcVar5 + 2;
        }
    }
    iVar6 = iVar6 + iVar7;
    if (((a2 == 100) || (a2 == 0x69)) && ((*(int *)(a3 + 8) != 0 || (a0 != 0)))) {
        if (a0 < 0) {
            *pcVar5 = '-';
        } else {
            if ((*a3 & 8) == 0) {
                if ((*a3 & 0x10) != 0) {
                    *pcVar5 = ' ';
                    iVar6 = iVar6 + 1;
                    pcVar5 = pcVar5 + 1;
                }
                goto LAB_8c011706;
            }
            *pcVar5 = '+';
        }
        iVar6 = iVar6 + 1;
        pcVar5 = pcVar5 + 1;
    }
LAB_8c011706:
    cVar1 = *a1;
    if (((cVar1 == '+') || (cVar1 == '-')) || (cVar1 == ' ')) {
        *(char **)(a3 + 0x14) = a1 + 1;
    } else if ((*a3 & 4) == 0) {
        *(char **)(a3 + 0x14) = a1;
    } else if ((a2 == 0x58) || (a2 == 0x78)) {
        *(char **)(a3 + 0x14) = a1 + 2;
    } else if (a2 == 0x6f) {
        *(char **)(a3 + 0x14) = a1 + 1;
    }
    if (iVar6 < *(int *)(a3 + 8)) {
        *(int *)(a3 + 0x20) = *(int *)(a3 + 8) - iVar6;
        iVar6 = *(int *)(a3 + 8);
    } else {
        a3[0x20] = 0;
        a3[0x21] = 0;
        a3[0x22] = 0;
        a3[0x23] = 0;
    }
    iVar3 = (int)*a1;
    if (((iVar3 == 0x2b) || (iVar3 == 0x2d)) || (iVar3 == 0x20)) {
        if (iVar6 < *(int *)(a3 + 4)) {
            iVar3 = (int)(char)a3[1];
            if (iVar3 == 0x30) {
                *(int *)(a3 + 0x20) = *(int *)(a3 + 0x20) + (*(int *)(a3 + 4) - iVar6);
                a3[0x28] = 0;
                a3[0x29] = 0;
                a3[0x2a] = 0;
                a3[0x2b] = 0;
                goto joined_r0x8c0117a8;
            }
            goto LAB_8c011792;
        }
    } else {
    LAB_8c011792:
        if (iVar6 < *(int *)(a3 + 4)) {
            *(int *)(a3 + 0x28) = *(int *)(a3 + 4) - iVar6;
            goto joined_r0x8c0117a8;
        }
    }
    a3[0x28] = 0;
    a3[0x29] = 0;
    a3[0x2a] = 0;
    a3[0x2b] = 0;
joined_r0x8c0117a8:
    while (iVar6 = iVar7 + -1, -1 < iVar6) {
        *pcVar5 = acStack_2d[iVar7];
        pcVar5 = pcVar5 + 1;
        iVar3 = iVar6;
        iVar7 = iVar6;
    }
    *pcVar5 = '\0';
    return iVar3;
}

/*
 * printf_emit_chars  0x8c0117ce
 * writes a1 characters to the printf target: copied into the string buffer (mode 1) or sent one by one through its
 * put-char callback called by: format_output
 */
int printf_emit_chars(char *a0, int a1, int *a2) {
    char cVar1;
    int iVar2;
    int iVar3;

    iVar2 = *a2;
    if (iVar2 == 1) {
        iVar2 = memmove(a2[1], a0, a1);
        a2[1] = a2[1] + a1;
        a2[2] = a2[2] + a1;
    } else {
        iVar3 = 0;
        if (0 < a1) {
            do {
                cVar1 = *a0;
                a0 = a0 + 1;
                iVar2 = (*(code *)a2[3])((int)cVar1, a2[1]);
                if (iVar2 == -1) {
                    return 0xffffffff;
                }
                iVar3 = iVar3 + 1;
                a2[2] = a2[2] + 1;
            } while (iVar3 < a1);
        }
    }
    return iVar2;
}

/*
 * alt_entry_0117da  0x8c0117da
 * probably an entry 12 bytes into 8c0117ce: it reads registers that code sets before it
 */
int alt_entry_0117da(u32 unused_a0, int a1, u32 a2, u32 a3) {
    char cVar1;
    int iVar2;
    char *unaff_r11;
    int iVar3;
    int *unaff_r14;

    iVar2 = *unaff_r14;
    if (iVar2 == 1) {
        iVar2 = memmove(unaff_r14[1], unaff_r11, a1);
        unaff_r14[1] = unaff_r14[1] + a1;
        unaff_r14[2] = unaff_r14[2] + a1;
    } else {
        iVar3 = 0;
        if (0 < a1) {
            do {
                cVar1 = *unaff_r11;
                unaff_r11 = unaff_r11 + 1;
                iVar2 = (*(code *)unaff_r14[3])((int)cVar1, unaff_r14[1], a2, a3);
                if (iVar2 == -1) {
                    return 0xffffffff;
                }
                iVar3 = iVar3 + 1;
                unaff_r14[2] = unaff_r14[2] + 1;
            } while (iVar3 < a1);
        }
    }
    return iVar2;
}

/*
 * libc_calc_011826  0x8c011826
 * area name: in the libc library code range; behaviour name: integer arithmetic on its arguments
 * called by: format_output
 */
int libc_calc_011826(int *a0) {
    int iVar1;

    iVar1 = *a0;
    if (iVar1 == 1) {
        *(u8 *)a0[1] = 0;
    }
    return iVar1;
}

/*
 * libc_test_011836  0x8c011836
 * area name: in the libc library code range; behaviour name: returns the result of a comparison
 * called by: format_output
 */
u32 libc_test_011836(int *a0) {
    if (*a0 == 1) {
        return 0;
    }
    return (int)*(char *)(a0[1] + 0x10) & 0x40;
}

/*
 * libc_uses_busy_wait_5_011850  0x8c011850
 * area name: in the libc library code range; behaviour name: its callees mostly do: uses_busy_wait_5
 * called by: libm_errno_wrap_013aec, libm_errno_wrap_013b3c
 */
u32 libc_uses_busy_wait_5_011850(void) {
    u32 uVar1;

    uVar1 = libc_uses_busy_wait_5_01186c();
    return uVar1;
}

/*
 * libc_uses_busy_wait_5_01186c  0x8c01186c
 * area name: in the libc library code range; behaviour name: its callees mostly do: uses_busy_wait_5
 * called by: libc_uses_busy_wait_5_011850
 */
u32 libc_uses_busy_wait_5_01186c(void) {
    u32 uVar1;
    u32 ar4_00;
    u32 *ar5_00;
    u32 ar6_00;
    u32 ar7_00;
    float ain0;
    u64 in_dr4;

    uVar1 = 4;
    ain0 = (float)(in_dr4 >> 0x20);
    ar4_00 = 0;
    if ((s64)in_dr4 < 0) {
        ar4_00 = 8;
    }
    ar7_00 = 4;
    ar6_00 = 1;
    if (ain0 == 0.0) {
        ar4_00 = ar4_00 | 4;
    } else if (ABS(ain0) == INFINITY) {
        uVar1 = 2;
        ar4_00 = ar4_00 | 2;
    }
    ar5_00 = &g_8c1257f8;
    if ((in_dr4 & 0x8000000000000000) != 0) {
        ain0 = -ain0;
    }
    if (((ain0 <= 1.0) && (ain0 != 1.0)) && ((ar4_00 & 4) == 0)) {
        libc_uses_busy_wait_5_011960(ar4_00, &g_8c1257f8, 1, 4);
        uVar1 = libc_calc_011d50(1, ar5_00, ar6_00, ar7_00, ain0);
    }
    return uVar1;
}

/*
 * libc_uses_busy_wait_5_011960  0x8c011960
 * area name: in the libc library code range; behaviour name: its main named callee is busy_wait_5
 * called by: libc_uses_busy_wait_5_01186c, libc_uses_busy_wait_5_011b44
 */
u32 libc_uses_busy_wait_5_011960(u32 unused_a0, u32 a1, u32 a2, u32 a3) {
    u32 uVar1;
    u32 ar5_00;
    int *ar4_00;
    u32 ar6_00;
    u32 ar7_00;
    float ain0;
    u64 in_dr4;
    u64 in_dr12;
    u64 in_dr14;
    int iStack_24;
    float fStack_20;
    u32 uStack_18;
    u32 uStack_14;
    u32 uStack_10;
    u32 uStack_c;

    uStack_c = (u32)in_dr14;
    uStack_10 = (u32)((u64)in_dr14 >> 0x20);
    uStack_14 = (u32)in_dr12;
    uStack_18 = (u32)((u64)in_dr12 >> 0x20);
    fStack_20 = (float)(in_dr4 >> 0x20);
    ar5_00 = 0;
    if ((s64)in_dr4 < 0) {
        ar5_00 = 8;
    }
    ar7_00 = 4;
    ar6_00 = 1;
    if (fStack_20 == 0.0) {
        ar5_00 = ar5_00 | 4;
    } else if (ABS(fStack_20) == INFINITY) {
        ar5_00 = ar5_00 | 2;
    }
    ain0 = fStack_20;
    if ((in_dr4 & 0x8000000000000000) != 0) {
        ain0 = -fStack_20;
    }
    uVar1 = 0x20;
    if (((((int)((u32)ain0 & 0x7f800000) >> 0x17) + -0x7f < 0x20) && ((ar5_00 & 4) == 0)) &&
        ((ain0 < 1.0 || (ain0 != 1.0)))) {
        ar4_00 = &iStack_24;
        libc_float_calc_011c5c(ar4_00, ar5_00, 1, 4, ain0);
        if (iStack_24 != 0) {
            if ((iStack_24 == 1) || (iStack_24 == 2)) {
                ar4_00 = (int *)0xfffffffe;
                libc_calc_011d50(0xfffffffe, ar5_00, ar6_00, ar7_00, ain0);
            } else if ((iStack_24 == 3) || (iStack_24 == 4)) {
                ar4_00 = (int *)0xffffffff;
                libc_calc_011d50(0xffffffff, ar5_00, ar6_00, ar7_00, ain0);
            } else if ((((iStack_24 != 5) && (iStack_24 != 6)) && (iStack_24 != 7)) && (iStack_24 != 8)) {
                return iStack_24;
            }
        }
        uVar1 = busy_wait_5();
    }
    return uVar1;
}

/*
 * libc_uses_busy_wait_5_011b44  0x8c011b44
 * area name: in the libc library code range; behaviour name: its callees mostly do: uses_busy_wait_5
 * called by: libm_errno_wrap_013b8c
 */
u32 libc_uses_busy_wait_5_011b44(u32 unused_a0, u32 a1, u32 a2, u32 a3) {
    u32 uVar1;

    uVar1 = libc_uses_busy_wait_5_011960(unused_a0, a1, a2, a3);
    return uVar1;
}

/*
 * libc_float_calc_011b9c  0x8c011b9c
 * area name: in the libc library code range; behaviour name: floating-point arithmetic
 * called by: libm_errno_wrap_013be8
 */
int libc_float_calc_011b9c(u32 unused_a0, u32 unused_a1, u32 unused_a2, u32 unused_a3, int ain0) {
    u64 in_dr4;
    float fVar1;

    fVar1 = (float)(in_dr4 >> 0x20);
    if (((u32)fVar1 & 0x7f800000) < 0x4b000000) {
        ain0 = (int)fVar1;
    }
    if ((in_dr4 & 0x8000000000000000) == 0) {
        ain0 = 4;
    }
    return ain0;
}

/*
 * libc_float_calc_011bfc  0x8c011bfc
 * area name: in the libc library code range; behaviour name: floating-point arithmetic
 * called by: libm_errno_wrap_013d28
 */
int libc_float_calc_011bfc(u32 unused_a0, u32 unused_a1, u32 unused_a2, u32 unused_a3, int ain0) {
    u64 in_dr4;
    float fVar1;

    fVar1 = (float)(in_dr4 >> 0x20);
    if (((u32)fVar1 & 0x7f800000) < 0x4b000000) {
        ain0 = (int)fVar1;
    }
    if ((in_dr4 & 0x8000000000000000) != 0) {
        ain0 = 4;
    }
    return ain0;
}

/*
 * libc_float_calc_011c5c  0x8c011c5c
 * area name: in the libc library code range; behaviour name: floating-point arithmetic
 * called by: libc_uses_busy_wait_5_011960, libc_uses_delay_loop_6_011e10, libc_uses_delay_loop_6_012328
 */
u32 *libc_float_calc_011c5c(int *a0, u32 a1, u32 a2, u32 a3, u32 *ain0) {
    u32 uVar1;
    float fVar2;
    u64 in_dr4;
    float fVar3;
    float fStack_14;

    fVar3 = (float)(in_dr4 >> 0x20);
    fVar2 = (float)in_dr4;
    if ((((u32)fVar3 & 0x7f800000) == 0x7f800000) ||
        (((((u32)fVar2 & 0x7f800000) == 0x7f800000 && ((in_dr4 & 0x7fffff) != 0)) ||
          (ain0 = (u32 *)0x14, fVar2 == 0.0)))) {
        *a0 = 0;
    } else if (((u32)fVar2 & 0x7f800000) == 0x7f800000) {
        *a0 = 0;
    } else {
        fStack_14 = ABS(fVar3) / ABS(fVar2);
        uVar1 = (u32)fStack_14 & 0x80000000;
        if (((u32)fStack_14 & 0x7f800000) < 0x4b000000) {
            fStack_14 = (float)(int)fStack_14;
        }
        fStack_14 = (float)((u32)fStack_14 | uVar1);
        ain0 = &g_8c011d48;
        if (2.1474836e+09 < fStack_14) {
            ain0 = &g_8c011d4c;
            fStack_14 = fStack_14 + -4.2949673e+09;
        }
        *a0 = (int)fStack_14;
    }
    return ain0;
}

/*
 * libc_calc_011d50  0x8c011d50
 * area name: in the libc library code range; behaviour name: integer arithmetic on its arguments
 * called by: libc_uses_busy_wait_5_01186c, libc_uses_busy_wait_5_011960, libc_uses_libm_exp_0121bc, libm_exp
 */
u32 libc_calc_011d50(int a0, u32 unused_a1, u32 unused_a2, u32 a3, u32 ain0) {
    u32 uVar1;
    int iVar2;
    u64 in_dr4;

    uVar1 = (u32)(in_dr4 >> 0x20) & 0x7f800000;
    if (uVar1 != 0x7f800000) {
        if ((in_dr4 & 0x7f80000000000000) != 0) {
            iVar2 = ((int)uVar1 >> 0x17) + a0;
            if ((0 < iVar2) && (iVar2 < 0xff)) {
                return ain0;
            }
            if (-1 < a0)
                goto joined_r0x8c011d76;
        }
        if ((in_dr4 & 0x8000000000000000) != 0) {
            return ain0;
        }
        return ain0;
    }
    ain0 = 0x7fffff;
    if ((in_dr4 & 0x7fffff00000000) != 0) {
        return ain0;
    }
joined_r0x8c011d76:
    if ((in_dr4 & 0x8000000000000000) != 0) {
        return ain0;
    }
    return ain0;
}

/*
 * libc_uses_delay_loop_6_011e10  0x8c011e10
 * area name: in the libc library code range; behaviour name: its main named callee is delay_loop_6
 * called by: libm_errno_wrap_013c38, libm_errno_wrap_013c88
 */
u32 libc_uses_delay_loop_6_011e10(u32 unused_a0, u32 unused_a1, u32 a2, u32 a3) {
    u32 uVar1;
    u32 uVar2;
    u8 *ar4_00;
    u32 ar5_00;
    double in_dr0;
    float extraout_fr3;
    float fVar3;
    u32 extraout_fr2;
    u32 uVar4;
    s64 in_dr4;
    bool bVar5;
    char cVar6;
    char cVar7;
    u32 in_stack_fffffff4;

    cVar7 = '\0';
    cVar6 = '\0';
    ar4_00 = &stack0xfffffff4;
    fVar3 = (float)((u64)in_dr4 >> 0x20);
    uVar2 = 0;
    ar5_00 = 8;
    if (in_dr4 < 0) {
        uVar2 = 8;
    }
    if (fVar3 == 0.0) {
        uVar2 = uVar2 | 4;
    } else if (ABS(fVar3) == INFINITY) {
        uVar2 = uVar2 | 2;
    }
    if ((uVar2 & 3) != 0) {
        return uVar2;
    }
    uVar4 = 0x3f490fdb;
    uVar1 = libc_float_calc_011c5c(&stack0xfffffff4, 8, a2, a3, in_stack_fffffff4);
    fVar3 = extraout_fr3;
    if (cVar7 == '\0') {
        in_dr0 = (double)CONCAT44((int)((u64)in_dr0 >> 0x20), uVar4);
        fVar3 = 0.7853982;
    }
    if (cVar6 == '\0') {
        bVar5 = fVar3 < (float)((u64)in_dr0 >> 0x20);
    } else {
        bVar5 = (double)CONCAT44(extraout_fr2, fVar3) < in_dr0;
    }
    if (bVar5) {
        return uVar1;
    }
    uVar2 = in_stack_fffffff4 & 7;
    if ((uVar2 == 0) || (uVar2 == 7)) {
        uVar2 = delay_loop_6();
    } else if ((uVar2 == 1) || (uVar2 == 2)) {
        uVar2 = delay_loop_6_010ad4();
    } else if ((uVar2 == 3) || (uVar2 == 4)) {
        uVar2 = delay_loop_6();
    } else if ((uVar2 == 5) || (uVar2 == 6)) {
        uVar2 = delay_loop_6_010ad4();
    }
    return uVar2;
}

/*
 * libm_exp  0x8c011f18
 * expf-style: splits x * log2(e) into an integer and a fraction and evaluates the table polynomial (handles zero,
 * infinity and large inputs) called by: libc_uses_libm_exp_0121bc, libm_errno_wrap_013cd8
 */
u32 libm_exp(void) {
    u32 uVar1;
    u32 uVar2;
    int iVar3;
    int ar6_00;
    float fVar4;
    s64 in_dr4;
    int ar4_00;
    float fStack_c;

    fVar4 = (float)((u64)in_dr4 >> 0x20);
    uVar2 = 0;
    if (in_dr4 < 0) {
        uVar2 = 8;
    }
    if (fVar4 == 0.0) {
        uVar2 = uVar2 | 4;
    } else if (ABS(fVar4) == INFINITY) {
        uVar2 = uVar2 | 2;
    }
    if ((uVar2 & 4) != 0) {
        return uVar2;
    }
    if (((int)((u32)fVar4 & 0x7f800000) >> 0x17) + -0x7f < 0xf) {
        fVar4 = fVar4 * 1.4426951;
        fStack_c = fVar4;
        if (((u32)fVar4 & 0x7f800000) < 0x4b000000) {
            fStack_c = (float)(int)fVar4;
        }
        fStack_c = (float)((u32)fStack_c | (u32)fVar4 & 0x80000000);
        fVar4 = fVar4 - fStack_c;
        ar4_00 = (int)fStack_c;
        if (-2 < ((int)((u32)fVar4 & 0x7f800000) >> 0x17) + -0x7f) {
            if (((u32)fVar4 & 0x80000000) == 0) {
                ar4_00 = ar4_00 + 1;
                fVar4 = fVar4 + -1.0;
            } else {
                fVar4 = fVar4 + 1.0;
                ar4_00 = ar4_00 + -1;
            }
        }
        iVar3 = 6;
        do {
            iVar3 = iVar3 + -1;
        } while (0 < iVar3);
        iVar3 = 6;
        ar6_00 = 0x8c1255a8;
        do {
            ar6_00 = ar6_00 + 4;
            iVar3 = iVar3 + -1;
        } while (0 < iVar3);
        uVar1 = libc_calc_011d50(ar4_00, iVar3, ar6_00, 6, fVar4);
        return uVar1;
    }
    if ((uVar2 & 8) == 0) {
        return (u32)&g_8c125800;
    }
    return uVar2;
}

/*
 * libc_scan_loop_012090  0x8c012090
 * area name: in the libc library code range; behaviour name: a loop that only reads
 * called by: libc_uses_libm_exp_0121bc, libm_errno_wrap_013dfc
 */
u32 *libc_scan_loop_012090(u32 unused_a0, u32 a1, u32 a2, u32 a3) {
    u32 *puVar1;
    u32 uVar2;
    int iVar3;
    s64 in_dr4;
    float fVar4;

    fVar4 = (float)((u64)in_dr4 >> 0x20);
    uVar2 = 0;
    if (in_dr4 < 0) {
        uVar2 = 8;
    }
    if (fVar4 == 0.0) {
        uVar2 = uVar2 | 4;
    } else if (ABS(fVar4) == INFINITY) {
        uVar2 = uVar2 | 2;
    }
    if ((uVar2 & 4) == 0) {
        if ((uVar2 & 8) != 0) {
            return (u32 *)uVar2;
        }
        if ((uVar2 & 2) == 0) {
            if (fVar4 != 1.0) {
                iVar3 = 7;
                do {
                    iVar3 = iVar3 + -1;
                } while (0 < iVar3);
                return (u32 *)fVar4;
            }
            return (u32 *)8;
        }
        puVar1 = (u32 *)&g_8c125800;
    } else {
        puVar1 = &g_8c125830;
    }
    return puVar1;
}

/*
 * libc_uses_libm_exp_0121bc  0x8c0121bc
 * area name: in the libc library code range; behaviour name: its main named callee is libm_exp
 * called by: libm_errno_wrap_014064
 */
u32 libc_uses_libm_exp_0121bc(u32 unused_a0, u32 unused_a1, u32 unused_a2, u32 unused_a3, u32 ain0) {
    u32 ar4_00;
    u32 ar4_01;
    u32 ar5_00;
    u32 ar5_01;
    u32 ar6_00;
    u32 ar7_00;
    float fVar1;
    float fVar2;
    s64 in_dr4;

    fVar2 = (float)in_dr4;
    ar6_00 = 8;
    ar7_00 = 1;
    ar5_00 = 4;
    ar4_00 = 0;
    if ((int)fVar2 < 0) {
        ar4_00 = 8;
    }
    if (fVar2 == 0.0) {
        ar4_00 = ar4_00 | 4;
    } else if (ABS(fVar2) == INFINITY) {
        ar4_00 = ar4_00 | 2;
    }
    if ((float)((u64)in_dr4 >> 0x20) == 0.0) {
        ain0 = 0xc;
        if ((ar4_00 & 0xc) != 0) {
            ain0 = 0xc;
        }
    } else if ((ar4_00 & 4) == 0) {
        if (in_dr4 < 0) {
            ar5_01 = (u32)fVar2 & 0x80000000;
            ar4_01 = (u32)fVar2 & 0x7f800000;
            fVar1 = fVar2;
            if (ar4_01 < 0x4b000000) {
                fVar1 = (float)(int)fVar2;
            }
            fVar1 = (float)((u32)fVar1 | ar5_01);
            if ((fVar2 == fVar1) && ((ar4_00 & 2) == 0)) {
                libc_scan_loop_012090(ar4_01, ar5_01, 8, 1);
                libm_exp();
                ain0 = libc_calc_011d50(0xffffffff, ar5_01, ar6_00, ar7_00, fVar1);
            }
        } else {
            libc_scan_loop_012090(ar4_00, 4, 8, 1);
            ain0 = libm_exp();
        }
    }
    return ain0;
}

/*
 * libc_uses_delay_loop_6_012328  0x8c012328
 * area name: in the libc library code range; behaviour name: its main named callee is delay_loop_6_010ad4
 * called by: libm_errno_wrap_014294, libm_errno_wrap_0142e4
 */
u32 libc_uses_delay_loop_6_012328(u32 unused_a0, u32 unused_a1, u32 unused_a2, u32 a3) {
    u32 ain0;
    u8 *ar4_00;
    u32 ar5_00;
    u32 ar6_00;
    double in_dr0;
    float extraout_fr3;
    float fVar1;
    u32 extraout_fr2;
    u32 uVar2;
    u64 in_dr4;
    bool bVar3;
    char cVar4;
    char cVar5;
    u32 in_stack_ffffffec;

    cVar5 = '\0';
    cVar4 = '\0';
    ar4_00 = &stack0xffffffec;
    ain0 = 4;
    fVar1 = (float)((u64)in_dr4 >> 0x20);
    ar6_00 = 0;
    ar5_00 = 8;
    bVar3 = false;
    if (fVar1 == 0.0) {
        bVar3 = false;
    } else if (ABS(fVar1) == INFINITY) {
        ain0 = 2;
        bVar3 = true;
    }
    if (!bVar3) {
        uVar2 = 0x3f490fdb;
        ain0 = libc_float_calc_011c5c(&stack0xffffffec, 8, 0, a3, in_stack_ffffffec);
        fVar1 = extraout_fr3;
        if (cVar5 == '\0') {
            in_dr0 = (double)CONCAT44((int)((u64)in_dr0 >> 0x20), uVar2);
            fVar1 = 0.7853982;
        }
        if (cVar4 == '\0') {
            bVar3 = fVar1 < (float)((u64)in_dr0 >> 0x20);
        } else {
            bVar3 = (double)CONCAT44(extraout_fr2, fVar1) < in_dr0;
        }
        if (!bVar3) {
            ain0 = in_stack_ffffffec & 7;
            if ((ain0 == 0) || (ain0 == 7)) {
                ain0 = delay_loop_6_010ad4();
            } else if ((ain0 == 1) || (ain0 == 2)) {
                ain0 = delay_loop_6();
            } else if ((ain0 == 3) || (ain0 == 4)) {
                ain0 = delay_loop_6_010ad4();
            } else if ((ain0 == 5) || (ain0 == 6)) {
                ain0 = delay_loop_6();
            }
        }
    }
    return ain0;
}

/*
 * double_to_digits  0x8c01243c
 * writes a2 decimal digits of the 8-byte mantissa a0 into a1 by repeated subtraction of powers of ten from a table
 * called by: libc_uses_log_message_013374
 */
int double_to_digits(u32 a0, char *a1, int a2) {
    int iVar1;
    int iVar2;
    char cVar3;
    int iVar4;
    char *pcVar5;
    int ar6_00;
    int iVar6;
    int ain0;
    int iStack_48;
    int iStack_44;
    int iStack_3c;
    u8 *puStack_38;
    int iStack_34;
    u8 auStack_28[8];
    u8 auStack_20[4];

    iStack_34 = 1;
    pcVar5 = a1 + a2;
    *pcVar5 = '\0';
    iVar2 = memmove(auStack_28, a0, 8);
    iStack_48 = a2 + -1;
    puStack_38 = &g_8c1255f0 + iStack_48 * 8;
    iStack_3c = a2;
    do {
        if (iStack_48 < 0) {
            return iVar2;
        }
        iVar2 = libgcc_divide_helper_010468(iStack_3c, 5);
        iVar1 = (iVar2 + 1) * -2;
        iVar6 = iVar1 + 8;
        ar6_00 = 8 - iVar6;
        memmove(auStack_28 + iVar1, puStack_38 + iVar6, ar6_00);
        iVar4 = 8;
        iStack_44 = 0;
        ain0 = 0;
        do {
            iVar2 = memcmp_libc(auStack_28 + iVar6, auStack_28 + iVar1, ar6_00);
            if (-1 < iVar2) {
                iVar2 = bytes_sub_be(0, auStack_28 + iVar6, auStack_28 + iVar1, ar6_00);
                iStack_44 = iStack_44 + iVar4;
                iStack_34 = iVar2;
            }
            iVar4 = iVar4 >> 1;
            if (iVar4 == 0)
                break;
            iVar2 = libc_scan_loop_012da8(auStack_28 + iVar1, ar6_00, 1);
            ain0 = ain0 + 1;
        } while (ain0 < 4);
        cVar3 = (char)iStack_44 + '0';
        if (iStack_34 == 0) {
            pcVar5 = pcVar5 + -1;
            *pcVar5 = cVar3;
            while (pcVar5 = pcVar5 + -1, a1 <= pcVar5) {
                *pcVar5 = '0';
            }
            return iVar2;
        }
        pcVar5 = pcVar5 + -1;
        *pcVar5 = cVar3;
        iStack_48 = iStack_48 + -1;
        puStack_38 = puStack_38 + -8;
        iStack_3c = iStack_3c + -1;
    } while (true);
}

/*
 * libc_uses_libm_frexp_01256c  0x8c01256c
 * area name: in the libc library code range; behaviour name: its main named callee is libm_frexp
 * called by: libc_uses_memmove_013060
 */
int libc_uses_libm_frexp_01256c(void) {
    double dVar1;
    char cVar2;
    u32 uStack_10;
    u32 uStack_c;
    u32 auStack_8[2];

    libm_frexp(auStack_8);
    cVar2 = '\0';
    libc_uses_double_inf_or_nan_012734(&uStack_10);
    if (cVar2 == '\0') {
        dVar1 = (double)CONCAT44(uStack_c, uStack_10);
    } else {
        dVar1 = (double)CONCAT44(auStack_8[0], uStack_c);
    }
    return (int)dVar1;
}

/*
 * libm_frexp  0x8c0125b6
 * frexp-style: returns the mantissa of the double in fr4 and stores its binary exponent in *a0 (normalising denormals,
 * setting errno for inf/nan) called by: libc_uses_libm_frexp_01256c
 */
u32 libm_frexp(int *a0) {
    int iVar1;
    double dVar2;
    double dVar3;
    u32 in_fr5;
    u32 in_fr4;
    u32 in_PR;
    char cVar4;
    u8 uStack_30;
    u8 abStack_2f[3];
    u8 auStack_2c[4];
    u32 uStack_28;
    u16 uStack_24;
    u16 uStack_22;
    u32 uStack_20;

    cVar4 = '\0';
    uStack_24 = (u16)in_fr4;
    uStack_22 = (u16)((u32)in_fr4 >> 0x10);
    uStack_28 = in_fr5;
    uStack_20 = in_PR;
    iVar1 = double_inf_or_nan();
    if (iVar1 == 0) {
        if (cVar4 == '\0') {
            dVar3 = 0.0;
            dVar2 = (double)CONCAT44(CONCAT22(uStack_22, uStack_24), uStack_28);
        } else {
            dVar3 = -7.491824698174533e-251;
            dVar2 = (double)CONCAT44(uStack_20, CONCAT22(uStack_22, uStack_24));
        }
        if (dVar2 == dVar3) {
            *a0 = 0;
            return &g_8c0126c0;
        }
        iVar1 = (uStack_22 >> 4 & 0x7ff) - 0x3fe;
        *a0 = iVar1;
        if (iVar1 == -0x3fe) {
            *a0 = *a0 + 1;
            uStack_22 = uStack_22 & 0x800f;
            store_u32_be(&uStack_30, &uStack_24);
            store_u32_be(auStack_2c, &uStack_28);
            while ((abStack_2f[0] & 0x10) == 0) {
                bytes_shl1(abStack_2f, 7);
                *a0 = *a0 + -1;
            }
            store_u32_be(&uStack_24, &uStack_30);
            store_u32_be(&uStack_28, auStack_2c);
        }
    } else {
        if (iVar1 == 1) {
            g_8c2787a8 = 0x4b8;
        }
        if (iVar1 == 2) {
            g_8c2787a8 = 0x44c;
        }
    }
    return 0x18;
}

/*
 * libc_uses_double_inf_or_nan_012734  0x8c012734
 * area name: in the libc library code range; behaviour name: its main named callee is double_inf_or_nan
 * called by: libc_uses_libm_frexp_01256c
 */
u32 libc_uses_double_inf_or_nan_012734(u32 *a0) {
    int iVar1;
    u64 uVar2;
    u32 in_fr5;
    u32 in_fr4;
    u64 in_xd2;
    u32 in_PR;
    char cVar3;
    u16 uStack_10;
    u8 uStack_e;
    u8 uStack_d;

    cVar3 = '\0';
    uStack_10 = (u16)in_fr4;
    uStack_e = (u8)(in_fr4 >> 0x10);
    uStack_d = (u8)(in_fr4 >> 0x18);
    iVar1 = double_inf_or_nan();
    if (iVar1 == 0) {
        if ((int)((in_fr4 >> 0x14 & 0x7ff) - 0x3ff) < 0) {
            if (cVar3 == '\0') {
                a0[1] = 0;
                *a0 = 0;
            } else {
                *(u64 *)(a0 + 1) = 0x7001600700000000;
                *(u64 *)(a0 + -1) = 0x7001600700000000;
            }
        } else {
            if (cVar3 == '\0') {
                uVar2 = CONCAT44(in_fr4, in_fr5);
            } else {
                in_xd2 = CONCAT17(uStack_d, CONCAT16(uStack_e, CONCAT24(uStack_10, in_fr5)));
                uVar2 = CONCAT44(in_PR, in_fr4);
            }
            if (cVar3 == '\0') {
                a0[1] = (int)((u64)uVar2 >> 0x20);
                *a0 = (int)uVar2;
            } else {
                *(u64 *)(a0 + 1) = uVar2;
                *(u64 *)(a0 + -1) = in_xd2;
            }
        }
    } else {
        if (iVar1 == 1) {
            g_8c2787a8 = 0x4b8;
        }
        if (iVar1 == 2) {
            g_8c2787a8 = 0x44c;
        }
    }
    return 4;
}

/*
 * bytes_shl1  0x8c012854
 * shifts the a1-byte big-endian number at a0 left by one bit; returns the bit shifted out
 * called by: libc_uses_bytes_shl1_0129b4, libm_frexp, softfloat_div_mantissa
 */
u32 bytes_shl1(u8 *a0, int a1) {
    u16 uVar1;
    u16 uVar2;
    u8 *pbVar3;
    u8 *pbVar4;
    bool bVar5;

    uVar1 = 0x80;
    uVar2 = 0;
    pbVar3 = a0 + a1 + -1;
    pbVar4 = pbVar3;
    for (; a0 <= pbVar3; pbVar3 = pbVar3 + -1) {
        bVar5 = uVar2 != 0;
        uVar2 = *pbVar3 & uVar1;
        *pbVar3 = *pbVar3 << 1;
        if (bVar5) {
            *pbVar4 = *pbVar4 | 1;
        }
        pbVar4 = pbVar4 + -1;
    }
    if (uVar2 == 0) {
        return 0;
    }
    return 1;
}

/*
 * bytes_shift_left_carry  0x8c01289c
 * shifts the a1-byte big-number at a0 left by a2 bits, carrying between bytes from the end
 * called by: double_unpack_mantissa, libc_copy_012a60, libc_uses_memmove_013060
 */
u32 bytes_shift_left_carry(u8 *a0, int a1, u32 a2) {
    u8 bVar1;
    u32 in_r0;
    u32 uVar2;
    u8 bVar3;
    u32 uVar4;
    u8 *pbVar5;
    u32 uVar6;
    u32 uVar7;

    uVar7 = (u32)(short)(8 - (short)a2);
    if (uVar7 != 0) {
        pbVar5 = a0 + a1 + -1;
        if ((int)uVar7 < 0) {
            uVar2 = (int)0xff >> (~uVar7 & 0x1f) + 1;
        } else {
            uVar2 = (int)0xff << (uVar7 & 0x1f);
        }
        uVar6 = 0;
        while (a0 <= pbVar5) {
            uVar4 = (u32)(short)a2;
            bVar1 = *pbVar5;
            if ((int)uVar4 < 0) {
                bVar3 = (u8)((u32)(int)(char)*pbVar5 >> (~uVar4 & 0x1f) + 1);
            } else {
                bVar3 = (u8)((int)(char)*pbVar5 << (uVar4 & 0x1f));
            }
            *pbVar5 = bVar3;
            *pbVar5 = *pbVar5 | (u8)uVar6;
            pbVar5 = pbVar5 + -1;
            uVar6 = (int)(char)bVar1 & uVar2 & 0xff;
            uVar4 = -uVar7;
            if ((int)uVar4 < 0) {
                uVar6 = uVar6 >> (~uVar4 & 0x1f) + 1;
            } else {
                uVar6 = uVar6 << (uVar4 & 0x1f);
            }
        }
        if ((uVar6 & 0xff) != 0) {
            return 1;
        }
        in_r0 = 0;
    }
    return in_r0;
}

/*
 * bytes_mul_8x8_be  0x8c0128e8
 * multiplies the 8-byte big-endian numbers a0 and a1 into the 16-byte product a2 (soft-float mantissa helper)
 */
int bytes_mul_8x8_be(int a0, int a1, int a2, u32 a3) {
    int iVar1;
    short sVar2;
    short sVar3;
    int iVar4;
    int ar6_00;
    u32 in_stack_ffffffc4;
    u8 abStack_34[24];

    memset(a2, 0, 0x10);
    sVar2 = 7;
    do {
        iVar4 = (int)sVar2;
        if (*(char *)(iVar4 + a1) != '\0') {
            memset(abStack_34, 0, 0x10);
            sVar3 = 7;
            do {
                iVar1 = iVar4 + sVar3;
                ar6_00 = (u32) * (u8 *)(a0 + sVar3) * (u32) * (u8 *)(a1 + iVar4);
                in_stack_ffffffc4 =
                    CONCAT22((short)((u32)in_stack_ffffffc4 >> 0x10), (u16)abStack_34[iVar1 + 1] + (short)ar6_00);
                store_u16_be(abStack_34 + iVar1, &stack0xffffffc4);
                sVar3 = sVar3 + -1;
            } while (-1 < sVar3);
            if (sVar2 == 7) {
                iVar4 = memmove(a2 + 7, abStack_34 + 7, 9);
            } else {
                iVar4 = bytes_add_be(iVar4 + a2, abStack_34 + iVar4, 9, a3, in_stack_ffffffc4);
            }
        }
        sVar2 = sVar2 + -1;
    } while (-1 < sVar2);
    return iVar4;
}

/*
 * libc_uses_bytes_shl1_0129b4  0x8c0129b4
 * area name: in the libc library code range; behaviour name: its main named callee is bytes_shl1
 * called by: libc_uses_softfloat_scale_pow10_010b60, softfloat_scale_pow10
 */
u32 libc_uses_bytes_shl1_0129b4(short *a0, u32 a1, u32 a2, u32 a3) {
    u8 *puVar1;
    u32 uVar2;
    u8 abStack_1c[8];
    u8 bStack_14;

    puVar1 = (&bytes_mul_8x8_be);
    *a0 = (short)a2 + *a0;
    (*(code *)puVar1)(a1, a3, abStack_1c, a3);
    if ((abStack_1c[0] & 0x80) == 0) {
        bytes_shl1(abStack_1c, 0x10);
    } else {
        *a0 = *a0 + 1;
    }
    libc_uses_libgcc_divide_helper_012e00(abStack_1c, 0x10, 0x42);
    bStack_14 = bStack_14 & 0xe0;
    uVar2 = memmove(a1, abStack_1c, 9);
    return uVar2;
}

/*
 * store_u32_be  0x8c012a24
 * stores *a1 big-endian at a0; returns a0 + 4
 * called by: double_unpack_mantissa, libm_frexp
 */
u8 *store_u32_be(u8 *a0, u32 *a1) {
    u8 *puVar1;
    u8 uVar2;
    u32 uVar3;
    int iVar4;

    puVar1 = a0 + 4;
    iVar4 = 0x18;
    do {
        uVar3 = -iVar4;
        if ((int)uVar3 < 0) {
            uVar2 = (u8)(*a1 >> (~uVar3 & 0x1f) + 1);
        } else {
            uVar2 = (u8)(*a1 << (uVar3 & 0x1f));
        }
        *a0 = uVar2;
        a0 = a0 + 1;
        iVar4 = iVar4 + -8;
    } while (a0 < puVar1);
    return puVar1;
}

/*
 * store_u16_be  0x8c012a40
 * stores the u16 at a1 as two big-endian bytes at a0
 * called by: bytes_mul_8x8_be
 */
char *store_u16_be(char *a0, u16 *a1) {
    char *pcVar1;
    u32 uVar2;
    char cVar3;
    int iVar4;

    pcVar1 = a0 + 2;
    iVar4 = 8;
    do {
        uVar2 = -iVar4;
        if ((int)uVar2 < 0) {
            cVar3 = (char)(*a1 >> (~uVar2 & 0x1f) + 1);
        } else {
            cVar3 = (char)*a1 << (uVar2 & 0x1f);
        }
        *a0 = cVar3;
        a0 = a0 + 1;
        iVar4 = iVar4 + -8;
    } while (a0 < pcVar1);
    return pcVar1;
}

/*
 * libc_copy_012a60  0x8c012a60
 * area name: in the libc library code range; behaviour name: mostly calls copy functions
 * called by: softfloat_scale_pow10
 */
u32 libc_copy_012a60(u32 a0, short *a1, u32 a2, u32 a3) {
    u32 uVar1;
    u32 uVar2;
    int iVar3;
    int ar6_00;
    u8 *ar4_00;
    u8 abStack_1c[12];

    *a1 = (short)a0 + 0x3f;
    memmove_wrap(a0, abStack_1c);
    memset(a2, 0, 8);
    iVar3 = 0;
    ar6_00 = 0;
    for (ar4_00 = abStack_1c; *ar4_00 == 0; ar4_00 = ar4_00 + 1) {
        iVar3 = iVar3 + 1;
        *a1 = *a1 + -8;
    }
    for (uVar2 = 0x80; (*ar4_00 & uVar2) == 0; uVar2 = uVar2 >> 1) {
        ar6_00 = ar6_00 + 1;
    }
    bytes_shift_left_carry(ar4_00, 8 - iVar3, ar6_00);
    *a1 = *a1 - (short)ar6_00;
    uVar1 = memmove(a2, ar4_00, 8 - iVar3);
    return uVar1;
}

/*
 * memmove_wrap  0x8c012af8
 * only calls memmove
 * called by: libc_copy_012a60, libc_uses_memmove_013060
 */
u32 memmove_wrap(int a0, u32 a1) {
    u32 uVar1;

    uVar1 = memmove(a1, (&DATA_8c125678) + a0 * 8, 8);
    return uVar1;
}

/*
 * softfloat_scale_pow10  0x8c012b1c
 * multiplies the mantissa by 10^a0 using the power-of-ten tables (negative exponents through the reciprocal table)
 * called by: libc_uses_softfloat_scale_pow10_010b60
 */
u32 softfloat_scale_pow10(int a0, short *a1, u8 *a2, u8 *a3) {
    u32 uVar1;
    int iVar2;
    u32 uVar3;
    int iVar4;
    int iVar5;
    u32 uVar6;
    u8 *ar7_00;
    short *psVar7;
    bool bVar8;
    short asStack_48[2];
    u8 *pbStack_44;
    short *psStack_40;
    u8 *puStack_3c;
    u8 abStack_2c[8];
    u8 uStack_24;

    bVar8 = a0 < 0;
    if (bVar8) {
        a0 = -a0;
    }
    uVar6 = (u32)bVar8;
    iVar4 = 0x1b;
    psStack_40 = a1;
    puStack_3c = a2;
    uVar1 = libgcc_divide_helper_010468(a0, 0x1b);
    iVar2 = libgcc_divide_helper_010614(a0, iVar4);
    if ((uVar6 == 1) && (iVar2 != 0)) {
        iVar2 = iVar4 - iVar2;
        asStack_48[0] = -0x5a;
        memmove(abStack_2c, &g_8c125798, 8);
        uStack_24 = 0;
    } else {
        memset(abStack_2c, 0, 9);
        abStack_2c[0] = abStack_2c[0] | 0x80;
        asStack_48[0] = 0;
    }
    iVar4 = 0;
    psVar7 = &g_8c1257d8 + uVar6 * 8;
    ar7_00 = &g_8c125758 + uVar6 * 0x40;
    pbStack_44 = abStack_2c;
    do {
        if ((uVar1 & 1) != 0) {
            iVar5 = (int)*psVar7;
            a3 = ar7_00;
            libc_uses_bytes_shl1_0129b4(asStack_48, abStack_2c, iVar5, ar7_00);
            iVar5 = libc_uses_libgcc_divide_helper_012c70(abStack_2c, 0x40);
            if (iVar5 != 0) {
                asStack_48[0] = asStack_48[0] + 1;
                *pbStack_44 = *pbStack_44 | 0x80;
            }
        }
        iVar4 = iVar4 + 1;
        uVar1 = (int)uVar1 >> 1;
        psVar7 = psVar7 + 1;
        ar7_00 = ar7_00 + 8;
    } while (iVar4 < 8);
    if (iVar2 != 0) {
        libc_copy_012a60(iVar2, psStack_40, puStack_3c, a3);
        iVar2 = (int)*psStack_40;
        a3 = puStack_3c;
        libc_uses_bytes_shl1_0129b4(asStack_48, abStack_2c, iVar2, puStack_3c);
        iVar2 = libc_uses_libgcc_divide_helper_012c70(abStack_2c, 0x40);
        if (iVar2 == 1) {
            asStack_48[0] = asStack_48[0] + 1;
            *pbStack_44 = *pbStack_44 | 0x80;
        }
    }
    *psStack_40 = asStack_48[0];
    uVar3 = memmove(puStack_3c, abStack_2c, 8);
    return uVar3;
}

/*
 * libc_uses_libgcc_divide_helper_012c70  0x8c012c70
 * area name: in the libc library code range; behaviour name: its main named callee is libgcc_divide_helper_010468
 * called by: libc_uses_softfloat_scale_pow10_010b60, softfloat_scale_pow10
 */
u32 libc_uses_libgcc_divide_helper_012c70(u8 *a0, u32 a1) {
    u8 bVar1;
    bool bVar2;
    int iVar3;
    u32 uVar4;
    u32 uVar5;
    u8 *pbVar6;
    u32 d;
    u32 uVar7;
    u8 *pbVar8;

    d = 8;
    bVar2 = false;
    iVar3 = libgcc_divide_helper_010468(a1, 8);
    pbVar8 = a0 + iVar3;
    if ((int)a1 < 0) {
        uVar4 = ~(~a1 + 1 & 7) + 1;
    } else {
        uVar4 = a1 & 7;
    }
    uVar4 = -uVar4;
    if ((int)uVar4 < 0) {
        uVar4 = 0x80 >> (~uVar4 & 0x1f) + 1;
    } else {
        uVar4 = 0x80 << (uVar4 & 0x1f);
    }
    uVar4 = uVar4 & 0xff;
    uVar7 = a1 - 1;
    iVar3 = libgcc_divide_helper_010468(uVar7, d);
    pbVar6 = a0 + iVar3;
    if ((int)uVar7 < 0) {
        uVar7 = ~(~uVar7 + 1 & 7) + 1;
    } else {
        uVar7 = uVar7 & 7;
    }
    uVar7 = -uVar7;
    if ((int)uVar7 < 0) {
        uVar7 = 0x80 >> (~uVar7 & 0x1f) + 1;
    } else {
        uVar7 = 0x80 << (uVar7 & 0x1f);
    }
    if ((*pbVar8 & uVar4) != 0) {
        uVar5 = (u32)*pbVar8;
        if (((uVar5 & (int)uVar4 >> 1) == 0) && (((int)uVar4 >> 2 & uVar5) == 0)) {
            if (((u32)*pbVar6 & uVar7 & 0xff) != 0) {
                bVar2 = true;
            }
        } else {
            bVar2 = true;
        }
    }
    if (bVar2) {
        while ((bVar1 = (u8)uVar7, ((u32)*pbVar6 & uVar7 & 0xff) != 0 && (a0 <= pbVar6))) {
            uVar7 = uVar7 << 1;
            *pbVar6 = *pbVar6 & ~bVar1;
            if ((uVar7 & 0xff) == 0) {
                uVar7 = 1;
                pbVar6 = pbVar6 + -1;
            }
        }
        if (pbVar6 < a0) {
            return 1;
        }
        *pbVar6 = *pbVar6 | bVar1;
    }
    return 0;
}

/*
 * bytes_shr1  0x8c012d5c
 * shifts an a1-byte big-endian number right by one bit; returns the bit shifted out
 * called by: softfloat_div_mantissa
 */
u32 bytes_shr1(u8 *a0, int a1) {
    u8 *pbVar1;
    u32 uVar2;
    int iVar3;
    bool bVar4;

    uVar2 = 0;
    iVar3 = 0;
    pbVar1 = a0;
    if (0 < a1) {
        do {
            bVar4 = uVar2 != 0;
            uVar2 = *a0 & 1;
            *a0 = *a0 >> 1;
            if (bVar4) {
                *pbVar1 = *pbVar1 | 0x80;
            }
            iVar3 = iVar3 + 1;
            pbVar1 = pbVar1 + 1;
            a0 = a0 + 1;
        } while (iVar3 < a1);
    }
    return uVar2;
}

/*
 * libc_scan_loop_012da8  0x8c012da8
 * area name: in the libc library code range; behaviour name: a loop that only reads
 * called by: double_to_digits, libc_uses_softfloat_scale_pow10_010b60
 */
u32 libc_scan_loop_012da8(u8 *a0, int a1, u32 a2) {
    u8 bVar1;
    u32 in_r0;
    u8 bVar2;
    u32 uVar3;
    u32 uVar4;
    u32 uVar5;
    u32 uVar6;
    int iVar7;

    uVar6 = (u32)(short)(8 - (short)a2);
    if (uVar6 != 0) {
        uVar3 = -uVar6;
        uVar5 = 0;
        if ((int)uVar3 < 0) {
            uVar3 = (int)0xff >> (~uVar3 & 0x1f) + 1;
        } else {
            uVar3 = (int)0xff << (uVar3 & 0x1f);
        }
        iVar7 = 0;
        if (0 < a1) {
            do {
                bVar1 = *a0;
                uVar4 = -(int)(short)a2;
                iVar7 = iVar7 + 1;
                if ((int)uVar4 < 0) {
                    bVar2 = *a0 >> (~uVar4 & 0x1f) + 1;
                } else {
                    bVar2 = *a0 << (uVar4 & 0x1f);
                }
                *a0 = bVar2;
                uVar4 = (int)(char)bVar1 & uVar3 & 0xff;
                *a0 = *a0 | (u8)uVar5;
                if ((int)uVar6 < 0) {
                    uVar5 = uVar4 >> (~uVar6 & 0x1f) + 1;
                } else {
                    uVar5 = uVar4 << (uVar6 & 0x1f);
                }
                a0 = a0 + 1;
            } while (iVar7 < a1);
        }
        if ((uVar5 & 0xff) == 0) {
            in_r0 = 0;
        } else {
            in_r0 = 1;
        }
    }
    return in_r0;
}

/*
 * libc_uses_libgcc_divide_helper_012e00  0x8c012e00
 * area name: in the libc library code range; behaviour name: its main named callee is libgcc_divide_helper_010468
 * called by: libc_uses_bytes_shl1_0129b4, libc_uses_softfloat_scale_pow10_010b60
 */
u32 libc_uses_libgcc_divide_helper_012e00(int a0, int a1, u32 a2) {
    int iVar1;
    u32 uVar2;
    u32 uVar3;
    u8 *pbVar4;
    u32 uVar5;
    u8 *pbVar6;

    iVar1 = libgcc_divide_helper_010468(a2, 8);
    pbVar6 = (u8 *)(iVar1 + a0);
    if ((int)a2 < 0) {
        uVar2 = ~(~a2 + 1 & 7) + 1;
    } else {
        uVar2 = a2 & 7;
    }
    uVar2 = -uVar2;
    if ((int)uVar2 < 0) {
        uVar5 = 0x80 >> (~uVar2 & 0x1f) + 1;
    } else {
        uVar5 = 0x80 << (uVar2 & 0x1f);
    }
    if (((u32)*pbVar6 & uVar5 & 0xff) == 0) {
        uVar2 = 0;
        for (uVar3 = uVar5; (uVar3 & 0xff) != 0; uVar3 = (uVar3 & 0xff) >> 1) {
            uVar2 = uVar2 | uVar3;
        }
        uVar2 = uVar2 & 0xff;
        if ((*pbVar6 & uVar2) == 0) {
            pbVar4 = pbVar6;
            do {
                pbVar4 = pbVar4 + 1;
                if ((u8 *)(a0 + a1) <= pbVar4) {
                    return uVar2;
                }
            } while (*pbVar4 == 0);
            *pbVar6 = *pbVar6 | (u8)uVar5;
        } else {
            *pbVar6 = *pbVar6 | (u8)uVar5;
        }
    }
    return uVar2;
}

/*
 * libc_uses_libgcc_divide_helper_012e04  0x8c012e04
 * area name: in the libc library code range; behaviour name: its main named callee is libgcc_divide_helper_010468
 */
u32 libc_uses_libgcc_divide_helper_012e04(int a0, int a1, u32 a2) {
    u32 in_r0;
    int iVar1;
    u32 uVar2;
    u32 uVar3;
    u8 *pbVar4;
    u32 uVar5;
    u8 *pbVar6;

    iVar1 = libgcc_divide_helper_010468(a2, in_r0);
    pbVar6 = (u8 *)(iVar1 + a0);
    if ((int)a2 < 0) {
        uVar2 = ~(~a2 + 1 & 7) + 1;
    } else {
        uVar2 = a2 & 7;
    }
    uVar2 = -uVar2;
    if ((int)uVar2 < 0) {
        uVar5 = 0x80 >> (~uVar2 & 0x1f) + 1;
    } else {
        uVar5 = 0x80 << (uVar2 & 0x1f);
    }
    if (((u32)*pbVar6 & uVar5 & 0xff) == 0) {
        uVar2 = 0;
        for (uVar3 = uVar5; (uVar3 & 0xff) != 0; uVar3 = (uVar3 & 0xff) >> 1) {
            uVar2 = uVar2 | uVar3;
        }
        uVar2 = uVar2 & 0xff;
        if ((*pbVar6 & uVar2) == 0) {
            pbVar4 = pbVar6;
            do {
                pbVar4 = pbVar4 + 1;
                if ((u8 *)(a0 + a1) <= pbVar4) {
                    return uVar2;
                }
            } while (*pbVar4 == 0);
            *pbVar6 = *pbVar6 | (u8)uVar5;
        } else {
            *pbVar6 = *pbVar6 | (u8)uVar5;
        }
    }
    return uVar2;
}

/*
 * strtol_too_long  0x8c012e84
 * sets errno 0x450 when the number text runs 512 characters or more
 * called by: strtol
 */
u32 strtol_too_long(char *a0, int a1) {
    if ((*a0 != '\0') && ((int)0x200 <= (int)a0 - a1)) {
        g_8c2787a8 = (int)0x450;
        return 1;
    }
    return 0;
}

/*
 * bytes_sub_be  0x8c012eac
 * subtracts a2 from a1 (a3 big-endian bytes) in place; returns -1 on borrow (when a0 is 0), 0 when the result is zero,
 * else 1 called by: double_to_digits, softfloat_div_mantissa
 */
u32 bytes_sub_be(int a0, u8 *a1, int a2, int a3) {
    bool bVar1;
    u32 uVar2;
    u8 *pbVar3;
    u8 *pbVar4;
    u8 *pbVar5;
    u32 uVar6;
    bool bVar7;
    int iStack_14;

    pbVar5 = (u8 *)(a3 + -1 + a2);
    pbVar3 = a1 + a3 + -1;
    uVar6 = 0;
    bVar1 = true;
    pbVar4 = pbVar3 + 1;
    for (; a1 <= pbVar3; pbVar3 = pbVar3 + -1) {
        iStack_14 = ((u32)*pbVar3 - (u32)*pbVar5) - uVar6;
        bVar7 = iStack_14 < 0;
        if (bVar7) {
            iStack_14 = 0x100 + iStack_14;
        }
        uVar6 = (u32)bVar7;
        if (iStack_14 != 0) {
            bVar1 = false;
        }
        pbVar4 = pbVar4 + -1;
        *pbVar4 = (u8)iStack_14;
        pbVar5 = pbVar5 + -1;
    }
    if ((uVar6 == 1) && (a0 == 0)) {
        uVar2 = 0xffffffff;
    } else if (bVar1) {
        uVar2 = 0;
    } else {
        uVar2 = 1;
    }
    return uVar2;
}

/*
 * memcmp_libc  0x8c012f24
 * compares a2 bytes of a0 and a1
 * called by: double_to_digits
 */
u32 memcmp_libc(char *a0, char *a1, u32 a2) {
    char cVar1;
    char cVar2;
    u32 uVar3;

    if (a2 == 0) {
        return 0;
    }
    uVar3 = 0;
    if (a2 != 0) {
        do {
            cVar1 = *a1;
            a1 = a1 + 1;
            cVar2 = *a0;
            a0 = a0 + 1;
            if (cVar2 != cVar1)
                break;
            uVar3 = uVar3 + 1;
        } while (uVar3 < a2);
    }
    return (u32)(u8)a0[-1] - (u32)(u8)a1[-1];
}

/*
 * double_unpack_mantissa  0x8c012f58
 * splits the double in fr4 into a sign byte (*a0 = 1 or 0xff), the exponent (*a1) and a 7-byte mantissa with the hidden
 * bit (a2) called by: libc_uses_memmove_013060
 */
u32 double_unpack_mantissa(u8 *a0, u16 *a1, u8 *a2) {
    u32 uVar1;
    u8 uVar2;
    u32 ar6_00;
    u32 in_fr4;
    u8 auStack_1c[4];
    u8 auStack_18[2];
    u16 uStack_16;

    uStack_16 = (u16)((u32)in_fr4 >> 0x10);
    if ((uStack_16 & 0x8000) == 0x8000) {
        uVar2 = 0xff;
    } else {
        uVar2 = 1;
    }
    *a0 = uVar2;
    *a1 = uStack_16;
    *a1 = (short)(*a1 & 0x7ff0) >> 4;
    store_u32_be(&stack0xffffffe0, auStack_18);
    ar6_00 = 3;
    memmove(a2, &stack0xffffffe1, 3);
    store_u32_be(&stack0xffffffe0, auStack_1c);
    memmove(a2 + 3, &stack0xffffffe0, 4);
    bytes_shift_left_carry(a2, 7, 3);
    if ((short)*a1 < 1) {
        *a1 = *a1 + 1;
        uVar1 = (int)(char)*a2 & 0x7f;
        *a2 = (u8)uVar1;
        while ((*a2 & 0x80) == 0) {
            uVar1 = bytes_shift_left_carry(a2, 7, 1);
            *a1 = *a1 - 1;
        }
    } else {
        uVar1 = (int)(char)*a2 | 0x80;
        *a2 = (u8)uVar1;
    }
    return uVar1;
}

/*
 * libc_uses_memmove_013060  0x8c013060
 * area name: in the libc library code range; behaviour name: its main named callee is memmove
 * called by: libc_uses_log_message_013374
 */
u32 libc_uses_memmove_013060(int a0, u8 *a1, int *a2, char *a3) {
    bool bVar1;
    int iVar2;
    int iVar3;
    short sVar4;
    char *ar4_01;
    int iVar5;
    u8 *puVar6;
    u64 in_dr4;
    u32 in_stack_ffffffa4;
    u32 ain0;
    u8 auStack_48[8];
    u8 auStack_40[8];
    u8 auStack_38[8];
    u8 auStack_30[7];
    u8 uStack_29;
    u32 uStack_28;
    u32 uStack_24;

    puVar6 = &stack0xffffffa4;
    ar4_01 = (char *)&uStack_28;
    uStack_28 = (u32)in_dr4;
    uStack_24 = (u32)(in_dr4 >> 0x20);
    bVar1 = false;
    if (((in_dr4 & 0x7f00000000000000) == 0) && (iVar2 = bytes_all_zero(ar4_01, 7), iVar2 != 0)) {
        puVar6 = a1 + 8;
        for (; a1 < puVar6; a1 = a1 + 1) {
            *a1 = 0;
        }
        *a2 = 0;
        if ((uStack_24 & 0x80000000) == 0) {
            *a3 = '\x01';
        } else {
            *a3 = -1;
        }
    } else {
        double_unpack_mantissa(a3, &stack0xffffffa4, auStack_30);
        if (*a3 == -1) {
            uStack_24 = uStack_24 & 0x7fffffff;
        }
        if ((short)in_stack_ffffffa4 == 0x7ff) {
            if (uStack_24._2_1_ != -0x10) {
                return 2;
            }
            puVar6 = (u8 *)0x6;
            iVar2 = bytes_all_zero(ar4_01, 6);
            if (iVar2 == 0) {
                return 2;
            }
            if (*a3 == '\x01') {
                return 1;
            }
            if (*a3 == -1) {
                return 0xffffffff;
            }
        }
        sVar4 = (short)in_stack_ffffffa4 + -0x3ff;
        ain0 = CONCAT22((short)((u32)in_stack_ffffffa4 >> 0x10), sVar4);
        if (sVar4 < 0) {
            iVar2 = libc_uses_libm_frexp_01256c();
            iVar2 = iVar2 + -1;
        } else {
            iVar2 = libc_uses_libm_frexp_01256c();
        }
        uStack_29 = 0;
        *a2 = (iVar2 - a0) + 1;
        memmove_wrap(a0, auStack_38);
        iVar3 = libgcc_divide_helper_010468(a0, 8);
        iVar5 = 0;
        iVar2 = iVar5;
        if (0 < 8 - iVar3) {
            do {
                iVar5 = iVar2 + 1;
                auStack_38[iVar2] = auStack_38[iVar2 + iVar3];
                iVar2 = iVar5;
            } while (iVar5 < 8 - iVar3);
        }
        for (puVar6 = auStack_38 + iVar5; puVar6 < auStack_30; puVar6 = puVar6 + 1) {
            *puVar6 = 0;
        }
        iVar2 = a0 + iVar3 * -8;
        bytes_shift_left_carry(auStack_38, 8, iVar2);
        memmove_wrap(a0 + -1, auStack_40);
        iVar3 = libgcc_divide_helper_010468(a0 + -1, 8);
        iVar5 = 0;
        iVar2 = iVar5;
        if (0 < 8 - iVar3) {
            do {
                iVar5 = iVar2 + 1;
                auStack_40[iVar2] = auStack_40[iVar3 + iVar2];
                iVar2 = iVar5;
            } while (iVar5 < 8 - iVar3);
        }
        for (puVar6 = auStack_40 + iVar5; puVar6 < auStack_38; puVar6 = puVar6 + 1) {
            *puVar6 = 0;
        }
        bytes_shift_left_carry(auStack_40, 8, a0 + iVar3 * -8 + -1);
        while (true) {
            while (true) {
                puVar6 = a1;
                libc_uses_softfloat_scale_pow10_010b60((int)(short)ain0, auStack_30, *a2, a1);
                memmove(auStack_48, a1, 8);
                iVar2 = memcmp(auStack_48, auStack_38, 8);
                if (iVar2 < 1)
                    break;
                bVar1 = true;
                *a2 = *a2 + 1;
            }
            memmove(auStack_48, a1, 8);
            iVar2 = memcmp(auStack_48, auStack_38, 8);
            if (iVar2 == 0)
                break;
            memmove(auStack_48, a1, 8);
            iVar2 = memcmp(auStack_48, auStack_40, 8);
            if (-1 < iVar2) {
                return 0;
            }
            if (bVar1) {
                return 0;
            }
            *a2 = *a2 + -1;
        }
        iVar2 = *a2;
        *a2 = iVar2 + 1;
        libc_uses_softfloat_scale_pow10_010b60((int)(short)ain0, auStack_30, iVar2 + 1, a1);
    }
    return 0;
}

/*
 * libc_uses_log_message_013374  0x8c013374
 * area name: in the libc library code range; behaviour name: its main named callee is log_message
 * called by: format_output
 */
int libc_uses_log_message_013374(u32 *a0, char *a1, int a2, u8 *a3) {
    u8 bVar1;
    float fVar2;
    int iVar3;
    u32 uVar4;
    char *pcVar5;
    char cVar6;
    float *pfVar7;
    int iVar8;
    char *pcVar9;
    char *ar4_00;
    u32 uVar10;
    u32 uVar11;
    int iVar12;
    char *pcVar13;
    float fVar14;
    bool bVar15;
    u8 in_FPSCR_DN;
    int in_stack_ffffffa0;
    int iStack_58;
    char acStack_4c[4];
    char acStack_48[32];
    u8 auStack_28[12];

    pcVar13 = (char *)*a0;
    uVar11 = 3;
    pcVar5 = pcVar13 + 4;
    if (((u32)pcVar5 & 3) != 0) {
        pcVar5 = pcVar13 + 8;
    }
    *a0 = (u32)pcVar5;
    pfVar7 = (float *)(pcVar5 + -4);
    if (((u32)pfVar7 & 3) != 0) {
        pfVar7 = (float *)(pcVar5 + -8);
    }
    fVar14 = *pfVar7;
    if (*(int *)(a3 + 8) == -1) {
        a3[8] = 6;
        a3[9] = 0;
        a3[10] = 0;
        a3[0xb] = 0;
    }
    acStack_48[0] = '0';
    if ((char)((in_FPSCR_DN & 4) >> 2) == '\0') {
        fVar2 = 0.0;
    } else {
        fVar2 = -INFINITY;
    }
    if (fVar14 == fVar2) {
        acStack_4c[0] = '\x01';
        acStack_48[1] = 0;
    } else {
        pcVar13 = acStack_4c;
        iVar3 = libc_uses_memmove_013060(0x11, auStack_28, &stack0xffffffa0, pcVar13);
        if (iVar3 != 0) {
            *a1 = '\0';
            if (*(int *)(a3 + 4) < *(int *)(a3 + 8)) {
                *(u32 *)(a3 + 0x28) = *(u32 *)(a3 + 8);
            } else {
                *(u32 *)(a3 + 0x28) = *(u32 *)(a3 + 4);
            }
            if (iVar3 == 1) {
                uVar11 = 0x2b;
            } else if (iVar3 == -1) {
                uVar11 = 0x2d;
            } else {
                uVar11 = 0x2a;
            }
            a3[1] = (u8)uVar11;
            return uVar11;
        }
        pcVar5 = acStack_48 + 1;
        uVar11 = 0x11;
        double_to_digits(auStack_28, pcVar5, 0x11);
    }
    for (iVar3 = 1; acStack_48[iVar3] == '0'; iVar3 = iVar3 + 1) {
    }
    if (1 < iVar3) {
        pcVar5 = (char *)log_message(acStack_48 + iVar3, pcVar5, uVar11);
        iVar8 = 1;
        in_stack_ffffffa0 = in_stack_ffffffa0 + iVar3 + -1;
        if (0 < (int)pcVar5) {
            do {
                acStack_48[iVar8] = acStack_48[iVar3];
                iVar8 = iVar8 + 1;
                iVar3 = iVar3 + 1;
            } while (iVar8 <= (int)pcVar5);
        }
        acStack_48[iVar8] = '\0';
    }
    ar4_00 = acStack_48 + 1;
    iVar3 = log_message(ar4_00, pcVar5, uVar11);
    iVar8 = (int)(iVar3 + (u32)(iVar3 < 0)) >> 1;
    pcVar9 = ar4_00 + iVar3;
    iVar12 = 0;
    pcVar5 = ar4_00;
    if (0 < iVar8) {
        do {
            pcVar9 = pcVar9 + -1;
            cVar6 = *pcVar5;
            pcVar13 = (char *)(int)cVar6;
            iVar12 = iVar12 + 1;
            *pcVar5 = *pcVar9;
            *pcVar9 = cVar6;
            pcVar5 = pcVar5 + 1;
        } while (iVar12 < iVar8);
    }
    if (iVar3 == 0) {
        iVar3 = 1;
        acStack_48[1] = 0x30;
        in_stack_ffffffa0 = 0;
    }
    if ((a2 == 0x67) || (iStack_58 = a2, a2 == 0x47)) {
        *a3 = *a3 | 0x20;
        iVar8 = in_stack_ffffffa0 + iVar3 + -1;
        if ((iVar8 < -4) || (*(int *)(a3 + 8) < iVar8)) {
            iStack_58 = a2 + -2;
        } else {
            iStack_58 = 0x66;
        }
    }
    if (acStack_4c[0] == '\x01') {
        if ((*a3 & 0x18) == 8) {
            cVar6 = '+';
        } else {
            pcVar5 = a1;
            if ((*a3 & 0x18) != 0x10)
                goto LAB_8c013572;
            cVar6 = ' ';
        }
        *a1 = cVar6;
        pcVar5 = a1 + 1;
    } else {
        *a1 = '-';
        pcVar5 = a1 + 1;
    }
LAB_8c013572:
    pcVar9 = a1 + 1;
    if (iStack_58 == 0x66) {
        if (in_stack_ffffffa0 < 0) {
            in_stack_ffffffa0 = in_stack_ffffffa0 + iVar3;
            iVar8 = in_stack_ffffffa0 + *(int *)(a3 + 8);
            if ((iVar8 < iVar3) && (-1 < iVar8)) {
                decimal_round_digits(acStack_48, iVar8 + 1);
            }
            if (in_stack_ffffffa0 < 1) {
                bVar15 = acStack_48[0] != '0';
                if (bVar15) {
                    iVar3 = iVar3 + 1;
                    in_stack_ffffffa0 = in_stack_ffffffa0 + 1;
                }
                uVar10 = (u32)!bVar15;
                if (in_stack_ffffffa0 < 1) {
                    *pcVar5 = '0';
                } else {
                    uVar10 = 1;
                    *pcVar5 = acStack_48[0];
                }
                pcVar5[1] = '.';
                iVar8 = 2;
                pcVar5 = pcVar5 + 2;
                if (in_stack_ffffffa0 < 0) {
                    *(char **)(a3 + 0x14) = pcVar5;
                    if (-in_stack_ffffffa0 < *(int *)(a3 + 8)) {
                        *(int *)(a3 + 0x20) = -in_stack_ffffffa0;
                        iVar8 = -in_stack_ffffffa0;
                    } else {
                        *(u32 *)(a3 + 0x20) = *(u32 *)(a3 + 8);
                        iVar8 = *(int *)(a3 + 8);
                    }
                    iVar8 = iVar8 + 2;
                    *(int *)(a3 + 8) = *(int *)(a3 + 8) + in_stack_ffffffa0;
                }
                while (((int)(uVar10 - !bVar15) < iVar3 && (0 < *(int *)(a3 + 8)))) {
                    iVar8 = iVar8 + 1;
                    *pcVar5 = acStack_48[uVar10];
                    uVar10 = uVar10 + 1;
                    pcVar5 = pcVar5 + 1;
                    *(int *)(a3 + 8) = *(int *)(a3 + 8) + -1;
                }
                bVar1 = *a3;
                if (((bVar1 & 0x20) == 0) || (((bVar1 & 0x20) != 0 && ((bVar1 & 4) != 0)))) {
                    if (0 < *(int *)(a3 + 8)) {
                        *(char **)(a3 + 0x18) = pcVar5;
                        *(u32 *)(a3 + 0x24) = *(u32 *)(a3 + 8);
                        iVar8 = iVar8 + *(int *)(a3 + 8);
                    }
                } else if (pcVar5[-1] == '0') {
                    for (; pcVar5[-1] == '0'; pcVar5 = pcVar5 + -1) {
                        iVar8 = iVar8 + -1;
                    }
                }
                if ((((*a3 & 4) == 0) && (pcVar5[-1] == '.')) &&
                    (((*(int *)(a3 + 0x20) == 0 && (*(int *)(a3 + 0x24) == 0)) || ((*a3 & 0x20) != 0)))) {
                    iVar12 = *(int *)(a3 + 0x20);
                    iVar3 = *(int *)(a3 + 0x24);
                    pcVar5 = pcVar5 + -1;
                    a3[0x24] = 0;
                    a3[0x25] = 0;
                    a3[0x26] = 0;
                    a3[0x27] = 0;
                    a3[0x20] = 0;
                    a3[0x21] = 0;
                    a3[0x22] = 0;
                    a3[0x23] = 0;
                    *(char **)(a3 + 0x14) = a1;
                    a3[0x18] = 0;
                    a3[0x19] = 0;
                    a3[0x1a] = 0;
                    a3[0x1b] = 0;
                    iVar8 = ((iVar8 - iVar12) - iVar3) + -1;
                }
                iVar12 = (int)*a1;
                if ((((iVar12 == 0x2b) || (iVar12 == 0x2d)) || (iVar12 == 0x20)) &&
                    ((iVar8 < *(int *)(a3 + 4) && (iVar12 = (int)(char)a3[1], iVar12 == 0x30)))) {
                    *(char **)(a3 + 0x10) = pcVar9;
                    *(int *)(a3 + 0x1c) = *(int *)(a3 + 4) - iVar8;
                    a3[0x28] = 0;
                    a3[0x29] = 0;
                    a3[0x2a] = 0;
                    a3[0x2b] = 0;
                } else if (iVar8 < *(int *)(a3 + 4)) {
                    *(int *)(a3 + 0x28) = *(int *)(a3 + 4) - iVar8;
                } else {
                    a3[0x28] = 0;
                    a3[0x29] = 0;
                    a3[0x2a] = 0;
                    a3[0x2b] = 0;
                }
                if (*(char **)(a3 + 0x14) == a1) {
                    *(u32 *)(a3 + 0x14) = *(u32 *)(a3 + 0x10);
                }
            } else {
                bVar15 = acStack_48[0] != '0';
                iVar8 = 0;
                if (bVar15) {
                    iVar3 = iVar3 + 1;
                    in_stack_ffffffa0 = in_stack_ffffffa0 + 1;
                }
                uVar10 = (u32)!bVar15;
                for (; 0 < in_stack_ffffffa0; in_stack_ffffffa0 = in_stack_ffffffa0 + -1) {
                    iVar8 = iVar8 + 1;
                    *pcVar5 = acStack_48[uVar10];
                    uVar10 = uVar10 + 1;
                    pcVar5 = pcVar5 + 1;
                }
                *pcVar5 = '.';
                pcVar13 = pcVar5;
                while (true) {
                    pcVar5 = pcVar13 + 1;
                    iVar8 = iVar8 + 1;
                    if ((iVar3 <= (int)(uVar10 - !bVar15)) || (*(int *)(a3 + 8) < 1))
                        break;
                    pcVar13 = acStack_48 + uVar10;
                    uVar10 = uVar10 + 1;
                    *pcVar5 = *pcVar13;
                    *(int *)(a3 + 8) = *(int *)(a3 + 8) + -1;
                    pcVar13 = pcVar5;
                }
                bVar1 = *a3;
                if (((bVar1 & 0x20) == 0) || (((bVar1 & 0x20) != 0 && ((bVar1 & 4) != 0)))) {
                    *(char **)(a3 + 0x14) = pcVar5;
                    iVar8 = iVar8 + *(int *)(a3 + 8);
                    *(u32 *)(a3 + 0x20) = *(u32 *)(a3 + 8);
                } else if (*pcVar13 == '0') {
                    for (; pcVar5[-1] == '0'; pcVar5 = pcVar5 + -1) {
                        iVar8 = iVar8 + -1;
                    }
                }
                if ((((*a3 & 4) == 0) && (pcVar5[-1] == '.')) && ((*(int *)(a3 + 0x20) == 0 || ((*a3 & 0x20) != 0)))) {
                    iVar3 = *(int *)(a3 + 0x20);
                    a3[0x20] = 0;
                    a3[0x21] = 0;
                    a3[0x22] = 0;
                    a3[0x23] = 0;
                    pcVar5 = pcVar5 + -1;
                    *(char **)(a3 + 0x14) = a1;
                    iVar8 = (iVar8 - iVar3) + -1;
                }
                iVar12 = (int)*a1;
                if ((((iVar12 == 0x2b) || (iVar12 == 0x2d)) || (iVar12 == 0x20)) &&
                    ((iVar8 < *(int *)(a3 + 4) && (iVar12 = (int)(char)a3[1], iVar12 == 0x30)))) {
                    *(char **)(a3 + 0x10) = pcVar9;
                    *(int *)(a3 + 0x1c) = *(int *)(a3 + 4) - iVar8;
                    a3[0x28] = 0;
                    a3[0x29] = 0;
                    a3[0x2a] = 0;
                    a3[0x2b] = 0;
                } else if (iVar8 < *(int *)(a3 + 4)) {
                    *(int *)(a3 + 0x28) = *(int *)(a3 + 4) - iVar8;
                } else {
                    a3[0x28] = 0;
                    a3[0x29] = 0;
                    a3[0x2a] = 0;
                    a3[0x2b] = 0;
                }
                if (*(char **)(a3 + 0x14) == a1) {
                    *(u32 *)(a3 + 0x14) = *(u32 *)(a3 + 0x10);
                }
            }
        } else {
            iVar8 = 0;
            if (0 < iVar3) {
                do {
                    cVar6 = *ar4_00;
                    ar4_00 = ar4_00 + 1;
                    iVar8 = iVar8 + 1;
                    *pcVar5 = cVar6;
                    pcVar5 = pcVar5 + 1;
                } while (iVar8 < iVar3);
            }
            *(char **)(a3 + 0x14) = pcVar5;
            *(int *)(a3 + 0x20) = in_stack_ffffffa0;
            iVar8 = 0;
            if ((((*a3 & 0x20) == 0) && (0 < *(int *)(a3 + 8))) || ((*a3 & 4) != 0)) {
                *pcVar5 = '.';
                iVar8 = 1;
                pcVar5 = pcVar5 + 1;
            }
            bVar1 = *a3;
            if (((bVar1 & 0x20) == 0) || (((bVar1 & 0x20) != 0 && ((bVar1 & 4) != 0)))) {
                *(char **)(a3 + 0x18) = pcVar5;
                *(u32 *)(a3 + 0x24) = *(u32 *)(a3 + 8);
                iVar8 = iVar8 + *(int *)(a3 + 8);
            }
            iVar12 = (int)*a1;
            iVar3 = iVar8 + in_stack_ffffffa0 + iVar3;
            if ((((iVar12 == 0x2b) || (iVar12 == 0x2d)) || (iVar12 == 0x20)) &&
                ((iVar3 < *(int *)(a3 + 4) && (iVar12 = (int)(char)a3[1], iVar12 == 0x30)))) {
                *(char **)(a3 + 0x10) = pcVar9;
                *(int *)(a3 + 0x1c) = *(int *)(a3 + 4) - iVar3;
                a3[0x28] = 0;
                a3[0x29] = 0;
                a3[0x2a] = 0;
                a3[0x2b] = 0;
            } else if (iVar3 < *(int *)(a3 + 4)) {
                *(int *)(a3 + 0x28) = *(int *)(a3 + 4) - iVar3;
            } else {
                a3[0x28] = 0;
                a3[0x29] = 0;
                a3[0x2a] = 0;
                a3[0x2b] = 0;
            }
        }
    } else {
        if (*(int *)(a3 + 8) + 1 < iVar3) {
            decimal_round_digits(acStack_48, *(int *)(a3 + 8) + 2);
        }
        if (acStack_48[0] != '0') {
            iVar3 = iVar3 + 1;
            in_stack_ffffffa0 = in_stack_ffffffa0 + -1;
        }
        uVar10 = (u32)(acStack_48[0] == '0');
        in_stack_ffffffa0 = in_stack_ffffffa0 + (iVar3 - uVar10);
        iVar8 = 1;
        *pcVar5 = acStack_48[uVar10];
        pcVar5[1] = '.';
        pcVar5 = pcVar5 + 1;
        while (true) {
            pcVar13 = pcVar5 + 1;
            uVar10 = uVar10 + 1;
            iVar8 = iVar8 + 1;
            if ((iVar3 < (int)uVar10) || (*(int *)(a3 + 8) < 1))
                break;
            *pcVar13 = acStack_48[uVar10];
            *(int *)(a3 + 8) = *(int *)(a3 + 8) + -1;
            pcVar5 = pcVar13;
        }
        bVar1 = *a3;
        if (((bVar1 & 0x20) == 0) || (((bVar1 & 0x20) != 0 && ((bVar1 & 4) != 0)))) {
            *(char **)(a3 + 0x14) = pcVar13;
            *(u32 *)(a3 + 0x20) = *(u32 *)(a3 + 8);
            iVar8 = iVar8 + *(int *)(a3 + 8);
        } else if (*pcVar5 == '0') {
            for (; pcVar13[-1] == '0'; pcVar13 = pcVar13 + -1) {
                iVar8 = iVar8 + -1;
            }
        }
        if ((((*a3 & 4) == 0) && (pcVar13[-1] == '.')) && ((*(int *)(a3 + 0x20) == 0 || ((*a3 & 0x20) != 0)))) {
            iVar3 = *(int *)(a3 + 0x20);
            *(char **)(a3 + 0x14) = a1;
            pcVar13 = pcVar13 + -1;
            a3[0x20] = 0;
            a3[0x21] = 0;
            a3[0x22] = 0;
            a3[0x23] = 0;
            iVar8 = (iVar8 - iVar3) + -1;
        }
        if (iStack_58 == 0x65) {
            cVar6 = 'e';
        } else {
            cVar6 = 'E';
        }
        *pcVar13 = cVar6;
        if (in_stack_ffffffa0 < 0) {
            pcVar13[1] = '-';
            in_stack_ffffffa0 = -in_stack_ffffffa0;
        } else {
            pcVar13[1] = '+';
        }
        if (in_stack_ffffffa0 < 100) {
            pcVar13[2] = '0';
            pcVar13 = pcVar13 + 3;
            iVar8 = iVar8 + 4;
            *pcVar13 = '0';
        } else {
            pcVar13 = pcVar13 + 4;
            iVar8 = iVar8 + 5;
        }
        pcVar5 = pcVar13 + 1;
        uVar11 = 10;
        for (; 0 < in_stack_ffffffa0; in_stack_ffffffa0 = libgcc_divide_helper_010468(in_stack_ffffffa0, uVar11)) {
            uVar4 = libgcc_divide_helper_010614(in_stack_ffffffa0, uVar11);
            *pcVar13 = (char)uVar4 + '0';
            pcVar13 = pcVar13 + -1;
        }
        iVar12 = (int)*a1;
        if ((((iVar12 == 0x2b) || (iVar12 == 0x2d)) || (iVar12 == 0x20)) &&
            ((iVar8 < *(int *)(a3 + 4) && (iVar12 = (int)(char)a3[1], iVar12 == 0x30)))) {
            *(char **)(a3 + 0x10) = pcVar9;
            *(int *)(a3 + 0x1c) = *(int *)(a3 + 4) - iVar8;
            a3[0x28] = 0;
            a3[0x29] = 0;
            a3[0x2a] = 0;
            a3[0x2b] = 0;
        } else if (iVar8 < *(int *)(a3 + 4)) {
            *(int *)(a3 + 0x28) = *(int *)(a3 + 4) - iVar8;
        } else {
            a3[0x28] = 0;
            a3[0x29] = 0;
            a3[0x2a] = 0;
            a3[0x2b] = 0;
        }
        if (*(char **)(a3 + 0x14) == a1) {
            *(u32 *)(a3 + 0x14) = *(u32 *)(a3 + 0x10);
        }
    }
    *pcVar5 = '\0';
    return iVar12;
}

/*
 * decimal_round_digits  0x8c013a72
 * rounds the decimal digit string a0 at digit a1, carrying into the digits before it
 * called by: libc_uses_log_message_013374
 */
u32 decimal_round_digits(char *a0, int a1) {
    u32 in_r0;
    char *pcVar1;
    char *pcVar2;

    if ('4' < a0[a1]) {
        pcVar1 = a0 + a1 + -1;
        a0[a1] = '0';
        *pcVar1 = *pcVar1 + '\x01';
        pcVar2 = pcVar1;
        for (; a0 < pcVar1; pcVar1 = pcVar1 + -1) {
            if ('9' < *pcVar1) {
                *pcVar2 = *pcVar2 + -10;
                pcVar2[-1] = pcVar2[-1] + '\x01';
            }
            pcVar2 = pcVar2 + -1;
        }
        pcVar1 = a0 + 1;
        if ('9' < *pcVar1) {
            *pcVar1 = *pcVar1 + -10;
            *a0 = *a0 + '\x01';
        }
    }
    return in_r0;
}

/*
 * abs  0x8c013adc
 * called by: CProlog_uses_abs_0b93c0, asr_uses_abs_12381c, game_sound_022128, pack_step_from_value,
 * pack_uses_abs_021ec8, se_play_3d
 */
int abs(int a0) {
    if (0 < a0) {
        return a0;
    }
    return -a0;
}

/*
 * libm_errno_wrap_013aec  0x8c013aec
 * calls libc_uses_busy_wait_5_011850 and sets errno (8c2787a8) to 0x44c for an infinite or 0x44d for a NaN result
 * called by: Vec3_cos_angle
 */
u32 libm_errno_wrap_013aec(void) {
    u32 uVar1;
    u64 in_dr0;
    char cVar2;
    u32 uStack_8;

    cVar2 = '\0';
    uVar1 = libc_uses_busy_wait_5_011850();
    if (cVar2 == '\0') {
        uStack_8 = (u32)((u64)in_dr0 >> 0x20);
    } else {
        uStack_8 = (u32)in_dr0;
    }
    if ((uStack_8 & 0x7f800000) == 0x7f800000) {
        if ((uStack_8 & 0x7fffff) == 0) {
            g_8c2787a8 = 0x44c;
        } else {
            uVar1 = 0x44d;
            g_8c2787a8 = 0x44d;
        }
    }
    return uVar1;
}

/*
 * libm_errno_wrap_013b3c  0x8c013b3c
 * calls libc_uses_busy_wait_5_011850 and sets errno (8c2787a8) to 0x44c for an infinite or 0x44d for a NaN result
 * called by: CSquidLine_uses_matrix_push_0ad354, Class_12bec0_draw_0f5e0c
 */
u32 libm_errno_wrap_013b3c(void) {
    u32 uVar1;
    u64 in_dr0;
    char cVar2;
    u32 uStack_8;

    cVar2 = '\0';
    uVar1 = libc_uses_busy_wait_5_011850();
    if (cVar2 == '\0') {
        uStack_8 = (u32)((u64)in_dr0 >> 0x20);
    } else {
        uStack_8 = (u32)in_dr0;
    }
    if ((uStack_8 & 0x7f800000) == 0x7f800000) {
        if ((uStack_8 & 0x7fffff) == 0) {
            g_8c2787a8 = 0x44c;
        } else {
            uVar1 = 0x44d;
            g_8c2787a8 = 0x44d;
        }
    }
    return uVar1;
}

/*
 * libm_errno_wrap_013b8c  0x8c013b8c
 * calls libc_uses_busy_wait_5_011b44 and sets errno (8c2787a8) to 0x44c for an infinite or 0x44d for a NaN result
 * called by: Class_1299f8_m4_019588
 */
u32 libm_errno_wrap_013b8c(u32 unused_a0, u32 a1, u32 a2, u32 a3) {
    u32 uVar1;
    u64 in_dr0;
    char cVar2;
    u32 uStack_8;

    cVar2 = '\0';
    uVar1 = libc_uses_busy_wait_5_011b44(unused_a0, a1, a2, a3);
    if (cVar2 == '\0') {
        uStack_8 = (u32)((u64)in_dr0 >> 0x20);
    } else {
        uStack_8 = (u32)in_dr0;
    }
    if ((uStack_8 & 0x7f800000) == 0x7f800000) {
        if ((uStack_8 & 0x7fffff) == 0) {
            g_8c2787a8 = 0x44c;
        } else {
            uVar1 = 0x44d;
            g_8c2787a8 = 0x44d;
        }
    }
    return uVar1;
}

/*
 * atoi  0x8c013bdc
 * strtol(a0, NULL, 10)
 * called by: game_copy_0fd764, game_state_switch_0fc94c, game_state_switch_0fcd2c, game_uses_atoi_0fc69c,
 * game_uses_strcpy_0fc7c4, speech_copy_0fa538, speech_get_index_plus1
 */
u32 atoi(u32 a0) {
    u32 uVar1;

    uVar1 = strtol(0, 10);
    return uVar1;
}

/*
 * libm_errno_wrap_013be8  0x8c013be8
 * calls libc_float_calc_011b9c and sets errno to 0x44c for an infinite or 0x44d for a NaN result
 * called by: thunk_FUN_8c013be8
 */
u32 libm_errno_wrap_013be8(void) {
    u32 r4;
    u32 r5;
    u32 r6;
    u32 r7;
    u32 uVar1;
    u64 in_dr0;
    char cVar2;
    u32 in_stack_fffffff8;
    u32 uVar3;

    cVar2 = '\0';
    uVar1 = libc_float_calc_011b9c(r4, r5, r6, r7, in_stack_fffffff8);
    if (cVar2 == '\0') {
        uVar3 = (u32)((u64)in_dr0 >> 0x20);
    } else {
        uVar3 = (u32)in_dr0;
    }
    if ((uVar3 & 0x7f800000) == 0x7f800000) {
        if ((uVar3 & 0x7fffff) == 0) {
            g_8c2787a8 = 0x44c;
        } else {
            uVar1 = 0x44d;
            g_8c2787a8 = 0x44d;
        }
    }
    return uVar1;
}

/*
 * libm_errno_wrap_013c38  0x8c013c38
 * calls libc_uses_delay_loop_6_011e10 and sets errno to 0x44c for an infinite or 0x44d for a NaN result
 * called by: cri_uses_libm_errno_wrap_260cf8
 */
u32 libm_errno_wrap_013c38(u32 unused_a0, u32 unused_a1, u32 a2, u32 a3) {
    u32 uVar1;
    u64 in_dr0;
    char cVar2;
    u32 uStack_8;

    cVar2 = '\0';
    uVar1 = libc_uses_delay_loop_6_011e10(unused_a0, unused_a1, a2, a3);
    if (cVar2 == '\0') {
        uStack_8 = (u32)((u64)in_dr0 >> 0x20);
    } else {
        uStack_8 = (u32)in_dr0;
    }
    if ((uStack_8 & 0x7f800000) == 0x7f800000) {
        if ((uStack_8 & 0x7fffff) == 0) {
            g_8c2787a8 = 0x44c;
        } else {
            uVar1 = 0x44d;
            g_8c2787a8 = 0x44d;
        }
    }
    return uVar1;
}

/*
 * libm_errno_wrap_013c88  0x8c013c88
 * calls libc_uses_delay_loop_6_011e10 and sets errno to 0x44c for an infinite or 0x44d for a NaN result
 */
u32 libm_errno_wrap_013c88(u32 unused_a0, u32 unused_a1, u32 a2, u32 a3) {
    u32 uVar1;
    u64 in_dr0;
    char cVar2;
    u32 uStack_8;

    cVar2 = '\0';
    uVar1 = libc_uses_delay_loop_6_011e10(unused_a0, unused_a1, a2, a3);
    if (cVar2 == '\0') {
        uStack_8 = (u32)((u64)in_dr0 >> 0x20);
    } else {
        uStack_8 = (u32)in_dr0;
    }
    if ((uStack_8 & 0x7f800000) == 0x7f800000) {
        if ((uStack_8 & 0x7fffff) == 0) {
            g_8c2787a8 = 0x44c;
        } else {
            uVar1 = 0x44d;
            g_8c2787a8 = 0x44d;
        }
    }
    return uVar1;
}

/*
 * libm_errno_wrap_013cd8  0x8c013cd8
 * calls libc_calls_calc_011f18 and sets errno to 0x44c for an infinite or 0x44d for a NaN result
 */
u32 libm_errno_wrap_013cd8(void) {
    u32 uVar1;
    u64 in_dr0;
    char cVar2;
    u32 uStack_8;

    cVar2 = '\0';
    uVar1 = libm_exp();
    if (cVar2 == '\0') {
        uStack_8 = (u32)((u64)in_dr0 >> 0x20);
    } else {
        uStack_8 = (u32)in_dr0;
    }
    if ((uStack_8 & 0x7f800000) == 0x7f800000) {
        if ((uStack_8 & 0x7fffff) == 0) {
            g_8c2787a8 = 0x44c;
        } else {
            uVar1 = 0x44d;
            g_8c2787a8 = 0x44d;
        }
    }
    return uVar1;
}

/*
 * libm_errno_wrap_013d28  0x8c013d28
 * calls libc_float_calc_011bfc and sets errno to 0x44c for an infinite or 0x44d for a NaN result
 */
u32 libm_errno_wrap_013d28(void) {
    u32 r4;
    u32 r5;
    u32 r6;
    u32 r7;
    u32 uVar1;
    u64 in_dr0;
    char cVar2;
    u32 in_stack_fffffff8;
    u32 uVar3;

    cVar2 = '\0';
    uVar1 = libc_float_calc_011bfc(r4, r5, r6, r7, in_stack_fffffff8);
    if (cVar2 == '\0') {
        uVar3 = (u32)((u64)in_dr0 >> 0x20);
    } else {
        uVar3 = (u32)in_dr0;
    }
    if ((uVar3 & 0x7f800000) == 0x7f800000) {
        if ((uVar3 & 0x7fffff) == 0) {
            g_8c2787a8 = 0x44c;
        } else {
            uVar1 = 0x44d;
            g_8c2787a8 = 0x44d;
        }
    }
    return uVar1;
}

/*
 * frexpf_exponent  0x8c013d78
 * stores the binary exponent of fr4 (as frexp counts it) in *a0; 0 for zero, errno for inf/NaN
 * called by: pvr_draw_235f84
 */
u32 frexpf_exponent(int *a0, u32 unused_a1, u32 unused_a2, u32 unused_a3, u32 ain0) {
    float in_fr4;

    if (in_fr4 == 0.0) {
        *a0 = 0;
    } else {
        if (((u32)in_fr4 & 0x7f800000) != 0x7f800000) {
            *a0 = ((int)((u32)in_fr4 & 0x7f800000) >> 0x17) + -0x7e;
            return ain0;
        }
        if (((u32)in_fr4 & 0x7fffff) == 0) {
            ain0 = 0x44c;
            g_8c2787a8 = 0x44c;
        } else {
            g_8c2787a8 = 0x44d;
        }
    }
    return ain0;
}

/*
 * labs  0x8c013dec
 * |a0|
 * called by: alt_entry_123602, asr_talk_1235fc
 */
int labs(int a0) {
    if (0 < a0) {
        return a0;
    }
    return -a0;
}

/*
 * libm_errno_wrap_013dfc  0x8c013dfc
 * calls libc_scan_loop_012090 and sets errno to 0x44c for an infinite or 0x44d for a NaN result
 */
u32 libm_errno_wrap_013dfc(u32 unused_a0, u32 a1, u32 a2, u32 a3) {
    u32 uVar1;
    u64 in_dr0;
    char cVar2;
    u32 uStack_8;

    cVar2 = '\0';
    uVar1 = libc_scan_loop_012090(unused_a0, a1, a2, a3);
    if (cVar2 == '\0') {
        uStack_8 = (u32)((u64)in_dr0 >> 0x20);
    } else {
        uStack_8 = (u32)in_dr0;
    }
    if ((uStack_8 & 0x7f800000) == 0x7f800000) {
        if ((uStack_8 & 0x7fffff) == 0) {
            g_8c2787a8 = 0x44c;
        } else {
            uVar1 = 0x44d;
            g_8c2787a8 = 0x44d;
        }
    }
    return uVar1;
}

/*
 * srand  0x8c013e4c
 * sets the rand() seed (0x8c2787b0)
 * called by: alt_entry_1f69fa, shinobi_uses_srand_1f69f2, shinobi_uses_srand_1f6a30, shinobi_uses_srand_1f6a34
 */
int srand(u32 unused_a0, int a1) {
    int iVar1;

    g_8c2787b0 = a1;
    iVar1 = g_8c2787b0;
    if (iVar1 == 0) {
        iVar1 = 1;
    }
    return iVar1;
}

/*
 * memcmp  0x8c013ec0
 * called by: CProlog_uses_free_sys_0b96e4, alt_entry_1f5cac, alt_entry_1f5d04, alt_entry_1f6d56,
 * asr_uses_lib11c_check_handle_11e534, asr_uses_lib11c_check_handle_11ea3c, cri_uses_memcmp_260658,
 * flashrom_count_mismatching_blocks (+10 more)
 */
u32 memcmp(char *a0, char *a1, u32 a2) {
    char cVar1;
    char cVar2;
    u32 uVar3;

    if (a2 == 0) {
        return 0;
    }
    uVar3 = 0;
    if (a2 != 0) {
        do {
            cVar1 = *a1;
            a1 = a1 + 1;
            cVar2 = *a0;
            a0 = a0 + 1;
            if (cVar2 != cVar1)
                break;
            uVar3 = uVar3 + 1;
        } while (uVar3 < a2);
    }
    return (u32)(u8)a0[-1] - (u32)(u8)a1[-1];
}

/*
 * memmove  0x8c013ef4
 * called by: CProlog_uses_free_sys_0b96e4, alt_entry_0117da, alt_entry_111cec, alt_entry_11319e, alt_entry_266c54,
 * asr_copy_10a308, asr_copy_10a410, asr_copy_10a4bc (+63 more)
 */
u32 *memmove(u32 *a0, u32 *a1, u32 a2) {
    u8 uVar1;
    u16 uVar2;
    u32 *puVar3;
    u32 uVar4;
    u32 uVar5;
    u32 uVar6;
    u32 uVar7;
    u32 *puVar8;

    if ((a0 != a1) && (a2 != 0)) {
        uVar6 = a2 >> 1;
        uVar5 = (u32)a0 | (u32)a1 | a2;
        uVar7 = a2 >> 2;
        if (a0 < a1) {
            puVar3 = a0;
            if ((uVar5 & 1) == 0) {
                if ((uVar5 & 3) == 0) {
                    do {
                        uVar4 = *a1;
                        a1 = a1 + 1;
                        uVar7 = uVar7 - 1;
                        *puVar3 = uVar4;
                        puVar3 = puVar3 + 1;
                    } while (uVar7 != 0);
                } else {
                    do {
                        uVar2 = *(u16 *)a1;
                        a1 = (u32 *)((int)a1 + 2);
                        uVar6 = uVar6 - 1;
                        *(u16 *)puVar3 = uVar2;
                        puVar3 = (u32 *)((int)puVar3 + 2);
                    } while (uVar6 != 0);
                }
            } else {
                do {
                    uVar1 = *(u8 *)a1;
                    a1 = (u32 *)((int)a1 + 1);
                    a2 = a2 - 1;
                    *(u8 *)puVar3 = uVar1;
                    puVar3 = (u32 *)((int)puVar3 + 1);
                } while (a2 != 0);
            }
        } else {
            puVar3 = (u32 *)((int)a0 + a2);
            puVar8 = (u32 *)((int)a1 + a2);
            if ((uVar5 & 1) == 0) {
                if ((uVar5 & 3) == 0) {
                    do {
                        puVar8 = puVar8 + -1;
                        uVar7 = uVar7 - 1;
                        puVar3 = puVar3 + -1;
                        *puVar3 = *puVar8;
                    } while (uVar7 != 0);
                } else {
                    do {
                        puVar8 = (u32 *)((int)puVar8 + -2);
                        uVar6 = uVar6 - 1;
                        puVar3 = (u32 *)((int)puVar3 + -2);
                        *(u16 *)puVar3 = *(u16 *)puVar8;
                    } while (uVar6 != 0);
                }
            } else {
                do {
                    puVar8 = (u32 *)((int)puVar8 + -1);
                    a2 = a2 - 1;
                    puVar3 = (u32 *)((int)puVar3 + -1);
                    *(u8 *)puVar3 = *(u8 *)puVar8;
                } while (a2 != 0);
            }
        }
    }
    return a0;
}

/*
 * memmove_bytes  0x8c013fb4
 * byte-wise copy that handles overlapping buffers
 * called by: CAnimal_draw_029510, CAnimal_uses_njGetMatrix_026968, game_copy_0d1eb8, game_copy_0d1f38,
 * game_uses_obj_set_texlist_0297b8, memmove_bytes_wrap, memmove_bytes_wrap_024378, nautilus_group_reset (+1 more)
 */
u8 *memmove_bytes(u8 *a0, u8 *a1, u32 a2) {
    u8 uVar1;
    u32 uVar2;
    u8 *puVar3;
    u8 *puVar4;

    if (a0 != a1) {
        if (a0 < a1) {
            uVar2 = 0;
            puVar3 = a0;
            if (a2 != 0) {
                do {
                    uVar1 = *a1;
                    a1 = a1 + 1;
                    uVar2 = uVar2 + 1;
                    *puVar3 = uVar1;
                    puVar3 = puVar3 + 1;
                } while (uVar2 < a2);
            }
        } else {
            uVar2 = 0;
            puVar4 = a0 + a2;
            puVar3 = a1 + a2;
            if (a2 != 0) {
                do {
                    puVar3 = puVar3 + -1;
                    uVar2 = uVar2 + 1;
                    puVar4 = puVar4 + -1;
                    *puVar4 = *puVar3;
                } while (uVar2 < a2);
            }
        }
    }
    return a0;
}

/*
 * memset  0x8c013ff8
 * called by: ADXF_Close_like, ADXF_LoadPartition, ADXSTM_uses_ADXT_Stop_like_2639fa,
 * ADXSTM_uses_SJRBF_Create_like_263840, ADXT_uses_libgcc_divide_helper_264308, alt_entry_123eae, alt_entry_1f68f6,
 * alt_entry_1f7c50 (+95 more)
 */
u8 *memset(u8 *a0, u32 a1, u32 a2) {
    u8 *puVar1;
    u32 uVar2;

    uVar2 = 0;
    puVar1 = a0;
    if (a2 != 0) {
        do {
            uVar2 = uVar2 + 1;
            *puVar1 = (u8)a1;
            puVar1 = puVar1 + 1;
        } while (uVar2 < a2);
    }
    return a0;
}

/*
 * free_if_nonnull  0x8c014010
 * called by: CAnimal_m0_025688, CAnimal_m0_0361d8, CAnimal_m0_038648, CAnimal_m0_08516c, CAnimal_m0_08800c,
 * CAnimal_m0_0aca4c, CAnimal_release_0253ec, CAnimal_release_025490 (+151 more)
 */
u32 free_if_nonnull(int a0) {
    u32 r5;
    u32 r6;
    u32 r7;
    u32 in_r0;

    if (a0 != 0) {
        in_r0 = malloc_calc_1fb586(a0, r5, r6, r7);
    }
    return in_r0;
}

/*
 * operator_new  0x8c014028
 * calls the allocator (8c1fb4b8) and, while it returns NULL and a new-handler is set (0x8c12c4f0), calls the handler
 * and retries called by: CItemGLoader_state_switch_0fef94
 */
int operator_new(u32 a0, u32 a1, u32 a2, u32 a3) {
    u8 *puVar1;
    u8 *puVar2;
    int iVar3;

    puVar2 = (&malloc_sys);
    puVar1 = (&DATA_8c12c4f0);
    while ((iVar3 = (*(code *)puVar2)(a0, a1, a2, a3), iVar3 == 0 && (*(int *)(&DATA_8c12c4f0) != 0))) {
        (**(code **)puVar1)(0, a1, a2, a3);
    }
    return iVar3;
}

/*
 * libm_errno_wrap_014064  0x8c014064
 * calls libc_calls_scan_loop_0121bc and sets errno to 0x44c for an infinite or 0x44d for a NaN result
 */
u32 libm_errno_wrap_014064(void) {
    u32 r4;
    u32 r5;
    u32 r6;
    u32 r7;
    u32 uVar1;
    u64 in_dr0;
    char cVar2;
    u32 in_stack_fffffff8;
    u32 uVar3;

    cVar2 = '\0';
    uVar1 = libc_uses_libm_exp_0121bc(r4, r5, r6, r7, in_stack_fffffff8);
    if (cVar2 == '\0') {
        uVar3 = (u32)((u64)in_dr0 >> 0x20);
    } else {
        uVar3 = (u32)in_dr0;
    }
    if ((uVar3 & 0x7f800000) == 0x7f800000) {
        if ((uVar3 & 0x7fffff) == 0) {
            g_8c2787a8 = 0x44c;
        } else {
            uVar1 = 0x44d;
            g_8c2787a8 = 0x44d;
        }
    }
    return uVar1;
}

/*
 * libc_calls_fill_loop_0140b4  0x8c0140b4
 * area name: in the libc library code range; behaviour name: its callees mostly do: fill_loop
 * called by: asr_uses_libgcc_divide_helper_11a634
 */
u32 libc_calls_fill_loop_0140b4(u32 a0, u32 a1, u32 a2, u32 a3) {
    u32 uVar1;

    uVar1 = libc_fill_loop_0140cc(1, a1, &stack0xfffffff0, a3, a0);
    return uVar1;
}

/*
 * libc_fill_loop_0140cc  0x8c0140cc
 * area name: in the libc library code range; behaviour name: a loop that writes memory
 * called by: libc_calls_fill_loop_0140b4, libc_fill_loop_0140cc
 */
int libc_fill_loop_0140cc(u32 a0, u32 a1, int *a2, int a3, int ain0) {
    char cVar1;
    int iVar2;
    u32 uVar3;
    int *a6;
    u32 ain0_00;
    int a5;
    u32 ar5_00;
    u32 uVar4;
    u32 ar4_00;
    int iVar5;

    a6 = a2;
    do {
        while (true) {
            ain0_00 = (a1 - a0 >> 1) + a0;
            a5 = (ain0_00 - 1) * a2[1] + *a2;
            ar5_00 = a1;
            ar4_00 = a0;
            while ((ar4_00 != 0 && (ar4_00 <= ar5_00))) {
                while (iVar2 = (*(code *)a2[2])((ar4_00 - 1) * a2[1] + *a2, a5, a6, a3), uVar4 = ar5_00, iVar2 < 0) {
                    ar4_00 = ar4_00 + 1;
                }
                while (ain0 = (*(code *)a2[2])(a5, (uVar4 - 1) * a2[1] + *a2, a6, a3), ain0 < 0) {
                    uVar4 = uVar4 - 1;
                }
                ar5_00 = uVar4;
                if (ar4_00 <= uVar4) {
                    ar5_00 = uVar4 - 1;
                    for (uVar3 = 0; uVar3 < (u32)a2[1]; uVar3 = uVar3 + 1) {
                        iVar2 = *a2;
                        iVar5 = (ar4_00 - 1) * a2[1];
                        ain0 = iVar5 + iVar2;
                        cVar1 = *(char *)(ain0 + uVar3);
                        a3 = (int)cVar1;
                        a6 = (int *)(ar5_00 * a2[1] + iVar2 + uVar3);
                        *(char *)(iVar5 + iVar2 + uVar3) = (char)*a6;
                        *(char *)(ar5_00 * a2[1] + *a2 + uVar3) = cVar1;
                    }
                    if (ar4_00 == ain0_00) {
                        a5 = ar5_00 * a2[1] + *a2;
                    } else if (uVar4 == ain0_00) {
                        a5 = (ar4_00 - 1) * a2[1] + *a2;
                    }
                    ar4_00 = ar4_00 + 1;
                }
            }
            if (a1 - ar4_00 <= ar5_00 - a0)
                break;
            if (a0 < ar5_00) {
                a6 = a2;
                ain0 = libc_fill_loop_0140cc(a0, ar5_00, a2, a3, ain0_00);
            }
            a0 = ar4_00;
            if (a1 <= ar4_00) {
                return ain0;
            }
        }
        if (ar4_00 < a1) {
            a6 = a2;
            ain0 = libc_fill_loop_0140cc(ar4_00, a1, a2, a3, ain0_00);
        }
        a1 = ar5_00;
    } while (a0 < ar5_00);
    return ain0;
}

/*
 * rand  0x8c014200
 * called by: CAnimBody_random_flags_delay, CAnimal_ctor, CAnimal_uses_set_field_4_on_field_f8_02911c,
 * Class_1297f4_uses_rand_014be4, Class_129808_m0_0147a4, Class_12a0c4_state_switch_0679cc,
 * Class_12a0c4_state_switch_068e64, Class_12a0c4_uses_libgcc_divide_helper_067594 (+62 more)
 */
u32 rand(void) {
    u32 uVar1;
    u32 uVar2;

    uVar1 = (u32)0x7fff;
    uVar2 = *(int *)(&DATA_8c12c4e8) * 0x41c64e6d + (int)0x3039;
    *(u32 *)(&DATA_8c12c4e8) = uVar2;
    return uVar2 >> 0x10 & uVar1;
}

/*
 * libc_float_calc_01422c  0x8c01422c
 * area name: in the libc library code range; behaviour name: floating-point arithmetic
 * called by: alt_entry_1f69fa, shinobi_copy_1f672c, shinobi_copy_1f67c2, shinobi_uses_srand_1f6a34
 */
u32 libc_float_calc_01422c(int a0, u32 a1, u32 a2, u32 a3, u32 ain0, u32 ain1) {
    u32 in_r2;
    u32 in_r3;
    u32 unaff_r8;
    u32 unaff_r9;
    u32 unaff_r10;
    u32 unaff_r11;
    u32 unaff_r13;
    u32 unaff_r14;
    u32 in_fr1;
    u32 in_fr0;
    u32 in_fr3;
    u32 in_fr2;
    u32 in_fr5;
    u32 in_fr4;
    u32 in_fr7;
    u32 in_fr6;
    u32 in_fr9;
    u32 in_fr8;
    u32 in_fr11;
    u32 in_fr10;
    u32 in_fr13;
    u32 in_fr12;
    u32 in_fr15;
    u32 in_fr14;
    u32 in_GBR;
    u32 in_MACH;
    u32 in_MACL;
    u32 in_PR;
    u32 in_FPUL;
    u8 in_FPSCR_RM;
    u8 in_FPSCR_FLAG;
    u8 in_FPSCR_ENABLE;
    u8 in_FPSCR_CAUSE;
    u8 in_FPSCR_DN;
    u8 in_FPSCR_FR;

    *(BADSPACEBASE **)a0 = register0x0000003c;
    *(u32 *)(a0 + 4) = unaff_r14;
    *(u32 *)(a0 + 8) = in_PR;
    *(u32 *)(a0 + 0xc) = unaff_r13;
    *(u32 *)(a0 + 0x10) = 0;
    *(u32 *)(a0 + 0x14) = unaff_r11;
    *(u32 *)(a0 + 0x18) = unaff_r10;
    *(u32 *)(a0 + 0x1c) = unaff_r9;
    *(u32 *)(a0 + 0x20) = unaff_r8;
    *(u32 *)(a0 + 0x24) = a3;
    *(u32 *)(a0 + 0x28) = a2;
    *(u32 *)(a0 + 0x2c) = a1;
    *(int *)(a0 + 0x30) = a0;
    *(u32 *)(a0 + 0x34) = in_r3;
    *(u32 *)(a0 + 0x38) = in_r2;
    *(u32 *)(a0 + 0x3c) = ain1;
    *(u32 *)(a0 + 0x40) = ain0;
    *(u32 *)(a0 + 0x44) = in_MACH;
    *(u32 *)(a0 + 0x48) = in_MACL;
    *(u32 *)(a0 + 0x4c) = in_GBR;
    *(u32 *)(a0 + 0x94) = (u32)in_FPSCR_RM | (u32)in_FPSCR_FLAG << 2 | (u32)in_FPSCR_ENABLE << 7 |
                          (u32)in_FPSCR_CAUSE << 0xc | (u32)in_FPSCR_DN << 0x12 | (u32)in_FPSCR_FR << 0x15;
    *(u32 *)(a0 + 0x90) = in_FPUL;
    *(u32 *)(a0 + 0x8c) = in_fr15;
    *(u32 *)(a0 + 0x88) = in_fr14;
    *(u32 *)(a0 + 0x84) = in_fr13;
    *(u32 *)(a0 + 0x80) = in_fr12;
    *(u32 *)(a0 + 0x7c) = in_fr11;
    *(u32 *)(a0 + 0x78) = in_fr10;
    *(u32 *)(a0 + 0x74) = in_fr9;
    *(u32 *)(a0 + 0x70) = in_fr8;
    *(u32 *)(a0 + 0x6c) = in_fr7;
    *(u32 *)(a0 + 0x68) = in_fr6;
    *(u32 *)(a0 + 100) = in_fr5;
    *(u32 *)(a0 + 0x60) = in_fr4;
    *(u32 *)(a0 + 0x5c) = in_fr3;
    *(u32 *)(a0 + 0x58) = in_fr2;
    *(u32 *)(a0 + 0x54) = in_fr1;
    *(u32 *)(a0 + 0x50) = in_fr0;
    return 0;
}

/*
 * libm_errno_wrap_014294  0x8c014294
 * calls libc_uses_delay_loop_6_012328 and sets errno to 0x44c for an infinite or 0x44d for a NaN result
 * called by: ambient_sound_update
 */
u32 libm_errno_wrap_014294(u32 unused_a0, u32 unused_a1, u32 unused_a2, u32 a3) {
    u32 uVar1;
    u64 in_dr0;
    char cVar2;
    u32 uStack_8;

    cVar2 = '\0';
    uVar1 = libc_uses_delay_loop_6_012328(unused_a0, unused_a1, unused_a2, a3);
    if (cVar2 == '\0') {
        uStack_8 = (u32)((u64)in_dr0 >> 0x20);
    } else {
        uStack_8 = (u32)in_dr0;
    }
    if ((uStack_8 & 0x7f800000) == 0x7f800000) {
        if ((uStack_8 & 0x7fffff) == 0) {
            g_8c2787a8 = 0x44c;
        } else {
            uVar1 = 0x44d;
            g_8c2787a8 = 0x44d;
        }
    }
    return uVar1;
}

/*
 * libm_errno_wrap_0142e4  0x8c0142e4
 * calls libc_uses_delay_loop_6_012328 and sets errno to 0x44c for an infinite or 0x44d for a NaN result
 */
u32 libm_errno_wrap_0142e4(u32 unused_a0, u32 unused_a1, u32 unused_a2, u32 a3) {
    u32 uVar1;
    u64 in_dr0;
    char cVar2;
    u32 uStack_8;

    cVar2 = '\0';
    uVar1 = libc_uses_delay_loop_6_012328(unused_a0, unused_a1, unused_a2, a3);
    if (cVar2 == '\0') {
        uStack_8 = (u32)((u64)in_dr0 >> 0x20);
    } else {
        uStack_8 = (u32)in_dr0;
    }
    if ((uStack_8 & 0x7f800000) == 0x7f800000) {
        if ((uStack_8 & 0x7fffff) == 0) {
            g_8c2787a8 = 0x44c;
        } else {
            uVar1 = 0x44d;
            g_8c2787a8 = 0x44d;
        }
    }
    return uVar1;
}

/*
 * sprintf  0x8c014334
 * called by: CAnimal_m1_0f41c8, CFrogManEgg_ctor, CFrogManLine_ctor, CHigyoEgg_ctor, CMothEgg_ctor,
 * CMushroomerEgg_ctor, CSpiderEgg_ctor, Class_12bce0_ctor (+16 more)
 */
u32 sprintf(u32 a0, u32 unused_a1, u32 unused_a2, u32 unused_a3, u32 s0) {
    u32 uVar1;

    uVar1 = format_output(1, 0, a0, s0);
    return uVar1;
}

/*
 * libc_update_fields_014370  0x8c014370
 * area name: in the libc library code range; behaviour name: conditionally writes members
 * called by: game_init
 */
u32 libc_update_fields_014370(u32 a0) {
    u32 in_r0;

    *(u32 *)(&DATA_8c12c4e8) = a0;
    return in_r0;
}

/*
 * strcat  0x8c01437c
 * called by: asr_uses_strcpy_0fbf28, filename_add_ext_if_missing, game_copy_0fae24, game_uses_strcmp_01dea4,
 * msg_substitute_name, pack_find_entry_by_name, speech_start, speech_start_chapter (+6 more)
 */
char *strcat(char *a0, char *a1) {
    char cVar1;
    char *pcVar2;

    for (pcVar2 = a0; *pcVar2 != '\0'; pcVar2 = pcVar2 + 1) {
    }
    do {
        cVar1 = *a1;
        a1 = a1 + 1;
        *pcVar2 = cVar1;
        pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    return a0;
}

/*
 * strcmp_01439c  0x8c01439c
 * strcmp_word(a0, a1)
 * called by: kamui_cfg_get
 */
u32 strcmp_01439c(u32 a0, u32 a1) {
    u32 uVar1;

    uVar1 = strcmp_word(a0, a1);
    return uVar1;
}

/*
 * log_message  0x8c0143b0
 * called by: filename_add_ext_if_missing, format_output, gfxlib_copy_238f2a, gfxlib_copy_239f84,
 * gfxlib_uses_log_message_2341d6, gfxlib_uses_sprintf_234834, libc_uses_log_message_013374, msg_substitute_name (+7
 * more)
 */
int log_message(char *a0, u32 a1, u32 a2) {
    char cVar1;
    int iVar2;

    iVar2 = 0;
    while (cVar1 = *a0, a0 = a0 + 1, cVar1 != '\0') {
        iVar2 = iVar2 + 1;
    }
    return iVar2;
}

/*
 * strncpy  0x8c0143c0
 * called by: ADXSTM_OpenFname, ADXSTM_OpenFnameRange, ADXSTM_OpenRange, named_list_ctor_0c, named_list_ctor_14,
 * named_list_ctor_170, named_list_ctor_58
 */
char *strncpy(char *a0, char *a1, u32 a2) {
    char cVar1;
    u32 uVar2;
    char *pcVar3;

    uVar2 = 0;
    pcVar3 = a0;
    while (true) {
        if (a2 <= uVar2) {
            return a0;
        }
        if (*a1 == '\0')
            break;
        cVar1 = *a1;
        a1 = a1 + 1;
        uVar2 = uVar2 + 1;
        *pcVar3 = cVar1;
        pcVar3 = pcVar3 + 1;
    }
    for (; uVar2 < a2; uVar2 = uVar2 + 1) {
        *pcVar3 = '\0';
        pcVar3 = pcVar3 + 1;
    }
    return a0;
}

/*
 * strtol  0x8c0143f0
 * called by: atoi
 */
u32 strtol(u8 *a0, u32 *a1, int a2) {
    u8 bVar1;
    bool bVar2;
    char cVar3;
    int iVar4;
    u32 uVar5;
    int iVar6;
    u8 *pbVar7;
    u8 *pbVar8;
    u32 uStack_34;
    u32 uStack_30;

    uStack_34 = 0;
    uStack_30 = 0;
    iVar6 = a2;
    pbVar7 = a0;
    while (((&g_8c125470)[*pbVar7] & 0x40) != 0) {
        pbVar7 = pbVar7 + 1;
        iVar4 = strtol_too_long(pbVar7, a0);
        if (iVar4 != 0) {
            return 0;
        }
    }
    if ((*pbVar7 == 0x2b) || (*pbVar7 == 0x2d)) {
        bVar1 = *pbVar7;
        pbVar7 = pbVar7 + 1;
        uStack_30 = (u32)(bVar1 == 0x2d);
        iVar4 = strtol_too_long(pbVar7, a0);
        if (iVar4 != 0) {
            return 0;
        }
    }
    pbVar8 = pbVar7;
    if (a2 == 0) {
        if (*pbVar7 == 0x30) {
            pbVar8 = pbVar7 + 1;
            iVar4 = strtol_too_long(pbVar8, a0);
            if (iVar4 != 0) {
                return 0;
            }
            iVar4 = (int)(char)*pbVar8;
            if (((&g_8c125470)[*pbVar8] & 1) != 0) {
                iVar4 = iVar4 + 0x20;
            }
            if (iVar4 == 0x78) {
                iVar4 = strtol_too_long(pbVar7 + 2, a0);
                if (iVar4 != 0) {
                    return 0;
                }
                a2 = 0x10;
                pbVar8 = pbVar7 + 2;
            } else {
                a2 = 8;
            }
        } else {
            a2 = 10;
        }
    } else if ((a2 == 0x10) && (*pbVar7 == 0x30)) {
        pbVar8 = pbVar7 + 1;
        iVar4 = (int)(char)*pbVar8;
        if (((&g_8c125470)[*pbVar8] & 1) != 0) {
            iVar4 = iVar4 + 0x20;
        }
        if (iVar4 == 0x78) {
            pbVar8 = pbVar7 + 2;
        }
        iVar4 = strtol_too_long(pbVar8, a0);
        if (iVar4 != 0) {
            return 0;
        }
    }
    if ((a2 < 2) || (0x24 < a2)) {
        g_8c2787a8 = 0x4b0;
    } else {
        if (a2 < 0xb) {
            cVar3 = (char)a2 + '/';
        } else {
            cVar3 = (char)a2 + 'V';
        }
        iVar4 = (int)(char)*pbVar8;
        if (((&g_8c125470)[*pbVar8] & 7) != 0) {
            if (((&g_8c125470)[*pbVar8] & 1) != 0) {
                iVar4 = iVar4 + 0x20;
            }
            if (iVar4 <= cVar3) {
                while (*pbVar8 == 0x30) {
                    pbVar8 = pbVar8 + 1;
                    iVar4 = strtol_too_long(pbVar8, a0);
                    if (iVar4 != 0) {
                        return 0;
                    }
                }
                bVar2 = false;
                uStack_34 = 0;
                while (true) {
                    iVar4 = (int)(char)*pbVar8;
                    if (((&g_8c125470)[*pbVar8] & 7) == 0)
                        break;
                    if (((&g_8c125470)[*pbVar8] & 1) != 0) {
                        iVar4 = iVar4 + 0x20;
                    }
                    if (cVar3 < iVar4)
                        break;
                    if (!bVar2) {
                        if (((&g_8c125470)[*pbVar8] & 4) == 0) {
                            iVar4 = (int)(char)*pbVar8;
                            if (((&g_8c125470)[*pbVar8] & 1) != 0) {
                                iVar4 = iVar4 + 0x20;
                            }
                            iVar4 = iVar4 + -0x57;
                        } else {
                            iVar4 = (char)*pbVar8 + -0x30;
                        }
                        uVar5 = libgcc_divide_helper_01051c((uStack_30 - iVar4) + 0x7fffffff, a2);
                        if (uVar5 < uStack_34) {
                            bVar2 = true;
                        } else {
                            uStack_34 = a2 * uStack_34 + iVar4;
                        }
                    }
                    pbVar8 = pbVar8 + 1;
                    iVar4 = strtol_too_long(pbVar8, a0);
                    if (iVar4 != 0) {
                        return 0;
                    }
                }
                if (bVar2) {
                    g_8c2787a8 = 0x44c;
                    if (uStack_30 == 0) {
                        uStack_34 = 0x7fffffff;
                    } else {
                        uStack_34 = 0x80000000;
                    }
                } else if (uStack_30 != 0) {
                    uStack_34 = -uStack_34;
                }
            }
        }
        iVar4 = (int)(char)*pbVar8;
        if (((&g_8c125470)[*pbVar8] & 1) != 0) {
            iVar4 = iVar4 + 0x20;
        }
        pbVar7 = pbVar8;
        if (iVar4 == 0x75) {
            pbVar7 = pbVar8 + 1;
            iVar4 = (int)(char)*pbVar7;
            if (((&g_8c125470)[*pbVar7] & 1) != 0) {
                iVar4 = iVar4 + 0x20;
            }
            if (iVar4 == 0x6c) {
                pbVar7 = pbVar8 + 2;
            }
        }
        iVar4 = (int)(char)*pbVar7;
        if (((&g_8c125470)[*pbVar7] & 1) != 0) {
            iVar4 = iVar4 + 0x20;
        }
        pbVar8 = pbVar7;
        if (iVar4 == 0x6c) {
            pbVar8 = pbVar7 + 1;
            iVar4 = (int)(char)*pbVar8;
            if (((&g_8c125470)[*pbVar8] & 1) != 0) {
                iVar4 = iVar4 + 0x20;
            }
            if (iVar4 == 0x75) {
                pbVar8 = pbVar7 + 2;
            }
        }
        iVar6 = strtol_too_long(pbVar8, a0);
        if (iVar6 != 0) {
            return 0;
        }
    }
    if (a1 != NULL) {
        *a1 = pbVar8;
        return uStack_34;
    }
    return uStack_34;
}

/*
 * toupper_0146b4  0x8c0146b4
 * upper-case of character a0 (ctype table 8c125470, lower-case bit 2)
 */
int toupper_0146b4(u32 a0) {
    if (((&DATA_8c125470)[a0 & 0xff] & 2) != 0) {
        return a0 - 0x20;
    }
    return a0;
}

/*
 * vsprintf_like  0x8c0146d0
 * called by: alt_entry_1f4574, cri_error_printf, debug_log_printf, debug_printf, debug_printf_to_hook,
 * lib_error_printf, sd_error_printf
 */
u32 vsprintf_like(u32 a0, u32 a1, u32 a2) {
    u32 uVar1;

    uVar1 = format_output(1, 0, a0, a1);
    return uVar1;
}

/*
 * game_vec_0146f8  0x8c0146f8
 * area name: game code; nothing names its area yet; behaviour name: mostly calls vec functions
 * called by: game_vec_0d77d8
 */
int *game_vec_0146f8(int *a0, u32 a1, u32 a2, u32 a3) {
    *a0 = (int)(&DATA_8c129808);
    Vec3_ctor_zero(a0 + 1, a1, a2);
    Vec3_ctor_zero(a0 + 5, a1, a2);
    a0[10] = 0x8c2787e8;
    g_8c27882c = 0x3f777777;
    0x8c27882c [1] = 0x3333333;
    set_flags_14_60(a0[10]);
    (**(code **)(*a0 + 0x14))(a0, a1, a2, a3);
    return a0;
}

/*
 * set_flags_14_60  0x8c014764
 * sets bits 5 and 6 of the flags at +0x14
 * called by: CSquid_Init, Class_12b930_uses_vec_new_array_0d2fd8,
 * Class_12bec0_uses_Class_129808_set_params_by_m_0f5b10, game_uses_set_flags_14_60_0149dc, game_vec_0146f8
 */
u32 set_flags_14_60(int a0) {
    u32 uVar1;

    *(u32 *)(a0 + 0x14) = *(u32 *)(a0 + 0x14) | 0x40;
    uVar1 = set_flag_14_20(a0);
    return uVar1;
}

/*
 * set_flag_14_20  0x8c014790
 * sets bit 5 of the flags at +0x14
 * called by: CSquid_Init, Class_12b3b8_ctor, Class_12b930_uses_vec_new_array_0d2fd8,
 * Class_12bec0_uses_Class_129808_set_params_by_m_0f5b10, set_flag_14_bit31_and_20, set_flags_14_60
 */
u32 set_flag_14_20(int a0) {
    u32 uVar1;

    uVar1 = *(u32 *)(a0 + 0x14) | 0x20;
    *(u32 *)(a0 + 0x14) = uVar1;
    return uVar1;
}

/*
 * Class_129808_m0_0147a4  0x8c0147a4
 */
u32 Class_129808_m0_0147a4(int a0, u32 a1, u32 a2, u32 unused_a3, u32 s0, u32 s4) {
    int iVar1;
    int iVar2;
    float fVar3;
    double dVar4;
    u32 in_fr3;
    double dVar5;
    u32 in_fr5;
    u32 in_fr4;
    u32 in_fr7;
    u32 in_fr6;
    u32 in_fr9;
    u32 in_fr8;
    u32 in_fr11;
    u32 in_fr10;
    u64 in_xd0;
    char cVar6;
    char cVar7;
    u32 uStack_1c;

    cVar7 = '\0';
    cVar6 = '\0';
    iVar2 = a0;
    iVar1 = rand();
    if (cVar7 == '\0') {
        dVar5 = (double)CONCAT44(in_fr5, in_fr3);
    } else {
        dVar5 = (double)CONCAT44(in_fr6, in_fr5);
    }
    if (cVar7 == '\0') {
        dVar4 = (double)CONCAT44(0x47000000, (float)iVar1);
    } else {
        dVar4 = 1.6066918754608114e+73;
    }
    if (cVar6 == '\0') {
        fVar3 = SUB84(dVar4, 0) / (float)((u64)dVar4 >> 0x20);
        dVar5 = (double)CONCAT44((float)((u64)dVar5 >> 0x20) * fVar3, SUB84(dVar5, 0));
    } else {
        fVar3 = SUB84(dVar4 / dVar4, 0);
        dVar5 = dVar5 * (dVar4 / dVar4);
    }
    if (cVar7 == '\0') {
        dVar4 = (double)CONCAT44(in_fr4, fVar3);
    } else {
        dVar4 = (double)CONCAT44(in_fr5, in_fr4);
    }
    if (cVar6 == '\0') {
        dVar5 = (double)CONCAT44((float)((u64)dVar5 >> 0x20) + (float)((u64)dVar4 >> 0x20), SUB84(dVar5, 0));
    } else {
        dVar5 = dVar5 + dVar4;
    }
    if (cVar7 == '\0') {
        *(int *)(a0 + 4) = (int)((u64)dVar5 >> 0x20);
    } else {
        *(double *)(a0 + 4) = dVar5;
    }
    iVar1 = rand();
    if (cVar7 == '\0') {
        dVar5 = (double)CONCAT44(in_fr7, SUB84(dVar5, 0));
    } else {
        dVar5 = (double)CONCAT44(in_fr8, in_fr7);
    }
    if (cVar7 == '\0') {
        dVar4 = (double)CONCAT44(0x47000000, (float)iVar1);
    } else {
        dVar4 = 1.6066918754608114e+73;
    }
    if (cVar6 == '\0') {
        fVar3 = SUB84(dVar4, 0) / (float)((u64)dVar4 >> 0x20);
        dVar5 = (double)CONCAT44((float)((u64)dVar5 >> 0x20) * fVar3, SUB84(dVar5, 0));
    } else {
        fVar3 = SUB84(dVar4 / dVar4, 0);
        dVar5 = dVar5 * (dVar4 / dVar4);
    }
    if (cVar7 == '\0') {
        dVar4 = (double)CONCAT44(in_fr6, fVar3);
    } else {
        dVar4 = (double)CONCAT44(in_fr7, in_fr6);
    }
    if (cVar6 == '\0') {
        dVar5 = (double)CONCAT44((float)((u64)dVar5 >> 0x20) + (float)((u64)dVar4 >> 0x20), SUB84(dVar5, 0));
    } else {
        dVar5 = dVar5 + dVar4;
    }
    if (cVar7 == '\0') {
        *(int *)(a0 + 8) = (int)((u64)dVar5 >> 0x20);
    } else {
        *(double *)(a0 + 8) = dVar5;
    }
    iVar1 = rand();
    if (cVar7 == '\0') {
        dVar5 = (double)CONCAT44(in_fr9, SUB84(dVar5, 0));
    } else {
        dVar5 = (double)CONCAT44(in_fr10, in_fr9);
    }
    if (cVar7 == '\0') {
        dVar4 = (double)CONCAT44(0x47000000, (float)iVar1);
    } else {
        dVar4 = 1.6066918754608114e+73;
    }
    if (cVar6 == '\0') {
        fVar3 = SUB84(dVar4, 0) / (float)((u64)dVar4 >> 0x20);
        dVar5 = (double)CONCAT44((float)((u64)dVar5 >> 0x20) * fVar3, SUB84(dVar5, 0));
    } else {
        fVar3 = SUB84(dVar4 / dVar4, 0);
        dVar5 = dVar5 * (dVar4 / dVar4);
    }
    if (cVar7 == '\0') {
        dVar4 = (double)CONCAT44(in_fr8, fVar3);
    } else {
        dVar4 = (double)CONCAT44(in_fr9, in_fr8);
    }
    if (cVar6 == '\0') {
        dVar5 = (double)CONCAT44((float)((u64)dVar5 >> 0x20) + (float)((u64)dVar4 >> 0x20), SUB84(dVar5, 0));
    } else {
        dVar5 = dVar5 + dVar4;
    }
    if (cVar7 == '\0') {
        *(int *)(a0 + 0xc) = (int)((u64)dVar5 >> 0x20);
    } else {
        *(double *)(a0 + 0xc) = dVar5;
    }
    iVar2 = rand();
    if (cVar7 == '\0') {
        dVar5 = (double)CONCAT44(in_fr11, SUB84(dVar5, 0));
    } else {
        dVar5 = (double)CONCAT44(uStack_1c, in_fr11);
    }
    if (cVar7 == '\0') {
        dVar4 = (double)CONCAT44(0x47000000, (float)iVar2);
    } else {
        dVar4 = 1.6066918754608114e+73;
    }
    if (cVar6 == '\0') {
        fVar3 = SUB84(dVar4, 0) / (float)((u64)dVar4 >> 0x20);
        dVar5 = (double)CONCAT44((float)((u64)dVar5 >> 0x20) * fVar3, SUB84(dVar5, 0));
    } else {
        fVar3 = SUB84(dVar4 / dVar4, 0);
        dVar5 = dVar5 * (dVar4 / dVar4);
    }
    if (cVar7 == '\0') {
        dVar4 = (double)CONCAT44(in_fr10, fVar3);
    } else {
        dVar4 = (double)CONCAT44(in_fr11, in_fr10);
    }
    if (cVar6 == '\0') {
        dVar5 = (double)CONCAT44((float)((u64)dVar5 >> 0x20) + (float)((u64)dVar4 >> 0x20), SUB84(dVar5, 0));
    } else {
        dVar5 = dVar5 + dVar4;
    }
    if (cVar7 == '\0') {
        *(int *)(a0 + 0x24) = (int)((u64)dVar5 >> 0x20);
        dVar5 = (double)CONCAT44(*(u32 *)(a0 + 0x24), *(u32 *)(a0 + 0x18));
    } else {
        *(double *)(a0 + 0x24) = dVar5;
        in_xd0 = *(u64 *)(a0 + 0x18);
        dVar5 = *(double *)(a0 + 0x24);
    }
    if (cVar6 == '\0') {
        fVar3 = SUB84(dVar5, 0) * (float)((u64)dVar5 >> 0x20);
    } else {
        fVar3 = SUB84(dVar5 * dVar5, 0);
    }
    if (cVar7 == '\0') {
        *(float *)(a0 + 0x18) = fVar3;
    } else {
        *(u64 *)(a0 + 0x18) = in_xd0;
    }
    if (cVar7 == '\0') {
        *(u32 *)(a0 + 0x14) = s0;
    } else {
        *(u64 *)(a0 + 0x14) = CONCAT44(s4, s0);
    }
    return 0x3c;
}

/*
 * Class_129808_m1_014894  0x8c014894
 */
u32 Class_129808_m1_014894(int *a0, u32 unused_a1, u32 a2, u32 a3) {
    u32 uVar1;
    int *ar5_00;
    float in_fr1;
    float fVar2;
    float in_fr4;
    float in_PR;
    char cVar3;
    char cVar4;

    cVar4 = '\0';
    cVar3 = '\0';
    ar5_00 = a0 + 5;
    Vec3_add_assign(a0 + 1, ar5_00);
    if (cVar4 == '\0') {
        in_fr1 = (float)a0[2];
    }
    uVar1 = 0;
    fVar2 = in_fr4;
    if (cVar4 == '\0') {
        fVar2 = in_fr1;
        in_PR = in_fr4;
    }
    if (cVar3 == '\0' && fVar2 < in_PR) {
        uVar1 = (**(code **)(*a0 + 0x14))(a0, ar5_00, a2, a3);
    }
    return uVar1;
}

/*
 * Class_129808_m2_0148d8  0x8c0148d8
 * called by: Class_12bea8_draw_ground_quad
 */
u32 Class_129808_m2_0148d8(int a0) {
    u32 *ar5_00;
    u8 *ar6_00;
    u32 uVar1;
    u32 uStack_20;
    u32 uStack_1c;
    u32 uStack_18;
    float fStack_14;
    float fStack_10;
    float fStack_c;

    ar5_00 = &uStack_20;
    uStack_20 = *(u32 *)(a0 + 4);
    uStack_1c = *(u32 *)(a0 + 8);
    uStack_18 = *(u32 *)(a0 + 0xc);
    fStack_14 = *(float *)(a0 + 4) - *(float *)(a0 + 0x14) * 3.0;
    fStack_10 = *(float *)(a0 + 8) - *(float *)(a0 + 0x18) * 3.0;
    fStack_c = *(float *)(a0 + 0xc) - *(float *)(a0 + 0x1c) * 3.0;
    uVar1 = 2;
    ar6_00 = &g_8c27882c;
    Class_129808_set_params_by_mode(*(u32 *)(a0 + 0x28), &uStack_20, &g_8c27882c, 2);
    uVar1 = Class_129808_calc_016504(*(u32 *)(a0 + 0x28), ar5_00, ar6_00, uVar1);
    return uVar1;
}

/*
 * Class_129808_m3_014978  0x8c014978
 * called by: Class_12bea8_m3_0d7ac0
 */
u32 Class_129808_m3_014978(int a0) {
    u32 uVar1;
    u32 in_fr5;
    u32 in_fr4;

    *(u32 *)(a0 + 0x24) = in_fr4;
    *(u32 *)(a0 + 8) = in_fr5;
    *(u32 *)(a0 + 0x14) = 0;
    *(u32 *)(a0 + 0x18) = 0xbf800000;
    *(u32 *)(a0 + 0x1c) = 0;
    uVar1 = clear_field_2c(a0);
    return uVar1;
}

/*
 * clear_field_2c  0x8c0149d4
 * called by: Class_129808_m3_014978, Class_12bea8_copy_0d7dcc
 */
u32 clear_field_2c(int a0) {
    *(u32 *)(a0 + 0x2c) = 0;
    return 0;
}

/*
 * game_uses_set_flags_14_60_0149dc  0x8c0149dc
 * area name: game code; nothing names its area yet; behaviour name: its main named callee is set_flags_14_60
 * called by: Class_12bea8_uses_set_flags_14_60_0d7e24
 */
u32 game_uses_set_flags_14_60_0149dc(int a0, u32 a1, u32 a2) {
    u32 uVar1;

    g_8c27882c = a1;
    0x8c27882c [1] = a2;
    uVar1 = set_flags_14_60(*(u32 *)(a0 + 0x28));
    return uVar1;
}

/*
 * set_flag_28_20  0x8c014a0c
 * +0x28 |= 0x20
 * called by: UsrPointer_LoadTexture, game_vec_0d25b4
 */
u32 set_flag_28_20(int a0) {
    u32 uVar1;

    uVar1 = *(u32 *)(a0 + 0x28) | 0x20;
    *(u32 *)(a0 + 0x28) = uVar1;
    return uVar1;
}

/*
 * set_flag_10_28  0x8c014a20
 * ORs 0x10 into the flags at +0x28
 * called by: game_vec_0d25b4
 */
u32 set_flag_10_28(int a0) {
    u32 uVar1;

    uVar1 = *(u32 *)(a0 + 0x28) | 0x10;
    *(u32 *)(a0 + 0x28) = uVar1;
    return uVar1;
}

/*
 * object_dtor_delete  0x8c014a34
 * called by: CAnimal_m0_025688, CAnimal_release_0253ec, CHerb_vec_06d838, COutside_Create, CSoilTank_Create,
 * CSquidLine_vec_085c3c, CWaterTank_CreateStage, CWaterTank_uses_get_field_300_0e0f48 (+123 more)
 */
int object_dtor_delete(int a0, u32 a1, u32 a2, u32 a3) {
    u32 in_stack_fffffff4;

    if ((a0 != 0) && (0 < (short)a1)) {
        free_if_nonnull(a0, a1, a2, a3, CONCAT22((short)((u32)in_stack_fffffff4 >> 0x10), (short)a1));
    }
    return a0;
}

/*
 * set_flag_14_bit31_and_20  0x8c014a64
 * sets bit 31 of +0x14, then set_flag_14_20
 * called by: CSquid_Init, Class_12b930_uses_vec_new_array_0d2fd8, Class_12bec0_uses_Class_129808_set_params_by_m_0f5b10
 */
u32 set_flag_14_bit31_and_20(int a0) {
    u32 uVar1;

    *(u32 *)(a0 + 0x14) = *(u32 *)(a0 + 0x14) | 0x80000000;
    uVar1 = set_flag_14_20(a0);
    return uVar1;
}

/*
 * obj_set_texture_num  0x8c014a94
 * njSetTextureNum(a1)
 * called by: CEnv_set_texlist, CGame_draw_0c3e78, CSquidLine_uses_matrix_push_0ad354,
 * Class_12b3b8_uses_object_dtor_delete_0e7a78, Class_12bea8_draw_ground_quad, Class_12bec0_draw_0f5e0c,
 * Class_12bec0_draw_0f5f08, ambient_sound_update (+23 more)
 */
u32 obj_set_texture_num(u32 a0, u32 a1) {
    u32 uVar1;

    uVar1 = njSetTextureNum(a1);
    return uVar1;
}

/*
 * Class_1297f4_ctor  0x8c014ab0
 * stores the vtable 0x8c1297f4
 */
u32 *Class_1297f4_ctor(u32 *a0, u32 a1, u32 a2, u32 a3) {
    u32 uVar1;
    u32 ar5_00;
    int iVar2;
    u32 uVar3;
    u64 in_dr0;
    u64 uVar4;
    u32 in_PR;
    char cVar5;
    u32 uStack_10;
    u32 uStack_c;

    cVar5 = '\0';
    *a0 = 0x8c1297f4;
    Vec3_ctor_zero(a0 + 0x15, a1, a2);
    a0[0x1f] = 0;
    a0[0x20] = 0xffffffff;
    a0[0x21] = particle_step;
    a0[0x22] = 0;
    a0[0x23] = 0xffffffff;
    a0[0x24] = particle_trail_step;
    a0[0x25] = 0;
    a0[0x26] = 0xffffffff;
    a0[0x27] = game_draw_015054;
    a0[0x28] = 0;
    a0[0x29] = 0xffffffff;
    a0[0x2a] = game_draw_015098;
    uStack_c = in_PR;
    for (iVar2 = 0; uVar3 = (u32)in_dr0, iVar2 < 5; iVar2 = iVar2 + 1) {
        if (cVar5 == '\0') {
            uStack_10 = 0;
        } else {
            uStack_c = 0;
            uStack_10 = uVar3;
        }
        uVar1 = uStack_10;
        if (cVar5 == '\0') {
            a0[iVar2 * 3 + 3] = uStack_10;
        } else {
            *(u64 *)(a0 + iVar2 * 3 + 3) = CONCAT44(uStack_c, uStack_10);
            uStack_10 = uStack_c;
            uVar3 = uVar1;
        }
        if (cVar5 == '\0') {
            uVar4 = CONCAT44(uVar1, uVar3);
            a0[iVar2 * 3 + 2] = uVar1;
        } else {
            uVar4 = CONCAT44(uStack_10, uVar1);
            *(u64 *)(a0 + iVar2 * 3 + 2) = uVar4;
        }
        if (cVar5 == '\0') {
            in_dr0 = CONCAT44(uVar1, (int)uVar4);
            a0[iVar2 * 3 + 1] = uVar1;
        } else {
            in_dr0 = CONCAT44(uStack_10, uVar1);
            *(u64 *)(a0 + iVar2 * 3 + 1) = in_dr0;
        }
    }
    ar5_00 = 0xffffffff;
    Class_1297f4_fill_loop_014ef8(a0, 0xffffffff);
    a0[0x1a] = 0;
    *(u8 *)(a0 + 0x1e) = 1;
    if (cVar5 == '\0') {
        a0[0x1d] = 0;
        a0[0x1c] = 0x3ca3d70a;
    } else {
        *(u64 *)(a0 + 0x1d) = (u64)uVar3;
        *(u64 *)(a0 + 0x1c) = 0x8c014d903ca3d70a;
    }
    Class_1297f4_vec_014d90(a0, ar5_00, a2, a3);
    return a0;
}

/*
 * Class_1297f4_uses_rand_014be4  0x8c014be4
 * area name: sits between Class_1297f4 functions (same compilation unit); behaviour name: its main named callee is rand
 * called by: static_init_4374c8
 */
u32 Class_1297f4_uses_rand_014be4(int a0, u32 a1, u32 a2) {
    int iVar1;
    int iVar2;
    u32 uVar3;
    float fVar4;
    double dVar5;
    u32 in_fr3;
    double dVar6;
    u32 in_fr5;
    u32 in_fr4;
    u32 in_fr7;
    u32 in_fr6;
    u32 in_fr9;
    u32 in_fr8;
    char cVar7;
    char cVar8;
    u32 uStack_20;

    cVar8 = '\0';
    cVar7 = '\0';
    iVar2 = a0;
    uVar3 = a1;
    iVar1 = rand();
    if (cVar8 == '\0') {
        dVar6 = (double)CONCAT44(in_fr5, in_fr3);
    } else {
        dVar6 = (double)CONCAT44(in_fr6, in_fr5);
    }
    if (cVar8 == '\0') {
        dVar5 = (double)CONCAT44(0x47000000, (float)iVar1);
    } else {
        dVar5 = -7.554616947321253e-251;
    }
    if (cVar7 == '\0') {
        fVar4 = SUB84(dVar5, 0) / (float)((u64)dVar5 >> 0x20);
        dVar6 = (double)CONCAT44((float)((u64)dVar6 >> 0x20) * fVar4, SUB84(dVar6, 0));
    } else {
        fVar4 = SUB84(dVar5 / dVar5, 0);
        dVar6 = dVar6 * (dVar5 / dVar5);
    }
    if (cVar8 == '\0') {
        dVar5 = (double)CONCAT44(in_fr4, fVar4);
    } else {
        dVar5 = (double)CONCAT44(in_fr5, in_fr4);
    }
    if (cVar7 == '\0') {
        dVar6 = (double)CONCAT44((float)((u64)dVar6 >> 0x20) + (float)((u64)dVar5 >> 0x20), SUB84(dVar6, 0));
    } else {
        dVar6 = dVar6 + dVar5;
    }
    if (cVar8 == '\0') {
        *(int *)(a0 + 4) = (int)((u64)dVar6 >> 0x20);
    } else {
        *(double *)(a0 + 4) = dVar6;
    }
    iVar1 = rand();
    if (cVar8 == '\0') {
        dVar6 = (double)CONCAT44(in_fr7, SUB84(dVar6, 0));
    } else {
        dVar6 = (double)CONCAT44(in_fr8, in_fr7);
    }
    if (cVar8 == '\0') {
        dVar5 = (double)CONCAT44(0x47000000, (float)iVar1);
    } else {
        dVar5 = -7.554616947321253e-251;
    }
    if (cVar7 == '\0') {
        fVar4 = SUB84(dVar5, 0) / (float)((u64)dVar5 >> 0x20);
        dVar6 = (double)CONCAT44((float)((u64)dVar6 >> 0x20) * fVar4, SUB84(dVar6, 0));
    } else {
        fVar4 = SUB84(dVar5 / dVar5, 0);
        dVar6 = dVar6 * (dVar5 / dVar5);
    }
    if (cVar8 == '\0') {
        dVar5 = (double)CONCAT44(in_fr6, fVar4);
    } else {
        dVar5 = (double)CONCAT44(in_fr7, in_fr6);
    }
    if (cVar7 == '\0') {
        dVar6 = (double)CONCAT44((float)((u64)dVar6 >> 0x20) + (float)((u64)dVar5 >> 0x20), SUB84(dVar6, 0));
    } else {
        dVar6 = dVar6 + dVar5;
    }
    if (cVar8 == '\0') {
        *(int *)(a0 + 8) = (int)((u64)dVar6 >> 0x20);
    } else {
        *(double *)(a0 + 8) = dVar6;
    }
    iVar2 = rand();
    if (cVar8 == '\0') {
        dVar6 = (double)CONCAT44(in_fr9, SUB84(dVar6, 0));
    } else {
        dVar6 = (double)CONCAT44(uStack_20, in_fr9);
    }
    if (cVar8 == '\0') {
        dVar5 = (double)CONCAT44(0x47000000, (float)iVar2);
    } else {
        dVar5 = -7.554616947321253e-251;
    }
    if (cVar7 == '\0') {
        fVar4 = SUB84(dVar5, 0) / (float)((u64)dVar5 >> 0x20);
        dVar6 = (double)CONCAT44((float)((u64)dVar6 >> 0x20) * fVar4, SUB84(dVar6, 0));
    } else {
        fVar4 = SUB84(dVar5 / dVar5, 0);
        dVar6 = dVar6 * (dVar5 / dVar5);
    }
    if (cVar8 == '\0') {
        dVar5 = (double)CONCAT44(in_fr8, fVar4);
    } else {
        dVar5 = (double)CONCAT44(in_fr9, in_fr8);
    }
    if (cVar7 == '\0') {
        dVar6 = (double)CONCAT44((float)((u64)dVar6 >> 0x20) + (float)((u64)dVar5 >> 0x20), SUB84(dVar6, 0));
    } else {
        dVar6 = dVar6 + dVar5;
    }
    if (cVar8 == '\0') {
        *(int *)(a0 + 0xc) = (int)((u64)dVar6 >> 0x20);
    } else {
        *(double *)(a0 + 0xc) = dVar6;
    }
    *(u32 *)(a0 + 0x40) = a1;
    for (iVar2 = 1; iVar2 < 5; iVar2 = iVar2 + 1) {
        iVar1 = iVar2 * 0xc + a0;
        uVar3 = *(u32 *)(a0 + 8);
        *(u32 *)(iVar1 + 4) = *(u32 *)(a0 + 4);
        *(u32 *)(iVar1 + 8) = uVar3;
        *(u32 *)(iVar1 + 0xc) = *(u32 *)(a0 + 0xc);
    }
    uVar3 = Class_1297f4_fill_loop_014ef8(a0, a1);
    return uVar3;
}

/*
 * CSprinkler_vec_014cd4  0x8c014cd4
 * area name: only called from CSprinkler methods; behaviour name: mostly calls vec functions
 * called by: CSprinkler_LoadTexture
 */
u32 CSprinkler_vec_014cd4(u32 a0, u32 a1, u32 a2, u32 a3) {
    u32 uVar1;

    uVar1 = Class_1297f4_vec_014d90(a0, a1, a2, a3);
    return uVar1;
}

/*
 * Class_1297f4_m0_014cf0  0x8c014cf0
 */
u32 Class_1297f4_m0_014cf0(float a0, u32 a1, u32 a2, u32 a3) {
    u32 uVar1;
    float in_fr1;
    float fVar2;
    float fVar3;
    float in_fr4;
    char cVar4;
    char cVar5;

    cVar5 = '\0';
    cVar4 = '\0';
    pure_virtual_stub();
    *(short *)((int)a0 + 0x6c) = *(short *)((int)a0 + 0x6c) + 1;
    if (cVar5 == '\0') {
        in_fr1 = *(float *)((int)a0 + 8);
    }
    uVar1 = 0;
    fVar2 = in_fr4;
    fVar3 = a0;
    if (cVar5 == '\0') {
        fVar2 = in_fr1;
        fVar3 = in_fr4;
    }
    if (cVar4 == '\0' && fVar2 < fVar3) {
        uVar1 = Class_1297f4_vec_014d90(a0, a1, a2, a3);
    }
    return uVar1;
}

/*
 * pure_virtual_stub_wrap  0x8c014d54
 * only calls pure_virtual_stub
 */
u32 pure_virtual_stub_wrap(void) {
    u32 uVar1;

    uVar1 = pure_virtual_stub();
    return uVar1;
}

/*
 * Class_1297f4_vec_014d90  0x8c014d90
 * area name: only called from Class_1297f4 methods; behaviour name: mostly calls vec functions
 * called by: CSprinkler_vec_014cd4, Class_1297f4_ctor, Class_1297f4_m0_014cf0, game_vec_0d0b04
 */
u32 Class_1297f4_vec_014d90(int a0, u32 a1, u32 a2, u32 a3) {
    int iVar1;

    for (iVar1 = 0; iVar1 < 5; iVar1 = iVar1 + 1) {
        *(u32 *)(iVar1 * 0xc + a0 + 0xc) = 0;
        *(u32 *)(iVar1 * 0xc + a0 + 8) = 0;
        *(u32 *)(iVar1 * 0xc + a0 + 4) = 0;
    }
    *(u32 *)(a0 + 100) = 0;
    vec3_clear(a0 + 0x54, a1, a2, a3);
    *(u16 *)(a0 + 0x6c) = 0;
    return 0x6c;
}

/*
 * vec3_clear  0x8c014e20
 * called by: CMushroomerBody_AwayFrom, Class_1297f4_vec_014d90, Class_1299f8_clear, Class_1299f8_clear_b,
 * Class_129a24_m1_019b68, Class_12a03c_m1_03c43c, Class_12a25c_m1_06f530, Class_12a25c_vec_06f4c8 (+39 more)
 */
u32 *vec3_clear(u32 *a0, u32 a1, u32 a2, u32 a3) {
    *a0 = 0;
    a0[1] = 0;
    a0[2] = 0;
    return a0 + 1;
}

/*
 * Vec3_add_fr_54_dirty  0x8c014e38
 * adds (fr4, fr5, fr6) to the vector at +0x54 and sets the changed flag +0x64
 * called by: static_init_4374c8
 */
u32 Vec3_add_fr_54_dirty(int a0) {
    u32 uVar1;
    float in_fr5;
    float in_fr4;
    float in_fr6;

    *(float *)(a0 + 0x54) = *(float *)(a0 + 0x54) + in_fr4;
    *(float *)(a0 + 0x58) = *(float *)(a0 + 0x58) + in_fr5;
    *(float *)(a0 + 0x5c) = *(float *)(a0 + 0x5c) + in_fr6;
    uVar1 = set_field_64_to_1(a0);
    return uVar1;
}

/*
 * set_field_64_to_1  0x8c014ea0
 * called by: Vec3_add_fr_54_dirty
 */
u32 set_field_64_to_1(int a0) {
    *(u32 *)(a0 + 100) = 1;
    return 100;
}

/*
 * Vec3_vec_014eac  0x8c014eac
 * area name: sits between Vec3 functions (same compilation unit); behaviour name: mostly calls vec functions
 * called by: game_uses_obj_set_texlist_0d1168
 */
u32 Vec3_vec_014eac(u32 unused_a0, u32 a1, u32 a2, u32 a3, u32 s0) {
    u8 auStack_18[20];

    Vec3_ctor_xyz(auStack_18, a1, a2, a3);
    Vec3_ctor_copy(s0, auStack_18, a2, a3);
    Vec3_dtor(auStack_18, 0xffffffff, a2, a3);
    return 0;
}

/*
 * Class_1297f4_fill_loop_014ef8  0x8c014ef8
 * area name: only called from Class_1297f4 methods; behaviour name: a loop that writes memory
 * called by: Class_1297f4_ctor, Class_1297f4_uses_rand_014be4
 */
u32 Class_1297f4_fill_loop_014ef8(int a0, u32 a1) {
    u32 uVar1;
    int iVar2;
    float fVar3;
    u32 uStack_c;

    fVar3 = 1.0;
    if (*(int *)(a0 + 0x68) == 1) {
        for (iVar2 = 0; uVar1 = 5, iVar2 < 5; iVar2 = iVar2 + 1) {
            fVar3 = fVar3 - 0.2;
            uStack_c = CONCAT13((char)(int)((float)(a1 >> 0x18) * fVar3), (s32)a1);
            *(u32 *)(a0 + iVar2 * 4 + 0x40) = uStack_c;
        }
    } else {
        uVar1 = 0x40;
        *(u32 *)(a0 + 0x40) = a1;
    }
    return uVar1;
}

/*
 * particle_step  0x8c014f74
 * position (+4) += velocity (+0x54); then velocity y -= gravity (+0x70)
 * called by: game_vec_0d0b04, particle_trail_step
 */
float *particle_step(int a0) {
    *(float *)(a0 + 4) = *(float *)(a0 + 4) + *(float *)(a0 + 0x54);
    *(float *)(a0 + 8) = *(float *)(a0 + 8) + *(float *)(a0 + 0x58);
    *(float *)(a0 + 0xc) = *(float *)(a0 + 0xc) + *(float *)(a0 + 0x5c);
    *(float *)(a0 + 0x58) = *(float *)(a0 + 0x58) - *(float *)(a0 + 0x70);
    return (float *)(a0 + 0x58);
}

/*
 * particle_trail_step  0x8c014fd0
 * every N frames (+0x6c mod +0x78) shifts the four trail positions back one slot, then steps the particle
 */
u32 particle_trail_step(int a0, u32 unused_a1, u32 a2, u32 a3) {
    u32 ar5_00;
    int iVar1;
    u32 uVar2;
    int iVar3;
    int iVar4;

    ar5_00 = (u32) * (u8 *)(a0 + 0x78);
    iVar1 = (*(code *)(&libgcc_divide_helper_01031c))((u32) * (u16 *)(a0 + 0x6c), ar5_00, a2, a3);
    if (iVar1 == 0) {
        for (iVar1 = 4; 0 < iVar1; iVar1 = iVar1 + -1) {
            iVar4 = iVar1 * 0xc + a0;
            iVar3 = (iVar1 + -1) * 0xc + a0;
            uVar2 = *(u32 *)(iVar3 + 8);
            *(u32 *)(iVar4 + 4) = *(u32 *)(iVar3 + 4);
            *(u32 *)(iVar4 + 8) = uVar2;
            *(u32 *)(iVar4 + 0xc) = *(u32 *)(iVar3 + 0xc);
        }
    }
    uVar2 = particle_step(a0);
    return uVar2;
}

/*
 * game_draw_015054  0x8c015054
 * area name: game code; nothing names its area yet; behaviour name: mostly calls draw functions
 */
u32 game_draw_015054(int a0, u32 unused_a1, u32 unused_a2, u32 a3) {
    u32 uVar1;
    int iStack_18;
    int iStack_14;
    u32 uStack_10;
    u32 uStack_c;

    uStack_10 = *(u32 *)((&DATA_8c12c52c) + 8);
    uStack_c = *(u32 *)((&DATA_8c12c52c) + 0xc);
    iStack_18 = a0 + 4;
    iStack_14 = a0 + 0x40;
    uVar1 = gfxlib_draw_234fd0(&iStack_18, 1, 0x40, a3);
    return uVar1;
}

/*
 * game_draw_015098  0x8c015098
 * area name: game code; nothing names its area yet; behaviour name: mostly calls draw functions
 */
u32 game_draw_015098(int a0, u32 unused_a1, u32 unused_a2, u32 a3) {
    u32 uVar1;
    int iStack_18;
    int iStack_14;
    u32 uStack_10;
    u32 uStack_c;

    uStack_10 = *(u32 *)((&DATA_8c12c53c) + 8);
    uStack_c = *(u32 *)((&DATA_8c12c53c) + 0xc);
    iStack_18 = a0 + 4;
    iStack_14 = a0 + 0x40;
    uVar1 = gfxlib_draw_234d68(&iStack_18, 4, 0x42, a3);
    return uVar1;
}

/*
 * noop_0150dc  0x8c0150dc
 */
u32 noop_0150dc(void) {
    u32 in_r0;

    return in_r0;
}

/*
 * static_init_vec3s_2787b8  0x8c0150e0
 * static initialiser: builds four global Vec3 constants (8c2787b8..8c2787dc) and registers their destructors, then the
 * object at 8c2787e8
 */
u32 static_init_vec3s_2787b8(u32 unused_a0, u32 a1, u32 a2, u32 a3) {
    u32 uVar1;
    u32 uVar2;
    u8 *puVar3;

    uVar1 = Vec3_ctor_xyz((&DATA_8c125888), a1, a2, a3);
    puVar3 = (&Vec3_dtor);
    uVar2 = 0x8c2787b8;
    global_list_push(uVar1, (&Vec3_dtor), 0x8c2787b8, a3);
    uVar1 = Vec3_ctor_xyz((&DATA_8c125898), puVar3, uVar2, a3);
    puVar3 = (&Vec3_dtor);
    uVar2 = 0x8c2787c4;
    global_list_push(uVar1, (&Vec3_dtor), 0x8c2787c4, a3);
    uVar1 = Vec3_ctor_xyz((&DATA_8c1258a8), puVar3, uVar2, a3);
    puVar3 = (&Vec3_dtor);
    uVar2 = 0x8c2787d0;
    global_list_push(uVar1, (&Vec3_dtor), 0x8c2787d0, a3);
    uVar1 = Vec3_ctor_xyz((&DATA_8c1258b8), puVar3, uVar2, a3);
    puVar3 = (&Vec3_dtor);
    uVar2 = 0x8c2787dc;
    global_list_push(uVar1, (&Vec3_dtor), 0x8c2787dc, a3);
    uVar2 = Class_129808_copy_016410(0x8c2787e8);
    return uVar2;
}

/*
 * set_field_10  0x8c015198
 * called by: CGame_Init, Class_129808_m6_0166b4, Class_12b3b8_uses_object_dtor_delete_0e7a78, Class_12bb08_ctor,
 * ambient_sound_update, bugbox_3_screen, confirm_exit_save, fullscreen_quad_init (+11 more)
 */
u32 set_field_10(int a0, u32 a1) {
    u32 in_r0;

    *(u32 *)(a0 + 0x10) = a1;
    return in_r0;
}

/*
 * free_if_nonnull_wrap_0151a0  0x8c0151a0
 * called by: Class_129808_m6_0166b4, Class_12984c_release_0c4b84, Class_12b350_dtor,
 * Class_12b3b8_uses_object_dtor_delete_0e7a78, Class_12bb08_dtor, ambient_sound_update, confirm_exit_save,
 * game_release_0cfed8 (+10 more)
 */
int free_if_nonnull_wrap_0151a0(int a0, u32 a1, u32 a2, u32 a3) {
    u32 in_stack_fffffff4;

    if ((a0 != 0) && (0 < (short)a1)) {
        free_if_nonnull(a0, a1, a2, a3, CONCAT22((short)((u32)in_stack_fffffff4 >> 0x10), (short)a1));
    }
    return a0;
}

/*
 * thunk_FUN_8c0151e8  0x8c0151d0
 * called by: CHeater_CreateModel, CSoilTank_Create, game_calls_one_0151fc, game_uses_get_field_0_06b460
 */
u32 thunk_FUN_8c0151e8(short *a0, u32 a1) {
    while (true) {
        if (*a0 == 0xff) {
            return 0;
        }
        if ((char)*a0 == (char)a1)
            break;
        a0 = a0 + 1;
    }
    return a0;
}

/*
 * find_byte_in_ff_list  0x8c0151e8
 * the entry whose low byte is a1 in the 0xff-terminated u16 list a0, else 0
 */
u32 find_byte_in_ff_list(short *a0, u32 a1) {
    while (true) {
        if (*a0 == 0xff) {
            return 0;
        }
        if ((char)*a0 == (char)a1)
            break;
        a0 = a0 + 1;
    }
    return a0;
}

/*
 * game_calls_one_0151fc  0x8c0151fc
 * area name: game code; nothing names its area yet; behaviour name: calls 1 not yet named function
 * called by: WATER_ELEMENT_release, WE_CreateStageC
 */
u32 game_calls_one_0151fc(u32 a0) {
    u32 uVar1;

    uVar1 = thunk_FUN_8c0151e8(a0, 0x17);
    return uVar1;
}

/*
 * Class_129920_ctor  0x8c015224
 * called by: CSquid_Init, Class_129908_ctor, Class_12a0c4_ctor, Class_12b350_ctor, Class_12b388_ctor,
 * Class_12b580_ctor, Class_12b758_ctor, Class_12b758_uses_Class_129920_ctor_0d5e9c (+17 more)
 */
u32 *Class_129920_ctor(u32 *a0, u32 a1) {
    *a0 = (&DATA_8c129920);
    clear_field_4(a0);
    return a0;
}

/*
 * Class_129920_m0_015248  0x8c015248
 * called by: CEnv_LoadDevicePanelTexture, CGame_Initial, CGame_LoadForEvent1Models, FrogMan_asset_tables_init,
 * GillMan_asset_tables_init, common_load_eye_scsi
 */
u32 Class_129920_m0_015248(int a0, u32 a1, u32 a2, u32 a3) {
    u32 in_r0;

    *(u32 *)(a0 + 4) = a1;
    return in_r0;
}

/*
 * CTexture_LoadFromCache  0x8c015250
 * called by: CTexture_LoadFromCache_on_field_20, CTexture_LoadFromCache_on_field_488, CTexture_LoadFromCache_wrap,
 * CTexture_LoadFromCache_wrap_0d09fc, CTexture_LoadFromCache_wrap_0d14b0, CTexture_LoadFromCache_wrap_0d6058,
 * env_load_textures_0e0320, obj_load_texlist_28 (+3 more) strings: "Failed to set texture..:%s";
 * "CTexture::LoadFromCache()"; "Failed to load from cache..:%s"; "CTexture::LoadFromCache()"
 */
u32 CTexture_LoadFromCache(int a0, u32 a1, u32 a2, u32 a3) {
    int iVar1;
    u32 uVar2;
    u8 auStack_108[260];

    iVar1 = njSetTexture(*(u32 *)(a0 + 4));
    if (iVar1 == -1) {
        (*(code *)(&sprintf))(auStack_108, a1, a2, a3, "Failed to set texture..:%s");
        (*(code *)(&report_error_message))(auStack_108, "CTexture::LoadFromCache()", 1, 2);
        uVar2 = 1;
    } else {
        iVar1 = gfxlib_uses_array44_index_of_2377e4(*(u32 *)(a0 + 4), a1, a2, a3);
        if (iVar1 == -1) {
            (*(code *)(&sprintf))(auStack_108, a1, a2, a3, "Failed to load from cache..:%s");
            (*(code *)(&report_error_message))(auStack_108, "CTexture::LoadFromCache()", 1, 2);
            uVar2 = 1;
        } else {
            uVar2 = 0;
        }
    }
    return uVar2;
}

/*
 * CTexture_ReleaseFromVRAM  0x8c015310
 * called by: CAnimal_release_part_textures, CHerb_release_06d5e4, CTexture_ReleaseFromVRAM_on_field_20,
 * CTexture_ReleaseFromVRAM_on_field_28, CTexture_ReleaseFromVRAM_on_field_488, CTexture_ReleaseFromVRAM_wrap,
 * CTexture_ReleaseFromVRAM_wrap_0d0a18, CTexture_ReleaseFromVRAM_wrap_0d14cc (+12 more) strings: "Failed..:%s";
 * "CTexture::ReleaseFromVRAM()"
 */
u32 CTexture_ReleaseFromVRAM(int a0, u32 a1, u32 a2, u32 a3) {
    int iVar1;
    u8 auStack_108[260];

    iVar1 = ninja_scan_loop_256670(*(u32 *)(a0 + 4));
    if (iVar1 == -1) {
        (*(code *)(&sprintf))(auStack_108, a1, a2, a3, "Failed..:%s");
        (*(code *)(&report_error_message))(auStack_108, "CTexture::ReleaseFromVRAM()", 1, 2);
    }
    return (u32)(iVar1 == -1);
}

/*
 * obj_set_texlist  0x8c01538c
 * njSetTexture on the texture list the object keeps at +4
 * called by: CAnimBody_uses_get_field_1c_on_field_b0_026de0, CAnimal_draw_029510, CAnimal_draw_088288,
 * CAnimal_uses_njGetMatrix_026968, CEnv_set_texlist, CGame_draw_0c3e78, CSquidLine_uses_matrix_push_0ad354,
 * CTexture_draw_0d6090 (+75 more)
 */
u32 obj_set_texlist(int a0, u32 a1, u32 a2) {
    u32 uVar1;

    uVar1 = njSetTexture(*(u32 *)(a0 + 4));
    return uVar1;
}

/*
 * clear_field_4  0x8c0153b0
 * called by: Class_129920_ctor
 */
u32 clear_field_4(int a0) {
    *(u32 *)(a0 + 4) = 0;
    return 0;
}

/*
 * Class_129908_ctor  0x8c0153b8
 * Class_129920 base, vtable 0x8c129908, +4 points at the inline buffer at +8
 * called by: Class_12b3b8_ctor, Class_12b580_uses_Vec3_ctor_zero_0d7f18, Class_12b930_uses_vec_new_array_0d2fd8
 */
u32 *Class_129908_ctor(u32 *a0, u32 a1) {
    Class_129920_ctor(a0, a1);
    *a0 = (&DATA_8c129908);
    a0[1] = a0 + 2;
    return a0;
}

/*
 * Class_129920_dtor  0x8c0153e4
 * stores the vtable 0x8c129920
 * called by: CAnimal_m0_0aca4c, Class_12984c_release_0c4b84, Class_129908_dtor, Class_12a0c4_m0_0674c8,
 * Class_12b350_dtor, Class_12b388_dtor, Class_12b580_dtor, Class_12b758_dtor (+15 more)
 */
u32 *Class_129920_dtor(u32 *a0, u32 a1, u32 a2, u32 a3) {
    u32 in_stack_fffffff4;

    if ((a0 != NULL) && (*a0 = &g_8c129920, 0 < (short)a1)) {
        free_if_nonnull(a0, a1, a2, a3, CONCAT22((short)((u32)in_stack_fffffff4 >> 0x10), (short)a1));
    }
    return a0;
}

/*
 * game_update_fields_01541c  0x8c01541c
 * area name: game code; nothing names its area yet; behaviour name: conditionally writes members
 */
int game_update_fields_01541c(int a0, u32 a1, u32 a2) {
    int iVar1;

    **(u32 **)(a0 + 4) = a1;
    iVar1 = *(int *)(a0 + 4);
    *(u32 *)(iVar1 + 4) = a2;
    return iVar1;
}

/*
 * Class_129908_dtor  0x8c015428
 * called by: Class_12b3b8_dtor, Class_12b580_release_0e6114, Class_12b930_destroy
 */
u32 *Class_129908_dtor(u32 *a0, u32 a1, u32 a2, u32 a3) {
    u32 ar5_00;
    u32 in_stack_fffffff4;
    u32 ain0;

    ain0 = CONCAT22((short)((u32)in_stack_fffffff4 >> 0x10), (u16)a1);
    if (a0 != NULL) {
        *a0 = &g_8c129908;
        ar5_00 = 0;
        Class_129920_dtor(a0, 0, a2, a3);
        if (0 < (short)ain0) {
            free_if_nonnull(a0);
        }
    }
    return a0;
}

/*
 * game_uses_set_fields_0_4_8_015470  0x8c015470
 * area name: game code; nothing names its area yet; behaviour name: its main named callee is set_fields_0_4_8_257196
 */
u32 game_uses_set_fields_0_4_8_015470(int a0, u32 a1, u32 a2, u32 a3, u32 s0, u32 s4) {
    u32 uVar1;

    ninja_init_fields_257188(a0 + 0x10, a1, a2 | 0x900, a3, s0);
    uVar1 = set_fields_0_4_8_257196(a0 + 0x3c, a0 + 0x10, s4, 0x40800000);
    return uVar1;
}

/*
 * game_draw_0154c4  0x8c0154c4
 * area name: game code; nothing names its area yet; behaviour name: mostly calls draw functions
 */
u32 game_draw_0154c4(int a0) {
    u32 uVar1;

    njSetTexture(*(u32 *)(a0 + 4));
    uVar1 = ninja_draw_25b044(0);
    return uVar1;
}

/*
 * clear_field_0_wrap  0x8c0154ec
 * only calls clear_field_0
 * called by: game_copy_02b920
 */
u32 clear_field_0_wrap(u32 a0) {
    clear_field_0(a0);
    return a0;
}

/*
 * set_field_0  0x8c015508
 * called by: common_load_eye_scsi
 */
u32 set_field_0(u32 *a0, u32 a1, u32 a2, u32 a3) {
    u32 in_r0;

    *a0 = a1;
    return in_r0;
}

/*
 * get_field_0  0x8c015510
 * called by: CAnimal_uses_get_field_0_085704, game_draw_029ca8, game_state_switch_037034
 */
u32 get_field_0(u32 *a0) {
    return *a0;
}

/*
 * clear_field_0  0x8c015518
 * called by: clear_field_0_wrap
 */
u32 clear_field_0(u32 *a0) {
    *a0 = 0;
    return 0;
}

/*
 * Class_12bb08_calc_015520  0x8c015520
 * area name: only called from Class_12bb08 methods; behaviour name: integer arithmetic on its arguments
 * called by: Class_12bb08_ctor
 */
int *Class_12bb08_calc_015520(int *a0, u32 a1, u32 a2, u32 a3) {
    *a0 = (int)(&DATA_8c1298b8);
    (**(code **)(*a0 + 0xc))(a0, a1, a2, a3);
    return a0;
}

/*
 * Class_1298b8_dtor  0x8c015544
 * stores the vtable 0x8c1298b8
 * called by: Class_12bb08_dtor
 */
u32 *Class_1298b8_dtor(u32 *a0, u32 a1, u32 a2, u32 a3) {
    u32 in_stack_fffffff4;

    if ((a0 != NULL) && (*a0 = &g_8c1298b8, 0 < (short)a1)) {
        free_if_nonnull(a0, a1, a2, a3, CONCAT22((short)((u32)in_stack_fffffff4 >> 0x10), (short)a1));
    }
    return a0;
}

/*
 * Class_1298b8_m1_01557c  0x8c01557c
 */
u32 Class_1298b8_m1_01557c(int a0) {
    *(u32 *)(a0 + 4) = 0;
    *(u32 *)(a0 + 8) = 0;
    return 0;
}

/*
 * Class_1298b8_m2_015588  0x8c015588
 */
u32 Class_1298b8_m2_015588(int a0, u32 a1, u32 a2, u32 a3) {
    u32 uVar1;
    u32 in_PR;

    njSetTexture(*(u32 *)(a0 + 8));
    matrix_push(0, a1, a2, a3, in_PR);
    touch_fields_30_3c(0, a1, a2, a3, in_PR);
    ninja_draw_254042(*(u32 *)(a0 + 4), a1, a2, a3);
    uVar1 = matrix_pop_n(1);
    return uVar1;
}

/*
 * Class_1298b8_m3_0155e8  0x8c0155e8
 */
u32 Class_1298b8_m3_0155e8(int a0, u32 unused_a1, u32 *a2) {
    u32 r7;
    u32 uVar1;
    u32 *ar6_00;
    float fVar2;
    double dVar3;
    u32 in_PR;
    int ar7_00;
    int ar6_01;
    int ar5_00;
    char cVar4;
    char cVar5;

    cVar5 = '\0';
    cVar4 = '\0';
    ar6_00 = a2;
    njSetTexture(*(u32 *)(a0 + 8));
    matrix_push(0, unused_a1, ar6_00, r7, in_PR);
    touch_fields_30_3c(0, unused_a1, ar6_00, r7, in_PR);
    if (cVar5 == '\0') {
        dVar3 = (double)CONCAT44(0x47800000, a2[2]);
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
        dVar3 = (double)CONCAT44(0x47800000, a2[1]);
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
        dVar3 = (double)CONCAT44(0x47800000, *a2);
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
    njRotateXYZ(0, ar5_00, ar6_01, ar7_00, in_PR);
    ninja_draw_254042(*(u32 *)(a0 + 4), ar5_00, ar6_01, ar7_00);
    uVar1 = matrix_pop_n(1);
    return uVar1;
}

/*
 * Class_1298b8_m4_0156a0  0x8c0156a0
 */
u32 Class_1298b8_m4_0156a0(int a0, u32 a1, u32 a2, u32 a3) {
    u32 uVar1;
    u32 in_PR;

    njSetTexture(*(u32 *)(a0 + 8));
    matrix_push(0, a1, a2, a3, in_PR);
    touch_fields_30_3c(0, a1, a2, a3, in_PR);
    matrix_scale(0, a1, a2, a3, in_PR);
    ninja_draw_254042(*(u32 *)(a0 + 4), a1, a2, a3);
    uVar1 = matrix_pop_n(1);
    return uVar1;
}

/*
 * Class_1298b8_m5_015720  0x8c015720
 */
u32 Class_1298b8_m5_015720(int a0, u32 unused_a1, u32 *a2) {
    u32 r7;
    u32 uVar1;
    u32 *ar6_00;
    float fVar2;
    double dVar3;
    u32 in_PR;
    int ar7_00;
    int ar6_01;
    int ar5_00;
    char cVar4;
    char cVar5;

    cVar5 = '\0';
    cVar4 = '\0';
    ar6_00 = a2;
    njSetTexture(*(u32 *)(a0 + 8));
    matrix_push(0, unused_a1, ar6_00, r7, in_PR);
    touch_fields_30_3c(0, unused_a1, ar6_00, r7, in_PR);
    if (cVar5 == '\0') {
        dVar3 = (double)CONCAT44(0x47800000, a2[2]);
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
        dVar3 = (double)CONCAT44(0x47800000, a2[1]);
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
        dVar3 = (double)CONCAT44(0x47800000, *a2);
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
    njRotateXYZ(0, ar5_00, ar6_01, ar7_00, in_PR);
    matrix_scale(0, ar5_00, ar6_01, ar7_00, in_PR);
    ninja_draw_254042(*(u32 *)(a0 + 4), ar5_00, ar6_01, ar7_00);
    uVar1 = matrix_pop_n(1);
    return uVar1;
}

/*
 * Class_1298b8_m6_0157f8  0x8c0157f8
 */
u32 Class_1298b8_m6_0157f8(int a0, u32 *a1) {
    u32 r6;
    u32 r7;
    u32 uVar1;
    u32 *ar5_00;
    float fVar2;
    double dVar3;
    u32 in_PR;
    int ar7_00;
    int ar6_00;
    int ar5_01;
    char cVar4;
    char cVar5;

    cVar5 = '\0';
    cVar4 = '\0';
    ar5_00 = a1;
    njSetTexture(*(u32 *)(a0 + 8));
    matrix_push(0, ar5_00, r6, r7, in_PR);
    if (cVar5 == '\0') {
        dVar3 = (double)CONCAT44(0x47800000, a1[2]);
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
        dVar3 = (double)CONCAT44(0x47800000, a1[1]);
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
        dVar3 = (double)CONCAT44(0x47800000, *a1);
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
    njRotateXYZ(0, ar5_01, ar6_00, ar7_00, in_PR);
    ninja_draw_254042(*(u32 *)(a0 + 4), ar5_01, ar6_00, ar7_00);
    uVar1 = matrix_pop_n(1);
    return uVar1;
}

/*
 * Class_1298b8_m7_015890  0x8c015890
 */
u32 Class_1298b8_m7_015890(int a0, u32 *a1) {
    u32 r6;
    u32 r7;
    u32 uVar1;
    u32 *ar5_00;
    float fVar2;
    double dVar3;
    u32 in_PR;
    int ar7_00;
    int ar6_00;
    int ar5_01;
    char cVar4;
    char cVar5;

    cVar5 = '\0';
    cVar4 = '\0';
    ar5_00 = a1;
    njSetTexture(*(u32 *)(a0 + 8));
    matrix_push(0, ar5_00, r6, r7, in_PR);
    if (cVar5 == '\0') {
        dVar3 = (double)CONCAT44(0x47800000, a1[2]);
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
        dVar3 = (double)CONCAT44(0x47800000, a1[1]);
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
        dVar3 = (double)CONCAT44(0x47800000, *a1);
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
    njRotateXYZ(0, ar5_01, ar6_00, ar7_00, in_PR);
    matrix_scale(0, ar5_01, ar6_00, ar7_00, in_PR);
    ninja_draw_254042(*(u32 *)(a0 + 4), ar5_01, ar6_00, ar7_00);
    uVar1 = matrix_pop_n(1);
    return uVar1;
}

/*
 * Class_1298b8_m8_015948  0x8c015948
 */
u32 Class_1298b8_m8_015948(int a0, u32 a1, u32 a2, u32 a3) {
    u32 uVar1;
    u32 in_PR;

    njSetTexture(*(u32 *)(a0 + 8));
    matrix_push(0, a1, a2, a3, in_PR);
    matrix_scale(0, a1, a2, a3, in_PR);
    ninja_draw_254042(*(u32 *)(a0 + 4), a1, a2, a3);
    uVar1 = matrix_pop_n(1);
    return uVar1;
}

/*
 * Class_1298b8_m9_0159a8  0x8c0159a8
 */
u32 Class_1298b8_m9_0159a8(int a0, u32 a1, u32 a2, u32 a3) {
    u32 uVar1;

    njSetTexture(*(u32 *)(a0 + 8));
    uVar1 = ninja_draw_254042(*(u32 *)(a0 + 4), a1, a2, a3);
    return uVar1;
}

/*
 * Class_1298b8_m10_0159d0  0x8c0159d0
 */
u32 Class_1298b8_m10_0159d0(int a0, u32 a1, u32 a2, u32 a3) {
    u32 uVar1;

    uVar1 = ninja_draw_254042(*(u32 *)(a0 + 4), a1, a2, a3);
    return uVar1;
}

/*
 * Class_1298b8_m11_0159ec  0x8c0159ec
 */
u32 Class_1298b8_m11_0159ec(int a0, u32 unused_a1, u32 *a2) {
    u32 r7;
    u32 uVar1;
    u32 *ar6_00;
    float fVar2;
    double dVar3;
    int ar7_00;
    int ar6_01;
    int ar5_00;
    char cVar4;
    char cVar5;

    cVar5 = '\0';
    cVar4 = '\0';
    ar6_00 = a2;
    matrix_push(0, unused_a1, a2, r7, a0);
    touch_fields_30_3c(0, unused_a1, ar6_00, r7, a0);
    if (cVar5 == '\0') {
        dVar3 = (double)CONCAT44(0x47800000, a2[2]);
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
        dVar3 = (double)CONCAT44(0x47800000, a2[1]);
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
        dVar3 = (double)CONCAT44(0x47800000, *a2);
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
    njRotateXYZ(0, ar5_00, ar6_01, ar7_00, a0);
    matrix_scale(0, ar5_00, ar6_01, ar7_00, a0);
    ninja_draw_254042(*(u32 *)(a0 + 4), ar5_00, ar6_01, ar7_00);
    uVar1 = matrix_pop_n(1);
    return uVar1;
}

/*
 * clear_field_0_wrap_015ab8  0x8c015ab8
 * only calls clear_field_0_015b8c
 * called by: Class_129938_ctor, Class_129938_ctor_init, Class_129974_ctor, Class_129cbc_ctor, Class_12a0c4_ctor,
 * Class_12b580_ctor, Class_12b758_ctor, Class_12b758_uses_Class_129920_ctor_0d5e9c (+13 more)
 */
u32 clear_field_0_wrap_015ab8(u32 a0) {
    clear_field_0_015b8c(a0);
    return a0;
}

/*
 * set_field_0_015ad4  0x8c015ad4
 * called by: CAnimal_LoadGRReq, CAnimal_LoadGRReq_b, CAnimal_LoadGRWait, CGame_Initial, CGame_LoadForEvent1Models,
 * CHeater_CreateModel, CHerb_LoadGRWait, CO2Supply_LoadTexture (+19 more)
 */
u32 set_field_0_015ad4(u32 *a0, u32 a1, u32 a2) {
    u32 in_r0;

    *a0 = a1;
    return in_r0;
}

/*
 * game_draw_015adc  0x8c015adc
 * area name: game code; nothing names its area yet; behaviour name: mostly calls draw functions
 * called by: CEnv_draw_with_three_parts_swapped, CTexture_draw_0d6090, Class_12b580_draw_0f7118,
 * Class_12b580_draw_with_children, Class_12b758_draw_0e4dd0, Class_12c058_draw, Class_12c058_draw_0f577c,
 * game_draw_0d0564 (+8 more)
 */
u32 game_draw_015adc(u32 *a0, u32 a1, u32 a2, u32 a3) {
    u32 uVar1;

    uVar1 = gfxlib_draw_219a9a(*a0, a1, a2, a3);
    return uVar1;
}

/*
 * Class_129938_draw_015af8  0x8c015af8
 * area name: only called from Class_129938 methods; behaviour name: mostly calls draw functions
 * called by: Class_129938_m6_01733c, Class_12b930_draw_0d7410, game_draw_016da8, game_draw_0d092c, game_draw_0d0990,
 * game_draw_0d4124, game_draw_0d4428, game_draw_0d46cc (+3 more)
 */
u32 Class_129938_draw_015af8(u32 *a0, u32 a1, u32 a2, u32 a3) {
    u32 uVar1;

    uVar1 = vram_draw_2187ce(*a0, a1, a2, a3);
    return uVar1;
}

/*
 * game_draw_015b14  0x8c015b14
 * area name: game code; nothing names its area yet; behaviour name: mostly calls draw functions
 * called by: game_draw_0e14fc
 */
u32 game_draw_015b14(u32 *a0, u32 a1, u32 a2, u32 a3) {
    u32 uVar1;

    uVar1 = gfxlib_draw_21a80e(*a0, a1, a2, a3);
    return uVar1;
}

/*
 * game_draw_015b30  0x8c015b30
 * area name: game code; nothing names its area yet; behaviour name: mostly calls draw functions
 * called by: Class_12b930_draw_0d7354, game_draw_0d4124
 */
u32 game_draw_015b30(u32 *a0, u32 a1, u32 a2, u32 a3) {
    u32 uVar1;

    uVar1 = gfxlib_draw_218f96(*a0, a1, a2, a3);
    return uVar1;
}

/*
 * deref_u32  0x8c015b4c
 * called by: CAnimBody_CheckThisMotionData, CAnimBody_SetInterpolate, CAnimBody_uses_get_field_1c_on_field_b0_026de0,
 * CAnimal_uses_njGetMatrix_026968, CSquidLine_uses_matrix_push_0ad354, Class_12a03c_m6_03a65c, Class_12a25c_m6_06e69c,
 * Class_12a7f4_draw_09aad0 (+45 more)
 */
u32 deref_u32(u32 *a0) {
    return *a0;
}

/*
 * game_draw_015b54  0x8c015b54
 * area name: game code; nothing names its area yet; behaviour name: mostly calls draw functions
 * called by: game_draw_0d9720, game_uses_matrix_push_0cc524
 */
u32 game_draw_015b54(u32 *a0, u32 a1) {
    u32 r6;
    u32 r7;
    u32 uVar1;

    uVar1 = deref_u32(a1);
    uVar1 = gfxlib_draw_21ba62(*a0, uVar1, r6, r7, a0);
    return uVar1;
}

/*
 * clear_field_0_015b8c  0x8c015b8c
 * called by: clear_field_0_wrap_015ab8
 */
u32 clear_field_0_015b8c(u32 *a0) {
    *a0 = 0;
    return 0;
}

/*
 * clear_field_0_wrap_015b94  0x8c015b94
 * only calls clear_field_0_015bc0
 * called by: CMothLine_ctor, game_list_02452c, static_init_vec3s_27df98, static_init_vec3s_280f78,
 * static_init_vec3s_284730, static_init_vec3s_285220
 */
u32 clear_field_0_wrap_015b94(u32 a0, u32 a1) {
    clear_field_0_015bc0(a0);
    return a0;
}

/*
 * set_field_0_015bb0  0x8c015bb0
 * called by: CAnimal_LoadGRReq, CAnimal_LoadGRReq_b, CAnimal_LoadGRWait, CAnimal_LoadMFile_step, CHerb_LoadGRWait,
 * RING_UNIT_CreateModel
 */
u32 set_field_0_015bb0(u32 *a0, u32 a1) {
    u32 in_r0;

    *a0 = a1;
    return in_r0;
}

/*
 * get_field_0_015bb8  0x8c015bb8
 * called by: CAnimBody_uses_get_field_1c_on_field_b0_026de0, CAnimal_draw_029510, CAnimal_draw_088288,
 * CAnimal_uses_get_field_0_085704, CAnimal_uses_njGetMatrix_026968, CHeater_CreateModel, CSoilTank_Create,
 * CSquidLine_uses_matrix_push_0ad354 (+26 more)
 */
u32 get_field_0_015bb8(u32 *a0) {
    return *a0;
}

/*
 * clear_field_0_015bc0  0x8c015bc0
 * called by: clear_field_0_wrap_015b94
 */
u32 clear_field_0_015bc0(u32 *a0) {
    *a0 = 0;
    return 0;
}

/*
 * clear_field_0_wrap_015bc8  0x8c015bc8
 * only calls clear_field_0_015bec
 * called by: CMothLine_ctor, static_init_vec3s_27df98, static_init_vec3s_280f78, static_init_vec3s_284730,
 * static_init_vec3s_285220
 */
u32 clear_field_0_wrap_015bc8(u32 a0) {
    clear_field_0_015bec(a0);
    return a0;
}

/*
 * set_field_0_015be4  0x8c015be4
 * called by: CAnimal_LoadGRWait, CAnimal_LoadMFile_step, CHerb_LoadGRWait
 */
u32 set_field_0_015be4(u32 *a0, u32 a1) {
    u32 in_r0;

    *a0 = a1;
    return in_r0;
}

/*
 * clear_field_0_015bec  0x8c015bec
 * called by: clear_field_0_wrap_015bc8
 */
u32 clear_field_0_015bec(u32 *a0) {
    *a0 = 0;
    return 0;
}

/*
 * Class_1298ac_dtor  0x8c015bf4
 * stores the vtable 0x8c1298ac
 */
u32 *Class_1298ac_dtor(u32 *a0, u32 a1, u32 a2, u32 a3) {
    u32 in_stack_fffffff4;

    if ((a0 != NULL) && (*a0 = &g_8c1298ac, 0 < (short)a1)) {
        free_if_nonnull(a0, a1, a2, a3, CONCAT22((short)((u32)in_stack_fffffff4 >> 0x10), (short)a1));
    }
    return a0;
}

/*
 * Class_12988c_ctor  0x8c015c2c
 * vtable 0x8c12988c
 * called by: Class_12984c_ctor, game_vec_0ffb98
 */
u32 *Class_12988c_ctor(u32 *a0) {
    *a0 = (&DATA_8c12988c);
    Class_12988c_float_calc_015dc0(a0, 0);
    return a0;
}

/*
 * Class_12988c_ctor_arg  0x8c015c58
 * Class_12988c vtable, then its initialiser with argument a1 (Class_12988c_ctor passes 0)
 * called by: Class_12b3b8_ctor
 */
u32 *Class_12988c_ctor_arg(u32 *a0, u32 a1) {
    *a0 = (&DATA_8c12988c);
    Class_12988c_float_calc_015dc0(a0, a1);
    return a0;
}

/*
 * Class_12988c_dtor  0x8c015c94
 * stores the vtable 0x8c12988c
 * called by: Class_12984c_dtor, Class_12b3b8_dtor, game_release_0ffc1c
 */
u32 *Class_12988c_dtor(u32 *a0, u32 a1, u32 a2, u32 a3) {
    u32 in_stack_fffffff4;

    if ((a0 != NULL) && (*a0 = &g_8c12988c, 0 < (short)a1)) {
        free_if_nonnull(a0, a1, a2, a3, CONCAT22((short)((u32)in_stack_fffffff4 >> 0x10), (short)a1));
    }
    return a0;
}

/*
 * set_field_1c  0x8c015ccc
 * called by: CIncubater_Create, UsrPointer_LoadTexture, game_uses_get_field_4_0d261c
 */
u32 set_field_1c(int a0, u32 a1) {
    u32 in_r0;

    *(u32 *)(a0 + 0x1c) = a1;
    return in_r0;
}

/*
 * set_field_20  0x8c015cd4
 * called by: CIncubater_Create, UsrPointer_LoadTexture, game_uses_get_field_4_0d261c, input_input_helper_1002a8,
 * input_uses_get_field_4_10031c, set_field_20_on_field_15c
 */
u32 set_field_20(int a0, u32 a1) {
    u32 in_r0;

    *(u32 *)(a0 + 0x20) = a1;
    return in_r0;
}

/*
 * C2DSprite_Load  0x8c015cdc
 * strings: "Can't Find File..:%s"; "C2DSprite::Load()"
 */
u32 C2DSprite_Load(int a0, u32 a1, u32 a2, u32 a3) {
    int iVar1;
    u32 uVar2;
    u8 auStack_10c[260];

    uVar2 = 0;
    while (true) {
        if (*(u32 *)(*(int *)(a0 + 0x1c) + 4) <= uVar2) {
            return 1;
        }
        iVar1 = njLoadTexture(*(u32 *)(a0 + 0x1c), a1, a2, a3);
        if (iVar1 == -1)
            break;
        uVar2 = uVar2 + 1;
    }
    (*(code *)(&sprintf))(auStack_10c, a1, a2, a3, "Can't Find File..:%s");
    (*(code *)(&report_error_message))(auStack_10c, "C2DSprite::Load()", 1, 2);
    return 0;
}

/*
 * game_draw_015d74  0x8c015d74
 * area name: game code; nothing names its area yet; behaviour name: mostly calls draw functions
 */
u32 game_draw_015d74(int a0, u32 unused_a1, u32 unused_a2, u32 a3) {
    u32 uVar1;
    u64 in_dr4;

    *(int *)(a0 + 4) = (int)((u64)in_dr4 >> 0x20);
    *(int *)(a0 + 8) = (int)in_dr4;
    uVar1 = ninja_draw_25748c(a0 + 4, *(u32 *)(a0 + 0x24), *(u32 *)(a0 + 0x28), a3);
    return uVar1;
}

/*
 * Class_12988c_float_calc_015dc0  0x8c015dc0
 * area name: only called from Class_12988c methods; behaviour name: floating-point arithmetic
 * called by: Class_12988c_ctor, Class_12988c_ctor_arg
 */
u32 Class_12988c_float_calc_015dc0(int a0, u32 a1) {
    u32 in_fr5;
    u32 in_fr4;

    *(u32 *)(a0 + 4) = 0;
    *(u32 *)(a0 + 8) = 0;
    *(u32 *)(a0 + 0xc) = 0;
    *(u32 *)(a0 + 0x18) = a1;
    *(u32 *)(a0 + 0x10) = in_fr4;
    *(u32 *)(a0 + 0x14) = in_fr5;
    *(u32 *)(a0 + 0x1c) = 0;
    *(u32 *)(a0 + 0x20) = 0;
    *(u32 *)(a0 + 0x24) = 0;
    *(u32 *)(a0 + 0x28) = 1;
    return 1;
}

/*
 * game_uses_malloc_thunk_015dfc  0x8c015dfc
 * name hint from a string it uses: Err wrap; area name: game code; nothing names its area yet; behaviour name: its
 * callees mostly do: uses_malloc_thunk
 */
u32 game_uses_malloc_thunk_015dfc(u32 a0, u32 a1, u32 a2, u32 a3) {
    u32 uVar1;

    uVar1 = game_uses_malloc_thunk_015f18(a0, a1, a2, a3);
    return uVar1;
}

/*
 * game_draw_015e18  0x8c015e18
 * area name: game code; nothing names its area yet; behaviour name: mostly calls draw functions
 */
u32 game_draw_015e18(int a0) {
    u32 uVar1;

    njSetTexture(*(u32 *)(a0 + 0x1c));
    uVar1 = ninja_draw_25b044(0);
    return uVar1;
}

/*
 * draw_debug_quad  0x8c015e40
 * draws a white quad with corners (100, 100) and (300, 300) at depth 0.5
 */
u32 draw_debug_quad(void) {
    u32 uVar1;
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
    u32 uStack_10;
    u32 uStack_c;
    u32 uStack_8;

    uStack_64 = 0x42c80000;
    uStack_60 = 0x42c80000;
    uStack_5c = 0x3f000000;
    uStack_58 = 0;
    uStack_54 = 0;
    uStack_50 = 0xffffffff;
    uStack_4c = 0x42c80000;
    uStack_48 = 0x43960000;
    uStack_44 = 0x3f000000;
    uStack_40 = 0;
    uStack_3c = 0x3f800000;
    uStack_38 = 0xffffffff;
    uStack_34 = 0x43960000;
    uStack_30 = 0x42c80000;
    uStack_2c = 0x3f000000;
    uStack_28 = 0x3f800000;
    uStack_24 = 0;
    uStack_20 = 0xffffffff;
    uStack_1c = 0x43960000;
    uStack_18 = 0x43960000;
    uStack_14 = 0x3f000000;
    uStack_10 = 0x3f800000;
    uStack_c = 0x3f800000;
    uStack_8 = 0xffffffff;
    uVar1 = gfxlib_draw_234bc0(&uStack_64, 4, 10000, 0);
    return uVar1;
}

/*
 * game_uses_malloc_thunk_015f18  0x8c015f18
 * name hint from a string it uses: Error; area name: game code; nothing names its area yet; behaviour name: its main
 * named callee is malloc_thunk called by: game_uses_malloc_thunk_015dfc strings: "Error"
 */
u32 game_uses_malloc_thunk_015f18(int a0, u32 a1, u32 a2, u32 a3) {
    short sVar1;
    short sVar2;
    u32 uVar3;
    int iVar4;
    int ar5_00;
    u32 ar6_00;
    u32 ar7_00;

    sVar1 = **(short **)(a0 + 0x20);
    sVar2 = *(short *)(*(int *)(a0 + 0x20) + 2);
    uVar3 = malloc_thunk(0x2000, a1, a2, a3);
    ninja_init_fields_257188(a0 + 0x2c, uVar3, 0xb01, (int)sVar1, (int)sVar2);
    ar7_00 = 0x40800000;
    ar6_00 = 10000;
    ar5_00 = a0 + 0x2c;
    set_fields_0_4_8_257196(**(u32 **)(a0 + 0x1c), ar5_00, 10000, 0x40800000);
    iVar4 = njLoadTexture(*(u32 *)(a0 + 0x1c), ar5_00, ar6_00, ar7_00);
    if (iVar4 == -1) {
        ar7_00 = 0xd;
        ar6_00 = 0;
        ar5_00 = 0;
        noop_102824("Error", 0, 0, 0xd);
    }
    ninja_calc_25b100((int)**(short **)(a0 + 0x20), ar5_00, ar6_00, ar7_00);
    uVar3 = free_sys(uVar3, ar5_00, ar6_00, ar7_00);
    return uVar3;
}

/*
 * Class_12984c_ctor  0x8c015ff0
 * Class_12988c base, vtable 0x8c12984c
 * called by: game_vec_0d25b4, game_vec_0fdde4
 */
u32 *Class_12984c_ctor(u32 *a0) {
    Class_12988c_ctor(a0);
    *a0 = (&DATA_8c12984c);
    return a0;
}

/*
 * Class_12984c_draw_016014  0x8c016014
 * area name: sits between Class_12984c functions (same compilation unit); behaviour name: mostly calls draw functions
 */
u32 Class_12984c_draw_016014(int a0, u32 unused_a1, u32 unused_a2, u32 a3) {
    u32 uVar1;
    u32 in_fr5;
    u32 in_fr4;
    u32 in_fr6;

    *(u32 *)(a0 + 4) = in_fr4;
    *(u32 *)(a0 + 8) = in_fr5;
    *(u32 *)(a0 + 0xc) = in_fr6;
    uVar1 = ninja_draw_25754c(a0 + 4, *(u32 *)(a0 + 0x24), *(u32 *)(a0 + 0x28), a3);
    return uVar1;
}

/*
 * Class_12984c_draw_016068  0x8c016068
 * area name: sits between Class_12984c functions (same compilation unit); behaviour name: mostly calls draw functions
 */
u32 Class_12984c_draw_016068(int a0, u32 a1, u32 unused_a2, u32 a3) {
    u32 uVar1;
    u32 in_fr5;
    u32 in_fr4;
    u32 in_fr6;

    *(u32 *)(a0 + 4) = in_fr4;
    *(u32 *)(a0 + 8) = in_fr5;
    *(u32 *)(a0 + 0xc) = in_fr6;
    *(u32 *)(a0 + 0x24) = a1;
    uVar1 = ninja_draw_25754c(a0 + 4, *(u32 *)(a0 + 0x24), *(u32 *)(a0 + 0x28), a3);
    return uVar1;
}

/*
 * C3DRenderPly_SetMem  0x8c0160c4
 * strings: "Lack of memory!"; "C3DRenderPly::SetMem()"
 */
u32 C3DRenderPly_SetMem(int a0, int a1, int a2, short *a3, u32 s0, int s4) {
    int ar5_00;
    int ar5_01;
    u32 ar7_00;
    u32 uVar1;

    *(u32 *)(a0 + 0x10) = 4;
    for (uVar1 = 0; uVar1 < *(u32 *)(a0 + 0x10); uVar1 = uVar1 + 1) {
        *(u32 *)(uVar1 * 0xc + *(int *)(a0 + 4)) = *(u32 *)(a1 + uVar1 * 0x10);
        *(u32 *)(uVar1 * 0xc + *(int *)(a0 + 4) + 4) = *(u32 *)(a1 + uVar1 * 0x10 + 4);
        *(u32 *)(uVar1 * 0xc + *(int *)(a0 + 4) + 8) = *(u32 *)(a1 + uVar1 * 0x10 + 8);
        *(u32 *)(uVar1 * 4 + *(int *)(a0 + 8)) = *(u32 *)(uVar1 * 4 + a2);
    }
    *(u32 *)(a0 + 0x90) = 1;
    **(u16 **)(a0 + 0xc) = 0;
    *(u16 *)(*(int *)(a0 + 0xc) + 2) = 0;
    *(u16 *)(*(int *)(a0 + 0xc) + 4) = 0;
    *(u16 *)(*(int *)(a0 + 0xc) + 6) = 0xff;
    *(u16 *)(*(int *)(a0 + 0xc) + 8) = 0xff;
    *(u16 *)(*(int *)(a0 + 0xc) + 10) = 0;
    *(u16 *)(*(int *)(a0 + 0xc) + 0xc) = 0xff;
    *(u16 *)(*(int *)(a0 + 0xc) + 0xe) = 0xff;
    ar5_00 = malloc_sys((int)*a3 * (int)a3[1] * s4, a1, a2, a3);
    if (ar5_00 == 0) {
        report_error_message("Lack of memory!", "C3DRenderPly::SetMem()", 1, 2);
    }
    ninja_init_fields_257188(a0 + 0xa0, ar5_00, 0xb01, (int)*a3, (int)a3[1]);
    ar7_00 = 0x40800000;
    ar5_01 = a0 + 0xa0;
    set_fields_0_4_8_257196(*(u32 *)(a0 + 0x8c), ar5_01, s0, 0x40800000);
    njLoadTexture(a0 + 0x8c, ar5_01, s0, ar7_00);
    ninja_calc_25b100();
    malloc_calc_1fb586(ar5_00, ar5_01, s0, ar7_00);
    *(u32 *)(a0 + 0xcc) = *(u32 *)(a0 + 0xcc) | 0x80000000;
    *(u32 *)(a0 + 0xcc) = *(u32 *)(a0 + 0xcc) | 0x20;
    return 1;
}

/*
 * Class_129808_m10_0162bc  0x8c0162bc
 */
u32 Class_129808_m10_0162bc(int a0, u32 unused_a1, u32 unused_a2, u32 a3) {
    u32 uVar1;

    njSetTexture(a0 + 0x8c);
    uVar1 = (*(code *)(&gfxlib_draw_235bfc))(a0 + 4, *(u32 *)(a0 + 0x10), *(u32 *)(0xcc + a0), a3);
    return uVar1;
}

/*
 * clear_5_words  0x8c0162f8
 * a0[0..4] = 0
 * called by: Class_129808_m6_0166b4, Class_12b350_ctor, Class_12b3b8_uses_object_dtor_delete_0e7a78, Class_12bb08_ctor,
 * ambient_sound_update, confirm_exit_save, game_copy_0ff6c4, game_uses_Class_129808_set_model_0bfa78 (+13 more)
 */
u32 *clear_5_words(u32 *a0, u32 a1, u32 unused_a2, u32 a3) {
    a0[4] = 0;
    *a0 = 0;
    a0[1] = 0;
    a0[2] = 0;
    a0[3] = 0;
    a0[4] = 0;
    return a0;
}

/*
 * set_fields_0_4_c  0x8c016318
 * stores +0x0, +0x4, +0xc
 * called by: CGame_Init, CGame_draw_0c3e78, Class_129808_m6_0166b4, Class_12b3b8_uses_object_dtor_delete_0e7a78,
 * Class_12bb08_ctor, ambient_sound_update, bugbox_3_screen, confirm_exit_save (+20 more)
 */
u32 set_fields_0_4_c(u32 *a0, u32 a1, u32 a2, u32 a3) {
    u32 in_r0;

    *a0 = a1;
    a0[1] = a2;
    a0[3] = a3;
    return in_r0;
}

/*
 * Class_129808_set_model  0x8c016324
 * +8 = a1 and sets flags 0x80000020 at +0x10
 * called by: CGame_draw_0c3e78, Class_129808_m6_0166b4, Class_12b3b8_uses_object_dtor_delete_0e7a78, Class_12bb08_ctor,
 * ambient_sound_update, confirm_exit_save, draw_draw_helper_0cf7a4, game_draw_0c3530 (+12 more)
 */
u32 Class_129808_set_model(int a0, u32 a1, u32 a2) {
    u32 uVar1;

    *(u32 *)(a0 + 8) = a1;
    uVar1 = 0x80000020;
    *(u32 *)(a0 + 0x10) = *(u32 *)(a0 + 0x10) | 0x80000020;
    return uVar1;
}

/*
 * Class_129808_draw  0x8c016340
 * draws the object's model (+0xc) with its flags (+0x10)
 * called by: CGame_draw_0c3e78, Class_129808_m6_0166b4, Class_12b388_uses_Class_129808_draw_0c5cb4,
 * Class_12b758_draw_0e4dd0, ambient_sound_update, bugbox_3_screen, confirm_exit_save, draw_draw_helper_0cf7a4 (+17
 * more)
 */
u32 Class_129808_draw(int a0, u32 a1, u32 unused_a2, u32 a3) {
    u32 uVar1;

    uVar1 = (*(code *)(&gfxlib_draw_235b6c))(a0, *(u32 *)(a0 + 0xc), *(u32 *)(a0 + 0x10), a3);
    return uVar1;
}

/*
 * Class_129808_draw_offset  0x8c01636c
 * draws the object's quad moved by the x/y offset in dr4
 * called by: Class_12b3b8_uses_object_dtor_delete_0e7a78, draw_sprite_frame_by_parity, game_draw_0c3530,
 * game_draw_0c42b0, game_uses_Class_129808_set_model_0bfa78, game_uses_clear_5_words_0ba5e0,
 * game_uses_clear_5_words_0c453c, input_uses_set_fields_0_4_c_0bf804 (+4 more)
 */
u32 Class_129808_draw_offset(int *a0, u32 unused_a1, u32 unused_a2, u32 a3) {
    u32 uVar1;
    int iVar2;
    u64 in_dr4;
    float fStack_34;
    float fStack_30;
    float fStack_2c;
    float fStack_28;
    float fStack_24;
    float fStack_20;
    float fStack_1c;
    float fStack_18;

    fStack_1c = (float)((u64)in_dr4 >> 0x20);
    fStack_18 = (float)in_dr4;
    fStack_34 = *(float *)*a0 + fStack_1c;
    fStack_30 = *(float *)(*a0 + 4) + fStack_18;
    fStack_2c = *(float *)(*a0 + 8) + fStack_1c;
    fStack_28 = *(float *)(*a0 + 0xc) + fStack_18;
    fStack_24 = *(float *)(*a0 + 0x10) + fStack_1c;
    fStack_20 = *(float *)(*a0 + 0x14) + fStack_18;
    fStack_1c = *(float *)(*a0 + 0x18) + fStack_1c;
    fStack_18 = *(float *)(*a0 + 0x1c) + fStack_18;
    iVar2 = *a0;
    *a0 = (int)&fStack_34;
    uVar1 = gfxlib_draw_235b6c(a0, a0[3], a0[4], a3);
    *a0 = iVar2;
    return uVar1;
}

/*
 * Class_129808_copy_016410  0x8c016410
 * area name: sits between Class_129808 functions (same compilation unit); behaviour name: mostly calls copy functions
 * called by: Class_12b3b8_ctor, Class_12b930_copy_017830, Class_12b930_uses_vec_new_array_0d2fd8, Class_12bce0_ctor,
 * Class_12bec0_ctor, game_uses_Class_12b350_ctor_0bff8c, static_init_vec3s_2787b8
 */
u32 Class_129808_copy_016410(u32 a0) {
    Class_129808_copy_016584(a0);
    return a0;
}

/*
 * Class_12bea8_copy_01642c  0x8c01642c
 * area name: only called from Class_12bea8 methods; behaviour name: mostly calls copy functions
 * called by: Class_12bea8_draw_ground_quad, game_uses_obj_set_texlist_0d1168
 */
u32 Class_12bea8_copy_01642c(u32 a0, u32 a1, u32 a2, u32 a3) {
    Class_129808_copy_016584(a0);
    Class_129808_set_params_by_mode(a0, a1, a2, a3);
    return a0;
}

/*
 * Class_129808_set_params_by_mode  0x8c016464
 * stores mode a3; mode 1 copies 3 + 1 words and mode 2 copies 6 + 2 words from a1/a2 into its buffers, otherwise it
 * keeps the pointers called by: CSquid_Init, Class_129808_m2_0148d8, Class_12b3b8_ctor,
 * Class_12b930_uses_vec_new_array_0d2fd8, Class_12bea8_copy_01642c,
 * Class_12bec0_uses_Class_129808_set_params_by_m_0f5b10, game_uses_rand_0ae84c, obj_draw_with_part_swapped
 */
u32 Class_129808_set_params_by_mode(int *a0, u32 *a1, u32 *a2, int a3) {
    u32 uVar1;
    u32 *puVar2;
    int iVar3;

    a0[4] = a3;
    if (a0[4] == 1) {
        puVar2 = (u32 *)*a0;
        uVar1 = a1[1];
        *puVar2 = *a1;
        puVar2[1] = uVar1;
        puVar2[2] = a1[2];
        uVar1 = *a2;
        *(u32 *)a0[1] = uVar1;
        return uVar1;
    }
    if (a0[4] == 2) {
        puVar2 = (u32 *)*a0;
        uVar1 = a1[1];
        *puVar2 = *a1;
        puVar2[1] = uVar1;
        puVar2[2] = a1[2];
        iVar3 = *a0;
        uVar1 = a1[4];
        *(u32 *)(iVar3 + 0xc) = a1[3];
        *(u32 *)(iVar3 + 0x10) = uVar1;
        *(u32 *)(iVar3 + 0x14) = a1[5];
        *(u32 *)a0[1] = *a2;
        uVar1 = a2[1];
        *(u32 *)(a0[1] + 4) = uVar1;
        return uVar1;
    }
    *a0 = (int)a1;
    a0[1] = (int)a2;
    return a0[4];
}

/*
 * Class_129808_update_fields_0164c8  0x8c0164c8
 * area name: sits between Class_129808 functions (same compilation unit); behaviour name: conditionally writes members
 * called by: CSquid_Init, Class_12b930_uses_vec_new_array_0d2fd8, Class_12bea8_draw_ground_quad,
 * Class_12bec0_uses_Class_129808_set_params_by_m_0f5b10, game_uses_obj_set_texlist_0d1168
 */
int Class_129808_update_fields_0164c8(int a0, u16 *a1, int a2) {
    short sVar1;
    u16 *puVar2;
    int iVar3;

    if (a2 == 1) {
        puVar2 = *(u16 **)(a0 + 8);
        *puVar2 = *a1;
        sVar1 = a1[1];
        puVar2[1] = sVar1;
        return (int)sVar1;
    }
    if (a2 == 2) {
        puVar2 = *(u16 **)(a0 + 8);
        *puVar2 = *a1;
        puVar2[1] = a1[1];
        iVar3 = *(int *)(a0 + 8);
        *(u16 *)(iVar3 + 4) = a1[2];
        sVar1 = a1[3];
        *(short *)(iVar3 + 6) = sVar1;
        return (int)sVar1;
    }
    *(u16 **)(a0 + 8) = a1;
    return a2;
}

/*
 * Class_129808_calc_016504  0x8c016504
 * area name: only called from Class_129808 methods; behaviour name: integer arithmetic on its arguments
 * called by: Class_129808_m2_0148d8
 */
u32 Class_129808_calc_016504(int a0, u32 unused_a1, u32 unused_a2, u32 a3) {
    u32 uVar1;

    uVar1 = (*(code *)(&gfxlib_draw_234d68))(a0, *(u32 *)(a0 + 0x10), *(u32 *)(a0 + 0x14), a3);
    return uVar1;
}

/*
 * Class_12bea8_calc_016524  0x8c016524
 * area name: only called from Class_12bea8 methods; behaviour name: integer arithmetic on its arguments
 * called by: CSquidLine_uses_matrix_push_0ad354, Class_12b3b8_uses_object_dtor_delete_0e7a78,
 * Class_12bea8_draw_ground_quad, Class_12bec0_draw_0f5e0c, Class_12bec0_draw_0f5f08, game_draw_0ad7ec,
 * game_uses_obj_set_texlist_0d1168, obj_draw_with_part_swapped
 */
u32 Class_12bea8_calc_016524(int a0, u32 unused_a1, u32 unused_a2, u32 a3) {
    u32 uVar1;

    uVar1 = (*(code *)(&gfxlib_draw_235bfc))(a0, *(u32 *)(a0 + 0x10), *(u32 *)(a0 + 0x14), a3);
    return uVar1;
}

/*
 * Class_129808_draw_016544  0x8c016544
 * area name: sits between Class_129808 functions (same compilation unit); behaviour name: mostly calls draw functions
 * called by: game_draw_0d9c60
 */
u32 Class_129808_draw_016544(int a0, u32 a1, u32 unused_a2, u32 a3) {
    u32 uVar1;

    uVar1 = a1;
    njSetTexture(*(u32 *)(a0 + 0x40));
    njSetTextureNum(a1);
    uVar1 = (*(code *)(&gfxlib_draw_235bfc))(a0, *(u32 *)(a0 + 0x10), *(u32 *)(a0 + 0x14), a3);
    return uVar1;
}

/*
 * Class_129808_copy_016584  0x8c016584
 * area name: sits between Class_129808 functions (same compilation unit); behaviour name: mostly calls copy functions
 * called by: Class_129808_copy_016410, Class_12bea8_copy_01642c
 */
u32 Class_129808_copy_016584(int *a0) {
    u32 uVar1;

    a0[8] = 0;
    a0[7] = 0;
    a0[6] = 0;
    a0[0xb] = 0;
    a0[9] = 0;
    a0[10] = 0x42c80000;
    a0[0xd] = -1;
    a0[0xc] = -1;
    *(u16 *)((int)a0 + 0x3e) = 0;
    *(u16 *)(a0 + 0xf) = 0;
    *(u16 *)((int)a0 + 0x3a) = 0;
    *(u16 *)(a0 + 0xe) = 0;
    *a0 = (int)(a0 + 6);
    a0[1] = (int)(a0 + 0xc);
    a0[2] = (int)(a0 + 0xe);
    a0[4] = 2;
    uVar1 = clear_field_14(a0);
    return uVar1;
}

/*
 * clear_field_14  0x8c016658
 * called by: Class_129808_copy_016584
 */
u32 clear_field_14(int a0) {
    *(u32 *)(a0 + 0x14) = 0;
    return 0;
}

/*
 * free_if_nonnull_wrap_016660  0x8c016660
 * called by: CTexture_uses_item_grid_find_free_0e8090, Class_12b3b8_dtor, game_uses_copy_2_u16_0e89c4,
 * game_uses_free_if_nonnull_wrap_0e8280, item_grid_find_free
 */
int free_if_nonnull_wrap_016660(int a0, u32 a1, u32 a2, u32 a3) {
    u32 in_stack_fffffff4;

    if ((a0 != 0) && (0 < (short)a1)) {
        free_if_nonnull(a0, a1, a2, a3, CONCAT22((short)((u32)in_stack_fffffff4 >> 0x10), (short)a1));
    }
    return a0;
}

/*
 * set_fields_0_2_wrap  0x8c016690
 * only calls set_fields_0_2
 * called by: Class_12b3b8_ctor
 */
u32 set_fields_0_2_wrap(u32 a0) {
    u32 uVar1;

    uVar1 = set_fields_0_2(a0, 0, 0);
    return uVar1;
}

/*
 * Class_129808_m6_0166b4  0x8c0166b4
 */
u32 Class_129808_m6_0166b4(int a0, int a1, int a2, u32 a3) {
    u32 uVar1;
    u8 *ar5_00;
    int iVar2;
    int ar5_01;
    u8 auStack_64[20];
    u8 auStack_50[16];
    u8 auStack_40[36];

    iVar2 = a1;
    ar5_01 = a2;
    clear_5_words(auStack_64, a1, a2, a3);
    set_texlist_and_num(a0, iVar2, a2);
    set_field_10(auStack_64, ar5_01);
    for (iVar2 = 0; *(char *)(iVar2 + a1) != '\0'; iVar2 = iVar2 + 1) {
        Class_129808_uses_libgcc_divide_helper_01679c(a0, (int)*(char *)(iVar2 + a1), auStack_50);
        strip_cell_quad(a0, iVar2, auStack_40);
        a3 = 4;
        a2 = a0 + 0x1c;
        set_fields_0_4_c(auStack_64, auStack_40, a2, 4);
        ar5_00 = auStack_50;
        Class_129808_set_model(auStack_64, ar5_00, a2);
        Class_129808_draw(auStack_64, ar5_00, a2, a3);
    }
    uVar1 = free_if_nonnull_wrap_0151a0(auStack_64, 0xffffffff, a2, a3);
    return uVar1;
}

/*
 * Class_129808_uses_libgcc_divide_helper_01679c  0x8c01679c
 * area name: only called from Class_129808 methods; behaviour name: its main named callee is
 * libgcc_divide_helper_01031c called by: Class_129808_m6_0166b4
 */
int Class_129808_uses_libgcc_divide_helper_01679c(int a0, u32 a1, short *a2) {
    u32 uVar1;
    short *ar6_00;
    int iVar2;

    iVar2 = (char)a1 + -0x20;
    ar6_00 = a2;
    uVar1 = libgcc_divide_helper_01031c(iVar2, 0x10, a2);
    *a2 = (short)uVar1 * (short)*(u32 *)(a0 + 0x14);
    uVar1 = libgcc_divide_helper_0101e4(iVar2, 0x10);
    a2[1] = (short)uVar1 * (short)*(u32 *)(a0 + 0x18) + (short)*(u32 *)(a0 + 0x18);
    uVar1 = libgcc_divide_helper_01031c(iVar2, 0x10, ar6_00);
    a2[2] = (short)uVar1 * (short)*(u32 *)(a0 + 0x14);
    uVar1 = libgcc_divide_helper_0101e4(iVar2, 0x10);
    a2[3] = (short)uVar1 * (short)*(u32 *)(a0 + 0x18);
    uVar1 = libgcc_divide_helper_01031c(iVar2, 0x10, ar6_00);
    a2[4] = (short)uVar1 * (short)*(u32 *)(a0 + 0x14) + (short)*(u32 *)(a0 + 0x14);
    uVar1 = libgcc_divide_helper_0101e4(iVar2, 0x10);
    a2[5] = (short)uVar1 * (short)*(u32 *)(a0 + 0x18);
    uVar1 = libgcc_divide_helper_01031c(iVar2, 0x10, ar6_00);
    a2[6] = (short)uVar1 * (short)*(u32 *)(a0 + 0x14) + (short)*(u32 *)(a0 + 0x14);
    iVar2 = libgcc_divide_helper_0101e4(iVar2, 0x10);
    iVar2 = iVar2 * *(int *)(a0 + 0x18) + *(int *)(a0 + 0x18);
    a2[7] = (short)iVar2;
    return iVar2;
}

/*
 * set_texlist_and_num  0x8c01688c
 * sets texture list a1 and texture +8 on the object at +4
 * called by: Class_129808_m6_0166b4
 */
u32 set_texlist_and_num(int a0, u32 a1, u32 a2) {
    u32 uVar1;

    obj_set_texlist(*(u32 *)(a0 + 4), a1, a2);
    uVar1 = obj_set_texture_num(*(u32 *)(a0 + 4), *(u32 *)(a0 + 8));
    return uVar1;
}

/*
 * strip_cell_quad  0x8c0168b4
 * *a2 = the four corners of cell a1 in a strip of (+0xc x +0x10) cells at (fr4, fr5), scaled by fr6
 * called by: Class_129808_m6_0166b4
 */
int strip_cell_quad(int a0, int a1, float *a2) {
    int iVar1;
    float in_fr5;
    float in_fr4;
    float in_fr6;

    *a2 = (float)*(int *)(a0 + 0xc) * in_fr6 * (float)a1 + in_fr4;
    a2[1] = (float)*(int *)(a0 + 0x10) * in_fr6 + in_fr5;
    a2[2] = (float)*(int *)(a0 + 0xc) * in_fr6 * (float)a1 + in_fr4;
    a2[3] = in_fr5;
    a2[4] = (float)*(int *)(a0 + 0xc) * in_fr6 * (float)a1 + in_fr4 + (float)*(int *)(a0 + 0xc) * in_fr6;
    a2[5] = in_fr5;
    a2[6] = (float)*(int *)(a0 + 0xc) * in_fr6 * (float)a1 + in_fr4 + (float)*(int *)(a0 + 0xc) * in_fr6;
    iVar1 = *(int *)(a0 + 0x10);
    a2[7] = (float)iVar1 * in_fr6 + in_fr5;
    return iVar1;
}

/*
 * ret_const_1_01694c  0x8c01694c
 */
u32 ret_const_1_01694c(void) {
    return 1;
}

/*
 * noop_016954  0x8c016954
 */
u32 noop_016954(void) {
    u32 in_r0;

    return in_r0;
}

/*
 * noop_016958  0x8c016958
 */
u32 noop_016958(void) {
    u32 in_r0;

    return in_r0;
}

/*
 * noop_01695c  0x8c01695c
 */
u32 noop_01695c(void) {
    u32 in_r0;

    return in_r0;
}

/*
 * noop_016960  0x8c016960
 */
u32 noop_016960(void) {
    u32 in_r0;

    return in_r0;
}

/*
 * noop_016964  0x8c016964
 */
u32 noop_016964(void) {
    u32 in_r0;

    return in_r0;
}

/*
 * noop_016968  0x8c016968
 */
u32 noop_016968(void) {
    u32 in_r0;

    return in_r0;
}

/*
 * noop_01696c  0x8c01696c
 */
u32 noop_01696c(void) {
    u32 in_r0;

    return in_r0;
}

/*
 * noop_016970  0x8c016970
 */
u32 noop_016970(void) {
    u32 in_r0;

    return in_r0;
}

/*
 * noop_016974  0x8c016974
 */
u32 noop_016974(void) {
    u32 in_r0;

    return in_r0;
}

/*
 * static_init_vec3s_278838  0x8c016978
 * static initialiser: builds four global Vec3 constants (8c278838..8c27885c) and registers their destructors
 */
u32 static_init_vec3s_278838(u32 unused_a0, u32 a1, u32 a2, u32 a3) {
    u32 uVar1;
    u32 uVar2;
    u8 *puVar3;

    uVar1 = Vec3_ctor_xyz((&DATA_8c1258c8), a1, a2, a3);
    puVar3 = (&Vec3_dtor);
    uVar2 = 0x8c278838;
    global_list_push(uVar1, (&Vec3_dtor), 0x8c278838, a3);
    uVar1 = Vec3_ctor_xyz((&DATA_8c1258d8), puVar3, uVar2, a3);
    puVar3 = (&Vec3_dtor);
    uVar2 = 0x8c278844;
    global_list_push(uVar1, (&Vec3_dtor), 0x8c278844, a3);
    uVar1 = Vec3_ctor_xyz((&DATA_8c1258e8), puVar3, uVar2, a3);
    puVar3 = (&Vec3_dtor);
    uVar2 = 0x8c278850;
    global_list_push(uVar1, (&Vec3_dtor), 0x8c278850, a3);
    uVar2 = Vec3_ctor_xyz((&DATA_8c1258f8), puVar3, uVar2, a3);
    uVar2 = global_list_push(uVar2, (&Vec3_dtor), 0x8c27885c, a3);
    return uVar2;
}

/*
 * avoid_zero_float_4  0x8c016a20
 * replaces a zero float at +4 with 1e-4
 * called by: game_vec_0e0988
 */
int avoid_zero_float_4(int a0) {
    if (*(float *)(a0 + 4) == 0.0) {
        *(u32 *)(a0 + 4) = 0x38d1b717;
    }
    return a0 + 8;
}

/*
 * Class_1299b0_ctor  0x8c016a7c
 * vtable 0x8c1299b0; position, rotation zero, scale one, +0x2c = 2
 * called by: Class_129938_ctor, Class_129938_ctor_init, Class_129974_ctor
 */
u32 *Class_1299b0_ctor(u32 *a0, u32 a1, u32 a2) {
    *a0 = (&DATA_8c1299b0);
    Vec3_ctor_zero(a0 + 1, a1, a2);
    Vec3_set_zero(a0 + 5);
    Vec3_set_one(a0 + 8);
    a0[0xb] = 2;
    return a0;
}

/*
 * free_if_nonnull_wrap_016ac4  0x8c016ac4
 * called by: CAnimal_m0_025688, Class_1299b0_dtor, Class_12a0c4_m0_0674c8, Class_12a5d0_m0_08a3a4,
 * Class_12a990_release_09b88c, Class_12c1f0_m0_0f4108, game_release_02441c, game_release_0af368 (+10 more)
 */
int free_if_nonnull_wrap_016ac4(int a0, u32 a1, u32 a2, u32 a3) {
    u32 in_stack_fffffff4;

    if ((a0 != 0) && (0 < (short)a1)) {
        free_if_nonnull(a0, a1, a2, a3, CONCAT22((short)((u32)in_stack_fffffff4 >> 0x10), (short)a1));
    }
    return a0;
}

/*
 * Class_1299b0_dtor  0x8c016af4
 * stores the vtable 0x8c1299b0
 * called by: Class_129938_dtor, Class_129974_dtor
 */
u32 *Class_1299b0_dtor(u32 *a0, u32 a1, u32 a2, u32 a3) {
    u32 ar5_00;
    u32 in_stack_fffffff4;
    u32 ain0;

    ain0 = CONCAT22((short)((u32)in_stack_fffffff4 >> 0x10), (u16)a1);
    if (a0 != NULL) {
        *a0 = &g_8c1299b0;
        free_if_nonnull_wrap_016ac4(a0 + 8, 0xffffffff, a2, a3);
        object_dtor_delete(a0 + 5, 0xffffffff, a2, a3);
        ar5_00 = 0xffffffff;
        Vec3_dtor(a0 + 1, 0xffffffff, a2, a3);
        if (0 < (short)ain0) {
            free_if_nonnull(a0);
        }
    }
    return a0;
}

/*
 * noop_016b5c  0x8c016b5c
 */
u32 noop_016b5c(void) {
    u32 in_r0;

    return in_r0;
}

/*
 * noop_016b60  0x8c016b60
 */
u32 noop_016b60(void) {
    u32 in_r0;

    return in_r0;
}

/*
 * Class_129974_ctor  0x8c016b64
 * stores the vtable 0x8c129974
 * called by: Class_129974_ctor_wrap
 */
u32 *Class_129974_ctor(u32 *a0, u32 a1, u32 a2) {
    u32 in_fr1;
    u32 in_fr4;
    u64 in_xd14;
    char cVar1;

    cVar1 = '\0';
    Class_1299b0_ctor(a0, a1, a2);
    *a0 = &g_8c129974;
    clear_field_0_wrap_015ab8(a0 + 0x10);
    if (cVar1 == '\0') {
        a0[0xc] = 0;
    } else {
        *(u64 *)(a0 + 0xc) = (u64)in_fr1;
    }
    if (cVar1 == '\0') {
        a0[0xd] = 0;
    } else {
        *(u64 *)(a0 + 0xd) = (u64)in_fr1;
    }
    if (cVar1 == '\0') {
        a0[0xe] = 0;
        a0[0xf] = in_fr4;
        a0[10] = in_fr4;
        a0[9] = in_fr4;
        a0[8] = in_fr4;
    } else {
        *(u64 *)(a0 + 0xe) = (u64)in_fr1;
        *(u64 *)(a0 + 0xf) = in_xd14;
        *(u64 *)(a0 + 10) = in_xd14;
        *(u64 *)(a0 + 9) = in_xd14;
        *(u64 *)(a0 + 8) = in_xd14;
    }
    Class_129974_uses_set_field_0_016fa4(a0, a1, a2);
    return a0;
}

/*
 * free_if_nonnull_wrap_016bfc  0x8c016bfc
 * called by: Class_129938_dtor, Class_129974_dtor, Class_129cbc_dtor, Class_12a0c4_m0_0674c8, Class_12b580_dtor,
 * Class_12b758_dtor, Class_12b758_release_0e462c, Class_12b930_destroy (+11 more)
 */
int free_if_nonnull_wrap_016bfc(int a0, u32 a1, u32 a2, u32 a3) {
    u32 in_stack_fffffff4;

    if ((a0 != 0) && (0 < (short)a1)) {
        free_if_nonnull(a0, a1, a2, a3, CONCAT22((short)((u32)in_stack_fffffff4 >> 0x10), (short)a1));
    }
    return a0;
}

/*
 * Class_129974_dtor  0x8c016c2c
 * stores the vtable 0x8c129974
 * called by: Class_12c1f0_dtor_like, game_uses_Class_129974_dtor_0db224, game_uses_Class_129974_dtor_0e0614
 */
u32 *Class_129974_dtor(u32 *a0, u32 a1, u32 a2, u32 a3) {
    u32 ar5_00;
    u32 in_stack_fffffff4;
    u32 ain0;

    ain0 = CONCAT22((short)((u32)in_stack_fffffff4 >> 0x10), (u16)a1);
    if (a0 != NULL) {
        *a0 = &g_8c129974;
        free_if_nonnull_wrap_016bfc(a0 + 0x10, 0xffffffff, a2, a3);
        ar5_00 = 0;
        Class_1299b0_dtor(a0, 0, a2, a3);
        if (0 < (short)ain0) {
            free_if_nonnull(a0);
        }
    }
    return a0;
}

/*
 * Class_129974_init_fields_016c84  0x8c016c84
 * area name: sits between Class_129974 functions (same compilation unit); behaviour name: writes 6 members
 */
u32 Class_129974_init_fields_016c84(int a0, u32 *a1) {
    u32 uVar1;

    uVar1 = *a1;
    *(u32 *)(a0 + 0x30) = uVar1;
    *(u32 *)(a0 + 4) = uVar1;
    uVar1 = a1[1];
    *(u32 *)(a0 + 0x34) = uVar1;
    *(u32 *)(a0 + 8) = uVar1;
    uVar1 = a1[2];
    *(u32 *)(a0 + 0x38) = uVar1;
    *(u32 *)(a0 + 0xc) = uVar1;
    return 0;
}

/*
 * Class_129974_set_point_dir  0x8c016cec
 * calls method 0x34, stores the point a1 (at +4 and +0x30) and the direction a3 (+0x20) and stores a product of the
 * direction's last component at +0x3c
 */
float *Class_129974_set_point_dir(int a0, u64 *a1, u32 a2, u64 *a3, int *s0) {
    float *pfVar1;
    float fVar2;
    u64 uVar3;
    double dVar4;
    u64 in_xd0;
    u32 in_PR;
    char cVar6;
    char cVar7;
    u8 auStack_20[12];
    u32 uStack_14;
    u32 uStack_10;
    u32 uVar5;

    cVar7 = '\0';
    cVar6 = '\0';
    uStack_10 = in_PR;
    (**(code **)(*s0 + 0x34))(s0, auStack_20, a2, a3);
    if (cVar7 == '\0') {
        uVar5 = *(u32 *)a1;
        *(u32 *)(a0 + 0x30) = uVar5;
        *(u32 *)(a0 + 4) = uVar5;
        uVar5 = *(u32 *)((int)a1 + 4);
        *(u32 *)(a0 + 0x34) = uVar5;
        *(u32 *)(a0 + 8) = uVar5;
        uVar5 = *(u32 *)(a1 + 1);
        *(u32 *)(a0 + 0x38) = uVar5;
        *(u32 *)(a0 + 0xc) = uVar5;
        *(u32 *)(a0 + 0x20) = *(u32 *)a3;
        *(u32 *)(a0 + 0x24) = *(u32 *)((int)a3 + 4);
        *(u32 *)(a0 + 0x28) = *(u32 *)(a3 + 1);
        dVar4 = (double)CONCAT44(*(u32 *)(a0 + 0x28), uStack_14);
    } else {
        uVar3 = *a1;
        *(u64 *)(a0 + 0x30) = uVar3;
        *(u64 *)(a0 + 4) = uVar3;
        uVar3 = *(u64 *)((int)a1 + 4);
        *(u64 *)(a0 + 0x34) = uVar3;
        *(u64 *)(a0 + 8) = uVar3;
        uVar3 = a1[1];
        *(u64 *)(a0 + 0x38) = uVar3;
        *(u64 *)(a0 + 0xc) = uVar3;
        *(u64 *)(a0 + 0x20) = *a3;
        *(u64 *)(a0 + 0x24) = *(u64 *)((int)a3 + 4);
        *(u64 *)(a0 + 0x28) = a3[1];
        in_xd0 = CONCAT44(uStack_10, uStack_14);
        dVar4 = *(double *)(a0 + 0x28);
    }
    pfVar1 = (float *)(a0 + 0x3c);
    if (cVar6 == '\0') {
        fVar2 = SUB84(dVar4, 0) * (float)((u64)dVar4 >> 0x20);
    } else {
        fVar2 = SUB84(dVar4 * dVar4, 0);
    }
    if (cVar7 == '\0') {
        *pfVar1 = fVar2;
    } else {
        *(u64 *)pfVar1 = in_xd0;
    }
    return pfVar1;
}

/*
 * game_draw_016da8  0x8c016da8
 * area name: game code; nothing names its area yet; behaviour name: mostly calls draw functions
 */
u32 game_draw_016da8(int a0, u32 a1, u32 a2, u32 a3) {
    u32 uVar1;
    u32 in_PR;

    matrix_push(0, a1, a2, a3, in_PR);
    touch_fields_30_3c(0, a1, a2, a3, in_PR);
    matrix_scale(0, a1, a2, a3, in_PR);
    Class_129938_draw_015af8(a0 + 0x40, a1, a2, a3);
    uVar1 = matrix_pop_n(1);
    return uVar1;
}

/*
 * game_calc_016e18  0x8c016e18
 * area name: game code; nothing names its area yet; behaviour name: integer arithmetic on its arguments
 */
u32 game_calc_016e18(u32 a0, int *a1, u32 a2, u32 a3) {
    u32 uVar1;

    uVar1 = (**(code **)(*a1 + 0x18))(a1, a0, a2, a3);
    return uVar1;
}

/*
 * game_uses_noop_fr4_test_016e38  0x8c016e38
 * area name: game code; nothing names its area yet; behaviour name: its callees mostly do: uses_noop_fr4_test
 */
u32 game_uses_noop_fr4_test_016e38(int a0, int *a1, u32 a2, u32 a3) {
    u32 uVar1;
    u8 auStack_14[20];

    (**(code **)(*a1 + 0x34))(a1, auStack_14, a2, a3);
    uVar1 = gfxlib_uses_noop_fr4_test_233d14(a0 + 0x30, auStack_14);
    return uVar1;
}

/*
 * get_vec4_30  0x8c016e6c
 * copies the four words at +0x30 to a1
 */
u32 *get_vec4_30(int a0, u32 *a1) {
    a1[3] = *(u32 *)(a0 + 0x3c);
    *a1 = *(u32 *)(a0 + 0x30);
    a1[1] = *(u32 *)(a0 + 0x34);
    a1[2] = *(u32 *)(a0 + 0x38);
    return (u32 *)(a0 + 0x34);
}

/*
 * game_uses_noop_fr4_test_016e98  0x8c016e98
 * area name: game code; nothing names its area yet; behaviour name: its callees mostly do: uses_noop_fr4_test
 */
u32 game_uses_noop_fr4_test_016e98(int a0, int *a1, u32 a2, u32 a3) {
    u32 uVar1;
    u8 auStack_64[100];

    (**(code **)(*a1 + 0x38))(a1, auStack_64, a2, a3);
    uVar1 = gfxlib_uses_noop_fr4_test_2336e8(auStack_64, a0 + 0x30);
    return uVar1;
}

/*
 * copy_8_vec3_30  0x8c016ecc
 * copies the eight vectors at +0x30 to a1
 */
u32 copy_8_vec3_30(int a0, int a1) {
    int iVar1;

    for (iVar1 = 0; iVar1 < 8; iVar1 = iVar1 + 1) {
        *(u32 *)(iVar1 * 0xc + a1) = *(u32 *)(iVar1 * 0xc + a0 + 0x30);
        *(u32 *)(iVar1 * 0xc + a1 + 4) = *(u32 *)(iVar1 * 0xc + a0 + 0x34);
        *(u32 *)(iVar1 * 0xc + a1 + 8) = *(u32 *)(iVar1 * 0xc + a0 + 0x38);
    }
    return 8;
}

/*
 * game_vec_016f50  0x8c016f50
 * area name: game code; nothing names its area yet; behaviour name: mostly calls vec functions
 */
u32 game_vec_016f50(int a0, int *a1, u32 a2, u32 a3) {
    u32 uVar1;

    (**(code **)(*a1 + 0x34))(a1, a0 + 0x30, a2, a3);
    uVar1 = Vec3_assign_copy_wrap(a1, a0 + 0x20);
    return uVar1;
}

/*
 * Vec3_assign_copy_wrap  0x8c016f84
 * only calls Vec3_assign_copy
 * called by: Class_129938_m7_0177d0, game_vec_016f50
 */
u32 Vec3_assign_copy_wrap(int a0, u32 a1) {
    u32 uVar1;

    uVar1 = Vec3_assign_copy(a1, a0 + 0x20);
    return uVar1;
}

/*
 * Class_129974_uses_set_field_0_016fa4  0x8c016fa4
 * area name: only called from Class_129974 methods; behaviour name: its main named callee is set_field_0_015ad4
 * called by: Class_129974_ctor
 */
u32 Class_129974_uses_set_field_0_016fa4(int a0, u32 unused_a1, u32 a2) {

    set_field_0_015ad4(a0 + 0x40, &g_8c12f1b8, a2);
    *(u32 *)(a0 + 0x2c) = 0;
    return 0;
}

/*
 * Class_129938_ctor  0x8c016fcc
 * called by: CFrogManEgg_ctor, CFrogManLine_ctor, CHigyoEgg_ctor, CHigyoLine_ctor, CMothEgg_ctor, CMothLine_ctor,
 * CMushroomerEgg_ctor, CMushroomerLine_ctor (+7 more)
 */
u32 *Class_129938_ctor(u32 *a0, u32 a1, u32 a2) {
    Class_1299b0_ctor(a0, a1, a2);
    *a0 = (&DATA_8c129938);
    clear_field_0_wrap_015ab8((int)a0 + 0x90);
    Class_129938_uses_set_field_0_017804(a0, a1, a2);
    return a0;
}

/*
 * Class_129938_ctor_init  0x8c017010
 * constructs, then calls the init method (slot 0x2c)
 * called by: static_init_vec3s_27df98, static_init_vec3s_2804b0, static_init_vec3s_280f78, static_init_vec3s_283ae8,
 * static_init_vec3s_284730, static_init_vec3s_284a50, static_init_vec3s_284d50, static_init_vec3s_285220 (+1 more)
 */
int *Class_129938_ctor_init(int *a0, u32 a1, u32 a2, u32 a3, u32 s0, u32 s4, u32 s8, u32 s12, u32 s16) {
    Class_1299b0_ctor(a0, a1, a2);
    *a0 = (int)(&DATA_8c129938);
    clear_field_0_wrap_015ab8((int)a0 + 0x90);
    (**(code **)(*a0 + 0x2c))(a0, a1, a2, a3, s0, s4, s8, s12, s16);
    Class_129938_uses_set_field_0_017804(a0, a1, a2);
    return a0;
}

/*
 * Class_129938_dtor  0x8c017084
 * stores the vtable 0x8c129938
 * called by: CAnimal_m0_0361d8, CAnimal_m0_038648, CAnimal_m0_08516c, CAnimal_m0_08800c, CAnimal_m0_0aca4c,
 * Class_12a0c4_m0_0674c8, Class_12a5d0_m0_08a3a4, Class_12a7f4_m0_099fd8 (+7 more)
 */
u32 *Class_129938_dtor(u32 *a0, u32 a1, u32 a2, u32 a3) {
    u32 ar5_00;
    u32 in_stack_fffffff4;
    u32 ain0;

    ain0 = CONCAT22((short)((u32)in_stack_fffffff4 >> 0x10), (u16)a1);
    if (a0 != NULL) {
        *a0 = &g_8c129938;
        free_if_nonnull_wrap_016bfc(a0 + 0x24, 0xffffffff, a2, a3);
        ar5_00 = 0;
        Class_1299b0_dtor(a0, 0, a2, a3);
        if (0 < (short)ain0) {
            free_if_nonnull(a0);
        }
    }
    return a0;
}

/*
 * Class_129938_m1_0170e0  0x8c0170e0
 */
u32 Class_129938_m1_0170e0(int a0, u32 a1, u32 a2, int *a3) {
    u32 ar6_00;
    float fVar1;
    double dVar2;
    int ar7_00;
    int iVar3;
    int ar5_00;
    char cVar4;
    char cVar5;
    u8 auStack_ac[64];
    u8 auStack_6c[100];

    cVar5 = '\0';
    cVar4 = '\0';
    ar6_00 = a2;
    (**(code **)(*a3 + 0x38))(a3, auStack_6c, a2, a3);
    Vec3_assign(a0 + 4, a1, ar6_00, a3);
    vec3_copy_8c023d8c(a0 + 0x14, a2, ar6_00, a3);
    njGetMatrix(auStack_ac, a2, ar6_00, a3, a1);
    touch_fields_30_3c(auStack_ac, a2, ar6_00, a3, a1);
    if (cVar5 == '\0') {
        dVar2 = (double)CONCAT44(0x47800000, *(u32 *)(a0 + 0x1c));
    } else {
        dVar2 = 1.4411521878487204e+18;
    }
    if (cVar4 == '\0') {
        fVar1 = SUB84(dVar2, 0) * (float)((u64)dVar2 >> 0x20);
    } else {
        fVar1 = SUB84(dVar2 * dVar2, 0);
    }
    if (cVar5 == '\0') {
        dVar2 = (double)CONCAT44(0x43b40000, fVar1);
    } else {
        dVar2 = -3.739346301775294e-250;
    }
    if (cVar4 == '\0') {
        ar7_00 = (int)(SUB84(dVar2, 0) / (float)((u64)dVar2 >> 0x20));
    } else {
        ar7_00 = (int)(dVar2 / dVar2);
    }
    if (cVar5 == '\0') {
        dVar2 = (double)CONCAT44(0x47800000, *(u32 *)(a0 + 0x18));
    } else {
        dVar2 = 1.4411521878487204e+18;
    }
    if (cVar4 == '\0') {
        fVar1 = SUB84(dVar2, 0) * (float)((u64)dVar2 >> 0x20);
    } else {
        fVar1 = SUB84(dVar2 * dVar2, 0);
    }
    if (cVar5 == '\0') {
        dVar2 = (double)CONCAT44(0x43b40000, fVar1);
    } else {
        dVar2 = -3.739346301775294e-250;
    }
    if (cVar4 == '\0') {
        iVar3 = (int)(SUB84(dVar2, 0) / (float)((u64)dVar2 >> 0x20));
    } else {
        iVar3 = (int)(dVar2 / dVar2);
    }
    if (cVar5 == '\0') {
        dVar2 = (double)CONCAT44(0x47800000, *(u32 *)(a0 + 0x14));
    } else {
        dVar2 = 1.4411521878487204e+18;
    }
    if (cVar4 == '\0') {
        fVar1 = SUB84(dVar2, 0) * (float)((u64)dVar2 >> 0x20);
    } else {
        fVar1 = SUB84(dVar2 * dVar2, 0);
    }
    if (cVar5 == '\0') {
        dVar2 = (double)CONCAT44(0x43b40000, fVar1);
    } else {
        dVar2 = -3.739346301775294e-250;
    }
    if (cVar4 == '\0') {
        ar5_00 = (int)(SUB84(dVar2, 0) / (float)((u64)dVar2 >> 0x20));
    } else {
        ar5_00 = (int)(dVar2 / dVar2);
    }
    njRotateXYZ(auStack_ac, ar5_00, iVar3, ar7_00, a1);
    for (iVar3 = 0; iVar3 < 8; iVar3 = iVar3 + 1) {
        point_transform_or_copy(auStack_ac, auStack_6c + iVar3 * 0xc, iVar3 * 0xc + a0 + 0x30, ar7_00, a1);
    }
    return 8;
}

/*
 * Class_129938_m2_0171f4  0x8c0171f4
 */
u32 Class_129938_m2_0171f4(int a0, u32 a1, u32 a2, u32 a3) {
    u32 ar6_00;
    u32 ar7_00;
    float fVar1;
    double dVar2;
    int ar7_01;
    int iVar3;
    int ar5_00;
    char cVar4;
    char cVar5;
    int *in_stack_00000000;
    u8 auStack_ac[64];
    u8 auStack_6c[100];

    cVar5 = '\0';
    cVar4 = '\0';
    ar6_00 = a2;
    ar7_00 = a3;
    (**(code **)(*in_stack_00000000 + 0x38))(in_stack_00000000, auStack_6c, a2, a3);
    Vec3_assign(a0 + 4, a1, ar6_00, ar7_00);
    vec3_copy_8c023d8c(a0 + 0x14, a2, ar6_00, ar7_00);
    Vec3_assign_copy(a0 + 0x20, a3);
    njGetMatrix(auStack_ac, a3, ar6_00, ar7_00, a1);
    touch_fields_30_3c(auStack_ac, a3, ar6_00, ar7_00, a1);
    if (cVar5 == '\0') {
        dVar2 = (double)CONCAT44(0x47800000, *(u32 *)(a0 + 0x1c));
    } else {
        dVar2 = 1.4411521878487204e+18;
    }
    if (cVar4 == '\0') {
        fVar1 = SUB84(dVar2, 0) * (float)((u64)dVar2 >> 0x20);
    } else {
        fVar1 = SUB84(dVar2 * dVar2, 0);
    }
    if (cVar5 == '\0') {
        dVar2 = (double)CONCAT44(0x43b40000, fVar1);
    } else {
        dVar2 = -3.739346301775294e-250;
    }
    if (cVar4 == '\0') {
        ar7_01 = (int)(SUB84(dVar2, 0) / (float)((u64)dVar2 >> 0x20));
    } else {
        ar7_01 = (int)(dVar2 / dVar2);
    }
    if (cVar5 == '\0') {
        dVar2 = (double)CONCAT44(0x47800000, *(u32 *)(a0 + 0x18));
    } else {
        dVar2 = 1.4411521878487204e+18;
    }
    if (cVar4 == '\0') {
        fVar1 = SUB84(dVar2, 0) * (float)((u64)dVar2 >> 0x20);
    } else {
        fVar1 = SUB84(dVar2 * dVar2, 0);
    }
    if (cVar5 == '\0') {
        dVar2 = (double)CONCAT44(0x43b40000, fVar1);
    } else {
        dVar2 = -3.739346301775294e-250;
    }
    if (cVar4 == '\0') {
        iVar3 = (int)(SUB84(dVar2, 0) / (float)((u64)dVar2 >> 0x20));
    } else {
        iVar3 = (int)(dVar2 / dVar2);
    }
    if (cVar5 == '\0') {
        dVar2 = (double)CONCAT44(0x47800000, *(u32 *)(a0 + 0x14));
    } else {
        dVar2 = 1.4411521878487204e+18;
    }
    if (cVar4 == '\0') {
        fVar1 = SUB84(dVar2, 0) * (float)((u64)dVar2 >> 0x20);
    } else {
        fVar1 = SUB84(dVar2 * dVar2, 0);
    }
    if (cVar5 == '\0') {
        dVar2 = (double)CONCAT44(0x43b40000, fVar1);
    } else {
        dVar2 = -3.739346301775294e-250;
    }
    if (cVar4 == '\0') {
        ar5_00 = (int)(SUB84(dVar2, 0) / (float)((u64)dVar2 >> 0x20));
    } else {
        ar5_00 = (int)(dVar2 / dVar2);
    }
    njRotateXYZ(auStack_ac, ar5_00, iVar3, ar7_01, a1);
    matrix_scale(auStack_ac, ar5_00, iVar3, ar7_01, a1);
    for (iVar3 = 0; iVar3 < 8; iVar3 = iVar3 + 1) {
        point_transform_or_copy(auStack_ac, auStack_6c + iVar3 * 0xc, iVar3 * 0xc + a0 + 0x30, ar7_01, a1);
    }
    return 8;
}

/*
 * Class_129938_m6_01733c  0x8c01733c
 */
u32 Class_129938_m6_01733c(int a0, u32 a1, u32 a2, u32 a3) {
    int iVar1;
    u32 uVar2;
    u64 *puVar3;
    u64 *puVar4;
    int iVar5;
    char cVar6;

    cVar6 = '\0';
    iVar1 = get_field_0_015bb8(a0 + 0x90);
    iVar1 = **(int **)(iVar1 + 4) + 8;
    for (iVar5 = 0; iVar5 < 8; iVar5 = iVar5 + 1) {
        puVar4 = (u64 *)(iVar5 * 0x18 + iVar1);
        puVar3 = (u64 *)(iVar5 * 0xc + a0 + 0x30);
        if (cVar6 == '\0') {
            *(u32 *)puVar4 = *(u32 *)puVar3;
        } else {
            *puVar4 = *puVar3;
        }
        puVar4 = (u64 *)(iVar5 * 0x18 + iVar1 + 4);
        puVar3 = (u64 *)(iVar5 * 0xc + a0 + 0x34);
        if (cVar6 == '\0') {
            *(u32 *)puVar4 = *(u32 *)puVar3;
        } else {
            *puVar4 = *puVar3;
        }
        puVar4 = (u64 *)(iVar5 * 0x18 + iVar1 + 8);
        puVar3 = (u64 *)(iVar5 * 0xc + a0 + 0x38);
        if (cVar6 == '\0') {
            *(u32 *)puVar4 = *(u32 *)puVar3;
        } else {
            *puVar4 = *puVar3;
        }
    }
    uVar2 = Class_129938_draw_015af8(a0 + 0x90, a1, a2, a3);
    return uVar2;
}

/*
 * Class_129938_m3_017408  0x8c017408
 */
u32 Class_129938_m3_017408(u32 a0, int *a1, u32 a2, u32 a3) {
    u32 uVar1;

    uVar1 = (**(code **)(*a1 + 0x1c))(a1, a0, a2, a3);
    return uVar1;
}

/*
 * Class_129938_m4_017428  0x8c017428
 */
u32 Class_129938_m4_017428(int a0, int *a1, u32 a2, u32 a3) {
    u32 uVar1;
    u8 auStack_14[20];

    (**(code **)(*a1 + 0x34))(a1, auStack_14, a2, a3);
    uVar1 = gfxlib_uses_noop_fr4_test_2336e8(a0 + 0x30, auStack_14);
    return uVar1;
}

/*
 * Class_129938_m5_01745c  0x8c01745c
 */
u32 Class_129938_m5_01745c(int a0, int *a1, u32 a2, u32 a3) {
    u32 uVar1;
    u8 auStack_64[100];

    (**(code **)(*a1 + 0x38))(a1, auStack_64, a2, a3);
    uVar1 = gfxlib_uses_libgcc_movstr_i4_23340c(a0 + 0x30, auStack_64);
    return uVar1;
}

/*
 * Class_129938_set_corners  0x8c017490
 * stores the eight corner points a1, a2, a3, s0..s16 and the squared distances from a1 to s0, s4 and a2
 */
u32 Class_129938_set_corners(int a0, u32 *a1, u32 *a2, u32 *a3, u32 *s0, u32 *s4, u32 *s8, u32 *s12, u32 *s16) {
    u32 *ar6_00;
    u32 in_fr1;
    u32 uVar2;
    u64 uVar1;
    char cVar3;
    u32 uStack_2c;
    u32 uStack_28;

    cVar3 = '\0';
    *(u32 *)(a0 + 0x30) = *a1;
    *(u32 *)(a0 + 0x34) = a1[1];
    *(u32 *)(a0 + 0x38) = a1[2];
    *(u32 *)(a0 + 0x3c) = *a2;
    *(u32 *)(a0 + 0x40) = a2[1];
    *(u32 *)(a0 + 0x44) = a2[2];
    *(u32 *)(a0 + 0x48) = *a3;
    *(u32 *)(a0 + 0x4c) = a3[1];
    *(u32 *)(a0 + 0x50) = a3[2];
    *(u32 *)(a0 + 0x54) = *s0;
    *(u32 *)(a0 + 0x58) = s0[1];
    *(u32 *)(a0 + 0x5c) = s0[2];
    *(u32 *)(a0 + 0x60) = *s4;
    *(u32 *)(a0 + 100) = s4[1];
    *(u32 *)(a0 + 0x68) = s4[2];
    *(u32 *)(a0 + 0x6c) = *s8;
    *(u32 *)(a0 + 0x70) = s8[1];
    *(u32 *)(a0 + 0x74) = s8[2];
    *(u32 *)(a0 + 0x78) = *s12;
    *(u32 *)(a0 + 0x7c) = s12[1];
    *(u32 *)(a0 + 0x80) = s12[2];
    *(u32 *)(a0 + 0x84) = *s16;
    *(u32 *)(a0 + 0x88) = s16[1];
    uVar2 = s16[2];
    *(u32 *)(a0 + 0x8c) = uVar2;
    ar6_00 = a2;
    Vec3_distance_sq(a1, s0, a2, a3);
    if (cVar3 == '\0') {
        *(u32 *)(a0 + 0x20) = uVar2;
    } else {
        *(u64 *)(a0 + 0x20) = CONCAT44(uVar2, in_fr1);
    }
    uVar1 = CONCAT44(uVar2, in_fr1);
    Vec3_distance_sq(a1, s4, ar6_00, a3);
    uStack_28 = (u32)uVar1;
    uVar2 = (u32)((u64)uVar1 >> 0x20);
    if (cVar3 == '\0') {
        *(u32 *)(a0 + 0x24) = uVar2;
        uStack_28 = uVar2;
    } else {
        *(u64 *)(a0 + 0x24) = uVar1;
    }
    Vec3_distance_sq(a1, a2, ar6_00, a3);
    uVar2 = (u32)((u64)uVar1 >> 0x20);
    uStack_2c = uVar2;
    if (cVar3 != '\0') {
        uStack_2c = (u32)uVar1;
        uStack_28 = uVar2;
    }
    if (cVar3 == '\0') {
        *(u32 *)(a0 + 0x28) = uStack_2c;
    } else {
        *(u64 *)(a0 + 0x28) = CONCAT44(uStack_28, uStack_2c);
    }
    return 4;
}

/*
 * Class_129938_set_corners_strided  0x8c017630
 * stores eight corner points read from a1 at a 0x10-byte stride and the squared distances of three edges
 */
u32 Class_129938_set_corners_strided(int a0, u32 *a1, u32 a2, u32 a3) {
    u32 in_fr1;
    u32 uVar2;
    u64 uVar1;
    char cVar3;
    u32 uStack_18;
    u32 uStack_14;

    cVar3 = '\0';
    *(u32 *)(a0 + 0x30) = *a1;
    *(u32 *)(a0 + 0x34) = a1[1];
    *(u32 *)(a0 + 0x38) = a1[2];
    *(u32 *)(a0 + 0x3c) = a1[4];
    *(u32 *)(a0 + 0x40) = a1[5];
    *(u32 *)(a0 + 0x44) = a1[6];
    *(u32 *)(a0 + 0x48) = a1[8];
    *(u32 *)(a0 + 0x4c) = a1[9];
    *(u32 *)(a0 + 0x50) = a1[10];
    *(u32 *)(a0 + 0x54) = a1[0xc];
    *(u32 *)(a0 + 0x58) = a1[0xd];
    *(u32 *)(a0 + 0x5c) = a1[0xe];
    *(u32 *)(a0 + 0x60) = a1[0x10];
    *(u32 *)(a0 + 100) = a1[0x11];
    *(u32 *)(a0 + 0x68) = a1[0x12];
    *(u32 *)(a0 + 0x6c) = a1[0x14];
    *(u32 *)(a0 + 0x70) = a1[0x15];
    *(u32 *)(a0 + 0x74) = a1[0x16];
    *(u32 *)(a0 + 0x78) = a1[0x18];
    *(u32 *)(a0 + 0x7c) = a1[0x19];
    *(u32 *)(a0 + 0x80) = a1[0x1a];
    *(u32 *)(a0 + 0x84) = a1[0x1c];
    *(u32 *)(a0 + 0x88) = a1[0x1d];
    uVar2 = a1[0x1e];
    *(u32 *)(a0 + 0x8c) = uVar2;
    Vec3_distance_sq(a1, a1 + 0xc, a2, a3);
    if (cVar3 == '\0') {
        *(u32 *)(a0 + 0x20) = uVar2;
    } else {
        *(u64 *)(a0 + 0x20) = CONCAT44(uVar2, in_fr1);
    }
    uVar1 = CONCAT44(uVar2, in_fr1);
    Vec3_distance_sq(a1, a1 + 0x10, a2, a3);
    uStack_14 = (u32)uVar1;
    uVar2 = (u32)((u64)uVar1 >> 0x20);
    if (cVar3 == '\0') {
        *(u32 *)(a0 + 0x24) = uVar2;
        uStack_14 = uVar2;
    } else {
        *(u64 *)(a0 + 0x24) = uVar1;
    }
    Vec3_distance_sq(a1, a1 + 4, a2, a3);
    uVar2 = (u32)((u64)uVar1 >> 0x20);
    uStack_18 = uVar2;
    if (cVar3 != '\0') {
        uStack_18 = (u32)uVar1;
        uStack_14 = uVar2;
    }
    if (cVar3 == '\0') {
        *(u32 *)(a0 + 0x28) = uStack_18;
    } else {
        *(u64 *)(a0 + 0x28) = CONCAT44(uStack_14, uStack_18);
    }
    return 0;
}

/*
 * Class_129938_m7_0177d0  0x8c0177d0
 */
u32 Class_129938_m7_0177d0(int a0, int *a1, u32 a2, u32 a3) {
    u32 uVar1;

    (**(code **)(*a1 + 0x38))(a1, a0 + 0x30, a2, a3);
    uVar1 = Vec3_assign_copy_wrap(a1, a0 + 0x20);
    return uVar1;
}

/*
 * Class_129938_uses_set_field_0_017804  0x8c017804
 * area name: only called from Class_129938 methods; behaviour name: its main named callee is set_field_0_015ad4
 * called by: Class_129938_ctor, Class_129938_ctor_init
 */
u32 Class_129938_uses_set_field_0_017804(int a0, u32 unused_a1, u32 a2) {

    set_field_0_015ad4(a0 + 0x90, &g_8c12ca68, a2);
    *(u32 *)(a0 + 0x2c) = 1;
    return 1;
}

/*
 * Class_12b930_copy_017830  0x8c017830
 * area name: only called from Class_12b930 methods; behaviour name: mostly calls copy functions
 * called by: Class_12b930_ctor, static_init_vec3s_4368d0
 */
u32 *Class_12b930_copy_017830(u32 *a0) {
    u32 extraout_fr1;
    char cVar1;

    cVar1 = '\0';
    Class_129808_copy_016410(a0 + 4);
    *a0 = 0;
    a0[1] = 0;
    a0[2] = 0;
    a0[3] = 0;
    if (cVar1 == '\0') {
        a0[0x15] = 0;
        a0[0x16] = 0;
        a0[0x17] = 0;
    } else {
        *(u64 *)(a0 + 0x15) = (u64)extraout_fr1;
        *(u64 *)(a0 + 0x16) = (u64)extraout_fr1;
        *(u64 *)(a0 + 0x17) = (u64)extraout_fr1;
    }
    a0[0x1b] = a0[0x15];
    a0[0x1c] = a0[0x16];
    a0[0x1d] = a0[0x17];
    a0[0x18] = a0[0x15];
    a0[0x19] = a0[0x16];
    a0[0x1a] = a0[0x17];
    a0[0x1e] = a0[0x15];
    a0[0x1f] = a0[0x16];
    a0[0x20] = a0[0x17];
    return a0;
}

/*
 * CWaterTank_fill_loop_0178b4  0x8c0178b4
 * area name: only called from CWaterTank methods; behaviour name: a loop that writes memory
 * called by: CWaterTank_CreateStage
 */
int CWaterTank_fill_loop_0178b4(int *a0, int a1, u32 a2) {
    int iVar1;
    u16 *puVar2;

    *a0 = a1;
    for (puVar2 = *(u16 **)(*a0 + 4); (char)*puVar2 != '@'; puVar2 = puVar2 + 1) {
    }
    a0[3] = (int)(short)puVar2[2] & 0x3fff;
    a0[1] = (int)(puVar2 + 3);
    a0[2] = *(int *)*a0;
    iVar1 = a0[2];
    a0[2] = iVar1 + 8;
    return iVar1 + 8;
}

/*
 * Class_129938_vec_017900  0x8c017900
 * area name: sits between Class_129938 functions (same compilation unit); behaviour name: mostly calls vec functions
 * called by: Class_12bb08_vec_0f43bc
 */
u32 Class_129938_vec_017900(int a0, double *a1, float *a2, float *a3) {
    short sVar1;
    short *psVar2;
    int iVar3;
    u64 *puVar4;
    float *pfVar5;
    double *pdVar6;
    float *pfVar7;
    float *ar5_00;
    float *ar7_00;
    short sVar8;
    u32 in_fr1;
    u32 uVar9;
    float fVar10;
    double dVar11;
    u64 uVar12;
    float fVar14;
    float in_fr4;
    u32 in_fr12;
    double in_dr14;
    double dVar15;
    u64 in_xd0;
    bool bVar16;
    bool bVar17;
    char cVar18;
    char cVar19;
    short asStack_1ce[5];
    u32 uStack_1c4;
    u32 uStack_1c0;
    int iStack_1bc;
    int iStack_1b8;
    int iStack_1b4;
    int iStack_1b0;
    int iStack_1ac;
    int iStack_1a8;
    int iStack_1a4;
    int iStack_1a0;
    int iStack_19c;
    int iStack_198;
    int iStack_194;
    int iStack_190;
    int iStack_18c;
    int iStack_188;
    int iStack_184;
    int iStack_180;
    int iStack_17c;
    int iStack_178;
    int iStack_174;
    int iStack_170;
    int iStack_16c;
    int iStack_168;
    int iStack_164;
    int iStack_160;
    int iStack_15c;
    int iStack_158;
    int iStack_154;
    int iStack_150;
    int iStack_14c;
    int iStack_144;
    int iStack_140;
    int iStack_13c;
    int iStack_138;
    int iStack_134;
    int iStack_130;
    int iStack_12c;
    int iStack_128;
    int iStack_124;
    int iStack_120;
    int iStack_11c;
    int iStack_118;
    int iStack_114;
    int iStack_110;
    int iStack_10c;
    int iStack_108;
    int iStack_104;
    int iStack_100;
    int iStack_fc;
    int iStack_f8;
    int iStack_f4;
    int iStack_f0;
    int iStack_ec;
    int iStack_e8;
    int iStack_e4;
    u64 uStack_e0;
    u32 uStack_d8;
    short *psStack_d4;
    u8 auStack_d0[16];
    u8 auStack_c0[16];
    u32 uStack_b0;
    u32 uStack_ac;
    u32 uStack_a8;
    float fStack_a4;
    float fStack_a0;
    float fStack_9c;
    float fStack_98;
    float fStack_94;
    float fStack_90;
    u32 uStack_8c;
    u32 uStack_88;
    u32 uStack_84;
    u32 uStack_80;
    float fStack_7c;
    float fStack_78;
    float fStack_74;
    u32 uStack_70;
    u8 auStack_6c[8];
    u64 uStack_64;
    u8 auStack_5c[16];
    u8 auStack_4c[16];
    u8 auStack_3c[20];
    u32 uVar13;

    cVar19 = '\0';
    cVar18 = '\0';
    psVar2 = *(short **)(a0 + 4);
    psStack_d4 = NULL;
    asStack_1ce[3] = 0;
    sVar1 = 0;
    pdVar6 = a1;
    pfVar7 = a2;
    ar7_00 = a3;
    Vec3_ctor_zero(auStack_3c, a1, a2);
    Vec3_ctor_zero(auStack_6c, pdVar6, pfVar7);
    Vec3_ctor_zero(auStack_5c, pdVar6, pfVar7);
    Vec3_ctor_zero(auStack_4c, pdVar6, pfVar7);
    Vec3_ctor_zero(&fStack_7c, pdVar6, pfVar7);
    Vec3_ctor_zero(&uStack_8c, pdVar6, pfVar7);
    iVar3 = *(int *)(a0 + 8);
    if (cVar19 == '\0') {
        uStack_b0 = *(u32 *)a1;
        uStack_ac = *(u32 *)((int)a1 + 4);
        uStack_a8 = *(u32 *)(a1 + 1);
        dVar11 = (double)CONCAT44(uStack_a8, in_fr1);
    } else {
        uStack_b0 = SUB84(*a1, 0);
        uStack_ac = (u32) * (u64 *)((int)a1 + 4);
        dVar11 = a1[1];
        uStack_a8 = SUB84(dVar11, 0);
        fStack_a4 = (float)((u64)dVar11 >> 0x20);
    }
    asStack_1ce[4] = 0;
    do {
        if (*(int *)(a0 + 0xc) <= (int)asStack_1ce[4]) {
            if (cVar19 == '\0') {
                a2[2] = 0.0;
                uStack_1c4 = 0;
                a2[1] = 0.0;
                *a2 = 0.0;
            } else {
                uStack_1c0 = SUB84(dVar11, 0);
                iStack_1bc = 0;
                *(u64 *)(a2 + 2) = (u64)dVar11 & 0xffffffff;
                uStack_1c4 = uStack_1c0;
                *(u64 *)(a2 + 1) = (u64)dVar11 & 0xffffffff;
                *(u64 *)a2 = (u64)dVar11 & 0xffffffff;
            }
            uStack_1c0 = 0;
            uStack_e0._4_4_ = 0xffffffff;
            Vec3_dtor(&uStack_8c, 0xffffffff, pfVar7, ar7_00);
            Vec3_dtor(&fStack_7c, 0xffffffff, pfVar7, ar7_00);
            Vec3_dtor(auStack_4c, 0xffffffff, pfVar7, ar7_00);
            Vec3_dtor(auStack_5c, 0xffffffff, pfVar7, ar7_00);
            Vec3_dtor(auStack_6c, 0xffffffff, pfVar7, ar7_00);
            Vec3_dtor(auStack_3c, 0xffffffff, pfVar7, ar7_00);
            return uStack_e0._4_4_;
        }
        asStack_1ce[3] = *psVar2;
        bVar16 = asStack_1ce[3] < 0;
        if (bVar16) {
            iStack_e4 = (int)asStack_1ce[3];
            asStack_1ce[3] = -asStack_1ce[3];
        }
        psVar2 = psVar2 + 1;
        psStack_d4 = psVar2;
        while (true) {
            iStack_1bc = libgcc_divide_helper_0101e4((int)psVar2 - (int)psStack_d4, 2);
            uVar9 = SUB84(dVar11, 0);
            if (asStack_1ce[3] <= iStack_1bc)
                break;
            if (psVar2 == psStack_d4) {
                asStack_1ce[0] = *psVar2;
                asStack_1ce[1] = psVar2[1];
                asStack_1ce[2] = psVar2[2];
                psVar2 = psVar2 + 3;
            } else {
                asStack_1ce[0] = asStack_1ce[1];
                asStack_1ce[1] = asStack_1ce[2];
                asStack_1ce[2] = *psVar2;
                psVar2 = psVar2 + 1;
            }
            iStack_e8 = (int)asStack_1ce[2];
            iStack_ec = (int)asStack_1ce[0];
            iStack_f0 = (int)asStack_1ce[1];
            puVar4 = (u64 *)(iStack_ec * 0x18 + iVar3);
            if (cVar19 == '\0') {
                uVar9 = *(u32 *)puVar4;
            } else {
                in_xd0 = *puVar4;
            }
            pdVar6 = (double *)(iStack_f0 * 0x18 + iVar3);
            if (cVar19 == '\0') {
                dVar11 = (double)CONCAT44(*(u32 *)pdVar6, uVar9);
            } else {
                dVar11 = *pdVar6;
            }
            if (cVar18 == '\0') {
                fVar10 = SUB84(dVar11, 0) + (float)((u64)dVar11 >> 0x20);
            } else {
                fVar10 = SUB84(dVar11 + dVar11, 0);
            }
            pdVar6 = (double *)(iStack_e8 * 0x18 + iVar3);
            if (cVar19 == '\0') {
                dVar11 = (double)CONCAT44(*(u32 *)pdVar6, fVar10);
            } else {
                dVar11 = *pdVar6;
            }
            if (cVar18 == '\0') {
                fVar10 = SUB84(dVar11, 0) + (float)((u64)dVar11 >> 0x20);
            } else {
                fVar10 = SUB84(dVar11 + dVar11, 0);
            }
            if (cVar19 == '\0') {
                dVar11 = (double)CONCAT44(0x40400000, fVar10);
            } else {
                dVar11 = 6.45619291662699e-312;
            }
            if (cVar18 == '\0') {
                fVar10 = SUB84(dVar11, 0) / (float)((u64)dVar11 >> 0x20);
            } else {
                fVar10 = SUB84(dVar11 / dVar11, 0);
            }
            fStack_a4 = fVar10;
            if (cVar19 != '\0') {
                fStack_a4 = (float)in_xd0;
            }
            iStack_f4 = (int)asStack_1ce[2];
            iStack_f8 = (int)asStack_1ce[0];
            iStack_fc = (int)asStack_1ce[1];
            pfVar7 = (float *)(iStack_f8 * 0x18 + iVar3 + 4);
            if (cVar19 == '\0') {
                fVar10 = *pfVar7;
            } else {
                in_xd0 = *(u64 *)pfVar7;
            }
            pdVar6 = (double *)(iStack_fc * 0x18 + iVar3 + 4);
            if (cVar19 == '\0') {
                dVar11 = (double)CONCAT44(*(u32 *)pdVar6, fVar10);
            } else {
                dVar11 = *pdVar6;
            }
            if (cVar18 == '\0') {
                fVar10 = SUB84(dVar11, 0) + (float)((u64)dVar11 >> 0x20);
            } else {
                fVar10 = SUB84(dVar11 + dVar11, 0);
            }
            pdVar6 = (double *)(iStack_f4 * 0x18 + iVar3 + 4);
            if (cVar19 == '\0') {
                dVar11 = (double)CONCAT44(*(u32 *)pdVar6, fVar10);
            } else {
                dVar11 = *pdVar6;
            }
            if (cVar18 == '\0') {
                fVar10 = SUB84(dVar11, 0) + (float)((u64)dVar11 >> 0x20);
            } else {
                fVar10 = SUB84(dVar11 + dVar11, 0);
            }
            if (cVar19 == '\0') {
                dVar11 = (double)CONCAT44(0x40400000, fVar10);
            } else {
                dVar11 = 6.45619291662699e-312;
            }
            if (cVar18 == '\0') {
                fVar10 = SUB84(dVar11, 0) / (float)((u64)dVar11 >> 0x20);
            } else {
                fVar10 = SUB84(dVar11 / dVar11, 0);
            }
            fStack_a0 = fVar10;
            if (cVar19 != '\0') {
                fStack_a0 = (float)in_xd0;
            }
            iStack_100 = (int)asStack_1ce[2];
            iStack_104 = (int)asStack_1ce[0];
            iStack_108 = (int)asStack_1ce[1];
            pfVar7 = (float *)(iStack_104 * 0x18 + iVar3 + 8);
            if (cVar19 == '\0') {
                fVar10 = *pfVar7;
            } else {
                in_xd0 = *(u64 *)pfVar7;
            }
            pdVar6 = (double *)(iStack_108 * 0x18 + iVar3 + 8);
            if (cVar19 == '\0') {
                dVar11 = (double)CONCAT44(*(u32 *)pdVar6, fVar10);
            } else {
                dVar11 = *pdVar6;
            }
            if (cVar18 == '\0') {
                fVar10 = SUB84(dVar11, 0) + (float)((u64)dVar11 >> 0x20);
            } else {
                fVar10 = SUB84(dVar11 + dVar11, 0);
            }
            pdVar6 = (double *)(iStack_100 * 0x18 + iVar3 + 8);
            if (cVar19 == '\0') {
                dVar11 = (double)CONCAT44(*(u32 *)pdVar6, fVar10);
            } else {
                dVar11 = *pdVar6;
            }
            if (cVar18 == '\0') {
                fVar10 = SUB84(dVar11, 0) + (float)((u64)dVar11 >> 0x20);
            } else {
                fVar10 = SUB84(dVar11 + dVar11, 0);
            }
            if (cVar19 == '\0') {
                dVar11 = (double)CONCAT44(0x40400000, fVar10);
            } else {
                dVar11 = 6.45619291662699e-312;
            }
            if (cVar18 == '\0') {
                fVar10 = SUB84(dVar11, 0) / (float)((u64)dVar11 >> 0x20);
            } else {
                fVar10 = SUB84(dVar11 / dVar11, 0);
            }
            fStack_9c = fVar10;
            if (cVar19 != '\0') {
                fStack_9c = (float)in_xd0;
            }
            iStack_10c = (int)asStack_1ce[2];
            iStack_110 = (int)asStack_1ce[0];
            iStack_114 = (int)asStack_1ce[1];
            pfVar7 = (float *)(iStack_110 * 0x18 + iVar3 + 0xc);
            if (cVar19 == '\0') {
                fVar10 = *pfVar7;
            } else {
                in_xd0 = *(u64 *)pfVar7;
            }
            pdVar6 = (double *)(iStack_114 * 0x18 + iVar3 + 0xc);
            if (cVar19 == '\0') {
                dVar11 = (double)CONCAT44(*(u32 *)pdVar6, fVar10);
            } else {
                dVar11 = *pdVar6;
            }
            if (cVar18 == '\0') {
                fVar10 = SUB84(dVar11, 0) + (float)((u64)dVar11 >> 0x20);
            } else {
                fVar10 = SUB84(dVar11 + dVar11, 0);
            }
            pdVar6 = (double *)(iStack_10c * 0x18 + iVar3 + 0xc);
            if (cVar19 == '\0') {
                dVar11 = (double)CONCAT44(*(u32 *)pdVar6, fVar10);
            } else {
                dVar11 = *pdVar6;
            }
            if (cVar18 == '\0') {
                fVar10 = SUB84(dVar11, 0) + (float)((u64)dVar11 >> 0x20);
            } else {
                fVar10 = SUB84(dVar11 + dVar11, 0);
            }
            if (cVar19 == '\0') {
                dVar11 = (double)CONCAT44(0x40400000, fVar10);
            } else {
                dVar11 = 6.45619291662699e-312;
            }
            if (cVar18 == '\0') {
                fVar10 = SUB84(dVar11, 0) / (float)((u64)dVar11 >> 0x20);
            } else {
                fVar10 = SUB84(dVar11 / dVar11, 0);
            }
            fStack_98 = fVar10;
            if (cVar19 != '\0') {
                fStack_98 = (float)in_xd0;
            }
            iStack_118 = (int)asStack_1ce[2];
            iStack_11c = (int)asStack_1ce[0];
            iStack_120 = (int)asStack_1ce[1];
            pfVar7 = (float *)(iStack_11c * 0x18 + iVar3 + 0x10);
            if (cVar19 == '\0') {
                fVar10 = *pfVar7;
            } else {
                in_xd0 = *(u64 *)pfVar7;
            }
            pdVar6 = (double *)(iStack_120 * 0x18 + iVar3 + 0x10);
            if (cVar19 == '\0') {
                dVar11 = (double)CONCAT44(*(u32 *)pdVar6, fVar10);
            } else {
                dVar11 = *pdVar6;
            }
            if (cVar18 == '\0') {
                fVar10 = SUB84(dVar11, 0) + (float)((u64)dVar11 >> 0x20);
            } else {
                fVar10 = SUB84(dVar11 + dVar11, 0);
            }
            pdVar6 = (double *)(iStack_118 * 0x18 + iVar3 + 0x10);
            if (cVar19 == '\0') {
                dVar11 = (double)CONCAT44(*(u32 *)pdVar6, fVar10);
            } else {
                dVar11 = *pdVar6;
            }
            if (cVar18 == '\0') {
                fVar10 = SUB84(dVar11, 0) + (float)((u64)dVar11 >> 0x20);
            } else {
                fVar10 = SUB84(dVar11 + dVar11, 0);
            }
            if (cVar19 == '\0') {
                dVar11 = (double)CONCAT44(0x40400000, fVar10);
            } else {
                dVar11 = 6.45619291662699e-312;
            }
            if (cVar18 == '\0') {
                fVar10 = SUB84(dVar11, 0) / (float)((u64)dVar11 >> 0x20);
            } else {
                fVar10 = SUB84(dVar11 / dVar11, 0);
            }
            fStack_94 = fVar10;
            if (cVar19 != '\0') {
                fStack_94 = (float)in_xd0;
            }
            iStack_124 = (int)asStack_1ce[2];
            iStack_128 = (int)asStack_1ce[0];
            iStack_12c = (int)asStack_1ce[1];
            pfVar7 = (float *)(iStack_128 * 0x18 + iVar3 + 0x14);
            if (cVar19 == '\0') {
                fVar10 = *pfVar7;
            } else {
                in_xd0 = *(u64 *)pfVar7;
            }
            pdVar6 = (double *)(iStack_12c * 0x18 + iVar3 + 0x14);
            if (cVar19 == '\0') {
                dVar11 = (double)CONCAT44(*(u32 *)pdVar6, fVar10);
            } else {
                dVar11 = *pdVar6;
            }
            if (cVar18 == '\0') {
                fVar10 = SUB84(dVar11, 0) + (float)((u64)dVar11 >> 0x20);
            } else {
                fVar10 = SUB84(dVar11 + dVar11, 0);
            }
            pdVar6 = (double *)(iStack_124 * 0x18 + iVar3 + 0x14);
            if (cVar19 == '\0') {
                dVar11 = (double)CONCAT44(*(u32 *)pdVar6, fVar10);
            } else {
                dVar11 = *pdVar6;
            }
            if (cVar18 == '\0') {
                fVar10 = SUB84(dVar11, 0) + (float)((u64)dVar11 >> 0x20);
            } else {
                fVar10 = SUB84(dVar11 + dVar11, 0);
            }
            if (cVar19 == '\0') {
                dVar11 = (double)CONCAT44(0x40400000, fVar10);
            } else {
                dVar11 = 6.45619291662699e-312;
            }
            if (cVar18 == '\0') {
                fVar10 = (float)((u64)dVar11 >> 0x20);
                dVar11 = (double)CONCAT44(fVar10, SUB84(dVar11, 0) / fVar10);
            } else {
                dVar11 = dVar11 / dVar11;
            }
            if (cVar19 == '\0') {
                fStack_90 = SUB84(dVar11, 0);
            } else {
                fStack_90 = (float)in_xd0;
                uStack_8c = (u32)((u64)in_xd0 >> 0x20);
            }
            pfVar7 = NULL;
            ar5_00 = &fStack_a4;
            line_closest_point(&uStack_b0, ar5_00, 0);
            fVar10 = (float)((u64)dVar11 >> 0x20);
            dVar15 = dVar11;
            if (cVar19 == '\0') {
                uStack_e0 = (double)CONCAT44(uStack_e0._4_4_, fVar10);
                dVar15 = uStack_e0;
            }
            uStack_e0 = dVar15;
            if (cVar18 == '\0') {
                bVar17 = in_fr4 < fVar10;
            } else {
                bVar17 = (double)CONCAT44(in_fr12, in_fr4) < dVar11;
            }
            if (!bVar17) {
                sVar8 = 0;
                while (true) {
                    uVar9 = SUB84(in_dr14, 0);
                    fVar10 = SUB84(dVar11, 0);
                    if (2 < sVar8)
                        break;
                    if (sVar8 == 0) {
                        iStack_130 = (int)asStack_1ce[1];
                        iStack_134 = (int)asStack_1ce[0];
                        pfVar5 = (float *)(iStack_130 * 0x18 + iVar3);
                        if (cVar19 == '\0') {
                            fVar10 = *pfVar5;
                        } else {
                            in_xd0 = *(u64 *)pfVar5;
                        }
                        pdVar6 = (double *)(iStack_134 * 0x18 + iVar3);
                        if (cVar19 == '\0') {
                            dVar11 = (double)CONCAT44(*(u32 *)pdVar6, fVar10);
                        } else {
                            dVar11 = *pdVar6;
                        }
                        if (cVar18 == '\0') {
                            fVar10 = SUB84(dVar11, 0) - (float)((u64)dVar11 >> 0x20);
                        } else {
                            fVar10 = SUB84(dVar11 - dVar11, 0);
                        }
                        fStack_7c = fVar10;
                        if (cVar19 != '\0') {
                            fStack_7c = (float)in_xd0;
                        }
                        iStack_138 = (int)asStack_1ce[1];
                        iStack_13c = (int)asStack_1ce[0];
                        pfVar5 = (float *)(iStack_138 * 0x18 + iVar3 + 4);
                        if (cVar19 == '\0') {
                            fVar10 = *pfVar5;
                        } else {
                            in_xd0 = *(u64 *)pfVar5;
                        }
                        pdVar6 = (double *)(iStack_13c * 0x18 + iVar3 + 4);
                        if (cVar19 == '\0') {
                            dVar11 = (double)CONCAT44(*(u32 *)pdVar6, fVar10);
                        } else {
                            dVar11 = *pdVar6;
                        }
                        if (cVar18 == '\0') {
                            fVar10 = SUB84(dVar11, 0) - (float)((u64)dVar11 >> 0x20);
                        } else {
                            fVar10 = SUB84(dVar11 - dVar11, 0);
                        }
                        fStack_78 = fVar10;
                        if (cVar19 != '\0') {
                            fStack_78 = (float)in_xd0;
                        }
                        iStack_140 = (int)asStack_1ce[1];
                        iStack_144 = (int)asStack_1ce[0];
                        pfVar5 = (float *)(iStack_140 * 0x18 + iVar3 + 8);
                        if (cVar19 == '\0') {
                            fVar10 = *pfVar5;
                        } else {
                            in_xd0 = *(u64 *)pfVar5;
                        }
                        pdVar6 = (double *)(iStack_144 * 0x18 + iVar3 + 8);
                        if (cVar19 == '\0') {
                            dVar11 = (double)CONCAT44(*(u32 *)pdVar6, fVar10);
                        } else {
                            dVar11 = *pdVar6;
                        }
                        if (cVar18 == '\0') {
                            fVar10 = SUB84(dVar11, 0) - (float)((u64)dVar11 >> 0x20);
                        } else {
                            fVar10 = SUB84(dVar11 - dVar11, 0);
                        }
                        fStack_74 = fVar10;
                        if (cVar19 != '\0') {
                            fStack_74 = (float)in_xd0;
                            uStack_70 = (u32)((u64)in_xd0 >> 0x20);
                        }
                    } else if (sVar8 == 1) {
                        ar5_00 = (float *)(int)asStack_1ce[2];
                        iStack_14c = (int)asStack_1ce[1];
                        pfVar5 = (float *)((int)ar5_00 * 0x18 + iVar3);
                        if (cVar19 == '\0') {
                            fVar10 = *pfVar5;
                        } else {
                            in_xd0 = *(u64 *)pfVar5;
                        }
                        pdVar6 = (double *)(iStack_14c * 0x18 + iVar3);
                        if (cVar19 == '\0') {
                            dVar11 = (double)CONCAT44(*(u32 *)pdVar6, fVar10);
                        } else {
                            dVar11 = *pdVar6;
                        }
                        if (cVar18 == '\0') {
                            fVar10 = SUB84(dVar11, 0) - (float)((u64)dVar11 >> 0x20);
                        } else {
                            fVar10 = SUB84(dVar11 - dVar11, 0);
                        }
                        fStack_7c = fVar10;
                        if (cVar19 != '\0') {
                            fStack_7c = (float)in_xd0;
                        }
                        iStack_150 = (int)asStack_1ce[2];
                        iStack_154 = (int)asStack_1ce[1];
                        pfVar5 = (float *)(iStack_150 * 0x18 + iVar3 + 4);
                        if (cVar19 == '\0') {
                            fVar10 = *pfVar5;
                        } else {
                            in_xd0 = *(u64 *)pfVar5;
                        }
                        pdVar6 = (double *)(iStack_154 * 0x18 + iVar3 + 4);
                        if (cVar19 == '\0') {
                            dVar11 = (double)CONCAT44(*(u32 *)pdVar6, fVar10);
                        } else {
                            dVar11 = *pdVar6;
                        }
                        if (cVar18 == '\0') {
                            fVar10 = SUB84(dVar11, 0) - (float)((u64)dVar11 >> 0x20);
                        } else {
                            fVar10 = SUB84(dVar11 - dVar11, 0);
                        }
                        fStack_78 = fVar10;
                        if (cVar19 != '\0') {
                            fStack_78 = (float)in_xd0;
                        }
                        iStack_158 = (int)asStack_1ce[2];
                        iStack_15c = (int)asStack_1ce[1];
                        pfVar5 = (float *)(iStack_158 * 0x18 + iVar3 + 8);
                        if (cVar19 == '\0') {
                            fVar10 = *pfVar5;
                        } else {
                            in_xd0 = *(u64 *)pfVar5;
                        }
                        pdVar6 = (double *)(iStack_15c * 0x18 + iVar3 + 8);
                        if (cVar19 == '\0') {
                            dVar11 = (double)CONCAT44(*(u32 *)pdVar6, fVar10);
                        } else {
                            dVar11 = *pdVar6;
                        }
                        if (cVar18 == '\0') {
                            fVar10 = SUB84(dVar11, 0) - (float)((u64)dVar11 >> 0x20);
                        } else {
                            fVar10 = SUB84(dVar11 - dVar11, 0);
                        }
                        fStack_74 = fVar10;
                        if (cVar19 != '\0') {
                            fStack_74 = (float)in_xd0;
                            uStack_70 = (u32)((u64)in_xd0 >> 0x20);
                        }
                    } else if (sVar8 == 2) {
                        iStack_160 = (int)asStack_1ce[0];
                        iStack_164 = (int)asStack_1ce[2];
                        pfVar5 = (float *)(iStack_160 * 0x18 + iVar3);
                        if (cVar19 == '\0') {
                            fVar10 = *pfVar5;
                        } else {
                            in_xd0 = *(u64 *)pfVar5;
                        }
                        pdVar6 = (double *)(iStack_164 * 0x18 + iVar3);
                        if (cVar19 == '\0') {
                            dVar11 = (double)CONCAT44(*(u32 *)pdVar6, fVar10);
                        } else {
                            dVar11 = *pdVar6;
                        }
                        if (cVar18 == '\0') {
                            fVar10 = SUB84(dVar11, 0) - (float)((u64)dVar11 >> 0x20);
                        } else {
                            fVar10 = SUB84(dVar11 - dVar11, 0);
                        }
                        fStack_7c = fVar10;
                        if (cVar19 != '\0') {
                            fStack_7c = (float)in_xd0;
                        }
                        iStack_168 = (int)asStack_1ce[0];
                        iStack_16c = (int)asStack_1ce[2];
                        pfVar5 = (float *)(iStack_168 * 0x18 + iVar3 + 4);
                        if (cVar19 == '\0') {
                            fVar10 = *pfVar5;
                        } else {
                            in_xd0 = *(u64 *)pfVar5;
                        }
                        pdVar6 = (double *)(iStack_16c * 0x18 + iVar3 + 4);
                        if (cVar19 == '\0') {
                            dVar11 = (double)CONCAT44(*(u32 *)pdVar6, fVar10);
                        } else {
                            dVar11 = *pdVar6;
                        }
                        if (cVar18 == '\0') {
                            fVar10 = SUB84(dVar11, 0) - (float)((u64)dVar11 >> 0x20);
                        } else {
                            fVar10 = SUB84(dVar11 - dVar11, 0);
                        }
                        fStack_78 = fVar10;
                        if (cVar19 != '\0') {
                            fStack_78 = (float)in_xd0;
                        }
                        iStack_170 = (int)asStack_1ce[0];
                        iStack_174 = (int)asStack_1ce[2];
                        pfVar5 = (float *)(iStack_170 * 0x18 + iVar3 + 8);
                        if (cVar19 == '\0') {
                            fVar10 = *pfVar5;
                        } else {
                            in_xd0 = *(u64 *)pfVar5;
                        }
                        pdVar6 = (double *)(iStack_174 * 0x18 + iVar3 + 8);
                        if (cVar19 == '\0') {
                            dVar11 = (double)CONCAT44(*(u32 *)pdVar6, fVar10);
                        } else {
                            dVar11 = *pdVar6;
                        }
                        if (cVar18 == '\0') {
                            fVar10 = SUB84(dVar11, 0) - (float)((u64)dVar11 >> 0x20);
                        } else {
                            fVar10 = SUB84(dVar11 - dVar11, 0);
                        }
                        fStack_74 = fVar10;
                        if (cVar19 != '\0') {
                            fStack_74 = (float)in_xd0;
                            uStack_70 = (u32)((u64)in_xd0 >> 0x20);
                        }
                    }
                    Vec3_length(&fStack_7c, ar5_00, pfVar7, ar7_00);
                    iStack_178 = (int)sVar8;
                    iStack_180 = (int)sVar8;
                    iStack_17c = (int)asStack_1ce[sVar8];
                    puVar4 = (u64 *)(asStack_1ce[sVar8] * 0x18 + iVar3 + 0xc);
                    if (cVar19 == '\0') {
                        uVar13 = *(u32 *)puVar4;
                        uVar12 = CONCAT44(uVar13, fVar10);
                        *(u32 *)(auStack_6c + sVar8 * 0x10) = uVar13;
                    } else {
                        uVar12 = *puVar4;
                        *(u64 *)(auStack_6c + sVar8 * 0x10) = uVar12;
                    }
                    iStack_184 = (int)sVar8;
                    iStack_18c = (int)sVar8;
                    iStack_188 = (int)asStack_1ce[sVar8];
                    puVar4 = (u64 *)(asStack_1ce[sVar8] * 0x18 + iVar3 + 0x10);
                    if (cVar19 == '\0') {
                        uVar13 = *(u32 *)puVar4;
                        uVar12 = CONCAT44(uVar13, (int)uVar12);
                        *(u32 *)(auStack_6c + sVar8 * 0x10 + 4) = uVar13;
                    } else {
                        uVar12 = *puVar4;
                        *(u64 *)(auStack_6c + sVar8 * 0x10 + 4) = uVar12;
                    }
                    iStack_190 = (int)sVar8;
                    iStack_198 = (int)sVar8;
                    iStack_194 = (int)asStack_1ce[sVar8];
                    puVar4 = (u64 *)(iStack_194 * 0x18 + iVar3 + 0x14);
                    if (cVar19 == '\0') {
                        uVar13 = *(u32 *)puVar4;
                        uVar12 = CONCAT44(uVar13, (int)uVar12);
                        *(u32 *)(&uStack_64 + sVar8 * 2) = uVar13;
                    } else {
                        uVar12 = *puVar4;
                        (&uStack_64)[sVar8 * 2] = uVar12;
                    }
                    uVar13 = (u32)uVar12;
                    if (bVar16) {
                        iStack_1a0 = (int)sVar8;
                        Vec3_ctor_xyz_wrap(auStack_6c + iStack_1a0 * 0x10, &fStack_7c, pfVar7, ar7_00, auStack_d0);
                        Vec3_assign(&uStack_8c, auStack_d0, pfVar7, ar7_00);
                        pfVar7 = (float *)0xffffffff;
                        ar5_00 = (float *)0xffffffff;
                        Vec3_dtor(auStack_d0, 0xffffffff, 0xffffffff, ar7_00);
                    } else {
                        iStack_19c = (int)sVar8;
                        Vec3_ctor_xyz_wrap(&fStack_7c, auStack_6c + iStack_19c * 0x10, pfVar7, ar7_00, auStack_c0);
                        Vec3_assign(&uStack_8c, auStack_c0, pfVar7, ar7_00);
                        ar5_00 = (float *)0xffffffff;
                        Vec3_dtor(auStack_c0, 0xffffffff, pfVar7, ar7_00);
                    }
                    iStack_1a8 = (int)sVar8;
                    iStack_1a4 = (int)asStack_1ce[sVar8];
                    iStack_1b0 = (int)sVar8;
                    iStack_1ac = (int)asStack_1ce[sVar8];
                    iStack_1b8 = (int)sVar8;
                    iStack_1b4 = (int)asStack_1ce[sVar8];
                    pdVar6 = (double *)(asStack_1ce[sVar8] * 0x18 + iVar3);
                    if (cVar19 == '\0') {
                        dVar15 = (double)CONCAT44(*(u32 *)pdVar6, uVar9);
                        dVar11 = (double)CONCAT44(uStack_8c, uVar13);
                    } else {
                        dVar15 = *pdVar6;
                        dVar11 = (double)CONCAT44(uStack_88, uStack_8c);
                    }
                    if (cVar18 == '\0') {
                        dVar15 = (double)CONCAT44((float)((u64)dVar15 >> 0x20) * (float)((u64)dVar11 >> 0x20),
                                                  SUB84(dVar15, 0));
                    } else {
                        dVar15 = dVar15 * dVar11;
                    }
                    puVar4 = (u64 *)(iStack_1b4 * 0x18 + iVar3 + 4);
                    if (cVar19 == '\0') {
                        dVar11 = (double)CONCAT44(uStack_88, *(u32 *)puVar4);
                    } else {
                        in_xd0 = *puVar4;
                        dVar11 = (double)CONCAT44(uStack_84, uStack_88);
                    }
                    if (cVar18 == '\0') {
                        dVar15 = (double)CONCAT44((float)((u64)dVar15 >> 0x20) +
                                                      SUB84(dVar11, 0) * (float)((u64)dVar11 >> 0x20),
                                                  SUB84(dVar15, 0));
                    } else {
                        dVar15 = dVar15 + dVar11 * dVar11;
                    }
                    puVar4 = (u64 *)(asStack_1ce[sVar8] * 0x18 + iVar3 + 8);
                    if (cVar19 == '\0') {
                        dVar11 = (double)CONCAT44(uStack_84, *(u32 *)puVar4);
                    } else {
                        in_xd0 = *puVar4;
                        dVar11 = (double)CONCAT44(uStack_80, uStack_84);
                    }
                    if (cVar18 == '\0') {
                        fVar10 = SUB84(dVar11, 0) * (float)((u64)dVar11 >> 0x20);
                        dVar15 = (double)CONCAT44((float)((u64)dVar15 >> 0x20) + fVar10, SUB84(dVar15, 0));
                    } else {
                        fVar10 = SUB84(dVar11 * dVar11, 0);
                        dVar15 = dVar15 + dVar11 * dVar11;
                    }
                    if (cVar19 == '\0') {
                        dVar15 = (double)CONCAT44((int)((u64)dVar15 >> 0x20), uStack_8c);
                        dVar11 = (double)CONCAT44(*(u32 *)a1, fVar10);
                    } else {
                        dVar11 = *a1;
                    }
                    if (cVar18 == '\0') {
                        dVar15 = (double)CONCAT44((int)((u64)dVar15 >> 0x20),
                                                  SUB84(dVar15, 0) * (float)((u64)dVar11 >> 0x20));
                    } else {
                        dVar15 = dVar15 * dVar11;
                    }
                    if (cVar19 == '\0') {
                        dVar11 = (double)CONCAT44(*(u32 *)((int)a1 + 4), uStack_88);
                    } else {
                        in_xd0 = CONCAT44(uStack_84, uStack_88);
                        dVar11 = *(double *)((int)a1 + 4);
                    }
                    if (cVar18 == '\0') {
                        dVar15 = (double)CONCAT44((int)((u64)dVar15 >> 0x20),
                                                  SUB84(dVar15, 0) + SUB84(dVar11, 0) * (float)((u64)dVar11 >> 0x20));
                    } else {
                        dVar15 = dVar15 + dVar11 * dVar11;
                    }
                    if (cVar19 == '\0') {
                        dVar11 = (double)CONCAT44(*(u32 *)(a1 + 1), uStack_84);
                    } else {
                        in_xd0 = CONCAT44(uStack_80, uStack_84);
                        dVar11 = a1[1];
                    }
                    if (cVar18 == '\0') {
                        fVar14 = (float)((u64)dVar11 >> 0x20);
                        fVar10 = SUB84(dVar11, 0) * fVar14;
                        dVar11 = (double)CONCAT44(fVar14, fVar10);
                        fVar14 = (float)((u64)dVar15 >> 0x20);
                        in_dr14 = (double)CONCAT44(fVar14, (SUB84(dVar15, 0) + fVar10) - fVar14);
                    } else {
                        dVar11 = dVar11 * dVar11;
                        in_dr14 = (dVar15 + dVar11) - (dVar15 + dVar11);
                    }
                    dVar11 = (double)((u64)dVar11 & 0xffffffff);
                    if (cVar18 == '\0') {
                        bVar17 = 0.0 < SUB84(in_dr14, 0);
                    } else {
                        bVar17 = dVar11 < in_dr14;
                    }
                    if (bVar17) {
                        sVar1 = 0;
                        break;
                    }
                    sVar1 = sVar1 + 1;
                    if (sVar1 == 3) {
                        if (cVar19 == '\0') {
                            *a2 = fStack_98;
                            a2[1] = fStack_94;
                            a2[2] = fStack_90;
                            *a3 = fStack_a4;
                            a3[1] = fStack_a0;
                            a3[2] = fStack_9c;
                        } else {
                            *(u64 *)a2 = CONCAT44(fStack_94, fStack_98);
                            *(u64 *)(a2 + 1) = CONCAT44(fStack_90, fStack_94);
                            *(u64 *)(a2 + 2) = CONCAT44(uStack_8c, fStack_90);
                            *(u64 *)a3 = CONCAT44(fStack_a0, fStack_a4);
                            *(u64 *)(a3 + 1) = CONCAT44(fStack_9c, fStack_a0);
                            *(u64 *)(a3 + 2) = CONCAT44(fStack_98, fStack_9c);
                        }
                        uStack_d8 = 1;
                        Vec3_dtor(&uStack_8c, 0xffffffff, pfVar7, ar7_00);
                        Vec3_dtor(&fStack_7c, 0xffffffff, pfVar7, ar7_00);
                        Vec3_dtor(auStack_4c, 0xffffffff, pfVar7, ar7_00);
                        Vec3_dtor(auStack_5c, 0xffffffff, pfVar7, ar7_00);
                        Vec3_dtor(auStack_6c, 0xffffffff, pfVar7, ar7_00);
                        Vec3_dtor(auStack_3c, 0xffffffff, pfVar7, ar7_00);
                        return uStack_d8;
                    }
                    sVar8 = sVar8 + 1;
                }
                bVar16 = (bool)(bVar16 ^ 1);
            }
        }
        asStack_1ce[4] = asStack_1ce[4] + 1;
    } while (true);
}

/*
 * game_vec_0185a4  0x8c0185a4
 * area name: game code; nothing names its area yet; behaviour name: mostly calls vec functions
 * called by: game_vec_0e0988
 */
u32 game_vec_0185a4(int a0, double *a1, float *a2, float *a3) {
    u64 uVar1;
    short sVar2;
    short *psVar3;
    u64 *puVar4;
    double *pdVar5;
    float *pfVar6;
    float *pfVar7;
    int iVar8;
    float *ar5_00;
    float *ar7_00;
    short sVar9;
    u32 in_fr1;
    u32 uVar10;
    float fVar11;
    double dVar12;
    float fVar13;
    float in_fr4;
    u32 in_fr12;
    double in_dr14;
    double dVar14;
    u64 in_xd0;
    bool bVar15;
    bool bVar16;
    char cVar17;
    char cVar18;
    short asStack_16a[5];
    u32 uStack_160;
    u32 uStack_15c;
    int iStack_158;
    int iStack_154;
    int iStack_150;
    int iStack_14c;
    int iStack_148;
    int iStack_144;
    int iStack_140;
    int iStack_13c;
    int iStack_138;
    int iStack_134;
    int iStack_130;
    int iStack_12c;
    int iStack_128;
    int iStack_124;
    int iStack_120;
    int iStack_11c;
    int iStack_118;
    int iStack_114;
    int iStack_110;
    int iStack_10c;
    int iStack_108;
    int iStack_104;
    int iStack_100;
    int iStack_fc;
    int iStack_f8;
    int iStack_f4;
    int iStack_f0;
    int iStack_ec;
    int iStack_e8;
    int iStack_e4;
    int iStack_e0;
    int iStack_dc;
    int iStack_d8;
    int iStack_d4;
    int iStack_d0;
    int iStack_cc;
    int iStack_c8;
    int iStack_c4;
    u64 uStack_c0;
    u32 uStack_b8;
    short *psStack_b4;
    u8 auStack_b0[16];
    u8 auStack_a0[16];
    u32 uStack_90;
    u32 uStack_8c;
    u32 uStack_88;
    float fStack_84;
    float fStack_80;
    float fStack_7c;
    float fStack_78;
    float fStack_74;
    float fStack_70;
    u32 uStack_6c;
    u32 uStack_68;
    u32 uStack_64;
    u32 uStack_60;
    u64 uStack_5c;
    u64 uStack_54;
    u8 auStack_4c[16];
    u8 auStack_3c[20];

    cVar18 = '\0';
    cVar17 = '\0';
    psVar3 = *(short **)(a0 + 4);
    psStack_b4 = NULL;
    asStack_16a[3] = 0;
    sVar2 = 0;
    pdVar5 = a1;
    pfVar6 = a2;
    ar7_00 = a3;
    Vec3_ctor_zero(auStack_3c, a1, a2);
    Vec3_ctor_xyz(auStack_4c, pdVar5, pfVar6, ar7_00);
    Vec3_ctor_zero(&uStack_5c, pdVar5, pfVar6);
    Vec3_ctor_zero(&uStack_6c, pdVar5, pfVar6);
    iVar8 = *(int *)(a0 + 8);
    if (cVar18 == '\0') {
        uStack_90 = *(u32 *)a1;
        uStack_8c = *(u32 *)((int)a1 + 4);
        uStack_88 = *(u32 *)(a1 + 1);
        dVar12 = (double)CONCAT44(uStack_88, in_fr1);
    } else {
        uStack_90 = SUB84(*a1, 0);
        uStack_8c = (u32) * (u64 *)((int)a1 + 4);
        dVar12 = a1[1];
        uStack_88 = SUB84(dVar12, 0);
        fStack_84 = (float)((u64)dVar12 >> 0x20);
    }
    asStack_16a[4] = 0;
    do {
        if (*(int *)(a0 + 0xc) <= (int)asStack_16a[4]) {
            if (cVar18 == '\0') {
                a2[2] = 0.0;
                uStack_160 = 0;
                a2[1] = 0.0;
                *a2 = 0.0;
            } else {
                uStack_15c = SUB84(dVar12, 0);
                iStack_158 = 0;
                *(u64 *)(a2 + 2) = (u64)dVar12 & 0xffffffff;
                uStack_160 = uStack_15c;
                *(u64 *)(a2 + 1) = (u64)dVar12 & 0xffffffff;
                *(u64 *)a2 = (u64)dVar12 & 0xffffffff;
            }
            uStack_15c = 0;
            uStack_c0._4_4_ = 0xffffffff;
            Vec3_dtor(&uStack_6c, 0xffffffff, pfVar6, ar7_00);
            Vec3_dtor(&uStack_5c, 0xffffffff, pfVar6, ar7_00);
            Vec3_dtor(auStack_4c, 0xffffffff, pfVar6, ar7_00);
            Vec3_dtor(auStack_3c, 0xffffffff, pfVar6, ar7_00);
            return uStack_c0._4_4_;
        }
        asStack_16a[3] = *psVar3;
        bVar15 = asStack_16a[3] < 0;
        if (bVar15) {
            iStack_c4 = (int)asStack_16a[3];
            asStack_16a[3] = -asStack_16a[3];
        }
        psVar3 = psVar3 + 1;
        psStack_b4 = psVar3;
        while (true) {
            iStack_158 = libgcc_divide_helper_0101e4((int)psVar3 - (int)psStack_b4, 2);
            uVar10 = SUB84(dVar12, 0);
            if (asStack_16a[3] <= iStack_158)
                break;
            if (psVar3 == psStack_b4) {
                asStack_16a[0] = *psVar3;
                asStack_16a[1] = psVar3[1];
                asStack_16a[2] = psVar3[2];
                psVar3 = psVar3 + 3;
            } else {
                asStack_16a[0] = asStack_16a[1];
                asStack_16a[1] = asStack_16a[2];
                asStack_16a[2] = *psVar3;
                psVar3 = psVar3 + 1;
            }
            iStack_c8 = (int)asStack_16a[2];
            iStack_cc = (int)asStack_16a[0];
            iStack_d0 = (int)asStack_16a[1];
            puVar4 = (u64 *)(iStack_cc * 0x18 + iVar8);
            if (cVar18 == '\0') {
                uVar10 = *(u32 *)puVar4;
            } else {
                in_xd0 = *puVar4;
            }
            pdVar5 = (double *)(iStack_d0 * 0x18 + iVar8);
            if (cVar18 == '\0') {
                dVar12 = (double)CONCAT44(*(u32 *)pdVar5, uVar10);
            } else {
                dVar12 = *pdVar5;
            }
            if (cVar17 == '\0') {
                fVar11 = SUB84(dVar12, 0) + (float)((u64)dVar12 >> 0x20);
            } else {
                fVar11 = SUB84(dVar12 + dVar12, 0);
            }
            pdVar5 = (double *)(iStack_c8 * 0x18 + iVar8);
            if (cVar18 == '\0') {
                dVar12 = (double)CONCAT44(*(u32 *)pdVar5, fVar11);
            } else {
                dVar12 = *pdVar5;
            }
            if (cVar17 == '\0') {
                fVar11 = SUB84(dVar12, 0) + (float)((u64)dVar12 >> 0x20);
            } else {
                fVar11 = SUB84(dVar12 + dVar12, 0);
            }
            if (cVar18 == '\0') {
                dVar12 = (double)CONCAT44(0x40400000, fVar11);
            } else {
                dVar12 = 5.0132357787706e-312;
            }
            if (cVar17 == '\0') {
                fVar11 = SUB84(dVar12, 0) / (float)((u64)dVar12 >> 0x20);
            } else {
                fVar11 = SUB84(dVar12 / dVar12, 0);
            }
            fStack_84 = fVar11;
            if (cVar18 != '\0') {
                fStack_84 = (float)in_xd0;
            }
            iStack_d4 = (int)asStack_16a[2];
            iStack_d8 = (int)asStack_16a[0];
            iStack_dc = (int)asStack_16a[1];
            pfVar6 = (float *)(iStack_d8 * 0x18 + iVar8 + 4);
            if (cVar18 == '\0') {
                fVar11 = *pfVar6;
            } else {
                in_xd0 = *(u64 *)pfVar6;
            }
            pdVar5 = (double *)(iStack_dc * 0x18 + iVar8 + 4);
            if (cVar18 == '\0') {
                dVar12 = (double)CONCAT44(*(u32 *)pdVar5, fVar11);
            } else {
                dVar12 = *pdVar5;
            }
            if (cVar17 == '\0') {
                fVar11 = SUB84(dVar12, 0) + (float)((u64)dVar12 >> 0x20);
            } else {
                fVar11 = SUB84(dVar12 + dVar12, 0);
            }
            pdVar5 = (double *)(iStack_d4 * 0x18 + iVar8 + 4);
            if (cVar18 == '\0') {
                dVar12 = (double)CONCAT44(*(u32 *)pdVar5, fVar11);
            } else {
                dVar12 = *pdVar5;
            }
            if (cVar17 == '\0') {
                fVar11 = SUB84(dVar12, 0) + (float)((u64)dVar12 >> 0x20);
            } else {
                fVar11 = SUB84(dVar12 + dVar12, 0);
            }
            if (cVar18 == '\0') {
                dVar12 = (double)CONCAT44(0x40400000, fVar11);
            } else {
                dVar12 = 5.0132357787706e-312;
            }
            if (cVar17 == '\0') {
                fVar11 = SUB84(dVar12, 0) / (float)((u64)dVar12 >> 0x20);
            } else {
                fVar11 = SUB84(dVar12 / dVar12, 0);
            }
            fStack_80 = fVar11;
            if (cVar18 != '\0') {
                fStack_80 = (float)in_xd0;
            }
            iStack_e0 = (int)asStack_16a[2];
            iStack_e4 = (int)asStack_16a[0];
            iStack_e8 = (int)asStack_16a[1];
            pfVar6 = (float *)(iStack_e4 * 0x18 + iVar8 + 8);
            if (cVar18 == '\0') {
                fVar11 = *pfVar6;
            } else {
                in_xd0 = *(u64 *)pfVar6;
            }
            pdVar5 = (double *)(iStack_e8 * 0x18 + iVar8 + 8);
            if (cVar18 == '\0') {
                dVar12 = (double)CONCAT44(*(u32 *)pdVar5, fVar11);
            } else {
                dVar12 = *pdVar5;
            }
            if (cVar17 == '\0') {
                fVar11 = SUB84(dVar12, 0) + (float)((u64)dVar12 >> 0x20);
            } else {
                fVar11 = SUB84(dVar12 + dVar12, 0);
            }
            pdVar5 = (double *)(iStack_e0 * 0x18 + iVar8 + 8);
            if (cVar18 == '\0') {
                dVar12 = (double)CONCAT44(*(u32 *)pdVar5, fVar11);
            } else {
                dVar12 = *pdVar5;
            }
            if (cVar17 == '\0') {
                fVar11 = SUB84(dVar12, 0) + (float)((u64)dVar12 >> 0x20);
            } else {
                fVar11 = SUB84(dVar12 + dVar12, 0);
            }
            if (cVar18 == '\0') {
                dVar12 = (double)CONCAT44(0x40400000, fVar11);
            } else {
                dVar12 = 5.0132357787706e-312;
            }
            if (cVar17 == '\0') {
                fVar11 = SUB84(dVar12, 0) / (float)((u64)dVar12 >> 0x20);
            } else {
                fVar11 = SUB84(dVar12 / dVar12, 0);
            }
            fStack_7c = fVar11;
            if (cVar18 != '\0') {
                fStack_7c = (float)in_xd0;
            }
            iStack_ec = (int)asStack_16a[2];
            iStack_f0 = (int)asStack_16a[0];
            iStack_f4 = (int)asStack_16a[1];
            pfVar6 = (float *)(iStack_f0 * 0x18 + iVar8 + 0xc);
            if (cVar18 == '\0') {
                fVar11 = *pfVar6;
            } else {
                in_xd0 = *(u64 *)pfVar6;
            }
            pdVar5 = (double *)(iStack_f4 * 0x18 + iVar8 + 0xc);
            if (cVar18 == '\0') {
                dVar12 = (double)CONCAT44(*(u32 *)pdVar5, fVar11);
            } else {
                dVar12 = *pdVar5;
            }
            if (cVar17 == '\0') {
                fVar11 = SUB84(dVar12, 0) + (float)((u64)dVar12 >> 0x20);
            } else {
                fVar11 = SUB84(dVar12 + dVar12, 0);
            }
            pdVar5 = (double *)(iStack_ec * 0x18 + iVar8 + 0xc);
            if (cVar18 == '\0') {
                dVar12 = (double)CONCAT44(*(u32 *)pdVar5, fVar11);
            } else {
                dVar12 = *pdVar5;
            }
            if (cVar17 == '\0') {
                fVar11 = SUB84(dVar12, 0) + (float)((u64)dVar12 >> 0x20);
            } else {
                fVar11 = SUB84(dVar12 + dVar12, 0);
            }
            if (cVar18 == '\0') {
                dVar12 = (double)CONCAT44(0x40400000, fVar11);
            } else {
                dVar12 = 5.0132357787706e-312;
            }
            if (cVar17 == '\0') {
                fVar11 = SUB84(dVar12, 0) / (float)((u64)dVar12 >> 0x20);
            } else {
                fVar11 = SUB84(dVar12 / dVar12, 0);
            }
            fStack_78 = fVar11;
            if (cVar18 != '\0') {
                fStack_78 = (float)in_xd0;
            }
            iStack_f8 = (int)asStack_16a[2];
            iStack_fc = (int)asStack_16a[0];
            iStack_100 = (int)asStack_16a[1];
            pfVar6 = (float *)(iStack_fc * 0x18 + iVar8 + 0x10);
            if (cVar18 == '\0') {
                fVar11 = *pfVar6;
            } else {
                in_xd0 = *(u64 *)pfVar6;
            }
            pdVar5 = (double *)(iStack_100 * 0x18 + iVar8 + 0x10);
            if (cVar18 == '\0') {
                dVar12 = (double)CONCAT44(*(u32 *)pdVar5, fVar11);
            } else {
                dVar12 = *pdVar5;
            }
            if (cVar17 == '\0') {
                fVar11 = SUB84(dVar12, 0) + (float)((u64)dVar12 >> 0x20);
            } else {
                fVar11 = SUB84(dVar12 + dVar12, 0);
            }
            pdVar5 = (double *)(iStack_f8 * 0x18 + iVar8 + 0x10);
            if (cVar18 == '\0') {
                dVar12 = (double)CONCAT44(*(u32 *)pdVar5, fVar11);
            } else {
                dVar12 = *pdVar5;
            }
            if (cVar17 == '\0') {
                fVar11 = SUB84(dVar12, 0) + (float)((u64)dVar12 >> 0x20);
            } else {
                fVar11 = SUB84(dVar12 + dVar12, 0);
            }
            if (cVar18 == '\0') {
                dVar12 = (double)CONCAT44(0x40400000, fVar11);
            } else {
                dVar12 = 5.0132357787706e-312;
            }
            if (cVar17 == '\0') {
                fVar11 = SUB84(dVar12, 0) / (float)((u64)dVar12 >> 0x20);
            } else {
                fVar11 = SUB84(dVar12 / dVar12, 0);
            }
            fStack_74 = fVar11;
            if (cVar18 != '\0') {
                fStack_74 = (float)in_xd0;
            }
            iStack_104 = (int)asStack_16a[2];
            iStack_108 = (int)asStack_16a[0];
            iStack_10c = (int)asStack_16a[1];
            pfVar6 = (float *)(iStack_108 * 0x18 + iVar8 + 0x14);
            if (cVar18 == '\0') {
                fVar11 = *pfVar6;
            } else {
                in_xd0 = *(u64 *)pfVar6;
            }
            pdVar5 = (double *)(iStack_10c * 0x18 + iVar8 + 0x14);
            if (cVar18 == '\0') {
                dVar12 = (double)CONCAT44(*(u32 *)pdVar5, fVar11);
            } else {
                dVar12 = *pdVar5;
            }
            if (cVar17 == '\0') {
                fVar11 = SUB84(dVar12, 0) + (float)((u64)dVar12 >> 0x20);
            } else {
                fVar11 = SUB84(dVar12 + dVar12, 0);
            }
            pdVar5 = (double *)(iStack_104 * 0x18 + iVar8 + 0x14);
            if (cVar18 == '\0') {
                dVar12 = (double)CONCAT44(*(u32 *)pdVar5, fVar11);
            } else {
                dVar12 = *pdVar5;
            }
            if (cVar17 == '\0') {
                fVar11 = SUB84(dVar12, 0) + (float)((u64)dVar12 >> 0x20);
            } else {
                fVar11 = SUB84(dVar12 + dVar12, 0);
            }
            if (cVar18 == '\0') {
                dVar12 = (double)CONCAT44(0x40400000, fVar11);
            } else {
                dVar12 = 5.0132357787706e-312;
            }
            if (cVar17 == '\0') {
                fVar11 = (float)((u64)dVar12 >> 0x20);
                dVar12 = (double)CONCAT44(fVar11, SUB84(dVar12, 0) / fVar11);
            } else {
                dVar12 = dVar12 / dVar12;
            }
            if (cVar18 == '\0') {
                fStack_70 = SUB84(dVar12, 0);
            } else {
                fStack_70 = (float)in_xd0;
                uStack_6c = (u32)((u64)in_xd0 >> 0x20);
            }
            pfVar6 = NULL;
            ar5_00 = &fStack_84;
            line_closest_point(&uStack_90, ar5_00, 0);
            fVar11 = (float)((u64)dVar12 >> 0x20);
            dVar14 = dVar12;
            if (cVar18 == '\0') {
                uStack_c0 = (double)CONCAT44(uStack_c0._4_4_, fVar11);
                dVar14 = uStack_c0;
            }
            uStack_c0 = dVar14;
            if (cVar17 == '\0') {
                bVar16 = in_fr4 < fVar11;
            } else {
                bVar16 = (double)CONCAT44(in_fr12, in_fr4) < dVar12;
            }
            if (!bVar16) {
                sVar9 = 0;
                while (true) {
                    uVar10 = SUB84(in_dr14, 0);
                    fVar11 = SUB84(dVar12, 0);
                    if (2 < sVar9)
                        break;
                    if (sVar9 == 0) {
                        iStack_110 = (int)asStack_16a[1];
                        iStack_114 = (int)asStack_16a[0];
                        pfVar7 = (float *)(iStack_110 * 0x18 + iVar8);
                        if (cVar18 == '\0') {
                            fVar11 = *pfVar7;
                        } else {
                            in_xd0 = *(u64 *)pfVar7;
                        }
                        pdVar5 = (double *)(iStack_114 * 0x18 + iVar8);
                        if (cVar18 == '\0') {
                            dVar12 = (double)CONCAT44(*(u32 *)pdVar5, fVar11);
                        } else {
                            dVar12 = *pdVar5;
                        }
                        if (cVar17 == '\0') {
                            fVar11 = SUB84(dVar12, 0) - (float)((u64)dVar12 >> 0x20);
                        } else {
                            fVar11 = SUB84(dVar12 - dVar12, 0);
                        }
                        uVar1 = in_xd0;
                        if (cVar18 == '\0') {
                            uStack_5c = CONCAT44(uStack_5c._4_4_, fVar11);
                            uVar1 = uStack_5c;
                        }
                        uStack_5c = uVar1;
                        iStack_118 = (int)asStack_16a[1];
                        iStack_11c = (int)asStack_16a[0];
                        pfVar7 = (float *)(iStack_118 * 0x18 + iVar8 + 8);
                        if (cVar18 == '\0') {
                            fVar11 = *pfVar7;
                        } else {
                            in_xd0 = *(u64 *)pfVar7;
                        }
                        pdVar5 = (double *)(iStack_11c * 0x18 + iVar8 + 8);
                        if (cVar18 == '\0') {
                            dVar12 = (double)CONCAT44(*(u32 *)pdVar5, fVar11);
                        } else {
                            dVar12 = *pdVar5;
                        }
                        if (cVar17 == '\0') {
                            fVar11 = SUB84(dVar12, 0) - (float)((u64)dVar12 >> 0x20);
                        } else {
                            fVar11 = SUB84(dVar12 - dVar12, 0);
                        }
                        uVar1 = in_xd0;
                        if (cVar18 == '\0') {
                            uStack_54 = CONCAT44(uStack_54._4_4_, fVar11);
                            uVar1 = uStack_54;
                        }
                    } else if (sVar9 == 1) {
                        iStack_120 = (int)asStack_16a[2];
                        iStack_124 = (int)asStack_16a[1];
                        pfVar7 = (float *)(iStack_120 * 0x18 + iVar8);
                        if (cVar18 == '\0') {
                            fVar11 = *pfVar7;
                        } else {
                            in_xd0 = *(u64 *)pfVar7;
                        }
                        pdVar5 = (double *)(iStack_124 * 0x18 + iVar8);
                        if (cVar18 == '\0') {
                            dVar12 = (double)CONCAT44(*(u32 *)pdVar5, fVar11);
                        } else {
                            dVar12 = *pdVar5;
                        }
                        if (cVar17 == '\0') {
                            fVar11 = SUB84(dVar12, 0) - (float)((u64)dVar12 >> 0x20);
                        } else {
                            fVar11 = SUB84(dVar12 - dVar12, 0);
                        }
                        uVar1 = in_xd0;
                        if (cVar18 == '\0') {
                            uStack_5c = CONCAT44(uStack_5c._4_4_, fVar11);
                            uVar1 = uStack_5c;
                        }
                        uStack_5c = uVar1;
                        iStack_128 = (int)asStack_16a[2];
                        iStack_12c = (int)asStack_16a[1];
                        pfVar7 = (float *)(iStack_128 * 0x18 + iVar8 + 8);
                        if (cVar18 == '\0') {
                            fVar11 = *pfVar7;
                        } else {
                            in_xd0 = *(u64 *)pfVar7;
                        }
                        pdVar5 = (double *)(iStack_12c * 0x18 + iVar8 + 8);
                        if (cVar18 == '\0') {
                            dVar12 = (double)CONCAT44(*(u32 *)pdVar5, fVar11);
                        } else {
                            dVar12 = *pdVar5;
                        }
                        if (cVar17 == '\0') {
                            fVar11 = SUB84(dVar12, 0) - (float)((u64)dVar12 >> 0x20);
                        } else {
                            fVar11 = SUB84(dVar12 - dVar12, 0);
                        }
                        uVar1 = in_xd0;
                        if (cVar18 == '\0') {
                            uStack_54 = CONCAT44(uStack_54._4_4_, fVar11);
                            uVar1 = uStack_54;
                        }
                    } else {
                        uVar1 = uStack_54;
                        if (sVar9 == 2) {
                            iStack_130 = (int)asStack_16a[0];
                            iStack_134 = (int)asStack_16a[2];
                            pfVar7 = (float *)(iStack_130 * 0x18 + iVar8);
                            if (cVar18 == '\0') {
                                fVar11 = *pfVar7;
                            } else {
                                in_xd0 = *(u64 *)pfVar7;
                            }
                            pdVar5 = (double *)(iStack_134 * 0x18 + iVar8);
                            if (cVar18 == '\0') {
                                dVar12 = (double)CONCAT44(*(u32 *)pdVar5, fVar11);
                            } else {
                                dVar12 = *pdVar5;
                            }
                            if (cVar17 == '\0') {
                                fVar11 = SUB84(dVar12, 0) - (float)((u64)dVar12 >> 0x20);
                            } else {
                                fVar11 = SUB84(dVar12 - dVar12, 0);
                            }
                            uVar1 = in_xd0;
                            if (cVar18 == '\0') {
                                uStack_5c = CONCAT44(uStack_5c._4_4_, fVar11);
                                uVar1 = uStack_5c;
                            }
                            uStack_5c = uVar1;
                            iStack_138 = (int)asStack_16a[0];
                            iStack_13c = (int)asStack_16a[2];
                            pfVar7 = (float *)(iStack_138 * 0x18 + iVar8 + 8);
                            if (cVar18 == '\0') {
                                fVar11 = *pfVar7;
                            } else {
                                in_xd0 = *(u64 *)pfVar7;
                            }
                            pdVar5 = (double *)(iStack_13c * 0x18 + iVar8 + 8);
                            if (cVar18 == '\0') {
                                dVar12 = (double)CONCAT44(*(u32 *)pdVar5, fVar11);
                            } else {
                                dVar12 = *pdVar5;
                            }
                            if (cVar17 == '\0') {
                                fVar11 = SUB84(dVar12, 0) - (float)((u64)dVar12 >> 0x20);
                            } else {
                                fVar11 = SUB84(dVar12 - dVar12, 0);
                            }
                            uVar1 = in_xd0;
                            if (cVar18 == '\0') {
                                uStack_54 = CONCAT44(uStack_54._4_4_, fVar11);
                                uVar1 = uStack_54;
                            }
                        }
                    }
                    uStack_54 = uVar1;
                    Vec3_length(&uStack_5c, ar5_00, pfVar6, ar7_00);
                    if (bVar15) {
                        Vec3_ctor_xyz_wrap(auStack_4c, &uStack_5c, pfVar6, ar7_00, auStack_b0);
                        Vec3_assign(&uStack_6c, auStack_b0, pfVar6, ar7_00);
                        ar5_00 = (float *)0xffffffff;
                        Vec3_dtor(auStack_b0, 0xffffffff, pfVar6, ar7_00);
                    } else {
                        Vec3_ctor_xyz_wrap(&uStack_5c, auStack_4c, pfVar6, ar7_00, auStack_a0);
                        Vec3_assign(&uStack_6c, auStack_a0, pfVar6, ar7_00);
                        ar5_00 = (float *)0xffffffff;
                        Vec3_dtor(auStack_a0, 0xffffffff, pfVar6, ar7_00);
                    }
                    iStack_144 = (int)sVar9;
                    iStack_140 = (int)asStack_16a[sVar9];
                    iStack_14c = (int)sVar9;
                    iStack_148 = (int)asStack_16a[sVar9];
                    iStack_154 = (int)sVar9;
                    iStack_150 = (int)asStack_16a[sVar9];
                    pdVar5 = (double *)(asStack_16a[sVar9] * 0x18 + iVar8);
                    if (cVar18 == '\0') {
                        dVar14 = (double)CONCAT44(*(u32 *)pdVar5, uVar10);
                        dVar12 = (double)CONCAT44(uStack_6c, fVar11);
                    } else {
                        dVar14 = *pdVar5;
                        dVar12 = (double)CONCAT44(uStack_68, uStack_6c);
                    }
                    if (cVar17 == '\0') {
                        dVar14 = (double)CONCAT44((float)((u64)dVar14 >> 0x20) * (float)((u64)dVar12 >> 0x20),
                                                  SUB84(dVar14, 0));
                    } else {
                        dVar14 = dVar14 * dVar12;
                    }
                    puVar4 = (u64 *)(iStack_150 * 0x18 + iVar8 + 4);
                    if (cVar18 == '\0') {
                        dVar12 = (double)CONCAT44(uStack_68, *(u32 *)puVar4);
                    } else {
                        in_xd0 = *puVar4;
                        dVar12 = (double)CONCAT44(uStack_64, uStack_68);
                    }
                    if (cVar17 == '\0') {
                        dVar14 = (double)CONCAT44((float)((u64)dVar14 >> 0x20) +
                                                      SUB84(dVar12, 0) * (float)((u64)dVar12 >> 0x20),
                                                  SUB84(dVar14, 0));
                    } else {
                        dVar14 = dVar14 + dVar12 * dVar12;
                    }
                    puVar4 = (u64 *)(asStack_16a[sVar9] * 0x18 + iVar8 + 8);
                    if (cVar18 == '\0') {
                        dVar12 = (double)CONCAT44(uStack_64, *(u32 *)puVar4);
                    } else {
                        in_xd0 = *puVar4;
                        dVar12 = (double)CONCAT44(uStack_60, uStack_64);
                    }
                    if (cVar17 == '\0') {
                        fVar11 = SUB84(dVar12, 0) * (float)((u64)dVar12 >> 0x20);
                        dVar14 = (double)CONCAT44((float)((u64)dVar14 >> 0x20) + fVar11, SUB84(dVar14, 0));
                    } else {
                        fVar11 = SUB84(dVar12 * dVar12, 0);
                        dVar14 = dVar14 + dVar12 * dVar12;
                    }
                    if (cVar18 == '\0') {
                        dVar14 = (double)CONCAT44((int)((u64)dVar14 >> 0x20), uStack_6c);
                        dVar12 = (double)CONCAT44(*(u32 *)a1, fVar11);
                    } else {
                        dVar12 = *a1;
                    }
                    if (cVar17 == '\0') {
                        dVar14 = (double)CONCAT44((int)((u64)dVar14 >> 0x20),
                                                  SUB84(dVar14, 0) * (float)((u64)dVar12 >> 0x20));
                    } else {
                        dVar14 = dVar14 * dVar12;
                    }
                    if (cVar18 == '\0') {
                        dVar12 = (double)CONCAT44(*(u32 *)((int)a1 + 4), uStack_68);
                    } else {
                        in_xd0 = CONCAT44(uStack_64, uStack_68);
                        dVar12 = *(double *)((int)a1 + 4);
                    }
                    if (cVar17 == '\0') {
                        dVar14 = (double)CONCAT44((int)((u64)dVar14 >> 0x20),
                                                  SUB84(dVar14, 0) + SUB84(dVar12, 0) * (float)((u64)dVar12 >> 0x20));
                    } else {
                        dVar14 = dVar14 + dVar12 * dVar12;
                    }
                    if (cVar18 == '\0') {
                        dVar12 = (double)CONCAT44(*(u32 *)(a1 + 1), uStack_64);
                    } else {
                        in_xd0 = CONCAT44(uStack_60, uStack_64);
                        dVar12 = a1[1];
                    }
                    if (cVar17 == '\0') {
                        fVar13 = (float)((u64)dVar12 >> 0x20);
                        fVar11 = SUB84(dVar12, 0) * fVar13;
                        dVar12 = (double)CONCAT44(fVar13, fVar11);
                        fVar13 = (float)((u64)dVar14 >> 0x20);
                        in_dr14 = (double)CONCAT44(fVar13, (SUB84(dVar14, 0) + fVar11) - fVar13);
                    } else {
                        dVar12 = dVar12 * dVar12;
                        in_dr14 = (dVar14 + dVar12) - (dVar14 + dVar12);
                    }
                    dVar12 = (double)((u64)dVar12 & 0xffffffff);
                    if (cVar17 == '\0') {
                        bVar16 = 0.0 < SUB84(in_dr14, 0);
                    } else {
                        bVar16 = dVar12 < in_dr14;
                    }
                    if (bVar16) {
                        sVar2 = 0;
                        break;
                    }
                    sVar2 = sVar2 + 1;
                    if (sVar2 == 3) {
                        if (cVar18 == '\0') {
                            *a2 = fStack_78;
                            a2[1] = fStack_74;
                            a2[2] = fStack_70;
                            *a3 = fStack_84;
                            a3[1] = fStack_80;
                            a3[2] = fStack_7c;
                        } else {
                            *(u64 *)a2 = CONCAT44(fStack_74, fStack_78);
                            *(u64 *)(a2 + 1) = CONCAT44(fStack_70, fStack_74);
                            *(u64 *)(a2 + 2) = CONCAT44(uStack_6c, fStack_70);
                            *(u64 *)a3 = CONCAT44(fStack_80, fStack_84);
                            *(u64 *)(a3 + 1) = CONCAT44(fStack_7c, fStack_80);
                            *(u64 *)(a3 + 2) = CONCAT44(fStack_78, fStack_7c);
                        }
                        uStack_b8 = 1;
                        Vec3_dtor(&uStack_6c, 0xffffffff, pfVar6, ar7_00);
                        Vec3_dtor(&uStack_5c, 0xffffffff, pfVar6, ar7_00);
                        Vec3_dtor(auStack_4c, 0xffffffff, pfVar6, ar7_00);
                        Vec3_dtor(auStack_3c, 0xffffffff, pfVar6, ar7_00);
                        return uStack_b8;
                    }
                    sVar9 = sVar9 + 1;
                }
                bVar15 = (bool)(bVar15 ^ 1);
            }
        }
        asStack_16a[4] = asStack_16a[4] + 1;
    } while (true);
}

/*
 * noop_018f7c  0x8c018f7c
 */
u32 noop_018f7c(void) {
    u32 in_r0;

    return in_r0;
}

/*
 * set_vec3_and_w_30  0x8c018f80
 * +0x30 = vector a1, +0x3c = fr4
 * called by: game_uses_Class_129974_dtor_0db224, game_uses_Class_129974_dtor_0e0614
 */
u32 *set_vec3_and_w_30(int a0, u32 *a1) {
    u32 in_fr4;

    *(u32 *)(a0 + 0x30) = *a1;
    *(u32 *)(a0 + 0x34) = a1[1];
    *(u32 *)(a0 + 0x38) = a1[2];
    *(u32 *)(a0 + 0x3c) = in_fr4;
    return (u32 *)(a0 + 0x38);
}

/*
 * noop_018fa8  0x8c018fa8
 */
u32 noop_018fa8(void) {
    u32 in_r0;

    return in_r0;
}

/*
 * noop_018fac  0x8c018fac
 */
u32 noop_018fac(void) {
    u32 in_r0;

    return in_r0;
}

/*
 * static_init_vec3s_279110  0x8c018fb0
 * static initialiser: builds four global Vec3 constants (8c279110..8c279134) and registers their destructors
 */
u32 static_init_vec3s_279110(u32 unused_a0, u32 a1, u32 a2, u32 a3) {
    u32 uVar1;
    u32 uVar2;
    u8 *puVar3;

    uVar1 = Vec3_ctor_xyz((&DATA_8c125908), a1, a2, a3);
    puVar3 = (&Vec3_dtor);
    uVar2 = 0x8c279110;
    global_list_push(uVar1, (&Vec3_dtor), 0x8c279110, a3);
    uVar1 = Vec3_ctor_xyz((&DATA_8c125918), puVar3, uVar2, a3);
    puVar3 = (&Vec3_dtor);
    uVar2 = 0x8c27911c;
    global_list_push(uVar1, (&Vec3_dtor), 0x8c27911c, a3);
    uVar1 = Vec3_ctor_xyz((&DATA_8c125928), puVar3, uVar2, a3);
    puVar3 = (&Vec3_dtor);
    uVar2 = 0x8c279128;
    global_list_push(uVar1, (&Vec3_dtor), 0x8c279128, a3);
    uVar2 = Vec3_ctor_xyz((&DATA_8c125938), puVar3, uVar2, a3);
    uVar2 = global_list_push(uVar2, (&Vec3_dtor), 0x8c279134, a3);
    return uVar2;
}

/*
 * touch_fields_30_3c_wrap  0x8c019058
 * only calls touch_fields_30_3c
 * called by: CEnv_draw_with_three_parts_swapped, Class_12b3b8_uses_object_dtor_delete_0e7a78, Class_12b758_draw_0e4dd0,
 * Class_12b930_draw_0d7354, Class_12b930_draw_0d7410, Class_12c058_draw, Class_12c058_draw_0f577c, game_draw_0cb220
 * (+14 more)
 */
u32 touch_fields_30_3c_wrap(void) {
    u32 r5;
    u32 r6;
    u32 r7;
    u32 uVar1;
    u64 in_dr4;

    uVar1 = touch_fields_30_3c(0, r5, r6, r7, (int)((u64)in_dr4 >> 0x20));
    return uVar1;
}

/*
 * rotate_xyz_degrees  0x8c019088
 * njRotateXYZ(current matrix) with angles fr4..fr6 in degrees
 * called by: Class_12c058_draw, Class_12c058_draw_0f577c, game_draw_029ca8
 */
u32 rotate_xyz_degrees(void) {
    u32 uVar1;
    float in_fr5;
    float in_fr4;
    float in_fr6;

    uVar1 = njRotateXYZ(0, (int)((in_fr4 * 65536.0) / 360.0), (int)((in_fr5 * 65536.0) / 360.0),
                        (int)((in_fr6 * 65536.0) / 360.0), in_fr4);
    return uVar1;
}

/*
 * matrix_rotate_deg  0x8c0190f0
 * rotates the current matrix by fr4 degrees (Ninja angle units via ninja_sub_256a78)
 * called by: Class_12b3b8_uses_object_dtor_delete_0e7a78
 */
u32 matrix_rotate_deg(void) {
    u32 r6;
    u32 r7;
    u32 uVar1;
    float in_fr4;

    uVar1 = ninja_float_calc_256a78(0, (int)((in_fr4 * 65536.0) / 360.0), r6, r7, in_fr4);
    return uVar1;
}

/*
 * rotate_y_degrees  0x8c019128
 * njRotateY(current matrix) by fr4 degrees
 * called by: Class_12b3b8_uses_object_dtor_delete_0e7a78, game_uses_clear_3_words_0c9ee0
 */
u32 rotate_y_degrees(void) {
    u32 r6;
    u32 r7;
    u32 uVar1;
    float in_fr4;

    uVar1 = njRotateY(0, (int)((in_fr4 * 65536.0) / 360.0), r6, r7, in_fr4);
    return uVar1;
}

/*
 * rotate_degrees  0x8c019160
 * rotates the current matrix by fr4 degrees (converted to a Ninja angle)
 * called by: Class_12b3b8_uses_object_dtor_delete_0e7a78, Class_12b930_draw_0d7354, Class_12b930_draw_0d7410,
 * game_draw_0d4124, game_draw_0d4428, game_draw_0d46cc
 */
u32 rotate_degrees(void) {
    u32 r6;
    u32 r7;
    u32 uVar1;
    float in_fr4;

    uVar1 = njRotateZ(0, (int)((in_fr4 * 65536.0) / 360.0), r6, r7, in_fr4);
    return uVar1;
}

/*
 * matrix_scale_wrap  0x8c019198
 * only calls matrix_scale
 * called by: CEnv_draw_with_three_parts_swapped, Class_12b3b8_uses_object_dtor_delete_0e7a78, Class_12b758_draw_0e4dd0,
 * draw_model_with_items, game_draw_029ca8, game_uses_clear_3_words_0c9ee0, obj_draw_with_part_swapped
 */
u32 matrix_scale_wrap(u32 unused_a0, u32 a1) {
    u32 r6;
    u32 r7;
    u32 uVar1;
    u64 in_dr4;

    uVar1 = matrix_scale(0, a1, r6, r7, (int)((u64)in_dr4 >> 0x20));
    return uVar1;
}

/*
 * fpu_save_fr0_fr15_wrap  0x8c0191c8
 * only calls fpu_save_fr0_fr15
 * called by: CSquidLine_uses_matrix_push_0ad354, Class_12bec0_draw_0f5e0c
 */
u32 fpu_save_fr0_fr15_wrap(u32 a0) {
    u32 r5;
    u32 r6;
    u32 r7;
    u32 uVar1;

    uVar1 = fpu_save_fr0_fr15(a0, r5, r6, r7, a0);
    return uVar1;
}

/*
 * Class_129a50_ctor  0x8c0191e4
 * vtable 0x8c129a50
 * called by: Class_12b3b8_ctor, game_uses_Vec3_dtor_0dbe24, game_vec_0dfa84
 */
u32 *Class_129a50_ctor(u32 *a0) {
    *a0 = (&DATA_8c129a50);
    Class_129a50_init_fields_0192a8(a0);
    return a0;
}

/*
 * Class_129a50_ctor_b  0x8c019208
 * Class_129a50 vtable, then the alternative field initialiser (019384)
 * called by: Class_129a24_ctor, Class_12bb08_ctor
 */
u32 *Class_129a50_ctor_b(u32 *a0) {
    *a0 = (&DATA_8c129a50);
    Class_129a50_draw_019384(a0);
    return a0;
}

/*
 * Class_129a50_dtor  0x8c019270
 * stores the vtable 0x8c129a50
 * called by: Class_1299f8_dtor_019eb8, Class_129a24_dtor, Class_12b3b8_dtor, Class_12bb08_dtor,
 * game_uses_Vec3_dtor_0dbe24, game_vec_0dfa84
 */
u32 *Class_129a50_dtor(u32 *a0, u32 a1, u32 a2, u32 a3) {
    u32 in_stack_fffffff4;

    if ((a0 != NULL) && (*a0 = &g_8c129a50, 0 < (short)a1)) {
        free_if_nonnull(a0, a1, a2, a3, CONCAT22((short)((u32)in_stack_fffffff4 >> 0x10), (short)a1));
    }
    return a0;
}

/*
 * Class_129a50_init_fields_0192a8  0x8c0192a8
 * area name: only called from Class_129a50 methods; behaviour name: writes 15 members
 * called by: Class_129a50_ctor
 */
u8 *Class_129a50_init_fields_0192a8(int a0) {
    *(u32 *)(a0 + 0x60) = 0;
    *(u32 *)(a0 + 0x44) = 0;
    *(u32 *)(a0 + 100) = 0;
    *(u32 *)(a0 + 0x48) = 0;
    *(u32 *)(a0 + 0x68) = 0;
    *(u32 *)(a0 + 0x4c) = 0;
    *(u32 *)(a0 + 0x6c) = 0;
    *(u32 *)(a0 + 0x50) = 0;
    *(u32 *)(a0 + 0x70) = 0;
    *(u32 *)(a0 + 0x54) = 0;
    *(u32 *)(a0 + 0x74) = 0xbf800000;
    *(u32 *)(a0 + 0x58) = 0xbf800000;
    *(u32 *)(a0 + 0x78) = 0;
    *(u32 *)(a0 + 0x5c) = 0;
    *(u32 *)(a0 + 0x7c) = 0x41f00000;
    return &g_8c019380;
}

/*
 * Class_129a50_draw_019384  0x8c019384
 * area name: sits between Class_129a50 functions (same compilation unit); behaviour name: mostly calls draw functions
 * called by: Class_129a50_ctor_b, Class_12b3b8_ctor, game_uses_Vec3_ctor_zero_0cac08
 */
u32 Class_129a50_draw_019384(int a0) {
    u32 uVar1;
    u64 in_dr4;
    u32 in_fr7;
    u32 in_fr6;
    u32 in_fr9;
    u32 in_fr8;
    u32 in_fr11;
    float in_fr10;
    int iVar2;

    uVar1 = (u32)((u64)in_dr4 >> 0x20);
    *(u32 *)(a0 + 0x60) = uVar1;
    *(u32 *)(a0 + 0x44) = uVar1;
    *(int *)(a0 + 100) = (int)in_dr4;
    *(int *)(a0 + 0x48) = (int)in_dr4;
    *(u32 *)(a0 + 0x68) = in_fr6;
    *(u32 *)(a0 + 0x4c) = in_fr6;
    *(u32 *)(a0 + 0x6c) = in_fr7;
    *(u32 *)(a0 + 0x50) = in_fr7;
    *(u32 *)(a0 + 0x70) = in_fr8;
    *(u32 *)(a0 + 0x54) = in_fr8;
    *(u32 *)(a0 + 0x74) = in_fr9;
    *(u32 *)(a0 + 0x58) = in_fr9;
    iVar2 = (int)((in_fr10 * 65536.0) / 360.0);
    *(int *)(a0 + 0x78) = iVar2;
    *(int *)(a0 + 0x5c) = iVar2;
    *(u32 *)(a0 + 0x7c) = in_fr11;
    uVar1 = rotate_degrees_7c(a0);
    return uVar1;
}

/*
 * rotate_degrees_7c  0x8c0194c0
 * stores fr4 degrees at +0x7c and rotates the matrix by it
 * called by: Class_129a50_draw_019384, Class_12b3b8_uses_object_dtor_delete_0e7a78, game_draw_0e84f8,
 * rotate_degrees_7c_on_field_9e8
 */
u32 rotate_degrees_7c(int a0) {
    u32 uVar1;
    u32 in_fr4;

    *(u32 *)(a0 + 0x7c) = in_fr4;
    uVar1 = ninja_uses_ninja_angle_sincos_257148((int)((*(float *)(a0 + 0x7c) * 65536.0) / 360.0));
    return uVar1;
}

/*
 * game_calls_float_calc_019508  0x8c019508
 * area name: game code; nothing names its area yet; behaviour name: its callees mostly do: float_calc
 * called by: game_uses_Vec3_dtor_0dbe24, game_vec_0dfa84
 */
u64 *game_calls_float_calc_019508(u32 unused_a0, u32 *a1, u64 *a2, u64 *a3) {
    char cVar1;
    u32 uStack_1c;
    u32 uStack_18;
    u32 uStack_14;
    u32 uStack_10;
    u32 uStack_c;

    cVar1 = '\0';
    uStack_14 = *a1;
    uStack_10 = a1[1];
    uStack_c = a1[2];
    matrix_float_calc_256294(0, &uStack_14, &uStack_1c);
    if (cVar1 == '\0') {
        *(u32 *)a2 = uStack_1c;
        *(u32 *)a3 = uStack_18;
    } else {
        *a2 = CONCAT44(uStack_18, uStack_1c);
        *a3 = CONCAT44(uStack_14, uStack_18);
    }
    return a3;
}

/*
 * set_vec3_field_44  0x8c019560
 * stores fr4..fr6 at +0x44
 * called by: game_uses_Vec3_ctor_zero_0cac08, game_uses_Vec3_dtor_0cb29c, game_uses_set_vec3_field_44_0db188
 */
u32 *set_vec3_field_44(int a0) {
    u32 in_fr5;
    u32 in_fr4;
    u32 in_fr6;

    *(u32 *)(a0 + 0x44) = in_fr4;
    *(u32 *)(a0 + 0x48) = in_fr5;
    *(u32 *)(a0 + 0x4c) = in_fr6;
    return (u32 *)(a0 + 0x48);
}

/*
 * set_vec_50_fr4_6  0x8c019574
 * stores (fr4, fr5, fr6) at +0x50
 * called by: game_uses_set_vec3_field_44_0db188
 */
u32 *set_vec_50_fr4_6(int a0) {
    u32 in_fr5;
    u32 in_fr4;
    u32 in_fr6;

    *(u32 *)(a0 + 0x50) = in_fr4;
    *(u32 *)(a0 + 0x54) = in_fr5;
    *(u32 *)(a0 + 0x58) = in_fr6;
    return (u32 *)(a0 + 0x54);
}

/*
 * Class_1299f8_m4_019588  0x8c019588
 * called by: Class_129a24_m4_019e40
 */
u32 Class_1299f8_m4_019588(int a0, u32 a1, u32 a2, u32 a3) {
    u32 *puVar1;
    u8 *ar6_00;
    float fVar2;
    float fVar3;
    double dVar4;
    double dVar5;
    double dVar6;
    double dVar7;
    u64 in_dr4;
    u32 uVar8;
    u64 in_dr6;
    u32 in_fr13;
    float fVar9;
    u32 uVar10;
    double in_xd0;
    int iVar11;
    char cVar12;
    char cVar13;
    u32 in_stack_00000000;
    u32 uStack_168;
    u32 auStack_160[4];
    u8 auStack_150[12];
    u32 uStack_144;
    u32 uStack_140;
    u32 uStack_13c;
    u32 auStack_138[16];
    u8 auStack_f8[64];
    u8 auStack_b8[16];
    u8 auStack_a8[64];
    u32 uStack_68;
    u32 uStack_64;
    u32 uStack_60;
    u32 uStack_5c;
    u8 auStack_58[16];
    u32 uStack_48;
    u32 uStack_44;
    float fStack_40;
    u32 uStack_3c;
    u32 uStack_38;
    u32 uStack_34;
    u32 uStack_30;
    u32 uStack_2c;
    u8 auStack_28[20];

    cVar13 = '\0';
    cVar12 = '\0';
    uVar8 = (u32)((u64)in_dr4 >> 0x20);
    dVar4 = (double)CONCAT44((int)in_dr4, in_fr13);
    uVar10 = (u32)((u64)in_dr6 >> 0x20);
    Vec3_ctor_zero(auStack_28, a1, a2);
    Class_1299f8_ctor_a(&uStack_48, a1, a2, a3);
    Class_1299f8_ctor_b(&uStack_68, a1, a2, a3);
    identity_023e44(auStack_a8);
    Vec3_ctor_xyz(auStack_b8, a1, a2, a3);
    if (cVar13 == '\0') {
        uStack_144 = *(u32 *)(a0 + 0x50);
        uStack_140 = *(u32 *)(a0 + 0x54);
        uStack_13c = *(u32 *)(a0 + 0x58);
    } else {
        uStack_144 = (u32) * (u64 *)(a0 + 0x50);
        uStack_140 = (u32) * (u64 *)(a0 + 0x54);
        uStack_13c = (u32) * (u64 *)(a0 + 0x58);
        auStack_138[0] = (u32)((u64) * (u64 *)(a0 + 0x58) >> 0x20);
    }
    njGetMatrix_wrap(auStack_a8);
    njGetMatrix(auStack_f8, a1, a2, a3, uVar8);
    puVar1 = auStack_138;
    njGetMatrix(puVar1, a1, a2, a3, uVar8);
    if (cVar13 == '\0') {
        dVar7 = (double)CONCAT44(g_8c4aa4b4, uVar8);
    } else {
        in_xd0 = (double)CONCAT44(uStack_168, uVar8);
        dVar7 = (double)CONCAT44(g_8c4aa4b8, g_8c4aa4b4);
    }
    if (cVar12 == '\0') {
        fVar2 = SUB84(dVar7, 0) - (float)((u64)dVar7 >> 0x20);
    } else {
        fVar2 = SUB84(dVar7 - dVar7, 0);
    }
    if (cVar13 == '\0') {
        dVar7 = (double)CONCAT44(g_8c4aa4b8, fVar2);
    } else {
        fVar2 = SUB84(in_xd0, 0);
        dVar7 = (double)CONCAT44(g_8c4aa4bc, g_8c4aa4b8);
    }
    if (cVar12 == '\0') {
        fVar9 = (float)((u64)dVar4 >> 0x20) - (float)((u64)dVar7 >> 0x20);
    } else {
        fVar9 = (float)((u64)(dVar4 - dVar7) >> 0x20);
    }
    libm_errno_wrap_013b8c(puVar1, a1, a2, a3);
    uVar8 = (u32)((u64)dVar7 >> 0x20);
    if (cVar13 == '\0') {
        dVar4 = (double)CONCAT44(0x47800000, uVar8);
        dVar7 = in_xd0;
    } else {
        dVar4 = 12831.689682006836;
        auStack_160[0] = uVar8;
    }
    if (cVar12 == '\0') {
        fVar3 = SUB84(dVar4, 0) * (float)((u64)dVar4 >> 0x20);
    } else {
        fVar3 = SUB84(dVar4 * dVar4, 0);
    }
    if (cVar13 == '\0') {
        dVar4 = (double)CONCAT44(0x40c90fd8, fVar3);
    } else {
        dVar4 = 1.4411521590097244e+18;
    }
    if (cVar12 == '\0') {
        fVar3 = SUB84(dVar4, 0) / (float)((u64)dVar4 >> 0x20);
        dVar4 = (double)CONCAT44((float)(int)fVar3, uVar10);
    } else {
        fVar3 = SUB84(dVar4 / dVar4, 0);
        dVar4 = (double)(int)(dVar4 / dVar4);
    }
    if (cVar13 == '\0') {
        dVar5 = (double)CONCAT44(0x43b40000, fVar3);
    } else {
        dVar5 = -3.740593052227333e-250;
    }
    if (cVar12 == '\0') {
        dVar4 = (double)CONCAT44((float)((u64)dVar4 >> 0x20) * (float)((u64)dVar5 >> 0x20), SUB84(dVar4, 0));
    } else {
        dVar4 = dVar4 * dVar5;
    }
    if (cVar13 == '\0') {
        dVar5 = (double)CONCAT44(0x47800000, SUB84(dVar5, 0));
    } else {
        dVar5 = 12831.689682006836;
    }
    if (cVar12 == '\0') {
        dVar4 = (double)CONCAT44((float)((u64)dVar4 >> 0x20) / (float)((u64)dVar5 >> 0x20), SUB84(dVar4, 0));
    } else {
        dVar4 = dVar4 / dVar5;
    }
    libm_errno_wrap_013b8c(puVar1, a1, a2, a3);
    if (cVar13 == '\0') {
        dVar6 = (double)CONCAT44(0x47800000, (int)((u64)dVar5 >> 0x20));
        dVar5 = dVar7;
    } else {
        dVar6 = 12831.689682006836;
    }
    if (cVar12 == '\0') {
        fVar3 = SUB84(dVar6, 0) * (float)((u64)dVar6 >> 0x20);
    } else {
        fVar3 = SUB84(dVar6 * dVar6, 0);
    }
    if (cVar13 == '\0') {
        dVar7 = (double)CONCAT44(0x40c90fd8, fVar3);
    } else {
        dVar7 = 1.4411521590097244e+18;
    }
    if (cVar12 == '\0') {
        fVar3 = SUB84(dVar7, 0) / (float)((u64)dVar7 >> 0x20);
        iVar11 = (int)fVar3;
    } else {
        fVar3 = SUB84(dVar7 / dVar7, 0);
        iVar11 = (int)(dVar7 / dVar7);
    }
    if (cVar13 == '\0') {
        dVar7 = (double)CONCAT44(0x43b40000, fVar3);
    } else {
        dVar7 = -3.740593052227333e-250;
    }
    if (cVar12 == '\0') {
        dVar6 = (double)CONCAT44(fVar9, (float)iVar11 * (float)((u64)dVar7 >> 0x20));
    } else {
        dVar6 = (double)CONCAT44(fVar9, (float)iVar11) * dVar7;
    }
    if (cVar13 == '\0') {
        dVar7 = (double)CONCAT44(0x47800000, SUB84(dVar7, 0));
    } else {
        dVar7 = 12831.689682006836;
    }
    if (cVar12 == '\0') {
        dVar6 = (double)CONCAT44((int)((u64)dVar6 >> 0x20), SUB84(dVar6, 0) / (float)((u64)dVar7 >> 0x20));
    } else {
        dVar6 = dVar6 / dVar7;
    }
    uVar8 = (u32)((u64)dVar6 >> 0x20);
    if (cVar13 == '\0') {
        dVar7 = (double)CONCAT44(0x47800000, SUB84(dVar7, 0));
    } else {
        dVar7 = 12831.689682006836;
    }
    if (cVar12 == '\0') {
        dVar6 = (double)CONCAT44(uVar8, -SUB84(dVar6, 0) * (float)((u64)dVar7 >> 0x20));
    } else {
        dVar6 = (double)CONCAT44(uVar8, -SUB84(dVar6, 0)) * dVar7;
    }
    if (cVar13 == '\0') {
        dVar7 = (double)CONCAT44(0x43b40000, SUB84(dVar7, 0));
    } else {
        dVar7 = -3.740593052227333e-250;
    }
    if (cVar12 == '\0') {
        iVar11 = (int)(SUB84(dVar6, 0) / (float)((u64)dVar7 >> 0x20));
    } else {
        iVar11 = (int)(dVar6 / dVar7);
    }
    njRotateY(auStack_f8, iVar11, a2, a3, fVar2);
    if (cVar12 == '\0') {
        dVar4 = (double)CONCAT44(-(float)((u64)dVar4 >> 0x20), SUB84(dVar4, 0));
    } else {
        dVar4 = -dVar4;
    }
    if (cVar13 == '\0') {
        dVar7 = (double)CONCAT44(0x47800000, SUB84(dVar7, 0));
    } else {
        dVar7 = 12831.689682006836;
    }
    if (cVar12 == '\0') {
        dVar4 = (double)CONCAT44((float)((u64)dVar4 >> 0x20) * (float)((u64)dVar7 >> 0x20), SUB84(dVar4, 0));
    } else {
        dVar4 = dVar4 * dVar7;
    }
    if (cVar13 == '\0') {
        dVar7 = (double)CONCAT44(0x43b40000, SUB84(dVar7, 0));
    } else {
        dVar7 = -3.740593052227333e-250;
    }
    if (cVar12 == '\0') {
        fVar9 = (float)((u64)dVar4 >> 0x20) / (float)((u64)dVar7 >> 0x20);
        dVar4 = (double)CONCAT44(fVar9, SUB84(dVar4, 0));
        iVar11 = (int)fVar9;
    } else {
        dVar4 = dVar4 / dVar7;
        iVar11 = (int)dVar4;
    }
    ninja_float_calc_256a78(auStack_138, iVar11, a2, a3, fVar2);
    ninja_update_fields_255d6c(auStack_f8, auStack_138, a2, a3, fVar2);
    ar6_00 = auStack_150;
    puVar1 = &uStack_144;
    njCalcVector_like(auStack_f8, puVar1, ar6_00, a3, fVar2);
    Vec3_assign_f(auStack_58, puVar1, ar6_00, a3);
    Vec3_length(auStack_58, puVar1, ar6_00, a3);
    if (cVar13 == '\0') {
        uStack_68 = *(u32 *)(a0 + 0x44);
        uStack_64 = *(u32 *)(a0 + 0x48);
        uStack_60 = *(u32 *)(a0 + 0x4c);
        dVar7 = (double)CONCAT44(uStack_60, *(u32 *)(a0 + 0x50));
    } else {
        uStack_68 = (u32) * (u64 *)(a0 + 0x44);
        uStack_64 = (u32) * (u64 *)(a0 + 0x48);
        dVar7 = *(double *)(a0 + 0x4c);
        uStack_60 = SUB84(dVar7, 0);
        uStack_5c = (u32)((u64)dVar7 >> 0x20);
        dVar5 = *(double *)(a0 + 0x50);
    }
    fVar2 = SUB84(dVar4, 0);
    if (cVar12 == '\0') {
        fVar9 = SUB84(dVar7, 0) * fVar2;
    } else {
        fVar9 = SUB84(dVar7 * dVar4, 0);
    }
    if (cVar13 == '\0') {
        dVar7 = (double)CONCAT44(*(u32 *)(a0 + 0x44), fVar9);
    } else {
        dVar7 = *(double *)(a0 + 0x44);
    }
    if (cVar12 == '\0') {
        fVar9 = (float)((u64)dVar7 >> 0x20);
        dVar7 = (double)CONCAT44(fVar9, SUB84(dVar7, 0) + fVar9);
    } else {
        dVar7 = dVar7 + dVar7;
    }
    if (cVar13 == '\0') {
        uStack_48 = SUB84(dVar7, 0);
        dVar7 = (double)CONCAT44((int)((u64)dVar7 >> 0x20), *(u32 *)(a0 + 0x54));
    } else {
        uStack_48 = SUB84(dVar5, 0);
        dVar5 = *(double *)(a0 + 0x54);
    }
    if (cVar12 == '\0') {
        fVar9 = SUB84(dVar7, 0) * fVar2;
    } else {
        fVar9 = SUB84(dVar7 * dVar4, 0);
    }
    if (cVar13 == '\0') {
        dVar7 = (double)CONCAT44(*(u32 *)(a0 + 0x48), fVar9);
    } else {
        dVar7 = *(double *)(a0 + 0x48);
    }
    if (cVar12 == '\0') {
        fVar9 = (float)((u64)dVar7 >> 0x20);
        dVar7 = (double)CONCAT44(fVar9, SUB84(dVar7, 0) + fVar9);
    } else {
        dVar7 = dVar7 + dVar7;
    }
    if (cVar13 == '\0') {
        uStack_44 = SUB84(dVar7, 0);
        dVar7 = (double)CONCAT44((int)((u64)dVar7 >> 0x20), *(u32 *)(a0 + 0x58));
    } else {
        uStack_44 = SUB84(dVar5, 0);
        dVar5 = *(double *)(a0 + 0x58);
    }
    if (cVar12 == '\0') {
        fVar2 = SUB84(dVar7, 0) * fVar2;
    } else {
        fVar2 = SUB84(dVar7 * dVar4, 0);
    }
    if (cVar13 == '\0') {
        dVar4 = (double)CONCAT44(*(u32 *)(a0 + 0x4c), fVar2);
    } else {
        dVar4 = *(double *)(a0 + 0x4c);
    }
    if (cVar12 == '\0') {
        fStack_40 = SUB84(dVar4, 0) + (float)((u64)dVar4 >> 0x20);
    } else {
        fStack_40 = SUB84(dVar4 + dVar4, 0);
    }
    if (cVar13 == '\0') {
        uStack_38 = *(u32 *)(a0 + 0x50);
        uStack_34 = *(u32 *)(a0 + 0x54);
        uStack_30 = *(u32 *)(a0 + 0x58);
    } else {
        fStack_40 = SUB84(dVar5, 0);
        uStack_3c = (u32)((u64)dVar5 >> 0x20);
        uStack_38 = (u32) * (u64 *)(a0 + 0x50);
        uStack_34 = (u32) * (u64 *)(a0 + 0x54);
        uStack_30 = (u32) * (u64 *)(a0 + 0x58);
        uStack_2c = (u32)((u64) * (u64 *)(a0 + 0x58) >> 0x20);
    }
    puVar1 = &uStack_48;
    Class_1299f8_vec_0240bc(&uStack_68, &uStack_38, puVar1, a3);
    Vec3_assign(auStack_28, auStack_160, puVar1, a3);
    Vec3_dtor(auStack_160, 0xffffffff, puVar1, a3);
    Vec3_ctor_copy(in_stack_00000000, auStack_28, puVar1, a3);
    Vec3_dtor(auStack_b8, 0xffffffff, puVar1, a3);
    free_if_nonnull_wrap_023e4c(auStack_a8, 0xffffffff, puVar1, a3);
    Class_1299f8_dtor(&uStack_68, 0xffffffff, puVar1, a3);
    Class_1299f8_dtor_019928(&uStack_48, 0xffffffff, puVar1, a3);
    Vec3_dtor(auStack_28, 0xffffffff, puVar1, a3);
    return 0;
}

/*
 * Class_1299f8_dtor  0x8c0198dc
 * destroys the two vectors and frees the object when a1 > 0
 * called by: Class_1299f8_m4_019588
 */
int Class_1299f8_dtor(int a0, u32 a1, u32 a2, u32 a3) {
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
 * Class_1299f8_dtor_019928  0x8c019928
 * destroys the two vectors and frees the object when a1 > 0
 * called by: Class_1299f8_m4_019588
 */
int Class_1299f8_dtor_019928(int a0, u32 a1, u32 a2, u32 a3) {
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
 * debug_print_vec3  0x8c019974
 * formats "x: y: z:" into 0x8c279178 and prints it (the print is a no-op in the release build)
 * strings: "x:%4.1lf y:%4.1lf z:%4.1lf"
 */
u32 debug_print_vec3(u32 unused_a0, u32 a1, u32 a2) {
    u32 r7;
    u32 uVar1;

    sprintf(0x8c279178, a1, a2, r7, "x:%4.1lf y:%4.1lf z:%4.1lf");
    uVar1 = noop_102824(0x8c279178, a1, a2, 0xd);
    return uVar1;
}

/*
 * Class_129a24_ctor  0x8c0199d4
 * stores the Class_129a24 vtable in a0 and initialises the object
 * called by: static_init_vec3s_4368d0
 */
u32 *Class_129a24_ctor(u32 *a0, u32 a1, u32 a2, u32 a3) {
    Class_129a50_ctor_b(a0);
    *a0 = (&DATA_8c129a24);
    Vec3_ctor_zero((int)a0 + 0x80, a1, a2);
    Vec3_ctor_xyz((int)a0 + 0x90, a1, a2, a3);
    Vec3_ctor_xyz((int)a0 + 0xa0, a1, a2, a3);
    Vec3_set_zero((int)a0 + 0xb0);
    *(u32 *)(0xbc + (int)a0) = 1;
    return a0;
}

/*
 * Class_129a24_dtor  0x8c019aa0
 * stores the vtable 0x8c129a24
 */
u32 *Class_129a24_dtor(u32 *a0, u32 a1, u32 a2, u32 a3) {
    u32 ar5_00;
    u32 in_stack_fffffff4;
    u32 ain0;

    ain0 = CONCAT22((short)((u32)in_stack_fffffff4 >> 0x10), (u16)a1);
    if (a0 != NULL) {
        *a0 = &g_8c129a24;
        object_dtor_delete(a0 + 0x2c, 0xffffffff, a2, a3);
        Vec3_dtor(a0 + 0x28, 0xffffffff, a2, a3);
        Vec3_dtor(a0 + 0x24, 0xffffffff, a2, a3);
        Vec3_dtor(a0 + 0x20, 0xffffffff, a2, a3);
        ar5_00 = 0;
        Class_129a50_dtor(a0, 0, a2, a3);
        if (0 < (short)ain0) {
            free_if_nonnull(a0);
        }
    }
    return a0;
}

/*
 * set_field_84  0x8c019b38
 * called by: game_uses_Vec3_ctor_zero_0cac08
 */
u32 set_field_84(int a0) {
    u32 in_fr4;

    *(u32 *)(a0 + 0x84) = in_fr4;
    return 0x84;
}

/*
 * set_float_84_neg  0x8c019b48
 * stores -fr5 at +0x84
 * called by: game_uses_Vec3_ctor_zero_0cac08
 */
u32 set_float_84_neg(int a0) {
    u64 in_dr4;

    *(float *)(a0 + 0x84) = -(float)((u64)in_dr4 >> 0x20);
    return 0x84;
}

/*
 * set_field_88  0x8c019b58
 * called by: game_uses_Vec3_ctor_zero_0cac08
 */
u32 set_field_88(int a0) {
    u32 in_fr4;

    *(u32 *)(a0 + 0x88) = in_fr4;
    return 0x88;
}

/*
 * Class_129a24_m1_019b68  0x8c019b68
 * called by: game_uses_Vec3_ctor_zero_0cac08, game_uses_Vec3_dtor_0cb29c
 */
u32 Class_129a24_m1_019b68(int a0, u32 unused_a1, u32 a2, u32 a3) {
    u32 uVar1;
    u32 *puVar2;
    u32 *puVar3;
    float fVar4;
    double dVar5;
    u64 in_xd0;
    int iVar6;
    char cVar7;
    char cVar8;
    u32 in_stack_ffffff28;
    u32 uStack_c4;
    u32 uStack_c0;
    u32 uStack_bc;
    u32 uStack_b8;
    u32 uStack_b4;
    u32 uStack_b0;
    u32 uStack_ac;
    u32 uStack_a8;
    u32 uStack_a4;
    u32 uStack_a0;
    u32 uStack_9c;
    u32 uStack_98;
    u32 uStack_94;
    u32 uStack_90;
    u32 uStack_8c;
    u32 auStack_88[16];
    u8 auStack_48[68];

    cVar8 = '\0';
    cVar7 = '\0';
    uStack_94 = *(u32 *)(a0 + 0x90);
    uStack_90 = *(u32 *)(a0 + 0x94);
    uStack_8c = *(u32 *)(a0 + 0x98);
    uStack_a0 = *(u32 *)(a0 + 0xa0);
    uStack_9c = *(u32 *)(a0 + 0xa4);
    uStack_98 = *(u32 *)(a0 + 0xa8);
    njGetMatrix(auStack_48, unused_a1, a2, a3, in_stack_ffffff28);
    njGetMatrix(auStack_88, unused_a1, a2, a3, in_stack_ffffff28);
    if (cVar8 == '\0') {
        dVar5 = (double)CONCAT44(0x47800000, *(u32 *)(a0 + 0xb4));
    } else {
        in_xd0 = *(u64 *)(a0 + 0xb4);
        dVar5 = 1.4411521878487204e+18;
    }
    if (cVar7 == '\0') {
        fVar4 = SUB84(dVar5, 0) * (float)((u64)dVar5 >> 0x20);
    } else {
        fVar4 = SUB84(dVar5 * dVar5, 0);
    }
    if (cVar8 == '\0') {
        dVar5 = (double)CONCAT44(0x43b40000, fVar4);
    } else {
        dVar5 = -3.740593052227333e-250;
    }
    if (cVar7 == '\0') {
        iVar6 = (int)(SUB84(dVar5, 0) / (float)((u64)dVar5 >> 0x20));
    } else {
        iVar6 = (int)(dVar5 / dVar5);
    }
    njRotateY(auStack_88, iVar6, a2, a3, in_stack_ffffff28);
    ninja_update_fields_255d6c(auStack_48, auStack_88, a2, a3, in_stack_ffffff28);
    puVar3 = &uStack_ac;
    puVar2 = &uStack_94;
    njCalcVector_like(auStack_48, puVar2, puVar3, a3, in_stack_ffffff28);
    if (cVar8 == '\0') {
        dVar5 = (double)CONCAT44(uStack_ac, *(u32 *)(a0 + 0x80));
    } else {
        in_xd0 = *(u64 *)(a0 + 0x80);
        dVar5 = (double)CONCAT44(uStack_a8, uStack_ac);
    }
    if (cVar7 == '\0') {
        fVar4 = SUB84(dVar5, 0) * (float)((u64)dVar5 >> 0x20);
    } else {
        fVar4 = SUB84(dVar5 * dVar5, 0);
    }
    if (cVar8 == '\0') {
        dVar5 = (double)CONCAT44(*(u32 *)(a0 + 0x44), fVar4);
    } else {
        dVar5 = *(double *)(a0 + 0x44);
    }
    if (cVar7 == '\0') {
        fVar4 = SUB84(dVar5, 0) + (float)((u64)dVar5 >> 0x20);
    } else {
        fVar4 = SUB84(dVar5 + dVar5, 0);
    }
    if (cVar8 == '\0') {
        *(float *)(a0 + 0x44) = fVar4;
        dVar5 = (double)CONCAT44(uStack_a4, *(u32 *)(a0 + 0x80));
    } else {
        *(u64 *)(a0 + 0x44) = in_xd0;
        in_xd0 = *(u64 *)(a0 + 0x80);
        dVar5 = (double)CONCAT44(uStack_a0, uStack_a4);
    }
    if (cVar7 == '\0') {
        fVar4 = SUB84(dVar5, 0) * (float)((u64)dVar5 >> 0x20);
    } else {
        fVar4 = SUB84(dVar5 * dVar5, 0);
    }
    if (cVar8 == '\0') {
        dVar5 = (double)CONCAT44(*(u32 *)(a0 + 0x4c), fVar4);
    } else {
        dVar5 = *(double *)(a0 + 0x4c);
    }
    if (cVar7 == '\0') {
        fVar4 = SUB84(dVar5, 0) + (float)((u64)dVar5 >> 0x20);
    } else {
        fVar4 = SUB84(dVar5 + dVar5, 0);
    }
    if (cVar8 == '\0') {
        *(float *)(a0 + 0x4c) = fVar4;
    } else {
        *(u64 *)(a0 + 0x4c) = in_xd0;
    }
    move_pos_along_dir(a0 + 4);
    njGetMatrix(auStack_88, puVar2, puVar3, a3, in_stack_ffffff28);
    if (cVar8 == '\0') {
        dVar5 = (double)CONCAT44(0x47800000, *(u32 *)(a0 + 0xb0));
    } else {
        in_xd0 = *(u64 *)(a0 + 0xb0);
        dVar5 = 1.4411521878487204e+18;
    }
    if (cVar7 == '\0') {
        fVar4 = SUB84(dVar5, 0) * (float)((u64)dVar5 >> 0x20);
    } else {
        fVar4 = SUB84(dVar5 * dVar5, 0);
    }
    if (cVar8 == '\0') {
        dVar5 = (double)CONCAT44(0x43b40000, fVar4);
    } else {
        dVar5 = -3.740593052227333e-250;
    }
    if (cVar7 == '\0') {
        iVar6 = (int)(SUB84(dVar5, 0) / (float)((u64)dVar5 >> 0x20));
    } else {
        iVar6 = (int)(dVar5 / dVar5);
    }
    ninja_float_calc_256a78(auStack_88, iVar6, puVar3, a3, in_stack_ffffff28);
    puVar2 = auStack_88;
    ninja_update_fields_255d6c(auStack_48, puVar2, puVar3, a3, in_stack_ffffff28);
    njGetMatrix(auStack_88, puVar2, puVar3, a3, in_stack_ffffff28);
    if (cVar8 == '\0') {
        dVar5 = (double)CONCAT44(0x47800000, *(u32 *)(a0 + 0xb8));
    } else {
        in_xd0 = *(u64 *)(a0 + 0xb8);
        dVar5 = 1.4411521878487204e+18;
    }
    if (cVar7 == '\0') {
        fVar4 = SUB84(dVar5, 0) * (float)((u64)dVar5 >> 0x20);
    } else {
        fVar4 = SUB84(dVar5 * dVar5, 0);
    }
    if (cVar8 == '\0') {
        dVar5 = (double)CONCAT44(0x43b40000, fVar4);
    } else {
        dVar5 = -3.740593052227333e-250;
    }
    if (cVar7 == '\0') {
        iVar6 = (int)(SUB84(dVar5, 0) / (float)((u64)dVar5 >> 0x20));
    } else {
        iVar6 = (int)(dVar5 / dVar5);
    }
    njRotateZ(auStack_88, iVar6, puVar3, a3, in_stack_ffffff28);
    ninja_update_fields_255d6c(auStack_48, auStack_88, puVar3, a3, in_stack_ffffff28);
    if (cVar8 == '\0') {
        uStack_94 = *(u32 *)(a0 + 0x6c);
        uStack_90 = *(u32 *)(a0 + 0x70);
        uStack_8c = *(u32 *)(a0 + 0x74);
    } else {
        uStack_94 = (u32) * (u64 *)(a0 + 0x6c);
        uStack_90 = (u32) * (u64 *)(a0 + 0x70);
        uStack_8c = (u32) * (u64 *)(a0 + 0x74);
        auStack_88[0] = (u32)((u64) * (u64 *)(a0 + 0x74) >> 0x20);
    }
    njCalcVector_like(auStack_48, &uStack_94, &uStack_c4, a3, in_stack_ffffff28);
    if (cVar8 == '\0') {
        *(u32 *)(a0 + 0x50) = uStack_c4;
        *(u32 *)(a0 + 0x54) = uStack_c0;
        *(u32 *)(a0 + 0x58) = uStack_bc;
    } else {
        *(u64 *)(a0 + 0x50) = CONCAT44(uStack_c0, uStack_c4);
        *(u64 *)(a0 + 0x54) = CONCAT44(uStack_bc, uStack_c0);
        *(u64 *)(a0 + 0x58) = CONCAT44(uStack_b8, uStack_bc);
    }
    puVar3 = &uStack_b8;
    puVar2 = &uStack_c4;
    njOuterProduct(&uStack_ac, puVar2, puVar3);
    if (cVar8 == '\0') {
        dVar5 = (double)CONCAT44(uStack_b8, *(u32 *)(a0 + 0x84));
    } else {
        in_xd0 = *(u64 *)(a0 + 0x84);
        dVar5 = (double)CONCAT44(uStack_b4, uStack_b8);
    }
    if (cVar7 == '\0') {
        fVar4 = SUB84(dVar5, 0) * (float)((u64)dVar5 >> 0x20);
    } else {
        fVar4 = SUB84(dVar5 * dVar5, 0);
    }
    if (cVar8 == '\0') {
        dVar5 = (double)CONCAT44(*(u32 *)(a0 + 0x44), fVar4);
    } else {
        dVar5 = *(double *)(a0 + 0x44);
    }
    if (cVar7 == '\0') {
        fVar4 = SUB84(dVar5, 0) + (float)((u64)dVar5 >> 0x20);
    } else {
        fVar4 = SUB84(dVar5 + dVar5, 0);
    }
    if (cVar8 == '\0') {
        *(float *)(a0 + 0x44) = fVar4;
        dVar5 = (double)CONCAT44(uStack_b4, *(u32 *)(a0 + 0x84));
    } else {
        *(u64 *)(a0 + 0x44) = in_xd0;
        in_xd0 = *(u64 *)(a0 + 0x84);
        dVar5 = (double)CONCAT44(uStack_b0, uStack_b4);
    }
    if (cVar7 == '\0') {
        fVar4 = SUB84(dVar5, 0) * (float)((u64)dVar5 >> 0x20);
    } else {
        fVar4 = SUB84(dVar5 * dVar5, 0);
    }
    if (cVar8 == '\0') {
        dVar5 = (double)CONCAT44(*(u32 *)(a0 + 0x48), fVar4);
    } else {
        dVar5 = *(double *)(a0 + 0x48);
    }
    if (cVar7 == '\0') {
        fVar4 = SUB84(dVar5, 0) + (float)((u64)dVar5 >> 0x20);
    } else {
        fVar4 = SUB84(dVar5 + dVar5, 0);
    }
    if (cVar8 == '\0') {
        *(float *)(a0 + 0x48) = fVar4;
        dVar5 = (double)CONCAT44(uStack_b0, *(u32 *)(a0 + 0x84));
    } else {
        *(u64 *)(a0 + 0x48) = in_xd0;
        in_xd0 = *(u64 *)(a0 + 0x84);
        dVar5 = (double)CONCAT44(uStack_ac, uStack_b0);
    }
    if (cVar7 == '\0') {
        fVar4 = SUB84(dVar5, 0) * (float)((u64)dVar5 >> 0x20);
    } else {
        fVar4 = SUB84(dVar5 * dVar5, 0);
    }
    if (cVar8 == '\0') {
        dVar5 = (double)CONCAT44(*(u32 *)(a0 + 0x4c), fVar4);
    } else {
        dVar5 = *(double *)(a0 + 0x4c);
    }
    if (cVar7 == '\0') {
        fVar4 = SUB84(dVar5, 0) + (float)((u64)dVar5 >> 0x20);
    } else {
        fVar4 = SUB84(dVar5 + dVar5, 0);
    }
    if (cVar8 == '\0') {
        *(float *)(a0 + 0x4c) = fVar4;
    } else {
        *(u64 *)(a0 + 0x4c) = in_xd0;
    }
    vec3_clear(a0 + 0x80, puVar2, puVar3, a3);
    uVar1 = ninja_vec_2572ec(a0 + 4);
    return uVar1;
}

/*
 * Class_129a24_m4_019e40  0x8c019e40
 */
u32 Class_129a24_m4_019e40(u32 a0, u32 a1, u32 a2, u32 a3, u32 s0) {
    u8 auStack_24[16];
    u8 auStack_14[20];

    Class_1299f8_m4_019588(a0, a1, a2, a3);
    Vec3_ctor_copy(auStack_14, auStack_24, a2, a3);
    Vec3_dtor(auStack_24, 0xffffffff, a2, a3);
    Vec3_ctor_copy(s0, auStack_14, a2, a3);
    Vec3_dtor(auStack_14, 0xffffffff, a2, a3);
    return 0;
}

/*
 * Class_1299f8_dtor_019eb8  0x8c019eb8
 * restores the Class_1299f8 vtable, runs the Class_129a50 base destructor and frees a0 when asked
 */
u32 *Class_1299f8_dtor_019eb8(u32 *a0, u32 a1, u32 a2, u32 a3) {
    u32 ar5_00;
    u32 in_stack_fffffff4;
    u32 ain0;

    ain0 = CONCAT22((short)((u32)in_stack_fffffff4 >> 0x10), (u16)a1);
    if (a0 != NULL) {
        *a0 = &g_8c1299f8;
        ar5_00 = 0;
        Class_129a50_dtor(a0, 0, a2, a3);
        if (0 < (short)ain0) {
            free_if_nonnull(a0);
        }
    }
    return a0;
}

/*
 * Class_1299f8_m3_019f00  0x8c019f00
 */
u32 Class_1299f8_m3_019f00(int a0, u32 a1, u32 a2, u32 a3) {
    double dVar1;
    u32 uVar2;
    u32 ar5_00;
    double dVar3;
    float fVar5;
    u32 in_fr14;
    u64 in_xd0;
    bool bVar6;
    char cVar7;
    char cVar8;
    u64 uStack_6c;
    u8 auStack_58[16];
    float fStack_48;
    float fStack_44;
    u32 uStack_40;
    u32 auStack_3c[4];
    u32 uStack_2c;
    u32 uStack_28;
    u32 uStack_24;
    u32 uStack_20;
    u32 uStack_1c;
    u32 uStack_18;
    u32 uStack_14;
    u32 uStack_10;
    float fVar4;

    cVar8 = '\0';
    cVar7 = '\0';
    uVar2 = a1;
    Vec3_ctor_zero(&uStack_1c, a1, a2);
    Vec3_ctor_zero(&uStack_2c, a1, a2);
    Vec3_ctor_xyz(auStack_3c, a1, a2, a3);
    fVar5 = 0.0;
    Vec3_sub(uVar2, auStack_3c, a2, a3, auStack_58);
    Vec3_assign(&uStack_1c, auStack_58, a2, a3);
    Vec3_dtor(auStack_58, 0xffffffff, a2, a3);
    Class_1299f8_vec_023c30(&uStack_1c, a0 + 0x80, a2, a3, (int)&uStack_6c + 4);
    Vec3_assign(&uStack_2c, (int)&uStack_6c + 4, a2, a3);
    ar5_00 = 0xffffffff;
    Vec3_dtor((int)&uStack_6c + 4, 0xffffffff, a2, a3);
    if (cVar8 == '\0') {
        dVar3 = (double)CONCAT44(uStack_2c, uStack_1c);
    } else {
        in_xd0 = CONCAT44(uStack_18, uStack_1c);
        dVar3 = (double)CONCAT44(uStack_28, uStack_2c);
    }
    if (cVar7 == '\0') {
        fStack_48 = SUB84(dVar3, 0) - (float)((u64)dVar3 >> 0x20);
    } else {
        fStack_48 = SUB84(dVar3 - dVar3, 0);
    }
    if (cVar8 == '\0') {
        dVar3 = (double)CONCAT44(uStack_28, uStack_18);
    } else {
        fStack_48 = (float)in_xd0;
        in_xd0 = CONCAT44(uStack_14, uStack_18);
        dVar3 = (double)CONCAT44(uStack_24, uStack_28);
    }
    if (cVar7 == '\0') {
        fStack_44 = SUB84(dVar3, 0) - (float)((u64)dVar3 >> 0x20);
    } else {
        fStack_44 = SUB84(dVar3 - dVar3, 0);
    }
    if (cVar8 == '\0') {
        dVar3 = (double)CONCAT44(uStack_24, uStack_14);
    } else {
        fStack_44 = (float)in_xd0;
        in_xd0 = CONCAT44(uStack_10, uStack_14);
        dVar3 = (double)CONCAT44(uStack_20, uStack_24);
    }
    if (cVar7 == '\0') {
        fVar4 = (float)((u64)dVar3 >> 0x20);
        dVar3 = (double)CONCAT44(fVar4, SUB84(dVar3, 0) - fVar4);
    } else {
        dVar3 = dVar3 - dVar3;
    }
    if (cVar8 == '\0') {
        uStack_40 = SUB84(dVar3, 0);
    } else {
        uStack_40 = (u32)in_xd0;
        auStack_3c[0] = (u32)((u64)in_xd0 >> 0x20);
    }
    noop_2570d8(&fStack_48);
    dVar1 = dVar3;
    if (cVar8 == '\0') {
        fVar5 = (float)((u64)dVar3 >> 0x20);
        uStack_6c = (double)CONCAT44(uStack_6c._4_4_, fVar5);
        dVar1 = uStack_6c;
    }
    uStack_6c = dVar1;
    njUnitVector(&fStack_48, ar5_00, a2, a3, uVar2);
    if (cVar8 == '\0') {
        *(float *)(a0 + 0x50) = fStack_48;
        *(float *)(a0 + 0x54) = fStack_44;
        *(u32 *)(a0 + 0x58) = uStack_40;
        dVar3 = (double)CONCAT44(0x43fa0000, SUB84(dVar3, 0));
    } else {
        *(u64 *)(a0 + 0x50) = CONCAT44(fStack_44, fStack_48);
        *(u64 *)(a0 + 0x54) = CONCAT44(uStack_40, fStack_44);
        *(u64 *)(a0 + 0x58) = CONCAT44(auStack_3c[0], uStack_40);
        dVar3 = 1.6066918595405548e+73;
    }
    if (cVar7 == '\0') {
        bVar6 = fVar5 < (float)((u64)dVar3 >> 0x20);
    } else {
        bVar6 = (double)CONCAT44(in_fr14, fVar5) < dVar3;
    }
    if (bVar6) {
        Vec3_dtor(auStack_3c, 0xffffffff, a2, a3);
        Vec3_dtor(&uStack_2c, 0xffffffff, a2, a3);
        uVar2 = Vec3_dtor(&uStack_1c, 0xffffffff, a2, a3);
    } else {
        if (cVar8 == '\0') {
            dVar3 = (double)CONCAT44(uStack_2c, *(u32 *)(a0 + 0x44));
        } else {
            in_xd0 = *(u64 *)(a0 + 0x44);
            dVar3 = (double)CONCAT44(uStack_28, uStack_2c);
        }
        if (cVar7 == '\0') {
            fVar5 = SUB84(dVar3, 0) + (float)((u64)dVar3 >> 0x20);
        } else {
            fVar5 = SUB84(dVar3 + dVar3, 0);
        }
        if (cVar8 == '\0') {
            *(float *)(a0 + 0x44) = fVar5;
            dVar3 = (double)CONCAT44(uStack_28, *(u32 *)(a0 + 0x48));
        } else {
            *(u64 *)(a0 + 0x44) = in_xd0;
            in_xd0 = *(u64 *)(a0 + 0x48);
            dVar3 = (double)CONCAT44(uStack_24, uStack_28);
        }
        if (cVar7 == '\0') {
            fVar5 = SUB84(dVar3, 0) + (float)((u64)dVar3 >> 0x20);
        } else {
            fVar5 = SUB84(dVar3 + dVar3, 0);
        }
        if (cVar8 == '\0') {
            *(float *)(a0 + 0x48) = fVar5;
            dVar3 = (double)CONCAT44(uStack_24, *(u32 *)(a0 + 0x4c));
        } else {
            *(u64 *)(a0 + 0x48) = in_xd0;
            in_xd0 = *(u64 *)(a0 + 0x4c);
            dVar3 = (double)CONCAT44(uStack_20, uStack_24);
        }
        if (cVar7 == '\0') {
            fVar5 = SUB84(dVar3, 0) + (float)((u64)dVar3 >> 0x20);
        } else {
            fVar5 = SUB84(dVar3 + dVar3, 0);
        }
        if (cVar8 == '\0') {
            *(float *)(a0 + 0x4c) = fVar5;
        } else {
            *(u64 *)(a0 + 0x4c) = in_xd0;
        }
        Vec3_dtor(auStack_3c, 0xffffffff, a2, a3);
        Vec3_dtor(&uStack_2c, 0xffffffff, a2, a3);
        uVar2 = Vec3_dtor(&uStack_1c, 0xffffffff, a2, a3);
    }
    return uVar2;
}

/*
 * Class_1299ec_ctor  0x8c01a0cc
 * stores the Class_1299ec vtable in a0 and initialises the object
 * called by: Class_12b3b8_ctor
 */
u32 *Class_1299ec_ctor(u32 *a0) {
    *a0 = (&DATA_8c1299ec);
    Vec3_set_zero((int)a0 + 0x15c);
    return a0;
}

/*
 * Class_1299ec_dtor  0x8c01a0f8
 * stores the vtable 0x8c1299ec
 * called by: Class_12b3b8_dtor
 */
u32 *Class_1299ec_dtor(u32 *a0, u32 a1, u32 a2, u32 a3) {
    u32 ar5_00;
    u32 in_stack_fffffff4;
    u32 ain0;

    ain0 = CONCAT22((short)((u32)in_stack_fffffff4 >> 0x10), (u16)a1);
    if (a0 != NULL) {
        *a0 = &g_8c1299ec;
        ar5_00 = 0xffffffff;
        object_dtor_delete(a0 + 0x57, 0xffffffff, a2, a3);
        if (0 < (short)ain0) {
            free_if_nonnull(a0);
        }
    }
    return a0;
}

/*
 * Class_1299f8_m1_01a148  0x8c01a148
 */
u32 Class_1299f8_m1_01a148(int a0) {
    u32 uVar1;

    uVar1 = ninja_vec_2572ec(a0 + 4);
    return uVar1;
}

/*
 * Class_1299f8_m2_01a164  0x8c01a164
 */
u32 Class_1299f8_m2_01a164(u32 a0) {
    u32 uVar1;

    uVar1 = game_calls_update_fields_01a180(a0);
    return uVar1;
}

/*
 * game_calls_update_fields_01a180  0x8c01a180
 * area name: game code; nothing names its area yet; behaviour name: its callees mostly do: update_fields
 * called by: Class_1299f8_m2_01a164, Class_129a24_m2_01a1d8
 */
u32 game_calls_update_fields_01a180(int a0) {
    u32 uVar1;

    uVar1 = ninja_update_fields_25699c(a0 + 4);
    return uVar1;
}

/*
 * noop_01a19c  0x8c01a19c
 */
u32 noop_01a19c(void) {
    u32 in_r0;

    return in_r0;
}

/*
 * noop_01a1a0  0x8c01a1a0
 */
u32 noop_01a1a0(void) {
    u32 in_r0;

    return in_r0;
}

/*
 * ret_const_1_01a1a4  0x8c01a1a4
 */
u32 ret_const_1_01a1a4(void) {
    return 1;
}

/*
 * clear_field_bc  0x8c01a1ac
 */
int clear_field_bc(int a0) {
    int iVar1;

    iVar1 = 0xbc;
    *(u32 *)(0xbc + a0) = 0;
    return iVar1;
}

/*
 * set_field_bc_to_1  0x8c01a1bc
 */
int set_field_bc_to_1(int a0) {
    int iVar1;

    iVar1 = 0xbc;
    *(u32 *)(0xbc + a0) = 1;
    return iVar1;
}

/*
 * get_field_bc_01a1cc  0x8c01a1cc
 */
u32 get_field_bc_01a1cc(int a0) {
    return *(u32 *)(0xbc + a0);
}

/*
 * Class_129a24_m2_01a1d8  0x8c01a1d8
 */
int Class_129a24_m2_01a1d8(int a0, u32 a1, u32 a2, u32 a3) {
    int iVar1;

    game_calls_update_fields_01a180(a0);
    Vec3_assign_f_023d7c(a0 + 0xb0, a1);
    Vec3_assign_f(a0 + 0x90, a1, a2, a3);
    iVar1 = 0xbc;
    *(u32 *)(0xbc + a0) = 1;
    return iVar1;
}

/*
 * Class_129a24_m3_01a230  0x8c01a230
 */
u32 Class_129a24_m3_01a230(int a0) {
    u32 r5;
    u32 r6;
    u32 r7;
    u32 uVar1;

    uVar1 = camera_set_direction_to(a0 + 4, r5, r6, r7, a0);
    return uVar1;
}

/*
 * static_init_vec3s_279140  0x8c01a260
 * static initialiser: builds four global Vec3 constants (8c279140..8c279164) and registers their destructors
 */
u32 static_init_vec3s_279140(u32 unused_a0, u32 a1, u32 a2, u32 a3) {
    u32 uVar1;
    u32 uVar2;
    u8 *puVar3;

    uVar1 = Vec3_ctor_xyz((&DATA_8c125948), a1, a2, a3);
    puVar3 = (&Vec3_dtor);
    uVar2 = 0x8c279140;
    global_list_push(uVar1, (&Vec3_dtor), 0x8c279140, a3);
    uVar1 = Vec3_ctor_xyz((&DATA_8c125958), puVar3, uVar2, a3);
    puVar3 = (&Vec3_dtor);
    uVar2 = 0x8c27914c;
    global_list_push(uVar1, (&Vec3_dtor), 0x8c27914c, a3);
    uVar1 = Vec3_ctor_xyz((&DATA_8c125968), puVar3, uVar2, a3);
    puVar3 = (&Vec3_dtor);
    uVar2 = 0x8c279158;
    global_list_push(uVar1, (&Vec3_dtor), 0x8c279158, a3);
    uVar2 = Vec3_ctor_xyz((&DATA_8c125978), puVar3, uVar2, a3);
    uVar2 = global_list_push(uVar2, (&Vec3_dtor), 0x8c279164, a3);
    return uVar2;
}

/*
 * memcard_manager_init  0x8c01a308
 * marks all 128 file records unused, resets the drive and state fields and the count limit (10)
 * called by: game_save_01e504
 */
u32 *memcard_manager_init(u32 *a0) {
    u32 uVar1;

    for (uVar1 = 0; uVar1 < 0x80; uVar1 = uVar1 + 1) {
        *(u32 *)((int)a0 + 0x244c + uVar1 * 0x28) = 0xffffffff;
    }
    *a0 = 0xffffffff;
    g_8c2791b4 = 0xffffffff;
    a0[1] = 0xffffffff;
    a0[2] = 0xffffffff;
    g_8c2791b0 = 0;
    a0[3] = 10;
    a0[6] = 0;
    a0[7] = 0;
    set_fields_24_20_wrap(a0);
    return a0;
}

/*
 * free_if_nonnull_wrap_01a384  0x8c01a384
 * called by: game_release_01e560
 */
int free_if_nonnull_wrap_01a384(int a0, u32 a1, u32 a2, u32 a3) {
    u32 in_stack_fffffff4;

    if ((a0 != 0) && (0 < (short)a1)) {
        free_if_nonnull(a0, a1, a2, a3, CONCAT22((short)((u32)in_stack_fffffff4 >> 0x10), (short)a1));
    }
    return a0;
}

/*
 * Class_129a24_load_01a3b4  0x8c01a3b4
 * area name: sits between Class_129a24 functions (same compilation unit); behaviour name: mostly calls load functions
 * called by: input_peripheral_state_machine
 */
u32 Class_129a24_load_01a3b4(u32 a0, u32 a1, u32 a2) {
    int iVar1;

    iVar1 = vmu_load_user_icon(a0, a1, a2);
    return (u32)(iVar1 == 3);
}

/*
 * vmu_load_user_icon  0x8c01a3e4
 * reads VM_User_Icon.VMI for the memory card in use
 * called by: Class_129a24_load_01a3b4
 * strings: "VM_User_Icon.VMI"; "VM_User_Icon.VMI"
 */
int vmu_load_user_icon(int *a0, int a1, int a2) {
    u8 *r7;
    int iVar1;
    u8 *ar5_00;
    u8 *ar6_00;
    int *ar7_00;
    u32 uVar2;

    if ((a1 != a0[1]) || (g_8c2791b0 == 0)) {
        g_8c2791b0 = 0;
        a0[1] = a1;
        if (a1 == 6) {
            a1 = 4;
            g_8c2791b4 = 2;
            a0[2] = 7;
        } else if (a1 == 0xc) {
            a1 = 0x10;
            g_8c2791b4 = 4;
            a0[2] = 0xd;
        } else if (a1 == 0x12) {
            a1 = 0x40;
            g_8c2791b4 = 6;
            a0[2] = 0x13;
        } else {
            a1 = 1;
            g_8c2791b4 = 0;
            a0[2] = 1;
        }
        a2 = (int)a0 + 0x62c;
        r7 = (&game_calls_2_01c998);
        iVar1 = shinobi_copy_1fbd2c(0xf, a1, a2, (&game_calls_2_01c998));
        if (iVar1 != 0) {
            return g_8c2791b0;
        }
        uVar2 = 0;
        while ((uVar2 <= 0xffff && (g_8c2791b0 != 1))) {
            uVar2 = uVar2 + 1;
        }
        if (0xffff <= uVar2) {
            return g_8c2791b0;
        }
    }
    if (g_8c2791b0 == 1) {
        iVar1 = thunk_FUN_8c1fda7e();
        if (iVar1 == 0) {
            return g_8c2791b0;
        }
        g_8c2791b0 = 2;
    }
    if (g_8c2791b0 == 2) {
        iVar1 = thunk_FUN_8c1ffcc2();
        if (iVar1 != 0) {
            return g_8c2791b0;
        }
        g_8c2791b0 = 3;
    }
    if ((-1 < *a0) && (*(int *)((int)a0 + 0x2450 + *a0 * 0x28) == 3)) {
        *(u32 *)((int)a0 + 0x2450 + *a0 * 0x28) = 2;
    }
    iVar1 = bios_input_1f3b5c(a0[2]);
    if (iVar1 == 0) {
        a0[5] = 0;
    } else if (iVar1 == 1) {
        a0[5] = 3;
    } else {
        a0[5] = 0;
    }
    ar7_00 = a0 + 4;
    ar6_00 = (&DATA_8c12fb18) + 0x11;
    ar5_00 = "VM_User_Icon.VMI";
    iVar1 = retry_until_done_021370(0x8c3eb334, "VM_User_Icon.VMI", ar6_00, ar7_00);
    if (iVar1 == 0) {
        a0[4] = 0;
    }
    a0[6] = 0;
    game_save_01be1c(a0, ar5_00, ar6_00, ar7_00);
    return g_8c2791b0;
}

/*
 * game_save_01a5cc  0x8c01a5cc
 * area name: game code; nothing names its area yet; behaviour name: mostly calls save functions
 * called by: input_peripheral_state_machine, memcard_flush_and_close
 */
u32 game_save_01a5cc(u32 a0, u32 unused_a1, u32 unused_a2, u32 a3) {
    u32 uVar1;
    int iVar2;

    if (g_8c2791b0 == 3) {
        iVar2 = thunk_FUN_8c1fda7e();
        if (iVar2 == 0) {
            g_8c2791b0 = 1;
            uVar1 = 0;
        } else {
            iVar2 = memcard_tick(a0, unused_a1, unused_a2, a3);
            if (iVar2 == 3) {
                uVar1 = 1;
            } else {
                uVar1 = 0;
            }
        }
    } else {
        uVar1 = 0;
    }
    return uVar1;
}

/*
 * memcard_tick  0x8c01a630
 * refreshes the 0x600-byte working buffer (and the 0x210-byte icon data on a timer), redraws when it changed and runs
 * the current memory card request called by: game_save_01a5cc, wait_state_rtc_10s
 */
u32 memcard_tick(int *a0, u32 unused_a1, u32 unused_a2, u32 a3) {
    u32 uVar1;
    int iVar2;
    int *ar5_00;
    bool bVar3;

    ar5_00 = (int *)a0[9];
    uVar1 = 0x600;
    memmove(a0 + 0xb, ar5_00, 0x600);
    bVar3 = a0[8] == 1;
    if (bVar3) {
        a0[8] = 0;
    }
    if (0 < a0[7]) {
        a0[7] = a0[7] + -1;
        if (a0[7] < 1) {
            if (a0[6] == 0) {
                bVar3 = true;
            }
        } else {
            ar5_00 = (int *)a0[10];
            uVar1 = 0x600;
            memmove(a0 + 0xb, ar5_00, 0x600);
            bVar3 = true;
        }
    }
    if (0 < a0[6]) {
        if ((a0[6] == 0x1e) || (bVar3)) {
            ar5_00 = (int *)(&DATA_8c12f900);
            uVar1 = 0x210;
            memmove((int)a0 + 0x41c, (&DATA_8c12f900), 0x210);
            bVar3 = true;
        }
        a0[6] = a0[6] + -1;
        if (a0[6] < 1) {
            bVar3 = true;
        }
    }
    if (bVar3) {
        ar5_00 = a0 + 0xb;
        game_input_01c8c8(a0, ar5_00, uVar1, a3);
    }
    if (*a0 < 0) {
        uVar1 = g_8c2791b0;
    } else {
        iVar2 = *(int *)((int)a0 + 0x2450 + *a0 * 0x28);
        if (iVar2 == 2) {
            memcard_run_request(a0, ar5_00, uVar1, a3);
        } else if (iVar2 == 3) {
            memcard_poll_slot_busy(a0);
        } else {
            game_calls_scan_loop_01a98c(a0, ar5_00, uVar1, a3);
        }
        uVar1 = g_8c2791b0;
    }
    return uVar1;
}

/*
 * memcard_run_request  0x8c01a760
 * runs the request at the head of the memory-card queue through the handler for its op (0..13)
 * called by: memcard_tick
 */
u32 memcard_run_request(int *a0, u32 a1, u32 a2, u32 a3) {
    u32 uVar1;
    int iVar2;

    iVar2 = a0[*a0 * 10 + 0x915];
    uVar1 = 0xd;
    if ((iVar2 < 0xe) && (-1 < iVar2)) {
        switch (iVar2) {
        case 0:
            uVar1 = memcard_op_load(a0);
            break;
        case 1:
            uVar1 = memcard_op_load_raw(a0);
            break;
        case 2:
            iVar2 = game_scan_loop_01aa94(a0);
            if (iVar2 == 1) {
                uVar1 = game_calls_scan_loop_01a98c(a0, a1, a2, a3);
            } else {
                set_field_18_to_1e(a0);
                uVar1 = memcard_queue_op0c_with_date(a0, a1, a2, a3);
            }
            break;
        case 3:
            set_field_18_to_1e(a0);
            uVar1 = memcard_queue_op0d_with_date(a0, a1, a2, a3);
            break;
        case 4:
            set_field_18_to_1e(a0);
            uVar1 = memcard_queue_op14(a0);
            break;
        case 5:
            uVar1 = memcard_op_delete(a0);
            break;
        case 6:
            uVar1 = memcard_op_exist(a0);
            break;
        case 7:
            uVar1 = memcard_op_game_name_check(a0, a1, a2, a3);
            break;
        case 8:
            uVar1 = memcard_op_file_size(a0);
            break;
        case 9:
            uVar1 = memcard_op_free_blocks(a0);
            break;
        case 10:
            uVar1 = memcard_op_condition_a(a0);
            break;
        case 0xb:
            uVar1 = memcard_op_condition_b(a0);
            break;
        case 0xc:
            uVar1 = memcard_op_lcd_a(a0, a1, a2, a3);
            break;
        case 0xd:
            uVar1 = memcard_op_lcd_b(a0, a1, a2, a3);
        }
    }
    return uVar1;
}

/*
 * memcard_poll_slot_busy  0x8c01a900
 * polls the memory-card slot: when idle runs the next step, else records the slot's busy result in the current record
 * called by: memcard_tick
 */
int memcard_poll_slot_busy(int *a0) {
    int iVar1;
    int iVar2;

    iVar1 = slot80_busy_error(g_8c2791b4);
    if (iVar1 == -1) {
        iVar1 = game_update_fields_01c92c(a0);
    } else {
        iVar2 = shinobi_uses_slot80_get_active_1fc5de(g_8c2791b4);
        iVar1 = 0x2450;
        if (iVar2 == 0) {
            *(u32 *)((int)a0 + 0x2450 + *a0 * 0x28) = 1;
        } else {
            *(u32 *)((int)a0 + 0x2450 + *a0 * 0x28) = 0;
        }
    }
    return iVar1;
}

/*
 * game_calls_scan_loop_01a98c  0x8c01a98c
 * area name: game code; nothing names its area yet; behaviour name: its callees mostly do: scan_loop
 * called by: memcard_run_request, memcard_tick
 */
int game_calls_scan_loop_01a98c(int *a0, u32 a1, u32 a2, u32 a3) {
    int iVar1;
    int iVar2;

    while (true) {
        iVar1 = *(int *)((int)a0 + 0x2454 + *a0 * 0x28);
        if ((((iVar1 == 2) || (iVar1 == 3)) || (iVar1 == 4)) && (*(int *)((int)a0 + 0x2470 + *a0 * 0x28) != 0)) {
            (*(code *)(&free_sys))(*(u32 *)((int)a0 + 0x2470 + *a0 * 0x28), a1, a2, a3);
        }
        iVar2 = *a0;
        iVar1 = *(int *)((int)a0 + 0x2458 + *a0 * 0x28);
        *(u32 *)((int)a0 + 0x244c + *a0 * 0x28) = 0xffffffff;
        *a0 = iVar1;
        iVar1 = *(int *)((int)a0 + 0x2454 + *a0 * 0x28);
        if ((iVar1 != 2) || (iVar1 = game_scan_loop_01aa94(a0), iVar1 != 1))
            break;
        *(u32 *)((int)a0 + 0x2450 + iVar2 * 0x28) = 1;
    }
    return iVar1;
}

/*
 * game_scan_loop_01aa94  0x8c01aa94
 * area name: game code; nothing names its area yet; behaviour name: a loop that only reads
 * called by: game_calls_scan_loop_01a98c, memcard_run_request
 */
u32 game_scan_loop_01aa94(int *a0) {
    int iVar1;

    if (-1 < *a0) {
        iVar1 = *(int *)((int)a0 + 0x2458 + *a0 * 0x28);
        while ((-1 < iVar1 && (*(int *)((int)a0 + 0x244c + iVar1 * 0x28) != -1))) {
            if (*(int *)((int)a0 + 0x2454 + iVar1 * 0x28) == 2) {
                return 1;
            }
            iVar1 = *(int *)((int)a0 + 0x2458 + iVar1 * 0x28);
        }
    }
    return 0;
}

/*
 * memcard_flush_and_close  0x8c01ab2c
 * runs the memory-card queue until it is empty, then shuts the card layer down (state 0)
 * called by: confirm_exit_save, memcard_flush_and_close_8c3dd7dc
 */
u32 memcard_flush_and_close(int *a0, u32 unused_a1, u32 unused_a2, u32 a3) {
    int iVar1;
    int *ar4_00;

    do {
        ar4_00 = a0;
        iVar1 = game_save_01a5cc(a0, unused_a1, unused_a2, a3);
        if (iVar1 == 0)
            break;
    } while (-1 < *a0);
    if (0 < g_8c2791b0) {
        vmu_system_shutdown(ar4_00, unused_a1, unused_a2, a3);
    }
    g_8c2791b0 = 0;
    return 1;
}

/*
 * memcard_queue_request  0x8c01ab78
 * appends a request (op a1, file name a2) to the 128-entry memory-card queue; returns its id or -1
 * called by: memcard_queue_condition_a, memcard_queue_condition_b, memcard_queue_delete, memcard_queue_exist,
 * memcard_queue_file_size, memcard_queue_free_blocks, memcard_queue_game_name_check, memcard_queue_lcd_b (+5 more)
 */
u32 memcard_queue_request(u32 *a0, u32 a1, u32 a2, u32 a3) {
    u32 uVar1;
    u32 uVar2;

    uVar2 = 0;
    while ((uVar2 < 0x80 && (a0[uVar2 * 10 + 0x913] != 0xffffffff))) {
        uVar2 = uVar2 + 1;
    }
    if (uVar2 < 0x80) {
        if ((int)*a0 < 0) {
            *a0 = uVar2;
        } else {
            uVar1 = *a0;
            while (-1 < (int)a0[uVar1 * 10 + 0x916]) {
                uVar1 = a0[uVar1 * 10 + 0x916];
            }
            a0[uVar1 * 10 + 0x916] = uVar2;
        }
        strcpy(a0 + uVar2 * 10 + 0x917, a2);
        a0[uVar2 * 10 + 0x915] = a1;
        a0[uVar2 * 10 + 0x914] = 2;
        a0[uVar2 * 10 + 0x916] = 0xffffffff;
        a0[uVar2 * 10 + 0x913] = a0[3];
        if ((int)a0[3] < 0x10000) {
            a0[3] = a0[3] + 1;
        } else {
            a0[3] = 10;
        }
    } else {
        uVar2 = 0xffffffff;
    }
    return uVar2;
}

/*
 * wait_state_rtc_10s  0x8c01acd0
 * runs the sound server while slot a1's state (+0x2450) is 2 or 3, for at most 10 RTC seconds
 * called by: game_uses_memcard_delete_start_01bb00, game_uses_memcard_save_start_01ae98, memcard_check_file_wait,
 * memcard_file_data_size_wait, memcard_free_bytes_wait, memcard_load_raw_wait, memcard_load_wait,
 * memcard_save_game_file (+2 more)
 */
u32 wait_state_rtc_10s(int a0, int a1, u32 a2, u32 a3) {
    int iVar1;
    u32 *ar5_00;
    u32 uStack_28;
    u32 uStack_24;
    u8 auStack_20[10];
    u8 auStack_16[14];

    rtc_get_date(auStack_16, a1, a2, a3);
    ar5_00 = &uStack_24;
    date_to_rtc_seconds(auStack_16, ar5_00, a2);
    uStack_24 = uStack_24 + 10;
    while (true) {
        sound_server_2(a0, ar5_00, a2, a3);
        rtc_get_date(auStack_20, ar5_00, a2, a3);
        ar5_00 = &uStack_28;
        date_to_rtc_seconds(auStack_20, ar5_00, a2);
        if (uStack_24 < uStack_28) {
            return 0;
        }
        iVar1 = *(int *)(0x2450 + a1 * 0x28 + a0);
        if ((iVar1 != 2) && (iVar1 != 3))
            break;
        memcard_tick(a0, ar5_00, a2, a3);
    }
    return *(u32 *)(0x2450 + a1 * 0x28 + a0);
}

/*
 * Class_12b388_test_01ad88  0x8c01ad88
 * area name: only called from Class_12b388 methods; behaviour name: returns the result of a comparison
 * called by: Class_12b388_m1_0c5c08, confirm_exit_save
 */
u32 Class_12b388_test_01ad88(int *a0) {
    if (*a0 < 0) {
        return 0;
    }
    return 1;
}

/*
 * memcard_request_status  0x8c01ad9c
 * status of request a1 (4 when there is no such request)
 * called by: game_uses_free_if_nonnull_wrap_0e8280, game_uses_get_field_24_0e5238
 */
u32 memcard_request_status(int a0, u32 a1) {
    int iVar1;
    u32 uVar2;

    iVar1 = file_slot_find(a0, a1);
    if (iVar1 < 0) {
        uVar2 = 4;
    } else {
        uVar2 = *(u32 *)(0x2450 + iVar1 * 0x28 + a0);
    }
    return uVar2;
}

/*
 * file_slot_find  0x8c01ade8
 * index of the 0x28-byte slot (128 of them at +0x244c) whose id is a1; -1 if none
 * called by: game_uses_memcard_delete_start_01bb00, game_uses_memcard_save_start_01ae98, memcard_request_status,
 * memcard_save_vm_wait
 */
u32 file_slot_find(int a0, int a1) {
    int iVar1;

    iVar1 = 0;
    while (true) {
        if (0x80 <= iVar1) {
            return 0xffffffff;
        }
        if (*(int *)(0x244c + iVar1 * 0x28 + a0) == a1)
            break;
        iVar1 = iVar1 + 1;
    }
    return iVar1;
}

/*
 * memcard_save_start  0x8c01ae28
 * starts writing a file when the card is ready (state 3); returns the request handle or -1
 * called by: game_uses_memcard_save_start_01ae98, save_write_step
 */
u32 memcard_save_start(int a0, u32 a1, u32 a2, u32 a3) {
    u32 uVar1;
    int iVar2;

    if (g_8c2791b0 == 3) {
        iVar2 = memcard_queue_save(a0, a1, a2, a3);
        if (iVar2 < 0) {
            uVar1 = 0xffffffff;
        } else {
            uVar1 = *(u32 *)(0x244c + iVar2 * 0x28 + a0);
        }
    } else {
        uVar1 = 0xffffffff;
    }
    return uVar1;
}

/*
 * game_uses_memcard_save_start_01ae98  0x8c01ae98
 * area name: game code; nothing names its area yet; behaviour name: its main named callee is memcard_save_start
 * called by: game_uses_identity_0b726c, save_check_files
 */
u32 game_uses_memcard_save_start_01ae98(u32 a0, u32 a1, u32 a2, u32 a3) {
    u32 uVar1;
    int ar5_00;

    if (g_8c2791b0 == 3) {
        ar5_00 = memcard_save_start(a0, a1, a2, a3);
        if (ar5_00 < 0) {
            uVar1 = 0;
        } else {
            uVar1 = file_slot_find(a0, ar5_00);
            uVar1 = wait_state_rtc_10s(a0, uVar1, a2, a3);
        }
    } else {
        uVar1 = 0;
    }
    return uVar1;
}

/*
 * memcard_queue_save  0x8c01af14
 * queues a save of a3 bytes from a2 as file a1 with a VMS header (op 2); request id or -1
 * called by: memcard_save_start
 */
int memcard_queue_save(int a0, u32 a1, u32 a2, u32 a3) {
    int iVar1;
    int ar4_00;
    u32 ar5_00;
    int iVar2;
    u32 uVar3;
    u8 *ar5_01;
    u32 uVar4;
    u32 ar7_00;
    u32 in_stack_00000000;
    u32 in_stack_00000004;
    u8 auStack_80[18];
    u8 auStack_6e[50];
    int iStack_3c;
    int iStack_38;
    u16 uStack_34;
    u16 uStack_2c;
    u32 uStack_24;

    uVar3 = 2;
    ar7_00 = a3;
    uVar4 = a1;
    iVar1 = memcard_queue_request(a0, 2, a1, a3);
    if (iVar1 < 0) {
        iVar1 = -1;
    } else {
        ar4_00 = malloc_thunk(0x5380, uVar3, a1, ar7_00);
        if (ar4_00 == 0) {
            iVar1 = -1;
        } else {
            memset(ar4_00, 0, 0x5380);
            memmove(ar4_00, a2, a3);
            uVar3 = 0x60;
            memset(auStack_80, 0, 0x60);
            strcpy(auStack_80, in_stack_00000000);
            strcpy(auStack_6e, in_stack_00000004);
            iStack_3c = *(int *)(a0 + 0x10) + 0xa0;
            iStack_38 = *(int *)(a0 + 0x10) + 0xc0;
            uStack_34 = 1;
            uStack_24 = 0x5380;
            uVar4 = 0x5380;
            ar5_00 = (u32)uStack_2c;
            iVar2 = buCalcBackupFileSize_like(1, ar5_00, 0x5380);
            iVar2 = malloc_thunk(iVar2 << 9, ar5_00, uVar4, ar7_00);
            if (iVar2 == 0) {
                iVar1 = -1;
            } else {
                ar5_01 = auStack_80;
                uVar3 = shinobi_copy_2015b0(iVar2, ar5_01, uVar4, ar7_00);
                free_sys(ar4_00, ar5_01, uVar4, ar7_00);
                *(u32 *)(iVar1 * 0x28 + a0 + 0x246c) = uVar3;
                *(int *)(iVar1 * 0x28 + a0 + 0x2470) = iVar2;
            }
        }
    }
    return iVar1;
}

/*
 * game_release_01b0a8  0x8c01b0a8
 * area name: game code; nothing names its area yet; behaviour name: mostly calls release functions
 * called by: game_uses_identity_0b726c, save_check_files
 */
u32 game_release_01b0a8(u32 a0, u32 a1, u32 a2, u32 a3) {
    u32 uVar1;
    int iVar2;
    u32 in_stack_ffffffe4;
    u32 uStack_10;
    u32 auStack_c[2];

    if (g_8c2791b0 == 3) {
        iVar2 = (*(code *)(&file_load_to_buffer))(0x8c3eb334, a1, (&DATA_8c12fb18) + 0x11, auStack_c);
        if (iVar2 == 0) {
            uVar1 = 0;
        } else {
            (*(code *)(&memcard_save_game_file))(a0, a1, auStack_c[0], uStack_10, a2, a3, a0, a2, a3,
                                                 in_stack_ffffffe4);
            CDCGD_release_request_wrap_021234(0x8c3eb334, a1, (&DATA_8c12fb18) + 0x11, 1);
            uVar1 = 1;
        }
    } else {
        uVar1 = 0;
    }
    return uVar1;
}

/*
 * memcard_save_game_file  0x8c01b144
 * checks for the game file (deleting it when needed), makes room on the card, writes the file with its icon and waits
 * for it to finish
 */
u32 memcard_save_game_file(u32 a0, u32 a1, u32 a2, u32 a3, u32 s0, u32 s4, u32 s8, u32 s12, u32 s16, u32 s20) {
    int iVar1;
    u32 uVar2;
    u32 uVar3;
    int ar5_00;
    u32 ar7_00;
    int aiStack_20[3];
    u32 uStack_c;

    uStack_c = 1;
    iVar1 = -0x22c;
    *(u32 *)((int)aiStack_20 + iVar1 + 8) = a2;
    ar7_00 = a3;
    uVar2 = bu_get_game_file_name(g_8c2791b4, a1);
    *(u32 *)((int)&s16 + iVar1) = uVar2;
    if (0xffffff05 != *(int *)((int)&s16 + iVar1)) {
        if (*(int *)((int)&s16 + iVar1) != 0) {
            return 0;
        }
        uVar2 = game_uses_memcard_delete_start_01bb00(a0, a1, a2, ar7_00);
        *(u32 *)((int)&s12 + iVar1) = uVar2;
        if (*(int *)((int)&s12 + iVar1) == 0) {
            return 0;
        }
    }
    uVar3 = 1;
    uVar2 = buGetFreeBlocks_like(g_8c2791b4, 1);
    *(u32 *)((int)&s8 + iVar1) = uVar2;
    *(u32 *)(&stack0xffffffec + iVar1) = *(u32 *)((int)&s8 + iVar1);
    if ((int)((*(int *)(&stack0xffffffec + iVar1) * 0x200 - 0x280) - a3) < 0) {
        uVar2 = memcard_free_bytes_wait(a0, uVar3, a2, ar7_00);
        *(u32 *)((int)&s4 + iVar1) = uVar2;
        if (*(u32 *)((int)&s4 + iVar1) < a3) {
            return 0;
        }
        ar5_00 = (int)&s20 + iVar1;
        uVar2 = slot80_queue_op_09(g_8c2791b4, ar5_00);
        *(u32 *)((int)&s0 + iVar1) = uVar2;
        if (*(int *)((int)&s0 + iVar1) != 0) {
            return 0;
        }
        do {
            uVar2 = slot80_busy_error(g_8c2791b4);
            *(u32 *)(&stack0xfffffffc + iVar1) = uVar2;
        } while (*(int *)(&stack0xfffffffc + iVar1) == -1);
        uVar2 = shinobi_uses_slot80_get_active_1fc5de(g_8c2791b4);
        *(u32 *)(&stack0xfffffff8 + iVar1) = uVar2;
        if (*(int *)(&stack0xfffffff8 + iVar1) != 0) {
            return 0;
        }
    }
    *(u32 *)((int)aiStack_20 + iVar1 + 4) = *(u32 *)((int)aiStack_20 + 0x248 + iVar1 + 8);
    *(u32 *)((int)aiStack_20 + iVar1) = *(u32 *)((int)aiStack_20 + 0x248 + iVar1 + 4);
    uVar3 = *(u32 *)((int)aiStack_20 + iVar1 + 8);
    uVar2 = (*(code *)(&vmu_file_add_with_icon))(a0, a1, uVar3, a3, *(u32 *)((int)aiStack_20 + iVar1),
                                                 *(u32 *)((int)aiStack_20 + iVar1 + 4));
    *(u32 *)((int)&stack0xfffffff4 + iVar1) = uVar2;
    if (*(int *)((int)&stack0xfffffff4 + iVar1) < 0) {
        uVar2 = 0;
    } else {
        uVar2 = wait_state_rtc_10s(a0, *(int *)((int)&stack0xfffffff4 + iVar1), uVar3, a3);
        *(u32 *)(&stack0xfffffff0 + iVar1) = uVar2;
        uVar2 = *(u32 *)(&stack0xfffffff0 + iVar1);
    }
    return uVar2;
}

/*
 * vmu_file_add_with_icon  0x8c01b2a4
 * builds a VMU file image: data, a 0x280-byte header with the two descriptions and the VM_App_Icon.VMI icon; returns
 * its slot strings: "VM_App_Icon.VMI"; "VM_App_Icon.VMI"
 */
int vmu_file_add_with_icon(int a0, u32 a1, u32 a2, u32 a3, u32 s0, u32 s4) {
    int iVar1;
    int iVar2;
    int ar4_00;
    u32 uVar3;
    int *ar7_00;
    int unaff_r8;
    int aiStack_24[2];

    ar7_00 = aiStack_24;
    iVar1 = retry_until_done_021370(0x8c3eb334, "VM_App_Icon.VMI", &g_8c12fb29, ar7_00);
    if (iVar1 == 0) {
        unaff_r8 = -1;
    } else {
        iVar1 = memcard_queue_request(a0, 3, a1, ar7_00);
        if (-1 < iVar1) {
            uVar3 = a3;
            iVar2 = bytes_to_512_blocks(a0, a3);
            ar4_00 = malloc_thunk(iVar2 << 9, uVar3, a1, ar7_00);
            if (ar4_00 != 0) {
                memmove(ar4_00, a2, a3);
                uVar3 = 0x280;
                memset(ar4_00 + 0x200, 0, 0x280);
                strcpy(ar4_00 + 0x200, s0);
                strcpy(ar4_00 + 0x210, s4);
                *(u16 *)(ar4_00 + 0x240) = 1;
                *(u32 *)(ar4_00 + 0x248) = a3;
                memmove(ar4_00 + 0x260, aiStack_24[0] + 0xa0, 0x220);
                *(int *)(iVar1 * 0x28 + a0 + 0x246c) = iVar2;
                *(int *)(iVar1 * 0x28 + a0 + 0x2470) = ar4_00;
                unaff_r8 = iVar1;
            }
        }
        CDCGD_release_request_wrap_021428(0x8c3eb334, "VM_App_Icon.VMI", &g_8c12fb29);
    }
    return unaff_r8;
}

/*
 * memcard_save_vm_start  0x8c01b400
 * starts writing a file of at most 0x600 bytes; returns the request handle or -1
 * called by: memcard_save_vm_wait, save_write_step
 */
u32 memcard_save_vm_start(int a0, u32 a1, u32 a2, u32 a3) {
    u32 uVar1;
    int iVar2;

    if (g_8c2791b0 == 3) {
        if (0x600 < a3) {
            uVar1 = 0xffffffff;
        } else {
            iVar2 = memcard_queue_save_raw(a0, a1, a2, a3);
            if (iVar2 < 0) {
                uVar1 = 0xffffffff;
            } else {
                uVar1 = *(u32 *)(0x244c + iVar2 * 0x28 + a0);
            }
        }
    } else {
        uVar1 = 0xffffffff;
    }
    return uVar1;
}

/*
 * memcard_save_vm_wait  0x8c01b47c
 * memcard_save_vm_start, then waits up to 10 s for it
 * called by: save_check_files
 */
u32 memcard_save_vm_wait(u32 a0, u32 a1, u32 a2, u32 a3) {
    u32 uVar1;
    int ar5_00;

    if (g_8c2791b0 == 3) {
        ar5_00 = memcard_save_vm_start(a0, a1, a2, a3);
        if (ar5_00 < 0) {
            uVar1 = 0;
        } else {
            uVar1 = file_slot_find(a0, ar5_00);
            uVar1 = wait_state_rtc_10s(a0, uVar1, a2, a3);
        }
    } else {
        uVar1 = 0;
    }
    return uVar1;
}

/*
 * memcard_queue_save_raw  0x8c01b4f0
 * queues a save of a3 bytes from a2 as file a1 without a header (op 4); request id or -1
 * called by: memcard_save_vm_start
 */
int memcard_queue_save_raw(int a0, u32 a1, u32 a2, u32 a3) {
    int iVar1;
    int iVar2;
    int ar4_00;
    u32 ar5_00;
    u32 ar7_00;

    ar7_00 = a3;
    iVar1 = memcard_queue_request(a0, 4, a1, a3);
    if (iVar1 < 0) {
        iVar1 = -1;
    } else {
        ar5_00 = a3;
        iVar2 = bytes_to_512_blocks(a0, a3);
        ar4_00 = malloc_thunk(iVar2 << 9, ar5_00, a1, ar7_00);
        if (ar4_00 == 0) {
            iVar1 = -1;
        } else {
            memmove(ar4_00, a2, a3);
            *(int *)(0x246c + iVar1 * 0x28 + a0) = iVar2;
            *(int *)(0x2470 + iVar1 * 0x28 + a0) = ar4_00;
        }
    }
    return iVar1;
}

/*
 * bytes_to_512_blocks_wrap  0x8c01b5ac
 * only calls bytes_to_512_blocks
 * called by: memcard_queue_load
 */
u32 bytes_to_512_blocks_wrap(u32 unused_a0, int a1) {
    u32 uVar1;

    uVar1 = bytes_to_512_blocks(unused_a0, a1 + 0x280);
    return uVar1;
}

/*
 * bytes_to_512_blocks  0x8c01b5dc
 * a1 rounded up to 512-byte blocks
 * called by: bytes_to_512_blocks_wrap, memcard_queue_load_raw, memcard_queue_save_raw, vmu_file_add_with_icon
 */
u32 bytes_to_512_blocks(u32 unused_a0, u32 a1) {
    u32 uVar1;

    uVar1 = a1 >> 9;
    if ((a1 & 0x1ff) != 0) {
        uVar1 = uVar1 + 1;
    }
    return uVar1;
}

/*
 * memcard_load_wait  0x8c01b5f8
 * reads a file, waits up to 10 s, unpacks it and copies a3 bytes to a2; 1 on success
 * called by: save_file_load, save_files_check
 */
u32 memcard_load_wait(int a0, u32 a1, u32 a2, u32 a3) {
    u32 uVar1;
    int ar5_00;
    int iVar2;
    int iVar3;
    u32 ar5_01;
    u32 ar6_00;
    u32 ar7_00;
    u8 auStack_74[88];
    u32 uStack_1c;

    uVar1 = 1;
    if (g_8c2791b0 == 3) {
        ar6_00 = 0x5600;
        ar7_00 = a3;
        ar5_00 = memcard_queue_load(a0, a1, 0x5600, a3);
        if (ar5_00 < 0) {
            uVar1 = 0;
        } else {
            iVar3 = ar5_00;
            iVar2 = wait_state_rtc_10s(a0, ar5_00, ar6_00, ar7_00);
            if (iVar2 == 0) {
                (*(code *)(&free_sys))(*(u32 *)(0x2470 + ar5_00 * 0x28 + a0), iVar3, ar6_00, ar7_00);
                uVar1 = 0;
            } else {
                ar5_01 = *(u32 *)(0x2470 + ar5_00 * 0x28 + a0);
                iVar3 = ta_fifo_2017fc(auStack_74, ar5_01);
                if ((0xffffff20 == iVar3) || (0xffffff21 == iVar3)) {
                    uVar1 = 0;
                } else if (iVar3 == 0) {
                    memmove(a2, uStack_1c, a3);
                    uVar1 = 1;
                    ar5_01 = uStack_1c;
                    ar6_00 = a3;
                }
                (*(code *)(&free_sys))(*(u32 *)(0x2470 + ar5_00 * 0x28 + a0), ar5_01, ar6_00, ar7_00);
            }
        }
    } else {
        uVar1 = 0;
    }
    return uVar1;
}

/*
 * memcard_queue_load  0x8c01b70c
 * queues a load of file a1 (op 0) with a buffer for a2 bytes; request id or -1
 * called by: memcard_load_wait
 */
int memcard_queue_load(int a0, u32 a1, u32 a2, u32 a3) {
    int iVar1;
    int iVar2;
    int iVar3;

    iVar1 = memcard_queue_request(a0, 0, a1, a3);
    if (iVar1 < 0) {
        iVar1 = -1;
    } else {
        iVar2 = bytes_to_512_blocks_wrap(a0, a2);
        iVar3 = malloc_thunk(iVar2 << 9, a2, a1, a3);
        if (iVar3 == 0) {
            iVar1 = -1;
        } else {
            *(int *)(0x246c + iVar1 * 0x28 + a0) = iVar2;
            *(int *)(0x2470 + iVar1 * 0x28 + a0) = iVar3;
        }
    }
    return iVar1;
}

/*
 * memcard_load_raw_wait  0x8c01b7b0
 * reads a3 bytes of a file into a2, waiting up to 10 s; 1 on success
 * called by: save_files_check
 */
u32 memcard_load_raw_wait(int a0, u32 a1, u32 a2, u32 a3) {
    u32 uVar1;
    int ar5_00;
    int iVar2;
    int ar5_01;
    u32 ar7_00;

    if (g_8c2791b0 == 3) {
        uVar1 = a3;
        ar7_00 = a3;
        ar5_00 = memcard_queue_load_raw(a0, a1, a3, a3);
        if (ar5_00 < 0) {
            uVar1 = 0;
        } else {
            ar5_01 = ar5_00;
            iVar2 = wait_state_rtc_10s(a0, ar5_00, uVar1, ar7_00);
            if (iVar2 == 0) {
                (*(code *)(&free_sys))(*(u32 *)(0x2470 + ar5_00 * 0x28 + a0), ar5_01, uVar1, ar7_00);
                uVar1 = 0;
            } else {
                uVar1 = *(u32 *)(0x2470 + ar5_00 * 0x28 + a0);
                memmove(a2, uVar1, a3);
                (*(code *)(&free_sys))(*(u32 *)(0x2470 + ar5_00 * 0x28 + a0), uVar1, a3, ar7_00);
                uVar1 = 1;
            }
        }
    } else {
        uVar1 = 0;
    }
    return uVar1;
}

/*
 * memcard_queue_load_raw  0x8c01b87c
 * queues a raw load of file a1 (op 1) with a buffer for a2 bytes; request id or -1
 * called by: memcard_load_raw_wait
 */
int memcard_queue_load_raw(int a0, u32 a1, u32 a2, u32 a3) {
    int iVar1;
    int iVar2;
    int iVar3;

    iVar1 = memcard_queue_request(a0, 1, a1, a3);
    if (iVar1 < 0) {
        iVar1 = -1;
    } else {
        iVar2 = bytes_to_512_blocks(a0, a2);
        iVar3 = malloc_thunk(iVar2 << 9, a2, a1, a3);
        if (iVar3 == 0) {
            iVar1 = -1;
        } else {
            *(int *)(0x246c + iVar1 * 0x28 + a0) = iVar2;
            *(int *)(0x2470 + iVar1 * 0x28 + a0) = iVar3;
        }
    }
    return iVar1;
}

/*
 * memcard_file_data_size_wait  0x8c01b920
 * data bytes of file a1 (blocks*512 minus the 0x280 header), waiting up to 10 s; -1 on failure
 * called by: static_init_4367d4
 */
int memcard_file_data_size_wait(int a0, u32 a1, u32 a2, u32 a3) {
    int iVar1;
    int iVar2;

    if (g_8c2791b0 == 3) {
        iVar1 = memcard_queue_file_size(a0, a1, a2, a3);
        if (iVar1 < 0) {
            iVar1 = -1;
        } else {
            iVar2 = wait_state_rtc_10s(a0, iVar1, a2, a3);
            if (iVar2 == 0) {
                iVar1 = -1;
            } else {
                iVar1 = *(int *)(0x246c + iVar1 * 0x28 + a0) * 0x200 - 0x280;
            }
        }
    } else {
        iVar1 = -1;
    }
    return iVar1;
}

/*
 * memcard_queue_file_size  0x8c01b9b0
 * queues reading the size of file a1 (op 8)
 * called by: memcard_file_data_size_wait
 */
int memcard_queue_file_size(u32 a0, u32 a1, u32 unused_a2, u32 a3) {
    int iVar1;

    iVar1 = memcard_queue_request(a0, 8, a1, a3);
    if (iVar1 < 0) {
        iVar1 = -1;
    }
    return iVar1;
}

/*
 * memcard_free_bytes_wait  0x8c01b9e4
 * free bytes on the card, waiting up to 10 s; -1 on failure
 * called by: memcard_save_game_file, static_init_4367d4
 */
int memcard_free_bytes_wait(int a0, u32 a1, u32 a2, u32 a3) {
    int iVar1;
    int iVar2;

    if (g_8c2791b0 == 3) {
        iVar1 = memcard_queue_free_blocks(a0, a1, a2, a3);
        if (iVar1 < 0) {
            iVar1 = -1;
        } else {
            iVar2 = wait_state_rtc_10s(a0, iVar1, a2, a3);
            if (iVar2 == 0) {
                iVar1 = -1;
            } else {
                iVar1 = *(int *)(0x246c + iVar1 * 0x28 + a0) << 9;
            }
        }
    } else {
        iVar1 = -1;
    }
    return iVar1;
}

/*
 * memcard_queue_free_blocks  0x8c01ba68
 * queues reading the free block count (op 9)
 * called by: memcard_free_bytes_wait
 */
int memcard_queue_free_blocks(u32 a0, u32 unused_a1, u32 unused_a2, u32 a3) {
    int iVar1;

    iVar1 = memcard_queue_request(a0, 9, (&DATA_8c12fb18) + 0x11, a3);
    if (iVar1 < 0) {
        iVar1 = -1;
    }
    return iVar1;
}

/*
 * memcard_delete_start  0x8c01baa0
 * starts deleting file a1 when the card is ready; request id or -1
 * called by: game_uses_memcard_delete_start_01bb00
 */
u32 memcard_delete_start(int a0, u32 a1, u32 unused_a2, u32 a3) {
    u32 uVar1;
    int iVar2;

    if (g_8c2791b0 == 3) {
        iVar2 = memcard_queue_delete(a0, a1, unused_a2, a3);
        if (iVar2 < 0) {
            uVar1 = 0xffffffff;
        } else {
            uVar1 = *(u32 *)(0x244c + iVar2 * 0x28 + a0);
        }
    } else {
        uVar1 = 0xffffffff;
    }
    return uVar1;
}

/*
 * game_uses_memcard_delete_start_01bb00  0x8c01bb00
 * area name: game code; nothing names its area yet; behaviour name: its main named callee is memcard_delete_start
 * called by: memcard_save_game_file, save_menu_update, save_set_names_seamandc
 */
u32 game_uses_memcard_delete_start_01bb00(u32 a0, u32 a1, u32 a2, u32 a3) {
    u32 uVar1;
    int ar5_00;

    if (g_8c2791b0 == 3) {
        ar5_00 = memcard_delete_start(a0, a1, a2, a3);
        if (ar5_00 < 0) {
            uVar1 = 0;
        } else {
            uVar1 = file_slot_find(a0, ar5_00);
            uVar1 = wait_state_rtc_10s(a0, uVar1, a2, a3);
        }
    } else {
        uVar1 = 0;
    }
    return uVar1;
}

/*
 * memcard_queue_delete  0x8c01bb6c
 * queues deleting file a1 (op 5)
 * called by: memcard_delete_start
 */
int memcard_queue_delete(u32 a0, u32 a1, u32 unused_a2, u32 a3) {
    int iVar1;

    iVar1 = memcard_queue_request(a0, 5, a1, a3);
    if (iVar1 < 0) {
        iVar1 = -1;
    }
    return iVar1;
}

/*
 * memcard_check_file_wait  0x8c01bba0
 * starts a file query and waits up to 10 s for the result
 * called by: save_check_files, save_files_check, save_user_file_check
 */
u32 memcard_check_file_wait(u32 a0, u32 a1, u32 a2, u32 a3) {
    u32 uVar1;
    int ar5_00;

    if (g_8c2791b0 == 3) {
        ar5_00 = memcard_queue_exist(a0, a1, a2, a3);
        if (ar5_00 < 0) {
            uVar1 = 0;
        } else {
            uVar1 = wait_state_rtc_10s(a0, ar5_00, a2, a3);
        }
    } else {
        uVar1 = 0;
    }
    return uVar1;
}

/*
 * memcard_queue_exist  0x8c01bbf8
 * queues an existence check of file a1 (op 6)
 * called by: memcard_check_file_wait
 */
int memcard_queue_exist(u32 a0, u32 a1, u32 unused_a2, u32 a3) {
    int iVar1;

    iVar1 = memcard_queue_request(a0, 6, a1, a3);
    if (iVar1 < 0) {
        iVar1 = -1;
    }
    return iVar1;
}

/*
 * memcard_stat_file_wait  0x8c01bc2c
 * queries a file and copies its description into a2 when found (result 5)
 * called by: save_check_files, save_files_check, save_user_file_check, static_init_4367d4
 */
int memcard_stat_file_wait(int a0, u32 a1, u8 *a2, u32 a3) {
    int iVar1;
    int ar5_00;
    u8 *ar6_00;

    if (g_8c2791b0 == 3) {
        ar6_00 = a2;
        ar5_00 = memcard_queue_game_name_check(a0, a1, a2, a3);
        if (ar5_00 < 0) {
            iVar1 = 0;
        } else {
            iVar1 = wait_state_rtc_10s(a0, ar5_00, ar6_00, a3);
            *a2 = 0;
            if (iVar1 == 5) {
                strcpy(a2, ar5_00 * 0x28 + a0 + 0x245c);
            }
        }
    } else {
        iVar1 = 0;
    }
    return iVar1;
}

/*
 * memcard_queue_game_name_check  0x8c01bcc0
 * queues comparing the drive's game file name with a1 (op 7)
 * called by: memcard_stat_file_wait
 */
int memcard_queue_game_name_check(u32 a0, u32 a1, u32 unused_a2, u32 a3) {
    int iVar1;

    iVar1 = memcard_queue_request(a0, 7, a1, a3);
    if (iVar1 < 0) {
        iVar1 = -1;
    }
    return iVar1;
}

/*
 * game_save_01bcf4  0x8c01bcf4
 * area name: game code; nothing names its area yet; behaviour name: mostly calls save functions
 * called by: asr_uses_strcpy_0fbf28, game_uses_set_fields_24_20_0fd8d0
 */
u32 game_save_01bcf4(int a0, u32 unused_a1, u32 unused_a2, u32 a3) {
    u32 uVar1;
    int iVar2;

    if (g_8c2791b0 == 3) {
        iVar2 = memcard_queue_condition_a(a0, unused_a1, unused_a2, a3);
        if (iVar2 < 0) {
            uVar1 = 0xffffffff;
        } else {
            uVar1 = *(u32 *)(0x244c + iVar2 * 0x28 + a0);
        }
    } else {
        uVar1 = 0xffffffff;
    }
    return uVar1;
}

/*
 * memcard_queue_condition_a  0x8c01bd50
 * queues a Maple set-condition with the bytes at 8c12fb10 (op 10)
 * called by: game_save_01bcf4
 */
int memcard_queue_condition_a(u32 a0, u32 unused_a1, u32 unused_a2, u32 a3) {
    int iVar1;

    iVar1 = memcard_queue_request(a0, 10, (&DATA_8c12fb18) + 0x11, a3);
    if (iVar1 < 0) {
        iVar1 = -1;
    }
    return iVar1;
}

/*
 * game_save_01bd88  0x8c01bd88
 * area name: game code; nothing names its area yet; behaviour name: mostly calls save functions
 * called by: asr_uses_strcpy_0fbf28, game_uses_set_fields_24_20_0fd8d0
 */
u32 game_save_01bd88(int a0, u32 unused_a1, u32 unused_a2, u32 a3) {
    u32 uVar1;
    int iVar2;

    if (g_8c2791b0 == 3) {
        iVar2 = memcard_queue_condition_b(a0, unused_a1, unused_a2, a3);
        if (iVar2 < 0) {
            uVar1 = 0xffffffff;
        } else {
            uVar1 = *(u32 *)(0x244c + iVar2 * 0x28 + a0);
        }
    } else {
        uVar1 = 0xffffffff;
    }
    return uVar1;
}

/*
 * memcard_queue_condition_b  0x8c01bde4
 * queues a Maple set-condition with the bytes at 8c12fb14 (op 11)
 * called by: game_save_01bd88
 */
int memcard_queue_condition_b(u32 a0, u32 unused_a1, u32 unused_a2, u32 a3) {
    int iVar1;

    iVar1 = memcard_queue_request(a0, 0xb, (&DATA_8c12fb18) + 0x11, a3);
    if (iVar1 < 0) {
        iVar1 = -1;
    }
    return iVar1;
}

/*
 * game_save_01be1c  0x8c01be1c
 * area name: game code; nothing names its area yet; behaviour name: mostly calls save functions
 * called by: vmu_load_user_icon
 */
u32 game_save_01be1c(int a0, u32 unused_a1, u32 unused_a2, u32 a3) {
    u32 uVar1;
    int iVar2;

    if (g_8c2791b0 == 3) {
        if (*(int *)(a0 + 0x18) < 1) {
            iVar2 = memcard_queue_lcd_b(a0, unused_a1, unused_a2, a3);
            if (iVar2 < 0) {
                uVar1 = 0xffffffff;
            } else {
                uVar1 = *(u32 *)(0x244c + iVar2 * 0x28 + a0);
            }
        } else {
            uVar1 = 0xffffffff;
        }
    } else {
        uVar1 = 0xffffffff;
    }
    return uVar1;
}

/*
 * memcard_queue_lcd_b  0x8c01be84
 * queues an LCD-style block write from the buffer at +0x24 (op 13)
 * called by: game_save_01be1c
 */
int memcard_queue_lcd_b(u32 a0, u32 unused_a1, u32 unused_a2, u32 a3) {
    int iVar1;

    iVar1 = memcard_queue_request(a0, 0xd, (&DATA_8c12fb18) + 0x11, a3);
    if (iVar1 < 0) {
        iVar1 = -1;
    }
    return iVar1;
}

/*
 * memcard_queue_op0c_with_date  0x8c01bebc
 * queues slot request 0xc for the current file record with today's date; record state 3 on success, 0 on failure
 * called by: memcard_run_request
 */
int memcard_queue_op0c_with_date(int *a0, u32 a1, u32 unused_a2, u32 a3) {
    int iVar1;
    int iVar2;
    u16 uStack_38;
    int iStack_28;
    int iStack_24;
    int iStack_20;
    u16 uStack_18;

    rtc_get_date(&uStack_18, a1, unused_a2, a3);
    uStack_38 = uStack_18;
    iStack_20 = *a0;
    iStack_24 = *a0;
    iStack_28 = *a0;
    iVar2 = (*(code *)(&slot80_queue_op_0c))(g_8c2791b4, (int)a0 + 0x245c + iStack_20 * 0x28,
                                             *(u32 *)((int)a0 + 0x2470 + iStack_24 * 0x28),
                                             *(u32 *)((int)a0 + 0x246c + iStack_28 * 0x28), &uStack_38);
    iVar1 = 0x2450;
    if (iVar2 != -1) {
        if (iVar2 == 0) {
            *(u32 *)((int)a0 + 0x2450 + *a0 * 0x28) = 3;
            iVar2 = iVar1;
        } else {
            *(u32 *)((int)a0 + 0x2450 + *a0 * 0x28) = 0;
            iVar2 = iVar1;
        }
    }
    return iVar2;
}

/*
 * memcard_queue_op0d_with_date  0x8c01bfd0
 * queues slot request 0xd for the current file record with today's date; record state 3 on success, 0 on failure
 * called by: memcard_run_request
 */
int memcard_queue_op0d_with_date(int *a0, u32 a1, u32 unused_a2, u32 a3) {
    int iVar1;
    int iVar2;
    u16 uStack_38;
    int iStack_28;
    int iStack_24;
    int iStack_20;
    u16 uStack_18;

    rtc_get_date(&uStack_18, a1, unused_a2, a3);
    uStack_38 = uStack_18;
    iStack_20 = *a0;
    iStack_24 = *a0;
    iStack_28 = *a0;
    iVar2 = (*(code *)(&slot80_queue_op_0d))(g_8c2791b4, (int)a0 + 0x245c + iStack_20 * 0x28,
                                             *(u32 *)((int)a0 + 0x2470 + iStack_24 * 0x28),
                                             *(u32 *)((int)a0 + 0x246c + iStack_28 * 0x28), &uStack_38);
    iVar1 = 0x2450;
    if (iVar2 != -1) {
        if (iVar2 == 0) {
            *(u32 *)((int)a0 + 0x2450 + *a0 * 0x28) = 3;
            iVar2 = iVar1;
        } else {
            *(u32 *)((int)a0 + 0x2450 + *a0 * 0x28) = 0;
            iVar2 = iVar1;
        }
    }
    return iVar2;
}

/*
 * memcard_queue_op14  0x8c01c0e4
 * queues slot request 0x14 (argument 0x11) for the current file record; record state 3 on success, 0 on failure
 * called by: memcard_run_request
 */
int memcard_queue_op14(int *a0) {
    int iVar1;
    int iVar2;

    iVar2 = (*(code *)(&slot80_queue_op_14))(g_8c2791b4, (int)a0 + 0x245c + *a0 * 0x28,
                                             *(u32 *)((int)a0 + 0x2470 + *a0 * 0x28), 0x11);
    iVar1 = 0x2450;
    if (iVar2 != -1) {
        if (iVar2 == 0) {
            *(u32 *)((int)a0 + 0x2450 + *a0 * 0x28) = 3;
            iVar2 = iVar1;
        } else {
            *(u32 *)((int)a0 + 0x2450 + *a0 * 0x28) = 0;
            iVar2 = iVar1;
        }
    }
    return iVar2;
}

/*
 * memcard_op_load  0x8c01c1a4
 * queue op 0: buLoadFile_like
 * called by: memcard_run_request
 */
int memcard_op_load(int *a0) {
    int iVar1;
    int iVar2;

    iVar2 =
        (*(code *)(&buLoadFile_like))(g_8c2791b4, (int)a0 + 0x245c + *a0 * 0x28,
                                      *(u32 *)((int)a0 + 0x2470 + *a0 * 0x28), *(u32 *)((int)a0 + 0x246c + *a0 * 0x28));
    iVar1 = 0x2450;
    if (iVar2 != -1) {
        if (iVar2 == 0) {
            *(u32 *)((int)a0 + 0x2450 + *a0 * 0x28) = 3;
            iVar2 = iVar1;
        } else {
            *(u32 *)((int)a0 + 0x2450 + *a0 * 0x28) = 0;
            iVar2 = iVar1;
        }
    }
    return iVar2;
}

/*
 * memcard_op_load_raw  0x8c01c260
 * queue op 1: buLoadFileEx_like
 * called by: memcard_run_request
 */
int memcard_op_load_raw(int *a0) {
    int iVar1;
    int iVar2;

    iVar2 = (*(code *)(&buLoadFileEx_like))(g_8c2791b4, (int)a0 + 0x245c + *a0 * 0x28,
                                            *(u32 *)((int)a0 + 0x2470 + *a0 * 0x28), 0x11);
    iVar1 = 0x2450;
    if (iVar2 != -1) {
        if (iVar2 == 0) {
            *(u32 *)((int)a0 + 0x2450 + *a0 * 0x28) = 3;
            iVar2 = iVar1;
        } else {
            *(u32 *)((int)a0 + 0x2450 + *a0 * 0x28) = 0;
            iVar2 = iVar1;
        }
    }
    return iVar2;
}

/*
 * memcard_op_file_size  0x8c01c320
 * queue op 8: buGetFileSize_like, result at +0x246c
 * called by: memcard_run_request
 */
int memcard_op_file_size(int *a0) {
    int iVar1;
    int iVar2;
    int iVar3;

    iVar2 = buGetFileSize_like(g_8c2791b4, (int)a0 + 0x245c + *a0 * 0x28);
    iVar1 = 0x2450;
    if (iVar2 < 0) {
        iVar3 = iVar2;
        if (iVar2 != -1) {
            *(u32 *)((int)a0 + 0x2450 + *a0 * 0x28) = 0;
            iVar3 = iVar1;
        }
    } else {
        *(u32 *)((int)a0 + 0x2450 + *a0 * 0x28) = 1;
        iVar3 = 0x246c;
        *(int *)((int)a0 + 0x246c + *a0 * 0x28) = iVar2;
    }
    return iVar3;
}

/*
 * memcard_op_free_blocks  0x8c01c3c4
 * queue op 9: buGetFreeBlocks_like, result at +0x246c
 * called by: memcard_run_request
 */
int memcard_op_free_blocks(int *a0) {
    int iVar1;
    int iVar2;
    int iVar3;

    iVar2 = buGetFreeBlocks_like(g_8c2791b4, 0);
    iVar1 = 0x2450;
    if (iVar2 < 0) {
        iVar3 = iVar2;
        if (iVar2 != -1) {
            *(u32 *)((int)a0 + 0x2450 + *a0 * 0x28) = 0;
            iVar3 = iVar1;
        }
    } else {
        *(u32 *)((int)a0 + 0x2450 + *a0 * 0x28) = 1;
        iVar3 = 0x246c;
        *(int *)((int)a0 + 0x246c + *a0 * 0x28) = iVar2;
    }
    return iVar3;
}

/*
 * memcard_op_delete  0x8c01c450
 * queue op 5: buDeleteFile_like
 * called by: memcard_run_request
 */
int memcard_op_delete(int *a0) {
    int iVar1;
    int iVar2;

    iVar2 = buDeleteFile_like(g_8c2791b4, (int)a0 + 0x245c + *a0 * 0x28);
    iVar1 = 0x2450;
    if (iVar2 != -1) {
        if (iVar2 == 0) {
            *(u32 *)((int)a0 + 0x2450 + *a0 * 0x28) = 3;
            iVar2 = iVar1;
        } else {
            *(u32 *)((int)a0 + 0x2450 + *a0 * 0x28) = 0;
            iVar2 = iVar1;
        }
    }
    return iVar2;
}

/*
 * memcard_op_exist  0x8c01c4d8
 * queue op 6: buIsExistFile_like
 * called by: memcard_run_request
 */
int memcard_op_exist(int *a0) {
    int iVar1;
    int iVar2;

    iVar2 = buIsExistFile_like(g_8c2791b4, (int)a0 + 0x245c + *a0 * 0x28);
    iVar1 = 0x2450;
    if (iVar2 != -1) {
        if (iVar2 == 0) {
            *(u32 *)((int)a0 + 0x2450 + *a0 * 0x28) = 1;
            iVar2 = iVar1;
        } else {
            *(u32 *)((int)a0 + 0x2450 + *a0 * 0x28) = 0;
            iVar2 = iVar1;
        }
    }
    return iVar2;
}

/*
 * memcard_op_game_name_check  0x8c01c560
 * queue op 7: compares the game file name with the request's
 * called by: memcard_run_request
 */
int memcard_op_game_name_check(int *a0, u32 unused_a1, u32 a2, u32 a3) {
    int iVar1;
    char acStack_28[36];

    iVar1 = bu_get_game_file_name(g_8c2791b4, acStack_28);
    if (iVar1 == -0xfb) {
        iVar1 = 0x2450;
        a0[*a0 * 10 + 0x914] = 4;
    } else if (iVar1 != -1) {
        if (iVar1 == 0) {
            if (acStack_28[0] == '\0') {
                iVar1 = 0x2450;
                a0[*a0 * 10 + 0x914] = 4;
            } else {
                iVar1 = strcmp_01c68c(acStack_28, a0 + *a0 * 10 + 0x917);
                if (iVar1 == 0) {
                    iVar1 = 0x2450;
                    a0[*a0 * 10 + 0x914] = 1;
                } else {
                    a0[*a0 * 10 + 0x914] = 5;
                    iVar1 = strcpy(a0 + *a0 * 10 + 0x917, acStack_28);
                }
            }
        } else {
            iVar1 = 0x2450;
            a0[*a0 * 10 + 0x914] = 0;
        }
    }
    return iVar1;
}

/*
 * strcmp_01c68c  0x8c01c68c
 * called by: memcard_op_game_name_check
 */
u32 strcmp_01c68c(u8 *a0, u8 *a1) {
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
 * memcard_op_condition_a  0x8c01c6f4
 * queue op 10: Maple set-condition with the bytes at 8c12fb10
 * called by: memcard_run_request
 */
int memcard_op_condition_a(int *a0) {
    int iVar1;
    int iVar2;
    u8 uStack_18;
    u8 uStack_17;
    u8 uStack_16;
    u8 uStack_15;

    uStack_18 = *(&DATA_8c12fb10);
    uStack_17 = (&DATA_8c12fb10)[1];
    uStack_16 = (&DATA_8c12fb10)[2];
    uStack_15 = (&DATA_8c12fb10)[3];
    iVar2 = irq_input_1f5d6c(a0[2], &uStack_18);
    iVar1 = 0x2450;
    if (iVar2 != -1) {
        if (iVar2 == 0) {
            *(u32 *)((int)a0 + 0x2450 + *a0 * 0x28) = 1;
            iVar2 = iVar1;
        } else {
            *(u32 *)((int)a0 + 0x2450 + *a0 * 0x28) = 0;
            iVar2 = iVar1;
        }
    }
    return iVar2;
}

/*
 * memcard_op_condition_b  0x8c01c774
 * queue op 11: Maple set-condition with the bytes at 8c12fb14
 * called by: memcard_run_request
 */
int memcard_op_condition_b(int *a0) {
    int iVar1;
    int iVar2;
    u8 uStack_18;
    u8 uStack_17;
    u8 uStack_16;
    u8 uStack_15;

    uStack_18 = *(&DATA_8c12fb14);
    uStack_17 = (&DATA_8c12fb14)[1];
    uStack_16 = (&DATA_8c12fb14)[2];
    uStack_15 = (&DATA_8c12fb14)[3];
    iVar2 = irq_input_1f5d6c(a0[2], &uStack_18);
    iVar1 = 0x2450;
    if (iVar2 != -1) {
        if (iVar2 == 0) {
            *(u32 *)((int)a0 + 0x2450 + *a0 * 0x28) = 1;
            iVar2 = iVar1;
        } else {
            *(u32 *)((int)a0 + 0x2450 + *a0 * 0x28) = 0;
            iVar2 = iVar1;
        }
    }
    return iVar2;
}

/*
 * memcard_op_lcd_a  0x8c01c7f4
 * queue op 12: block write of the embedded buffer at +0x2c
 * called by: memcard_run_request
 */
int memcard_op_lcd_a(int *a0, u32 unused_a1, u32 unused_a2, u32 a3) {
    int iVar1;
    int iVar2;

    iVar2 = game_input_01c8c8(a0, a0 + 0xb, unused_a2, a3);
    iVar1 = 0x2450;
    if (iVar2 == 1) {
        *(u32 *)((int)a0 + 0x2450 + *a0 * 0x28) = 1;
        iVar2 = iVar1;
    } else if (iVar2 != 2) {
        *(u32 *)((int)a0 + 0x2450 + *a0 * 0x28) = 0;
        iVar2 = iVar1;
    }
    return iVar2;
}

/*
 * memcard_op_lcd_b  0x8c01c860
 * queue op 13: block write of the buffer at +0x24
 * called by: memcard_run_request
 */
int memcard_op_lcd_b(int *a0, u32 unused_a1, u32 unused_a2, u32 a3) {
    int iVar1;
    int iVar2;

    iVar2 = game_input_01c8c8(a0, a0[9], unused_a2, a3);
    iVar1 = 0x2450;
    if (iVar2 == 1) {
        *(u32 *)((int)a0 + 0x2450 + *a0 * 0x28) = 1;
        iVar2 = iVar1;
    } else if (iVar2 != 2) {
        *(u32 *)((int)a0 + 0x2450 + *a0 * 0x28) = 0;
        iVar2 = iVar1;
    }
    return iVar2;
}

/*
 * game_input_01c8c8  0x8c01c8c8
 * area name: game code; nothing names its area yet; behaviour name: mostly calls input functions
 * called by: memcard_op_lcd_a, memcard_op_lcd_b, memcard_tick
 */
u32 game_input_01c8c8(int a0, u32 a1, u32 unused_a2, u32 a3) {
    int iVar1;
    u32 uVar2;

    iVar1 = bios_input_1f3d28(*(u32 *)(a0 + 8));
    if (iVar1 == 0) {
        uVar2 = 0;
    } else {
        iVar1 = (*(code *)(&bios_input_1f3c78))(*(u32 *)(a0 + 8), a1, *(u32 *)(a0 + 0x14), a3);
        if (iVar1 == -1) {
            uVar2 = 2;
        } else if (iVar1 == 0) {
            uVar2 = 1;
        } else {
            uVar2 = 0;
        }
    }
    return uVar2;
}

/*
 * set_field_18_to_1e  0x8c01c924
 * called by: memcard_run_request
 */
u32 set_field_18_to_1e(int a0) {
    *(u32 *)(a0 + 0x18) = 0x1e;
    return 0x1e;
}

/*
 * game_update_fields_01c92c  0x8c01c92c
 * area name: game code; nothing names its area yet; behaviour name: conditionally writes members
 * called by: memcard_poll_slot_busy
 */
int game_update_fields_01c92c(int a0) {
    int iVar1;

    iVar1 = *(int *)(a0 + 0x18);
    if ((-1 < iVar1) && (iVar1 = 10, *(int *)(a0 + 0x18) < 0xb)) {
        iVar1 = 0xf;
        *(u32 *)(a0 + 0x18) = 0xf;
    }
    return iVar1;
}

/*
 * set_fields_24_20_wrap  0x8c01c944
 * only calls set_fields_24_20
 * called by: memcard_manager_init, speech_uses_identity_0fa688
 */
u32 set_fields_24_20_wrap(u32 a0) {
    u32 uVar1;

    uVar1 = set_fields_24_20(a0, (&DATA_8c12f300));
    return uVar1;
}

/*
 * set_fields_24_20  0x8c01c964
 * stores +0x24, +0x20
 * called by: asr_uses_strcpy_0fbf28, game_uses_set_fields_24_20_0fd8d0, set_fields_24_20_wrap,
 * speech_uses_identity_0fa6c8
 */
u32 set_fields_24_20(int a0, u32 a1) {
    *(u32 *)(a0 + 0x24) = a1;
    *(u32 *)(a0 + 0x20) = 1;
    return 1;
}

/*
 * game_calc_01c970  0x8c01c970
 * area name: game code; nothing names its area yet; behaviour name: integer arithmetic on its arguments
 * called by: speech_copy_0fa944, speech_uses_rtc_get_date_0fa83c
 */
u32 game_calc_01c970(int a0, u32 *a1) {
    u32 uVar1;

    uVar1 = *(u32 *)(a0 + 0x24);
    *a1 = uVar1;
    return uVar1;
}

/*
 * set_fields_28_1c  0x8c01c978
 * stores +0x28, +0x1c
 * called by: asr_uses_strcpy_0fbf28
 */
u32 set_fields_28_1c(int a0, u32 a1) {
    *(u32 *)(a0 + 0x28) = a1;
    *(u32 *)(a0 + 0x1c) = 0x1e;
    return 0x1e;
}

/*
 * sound_server_2  0x8c01c984
 * calls sdSysServer
 * called by: wait_state_rtc_10s
 */
u32 sound_server_2(u32 unused_a0, u32 unused_a1, u32 a2, u32 a3) {
    u32 uVar1;

    uVar1 = sdSysServer(unused_a0, unused_a1, a2, a3);
    return uVar1;
}

/*
 * game_calls_2_01c998  0x8c01c998
 * area name: game code; nothing names its area yet; behaviour name: calls 2 not yet named functions
 */
u32 game_calls_2_01c998(void) {
    thunk_FUN_8c1fce34();
    thunk_FUN_8c1fce50();
    g_8c2791b0 = 1;
    return 1;
}

/*
 * speech_state_reset  0x8c01ca24
 * marks the 16 recogniser slots free, clears the session handles and resets the speech globals (threshold 0x7000,
 * timeout 8000) called by: game_save_01e504
 */
u32 *speech_state_reset(u32 *a0) {
    int iVar1;

    for (iVar1 = 0; iVar1 < 0x10; iVar1 = iVar1 + 1) {
        *(u32 *)((int)a0 + 0x5634 + iVar1 * 0x50) = 1;
    }
    *(u32 *)(0x5630 + (int)a0) = 0xffffffff;
    *a0 = 0xffffffff;
    a0[1] = 0xffffffff;
    g_8c2791b8 = 0;
    *(u32 *)(0x5b38 + (int)a0) = 0;
    *(u32 *)(0x5b3c + (int)a0) = 0;
    g_8c279254 = 0;
    g_8c279248 = 0;
    *(u32 *)(0x6cc0 + (int)a0) = 0x7000;
    g_8c279280 = 0x1f40;
    g_8c279274 = 0;
    g_8c279278 = 0;
    g_8c27927c = 0;
    g_8c2791bc = 0;
    *(u8 *)(0x8c2791bc + 3) = 0;
    g_8c27924c = 0;
    g_8c279284 = 0;
    g_8c279288 = 0;
    g_8c27928c = 0;
    g_8c279290 = 0;
    g_8c279294 = 0;
    return a0;
}

/*
 * free_if_nonnull_wrap_01cb24  0x8c01cb24
 * called by: game_release_01e560
 */
int free_if_nonnull_wrap_01cb24(int a0, u32 a1, u32 a2, u32 a3) {
    u32 in_stack_fffffff4;

    if ((a0 != 0) && (0 < (short)a1)) {
        free_if_nonnull(a0, a1, a2, a3, CONCAT22((short)((u32)in_stack_fffffff4 >> 0x10), (short)a1));
    }
    return a0;
}

/*
 * game_talk_01cb54  0x8c01cb54
 * area name: game code; nothing names its area yet; behaviour name: mostly calls talk functions
 * called by: input_peripheral_state_machine
 */
u32 game_talk_01cb54(u32 a0, u32 a1, u32 a2, u32 a3) {
    int iVar1;
    u32 uVar2;

    iVar1 = mic_set_mode_check_connected(a0, a1, a2, a3);
    if (iVar1 == 0) {
        uVar2 = 0;
    } else {
        iVar1 = asr_session_open_like(a0);
        if (iVar1 == 0) {
            uVar2 = 0;
        } else {
            iVar1 = asr_load_language_model(a0);
            if (iVar1 == 0) {
                asr_talk_01d008(a0, a1, a2, a3);
                uVar2 = 0;
            } else {
                uVar2 = 1;
            }
        }
    }
    return uVar2;
}

/*
 * mic_set_mode_check_connected  0x8c01cbc8
 * switches the recogniser mode for a1 (6, 0xc, 0x12 or other) and ends the session when the microphone is no longer
 * connected called by: asr_uses_mic_set_mode_check_connected_01d0cc, game_talk_01cb54
 */
u32 mic_set_mode_check_connected(u32 *a0, int a1, u32 a2, u32 a3) {
    u32 *puVar1;
    bool bVar2;

    if (a1 != a0[1]) {
        g_8c2791b8 = 0;
        a0[1] = a1;
        if (a1 == 6) {
            *a0 = 8;
            a0[2] = 8;
        } else if (a1 == 0xc) {
            *a0 = 0xe;
            a0[2] = 0xe;
        } else if (a1 == 0x12) {
            *a0 = 0x14;
            a0[2] = 0x14;
        } else {
            *a0 = 2;
            a0[2] = 2;
        }
    }
    puVar1 = (u32 *)maple_port_status_wrap();
    bVar2 = (*puVar1 & 0x10) != 0;
    if (!bVar2) {
        asr_session_end(a0, a1, a2, a3);
        *a0 = 0xffffffff;
        a0[1] = 0xffffffff;
        g_8c2791b8 = 0;
    }
    return (u32)bVar2;
}

/*
 * asr_session_open_like  0x8c01cc74
 * opens the speech-recognition session once (state 2), keeping its two handles in 8c27926c/8c279270
 * called by: game_talk_01cb54
 */
u32 asr_session_open_like(u32 *a0) {
    u32 r5;
    u32 r6;
    u32 r7;
    u32 uVar1;
    int iVar2;

    if (g_8c2791b8 < 2) {
        iVar2 = ta_copy_201994();
        if (iVar2 == 0) {
            uVar1 = shinobi_fill_loop_201a1a(*a0, r5, r6, r7, 0, 0, 0x113a, 5, g_8c279274, a0 + 3);
            g_8c27926c = uVar1;
            uVar1 = slot16_alloc(g_8c27926c);
            g_8c279270 = uVar1;
            g_8c2791b8 = 2;
            uVar1 = 1;
        } else {
            uVar1 = 0;
        }
    } else {
        uVar1 = 1;
    }
    return uVar1;
}

/*
 * asr_load_language_model  0x8c01cd30
 * called by: game_talk_01cb54
 * strings: "asr16v2_aev200_float_4b.lng"; "asr16v2_aev200_float_4b.lng"; "idle_ctx"; "SPEECH"
 */
u32 asr_load_language_model(int a0) {
    u32 uVar1;
    int iVar2;
    u8 *ar5_00;
    u8 *ar6_00;
    int ar7_00;

    if (g_8c2791b8 < 3) {
        g_8c279258 = 0;
        g_8c27925c = 0;
        g_8c279260 = 0;
        g_8c279268 = 0;
        g_8c279264 = 0;
        *(u32 *)(0x5b34 + a0) = 0;
        ar7_00 = a0 + 0x5b34;
        ar6_00 = (&DATA_8c12fb7c) + 0x1c;
        ar5_00 = "asr16v2_aev200_float_4b.lng";
        iVar2 = (*(code *)(&file_load_into_object_buffer))(0x8c3eb334, "asr16v2_aev200_float_4b.lng", ar6_00, ar7_00);
        if (iVar2 == 1) {
            iVar2 = asr_init_from_model(a0, ar5_00, ar6_00, ar7_00);
            if (iVar2 == 0) {
                uVar1 = 0;
            } else {
                (*(code *)(&asr_register_strings))(a0, "idle_ctx", "SPEECH", ar7_00);
                uVar1 = 1;
            }
        } else {
            uVar1 = 0;
        }
    } else {
        uVar1 = 1;
    }
    return uVar1;
}

/*
 * asr_init_from_model  0x8c01ce00
 * called by: asr_load_language_model, speech_load_dictionary
 */
u32 asr_init_from_model(int a0, u32 unused_a1, u32 unused_a2, u32 a3) {
    int iVar1;
    u32 uVar2;
    u32 ar5_00;
    u32 *ar7_00;

    iVar1 = asr_lib_create_engine((&DATA_8c12fb40), 0, 0x8c279258, a3);
    if (iVar1 == 0) {
        iVar1 = (*(code *)(&asr_lib_load_model))(g_8c279258, *(u32 *)(0x5b34 + a0), 1, 0x8c279260);
        if (iVar1 == 0) {
            g_8c2791b8 = 3;
            uVar2 = 0;
            ar7_00 = 0x8c27925c;
            iVar1 = (*(code *)(&asr_lib_create_recognizer))(g_8c279258, (&DATA_8c12fb64), 0, 0x8c27925c);
            if (iVar1 == 0) {
                ar5_00 = g_8c279260;
                iVar1 = (*(code *)(&asr_lib_bind_recognizer_model))(g_8c27925c, ar5_00, uVar2, ar7_00);
                if (iVar1 == 0) {
                    iVar1 = asr_talk_01cee0();
                    if (iVar1 == 0) {
                        uVar2 = 0;
                    } else {
                        g_8c2791b8 = 4;
                        uVar2 = 1;
                    }
                } else {
                    uVar2 = 0;
                }
            } else {
                uVar2 = 0;
            }
        } else {
            uVar2 = 0;
        }
    } else {
        uVar2 = 0;
    }
    return uVar2;
}

/*
 * asr_talk_01cee0  0x8c01cee0
 * area name: sits between asr functions (same compilation unit); behaviour name: mostly calls talk functions
 * called by: asr_init_from_model
 */
u32 asr_talk_01cee0(void) {
    int iVar1;
    u32 uVar2;

    iVar1 = asr_call_11dda2_err(g_8c27925c, 1, 0);
    if (iVar1 == 0) {
        iVar1 = asr_call_11dda2_err(g_8c27925c, 2, 0);
        if (iVar1 == 0) {
            iVar1 = asr_call_11dda2_err(g_8c27925c, 6, 0x12c);
            if (iVar1 == 0) {
                iVar1 = asr_call_11dda2_err(g_8c27925c, 7, 1);
                if (iVar1 == 0) {
                    iVar1 = asr_call_11dda2_err(g_8c27925c, 10, 0xc8);
                    if (iVar1 == 0) {
                        iVar1 = asr_call_11dda2_err(g_8c27925c, 0xd, 1);
                        if (iVar1 == 0) {
                            iVar1 = asr_call_11dda2_err(g_8c27925c, 0xe, 0xffffffff);
                            if (iVar1 == 0) {
                                uVar2 = 1;
                            } else {
                                uVar2 = 0;
                            }
                        } else {
                            uVar2 = 0;
                        }
                    } else {
                        uVar2 = 0;
                    }
                } else {
                    uVar2 = 0;
                }
            } else {
                uVar2 = 0;
            }
        } else {
            uVar2 = 0;
        }
    } else {
        uVar2 = 0;
    }
    return uVar2;
}

/*
 * asr_copy_01cfc8  0x8c01cfc8
 * area name: sits between asr functions (same compilation unit); behaviour name: mostly calls copy functions
 * called by: asr_session_end
 */
u32 asr_copy_01cfc8(void) {

    shinobi_copy_201c82(g_8c279270);
    shinobi_copy_201b04(g_8c27926c);
    ta_copy_2019e0();
    g_8c2791b8 = 1;
    return 1;
}

/*
 * asr_talk_01d008  0x8c01d008
 * area name: sits between asr functions (same compilation unit); behaviour name: mostly calls talk functions
 * called by: asr_session_end, game_talk_01cb54, speech_load_dictionary
 */
u32 asr_talk_01d008(u32 unused_a0, u32 unused_a1, u32 a2, u32 a3) {
    if (g_8c27925c != 0) {
        unused_a1 = 0;
        asr_lib_bind_recognizer_model(g_8c27925c, 0);
    }
    if (g_8c279268 != 0) {
        asr_test_10c3a0(g_8c279268, unused_a1, a2, a3);
    }
    if (g_8c279264 != 0) {
        asr_talk_10ba7c(g_8c279264, unused_a1, a2, a3);
    }
    if (g_8c279260 != 0) {
        asr_talk_10bad4(g_8c279260, unused_a1, a2, a3);
    }
    if (g_8c27925c != 0) {
        asr_uses_lib11c_take_error_10ba20(g_8c27925c, unused_a1, a2, a3);
    }
    if (g_8c279258 != 0) {
        asr_call_11ce44_err(g_8c279258, unused_a1, a2, a3);
    }
    g_8c279258 = 0;
    g_8c27925c = 0;
    g_8c279260 = 0;
    g_8c279264 = 0;
    g_8c2791b8 = 2;
    return 2;
}

/*
 * asr_uses_mic_set_mode_check_connected_01d0cc  0x8c01d0cc
 * area name: sits between asr functions (same compilation unit); behaviour name: its main named callee is
 * mic_set_mode_check_connected called by: input_peripheral_state_machine
 */
u32 asr_uses_mic_set_mode_check_connected_01d0cc(int a0, u32 a1, u32 a2, u32 a3) {
    int iVar1;
    u32 ar5_00;

    if (-1 < *(int *)(0x5630 + a0)) {
        iVar1 = *(int *)(0x5638 + *(int *)(0x5630 + a0) * 0x50 + a0);
        if ((iVar1 == 0) || (iVar1 == 1)) {
            asr_update_fields_01d3f4(a0);
        } else if (iVar1 == 2) {
            asr_uses_speech_register_idle_ctx_01d338(a0, a1, a2, a3);
        }
    }
    ar5_00 = *(u32 *)(a0 + 4);
    iVar1 = mic_set_mode_check_connected(a0, ar5_00, a2, a3);
    if (iVar1 != 0) {
        asr_state_switch_01d15c(a0);
    }
    return (u32)(iVar1 != 0);
}

/*
 * asr_state_switch_01d15c  0x8c01d15c
 * area name: sits between asr functions (same compilation unit); behaviour name: dispatches on a state or mode value
 * (switch) called by: asr_uses_mic_set_mode_check_connected_01d0cc
 */
u8 *asr_state_switch_01d15c(int a0) {
    u8 *puVar1;
    int iVar2;
    u32 uVar3;

    puVar1 = (u8 *)0x3;
    if ((2 < g_8c2791b8) && (iVar2 = get_field_0_u8(g_8c27926c), puVar1 = NULL, iVar2 != 0)) {
        if (iVar2 == 1) {
            set_field_28_to_1(g_8c27926c);
        } else if (iVar2 == 3) {
            return (u8 *)3;
        }
        puVar1 = (u8 *)0x9;
        if ((g_8c279248 < 10) && (puVar1 = (u8 *)0x1, 0 < g_8c279248)) {
            puVar1 = (&switchD_8c01d1d6::switchdataD_8c01d1dc)[g_8c279248 + -1];
            switch (g_8c279248) {
            case 1:
                puVar1 = g_8c279284;
                if (g_8c279284 != NULL) {
                    puVar1 = NULL;
                    g_8c279284 = NULL;
                }
                break;
            case 5:
                break;
            case 6:
                if (g_8c279284 == NULL) {
                    return (u8 *)0;
                }
                g_8c279284 = (u8 *)0x1;
            case 2:
                uVar3 = shinobi_uses_switch_jump_201c92(g_8c279270);
                puVar1 = (u8 *)shinobi_uses_switch_jump_201da0(g_8c279270, uVar3);
                break;
            case 7:
                if (g_8c279284 == NULL) {
                    return (u8 *)0;
                }
                g_8c279284 = (u8 *)0x1;
            default:
                uVar3 = 0x113a;
                iVar2 = shinobi_uses_switch_jump_201e14(g_8c279270, a0 + 0x5b86, 0x113a);
                shinobi_uses_switch_jump_201da0(g_8c279270, iVar2);
                puVar1 = (u8 *)asr_call_11f258_err(g_8c27925c, 0, a0 + 0x5b86, iVar2 << 1);
                break;
            case 8:
                puVar1 = g_8c279284;
                if (g_8c279284 != NULL) {
                    g_8c279298 = g_8c279298 + 1;
                    g_8c279284 = (u8 *)0x2;
                    if (2 < g_8c279298) {
                        g_8c279284 = (u8 *)0x1;
                    }
                    puVar1 = (u8 *)asr_call_11f5d2_err(g_8c27925c, 1);
                }
                break;
            case 9:
                puVar1 = g_8c279284;
                if (g_8c279284 != NULL) {
                    g_8c279284 = (u8 *)0x3;
                    puVar1 = (u8 *)asr_call_11f5d2_err(g_8c27925c, 1);
                }
            }
        }
    }
    return puVar1;
}

/*
 * asr_uses_speech_register_idle_ctx_01d338  0x8c01d338
 * area name: sits between asr functions (same compilation unit); behaviour name: its main named callee is
 * speech_register_idle_ctx called by: asr_uses_mic_set_mode_check_connected_01d0cc
 */
u32 asr_uses_speech_register_idle_ctx_01d338(int a0, u32 a1, u32 a2, u32 a3) {
    u32 uVar1;
    int iVar2;

    iVar2 = *(int *)(*(int *)(a0 + 0x5630) * 0x50 + a0 + 0x563c);
    uVar1 = 5;
    if ((iVar2 < 6) && (-1 < iVar2)) {
        switch (iVar2) {
        case 0:
            uVar1 = speech_uses_strcpy_01da90(a0, a1, a2, a3);
            break;
        case 1:
            uVar1 = game_uses_strcmp_01dea4(a0, a1, a2, a3);
            break;
        case 2:
            uVar1 = game_update_fields_01d78c(a0);
            break;
        case 3:
            uVar1 = game_talk_01d8d8(a0);
            break;
        case 4:
            uVar1 = game_release_01d7cc(a0, a1, a2, a3);
            break;
        case 5:
            uVar1 = speech_register_idle_ctx(a0, a1, a2, a3);
        }
    }
    return uVar1;
}

/*
 * asr_update_fields_01d3f4  0x8c01d3f4
 * area name: sits between asr functions (same compilation unit); behaviour name: conditionally writes members
 * called by: asr_uses_mic_set_mode_check_connected_01d0cc
 */
int asr_update_fields_01d3f4(int a0) {
    int iVar1;
    u32 uVar2;

    uVar2 = *(u32 *)(0x5640 + *(int *)(0x5630 + a0) * 0x50 + a0);
    *(u32 *)(0x5634 + *(int *)(0x5630 + a0) * 0x50 + a0) = 1;
    iVar1 = 0x5630;
    *(u32 *)(0x5630 + a0) = uVar2;
    return iVar1;
}

/*
 * asr_session_end  0x8c01d440
 * tears down the speech-recognition session for its current state (2, 3 or 4) and sets the state to 0
 * called by: mic_set_mode_check_connected
 */
u32 asr_session_end(u32 unused_a0, u32 unused_a1, u32 a2, u32 a3) {
    int iVar1;

    iVar1 = g_8c2791b8;
    if (iVar1 != 2) {
        if ((iVar1 != 3) && (iVar1 != 4))
            goto LAB_8c01d472;
        asr_talk_01d008(unused_a0, unused_a1, a2, a3);
    }
    game_uses_get_field_0_u8_01d490();
    asr_copy_01cfc8();
LAB_8c01d472:
    g_8c2791b8 = 0;
    return 0;
}

/*
 * game_uses_get_field_0_u8_01d490  0x8c01d490
 * area name: game code; nothing names its area yet; behaviour name: its main named callee is get_field_0_u8
 * called by: asr_session_end
 */
int game_uses_get_field_0_u8_01d490(void) {
    int iVar1;

    iVar1 = get_field_0_u8(g_8c27926c);
    if (iVar1 == 2) {
        iVar1 = set_field_28_to_2(g_8c27926c);
    }
    return iVar1;
}

/*
 * speech_request_queue_add  0x8c01d4c4
 * takes a free one of 16 0x50-byte request records, links it at the end of the queue and stores the two names and a1
 * called by: asr_register_strings, speech_request_queue_add_wrap
 */
u32 speech_request_queue_add(int a0, u32 a1, u32 a2, u32 a3) {
    int iVar1;
    u32 uVar2;

    uVar2 = 0;
    while ((uVar2 < 0x10 && (*(int *)(uVar2 * 0x50 + a0 + 0x5634) != 1))) {
        uVar2 = uVar2 + 1;
    }
    if (uVar2 < 0x10) {
        if (*(int *)(a0 + 0x5630) < 0) {
            *(u32 *)(a0 + 0x5630) = uVar2;
        } else {
            iVar1 = *(int *)(a0 + 0x5630);
            while (-1 < *(int *)(iVar1 * 0x50 + a0 + 0x5640)) {
                iVar1 = *(int *)(iVar1 * 0x50 + a0 + 0x5640);
            }
            *(u32 *)(iVar1 * 0x50 + a0 + 0x5640) = uVar2;
        }
        strcpy(uVar2 * 0x50 + a0 + 0x5644, a2);
        strcpy(uVar2 * 0x50 + a0 + 0x5664, a3);
        *(u32 *)(uVar2 * 0x50 + a0 + 0x563c) = a1;
        *(u32 *)(uVar2 * 0x50 + a0 + 0x5638) = 2;
        *(u32 *)(uVar2 * 0x50 + a0 + 0x5640) = 0xffffffff;
        *(u32 *)(uVar2 * 0x50 + a0 + 0x5634) = 0;
    } else {
        uVar2 = 0;
    }
    return uVar2;
}

/*
 * asr_register_strings  0x8c01d624
 * called by: asr_switch_vocab, asr_uses_strcpy_0fbf28
 */
u32 asr_register_strings(u32 a0, u32 a1, u32 a2) {
    int iVar1;
    u32 uVar2;

    iVar1 = speech_request_queue_add(a0, 0, a1, a2);
    if (iVar1 < 0) {
        uVar2 = 0;
    } else {
        uVar2 = 2;
    }
    return uVar2;
}

/*
 * speech_request_queue_add_wrap  0x8c01d658
 * only calls speech_request_queue_add
 * called by: asr_switch_vocab
 */
u32 speech_request_queue_add_wrap(u32 a0, u32 a1, u32 a2) {
    u32 uVar1;

    uVar1 = speech_request_queue_add(a0, 1, a1, a2);
    return uVar1;
}

/*
 * game_copy_01d684  0x8c01d684
 * area name: game code; nothing names its area yet; behaviour name: mostly calls copy functions
 * called by: asr_uses_strcpy_0fbf28, game_uses_set_fields_24_20_0fd8d0
 */
u32 game_copy_01d684(u32 unused_a0, u32 *a1, u32 a2, u32 a3) {
    u32 uVar1;

    if (g_8c2791b8 == 4) {
        if (g_8c27924c == 1) {
            *a1 = g_8c2791bc;
            strcpy(a1 + 3, &g_8c2791c8);
        } else {
            *a1 = 0;
            *(u8 *)(a1 + 3) = 0;
        }
        uVar1 = g_8c279284;
        g_8c2791bc = 0;
        a1[2] = g_8c279284;
    } else {
        uVar1 = 0;
        *a1 = 0;
    }
    return uVar1;
}

/*
 * asr_take_flag_279278  0x8c01d6ec
 * returns and clears the flag at 8c279278
 * called by: input_asr_take_flag_a
 */
u32 asr_take_flag_279278(void) {
    u32 uVar1;

    uVar1 = g_8c279278;
    g_8c279278 = 0;
    return uVar1;
}

/*
 * asr_take_flag_27927c  0x8c01d704
 * returns and clears the flag at 8c27927c
 * called by: input_asr_take_flag_b
 */
u32 asr_take_flag_27927c(void) {
    u32 uVar1;

    uVar1 = g_8c27927c;
    g_8c27927c = 0;
    return uVar1;
}

/*
 * asr_calc_01d71c  0x8c01d71c
 * area name: sits between asr functions (same compilation unit); behaviour name: integer arithmetic on its arguments
 * called by: asr_switch_vocab
 */
u32 asr_calc_01d71c(u32 a0) {
    int iVar1;
    u32 uVar2;

    iVar1 = (*(code *)(&speech_request_queue_add))(a0, 2, (&DATA_8c12fb7c) + 0x1c, (&DATA_8c12fb7c) + 0x1c);
    if (iVar1 < 0) {
        uVar2 = 0;
    } else {
        uVar2 = 2;
    }
    return uVar2;
}

/*
 * game_calc_01d754  0x8c01d754
 * area name: game code; nothing names its area yet; behaviour name: integer arithmetic on its arguments
 * called by: game_uses_set_fields_24_20_0fd8d0
 */
u32 game_calc_01d754(u32 a0) {
    int iVar1;
    u32 uVar2;

    iVar1 = (*(code *)(&speech_request_queue_add))(a0, 4, (&DATA_8c12fb7c) + 0x1c, (&DATA_8c12fb7c) + 0x1c);
    if (iVar1 < 0) {
        uVar2 = 0;
    } else {
        uVar2 = 2;
    }
    return uVar2;
}

/*
 * game_update_fields_01d78c  0x8c01d78c
 * area name: game code; nothing names its area yet; behaviour name: conditionally writes members
 * called by: asr_uses_speech_register_idle_ctx_01d338
 */
int game_update_fields_01d78c(int a0) {
    int iVar1;

    *(u32 *)(0x5638 + *(int *)(0x5630 + a0) * 0x50 + a0) = 1;
    iVar1 = g_8c2791b8;
    if (iVar1 == 4) {
        iVar1 = 1;
        g_8c27924c = 1;
    }
    return iVar1;
}

/*
 * game_release_01d7cc  0x8c01d7cc
 * area name: game code; nothing names its area yet; behaviour name: mostly calls release functions
 * called by: asr_uses_speech_register_idle_ctx_01d338
 */
int game_release_01d7cc(int a0, u32 a1, u32 a2, u32 a3) {
    int iVar1;

    *(u32 *)(0x5638 + *(int *)(0x5630 + a0) * 0x50 + a0) = 1;
    iVar1 = g_8c2791b8;
    if ((iVar1 == 4) && (iVar1 = g_8c279284, iVar1 == 0)) {
        if (g_8c279288 != 0) {
            free_sys(g_8c279288, a1, a2, a3);
            g_8c279288 = 0;
            g_8c27928c = 0;
        }
        asr_call_11f66a_err(g_8c27925c, 0x8c279288, 0x8c27928c);
        g_8c279298 = 0;
        iVar1 = 1;
        g_8c279284 = 1;
    }
    return iVar1;
}

/*
 * game_calc_01d868  0x8c01d868
 * area name: game code; nothing names its area yet; behaviour name: integer arithmetic on its arguments
 * called by: asr_switch_vocab, asr_uses_strcpy_0fbf28
 */
u32 game_calc_01d868(u32 a0) {
    int iVar1;
    u32 uVar2;

    iVar1 = (*(code *)(&speech_request_queue_add))(a0, 3, (&DATA_8c12fb7c) + 0x1c, (&DATA_8c12fb7c) + 0x1c);
    if (iVar1 < 0) {
        uVar2 = 0;
    } else {
        uVar2 = 2;
    }
    return uVar2;
}

/*
 * game_calc_01d8a0  0x8c01d8a0
 * area name: game code; nothing names its area yet; behaviour name: integer arithmetic on its arguments
 * called by: game_uses_set_fields_24_20_0fd8d0
 */
u32 game_calc_01d8a0(u32 a0) {
    int iVar1;
    u32 uVar2;

    iVar1 = (*(code *)(&speech_request_queue_add))(a0, 5, (&DATA_8c12fb7c) + 0x1c, (&DATA_8c12fb7c) + 0x1c);
    if (iVar1 < 0) {
        uVar2 = 0;
    } else {
        uVar2 = 2;
    }
    return uVar2;
}

/*
 * game_talk_01d8d8  0x8c01d8d8
 * area name: game code; nothing names its area yet; behaviour name: mostly calls talk functions
 * called by: asr_uses_speech_register_idle_ctx_01d338
 */
u32 game_talk_01d8d8(int a0) {
    u32 uVar1;

    *(u32 *)(0x5638 + *(int *)(0x5630 + a0) * 0x50 + a0) = 1;
    g_8c27924c = 0;
    g_8c2791bc = 0;
    uVar1 = speech_talk_01d984();
    return uVar1;
}

/*
 * speech_register_idle_ctx  0x8c01d92c
 * marks the current context entry and registers the "idle_ctx" SPEECH strings with the recogniser
 * called by: asr_uses_speech_register_idle_ctx_01d338
 * strings: "idle_ctx"; "SPEECH"
 */
u32 speech_register_idle_ctx(int a0, u32 unused_a1, u32 unused_a2, u32 a3) {
    u32 uVar1;

    *(u32 *)(0x5638 + *(int *)(0x5630 + a0) * 0x50 + a0) = 1;
    speech_talk_01d9ac();
    uVar1 = (*(code *)(&asr_register_strings))(a0, "idle_ctx", "SPEECH", a3);
    return uVar1;
}

/*
 * speech_talk_01d984  0x8c01d984
 * area name: sits between speech functions (same compilation unit); behaviour name: mostly calls talk functions
 * called by: game_talk_01d8d8, game_uses_strcmp_01dea4, speech_load_dictionary
 */
int speech_talk_01d984(void) {
    int iVar1;

    iVar1 = g_8c2791b8;
    if (iVar1 == 4) {
        iVar1 = asr_call_11d5d4_err(g_8c27925c);
    }
    return iVar1;
}

/*
 * speech_talk_01d9ac  0x8c01d9ac
 * area name: sits between speech functions (same compilation unit); behaviour name: mostly calls talk functions
 * called by: speech_register_idle_ctx
 */
int speech_talk_01d9ac(void) {
    int iVar1;

    iVar1 = g_8c2791b8;
    if ((iVar1 == 4) && (iVar1 = 0, g_8c279284 != 0)) {
        iVar1 = asr_call_11f5d2_err(g_8c27925c, 3);
    }
    return iVar1;
}

/*
 * speech_talk_01d9e0  0x8c01d9e0
 * area name: sits between speech functions (same compilation unit); behaviour name: mostly calls talk functions
 * called by: a_button_mic_start_stop_like, game_uses_input_track_r_hold_0e1f90, input_uses_get_field_24_0e25c0
 */
int speech_talk_01d9e0(void) {
    int iVar1;

    if (g_8c279248 == 2) {
        iVar1 = g_8c27924c;
        if (iVar1 == 1) {
            g_8c2791bc = 0;
            0x8c2791bc [1] = 0;
            *(u8 *)(0x8c2791bc + 3) = 0;
            iVar1 = asr_call_11d370_err(g_8c27925c);
        }
    } else if (g_8c279284 == 0) {
        g_8c279278 = 0;
        iVar1 = 0;
        g_8c27927c = 0;
    } else {
        iVar1 = asr_call_11f5d2_err(g_8c27925c, 1);
    }
    return iVar1;
}

/*
 * speech_talk_01da60  0x8c01da60
 * area name: sits between speech functions (same compilation unit); behaviour name: mostly calls talk functions
 * called by: a_button_mic_start_stop_like, game_uses_pure_virtual_stub_0dfe2c
 */
u32 speech_talk_01da60(void) {
    if (g_8c2791b8 == 4) {
        asr_call_11d5d4_err(g_8c27925c);
    }
    g_8c279278 = 0;
    return 0;
}

/*
 * speech_uses_strcpy_01da90  0x8c01da90
 * area name: sits between speech functions (same compilation unit); behaviour name: its main named callee is strcpy
 * called by: asr_uses_speech_register_idle_ctx_01d338
 */
u32 speech_uses_strcpy_01da90(int a0, u32 unused_a1, u32 a2, u32 a3) {
    int iVar1;
    int *piStack_98;
    u8 auStack_94[132];

    if (g_8c2791b8 == 4) {
        strcpy(auStack_94, *(int *)(a0 + 0x5630) * 0x50 + a0 + 0x5644);
        strcat(auStack_94, &g_8c12fba9);
        iVar1 = CDCGD_request_type_10(0x8c3eb334, auStack_94, *(int *)(a0 + 0x5630) * 0x50 + a0 + 0x5664, &piStack_98);
        if (iVar1 == 0) {
            *(u32 *)(*(int *)(a0 + 0x5630) * 0x50 + a0 + 0x5638) = 0;
        } else if (iVar1 == 2) {
            *(u32 *)(*(int *)(a0 + 0x5630) * 0x50 + a0 + 0x5638) = 2;
        } else {
            iVar1 =
                speech_load_dictionary(a0, *(int *)(a0 + 0x5630) * 0x50 + a0 + 0x5644,
                                       *(int *)(a0 + 0x5630) * 0x50 + a0 + 0x5664, (int)piStack_98 + *piStack_98 + 0x20,
                                       (int)piStack_98 + piStack_98[2] + 0x20, (int)piStack_98 + piStack_98[1] + 0x20);
            if (iVar1 == 1) {
                *(u32 *)(*(int *)(a0 + 0x5630) * 0x50 + a0 + 0x5638) = 1;
            } else {
                CDCGD_release_type10(0x8c3eb334, auStack_94, *(int *)(a0 + 0x5630) * 0x50 + a0 + 0x5664, 10);
                *(u32 *)(*(int *)(a0 + 0x5630) * 0x50 + a0 + 0x5638) = 0;
            }
        }
    } else {
        *(u32 *)(*(int *)(a0 + 0x5630) * 0x50 + a0 + 0x5638) = 0;
    }
    return 0x5638;
}

/*
 * speech_load_dictionary  0x8c01dc80
 * stores the three settings, copies the two dictionary names, builds the string index and loads the recogniser model;
 * returns 1 on success called by: speech_uses_strcpy_01da90
 */
u32 speech_load_dictionary(int a0, u32 a1, u32 a2, u32 a3, u32 s0, u32 s4) {
    int iVar1;
    u32 uVar2;
    u8 *ar6_00;
    u32 ar7_00;
    u8 *ar7_01;
    u32 ar5_00;

    uVar2 = a2;
    ar7_00 = a3;
    ar5_00 = a1;
    speech_talk_01d984();
    g_8c2791bc = 0;
    if (g_8c279264 != 0) {
        asr_talk_01d008(a0, a1, uVar2, ar7_00);
        asr_init_from_model(a0, a1, uVar2, ar7_00);
    }
    ar7_01 = &g_8c279264;
    uVar2 = 1;
    asr_uses_lib11c_take_error_10be9c(g_8c279258, a3, 1, &g_8c279264);
    *(u32 *)(a0 + 0x5b38) = a3;
    *(u32 *)(a0 + 0x5b3c) = s0;
    *(u32 *)(a0 + 0x5b40) = s4;
    strcpy(a0 + 0x5b44, ar5_00);
    strcpy(a0 + 0x5b65, a2);
    iVar1 = string_table_index_build(a0, a2, uVar2, ar7_01);
    if (iVar1 == 1) {
        ar6_00 = &g_8c279268;
        iVar1 = asr_copy_10c3de(g_8c279258, *(u32 *)(a0 + 0x5b40), &g_8c279268, ar7_01);
        if ((iVar1 == 0) && (g_8c279288 != NULL)) {
            asr_copy_122e7c(g_8c279264, g_8c279268, &g_8c12fbae, g_8c279290, g_8c279294);
            ar6_00 = &g_8c12fbae;
            ar7_01 = g_8c279288;
            asr_copy_122664(g_8c279264, g_8c279268, &g_8c12fbae, g_8c279288, g_8c27928c, &g_8c279290, &g_8c279294);
        }
        iVar1 = asr_uses_lib11c_take_error_10b6cc(g_8c27925c, g_8c279264, ar6_00, ar7_01);
        if (iVar1 == 0) {
            uVar2 = 1;
        } else {
            uVar2 = 0;
        }
    } else {
        uVar2 = 0;
    }
    return uVar2;
}

/*
 * string_table_index_build  0x8c01ddfc
 * (re)allocates an array of pointers to each of the count (+4) consecutive NUL-terminated strings of the block at
 * +0x5b3c called by: speech_load_dictionary
 */
u32 string_table_index_build(int a0, u32 a1, u32 a2, u32 a3) {
    int iVar1;
    u32 uVar2;
    int iVar3;
    int iVar4;

    g_8c279254 = *(int *)(*(int *)(0x5b3c + a0) + 4);
    if (g_8c279250 != 0) {
        free_sys(g_8c279250, a1, a2, a3);
    }
    iVar1 = malloc_thunk(g_8c279254 << 2, a1, a2, a3);
    g_8c279250 = iVar1;
    if (g_8c279250 == 0) {
        uVar2 = 0;
    } else {
        iVar1 = *(int *)(0x5b3c + a0) + 8;
        for (iVar4 = 0; iVar4 < g_8c279254; iVar4 = iVar4 + 1) {
            *(int *)(iVar4 * 4 + g_8c279250) = iVar1;
            iVar3 = log_message(iVar1, a1, a2);
            iVar1 = iVar1 + iVar3 + 1;
        }
        uVar2 = 1;
    }
    return uVar2;
}

/*
 * game_uses_strcmp_01dea4  0x8c01dea4
 * area name: game code; nothing names its area yet; behaviour name: its main named callee is strcmp_01dfc0
 * called by: asr_uses_speech_register_idle_ctx_01d338
 */
int game_uses_strcmp_01dea4(int a0, u32 unused_a1, u32 a2, u32 a3) {
    int iVar1;
    int ar5_00;
    int ar6_00;
    u32 ar7_00;
    u8 auStack_88[132];

    strcpy(auStack_88, *(int *)(a0 + 0x5630) * 0x50 + a0 + 0x5644);
    strcat(auStack_88, &g_8c12fba9);
    ar7_00 = 10;
    ar6_00 = *(int *)(a0 + 0x5630) * 0x50 + a0 + 0x5664;
    CDCGD_release_type10(0x8c3eb334, auStack_88, ar6_00, 10);
    *(u32 *)(*(int *)(a0 + 0x5630) * 0x50 + a0 + 0x5638) = 1;
    iVar1 = strcmp_01dfc0(*(int *)(a0 + 0x5630) * 0x50 + a0 + 0x5644, a0 + 0x5b44);
    if (iVar1 == 0) {
        ar5_00 = a0 + 0x5b65;
        iVar1 = strcmp_01dfc0(*(int *)(a0 + 0x5630) * 0x50 + a0 + 0x5664, ar5_00);
        if (iVar1 == 0) {
            iVar1 = speech_talk_01d984();
        }
    }
    return iVar1;
}

/*
 * strcmp_01dfc0  0x8c01dfc0
 * called by: game_uses_strcmp_01dea4
 */
u32 strcmp_01dfc0(u8 *a0, u8 *a1) {
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
 * buf256_clear  0x8c01e028
 * zeroes the length word and the 256 bytes after it at a1
 * called by: game_copy_0c67f4
 */
int buf256_clear(u32 unused_a0, u32 *a1) {
    int iVar1;

    *a1 = 0;
    for (iVar1 = 0; iVar1 < 0x100; iVar1 = iVar1 + 1) {
        *(u8 *)((int)a1 + iVar1 + 4) = 0;
    }
    return 0x100;
}

/*
 * buf256_copy_from_global  0x8c01e04c
 * copies the global buffer (8c279288, length 8c27928c) into a1
 * called by: CGame_GetUserGameInfo
 */
u32 buf256_copy_from_global(u32 unused_a0, int *a1) {
    u32 uVar1;
    int iVar2;

    *a1 = g_8c27928c;
    for (iVar2 = 0; iVar2 < 0x100; iVar2 = iVar2 + 1) {
        *(u8 *)((int)a1 + iVar2 + 4) = 0;
    }
    uVar1 = 0;
    if (g_8c27928c != 0) {
        uVar1 = memmove(a1 + 1, g_8c279288, g_8c27928c);
    }
    return uVar1;
}

/*
 * game_uses_free_sys_01e0a4  0x8c01e0a4
 * area name: game code; nothing names its area yet; behaviour name: its main named callee is free_sys
 * called by: CGame_uses_libgcc_divide_helper_0cc784, CProlog_uses_libgcc_divide_helper_0cd3c8
 */
int game_uses_free_sys_01e0a4(u32 unused_a0, int *a1, u32 a2, u32 a3) {
    int iVar1;
    int *ar5_00;

    ar5_00 = a1;
    if (g_8c279288 != 0) {
        free_sys(g_8c279288, a1, a2, a3);
    }
    g_8c279288 = 0;
    g_8c27928c = 0;
    iVar1 = 0x100;
    if (*a1 < 0x100) {
        g_8c27928c = *a1;
        iVar1 = 0;
        if (g_8c27928c != 0) {
            iVar1 = malloc_thunk(g_8c27928c, ar5_00, a2, a3);
            g_8c279288 = iVar1;
            iVar1 = memmove(g_8c279288, a1 + 1, g_8c27928c);
        }
    }
    return iVar1;
}

/*
 * malloc_thunk_wrap  0x8c01e128
 * only calls malloc_thunk
 */
u32 malloc_thunk_wrap(u32 a0, u32 a1, u32 a2, u32 a3) {
    u32 uVar1;

    uVar1 = malloc_thunk(a0, a1, a2, a3);
    return uVar1;
}

/*
 * free_01e14c  0x8c01e14c
 * free_sys(a0)
 */
u32 free_01e14c(u32 a0, u32 a1, u32 a2, u32 a3) {
    u32 uVar1;

    uVar1 = free_sys(a0, a1, a2, a3);
    return uVar1;
}

/*
 * realloc_like  0x8c01e168
 * allocates a1 bytes, copies a1 bytes from a0 into them and frees a0
 */
int realloc_like(u32 a0, u32 a1, u32 a2, u32 a3) {
    int ar4_00;
    u32 ar5_00;

    ar5_00 = a1;
    ar4_00 = malloc_thunk(a1, a1, a2, a3);
    if (ar4_00 != 0) {
        ar5_00 = a0;
        memmove(ar4_00, a0, a1);
        a2 = a1;
    }
    free_sys(a0, ar5_00, a2, a3);
    return ar4_00;
}

/*
 * msg_substitute_name  0x8c01e1e8
 * replaces "@NAME" in a message with the player's name
 * strings: ";
          strcat(&g_8c2791c8,&g_8c12fbbb);
        }
     "; ";
        strcpy(&g_8c2791c8,"
 */
u32 msg_substitute_name(int *a0, char *a1, u32 a2, u32 a3) {
    int iVar1;
    u32 uVar2;

    g_8c279278 = 0;
    g_8c27927c = 0;
    if ((a0 != NULL) && (g_8c27924c != 0)) {
        if (g_8c2791c0 == 2) {
            g_8c279274 = 0;
            set_field_18_mark_dirty(g_8c27926c, 0);
            g_8c2791bc = 2;
            strcpy(&g_8c2791c8, &g_8c12fbb3);
        } else if (g_8c2791c0 == 3) {
            g_8c279274 = g_8c279274 + 2;
            if (0x10 < g_8c279274) {
                g_8c279274 = 0x10;
            }
            set_field_18_mark_dirty(g_8c27926c, g_8c279274);
            g_8c2791bc = 3;
            strcpy(&g_8c2791c8, &g_8c12fbb7);
        } else if (*a0 == 0) {
            g_8c279274 = 0x10;
            set_field_18_mark_dirty(g_8c27926c, 0x10);
        } else if (*(int *)(a0[1] + 4) < 1000) {
            g_8c2791bc = 1;
            strcpy(&g_8c2791c8, &g_8c12fbb7);
        } else if (*(int *)(a0[1] + 4) < g_8c279280) {
            g_8c279280 = g_8c279280 + -500;
            if (g_8c279280 < 3000) {
                g_8c279280 = 3000;
            }
            g_8c2791bc = 1;
            strcpy(&g_8c2791c8, &g_8c12fbb7);
        } else {
            if ((g_8c279280 + 1000 < *(int *)(a0[1] + 4)) && (g_8c279280 = g_8c279280 + 500, 8000 < g_8c279280)) {
                g_8c279280 = 8000;
            }
            g_8c2791bc = 1;
            g_8c2791c8 = '\0';
            for (iVar1 = 0; iVar1 < *(int *)a0[1]; iVar1 = iVar1 + 1) {
                uVar2 = *(u32 *)(*(int *)(*(int *)(a0[1] + 0x14) + iVar1 * 0x10 + 0xc) + 8);
                if (((g_8c279250 != 0) && (uVar2 < g_8c279254)) && (**(char **)(uVar2 * 4 + g_8c279250) != '\0')) {
                    strcat(&g_8c2791c8, *(u32 *)(uVar2 * 4 + g_8c279250));
                    a1 = " ";
                    strcat(&g_8c2791c8, &g_8c12fbbb);
                }
            }
            if (g_8c2791c8 == '\0') {
                a1 = "@NAME";
                strcpy(&g_8c2791c8, "@NAME");
                g_8c27927c = 1;
            }
            iVar1 = log_message(&g_8c2791c8, a1, a2);
            if ((0 < iVar1) && (*(char *)(iVar1 + 0x8c2791c7) == ' ')) {
                *(u8 *)(iVar1 + 0x8c2791c7) = 0;
            }
        }
    }
    return 0;
}

/*
 * buf256_clear_b  0x8c01e4dc
 * zeroes the length word and the 256 bytes after it at a0
 * called by: SaveData_ctor
 */
u32 *buf256_clear_b(u32 *a0) {
    int iVar1;

    *a0 = 0;
    for (iVar1 = 0; iVar1 < 0x100; iVar1 = iVar1 + 1) {
        *(u8 *)((int)a0 + iVar1 + 4) = 0;
    }
    return a0;
}

/*
 * game_save_01e504  0x8c01e504
 * area name: game code; nothing names its area yet; behaviour name: mostly calls save functions
 * called by: static_init_vec3s_286e20
 */
int game_save_01e504(int a0) {
    memcard_manager_init(a0);
    speech_state_reset(a0 + 0x384c);
    *(u32 *)(0xa510 + a0) = 1;
    *(u32 *)(0xa514 + a0) = *(u32 *)(0xa510 + a0);
    *(u32 *)(0xa518 + a0) = 0;
    *(u32 *)(0xa520 + a0) = 1;
    return a0;
}

/*
 * game_release_01e560  0x8c01e560
 * area name: game code; nothing names its area yet; behaviour name: mostly calls release functions
 */
int game_release_01e560(int a0, u32 a1, u32 a2, u32 a3) {
    u32 ar5_00;
    u32 in_stack_fffffff4;
    u32 ain0;

    ain0 = CONCAT22((short)((u32)in_stack_fffffff4 >> 0x10), (u16)a1);
    if (a0 != 0) {
        free_if_nonnull_wrap_01cb24(a0 + 0x384c, 0xffffffff, a2, a3);
        ar5_00 = 0xffffffff;
        free_if_nonnull_wrap_01a384(a0, 0xffffffff, a2, a3);
        if (0 < (short)ain0) {
            free_if_nonnull(a0);
        }
    }
    return a0;
}

/*
 * game_input_01e5b4  0x8c01e5b4
 * area name: game code; nothing names its area yet; behaviour name: mostly calls input functions
 * called by: game_init_sound_and_messages
 */
u32 game_input_01e5b4(int a0, u32 a1, u32 a2, u32 a3) {
    input_device_select_and_reset(a0, a1, a2, a3);
    return *(u32 *)(0xa510 + a0);
}

/*
 * input_device_select_and_reset  0x8c01e5e0
 * called by: game_input_01e5b4
 */
u32 input_device_select_and_reset(int a0, int a1, u32 a2, u32 a3) {
    int iVar1;
    int iVar2;
    int iVar3;
    u32 auStack_24[4];
    u32 uStack_14;

    auStack_24[0] = *(u32 *)(&DATA_8c12fbc8);
    auStack_24[1] = *(u32 *)((&DATA_8c12fbc8) + 4);
    auStack_24[2] = *(u32 *)((&DATA_8c12fbc8) + 8);
    auStack_24[3] = *(u32 *)((&DATA_8c12fbc8) + 0xc);
    uStack_14 = *(u32 *)((&DATA_8c12fbc8) + 0x10);
    if (*(int *)(0xa510 + a0) == 0) {
        return *(u32 *)(0xa510 + a0);
    }
    if (*(int *)(0xa510 + a0) == 1) {
        *(u32 *)(0xa524 + a0) = *(u32 *)(&DATA_8c12fbc8);
        *(u32 *)(0xa528 + a0) = 0;
        *(u32 *)(0xa52c + a0) = 0;
        *(u32 *)(0xa530 + a0) = 0;
        *(u32 *)(0xa534 + a0) = 0;
        *(u32 *)(0xa538 + a0) = 0;
        *(u32 *)(0xa53c + a0) = 0;
        *(u32 *)(0xa540 + a0) = 0;
        if (a1 == 0) {
            for (iVar3 = 0; iVar3 < 1; iVar3 = iVar3 + 1) {
                iVar1 = shinobi_calc_1f62cc(auStack_24[iVar3]);
                iVar2 = shinobi_calc_1f6338(auStack_24[iVar3]);
                if ((iVar2 == 0) && ((**(u32 **)(iVar1 + 0x30) & 1) != 0))
                    break;
            }
            iVar1 = 0;
            if (iVar3 != 0) {
                *(u32 *)(0xa524 + a0) = auStack_24[0];
                return 1;
            }
        } else {
            for (iVar1 = 3; -1 < iVar1; iVar1 = iVar1 + -1) {
                iVar3 = shinobi_calc_1f62cc(auStack_24[iVar1]);
                iVar2 = shinobi_calc_1f6338(auStack_24[iVar1]);
                if ((iVar2 == 0) && ((**(u32 **)(iVar3 + 0x30) & 1) != 0))
                    break;
            }
            if (iVar1 != 3) {
                *(u32 *)(0xa524 + a0) = auStack_24[3];
                return 1;
            }
        }
        *(u32 *)(0xa524 + a0) = auStack_24[iVar1];
        *(u32 *)(0xa510 + a0) = 5;
    }
    *(u16 *)(0xa546 + a0) = 0;
    *(u16 *)(0xa544 + a0) = 0;
    input_update_state_gate(a0, a1, a2, a3);
    return *(u32 *)(0xa510 + a0);
}

/*
 * input_update_state_gate  0x8c01e790
 * called by: input_device_select_and_reset, input_poll_device_state
 */
int input_update_state_gate(int a0, u32 a1, u32 a2, u32 a3) {
    int iVar1;
    int iVar2;

    iVar1 = 0xa510;
    if (*(int *)(0xa520 + a0) == 0) {
        iVar2 = 1;
        if (*(int *)(0xa510 + a0) != 1) {
            *(u32 *)(0xa510 + a0) = 0;
            iVar2 = iVar1;
        }
    } else {
        iVar2 = input_peripheral_state_machine(a0, a1, a2, a3);
    }
    return iVar2;
}

/*
 * input_peripheral_state_machine  0x8c01e7cc
 * called by: input_update_state_gate
 */
u8 *input_peripheral_state_machine(int a0, u32 a1, u32 a2, u32 a3) {
    u8 *puVar1;
    int iVar2;

    iVar2 = *(int *)(a0 + 0xa510);
    if ((iVar2 < 6) && (0 < iVar2)) {
        puVar1 = (&switchD_8c01e7f6::switchdataD_8c01e7fc)[iVar2 + -1];
        switch (iVar2) {
        case 2:
            iVar2 = Class_129a24_load_01a3b4(a0, *(u32 *)(a0 + 0xa524), a2);
            puVar1 = (u8 *)(u32)(iVar2 == 1);
            iVar2 = game_talk_01cb54(a0 + 0x384c, *(u32 *)(a0 + 0xa524), a2, a3);
            if (iVar2 == 1) {
                puVar1 = (u8 *)((u32)puVar1 | 2);
            }
            if (puVar1 == NULL) {
                puVar1 = (u8 *)0xa510;
                *(u32 *)(a0 + 0xa510) = 5;
            } else if (puVar1 == (u8 *)0x1) {
                puVar1 = (u8 *)0xa510;
                *(u32 *)(a0 + 0xa510) = 4;
            } else if (puVar1 == (u8 *)0x2) {
                puVar1 = (u8 *)0xa510;
                *(u32 *)(a0 + 0xa510) = 3;
            } else if (puVar1 == (u8 *)0x3) {
                puVar1 = (u8 *)0xa510;
                *(u32 *)(a0 + 0xa510) = 0;
            }
            break;
        case 3:
            iVar2 = asr_uses_mic_set_mode_check_connected_01d0cc(a0 + 0x384c, a1, a2, a3);
            if (iVar2 == 0) {
                *(u32 *)(a0 + 0xa510) = 5;
            }
            puVar1 = (u8 *)Class_129a24_load_01a3b4(a0, *(u32 *)(a0 + 0xa524), a2);
            if (puVar1 == (u8 *)0x1) {
                puVar1 = (u8 *)0xa510;
                *(u32 *)(a0 + 0xa510) = 0;
            }
            break;
        case 4:
            iVar2 = game_save_01a5cc(a0, a1, a2, a3);
            if (iVar2 == 0) {
                *(u32 *)(a0 + 0xa510) = 5;
            }
            puVar1 = (u8 *)game_talk_01cb54(a0 + 0x384c, *(u32 *)(a0 + 0xa524), a2, a3);
            if (puVar1 == (u8 *)0x1) {
                puVar1 = (u8 *)0xa510;
                *(u32 *)(a0 + 0xa510) = 0;
            }
        }
    } else {
        iVar2 = game_save_01a5cc(a0, a1, a2, a3);
        if (iVar2 == 0) {
            *(u32 *)(a0 + 0xa510) = 3;
        }
        puVar1 = (u8 *)asr_uses_mic_set_mode_check_connected_01d0cc(a0 + 0x384c, a1, a2, a3);
        if (puVar1 == NULL) {
            puVar1 = (u8 *)0xa510;
            *(u32 *)(a0 + 0xa510) = 4;
        }
    }
    return puVar1;
}

/*
 * input_poll_device_state  0x8c01e954
 * called by: game_poll_exit
 */
u32 input_poll_device_state(int a0, u32 a1, u32 a2, u32 a3) {
    int iVar1;
    u32 uVar2;

    iVar1 = shinobi_calc_1f62cc(*(u32 *)(0xa524 + a0));
    if ((**(u32 **)(iVar1 + 0x30) & 1) == 0) {
        *(u32 *)(0xa518 + a0) = 10;
        if (*(int *)(0xa51c + a0) < 1) {
            *(u32 *)(0xa51c + a0) = 0;
            *(u32 *)(0xa510 + a0) = 1;
            input_update_state_gate(a0, a1, a2, a3);
            *(u32 *)(0xa514 + a0) = *(u32 *)(0xa510 + a0);
            uVar2 = *(u32 *)(0xa510 + a0);
        } else {
            *(int *)(0xa51c + a0) = *(int *)(0xa51c + a0) + -1;
            *(u32 *)(0xa510 + a0) = 2;
            uVar2 = *(u32 *)(0xa510 + a0);
        }
    } else {
        *(u32 *)(0xa540 + a0) = 0;
        *(u32 *)(0xa528 + a0) = *(u32 *)(iVar1 + 8);
        *(u32 *)(0xa540 + a0) = *(u32 *)(0xa540 + a0) | *(u32 *)(0xa528 + a0);
        *(u32 *)(0xa52c + a0) = *(u32 *)(iVar1 + 0xc);
        *(u32 *)(0xa530 + a0) = *(u32 *)(iVar1 + 0x10);
        *(u32 *)(0xa540 + a0) = *(u32 *)(0xa540 + a0) | *(u32 *)(0xa530 + a0);
        *(u32 *)(0xa534 + a0) = *(u32 *)(iVar1 + 0x14);
        *(u32 *)(0xa540 + a0) = *(u32 *)(0xa540 + a0) | *(u32 *)(0xa534 + a0);
        *(int *)(0xa538 + a0) = (int)*(short *)(iVar1 + 0x1c);
        *(u32 *)(0xa540 + a0) = *(u32 *)(0xa540 + a0) | *(u32 *)(0xa538 + a0);
        *(int *)(0xa53c + a0) = (int)*(short *)(iVar1 + 0x1e);
        *(u32 *)(0xa540 + a0) = *(u32 *)(0xa540 + a0) | *(u32 *)(0xa53c + a0);
        *(u16 *)(0xa544 + a0) = *(u16 *)(iVar1 + 0x1a);
        *(u16 *)(0xa546 + a0) = *(u16 *)(iVar1 + 0x18);
        *(u32 *)(0xa51c + a0) = 0x5a;
        if (*(int *)(0xa518 + a0) < 1) {
            *(u32 *)(0xa518 + a0) = 0;
            input_update_state_gate(a0, a1, a2, a3);
            if (((*(int *)(0xa514 + a0) == 0) || (*(int *)(0xa514 + a0) == 4)) && (*(int *)(0xa510 + a0) == 5)) {
                *(u32 *)(0xa518 + a0) = 10;
                uVar2 = 2;
            } else {
                *(u32 *)(0xa514 + a0) = *(u32 *)(0xa510 + a0);
                uVar2 = *(u32 *)(0xa510 + a0);
            }
        } else {
            input_update_state_gate(a0, a1, a2, a3);
            *(int *)(0xa518 + a0) = *(int *)(0xa518 + a0) + -1;
            *(u32 *)(0xa510 + a0) = 2;
            *(u32 *)(0xa514 + a0) = *(u32 *)(0xa510 + a0);
            uVar2 = 2;
        }
    }
    return uVar2;
}

/*
 * input_start_held  0x8c01eb50
 * Start button (0x8) is down this frame (PDS_PERIPHERAL on bits); 2 while the demo input is active
 * called by: input_no_buttons_held
 */
u32 input_start_held(int a0) {
    u32 uVar1;
    int iVar2;

    if (*(int *)(0xa510 + a0) == 1) {
        uVar1 = 2;
    } else {
        iVar2 = input_mask_test(a0, 8, 0);
        if (iVar2 == 0) {
            uVar1 = 0;
        } else {
            uVar1 = 1;
        }
    }
    return uVar1;
}

/*
 * input_start_pressed  0x8c01eb94
 * Start button (0x8) went down this frame (PDS_PERIPHERAL press bits); 2 while the demo input is active
 * called by: input_a_or_start_pressed, input_start_only_pressed, input_start_pressed_wrap,
 * input_start_pressed_wrap_0bf780
 */
u32 input_start_pressed(int a0) {
    u32 uVar1;
    int iVar2;

    if (*(int *)(0xa510 + a0) == 1) {
        uVar1 = 2;
    } else {
        iVar2 = input_mask_test(a0, 8, 2);
        if (iVar2 == 0) {
            uVar1 = 0;
        } else {
            uVar1 = 1;
        }
    }
    return uVar1;
}

/*
 * input_l_held  0x8c01ebd8
 * L button (0x20000) is down this frame (PDS_PERIPHERAL on bits); 2 while the demo input is active
 */
u32 input_l_held(int a0) {
    u32 uVar1;
    int iVar2;

    if (*(int *)(0xa510 + a0) == 1) {
        uVar1 = 2;
    } else {
        iVar2 = input_mask_test(a0, 0x20000, 0);
        if (iVar2 == 0) {
            uVar1 = 0;
        } else {
            uVar1 = 1;
        }
    }
    return uVar1;
}

/*
 * input_l_pressed  0x8c01ec20
 * L button (0x20000) went down this frame (PDS_PERIPHERAL press bits); 2 while the demo input is active
 * called by: input_input_helper_100154, menu_prev_pressed
 */
u32 input_l_pressed(int a0) {
    u32 uVar1;
    int iVar2;

    if (*(int *)(0xa510 + a0) == 1) {
        uVar1 = 2;
    } else {
        iVar2 = input_mask_test(a0, 0x20000, 2);
        if (iVar2 == 0) {
            uVar1 = 0;
        } else {
            uVar1 = 1;
        }
    }
    return uVar1;
}

/*
 * input_r_held  0x8c01ec68
 * R button (0x10000) is down this frame (PDS_PERIPHERAL on bits); 2 while the demo input is active
 * called by: game_input_0ffdb0, input_history_push, input_input_helper_1002a8, input_uses_get_field_4_10031c
 */
u32 input_r_held(int a0) {
    u32 uVar1;
    int iVar2;

    if (*(int *)(0xa510 + a0) == 1) {
        uVar1 = 2;
    } else {
        iVar2 = input_mask_test(a0, 0x10000, 0);
        if (iVar2 == 0) {
            uVar1 = 0;
        } else {
            uVar1 = 1;
        }
    }
    return uVar1;
}

/*
 * input_r_off  0x8c01ecb0
 * R button (0x10000) is up this frame (PDS_PERIPHERAL off bits); 2 while the demo input is active
 * called by: input_input_helper_1001e0
 */
u32 input_r_off(int a0) {
    u32 uVar1;
    int iVar2;

    if (*(int *)(0xa510 + a0) == 1) {
        uVar1 = 2;
    } else {
        iVar2 = input_mask_test(a0, 0x10000, 1);
        if (iVar2 == 0) {
            uVar1 = 0;
        } else {
            uVar1 = 1;
        }
    }
    return uVar1;
}

/*
 * input_r_pressed  0x8c01ecf8
 * R button (0x10000) went down this frame (PDS_PERIPHERAL press bits); 2 while the demo input is active
 * called by: input_input_helper_100e4c, input_r_only_start_timeout, input_uses_pack_entry_poll_status_wrap_101004,
 * menu_next_pressed
 */
u32 input_r_pressed(int a0) {
    u32 uVar1;
    int iVar2;

    if (*(int *)(0xa510 + a0) == 1) {
        uVar1 = 2;
    } else {
        iVar2 = input_mask_test(a0, 0x10000, 2);
        if (iVar2 == 0) {
            uVar1 = 0;
        } else {
            uVar1 = 1;
        }
    }
    return uVar1;
}

/*
 * input_r_released  0x8c01ed40
 * R button (0x10000) went up this frame (PDS_PERIPHERAL release bits); 2 while the demo input is active
 * called by: input_input_helper_100e4c
 */
u32 input_r_released(int a0) {
    u32 uVar1;
    int iVar2;

    if (*(int *)(0xa510 + a0) == 1) {
        uVar1 = 2;
    } else {
        iVar2 = input_mask_test(a0, 0x10000, 3);
        if (iVar2 == 0) {
            uVar1 = 0;
        } else {
            uVar1 = 1;
        }
    }
    return uVar1;
}

/*
 * input_a_held  0x8c01ed88
 * A button (0x4) is down this frame (PDS_PERIPHERAL on bits); 2 while the demo input is active
 * called by: input_a_held_wrap, input_no_buttons_held, input_start_only_pressed
 */
u32 input_a_held(int a0) {
    u32 uVar1;
    int iVar2;

    if (*(int *)(0xa510 + a0) == 1) {
        uVar1 = 2;
    } else {
        iVar2 = input_mask_test(a0, 4, 0);
        if (iVar2 == 0) {
            uVar1 = 0;
        } else {
            uVar1 = 1;
        }
    }
    return uVar1;
}

/*
 * input_a_pressed  0x8c01edcc
 * A button (0x4) went down this frame (PDS_PERIPHERAL press bits); 2 while the demo input is active
 * called by: input_a_or_start_pressed, input_a_pressed_pad, input_a_pressed_wrap
 */
u32 input_a_pressed(int a0) {
    u32 uVar1;
    int iVar2;

    if (*(int *)(0xa510 + a0) == 1) {
        uVar1 = 2;
    } else {
        iVar2 = input_mask_test(a0, 4, 2);
        if (iVar2 == 0) {
            uVar1 = 0;
        } else {
            uVar1 = 1;
        }
    }
    return uVar1;
}

/*
 * input_a_released  0x8c01ee10
 * A button (0x4) went up this frame (PDS_PERIPHERAL release bits); 2 while the demo input is active
 * called by: input_a_released_wrap
 */
u32 input_a_released(int a0) {
    u32 uVar1;
    int iVar2;

    if (*(int *)(0xa510 + a0) == 1) {
        uVar1 = 2;
    } else {
        iVar2 = input_mask_test(a0, 4, 3);
        if (iVar2 == 0) {
            uVar1 = 0;
        } else {
            uVar1 = 1;
        }
    }
    return uVar1;
}

/*
 * input_b_held  0x8c01ee54
 * B button (0x2) is down this frame (PDS_PERIPHERAL on bits); 2 while the demo input is active
 * called by: input_b_held_wrap, input_no_buttons_held, input_start_only_pressed, stick_down_with_b_x_up,
 * stick_up_with_b_x_up
 */
u32 input_b_held(int a0) {
    u32 uVar1;
    int iVar2;

    if (*(int *)(0xa510 + a0) == 1) {
        uVar1 = 2;
    } else {
        iVar2 = input_mask_test(a0, 2, 0);
        if (iVar2 == 0) {
            uVar1 = 0;
        } else {
            uVar1 = 1;
        }
    }
    return uVar1;
}

/*
 * input_b_off  0x8c01ee98
 * B button (0x2) is up this frame (PDS_PERIPHERAL off bits); 2 while the demo input is active
 * called by: input_input_helper_100b20, input_input_helper_100b84
 */
u32 input_b_off(int a0) {
    u32 uVar1;
    int iVar2;

    if (*(int *)(0xa510 + a0) == 1) {
        uVar1 = 2;
    } else {
        iVar2 = input_mask_test(a0, 2, 1);
        if (iVar2 == 0) {
            uVar1 = 0;
        } else {
            uVar1 = 1;
        }
    }
    return uVar1;
}

/*
 * input_b_pressed  0x8c01eedc
 * B button (0x2) went down this frame (PDS_PERIPHERAL press bits); 2 while the demo input is active
 * called by: input_b_pressed_pad
 */
u32 input_b_pressed(int a0) {
    u32 uVar1;
    int iVar2;

    if (*(int *)(0xa510 + a0) == 1) {
        uVar1 = 2;
    } else {
        iVar2 = input_mask_test(a0, 2, 2);
        if (iVar2 == 0) {
            uVar1 = 0;
        } else {
            uVar1 = 1;
        }
    }
    return uVar1;
}

/*
 * input_x_held  0x8c01ef20
 * X button (0x400) is down this frame (PDS_PERIPHERAL on bits); 2 while the demo input is active
 * called by: game_input_0ffdb0, input_input_helper_1002a8, input_input_helper_100e4c, stick_down_with_x,
 * stick_left_with_x, stick_right_with_x, stick_up_with_x
 */
u32 input_x_held(int a0) {
    u32 uVar1;
    int iVar2;

    if (*(int *)(0xa510 + a0) == 1) {
        uVar1 = 2;
    } else {
        iVar2 = input_mask_test(a0, 0x400, 0);
        if (iVar2 == 0) {
            uVar1 = 0;
        } else {
            uVar1 = 1;
        }
    }
    return uVar1;
}

/*
 * input_x_off  0x8c01ef68
 * X button (0x400) is up this frame (PDS_PERIPHERAL off bits); 2 while the demo input is active
 * called by: input_input_helper_1001e0, input_input_helper_100b20, input_input_helper_100b84,
 * input_input_helper_100be8, input_input_helper_100c34, input_uses_pack_entry_poll_status_wrap_101004,
 * stick_down_with_b_x_up, stick_up_with_b_x_up
 */
u32 input_x_off(int a0) {
    u32 uVar1;
    int iVar2;

    if (*(int *)(0xa510 + a0) == 1) {
        uVar1 = 2;
    } else {
        iVar2 = input_mask_test(a0, 0x400, 1);
        if (iVar2 == 0) {
            uVar1 = 0;
        } else {
            uVar1 = 1;
        }
    }
    return uVar1;
}

/*
 * input_x_pressed  0x8c01efb0
 * X button (0x400) went down this frame (PDS_PERIPHERAL press bits); 2 while the demo input is active
 * called by: input_history_push
 */
u32 input_x_pressed(int a0) {
    u32 uVar1;
    int iVar2;

    if (*(int *)(0xa510 + a0) == 1) {
        uVar1 = 2;
    } else {
        iVar2 = input_mask_test(a0, 0x400, 2);
        if (iVar2 == 0) {
            uVar1 = 0;
        } else {
            uVar1 = 1;
        }
    }
    return uVar1;
}

/*
 * input_y_held  0x8c01eff8
 * Y button (0x200) is down this frame (PDS_PERIPHERAL on bits); 2 while the demo input is active
 */
u32 input_y_held(int a0) {
    u32 uVar1;
    int iVar2;

    if (*(int *)(0xa510 + a0) == 1) {
        uVar1 = 2;
    } else {
        iVar2 = input_mask_test(a0, 0x200, 0);
        if (iVar2 == 0) {
            uVar1 = 0;
        } else {
            uVar1 = 1;
        }
    }
    return uVar1;
}

/*
 * input_y_pressed  0x8c01f040
 * Y button (0x200) went down this frame (PDS_PERIPHERAL press bits); 2 while the demo input is active
 * called by: input_y_pressed_wrap, input_y_pressed_wrap_0dc520
 */
u32 input_y_pressed(int a0) {
    u32 uVar1;
    int iVar2;

    if (*(int *)(0xa510 + a0) == 1) {
        uVar1 = 2;
    } else {
        iVar2 = input_mask_test(a0, 0x200, 2);
        if (iVar2 == 0) {
            uVar1 = 0;
        } else {
            uVar1 = 1;
        }
    }
    return uVar1;
}

/*
 * input_right_held  0x8c01f088
 * Right button (0x80) is down this frame (PDS_PERIPHERAL on bits); 2 while the demo input is active
 * called by: input_right_or_stick_right
 */
u32 input_right_held(int a0) {
    u32 uVar1;
    int iVar2;

    if (*(int *)(0xa510 + a0) == 1) {
        uVar1 = 2;
    } else {
        iVar2 = input_mask_test(a0, 0x80, 0);
        if (iVar2 == 0) {
            uVar1 = 0;
        } else {
            uVar1 = 1;
        }
    }
    return uVar1;
}

/*
 * input_right_off  0x8c01f0d0
 * Right button (0x80) is up this frame (PDS_PERIPHERAL off bits); 2 while the demo input is active
 * called by: input_up_left_right_off
 */
u32 input_right_off(int a0) {
    u32 uVar1;
    int iVar2;

    if (*(int *)(0xa510 + a0) == 1) {
        uVar1 = 2;
    } else {
        iVar2 = input_mask_test(a0, 0x80, 1);
        if (iVar2 == 0) {
            uVar1 = 0;
        } else {
            uVar1 = 1;
        }
    }
    return uVar1;
}

/*
 * input_right_pressed  0x8c01f118
 * Right button (0x80) went down this frame (PDS_PERIPHERAL press bits); 2 while the demo input is active
 * called by: input_input_helper_0e319c, menu_next_pressed
 */
u32 input_right_pressed(int a0) {
    u32 uVar1;
    int iVar2;

    if (*(int *)(0xa510 + a0) == 1) {
        uVar1 = 2;
    } else {
        iVar2 = input_mask_test(a0, 0x80, 2);
        if (iVar2 == 0) {
            uVar1 = 0;
        } else {
            uVar1 = 1;
        }
    }
    return uVar1;
}

/*
 * input_left_held  0x8c01f160
 * Left button (0x40) is down this frame (PDS_PERIPHERAL on bits); 2 while the demo input is active
 * called by: input_left_or_stick_left
 */
u32 input_left_held(int a0) {
    u32 uVar1;
    int iVar2;

    if (*(int *)(0xa510 + a0) == 1) {
        uVar1 = 2;
    } else {
        iVar2 = input_mask_test(a0, 0x40, 0);
        if (iVar2 == 0) {
            uVar1 = 0;
        } else {
            uVar1 = 1;
        }
    }
    return uVar1;
}

/*
 * input_left_off  0x8c01f1a4
 * Left button (0x40) is up this frame (PDS_PERIPHERAL off bits); 2 while the demo input is active
 * called by: input_up_left_right_off
 */
u32 input_left_off(int a0) {
    u32 uVar1;
    int iVar2;

    if (*(int *)(0xa510 + a0) == 1) {
        uVar1 = 2;
    } else {
        iVar2 = input_mask_test(a0, 0x40, 1);
        if (iVar2 == 0) {
            uVar1 = 0;
        } else {
            uVar1 = 1;
        }
    }
    return uVar1;
}

/*
 * input_left_pressed  0x8c01f1e8
 * Left button (0x40) went down this frame (PDS_PERIPHERAL press bits); 2 while the demo input is active
 * called by: input_input_helper_0e3150, menu_prev_pressed
 */
u32 input_left_pressed(int a0) {
    u32 uVar1;
    int iVar2;

    if (*(int *)(0xa510 + a0) == 1) {
        uVar1 = 2;
    } else {
        iVar2 = input_mask_test(a0, 0x40, 2);
        if (iVar2 == 0) {
            uVar1 = 0;
        } else {
            uVar1 = 1;
        }
    }
    return uVar1;
}

/*
 * input_down_held  0x8c01f22c
 * Down button (0x20) is down this frame (PDS_PERIPHERAL on bits); 2 while the demo input is active
 * called by: input_down_or_stick_down
 */
u32 input_down_held(int a0) {
    u32 uVar1;
    int iVar2;

    if (*(int *)(0xa510 + a0) == 1) {
        uVar1 = 2;
    } else {
        iVar2 = input_mask_test(a0, 0x20, 0);
        if (iVar2 == 0) {
            uVar1 = 0;
        } else {
            uVar1 = 1;
        }
    }
    return uVar1;
}

/*
 * input_down_pressed  0x8c01f270
 * Down button (0x20) went down this frame (PDS_PERIPHERAL press bits); 2 while the demo input is active
 * called by: input_down_pressed_wrap
 */
u32 input_down_pressed(int a0) {
    u32 uVar1;
    int iVar2;

    if (*(int *)(0xa510 + a0) == 1) {
        uVar1 = 2;
    } else {
        iVar2 = input_mask_test(a0, 0x20, 2);
        if (iVar2 == 0) {
            uVar1 = 0;
        } else {
            uVar1 = 1;
        }
    }
    return uVar1;
}

/*
 * input_up_held  0x8c01f2b4
 * Up button (0x10) is down this frame (PDS_PERIPHERAL on bits); 2 while the demo input is active
 * called by: input_up_or_stick_up
 */
u32 input_up_held(int a0) {
    u32 uVar1;
    int iVar2;

    if (*(int *)(0xa510 + a0) == 1) {
        uVar1 = 2;
    } else {
        iVar2 = input_mask_test(a0, 0x10, 0);
        if (iVar2 == 0) {
            uVar1 = 0;
        } else {
            uVar1 = 1;
        }
    }
    return uVar1;
}

/*
 * input_up_off  0x8c01f2f8
 * Up button (0x10) is up this frame (PDS_PERIPHERAL off bits); 2 while the demo input is active
 * called by: input_input_helper_0e3150, input_input_helper_0e319c, input_up_left_right_off
 */
u32 input_up_off(int a0) {
    u32 uVar1;
    int iVar2;

    if (*(int *)(0xa510 + a0) == 1) {
        uVar1 = 2;
    } else {
        iVar2 = input_mask_test(a0, 0x10, 1);
        if (iVar2 == 0) {
            uVar1 = 0;
        } else {
            uVar1 = 1;
        }
    }
    return uVar1;
}

/*
 * input_up_pressed  0x8c01f33c
 * Up button (0x10) went down this frame (PDS_PERIPHERAL press bits); 2 while the demo input is active
 * called by: input_up_pressed_wrap, input_up_pressed_wrap_0e31e8, input_up_pressed_wrap_0e5998
 */
u32 input_up_pressed(int a0) {
    u32 uVar1;
    int iVar2;

    if (*(int *)(0xa510 + a0) == 1) {
        uVar1 = 2;
    } else {
        iVar2 = input_mask_test(a0, 0x10, 2);
        if (iVar2 == 0) {
            uVar1 = 0;
        } else {
            uVar1 = 1;
        }
    }
    return uVar1;
}

/*
 * input_get_word_a538  0x8c01f380
 * called by: game_input_0ffdb0, input_history_push
 */
u32 input_get_word_a538(int a0) {
    return *(u32 *)(0xa538 + a0);
}

/*
 * input_get_word_a53c  0x8c01f38c
 * called by: game_input_0ffdb0, input_history_push
 */
u32 input_get_word_a53c(int a0) {
    return *(u32 *)(0xa53c + a0);
}

/*
 * input_test_01f398  0x8c01f398
 * area name: sits between input functions (same compilation unit); behaviour name: returns the result of a comparison
 * called by: game_input_0ffdb0
 */
u32 input_test_01f398(int a0) {
    if (*(int *)(0xa540 + a0) == 0) {
        return 0;
    }
    return 1;
}

/*
 * input_mask_test  0x8c01f3b0
 * called by: input_a_held, input_a_pressed, input_a_released, input_b_held, input_b_off, input_b_pressed,
 * input_down_held, input_down_pressed (+22 more)
 */
u32 input_mask_test(int a0, u32 a1, int a2) {
    u32 uVar1;

    if (a2 == 0) {
        uVar1 = input_mask_test_word(a0, a1, a0 + 0xa528);
    } else if (a2 == 1) {
        uVar1 = input_mask_test_word(a0, a1, a0 + 0xa52c);
    } else if (a2 == 2) {
        uVar1 = input_mask_test_word(a0, a1, a0 + 0xa530);
    } else if (a2 == 3) {
        uVar1 = input_mask_test_word(a0, a1, a0 + 0xa534);
    } else {
        uVar1 = 0xffffffff;
    }
    return uVar1;
}

/*
 * input_mask_test_word  0x8c01f458
 * called by: input_mask_test
 */
u32 input_mask_test_word(u32 unused_a0, u32 a1, u32 *a2) {
    u32 uVar1;

    if (0x80 < a1) {
        if (0x400 < a1) {
            uVar1 = 0x20000;
            if (a1 <= 0x10000) {
                uVar1 = 0x10000;
            }
        } else {
            uVar1 = 0x200;
            if (0x400 <= a1)
                goto LAB_8c01f4ea;
        }
        if (uVar1 != a1) {
            return 0xffffffff;
        }
    } else if (a1 < 0x80) {
        if (a1 < 0x11) {
            if (a1 < 0x10) {
                if (8 < a1) {
                    return 0xffffffff;
                }
                if (a1 < 2) {
                    return 0xffffffff;
                }
                if (((a1 != 2) && (a1 != 4)) && (a1 != 8)) {
                    return 0xffffffff;
                }
            }
        } else if (a1 < 0x21) {
            if (a1 != 0x20) {
                return 0xffffffff;
            }
        } else if (a1 != 0x40) {
            return 0xffffffff;
        }
    }
LAB_8c01f4ea:
    if ((*a2 & a1) == 0) {
        return 0;
    }
    return 1;
}

/*
 * get_field_a524_01f514  0x8c01f514
 * called by: CGame_draw_0c3e78, save_check_files, save_files_check, save_write_step, startup_warning_show_for_state,
 * static_init_4367d4
 */
u32 get_field_a524_01f514(int a0, u32 unused_a1, u32 a2) {
    return *(u32 *)(0xa524 + a0);
}

/*
 * identity  0x8c01f520
 * returns its first argument
 * called by: Class_12b388_m1_0c5c08, confirm_exit_save, game_uses_free_if_nonnull_wrap_0e8280,
 * game_uses_get_field_24_0e5238, game_uses_identity_0b726c, memcard_flush_and_close_8c3dd7dc, save_check_files,
 * save_file_load (+10 more)
 */
u32 identity(u32 a0, u32 unused_a1, u32 unused_a2, u32 a3) {
    return a0;
}

/*
 * field_ptr_384c  0x8c01f528
 * returns the address of the member at +0x384c
 * called by: CGame_GetUserGameInfo, CGame_uses_libgcc_divide_helper_0cc784, CProlog_uses_libgcc_divide_helper_0cd3c8,
 * a_button_mic_start_stop_like, game_copy_0c67f4, game_uses_input_track_r_hold_0e1f90,
 * game_uses_pure_virtual_stub_0dfe2c, input_uses_get_field_24_0e25c0 (+1 more)
 */
int field_ptr_384c(int a0) {
    return a0 + 0x384c;
}

/*
 * get_field_a510_01f538  0x8c01f538
 * called by: CGame_Initial, ambient_sound_update, game_uses_get_field_a510_0fc4c4, game_uses_speech_is_playing_0bad68,
 * save_check_files, save_files_check, save_write_step
 */
u32 get_field_a510_01f538(int a0) {
    return *(u32 *)(0xa510 + a0);
}

/*
 * input_asr_take_flag_a  0x8c01f544
 * asr_take_flag_279278 for the input object
 * called by: input_input_helper_100cb4
 */
u32 input_asr_take_flag_a(int a0) {
    u32 r5;
    u32 r6;
    u32 r7;
    u32 uVar1;

    uVar1 = asr_take_flag_279278(a0 + 0x384c, r5, r6, r7);
    return uVar1;
}

/*
 * input_asr_take_flag_b  0x8c01f56c
 * asr_take_flag_27927c for the input object
 * called by: input_asr_flag_b_set
 */
u32 input_asr_take_flag_b(int a0) {
    u32 r5;
    u32 r6;
    u32 r7;
    u32 uVar1;

    uVar1 = asr_take_flag_27927c(a0 + 0x384c, r5, r6, r7);
    return uVar1;
}

/*
 * gd_check_lid_open  0x8c01f594
 * sets 8c2792a0 to 6 when the GD drive status (driver slot 0x54) is 6 or 7 (lid open / no disc)
 * called by: vblank_hook_check_lid
 */
u32 gd_check_lid_open(u32 a0, u32 a1, u32 a2, u32 a3) {
    int iVar1;

    g_8c2792a0 = 0;
    iVar1 = shinobi_test_1f3a34(a0, a1, a2, a3);
    if ((iVar1 == 6) || (iVar1 == 7)) {
        g_8c2792a0 = 6;
    }
    return g_8c2792a0;
}

/*
 * identity_01f5d0  0x8c01f5d0
 * returns a0
 * called by: static_init_vec3s_286e20
 */
u32 identity_01f5d0(u32 a0) {
    return a0;
}

/*
 * free_if_nonnull_wrap_01f5d8  0x8c01f5d8
 */
int free_if_nonnull_wrap_01f5d8(int a0, u32 a1, u32 a2, u32 a3) {
    u32 in_stack_fffffff4;

    if ((a0 != 0) && (0 < (short)a1)) {
        free_if_nonnull(a0, a1, a2, a3, CONCAT22((short)((u32)in_stack_fffffff4 >> 0x10), (short)a1));
    }
    return a0;
}

/*
 * input_uses_file_slot_open_01f608  0x8c01f608
 * name hint from a string it uses: SPEECH; area name: sits between input functions (same compilation unit); behaviour
 name: its main named callee is file_slot_open
 * called by: game_init_sound_and_messages
 * strings: ",0,a3);
  ar6_00 = 2;
  file_slot_open(a0,"; ",1,a3);
  ar5_00 = "; ";
  ar4_00 = a0;
  uVar1 = ar6_00;
  file_slot_open(a0,"
 */
u32 input_uses_file_slot_open_01f608(u32 *a0, u32 a1, u32 a2, u32 a3) {
    u32 uVar1;
    u32 *ar4_00;
    char *ar5_00;
    int iVar2;
    u32 ar6_00;

    *a0 = 0;
    a0[1] = 0;
    a0[8] = 0;
    a0[9] = 0;
    a0[10] = 0;
    a0[0xb] = 0;
    a0[0xc] = 0;
    a0[0xd] = 0;
    uVar1 = malloc_thunk(0x4b800, a1, a2, a3);
    a0[4] = uVar1;
    g_8c2792a0 = 0;
    for (iVar2 = 0; iVar2 < 3; iVar2 = iVar2 + 1) {
        *(u8 *)(a0 + iVar2 * 0x580d + 0xe) = 0;
    }
    file_slot_open(a0, "\\", 0, a3);
    ar6_00 = 2;
    file_slot_open(a0, "SPEECH", 1, a3);
    ar5_00 = "GRAPHICS";
    ar4_00 = a0;
    uVar1 = ar6_00;
    file_slot_open(a0, "GRAPHICS", 2, a3);
    cri_uses_irq_disable_nested_262810(ar4_00, ar5_00, ar6_00, a3, uVar1);
    *(u8 *)(a0 + 7) = 0;
    return 1;
}

/*
 * file_slot_open  0x8c01f6dc
 * opens file a1 in slot a2 (< 3, 0x16034 bytes each) with a 2 KB buffer
 * called by: input_uses_file_slot_open_01f608
 */
u32 file_slot_open(int a0, u32 a1, int a2, u32 a3) {
    u32 uVar1;
    int ar6_00;

    uVar1 = 3;
    if (a2 < 3) {
        ar6_00 = a2;
        strcpy(a0 + a2 * 0x16034 + 0x38, a1);
        uVar1 = set_fields_0_4_8_1f3078(a0 + a2 * 0x16034 + 0x5c, 0x800);
        *(u32 *)(a0 + a2 * 0x16034 + 0x58) = uVar1;
        uVar1 = gdfs_test_1f3926(a0 + a2 * 0x16034 + 0x38, *(u32 *)(a0 + a2 * 0x16034 + 0x58), ar6_00, a3);
    }
    return uVar1;
}

/*
 * game_test_01f780  0x8c01f780
 * area name: game code; nothing names its area yet; behaviour name: returns the result of a comparison
 * called by: pack_close_and_flush
 */
u32 game_test_01f780(int a0) {
    if (*(int *)(a0 + 0x20) == 0) {
        return 0;
    }
    return 1;
}

/*
 * game_uses_CDCGD_finish_texture_request_01f794  0x8c01f794
 * area name: game code; nothing names its area yet; behaviour name: its main named callee is
 * CDCGD_finish_texture_request called by: game_poll_exit, game_uses_CDCGD_finish_texture_request_01f810
 */
u32 game_uses_CDCGD_finish_texture_request_01f794(int a0, u32 a1, u32 a2, u32 a3) {
    int iVar1;
    u32 uVar2;

    if (*(int *)(a0 + 4) == 0) {
        CDCGD_uses_CDCGD_file_exists_02009c(a0, a1, a2, a3);
    } else {
        iVar1 = **(int **)(a0 + 4);
        if (iVar1 == 0xb) {
            CDCGD_uses_ADXF_GetStat_01fab4(a0, a1, a2, a3);
        } else if (((iVar1 == 0xc) || (iVar1 == 0xd)) || (iVar1 == 0xe)) {
            CDCGD_finish_texture_request(a0, a1, a2, a3);
        } else {
            cd_load_poll_finish(a0, a1, a2, a3);
        }
    }
    uVar2 = game_calls_test_01f83c(a0, a1, a2, a3);
    return uVar2;
}

/*
 * game_uses_CDCGD_finish_texture_request_01f810  0x8c01f810
 * area name: game code; nothing names its area yet; behaviour name: its callees mostly do:
 * uses_CDCGD_finish_texture_request called by: file_load_into_object_buffer, file_load_to_buffer,
 * retry_until_done_0209b0, retry_until_done_020aa8, retry_until_done_020ba0, retry_until_done_020c98,
 * retry_until_done_020d90, retry_until_done_020e80 (+2 more)
 */
u32 game_uses_CDCGD_finish_texture_request_01f810(u32 a0, u32 a1, u32 a2, u32 a3) {
    int iVar1;

    iVar1 = game_uses_CDCGD_finish_texture_request_01f794(a0, a1, a2, a3);
    return (u32)(iVar1 == 0);
}

/*
 * game_calls_test_01f83c  0x8c01f83c
 * area name: game code; nothing names its area yet; behaviour name: its callees mostly do: test
 * called by: game_uses_CDCGD_finish_texture_request_01f794
 */
u32 game_calls_test_01f83c(int a0, u32 a1, u32 a2, u32 a3) {
    u32 uVar1;

    if (g_8c2792a0 == 6) {
        uVar1 = 1;
    } else if (g_8c2792a0 == 7) {
        uVar1 = 2;
    } else {
        *(char *)(a0 + 0x1c) = *(char *)(a0 + 0x1c) + '\x01';
        if (((*(int *)(a0 + 4) == 0) && (*(int *)(a0 + 0x20) == 0)) && (*(char *)(a0 + 0x1c) == '\0')) {
            shinobi_test_1f3a4c(a0, a1, a2, a3);
        }
        uVar1 = 0;
    }
    return uVar1;
}

/*
 * cd_load_poll_finish  0x8c01f8a4
 * when the current ADXF read ends, closes the file and hands the data to the request's handler (types 0xf/0x10 go onto
 * the done lists) called by: game_uses_CDCGD_finish_texture_request_01f794
 */
int cd_load_poll_finish(int *a0, u32 unused_a1, int *a2, int a3) {
    int iVar1;
    int *ar5_00;

    iVar1 = ADXF_GetStat(*a0, unused_a1, a2);
    if ((iVar1 == 3) || (iVar1 == 4)) {
        if (*a0 != 0) {
            ADXF_Close_like(*a0);
        }
        *a0 = 0;
        if (iVar1 == 3) {
            a3 = a0[1] + 0x10;
            a2 = a0 + 8;
            ar5_00 = *(int **)a0[1];
            CDCGD_load_020600(a0, ar5_00, a2, a3);
            iVar1 = *(int *)a0[1];
            if ((iVar1 < 0x11) && (-1 < iVar1)) {
                switch (iVar1) {
                default:
                    ar5_00 = (int *)a0[1];
                    CDCGD_uses_CDCGD_queue_unique_request_01fd08(a0, ar5_00, a2, a3);
                    break;
                case 0xb:
                case 0xc:
                case 0xd:
                case 0xe:
                    break;
                case 0xf:
                    a2 = (int *)a0[1];
                    ar5_00 = a0 + 0xc;
                    list_push_front(a0, ar5_00, a2);
                    break;
                case 0x10:
                    a2 = (int *)a0[1];
                    ar5_00 = a0 + 0xd;
                    list_push_front(a0, ar5_00, a2);
                }
            }
        } else {
            ar5_00 = (int *)a0[1];
            CDCGD_uses_ADXF_Close_like_02049c(a0, ar5_00, a2, a3);
        }
        iVar1 = CDCGD_uses_CDCGD_file_exists_02009c(a0, ar5_00, a2, a3);
    }
    return iVar1;
}

/*
 * CDCGD_finish_texture_request  0x8c01f9c4
 * loads the read texture by kind (0xc, 0xd or 0xe), registers it or closes the request, then opens the next file
 * called by: game_uses_CDCGD_finish_texture_request_01f794
 */
u32 CDCGD_finish_texture_request(int a0, u32 unused_a1, u32 a2, int a3) {
    int iVar1;
    u32 uVar2;
    int unaff_r13;

    iVar1 = **(int **)(a0 + 4);
    if (iVar1 == 0xc) {
        iVar1 = njLoadTexture(*(u32 *)(*(int *)(a0 + 4) + 8), unused_a1, a2, a3);
        if (iVar1 == 1) {
            unaff_r13 = 1;
        } else {
            unaff_r13 = -1;
        }
    } else if (iVar1 == 0xd) {
        iVar1 = (*(code *)(&ninja_uses_ninja_close_file_256164))(*(int *)(a0 + 4) + 0x10,
                                                                 *(u32 *)(*(int *)(a0 + 4) + 8), a2, a3);
        if (iVar1 == 1) {
            unaff_r13 = 1;
        } else {
            unaff_r13 = -1;
        }
    } else if (iVar1 == 0xe) {
        iVar1 = (*(code *)(&gfxlib_uses_ninja_close_file_239212))(*(int *)(a0 + 4) + 0x10,
                                                                  *(u32 *)(*(int *)(a0 + 4) + 8), a2, a3);
        if (iVar1 == 1) {
            unaff_r13 = 1;
        } else {
            unaff_r13 = -1;
        }
    }
    if (unaff_r13 == 1) {
        a3 = *(int *)(a0 + 4) + 0x10;
        CDCGD_load_020600(a0, **(u32 **)(a0 + 4), a0 + 0x20, a3);
        a2 = *(u32 *)(a0 + 4);
        iVar1 = a0 + 0x2c;
        list_push_front(a0, iVar1, a2);
    } else {
        iVar1 = *(int *)(a0 + 4);
        CDCGD_uses_ADXF_Close_like_02049c(a0, iVar1, a2, a3);
    }
    uVar2 = CDCGD_uses_CDCGD_file_exists_02009c(a0, iVar1, a2, a3);
    return uVar2;
}

/*
 * CDCGD_uses_ADXF_GetStat_01fab4  0x8c01fab4
 * area name: sits between CDCGD functions (same compilation unit); behaviour name: its main named callee is
 * ADXF_GetStat called by: game_uses_CDCGD_finish_texture_request_01f794
 */
int CDCGD_uses_ADXF_GetStat_01fab4(int *a0, int *a1, int a2, int a3) {
    int iVar1;
    int iVar2;
    u32 uVar3;

    iVar2 = a0[4];
    iVar1 = a0[5];
    if (iVar1 == 1) {
        a0[5] = 2;
        a0[6] = a0[6] - 0x800;
        iVar2 = a0[4];
        iVar1 = ADXF_uses_lib_error_printf_262312(*a0, 1, iVar2);
        if (iVar1 < 0) {
            CDCGD_uses_ADXF_Close_like_02049c(a0, a0[1], iVar2, a3);
            iVar1 = 5;
            a0[5] = 5;
        }
    } else if (iVar1 == 2) {
        iVar1 = ADXF_GetStat(*a0, a1, a2);
        if (iVar1 == 3) {
            a0[5] = 4;
            iVar1 = 0x800;
            if (0x800 < *(int *)(iVar2 + 0x20)) {
                a0[5] = 3;
                uVar3 = *(int *)(iVar2 + 0x20) + 0xfffff800;
                a0[6] = a0[6] - uVar3;
                if (0x4b800 < uVar3) {
                    CDCGD_uses_ADXF_Close_like_02049c(a0, a0[1], a2, a3);
                    a0[5] = 5;
                }
                iVar2 = a0[4] + 0x800;
                iVar1 = (*(code *)(&ADXF_uses_lib_error_printf_262312))(*a0, uVar3 >> 0xb, iVar2, a3);
                if (iVar1 < 0) {
                    CDCGD_uses_ADXF_Close_like_02049c(a0, a0[1], iVar2, a3);
                    iVar1 = 5;
                    a0[5] = 5;
                }
            }
        } else if (iVar1 == 4) {
            CDCGD_uses_ADXF_Close_like_02049c(a0, a0[1], a2, a3);
            a0[5] = 5;
            iVar1 = 5;
        }
    } else if (iVar1 == 3) {
        iVar1 = ADXF_GetStat(*a0, a1, a2);
        if (iVar1 == 3) {
            a0[5] = 4;
            iVar1 = 4;
        } else if (iVar1 == 4) {
            CDCGD_uses_ADXF_Close_like_02049c(a0, a0[1], a2, a3);
            a0[5] = 5;
            iVar1 = 5;
        }
    } else {
        if (iVar1 == 4) {
            CDCGD_copy_01fc78(a0, a0[1], a2, a3);
            if (0 < a0[6]) {
                a0[5] = 1;
                return 1;
            }
            a3 = a0[1] + 0x10;
            CDCGD_load_020600(a0, *(u32 *)a0[1], a0 + 8, a3);
            a2 = a0[1];
            a1 = a0 + 10;
            list_push_front(a0, a1, a2);
            if (*a0 != 0) {
                ADXF_Close_like(*a0);
            }
            *a0 = 0;
        }
        a0[5] = 0;
        a0[6] = 0;
        iVar1 = CDCGD_uses_CDCGD_file_exists_02009c(a0, a1, a2, a3);
    }
    return iVar1;
}

/*
 * CDCGD_copy_01fc78  0x8c01fc78
 * area name: sits between CDCGD functions (same compilation unit); behaviour name: mostly calls copy functions
 * called by: CDCGD_uses_ADXF_GetStat_01fab4
 */
u32 CDCGD_copy_01fc78(int a0, u32 *a1, u32 a2, u32 a3) {
    u32 uVar1;
    int iVar2;
    int iVar3;
    u32 uStack_ec;
    u32 uStack_e8;
    int iStack_e4;
    u32 uStack_e0;
    u8 auStack_dc[32];
    u8 auStack_bc[40];
    u32 auStack_94[33];

    uStack_ec = *a1;
    uStack_e8 = 0;
    strcpy(auStack_bc, a1 + 0xc);
    iVar2 = 0;
    while (iVar3 = iVar2, iVar3 < 0x20) {
        auStack_94[iVar3] = a1[iVar3 + 0x16];
        iVar2 = iVar3 + 1;
    }
    iVar2 = *(int *)(a0 + 0x10);
    strcpy(auStack_dc, iVar2);
    uStack_e0 = *(u32 *)(iVar2 + 0x20);
    iStack_e4 = iVar2 + 0x40;
    uVar1 = CDCGD_uses_CDCGD_queue_unique_request_01fd08(a0, &uStack_ec, a2, a3);
    return uVar1;
}

/*
 * CDCGD_uses_CDCGD_queue_unique_request_01fd08  0x8c01fd08
 * name hint from a string it uses: MCJNMBJNLTJNILJNACJNMDMNMILN; area name: sits between CDCGD functions (same
 * compilation unit); behaviour name: its main named callee is CDCGD_queue_unique_request called by: CDCGD_copy_01fc78,
 * cd_load_poll_finish strings: "MCJNMBJNLTJNILJNACJNMDMNMILNMACNMSSNDAJN0FOP\\";
 * "MBJNLTJNILJNACJNMDMNMILNMACNMSSNDAJN0FOP\\"; "LTJNILJNACJNMDMNMILNMACNMSSNDAJN0FOP\\";
 * "ILJNACJNMDMNMILNMACNMSSNDAJN0FOP\\" ...
 */
int CDCGD_uses_CDCGD_queue_unique_request_01fd08(u32 a0, int *a1, u32 unused_a2, u32 a3) {
    int iVar1;
    int *ar5_00;
    int *ar6_00;
    int aiStack_44[3];
    int iStack_38;
    int iStack_34;
    int iStack_30;
    int iStack_2c;
    int iStack_28;
    int iStack_24;
    int iStack_20;
    int iStack_1c;
    int iStack_18;
    int iStack_14;

    aiStack_44[1] = 0;
    aiStack_44[0] = 0;
    aiStack_44[2] = *(int *)"MCJNMBJNLTJNILJNACJNMDMNMILNMACNMSSNDAJN0FOP\\";
    iStack_38 = *(int *)("MBJNLTJNILJNACJNMDMNMILNMACNMSSNDAJN0FOP\\");
    iStack_34 = *(int *)("LTJNILJNACJNMDMNMILNMACNMSSNDAJN0FOP\\");
    iStack_30 = *(int *)("ILJNACJNMDMNMILNMACNMSSNDAJN0FOP\\");
    iStack_2c = *(int *)("ACJNMDMNMILNMACNMSSNDAJN0FOP\\");
    iStack_28 = *(int *)("MDMNMILNMACNMSSNDAJN0FOP\\");
    iStack_24 = *(int *)("MILNMACNMSSNDAJN0FOP\\");
    iStack_20 = *(int *)("MACNMSSNDAJN0FOP\\");
    iStack_1c = *(int *)("MSSNDAJN0FOP\\");
    iStack_18 = *(int *)("DAJN0FOP\\");
    iStack_14 = *(int *)("0FOP\\");
    while (true) {
        ar6_00 = aiStack_44;
        ar5_00 = aiStack_44 + 1;
        iVar1 = gdfs_uses_bswap32_2124d0(a1[2], ar5_00, ar6_00, a3);
        if (iVar1 == 0)
            break;
        if (aiStack_44[2] == aiStack_44[0]) {
            a3 = 0;
            CDCGD_queue_unique_request(a0, a1, iVar1, 0);
        } else if (iStack_38 == aiStack_44[0]) {
            a3 = 1;
            CDCGD_queue_unique_request(a0, a1, iVar1, 1);
        } else if (iStack_34 == aiStack_44[0]) {
            a3 = 2;
            CDCGD_queue_unique_request(a0, a1, iVar1, 2);
        } else if (iStack_30 == aiStack_44[0]) {
            a3 = 3;
            CDCGD_queue_unique_request(a0, a1, iVar1, 3);
        } else if (iStack_2c == aiStack_44[0]) {
            a3 = 4;
            CDCGD_queue_unique_request(a0, a1, iVar1, 4);
        } else if (iStack_28 == aiStack_44[0]) {
            a3 = 5;
            CDCGD_queue_unique_request(a0, a1, iVar1, 5);
        } else if (iStack_24 == aiStack_44[0]) {
            a3 = 6;
            CDCGD_queue_unique_request(a0, a1, iVar1, 6);
        } else if (iStack_20 == aiStack_44[0]) {
            a3 = 7;
            CDCGD_queue_unique_request(a0, a1, iVar1, 7);
        } else if (iStack_1c == aiStack_44[0]) {
            a3 = 8;
            CDCGD_queue_unique_request(a0, a1, iVar1, 8);
        } else if (iStack_18 == aiStack_44[0]) {
            a3 = 9;
            CDCGD_queue_unique_request(a0, a1, iVar1, 9);
        } else if (iStack_14 == aiStack_44[0]) {
            a3 = 10;
            CDCGD_queue_unique_request(a0, a1, iVar1, 10);
        } else {
            free_sys(iVar1, ar5_00, ar6_00, a3);
        }
    }
    iVar1 = *a1;
    if (iVar1 != 0xb) {
        iVar1 = free_sys(a1, ar5_00, ar6_00, a3);
    }
    return iVar1;
}

/*
 * CDCGD_queue_unique_request  0x8c01fec4
 * queues a new request for a3 (copying a1's names and 32 callbacks, buffer a2) unless one already exists, in which case
 * a2 is freed called by: CDCGD_uses_CDCGD_queue_unique_request_01fd08
 */
u32 CDCGD_queue_unique_request(int a0, int a1, u32 a2, u32 a3) {
    int iVar1;
    u32 uVar2;
    u32 ar6_00;
    int iVar3;
    int ar7_00;

    iVar3 = a1 + 0x10;
    ar6_00 = *(u32 *)(a0 + 0x28);
    uVar2 = a3;
    iVar1 = CDCGD_find_request(a0, a3, ar6_00, iVar3);
    if (iVar1 == 0) {
        ar7_00 = a1 + 0x30;
        iVar3 = a1 + 0x10;
        iVar1 = (*(code *)(&CDCGD_new_request_c))(a0, a3, iVar3, ar7_00, *(u32 *)(a1 + 0x50), *(u32 *)(a1 + 0x54));
        if (iVar1 == 0) {
            uVar2 = free_sys(a2, a3, iVar3, ar7_00);
        } else {
            *(u32 *)(iVar1 + 8) = a2;
            for (iVar3 = 0; iVar3 < 0x20; iVar3 = iVar3 + 1) {
                *(u32 *)(iVar1 + iVar3 * 4 + 0x58) = *(u32 *)(a1 + iVar3 * 4 + 0x58);
            }
            uVar2 = list_push_front(a0, a0 + 0x28, iVar1);
        }
    } else {
        uVar2 = free_sys(a2, uVar2, ar6_00, iVar3);
    }
    return uVar2;
}

/*
 * CDCGD_new_request  0x8c01ffa0
 * creates a request of another type
 * called by: CDCGD_request
 */
u32 CDCGD_new_request(int a0, u32 a1, u32 a2, u32 a3, u32 s0, u32 s4, u32 s8) {
    int ar6_00;

    ar6_00 = CDCGD_new_request_c(a0, a1, a2, a3, s0, s4);
    if (ar6_00 != 0) {
        list_push_front(a0, a0 + 0x20, ar6_00);
        CDCGD_slot_add(a0, ar6_00, s8);
    }
    return (u32)(ar6_00 != 0);
}
