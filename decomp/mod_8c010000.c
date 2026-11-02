/* Seaman (USA) region 0x8c010000-0x8c020000 (Ghidra decompiler, cleaned up by tools/readable.py) */

#include "seaman.h"
#include "globals.h"

/*
 * FUN_8c010080  0x8c010080
 * called by: FUN_8c102d40
 */
u32 *FUN_8c010080(u32 unused_a0, u32 unused_a1, u32 a2, u32 a3) {
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
 * FUN_8c0100b0  0x8c0100b0
 * called by: FUN_8c102bd0
 */
u32 FUN_8c0100b0(u32 a0, u32 a1, u32 a2, u32 a3) {
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
 * FUN_8c0100b6  0x8c0100b6
 */
u32 FUN_8c0100b6(u32 a0, u32 a1, u32 a2, u32 a3) {
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
 * called by: Class_12a990_m0_09bb44, Class_12b088_m0_0a62cc, Class_12b3b8_m0_0e77ec, Class_12b580_m0_0e61f4,
 * Class_12b758_m0_0e46cc, Class_12b930_m0_0dde84, Class_12bb08_m0_0da208, FUN_8c03220c (+78 more)
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
 * FUN_8c0100ec  0x8c0100ec
 */
u32 FUN_8c0100ec(int a0, code *a1, u32 a2, u32 a3) {
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
 * FUN_8c010120  0x8c010120
 * called by: CSquid_Init, FUN_8c02452c, FUN_8c02b920, FUN_8c02b9a8, FUN_8c03220c, FUN_8c039124, FUN_8c06d8e4,
 * FUN_8c08894c (+25 more)
 */
u32 FUN_8c010120(int a0, code *a1, code *a2, int a3, u32 s0) {
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
 * FUN_8c01012c  0x8c01012c
 */
u32 FUN_8c01012c(int a0, code *a1, code *a2, u32 a3, u32 s0, u32 s4, u32 s8, u32 s12, u32 s16, u32 s20) {
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
 * called by: FUN_8c0150e0, FUN_8c016978, FUN_8c018fb0, FUN_8c01a260, FUN_8c024240, FUN_8c02b778, FUN_8c02d5e8,
 * FUN_8c02d720 (+55 more)
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
 * called by: Class_1297f4_m0_014cf0, Class_12a03c_m1_03c43c, Class_12a25c_m1_06f530, Class_12b334_m1_0bf3d4,
 * Class_12b350_m1_0baa84, Class_12b388_m1_0c5c08, Class_12b930_m1_0de1dc, Class_12b930_m2_0de3d4 (+34 more) decompiler:
 * Control flow encountered unimplemented instructions
 */
u32 pure_virtual_stub(void) {
    /* WARNING: Unimplemented instruction - Truncating control flow here */
    halt_unimplemented();
}

/*
 * strcpy  0x8c0101d4
 * called by: FUN_8c01ab78, FUN_8c01af14, FUN_8c01b2a4, FUN_8c01bc2c, FUN_8c01c560, FUN_8c01d4c4, FUN_8c01d684,
 * FUN_8c01da90 (+41 more)
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
 * called by: CAnimal_m2_0386d0, Class_12a7f4_m2_09a060, Class_12a7f4_m3_09a558, Class_12a990_m2_09bc2c,
 * Class_12ad50_m2_0a4fdc, FUN_8c01679c, FUN_8c017900, FUN_8c0185a4 (+32 more)
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
 * called by: FUN_8c034d48, FUN_8c062b0c, FUN_8c0bcedc, FUN_8c0c2efc, FUN_8c0c3530, FUN_8c0c3e78, FUN_8c0cc784,
 * FUN_8c0cd3c8 (+1 more)
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
 * called by: CAnimal_m2_02573c, CAnimal_m3_026078, Class_12a7a8_m1_098d14, Class_12acc8_m1_09f470,
 * Class_12b0c4_m1_0ab7f4, Class_12b2e8_m1_0b5ad0, FUN_8c01679c, FUN_8c0254d0 (+69 more)
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
 * called by: FUN_8c02d854, FUN_8c034d48, FUN_8c0ba3e0, FUN_8c0cc784, FUN_8c0cd3c8, FUN_8c0d6164, FUN_8c0d7b60,
 * FUN_8c0d8890 (+2 more)
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
 * called by: FUN_8c010af8, FUN_8c010b08, FUN_8c010e84, FUN_8c01243c, FUN_8c012b1c, FUN_8c012c70, FUN_8c012e00,
 * FUN_8c012e04 (+58 more)
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
 * called by: FUN_8c0115c4, FUN_8c0143f0, FUN_8c1117e4, FUN_8c112d82, FUN_8c112f40, FUN_8c112f48, FUN_8c112fd8,
 * FUN_8c11318e (+29 more)
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
 * FUN_8c0105c4  0x8c0105c4
 * called by: FUN_8c010b60
 */
int FUN_8c0105c4(void) {
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
 * called by: FUN_8c012b1c, FUN_8c013374, FUN_8c1f61c6, FUN_8c1f620e, FUN_8c1f8614, FUN_8c200bfc, FUN_8c200c08,
 * FUN_8c2049ec (+14 more)
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
 * called by: FUN_8c0115c4, FUN_8c10e818, FUN_8c1f8300, FUN_8c1f8650, FUN_8c1f88f6, FUN_8c1f8b92, FUN_8c1f8be8,
 * FUN_8c200ba0 (+22 more)
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
 * FUN_8c010794  0x8c010794
 * called by: FUN_8c1f826c, FUN_8c1f8300, FUN_8c1fb664, FUN_8c201bae, FUN_8c201c08, FUN_8c201c92, FUN_8c201cf6,
 * FUN_8c201d84 (+44 more)
 */
u32 FUN_8c010794(u32 a0, u32 a1, u32 a2, u32 a3) {
    int in_r0;
    u32 uVar1;

    /* WARNING: Could not recover jumptable at 0x8c01079c. Too many branches */
    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)((&DATA_8c0107f4) + in_r0))();
    return uVar1;
}

/*
 * FUN_8c0107a0  0x8c0107a0
 * called by: FUN_8c2140a4, FUN_8c2140c6, FUN_8c2218f4, FUN_8c221916, FUN_8c2336e8, FUN_8c267fe8, FUN_8c268920,
 * FUN_8c26892c
 */
u32 FUN_8c0107a0(u32 a0, u32 a1, u32 a2, u32 a3) {
    int in_r0;
    u32 uVar1;

    /* WARNING: Could not recover jumptable at 0x8c0107a8. Too many branches */
    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)((&DATA_8c0107f4) + in_r0))();
    return uVar1;
}

/*
 * FUN_8c0107f0  0x8c0107f0
 */
u32 FUN_8c0107f0(void) {
    u32 in_r0;

    return in_r0;
}

/*
 * FUN_8c010838  0x8c010838
 * called by: FUN_8c20df7a, FUN_8c23340c, FUN_8c2336e8, FUN_8c2588f8, FUN_8c25dc60, FUN_8c25e540, FUN_8c25e884,
 * FUN_8c25eb60 decompiler: Exceeded maximum restarts with more pending
 */
u32 FUN_8c010838(u32 a0, u32 a1, u32 a2, u32 a3) {
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
 * FUN_8c0108f8  0x8c0108f8
 */
u32 *FUN_8c0108f8(void) {
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
 * FUN_8c0108fc  0x8c0108fc
 * called by: FUN_8c010998
 */
u32 *FUN_8c0108fc(void) {
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
 * FUN_8c010960  0x8c010960
 * called by: g2dma_1f4794
 */
int FUN_8c010960(u32 unused_a0, u32 a1) {
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
 * FUN_8c010998  0x8c010998
 * called by: FUN_8c1f6ce2, FUN_8c25a174, FUN_8c25b4da
 */
char *FUN_8c010998(void) {
    char cVar1;
    char *in_r0;
    u32 uVar2;
    char *in_r1;
    char *pcVar3;

    if (((u32)in_r1 & 3) == 0 && ((u32)in_r0 & 3) == 0) {
        uVar2 = FUN_8c0108fc();
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
 * FUN_8c0109e8  0x8c0109e8
 * called by: FUN_8c01439c, FUN_8c10ca58, FUN_8c25a174
 */
int FUN_8c0109e8(u32 *a0, u32 *a1) {
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
 * FUN_8c010a90  0x8c010a90
 * called by: FUN_8c011960
 */
u32 FUN_8c010a90(void) {
    u32 in_r0;
    int iVar1;

    iVar1 = 5;
    do {
        iVar1 = iVar1 + -1;
    } while (0 < iVar1);
    return in_r0;
}

/*
 * FUN_8c010ab4  0x8c010ab4
 * called by: FUN_8c011e10, FUN_8c012328
 */
u32 FUN_8c010ab4(void) {
    u32 in_r0;
    int iVar1;

    iVar1 = 6;
    do {
        iVar1 = iVar1 + -1;
    } while (0 < iVar1);
    return in_r0;
}

/*
 * FUN_8c010ad4  0x8c010ad4
 * called by: FUN_8c011e10, FUN_8c012328
 */
u32 FUN_8c010ad4(void) {
    u32 in_r0;
    int iVar1;

    iVar1 = 6;
    do {
        iVar1 = iVar1 + -1;
    } while (0 < iVar1);
    return in_r0;
}

/*
 * FUN_8c010af8  0x8c010af8
 * called by: FUN_8c010c60, FUN_8c0128e8
 */
int FUN_8c010af8(char *a0, int a1, int a2, u32 unused_a3, int ain0) {
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
 * FUN_8c010b08  0x8c010b08
 */
int FUN_8c010b08(char *a0, int a1, char *a2, u32 unused_a3, int ain0) {
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
 * FUN_8c010b40  0x8c010b40
 * called by: FUN_8c013060
 */
u32 FUN_8c010b40(char *a0, int a1) {
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
 * FUN_8c010b60  0x8c010b60
 * called by: FUN_8c013060
 */
u32 FUN_8c010b60(u32 a0, u32 a1, int a2, u32 a3) {
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
        FUN_8c012b1c(-a2, &stack0xffffffcc, auStack_20, a3);
        iVar2 = (int)(short)uVar4;
        FUN_8c0129b4(&stack0xffffffcc, auStack_20, iVar2, a1);
    } else {
        FUN_8c012b1c(a2, &stack0xffffffcc, auStack_20, a3);
        iVar2 = (int)(short)uVar4;
        FUN_8c010c60(&stack0xffffffcc, auStack_20, iVar2, a1);
        puVar8 = puVar5;
    }
    iVar9 = 0x3f - (short)in_stack_ffffffcc;
    iVar3 = FUN_8c0105c4();
    FUN_8c012e00(auStack_20, 9, 0x42 - (short)iVar9);
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
    FUN_8c012da8(auStack_20, 9, iVar9);
    FUN_8c012c70(auStack_20, 0x40);
    uVar4 = memmove(a3, auStack_20, 8);
    return uVar4;
}

/*
 * FUN_8c010c60  0x8c010c60
 * called by: FUN_8c010b60
 */
u32 FUN_8c010c60(short *a0, u32 a1, u32 a2, u32 a3) {
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
        FUN_8c012854(auStack_48, 0xc);
        a3 = 0xc;
        a6 = auStack_38;
        iVar1 = FUN_8c012eac(0, &cStack_2c, auStack_38, 0xc);
        if (iVar1 < 0) {
            a6 = (u8 *)0xc;
            FUN_8c010af8(&cStack_2c, auStack_38, 0xc, a3, ain0);
        } else {
            *ain0 = *ain0 + '\x01';
        }
        FUN_8c012854(&cStack_2c, 0xc);
    }
    for (iVar3 = 2; iVar3 != 0; iVar3 = iVar3 + -1) {
        FUN_8c012d5c(auStack_48, 0x10);
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
            FUN_8c012854(&bStack_44, 9);
            *a0 = *a0 + -1;
        }
    }
    uVar2 = memmove(a1, &bStack_44, 9);
    return uVar2;
}

/*
 * FUN_8c010df4  0x8c010df4
 * called by: FUN_8c0125b6, FUN_8c012734
 */
u32 FUN_8c010df4(void) {
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
 * FUN_8c010e38  0x8c010e38
 * called by: FUN_8c03c94c, FUN_8c03f4a4, FUN_8c049b68, FUN_8c04b168, FUN_8c04e2d0, FUN_8c0507c0, FUN_8c051c14,
 * FUN_8c07ff08 (+4 more)
 */
u32 FUN_8c010e38(u32 unused_a0, u32 unused_a1, u32 unused_a2, u32 unused_a3, u32 ain0) {
    u32 in_fr4;

    if ((in_fr4 & 0x7f800000) == 0x7f800000) {
        if ((in_fr4 & 0x7fffff) == 0) {
            g_8c2787a8 = 0x44c;
        } else {
            g_8c2787a8 = 0x44d;
        }
    }
}

/*
 * FUN_8c010e84  0x8c010e84
 * called by: FUN_8c014334, vsprintf_like
 */
u32 FUN_8c010e84(int a0, u8 *a1, int *a2, u8 *a3) {
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
    iVar2 = FUN_8c011836(&iStack_30);
    if (iVar2 != 0) {
        return 0xffffffff;
    }
    pbStack_e0 = abStack_dc;
    do {
        while (true) {
            if (((*a3 == 0) || (iVar2 = FUN_8c011836(&iStack_30), iVar2 != 0)) || ((abStack_5c[0] & 1) != 0)) {
                FUN_8c011826(&iStack_30);
                return uStack_28;
            }
            pbStack_f0 = a3;
            if (*a3 == 0x25)
                break;
            for (; (*pbStack_f0 != 0 && (*pbStack_f0 != 0x25)); pbStack_f0 = pbStack_f0 + 1) {
            }
            a1 = pbStack_f0 + -(int)a3;
            a2 = &iStack_30;
            FUN_8c0117ce(a3, a1, &iStack_30);
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
            FUN_8c0115c4(uVar3, abStack_dc, a2, abStack_5c);
            pbStack_e4 = (u8 *)log_message(abStack_dc, a1, a2);
            pbStack_ec = abStack_dc;
        } else if (((bVar1 == 0x66) || (bVar1 == 0x65)) || ((bVar1 == 0x45 || ((bVar1 == 0x67 || (bVar1 == 0x47)))))) {
            a2 = (int *)(int)(char)*pbVar9;
            a1 = abStack_dc;
            a7 = abStack_5c;
            FUN_8c013374(&stack0x00000000, abStack_dc, a2, abStack_5c);
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
            FUN_8c0115c4(*puVar4, abStack_dc, 0x78, abStack_5c);
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
                    FUN_8c0117ce(abStack_5c + 1, 1, &iStack_30);
                }
            }
            if (((iStack_40 == 0) && (iStack_3c == 0)) && (iStack_38 == 0)) {
                a1 = pbStack_e4;
                a2 = &iStack_30;
                FUN_8c0117ce(pbStack_ec, pbStack_e4, &iStack_30);
            } else {
                iVar2 = (int)pbStack_4c - (int)pbStack_ec;
                if (0 < iVar2) {
                    FUN_8c0117ce(pbStack_ec, iVar2, &iStack_30);
                }
                for (; 0 < iStack_40; iStack_40 = iStack_40 + -1) {
                    FUN_8c0117ce(auStack_e8, 1, &iStack_30);
                }
                iVar6 = (int)pbStack_48 - (int)pbStack_4c;
                if (0 < iVar6) {
                    FUN_8c0117ce(pbStack_4c, iVar6, &iStack_30);
                }
                for (; 0 < iStack_3c; iStack_3c = iStack_3c + -1) {
                    FUN_8c0117ce(auStack_e8, 1, &iStack_30);
                }
                a1 = pbStack_e4 + -(iVar2 + iVar6);
                a2 = &iStack_30;
                FUN_8c0117ce(pbStack_48, a1, &iStack_30);
                for (; 0 < iStack_38; iStack_38 = iStack_38 + -1) {
                    a1 = (u8 *)0x1;
                    a2 = &iStack_30;
                    FUN_8c0117ce(auStack_e8, 1, &iStack_30);
                }
            }
            if (((abStack_5c[0] & 2) != 0) && (0 < iStack_34)) {
                for (; 0 < iStack_34; iStack_34 = iStack_34 + -1) {
                    a1 = (u8 *)0x1;
                    a2 = &iStack_30;
                    FUN_8c0117ce(abStack_5c + 1, 1, &iStack_30);
                }
            }
        }
        a3 = pbVar9 + 1;
    } while (true);
}

/*
 * FUN_8c0115c4  0x8c0115c4
 * called by: FUN_8c010e84
 */
int FUN_8c0115c4(int a0, char *a1, int a2, u8 *a3) {
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
 * FUN_8c0117ce  0x8c0117ce
 * called by: FUN_8c010e84
 */
int FUN_8c0117ce(char *a0, int a1, int *a2) {
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
 * FUN_8c0117da  0x8c0117da
 */
int FUN_8c0117da(u32 unused_a0, int a1, u32 a2, u32 a3) {
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
 * FUN_8c011826  0x8c011826
 * called by: FUN_8c010e84
 */
int FUN_8c011826(int *a0) {
    int iVar1;

    iVar1 = *a0;
    if (iVar1 == 1) {
        *(u8 *)a0[1] = 0;
    }
    return iVar1;
}

/*
 * FUN_8c011836  0x8c011836
 * called by: FUN_8c010e84
 */
u32 FUN_8c011836(int *a0) {
    if (*a0 == 1) {
        return 0;
    }
    return (int)*(char *)(a0[1] + 0x10) & 0x40;
}

/*
 * FUN_8c011850  0x8c011850
 * called by: FUN_8c013aec, FUN_8c013b3c
 */
u32 FUN_8c011850(void) {
    u32 uVar1;

    uVar1 = FUN_8c01186c();
    return uVar1;
}

/*
 * FUN_8c01186c  0x8c01186c
 * called by: FUN_8c011850
 */
u32 FUN_8c01186c(void) {
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
        FUN_8c011960(ar4_00, &g_8c1257f8, 1, 4);
        uVar1 = FUN_8c011d50(1, ar5_00, ar6_00, ar7_00, ain0);
    }
    return uVar1;
}

/*
 * FUN_8c011960  0x8c011960
 * called by: FUN_8c01186c, FUN_8c011b44
 */
u32 FUN_8c011960(u32 unused_a0, u32 a1, u32 a2, u32 a3) {
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
        FUN_8c011c5c(ar4_00, ar5_00, 1, 4, ain0);
        if (iStack_24 != 0) {
            if ((iStack_24 == 1) || (iStack_24 == 2)) {
                ar4_00 = (int *)0xfffffffe;
                FUN_8c011d50(0xfffffffe, ar5_00, ar6_00, ar7_00, ain0);
            } else if ((iStack_24 == 3) || (iStack_24 == 4)) {
                ar4_00 = (int *)0xffffffff;
                FUN_8c011d50(0xffffffff, ar5_00, ar6_00, ar7_00, ain0);
            } else if ((((iStack_24 != 5) && (iStack_24 != 6)) && (iStack_24 != 7)) && (iStack_24 != 8)) {
                return iStack_24;
            }
        }
        uVar1 = FUN_8c010a90();
    }
    return uVar1;
}

/*
 * FUN_8c011b44  0x8c011b44
 * called by: FUN_8c013b8c
 */
u32 FUN_8c011b44(u32 unused_a0, u32 a1, u32 a2, u32 a3) {
    u32 uVar1;

    uVar1 = FUN_8c011960(unused_a0, a1, a2, a3);
    return uVar1;
}

/*
 * FUN_8c011b9c  0x8c011b9c
 * called by: FUN_8c013be8
 */
int FUN_8c011b9c(u32 unused_a0, u32 unused_a1, u32 unused_a2, u32 unused_a3, int ain0) {
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
 * FUN_8c011bfc  0x8c011bfc
 * called by: FUN_8c013d28
 */
int FUN_8c011bfc(u32 unused_a0, u32 unused_a1, u32 unused_a2, u32 unused_a3, int ain0) {
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
 * FUN_8c011c5c  0x8c011c5c
 * called by: FUN_8c011960, FUN_8c011e10, FUN_8c012328
 */
u32 *FUN_8c011c5c(int *a0, u32 a1, u32 a2, u32 a3, u32 *ain0) {
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
 * FUN_8c011d50  0x8c011d50
 * called by: FUN_8c01186c, FUN_8c011960, FUN_8c011f18, FUN_8c0121bc
 */
u32 FUN_8c011d50(int a0, u32 unused_a1, u32 unused_a2, u32 a3, u32 ain0) {
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
 * FUN_8c011e10  0x8c011e10
 * called by: FUN_8c013c38, FUN_8c013c88
 */
u32 FUN_8c011e10(u32 unused_a0, u32 unused_a1, u32 a2, u32 a3) {
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
    uVar1 = FUN_8c011c5c(&stack0xfffffff4, 8, a2, a3, in_stack_fffffff4);
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
        uVar2 = FUN_8c010ab4();
    } else if ((uVar2 == 1) || (uVar2 == 2)) {
        uVar2 = FUN_8c010ad4();
    } else if ((uVar2 == 3) || (uVar2 == 4)) {
        uVar2 = FUN_8c010ab4();
    } else if ((uVar2 == 5) || (uVar2 == 6)) {
        uVar2 = FUN_8c010ad4();
    }
    return uVar2;
}

/*
 * FUN_8c011f18  0x8c011f18
 * called by: FUN_8c0121bc, FUN_8c013cd8
 */
u32 FUN_8c011f18(void) {
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
        uVar1 = FUN_8c011d50(ar4_00, iVar3, ar6_00, 6, fVar4);
        return uVar1;
    }
    if ((uVar2 & 8) == 0) {
        return (u32)&g_8c125800;
    }
    return uVar2;
}

/*
 * FUN_8c012090  0x8c012090
 * called by: FUN_8c0121bc, FUN_8c013dfc
 */
u32 *FUN_8c012090(u32 unused_a0, u32 a1, u32 a2, u32 a3) {
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
 * FUN_8c0121bc  0x8c0121bc
 * called by: FUN_8c014064
 */
u32 FUN_8c0121bc(u32 unused_a0, u32 unused_a1, u32 unused_a2, u32 unused_a3, u32 ain0) {
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
                FUN_8c012090(ar4_01, ar5_01, 8, 1);
                FUN_8c011f18();
                ain0 = FUN_8c011d50(0xffffffff, ar5_01, ar6_00, ar7_00, fVar1);
            }
        } else {
            FUN_8c012090(ar4_00, 4, 8, 1);
            ain0 = FUN_8c011f18();
        }
    }
    return ain0;
}

/*
 * FUN_8c012328  0x8c012328
 * called by: FUN_8c014294, FUN_8c0142e4
 */
u32 FUN_8c012328(u32 unused_a0, u32 unused_a1, u32 unused_a2, u32 a3) {
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
        ain0 = FUN_8c011c5c(&stack0xffffffec, 8, 0, a3, in_stack_ffffffec);
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
                ain0 = FUN_8c010ad4();
            } else if ((ain0 == 1) || (ain0 == 2)) {
                ain0 = FUN_8c010ab4();
            } else if ((ain0 == 3) || (ain0 == 4)) {
                ain0 = FUN_8c010ad4();
            } else if ((ain0 == 5) || (ain0 == 6)) {
                ain0 = FUN_8c010ab4();
            }
        }
    }
    return ain0;
}

/*
 * FUN_8c01243c  0x8c01243c
 * called by: FUN_8c013374
 */
int FUN_8c01243c(u32 a0, char *a1, int a2) {
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
            iVar2 = FUN_8c012f24(auStack_28 + iVar6, auStack_28 + iVar1, ar6_00);
            if (-1 < iVar2) {
                iVar2 = FUN_8c012eac(0, auStack_28 + iVar6, auStack_28 + iVar1, ar6_00);
                iStack_44 = iStack_44 + iVar4;
                iStack_34 = iVar2;
            }
            iVar4 = iVar4 >> 1;
            if (iVar4 == 0)
                break;
            iVar2 = FUN_8c012da8(auStack_28 + iVar1, ar6_00, 1);
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
 * FUN_8c01256c  0x8c01256c
 * called by: FUN_8c013060
 */
int FUN_8c01256c(void) {
    double dVar1;
    char cVar2;
    u32 uStack_10;
    u32 uStack_c;
    u32 auStack_8[2];

    FUN_8c0125b6(auStack_8);
    cVar2 = '\0';
    FUN_8c012734(&uStack_10);
    if (cVar2 == '\0') {
        dVar1 = (double)CONCAT44(uStack_c, uStack_10);
    } else {
        dVar1 = (double)CONCAT44(auStack_8[0], uStack_c);
    }
    return (int)dVar1;
}

/*
 * FUN_8c0125b6  0x8c0125b6
 * called by: FUN_8c01256c
 */
u32 FUN_8c0125b6(int *a0) {
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
    iVar1 = FUN_8c010df4();
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
            FUN_8c012a24(&uStack_30, &uStack_24);
            FUN_8c012a24(auStack_2c, &uStack_28);
            while ((abStack_2f[0] & 0x10) == 0) {
                FUN_8c012854(abStack_2f, 7);
                *a0 = *a0 + -1;
            }
            FUN_8c012a24(&uStack_24, &uStack_30);
            FUN_8c012a24(&uStack_28, auStack_2c);
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
 * FUN_8c012734  0x8c012734
 * called by: FUN_8c01256c
 */
u32 FUN_8c012734(u32 *a0) {
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
    iVar1 = FUN_8c010df4();
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
 * FUN_8c012854  0x8c012854
 * called by: FUN_8c010c60, FUN_8c0125b6, FUN_8c0129b4
 */
u32 FUN_8c012854(u8 *a0, int a1) {
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
 * FUN_8c01289c  0x8c01289c
 * called by: FUN_8c012a60, FUN_8c012f58, FUN_8c013060
 */
u32 FUN_8c01289c(u8 *a0, int a1, u32 a2) {
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
 * FUN_8c0128e8  0x8c0128e8
 */
int FUN_8c0128e8(int a0, int a1, int a2, u32 a3) {
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
                FUN_8c012a40(abStack_34 + iVar1, &stack0xffffffc4);
                sVar3 = sVar3 + -1;
            } while (-1 < sVar3);
            if (sVar2 == 7) {
                iVar4 = memmove(a2 + 7, abStack_34 + 7, 9);
            } else {
                iVar4 = FUN_8c010af8(iVar4 + a2, abStack_34 + iVar4, 9, a3, in_stack_ffffffc4);
            }
        }
        sVar2 = sVar2 + -1;
    } while (-1 < sVar2);
    return iVar4;
}

/*
 * FUN_8c0129b4  0x8c0129b4
 * called by: FUN_8c010b60, FUN_8c012b1c
 */
u32 FUN_8c0129b4(short *a0, u32 a1, u32 a2, u32 a3) {
    u8 *puVar1;
    u32 uVar2;
    u8 abStack_1c[8];
    u8 bStack_14;

    puVar1 = (&FUN_8c0128e8);
    *a0 = (short)a2 + *a0;
    (*(code *)puVar1)(a1, a3, abStack_1c, a3);
    if ((abStack_1c[0] & 0x80) == 0) {
        FUN_8c012854(abStack_1c, 0x10);
    } else {
        *a0 = *a0 + 1;
    }
    FUN_8c012e00(abStack_1c, 0x10, 0x42);
    bStack_14 = bStack_14 & 0xe0;
    uVar2 = memmove(a1, abStack_1c, 9);
    return uVar2;
}

/*
 * FUN_8c012a24  0x8c012a24
 * called by: FUN_8c0125b6, FUN_8c012f58
 */
u8 *FUN_8c012a24(u8 *a0, u32 *a1) {
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
 * FUN_8c012a40  0x8c012a40
 * called by: FUN_8c0128e8
 */
char *FUN_8c012a40(char *a0, u16 *a1) {
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
 * FUN_8c012a60  0x8c012a60
 * called by: FUN_8c012b1c
 */
u32 FUN_8c012a60(u32 a0, short *a1, u32 a2, u32 a3) {
    u32 uVar1;
    u32 uVar2;
    int iVar3;
    int ar6_00;
    u8 *ar4_00;
    u8 abStack_1c[12];

    *a1 = (short)a0 + 0x3f;
    FUN_8c012af8(a0, abStack_1c);
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
    FUN_8c01289c(ar4_00, 8 - iVar3, ar6_00);
    *a1 = *a1 - (short)ar6_00;
    uVar1 = memmove(a2, ar4_00, 8 - iVar3);
    return uVar1;
}

/*
 * FUN_8c012af8  0x8c012af8
 * called by: FUN_8c012a60, FUN_8c013060
 */
u32 FUN_8c012af8(int a0, u32 a1) {
    u32 uVar1;

    uVar1 = memmove(a1, (&DATA_8c125678) + a0 * 8, 8);
    return uVar1;
}

/*
 * FUN_8c012b1c  0x8c012b1c
 * called by: FUN_8c010b60
 */
u32 FUN_8c012b1c(int a0, short *a1, u8 *a2, u8 *a3) {
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
            FUN_8c0129b4(asStack_48, abStack_2c, iVar5, ar7_00);
            iVar5 = FUN_8c012c70(abStack_2c, 0x40);
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
        FUN_8c012a60(iVar2, psStack_40, puStack_3c, a3);
        iVar2 = (int)*psStack_40;
        a3 = puStack_3c;
        FUN_8c0129b4(asStack_48, abStack_2c, iVar2, puStack_3c);
        iVar2 = FUN_8c012c70(abStack_2c, 0x40);
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
 * FUN_8c012c70  0x8c012c70
 * called by: FUN_8c010b60, FUN_8c012b1c
 */
u32 FUN_8c012c70(u8 *a0, u32 a1) {
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
 * FUN_8c012d5c  0x8c012d5c
 * called by: FUN_8c010c60
 */
u32 FUN_8c012d5c(u8 *a0, int a1) {
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
 * FUN_8c012da8  0x8c012da8
 * called by: FUN_8c010b60, FUN_8c01243c
 */
u32 FUN_8c012da8(u8 *a0, int a1, u32 a2) {
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
 * FUN_8c012e00  0x8c012e00
 * called by: FUN_8c010b60, FUN_8c0129b4
 */
u32 FUN_8c012e00(int a0, int a1, u32 a2) {
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
 * FUN_8c012e04  0x8c012e04
 */
u32 FUN_8c012e04(int a0, int a1, u32 a2) {
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
 * FUN_8c012e84  0x8c012e84
 * called by: FUN_8c0143f0
 */
u32 FUN_8c012e84(char *a0, int a1) {
    if ((*a0 != '\0') && ((int)0x200 <= (int)a0 - a1)) {
        g_8c2787a8 = (int)0x450;
        return 1;
    }
    return 0;
}

/*
 * FUN_8c012eac  0x8c012eac
 * called by: FUN_8c010c60, FUN_8c01243c
 */
u32 FUN_8c012eac(int a0, u8 *a1, int a2, int a3) {
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
 * FUN_8c012f24  0x8c012f24
 * called by: FUN_8c01243c
 */
u32 FUN_8c012f24(char *a0, char *a1, u32 a2) {
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
 * FUN_8c012f58  0x8c012f58
 * called by: FUN_8c013060
 */
u32 FUN_8c012f58(u8 *a0, u16 *a1, u8 *a2) {
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
    FUN_8c012a24(&stack0xffffffe0, auStack_18);
    ar6_00 = 3;
    memmove(a2, &stack0xffffffe1, 3);
    FUN_8c012a24(&stack0xffffffe0, auStack_1c);
    memmove(a2 + 3, &stack0xffffffe0, 4);
    FUN_8c01289c(a2, 7, 3);
    if ((short)*a1 < 1) {
        *a1 = *a1 + 1;
        uVar1 = (int)(char)*a2 & 0x7f;
        *a2 = (u8)uVar1;
        while ((*a2 & 0x80) == 0) {
            uVar1 = FUN_8c01289c(a2, 7, 1);
            *a1 = *a1 - 1;
        }
    } else {
        uVar1 = (int)(char)*a2 | 0x80;
        *a2 = (u8)uVar1;
    }
    return uVar1;
}

/*
 * FUN_8c013060  0x8c013060
 * called by: FUN_8c013374
 */
u32 FUN_8c013060(int a0, u8 *a1, int *a2, char *a3) {
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
    if (((in_dr4 & 0x7f00000000000000) == 0) && (iVar2 = FUN_8c010b40(ar4_01, 7), iVar2 != 0)) {
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
        FUN_8c012f58(a3, &stack0xffffffa4, auStack_30);
        if (*a3 == -1) {
            uStack_24 = uStack_24 & 0x7fffffff;
        }
        if ((short)in_stack_ffffffa4 == 0x7ff) {
            if (uStack_24._2_1_ != -0x10) {
                return 2;
            }
            puVar6 = (u8 *)0x6;
            iVar2 = FUN_8c010b40(ar4_01, 6);
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
            iVar2 = FUN_8c01256c();
            iVar2 = iVar2 + -1;
        } else {
            iVar2 = FUN_8c01256c();
        }
        uStack_29 = 0;
        *a2 = (iVar2 - a0) + 1;
        FUN_8c012af8(a0, auStack_38);
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
        FUN_8c01289c(auStack_38, 8, iVar2);
        FUN_8c012af8(a0 + -1, auStack_40);
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
        FUN_8c01289c(auStack_40, 8, a0 + iVar3 * -8 + -1);
        while (true) {
            while (true) {
                puVar6 = a1;
                FUN_8c010b60((int)(short)ain0, auStack_30, *a2, a1);
                memmove(auStack_48, a1, 8);
                iVar2 = FUN_8c013ec0(auStack_48, auStack_38, 8);
                if (iVar2 < 1)
                    break;
                bVar1 = true;
                *a2 = *a2 + 1;
            }
            memmove(auStack_48, a1, 8);
            iVar2 = FUN_8c013ec0(auStack_48, auStack_38, 8);
            if (iVar2 == 0)
                break;
            memmove(auStack_48, a1, 8);
            iVar2 = FUN_8c013ec0(auStack_48, auStack_40, 8);
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
        FUN_8c010b60((int)(short)ain0, auStack_30, iVar2 + 1, a1);
    }
    return 0;
}

/*
 * FUN_8c013374  0x8c013374
 * called by: FUN_8c010e84
 */
int FUN_8c013374(u32 *a0, char *a1, int a2, u8 *a3) {
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
        iVar3 = FUN_8c013060(0x11, auStack_28, &stack0xffffffa0, pcVar13);
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
        FUN_8c01243c(auStack_28, pcVar5, 0x11);
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
                FUN_8c013a72(acStack_48, iVar8 + 1);
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
            FUN_8c013a72(acStack_48, *(int *)(a3 + 8) + 2);
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
 * FUN_8c013a72  0x8c013a72
 * called by: FUN_8c013374
 */
u32 FUN_8c013a72(char *a0, int a1) {
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
 * FUN_8c013adc  0x8c013adc
 * called by: FUN_8c021e10, FUN_8c021ec8, FUN_8c022128, FUN_8c0b93c0, FUN_8c12381c, se_play_3d
 */
int FUN_8c013adc(int a0) {
    if (0 < a0) {
        return a0;
    }
    return -a0;
}

/*
 * FUN_8c013aec  0x8c013aec
 * called by: FUN_8c022dac
 */
u32 FUN_8c013aec(void) {
    u32 uVar1;
    u64 in_dr0;
    char cVar2;
    u32 uStack_8;

    cVar2 = '\0';
    uVar1 = FUN_8c011850();
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
 * FUN_8c013b3c  0x8c013b3c
 * called by: FUN_8c0ad354, FUN_8c0f5e0c
 */
u32 FUN_8c013b3c(void) {
    u32 uVar1;
    u64 in_dr0;
    char cVar2;
    u32 uStack_8;

    cVar2 = '\0';
    uVar1 = FUN_8c011850();
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
 * FUN_8c013b8c  0x8c013b8c
 * called by: Class_1299f8_m4_019588
 */
u32 FUN_8c013b8c(u32 unused_a0, u32 a1, u32 a2, u32 a3) {
    u32 uVar1;
    u64 in_dr0;
    char cVar2;
    u32 uStack_8;

    cVar2 = '\0';
    uVar1 = FUN_8c011b44(unused_a0, a1, a2, a3);
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
 * FUN_8c013bdc  0x8c013bdc
 * called by: FUN_8c0fa538, FUN_8c0fa658, FUN_8c0fc69c, FUN_8c0fc7c4, FUN_8c0fc94c, FUN_8c0fcd2c, FUN_8c0fd764
 */
u32 FUN_8c013bdc(u32 a0) {
    u32 uVar1;

    uVar1 = FUN_8c0143f0(0, 10);
    return uVar1;
}

/*
 * FUN_8c013be8  0x8c013be8
 * called by: thunk_FUN_8c013be8
 */
u32 FUN_8c013be8(void) {
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
    uVar1 = FUN_8c011b9c(r4, r5, r6, r7, in_stack_fffffff8);
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
 * FUN_8c013c38  0x8c013c38
 * called by: FUN_8c260cf8
 */
u32 FUN_8c013c38(u32 unused_a0, u32 unused_a1, u32 a2, u32 a3) {
    u32 uVar1;
    u64 in_dr0;
    char cVar2;
    u32 uStack_8;

    cVar2 = '\0';
    uVar1 = FUN_8c011e10(unused_a0, unused_a1, a2, a3);
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
 * FUN_8c013c88  0x8c013c88
 */
u32 FUN_8c013c88(u32 unused_a0, u32 unused_a1, u32 a2, u32 a3) {
    u32 uVar1;
    u64 in_dr0;
    char cVar2;
    u32 uStack_8;

    cVar2 = '\0';
    uVar1 = FUN_8c011e10(unused_a0, unused_a1, a2, a3);
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
 * FUN_8c013cd8  0x8c013cd8
 */
u32 FUN_8c013cd8(void) {
    u32 uVar1;
    u64 in_dr0;
    char cVar2;
    u32 uStack_8;

    cVar2 = '\0';
    uVar1 = FUN_8c011f18();
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
 * FUN_8c013d28  0x8c013d28
 */
u32 FUN_8c013d28(void) {
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
    uVar1 = FUN_8c011bfc(r4, r5, r6, r7, in_stack_fffffff8);
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
 * FUN_8c013d78  0x8c013d78
 * called by: FUN_8c235f84
 */
u32 FUN_8c013d78(int *a0, u32 unused_a1, u32 unused_a2, u32 unused_a3, u32 ain0) {
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
 * FUN_8c013dec  0x8c013dec
 * called by: FUN_8c1235fc, FUN_8c123602
 */
int FUN_8c013dec(int a0) {
    if (0 < a0) {
        return a0;
    }
    return -a0;
}

/*
 * FUN_8c013dfc  0x8c013dfc
 */
u32 FUN_8c013dfc(u32 unused_a0, u32 a1, u32 a2, u32 a3) {
    u32 uVar1;
    u64 in_dr0;
    char cVar2;
    u32 uStack_8;

    cVar2 = '\0';
    uVar1 = FUN_8c012090(unused_a0, a1, a2, a3);
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
 * FUN_8c013e4c  0x8c013e4c
 * called by: FUN_8c1f69f2, FUN_8c1f69fa, FUN_8c1f6a30, FUN_8c1f6a34
 */
int FUN_8c013e4c(u32 unused_a0, int a1) {
    int iVar1;

    g_8c2787b0 = a1;
    iVar1 = g_8c2787b0;
    if (iVar1 == 0) {
        iVar1 = 1;
    }
    return iVar1;
}

/*
 * FUN_8c013ec0  0x8c013ec0
 * called by: FUN_8c013060, FUN_8c0b95a0, FUN_8c0b96e4, FUN_8c11e534, FUN_8c11ea3c, FUN_8c1f5c9e, FUN_8c1f5cac,
 * FUN_8c1f5cf6 (+10 more)
 */
u32 FUN_8c013ec0(char *a0, char *a1, u32 a2) {
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
 * called by: FUN_8c010b60, FUN_8c010c60, FUN_8c0117ce, FUN_8c0117da, FUN_8c01243c, FUN_8c0128e8, FUN_8c0129b4,
 * FUN_8c012a60 (+63 more)
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
 * FUN_8c013fb4  0x8c013fb4
 * called by: FUN_8c024340, FUN_8c024378, FUN_8c026968, FUN_8c029510, FUN_8c0297b8, FUN_8c0d1d54, FUN_8c0d1eb8,
 * FUN_8c0d1f38 (+1 more)
 */
u8 *FUN_8c013fb4(u8 *a0, u8 *a1, u32 a2) {
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
 * called by: FUN_8c010c60, FUN_8c0128e8, FUN_8c012a60, FUN_8c012b1c, FUN_8c01af14, FUN_8c01b2a4, FUN_8c0b95a0,
 * FUN_8c0fda80 (+95 more)
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
 * CAnimal_m0_0aca4c, Class_129938_m0_017084, Class_129974_m0_016c2c (+151 more)
 */
u32 free_if_nonnull(int a0) {
    u32 r5;
    u32 r6;
    u32 r7;
    u32 in_r0;

    if (a0 != 0) {
        in_r0 = FUN_8c1fb586(a0, r5, r6, r7);
    }
    return in_r0;
}

/*
 * FUN_8c014028  0x8c014028
 * called by: FUN_8c0fef94
 */
int FUN_8c014028(u32 a0, u32 a1, u32 a2, u32 a3) {
    u8 *puVar1;
    u8 *puVar2;
    int iVar3;

    puVar2 = (&FUN_8c1fb4b8);
    puVar1 = (&DATA_8c12c4f0);
    while ((iVar3 = (*(code *)puVar2)(a0, a1, a2, a3), iVar3 == 0 && (*(int *)(&DATA_8c12c4f0) != 0))) {
        (**(code **)puVar1)(0, a1, a2, a3);
    }
    return iVar3;
}

/*
 * FUN_8c014064  0x8c014064
 */
u32 FUN_8c014064(void) {
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
    uVar1 = FUN_8c0121bc(r4, r5, r6, r7, in_stack_fffffff8);
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
 * FUN_8c0140b4  0x8c0140b4
 * called by: FUN_8c11a634
 */
u32 FUN_8c0140b4(u32 a0, u32 a1, u32 a2, u32 a3) {
    u32 uVar1;

    uVar1 = FUN_8c0140cc(1, a1, &stack0xfffffff0, a3, a0);
    return uVar1;
}

/*
 * FUN_8c0140cc  0x8c0140cc
 * called by: FUN_8c0140b4, FUN_8c0140cc
 */
int FUN_8c0140cc(u32 a0, u32 a1, int *a2, int a3, int ain0) {
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
                ain0 = FUN_8c0140cc(a0, ar5_00, a2, a3, ain0_00);
            }
            a0 = ar4_00;
            if (a1 <= ar4_00) {
                return ain0;
            }
        }
        if (ar4_00 < a1) {
            a6 = a2;
            ain0 = FUN_8c0140cc(ar4_00, a1, a2, a3, ain0_00);
        }
        a1 = ar5_00;
    } while (a0 < ar5_00);
    return ain0;
}

/*
 * rand  0x8c014200
 * called by: Class_129808_m0_0147a4, Class_12a7a8_m1_098d14, Class_12acc8_m1_09f470, Class_12b0c4_m1_0ab7f4,
 * Class_12bea8_m1_0d7860, FUN_8c014be4, FUN_8c0254d0, FUN_8c02911c (+62 more)
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
 * FUN_8c01422c  0x8c01422c
 * called by: FUN_8c1f672c, FUN_8c1f67c2, FUN_8c1f69fa, FUN_8c1f6a34
 */
u32 FUN_8c01422c(int a0, u32 a1, u32 a2, u32 a3, u32 ain0, u32 ain1) {
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
 * FUN_8c014294  0x8c014294
 * called by: FUN_8c0bb1e4
 */
u32 FUN_8c014294(u32 unused_a0, u32 unused_a1, u32 unused_a2, u32 a3) {
    u32 uVar1;
    u64 in_dr0;
    char cVar2;
    u32 uStack_8;

    cVar2 = '\0';
    uVar1 = FUN_8c012328(unused_a0, unused_a1, unused_a2, a3);
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
 * FUN_8c0142e4  0x8c0142e4
 */
u32 FUN_8c0142e4(u32 unused_a0, u32 unused_a1, u32 unused_a2, u32 a3) {
    u32 uVar1;
    u64 in_dr0;
    char cVar2;
    u32 uStack_8;

    cVar2 = '\0';
    uVar1 = FUN_8c012328(unused_a0, unused_a1, unused_a2, a3);
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
 * FUN_8c014334  0x8c014334
 * called by: CAnimal_m1_0f41c8, FUN_8c019974, FUN_8c036260, FUN_8c0384f8, FUN_8c087ed0, FUN_8c099e74, FUN_8c09b8e4,
 * FUN_8c0a4de8 (+16 more)
 */
u32 FUN_8c014334(u32 a0, u32 unused_a1, u32 unused_a2, u32 unused_a3, u32 s0) {
    u32 uVar1;

    uVar1 = FUN_8c010e84(1, 0, a0, s0);
    return uVar1;
}

/*
 * FUN_8c014370  0x8c014370
 * called by: game_init
 */
u32 FUN_8c014370(u32 a0) {
    u32 in_r0;

    *(u32 *)(&DATA_8c12c4e8) = a0;
    return in_r0;
}

/*
 * FUN_8c01437c  0x8c01437c
 * called by: FUN_8c01da90, FUN_8c01dea4, FUN_8c01e1e8, FUN_8c030304, FUN_8c0303b8, FUN_8c030568, FUN_8c03087c,
 * FUN_8c0309c8 (+6 more)
 */
char *FUN_8c01437c(char *a0, char *a1) {
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
 * FUN_8c01439c  0x8c01439c
 * called by: FUN_8c205e00
 */
u32 FUN_8c01439c(u32 a0, u32 a1) {
    u32 uVar1;

    uVar1 = FUN_8c0109e8(a0, a1);
    return uVar1;
}

/*
 * log_message  0x8c0143b0
 * called by: FUN_8c010e84, FUN_8c013374, FUN_8c01ddfc, FUN_8c01e1e8, FUN_8c0fde5c, FUN_8c0fe1b8, FUN_8c0fe4f8,
 * FUN_8c0fe82c (+7 more)
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
 * FUN_8c0143c0  0x8c0143c0
 * called by: FUN_8c0fde5c, FUN_8c0fe1b8, FUN_8c0fe4f8, FUN_8c0fe82c, FUN_8c2632ea, FUN_8c263388, FUN_8c2633e6
 */
char *FUN_8c0143c0(char *a0, char *a1, u32 a2) {
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
 * FUN_8c0143f0  0x8c0143f0
 * called by: FUN_8c013bdc
 */
u32 FUN_8c0143f0(u8 *a0, u32 *a1, int a2) {
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
        iVar4 = FUN_8c012e84(pbVar7, a0);
        if (iVar4 != 0) {
            return 0;
        }
    }
    if ((*pbVar7 == 0x2b) || (*pbVar7 == 0x2d)) {
        bVar1 = *pbVar7;
        pbVar7 = pbVar7 + 1;
        uStack_30 = (u32)(bVar1 == 0x2d);
        iVar4 = FUN_8c012e84(pbVar7, a0);
        if (iVar4 != 0) {
            return 0;
        }
    }
    pbVar8 = pbVar7;
    if (a2 == 0) {
        if (*pbVar7 == 0x30) {
            pbVar8 = pbVar7 + 1;
            iVar4 = FUN_8c012e84(pbVar8, a0);
            if (iVar4 != 0) {
                return 0;
            }
            iVar4 = (int)(char)*pbVar8;
            if (((&g_8c125470)[*pbVar8] & 1) != 0) {
                iVar4 = iVar4 + 0x20;
            }
            if (iVar4 == 0x78) {
                iVar4 = FUN_8c012e84(pbVar7 + 2, a0);
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
        iVar4 = FUN_8c012e84(pbVar8, a0);
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
                    iVar4 = FUN_8c012e84(pbVar8, a0);
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
                    iVar4 = FUN_8c012e84(pbVar8, a0);
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
        iVar6 = FUN_8c012e84(pbVar8, a0);
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
 * FUN_8c0146b4  0x8c0146b4
 */
int FUN_8c0146b4(u32 a0) {
    if (((&DATA_8c125470)[a0 & 0xff] & 2) != 0) {
        return a0 - 0x20;
    }
    return a0;
}

/*
 * vsprintf_like  0x8c0146d0
 * called by: FUN_8c1f4570, FUN_8c1f4574, FUN_8c1fd5c0, FUN_8c25ece6, FUN_8c25ecea, FUN_8c26a152, debug_printf
 */
u32 vsprintf_like(u32 a0, u32 a1, u32 a2) {
    u32 uVar1;

    uVar1 = FUN_8c010e84(1, 0, a0, a1);
    return uVar1;
}

/*
 * FUN_8c0146f8  0x8c0146f8
 * called by: FUN_8c0d77d8
 */
int *FUN_8c0146f8(int *a0, u32 a1, u32 a2, u32 a3) {
    *a0 = (int)(&DATA_8c129808);
    Vec3_ctor_zero(a0 + 1, a1, a2);
    Vec3_ctor_zero(a0 + 5, a1, a2);
    a0[10] = 0x8c2787e8;
    g_8c27882c = 0x3f777777;
    0x8c27882c [1] = 0x3333333;
    FUN_8c014764(a0[10]);
    (**(code **)(*a0 + 0x14))(a0, a1, a2, a3);
    return a0;
}

/*
 * FUN_8c014764  0x8c014764
 * called by: CSquid_Init, FUN_8c0146f8, FUN_8c0149dc, FUN_8c0d2fd8, FUN_8c0f5b10
 */
u32 FUN_8c014764(int a0) {
    u32 uVar1;

    *(u32 *)(a0 + 0x14) = *(u32 *)(a0 + 0x14) | 0x40;
    uVar1 = FUN_8c014790(a0);
    return uVar1;
}

/*
 * FUN_8c014790  0x8c014790
 * called by: CSquid_Init, FUN_8c014764, FUN_8c014a64, FUN_8c0d2fd8, FUN_8c0e74a8, FUN_8c0f5b10
 */
u32 FUN_8c014790(int a0) {
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
    FUN_8c023aa0(a0 + 1, ar5_00);
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
 * called by: FUN_8c0d7900
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
    FUN_8c016464(*(u32 *)(a0 + 0x28), &uStack_20, &g_8c27882c, 2);
    uVar1 = FUN_8c016504(*(u32 *)(a0 + 0x28), ar5_00, ar6_00, uVar1);
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
    uVar1 = FUN_8c0149d4(a0);
    return uVar1;
}

/*
 * FUN_8c0149d4  0x8c0149d4
 * called by: Class_129808_m3_014978, FUN_8c0d7dcc
 */
u32 FUN_8c0149d4(int a0) {
    *(u32 *)(a0 + 0x2c) = 0;
    return 0;
}

/*
 * FUN_8c0149dc  0x8c0149dc
 * called by: FUN_8c0d7e24
 */
u32 FUN_8c0149dc(int a0, u32 a1, u32 a2) {
    u32 uVar1;

    g_8c27882c = a1;
    0x8c27882c [1] = a2;
    uVar1 = FUN_8c014764(*(u32 *)(a0 + 0x28));
    return uVar1;
}

/*
 * FUN_8c014a0c  0x8c014a0c
 * called by: FUN_8c0d25b4, FUN_8c0ffcb4
 */
u32 FUN_8c014a0c(int a0) {
    u32 uVar1;

    uVar1 = *(u32 *)(a0 + 0x28) | 0x20;
    *(u32 *)(a0 + 0x28) = uVar1;
    return uVar1;
}

/*
 * FUN_8c014a20  0x8c014a20
 * called by: FUN_8c0d25b4
 */
u32 FUN_8c014a20(int a0) {
    u32 uVar1;

    uVar1 = *(u32 *)(a0 + 0x28) | 0x10;
    *(u32 *)(a0 + 0x28) = uVar1;
    return uVar1;
}

/*
 * object_dtor_delete  0x8c014a34
 * called by: CAnimal_m0_025688, CSoilTank_Create, CWaterTank_CreateStage, Class_1299b0_m0_016af4,
 * Class_1299ec_m0_01a0f8, Class_129a24_m0_019aa0, Class_129cbc_m0_0312f4, Class_129cbc_m1_031598 (+123 more)
 */
int object_dtor_delete(int a0, u32 a1, u32 a2, u32 a3) {
    u32 in_stack_fffffff4;

    if ((a0 != 0) && (0 < (short)a1)) {
        free_if_nonnull(a0, a1, a2, a3, CONCAT22((short)((u32)in_stack_fffffff4 >> 0x10), (short)a1));
    }
    return a0;
}

/*
 * FUN_8c014a64  0x8c014a64
 * called by: CSquid_Init, FUN_8c0d2fd8, FUN_8c0f5b10
 */
u32 FUN_8c014a64(int a0) {
    u32 uVar1;

    *(u32 *)(a0 + 0x14) = *(u32 *)(a0 + 0x14) | 0x80000000;
    uVar1 = FUN_8c014790(a0);
    return uVar1;
}

/*
 * FUN_8c014a94  0x8c014a94
 * called by: FUN_8c01688c, FUN_8c0ad354, FUN_8c0ad7ec, FUN_8c0ba5e0, FUN_8c0bb1e4, FUN_8c0bf804, FUN_8c0bfa78,
 * FUN_8c0c09d0 (+23 more)
 */
u32 FUN_8c014a94(u32 a0, u32 a1) {
    u32 uVar1;

    uVar1 = FUN_8c25b434(a1);
    return uVar1;
}

/*
 * FUN_8c014ab0  0x8c014ab0
 */
u32 *FUN_8c014ab0(u32 *a0, u32 a1, u32 a2, u32 a3) {
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
    a0[0x21] = FUN_8c014f74;
    a0[0x22] = 0;
    a0[0x23] = 0xffffffff;
    a0[0x24] = FUN_8c014fd0;
    a0[0x25] = 0;
    a0[0x26] = 0xffffffff;
    a0[0x27] = FUN_8c015054;
    a0[0x28] = 0;
    a0[0x29] = 0xffffffff;
    a0[0x2a] = FUN_8c015098;
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
    FUN_8c014ef8(a0, 0xffffffff);
    a0[0x1a] = 0;
    *(u8 *)(a0 + 0x1e) = 1;
    if (cVar5 == '\0') {
        a0[0x1d] = 0;
        a0[0x1c] = 0x3ca3d70a;
    } else {
        *(u64 *)(a0 + 0x1d) = (u64)uVar3;
        *(u64 *)(a0 + 0x1c) = 0x8c014d903ca3d70a;
    }
    FUN_8c014d90(a0, ar5_00, a2, a3);
    return a0;
}

/*
 * FUN_8c014be4  0x8c014be4
 * called by: FUN_8c0d0d1c
 */
u32 FUN_8c014be4(int a0, u32 a1, u32 a2) {
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
    uVar3 = FUN_8c014ef8(a0, a1);
    return uVar3;
}

/*
 * FUN_8c014cd4  0x8c014cd4
 * called by: FUN_8c0d0bcc
 */
u32 FUN_8c014cd4(u32 a0, u32 a1, u32 a2, u32 a3) {
    u32 uVar1;

    uVar1 = FUN_8c014d90(a0, a1, a2, a3);
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
        uVar1 = FUN_8c014d90(a0, a1, a2, a3);
    }
    return uVar1;
}

/*
 * FUN_8c014d54  0x8c014d54
 */
u32 FUN_8c014d54(void) {
    u32 uVar1;

    uVar1 = pure_virtual_stub();
    return uVar1;
}

/*
 * FUN_8c014d90  0x8c014d90
 * called by: Class_1297f4_m0_014cf0, FUN_8c014ab0, FUN_8c014cd4, FUN_8c0d0b04
 */
u32 FUN_8c014d90(int a0, u32 a1, u32 a2, u32 a3) {
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
 * called by: CMushroomerBody_AwayFrom, Class_129a24_m1_019b68, Class_12a03c_m1_03c43c, Class_12a25c_m1_06f530,
 * Class_12ad14_m1_0a09e8, Class_12b2ac_m1_0aff3c, FUN_8c014d90, FUN_8c0241c4 (+39 more)
 */
u32 *vec3_clear(u32 *a0, u32 a1, u32 a2, u32 a3) {
    *a0 = 0;
    a0[1] = 0;
    a0[2] = 0;
    return a0 + 1;
}

/*
 * FUN_8c014e38  0x8c014e38
 * called by: FUN_8c0d0d1c
 */
u32 FUN_8c014e38(int a0) {
    u32 uVar1;
    float in_fr5;
    float in_fr4;
    float in_fr6;

    *(float *)(a0 + 0x54) = *(float *)(a0 + 0x54) + in_fr4;
    *(float *)(a0 + 0x58) = *(float *)(a0 + 0x58) + in_fr5;
    *(float *)(a0 + 0x5c) = *(float *)(a0 + 0x5c) + in_fr6;
    uVar1 = FUN_8c014ea0(a0);
    return uVar1;
}

/*
 * FUN_8c014ea0  0x8c014ea0
 * called by: FUN_8c014e38
 */
u32 FUN_8c014ea0(int a0) {
    *(u32 *)(a0 + 100) = 1;
    return 100;
}

/*
 * FUN_8c014eac  0x8c014eac
 * called by: FUN_8c0d1168
 */
u32 FUN_8c014eac(u32 unused_a0, u32 a1, u32 a2, u32 a3, u32 s0) {
    u8 auStack_18[20];

    Vec3_ctor_xyz(auStack_18, a1, a2, a3);
    Vec3_ctor_copy(s0, auStack_18, a2, a3);
    Vec3_dtor(auStack_18, 0xffffffff, a2, a3);
    return 0;
}

/*
 * FUN_8c014ef8  0x8c014ef8
 * called by: FUN_8c014ab0, FUN_8c014be4
 */
u32 FUN_8c014ef8(int a0, u32 a1) {
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
 * FUN_8c014f74  0x8c014f74
 * called by: FUN_8c014fd0, FUN_8c0d0b04
 */
float *FUN_8c014f74(int a0) {
    *(float *)(a0 + 4) = *(float *)(a0 + 4) + *(float *)(a0 + 0x54);
    *(float *)(a0 + 8) = *(float *)(a0 + 8) + *(float *)(a0 + 0x58);
    *(float *)(a0 + 0xc) = *(float *)(a0 + 0xc) + *(float *)(a0 + 0x5c);
    *(float *)(a0 + 0x58) = *(float *)(a0 + 0x58) - *(float *)(a0 + 0x70);
    return (float *)(a0 + 0x58);
}

/*
 * FUN_8c014fd0  0x8c014fd0
 */
u32 FUN_8c014fd0(int a0, u32 unused_a1, u32 a2, u32 a3) {
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
    uVar2 = FUN_8c014f74(a0);
    return uVar2;
}

/*
 * FUN_8c015054  0x8c015054
 */
u32 FUN_8c015054(int a0, u32 unused_a1, u32 unused_a2, u32 a3) {
    u32 uVar1;
    int iStack_18;
    int iStack_14;
    u32 uStack_10;
    u32 uStack_c;

    uStack_10 = *(u32 *)((&DATA_8c12c52c) + 8);
    uStack_c = *(u32 *)((&DATA_8c12c52c) + 0xc);
    iStack_18 = a0 + 4;
    iStack_14 = a0 + 0x40;
    uVar1 = FUN_8c234fd0(&iStack_18, 1, 0x40, a3);
    return uVar1;
}

/*
 * FUN_8c015098  0x8c015098
 */
u32 FUN_8c015098(int a0, u32 unused_a1, u32 unused_a2, u32 a3) {
    u32 uVar1;
    int iStack_18;
    int iStack_14;
    u32 uStack_10;
    u32 uStack_c;

    uStack_10 = *(u32 *)((&DATA_8c12c53c) + 8);
    uStack_c = *(u32 *)((&DATA_8c12c53c) + 0xc);
    iStack_18 = a0 + 4;
    iStack_14 = a0 + 0x40;
    uVar1 = FUN_8c234d68(&iStack_18, 4, 0x42, a3);
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
 * FUN_8c0150e0  0x8c0150e0
 */
u32 FUN_8c0150e0(u32 unused_a0, u32 a1, u32 a2, u32 a3) {
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
    uVar2 = FUN_8c016410(0x8c2787e8);
    return uVar2;
}

/*
 * FUN_8c015198  0x8c015198
 * called by: CGame_Init, Class_129808_m6_0166b4, FUN_8c0b6e6c, FUN_8c0b79f0, FUN_8c0ba5e0, FUN_8c0bb1e4, FUN_8c0bf804,
 * FUN_8c0bfa78 (+11 more)
 */
u32 FUN_8c015198(int a0, u32 a1) {
    u32 in_r0;

    *(u32 *)(a0 + 0x10) = a1;
    return in_r0;
}

/*
 * free_if_nonnull_wrap_0151a0  0x8c0151a0
 * called by: Class_129808_m6_0166b4, Class_12b350_m0_0baa08, Class_12bb08_m0_0da208, FUN_8c0b6c3c, FUN_8c0b6e6c,
 * FUN_8c0b79f0, FUN_8c0ba5e0, FUN_8c0bad68 (+10 more)
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
 * called by: CSoilTank_Create, FUN_8c0151fc, FUN_8c06b460, FUN_8c0cfff8
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
 * FUN_8c0151e8  0x8c0151e8
 */
u32 FUN_8c0151e8(short *a0, u32 a1) {
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
 * FUN_8c0151fc  0x8c0151fc
 * called by: FUN_8c0d5218, WE_CreateStageC
 */
u32 FUN_8c0151fc(u32 a0) {
    u32 uVar1;

    uVar1 = thunk_FUN_8c0151e8(a0, 0x17);
    return uVar1;
}

/*
 * FUN_8c015224  0x8c015224
 * called by: CSquid_Init, FUN_8c0153b8, FUN_8c02452c, FUN_8c02b920, FUN_8c06740c, FUN_8c0ba8e4, FUN_8c0bff8c,
 * FUN_8c0c2490 (+17 more)
 */
u32 *FUN_8c015224(u32 *a0, u32 a1) {
    *a0 = (&DATA_8c129920);
    FUN_8c0153b0(a0);
    return a0;
}

/*
 * Class_129920_m0_015248  0x8c015248
 * called by: CEnv_LoadDevicePanelTexture, CGame_Initial, FUN_8c024968, FUN_8c0372a0, FUN_8c085f4c, FUN_8c0ca2cc
 */
u32 Class_129920_m0_015248(int a0, u32 a1, u32 a2, u32 a3) {
    u32 in_r0;

    *(u32 *)(a0 + 4) = a1;
    return in_r0;
}

/*
 * CTexture_LoadFromCache  0x8c015250
 * called by: FUN_8c0d068c, FUN_8c0d09fc, FUN_8c0d14b0, FUN_8c0d5578, FUN_8c0d6058, FUN_8c0d97b4, FUN_8c0d9b60,
 * FUN_8c0e0320 (+3 more) strings: "Failed to set texture..:%s"; "CTexture::LoadFromCache()"; "Failed to load from
 * cache..:%s"; "CTexture::LoadFromCache()"
 */
u32 CTexture_LoadFromCache(int a0, u32 a1, u32 a2, u32 a3) {
    int iVar1;
    u32 uVar2;
    u8 auStack_108[260];

    iVar1 = FUN_8c25b3ec(*(u32 *)(a0 + 4));
    if (iVar1 == -1) {
        (*(code *)(&FUN_8c014334))(auStack_108, a1, a2, a3, "Failed to set texture..:%s");
        (*(code *)(&report_error_message))(auStack_108, "CTexture::LoadFromCache()", 1, 2);
        uVar2 = 1;
    } else {
        iVar1 = FUN_8c2377e4(*(u32 *)(a0 + 4), a1, a2, a3);
        if (iVar1 == -1) {
            (*(code *)(&FUN_8c014334))(auStack_108, a1, a2, a3, "Failed to load from cache..:%s");
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
 * called by: FUN_8c028c18, FUN_8c06d5e4, FUN_8c0bf22c, FUN_8c0c09d0, FUN_8c0ca0e0, FUN_8c0ca22c, FUN_8c0cf1bc,
 * FUN_8c0d06a8 (+12 more) strings: "Failed..:%s"; "CTexture::ReleaseFromVRAM()"
 */
u32 CTexture_ReleaseFromVRAM(int a0, u32 a1, u32 a2, u32 a3) {
    int iVar1;
    u8 auStack_108[260];

    iVar1 = FUN_8c256670(*(u32 *)(a0 + 4));
    if (iVar1 == -1) {
        (*(code *)(&FUN_8c014334))(auStack_108, a1, a2, a3, "Failed..:%s");
        (*(code *)(&report_error_message))(auStack_108, "CTexture::ReleaseFromVRAM()", 1, 2);
    }
    return (u32)(iVar1 == -1);
}

/*
 * FUN_8c01538c  0x8c01538c
 * called by: FUN_8c01688c, FUN_8c026968, FUN_8c026de0, FUN_8c029510, FUN_8c0297b8, FUN_8c029dec, FUN_8c038b04,
 * FUN_8c06b460 (+75 more)
 */
u32 FUN_8c01538c(int a0, u32 a1, u32 a2) {
    u32 uVar1;

    uVar1 = FUN_8c25b3ec(*(u32 *)(a0 + 4));
    return uVar1;
}

/*
 * FUN_8c0153b0  0x8c0153b0
 * called by: FUN_8c015224
 */
u32 FUN_8c0153b0(int a0) {
    *(u32 *)(a0 + 4) = 0;
    return 0;
}

/*
 * FUN_8c0153b8  0x8c0153b8
 * called by: FUN_8c0d2fd8, FUN_8c0d7f18, FUN_8c0e74a8
 */
u32 *FUN_8c0153b8(u32 *a0, u32 a1) {
    FUN_8c015224(a0, a1);
    *a0 = (&DATA_8c129908);
    a0[1] = a0 + 2;
    return a0;
}

/*
 * free_if_nonnull_wrap_0153e4  0x8c0153e4
 * called by: CAnimal_m0_0aca4c, Class_12a0c4_m0_0674c8, Class_12b350_m0_0baa08, Class_12b388_m0_0c5928,
 * Class_12b580_m0_0e61f4, Class_12b758_m0_0e46cc, Class_12b930_m0_0dde84, Class_12bce0_m0_0d9a98 (+15 more)
 */
u32 *free_if_nonnull_wrap_0153e4(u32 *a0, u32 a1, u32 a2, u32 a3) {
    u32 in_stack_fffffff4;

    if ((a0 != NULL) && (*a0 = &g_8c129920, 0 < (short)a1)) {
        free_if_nonnull(a0, a1, a2, a3, CONCAT22((short)((u32)in_stack_fffffff4 >> 0x10), (short)a1));
    }
    return a0;
}

/*
 * FUN_8c01541c  0x8c01541c
 */
int FUN_8c01541c(int a0, u32 a1, u32 a2) {
    int iVar1;

    **(u32 **)(a0 + 4) = a1;
    iVar1 = *(int *)(a0 + 4);
    *(u32 *)(iVar1 + 4) = a2;
    return iVar1;
}

/*
 * FUN_8c015428  0x8c015428
 * called by: Class_12b3b8_m0_0e77ec, FUN_8c0ddd74, FUN_8c0e6114
 */
u32 *FUN_8c015428(u32 *a0, u32 a1, u32 a2, u32 a3) {
    u32 ar5_00;
    u32 in_stack_fffffff4;
    u32 ain0;

    ain0 = CONCAT22((short)((u32)in_stack_fffffff4 >> 0x10), (u16)a1);
    if (a0 != NULL) {
        *a0 = &g_8c129908;
        ar5_00 = 0;
        free_if_nonnull_wrap_0153e4(a0, 0, a2, a3);
        if (0 < (short)ain0) {
            free_if_nonnull(a0);
        }
    }
    return a0;
}

/*
 * FUN_8c015470  0x8c015470
 */
u32 FUN_8c015470(int a0, u32 a1, u32 a2, u32 a3, u32 s0, u32 s4) {
    u32 uVar1;

    FUN_8c257188(a0 + 0x10, a1, a2 | 0x900, a3, s0);
    uVar1 = FUN_8c257196(a0 + 0x3c, a0 + 0x10, s4, 0x40800000);
    return uVar1;
}

/*
 * FUN_8c0154c4  0x8c0154c4
 */
u32 FUN_8c0154c4(int a0) {
    u32 uVar1;

    FUN_8c25b3ec(*(u32 *)(a0 + 4));
    uVar1 = FUN_8c25b044(0);
    return uVar1;
}

/*
 * FUN_8c0154ec  0x8c0154ec
 * called by: FUN_8c02b920
 */
u32 FUN_8c0154ec(u32 a0) {
    FUN_8c015518(a0);
    return a0;
}

/*
 * FUN_8c015508  0x8c015508
 * called by: FUN_8c024968
 */
u32 FUN_8c015508(u32 *a0, u32 a1, u32 a2, u32 a3) {
    u32 in_r0;

    *a0 = a1;
    return in_r0;
}

/*
 * FUN_8c015510  0x8c015510
 * called by: FUN_8c029ca8, FUN_8c037034, FUN_8c085704
 */
u32 FUN_8c015510(u32 *a0) {
}

/*
 * FUN_8c015518  0x8c015518
 * called by: FUN_8c0154ec
 */
u32 FUN_8c015518(u32 *a0) {
    *a0 = 0;
    return 0;
}

/*
 * FUN_8c015520  0x8c015520
 * called by: FUN_8c0d9c80
 */
int *FUN_8c015520(int *a0, u32 a1, u32 a2, u32 a3) {
    *a0 = (int)(&DATA_8c1298b8);
    (**(code **)(*a0 + 0xc))(a0, a1, a2, a3);
    return a0;
}

/*
 * free_if_nonnull_wrap_015544  0x8c015544
 * called by: Class_12bb08_m0_0da208
 */
u32 *free_if_nonnull_wrap_015544(u32 *a0, u32 a1, u32 a2, u32 a3) {
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

    FUN_8c25b3ec(*(u32 *)(a0 + 8));
    FUN_8c256328(0, a1, a2, a3, in_PR);
    FUN_8c25b5d0(0, a1, a2, a3, in_PR);
    FUN_8c254042(*(u32 *)(a0 + 4), a1, a2, a3);
    uVar1 = FUN_8c256210(1);
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
    FUN_8c25b3ec(*(u32 *)(a0 + 8));
    FUN_8c256328(0, unused_a1, ar6_00, r7, in_PR);
    FUN_8c25b5d0(0, unused_a1, ar6_00, r7, in_PR);
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
    FUN_8c256b0c(0, ar5_00, ar6_01, ar7_00, in_PR);
    FUN_8c254042(*(u32 *)(a0 + 4), ar5_00, ar6_01, ar7_00);
    uVar1 = FUN_8c256210(1);
    return uVar1;
}

/*
 * Class_1298b8_m4_0156a0  0x8c0156a0
 */
u32 Class_1298b8_m4_0156a0(int a0, u32 a1, u32 a2, u32 a3) {
    u32 uVar1;
    u32 in_PR;

    FUN_8c25b3ec(*(u32 *)(a0 + 8));
    FUN_8c256328(0, a1, a2, a3, in_PR);
    FUN_8c25b5d0(0, a1, a2, a3, in_PR);
    FUN_8c256fec(0, a1, a2, a3, in_PR);
    FUN_8c254042(*(u32 *)(a0 + 4), a1, a2, a3);
    uVar1 = FUN_8c256210(1);
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
    FUN_8c25b3ec(*(u32 *)(a0 + 8));
    FUN_8c256328(0, unused_a1, ar6_00, r7, in_PR);
    FUN_8c25b5d0(0, unused_a1, ar6_00, r7, in_PR);
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
    FUN_8c256b0c(0, ar5_00, ar6_01, ar7_00, in_PR);
    FUN_8c256fec(0, ar5_00, ar6_01, ar7_00, in_PR);
    FUN_8c254042(*(u32 *)(a0 + 4), ar5_00, ar6_01, ar7_00);
    uVar1 = FUN_8c256210(1);
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
    FUN_8c25b3ec(*(u32 *)(a0 + 8));
    FUN_8c256328(0, ar5_00, r6, r7, in_PR);
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
    FUN_8c256b0c(0, ar5_01, ar6_00, ar7_00, in_PR);
    FUN_8c254042(*(u32 *)(a0 + 4), ar5_01, ar6_00, ar7_00);
    uVar1 = FUN_8c256210(1);
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
    FUN_8c25b3ec(*(u32 *)(a0 + 8));
    FUN_8c256328(0, ar5_00, r6, r7, in_PR);
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
    FUN_8c256b0c(0, ar5_01, ar6_00, ar7_00, in_PR);
    FUN_8c256fec(0, ar5_01, ar6_00, ar7_00, in_PR);
    FUN_8c254042(*(u32 *)(a0 + 4), ar5_01, ar6_00, ar7_00);
    uVar1 = FUN_8c256210(1);
    return uVar1;
}

/*
 * Class_1298b8_m8_015948  0x8c015948
 */
u32 Class_1298b8_m8_015948(int a0, u32 a1, u32 a2, u32 a3) {
    u32 uVar1;
    u32 in_PR;

    FUN_8c25b3ec(*(u32 *)(a0 + 8));
    FUN_8c256328(0, a1, a2, a3, in_PR);
    FUN_8c256fec(0, a1, a2, a3, in_PR);
    FUN_8c254042(*(u32 *)(a0 + 4), a1, a2, a3);
    uVar1 = FUN_8c256210(1);
    return uVar1;
}

/*
 * Class_1298b8_m9_0159a8  0x8c0159a8
 */
u32 Class_1298b8_m9_0159a8(int a0, u32 a1, u32 a2, u32 a3) {
    u32 uVar1;

    FUN_8c25b3ec(*(u32 *)(a0 + 8));
    uVar1 = FUN_8c254042(*(u32 *)(a0 + 4), a1, a2, a3);
    return uVar1;
}

/*
 * Class_1298b8_m10_0159d0  0x8c0159d0
 */
u32 Class_1298b8_m10_0159d0(int a0, u32 a1, u32 a2, u32 a3) {
    u32 uVar1;

    uVar1 = FUN_8c254042(*(u32 *)(a0 + 4), a1, a2, a3);
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
    FUN_8c256328(0, unused_a1, a2, r7, a0);
    FUN_8c25b5d0(0, unused_a1, ar6_00, r7, a0);
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
    FUN_8c256b0c(0, ar5_00, ar6_01, ar7_00, a0);
    FUN_8c256fec(0, ar5_00, ar6_01, ar7_00, a0);
    FUN_8c254042(*(u32 *)(a0 + 4), ar5_00, ar6_01, ar7_00);
    uVar1 = FUN_8c256210(1);
    return uVar1;
}

/*
 * FUN_8c015ab8  0x8c015ab8
 * called by: FUN_8c016b64, FUN_8c016fcc, FUN_8c017010, FUN_8c02452c, FUN_8c02b920, FUN_8c030fa0, FUN_8c06740c,
 * FUN_8c0c5208 (+13 more)
 */
u32 FUN_8c015ab8(u32 a0) {
    FUN_8c015b8c(a0);
    return a0;
}

/*
 * FUN_8c015ad4  0x8c015ad4
 * called by: CAnimal_LoadGRWait, CGame_Initial, CSoilTank_Create, CWaterTank_CreateStage, FUN_8c016fa4, FUN_8c017804,
 * FUN_8c024968, FUN_8c027a78 (+19 more)
 */
u32 FUN_8c015ad4(u32 *a0, u32 a1, u32 a2) {
    u32 in_r0;

    *a0 = a1;
    return in_r0;
}

/*
 * FUN_8c015adc  0x8c015adc
 * called by: FUN_8c0c9ee0, FUN_8c0d0564, FUN_8c0d05d0, FUN_8c0d2264, FUN_8c0d4038, FUN_8c0d6090, FUN_8c0d9720,
 * FUN_8c0d9b34 (+8 more)
 */
u32 FUN_8c015adc(u32 *a0, u32 a1, u32 a2, u32 a3) {
    u32 uVar1;

    uVar1 = FUN_8c219a9a(*a0, a1, a2, a3);
    return uVar1;
}

/*
 * FUN_8c015af8  0x8c015af8
 * called by: Class_129938_m6_01733c, FUN_8c016da8, FUN_8c0d092c, FUN_8c0d0990, FUN_8c0d1168, FUN_8c0d4124,
 * FUN_8c0d4428, FUN_8c0d46cc (+3 more)
 */
u32 FUN_8c015af8(u32 *a0, u32 a1, u32 a2, u32 a3) {
    u32 uVar1;

    uVar1 = FUN_8c2187ce(*a0, a1, a2, a3);
    return uVar1;
}

/*
 * FUN_8c015b14  0x8c015b14
 * called by: FUN_8c0e14fc
 */
u32 FUN_8c015b14(u32 *a0, u32 a1, u32 a2, u32 a3) {
    u32 uVar1;

    uVar1 = FUN_8c21a80e(*a0, a1, a2, a3);
    return uVar1;
}

/*
 * FUN_8c015b30  0x8c015b30
 * called by: FUN_8c0d4124, FUN_8c0d7354
 */
u32 FUN_8c015b30(u32 *a0, u32 a1, u32 a2, u32 a3) {
    u32 uVar1;

    uVar1 = FUN_8c218f96(*a0, a1, a2, a3);
    return uVar1;
}

/*
 * deref_u32  0x8c015b4c
 * called by: CAnimBody_CheckThisMotionData, CAnimBody_SetInterpolate, Class_12a03c_m6_03a65c, Class_12a25c_m6_06e69c,
 * Class_12b2ac_m6_0afcc0, FUN_8c015b54, FUN_8c026968, FUN_8c026de0 (+45 more)
 */
u32 deref_u32(u32 *a0) {
}

/*
 * FUN_8c015b54  0x8c015b54
 * called by: FUN_8c0cc524, FUN_8c0d9720
 */
u32 FUN_8c015b54(u32 *a0, u32 a1) {
    u32 r6;
    u32 r7;
    u32 uVar1;

    uVar1 = deref_u32(a1);
    uVar1 = FUN_8c21ba62(*a0, uVar1, r6, r7, a0);
    return uVar1;
}

/*
 * FUN_8c015b8c  0x8c015b8c
 * called by: FUN_8c015ab8
 */
u32 FUN_8c015b8c(u32 *a0) {
    *a0 = 0;
    return 0;
}

/*
 * FUN_8c015b94  0x8c015b94
 * called by: FUN_8c02452c, FUN_8c039124, FUN_8c08894c, FUN_8c08a17c, FUN_8c09b210, FUN_8c0a5c90
 */
u32 FUN_8c015b94(u32 a0, u32 a1) {
    FUN_8c015bc0(a0);
    return a0;
}

/*
 * FUN_8c015bb0  0x8c015bb0
 * called by: CAnimal_LoadGRWait, FUN_8c027a78, FUN_8c028390, FUN_8c06ce04, FUN_8c08c9dc, FUN_8c0d93a8
 */
u32 FUN_8c015bb0(u32 *a0, u32 a1) {
    u32 in_r0;

    *a0 = a1;
    return in_r0;
}

/*
 * FUN_8c015bb8  0x8c015bb8
 * called by: CSoilTank_Create, Class_129938_m6_01733c, FUN_8c026968, FUN_8c026de0, FUN_8c029510, FUN_8c0297b8,
 * FUN_8c037034, FUN_8c038b04 (+26 more)
 */
u32 FUN_8c015bb8(u32 *a0) {
}

/*
 * FUN_8c015bc0  0x8c015bc0
 * called by: FUN_8c015b94
 */
u32 FUN_8c015bc0(u32 *a0) {
    *a0 = 0;
    return 0;
}

/*
 * FUN_8c015bc8  0x8c015bc8
 * called by: FUN_8c039124, FUN_8c08894c, FUN_8c08a17c, FUN_8c09b210, FUN_8c0a5c90
 */
u32 FUN_8c015bc8(u32 a0) {
    FUN_8c015bec(a0);
    return a0;
}

/*
 * FUN_8c015be4  0x8c015be4
 * called by: CAnimal_LoadGRWait, FUN_8c028390, FUN_8c06ce04
 */
u32 FUN_8c015be4(u32 *a0, u32 a1) {
    u32 in_r0;

    *a0 = a1;
    return in_r0;
}

/*
 * FUN_8c015bec  0x8c015bec
 * called by: FUN_8c015bc8
 */
u32 FUN_8c015bec(u32 *a0) {
    *a0 = 0;
    return 0;
}

/*
 * free_if_nonnull_wrap_015bf4  0x8c015bf4
 */
u32 *free_if_nonnull_wrap_015bf4(u32 *a0, u32 a1, u32 a2, u32 a3) {
    u32 in_stack_fffffff4;

    if ((a0 != NULL) && (*a0 = &g_8c1298ac, 0 < (short)a1)) {
        free_if_nonnull(a0, a1, a2, a3, CONCAT22((short)((u32)in_stack_fffffff4 >> 0x10), (short)a1));
    }
    return a0;
}

/*
 * FUN_8c015c2c  0x8c015c2c
 * called by: FUN_8c015ff0, FUN_8c0ffb98
 */
u32 *FUN_8c015c2c(u32 *a0) {
    *a0 = (&DATA_8c12988c);
    FUN_8c015dc0(a0, 0);
    return a0;
}

/*
 * FUN_8c015c58  0x8c015c58
 * called by: FUN_8c0e74a8
 */
u32 *FUN_8c015c58(u32 *a0, u32 a1) {
    *a0 = (&DATA_8c12988c);
    FUN_8c015dc0(a0, a1);
    return a0;
}

/*
 * free_if_nonnull_wrap_015c94  0x8c015c94
 * called by: Class_12b3b8_m0_0e77ec, FUN_8c0c4b3c, FUN_8c0ffc1c
 */
u32 *free_if_nonnull_wrap_015c94(u32 *a0, u32 a1, u32 a2, u32 a3) {
    u32 in_stack_fffffff4;

    if ((a0 != NULL) && (*a0 = &g_8c12988c, 0 < (short)a1)) {
        free_if_nonnull(a0, a1, a2, a3, CONCAT22((short)((u32)in_stack_fffffff4 >> 0x10), (short)a1));
    }
    return a0;
}

/*
 * FUN_8c015ccc  0x8c015ccc
 * called by: CIncubater_Create, FUN_8c0d261c, FUN_8c0ffcb4
 */
u32 FUN_8c015ccc(int a0, u32 a1) {
    u32 in_r0;

    *(u32 *)(a0 + 0x1c) = a1;
    return in_r0;
}

/*
 * FUN_8c015cd4  0x8c015cd4
 * called by: CIncubater_Create, FUN_8c0d261c, FUN_8c0ffcb4, FUN_8c1002a8, FUN_8c10031c, FUN_8c100694
 */
u32 FUN_8c015cd4(int a0, u32 a1) {
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
        iVar1 = FUN_8c25b3a2(*(u32 *)(a0 + 0x1c), a1, a2, a3);
        if (iVar1 == -1)
            break;
        uVar2 = uVar2 + 1;
    }
    (*(code *)(&FUN_8c014334))(auStack_10c, a1, a2, a3, "Can't Find File..:%s");
    (*(code *)(&report_error_message))(auStack_10c, "C2DSprite::Load()", 1, 2);
    return 0;
}

/*
 * FUN_8c015d74  0x8c015d74
 */
u32 FUN_8c015d74(int a0, u32 unused_a1, u32 unused_a2, u32 a3) {
    u32 uVar1;
    u64 in_dr4;

    *(int *)(a0 + 4) = (int)((u64)in_dr4 >> 0x20);
    *(int *)(a0 + 8) = (int)in_dr4;
    uVar1 = FUN_8c25748c(a0 + 4, *(u32 *)(a0 + 0x24), *(u32 *)(a0 + 0x28), a3);
    return uVar1;
}

/*
 * FUN_8c015dc0  0x8c015dc0
 * called by: FUN_8c015c2c, FUN_8c015c58
 */
u32 FUN_8c015dc0(int a0, u32 a1) {
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
 * FUN_8c015dfc  0x8c015dfc
 * name hint from a string it uses: Err wrap
 */
u32 FUN_8c015dfc(u32 a0, u32 a1, u32 a2, u32 a3) {
    u32 uVar1;

    uVar1 = FUN_8c015f18(a0, a1, a2, a3);
    return uVar1;
}

/*
 * FUN_8c015e18  0x8c015e18
 */
u32 FUN_8c015e18(int a0) {
    u32 uVar1;

    FUN_8c25b3ec(*(u32 *)(a0 + 0x1c));
    uVar1 = FUN_8c25b044(0);
    return uVar1;
}

/*
 * FUN_8c015e40  0x8c015e40
 */
u32 FUN_8c015e40(void) {
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
    uVar1 = FUN_8c234bc0(&uStack_64, 4, 10000, 0);
    return uVar1;
}

/*
 * FUN_8c015f18  0x8c015f18
 * name hint from a string it uses: Error
 * called by: FUN_8c015dfc
 * strings: "Error"
 */
u32 FUN_8c015f18(int a0, u32 a1, u32 a2, u32 a3) {
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
    FUN_8c257188(a0 + 0x2c, uVar3, 0xb01, (int)sVar1, (int)sVar2);
    ar7_00 = 0x40800000;
    ar6_00 = 10000;
    ar5_00 = a0 + 0x2c;
    FUN_8c257196(**(u32 **)(a0 + 0x1c), ar5_00, 10000, 0x40800000);
    iVar4 = FUN_8c25b3a2(*(u32 *)(a0 + 0x1c), ar5_00, ar6_00, ar7_00);
    if (iVar4 == -1) {
        ar7_00 = 0xd;
        ar6_00 = 0;
        ar5_00 = 0;
        noop_102824("Error", 0, 0, 0xd);
    }
    FUN_8c25b100((int)**(short **)(a0 + 0x20), ar5_00, ar6_00, ar7_00);
    uVar3 = FUN_8c1fb57c(uVar3, ar5_00, ar6_00, ar7_00);
    return uVar3;
}

/*
 * FUN_8c015ff0  0x8c015ff0
 * called by: FUN_8c0d25b4, FUN_8c0fdde4
 */
u32 *FUN_8c015ff0(u32 *a0) {
    FUN_8c015c2c(a0);
    *a0 = (&DATA_8c12984c);
    return a0;
}

/*
 * FUN_8c016014  0x8c016014
 */
u32 FUN_8c016014(int a0, u32 unused_a1, u32 unused_a2, u32 a3) {
    u32 uVar1;
    u32 in_fr5;
    u32 in_fr4;
    u32 in_fr6;

    *(u32 *)(a0 + 4) = in_fr4;
    *(u32 *)(a0 + 8) = in_fr5;
    *(u32 *)(a0 + 0xc) = in_fr6;
    uVar1 = FUN_8c25754c(a0 + 4, *(u32 *)(a0 + 0x24), *(u32 *)(a0 + 0x28), a3);
    return uVar1;
}

/*
 * FUN_8c016068  0x8c016068
 */
u32 FUN_8c016068(int a0, u32 a1, u32 unused_a2, u32 a3) {
    u32 uVar1;
    u32 in_fr5;
    u32 in_fr4;
    u32 in_fr6;

    *(u32 *)(a0 + 4) = in_fr4;
    *(u32 *)(a0 + 8) = in_fr5;
    *(u32 *)(a0 + 0xc) = in_fr6;
    *(u32 *)(a0 + 0x24) = a1;
    uVar1 = FUN_8c25754c(a0 + 4, *(u32 *)(a0 + 0x24), *(u32 *)(a0 + 0x28), a3);
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
    ar5_00 = FUN_8c1fb4b8((int)*a3 * (int)a3[1] * s4, a1, a2, a3);
    if (ar5_00 == 0) {
        report_error_message("Lack of memory!", "C3DRenderPly::SetMem()", 1, 2);
    }
    FUN_8c257188(a0 + 0xa0, ar5_00, 0xb01, (int)*a3, (int)a3[1]);
    ar7_00 = 0x40800000;
    ar5_01 = a0 + 0xa0;
    FUN_8c257196(*(u32 *)(a0 + 0x8c), ar5_01, s0, 0x40800000);
    FUN_8c25b3a2(a0 + 0x8c, ar5_01, s0, ar7_00);
    FUN_8c25b100();
    FUN_8c1fb586(ar5_00, ar5_01, s0, ar7_00);
    *(u32 *)(a0 + 0xcc) = *(u32 *)(a0 + 0xcc) | 0x80000000;
    *(u32 *)(a0 + 0xcc) = *(u32 *)(a0 + 0xcc) | 0x20;
    return 1;
}

/*
 * Class_129808_m10_0162bc  0x8c0162bc
 */
u32 Class_129808_m10_0162bc(int a0, u32 unused_a1, u32 unused_a2, u32 a3) {
    u32 uVar1;

    FUN_8c25b3ec(a0 + 0x8c);
    uVar1 = (*(code *)(&FUN_8c235bfc))(a0 + 4, *(u32 *)(a0 + 0x10), *(u32 *)(0xcc + a0), a3);
    return uVar1;
}

/*
 * FUN_8c0162f8  0x8c0162f8
 * called by: Class_129808_m6_0166b4, FUN_8c0b6c3c, FUN_8c0b6e6c, FUN_8c0b79f0, FUN_8c0ba5e0, FUN_8c0ba8e4,
 * FUN_8c0bad68, FUN_8c0bb1e4 (+13 more)
 */
u32 *FUN_8c0162f8(u32 *a0, u32 a1, u32 unused_a2, u32 a3) {
    a0[4] = 0;
    *a0 = 0;
    a0[1] = 0;
    a0[2] = 0;
    a0[3] = 0;
    a0[4] = 0;
    return a0;
}

/*
 * FUN_8c016318  0x8c016318
 * called by: CGame_Init, Class_129808_m6_0166b4, FUN_8c0b6e6c, FUN_8c0b79f0, FUN_8c0ba5e0, FUN_8c0bb1e4, FUN_8c0bf804,
 * FUN_8c0bfa78 (+20 more)
 */
u32 FUN_8c016318(u32 *a0, u32 a1, u32 a2, u32 a3) {
    u32 in_r0;

    *a0 = a1;
    a0[1] = a2;
    a0[3] = a3;
    return in_r0;
}

/*
 * FUN_8c016324  0x8c016324
 * called by: Class_129808_m6_0166b4, FUN_8c0ba5e0, FUN_8c0bb1e4, FUN_8c0bf804, FUN_8c0bfa78, FUN_8c0c09d0,
 * FUN_8c0c2068, FUN_8c0c2490 (+12 more)
 */
u32 FUN_8c016324(int a0, u32 a1, u32 a2) {
    u32 uVar1;

    *(u32 *)(a0 + 8) = a1;
    uVar1 = 0x80000020;
    *(u32 *)(a0 + 0x10) = *(u32 *)(a0 + 0x10) | 0x80000020;
    return uVar1;
}

/*
 * FUN_8c016340  0x8c016340
 * called by: Class_129808_m6_0166b4, FUN_8c0b6e6c, FUN_8c0b79f0, FUN_8c0bb1e4, FUN_8c0c09d0, FUN_8c0c1d98,
 * FUN_8c0c2068, FUN_8c0c2efc (+17 more)
 */
u32 FUN_8c016340(int a0, u32 a1, u32 unused_a2, u32 a3) {
    u32 uVar1;

    uVar1 = (*(code *)(&FUN_8c235b6c))(a0, *(u32 *)(a0 + 0xc), *(u32 *)(a0 + 0x10), a3);
    return uVar1;
}

/*
 * FUN_8c01636c  0x8c01636c
 * called by: FUN_8c0ba5e0, FUN_8c0bf804, FUN_8c0bfa78, FUN_8c0c2efc, FUN_8c0c3530, FUN_8c0c3a48, FUN_8c0c3aac,
 * FUN_8c0c3b10 (+4 more)
 */
u32 FUN_8c01636c(int *a0, u32 unused_a1, u32 unused_a2, u32 a3) {
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
    uVar1 = FUN_8c235b6c(a0, a0[3], a0[4], a3);
    *a0 = iVar2;
    return uVar1;
}

/*
 * FUN_8c016410  0x8c016410
 * called by: FUN_8c0150e0, FUN_8c017830, FUN_8c0bff8c, FUN_8c0d2fd8, FUN_8c0d99e8, FUN_8c0e74a8, FUN_8c0f58a4
 */
u32 FUN_8c016410(u32 a0) {
    FUN_8c016584(a0);
    return a0;
}

/*
 * FUN_8c01642c  0x8c01642c
 * called by: FUN_8c0d1168, FUN_8c0d7900
 */
u32 FUN_8c01642c(u32 a0, u32 a1, u32 a2, u32 a3) {
    FUN_8c016584(a0);
    FUN_8c016464(a0, a1, a2, a3);
    return a0;
}

/*
 * FUN_8c016464  0x8c016464
 * called by: CSquid_Init, Class_129808_m2_0148d8, FUN_8c01642c, FUN_8c0ae84c, FUN_8c0d2478, FUN_8c0d2fd8, FUN_8c0e74a8,
 * FUN_8c0f5b10
 */
u32 FUN_8c016464(int *a0, u32 *a1, u32 *a2, int a3) {
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
 * FUN_8c0164c8  0x8c0164c8
 * called by: CSquid_Init, FUN_8c0d1168, FUN_8c0d2fd8, FUN_8c0d7900, FUN_8c0f5b10
 */
int FUN_8c0164c8(int a0, u16 *a1, int a2) {
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
 * FUN_8c016504  0x8c016504
 * called by: Class_129808_m2_0148d8
 */
u32 FUN_8c016504(int a0, u32 unused_a1, u32 unused_a2, u32 a3) {
    u32 uVar1;

    uVar1 = (*(code *)(&FUN_8c234d68))(a0, *(u32 *)(a0 + 0x10), *(u32 *)(a0 + 0x14), a3);
    return uVar1;
}

/*
 * FUN_8c016524  0x8c016524
 * called by: FUN_8c0ad354, FUN_8c0ad7ec, FUN_8c0d1168, FUN_8c0d2478, FUN_8c0d7900, FUN_8c0e7a78, FUN_8c0f5e0c,
 * FUN_8c0f5f08
 */
u32 FUN_8c016524(int a0, u32 unused_a1, u32 unused_a2, u32 a3) {
    u32 uVar1;

    uVar1 = (*(code *)(&FUN_8c235bfc))(a0, *(u32 *)(a0 + 0x10), *(u32 *)(a0 + 0x14), a3);
    return uVar1;
}

/*
 * FUN_8c016544  0x8c016544
 * called by: FUN_8c0d9c60
 */
u32 FUN_8c016544(int a0, u32 a1, u32 unused_a2, u32 a3) {
    u32 uVar1;

    uVar1 = a1;
    FUN_8c25b3ec(*(u32 *)(a0 + 0x40));
    FUN_8c25b434(a1);
    uVar1 = (*(code *)(&FUN_8c235bfc))(a0, *(u32 *)(a0 + 0x10), *(u32 *)(a0 + 0x14), a3);
    return uVar1;
}

/*
 * FUN_8c016584  0x8c016584
 * called by: FUN_8c016410, FUN_8c01642c
 */
u32 FUN_8c016584(int *a0) {
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
    uVar1 = FUN_8c016658(a0);
    return uVar1;
}

/*
 * FUN_8c016658  0x8c016658
 * called by: FUN_8c016584
 */
u32 FUN_8c016658(int a0) {
    *(u32 *)(a0 + 0x14) = 0;
    return 0;
}

/*
 * free_if_nonnull_wrap_016660  0x8c016660
 * called by: Class_12b3b8_m0_0e77ec, FUN_8c0e8090, FUN_8c0e8280, FUN_8c0e89c4, FUN_8c0e8ae0
 */
int free_if_nonnull_wrap_016660(int a0, u32 a1, u32 a2, u32 a3) {
    u32 in_stack_fffffff4;

    if ((a0 != 0) && (0 < (short)a1)) {
        free_if_nonnull(a0, a1, a2, a3, CONCAT22((short)((u32)in_stack_fffffff4 >> 0x10), (short)a1));
    }
    return a0;
}

/*
 * FUN_8c016690  0x8c016690
 * called by: FUN_8c0e74a8
 */
u32 FUN_8c016690(u32 a0) {
    u32 uVar1;

    uVar1 = FUN_8c10273c(a0, 0, 0);
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
    FUN_8c0162f8(auStack_64, a1, a2, a3);
    FUN_8c01688c(a0, iVar2, a2);
    FUN_8c015198(auStack_64, ar5_01);
    for (iVar2 = 0; *(char *)(iVar2 + a1) != '\0'; iVar2 = iVar2 + 1) {
        FUN_8c01679c(a0, (int)*(char *)(iVar2 + a1), auStack_50);
        FUN_8c0168b4(a0, iVar2, auStack_40);
        a3 = 4;
        a2 = a0 + 0x1c;
        FUN_8c016318(auStack_64, auStack_40, a2, 4);
        ar5_00 = auStack_50;
        FUN_8c016324(auStack_64, ar5_00, a2);
        FUN_8c016340(auStack_64, ar5_00, a2, a3);
    }
    uVar1 = free_if_nonnull_wrap_0151a0(auStack_64, 0xffffffff, a2, a3);
    return uVar1;
}

/*
 * FUN_8c01679c  0x8c01679c
 * called by: Class_129808_m6_0166b4
 */
int FUN_8c01679c(int a0, u32 a1, short *a2) {
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
 * FUN_8c01688c  0x8c01688c
 * called by: Class_129808_m6_0166b4
 */
u32 FUN_8c01688c(int a0, u32 a1, u32 a2) {
    u32 uVar1;

    FUN_8c01538c(*(u32 *)(a0 + 4), a1, a2);
    uVar1 = FUN_8c014a94(*(u32 *)(a0 + 4), *(u32 *)(a0 + 8));
    return uVar1;
}

/*
 * FUN_8c0168b4  0x8c0168b4
 * called by: Class_129808_m6_0166b4
 */
int FUN_8c0168b4(int a0, int a1, float *a2) {
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
 * FUN_8c016978  0x8c016978
 */
u32 FUN_8c016978(u32 unused_a0, u32 a1, u32 a2, u32 a3) {
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
 * FUN_8c016a20  0x8c016a20
 * called by: FUN_8c0e0988
 */
int FUN_8c016a20(int a0) {
    if (*(float *)(a0 + 4) == 0.0) {
        *(u32 *)(a0 + 4) = 0x38d1b717;
    }
    return a0 + 8;
}

/*
 * FUN_8c016a7c  0x8c016a7c
 * called by: FUN_8c016b64, FUN_8c016fcc, FUN_8c017010
 */
u32 *FUN_8c016a7c(u32 *a0, u32 a1, u32 a2) {
    *a0 = (&DATA_8c1299b0);
    Vec3_ctor_zero(a0 + 1, a1, a2);
    Vec3_set_zero(a0 + 5);
    FUN_8c023dac(a0 + 8);
    a0[0xb] = 2;
    return a0;
}

/*
 * free_if_nonnull_wrap_016ac4  0x8c016ac4
 * called by: CAnimal_m0_025688, Class_1299b0_m0_016af4, Class_12a0c4_m0_0674c8, Class_12a5d0_m0_08a3a4,
 * Class_12c1f0_m0_0f4108, FUN_8c02441c, FUN_8c0348ac, FUN_8c04f034 (+10 more)
 */
int free_if_nonnull_wrap_016ac4(int a0, u32 a1, u32 a2, u32 a3) {
    u32 in_stack_fffffff4;

    if ((a0 != 0) && (0 < (short)a1)) {
        free_if_nonnull(a0, a1, a2, a3, CONCAT22((short)((u32)in_stack_fffffff4 >> 0x10), (short)a1));
    }
    return a0;
}

/*
 * Class_1299b0_m0_016af4  0x8c016af4
 * called by: Class_129938_m0_017084, Class_129974_m0_016c2c
 */
u32 *Class_1299b0_m0_016af4(u32 *a0, u32 a1, u32 a2, u32 a3) {
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
 * FUN_8c016b64  0x8c016b64
 * called by: FUN_8c0db304
 */
u32 *FUN_8c016b64(u32 *a0, u32 a1, u32 a2) {
    u32 in_fr1;
    u32 in_fr4;
    u64 in_xd14;
    char cVar1;

    cVar1 = '\0';
    FUN_8c016a7c(a0, a1, a2);
    *a0 = &g_8c129974;
    FUN_8c015ab8(a0 + 0x10);
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
    FUN_8c016fa4(a0, a1, a2);
    return a0;
}

/*
 * free_if_nonnull_wrap_016bfc  0x8c016bfc
 * called by: Class_129938_m0_017084, Class_129974_m0_016c2c, Class_129cbc_m0_0312f4, Class_12a0c4_m0_0674c8,
 * Class_12b580_m0_0e61f4, Class_12b758_m0_0e46cc, Class_12b930_m0_0dde84, Class_12bce0_m0_0d9a98 (+11 more)
 */
int free_if_nonnull_wrap_016bfc(int a0, u32 a1, u32 a2, u32 a3) {
    u32 in_stack_fffffff4;

    if ((a0 != 0) && (0 < (short)a1)) {
        free_if_nonnull(a0, a1, a2, a3, CONCAT22((short)((u32)in_stack_fffffff4 >> 0x10), (short)a1));
    }
    return a0;
}

/*
 * Class_129974_m0_016c2c  0x8c016c2c
 * called by: FUN_8c0db224, FUN_8c0e0614, FUN_8c0f3f58
 */
u32 *Class_129974_m0_016c2c(u32 *a0, u32 a1, u32 a2, u32 a3) {
    u32 ar5_00;
    u32 in_stack_fffffff4;
    u32 ain0;

    ain0 = CONCAT22((short)((u32)in_stack_fffffff4 >> 0x10), (u16)a1);
    if (a0 != NULL) {
        *a0 = &g_8c129974;
        free_if_nonnull_wrap_016bfc(a0 + 0x10, 0xffffffff, a2, a3);
        ar5_00 = 0;
        Class_1299b0_m0_016af4(a0, 0, a2, a3);
        if (0 < (short)ain0) {
            free_if_nonnull(a0);
        }
    }
    return a0;
}

/*
 * FUN_8c016c84  0x8c016c84
 */
u32 FUN_8c016c84(int a0, u32 *a1) {
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
 * FUN_8c016cec  0x8c016cec
 */
float *FUN_8c016cec(int a0, u64 *a1, u32 a2, u64 *a3, int *s0) {
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
 * FUN_8c016da8  0x8c016da8
 */
u32 FUN_8c016da8(int a0, u32 a1, u32 a2, u32 a3) {
    u32 uVar1;
    u32 in_PR;

    FUN_8c256328(0, a1, a2, a3, in_PR);
    FUN_8c25b5d0(0, a1, a2, a3, in_PR);
    FUN_8c256fec(0, a1, a2, a3, in_PR);
    FUN_8c015af8(a0 + 0x40, a1, a2, a3);
    uVar1 = FUN_8c256210(1);
    return uVar1;
}

/*
 * FUN_8c016e18  0x8c016e18
 */
u32 FUN_8c016e18(u32 a0, int *a1, u32 a2, u32 a3) {
    u32 uVar1;

    uVar1 = (**(code **)(*a1 + 0x18))(a1, a0, a2, a3);
    return uVar1;
}

/*
 * FUN_8c016e38  0x8c016e38
 */
u32 FUN_8c016e38(int a0, int *a1, u32 a2, u32 a3) {
    u32 uVar1;
    u8 auStack_14[20];

    (**(code **)(*a1 + 0x34))(a1, auStack_14, a2, a3);
    uVar1 = FUN_8c233d14(a0 + 0x30, auStack_14);
    return uVar1;
}

/*
 * FUN_8c016e6c  0x8c016e6c
 */
u32 *FUN_8c016e6c(int a0, u32 *a1) {
    a1[3] = *(u32 *)(a0 + 0x3c);
    *a1 = *(u32 *)(a0 + 0x30);
    a1[1] = *(u32 *)(a0 + 0x34);
    a1[2] = *(u32 *)(a0 + 0x38);
    return (u32 *)(a0 + 0x34);
}

/*
 * FUN_8c016e98  0x8c016e98
 */
u32 FUN_8c016e98(int a0, int *a1, u32 a2, u32 a3) {
    u32 uVar1;
    u8 auStack_64[100];

    (**(code **)(*a1 + 0x38))(a1, auStack_64, a2, a3);
    uVar1 = FUN_8c2336e8(auStack_64, a0 + 0x30);
    return uVar1;
}

/*
 * FUN_8c016ecc  0x8c016ecc
 */
u32 FUN_8c016ecc(int a0, int a1) {
    int iVar1;

    for (iVar1 = 0; iVar1 < 8; iVar1 = iVar1 + 1) {
        *(u32 *)(iVar1 * 0xc + a1) = *(u32 *)(iVar1 * 0xc + a0 + 0x30);
        *(u32 *)(iVar1 * 0xc + a1 + 4) = *(u32 *)(iVar1 * 0xc + a0 + 0x34);
        *(u32 *)(iVar1 * 0xc + a1 + 8) = *(u32 *)(iVar1 * 0xc + a0 + 0x38);
    }
    return 8;
}

/*
 * FUN_8c016f50  0x8c016f50
 */
u32 FUN_8c016f50(int a0, int *a1, u32 a2, u32 a3) {
    u32 uVar1;

    (**(code **)(*a1 + 0x34))(a1, a0 + 0x30, a2, a3);
    uVar1 = FUN_8c016f84(a1, a0 + 0x20);
    return uVar1;
}

/*
 * FUN_8c016f84  0x8c016f84
 * called by: Class_129938_m7_0177d0, FUN_8c016f50
 */
u32 FUN_8c016f84(int a0, u32 a1) {
    u32 uVar1;

    uVar1 = FUN_8c023e04(a1, a0 + 0x20);
    return uVar1;
}

/*
 * FUN_8c016fa4  0x8c016fa4
 * called by: FUN_8c016b64
 */
u32 FUN_8c016fa4(int a0, u32 unused_a1, u32 a2) {

    FUN_8c015ad4(a0 + 0x40, &g_8c12f1b8, a2);
    *(u32 *)(a0 + 0x2c) = 0;
    return 0;
}

/*
 * FUN_8c016fcc  0x8c016fcc
 * called by: CSquid_Init, FUN_8c036260, FUN_8c0384f8, FUN_8c06740c, FUN_8c0851f4, FUN_8c087ed0, FUN_8c08a17c,
 * FUN_8c099e74 (+7 more)
 */
u32 *FUN_8c016fcc(u32 *a0, u32 a1, u32 a2) {
    FUN_8c016a7c(a0, a1, a2);
    *a0 = (&DATA_8c129938);
    FUN_8c015ab8((int)a0 + 0x90);
    FUN_8c017804(a0, a1, a2);
    return a0;
}

/*
 * FUN_8c017010  0x8c017010
 * called by: FUN_8c039124, FUN_8c06d8e4, FUN_8c08894c, FUN_8c08d380, FUN_8c09b210, FUN_8c09d718, FUN_8c09f060,
 * FUN_8c0a5c90 (+1 more)
 */
int *FUN_8c017010(int *a0, u32 a1, u32 a2, u32 a3, u32 s0, u32 s4, u32 s8, u32 s12, u32 s16) {
    FUN_8c016a7c(a0, a1, a2);
    *a0 = (int)(&DATA_8c129938);
    FUN_8c015ab8((int)a0 + 0x90);
    (**(code **)(*a0 + 0x2c))(a0, a1, a2, a3, s0, s4, s8, s12, s16);
    FUN_8c017804(a0, a1, a2);
    return a0;
}

/*
 * Class_129938_m0_017084  0x8c017084
 * called by: CAnimal_m0_0361d8, CAnimal_m0_038648, CAnimal_m0_08516c, CAnimal_m0_08800c, CAnimal_m0_0aca4c,
 * Class_12a0c4_m0_0674c8, Class_12a5d0_m0_08a3a4, Class_12a7f4_m0_099fd8 (+7 more)
 */
u32 *Class_129938_m0_017084(u32 *a0, u32 a1, u32 a2, u32 a3) {
    u32 ar5_00;
    u32 in_stack_fffffff4;
    u32 ain0;

    ain0 = CONCAT22((short)((u32)in_stack_fffffff4 >> 0x10), (u16)a1);
    if (a0 != NULL) {
        *a0 = &g_8c129938;
        free_if_nonnull_wrap_016bfc(a0 + 0x24, 0xffffffff, a2, a3);
        ar5_00 = 0;
        Class_1299b0_m0_016af4(a0, 0, a2, a3);
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
    FUN_8c25cddc(auStack_ac, a2, ar6_00, a3, a1);
    FUN_8c25b5d0(auStack_ac, a2, ar6_00, a3, a1);
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
    FUN_8c256b0c(auStack_ac, ar5_00, iVar3, ar7_00, a1);
    for (iVar3 = 0; iVar3 < 8; iVar3 = iVar3 + 1) {
        FUN_8c212740(auStack_ac, auStack_6c + iVar3 * 0xc, iVar3 * 0xc + a0 + 0x30, ar7_00, a1);
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
    FUN_8c023e04(a0 + 0x20, a3);
    FUN_8c25cddc(auStack_ac, a3, ar6_00, ar7_00, a1);
    FUN_8c25b5d0(auStack_ac, a3, ar6_00, ar7_00, a1);
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
    FUN_8c256b0c(auStack_ac, ar5_00, iVar3, ar7_01, a1);
    FUN_8c256fec(auStack_ac, ar5_00, iVar3, ar7_01, a1);
    for (iVar3 = 0; iVar3 < 8; iVar3 = iVar3 + 1) {
        FUN_8c212740(auStack_ac, auStack_6c + iVar3 * 0xc, iVar3 * 0xc + a0 + 0x30, ar7_01, a1);
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
    iVar1 = FUN_8c015bb8(a0 + 0x90);
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
    uVar2 = FUN_8c015af8(a0 + 0x90, a1, a2, a3);
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
    uVar1 = FUN_8c2336e8(a0 + 0x30, auStack_14);
    return uVar1;
}

/*
 * Class_129938_m5_01745c  0x8c01745c
 */
u32 Class_129938_m5_01745c(int a0, int *a1, u32 a2, u32 a3) {
    u32 uVar1;
    u8 auStack_64[100];

    (**(code **)(*a1 + 0x38))(a1, auStack_64, a2, a3);
    uVar1 = FUN_8c23340c(a0 + 0x30, auStack_64);
    return uVar1;
}

/*
 * FUN_8c017490  0x8c017490
 */
u32 FUN_8c017490(int a0, u32 *a1, u32 *a2, u32 *a3, u32 *s0, u32 *s4, u32 *s8, u32 *s12, u32 *s16) {
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
    FUN_8c022fc0(a1, s0, a2, a3);
    if (cVar3 == '\0') {
        *(u32 *)(a0 + 0x20) = uVar2;
    } else {
        *(u64 *)(a0 + 0x20) = CONCAT44(uVar2, in_fr1);
    }
    uVar1 = CONCAT44(uVar2, in_fr1);
    FUN_8c022fc0(a1, s4, ar6_00, a3);
    uStack_28 = (u32)uVar1;
    uVar2 = (u32)((u64)uVar1 >> 0x20);
    if (cVar3 == '\0') {
        *(u32 *)(a0 + 0x24) = uVar2;
        uStack_28 = uVar2;
    } else {
        *(u64 *)(a0 + 0x24) = uVar1;
    }
    FUN_8c022fc0(a1, a2, ar6_00, a3);
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
 * FUN_8c017630  0x8c017630
 */
u32 FUN_8c017630(int a0, u32 *a1, u32 a2, u32 a3) {
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
    FUN_8c022fc0(a1, a1 + 0xc, a2, a3);
    if (cVar3 == '\0') {
        *(u32 *)(a0 + 0x20) = uVar2;
    } else {
        *(u64 *)(a0 + 0x20) = CONCAT44(uVar2, in_fr1);
    }
    uVar1 = CONCAT44(uVar2, in_fr1);
    FUN_8c022fc0(a1, a1 + 0x10, a2, a3);
    uStack_14 = (u32)uVar1;
    uVar2 = (u32)((u64)uVar1 >> 0x20);
    if (cVar3 == '\0') {
        *(u32 *)(a0 + 0x24) = uVar2;
        uStack_14 = uVar2;
    } else {
        *(u64 *)(a0 + 0x24) = uVar1;
    }
    FUN_8c022fc0(a1, a1 + 4, a2, a3);
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
    uVar1 = FUN_8c016f84(a1, a0 + 0x20);
    return uVar1;
}

/*
 * FUN_8c017804  0x8c017804
 * called by: FUN_8c016fcc, FUN_8c017010
 */
u32 FUN_8c017804(int a0, u32 unused_a1, u32 a2) {

    FUN_8c015ad4(a0 + 0x90, &g_8c12ca68, a2);
    *(u32 *)(a0 + 0x2c) = 1;
    return 1;
}

/*
 * FUN_8c017830  0x8c017830
 * called by: FUN_8c0cfbcc, FUN_8c0dca9c
 */
u32 *FUN_8c017830(u32 *a0) {
    u32 extraout_fr1;
    char cVar1;

    cVar1 = '\0';
    FUN_8c016410(a0 + 4);
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
 * FUN_8c0178b4  0x8c0178b4
 * called by: CWaterTank_CreateStage
 */
int FUN_8c0178b4(int *a0, int a1, u32 a2) {
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
 * FUN_8c017900  0x8c017900
 * called by: FUN_8c0f43bc
 */
u32 FUN_8c017900(int a0, double *a1, float *a2, float *a3) {
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
            FUN_8c234a68(&uStack_b0, ar5_00, 0);
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
                        FUN_8c022d3c(auStack_6c + iStack_1a0 * 0x10, &fStack_7c, pfVar7, ar7_00, auStack_d0);
                        Vec3_assign(&uStack_8c, auStack_d0, pfVar7, ar7_00);
                        pfVar7 = (float *)0xffffffff;
                        ar5_00 = (float *)0xffffffff;
                        Vec3_dtor(auStack_d0, 0xffffffff, 0xffffffff, ar7_00);
                    } else {
                        iStack_19c = (int)sVar8;
                        FUN_8c022d3c(&fStack_7c, auStack_6c + iStack_19c * 0x10, pfVar7, ar7_00, auStack_c0);
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
 * FUN_8c0185a4  0x8c0185a4
 * called by: FUN_8c0e0988
 */
u32 FUN_8c0185a4(int a0, double *a1, float *a2, float *a3) {
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
            FUN_8c234a68(&uStack_90, ar5_00, 0);
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
                        FUN_8c022d3c(auStack_4c, &uStack_5c, pfVar6, ar7_00, auStack_b0);
                        Vec3_assign(&uStack_6c, auStack_b0, pfVar6, ar7_00);
                        ar5_00 = (float *)0xffffffff;
                        Vec3_dtor(auStack_b0, 0xffffffff, pfVar6, ar7_00);
                    } else {
                        FUN_8c022d3c(&uStack_5c, auStack_4c, pfVar6, ar7_00, auStack_a0);
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
 * FUN_8c018f80  0x8c018f80
 * called by: FUN_8c0db224, FUN_8c0e0614
 */
u32 *FUN_8c018f80(int a0, u32 *a1) {
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
 * FUN_8c018fb0  0x8c018fb0
 */
u32 FUN_8c018fb0(u32 unused_a0, u32 a1, u32 a2, u32 a3) {
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
 * FUN_8c019058  0x8c019058
 * called by: FUN_8c0c9ee0, FUN_8c0cb220, FUN_8c0d0564, FUN_8c0d05d0, FUN_8c0d092c, FUN_8c0d0990, FUN_8c0d1168,
 * FUN_8c0d2264 (+14 more)
 */
u32 FUN_8c019058(void) {
    u32 r5;
    u32 r6;
    u32 r7;
    u32 uVar1;
    u64 in_dr4;

    uVar1 = FUN_8c25b5d0(0, r5, r6, r7, (int)((u64)in_dr4 >> 0x20));
    return uVar1;
}

/*
 * FUN_8c019088  0x8c019088
 * called by: FUN_8c029ca8, FUN_8c0f577c, FUN_8c0f57f0
 */
u32 FUN_8c019088(void) {
    u32 uVar1;
    float in_fr5;
    float in_fr4;
    float in_fr6;

    uVar1 = FUN_8c256b0c(0, (int)((in_fr4 * 65536.0) / 360.0), (int)((in_fr5 * 65536.0) / 360.0),
                         (int)((in_fr6 * 65536.0) / 360.0), in_fr4);
    return uVar1;
}

/*
 * FUN_8c0190f0  0x8c0190f0
 * called by: FUN_8c0e7a78
 */
u32 FUN_8c0190f0(void) {
    u32 r6;
    u32 r7;
    u32 uVar1;
    float in_fr4;

    uVar1 = FUN_8c256a78(0, (int)((in_fr4 * 65536.0) / 360.0), r6, r7, in_fr4);
    return uVar1;
}

/*
 * FUN_8c019128  0x8c019128
 * called by: FUN_8c0c9ee0, FUN_8c0e7a78
 */
u32 FUN_8c019128(void) {
    u32 r6;
    u32 r7;
    u32 uVar1;
    float in_fr4;

    uVar1 = FUN_8c256ce0(0, (int)((in_fr4 * 65536.0) / 360.0), r6, r7, in_fr4);
    return uVar1;
}

/*
 * FUN_8c019160  0x8c019160
 * called by: FUN_8c0d4124, FUN_8c0d4428, FUN_8c0d46cc, FUN_8c0d7354, FUN_8c0d7410, FUN_8c0e7a78
 */
u32 FUN_8c019160(void) {
    u32 r6;
    u32 r7;
    u32 uVar1;
    float in_fr4;

    uVar1 = FUN_8c256d7c(0, (int)((in_fr4 * 65536.0) / 360.0), r6, r7, in_fr4);
    return uVar1;
}

/*
 * FUN_8c019198  0x8c019198
 * called by: FUN_8c029ca8, FUN_8c09ca80, FUN_8c0c9ee0, FUN_8c0d2264, FUN_8c0d2478, FUN_8c0e4dd0, FUN_8c0e7a78
 */
u32 FUN_8c019198(u32 unused_a0, u32 a1) {
    u32 r6;
    u32 r7;
    u32 uVar1;
    u64 in_dr4;

    uVar1 = FUN_8c256fec(0, a1, r6, r7, (int)((u64)in_dr4 >> 0x20));
    return uVar1;
}

/*
 * FUN_8c0191c8  0x8c0191c8
 * called by: FUN_8c0ad354, FUN_8c0f5e0c
 */
u32 FUN_8c0191c8(u32 a0) {
    u32 r5;
    u32 r6;
    u32 r7;
    u32 uVar1;

    uVar1 = FUN_8c23617c(a0, r5, r6, r7, a0);
    return uVar1;
}

/*
 * FUN_8c0191e4  0x8c0191e4
 * called by: FUN_8c0dbe24, FUN_8c0dfa84, FUN_8c0e74a8
 */
u32 *FUN_8c0191e4(u32 *a0) {
    *a0 = (&DATA_8c129a50);
    FUN_8c0192a8(a0);
    return a0;
}

/*
 * FUN_8c019208  0x8c019208
 * called by: FUN_8c0199d4, FUN_8c0d9c80
 */
u32 *FUN_8c019208(u32 *a0) {
    *a0 = (&DATA_8c129a50);
    FUN_8c019384(a0);
    return a0;
}

/*
 * free_if_nonnull_wrap_019270  0x8c019270
 * called by: Class_1299f8_m0_019eb8, Class_129a24_m0_019aa0, Class_12b3b8_m0_0e77ec, Class_12bb08_m0_0da208,
 * FUN_8c0dbe24, FUN_8c0dfa84
 */
u32 *free_if_nonnull_wrap_019270(u32 *a0, u32 a1, u32 a2, u32 a3) {
    u32 in_stack_fffffff4;

    if ((a0 != NULL) && (*a0 = &g_8c129a50, 0 < (short)a1)) {
        free_if_nonnull(a0, a1, a2, a3, CONCAT22((short)((u32)in_stack_fffffff4 >> 0x10), (short)a1));
    }
    return a0;
}

/*
 * FUN_8c0192a8  0x8c0192a8
 * called by: FUN_8c0191e4
 */
u8 *FUN_8c0192a8(int a0) {
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
 * FUN_8c019384  0x8c019384
 * called by: FUN_8c019208, FUN_8c0cac08, FUN_8c0e74a8
 */
u32 FUN_8c019384(int a0) {
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
    uVar1 = FUN_8c0194c0(a0);
    return uVar1;
}

/*
 * FUN_8c0194c0  0x8c0194c0
 * called by: FUN_8c019384, FUN_8c0dbdf4, FUN_8c0e7a78, FUN_8c0e84f8
 */
u32 FUN_8c0194c0(int a0) {
    u32 uVar1;
    u32 in_fr4;

    *(u32 *)(a0 + 0x7c) = in_fr4;
    uVar1 = FUN_8c257148((int)((*(float *)(a0 + 0x7c) * 65536.0) / 360.0));
    return uVar1;
}

/*
 * FUN_8c019508  0x8c019508
 * called by: FUN_8c0dbe24, FUN_8c0dfa84
 */
u64 *FUN_8c019508(u32 unused_a0, u32 *a1, u64 *a2, u64 *a3) {
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
    FUN_8c256294(0, &uStack_14, &uStack_1c);
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
 * FUN_8c019560  0x8c019560
 * called by: FUN_8c0cac08, FUN_8c0cb29c, FUN_8c0db188
 */
u32 *FUN_8c019560(int a0) {
    u32 in_fr5;
    u32 in_fr4;
    u32 in_fr6;

    *(u32 *)(a0 + 0x44) = in_fr4;
    *(u32 *)(a0 + 0x48) = in_fr5;
    *(u32 *)(a0 + 0x4c) = in_fr6;
    return (u32 *)(a0 + 0x48);
}

/*
 * FUN_8c019574  0x8c019574
 * called by: FUN_8c0db188
 */
u32 *FUN_8c019574(int a0) {
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
    FUN_8c0241e8(&uStack_48, a1, a2, a3);
    FUN_8c024088(&uStack_68, a1, a2, a3);
    FUN_8c023e44(auStack_a8);
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
    FUN_8c023e7c(auStack_a8);
    FUN_8c25cddc(auStack_f8, a1, a2, a3, uVar8);
    puVar1 = auStack_138;
    FUN_8c25cddc(puVar1, a1, a2, a3, uVar8);
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
    FUN_8c013b8c(puVar1, a1, a2, a3);
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
    FUN_8c013b8c(puVar1, a1, a2, a3);
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
    FUN_8c256ce0(auStack_f8, iVar11, a2, a3, fVar2);
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
    FUN_8c256a78(auStack_138, iVar11, a2, a3, fVar2);
    FUN_8c255d6c(auStack_f8, auStack_138, a2, a3, fVar2);
    ar6_00 = auStack_150;
    puVar1 = &uStack_144;
    FUN_8c21279c(auStack_f8, puVar1, ar6_00, a3, fVar2);
    FUN_8c022d04(auStack_58, puVar1, ar6_00, a3);
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
    FUN_8c0240bc(&uStack_68, &uStack_38, puVar1, a3);
    Vec3_assign(auStack_28, auStack_160, puVar1, a3);
    Vec3_dtor(auStack_160, 0xffffffff, puVar1, a3);
    Vec3_ctor_copy(in_stack_00000000, auStack_28, puVar1, a3);
    Vec3_dtor(auStack_b8, 0xffffffff, puVar1, a3);
    free_if_nonnull_wrap_023e4c(auStack_a8, 0xffffffff, puVar1, a3);
    FUN_8c0198dc(&uStack_68, 0xffffffff, puVar1, a3);
    FUN_8c019928(&uStack_48, 0xffffffff, puVar1, a3);
    Vec3_dtor(auStack_28, 0xffffffff, puVar1, a3);
    return 0;
}

/*
 * FUN_8c0198dc  0x8c0198dc
 * called by: Class_1299f8_m4_019588
 */
int FUN_8c0198dc(int a0, u32 a1, u32 a2, u32 a3) {
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
 * FUN_8c019928  0x8c019928
 * called by: Class_1299f8_m4_019588
 */
int FUN_8c019928(int a0, u32 a1, u32 a2, u32 a3) {
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
 * FUN_8c019974  0x8c019974
 * strings: "x:%4.1lf y:%4.1lf z:%4.1lf"
 */
u32 FUN_8c019974(u32 unused_a0, u32 a1, u32 a2) {
    u32 r7;
    u32 uVar1;

    FUN_8c014334(0x8c279178, a1, a2, r7, "x:%4.1lf y:%4.1lf z:%4.1lf");
    uVar1 = noop_102824(0x8c279178, a1, a2, 0xd);
    return uVar1;
}

/*
 * FUN_8c0199d4  0x8c0199d4
 * called by: FUN_8c0cfbcc
 */
u32 *FUN_8c0199d4(u32 *a0, u32 a1, u32 a2, u32 a3) {
    FUN_8c019208(a0);
    *a0 = (&DATA_8c129a24);
    Vec3_ctor_zero((int)a0 + 0x80, a1, a2);
    Vec3_ctor_xyz((int)a0 + 0x90, a1, a2, a3);
    Vec3_ctor_xyz((int)a0 + 0xa0, a1, a2, a3);
    Vec3_set_zero((int)a0 + 0xb0);
    *(u32 *)(0xbc + (int)a0) = 1;
    return a0;
}

/*
 * Class_129a24_m0_019aa0  0x8c019aa0
 */
u32 *Class_129a24_m0_019aa0(u32 *a0, u32 a1, u32 a2, u32 a3) {
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
        free_if_nonnull_wrap_019270(a0, 0, a2, a3);
        if (0 < (short)ain0) {
            free_if_nonnull(a0);
        }
    }
    return a0;
}

/*
 * FUN_8c019b38  0x8c019b38
 * called by: FUN_8c0cac08
 */
u32 FUN_8c019b38(int a0) {
    u32 in_fr4;

    *(u32 *)(a0 + 0x84) = in_fr4;
    return 0x84;
}

/*
 * FUN_8c019b48  0x8c019b48
 * called by: FUN_8c0cac08
 */
u32 FUN_8c019b48(int a0) {
    u64 in_dr4;

    *(float *)(a0 + 0x84) = -(float)((u64)in_dr4 >> 0x20);
    return 0x84;
}

/*
 * FUN_8c019b58  0x8c019b58
 * called by: FUN_8c0cac08
 */
u32 FUN_8c019b58(int a0) {
    u32 in_fr4;

    *(u32 *)(a0 + 0x88) = in_fr4;
    return 0x88;
}

/*
 * Class_129a24_m1_019b68  0x8c019b68
 * called by: FUN_8c0cac08, FUN_8c0cb29c
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
    FUN_8c25cddc(auStack_48, unused_a1, a2, a3, in_stack_ffffff28);
    FUN_8c25cddc(auStack_88, unused_a1, a2, a3, in_stack_ffffff28);
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
    FUN_8c256ce0(auStack_88, iVar6, a2, a3, in_stack_ffffff28);
    FUN_8c255d6c(auStack_48, auStack_88, a2, a3, in_stack_ffffff28);
    puVar3 = &uStack_ac;
    puVar2 = &uStack_94;
    FUN_8c21279c(auStack_48, puVar2, puVar3, a3, in_stack_ffffff28);
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
    FUN_8c235f44(a0 + 4);
    FUN_8c25cddc(auStack_88, puVar2, puVar3, a3, in_stack_ffffff28);
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
    FUN_8c256a78(auStack_88, iVar6, puVar3, a3, in_stack_ffffff28);
    puVar2 = auStack_88;
    FUN_8c255d6c(auStack_48, puVar2, puVar3, a3, in_stack_ffffff28);
    FUN_8c25cddc(auStack_88, puVar2, puVar3, a3, in_stack_ffffff28);
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
    FUN_8c256d7c(auStack_88, iVar6, puVar3, a3, in_stack_ffffff28);
    FUN_8c255d6c(auStack_48, auStack_88, puVar3, a3, in_stack_ffffff28);
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
    FUN_8c21279c(auStack_48, &uStack_94, &uStack_c4, a3, in_stack_ffffff28);
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
    FUN_8c255f40(&uStack_ac, puVar2, puVar3);
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
    uVar1 = FUN_8c2572ec(a0 + 4);
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
 * Class_1299f8_m0_019eb8  0x8c019eb8
 */
u32 *Class_1299f8_m0_019eb8(u32 *a0, u32 a1, u32 a2, u32 a3) {
    u32 ar5_00;
    u32 in_stack_fffffff4;
    u32 ain0;

    ain0 = CONCAT22((short)((u32)in_stack_fffffff4 >> 0x10), (u16)a1);
    if (a0 != NULL) {
        *a0 = &g_8c1299f8;
        ar5_00 = 0;
        free_if_nonnull_wrap_019270(a0, 0, a2, a3);
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
    FUN_8c023c30(&uStack_1c, a0 + 0x80, a2, a3, (int)&uStack_6c + 4);
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
    FUN_8c2570d8(&fStack_48);
    dVar1 = dVar3;
    if (cVar8 == '\0') {
        fVar5 = (float)((u64)dVar3 >> 0x20);
        uStack_6c = (double)CONCAT44(uStack_6c._4_4_, fVar5);
        dVar1 = uStack_6c;
    }
    uStack_6c = dVar1;
    FUN_8c25ce48(&fStack_48, ar5_00, a2, a3, uVar2);
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
 * FUN_8c01a0cc  0x8c01a0cc
 * called by: FUN_8c0e74a8
 */
u32 *FUN_8c01a0cc(u32 *a0) {
    *a0 = (&DATA_8c1299ec);
    Vec3_set_zero((int)a0 + 0x15c);
    return a0;
}

/*
 * Class_1299ec_m0_01a0f8  0x8c01a0f8
 * called by: Class_12b3b8_m0_0e77ec
 */
u32 *Class_1299ec_m0_01a0f8(u32 *a0, u32 a1, u32 a2, u32 a3) {
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

    uVar1 = FUN_8c2572ec(a0 + 4);
    return uVar1;
}

/*
 * Class_1299f8_m2_01a164  0x8c01a164
 */
u32 Class_1299f8_m2_01a164(u32 a0) {
    u32 uVar1;

    uVar1 = FUN_8c01a180(a0);
    return uVar1;
}

/*
 * FUN_8c01a180  0x8c01a180
 * called by: Class_1299f8_m2_01a164, Class_129a24_m2_01a1d8
 */
u32 FUN_8c01a180(int a0) {
    u32 uVar1;

    uVar1 = FUN_8c25699c(a0 + 4);
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
 * FUN_8c01a1ac  0x8c01a1ac
 */
int FUN_8c01a1ac(int a0) {
    int iVar1;

    iVar1 = 0xbc;
    *(u32 *)(0xbc + a0) = 0;
    return iVar1;
}

/*
 * FUN_8c01a1bc  0x8c01a1bc
 */
int FUN_8c01a1bc(int a0) {
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

    FUN_8c01a180(a0);
    FUN_8c023d7c(a0 + 0xb0, a1);
    FUN_8c022d04(a0 + 0x90, a1, a2, a3);
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

    uVar1 = FUN_8c23a8a4(a0 + 4, r5, r6, r7, a0);
    return uVar1;
}

/*
 * FUN_8c01a260  0x8c01a260
 */
u32 FUN_8c01a260(u32 unused_a0, u32 a1, u32 a2, u32 a3) {
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
 * FUN_8c01a308  0x8c01a308
 * called by: FUN_8c01e504
 */
u32 *FUN_8c01a308(u32 *a0) {
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
    FUN_8c01c944(a0);
    return a0;
}

/*
 * free_if_nonnull_wrap_01a384  0x8c01a384
 * called by: FUN_8c01e560
 */
int free_if_nonnull_wrap_01a384(int a0, u32 a1, u32 a2, u32 a3) {
    u32 in_stack_fffffff4;

    if ((a0 != 0) && (0 < (short)a1)) {
        free_if_nonnull(a0, a1, a2, a3, CONCAT22((short)((u32)in_stack_fffffff4 >> 0x10), (short)a1));
    }
    return a0;
}

/*
 * FUN_8c01a3b4  0x8c01a3b4
 * called by: input_peripheral_state_machine
 */
u32 FUN_8c01a3b4(u32 a0, u32 a1, u32 a2) {
    int iVar1;

    iVar1 = FUN_8c01a3e4(a0, a1, a2);
    return (u32)(iVar1 == 3);
}

/*
 * FUN_8c01a3e4  0x8c01a3e4
 * name hint from a string it uses: VM User Icon VMI
 * called by: FUN_8c01a3b4
 * strings: "VM_User_Icon.VMI"; "VM_User_Icon.VMI"
 */
int FUN_8c01a3e4(int *a0, int a1, int a2) {
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
        r7 = (&FUN_8c01c998);
        iVar1 = FUN_8c1fbd2c(0xf, a1, a2, (&FUN_8c01c998));
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
    iVar1 = FUN_8c1f3b5c(a0[2]);
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
    iVar1 = FUN_8c0213bc(0x8c3eb334, "VM_User_Icon.VMI", ar6_00, ar7_00);
    if (iVar1 == 0) {
        a0[4] = 0;
    }
    a0[6] = 0;
    FUN_8c01be1c(a0, ar5_00, ar6_00, ar7_00);
    return g_8c2791b0;
}

/*
 * FUN_8c01a5cc  0x8c01a5cc
 * called by: FUN_8c01ab2c, input_peripheral_state_machine
 */
u32 FUN_8c01a5cc(u32 a0, u32 unused_a1, u32 unused_a2, u32 a3) {
    u32 uVar1;
    int iVar2;

    if (g_8c2791b0 == 3) {
        iVar2 = thunk_FUN_8c1fda7e();
        if (iVar2 == 0) {
            g_8c2791b0 = 1;
            uVar1 = 0;
        } else {
            iVar2 = FUN_8c01a630(a0, unused_a1, unused_a2, a3);
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
 * FUN_8c01a630  0x8c01a630
 * called by: FUN_8c01a5cc, FUN_8c01acd0
 */
u32 FUN_8c01a630(int *a0, u32 unused_a1, u32 unused_a2, u32 a3) {
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
        FUN_8c01c8c8(a0, ar5_00, uVar1, a3);
    }
    if (*a0 < 0) {
        uVar1 = g_8c2791b0;
    } else {
        iVar2 = *(int *)((int)a0 + 0x2450 + *a0 * 0x28);
        if (iVar2 == 2) {
            FUN_8c01a760(a0, ar5_00, uVar1, a3);
        } else if (iVar2 == 3) {
            FUN_8c01a900(a0);
        } else {
            FUN_8c01a98c(a0, ar5_00, uVar1, a3);
        }
        uVar1 = g_8c2791b0;
    }
    return uVar1;
}

/*
 * FUN_8c01a760  0x8c01a760
 * called by: FUN_8c01a630
 */
u32 FUN_8c01a760(int *a0, u32 a1, u32 a2, u32 a3) {
    u32 uVar1;
    int iVar2;

    iVar2 = a0[*a0 * 10 + 0x915];
    uVar1 = 0xd;
    if ((iVar2 < 0xe) && (-1 < iVar2)) {
        switch (iVar2) {
        case 0:
            uVar1 = FUN_8c01c1a4(a0);
            break;
        case 1:
            uVar1 = FUN_8c01c260(a0);
            break;
        case 2:
            iVar2 = FUN_8c01aa94(a0);
            if (iVar2 == 1) {
                uVar1 = FUN_8c01a98c(a0, a1, a2, a3);
            } else {
                FUN_8c01c924(a0);
                uVar1 = FUN_8c01bebc(a0, a1, a2, a3);
            }
            break;
        case 3:
            FUN_8c01c924(a0);
            uVar1 = FUN_8c01bfd0(a0, a1, a2, a3);
            break;
        case 4:
            FUN_8c01c924(a0);
            uVar1 = FUN_8c01c0e4(a0);
            break;
        case 5:
            uVar1 = FUN_8c01c450(a0);
            break;
        case 6:
            uVar1 = FUN_8c01c4d8(a0);
            break;
        case 7:
            uVar1 = FUN_8c01c560(a0, a1, a2, a3);
            break;
        case 8:
            uVar1 = FUN_8c01c320(a0);
            break;
        case 9:
            uVar1 = FUN_8c01c3c4(a0);
            break;
        case 10:
            uVar1 = FUN_8c01c6f4(a0);
            break;
        case 0xb:
            uVar1 = FUN_8c01c774(a0);
            break;
        case 0xc:
            uVar1 = FUN_8c01c7f4(a0, a1, a2, a3);
            break;
        case 0xd:
            uVar1 = FUN_8c01c860(a0, a1, a2, a3);
        }
    }
    return uVar1;
}

/*
 * FUN_8c01a900  0x8c01a900
 * called by: FUN_8c01a630
 */
int FUN_8c01a900(int *a0) {
    int iVar1;
    int iVar2;

    iVar1 = FUN_8c1fc5c4(g_8c2791b4);
    if (iVar1 == -1) {
        iVar1 = FUN_8c01c92c(a0);
    } else {
        iVar2 = FUN_8c1fc5de(g_8c2791b4);
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
 * FUN_8c01a98c  0x8c01a98c
 * called by: FUN_8c01a630, FUN_8c01a760
 */
int FUN_8c01a98c(int *a0, u32 a1, u32 a2, u32 a3) {
    int iVar1;
    int iVar2;

    while (true) {
        iVar1 = *(int *)((int)a0 + 0x2454 + *a0 * 0x28);
        if ((((iVar1 == 2) || (iVar1 == 3)) || (iVar1 == 4)) && (*(int *)((int)a0 + 0x2470 + *a0 * 0x28) != 0)) {
            (*(code *)(&FUN_8c1fb57c))(*(u32 *)((int)a0 + 0x2470 + *a0 * 0x28), a1, a2, a3);
        }
        iVar2 = *a0;
        iVar1 = *(int *)((int)a0 + 0x2458 + *a0 * 0x28);
        *(u32 *)((int)a0 + 0x244c + *a0 * 0x28) = 0xffffffff;
        *a0 = iVar1;
        iVar1 = *(int *)((int)a0 + 0x2454 + *a0 * 0x28);
        if ((iVar1 != 2) || (iVar1 = FUN_8c01aa94(a0), iVar1 != 1))
            break;
        *(u32 *)((int)a0 + 0x2450 + iVar2 * 0x28) = 1;
    }
    return iVar1;
}

/*
 * FUN_8c01aa94  0x8c01aa94
 * called by: FUN_8c01a760, FUN_8c01a98c
 */
u32 FUN_8c01aa94(int *a0) {
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
 * FUN_8c01ab2c  0x8c01ab2c
 * called by: FUN_8c0c09a4, FUN_8c0c76d0
 */
u32 FUN_8c01ab2c(int *a0, u32 unused_a1, u32 unused_a2, u32 a3) {
    int iVar1;
    int *ar4_00;

    do {
        ar4_00 = a0;
        iVar1 = FUN_8c01a5cc(a0, unused_a1, unused_a2, a3);
        if (iVar1 == 0)
            break;
    } while (-1 < *a0);
    if (0 < g_8c2791b0) {
        FUN_8c1fbe12(ar4_00, unused_a1, unused_a2, a3);
    }
    g_8c2791b0 = 0;
    return 1;
}

/*
 * FUN_8c01ab78  0x8c01ab78
 * called by: FUN_8c01af14, FUN_8c01b2a4, FUN_8c01b4f0, FUN_8c01b70c, FUN_8c01b87c, FUN_8c01b9b0, FUN_8c01ba68,
 * FUN_8c01bb6c (+5 more)
 */
u32 FUN_8c01ab78(u32 *a0, u32 a1, u32 a2, u32 a3) {
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
 * FUN_8c01acd0  0x8c01acd0
 * called by: FUN_8c01ae98, FUN_8c01b144, FUN_8c01b47c, FUN_8c01b5f8, FUN_8c01b7b0, FUN_8c01b920, FUN_8c01b9e4,
 * FUN_8c01bb00 (+2 more)
 */
u32 FUN_8c01acd0(int a0, int a1, u32 a2, u32 a3) {
    int iVar1;
    u32 *ar5_00;
    u32 uStack_28;
    u32 uStack_24;
    u8 auStack_20[10];
    u8 auStack_16[14];

    FUN_8c1f8176(auStack_16, a1, a2, a3);
    ar5_00 = &uStack_24;
    FUN_8c1f826c(auStack_16, ar5_00, a2);
    uStack_24 = uStack_24 + 10;
    while (true) {
        sound_server_2(a0, ar5_00, a2, a3);
        FUN_8c1f8176(auStack_20, ar5_00, a2, a3);
        ar5_00 = &uStack_28;
        FUN_8c1f826c(auStack_20, ar5_00, a2);
        if (uStack_24 < uStack_28) {
            return 0;
        }
        iVar1 = *(int *)(0x2450 + a1 * 0x28 + a0);
        if ((iVar1 != 2) && (iVar1 != 3))
            break;
        FUN_8c01a630(a0, ar5_00, a2, a3);
    }
    return *(u32 *)(0x2450 + a1 * 0x28 + a0);
}

/*
 * FUN_8c01ad88  0x8c01ad88
 * called by: Class_12b388_m1_0c5c08, FUN_8c0c76d0
 */
u32 FUN_8c01ad88(int *a0) {
    if (*a0 < 0) {
        return 0;
    }
    return 1;
}

/*
 * FUN_8c01ad9c  0x8c01ad9c
 * called by: FUN_8c0e5238, FUN_8c0e8280
 */
u32 FUN_8c01ad9c(int a0, u32 a1) {
    int iVar1;
    u32 uVar2;

    iVar1 = FUN_8c01ade8(a0, a1);
    if (iVar1 < 0) {
        uVar2 = 4;
    } else {
        uVar2 = *(u32 *)(0x2450 + iVar1 * 0x28 + a0);
    }
    return uVar2;
}

/*
 * FUN_8c01ade8  0x8c01ade8
 * called by: FUN_8c01ad9c, FUN_8c01ae98, FUN_8c01b47c, FUN_8c01bb00
 */
u32 FUN_8c01ade8(int a0, int a1) {
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
 * FUN_8c01ae28  0x8c01ae28
 * called by: FUN_8c01ae98, FUN_8c0b6c3c
 */
u32 FUN_8c01ae28(int a0, u32 a1, u32 a2, u32 a3) {
    u32 uVar1;
    int iVar2;

    if (g_8c2791b0 == 3) {
        iVar2 = FUN_8c01af14(a0, a1, a2, a3);
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
 * FUN_8c01ae98  0x8c01ae98
 * called by: FUN_8c0b6e6c, FUN_8c0b726c
 */
u32 FUN_8c01ae98(u32 a0, u32 a1, u32 a2, u32 a3) {
    u32 uVar1;
    int ar5_00;

    if (g_8c2791b0 == 3) {
        ar5_00 = FUN_8c01ae28(a0, a1, a2, a3);
        if (ar5_00 < 0) {
            uVar1 = 0;
        } else {
            uVar1 = FUN_8c01ade8(a0, ar5_00);
            uVar1 = FUN_8c01acd0(a0, uVar1, a2, a3);
        }
    } else {
        uVar1 = 0;
    }
    return uVar1;
}

/*
 * FUN_8c01af14  0x8c01af14
 * called by: FUN_8c01ae28
 */
int FUN_8c01af14(int a0, u32 a1, u32 a2, u32 a3) {
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
    iVar1 = FUN_8c01ab78(a0, 2, a1, a3);
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
            iVar2 = FUN_8c2017a8(1, ar5_00, 0x5380);
            iVar2 = malloc_thunk(iVar2 << 9, ar5_00, uVar4, ar7_00);
            if (iVar2 == 0) {
                iVar1 = -1;
            } else {
                ar5_01 = auStack_80;
                uVar3 = FUN_8c2015b0(iVar2, ar5_01, uVar4, ar7_00);
                FUN_8c1fb57c(ar4_00, ar5_01, uVar4, ar7_00);
                *(u32 *)(iVar1 * 0x28 + a0 + 0x246c) = uVar3;
                *(int *)(iVar1 * 0x28 + a0 + 0x2470) = iVar2;
            }
        }
    }
    return iVar1;
}

/*
 * FUN_8c01b0a8  0x8c01b0a8
 * called by: FUN_8c0b6e6c, FUN_8c0b726c
 */
u32 FUN_8c01b0a8(u32 a0, u32 a1, u32 a2, u32 a3) {
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
            (*(code *)(&FUN_8c01b144))(a0, a1, auStack_c[0], uStack_10, a2, a3, a0, a2, a3, in_stack_ffffffe4);
            FUN_8c021234(0x8c3eb334, a1, (&DATA_8c12fb18) + 0x11, 1);
            uVar1 = 1;
        }
    } else {
        uVar1 = 0;
    }
    return uVar1;
}

/*
 * FUN_8c01b144  0x8c01b144
 */
u32 FUN_8c01b144(u32 a0, u32 a1, u32 a2, u32 a3, u32 s0, u32 s4, u32 s8, u32 s12, u32 s16, u32 s20) {
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
    uVar2 = FUN_8c1fc258(g_8c2791b4, a1);
    *(u32 *)((int)&s16 + iVar1) = uVar2;
    if (0xffffff05 != *(int *)((int)&s16 + iVar1)) {
        if (*(int *)((int)&s16 + iVar1) != 0) {
            return 0;
        }
        uVar2 = FUN_8c01bb00(a0, a1, a2, ar7_00);
        *(u32 *)((int)&s12 + iVar1) = uVar2;
        if (*(int *)((int)&s12 + iVar1) == 0) {
            return 0;
        }
    }
    uVar3 = 1;
    uVar2 = FUN_8c1fc16a(g_8c2791b4, 1);
    *(u32 *)((int)&s8 + iVar1) = uVar2;
    *(u32 *)(&stack0xffffffec + iVar1) = *(u32 *)((int)&s8 + iVar1);
    if ((int)((*(int *)(&stack0xffffffec + iVar1) * 0x200 - 0x280) - a3) < 0) {
        uVar2 = FUN_8c01b9e4(a0, uVar3, a2, ar7_00);
        *(u32 *)((int)&s4 + iVar1) = uVar2;
        if (*(u32 *)((int)&s4 + iVar1) < a3) {
            return 0;
        }
        ar5_00 = (int)&s20 + iVar1;
        uVar2 = FUN_8c1fc682(g_8c2791b4, ar5_00);
        *(u32 *)((int)&s0 + iVar1) = uVar2;
        if (*(int *)((int)&s0 + iVar1) != 0) {
            return 0;
        }
        do {
            uVar2 = FUN_8c1fc5c4(g_8c2791b4);
            *(u32 *)(&stack0xfffffffc + iVar1) = uVar2;
        } while (*(int *)(&stack0xfffffffc + iVar1) == -1);
        uVar2 = FUN_8c1fc5de(g_8c2791b4);
        *(u32 *)(&stack0xfffffff8 + iVar1) = uVar2;
        if (*(int *)(&stack0xfffffff8 + iVar1) != 0) {
            return 0;
        }
    }
    *(u32 *)((int)aiStack_20 + iVar1 + 4) = *(u32 *)((int)aiStack_20 + 0x248 + iVar1 + 8);
    *(u32 *)((int)aiStack_20 + iVar1) = *(u32 *)((int)aiStack_20 + 0x248 + iVar1 + 4);
    uVar3 = *(u32 *)((int)aiStack_20 + iVar1 + 8);
    uVar2 = (*(code *)(&FUN_8c01b2a4))(a0, a1, uVar3, a3, *(u32 *)((int)aiStack_20 + iVar1),
                                       *(u32 *)((int)aiStack_20 + iVar1 + 4));
    *(u32 *)((int)&stack0xfffffff4 + iVar1) = uVar2;
    if (*(int *)((int)&stack0xfffffff4 + iVar1) < 0) {
        uVar2 = 0;
    } else {
        uVar2 = FUN_8c01acd0(a0, *(int *)((int)&stack0xfffffff4 + iVar1), uVar3, a3);
        *(u32 *)(&stack0xfffffff0 + iVar1) = uVar2;
        uVar2 = *(u32 *)(&stack0xfffffff0 + iVar1);
    }
    return uVar2;
}

/*
 * FUN_8c01b2a4  0x8c01b2a4
 * name hint from a string it uses: VM App Icon VMI
 * strings: "VM_App_Icon.VMI"; "VM_App_Icon.VMI"
 */
int FUN_8c01b2a4(int a0, u32 a1, u32 a2, u32 a3, u32 s0, u32 s4) {
    int iVar1;
    int iVar2;
    int ar4_00;
    u32 uVar3;
    int *ar7_00;
    int unaff_r8;
    int aiStack_24[2];

    ar7_00 = aiStack_24;
    iVar1 = FUN_8c0213bc(0x8c3eb334, "VM_App_Icon.VMI", &g_8c12fb29, ar7_00);
    if (iVar1 == 0) {
        unaff_r8 = -1;
    } else {
        iVar1 = FUN_8c01ab78(a0, 3, a1, ar7_00);
        if (-1 < iVar1) {
            uVar3 = a3;
            iVar2 = FUN_8c01b5dc(a0, a3);
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
        FUN_8c021428(0x8c3eb334, "VM_App_Icon.VMI", &g_8c12fb29);
    }
    return unaff_r8;
}

/*
 * FUN_8c01b400  0x8c01b400
 * called by: FUN_8c01b47c, FUN_8c0b6c3c
 */
u32 FUN_8c01b400(int a0, u32 a1, u32 a2, u32 a3) {
    u32 uVar1;
    int iVar2;

    if (g_8c2791b0 == 3) {
        if (0x600 < a3) {
            uVar1 = 0xffffffff;
        } else {
            iVar2 = FUN_8c01b4f0(a0, a1, a2, a3);
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
 * FUN_8c01b47c  0x8c01b47c
 * called by: FUN_8c0b6e6c
 */
u32 FUN_8c01b47c(u32 a0, u32 a1, u32 a2, u32 a3) {
    u32 uVar1;
    int ar5_00;

    if (g_8c2791b0 == 3) {
        ar5_00 = FUN_8c01b400(a0, a1, a2, a3);
        if (ar5_00 < 0) {
            uVar1 = 0;
        } else {
            uVar1 = FUN_8c01ade8(a0, ar5_00);
            uVar1 = FUN_8c01acd0(a0, uVar1, a2, a3);
        }
    } else {
        uVar1 = 0;
    }
    return uVar1;
}

/*
 * FUN_8c01b4f0  0x8c01b4f0
 * called by: FUN_8c01b400
 */
int FUN_8c01b4f0(int a0, u32 a1, u32 a2, u32 a3) {
    int iVar1;
    int iVar2;
    int ar4_00;
    u32 ar5_00;
    u32 ar7_00;

    ar7_00 = a3;
    iVar1 = FUN_8c01ab78(a0, 4, a1, a3);
    if (iVar1 < 0) {
        iVar1 = -1;
    } else {
        ar5_00 = a3;
        iVar2 = FUN_8c01b5dc(a0, a3);
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
 * FUN_8c01b5ac  0x8c01b5ac
 * called by: FUN_8c01b70c
 */
u32 FUN_8c01b5ac(u32 unused_a0, int a1) {
    u32 uVar1;

    uVar1 = FUN_8c01b5dc(unused_a0, a1 + 0x280);
    return uVar1;
}

/*
 * FUN_8c01b5dc  0x8c01b5dc
 * called by: FUN_8c01b2a4, FUN_8c01b4f0, FUN_8c01b5ac, FUN_8c01b87c
 */
u32 FUN_8c01b5dc(u32 unused_a0, u32 a1) {
    u32 uVar1;

    uVar1 = a1 >> 9;
    if ((a1 & 0x1ff) != 0) {
        uVar1 = uVar1 + 1;
    }
    return uVar1;
}

/*
 * FUN_8c01b5f8  0x8c01b5f8
 * called by: FUN_8c0b7454, FUN_8c0b7628
 */
u32 FUN_8c01b5f8(int a0, u32 a1, u32 a2, u32 a3) {
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
        ar5_00 = FUN_8c01b70c(a0, a1, 0x5600, a3);
        if (ar5_00 < 0) {
            uVar1 = 0;
        } else {
            iVar3 = ar5_00;
            iVar2 = FUN_8c01acd0(a0, ar5_00, ar6_00, ar7_00);
            if (iVar2 == 0) {
                (*(code *)(&FUN_8c1fb57c))(*(u32 *)(0x2470 + ar5_00 * 0x28 + a0), iVar3, ar6_00, ar7_00);
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
                (*(code *)(&FUN_8c1fb57c))(*(u32 *)(0x2470 + ar5_00 * 0x28 + a0), ar5_01, ar6_00, ar7_00);
            }
        }
    } else {
        uVar1 = 0;
    }
    return uVar1;
}

/*
 * FUN_8c01b70c  0x8c01b70c
 * called by: FUN_8c01b5f8
 */
int FUN_8c01b70c(int a0, u32 a1, u32 a2, u32 a3) {
    int iVar1;
    int iVar2;
    int iVar3;

    iVar1 = FUN_8c01ab78(a0, 0, a1, a3);
    if (iVar1 < 0) {
        iVar1 = -1;
    } else {
        iVar2 = FUN_8c01b5ac(a0, a2);
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
 * FUN_8c01b7b0  0x8c01b7b0
 * called by: FUN_8c0b7454
 */
u32 FUN_8c01b7b0(int a0, u32 a1, u32 a2, u32 a3) {
    u32 uVar1;
    int ar5_00;
    int iVar2;
    int ar5_01;
    u32 ar7_00;

    if (g_8c2791b0 == 3) {
        uVar1 = a3;
        ar7_00 = a3;
        ar5_00 = FUN_8c01b87c(a0, a1, a3, a3);
        if (ar5_00 < 0) {
            uVar1 = 0;
        } else {
            ar5_01 = ar5_00;
            iVar2 = FUN_8c01acd0(a0, ar5_00, uVar1, ar7_00);
            if (iVar2 == 0) {
                (*(code *)(&FUN_8c1fb57c))(*(u32 *)(0x2470 + ar5_00 * 0x28 + a0), ar5_01, uVar1, ar7_00);
                uVar1 = 0;
            } else {
                uVar1 = *(u32 *)(0x2470 + ar5_00 * 0x28 + a0);
                memmove(a2, uVar1, a3);
                (*(code *)(&FUN_8c1fb57c))(*(u32 *)(0x2470 + ar5_00 * 0x28 + a0), uVar1, a3, ar7_00);
                uVar1 = 1;
            }
        }
    } else {
        uVar1 = 0;
    }
    return uVar1;
}

/*
 * FUN_8c01b87c  0x8c01b87c
 * called by: FUN_8c01b7b0
 */
int FUN_8c01b87c(int a0, u32 a1, u32 a2, u32 a3) {
    int iVar1;
    int iVar2;
    int iVar3;

    iVar1 = FUN_8c01ab78(a0, 1, a1, a3);
    if (iVar1 < 0) {
        iVar1 = -1;
    } else {
        iVar2 = FUN_8c01b5dc(a0, a2);
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
 * FUN_8c01b920  0x8c01b920
 * called by: FUN_8c0c09d0
 */
int FUN_8c01b920(int a0, u32 a1, u32 a2, u32 a3) {
    int iVar1;
    int iVar2;

    if (g_8c2791b0 == 3) {
        iVar1 = FUN_8c01b9b0(a0, a1, a2, a3);
        if (iVar1 < 0) {
            iVar1 = -1;
        } else {
            iVar2 = FUN_8c01acd0(a0, iVar1, a2, a3);
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
 * FUN_8c01b9b0  0x8c01b9b0
 * called by: FUN_8c01b920
 */
int FUN_8c01b9b0(u32 a0, u32 a1, u32 unused_a2, u32 a3) {
    int iVar1;

    iVar1 = FUN_8c01ab78(a0, 8, a1, a3);
    if (iVar1 < 0) {
        iVar1 = -1;
    }
    return iVar1;
}

/*
 * FUN_8c01b9e4  0x8c01b9e4
 * called by: FUN_8c01b144, FUN_8c0c09d0
 */
int FUN_8c01b9e4(int a0, u32 a1, u32 a2, u32 a3) {
    int iVar1;
    int iVar2;

    if (g_8c2791b0 == 3) {
        iVar1 = FUN_8c01ba68(a0, a1, a2, a3);
        if (iVar1 < 0) {
            iVar1 = -1;
        } else {
            iVar2 = FUN_8c01acd0(a0, iVar1, a2, a3);
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
 * FUN_8c01ba68  0x8c01ba68
 * called by: FUN_8c01b9e4
 */
int FUN_8c01ba68(u32 a0, u32 unused_a1, u32 unused_a2, u32 a3) {
    int iVar1;

    iVar1 = FUN_8c01ab78(a0, 9, (&DATA_8c12fb18) + 0x11, a3);
    if (iVar1 < 0) {
        iVar1 = -1;
    }
    return iVar1;
}

/*
 * FUN_8c01baa0  0x8c01baa0
 * called by: FUN_8c01bb00
 */
u32 FUN_8c01baa0(int a0, u32 a1, u32 unused_a2, u32 a3) {
    u32 uVar1;
    int iVar2;

    if (g_8c2791b0 == 3) {
        iVar2 = FUN_8c01bb6c(a0, a1, unused_a2, a3);
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
 * FUN_8c01bb00  0x8c01bb00
 * called by: FUN_8c01b144, FUN_8c0c1d98, FUN_8c0c2324
 */
u32 FUN_8c01bb00(u32 a0, u32 a1, u32 a2, u32 a3) {
    u32 uVar1;
    int ar5_00;

    if (g_8c2791b0 == 3) {
        ar5_00 = FUN_8c01baa0(a0, a1, a2, a3);
        if (ar5_00 < 0) {
            uVar1 = 0;
        } else {
            uVar1 = FUN_8c01ade8(a0, ar5_00);
            uVar1 = FUN_8c01acd0(a0, uVar1, a2, a3);
        }
    } else {
        uVar1 = 0;
    }
    return uVar1;
}

/*
 * FUN_8c01bb6c  0x8c01bb6c
 * called by: FUN_8c01baa0
 */
int FUN_8c01bb6c(u32 a0, u32 a1, u32 unused_a2, u32 a3) {
    int iVar1;

    iVar1 = FUN_8c01ab78(a0, 5, a1, a3);
    if (iVar1 < 0) {
        iVar1 = -1;
    }
    return iVar1;
}

/*
 * FUN_8c01bba0  0x8c01bba0
 * called by: FUN_8c0b6e6c, FUN_8c0b7454, FUN_8c0c7438
 */
u32 FUN_8c01bba0(u32 a0, u32 a1, u32 a2, u32 a3) {
    u32 uVar1;
    int ar5_00;

    if (g_8c2791b0 == 3) {
        ar5_00 = FUN_8c01bbf8(a0, a1, a2, a3);
        if (ar5_00 < 0) {
            uVar1 = 0;
        } else {
            uVar1 = FUN_8c01acd0(a0, ar5_00, a2, a3);
        }
    } else {
        uVar1 = 0;
    }
    return uVar1;
}

/*
 * FUN_8c01bbf8  0x8c01bbf8
 * called by: FUN_8c01bba0
 */
int FUN_8c01bbf8(u32 a0, u32 a1, u32 unused_a2, u32 a3) {
    int iVar1;

    iVar1 = FUN_8c01ab78(a0, 6, a1, a3);
    if (iVar1 < 0) {
        iVar1 = -1;
    }
    return iVar1;
}

/*
 * FUN_8c01bc2c  0x8c01bc2c
 * called by: FUN_8c0b6e6c, FUN_8c0b7454, FUN_8c0c09d0, FUN_8c0c7438
 */
int FUN_8c01bc2c(int a0, u32 a1, u8 *a2, u32 a3) {
    int iVar1;
    int ar5_00;
    u8 *ar6_00;

    if (g_8c2791b0 == 3) {
        ar6_00 = a2;
        ar5_00 = FUN_8c01bcc0(a0, a1, a2, a3);
        if (ar5_00 < 0) {
            iVar1 = 0;
        } else {
            iVar1 = FUN_8c01acd0(a0, ar5_00, ar6_00, a3);
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
 * FUN_8c01bcc0  0x8c01bcc0
 * called by: FUN_8c01bc2c
 */
int FUN_8c01bcc0(u32 a0, u32 a1, u32 unused_a2, u32 a3) {
    int iVar1;

    iVar1 = FUN_8c01ab78(a0, 7, a1, a3);
    if (iVar1 < 0) {
        iVar1 = -1;
    }
    return iVar1;
}

/*
 * FUN_8c01bcf4  0x8c01bcf4
 * called by: FUN_8c0fbf28, FUN_8c0fd8d0
 */
u32 FUN_8c01bcf4(int a0, u32 unused_a1, u32 unused_a2, u32 a3) {
    u32 uVar1;
    int iVar2;

    if (g_8c2791b0 == 3) {
        iVar2 = FUN_8c01bd50(a0, unused_a1, unused_a2, a3);
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
 * FUN_8c01bd50  0x8c01bd50
 * called by: FUN_8c01bcf4
 */
int FUN_8c01bd50(u32 a0, u32 unused_a1, u32 unused_a2, u32 a3) {
    int iVar1;

    iVar1 = FUN_8c01ab78(a0, 10, (&DATA_8c12fb18) + 0x11, a3);
    if (iVar1 < 0) {
        iVar1 = -1;
    }
    return iVar1;
}

/*
 * FUN_8c01bd88  0x8c01bd88
 * called by: FUN_8c0fbf28, FUN_8c0fd8d0
 */
u32 FUN_8c01bd88(int a0, u32 unused_a1, u32 unused_a2, u32 a3) {
    u32 uVar1;
    int iVar2;

    if (g_8c2791b0 == 3) {
        iVar2 = FUN_8c01bde4(a0, unused_a1, unused_a2, a3);
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
 * FUN_8c01bde4  0x8c01bde4
 * called by: FUN_8c01bd88
 */
int FUN_8c01bde4(u32 a0, u32 unused_a1, u32 unused_a2, u32 a3) {
    int iVar1;

    iVar1 = FUN_8c01ab78(a0, 0xb, (&DATA_8c12fb18) + 0x11, a3);
    if (iVar1 < 0) {
        iVar1 = -1;
    }
    return iVar1;
}

/*
 * FUN_8c01be1c  0x8c01be1c
 * called by: FUN_8c01a3e4
 */
u32 FUN_8c01be1c(int a0, u32 unused_a1, u32 unused_a2, u32 a3) {
    u32 uVar1;
    int iVar2;

    if (g_8c2791b0 == 3) {
        if (*(int *)(a0 + 0x18) < 1) {
            iVar2 = FUN_8c01be84(a0, unused_a1, unused_a2, a3);
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
 * FUN_8c01be84  0x8c01be84
 * called by: FUN_8c01be1c
 */
int FUN_8c01be84(u32 a0, u32 unused_a1, u32 unused_a2, u32 a3) {
    int iVar1;

    iVar1 = FUN_8c01ab78(a0, 0xd, (&DATA_8c12fb18) + 0x11, a3);
    if (iVar1 < 0) {
        iVar1 = -1;
    }
    return iVar1;
}

/*
 * FUN_8c01bebc  0x8c01bebc
 * called by: FUN_8c01a760
 */
int FUN_8c01bebc(int *a0, u32 a1, u32 unused_a2, u32 a3) {
    int iVar1;
    int iVar2;
    u16 uStack_38;
    int iStack_28;
    int iStack_24;
    int iStack_20;
    u16 uStack_18;

    FUN_8c1f8176(&uStack_18, a1, unused_a2, a3);
    uStack_38 = uStack_18;
    iStack_20 = *a0;
    iStack_24 = *a0;
    iStack_28 = *a0;
    iVar2 = (*(code *)(&FUN_8c1fc740))(g_8c2791b4, (int)a0 + 0x245c + iStack_20 * 0x28,
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
 * FUN_8c01bfd0  0x8c01bfd0
 * called by: FUN_8c01a760
 */
int FUN_8c01bfd0(int *a0, u32 a1, u32 unused_a2, u32 a3) {
    int iVar1;
    int iVar2;
    u16 uStack_38;
    int iStack_28;
    int iStack_24;
    int iStack_20;
    u16 uStack_18;

    FUN_8c1f8176(&uStack_18, a1, unused_a2, a3);
    uStack_38 = uStack_18;
    iStack_20 = *a0;
    iStack_24 = *a0;
    iStack_28 = *a0;
    iVar2 = (*(code *)(&FUN_8c1fc79e))(g_8c2791b4, (int)a0 + 0x245c + iStack_20 * 0x28,
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
 * FUN_8c01c0e4  0x8c01c0e4
 * called by: FUN_8c01a760
 */
int FUN_8c01c0e4(int *a0) {
    int iVar1;
    int iVar2;

    iVar2 = (*(code *)(&FUN_8c1fc852))(g_8c2791b4, (int)a0 + 0x245c + *a0 * 0x28,
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
 * FUN_8c01c1a4  0x8c01c1a4
 * called by: FUN_8c01a760
 */
int FUN_8c01c1a4(int *a0) {
    int iVar1;
    int iVar2;

    iVar2 =
        (*(code *)(&FUN_8c1fc6e8))(g_8c2791b4, (int)a0 + 0x245c + *a0 * 0x28, *(u32 *)((int)a0 + 0x2470 + *a0 * 0x28),
                                   *(u32 *)((int)a0 + 0x246c + *a0 * 0x28));
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
 * FUN_8c01c260  0x8c01c260
 * called by: FUN_8c01a760
 */
int FUN_8c01c260(int *a0) {
    int iVar1;
    int iVar2;

    iVar2 = (*(code *)(&FUN_8c1fc7fc))(g_8c2791b4, (int)a0 + 0x245c + *a0 * 0x28,
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
 * FUN_8c01c320  0x8c01c320
 * called by: FUN_8c01a760
 */
int FUN_8c01c320(int *a0) {
    int iVar1;
    int iVar2;
    int iVar3;

    iVar2 = FUN_8c1fc654(g_8c2791b4, (int)a0 + 0x245c + *a0 * 0x28);
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
 * FUN_8c01c3c4  0x8c01c3c4
 * called by: FUN_8c01a760
 */
int FUN_8c01c3c4(int *a0) {
    int iVar1;
    int iVar2;
    int iVar3;

    iVar2 = FUN_8c1fc16a(g_8c2791b4, 0);
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
 * FUN_8c01c450  0x8c01c450
 * called by: FUN_8c01a760
 */
int FUN_8c01c450(int *a0) {
    int iVar1;
    int iVar2;

    iVar2 = FUN_8c1fc472(g_8c2791b4, (int)a0 + 0x245c + *a0 * 0x28);
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
 * FUN_8c01c4d8  0x8c01c4d8
 * called by: FUN_8c01a760
 */
int FUN_8c01c4d8(int *a0) {
    int iVar1;
    int iVar2;

    iVar2 = FUN_8c1fc564(g_8c2791b4, (int)a0 + 0x245c + *a0 * 0x28);
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
 * FUN_8c01c560  0x8c01c560
 * called by: FUN_8c01a760
 */
int FUN_8c01c560(int *a0, u32 unused_a1, u32 a2, u32 a3) {
    int iVar1;
    char acStack_28[36];

    iVar1 = FUN_8c1fc258(g_8c2791b4, acStack_28);
    if (iVar1 == -0xfb) {
        iVar1 = 0x2450;
        a0[*a0 * 10 + 0x914] = 4;
    } else if (iVar1 != -1) {
        if (iVar1 == 0) {
            if (acStack_28[0] == '\0') {
                iVar1 = 0x2450;
                a0[*a0 * 10 + 0x914] = 4;
            } else {
                iVar1 = FUN_8c01c68c(acStack_28, a0 + *a0 * 10 + 0x917);
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
 * FUN_8c01c68c  0x8c01c68c
 * called by: FUN_8c01c560
 */
u32 FUN_8c01c68c(u8 *a0, u8 *a1) {
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
 * FUN_8c01c6f4  0x8c01c6f4
 * called by: FUN_8c01a760
 */
int FUN_8c01c6f4(int *a0) {
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
    iVar2 = FUN_8c1f5d6c(a0[2], &uStack_18);
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
 * FUN_8c01c774  0x8c01c774
 * called by: FUN_8c01a760
 */
int FUN_8c01c774(int *a0) {
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
    iVar2 = FUN_8c1f5d6c(a0[2], &uStack_18);
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
 * FUN_8c01c7f4  0x8c01c7f4
 * called by: FUN_8c01a760
 */
int FUN_8c01c7f4(int *a0, u32 unused_a1, u32 unused_a2, u32 a3) {
    int iVar1;
    int iVar2;

    iVar2 = FUN_8c01c8c8(a0, a0 + 0xb, unused_a2, a3);
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
 * FUN_8c01c860  0x8c01c860
 * called by: FUN_8c01a760
 */
int FUN_8c01c860(int *a0, u32 unused_a1, u32 unused_a2, u32 a3) {
    int iVar1;
    int iVar2;

    iVar2 = FUN_8c01c8c8(a0, a0[9], unused_a2, a3);
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
 * FUN_8c01c8c8  0x8c01c8c8
 * called by: FUN_8c01a630, FUN_8c01c7f4, FUN_8c01c860
 */
u32 FUN_8c01c8c8(int a0, u32 a1, u32 unused_a2, u32 a3) {
    int iVar1;
    u32 uVar2;

    iVar1 = FUN_8c1f3d28(*(u32 *)(a0 + 8));
    if (iVar1 == 0) {
        uVar2 = 0;
    } else {
        iVar1 = (*(code *)(&FUN_8c1f3c78))(*(u32 *)(a0 + 8), a1, *(u32 *)(a0 + 0x14), a3);
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
 * FUN_8c01c924  0x8c01c924
 * called by: FUN_8c01a760
 */
u32 FUN_8c01c924(int a0) {
    *(u32 *)(a0 + 0x18) = 0x1e;
    return 0x1e;
}

/*
 * FUN_8c01c92c  0x8c01c92c
 * called by: FUN_8c01a900
 */
int FUN_8c01c92c(int a0) {
    int iVar1;

    iVar1 = *(int *)(a0 + 0x18);
    if ((-1 < iVar1) && (iVar1 = 10, *(int *)(a0 + 0x18) < 0xb)) {
        iVar1 = 0xf;
        *(u32 *)(a0 + 0x18) = 0xf;
    }
    return iVar1;
}

/*
 * FUN_8c01c944  0x8c01c944
 * called by: FUN_8c01a308, FUN_8c0fa688
 */
u32 FUN_8c01c944(u32 a0) {
    u32 uVar1;

    uVar1 = FUN_8c01c964(a0, (&DATA_8c12f300));
    return uVar1;
}

/*
 * FUN_8c01c964  0x8c01c964
 * called by: FUN_8c01c944, FUN_8c0fa6c8, FUN_8c0fbf28, FUN_8c0fd8d0
 */
u32 FUN_8c01c964(int a0, u32 a1) {
    *(u32 *)(a0 + 0x24) = a1;
    *(u32 *)(a0 + 0x20) = 1;
    return 1;
}

/*
 * FUN_8c01c970  0x8c01c970
 * called by: FUN_8c0fa83c, FUN_8c0fa944
 */
u32 FUN_8c01c970(int a0, u32 *a1) {
    u32 uVar1;

    uVar1 = *(u32 *)(a0 + 0x24);
    *a1 = uVar1;
    return uVar1;
}

/*
 * FUN_8c01c978  0x8c01c978
 * called by: FUN_8c0fbf28
 */
u32 FUN_8c01c978(int a0, u32 a1) {
    *(u32 *)(a0 + 0x28) = a1;
    *(u32 *)(a0 + 0x1c) = 0x1e;
    return 0x1e;
}

/*
 * sound_server_2  0x8c01c984
 * calls sdSysServer
 * called by: FUN_8c01acd0
 */
u32 sound_server_2(u32 unused_a0, u32 unused_a1, u32 a2, u32 a3) {
    u32 uVar1;

    uVar1 = sdSysServer(unused_a0, unused_a1, a2, a3);
    return uVar1;
}

/*
 * FUN_8c01c998  0x8c01c998
 */
u32 FUN_8c01c998(void) {
    thunk_FUN_8c1fce34();
    thunk_FUN_8c1fce50();
    g_8c2791b0 = 1;
    return 1;
}

/*
 * FUN_8c01ca24  0x8c01ca24
 * called by: FUN_8c01e504
 */
u32 *FUN_8c01ca24(u32 *a0) {
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
 * called by: FUN_8c01e560
 */
int free_if_nonnull_wrap_01cb24(int a0, u32 a1, u32 a2, u32 a3) {
    u32 in_stack_fffffff4;

    if ((a0 != 0) && (0 < (short)a1)) {
        free_if_nonnull(a0, a1, a2, a3, CONCAT22((short)((u32)in_stack_fffffff4 >> 0x10), (short)a1));
    }
    return a0;
}

/*
 * FUN_8c01cb54  0x8c01cb54
 * called by: input_peripheral_state_machine
 */
u32 FUN_8c01cb54(u32 a0, u32 a1, u32 a2, u32 a3) {
    int iVar1;
    u32 uVar2;

    iVar1 = FUN_8c01cbc8(a0, a1, a2, a3);
    if (iVar1 == 0) {
        uVar2 = 0;
    } else {
        iVar1 = FUN_8c01cc74(a0);
        if (iVar1 == 0) {
            uVar2 = 0;
        } else {
            iVar1 = asr_load_language_model(a0);
            if (iVar1 == 0) {
                FUN_8c01d008(a0, a1, a2, a3);
                uVar2 = 0;
            } else {
                uVar2 = 1;
            }
        }
    }
    return uVar2;
}

/*
 * FUN_8c01cbc8  0x8c01cbc8
 * called by: FUN_8c01cb54, FUN_8c01d0cc
 */
u32 FUN_8c01cbc8(u32 *a0, int a1, u32 a2, u32 a3) {
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
    puVar1 = (u32 *)FUN_8c1f6342();
    bVar2 = (*puVar1 & 0x10) != 0;
    if (!bVar2) {
        FUN_8c01d440(a0, a1, a2, a3);
        *a0 = 0xffffffff;
        a0[1] = 0xffffffff;
        g_8c2791b8 = 0;
    }
    return (u32)bVar2;
}

/*
 * FUN_8c01cc74  0x8c01cc74
 * called by: FUN_8c01cb54
 */
u32 FUN_8c01cc74(u32 *a0) {
    u32 r5;
    u32 r6;
    u32 r7;
    u32 uVar1;
    int iVar2;

    if (g_8c2791b8 < 2) {
        iVar2 = FUN_8c201994();
        if (iVar2 == 0) {
            uVar1 = FUN_8c201a1a(*a0, r5, r6, r7, 0, 0, 0x113a, 5, g_8c279274, a0 + 3);
            g_8c27926c = uVar1;
            uVar1 = FUN_8c201c3e(g_8c27926c);
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
 * called by: FUN_8c01cb54
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
 * called by: FUN_8c01dc80, asr_load_language_model
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
                    iVar1 = FUN_8c01cee0();
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
 * FUN_8c01cee0  0x8c01cee0
 * called by: asr_init_from_model
 */
u32 FUN_8c01cee0(void) {
    int iVar1;
    u32 uVar2;

    iVar1 = FUN_8c10c2a2(g_8c27925c, 1, 0);
    if (iVar1 == 0) {
        iVar1 = FUN_8c10c2a2(g_8c27925c, 2, 0);
        if (iVar1 == 0) {
            iVar1 = FUN_8c10c2a2(g_8c27925c, 6, 0x12c);
            if (iVar1 == 0) {
                iVar1 = FUN_8c10c2a2(g_8c27925c, 7, 1);
                if (iVar1 == 0) {
                    iVar1 = FUN_8c10c2a2(g_8c27925c, 10, 0xc8);
                    if (iVar1 == 0) {
                        iVar1 = FUN_8c10c2a2(g_8c27925c, 0xd, 1);
                        if (iVar1 == 0) {
                            iVar1 = FUN_8c10c2a2(g_8c27925c, 0xe, 0xffffffff);
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
 * FUN_8c01cfc8  0x8c01cfc8
 * called by: FUN_8c01d440
 */
u32 FUN_8c01cfc8(void) {

    FUN_8c201c82(g_8c279270);
    FUN_8c201b04(g_8c27926c);
    FUN_8c2019e0();
    g_8c2791b8 = 1;
    return 1;
}

/*
 * FUN_8c01d008  0x8c01d008
 * called by: FUN_8c01cb54, FUN_8c01d440, FUN_8c01dc80
 */
u32 FUN_8c01d008(u32 unused_a0, u32 unused_a1, u32 a2, u32 a3) {
    if (g_8c27925c != 0) {
        unused_a1 = 0;
        asr_lib_bind_recognizer_model(g_8c27925c, 0);
    }
    if (g_8c279268 != 0) {
        FUN_8c10c3a0(g_8c279268, unused_a1, a2, a3);
    }
    if (g_8c279264 != 0) {
        FUN_8c10ba7c(g_8c279264, unused_a1, a2, a3);
    }
    if (g_8c279260 != 0) {
        FUN_8c10bad4(g_8c279260, unused_a1, a2, a3);
    }
    if (g_8c27925c != 0) {
        FUN_8c10ba20(g_8c27925c, unused_a1, a2, a3);
    }
    if (g_8c279258 != 0) {
        FUN_8c10b8c6(g_8c279258, unused_a1, a2, a3);
    }
    g_8c279258 = 0;
    g_8c27925c = 0;
    g_8c279260 = 0;
    g_8c279264 = 0;
    g_8c2791b8 = 2;
    return 2;
}

/*
 * FUN_8c01d0cc  0x8c01d0cc
 * called by: input_peripheral_state_machine
 */
u32 FUN_8c01d0cc(int a0, u32 a1, u32 a2, u32 a3) {
    int iVar1;
    u32 ar5_00;

    if (-1 < *(int *)(0x5630 + a0)) {
        iVar1 = *(int *)(0x5638 + *(int *)(0x5630 + a0) * 0x50 + a0);
        if ((iVar1 == 0) || (iVar1 == 1)) {
            FUN_8c01d3f4(a0);
        } else if (iVar1 == 2) {
            FUN_8c01d338(a0, a1, a2, a3);
        }
    }
    ar5_00 = *(u32 *)(a0 + 4);
    iVar1 = FUN_8c01cbc8(a0, ar5_00, a2, a3);
    if (iVar1 != 0) {
        FUN_8c01d15c(a0);
    }
    return (u32)(iVar1 != 0);
}

/*
 * FUN_8c01d15c  0x8c01d15c
 * called by: FUN_8c01d0cc
 */
u8 *FUN_8c01d15c(int a0) {
    u8 *puVar1;
    int iVar2;
    u32 uVar3;

    puVar1 = (u8 *)0x3;
    if ((2 < g_8c2791b8) && (iVar2 = FUN_8c201ba2(g_8c27926c), puVar1 = NULL, iVar2 != 0)) {
        if (iVar2 == 1) {
            FUN_8c201b92(g_8c27926c);
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
                uVar3 = FUN_8c201c92(g_8c279270);
                puVar1 = (u8 *)FUN_8c201da0(g_8c279270, uVar3);
                break;
            case 7:
                if (g_8c279284 == NULL) {
                    return (u8 *)0;
                }
                g_8c279284 = (u8 *)0x1;
            default:
                uVar3 = 0x113a;
                iVar2 = FUN_8c201e14(g_8c279270, a0 + 0x5b86, 0x113a);
                FUN_8c201da0(g_8c279270, iVar2);
                puVar1 = (u8 *)FUN_8c10b698(g_8c27925c, 0, a0 + 0x5b86, iVar2 << 1);
                break;
            case 8:
                puVar1 = g_8c279284;
                if (g_8c279284 != NULL) {
                    g_8c279298 = g_8c279298 + 1;
                    g_8c279284 = (u8 *)0x2;
                    if (2 < g_8c279298) {
                        g_8c279284 = (u8 *)0x1;
                    }
                    puVar1 = (u8 *)FUN_8c1225fc(g_8c27925c, 1);
                }
                break;
            case 9:
                puVar1 = g_8c279284;
                if (g_8c279284 != NULL) {
                    g_8c279284 = (u8 *)0x3;
                    puVar1 = (u8 *)FUN_8c1225fc(g_8c27925c, 1);
                }
            }
        }
    }
    return puVar1;
}

/*
 * FUN_8c01d338  0x8c01d338
 * called by: FUN_8c01d0cc
 */
u32 FUN_8c01d338(int a0, u32 a1, u32 a2, u32 a3) {
    u32 uVar1;
    int iVar2;

    iVar2 = *(int *)(*(int *)(a0 + 0x5630) * 0x50 + a0 + 0x563c);
    uVar1 = 5;
    if ((iVar2 < 6) && (-1 < iVar2)) {
        switch (iVar2) {
        case 0:
            uVar1 = FUN_8c01da90(a0, a1, a2, a3);
            break;
        case 1:
            uVar1 = FUN_8c01dea4(a0, a1, a2, a3);
            break;
        case 2:
            uVar1 = FUN_8c01d78c(a0);
            break;
        case 3:
            uVar1 = FUN_8c01d8d8(a0);
            break;
        case 4:
            uVar1 = FUN_8c01d7cc(a0, a1, a2, a3);
            break;
        case 5:
            uVar1 = FUN_8c01d92c(a0, a1, a2, a3);
        }
    }
    return uVar1;
}

/*
 * FUN_8c01d3f4  0x8c01d3f4
 * called by: FUN_8c01d0cc
 */
int FUN_8c01d3f4(int a0) {
    int iVar1;
    u32 uVar2;

    uVar2 = *(u32 *)(0x5640 + *(int *)(0x5630 + a0) * 0x50 + a0);
    *(u32 *)(0x5634 + *(int *)(0x5630 + a0) * 0x50 + a0) = 1;
    iVar1 = 0x5630;
    *(u32 *)(0x5630 + a0) = uVar2;
    return iVar1;
}

/*
 * FUN_8c01d440  0x8c01d440
 * called by: FUN_8c01cbc8
 */
u32 FUN_8c01d440(u32 unused_a0, u32 unused_a1, u32 a2, u32 a3) {
    int iVar1;

    iVar1 = g_8c2791b8;
    if (iVar1 != 2) {
        if ((iVar1 != 3) && (iVar1 != 4))
            goto LAB_8c01d472;
        FUN_8c01d008(unused_a0, unused_a1, a2, a3);
    }
    FUN_8c01d490();
    FUN_8c01cfc8();
LAB_8c01d472:
    g_8c2791b8 = 0;
    return 0;
}

/*
 * FUN_8c01d490  0x8c01d490
 * called by: FUN_8c01d440
 */
int FUN_8c01d490(void) {
    int iVar1;

    iVar1 = FUN_8c201ba2(g_8c27926c);
    if (iVar1 == 2) {
        iVar1 = FUN_8c201b9a(g_8c27926c);
    }
    return iVar1;
}

/*
 * FUN_8c01d4c4  0x8c01d4c4
 * called by: FUN_8c01d658, asr_register_strings
 */
u32 FUN_8c01d4c4(int a0, u32 a1, u32 a2, u32 a3) {
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
 * called by: FUN_8c0fbdfc, FUN_8c0fbf28
 */
u32 asr_register_strings(u32 a0, u32 a1, u32 a2) {
    int iVar1;
    u32 uVar2;

    iVar1 = FUN_8c01d4c4(a0, 0, a1, a2);
    if (iVar1 < 0) {
        uVar2 = 0;
    } else {
        uVar2 = 2;
    }
    return uVar2;
}

/*
 * FUN_8c01d658  0x8c01d658
 * called by: FUN_8c0fbdfc
 */
u32 FUN_8c01d658(u32 a0, u32 a1, u32 a2) {
    u32 uVar1;

    uVar1 = FUN_8c01d4c4(a0, 1, a1, a2);
    return uVar1;
}

/*
 * FUN_8c01d684  0x8c01d684
 * called by: FUN_8c0fbf28, FUN_8c0fd8d0
 */
u32 FUN_8c01d684(u32 unused_a0, u32 *a1, u32 a2, u32 a3) {
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
 * FUN_8c01d6ec  0x8c01d6ec
 * called by: FUN_8c01f544
 */
u32 FUN_8c01d6ec(void) {
    u32 uVar1;

    uVar1 = g_8c279278;
    g_8c279278 = 0;
    return uVar1;
}

/*
 * FUN_8c01d704  0x8c01d704
 * called by: FUN_8c01f56c
 */
u32 FUN_8c01d704(void) {
    u32 uVar1;

    uVar1 = g_8c27927c;
    g_8c27927c = 0;
    return uVar1;
}

/*
 * FUN_8c01d71c  0x8c01d71c
 * called by: FUN_8c0fbdfc
 */
u32 FUN_8c01d71c(u32 a0) {
    int iVar1;
    u32 uVar2;

    iVar1 = (*(code *)(&FUN_8c01d4c4))(a0, 2, (&DATA_8c12fb7c) + 0x1c, (&DATA_8c12fb7c) + 0x1c);
    if (iVar1 < 0) {
        uVar2 = 0;
    } else {
        uVar2 = 2;
    }
    return uVar2;
}

/*
 * FUN_8c01d754  0x8c01d754
 * called by: FUN_8c0fd8d0
 */
u32 FUN_8c01d754(u32 a0) {
    int iVar1;
    u32 uVar2;

    iVar1 = (*(code *)(&FUN_8c01d4c4))(a0, 4, (&DATA_8c12fb7c) + 0x1c, (&DATA_8c12fb7c) + 0x1c);
    if (iVar1 < 0) {
        uVar2 = 0;
    } else {
        uVar2 = 2;
    }
    return uVar2;
}

/*
 * FUN_8c01d78c  0x8c01d78c
 * called by: FUN_8c01d338
 */
int FUN_8c01d78c(int a0) {
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
 * FUN_8c01d7cc  0x8c01d7cc
 * called by: FUN_8c01d338
 */
int FUN_8c01d7cc(int a0, u32 a1, u32 a2, u32 a3) {
    int iVar1;

    *(u32 *)(0x5638 + *(int *)(0x5630 + a0) * 0x50 + a0) = 1;
    iVar1 = g_8c2791b8;
    if ((iVar1 == 4) && (iVar1 = g_8c279284, iVar1 == 0)) {
        if (g_8c279288 != 0) {
            FUN_8c1fb57c(g_8c279288, a1, a2, a3);
            g_8c279288 = 0;
            g_8c27928c = 0;
        }
        FUN_8c122630(g_8c27925c, 0x8c279288, 0x8c27928c);
        g_8c279298 = 0;
        iVar1 = 1;
        g_8c279284 = 1;
    }
    return iVar1;
}

/*
 * FUN_8c01d868  0x8c01d868
 * called by: FUN_8c0fbdfc, FUN_8c0fbf28
 */
u32 FUN_8c01d868(u32 a0) {
    int iVar1;
    u32 uVar2;

    iVar1 = (*(code *)(&FUN_8c01d4c4))(a0, 3, (&DATA_8c12fb7c) + 0x1c, (&DATA_8c12fb7c) + 0x1c);
    if (iVar1 < 0) {
        uVar2 = 0;
    } else {
        uVar2 = 2;
    }
    return uVar2;
}

/*
 * FUN_8c01d8a0  0x8c01d8a0
 * called by: FUN_8c0fd8d0
 */
u32 FUN_8c01d8a0(u32 a0) {
    int iVar1;
    u32 uVar2;

    iVar1 = (*(code *)(&FUN_8c01d4c4))(a0, 5, (&DATA_8c12fb7c) + 0x1c, (&DATA_8c12fb7c) + 0x1c);
    if (iVar1 < 0) {
        uVar2 = 0;
    } else {
        uVar2 = 2;
    }
    return uVar2;
}

/*
 * FUN_8c01d8d8  0x8c01d8d8
 * called by: FUN_8c01d338
 */
u32 FUN_8c01d8d8(int a0) {
    u32 uVar1;

    *(u32 *)(0x5638 + *(int *)(0x5630 + a0) * 0x50 + a0) = 1;
    g_8c27924c = 0;
    g_8c2791bc = 0;
    uVar1 = FUN_8c01d984();
    return uVar1;
}

/*
 * FUN_8c01d92c  0x8c01d92c
 * name hint from a string it uses: SPEECH
 * called by: FUN_8c01d338
 * strings: "idle_ctx"; "SPEECH"
 */
u32 FUN_8c01d92c(int a0, u32 unused_a1, u32 unused_a2, u32 a3) {
    u32 uVar1;

    *(u32 *)(0x5638 + *(int *)(0x5630 + a0) * 0x50 + a0) = 1;
    FUN_8c01d9ac();
    uVar1 = (*(code *)(&asr_register_strings))(a0, "idle_ctx", "SPEECH", a3);
    return uVar1;
}

/*
 * FUN_8c01d984  0x8c01d984
 * called by: FUN_8c01d8d8, FUN_8c01dc80, FUN_8c01dea4
 */
int FUN_8c01d984(void) {
    int iVar1;

    iVar1 = g_8c2791b8;
    if (iVar1 == 4) {
        iVar1 = FUN_8c10c356(g_8c27925c);
    }
    return iVar1;
}

/*
 * FUN_8c01d9ac  0x8c01d9ac
 * called by: FUN_8c01d92c
 */
int FUN_8c01d9ac(void) {
    int iVar1;

    iVar1 = g_8c2791b8;
    if ((iVar1 == 4) && (iVar1 = 0, g_8c279284 != 0)) {
        iVar1 = FUN_8c1225fc(g_8c27925c, 3);
    }
    return iVar1;
}

/*
 * FUN_8c01d9e0  0x8c01d9e0
 * called by: FUN_8c0e1f90, FUN_8c0e25c0, FUN_8c0e6804
 */
int FUN_8c01d9e0(void) {
    int iVar1;

    if (g_8c279248 == 2) {
        iVar1 = g_8c27924c;
        if (iVar1 == 1) {
            g_8c2791bc = 0;
            0x8c2791bc [1] = 0;
            *(u8 *)(0x8c2791bc + 3) = 0;
            iVar1 = FUN_8c10c322(g_8c27925c);
        }
    } else if (g_8c279284 == 0) {
        g_8c279278 = 0;
        iVar1 = 0;
        g_8c27927c = 0;
    } else {
        iVar1 = FUN_8c1225fc(g_8c27925c, 1);
    }
    return iVar1;
}

/*
 * FUN_8c01da60  0x8c01da60
 * called by: FUN_8c0dfe2c, FUN_8c0e6804
 */
u32 FUN_8c01da60(void) {
    if (g_8c2791b8 == 4) {
        FUN_8c10c356(g_8c27925c);
    }
    g_8c279278 = 0;
    return 0;
}

/*
 * FUN_8c01da90  0x8c01da90
 * called by: FUN_8c01d338
 */
u32 FUN_8c01da90(int a0, u32 unused_a1, u32 a2, u32 a3) {
    int iVar1;
    int *piStack_98;
    u8 auStack_94[132];

    if (g_8c2791b8 == 4) {
        strcpy(auStack_94, *(int *)(a0 + 0x5630) * 0x50 + a0 + 0x5644);
        FUN_8c01437c(auStack_94, &g_8c12fba9);
        iVar1 = FUN_8c02126c(0x8c3eb334, auStack_94, *(int *)(a0 + 0x5630) * 0x50 + a0 + 0x5664, &piStack_98);
        if (iVar1 == 0) {
            *(u32 *)(*(int *)(a0 + 0x5630) * 0x50 + a0 + 0x5638) = 0;
        } else if (iVar1 == 2) {
            *(u32 *)(*(int *)(a0 + 0x5630) * 0x50 + a0 + 0x5638) = 2;
        } else {
            iVar1 = FUN_8c01dc80(a0, *(int *)(a0 + 0x5630) * 0x50 + a0 + 0x5644,
                                 *(int *)(a0 + 0x5630) * 0x50 + a0 + 0x5664, (int)piStack_98 + *piStack_98 + 0x20,
                                 (int)piStack_98 + piStack_98[2] + 0x20, (int)piStack_98 + piStack_98[1] + 0x20);
            if (iVar1 == 1) {
                *(u32 *)(*(int *)(a0 + 0x5630) * 0x50 + a0 + 0x5638) = 1;
            } else {
                FUN_8c021338(0x8c3eb334, auStack_94, *(int *)(a0 + 0x5630) * 0x50 + a0 + 0x5664, 10);
                *(u32 *)(*(int *)(a0 + 0x5630) * 0x50 + a0 + 0x5638) = 0;
            }
        }
    } else {
        *(u32 *)(*(int *)(a0 + 0x5630) * 0x50 + a0 + 0x5638) = 0;
    }
    return 0x5638;
}

/*
 * FUN_8c01dc80  0x8c01dc80
 * called by: FUN_8c01da90
 */
u32 FUN_8c01dc80(int a0, u32 a1, u32 a2, u32 a3, u32 s0, u32 s4) {
    int iVar1;
    u32 uVar2;
    u8 *ar6_00;
    u32 ar7_00;
    u8 *ar7_01;
    u32 ar5_00;

    uVar2 = a2;
    ar7_00 = a3;
    ar5_00 = a1;
    FUN_8c01d984();
    g_8c2791bc = 0;
    if (g_8c279264 != 0) {
        FUN_8c01d008(a0, a1, uVar2, ar7_00);
        asr_init_from_model(a0, a1, uVar2, ar7_00);
    }
    ar7_01 = &g_8c279264;
    uVar2 = 1;
    FUN_8c10be9c(g_8c279258, a3, 1, &g_8c279264);
    *(u32 *)(a0 + 0x5b38) = a3;
    *(u32 *)(a0 + 0x5b3c) = s0;
    *(u32 *)(a0 + 0x5b40) = s4;
    strcpy(a0 + 0x5b44, ar5_00);
    strcpy(a0 + 0x5b65, a2);
    iVar1 = FUN_8c01ddfc(a0, a2, uVar2, ar7_01);
    if (iVar1 == 1) {
        ar6_00 = &g_8c279268;
        iVar1 = FUN_8c10c3de(g_8c279258, *(u32 *)(a0 + 0x5b40), &g_8c279268, ar7_01);
        if ((iVar1 == 0) && (g_8c279288 != NULL)) {
            FUN_8c122e7c(g_8c279264, g_8c279268, &g_8c12fbae, g_8c279290, g_8c279294);
            ar6_00 = &g_8c12fbae;
            ar7_01 = g_8c279288;
            FUN_8c122664(g_8c279264, g_8c279268, &g_8c12fbae, g_8c279288, g_8c27928c, &g_8c279290, &g_8c279294);
        }
        iVar1 = FUN_8c10b6cc(g_8c27925c, g_8c279264, ar6_00, ar7_01);
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
 * FUN_8c01ddfc  0x8c01ddfc
 * called by: FUN_8c01dc80
 */
u32 FUN_8c01ddfc(int a0, u32 a1, u32 a2, u32 a3) {
    int iVar1;
    u32 uVar2;
    int iVar3;
    int iVar4;

    g_8c279254 = *(int *)(*(int *)(0x5b3c + a0) + 4);
    if (g_8c279250 != 0) {
        FUN_8c1fb57c(g_8c279250, a1, a2, a3);
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
 * FUN_8c01dea4  0x8c01dea4
 * called by: FUN_8c01d338
 */
int FUN_8c01dea4(int a0, u32 unused_a1, u32 a2, u32 a3) {
    int iVar1;
    int ar5_00;
    int ar6_00;
    u32 ar7_00;
    u8 auStack_88[132];

    strcpy(auStack_88, *(int *)(a0 + 0x5630) * 0x50 + a0 + 0x5644);
    FUN_8c01437c(auStack_88, &g_8c12fba9);
    ar7_00 = 10;
    ar6_00 = *(int *)(a0 + 0x5630) * 0x50 + a0 + 0x5664;
    FUN_8c021338(0x8c3eb334, auStack_88, ar6_00, 10);
    *(u32 *)(*(int *)(a0 + 0x5630) * 0x50 + a0 + 0x5638) = 1;
    iVar1 = FUN_8c01dfc0(*(int *)(a0 + 0x5630) * 0x50 + a0 + 0x5644, a0 + 0x5b44);
    if (iVar1 == 0) {
        ar5_00 = a0 + 0x5b65;
        iVar1 = FUN_8c01dfc0(*(int *)(a0 + 0x5630) * 0x50 + a0 + 0x5664, ar5_00);
        if (iVar1 == 0) {
            iVar1 = FUN_8c01d984();
        }
    }
    return iVar1;
}

/*
 * FUN_8c01dfc0  0x8c01dfc0
 * called by: FUN_8c01dea4
 */
u32 FUN_8c01dfc0(u8 *a0, u8 *a1) {
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
 * FUN_8c01e028  0x8c01e028
 * called by: FUN_8c0c67f4
 */
int FUN_8c01e028(u32 unused_a0, u32 *a1) {
    int iVar1;

    *a1 = 0;
    for (iVar1 = 0; iVar1 < 0x100; iVar1 = iVar1 + 1) {
        *(u8 *)((int)a1 + iVar1 + 4) = 0;
    }
    return 0x100;
}

/*
 * FUN_8c01e04c  0x8c01e04c
 * called by: FUN_8c0c5de8
 */
u32 FUN_8c01e04c(u32 unused_a0, int *a1) {
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
 * FUN_8c01e0a4  0x8c01e0a4
 * called by: FUN_8c0cc784, FUN_8c0cd3c8
 */
int FUN_8c01e0a4(u32 unused_a0, int *a1, u32 a2, u32 a3) {
    int iVar1;
    int *ar5_00;

    ar5_00 = a1;
    if (g_8c279288 != 0) {
        FUN_8c1fb57c(g_8c279288, a1, a2, a3);
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
 * FUN_8c01e128  0x8c01e128
 */
u32 FUN_8c01e128(u32 a0, u32 a1, u32 a2, u32 a3) {
    u32 uVar1;

    uVar1 = malloc_thunk(a0, a1, a2, a3);
    return uVar1;
}

/*
 * FUN_8c01e14c  0x8c01e14c
 */
u32 FUN_8c01e14c(u32 a0, u32 a1, u32 a2, u32 a3) {
    u32 uVar1;

    uVar1 = FUN_8c1fb57c(a0, a1, a2, a3);
    return uVar1;
}

/*
 * FUN_8c01e168  0x8c01e168
 */
int FUN_8c01e168(u32 a0, u32 a1, u32 a2, u32 a3) {
    int ar4_00;
    u32 ar5_00;

    ar5_00 = a1;
    ar4_00 = malloc_thunk(a1, a1, a2, a3);
    if (ar4_00 != 0) {
        ar5_00 = a0;
        memmove(ar4_00, a0, a1);
        a2 = a1;
    }
    FUN_8c1fb57c(a0, ar5_00, a2, a3);
    return ar4_00;
}

/*
 * FUN_8c01e1e8  0x8c01e1e8
 * strings: ";
          FUN_8c01437c(&g_8c2791c8,&g_8c12fbbb);
        }"; ";
        strcpy(&g_8c2791c8,"
 */
u32 FUN_8c01e1e8(int *a0, char *a1, u32 a2, u32 a3) {
    int iVar1;
    u32 uVar2;

    g_8c279278 = 0;
    g_8c27927c = 0;
    if ((a0 != NULL) && (g_8c27924c != 0)) {
        if (g_8c2791c0 == 2) {
            g_8c279274 = 0;
            FUN_8c201c28(g_8c27926c, 0);
            g_8c2791bc = 2;
            strcpy(&g_8c2791c8, &g_8c12fbb3);
        } else if (g_8c2791c0 == 3) {
            g_8c279274 = g_8c279274 + 2;
            if (0x10 < g_8c279274) {
                g_8c279274 = 0x10;
            }
            FUN_8c201c28(g_8c27926c, g_8c279274);
            g_8c2791bc = 3;
            strcpy(&g_8c2791c8, &g_8c12fbb7);
        } else if (*a0 == 0) {
            g_8c279274 = 0x10;
            FUN_8c201c28(g_8c27926c, 0x10);
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
                    FUN_8c01437c(&g_8c2791c8, *(u32 *)(uVar2 * 4 + g_8c279250));
                    a1 = " ";
                    FUN_8c01437c(&g_8c2791c8, &g_8c12fbbb);
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
 * FUN_8c01e4dc  0x8c01e4dc
 * called by: FUN_8c0b9fb4
 */
u32 *FUN_8c01e4dc(u32 *a0) {
    int iVar1;

    *a0 = 0;
    for (iVar1 = 0; iVar1 < 0x100; iVar1 = iVar1 + 1) {
        *(u8 *)((int)a0 + iVar1 + 4) = 0;
    }
    return a0;
}

/*
 * FUN_8c01e504  0x8c01e504
 * called by: FUN_8c0c4644
 */
int FUN_8c01e504(int a0) {
    FUN_8c01a308(a0);
    FUN_8c01ca24(a0 + 0x384c);
    *(u32 *)(0xa510 + a0) = 1;
    *(u32 *)(0xa514 + a0) = *(u32 *)(0xa510 + a0);
    *(u32 *)(0xa518 + a0) = 0;
    *(u32 *)(0xa520 + a0) = 1;
    return a0;
}

/*
 * FUN_8c01e560  0x8c01e560
 */
int FUN_8c01e560(int a0, u32 a1, u32 a2, u32 a3) {
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
 * FUN_8c01e5b4  0x8c01e5b4
 * called by: FUN_8c0c0444
 */
u32 FUN_8c01e5b4(int a0, u32 a1, u32 a2, u32 a3) {
    input_device_select_and_reset(a0, a1, a2, a3);
    return *(u32 *)(0xa510 + a0);
}

/*
 * input_device_select_and_reset  0x8c01e5e0
 * called by: FUN_8c01e5b4
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
                iVar1 = FUN_8c1f62cc(auStack_24[iVar3]);
                iVar2 = FUN_8c1f6338(auStack_24[iVar3]);
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
                iVar3 = FUN_8c1f62cc(auStack_24[iVar1]);
                iVar2 = FUN_8c1f6338(auStack_24[iVar1]);
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
            iVar2 = FUN_8c01a3b4(a0, *(u32 *)(a0 + 0xa524), a2);
            puVar1 = (u8 *)(u32)(iVar2 == 1);
            iVar2 = FUN_8c01cb54(a0 + 0x384c, *(u32 *)(a0 + 0xa524), a2, a3);
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
            iVar2 = FUN_8c01d0cc(a0 + 0x384c, a1, a2, a3);
            if (iVar2 == 0) {
                *(u32 *)(a0 + 0xa510) = 5;
            }
            puVar1 = (u8 *)FUN_8c01a3b4(a0, *(u32 *)(a0 + 0xa524), a2);
            if (puVar1 == (u8 *)0x1) {
                puVar1 = (u8 *)0xa510;
                *(u32 *)(a0 + 0xa510) = 0;
            }
            break;
        case 4:
            iVar2 = FUN_8c01a5cc(a0, a1, a2, a3);
            if (iVar2 == 0) {
                *(u32 *)(a0 + 0xa510) = 5;
            }
            puVar1 = (u8 *)FUN_8c01cb54(a0 + 0x384c, *(u32 *)(a0 + 0xa524), a2, a3);
            if (puVar1 == (u8 *)0x1) {
                puVar1 = (u8 *)0xa510;
                *(u32 *)(a0 + 0xa510) = 0;
            }
        }
    } else {
        iVar2 = FUN_8c01a5cc(a0, a1, a2, a3);
        if (iVar2 == 0) {
            *(u32 *)(a0 + 0xa510) = 3;
        }
        puVar1 = (u8 *)FUN_8c01d0cc(a0 + 0x384c, a1, a2, a3);
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

    iVar1 = FUN_8c1f62cc(*(u32 *)(0xa524 + a0));
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
 * FUN_8c01eb50  0x8c01eb50
 * called by: FUN_8c10003c
 */
u32 FUN_8c01eb50(int a0) {
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
 * FUN_8c01eb94  0x8c01eb94
 * called by: FUN_8c0bb1bc, FUN_8c0bf618, FUN_8c0bf780, FUN_8c1000c8
 */
u32 FUN_8c01eb94(int a0) {
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
 * input_is_mask_set_20000_01ebd8  0x8c01ebd8
 */
u32 input_is_mask_set_20000_01ebd8(int a0) {
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
 * FUN_8c01ec20  0x8c01ec20
 * called by: FUN_8c0bf690, FUN_8c100154
 */
u32 FUN_8c01ec20(int a0) {
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
 * input_is_mask_set_10000_01ec68  0x8c01ec68
 * called by: FUN_8c0ffdb0, FUN_8c1002a8, FUN_8c10031c, FUN_8c1016f0
 */
u32 input_is_mask_set_10000_01ec68(int a0) {
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
 * FUN_8c01ecb0  0x8c01ecb0
 * called by: FUN_8c1001e0
 */
u32 FUN_8c01ecb0(int a0) {
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
 * FUN_8c01ecf8  0x8c01ecf8
 * called by: FUN_8c0bf708, FUN_8c10022c, FUN_8c100e4c, FUN_8c101004
 */
u32 FUN_8c01ecf8(int a0) {
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
 * FUN_8c01ed40  0x8c01ed40
 * called by: FUN_8c100e4c
 */
u32 FUN_8c01ed40(int a0) {
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
 * FUN_8c01ed88  0x8c01ed88
 * called by: FUN_8c0dc7c0, FUN_8c10003c, FUN_8c1000c8
 */
u32 FUN_8c01ed88(int a0) {
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
 * FUN_8c01edcc  0x8c01edcc
 * called by: FUN_8c0bf618, FUN_8c0c8058, FUN_8c0e252c
 */
u32 FUN_8c01edcc(int a0) {
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
 * FUN_8c01ee10  0x8c01ee10
 * called by: FUN_8c0dfef4
 */
u32 FUN_8c01ee10(int a0) {
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
 * FUN_8c01ee54  0x8c01ee54
 * called by: FUN_8c0c1cb4, FUN_8c10003c, FUN_8c1000c8, FUN_8c100a58, FUN_8c100abc
 */
u32 FUN_8c01ee54(int a0) {
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
 * FUN_8c01ee98  0x8c01ee98
 * called by: FUN_8c100b20, FUN_8c100b84
 */
u32 FUN_8c01ee98(int a0) {
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
 * FUN_8c01eedc  0x8c01eedc
 * called by: FUN_8c0c8024
 */
u32 FUN_8c01eedc(int a0) {
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
 * input_is_mask_set_400_01ef20  0x8c01ef20
 * called by: FUN_8c0ffdb0, FUN_8c1002a8, FUN_8c1006d8, FUN_8c100724, FUN_8c100770, FUN_8c1007bc, FUN_8c100e4c
 */
u32 input_is_mask_set_400_01ef20(int a0) {
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
 * FUN_8c01ef68  0x8c01ef68
 * called by: FUN_8c1001e0, FUN_8c100a58, FUN_8c100abc, FUN_8c100b20, FUN_8c100b84, FUN_8c100be8, FUN_8c100c34,
 * FUN_8c101004
 */
u32 FUN_8c01ef68(int a0) {
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
 * FUN_8c01efb0  0x8c01efb0
 * called by: FUN_8c1016f0
 */
u32 FUN_8c01efb0(int a0) {
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
 * input_is_mask_set_200_01eff8  0x8c01eff8
 */
u32 input_is_mask_set_200_01eff8(int a0) {
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
 * FUN_8c01f040  0x8c01f040
 * called by: FUN_8c0dc244, FUN_8c0dc520
 */
u32 FUN_8c01f040(int a0) {
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
 * input_is_mask_set_80_01f088  0x8c01f088
 * called by: FUN_8c100930
 */
u32 input_is_mask_set_80_01f088(int a0) {
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
 * FUN_8c01f0d0  0x8c01f0d0
 * called by: FUN_8c0e30f0
 */
u32 FUN_8c01f0d0(int a0) {
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
 * FUN_8c01f118  0x8c01f118
 * called by: FUN_8c0bf708, FUN_8c0e319c
 */
u32 FUN_8c01f118(int a0) {
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
 * input_is_mask_set_40_01f160  0x8c01f160
 * called by: FUN_8c10097c
 */
u32 input_is_mask_set_40_01f160(int a0) {
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
 * FUN_8c01f1a4  0x8c01f1a4
 * called by: FUN_8c0e30f0
 */
u32 FUN_8c01f1a4(int a0) {
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
 * FUN_8c01f1e8  0x8c01f1e8
 * called by: FUN_8c0bf690, FUN_8c0e3150
 */
u32 FUN_8c01f1e8(int a0) {
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
 * input_is_mask_set_20_01f22c  0x8c01f22c
 * called by: FUN_8c1008e4
 */
u32 input_is_mask_set_20_01f22c(int a0) {
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
 * FUN_8c01f270  0x8c01f270
 * called by: FUN_8c0e30c8
 */
u32 FUN_8c01f270(int a0) {
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
 * input_is_mask_set_10_01f2b4  0x8c01f2b4
 * called by: FUN_8c100898
 */
u32 input_is_mask_set_10_01f2b4(int a0) {
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
 * FUN_8c01f2f8  0x8c01f2f8
 * called by: FUN_8c0e30f0, FUN_8c0e3150, FUN_8c0e319c
 */
u32 FUN_8c01f2f8(int a0) {
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
 * FUN_8c01f33c  0x8c01f33c
 * called by: FUN_8c0e30a0, FUN_8c0e31e8, FUN_8c0e5998
 */
u32 FUN_8c01f33c(int a0) {
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
 * called by: FUN_8c0ffdb0, FUN_8c1016f0
 */
u32 input_get_word_a538(int a0) {
    return *(u32 *)(0xa538 + a0);
}

/*
 * input_get_word_a53c  0x8c01f38c
 * called by: FUN_8c0ffdb0, FUN_8c1016f0
 */
u32 input_get_word_a53c(int a0) {
    return *(u32 *)(0xa53c + a0);
}

/*
 * FUN_8c01f398  0x8c01f398
 * called by: FUN_8c0ffdb0
 */
u32 FUN_8c01f398(int a0) {
    if (*(int *)(0xa540 + a0) == 0) {
        return 0;
    }
    return 1;
}

/*
 * input_mask_test  0x8c01f3b0
 * called by: FUN_8c01eb50, FUN_8c01eb94, FUN_8c01ec20, FUN_8c01ecb0, FUN_8c01ecf8, FUN_8c01ed40, FUN_8c01ed88,
 * FUN_8c01edcc (+22 more)
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
 * called by: FUN_8c0b6c3c, FUN_8c0b6e6c, FUN_8c0b7454, FUN_8c0b7920, FUN_8c0c09d0, FUN_8c0c3e78
 */
u32 get_field_a524_01f514(int a0, u32 unused_a1, u32 a2) {
    return *(u32 *)(0xa524 + a0);
}

/*
 * FUN_8c01f520  0x8c01f520
 * called by: Class_12b388_m1_0c5c08, FUN_8c0b6c3c, FUN_8c0b6e6c, FUN_8c0b726c, FUN_8c0b7454, FUN_8c0b7628,
 * FUN_8c0b76d8, FUN_8c0c09a4 (+10 more)
 */
u32 FUN_8c01f520(u32 a0, u32 unused_a1, u32 unused_a2, u32 a3) {
}

/*
 * FUN_8c01f528  0x8c01f528
 * called by: FUN_8c0c5de8, FUN_8c0c67f4, FUN_8c0cc784, FUN_8c0cd3c8, FUN_8c0dfe2c, FUN_8c0e1f90, FUN_8c0e25c0,
 * FUN_8c0e6804 (+1 more)
 */
int FUN_8c01f528(int a0) {
    return a0 + 0x384c;
}

/*
 * get_field_a510_01f538  0x8c01f538
 * called by: CGame_Initial, FUN_8c0b6c3c, FUN_8c0b6e6c, FUN_8c0b7454, FUN_8c0bad68, FUN_8c0bb1e4, FUN_8c0fc4c4
 */
u32 get_field_a510_01f538(int a0) {
    return *(u32 *)(0xa510 + a0);
}

/*
 * FUN_8c01f544  0x8c01f544
 * called by: FUN_8c100cb4
 */
u32 FUN_8c01f544(int a0) {
    u32 r5;
    u32 r6;
    u32 r7;
    u32 uVar1;

    uVar1 = FUN_8c01d6ec(a0 + 0x384c, r5, r6, r7);
    return uVar1;
}

/*
 * FUN_8c01f56c  0x8c01f56c
 * called by: FUN_8c100c80
 */
u32 FUN_8c01f56c(int a0) {
    u32 r5;
    u32 r6;
    u32 r7;
    u32 uVar1;

    uVar1 = FUN_8c01d704(a0 + 0x384c, r5, r6, r7);
    return uVar1;
}

/*
 * FUN_8c01f594  0x8c01f594
 * called by: FUN_8c0b6bf4
 */
u32 FUN_8c01f594(u32 a0, u32 a1, u32 a2, u32 a3) {
    int iVar1;

    g_8c2792a0 = 0;
    iVar1 = FUN_8c1f3a34(a0, a1, a2, a3);
    if ((iVar1 == 6) || (iVar1 == 7)) {
        g_8c2792a0 = 6;
    }
    return g_8c2792a0;
}

/*
 * FUN_8c01f5d0  0x8c01f5d0
 * called by: FUN_8c0c4644
 */
u32 FUN_8c01f5d0(u32 a0) {
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
 * FUN_8c01f608  0x8c01f608
 * name hint from a string it uses: SPEECH
 * called by: FUN_8c0c0444
 * strings: ",0,a3);
  ar6_00 = 2;
  FUN_8c01f6dc(a0,"; ",1,a3);
  ar5_00 = "; ";
  ar4_00 = a0;
  uVar1 = ar6_00;
  FUN_8c01f6dc(a0,"
 */
u32 FUN_8c01f608(u32 *a0, u32 a1, u32 a2, u32 a3) {
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
    FUN_8c01f6dc(a0, "\\", 0, a3);
    ar6_00 = 2;
    FUN_8c01f6dc(a0, "SPEECH", 1, a3);
    ar5_00 = "GRAPHICS";
    ar4_00 = a0;
    uVar1 = ar6_00;
    FUN_8c01f6dc(a0, "GRAPHICS", 2, a3);
    FUN_8c262810(ar4_00, ar5_00, ar6_00, a3, uVar1);
    *(u8 *)(a0 + 7) = 0;
    return 1;
}

/*
 * FUN_8c01f6dc  0x8c01f6dc
 * called by: FUN_8c01f608
 */
u32 FUN_8c01f6dc(int a0, u32 a1, int a2, u32 a3) {
    u32 uVar1;
    int ar6_00;

    uVar1 = 3;
    if (a2 < 3) {
        ar6_00 = a2;
        strcpy(a0 + a2 * 0x16034 + 0x38, a1);
        uVar1 = FUN_8c1f3078(a0 + a2 * 0x16034 + 0x5c, 0x800);
        *(u32 *)(a0 + a2 * 0x16034 + 0x58) = uVar1;
        uVar1 = FUN_8c1f3926(a0 + a2 * 0x16034 + 0x38, *(u32 *)(a0 + a2 * 0x16034 + 0x58), ar6_00, a3);
    }
    return uVar1;
}

/*
 * FUN_8c01f780  0x8c01f780
 * called by: pack_close_and_flush
 */
u32 FUN_8c01f780(int a0) {
    if (*(int *)(a0 + 0x20) == 0) {
        return 0;
    }
    return 1;
}

/*
 * FUN_8c01f794  0x8c01f794
 * called by: FUN_8c01f810, game_poll_exit
 */
u32 FUN_8c01f794(int a0, u32 a1, u32 a2, u32 a3) {
    int iVar1;
    u32 uVar2;

    if (*(int *)(a0 + 4) == 0) {
        FUN_8c02009c(a0, a1, a2, a3);
    } else {
        iVar1 = **(int **)(a0 + 4);
        if (iVar1 == 0xb) {
            FUN_8c01fab4(a0, a1, a2, a3);
        } else if (((iVar1 == 0xc) || (iVar1 == 0xd)) || (iVar1 == 0xe)) {
            FUN_8c01f9c4(a0, a1, a2, a3);
        } else {
            FUN_8c01f8a4(a0, a1, a2, a3);
        }
    }
    uVar2 = FUN_8c01f83c(a0, a1, a2, a3);
    return uVar2;
}

/*
 * FUN_8c01f810  0x8c01f810
 * called by: FUN_8c0209fc, FUN_8c020af4, FUN_8c020bec, FUN_8c020ce4, FUN_8c020ddc, FUN_8c020ef0, FUN_8c02100c,
 * FUN_8c0213bc (+2 more)
 */
u32 FUN_8c01f810(u32 a0, u32 a1, u32 a2, u32 a3) {
    int iVar1;

    iVar1 = FUN_8c01f794(a0, a1, a2, a3);
    return (u32)(iVar1 == 0);
}

/*
 * FUN_8c01f83c  0x8c01f83c
 * called by: FUN_8c01f794
 */
u32 FUN_8c01f83c(int a0, u32 a1, u32 a2, u32 a3) {
    u32 uVar1;

    if (g_8c2792a0 == 6) {
        uVar1 = 1;
    } else if (g_8c2792a0 == 7) {
        uVar1 = 2;
    } else {
        *(char *)(a0 + 0x1c) = *(char *)(a0 + 0x1c) + '\x01';
        if (((*(int *)(a0 + 4) == 0) && (*(int *)(a0 + 0x20) == 0)) && (*(char *)(a0 + 0x1c) == '\0')) {
            FUN_8c1f3a4c(a0, a1, a2, a3);
        }
        uVar1 = 0;
    }
    return uVar1;
}

/*
 * FUN_8c01f8a4  0x8c01f8a4
 * called by: FUN_8c01f794
 */
int FUN_8c01f8a4(int *a0, u32 unused_a1, int *a2, int a3) {
    int iVar1;
    int *ar5_00;

    iVar1 = FUN_8c2626b4(*a0, unused_a1, a2);
    if ((iVar1 == 3) || (iVar1 == 4)) {
        if (*a0 != 0) {
            FUN_8c262168(*a0);
        }
        *a0 = 0;
        if (iVar1 == 3) {
            a3 = a0[1] + 0x10;
            a2 = a0 + 8;
            ar5_00 = *(int **)a0[1];
            FUN_8c020600(a0, ar5_00, a2, a3);
            iVar1 = *(int *)a0[1];
            if ((iVar1 < 0x11) && (-1 < iVar1)) {
                switch (iVar1) {
                default:
                    ar5_00 = (int *)a0[1];
                    FUN_8c01fd08(a0, ar5_00, a2, a3);
                    break;
                case 0xb:
                case 0xc:
                case 0xd:
                case 0xe:
                    break;
                case 0xf:
                    a2 = (int *)a0[1];
                    ar5_00 = a0 + 0xc;
                    FUN_8c0205e8(a0, ar5_00, a2);
                    break;
                case 0x10:
                    a2 = (int *)a0[1];
                    ar5_00 = a0 + 0xd;
                    FUN_8c0205e8(a0, ar5_00, a2);
                }
            }
        } else {
            ar5_00 = (int *)a0[1];
            FUN_8c02049c(a0, ar5_00, a2, a3);
        }
        iVar1 = FUN_8c02009c(a0, ar5_00, a2, a3);
    }
    return iVar1;
}

/*
 * FUN_8c01f9c4  0x8c01f9c4
 * called by: FUN_8c01f794
 */
u32 FUN_8c01f9c4(int a0, u32 unused_a1, u32 a2, int a3) {
    int iVar1;
    u32 uVar2;
    int unaff_r13;

    iVar1 = **(int **)(a0 + 4);
    if (iVar1 == 0xc) {
        iVar1 = FUN_8c25b3a2(*(u32 *)(*(int *)(a0 + 4) + 8), unused_a1, a2, a3);
        if (iVar1 == 1) {
            unaff_r13 = 1;
        } else {
            unaff_r13 = -1;
        }
    } else if (iVar1 == 0xd) {
        iVar1 = (*(code *)(&FUN_8c256164))(*(int *)(a0 + 4) + 0x10, *(u32 *)(*(int *)(a0 + 4) + 8), a2, a3);
        if (iVar1 == 1) {
            unaff_r13 = 1;
        } else {
            unaff_r13 = -1;
        }
    } else if (iVar1 == 0xe) {
        iVar1 = (*(code *)(&FUN_8c239212))(*(int *)(a0 + 4) + 0x10, *(u32 *)(*(int *)(a0 + 4) + 8), a2, a3);
        if (iVar1 == 1) {
            unaff_r13 = 1;
        } else {
            unaff_r13 = -1;
        }
    }
    if (unaff_r13 == 1) {
        a3 = *(int *)(a0 + 4) + 0x10;
        FUN_8c020600(a0, **(u32 **)(a0 + 4), a0 + 0x20, a3);
        a2 = *(u32 *)(a0 + 4);
        iVar1 = a0 + 0x2c;
        FUN_8c0205e8(a0, iVar1, a2);
    } else {
        iVar1 = *(int *)(a0 + 4);
        FUN_8c02049c(a0, iVar1, a2, a3);
    }
    uVar2 = FUN_8c02009c(a0, iVar1, a2, a3);
    return uVar2;
}

/*
 * FUN_8c01fab4  0x8c01fab4
 * called by: FUN_8c01f794
 */
int FUN_8c01fab4(int *a0, int *a1, int a2, int a3) {
    int iVar1;
    int iVar2;
    u32 uVar3;

    iVar2 = a0[4];
    iVar1 = a0[5];
    if (iVar1 == 1) {
        a0[5] = 2;
        a0[6] = a0[6] - 0x800;
        iVar2 = a0[4];
        iVar1 = FUN_8c262312(*a0, 1, iVar2);
        if (iVar1 < 0) {
            FUN_8c02049c(a0, a0[1], iVar2, a3);
            iVar1 = 5;
            a0[5] = 5;
        }
    } else if (iVar1 == 2) {
        iVar1 = FUN_8c2626b4(*a0, a1, a2);
        if (iVar1 == 3) {
            a0[5] = 4;
            iVar1 = 0x800;
            if (0x800 < *(int *)(iVar2 + 0x20)) {
                a0[5] = 3;
                uVar3 = *(int *)(iVar2 + 0x20) + 0xfffff800;
                a0[6] = a0[6] - uVar3;
                if (0x4b800 < uVar3) {
                    FUN_8c02049c(a0, a0[1], a2, a3);
                    a0[5] = 5;
                }
                iVar2 = a0[4] + 0x800;
                iVar1 = (*(code *)(&FUN_8c262312))(*a0, uVar3 >> 0xb, iVar2, a3);
                if (iVar1 < 0) {
                    FUN_8c02049c(a0, a0[1], iVar2, a3);
                    iVar1 = 5;
                    a0[5] = 5;
                }
            }
        } else if (iVar1 == 4) {
            FUN_8c02049c(a0, a0[1], a2, a3);
            a0[5] = 5;
            iVar1 = 5;
        }
    } else if (iVar1 == 3) {
        iVar1 = FUN_8c2626b4(*a0, a1, a2);
        if (iVar1 == 3) {
            a0[5] = 4;
            iVar1 = 4;
        } else if (iVar1 == 4) {
            FUN_8c02049c(a0, a0[1], a2, a3);
            a0[5] = 5;
            iVar1 = 5;
        }
    } else {
        if (iVar1 == 4) {
            FUN_8c01fc78(a0, a0[1], a2, a3);
            if (0 < a0[6]) {
                a0[5] = 1;
                return 1;
            }
            a3 = a0[1] + 0x10;
            FUN_8c020600(a0, *(u32 *)a0[1], a0 + 8, a3);
            a2 = a0[1];
            a1 = a0 + 10;
            FUN_8c0205e8(a0, a1, a2);
            if (*a0 != 0) {
                FUN_8c262168(*a0);
            }
            *a0 = 0;
        }
        a0[5] = 0;
        a0[6] = 0;
        iVar1 = FUN_8c02009c(a0, a1, a2, a3);
    }
    return iVar1;
}

/*
 * FUN_8c01fc78  0x8c01fc78
 * called by: FUN_8c01fab4
 */
u32 FUN_8c01fc78(int a0, u32 *a1, u32 a2, u32 a3) {
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
    uVar1 = FUN_8c01fd08(a0, &uStack_ec, a2, a3);
    return uVar1;
}

/*
 * FUN_8c01fd08  0x8c01fd08
 * name hint from a string it uses: MCJNMBJNLTJNILJNACJNMDMNMILN
 * called by: FUN_8c01f8a4, FUN_8c01fc78
 * strings: "MCJNMBJNLTJNILJNACJNMDMNMILNMACNMSSNDAJN0FOP\\"; "MBJNLTJNILJNACJNMDMNMILNMACNMSSNDAJN0FOP\\";
 * "LTJNILJNACJNMDMNMILNMACNMSSNDAJN0FOP\\"; "ILJNACJNMDMNMILNMACNMSSNDAJN0FOP\\" ...
 */
int FUN_8c01fd08(u32 a0, int *a1, u32 unused_a2, u32 a3) {
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
        iVar1 = FUN_8c2124d0(a1[2], ar5_00, ar6_00, a3);
        if (iVar1 == 0)
            break;
        if (aiStack_44[2] == aiStack_44[0]) {
            a3 = 0;
            FUN_8c01fec4(a0, a1, iVar1, 0);
        } else if (iStack_38 == aiStack_44[0]) {
            a3 = 1;
            FUN_8c01fec4(a0, a1, iVar1, 1);
        } else if (iStack_34 == aiStack_44[0]) {
            a3 = 2;
            FUN_8c01fec4(a0, a1, iVar1, 2);
        } else if (iStack_30 == aiStack_44[0]) {
            a3 = 3;
            FUN_8c01fec4(a0, a1, iVar1, 3);
        } else if (iStack_2c == aiStack_44[0]) {
            a3 = 4;
            FUN_8c01fec4(a0, a1, iVar1, 4);
        } else if (iStack_28 == aiStack_44[0]) {
            a3 = 5;
            FUN_8c01fec4(a0, a1, iVar1, 5);
        } else if (iStack_24 == aiStack_44[0]) {
            a3 = 6;
            FUN_8c01fec4(a0, a1, iVar1, 6);
        } else if (iStack_20 == aiStack_44[0]) {
            a3 = 7;
            FUN_8c01fec4(a0, a1, iVar1, 7);
        } else if (iStack_1c == aiStack_44[0]) {
            a3 = 8;
            FUN_8c01fec4(a0, a1, iVar1, 8);
        } else if (iStack_18 == aiStack_44[0]) {
            a3 = 9;
            FUN_8c01fec4(a0, a1, iVar1, 9);
        } else if (iStack_14 == aiStack_44[0]) {
            a3 = 10;
            FUN_8c01fec4(a0, a1, iVar1, 10);
        } else {
            FUN_8c1fb57c(iVar1, ar5_00, ar6_00, a3);
        }
    }
    iVar1 = *a1;
    if (iVar1 != 0xb) {
        iVar1 = FUN_8c1fb57c(a1, ar5_00, ar6_00, a3);
    }
    return iVar1;
}

/*
 * FUN_8c01fec4  0x8c01fec4
 * called by: FUN_8c01fd08
 */
u32 FUN_8c01fec4(int a0, int a1, u32 a2, u32 a3) {
    int iVar1;
    u32 uVar2;
    u32 ar6_00;
    int iVar3;
    int ar7_00;

    iVar3 = a1 + 0x10;
    ar6_00 = *(u32 *)(a0 + 0x28);
    uVar2 = a3;
    iVar1 = FUN_8c02051c(a0, a3, ar6_00, iVar3);
    if (iVar1 == 0) {
        ar7_00 = a1 + 0x30;
        iVar3 = a1 + 0x10;
        iVar1 = (*(code *)(&FUN_8c02000c))(a0, a3, iVar3, ar7_00, *(u32 *)(a1 + 0x50), *(u32 *)(a1 + 0x54));
        if (iVar1 == 0) {
            uVar2 = FUN_8c1fb57c(a2, a3, iVar3, ar7_00);
        } else {
            *(u32 *)(iVar1 + 8) = a2;
            for (iVar3 = 0; iVar3 < 0x20; iVar3 = iVar3 + 1) {
                *(u32 *)(iVar1 + iVar3 * 4 + 0x58) = *(u32 *)(a1 + iVar3 * 4 + 0x58);
            }
            uVar2 = FUN_8c0205e8(a0, a0 + 0x28, iVar1);
        }
    } else {
        uVar2 = FUN_8c1fb57c(a2, uVar2, ar6_00, iVar3);
    }
    return uVar2;
}

/*
 * FUN_8c01ffa0  0x8c01ffa0
 * called by: FUN_8c02077c
 */
u32 FUN_8c01ffa0(int a0, u32 a1, u32 a2, u32 a3, u32 s0, u32 s4, u32 s8) {
    int ar6_00;

    ar6_00 = FUN_8c02000c(a0, a1, a2, a3, s0, s4);
    if (ar6_00 != 0) {
        FUN_8c0205e8(a0, a0 + 0x20, ar6_00);
        FUN_8c0206b8(a0, ar6_00, s8);
    }
    return (u32)(ar6_00 != 0);
}
