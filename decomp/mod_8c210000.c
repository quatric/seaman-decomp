/* Seaman (USA) region 0x8c210000-0x8c220000 (Ghidra decompiler, cleaned up by tools/readable.py) */

#include "seaman.h"
#include "globals.h"

/*
 * pvr_set_shadow_scale  0x8c21035c
 * writes FPU_SHAD_SCALE (a05f8074): the low byte is the scale, bit 8 enables it for non-negative a0
 */
u32 pvr_set_shadow_scale(u32 a0) {
    u32 ar6_00;

    g_8c2757a0 = (u32)((int)a0 < 0);
    ar6_00 = (1 - g_8c2757a0) * 0x100;
    pvr_20a844(0x74, ar6_00 | a0 & 0xff);
    return 0;
}

/*
 * pvr_uses_sq_copy_words_2103c4  0x8c2103c4
 * area name: sits between pvr functions (same compilation unit); behaviour name: its main named callee is sq_copy_words
 */
int pvr_uses_sq_copy_words_2103c4(u32 unused_a0, u32 unused_a1, u32 unused_a2, u32 a3, int *ain0) {
    int *in_r2;
    u32 *puVar1;
    int *unaff_r14;

    puVar1 = (u32 *)(*in_r2 * 4 + *ain0);
    *unaff_r14 = (int)puVar1;
    sq_copy_words(*puVar1, &g_8c2757a8, g_8c2757a4 << 2, a3);
    *(int *)*unaff_r14 = *(int *)*unaff_r14 + g_8c2757a4 * 4;
    return *unaff_r14;
}

/*
 * kamui_uses_ta_fifo_21092e  0x8c21092e
 * area name: in the kamui library code range; behaviour name: its main named callee is ta_fifo_211c98
 * called by: kamui_draw_211f40
 */
int kamui_uses_ta_fifo_21092e(u32 *a0, int a1, int a2, int a3, int s0) {
    u32 uVar1;
    u32 *puVar2;
    u8 *puVar3;
    int iVar4;
    int *piVar5;
    int *piVar6;
    int iVar7;
    u32 uVar8;
    u32 uVar9;
    int iStack_30;
    int aiStack_2c[4];

    iVar7 = 0;
    g_8c4aa1f4 = 1;
    uVar9 = 2;
    if ((g_8c4a9bb0 & 0x40) != 0) {
        a1 = a1 + 0x20;
    }
    g_8c4aa1b0 = s0;
    g_8c4aa1a0 = a0;
    g_8c4aa1a4 = a1;
    g_8c4aa1a8 = a2;
    g_8c4aa1ac = a3;
    if (g_8c2758e8 == 0x80000000) {
        iVar7 = kamui_fill_loop_211730(a1, a2, a3, s0);
        a0[4] = g_8c4aa014;
        g_8c2758ec = 0;
        for (puVar2 = (u32 *)&g_8c4aa288; puVar2 < &g_8c4aa298; puVar2 = puVar2 + 1) {
            *puVar2 = 0;
        }
        iVar4 = a2;
        uVar1 = kamui_calc_211876(a1, a2, a3, s0, 0, 0);
        kamui_update_fields_211ba4(uVar1);
        uVar8 = a1 + a2 + a3 + s0;
        aiStack_2c[0] = a2;
        aiStack_2c[1] = a3;
        aiStack_2c[2] = s0;
        iStack_30 = a1;
        if (a1 != 0) {
            iStack_30 = a1 + -0x10;
        }
        piVar5 = aiStack_2c;
        piVar6 = piVar5;
        for (; piVar5 < aiStack_2c + 3; piVar5 = piVar5 + 1) {
            if (*piVar5 != 0) {
                *piVar6 = *piVar6 + -0x10;
            }
            piVar6 = piVar6 + 1;
        }
        g_8c4aa1a4 = iStack_30;
        g_8c4aa1a8 = aiStack_2c[0];
        g_8c4aa1ac = aiStack_2c[1];
        g_8c4aa1b0 = aiStack_2c[2];
        if (g_8c4a9ef0 == 1) {
            uVar9 = 1;
        }
        iVar4 = aiStack_2c[2];
        iVar7 =
            ta_fifo_211c98(iStack_30, aiStack_2c[0], aiStack_2c[1], aiStack_2c[2], 0, iVar7 * 8 + uVar8 + 0xa0, uVar9);
        if (iVar7 == 0) {
            sh4_dmac_202c60(0xff, g_8c4aa1b8, g_8c4aa1c4);
            if (uVar8 < 0x10000) {
                uVar8 = 0x10000;
            }
            g_8c4aa1f8 = uVar8 * 4 + g_8c4aa204;
            if (0x200000U - g_8c4aa200 < g_8c4aa1f8) {
                g_8c4aa1f8 = 0x200000U - g_8c4aa200;
            }
            iVar7 = shinobi_list_203820(g_8c4aa1f8, &g_8c4aa280, &g_8c4aa284);
            if (iVar7 == 0) {
                g_8c4aa004 = g_8c4aa1f8;
                uVar8 = g_8c4a9c24 >> 7;
                ninja_draw_25d7c6(g_8c4a9c18 >> 7, g_8c4a9c1c >> 7, g_8c4a9c20 >> 7, uVar8, ~g_8c4aa1b8 & uVar1);
                g_8c4aa254 = g_8c4aa22c;
                g_8c4aa258 = g_8c4aa230;
                g_8c4aa25c = g_8c4aa234;
                g_8c4aa260 = g_8c4aa238;
                for (uVar1 = 0; uVar1 < 0x10; uVar1 = uVar1 + 4) {
                    *(u32 *)(uVar1 + 0x8c4aa268) = *(u32 *)(&g_8c4aa254 + uVar1);
                }
                g_8c4aa208 = 0;
                g_8c4aa20c = 0;
                g_8c4aa210 = 0;
                g_8c4aa214 = 0;
                puVar3 = &g_8c4aa22c;
                g_8c4aa218 = &g_8c4aa22c;
                puVar2 = (u32 *)&g_8c4aa224;
                g_8c4aa21c = &g_8c4aa254;
                uVar1 = 0;
                if (uVar9 != 0) {
                    do {
                        uVar1 = uVar1 + 1;
                        *puVar2 = puVar3;
                        puVar3 = puVar3 + 0x14;
                        puVar2 = puVar2 + 1;
                    } while (uVar1 < uVar9);
                }
                kamui_copy_211a20(uVar9);
                for (uVar9 = 0; uVar9 < 0x10; uVar9 = uVar9 + 4) {
                    *(int *)(g_8c4aa21c + uVar9) = *(int *)(g_8c4aa21c + uVar9) + *(int *)(&g_8c4aa288 + uVar9) * 4;
                }
                *a0 = &g_8c4aa254;
                a0[1] = &g_8c2757a8;
                a0[2] = &g_8c4aa208;
                a0[3] = &g_8c4aa224;
            }
        }
    } else {
        g_8c2758e8 = g_8c2758e8 | 0x100;
        if (g_8c2758e8 == 0xb00) {
            g_8c2758e8 = 0x80000000;
            iVar7 = kamui_draw_211f40(1, 0x80000000, 0xb00, a3);
        }
    }
    return iVar7;
}

/*
 * kamui_fill_loop_210cc0  0x8c210cc0
 * area name: in the kamui library code range; behaviour name: a loop that writes memory
 * called by: kamui_draw_20bdc0, kamui_draw_20c416, kamui_draw_20c7e0, ta_copy_20b7a0, ta_draw_20b5a0
 */
u32 kamui_fill_loop_210cc0(u32 a0) {
    int *piVar1;
    int *piVar2;
    int iVar3;
    int iVar4;
    int *piVar5;
    u32 uVar6;
    u32 uVar7;

    piVar1 = 0x8c4aa218;
    if (g_8c4a9ef0 == 1) {
        g_8c4aa218 = 0x8c4aa22c;
    } else {
        g_8c4aa218 = a0 * 0x14 + 0x8c4aa22c;
    }
    piVar2 = 0x8c4aa21c;
    *(u32 *)*0x8c4aa21c = *(u32 *)*piVar1;
    *(u32 *)(*piVar2 + 4) = *(u32 *)(*piVar1 + 4);
    *(u32 *)(*piVar2 + 8) = *(u32 *)(*piVar1 + 8);
    *(u32 *)(*piVar2 + 0xc) = *(u32 *)(*piVar1 + 0xc);
    *(u32 *)(*piVar2 + 0x10) = *(u32 *)(*piVar1 + 0x10);
    iVar3 = 0x8c4aa268;
    uVar6 = 0;
    do {
        uVar7 = uVar6 + 4;
        *(u32 *)(uVar6 + iVar3) = *(u32 *)(uVar6 + *piVar2);
        iVar4 = 0x8c4aa288;
        uVar6 = uVar7;
    } while (uVar7 < 0x14);
    g_8c4aa214 = a0 & 1;
    uVar6 = 0;
    do {
        uVar7 = uVar6;
        piVar1 = (int *)(uVar6 + iVar4);
        piVar5 = (int *)(*piVar2 + uVar6);
        uVar6 = uVar6 + 4;
        *piVar5 = *piVar5 + *piVar1 * 4;
    } while (uVar6 < 0x14);
    return uVar7;
}

/*
 * ta_fifo_210d80  0x8c210d80
 */
u32 ta_fifo_210d80(int a0) {
    u8 *puVar1;
    u32 ar4_00;
    int iVar2;
    int iVar3;
    u32 *puVar4;
    int iVar5;
    int iVar6;
    u32 *apuStack_20[2];

    ar4_00 = 0x10000000;
    puVar1 = (&sh4_dmac_202f40);
    iVar3 = a0 * 4;
    iVar5 = *(int *)(g_8c4aa21c + iVar3) - *(int *)(0x8c4aa268 + iVar3);
    if (iVar5 < 0) {
        iVar5 = iVar5 + 3;
    }
    iVar6 = (int)0x100;
    puVar4 = (u32 *)(iVar3 + 0x8c4aa268);
    do {
        iVar2 = (*(code *)puVar1)(ar4_00, *puVar4, (iVar5 >> 2) << 2, 0x10, apuStack_20);
    } while (iVar2 == iVar6);
    *(int *)(g_8c4aa21c + iVar3) = *(int *)(0x8c4aa288 + iVar3) * 4 + *(int *)(0x8c4aa268 + iVar3);
    g_8c4a9fd4 = *apuStack_20[0];
    return 0;
}

/*
 * ta_calls_scan_loop_210dfc  0x8c210dfc
 * area name: sits between ta functions (same compilation unit); behaviour name: its callees mostly do: scan_loop
 * called by: ta_copy_20b7a0
 */
u32 ta_calls_scan_loop_210dfc(u32 a0) {
    int iVar1;

    iVar1 = sh4_scan_loop_203298(g_8c4a9fd4);
    if (iVar1 != 1) {
        return 0xd;
    }
    return 0;
}

/*
 * ta_uses_sh4_dmac_210e40  0x8c210e40
 * area name: sits between ta functions (same compilation unit); behaviour name: its main named callee is
 * sh4_dmac_202c60 called by: kamui_draw_211f40
 */
int ta_uses_sh4_dmac_210e40(int a0, u32 a1) {
    u32 a6;
    u32 a7;
    int iVar1;
    u32 uVar2;
    u32 a5;

    iVar1 = 0;
    g_8c4aa1f4 = 2;
    g_8c4aa1a0 = a0;
    g_8c4aa1f8 = a1;
    if (g_8c2758e8 == 0x80000000) {
        g_8c2758ec = 1;
        g_8c4a9f10 = g_8c4a9f08;
        *(u32 *)(&g_8c4a9ef8 + g_8c4a9f08 * 4) = 2;
        g_8c4a9db8 = 0;
        g_8c4a9f20 = 1;
        uVar2 = *(u32 *)(a0 + 0x10) & 1;
        a5 = *(u32 *)(a0 + 0x10) & 2;
        a6 = *(u32 *)(a0 + 0x10) & 4;
        a7 = *(u32 *)(a0 + 0x10) & 8;
        kamui_fill_loop_211730(uVar2, a5, a6, a7);
        uVar2 = kamui_calc_211876(uVar2, a5, a6, a7);
        kamui_update_fields_211ba4(uVar2);
        g_8c4aa1f8 = g_8c4aa1f8 >> 1;
        sh4_dmac_202c60(0xff, g_8c4aa1b8, g_8c4aa1c4);
        if (0x200000U - g_8c4aa200 < g_8c4aa1f8) {
            g_8c4aa1f8 = 0x200000U - g_8c4aa200;
        }
        iVar1 = shinobi_list_203820(g_8c4aa1f8, &g_8c4aa280, &g_8c4aa284);
        if (iVar1 == 0) {
            g_8c4aa004 = g_8c4aa1f8;
            ninja_draw_25d7c6(g_8c4a9c18 >> 7, g_8c4a9c1c >> 7, g_8c4a9c20 >> 7, g_8c4a9c24 >> 7, uVar2 & ~g_8c4aa1b8);
            g_8c4a9db8 = 1;
        }
    } else {
        g_8c2758e8 = g_8c2758e8 | 0x100;
        if (g_8c2758e8 == 0xb00) {
            g_8c2758e8 = 0x80000000;
            iVar1 = kamui_draw_211f40(2, &g_8c2758e8, 2, 0x80000000);
        }
    }
    return iVar1;
}

/*
 * kamui_list_210fd2  0x8c210fd2
 * area name: in the kamui library code range; behaviour name: mostly calls list functions
 * called by: ninja_release_2590bc
 */
int kamui_list_210fd2(u32 a0, u32 unused_a1, u32 a2, u32 a3) {
    int iVar1;
    u32 *puVar2;

    iVar1 = shinobi_list_203ca0(g_8c4aa280, g_8c4aa284, a2, a3);
    if (iVar1 != 0) {
        return iVar1;
    }
    for (puVar2 = (u32 *)&g_8c4aa288; puVar2 < (u32 *)0x8c4aa29c; puVar2 = puVar2 + 1) {
        *puVar2 = 0;
    }
    return 0;
}

/*
 * kamui_list_210fd4  0x8c210fd4
 * area name: in the kamui library code range; behaviour name: mostly calls list functions
 */
int kamui_list_210fd4(u32 unused_a0, u32 *a1, u32 a2, u32 a3) {
    int iVar1;
    u32 *puVar2;
    u32 *puVar3;

    iVar1 = shinobi_list_203ca0(g_8c4aa280, *a1, a2, a3);
    if (iVar1 != 0) {
        return iVar1;
    }
    puVar3 = 0x8c4aa288 + 5;
    for (puVar2 = 0x8c4aa288; puVar2 < puVar3; puVar2 = puVar2 + 1) {
        *puVar2 = 0;
    }
    return 0;
}

/*
 * kamui_fill_loop_211040  0x8c211040
 * area name: in the kamui library code range; behaviour name: a loop that writes memory
 * called by: kamui_uses_kamui_cfg_texture_memory_211120
 */
u32 kamui_fill_loop_211040(u32 a0, u32 a1, u32 a2, u32 a3) {
    u32 *puVar1;
    u32 *puVar2;
    u32 *puVar3;
    int iVar4;
    u32 a5;

    g_8c4a9f1c = 0;
    iVar4 = g_8c4a9db8;
    a5 = a1;
    while ((iVar4 != 0 && ((*(code *)*0x8c4a9e14)(0x8c4a9e14 [1], a5, a2, a3), g_8c4a9f1c < 0xb))) {
        iVar4 = g_8c4a9db8;
    }
    puVar1 = 0x8c4a9ef0;
    g_8c4a9ef0 = a0;
    g_8c4a9fcc = a1;
    g_8c4a9fd0 = a1 & 0xf;
    puVar1[2] = 0;
    puVar2 = 0x8c4a9efc;
    g_8c4a9efc = 0xffffffff;
    puVar3 = 0x8c4a9f00;
    g_8c4a9f00 = 0xffffffff;
    puVar1[5] = 0xffffffff;
    puVar2[3] = 0;
    puVar3[3] = 0;
    puVar1[8] = 0;
    return 0;
}

/*
 * kamui_calc_2110b2  0x8c2110b2
 * area name: in the kamui library code range; behaviour name: integer arithmetic on its arguments
 * called by: kamui_uses_sq_copy_words_2122ea
 */
int kamui_calc_2110b2(int a0) {
    int iVar1;

    iVar1 = *(int *)(g_8c4aa21c + a0 * 4) - *(int *)(0x8c4aa268 + a0 * 4);
    if (iVar1 < 0) {
        iVar1 = iVar1 + 3;
    }
    return iVar1 >> 2;
}

/*
 * kamui_update_fields_2110e8  0x8c2110e8
 * area name: in the kamui library code range; behaviour name: conditionally writes members
 */
u32 kamui_update_fields_2110e8(int a0, u32 a1, int a2, u32 a3) {
    int *piVar1;
    u8 *puVar2;
    u32 *puVar3;
    u32 auStack_c[2];

    puVar2 = (&sq_copy_words);
    piVar1 = 0x8c4aa220;
    puVar3 = (u32 *)(a0 * 4 + g_8c4aa21c);
    g_8c4aa220 = (int)puVar3;
    auStack_c[0] = a1;
    (*(code *)puVar2)(*puVar3, auStack_c, 4, a3);
    *(int *)*piVar1 = *(int *)*piVar1 + a2 * 4;
    return 0;
}

/*
 * kamui_uses_kamui_cfg_texture_memory_211120  0x8c211120
 * name hint from a string it uses: HARDWARE; area name: in the kamui library code range; behaviour name: its main named
 * callee is kamui_cfg_texture_memory called by: draw_uses_free_sys_258b26, ninja_uses_kamui_cfg_texture_memory_25806c
 * strings: "HARDWARE"; "EnableTexture16MB"
 * decompiler: Heritage AFTER dead removal. Example location: s0xffffff98 : 0x8c2115d2
 */
int kamui_uses_kamui_cfg_texture_memory_211120(int a0, u32 unused_a1, u32 unused_a2, u32 a3) {
    u32 uVar1;
    u32 uVar2;
    u32 uVar3;
    int iVar4;
    u32 uVar5;
    u32 *puVar6;
    u64 *puVar7;
    u32 *puVar8;
    u32 *puVar9;
    u8 *puVar10;
    u32 uVar11;
    u32 uVar12;
    u32 extraout_fr0;
    float fVar13;
    double in_dr2;
    double dVar14;
    u32 in_fr5;
    double dVar15;
    float fVar16;
    u64 in_dr14;
    u64 in_xd2;
    bool bVar17;
    char cVar18;
    char cVar19;
    u32 uStack_8c;
    u32 uStack_88;
    u32 uStack_84;
    u32 uStack_80;
    u32 uStack_7c;
    u32 uStack_6c;
    u32 uStack_68;
    u32 uStack_5c;
    u8 auStack_54[4];
    u8 auStack_50[4];
    u32 auStack_4c[5];
    u64 auStack_38[3];
    u32 uStack_20;

    cVar19 = '\0';
    cVar18 = '\0';
    uStack_20 = (u32)in_dr14;
    dVar14 = (double)(in_dr14 & 0xffffffff00000000);
    uStack_88 = 2;
    iVar4 = a0;
    kamui_cfg_texture_memory(a0, unused_a1, unused_a2, a3);
    kamui_fill_loop_21214e();
    g_8c4aa1f4 = 0;
    uStack_7c = (u32)((*(u32 *)(a0 + 4) & 1) != 0);
    uStack_6c = (u32)((*(u32 *)(a0 + 4) & 0x20) == 0);
    uStack_80 = (u32)((*(u32 *)(a0 + 4) & 2) != 0);
    g_8c4a9fdc = (u32)((*(u32 *)(a0 + 4) & 0x100000) == 0);
    uVar11 = *(u32 *)(a0 + 0x14);
    sh4_dmac_202c60(0xff, uStack_80, uVar11);
    if ((*(u32 *)(a0 + 4) & 0x10000) == 0) {
        g_8c2758ec = 0;
        bVar17 = (*(u32 *)(a0 + 4) & 0x10) != 0;
        if (bVar17) {
            g_8c4a9fdc = 1;
        }
        g_8c4a9ef0 = (u32)bVar17;
        kamui_fill_loop_211040(g_8c4a9ef0, *(u32 *)(a0 + 0x5c), uVar11, a3);
        g_8c4a9fec = *(u32 *)(a0 + 0x24);
        uVar1 = *(u32 *)(a0 + 0x28);
        if ((g_8c4a9fec & 0x1f) != 0) {
            uVar1 = uVar1 - (0x20 - (g_8c4a9fec & 0x1f));
            g_8c4a9fec = g_8c4a9fec + 0x1f & 0xffffffe0;
        }
        if (g_8c4a9ef0 == 0) {
            uVar1 = uVar1 >> 1;
        }
        for (puVar6 = auStack_4c; puVar6 < auStack_38; puVar6 = puVar6 + 1) {
            *puVar6 = 0;
        }
        puVar7 = (u64 *)(a0 + 0x2c);
        while (fVar13 = SUB84(dVar14, 0), puVar7 < (u64 *)(a0 + 0x40U)) {
            if (cVar19 == '\0') {
                in_dr2 = (double)CONCAT44((int)((u64)in_dr2 >> 0x20), *(u32 *)puVar7);
                puVar7 = (u64 *)((int)puVar7 + 4);
            } else {
                in_xd2 = *puVar7;
                puVar7 = puVar7 + 1;
            }
            if (cVar18 == '\0') {
                dVar14 = (double)CONCAT44((int)((u64)dVar14 >> 0x20), fVar13 + SUB84(in_dr2, 0));
            } else {
                dVar14 = dVar14 + in_dr2;
            }
        }
        if (cVar19 == '\0') {
            dVar15 = (double)CONCAT44(0x42c80000, in_fr5);
        } else {
            dVar15 = 9.046259222189e+74;
        }
        fVar16 = (float)((u64)dVar15 >> 0x20);
        if (cVar18 == '\0') {
            bVar17 = fVar16 < fVar13;
        } else {
            bVar17 = dVar15 < dVar14;
        }
        if (bVar17) {
            uVar2 = 0;
            while (uVar2 < 0x14) {
                puVar7 = (u64 *)(a0 + 0x2c + uVar2);
                if (cVar19 == '\0') {
                    in_dr2 = (double)CONCAT44((int)((u64)in_dr2 >> 0x20), *(u32 *)puVar7);
                } else {
                    in_xd2 = *puVar7;
                }
                if (cVar18 == '\0') {
                    in_dr2 = (double)CONCAT44((int)((u64)in_dr2 >> 0x20), (SUB84(in_dr2, 0) * fVar16) / fVar13);
                } else {
                    in_dr2 = (in_dr2 * dVar15) / dVar14;
                }
                if (cVar19 == '\0') {
                    *(int *)((int)auStack_38 + uVar2) = SUB84(in_dr2, 0);
                    uVar2 = uVar2 + 4;
                } else {
                    *(u64 *)((int)auStack_38 + uVar2) = in_xd2;
                    uVar2 = uVar2 + 4;
                }
            }
        } else {
            uVar2 = 0;
            while (uVar2 < 0x14) {
                puVar6 = (u32 *)(a0 + 0x2c + uVar2);
                if (cVar19 == '\0') {
                    uVar3 = *puVar6;
                    in_dr2 = (double)(u64)uVar3;
                    *(u32 *)((int)auStack_38 + uVar2) = uVar3;
                    uVar2 = uVar2 + 4;
                } else {
                    *(u64 *)((int)auStack_38 + uVar2) = *(u64 *)puVar6;
                    uVar2 = uVar2 + 4;
                }
            }
        }
        for (uVar2 = 0; uVar11 = SUB84(in_dr2, 0), uVar2 < 0x14; uVar2 = uVar2 + 4) {
            if (cVar19 == '\0') {
                uVar11 = *(u32 *)((int)auStack_38 + uVar2);
            }
            if (cVar18 == '\0') {
                dVar14 = (double)CONCAT44((float)(int)uVar1, uVar11);
            } else {
                dVar14 = (double)(int)uVar1;
            }
            if ((int)uVar1 < 0) {
                if (cVar18 == '\0') {
                    dVar14 = (double)CONCAT44((float)((u64)dVar14 >> 0x20) + 4.2949673e+09, SUB84(dVar14, 0));
                } else {
                    dVar14 = dVar14 + (double)CONCAT44(extraout_fr0, 0x4f800000);
                }
            }
            if (cVar18 == '\0') {
                fVar13 = (SUB84(dVar14, 0) * (float)((u64)dVar14 >> 0x20)) / fVar16;
            } else {
                fVar13 = SUB84((dVar14 * dVar14) / dVar15, 0);
            }
            in_dr2 = (double)CONCAT44(0x4f000000, fVar13);
            if (cVar18 != '\0' || 2.1474836e+09 <= fVar13) {
                if (cVar18 == '\0') {
                    in_dr2 = (double)CONCAT44(0x4f800000, fVar13 - 4.2949673e+09);
                } else {
                    in_dr2 = (in_dr2 + in_dr2) - (in_dr2 + in_dr2);
                }
            }
            if (cVar18 == '\0') {
                uVar3 = (u32)SUB84(in_dr2, 0);
            } else {
                uVar3 = (u32)in_dr2;
            }
            *(u32 *)(uVar2 + (int)auStack_4c) = uVar3 & 0xfffffff8;
        }
        if (((g_8c4a9bb0 & 0x40) != 0) && (auStack_4c[0] < 0x38)) {
            auStack_4c[0] = auStack_4c[0] + 0x38;
        }
        uVar12 = 0xffffffff;
        uVar3 = 0;
        for (uVar2 = 0; uVar2 < 5; uVar2 = uVar2 + 1) {
            puVar6 = auStack_4c + uVar2;
            uVar5 = *puVar6;
            uVar3 = uVar3 + uVar5;
            if ((int)uVar12 < (int)uVar5) {
                uVar12 = *puVar6;
                uStack_84 = uVar2;
            }
        }
        if (uVar1 < uVar3) {
            puVar6 = auStack_4c + uStack_84;
            *puVar6 = *puVar6 - (uVar3 - uVar1);
            *puVar6 = *puVar6 & 0xffffffe0;
        }
        if (auStack_4c[0] != 0) {
            auStack_4c[0] = auStack_4c[0] - 0x10;
        }
        puVar8 = auStack_4c + 1;
        puVar6 = puVar8;
        for (; puVar8 < auStack_38; puVar8 = puVar8 + 1) {
            if (*puVar8 != 0) {
                *puVar6 = *puVar6 - 0x10;
            }
            puVar6 = puVar6 + 1;
        }
        g_8c4aa1a0 = *(u32 *)(a0 + 0x20);
        g_8c4aa1a4 = auStack_4c[0];
        g_8c4aa1a8 = auStack_4c[1];
        g_8c4aa1ac = auStack_4c[2];
        g_8c4aa1b0 = auStack_4c[3];
        g_8c4aa1b4 = auStack_4c[4];
        kamui_fill_loop_211730(auStack_4c[0], auStack_4c[1], auStack_4c[2], auStack_4c[3]);
        *(u32 *)(*(int *)(a0 + 0x20) + 0x10) = g_8c4aa014;
        for (puVar9 = (u32 *)&g_8c4aa288; puVar9 < (u32 *)0x8c4aa29c; puVar9 = puVar9 + 1) {
            *puVar9 = 0;
        }
        uVar1 = auStack_4c[1];
        uVar2 = auStack_4c[2];
        uVar3 = auStack_4c[3];
        uStack_8c = kamui_calc_211876(auStack_4c[0], auStack_4c[1], auStack_4c[2], auStack_4c[3]);
        kamui_update_fields_211ba4(uStack_8c);
        if (g_8c4a9ef0 == 1) {
            uStack_88 = 1;
        }
        ta_fifo_211c98(auStack_4c[0], auStack_4c[1], auStack_4c[2], auStack_4c[3]);
        g_8c4aa254 = g_8c4aa22c;
        g_8c4aa258 = g_8c4aa230;
        g_8c4aa25c = g_8c4aa234;
        g_8c4aa260 = g_8c4aa238;
        g_8c4aa264 = g_8c4aa23c;
        for (uVar1 = 0; uVar1 < 0x14; uVar1 = uVar1 + 4) {
            *(u32 *)(uVar1 + 0x8c4aa268) = *(u32 *)(&g_8c4aa254 + uVar1);
        }
        g_8c4aa208 = 0;
        g_8c4aa20c = 0;
        g_8c4aa210 = 0;
        g_8c4aa214 = 0;
        puVar10 = &g_8c4aa22c;
        g_8c4aa218 = &g_8c4aa22c;
        puVar9 = (u32 *)&g_8c4aa224;
        g_8c4aa21c = &g_8c4aa254;
        uVar1 = 0;
        if (uStack_88 != 0) {
            do {
                uVar1 = uVar1 + 1;
                *puVar9 = puVar10;
                puVar10 = puVar10 + 0x14;
                puVar9 = puVar9 + 1;
            } while (uVar1 < uStack_88);
        }
        kamui_copy_211a20(uStack_88);
        for (uVar1 = 0; uVar1 < 0x14; uVar1 = uVar1 + 4) {
            *(int *)(g_8c4aa21c + uVar1) = *(int *)(g_8c4aa21c + uVar1) + *(int *)(&g_8c4aa288 + uVar1) * 4;
        }
    } else {
        g_8c4a9fdc = 1;
        g_8c2758ec = 1;
        g_8c4a9f10 = g_8c4a9f08;
        *(u32 *)(&g_8c4a9ef8 + g_8c4a9f08 * 4) = 2;
        g_8c4a9db8 = 0;
        g_8c4a9f20 = 1;
        uVar1 = *(u32 *)(*(int *)(a0 + 0x20) + 0x10);
        uVar12 = *(u32 *)(*(int *)(a0 + 0x20) + 0x10) & 2;
        uVar2 = *(u32 *)(*(int *)(a0 + 0x20) + 0x10) & 4;
        uVar3 = *(u32 *)(*(int *)(a0 + 0x20) + 0x10) & 8;
        kamui_fill_loop_211730(uStack_68, uVar12, uVar2, uStack_5c);
        uStack_8c = kamui_calc_211876(uVar1 & 1, uVar12, uVar2, uVar3);
        kamui_update_fields_211ba4(uStack_8c);
        auStack_4c[3] = uVar3;
    }
    g_8c4aa1fc = *(u32 *)(a0 + 0x1c);
    if ((g_8c4aa1fc & 7) != 0) {
        g_8c4aa1fc = g_8c4aa1fc + 7 & 0xfffffff8;
    }
    g_8c4aa1f8 = g_8c4a9bc0 + g_8c4aa1fc * -4 + g_8c4aa200 * -2 >> 1;
    iVar4 = kamui_cfg_get("HARDWARE", "EnableTexture16MB", 0);
    if (iVar4 == 1) {
        if (0x400000 < g_8c4aa1f8) {
            g_8c4aa1f8 = 0x400000;
        }
    } else if (0x200000 < g_8c4aa1f8) {
        g_8c4aa1f8 = 0x200000;
    }
    if (g_8c4aa1f8 < g_8c4aa204) {
        iVar4 = 3;
    } else {
        iVar4 = shinobi_list_203820(g_8c4aa1f8, auStack_54, auStack_50);
        if (iVar4 == 0) {
            g_8c4aa004 = g_8c4aa1f8;
            uVar3 = g_8c4a9c24 >> 7;
            uVar2 = g_8c4a9c20 >> 7;
            uVar1 = g_8c4a9c1c >> 7;
            ninja_draw_25d7c6(g_8c4a9c18 >> 7, uVar1, uVar2, uVar3, ~uStack_80 & uStack_8c);
            if ((*(u32 *)(a0 + 4) & 0x10000) != 0) {
                g_8c4a9db8 = 1;
            }
            **(u32 **)(a0 + 0x20) = &g_8c4aa254;
            *(u32 **)(*(int *)(a0 + 0x20) + 4) = &g_8c2757a8;
            *(u8 **)(*(int *)(a0 + 0x20) + 8) = &g_8c4aa208;
            *(u8 **)(*(int *)(a0 + 0x20) + 0xc) = &g_8c4aa224;
            g_8c4aa1b8 = uStack_80;
            g_8c4a9be0 = uStack_80;
            g_8c4aa1bc = **(u32 **)(a0 + 8);
            g_8c4aa1c0 = *(u32 *)(a0 + 0x10);
            g_8c4aa1c4 = *(u32 *)(a0 + 0x14);
            g_8c4aa1c8 = uStack_7c;
            g_8c4aa1cc = *(u32 *)(*(int *)(a0 + 8) + 4);
            g_8c4aa1d0 = *(u32 *)(a0 + 0x10);
            g_8c4aa1d4 = *(u32 *)(a0 + 0x14);
            g_8c4aa1d8 = uStack_7c;
            g_8c4aa1dc = **(u32 **)(a0 + 8);
            g_8c4aa1e0 = *(u32 *)(*(int *)(a0 + 8) + 4);
            g_8c4aa1e4 = uStack_6c;
            g_8c2758e8 = 0x80000000;
            iVar4 = kamui_draw_211f40(g_8c4aa1f4, uVar1, uVar2, uVar3);
        }
    }
    return iVar4;
}

/*
 * kamui_fill_loop_211730  0x8c211730
 * area name: in the kamui library code range; behaviour name: a loop that writes memory
 * called by: kamui_uses_kamui_cfg_texture_memory_211120, kamui_uses_ta_fifo_21092e, ta_uses_sh4_dmac_210e40
 */
u32 kamui_fill_loop_211730(int a0, int a1, int a2, int a3, int s0) {
    u32 *puVar1;
    u32 uVar2;
    int *piVar3;
    bool bVar4;
    int aiStack_28[5];

    puVar1 = 0x8c4aa014;
    for (piVar3 = aiStack_28; piVar3 < &stack0xffffffec; piVar3 = piVar3 + 1) {
        *piVar3 = 0;
    }
    if (g_8c4a9ef0 == 1) {
        if (g_8c4a9fcc == 0x20) {
            aiStack_28[0] = 1;
        }
        if (g_8c4a9fcc == 0x21) {
            aiStack_28[1] = 1;
        }
        if (g_8c4a9fcc == 0x22) {
            aiStack_28[2] = 1;
        }
        if (g_8c4a9fcc == 0x23) {
            aiStack_28[3] = 1;
        }
        if (g_8c4a9fcc == 0x24) {
            aiStack_28[4] = 1;
        }
    }
    bVar4 = a0 + aiStack_28[0] != 0;
    g_8c4aa014 = 0;
    if (bVar4) {
        *puVar1 = *puVar1 | 1;
    }
    uVar2 = (u32)bVar4;
    if (a1 + aiStack_28[1] != 0) {
        g_8c4aa014 = g_8c4aa014 | 2;
        uVar2 = uVar2 + 1;
    }
    if (a2 + aiStack_28[2] != 0) {
        g_8c4aa014 = g_8c4aa014 | 4;
        uVar2 = uVar2 + 1;
    }
    if (a3 + aiStack_28[3] != 0) {
        g_8c4aa014 = g_8c4aa014 | 8;
        uVar2 = uVar2 + 1;
    }
    if (s0 + aiStack_28[4] != 0) {
        g_8c4aa014 = g_8c4aa014 | 0x10;
        uVar2 = uVar2 + 1;
    }
    return uVar2;
}

/*
 * kamui_calc_211876  0x8c211876
 * area name: in the kamui library code range; behaviour name: integer arithmetic on its arguments
 * called by: kamui_uses_kamui_cfg_texture_memory_211120, kamui_uses_ta_fifo_21092e, ta_uses_sh4_dmac_210e40
 */
u32 kamui_calc_211876(u32 a0, int a1, u32 a2, int a3, int s0, int s4) {
    u32 uVar1;
    u32 uVar2;
    u32 uVar3;
    u32 uVar4;
    int iVar5;
    int iVar6;
    int iVar7;

    uVar2 = g_8c4a9c14;
    iVar5 = 0;
    iVar7 = 0;
    iVar6 = 0;
    uVar4 = (u32)(a1 != 0);
    uVar3 = (u32)(a3 != 0);
    if (s0 != 0) {
        iVar5 = 2;
    }
    if (s4 == 1) {
        if (a0 != 0) {
            iVar6 = 2;
        }
        if (a2 != 0) {
            iVar7 = 2;
        }
    } else {
        if (a0 != 0) {
            iVar6 = 3;
        }
        if (a2 != 0) {
            iVar7 = 3;
        }
        if ((a0 != 0) && (a2 != 0)) {
            if (a0 < a2) {
                iVar6 = 2;
            } else {
                iVar7 = 2;
            }
        }
    }
    if (g_8c4a9ef0 == 1) {
        if (g_8c4a9fcc == 0x20) {
            iVar6 = 3;
        }
        if (g_8c4a9fcc == 0x21) {
            uVar4 = 2;
        }
        if (g_8c4a9fcc == 0x22) {
            iVar7 = 3;
        }
        if (g_8c4a9fcc == 0x23) {
            uVar3 = 2;
        }
        if (g_8c4a9fcc == 0x24) {
            iVar5 = 3;
        }
    }
    uVar3 = iVar6 << 0x11 & 0x60000 | uVar4 << 0x13 & 0x180000 | iVar7 << 0x15 & 0x600000 |
            uVar3 << 0x17 & 0x600000 << 2 | iVar5 << 0x19 & 0x6000000 | 0x10000;
    if ((g_8c4a9bb0 & 0x20) != 0) {
        if (((uVar4 == 0) || (iVar7 == 0)) || (iVar5 == 0)) {
            uVar1 = 0;
        } else {
            uVar1 = 1;
        }
        g_8c4aa010 = uVar1;
    }
    return uVar2 & 0xff | uVar3;
}

/*
 * kamui_copy_211a20  0x8c211a20
 * area name: in the kamui library code range; behaviour name: mostly calls copy functions
 * called by: kamui_uses_kamui_cfg_texture_memory_211120, kamui_uses_ta_fifo_21092e
 */
u8 *kamui_copy_211a20(u32 a0) {
    u32 *puVar1;
    u8 *puVar2;
    u8 *puVar3;
    u32 uStack_44;
    u32 uStack_40;

    uStack_40 = g_8c26d6f8;
    if ((((u32)g_8c4aa014 & 1) != 0) && ((g_8c4a9ef0 == 0 || (g_8c4a9fcc != (u8 *)0x20)))) {
        puVar1 = (u32 *)&g_8c4aa22c;
        uStack_44 = 0;
        if (a0 != 0) {
            do {
                memcpy_words(*puVar1, &uStack_40, 0x20);
                uStack_44 = uStack_44 + 1;
                puVar1 = puVar1 + 5;
            } while (uStack_44 < a0);
        }
        g_8c4aa288 = 8;
    }
    if ((((u32)g_8c4aa014 & 2) != 0) && ((uStack_40 = 0x81000000, g_8c4a9ef0 == 0 || (g_8c4a9fcc != (u8 *)0x21)))) {
        puVar2 = &g_8c4aa22c;
        uStack_44 = 0;
        if (a0 != 0) {
            do {
                memcpy_words(*(u32 *)(puVar2 + 4), &uStack_40, 0x20);
                uStack_44 = uStack_44 + 1;
                puVar2 = puVar2 + 0x14;
            } while (uStack_44 < a0);
        }
        g_8c4aa28c = 8;
    }
    if ((((u32)g_8c4aa014 & 4) != 0) && ((uStack_40 = 0x82000000, g_8c4a9ef0 == 0 || (g_8c4a9fcc != (u8 *)0x22)))) {
        puVar2 = &g_8c4aa22c;
        uStack_44 = 0;
        if (a0 != 0) {
            do {
                memcpy_words(*(u32 *)(puVar2 + 8), &uStack_40, 0x20);
                uStack_44 = uStack_44 + 1;
                puVar2 = puVar2 + 0x14;
            } while (uStack_44 < a0);
        }
        g_8c4aa290 = 8;
    }
    if ((((u32)g_8c4aa014 & 8) != 0) && ((uStack_40 = 0x83000000, g_8c4a9ef0 == 0 || (g_8c4a9fcc != (u8 *)0x23)))) {
        puVar2 = &g_8c4aa22c;
        uStack_44 = 0;
        if (a0 != 0) {
            do {
                memcpy_words(*(u32 *)(puVar2 + 0xc), &uStack_40, 0x20);
                uStack_44 = uStack_44 + 1;
                puVar2 = puVar2 + 0x14;
            } while (uStack_44 < a0);
        }
        g_8c4aa294 = 8;
    }
    puVar2 = g_8c4aa014;
    if (((u32)g_8c4aa014 & 0x10) != 0) {
        uStack_40 = 0x84000000;
        puVar2 = &g_8c4a9ef0;
        if ((g_8c4a9ef0 == 0) || (puVar2 = g_8c4a9fcc, g_8c4a9fcc != (u8 *)0x24)) {
            puVar3 = &g_8c4aa22c;
            uStack_44 = 0;
            if (a0 != 0) {
                do {
                    puVar2 = (u8 *)memcpy_words(*(u32 *)(puVar3 + 0x10), &uStack_40, 0x20);
                    uStack_44 = uStack_44 + 1;
                    puVar3 = puVar3 + 0x14;
                } while (uStack_44 < a0);
            }
            g_8c4aa298 = 8;
        }
    }
    return puVar2;
}

/*
 * kamui_update_fields_211ba4  0x8c211ba4
 * area name: in the kamui library code range; behaviour name: conditionally writes members
 * called by: kamui_uses_kamui_cfg_texture_memory_211120, kamui_uses_ta_fifo_21092e, ta_uses_sh4_dmac_210e40
 */
int kamui_update_fields_211ba4(u32 a0) {
    u32 uVar1;
    int iVar2;
    int aiStack_10[4];

    aiStack_10[0] = *(int *)(&DATA_8c26d718);
    aiStack_10[1] = *(u32 *)((&DATA_8c26d718) + 4);
    aiStack_10[2] = *(u32 *)((&DATA_8c26d718) + 8);
    aiStack_10[3] = *(u32 *)((&DATA_8c26d718) + 0xc);
    uVar1 = a0 >> 0x19 & 3;
    iVar2 = g_8c4aa008 * g_8c4aa00c;
    if ((g_8c4a9bb0 & 0x20) != 0) {
        if (g_8c4aa010 == 0) {
            iVar2 = iVar2 * 2;
        } else {
            iVar2 = iVar2 * 4;
        }
    }
    g_8c4aa204 = ((aiStack_10[a0 >> 0x11 & 3] + aiStack_10[a0 >> 0x13 & 3] + aiStack_10[a0 >> 0x15 & 3] +
                   aiStack_10[a0 >> 0x17 & 3] + aiStack_10[uVar1]) *
                      4 +
                  0x18) *
                 iVar2;
    return uVar1 * 4;
}

/*
 * ta_fifo_211c98  0x8c211c98
 * called by: kamui_uses_kamui_cfg_texture_memory_211120, kamui_uses_ta_fifo_21092e
 */
u32 ta_fifo_211c98(int a0, int a1, int a2, int a3, int s0, u32 s4, u32 s8) {
    int *piVar1;
    int iVar2;
    u32 uVar3;
    u32 *puVar4;
    int iVar5;
    u32 uVar6;
    u32 uVar7;
    int iStack_38;
    int iStack_30;
    u32 *puStack_2c;
    u32 auStack_24[2];

    g_8c4aa070 = a0 << 2;
    piVar1 = 0x8c4aa074;
    g_8c4aa074 = a1 << 2;
    g_8c4aa078 = a2 << 2;
    g_8c4aa07c = a3 << 2;
    piVar1[3] = s0 << 2;
    uVar3 = 0x10000000;
    iVar2 = 0x8c4aa22c;
    uVar6 = 0;
    auStack_24[0] = g_8c4a9fec;
    iStack_38 = 0x8c4aa22c;
    iStack_30 = 0x8c4aa22c;
    puStack_2c = auStack_24;
    if (s8 != 0) {
        do {
            uVar7 = 0;
            if ((auStack_24[uVar6] & 0x1f) != 0) {
                puVar4 = auStack_24 + uVar6;
                *puVar4 = *puVar4 + 0x1f & 0xffffffe0;
            }
            puVar4 = (u32 *)(uVar6 * 0x14 + iVar2);
            if ((g_8c4a9ef0 == 1) && (g_8c4a9fcc == 0x20)) {
                *puVar4 = uVar3;
            } else if (a0 == 0) {
                *puVar4 = 0;
            } else {
                *puVar4 = auStack_24[uVar6];
                uVar7 = a0 + 0x17U & 0xfffffff8;
            }
            iVar5 = uVar6 * 0x14 + iVar2;
            if ((g_8c4a9ef0 == 1) && (g_8c4a9fcc == 0x21)) {
                *(u32 *)(iVar5 + 4) = uVar3;
            } else if (a1 == 0) {
                *(u32 *)(iVar5 + 4) = 0;
            } else {
                *(u32 *)(iVar5 + 4) = auStack_24[uVar6] + uVar7 * 4;
                uVar7 = uVar7 + a1 + 0x17 & 0xfffffff8;
            }
            iVar5 = uVar6 * 0x14 + iVar2;
            if ((g_8c4a9ef0 == 1) && (g_8c4a9fcc == 0x22)) {
                *(u32 *)(iVar5 + 8) = uVar3;
            } else if (a2 == 0) {
                *(u32 *)(iVar5 + 8) = 0;
            } else {
                *(u32 *)(iVar5 + 8) = auStack_24[uVar6] + uVar7 * 4;
                uVar7 = uVar7 + a2 + 0x17 & 0xfffffff8;
            }
            iVar5 = uVar6 * 0x14 + iVar2;
            if ((g_8c4a9ef0 == 1) && (g_8c4a9fcc == 0x23)) {
                *(u32 *)(iVar5 + 0xc) = uVar3;
            } else if (a3 == 0) {
                *(u32 *)(iVar5 + 0xc) = 0;
            } else {
                *(u32 *)(iVar5 + 0xc) = auStack_24[uVar6] + uVar7 * 4;
                uVar7 = uVar7 + a3 + 0x17 & 0xfffffff8;
            }
            if ((g_8c4a9ef0 == 1) && (g_8c4a9fcc == 0x24)) {
                *(u32 *)(uVar6 * 0x14 + iVar2 + 0x10) = uVar3;
            } else if (s0 == 0) {
                *(u32 *)(iStack_30 + 0x10) = 0;
            } else {
                *(u32 *)(iStack_38 + 0x10) = uVar7 * 4 + *puStack_2c;
                uVar7 = uVar7 + s0 + 0x17 & 0xfffffff8;
            }
            uVar6 = uVar6 + 1;
            auStack_24[1] = uVar7 * 4 + auStack_24[0];
            iStack_30 = iStack_30 + 0x14;
            puStack_2c = puStack_2c + 1;
            iStack_38 = iStack_38 + 0x14;
        } while (uVar6 < s8);
    }
    return 0;
}

/*
 * kamui_draw_211f40  0x8c211f40
 * area name: in the kamui library code range; behaviour name: mostly calls draw functions
 * called by: kamui_uses_kamui_cfg_texture_memory_211120, kamui_uses_ta_fifo_21092e, shinobi_draw_20af76,
 * ta_uses_sh4_dmac_210e40
 */
int kamui_draw_211f40(int a0, u32 a1, u32 a2, u32 a3) {
    int iVar1;
    int iVar2;
    u32 ar5_00;
    u32 uVar3;
    u32 uVar4;

    uVar4 = 2;
    if (((a0 != 1) ||
         (a2 = g_8c4aa1a8, a3 = g_8c4aa1ac,
          iVar1 = kamui_uses_ta_fifo_21092e(g_8c4aa1a0, g_8c4aa1a4, g_8c4aa1a8, g_8c4aa1ac, g_8c4aa1b0), iVar1 == 0)) &&
        ((a0 != 2 || (iVar1 = ta_uses_sh4_dmac_210e40(g_8c4aa1a0, g_8c4aa1f8), iVar1 == 0)))) {
        if (g_8c4aa1bc == g_8c4aa1cc) {
            uVar4 = 1;
        }
        uVar3 = 0;
        iVar1 = 0;
        if (uVar4 != 0) {
            do {
                iVar2 = shinobi_uses_sh4_dmac_202a80(*(u32 *)(&g_8c4aa1bc + iVar1), *(u32 *)(&g_8c4aa1c0 + iVar1),
                                                     *(u32 *)(&g_8c4aa1c4 + iVar1), g_8c4aa1b8,
                                                     *(u32 *)(&g_8c4aa1c8 + iVar1));
                if (iVar2 != 0) {
                    return iVar2;
                }
                uVar3 = uVar3 + 1;
                iVar1 = iVar1 + 0x10;
            } while (uVar3 < uVar4);
        }
        iVar1 = shinobi_draw_20af76(g_8c4aa1dc, g_8c4aa1e0, g_8c4aa1b8, g_8c4aa1e4);
        if ((iVar1 == 0) && ((g_8c4a9ef0 == 1 || (g_8c2758ec == 1)))) {
            g_8c4a9f10 = g_8c4a9f08;
            *(u32 *)(&g_8c4a9ef8 + g_8c4a9f08 * 4) = 0;
            g_8c4a9f20 = 1;
            uVar4 = g_8c4a9f08 & 1;
            pvr_20a844(8, 1);
            pvr_20a844(8, 0);
            iVar2 = uVar4 * 0x20;
            pvr_20a844(0x124, *(u32 *)(iVar2 + 0x8c4aa024));
            pvr_20a844(300, *(u32 *)(iVar2 + 0x8c4aa028));
            pvr_20a844(0x128, *(u32 *)(iVar2 + 0x8c4aa030));
            pvr_20a844(0x130, *(u32 *)(iVar2 + 0x8c4aa034));
            pvr_20a844(0x164, *(u32 *)(iVar2 + 0x8c4aa02c));
            ar5_00 = 0x80000000;
            pvr_20a844(0x144, 0x80000000);
            pvr_20a876(0x144);
            g_8c4a9f18 = 0;
            g_8c4a9f14 = g_8c4aa014;
        }
    }
    return iVar1;
}

/*
 * kamui_set_flags_2758e8  0x8c2120c0
 * ORs a0 into the flag word at 8c2758e8
 * called by: shinobi_draw_20af76, shinobi_uses_sh4_dmac_202a80
 */
u32 kamui_set_flags_2758e8(u32 a0) {
    g_8c2758e8 = g_8c2758e8 | a0;
    return g_8c2758e8;
}

/*
 * set_g_8c2758e8  0x8c212140
 * stores its argument in the global at 0x8c2758e8
 * called by: shinobi_draw_20af76
 */
u32 set_g_8c2758e8(u32 a0) {
    g_8c2758e8 = a0;
    return a0;
}

/*
 * get_g_8c2758e8  0x8c212148
 * returns the global at 0x8c2758e8
 * called by: shinobi_uses_sh4_dmac_202a80
 */
u32 get_g_8c2758e8(void) {
    return g_8c2758e8;
}

/*
 * kamui_fill_loop_21214e  0x8c21214e
 * area name: sits between kamui functions (same compilation unit); behaviour name: a loop that writes memory
 * called by: alt_entry_207f84, kamui_set_display_mode_cfg, kamui_uses_kamui_cfg_texture_memory_211120, pvr_draw_20a6f2,
 * shinobi_draw_207da0, shinobi_draw_207f80
 */
int *kamui_fill_loop_21214e(void) {
    u32 *puVar1;
    u32 *puVar2;
    u32 *puVar3;
    int *piVar4;
    int iVar5;

    puVar1 = 0x8c4a9ef8;
    g_8c4a9ef8 = 0;
    puVar2 = 0x8c4a9efc;
    g_8c4a9efc = 0xffffffff;
    puVar3 = 0x8c4a9f00;
    g_8c4a9f00 = 0xffffffff;
    puVar1[3] = 0xffffffff;
    puVar2[3] = 0;
    puVar3[3] = 0;
    puVar1[6] = 0;
    g_8c4a9f1c = 0;
    iVar5 = g_8c4a9db4;
    while ((iVar5 != 0 && ((*(code *)*0x8c4a9e14)(0x8c4a9e14 [1]), g_8c4a9f1c < 0xb))) {
        iVar5 = g_8c4a9db4;
    }
    piVar4 = 0x8c4a9ef0;
    if (g_8c4a9ef0 == 0) {
        g_8c4a9f1c = 0;
        iVar5 = g_8c4a9db8;
        while ((iVar5 != 0 && (piVar4 = (int *)(*(code *)*0x8c4a9e14)(0x8c4a9e14 [1]), g_8c4a9f1c < 0xb))) {
            iVar5 = g_8c4a9db8;
            piVar4 = 0x8c4a9db8;
        }
    }
    g_8c4a9db8 = 0;
    g_8c4a9db4 = 0;
    return piVar4;
}

/*
 * alt_entry_212152  0x8c212152
 * probably an entry 4 bytes into 8c21214e: it reads registers that code sets before it
 */
u32 *alt_entry_212152(u32 unused_a0, u32 a1, u32 a2, u32 a3) {
    u32 *puVar1;
    u32 *puVar2;
    u32 *puVar3;
    u32 uVar4;
    u32 unaff_r14;

    puVar3 = 0x8c4a9ef8;
    g_8c4a9ef8 = unaff_r14;
    puVar1 = 0x8c4a9efc;
    g_8c4a9efc = 0xffffffff;
    puVar2 = 0x8c4a9f00;
    g_8c4a9f00 = 0xffffffff;
    puVar3[3] = 0xffffffff;
    puVar1[3] = unaff_r14;
    puVar2[3] = unaff_r14;
    puVar3[6] = unaff_r14;
    g_8c4a9f1c = unaff_r14;
    uVar4 = g_8c4a9db4;
    while ((uVar4 != 0 && ((*(code *)*0x8c4a9e14)(0x8c4a9e14 [1], a1, a2, a3), g_8c4a9f1c < 0xb))) {
        uVar4 = g_8c4a9db4;
    }
    puVar3 = 0x8c4a9ef0;
    if (g_8c4a9ef0 == 0) {
        g_8c4a9f1c = unaff_r14;
        uVar4 = g_8c4a9db8;
        while ((uVar4 != 0 && (puVar3 = (u32 *)(*(code *)*0x8c4a9e14)(0x8c4a9e14 [1], a1, a2, a3), g_8c4a9f1c < 0xb))) {
            uVar4 = g_8c4a9db8;
            puVar3 = 0x8c4a9db8;
        }
    }
    g_8c4a9db8 = unaff_r14;
    g_8c4a9db4 = unaff_r14;
    return puVar3;
}

/*
 * kamui_uses_sq_copy_words_212220  0x8c212220
 * area name: sits between kamui functions (same compilation unit); behaviour name: its main named callee is
 * sq_copy_words
 */
u32 kamui_uses_sq_copy_words_212220(int *a0, u32 unused_a1, u32 unused_a2, u32 a3) {
    int iVar1;
    u32 uVar2;
    int ar5_00;
    u32 uVar3;
    u32 ar6_00;

    ar6_00 = ((int *)a0[2])[1];
    iVar1 = *(int *)a0[2] * 4;
    ar5_00 = a0[1];
    uVar2 = *(u32 *)(*a0 + iVar1);
    uVar3 = uVar2 >> 0x18;
    *0xff000038 = uVar3;
    *0xff00003c = uVar3;
    sq_copy_words(0x3ffffff & uVar2 | 0xe0000000, ar5_00, ar6_00, a3);
    *(u32 *)(*a0 + iVar1) = *(int *)(*a0 + iVar1) + (ar6_00 & 0xfffffffc);
    return 0;
}

/*
 * kamui_uses_sq_copy_words_212284  0x8c212284
 * area name: in the kamui library code range; behaviour name: its main named callee is sq_copy_words
 */
u32 kamui_uses_sq_copy_words_212284(int *a0, u32 a1, u32 a2, int a3) {
    u32 *puVar1;
    int iVar2;
    u32 uVar3;
    u32 uVar4;

    puVar1 = 0xff000038;
    g_8c4aa210 = a2;
    iVar2 = *(int *)a0[2] * 4;
    uVar3 = *(u32 *)(*a0 + iVar2);
    uVar4 = uVar3 >> 0x18;
    *puVar1 = uVar4;
    *0xff00003c = uVar4;
    sq_copy_words(0x3ffffff & uVar3 | 0xe0000000, a1, a3, a3);
    *(int *)(*a0 + iVar2) = *(int *)(*a0 + iVar2) + (a3 >> 2) * 4;
    return 0;
}

/*
 * kamui_uses_sq_copy_words_2122ea  0x8c2122ea
 * area name: in the kamui library code range; behaviour name: its main named callee is sq_copy_words
 * called by: ta_fifo_2595aa
 */
u32 kamui_uses_sq_copy_words_2122ea(int *a0, u32 a1, u32 a2, u32 *a3) {
    int iVar1;
    u32 uVar2;
    u32 *ar7_00;
    int iVar3;
    int iStack_4c;
    u32 auStack_40[4];

    iVar3 = a1 * 4;
    ar7_00 = a3;
    iVar1 = kamui_calc_2110b2(a1);
    if (iVar1 != 8) {
        ar7_00 = &g_8c2758f0;
        if ((a1 & 1) == 0) {
            uVar2 = 0xa0000000;
        } else {
            uVar2 = 0x81000040;
        }
        g_8c2758f0 = *(u32 *)a0[1] & 0x830000 | uVar2;
        _DAT_ff000038 = *(u32 *)(*a0 + iVar3) >> 0x18;
        _DAT_ff00003c = _DAT_ff000038;
        sq_copy_words(*(u32 *)(*a0 + iVar3) & 0x3ffffff | 0xe0000000, &g_8c2758f0, 0x20, &g_8c2758f0);
        *(int *)(*a0 + iVar3) = *(int *)(*a0 + iVar3) + 0x20;
        for (iStack_4c = 2; iStack_4c != 0; iStack_4c = iStack_4c + -1) {
            _DAT_ff000038 = *(u32 *)(*a0 + iVar3) >> 0x18;
            _DAT_ff00003c = _DAT_ff000038;
            sq_copy_words(*(u32 *)(*a0 + iVar3) & 0x3ffffff | 0xe0000000, &g_8c275910, 0x40, ar7_00);
            *(int *)(*a0 + iVar3) = *(int *)(*a0 + iVar3) + 0x40;
        }
    }
    auStack_40[0] = 0x20000000;
    _DAT_ff000038 = *(u32 *)(*a0 + iVar3) >> 0x18;
    _DAT_ff00003c = _DAT_ff000038;
    sq_copy_words(*(u32 *)(*a0 + iVar3) & 0x3ffffff | 0xe0000000, auStack_40, 0x20, ar7_00);
    *(int *)(*a0 + iVar3) = *(int *)(*a0 + iVar3) + 0x20;
    return 0;
}

/*
 * gdfs_load_file_alloc  0x8c212440
 * opens file a0, allocates its size in 0x800-byte sectors plus 8 and reads it whole; returns the buffer or 0
 */
u32 gdfs_load_file_alloc(u32 a0, u32 unused_a1, int a2, u32 a3) {
    int ar4_00;
    int iVar1;
    int iVar2;
    u8 *ar5_00;
    u8 *in_stack_fffffff0;
    u8 *ain0;

    ar5_00 = &stack0xfffffff0;
    ar4_00 = gdfs_open_like(a0, 0, a2, a3);
    if (ar4_00 != 0) {
        iVar1 = gdfs_test_1f30ee(ar4_00, &stack0xfffffff0);
        ain0 = in_stack_fffffff0;
        if ((iVar1 == 1) && (iVar1 = malloc_thunk((int)in_stack_fffffff0 * 0x800 + 8, ar5_00, a2, a3),
                             ain0 = in_stack_fffffff0, iVar1 != 0)) {
            a2 = iVar1;
            iVar2 = gdfs_read_blocking(ar4_00, in_stack_fffffff0, iVar1, a3);
            if (iVar2 == 0) {
                gdfs_close_like(ar4_00, in_stack_fffffff0, a2, a3);
                return iVar1;
            }
            free_sys(iVar1, in_stack_fffffff0, a2, a3);
            ar5_00 = in_stack_fffffff0;
        }
        gdfs_close_like(ar4_00, ar5_00, a2, a3);
    }
    return 0;
}

/*
 * bswap32  0x8c2124aa
 * byte-swaps a 32-bit word
 * called by: gdfs_uses_bswap32_2124d0
 */
u32 bswap32(u32 a0) {
    return a0 << 0x18 | (0xff00 & a0) << 8 | (0xff0000 & a0) >> 8 | (0xff000000 & a0) >> 0x18;
}

/*
 * gdfs_uses_bswap32_2124d0  0x8c2124d0
 * area name: sits between gdfs functions (same compilation unit); behaviour name: its main named callee is bswap32
 * called by: CDCGD_uses_CDCGD_queue_unique_request_01fd08
 */
u32 gdfs_uses_bswap32_2124d0(int a0, int *a1, int *a2, u32 a3) {
    u8 *puVar1;
    u32 uVar2;
    int *piVar3;
    u32 uVar4;
    int iVar5;
    int iVar6;
    int iVar7;
    int iVar8;
    int iStack_34;
    int iStack_30;
    u8 abStack_2c[4];
    u8 abStack_28[4];
    u8 abStack_24[4];
    u8 abStack_20[8];

    puVar1 = (&memcpy_bytes);
    iVar6 = *a1 + a0;
    iVar5 = 0;
    memcpy_bytes(&iStack_30, iVar6, 4);
    iVar7 = iVar6 + 4;
    uVar4 = 4;
    (*(code *)puVar1)(&iStack_34, iVar7, 4, a3);
    *a1 = *a1 + 8;
    iStack_30 = bswap32(iStack_30);
    if (iStack_30 == 0x4e4a494e) {
        *a2 = 0x4e4a494e;
        goto LAB_8c212588;
    }
    iVar8 = 0x4e4a434d;
    if (iStack_30 != 0x4e4a434d) {
        iVar8 = 0x4e4a424d;
        if (iStack_30 == 0x4e4a424d) {
        LAB_8c212580:
            *a2 = iVar8;
            goto LAB_8c212588;
        }
        iVar8 = 0x4e4a544c;
        if (iStack_30 != 0x4e4a544c) {
            iVar8 = 0x4e4a4c49;
            if (iStack_30 == 0x4e4a4c49)
                goto LAB_8c212580;
            iVar8 = 0x4e4a4341;
            if (iStack_30 != 0x4e4a4341) {
                iVar8 = 0x4e4d444d;
                if (iStack_30 == 0x4e4d444d)
                    goto LAB_8c212580;
                iVar8 = 0x4e4c494d;
                if (iStack_30 != 0x4e4c494d) {
                    iVar8 = 0x4e43414d;
                    if (iStack_30 == 0x4e43414d)
                        goto LAB_8c212580;
                    iVar8 = 0x4e53534d;
                    if (iStack_30 != 0x4e53534d) {
                        *a2 = 0x2a2a2a2a;
                        return 0;
                    }
                }
            }
        }
    }
    *a2 = iVar8;
LAB_8c212588:
    iVar7 = malloc_thunk(iStack_34, iVar7, uVar4, a3);
    if (iVar7 == 0) {
        return 0;
    }
    (*(code *)puVar1)(iVar7, iVar6 + 8, iStack_34, a3);
    iVar8 = iVar6 + 8 + iStack_34;
    *a1 = *a1 + iStack_34;
    uVar4 = 4;
    iVar6 = iVar8;
    (*(code *)puVar1)(&iStack_30, iVar8, 4, a3);
    *a1 = *a1 + 4;
    iStack_30 = bswap32(iStack_30);
    if (iStack_30 != 0x504f4630) {
        return iVar7;
    }
    (*(code *)puVar1)(&iStack_34, iVar8 + 4, 4, a3);
    *a1 = *a1 + 4;
    iVar6 = iVar8 + 8;
    while (true) {
        do {
            iVar8 = iVar6;
            if (iStack_34 == 0) {
                return iVar7;
            }
            (*(code *)puVar1)(abStack_28, iVar8, 1, a3);
            uVar2 = (u32)0xc0;
            iVar6 = iVar8 + 1;
            *a1 = *a1 + 1;
            iStack_34 = iStack_34 + -1;
            uVar2 = abStack_28[0] & uVar2;
        } while (uVar2 == 0);
        if (uVar2 == 0x40)
            break;
        if (uVar2 == (int)0x80) {
            (*(code *)puVar1)(abStack_2c, iVar6, 1, a3);
            iVar6 = iVar8 + 2;
            iStack_34 = iStack_34 + -1;
            *a1 = *a1 + 1;
            uVar2 = (abStack_28[0] & 0x3f) << 8 | (u32)abStack_2c[0];
            goto LAB_8c21270c;
        }
        if (uVar2 == (int)0xc0) {
            (*(code *)puVar1)(abStack_2c, iVar6, 1, a3);
            iStack_34 = iStack_34 + -1;
            (*(code *)puVar1)(abStack_20, iVar8 + 2, 1, a3);
            iStack_34 = iStack_34 + -1;
            (*(code *)puVar1)(abStack_24, iVar8 + 3, 1, a3);
            iVar6 = iVar8 + 4;
            iStack_34 = iStack_34 + -1;
            *a1 = *a1 + 3;
            uVar2 = (abStack_28[0] & 0x3f) << 0x18 | (u32)abStack_2c[0] << 0x10 | (u32)abStack_20[0] << 8 |
                    (u32)abStack_24[0];
        LAB_8c21270c:
            iVar5 = iVar5 + uVar2 * 4;
            piVar3 = (int *)(iVar7 + iVar5);
            if (*piVar3 != 0) {
                *piVar3 = *piVar3 + iVar7;
            }
        }
    }
    uVar2 = abStack_28[0] & 0x3f;
    goto LAB_8c21270c;
}

/*
 * point_transform_or_copy  0x8c212740
 * a2 = the current matrix times a1, or the position at +0x30 of object a0 when it is set
 * called by: Class_129938_m1_0170e0, Class_129938_m2_0171f4, Vec3_copy_02a568, Vec3_copy_02a5d4, alt_entry_2376d8,
 * gfxlib_uses_memcpy_words_n_2376c4, gfxlib_uses_point_transform_or_copy_218e00,
 * gfxlib_uses_point_transform_or_copy_21a678
 */
u32 point_transform_or_copy(int a0, float *a1, float *a2, u32 unused_a3, u32 ain0) {
    float fVar1;
    float fVar2;
    float fVar3;
    u64 in_xd0;
    float in_xf3;
    u64 in_xd4;
    u64 in_xd6;
    u64 in_xd8;
    u64 in_xd10;
    float in_xf12;
    float in_xf13;
    float in_xf15;

    fVar2 = *a1;
    fVar1 = a1[1];
    fVar3 = a1[2];
    if (a0 != 0) {
        fVar2 = *(float *)(a0 + 0x34);
        *a2 = *(float *)(a0 + 0x30);
        fVar1 = *(float *)(a0 + 0x38);
        a2[1] = fVar2;
        a2[2] = fVar1;
        return 0x38;
    }
    a2[2] =
        in_xf3 * fVar1 + (float)((u64)in_xd6 >> 0x20) * fVar2 + (float)((u64)in_xd10 >> 0x20) * 1.0 + in_xf15 * fVar3;
    a2[1] = (float)in_xd0 * fVar1 + (float)in_xd4 * fVar2 + (float)in_xd8 * 1.0 + in_xf12 * fVar3;
    *a2 = (float)((u64)in_xd0 >> 0x20) * fVar1 + (float)((u64)in_xd4 >> 0x20) * fVar2 +
          (float)((u64)in_xd8 >> 0x20) * 1.0 + in_xf13 * fVar3;
    return ain0;
}

/*
 * njCalcVector_like  0x8c21279c
 * *a2 = vector a1 rotated by matrix a0 (the current matrix when 0), normalised when 8c4ab148 is set
 * called by: Class_1299f8_m4_019588, Class_129a24_m1_019b68, Class_12b580_uses_njCalcVector_like_0d8808,
 * Class_12b758_draw_0e4dd0, Vec3_uses_set_vec_0e3f24, Vec3_vec_023484, Vec3_vec_023570, Vec3_vec_023668 (+9 more)
 */
u32 njCalcVector_like(int a0, float *a1, float *a2, u32 unused_a3, u32 ain0) {
    float fVar1;
    float fVar2;
    float fVar3;
    float fVar4;
    float fVar5;
    float fVar7;
    u64 uVar6;
    s64 lVar8;
    u64 in_xd0;
    float in_xf2;
    float in_xf3;
    u64 in_xd4;
    float in_xf6;
    float in_xf7;
    u64 in_xd8;
    float in_xf10;
    float in_xf11;
    float in_xf12;
    float in_xf13;
    float in_xf14;
    float in_xf15;

    fVar3 = *a1;
    fVar1 = a1[1];
    fVar7 = a1[2];
    uVar6 = (u64)(u32)fVar7 << 0x20;
    if (a0 == 0) {
        fVar2 = (float)in_xd0 * fVar1 + (float)in_xd4 * fVar3 + (float)in_xd8 * 0.0 + in_xf12 * fVar7;
        fVar4 = (float)((u64)in_xd0 >> 0x20) * fVar1 + (float)((u64)in_xd4 >> 0x20) * fVar3 +
                (float)((u64)in_xd8 >> 0x20) * 0.0 + in_xf13 * fVar7;
        fVar5 = in_xf2 * fVar1 + in_xf6 * fVar3 + in_xf10 * 0.0 + in_xf14 * fVar7;
        fVar1 = in_xf3 * fVar1 + in_xf7 * fVar3 + in_xf11 * 0.0 + in_xf15 * fVar7;
    } else {
        fVar2 = 0.0;
        fVar4 = 0.0;
        ain0 = 0x28;
        lVar8 = 0;
        fVar1 = *(float *)(a0 + 0x18) * fVar1 + *(float *)(a0 + 8) * fVar3 + 0.0 + *(float *)(a0 + 0x28) * fVar7;
        uVar6 = lVar8 << 0x20;
    }
    uVar6 = uVar6 & 0xffffffff00000000;
    if (g_8c4ab148 != 0) {
        fVar1 = (float)(uVar6 >> 0x20);
        fVar1 = fVar2 * fVar2 + fVar4 * fVar4 + 0.0 + fVar1 * fVar1;
        fVar1 = 1.0 / SQRT((float)uVar6);
        uVar6 = CONCAT44((float)(uVar6 >> 0x20) * fVar1, fVar1);
        fVar2 = fVar2 * fVar1;
        fVar4 = fVar4 * fVar1;
    }
    a2[2] = (float)(uVar6 >> 0x20);
    a2[1] = fVar2;
    *a2 = fVar4;
    return ain0;
}

/*
 * ninja_float_calc_212808  0x8c212808
 * area name: sits between ninja functions (same compilation unit); behaviour name: floating-point arithmetic
 * called by: gfxlib_uses_libgcc_movstr_i4_23340c, gfxlib_uses_noop_fr4_test_2336e8
 */
u32 ninja_float_calc_212808(float *a0, float *a1, float *a2, float *a3) {
    float fVar1;
    float fVar2;
    float fVar3;
    float fVar4;
    float fVar5;
    float fVar6;
    float fVar7;
    float fVar8;
    float fVar9;
    float fVar10;
    float fVar11;
    float fVar12;
    float fVar13;
    float fVar14;
    float fVar15;
    float fVar16;
    float fVar17;
    float fVar18;

    fVar1 = *a2;
    fVar4 = *a0;
    fVar10 = *a1;
    fVar13 = fVar1;
    if (fVar4 < fVar1) {
        fVar13 = fVar4;
    }
    fVar7 = *a3;
    fVar16 = fVar7;
    if (fVar7 < fVar10) {
        fVar16 = fVar10;
    }
    fVar5 = a0[1];
    fVar2 = a2[1];
    fVar11 = a1[1];
    fVar17 = fVar2;
    if (fVar5 < fVar2) {
        fVar17 = fVar5;
    }
    fVar8 = a3[1];
    fVar14 = fVar8;
    if (fVar8 < fVar11) {
        fVar14 = fVar11;
    }
    fVar6 = a0[2];
    fVar9 = a2[2];
    fVar12 = a1[2];
    fVar15 = fVar9;
    if (fVar6 < fVar9) {
        fVar15 = fVar6;
    }
    fVar3 = a3[2];
    fVar18 = fVar3;
    if (fVar3 < fVar12) {
        fVar18 = fVar12;
    }
    return (u32)((fVar16 - fVar13 < ((fVar10 - fVar4) + fVar7) - fVar1 &&
                  fVar14 - fVar17 < ((fVar11 - fVar5) + fVar8) - fVar2) &&
                 fVar18 - fVar15 < ((fVar12 - fVar6) + fVar3) - fVar9);
}

/*
 * ninja_uses_noop_fr4_test_212898  0x8c212898
 * area name: sits between ninja functions (same compilation unit); behaviour name: its main named callee is
 * noop_fr4_test called by: ninja_uses_noop_fr4_test_212946
 */
u32 *ninja_uses_noop_fr4_test_212898(u32 a0, u32 unused_a1, u32 a2) {
    u32 r7;
    u32 ain0;

    ain0 = a2;
    noop_fr4_test(a0, unused_a1, a2, r7, a2);
    noop_fr4_test(a0, unused_a1, a2, r7, ain0);
    return &g_8c212a28;
}

/*
 * ninja_uses_noop_fr4_test_212946  0x8c212946
 * area name: sits between ninja functions (same compilation unit); behaviour name: its callees mostly do:
 * uses_noop_fr4_test called by: kamui_uses_noop_fr4_test_212a30, kamui_uses_noop_fr4_test_2136b0
 */
u32 ninja_uses_noop_fr4_test_212946(u32 a0, u32 a1) {
    u32 uVar1;
    u32 a4;
    u32 a5;
    u32 extraout_fr1;
    u32 extraout_fr1_00;
    u32 extraout_fr1_01;
    u32 extraout_fr1_02;
    u32 extraout_fr1_03;
    u32 extraout_fr1_04;
    u32 extraout_fr1_05;
    u32 extraout_fr1_06;
    u32 extraout_fr0;
    float extraout_fr0_00;
    u32 extraout_fr0_01;
    float extraout_fr0_02;
    u32 extraout_fr0_03;
    float extraout_fr0_04;
    float extraout_fr0_05;
    float extraout_fr0_06;
    float extraout_fr3;
    float fVar2;
    u32 extraout_fr2;
    u32 uVar3;
    double in_dr4;
    double dVar4;
    u32 in_fr13;
    u32 uVar5;
    u32 uVar6;
    double dVar7;
    double in_dr14;
    double in_xd4;
    double in_xd14;
    double dVar8;
    bool bVar9;
    char cVar10;
    char cVar11;

    cVar11 = '\0';
    cVar10 = '\0';
    ninja_uses_noop_fr4_test_212898(a0, a0 + 8, a0 + 0x10);
    uVar5 = extraout_fr1;
    if (cVar11 == '\0') {
        uVar5 = in_fr13;
    }
    dVar7 = (double)CONCAT44(extraout_fr0, uVar5);
    ninja_uses_noop_fr4_test_212898(a0, a0 + 0x10, a0 + 0x18);
    if (cVar10 == '\0') {
        dVar7 = (double)CONCAT44((float)((u64)dVar7 >> 0x20) + extraout_fr0_00, SUB84(dVar7, 0));
    } else {
        dVar7 = dVar7 + (double)CONCAT44(extraout_fr0_00, extraout_fr1_00);
    }
    dVar8 = dVar7;
    if (cVar11 == '\0') {
        in_dr14 = (double)CONCAT44((int)((u64)in_dr14 >> 0x20), (int)((u64)dVar7 >> 0x20));
        dVar8 = in_xd14;
    }
    ninja_uses_noop_fr4_test_212898(a1, a1 + 8, a1 + 0x10);
    uVar5 = extraout_fr1_01;
    if (cVar11 == '\0') {
        uVar5 = SUB84(dVar7, 0);
    }
    dVar7 = (double)CONCAT44(extraout_fr0_01, uVar5);
    ninja_uses_noop_fr4_test_212898(a1, a1 + 0x10, a1 + 0x18);
    if (cVar10 == '\0') {
        dVar7 = (double)CONCAT44((float)((u64)dVar7 >> 0x20) + extraout_fr0_02, SUB84(dVar7, 0));
    } else {
        dVar7 = dVar7 + (double)CONCAT44(extraout_fr0_02, extraout_fr1_02);
    }
    dVar4 = dVar7;
    if (cVar11 == '\0') {
        in_dr4 = (double)CONCAT44((int)((u64)in_dr4 >> 0x20), (int)((u64)dVar7 >> 0x20));
        dVar4 = in_xd4;
    }
    fVar2 = SUB84(in_dr4, 0);
    if (cVar10 == '\0') {
        bVar9 = SUB84(in_dr14, 0) < fVar2;
    } else {
        bVar9 = in_dr14 < in_dr4;
    }
    if (bVar9) {
        a4 = a0;
        a5 = a1;
        if (cVar11 == '\0') {
            dVar4 = (double)CONCAT44(fVar2, fVar2);
        }
    } else {
        a4 = a1;
        a5 = a0;
        dVar4 = dVar8;
        if (cVar11 == '\0') {
            dVar4 = (double)CONCAT44(SUB84(in_dr14, 0), fVar2);
        }
    }
    fVar2 = extraout_fr3;
    if (cVar11 == '\0') {
        fVar2 = 1.025;
        in_dr14 = (double)CONCAT44((int)((u64)in_dr14 >> 0x20), (int)((u64)dVar4 >> 0x20));
    }
    uVar1 = a4 + 0x20;
    if (cVar10 == '\0') {
        in_dr14 = (double)CONCAT44((int)((u64)in_dr14 >> 0x20), SUB84(in_dr14, 0) * fVar2);
    } else {
        in_dr14 = in_dr14 * (double)CONCAT44(extraout_fr2, fVar2);
    }
    while (true) {
        if (uVar1 <= a4) {
            return 0;
        }
        uVar3 = SUB84(dVar4, 0);
        uVar6 = SUB84(dVar7, 0);
        ninja_uses_noop_fr4_test_212898(a4, a5, a5 + 8);
        uVar5 = extraout_fr1_03;
        if (cVar11 == '\0') {
            uVar5 = uVar6;
        }
        dVar7 = (double)CONCAT44(extraout_fr0_03, uVar5);
        ninja_uses_noop_fr4_test_212898(a4, a5 + 8, a5 + 0x10);
        if (cVar10 == '\0') {
            dVar7 = (double)CONCAT44((float)((u64)dVar7 >> 0x20) + extraout_fr0_04, SUB84(dVar7, 0));
        } else {
            dVar7 = dVar7 + (double)CONCAT44(extraout_fr0_04, extraout_fr1_04);
        }
        ninja_uses_noop_fr4_test_212898(a4, a5 + 0x10, a5 + 0x18);
        if (cVar10 == '\0') {
            dVar7 = (double)CONCAT44((float)((u64)dVar7 >> 0x20) + extraout_fr0_05, SUB84(dVar7, 0));
        } else {
            dVar7 = dVar7 + (double)CONCAT44(extraout_fr0_05, extraout_fr1_05);
        }
        ninja_uses_noop_fr4_test_212898(a4, a5 + 0x18, a5);
        if (cVar10 == '\0') {
            dVar7 = (double)CONCAT44((float)((u64)dVar7 >> 0x20) + extraout_fr0_06, SUB84(dVar7, 0));
        } else {
            dVar7 = dVar7 + (double)CONCAT44(extraout_fr0_06, extraout_fr1_06);
        }
        dVar4 = dVar7;
        if (cVar11 == '\0') {
            dVar4 = (double)CONCAT44((int)((u64)dVar7 >> 0x20), uVar3);
        }
        if (cVar10 == '\0') {
            bVar9 = (float)((u64)dVar4 >> 0x20) < SUB84(in_dr14, 0);
        } else {
            bVar9 = dVar4 < in_dr14;
        }
        if (bVar9)
            break;
        a4 = a4 + 8;
    }
    return 1;
}

/*
 * kamui_uses_noop_fr4_test_212a30  0x8c212a30
 * area name: in the kamui library code range; behaviour name: its main named callee is noop_fr4_test
 * called by: gfxlib_uses_libgcc_movstr_i4_23340c
 */
u32 kamui_uses_noop_fr4_test_212a30(double *a0, float *a1) {
    u32 uVar1;
    u32 uVar2;
    int iVar3;
    int iVar4;
    int iVar5;
    double *pdVar6;
    u64 *puVar7;
    u64 *puVar8;
    u64 *puVar9;
    u64 *puVar10;
    u64 *puVar11;
    u64 *puVar12;
    u64 *puVar13;
    u64 *puVar14;
    double **ppdVar15;
    double in_dr0;
    double dVar16;
    float fVar17;
    u32 uVar18;
    float fVar21;
    double dVar19;
    double dVar20;
    u32 uVar22;
    float fVar23;
    u64 in_dr12;
    double dVar24;
    u64 in_dr14;
    double dVar25;
    double in_xd2;
    u64 uVar26;
    double in_xd4;
    bool bVar27;
    float in_PR;
    char cVar28;
    char cVar29;
    double *pdStack_1f8;
    u32 uStack_184;
    u32 uStack_180;
    u32 uStack_17c;
    float fStack_78;
    float fStack_74;
    float fStack_70;
    float fStack_6c;
    float fStack_68;
    float fStack_64;
    float fStack_60;
    float fStack_5c;
    u32 uStack_58;
    float fStack_54;
    float fStack_50;
    u32 uStack_4c;
    float fStack_48;
    float fStack_44;
    u32 uStack_40;
    float fStack_3c;
    float fStack_38;
    u32 uStack_34;
    float fStack_30;
    u32 uStack_2c;
    u32 uStack_28;
    u32 uStack_24;
    u32 uStack_20;

    cVar29 = '\0';
    cVar28 = '\0';
    uStack_20 = (int)in_dr14;
    uStack_24 = (int)((u64)in_dr14 >> 0x20);
    uStack_28 = (int)in_dr12;
    uStack_2c = (u32)((u64)in_dr12 >> 0x20);
    ppdVar15 = &pdStack_1f8;
    dVar24 = (double)CONCAT44(uStack_2c, 0x3f000000);
    dVar25 = 7.993609747768068e-16;
    pdStack_1f8 = a0;
    uStack_17c = 0;
    uStack_184 = 0;
    uStack_180 = 0;
    fStack_6c = (*(float *)a0 + *(float *)((int)a0 + 0xc) + *(float *)(a0 + 3) + *(float *)((int)a0 + 0x24)) * 0.25;
    fStack_68 = (*(float *)((int)a0 + 4) + *(float *)(a0 + 2) + *(float *)((int)a0 + 0x1c) + *(float *)(a0 + 5)) * 0.25;
    fStack_64 =
        (*(float *)(a0 + 1) + *(float *)((int)a0 + 0x14) + *(float *)(a0 + 4) + *(float *)((int)a0 + 0x2c)) * 0.25;
    fStack_78 = (*a1 + a1[3] + a1[6] + a1[9]) * 0.25;
    fStack_74 = (a1[1] + a1[4] + a1[7] + a1[10]) * 0.25;
    fStack_70 = (a1[2] + a1[5] + a1[8] + a1[0xb]) * 0.25;
    fStack_3c = *(float *)((int)a0 + 0x24);
    fStack_38 = *(float *)(a0 + 5);
    dVar20 = (double)CONCAT44(fStack_70, *(u32 *)((int)a0 + 0x2c));
    uStack_34 = *(u32 *)((int)a0 + 0x2c);
    uVar2 = 0;
    fStack_30 = in_PR;
    while (ppdVar15[2] = (double *)uVar2, uVar2 < 0x30) {
        iVar5 = (int)*ppdVar15;
        iVar3 = (int)ppdVar15[2];
        if (cVar29 == '\0') {
            dVar20 = (double)CONCAT44((int)((u64)dVar20 >> 0x20), *(u32 *)(iVar5 + iVar3));
        } else {
            in_xd2 = *(double *)(iVar5 + iVar3);
        }
        if (cVar29 == '\0') {
            fStack_48 = SUB84(dVar20, 0);
            dVar20 = (double)CONCAT44((int)((u64)dVar20 >> 0x20), *(u32 *)(iVar5 + iVar3 + 4));
        } else {
            fStack_48 = SUB84(in_xd2, 0);
            in_xd2 = *(double *)(iVar5 + iVar3 + 4);
        }
        if (cVar29 == '\0') {
            fStack_44 = SUB84(dVar20, 0);
            uStack_40 = *(u32 *)(iVar5 + iVar3 + 8);
            dVar20 = (double)CONCAT44((int)((u64)dVar20 >> 0x20), fStack_48);
            fVar17 = fStack_48;
            dVar19 = (double)CONCAT44(fStack_48, fStack_3c);
        } else {
            fStack_44 = SUB84(in_xd2, 0);
            uVar26 = *(u64 *)(iVar5 + iVar3 + 8);
            uStack_40 = (u32)uVar26;
            fStack_3c = (float)((u64)uVar26 >> 0x20);
            in_xd2 = (double)CONCAT44(fStack_44, fStack_48);
            in_xd4 = (double)CONCAT44(fStack_38, fStack_3c);
            fVar17 = fStack_44;
            dVar19 = in_xd2;
        }
        if (cVar28 == '\0') {
            bVar27 = SUB84(dVar19, 0) < SUB84(dVar20, 0) + SUB84(dVar25, 0);
        } else {
            bVar27 = dVar19 < dVar20 + dVar25;
        }
        if (bVar27) {
        LAB_8c212b84:
            if (cVar29 == '\0') {
                dVar20 = (double)CONCAT44(fStack_3c, fStack_38);
                dVar19 = (double)CONCAT44(fStack_48, fStack_44);
            } else {
                dVar20 = (double)CONCAT44(fStack_38, fStack_3c);
                dVar19 = (double)CONCAT44(fStack_44, fStack_48);
                in_xd4 = (double)CONCAT44(uStack_34, fStack_38);
                in_xd2 = (double)CONCAT44(uStack_40, fStack_44);
            }
            fVar17 = (float)((u64)dVar20 >> 0x20);
            if (cVar28 == '\0') {
                fVar21 = (float)((u64)dVar19 >> 0x20) - fVar17;
                dVar19 = (double)CONCAT44(fVar21, (SUB84(dVar19, 0) - SUB84(dVar20, 0)) / fVar21);
            } else {
                dVar19 = (dVar19 - dVar20) - dVar20;
                dVar19 = dVar19 / dVar19;
            }
            if (cVar29 == '\0') {
                ppdVar15[6] = (double *)SUB84(dVar19, 0);
            } else {
                *(double *)(ppdVar15 + 6) = in_xd2;
            }
            if (cVar28 == '\0') {
                dVar19 = (double)CONCAT44((int)((u64)dVar19 >> 0x20), SUB84(dVar19, 0) * fVar17);
            } else {
                dVar19 = dVar19 * dVar20;
            }
            if (cVar28 == '\0') {
                fVar17 = -SUB84(dVar19, 0) + SUB84(dVar20, 0);
            } else {
                fVar17 = SUB84((double)CONCAT44((int)((u64)dVar19 >> 0x20), -SUB84(dVar19, 0)) + dVar20, 0);
            }
            if (cVar29 == '\0') {
                ppdVar15[0x11] = (double *)fVar17;
            } else {
                *(double *)(ppdVar15 + 0x11) = in_xd2;
            }
            ppdVar15[4] = NULL;
        } else {
            if (cVar29 == '\0') {
                dVar20 = (double)CONCAT44(fVar17, 0x3ccccccd);
            } else {
                in_xd2 = -7.993607630185699e-16;
                dVar20 = dVar19;
            }
            if (cVar28 == '\0') {
                bVar27 = (float)((u64)dVar20 >> 0x20) + SUB84(dVar20, 0) < SUB84(dVar19, 0);
            } else {
                bVar27 = dVar20 + dVar20 < dVar19;
            }
            if (bVar27)
                goto LAB_8c212b84;
            if (cVar29 == '\0') {
                ppdVar15[0x16] = (double *)fStack_3c;
            } else {
                in_xd2 = (double)CONCAT44(fStack_38, fStack_3c);
                *(double *)(ppdVar15 + 0x16) = in_xd2;
            }
            ppdVar15[4] = (double *)0x1;
        }
        if (cVar29 == '\0') {
            dVar20 = (double)CONCAT44(fStack_3c, fStack_48);
        } else {
            in_xd2 = (double)CONCAT44(fStack_44, fStack_48);
            dVar20 = (double)CONCAT44(fStack_38, fStack_3c);
        }
        if (cVar28 == '\0') {
            dVar20 = (double)CONCAT44(((float)((u64)dVar20 >> 0x20) + SUB84(dVar20, 0)) * SUB84(dVar24, 0),
                                      SUB84(dVar20, 0));
        } else {
            dVar20 = (dVar20 + dVar20) * dVar24;
        }
        if (cVar29 == '\0') {
            ppdVar15[0x5d] = (double *)(int)((u64)dVar20 >> 0x20);
            dVar20 = (double)CONCAT44(fStack_38, fStack_44);
        } else {
            *(double *)(ppdVar15 + 0x5d) = dVar20;
            dVar20 = (double)CONCAT44(uStack_34, fStack_38);
            in_xd2 = (double)CONCAT44(uStack_40, fStack_44);
        }
        if (cVar28 == '\0') {
            dVar20 = (double)CONCAT44(((float)((u64)dVar20 >> 0x20) + SUB84(dVar20, 0)) * SUB84(dVar24, 0),
                                      SUB84(dVar20, 0));
        } else {
            dVar20 = (dVar20 + dVar20) * dVar24;
        }
        iVar3 = (int)((u64)dVar20 >> 0x20);
        if (cVar29 == '\0') {
            ppdVar15[0x5e] = (double *)iVar3;
        } else {
            *(double *)(ppdVar15 + 0x5e) = dVar20;
        }
        iVar5 = (int)ppdVar15[1];
        if (cVar29 == '\0') {
            fStack_54 = *(float *)(iVar5 + 0x24);
            fStack_50 = *(float *)(iVar5 + 0x28);
            dVar20 = (double)CONCAT44(iVar3, *(u32 *)(iVar5 + 0x2c));
            uStack_4c = *(u32 *)(iVar5 + 0x2c);
        } else {
            fStack_54 = (float)*(u64 *)(iVar5 + 0x24);
            fStack_50 = (float)*(u64 *)(iVar5 + 0x28);
            in_xd2 = *(double *)(iVar5 + 0x2c);
            uStack_4c = SUB84(in_xd2, 0);
            fStack_48 = (float)((u64)in_xd2 >> 0x20);
        }
        ppdVar15[3] = NULL;
        ppdVar15[0xe] = (double *)(u32)(ppdVar15[4] == NULL);
        do {
            a0 = *(double **)((int)ppdVar15 + 4);
            iVar3 = *(int *)((int)ppdVar15 + 0xc);
            if (cVar29 == '\0') {
                fStack_60 = *(float *)((int)a0 + iVar3);
                fStack_5c = *(float *)((int)a0 + iVar3 + 4);
                uStack_58 = *(u32 *)((int)a0 + iVar3 + 8);
                dVar19 = (double)CONCAT44(fStack_54, fStack_60);
                dVar20 = (double)CONCAT44((int)((u64)dVar20 >> 0x20), fStack_60);
                fVar17 = fStack_60;
            } else {
                fStack_60 = (float)*(u64 *)((int)a0 + iVar3);
                fStack_5c = (float)*(u64 *)((int)a0 + iVar3 + 4);
                uVar26 = *(u64 *)((int)a0 + iVar3 + 8);
                uStack_58 = (u32)uVar26;
                fStack_54 = (float)((u64)uVar26 >> 0x20);
                in_xd2 = (double)CONCAT44(fStack_5c, fStack_60);
                dVar19 = (double)CONCAT44(fStack_50, fStack_54);
                fVar17 = fStack_54;
                in_xd4 = in_xd2;
            }
            fVar21 = (float)((u64)dVar19 >> 0x20);
            if (cVar28 == '\0') {
                bVar27 = fVar21 < SUB84(dVar20, 0) + SUB84(dVar25, 0);
            } else {
                bVar27 = dVar19 < dVar20 + dVar25;
            }
            iVar3 = 0;
            if (bVar27) {
            LAB_8c212c46:
                if (cVar29 == '\0') {
                    dVar19 = (double)CONCAT44(fStack_54, fStack_50);
                    dVar20 = (double)CONCAT44(fStack_60, fStack_5c);
                } else {
                    dVar19 = (double)CONCAT44(fStack_50, fStack_54);
                    dVar20 = (double)CONCAT44(fStack_5c, fStack_60);
                    in_xd4 = (double)CONCAT44(uStack_4c, fStack_50);
                    in_xd2 = (double)CONCAT44(uStack_58, fStack_5c);
                }
                fVar17 = (float)((u64)dVar19 >> 0x20);
                if (cVar28 == '\0') {
                    fVar21 = (float)((u64)dVar20 >> 0x20) - fVar17;
                    dVar20 = (double)CONCAT44(fVar21, (SUB84(dVar20, 0) - SUB84(dVar19, 0)) / fVar21);
                } else {
                    dVar20 = (dVar20 - dVar19) - dVar19;
                    dVar20 = dVar20 / dVar20;
                }
                if (cVar29 == '\0') {
                    *(float *)((int)ppdVar15 + 0x20) = SUB84(dVar20, 0);
                } else {
                    *(double *)((int)ppdVar15 + 0x20) = in_xd2;
                }
                if (cVar28 == '\0') {
                    dVar20 = (double)CONCAT44((int)((u64)dVar20 >> 0x20), SUB84(dVar20, 0) * fVar17);
                } else {
                    dVar20 = dVar20 * dVar19;
                }
                if (cVar28 == '\0') {
                    fVar17 = -SUB84(dVar20, 0) + SUB84(dVar19, 0);
                } else {
                    fVar17 = SUB84((double)CONCAT44((int)((u64)dVar20 >> 0x20), -SUB84(dVar20, 0)) + dVar19, 0);
                }
                if (cVar29 == '\0') {
                    *(float *)((int)ppdVar15 + 0x5c) = fVar17;
                } else {
                    *(double *)((int)ppdVar15 + 0x5c) = in_xd2;
                }
                iVar5 = 0;
            } else {
                if (cVar29 == '\0') {
                    dVar20 = (double)CONCAT44(fVar17, 0x3ccccccd);
                } else {
                    in_xd2 = 6.712045148555942e-134;
                    dVar20 = in_xd4;
                }
                if (cVar28 == '\0') {
                    fVar17 = (float)((u64)dVar20 >> 0x20) + SUB84(dVar20, 0);
                    dVar20 = (double)CONCAT44(fVar17, SUB84(dVar20, 0));
                    bVar27 = fVar17 < fVar21;
                } else {
                    dVar20 = dVar20 + dVar20;
                    bVar27 = dVar20 < dVar19;
                }
                if (bVar27)
                    goto LAB_8c212c46;
                fVar17 = fStack_54;
                if (cVar29 != '\0') {
                    in_xd2 = (double)CONCAT44(fStack_50, fStack_54);
                    fVar17 = SUB84(dVar20, 0);
                }
                iVar5 = 1;
                if (cVar29 == '\0') {
                    *(float *)((int)ppdVar15 + 0x6c) = fVar17;
                } else {
                    *(double *)((int)ppdVar15 + 0x6c) = in_xd2;
                }
            }
            uVar1 = SUB84(dVar24, 0);
            if (*(int *)((int)ppdVar15 + 0x38) == 0) {
                if (iVar5 != 0)
                    goto LAB_8c212ccc;
                if (cVar29 == '\0') {
                    dVar20 = (double)CONCAT44(*(u32 *)((int)ppdVar15 + 0x58), *(u32 *)((int)ppdVar15 + 0x5c));
                    in_dr0 = (double)CONCAT44(*(u32 *)((int)ppdVar15 + 0x20), SUB84(in_dr0, 0));
                    dVar24 = (double)CONCAT44(*(u32 *)((int)ppdVar15 + 0x58), uVar1);
                } else {
                    dVar20 = *(double *)((int)ppdVar15 + 0x58);
                    in_xd2 = *(double *)((int)ppdVar15 + 0x5c);
                    in_dr0 = *(double *)((int)ppdVar15 + 0x20);
                    dVar24 = dVar20;
                }
            LAB_8c212ce0:
                if (cVar28 == '\0') {
                    dVar20 = (double)(u64)(u32)((float)((u64)in_dr0 >> 0x20) * (float)((u64)dVar20 >> 0x20) +
                                                SUB84(dVar20, 0));
                }
                if (cVar29 == '\0') {
                    *(int *)((int)ppdVar15 + 0x2c) = SUB84(dVar20, 0);
                } else {
                    *(double *)((int)ppdVar15 + 0x2c) = in_xd2;
                }
            } else {
                if (iVar5 == 0) {
                    if (cVar29 == '\0') {
                        dVar20 = (double)CONCAT44(*(u32 *)((int)ppdVar15 + 0x18), *(u32 *)((int)ppdVar15 + 0x20));
                    } else {
                        in_xd2 = *(double *)((int)ppdVar15 + 0x20);
                        dVar20 = *(double *)((int)ppdVar15 + 0x18);
                    }
                    if (cVar28 == '\0') {
                        dVar20 = (double)CONCAT44((int)((u64)dVar20 >> 0x20), SUB84(dVar20, 0) + SUB84(dVar25, 0));
                    } else {
                        dVar20 = dVar20 + dVar25;
                    }
                    fVar17 = (float)((u64)dVar20 >> 0x20);
                    if (cVar28 != '\0' || SUB84(dVar20, 0) <= fVar17) {
                        if (cVar29 == '\0') {
                            dVar20 = (double)CONCAT44(fVar17, 0x3ccccccd);
                            in_dr0 = (double)CONCAT44((int)((u64)in_dr0 >> 0x20), *(u32 *)((int)ppdVar15 + 0x20));
                        } else {
                            in_xd2 = 6.712045148555942e-134;
                        }
                        if (cVar28 == '\0') {
                            fVar17 = SUB84(in_dr0, 0) + SUB84(dVar20, 0);
                            in_dr0 = (double)CONCAT44((int)((u64)in_dr0 >> 0x20), fVar17);
                            bVar27 = fVar17 < (float)((u64)dVar20 >> 0x20);
                        } else {
                            in_dr0 = in_dr0 + dVar20;
                            bVar27 = in_dr0 < dVar20;
                        }
                        if (!bVar27)
                            goto LAB_8c212cf0;
                    }
                    if (cVar29 == '\0') {
                        dVar20 = (double)CONCAT44(*(u32 *)((int)ppdVar15 + 0x5c), *(u32 *)((int)ppdVar15 + 0x44));
                        dVar16 = (double)CONCAT44(*(u32 *)((int)ppdVar15 + 0x18), *(u32 *)((int)ppdVar15 + 0x20));
                    } else {
                        in_xd2 = *(double *)((int)ppdVar15 + 0x44);
                        dVar20 = *(double *)((int)ppdVar15 + 0x5c);
                        dVar16 = *(double *)((int)ppdVar15 + 0x18);
                    }
                    if (cVar28 == '\0') {
                        dVar20 = (double)CONCAT44((float)((u64)dVar20 >> 0x20) - SUB84(dVar20, 0), SUB84(dVar20, 0));
                        dVar16 = (double)CONCAT44((float)((u64)dVar16 >> 0x20) - SUB84(dVar16, 0), SUB84(dVar16, 0));
                    } else {
                        dVar20 = dVar20 - dVar20;
                        dVar16 = dVar16 - dVar16;
                    }
                    dVar24 = dVar20;
                    if (cVar29 == '\0') {
                        dVar24 = (double)CONCAT44((int)((u64)dVar20 >> 0x20), uVar1);
                    }
                    if (cVar28 == '\0') {
                        dVar24 = (double)CONCAT44((float)((u64)dVar24 >> 0x20) / (float)((u64)dVar16 >> 0x20),
                                                  SUB84(dVar24, 0));
                    } else {
                        dVar24 = dVar24 / dVar16;
                    }
                    if (cVar29 == '\0') {
                        dVar20 = (double)CONCAT44(*(u32 *)((int)ppdVar15 + 0x18), SUB84(dVar20, 0));
                        in_dr0 = (double)CONCAT44((int)((u64)dVar24 >> 0x20), SUB84(dVar16, 0));
                    } else {
                        dVar20 = *(double *)((int)ppdVar15 + 0x18);
                        in_dr0 = dVar24;
                    }
                    goto LAB_8c212ce0;
                }
            LAB_8c212ccc:
                if (*(int *)((int)ppdVar15 + 0x10) == 0) {
                    if (cVar29 == '\0') {
                        dVar20 = (double)CONCAT44(*(u32 *)((int)ppdVar15 + 0x18), *(u32 *)((int)ppdVar15 + 0x44));
                        in_dr0 = (double)CONCAT44(*(u32 *)((int)ppdVar15 + 0x6c), SUB84(in_dr0, 0));
                        dVar24 = (double)CONCAT44(*(u32 *)((int)ppdVar15 + 0x6c), uVar1);
                    } else {
                        in_xd2 = *(double *)((int)ppdVar15 + 0x44);
                        dVar20 = *(double *)((int)ppdVar15 + 0x18);
                        in_dr0 = *(double *)((int)ppdVar15 + 0x6c);
                        dVar24 = *(double *)((int)ppdVar15 + 0x6c);
                    }
                    goto LAB_8c212ce0;
                }
            LAB_8c212cf0:
                iVar3 = 1;
            }
            if (iVar3 == 0) {
                *(u32 *)((int)ppdVar15 + 0x3c) = 0;
                *(u32 *)((int)ppdVar15 + 0x40) = 0;
                if (cVar29 == '\0') {
                    dVar20 = (double)CONCAT44(fStack_3c, SUB84(in_dr0, 0));
                } else {
                    dVar20 = (double)CONCAT44(fStack_38, fStack_3c);
                }
                if (cVar28 == '\0') {
                    dVar20 =
                        (double)CONCAT44((float)((u64)dVar20 >> 0x20) - (float)((u64)dVar24 >> 0x20), SUB84(dVar20, 0));
                } else {
                    dVar20 = dVar20 - dVar24;
                }
                uVar2 = (u32)((u64)dVar20 >> 0x20);
                if (cVar29 == '\0') {
                    *(u32 *)((int)ppdVar15 + 0x80) = uVar2;
                    puVar12 = (u64 *)((int)ppdVar15 + -4);
                    *(u32 *)((int)ppdVar15 + -4) = uVar2;
                    dVar16 = (double)CONCAT44(fStack_38, *(u32 *)((int)ppdVar15 + 0x2c));
                } else {
                    *(double *)((int)ppdVar15 + 0x80) = dVar20;
                    puVar12 = (u64 *)((int)ppdVar15 + -8);
                    *(double *)((int)ppdVar15 + -8) = dVar20;
                    in_xd2 = *(double *)((int)ppdVar15 + 0x28);
                    dVar16 = (double)CONCAT44(uStack_34, fStack_38);
                }
                if (cVar28 == '\0') {
                    dVar16 = (double)CONCAT44((float)((u64)dVar16 >> 0x20) - SUB84(dVar16, 0), SUB84(dVar16, 0));
                } else {
                    dVar16 = dVar16 - dVar16;
                }
                if (cVar29 == '\0') {
                    dVar20 = (double)(u64)uVar2;
                    uVar1 = (u32)((u64)dVar16 >> 0x20);
                    dVar16 = (double)CONCAT44(uVar1, uVar1);
                    *(u32 *)((int)puVar12 + 0x94) = uVar1;
                } else {
                    *(double *)((int)puVar12 + 0x94) = dVar16;
                    in_xd2 = dVar16;
                }
                if (cVar28 == '\0') {
                    uVar2 = SUB84(dVar16, 0);
                } else {
                    uVar2 = SUB84(dVar16 * dVar16, 0);
                }
                if (cVar29 == '\0') {
                    uVar26 = CONCAT44(*(u32 *)puVar12, SUB84(dVar20, 0));
                    puVar12 = (u64 *)((int)puVar12 + 4);
                    uVar2 = SUB84(dVar19, 0);
                } else {
                    uVar26 = *puVar12;
                    puVar12 = puVar12 + 1;
                }
                noop_fr4_test(0, iVar5, a0, a1);
                if (cVar29 == '\0') {
                    *(int *)((int)puVar12 + 0x128) = (int)((u64)uVar26 >> 0x20);
                    dVar20 = (double)CONCAT44(fStack_48, (int)uVar26);
                } else {
                    *(u64 *)((int)puVar12 + 0x128) = uVar26;
                    dVar20 = (double)CONCAT44(fStack_44, fStack_48);
                }
                if (cVar28 == '\0') {
                    dVar20 =
                        (double)CONCAT44((float)((u64)dVar20 >> 0x20) - (float)((u64)dVar24 >> 0x20), SUB84(dVar20, 0));
                } else {
                    dVar20 = dVar20 - dVar24;
                }
                uVar18 = (u32)((u64)dVar20 >> 0x20);
                if (cVar29 == '\0') {
                    *(u32 *)((int)puVar12 + 0xb8) = uVar18;
                    puVar7 = (u64 *)((int)puVar12 + -4);
                    *(u32 *)((int)puVar12 + -4) = uVar18;
                    dVar19 = (double)CONCAT44(fStack_44, *(u32 *)((int)puVar12 + 0x2c));
                } else {
                    *(double *)((int)puVar12 + 0xb8) = dVar20;
                    puVar7 = (u64 *)((int)puVar12 + -8);
                    *(double *)((int)puVar12 + -8) = dVar20;
                    in_xd2 = *(double *)((int)puVar12 + 0x28);
                    dVar19 = (double)CONCAT44(uStack_40, fStack_44);
                }
                if (cVar28 == '\0') {
                    dVar19 = (double)CONCAT44((float)((u64)dVar19 >> 0x20) - SUB84(dVar19, 0), SUB84(dVar19, 0));
                } else {
                    dVar19 = dVar19 - dVar19;
                }
                fVar17 = (float)((u64)dVar19 >> 0x20);
                if (cVar29 == '\0') {
                    dVar20 = (double)(u64)uVar18;
                    dVar19 = (double)CONCAT44(fVar17, fVar17);
                    *(float *)(puVar7 + 0x17) = fVar17;
                } else {
                    puVar7[0x17] = dVar19;
                    in_xd2 = dVar19;
                }
                if (cVar28 == '\0') {
                    dVar19 = (double)CONCAT44(fVar17 * SUB84(dVar19, 0), SUB84(dVar19, 0));
                } else {
                    dVar19 = dVar19 * dVar19;
                }
                if (cVar29 == '\0') {
                    uVar26 = CONCAT44(*(u32 *)puVar7, SUB84(dVar20, 0));
                    puVar8 = (u64 *)((int)puVar7 + 4);
                } else {
                    uVar26 = *puVar7;
                    puVar8 = puVar7 + 1;
                }
                if (cVar28 == '\0') {
                    dVar19 = (double)CONCAT44(
                        (float)((u64)uVar26 >> 0x20) * (float)uVar26 + (float)((u64)dVar19 >> 0x20), SUB84(dVar19, 0));
                }
                dVar20 = dVar19;
                if (cVar29 == '\0') {
                    dVar20 = (double)(u64)uVar2;
                }
                uVar1 = SUB84(dVar20, 0);
                noop_fr4_test(iVar3, iVar5, a0, a1);
                if (cVar29 == '\0') {
                    *(int *)((int)puVar8 + 0x118) = (int)((u64)uVar26 >> 0x20);
                    dVar20 = (double)CONCAT44(fStack_3c, (int)uVar26);
                    dVar19 = (double)CONCAT44((int)((u64)dVar19 >> 0x20), fStack_48);
                } else {
                    *(u64 *)((int)puVar8 + 0x118) = uVar26;
                    dVar20 = (double)CONCAT44(fStack_38, fStack_3c);
                    in_xd2 = (double)CONCAT44(fStack_44, fStack_48);
                }
                if (cVar28 == '\0') {
                    dVar20 = (double)CONCAT44((float)((u64)dVar20 >> 0x20) - SUB84(dVar19, 0), SUB84(dVar20, 0));
                } else {
                    dVar20 = dVar20 - dVar19;
                }
                uVar2 = (u32)((u64)dVar20 >> 0x20);
                if (cVar29 == '\0') {
                    *(u32 *)((int)puVar8 + 0x10c) = uVar2;
                    pdVar6 = (double *)((int)puVar8 + -4);
                    *(u32 *)((int)puVar8 + -4) = uVar2;
                    dVar19 = (double)CONCAT44(fStack_38, fStack_44);
                } else {
                    *(double *)((int)puVar8 + 0x10c) = dVar20;
                    pdVar6 = (double *)((int)puVar8 + -8);
                    *(double *)((int)puVar8 + -8) = dVar20;
                    in_xd2 = (double)CONCAT44(uStack_40, fStack_44);
                    dVar19 = (double)CONCAT44(uStack_34, fStack_38);
                }
                if (cVar28 == '\0') {
                    dVar19 = (double)CONCAT44((float)((u64)dVar19 >> 0x20) - SUB84(dVar19, 0), SUB84(dVar19, 0));
                } else {
                    dVar19 = dVar19 - dVar19;
                }
                if (cVar29 == '\0') {
                    dVar20 = (double)(u64)uVar2;
                    uVar22 = (u32)((u64)dVar19 >> 0x20);
                    dVar19 = (double)CONCAT44(uVar22, uVar22);
                    *(u32 *)(pdVar6 + 0x1d) = uVar22;
                } else {
                    pdVar6[0x1d] = dVar19;
                    in_xd2 = dVar19;
                }
                if (cVar28 == '\0') {
                    uVar22 = SUB84(dVar19, 0);
                } else {
                    uVar22 = SUB84(dVar19 * dVar19, 0);
                }
                if (cVar29 == '\0') {
                    dVar20 = (double)CONCAT44(*(u32 *)pdVar6, SUB84(dVar20, 0));
                    pdVar6 = (double *)((int)pdVar6 + 4);
                    uVar22 = uVar1;
                } else {
                    dVar20 = *pdVar6;
                    pdVar6 = pdVar6 + 1;
                }
                noop_fr4_test(iVar3, iVar5, a0, a1);
                dVar19 = dVar20;
                if (cVar29 == '\0') {
                    dVar19 = (double)CONCAT44((int)((u64)dVar20 >> 0x20), uVar22);
                }
                if (cVar28 == '\0') {
                    dVar19 =
                        (double)CONCAT44((float)((u64)dVar19 >> 0x20) + (float)((u64)dVar25 >> 0x20), SUB84(dVar19, 0));
                } else {
                    dVar19 = dVar19 + dVar25;
                }
                if (cVar29 == '\0') {
                    dVar16 = (double)CONCAT44(*(u32 *)((int)pdVar6 + 0x128), *(u32 *)((int)pdVar6 + 0x118));
                } else {
                    in_xd2 = *(double *)((int)pdVar6 + 0x118);
                    dVar16 = *(double *)((int)pdVar6 + 0x128);
                }
                if (cVar28 == '\0') {
                    bVar27 = (float)((u64)dVar19 >> 0x20) <
                             (float)((u64)dVar16 >> 0x20) + SUB84(dVar16, 0) + SUB84(dVar25, 0);
                } else {
                    bVar27 = dVar19 < dVar16 + dVar16 + dVar25;
                }
                if (!bVar27) {
                    *(u32 *)((int)pdVar6 + 0x3c) = 1;
                }
                if (cVar29 == '\0') {
                    dVar20 = (double)CONCAT44(fStack_54, SUB84(dVar20, 0));
                } else {
                    dVar20 = (double)CONCAT44(fStack_50, fStack_54);
                }
                if (cVar28 == '\0') {
                    dVar20 =
                        (double)CONCAT44((float)((u64)dVar20 >> 0x20) - (float)((u64)dVar24 >> 0x20), SUB84(dVar20, 0));
                } else {
                    dVar20 = dVar20 - dVar24;
                }
                uVar2 = (u32)((u64)dVar20 >> 0x20);
                if (cVar29 == '\0') {
                    *(u32 *)((int)pdVar6 + 0xa4) = uVar2;
                    puVar12 = (u64 *)((int)pdVar6 + -4);
                    *(u32 *)((int)pdVar6 + -4) = uVar2;
                    dVar16 = (double)CONCAT44(fStack_50, *(u32 *)((int)pdVar6 + 0x2c));
                } else {
                    *(double *)((int)pdVar6 + 0xa4) = dVar20;
                    puVar12 = (u64 *)((int)pdVar6 + -8);
                    *(double *)((int)pdVar6 + -8) = dVar20;
                    in_xd2 = *(double *)((int)pdVar6 + 0x28);
                    dVar16 = (double)CONCAT44(uStack_4c, fStack_50);
                }
                if (cVar28 == '\0') {
                    dVar16 = (double)CONCAT44((float)((u64)dVar16 >> 0x20) - SUB84(dVar16, 0), SUB84(dVar16, 0));
                } else {
                    dVar16 = dVar16 - dVar16;
                }
                if (cVar29 == '\0') {
                    dVar20 = (double)(u64)uVar2;
                    uVar1 = (u32)((u64)dVar16 >> 0x20);
                    dVar16 = (double)CONCAT44(uVar1, uVar1);
                    *(u32 *)((int)puVar12 + 0xac) = uVar1;
                } else {
                    *(double *)((int)puVar12 + 0xac) = dVar16;
                    in_xd2 = dVar16;
                }
                if (cVar28 == '\0') {
                    uVar2 = SUB84(dVar16, 0);
                } else {
                    uVar2 = SUB84(dVar16 * dVar16, 0);
                }
                if (cVar29 == '\0') {
                    uVar26 = CONCAT44(*(u32 *)puVar12, SUB84(dVar20, 0));
                    puVar12 = (u64 *)((int)puVar12 + 4);
                    uVar2 = SUB84(dVar19, 0);
                } else {
                    uVar26 = *puVar12;
                    puVar12 = puVar12 + 1;
                }
                noop_fr4_test(iVar3, iVar5, a0, a1);
                if (cVar29 == '\0') {
                    *(int *)((int)puVar12 + 300) = (int)((u64)uVar26 >> 0x20);
                    dVar20 = (double)CONCAT44(fStack_60, (int)uVar26);
                } else {
                    *(u64 *)((int)puVar12 + 300) = uVar26;
                    dVar20 = (double)CONCAT44(fStack_5c, fStack_60);
                }
                if (cVar28 == '\0') {
                    dVar20 =
                        (double)CONCAT44((float)((u64)dVar20 >> 0x20) - (float)((u64)dVar24 >> 0x20), SUB84(dVar20, 0));
                } else {
                    dVar20 = dVar20 - dVar24;
                }
                uVar18 = (u32)((u64)dVar20 >> 0x20);
                if (cVar29 == '\0') {
                    *(u32 *)((int)puVar12 + 0xd0) = uVar18;
                    puVar7 = (u64 *)((int)puVar12 + -4);
                    *(u32 *)((int)puVar12 + -4) = uVar18;
                    dVar19 = (double)CONCAT44(fStack_5c, *(u32 *)((int)puVar12 + 0x2c));
                } else {
                    *(double *)((int)puVar12 + 0xd0) = dVar20;
                    puVar7 = (u64 *)((int)puVar12 + -8);
                    *(double *)((int)puVar12 + -8) = dVar20;
                    in_xd2 = *(double *)((int)puVar12 + 0x28);
                    dVar19 = (double)CONCAT44(uStack_58, fStack_5c);
                }
                if (cVar28 == '\0') {
                    dVar19 = (double)CONCAT44((float)((u64)dVar19 >> 0x20) - SUB84(dVar19, 0), SUB84(dVar19, 0));
                } else {
                    dVar19 = dVar19 - dVar19;
                }
                fVar17 = (float)((u64)dVar19 >> 0x20);
                if (cVar29 == '\0') {
                    dVar20 = (double)(u64)uVar18;
                    dVar19 = (double)CONCAT44(fVar17, fVar17);
                    *(float *)((int)puVar7 + 0xb4) = fVar17;
                } else {
                    *(double *)((int)puVar7 + 0xb4) = dVar19;
                    in_xd2 = dVar19;
                }
                if (cVar28 == '\0') {
                    dVar19 = (double)CONCAT44(fVar17 * SUB84(dVar19, 0), SUB84(dVar19, 0));
                } else {
                    dVar19 = dVar19 * dVar19;
                }
                if (cVar29 == '\0') {
                    uVar26 = CONCAT44(*(u32 *)puVar7, SUB84(dVar20, 0));
                    puVar9 = (u64 *)((int)puVar7 + 4);
                } else {
                    uVar26 = *puVar7;
                    puVar9 = puVar7 + 1;
                }
                if (cVar28 == '\0') {
                    dVar19 = (double)CONCAT44(
                        (float)((u64)uVar26 >> 0x20) * (float)uVar26 + (float)((u64)dVar19 >> 0x20), SUB84(dVar19, 0));
                }
                dVar20 = dVar19;
                if (cVar29 == '\0') {
                    dVar20 = (double)(u64)uVar2;
                }
                uVar1 = SUB84(dVar20, 0);
                noop_fr4_test(iVar3, iVar5, a0, a1);
                if (cVar29 == '\0') {
                    *(int *)((int)puVar9 + 0x124) = (int)((u64)uVar26 >> 0x20);
                    dVar20 = (double)CONCAT44(fStack_54, (int)uVar26);
                    dVar19 = (double)CONCAT44((int)((u64)dVar19 >> 0x20), fStack_60);
                } else {
                    *(u64 *)((int)puVar9 + 0x124) = uVar26;
                    dVar20 = (double)CONCAT44(fStack_50, fStack_54);
                    in_xd2 = (double)CONCAT44(fStack_5c, fStack_60);
                }
                if (cVar28 == '\0') {
                    dVar20 = (double)CONCAT44((float)((u64)dVar20 >> 0x20) - SUB84(dVar19, 0), SUB84(dVar20, 0));
                } else {
                    dVar20 = dVar20 - dVar19;
                }
                uVar2 = (u32)((u64)dVar20 >> 0x20);
                if (cVar29 == '\0') {
                    *(u32 *)((int)puVar9 + 0x100) = uVar2;
                    pdVar6 = (double *)((int)puVar9 + -4);
                    *(u32 *)((int)puVar9 + -4) = uVar2;
                    dVar19 = (double)CONCAT44(fStack_50, fStack_5c);
                } else {
                    *(double *)((int)puVar9 + 0x100) = dVar20;
                    pdVar6 = (double *)((int)puVar9 + -8);
                    *(double *)((int)puVar9 + -8) = dVar20;
                    in_xd2 = (double)CONCAT44(uStack_58, fStack_5c);
                    dVar19 = (double)CONCAT44(uStack_4c, fStack_50);
                }
                if (cVar28 == '\0') {
                    dVar19 = (double)CONCAT44((float)((u64)dVar19 >> 0x20) - SUB84(dVar19, 0), SUB84(dVar19, 0));
                } else {
                    dVar19 = dVar19 - dVar19;
                }
                if (cVar29 == '\0') {
                    dVar20 = (double)(u64)uVar2;
                    uVar22 = (u32)((u64)dVar19 >> 0x20);
                    dVar19 = (double)CONCAT44(uVar22, uVar22);
                    *(u32 *)((int)pdVar6 + 0xec) = uVar22;
                } else {
                    *(double *)((int)pdVar6 + 0xec) = dVar19;
                    in_xd2 = dVar19;
                }
                if (cVar28 == '\0') {
                    uVar22 = SUB84(dVar19, 0);
                } else {
                    uVar22 = SUB84(dVar19 * dVar19, 0);
                }
                if (cVar29 == '\0') {
                    in_dr0 = (double)CONCAT44(*(u32 *)pdVar6, SUB84(dVar20, 0));
                    ppdVar15 = (double **)((int)pdVar6 + 4);
                    uVar22 = uVar1;
                } else {
                    in_dr0 = *pdVar6;
                    ppdVar15 = (double **)(pdVar6 + 1);
                }
                noop_fr4_test(iVar3, iVar5, a0, a1);
                dVar19 = in_dr0;
                if (cVar29 == '\0') {
                    dVar19 = (double)CONCAT44((int)((u64)in_dr0 >> 0x20), uVar22);
                }
                if (cVar28 == '\0') {
                    dVar19 =
                        (double)CONCAT44((float)((u64)dVar19 >> 0x20) + (float)((u64)dVar25 >> 0x20), SUB84(dVar19, 0));
                } else {
                    dVar19 = dVar19 + dVar25;
                }
                if (cVar29 == '\0') {
                    dVar20 = (double)CONCAT44(*(u32 *)((int)ppdVar15 + 300), *(u32 *)((int)ppdVar15 + 0x124));
                } else {
                    in_xd2 = *(double *)((int)ppdVar15 + 0x124);
                    dVar20 = *(double *)((int)ppdVar15 + 300);
                }
                if (cVar28 == '\0') {
                    fVar17 = (float)((u64)dVar20 >> 0x20) + SUB84(dVar20, 0) + SUB84(dVar25, 0);
                    dVar20 = (double)CONCAT44(fVar17, SUB84(dVar20, 0));
                    bVar27 = (float)((u64)dVar19 >> 0x20) < fVar17;
                } else {
                    dVar20 = dVar20 + dVar20 + dVar25;
                    bVar27 = dVar19 < dVar20;
                }
                if (!bVar27) {
                    *(u32 *)((int)ppdVar15 + 0x40) = 1;
                }
                if ((*(int *)((int)ppdVar15 + 0x3c) != 0) && (*(int *)((int)ppdVar15 + 0x40) != 0)) {
                    *(u32 *)((int)ppdVar15 + 0x7c) = 1;
                    break;
                }
            }
            if (cVar29 == '\0') {
                fStack_54 = fStack_60;
                fStack_50 = fStack_5c;
                dVar20 = (double)CONCAT44(fStack_5c, uStack_58);
                uStack_4c = uStack_58;
            } else {
                fStack_54 = fStack_60;
                dVar20 = (double)CONCAT44(uStack_58, fStack_5c);
                fStack_50 = fStack_5c;
                in_xd2 = (double)CONCAT44(fStack_60, uStack_58);
                uStack_4c = uStack_58;
                fStack_48 = fStack_60;
            }
            uStack_4c = uStack_58;
            fStack_50 = fStack_5c;
            fStack_54 = fStack_60;
            iVar3 = *(int *)((int)ppdVar15 + 0xc);
            *(u32 *)((int)ppdVar15 + 0xc) = iVar3 + 0xcU;
        } while (iVar3 + 0xcU < 0x30);
        if (*(int *)((int)ppdVar15 + 0x7c) != 0)
            break;
        if (cVar29 == '\0') {
            fStack_3c = fStack_48;
            fStack_38 = fStack_44;
            dVar20 = (double)CONCAT44(fStack_44, uStack_40);
            uStack_34 = uStack_40;
        } else {
            fStack_3c = fStack_48;
            dVar20 = (double)CONCAT44(uStack_40, fStack_44);
            fStack_38 = fStack_44;
            in_xd2 = (double)CONCAT44(fStack_48, uStack_40);
            uStack_34 = uStack_40;
            fStack_30 = fStack_48;
        }
        uStack_34 = uStack_40;
        fStack_38 = fStack_44;
        fStack_3c = fStack_48;
        uVar2 = *(int *)((int)ppdVar15 + 8) + 0xc;
    }
    iVar3 = (int)*ppdVar15;
    if (cVar29 == '\0') {
        fStack_3c = *(float *)(iVar3 + 0x24);
        fStack_38 = *(float *)(iVar3 + 0x28);
        dVar20 = (double)CONCAT44((int)((u64)dVar20 >> 0x20), *(u32 *)(iVar3 + 0x2c));
        uStack_34 = *(u32 *)(iVar3 + 0x2c);
    } else {
        fStack_3c = (float)*(u64 *)(iVar3 + 0x24);
        fStack_38 = (float)*(u64 *)(iVar3 + 0x28);
        in_xd2 = *(double *)(iVar3 + 0x2c);
        uStack_34 = SUB84(in_xd2, 0);
        fStack_30 = (float)((u64)in_xd2 >> 0x20);
    }
    ppdVar15[2] = NULL;
    while (ppdVar15[2] < 0x30) {
        iVar5 = (int)*ppdVar15;
        iVar3 = (int)ppdVar15[2];
        if (cVar29 == '\0') {
            dVar20 = (double)CONCAT44((int)((u64)dVar20 >> 0x20), *(u32 *)(iVar5 + iVar3));
        } else {
            in_xd2 = *(double *)(iVar5 + iVar3);
        }
        if (cVar29 == '\0') {
            fStack_48 = SUB84(dVar20, 0);
            dVar20 = (double)CONCAT44((int)((u64)dVar20 >> 0x20), *(u32 *)(iVar5 + iVar3 + 4));
        } else {
            fStack_48 = SUB84(in_xd2, 0);
            in_xd2 = *(double *)(iVar5 + iVar3 + 4);
        }
        if (cVar29 == '\0') {
            fStack_44 = SUB84(dVar20, 0);
            uStack_40 = *(u32 *)(iVar5 + iVar3 + 8);
            dVar19 = (double)CONCAT44(fStack_3c, fStack_48);
            dVar20 = (double)CONCAT44((int)((u64)dVar20 >> 0x20), fStack_48);
            fVar17 = fStack_48;
        } else {
            fStack_44 = SUB84(in_xd2, 0);
            uVar26 = *(u64 *)(iVar5 + iVar3 + 8);
            uStack_40 = (u32)uVar26;
            fStack_3c = (float)((u64)uVar26 >> 0x20);
            in_xd2 = (double)CONCAT44(fStack_44, fStack_48);
            dVar19 = (double)CONCAT44(fStack_38, fStack_3c);
            fVar17 = fStack_3c;
            in_xd4 = in_xd2;
        }
        fVar21 = (float)((u64)dVar19 >> 0x20);
        if (cVar28 == '\0') {
            bVar27 = fVar21 < SUB84(dVar20, 0) + SUB84(dVar25, 0);
        } else {
            bVar27 = dVar19 < dVar20 + dVar25;
        }
        if (bVar27) {
        LAB_8c212ef2:
            if (cVar29 == '\0') {
                dVar20 = (double)CONCAT44(uStack_34, fStack_3c);
                dVar19 = (double)CONCAT44(fStack_48, uStack_40);
            } else {
                in_xd4 = (double)CONCAT44(fStack_38, fStack_3c);
                dVar19 = (double)CONCAT44(fStack_44, fStack_48);
                dVar20 = (double)CONCAT44(fStack_30, uStack_34);
                in_xd2 = (double)CONCAT44(fStack_3c, uStack_40);
            }
            fVar17 = (float)((u64)dVar20 >> 0x20);
            if (cVar28 == '\0') {
                fVar21 = (float)((u64)dVar19 >> 0x20) - SUB84(dVar20, 0);
                dVar19 = (double)CONCAT44(fVar21, (SUB84(dVar19, 0) - fVar17) / fVar21);
            } else {
                dVar19 = (dVar19 - dVar20) - dVar20;
                dVar19 = dVar19 / dVar19;
            }
            if (cVar29 == '\0') {
                ppdVar15[5] = (double *)SUB84(dVar19, 0);
            } else {
                *(double *)(ppdVar15 + 5) = in_xd2;
            }
            if (cVar28 == '\0') {
                dVar19 = (double)CONCAT44((int)((u64)dVar19 >> 0x20), SUB84(dVar19, 0) * SUB84(dVar20, 0));
            } else {
                dVar19 = dVar19 * dVar20;
            }
            if (cVar28 == '\0') {
                fVar17 = -SUB84(dVar19, 0) + fVar17;
            } else {
                fVar17 = SUB84((double)CONCAT44((int)((u64)dVar19 >> 0x20), -SUB84(dVar19, 0)) + dVar20, 0);
            }
            if (cVar29 == '\0') {
                ppdVar15[0x13] = (double *)fVar17;
            } else {
                *(double *)(ppdVar15 + 0x13) = in_xd2;
            }
            ppdVar15[4] = NULL;
        } else {
            if (cVar29 == '\0') {
                dVar20 = (double)CONCAT44(fVar17, 0x3ccccccd);
            } else {
                in_xd2 = -3.6367901170526095e+156;
                dVar20 = in_xd4;
            }
            if (cVar28 == '\0') {
                bVar27 = (float)((u64)dVar20 >> 0x20) + SUB84(dVar20, 0) < fVar21;
            } else {
                bVar27 = dVar20 + dVar20 < dVar19;
            }
            if (bVar27)
                goto LAB_8c212ef2;
            if (cVar29 == '\0') {
                ppdVar15[0x15] = (double *)fStack_3c;
            } else {
                in_xd2 = (double)CONCAT44(fStack_38, fStack_3c);
                *(double *)(ppdVar15 + 0x15) = in_xd2;
            }
            ppdVar15[4] = (double *)0x1;
        }
        if (cVar29 == '\0') {
            dVar20 = (double)CONCAT44(fStack_3c, fStack_48);
        } else {
            in_xd2 = (double)CONCAT44(fStack_44, fStack_48);
            dVar20 = (double)CONCAT44(fStack_38, fStack_3c);
        }
        if (cVar28 == '\0') {
            dVar20 = (double)CONCAT44(((float)((u64)dVar20 >> 0x20) + SUB84(dVar20, 0)) * SUB84(dVar24, 0),
                                      SUB84(dVar20, 0));
        } else {
            dVar20 = (dVar20 + dVar20) * dVar24;
        }
        if (cVar29 == '\0') {
            ppdVar15[0x5d] = (double *)(int)((u64)dVar20 >> 0x20);
            dVar20 = (double)CONCAT44(uStack_34, uStack_40);
        } else {
            *(double *)(ppdVar15 + 0x5d) = dVar20;
            dVar20 = (double)CONCAT44(fStack_30, uStack_34);
            in_xd2 = (double)CONCAT44(fStack_3c, uStack_40);
        }
        if (cVar28 == '\0') {
            dVar20 = (double)CONCAT44(((float)((u64)dVar20 >> 0x20) + SUB84(dVar20, 0)) * SUB84(dVar24, 0),
                                      SUB84(dVar20, 0));
        } else {
            dVar20 = (dVar20 + dVar20) * dVar24;
        }
        iVar3 = (int)((u64)dVar20 >> 0x20);
        if (cVar29 == '\0') {
            ppdVar15[0x5f] = (double *)iVar3;
        } else {
            *(double *)(ppdVar15 + 0x5f) = dVar20;
        }
        iVar5 = (int)ppdVar15[1];
        if (cVar29 == '\0') {
            fStack_54 = *(float *)(iVar5 + 0x24);
            fStack_50 = *(float *)(iVar5 + 0x28);
            dVar20 = (double)CONCAT44(iVar3, *(u32 *)(iVar5 + 0x2c));
            uStack_4c = *(u32 *)(iVar5 + 0x2c);
        } else {
            fStack_54 = (float)*(u64 *)(iVar5 + 0x24);
            fStack_50 = (float)*(u64 *)(iVar5 + 0x28);
            in_xd2 = *(double *)(iVar5 + 0x2c);
            uStack_4c = SUB84(in_xd2, 0);
            fStack_48 = (float)((u64)in_xd2 >> 0x20);
        }
        ppdVar15[3] = NULL;
        ppdVar15[0xe] = (double *)(u32)(ppdVar15[4] == NULL);
        do {
            a0 = *(double **)((int)ppdVar15 + 4);
            iVar3 = *(int *)((int)ppdVar15 + 0xc);
            if (cVar29 == '\0') {
                fStack_60 = *(float *)((int)a0 + iVar3);
                fStack_5c = *(float *)((int)a0 + iVar3 + 4);
                uStack_58 = *(u32 *)((int)a0 + iVar3 + 8);
                dVar19 = (double)CONCAT44(fStack_54, fStack_60);
                dVar20 = (double)CONCAT44((int)((u64)dVar20 >> 0x20), fStack_60);
                fVar17 = fStack_60;
            } else {
                fStack_60 = (float)*(u64 *)((int)a0 + iVar3);
                fStack_5c = (float)*(u64 *)((int)a0 + iVar3 + 4);
                uVar26 = *(u64 *)((int)a0 + iVar3 + 8);
                uStack_58 = (u32)uVar26;
                fStack_54 = (float)((u64)uVar26 >> 0x20);
                in_xd2 = (double)CONCAT44(fStack_5c, fStack_60);
                dVar19 = (double)CONCAT44(fStack_50, fStack_54);
                fVar17 = fStack_54;
                in_xd4 = in_xd2;
            }
            fVar21 = (float)((u64)dVar19 >> 0x20);
            if (cVar28 == '\0') {
                bVar27 = fVar21 < SUB84(dVar20, 0) + SUB84(dVar25, 0);
            } else {
                bVar27 = dVar19 < dVar20 + dVar25;
            }
            iVar3 = 0;
            if (bVar27) {
            LAB_8c212f92:
                if (cVar29 == '\0') {
                    dVar19 = (double)CONCAT44(uStack_4c, fStack_54);
                    dVar20 = (double)CONCAT44(fStack_60, uStack_58);
                } else {
                    in_xd4 = (double)CONCAT44(fStack_50, fStack_54);
                    dVar20 = (double)CONCAT44(fStack_5c, fStack_60);
                    dVar19 = (double)CONCAT44(fStack_48, uStack_4c);
                    in_xd2 = (double)CONCAT44(fStack_54, uStack_58);
                }
                fVar17 = (float)((u64)dVar19 >> 0x20);
                if (cVar28 == '\0') {
                    fVar21 = (float)((u64)dVar20 >> 0x20) - SUB84(dVar19, 0);
                    dVar20 = (double)CONCAT44(fVar21, (SUB84(dVar20, 0) - fVar17) / fVar21);
                } else {
                    dVar20 = (dVar20 - dVar19) - dVar19;
                    dVar20 = dVar20 / dVar20;
                }
                if (cVar29 == '\0') {
                    *(float *)((int)ppdVar15 + 0x28) = SUB84(dVar20, 0);
                } else {
                    *(double *)((int)ppdVar15 + 0x28) = in_xd2;
                }
                if (cVar28 == '\0') {
                    dVar20 = (double)CONCAT44((int)((u64)dVar20 >> 0x20), SUB84(dVar20, 0) * SUB84(dVar19, 0));
                } else {
                    dVar20 = dVar20 * dVar19;
                }
                if (cVar28 == '\0') {
                    fVar17 = -SUB84(dVar20, 0) + fVar17;
                } else {
                    fVar17 = SUB84((double)CONCAT44((int)((u64)dVar20 >> 0x20), -SUB84(dVar20, 0)) + dVar19, 0);
                }
                if (cVar29 == '\0') {
                    *(float *)((int)ppdVar15 + 100) = fVar17;
                } else {
                    *(double *)((int)ppdVar15 + 100) = in_xd2;
                }
                iVar5 = 0;
            } else {
                if (cVar29 == '\0') {
                    dVar20 = (double)CONCAT44(fVar17, 0x3ccccccd);
                } else {
                    in_xd2 = -3.6367901170526095e+156;
                    dVar20 = in_xd4;
                }
                if (cVar28 == '\0') {
                    fVar17 = (float)((u64)dVar20 >> 0x20) + SUB84(dVar20, 0);
                    dVar20 = (double)CONCAT44(fVar17, SUB84(dVar20, 0));
                    bVar27 = fVar17 < fVar21;
                } else {
                    dVar20 = dVar20 + dVar20;
                    bVar27 = dVar20 < dVar19;
                }
                if (bVar27)
                    goto LAB_8c212f92;
                fVar17 = fStack_54;
                if (cVar29 != '\0') {
                    in_xd2 = (double)CONCAT44(fStack_50, fStack_54);
                    fVar17 = SUB84(dVar20, 0);
                }
                iVar5 = 1;
                if (cVar29 == '\0') {
                    *(float *)((int)ppdVar15 + 0x70) = fVar17;
                } else {
                    *(double *)((int)ppdVar15 + 0x70) = in_xd2;
                }
            }
            uVar1 = SUB84(dVar24, 0);
            if (*(int *)((int)ppdVar15 + 0x38) == 0) {
                if (iVar5 != 0)
                    goto LAB_8c213020;
                if (cVar29 == '\0') {
                    dVar20 = (double)CONCAT44(*(u32 *)((int)ppdVar15 + 0x54), *(u32 *)((int)ppdVar15 + 100));
                    in_dr0 = (double)CONCAT44(*(u32 *)((int)ppdVar15 + 0x28), SUB84(in_dr0, 0));
                    dVar24 = (double)CONCAT44(*(u32 *)((int)ppdVar15 + 0x54), uVar1);
                } else {
                    dVar20 = *(double *)((int)ppdVar15 + 0x54);
                    in_xd2 = *(double *)((int)ppdVar15 + 100);
                    in_dr0 = *(double *)((int)ppdVar15 + 0x28);
                    dVar24 = dVar20;
                }
            LAB_8c213034:
                if (cVar28 == '\0') {
                    dVar20 = (double)(u64)(u32)((float)((u64)in_dr0 >> 0x20) * (float)((u64)dVar20 >> 0x20) +
                                                SUB84(dVar20, 0));
                }
                if (cVar29 == '\0') {
                    *(int *)((int)ppdVar15 + 0x30) = SUB84(dVar20, 0);
                } else {
                    *(double *)((int)ppdVar15 + 0x30) = in_xd2;
                }
            } else {
                if (iVar5 == 0) {
                    if (cVar29 == '\0') {
                        dVar20 = (double)CONCAT44(*(u32 *)((int)ppdVar15 + 0x14), *(u32 *)((int)ppdVar15 + 0x28));
                    } else {
                        in_xd2 = *(double *)((int)ppdVar15 + 0x28);
                        dVar20 = *(double *)((int)ppdVar15 + 0x14);
                    }
                    if (cVar28 == '\0') {
                        dVar20 = (double)CONCAT44((int)((u64)dVar20 >> 0x20), SUB84(dVar20, 0) + SUB84(dVar25, 0));
                    } else {
                        dVar20 = dVar20 + dVar25;
                    }
                    fVar17 = (float)((u64)dVar20 >> 0x20);
                    if (cVar28 != '\0' || SUB84(dVar20, 0) <= fVar17) {
                        if (cVar29 == '\0') {
                            dVar20 = (double)CONCAT44(fVar17, 0x3ccccccd);
                            in_dr0 = (double)CONCAT44((int)((u64)in_dr0 >> 0x20), *(u32 *)((int)ppdVar15 + 0x28));
                        } else {
                            in_xd2 = 6.712045148555942e-134;
                        }
                        if (cVar28 == '\0') {
                            fVar17 = SUB84(in_dr0, 0) + SUB84(dVar20, 0);
                            in_dr0 = (double)CONCAT44((int)((u64)in_dr0 >> 0x20), fVar17);
                            bVar27 = fVar17 < (float)((u64)dVar20 >> 0x20);
                        } else {
                            in_dr0 = in_dr0 + dVar20;
                            bVar27 = in_dr0 < dVar20;
                        }
                        if (!bVar27)
                            goto LAB_8c213040;
                    }
                    if (cVar29 == '\0') {
                        dVar20 = (double)CONCAT44(*(u32 *)((int)ppdVar15 + 100), *(u32 *)((int)ppdVar15 + 0x4c));
                        dVar16 = (double)CONCAT44(*(u32 *)((int)ppdVar15 + 0x14), *(u32 *)((int)ppdVar15 + 0x28));
                    } else {
                        in_xd2 = *(double *)((int)ppdVar15 + 0x4c);
                        dVar20 = *(double *)((int)ppdVar15 + 100);
                        dVar16 = *(double *)((int)ppdVar15 + 0x14);
                    }
                    if (cVar28 == '\0') {
                        dVar20 = (double)CONCAT44((float)((u64)dVar20 >> 0x20) - SUB84(dVar20, 0), SUB84(dVar20, 0));
                        dVar16 = (double)CONCAT44((float)((u64)dVar16 >> 0x20) - SUB84(dVar16, 0), SUB84(dVar16, 0));
                    } else {
                        dVar20 = dVar20 - dVar20;
                        dVar16 = dVar16 - dVar16;
                    }
                    dVar24 = dVar20;
                    if (cVar29 == '\0') {
                        dVar24 = (double)CONCAT44((int)((u64)dVar20 >> 0x20), uVar1);
                    }
                    if (cVar28 == '\0') {
                        dVar24 = (double)CONCAT44((float)((u64)dVar24 >> 0x20) / (float)((u64)dVar16 >> 0x20),
                                                  SUB84(dVar24, 0));
                    } else {
                        dVar24 = dVar24 / dVar16;
                    }
                    if (cVar29 == '\0') {
                        dVar20 = (double)CONCAT44(*(u32 *)((int)ppdVar15 + 0x14), SUB84(dVar20, 0));
                        in_dr0 = (double)CONCAT44((int)((u64)dVar24 >> 0x20), SUB84(dVar16, 0));
                    } else {
                        dVar20 = *(double *)((int)ppdVar15 + 0x14);
                        in_dr0 = dVar24;
                    }
                    goto LAB_8c213034;
                }
            LAB_8c213020:
                if (*(int *)((int)ppdVar15 + 0x10) == 0) {
                    if (cVar29 == '\0') {
                        dVar20 = (double)CONCAT44(*(u32 *)((int)ppdVar15 + 0x14), *(u32 *)((int)ppdVar15 + 0x4c));
                        in_dr0 = (double)CONCAT44(*(u32 *)((int)ppdVar15 + 0x70), SUB84(in_dr0, 0));
                        dVar24 = (double)CONCAT44(*(u32 *)((int)ppdVar15 + 0x70), uVar1);
                    } else {
                        in_xd2 = *(double *)((int)ppdVar15 + 0x4c);
                        dVar20 = *(double *)((int)ppdVar15 + 0x14);
                        in_dr0 = *(double *)((int)ppdVar15 + 0x70);
                        dVar24 = *(double *)((int)ppdVar15 + 0x70);
                    }
                    goto LAB_8c213034;
                }
            LAB_8c213040:
                iVar3 = 1;
            }
            if (iVar3 == 0) {
                *(u32 *)((int)ppdVar15 + 0x40) = 0;
                *(u32 *)((int)ppdVar15 + 0x3c) = 0;
                if (cVar29 == '\0') {
                    dVar20 = (double)CONCAT44(fStack_3c, SUB84(in_dr0, 0));
                } else {
                    dVar20 = (double)CONCAT44(fStack_38, fStack_3c);
                }
                if (cVar28 == '\0') {
                    dVar20 =
                        (double)CONCAT44((float)((u64)dVar20 >> 0x20) - (float)((u64)dVar24 >> 0x20), SUB84(dVar20, 0));
                } else {
                    dVar20 = dVar20 - dVar24;
                }
                uVar2 = (u32)((u64)dVar20 >> 0x20);
                if (cVar29 == '\0') {
                    *(u32 *)((int)ppdVar15 + 0x84) = uVar2;
                    puVar12 = (u64 *)((int)ppdVar15 + -4);
                    *(u32 *)((int)ppdVar15 + -4) = uVar2;
                    dVar16 = (double)CONCAT44(uStack_34, *(u32 *)((int)ppdVar15 + 0x30));
                } else {
                    *(double *)((int)ppdVar15 + 0x84) = dVar20;
                    puVar12 = (u64 *)((int)ppdVar15 + -8);
                    *(double *)((int)ppdVar15 + -8) = dVar20;
                    in_xd2 = *(double *)((int)ppdVar15 + 0x2c);
                    dVar16 = (double)CONCAT44(fStack_30, uStack_34);
                }
                if (cVar28 == '\0') {
                    dVar16 = (double)CONCAT44((float)((u64)dVar16 >> 0x20) - SUB84(dVar16, 0), SUB84(dVar16, 0));
                } else {
                    dVar16 = dVar16 - dVar16;
                }
                if (cVar29 == '\0') {
                    dVar20 = (double)(u64)uVar2;
                    uVar1 = (u32)((u64)dVar16 >> 0x20);
                    dVar16 = (double)CONCAT44(uVar1, uVar1);
                    *(u32 *)((int)puVar12 + 0xa4) = uVar1;
                } else {
                    *(double *)((int)puVar12 + 0xa4) = dVar16;
                    in_xd2 = dVar16;
                }
                if (cVar28 == '\0') {
                    uVar2 = SUB84(dVar16, 0);
                } else {
                    uVar2 = SUB84(dVar16 * dVar16, 0);
                }
                if (cVar29 == '\0') {
                    uVar26 = CONCAT44(*(u32 *)puVar12, SUB84(dVar20, 0));
                    puVar12 = (u64 *)((int)puVar12 + 4);
                    uVar2 = SUB84(dVar19, 0);
                } else {
                    uVar26 = *puVar12;
                    puVar12 = puVar12 + 1;
                }
                noop_fr4_test(0, iVar5, a0, a1);
                if (cVar29 == '\0') {
                    *(int *)((int)puVar12 + 0x138) = (int)((u64)uVar26 >> 0x20);
                    dVar20 = (double)CONCAT44(fStack_48, (int)uVar26);
                } else {
                    *(u64 *)((int)puVar12 + 0x138) = uVar26;
                    dVar20 = (double)CONCAT44(fStack_44, fStack_48);
                }
                if (cVar28 == '\0') {
                    dVar20 =
                        (double)CONCAT44((float)((u64)dVar20 >> 0x20) - (float)((u64)dVar24 >> 0x20), SUB84(dVar20, 0));
                } else {
                    dVar20 = dVar20 - dVar24;
                }
                uVar18 = (u32)((u64)dVar20 >> 0x20);
                if (cVar29 == '\0') {
                    *(u32 *)((int)puVar12 + 0xc4) = uVar18;
                    puVar7 = (u64 *)((int)puVar12 + -4);
                    *(u32 *)((int)puVar12 + -4) = uVar18;
                    dVar19 = (double)CONCAT44(uStack_40, *(u32 *)((int)puVar12 + 0x30));
                } else {
                    *(double *)((int)puVar12 + 0xc4) = dVar20;
                    puVar7 = (u64 *)((int)puVar12 + -8);
                    *(double *)((int)puVar12 + -8) = dVar20;
                    in_xd2 = *(double *)((int)puVar12 + 0x2c);
                    dVar19 = (double)CONCAT44(fStack_3c, uStack_40);
                }
                if (cVar28 == '\0') {
                    dVar19 = (double)CONCAT44((float)((u64)dVar19 >> 0x20) - SUB84(dVar19, 0), SUB84(dVar19, 0));
                } else {
                    dVar19 = dVar19 - dVar19;
                }
                fVar17 = (float)((u64)dVar19 >> 0x20);
                if (cVar29 == '\0') {
                    dVar20 = (double)(u64)uVar18;
                    dVar19 = (double)CONCAT44(fVar17, fVar17);
                    *(float *)((int)puVar7 + 0xcc) = fVar17;
                } else {
                    *(double *)((int)puVar7 + 0xcc) = dVar19;
                    in_xd2 = dVar19;
                }
                if (cVar28 == '\0') {
                    dVar19 = (double)CONCAT44(fVar17 * SUB84(dVar19, 0), SUB84(dVar19, 0));
                } else {
                    dVar19 = dVar19 * dVar19;
                }
                if (cVar29 == '\0') {
                    uVar26 = CONCAT44(*(u32 *)puVar7, SUB84(dVar20, 0));
                    puVar10 = (u64 *)((int)puVar7 + 4);
                } else {
                    uVar26 = *puVar7;
                    puVar10 = puVar7 + 1;
                }
                if (cVar28 == '\0') {
                    dVar19 = (double)CONCAT44(
                        (float)((u64)uVar26 >> 0x20) * (float)uVar26 + (float)((u64)dVar19 >> 0x20), SUB84(dVar19, 0));
                }
                dVar20 = dVar19;
                if (cVar29 == '\0') {
                    dVar20 = (double)(u64)uVar2;
                }
                uVar1 = SUB84(dVar20, 0);
                noop_fr4_test(iVar3, iVar5, a0, a1);
                if (cVar29 == '\0') {
                    *(int *)((int)puVar10 + 0x110) = (int)((u64)uVar26 >> 0x20);
                    dVar20 = (double)CONCAT44(fStack_3c, (int)uVar26);
                    dVar19 = (double)CONCAT44((int)((u64)dVar19 >> 0x20), fStack_48);
                } else {
                    *(u64 *)((int)puVar10 + 0x110) = uVar26;
                    dVar20 = (double)CONCAT44(fStack_38, fStack_3c);
                    in_xd2 = (double)CONCAT44(fStack_44, fStack_48);
                }
                if (cVar28 == '\0') {
                    dVar20 = (double)CONCAT44((float)((u64)dVar20 >> 0x20) - SUB84(dVar19, 0), SUB84(dVar20, 0));
                } else {
                    dVar20 = dVar20 - dVar19;
                }
                uVar2 = (u32)((u64)dVar20 >> 0x20);
                if (cVar29 == '\0') {
                    *(u32 *)((int)puVar10 + 0xf4) = uVar2;
                    pdVar6 = (double *)((int)puVar10 + -4);
                    *(u32 *)((int)puVar10 + -4) = uVar2;
                    dVar19 = (double)CONCAT44(uStack_34, uStack_40);
                } else {
                    *(double *)((int)puVar10 + 0xf4) = dVar20;
                    pdVar6 = (double *)((int)puVar10 + -8);
                    *(double *)((int)puVar10 + -8) = dVar20;
                    in_xd2 = (double)CONCAT44(fStack_3c, uStack_40);
                    dVar19 = (double)CONCAT44(fStack_30, uStack_34);
                }
                if (cVar28 == '\0') {
                    dVar19 = (double)CONCAT44((float)((u64)dVar19 >> 0x20) - SUB84(dVar19, 0), SUB84(dVar19, 0));
                } else {
                    dVar19 = dVar19 - dVar19;
                }
                if (cVar29 == '\0') {
                    dVar20 = (double)(u64)uVar2;
                    uVar22 = (u32)((u64)dVar19 >> 0x20);
                    dVar19 = (double)CONCAT44(uVar22, uVar22);
                    *(u32 *)(pdVar6 + 0x21) = uVar22;
                } else {
                    pdVar6[0x21] = dVar19;
                    in_xd2 = dVar19;
                }
                if (cVar28 == '\0') {
                    uVar22 = SUB84(dVar19, 0);
                } else {
                    uVar22 = SUB84(dVar19 * dVar19, 0);
                }
                if (cVar29 == '\0') {
                    dVar20 = (double)CONCAT44(*(u32 *)pdVar6, SUB84(dVar20, 0));
                    pdVar6 = (double *)((int)pdVar6 + 4);
                    uVar22 = uVar1;
                } else {
                    dVar20 = *pdVar6;
                    pdVar6 = pdVar6 + 1;
                }
                noop_fr4_test(iVar3, iVar5, a0, a1);
                dVar19 = dVar20;
                if (cVar29 == '\0') {
                    dVar19 = (double)CONCAT44((int)((u64)dVar20 >> 0x20), uVar22);
                }
                if (cVar28 == '\0') {
                    dVar19 =
                        (double)CONCAT44((float)((u64)dVar19 >> 0x20) + (float)((u64)dVar25 >> 0x20), SUB84(dVar19, 0));
                } else {
                    dVar19 = dVar19 + dVar25;
                }
                if (cVar29 == '\0') {
                    dVar16 = (double)CONCAT44(*(u32 *)((int)pdVar6 + 0x138), *(u32 *)((int)pdVar6 + 0x110));
                } else {
                    in_xd2 = *(double *)((int)pdVar6 + 0x110);
                    dVar16 = *(double *)((int)pdVar6 + 0x138);
                }
                if (cVar28 == '\0') {
                    bVar27 = (float)((u64)dVar19 >> 0x20) <
                             (float)((u64)dVar16 >> 0x20) + SUB84(dVar16, 0) + SUB84(dVar25, 0);
                } else {
                    bVar27 = dVar19 < dVar16 + dVar16 + dVar25;
                }
                if (!bVar27) {
                    *(u32 *)((int)pdVar6 + 0x40) = 1;
                }
                if (cVar29 == '\0') {
                    dVar20 = (double)CONCAT44(fStack_54, SUB84(dVar20, 0));
                } else {
                    dVar20 = (double)CONCAT44(fStack_50, fStack_54);
                }
                if (cVar28 == '\0') {
                    dVar20 =
                        (double)CONCAT44((float)((u64)dVar20 >> 0x20) - (float)((u64)dVar24 >> 0x20), SUB84(dVar20, 0));
                } else {
                    dVar20 = dVar20 - dVar24;
                }
                uVar2 = (u32)((u64)dVar20 >> 0x20);
                if (cVar29 == '\0') {
                    *(u32 *)((int)pdVar6 + 0x9c) = uVar2;
                    puVar12 = (u64 *)((int)pdVar6 + -4);
                    *(u32 *)((int)pdVar6 + -4) = uVar2;
                    dVar16 = (double)CONCAT44(uStack_4c, *(u32 *)((int)pdVar6 + 0x30));
                } else {
                    *(double *)((int)pdVar6 + 0x9c) = dVar20;
                    puVar12 = (u64 *)((int)pdVar6 + -8);
                    *(double *)((int)pdVar6 + -8) = dVar20;
                    in_xd2 = *(double *)((int)pdVar6 + 0x2c);
                    dVar16 = (double)CONCAT44(fStack_48, uStack_4c);
                }
                if (cVar28 == '\0') {
                    dVar16 = (double)CONCAT44((float)((u64)dVar16 >> 0x20) - SUB84(dVar16, 0), SUB84(dVar16, 0));
                } else {
                    dVar16 = dVar16 - dVar16;
                }
                if (cVar29 == '\0') {
                    dVar20 = (double)(u64)uVar2;
                    uVar1 = (u32)((u64)dVar16 >> 0x20);
                    dVar16 = (double)CONCAT44(uVar1, uVar1);
                    *(u32 *)(puVar12 + 0x16) = uVar1;
                } else {
                    puVar12[0x16] = dVar16;
                    in_xd2 = dVar16;
                }
                if (cVar28 == '\0') {
                    uVar2 = SUB84(dVar16, 0);
                } else {
                    uVar2 = SUB84(dVar16 * dVar16, 0);
                }
                if (cVar29 == '\0') {
                    uVar26 = CONCAT44(*(u32 *)puVar12, SUB84(dVar20, 0));
                    puVar12 = (u64 *)((int)puVar12 + 4);
                    uVar2 = SUB84(dVar19, 0);
                } else {
                    uVar26 = *puVar12;
                    puVar12 = puVar12 + 1;
                }
                noop_fr4_test(iVar3, iVar5, a0, a1);
                if (cVar29 == '\0') {
                    *(int *)((int)puVar12 + 0x130) = (int)((u64)uVar26 >> 0x20);
                    dVar20 = (double)CONCAT44(fStack_60, (int)uVar26);
                } else {
                    *(u64 *)((int)puVar12 + 0x130) = uVar26;
                    dVar20 = (double)CONCAT44(fStack_5c, fStack_60);
                }
                if (cVar28 == '\0') {
                    dVar20 =
                        (double)CONCAT44((float)((u64)dVar20 >> 0x20) - (float)((u64)dVar24 >> 0x20), SUB84(dVar20, 0));
                } else {
                    dVar20 = dVar20 - dVar24;
                }
                uVar18 = (u32)((u64)dVar20 >> 0x20);
                if (cVar29 == '\0') {
                    *(u32 *)((int)puVar12 + 0xd4) = uVar18;
                    puVar7 = (u64 *)((int)puVar12 + -4);
                    *(u32 *)((int)puVar12 + -4) = uVar18;
                    dVar19 = (double)CONCAT44(uStack_58, *(u32 *)((int)puVar12 + 0x30));
                } else {
                    *(double *)((int)puVar12 + 0xd4) = dVar20;
                    puVar7 = (u64 *)((int)puVar12 + -8);
                    *(double *)((int)puVar12 + -8) = dVar20;
                    in_xd2 = *(double *)((int)puVar12 + 0x2c);
                    dVar19 = (double)CONCAT44(fStack_54, uStack_58);
                }
                if (cVar28 == '\0') {
                    dVar19 = (double)CONCAT44((float)((u64)dVar19 >> 0x20) - SUB84(dVar19, 0), SUB84(dVar19, 0));
                } else {
                    dVar19 = dVar19 - dVar19;
                }
                fVar17 = (float)((u64)dVar19 >> 0x20);
                if (cVar29 == '\0') {
                    dVar20 = (double)(u64)uVar18;
                    dVar19 = (double)CONCAT44(fVar17, fVar17);
                    *(float *)((int)puVar7 + 0xdc) = fVar17;
                } else {
                    *(double *)((int)puVar7 + 0xdc) = dVar19;
                    in_xd2 = dVar19;
                }
                if (cVar28 == '\0') {
                    dVar19 = (double)CONCAT44(fVar17 * SUB84(dVar19, 0), SUB84(dVar19, 0));
                } else {
                    dVar19 = dVar19 * dVar19;
                }
                if (cVar29 == '\0') {
                    uVar26 = CONCAT44(*(u32 *)puVar7, SUB84(dVar20, 0));
                    puVar11 = (u64 *)((int)puVar7 + 4);
                } else {
                    uVar26 = *puVar7;
                    puVar11 = puVar7 + 1;
                }
                if (cVar28 == '\0') {
                    dVar19 = (double)CONCAT44(
                        (float)((u64)uVar26 >> 0x20) * (float)uVar26 + (float)((u64)dVar19 >> 0x20), SUB84(dVar19, 0));
                }
                dVar20 = dVar19;
                if (cVar29 == '\0') {
                    dVar20 = (double)(u64)uVar2;
                }
                uVar1 = SUB84(dVar20, 0);
                noop_fr4_test(iVar3, iVar5, a0, a1);
                if (cVar29 == '\0') {
                    *(int *)((int)puVar11 + 0x120) = (int)((u64)uVar26 >> 0x20);
                    dVar20 = (double)CONCAT44(fStack_54, (int)uVar26);
                    dVar19 = (double)CONCAT44((int)((u64)dVar19 >> 0x20), fStack_60);
                } else {
                    *(u64 *)((int)puVar11 + 0x120) = uVar26;
                    dVar20 = (double)CONCAT44(fStack_50, fStack_54);
                    in_xd2 = (double)CONCAT44(fStack_5c, fStack_60);
                }
                if (cVar28 == '\0') {
                    dVar20 = (double)CONCAT44((float)((u64)dVar20 >> 0x20) - SUB84(dVar19, 0), SUB84(dVar20, 0));
                } else {
                    dVar20 = dVar20 - dVar19;
                }
                uVar2 = (u32)((u64)dVar20 >> 0x20);
                if (cVar29 == '\0') {
                    *(u32 *)((int)puVar11 + 0xf0) = uVar2;
                    pdVar6 = (double *)((int)puVar11 + -4);
                    *(u32 *)((int)puVar11 + -4) = uVar2;
                    dVar19 = (double)CONCAT44(uStack_4c, uStack_58);
                } else {
                    *(double *)((int)puVar11 + 0xf0) = dVar20;
                    pdVar6 = (double *)((int)puVar11 + -8);
                    *(double *)((int)puVar11 + -8) = dVar20;
                    in_xd2 = (double)CONCAT44(fStack_54, uStack_58);
                    dVar19 = (double)CONCAT44(fStack_48, uStack_4c);
                }
                if (cVar28 == '\0') {
                    dVar19 = (double)CONCAT44((float)((u64)dVar19 >> 0x20) - SUB84(dVar19, 0), SUB84(dVar19, 0));
                } else {
                    dVar19 = dVar19 - dVar19;
                }
                if (cVar29 == '\0') {
                    dVar20 = (double)(u64)uVar2;
                    uVar22 = (u32)((u64)dVar19 >> 0x20);
                    dVar19 = (double)CONCAT44(uVar22, uVar22);
                    *(u32 *)(pdVar6 + 0x1e) = uVar22;
                } else {
                    pdVar6[0x1e] = dVar19;
                    in_xd2 = dVar19;
                }
                if (cVar28 == '\0') {
                    uVar22 = SUB84(dVar19, 0);
                } else {
                    uVar22 = SUB84(dVar19 * dVar19, 0);
                }
                if (cVar29 == '\0') {
                    in_dr0 = (double)CONCAT44(*(u32 *)pdVar6, SUB84(dVar20, 0));
                    ppdVar15 = (double **)((int)pdVar6 + 4);
                    uVar22 = uVar1;
                } else {
                    in_dr0 = *pdVar6;
                    ppdVar15 = (double **)(pdVar6 + 1);
                }
                noop_fr4_test(iVar3, iVar5, a0, a1);
                dVar19 = in_dr0;
                if (cVar29 == '\0') {
                    dVar19 = (double)CONCAT44((int)((u64)in_dr0 >> 0x20), uVar22);
                }
                if (cVar28 == '\0') {
                    dVar19 =
                        (double)CONCAT44((float)((u64)dVar19 >> 0x20) + (float)((u64)dVar25 >> 0x20), SUB84(dVar19, 0));
                } else {
                    dVar19 = dVar19 + dVar25;
                }
                if (cVar29 == '\0') {
                    dVar20 = (double)CONCAT44(*(u32 *)((int)ppdVar15 + 0x130), *(u32 *)((int)ppdVar15 + 0x120));
                } else {
                    in_xd2 = *(double *)((int)ppdVar15 + 0x120);
                    dVar20 = *(double *)((int)ppdVar15 + 0x130);
                }
                if (cVar28 == '\0') {
                    fVar17 = (float)((u64)dVar20 >> 0x20) + SUB84(dVar20, 0) + SUB84(dVar25, 0);
                    dVar20 = (double)CONCAT44(fVar17, SUB84(dVar20, 0));
                    bVar27 = (float)((u64)dVar19 >> 0x20) < fVar17;
                } else {
                    dVar20 = dVar20 + dVar20 + dVar25;
                    bVar27 = dVar19 < dVar20;
                }
                if (!bVar27) {
                    *(u32 *)((int)ppdVar15 + 0x3c) = 1;
                }
                if ((*(int *)((int)ppdVar15 + 0x40) != 0) && (*(int *)((int)ppdVar15 + 0x3c) != 0)) {
                    *(u32 *)((int)ppdVar15 + 0x74) = 1;
                    break;
                }
            }
            if (cVar29 == '\0') {
                fStack_54 = fStack_60;
                fStack_50 = fStack_5c;
                dVar20 = (double)CONCAT44(fStack_5c, uStack_58);
                uStack_4c = uStack_58;
            } else {
                fStack_54 = fStack_60;
                dVar20 = (double)CONCAT44(uStack_58, fStack_5c);
                fStack_50 = fStack_5c;
                in_xd2 = (double)CONCAT44(fStack_60, uStack_58);
                uStack_4c = uStack_58;
                fStack_48 = fStack_60;
            }
            uStack_4c = uStack_58;
            fStack_50 = fStack_5c;
            fStack_54 = fStack_60;
            iVar3 = *(int *)((int)ppdVar15 + 0xc);
            *(u32 *)((int)ppdVar15 + 0xc) = iVar3 + 0xcU;
        } while (iVar3 + 0xcU < 0x30);
        if (*(int *)((int)ppdVar15 + 0x74) != 0)
            break;
        if (cVar29 == '\0') {
            fStack_3c = fStack_48;
            fStack_38 = fStack_44;
            dVar20 = (double)CONCAT44(fStack_44, uStack_40);
            uStack_34 = uStack_40;
        } else {
            fStack_3c = fStack_48;
            dVar20 = (double)CONCAT44(uStack_40, fStack_44);
            fStack_38 = fStack_44;
            in_xd2 = (double)CONCAT44(fStack_48, uStack_40);
            uStack_34 = uStack_40;
            fStack_30 = fStack_48;
        }
        uStack_34 = uStack_40;
        fStack_38 = fStack_44;
        fStack_3c = fStack_48;
        *(int *)((int)ppdVar15 + 8) = *(int *)((int)ppdVar15 + 8) + 0xc;
    }
    iVar3 = (int)*ppdVar15;
    if (cVar29 == '\0') {
        fStack_3c = *(float *)(iVar3 + 0x24);
        fStack_38 = *(float *)(iVar3 + 0x28);
        dVar20 = (double)CONCAT44((int)((u64)dVar20 >> 0x20), *(u32 *)(iVar3 + 0x2c));
        uStack_34 = *(u32 *)(iVar3 + 0x2c);
    } else {
        fStack_3c = (float)*(u64 *)(iVar3 + 0x24);
        fStack_38 = (float)*(u64 *)(iVar3 + 0x28);
        in_xd2 = *(double *)(iVar3 + 0x2c);
        uStack_34 = SUB84(in_xd2, 0);
        fStack_30 = (float)((u64)in_xd2 >> 0x20);
    }
    ppdVar15[2] = NULL;
    while (ppdVar15[2] < 0x30) {
        iVar5 = (int)*ppdVar15;
        iVar3 = (int)ppdVar15[2];
        if (cVar29 == '\0') {
            dVar20 = (double)CONCAT44((int)((u64)dVar20 >> 0x20), *(u32 *)(iVar5 + iVar3));
        } else {
            in_xd2 = *(double *)(iVar5 + iVar3);
        }
        if (cVar29 == '\0') {
            fStack_48 = SUB84(dVar20, 0);
            dVar20 = (double)CONCAT44((int)((u64)dVar20 >> 0x20), *(u32 *)(iVar5 + iVar3 + 4));
        } else {
            fStack_48 = SUB84(in_xd2, 0);
            in_xd2 = *(double *)(iVar5 + iVar3 + 4);
        }
        fVar17 = SUB84(dVar20, 0);
        if (cVar29 == '\0') {
            fStack_44 = fVar17;
            uStack_40 = *(u32 *)(iVar5 + iVar3 + 8);
            dVar19 = (double)CONCAT44(fStack_38, fVar17);
            fVar21 = fVar17;
        } else {
            fStack_44 = SUB84(in_xd2, 0);
            uVar26 = *(u64 *)(iVar5 + iVar3 + 8);
            uStack_40 = (u32)uVar26;
            fStack_3c = (float)((u64)uVar26 >> 0x20);
            in_xd2 = (double)CONCAT44(uStack_40, fStack_44);
            dVar19 = (double)CONCAT44(uStack_34, fStack_38);
            fVar21 = fStack_38;
            in_xd4 = in_xd2;
        }
        fVar23 = (float)((u64)dVar19 >> 0x20);
        if (cVar28 == '\0') {
            bVar27 = fVar23 < fVar17 + SUB84(dVar25, 0);
        } else {
            bVar27 = dVar19 < dVar20 + dVar25;
        }
        if (bVar27) {
        LAB_8c213244:
            if (cVar29 == '\0') {
                dVar20 = (double)CONCAT44(uStack_34, fStack_38);
                dVar19 = (double)CONCAT44(fStack_44, uStack_40);
            } else {
                in_xd2 = (double)CONCAT44(fStack_3c, uStack_40);
                dVar20 = (double)CONCAT44(fStack_30, uStack_34);
                in_xd4 = (double)CONCAT44(uStack_34, fStack_38);
                dVar19 = (double)CONCAT44(uStack_40, fStack_44);
            }
            fVar17 = (float)((u64)dVar20 >> 0x20);
            if (cVar28 == '\0') {
                fVar21 = (float)((u64)dVar19 >> 0x20) - SUB84(dVar20, 0);
                dVar19 = (double)CONCAT44(fVar21, (SUB84(dVar19, 0) - fVar17) / fVar21);
            } else {
                dVar19 = (dVar19 - dVar20) - dVar20;
                dVar19 = dVar19 / dVar19;
            }
            if (cVar29 == '\0') {
                ppdVar15[7] = (double *)SUB84(dVar19, 0);
            } else {
                *(double *)(ppdVar15 + 7) = in_xd2;
            }
            if (cVar28 == '\0') {
                dVar19 = (double)CONCAT44((int)((u64)dVar19 >> 0x20), SUB84(dVar19, 0) * SUB84(dVar20, 0));
            } else {
                dVar19 = dVar19 * dVar20;
            }
            if (cVar28 == '\0') {
                fVar17 = -SUB84(dVar19, 0) + fVar17;
            } else {
                fVar17 = SUB84((double)CONCAT44((int)((u64)dVar19 >> 0x20), -SUB84(dVar19, 0)) + dVar20, 0);
            }
            if (cVar29 == '\0') {
                ppdVar15[0x12] = (double *)fVar17;
            } else {
                *(double *)(ppdVar15 + 0x12) = in_xd2;
            }
            ppdVar15[4] = NULL;
        } else {
            if (cVar29 == '\0') {
                dVar20 = (double)CONCAT44(fVar21, 0x3ccccccd);
            } else {
                in_xd2 = -2.559049917583599e+249;
                dVar20 = in_xd4;
            }
            if (cVar28 == '\0') {
                bVar27 = (float)((u64)dVar20 >> 0x20) + SUB84(dVar20, 0) < fVar23;
            } else {
                bVar27 = dVar20 + dVar20 < dVar19;
            }
            if (bVar27)
                goto LAB_8c213244;
            if (cVar29 == '\0') {
                ppdVar15[0x14] = (double *)fStack_38;
            } else {
                in_xd2 = (double)CONCAT44(uStack_34, fStack_38);
                *(double *)(ppdVar15 + 0x14) = in_xd2;
            }
            ppdVar15[4] = (double *)0x1;
        }
        if (cVar29 == '\0') {
            dVar20 = (double)CONCAT44(fStack_38, fStack_44);
        } else {
            in_xd2 = (double)CONCAT44(uStack_40, fStack_44);
            dVar20 = (double)CONCAT44(uStack_34, fStack_38);
        }
        if (cVar28 == '\0') {
            dVar20 = (double)CONCAT44(((float)((u64)dVar20 >> 0x20) + SUB84(dVar20, 0)) * SUB84(dVar24, 0),
                                      SUB84(dVar20, 0));
        } else {
            dVar20 = (dVar20 + dVar20) * dVar24;
        }
        if (cVar29 == '\0') {
            ppdVar15[0x5e] = (double *)(int)((u64)dVar20 >> 0x20);
            dVar20 = (double)CONCAT44(uStack_34, uStack_40);
        } else {
            *(double *)(ppdVar15 + 0x5e) = dVar20;
            dVar20 = (double)CONCAT44(fStack_30, uStack_34);
            in_xd2 = (double)CONCAT44(fStack_3c, uStack_40);
        }
        if (cVar28 == '\0') {
            dVar20 = (double)CONCAT44(((float)((u64)dVar20 >> 0x20) + SUB84(dVar20, 0)) * SUB84(dVar24, 0),
                                      SUB84(dVar20, 0));
        } else {
            dVar20 = (dVar20 + dVar20) * dVar24;
        }
        iVar3 = (int)((u64)dVar20 >> 0x20);
        if (cVar29 == '\0') {
            ppdVar15[0x5f] = (double *)iVar3;
        } else {
            *(double *)(ppdVar15 + 0x5f) = dVar20;
        }
        iVar5 = (int)ppdVar15[1];
        if (cVar29 == '\0') {
            fStack_54 = *(float *)(iVar5 + 0x24);
            fStack_50 = *(float *)(iVar5 + 0x28);
            dVar20 = (double)CONCAT44(iVar3, *(u32 *)(iVar5 + 0x2c));
            uStack_4c = *(u32 *)(iVar5 + 0x2c);
        } else {
            fStack_54 = (float)*(u64 *)(iVar5 + 0x24);
            fStack_50 = (float)*(u64 *)(iVar5 + 0x28);
            in_xd2 = *(double *)(iVar5 + 0x2c);
            uStack_4c = SUB84(in_xd2, 0);
            fStack_48 = (float)((u64)in_xd2 >> 0x20);
        }
        ppdVar15[3] = NULL;
        ppdVar15[0xe] = (double *)(u32)(ppdVar15[4] == NULL);
        do {
            a0 = *(double **)((int)ppdVar15 + 4);
            iVar3 = *(int *)((int)ppdVar15 + 0xc);
            if (cVar29 == '\0') {
                fStack_60 = *(float *)((int)a0 + iVar3);
                fVar21 = *(float *)((int)a0 + iVar3 + 4);
                dVar20 = (double)CONCAT44((int)((u64)dVar20 >> 0x20), fVar21);
                fStack_5c = fVar21;
                uStack_58 = *(u32 *)((int)a0 + iVar3 + 8);
                dVar19 = (double)CONCAT44(fStack_50, fVar21);
                fVar17 = fVar21;
            } else {
                fStack_60 = (float)*(u64 *)((int)a0 + iVar3);
                fVar21 = SUB84(dVar20, 0);
                fStack_5c = (float)*(u64 *)((int)a0 + iVar3 + 4);
                uVar26 = *(u64 *)((int)a0 + iVar3 + 8);
                uStack_58 = (u32)uVar26;
                fStack_54 = (float)((u64)uVar26 >> 0x20);
                in_xd2 = (double)CONCAT44(uStack_58, fStack_5c);
                dVar19 = (double)CONCAT44(uStack_4c, fStack_50);
                fVar17 = fStack_50;
                in_xd4 = in_xd2;
            }
            fVar23 = (float)((u64)dVar19 >> 0x20);
            if (cVar28 == '\0') {
                bVar27 = fVar23 < fVar21 + SUB84(dVar25, 0);
            } else {
                bVar27 = dVar19 < dVar20 + dVar25;
            }
            iVar3 = 0;
            if (bVar27) {
            LAB_8c2132f0:
                if (cVar29 == '\0') {
                    dVar19 = (double)CONCAT44(uStack_4c, fStack_50);
                    dVar20 = (double)CONCAT44(fStack_5c, uStack_58);
                } else {
                    in_xd2 = (double)CONCAT44(fStack_54, uStack_58);
                    dVar19 = (double)CONCAT44(fStack_48, uStack_4c);
                    in_xd4 = (double)CONCAT44(uStack_4c, fStack_50);
                    dVar20 = (double)CONCAT44(uStack_58, fStack_5c);
                }
                fVar17 = (float)((u64)dVar19 >> 0x20);
                if (cVar28 == '\0') {
                    fVar21 = (float)((u64)dVar20 >> 0x20) - SUB84(dVar19, 0);
                    dVar20 = (double)CONCAT44(fVar21, (SUB84(dVar20, 0) - fVar17) / fVar21);
                } else {
                    dVar20 = (dVar20 - dVar19) - dVar19;
                    dVar20 = dVar20 / dVar20;
                }
                if (cVar29 == '\0') {
                    *(float *)((int)ppdVar15 + 0x24) = SUB84(dVar20, 0);
                } else {
                    *(double *)((int)ppdVar15 + 0x24) = in_xd2;
                }
                if (cVar28 == '\0') {
                    dVar20 = (double)CONCAT44((int)((u64)dVar20 >> 0x20), SUB84(dVar20, 0) * SUB84(dVar19, 0));
                } else {
                    dVar20 = dVar20 * dVar19;
                }
                if (cVar28 == '\0') {
                    fVar17 = -SUB84(dVar20, 0) + fVar17;
                } else {
                    fVar17 = SUB84((double)CONCAT44((int)((u64)dVar20 >> 0x20), -SUB84(dVar20, 0)) + dVar19, 0);
                }
                if (cVar29 == '\0') {
                    *(float *)((int)ppdVar15 + 0x60) = fVar17;
                } else {
                    *(double *)((int)ppdVar15 + 0x60) = in_xd2;
                }
                iVar5 = 0;
            } else {
                if (cVar29 == '\0') {
                    dVar20 = (double)CONCAT44(fVar17, 0x3ccccccd);
                } else {
                    in_xd2 = 6.712045148555942e-134;
                    dVar20 = in_xd4;
                }
                if (cVar28 == '\0') {
                    bVar27 = (float)((u64)dVar20 >> 0x20) + SUB84(dVar20, 0) < fVar23;
                } else {
                    bVar27 = dVar20 + dVar20 < dVar19;
                }
                if (bVar27)
                    goto LAB_8c2132f0;
                iVar5 = 1;
                if (cVar29 == '\0') {
                    *(float *)((int)ppdVar15 + 0x68) = fStack_50;
                } else {
                    in_xd2 = (double)CONCAT44(uStack_4c, fStack_50);
                    *(double *)((int)ppdVar15 + 0x68) = in_xd2;
                }
            }
            uVar1 = SUB84(dVar24, 0);
            if (*(int *)((int)ppdVar15 + 0x38) == 0) {
                if (iVar5 != 0)
                    goto LAB_8c21337a;
                if (cVar29 == '\0') {
                    dVar20 = (double)CONCAT44(*(u32 *)((int)ppdVar15 + 0x50), *(u32 *)((int)ppdVar15 + 0x60));
                    in_dr0 = (double)CONCAT44(*(u32 *)((int)ppdVar15 + 0x24), SUB84(in_dr0, 0));
                    dVar24 = (double)CONCAT44(*(u32 *)((int)ppdVar15 + 0x50), uVar1);
                } else {
                    dVar20 = *(double *)((int)ppdVar15 + 0x50);
                    in_xd2 = *(double *)((int)ppdVar15 + 0x60);
                    in_dr0 = *(double *)((int)ppdVar15 + 0x24);
                    dVar24 = dVar20;
                }
            LAB_8c21338e:
                if (cVar28 == '\0') {
                    dVar20 = (double)(u64)(u32)((float)((u64)in_dr0 >> 0x20) * (float)((u64)dVar20 >> 0x20) +
                                                SUB84(dVar20, 0));
                }
                if (cVar29 == '\0') {
                    *(int *)((int)ppdVar15 + 0x34) = SUB84(dVar20, 0);
                } else {
                    *(double *)((int)ppdVar15 + 0x34) = in_xd2;
                }
            } else {
                if (iVar5 == 0) {
                    if (cVar29 == '\0') {
                        dVar20 = (double)CONCAT44(*(u32 *)((int)ppdVar15 + 0x1c), *(u32 *)((int)ppdVar15 + 0x24));
                    } else {
                        in_xd2 = *(double *)((int)ppdVar15 + 0x24);
                        dVar20 = *(double *)((int)ppdVar15 + 0x1c);
                    }
                    if (cVar28 == '\0') {
                        dVar20 = (double)CONCAT44((int)((u64)dVar20 >> 0x20), SUB84(dVar20, 0) + SUB84(dVar25, 0));
                    } else {
                        dVar20 = dVar20 + dVar25;
                    }
                    fVar17 = (float)((u64)dVar20 >> 0x20);
                    if (cVar28 != '\0' || SUB84(dVar20, 0) <= fVar17) {
                        if (cVar29 == '\0') {
                            dVar20 = (double)CONCAT44(fVar17, 0x3ccccccd);
                            in_dr0 = (double)CONCAT44((int)((u64)in_dr0 >> 0x20), *(u32 *)((int)ppdVar15 + 0x24));
                        } else {
                            in_xd2 = 6.712045148555942e-134;
                        }
                        if (cVar28 == '\0') {
                            fVar17 = SUB84(in_dr0, 0) + SUB84(dVar20, 0);
                            in_dr0 = (double)CONCAT44((int)((u64)in_dr0 >> 0x20), fVar17);
                            bVar27 = fVar17 < (float)((u64)dVar20 >> 0x20);
                        } else {
                            in_dr0 = in_dr0 + dVar20;
                            bVar27 = in_dr0 < dVar20;
                        }
                        if (!bVar27)
                            goto LAB_8c21339c;
                    }
                    if (cVar29 == '\0') {
                        dVar20 = (double)CONCAT44(*(u32 *)((int)ppdVar15 + 0x60), *(u32 *)((int)ppdVar15 + 0x48));
                        dVar16 = (double)CONCAT44(*(u32 *)((int)ppdVar15 + 0x1c), *(u32 *)((int)ppdVar15 + 0x24));
                    } else {
                        in_xd2 = *(double *)((int)ppdVar15 + 0x48);
                        dVar20 = *(double *)((int)ppdVar15 + 0x60);
                        dVar16 = *(double *)((int)ppdVar15 + 0x1c);
                    }
                    if (cVar28 == '\0') {
                        dVar20 = (double)CONCAT44((float)((u64)dVar20 >> 0x20) - SUB84(dVar20, 0), SUB84(dVar20, 0));
                        dVar16 = (double)CONCAT44((float)((u64)dVar16 >> 0x20) - SUB84(dVar16, 0), SUB84(dVar16, 0));
                    } else {
                        dVar20 = dVar20 - dVar20;
                        dVar16 = dVar16 - dVar16;
                    }
                    dVar24 = dVar20;
                    if (cVar29 == '\0') {
                        dVar24 = (double)CONCAT44((int)((u64)dVar20 >> 0x20), uVar1);
                    }
                    if (cVar28 == '\0') {
                        dVar24 = (double)CONCAT44((float)((u64)dVar24 >> 0x20) / (float)((u64)dVar16 >> 0x20),
                                                  SUB84(dVar24, 0));
                    } else {
                        dVar24 = dVar24 / dVar16;
                    }
                    if (cVar29 == '\0') {
                        dVar20 = (double)CONCAT44(*(u32 *)((int)ppdVar15 + 0x1c), SUB84(dVar20, 0));
                        in_dr0 = (double)CONCAT44((int)((u64)dVar24 >> 0x20), SUB84(dVar16, 0));
                    } else {
                        dVar20 = *(double *)((int)ppdVar15 + 0x1c);
                        in_dr0 = dVar24;
                    }
                    goto LAB_8c21338e;
                }
            LAB_8c21337a:
                if (*(int *)((int)ppdVar15 + 0x10) == 0) {
                    if (cVar29 == '\0') {
                        dVar20 = (double)CONCAT44(*(u32 *)((int)ppdVar15 + 0x1c), *(u32 *)((int)ppdVar15 + 0x48));
                        in_dr0 = (double)CONCAT44(*(u32 *)((int)ppdVar15 + 0x68), SUB84(in_dr0, 0));
                        dVar24 = (double)CONCAT44(*(u32 *)((int)ppdVar15 + 0x68), uVar1);
                    } else {
                        in_xd2 = *(double *)((int)ppdVar15 + 0x48);
                        dVar20 = *(double *)((int)ppdVar15 + 0x1c);
                        in_dr0 = *(double *)((int)ppdVar15 + 0x68);
                        dVar24 = *(double *)((int)ppdVar15 + 0x68);
                    }
                    goto LAB_8c21338e;
                }
            LAB_8c21339c:
                iVar3 = 1;
            }
            if (iVar3 == 0) {
                *(u32 *)((int)ppdVar15 + 0x40) = 0;
                *(u32 *)((int)ppdVar15 + 0x3c) = 0;
                if (cVar29 == '\0') {
                    dVar20 = (double)CONCAT44(fStack_38, SUB84(in_dr0, 0));
                } else {
                    dVar20 = (double)CONCAT44(uStack_34, fStack_38);
                }
                if (cVar28 == '\0') {
                    dVar20 =
                        (double)CONCAT44((float)((u64)dVar20 >> 0x20) - (float)((u64)dVar24 >> 0x20), SUB84(dVar20, 0));
                } else {
                    dVar20 = dVar20 - dVar24;
                }
                uVar2 = (u32)((u64)dVar20 >> 0x20);
                if (cVar29 == '\0') {
                    *(u32 *)((int)ppdVar15 + 0x94) = uVar2;
                    puVar12 = (u64 *)((int)ppdVar15 + -4);
                    *(u32 *)((int)ppdVar15 + -4) = uVar2;
                    dVar16 = (double)CONCAT44(uStack_34, *(u32 *)((int)ppdVar15 + 0x34));
                } else {
                    *(double *)((int)ppdVar15 + 0x94) = dVar20;
                    puVar12 = (u64 *)((int)ppdVar15 + -8);
                    *(double *)((int)ppdVar15 + -8) = dVar20;
                    in_xd2 = *(double *)((int)ppdVar15 + 0x30);
                    dVar16 = (double)CONCAT44(fStack_30, uStack_34);
                }
                if (cVar28 == '\0') {
                    dVar16 = (double)CONCAT44((float)((u64)dVar16 >> 0x20) - SUB84(dVar16, 0), SUB84(dVar16, 0));
                } else {
                    dVar16 = dVar16 - dVar16;
                }
                if (cVar29 == '\0') {
                    dVar20 = (double)(u64)uVar2;
                    uVar1 = (u32)((u64)dVar16 >> 0x20);
                    dVar16 = (double)CONCAT44(uVar1, uVar1);
                    *(u32 *)(puVar12 + 0x12) = uVar1;
                } else {
                    puVar12[0x12] = dVar16;
                    in_xd2 = dVar16;
                }
                if (cVar28 == '\0') {
                    uVar2 = SUB84(dVar16, 0);
                } else {
                    uVar2 = SUB84(dVar16 * dVar16, 0);
                }
                if (cVar29 == '\0') {
                    uVar26 = CONCAT44(*(u32 *)puVar12, SUB84(dVar20, 0));
                    puVar12 = (u64 *)((int)puVar12 + 4);
                    uVar2 = SUB84(dVar19, 0);
                } else {
                    uVar26 = *puVar12;
                    puVar12 = puVar12 + 1;
                }
                noop_fr4_test(0, iVar5, a0, a1);
                if (cVar29 == '\0') {
                    *(int *)((int)puVar12 + 0x134) = (int)((u64)uVar26 >> 0x20);
                    dVar20 = (double)CONCAT44(fStack_44, (int)uVar26);
                } else {
                    *(u64 *)((int)puVar12 + 0x134) = uVar26;
                    dVar20 = (double)CONCAT44(uStack_40, fStack_44);
                }
                if (cVar28 == '\0') {
                    dVar20 =
                        (double)CONCAT44((float)((u64)dVar20 >> 0x20) - (float)((u64)dVar24 >> 0x20), SUB84(dVar20, 0));
                } else {
                    dVar20 = dVar20 - dVar24;
                }
                uVar18 = (u32)((u64)dVar20 >> 0x20);
                if (cVar29 == '\0') {
                    *(u32 *)((int)puVar12 + 0xbc) = uVar18;
                    puVar7 = (u64 *)((int)puVar12 + -4);
                    *(u32 *)((int)puVar12 + -4) = uVar18;
                    dVar19 = (double)CONCAT44(uStack_40, *(u32 *)((int)puVar12 + 0x34));
                } else {
                    *(double *)((int)puVar12 + 0xbc) = dVar20;
                    puVar7 = (u64 *)((int)puVar12 + -8);
                    *(double *)((int)puVar12 + -8) = dVar20;
                    in_xd2 = *(double *)((int)puVar12 + 0x30);
                    dVar19 = (double)CONCAT44(fStack_3c, uStack_40);
                }
                if (cVar28 == '\0') {
                    dVar19 = (double)CONCAT44((float)((u64)dVar19 >> 0x20) - SUB84(dVar19, 0), SUB84(dVar19, 0));
                } else {
                    dVar19 = dVar19 - dVar19;
                }
                fVar17 = (float)((u64)dVar19 >> 0x20);
                if (cVar29 == '\0') {
                    dVar20 = (double)(u64)uVar18;
                    dVar19 = (double)CONCAT44(fVar17, fVar17);
                    *(float *)((int)puVar7 + 0xc4) = fVar17;
                } else {
                    *(double *)((int)puVar7 + 0xc4) = dVar19;
                    in_xd2 = dVar19;
                }
                if (cVar28 == '\0') {
                    dVar19 = (double)CONCAT44(fVar17 * SUB84(dVar19, 0), SUB84(dVar19, 0));
                } else {
                    dVar19 = dVar19 * dVar19;
                }
                if (cVar29 == '\0') {
                    uVar26 = CONCAT44(*(u32 *)puVar7, SUB84(dVar20, 0));
                    puVar13 = (u64 *)((int)puVar7 + 4);
                } else {
                    uVar26 = *puVar7;
                    puVar13 = puVar7 + 1;
                }
                if (cVar28 == '\0') {
                    dVar19 = (double)CONCAT44(
                        (float)((u64)uVar26 >> 0x20) * (float)uVar26 + (float)((u64)dVar19 >> 0x20), SUB84(dVar19, 0));
                }
                dVar20 = dVar19;
                if (cVar29 == '\0') {
                    dVar20 = (double)(u64)uVar2;
                }
                uVar1 = SUB84(dVar20, 0);
                noop_fr4_test(iVar3, iVar5, a0, a1);
                if (cVar29 == '\0') {
                    *(int *)((int)puVar13 + 0x114) = (int)((u64)uVar26 >> 0x20);
                    dVar20 = (double)CONCAT44(fStack_38, (int)uVar26);
                    dVar19 = (double)CONCAT44((int)((u64)dVar19 >> 0x20), fStack_44);
                } else {
                    *(u64 *)((int)puVar13 + 0x114) = uVar26;
                    dVar20 = (double)CONCAT44(uStack_34, fStack_38);
                    in_xd2 = (double)CONCAT44(uStack_40, fStack_44);
                }
                if (cVar28 == '\0') {
                    dVar20 = (double)CONCAT44((float)((u64)dVar20 >> 0x20) - SUB84(dVar19, 0), SUB84(dVar20, 0));
                } else {
                    dVar20 = dVar20 - dVar19;
                }
                uVar2 = (u32)((u64)dVar20 >> 0x20);
                if (cVar29 == '\0') {
                    *(u32 *)((int)puVar13 + 0xe0) = uVar2;
                    pdVar6 = (double *)((int)puVar13 + -4);
                    *(u32 *)((int)puVar13 + -4) = uVar2;
                    dVar19 = (double)CONCAT44(uStack_34, uStack_40);
                } else {
                    *(double *)((int)puVar13 + 0xe0) = dVar20;
                    pdVar6 = (double *)((int)puVar13 + -8);
                    *(double *)((int)puVar13 + -8) = dVar20;
                    in_xd2 = (double)CONCAT44(fStack_3c, uStack_40);
                    dVar19 = (double)CONCAT44(fStack_30, uStack_34);
                }
                if (cVar28 == '\0') {
                    dVar19 = (double)CONCAT44((float)((u64)dVar19 >> 0x20) - SUB84(dVar19, 0), SUB84(dVar19, 0));
                } else {
                    dVar19 = dVar19 - dVar19;
                }
                if (cVar29 == '\0') {
                    dVar20 = (double)(u64)uVar2;
                    uVar22 = (u32)((u64)dVar19 >> 0x20);
                    dVar19 = (double)CONCAT44(uVar22, uVar22);
                    *(u32 *)((int)pdVar6 + 0x10c) = uVar22;
                } else {
                    *(double *)((int)pdVar6 + 0x10c) = dVar19;
                    in_xd2 = dVar19;
                }
                if (cVar28 == '\0') {
                    uVar22 = SUB84(dVar19, 0);
                } else {
                    uVar22 = SUB84(dVar19 * dVar19, 0);
                }
                if (cVar29 == '\0') {
                    dVar20 = (double)CONCAT44(*(u32 *)pdVar6, SUB84(dVar20, 0));
                    pdVar6 = (double *)((int)pdVar6 + 4);
                    uVar22 = uVar1;
                } else {
                    dVar20 = *pdVar6;
                    pdVar6 = pdVar6 + 1;
                }
                noop_fr4_test(iVar3, iVar5, a0, a1);
                dVar19 = dVar20;
                if (cVar29 == '\0') {
                    dVar19 = (double)CONCAT44((int)((u64)dVar20 >> 0x20), uVar22);
                }
                if (cVar28 == '\0') {
                    dVar19 =
                        (double)CONCAT44((float)((u64)dVar19 >> 0x20) + (float)((u64)dVar25 >> 0x20), SUB84(dVar19, 0));
                } else {
                    dVar19 = dVar19 + dVar25;
                }
                if (cVar29 == '\0') {
                    dVar16 = (double)CONCAT44(*(u32 *)((int)pdVar6 + 0x134), *(u32 *)((int)pdVar6 + 0x114));
                } else {
                    in_xd2 = *(double *)((int)pdVar6 + 0x114);
                    dVar16 = *(double *)((int)pdVar6 + 0x134);
                }
                if (cVar28 == '\0') {
                    bVar27 = (float)((u64)dVar19 >> 0x20) <
                             (float)((u64)dVar16 >> 0x20) + SUB84(dVar16, 0) + SUB84(dVar25, 0);
                } else {
                    bVar27 = dVar19 < dVar16 + dVar16 + dVar25;
                }
                if (!bVar27) {
                    *(u32 *)((int)pdVar6 + 0x40) = 1;
                }
                if (cVar29 == '\0') {
                    dVar20 = (double)CONCAT44(fStack_50, SUB84(dVar20, 0));
                } else {
                    dVar20 = (double)CONCAT44(uStack_4c, fStack_50);
                }
                if (cVar28 == '\0') {
                    dVar20 =
                        (double)CONCAT44((float)((u64)dVar20 >> 0x20) - (float)((u64)dVar24 >> 0x20), SUB84(dVar20, 0));
                } else {
                    dVar20 = dVar20 - dVar24;
                }
                uVar2 = (u32)((u64)dVar20 >> 0x20);
                if (cVar29 == '\0') {
                    *(u32 *)((int)pdVar6 + 0x88) = uVar2;
                    puVar12 = (u64 *)((int)pdVar6 + -4);
                    *(u32 *)((int)pdVar6 + -4) = uVar2;
                    dVar16 = (double)CONCAT44(uStack_4c, *(u32 *)((int)pdVar6 + 0x34));
                } else {
                    *(double *)((int)pdVar6 + 0x88) = dVar20;
                    puVar12 = (u64 *)((int)pdVar6 + -8);
                    *(double *)((int)pdVar6 + -8) = dVar20;
                    in_xd2 = *(double *)((int)pdVar6 + 0x30);
                    dVar16 = (double)CONCAT44(fStack_48, uStack_4c);
                }
                if (cVar28 == '\0') {
                    dVar16 = (double)CONCAT44((float)((u64)dVar16 >> 0x20) - SUB84(dVar16, 0), SUB84(dVar16, 0));
                } else {
                    dVar16 = dVar16 - dVar16;
                }
                if (cVar29 == '\0') {
                    dVar20 = (double)(u64)uVar2;
                    uVar1 = (u32)((u64)dVar16 >> 0x20);
                    dVar16 = (double)CONCAT44(uVar1, uVar1);
                    *(u32 *)((int)puVar12 + 0x9c) = uVar1;
                } else {
                    *(double *)((int)puVar12 + 0x9c) = dVar16;
                    in_xd2 = dVar16;
                }
                if (cVar28 == '\0') {
                    uVar2 = SUB84(dVar16, 0);
                } else {
                    uVar2 = SUB84(dVar16 * dVar16, 0);
                }
                if (cVar29 == '\0') {
                    uVar26 = CONCAT44(*(u32 *)puVar12, SUB84(dVar20, 0));
                    puVar12 = (u64 *)((int)puVar12 + 4);
                    uVar2 = SUB84(dVar19, 0);
                } else {
                    uVar26 = *puVar12;
                    puVar12 = puVar12 + 1;
                }
                noop_fr4_test(iVar3, iVar5, a0, a1);
                if (cVar29 == '\0') {
                    *(int *)((int)puVar12 + 0x13c) = (int)((u64)uVar26 >> 0x20);
                    dVar20 = (double)CONCAT44(fStack_5c, (int)uVar26);
                } else {
                    *(u64 *)((int)puVar12 + 0x13c) = uVar26;
                    dVar20 = (double)CONCAT44(uStack_58, fStack_5c);
                }
                if (cVar28 == '\0') {
                    dVar20 =
                        (double)CONCAT44((float)((u64)dVar20 >> 0x20) - (float)((u64)dVar24 >> 0x20), SUB84(dVar20, 0));
                } else {
                    dVar20 = dVar20 - dVar24;
                }
                uVar18 = (u32)((u64)dVar20 >> 0x20);
                if (cVar29 == '\0') {
                    *(u32 *)((int)puVar12 + 0xcc) = uVar18;
                    puVar7 = (u64 *)((int)puVar12 + -4);
                    *(u32 *)((int)puVar12 + -4) = uVar18;
                    dVar19 = (double)CONCAT44(uStack_58, *(u32 *)((int)puVar12 + 0x34));
                } else {
                    *(double *)((int)puVar12 + 0xcc) = dVar20;
                    puVar7 = (u64 *)((int)puVar12 + -8);
                    *(double *)((int)puVar12 + -8) = dVar20;
                    in_xd2 = *(double *)((int)puVar12 + 0x30);
                    dVar19 = (double)CONCAT44(fStack_54, uStack_58);
                }
                if (cVar28 == '\0') {
                    dVar19 = (double)CONCAT44((float)((u64)dVar19 >> 0x20) - SUB84(dVar19, 0), SUB84(dVar19, 0));
                } else {
                    dVar19 = dVar19 - dVar19;
                }
                fVar17 = (float)((u64)dVar19 >> 0x20);
                if (cVar29 == '\0') {
                    dVar20 = (double)(u64)uVar18;
                    dVar19 = (double)CONCAT44(fVar17, fVar17);
                    *(float *)(puVar7 + 0x1c) = fVar17;
                } else {
                    puVar7[0x1c] = dVar19;
                    in_xd2 = dVar19;
                }
                if (cVar28 == '\0') {
                    dVar19 = (double)CONCAT44(fVar17 * SUB84(dVar19, 0), SUB84(dVar19, 0));
                } else {
                    dVar19 = dVar19 * dVar19;
                }
                if (cVar29 == '\0') {
                    uVar26 = CONCAT44(*(u32 *)puVar7, SUB84(dVar20, 0));
                    puVar14 = (u64 *)((int)puVar7 + 4);
                } else {
                    uVar26 = *puVar7;
                    puVar14 = puVar7 + 1;
                }
                if (cVar28 == '\0') {
                    dVar19 = (double)CONCAT44(
                        (float)((u64)uVar26 >> 0x20) * (float)uVar26 + (float)((u64)dVar19 >> 0x20), SUB84(dVar19, 0));
                }
                dVar20 = dVar19;
                if (cVar29 == '\0') {
                    dVar20 = (double)(u64)uVar2;
                }
                uVar1 = SUB84(dVar20, 0);
                noop_fr4_test(iVar3, iVar5, a0, a1);
                if (cVar29 == '\0') {
                    *(int *)((int)puVar14 + 0x11c) = (int)((u64)uVar26 >> 0x20);
                    dVar20 = (double)CONCAT44(fStack_50, (int)uVar26);
                    dVar19 = (double)CONCAT44((int)((u64)dVar19 >> 0x20), fStack_5c);
                } else {
                    *(u64 *)((int)puVar14 + 0x11c) = uVar26;
                    dVar20 = (double)CONCAT44(uStack_4c, fStack_50);
                    in_xd2 = (double)CONCAT44(uStack_58, fStack_5c);
                }
                if (cVar28 == '\0') {
                    dVar20 = (double)CONCAT44((float)((u64)dVar20 >> 0x20) - SUB84(dVar19, 0), SUB84(dVar20, 0));
                } else {
                    dVar20 = dVar20 - dVar19;
                }
                uVar2 = (u32)((u64)dVar20 >> 0x20);
                if (cVar29 == '\0') {
                    *(u32 *)((int)puVar14 + 0xf8) = uVar2;
                    pdVar6 = (double *)((int)puVar14 + -4);
                    *(u32 *)((int)puVar14 + -4) = uVar2;
                    dVar19 = (double)CONCAT44(uStack_4c, uStack_58);
                } else {
                    *(double *)((int)puVar14 + 0xf8) = dVar20;
                    pdVar6 = (double *)((int)puVar14 + -8);
                    *(double *)((int)puVar14 + -8) = dVar20;
                    in_xd2 = (double)CONCAT44(fStack_54, uStack_58);
                    dVar19 = (double)CONCAT44(fStack_48, uStack_4c);
                }
                if (cVar28 == '\0') {
                    dVar19 = (double)CONCAT44((float)((u64)dVar19 >> 0x20) - SUB84(dVar19, 0), SUB84(dVar19, 0));
                } else {
                    dVar19 = dVar19 - dVar19;
                }
                if (cVar29 == '\0') {
                    dVar20 = (double)(u64)uVar2;
                    uVar22 = (u32)((u64)dVar19 >> 0x20);
                    dVar19 = (double)CONCAT44(uVar22, uVar22);
                    *(u32 *)(pdVar6 + 0x20) = uVar22;
                } else {
                    pdVar6[0x20] = dVar19;
                    in_xd2 = dVar19;
                }
                if (cVar28 == '\0') {
                    uVar22 = SUB84(dVar19, 0);
                } else {
                    uVar22 = SUB84(dVar19 * dVar19, 0);
                }
                if (cVar29 == '\0') {
                    in_dr0 = (double)CONCAT44(*(u32 *)pdVar6, SUB84(dVar20, 0));
                    ppdVar15 = (double **)((int)pdVar6 + 4);
                    uVar22 = uVar1;
                } else {
                    in_dr0 = *pdVar6;
                    ppdVar15 = (double **)(pdVar6 + 1);
                }
                noop_fr4_test(iVar3, iVar5, a0, a1);
                dVar19 = in_dr0;
                if (cVar29 == '\0') {
                    dVar19 = (double)CONCAT44((int)((u64)in_dr0 >> 0x20), uVar22);
                }
                if (cVar28 == '\0') {
                    dVar19 =
                        (double)CONCAT44((float)((u64)dVar19 >> 0x20) + (float)((u64)dVar25 >> 0x20), SUB84(dVar19, 0));
                } else {
                    dVar19 = dVar19 + dVar25;
                }
                if (cVar29 == '\0') {
                    dVar20 = (double)CONCAT44(*(u32 *)((int)ppdVar15 + 0x13c), *(u32 *)((int)ppdVar15 + 0x11c));
                } else {
                    in_xd2 = *(double *)((int)ppdVar15 + 0x11c);
                    dVar20 = *(double *)((int)ppdVar15 + 0x13c);
                }
                if (cVar28 == '\0') {
                    fVar17 = (float)((u64)dVar20 >> 0x20) + SUB84(dVar20, 0) + SUB84(dVar25, 0);
                    dVar20 = (double)CONCAT44(fVar17, SUB84(dVar20, 0));
                    bVar27 = (float)((u64)dVar19 >> 0x20) < fVar17;
                } else {
                    dVar20 = dVar20 + dVar20 + dVar25;
                    bVar27 = dVar19 < dVar20;
                }
                if (!bVar27) {
                    *(u32 *)((int)ppdVar15 + 0x3c) = 1;
                }
                if ((*(int *)((int)ppdVar15 + 0x40) != 0) && (*(int *)((int)ppdVar15 + 0x3c) != 0)) {
                    *(u32 *)((int)ppdVar15 + 0x78) = 1;
                    break;
                }
            }
            if (cVar29 == '\0') {
                fStack_54 = fStack_60;
                fStack_50 = fStack_5c;
                dVar20 = (double)CONCAT44(fStack_5c, uStack_58);
                uStack_4c = uStack_58;
            } else {
                fStack_54 = fStack_60;
                dVar20 = (double)CONCAT44(uStack_58, fStack_5c);
                fStack_50 = fStack_5c;
                in_xd2 = (double)CONCAT44(fStack_60, uStack_58);
                uStack_4c = uStack_58;
                fStack_48 = fStack_60;
            }
            uStack_4c = uStack_58;
            fStack_50 = fStack_5c;
            fStack_54 = fStack_60;
            iVar3 = *(int *)((int)ppdVar15 + 0xc);
            *(u32 *)((int)ppdVar15 + 0xc) = iVar3 + 0xcU;
        } while (iVar3 + 0xcU < 0x30);
        if (*(int *)((int)ppdVar15 + 0x78) != 0)
            break;
        if (cVar29 == '\0') {
            fStack_3c = fStack_48;
            fStack_38 = fStack_44;
            dVar20 = (double)CONCAT44(fStack_44, uStack_40);
            uStack_34 = uStack_40;
        } else {
            fStack_3c = fStack_48;
            dVar20 = (double)CONCAT44(uStack_40, fStack_44);
            fStack_38 = fStack_44;
            in_xd2 = (double)CONCAT44(fStack_48, uStack_40);
            uStack_34 = uStack_40;
            fStack_30 = fStack_48;
        }
        uStack_34 = uStack_40;
        fStack_38 = fStack_44;
        fStack_3c = fStack_48;
        *(int *)((int)ppdVar15 + 8) = *(int *)((int)ppdVar15 + 8) + 0xc;
    }
    uVar2 = 0;
    iVar3 = 0;
    while (uVar2 < 0x20) {
        if (cVar29 == '\0') {
            dVar20 = (double)(u64) * (u32 *)((int)*ppdVar15 + iVar3);
        } else {
            in_xd2 = *(double *)((int)*ppdVar15 + iVar3);
        }
        pdVar6 = (double *)((int)ppdVar15 + uVar2 + 0x160);
        if (cVar29 == '\0') {
            *(int *)pdVar6 = SUB84(dVar20, 0);
        } else {
            *pdVar6 = in_xd2;
        }
        if (cVar29 == '\0') {
            uVar18 = *(u32 *)((int)*ppdVar15 + iVar3 + 4);
            dVar20 = (double)(u64)uVar18;
            *(u32 *)((int)pdVar6 + 4) = uVar18;
        } else {
            in_xd2 = *(double *)((int)*ppdVar15 + iVar3 + 4);
            *(double *)((int)pdVar6 + 4) = in_xd2;
        }
        if (cVar29 == '\0') {
            dVar20 = (double)(u64) * (u32 *)((int)ppdVar15[1] + iVar3);
        } else {
            in_xd2 = *(double *)((int)ppdVar15[1] + iVar3);
        }
        a0 = (double *)((int)ppdVar15 + uVar2 + 0x140);
        if (cVar29 == '\0') {
            *(int *)a0 = SUB84(dVar20, 0);
        } else {
            *a0 = in_xd2;
        }
        uVar2 = uVar2 + 8;
        iVar5 = (int)ppdVar15[1] + iVar3;
        iVar4 = iVar3 + 0xc;
        iVar3 = iVar3 + 0xc;
        if (cVar29 == '\0') {
            uVar18 = *(u32 *)(iVar5 + 4);
            dVar20 = (double)(u64)uVar18;
            *(u32 *)((int)a0 + 4) = uVar18;
            iVar3 = iVar4;
        } else {
            in_xd2 = *(double *)(iVar5 + 4);
            *(double *)((int)a0 + 4) = in_xd2;
        }
    }
    iVar3 = ninja_uses_noop_fr4_test_212946(ppdVar15 + 0x58, ppdVar15 + 0x50);
    ppdVar15[3] = (double *)iVar3;
    uVar2 = 0;
    iVar3 = 0;
    while (uVar2 < 0x20) {
        if (cVar29 == '\0') {
            dVar20 = (double)(u64) * (u32 *)((int)*ppdVar15 + iVar3);
        } else {
            in_xd2 = *(double *)((int)*ppdVar15 + iVar3);
        }
        pdVar6 = (double *)((int)ppdVar15 + uVar2 + 0x160);
        if (cVar29 == '\0') {
            *(int *)pdVar6 = SUB84(dVar20, 0);
        } else {
            *pdVar6 = in_xd2;
        }
        if (cVar29 == '\0') {
            uVar18 = *(u32 *)((int)*ppdVar15 + iVar3 + 8);
            dVar20 = (double)(u64)uVar18;
            *(u32 *)((int)pdVar6 + 4) = uVar18;
        } else {
            in_xd2 = *(double *)((int)*ppdVar15 + iVar3 + 8);
            *(double *)((int)pdVar6 + 4) = in_xd2;
        }
        if (cVar29 == '\0') {
            dVar20 = (double)(u64) * (u32 *)((int)ppdVar15[1] + iVar3);
        } else {
            in_xd2 = *(double *)((int)ppdVar15[1] + iVar3);
        }
        a0 = (double *)((int)ppdVar15 + uVar2 + 0x140);
        if (cVar29 == '\0') {
            *(int *)a0 = SUB84(dVar20, 0);
        } else {
            *a0 = in_xd2;
        }
        uVar2 = uVar2 + 8;
        iVar5 = (int)ppdVar15[1] + iVar3;
        iVar4 = iVar3 + 0xc;
        iVar3 = iVar3 + 0xc;
        if (cVar29 == '\0') {
            uVar18 = *(u32 *)(iVar5 + 8);
            dVar20 = (double)(u64)uVar18;
            *(u32 *)((int)a0 + 4) = uVar18;
            iVar3 = iVar4;
        } else {
            in_xd2 = *(double *)(iVar5 + 8);
            *(double *)((int)a0 + 4) = in_xd2;
        }
    }
    iVar5 = ninja_uses_noop_fr4_test_212946(ppdVar15 + 0x58, ppdVar15 + 0x50);
    iVar3 = 0;
    ppdVar15[2] = (double *)iVar5;
    for (uVar2 = 0; uVar2 < 0x20; uVar2 = uVar2 + 8) {
        if (cVar29 == '\0') {
            dVar20 = (double)(u64) * (u32 *)((int)*ppdVar15 + iVar3 + 4);
        } else {
            in_xd2 = *(double *)((int)*ppdVar15 + iVar3 + 4);
        }
        pdVar6 = (double *)((int)ppdVar15 + uVar2 + 0x160);
        if (cVar29 == '\0') {
            *(int *)pdVar6 = SUB84(dVar20, 0);
        } else {
            *pdVar6 = in_xd2;
        }
        if (cVar29 == '\0') {
            uVar18 = *(u32 *)((int)*ppdVar15 + iVar3 + 8);
            dVar20 = (double)(u64)uVar18;
            *(u32 *)((int)pdVar6 + 4) = uVar18;
        } else {
            in_xd2 = *(double *)((int)*ppdVar15 + iVar3 + 8);
            *(double *)((int)pdVar6 + 4) = in_xd2;
        }
        if (cVar29 == '\0') {
            dVar20 = (double)(u64) * (u32 *)((int)ppdVar15[1] + iVar3 + 4);
        } else {
            in_xd2 = *(double *)((int)ppdVar15[1] + iVar3 + 4);
        }
        a0 = (double *)((int)ppdVar15 + uVar2 + 0x140);
        if (cVar29 == '\0') {
            *(int *)a0 = SUB84(dVar20, 0);
        } else {
            *a0 = in_xd2;
        }
        if (cVar29 == '\0') {
            uVar18 = *(u32 *)((int)ppdVar15[1] + iVar3 + 8);
            dVar20 = (double)(u64)uVar18;
            *(u32 *)((int)a0 + 4) = uVar18;
        } else {
            in_xd2 = *(double *)((int)ppdVar15[1] + iVar3 + 8);
            *(double *)((int)a0 + 4) = in_xd2;
        }
        iVar3 = iVar3 + 0xc;
    }
    iVar3 = ninja_uses_noop_fr4_test_212946(ppdVar15 + 0x58, ppdVar15 + 0x50);
    if ((((ppdVar15[0x1f] == NULL) && (ppdVar15[3] == NULL)) || ((ppdVar15[0x1d] == NULL && (ppdVar15[2] == NULL)))) ||
        ((ppdVar15[0x1e] == NULL && (iVar3 == 0)))) {
        uVar1 = 0;
    } else {
        uVar1 = 1;
    }
    return uVar1;
}

/*
 * kamui_uses_noop_fr4_test_2136b0  0x8c2136b0
 * area name: in the kamui library code range; behaviour name: its callees mostly do: uses_noop_fr4_test
 * called by: gfxlib_uses_libgcc_movstr_i4_23340c
 */
u32 kamui_uses_noop_fr4_test_2136b0(int a0, int a1) {
    int iVar1;
    int iVar2;
    u32 uVar3;
    u32 uVar4;
    u32 *a6;
    u64 *puVar5;
    u32 uVar6;
    u32 extraout_fr3;
    u32 uVar7;
    u32 extraout_fr3_00;
    u64 in_xd2;
    char cVar8;
    u8 auStack_60[32];
    u8 auStack_40[36];

    cVar8 = '\0';
    uVar6 = 0;
    iVar1 = 0;
    uVar4 = 0;
    do {
        *(u32 *)(auStack_40 + uVar4) = *(u32 *)(a0 + iVar1);
        *(u32 *)(auStack_40 + uVar4 + 4) = *(u32 *)(a0 + iVar1 + 4);
        a6 = (u32 *)(auStack_60 + uVar4);
        *a6 = *(u32 *)(a1 + iVar1);
        uVar3 = uVar4 + 8;
        *(u32 *)(auStack_60 + uVar4 + 4) = *(u32 *)(a1 + iVar1 + 4);
        iVar1 = iVar1 + 0xc;
        uVar4 = uVar3;
    } while (uVar3 < 0x20);
    iVar1 = ninja_uses_noop_fr4_test_212946(auStack_40, auStack_60);
    iVar2 = 0;
    if (iVar1 != 0) {
        uVar6 = 4;
    }
    uVar4 = 0;
    uVar7 = extraout_fr3;
    do {
        if (cVar8 == '\0') {
            uVar7 = *(u32 *)(a0 + iVar2);
        } else {
            in_xd2 = *(u64 *)(a0 + iVar2);
        }
        puVar5 = (u64 *)(auStack_40 + uVar4);
        if (cVar8 == '\0') {
            *(u32 *)puVar5 = uVar7;
        } else {
            *puVar5 = in_xd2;
        }
        if (cVar8 == '\0') {
            uVar7 = *(u32 *)(a0 + iVar2 + 8);
        } else {
            in_xd2 = *(u64 *)(a0 + iVar2 + 8);
        }
        if (cVar8 == '\0') {
            *(u32 *)(auStack_40 + uVar4 + 4) = uVar7;
            uVar7 = *(u32 *)(a1 + iVar2);
        } else {
            *(u64 *)(auStack_40 + uVar4 + 4) = in_xd2;
            in_xd2 = *(u64 *)(a1 + iVar2);
        }
        puVar5 = (u64 *)(auStack_60 + uVar4);
        if (cVar8 == '\0') {
            *(u32 *)puVar5 = uVar7;
        } else {
            *puVar5 = in_xd2;
        }
        if (cVar8 == '\0') {
            uVar7 = *(u32 *)(a1 + iVar2 + 8);
        } else {
            in_xd2 = *(u64 *)(a1 + iVar2 + 8);
        }
        uVar3 = uVar4 + 8;
        if (cVar8 == '\0') {
            *(u32 *)(auStack_60 + uVar4 + 4) = uVar7;
        } else {
            *(u64 *)(auStack_60 + uVar4 + 4) = in_xd2;
        }
        iVar2 = iVar2 + 0xc;
        uVar4 = uVar3;
    } while (uVar3 < 0x20);
    iVar1 = ninja_uses_noop_fr4_test_212946(auStack_40, auStack_60);
    iVar2 = 0;
    if (iVar1 != 0) {
        uVar6 = uVar6 | 2;
    }
    uVar4 = 0;
    uVar7 = extraout_fr3_00;
    do {
        if (cVar8 == '\0') {
            uVar7 = *(u32 *)(a0 + iVar2 + 4);
        } else {
            in_xd2 = *(u64 *)(a0 + iVar2 + 4);
        }
        puVar5 = (u64 *)(auStack_40 + uVar4);
        if (cVar8 == '\0') {
            *(u32 *)puVar5 = uVar7;
        } else {
            *puVar5 = in_xd2;
        }
        if (cVar8 == '\0') {
            uVar7 = *(u32 *)(a0 + iVar2 + 8);
        } else {
            in_xd2 = *(u64 *)(a0 + iVar2 + 8);
        }
        if (cVar8 == '\0') {
            *(u32 *)(auStack_40 + uVar4 + 4) = uVar7;
            uVar7 = *(u32 *)(a1 + iVar2 + 4);
        } else {
            *(u64 *)(auStack_40 + uVar4 + 4) = in_xd2;
            in_xd2 = *(u64 *)(a1 + iVar2 + 4);
        }
        puVar5 = (u64 *)(auStack_60 + uVar4);
        if (cVar8 == '\0') {
            *(u32 *)puVar5 = uVar7;
        } else {
            *puVar5 = in_xd2;
        }
        if (cVar8 == '\0') {
            uVar7 = *(u32 *)(a1 + iVar2 + 8);
        } else {
            in_xd2 = *(u64 *)(a1 + iVar2 + 8);
        }
        uVar3 = uVar4 + 8;
        if (cVar8 == '\0') {
            *(u32 *)(auStack_60 + uVar4 + 4) = uVar7;
        } else {
            *(u64 *)(auStack_60 + uVar4 + 4) = in_xd2;
        }
        iVar2 = iVar2 + 0xc;
        uVar4 = uVar3;
    } while (uVar3 < 0x20);
    iVar1 = ninja_uses_noop_fr4_test_212946(auStack_40, auStack_60);
    if (iVar1 != 0) {
        uVar6 = uVar6 | 1;
    }
    return uVar6;
}

/*
 * ta_fifo_2137c0  0x8c2137c0
 * called by: gfxlib_uses_ta_fifo_233e10, ninja_draw_25afc0
 */
u32 ta_fifo_2137c0(u32 *a0, u32 a1, u32 a2, u32 a3) {
    u32 uVar1;
    u32 uVar2;
    u32 uVar3;
    u32 uVar4;
    u32 uVar5;

    uVar2 = a3 & 0xff;
    uVar5 = 0;
    uVar3 = (u32)0x1000;
    uVar4 = 0xff00 & a3;
    *a0 = a3 << 0x10;
    if ((uVar4 == uVar3) || (uVar4 == (int)0x1100)) {
        uVar3 = *a0 | 3;
    } else {
        uVar3 = *a0 | 2;
    }
    uVar1 = (u32)0x500;
    *a0 = uVar3;
    a0[1] = 1;
    uVar3 = 0x28000000;
    if ((uVar4 == uVar1) || (uVar4 == (int)0x600))
        goto LAB_8c21384c;
    uVar3 = 0x30000000;
    if ((uVar4 == (int)0x700) || (uVar4 == (int)0x800))
        goto LAB_8c213852;
    if (uVar2 == 0) {
        a0[2] = 0;
        goto LAB_8c213882;
    }
    uVar3 = 0x8000000;
    if (uVar2 == 1) {
    LAB_8c21384c:
        a0[2] = uVar3;
    } else {
        uVar3 = 0x10000000;
        if (uVar2 != 2) {
            uVar3 = 0x18000000;
            if (uVar2 == 3)
                goto LAB_8c21384c;
            uVar3 = 0x20000000;
            if (uVar2 != 4) {
                uVar5 = 4;
                goto LAB_8c213882;
            }
        }
    LAB_8c213852:
        a0[2] = uVar3;
    }
LAB_8c213882:
    a0[3] = a1;
    a0[4] = a2;
    if ((((a1 != 8) && (a1 != 0x10)) && (a1 != 0x20)) &&
        (((a1 != 0x40 && (a1 != (int)0x80)) && ((a1 != (int)0x100 && ((a1 != (int)0x200 && (a1 != (int)0x400)))))))) {
        uVar5 = 4;
    }
    if (((((a2 != 8) && (a2 != 0x10)) && (a2 != 0x20)) && ((a2 != 0x40 && (a2 != (int)0x80)))) &&
        ((a2 != (int)0x100 && ((a2 != (int)0x200 && (a2 != (int)0x400)))))) {
        uVar5 = 4;
    }
    if (((((uVar4 != (int)0x900) && (uVar4 != (int)0xb00)) && (uVar4 != (int)0xd00)) &&
         ((uVar4 != (int)0x500 && (uVar4 != (int)0x700)))) &&
        (a1 != a2)) {
        uVar5 = 4;
    }
    uVar2 = (u32)0xf00;
    a0[6] = 0;
    if (((uVar4 == uVar2) || (uVar4 == (int)0x200)) ||
        ((uVar4 == (int)0x400 || (((uVar4 == (int)0x1100 || (uVar4 == (int)0x600)) || (uVar4 == (int)0x800)))))) {
        a0[6] = a0[6] | 1;
    }
    if (((uVar4 == (int)0xe00) || (uVar4 == (int)0xf00)) ||
        ((uVar4 == (int)0x100 || ((uVar4 == (int)0x200 || (uVar4 == (int)0xd00)))))) {
        a0[6] = a0[6] | 4;
    }
    if ((((uVar4 == (int)0x300) || (uVar4 == (int)0x400)) || (uVar4 == (int)0x1000)) || (uVar4 == (int)0x1100)) {
        a0[6] = a0[6] | 0xc;
    }
    if (uVar4 == (int)0xb00) {
        a0[6] = a0[6] | 0x10;
    }
    if (((uVar4 == (int)0x500) || (uVar4 == (int)0x600)) || ((uVar4 == (int)0x700 || (uVar4 == (int)0x800)))) {
        a0[6] = a0[6] | 0x24;
    }
    if (uVar4 == (int)0x1200) {
        a0[6] = a0[6] | 5;
    }
    uVar2 = ta_calls_test_213a76(a0, a1, a2, 4);
    a0[5] = uVar2;
    return uVar5;
}

/*
 * ta_test_213a04  0x8c213a04
 * area name: sits between ta functions (same compilation unit); behaviour name: returns the result of a comparison
 * called by: alt_entry_213d12, alt_entry_213d8e, alt_entry_213de8, ninja_uses_vram64_25aa80, ninja_uses_vram64_25ab74,
 * ta_calls_test_213ab6, ta_calls_test_213d0e, ta_calls_test_213d3e (+4 more)
 */
u32 ta_test_213a04(u32 a0, u32 a1) {
    if (a1 <= a0) {
        a0 = a1;
    }
    if (a0 == 1) {
        return 0;
    }
    if (a0 == 2) {
        return 1;
    }
    if (a0 == 4) {
        return 2;
    }
    if (a0 == 8) {
        return 3;
    }
    if (a0 == 0x10) {
        return 4;
    }
    if (a0 == 0x20) {
        return 5;
    }
    if (a0 != 0x40) {
        if (a0 == (int)0x80) {
            return 7;
        }
        if (a0 == (int)0x100) {
            return 8;
        }
        if (a0 == (int)0x200) {
            return 9;
        }
        if (a0 != (int)0x400) {
            return 0xffffffff;
        }
        return 10;
    }
    return 6;
}

/*
 * ta_calls_test_213a76  0x8c213a76
 * area name: sits between ta functions (same compilation unit); behaviour name: its callees mostly do: calls_test
 * called by: ta_fifo_2137c0
 */
u32 ta_calls_test_213a76(u32 *a0, u32 unused_a1, u32 unused_a2, u32 a3) {
    u32 uVar1;

    if ((*a0 & 0xffff) == 3) {
        uVar1 = ta_calls_test_213de4(a0);
    } else if ((a0[6] & 8) == 0) {
        if ((a0[6] & 0x20) == 0) {
            uVar1 = ta_calls_test_213d0e(a0);
        } else {
            uVar1 = ta_calls_test_213d8a(a0);
        }
    } else {
        uVar1 = ta_calls_test_213d3e(a0);
    }
    return uVar1;
}

/*
 * ta_calls_test_213ab6  0x8c213ab6
 * area name: sits between ta functions (same compilation unit); behaviour name: its callees mostly do: test
 */
u32 ta_calls_test_213ab6(int a0, int a1, u32 a2) {
    int iVar1;
    u32 uVar2;
    u32 uVar3;

    iVar1 = ta_test_213a04(a0, a1);
    uVar3 = a0 * a1;
    uVar2 = a2 & 0xff00;
    iVar1 = iVar1 * 4;
    if ((((uVar2 == 0x100) || (uVar2 == 0xd00)) || (uVar2 == 0x900)) || (uVar2 == 0xb00)) {
        return uVar3 * 2;
    }
    if (uVar2 == 0x200) {
        return *(u32 *)(&g_8c277d50 + iVar1);
    }
    if (uVar2 != 0x300) {
        if (uVar2 == 0x1000) {
            uVar2 = *(int *)(&g_8c277ce0 + iVar1) + *(int *)(&g_8c277d18 + iVar1);
        } else if (uVar2 == 0x400) {
            uVar2 = (*(int *)(&g_8c277d50 + iVar1) + 4U >> 3) + 0x800;
        } else if (uVar2 == 0x1100) {
            uVar2 = *(int *)(&g_8c277cfc + iVar1) + *(int *)(&g_8c277d34 + iVar1);
        } else {
            if (uVar2 == 0x500) {
                return uVar3 >> 1;
            }
            if (uVar2 == 0x600) {
                uVar2 = *(int *)(&g_8c277d50 + iVar1) + 4U >> 2;
            } else {
                if (uVar2 == 0x700) {
                    return uVar3;
                }
                if (uVar2 != 0x800) {
                    return 0;
                }
                uVar2 = *(int *)(&g_8c277d50 + iVar1) + 4U >> 1;
            }
        }
        return uVar2;
    }
    return (uVar3 >> 2) + 0x800;
}

/*
 * ta_fifo_213bf4  0x8c213bf4
 */
u32 ta_fifo_213bf4(u32 *a0) {
    u16 uVar1;
    int iVar2;
    u32 uVar3;
    u32 uVar4;

    uVar4 = a0[1];
    uVar3 = *a0;
    uVar1 = *(u16 *)((int)a0 + 6);
    iVar2 = ta_test_213a04((u32)(u16)uVar4, (u32)uVar1);
    uVar4 = (u32)(u16)uVar4 * (u32)uVar1;
    uVar3 = uVar3 & 0xff00;
    iVar2 = iVar2 * 4;
    if ((((uVar3 == 0x100) || (uVar3 == 0xd00)) || (uVar3 == 0x900)) || (uVar3 == 0xb00)) {
        uVar4 = uVar4 * 2;
    } else if (uVar3 == 0x200) {
        uVar4 = *(u32 *)(&g_8c277d50 + iVar2);
    } else if (uVar3 == 0x300) {
        uVar4 = (uVar4 >> 2) + 0x800;
    } else if (uVar3 == 0x1000) {
        uVar4 = *(int *)(&g_8c277ce0 + iVar2) + *(int *)(&g_8c277d18 + iVar2);
    } else if (uVar3 == 0x400) {
        uVar4 = (*(int *)(&g_8c277d50 + iVar2) + 4U >> 3) + 0x800;
    } else if (uVar3 == 0x1100) {
        uVar4 = *(int *)(&g_8c277cfc + iVar2) + *(int *)(&g_8c277d34 + iVar2);
    } else if (uVar3 == 0x500) {
        uVar4 = uVar4 >> 1;
    } else if (uVar3 == 0x600) {
        uVar4 = *(int *)(&g_8c277d50 + iVar2) + 4U >> 2;
    } else if (uVar3 != 0x700) {
        if (uVar3 == 0x800) {
            uVar4 = *(int *)(&g_8c277d50 + iVar2) + 4U >> 1;
        } else {
            uVar4 = 0;
        }
    }
    return uVar4;
}

/*
 * ta_calls_test_213d0e  0x8c213d0e
 * area name: sits between ta functions (same compilation unit); behaviour name: its callees mostly do: test
 * called by: ta_calls_test_213a76
 */
int ta_calls_test_213d0e(int a0) {
    int iVar1;

    if ((*(u32 *)(a0 + 0x18) & 1) == 0) {
        iVar1 = *(int *)(a0 + 0xc) * *(int *)(a0 + 0x10) * 2;
    } else {
        iVar1 = ta_test_213a04(*(int *)(a0 + 0xc), *(int *)(a0 + 0x10));
        iVar1 = *(int *)(&g_8c277d50 + iVar1 * 4) + 4;
    }
    return iVar1;
}

/*
 * alt_entry_213d12  0x8c213d12
 * probably an entry 4 bytes into 8c213d0e: it reads registers that code sets before it
 */
int alt_entry_213d12(void) {
    int iVar1;
    int unaff_r14;

    if ((*(u32 *)(unaff_r14 + 0x18) & 1) == 0) {
        iVar1 = *(int *)(unaff_r14 + 0xc) * *(int *)(unaff_r14 + 0x10) * 2;
    } else {
        iVar1 = ta_test_213a04(*(int *)(unaff_r14 + 0xc), *(int *)(unaff_r14 + 0x10));
        iVar1 = *(int *)(&g_8c277d50 + iVar1 * 4) + 4;
    }
    return iVar1;
}

/*
 * ta_calls_test_213d3e  0x8c213d3e
 * area name: sits between ta functions (same compilation unit); behaviour name: its callees mostly do: test
 * called by: ta_calls_test_213a76
 */
int ta_calls_test_213d3e(int a0) {
    int iVar1;
    u32 uVar2;

    if ((*(u32 *)(a0 + 0x18) & 1) == 0) {
        uVar2 = (u32)(*(int *)(a0 + 0xc) * *(int *)(a0 + 0x10)) >> 2;
        if ((*(int *)(a0 + 0xc) == 8) && (*(int *)(a0 + 0x10) == 8)) {
            uVar2 = uVar2 + 0x10;
        }
    } else {
        iVar1 = ta_test_213a04(*(int *)(a0 + 0xc), *(int *)(a0 + 0x10));
        uVar2 = (*(int *)(&g_8c277d50 + iVar1 * 4) + 4U >> 3) + 10;
    }
    return uVar2 + 0x800;
}

/*
 * ta_calls_test_213d8a  0x8c213d8a
 * area name: sits between ta functions (same compilation unit); behaviour name: its callees mostly do: test
 * called by: ta_calls_test_213a76
 */
u32 ta_calls_test_213d8a(int a0) {
    int iVar1;
    u32 uVar2;

    if ((*(u32 *)(a0 + 0x18) & 1) == 0) {
        uVar2 = *(int *)(a0 + 0xc) * *(int *)(a0 + 0x10);
    } else {
        iVar1 = ta_test_213a04(*(int *)(a0 + 0xc), *(int *)(a0 + 0x10));
        uVar2 = *(int *)(&g_8c277d50 + iVar1 * 4) + 4U >> 1;
        if (*(int *)(a0 + 8) == 0x28000000) {
            uVar2 = uVar2 + 0x28;
        } else {
            uVar2 = uVar2 + 8;
        }
    }
    if (*(int *)(a0 + 8) == 0x28000000) {
        uVar2 = uVar2 >> 1;
    }
    return uVar2;
}

/*
 * alt_entry_213d8e  0x8c213d8e
 * probably an entry 4 bytes into 8c213d8a: it reads registers that code sets before it
 */
u32 alt_entry_213d8e(void) {
    int iVar1;
    u32 uVar2;
    int unaff_r14;

    if ((*(u32 *)(unaff_r14 + 0x18) & 1) == 0) {
        uVar2 = *(int *)(unaff_r14 + 0xc) * *(int *)(unaff_r14 + 0x10);
    } else {
        iVar1 = ta_test_213a04(*(int *)(unaff_r14 + 0xc), *(int *)(unaff_r14 + 0x10));
        uVar2 = *(int *)(&g_8c277d50 + iVar1 * 4) + 4U >> 1;
        if (*(int *)(unaff_r14 + 8) == 0x28000000) {
            uVar2 = uVar2 + 0x28;
        } else {
            uVar2 = uVar2 + 8;
        }
    }
    if (*(int *)(unaff_r14 + 8) == 0x28000000) {
        uVar2 = uVar2 >> 1;
    }
    return uVar2;
}

/*
 * ta_calls_test_213de4  0x8c213de4
 * area name: sits between ta functions (same compilation unit); behaviour name: its callees mostly do: test
 * called by: ta_calls_test_213a76
 */
int ta_calls_test_213de4(int a0) {
    int iVar1;

    iVar1 = ta_test_213a04(*(u32 *)(a0 + 0xc), *(u32 *)(a0 + 0x10));
    iVar1 = iVar1 * 4;
    if ((*(u32 *)(a0 + 0x18) & 1) == 0) {
        iVar1 = *(int *)(&g_8c277ce0 + iVar1) + *(int *)(&g_8c277d18 + iVar1);
    } else {
        iVar1 = *(int *)(&g_8c277cfc + iVar1) + *(int *)(&g_8c277d34 + iVar1) + 10;
    }
    return iVar1;
}

/*
 * alt_entry_213de8  0x8c213de8
 * probably an entry 4 bytes into 8c213de4: it reads registers that code sets before it
 */
int alt_entry_213de8(void) {
    int iVar1;
    int unaff_r14;

    iVar1 = ta_test_213a04(*(u32 *)(unaff_r14 + 0xc), *(u32 *)(unaff_r14 + 0x10));
    iVar1 = iVar1 * 4;
    if ((*(u32 *)(unaff_r14 + 0x18) & 1) == 0) {
        iVar1 = *(int *)(&g_8c277ce0 + iVar1) + *(int *)(&g_8c277d18 + iVar1);
    } else {
        iVar1 = *(int *)(&g_8c277cfc + iVar1) + *(int *)(&g_8c277d34 + iVar1) + 10;
    }
    return iVar1;
}

/*
 * ta_vec_213e2c  0x8c213e2c
 * area name: sits between ta functions (same compilation unit); behaviour name: mostly calls vec functions
 * called by: ninja_vec_2572ec
 */
u32 ta_vec_213e2c(u32 unused_a0, u32 unused_a1, u32 a2, u32 a3) {
    u32 uVar1;
    u32 uVar2;
    u64 *ar4_00;
    u32 uVar3;
    char cVar4;

    ar4_00 = g_8c4aa4c0;
    uVar2 = g_8c278788;
    uVar1 = g_8c278784;
    uVar3 = g_8c278780;
    cVar4 = '\0';
    g_8c4aa5a0 = 1;
    *(u32 *)((int)g_8c4aa4c0 + 0x1c) = g_8c27878c;
    *(u32 *)(ar4_00 + 3) = uVar2;
    *(u32 *)((int)ar4_00 + 0x14) = uVar1;
    *(u32 *)(ar4_00 + 2) = uVar3;
    uVar2 = g_8c278758;
    uVar1 = g_8c278754;
    uVar3 = g_8c278750;
    *(u32 *)((int)ar4_00 + 0xc) = g_8c27875c;
    *(u32 *)(ar4_00 + 1) = uVar2;
    *(u32 *)((int)ar4_00 + 4) = uVar1;
    g_8c4aa4bc = ar4_00;
    *(u32 *)ar4_00 = uVar3;
    uVar3 = matrix_scale(ar4_00, &g_8c278760, a2, a3, &g_8c4aa5a0);
    uVar3 = ninja_update_fields_255d6c(ar4_00, g_8c4c0cc0, a2, a3, uVar3);
    if (cVar4 == '\0') {
        g_8c4c0d00 = *ar4_00;
        g_8c4c0d08 = ar4_00[1];
        g_8c4c0d10 = ar4_00[2];
        g_8c4c0d18 = CONCAT44(*(u32 *)((int)ar4_00 + 0x1c), g_8c4c0d18);
        g_8c4c0d18 = *(u32 *)(ar4_00 + 3);
    } else {
        uRam8c4c0ce0 = *ar4_00;
        uRam8c4c0ce8 = ar4_00[1];
        uRam8c4c0cf0 = ar4_00[2];
        uRam8c4c0cf8 = ar4_00[3];
        g_8c4c0d00 = ar4_00[4];
        g_8c4c0d08 = ar4_00[5];
        g_8c4c0d10 = ar4_00[6];
        g_8c4c0d18 = ar4_00[7];
    }
    return uVar3;
}

/*
 * ta_vec_213e32  0x8c213e32
 * area name: sits between ta functions (same compilation unit); behaviour name: mostly calls vec functions
 */
u32 ta_vec_213e32(u32 unused_a0, u32 unused_a1, u32 a2, u32 a3, u32 *ain0, u32 ain1) {
    u32 uVar1;
    u32 *puVar2;
    u32 *ar5_00;
    u32 *puVar3;
    u64 uVar4;
    u32 uVar5;
    u64 uVar6;
    u64 uVar9;
    u32 in_PR;
    u32 uVar8;
    u32 uVar11;

    puVar3 = g_8c4aa4c0;
    *ain0 = ain1;

    uVar4 = (u64)*puVar3;
    uVar6 = (u64)puVar3[1];
    uVar9 = CONCAT44(0x3f800000, puVar3[2]);
    puVar2 = &g_8c278790;
    puVar3 = puVar3 + 7;
    *puVar3 = 0;

    puVar3[-1] = (u32)((u64)uVar9 >> 0x20);
    puVar3[-2] = 0;
    puVar3[-3] = 0;
    uVar5 = puVar2[-0x10];
    uVar8 = puVar2[-0xf];
    uVar11 = puVar2[-0xe];
    ar5_00 = puVar2 + -0xc;
    puVar3[-4] = puVar2[-0xd];
    puVar3[-5] = uVar11;
    puVar3[-6] = uVar8;
    puVar3 = puVar3 + -7;
    *puVar3 = uVar5;

    g_8c4aa4bc = puVar3;
    matrix_scale(puVar3, ar5_00, a2, a3, in_PR);
    uVar1 = ninja_update_fields_255d6c(puVar3, g_8c4c0cc0, a2, a3, in_PR);

    g_8c4c0d00 = *(u64 *)puVar3;
    g_8c4c0d08 = *(u64 *)(puVar3 + 2);
    g_8c4c0d10 = *(u64 *)(puVar3 + 4);
    g_8c4c0d18 = CONCAT44(puVar3[7], g_8c4c0d18);
    g_8c4c0d18 = puVar3[6];

    return uVar1;
}

/*
 * ta_float_calc_213ee4  0x8c213ee4
 * area name: sits between ta functions (same compilation unit); behaviour name: floating-point arithmetic
 * called by: game_init
 */
u32 ta_float_calc_213ee4(void) {
    float fVar1;
    float fVar2;
    u64 in_dr4;

    fVar1 = (float)((u64)in_dr4 >> 0x20);
    if (-1.0 < fVar1) {
        in_dr4 = CONCAT44(0xbf800000, (int)in_dr4);
    }
    fVar2 = (float)in_dr4;
    if (fVar1 < -65535.0) {
        in_dr4 = CONCAT44(0xc77fff00, fVar2);
    }
    fVar1 = (float)in_dr4;
    if (-1.0 < fVar2) {
        in_dr4 = CONCAT44((int)((u64)in_dr4 >> 0x20), 0xbf800000);
    }
    fVar2 = (float)in_dr4;
    if (fVar1 < -65535.0) {
        fVar2 = -65535.0;
    }
    g_8c4aa4d4 = -(float)((u64)in_dr4 >> 0x20);
    g_8c4aa4d8 = -fVar2;
    return 0x8c213f18;
}

/*
 * ta_fifo_213f28  0x8c213f28
 * called by: gfxlib_uses_njUnitVector_2163d4, gfxlib_uses_njUnitVector_2166e8
 */
u32 ta_fifo_213f28(float *a0) {
    u32 uVar1;
    float *pfVar2;
    float fVar3;
    float fVar4;
    float fVar5;
    float fVar6;

    pfVar2 = a0 + 2;
    uVar1 = 0;
    fVar3 = *pfVar2 * *pfVar2 + *a0 * *a0;
    if ((((u32)*pfVar2 | (u32)*a0) & 0x7fffffff) < 0x10000000) {
        fVar6 = 1.0;
        fVar4 = 0.0;
    } else if ((u32)ABS(*a0) < (u32)ABS(*pfVar2)) {
        fVar6 = *pfVar2;
        uVar1 = 1;
        fVar4 = *a0;
    } else {
        fVar6 = *a0;
        fVar4 = *pfVar2;
    }
    if (((u32)a0[1] & 0x80000000) == 0) {
        fVar5 = a0[1];
    } else {
        fVar5 = 1e-05;
    }
    fVar4 = ABS((43.562813 - ABS(fVar4 / fVar6) * 11.562812) * ABS(fVar4 / fVar6) -
                *(float *)(&g_8c26d728 + (uVar1 | (int)*pfVar2 >> 0x1d & 4U | (int)*a0 >> 0x1e & 2U) * 4)) -
            64.0;
    fVar3 = SQRT(fVar3 / (fVar5 * fVar5 + fVar3)) * 255.0;
    if (fVar4 < 0.0) {
        fVar4 = fVar4 + 255.0;
    }
    if (fVar4 <= 255.0) {
        uVar1 = (int)fVar4 & 0xff;
    } else {
        uVar1 = 0xff;
    }
    if (fVar3 <= 255.0) {
        uVar1 = uVar1 | ((int)fVar3 & 0xffU) << 8;
    } else {
        uVar1 = uVar1 | 0xff00;
    }
    return uVar1 | 0x80000000;
}

/*
 * kamui_uses_switch_jump_r0_2140a4  0x8c2140a4
 * area name: in the kamui library code range; behaviour name: its main named callee is switch_jump_r0
 * called by: game_init_sound_and_messages
 */
int kamui_uses_switch_jump_r0_2140a4(int a0) {
    u8 *puVar1;
    u8 auStack_20[32];

    puVar1 = auStack_20;
    switch_jump_r0(0x1c, auStack_20, &g_8c26d748);
    g_8c4c0db0 = *(u32 *)(puVar1 + a0 * 4);
    return a0 * 4;
}

/*
 * flags_4c0db0_set  0x8c2140c6
 * sets or clears (a1) flag a0 of the bit set at 0x8c4c0db0
 * called by: Class_12ab2c_uses_flags_4c0ed0_set_09efb4, Class_12ab2c_uses_light_set_vec_09ea78,
 * Class_12ab2c_uses_light_set_vec_09edf0, game_init_sound_and_messages, lights_2_to_4_off
 */
u32 flags_4c0db0_set(int a0, int a1) {
    u32 auStack_20[8];

    switch_jump_r0(0x1c, auStack_20, &g_8c26d764);
    if (a1 == 0) {
        g_8c4c0db0 = g_8c4c0db0 & ~auStack_20[a0];
    } else {
        g_8c4c0db0 = g_8c4c0db0 | auStack_20[a0];
    }
    return g_8c4c0db0;
}

/*
 * set_vec_4c0db4  0x8c2140fe
 * stores fr4..fr6 at 8c4c0db4
 * called by: Vec3_uses_set_vec_0e3f24
 */
u32 set_vec_4c0db4(u32 unused_a0, u32 unused_a1, u32 unused_a2, u32 unused_a3, u32 ain0) {
    u32 in_fr5;
    u32 in_fr4;
    u32 in_fr6;

    g_8c4c0db4 = in_fr4;
    g_8c4c0db8 = in_fr5;
    g_8c4c0dbc = in_fr6;
    return ain0;
}

/*
 * light_set_vec_4c0dd4  0x8c21410c
 * stores fr4..fr6 in light slot a0 (1-based, 0x20 bytes each at 0x8c4c0dd4)
 * called by: Class_12ab2c_uses_light_set_vec_09ea78, Class_12ab2c_uses_light_set_vec_09edf0, Vec3_uses_set_vec_0e3f24
 */
u32 light_set_vec_4c0dd4(int a0, u32 unused_a1, u32 unused_a2, u32 unused_a3, u32 ain0) {
    int iVar1;
    u32 in_fr5;
    u32 in_fr4;
    u32 in_fr6;

    iVar1 = (a0 + -1) * 0x20;
    *(u32 *)(iVar1 + 0x8c4c0dd4) = in_fr4;
    *(u32 *)(iVar1 + 0x8c4c0dd8) = in_fr5;
    *(u32 *)(iVar1 + 0x8c4c0ddc) = in_fr6;
    return ain0;
}

/*
 * kamui_float_calc_214158  0x8c214158
 * area name: in the kamui library code range; behaviour name: floating-point arithmetic
 * called by: Vec3_uses_set_vec_0e3f24
 */
u32 kamui_float_calc_214158(u32 unused_a0, u32 unused_a1, u32 unused_a2, u32 unused_a3, u32 ain0) {
    u32 in_fr5;
    u32 in_fr4;
    u32 in_fr6;

    uRam8c4c0d60 = in_fr4;
    uRam8c4c0d64 = in_fr5;
    uRam8c4c0d68 = in_fr6;
    g_8c4c0db0 = g_8c4c0db0 & 0xfffffffd;
    return ain0;
}

/*
 * light_set_vector_b  0x8c21415c
 * stores fr4..fr6 as the vector of light a0 (1-based) at 0x8c4c0d60 and marks it set in 8c4c0db0
 * called by: Class_12ab2c_uses_light_set_vec_09ea78, Class_12ab2c_uses_light_set_vec_09edf0
 */
u32 light_set_vector_b(int a0, u32 unused_a1, u32 unused_a2, u32 unused_a3, u32 ain0) {
    int iVar1;
    u32 uVar2;
    u32 in_fr5;
    u32 in_fr4;
    u32 in_fr6;

    iVar1 = (a0 + -1) * 0xc;
    *(u32 *)(iVar1 + 0x8c4c0d60) = in_fr4;
    *(u32 *)(iVar1 + 0x8c4c0d64) = in_fr5;
    *(u32 *)(iVar1 + 0x8c4c0d68) = in_fr6;
    uVar2 = (a0 + -1) * 3;
    if ((int)uVar2 < 0) {
        uVar2 = 2 >> (~uVar2 & 0x1f) + 1;
    } else {
        uVar2 = 2 << (uVar2 & 0x1f);
    }
    g_8c4c0db0 = uVar2 | g_8c4c0db0;
    return ain0;
}

/*
 * kamui_float_calc_21418e  0x8c21418e
 * area name: in the kamui library code range; behaviour name: floating-point arithmetic
 * called by: Class_12ab2c_uses_flags_4c0ed0_set_09dde4
 */
u32 kamui_float_calc_21418e(int a0, u32 unused_a1, u32 unused_a2, u32 unused_a3, u32 ain0) {
    int iVar1;
    u64 in_dr4;
    float fVar2;

    fVar2 = (float)((u64)in_dr4 >> 0x20);
    iVar1 = (a0 + -1) * 0x20;
    *(float *)(iVar1 + 0x8c4c0dcc) = (float)in_dr4 * (float)in_dr4;
    *(float *)(iVar1 + 0x8c4c0dd0) = fVar2 * fVar2;
    return ain0;
}

/*
 * kamui_lights_transform_0d60  0x8c2141a6
 * transforms each light of the table at 8c4c0d60 (flags +0x50: 3 bits per light) as a direction or a point into
 * 8c4c0dc0 called by: Vec3_uses_set_vec_0e3f24
 */
u32 kamui_lights_transform_0d60(void) {
    u8 *puVar1;
    u8 *puVar2;
    u32 in_r0;
    int iVar3;
    int iVar4;
    u32 uVar5;

    puVar2 = (&njCalcVector_like);
    puVar1 = (&point_transform_or_copy);
    uVar5 = *(u32 *)(0x8c4c0d60 + 0x50);
    iVar3 = 0x8c4c0dc0;
    iVar4 = 0x8c4c0d60;
    while (true) {
        if ((uVar5 & 1) != 0) {
            if ((uVar5 >> 1 & 1) == 0) {
                in_r0 = (*(code *)puVar2)(0, iVar4, iVar3);
            } else {
                in_r0 = (*(code *)puVar1)(0, iVar4, iVar3);
            }
        }
        if ((uVar5 >> 2 & 1) != 0)
            break;
        iVar4 = iVar4 + 0xc;
        uVar5 = uVar5 >> 3;
        iVar3 = iVar3 + 0x20;
    }
    return in_r0;
}

/*
 * alt_entry_2141ba  0x8c2141ba
 * probably an entry 20 bytes into 8c2141a6: it reads registers that code sets before it
 */
u32 alt_entry_2141ba(int a0, u32 unused_a1, u32 unused_a2, u32 a3) {
    u8 *puVar1;
    u8 *puVar2;
    u32 in_r0;
    u32 unaff_r11;
    int a6;
    u32 *unaff_r14;
    u32 uVar3;

    puVar2 = (&njCalcVector_like);
    puVar1 = (&point_transform_or_copy);
    uVar3 = *unaff_r14;
    a6 = 0x8c4c0dc0;
    while (true) {
        if ((uVar3 & unaff_r11) != 0) {
            if ((uVar3 >> 1 & 1) == 0) {
                in_r0 = (*(code *)puVar2)(0, a0, a6, a3);
            } else {
                in_r0 = (*(code *)puVar1)(0, a0, a6, a3);
            }
        }
        if ((uVar3 >> 2 & 1) != 0)
            break;
        a0 = a0 + 0xc;
        uVar3 = uVar3 >> 3;
        a6 = a6 + 0x20;
    }
    return in_r0;
}

/*
 * kamui_fill_loop_21423c  0x8c21423c
 * area name: sits between kamui functions (same compilation unit); behaviour name: a loop that writes memory
 * called by: vram_draw_218804
 */
u32 *kamui_fill_loop_21423c(short *a0, int a1, u32 a2, u32 *a3) {
    u32 uVar1;
    int iVar2;
    int iVar3;
    short *psVar4;
    int iVar5;
    u32 *puVar6;
    u32 *puVar7;
    int iVar8;
    u32 uVar9;
    u32 uVar10;
    float in_fr4;
    float in_fr6;
    float in_fr9;
    float fVar11;
    float fVar12;

    uVar1 = a2 & 0x3fff;
    iVar2 = 0;
    iVar3 = 0;
    do {
        iVar5 = (int)*a0;
        psVar4 = a0 + 2;
        puVar6 = (u32 *)(a0[1] * 0x20 + a1);
        if (iVar5 < 0) {
            iVar5 = -iVar5;
        }
        iVar3 = iVar3 + iVar5;
        uVar9 = *puVar6;
        iVar2 = iVar2 + iVar5;
        uVar10 = puVar6[1];
        iVar5 = iVar5 + -2;
        fVar11 = (float)puVar6[2];
        a0 = a0 + 3;
        puVar7 = (u32 *)(*psVar4 * 0x20 + a1);
        a3[7] = (float)puVar6[3] * in_fr6 + in_fr9;
        a3[6] = fVar11 * in_fr4;
        a3[5] = uVar10;
        puVar6 = a3 + 4;
        *puVar6 = uVar9;
        *puVar6 = 0xe0000000;
        uVar9 = *puVar7;
        uVar10 = puVar7[1];
        fVar11 = (float)puVar7[2] * in_fr4;
        fVar12 = (float)puVar7[3] * in_fr6;
        do {
            puVar7 = puVar6;
            iVar8 = *a0 * 0x20 + a1;
            puVar7[0xf] = fVar12 + in_fr9;
            puVar7[0xe] = fVar11;
            a0 = a0 + (a2 >> 0xe & 3) + 1;
            puVar7[0xd] = uVar10;
            puVar6 = puVar7 + 0xc;
            *puVar6 = uVar9;
            *puVar6 = 0xe0000000;
            iVar5 = iVar5 + -1;
            fVar11 = *(float *)(iVar8 + 0x10) * in_fr4;
            fVar12 = *(float *)(iVar8 + 0x14) * in_fr6;
            uVar9 = *(u32 *)(iVar8 + -8);
            uVar10 = *(u32 *)(iVar8 + -4);
        } while (iVar5 != 0);
        puVar7[0x1b] = fVar12 + in_fr9;
        puVar7[0x1a] = fVar11;
        puVar7[0x19] = uVar10;
        uVar1 = uVar1 - 1;
        puVar7[0x18] = uVar9;
        puVar7[0x18] = 0xf0000000;
        a3 = puVar7 + 0x20;
    } while (uVar1 != 0);
    g_8c4aa520 = g_8c4aa520 + iVar2;
    g_8c4aa51c = g_8c4aa51c + iVar3;
    return a3;
}

/*
 * kamui_calls_fill_loop_214358  0x8c214358
 * area name: sits between kamui functions (same compilation unit); behaviour name: its callees mostly do: fill_loop
 * called by: vram_draw_218804
 */
double *kamui_calls_fill_loop_214358(short *a0, int a1, u32 a2, double *a3) {
    u32 uVar1;
    int iVar2;
    int iVar3;
    short *psVar4;
    int iVar5;
    double *pdVar6;
    int iVar7;
    double *pdVar8;
    double *pdVar9;
    double *pdVar10;
    int iVar11;
    int *piVar12;
    u64 *puVar13;
    double *pdVar14;
    double *pdVar15;
    double *pdVar16;
    int *piVar17;
    double in_dr0;
    double dVar18;
    double in_dr2;
    double dVar19;
    float fVar20;
    double in_dr4;
    float fVar21;
    float fVar22;
    double in_dr6;
    float fVar23;
    float fVar24;
    double in_dr8;
    float fVar25;
    float fVar26;
    u64 in_dr10;
    double dVar27;
    float fVar28;
    u32 uVar29;
    double in_dr12;
    double dVar30;
    double in_dr14;
    double dVar31;
    u64 in_xd4;
    u64 in_xd6;
    u64 in_xd8;
    bool bVar32;
    char cVar33;
    char cVar34;
    u8 auStack_30[4];
    u32 uStack_2c;
    u32 uStack_28;
    u32 uStack_24;
    u32 uStack_20;

    cVar34 = '\0';
    cVar33 = '\0';
    uStack_20 = (u32)((u64)in_dr12 >> 0x20);
    uStack_24 = SUB84(in_dr12, 0);
    uStack_28 = (u32)((u64)in_dr14 >> 0x20);
    uStack_2c = SUB84(in_dr14, 0);
    piVar12 = (int *)auStack_30;
    uVar1 = a2 & 0x3fff;
    iVar2 = 0;
    dVar27 = (double)CONCAT44((int)((u64)in_dr10 >> 0x20), 0x3f800000);
    iVar3 = 0;
    iVar5 = (a2 >> 0xe & 3) << 1;
    do {
        iVar7 = (int)*a0;
        psVar4 = a0 + 2;
        pdVar8 = (double *)(a0[1] * 0x20 + a1);
        if (iVar7 < 0) {
            iVar7 = -iVar7;
        }
        iVar3 = iVar3 + iVar7;
        iVar7 = iVar7 + -2;
        iVar11 = 0;
        a0 = a0 + 3;
        pdVar9 = (double *)(*psVar4 * 0x20 + a1);
        do {
            psVar4 = a0 + 1;
            if (cVar34 == '\0') {
                dVar18 = (double)CONCAT44(*(u32 *)pdVar8, SUB84(in_dr0, 0));
            } else {
                dVar18 = *pdVar8;
            }
            pdVar10 = (double *)(*a0 * 0x20 + a1);
            fVar26 = SUB84(dVar27, 0);
            if (cVar33 == '\0') {
                bVar32 = (float)((u64)dVar18 >> 0x20) < fVar26;
            } else {
                bVar32 = dVar18 < dVar27;
            }
            if (cVar34 == '\0') {
                dVar19 = (double)CONCAT44(*(u32 *)pdVar9, SUB84(in_dr2, 0));
            } else {
                dVar19 = *pdVar9;
            }
            fVar28 = (float)((u64)dVar27 >> 0x20);
            fVar20 = SUB84(in_dr4, 0);
            fVar21 = (float)((u64)in_dr4 >> 0x20);
            fVar22 = SUB84(in_dr6, 0);
            fVar23 = (float)((u64)in_dr6 >> 0x20);
            fVar24 = SUB84(in_dr8, 0);
            fVar25 = (float)((u64)in_dr8 >> 0x20);
            if (bVar32) {
            LAB_8c214432:
                if (iVar11 != 0) {
                    if (cVar34 == '\0') {
                        dVar30 = (double)CONCAT44(*(u32 *)(pdVar9 + 2), SUB84(in_dr12, 0));
                        pdVar9 = (double *)((int)pdVar9 + 0x14);
                    } else {
                        dVar30 = pdVar9[2];
                        pdVar9 = pdVar9 + 3;
                    }
                    if (cVar33 == '\0') {
                        dVar30 = (double)CONCAT44((float)((u64)dVar30 >> 0x20) * fVar21, SUB84(dVar30, 0));
                    } else {
                        dVar30 = dVar30 * in_dr4;
                    }
                    if (cVar34 == '\0') {
                        dVar31 = (double)CONCAT44(*(u32 *)pdVar9, SUB84(in_dr14, 0));
                        pdVar9 = (double *)((int)pdVar9 + 4);
                    } else {
                        dVar31 = *pdVar9;
                        pdVar9 = pdVar9 + 1;
                    }
                    if (cVar33 == '\0') {
                        dVar30 = (double)CONCAT44((int)((u64)dVar30 >> 0x20), SUB84(dVar30, 0) * fVar20);
                        dVar31 = (double)CONCAT44((float)((u64)dVar31 >> 0x20) * fVar23, SUB84(dVar31, 0));
                    } else {
                        dVar30 = dVar30 * in_dr4;
                        dVar31 = dVar31 * in_dr6;
                    }
                    if (cVar34 == '\0') {
                        dVar18 = (double)CONCAT44(*(u32 *)(pdVar9 + -4), SUB84(dVar18, 0));
                        pdVar9 = (double *)((int)pdVar9 + -0x1c);
                    } else {
                        dVar18 = pdVar9[-4];
                        pdVar9 = pdVar9 + -3;
                    }
                    if (cVar33 == '\0') {
                        dVar31 = (double)CONCAT44((int)((u64)dVar31 >> 0x20), SUB84(dVar31, 0) * fVar22);
                    } else {
                        dVar31 = dVar31 * in_dr6;
                    }
                    if (cVar34 == '\0') {
                        dVar19 = (double)CONCAT44(*(u32 *)pdVar9, SUB84(dVar19, 0));
                        pdVar9 = (double *)((int)pdVar9 + 4);
                    } else {
                        dVar19 = *pdVar9;
                        pdVar9 = pdVar9 + 1;
                    }
                    if (cVar33 == '\0') {
                        in_dr12 = (double)CONCAT44((int)((u64)dVar30 >> 0x20), SUB84(dVar30, 0) + fVar25);
                        in_dr14 = (double)CONCAT44((float)((u64)dVar31 >> 0x20) + fVar24, SUB84(dVar31, 0) + fVar28);
                    } else {
                        in_dr12 = dVar30 + in_dr8;
                        in_dr14 = dVar31 + in_dr8 + dVar27;
                    }
                    pdVar9 = pdVar9 + -2;
                    if (cVar34 == '\0') {
                        *(int *)((int)a3 + 0x1c) = (int)((u64)in_dr14 >> 0x20);
                        pdVar6 = a3 + 3;
                        *(int *)pdVar6 = (int)((u64)in_dr12 >> 0x20);
                    } else {
                        a3[3] = in_dr14;
                        pdVar6 = a3 + 2;
                        *pdVar6 = in_dr12;
                    }
                    iVar2 = iVar2 + iVar11 + 1;
                    if (cVar34 == '\0') {
                        pdVar6 = (double *)((int)pdVar6 + -4);
                        *(int *)pdVar6 = (int)((u64)dVar19 >> 0x20);
                    } else {
                        pdVar6 = pdVar6 + -1;
                        *pdVar6 = dVar19;
                    }
                    iVar11 = 0;
                    if (cVar34 == '\0') {
                        pdVar6 = (double *)((int)pdVar6 + -4);
                        *(int *)pdVar6 = (int)((u64)dVar18 >> 0x20);
                    } else {
                        pdVar6 = pdVar6 + -1;
                        *pdVar6 = dVar18;
                    }
                    *(u32 *)pdVar6 = 0xf0000000;
                    a3 = pdVar6 + 4;
                }
                if (cVar34 == '\0') {
                    in_dr0 = (double)CONCAT44(*(u32 *)pdVar8, SUB84(dVar18, 0));
                } else {
                    in_dr0 = *pdVar8;
                }
                if (cVar33 == '\0') {
                    bVar32 = (float)((u64)in_dr0 >> 0x20) < fVar26;
                } else {
                    bVar32 = in_dr0 < dVar27;
                }
                if (cVar34 == '\0') {
                    in_dr2 = (double)CONCAT44(*(u32 *)pdVar9, SUB84(dVar19, 0));
                } else {
                    in_dr2 = *pdVar9;
                }
                if (bVar32) {
                    if (cVar33 == '\0') {
                        bVar32 = (float)((u64)in_dr2 >> 0x20) < fVar26;
                    } else {
                        bVar32 = in_dr2 < dVar27;
                    }
                    if (cVar34 == '\0') {
                        in_dr0 = (double)CONCAT44(*(u32 *)pdVar10, SUB84(in_dr0, 0));
                    } else {
                        in_dr0 = *pdVar10;
                    }
                    if (bVar32) {
                        if (cVar33 == '\0') {
                            bVar32 = (float)((u64)in_dr0 >> 0x20) < fVar26;
                        } else {
                            bVar32 = in_dr0 < dVar27;
                        }
                        if (bVar32)
                            goto LAB_8c21447a;
                    }
                }
                *(u32 *)((int)piVar12 + -4) = uVar1;
                *(int *)((int)piVar12 + -8) = iVar2;
                *(int *)((int)piVar12 + -0xc) = iVar3;
                *(short **)((int)piVar12 + -0x10) = psVar4;
                *(int *)((int)piVar12 + -0x14) = a1;
                *(int *)((int)piVar12 + -0x18) = iVar5;
                if (cVar34 == '\0') {
                    *(float *)((int)piVar12 + -0x1c) = fVar21;
                    *(float *)((int)piVar12 + -0x20) = fVar20;
                    *(float *)((int)piVar12 + -0x24) = fVar23;
                    *(float *)((int)piVar12 + -0x28) = fVar22;
                    *(float *)((int)piVar12 + -0x2c) = fVar25;
                    *(float *)((int)piVar12 + -0x30) = fVar24;
                    puVar13 = (u64 *)((int)piVar12 + -0x34);
                    *(float *)((int)piVar12 + -0x34) = fVar28;
                } else {
                    *(double *)((int)piVar12 + -0x20) = in_dr4;
                    *(u64 *)((int)piVar12 + -0x28) = in_xd4;
                    *(double *)((int)piVar12 + -0x30) = in_dr6;
                    *(u64 *)((int)piVar12 + -0x38) = in_xd6;
                    *(double *)((int)piVar12 + -0x40) = in_dr8;
                    *(u64 *)((int)piVar12 + -0x48) = in_xd8;
                    puVar13 = (u64 *)((int)piVar12 + -0x50);
                    *(double *)((int)piVar12 + -0x50) = dVar27;
                }
                a3 = (double *)kamui_fill_loop_214554(pdVar8, pdVar9, pdVar10, a3);
                if (cVar34 == '\0') {
                    uVar29 = *(u32 *)puVar13;
                    pdVar14 = (double *)((int)puVar13 + 4);
                    pdVar15 = (double *)((int)puVar13 + 0xc);
                    pdVar16 = (double *)((int)puVar13 + 0x14);
                    piVar17 = (int *)((int)puVar13 + 0x1c);
                } else {
                    uVar29 = (u32)((u64)*puVar13 >> 0x20);
                    in_xd8 = puVar13[1];
                    pdVar14 = (double *)(puVar13 + 2);
                    in_xd6 = puVar13[3];
                    pdVar15 = (double *)(puVar13 + 4);
                    in_xd4 = puVar13[5];
                    pdVar16 = (double *)(puVar13 + 6);
                    piVar17 = (int *)(puVar13 + 7);
                }
                in_dr8 = *pdVar14;
                in_dr6 = *pdVar15;
                in_dr4 = *pdVar16;
                iVar5 = *piVar17;
                a1 = piVar17[1];
                psVar4 = (short *)piVar17[2];
                iVar3 = piVar17[3];
                iVar2 = piVar17[4];
                uVar1 = piVar17[5];
                piVar12 = piVar17 + 6;
                dVar27 = (double)CONCAT44(uVar29, 0x3f800000);
            } else {
                if (cVar33 == '\0') {
                    bVar32 = (float)((u64)dVar19 >> 0x20) < fVar26;
                } else {
                    bVar32 = dVar19 < dVar27;
                }
                if (cVar34 == '\0') {
                    in_dr12 = (double)CONCAT44(*(u32 *)pdVar10, SUB84(in_dr12, 0));
                } else {
                    in_dr12 = *pdVar10;
                }
                if (bVar32)
                    goto LAB_8c214432;
                if (cVar33 == '\0') {
                    bVar32 = (float)((u64)in_dr12 >> 0x20) < fVar26;
                } else {
                    bVar32 = in_dr12 < dVar27;
                }
                if (bVar32)
                    goto LAB_8c214432;
                if (iVar11 == 0) {
                    if (cVar34 == '\0') {
                        dVar30 = (double)CONCAT44(*(u32 *)(pdVar8 + 2), SUB84(in_dr12, 0));
                        pdVar8 = (double *)((int)pdVar8 + 0x14);
                    } else {
                        dVar30 = pdVar8[2];
                        pdVar8 = pdVar8 + 3;
                    }
                    if (cVar33 == '\0') {
                        dVar30 = (double)CONCAT44((float)((u64)dVar30 >> 0x20) * fVar21, SUB84(dVar30, 0));
                    } else {
                        dVar30 = dVar30 * in_dr4;
                    }
                    if (cVar34 == '\0') {
                        dVar31 = (double)CONCAT44(*(u32 *)pdVar8, SUB84(in_dr14, 0));
                        pdVar8 = (double *)((int)pdVar8 + 4);
                    } else {
                        dVar31 = *pdVar8;
                        pdVar8 = pdVar8 + 1;
                    }
                    if (cVar33 == '\0') {
                        dVar30 = (double)CONCAT44((int)((u64)dVar30 >> 0x20), SUB84(dVar30, 0) * fVar20);
                        dVar31 = (double)CONCAT44((float)((u64)dVar31 >> 0x20) * fVar23, SUB84(dVar31, 0));
                    } else {
                        dVar30 = dVar30 * in_dr4;
                        dVar31 = dVar31 * in_dr6;
                    }
                    if (cVar34 == '\0') {
                        dVar18 = (double)CONCAT44(*(u32 *)(pdVar8 + -4), SUB84(dVar18, 0));
                        pdVar8 = (double *)((int)pdVar8 + -0x1c);
                    } else {
                        dVar18 = pdVar8[-4];
                        pdVar8 = pdVar8 + -3;
                    }
                    if (cVar33 == '\0') {
                        dVar31 = (double)CONCAT44((int)((u64)dVar31 >> 0x20), SUB84(dVar31, 0) * fVar22);
                    } else {
                        dVar31 = dVar31 * in_dr6;
                    }
                    if (cVar34 == '\0') {
                        dVar19 = (double)CONCAT44(*(u32 *)pdVar8, SUB84(dVar19, 0));
                    } else {
                        dVar19 = *pdVar8;
                    }
                    if (cVar33 == '\0') {
                        in_dr12 = (double)CONCAT44((int)((u64)dVar30 >> 0x20), SUB84(dVar30, 0) + fVar25);
                        in_dr14 = (double)CONCAT44((float)((u64)dVar31 >> 0x20) + fVar24, SUB84(dVar31, 0) + fVar28);
                    } else {
                        in_dr12 = dVar30 + in_dr8;
                        in_dr14 = dVar31 + in_dr8 + dVar27;
                    }
                    if (cVar34 == '\0') {
                        *(int *)((int)a3 + 0x1c) = (int)((u64)in_dr14 >> 0x20);
                        *(int *)(a3 + 3) = (int)((u64)in_dr12 >> 0x20);
                        *(int *)((int)a3 + 0x14) = (int)((u64)dVar19 >> 0x20);
                        a3 = a3 + 2;
                        *(int *)a3 = (int)((u64)dVar18 >> 0x20);
                    } else {
                        a3[3] = in_dr14;
                        a3[2] = in_dr12;
                        a3[1] = dVar19;
                        *a3 = dVar18;
                    }
                    iVar11 = 1;
                    *(u32 *)a3 = 0xe0000000;
                    a3 = a3 + 4;
                }
                if (cVar34 == '\0') {
                    dVar30 = (double)CONCAT44(*(u32 *)(pdVar9 + 2), SUB84(in_dr12, 0));
                    pdVar9 = (double *)((int)pdVar9 + 0x14);
                } else {
                    dVar30 = pdVar9[2];
                    pdVar9 = pdVar9 + 3;
                }
                if (cVar33 == '\0') {
                    dVar30 = (double)CONCAT44((float)((u64)dVar30 >> 0x20) * fVar21, SUB84(dVar30, 0));
                } else {
                    dVar30 = dVar30 * in_dr4;
                }
                if (cVar34 == '\0') {
                    dVar31 = (double)CONCAT44(*(u32 *)pdVar9, SUB84(in_dr14, 0));
                    pdVar9 = (double *)((int)pdVar9 + 4);
                } else {
                    dVar31 = *pdVar9;
                    pdVar9 = pdVar9 + 1;
                }
                if (cVar33 == '\0') {
                    dVar30 = (double)CONCAT44((int)((u64)dVar30 >> 0x20), SUB84(dVar30, 0) * fVar20);
                    dVar31 = (double)CONCAT44((float)((u64)dVar31 >> 0x20) * fVar23, SUB84(dVar31, 0));
                } else {
                    dVar30 = dVar30 * in_dr4;
                    dVar31 = dVar31 * in_dr6;
                }
                if (cVar34 == '\0') {
                    in_dr0 = (double)CONCAT44(*(u32 *)(pdVar9 + -4), SUB84(dVar18, 0));
                    pdVar9 = (double *)((int)pdVar9 + -0x1c);
                } else {
                    in_dr0 = pdVar9[-4];
                    pdVar9 = pdVar9 + -3;
                }
                if (cVar33 == '\0') {
                    dVar31 = (double)CONCAT44((int)((u64)dVar31 >> 0x20), SUB84(dVar31, 0) * fVar22);
                } else {
                    dVar31 = dVar31 * in_dr6;
                }
                if (cVar34 == '\0') {
                    in_dr2 = (double)CONCAT44(*(u32 *)pdVar9, SUB84(dVar19, 0));
                    pdVar9 = (double *)((int)pdVar9 + 4);
                } else {
                    in_dr2 = *pdVar9;
                    pdVar9 = pdVar9 + 1;
                }
                if (cVar33 == '\0') {
                    in_dr12 = (double)CONCAT44((int)((u64)dVar30 >> 0x20), SUB84(dVar30, 0) + fVar25);
                    in_dr14 = (double)CONCAT44((float)((u64)dVar31 >> 0x20) + fVar24, SUB84(dVar31, 0) + fVar28);
                } else {
                    in_dr12 = dVar30 + in_dr8;
                    in_dr14 = dVar31 + in_dr8 + dVar27;
                }
                if (cVar34 == '\0') {
                    *(int *)((int)a3 + 0x1c) = (int)((u64)in_dr14 >> 0x20);
                    *(int *)(a3 + 3) = (int)((u64)in_dr12 >> 0x20);
                    *(int *)((int)a3 + 0x14) = (int)((u64)in_dr2 >> 0x20);
                    a3 = a3 + 2;
                    *(int *)a3 = (int)((u64)in_dr0 >> 0x20);
                } else {
                    a3[3] = in_dr14;
                    a3[2] = in_dr12;
                    a3[1] = in_dr2;
                    *a3 = in_dr0;
                }
                iVar11 = iVar11 + 1;
                *(u32 *)a3 = 0xe0000000;
                a3 = a3 + 4;
                pdVar9 = pdVar9 + -2;
            }
        LAB_8c21447a:
            pdVar8 = pdVar9;
            iVar7 = iVar7 + -1;
            a0 = (short *)((int)psVar4 + iVar5);
            pdVar9 = pdVar10;
        } while (iVar7 != 0);
        if (iVar11 != 0) {
            if (cVar34 == '\0') {
                dVar18 = (double)CONCAT44(*(u32 *)(pdVar10 + 2), SUB84(in_dr12, 0));
                pdVar10 = (double *)((int)pdVar10 + 0x14);
            } else {
                dVar18 = pdVar10[2];
                pdVar10 = pdVar10 + 3;
            }
            if (cVar33 == '\0') {
                dVar18 =
                    (double)CONCAT44((float)((u64)dVar18 >> 0x20) * (float)((u64)in_dr4 >> 0x20), SUB84(dVar18, 0));
            } else {
                dVar18 = dVar18 * in_dr4;
            }
            if (cVar34 == '\0') {
                dVar19 = (double)CONCAT44(*(u32 *)pdVar10, SUB84(in_dr14, 0));
                pdVar10 = (double *)((int)pdVar10 + 4);
            } else {
                dVar19 = *pdVar10;
                pdVar10 = pdVar10 + 1;
            }
            if (cVar33 == '\0') {
                dVar18 = (double)CONCAT44((int)((u64)dVar18 >> 0x20), SUB84(dVar18, 0) * SUB84(in_dr4, 0));
                dVar19 =
                    (double)CONCAT44((float)((u64)dVar19 >> 0x20) * (float)((u64)in_dr6 >> 0x20), SUB84(dVar19, 0));
            } else {
                dVar18 = dVar18 * in_dr4;
                dVar19 = dVar19 * in_dr6;
            }
            if (cVar34 == '\0') {
                in_dr0 = (double)CONCAT44(*(u32 *)(pdVar10 + -4), SUB84(in_dr0, 0));
                pdVar10 = (double *)((int)pdVar10 + -0x1c);
            } else {
                in_dr0 = pdVar10[-4];
                pdVar10 = pdVar10 + -3;
            }
            if (cVar33 == '\0') {
                dVar19 = (double)CONCAT44((int)((u64)dVar19 >> 0x20), SUB84(dVar19, 0) * SUB84(in_dr6, 0));
            } else {
                dVar19 = dVar19 * in_dr6;
            }
            if (cVar34 == '\0') {
                in_dr2 = (double)CONCAT44(*(u32 *)pdVar10, SUB84(in_dr2, 0));
            } else {
                in_dr2 = *pdVar10;
            }
            if (cVar33 == '\0') {
                in_dr12 = (double)CONCAT44((int)((u64)dVar18 >> 0x20), SUB84(dVar18, 0) + (float)((u64)in_dr8 >> 0x20));
                in_dr14 = (double)CONCAT44((float)((u64)dVar19 >> 0x20) + SUB84(in_dr8, 0),
                                           SUB84(dVar19, 0) + (float)((u64)dVar27 >> 0x20));
            } else {
                in_dr12 = dVar18 + in_dr8;
                in_dr14 = dVar19 + in_dr8 + dVar27;
            }
            if (cVar34 == '\0') {
                pdVar8 = (double *)((int)a3 + 0x1c);
                *(int *)pdVar8 = (int)((u64)in_dr14 >> 0x20);
            } else {
                pdVar8 = a3 + 3;
                *pdVar8 = in_dr14;
            }
            if (cVar34 == '\0') {
                *(int *)((int)pdVar8 + -4) = (int)((u64)in_dr12 >> 0x20);
                *(int *)(pdVar8 + -1) = (int)((u64)in_dr2 >> 0x20);
                pdVar8 = (double *)((int)pdVar8 + -0xc);
                *(int *)pdVar8 = (int)((u64)in_dr0 >> 0x20);
            } else {
                pdVar8[-1] = in_dr12;
                pdVar8[-2] = in_dr2;
                pdVar8 = pdVar8 + -3;
                *pdVar8 = in_dr0;
            }
            iVar2 = iVar2 + iVar11 + 1;
            *(u32 *)pdVar8 = 0xf0000000;
            a3 = pdVar8 + 4;
        }
        uVar1 = uVar1 - 1;
        if (uVar1 == 0) {
            g_8c4aa520 = g_8c4aa520 + iVar2;
            g_8c4aa51c = g_8c4aa51c + iVar3;
            return a3;
        }
    } while (true);
}

/*
 * kamui_fill_loop_214554  0x8c214554
 * area name: in the kamui library code range; behaviour name: a loop that writes memory
 * called by: kamui_calls_fill_loop_214358
 */
u64 *kamui_fill_loop_214554(double *a0, double *a1, double *a2, u64 *a3) {
    int iVar1;
    double *pdVar2;
    u64 *puVar3;
    int iVar4;
    int *piVar5;
    int *piVar6;
    int *piVar7;
    int iVar8;
    u64 *puVar9;
    float fVar10;
    double in_dr0;
    s64 lVar11;
    float fVar12;
    float fVar13;
    float fVar14;
    double in_dr2;
    double dVar15;
    u64 uVar16;
    u64 uVar17;
    u32 uVar19;
    u64 uVar18;
    float fVar20;
    u32 uVar21;
    double in_dr4;
    s64 in_dr6;
    u32 uVar22;
    u32 uVar23;
    u32 uVar24;
    double in_dr8;
    u64 in_dr10;
    float fVar29;
    u64 in_dr12;
    double dVar30;
    u32 in_fr15;
    double dVar31;
    double dVar32;
    double in_xd0;
    double in_xd2;
    double dVar33;
    double dVar34;
    s64 in_xd4;
    double in_xd6;
    double in_xd8;
    double in_xd10;
    double in_xd12;
    double in_xd14;
    int aiStack_60[2];
    float afStack_58[7];
    u8 auStack_3c[16];
    u64 auStack_2c[2];
    u32 uVar26;
    u32 uVar28;

    puVar9 = auStack_2c;
    auStack_2c[0] = CONCAT44((int)in_dr12, (int)((u64)in_dr12 >> 0x20));

    if ((g_8c4aa4f0 & 0x10000) == 0) {

        in_dr10 = CONCAT44((int)((u64)in_dr10 >> 0x20), g_8c4aa4a8);
        in_dr2 = (double)CONCAT44((int)((u64)in_dr2 >> 0x20), g_8c4aa4dc);
        dVar31 = (double)CONCAT44(g_8c4aa4a8, in_fr15);
        uVar21 = g_8c4aa4a8;

        dVar31 = (double)CONCAT44((float)((u64)dVar31 >> 0x20) * SUB84(in_dr2, 0), SUB84(dVar31, 0));

        dVar30 = (double)CONCAT44(uVar21, g_8c4aa4b4);

        uVar21 = (u32)((u64)in_dr10 >> 0x20);

        in_dr2 = (double)(u64)g_8c4aa4b8;

        fVar14 = (float)((u64)dVar31 >> 0x20);

        dVar31 = (double)CONCAT44(uVar21, 1.0 / fVar14);

        dVar32 = (double)CONCAT44(g_8c4aa4e0, SUB84(in_dr2, 0));
        *(int *)((int)puVar9 + -0xb4) = SUB84(in_dr2, 0);

        dVar30 = (double)CONCAT44((float)((u64)dVar30 >> 0x20) * (float)((u64)dVar32 >> 0x20), SUB84(dVar30, 0));

        piVar7 = (int *)((int)puVar9 + -0x24);
        fVar20 = (float)((u64)dVar30 >> 0x20);

        dVar32 = (double)CONCAT44(fVar14, 1.0 / fVar20);

        *piVar7 = (int)a0;

        dVar15 = (double)CONCAT44(*(u32 *)a0, *(u32 *)((int)a0 + 4));

        fVar29 = SUB84(dVar30, 0);
        fVar14 = SUB84(dVar31, 0);

        fVar12 = (SUB84(dVar15, 0) - fVar29) * (float)((u64)dVar15 >> 0x20) * fVar14;

        *(float *)((int)puVar9 + -0x20) = fVar12;
        dVar15 = (double)CONCAT44(*(u32 *)(a0 + 1), *(u32 *)((int)puVar9 + -0xb4));

        dVar15 = (double)CONCAT44((float)((u64)dVar15 >> 0x20) - SUB84(dVar15, 0), SUB84(dVar15, 0));

        dVar15 = (double)CONCAT44((int)((u64)dVar15 >> 0x20), *(u32 *)a0);

        fVar12 = SUB84(dVar32, 0);

        dVar15 = (double)CONCAT44((float)((u64)dVar15 >> 0x20) * SUB84(dVar15, 0) * fVar12, SUB84(dVar15, 0));

        *(int *)((int)puVar9 + -0x1c) = (int)((u64)dVar15 >> 0x20);

        *(double **)((int)puVar9 + -0x18) = a1;

        dVar15 = (double)CONCAT44(*(u32 *)a1, *(u32 *)((int)a1 + 4));

        fVar13 = (SUB84(dVar15, 0) - fVar29) * (float)((u64)dVar15 >> 0x20) * fVar14;

        *(float *)((int)puVar9 + -0x14) = fVar13;
        dVar15 = (double)CONCAT44(*(u32 *)(a1 + 1), *(u32 *)((int)puVar9 + -0xb4));

        dVar15 = (double)CONCAT44((float)((u64)dVar15 >> 0x20) - SUB84(dVar15, 0), SUB84(dVar15, 0));

        dVar15 = (double)CONCAT44((int)((u64)dVar15 >> 0x20), *(u32 *)a1);

        dVar15 = (double)CONCAT44((float)((u64)dVar15 >> 0x20) * SUB84(dVar15, 0) * fVar12, SUB84(dVar15, 0));

        *(int *)((int)puVar9 + -0x10) = (int)((u64)dVar15 >> 0x20);

        *(double **)((int)puVar9 + -0xc) = a2;

        dVar15 = (double)CONCAT44(*(u32 *)a2, *(u32 *)((int)a2 + 4));

        fVar14 = (SUB84(dVar15, 0) - fVar29) * (float)((u64)dVar15 >> 0x20) * fVar14;

        *(float *)((int)puVar9 + -8) = fVar14;
        dVar30 = (double)CONCAT44(*(u32 *)(a2 + 1), *(u32 *)((int)puVar9 + -0xb4));

        dVar30 = (double)CONCAT44((float)((u64)dVar30 >> 0x20) - SUB84(dVar30, 0), SUB84(dVar30, 0));

        dVar30 = (double)CONCAT44((int)((u64)dVar30 >> 0x20), *(u32 *)a2);

        iVar8 = 0;

        dVar30 = (double)CONCAT44((float)((u64)dVar30 >> 0x20) * SUB84(dVar30, 0) * fVar12, SUB84(dVar30, 0));

        *(int *)((int)puVar9 + -4) = (int)((u64)dVar30 >> 0x20);

        iVar1 = 2;
        iVar4 = 0;
        while (true) {
            uVar22 = (u32)((u64)in_dr6 >> 0x20);
            fVar14 = (float)((u64)in_dr4 >> 0x20);
            uVar21 = SUB84(in_dr8, 0);
            fVar12 = (float)((u64)in_dr8 >> 0x20);
            fVar13 = (float)((u64)dVar31 >> 0x20);
            if (2 < iVar4)
                break;
            piVar5 = piVar7 + iVar1 * 3;

            uVar16 = CONCAT44(*(u32 *)*piVar5, 0x3f800000);

            piVar6 = piVar7 + iVar4 * 3;

            uVar17 = CONCAT44(*(u32 *)*piVar6, (float)uVar16);

            fVar10 = (float)uVar17;
            if (((1 && (float)uVar16 < (float)((u64)uVar16 >> 0x20)) ^ 1) !=
                -((1 && fVar10 < (float)((u64)uVar17 >> 0x20)) - 1)) {
                pdVar2 = (double *)*piVar5;
                *(double **)((int)puVar9 + -0xa0) = pdVar2;

                dVar31 = (double)CONCAT44(fVar13, *(u32 *)pdVar2);

                in_dr0 = (double)CONCAT44((int)((u64)in_dr0 >> 0x20), *(u32 *)*piVar6);
                fVar10 = SUB84(dVar31, 0);

                dVar30 = (double)CONCAT44(0x3f800000, -fVar10);

                dVar30 = (double)CONCAT44(0x3f800000, -fVar10 + 1.0);
                dVar15 = (double)CONCAT44((int)((u64)in_dr0 >> 0x20), SUB84(in_dr0, 0) - SUB84(dVar31, 0));

                dVar32 = (double)CONCAT44((int)((u64)dVar32 >> 0x20), piVar5[1]);
                dVar31 = (double)CONCAT44((int)((u64)dVar31 >> 0x20), SUB84(dVar30, 0));

                dVar31 = (double)CONCAT44((int)((u64)dVar31 >> 0x20), SUB84(dVar31, 0) / SUB84(dVar15, 0));

                dVar30 = (double)CONCAT44((int)((u64)dVar30 >> 0x20), piVar6[1]);
                dVar15 = (double)((u64)dVar32 & 0xffffffff);
                dVar34 = in_xd0;

                dVar30 = (double)CONCAT44((int)((u64)dVar30 >> 0x20), SUB84(dVar30, 0) - SUB84(dVar32, 0));

                uVar19 = SUB84(dVar31, 0);
                dVar33 = in_xd10;

                dVar33 = (double)CONCAT44(uVar19, SUB84(dVar15, 0));

                fVar13 = SUB84(dVar30, 0);

                dVar33 = (double)(u64)(u32)((float)((u64)dVar33 >> 0x20) * fVar13 + SUB84(dVar33, 0));

                fVar13 = (float)piVar5[2];
                dVar30 = (double)CONCAT44((int)((u64)dVar30 >> 0x20), fVar13);
                *(float *)((int)puVar9 + -0x9c) = fVar13;
                dVar32 = (double)CONCAT44((int)((u64)dVar32 >> 0x20), SUB84(dVar33, 0));
                dVar33 = (double)CONCAT44(fVar13, piVar6[2]);
                in_xd0 = dVar34;
                dVar15 = in_xd2;

                fVar10 = SUB84(dVar33, 0) - (float)((u64)dVar33 >> 0x20);

                dVar34 = in_xd10;

                dVar34 = (double)CONCAT44(uVar19, fVar10);

                dVar30 = (double)CONCAT44((int)((u64)dVar30 >> 0x20),
                                          (float)((u64)dVar34 >> 0x20) * SUB84(dVar34, 0) + fVar13);

                *(int *)((int)puVar9 + -0x98) = SUB84(dVar30, 0);

                fVar13 = SUB84(dVar32, 0);
                dVar33 = in_xd14;
                in_xd2 = in_xd12;

                dVar30 = (double)CONCAT44((int)((u64)dVar30 >> 0x20), fVar29);
                dVar33 = (double)CONCAT44(fVar13, SUB84(dVar34, 0));
                in_xd2 = dVar15;

                fVar10 = (float)((u64)dVar32 >> 0x20);

                dVar30 = (double)CONCAT44((int)((u64)dVar30 >> 0x20),
                                          (float)((u64)dVar33 >> 0x20) * fVar10 + SUB84(dVar30, 0));

                pdVar2 = (double *)((int)puVar9 + iVar8 * 0x1c + -0x94);

                *(int *)pdVar2 = SUB84(dVar30, 0);
                in_dr0 = (double)CONCAT44(*(u32 *)((int)puVar9 + -0x98), SUB84(dVar33, 0));
                dVar30 = (double)CONCAT44((int)((u64)dVar30 >> 0x20), *(u32 *)((int)puVar9 + -0xb4));

                dVar30 = (double)CONCAT44((int)((u64)dVar30 >> 0x20),
                                          (float)((u64)in_dr0 >> 0x20) * fVar20 + SUB84(dVar30, 0));

                *(int *)((int)pdVar2 + 4) = SUB84(dVar30, 0);
                *(int *)(pdVar2 + 1) = (int)((u64)dVar30 >> 0x20);

                if (g_8c277acc == 0) {
                    piVar5 = piVar7 + iVar1 * 3;
                    dVar15 = in_xd10;

                    dVar15 = (double)CONCAT44(uVar19, SUB84(in_dr0, 0));

                    iVar1 = *piVar5;
                    *(int *)((int)puVar9 + -0xa4) = iVar1;

                    fVar13 = *(float *)(iVar1 + 0x14);
                    dVar32 = (double)CONCAT44(fVar10, fVar13);
                    dVar30 = (double)CONCAT44(fVar13, SUB84(dVar30, 0));

                    piVar6 = piVar7 + iVar4 * 3;

                    dVar30 = (double)CONCAT44((int)((u64)dVar30 >> 0x20), *(u32 *)(*piVar6 + 0x14));

                    fVar13 = SUB84(dVar30, 0) - fVar13;
                    dVar30 =
                        (double)CONCAT44((float)((u64)dVar15 >> 0x20) * fVar13 + (float)((u64)dVar30 >> 0x20), fVar13);

                    dVar34 = in_dr8;
                    lVar11 = in_xd4;

                    dVar30 = (double)CONCAT44((int)((u64)dVar30 >> 0x20), fVar12);
                    dVar34 = in_xd2;
                    lVar11 = CONCAT44(SUB84(in_dr4, 0), SUB84(dVar15, 0));

                    dVar30 = (double)(u64)(u32)((float)((u64)lVar11 >> 0x20) * (float)((u64)dVar30 >> 0x20) +
                                                SUB84(dVar30, 0));

                    *(int *)((int)pdVar2 + 0xc) = SUB84(dVar30, 0);

                    iVar1 = *piVar5;
                    *(int *)((int)puVar9 + -0xa8) = iVar1;

                    dVar32 = (double)CONCAT44((int)((u64)dVar32 >> 0x20), *(u32 *)(iVar1 + 0x18));

                    dVar15 = (double)CONCAT44(uVar19, (int)lVar11);
                    dVar30 = (double)CONCAT44(SUB84(dVar32, 0), *(u32 *)(*piVar6 + 0x18));

                    fVar13 = SUB84(dVar30, 0) - SUB84(dVar32, 0);
                    dVar30 =
                        (double)CONCAT44((float)((u64)dVar15 >> 0x20) * fVar13 + (float)((u64)dVar30 >> 0x20), fVar13);

                    dVar33 = in_xd8;
                    lVar11 = in_dr6;

                    dVar30 = (double)CONCAT44((int)((u64)dVar30 >> 0x20), uVar21);
                    dVar33 = dVar34;
                    lVar11 = CONCAT44(uVar22, SUB84(dVar15, 0));

                    dVar30 = (double)(u64)(u32)((float)((u64)lVar11 >> 0x20) * (float)((u64)dVar30 >> 0x20) +
                                                SUB84(dVar30, 0));

                    *(int *)(pdVar2 + 2) = SUB84(dVar30, 0);
                    dVar30 = (double)CONCAT44(uVar19, (int)lVar11);

                    iVar1 = *piVar5;
                    *(int *)((int)puVar9 + -0xac) = iVar1;

                    dVar32 = (double)CONCAT44((int)((u64)dVar32 >> 0x20), *(u32 *)(iVar1 + 0x1c));

                    dVar15 = (double)CONCAT44(SUB84(dVar32, 0), *(u32 *)(*piVar6 + 0x1c));

                    fVar13 = SUB84(dVar15, 0) - SUB84(dVar32, 0);
                    dVar15 =
                        (double)CONCAT44((float)((u64)dVar30 >> 0x20) * fVar13 + (float)((u64)dVar15 >> 0x20), fVar13);

                    in_xd2 = dVar31;
                    dVar34 = in_xd6;

                    dVar15 = (double)CONCAT44((int)((u64)dVar15 >> 0x20), (int)((u64)dVar31 >> 0x20));
                    in_xd2 = dVar33;
                    dVar34 = (double)CONCAT44((int)in_dr6, SUB84(dVar30, 0));

                    fVar13 = (float)((u64)dVar15 >> 0x20);
                    dVar15 = (double)CONCAT44(fVar13, (float)((u64)dVar34 >> 0x20) * fVar13 + SUB84(dVar15, 0));

                    *(int *)((int)pdVar2 + 0x14) = SUB84(dVar15, 0);

                    iVar1 = *piVar5;
                    *(int *)((int)puVar9 + -0xb0) = iVar1;

                    dVar32 = (double)CONCAT44((int)((u64)dVar32 >> 0x20), *(u32 *)(iVar1 + 0x10));
                    dVar15 = (double)CONCAT44((int)((u64)dVar15 >> 0x20), *(u32 *)(*piVar6 + 0x10));

                    fVar13 = SUB84(dVar15, 0) - SUB84(dVar32, 0);

                    in_dr0 = in_xd10;
                    dVar30 = in_xd14;

                    in_dr0 = (double)CONCAT44(uVar19, SUB84(dVar34, 0));
                    dVar30 = (double)CONCAT44(SUB84(dVar32, 0), fVar13);

                    dVar30 = (double)CONCAT44(
                        ((float)((u64)in_dr0 >> 0x20) * SUB84(dVar30, 0) + (float)((u64)dVar30 >> 0x20)) * fVar14,
                        SUB84(dVar30, 0));

                    *(int *)(pdVar2 + 3) = (int)((u64)dVar30 >> 0x20);
                }
                iVar8 = iVar8 + 1;
            }
            piVar5 = piVar7 + iVar4 * 3;

            uVar16 = CONCAT44(*(u32 *)*piVar5, 0x3f800000);

            if ((float)uVar16 < (float)((u64)uVar16 >> 0x20)) {

                uVar16 = CONCAT44(*(u32 *)(*piVar5 + 4), (float)uVar16);

                puVar3 = (u64 *)((int)puVar9 + iVar8 * 0x1c + -0x94);

                *(int *)puVar3 = (int)((u64)uVar16 >> 0x20);

                uVar19 = *(u32 *)(*piVar5 + 8);
                uVar16 = CONCAT44(uVar19, (int)uVar16);
                *(u32 *)((int)puVar3 + 4) = uVar19;

                uVar19 = *(u32 *)(*piVar5 + 0xc);
                uVar16 = CONCAT44(uVar19, (int)uVar16);
                *(u32 *)(puVar3 + 1) = uVar19;

                if (g_8c277acc == 0) {
                    dVar30 = in_dr8;

                    dVar30 = (double)CONCAT44(fVar12, (int)uVar16);

                    piVar5 = piVar7 + iVar4 * 3;
                    lVar11 = in_xd4;

                    lVar11 = CONCAT44(SUB84(in_dr4, 0), SUB84(in_dr0, 0));

                    lVar11 = CONCAT44((int)((u64)lVar11 >> 0x20), *(u32 *)(*piVar5 + 0x14));

                    dVar30 = (double)CONCAT44(
                        (float)((u64)lVar11 >> 0x20) * (float)lVar11 + (float)((u64)dVar30 >> 0x20), SUB84(dVar30, 0));

                    *(int *)((int)puVar3 + 0xc) = (int)((u64)dVar30 >> 0x20);
                    lVar11 = CONCAT44(uVar22, (float)lVar11);

                    lVar11 = CONCAT44((int)((u64)lVar11 >> 0x20), *(u32 *)(*piVar5 + 0x18));
                    dVar30 = (double)CONCAT44(uVar21, SUB84(dVar30, 0));

                    dVar30 = (double)CONCAT44(
                        (float)((u64)lVar11 >> 0x20) * (float)lVar11 + (float)((u64)dVar30 >> 0x20), SUB84(dVar30, 0));

                    *(int *)(puVar3 + 2) = (int)((u64)dVar30 >> 0x20);
                    in_dr0 = (double)CONCAT44((int)in_dr6, (float)lVar11);

                    in_dr0 = (double)CONCAT44((int)((u64)in_dr0 >> 0x20), *(u32 *)(*piVar5 + 0x1c));
                    dVar30 = (double)CONCAT44((int)((u64)dVar31 >> 0x20), SUB84(dVar30, 0));

                    dVar30 =
                        (double)CONCAT44((float)((u64)in_dr0 >> 0x20) * SUB84(in_dr0, 0) + (float)((u64)dVar30 >> 0x20),
                                         SUB84(dVar30, 0));

                    *(int *)((int)puVar3 + 0x14) = (int)((u64)dVar30 >> 0x20);

                    dVar30 = (double)CONCAT44(*(u32 *)(*piVar5 + 0x10), SUB84(dVar30, 0));

                    dVar30 = (double)CONCAT44((float)((u64)dVar30 >> 0x20) * fVar14, SUB84(dVar30, 0));

                    *(int *)(puVar3 + 3) = (int)((u64)dVar30 >> 0x20);
                }
                iVar8 = iVar8 + 1;
            }
            iVar1 = iVar4;
            iVar4 = iVar4 + 1;
        }
        if (g_8c277acc != 0) {
            piVar7 = (int *)((int)puVar9 + -0xc);

            uVar18 = CONCAT44(*(u32 *)(*piVar7 + 0x14), fVar12);
            lVar11 = (s64)in_dr4 << 0x20;

            uVar18 = (u64)(u32)((float)((u64)lVar11 >> 0x20) * (float)(uVar18 >> 0x20) + (float)uVar18);

            *(int *)((int)puVar9 + -0x50) = (int)uVar18;
            lVar11 = (u64)uVar22 << 0x20;

            uVar18 = CONCAT44(*(u32 *)(*piVar7 + 0x18), uVar21);

            uVar18 = (u64)(u32)((float)((u64)lVar11 >> 0x20) * (float)(uVar18 >> 0x20) + (float)uVar18);

            *(int *)((int)puVar9 + -0x4c) = (int)uVar18;
            dVar30 = (double)(in_dr6 << 0x20);

            dVar32 = (double)CONCAT44(*(u32 *)(*piVar7 + 0x1c), fVar13);

            fVar20 = (float)((u64)dVar32 >> 0x20);
            dVar32 = (double)CONCAT44(fVar20, (float)((u64)dVar30 >> 0x20) * fVar20 + SUB84(dVar32, 0));

            *(int *)((int)puVar9 + -0x48) = SUB84(dVar32, 0);

            dVar32 = (double)CONCAT44((int)((u64)dVar32 >> 0x20), *(u32 *)(*piVar7 + 0x10));

            dVar32 = (double)CONCAT44((int)((u64)dVar32 >> 0x20), SUB84(dVar32, 0) * fVar14);

            *(int *)((int)puVar9 + -0x44) = SUB84(dVar32, 0);

            if (iVar8 != 3) {
                piVar7 = (int *)((int)puVar9 + -0xc);

                in_xd4 = (s64)in_dr4 << 0x20;
                dVar32 = (double)CONCAT44((int)((u64)dVar32 >> 0x20), *(u32 *)(*piVar7 + 0x14));

                in_dr8 = (double)CONCAT44((float)((u64)in_xd4 >> 0x20) * SUB84(dVar32, 0) + fVar12, uVar21);

                *(int *)((int)puVar9 + -0x34) = (int)((u64)in_dr8 >> 0x20);
                lVar11 = (u64)uVar22 << 0x20;

                dVar32 = (double)CONCAT44((int)((u64)dVar32 >> 0x20), *(u32 *)(*piVar7 + 0x18));

                in_dr8 = (double)(u64)(u32)((float)((u64)lVar11 >> 0x20) * SUB84(dVar32, 0) + SUB84(in_dr8, 0));

                in_xd6 = (double)(in_dr6 << 0x20);
                *(int *)((int)puVar9 + -0x30) = SUB84(in_dr8, 0);

                dVar32 = (double)CONCAT44((int)((u64)dVar32 >> 0x20), *(u32 *)(*piVar7 + 0x1c));

                dVar31 = (double)CONCAT44((float)((u64)in_xd6 >> 0x20) * SUB84(dVar32, 0) + fVar13, SUB84(dVar31, 0));

                *(int *)((int)puVar9 + -0x2c) = (int)((u64)dVar31 >> 0x20);

                dVar32 = (double)CONCAT44((int)((u64)dVar32 >> 0x20), *(u32 *)(*piVar7 + 0x10));

                fVar14 = SUB84(dVar32, 0) * fVar14;

                *(float *)((int)puVar9 + -0x28) = fVar14;
            }
        }

        uVar26 = *(u32 *)((int)puVar9 + -0x94);
        uVar24 = *(u32 *)((int)puVar9 + -0x90);
        uVar28 = *(u32 *)((int)puVar9 + -0x8c);
        uVar21 = *(u32 *)((int)puVar9 + -0x88);
        uVar23 = *(u32 *)((int)puVar9 + -0x84);
        uVar19 = *(u32 *)((int)puVar9 + -0x7c);
        *(u32 *)((int)a3 + 0x1c) = *(u32 *)((int)puVar9 + -0x80);
        *(u32 *)(a3 + 3) = uVar23;
        *(u32 *)((int)a3 + 0x14) = uVar21;
        *(u32 *)(a3 + 2) = uVar19;
        *(u32 *)((int)a3 + 0xc) = uVar28;
        *(u32 *)(a3 + 1) = uVar24;
        puVar3 = (u64 *)((int)a3 + 4);
        *(u32 *)puVar3 = uVar26;

        *(u32 *)((int)puVar3 + -4) = 0xe0000000;

        uVar24 = *(u32 *)((int)puVar9 + -0x78);
        uVar26 = *(u32 *)((int)puVar9 + -0x74);
        uVar28 = *(u32 *)((int)puVar9 + -0x70);
        uVar21 = *(u32 *)((int)puVar9 + -0x6c);
        uVar23 = *(u32 *)((int)puVar9 + -0x68);
        uVar19 = *(u32 *)((int)puVar9 + -0x60);
        *(u32 *)(puVar3 + 7) = *(u32 *)((int)puVar9 + -100);
        *(u32 *)((int)puVar3 + 0x34) = uVar23;
        *(u32 *)(puVar3 + 6) = uVar21;
        *(u32 *)((int)puVar3 + 0x2c) = uVar19;
        *(u32 *)(puVar3 + 5) = uVar28;
        *(u32 *)((int)puVar3 + 0x24) = uVar26;
        puVar3 = puVar3 + 4;
        *(u32 *)puVar3 = uVar24;

        *(u32 *)((int)puVar3 + -4) = 0xe0000000;
        if (iVar8 != 3) {

            uVar28 = *(u32 *)((int)puVar9 + -0x40);
            uVar26 = *(u32 *)((int)puVar9 + -0x3c);
            uVar24 = *(u32 *)((int)puVar9 + -0x38);
            uVar21 = *(u32 *)((int)puVar9 + -0x34);
            uVar23 = *(u32 *)((int)puVar9 + -0x30);
            uVar19 = *(u32 *)((int)puVar9 + -0x28);
            *(u32 *)(puVar3 + 7) = *(u32 *)((int)puVar9 + -0x2c);
            *(u32 *)((int)puVar3 + 0x34) = uVar23;
            *(u32 *)(puVar3 + 6) = uVar21;
            *(u32 *)((int)puVar3 + 0x2c) = uVar19;
            *(u32 *)(puVar3 + 5) = uVar24;
            *(u32 *)((int)puVar3 + 0x24) = uVar26;
            puVar3 = puVar3 + 4;
            *(u32 *)puVar3 = uVar28;

            *(u32 *)((int)puVar3 + -4) = 0xe0000000;
        }

        uVar28 = *(u32 *)((int)puVar9 + -0x5c);
        uVar24 = *(u32 *)((int)puVar9 + -0x58);
        uVar26 = *(u32 *)((int)puVar9 + -0x54);
        uVar21 = *(u32 *)((int)puVar9 + -0x50);
        uVar23 = *(u32 *)((int)puVar9 + -0x4c);
        uVar19 = *(u32 *)((int)puVar9 + -0x44);
        *(u32 *)(puVar3 + 7) = *(u32 *)((int)puVar9 + -0x48);
        *(u32 *)((int)puVar3 + 0x34) = uVar23;
        *(u32 *)(puVar3 + 6) = uVar21;
        *(u32 *)((int)puVar3 + 0x2c) = uVar19;
        *(u32 *)(puVar3 + 5) = uVar26;
        *(u32 *)((int)puVar3 + 0x24) = uVar24;
        puVar3 = puVar3 + 4;
        *(u32 *)puVar3 = uVar28;

        *(u32 *)((int)puVar3 + -4) = 0xf0000000;
        a3 = (u64 *)((int)puVar3 + 0x1c);
        g_8c4aa520 = g_8c4aa520 + iVar8;
    }
    return a3;
}

/*
 * kamui_fill_loop_21496c  0x8c21496c
 * area name: in the kamui library code range; behaviour name: a loop that writes memory
 * called by: vram_draw_218804
 */
float *kamui_fill_loop_21496c(short *a0, int a1, u32 a2, float *a3) {
    u32 uVar1;
    int iVar2;
    int iVar3;
    short *psVar4;
    float *pfVar5;
    int iVar6;
    float *pfVar7;
    float *pfVar8;
    float *pfVar9;
    float fVar10;
    float fVar11;
    u64 in_dr4;
    float fVar12;
    u64 in_dr6;
    float fVar13;
    float in_fr8;
    float fVar14;

    uVar1 = a2 & 0x3fff;
    iVar2 = 0;
    iVar3 = 0;
    fVar12 = (float)((u64)in_dr4 >> 0x20);
    fVar13 = (float)((u64)in_dr6 >> 0x20) - 1.0;
    do {
        iVar6 = (int)*a0;
        pfVar7 = (float *)(a0[1] * 0x20 + a1);
        if (iVar6 < 0) {
            iVar6 = -iVar6;
        }
        iVar3 = iVar3 + iVar6;
        iVar2 = iVar2 + iVar6;
        fVar10 = *pfVar7;
        iVar6 = iVar6 + -2;
        fVar11 = pfVar7[1];
        a3[5] = (float)(int)a0[2] * in_fr8;
        a3[4] = fVar11;
        a3[3] = fVar10;
        a3[3] = -3.689349e+19;
        fVar10 = pfVar7[2];
        fVar11 = pfVar7[3];
        psVar4 = a0 + 5;
        pfVar8 = (float *)(a0[4] * 0x20 + a1);
        a3[0x12] = fVar11 + fVar13;
        a3[0x11] = fVar10 * fVar12;
        a3[0x10] = fVar11 + fVar13 + 1.0;
        a3[0xf] = fVar10 * fVar12;
        a0 = a0 + 7;
        fVar10 = *pfVar8;
        fVar11 = pfVar8[1];
        pfVar8 = pfVar8 + 2;
        fVar14 = (float)(int)*psVar4 * in_fr8;
        pfVar7 = a3 + 0xf;
        do {
            pfVar5 = pfVar7;
            pfVar5[0xd] = fVar14;
            pfVar5[0xc] = fVar11;
            pfVar5[0xb] = fVar10;
            pfVar5[0xb] = -3.689349e+19;
            fVar10 = *pfVar8;
            fVar11 = pfVar8[1];
            psVar4 = a0 + 1;
            pfVar9 = (float *)(*a0 * 0x20 + a1);
            pfVar5[0x1a] = fVar11 + fVar13;
            pfVar5[0x19] = fVar10 * fVar12;
            pfVar5[0x18] = fVar11 + fVar13 + 1.0;
            pfVar5[0x17] = fVar10 * fVar12;
            iVar6 = iVar6 + -1;
            a0 = a0 + (a2 >> 0xe & 3) + 3;
            fVar14 = (float)(int)*psVar4 * in_fr8;
            fVar10 = *pfVar9;
            fVar11 = pfVar9[1];
            pfVar8 = pfVar9 + 2;
            pfVar7 = pfVar5 + 0x17;
        } while (iVar6 != 0);
        pfVar5[0x24] = fVar14;
        pfVar5[0x23] = fVar11;
        pfVar5[0x22] = fVar10;
        pfVar5[0x22] = -1.5845633e+29;
        fVar10 = *pfVar8;
        fVar11 = pfVar9[3];
        pfVar5[0x31] = fVar11 + fVar13;
        pfVar5[0x30] = fVar10 * fVar12;
        uVar1 = uVar1 - 1;
        pfVar5[0x2f] = fVar11 + fVar13 + 1.0;
        pfVar5[0x2e] = fVar10 * fVar12;
        a3 = pfVar5 + 0x36;
    } while (uVar1 != 0);
    g_8c4aa520 = g_8c4aa520 + iVar2;
    g_8c4aa51c = g_8c4aa51c + iVar3;
    return a3;
}

/*
 * kamui_calls_fill_loop_214aec  0x8c214aec
 * area name: in the kamui library code range; behaviour name: its callees mostly do: fill_loop
 * called by: vram_draw_218804
 */
double *kamui_calls_fill_loop_214aec(short *a0, int a1, u32 a2, double *a3) {
    u32 uVar1;
    int iVar2;
    int iVar3;
    short *psVar4;
    short *psVar5;
    int iVar6;
    double *pdVar7;
    int iVar8;
    double *pdVar9;
    double *pdVar10;
    double *pdVar11;
    int iVar12;
    int *piVar13;
    u8 *puVar14;
    u8 *puVar15;
    u8 *puVar16;
    u8 *puVar17;
    double *pdVar18;
    double *pdVar19;
    int *piVar20;
    double in_dr0;
    double dVar21;
    double dVar22;
    u32 uVar25;
    double dVar23;
    double in_dr2;
    double dVar27;
    u32 uVar28;
    float fVar29;
    u64 in_dr4;
    float fVar31;
    double dVar30;
    float fVar32;
    u64 in_dr6;
    float fVar34;
    double dVar33;
    u64 in_dr8;
    double dVar35;
    float fVar36;
    float fVar37;
    float fVar39;
    double dVar38;
    u64 in_dr12;
    u64 in_dr14;
    double dVar40;
    double in_xd4;
    u64 in_xd6;
    double in_xd10;
    u64 in_xd12;
    bool bVar41;
    char cVar42;
    char cVar43;
    u8 auStack_30[4];
    u32 uStack_2c;
    u32 uStack_28;
    u32 uStack_24;
    u32 uStack_20;
    u32 uVar24;
    u32 uVar26;

    cVar43 = '\0';
    cVar42 = '\0';
    uStack_20 = (u32)((u64)in_dr12 >> 0x20);
    uStack_24 = (u32)in_dr12;
    uStack_28 = (u32)((u64)in_dr14 >> 0x20);
    uStack_2c = (u32)in_dr14;
    piVar13 = (int *)auStack_30;
    uVar1 = a2 & 0x3fff;
    iVar2 = 0;
    dVar35 = (double)CONCAT44((int)((u64)in_dr8 >> 0x20), 0x3f800000);
    iVar3 = 0;
    iVar6 = (a2 >> 0xe & 3) << 1;
    dVar30 = (double)CONCAT44((int)((u64)in_dr4 >> 0x20), (float)in_dr4 - 1.0);
    dVar33 = (double)CONCAT44((float)((u64)in_dr6 >> 0x20) - 1.0, (float)in_dr6 - 1.0);
    do {
        iVar8 = (int)*a0;
        pdVar9 = (double *)(a0[1] * 0x20 + a1);
        if (iVar8 < 0) {
            iVar8 = -iVar8;
        }
        iVar3 = iVar3 + iVar8;
        iVar8 = iVar8 + -2;
        iVar12 = 0;
        if (cVar42 == '\0') {
            fVar39 = (float)(int)a0[2];
        } else {
            fVar39 = (float)((u64)(double)(int)a0[2] >> 0x20);
        }
        psVar5 = a0 + 5;
        fVar36 = (float)((u64)dVar35 >> 0x20);
        if (cVar42 == '\0') {
            dVar38 = (double)CONCAT44(fVar39 * fVar36, (float)(int)a0[3]);
        } else {
            dVar38 = (double)CONCAT44(fVar39, (float)(int)a0[3]) * dVar35;
        }
        pdVar10 = (double *)(a0[4] * 0x20 + a1);
        if (cVar42 == '\0') {
            dVar38 = (double)CONCAT44((int)((u64)dVar38 >> 0x20), SUB84(dVar38, 0) * fVar36);
        } else {
            dVar38 = dVar38 * dVar35;
        }
        psVar4 = a0 + 6;
        a0 = a0 + 7;
        if (cVar42 == '\0') {
            fVar39 = (float)(int)*psVar5;
        } else {
            fVar39 = (float)((u64)(double)(int)*psVar5 >> 0x20);
        }
        if (cVar42 == '\0') {
            dVar23 = (double)CONCAT44(fVar39 * fVar36, (float)(int)*psVar4 * fVar36);
        } else {
            dVar23 = (double)CONCAT44(fVar39, (float)(int)*psVar4) * dVar35 * dVar35;
        }
        do {
            pdVar11 = (double *)(*a0 * 0x20 + a1);
            if (cVar43 == '\0') {
                dVar21 = (double)CONCAT44(*(u32 *)pdVar9, SUB84(in_dr0, 0));
            } else {
                dVar21 = *pdVar9;
            }
            psVar5 = a0 + 3;
            if (cVar42 == '\0') {
                fVar39 = (float)(int)a0[1];
            } else {
                fVar39 = (float)((u64)(double)(int)a0[1] >> 0x20);
            }
            fVar37 = (float)((u64)dVar35 >> 0x20);
            fVar36 = SUB84(dVar35, 0);
            if (cVar42 == '\0') {
                dVar40 = (double)CONCAT44(fVar39 * fVar37, (float)(int)a0[2] * fVar37);
                bVar41 = (float)((u64)dVar21 >> 0x20) < fVar36;
            } else {
                dVar40 = (double)CONCAT44(fVar39, (float)(int)a0[2]) * dVar35 * dVar35;
                bVar41 = dVar21 < dVar35;
            }
            if (cVar43 == '\0') {
                dVar27 = (double)CONCAT44(*(u32 *)pdVar10, SUB84(in_dr2, 0));
            } else {
                dVar27 = *pdVar10;
            }
            uVar25 = (u32)((u64)dVar38 >> 0x20);
            uVar26 = (u32)((u64)dVar23 >> 0x20);
            fVar39 = SUB84(dVar30, 0);
            fVar31 = (float)((u64)dVar30 >> 0x20);
            fVar32 = SUB84(dVar33, 0);
            fVar34 = (float)((u64)dVar33 >> 0x20);
            if (bVar41) {
            LAB_8c214c0c:
                if (iVar12 != 0) {
                    if (cVar43 == '\0') {
                        uVar24 = *(u32 *)pdVar10;
                        dVar22 = (double)CONCAT44(uVar24, SUB84(dVar21, 0));
                        uVar28 = *(u32 *)((int)pdVar10 + 4);
                        dVar21 = (double)CONCAT44(uVar28, SUB84(dVar27, 0));
                        pdVar10 = pdVar10 + 1;
                        *(u32 *)((int)a3 + 0x14) = uVar26;
                        *(u32 *)(a3 + 2) = uVar28;
                        a3 = (double *)((int)a3 + 0xc);
                        *(u32 *)a3 = uVar24;
                    } else {
                        dVar22 = *pdVar10;
                        dVar21 = pdVar10[1];
                        pdVar10 = pdVar10 + 2;
                        a3[2] = dVar23;
                        a3[1] = dVar21;
                        *a3 = dVar22;
                    }
                    *(u32 *)a3 = 0xf0000000;
                    if (cVar43 == '\0') {
                        dVar27 = (double)CONCAT44(*(u32 *)pdVar10, SUB84(dVar22, 0));
                        dVar22 = (double)CONCAT44(*(u32 *)((int)pdVar10 + 4), SUB84(dVar21, 0));
                        pdVar10 = pdVar10 + 1;
                    } else {
                        dVar27 = *pdVar10;
                        dVar22 = pdVar10[1];
                        pdVar10 = pdVar10 + 2;
                    }
                    if (cVar42 == '\0') {
                        dVar21 = (double)CONCAT44((float)((u64)dVar27 >> 0x20) * fVar31, SUB84(dVar27, 0) + fVar39);
                        dVar27 = (double)CONCAT44((float)((u64)dVar22 >> 0x20) + fVar34, SUB84(dVar22, 0) + fVar32);
                    } else {
                        dVar21 = dVar27 * dVar30 + dVar30;
                        dVar27 = dVar22 + dVar33 + dVar33;
                    }
                    pdVar10 = pdVar10 + -4;
                    fVar29 = (float)((u64)dVar27 >> 0x20);
                    uVar26 = (u32)((u64)dVar21 >> 0x20);
                    if (cVar43 == '\0') {
                        *(float *)((int)a3 + 0x3c) = fVar29;
                        pdVar7 = a3 + 7;
                        *(u32 *)pdVar7 = uVar26;
                    } else {
                        a3[7] = dVar27;
                        pdVar7 = a3 + 6;
                        *pdVar7 = dVar21;
                    }
                    if (cVar42 == '\0') {
                        dVar21 = (double)CONCAT44(uVar26, SUB84(dVar21, 0) + fVar36);
                        dVar27 = (double)CONCAT44(fVar29 + fVar36, SUB84(dVar27, 0));
                    } else {
                        dVar21 = dVar21 + dVar35;
                        dVar27 = dVar27 + dVar35;
                    }
                    iVar2 = iVar2 + iVar12 + 1;
                    if (cVar42 == '\0') {
                        dVar27 = (double)CONCAT44((int)((u64)dVar27 >> 0x20), SUB84(dVar27, 0) + fVar36);
                    } else {
                        dVar27 = dVar27 + dVar35;
                    }
                    if (cVar43 == '\0') {
                        pdVar7 = (double *)((int)pdVar7 + -4);
                        *(int *)pdVar7 = (int)((u64)dVar27 >> 0x20);
                    } else {
                        pdVar7 = pdVar7 + -1;
                        *pdVar7 = dVar27;
                    }
                    iVar12 = 0;
                    if (cVar43 == '\0') {
                        pdVar7 = (double *)((int)pdVar7 + -4);
                        *(int *)pdVar7 = (int)((u64)dVar21 >> 0x20);
                    } else {
                        pdVar7 = pdVar7 + -1;
                        *pdVar7 = dVar21;
                    }
                    a3 = pdVar7 + 4;
                }
                if (cVar43 == '\0') {
                    in_dr0 = (double)CONCAT44(*(u32 *)pdVar9, SUB84(dVar21, 0));
                } else {
                    in_dr0 = *pdVar9;
                }
                if (cVar42 == '\0') {
                    bVar41 = (float)((u64)in_dr0 >> 0x20) < fVar36;
                } else {
                    bVar41 = in_dr0 < dVar35;
                }
                if (cVar43 == '\0') {
                    in_dr2 = (double)CONCAT44(*(u32 *)pdVar10, SUB84(dVar27, 0));
                } else {
                    in_dr2 = *pdVar10;
                }
                if (bVar41) {
                    if (cVar42 == '\0') {
                        bVar41 = (float)((u64)in_dr2 >> 0x20) < fVar36;
                    } else {
                        bVar41 = in_dr2 < dVar35;
                    }
                    if (cVar43 == '\0') {
                        in_dr0 = (double)CONCAT44(*(u32 *)pdVar11, SUB84(in_dr0, 0));
                    } else {
                        in_dr0 = *pdVar11;
                    }
                    if (bVar41) {
                        if (cVar42 == '\0') {
                            bVar41 = (float)((u64)in_dr0 >> 0x20) < fVar36;
                        } else {
                            bVar41 = in_dr0 < dVar35;
                        }
                        if (bVar41)
                            goto LAB_8c214c5c;
                    }
                }
                *(u32 *)((int)piVar13 + -4) = uVar1;
                *(int *)((int)piVar13 + -8) = iVar2;
                *(int *)((int)piVar13 + -0xc) = iVar3;
                *(short **)((int)piVar13 + -0x10) = psVar5;
                *(int *)((int)piVar13 + -0x14) = a1;
                *(int *)((int)piVar13 + -0x18) = iVar6;
                if (cVar43 == '\0') {
                    *(float *)((int)piVar13 + -0x1c) = fVar31;
                    *(float *)((int)piVar13 + -0x20) = fVar39;
                    *(float *)((int)piVar13 + -0x24) = fVar34;
                    *(float *)((int)piVar13 + -0x28) = fVar32;
                    puVar14 = (u8 *)((int)piVar13 + -0x2c);
                    *(float *)((int)piVar13 + -0x2c) = fVar37;
                } else {
                    *(double *)((int)piVar13 + -0x20) = dVar30;
                    *(double *)((int)piVar13 + -0x28) = in_xd4;
                    *(double *)((int)piVar13 + -0x30) = dVar33;
                    *(u64 *)((int)piVar13 + -0x38) = in_xd6;
                    puVar14 = (u8 *)((int)piVar13 + -0x40);
                    *(double *)((int)piVar13 + -0x40) = dVar35;
                }
                if (cVar42 == '\0') {
                    dVar30 = (double)((u64)(u32)fVar31 << 0x20);
                } else {
                    dVar30 = dVar30 + dVar35;
                }
                if (cVar43 == '\0') {
                    puVar15 = puVar14 + -4;
                    *(u32 *)(puVar14 + -4) = uVar25;
                } else {
                    puVar15 = puVar14 + -8;
                    *(double *)(puVar14 + -8) = dVar38;
                }
                if (cVar42 == '\0') {
                    dVar33 = (double)CONCAT44(fVar34 + fVar36, fVar32);
                } else {
                    dVar33 = dVar33 + dVar35;
                }
                if (cVar43 == '\0') {
                    puVar16 = puVar15 + -4;
                    *(int *)(puVar15 + -4) = SUB84(dVar38, 0);
                } else {
                    puVar16 = puVar15 + -8;
                    *(double *)(puVar15 + -8) = in_xd10;
                }
                if (cVar42 == '\0') {
                    dVar33 = (double)CONCAT44((int)((u64)dVar33 >> 0x20), SUB84(dVar33, 0) + fVar36);
                } else {
                    dVar33 = dVar33 + dVar35;
                }
                if (cVar43 == '\0') {
                    in_dr0 = (double)((u64)dVar30 >> 0x20);
                    *(int *)(puVar16 + -4) = SUB84(dVar33, 0);
                    puVar17 = puVar16 + -8;
                    *(int *)(puVar16 + -8) = (int)((u64)dVar33 >> 0x20);
                    dVar33 = in_xd10;
                    in_xd10 = in_xd4;
                    in_dr2 = (double)((u64)in_dr2 & 0xffffffff);
                } else {
                    *(u64 *)(puVar16 + -8) = in_xd6;
                    puVar17 = puVar16 + -0x10;
                    *(double *)(puVar16 + -0x10) = dVar33;
                    dVar33 = in_xd4;
                    in_xd6 = in_xd12;
                    in_dr2 = in_xd4;
                }
                a3 = (double *)kamui_fill_loop_214d6c(pdVar9, pdVar10, pdVar11, a3);
                if (cVar43 == '\0') {
                    dVar38 = (double)(u64) * (u32 *)(puVar17 + 8);
                    uVar25 = *(u32 *)(puVar17 + 0x10);
                    pdVar18 = (double *)(puVar17 + 0x14);
                    pdVar19 = (double *)(puVar17 + 0x1c);
                    piVar20 = (int *)(puVar17 + 0x24);
                    in_xd4 = in_xd10;
                    in_xd10 = dVar33;
                } else {
                    in_xd10 = *(double *)(puVar17 + 8);
                    dVar38 = *(double *)(puVar17 + 0x10);
                    uVar25 = (u32)((u64) * (u64 *)(puVar17 + 0x18) >> 0x20);
                    in_xd6 = *(u64 *)(puVar17 + 0x20);
                    pdVar18 = (double *)(puVar17 + 0x28);
                    in_xd4 = *(double *)(puVar17 + 0x30);
                    pdVar19 = (double *)(puVar17 + 0x38);
                    piVar20 = (int *)(puVar17 + 0x40);
                }
                dVar33 = *pdVar18;
                dVar30 = *pdVar19;
                iVar6 = *piVar20;
                a1 = piVar20[1];
                psVar5 = (short *)piVar20[2];
                iVar3 = piVar20[3];
                iVar2 = piVar20[4];
                uVar1 = piVar20[5];
                piVar13 = piVar20 + 6;
                dVar35 = (double)CONCAT44(uVar25, 0x3f800000);
            } else {
                if (cVar42 == '\0') {
                    bVar41 = (float)((u64)dVar27 >> 0x20) < fVar36;
                } else {
                    bVar41 = dVar27 < dVar35;
                }
                if (cVar43 == '\0') {
                    dVar21 = (double)CONCAT44(*(u32 *)pdVar11, SUB84(dVar21, 0));
                } else {
                    dVar21 = *pdVar11;
                }
                if (bVar41)
                    goto LAB_8c214c0c;
                if (cVar42 == '\0') {
                    bVar41 = (float)((u64)dVar21 >> 0x20) < fVar36;
                } else {
                    bVar41 = dVar21 < dVar35;
                }
                if (bVar41)
                    goto LAB_8c214c0c;
                if (iVar12 == 0) {
                    if (cVar43 == '\0') {
                        uVar24 = *(u32 *)pdVar9;
                        dVar22 = (double)CONCAT44(uVar24, SUB84(dVar21, 0));
                        uVar28 = *(u32 *)((int)pdVar9 + 4);
                        dVar21 = (double)CONCAT44(uVar28, SUB84(dVar27, 0));
                        pdVar9 = pdVar9 + 1;
                        *(u32 *)((int)a3 + 0x14) = uVar25;
                        *(u32 *)(a3 + 2) = uVar28;
                        a3 = (double *)((int)a3 + 0xc);
                        *(u32 *)a3 = uVar24;
                    } else {
                        dVar22 = *pdVar9;
                        dVar21 = pdVar9[1];
                        pdVar9 = pdVar9 + 2;
                        a3[2] = dVar38;
                        a3[1] = dVar21;
                        *a3 = dVar22;
                    }
                    *(u32 *)a3 = 0xe0000000;
                    if (cVar43 == '\0') {
                        dVar27 = (double)CONCAT44(*(u32 *)pdVar9, SUB84(dVar22, 0));
                        dVar22 = (double)CONCAT44(*(u32 *)((int)pdVar9 + 4), SUB84(dVar21, 0));
                    } else {
                        dVar27 = *pdVar9;
                        dVar22 = pdVar9[1];
                    }
                    if (cVar42 == '\0') {
                        dVar21 = (double)CONCAT44((float)((u64)dVar27 >> 0x20) * fVar31, SUB84(dVar27, 0) + fVar39);
                        dVar27 = (double)CONCAT44((float)((u64)dVar22 >> 0x20) + fVar34, SUB84(dVar22, 0) + fVar32);
                    } else {
                        dVar21 = dVar27 * dVar30 + dVar30;
                        dVar27 = dVar22 + dVar33 + dVar33;
                    }
                    fVar37 = (float)((u64)dVar27 >> 0x20);
                    uVar25 = (u32)((u64)dVar21 >> 0x20);
                    if (cVar43 == '\0') {
                        *(float *)((int)a3 + 0x3c) = fVar37;
                        pdVar9 = a3 + 7;
                        *(u32 *)pdVar9 = uVar25;
                    } else {
                        a3[7] = dVar27;
                        pdVar9 = a3 + 6;
                        *pdVar9 = dVar21;
                    }
                    if (cVar42 == '\0') {
                        dVar21 = (double)CONCAT44(uVar25, SUB84(dVar21, 0) + fVar36);
                        dVar27 = (double)CONCAT44(fVar37 + fVar36, SUB84(dVar27, 0) + fVar36);
                    } else {
                        dVar21 = dVar21 + dVar35;
                        dVar27 = dVar27 + dVar35 + dVar35;
                    }
                    if (cVar43 == '\0') {
                        *(int *)((int)pdVar9 + -4) = (int)((u64)dVar27 >> 0x20);
                        pdVar9 = pdVar9 + -1;
                        *(int *)pdVar9 = (int)((u64)dVar21 >> 0x20);
                    } else {
                        pdVar9[-1] = dVar27;
                        pdVar9 = pdVar9 + -2;
                        *pdVar9 = dVar21;
                    }
                    iVar12 = 1;
                    a3 = pdVar9 + 4;
                }
                if (cVar43 == '\0') {
                    uVar25 = *(u32 *)pdVar10;
                    dVar22 = (double)CONCAT44(uVar25, SUB84(dVar21, 0));
                    uVar24 = *(u32 *)((int)pdVar10 + 4);
                    dVar21 = (double)CONCAT44(uVar24, SUB84(dVar27, 0));
                    pdVar10 = pdVar10 + 1;
                    *(u32 *)((int)a3 + 0x14) = uVar26;
                    *(u32 *)(a3 + 2) = uVar24;
                    a3 = (double *)((int)a3 + 0xc);
                    *(u32 *)a3 = uVar25;
                } else {
                    dVar22 = *pdVar10;
                    dVar21 = pdVar10[1];
                    pdVar10 = pdVar10 + 2;
                    a3[2] = dVar23;
                    a3[1] = dVar21;
                    *a3 = dVar22;
                }
                *(u32 *)a3 = 0xe0000000;
                if (cVar43 == '\0') {
                    dVar27 = (double)CONCAT44(*(u32 *)pdVar10, SUB84(dVar22, 0));
                    dVar21 = (double)CONCAT44(*(u32 *)((int)pdVar10 + 4), SUB84(dVar21, 0));
                    pdVar10 = pdVar10 + 1;
                } else {
                    dVar27 = *pdVar10;
                    dVar21 = pdVar10[1];
                    pdVar10 = pdVar10 + 2;
                }
                if (cVar42 == '\0') {
                    dVar27 = (double)CONCAT44((float)((u64)dVar27 >> 0x20) * fVar31, SUB84(dVar27, 0) + fVar39);
                    dVar21 = (double)CONCAT44((float)((u64)dVar21 >> 0x20) + fVar34, SUB84(dVar21, 0) + fVar32);
                } else {
                    dVar27 = dVar27 * dVar30 + dVar30;
                    dVar21 = dVar21 + dVar33 + dVar33;
                }
                fVar39 = (float)((u64)dVar21 >> 0x20);
                uVar25 = (u32)((u64)dVar27 >> 0x20);
                if (cVar43 == '\0') {
                    *(float *)((int)a3 + 0x3c) = fVar39;
                    pdVar9 = a3 + 7;
                    *(u32 *)pdVar9 = uVar25;
                } else {
                    a3[7] = dVar21;
                    pdVar9 = a3 + 6;
                    *pdVar9 = dVar27;
                }
                if (cVar42 == '\0') {
                    in_dr0 = (double)CONCAT44(uVar25, SUB84(dVar27, 0) + fVar36);
                    in_dr2 = (double)CONCAT44(fVar39 + fVar36, SUB84(dVar21, 0) + fVar36);
                } else {
                    in_dr0 = dVar27 + dVar35;
                    in_dr2 = dVar21 + dVar35 + dVar35;
                }
                if (cVar43 == '\0') {
                    *(int *)((int)pdVar9 + -4) = (int)((u64)in_dr2 >> 0x20);
                    pdVar9 = pdVar9 + -1;
                    *(int *)pdVar9 = (int)((u64)in_dr0 >> 0x20);
                } else {
                    pdVar9[-1] = in_dr2;
                    pdVar9 = pdVar9 + -2;
                    *pdVar9 = in_dr0;
                }
                iVar12 = iVar12 + 1;
                a3 = pdVar9 + 4;
                pdVar10 = pdVar10 + -4;
            }
        LAB_8c214c5c:
            pdVar9 = pdVar10;
            a0 = (short *)((int)psVar5 + iVar6);
            iVar8 = iVar8 + -1;
            uVar25 = (u32)((u64)dVar40 >> 0x20);
            dVar21 = dVar40;
            if (cVar43 == '\0') {
                dVar21 = (double)CONCAT44(uVar25, SUB84(dVar23, 0));
                dVar23 = (double)CONCAT44((int)((u64)dVar23 >> 0x20), SUB84(dVar38, 0));
            }
            dVar38 = dVar23;
            pdVar10 = pdVar11;
            dVar23 = dVar21;
        } while (iVar8 != 0);
        if (iVar12 != 0) {
            if (cVar43 == '\0') {
                uVar26 = *(u32 *)pdVar11;
                dVar23 = (double)CONCAT44(uVar26, SUB84(in_dr0, 0));
                uVar24 = *(u32 *)((int)pdVar11 + 4);
                dVar38 = (double)CONCAT44(uVar24, SUB84(in_dr2, 0));
                pdVar11 = pdVar11 + 1;
                *(u32 *)((int)a3 + 0x14) = uVar25;
                *(u32 *)(a3 + 2) = uVar24;
                a3 = (double *)((int)a3 + 0xc);
                *(u32 *)a3 = uVar26;
            } else {
                dVar23 = *pdVar11;
                dVar38 = pdVar11[1];
                pdVar11 = pdVar11 + 2;
                a3[2] = dVar40;
                a3[1] = dVar38;
                *a3 = dVar23;
            }
            *(u32 *)a3 = 0xf0000000;
            if (cVar43 == '\0') {
                dVar23 = (double)CONCAT44(*(u32 *)pdVar11, SUB84(dVar23, 0));
                dVar38 = (double)CONCAT44(*(u32 *)((int)pdVar11 + 4), SUB84(dVar38, 0));
            } else {
                dVar23 = *pdVar11;
                dVar38 = pdVar11[1];
            }
            if (cVar42 == '\0') {
                dVar23 = (double)CONCAT44((float)((u64)dVar23 >> 0x20) * (float)((u64)dVar30 >> 0x20),
                                          SUB84(dVar23, 0) + SUB84(dVar30, 0));
                dVar38 = (double)CONCAT44((float)((u64)dVar38 >> 0x20) + (float)((u64)dVar33 >> 0x20),
                                          SUB84(dVar38, 0) + SUB84(dVar33, 0));
            } else {
                dVar23 = dVar23 * dVar30 + dVar30;
                dVar38 = dVar38 + dVar33 + dVar33;
            }
            fVar39 = (float)((u64)dVar38 >> 0x20);
            uVar25 = (u32)((u64)dVar23 >> 0x20);
            if (cVar43 == '\0') {
                *(float *)((int)a3 + 0x3c) = fVar39;
                pdVar9 = a3 + 7;
                *(u32 *)pdVar9 = uVar25;
            } else {
                a3[7] = dVar38;
                pdVar9 = a3 + 6;
                *pdVar9 = dVar23;
            }
            fVar36 = SUB84(dVar35, 0);
            if (cVar42 == '\0') {
                in_dr0 = (double)CONCAT44(uVar25, SUB84(dVar23, 0) + fVar36);
            } else {
                in_dr0 = dVar23 + dVar35;
            }
            if (cVar42 == '\0') {
                in_dr2 = (double)CONCAT44(fVar39 + fVar36, SUB84(dVar38, 0) + fVar36);
            } else {
                in_dr2 = dVar38 + dVar35 + dVar35;
            }
            if (cVar43 == '\0') {
                *(int *)((int)pdVar9 + -4) = (int)((u64)in_dr2 >> 0x20);
                pdVar9 = pdVar9 + -1;
                *(int *)pdVar9 = (int)((u64)in_dr0 >> 0x20);
            } else {
                pdVar9[-1] = in_dr2;
                pdVar9 = pdVar9 + -2;
                *pdVar9 = in_dr0;
            }
            iVar2 = iVar2 + iVar12 + 1;
            a3 = pdVar9 + 4;
        }
        uVar1 = uVar1 - 1;
        if (uVar1 == 0) {
            g_8c4aa520 = g_8c4aa520 + iVar2;
            g_8c4aa51c = g_8c4aa51c + iVar3;
            return a3;
        }
    } while (true);
}

/*
 * kamui_fill_loop_214d6c  0x8c214d6c
 * area name: in the kamui library code range; behaviour name: a loop that writes memory
 * called by: kamui_calls_fill_loop_214aec
 */
double *kamui_fill_loop_214d6c(double *a0, double *a1, double *a2, double *a3) {
    u32 *puVar1;
    int iVar2;
    double *pdVar3;
    int iVar4;
    double *pdVar5;
    u64 *puVar6;
    int iVar7;
    int *piVar8;
    u32 *puVar9;
    u32 *puVar10;
    int *piVar11;
    int iVar12;
    u8 *puVar13;
    float fVar14;
    double in_dr0;
    double dVar15;
    u32 in_fr3;
    float fVar16;
    float fVar17;
    float fVar18;
    float fVar19;
    float fVar20;
    double dVar21;
    u64 uVar22;
    u64 uVar23;
    double dVar24;
    u32 uVar25;
    u32 uVar26;
    double in_dr4;
    u32 uVar27;
    u32 uVar28;
    double in_dr6;
    double dVar29;
    u32 uVar30;
    u64 in_dr8;
    double in_dr10;
    float in_fr13;
    double dVar31;
    double in_xd0;
    double in_xd2;
    double dVar32;
    double in_xd4;
    int aiStack_68[3];
    float afStack_5c[12];
    u8 auStack_2c[8];
    u8 auStack_24[8];

    puVar13 = auStack_24;

    if ((g_8c4aa4f0 & 0x10000) == 0) {

        in_dr0 = (double)CONCAT44((int)((u64)in_dr0 >> 0x20), g_8c4aa4a8);
        dVar15 = (double)CONCAT44(g_8c4aa4e0, in_fr3);
        fVar14 = g_8c4aa4a8;
        in_fr13 = g_8c4aa4a8;

        fVar20 = (float)((u64)dVar15 >> 0x20);

        fVar14 = fVar14 * fVar20;

        dVar15 = (double)CONCAT44(fVar20, g_8c4aa4dc);
        *(float *)(puVar13 + -0xe4) = fVar14;
        dVar31 = (double)CONCAT44(g_8c4aa4b4, in_fr13);

        dVar31 = (double)CONCAT44((int)((u64)dVar31 >> 0x20), SUB84(dVar31, 0) * SUB84(dVar15, 0));

        *(u32 *)(puVar13 + -0xe8) = g_8c4aa4b8;
        dVar15 = (double)CONCAT44((int)((u64)dVar15 >> 0x20), *(u32 *)(puVar13 + -0xe4));

        puVar1 = (u32 *)(puVar13 + -0x3c);

        dVar15 = (double)CONCAT44(1.0 / SUB84(dVar15, 0), 1.0 / SUB84(dVar31, 0));

        *puVar1 = a0;

        dVar21 = (double)CONCAT44(*(u32 *)a0, *(u32 *)((int)a0 + 4));

        fVar20 = (float)((u64)dVar31 >> 0x20);
        fVar14 = SUB84(dVar15, 0);

        fVar16 = (SUB84(dVar21, 0) - fVar20) * (float)((u64)dVar21 >> 0x20) * fVar14;

        *(float *)(puVar13 + -0x38) = fVar16;
        dVar21 = (double)CONCAT44(*(u32 *)(a0 + 1), *(u32 *)(puVar13 + -0xe8));

        dVar21 = (double)CONCAT44((float)((u64)dVar21 >> 0x20) - SUB84(dVar21, 0), SUB84(dVar21, 0));

        dVar21 = (double)CONCAT44((int)((u64)dVar21 >> 0x20), *(u32 *)a0);

        fVar16 = (float)((u64)dVar15 >> 0x20);

        dVar21 = (double)CONCAT44((float)((u64)dVar21 >> 0x20) * SUB84(dVar21, 0) * fVar16, SUB84(dVar21, 0));

        *(int *)(puVar13 + -0x34) = (int)((u64)dVar21 >> 0x20);
        *(int *)(puVar13 + -0x30) = (int)((u64)in_dr4 >> 0x20);
        *(int *)(puVar13 + -0x2c) = SUB84(in_dr4, 0);

        *(double **)(puVar13 + -0x28) = a1;

        dVar21 = (double)CONCAT44(*(u32 *)a1, *(u32 *)((int)a1 + 4));

        fVar17 = (SUB84(dVar21, 0) - fVar20) * (float)((u64)dVar21 >> 0x20) * fVar14;

        *(float *)(puVar13 + -0x24) = fVar17;
        dVar21 = (double)CONCAT44(*(u32 *)(a1 + 1), *(u32 *)(puVar13 + -0xe8));

        dVar21 = (double)CONCAT44((float)((u64)dVar21 >> 0x20) - SUB84(dVar21, 0), SUB84(dVar21, 0));

        dVar21 = (double)CONCAT44((int)((u64)dVar21 >> 0x20), *(u32 *)a1);

        dVar21 = (double)CONCAT44((float)((u64)dVar21 >> 0x20) * SUB84(dVar21, 0) * fVar16, SUB84(dVar21, 0));

        *(int *)(puVar13 + -0x20) = (int)((u64)dVar21 >> 0x20);
        *(int *)(puVar13 + -0x1c) = (int)((u64)in_dr6 >> 0x20);
        *(int *)(puVar13 + -0x18) = SUB84(in_dr6, 0);

        *(double **)(puVar13 + -0x14) = a2;

        dVar21 = (double)CONCAT44(*(u32 *)a2, *(u32 *)((int)a2 + 4));

        pdVar5 = (double *)(puVar13 + -0xcc);

        fVar14 = (SUB84(dVar21, 0) - fVar20) * (float)((u64)dVar21 >> 0x20) * fVar14;

        *(float *)(puVar13 + -0x10) = fVar14;
        dVar21 = (double)CONCAT44(*(u32 *)(a2 + 1), *(u32 *)(puVar13 + -0xe8));

        dVar21 = (double)CONCAT44((float)((u64)dVar21 >> 0x20) - SUB84(dVar21, 0), SUB84(dVar21, 0));

        dVar21 = (double)CONCAT44((int)((u64)dVar21 >> 0x20), *(u32 *)a2);

        iVar12 = 0;

        dVar21 = (double)CONCAT44((float)((u64)dVar21 >> 0x20) * SUB84(dVar21, 0) * fVar16, SUB84(dVar21, 0));

        *(int *)(puVar13 + -0xc) = (int)((u64)dVar21 >> 0x20);
        *(int *)(puVar13 + -8) = (int)((u64)in_dr8 >> 0x20);
        *(int *)(puVar13 + -4) = (int)in_dr8;

        iVar2 = 0;
        iVar7 = 2;
        while (true) {
            iVar4 = iVar2;
            fVar14 = SUB84(in_dr10, 0);
            fVar16 = (float)((u64)in_dr10 >> 0x20);
            if (2 < iVar4)
                break;
            puVar10 = puVar1 + iVar7 * 5;

            uVar22 = CONCAT44(*(u32 *)*puVar10, 0x3f800000);

            puVar9 = puVar1 + iVar4 * 5;

            uVar23 = CONCAT44(*(u32 *)*puVar9, (float)uVar22);

            fVar17 = (float)uVar23;
            if (((1 && (float)uVar22 < (float)((u64)uVar22 >> 0x20)) ^ 1) !=
                -((1 && fVar17 < (float)((u64)uVar23 >> 0x20)) - 1)) {
                pdVar3 = (double *)*puVar10;
                *(double **)(puVar13 + -0xd0) = pdVar3;

                dVar21 = (double)CONCAT44(*(u32 *)pdVar3, SUB84(in_dr4, 0));

                fVar18 = (float)((u64)dVar21 >> 0x20);

                dVar15 = (double)CONCAT44((int)((u64)dVar15 >> 0x20), *(u32 *)*puVar9);
                dVar32 = in_xd2;
                fVar17 = fVar18;

                dVar24 = (double)CONCAT44(0x3f800000, -fVar17);

                dVar24 = (double)CONCAT44(0x3f800000, -fVar17 + 1.0);
                dVar15 = (double)CONCAT44((int)((u64)dVar15 >> 0x20), SUB84(dVar15, 0) - fVar18);

                dVar21 = (double)CONCAT44(SUB84(dVar24, 0), puVar10[1]);

                in_dr4 = (double)CONCAT44((float)((u64)dVar21 >> 0x20) / SUB84(dVar15, 0), SUB84(dVar21, 0));

                dVar24 = (double)CONCAT44((int)((u64)dVar24 >> 0x20), puVar9[1]);
                dVar15 = (double)((u64)in_dr4 & 0xffffffff);
                dVar21 = in_xd0;

                dVar24 = (double)CONCAT44((int)((u64)dVar24 >> 0x20), SUB84(dVar24, 0) - SUB84(in_dr4, 0));

                uVar25 = (u32)((u64)in_dr4 >> 0x20);

                dVar29 = (double)CONCAT44(puVar10[2], SUB84(in_dr6, 0));
                dVar15 = (double)CONCAT44(uVar25, SUB84(dVar15, 0));

                fVar17 = (float)((u64)dVar15 >> 0x20);
                dVar15 = (double)CONCAT44(fVar17, fVar17 * SUB84(dVar24, 0) + SUB84(dVar15, 0));

                dVar24 = (double)CONCAT44((int)((u64)dVar24 >> 0x20), puVar9[2]);

                fVar17 = (float)((u64)dVar29 >> 0x20);

                dVar24 = (double)CONCAT44((int)((u64)dVar24 >> 0x20), SUB84(dVar24, 0) - fVar17);

                in_xd0 = dVar29;

                in_dr4 = (double)CONCAT44(uVar25, SUB84(dVar15, 0));
                dVar15 = (double)CONCAT44((int)((u64)dVar15 >> 0x20), fVar17);
                in_xd0 = dVar21;
                dVar21 = in_xd4;

                dVar15 = (double)(u64)(u32)((float)((u64)dVar15 >> 0x20) * SUB84(dVar24, 0) + SUB84(dVar15, 0));

                in_xd2 = dVar31;
                in_dr6 = in_xd0;

                dVar24 = (double)CONCAT44((int)((u64)dVar24 >> 0x20), fVar20);
                in_xd2 = dVar32;
                in_dr6 = (double)CONCAT44(SUB84(dVar15, 0), SUB84(dVar29, 0));

                fVar17 = SUB84(in_dr4, 0);
                dVar32 = dVar21;

                dVar32 = (double)CONCAT44(fVar17, SUB84(dVar15, 0));

                dVar24 = (double)CONCAT44((int)((u64)dVar24 >> 0x20),
                                          (float)((u64)dVar32 >> 0x20) * SUB84(dVar31, 0) + SUB84(dVar24, 0));

                pdVar3 = (double *)(iVar12 * 0x24 + (int)pdVar5);

                *(int *)pdVar3 = SUB84(dVar24, 0);
                dVar24 = (double)CONCAT44((int)((u64)dVar24 >> 0x20), *(u32 *)(puVar13 + -0xe8));
                dVar15 = (double)CONCAT44((int)((u64)in_dr6 >> 0x20), *(u32 *)(puVar13 + -0xe4));

                dVar24 = (double)CONCAT44((int)((u64)dVar24 >> 0x20),
                                          (float)((u64)dVar15 >> 0x20) * SUB84(dVar15, 0) + SUB84(dVar24, 0));

                uVar25 = (u32)((u64)in_dr4 >> 0x20);

                *(int *)((int)pdVar3 + 4) = SUB84(dVar24, 0);
                *(int *)(pdVar3 + 1) = (int)((u64)dVar24 >> 0x20);
                fVar17 = (float)puVar10[3];
                in_dr4 = (double)CONCAT44(uVar25, fVar17);
                dVar24 = (double)CONCAT44(fVar17, puVar9[3]);
                dVar32 = (double)CONCAT44(uVar25, SUB84(dVar15, 0));

                fVar18 = (float)((u64)dVar32 >> 0x20);

                fVar17 = SUB84(dVar24, 0) - fVar17;
                dVar24 = (double)CONCAT44(fVar18 * fVar17 + (float)((u64)dVar24 >> 0x20), fVar17);

                *(int *)((int)pdVar3 + 0xc) = (int)((u64)dVar24 >> 0x20);
                fVar17 = (float)puVar10[4];
                in_dr4 = (double)CONCAT44((int)((u64)in_dr4 >> 0x20), fVar17);
                dVar15 = (double)CONCAT44(fVar17, puVar9[4]);
                in_xd4 = dVar21;

                fVar17 = SUB84(dVar15, 0) - fVar17;
                dVar15 = (double)CONCAT44(fVar18 * fVar17 + (float)((u64)dVar15 >> 0x20), fVar17);

                *(int *)(pdVar3 + 2) = (int)((u64)dVar15 >> 0x20);

                dVar15 = dVar32;
                if (g_8c277acc == 0) {
                    piVar8 = puVar1 + iVar7 * 5;
                    uVar25 = (u32)((u64)in_dr4 >> 0x20);
                    dVar15 = in_dr4;

                    dVar15 = (double)CONCAT44(uVar25, SUB84(dVar32, 0));

                    iVar2 = *piVar8;
                    *(int *)(puVar13 + -0xd4) = iVar2;
                    piVar11 = puVar1 + iVar4 * 5;

                    in_dr4 = (double)CONCAT44(uVar25, *(u32 *)(iVar2 + 0x14));

                    dVar21 = (double)CONCAT44(SUB84(in_dr4, 0), *(u32 *)(*piVar11 + 0x14));

                    fVar17 = (float)((u64)dVar15 >> 0x20);

                    fVar18 = SUB84(dVar21, 0) - SUB84(in_dr4, 0);
                    dVar21 = (double)CONCAT44(fVar17 * fVar18 + (float)((u64)dVar21 >> 0x20) + fVar14, fVar18);

                    uVar25 = (u32)((u64)dVar21 >> 0x20);

                    *(u32 *)((int)pdVar3 + 0x14) = uVar25;

                    iVar2 = *piVar8;
                    *(int *)(puVar13 + -0xd8) = iVar2;

                    in_dr4 = (double)CONCAT44((int)((u64)in_dr4 >> 0x20), *(u32 *)(iVar2 + 0x18));
                    dVar21 = (double)CONCAT44(uVar25, *(u32 *)(*piVar11 + 0x18));

                    fVar18 = SUB84(in_dr4, 0);

                    fVar19 = SUB84(dVar21, 0) - fVar18;

                    dVar21 = in_xd4;

                    dVar21 = (double)CONCAT44(fVar18, fVar19);

                    dVar21 =
                        (double)CONCAT44(fVar17 * SUB84(dVar21, 0) + (float)((u64)dVar21 >> 0x20), SUB84(dVar21, 0));

                    dVar21 = (double)CONCAT44((int)((u64)dVar21 >> 0x20), *(u32 *)(puVar13 + 0x24));

                    dVar21 = (double)CONCAT44((float)((u64)dVar21 >> 0x20) + SUB84(dVar21, 0), SUB84(dVar21, 0));

                    *(int *)(pdVar3 + 3) = (int)((u64)dVar21 >> 0x20);

                    iVar2 = *piVar8;
                    *(int *)(puVar13 + -0xdc) = iVar2;

                    fVar18 = *(float *)(iVar2 + 0x1c);
                    in_dr4 = (double)CONCAT44((int)((u64)in_dr4 >> 0x20), fVar18);
                    dVar21 = (double)CONCAT44(fVar18, *(u32 *)(*piVar11 + 0x1c));

                    fVar18 = SUB84(dVar21, 0) - fVar18;
                    dVar21 = (double)CONCAT44(fVar17 * fVar18 + (float)((u64)dVar21 >> 0x20), fVar18);

                    dVar21 = (double)CONCAT44((int)((u64)dVar21 >> 0x20), *(u32 *)(puVar13 + 0x28));

                    dVar21 = (double)CONCAT44((float)((u64)dVar21 >> 0x20) + SUB84(dVar21, 0), SUB84(dVar21, 0));

                    *(int *)((int)pdVar3 + 0x1c) = (int)((u64)dVar21 >> 0x20);

                    iVar2 = *piVar8;
                    *(int *)(puVar13 + -0xe0) = iVar2;

                    fVar18 = *(float *)(iVar2 + 0x10);
                    in_dr4 = (double)CONCAT44((int)((u64)in_dr4 >> 0x20), fVar18);
                    dVar21 = (double)CONCAT44(fVar18, *(u32 *)(*piVar11 + 0x10));

                    fVar18 = SUB84(dVar21, 0) - fVar18;
                    dVar21 = (double)CONCAT44((fVar17 * fVar18 + (float)((u64)dVar21 >> 0x20)) * fVar16, fVar18);

                    *(int *)(pdVar3 + 4) = (int)((u64)dVar21 >> 0x20);
                }
                iVar12 = iVar12 + 1;
            }
            piVar8 = puVar1 + iVar4 * 5;

            dVar21 = (double)CONCAT44(*(u32 *)*piVar8, 0x3f800000);

            if (SUB84(dVar21, 0) < (float)((u64)dVar21 >> 0x20)) {

                uVar22 = CONCAT44(*(u32 *)(*piVar8 + 4), SUB84(dVar21, 0));

                puVar6 = (u64 *)(iVar12 * 0x24 + (int)pdVar5);

                *(int *)puVar6 = (int)((u64)uVar22 >> 0x20);

                uVar25 = *(u32 *)(*piVar8 + 8);
                uVar22 = CONCAT44(uVar25, (int)uVar22);
                *(u32 *)((int)puVar6 + 4) = uVar25;

                *(u32 *)(puVar6 + 1) = *(u32 *)(*piVar8 + 0xc);
                *(int *)((int)puVar6 + 0xc) = piVar8[3];
                dVar21 = (double)CONCAT44(piVar8[4], (int)uVar22);
                *(int *)(puVar6 + 2) = piVar8[4];

                if (g_8c277acc == 0) {
                    piVar8 = puVar1 + iVar4 * 5;

                    dVar21 = (double)CONCAT44(*(u32 *)(*piVar8 + 0x14), SUB84(dVar21, 0));

                    dVar21 = (double)CONCAT44((float)((u64)dVar21 >> 0x20) + fVar14, SUB84(dVar21, 0));

                    *(int *)((int)puVar6 + 0x14) = (int)((u64)dVar21 >> 0x20);
                    dVar21 = (double)CONCAT44(*(u32 *)(puVar13 + 0x24), SUB84(dVar21, 0));

                    dVar15 = (double)CONCAT44((int)((u64)dVar15 >> 0x20), *(u32 *)(*piVar8 + 0x18));

                    dVar15 =
                        (double)CONCAT44((int)((u64)dVar15 >> 0x20), SUB84(dVar15, 0) + (float)((u64)dVar21 >> 0x20));

                    *(int *)(puVar6 + 3) = SUB84(dVar15, 0);

                    dVar21 = (double)CONCAT44(*(u32 *)(puVar13 + 0x28), SUB84(dVar21, 0));
                    dVar15 = (double)CONCAT44((int)((u64)dVar15 >> 0x20), *(u32 *)(*piVar8 + 0x1c));

                    dVar15 =
                        (double)CONCAT44((int)((u64)dVar15 >> 0x20), SUB84(dVar15, 0) + (float)((u64)dVar21 >> 0x20));

                    *(int *)((int)puVar6 + 0x1c) = SUB84(dVar15, 0);

                    dVar21 = (double)CONCAT44(*(u32 *)(*piVar8 + 0x10), SUB84(dVar21, 0));

                    dVar21 = (double)CONCAT44((float)((u64)dVar21 >> 0x20) * fVar16, SUB84(dVar21, 0));

                    *(int *)(puVar6 + 4) = (int)((u64)dVar21 >> 0x20);
                }
                iVar12 = iVar12 + 1;
            }
            iVar2 = iVar4 + 1;
            iVar7 = iVar4;
        }
        if (g_8c277acc != 0) {
            piVar8 = (int *)(puVar13 + -0x14);

            dVar21 = (double)CONCAT44((int)((u64)dVar21 >> 0x20), *(u32 *)(*piVar8 + 0x14));

            fVar20 = SUB84(dVar21, 0) + fVar14;

            *(float *)(puVar13 + -0x70) = fVar20;
            fVar20 = *(float *)(puVar13 + 0x24);

            dVar15 = (double)CONCAT44(*(u32 *)(*piVar8 + 0x18), fVar20);

            dVar15 = (double)CONCAT44((float)((u64)dVar15 >> 0x20) + SUB84(dVar15, 0), SUB84(dVar15, 0));

            *(int *)(puVar13 + -0x6c) = (int)((u64)dVar15 >> 0x20);
            dVar15 = (double)(u64) * (u32 *)(puVar13 + 0x28);

            dVar21 = (double)CONCAT44(*(u32 *)(*piVar8 + 0x1c), SUB84(dVar15, 0));

            dVar21 = (double)CONCAT44((float)((u64)dVar21 >> 0x20) + SUB84(dVar21, 0), SUB84(dVar21, 0));

            uVar25 = (u32)((u64)dVar21 >> 0x20);

            *(u32 *)(puVar13 + -0x68) = uVar25;

            dVar21 = (double)CONCAT44(uVar25, *(u32 *)(*piVar8 + 0x10));

            dVar21 = (double)CONCAT44((int)((u64)dVar21 >> 0x20), SUB84(dVar21, 0) * fVar16);

            *(int *)(puVar13 + -100) = SUB84(dVar21, 0);

            if (iVar12 != 3) {
                piVar8 = (int *)(puVar13 + -0x14);

                dVar21 = (double)CONCAT44((int)((u64)dVar21 >> 0x20), *(u32 *)(*piVar8 + 0x14));

                fVar14 = SUB84(dVar21, 0) + fVar14;

                *(float *)(puVar13 + -0x4c) = fVar14;
                fVar14 = *(float *)(puVar13 + 0x24);

                dVar15 = (double)CONCAT44(*(u32 *)(*piVar8 + 0x18), fVar14);

                dVar15 = (double)CONCAT44((float)((u64)dVar15 >> 0x20) + SUB84(dVar15, 0), SUB84(dVar15, 0));

                *(int *)(puVar13 + -0x48) = (int)((u64)dVar15 >> 0x20);

                dVar21 = (double)CONCAT44(*(u32 *)(*piVar8 + 0x1c), *(u32 *)(puVar13 + 0x28));

                dVar21 = (double)CONCAT44((float)((u64)dVar21 >> 0x20) + SUB84(dVar21, 0), SUB84(dVar21, 0));

                uVar25 = (u32)((u64)dVar21 >> 0x20);

                *(u32 *)(puVar13 + -0x44) = uVar25;

                dVar21 = (double)CONCAT44(uVar25, *(u32 *)(*piVar8 + 0x10));

                dVar21 = (double)CONCAT44((int)((u64)dVar21 >> 0x20), SUB84(dVar21, 0) * fVar16);

                *(int *)(puVar13 + -0x40) = SUB84(dVar21, 0);
            }
        }

        uVar27 = *(u32 *)pdVar5;
        uVar26 = *(u32 *)(puVar13 + -200);
        dVar15 = (double)CONCAT44(uVar27, uVar26);
        uVar30 = *(u32 *)(puVar13 + -0xc4);
        uVar28 = *(u32 *)(puVar13 + -0xc0);
        uVar25 = *(u32 *)(puVar13 + -0xbc);
        pdVar5 = (double *)(puVar13 + -0xb8);
        *(u32 *)((int)a3 + 0x14) = uVar25;
        *(u32 *)(a3 + 2) = uVar28;
        *(u32 *)((int)a3 + 0xc) = uVar30;
        *(u32 *)(a3 + 1) = uVar26;
        pdVar3 = (double *)((int)a3 + 4);
        *(u32 *)pdVar3 = uVar27;

        uVar26 = SUB84(dVar15, 0);
        *(u32 *)((int)pdVar3 + -4) = 0xe0000000;

        in_dr10 = (double)(u64) * (u32 *)pdVar5;
        uVar26 = *(u32 *)((int)pdVar5 + 4);
        pdVar5 = pdVar5 + 1;

        dVar15 = (double)CONCAT44(uVar25, 0xbf800000);

        uVar25 = *(u32 *)pdVar5;
        pdVar5 = (double *)((int)pdVar5 + 4);
        dVar21 = (double)CONCAT44((int)((u64)dVar21 >> 0x20), uVar25);
        dVar31 = (double)CONCAT44(uVar25, uVar26);

        dVar21 = (double)CONCAT44((int)((u64)dVar21 >> 0x20), SUB84(dVar21, 0) + -1.0);

        dVar32 = (double)CONCAT44(*(u32 *)pdVar5, SUB84(in_dr10, 0));
        pdVar3 = pdVar3 + 7;
        *(int *)pdVar3 = SUB84(dVar21, 0);
        dVar21 = (double)CONCAT44((int)((u64)dVar21 >> 0x20), SUB84(dVar31, 0));

        dVar21 = (double)CONCAT44((int)((u64)dVar21 >> 0x20), SUB84(dVar21, 0) + -1.0);

        pdVar3 = (double *)((int)pdVar3 + -4);
        *(int *)pdVar3 = SUB84(dVar21, 0);
        dVar21 = (double)CONCAT44((int)((u64)dVar21 >> 0x20), SUB84(dVar32, 0));

        dVar21 = (double)CONCAT44((int)((u64)dVar21 >> 0x20), SUB84(dVar21, 0) + -1.0);

        *(int *)((int)pdVar3 + -4) = SUB84(dVar21, 0);
        *(u32 *)((int)pdVar3 + -0xc) = uVar25;
        *(int *)(pdVar3 + -2) = SUB84(dVar31, 0);
        *(int *)((int)pdVar3 + -0x14) = SUB84(dVar32, 0);
        *(int *)(pdVar3 + -3) = (int)((u64)dVar32 >> 0x20);
        uVar26 = *(u32 *)(puVar13 + -0xa8);
        uVar25 = *(u32 *)(puVar13 + -0xa4);
        uVar28 = *(u32 *)(puVar13 + -0xa0);
        uVar27 = *(u32 *)(puVar13 + -0x9c);
        dVar15 = (double)CONCAT44(*(u32 *)(puVar13 + -0x98), 0xbf800000);
        pdVar5 = (double *)(puVar13 + -0x94);
        *(u32 *)((int)pdVar3 + 0x1c) = *(u32 *)(puVar13 + -0x98);
        *(u32 *)(pdVar3 + 3) = uVar27;
        *(u32 *)((int)pdVar3 + 0x14) = uVar28;
        *(u32 *)(pdVar3 + 2) = uVar25;
        puVar6 = (u64 *)((int)pdVar3 + 0xc);
        *(u32 *)puVar6 = uVar26;

        *(u32 *)((int)puVar6 + -4) = 0xe0000000;

        dVar32 = (double)(u64) * (u32 *)pdVar5;
        uVar25 = *(u32 *)(pdVar5 + 1);
        dVar31 = (double)CONCAT44(*(u32 *)((int)pdVar5 + 4), uVar25);
        pdVar5 = (double *)((int)pdVar5 + 0xc);
        dVar21 = (double)CONCAT44((int)((u64)dVar21 >> 0x20), uVar25);

        fVar14 = SUB84(dVar15, 0);

        dVar21 = (double)CONCAT44((int)((u64)dVar21 >> 0x20), SUB84(dVar21, 0) + fVar14);

        uVar26 = (u32)((u64)dVar31 >> 0x20);

        dVar32 = (double)CONCAT44(*(u32 *)pdVar5, SUB84(dVar32, 0));
        pdVar5 = (double *)(puVar6 + 7);
        *(int *)pdVar5 = SUB84(dVar21, 0);
        dVar21 = (double)CONCAT44((int)((u64)dVar21 >> 0x20), uVar26);

        dVar21 = (double)CONCAT44((int)((u64)dVar21 >> 0x20), SUB84(dVar21, 0) + fVar14);

        pdVar5 = (double *)((int)pdVar5 + -4);
        *(int *)pdVar5 = SUB84(dVar21, 0);
        dVar21 = (double)CONCAT44((int)((u64)dVar21 >> 0x20), SUB84(dVar32, 0));

        dVar21 = (double)CONCAT44((int)((u64)dVar21 >> 0x20), SUB84(dVar21, 0) + fVar14);

        *(int *)((int)pdVar5 + -4) = SUB84(dVar21, 0);
        *(u32 *)((int)pdVar5 + -0xc) = uVar25;
        *(u32 *)(pdVar5 + -2) = uVar26;
        *(int *)((int)pdVar5 + -0x14) = SUB84(dVar32, 0);
        pdVar5 = pdVar5 + -3;
        *(int *)pdVar5 = (int)((u64)dVar32 >> 0x20);

        if (iVar12 != 3) {

            uVar25 = *(u32 *)(puVar13 + -0x60);
            uVar27 = *(u32 *)(puVar13 + -0x5c);
            uVar26 = *(u32 *)(puVar13 + -0x58);
            uVar28 = *(u32 *)(puVar13 + -0x54);
            dVar15 = (double)CONCAT44(uVar28, fVar14);
            pdVar3 = (double *)(puVar13 + -0x4c);
            *(u32 *)((int)pdVar5 + 0x34) = *(u32 *)(puVar13 + -0x50);
            *(u32 *)(pdVar5 + 6) = uVar28;
            *(u32 *)((int)pdVar5 + 0x2c) = uVar26;
            *(u32 *)(pdVar5 + 5) = uVar27;
            pdVar5 = (double *)((int)pdVar5 + 0x24);
            *(u32 *)pdVar5 = uVar25;

            *(u32 *)((int)pdVar5 + -4) = 0xe0000000;

            dVar32 = (double)(u64) * (u32 *)pdVar3;
            uVar25 = *(u32 *)(pdVar3 + 1);
            dVar31 = (double)CONCAT44(*(u32 *)((int)pdVar3 + 4), uVar25);
            pdVar3 = (double *)((int)pdVar3 + 0xc);
            dVar21 = (double)CONCAT44((int)((u64)dVar21 >> 0x20), uVar25);

            fVar14 = SUB84(dVar15, 0);

            dVar21 = (double)CONCAT44((int)((u64)dVar21 >> 0x20), SUB84(dVar21, 0) + fVar14);

            uVar26 = (u32)((u64)dVar31 >> 0x20);

            dVar32 = (double)CONCAT44(*(u32 *)pdVar3, SUB84(dVar32, 0));
            pdVar5 = pdVar5 + 7;
            *(int *)pdVar5 = SUB84(dVar21, 0);
            dVar21 = (double)CONCAT44((int)((u64)dVar21 >> 0x20), uVar26);

            dVar21 = (double)CONCAT44((int)((u64)dVar21 >> 0x20), SUB84(dVar21, 0) + fVar14);

            pdVar5 = (double *)((int)pdVar5 + -4);
            *(int *)pdVar5 = SUB84(dVar21, 0);
            dVar21 = (double)CONCAT44((int)((u64)dVar21 >> 0x20), SUB84(dVar32, 0));

            dVar21 = (double)CONCAT44((int)((u64)dVar21 >> 0x20), SUB84(dVar21, 0) + fVar14);

            *(int *)((int)pdVar5 + -4) = SUB84(dVar21, 0);
            *(u32 *)((int)pdVar5 + -0xc) = uVar25;
            *(u32 *)(pdVar5 + -2) = uVar26;
            *(int *)((int)pdVar5 + -0x14) = SUB84(dVar32, 0);
            pdVar5 = pdVar5 + -3;
            *(int *)pdVar5 = (int)((u64)dVar32 >> 0x20);
        }
        uVar25 = SUB84(dVar32, 0);

        uVar30 = *(u32 *)(puVar13 + -0x84);
        dVar15 = (double)CONCAT44(uVar30, SUB84(dVar15, 0));
        uVar27 = *(u32 *)(puVar13 + -0x80);
        uVar26 = *(u32 *)(puVar13 + -0x7c);
        uVar28 = *(u32 *)(puVar13 + -0x78);
        pdVar3 = (double *)(puVar13 + -0x70);
        *(u32 *)((int)pdVar5 + 0x34) = *(u32 *)(puVar13 + -0x74);
        *(u32 *)(pdVar5 + 6) = uVar28;
        *(u32 *)((int)pdVar5 + 0x2c) = uVar26;
        *(u32 *)(pdVar5 + 5) = uVar27;
        pdVar5 = (double *)((int)pdVar5 + 0x24);
        *(u32 *)pdVar5 = uVar30;

        *(u32 *)((int)pdVar5 + -4) = 0xf0000000;

        uVar25 = *(u32 *)pdVar3;
        uVar26 = *(u32 *)(pdVar3 + 1);
        dVar31 = (double)CONCAT44(*(u32 *)((int)pdVar3 + 4), uVar26);
        pdVar3 = (double *)((int)pdVar3 + 0xc);
        dVar21 = (double)CONCAT44((int)((u64)dVar21 >> 0x20), uVar26);

        fVar14 = SUB84(dVar15, 0);

        dVar21 = (double)CONCAT44((int)((u64)dVar21 >> 0x20), SUB84(dVar21, 0) + fVar14);

        uVar27 = (u32)((u64)dVar31 >> 0x20);

        dVar32 = (double)CONCAT44(*(u32 *)pdVar3, uVar25);
        pdVar5 = pdVar5 + 7;
        *(int *)pdVar5 = SUB84(dVar21, 0);
        dVar21 = (double)CONCAT44((int)((u64)dVar21 >> 0x20), uVar27);

        dVar21 = (double)CONCAT44((int)((u64)dVar21 >> 0x20), SUB84(dVar21, 0) + fVar14);

        pdVar5 = (double *)((int)pdVar5 + -4);
        *(int *)pdVar5 = SUB84(dVar21, 0);
        dVar21 = (double)CONCAT44((int)((u64)dVar21 >> 0x20), SUB84(dVar32, 0));

        fVar14 = SUB84(dVar21, 0) + fVar14;

        *(float *)((int)pdVar5 + -4) = fVar14;
        *(u32 *)((int)pdVar5 + -0xc) = uVar26;
        *(u32 *)(pdVar5 + -2) = uVar27;
        *(int *)((int)pdVar5 + -0x14) = SUB84(dVar32, 0);
        pdVar5 = pdVar5 + -3;
        *(int *)pdVar5 = (int)((u64)dVar32 >> 0x20);

        a3 = pdVar5 + 4;
        g_8c4aa520 = g_8c4aa520 + iVar12;
    }
    return a3;
}

/*
 * gfxlib_fill_loop_215250  0x8c215250
 * area name: in the gfxlib library code range; behaviour name: a loop that writes memory
 * called by: gfxlib_calls_fill_loop_218c82
 */
int gfxlib_fill_loop_215250(int *a0, u32 unused_a1, u32 unused_a2, u32 a3) {
    float fVar1;
    float fVar2;
    float *pfVar3;
    float *pfVar4;
    float *pfVar5;
    u32 uVar6;
    u32 uVar7;
    int iVar8;
    float *pfVar9;
    int iVar10;
    float *pfVar11;
    int iVar12;
    u64 in_dr6;
    float fVar13;
    float fVar14;
    float fVar15;
    float fVar16;
    float fVar17;
    float fVar19;
    s64 lVar18;
    float fVar20;
    float fVar21;
    float fVar22;
    float fVar23;
    float in_xf0;
    float in_xf1;
    float in_xf2;
    float in_xf3;
    u64 in_xd4;
    float in_xf6;
    float in_xf7;
    u64 in_xd8;
    u64 in_xd10;
    u64 in_xd12;
    u64 in_xd14;
    float fVar24;
    bool bVar25;
    bool bVar26;

    iVar8 = *a0;
    pfVar9 = (float *)a0[1];
    iVar10 = a0[2];
    pfVar11 = (float *)a0[3];
    iVar12 = 0;
    do {
        fVar22 = *pfVar9;
        fVar21 = pfVar9[1];
        fVar23 = pfVar9[2];
        fVar16 = (float)((u64)in_xd4 >> 0x20);
        fVar20 = (float)((u64)in_xd10 >> 0x20);
        fVar13 = (float)((u64)in_xd12 >> 0x20);
        fVar24 = (float)((u64)in_xd14 >> 0x20);
        fVar1 = in_xf0 * fVar21 + (float)in_xd4 * fVar22 + (float)in_xd8 * 1.0 + (float)in_xd12 * fVar23;
        fVar17 = (float)((u64)in_xd8 >> 0x20);
        fVar2 = in_xf1 * fVar21 + fVar16 * fVar22 + fVar17 * 1.0 + fVar13 * fVar23;
        fVar23 = in_xf3 * fVar21 + in_xf7 * fVar22 + fVar20 * 1.0 + fVar24 * fVar23;
        fVar15 = pfVar9[3];
        fVar14 = pfVar9[4];
        fVar19 = pfVar9[5];
        lVar18 = (u64)(u32)fVar19 << 0x20;
        pfVar9 = pfVar9 + 6;
        fVar21 = in_xf0 * fVar14 + (float)in_xd4 * fVar15 + (float)in_xd8 * 0.0 + (float)in_xd12 * fVar19;
        fVar22 = in_xf1 * fVar14 + fVar16 * fVar15 + fVar17 * 0.0 + fVar13 * fVar19;
        fVar16 = in_xf2 * fVar14 + in_xf6 * fVar15 + (float)in_xd10 * 0.0 + (float)in_xd14 * fVar19;
        fVar14 = in_xf3 * fVar14 + in_xf7 * fVar15 + fVar20 * 0.0 + fVar24 * fVar19;
        fVar14 = 0.0;
        fVar16 = 0.0;
        pfVar3 = (float *)0x8c4c0dc0;
        fVar15 = 0.0;
        uVar6 = g_8c4c0db0;
        do {
            bVar25 = (uVar6 & 1) != 0;
            uVar6 = uVar6 >> 1 | (u32)bVar25 << 0x1f;
            pfVar4 = pfVar3;
            while (true) {
                while (true) {
                    while (true) {
                        bVar26 = (uVar6 & 1) != 0;
                        uVar6 = uVar6 >> 1;
                        uVar7 = uVar6 | (u32)bVar26 << 0x1f;
                        if (bVar25)
                            break;
                        bVar26 = (uVar6 & 1) != 0;
                        if (bVar26)
                            goto LAB_8c215320;
                        bVar25 = (uVar6 & 2) != 0;
                        uVar6 = (uVar7 >> 1 | (u32)bVar26 << 0x1f) >> 1 | (u32)bVar25 << 0x1f;
                        pfVar4 = pfVar4 + 8;
                    }
                    fVar19 = (float)((u64)lVar18 >> 0x20);
                    if (bVar26)
                        break;
                    lVar18 = (u64)(u32)fVar19 << 0x20;
                    fVar19 = fVar21 * pfVar4[1] + fVar22 * *pfVar4 + (float)in_dr6 * 0.0 + fVar19 * pfVar4[2];
                    in_dr6 = 0;
                    bVar25 = (uVar6 & 1) != 0;
                    uVar7 = uVar7 >> 1 | (u32)bVar25 << 0x1f;
                    if ((float)lVar18 < 0.0) {
                        pfVar3 = pfVar4 + 6;
                        fVar19 = -(float)lVar18;
                        pfVar5 = pfVar4 + 7;
                        fVar14 = fVar19 * pfVar4[5] + fVar14;
                        in_dr6 = 0;
                        pfVar4 = pfVar4 + 8;
                        fVar16 = fVar19 * *pfVar3 + fVar16;
                        fVar15 = fVar19 * *pfVar5 + fVar15;
                        if (bVar25)
                            goto LAB_8c215320;
                        bVar25 = (uVar6 & 2) != 0;
                        uVar6 = uVar7 >> 1 | (u32)bVar25 << 0x1f;
                    } else {
                        if (bVar25)
                            goto LAB_8c215320;
                        bVar25 = (uVar6 & 2) != 0;
                        uVar6 = uVar7 >> 1 | (u32)bVar25 << 0x1f;
                        pfVar4 = pfVar4 + 8;
                    }
                }
                fVar20 = *pfVar4 - fVar2;
                fVar17 = pfVar4[1] - fVar1;
                fVar13 = pfVar4[2] - fVar23;
                in_dr6 = 0;
                lVar18 = (u64)(u32)fVar19 << 0x20;
                fVar19 = fVar21 * fVar17 + fVar22 * fVar20 + 0.0 + fVar19 * fVar13;
                fVar19 = fVar17 * fVar17 + fVar20 * fVar20 + 0.0 + fVar13 * fVar13;
                fVar17 = (float)in_dr6;
                fVar19 = 1.0 / SQRT(fVar17);
                if ((u8)((0.0 < (float)lVar18) << 1 | fVar17 < pfVar4[3]) == 3)
                    break;
                bVar26 = (uVar6 & 1) != 0;
                pfVar4 = pfVar4 + 8;
                if (bVar26)
                    goto LAB_8c215320;
                bVar25 = (uVar6 & 2) != 0;
                uVar6 = (uVar7 >> 1 | (u32)bVar26 << 0x1f) >> 1 | (u32)bVar25 << 0x1f;
            }
            fVar20 = (float)lVar18 * fVar19;
            if (pfVar4[4] < fVar17) {
                fVar20 = fVar20 * pfVar4[4] * fVar19 * fVar19;
            }
            lVar18 = CONCAT44((int)((u64)lVar18 >> 0x20), fVar20);
            bVar25 = (uVar6 & 1) != 0;
            uVar6 = uVar7 >> 1 | (u32)bVar25 << 0x1f;
            fVar14 = fVar20 * pfVar4[5] + fVar14;
            in_dr6 = CONCAT44(pfVar4[7], fVar17);
            pfVar3 = pfVar4 + 8;
            fVar16 = fVar20 * pfVar4[6] + fVar16;
            fVar15 = fVar20 * pfVar4[7] + fVar15;
        } while (!bVar25);
    LAB_8c215320:
        fVar21 = 1.0 / fVar23;
        fVar19 = (float)a0[4];
        fVar22 = (float)a0[5];
        fVar20 = (float)a0[6];
        iVar12 = iVar12 + (u32)(fVar23 < 1.0);
        fVar17 = (float)a0[7];
        pfVar11[7] = fVar15;
        pfVar11[6] = fVar16;
        pfVar11[5] = fVar14;
        pfVar11[4] = 1.0;
        pfVar11[3] = fVar21;
        pfVar11[2] = fVar21 * fVar22 * fVar1 + fVar17;
        pfVar11[1] = fVar21 * fVar19 * fVar2 + fVar20;
        iVar8 = iVar8 + -1;
        *pfVar11 = fVar23;
        CacheBlockInvalidate(iVar10);
        iVar10 = iVar10 + 0x20;
        pfVar11 = pfVar11 + 8;
        if (iVar8 == 0) {
            return iVar12;
        }
    } while (true);
}

/*
 * gfxlib_fill_loop_215374  0x8c215374
 * area name: in the gfxlib library code range; behaviour name: a loop that writes memory
 * called by: gfxlib_calls_fill_loop_218c82
 */
int gfxlib_fill_loop_215374(int *a0, u32 unused_a1, u32 unused_a2, u32 a3) {
    float fVar1;
    int iVar2;
    float *pfVar3;
    float *pfVar4;
    u32 uVar5;
    u32 uVar6;
    int iVar7;
    float *pfVar8;
    int iVar9;
    float *pfVar10;
    int iVar11;
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
    float in_xf0;
    float in_xf1;
    float in_xf3;
    u64 in_xd4;
    u64 in_xd6;
    u64 in_xd8;
    float in_xf11;
    u64 in_xd12;
    u64 in_xd14;
    bool bVar24;
    bool bVar25;

    iVar7 = *a0;
    pfVar8 = (float *)a0[1];
    iVar9 = a0[2];
    pfVar10 = (float *)a0[3];
    iVar11 = 0;
    do {
        fVar22 = *pfVar8;
        fVar21 = pfVar8[1];
        fVar23 = pfVar8[2];
        fVar1 = in_xf3 * fVar21 + (float)((u64)in_xd6 >> 0x20) * fVar22 + in_xf11 * 1.0 +
                (float)((u64)in_xd14 >> 0x20) * fVar23;
        fVar13 = 0.0;
        iVar2 = 0x8c4c0dc0;
        fVar15 = 0.0;
        fVar16 = 0.0;
        uVar5 = g_8c4c0db0;
        do {
            bVar24 = (uVar5 & 1) != 0;
            uVar5 = uVar5 >> 1 | (u32)bVar24 << 0x1f;
            while (true) {
                while (true) {
                    while (true) {
                        bVar25 = (uVar5 & 1) != 0;
                        uVar5 = uVar5 >> 1;
                        uVar6 = uVar5 | (u32)bVar25 << 0x1f;
                        if (bVar24)
                            break;
                        bVar25 = (uVar5 & 1) != 0;
                        iVar2 = iVar2 + 0x20;
                        if (bVar25)
                            goto LAB_8c21544c;
                        bVar24 = (uVar5 & 2) != 0;
                        uVar5 = (uVar6 >> 1 | (u32)bVar25 << 0x1f) >> 1 | (u32)bVar24 << 0x1f;
                    }
                    if (bVar25)
                        break;
                    iVar2 = iVar2 + 0x20;
                    bVar25 = (uVar5 & 1) != 0;
                    if (bVar25)
                        goto LAB_8c21544c;
                    bVar24 = (uVar5 & 2) != 0;
                    uVar5 = (uVar6 >> 1 | (u32)bVar25 << 0x1f) >> 1 | (u32)bVar24 << 0x1f;
                }
                if (0.0 < *(float *)(iVar2 + 0xc) == true)
                    break;
                bVar25 = (uVar5 & 1) != 0;
                iVar2 = iVar2 + 0x20;
                if (bVar25)
                    goto LAB_8c21544c;
                bVar24 = (uVar5 & 2) != 0;
                uVar5 = (uVar6 >> 1 | (u32)bVar25 << 0x1f) >> 1 | (u32)bVar24 << 0x1f;
            }
            fVar12 = NAN;
            pfVar3 = (float *)(iVar2 + 0x18);
            if (*(float *)(iVar2 + 0x10) < 0.0) {
                fVar12 = *(float *)(iVar2 + 0x10) * NAN * INFINITY;
            }
            bVar24 = (uVar5 & 1) != 0;
            uVar5 = uVar6 >> 1 | (u32)bVar24 << 0x1f;
            pfVar4 = (float *)(iVar2 + 0x1c);
            fVar13 = fVar12 * *(float *)(iVar2 + 0x14) + fVar13;
            iVar2 = iVar2 + 0x20;
            fVar16 = fVar12 * *pfVar3 + fVar16;
            fVar15 = fVar12 * *pfVar4 + fVar15;
        } while (!bVar24);
    LAB_8c21544c:
        fVar12 = pfVar8[6];
        fVar14 = 1.0 / fVar1;
        fVar18 = (float)a0[4];
        fVar17 = (float)a0[5];
        fVar20 = (float)a0[6];
        fVar19 = (float)a0[7];
        pfVar10[7] = fVar15 * (float)((u32)fVar12 & 0xff) * 0.0078125;
        pfVar10[6] = fVar16 * (float)((u32)fVar12 >> 8 & 0xff) * 0.0078125;
        pfVar10[5] = fVar13 * (float)((u32)fVar12 >> 0x10 & 0xff) * 0.0078125;
        pfVar10[4] = (float)((u32)fVar12 >> 0x18) * 0.0078125;
        pfVar10[3] = fVar14;
        pfVar10[2] = fVar14 * fVar17 *
                         (in_xf0 * fVar21 + (float)in_xd4 * fVar22 + (float)in_xd8 * 1.0 + (float)in_xd12 * fVar23) +
                     fVar19;
        pfVar10[1] = fVar14 * fVar18 *
                         (in_xf1 * fVar21 + (float)((u64)in_xd4 >> 0x20) * fVar22 + (float)((u64)in_xd8 >> 0x20) * 1.0 +
                          (float)((u64)in_xd12 >> 0x20) * fVar23) +
                     fVar20;
        pfVar8 = pfVar8 + 7;
        iVar7 = iVar7 + -1;
        *pfVar10 = fVar1;
        iVar11 = iVar11 + (u32)(fVar1 < 1.0);
        CacheBlockInvalidate(iVar9);
        iVar9 = iVar9 + 0x20;
        if (iVar7 == 0) {
            return iVar11;
        }
        pfVar10 = pfVar10 + 8;
    } while (true);
}

/*
 * gfxlib_fill_loop_2154dc  0x8c2154dc
 * area name: in the gfxlib library code range; behaviour name: a loop that writes memory
 * called by: gfxlib_calls_fill_loop_218c82
 */
int gfxlib_fill_loop_2154dc(int *a0, u32 unused_a1, u32 unused_a2, u32 a3) {
    double *pdVar1;
    u32 uVar2;
    u32 uVar3;
    int iVar4;
    double *pdVar5;
    double *pdVar6;
    int iVar7;
    double *pdVar8;
    u32 unaff_r8;
    int iVar9;
    u32 unaff_r9;
    double *pdVar10;
    u32 unaff_r10;
    u32 unaff_r11;
    u8 *puVar11;
    double dVar12;
    double dVar13;
    double dVar14;
    double in_dr6;
    float fVar15;
    float fVar16;
    float fVar17;
    double dVar18;
    float fVar19;
    float fVar20;
    double dVar21;
    float fVar22;
    float fVar23;
    float fVar24;
    u32 uVar25;
    float fVar26;
    double dVar27;
    float fVar29;
    double dVar28;
    float in_xf0;
    float in_xf1;
    float in_xf2;
    float in_xf3;
    double in_xd4;
    double in_xd6;
    double in_xd8;
    double dVar30;
    double in_xd10;
    double in_xd12;
    double in_xd14;
    bool bVar31;
    bool bVar32;
    u8 auStack_20[16];
    u8 auStack_10[16];

    puVar11 = auStack_10;

    *(u32 *)(puVar11 + -4) = unaff_r11;
    *(u32 *)(puVar11 + -8) = unaff_r10;
    *(u32 *)(puVar11 + -0xc) = unaff_r9;
    *(u32 *)(puVar11 + -0x10) = unaff_r8;
    iVar4 = *a0;
    pdVar6 = (double *)a0[1];
    iVar7 = a0[2];
    pdVar8 = (double *)a0[3];
    pdVar5 = (double *)(a0 + 4);
    iVar9 = 0;
    do {

        dVar27 = (double)CONCAT44(*(u32 *)pdVar6, *(u32 *)((int)pdVar6 + 4));
        fVar29 = *(float *)(pdVar6 + 1);
        pdVar6 = (double *)((int)pdVar6 + 0xc);

        dVar28 = (double)CONCAT44(fVar29, 0x3f800000);
        fVar19 = (float)((u64)in_xd4 >> 0x20);
        fVar20 = (float)((u64)in_xd6 >> 0x20);
        fVar16 = (float)((u64)in_xd10 >> 0x20);
        fVar23 = (float)((u64)in_xd12 >> 0x20);
        fVar24 = (float)((u64)in_xd14 >> 0x20);

        fVar17 = SUB84(dVar27, 0);
        fVar22 = (float)((u64)dVar27 >> 0x20);
        fVar26 = in_xf0 * fVar17 + SUB84(in_xd4, 0) * fVar22 + SUB84(in_xd8, 0) * 1.0 + SUB84(in_xd12, 0) * fVar29;
        fVar26 = in_xf1 * fVar17 + fVar19 * fVar22 + (float)((u64)in_xd8 >> 0x20) * 1.0 + fVar23 * fVar29;
        fVar26 = in_xf2 * fVar17 + SUB84(in_xd6, 0) * fVar22 + SUB84(in_xd10, 0) * 1.0 + SUB84(in_xd14, 0) * fVar29;
        fVar29 = in_xf3 * fVar17 + fVar20 * fVar22 + fVar16 * 1.0 + fVar24 * fVar29;

        dVar18 = (double)CONCAT44(*(u32 *)pdVar6, *(u32 *)((int)pdVar6 + 4));
        dVar21 = (double)((u64) * (u32 *)(pdVar6 + 1) << 0x20);
        pdVar6 = (double *)((int)pdVar6 + 0xc);
        dVar30 = in_xd8;

        dVar21 = (double)((u64)dVar21 & 0xffffffff00000000);

        fVar29 = SUB84(dVar18, 0);
        fVar26 = (float)((u64)dVar18 >> 0x20);
        fVar22 = (float)((u64)dVar21 >> 0x20);
        fVar17 = in_xf0 * fVar29 + SUB84(in_xd4, 0) * fVar26 + SUB84(dVar30, 0) * 0.0 + SUB84(in_xd12, 0) * fVar22;
        fVar19 = in_xf1 * fVar29 + fVar19 * fVar26 + (float)((u64)dVar30 >> 0x20) * 0.0 + fVar23 * fVar22;
        fVar19 = in_xf2 * fVar29 + SUB84(in_xd6, 0) * fVar26 + SUB84(in_xd10, 0) * 0.0 + SUB84(in_xd14, 0) * fVar22;
        fVar29 = in_xf3 * fVar29 + fVar20 * fVar26 + fVar16 * 0.0 + fVar24 * fVar22;

        dVar12 = 0.0;
        uVar2 = g_8c4c0db0;
        pdVar10 = (double *)(0x8c4c0db0 + 4);
        dVar13 = 0.0;
        do {
            bVar31 = (uVar2 & 1) != 0;
            uVar2 = uVar2 >> 1 | (u32)bVar31 << 0x1f;
            while (true) {
                while (true) {
                    while (true) {
                        bVar32 = (uVar2 & 1) != 0;
                        uVar2 = uVar2 >> 1;
                        uVar3 = uVar2 | (u32)bVar32 << 0x1f;
                        fVar29 = SUB84(dVar18, 0);
                        fVar19 = (float)((u64)dVar27 >> 0x20);
                        if (bVar31)
                            break;
                        bVar32 = (uVar2 & 1) != 0;
                        pdVar10 = pdVar10 + 4;
                        if (bVar32)
                            goto LAB_8c2155b4;
                        bVar31 = (uVar2 & 2) != 0;
                        uVar2 = (uVar3 >> 1 | (u32)bVar32 << 0x1f) >> 1 | (u32)bVar31 << 0x1f;
                    }

                    dVar14 = (double)CONCAT44(*(u32 *)pdVar10, *(u32 *)((int)pdVar10 + 4));
                    pdVar1 = pdVar10 + 1;

                    fVar17 = (float)((u64)dVar21 >> 0x20);
                    fVar16 = SUB84(dVar14, 0);
                    fVar23 = (float)((u64)dVar14 >> 0x20);
                    fVar24 = (float)((u64)dVar18 >> 0x20);
                    fVar20 = (float)((u64)dVar13 >> 0x20);
                    uVar25 = SUB84(dVar12, 0);
                    if (bVar32)
                        break;

                    dVar14 = (double)CONCAT44(*(u32 *)pdVar1, SUB84(in_dr6, 0));
                    pdVar1 = (double *)((int)pdVar1 + 4);

                    dVar21 = (double)((u64)(u32)fVar17 << 0x20);

                    fVar23 = fVar29 * fVar16 + fVar24 * fVar23 + SUB84(dVar14, 0) * 0.0 +
                             fVar17 * (float)((u64)dVar14 >> 0x20);

                    in_dr6 = (double)((u64)dVar14 & 0xffffffff00000000);

                    bVar31 = SUB84(dVar21, 0) < 0.0;

                    pdVar10 = (double *)((int)pdVar1 + 0x14);
                    bVar32 = (uVar2 & 1) != 0;
                    uVar3 = uVar3 >> 1 | (u32)bVar32 << 0x1f;
                    if (bVar31) {

                        dVar14 = (double)CONCAT44(*(u32 *)(pdVar1 + 1), fVar16);
                        pdVar1 = (double *)((int)pdVar1 + 0xc);
                        dVar12 = (double)CONCAT44(SUB84(dVar21, 0), uVar25);

                        dVar12 = (double)CONCAT44(-(float)((u64)dVar12 >> 0x20), SUB84(dVar12, 0));

                        dVar14 = (double)CONCAT44((int)((u64)dVar14 >> 0x20), *(u32 *)pdVar1);
                        pdVar1 = (double *)((int)pdVar1 + 4);

                        fVar16 = (float)((u64)dVar12 >> 0x20);
                        dVar12 = (double)CONCAT44(fVar16, fVar16 * (float)((u64)dVar14 >> 0x20) + SUB84(dVar12, 0));

                        in_dr6 = (double)((u64) * (u32 *)pdVar1 << 0x20);
                        pdVar10 = (double *)((int)pdVar1 + 4);

                        fVar16 = (float)((u64)dVar12 >> 0x20);

                        dVar13 = (double)CONCAT44(fVar16 * SUB84(dVar14, 0) + fVar20,
                                                  fVar16 * (float)((u64)in_dr6 >> 0x20) + SUB84(dVar13, 0));

                        if (bVar32)
                            goto LAB_8c2155b4;
                        bVar31 = (uVar2 & 2) != 0;
                        uVar2 = uVar3 >> 1 | (u32)bVar31 << 0x1f;
                    } else {
                        if (bVar32)
                            goto LAB_8c2155b4;
                        bVar31 = (uVar2 & 2) != 0;
                        uVar2 = uVar3 >> 1 | (u32)bVar31 << 0x1f;
                    }
                }

                dVar14 = (double)CONCAT44(fVar23 - fVar19, fVar16);

                dVar21 = (double)CONCAT44(*(u32 *)pdVar1, SUB84(in_dr6, 0));
                pdVar1 = (double *)((int)pdVar1 + 4);

                dVar14 = (double)CONCAT44((int)((u64)dVar14 >> 0x20), SUB84(dVar14, 0) - SUB84(dVar27, 0));

                fVar16 = (float)((u64)dVar28 >> 0x20);

                in_dr6 = (double)((u64)(u32)((float)((u64)dVar21 >> 0x20) - fVar16) << 0x20);

                dVar21 = (double)((u64)(u32)fVar17 << 0x20);
                dVar12 = (double)((u64)dVar12 & 0xffffffff);
                fVar23 = SUB84(dVar14, 0);
                fVar26 = (float)((u64)dVar14 >> 0x20);
                fVar22 = SUB84(in_dr6, 0);
                fVar15 = (float)((u64)in_dr6 >> 0x20);

                fVar24 = fVar29 * fVar23 + fVar24 * fVar26 + fVar22 * 0.0 + fVar17 * fVar15;

                dVar28 = (double)CONCAT44(fVar16, *(u32 *)pdVar1);
                pdVar1 = (double *)((int)pdVar1 + 4);

                fVar16 = fVar23 * fVar23 + fVar26 * fVar26 + fVar22 * fVar22 + fVar15 * fVar15;
                bVar31 = 0.0 < SUB84(dVar21, 0);

                fVar16 = SUB84(in_dr6, 0);
                dVar14 = in_xd6;

                dVar14 = (double)CONCAT44(fVar16, fVar23);

                bVar32 = fVar16 < SUB84(dVar28, 0);
                dVar14 = (double)CONCAT44(1.0 / SQRT((float)((u64)dVar14 >> 0x20)), SUB84(dVar14, 0));

                dVar28 = (double)CONCAT44((int)((u64)dVar28 >> 0x20), *(u32 *)pdVar1);
                pdVar1 = (double *)((int)pdVar1 + 4);

                if ((u8)(bVar31 << 1 | bVar32) == 3)
                    break;
                bVar32 = (uVar2 & 1) != 0;
                pdVar10 = (double *)((int)pdVar1 + 0xc);
                if (bVar32)
                    goto LAB_8c2155b4;
                bVar31 = (uVar2 & 2) != 0;
                uVar2 = (uVar3 >> 1 | (u32)bVar32 << 0x1f) >> 1 | (u32)bVar31 << 0x1f;
            }
            fVar23 = (float)((u64)dVar14 >> 0x20);

            dVar21 = (double)CONCAT44((int)((u64)dVar21 >> 0x20), SUB84(dVar21, 0) * fVar23);
            bVar31 = SUB84(dVar28, 0) < fVar16;
            dVar14 = (double)CONCAT44(fVar23 * fVar23, SUB84(dVar14, 0));

            dVar14 = (double)CONCAT44((int)((u64)dVar14 >> 0x20), *(u32 *)pdVar1);
            pdVar1 = (double *)((int)pdVar1 + 4);

            if (bVar31) {

                dVar21 = (double)CONCAT44((int)((u64)dVar21 >> 0x20),
                                          SUB84(dVar21, 0) * SUB84(dVar28, 0) * (float)((u64)dVar14 >> 0x20));
            }
            dVar12 = in_xd10;

            dVar12 = (double)CONCAT44(SUB84(dVar21, 0), uVar25);

            bVar31 = (uVar2 & 1) != 0;
            uVar2 = uVar3 >> 1 | (u32)bVar31 << 0x1f;

            dVar14 = (double)CONCAT44(*(u32 *)pdVar1, SUB84(dVar14, 0));
            pdVar1 = (double *)((int)pdVar1 + 4);

            fVar23 = (float)((u64)dVar12 >> 0x20);
            dVar12 = (double)CONCAT44(fVar23, fVar23 * SUB84(dVar14, 0) + SUB84(dVar12, 0));

            in_dr6 = (double)CONCAT44(*(u32 *)pdVar1, fVar16);
            pdVar10 = (double *)((int)pdVar1 + 4);

            fVar16 = (float)((u64)dVar12 >> 0x20);

            dVar13 = (double)CONCAT44(fVar16 * (float)((u64)dVar14 >> 0x20) + fVar20,
                                      fVar16 * (float)((u64)in_dr6 >> 0x20) + SUB84(dVar13, 0));

        } while (!bVar31);
    LAB_8c2155b4:
        fVar20 = SUB84(dVar21, 0);

        dVar28 = (double)CONCAT44((int)((u64)dVar28 >> 0x20), g_8c21566c);
        dVar21 = (double)CONCAT44(*(u32 *)0x8c4aa544, fVar29);
        pdVar10 = (double *)((int)0x8c4aa544 + 4);

        fVar29 = (float)((u64)dVar21 >> 0x20);
        fVar16 = (float)((u64)dVar28 >> 0x20);

        bVar31 = fVar29 < fVar16;

        dVar21 = (double)CONCAT44(fVar29, *(u32 *)pdVar10);
        pdVar10 = (double *)((int)pdVar10 + 4);

        in_xd8 = dVar30;
        if (bVar31) {

            bVar31 = fVar16 < SUB84(dVar21, 0);

            fVar20 = *(float *)pdVar10;

            if (bVar31) {
                in_xd8 = dVar28;

                dVar21 = (double)CONCAT44((int)((u64)dVar21 >> 0x20), fVar16);
                in_xd8 = dVar30;

                fVar29 = (float)((u64)dVar21 >> 0x20);
                dVar21 = (double)CONCAT44(fVar29, SUB84(dVar21, 0) - fVar29);

                fVar29 = 1.0 - SUB84(dVar21, 0) * fVar20;

            } else {
                fVar29 = 0.0;
            }
        } else {
            fVar29 = 1.0;
        }
        uVar2 = *(u32 *)pdVar6;
        dVar30 = (double)CONCAT44(0x3f800000, SUB84(dVar12, 0));

        bVar31 = fVar16 < 1.0;
        dVar30 = (double)CONCAT44(1.0 / fVar16, SUB84(dVar12, 0));

        dVar21 = (double)CONCAT44(*(u32 *)pdVar5, *(u32 *)((int)pdVar5 + 4));
        pdVar5 = pdVar5 + 1;

        in_dr6 = (double)CONCAT44(*(u32 *)pdVar5, SUB84(in_dr6, 0));
        pdVar5 = (double *)((int)pdVar5 + 4);

        fVar20 = SUB84(dVar28, 0);

        dVar18 = (double)CONCAT44(fVar29, (float)(uVar2 & 0xff) * fVar20);

        dVar13 = (double)CONCAT44((int)((u64)dVar13 >> 0x20), SUB84(dVar13, 0) * SUB84(dVar18, 0));

        in_dr6 = (double)CONCAT44((int)((u64)in_dr6 >> 0x20), *(u32 *)pdVar5);
        pdVar5 = (double *)((int)pdVar5 + 4);

        uVar25 = (u32)((u64)dVar18 >> 0x20);
        fVar29 = (float)(uVar2 >> 8 & 0xff);

        fVar29 = fVar29 * fVar20;
        dVar18 = (double)CONCAT44(uVar25, fVar29);
        dVar13 = (double)CONCAT44((float)((u64)dVar13 >> 0x20) * fVar29, SUB84(dVar13, 0));

        uVar25 = (u32)((u64)dVar18 >> 0x20);
        fVar29 = (float)(uVar2 >> 0x10 & 0xff);
        pdVar5 = pdVar5 + -2;

        dVar18 = (double)CONCAT44(uVar25, fVar29 * fVar20);

        pdVar8 = (double *)((int)pdVar8 + 0x1c);
        *(int *)pdVar8 = SUB84(dVar13, 0);

        dVar30 = (double)CONCAT44((int)((u64)dVar30 >> 0x20), SUB84(dVar30, 0) * SUB84(dVar18, 0));
        dVar21 = (double)CONCAT44((int)((u64)dVar21 >> 0x20), SUB84(dVar21, 0) * SUB84(dVar27, 0));

        fVar29 = (float)((u64)dVar18 >> 0x20);

        pdVar8 = (double *)((int)pdVar8 + -4);
        *(int *)pdVar8 = (int)((u64)dVar13 >> 0x20);

        dVar21 = (double)CONCAT44((float)((u64)dVar21 >> 0x20) * fVar19, SUB84(dVar21, 0));

        pdVar8 = (double *)((int)pdVar8 + -4);
        *(int *)pdVar8 = SUB84(dVar30, 0);

        fVar29 = (float)(uVar2 >> 0x18) * fVar20 * fVar29;

        pdVar8 = (double *)((int)pdVar8 + -4);
        *(float *)pdVar8 = fVar29;

        fVar29 = (float)((u64)dVar30 >> 0x20);

        in_dr6 = (double)CONCAT44((int)((u64)in_dr6 >> 0x20), fVar29 * SUB84(dVar21, 0) + SUB84(in_dr6, 0));

        pdVar8 = (double *)((int)pdVar8 + -4);
        *(float *)pdVar8 = fVar29;

        in_dr6 =
            (double)CONCAT44(fVar29 * (float)((u64)dVar21 >> 0x20) + (float)((u64)in_dr6 >> 0x20), SUB84(in_dr6, 0));

        *(int *)((int)pdVar8 + -4) = SUB84(in_dr6, 0);
        pdVar8 = pdVar8 + -1;
        *(int *)pdVar8 = (int)((u64)in_dr6 >> 0x20);

        pdVar6 = (double *)((int)pdVar6 + 4);
        iVar4 = iVar4 + -1;

        pdVar8 = (double *)((int)pdVar8 + -4);
        *(float *)pdVar8 = fVar16;

        iVar9 = iVar9 + (u32)bVar31;
        CacheBlockInvalidate(iVar7);
        iVar7 = iVar7 + 0x20;
        if (iVar4 == 0) {
            return iVar9;
        }
        pdVar8 = pdVar8 + 4;
    } while (true);
}

/*
 * gfxlib_fill_loop_215674  0x8c215674
 * area name: in the gfxlib library code range; behaviour name: a loop that writes memory
 * called by: gfxlib_calls_fill_loop_218c82
 * decompiler: Instruction at (ram,0x8c2157a8) overlaps instruction at (ram,0x8c2157a6)
 */
int gfxlib_fill_loop_215674(int *a0, u32 unused_a1, u32 unused_a2, u32 a3) {
    double *pdVar1;
    u32 uVar2;
    u32 uVar3;
    int iVar4;
    double *pdVar5;
    double *pdVar6;
    int iVar7;
    double *pdVar8;
    u32 unaff_r8;
    int iVar9;
    u32 unaff_r9;
    double *pdVar10;
    u8 *puVar11;
    u32 uVar12;
    double dVar13;
    float fVar14;
    float fVar15;
    float fVar16;
    double in_dr6;
    float fVar17;
    float fVar18;
    double dVar19;
    float fVar21;
    double dVar20;
    double dVar22;
    float fVar23;
    float fVar24;
    float fVar25;
    double dVar26;
    float fVar28;
    double dVar27;
    float in_xf0;
    float in_xf1;
    float in_xf2;
    float in_xf3;
    double in_xd4;
    float in_xf6;
    float in_xf7;
    double in_xd8;
    double in_xd10;
    double in_xd12;
    float fVar29;
    double in_xd14;
    bool bVar30;
    bool bVar31;
    u8 auStack_20[16];
    u8 auStack_10[16];

    puVar11 = auStack_10;

    *(u32 *)(puVar11 + -4) = unaff_r8;
    *(u32 *)(puVar11 + -8) = unaff_r9;
    iVar4 = *a0;
    pdVar6 = (double *)a0[1];
    iVar7 = a0[2];
    pdVar8 = (double *)a0[3];
    pdVar5 = (double *)(a0 + 4);
    iVar9 = 0;
    do {

        dVar26 = (double)CONCAT44(*(u32 *)pdVar6, *(u32 *)((int)pdVar6 + 4));
        fVar28 = *(float *)(pdVar6 + 1);
        pdVar6 = (double *)((int)pdVar6 + 0xc);

        dVar27 = (double)CONCAT44(fVar28, 0x3f800000);
        fVar14 = (float)((u64)in_xd4 >> 0x20);
        fVar21 = (float)((u64)in_xd10 >> 0x20);
        fVar29 = (float)((u64)in_xd12 >> 0x20);
        fVar18 = (float)((u64)in_xd14 >> 0x20);

        fVar24 = SUB84(dVar26, 0);
        fVar23 = (float)((u64)dVar26 >> 0x20);
        fVar25 = in_xf0 * fVar24 + SUB84(in_xd4, 0) * fVar23 + SUB84(in_xd8, 0) * 1.0 + SUB84(in_xd12, 0) * fVar28;
        fVar25 = in_xf1 * fVar24 + fVar14 * fVar23 + (float)((u64)in_xd8 >> 0x20) * 1.0 + fVar29 * fVar28;
        fVar25 = in_xf2 * fVar24 + in_xf6 * fVar23 + SUB84(in_xd10, 0) * 1.0 + SUB84(in_xd14, 0) * fVar28;
        fVar28 = in_xf3 * fVar24 + in_xf7 * fVar23 + fVar21 * 1.0 + fVar18 * fVar28;

        dVar19 = (double)CONCAT44(*(u32 *)pdVar6, *(u32 *)((int)pdVar6 + 4));
        dVar22 = (double)((u64) * (u32 *)(pdVar6 + 1) << 0x20);
        pdVar6 = (double *)((int)pdVar6 + 0xc);

        dVar22 = (double)((u64)dVar22 & 0xffffffff00000000);

        fVar24 = SUB84(dVar19, 0);
        fVar25 = (float)((u64)dVar19 >> 0x20);
        fVar23 = (float)((u64)dVar22 >> 0x20);
        fVar28 = in_xf0 * fVar24 + SUB84(in_xd4, 0) * fVar25 + SUB84(in_xd8, 0) * 0.0 + SUB84(in_xd12, 0) * fVar23;
        fVar28 = in_xf1 * fVar24 + fVar14 * fVar25 + (float)((u64)in_xd8 >> 0x20) * 0.0 + fVar29 * fVar23;
        fVar28 = in_xf2 * fVar24 + in_xf6 * fVar25 + SUB84(in_xd10, 0) * 0.0 + SUB84(in_xd14, 0) * fVar23;
        fVar28 = in_xf3 * fVar24 + in_xf7 * fVar25 + fVar21 * 0.0 + fVar18 * fVar23;

        dVar20 = 0.0;
        uVar2 = g_8c4c0db0;
        fVar28 = 0.0;
        pdVar10 = (double *)(0x8c4c0db0 + 4);
        fVar14 = 0.0;
        do {
            bVar30 = (uVar2 & 1) != 0;
            uVar2 = uVar2 >> 1 | (u32)bVar30 << 0x1f;
            while (true) {
                while (true) {
                    while (true) {
                        bVar31 = (uVar2 & 1) != 0;
                        uVar2 = uVar2 >> 1;
                        uVar3 = uVar2 | (u32)bVar31 << 0x1f;
                        fVar21 = SUB84(dVar19, 0);
                        fVar29 = (float)((u64)dVar26 >> 0x20);
                        if (bVar30)
                            break;
                        bVar31 = (uVar2 & 1) != 0;
                        pdVar10 = pdVar10 + 4;
                        if (bVar31)
                            goto LAB_8c215744;
                        bVar30 = (uVar2 & 2) != 0;
                        uVar2 = (uVar3 >> 1 | (u32)bVar31 << 0x1f) >> 1 | (u32)bVar30 << 0x1f;
                    }

                    dVar13 = (double)CONCAT44(*(u32 *)pdVar10, *(u32 *)((int)pdVar10 + 4));
                    pdVar1 = pdVar10 + 1;

                    fVar23 = (float)((u64)dVar22 >> 0x20);
                    fVar18 = SUB84(dVar13, 0);
                    fVar24 = (float)((u64)dVar13 >> 0x20);
                    fVar25 = (float)((u64)dVar19 >> 0x20);
                    uVar12 = SUB84(dVar20, 0);
                    if (bVar31)
                        break;

                    dVar13 = (double)CONCAT44(*(u32 *)pdVar1, SUB84(in_dr6, 0));
                    pdVar1 = (double *)((int)pdVar1 + 4);

                    dVar22 = (double)((u64)(u32)fVar23 << 0x20);

                    fVar24 = fVar21 * fVar18 + fVar25 * fVar24 + SUB84(dVar13, 0) * 0.0 +
                             fVar23 * (float)((u64)dVar13 >> 0x20);

                    in_dr6 = (double)((u64)dVar13 & 0xffffffff00000000);

                    bVar30 = SUB84(dVar22, 0) < 0.0;

                    pdVar10 = (double *)((int)pdVar1 + 0x14);
                    bVar31 = (uVar2 & 1) != 0;
                    uVar3 = uVar3 >> 1 | (u32)bVar31 << 0x1f;
                    if (bVar30) {

                        dVar13 = (double)CONCAT44(*(u32 *)(pdVar1 + 1), fVar18);
                        pdVar1 = (double *)((int)pdVar1 + 0xc);
                        dVar20 = (double)CONCAT44(SUB84(dVar22, 0), uVar12);

                        dVar20 = (double)CONCAT44(-(float)((u64)dVar20 >> 0x20), SUB84(dVar20, 0));

                        dVar13 = (double)CONCAT44((int)((u64)dVar13 >> 0x20), *(u32 *)pdVar1);
                        pdVar1 = (double *)((int)pdVar1 + 4);

                        fVar18 = (float)((u64)dVar20 >> 0x20);
                        dVar20 = (double)CONCAT44(fVar18, fVar18 * (float)((u64)dVar13 >> 0x20) + SUB84(dVar20, 0));

                        in_dr6 = (double)((u64) * (u32 *)pdVar1 << 0x20);
                        pdVar10 = (double *)((int)pdVar1 + 4);

                        fVar18 = (float)((u64)dVar20 >> 0x20);

                        fVar28 = fVar18 * SUB84(dVar13, 0) + fVar28;
                        fVar14 = fVar18 * (float)((u64)in_dr6 >> 0x20) + fVar14;

                        if (bVar31)
                            goto LAB_8c215744;
                        bVar30 = (uVar2 & 2) != 0;
                        uVar2 = uVar3 >> 1 | (u32)bVar30 << 0x1f;
                    } else {
                        if (bVar31)
                            goto LAB_8c215744;
                        bVar30 = (uVar2 & 2) != 0;
                        uVar2 = uVar3 >> 1 | (u32)bVar30 << 0x1f;
                    }
                }

                dVar13 = (double)CONCAT44(fVar24 - fVar29, fVar18);

                dVar22 = (double)CONCAT44(*(u32 *)pdVar1, SUB84(in_dr6, 0));
                pdVar1 = (double *)((int)pdVar1 + 4);

                dVar13 = (double)CONCAT44((int)((u64)dVar13 >> 0x20), SUB84(dVar13, 0) - SUB84(dVar26, 0));

                fVar18 = (float)((u64)dVar27 >> 0x20);

                in_dr6 = (double)((u64)(u32)((float)((u64)dVar22 >> 0x20) - fVar18) << 0x20);

                dVar22 = (double)((u64)(u32)fVar23 << 0x20);
                dVar20 = (double)((u64)dVar20 & 0xffffffff);
                fVar24 = SUB84(dVar13, 0);
                fVar15 = (float)((u64)dVar13 >> 0x20);
                fVar16 = SUB84(in_dr6, 0);
                fVar17 = (float)((u64)in_dr6 >> 0x20);

                fVar25 = fVar21 * fVar24 + fVar25 * fVar15 + fVar16 * 0.0 + fVar23 * fVar17;

                dVar27 = (double)CONCAT44(fVar18, *(u32 *)pdVar1);
                pdVar1 = (double *)((int)pdVar1 + 4);

                fVar18 = fVar24 * fVar24 + fVar15 * fVar15 + fVar16 * fVar16 + fVar17 * fVar17;
                bVar30 = 0.0 < SUB84(dVar22, 0);

                fVar18 = SUB84(in_dr6, 0);

                dVar13 = (double)CONCAT44(fVar18, fVar24);

                bVar31 = fVar18 < SUB84(dVar27, 0);
                dVar13 = (double)CONCAT44(1.0 / SQRT((float)((u64)dVar13 >> 0x20)), SUB84(dVar13, 0));

                dVar27 = (double)CONCAT44((int)((u64)dVar27 >> 0x20), *(u32 *)pdVar1);
                pdVar1 = (double *)((int)pdVar1 + 4);

                if ((u8)(bVar30 << 1 | bVar31) == 3)
                    break;
                bVar31 = (uVar2 & 1) != 0;
                pdVar10 = (double *)((int)pdVar1 + 0xc);
                if (bVar31)
                    goto LAB_8c215744;
                bVar30 = (uVar2 & 2) != 0;
                uVar2 = (uVar3 >> 1 | (u32)bVar31 << 0x1f) >> 1 | (u32)bVar30 << 0x1f;
            }
            fVar24 = (float)((u64)dVar13 >> 0x20);

            dVar22 = (double)CONCAT44((int)((u64)dVar22 >> 0x20), SUB84(dVar22, 0) * fVar24);
            bVar30 = SUB84(dVar27, 0) < fVar18;
            dVar13 = (double)CONCAT44(fVar24 * fVar24, SUB84(dVar13, 0));

            dVar13 = (double)CONCAT44((int)((u64)dVar13 >> 0x20), *(u32 *)pdVar1);
            pdVar1 = (double *)((int)pdVar1 + 4);

            if (bVar30) {

                dVar22 = (double)CONCAT44((int)((u64)dVar22 >> 0x20),
                                          SUB84(dVar22, 0) * SUB84(dVar27, 0) * (float)((u64)dVar13 >> 0x20));
            }
            dVar20 = in_xd10;

            dVar20 = (double)CONCAT44(SUB84(dVar22, 0), uVar12);

            bVar30 = (uVar2 & 1) != 0;
            uVar2 = uVar3 >> 1 | (u32)bVar30 << 0x1f;

            dVar13 = (double)CONCAT44(*(u32 *)pdVar1, SUB84(dVar13, 0));
            pdVar1 = (double *)((int)pdVar1 + 4);

            fVar24 = (float)((u64)dVar20 >> 0x20);
            dVar20 = (double)CONCAT44(fVar24, fVar24 * SUB84(dVar13, 0) + SUB84(dVar20, 0));

            in_dr6 = (double)CONCAT44(*(u32 *)pdVar1, fVar18);
            pdVar10 = (double *)((int)pdVar1 + 4);

            fVar18 = (float)((u64)dVar20 >> 0x20);

            fVar28 = fVar18 * (float)((u64)dVar13 >> 0x20) + fVar28;
            fVar14 = fVar18 * (float)((u64)in_dr6 >> 0x20) + fVar14;

        } while (!bVar30);
    LAB_8c215744:

        dVar19 = (double)CONCAT44(*(u32 *)0x8c4aa544, fVar21);
        pdVar10 = (double *)((int)0x8c4aa544 + 4);

        dVar13 = (double)CONCAT44(0x3f800000, SUB84(dVar20, 0));
        fVar21 = (float)((u64)dVar19 >> 0x20);
        fVar18 = (float)((u64)dVar27 >> 0x20);

        bVar30 = fVar21 < fVar18;

        dVar19 = (double)CONCAT44(fVar21, *(u32 *)pdVar10);
        pdVar10 = (double *)((int)pdVar10 + 4);

        if (bVar30) {

            bVar30 = fVar18 < SUB84(dVar19, 0);

            dVar22 = (double)CONCAT44((int)((u64)dVar22 >> 0x20), *(u32 *)pdVar10);

            if (bVar30) {

                dVar19 = (double)CONCAT44((int)((u64)dVar19 >> 0x20), fVar18);
                dVar27 = in_xd8;

                fVar21 = (float)((u64)dVar19 >> 0x20);
                dVar19 = (double)CONCAT44(fVar21, SUB84(dVar19, 0) - fVar21);

                dVar19 = (double)CONCAT44(fVar18, 1.0 - SUB84(dVar19, 0) * SUB84(dVar22, 0));

            } else {
                dVar19 = (double)((u64)(u32)fVar18 << 0x20);
                dVar27 = in_xd8;
            }
        } else {
            dVar19 = (double)CONCAT44(fVar18, 0x3f800000);
            dVar27 = in_xd8;
        }
        fVar21 = (float)((u64)dVar19 >> 0x20);

        bVar30 = fVar21 < 1.0;
        dVar13 = (double)CONCAT44(1.0 / fVar21, SUB84(dVar20, 0));

        dVar20 = (double)CONCAT44(*(u32 *)pdVar5, *(u32 *)((int)pdVar5 + 4));
        dVar22 = (double)CONCAT44(*(u32 *)(pdVar5 + 1), SUB84(dVar22, 0));
        pdVar5 = (double *)((int)pdVar5 + 0xc);
        in_xd8 = dVar27;

        dVar22 = (double)CONCAT44((int)((u64)dVar22 >> 0x20), *(u32 *)pdVar5);
        pdVar5 = (double *)((int)pdVar5 + 4);

        pdVar5 = pdVar5 + -2;

        pdVar8 = (double *)((int)pdVar8 + 0x1c);
        *(float *)pdVar8 = fVar14;

        dVar20 = (double)CONCAT44((int)((u64)dVar20 >> 0x20), SUB84(dVar20, 0) * SUB84(dVar26, 0));

        pdVar8 = (double *)((int)pdVar8 + -4);
        *(float *)pdVar8 = fVar28;

        dVar20 = (double)CONCAT44((float)((u64)dVar20 >> 0x20) * fVar29, SUB84(dVar20, 0));

        *(int *)((int)pdVar8 + -4) = SUB84(dVar13, 0);
        pdVar8 = pdVar8 + -1;
        *(int *)pdVar8 = SUB84(dVar19, 0);

        fVar28 = (float)((u64)dVar13 >> 0x20);

        dVar22 = (double)CONCAT44((int)((u64)dVar22 >> 0x20), fVar28 * SUB84(dVar20, 0) + SUB84(dVar22, 0));

        pdVar8 = (double *)((int)pdVar8 + -4);
        *(float *)pdVar8 = fVar28;

        dVar22 =
            (double)CONCAT44(fVar28 * (float)((u64)dVar20 >> 0x20) + (float)((u64)dVar22 >> 0x20), SUB84(dVar22, 0));

        *(int *)((int)pdVar8 + -4) = SUB84(dVar22, 0);
        pdVar8 = pdVar8 + -1;
        *(int *)pdVar8 = (int)((u64)dVar22 >> 0x20);

        iVar4 = iVar4 + -1;
        CacheBlockInvalidate(iVar7);
        iVar9 = iVar9 + (u32)bVar30;

        pdVar8 = (double *)((int)pdVar8 + -4);
        *(float *)pdVar8 = fVar21;

        iVar7 = iVar7 + 0x20;
        pdVar8 = pdVar8 + 4;
        if (iVar4 == 0) {
            return iVar9;
        }
    } while (true);
}

/*
 * gfxlib_fill_loop_2157c8  0x8c2157c8
 * area name: in the gfxlib library code range; behaviour name: a loop that writes memory
 * called by: gfxlib_calls_fill_loop_218c82
 */
int gfxlib_fill_loop_2157c8(int *a0, u32 a1, u32 unused_a2, u32 a3) {
    float *pfVar1;
    float *pfVar2;
    float *pfVar3;
    u32 uVar4;
    u32 uVar5;
    int iVar6;
    u32 uVar7;
    int iVar8;
    float *pfVar9;
    int iVar10;
    float *pfVar11;
    float fVar12;
    float fVar13;
    float fVar14;
    float fVar15;
    float fVar16;
    u64 in_dr6;
    float fVar17;
    float fVar18;
    float fVar19;
    float fVar21;
    s64 lVar20;
    float fVar22;
    float fVar23;
    float fVar24;
    u64 in_xd0;
    float in_xf3;
    u64 in_xd4;
    float in_xf7;
    u64 in_xd8;
    u64 in_xd10;
    u64 in_xd12;
    float fVar25;
    u64 in_xd14;
    float fVar26;
    bool bVar27;
    bool bVar28;

    iVar6 = *a0;
    pfVar9 = (float *)a0[1];
    iVar8 = a0[2];
    iVar10 = 0;
    uVar7 = a1 >> 8 & 0xff;
    do {
        fVar23 = *pfVar9;
        fVar22 = pfVar9[1];
        fVar24 = pfVar9[2];
        fVar14 = (float)((u64)in_xd0 >> 0x20);
        fVar13 = (float)((u64)in_xd4 >> 0x20);
        fVar16 = (float)((u64)in_xd10 >> 0x20);
        fVar25 = (float)((u64)in_xd12 >> 0x20);
        fVar26 = (float)((u64)in_xd14 >> 0x20);
        fVar12 = (float)((u64)in_xd8 >> 0x20);
        fVar17 = fVar14 * fVar22 + fVar13 * fVar23 + fVar12 * 1.0 + fVar25 * fVar24;
        fVar15 = in_xf3 * fVar22 + in_xf7 * fVar23 + fVar16 * 1.0 + fVar26 * fVar24;
        fVar19 = pfVar9[3];
        fVar18 = pfVar9[4];
        fVar21 = pfVar9[5];
        pfVar1 = pfVar9 + 6;
        pfVar9 = pfVar9 + 7;
        fVar14 = fVar14 * fVar18 + fVar13 * fVar19 + fVar12 * 0.0 + fVar25 * fVar21;
        fVar13 = in_xf3 * fVar18 + in_xf7 * fVar19 + fVar16 * 0.0 + fVar26 * fVar21;
        pfVar11 = (float *)(SUB42(*pfVar1, 0) * 0x20 + iVar8);
        fVar12 = (float)((u32)*pfVar1 >> 0x10) * 0.0039215684;
        if (uVar7 == 0) {
            *pfVar11 = 0.0;
            pfVar11[7] = fVar13 * fVar12;
            pfVar11[6] = fVar14 * fVar12;
            pfVar11[5] = fVar15 * fVar12;
            pfVar11[4] = fVar17 * fVar12;
        } else if (uVar7 == 1) {
            pfVar11[1] = fVar12 * fVar15 + pfVar11[1];
            *pfVar11 = fVar12 * fVar17 + *pfVar11;
            fVar17 = fVar12 * fVar13 + pfVar11[5];
            in_dr6 = CONCAT44(fVar17, (int)in_dr6);
            pfVar11[5] = fVar17;
            pfVar11[4] = fVar12 * fVar14 + pfVar11[4];
        } else {
            fVar16 = fVar12 * fVar17 + *pfVar11;
            fVar22 = fVar12 * ((float)in_xd0 * fVar22 + (float)in_xd4 * fVar23 + (float)in_xd8 * 1.0 +
                               (float)in_xd12 * fVar24) +
                     pfVar11[1];
            fVar23 = fVar12 * fVar15 + pfVar11[2];
            fVar24 = fVar12 * fVar14 + pfVar11[4];
            fVar18 = fVar12 * ((float)in_xd0 * fVar18 + (float)in_xd4 * fVar19 + (float)in_xd8 * 0.0 +
                               (float)in_xd12 * fVar21) +
                     pfVar11[5];
            lVar20 = (u64)(u32)(fVar12 * fVar13 + pfVar11[6]) << 0x20;
            fVar17 = 0.0;
            fVar15 = 0.0;
            pfVar1 = (float *)0x8c4c0dc0;
            fVar14 = 0.0;
            uVar4 = g_8c4c0db0;
            do {
                bVar27 = (uVar4 & 1) != 0;
                uVar4 = uVar4 >> 1 | (u32)bVar27 << 0x1f;
                pfVar2 = pfVar1;
                while (true) {
                    while (true) {
                        while (true) {
                            bVar28 = (uVar4 & 1) != 0;
                            uVar4 = uVar4 >> 1;
                            uVar5 = uVar4 | (u32)bVar28 << 0x1f;
                            if (bVar27)
                                break;
                            bVar28 = (uVar4 & 1) != 0;
                            if (bVar28)
                                goto LAB_8c215934;
                            bVar27 = (uVar4 & 2) != 0;
                            uVar4 = (uVar5 >> 1 | (u32)bVar28 << 0x1f) >> 1 | (u32)bVar27 << 0x1f;
                            pfVar2 = pfVar2 + 8;
                        }
                        fVar13 = (float)((u64)lVar20 >> 0x20);
                        if (bVar28)
                            break;
                        lVar20 = (u64)(u32)fVar13 << 0x20;
                        fVar13 = fVar18 * pfVar2[1] + fVar24 * *pfVar2 + (float)in_dr6 * 0.0 + fVar13 * pfVar2[2];
                        in_dr6 = 0;
                        bVar27 = (uVar4 & 1) != 0;
                        uVar5 = uVar5 >> 1 | (u32)bVar27 << 0x1f;
                        if ((float)lVar20 < 0.0) {
                            pfVar1 = pfVar2 + 6;
                            fVar13 = -(float)lVar20;
                            pfVar3 = pfVar2 + 7;
                            fVar17 = fVar13 * pfVar2[5] + fVar17;
                            in_dr6 = 0;
                            pfVar2 = pfVar2 + 8;
                            fVar15 = fVar13 * *pfVar1 + fVar15;
                            fVar14 = fVar13 * *pfVar3 + fVar14;
                            if (bVar27)
                                goto LAB_8c215934;
                            bVar27 = (uVar4 & 2) != 0;
                            uVar4 = uVar5 >> 1 | (u32)bVar27 << 0x1f;
                        } else {
                            if (bVar27)
                                goto LAB_8c215934;
                            bVar27 = (uVar4 & 2) != 0;
                            uVar4 = uVar5 >> 1 | (u32)bVar27 << 0x1f;
                            pfVar2 = pfVar2 + 8;
                        }
                    }
                    fVar19 = *pfVar2 - fVar16;
                    fVar12 = pfVar2[1] - fVar22;
                    fVar21 = pfVar2[2] - fVar23;
                    in_dr6 = 0;
                    lVar20 = (u64)(u32)fVar13 << 0x20;
                    fVar13 = fVar18 * fVar12 + fVar24 * fVar19 + 0.0 + fVar13 * fVar21;
                    fVar13 = fVar12 * fVar12 + fVar19 * fVar19 + 0.0 + fVar21 * fVar21;
                    fVar12 = (float)in_dr6;
                    fVar13 = 1.0 / SQRT(fVar12);
                    if ((u8)((0.0 < (float)lVar20) << 1 | fVar12 < pfVar2[3]) == 3)
                        break;
                    bVar28 = (uVar4 & 1) != 0;
                    pfVar2 = pfVar2 + 8;
                    if (bVar28)
                        goto LAB_8c215934;
                    bVar27 = (uVar4 & 2) != 0;
                    uVar4 = (uVar5 >> 1 | (u32)bVar28 << 0x1f) >> 1 | (u32)bVar27 << 0x1f;
                }
                fVar19 = (float)lVar20 * fVar13;
                if (pfVar2[4] < fVar12) {
                    fVar19 = fVar19 * pfVar2[4] * fVar13 * fVar13;
                }
                lVar20 = CONCAT44((int)((u64)lVar20 >> 0x20), fVar19);
                bVar27 = (uVar4 & 1) != 0;
                uVar4 = uVar5 >> 1 | (u32)bVar27 << 0x1f;
                fVar17 = fVar19 * pfVar2[5] + fVar17;
                in_dr6 = CONCAT44(pfVar2[7], fVar12);
                pfVar1 = pfVar2 + 8;
                fVar15 = fVar19 * pfVar2[6] + fVar15;
                fVar14 = fVar19 * pfVar2[7] + fVar14;
            } while (!bVar27);
        LAB_8c215934:
            fVar13 = 1.0 / fVar23;
            fVar18 = (float)a0[4];
            fVar12 = (float)a0[5];
            fVar21 = (float)a0[6];
            fVar19 = (float)a0[7];
            pfVar11[7] = fVar14;
            pfVar11[6] = fVar15;
            pfVar11[5] = fVar17;
            pfVar11[4] = 1.0;
            pfVar11[3] = fVar13;
            pfVar11[2] = fVar13 * fVar12 * fVar22 + fVar19;
            pfVar11[1] = fVar13 * fVar18 * fVar16 + fVar21;
            iVar10 = iVar10 + (u32)(fVar23 < 1.0);
            *pfVar11 = fVar23;
        }
        bVar27 = iVar6 == 1;
        iVar6 = iVar6 + -1;
        if (bVar27) {
            return iVar10;
        }
    } while (true);
}

/*
 * gfxlib_fill_loop_215988  0x8c215988
 * area name: in the gfxlib library code range; behaviour name: a loop that writes memory
 * called by: gfxlib_calls_fill_loop_218c82
 */
int gfxlib_fill_loop_215988(int *a0, u32 a1, u32 unused_a2, u32 a3) {
    double *pdVar1;
    u32 uVar2;
    int iVar3;
    double *pdVar4;
    u32 uVar5;
    int iVar6;
    double *pdVar7;
    double *pdVar8;
    u32 unaff_r8;
    int iVar9;
    u32 unaff_r9;
    u32 uVar10;
    double *pdVar11;
    u32 unaff_r10;
    u32 unaff_r11;
    u8 *puVar12;
    double in_dr0;
    double dVar13;
    float fVar14;
    u32 uVar15;
    double in_dr4;
    u64 uVar16;
    float fVar17;
    double in_dr6;
    double dVar18;
    float fVar19;
    float fVar20;
    double dVar21;
    float fVar23;
    double dVar22;
    double dVar24;
    float fVar25;
    float fVar26;
    float fVar27;
    float fVar28;
    float fVar29;
    double dVar30;
    float fVar32;
    double dVar31;
    double in_xd0;
    float in_xf2;
    float in_xf3;
    double in_xd4;
    float in_xf6;
    float in_xf7;
    double in_xd8;
    double dVar33;
    double in_xd10;
    double in_xd12;
    double in_xd14;
    bool bVar34;
    bool bVar35;
    u8 auStack_20[16];
    u8 auStack_10[16];

    puVar12 = auStack_10;

    *(u32 *)(puVar12 + -4) = unaff_r11;
    *(u32 *)(puVar12 + -8) = unaff_r10;
    *(u32 *)(puVar12 + -0xc) = unaff_r9;
    *(u32 *)(puVar12 + -0x10) = unaff_r8;
    iVar3 = *a0;
    pdVar7 = (double *)a0[1];
    iVar6 = a0[2];
    pdVar4 = (double *)(a0 + 4);
    iVar9 = 0;
    uVar5 = a1 >> 8 & 0xff;
    do {

        dVar30 = (double)CONCAT44(*(u32 *)pdVar7, *(u32 *)((int)pdVar7 + 4));
        fVar32 = *(float *)(pdVar7 + 1);
        pdVar7 = (double *)((int)pdVar7 + 0xc);

        dVar31 = (double)CONCAT44(fVar32, 0x3f800000);
        fVar14 = (float)((u64)in_xd0 >> 0x20);
        fVar23 = (float)((u64)in_xd4 >> 0x20);
        fVar26 = (float)((u64)in_xd10 >> 0x20);
        fVar20 = (float)((u64)in_xd12 >> 0x20);
        fVar27 = (float)((u64)in_xd14 >> 0x20);

        fVar28 = SUB84(dVar30, 0);
        fVar25 = (float)((u64)dVar30 >> 0x20);
        fVar29 =
            SUB84(in_xd0, 0) * fVar28 + SUB84(in_xd4, 0) * fVar25 + SUB84(in_xd8, 0) * 1.0 + SUB84(in_xd12, 0) * fVar32;
        fVar29 = fVar14 * fVar28 + fVar23 * fVar25 + (float)((u64)in_xd8 >> 0x20) * 1.0 + fVar20 * fVar32;
        fVar29 = in_xf2 * fVar28 + in_xf6 * fVar25 + SUB84(in_xd10, 0) * 1.0 + SUB84(in_xd14, 0) * fVar32;
        fVar32 = in_xf3 * fVar28 + in_xf7 * fVar25 + fVar26 * 1.0 + fVar27 * fVar32;

        dVar21 = (double)CONCAT44(*(u32 *)pdVar7, *(u32 *)((int)pdVar7 + 4));
        dVar24 = (double)((u64) * (u32 *)(pdVar7 + 1) << 0x20);
        pdVar8 = (double *)((int)pdVar7 + 0xc);

        dVar24 = (double)((u64)dVar24 & 0xffffffff00000000);
        pdVar7 = (double *)((int)pdVar8 + 4);

        fVar28 = SUB84(dVar21, 0);
        fVar29 = (float)((u64)dVar21 >> 0x20);
        fVar25 = (float)((u64)dVar24 >> 0x20);
        fVar32 =
            SUB84(in_xd0, 0) * fVar28 + SUB84(in_xd4, 0) * fVar29 + SUB84(in_xd8, 0) * 0.0 + SUB84(in_xd12, 0) * fVar25;
        fVar32 = fVar14 * fVar28 + fVar23 * fVar29 + (float)((u64)in_xd8 >> 0x20) * 0.0 + fVar20 * fVar25;
        fVar32 = in_xf2 * fVar28 + in_xf6 * fVar29 + SUB84(in_xd10, 0) * 0.0 + SUB84(in_xd14, 0) * fVar25;
        fVar32 = in_xf3 * fVar28 + in_xf7 * fVar29 + fVar26 * 0.0 + fVar27 * fVar25;

        uVar10 = *(u32 *)pdVar8 >> 0x10;

        dVar13 = (double)CONCAT44((float)uVar10, SUB84(in_dr0, 0));

        pdVar8 = (double *)((short)*(u32 *)pdVar8 * 0x20 + iVar6);

        dVar13 = (double)CONCAT44((int)((u64)dVar13 >> 0x20), (u32)g_8c215b60);

        in_dr0 = (double)CONCAT44((float)((u64)dVar13 >> 0x20) * SUB84(dVar13, 0), SUB84(dVar13, 0));

        fVar32 = (float)((u64)in_dr0 >> 0x20);
        fVar14 = SUB84(dVar21, 0);
        fVar23 = (float)((u64)dVar21 >> 0x20);
        fVar20 = SUB84(dVar30, 0);
        fVar27 = (float)((u64)dVar30 >> 0x20);
        fVar26 = (float)((u64)dVar24 >> 0x20);
        fVar28 = (float)((u64)dVar31 >> 0x20);
        if (uVar5 == 0) {
            *(u32 *)pdVar8 = 0;

            dVar24 = (double)CONCAT44(fVar26 * fVar32, SUB84(dVar24, 0));
            dVar21 = (double)CONCAT44(fVar23 * fVar32, fVar14 * fVar32);

            pdVar8 = (double *)((int)pdVar8 + 0x1c);
            *(int *)pdVar8 = (int)((u64)dVar24 >> 0x20);

            dVar31 = (double)CONCAT44(fVar28 * fVar32, SUB84(dVar31, 0));

            pdVar8 = (double *)((int)pdVar8 + -4);
            *(int *)pdVar8 = (int)((u64)dVar21 >> 0x20);

            dVar30 = (double)CONCAT44(fVar27, fVar20 * fVar32);

            pdVar8 = (double *)((int)pdVar8 + -4);
            *(int *)pdVar8 = (int)((u64)dVar31 >> 0x20);

            dVar30 = (double)CONCAT44((float)((u64)dVar30 >> 0x20) * fVar32, SUB84(dVar30, 0));

            *(int *)((int)pdVar8 + -4) = (int)((u64)dVar30 >> 0x20);

        } else if (uVar5 == 1) {

            dVar30 = (double)CONCAT44(*(u32 *)pdVar8, SUB84(in_dr4, 0));
            dVar31 = (double)CONCAT44(*(u32 *)((int)pdVar8 + 4), SUB84(in_dr6, 0));
            pdVar8 = pdVar8 + 1;

            dVar30 =
                (double)CONCAT44(fVar32 * fVar27 + (float)((u64)dVar30 >> 0x20), fVar32 * fVar20 + SUB84(dVar30, 0));
            dVar31 = (double)CONCAT44(fVar32 * fVar28 + (float)((u64)dVar31 >> 0x20), SUB84(dVar31, 0));

            *(int *)((int)pdVar8 + -4) = (int)((u64)dVar31 >> 0x20);
            pdVar8 = pdVar8 + -1;
            *(int *)pdVar8 = (int)((u64)dVar30 >> 0x20);

            in_dr4 = (double)CONCAT44(*(u32 *)(pdVar8 + 2), SUB84(dVar30, 0));
            in_dr6 = (double)CONCAT44(*(u32 *)((int)pdVar8 + 0x14), SUB84(dVar31, 0));
            pdVar8 = pdVar8 + 3;

            in_dr4 =
                (double)CONCAT44(fVar32 * fVar23 + (float)((u64)in_dr4 >> 0x20), fVar32 * fVar14 + SUB84(in_dr4, 0));
            in_dr6 = (double)CONCAT44(fVar32 * fVar26 + (float)((u64)in_dr6 >> 0x20), SUB84(in_dr6, 0));

            *(int *)((int)pdVar8 + -4) = (int)((u64)in_dr6 >> 0x20);
            *(int *)(pdVar8 + -1) = (int)((u64)in_dr4 >> 0x20);

        } else {

            dVar30 = (double)CONCAT44(*(u32 *)pdVar8, SUB84(in_dr4, 0));
            pdVar8 = (double *)((int)pdVar8 + 4);

            dVar30 = (double)CONCAT44(fVar32 * fVar27 + (float)((u64)dVar30 >> 0x20), SUB84(dVar30, 0));

            dVar21 = (double)CONCAT44(*(u32 *)pdVar8, SUB84(dVar30, 0));
            pdVar8 = (double *)((int)pdVar8 + 4);
            dVar30 = (double)CONCAT44((int)((u64)dVar30 >> 0x20), fVar20);

            dVar21 = (double)CONCAT44(fVar32 * SUB84(dVar30, 0) + (float)((u64)dVar21 >> 0x20), SUB84(dVar21, 0));

            dVar30 = (double)CONCAT44((int)((u64)dVar30 >> 0x20), (int)((u64)dVar21 >> 0x20));
            dVar13 = (double)CONCAT44(*(u32 *)pdVar8, SUB84(dVar21, 0));
            pdVar8 = (double *)((int)pdVar8 + 4);

            dVar13 = (double)CONCAT44(fVar32 * fVar28 + (float)((u64)dVar13 >> 0x20), SUB84(dVar13, 0));

            uVar16 = CONCAT44(*(u32 *)((int)pdVar8 + 4), SUB84(dVar13, 0));
            pdVar8 = pdVar8 + 1;
            dVar13 = (double)CONCAT44((int)((u64)dVar13 >> 0x20), SUB84(dVar31, 0));

            uVar16 = CONCAT44(fVar32 * fVar23 + (float)((u64)uVar16 >> 0x20), (int)uVar16);

            dVar31 = (double)CONCAT44(*(u32 *)pdVar8, (int)uVar16);
            pdVar8 = (double *)((int)pdVar8 + 4);
            uVar16 = CONCAT44((int)((u64)uVar16 >> 0x20), fVar14);

            dVar31 = (double)CONCAT44(fVar32 * (float)uVar16 + (float)((u64)dVar31 >> 0x20), SUB84(dVar31, 0));

            uVar16 = CONCAT44((int)((u64)uVar16 >> 0x20), (int)((u64)dVar31 >> 0x20));
            dVar21 = (double)CONCAT44(*(u32 *)pdVar8, SUB84(dVar31, 0));
            pdVar8 = (double *)((int)pdVar8 + 4);
            dVar31 = in_xd8;

            dVar21 = (double)CONCAT44(fVar32 * fVar26 + (float)((u64)dVar21 >> 0x20), SUB84(dVar21, 0));

            dVar18 = dVar21;

            dVar18 = (double)CONCAT44((int)((u64)dVar21 >> 0x20), SUB84(dVar24, 0));

            dVar24 = 0.0;
            uVar10 = g_8c4c0db0;
            fVar32 = 0.0;
            pdVar11 = (double *)(0x8c4c0db0 + 4);
            fVar14 = 0.0;
            do {
                bVar34 = (uVar10 & 1) != 0;
                uVar10 = uVar10 >> 1 | (u32)bVar34 << 0x1f;
                while (true) {
                    while (true) {
                        while (true) {
                            bVar35 = (uVar10 & 1) != 0;
                            uVar10 = uVar10 >> 1;
                            uVar2 = uVar10 | (u32)bVar35 << 0x1f;
                            fVar23 = (float)uVar16;
                            fVar26 = (float)((u64)dVar30 >> 0x20);
                            if (bVar34)
                                break;
                            bVar35 = (uVar10 & 1) != 0;
                            pdVar11 = pdVar11 + 4;
                            if (bVar35)
                                goto LAB_8c215af4;
                            bVar34 = (uVar10 & 2) != 0;
                            uVar10 = (uVar2 >> 1 | (u32)bVar35 << 0x1f) >> 1 | (u32)bVar34 << 0x1f;
                        }

                        dVar21 = (double)CONCAT44(*(u32 *)pdVar11, *(u32 *)((int)pdVar11 + 4));
                        pdVar1 = pdVar11 + 1;

                        fVar29 = (float)((u64)dVar18 >> 0x20);
                        fVar20 = SUB84(dVar21, 0);
                        fVar27 = (float)((u64)dVar21 >> 0x20);
                        fVar28 = (float)((u64)uVar16 >> 0x20);
                        uVar15 = SUB84(dVar24, 0);
                        if (bVar35)
                            break;

                        dVar22 = (double)CONCAT44(*(u32 *)pdVar1, SUB84(in_dr6, 0));
                        pdVar1 = (double *)((int)pdVar1 + 4);

                        dVar18 = (double)((u64)(u32)fVar29 << 0x20);

                        fVar27 = fVar23 * fVar20 + fVar28 * fVar27 + SUB84(dVar22, 0) * 0.0 +
                                 fVar29 * (float)((u64)dVar22 >> 0x20);

                        in_dr6 = (double)((u64)dVar22 & 0xffffffff00000000);

                        bVar34 = SUB84(dVar18, 0) < 0.0;

                        pdVar11 = (double *)((int)pdVar1 + 0x14);
                        bVar35 = (uVar10 & 1) != 0;
                        uVar2 = uVar2 >> 1 | (u32)bVar35 << 0x1f;
                        if (bVar34) {

                            dVar21 = (double)CONCAT44(*(u32 *)(pdVar1 + 1), fVar20);
                            pdVar1 = (double *)((int)pdVar1 + 0xc);
                            dVar24 = (double)CONCAT44(SUB84(dVar18, 0), uVar15);

                            dVar24 = (double)CONCAT44(-(float)((u64)dVar24 >> 0x20), SUB84(dVar24, 0));

                            dVar21 = (double)CONCAT44((int)((u64)dVar21 >> 0x20), *(u32 *)pdVar1);
                            pdVar1 = (double *)((int)pdVar1 + 4);

                            fVar20 = (float)((u64)dVar24 >> 0x20);
                            dVar24 = (double)CONCAT44(fVar20, fVar20 * (float)((u64)dVar21 >> 0x20) + SUB84(dVar24, 0));

                            in_dr6 = (double)((u64) * (u32 *)pdVar1 << 0x20);
                            pdVar11 = (double *)((int)pdVar1 + 4);

                            fVar20 = (float)((u64)dVar24 >> 0x20);

                            fVar32 = fVar20 * SUB84(dVar21, 0) + fVar32;
                            fVar14 = fVar20 * (float)((u64)in_dr6 >> 0x20) + fVar14;

                            if (bVar35)
                                goto LAB_8c215af4;
                            bVar34 = (uVar10 & 2) != 0;
                            uVar10 = uVar2 >> 1 | (u32)bVar34 << 0x1f;
                        } else {
                            if (bVar35)
                                goto LAB_8c215af4;
                            bVar34 = (uVar10 & 2) != 0;
                            uVar10 = uVar2 >> 1 | (u32)bVar34 << 0x1f;
                        }
                    }

                    dVar21 = (double)CONCAT44(fVar27 - fVar26, fVar20);

                    dVar18 = (double)CONCAT44(*(u32 *)pdVar1, SUB84(in_dr6, 0));
                    pdVar1 = (double *)((int)pdVar1 + 4);

                    dVar21 = (double)CONCAT44((int)((u64)dVar21 >> 0x20), SUB84(dVar21, 0) - SUB84(dVar30, 0));

                    fVar20 = (float)((u64)dVar13 >> 0x20);

                    in_dr6 = (double)((u64)(u32)((float)((u64)dVar18 >> 0x20) - fVar20) << 0x20);

                    dVar18 = (double)((u64)(u32)fVar29 << 0x20);
                    dVar24 = (double)((u64)dVar24 & 0xffffffff);
                    fVar27 = SUB84(dVar21, 0);
                    fVar25 = (float)((u64)dVar21 >> 0x20);
                    fVar17 = SUB84(in_dr6, 0);
                    fVar19 = (float)((u64)in_dr6 >> 0x20);

                    fVar28 = fVar23 * fVar27 + fVar28 * fVar25 + fVar17 * 0.0 + fVar29 * fVar19;

                    dVar13 = (double)CONCAT44(fVar20, *(u32 *)pdVar1);
                    pdVar1 = (double *)((int)pdVar1 + 4);

                    fVar20 = fVar27 * fVar27 + fVar25 * fVar25 + fVar17 * fVar17 + fVar19 * fVar19;
                    bVar34 = 0.0 < SUB84(dVar18, 0);

                    fVar20 = SUB84(in_dr6, 0);

                    dVar21 = (double)CONCAT44(fVar20, fVar27);

                    bVar35 = fVar20 < SUB84(dVar13, 0);
                    dVar21 = (double)CONCAT44(1.0 / SQRT((float)((u64)dVar21 >> 0x20)), SUB84(dVar21, 0));

                    dVar13 = (double)CONCAT44((int)((u64)dVar13 >> 0x20), *(u32 *)pdVar1);
                    pdVar1 = (double *)((int)pdVar1 + 4);

                    if ((u8)(bVar34 << 1 | bVar35) == 3)
                        break;
                    bVar35 = (uVar10 & 1) != 0;
                    pdVar11 = (double *)((int)pdVar1 + 0xc);
                    if (bVar35)
                        goto LAB_8c215af4;
                    bVar34 = (uVar10 & 2) != 0;
                    uVar10 = (uVar2 >> 1 | (u32)bVar35 << 0x1f) >> 1 | (u32)bVar34 << 0x1f;
                }
                fVar27 = (float)((u64)dVar21 >> 0x20);

                dVar18 = (double)CONCAT44((int)((u64)dVar18 >> 0x20), SUB84(dVar18, 0) * fVar27);
                bVar34 = SUB84(dVar13, 0) < fVar20;
                dVar21 = (double)CONCAT44(fVar27 * fVar27, SUB84(dVar21, 0));

                dVar21 = (double)CONCAT44((int)((u64)dVar21 >> 0x20), *(u32 *)pdVar1);
                pdVar1 = (double *)((int)pdVar1 + 4);

                if (bVar34) {

                    dVar18 = (double)CONCAT44((int)((u64)dVar18 >> 0x20),
                                              SUB84(dVar18, 0) * SUB84(dVar13, 0) * (float)((u64)dVar21 >> 0x20));
                }
                dVar24 = in_xd10;

                dVar24 = (double)CONCAT44(SUB84(dVar18, 0), uVar15);

                bVar34 = (uVar10 & 1) != 0;
                uVar10 = uVar2 >> 1 | (u32)bVar34 << 0x1f;

                dVar21 = (double)CONCAT44(*(u32 *)pdVar1, SUB84(dVar21, 0));
                pdVar1 = (double *)((int)pdVar1 + 4);

                fVar27 = (float)((u64)dVar24 >> 0x20);
                dVar24 = (double)CONCAT44(fVar27, fVar27 * SUB84(dVar21, 0) + SUB84(dVar24, 0));

                in_dr6 = (double)CONCAT44(*(u32 *)pdVar1, fVar20);
                pdVar11 = (double *)((int)pdVar1 + 4);

                fVar20 = (float)((u64)dVar24 >> 0x20);

                fVar32 = fVar20 * (float)((u64)dVar21 >> 0x20) + fVar32;
                fVar14 = fVar20 * (float)((u64)in_dr6 >> 0x20) + fVar14;

            } while (!bVar34);
        LAB_8c215af4:

            dVar22 = (double)CONCAT44(*(u32 *)0x8c4aa544, fVar23);
            pdVar11 = (double *)((int)0x8c4aa544 + 4);

            fVar23 = (float)((u64)dVar22 >> 0x20);
            fVar20 = (float)((u64)dVar13 >> 0x20);

            bVar34 = fVar23 < fVar20;

            uVar15 = SUB84(dVar21, 0);
            if (bVar34) {

                dVar22 = (double)CONCAT44(fVar23, *(u32 *)pdVar11);
                pdVar11 = (double *)((int)pdVar11 + 4);
                dVar33 = dVar31;

                bVar34 = fVar20 < SUB84(dVar22, 0);

                if (bVar34) {

                    dVar18 = (double)CONCAT44((int)((u64)dVar18 >> 0x20), *(u32 *)pdVar11);

                    dVar31 = dVar13;

                    dVar22 = (double)CONCAT44((int)((u64)dVar22 >> 0x20), fVar20);
                    dVar31 = dVar33;

                    in_dr4 = (double)CONCAT44(
                        1.0 - (SUB84(dVar22, 0) - (float)((u64)dVar22 >> 0x20)) * SUB84(dVar18, 0), uVar15);

                } else {
                    in_dr4 = (double)((u64)dVar21 & 0xffffffff);
                    dVar31 = dVar33;
                }
            } else {
                in_dr4 = (double)CONCAT44(0x3f800000, uVar15);
            }
            dVar21 = (double)CONCAT44(0x3f800000, SUB84(dVar24, 0));

            bVar34 = fVar20 < 1.0;
            in_dr0 = (double)CONCAT44(1.0 / fVar20, SUB84(dVar24, 0));

            dVar24 = (double)CONCAT44(*(u32 *)pdVar4, *(u32 *)((int)pdVar4 + 4));
            dVar21 = (double)CONCAT44(*(u32 *)(pdVar4 + 1), SUB84(dVar18, 0));
            pdVar4 = (double *)((int)pdVar4 + 0xc);
            in_xd8 = dVar31;

            dVar21 = (double)CONCAT44((int)((u64)dVar21 >> 0x20), *(u32 *)pdVar4);
            pdVar4 = (double *)((int)pdVar4 + 4);

            pdVar4 = pdVar4 + -2;

            *(float *)pdVar8 = fVar14;

            dVar24 = (double)CONCAT44((int)((u64)dVar24 >> 0x20), SUB84(dVar24, 0) * SUB84(dVar30, 0));

            pdVar8 = (double *)((int)pdVar8 + -4);
            *(float *)pdVar8 = fVar32;

            dVar24 = (double)CONCAT44((float)((u64)dVar24 >> 0x20) * fVar26, SUB84(dVar24, 0));

            *(int *)((int)pdVar8 + -4) = SUB84(in_dr0, 0);
            pdVar8 = pdVar8 + -1;
            *(int *)pdVar8 = (int)((u64)in_dr4 >> 0x20);

            fVar32 = (float)((u64)in_dr0 >> 0x20);

            dVar21 = (double)CONCAT44((int)((u64)dVar21 >> 0x20), fVar32 * SUB84(dVar24, 0) + SUB84(dVar21, 0));

            pdVar8 = (double *)((int)pdVar8 + -4);
            *(float *)pdVar8 = fVar32;

            dVar21 = (double)CONCAT44(fVar32 * (float)((u64)dVar24 >> 0x20) + (float)((u64)dVar21 >> 0x20),
                                      SUB84(dVar21, 0));

            *(int *)((int)pdVar8 + -4) = SUB84(dVar21, 0);
            pdVar8 = pdVar8 + -1;
            *(int *)pdVar8 = (int)((u64)dVar21 >> 0x20);

            iVar9 = iVar9 + (u32)bVar34;

            *(float *)((int)pdVar8 + -4) = fVar20;
        }
        bVar34 = iVar3 == 1;
        iVar3 = iVar3 + -1;
        if (bVar34) {
            return iVar9;
        }
    } while (true);
}

/*
 * gfxlib_fill_loop_215b74  0x8c215b74
 * area name: in the gfxlib library code range; behaviour name: a loop that writes memory
 */
u32 *gfxlib_fill_loop_215b74(short *a0, int a1, u32 a2, u32 *a3) {
    u32 *puVar1;
    int iVar2;
    int iVar3;
    int iVar4;
    u32 uVar5;
    short *psVar6;
    u32 *puVar7;
    int iVar8;
    int iVar9;
    u32 uVar10;
    u32 uVar11;

    uVar5 = a2 & 0x3fff;
    iVar3 = 0;
    iVar2 = 0;
    do {
        iVar4 = (int)*a0;
        psVar6 = a0 + 2;
        iVar8 = a0[1] * 0x10 + a1;
        if (iVar4 < 0) {
            iVar4 = -iVar4;
        }
        iVar2 = iVar2 + iVar4;
        uVar10 = *(u32 *)(iVar8 + 4);
        iVar3 = iVar3 + iVar4;
        iVar4 = iVar4 + -2;
        a0 = a0 + 3;
        iVar9 = *psVar6 * 0x10 + a1;
        a3[7] = *(u32 *)(iVar8 + 0xc);
        a3[4] = uVar10;
        a3[3] = 0xe0000000;
        uVar10 = *(u32 *)(iVar9 + 4);
        uVar11 = *(u32 *)(iVar9 + 0xc);
        puVar1 = a3 + 3;
        do {
            puVar7 = puVar1;
            iVar8 = *a0 * 0x10 + a1;
            puVar7[0xf] = uVar11;
            puVar7[0xc] = uVar10;
            a0 = a0 + (a2 >> 0xe & 3) + 1;
            puVar7[0xb] = 0xe0000000;
            uVar10 = *(u32 *)(iVar8 + 4);
            iVar4 = iVar4 + -1;
            uVar11 = *(u32 *)(iVar8 + 0xc);
            puVar1 = puVar7 + 0xb;
        } while (iVar4 != 0);
        puVar7[0x1a] = uVar11;
        puVar7[0x17] = uVar10;
        uVar5 = uVar5 - 1;
        puVar7[0x16] = 0xf0000000;
        a3 = puVar7 + 0x1e;
    } while (uVar5 != 0);
    g_8c4aa520 = g_8c4aa520 + iVar2;
    g_8c4aa51c = g_8c4aa51c + iVar3;
    return a3;
}

/*
 * gfxlib_calls_fill_loop_215c48  0x8c215c48
 * area name: in the gfxlib library code range; behaviour name: its callees mostly do: fill_loop
 */
double *gfxlib_calls_fill_loop_215c48(short *a0, int a1, u32 a2, double *a3) {
    u32 *puVar1;
    int iVar2;
    int iVar3;
    u32 uVar4;
    short *psVar5;
    int iVar6;
    int iVar7;
    double *pdVar8;
    int iVar9;
    u32 *puVar10;
    u32 *ar5_00;
    u32 *puVar11;
    int iVar12;
    int *piVar13;
    double *pdVar14;
    double *pdVar15;
    float fVar16;
    double in_dr4;
    float fVar17;
    double in_dr6;
    float fVar18;
    double in_dr8;
    u32 uVar19;
    u32 uVar20;
    u32 in_fr11;
    double dVar21;
    u32 in_fr13;
    double dVar22;
    u64 in_xd6;
    u64 uVar23;
    u64 in_xd8;
    bool bVar24;
    char cVar25;
    char cVar26;
    u8 auStack_30[4];

    cVar26 = '\0';
    cVar25 = '\0';
    piVar13 = (int *)auStack_30;
    uVar4 = a2 & 0x3fff;
    iVar6 = (a2 >> 0xe & 3) << 1;
    iVar2 = 0;
    iVar3 = 0;
    dVar21 = (double)CONCAT44(0xe0000000, in_fr11);
    dVar22 = (double)CONCAT44(0xf0000000, in_fr13);
    do {
        iVar9 = (int)*a0;
        psVar5 = a0 + 2;
        puVar10 = (u32 *)(a0[1] * 0x10 + a1);
        if (iVar9 < 0) {
            iVar9 = -iVar9;
        }
        iVar3 = iVar3 + iVar9;
        iVar9 = iVar9 + -2;
        iVar12 = 0;
        if (cVar26 == '\0') {
            in_dr4 = (double)CONCAT44((int)((u64)in_dr4 >> 0x20), puVar10[2]);
        }
        a0 = a0 + 3;
        ar5_00 = (u32 *)(*psVar5 * 0x10 + a1);
        if (cVar26 == '\0') {
            in_dr6 = (double)CONCAT44((int)((u64)in_dr6 >> 0x20), ar5_00[2]);
            uVar23 = in_xd6;
        } else {
            uVar23 = *(u64 *)(ar5_00 + 2);
        }
        do {
            psVar5 = a0 + 1;
            fVar16 = SUB84(in_dr4, 0);
            if (cVar25 == '\0') {
                bVar24 = 0.0 < fVar16;
            } else {
                bVar24 = 5.26354424712089e-315 < in_dr4;
            }
            puVar11 = (u32 *)(*a0 * 0x10 + a1);
            if (cVar26 == '\0') {
                in_dr8 = (double)CONCAT44((int)((u64)in_dr8 >> 0x20), puVar11[2]);
            } else {
                in_xd8 = *(u64 *)(puVar11 + 2);
            }
            fVar17 = SUB84(in_dr6, 0);
            fVar18 = SUB84(in_dr8, 0);
            uVar19 = (u32)((u64)dVar21 >> 0x20);
            if (bVar24) {
                if (cVar25 == '\0') {
                    bVar24 = 0.0 < fVar17;
                } else {
                    bVar24 = 5.26354424712089e-315 < in_dr6;
                }
                if (!bVar24)
                    goto LAB_8c215d10;
                if (cVar25 == '\0') {
                    bVar24 = 0.0 < fVar18;
                } else {
                    bVar24 = 5.26354424712089e-315 < in_dr8;
                }
                if (!bVar24)
                    goto LAB_8c215d10;
                if (cVar25 == '\0') {
                    bVar24 = 1.0 < fVar16;
                } else {
                    bVar24 = 5.26354424712089e-315 < in_dr4;
                }
                if (bVar24)
                    goto LAB_8c215d10;
                if (cVar25 == '\0') {
                    bVar24 = 1.0 < fVar17;
                } else {
                    bVar24 = 5.26354424712089e-315 < in_dr6;
                }
                if (bVar24)
                    goto LAB_8c215d10;
                if (cVar25 == '\0') {
                    bVar24 = 1.0 < fVar18;
                } else {
                    bVar24 = 5.26354424712089e-315 < in_dr8;
                }
                if (bVar24)
                    goto LAB_8c215d10;
                iVar7 = (int)a3 + 0x1c;
                if (iVar12 == 0) {
                    if (cVar26 == '\0') {
                        dVar21 = (double)CONCAT44(uVar19, *puVar10);
                        in_dr4 = (double)CONCAT44(puVar10[1], fVar16);
                        puVar10 = puVar10 + 2;
                    } else {
                        in_dr4 = *(double *)(puVar10 + 2);
                        puVar10 = puVar10 + 4;
                    }
                    if (cVar26 == '\0') {
                        uVar19 = puVar10[1];
                        in_dr8 = (double)CONCAT44(uVar19, fVar18);
                        pdVar8 = a3 + 3;
                        *(u32 *)pdVar8 = uVar19;
                        *(int *)((int)pdVar8 + -0xc) = (int)((u64)in_dr4 >> 0x20);
                        pdVar8 = pdVar8 + -2;
                        *(int *)pdVar8 = (int)((u64)dVar21 >> 0x20);
                    } else {
                        in_dr8 = *(double *)(puVar10 + 1);
                        pdVar8 = (double *)((int)a3 + 0x14);
                        *pdVar8 = in_dr8;
                        pdVar8[-2] = in_dr4;
                        pdVar8 = pdVar8 + -3;
                        *pdVar8 = dVar21;
                    }
                    iVar12 = 1;
                    iVar7 = (int)pdVar8 + 0x3c;
                }
                if (cVar26 == '\0') {
                    dVar21 = (double)CONCAT44((int)((u64)dVar21 >> 0x20), *ar5_00);
                    in_dr6 = (double)CONCAT44(ar5_00[1], fVar17);
                    puVar10 = ar5_00 + 2;
                } else {
                    in_dr6 = *(double *)(ar5_00 + 2);
                    puVar10 = ar5_00 + 4;
                }
                if (cVar26 == '\0') {
                    uVar19 = puVar10[1];
                    in_dr8 = (double)CONCAT44(uVar19, SUB84(in_dr8, 0));
                    *(u32 *)(iVar7 + -4) = uVar19;
                    *(int *)(iVar7 + -0x10) = (int)((u64)in_dr6 >> 0x20);
                    pdVar8 = (double *)(iVar7 + -0x14);
                    *(int *)pdVar8 = (int)((u64)dVar21 >> 0x20);
                } else {
                    in_dr8 = *(double *)(puVar10 + 1);
                    pdVar8 = (double *)(iVar7 + -8);
                    *pdVar8 = in_dr8;
                    pdVar8[-2] = in_dr6;
                    pdVar8 = pdVar8 + -3;
                    *pdVar8 = dVar21;
                }
                iVar12 = iVar12 + 1;
                a3 = pdVar8 + 4;
            } else {
            LAB_8c215d10:
                if (iVar12 != 0) {
                    if (cVar26 == '\0') {
                        dVar22 = (double)CONCAT44((int)((u64)dVar22 >> 0x20), *ar5_00);
                        in_dr6 = (double)CONCAT44(ar5_00[1], fVar17);
                        puVar1 = ar5_00 + 2;
                    } else {
                        in_dr6 = *(double *)(ar5_00 + 2);
                        puVar1 = ar5_00 + 4;
                    }
                    if (cVar26 == '\0') {
                        uVar20 = puVar1[1];
                        in_dr8 = (double)CONCAT44(uVar20, fVar18);
                        *(u32 *)(a3 + 3) = uVar20;
                        pdVar8 = (double *)((int)(a3 + 3) + -0xc);
                        *(int *)pdVar8 = (int)((u64)in_dr6 >> 0x20);
                    } else {
                        in_dr8 = *(double *)(puVar1 + 1);
                        *(double *)((int)a3 + 0x14) = in_dr8;
                        pdVar8 = (double *)((int)a3 + 0x14) + -2;
                        *pdVar8 = in_dr6;
                    }
                    iVar2 = iVar2 + iVar12;
                    iVar12 = 0;
                    iVar2 = iVar2 + 1;
                    if (cVar26 == '\0') {
                        pdVar8 = (double *)((int)pdVar8 + -4);
                        *(int *)pdVar8 = (int)((u64)dVar22 >> 0x20);
                    } else {
                        pdVar8 = pdVar8 + -1;
                        *pdVar8 = dVar22;
                    }
                    a3 = pdVar8 + 4;
                }
                if (cVar25 == '\0') {
                    bVar24 = 0.0 < fVar16;
                } else {
                    bVar24 = 5.26354424712089e-315 < in_dr4;
                }
                fVar17 = SUB84(in_dr6, 0);
                fVar18 = SUB84(in_dr8, 0);
                if (bVar24) {
                    if (cVar25 == '\0') {
                        bVar24 = fVar16 < 1.0;
                    } else {
                        bVar24 = in_dr4 < 5.26354424712089e-315;
                    }
                    if (!bVar24)
                        goto LAB_8c215d3e;
                LAB_8c215dba:
                    *(int *)((int)piVar13 + -4) = iVar6;
                    *(int *)((int)piVar13 + -8) = a1;
                    *(short **)((int)piVar13 + -0xc) = psVar5;
                    *(u32 *)((int)piVar13 + -0x10) = uVar4;
                    *(int *)((int)piVar13 + -0x14) = iVar3;
                    *(int *)((int)piVar13 + -0x18) = iVar2;
                    if (cVar26 == '\0') {
                        *(float *)((int)piVar13 + -0x1c) = fVar17;
                        *(float *)((int)piVar13 + -0x20) = fVar18;
                        *(u32 *)((int)piVar13 + -0x24) = uVar19;
                        pdVar14 = (double *)((int)piVar13 + -0x28);
                        *(int *)((int)piVar13 + -0x28) = (int)((u64)dVar22 >> 0x20);
                    } else {
                        *(u64 *)((int)piVar13 + -0x20) = uVar23;
                        *(u64 *)((int)piVar13 + -0x28) = in_xd8;
                        *(double *)((int)piVar13 + -0x30) = dVar21;
                        pdVar14 = (double *)((int)piVar13 + -0x38);
                        *(double *)((int)piVar13 + -0x38) = dVar22;
                    }
                    a3 = (double *)gfxlib_fill_loop_215e10(puVar10, ar5_00, puVar11, a3);
                    if (cVar26 == '\0') {
                        dVar22 = (double)CONCAT44(*(u32 *)pdVar14, SUB84(dVar22, 0));
                        dVar21 = (double)CONCAT44(*(u32 *)((int)pdVar14 + 4), SUB84(dVar21, 0));
                        in_dr8 = (double)CONCAT44((int)((u64)in_dr8 >> 0x20), *(u32 *)(pdVar14 + 1));
                        in_dr6 = (double)CONCAT44((int)((u64)in_dr6 >> 0x20), *(u32 *)((int)pdVar14 + 0xc));
                        pdVar15 = pdVar14 + 2;
                    } else {
                        dVar22 = *pdVar14;
                        dVar21 = pdVar14[1];
                        in_xd8 = pdVar14[2];
                        uVar23 = pdVar14[3];
                        pdVar15 = pdVar14 + 4;
                    }
                    iVar2 = *(int *)pdVar15;
                    iVar3 = *(int *)((int)pdVar15 + 4);
                    uVar4 = *(u32 *)((int)pdVar15 + 8);
                    psVar5 = *(short **)((int)pdVar15 + 0xc);
                    a1 = *(int *)((int)pdVar15 + 0x10);
                    iVar6 = *(int *)((int)pdVar15 + 0x14);
                    piVar13 = (int *)((int)pdVar15 + 0x18);
                } else {
                LAB_8c215d3e:
                    if (cVar25 == '\0') {
                        bVar24 = 0.0 < fVar17;
                    } else {
                        bVar24 = 5.26354424712089e-315 < in_dr6;
                    }
                    if (bVar24) {
                        if (cVar25 == '\0') {
                            bVar24 = fVar17 < 1.0;
                        } else {
                            bVar24 = in_dr6 < 5.26354424712089e-315;
                        }
                        if (bVar24)
                            goto LAB_8c215dba;
                    }
                    if (cVar25 == '\0') {
                        bVar24 = 0.0 < fVar18;
                    } else {
                        bVar24 = 5.26354424712089e-315 < in_dr8;
                    }
                    if (bVar24) {
                        if (cVar25 == '\0') {
                            bVar24 = fVar18 < 1.0;
                        } else {
                            bVar24 = in_dr8 < 5.26354424712089e-315;
                        }
                        if (bVar24)
                            goto LAB_8c215dba;
                    }
                }
            }
            a0 = (short *)((int)psVar5 + iVar6);
            in_xd6 = in_xd8;
            if (cVar26 == '\0') {
                in_dr4 = (double)CONCAT44((int)((u64)in_dr4 >> 0x20), SUB84(in_dr6, 0));
                in_dr6 = (double)CONCAT44((int)((u64)in_dr6 >> 0x20), SUB84(in_dr8, 0));
                in_xd6 = uVar23;
            }
            iVar9 = iVar9 + -1;
            puVar10 = ar5_00;
            ar5_00 = puVar11;
            uVar23 = in_xd6;
        } while (iVar9 != 0);
        if (iVar12 != 0) {
            if (cVar26 == '\0') {
                dVar22 = (double)CONCAT44((int)((u64)dVar22 >> 0x20), *puVar11);
                in_dr8 = (double)CONCAT44(puVar11[1], SUB84(in_dr8, 0));
                puVar11 = puVar11 + 2;
            } else {
                in_dr8 = *(double *)(puVar11 + 2);
                puVar11 = puVar11 + 4;
            }
            if (cVar26 == '\0') {
                uVar19 = puVar11[1];
                in_dr6 = (double)CONCAT44(uVar19, SUB84(in_dr6, 0));
                *(u32 *)(a3 + 3) = uVar19;
                pdVar8 = (double *)((int)(a3 + 3) + -0xc);
                *(int *)pdVar8 = (int)((u64)in_dr8 >> 0x20);
            } else {
                in_dr6 = *(double *)(puVar11 + 1);
                *(double *)((int)a3 + 0x14) = in_dr6;
                pdVar8 = (double *)((int)a3 + 0x14) + -2;
                *pdVar8 = in_dr8;
            }
            if (cVar26 == '\0') {
                pdVar8 = (double *)((int)pdVar8 + -4);
                *(int *)pdVar8 = (int)((u64)dVar22 >> 0x20);
            } else {
                pdVar8 = pdVar8 + -1;
                *pdVar8 = dVar22;
            }
            iVar2 = iVar2 + iVar12 + 1;
            a3 = pdVar8 + 4;
        }
        uVar4 = uVar4 - 1;
        if (uVar4 == 0) {
            g_8c4aa520 = g_8c4aa520 + iVar2;
            g_8c4aa51c = g_8c4aa51c + iVar3;
            return a3;
        }
    } while (true);
}

/*
 * alt_entry_215c4a  0x8c215c4a
 * probably an entry 2 bytes into 8c215c48: it reads registers that code sets before it
 */
double *alt_entry_215c4a(short *a0, int a1, u32 a2, double *a3) {
    int *piVar1;
    u32 *puVar2;
    u32 in_r1;
    int iVar3;
    int iVar4;
    u32 uVar5;
    short *psVar6;
    int iVar7;
    int iVar8;
    double *pdVar9;
    u32 unaff_r8;
    u32 unaff_r9;
    u32 unaff_r10;
    int iVar10;
    u32 unaff_r11;
    u32 *puVar11;
    u32 unaff_r12;
    u32 *ar5_00;
    u32 unaff_r13;
    u32 *puVar12;
    u32 unaff_r14;
    int iVar13;
    u64 *puVar14;
    int *piVar15;
    double *pdVar16;
    double *pdVar17;
    float fVar18;
    double in_dr4;
    float fVar19;
    double in_dr6;
    float fVar20;
    double in_dr8;
    u32 uVar21;
    u32 uVar22;
    u32 in_fr11;
    double dVar23;
    u64 in_dr12;
    double dVar24;
    u64 in_dr14;
    u64 in_xd6;
    u64 uVar25;
    u64 in_xd8;
    bool bVar26;
    u32 in_PR;
    u8 auStack_20[16];
    u64 uStack_10;
    u64 uStack_8;

    uStack_8 = CONCAT44((int)in_dr14, (u32)uStack_8);
    uStack_8._0_4_ = (int)((u64)in_dr14 >> 0x20);
    puVar14 = &uStack_10;
    uStack_10 = CONCAT44((int)in_dr12, (int)((u64)in_dr12 >> 0x20));

    *(u32 *)((int)puVar14 + -4) = unaff_r14;
    *(u32 *)((int)puVar14 + -8) = unaff_r13;
    *(u32 *)((int)puVar14 + -0xc) = unaff_r12;
    *(u32 *)((int)puVar14 + -0x10) = unaff_r11;
    *(u32 *)((int)puVar14 + -0x14) = unaff_r10;
    *(u32 *)((int)puVar14 + -0x18) = unaff_r9;
    *(u32 *)((int)puVar14 + -0x1c) = unaff_r8;
    piVar15 = (int *)((int)puVar14 + -0x20);
    *(u32 *)((int)puVar14 + -0x20) = in_PR;
    uVar5 = a2 & in_r1;
    iVar7 = (a2 >> 0xe & 3) << 1;
    iVar3 = 0;
    iVar4 = 0;

    dVar23 = (double)CONCAT44(g_8c215df8, in_fr11);
    dVar24 = (double)CONCAT44(g_8c215dfc, (int)in_dr12);
    piVar15 = (int *)((int)puVar14 + -0x20);

    do {
        iVar10 = (int)*a0;
        psVar6 = a0 + 2;
        puVar11 = (u32 *)(a0[1] * 0x10 + a1);
        if (iVar10 < 0) {
            iVar10 = -iVar10;
        }
        iVar4 = iVar4 + iVar10;
        iVar10 = iVar10 + -2;
        iVar13 = 0;

        in_dr4 = (double)CONCAT44((int)((u64)in_dr4 >> 0x20), puVar11[2]);

        a0 = a0 + 3;
        ar5_00 = (u32 *)(*psVar6 * 0x10 + a1);

        in_dr6 = (double)CONCAT44((int)((u64)in_dr6 >> 0x20), ar5_00[2]);
        uVar25 = in_xd6;

        do {
            psVar6 = a0 + 1;
            fVar18 = SUB84(in_dr4, 0);

            bVar26 = 0.0 < fVar18;

            puVar12 = (u32 *)(*a0 * 0x10 + a1);

            in_dr8 = (double)CONCAT44((int)((u64)in_dr8 >> 0x20), puVar12[2]);

            fVar19 = SUB84(in_dr6, 0);
            fVar20 = SUB84(in_dr8, 0);
            uVar21 = (u32)((u64)dVar23 >> 0x20);
            if (bVar26) {

                bVar26 = 0.0 < fVar19;

                if (!bVar26)
                    goto LAB_8c215d10;

                bVar26 = 0.0 < fVar20;

                if (!bVar26)
                    goto LAB_8c215d10;

                bVar26 = 1.0 < fVar18;

                if (bVar26)
                    goto LAB_8c215d10;

                bVar26 = 1.0 < fVar19;

                if (bVar26)
                    goto LAB_8c215d10;

                bVar26 = 1.0 < fVar20;

                if (bVar26)
                    goto LAB_8c215d10;
                iVar8 = (int)a3 + 0x1c;
                if (iVar13 == 0) {

                    dVar23 = (double)CONCAT44(uVar21, *puVar11);
                    in_dr4 = (double)CONCAT44(puVar11[1], fVar18);
                    puVar11 = puVar11 + 2;

                    uVar21 = puVar11[1];
                    in_dr8 = (double)CONCAT44(uVar21, fVar20);
                    pdVar9 = a3 + 3;
                    *(u32 *)pdVar9 = uVar21;
                    *(int *)((int)pdVar9 + -0xc) = (int)((u64)in_dr4 >> 0x20);
                    pdVar9 = pdVar9 + -2;
                    *(int *)pdVar9 = (int)((u64)dVar23 >> 0x20);

                    iVar13 = 1;
                    iVar8 = (int)pdVar9 + 0x3c;
                }

                dVar23 = (double)CONCAT44((int)((u64)dVar23 >> 0x20), *ar5_00);
                in_dr6 = (double)CONCAT44(ar5_00[1], fVar19);
                puVar11 = ar5_00 + 2;

                uVar21 = puVar11[1];
                in_dr8 = (double)CONCAT44(uVar21, SUB84(in_dr8, 0));
                *(u32 *)(iVar8 + -4) = uVar21;
                *(int *)(iVar8 + -0x10) = (int)((u64)in_dr6 >> 0x20);
                pdVar9 = (double *)(iVar8 + -0x14);
                *(int *)pdVar9 = (int)((u64)dVar23 >> 0x20);

                iVar13 = iVar13 + 1;
                a3 = pdVar9 + 4;
            } else {
            LAB_8c215d10:
                if (iVar13 != 0) {

                    dVar24 = (double)CONCAT44((int)((u64)dVar24 >> 0x20), *ar5_00);
                    in_dr6 = (double)CONCAT44(ar5_00[1], fVar19);
                    puVar2 = ar5_00 + 2;

                    uVar22 = puVar2[1];
                    in_dr8 = (double)CONCAT44(uVar22, fVar20);
                    *(u32 *)(a3 + 3) = uVar22;
                    pdVar9 = (double *)((int)(a3 + 3) + -0xc);
                    *(int *)pdVar9 = (int)((u64)in_dr6 >> 0x20);

                    iVar3 = iVar3 + iVar13;
                    iVar13 = 0;
                    iVar3 = iVar3 + 1;

                    pdVar9 = (double *)((int)pdVar9 + -4);
                    *(int *)pdVar9 = (int)((u64)dVar24 >> 0x20);

                    a3 = pdVar9 + 4;
                }

                bVar26 = 0.0 < fVar18;

                fVar19 = SUB84(in_dr6, 0);
                fVar20 = SUB84(in_dr8, 0);
                if (bVar26) {

                    bVar26 = fVar18 < 1.0;

                    if (!bVar26)
                        goto LAB_8c215d3e;
                LAB_8c215dba:
                    *(int *)((int)piVar15 + -4) = iVar7;
                    *(int *)((int)piVar15 + -8) = a1;
                    *(short **)((int)piVar15 + -0xc) = psVar6;
                    *(u32 *)((int)piVar15 + -0x10) = uVar5;
                    *(int *)((int)piVar15 + -0x14) = iVar4;
                    *(int *)((int)piVar15 + -0x18) = iVar3;

                    *(float *)((int)piVar15 + -0x1c) = fVar19;
                    *(float *)((int)piVar15 + -0x20) = fVar20;
                    *(u32 *)((int)piVar15 + -0x24) = uVar21;
                    pdVar16 = (double *)((int)piVar15 + -0x28);
                    *(int *)((int)piVar15 + -0x28) = (int)((u64)dVar24 >> 0x20);

                    a3 = (double *)gfxlib_fill_loop_215e10(puVar11, ar5_00, puVar12, a3);

                    dVar24 = (double)CONCAT44(*(u32 *)pdVar16, SUB84(dVar24, 0));
                    dVar23 = (double)CONCAT44(*(u32 *)((int)pdVar16 + 4), SUB84(dVar23, 0));
                    in_dr8 = (double)CONCAT44((int)((u64)in_dr8 >> 0x20), *(u32 *)(pdVar16 + 1));
                    in_dr6 = (double)CONCAT44((int)((u64)in_dr6 >> 0x20), *(u32 *)((int)pdVar16 + 0xc));
                    pdVar17 = pdVar16 + 2;

                    iVar3 = *(int *)pdVar17;
                    iVar4 = *(int *)((int)pdVar17 + 4);
                    uVar5 = *(u32 *)((int)pdVar17 + 8);
                    psVar6 = *(short **)((int)pdVar17 + 0xc);
                    a1 = *(int *)((int)pdVar17 + 0x10);
                    iVar7 = *(int *)((int)pdVar17 + 0x14);
                    piVar15 = (int *)((int)pdVar17 + 0x18);
                } else {
                LAB_8c215d3e:

                    bVar26 = 0.0 < fVar19;

                    if (bVar26) {

                        bVar26 = fVar19 < 1.0;

                        if (bVar26)
                            goto LAB_8c215dba;
                    }

                    bVar26 = 0.0 < fVar20;

                    if (bVar26) {

                        bVar26 = fVar20 < 1.0;

                        if (bVar26)
                            goto LAB_8c215dba;
                    }
                }
            }
            a0 = (short *)((int)psVar6 + iVar7);
            in_xd6 = in_xd8;

            in_dr4 = (double)CONCAT44((int)((u64)in_dr4 >> 0x20), SUB84(in_dr6, 0));
            in_dr6 = (double)CONCAT44((int)((u64)in_dr6 >> 0x20), SUB84(in_dr8, 0));
            in_xd6 = uVar25;

            iVar10 = iVar10 + -1;
            puVar11 = ar5_00;
            ar5_00 = puVar12;
            uVar25 = in_xd6;
        } while (iVar10 != 0);
        if (iVar13 != 0) {

            dVar24 = (double)CONCAT44((int)((u64)dVar24 >> 0x20), *puVar12);
            in_dr8 = (double)CONCAT44(puVar12[1], SUB84(in_dr8, 0));
            puVar12 = puVar12 + 2;

            uVar21 = puVar12[1];
            in_dr6 = (double)CONCAT44(uVar21, SUB84(in_dr6, 0));
            *(u32 *)(a3 + 3) = uVar21;
            pdVar9 = (double *)((int)(a3 + 3) + -0xc);
            *(int *)pdVar9 = (int)((u64)in_dr8 >> 0x20);

            pdVar9 = (double *)((int)pdVar9 + -4);
            *(int *)pdVar9 = (int)((u64)dVar24 >> 0x20);

            iVar3 = iVar3 + iVar13 + 1;
            a3 = pdVar9 + 4;
        }
        piVar1 = 0x8c4aa51c;
        uVar5 = uVar5 - 1;
        if (uVar5 == 0) {
            iVar7 = g_8c4aa51c;
            g_8c4aa520 = g_8c4aa520 + iVar3;
            *piVar1 = iVar7 + iVar4;
            return a3;
        }
    } while (true);
}

/*
 * gfxlib_fill_loop_215e10  0x8c215e10
 * area name: in the gfxlib library code range; behaviour name: a loop that writes memory
 * called by: alt_entry_215c4a, gfxlib_calls_fill_loop_215c48
 */
u32 *gfxlib_fill_loop_215e10(double *a0, double *a1, double *a2, u32 *a3) {
    u64 *puVar1;
    u32 uVar2;
    u64 *puVar3;
    int iVar4;
    int iVar5;
    double *pdVar6;
    u64 *puVar7;
    double *pdVar8;
    int iVar9;
    u32 *puVar10;
    u32 uVar11;
    float fVar12;
    double in_dr0;
    double dVar13;
    double dVar14;
    float fVar15;
    float fVar16;
    float fVar17;
    float fVar18;
    float fVar19;
    double in_dr2;
    double dVar20;
    u64 uVar21;
    u64 uVar22;
    double dVar23;
    u32 in_fr5;
    u32 uVar24;
    double dVar25;
    float fVar26;
    double dVar27;
    float fVar28;
    u32 in_fr9;
    double dVar29;
    float fVar30;
    double in_dr10;
    double dVar31;
    double in_dr12;
    double in_dr14;
    double in_xd0;
    double in_xd2;
    double dVar32;
    double in_xd4;
    double dVar33;
    double in_xd6;
    double in_xd10;
    double in_xd14;
    bool bVar34;
    int iVar35;
    int iVar36;
    u8 auStack_34[12];
    u32 auStack_28[3];

    puVar10 = auStack_28;
    stack0xffffffd4 = CONCAT44((int)((u64)in_dr12 >> 0x20), auStack_34._8_4_);

    if ((g_8c4aa4f0 & 0x10000) == 0) {

        in_dr2 = (double)CONCAT44((int)((u64)in_dr2 >> 0x20), g_8c4aa4dc);
        dVar27 = (double)CONCAT44(g_8c4aa4a8, g_8c4aa4b4);
        uVar11 = g_8c4aa4a8;
        in_fr9 = g_8c4aa4b8;
        dVar29 = (double)CONCAT44(g_8c4aa4a8, in_fr5);

        dVar27 = (double)CONCAT44((float)((u64)dVar27 >> 0x20) * SUB84(in_dr2, 0), SUB84(dVar27, 0));

        dVar20 = (double)CONCAT44(g_8c4aa4e0, SUB84(in_dr2, 0));
        dVar29 = (double)CONCAT44(uVar11, in_fr9);

        dVar29 = (double)CONCAT44((float)((u64)dVar29 >> 0x20) * (float)((u64)dVar20 >> 0x20), SUB84(dVar29, 0));

        dVar20 = (double)(u64) * (u32 *)(a0 + 1);

        fVar17 = SUB84(dVar20, 0);
        fVar28 = (float)((u64)dVar27 >> 0x20);
        fVar30 = (float)((u64)dVar29 >> 0x20);

        dVar20 = (double)CONCAT44(1.0 / fVar17, fVar17);
        dVar25 = (double)CONCAT44(1.0 / fVar28, 1.0 / fVar30);

        pdVar6 = (double *)((int)puVar10 + -0x54);

        *(int *)((int)puVar10 + -0x40) = (int)((u64)dVar20 >> 0x20);
        *(u32 *)pdVar6 = *(u32 *)a0;
        *(u32 *)((int)puVar10 + -0x50) = *(u32 *)((int)a0 + 4);
        *(u32 *)((int)puVar10 + -0x4c) = *(u32 *)(a0 + 1);
        *(u32 *)((int)puVar10 + -0x3c) = *(u32 *)((int)a0 + 0xc);
        dVar20 = (double)CONCAT44(*(u32 *)((int)puVar10 + -0x40), *(u32 *)a0);

        fVar26 = SUB84(dVar27, 0);
        fVar17 = (float)((u64)dVar25 >> 0x20);

        fVar15 = (SUB84(dVar20, 0) - fVar26) * (float)((u64)dVar20 >> 0x20) * fVar17;

        *(float *)((int)puVar10 + -0x48) = fVar15;
        dVar20 = (double)CONCAT44(*(u32 *)((int)puVar10 + -0x40), *(u32 *)((int)a0 + 4));

        fVar15 = SUB84(dVar29, 0);

        fVar16 = (SUB84(dVar20, 0) - fVar15) * (float)((u64)dVar20 >> 0x20);

        fVar18 = SUB84(dVar25, 0);

        dVar20 = (double)CONCAT44(0x3f800000, fVar16 * fVar18);

        *(int *)((int)puVar10 + -0x44) = SUB84(dVar20, 0);
        dVar20 = (double)CONCAT44((int)((u64)dVar20 >> 0x20), *(u32 *)(a1 + 1));

        dVar20 = (double)CONCAT44((float)((u64)dVar20 >> 0x20) / SUB84(dVar20, 0), SUB84(dVar20, 0));

        *(int *)((int)puVar10 + -0x24) = (int)((u64)dVar20 >> 0x20);
        *(u32 *)((int)puVar10 + -0x38) = *(u32 *)a1;
        *(u32 *)((int)puVar10 + -0x34) = *(u32 *)((int)a1 + 4);
        *(u32 *)((int)puVar10 + -0x30) = *(u32 *)(a1 + 1);
        *(u32 *)((int)puVar10 + -0x20) = *(u32 *)((int)a1 + 0xc);
        dVar20 = (double)CONCAT44(*(u32 *)((int)puVar10 + -0x24), *(u32 *)a1);

        fVar16 = (SUB84(dVar20, 0) - fVar26) * (float)((u64)dVar20 >> 0x20) * fVar17;

        *(float *)((int)puVar10 + -0x2c) = fVar16;
        dVar20 = (double)CONCAT44(*(u32 *)((int)puVar10 + -0x24), *(u32 *)((int)a1 + 4));

        fVar16 = (SUB84(dVar20, 0) - fVar15) * (float)((u64)dVar20 >> 0x20) * fVar18;

        *(float *)((int)puVar10 + -0x28) = fVar16;
        fVar16 = *(float *)(a2 + 1);

        dVar20 = (double)CONCAT44(1.0 / fVar16, fVar16);

        *(int *)((int)puVar10 + -8) = (int)((u64)dVar20 >> 0x20);
        *(u32 *)((int)puVar10 + -0x1c) = *(u32 *)a2;
        *(u32 *)((int)puVar10 + -0x18) = *(u32 *)((int)a2 + 4);
        *(u32 *)((int)puVar10 + -0x14) = *(u32 *)(a2 + 1);
        *(u32 *)((int)puVar10 + -4) = *(u32 *)((int)a2 + 0xc);
        dVar20 = (double)CONCAT44(*(u32 *)((int)puVar10 + -8), *(u32 *)a2);

        fVar17 = (SUB84(dVar20, 0) - fVar26) * (float)((u64)dVar20 >> 0x20) * fVar17;

        *(float *)((int)puVar10 + -0x10) = fVar17;
        dVar27 = (double)CONCAT44(*(u32 *)((int)puVar10 + -8), *(u32 *)((int)a2 + 4));

        fVar18 = (SUB84(dVar27, 0) - fVar15) * (float)((u64)dVar27 >> 0x20) * fVar18;

        iVar4 = 0;

        *(float *)((int)puVar10 + -0xc) = fVar18;

        puVar7 = (u64 *)((int)puVar10 + -0xc4);
        iVar9 = 2;
        for (iVar5 = 0; iVar5 < 3; iVar5 = iVar5 + 1) {

            uVar21 = CONCAT44(*(u32 *)((int)pdVar6 + iVar9 * 0x1c + 0x14), 0x3f800000);

            puVar1 = (u64 *)((int)pdVar6 + iVar5 * 0x1c + 0x14);

            uVar22 = CONCAT44(*(u32 *)puVar1, (float)uVar21);

            fVar17 = (float)uVar22;
            if (((1 && (float)uVar21 < (float)((u64)uVar21 >> 0x20)) ^ 1) !=
                -((1 && fVar17 < (float)((u64)uVar22 >> 0x20)) - 1)) {

                fVar17 = *(float *)((int)pdVar6 + iVar9 * 0x1c + 0x14);
                in_dr0 = (double)CONCAT44((int)((u64)in_dr0 >> 0x20), *(u32 *)((int)pdVar6 + iVar5 * 0x1c + 0x14));
                fVar16 = fVar17;
                dVar29 = (double)CONCAT44(fVar17, SUB84(dVar25, 0));

                dVar27 = (double)CONCAT44(0x3f800000, -fVar17);

                dVar27 = (double)CONCAT44(0x3f800000, -fVar17 + 1.0);
                dVar20 = (double)CONCAT44((int)((u64)in_dr0 >> 0x20), SUB84(in_dr0, 0) - fVar16);

                dVar29 = (double)CONCAT44(*(u32 *)((int)pdVar6 + iVar9 * 0x1c + 0xc), SUB84(dVar29, 0));

                dVar33 = in_xd2;

                dVar29 = (double)CONCAT44((int)((u64)dVar29 >> 0x20), SUB84(dVar27, 0));
                dVar33 = in_xd4;

                dVar29 = (double)CONCAT44((int)((u64)dVar29 >> 0x20), SUB84(dVar29, 0) / SUB84(dVar20, 0));

                fVar17 = (float)((u64)dVar29 >> 0x20);

                dVar27 = (double)CONCAT44((int)((u64)dVar27 >> 0x20), *(u32 *)((int)pdVar6 + iVar5 * 0x1c + 0xc));
                dVar20 = (double)(u64)(u32)fVar17;
                dVar25 = in_xd0;
                dVar32 = in_xd2;

                dVar27 = (double)CONCAT44((int)((u64)dVar27 >> 0x20), SUB84(dVar27, 0) - fVar17);

                dVar31 = (double)CONCAT44(*(u32 *)((int)pdVar6 + iVar9 * 0x1c + 0x10), SUB84(in_dr10, 0));

                pdVar8 = (double *)(iVar4 * 0x1c + (int)puVar7);
                dVar13 = dVar33;

                dVar13 = (double)CONCAT44(SUB84(dVar29, 0), SUB84(dVar20, 0));

                fVar17 = (float)((u64)dVar13 >> 0x20);
                dVar13 = (double)CONCAT44(fVar17, fVar17 * SUB84(dVar27, 0) + SUB84(dVar13, 0));

                dVar27 = (double)CONCAT44((int)((u64)dVar27 >> 0x20), *(u32 *)((int)pdVar6 + iVar5 * 0x1c + 0x10));

                fVar17 = (float)((u64)dVar31 >> 0x20);

                dVar27 = (double)CONCAT44((int)((u64)dVar27 >> 0x20), SUB84(dVar27, 0) - fVar17);

                in_dr10 = dVar31;

                uVar11 = SUB84(dVar13, 0);
                dVar13 = (double)CONCAT44((int)((u64)dVar13 >> 0x20), fVar17);
                in_dr10 = dVar25;
                dVar25 = (double)CONCAT44(uVar11, SUB84(dVar29, 0));

                dVar13 = (double)(u64)(u32)((float)((u64)dVar13 >> 0x20) * SUB84(dVar27, 0) + SUB84(dVar13, 0));

                in_xd2 = in_xd6;
                dVar29 = dVar25;

                dVar27 = (double)CONCAT44((int)((u64)dVar27 >> 0x20), fVar26);
                in_xd2 = dVar32;
                dVar29 = (double)CONCAT44((int)((u64)dVar25 >> 0x20), SUB84(dVar13, 0));

                dVar27 = (double)CONCAT44((int)((u64)dVar27 >> 0x20),
                                          (float)((u64)dVar29 >> 0x20) * fVar28 + SUB84(dVar27, 0));

                *(int *)pdVar8 = SUB84(dVar27, 0);
                in_dr0 = (double)CONCAT44(SUB84(dVar29, 0), fVar15);
                in_xd0 = in_dr10;
                in_dr10 = (double)CONCAT44(SUB84(dVar29, 0), SUB84(dVar31, 0));

                fVar17 = (float)((u64)in_dr0 >> 0x20);
                in_dr0 = (double)CONCAT44(fVar17, fVar17 * fVar30 + SUB84(in_dr0, 0));

                uVar11 = SUB84(in_dr0, 0);

                *(u32 *)((int)pdVar8 + 4) = uVar11;
                *(int *)(pdVar8 + 1) = (int)((u64)dVar27 >> 0x20);

                if (g_8c277acc == 0) {
                    iVar9 = iVar9 * 0x1c + (int)pdVar6;
                    uVar24 = SUB84(dVar25, 0);
                    if (g_8c4ab1d8 == 0x23) {
                        uVar2 = *(u32 *)(iVar9 + 0x18);
                        fVar17 = (float)(uVar2 >> 0x18);
                        dVar27 = (double)(u64)(u32)fVar17;
                        dVar29 = in_xd2;

                        dVar29 = (double)CONCAT44(fVar17, uVar24);

                        dVar20 = in_xd2;
                        if (fVar17 < 0.0) {

                            dVar27 = 6.58979161647419e-315;

                            dVar20 = in_xd2;

                            dVar29 =
                                (double)CONCAT44((float)((u64)dVar29 >> 0x20) + SUB84(dVar27, 0), SUB84(dVar29, 0));
                        }
                        fVar17 = (float)(uVar2 >> 0x10 & 0xff);
                        dVar25 = (double)(u64)(u32)fVar17;
                        dVar27 = dVar20;

                        dVar27 = (double)CONCAT44(fVar17, SUB84(in_dr10, 0));

                        if (fVar17 < 0.0) {

                            dVar25 = 6.58979161647419e-315;

                            dVar27 =
                                (double)CONCAT44((float)((u64)dVar27 >> 0x20) + SUB84(dVar25, 0), SUB84(dVar27, 0));
                        }
                        fVar17 = (float)(uVar2 >> 8 & 0xff);
                        dVar32 = (double)(u64)(u32)fVar17;
                        dVar25 = dVar20;

                        dVar27 = (double)CONCAT44((int)((u64)dVar27 >> 0x20), fVar17);
                        dVar25 = in_xd10;

                        dVar31 = dVar25;
                        if (0.0 <= fVar17) {

                            in_dr14 = (double)((u64)dVar27 & 0xffffffff);
                            dVar31 = in_xd14;

                        } else {

                            in_dr14 = (double)CONCAT44((int)((u64)in_dr14 >> 0x20), SUB84(dVar27, 0));
                            dVar32 = 6.58979161647419e-315;
                            dVar31 = in_xd14;

                            in_dr14 = (double)(u64)(u32)(SUB84(in_dr14, 0) + SUB84(dVar32, 0));
                        }
                        fVar17 = (float)(uVar2 & 0xff);
                        dVar13 = (double)(u64)(u32)fVar17;
                        dVar32 = dVar20;

                        dVar27 = (double)CONCAT44((int)((u64)dVar27 >> 0x20), fVar17);
                        dVar32 = dVar25;

                        uVar11 = SUB84(in_dr14, 0);
                        if (0.0 <= fVar17) {
                            in_dr14 = dVar32;

                            in_dr14 = (double)CONCAT44(SUB84(dVar27, 0), uVar11);

                        } else {

                            dVar13 = 6.58979161647419e-315;
                            dVar25 = (double)CONCAT44(SUB84(dVar27, 0), uVar11);

                            in_dr14 =
                                (double)CONCAT44((float)((u64)dVar25 >> 0x20) + SUB84(dVar13, 0), SUB84(dVar25, 0));
                        }
                        uVar2 = *(u32 *)((int)pdVar6 + iVar5 * 0x1c + 0x18);
                        fVar17 = (float)(uVar2 >> 0x18);
                        dVar25 = (double)(u64)(u32)fVar17;
                        dVar13 = dVar20;

                        dVar27 = (double)CONCAT44((int)((u64)dVar27 >> 0x20), fVar17);
                        dVar13 = dVar32;

                        if (fVar17 < 0.0) {

                            dVar25 = 6.58979161647419e-315;

                            dVar27 = (double)CONCAT44((int)((u64)dVar27 >> 0x20), SUB84(dVar27, 0) + SUB84(dVar25, 0));
                        }
                        fVar17 = (float)(uVar2 >> 0x10 & 0xff);
                        dVar25 = (double)(u64)(u32)fVar17;
                        dVar32 = dVar20;

                        in_dr0 = (double)CONCAT44((int)((u64)in_dr0 >> 0x20), fVar17);
                        dVar32 = in_xd0;

                        if (fVar17 < 0.0) {

                            dVar25 = 6.58979161647419e-315;

                            in_dr0 = (double)CONCAT44((int)((u64)in_dr0 >> 0x20), SUB84(in_dr0, 0) + SUB84(dVar25, 0));
                        }
                        fVar17 = (float)(uVar2 >> 8 & 0xff);
                        dVar23 = (double)(u64)(u32)fVar17;
                        dVar25 = dVar20;

                        dVar25 = (double)CONCAT44(fVar17, SUB84(in_dr12, 0));

                        if (fVar17 < 0.0) {

                            dVar23 = 6.58979161647419e-315;

                            dVar25 =
                                (double)CONCAT44((float)((u64)dVar25 >> 0x20) + SUB84(dVar23, 0), SUB84(dVar25, 0));
                        }

                        dVar23 = (double)((u64)(u32)(float)(uVar2 & 0xff) << 0x20);

                        fVar17 = (float)((u64)dVar23 >> 0x20);

                        *(float *)((int)puVar10 + -0xd4) = fVar17;

                        if (SUB84(dVar23, 0) <= fVar17) {

                            dVar23 = (double)CONCAT44(fVar17, *(u32 *)((int)puVar10 + -0xd4));

                        } else {

                            dVar23 = (double)CONCAT44(0x4f800000, *(u32 *)((int)puVar10 + -0xd4));

                            fVar17 = (float)((u64)dVar23 >> 0x20);
                            dVar23 = (double)CONCAT44(fVar17, SUB84(dVar23, 0) + fVar17);
                        }
                        fVar17 = (float)((u64)dVar29 >> 0x20);

                        dVar27 = (double)CONCAT44((int)((u64)dVar27 >> 0x20), SUB84(dVar27, 0) - fVar17);

                        *(float *)((int)puVar10 + -0xcc) = SUB84(dVar23, 0);

                        fVar18 = (float)((u64)in_dr14 >> 0x20);
                        fVar16 = (float)((u64)dVar27 >> 0x20);

                        fVar19 = SUB84(dVar23, 0) - fVar18;
                        fVar12 = SUB84(in_dr0, 0) - fVar16;

                        dVar23 = dVar29;

                        dVar23 = (double)CONCAT44(fVar17, fVar19);

                        in_dr12 = (double)CONCAT44((float)((u64)dVar25 >> 0x20) - SUB84(in_dr14, 0), SUB84(dVar25, 0));

                        dVar14 = dVar33;

                        dVar14 = (double)CONCAT44(SUB84(dVar29, 0), fVar12);

                        fVar17 = (float)((u64)dVar14 >> 0x20);

                        dVar23 = (double)CONCAT44(fVar17 * SUB84(dVar27, 0) + (float)((u64)dVar23 >> 0x20),
                                                  SUB84(dVar23, 0));

                        dVar25 = in_dr14;

                        dVar25 = (double)CONCAT44(fVar18, SUB84(dVar29, 0));

                        dVar25 = (double)CONCAT44(fVar17 * SUB84(dVar23, 0) + (float)((u64)dVar25 >> 0x20),
                                                  SUB84(dVar25, 0));

                        in_xd10 = dVar27;

                        dVar27 = (double)(u64)(u32)fVar16;
                        in_xd10 = dVar13;

                        fVar16 = SUB84(dVar27, 0);

                        fVar16 = fVar17 * SUB84(dVar14, 0) + fVar16;

                        in_xd2 = dVar23;

                        uVar11 = (u32)((u64)dVar23 >> 0x20);
                        dVar23 = (double)CONCAT44(uVar11, uVar11);
                        in_xd2 = dVar20;

                        in_dr0 = (double)CONCAT44(fVar17, 0x4f000000);

                        bVar34 = SUB84(dVar23, 0) < 2.1474836e+09;

                        uVar11 = (u32)((u64)dVar23 >> 0x20);

                        *(u32 *)((int)puVar10 + -200) = uVar11;
                        in_dr10 = (double)CONCAT44(SUB84(in_dr14, 0), fVar16);

                        in_dr10 = (double)CONCAT44(
                            fVar17 * (float)((u64)in_dr12 >> 0x20) + (float)((u64)in_dr10 >> 0x20), SUB84(in_dr10, 0));

                        if (!bVar34) {

                            in_dr0 = (double)CONCAT44(fVar17, 0x4f800000);
                            dVar23 = (double)CONCAT44(uVar11, SUB84(dVar23, 0) - 4.2949673e+09);
                        }

                        iVar9 = (int)SUB84(dVar23, 0);

                        uVar11 = (u32)((u64)dVar23 >> 0x20);
                        dVar29 = (double)CONCAT44(uVar11, 0x4f000000);

                        bVar34 = SUB84(in_dr10, 0) < 2.1474836e+09;

                        if (!bVar34) {

                            dVar29 = (double)CONCAT44(uVar11, 0x4f800000);
                            in_dr10 = (double)CONCAT44((int)((u64)in_dr10 >> 0x20), SUB84(in_dr10, 0) - 4.2949673e+09);
                        }

                        iVar35 = (int)SUB84(in_dr10, 0);

                        uVar11 = (u32)((u64)dVar29 >> 0x20);
                        dVar29 = (double)CONCAT44(uVar11, 0x4f000000);
                        fVar17 = (float)((u64)in_dr10 >> 0x20);

                        bVar34 = fVar17 < 2.1474836e+09;

                        if (!bVar34) {

                            dVar29 = (double)CONCAT44(uVar11, 0x4f800000);
                            in_dr10 = (double)CONCAT44(fVar17 - 4.2949673e+09, SUB84(in_dr10, 0));
                        }

                        iVar36 = (int)(float)((u64)in_dr10 >> 0x20);

                        dVar29 = (double)CONCAT44((int)((u64)dVar29 >> 0x20), 0x4f000000);
                        fVar17 = (float)((u64)dVar25 >> 0x20);

                        bVar34 = fVar17 < 2.1474836e+09;

                        if (!bVar34) {

                            dVar25 = (double)CONCAT44(fVar17 - 4.2949673e+09, SUB84(dVar25, 0));
                        }

                        uVar2 = (u32)(float)((u64)dVar25 >> 0x20);

                        *(u32 *)((int)puVar7 + iVar4 * 0x1c + 0x18) =
                            iVar9 << 0x18 | iVar35 << 0x10 | iVar36 << 8 | uVar2;
                        in_xd0 = dVar32;
                        in_xd14 = dVar31;
                    } else {
                        in_dr0 = dVar33;

                        in_dr0 = (double)CONCAT44(uVar24, uVar11);

                        *(int *)((int)puVar10 + -0xd0) = iVar9;

                        fVar17 = *(float *)(iVar9 + 0x18);
                        dVar29 = (double)CONCAT44(fVar17, *(u32 *)((int)pdVar6 + iVar5 * 0x1c + 0x18));
                        dVar25 = (double)CONCAT44(fVar17, uVar24);

                        fVar17 = SUB84(dVar29, 0) - fVar17;
                        dVar29 = (double)CONCAT44((float)((u64)in_dr0 >> 0x20) * fVar17 + (float)((u64)dVar29 >> 0x20),
                                                  fVar17);

                        *(int *)((int)puVar7 + iVar4 * 0x1c + 0x18) = (int)((u64)dVar29 >> 0x20);
                    }
                }
                iVar4 = iVar4 + 1;
                in_xd4 = dVar33;
            }
            puVar1 = (u64 *)(iVar5 * 0x1c + (int)pdVar6);

            uVar21 = CONCAT44(*(u32 *)((int)puVar1 + 0x14), 0x3f800000);

            if ((float)uVar21 < (float)((u64)uVar21 >> 0x20)) {

                uVar21 = CONCAT44(*(u32 *)puVar1, (float)uVar21);

                puVar3 = (u64 *)(iVar4 * 0x1c + (int)puVar7);

                *(int *)puVar3 = (int)((u64)uVar21 >> 0x20);
                in_dr0 = (double)CONCAT44((int)((u64)in_dr0 >> 0x20), *(u32 *)((int)puVar1 + 4));
                *(u32 *)((int)puVar3 + 4) = *(u32 *)((int)puVar1 + 4);
                *(u32 *)(puVar3 + 1) = *(u32 *)(puVar1 + 1);

                if (g_8c277acc == 0) {

                    *(u32 *)((int)puVar7 + iVar4 * 0x1c + 0x18) = *(u32 *)((int)pdVar6 + iVar5 * 0x1c + 0x18);
                }
                iVar4 = iVar4 + 1;
            }
            iVar9 = iVar5;
        }
        if (g_8c277acc != 0) {

            *(u32 *)((int)puVar10 + -0x74) = *(u32 *)((int)puVar10 + -4);
            *(u32 *)((int)puVar10 + -0x58) = *(u32 *)((int)puVar10 + -4);
        }

        a3[6] = *(u32 *)((int)puVar10 + -0xac);
        a3[3] = *(u32 *)((int)puVar10 + -0xbc);
        a3[2] = *(u32 *)((int)puVar10 + -0xc0);
        puVar1 = (u64 *)(a3 + 1);
        *(u32 *)puVar1 = *(u32 *)puVar7;

        *(u32 *)((int)puVar1 + -4) = 0xe0000000;

        *(u32 *)((int)puVar1 + 0x34) = *(u32 *)((int)puVar10 + -0x90);
        *(u32 *)(puVar1 + 5) = *(u32 *)((int)puVar10 + -0xa0);
        *(u32 *)((int)puVar1 + 0x24) = *(u32 *)((int)puVar10 + -0xa4);
        puVar1 = puVar1 + 4;
        *(u32 *)puVar1 = *(u32 *)((int)puVar10 + -0xa8);

        *(u32 *)((int)puVar1 + -4) = 0xe0000000;
        if (iVar4 != 3) {

            *(u32 *)((int)puVar1 + 0x34) = *(u32 *)((int)puVar10 + -0x58);
            *(u32 *)(puVar1 + 5) = *(u32 *)((int)puVar10 + -0x68);
            *(u32 *)((int)puVar1 + 0x24) = *(u32 *)((int)puVar10 + -0x6c);
            puVar1 = puVar1 + 4;
            *(u32 *)puVar1 = *(u32 *)((int)puVar10 + -0x70);

            *(u32 *)((int)puVar1 + -4) = 0xe0000000;
        }

        *(u32 *)((int)puVar1 + 0x34) = *(u32 *)((int)puVar10 + -0x74);
        *(u32 *)(puVar1 + 5) = *(u32 *)((int)puVar10 + -0x84);
        *(u32 *)((int)puVar1 + 0x24) = *(u32 *)((int)puVar10 + -0x88);
        puVar1 = puVar1 + 4;
        *(u32 *)puVar1 = *(u32 *)((int)puVar10 + -0x8c);

        *(u32 *)((int)puVar1 + -4) = 0xf0000000;
        a3 = (u32 *)((int)puVar1 + 0x1c);
        g_8c4aa520 = g_8c4aa520 + iVar4;
    }
    return a3;
}

/*
 * gfxlib_fill_loop_2162bc  0x8c2162bc
 * area name: in the gfxlib library code range; behaviour name: a loop that writes memory
 */
u32 *gfxlib_fill_loop_2162bc(short *a0, int a1, u32 a2, u32 *a3) {
    short sVar1;
    short sVar2;
    u32 *puVar3;
    int iVar4;
    int iVar5;
    int iVar6;
    u32 uVar7;
    u32 *puVar8;
    int iVar9;
    int iVar10;
    u32 uVar11;
    u32 uVar12;
    float in_fr4;
    float fVar13;

    uVar7 = a2 & 0x3fff;
    iVar5 = 0;
    iVar4 = 0;
    do {
        iVar6 = (int)*a0;
        sVar1 = a0[2];
        iVar9 = a0[1] * 0x10 + a1;
        if (iVar6 < 0) {
            iVar6 = -iVar6;
        }
        iVar4 = iVar4 + iVar6;
        uVar11 = *(u32 *)(iVar9 + 4);
        iVar5 = iVar5 + iVar6;
        iVar6 = iVar6 + -2;
        iVar10 = a0[4] * 0x10 + a1;
        a3[7] = *(u32 *)(iVar9 + 0xc);
        sVar2 = a0[5];
        a3[6] = (float)(int)sVar1 * in_fr4;
        a3[5] = uVar11;
        a3[4] = 0xe0000000;
        fVar13 = (float)(int)sVar2 * in_fr4;
        a0 = a0 + 7;
        uVar12 = *(u32 *)(iVar10 + 4);
        uVar11 = *(u32 *)(iVar10 + 0xc);
        puVar3 = a3 + 4;
        do {
            puVar8 = puVar3;
            sVar1 = a0[1];
            iVar9 = *a0 * 0x10 + a1;
            puVar8[0xf] = uVar11;
            puVar8[0xe] = fVar13;
            puVar8[0xd] = uVar12;
            fVar13 = (float)(int)sVar1 * in_fr4;
            puVar8[0xc] = 0xe0000000;
            a0 = a0 + (a2 >> 0xe & 3) + 3;
            uVar12 = *(u32 *)(iVar9 + 4);
            iVar6 = iVar6 + -1;
            uVar11 = *(u32 *)(iVar9 + 0xc);
            puVar3 = puVar8 + 0xc;
        } while (iVar6 != 0);
        puVar8[0x1b] = uVar11;
        puVar8[0x1a] = fVar13;
        uVar7 = uVar7 - 1;
        puVar8[0x19] = uVar12;
        puVar8[0x18] = 0xf0000000;
        a3 = puVar8 + 0x20;
    } while (uVar7 != 0);
    g_8c4aa520 = g_8c4aa520 + iVar4;
    g_8c4aa51c = g_8c4aa51c + iVar5;
    return a3;
}

/*
 * gfxlib_uses_njUnitVector_2163d4  0x8c2163d4
 * area name: in the gfxlib library code range; behaviour name: its main named callee is njUnitVector
 */
double *gfxlib_uses_njUnitVector_2163d4(short *a0, int a1, u32 a2, double *a3) {
    u32 uVar1;
    double *pdVar2;
    u8 *ar5_00;
    int iVar3;
    u8 *ar6_00;
    int iVar4;
    u8 *ar7_00;
    int iVar5;
    u32 uVar6;
    short *psVar7;
    short *psVar8;
    double *pdVar9;
    double *pdVar10;
    u8 *puVar11;
    float fVar12;
    double in_dr0;
    u32 uVar14;
    u32 uVar15;
    float fVar16;
    u64 in_dr2;
    double dVar17;
    u64 uVar18;
    float fVar19;
    u64 in_dr4;
    double dVar20;
    double dVar21;
    double in_dr6;
    double in_dr8;
    u32 in_fr11;
    u32 in_fr10;
    u32 in_fr13;
    u32 in_fr12;
    float in_fr15;
    u32 in_fr14;
    double in_xd2;
    double in_xd6;
    u32 in_PR;
    u8 auStack_20[4];
    u8 auStack_1c[4];
    double dVar13;

    puVar11 = auStack_1c;

    *(u32 *)(puVar11 + -4) = in_PR;
    fVar12 = (float)(in_dr4 >> 0x20);
    uVar1 = (u32)((u64)in_dr0 >> 0x20);

    *(float *)(puVar11 + -0x60) = fVar12;
    *(u32 *)(puVar11 + -100) = in_fr14;
    *(u32 *)(puVar11 + -0x68) = in_fr13;
    *(u32 *)(puVar11 + -0x6c) = in_fr12;
    *(u32 *)(puVar11 + -0x70) = in_fr11;
    *(u32 *)(puVar11 + -0x74) = in_fr10;
    *(int *)(puVar11 + -0x78) = SUB84(in_dr8, 0);
    *(int *)(puVar11 + -0x7c) = (int)((u64)in_dr8 >> 0x20);
    *(int *)(puVar11 + -0x80) = SUB84(in_dr6, 0);
    *(int *)(puVar11 + -0x84) = (int)((u64)in_dr6 >> 0x20);
    *(int *)(puVar11 + -0x88) = (int)in_dr4;
    *(float *)(puVar11 + -0x8c) = fVar12;
    *(int *)(puVar11 + -0x90) = (int)in_dr2;
    *(int *)(puVar11 + -0x94) = (int)((u64)in_dr2 >> 0x20);
    *(int *)(puVar11 + -0x98) = SUB84(in_dr0, 0);
    *(u32 *)(puVar11 + -0x9c) = uVar1;
    in_fr15 = fVar12;

    pdVar2 = (double *)(puVar11 + -0x1c);
    ar6_00 = &g_8c4ab1f0;
    ar7_00 = &g_8c4ab1ec;
    *(double **)(puVar11 + -0xbc) = pdVar2;

    dVar17 = (double)CONCAT44(g_8c4ab1e0, g_8c4ab1f0);
    in_dr0 = (double)CONCAT44(uVar1, g_8c4ab1e4);

    pdVar10 = (double *)(puVar11 + -0x18);
    pdVar9 = (double *)(puVar11 + -0x14);

    dVar17 = (double)CONCAT44((float)((u64)dVar17 >> 0x20) * SUB84(dVar17, 0), SUB84(dVar17, 0));

    dVar17 = (double)CONCAT44((int)((u64)dVar17 >> 0x20), g_8c4ab1ec);

    fVar12 = SUB84(in_dr0, 0) * SUB84(dVar17, 0);
    dVar13 = (double)CONCAT44((int)((u64)in_dr0 >> 0x20), fVar12);
    dVar17 = (double)CONCAT44((float)((u64)dVar17 >> 0x20) - fVar12, SUB84(dVar17, 0));

    *(int *)pdVar2 = (int)((u64)dVar17 >> 0x20);

    *(double **)(puVar11 + -0xb8) = pdVar10;

    dVar17 = (double)CONCAT44(g_8c4ab1e4, g_8c4ab1e8);
    dVar13 = (double)CONCAT44((int)((u64)dVar13 >> 0x20), g_8c4ab1f0);

    dVar17 = (double)CONCAT44((float)((u64)dVar17 >> 0x20) * SUB84(dVar17, 0), SUB84(dVar17, 0));

    dVar17 = (double)CONCAT44((int)((u64)dVar17 >> 0x20), g_8c4ab1dc);

    fVar12 = SUB84(dVar13, 0) * SUB84(dVar17, 0);
    dVar13 = (double)CONCAT44((int)((u64)dVar13 >> 0x20), fVar12);
    dVar17 = (double)CONCAT44((float)((u64)dVar17 >> 0x20) - fVar12, SUB84(dVar17, 0));

    *(int *)pdVar10 = (int)((u64)dVar17 >> 0x20);

    *(double **)(puVar11 + -0xb4) = pdVar9;

    dVar17 = (double)CONCAT44(g_8c4ab1ec, g_8c4ab1dc);

    dVar17 = (double)CONCAT44((float)((u64)dVar17 >> 0x20) * SUB84(dVar17, 0), SUB84(dVar17, 0));

    dVar13 = (double)CONCAT44((int)((u64)dVar13 >> 0x20), g_8c4ab1e0);
    dVar17 = (double)CONCAT44((int)((u64)dVar17 >> 0x20), g_8c4ab1e8);

    pdVar2 = (double *)(puVar11 + -0x5c);
    dVar21 = (double)(in_dr4 & 0xffffffff);

    fVar12 = SUB84(dVar13, 0) * SUB84(dVar17, 0);
    dVar13 = (double)(u64)(u32)fVar12;
    dVar17 = (double)CONCAT44((float)((u64)dVar17 >> 0x20) - fVar12, SUB84(dVar17, 0));

    uVar1 = SUB84(dVar13, 0);
    uVar15 = (u32)((u64)dVar17 >> 0x20);

    *(u32 *)pdVar9 = uVar15;

    *(double **)(puVar11 + -0xc0) = pdVar2;

    uVar14 = *(u32 *)*(double **)(puVar11 + -0xbc);
    dVar17 = (double)CONCAT44(uVar15, uVar14);
    *(u32 *)pdVar2 = uVar14;

    pdVar2 = (double *)(puVar11 + -0x58);
    *(double **)(puVar11 + -0xbc) = pdVar2;

    uVar15 = *(u32 *)*(double **)(puVar11 + -0xb8);
    dVar17 = (double)CONCAT44((int)((u64)dVar17 >> 0x20), uVar15);
    *(u32 *)pdVar2 = uVar15;

    pdVar2 = (double *)(puVar11 + -0x54);
    *(double **)(puVar11 + -0xb8) = pdVar2;

    uVar15 = *(u32 *)*(double **)(puVar11 + -0xb4);
    dVar17 = (double)CONCAT44((int)((u64)dVar17 >> 0x20), uVar15);
    *(u32 *)pdVar2 = uVar15;
    *(u32 *)(puVar11 + -0x50) = 0;

    pdVar2 = (double *)(puVar11 + -0x4c);
    *(double **)(puVar11 + -0xb4) = pdVar2;

    dVar17 = (double)CONCAT44((int)((u64)dVar17 >> 0x20), g_8c4ab1dc);

    *(float *)pdVar2 = -SUB84(dVar17, 0);

    pdVar2 = (double *)(puVar11 + -0x48);
    *(double **)(puVar11 + -0xa4) = pdVar2;
    fVar12 = g_8c4ab1e0;

    *(float *)pdVar2 = -fVar12;

    pdVar2 = (double *)(puVar11 + -0x44);
    *(double **)(puVar11 + -0xa8) = pdVar2;
    fVar16 = g_8c4ab1e4;

    *(float *)pdVar2 = -fVar16;
    *(u32 *)(puVar11 + -0x40) = 0;

    pdVar2 = (double *)(puVar11 + -0x3c);
    *(double **)(puVar11 + -0xac) = pdVar2;

    *(u32 *)pdVar2 = g_8c4ab1e8;

    pdVar2 = (double *)(puVar11 + -0x38);
    *(double **)(puVar11 + -0xa0) = pdVar2;

    *(u32 *)pdVar2 = g_8c4ab1ec;

    pdVar2 = (double *)(puVar11 + -0x34);
    *(double **)(puVar11 + -0xb0) = pdVar2;

    *(u32 *)pdVar2 = g_8c4ab1f0;
    *(u32 *)(puVar11 + -0x30) = 0;
    *(u32 *)(puVar11 + -0x2c) = 0;

    ar5_00 = puVar11 + -0x9c;
    dVar17 = (double)CONCAT44((int)((u64)dVar17 >> 0x20), 0x3f800000);

    *(u32 *)(puVar11 + -0x28) = 0;
    *(u32 *)(puVar11 + -0x24) = 0;
    *(u32 *)(puVar11 + -0x20) = 0x3f800000;

    ninja_update_fields_255d6c(puVar11 + -0x5c, ar5_00, &g_8c4ab1f0, &g_8c4ab1ec, *(u32 *)(puVar11 + -0xc0));

    dVar13 = (double)CONCAT44(g_8c4ab15c, uVar1);
    dVar17 = (double)CONCAT44((int)((u64)dVar17 >> 0x20), *(u32 *)*(double **)(puVar11 + -0xbc));

    fVar12 = SUB84(dVar17, 0) * (float)((u64)dVar13 >> 0x20);

    uVar18 = CONCAT44((int)**(u64 **)(puVar11 + -0xc0), fVar12);
    fVar12 = SUB84(dVar13, 0);
    fVar16 = g_8c4ab158;

    uVar18 = (u64)(u32)(fVar16 * (float)(uVar18 >> 0x20) + (float)uVar18);

    dVar17 = (double)CONCAT44(*(u32 *)*(double **)(puVar11 + -0xb8), (int)uVar18);
    fVar16 = g_8c4ab160;

    pdVar2 = (double *)(puVar11 + -0x10);

    fVar19 = (float)((u64)dVar17 >> 0x20);
    dVar17 = (double)CONCAT44(fVar19, fVar16 * fVar19 + SUB84(dVar17, 0));

    *(int *)pdVar2 = SUB84(dVar17, 0);

    dVar13 = (double)CONCAT44(g_8c4ab15c, fVar12);
    dVar17 = (double)CONCAT44((int)((u64)dVar17 >> 0x20), *(u32 *)*(double **)(puVar11 + -0xa4));

    fVar12 = SUB84(dVar17, 0) * (float)((u64)dVar13 >> 0x20);

    uVar18 = CONCAT44((int)**(u64 **)(puVar11 + -0xb4), fVar12);
    fVar12 = SUB84(dVar13, 0);
    fVar16 = g_8c4ab158;

    uVar18 = (u64)(u32)(fVar16 * (float)(uVar18 >> 0x20) + (float)uVar18);

    dVar17 = (double)CONCAT44(*(u32 *)*(double **)(puVar11 + -0xa8), (int)uVar18);
    fVar16 = g_8c4ab160;

    fVar19 = (float)((u64)dVar17 >> 0x20);
    dVar17 = (double)CONCAT44(fVar19, fVar16 * fVar19 + SUB84(dVar17, 0));

    *(int *)(puVar11 + -0xc) = SUB84(dVar17, 0);

    dVar13 = (double)CONCAT44(g_8c4ab15c, fVar12);
    dVar17 = (double)CONCAT44((int)((u64)dVar17 >> 0x20), *(u32 *)*(double **)(puVar11 + -0xa0));

    fVar12 = SUB84(dVar17, 0) * (float)((u64)dVar13 >> 0x20);

    uVar18 = CONCAT44((int)**(u64 **)(puVar11 + -0xac), fVar12);
    fVar12 = g_8c4ab158;

    uVar18 = (u64)(u32)(fVar12 * (float)(uVar18 >> 0x20) + (float)uVar18);

    uVar18 = CONCAT44((int)**(u64 **)(puVar11 + -0xb0), (int)uVar18);
    fVar12 = g_8c4ab160;

    uVar18 = (u64)(u32)(fVar12 * (float)(uVar18 >> 0x20) + (float)uVar18);

    *(int *)(puVar11 + -8) = (int)uVar18;

    njUnitVector(pdVar2, ar5_00, ar6_00, ar7_00, *(u32 *)(puVar11 + -0xc0));
    uVar1 = ta_fifo_213f28(pdVar2);
    *(u32 *)(puVar11 + -0xc0) = (a2 >> 0xe & 3) << 1;
    uVar6 = a2 & 0x3fff;
    iVar4 = 0;
    iVar3 = 0;
    do {
        uVar15 = SUB84(dVar21, 0);
        iVar5 = (int)*a0;
        pdVar2 = (double *)(a0[1] * 0x10 + a1);
        if (iVar5 < 0) {
            iVar5 = -iVar5;
        }
        dVar17 = in_xd2;

        in_dr6 = (double)CONCAT44((int)((u64)in_dr6 >> 0x20), (float)(int)a0[2]);
        dVar17 = in_xd6;

        in_xd6 = dVar17;

        fVar12 = SUB84(in_dr6, 0) * in_fr15;

        dVar17 = in_xd2;

        dVar17 = (double)CONCAT44((float)(int)a0[3], SUB84(in_dr8, 0));

        dVar17 = (double)CONCAT44((float)((u64)dVar17 >> 0x20) * in_fr15, SUB84(dVar17, 0));

        uVar15 = *(u32 *)pdVar2;
        pdVar2 = (double *)((int)pdVar2 + 4);

        iVar4 = iVar4 + iVar5;
        iVar3 = iVar3 + iVar5;

        dVar13 = (double)CONCAT44(*(u32 *)pdVar2, fVar12);
        dVar20 = (double)CONCAT44(*(u32 *)((int)pdVar2 + 4), uVar15);

        iVar5 = iVar5 + -2;
        psVar7 = a0 + 5;
        pdVar2 = (double *)(a0[4] * 0x10 + a1);
        *(u32 *)((int)a3 + 0x1c) = uVar1;
        *(u32 *)(a3 + 3) = 0xff000000;

        *(int *)((int)a3 + 0x14) = (int)((u64)dVar17 >> 0x20);
        *(int *)(a3 + 2) = SUB84(dVar13, 0);
        *(int *)((int)a3 + 0xc) = (int)((u64)dVar20 >> 0x20);
        *(int *)(a3 + 1) = (int)((u64)dVar13 >> 0x20);
        pdVar9 = (double *)((int)a3 + 4);
        *(int *)pdVar9 = SUB84(dVar20, 0);

        *(u32 *)((int)pdVar9 + -4) = 0xe0000000;
        psVar8 = a0 + 6;
        pdVar9 = (double *)((int)pdVar9 + 0x1c);
        a0 = a0 + 7;
        dVar21 = in_xd2;

        dVar21 = (double)CONCAT44((float)(int)*psVar7, SUB84(dVar20, 0));

        dVar21 = (double)CONCAT44((float)((u64)dVar21 >> 0x20) * in_fr15, SUB84(dVar21, 0));

        dVar20 = in_xd2;

        dVar20 = (double)CONCAT44((float)(int)*psVar8, SUB84(dVar13, 0));

        in_dr6 = (double)CONCAT44((float)((u64)dVar20 >> 0x20) * in_fr15, SUB84(dVar20, 0));

        in_dr8 = (double)CONCAT44(*(u32 *)pdVar2, SUB84(dVar17, 0));
        dVar21 = (double)CONCAT44((int)((u64)dVar21 >> 0x20), *(u32 *)((int)pdVar2 + 4));
        in_dr6 = (double)CONCAT44((int)((u64)in_dr6 >> 0x20), *(u32 *)(pdVar2 + 1));

        do {
            psVar7 = a0 + 1;
            pdVar2 = (double *)(*a0 * 0x10 + a1);
            *(u32 *)((int)pdVar9 + 0x1c) = uVar1;
            *(u32 *)(pdVar9 + 3) = 0xff000000;

            *(int *)((int)pdVar9 + 0x14) = (int)((u64)in_dr6 >> 0x20);
            *(int *)(pdVar9 + 2) = (int)((u64)dVar21 >> 0x20);
            *(int *)((int)pdVar9 + 0xc) = SUB84(in_dr6, 0);
            *(int *)(pdVar9 + 1) = SUB84(dVar21, 0);
            pdVar10 = (double *)((int)pdVar9 + 4);
            *(int *)pdVar10 = (int)((u64)in_dr8 >> 0x20);

            *(u32 *)((int)pdVar10 + -4) = 0xe0000000;
            psVar8 = a0 + 2;
            pdVar9 = (double *)((int)pdVar10 + 0x1c);
            a0 = (short *)((int)a0 + *(int *)(puVar11 + -0xc0) + 6);
            dVar17 = in_xd2;

            dVar17 = (double)CONCAT44((float)(int)*psVar7, SUB84(dVar21, 0));

            dVar21 = (double)CONCAT44((float)((u64)dVar17 >> 0x20) * in_fr15, SUB84(dVar17, 0));

            dVar17 = in_xd2;

            dVar17 = (double)CONCAT44((float)(int)*psVar8, SUB84(in_dr6, 0));

            in_dr6 = (double)CONCAT44((float)((u64)dVar17 >> 0x20) * in_fr15, SUB84(dVar17, 0));

            in_dr8 = (double)CONCAT44(*(u32 *)pdVar2, SUB84(in_dr8, 0));
            pdVar2 = (double *)((int)pdVar2 + 4);

            iVar5 = iVar5 + -1;

            dVar21 = (double)CONCAT44((int)((u64)dVar21 >> 0x20), *(u32 *)pdVar2);
            in_dr6 = (double)CONCAT44((int)((u64)in_dr6 >> 0x20), *(u32 *)((int)pdVar2 + 4));

        } while (iVar5 != 0);
        *(u32 *)(pdVar10 + 7) = uVar1;
        *(u32 *)((int)pdVar10 + 0x34) = 0xff000000;

        *(int *)(pdVar10 + 6) = (int)((u64)in_dr6 >> 0x20);
        *(int *)((int)pdVar10 + 0x2c) = (int)((u64)dVar21 >> 0x20);
        *(int *)(pdVar10 + 5) = SUB84(in_dr6, 0);
        *(int *)((int)pdVar10 + 0x24) = SUB84(dVar21, 0);
        pdVar10 = pdVar10 + 4;
        *(int *)pdVar10 = (int)((u64)in_dr8 >> 0x20);

        *(u32 *)((int)pdVar10 + -4) = 0xf0000000;
        uVar6 = uVar6 - 1;
        a3 = (double *)((int)pdVar10 + 0x1c);
    } while (uVar6 != 0);
    g_8c4aa520 = g_8c4aa520 + iVar4;
    g_8c4aa51c = g_8c4aa51c + iVar3;
    return a3;
}

/*
 * gfxlib_uses_njUnitVector_2166e8  0x8c2166e8
 * area name: in the gfxlib library code range; behaviour name: its main named callee is njUnitVector
 */
double *gfxlib_uses_njUnitVector_2166e8(u32 a0, u32 a1, u32 a2, double *a3) {
    short sVar1;
    short sVar2;
    bool bVar3;
    u32 uVar4;
    double *pdVar5;
    short *psVar6;
    u8 *ar5_00;
    double *pdVar7;
    u8 *ar6_00;
    u8 *ar7_00;
    int iVar8;
    int iVar9;
    int iVar10;
    double *pdVar11;
    short *psVar12;
    int iVar13;
    double *pdVar14;
    double *pdVar15;
    float fVar16;
    double in_dr0;
    u32 uVar18;
    u32 uVar19;
    u32 uVar20;
    float fVar21;
    u64 in_dr2;
    double dVar22;
    u64 uVar23;
    double dVar24;
    u64 in_dr4;
    u32 uVar26;
    double dVar25;
    double in_dr6;
    double dVar27;
    double in_dr8;
    u32 in_fr11;
    u32 in_fr10;
    double in_dr12;
    float fVar28;
    double in_dr14;
    double in_xd2;
    double in_xd4;
    double in_xd6;
    double in_xd12;
    double in_xd14;
    bool bVar29;
    u32 in_PR;
    u8 auStack_3c[16];
    double dStack_2c;
    u64 uStack_24;
    double dVar17;

    uVar19 = (u32)((u64)in_dr14 >> 0x20);
    uVar20 = (u32)((u64)in_dr12 >> 0x20);

    uStack_24 = (double)CONCAT44(SUB84(in_dr14, 0), (u32)uStack_24);
    uStack_24._0_4_ = uVar19;
    pdVar15 = &dStack_2c;
    dStack_2c = (double)CONCAT44(SUB84(in_dr12, 0), uVar20);

    *(u32 *)((int)pdVar15 + -4) = in_PR;
    *(u32 *)((int)pdVar15 + -0xd0) = a0;
    *(u32 *)((int)pdVar15 + -200) = a1;
    *(u32 *)((int)pdVar15 + -0xc0) = a2;
    uVar26 = (u32)(in_dr4 >> 0x20);
    uVar18 = (u32)((u64)in_dr0 >> 0x20);

    *(u32 *)((int)pdVar15 + -0xcc) = uVar26;
    *(int *)((int)pdVar15 + -0x60) = SUB84(in_dr14, 0);
    *(u32 *)((int)pdVar15 + -100) = uVar19;
    *(int *)((int)pdVar15 + -0x68) = SUB84(in_dr12, 0);
    *(u32 *)((int)pdVar15 + -0x6c) = uVar20;
    *(u32 *)((int)pdVar15 + -0x70) = in_fr11;
    *(u32 *)((int)pdVar15 + -0x74) = in_fr10;
    *(int *)((int)pdVar15 + -0x78) = SUB84(in_dr8, 0);
    *(int *)((int)pdVar15 + -0x7c) = (int)((u64)in_dr8 >> 0x20);
    *(int *)((int)pdVar15 + -0x80) = SUB84(in_dr6, 0);
    *(int *)((int)pdVar15 + -0x84) = (int)((u64)in_dr6 >> 0x20);
    *(int *)((int)pdVar15 + -0x88) = (int)in_dr4;
    *(u32 *)((int)pdVar15 + -0x8c) = uVar26;
    *(int *)((int)pdVar15 + -0x90) = (int)in_dr2;
    *(int *)((int)pdVar15 + -0x94) = (int)((u64)in_dr2 >> 0x20);
    *(int *)((int)pdVar15 + -0x98) = SUB84(in_dr0, 0);
    *(u32 *)((int)pdVar15 + -0x9c) = uVar18;

    pdVar5 = (double *)((int)pdVar15 + -0x1c);
    ar6_00 = &g_8c4ab1f0;
    ar7_00 = &g_8c4ab1ec;
    pdVar11 = (double *)((int)pdVar15 + -0x14);
    *(double **)((int)pdVar15 + -0xbc) = pdVar5;

    dVar22 = (double)CONCAT44(g_8c4ab1e0, g_8c4ab1f0);
    in_dr0 = (double)CONCAT44(uVar18, g_8c4ab1e4);

    pdVar14 = (double *)((int)pdVar15 + -0x18);

    dVar22 = (double)CONCAT44((float)((u64)dVar22 >> 0x20) * SUB84(dVar22, 0), SUB84(dVar22, 0));

    dVar22 = (double)CONCAT44((int)((u64)dVar22 >> 0x20), g_8c4ab1ec);

    fVar16 = SUB84(in_dr0, 0) * SUB84(dVar22, 0);
    dVar17 = (double)CONCAT44((int)((u64)in_dr0 >> 0x20), fVar16);
    dVar22 = (double)CONCAT44((float)((u64)dVar22 >> 0x20) - fVar16, SUB84(dVar22, 0));

    *(int *)pdVar5 = (int)((u64)dVar22 >> 0x20);

    *(double **)((int)pdVar15 + -0xb8) = pdVar14;

    dVar22 = (double)CONCAT44(g_8c4ab1e4, g_8c4ab1e8);
    dVar17 = (double)CONCAT44((int)((u64)dVar17 >> 0x20), g_8c4ab1f0);

    dVar22 = (double)CONCAT44((float)((u64)dVar22 >> 0x20) * SUB84(dVar22, 0), SUB84(dVar22, 0));

    dVar22 = (double)CONCAT44((int)((u64)dVar22 >> 0x20), g_8c4ab1dc);

    fVar16 = SUB84(dVar17, 0) * SUB84(dVar22, 0);
    dVar17 = (double)CONCAT44((int)((u64)dVar17 >> 0x20), fVar16);
    dVar22 = (double)CONCAT44((float)((u64)dVar22 >> 0x20) - fVar16, SUB84(dVar22, 0));

    *(int *)pdVar14 = (int)((u64)dVar22 >> 0x20);

    *(double **)((int)pdVar15 + -0xb4) = pdVar11;

    dVar22 = (double)CONCAT44(g_8c4ab1ec, g_8c4ab1dc);
    dVar17 = (double)CONCAT44((int)((u64)dVar17 >> 0x20), g_8c4ab1e0);

    pdVar5 = (double *)((int)pdVar15 + -0x5c);

    dVar22 = (double)CONCAT44((float)((u64)dVar22 >> 0x20) * SUB84(dVar22, 0), SUB84(dVar22, 0));

    dVar22 = (double)CONCAT44((int)((u64)dVar22 >> 0x20), g_8c4ab1e8);

    dVar17 = (double)CONCAT44((int)((u64)dVar17 >> 0x20), SUB84(dVar17, 0) * SUB84(dVar22, 0));

    dVar25 = (double)(in_dr4 & 0xffffffff);

    dVar22 = (double)CONCAT44((float)((u64)dVar22 >> 0x20) - SUB84(dVar17, 0), SUB84(dVar22, 0));

    uVar20 = (u32)((u64)dVar22 >> 0x20);

    *(u32 *)pdVar11 = uVar20;

    *(double **)((int)pdVar15 + -0xc4) = pdVar5;

    uVar19 = *(u32 *)*(double **)((int)pdVar15 + -0xbc);
    dVar22 = (double)CONCAT44(uVar20, uVar19);
    *(u32 *)pdVar5 = uVar19;

    pdVar5 = (double *)((int)pdVar15 + -0x58);
    *(double **)((int)pdVar15 + -0xbc) = pdVar5;

    uVar20 = *(u32 *)*(double **)((int)pdVar15 + -0xb8);
    dVar22 = (double)CONCAT44((int)((u64)dVar22 >> 0x20), uVar20);
    *(u32 *)pdVar5 = uVar20;

    pdVar5 = (double *)((int)pdVar15 + -0x54);
    *(double **)((int)pdVar15 + -0xb8) = pdVar5;

    uVar20 = *(u32 *)*(double **)((int)pdVar15 + -0xb4);
    dVar22 = (double)CONCAT44((int)((u64)dVar22 >> 0x20), uVar20);
    *(u32 *)pdVar5 = uVar20;
    *(u32 *)((int)pdVar15 + -0x50) = 0;

    pdVar5 = (double *)((int)pdVar15 + -0x4c);
    *(double **)((int)pdVar15 + -0xb4) = pdVar5;

    dVar22 = (double)CONCAT44((int)((u64)dVar22 >> 0x20), g_8c4ab1dc);

    *(float *)pdVar5 = -SUB84(dVar22, 0);

    pdVar5 = (double *)((int)pdVar15 + -0x48);
    *(double **)((int)pdVar15 + -0xa0) = pdVar5;
    fVar16 = g_8c4ab1e0;

    *(float *)pdVar5 = -fVar16;

    pdVar5 = (double *)((int)pdVar15 + -0x44);
    *(double **)((int)pdVar15 + -0xa4) = pdVar5;
    fVar28 = g_8c4ab1e4;

    *(float *)pdVar5 = -fVar28;
    *(u32 *)((int)pdVar15 + -0x40) = 0;

    pdVar5 = (double *)((int)pdVar15 + -0x3c);
    *(double **)((int)pdVar15 + -0xac) = pdVar5;

    *(u32 *)pdVar5 = g_8c4ab1e8;

    pdVar5 = (double *)((int)pdVar15 + -0x38);
    *(double **)((int)pdVar15 + -0xa8) = pdVar5;

    *(u32 *)pdVar5 = g_8c4ab1ec;

    pdVar5 = (double *)((int)pdVar15 + -0x34);
    *(double **)((int)pdVar15 + -0xb0) = pdVar5;

    *(u32 *)pdVar5 = g_8c4ab1f0;
    *(u32 *)((int)pdVar15 + -0x30) = 0;
    *(u32 *)((int)pdVar15 + -0x2c) = 0;

    ar5_00 = (u8 *)((int)pdVar15 + -0x9c);
    dVar22 = (double)CONCAT44((int)((u64)dVar22 >> 0x20), 0x3f800000);

    *(u32 *)((int)pdVar15 + -0x28) = 0;
    *(u32 *)((int)pdVar15 + -0x24) = 0;
    *(u32 *)((int)pdVar15 + -0x20) = 0x3f800000;

    ninja_update_fields_255d6c((u8 *)((int)pdVar15 + -0x5c), ar5_00, &g_8c4ab1f0, &g_8c4ab1ec,
                               *(u32 *)((int)pdVar15 + -0xd0));

    dVar17 = (double)CONCAT44(g_8c4ab15c, SUB84(dVar17, 0));
    dVar22 = (double)CONCAT44((int)((u64)dVar22 >> 0x20), *(u32 *)*(double **)((int)pdVar15 + -0xbc));

    fVar16 = SUB84(dVar22, 0) * (float)((u64)dVar17 >> 0x20);

    uVar23 = CONCAT44((int)**(u64 **)((int)pdVar15 + -0xc4), fVar16);
    fVar16 = SUB84(dVar17, 0);
    fVar28 = g_8c4ab158;

    uVar23 = (u64)(u32)(fVar28 * (float)(uVar23 >> 0x20) + (float)uVar23);

    dVar22 = (double)CONCAT44(*(u32 *)*(double **)((int)pdVar15 + -0xb8), (int)uVar23);
    fVar28 = g_8c4ab160;

    pdVar5 = (double *)((int)pdVar15 + -0x10);

    fVar21 = (float)((u64)dVar22 >> 0x20);
    dVar22 = (double)CONCAT44(fVar21, fVar28 * fVar21 + SUB84(dVar22, 0));

    *(int *)pdVar5 = SUB84(dVar22, 0);

    dVar17 = (double)CONCAT44(g_8c4ab15c, fVar16);
    dVar22 = (double)CONCAT44((int)((u64)dVar22 >> 0x20), *(u32 *)*(double **)((int)pdVar15 + -0xa0));

    fVar16 = SUB84(dVar22, 0) * (float)((u64)dVar17 >> 0x20);

    uVar23 = CONCAT44((int)**(u64 **)((int)pdVar15 + -0xb4), fVar16);
    fVar16 = SUB84(dVar17, 0);
    fVar28 = g_8c4ab158;

    uVar23 = (u64)(u32)(fVar28 * (float)(uVar23 >> 0x20) + (float)uVar23);

    dVar22 = (double)CONCAT44(*(u32 *)*(double **)((int)pdVar15 + -0xa4), (int)uVar23);
    fVar28 = g_8c4ab160;

    fVar21 = (float)((u64)dVar22 >> 0x20);
    dVar22 = (double)CONCAT44(fVar21, fVar28 * fVar21 + SUB84(dVar22, 0));

    *(int *)((int)pdVar15 + -0xc) = SUB84(dVar22, 0);

    dVar17 = (double)CONCAT44(g_8c4ab15c, fVar16);
    dVar22 = (double)CONCAT44((int)((u64)dVar22 >> 0x20), *(u32 *)*(double **)((int)pdVar15 + -0xa8));

    fVar16 = SUB84(dVar22, 0) * (float)((u64)dVar17 >> 0x20);

    uVar23 = CONCAT44((int)**(u64 **)((int)pdVar15 + -0xac), fVar16);
    fVar16 = SUB84(dVar17, 0);
    fVar28 = g_8c4ab158;

    uVar23 = (u64)(u32)(fVar28 * (float)(uVar23 >> 0x20) + (float)uVar23);

    uVar23 = CONCAT44((int)**(u64 **)((int)pdVar15 + -0xb0), (int)uVar23);
    dVar22 = (double)CONCAT44(g_8c4ab160, fVar16);

    uVar23 = (u64)(u32)((float)((u64)dVar22 >> 0x20) * (float)(uVar23 >> 0x20) + (float)uVar23);

    *(int *)((int)pdVar15 + -8) = (int)uVar23;

    njUnitVector(pdVar5, ar5_00, ar6_00, ar7_00, *(u32 *)((int)pdVar15 + -0xd0));
    g_8c4aa2a4 = 0xff000000;
    g_8c4aa2a0 = ta_fifo_213f28(pdVar5);
    uVar4 = *(u32 *)((int)pdVar15 + -0xc0);
    iVar9 = 0;
    iVar10 = 0;
    *(u32 *)((int)pdVar15 + -0xc0) = *(u32 *)((int)pdVar15 + -0xc0) & 0x3fff;
    *(u32 *)((int)pdVar15 + -0xc4) = (uVar4 >> 0xe & 3) << 1;
    do {
        psVar12 = *(short **)((int)pdVar15 + -0xd0);
        *(short **)((int)pdVar15 + -0xd0) = psVar12 + 1;
        psVar6 = *(short **)((int)pdVar15 + -0xd0);
        iVar13 = (int)*psVar12;
        *(short **)((int)pdVar15 + -0xd0) = psVar6 + 1;
        pdVar5 = (double *)(*psVar6 * 0x10 + *(int *)((int)pdVar15 + -200));
        if (iVar13 < 0) {
            iVar13 = -iVar13;
        }
        psVar6 = *(short **)((int)pdVar15 + -0xd0);
        iVar10 = iVar10 + iVar13;
        *(short **)((int)pdVar15 + -0xd0) = psVar6 + 1;
        sVar1 = *psVar6;
        iVar8 = 0;

        in_dr6 = (double)CONCAT44(*(u32 *)((int)pdVar15 + -0xcc), SUB84(in_dr6, 0));

        iVar13 = iVar13 + -2;
        psVar6 = *(short **)((int)pdVar15 + -0xd0);
        *(short **)((int)pdVar15 + -0xd0) = psVar6 + 1;
        sVar2 = *psVar6;
        psVar6 = *(short **)((int)pdVar15 + -0xd0);
        dVar17 = in_xd2;

        dVar17 = (double)CONCAT44((float)(int)sVar1, SUB84(dVar25, 0));

        *(short **)((int)pdVar15 + -0xd0) = psVar6 + 1;
        fVar16 = (float)((u64)in_dr6 >> 0x20);

        dVar17 = (double)CONCAT44((float)((u64)dVar17 >> 0x20) * fVar16, SUB84(dVar17, 0));

        pdVar11 = (double *)(*psVar6 * 0x10 + *(int *)((int)pdVar15 + -200));
        dVar25 = in_xd2;

        dVar17 = (double)CONCAT44((int)((u64)dVar17 >> 0x20), (float)(int)sVar2);
        dVar25 = in_xd4;

        in_xd4 = dVar25;

        dVar25 = (double)CONCAT44((int)((u64)dVar17 >> 0x20), SUB84(dVar17, 0) * fVar16);

        psVar6 = *(short **)((int)pdVar15 + -0xd0);
        *(short **)((int)pdVar15 + -0xd0) = psVar6 + 1;
        sVar1 = *psVar6;
        psVar6 = *(short **)((int)pdVar15 + -0xd0);
        *(short **)((int)pdVar15 + -0xd0) = psVar6 + 1;
        dVar17 = in_xd2;

        in_dr14 = (double)CONCAT44((int)((u64)in_dr14 >> 0x20), (float)(int)sVar1);
        dVar17 = in_xd14;

        fVar28 = SUB84(in_dr14, 0) * fVar16;

        dVar24 = in_xd2;

        dVar24 = (double)CONCAT44((float)(int)*psVar6, fVar28);

        in_dr14 = (double)CONCAT44((float)((u64)dVar24 >> 0x20) * fVar16, SUB84(dVar24, 0));

        do {
            psVar6 = *(short **)((int)pdVar15 + -0xd0);
            *(short **)((int)pdVar15 + -0xd0) = psVar6 + 1;
            pdVar14 = (double *)(*psVar6 * 0x10 + *(int *)((int)pdVar15 + -200));
            psVar6 = *(short **)((int)pdVar15 + -0xd0);
            *(short **)((int)pdVar15 + -0xd0) = psVar6 + 1;

            fVar16 = *(float *)((int)pdVar15 + -0xcc);

            psVar12 = *(short **)((int)pdVar15 + -0xd0);
            fVar28 = (float)(int)*psVar6;
            *(short **)((int)pdVar15 + -0xd0) = psVar12 + 1;

            in_dr6 = (double)CONCAT44(*(u32 *)(pdVar5 + 1), SUB84(in_dr6, 0));
            in_dr12 = (double)CONCAT44((int)((u64)in_dr12 >> 0x20), fVar28);

            fVar28 = SUB84(in_dr12, 0) * fVar16;

            fVar21 = (float)(int)*psVar12;
            dVar24 = in_xd2;

            dVar24 = (double)CONCAT44(fVar21, fVar28);

            in_dr12 = (double)CONCAT44((float)((u64)dVar24 >> 0x20) * fVar16, SUB84(dVar24, 0));

            dVar24 = (double)((u64)(u32)fVar16 << 0x20);
            fVar16 = (float)((u64)in_dr6 >> 0x20);

            bVar29 = 0.0 < fVar16;

            bVar3 = false;
            if (bVar29) {

                dVar24 = (double)((u64) * (u32 *)(pdVar11 + 1) << 0x20);

                if ((float)((u64)dVar24 >> 0x20) <= SUB84(dVar24, 0))
                    goto LAB_8c2169e6;

                fVar28 = *(float *)(pdVar14 + 1);

                dVar24 = (double)((u64)(u32)fVar28 << 0x20);
                if (fVar28 <= 0.0)
                    goto LAB_8c2169e6;
                dVar24 = (double)CONCAT44(fVar28, 0x3f800000);

                bVar29 = fVar16 < 1.0;

                if (!bVar29)
                    goto LAB_8c2169e6;

                fVar16 = *(float *)(pdVar11 + 1);

                dVar24 = (double)CONCAT44(fVar16, 0x3f800000);
                if (1.0 <= fVar16)
                    goto LAB_8c2169e6;

                fVar16 = *(float *)(pdVar14 + 1);

                dVar24 = (double)CONCAT44(fVar16, 0x3f800000);
                if (1.0 <= fVar16)
                    goto LAB_8c2169e6;
            } else {
            LAB_8c2169e6:
                bVar3 = true;
            }
            uVar4 = (u32)((u64)in_dr14 >> 0x20);
            if (bVar3) {
                if (iVar8 != 0) {

                    in_dr8 = (double)CONCAT44(*(u32 *)pdVar11, SUB84(in_dr8, 0));
                    pdVar7 = (double *)((int)pdVar11 + 4);

                    in_dr6 = *pdVar7;
                    *(u32 *)((int)a3 + 0x1c) = g_8c4aa2a0;
                    *(u32 *)(a3 + 3) = g_8c4aa2a4;

                    *(u32 *)((int)a3 + 0x14) = uVar4;
                    *(int *)(a3 + 2) = SUB84(in_dr14, 0);
                    *(int *)((int)a3 + 0xc) = (int)((u64)in_dr6 >> 0x20);
                    *(int *)(a3 + 1) = SUB84(in_dr6, 0);
                    pdVar7 = (double *)((int)a3 + 4);
                    *(int *)pdVar7 = (int)((u64)in_dr8 >> 0x20);

                    *(u32 *)((int)pdVar7 + -4) = 0xf0000000;
                    iVar9 = iVar9 + iVar8 + 1;
                    iVar8 = 0;
                    a3 = (double *)((int)pdVar7 + 0x1c);
                }
            } else {
                if (iVar8 == 0) {

                    in_dr8 = (double)CONCAT44(*(u32 *)pdVar5, SUB84(in_dr8, 0));
                    pdVar7 = (double *)((int)pdVar5 + 4);

                    dVar27 = *pdVar7;
                    *(u32 *)((int)a3 + 0x1c) = g_8c4aa2a0;
                    *(u32 *)(a3 + 3) = g_8c4aa2a4;

                    *(int *)((int)a3 + 0x14) = SUB84(dVar25, 0);
                    *(int *)(a3 + 2) = (int)((u64)dVar25 >> 0x20);
                    *(int *)((int)a3 + 0xc) = (int)((u64)dVar27 >> 0x20);
                    *(int *)(a3 + 1) = SUB84(dVar27, 0);
                    pdVar7 = (double *)((int)a3 + 4);
                    *(int *)pdVar7 = (int)((u64)in_dr8 >> 0x20);

                    *(u32 *)((int)pdVar7 + -4) = 0xe0000000;
                    iVar8 = 1;
                    a3 = (double *)((int)pdVar7 + 0x1c);
                }

                in_dr8 = (double)CONCAT44(*(u32 *)((int)pdVar11 + 4), SUB84(in_dr8, 0));
                in_dr6 = (double)CONCAT44(*(u32 *)(pdVar11 + 1), *(u32 *)pdVar11);

                *(u32 *)((int)a3 + 0x1c) = g_8c4aa2a0;
                *(u32 *)(a3 + 3) = g_8c4aa2a4;

                *(u32 *)((int)a3 + 0x14) = uVar4;
                *(int *)(a3 + 2) = SUB84(in_dr14, 0);
                *(int *)((int)a3 + 0xc) = (int)((u64)in_dr6 >> 0x20);
                *(int *)(a3 + 1) = (int)((u64)in_dr8 >> 0x20);
                pdVar7 = (double *)((int)a3 + 4);
                *(int *)pdVar7 = SUB84(in_dr6, 0);

                *(u32 *)((int)pdVar7 + -4) = 0xe0000000;
                a3 = (double *)((int)pdVar7 + 0x1c);
                iVar8 = iVar8 + 1;
            }
            if (bVar3) {

                in_dr6 = (double)CONCAT44(*(u32 *)(pdVar5 + 1), SUB84(in_dr6, 0));

                fVar16 = (float)((u64)in_dr6 >> 0x20);

                bVar29 = 0.0 < fVar16;

                if (bVar29) {

                    bVar29 = fVar16 < 1.0;

                    if (!bVar29)
                        goto LAB_8c216aa8;
                LAB_8c216ac8:
                    in_dr6 = dVar17;
                    dVar24 = in_dr14;
                    in_dr8 = in_xd12;

                    in_dr6 = (double)(u64)uVar4;
                    dVar24 = in_xd6;
                    in_dr8 = (double)((u64)in_dr12 >> 0x20);

                    in_xd6 = dVar24;
                    a3 = (double *)gfxlib_fill_loop_216b84(pdVar5, pdVar11, pdVar14, a3);
                } else {
                LAB_8c216aa8:

                    fVar16 = *(float *)(pdVar11 + 1);

                    if (0.0 < fVar16) {

                        dVar22 = (double)CONCAT44((int)((u64)dVar22 >> 0x20), *(u32 *)(pdVar11 + 1));

                        bVar29 = SUB84(dVar22, 0) < 1.0;

                        if (bVar29)
                            goto LAB_8c216ac8;
                    }

                    fVar16 = *(float *)(pdVar14 + 1);

                    if (0.0 < fVar16) {

                        dVar22 = (double)CONCAT44((int)((u64)dVar22 >> 0x20), *(u32 *)(pdVar14 + 1));

                        bVar29 = SUB84(dVar22, 0) < 1.0;

                        if (bVar29)
                            goto LAB_8c216ac8;
                    }
                }
            }
            *(int *)((int)pdVar15 + -0xd0) = *(int *)((int)pdVar15 + -0xd0) + *(int *)((int)pdVar15 + -0xc4);
            dVar24 = in_dr14;
            in_xd14 = in_xd12;

            dVar24 = (double)CONCAT44((int)((u64)in_dr14 >> 0x20), SUB84(in_dr12, 0));
            in_xd14 = dVar17;
            dVar17 = (double)CONCAT44(SUB84(in_dr14, 0), SUB84(dVar25, 0));

            iVar13 = iVar13 + -1;
            uVar20 = (u32)((u64)in_dr12 >> 0x20);
            in_dr14 = in_dr12;
            dVar25 = dVar17;

            in_dr14 = (double)CONCAT44(uVar20, SUB84(dVar24, 0));
            dVar25 = (double)CONCAT44((int)((u64)dVar17 >> 0x20), (int)((u64)dVar24 >> 0x20));
            dVar24 = in_xd4;

            in_xd4 = dVar24;
            pdVar5 = pdVar11;
            pdVar11 = pdVar14;
            dVar17 = in_xd14;
        } while (iVar13 != 0);
        if (iVar8 != 0) {

            in_dr6 = (double)CONCAT44(*(u32 *)((int)pdVar14 + 4), SUB84(in_dr6, 0));
            dVar25 = (double)CONCAT44(*(u32 *)(pdVar14 + 1), *(u32 *)pdVar14);

            *(u32 *)((int)a3 + 0x1c) = g_8c4aa2a0;
            *(u32 *)(a3 + 3) = g_8c4aa2a4;

            *(u32 *)((int)a3 + 0x14) = uVar20;
            *(int *)(a3 + 2) = SUB84(in_dr12, 0);
            *(int *)((int)a3 + 0xc) = (int)((u64)dVar25 >> 0x20);
            *(int *)(a3 + 1) = (int)((u64)in_dr6 >> 0x20);
            pdVar5 = (double *)((int)a3 + 4);
            *(int *)pdVar5 = SUB84(dVar25, 0);

            *(u32 *)((int)pdVar5 + -4) = 0xf0000000;
            iVar9 = iVar9 + iVar8 + 1;
            a3 = (double *)((int)pdVar5 + 0x1c);
        }
        iVar13 = *(int *)((int)pdVar15 + -0xc0);
        *(int *)((int)pdVar15 + -0xc0) = iVar13 + -1;
        if (iVar13 + -1 == 0) {
            g_8c4aa520 = g_8c4aa520 + iVar9;
            g_8c4aa51c = g_8c4aa51c + iVar10;
            return a3;
        }
    } while (true);
}

/*
 * gfxlib_fill_loop_216b84  0x8c216b84
 * area name: in the gfxlib library code range; behaviour name: a loop that writes memory
 * called by: gfxlib_uses_njUnitVector_2166e8
 */
u64 *gfxlib_fill_loop_216b84(double *a0, double *a1, double *a2, u64 *a3) {
    int iVar1;
    int iVar2;
    u32 *puVar3;
    u32 *puVar4;
    u32 uVar5;
    int iVar6;
    double *pdVar7;
    u64 *puVar8;
    int iVar9;
    int iVar10;
    int iVar11;
    u64 *puVar12;
    u8 *puVar13;
    u8 *puVar14;
    double in_dr0;
    float fVar15;
    float fVar16;
    float fVar17;
    float fVar18;
    double dVar19;
    u64 uVar20;
    u64 uVar21;
    double in_dr4;
    double dVar22;
    double in_dr6;
    double dVar23;
    u32 in_fr9;
    u32 in_fr8;
    u32 in_fr11;
    u32 uVar25;
    double dVar24;
    u64 in_dr12;
    double dVar26;
    double dVar27;
    float fVar28;
    double in_xd4;
    u64 in_xd12;
    u64 uVar29;
    u8 auStack_24[8];
    u8 auStack_1c[8];

    uVar5 = 0xe0000000;
    puVar4 = 0x8c4aa2a4;
    puVar3 = 0x8c4aa2a0;

    puVar13 = auStack_1c;

    iVar6 = (int)(int)0xffffff04;

    *(int *)(puVar13 + -4) = (int)in_dr12;
    puVar14 = puVar13 + -8;
    *(int *)(puVar13 + -8) = (int)((u64)in_dr12 >> 0x20);

    if ((g_8c4aa4f0 & 0x10000) == 0) {

        uVar25 = *(u32 *)0x8c4aa4a8;
        dVar26 = (double)CONCAT44(*(u32 *)(0x8c4aa4a8 + 2), (int)in_dr12);
        dVar19 = (double)CONCAT44(*(u32 *)0x8c4aa4e0, *(u32 *)0x8c4aa4dc);
        dVar27 = (double)CONCAT44(*(u32 *)((int)0x8c4aa4a8 + 0xc), uVar25);
        uVar29 = CONCAT44(uVar25, in_fr11);

        dVar27 = (double)CONCAT44((int)((u64)dVar27 >> 0x20), SUB84(dVar27, 0) * SUB84(dVar19, 0));

        dVar26 = (double)CONCAT44((int)((u64)dVar26 >> 0x20), uVar25);
        uVar29 = in_xd12;

        dVar26 = (double)CONCAT44((int)((u64)dVar26 >> 0x20), SUB84(dVar26, 0) * (float)((u64)dVar19 >> 0x20));

        dVar19 = (double)(u64) * (u32 *)(a0 + 1);

        fVar17 = SUB84(dVar19, 0);

        dVar19 = (double)CONCAT44(1.0 / fVar17, fVar17);
        dVar24 = (double)CONCAT44(1.0 / SUB84(dVar27, 0), 1.0 / SUB84(dVar26, 0));

        iVar1 = 0x90 + iVar6;

        *(int *)(puVar14 + iVar1 + 0x20) = (int)((u64)dVar19 >> 0x20);
        *(int *)(puVar14 + iVar1 + 8) = (int)((u64)in_dr4 >> 0x20);
        *(int *)(puVar14 + iVar1 + 4) = SUB84(in_dr4, 0);
        *(u32 *)(puVar14 + iVar1 + 0x14) = *(u32 *)a0;
        *(u32 *)(puVar14 + iVar1 + 0x10) = *(u32 *)((int)a0 + 4);
        *(u32 *)(puVar14 + iVar1 + 0xc) = *(u32 *)(a0 + 1);
        dVar19 = (double)CONCAT44(*(u32 *)(puVar14 + iVar1 + 0x20), *(u32 *)a0);

        fVar28 = (float)((u64)dVar27 >> 0x20);
        fVar17 = (float)((u64)dVar24 >> 0x20);

        fVar15 = (SUB84(dVar19, 0) - fVar28) * (float)((u64)dVar19 >> 0x20) * fVar17;

        *(float *)(puVar14 + iVar1 + 0x18) = fVar15;
        dVar19 = (double)CONCAT44(*(u32 *)(puVar14 + iVar1 + 0x20), *(u32 *)((int)a0 + 4));

        fVar15 = (float)((u64)dVar26 >> 0x20);

        fVar16 = (SUB84(dVar19, 0) - fVar15) * (float)((u64)dVar19 >> 0x20);

        fVar18 = SUB84(dVar24, 0);

        dVar19 = (double)CONCAT44(0x3f800000, fVar16 * fVar18);

        *(int *)(puVar14 + iVar1 + 0x1c) = SUB84(dVar19, 0);
        dVar19 = (double)CONCAT44((int)((u64)dVar19 >> 0x20), *(u32 *)(a1 + 1));

        dVar19 = (double)CONCAT44((float)((u64)dVar19 >> 0x20) / SUB84(dVar19, 0), SUB84(dVar19, 0));

        *(int *)(puVar14 + iVar1 + 0x44) = (int)((u64)dVar19 >> 0x20);
        *(int *)(puVar14 + iVar1 + 0x2c) = (int)((u64)in_dr6 >> 0x20);
        *(int *)(puVar14 + iVar1 + 0x28) = SUB84(in_dr6, 0);
        *(u32 *)(puVar14 + iVar1 + 0x38) = *(u32 *)a1;
        *(u32 *)(puVar14 + iVar1 + 0x34) = *(u32 *)((int)a1 + 4);
        *(u32 *)(puVar14 + iVar1 + 0x30) = *(u32 *)(a1 + 1);
        dVar19 = (double)CONCAT44(*(u32 *)(puVar14 + iVar1 + 0x44), *(u32 *)a1);

        fVar16 = (SUB84(dVar19, 0) - fVar28) * (float)((u64)dVar19 >> 0x20) * fVar17;

        *(float *)(puVar14 + iVar1 + 0x3c) = fVar16;
        dVar19 = (double)CONCAT44(*(u32 *)(puVar14 + iVar1 + 0x44), *(u32 *)((int)a1 + 4));

        fVar16 = (SUB84(dVar19, 0) - fVar15) * (float)((u64)dVar19 >> 0x20) * fVar18;

        *(float *)(puVar14 + iVar1 + 0x40) = fVar16;
        fVar16 = *(float *)(a2 + 1);

        dVar19 = (double)CONCAT44(1.0 / fVar16, fVar16);

        *(int *)(puVar14 + iVar1 + 0x68) = (int)((u64)dVar19 >> 0x20);
        *(u32 *)(puVar14 + iVar1 + 0x50) = in_fr8;
        *(u32 *)(puVar14 + iVar1 + 0x4c) = in_fr9;
        *(u32 *)(puVar14 + iVar1 + 0x5c) = *(u32 *)a2;
        *(u32 *)(puVar14 + iVar1 + 0x58) = *(u32 *)((int)a2 + 4);
        *(u32 *)(puVar14 + iVar1 + 0x54) = *(u32 *)(a2 + 1);
        dVar19 = (double)CONCAT44(*(u32 *)(puVar14 + iVar1 + 0x68), *(u32 *)a2);

        fVar17 = (SUB84(dVar19, 0) - fVar28) * (float)((u64)dVar19 >> 0x20) * fVar17;

        *(float *)(puVar14 + iVar1 + 0x60) = fVar17;
        dVar19 = (double)CONCAT44(*(u32 *)(puVar14 + iVar1 + 0x68), *(u32 *)((int)a2 + 4));

        dVar19 = (double)CONCAT44((int)((u64)dVar19 >> 0x20), SUB84(dVar19, 0) - fVar15);

        iVar11 = 0;

        fVar18 = SUB84(dVar19, 0) * (float)((u64)dVar19 >> 0x20) * fVar18;

        *(float *)(puVar14 + iVar1 + 100) = fVar18;

        iVar9 = 2;
        for (iVar10 = 0; iVar10 < 3; iVar10 = iVar10 + 1) {
            iVar9 = iVar9 * 0x24 + iVar1;

            uVar20 = CONCAT44(*(u32 *)(puVar14 + iVar9 + 0x20), 0x3f800000);

            iVar2 = iVar10 * 0x24 + iVar1;

            uVar21 = CONCAT44(*(u32 *)(puVar14 + iVar2 + 0x20), (float)uVar20);

            fVar17 = (float)uVar21;
            if (((1 && (float)uVar20 < (float)((u64)uVar20 >> 0x20)) ^ 1) !=
                -((1 && fVar17 < (float)((u64)uVar21 >> 0x20)) - 1)) {

                fVar17 = *(float *)(puVar14 + iVar9 + 0x20);
                in_dr0 = (double)CONCAT44((int)((u64)in_dr0 >> 0x20), *(u32 *)(puVar14 + iVar2 + 0x20));
                fVar16 = fVar17;
                dVar19 = (double)CONCAT44(fVar17, SUB84(in_dr4, 0));

                dVar24 = (double)CONCAT44(0x3f800000, -fVar17);

                dVar24 = (double)CONCAT44(0x3f800000, -fVar17 + 1.0);
                dVar19 = (double)CONCAT44((int)((u64)in_dr0 >> 0x20), SUB84(in_dr0, 0) - fVar16);

                dVar22 = (double)CONCAT44(SUB84(dVar24, 0), *(u32 *)(puVar14 + iVar9 + 0x18));

                dVar22 = (double)CONCAT44((float)((u64)dVar22 >> 0x20) / SUB84(dVar19, 0), SUB84(dVar22, 0));

                dVar24 = (double)CONCAT44((int)((u64)dVar24 >> 0x20), *(u32 *)(puVar14 + iVar2 + 0x18));
                dVar19 = (double)((u64)dVar22 & 0xffffffff);

                dVar24 = (double)CONCAT44((int)((u64)dVar24 >> 0x20), SUB84(dVar24, 0) - SUB84(dVar22, 0));

                uVar25 = (u32)((u64)dVar22 >> 0x20);

                dVar23 = (double)CONCAT44(*(u32 *)(puVar14 + iVar9 + 0x1c), SUB84(in_dr6, 0));
                dVar22 = (double)CONCAT44(uVar25, SUB84(dVar19, 0));
                in_dr4 = (double)CONCAT44(uVar25, fVar28);

                dVar22 = (double)(u64)(u32)((float)((u64)dVar22 >> 0x20) * SUB84(dVar24, 0) + SUB84(dVar22, 0));

                dVar24 = (double)CONCAT44((int)((u64)dVar24 >> 0x20), *(u32 *)(puVar14 + iVar2 + 0x1c));
                uVar20 = CONCAT44(SUB84(dVar27, 0), SUB84(dVar22, 0));

                fVar17 = (float)((u64)dVar23 >> 0x20);

                dVar24 = (double)CONCAT44((int)((u64)dVar24 >> 0x20), SUB84(dVar24, 0) - fVar17);
                in_dr4 = (double)CONCAT44(uVar25, (float)((u64)uVar20 >> 0x20) * (float)uVar20 + SUB84(in_dr4, 0));

                uVar25 = (u32)((u64)in_dr4 >> 0x20);
                in_dr6 = dVar26;
                dVar19 = in_dr4;

                in_dr6 = (double)CONCAT44(fVar15, SUB84(dVar23, 0));
                dVar19 = (double)CONCAT44(uVar25, fVar17);

                dVar19 = (double)(u64)(u32)((float)((u64)dVar19 >> 0x20) * SUB84(dVar24, 0) + SUB84(dVar19, 0));

                uVar20 = uVar29;

                uVar20 = CONCAT44(SUB84(dVar26, 0), SUB84(dVar19, 0));

                in_dr6 = (double)CONCAT44((float)((u64)uVar20 >> 0x20) * (float)uVar20 + (float)((u64)in_dr6 >> 0x20),
                                          SUB84(in_dr6, 0));

                in_dr0 = in_dr4;

                in_dr0 = (double)CONCAT44(uVar25, (float)uVar20);

                pdVar7 = (double *)(puVar14 + iVar11 * 0x24 + iVar6);
                fVar17 = SUB84(in_dr4, 0);

                *(float *)((int)pdVar7 + 0x14) = fVar17;
                *(int *)(pdVar7 + 2) = (int)((u64)in_dr6 >> 0x20);
                pdVar7 = (double *)((int)pdVar7 + 0xc);
                *(int *)pdVar7 = (int)((u64)dVar24 >> 0x20);
                fVar17 = *(float *)(puVar14 + iVar9 + 8);
                in_dr4 = (double)CONCAT44(uVar25, fVar17);
                dVar19 = (double)CONCAT44(fVar17, *(u32 *)(puVar14 + iVar2 + 8));

                iVar11 = iVar11 + 1;
                fVar16 = (float)((u64)in_dr0 >> 0x20);

                fVar17 = SUB84(dVar19, 0) - fVar17;
                dVar19 = (double)CONCAT44(fVar16 * fVar17 + (float)((u64)dVar19 >> 0x20), fVar17);

                uVar25 = (u32)((u64)dVar19 >> 0x20);

                pdVar7 = (double *)((int)pdVar7 + -4);
                *(u32 *)pdVar7 = uVar25;
                dVar19 = (double)CONCAT44(uVar25, *(u32 *)(puVar14 + iVar2 + 4));
                in_dr4 = (double)CONCAT44((int)((u64)in_dr4 >> 0x20), *(u32 *)(puVar14 + iVar9 + 4));

                fVar17 = SUB84(dVar19, 0) - SUB84(in_dr4, 0);

                dVar19 = in_xd4;

                dVar19 = (double)CONCAT44(SUB84(in_dr4, 0), fVar17);

                dVar19 = (double)CONCAT44(fVar16 * SUB84(dVar19, 0) + (float)((u64)dVar19 >> 0x20), SUB84(dVar19, 0));

                *(int *)((int)pdVar7 + -4) = (int)((u64)dVar19 >> 0x20);
            }
            puVar12 = (u64 *)(puVar14 + iVar10 * 0x24 + iVar1);

            uVar20 = CONCAT44(*(u32 *)(puVar12 + 4), 0x3f800000);

            if ((float)uVar20 < (float)((u64)uVar20 >> 0x20)) {

                uVar20 = CONCAT44(*(u32 *)((int)puVar12 + 0x14), (float)uVar20);

                puVar8 = (u64 *)(puVar14 + iVar11 * 0x24 + iVar6);
                iVar9 = iVar11 + 1;
                iVar11 = iVar11 + 1;

                *(int *)((int)puVar8 + 0x14) = (int)((u64)uVar20 >> 0x20);
                *(u32 *)(puVar8 + 2) = *(u32 *)(puVar12 + 2);
                *(u32 *)((int)puVar8 + 0xc) = *(u32 *)((int)puVar12 + 0xc);
                *(u32 *)(puVar8 + 1) = *(u32 *)(puVar12 + 1);
                *(u32 *)((int)puVar8 + 4) = *(u32 *)((int)puVar12 + 4);
                in_dr0 = (double)CONCAT44((int)((u64)in_dr0 >> 0x20), *(u32 *)puVar12);
                *(u32 *)puVar8 = *(u32 *)puVar12;
                iVar11 = iVar9;
            }
            iVar9 = iVar10;
        }
        *(u32 *)((int)a3 + 0x1c) = g_8c4aa2a0;
        *(u32 *)(a3 + 3) = *puVar4;

        *(u32 *)((int)a3 + 0x14) = *(u32 *)(puVar14 + iVar6 + 4);
        *(u32 *)(a3 + 2) = *(u32 *)(puVar14 + iVar6 + 8);
        *(u32 *)((int)a3 + 0xc) = *(u32 *)(puVar14 + iVar6 + 0xc);
        *(u32 *)(a3 + 1) = *(u32 *)(puVar14 + iVar6 + 0x10);
        puVar12 = (u64 *)((int)a3 + 4);
        *(u32 *)puVar12 = *(u32 *)(puVar14 + iVar6 + 0x14);

        *(u32 *)((int)puVar12 + -4) = uVar5;
        *(u32 *)(puVar12 + 7) = *puVar3;
        *(u32 *)((int)puVar12 + 0x34) = *puVar4;

        *(u32 *)(puVar12 + 6) = *(u32 *)(puVar14 + iVar6 + 0x28);
        *(u32 *)((int)puVar12 + 0x2c) = *(u32 *)(puVar14 + iVar6 + 0x2c);
        *(u32 *)(puVar12 + 5) = *(u32 *)(puVar14 + iVar6 + 0x30);
        *(u32 *)((int)puVar12 + 0x24) = *(u32 *)(puVar14 + iVar6 + 0x34);
        puVar12 = puVar12 + 4;
        *(u32 *)puVar12 = *(u32 *)(puVar14 + iVar6 + 0x38);

        *(u32 *)((int)puVar12 + -4) = uVar5;
        if (iVar11 != 3) {
            *(u32 *)(puVar12 + 7) = *puVar3;
            *(u32 *)((int)puVar12 + 0x34) = *puVar4;

            *(u32 *)(puVar12 + 6) = *(u32 *)(puVar14 + iVar6 + 0x70);
            *(u32 *)((int)puVar12 + 0x2c) = *(u32 *)(puVar14 + iVar6 + 0x74);
            *(u32 *)(puVar12 + 5) = *(u32 *)(puVar14 + iVar6 + 0x78);
            *(u32 *)((int)puVar12 + 0x24) = *(u32 *)(puVar14 + iVar6 + 0x7c);
            puVar12 = puVar12 + 4;
            *(u32 *)puVar12 = *(u32 *)(puVar14 + iVar6 + 0x80);

            *(u32 *)((int)puVar12 + -4) = uVar5;
        }
        *(u32 *)(puVar12 + 7) = *puVar3;
        *(u32 *)((int)puVar12 + 0x34) = *puVar4;
        uVar5 = 0xf0000000;

        *(u32 *)(puVar12 + 6) = *(u32 *)(puVar14 + iVar6 + 0x4c);
        *(u32 *)((int)puVar12 + 0x2c) = *(u32 *)(puVar14 + iVar6 + 0x50);
        *(u32 *)(puVar12 + 5) = *(u32 *)(puVar14 + iVar6 + 0x54);
        *(u32 *)((int)puVar12 + 0x24) = *(u32 *)(puVar14 + iVar6 + 0x58);
        puVar12 = puVar12 + 4;
        *(u32 *)puVar12 = *(u32 *)(puVar14 + iVar6 + 0x5c);

        *(u32 *)((int)puVar12 + -4) = uVar5;
        a3 = (u64 *)((int)puVar12 + 0x1c);
        g_8c4aa520 = g_8c4aa520 + iVar11;
    }
    return a3;
}

/*
 * gfxlib_calls_fill_loop_216ed0  0x8c216ed0
 * area name: in the gfxlib library code range; behaviour name: its callees mostly do: fill_loop
 */
int gfxlib_calls_fill_loop_216ed0(short *a0, int a1, u32 a2, int a3) {
    int iVar1;
    int iVar2;
    u32 uVar3;
    short *psVar4;
    short *psVar5;
    int iVar6;
    int iVar7;
    double *pdVar8;
    int iVar9;
    double *pdVar10;
    double *ar5_00;
    double *pdVar11;
    int iVar12;
    int *piVar13;
    double *pdVar14;
    double in_dr0;
    double dVar15;
    double extraout_dr0;
    float extraout_fr3;
    float fVar17;
    float fVar18;
    double in_dr4;
    double in_dr6;
    float fVar19;
    double in_dr8;
    float fVar22;
    double dVar20;
    double dVar21;
    double dVar23;
    u32 uVar25;
    double dVar24;
    double dVar26;
    double dVar27;
    u64 in_xd2;
    double in_xd6;
    double dVar28;
    double in_xd8;
    double in_xd12;
    double in_xd14;
    bool bVar29;
    char cVar30;
    char cVar31;
    u8 auStack_30[4];
    u32 uVar16;

    cVar31 = '\0';
    cVar30 = '\0';
    piVar13 = (int *)auStack_30;
    uVar3 = a2 & 0x3fff;
    iVar6 = (a2 >> 0xe & 3) << 1;
    iVar1 = 0;
    iVar2 = 0;
    fVar17 = (float)((u64)in_dr4 >> 0x20);
    do {
        iVar9 = (int)*a0;
        pdVar10 = (double *)(a0[1] * 0x10 + a1);
        if (iVar9 < 0) {
            iVar9 = -iVar9;
        }
        iVar2 = iVar2 + iVar9;
        iVar9 = iVar9 + -2;
        iVar12 = 0;
        if (cVar30 == '\0') {
            fVar22 = (float)(int)a0[2] * fVar17;
        } else {
            fVar22 = (float)((u64)((double)(int)a0[2] * (double)CONCAT44(0x3f800000, fVar17)) >> 0x20);
        }
        if (cVar30 == '\0') {
            dVar20 = (double)CONCAT44(fVar22, (float)(int)a0[3] * fVar17);
        } else {
            dVar20 = (double)CONCAT44(fVar22, (float)(int)a0[3]) * (double)CONCAT44(0x3f800000, fVar17);
        }
        if (cVar31 == '\0') {
            in_dr4 = (double)CONCAT44((int)((u64)in_dr4 >> 0x20), *(u32 *)(pdVar10 + 1));
        }
        psVar5 = a0 + 5;
        psVar4 = a0 + 6;
        ar5_00 = (double *)(a0[4] * 0x10 + a1);
        a0 = a0 + 7;
        if (cVar30 == '\0') {
            fVar22 = (float)(int)*psVar5 * fVar17;
        } else {
            fVar22 = (float)((u64)((double)(int)*psVar5 * (double)CONCAT44(0x3f800000, fVar17)) >> 0x20);
        }
        if (cVar30 == '\0') {
            dVar23 = (double)CONCAT44(fVar22, (float)(int)*psVar4 * fVar17);
        } else {
            dVar23 = (double)CONCAT44(fVar22, (float)(int)*psVar4) * (double)CONCAT44(0x3f800000, fVar17);
        }
        if (cVar31 == '\0') {
            in_dr6 = (double)CONCAT44((int)((u64)in_dr6 >> 0x20), *(u32 *)(ar5_00 + 1));
            dVar28 = in_xd6;
        } else {
            dVar28 = ar5_00[1];
        }
        do {
            pdVar11 = (double *)(*a0 * 0x10 + a1);
            psVar5 = a0 + 3;
            if (cVar30 == '\0') {
                fVar22 = (float)(int)a0[1] * fVar17;
            } else {
                fVar22 = (float)((u64)((double)(int)a0[1] * (double)CONCAT44(0x3f800000, fVar17)) >> 0x20);
            }
            dVar15 = (double)((u64)in_dr0 & 0xffffffff);
            fVar18 = SUB84(in_dr4, 0);
            if (cVar30 == '\0') {
                bVar29 = 0.0 < fVar18;
            } else {
                bVar29 = dVar15 < in_dr4;
            }
            if (cVar30 == '\0') {
                dVar26 = (double)CONCAT44(fVar22, (float)(int)a0[2] * fVar17);
            } else {
                dVar26 = (double)CONCAT44(fVar22, (float)(int)a0[2]) * (double)CONCAT44(0x3f800000, fVar17);
            }
            if (cVar31 == '\0') {
                in_dr8 = (double)CONCAT44((int)((u64)in_dr8 >> 0x20), *(u32 *)(pdVar11 + 1));
            } else {
                in_xd8 = pdVar11[1];
            }
            fVar22 = SUB84(in_dr6, 0);
            fVar19 = SUB84(in_dr8, 0);
            uVar25 = (u32)((u64)dVar23 >> 0x20);
            dVar21 = dVar20;
            dVar24 = dVar23;
            dVar27 = dVar26;
            if (bVar29) {
                if (cVar30 == '\0') {
                    bVar29 = 0.0 < fVar22;
                } else {
                    bVar29 = dVar15 < in_dr6;
                }
                if (!bVar29)
                    goto LAB_8c216fd8;
                if (cVar30 == '\0') {
                    bVar29 = 0.0 < fVar19;
                } else {
                    bVar29 = dVar15 < in_dr8;
                }
                if (!bVar29)
                    goto LAB_8c216fd8;
                if (cVar30 == '\0') {
                    bVar29 = 1.0 < fVar18;
                } else {
                    bVar29 = (double)CONCAT44(0x3f800000, fVar17) < in_dr4;
                }
                if (bVar29)
                    goto LAB_8c216fd8;
                if (cVar30 == '\0') {
                    bVar29 = 1.0 < fVar22;
                } else {
                    bVar29 = (double)CONCAT44(0x3f800000, fVar17) < in_dr6;
                }
                if (bVar29)
                    goto LAB_8c216fd8;
                if (cVar30 == '\0') {
                    bVar29 = 1.0 < fVar19;
                } else {
                    bVar29 = (double)CONCAT44(0x3f800000, fVar17) < in_dr8;
                }
                if (bVar29)
                    goto LAB_8c216fd8;
                iVar7 = a3 + 0x20;
                if (iVar12 == 0) {
                    if (cVar31 == '\0') {
                        in_dr6 = (double)CONCAT44(*(u32 *)pdVar10, fVar22);
                        in_dr4 = (double)CONCAT44(*(u32 *)((int)pdVar10 + 4), fVar18);
                        pdVar10 = pdVar10 + 1;
                    } else {
                        in_dr6 = *pdVar10;
                        in_dr4 = pdVar10[1];
                        pdVar10 = pdVar10 + 2;
                    }
                    if (cVar31 == '\0') {
                        uVar16 = *(u32 *)((int)pdVar10 + 4);
                        dVar15 = (double)CONCAT44(uVar16, uVar16);
                    } else {
                        dVar15 = *(double *)((int)pdVar10 + 4);
                    }
                    if (cVar30 == '\0') {
                        dVar15 = (double)CONCAT44((int)((u64)dVar15 >> 0x20), SUB84(dVar15, 0) - 1.0);
                    } else {
                        dVar15 = dVar15 - (double)CONCAT44(0x3f800000, fVar17);
                    }
                    if (cVar31 == '\0') {
                        *(int *)(a3 + 0x1c) = (int)((u64)dVar15 >> 0x20);
                        *(int *)(a3 + 0x18) = (int)((u64)dVar20 >> 0x20);
                        pdVar10 = (double *)(a3 + 0x14);
                        *(int *)pdVar10 = (int)((u64)in_dr4 >> 0x20);
                    } else {
                        *(double *)(a3 + 0x18) = dVar15;
                        *(double *)(a3 + 0x10) = dVar20;
                        pdVar10 = (double *)(a3 + 8);
                        *pdVar10 = in_dr4;
                    }
                    iVar12 = 1;
                    if (cVar31 == '\0') {
                        pdVar10 = (double *)((int)pdVar10 + -4);
                        *(int *)pdVar10 = (int)((u64)in_dr6 >> 0x20);
                    } else {
                        pdVar10 = pdVar10 + -1;
                        *pdVar10 = in_dr6;
                    }
                    *(u32 *)((int)pdVar10 + -4) = 0xe0000000;
                    iVar7 = (int)pdVar10 + 0x3c;
                }
                if (cVar31 == '\0') {
                    in_dr4 = (double)CONCAT44(*(u32 *)ar5_00, SUB84(in_dr4, 0));
                    in_dr6 = (double)CONCAT44(*(u32 *)((int)ar5_00 + 4), SUB84(in_dr6, 0));
                    pdVar10 = ar5_00 + 1;
                } else {
                    in_dr4 = *ar5_00;
                    in_dr6 = ar5_00[1];
                    pdVar10 = ar5_00 + 2;
                }
                if (cVar31 == '\0') {
                    uVar16 = *(u32 *)((int)pdVar10 + 4);
                    dVar20 = (double)CONCAT44(uVar16, uVar16);
                } else {
                    dVar20 = *(double *)((int)pdVar10 + 4);
                }
                if (cVar30 == '\0') {
                    in_dr0 = (double)CONCAT44((int)((u64)dVar20 >> 0x20), SUB84(dVar20, 0) - 1.0);
                } else {
                    in_dr0 = dVar20 - (double)CONCAT44(0x3f800000, fVar17);
                }
                if (cVar31 == '\0') {
                    *(int *)(iVar7 + -4) = (int)((u64)in_dr0 >> 0x20);
                    *(u32 *)(iVar7 + -8) = uVar25;
                    *(int *)(iVar7 + -0xc) = (int)((u64)in_dr6 >> 0x20);
                    pdVar10 = (double *)(iVar7 + -0x10);
                    *(int *)pdVar10 = (int)((u64)in_dr4 >> 0x20);
                } else {
                    *(double *)(iVar7 + -8) = in_dr0;
                    *(double *)(iVar7 + -0x10) = dVar23;
                    *(double *)(iVar7 + -0x18) = in_dr6;
                    pdVar10 = (double *)(iVar7 + -0x18) + -1;
                    *pdVar10 = in_dr4;
                }
                iVar12 = iVar12 + 1;
                *(u32 *)((int)pdVar10 + -4) = 0xe0000000;
                a3 = (int)pdVar10 + 0x1c;
            } else {
            LAB_8c216fd8:
                if (iVar12 != 0) {
                    if (cVar31 == '\0') {
                        in_dr4 = (double)CONCAT44(*(u32 *)ar5_00, fVar18);
                        in_dr6 = (double)CONCAT44(*(u32 *)((int)ar5_00 + 4), fVar22);
                        pdVar8 = ar5_00 + 1;
                    } else {
                        in_dr4 = *ar5_00;
                        in_dr6 = ar5_00[1];
                        pdVar8 = ar5_00 + 2;
                    }
                    if (cVar31 == '\0') {
                        uVar16 = *(u32 *)((int)pdVar8 + 4);
                        dVar15 = (double)CONCAT44(uVar16, uVar16);
                    } else {
                        dVar15 = *(double *)((int)pdVar8 + 4);
                    }
                    if (cVar30 == '\0') {
                        dVar15 = (double)CONCAT44((int)((u64)dVar15 >> 0x20), SUB84(dVar15, 0) - 1.0);
                    } else {
                        dVar15 = dVar15 - (double)CONCAT44(0x3f800000, fVar17);
                    }
                    if (cVar31 == '\0') {
                        *(int *)(a3 + 0x1c) = (int)((u64)dVar15 >> 0x20);
                        pdVar8 = (double *)(a3 + 0x18);
                        *(u32 *)pdVar8 = uVar25;
                    } else {
                        *(double *)(a3 + 0x18) = dVar15;
                        pdVar8 = (double *)(a3 + 0x10);
                        *pdVar8 = dVar23;
                    }
                    iVar1 = iVar1 + iVar12;
                    if (cVar31 == '\0') {
                        pdVar8 = (double *)((int)pdVar8 + -4);
                        *(int *)pdVar8 = (int)((u64)in_dr6 >> 0x20);
                    } else {
                        pdVar8 = pdVar8 + -1;
                        *pdVar8 = in_dr6;
                    }
                    iVar12 = 0;
                    iVar1 = iVar1 + 1;
                    if (cVar31 == '\0') {
                        pdVar8 = (double *)((int)pdVar8 + -4);
                        *(int *)pdVar8 = (int)((u64)in_dr4 >> 0x20);
                    } else {
                        pdVar8 = pdVar8 + -1;
                        *pdVar8 = in_dr4;
                    }
                    *(u32 *)((int)pdVar8 + -4) = 0xf0000000;
                    a3 = (int)pdVar8 + 0x1c;
                }
                in_dr0 = (double)((u64)dVar15 & 0xffffffff);
                if (cVar30 == '\0') {
                    bVar29 = 0.0 < SUB84(in_dr4, 0);
                } else {
                    bVar29 = in_dr0 < in_dr4;
                }
                fVar22 = SUB84(in_dr6, 0);
                if (bVar29) {
                    if (cVar30 == '\0') {
                        bVar29 = SUB84(in_dr4, 0) < 1.0;
                    } else {
                        bVar29 = in_dr4 < (double)CONCAT44(0x3f800000, fVar17);
                    }
                    if (!bVar29)
                        goto LAB_8c21700e;
                LAB_8c217098:
                    *(int *)((int)piVar13 + -4) = iVar6;
                    *(int *)((int)piVar13 + -8) = a1;
                    *(short **)((int)piVar13 + -0xc) = psVar5;
                    *(u32 *)((int)piVar13 + -0x10) = uVar3;
                    *(int *)((int)piVar13 + -0x14) = iVar2;
                    *(int *)((int)piVar13 + -0x18) = iVar1;
                    if (cVar31 == '\0') {
                        *(float *)((int)piVar13 + -0x1c) = fVar17;
                        *(float *)((int)piVar13 + -0x20) = fVar22;
                        pdVar8 = (double *)((int)piVar13 + -0x24);
                        *(float *)((int)piVar13 + -0x24) = fVar19;
                    } else {
                        *(u64 *)((int)piVar13 + -0x20) = in_xd2;
                        *(double *)((int)piVar13 + -0x28) = dVar28;
                        pdVar8 = (double *)((int)piVar13 + -0x30);
                        *(double *)((int)piVar13 + -0x30) = in_xd8;
                        in_xd8 = in_xd14;
                        dVar28 = in_xd12;
                    }
                    a3 = gfxlib_fill_loop_2170f4(pdVar10, ar5_00, pdVar11, a3);
                    if (cVar31 == '\0') {
                        fVar17 = *(float *)(pdVar8 + 1);
                        pdVar14 = (double *)((int)pdVar8 + 0xc);
                        in_dr6 = (double)CONCAT44((int)((u64)dVar23 >> 0x20), *(u32 *)((int)pdVar8 + 4));
                        in_dr8 = (double)CONCAT44((int)((u64)dVar26 >> 0x20), *(u32 *)pdVar8);
                    } else {
                        in_xd8 = *pdVar8;
                        dVar28 = pdVar8[1];
                        in_xd2 = pdVar8[2];
                        pdVar14 = pdVar8 + 3;
                        fVar17 = extraout_fr3;
                        in_dr6 = dVar23;
                        in_dr8 = dVar26;
                    }
                    iVar1 = *(int *)pdVar14;
                    iVar2 = *(int *)((int)pdVar14 + 4);
                    uVar3 = *(u32 *)((int)pdVar14 + 8);
                    psVar5 = *(short **)((int)pdVar14 + 0xc);
                    a1 = *(int *)((int)pdVar14 + 0x10);
                    iVar6 = *(int *)((int)pdVar14 + 0x14);
                    piVar13 = (int *)((int)pdVar14 + 0x18);
                    in_dr0 = extraout_dr0;
                    in_dr4 = dVar20;
                } else {
                LAB_8c21700e:
                    if (cVar30 == '\0') {
                        bVar29 = 0.0 < fVar22;
                    } else {
                        bVar29 = in_dr0 < in_dr6;
                    }
                    if (bVar29) {
                        if (cVar30 == '\0') {
                            bVar29 = fVar22 < 1.0;
                        } else {
                            bVar29 = in_dr6 < (double)CONCAT44(0x3f800000, fVar17);
                        }
                        if (bVar29)
                            goto LAB_8c217098;
                    }
                    if (cVar30 == '\0') {
                        bVar29 = 0.0 < fVar19;
                    } else {
                        bVar29 = in_dr0 < in_dr8;
                    }
                    if (bVar29) {
                        if (cVar30 == '\0') {
                            bVar29 = fVar19 < 1.0;
                        } else {
                            bVar29 = in_dr8 < (double)CONCAT44(0x3f800000, fVar17);
                        }
                        if (bVar29)
                            goto LAB_8c217098;
                    }
                }
            }
            a0 = (short *)((int)psVar5 + iVar6);
            uVar25 = (u32)((u64)dVar27 >> 0x20);
            dVar23 = dVar27;
            dVar20 = dVar24;
            if (cVar31 == '\0') {
                dVar23 = (double)CONCAT44(uVar25, SUB84(dVar24, 0));
                dVar20 = (double)CONCAT44((int)((u64)dVar24 >> 0x20), SUB84(dVar21, 0));
            }
            iVar9 = iVar9 + -1;
            in_xd6 = in_xd8;
            if (cVar31 == '\0') {
                in_dr4 = (double)CONCAT44((int)((u64)in_dr4 >> 0x20), SUB84(in_dr6, 0));
                in_dr6 = (double)CONCAT44((int)((u64)in_dr6 >> 0x20), SUB84(in_dr8, 0));
                in_xd6 = dVar28;
            }
            pdVar10 = ar5_00;
            ar5_00 = pdVar11;
            dVar28 = in_xd6;
        } while (iVar9 != 0);
        if (iVar12 != 0) {
            if (cVar31 == '\0') {
                in_dr4 = (double)CONCAT44(*(u32 *)pdVar11, SUB84(in_dr4, 0));
                in_dr8 = (double)CONCAT44(*(u32 *)((int)pdVar11 + 4), SUB84(in_dr8, 0));
                pdVar11 = pdVar11 + 1;
            } else {
                in_dr4 = *pdVar11;
                in_dr8 = pdVar11[1];
                pdVar11 = pdVar11 + 2;
            }
            if (cVar31 == '\0') {
                uVar16 = *(u32 *)((int)pdVar11 + 4);
                dVar20 = (double)CONCAT44(uVar16, uVar16);
            } else {
                dVar20 = *(double *)((int)pdVar11 + 4);
            }
            if (cVar30 == '\0') {
                in_dr0 = (double)CONCAT44((int)((u64)dVar20 >> 0x20), SUB84(dVar20, 0) - 1.0);
            } else {
                in_dr0 = dVar20 - (double)CONCAT44(0x3f800000, fVar17);
            }
            if (cVar31 == '\0') {
                *(int *)(a3 + 0x1c) = (int)((u64)in_dr0 >> 0x20);
                pdVar10 = (double *)(a3 + 0x18);
                *(u32 *)pdVar10 = uVar25;
            } else {
                *(double *)(a3 + 0x18) = in_dr0;
                pdVar10 = (double *)(a3 + 0x10);
                *pdVar10 = dVar27;
            }
            if (cVar31 == '\0') {
                *(int *)((int)pdVar10 + -4) = (int)((u64)in_dr8 >> 0x20);
                pdVar10 = pdVar10 + -1;
                *(int *)pdVar10 = (int)((u64)in_dr4 >> 0x20);
            } else {
                pdVar10[-1] = in_dr8;
                pdVar10 = pdVar10 + -1 + -1;
                *pdVar10 = in_dr4;
            }
            *(u32 *)((int)pdVar10 + -4) = 0xf0000000;
            iVar1 = iVar1 + iVar12 + 1;
            a3 = (int)pdVar10 + 0x1c;
        }
        uVar3 = uVar3 - 1;
        if (uVar3 == 0) {
            g_8c4aa520 = g_8c4aa520 + iVar1;
            g_8c4aa51c = g_8c4aa51c + iVar2;
            return a3;
        }
    } while (true);
}

/*
 * alt_entry_216ed2  0x8c216ed2
 * probably an entry 2 bytes into 8c216ed0: it reads registers that code sets before it
 */
int alt_entry_216ed2(short *a0, int a1, u32 a2, int a3) {
    u32 uVar1;
    u32 uVar2;
    int *piVar3;
    u32 in_r1;
    int iVar4;
    int iVar5;
    u32 uVar6;
    short *psVar7;
    short *psVar8;
    int iVar9;
    int iVar10;
    double *pdVar11;
    u32 unaff_r8;
    u32 unaff_r9;
    u32 unaff_r10;
    int iVar12;
    u32 unaff_r11;
    double *pdVar13;
    u32 unaff_r12;
    double *ar5_00;
    u32 unaff_r13;
    double *pdVar14;
    u32 unaff_r14;
    int iVar15;
    u64 *puVar16;
    int *piVar17;
    double *pdVar18;
    double in_dr0;
    double dVar19;
    float in_fr3;
    float fVar21;
    double in_dr4;
    double in_dr6;
    float fVar22;
    double in_dr8;
    float fVar25;
    double dVar23;
    double dVar24;
    u64 in_dr12;
    double dVar26;
    u32 uVar28;
    double dVar27;
    u64 in_dr14;
    double dVar29;
    double dVar30;
    double in_xd6;
    double dVar32;
    double in_xd8;
    bool bVar33;
    u32 in_PR;
    u8 auStack_20[16];
    u64 uStack_10;
    u64 uStack_8;
    u32 uVar20;

    uVar2 = 0xf0000000;
    uVar1 = 0xe0000000;

    uStack_8 = (double)CONCAT44((int)in_dr14, (u32)uStack_8);
    uStack_8._0_4_ = (int)((u64)in_dr14 >> 0x20);
    puVar16 = &uStack_10;
    uStack_10 = CONCAT44((int)in_dr12, (int)((u64)in_dr12 >> 0x20));

    *(u32 *)((int)puVar16 + -4) = unaff_r14;
    *(u32 *)((int)puVar16 + -8) = unaff_r13;
    *(u32 *)((int)puVar16 + -0xc) = unaff_r12;
    *(u32 *)((int)puVar16 + -0x10) = unaff_r11;
    *(u32 *)((int)puVar16 + -0x14) = unaff_r10;
    *(u32 *)((int)puVar16 + -0x18) = unaff_r9;
    *(u32 *)((int)puVar16 + -0x1c) = unaff_r8;
    piVar17 = (int *)((int)puVar16 + -0x20);
    *(u32 *)((int)puVar16 + -0x20) = in_PR;
    uVar6 = a2 & in_r1;
    iVar9 = (a2 >> 0xe & 3) << 1;
    iVar4 = 0;
    iVar5 = 0;

    in_fr3 = (float)((u64)in_dr4 >> 0x20);
    piVar17 = (int *)((int)puVar16 + -0x20);

    do {
        iVar12 = (int)*a0;
        pdVar13 = (double *)(a0[1] * 0x10 + a1);
        if (iVar12 < 0) {
            iVar12 = -iVar12;
        }
        iVar5 = iVar5 + iVar12;
        iVar12 = iVar12 + -2;
        iVar15 = 0;

        fVar25 = (float)(int)a0[2] * in_fr3;

        dVar23 = (double)CONCAT44(fVar25, (float)(int)a0[3] * in_fr3);

        in_dr4 = (double)CONCAT44((int)((u64)in_dr4 >> 0x20), *(u32 *)(pdVar13 + 1));

        psVar8 = a0 + 5;
        psVar7 = a0 + 6;
        ar5_00 = (double *)(a0[4] * 0x10 + a1);
        a0 = a0 + 7;

        fVar25 = (float)(int)*psVar8 * in_fr3;

        dVar26 = (double)CONCAT44(fVar25, (float)(int)*psVar7 * in_fr3);

        in_dr6 = (double)CONCAT44((int)((u64)in_dr6 >> 0x20), *(u32 *)(ar5_00 + 1));
        dVar32 = in_xd6;

        do {
            pdVar14 = (double *)(*a0 * 0x10 + a1);
            psVar8 = a0 + 3;

            fVar25 = (float)(int)a0[1] * in_fr3;

            dVar19 = (double)((u64)in_dr0 & 0xffffffff);
            fVar21 = SUB84(in_dr4, 0);

            bVar33 = 0.0 < fVar21;

            dVar29 = (double)CONCAT44(fVar25, (float)(int)a0[2] * in_fr3);

            in_dr8 = (double)CONCAT44((int)((u64)in_dr8 >> 0x20), *(u32 *)(pdVar14 + 1));

            fVar25 = SUB84(in_dr6, 0);
            fVar22 = SUB84(in_dr8, 0);
            uVar28 = (u32)((u64)dVar26 >> 0x20);
            dVar24 = dVar23;
            dVar27 = dVar26;
            dVar30 = dVar29;
            if (bVar33) {

                bVar33 = 0.0 < fVar25;

                if (!bVar33)
                    goto LAB_8c216fd8;

                bVar33 = 0.0 < fVar22;

                if (!bVar33)
                    goto LAB_8c216fd8;

                bVar33 = 1.0 < fVar21;

                if (bVar33)
                    goto LAB_8c216fd8;

                bVar33 = 1.0 < fVar25;

                if (bVar33)
                    goto LAB_8c216fd8;

                bVar33 = 1.0 < fVar22;

                if (bVar33)
                    goto LAB_8c216fd8;
                iVar10 = a3 + 0x20;
                if (iVar15 == 0) {

                    in_dr6 = (double)CONCAT44(*(u32 *)pdVar13, fVar25);
                    in_dr4 = (double)CONCAT44(*(u32 *)((int)pdVar13 + 4), fVar21);
                    pdVar13 = pdVar13 + 1;

                    uVar20 = *(u32 *)((int)pdVar13 + 4);
                    dVar19 = (double)CONCAT44(uVar20, uVar20);

                    dVar19 = (double)CONCAT44((int)((u64)dVar19 >> 0x20), SUB84(dVar19, 0) - 1.0);

                    *(int *)(a3 + 0x1c) = (int)((u64)dVar19 >> 0x20);
                    *(int *)(a3 + 0x18) = (int)((u64)dVar23 >> 0x20);
                    pdVar13 = (double *)(a3 + 0x14);
                    *(int *)pdVar13 = (int)((u64)in_dr4 >> 0x20);

                    iVar15 = 1;

                    pdVar13 = (double *)((int)pdVar13 + -4);
                    *(int *)pdVar13 = (int)((u64)in_dr6 >> 0x20);

                    *(u32 *)((int)pdVar13 + -4) = uVar1;
                    iVar10 = (int)pdVar13 + 0x3c;
                }

                in_dr4 = (double)CONCAT44(*(u32 *)ar5_00, SUB84(in_dr4, 0));
                in_dr6 = (double)CONCAT44(*(u32 *)((int)ar5_00 + 4), SUB84(in_dr6, 0));
                pdVar13 = ar5_00 + 1;

                uVar20 = *(u32 *)((int)pdVar13 + 4);
                dVar23 = (double)CONCAT44(uVar20, uVar20);

                in_dr0 = (double)CONCAT44((int)((u64)dVar23 >> 0x20), SUB84(dVar23, 0) - 1.0);

                *(int *)(iVar10 + -4) = (int)((u64)in_dr0 >> 0x20);
                *(u32 *)(iVar10 + -8) = uVar28;
                *(int *)(iVar10 + -0xc) = (int)((u64)in_dr6 >> 0x20);
                pdVar13 = (double *)(iVar10 + -0x10);
                *(int *)pdVar13 = (int)((u64)in_dr4 >> 0x20);

                iVar15 = iVar15 + 1;
                *(u32 *)((int)pdVar13 + -4) = uVar1;
                a3 = (int)pdVar13 + 0x1c;
            } else {
            LAB_8c216fd8:
                if (iVar15 != 0) {

                    in_dr4 = (double)CONCAT44(*(u32 *)ar5_00, fVar21);
                    in_dr6 = (double)CONCAT44(*(u32 *)((int)ar5_00 + 4), fVar25);
                    pdVar11 = ar5_00 + 1;

                    uVar20 = *(u32 *)((int)pdVar11 + 4);
                    dVar19 = (double)CONCAT44(uVar20, uVar20);

                    dVar19 = (double)CONCAT44((int)((u64)dVar19 >> 0x20), SUB84(dVar19, 0) - 1.0);

                    *(int *)(a3 + 0x1c) = (int)((u64)dVar19 >> 0x20);
                    pdVar11 = (double *)(a3 + 0x18);
                    *(u32 *)pdVar11 = uVar28;

                    iVar4 = iVar4 + iVar15;

                    pdVar11 = (double *)((int)pdVar11 + -4);
                    *(int *)pdVar11 = (int)((u64)in_dr6 >> 0x20);

                    iVar15 = 0;
                    iVar4 = iVar4 + 1;

                    pdVar11 = (double *)((int)pdVar11 + -4);
                    *(int *)pdVar11 = (int)((u64)in_dr4 >> 0x20);

                    *(u32 *)((int)pdVar11 + -4) = uVar2;
                    a3 = (int)pdVar11 + 0x1c;
                }
                in_dr0 = (double)((u64)dVar19 & 0xffffffff);

                bVar33 = 0.0 < SUB84(in_dr4, 0);

                fVar25 = SUB84(in_dr6, 0);
                if (bVar33) {

                    bVar33 = SUB84(in_dr4, 0) < 1.0;

                    if (!bVar33)
                        goto LAB_8c21700e;
                LAB_8c217098:
                    *(int *)((int)piVar17 + -4) = iVar9;
                    *(int *)((int)piVar17 + -8) = a1;
                    *(short **)((int)piVar17 + -0xc) = psVar8;
                    *(u32 *)((int)piVar17 + -0x10) = uVar6;
                    *(int *)((int)piVar17 + -0x14) = iVar5;
                    *(int *)((int)piVar17 + -0x18) = iVar4;

                    *(float *)((int)piVar17 + -0x1c) = in_fr3;
                    *(float *)((int)piVar17 + -0x20) = fVar25;
                    pdVar11 = (double *)((int)piVar17 + -0x24);
                    *(float *)((int)piVar17 + -0x24) = fVar22;

                    a3 = gfxlib_fill_loop_2170f4(pdVar13, ar5_00, pdVar14, a3);

                    in_fr3 = *(float *)(pdVar11 + 1);
                    pdVar18 = (double *)((int)pdVar11 + 0xc);
                    in_dr6 = (double)CONCAT44((int)((u64)dVar26 >> 0x20), *(u32 *)((int)pdVar11 + 4));
                    in_dr8 = (double)CONCAT44((int)((u64)dVar29 >> 0x20), *(u32 *)pdVar11);

                    iVar4 = *(int *)pdVar18;
                    iVar5 = *(int *)((int)pdVar18 + 4);
                    uVar6 = *(u32 *)((int)pdVar18 + 8);
                    psVar8 = *(short **)((int)pdVar18 + 0xc);
                    a1 = *(int *)((int)pdVar18 + 0x10);
                    iVar9 = *(int *)((int)pdVar18 + 0x14);
                    piVar17 = (int *)((int)pdVar18 + 0x18);
                    in_dr4 = dVar23;
                } else {
                LAB_8c21700e:

                    bVar33 = 0.0 < fVar25;

                    if (bVar33) {

                        bVar33 = fVar25 < 1.0;

                        if (bVar33)
                            goto LAB_8c217098;
                    }

                    bVar33 = 0.0 < fVar22;

                    if (bVar33) {

                        bVar33 = fVar22 < 1.0;

                        if (bVar33)
                            goto LAB_8c217098;
                    }
                }
            }
            a0 = (short *)((int)psVar8 + iVar9);
            uVar28 = (u32)((u64)dVar30 >> 0x20);
            dVar26 = dVar30;
            dVar23 = dVar27;

            dVar26 = (double)CONCAT44(uVar28, SUB84(dVar27, 0));
            dVar23 = (double)CONCAT44((int)((u64)dVar27 >> 0x20), SUB84(dVar24, 0));

            iVar12 = iVar12 + -1;
            in_xd6 = in_xd8;

            in_dr4 = (double)CONCAT44((int)((u64)in_dr4 >> 0x20), SUB84(in_dr6, 0));
            in_dr6 = (double)CONCAT44((int)((u64)in_dr6 >> 0x20), SUB84(in_dr8, 0));
            in_xd6 = dVar32;

            pdVar13 = ar5_00;
            ar5_00 = pdVar14;
            dVar32 = in_xd6;
        } while (iVar12 != 0);
        if (iVar15 != 0) {

            in_dr4 = (double)CONCAT44(*(u32 *)pdVar14, SUB84(in_dr4, 0));
            in_dr8 = (double)CONCAT44(*(u32 *)((int)pdVar14 + 4), SUB84(in_dr8, 0));
            pdVar14 = pdVar14 + 1;

            uVar20 = *(u32 *)((int)pdVar14 + 4);
            dVar23 = (double)CONCAT44(uVar20, uVar20);

            in_dr0 = (double)CONCAT44((int)((u64)dVar23 >> 0x20), SUB84(dVar23, 0) - 1.0);

            *(int *)(a3 + 0x1c) = (int)((u64)in_dr0 >> 0x20);
            pdVar13 = (double *)(a3 + 0x18);
            *(u32 *)pdVar13 = uVar28;

            *(int *)((int)pdVar13 + -4) = (int)((u64)in_dr8 >> 0x20);
            pdVar13 = pdVar13 + -1;
            *(int *)pdVar13 = (int)((u64)in_dr4 >> 0x20);

            *(u32 *)((int)pdVar13 + -4) = uVar2;
            iVar4 = iVar4 + iVar15 + 1;
            a3 = (int)pdVar13 + 0x1c;
        }
        piVar3 = 0x8c4aa51c;
        uVar6 = uVar6 - 1;
        if (uVar6 == 0) {
            iVar9 = g_8c4aa51c;
            g_8c4aa520 = g_8c4aa520 + iVar4;
            *piVar3 = iVar9 + iVar5;
            return a3;
        }
    } while (true);
}

/*
 * gfxlib_fill_loop_2170f4  0x8c2170f4
 * area name: in the gfxlib library code range; behaviour name: a loop that writes memory
 * called by: alt_entry_216ed2, gfxlib_calls_fill_loop_216ed0
 */
u64 *gfxlib_fill_loop_2170f4(double *a0, double *a1, double *a2, u64 *a3) {
    u64 *puVar1;
    u64 *puVar2;
    double *pdVar3;
    u32 uVar4;
    int iVar5;
    double *pdVar6;
    double *pdVar7;
    u64 *puVar8;
    int iVar9;
    u64 *puVar10;
    double in_dr0;
    float fVar11;
    float fVar12;
    float fVar13;
    double dVar14;
    u64 uVar15;
    u64 uVar16;
    double dVar17;
    double dVar18;
    double dVar19;
    double in_dr4;
    double dVar20;
    u32 uVar21;
    double in_dr6;
    double dVar22;
    float fVar23;
    double in_dr8;
    double dVar24;
    double dVar25;
    u32 in_fr11;
    double dVar26;
    u64 in_dr12;
    double dVar27;
    float fVar28;
    double dVar29;
    float fVar30;
    double in_xd0;
    double in_xd2;
    double in_xd4;
    double in_xd6;
    double in_xd8;
    double dVar31;
    u64 in_xd12;
    u64 uVar32;
    bool bVar33;
    int iVar34;
    int iVar35;
    int iVar36;
    u32 auStack_a8[2];
    float afStack_a0[25];
    u8 auStack_3c[16];
    u64 auStack_2c[2];

    puVar10 = auStack_2c;
    auStack_2c[0] = CONCAT44((int)in_dr12, (int)((u64)in_dr12 >> 0x20));

    if ((g_8c4aa4f0 & 0x10000) == 0) {

        dVar27 = (double)CONCAT44(g_8c4aa4b8, (int)in_dr12);
        dVar14 = (double)CONCAT44(g_8c4aa4e0, g_8c4aa4dc);
        dVar29 = (double)CONCAT44(g_8c4aa4b4, g_8c4aa4a8);
        uVar21 = g_8c4aa4a8;
        uVar32 = CONCAT44(g_8c4aa4a8, in_fr11);

        dVar29 = (double)CONCAT44((int)((u64)dVar29 >> 0x20), SUB84(dVar29, 0) * SUB84(dVar14, 0));

        dVar27 = (double)CONCAT44((int)((u64)dVar27 >> 0x20), uVar21);
        uVar32 = in_xd12;

        dVar27 = (double)CONCAT44((int)((u64)dVar27 >> 0x20), SUB84(dVar27, 0) * (float)((u64)dVar14 >> 0x20));

        dVar14 = (double)(u64) * (u32 *)(a0 + 1);

        fVar13 = SUB84(dVar14, 0);

        dVar14 = (double)CONCAT44(1.0 / fVar13, fVar13);
        dVar26 = (double)CONCAT44(1.0 / SUB84(dVar29, 0), 1.0 / SUB84(dVar27, 0));

        puVar8 = (u64 *)((int)puVar10 + -0x6c);

        *(int *)((int)puVar10 + -0x4c) = (int)((u64)dVar14 >> 0x20);
        *(u32 *)puVar8 = *(u32 *)((int)a0 + 0xc);
        *(int *)((int)puVar10 + -100) = (int)((u64)in_dr4 >> 0x20);
        *(int *)((int)puVar10 + -0x68) = SUB84(in_dr4, 0);
        *(u32 *)((int)puVar10 + -0x58) = *(u32 *)a0;
        *(u32 *)((int)puVar10 + -0x5c) = *(u32 *)((int)a0 + 4);
        *(u32 *)((int)puVar10 + -0x60) = *(u32 *)(a0 + 1);
        dVar14 = (double)CONCAT44(*(u32 *)((int)puVar10 + -0x4c), *(u32 *)a0);

        fVar30 = (float)((u64)dVar29 >> 0x20);
        fVar13 = (float)((u64)dVar26 >> 0x20);

        fVar11 = (SUB84(dVar14, 0) - fVar30) * (float)((u64)dVar14 >> 0x20) * fVar13;

        *(float *)((int)puVar10 + -0x54) = fVar11;
        dVar14 = (double)CONCAT44(*(u32 *)((int)puVar10 + -0x4c), *(u32 *)((int)a0 + 4));

        fVar28 = (float)((u64)dVar27 >> 0x20);
        fVar11 = SUB84(dVar26, 0);

        fVar12 = (SUB84(dVar14, 0) - fVar28) * (float)((u64)dVar14 >> 0x20) * fVar11;

        *(float *)((int)puVar10 + -0x50) = fVar12;
        fVar12 = *(float *)(a1 + 1);

        dVar14 = (double)CONCAT44(1.0 / fVar12, fVar12);

        *(int *)((int)puVar10 + -0x28) = (int)((u64)dVar14 >> 0x20);
        *(u32 *)((int)puVar10 + -0x48) = *(u32 *)((int)a1 + 0xc);
        *(int *)((int)puVar10 + -0x40) = (int)((u64)in_dr6 >> 0x20);
        *(int *)((int)puVar10 + -0x44) = SUB84(in_dr6, 0);
        *(u32 *)((int)puVar10 + -0x34) = *(u32 *)a1;
        *(u32 *)((int)puVar10 + -0x38) = *(u32 *)((int)a1 + 4);
        *(u32 *)((int)puVar10 + -0x3c) = *(u32 *)(a1 + 1);
        dVar14 = (double)CONCAT44(*(u32 *)((int)puVar10 + -0x28), *(u32 *)a1);

        fVar12 = (SUB84(dVar14, 0) - fVar30) * (float)((u64)dVar14 >> 0x20) * fVar13;

        *(float *)((int)puVar10 + -0x30) = fVar12;
        dVar14 = (double)CONCAT44(*(u32 *)((int)puVar10 + -0x28), *(u32 *)((int)a1 + 4));

        fVar12 = (SUB84(dVar14, 0) - fVar28) * (float)((u64)dVar14 >> 0x20);

        dVar14 = (double)CONCAT44(0x3f800000, fVar12 * fVar11);

        *(int *)((int)puVar10 + -0x2c) = SUB84(dVar14, 0);
        dVar14 = (double)CONCAT44((int)((u64)dVar14 >> 0x20), *(u32 *)(a2 + 1));

        dVar14 = (double)CONCAT44((float)((u64)dVar14 >> 0x20) / SUB84(dVar14, 0), SUB84(dVar14, 0));

        *(int *)((int)puVar10 + -4) = (int)((u64)dVar14 >> 0x20);
        *(u32 *)((int)puVar10 + -0x24) = *(u32 *)((int)a2 + 0xc);
        *(int *)((int)puVar10 + -0x1c) = (int)((u64)in_dr8 >> 0x20);
        *(int *)((int)puVar10 + -0x20) = SUB84(in_dr8, 0);
        *(u32 *)((int)puVar10 + -0x10) = *(u32 *)a2;
        *(u32 *)((int)puVar10 + -0x14) = *(u32 *)((int)a2 + 4);
        *(u32 *)((int)puVar10 + -0x18) = *(u32 *)(a2 + 1);
        dVar14 = (double)CONCAT44(*(u32 *)((int)puVar10 + -4), *(u32 *)a2);

        puVar1 = (u64 *)((int)puVar10 + -0xfc);

        fVar13 = (SUB84(dVar14, 0) - fVar30) * (float)((u64)dVar14 >> 0x20) * fVar13;

        *(float *)((int)puVar10 + -0xc) = fVar13;
        dVar14 = (double)CONCAT44(*(u32 *)((int)puVar10 + -4), *(u32 *)((int)a2 + 4));

        dVar14 = (double)CONCAT44((int)((u64)dVar14 >> 0x20), SUB84(dVar14, 0) - fVar28);

        iVar9 = 0;

        fVar13 = (float)((u64)dVar14 >> 0x20);
        dVar14 = (double)CONCAT44(fVar13, SUB84(dVar14, 0) * fVar13 * fVar11);

        *(int *)((int)puVar10 + -8) = SUB84(dVar14, 0);

        iVar34 = 2;
        for (iVar5 = 0; iVar5 < 3; iVar5 = iVar5 + 1) {

            uVar15 = CONCAT44(*(u32 *)((int)puVar8 + iVar34 * 0x24 + 0x20), 0x3f800000);

            puVar2 = (u64 *)((int)puVar8 + iVar5 * 0x24 + 0x20);

            uVar16 = CONCAT44(*(u32 *)puVar2, (float)uVar15);

            fVar13 = (float)uVar16;
            if (((1 && (float)uVar15 < (float)((u64)uVar15 >> 0x20)) ^ 1) !=
                -((1 && fVar13 < (float)((u64)uVar16 >> 0x20)) - 1)) {

                fVar13 = *(float *)((int)puVar8 + iVar34 * 0x24 + 0x20);
                in_dr0 = (double)CONCAT44((int)((u64)in_dr0 >> 0x20), *(u32 *)((int)puVar8 + iVar5 * 0x24 + 0x20));
                fVar11 = fVar13;
                dVar14 = (double)CONCAT44(fVar13, SUB84(in_dr4, 0));

                dVar17 = (double)CONCAT44(0x3f800000, -fVar13);

                dVar17 = (double)CONCAT44(0x3f800000, -fVar13 + 1.0);
                dVar14 = (double)CONCAT44((int)((u64)in_dr0 >> 0x20), SUB84(in_dr0, 0) - fVar11);

                dVar20 = (double)CONCAT44(SUB84(dVar17, 0), *(u32 *)((int)puVar8 + iVar34 * 0x24 + 0x18));

                dVar20 = (double)CONCAT44((float)((u64)dVar20 >> 0x20) / SUB84(dVar14, 0), SUB84(dVar20, 0));

                dVar17 = (double)CONCAT44((int)((u64)dVar17 >> 0x20), *(u32 *)((int)puVar8 + iVar5 * 0x24 + 0x18));
                dVar14 = (double)((u64)dVar20 & 0xffffffff);
                dVar22 = in_xd0;

                dVar17 = (double)CONCAT44((int)((u64)dVar17 >> 0x20), SUB84(dVar17, 0) - SUB84(dVar20, 0));

                uVar21 = (u32)((u64)dVar20 >> 0x20);

                in_xd0 = (double)CONCAT44(*(u32 *)((int)puVar8 + iVar34 * 0x24 + 0x1c), SUB84(in_dr6, 0));
                dVar20 = (double)CONCAT44(uVar21, SUB84(dVar14, 0));
                dVar14 = (double)CONCAT44(uVar21, fVar30);

                dVar20 = (double)(u64)(u32)((float)((u64)dVar20 >> 0x20) * SUB84(dVar17, 0) + SUB84(dVar20, 0));

                dVar17 = (double)CONCAT44((int)((u64)dVar17 >> 0x20), *(u32 *)((int)puVar8 + iVar5 * 0x24 + 0x1c));
                uVar15 = CONCAT44(SUB84(dVar29, 0), SUB84(dVar20, 0));

                fVar13 = (float)((u64)in_xd0 >> 0x20);

                dVar17 = (double)CONCAT44((int)((u64)dVar17 >> 0x20), SUB84(dVar17, 0) - fVar13);
                dVar14 = (double)CONCAT44(uVar21, (float)((u64)uVar15 >> 0x20) * (float)uVar15 + SUB84(dVar14, 0));

                uVar21 = (u32)((u64)dVar14 >> 0x20);
                in_dr6 = dVar27;
                dVar20 = dVar14;

                in_dr6 = (double)CONCAT44(fVar28, SUB84(in_xd0, 0));
                dVar20 = (double)CONCAT44(uVar21, fVar13);
                in_xd0 = dVar22;

                dVar20 = (double)(u64)(u32)((float)((u64)dVar20 >> 0x20) * SUB84(dVar17, 0) + SUB84(dVar20, 0));

                uVar15 = uVar32;

                uVar15 = CONCAT44(SUB84(dVar27, 0), SUB84(dVar20, 0));

                in_dr6 = (double)CONCAT44((float)((u64)uVar15 >> 0x20) * (float)uVar15 + (float)((u64)in_dr6 >> 0x20),
                                          SUB84(in_dr6, 0));

                dVar20 = dVar14;

                dVar20 = (double)CONCAT44(uVar21, (float)uVar15);

                pdVar6 = (double *)(iVar9 * 0x24 + (int)puVar1);
                fVar13 = SUB84(dVar14, 0);

                *(float *)((int)pdVar6 + 0x14) = fVar13;
                *(int *)(pdVar6 + 2) = (int)((u64)in_dr6 >> 0x20);
                pdVar6 = (double *)((int)pdVar6 + 0xc);
                *(int *)pdVar6 = (int)((u64)dVar17 >> 0x20);
                fVar13 = *(float *)((int)puVar8 + iVar34 * 0x24 + 8);
                dVar14 = (double)CONCAT44(uVar21, fVar13);
                dVar17 = (double)CONCAT44(fVar13, *(u32 *)((int)puVar8 + iVar5 * 0x24 + 8));

                fVar11 = (float)((u64)dVar20 >> 0x20);

                fVar13 = SUB84(dVar17, 0) - fVar13;
                dVar17 = (double)CONCAT44(fVar11 * fVar13 + (float)((u64)dVar17 >> 0x20), fVar13);

                uVar21 = (u32)((u64)dVar17 >> 0x20);

                pdVar6 = (double *)((int)pdVar6 + -4);
                *(u32 *)pdVar6 = uVar21;
                dVar17 = (double)CONCAT44(uVar21, *(u32 *)((int)puVar8 + iVar5 * 0x24 + 4));
                dVar14 = (double)CONCAT44((int)((u64)dVar14 >> 0x20), *(u32 *)((int)puVar8 + iVar34 * 0x24 + 4));

                fVar13 = SUB84(dVar14, 0);

                fVar12 = SUB84(dVar17, 0) - fVar13;

                dVar17 = in_xd4;

                dVar17 = (double)CONCAT44(fVar13, fVar12);

                dVar17 = (double)CONCAT44(fVar11 * SUB84(dVar17, 0) + (float)((u64)dVar17 >> 0x20), SUB84(dVar17, 0));

                pdVar6 = (double *)((int)pdVar6 + -4);
                *(int *)pdVar6 = (int)((u64)dVar17 >> 0x20);

                pdVar7 = (double *)(iVar34 * 0x24 + (int)puVar8);
                uVar21 = (u32)((u64)dVar14 >> 0x20);
                if (g_8c4ab1d8 == 0x23) {
                    uVar4 = *(u32 *)pdVar7;
                    fVar13 = (float)(uVar4 >> 0x18);
                    dVar22 = (double)(u64)(u32)fVar13;
                    dVar17 = in_xd2;

                    dVar14 = (double)CONCAT44(uVar21, fVar13);
                    dVar17 = in_xd4;

                    if (fVar13 < 0.0) {

                        dVar22 = 6.58979161647419e-315;

                        dVar14 = (double)CONCAT44((int)((u64)dVar14 >> 0x20), SUB84(dVar14, 0) + SUB84(dVar22, 0));
                    }
                    fVar13 = (float)(uVar4 >> 0x10 & 0xff);
                    dVar18 = (double)(u64)(u32)fVar13;
                    dVar22 = in_xd2;

                    dVar22 = (double)CONCAT44(fVar13, SUB84(in_dr6, 0));

                    if (fVar13 < 0.0) {

                        dVar18 = 6.58979161647419e-315;

                        dVar22 = (double)CONCAT44((float)((u64)dVar22 >> 0x20) + SUB84(dVar18, 0), SUB84(dVar22, 0));
                    }
                    fVar13 = (float)(uVar4 >> 8 & 0xff);
                    dVar24 = (double)(u64)(u32)fVar13;
                    dVar18 = in_xd2;

                    dVar22 = (double)CONCAT44((int)((u64)dVar22 >> 0x20), fVar13);
                    dVar18 = in_xd6;

                    if (fVar13 < 0.0) {

                        dVar24 = 6.58979161647419e-315;

                        dVar22 = (double)CONCAT44((int)((u64)dVar22 >> 0x20), SUB84(dVar22, 0) + SUB84(dVar24, 0));
                    }
                    fVar13 = (float)(uVar4 & 0xff);
                    dVar25 = (double)(u64)(u32)fVar13;
                    dVar24 = in_xd2;

                    dVar24 = (double)CONCAT44(fVar13, SUB84(in_dr8, 0));

                    uVar4 = (u32)((u64)dVar24 >> 0x20);
                    dVar31 = dVar24;
                    if (0.0 <= fVar13) {

                        dVar24 = (double)(u64)uVar4;
                        dVar31 = in_xd8;

                    } else {

                        dVar24 = (double)CONCAT44(uVar4, uVar4);
                        dVar25 = 6.58979161647419e-315;
                        dVar31 = in_xd8;

                        dVar24 = (double)(u64)(u32)(SUB84(dVar24, 0) + SUB84(dVar25, 0));
                    }
                    uVar4 = *(u32 *)(iVar5 * 0x24 + (int)puVar8);
                    fVar13 = (float)(uVar4 >> 0x18);
                    dVar19 = (double)(u64)(u32)fVar13;
                    dVar25 = in_xd2;

                    dVar25 = (double)CONCAT44(fVar13, SUB84(dVar24, 0));

                    if (fVar13 < 0.0) {

                        dVar19 = 6.58979161647419e-315;

                        dVar25 = (double)CONCAT44((float)((u64)dVar25 >> 0x20) + SUB84(dVar19, 0), SUB84(dVar25, 0));
                    }
                    fVar13 = (float)(uVar4 >> 0x10 & 0xff);
                    dVar19 = (double)(u64)(u32)fVar13;
                    dVar24 = in_xd2;

                    dVar24 = (double)CONCAT44(fVar13, SUB84(dVar26, 0));

                    if (fVar13 < 0.0) {

                        dVar19 = 6.58979161647419e-315;

                        dVar24 = (double)CONCAT44((float)((u64)dVar24 >> 0x20) + SUB84(dVar19, 0), SUB84(dVar24, 0));
                    }
                    fVar13 = (float)(uVar4 >> 8 & 0xff);
                    dVar26 = (double)(u64)(u32)fVar13;

                    dVar24 = (double)CONCAT44((int)((u64)dVar24 >> 0x20), fVar13);

                    if (fVar13 < 0.0) {

                        dVar26 = 6.58979161647419e-315;

                        dVar24 = (double)CONCAT44((int)((u64)dVar24 >> 0x20), SUB84(dVar24, 0) + SUB84(dVar26, 0));
                    }

                    dVar26 = (double)((u64)(u32)(float)(uVar4 & 0xff) << 0x20);

                    fVar13 = (float)((u64)dVar26 >> 0x20);

                    *(float *)((int)puVar10 + -0x108) = fVar13;

                    if (SUB84(dVar26, 0) <= fVar13) {

                        dVar26 = (double)(u64) * (u32 *)((int)puVar10 + -0x108);

                    } else {

                        dVar26 = (double)CONCAT44(0x4f800000, *(u32 *)((int)puVar10 + -0x108));

                        dVar26 = (double)(u64)(u32)(SUB84(dVar26, 0) + (float)((u64)dVar26 >> 0x20));
                    }

                    dVar25 = (double)CONCAT44((float)((u64)dVar25 >> 0x20) - SUB84(dVar14, 0), SUB84(dVar25, 0));

                    fVar13 = SUB84(dVar26, 0);
                    *(float *)((int)puVar10 + -0x100) = fVar13;
                    in_dr0 = (double)CONCAT44((int)((u64)dVar14 >> 0x20), SUB84(dVar20, 0));
                    dVar26 = (double)CONCAT44(SUB84(dVar14, 0), fVar13);

                    fVar23 = SUB84(dVar25, 0);
                    fVar12 = (float)((u64)dVar22 >> 0x20);
                    fVar11 = (float)((u64)in_dr0 >> 0x20);

                    dVar24 = (double)CONCAT44((float)((u64)dVar24 >> 0x20) - fVar12, SUB84(dVar24, 0));
                    in_dr8 = (double)CONCAT44(fVar11 * (float)((u64)dVar25 >> 0x20) + (float)((u64)dVar26 >> 0x20),
                                              fVar13 - fVar23);

                    dVar20 = dVar22;

                    in_dr0 = (double)CONCAT44(fVar11, fVar12);
                    dVar20 = in_xd0;

                    dVar26 = (double)CONCAT44((int)((u64)dVar24 >> 0x20), SUB84(dVar24, 0) - SUB84(dVar22, 0));

                    in_xd4 = dVar18;

                    dVar14 = (double)((u64)dVar22 & 0xffffffff);
                    in_xd4 = dVar17;

                    fVar13 = (float)((u64)in_dr0 >> 0x20);
                    in_dr0 = (double)CONCAT44(fVar13, fVar13 * (float)((u64)dVar26 >> 0x20) + SUB84(in_dr0, 0));

                    in_dr4 = dVar31;

                    in_dr4 = (double)CONCAT44(fVar23, SUB84(in_dr8, 0));
                    in_dr8 = (double)CONCAT44((int)((u64)in_dr8 >> 0x20), fVar23);

                    fVar13 = (float)((u64)in_dr0 >> 0x20);

                    in_dr4 =
                        (double)CONCAT44(fVar13 * SUB84(in_dr4, 0) + (float)((u64)in_dr4 >> 0x20), SUB84(in_dr4, 0));

                    in_dr6 = dVar20;
                    dVar17 = in_dr4;
                    dVar24 = in_dr8;

                    uVar21 = (u32)((u64)in_dr4 >> 0x20);
                    in_dr4 = (double)CONCAT44(uVar21, SUB84(dVar14, 0));
                    in_dr6 = (double)CONCAT44(SUB84(in_dr0, 0), SUB84(dVar22, 0));
                    dVar17 = (double)CONCAT44(uVar21, (int)((u64)in_dr8 >> 0x20));
                    dVar24 = in_xd2;

                    in_xd2 = dVar24;
                    fVar11 = SUB84(dVar17, 0);
                    dVar14 = (double)CONCAT44(0x4f000000, fVar11);

                    in_dr4 = (double)CONCAT44((int)((u64)in_dr4 >> 0x20), fVar13 * SUB84(dVar26, 0) + SUB84(in_dr4, 0));

                    if (2.1474836e+09 <= fVar11) {

                        dVar14 = (double)CONCAT44(0x4f800000, fVar11 - 4.2949673e+09);
                    }

                    iVar34 = (int)SUB84(dVar14, 0);

                    uVar21 = (u32)((u64)dVar14 >> 0x20);
                    dVar14 = (double)CONCAT44(uVar21, 0x4f000000);
                    fVar13 = (float)((u64)in_dr6 >> 0x20);

                    bVar33 = fVar13 < 2.1474836e+09;

                    if (!bVar33) {

                        dVar14 = (double)CONCAT44(uVar21, 0x4f800000);
                        in_dr6 = (double)CONCAT44(fVar13 - 4.2949673e+09, SUB84(in_dr6, 0));
                    }

                    iVar35 = (int)(float)((u64)in_dr6 >> 0x20);

                    uVar21 = (u32)((u64)dVar14 >> 0x20);
                    dVar14 = (double)CONCAT44(uVar21, 0x4f000000);

                    bVar33 = SUB84(in_dr4, 0) < 2.1474836e+09;

                    if (!bVar33) {

                        dVar14 = (double)CONCAT44(uVar21, 0x4f800000);
                        in_dr4 = (double)CONCAT44((int)((u64)in_dr4 >> 0x20), SUB84(in_dr4, 0) - 4.2949673e+09);
                    }

                    iVar36 = (int)SUB84(in_dr4, 0);

                    dVar14 = (double)CONCAT44((int)((u64)dVar14 >> 0x20), 0x4f000000);
                    fVar13 = (float)((u64)in_dr4 >> 0x20);

                    bVar33 = fVar13 < 2.1474836e+09;

                    if (!bVar33) {

                        in_dr4 = (double)CONCAT44(fVar13 - 4.2949673e+09, SUB84(in_dr4, 0));
                    }

                    uVar4 = (u32)(float)((u64)in_dr4 >> 0x20);

                    *(u32 *)((int)pdVar6 + -4) = iVar34 << 0x18 | iVar35 << 0x10 | iVar36 << 8 | uVar4;
                    in_xd0 = dVar20;
                    in_xd6 = dVar18;
                    in_xd8 = dVar31;
                } else {
                    in_dr0 = dVar14;

                    in_dr0 = (double)CONCAT44(uVar21, SUB84(dVar20, 0));

                    *(double **)((int)puVar10 + -0x104) = pdVar7;
                    pdVar3 = (double *)(iVar5 * 0x24 + (int)puVar8);

                    fVar13 = *(float *)pdVar7;
                    dVar17 = (double)CONCAT44(fVar13, *(u32 *)pdVar3);
                    in_dr4 = (double)CONCAT44(uVar21, fVar13);

                    fVar13 = SUB84(dVar17, 0) - fVar13;
                    dVar17 =
                        (double)CONCAT44((float)((u64)in_dr0 >> 0x20) * fVar13 + (float)((u64)dVar17 >> 0x20), fVar13);

                    *(int *)((int)pdVar6 + -4) = (int)((u64)dVar17 >> 0x20);
                }
                iVar9 = iVar9 + 1;
            }
            pdVar6 = (double *)(iVar5 * 0x24 + (int)puVar8);

            dVar14 = (double)CONCAT44(*(u32 *)(pdVar6 + 4), 0x3f800000);

            if (SUB84(dVar14, 0) < (float)((u64)dVar14 >> 0x20)) {

                uVar15 = CONCAT44(*(u32 *)((int)pdVar6 + 0x14), SUB84(dVar14, 0));

                puVar2 = (u64 *)(iVar9 * 0x24 + (int)puVar1);
                iVar34 = iVar9 + 1;
                iVar9 = iVar9 + 1;

                *(int *)((int)puVar2 + 0x14) = (int)((u64)uVar15 >> 0x20);
                *(u32 *)(puVar2 + 2) = *(u32 *)(pdVar6 + 2);
                *(u32 *)((int)puVar2 + 0xc) = *(u32 *)((int)pdVar6 + 0xc);
                *(u32 *)(puVar2 + 1) = *(u32 *)(pdVar6 + 1);
                dVar14 = (double)CONCAT44(*(u32 *)((int)pdVar6 + 4), (int)uVar15);
                *(u32 *)((int)puVar2 + 4) = *(u32 *)((int)pdVar6 + 4);
                in_dr0 = (double)CONCAT44((int)((u64)in_dr0 >> 0x20), *(u32 *)pdVar6);
                *(u32 *)puVar2 = *(u32 *)pdVar6;
                iVar9 = iVar34;
            }
            iVar34 = iVar5;
        }
        if (g_8c277acc != 0) {
            pdVar6 = (double *)((int)puVar10 + -0x24);

            *(u32 *)((int)puVar10 + -0xb4) = *(u32 *)pdVar6;
            dVar14 = (double)CONCAT44((int)((u64)dVar14 >> 0x20), *(u32 *)pdVar6);
            *(u32 *)((int)puVar10 + -0x90) = *(u32 *)pdVar6;
        }

        uVar21 = *(u32 *)puVar1;
        puVar8 = (u64 *)((int)puVar10 + -0xf8);

        dVar27 = (double)CONCAT44(uVar21, 0x3f800000);

        dVar14 = (double)CONCAT44((int)((u64)dVar14 >> 0x20), uVar21);
        dVar27 = in_xd2;

        dVar14 = (double)CONCAT44((int)((u64)dVar14 >> 0x20), SUB84(dVar14, 0) + -1.0);

        *(int *)((int)a3 + 0x1c) = SUB84(dVar14, 0);
        *(u32 *)(a3 + 3) = uVar21;
        *(u32 *)((int)a3 + 0x14) = *(u32 *)puVar8;
        *(u32 *)(a3 + 2) = *(u32 *)((int)puVar8 + 4);
        *(u32 *)((int)a3 + 0xc) = *(u32 *)(puVar8 + 1);
        *(u32 *)(a3 + 1) = *(u32 *)((int)puVar8 + 0xc);
        dVar14 = (double)CONCAT44((int)((u64)dVar14 >> 0x20), *(u32 *)(puVar8 + 2));
        pdVar6 = (double *)((int)a3 + 4);
        *(u32 *)pdVar6 = *(u32 *)(puVar8 + 2);

        *(u32 *)((int)pdVar6 + -4) = 0xe0000000;

        uVar21 = *(u32 *)((int)puVar10 + -0xd8);
        puVar8 = (u64 *)((int)puVar10 + -0xd4);
        dVar14 = (double)CONCAT44((int)((u64)dVar14 >> 0x20), uVar21);
        dVar29 = (double)CONCAT44(uVar21, 0xbf800000);

        dVar14 = (double)CONCAT44((int)((u64)dVar14 >> 0x20), SUB84(dVar14, 0) + SUB84(dVar29, 0));

        *(int *)(pdVar6 + 7) = SUB84(dVar14, 0);
        *(u32 *)((int)pdVar6 + 0x34) = uVar21;
        *(u32 *)(pdVar6 + 6) = *(u32 *)puVar8;
        *(u32 *)((int)pdVar6 + 0x2c) = *(u32 *)((int)puVar8 + 4);
        *(u32 *)(pdVar6 + 5) = *(u32 *)(puVar8 + 1);
        *(u32 *)((int)pdVar6 + 0x24) = *(u32 *)((int)puVar8 + 0xc);
        dVar14 = (double)CONCAT44((int)((u64)dVar14 >> 0x20), *(u32 *)(puVar8 + 2));
        pdVar6 = pdVar6 + 4;
        *(u32 *)pdVar6 = *(u32 *)(puVar8 + 2);

        *(u32 *)((int)pdVar6 + -4) = 0xe0000000;
        if (iVar9 != 3) {

            uVar21 = *(u32 *)((int)puVar10 + -0x90);
            puVar8 = (u64 *)((int)puVar10 + -0x8c);
            dVar14 = (double)CONCAT44((int)((u64)dVar14 >> 0x20), uVar21);
            dVar29 = (double)CONCAT44(uVar21, SUB84(dVar29, 0));

            dVar14 = (double)CONCAT44((int)((u64)dVar14 >> 0x20), SUB84(dVar14, 0) + SUB84(dVar29, 0));

            *(int *)(pdVar6 + 7) = SUB84(dVar14, 0);
            *(u32 *)((int)pdVar6 + 0x34) = uVar21;
            *(u32 *)(pdVar6 + 6) = *(u32 *)puVar8;
            *(u32 *)((int)pdVar6 + 0x2c) = *(u32 *)((int)puVar8 + 4);
            *(u32 *)(pdVar6 + 5) = *(u32 *)(puVar8 + 1);
            *(u32 *)((int)pdVar6 + 0x24) = *(u32 *)((int)puVar8 + 0xc);
            dVar14 = (double)CONCAT44((int)((u64)dVar14 >> 0x20), *(u32 *)(puVar8 + 2));
            pdVar6 = pdVar6 + 4;
            *(u32 *)pdVar6 = *(u32 *)(puVar8 + 2);

            *(u32 *)((int)pdVar6 + -4) = 0xe0000000;
        }

        uVar21 = *(u32 *)((int)puVar10 + -0xb4);
        puVar8 = (u64 *)((int)puVar10 + -0xb0);
        dVar14 = (double)CONCAT44((int)((u64)dVar14 >> 0x20), uVar21);
        dVar29 = (double)CONCAT44(uVar21, SUB84(dVar29, 0));

        fVar13 = SUB84(dVar14, 0) + SUB84(dVar29, 0);

        *(float *)(pdVar6 + 7) = fVar13;
        *(u32 *)((int)pdVar6 + 0x34) = uVar21;
        *(u32 *)(pdVar6 + 6) = *(u32 *)puVar8;
        *(u32 *)((int)pdVar6 + 0x2c) = *(u32 *)((int)puVar8 + 4);
        *(u32 *)(pdVar6 + 5) = *(u32 *)(puVar8 + 1);
        *(u32 *)((int)pdVar6 + 0x24) = *(u32 *)((int)puVar8 + 0xc);
        pdVar6 = pdVar6 + 4;
        *(u32 *)pdVar6 = *(u32 *)(puVar8 + 2);

        *(u32 *)((int)pdVar6 + -4) = 0xf0000000;
        a3 = (u64 *)((int)pdVar6 + 0x1c);
        g_8c4aa520 = g_8c4aa520 + iVar9;
    }
    return a3;
}

/*
 * gfxlib_fill_loop_217618  0x8c217618
 * area name: in the gfxlib library code range; behaviour name: a loop that writes memory
 * called by: gfxlib_calls_fill_loop_21849c
 */
int gfxlib_fill_loop_217618(int a0) {
    float fVar1;
    bool bVar2;
    int iVar3;
    float *pfVar4;
    float *pfVar5;
    int iVar6;
    int iVar7;
    float fVar8;
    float fVar9;
    float fVar10;
    float fVar11;
    float in_fr5;
    float fVar12;
    float fVar13;
    float fVar14;
    u64 in_dr6;
    float fVar15;
    float fVar16;
    u64 in_xd0;
    u64 in_xd2;
    float in_xf4;
    float in_xf5;
    float in_xf6;
    float in_xf7;
    float in_xf8;
    float in_xf9;
    float in_xf10;
    float in_xf11;
    float in_xf12;
    float in_xf13;
    float in_xf14;
    float in_xf15;

    iVar3 = *(int *)(a0 + 0x14);
    pfVar5 = *(float **)(a0 + 0x18);
    iVar7 = *(int *)(a0 + 0x1c);
    pfVar4 = *(float **)(a0 + 0x20);
    fVar9 = *(float *)(a0 + 0x24);
    fVar8 = *(float *)(a0 + 0x28);
    fVar11 = *(float *)(a0 + 0x2c);
    fVar10 = *(float *)(a0 + 0x30);
    bVar2 = false;
    iVar6 = 0;
    do {
        fVar12 = *pfVar5;
        fVar13 = (float)in_dr6;
        fVar15 = pfVar5[1];
        in_dr6 = CONCAT44(fVar15, fVar13);
        pfVar5 = pfVar5 + 2;
        fVar1 = (float)((u64)in_xd0 >> 0x20) * in_fr5;
        fVar14 = (float)in_xd2 * in_fr5 + in_xf6 * fVar12 + in_xf10 * fVar13 + in_xf14 * fVar15;
        fVar14 = (float)((u64)in_xd2 >> 0x20) * in_fr5 + in_xf7 * fVar12 + in_xf11 * fVar13 + in_xf15 * fVar15;
        fVar14 = (float)((u64)in_dr6 >> 0x20);
        fVar16 = 1.0 / fVar14;
        pfVar4[3] = 1.0;
        if (fVar14 <= 1.0) {
            iVar6 = iVar6 + 1;
        }
        pfVar4[2] = fVar16;
        in_fr5 =
            ((float)in_xd0 * in_fr5 + in_xf4 * fVar12 + in_xf8 * fVar13 + in_xf12 * fVar15) * fVar8 * fVar16 + fVar10;
        bVar2 = (bool)(bVar2 ^ 1);
        pfVar4[1] = in_fr5;
        *pfVar4 = (fVar1 + in_xf5 * fVar12 + in_xf9 * fVar13 + in_xf13 * fVar15) * fVar9 * fVar16 + fVar11;
        if (!bVar2) {
            CacheBlockInvalidate(iVar7);
            iVar7 = iVar7 + 0x20;
        }
        iVar3 = iVar3 + -1;
        pfVar4 = pfVar4 + 4;
    } while (iVar3 != 0);
    if (bVar2) {
        CacheBlockInvalidate(iVar7);
    }
    return iVar6;
}

/*
 * gfxlib_fill_loop_21768c  0x8c21768c
 * area name: in the gfxlib library code range; behaviour name: a loop that writes memory
 * called by: gfxlib_calls_fill_loop_21849c
 */
int gfxlib_fill_loop_21768c(int a0) {
    float fVar1;
    float fVar2;
    bool bVar3;
    int iVar4;
    float *pfVar5;
    float *pfVar6;
    int iVar7;
    int iVar8;
    float fVar9;
    float fVar10;
    float fVar11;
    float in_fr5;
    float fVar12;
    float in_fr7;
    float fVar13;
    float fVar14;
    float fVar16;
    float fVar17;
    float in_fr9;
    float in_fr11;
    float fVar18;
    u64 uVar19;
    float fVar20;
    u64 in_xd0;
    u64 in_xd2;
    float in_xf4;
    float in_xf5;
    float in_xf7;
    float in_xf8;
    float in_xf9;
    u64 in_xd10;
    u64 in_xd12;
    u64 in_xd14;
    u64 uVar15;

    uVar15 = CONCAT44(in_fr7, in_fr7);
    fVar16 = in_fr5 * *(float *)(a0 + 4) + in_fr5 * *(float *)a0 + in_fr7 * 0.0 + in_fr7 * *(float *)(a0 + 8);
    uVar19 = CONCAT44(in_fr11, in_fr11);
    fVar16 = in_fr9 * *(float *)(a0 + 4) + in_fr9 * *(float *)a0 + in_fr11 * 0.0 + in_fr11 * *(float *)(a0 + 8);
    fVar20 = *(float *)(a0 + 0x10);
    iVar4 = *(int *)(a0 + 0x14);
    pfVar6 = *(float **)(a0 + 0x18);
    iVar8 = *(int *)(a0 + 0x1c);
    pfVar5 = *(float **)(a0 + 0x20);
    fVar9 = *(float *)(a0 + 0x24);
    fVar16 = *(float *)(a0 + 0x28);
    fVar11 = *(float *)(a0 + 0x2c);
    fVar10 = *(float *)(a0 + 0x30);
    bVar3 = false;
    iVar7 = 0;
    do {
        fVar12 = *pfVar6;
        fVar13 = (float)uVar15;
        fVar17 = pfVar6[1];
        fVar1 = (float)((u64)in_xd0 >> 0x20) * in_fr5;
        fVar2 = (float)((u64)in_xd2 >> 0x20) * in_fr5 + in_xf7 * fVar12 + (float)((u64)in_xd10 >> 0x20) * fVar13 +
                (float)((u64)in_xd14 >> 0x20) * fVar17;
        pfVar6 = pfVar6 + 4;
        fVar14 = 1.0 / fVar2;
        uVar15 = CONCAT44(fVar2, fVar14);
        fVar18 = (float)uVar19;
        if ((float)uVar19 <= fVar20) {
            fVar18 = fVar20;
        }
        pfVar5[3] = fVar18;
        uVar19 = 0x3f800000;
        if (fVar2 <= 1.0) {
            iVar7 = iVar7 + 1;
        }
        pfVar5[2] = fVar14;
        in_fr5 =
            ((float)in_xd0 * in_fr5 + in_xf4 * fVar12 + in_xf8 * fVar13 + (float)in_xd12 * fVar17) * fVar16 * fVar14 +
            fVar10;
        bVar3 = (bool)(bVar3 ^ 1);
        pfVar5[1] = in_fr5;
        *pfVar5 =
            (fVar1 + in_xf5 * fVar12 + in_xf9 * fVar13 + (float)((u64)in_xd12 >> 0x20) * fVar17) * fVar9 * fVar14 +
            fVar11;
        if (!bVar3) {
            CacheBlockInvalidate(iVar8);
            iVar8 = iVar8 + 0x20;
        }
        iVar4 = iVar4 + -1;
        pfVar5 = pfVar5 + 4;
    } while (iVar4 != 0);
    if (bVar3) {
        CacheBlockInvalidate(iVar8);
    }
    return iVar7;
}

/*
 * gfxlib_fill_loop_217744  0x8c217744
 * area name: in the gfxlib library code range; behaviour name: a loop that writes memory
 * called by: gfxlib_calls_fill_loop_21849c
 */
int gfxlib_fill_loop_217744(int a0) {
    float fVar1;
    bool bVar2;
    int iVar3;
    float *pfVar4;
    float *pfVar5;
    int iVar6;
    int iVar7;
    float fVar8;
    float fVar9;
    float fVar10;
    float fVar11;
    float fVar12;
    float fVar13;
    float fVar14;
    float fVar15;
    u64 in_xd0;
    u64 in_xd2;
    u64 in_xd4;
    float in_xf7;
    float in_xf8;
    float in_xf9;
    float in_xf11;
    float in_xf12;
    float in_xf13;
    float in_xf15;

    iVar3 = *(int *)(a0 + 0x14);
    pfVar5 = *(float **)(a0 + 0x18);
    iVar7 = *(int *)(a0 + 0x1c);
    pfVar4 = *(float **)(a0 + 0x20);
    fVar9 = *(float *)(a0 + 0x24);
    fVar8 = *(float *)(a0 + 0x28);
    fVar11 = *(float *)(a0 + 0x2c);
    fVar10 = *(float *)(a0 + 0x30);
    bVar2 = false;
    iVar6 = 0;
    do {
        fVar13 = *pfVar5;
        fVar12 = pfVar5[1];
        fVar14 = pfVar5[2];
        pfVar5 = pfVar5 + 3;
        fVar1 = (float)((u64)in_xd2 >> 0x20) * fVar12 + in_xf7 * fVar13 + in_xf11 * 1.0 + in_xf15 * fVar14;
        fVar15 = 1.0 / fVar1;
        pfVar4[3] = 1.0;
        if (fVar1 <= 1.0) {
            iVar6 = iVar6 + 1;
        }
        pfVar4[2] = fVar15;
        bVar2 = (bool)(bVar2 ^ 1);
        pfVar4[1] =
            ((float)in_xd0 * fVar12 + (float)in_xd4 * fVar13 + in_xf8 * 1.0 + in_xf12 * fVar14) * fVar8 * fVar15 +
            fVar10;
        *pfVar4 = ((float)((u64)in_xd0 >> 0x20) * fVar12 + (float)((u64)in_xd4 >> 0x20) * fVar13 + in_xf9 * 1.0 +
                   in_xf13 * fVar14) *
                      fVar9 * fVar15 +
                  fVar11;
        if (!bVar2) {
            CacheBlockInvalidate(iVar7);
            iVar7 = iVar7 + 0x20;
        }
        iVar3 = iVar3 + -1;
        pfVar4 = pfVar4 + 4;
    } while (iVar3 != 0);
    if (bVar2) {
        CacheBlockInvalidate(iVar7);
    }
    return iVar6;
}

/*
 * gfxlib_fill_loop_2177b8  0x8c2177b8
 * area name: in the gfxlib library code range; behaviour name: a loop that writes memory
 * called by: gfxlib_calls_fill_loop_21849c
 */
int gfxlib_fill_loop_2177b8(int a0) {
    float fVar1;
    bool bVar2;
    int iVar3;
    float *pfVar4;
    float *pfVar5;
    int iVar6;
    int iVar7;
    float fVar8;
    float fVar9;
    float fVar10;
    float fVar11;
    float fVar12;
    float fVar13;
    float fVar14;
    float fVar15;
    u64 in_xd0;
    u64 in_xd2;
    u64 in_xd4;
    float in_xf7;
    float in_xf8;
    float in_xf9;
    float in_xf11;
    float in_xf12;
    float in_xf13;
    float in_xf15;

    iVar3 = *(int *)(a0 + 0x14);
    pfVar5 = *(float **)(a0 + 0x18);
    iVar7 = *(int *)(a0 + 0x1c);
    pfVar4 = *(float **)(a0 + 0x20);
    fVar9 = *(float *)(a0 + 0x24);
    fVar8 = *(float *)(a0 + 0x28);
    fVar11 = *(float *)(a0 + 0x2c);
    fVar10 = *(float *)(a0 + 0x30);
    bVar2 = false;
    iVar6 = 0;
    do {
        fVar13 = *pfVar5;
        fVar12 = pfVar5[1];
        fVar14 = pfVar5[2];
        fVar1 = (float)((u64)in_xd2 >> 0x20) * fVar12 + in_xf7 * fVar13 + in_xf11 * 1.0 + in_xf15 * fVar14;
        fVar15 = 1.0 / fVar1;
        pfVar5 = pfVar5 + 4;
        pfVar4[3] = 1.0;
        if (fVar1 <= 1.0) {
            iVar6 = iVar6 + 1;
        }
        pfVar4[2] = fVar15;
        bVar2 = (bool)(bVar2 ^ 1);
        pfVar4[1] =
            ((float)in_xd0 * fVar12 + (float)in_xd4 * fVar13 + in_xf8 * 1.0 + in_xf12 * fVar14) * fVar8 * fVar15 +
            fVar10;
        *pfVar4 = ((float)((u64)in_xd0 >> 0x20) * fVar12 + (float)((u64)in_xd4 >> 0x20) * fVar13 + in_xf9 * 1.0 +
                   in_xf13 * fVar14) *
                      fVar9 * fVar15 +
                  fVar11;
        if (!bVar2) {
            CacheBlockInvalidate(iVar7);
            iVar7 = iVar7 + 0x20;
        }
        iVar3 = iVar3 + -1;
        pfVar4 = pfVar4 + 4;
    } while (iVar3 != 0);
    if (bVar2) {
        CacheBlockInvalidate(iVar7);
    }
    return iVar6;
}

/*
 * gfxlib_fill_loop_21782c  0x8c21782c
 * area name: in the gfxlib library code range; behaviour name: a loop that writes memory
 * called by: gfxlib_calls_fill_loop_21849c
 */
int gfxlib_fill_loop_21782c(int a0) {
    float fVar1;
    bool bVar2;
    int iVar3;
    int iVar4;
    float *pfVar5;
    int iVar6;
    int iVar7;
    float fVar8;
    float fVar9;
    float fVar10;
    float fVar11;
    float fVar12;
    float fVar13;
    u64 in_xd0;
    u64 in_xd2;
    u64 in_xd4;
    float in_xf7;
    u64 in_xd8;
    u64 in_xd10;
    float in_xf13;
    float in_xf15;

    iVar3 = *(int *)(a0 + 0x14);
    pfVar5 = *(float **)(a0 + 0x18);
    iVar7 = *(int *)(a0 + 0x1c);
    iVar4 = *(int *)(a0 + 0x20);
    fVar12 = *(float *)(a0 + 0x24);
    fVar13 = *(float *)(a0 + 0x2c);
    bVar2 = false;
    iVar6 = 0;
    do {
        fVar10 = *pfVar5;
        fVar9 = pfVar5[1];
        fVar11 = pfVar5[2];
        fVar1 = (float)((u64)in_xd2 >> 0x20) * fVar9 + in_xf7 * fVar10 + (float)((u64)in_xd10 >> 0x20) * 1.0 +
                in_xf15 * fVar11;
        fVar8 = 1.0 / fVar1;
        pfVar5 = pfVar5 + 4;
        if (fVar1 <= 1.0) {
            iVar6 = iVar6 + 1;
        }
        bVar2 = (bool)(bVar2 ^ 1);
        *(float *)(iVar4 + 0xc) = fVar8;
        *(float *)(iVar4 + 8) = fVar8 *
                                    ((float)((u64)in_xd0 >> 0x20) * fVar9 + (float)((u64)in_xd4 >> 0x20) * fVar10 +
                                     (float)((u64)in_xd8 >> 0x20) * 1.0 + in_xf13 * fVar11) *
                                    fVar12 +
                                fVar13;
        if (!bVar2) {
            CacheBlockInvalidate(iVar7);
            iVar7 = iVar7 + 0x20;
        }
        iVar3 = iVar3 + -1;
        iVar4 = iVar4 + 0x18;
    } while (iVar3 != 0);
    if (bVar2) {
        CacheBlockInvalidate(iVar7);
    }
    return iVar6;
}

/*
 * gfxlib_fill_loop_2178a0  0x8c2178a0
 * area name: in the gfxlib library code range; behaviour name: a loop that writes memory
 * called by: gfxlib_calls_fill_loop_21849c
 */
int gfxlib_fill_loop_2178a0(int a0) {
    float fVar1;
    bool bVar2;
    int iVar3;
    float *pfVar4;
    float *pfVar5;
    float *pfVar6;
    int iVar7;
    int iVar8;
    float fVar9;
    float fVar10;
    float fVar11;
    float fVar12;
    float fVar13;
    float fVar14;
    float fVar15;
    float fVar16;
    u64 in_xd0;
    u64 in_xd2;
    u64 in_xd4;
    float in_xf7;
    u64 in_xd8;
    float in_xf11;
    float in_xf12;
    float in_xf13;
    float in_xf15;

    iVar3 = *(int *)(a0 + 0x14);
    pfVar5 = *(float **)(a0 + 0x18);
    iVar8 = *(int *)(a0 + 0x1c);
    pfVar4 = *(float **)(a0 + 0x20);
    fVar10 = *(float *)(a0 + 0x24);
    fVar9 = *(float *)(a0 + 0x28);
    fVar12 = *(float *)(a0 + 0x2c);
    fVar11 = *(float *)(a0 + 0x30);
    bVar2 = false;
    iVar7 = 0;
    do {
        fVar14 = *pfVar5;
        fVar13 = pfVar5[1];
        fVar15 = pfVar5[2];
        pfVar6 = pfVar5 + 3;
        fVar1 = (float)((u64)in_xd2 >> 0x20) * fVar13 + in_xf7 * fVar14 + in_xf11 * 1.0 + in_xf15 * fVar15;
        pfVar5 = pfVar5 + 4;
        fVar16 = 1.0 / fVar1;
        pfVar4[3] = (float)(int)(short)((u32)*pfVar6 >> 0x10) * 3.0517576e-05;
        if (fVar1 <= 1.0) {
            iVar7 = iVar7 + 1;
        }
        pfVar4[2] = fVar16;
        bVar2 = (bool)(bVar2 ^ 1);
        pfVar4[1] = ((float)in_xd0 * fVar13 + (float)in_xd4 * fVar14 + (float)in_xd8 * 1.0 + in_xf12 * fVar15) * fVar9 *
                        fVar16 +
                    fVar11;
        *pfVar4 = ((float)((u64)in_xd0 >> 0x20) * fVar13 + (float)((u64)in_xd4 >> 0x20) * fVar14 +
                   (float)((u64)in_xd8 >> 0x20) * 1.0 + in_xf13 * fVar15) *
                      fVar10 * fVar16 +
                  fVar12;
        if (!bVar2) {
            CacheBlockInvalidate(iVar8);
            iVar8 = iVar8 + 0x20;
        }
        iVar3 = iVar3 + -1;
        pfVar4 = pfVar4 + 4;
    } while (iVar3 != 0);
    if (bVar2) {
        CacheBlockInvalidate(iVar8);
    }
    return iVar7;
}

/*
 * gfxlib_fill_loop_217924  0x8c217924
 * area name: in the gfxlib library code range; behaviour name: a loop that writes memory
 * called by: gfxlib_calls_fill_loop_21849c
 */
int gfxlib_fill_loop_217924(int a0) {
    float fVar1;
    bool bVar2;
    int iVar3;
    int iVar4;
    float *pfVar5;
    int iVar6;
    int iVar7;
    float fVar8;
    float fVar9;
    float fVar10;
    float fVar11;
    float fVar12;
    float fVar13;
    u64 in_xd0;
    u64 in_xd2;
    u64 in_xd4;
    float in_xf7;
    u64 in_xd8;
    u64 in_xd10;
    u64 in_xd12;
    u64 in_xd14;

    iVar3 = *(int *)(a0 + 0x14);
    pfVar5 = *(float **)(a0 + 0x18);
    iVar7 = *(int *)(a0 + 0x1c);
    iVar4 = *(int *)(a0 + 0x20);
    fVar12 = *(float *)(a0 + 0x24);
    fVar13 = *(float *)(a0 + 0x2c);
    bVar2 = false;
    iVar6 = 0;
    do {
        fVar10 = *pfVar5;
        fVar9 = pfVar5[1];
        fVar11 = pfVar5[2];
        fVar1 = (float)((u64)in_xd2 >> 0x20) * fVar9 + in_xf7 * fVar10 + (float)((u64)in_xd10 >> 0x20) * 1.0 +
                (float)((u64)in_xd14 >> 0x20) * fVar11;
        pfVar5 = pfVar5 + 6;
        fVar8 = 1.0 / fVar1;
        if (fVar1 <= 1.0) {
            iVar6 = iVar6 + 1;
        }
        bVar2 = (bool)(bVar2 ^ 1);
        *(float *)(iVar4 + 0xc) = fVar8;
        *(float *)(iVar4 + 8) = fVar8 *
                                    ((float)((u64)in_xd0 >> 0x20) * fVar9 + (float)((u64)in_xd4 >> 0x20) * fVar10 +
                                     (float)((u64)in_xd8 >> 0x20) * 1.0 + (float)((u64)in_xd12 >> 0x20) * fVar11) *
                                    fVar12 +
                                fVar13;
        if (!bVar2) {
            CacheBlockInvalidate(iVar7);
            iVar7 = iVar7 + 0x20;
        }
        iVar3 = iVar3 + -1;
        iVar4 = iVar4 + 0x18;
    } while (iVar3 != 0);
    if (bVar2) {
        CacheBlockInvalidate(iVar7);
    }
    return iVar6;
}

/*
 * gfxlib_fill_loop_2179e4  0x8c2179e4
 * area name: in the gfxlib library code range; behaviour name: a loop that writes memory
 * called by: gfxlib_calls_fill_loop_21849c
 */
int gfxlib_fill_loop_2179e4(int a0) {
    float fVar1;
    bool bVar2;
    int iVar3;
    float *pfVar4;
    float *pfVar5;
    int iVar6;
    int iVar7;
    float fVar8;
    float fVar9;
    float fVar10;
    float fVar11;
    float fVar12;
    float fVar13;
    float fVar14;
    float fVar15;
    float fVar16;
    float fVar17;
    u64 in_xd0;
    u64 in_xd2;
    u64 in_xd4;
    float in_xf7;
    u64 in_xd8;
    u64 in_xd10;
    u64 in_xd12;
    u64 in_xd14;

    fVar17 = *(float *)(a0 + 0x10);
    iVar3 = *(int *)(a0 + 0x14);
    pfVar5 = *(float **)(a0 + 0x18);
    iVar7 = *(int *)(a0 + 0x1c);
    pfVar4 = *(float **)(a0 + 0x20);
    fVar9 = *(float *)(a0 + 0x24);
    fVar8 = *(float *)(a0 + 0x28);
    fVar11 = *(float *)(a0 + 0x2c);
    fVar10 = *(float *)(a0 + 0x30);
    bVar2 = false;
    iVar6 = 0;
    do {
        fVar13 = *pfVar5;
        fVar12 = pfVar5[1];
        fVar15 = pfVar5[2];
        fVar1 = (float)((u64)in_xd2 >> 0x20) * fVar12 + in_xf7 * fVar13 + (float)((u64)in_xd10 >> 0x20) * 1.0 +
                (float)((u64)in_xd14 >> 0x20) * fVar15;
        fVar14 = 1.0 / fVar1;
        pfVar5 = pfVar5 + 7;
        fVar16 = 1.0;
        if (1.0 <= fVar17) {
            fVar16 = fVar17;
        }
        pfVar4[3] = fVar16;
        if (fVar1 <= 1.0) {
            iVar6 = iVar6 + 1;
        }
        pfVar4[2] = fVar14;
        bVar2 = (bool)(bVar2 ^ 1);
        pfVar4[1] = ((float)in_xd0 * fVar12 + (float)in_xd4 * fVar13 + (float)in_xd8 * 1.0 + (float)in_xd12 * fVar15) *
                        fVar8 * fVar14 +
                    fVar10;
        *pfVar4 = ((float)((u64)in_xd0 >> 0x20) * fVar12 + (float)((u64)in_xd4 >> 0x20) * fVar13 +
                   (float)((u64)in_xd8 >> 0x20) * 1.0 + (float)((u64)in_xd12 >> 0x20) * fVar15) *
                      fVar9 * fVar14 +
                  fVar11;
        if (!bVar2) {
            CacheBlockInvalidate(iVar7);
            iVar7 = iVar7 + 0x20;
        }
        iVar3 = iVar3 + -1;
        pfVar4 = pfVar4 + 4;
    } while (iVar3 != 0);
    if (bVar2) {
        CacheBlockInvalidate(iVar7);
    }
    return iVar6;
}

/*
 * gfxlib_fill_loop_217aa4  0x8c217aa4
 * area name: in the gfxlib library code range; behaviour name: a loop that writes memory
 * called by: gfxlib_calls_fill_loop_21849c
 */
int gfxlib_fill_loop_217aa4(int a0) {
    float fVar1;
    bool bVar2;
    int iVar3;
    int iVar4;
    float *pfVar5;
    int iVar6;
    int iVar7;
    float fVar8;
    float fVar9;
    float fVar10;
    float fVar11;
    float fVar12;
    float fVar13;
    u64 in_xd0;
    u64 in_xd2;
    u64 in_xd4;
    float in_xf7;
    u64 in_xd8;
    u64 in_xd10;
    float in_xf13;
    float in_xf15;

    iVar3 = *(int *)(a0 + 0x14);
    pfVar5 = *(float **)(a0 + 0x18);
    iVar7 = *(int *)(a0 + 0x1c);
    iVar4 = *(int *)(a0 + 0x20);
    fVar12 = *(float *)(a0 + 0x24);
    fVar13 = *(float *)(a0 + 0x2c);
    bVar2 = false;
    iVar6 = 0;
    do {
        fVar10 = *pfVar5;
        fVar9 = pfVar5[1];
        fVar11 = pfVar5[2];
        fVar1 = (float)((u64)in_xd2 >> 0x20) * fVar9 + in_xf7 * fVar10 + (float)((u64)in_xd10 >> 0x20) * 1.0 +
                in_xf15 * fVar11;
        fVar8 = 1.0 / fVar1;
        pfVar5 = pfVar5 + 7;
        if (fVar1 <= 1.0) {
            iVar6 = iVar6 + 1;
        }
        bVar2 = (bool)(bVar2 ^ 1);
        *(float *)(iVar4 + 0xc) = fVar8;
        *(float *)(iVar4 + 8) = fVar8 *
                                    ((float)((u64)in_xd0 >> 0x20) * fVar9 + (float)((u64)in_xd4 >> 0x20) * fVar10 +
                                     (float)((u64)in_xd8 >> 0x20) * 1.0 + in_xf13 * fVar11) *
                                    fVar12 +
                                fVar13;
        if (!bVar2) {
            CacheBlockInvalidate(iVar7);
            iVar7 = iVar7 + 0x20;
        }
        iVar3 = iVar3 + -1;
        iVar4 = iVar4 + 0x18;
    } while (iVar3 != 0);
    if (bVar2) {
        CacheBlockInvalidate(iVar7);
    }
    return iVar6;
}

/*
 * gfxlib_fill_loop_217b18  0x8c217b18
 * area name: in the gfxlib library code range; behaviour name: a loop that writes memory
 * called by: gfxlib_calls_fill_loop_21849c
 */
int gfxlib_fill_loop_217b18(int a0, u32 a1) {
    float fVar1;
    float fVar2;
    u32 uVar3;
    int iVar4;
    float *pfVar5;
    float *pfVar6;
    float *pfVar7;
    int iVar8;
    int iVar9;
    float fVar10;
    float fVar11;
    float fVar12;
    float fVar13;
    float fVar14;
    float fVar15;
    float fVar16;
    float fVar17;
    float fVar18;
    u64 in_xd0;
    float in_xf3;
    u64 in_xd4;
    float in_xf7;
    u64 in_xd8;
    u64 in_xd10;
    u64 in_xd12;
    u64 in_xd14;

    fVar18 = *(float *)(a0 + 0x10);
    iVar4 = *(int *)(a0 + 0x14);
    pfVar5 = *(float **)(a0 + 0x18);
    iVar9 = *(int *)(a0 + 0x1c);
    fVar15 = *(float *)(a0 + 0x24);
    fVar14 = *(float *)(a0 + 0x28);
    fVar17 = *(float *)(a0 + 0x2c);
    fVar16 = *(float *)(a0 + 0x30);
    uVar3 = a1 >> 8 & 0xff;
    iVar8 = 0;
    do {
        fVar12 = *pfVar5;
        fVar11 = pfVar5[1];
        fVar13 = pfVar5[2];
        fVar1 = (float)in_xd0 * fVar11 + (float)in_xd4 * fVar12 + (float)in_xd8 * 1.0 + (float)in_xd12 * fVar13;
        fVar2 = (float)((u64)in_xd0 >> 0x20) * fVar11 + (float)((u64)in_xd4 >> 0x20) * fVar12 +
                (float)((u64)in_xd8 >> 0x20) * 1.0 + (float)((u64)in_xd12 >> 0x20) * fVar13;
        fVar11 = in_xf3 * fVar11 + in_xf7 * fVar12 + (float)((u64)in_xd10 >> 0x20) * 1.0 +
                 (float)((u64)in_xd14 >> 0x20) * fVar13;
        pfVar6 = pfVar5 + 6;
        pfVar5 = pfVar5 + 7;
        pfVar7 = (float *)(SUB42(*pfVar6, 0) * 0x10 + iVar9);
        fVar12 = (float)((u32)*pfVar6 >> 0x10) * 0.0039215684;
        if (uVar3 == 0) {
            pfVar7[3] = fVar12 * 0.0;
            pfVar7[2] = fVar11 * fVar12;
            pfVar7[1] = fVar1 * fVar12;
            *pfVar7 = fVar2 * fVar12;
        } else if (uVar3 == 1) {
            fVar15 = fVar12 * fVar11 + pfVar7[2];
            fVar14 = fVar12 * 0.0 + pfVar7[3];
            pfVar7[3] = fVar14;
            pfVar7[2] = fVar15;
            pfVar7[1] = fVar12 * fVar1 + pfVar7[1];
            *pfVar7 = fVar12 * fVar2 + *pfVar7;
        } else {
            fVar10 = fVar12 * fVar11 + pfVar7[2];
            fVar11 = fVar12 * 0.0 + pfVar7[3] + fVar18;
            fVar13 = 1.0 / fVar10;
            if (fVar11 <= fVar18) {
                fVar11 = fVar18;
            }
            pfVar7[3] = fVar11;
            if (fVar10 <= 1.0) {
                iVar8 = iVar8 + 1;
            }
            pfVar7[2] = fVar13;
            pfVar7[1] = (fVar12 * fVar1 + pfVar7[1]) * fVar14 * fVar13 + fVar16;
            *pfVar7 = (fVar12 * fVar2 + *pfVar7) * fVar15 * fVar13 + fVar17;
        }
        iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
    return iVar8;
}

/*
 * gfxlib_fill_loop_217c20  0x8c217c20
 * area name: in the gfxlib library code range; behaviour name: a loop that writes memory
 * called by: gfxlib_calls_fill_loop_21849c
 */
int gfxlib_fill_loop_217c20(int a0) {
    float fVar1;
    bool bVar2;
    int iVar3;
    float *pfVar4;
    float *pfVar5;
    int iVar6;
    int iVar7;
    float fVar8;
    float fVar9;
    float fVar10;
    float fVar11;
    float fVar12;
    float fVar13;
    float fVar14;
    float fVar15;
    float fVar16;
    float fVar17;
    u64 in_xd0;
    u64 in_xd2;
    u64 in_xd4;
    float in_xf7;
    float in_xf8;
    float in_xf9;
    u64 in_xd10;
    u64 in_xd12;
    u64 in_xd14;

    fVar17 = *(float *)(a0 + 0x10);
    iVar3 = *(int *)(a0 + 0x14);
    pfVar5 = *(float **)(a0 + 0x18);
    iVar7 = *(int *)(a0 + 0x1c);
    pfVar4 = *(float **)(a0 + 0x20);
    fVar9 = *(float *)(a0 + 0x24);
    fVar8 = *(float *)(a0 + 0x28);
    fVar11 = *(float *)(a0 + 0x2c);
    fVar10 = *(float *)(a0 + 0x30);
    bVar2 = false;
    iVar6 = 0;
    do {
        fVar13 = *pfVar5;
        fVar12 = pfVar5[1];
        fVar15 = pfVar5[2];
        fVar1 = (float)((u64)in_xd2 >> 0x20) * fVar12 + in_xf7 * fVar13 + (float)((u64)in_xd10 >> 0x20) * 1.0 +
                (float)((u64)in_xd14 >> 0x20) * fVar15;
        pfVar5 = pfVar5 + 4;
        fVar14 = 1.0 / fVar1;
        fVar16 = 1.0;
        if (1.0 <= fVar17) {
            fVar16 = fVar17;
        }
        pfVar4[3] = fVar16;
        if (fVar1 <= 1.0) {
            iVar6 = iVar6 + 1;
        }
        pfVar4[2] = fVar14;
        bVar2 = (bool)(bVar2 ^ 1);
        pfVar4[1] = ((float)in_xd0 * fVar12 + (float)in_xd4 * fVar13 + in_xf8 * 1.0 + (float)in_xd12 * fVar15) * fVar8 *
                        fVar14 +
                    fVar10;
        *pfVar4 = ((float)((u64)in_xd0 >> 0x20) * fVar12 + (float)((u64)in_xd4 >> 0x20) * fVar13 + in_xf9 * 1.0 +
                   (float)((u64)in_xd12 >> 0x20) * fVar15) *
                      fVar9 * fVar14 +
                  fVar11;
        if (!bVar2) {
            CacheBlockInvalidate(iVar7);
            iVar7 = iVar7 + 0x20;
        }
        iVar3 = iVar3 + -1;
        pfVar4 = pfVar4 + 4;
    } while (iVar3 != 0);
    if (bVar2) {
        CacheBlockInvalidate(iVar7);
    }
    return iVar6;
}

/*
 * gfxlib_fill_loop_217d1c  0x8c217d1c
 * area name: in the gfxlib library code range; behaviour name: a loop that writes memory
 * called by: gfxlib_calls_fill_loop_21849c
 */
int gfxlib_fill_loop_217d1c(int a0) {
    float fVar1;
    bool bVar2;
    int iVar3;
    float *pfVar4;
    float *pfVar5;
    int iVar6;
    int iVar7;
    float fVar8;
    float fVar9;
    float fVar10;
    float fVar11;
    float fVar12;
    float fVar13;
    float fVar14;
    float fVar15;
    float fVar16;
    float fVar17;
    u64 in_xd0;
    u64 in_xd2;
    u64 in_xd4;
    float in_xf7;
    float in_xf8;
    float in_xf9;
    u64 in_xd10;
    u64 in_xd12;
    u64 in_xd14;

    fVar17 = *(float *)(a0 + 0x10);
    iVar3 = *(int *)(a0 + 0x14);
    pfVar5 = *(float **)(a0 + 0x18);
    iVar7 = *(int *)(a0 + 0x1c);
    pfVar4 = *(float **)(a0 + 0x20);
    fVar9 = *(float *)(a0 + 0x24);
    fVar8 = *(float *)(a0 + 0x28);
    fVar11 = *(float *)(a0 + 0x2c);
    fVar10 = *(float *)(a0 + 0x30);
    bVar2 = false;
    iVar6 = 0;
    do {
        fVar13 = *pfVar5;
        fVar12 = pfVar5[1];
        fVar15 = pfVar5[2];
        fVar1 = (float)((u64)in_xd2 >> 0x20) * fVar12 + in_xf7 * fVar13 + (float)((u64)in_xd10 >> 0x20) * 1.0 +
                (float)((u64)in_xd14 >> 0x20) * fVar15;
        fVar14 = 1.0 / fVar1;
        pfVar5 = pfVar5 + 5;
        fVar16 = 1.0;
        if (1.0 <= fVar17) {
            fVar16 = fVar17;
        }
        pfVar4[3] = fVar16;
        if (fVar1 <= 1.0) {
            iVar6 = iVar6 + 1;
        }
        pfVar4[2] = fVar14;
        bVar2 = (bool)(bVar2 ^ 1);
        pfVar4[1] = ((float)in_xd0 * fVar12 + (float)in_xd4 * fVar13 + in_xf8 * 1.0 + (float)in_xd12 * fVar15) * fVar8 *
                        fVar14 +
                    fVar10;
        *pfVar4 = ((float)((u64)in_xd0 >> 0x20) * fVar12 + (float)((u64)in_xd4 >> 0x20) * fVar13 + in_xf9 * 1.0 +
                   (float)((u64)in_xd12 >> 0x20) * fVar15) *
                      fVar9 * fVar14 +
                  fVar11;
        if (!bVar2) {
            CacheBlockInvalidate(iVar7);
            iVar7 = iVar7 + 0x20;
        }
        iVar3 = iVar3 + -1;
        pfVar4 = pfVar4 + 4;
    } while (iVar3 != 0);
    if (bVar2) {
        CacheBlockInvalidate(iVar7);
    }
    return iVar6;
}

/*
 * gfxlib_test_217e18  0x8c217e18
 * area name: in the gfxlib library code range; behaviour name: returns the result of a comparison
 * called by: alt_entry_219962, gfxlib_calls_test_219954, gfxlib_uses_point_transform_or_copy_218e00,
 * gfxlib_uses_point_transform_or_copy_21a678, vram64_21869c, vram64_2186a0
 */
u32 gfxlib_test_217e18(int a0) {
    double *pdVar1;
    float fVar2;
    double in_dr0;
    double dVar4;
    float fVar5;
    double dVar6;
    float fVar7;
    u32 uVar8;
    float fVar10;
    double dVar9;
    u32 in_fr9;
    double dVar11;
    u32 in_fr11;
    double dVar12;
    u64 in_xd0;
    u64 in_xd2;
    double in_xd4;
    float in_xf6;
    float in_xf7;
    u64 in_xd8;
    float in_xf10;
    float in_xf11;
    float in_xf12;
    float in_xf13;
    float in_xf14;
    float in_xf15;
    bool bVar13;
    double dVar3;

    dVar6 = (double)CONCAT44(*(u32 *)(a0 + 8), *(u32 *)(a0 + 0xc));
    fVar10 = *(float *)(a0 + 0x10);
    pdVar1 = (double *)(a0 + 0x14);

    dVar9 = (double)CONCAT44(fVar10, 0x3f800000);

    fVar2 = SUB84(dVar6, 0);
    fVar7 = (float)((u64)dVar6 >> 0x20);
    fVar5 = (float)in_xd0 * fVar2 + SUB84(in_xd4, 0) * fVar7 + (float)in_xd8 * 1.0 + in_xf12 * fVar10;
    fVar5 = (float)((u64)in_xd0 >> 0x20) * fVar2 + (float)((u64)in_xd4 >> 0x20) * fVar7 +
            (float)((u64)in_xd8 >> 0x20) * 1.0 + in_xf13 * fVar10;
    fVar5 = (float)in_xd2 * fVar2 + in_xf6 * fVar7 + in_xf10 * 1.0 + in_xf14 * fVar10;
    fVar10 = (float)((u64)in_xd2 >> 0x20) * fVar2 + in_xf7 * fVar7 + in_xf11 * 1.0 + in_xf15 * fVar10;

    dVar11 = (double)CONCAT44(*(u32 *)pdVar1, in_fr9);
    in_dr0 = (double)CONCAT44((int)((u64)in_dr0 >> 0x20), g_8c4aa4d8);

    fVar5 = (float)((u64)dVar11 >> 0x20);
    fVar10 = (float)((u64)dVar9 >> 0x20);

    fVar2 = SUB84(in_dr0, 0) + fVar5;
    dVar3 = (double)(u64)(u32)fVar2;
    bVar13 = fVar2 < fVar10;
    dVar9 = (double)CONCAT44(fVar10 + fVar5, SUB84(dVar9, 0));

    fVar10 = SUB84(dVar3, 0);
    if (!bVar13) {

        fVar10 = g_8c4aa4d4;

        fVar2 = (float)((u64)dVar9 >> 0x20);

        bVar13 = fVar10 < fVar2;
        dVar9 = (double)CONCAT44(1.0 / fVar2, fVar10);

        if (bVar13) {

            dVar9 = (double)CONCAT44((int)((u64)dVar9 >> 0x20), g_8c4aa4a8);
            dVar3 = (double)CONCAT44(*(u32 *)0x8c4aa4dc, g_8c4aa4e0);

            fVar10 = SUB84(dVar9, 0);

            dVar3 = (double)CONCAT44((float)((u64)dVar3 >> 0x20) * fVar10, SUB84(dVar3, 0) * fVar10);

            dVar11 = (double)CONCAT44(fVar5, 0x8c4aa4a8 [3]);
            pdVar1 = (double *)(0x8c4aa4a8 + 4);

            fVar5 = (float)((u64)dVar9 >> 0x20);

            dVar3 = (double)CONCAT44((float)((u64)dVar3 >> 0x20) * fVar5, SUB84(dVar3, 0));

            dVar12 = (double)CONCAT44(*(u32 *)pdVar1, in_fr11);

            dVar3 = (double)CONCAT44((int)((u64)dVar3 >> 0x20), SUB84(dVar3, 0) * fVar5);

            uVar8 = (u32)((u64)dVar6 >> 0x20);
            dVar9 = dVar6;

            dVar9 = (double)CONCAT44(uVar8, fVar10);

            fVar5 = (float)((u64)dVar11 >> 0x20);
            fVar10 = (float)((u64)dVar3 >> 0x20);

            dVar9 = (double)CONCAT44(((float)((u64)dVar9 >> 0x20) - fVar5) * fVar10, SUB84(dVar9, 0));

            dVar9 = (double)CONCAT44((int)((u64)dVar9 >> 0x20), 0x8c4aa4c4 [2]);

            dVar9 = (double)CONCAT44((float)((u64)dVar9 >> 0x20) + SUB84(dVar11, 0), SUB84(dVar9, 0));

            dVar4 = dVar6;

            dVar4 = (double)CONCAT44(uVar8, SUB84(dVar9, 0));

            dVar4 = (double)CONCAT44((float)((u64)dVar4 >> 0x20) + fVar5, SUB84(dVar4, 0));

            if ((float)((u64)dVar9 >> 0x20) <= SUB84(dVar9, 0)) {

                dVar4 = (double)CONCAT44((int)((u64)dVar4 >> 0x20), g_8c4aa4c4);

                dVar11 = (double)CONCAT44(fVar5, (float)((u64)dVar4 >> 0x20) * fVar10 + SUB84(dVar11, 0));

                dVar9 = in_xd4;

                dVar9 = (double)CONCAT44(SUB84(dVar6, 0), SUB84(dVar4, 0));

                fVar10 = (float)((u64)dVar11 >> 0x20);

                bVar13 = SUB84(dVar11, 0) < SUB84(dVar9, 0);
                dVar9 = (double)CONCAT44((float)((u64)dVar9 >> 0x20) - fVar10, SUB84(dVar9, 0));

                if (!bVar13) {

                    dVar9 = (double)CONCAT44((float)((u64)dVar9 >> 0x20) * SUB84(dVar3, 0), SUB84(dVar9, 0));

                    dVar9 = (double)CONCAT44((int)((u64)dVar9 >> 0x20), 0x8c4aa4c4 [3]);

                    fVar5 = (float)((u64)dVar12 >> 0x20);

                    dVar9 = (double)CONCAT44((float)((u64)dVar9 >> 0x20) + fVar5, SUB84(dVar9, 0));

                    in_xd4 = (double)CONCAT44(SUB84(dVar6, 0), SUB84(dVar9, 0));

                    dVar11 = (double)CONCAT44((float)((u64)in_xd4 >> 0x20) + fVar10, SUB84(in_xd4, 0));

                    if ((float)((u64)dVar9 >> 0x20) <= SUB84(dVar9, 0)) {

                        dVar11 = (double)CONCAT44((int)((u64)dVar11 >> 0x20), 0x8c4aa4c4 [1]);

                        bVar13 = (float)((u64)dVar11 >> 0x20) * SUB84(dVar3, 0) + fVar5 < SUB84(dVar11, 0);

                        if (!bVar13) {
                            return 0;
                        }
                    }
                }
            }
        }
    }
    return 1;
}

/*
 * gfxlib_float_calc_217ebc  0x8c217ebc
 * area name: in the gfxlib library code range; behaviour name: floating-point arithmetic
 * called by: Class_12b758_draw_0e4dd0, Vec3_uses_set_vec_0e3f24, game_uses_gfx_set_vec_0e5dac
 */
u32 gfxlib_float_calc_217ebc(void) {
    u64 *puVar1;
    double *pdVar2;
    double *pdVar3;
    double *pdVar4;
    u32 uVar5;
    double dVar6;
    u32 in_fr5;
    u32 in_fr4;
    u32 in_fr6;

    pdVar4 = 0x8c4aa4e0;
    pdVar3 = 0x8c4aa4dc;
    pdVar2 = 0x8c4aa4a8;
    puVar1 = 0x8c4ab158;

    *(u32 *)0x8c4ab158 = in_fr4;
    *(u32 *)((int)puVar1 + 4) = in_fr5;
    *(u32 *)(puVar1 + 1) = in_fr6;
    dVar6 = (double)CONCAT44(*(u32 *)pdVar2, *(u32 *)pdVar3);

    dVar6 = (double)CONCAT44((float)((u64)dVar6 >> 0x20) * SUB84(dVar6, 0), SUB84(dVar6, 0));

    *(int *)((int)puVar1 + 0x24) = (int)((u64)dVar6 >> 0x20);
    dVar6 = (double)CONCAT44(*(u32 *)pdVar2, *(u32 *)pdVar4);

    dVar6 = (double)CONCAT44((float)((u64)dVar6 >> 0x20) * SUB84(dVar6, 0), SUB84(dVar6, 0));

    *(int *)(puVar1 + 5) = (int)((u64)dVar6 >> 0x20);
    *(u32 *)((int)puVar1 + 0x2c) = *(u32 *)((int)pdVar2 + 0xc);
    uVar5 = *(u32 *)(pdVar2 + 2);

    *(u32 *)(puVar1 + 6) = uVar5;

    return 0x30;
}

/*
 * gfxlib_calc_217ef4  0x8c217ef4
 * area name: in the gfxlib library code range; behaviour name: integer arithmetic on its arguments
 * called by: Class_12b758_draw_0e4dd0, Vec3_uses_set_vec_0e3f24, game_uses_gfx_set_vec_0e5dac
 */
u32 gfxlib_calc_217ef4(void) {
    u64 in_dr4;

    g_8c4ab164 = -(float)((u64)in_dr4 >> 0x20);
    g_8c4ab168 = (int)in_dr4;
    return 0x10;
}

/*
 * gfx_set_vec_278724  0x8c217f02
 * stores fr4..fr6 at 8c278724
 * called by: Vec3_uses_set_vec_0e3f24, game_uses_gfx_set_vec_0e5dac
 */
u32 gfx_set_vec_278724(void) {
    u32 in_fr5;
    u32 in_fr4;
    u32 in_fr6;

    g_8c278724 = in_fr4;
    g_8c278728 = in_fr5;
    g_8c27872c = in_fr6;
    return 0xc;
}

/*
 * gfxlib_draw_217f12  0x8c217f12
 * area name: in the gfxlib library code range; behaviour name: mostly calls draw functions
 * called by: gfxlib_draw_217f12, vram64_21869c, vram64_2186a0
 */
u8 *gfxlib_draw_217f12(u16 *a0, int a1, int a2, u32 *a3, u8 *ain0) {
    u16 uVar1;
    u32 uVar2;
    int iVar3;
    u8 *ar4_00;
    u8 *puVar4;
    u32 *a5;
    u16 uVar5;
    u32 a6;
    u32 *a7;
    u32 uVar6;
    code *pcVar7;
    double in_dr2;
    double dVar8;
    double in_dr4;
    float fVar9;
    u64 in_xd2;
    char cVar10;
    char cVar11;
    u16 *ar5_00;
    u16 *puVar12;
    u8 auStack_30[20];

    cVar11 = '\0';
    cVar10 = '\0';
    g_8c4aa2a8 = 0;
    a7 = a3;
    while (true) {
        do {
            while (true) {
                while (true) {
                    puVar12 = a0 + 1;
                    uVar5 = *a0;
                    if (uVar5 == 0xff) {
                        return ain0;
                    }
                    puVar4 = (u8 *)(int)(short)(uVar5 & 0xff);
                    iVar3 = (int)(short)uVar5;
                    if (puVar4 < (u8 *)0x8)
                        break;
                    if (puVar4 < (u8 *)0x10) {
                        a0 = a0 + 2;
                        uVar2 = gfxlib_calc_23752c(iVar3, (int)(short)*puVar12);
                        ain0 = (u8 *)(uVar2 & 0xff);
                        g_8c4aa2a8 = 0;
                        if ((ain0 == (u8 *)0x4) && ((*a0 & 0x18) != 0)) {
                            if (cVar11 == '\0') {
                                in_dr4 = (double)CONCAT44(0x46fffe00, SUB84(in_dr4, 0));
                            } else {
                                in_dr4 = -3.115182567042769e-250;
                            }
                            uVar6 = (u32)((u64)in_dr2 >> 0x20);
                            fVar9 = (float)((u64)in_dr4 >> 0x20);
                            if (cVar10 == '\0') {
                                dVar8 = (double)CONCAT44(uVar6, (float)(int)(short)a0[2] / fVar9);
                            } else {
                                dVar8 = (double)CONCAT44(uVar6, (float)(int)(short)a0[2]) / in_dr4;
                            }
                            g_8c4ab1dc = (u32)in_xd2;
                            g_8c4ab1f0 = g_8c4ab1dc;
                            if (cVar11 == '\0') {
                                g_8c4ab1dc = SUB84(dVar8, 0);
                            }
                            uVar6 = (u32)((u64)dVar8 >> 0x20);
                            if (cVar10 == '\0') {
                                dVar8 = (double)CONCAT44(uVar6, (float)(int)(short)a0[3] / fVar9);
                            } else {
                                dVar8 = (double)CONCAT44(uVar6, (float)(int)(short)a0[3]) / in_dr4;
                            }
                            g_8c4ab1e0 = g_8c4ab1f0;
                            if (cVar11 == '\0') {
                                g_8c4ab1e0 = SUB84(dVar8, 0);
                            }
                            uVar6 = (u32)((u64)dVar8 >> 0x20);
                            if (cVar10 == '\0') {
                                dVar8 = (double)CONCAT44(uVar6, (float)(int)(short)a0[4] / fVar9);
                            } else {
                                dVar8 = (double)CONCAT44(uVar6, (float)(int)(short)a0[4]) / in_dr4;
                            }
                            g_8c4ab1e4 = g_8c4ab1f0;
                            if (cVar11 == '\0') {
                                g_8c4ab1e4 = SUB84(dVar8, 0);
                            }
                            uVar6 = (u32)((u64)dVar8 >> 0x20);
                            if (cVar10 == '\0') {
                                dVar8 = (double)CONCAT44(uVar6, (float)(int)(short)a0[5] / fVar9);
                            } else {
                                dVar8 = (double)CONCAT44(uVar6, (float)(int)(short)a0[5]) / in_dr4;
                            }
                            g_8c4ab1e8 = g_8c4ab1f0;
                            if (cVar11 == '\0') {
                                g_8c4ab1e8 = SUB84(dVar8, 0);
                            }
                            uVar6 = (u32)((u64)dVar8 >> 0x20);
                            if (cVar10 == '\0') {
                                dVar8 = (double)CONCAT44(uVar6, (float)(int)(short)a0[6] / fVar9);
                            } else {
                                dVar8 = (double)CONCAT44(uVar6, (float)(int)(short)a0[6]) / in_dr4;
                            }
                            g_8c4ab1ec = g_8c4ab1f0;
                            if (cVar11 == '\0') {
                                g_8c4ab1ec = SUB84(dVar8, 0);
                            }
                            uVar6 = (u32)((u64)dVar8 >> 0x20);
                            if (cVar10 == '\0') {
                                in_dr2 = (double)CONCAT44(uVar6, (float)(int)(short)a0[7] / fVar9);
                            } else {
                                in_dr2 = (double)CONCAT44(uVar6, (float)(int)(short)a0[7]) / in_dr4;
                            }
                            if (cVar11 == '\0') {
                                g_8c4ab1f0 = SUB84(in_dr2, 0);
                            } else {
                                g_8c4ab1f4 = (u32)((u64)in_xd2 >> 0x20);
                            }
                            g_8c4aa2a8 = 1;
                            ain0 = &g_8c2180ec;
                            a0 = a0 + 8;
                        }
                    } else if (puVar4 < (u8 *)0x40) {
                        a7 = NULL;
                        ar5_00 = a0 + 2;
                        uVar5 = *puVar12;
                        ain0 = (u8 *)gfxlib_calls_calc_21d7d4(iVar3, ar5_00, &g_8c275950, 0, &g_8c275960);
                        a0 = ar5_00 + (short)uVar5;
                    } else {
                        uVar1 = *puVar12;
                        puVar12 = a0 + 3;
                        uVar2 = (u32)(short)a0[2];
                        if (a2 < g_8c4c0fa4) {
                            if ((g_8c4aa4f0 & 0x800) != 0) {
                                uVar5 = uVar5 & (u16)g_8c4aa524 | (u16)g_8c4aa528;
                            }
                            a5 = &g_8c277acc;
                            a6 = (u32)(short)(char)(uVar5 >> 8);
                            a7 = (u32 *)0x20;
                            ar4_00 = NULL;
                            g_8c277acc = (u32)((a6 & 0x20) != 0);
                            if ((puVar4 == (u8 *)0x41) || (puVar4 == (u8 *)0x42)) {
                                if (g_8c4aa2a8 == 0) {
                                    if (a1 == 0x23) {
                                        if ((a6 & 8) == 0) {
                                            if ((a6 & 0x20) == 0) {
                                                uVar6 = 0x8000a;
                                            } else {
                                                uVar6 = 0x80008;
                                            }
                                            ta_fifo_237124(uVar6, &g_8c277acc, a6, 0x20);
                                            a7 = (u32 *)ta_sq_write_header4();
                                        } else {
                                            if ((a6 & 0x20) == 0) {
                                                uVar6 = 0x210000a;
                                            } else {
                                                uVar6 = 0x2100008;
                                            }
                                            ta_fifo_237124(uVar6, &g_8c277acc, a6, 0x20);
                                            if (cVar11 == '\0') {
                                                in_dr2 = (double)CONCAT44((int)((u64)in_dr2 >> 0x20), (u32)g_8c275950);
                                            } else {
                                                in_xd2 = CONCAT44(g_8c275950._4_4_, (u32)g_8c275950);
                                                g_8c278724 = g_8c275950._4_4_;
                                            }
                                            g_8c278720 = (u32)g_8c275950;
                                            a7 = (u32 *)ta_sq_write_header5();
                                        }
                                    } else if ((a6 & 8) == 0) {
                                        if ((a6 & 2) == 0) {
                                            if ((a6 & 0x20) == 0) {
                                                uVar6 = 0x8002e;
                                            } else {
                                                uVar6 = 0x8002c;
                                            }
                                            ta_fifo_237124(uVar6, &g_8c277acc, a6, 0x20);
                                            a5 = (u32 *)&g_8c275960;
                                            pcVar7 = ta_init_fields_236d20;
                                        } else {
                                            if ((a6 & 0x20) == 0) {
                                                uVar6 = 0x8002a;
                                            } else {
                                                uVar6 = 0x80028;
                                            }
                                            ta_fifo_237124(uVar6, &g_8c277acc, a6, 0x20);
                                            pcVar7 = ta_init_fields_236b3c;
                                        }
                                        a7 = (u32 *)(*pcVar7)(&g_8c278720, a5, a6, a7);
                                    } else {
                                        if ((a6 & 2) == 0) {
                                            if ((a6 & 0x20) == 0) {
                                                uVar6 = 0x210002e;
                                            } else {
                                                uVar6 = 0x210002c;
                                            }
                                            ta_fifo_237124(uVar6, &g_8c277acc, a6, 0x20);
                                            pcVar7 = ta_init_fields_236dd8;
                                            if (cVar11 == '\0') {
                                                in_dr2 = (double)CONCAT44((int)((u64)in_dr2 >> 0x20), (u32)g_8c275950);
                                            } else {
                                                in_xd2 = CONCAT44(g_8c275950._4_4_, (u32)g_8c275950);
                                            }
                                            a5 = (u32 *)&g_8c275960;
                                            if (cVar11 == '\0') {
                                                g_8c278720 = SUB84(in_dr2, 0);
                                            } else {
                                                g_8c278720 = (u32)in_xd2;
                                                g_8c278724 = (u32)((u64)in_xd2 >> 0x20);
                                            }
                                        } else {
                                            if ((a6 & 0x20) == 0) {
                                                uVar6 = 0x210002a;
                                            } else {
                                                uVar6 = 0x2100028;
                                            }
                                            ta_fifo_237124(uVar6, &g_8c277acc, a6, 0x20);
                                            pcVar7 = ta_init_fields_236c38;
                                            if (cVar11 == '\0') {
                                                in_dr2 = (double)CONCAT44((int)((u64)in_dr2 >> 0x20), (u32)g_8c275950);
                                            } else {
                                                in_xd2 = CONCAT44(g_8c275950._4_4_, (u32)g_8c275950);
                                                g_8c278724 = g_8c275950._4_4_;
                                            }
                                            g_8c278720 = (u32)g_8c275950;
                                        }
                                        a7 = (u32 *)(*pcVar7)(&g_8c278720, a5, a6, a7);
                                    }
                                    if (a2 == 0) {
                                        pcVar7 = gfxlib_fill_loop_2162bc;
                                        if (puVar4 == (u8 *)0x41) {
                                            if (cVar11 == '\0') {
                                                in_dr4 = (double)((u64)in_dr4 & 0xffffffff);
                                            } else {
                                                in_dr4 = 6.462349967980925e-27;
                                            }
                                        } else if (cVar11 == '\0') {
                                            in_dr4 = (double)((u64)in_dr4 & 0xffffffff);
                                        } else {
                                            in_dr4 = -3.0353264721140325e-250;
                                        }
                                    } else {
                                        pcVar7 = gfxlib_calls_fill_loop_216ed0;
                                        if (puVar4 == (u8 *)0x41) {
                                            if (cVar11 == '\0') {
                                                in_dr4 = (double)((u64)in_dr4 & 0xffffffff);
                                            } else {
                                                in_dr4 = 6.462349967980925e-27;
                                            }
                                        } else if (cVar11 == '\0') {
                                            in_dr4 = (double)((u64)in_dr4 & 0xffffffff);
                                        } else {
                                            in_dr4 = -3.0353264721140325e-250;
                                        }
                                    }
                                    a5 = a3;
                                    puVar4 = (u8 *)(*pcVar7)(puVar12, a3, uVar2, a7);
                                    ar4_00 = puVar4;
                                    a6 = uVar2;
                                } else {
                                    if ((a6 & 8) == 0) {
                                        uVar6 = 0x8000c;
                                        ta_fifo_237124(0x8000c, &g_8c277acc, a6, 0x20);
                                        a7 = (u32 *)ta_sq_write_header4();
                                    } else {
                                        uVar6 = 0x210000c;
                                        ta_fifo_237124(0x210000c, &g_8c277acc, a6, 0x20);
                                        if (cVar11 == '\0') {
                                            in_dr2 = (double)CONCAT44((int)((u64)in_dr2 >> 0x20), (u32)g_8c275950);
                                        } else {
                                            in_xd2 = CONCAT44(g_8c275950._4_4_, (u32)g_8c275950);
                                            g_8c278724 = g_8c275950._4_4_;
                                        }
                                        g_8c278720 = (u32)g_8c275950;
                                        a7 = (u32 *)ta_sq_write_header5();
                                    }
                                    if (a2 == 0) {
                                        pcVar7 = gfxlib_uses_njUnitVector_2163d4;
                                        if (puVar4 == (u8 *)0x41) {
                                            if (cVar11 == '\0') {
                                                in_dr4 = (double)((u64)in_dr4 & 0xffffffff);
                                            } else {
                                                in_dr4 = 6.462349967980925e-27;
                                            }
                                        } else if (cVar11 == '\0') {
                                            in_dr4 = (double)((u64)in_dr4 & 0xffffffff);
                                        } else {
                                            in_dr4 = -3.036072391187902e-250;
                                        }
                                    } else {
                                        pcVar7 = gfxlib_uses_njUnitVector_2166e8;
                                        if (puVar4 == (u8 *)0x41) {
                                            if (cVar11 == '\0') {
                                                in_dr4 = (double)((u64)in_dr4 & 0xffffffff);
                                            } else {
                                                in_dr4 = 6.462349967980925e-27;
                                            }
                                        } else if (cVar11 == '\0') {
                                            in_dr4 = (double)((u64)in_dr4 & 0xffffffff);
                                        } else {
                                            in_dr4 = -3.036072391187902e-250;
                                        }
                                    }
                                    a5 = a3;
                                    puVar4 = (u8 *)(*pcVar7)(puVar12, a3, uVar2, a7);
                                    ar4_00 = puVar4;
                                    a6 = uVar2;
                                }
                            } else if (puVar4 == (u8 *)0x40) {
                                if (a1 == 0x23) {
                                    if ((a6 & 8) == 0) {
                                        if ((a6 & 0x20) == 0) {
                                            uVar6 = 0x80002;
                                        } else {
                                            uVar6 = 0x80000;
                                        }
                                        ta_fifo_237124(uVar6, &g_8c277acc, a6, 0x20);
                                        pcVar7 = ta_sq_write_header4_short;
                                    } else {
                                        if ((a6 & 0x20) == 0) {
                                            uVar6 = 0x2100002;
                                        } else {
                                            uVar6 = 0x2100000;
                                        }
                                        ta_fifo_237124(uVar6, &g_8c277acc, a6, 0x20);
                                        pcVar7 = ta_sq_write_header5_short;
                                    }
                                    a7 = (u32 *)(*pcVar7)(uVar6, a5, a6, a7);
                                } else {
                                    if (cVar11 == '\0') {
                                        in_dr2 = (double)CONCAT44(g_8c27595c, g_8c27872c);
                                    } else {
                                        in_xd2 = CONCAT44(uRam8c278730, g_8c27872c);
                                        in_dr2 = (double)CONCAT44(g_8c275960, g_8c27595c);
                                    }
                                    if (cVar10 == '\0') {
                                        in_dr2 = (double)CONCAT44((float)((u64)in_dr2 >> 0x20) * SUB84(in_dr2, 0),
                                                                  SUB84(in_dr2, 0));
                                    } else {
                                        in_dr2 = in_dr2 * in_dr2;
                                    }
                                    if ((a6 & 8) == 0) {
                                        if ((a6 & 0x20) == 0) {
                                            uVar6 = 0x80022;
                                        } else {
                                            uVar6 = 0x80020;
                                        }
                                        ta_fifo_237124(uVar6, &g_8c277acc, a6, 0x20);
                                        pcVar7 = ta_sq_write_vertex_slot4;
                                    } else {
                                        if ((a6 & 0x20) == 0) {
                                            uVar6 = 0x2100022;
                                        } else {
                                            uVar6 = 0x2100020;
                                        }
                                        ta_fifo_237124(uVar6, &g_8c277acc, a6, 0x20);
                                        pcVar7 = ta_sq_write_vertex_slot5;
                                    }
                                    a7 = (u32 *)(*pcVar7)(auStack_30, a5, a6, a7);
                                }
                                if (a2 == 0) {
                                    pcVar7 = gfxlib_fill_loop_215b74;
                                } else {
                                    pcVar7 = gfxlib_calls_fill_loop_215c48;
                                }
                                a5 = a3;
                                puVar4 = (u8 *)(*pcVar7)(puVar12, a3, uVar2, a7);
                                ar4_00 = puVar4;
                                a6 = uVar2;
                            }
                            ain0 = puVar4;
                            if (ar4_00 != NULL) {
                                ain0 = (u8 *)ta_set_list_addr(ar4_00);
                            }
                        }
                        a0 = puVar12 + (uVar1 - 1);
                    }
                }
                if (puVar4 != (u8 *)0x1)
                    break;
                ain0 = (u8 *)gfxlib_calc_2375ae(iVar3, 1);
                a0 = puVar12;
            }
            ain0 = puVar4;
            a0 = puVar12;
        } while ((puVar4 == (u8 *)0x2) || (puVar4 == (u8 *)0x3));
        if (puVar4 == (u8 *)0x4)
            break;
        if (puVar4 == (u8 *)0x5) {
            a7 = a3;
            ain0 = (u8 *)gfxlib_draw_217f12(*(u32 *)((short)(uVar5 >> 8) * 4 + 0x8c4c0fac), a1, a2, a3, puVar12);
            g_8c4c0fa8 = g_8c4c0fa8 + -1;
            a0 = puVar12;
        }
    }
    iVar3 = (short)(uVar5 >> 8) * 4;
    *(u16 **)(iVar3 + 0x8c4c0fac) = puVar12;
    g_8c4c0fa8 = g_8c4c0fa8 + 1;
    return (u8 *)iVar3;
}

/*
 * gfxlib_calls_fill_loop_21849c  0x8c21849c
 * area name: in the gfxlib library code range; behaviour name: its callees mostly do: fill_loop
 * called by: vram64_21869c, vram64_2186a0
 */
u32 gfxlib_calls_fill_loop_21849c(short *a0, u32 a1) {
    u16 uVar1;
    short sVar2;
    int *piVar3;
    int iVar4;
    u32 *puVar5;
    u32 uVar6;
    u32 *puVar7;
    u32 *puVar8;
    int *piVar9;
    u32 uVar10;
    int iVar11;
    u32 uVar12;
    u32 unaff_r12;
    int iVar13;

    iVar4 = 0x8c4ab158;
    piVar3 = 0x8c4c0fa0;
    while (true) {
        puVar5 = 0x8c4c0fa4;
        uVar12 = (u32)*a0;
        if (uVar12 == (int)0xff)
            break;
        uVar1 = a0[1];
        sVar2 = a0[2];
        iVar13 = (int)a0[3];
        if ((0x8000 & uVar12) == 0) {
            *piVar3 = 0;
            *puVar5 = 0;
        }
        uVar6 = 0xe0000000;
        uVar10 = 0xffff7fff;
        *(int *)(iVar4 + 0x14) = iVar13;
        puVar7 = 0xff00003c;
        unaff_r12 = uVar12 & uVar10;
        *(short **)(iVar4 + 0x18) = a0 + 4;
        uVar12 = 0x3ffffff;
        uVar10 = sVar2 * 0x10 + a1;
        *(u32 *)(iVar4 + 0x1c) = uVar10;
        puVar8 = 0xff000038;
        *(u32 *)(iVar4 + 0x20) = uVar12 & uVar10 | uVar6;
        piVar9 = 0x8c4aa518;
        uVar12 = uVar10 >> 0x18 & 0x1c;
        *puVar7 = uVar12;
        *puVar8 = uVar12;
        *piVar9 = *piVar9 + iVar13;
        switch (unaff_r12 & 0xff) {
        case 0x20:
            iVar11 = gfxlib_fill_loop_217618(0x8c4ab158);
            break;
        case 0x21:
            iVar11 = gfxlib_fill_loop_21768c(0x8c4ab158);
            break;
        case 0x22:
            iVar11 = gfxlib_fill_loop_217744(0x8c4ab158);
            break;
        case 0x23:
            iVar11 = gfxlib_fill_loop_21782c(0x8c4ab158);
            break;
        case 0x24:
        case 0x25:
        case 0x26:
        case 0x27:
            iVar11 = gfxlib_fill_loop_2177b8(0x8c4ab158);
            break;
        case 0x28:
            iVar11 = gfxlib_fill_loop_2178a0(0x8c4ab158);
            break;
        case 0x29:
            iVar11 = gfxlib_fill_loop_217924(0x8c4ab158);
            break;
        case 0x2a:
            iVar11 = gfxlib_fill_loop_217aa4(0x8c4ab158);
            unaff_r12 = 0x23;
            break;
        case 0x2b:
        case 0x2d:
        case 0x2e:
        case 0x2f:
            iVar11 = gfxlib_fill_loop_2179e4(0x8c4ab158);
            break;
        case 0x2c:
            iVar11 = gfxlib_fill_loop_217b18(0x8c4ab158, unaff_r12);
            break;
        case 0x30:
            iVar11 = gfxlib_fill_loop_217c20(0x8c4ab158);
            break;
        case 0x31:
        case 0x32:
            iVar11 = gfxlib_fill_loop_217d1c(0x8c4ab158);
            break;
        default:
            iVar11 = 0;
        }
        uVar12 = 0xff00;
        *piVar3 = *piVar3 + iVar11;
        if (((uVar12 & unaff_r12) == (int)0x200) || ((unaff_r12 & 0xff) != 0x2c)) {
            g_8c4c0fa4 = g_8c4c0fa4 + iVar13;
        }
        a0 = a0 + 4 + (u32)uVar1 * 2 + -2;
    }
    return unaff_r12;
}

/*
 * vram64_21869c  0x8c21869c
 * called by: vram64_2186f8, vram64_21870e, vram_call_with_saved_draw_state
 */
u32 vram64_21869c(int *a0, u32 a1) {
    u32 in_r0;
    int iVar1;
    u32 uVar2;

    if ((((g_8c4aa4f0 & 0x100) == 0) || (in_r0 = 0x14, (float)a0[5] <= 0.0)) ||
        (iVar1 = gfxlib_test_217e18(a0), in_r0 = 0, iVar1 == 0)) {
        uVar2 = g_8c4aa510;
        if (*a0 != 0) {
            in_r0 = gfxlib_calls_fill_loop_21849c(*a0, g_8c4aa510);
            a1 = in_r0;
        }
        if (a0[1] != 0) {
            g_8c4ab1d8 = a1;
            gfxlib_draw_217f12(a0[1], a1, g_8c4c0fa0, uVar2, in_r0);
        }
        uVar2 = 0;
    } else {
        uVar2 = 0xffffffff;
    }
    return uVar2;
}

/*
 * vram64_2186a0  0x8c2186a0
 */
u32 vram64_2186a0(int *a0, u32 a1, u32 unused_a2, u32 unused_a3, u32 *ain1) {
    u32 ar7_00;
    int iVar1;
    s64 lVar2;
    u32 in_PR;

    if ((*ain1 & 0x100) != 0) {

        lVar2 = (u64)(u32)a0[5] << 0x20;

        if ((1 && (float)lVar2 < (float)((u64)lVar2 >> 0x20)) && (iVar1 = gfxlib_test_217e18(a0), iVar1 != 0)) {
            return 0xffffffff;
        }
    }
    ar7_00 = g_8c4aa510;
    if (*a0 != 0) {
        a1 = gfxlib_calls_fill_loop_21849c(*a0, g_8c4aa510);
    }
    if (a0[1] != 0) {
        g_8c4ab1d8 = a1;
        gfxlib_draw_217f12(a0[1], a1, g_8c4c0fa0, ar7_00, in_PR);
    }
    return 0;
}

/*
 * vram64_2186f8  0x8c2186f8
 * called by: vram64_2186f8, vram64_21870e, vram_draw_2187ce
 */
u32 vram64_2186f8(u32 *a0, u32 a1) {
    u32 r6;
    u32 r7;
    u32 uVar1;
    u32 *puVar2;
    u32 unaff_r13;
    u32 uVar3;

    puVar2 = a0;
    do {
        uVar3 = *puVar2;
        if ((uVar3 & 7) == 7) {
            uVar1 = 7;
            if ((uVar3 & 8) == 0) {
                a0 = (u32 *)puVar2[1];
                uVar1 = vram64_21869c(a0, a1);
            }
            if ((uVar3 & 0x10) == 0) {
                a0 = (u32 *)puVar2[0xb];
                uVar1 = vram64_2186f8(a0, a1);
            }
        } else {
            uVar1 = matrix_push_regs(a0, a1, r6, r7, uVar3 & 7);
            if ((uVar3 & 1) == 0) {
                a0 = puVar2 + 2;
                uVar1 = noop_25b638();
            }
            if ((uVar3 & 2) == 0) {
                unaff_r13 = uVar3 & 0x20;
                a0 = puVar2 + 5;
                a1 = unaff_r13;
                uVar1 = ninja_scan_loop_2569e0(a0, unaff_r13, r6, r7, uVar1);
            }
            if ((uVar3 & 4) == 0) {
                a0 = puVar2 + 8;
                noop_257098();
            }
            if ((uVar3 & 8) == 0) {
                a0 = (u32 *)puVar2[1];
                unaff_r13 = vram64_21869c(a0, a1);
            }
            if (((uVar3 & 0x10) == 0) && (((uVar3 & 0x100) == 0 || (unaff_r13 == 0)))) {
                a0 = (u32 *)puVar2[0xb];
                vram64_2186f8(a0, a1);
            }
            uVar1 = matrix_pop1();
        }
        puVar2 = (u32 *)puVar2[0xc];
    } while (puVar2 != NULL);
    return uVar1;
}

/*
 * vram64_21870e  0x8c21870e
 */
u32 vram64_21870e(u32 *a0, u32 a1) {
    u32 r6;
    u32 r7;
    u32 uVar1;
    u32 unaff_r8;
    u32 unaff_r10;
    u32 unaff_r11;
    u32 *unaff_r12;
    u32 unaff_r13;
    u32 uVar2;
    u32 in_PR;

    do {
        uVar2 = *unaff_r12;
        if ((uVar2 & 7) == 7) {
            uVar1 = 7;
            if ((uVar2 & unaff_r11) == 0) {
                a0 = (u32 *)unaff_r12[1];
                uVar1 = vram64_21869c(a0, a1);
            }
            if ((uVar2 & unaff_r10) == 0) {
                a0 = (u32 *)unaff_r12[0xb];
                uVar1 = vram64_2186f8(a0, a1);
            }
        } else {
            matrix_push_regs(a0, a1, r6, r7, in_PR);
            if ((uVar2 & 1) == 0) {
                a0 = unaff_r12 + 2;
                noop_25b638();
            }
            if ((uVar2 & 2) == 0) {
                unaff_r13 = uVar2 & 0x20;
                a0 = unaff_r12 + 5;
                a1 = unaff_r13;
                ninja_scan_loop_2569e0(a0, unaff_r13, r6, r7, in_PR);
            }
            if ((uVar2 & unaff_r8) == 0) {
                a0 = unaff_r12 + 8;
                noop_257098();
            }
            if ((uVar2 & unaff_r11) == 0) {
                a0 = (u32 *)unaff_r12[1];
                unaff_r13 = vram64_21869c(a0, a1);
            }
            if (((uVar2 & unaff_r10) == 0) && (((uVar2 & 0x100) == 0 || (unaff_r13 == 0)))) {
                a0 = (u32 *)unaff_r12[0xb];
                vram64_2186f8(a0, a1);
            }
            uVar1 = matrix_pop1();
        }
        unaff_r12 = (u32 *)unaff_r12[0xc];
    } while (unaff_r12 != NULL);
    return uVar1;
}

/*
 * vram_call_with_saved_draw_state  0x8c2187ba
 * runs vram64_21869c between draw_state_save and draw_state_restore
 */
u32 vram_call_with_saved_draw_state(u32 a0, u32 a1, u32 a2, u32 a3) {
    u32 uVar1;

    draw_state_save(a0, a1, a2, a3);
    vram64_21869c(a0, a1);
    uVar1 = draw_state_restore();
    return uVar1;
}

/*
 * vram_draw_2187ce  0x8c2187ce
 * area name: sits between vram functions (same compilation unit); behaviour name: mostly calls draw functions
 * called by: Class_129938_draw_015af8
 */
u32 vram_draw_2187ce(u32 a0, u32 a1, u32 a2, u32 a3) {
    u32 uVar1;

    draw_state_save(a0, a1, a2, a3);
    vram64_2186f8(a0, a1);
    uVar1 = draw_state_restore();
    return uVar1;
}

/*
 * vram_draw_218804  0x8c218804
 * area name: sits between vram functions (same compilation unit); behaviour name: mostly calls draw functions
 * called by: gfxlib_uses_point_transform_or_copy_218e00, vram_draw_218804
 */
u32 vram_draw_218804(u16 *a0, int a1, u8 *a2, u32 unused_a3, u32 ain0) {
    u16 uVar1;
    int iVar2;
    u32 ar4_00;
    u32 uVar3;
    u8 *a5;
    u16 uVar4;
    u32 a6;
    u8 *ar7_00;
    u16 *puVar5;
    u32 uVar6;
    u32 a6_00;
    code *pcVar7;
    bool bVar8;
    u8 *ar6_00;
    u8 *puStack_28;

    puStack_28 = (u8 *)0x8c4aa2e0;
    ar7_00 = &g_8c4aa2d4;
    ar6_00 = &g_8c4aa2d0;
    do {
        while (true) {
            uVar4 = *a0;
            puVar5 = a0 + 1;
            if (uVar4 == 0xff) {
                return ain0;
            }
            uVar3 = (u32)(short)(uVar4 & 0xff);
            if (7 < uVar3)
                break;
            if (uVar3 == 1) {
                pcVar7 = gfxlib_calc_2375ae;
                iVar2 = 1;
            override_prt_8c218916_7a4d7f16:
                ain0 = (*pcVar7)((int)(short)uVar4, iVar2, (int)(short)uVar4, ar7_00);
                a0 = puVar5;
            } else {
                ain0 = uVar3;
                a0 = puVar5;
                if ((uVar3 != 2) && (uVar3 != 3)) {
                    if (uVar3 == 4) {
                        iVar2 = (short)(uVar4 >> 8) * 4;
                        *(u16 **)(iVar2 + 0x8c4c0fac) = puVar5;
                        g_8c4c0fa8 = g_8c4c0fa8 + 1;
                        return iVar2;
                    }
                    if (uVar3 == 5) {
                        ain0 = vram_draw_218804(*(u32 *)((short)(uVar4 >> 8) * 4 + 0x8c4c0fac), a1, a2, ar7_00, ar6_00);
                        g_8c4c0fa8 = g_8c4c0fa8 + -1;
                    }
                }
            }
        }
        if (uVar3 < 0x10) {
            iVar2 = (int)(short)*puVar5;
            puVar5 = a0 + 2;
            pcVar7 = gfxlib_calc_23752c;
            goto override_prt_8c218916_7a4d7f16;
        }
        if (uVar3 < 0x40) {
            iVar2 = (int)(short)*puVar5;
            puVar5 = a0 + 2;
            ar7_00 = puStack_28;
            ain0 = gfxlib_calls_calc_21d7d4((int)(short)uVar4, puVar5, ar6_00, 0x8c4aa2e0, 0);
        } else {
            uVar1 = *puVar5;
            a6_00 = (u32)(short)a0[2];
            puVar5 = a0 + 3;
            if (a1 < g_8c4c0fa4) {
                if ((g_8c4aa4f0 & 0x800) != 0) {
                    uVar4 = uVar4 & (u16)g_8c4aa524 | (u16)g_8c4aa528;
                }
                a5 = &g_8c4aa554;
                a6 = (int)(short)uVar4 >> 8;
                ar4_00 = 0;
                if (g_8c4aa554 != 0) {
                    a6 = a6 | 8;
                }
                ar7_00 = (u8 *)0x20;
                bVar8 = (a6 & 0x20) != 0;
                if (bVar8) {
                    a5 = (u8 *)0x1;
                }
                g_8c277acc = (u32)bVar8;
                if ((uVar3 == 0x41) || (uVar3 == 0x42)) {
                    if ((a6 & 8) == 0) {
                        if ((a6 & 2) == 0) {
                            if ((a6 & 0x20) == 0) {
                                uVar6 = 0x8001e;
                            } else {
                                uVar6 = 0x8001c;
                            }
                            ta_fifo_237124(uVar6, a5, a6, 0x20);
                        } else {
                            if ((a6 & 0x20) == 0) {
                                uVar6 = 0x8001a;
                            } else {
                                uVar6 = 0x80018;
                            }
                            ta_fifo_237124(uVar6, a5, a6, 0x20);
                        }
                        pcVar7 = ta_sq_write_header4;
                    } else {
                        if ((a6 & 2) == 0) {
                            if ((a6 & 0x20) == 0) {
                                uVar6 = 0x210001e;
                            } else {
                                uVar6 = 0x210001c;
                            }
                            ta_fifo_237124(uVar6, a5, a6, 0x20);
                        } else {
                            if ((a6 & 0x20) == 0) {
                                uVar6 = 0x210001a;
                            } else {
                                uVar6 = 0x2100018;
                            }
                            ta_fifo_237124(uVar6, a5, a6, 0x20);
                        }
                        pcVar7 = ta_sq_write_header5;
                    }
                    ar7_00 = (u8 *)(*pcVar7)(uVar6, a5, a6, ar7_00);
                    if (a1 == 0) {
                        a5 = a2;
                        uVar3 = kamui_fill_loop_21496c(puVar5, a2, a6_00, ar7_00);
                        ar4_00 = uVar3;
                        a6 = a6_00;
                    } else {
                        a5 = a2;
                        uVar3 = kamui_calls_fill_loop_214aec(puVar5, a2, a6_00, ar7_00);
                        ar4_00 = uVar3;
                        a6 = a6_00;
                    }
                } else if (uVar3 == 0x40) {
                    if ((a6 & 8) == 0) {
                        if ((a6 & 0x20) == 0) {
                            uVar6 = 0x80012;
                        } else {
                            uVar6 = 0x80010;
                        }
                        ta_fifo_237124(uVar6, a5, a6, 0x20);
                        pcVar7 = ta_sq_write_header4_short;
                    } else {
                        if ((a6 & 0x20) == 0) {
                            uVar6 = 0x2100012;
                        } else {
                            uVar6 = 0x2100010;
                        }
                        ta_fifo_237124(uVar6, a5, a6, 0x20);
                        pcVar7 = ta_sq_write_header5_short;
                    }
                    ar7_00 = (u8 *)(*pcVar7)(uVar6, a5, a6, ar7_00);
                    if (a1 == 0) {
                        a5 = a2;
                        uVar3 = kamui_fill_loop_21423c(puVar5, a2, a6_00, ar7_00);
                        ar4_00 = uVar3;
                        a6 = a6_00;
                    } else {
                        a5 = a2;
                        uVar3 = kamui_calls_fill_loop_214358(puVar5, a2, a6_00, ar7_00);
                        ar4_00 = uVar3;
                        a6 = a6_00;
                    }
                }
                ain0 = uVar3;
                if (ar4_00 != 0) {
                    ain0 = ta_set_list_addr(ar4_00);
                }
            }
            iVar2 = uVar1 - 1;
        }
        a0 = puVar5 + iVar2;
    } while (true);
}

/*
 * gfxlib_calls_fill_loop_218c82  0x8c218c82
 * area name: in the gfxlib library code range; behaviour name: its callees mostly do: fill_loop
 * called by: gfxlib_uses_point_transform_or_copy_218e00
 */
u32 gfxlib_calls_fill_loop_218c82(short *a0, int a1) {
    u16 uVar1;
    short sVar2;
    int *piVar3;
    int *piVar4;
    int *piVar5;
    u32 *ar6_00;
    int iVar6;
    u32 uVar7;
    u32 uVar8;
    u32 uVar9;
    u32 *ar5_00;
    int iVar10;
    u32 uVar11;

    do {
        piVar4 = 0x8c4c0fa4;
        piVar3 = 0x8c4c0fa0;
        uVar11 = (u32)*a0;
        if (uVar11 == (int)0xff) {
            return 0;
        }
        uVar1 = a0[1];
        sVar2 = a0[2];
        iVar10 = (int)a0[3];
        if ((uVar11 & 0x8000) == 0) {
            g_8c4c0fa0 = 0;
            *piVar4 = 0;
        }
        uVar9 = 0xe0000000;
        uVar8 = 0x3ffffff;
        piVar5 = 0x8c4aa2b0;
        uVar11 = uVar11 & 0xffff7fff;
        g_8c4aa2b0 = iVar10;
        piVar5[1] = (int)(a0 + 4);
        ar6_00 = 0xff000038;
        uVar7 = sVar2 * 0x20 + a1;
        piVar5[2] = uVar7;
        piVar5[3] = uVar7 & uVar8 | uVar9;
        uVar8 = uVar7 >> 0x18 & 0x1c;
        ar5_00 = ar6_00 + 1;
        *ar5_00 = uVar8;
        *ar6_00 = uVar8;
        g_8c4aa518 = g_8c4aa518 + iVar10;
        uVar8 = uVar11 & 0xff;
        if (g_8c4aa554 == 0) {
            if (uVar8 == 0x29) {
                iVar6 = gfxlib_fill_loop_215250(0x8c4aa2b0, ar5_00, ar6_00, 0x1c);
            } else if (uVar8 == 0x2c) {
                iVar6 = gfxlib_fill_loop_2157c8(0x8c4aa2b0, uVar11, ar6_00, 0x1c);
            } else {
                if (uVar8 != 0x2a) {
                    return 0xffffffff;
                }
                iVar6 = gfxlib_fill_loop_215374(0x8c4aa2b0, ar5_00, ar6_00, 0x1c);
            }
        } else if (uVar8 == 0x29) {
            iVar6 = gfxlib_fill_loop_215674(0x8c4aa2b0, ar5_00, ar6_00, 0x1c);
        } else if (uVar8 == 0x2c) {
            iVar6 = gfxlib_fill_loop_215988(0x8c4aa2b0, uVar11, ar6_00, 0x1c);
        } else {
            if (uVar8 != 0x2a) {
                return 0xffffffff;
            }
            iVar6 = gfxlib_fill_loop_2154dc(0x8c4aa2b0, ar5_00, ar6_00, 0x1c);
        }
        uVar9 = (u32)0x200;
        uVar11 = uVar11 & 0xff00;
        *piVar3 = *piVar3 + iVar6;
        if ((uVar11 == uVar9) || (uVar8 != 0x2c)) {
            *piVar4 = *piVar4 + iVar10;
        }
        a0 = a0 + 4 + (u32)uVar1 * 2 + -2;
    } while (true);
}

/*
 * gfxlib_uses_point_transform_or_copy_218e00  0x8c218e00
 * area name: in the gfxlib library code range; behaviour name: its main named callee is point_transform_or_copy
 * called by: alt_entry_218ea0, gfxlib_draw_218f56, gfxlib_uses_matrix_push_regs_218e8a
 */
u32 gfxlib_uses_point_transform_or_copy_218e00(int *a0, u32 a1) {
    u32 r7;
    u32 ar6_00;
    int iVar1;
    u8 *puVar2;
    double dVar3;
    u32 in_PR;
    char cVar4;
    char cVar5;
    u32 in_stack_ffffffe8;
    u32 uStack_10;

    cVar5 = '\0';
    cVar4 = '\0';
    puVar2 = &stack0xffffffe8;
    if ((((g_8c4aa4f0 & 0x100) == 0) || ((float)a0[5] <= 0.0)) || (iVar1 = gfxlib_test_217e18(a0), iVar1 == 0)) {
        g_8c4aa554 = 0;
        if ((g_8c4aa4f0 & 0x40) != 0) {
            point_transform_or_copy(0, a0 + 2, &stack0xffffffe8, r7, in_stack_ffffffe8);
            if (cVar5 == '\0') {
                dVar3 = (double)CONCAT44(uStack_10, a0[5]);
            } else {
                dVar3 = (double)CONCAT44(in_PR, uStack_10);
            }
            if (cVar4 == '\0') {
                dVar3 = (double)CONCAT44((float)((u64)dVar3 >> 0x20) + SUB84(dVar3, 0), SUB84(dVar3, 0));
            } else {
                dVar3 = dVar3 + dVar3;
            }
            if (cVar5 == '\0') {
                dVar3 = (double)CONCAT44((int)((u64)dVar3 >> 0x20), g_8c4aa544);
            }
            if (cVar4 == '\0' && SUB84(dVar3, 0) < (float)((u64)dVar3 >> 0x20)) {
                g_8c4aa554 = 1;
            }
        }
        ar6_00 = g_8c4aa510;
        if ((*a0 == 0) || (iVar1 = gfxlib_calls_fill_loop_218c82(*a0, g_8c4aa510), iVar1 != -1)) {
            if (a0[1] != 0) {
                vram_draw_218804(a0[1], g_8c4c0fa0, ar6_00, r7, in_stack_ffffffe8);
            }
            return 0;
        }
    }
    return 0xffffffff;
}

/*
 * gfxlib_uses_matrix_push_regs_218e8a  0x8c218e8a
 * area name: in the gfxlib library code range; behaviour name: its main named callee is matrix_push_regs
 * called by: alt_entry_218ea0, gfxlib_draw_218f96, gfxlib_uses_matrix_push_regs_218e8a
 */
u32 gfxlib_uses_matrix_push_regs_218e8a(u32 *a0, u32 a1) {
    u32 r6;
    u32 r7;
    u32 uVar1;
    u32 *puVar2;
    u32 unaff_r13;
    u32 uVar3;

    puVar2 = a0;
    do {
        uVar3 = *puVar2;
        if ((uVar3 & 7) == 7) {
            uVar1 = 7;
            if ((uVar3 & 8) == 0) {
                a0 = (u32 *)puVar2[1];
                uVar1 = gfxlib_uses_point_transform_or_copy_218e00(a0, a1);
            }
            if ((uVar3 & 0x10) == 0) {
                a0 = (u32 *)puVar2[0xb];
                uVar1 = gfxlib_uses_matrix_push_regs_218e8a(a0, a1);
            }
        } else {
            uVar1 = matrix_push_regs(a0, a1, r6, r7, uVar3 & 7);
            if ((uVar3 & 1) == 0) {
                a0 = puVar2 + 2;
                uVar1 = noop_25b638();
            }
            if ((uVar3 & 2) == 0) {
                unaff_r13 = uVar3 & 0x20;
                a0 = puVar2 + 5;
                a1 = unaff_r13;
                uVar1 = ninja_scan_loop_2569e0(a0, unaff_r13, r6, r7, uVar1);
            }
            if ((uVar3 & 4) == 0) {
                a0 = puVar2 + 8;
                noop_257098();
            }
            if ((uVar3 & 8) == 0) {
                a0 = (u32 *)puVar2[1];
                unaff_r13 = gfxlib_uses_point_transform_or_copy_218e00(a0, a1);
            }
            if (((uVar3 & 0x10) == 0) && (((uVar3 & 0x100) == 0 || (unaff_r13 == 0)))) {
                a0 = (u32 *)puVar2[0xb];
                gfxlib_uses_matrix_push_regs_218e8a(a0, a1);
            }
            uVar1 = matrix_pop1();
        }
        puVar2 = (u32 *)puVar2[0xc];
    } while (puVar2 != NULL);
    return uVar1;
}

/*
 * alt_entry_218ea0  0x8c218ea0
 * probably an entry 22 bytes into 8c218e8a: it reads registers that code sets before it
 */
u32 alt_entry_218ea0(u32 *a0, u32 a1) {
    u32 r6;
    u32 r7;
    u32 uVar1;
    u32 unaff_r8;
    u32 unaff_r10;
    u32 unaff_r11;
    u32 *unaff_r12;
    u32 unaff_r13;
    u32 uVar2;
    u32 in_PR;

    do {
        uVar2 = *unaff_r12;
        if ((uVar2 & 7) == 7) {
            uVar1 = 7;
            if ((uVar2 & unaff_r11) == 0) {
                a0 = (u32 *)unaff_r12[1];
                uVar1 = gfxlib_uses_point_transform_or_copy_218e00(a0, a1);
            }
            if ((uVar2 & unaff_r10) == 0) {
                a0 = (u32 *)unaff_r12[0xb];
                uVar1 = gfxlib_uses_matrix_push_regs_218e8a(a0, a1);
            }
        } else {
            matrix_push_regs(a0, a1, r6, r7, in_PR);
            if ((uVar2 & 1) == 0) {
                a0 = unaff_r12 + 2;
                noop_25b638();
            }
            if ((uVar2 & 2) == 0) {
                unaff_r13 = uVar2 & 0x20;
                a0 = unaff_r12 + 5;
                a1 = unaff_r13;
                ninja_scan_loop_2569e0(a0, unaff_r13, r6, r7, in_PR);
            }
            if ((uVar2 & unaff_r8) == 0) {
                a0 = unaff_r12 + 8;
                noop_257098();
            }
            if ((uVar2 & unaff_r11) == 0) {
                a0 = (u32 *)unaff_r12[1];
                unaff_r13 = gfxlib_uses_point_transform_or_copy_218e00(a0, a1);
            }
            if (((uVar2 & unaff_r10) == 0) && (((uVar2 & 0x100) == 0 || (unaff_r13 == 0)))) {
                a0 = (u32 *)unaff_r12[0xb];
                gfxlib_uses_matrix_push_regs_218e8a(a0, a1);
            }
            uVar1 = matrix_pop1();
        }
        unaff_r12 = (u32 *)unaff_r12[0xc];
    } while (unaff_r12 != NULL);
    return uVar1;
}

/*
 * gfxlib_draw_218f56  0x8c218f56
 * area name: in the gfxlib library code range; behaviour name: mostly calls draw functions
 */
u32 gfxlib_draw_218f56(u32 a0, u32 a1, u32 a2, u32 a3) {
    u32 uVar1;
    u8 *ar5_00;
    double dVar2;
    char cVar3;
    char cVar4;

    cVar4 = '\0';
    cVar3 = '\0';
    draw_state_save(a0, a1, a2, a3);
    if (cVar4 == '\0') {
        dVar2 = (double)CONCAT44(g_8c4aa4a8, g_8c4aa4dc);
    } else {
        dVar2 = (double)CONCAT44(g_8c4aa4ac, g_8c4aa4a8);
    }
    ar5_00 = &g_8c4aa2b0;
    if (cVar3 == '\0') {
        dVar2 = (double)CONCAT44((float)((u64)dVar2 >> 0x20) * SUB84(dVar2, 0), SUB84(dVar2, 0));
    } else {
        dVar2 = dVar2 * dVar2;
    }
    if (cVar4 == '\0') {
        g_8c4aa2c0 = (u32)((u64)dVar2 >> 0x20);
        dVar2 = (double)CONCAT44(g_8c4aa4a8, g_8c4aa4e0);
    } else {
        g_8c4aa2c0 = SUB84(dVar2, 0);
        dVar2 = (double)CONCAT44(g_8c4aa4ac, g_8c4aa4a8);
    }
    if (cVar3 == '\0') {
        dVar2 = (double)CONCAT44((float)((u64)dVar2 >> 0x20) * SUB84(dVar2, 0), SUB84(dVar2, 0));
    } else {
        dVar2 = dVar2 * dVar2;
    }
    if (cVar4 == '\0') {
        g_8c4aa2c4 = (u32)((u64)dVar2 >> 0x20);
    } else {
        g_8c4aa2c4 = SUB84(dVar2, 0);
        g_8c4aa2d0 = g_8c4aa4bc;
    }
    g_8c4aa2cc = g_8c4aa4b8;
    g_8c4aa2c8 = g_8c4aa4b4;
    gfxlib_uses_point_transform_or_copy_218e00(a0, &g_8c4aa2b0);
    uVar1 = draw_state_restore(a0);
    return uVar1;
}

/*
 * gfxlib_draw_218f96  0x8c218f96
 * area name: in the gfxlib library code range; behaviour name: mostly calls draw functions
 * called by: game_draw_015b30
 */
u32 gfxlib_draw_218f96(u32 a0, u32 a1, u32 a2, u32 a3) {
    u32 uVar1;
    u8 *ar5_00;
    double dVar2;
    char cVar3;
    char cVar4;

    cVar4 = '\0';
    cVar3 = '\0';
    draw_state_save(a0, a1, a2, a3);
    if (cVar4 == '\0') {
        dVar2 = (double)CONCAT44(g_8c4aa4a8, g_8c4aa4dc);
    } else {
        dVar2 = (double)CONCAT44(g_8c4aa4ac, g_8c4aa4a8);
    }
    ar5_00 = &g_8c4aa2b0;
    if (cVar3 == '\0') {
        dVar2 = (double)CONCAT44((float)((u64)dVar2 >> 0x20) * SUB84(dVar2, 0), SUB84(dVar2, 0));
    } else {
        dVar2 = dVar2 * dVar2;
    }
    if (cVar4 == '\0') {
        g_8c4aa2c0 = (u32)((u64)dVar2 >> 0x20);
        dVar2 = (double)CONCAT44(g_8c4aa4a8, g_8c4aa4e0);
    } else {
        g_8c4aa2c0 = SUB84(dVar2, 0);
        dVar2 = (double)CONCAT44(g_8c4aa4ac, g_8c4aa4a8);
    }
    if (cVar3 == '\0') {
        dVar2 = (double)CONCAT44((float)((u64)dVar2 >> 0x20) * SUB84(dVar2, 0), SUB84(dVar2, 0));
    } else {
        dVar2 = dVar2 * dVar2;
    }
    if (cVar4 == '\0') {
        g_8c4aa2c4 = (u32)((u64)dVar2 >> 0x20);
    } else {
        g_8c4aa2c4 = SUB84(dVar2, 0);
        g_8c4aa2d0 = g_8c4aa4bc;
    }
    g_8c4aa2cc = g_8c4aa4b8;
    g_8c4aa2c8 = g_8c4aa4b4;
    gfxlib_uses_matrix_push_regs_218e8a(a0, &g_8c4aa2b0);
    uVar1 = draw_state_restore(a0);
    return uVar1;
}

/*
 * gfxlib_calc_218fdc  0x8c218fdc
 * area name: in the gfxlib library code range; behaviour name: integer arithmetic on its arguments
 */
u32 gfxlib_calc_218fdc(void) {
    double dVar1;

    dVar1 = (double)CONCAT44(g_8c4aa4a8, g_8c4aa4dc);

    dVar1 = (double)CONCAT44((float)((u64)dVar1 >> 0x20) * SUB84(dVar1, 0), SUB84(dVar1, 0));

    g_8c4aa2c0 = (u32)((u64)dVar1 >> 0x20);
    dVar1 = (double)CONCAT44(g_8c4aa4a8, g_8c4aa4e0);

    dVar1 = (double)CONCAT44((float)((u64)dVar1 >> 0x20) * SUB84(dVar1, 0), SUB84(dVar1, 0));

    g_8c4aa2c4 = (u32)((u64)dVar1 >> 0x20);
    g_8c4aa2cc = g_8c4aa4b8;

    g_8c4aa2c8 = g_8c4aa4b4;

    return 0x1c;
}

/*
 * gfxlib_float_calc_219038  0x8c219038
 * area name: in the gfxlib library code range; behaviour name: floating-point arithmetic
 * called by: Class_12b3b8_uses_object_dtor_delete_0e7a78, Class_12b580_uses_njCalcVector_like_0d8808,
 * Class_12b758_draw_0e4dd0, Vec3_uses_set_vec_0e3f24, draw_uses_njCalcVector_like_0d4bdc, game_uses_gfx_set_vec_0e5dac,
 * game_uses_matrix_push_0cc524, game_uses_set_vec3_g_0e743c (+1 more)
 */
u32 gfxlib_float_calc_219038(void) {
    u64 *puVar1;
    double *pdVar2;
    double *pdVar3;
    double *pdVar4;
    u32 uVar5;
    double dVar6;
    u32 in_fr5;
    u32 in_fr4;
    u32 in_fr6;

    pdVar4 = 0x8c4aa4e0;
    pdVar3 = 0x8c4aa4dc;
    pdVar2 = 0x8c4aa4a8;
    puVar1 = 0x8c4ab198;

    *(u32 *)0x8c4ab198 = in_fr4;
    *(u32 *)((int)puVar1 + 4) = in_fr5;
    *(u32 *)(puVar1 + 1) = in_fr6;
    dVar6 = (double)CONCAT44(*(u32 *)pdVar2, *(u32 *)pdVar3);

    dVar6 = (double)CONCAT44((float)((u64)dVar6 >> 0x20) * SUB84(dVar6, 0), SUB84(dVar6, 0));

    *(int *)((int)puVar1 + 0x24) = (int)((u64)dVar6 >> 0x20);
    dVar6 = (double)CONCAT44(*(u32 *)pdVar2, *(u32 *)pdVar4);

    dVar6 = (double)CONCAT44((float)((u64)dVar6 >> 0x20) * SUB84(dVar6, 0), SUB84(dVar6, 0));

    *(int *)(puVar1 + 5) = (int)((u64)dVar6 >> 0x20);
    *(u32 *)((int)puVar1 + 0x2c) = *(u32 *)((int)pdVar2 + 0xc);
    uVar5 = *(u32 *)(pdVar2 + 2);

    *(u32 *)(puVar1 + 6) = uVar5;

    return 0x30;
}

/*
 * gfxlib_calc_219070  0x8c219070
 * area name: in the gfxlib library code range; behaviour name: integer arithmetic on its arguments
 * called by: CAnimal_calls_calc_0f52c8, Class_12b3b8_uses_object_dtor_delete_0e7a78,
 * Class_12b580_uses_njCalcVector_like_0d8808, Class_12b758_draw_0e4dd0, Vec3_uses_set_vec_0e3f24,
 * draw_uses_njCalcVector_like_0d4bdc, game_calls_calc_0f4b44, game_calls_calc_0f5308 (+7 more)
 */
u32 gfxlib_calc_219070(void) {
    u64 in_dr4;

    g_8c4ab1a4 = -(float)((u64)in_dr4 >> 0x20);
    g_8c4ab1a8 = (int)in_dr4;
    return 0x10;
}

/*
 * set_vec3_g_278744  0x8c21907e
 * stores fr4..fr6 at 0x8c278744
 * called by: Class_12b3b8_uses_object_dtor_delete_0e7a78, Class_12b580_uses_njCalcVector_like_0d8808,
 * Vec3_uses_set_vec_0e3f24, game_uses_gfx_set_vec_0e5dac, game_uses_matrix_push_0cc524, game_uses_set_vec3_g_0e743c,
 * game_uses_touch_fields_30_3c_0ff928
 */
u32 set_vec3_g_278744(void) {
    u32 in_fr5;
    u32 in_fr4;
    u32 in_fr6;

    g_8c278744 = in_fr4;
    g_8c278748 = in_fr5;
    g_8c27874c = in_fr6;
    return 0xc;
}

/*
 * gfxlib_draw_21908e  0x8c21908e
 * area name: in the gfxlib library code range; behaviour name: mostly calls draw functions
 * called by: alt_entry_219962, gfxlib_calls_test_219954, gfxlib_draw_21908e
 */
u8 *gfxlib_draw_21908e(u16 *a0, int a1, u32 a2) {
    u16 uVar1;
    u8 *puVar2;
    u32 uVar3;
    int iVar4;
    u8 *ar4_00;
    u32 uVar5;
    u8 *puVar6;
    u16 *puVar7;
    u32 uVar8;
    u16 uVar9;
    u32 a6;
    u32 uVar10;
    u16 *puVar11;
    u8 *ar7_00;
    code *pcVar12;
    int iVar13;
    double in_dr2;
    double dVar14;
    u32 uVar15;
    double in_dr4;
    float fVar16;
    u64 in_xd2;
    double in_xd14;
    char cVar17;
    char cVar18;
    u16 *puStack_78;
    u8 auStack_34[4];
    u8 auStack_30[20];

    cVar18 = '\0';
    cVar17 = '\0';
    ar7_00 = auStack_30;
    puVar2 = (u8 *)0x40;
    puVar11 = a0;
    do {
        while (true) {
            while (true) {
                puStack_78 = puVar11;
                puVar11 = puStack_78 + 1;
                uVar9 = *puStack_78;
                if (uVar9 == 0xff) {
                    return puVar2;
                }
                puVar6 = (u8 *)(int)(short)(uVar9 & 0xff);
                iVar4 = (int)(short)uVar9;
                if ((u8 *)0x7 < puVar6)
                    break;
                if (puVar6 == (u8 *)0x1) {
                    puVar2 = (u8 *)gfxlib_calc_2375ae(iVar4, 1);
                } else {
                    puVar2 = puVar6;
                    if ((puVar6 != (u8 *)0x2) && (puVar6 != (u8 *)0x3)) {
                        if (puVar6 == (u8 *)0x4) {
                            iVar4 = (short)(uVar9 >> 8) * 4;
                            *(u16 **)(iVar4 + 0x8c4c0fac) = puVar11;
                            g_8c4c0fa8 = g_8c4c0fa8 + 1;
                            return (u8 *)iVar4;
                        }
                        if (puVar6 == (u8 *)0x5) {
                            puVar2 = (u8 *)gfxlib_draw_21908e(*(u32 *)((short)(uVar9 >> 8) * 4 + 0x8c4c0fac), a1, a2);
                            g_8c4c0fa8 = g_8c4c0fa8 + -1;
                        }
                    }
                }
            }
            if ((u8 *)0xf < puVar6)
                break;
            puVar7 = puStack_78 + 2;
            uVar3 = gfxlib_calc_23752c(iVar4, (int)(short)*puVar11);
            puVar2 = (u8 *)(uVar3 & 0xff);
            g_8c4aa2f4 = 0;
            puVar11 = puVar7;
            if ((puVar2 == (u8 *)0x4) && ((*puVar7 & 0x18) != 0)) {
                if (cVar18 == '\0') {
                    in_dr4 = (double)CONCAT44(0x46fffe00, SUB84(in_dr4, 0));
                } else {
                    in_dr4 = -3.115182567042769e-250;
                }
                uVar8 = (u32)((u64)in_dr2 >> 0x20);
                fVar16 = (float)((u64)in_dr4 >> 0x20);
                if (cVar17 == '\0') {
                    dVar14 = (double)CONCAT44(uVar8, (float)(int)(short)puStack_78[4] / fVar16);
                } else {
                    dVar14 = (double)CONCAT44(uVar8, (float)(int)(short)puStack_78[4]) / in_dr4;
                }
                g_8c4ab1f4 = (u32)in_xd2;
                g_8c4ab208 = g_8c4ab1f4;
                if (cVar18 == '\0') {
                    g_8c4ab1f4 = SUB84(dVar14, 0);
                }
                uVar8 = (u32)((u64)dVar14 >> 0x20);
                if (cVar17 == '\0') {
                    dVar14 = (double)CONCAT44(uVar8, (float)(int)(short)puStack_78[5] / fVar16);
                } else {
                    dVar14 = (double)CONCAT44(uVar8, (float)(int)(short)puStack_78[5]) / in_dr4;
                }
                g_8c4ab1f8 = g_8c4ab208;
                if (cVar18 == '\0') {
                    g_8c4ab1f8 = SUB84(dVar14, 0);
                }
                uVar8 = (u32)((u64)dVar14 >> 0x20);
                if (cVar17 == '\0') {
                    dVar14 = (double)CONCAT44(uVar8, (float)(int)(short)puStack_78[6] / fVar16);
                } else {
                    dVar14 = (double)CONCAT44(uVar8, (float)(int)(short)puStack_78[6]) / in_dr4;
                }
                g_8c4ab1fc = g_8c4ab208;
                if (cVar18 == '\0') {
                    g_8c4ab1fc = SUB84(dVar14, 0);
                }
                uVar8 = (u32)((u64)dVar14 >> 0x20);
                if (cVar17 == '\0') {
                    dVar14 = (double)CONCAT44(uVar8, (float)(int)(short)puStack_78[7] / fVar16);
                } else {
                    dVar14 = (double)CONCAT44(uVar8, (float)(int)(short)puStack_78[7]) / in_dr4;
                }
                g_8c4ab200 = g_8c4ab208;
                if (cVar18 == '\0') {
                    g_8c4ab200 = SUB84(dVar14, 0);
                }
                uVar8 = (u32)((u64)dVar14 >> 0x20);
                if (cVar17 == '\0') {
                    dVar14 = (double)CONCAT44(uVar8, (float)(int)(short)puStack_78[8] / fVar16);
                } else {
                    dVar14 = (double)CONCAT44(uVar8, (float)(int)(short)puStack_78[8]) / in_dr4;
                }
                g_8c4ab204 = g_8c4ab208;
                if (cVar18 == '\0') {
                    g_8c4ab204 = SUB84(dVar14, 0);
                }
                uVar8 = (u32)((u64)dVar14 >> 0x20);
                if (cVar17 == '\0') {
                    in_dr2 = (double)CONCAT44(uVar8, (float)(int)(short)puStack_78[9] / fVar16);
                } else {
                    in_dr2 = (double)CONCAT44(uVar8, (float)(int)(short)puStack_78[9]) / in_dr4;
                }
                if (cVar18 == '\0') {
                    g_8c4ab208 = SUB84(in_dr2, 0);
                } else {
                    uRam8c4ab20c = (u32)((u64)in_xd2 >> 0x20);
                }
                g_8c4aa2f4 = 1;
                puVar2 = &g_8c2192e8;
                puVar11 = puStack_78 + 10;
            }
        }
        uVar8 = 0x40;
        if (puVar6 < (u8 *)0x40) {
            ar7_00 = NULL;
            puStack_78 = puStack_78 + 2;
            iVar13 = (int)(short)*puVar11;
            puVar2 = (u8 *)gfxlib_calls_calc_21d7d4(iVar4, puStack_78, &g_8c275970, 0, &g_8c275990);
        } else {
            puVar7 = puStack_78 + 2;
            uVar1 = *puVar11;
            puStack_78 = puStack_78 + 3;
            uVar3 = (u32)(short)*puVar7;
            if (a1 < g_8c4c0fa4) {
                ar7_00 = &g_8c4aa4f0;
                if ((g_8c4aa4f0 & 0x800) != 0) {
                    uVar9 = uVar9 & (u16)g_8c4aa524 | (u16)g_8c4aa528;
                }
                a6 = (int)(short)uVar9 >> 8;
                if ((a6 & 4) == 0) {
                    dVar14 = g_8c4ab1a8;
                    if (cVar18 == '\0') {
                        dVar14 = in_xd14;
                    }
                } else {
                    dVar14 = (double)((u64)in_dr4 & 0xffffffff);
                    if (cVar18 == '\0') {
                        dVar14 = in_xd14;
                    }
                }
                uVar15 = SUB84(in_dr4, 0);
                in_dr4 = (double)CONCAT44(0x3f800000, uVar15);
                in_xd14 = dVar14;
                if (((a6 & 1) != 0) && (in_xd14 = in_dr4, cVar18 == '\0')) {
                    in_xd14 = dVar14;
                }
                ar4_00 = NULL;
                g_8c277acc = (u32)((a6 & 0x20) != 0);
                iVar4 = (short)(char)(uVar9 >> 8) * 0x20;
                uVar10 = (u32)((u64)in_dr2 >> 0x20);
                if ((puVar6 == (u8 *)0x41) || (puVar6 == (u8 *)0x42)) {
                    if (g_8c4aa2f4 == 0) {
                        if (g_8c4aa2f0 == 0) {
                            uVar5 = *(u32 *)(iVar4 + 0x8c275a9c);
                            uVar15 = a6;
                            ta_fifo_237124(uVar5, 0x40, a6, &g_8c4aa4f0);
                            if ((a6 & 8) == 0) {
                                ar7_00 = (u8 *)ta_sq_write_header4();
                            } else {
                                ar7_00 = (u8 *)ta_sq_write_header5();
                            }
                            if (puVar6 == (u8 *)0x41) {
                                if (cVar18 == '\0') {
                                    in_dr4 = (double)((u64)in_dr4 & 0xffffffff);
                                } else {
                                    in_dr4 = 6.462349967980925e-27;
                                }
                            } else if (cVar18 == '\0') {
                                in_dr4 = (double)((u64)in_dr4 & 0xffffffff);
                            } else {
                                in_dr4 = -4.0881699329069754e-250;
                            }
                            if (a1 == 0) {
                                puVar2 = &g_8c275a88;
                            } else {
                                puVar2 = &g_8c276a88;
                            }
                            uVar8 = a2;
                            puVar6 = (u8 *)(**(code **)(puVar2 + iVar4 + 0x1c))(puStack_78, a2, uVar3, ar7_00);
                            ar4_00 = puVar6;
                            a6 = uVar3;
                        } else {
                            if ((g_8c4aa4f0 & 0x200) == 0) {
                                if ((a6 & 1) == 0) {
                                    if (cVar18 == '\0') {
                                        dVar14 = (double)CONCAT44(g_8c27597c, g_8c27874c);
                                    } else {
                                        in_xd2 = CONCAT44(g_8c278750, g_8c27874c);
                                        dVar14 = (double)CONCAT44(uRam8c275980, g_8c27597c);
                                    }
                                    if (cVar17 == '\0') {
                                        in_dr2 = (double)CONCAT44((float)((u64)dVar14 >> 0x20) * SUB84(dVar14, 0),
                                                                  SUB84(dVar14, 0));
                                    } else {
                                        in_dr2 = dVar14 * dVar14;
                                    }
                                } else if (cVar18 == '\0') {
                                    in_dr2 = (double)((u64)uVar10 << 0x20);
                                } else {
                                    in_xd2 = CONCAT44(uRam8c275980, g_8c27597c);
                                }
                            } else if ((a6 & 1) == 0) {
                                if (cVar18 == '\0') {
                                    in_dr2 = (double)CONCAT44(uVar10, g_8c27874c);
                                } else {
                                    in_xd2 = CONCAT44(g_8c278750, g_8c27874c);
                                }
                            } else if (cVar18 == '\0') {
                                in_dr2 = (double)((u64)uVar10 << 0x20);
                            } else {
                                in_xd2 = CONCAT44(g_8c275970._4_4_, (u32)g_8c275970);
                            }
                            uVar10 = a6;
                            ta_fifo_237124(*(u32 *)(iVar4 + 0x8c275a98), 0x40, a6, &g_8c4aa4f0);
                            if ((a6 & 8) == 0) {
                                if ((a6 & 2) == 0) {
                                    ar7_00 = (u8 *)ta_init_fields_236d20(auStack_34, &g_8c275990);
                                } else {
                                    ar7_00 = (u8 *)ta_init_fields_236b3c(auStack_34);
                                }
                            } else if ((a6 & 2) == 0) {
                                ar7_00 = (u8 *)ta_init_fields_236dd8(auStack_34, &g_8c275990);
                            } else {
                                ar7_00 = (u8 *)ta_init_fields_236c38(auStack_34);
                            }
                            if (puVar6 == (u8 *)0x41) {
                                if (cVar18 == '\0') {
                                    uVar15 = 0x3b800000;
                                }
                            } else if (cVar18 == '\0') {
                                uVar15 = 0x3a800000;
                            }
                            if (a1 == 0) {
                                puVar2 = &g_8c275a88;
                            } else {
                                puVar2 = &g_8c276a88;
                            }
                            in_dr4 = in_xd14;
                            if (cVar18 == '\0') {
                                in_dr4 = (double)(u64)uVar15;
                            }
                            uVar8 = a2;
                            puVar6 = (u8 *)(**(code **)(puVar2 + iVar4 + 0x18))(puStack_78, a2, uVar3, ar7_00);
                            ar4_00 = puVar6;
                            a6 = uVar3;
                        }
                    } else {
                        if ((a6 & 8) == 0) {
                            uVar5 = 0x8000c;
                            ta_fifo_237124(0x8000c, 0x40, a6, &g_8c4aa4f0);
                            ar7_00 = (u8 *)ta_sq_write_header4();
                        } else {
                            uVar5 = 0x210000c;
                            ta_fifo_237124(0x210000c, 0x40, a6, &g_8c4aa4f0);
                            if (cVar18 == '\0') {
                                in_dr2 = (double)CONCAT44((int)((u64)in_dr2 >> 0x20), (u32)g_8c275970);
                            } else {
                                in_xd2 = CONCAT44(g_8c275970._4_4_, (u32)g_8c275970);
                                g_8c278744 = g_8c275970._4_4_;
                            }
                            g_8c278740 = (u32)g_8c275970;
                            ar7_00 = (u8 *)ta_sq_write_header5();
                        }
                        dVar14 = in_dr4;
                        if (puVar6 == (u8 *)0x41) {
                            if (cVar18 == '\0') {
                                dVar14 = 4.93198240478257e-315;
                            }
                        } else if (cVar18 == '\0') {
                            dVar14 = 4.84909194419799e-315;
                        }
                        in_dr4 = in_xd14;
                        if (a1 == 0) {
                            if (cVar18 == '\0') {
                                in_dr4 = (double)((u64)dVar14 & 0xffffffff);
                            }
                            uVar8 = a2;
                            puVar6 = (u8 *)gfxlib_uses_njUnitVector_22b7a8(puStack_78, a2, uVar3, ar7_00);
                            ar4_00 = puVar6;
                            a6 = uVar3;
                        } else {
                            if (cVar18 == '\0') {
                                in_dr4 = (double)((u64)dVar14 & 0xffffffff);
                            }
                            uVar8 = a2;
                            puVar6 = (u8 *)gfxlib_uses_njUnitVector_22bb70(puStack_78, a2, uVar3, ar7_00);
                            ar4_00 = puVar6;
                            a6 = uVar3;
                        }
                    }
                } else if (puVar6 == (u8 *)0x40) {
                    if ((a6 & 0x40) == 0) {
                        if (g_8c4aa2f0 == 0) {
                            uVar5 = *(u32 *)(iVar4 + 0x8c275a8c);
                            uVar15 = a6;
                            ta_fifo_237124(uVar5, 0x40, a6, &g_8c4aa4f0);
                            if ((a6 & 8) == 0) {
                                pcVar12 = ta_sq_write_header4_short;
                            } else {
                                pcVar12 = ta_sq_write_header5_short;
                            }
                            ar7_00 = (u8 *)(*pcVar12)(uVar5, uVar8, uVar15, ar7_00);
                            if (a1 != 0)
                                goto LAB_8c2197ce;
                        LAB_8c2197d8:
                            puVar2 = &g_8c275a88;
                            goto LAB_8c2197de;
                        }
                        if ((a6 & 4) == 0) {
                            if (cVar18 == '\0') {
                                dVar14 = (double)CONCAT44(g_8c27597c, g_8c27874c);
                            } else {
                                in_xd2 = CONCAT44(g_8c278750, g_8c27874c);
                                dVar14 = (double)CONCAT44(uRam8c275980, g_8c27597c);
                            }
                            if (cVar17 == '\0') {
                                in_dr2 =
                                    (double)CONCAT44((float)((u64)dVar14 >> 0x20) * SUB84(dVar14, 0), SUB84(dVar14, 0));
                            } else {
                                in_dr2 = dVar14 * dVar14;
                            }
                        } else if (cVar18 == '\0') {
                            in_dr2 = (double)((u64)uVar10 << 0x20);
                        } else {
                            in_xd2 = CONCAT44(uRam8c275980, g_8c27597c);
                        }
                        uVar10 = a6;
                        ta_fifo_237124(*(u32 *)(&g_8c275a88 + iVar4), 0x40, a6, &g_8c4aa4f0);
                        if ((a6 & 8) == 0) {
                            pcVar12 = ta_sq_write_vertex_slot4;
                        } else {
                            pcVar12 = ta_sq_write_vertex_slot5;
                        }
                        ar7_00 = (u8 *)(*pcVar12)(auStack_34, uVar8, uVar10, ar7_00);
                        if (a1 == 0)
                            goto LAB_8c219794;
                    LAB_8c219756:
                        puVar2 = &g_8c276a88;
                    } else {
                        if (g_8c4aa2f0 == 0) {
                            uVar5 = *(u32 *)(iVar4 + 0x8c275a8c);
                            uVar15 = a6;
                            ta_fifo_237124(uVar5, 0x40, a6, &g_8c4aa4f0);
                            if ((a6 & 8) == 0) {
                                ar7_00 = (u8 *)ta_sq_write_header4();
                            } else {
                                ar7_00 = (u8 *)ta_sq_write_header5();
                            }
                            if (a1 == 0)
                                goto LAB_8c2197d8;
                        LAB_8c2197ce:
                            puVar2 = &g_8c276a88;
                        LAB_8c2197de:
                            uVar8 = a2;
                            puVar6 = (u8 *)(**(code **)(puVar2 + iVar4 + 0xc))(puStack_78, a2, uVar3, ar7_00);
                            ar4_00 = puVar6;
                            a6 = uVar3;
                            goto LAB_8c2197ea;
                        }
                        if ((a6 & 1) == 0) {
                            if (cVar18 == '\0') {
                                dVar14 = (double)CONCAT44(g_8c27597c, g_8c27874c);
                            } else {
                                in_xd2 = CONCAT44(g_8c278750, g_8c27874c);
                                dVar14 = (double)CONCAT44(uRam8c275980, g_8c27597c);
                            }
                            if (cVar17 == '\0') {
                                in_dr2 =
                                    (double)CONCAT44((float)((u64)dVar14 >> 0x20) * SUB84(dVar14, 0), SUB84(dVar14, 0));
                            } else {
                                in_dr2 = dVar14 * dVar14;
                            }
                        } else if (cVar18 == '\0') {
                            in_dr2 = (double)((u64)uVar10 << 0x20);
                        } else {
                            in_xd2 = CONCAT44(uRam8c275980, g_8c27597c);
                        }
                        uVar10 = a6;
                        ta_fifo_237124(*(u32 *)(&g_8c275a88 + iVar4), 0x40, a6, &g_8c4aa4f0);
                        if ((a6 & 8) == 0) {
                            if ((a6 & 2) == 0) {
                                ar7_00 = (u8 *)ta_init_fields_236d20(auStack_34, &g_8c275990);
                            } else {
                                ar7_00 = (u8 *)ta_init_fields_236b3c(auStack_34);
                            }
                        } else if ((a6 & 2) == 0) {
                            ar7_00 = (u8 *)ta_init_fields_236dd8(auStack_34, &g_8c275990);
                        } else {
                            ar7_00 = (u8 *)ta_init_fields_236c38(auStack_34);
                        }
                        if (a1 != 0)
                            goto LAB_8c219756;
                    LAB_8c219794:
                        puVar2 = &g_8c275a88;
                    }
                    in_dr4 = in_xd14;
                    if (cVar18 == '\0') {
                        in_dr4 = (double)(u64)uVar15;
                    }
                    uVar8 = a2;
                    puVar6 = (u8 *)(**(code **)(puVar2 + iVar4 + 8))(puStack_78, a2, uVar3, ar7_00);
                    ar4_00 = puVar6;
                    a6 = uVar3;
                }
            LAB_8c2197ea:
                puVar2 = puVar6;
                if (ar4_00 != NULL) {
                    puVar2 = (u8 *)ta_set_list_addr(ar4_00);
                }
            }
            iVar13 = uVar1 - 1;
        }
        puVar11 = puStack_78 + iVar13;
    } while (true);
}

/*
 * gfxlib_calls_fill_loop_21982e  0x8c21982e
 * area name: in the gfxlib library code range; behaviour name: its callees mostly do: fill_loop
 * called by: alt_entry_219962, gfxlib_calls_test_219954
 */
u8 *gfxlib_calls_fill_loop_21982e(short *a0, u32 a1, u32 a2, u32 a3, u8 *ain0) {
    u16 uVar1;
    int iVar2;
    u32 ar5_00;
    short *psVar3;
    u8 *puVar4;
    int iVar5;
    u32 ar5_01;
    u32 uVar6;

    ar5_00 = a1;
    while (true) {
        uVar6 = (u32)*a0;
        if (uVar6 == 0xff)
            break;
        uVar1 = a0[1];
        iVar5 = (int)a0[3];
        psVar3 = a0 + 4;
        if ((uVar6 & 0x8000) == 0) {
            g_8c4c0fa0 = 0;
            g_8c4c0fa4 = 0;
        }
        ar5_01 = uVar6 & 0xffff7fff;
        puVar4 = (u8 *)(uVar6 & 0xff);
        g_8c4ab1b4 = a0[2] * 0x20 + a1;
        g_8c4ab1b8 = g_8c4ab1b4 & 0x3ffffff | 0xe0000000;
        _DAT_ff000038 = g_8c4ab1b4 >> 0x18 & 0x1c;
        g_8c4aa518 = g_8c4aa518 + iVar5;
        g_8c4ab1ac = iVar5;
        g_8c4ab1b0 = psVar3;
        _DAT_ff00003c = _DAT_ff000038;
        if (puVar4 == (u8 *)0x2c) {
            iVar2 = gfxlib_fill_loop_232cd0(&g_8c4ab198, ar5_01);
        } else {
            iVar2 = (*(code *)(&PTR_FUN_8c2759f0)[(int)(puVar4 + -0x20) * 2])(&g_8c4ab198, ar5_00, a2, a3);
            ar5_01 = ar5_00;
        }
        g_8c4aa2f0 = *(u32 *)(&g_8c2759f4 + (int)(puVar4 + -0x20) * 8);
        g_8c4c0fa0 = g_8c4c0fa0 + iVar2;
        ain0 = &g_8c2759f4;
        if (((uVar6 & 0x7f00) == 0x200) || (ain0 = puVar4, puVar4 != (u8 *)0x2c)) {
            g_8c4c0fa4 = g_8c4c0fa4 + iVar5;
        }
        a0 = psVar3 + (u32)uVar1 * 2 + -2;
        ar5_00 = ar5_01;
    }
    return ain0;
}

/*
 * gfxlib_calls_test_219954  0x8c219954
 * area name: in the gfxlib library code range; behaviour name: its callees mostly do: test
 * called by: alt_entry_2199c0, alt_entry_21b916, alt_entry_21b9a8, gfxlib_draw_219a86,
 * gfxlib_uses_matrix_push_regs_2199aa, gfxlib_uses_noop_21b908, gfxlib_uses_noop_21b998
 */
u32 gfxlib_calls_test_219954(int *a0, u32 unused_a1, u32 a2, u32 a3) {
    u8 *ain0;
    int iVar1;
    u32 uVar2;
    int ar4_00;

    uVar2 = g_8c4aa510;
    ain0 = &g_8c4aa4f0;
    ar4_00 = *a0;
    if ((((g_8c4aa4f0 & 0x100) == 0) || (ain0 = (u8 *)0x14, (float)a0[5] <= 0.0)) ||
        (iVar1 = gfxlib_test_217e18(a0), ain0 = NULL, iVar1 == 0)) {
        if (ar4_00 != 0) {
            gfxlib_calls_fill_loop_21982e(ar4_00, uVar2, a2, a3, ain0);
        }
        if (a0[1] != 0) {
            gfxlib_draw_21908e(a0[1], g_8c4c0fa0, uVar2);
        }
        uVar2 = 0;
    } else {
        uVar2 = 0xffffffff;
    }
    return uVar2;
}

/*
 * alt_entry_219962  0x8c219962
 * probably an entry 14 bytes into 8c219954: it reads registers that code sets before it
 */
u32 alt_entry_219962(u32 unused_a0, u32 unused_a1, u32 a2, u32 a3, u32 *ain0) {
    int iVar1;
    u32 in_r2;
    u32 *in_r3;
    int *unaff_r12;
    u32 ar5_00;
    int ar4_00;
    s64 lVar2;
    u32 in_PR;

    ar5_00 = *in_r3;
    ar4_00 = *unaff_r12;
    if ((*ain0 & in_r2) != 0) {

        lVar2 = (u64)(u32)unaff_r12[5] << 0x20;

        if ((1 && (float)lVar2 < (float)((u64)lVar2 >> 0x20)) && (iVar1 = gfxlib_test_217e18(unaff_r12), iVar1 != 0)) {
            return 0xffffffff;
        }
    }
    if (ar4_00 != 0) {
        gfxlib_calls_fill_loop_21982e(ar4_00, ar5_00, a2, a3, in_PR);
    }
    if (unaff_r12[1] != 0) {
        gfxlib_draw_21908e(unaff_r12[1], g_8c4c0fa0, ar5_00);
    }
    return 0;
}

/*
 * gfxlib_uses_matrix_push_regs_2199aa  0x8c2199aa
 * area name: in the gfxlib library code range; behaviour name: its main named callee is matrix_push_regs
 * called by: alt_entry_2199c0, gfxlib_draw_219a9a, gfxlib_uses_matrix_push_regs_2199aa
 */
u32 gfxlib_uses_matrix_push_regs_2199aa(u32 *a0, u32 unused_a1, u32 a2, u32 a3) {
    u32 uVar1;
    u32 uVar2;
    u32 unaff_r13;
    u32 uVar3;

    uVar2 = (u32)0x100;
    do {
        uVar3 = *a0;
        if ((uVar3 & 7) == 7) {
            uVar1 = 7;
            if ((uVar3 & 8) == 0) {
                uVar1 = gfxlib_calls_test_219954(a0[1], unused_a1, a2, a3);
            }
            if ((uVar3 & 0x10) == 0) {
                uVar1 = gfxlib_uses_matrix_push_regs_2199aa((u32 *)a0[0xb], unused_a1, a2, a3);
            }
        } else {
            matrix_push_regs();
            if ((uVar3 & 1) == 0) {
                noop_25b638(a0 + 2);
            }
            if ((uVar3 & 2) == 0) {
                unaff_r13 = uVar3 & 0x20;
                unused_a1 = unaff_r13;
                ninja_scan_loop_2569e0(a0 + 5);
            }
            if ((uVar3 & 4) == 0) {
                noop_257098(a0 + 8);
            }
            if ((uVar3 & 8) == 0) {
                unaff_r13 = gfxlib_calls_test_219954(a0[1], unused_a1, a2, a3);
            }
            if (((uVar3 & 0x10) == 0) && (((uVar3 & uVar2) == 0 || (unaff_r13 == 0)))) {
                gfxlib_uses_matrix_push_regs_2199aa((u32 *)a0[0xb], unused_a1, a2, a3);
            }
            uVar1 = matrix_pop1();
        }
        a0 = (u32 *)a0[0xc];
    } while (a0 != NULL);
    return uVar1;
}

/*
 * alt_entry_2199c0  0x8c2199c0
 * probably an entry 22 bytes into 8c2199aa: it reads registers that code sets before it
 */
u32 alt_entry_2199c0(u32 *a0, u32 unused_a1, u32 a2, u32 a3) {
    u32 uVar1;
    u32 unaff_r8;
    u32 unaff_r10;
    u32 unaff_r11;
    u32 *unaff_r12;
    u32 unaff_r13;
    u32 uVar2;
    u32 in_PR;

    do {
        uVar2 = *unaff_r12;
        if ((uVar2 & 7) == 7) {
            uVar1 = 7;
            if ((uVar2 & unaff_r11) == 0) {
                a0 = (u32 *)unaff_r12[1];
                uVar1 = gfxlib_calls_test_219954(a0, unused_a1, a2, a3);
            }
            if ((uVar2 & unaff_r10) == 0) {
                a0 = (u32 *)unaff_r12[0xb];
                uVar1 = gfxlib_uses_matrix_push_regs_2199aa(a0, unused_a1, a2, a3);
            }
        } else {
            matrix_push_regs(a0, unused_a1, a2, a3, in_PR);
            if ((uVar2 & 1) == 0) {
                a0 = unaff_r12 + 2;
                noop_25b638();
            }
            if ((uVar2 & 2) == 0) {
                unaff_r13 = uVar2 & 0x20;
                a0 = unaff_r12 + 5;
                unused_a1 = unaff_r13;
                ninja_scan_loop_2569e0(a0, unaff_r13, a2, a3, in_PR);
            }
            if ((uVar2 & unaff_r8) == 0) {
                a0 = unaff_r12 + 8;
                noop_257098();
            }
            if ((uVar2 & unaff_r11) == 0) {
                a0 = (u32 *)unaff_r12[1];
                unaff_r13 = gfxlib_calls_test_219954(a0, unused_a1, a2, a3);
            }
            if (((uVar2 & unaff_r10) == 0) && (((uVar2 & 0x100) == 0 || (unaff_r13 == 0)))) {
                a0 = (u32 *)unaff_r12[0xb];
                gfxlib_uses_matrix_push_regs_2199aa(a0, unused_a1, a2, a3);
            }
            uVar1 = matrix_pop1();
        }
        unaff_r12 = (u32 *)unaff_r12[0xc];
    } while (unaff_r12 != NULL);
    return uVar1;
}

/*
 * gfxlib_draw_219a86  0x8c219a86
 * area name: in the gfxlib library code range; behaviour name: mostly calls draw functions
 * called by: game_draw_02a29c
 */
u32 gfxlib_draw_219a86(u32 a0, u32 a1, u32 a2, u32 a3) {
    u32 uVar1;

    draw_state_save(a0, a1, a2, a3);
    gfxlib_calls_test_219954(a0, a1, a2, a3);
    uVar1 = draw_state_restore();
    return uVar1;
}

/*
 * gfxlib_draw_219a9a  0x8c219a9a
 * area name: in the gfxlib library code range; behaviour name: mostly calls draw functions
 * called by: CAnimal_draw_088288, Class_12a7f4_draw, Class_12ad50_draw, draw_model_with_items, game_draw_015adc,
 * game_draw_038b04, game_draw_06c04c, game_draw_06c0b8 (+5 more)
 */
u32 gfxlib_draw_219a9a(u32 a0, u32 a1, u32 a2, u32 a3) {
    u32 uVar1;

    draw_state_save(a0, a1, a2, a3);
    gfxlib_uses_matrix_push_regs_2199aa(a0, a1, a2, a3);
    uVar1 = draw_state_restore();
    return uVar1;
}

/*
 * gfxlib_draw_219ad0  0x8c219ad0
 * area name: in the gfxlib library code range; behaviour name: mostly calls draw functions
 * called by: gfxlib_draw_219ad0, gfxlib_uses_point_transform_or_copy_21a678
 */
int gfxlib_draw_219ad0(u16 *a0, u16 *a1, u16 *a2, u32 unused_a3, int ain0) {
    u16 uVar1;
    int iVar2;
    u32 uVar3;
    u16 *a5;
    u16 *a6;
    u8 *ar7_00;
    u16 uVar4;
    u16 uVar5;
    u16 *puVar6;
    code *pcVar7;
    u16 *puVar8;
    u16 *ar6_00;
    u16 *puStack_58;
    u8 *puStack_28;

    a6 = (u16 *)&g_8c4aa318;
    puStack_28 = (u8 *)0x8c4aa328;
    a5 = (u16 *)&g_8c4c0ed4;
    ar7_00 = &g_8c4aa31c;
    ar6_00 = (u16 *)&g_8c4aa318;
    puStack_58 = a0;
    do {
        while (true) {
            puVar6 = puStack_58 + 1;
            uVar5 = *puStack_58;
            if (uVar5 == 0xff) {
                return ain0;
            }
            uVar4 = uVar5 & 0xff;
            if (7 < uVar4)
                break;
            ain0 = (int)(short)uVar4;
            puStack_58 = puVar6;
            if (ain0 == 1) {
                pcVar7 = gfxlib_calc_2375ae;
            override_prt_8c219cbe_7a4d7f16:
                ain0 = (*pcVar7)((int)(short)uVar5, a5, a6, ar7_00);
            } else if ((ain0 != 2) && (ain0 != 3)) {
                if (ain0 == 4) {
                    iVar2 = (short)(uVar5 >> 8) * 4;
                    *(u16 **)(iVar2 + 0x8c4c0fac) = puVar6;
                    g_8c4c0fa8 = g_8c4c0fa8 + 1;
                    return iVar2;
                }
                if (ain0 == 5) {
                    a5 = a1;
                    a6 = a2;
                    ain0 = gfxlib_draw_219ad0(*(u32 *)((short)(uVar5 >> 8) * 4 + 0x8c4c0fac), a1, a2, ar7_00, ar6_00);
                    g_8c4c0fa8 = g_8c4c0fa8 + -1;
                }
            }
        }
        a5 = (u16 *)0x10;
        if (uVar4 < 0x10) {
            pcVar7 = gfxlib_calc_23752c;
            puStack_58 = puStack_58 + 2;
            a5 = (u16 *)(int)(short)*puVar6;
            goto override_prt_8c219cbe_7a4d7f16;
        }
        if (uVar4 < 0x40) {
            puStack_58 = puStack_58 + 2;
            iVar2 = (int)(short)*puVar6;
            a5 = puStack_58;
            ar7_00 = puStack_28;
            puVar6 = ar6_00;
            ain0 = gfxlib_calls_calc_21d7d4((int)(short)uVar5, puStack_58, ar6_00, 0x8c4aa328, 0);
            a6 = ar6_00;
            ar6_00 = puVar6;
        } else {
            puVar8 = puStack_58 + 2;
            uVar1 = *puVar6;
            puStack_58 = puStack_58 + 3;
            puVar6 = (u16 *)(int)(short)*puVar8;
            if ((int)a1 < g_8c4c0fa4) {
                if ((g_8c4aa4f0 & 0x800) != 0) {
                    uVar5 = uVar5 & (u16)g_8c4aa524 | (u16)g_8c4aa528;
                }
                uVar5 = (u16)(char)(uVar5 >> 8);
                iVar2 = 0;
                if (g_8c4aa554 != 0) {
                    uVar5 = uVar5 | 8;
                }
                ar7_00 = (u8 *)((int)(short)uVar5 & 8);
                g_8c277acc = 0;
                a6 = (u16 *)((int)(short)uVar5 & 2);
                a5 = (u16 *)((int)(short)uVar5 & 0x20);
                ain0 = (int)(short)uVar4;
                if (ain0 == 0x40) {
                    if ((uVar5 & 0x40) == 0) {
                        if (ar7_00 == NULL) {
                            if (a5 == NULL) {
                                uVar3 = 0x80012;
                                ta_fifo_237124(0x80012, 0, a6, 0);
                            } else {
                                uVar3 = 0x80010;
                                ta_fifo_237124(0x80010, a5, a6, 0);
                                g_8c277acc = 1;
                            }
                            pcVar7 = ta_sq_write_header4_short;
                        } else {
                            if (a5 == NULL) {
                                uVar3 = 0x2100012;
                                ta_fifo_237124(0x2100012, 0, a6, ar7_00);
                            } else {
                                uVar3 = 0x2100010;
                                ta_fifo_237124(0x2100010, a5, a6, ar7_00);
                                g_8c277acc = 1;
                            }
                            pcVar7 = ta_sq_write_header5_short;
                        }
                        ar7_00 = (u8 *)(*pcVar7)(uVar3, a5, a6, ar7_00);
                        if (a1 == NULL) {
                            a5 = a2;
                            ain0 = gfxlib_fill_loop_221a8c(puStack_58, a2, puVar6, ar7_00);
                            iVar2 = ain0;
                            a6 = puVar6;
                        } else {
                            a5 = a2;
                            ain0 = gfxlib_calls_fill_loop_221c68(puStack_58, a2, puVar6, ar7_00);
                            iVar2 = ain0;
                            a6 = puVar6;
                        }
                    } else {
                        if (ar7_00 == NULL) {
                            if (a6 == NULL) {
                                if (a5 != NULL) {
                                    uVar3 = 0x8001c;
                                    goto override_prt_8c219e26_7a4d7f16;
                                }
                                uVar3 = 0x8001e;
                                ta_fifo_237124(0x8001e, 0, 0, 0);
                            } else if (a5 == NULL) {
                                uVar3 = 0x8001a;
                                ta_fifo_237124(0x8001a, 0, a6, 0);
                            } else {
                                uVar3 = 0x80018;
                            override_prt_8c219e26_7a4d7f16:
                                ta_fifo_237124(uVar3, a5, a6, 0);
                                g_8c277acc = 1;
                            }
                            ar7_00 = (u8 *)ta_sq_write_header4();
                        } else {
                            if (a6 == NULL) {
                                if (a5 != NULL) {
                                    uVar3 = 0x210001c;
                                    goto override_prt_8c219db6_7a4d7f16;
                                }
                                uVar3 = 0x210001e;
                                ta_fifo_237124(0x210001e, 0, 0, ar7_00);
                            } else if (a5 == NULL) {
                                uVar3 = 0x210001a;
                                ta_fifo_237124(0x210001a, 0, a6, ar7_00);
                            } else {
                                uVar3 = 0x2100018;
                            override_prt_8c219db6_7a4d7f16:
                                ta_fifo_237124(uVar3, a5, a6, ar7_00);
                                g_8c277acc = 1;
                            }
                            ar7_00 = (u8 *)ta_sq_write_header5();
                        }
                        if ((g_8c4aa4f0 & 0x200) == 0) {
                            if (a1 == NULL) {
                                a5 = a2;
                                ain0 = gfxlib_fill_loop_221fbc(puStack_58, a2, puVar6, ar7_00);
                                iVar2 = ain0;
                                a6 = puVar6;
                            } else {
                                a5 = a2;
                                ain0 = vram64_22233c(puStack_58, a2, puVar6, ar7_00);
                                iVar2 = ain0;
                                a6 = puVar6;
                            }
                        } else if (a1 == NULL) {
                            a5 = a2;
                            ain0 = vram_fill_loop_22278c(puStack_58, a2, puVar6, ar7_00);
                            iVar2 = ain0;
                            a6 = puVar6;
                        } else {
                            a5 = a2;
                            ain0 = vram64_222cec(puStack_58, a2, puVar6, ar7_00);
                            iVar2 = ain0;
                            a6 = puVar6;
                        }
                    }
                } else if ((ain0 == 0x41) || (ain0 == 0x42)) {
                    if (ar7_00 == NULL) {
                        if (a6 == NULL) {
                            if (a5 != NULL) {
                                uVar3 = 0x8001c;
                                goto override_prt_8c21a0f6_7a4d7f16;
                            }
                            uVar3 = 0x8001e;
                            ta_fifo_237124(0x8001e, 0, 0, 0);
                        } else if (a5 == NULL) {
                            uVar3 = 0x8001a;
                            ta_fifo_237124(0x8001a, 0, a6, 0);
                        } else {
                            uVar3 = 0x80018;
                        override_prt_8c21a0f6_7a4d7f16:
                            ta_fifo_237124(uVar3, a5, a6, 0);
                            g_8c277acc = 1;
                        }
                        ar7_00 = (u8 *)ta_sq_write_header4();
                    } else {
                        if (a6 == NULL) {
                            if (a5 != NULL) {
                                uVar3 = 0x210001c;
                                goto override_prt_8c21a0c0_7a4d7f16;
                            }
                            uVar3 = 0x210001e;
                            ta_fifo_237124(0x210001e, 0, 0, ar7_00);
                        } else if (a5 == NULL) {
                            uVar3 = 0x210001a;
                            ta_fifo_237124(0x210001a, 0, a6, ar7_00);
                        } else {
                            uVar3 = 0x2100018;
                        override_prt_8c21a0c0_7a4d7f16:
                            ta_fifo_237124(uVar3, a5, a6, ar7_00);
                            g_8c277acc = 1;
                        }
                        ar7_00 = (u8 *)ta_sq_write_header5();
                    }
                    if ((g_8c4aa4f0 & 0x200) == 0) {
                        if ((uVar5 & 0x40) == 0) {
                            if (a1 == NULL) {
                                a5 = a2;
                                ain0 = gfxlib_fill_loop_223b34(puStack_58, a2, puVar6, ar7_00);
                                iVar2 = ain0;
                                a6 = puVar6;
                            } else {
                                a5 = a2;
                                ain0 = gfxlib_calls_fill_loop_223eb8(puStack_58, a2, puVar6, ar7_00);
                                iVar2 = ain0;
                                a6 = puVar6;
                            }
                        } else if (a1 == NULL) {
                            a5 = a2;
                            ain0 = gfxlib_fill_loop_224330(puStack_58, a2, puVar6, ar7_00);
                            iVar2 = ain0;
                            a6 = puVar6;
                        } else {
                            a5 = a2;
                            ain0 = vram64_2246a0(puStack_58, a2, puVar6, ar7_00);
                            iVar2 = ain0;
                            a6 = puVar6;
                        }
                    } else if ((uVar5 & 0x40) == 0) {
                        if (a1 == NULL) {
                            a5 = a2;
                            ain0 = gfxlib_fill_loop_2234a4(puStack_58, a2, puVar6, ar7_00);
                            iVar2 = ain0;
                            a6 = puVar6;
                        } else {
                            a5 = a2;
                            ain0 = gfxlib_calls_fill_loop_223708(puStack_58, a2, puVar6, ar7_00);
                            iVar2 = ain0;
                            a6 = puVar6;
                        }
                    } else if (a1 == NULL) {
                        a5 = a2;
                        ain0 = gfxlib_fill_loop_2255e8(puStack_58, a2, puVar6, ar7_00);
                        iVar2 = ain0;
                        a6 = puVar6;
                    } else {
                        a5 = a2;
                        ain0 = vram64_225b54(puStack_58, a2, puVar6, ar7_00);
                        iVar2 = ain0;
                        a6 = puVar6;
                    }
                }
                if (iVar2 != 0) {
                    ain0 = ta_set_list_addr(iVar2);
                }
            }
            iVar2 = uVar1 - 1;
        }
        puStack_58 = puStack_58 + iVar2;
    } while (true);
}

/*
 * gfxlib_calls_fill_loop_21a4f6  0x8c21a4f6
 * area name: in the gfxlib library code range; behaviour name: its callees mostly do: fill_loop
 * called by: gfxlib_uses_point_transform_or_copy_21a678
 */
u32 gfxlib_calls_fill_loop_21a4f6(short *a0, int a1) {
    u16 uVar1;
    short sVar2;
    int *piVar3;
    int *piVar4;
    int *piVar5;
    u32 *ar6_00;
    int iVar6;
    u32 uVar7;
    u32 uVar8;
    u32 uVar9;
    u32 *ar5_00;
    int iVar10;
    u32 uVar11;

    do {
        piVar4 = 0x8c4c0fa4;
        piVar3 = 0x8c4c0fa0;
        uVar11 = (u32)*a0;
        if (uVar11 == (int)0xff) {
            return 0;
        }
        uVar1 = a0[1];
        sVar2 = a0[2];
        iVar10 = (int)a0[3];
        if ((uVar11 & 0x8000) == 0) {
            g_8c4c0fa0 = 0;
            *piVar4 = 0;
        }
        uVar9 = 0xe0000000;
        uVar8 = 0x3ffffff;
        piVar5 = 0x8c4aa2f8;
        uVar11 = uVar11 & 0xffff7fff;
        g_8c4aa2f8 = iVar10;
        piVar5[1] = (int)(a0 + 4);
        ar6_00 = 0xff000038;
        uVar7 = sVar2 * 0x40 + a1;
        piVar5[2] = uVar7;
        piVar5[3] = uVar7 & uVar8 | uVar9;
        uVar8 = uVar7 >> 0x18 & 0x1c;
        ar5_00 = ar6_00 + 1;
        *ar5_00 = uVar8;
        *ar6_00 = uVar8;
        g_8c4aa518 = g_8c4aa518 + iVar10;
        uVar8 = uVar11 & 0xff;
        if (g_8c4aa554 == 0) {
            if (uVar8 == 0x29) {
                iVar6 = gfxlib_fill_loop_226980(0x8c4aa2f8, ar5_00, ar6_00, 0x1c);
            } else if (uVar8 == 0x2c) {
                iVar6 = gfxlib_fill_loop_226f70(0x8c4aa2f8, uVar11, ar6_00, 0x1c);
            } else {
                if (uVar8 != 0x2a) {
                    return 0xffffffff;
                }
                iVar6 = gfxlib_fill_loop_226ac0(0x8c4aa2f8, ar5_00, ar6_00, 0x1c);
            }
        } else if (uVar8 == 0x29) {
            iVar6 = gfxlib_fill_loop_226dfc(0x8c4aa2f8, ar5_00, ar6_00, 0x1c);
        } else if (uVar8 == 0x2c) {
            iVar6 = gfxlib_fill_loop_227144(0x8c4aa2f8, uVar11, ar6_00, 0x1c);
        } else {
            if (uVar8 != 0x2a) {
                return 0xffffffff;
            }
            iVar6 = gfxlib_fill_loop_226c44(0x8c4aa2f8, ar5_00, ar6_00, 0x1c);
        }
        uVar9 = (u32)0x200;
        uVar11 = uVar11 & 0xff00;
        *piVar3 = *piVar3 + iVar6;
        if ((uVar11 == uVar9) || (uVar8 != 0x2c)) {
            *piVar4 = *piVar4 + iVar10;
        }
        a0 = a0 + 4 + (u32)uVar1 * 2 + -2;
    } while (true);
}

/*
 * gfxlib_uses_point_transform_or_copy_21a678  0x8c21a678
 * area name: in the gfxlib library code range; behaviour name: its main named callee is point_transform_or_copy
 * called by: alt_entry_21a718, gfxlib_draw_21a7ce, gfxlib_uses_matrix_push_regs_21a702
 */
u32 gfxlib_uses_point_transform_or_copy_21a678(int *a0, u32 a1) {
    u32 r7;
    u32 ar6_00;
    int iVar1;
    u8 *puVar2;
    double dVar3;
    u32 in_PR;
    char cVar4;
    char cVar5;
    u32 in_stack_ffffffe8;
    u32 uStack_10;

    cVar5 = '\0';
    cVar4 = '\0';
    puVar2 = &stack0xffffffe8;
    if ((((g_8c4aa4f0 & 0x100) == 0) || ((float)a0[5] <= 0.0)) || (iVar1 = gfxlib_test_217e18(a0), iVar1 == 0)) {
        g_8c4aa554 = 0;
        if ((g_8c4aa4f0 & 0x40) != 0) {
            point_transform_or_copy(0, a0 + 2, &stack0xffffffe8, r7, in_stack_ffffffe8);
            if (cVar5 == '\0') {
                dVar3 = (double)CONCAT44(uStack_10, a0[5]);
            } else {
                dVar3 = (double)CONCAT44(in_PR, uStack_10);
            }
            if (cVar4 == '\0') {
                dVar3 = (double)CONCAT44((float)((u64)dVar3 >> 0x20) + SUB84(dVar3, 0), SUB84(dVar3, 0));
            } else {
                dVar3 = dVar3 + dVar3;
            }
            if (cVar5 == '\0') {
                dVar3 = (double)CONCAT44((int)((u64)dVar3 >> 0x20), g_8c4aa544);
            }
            if (cVar4 == '\0' && SUB84(dVar3, 0) < (float)((u64)dVar3 >> 0x20)) {
                g_8c4aa554 = 1;
            }
        }
        ar6_00 = g_8c4aa510;
        if ((*a0 == 0) || (iVar1 = gfxlib_calls_fill_loop_21a4f6(*a0, g_8c4aa510), iVar1 != -1)) {
            if (a0[1] != 0) {
                gfxlib_draw_219ad0(a0[1], g_8c4c0fa0, ar6_00, r7, in_stack_ffffffe8);
            }
            return 0;
        }
    }
    return 0xffffffff;
}

/*
 * gfxlib_uses_matrix_push_regs_21a702  0x8c21a702
 * area name: in the gfxlib library code range; behaviour name: its main named callee is matrix_push_regs
 * called by: alt_entry_21a718, gfxlib_draw_21a80e, gfxlib_uses_matrix_push_regs_21a702
 */
u32 gfxlib_uses_matrix_push_regs_21a702(u32 *a0, u32 a1) {
    u32 r6;
    u32 r7;
    u32 uVar1;
    u32 *puVar2;
    u32 unaff_r13;
    u32 uVar3;

    puVar2 = a0;
    do {
        uVar3 = *puVar2;
        if ((uVar3 & 7) == 7) {
            uVar1 = 7;
            if ((uVar3 & 8) == 0) {
                a0 = (u32 *)puVar2[1];
                uVar1 = gfxlib_uses_point_transform_or_copy_21a678(a0, a1);
            }
            if ((uVar3 & 0x10) == 0) {
                a0 = (u32 *)puVar2[0xb];
                uVar1 = gfxlib_uses_matrix_push_regs_21a702(a0, a1);
            }
        } else {
            uVar1 = matrix_push_regs(a0, a1, r6, r7, uVar3 & 7);
            if ((uVar3 & 1) == 0) {
                a0 = puVar2 + 2;
                uVar1 = noop_25b638();
            }
            if ((uVar3 & 2) == 0) {
                unaff_r13 = uVar3 & 0x20;
                a0 = puVar2 + 5;
                a1 = unaff_r13;
                uVar1 = ninja_scan_loop_2569e0(a0, unaff_r13, r6, r7, uVar1);
            }
            if ((uVar3 & 4) == 0) {
                a0 = puVar2 + 8;
                noop_257098();
            }
            if ((uVar3 & 8) == 0) {
                a0 = (u32 *)puVar2[1];
                unaff_r13 = gfxlib_uses_point_transform_or_copy_21a678(a0, a1);
            }
            if (((uVar3 & 0x10) == 0) && (((uVar3 & 0x100) == 0 || (unaff_r13 == 0)))) {
                a0 = (u32 *)puVar2[0xb];
                gfxlib_uses_matrix_push_regs_21a702(a0, a1);
            }
            uVar1 = matrix_pop1();
        }
        puVar2 = (u32 *)puVar2[0xc];
    } while (puVar2 != NULL);
    return uVar1;
}

/*
 * alt_entry_21a718  0x8c21a718
 * probably an entry 22 bytes into 8c21a702: it reads registers that code sets before it
 */
u32 alt_entry_21a718(u32 *a0, u32 a1) {
    u32 r6;
    u32 r7;
    u32 uVar1;
    u32 unaff_r8;
    u32 unaff_r10;
    u32 unaff_r11;
    u32 *unaff_r12;
    u32 unaff_r13;
    u32 uVar2;
    u32 in_PR;

    do {
        uVar2 = *unaff_r12;
        if ((uVar2 & 7) == 7) {
            uVar1 = 7;
            if ((uVar2 & unaff_r11) == 0) {
                a0 = (u32 *)unaff_r12[1];
                uVar1 = gfxlib_uses_point_transform_or_copy_21a678(a0, a1);
            }
            if ((uVar2 & unaff_r10) == 0) {
                a0 = (u32 *)unaff_r12[0xb];
                uVar1 = gfxlib_uses_matrix_push_regs_21a702(a0, a1);
            }
        } else {
            matrix_push_regs(a0, a1, r6, r7, in_PR);
            if ((uVar2 & 1) == 0) {
                a0 = unaff_r12 + 2;
                noop_25b638();
            }
            if ((uVar2 & 2) == 0) {
                unaff_r13 = uVar2 & 0x20;
                a0 = unaff_r12 + 5;
                a1 = unaff_r13;
                ninja_scan_loop_2569e0(a0, unaff_r13, r6, r7, in_PR);
            }
            if ((uVar2 & unaff_r8) == 0) {
                a0 = unaff_r12 + 8;
                noop_257098();
            }
            if ((uVar2 & unaff_r11) == 0) {
                a0 = (u32 *)unaff_r12[1];
                unaff_r13 = gfxlib_uses_point_transform_or_copy_21a678(a0, a1);
            }
            if (((uVar2 & unaff_r10) == 0) && (((uVar2 & 0x100) == 0 || (unaff_r13 == 0)))) {
                a0 = (u32 *)unaff_r12[0xb];
                gfxlib_uses_matrix_push_regs_21a702(a0, a1);
            }
            uVar1 = matrix_pop1();
        }
        unaff_r12 = (u32 *)unaff_r12[0xc];
    } while (unaff_r12 != NULL);
    return uVar1;
}

/*
 * gfxlib_draw_21a7ce  0x8c21a7ce
 * area name: in the gfxlib library code range; behaviour name: mostly calls draw functions
 */
u32 gfxlib_draw_21a7ce(u32 a0, u32 a1, u32 a2, u32 a3) {
    u32 uVar1;
    u8 *ar5_00;
    double dVar2;
    char cVar3;
    char cVar4;

    cVar4 = '\0';
    cVar3 = '\0';
    draw_state_save(a0, a1, a2, a3);
    if (cVar4 == '\0') {
        dVar2 = (double)CONCAT44(g_8c4aa4a8, g_8c4aa4dc);
    } else {
        dVar2 = (double)CONCAT44(g_8c4aa4ac, g_8c4aa4a8);
    }
    ar5_00 = &g_8c4aa2f8;
    if (cVar3 == '\0') {
        dVar2 = (double)CONCAT44((float)((u64)dVar2 >> 0x20) * SUB84(dVar2, 0), SUB84(dVar2, 0));
    } else {
        dVar2 = dVar2 * dVar2;
    }
    if (cVar4 == '\0') {
        g_8c4aa308 = (u32)((u64)dVar2 >> 0x20);
        dVar2 = (double)CONCAT44(g_8c4aa4a8, g_8c4aa4e0);
    } else {
        g_8c4aa308 = SUB84(dVar2, 0);
        dVar2 = (double)CONCAT44(g_8c4aa4ac, g_8c4aa4a8);
    }
    if (cVar3 == '\0') {
        dVar2 = (double)CONCAT44((float)((u64)dVar2 >> 0x20) * SUB84(dVar2, 0), SUB84(dVar2, 0));
    } else {
        dVar2 = dVar2 * dVar2;
    }
    if (cVar4 == '\0') {
        g_8c4aa30c = (u32)((u64)dVar2 >> 0x20);
    } else {
        g_8c4aa30c = SUB84(dVar2, 0);
        g_8c4aa318 = g_8c4aa4bc;
    }
    g_8c4aa314 = g_8c4aa4b8;
    g_8c4aa310 = g_8c4aa4b4;
    gfxlib_uses_point_transform_or_copy_21a678(a0, &g_8c4aa2f8);
    uVar1 = draw_state_restore(a0);
    return uVar1;
}

/*
 * gfxlib_draw_21a80e  0x8c21a80e
 * area name: in the gfxlib library code range; behaviour name: mostly calls draw functions
 * called by: CSquidLine_uses_matrix_push_0ad354, game_draw_015b14, game_draw_09c930
 */
u32 gfxlib_draw_21a80e(u32 a0, u32 a1, u32 a2, u32 a3) {
    u32 uVar1;
    u8 *ar5_00;
    double dVar2;
    char cVar3;
    char cVar4;

    cVar4 = '\0';
    cVar3 = '\0';
    draw_state_save(a0, a1, a2, a3);
    if (cVar4 == '\0') {
        dVar2 = (double)CONCAT44(g_8c4aa4a8, g_8c4aa4dc);
    } else {
        dVar2 = (double)CONCAT44(g_8c4aa4ac, g_8c4aa4a8);
    }
    ar5_00 = &g_8c4aa2f8;
    if (cVar3 == '\0') {
        dVar2 = (double)CONCAT44((float)((u64)dVar2 >> 0x20) * SUB84(dVar2, 0), SUB84(dVar2, 0));
    } else {
        dVar2 = dVar2 * dVar2;
    }
    if (cVar4 == '\0') {
        g_8c4aa308 = (u32)((u64)dVar2 >> 0x20);
        dVar2 = (double)CONCAT44(g_8c4aa4a8, g_8c4aa4e0);
    } else {
        g_8c4aa308 = SUB84(dVar2, 0);
        dVar2 = (double)CONCAT44(g_8c4aa4ac, g_8c4aa4a8);
    }
    if (cVar3 == '\0') {
        dVar2 = (double)CONCAT44((float)((u64)dVar2 >> 0x20) * SUB84(dVar2, 0), SUB84(dVar2, 0));
    } else {
        dVar2 = dVar2 * dVar2;
    }
    if (cVar4 == '\0') {
        g_8c4aa30c = (u32)((u64)dVar2 >> 0x20);
    } else {
        g_8c4aa30c = SUB84(dVar2, 0);
        g_8c4aa318 = g_8c4aa4bc;
    }
    g_8c4aa314 = g_8c4aa4b8;
    g_8c4aa310 = g_8c4aa4b4;
    gfxlib_uses_matrix_push_regs_21a702(a0, &g_8c4aa2f8);
    uVar1 = draw_state_restore(a0);
    return uVar1;
}

/*
 * gfxlib_update_fields_21a854  0x8c21a854
 * area name: in the gfxlib library code range; behaviour name: conditionally writes members
 */
u32 gfxlib_update_fields_21a854(void) {
    int iVar1;
    double *pdVar2;
    double *pdVar3;
    u32 uVar4;
    double dVar5;

    pdVar3 = 0x8c4aa4e0;
    pdVar2 = 0x8c4aa4a8;
    iVar1 = 0x8c4aa2f8;

    dVar5 = (double)CONCAT44(*(u32 *)0x8c4aa4a8, *(u32 *)0x8c4aa4dc);

    dVar5 = (double)CONCAT44((float)((u64)dVar5 >> 0x20) * SUB84(dVar5, 0), SUB84(dVar5, 0));

    *(int *)(0x8c4aa2f8 + 0x10) = (int)((u64)dVar5 >> 0x20);
    dVar5 = (double)CONCAT44(*(u32 *)pdVar2, *(u32 *)pdVar3);

    dVar5 = (double)CONCAT44((float)((u64)dVar5 >> 0x20) * SUB84(dVar5, 0), SUB84(dVar5, 0));

    *(int *)(iVar1 + 0x14) = (int)((u64)dVar5 >> 0x20);
    *(u32 *)(iVar1 + 0x18) = *(u32 *)((int)pdVar2 + 0xc);
    uVar4 = *(u32 *)(pdVar2 + 2);

    *(u32 *)(iVar1 + 0x1c) = uVar4;

    return 0x1c;
}

/*
 * gfxlib_draw_21a8b0  0x8c21a8b0
 * area name: in the gfxlib library code range; behaviour name: mostly calls draw functions
 * called by: alt_entry_21a8be, gfxlib_draw_21a8b0, gfxlib_draw_21aa1e, gfxlib_draw_21adb4, gfxlib_draw_21b170,
 * gfxlib_draw_21b52c
 */
u32 gfxlib_draw_21a8b0(u32 *a0) {
    u32 r5;
    u8 *puVar1;
    u8 *puVar2;
    u8 *puVar3;
    u32 uVar4;
    u32 uVar5;

    puVar3 = (&matrix_push_regs);
    puVar2 = (&ninja_scan_loop_2569e0);
    puVar1 = (&noop_257098);
    uVar5 = 0x20;
    do {
        (*(code *)puVar3)(uVar5);
        if ((*a0 & 0x40) == 0) {
            (*(code *)*0x8c4aa340)(a0);
        } else {
            noop_25b638(a0 + 2);
            r5 = *a0 & 0x20;
            (*(code *)puVar2)(a0 + 5);
            (*(code *)puVar1)(a0 + 8);
        }
        if ((code *)*0x8c4aa358 != NULL) {
            (*(code *)*0x8c4aa358)(a0);
        }
        if ((a0[1] != 0) && ((*a0 & 8) == 0)) {
            (*(code *)*0x8c4aa368)(a0[1]);
        }
        if (a0[0xb] != 0) {
            gfxlib_draw_21a8b0((u32 *)a0[0xb]);
        }
        uVar4 = matrix_pop1();
        a0 = (u32 *)a0[0xc];
    } while (a0 != NULL);
    return uVar4;
}

/*
 * alt_entry_21a8be  0x8c21a8be
 * probably an entry 14 bytes into 8c21a8b0: it reads registers that code sets before it
 */
u32 alt_entry_21a8be(u32 *a0, u32 a1, u32 a2, u32 a3) {
    u32 uVar1;
    u32 unaff_r11;
    u32 unaff_r12;
    u32 *unaff_r14;
    u32 in_PR;

    do {
        matrix_push_regs(a0, a1, a2, a3, in_PR);
        if ((*unaff_r14 & unaff_r11) == 0) {
            a0 = unaff_r14;
            (*g_8c4aa340)(unaff_r14, a1, a2, a3);
        } else {
            noop_25b638(unaff_r14 + 2, a1, a2, a3, in_PR);
            a1 = *unaff_r14 & unaff_r12;
            ninja_scan_loop_2569e0(unaff_r14 + 5, a1, a2, a3);
            a0 = unaff_r14 + 8;
            noop_257098();
        }
        if (g_8c4aa358 != NULL) {
            a0 = unaff_r14;
            (*g_8c4aa358)(unaff_r14, a1, a2, a3);
        }
        if ((unaff_r14[1] != 0) && ((*unaff_r14 & 8) == 0)) {
            a0 = (u32 *)unaff_r14[1];
            (*g_8c4aa368)(a0, a1, a2, a3);
        }
        if (unaff_r14[0xb] != 0) {
            a0 = (u32 *)unaff_r14[0xb];
            gfxlib_draw_21a8b0(a0);
        }
        uVar1 = matrix_pop1();
        unaff_r14 = (u32 *)unaff_r14[0xc];
    } while (unaff_r14 != NULL);
    return uVar1;
}

/*
 * gfxlib_uses_noop_21a942  0x8c21a942
 * area name: in the gfxlib library code range; behaviour name: its main named callee is noop_25b638
 * called by: alt_entry_21a952, alt_entry_21af36, gfxlib_draw_21ab7a, gfxlib_draw_21af26, gfxlib_draw_21b2f2,
 * gfxlib_draw_21b6ae, gfxlib_uses_noop_21a942
 */
u32 gfxlib_uses_noop_21a942(u32 *a0) {
    u32 r5;
    u8 *puVar1;
    u8 *puVar2;
    u32 uVar3;
    u32 uVar4;
    u8 *puVar5;

    puVar2 = (&matrix_push_regs);
    puVar1 = (&ninja_scan_loop_2569e0);
    puVar5 = &g_8c4aad80;
    uVar4 = (u32)0x80;
    do {
        (*(code *)puVar2)(puVar5);
        if ((*a0 & 0x40) == 0) {
            (*(code *)*0x8c4aa340)(a0);
        } else {
            noop_25b638(a0 + 2);
            r5 = *a0 & 0x20;
            (*(code *)puVar1)(a0 + 5);
            noop_257098(a0 + 8);
        }
        if ((code *)*0x8c4aa358 != NULL) {
            (*(code *)*0x8c4aa358)(a0);
        }
        if ((*a0 & uVar4) == 0) {
            (*(code *)*0x8c4aa36c)(a0);
        } else if ((a0[1] != 0) && ((*a0 & 8) == 0)) {
            (*(code *)*0x8c4aa368)(a0[1]);
        }
        if (a0[0xb] != 0) {
            gfxlib_uses_noop_21a942((u32 *)a0[0xb]);
        }
        uVar3 = matrix_pop1();
        a0 = (u32 *)a0[0xc];
    } while (a0 != NULL);
    return uVar3;
}

/*
 * alt_entry_21a952  0x8c21a952
 * probably an entry 16 bytes into 8c21a942: it reads registers that code sets before it
 */
u32 alt_entry_21a952(u32 *a0, u32 a1, u32 a2, u32 a3) {
    u32 uVar1;
    u32 unaff_r10;
    u32 unaff_r11;
    u32 *unaff_r14;
    u32 in_PR;

    do {
        matrix_push_regs(a0, a1, a2, a3, in_PR);
        if ((*unaff_r14 & unaff_r10) == 0) {
            a0 = unaff_r14;
            (*g_8c4aa340)(unaff_r14, a1, a2, a3);
        } else {
            noop_25b638(unaff_r14 + 2, a1, a2, a3, in_PR);
            a1 = *unaff_r14 & unaff_r11;
            ninja_scan_loop_2569e0(unaff_r14 + 5, a1, a2, a3);
            a0 = unaff_r14 + 8;
            noop_257098();
        }
        if (g_8c4aa358 != NULL) {
            a0 = unaff_r14;
            (*g_8c4aa358)(unaff_r14, a1, a2, a3);
        }
        if ((*unaff_r14 & 0x80) == 0) {
            a0 = unaff_r14;
            (*g_8c4aa36c)(unaff_r14, a1, a2, a3);
        } else if ((unaff_r14[1] != 0) && ((*unaff_r14 & 8) == 0)) {
            a0 = (u32 *)unaff_r14[1];
            (*g_8c4aa368)(a0, a1, a2, a3);
        }
        if (unaff_r14[0xb] != 0) {
            a0 = (u32 *)unaff_r14[0xb];
            gfxlib_uses_noop_21a942(a0);
        }
        uVar1 = matrix_pop1();
        unaff_r14 = (u32 *)unaff_r14[0xc];
    } while (unaff_r14 != NULL);
    return uVar1;
}

/*
 * gfxlib_draw_21aa1e  0x8c21aa1e
 * area name: in the gfxlib library code range; behaviour name: mostly calls draw functions
 */
u32 *gfxlib_draw_21aa1e(u32 unused_a0, u32 *a1, u32 unused_a2, u32 unused_a3, u32 *ain0, u32 ain1) {
    u32 *in_r2;
    u8 *a4;
    u8 *a5;
    u32 ar6_00;
    u32 uVar1;
    u32 *unaff_r13;
    float fVar2;
    float in_fr4;
    char in_T;

    a4 = &g_8c4aad82;
    *in_r2 = gfxlib_calc_218fdc;
    *ain0 = ain1;
    if (in_T == '\x01') {
        g_8c4aad80 = 0;
        g_8c4ab0c0 = 0;
        g_8c4aad82 = 0;
    } else {
        fVar2 = (float)(int)a1[1];
        if ((int)a1[1] < 0) {
            fVar2 = fVar2 + 4.2949673e+09;
        }
        if (fVar2 <= in_fr4) {
            return ain0;
        }
        g_8c4aad80 = *(u16 *)((int)a1 + 10) & 0xff3f;
        g_8c4ab0c0 = (u16)((*(u16 *)((int)a1 + 10) & 0xc0) != 0);
        g_8c4aad82 = *(u16 *)(a1 + 2);
        g_8c4aad48 = *a1;
        g_8c4aad58 = a1[1];
    }
    g_8c4aad5c = 0;
    g_8c4aad60 = 0;
    g_8c4aa340 = (&PTR_LAB_8c2759a0)[g_8c4aad80];
    uVar1 = 0x20;
    if ((g_8c4aad82 & 1) == 0) {
        g_8c4aa344 = noop_21d108;
    } else {
        g_8c4aa344 = gfxlib_uses_noop_21ce02;
    }
    ar6_00 = (u32)g_8c4aad82;
    if ((g_8c4aad82 & 2) == 0) {
        if ((g_8c4aad82 & 0x2000) == 0) {
            if ((*unaff_r13 & 0x20) == 0) {
                g_8c4aa348 = gfxlib_calls_scan_loop_21d112;
            } else {
                g_8c4aa348 = gfxlib_calls_scan_loop_21d11e;
            }
        } else {
            g_8c4aa348 = gfxlib_uses_switch_jump_21d06c;
        }
    } else if ((*unaff_r13 & 0x20) == 0) {
        g_8c4aa348 = gfxlib_calls_scan_loop_21cf22;
    } else {
        g_8c4aa348 = gfxlib_calls_scan_loop_21cfd8;
    }
    a5 = &g_8c4aa350;
    if ((g_8c4aad82 & 4) == 0) {
        g_8c4aa350 = noop_21d13c;
    } else {
        g_8c4aa350 = gfxlib_uses_noop_21ce92;
    }
    g_8c4ab0b4 = gfxlib_uses_switch_jump_21c2ea;
    g_8c4ab0b8 = gfxlib_uses_switch_jump_21c398;
    g_8c4aad54 = in_fr4;
    draw_state_save(&g_8c4aad82, &g_8c4aa350, ar6_00, 0x20);
    (*g_8c4aa338)(a4, a5, ar6_00, uVar1);
    gfxlib_draw_21a8b0(unaff_r13);
    uVar1 = draw_state_restore(unaff_r13);
    return (u32 *)uVar1;
}

/*
 * gfxlib_draw_21ab7a  0x8c21ab7a
 * area name: in the gfxlib library code range; behaviour name: mostly calls draw functions
 */
u32 gfxlib_draw_21ab7a(u32 unused_a0, u32 *a1, u32 *a2, u32 unused_a3, u32 *ain0, u32 ain1) {
    u32 *in_r2;
    u8 *a4;
    u32 ar5_00;
    u32 uVar1;
    u8 *a7;
    u32 *unaff_r13;
    float fVar2;
    float in_fr4;
    char in_T;

    a7 = &g_8c4aad82;
    *in_r2 = gfxlib_calc_218fdc;
    *ain0 = ain1;
    if (in_T == '\x01') {
        g_8c4aad80 = 0;
        g_8c4ab0c0 = 0;
        g_8c4aad82 = 0;
    } else {
        fVar2 = (float)(int)a1[1];
        if ((int)a1[1] < 0) {
            fVar2 = fVar2 + 4.2949673e+09;
        }
        if (fVar2 <= in_fr4) {
            return ain0;
        }
        g_8c4aad80 = *(u16 *)((int)a1 + 10) & 0xff3f;
        g_8c4ab0c0 = (u16)((*(u16 *)((int)a1 + 10) & 0xc0) != 0);
        g_8c4aad82 = *(u16 *)(a1 + 2);
        g_8c4aad48 = *a1;
        g_8c4aad58 = a1[1];
    }
    g_8c4aad5c = 0;
    g_8c4aad60 = 0;
    if (a2 == NULL) {
        g_8c4aad86 = 0;
        g_8c4ab0c2 = 0;
        g_8c4aad84 = 0;
    } else {
        fVar2 = (float)(int)a2[1];
        if ((int)a2[1] < 0) {
            fVar2 = fVar2 + 4.2949673e+09;
        }
        if (fVar2 <= in_fr4) {
            g_8c4aad60 = 0;
            g_8c4aad5c = 0;
            g_8c4aad54 = in_fr4;
            return 0xc;
        }
        g_8c4aad86 = *(u16 *)(a2 + 2);
        g_8c4aad84 = *(u16 *)((int)a2 + 10) & 0xff3f;
        g_8c4ab0c2 = (u16)((*(u16 *)((int)a2 + 10) & 0xc0) != 0);
        g_8c4aad64 = *a2;
        g_8c4aad74 = a2[1];
        g_8c2759d8 = 0;
    }
    g_8c4aad78 = 0;
    g_8c4aad7c = 0;
    g_8c4aa36c = (&PTR_LAB_8c2759dc)[g_8c4aad84];
    g_8c4aa370 = gfxlib_vec_21ee94;
    g_8c4aa340 = (&PTR_LAB_8c2759a0)[g_8c4aad80];
    uVar1 = 0x20;
    if ((g_8c4aad82 & 1) == 0) {
        g_8c4aa344 = noop_21d108;
    } else {
        g_8c4aa344 = gfxlib_uses_noop_21ce02;
    }
    ar5_00 = (u32)g_8c4aad82;
    if ((g_8c4aad82 & 2) == 0) {
        if ((g_8c4aad82 & 0x2000) == 0) {
            if ((*unaff_r13 & 0x20) == 0) {
                g_8c4aa348 = gfxlib_calls_scan_loop_21d112;
            } else {
                g_8c4aa348 = gfxlib_calls_scan_loop_21d11e;
            }
        } else {
            g_8c4aa348 = gfxlib_uses_switch_jump_21d06c;
        }
    } else if ((*unaff_r13 & 0x20) == 0) {
        g_8c4aa348 = gfxlib_calls_scan_loop_21cf22;
    } else {
        g_8c4aa348 = gfxlib_calls_scan_loop_21cfd8;
    }
    a4 = &g_8c4aa350;
    if ((g_8c4aad82 & 4) == 0) {
        g_8c4aa350 = noop_21d13c;
    } else {
        g_8c4aa350 = gfxlib_uses_noop_21ce92;
    }
    g_8c4ab0b4 = gfxlib_uses_switch_jump_21c2ea;
    g_8c4ab0b8 = gfxlib_uses_switch_jump_21c398;
    g_8c4aad54 = in_fr4;
    g_8c4aad70 = in_fr4;
    draw_state_save(&g_8c4aa350, ar5_00, 0x20, &g_8c4aad82);
    (*g_8c4aa338)(a4, ar5_00, uVar1, a7);
    gfxlib_uses_noop_21a942(unaff_r13);
    uVar1 = draw_state_restore(unaff_r13);
    return uVar1;
}

/*
 * gfxlib_draw_21adb4  0x8c21adb4
 * area name: in the gfxlib library code range; behaviour name: mostly calls draw functions
 */
u32 *gfxlib_draw_21adb4(u32 unused_a0, u32 *a1, u32 unused_a2, u32 unused_a3, u32 *ain0, u32 ain1) {
    u32 *in_r2;
    u8 *a4;
    u8 *a5;
    u32 ar6_00;
    u32 uVar1;
    u32 *unaff_r13;
    float fVar2;
    float in_fr4;
    char in_T;

    a4 = &g_8c4aad82;
    *in_r2 = gfxlib_update_fields_21a854;
    *ain0 = ain1;
    if (in_T == '\x01') {
        g_8c4aad80 = 0;
        g_8c4ab0c0 = 0;
        g_8c4aad82 = 0;
    } else {
        fVar2 = (float)(int)a1[1];
        if ((int)a1[1] < 0) {
            fVar2 = fVar2 + 4.2949673e+09;
        }
        if (fVar2 <= in_fr4) {
            return ain0;
        }
        g_8c4aad80 = *(u16 *)((int)a1 + 10) & 0xff3f;
        g_8c4ab0c0 = (u16)((*(u16 *)((int)a1 + 10) & 0xc0) != 0);
        g_8c4aad82 = *(u16 *)(a1 + 2);
        g_8c4aad48 = *a1;
        g_8c4aad58 = a1[1];
    }
    g_8c4aad5c = 0;
    g_8c4aad60 = 0;
    g_8c4aa340 = (&PTR_LAB_8c2759a0)[g_8c4aad80];
    uVar1 = 0x20;
    if ((g_8c4aad82 & 1) == 0) {
        g_8c4aa344 = noop_21d108;
    } else {
        g_8c4aa344 = gfxlib_uses_noop_21ce02;
    }
    ar6_00 = (u32)g_8c4aad82;
    if ((g_8c4aad82 & 2) == 0) {
        if ((g_8c4aad82 & 0x2000) == 0) {
            if ((*unaff_r13 & 0x20) == 0) {
                g_8c4aa348 = gfxlib_calls_scan_loop_21d112;
            } else {
                g_8c4aa348 = gfxlib_calls_scan_loop_21d11e;
            }
        } else {
            g_8c4aa348 = gfxlib_uses_switch_jump_21d06c;
        }
    } else if ((*unaff_r13 & 0x20) == 0) {
        g_8c4aa348 = gfxlib_calls_scan_loop_21cf22;
    } else {
        g_8c4aa348 = gfxlib_calls_scan_loop_21cfd8;
    }
    a5 = &g_8c4aa350;
    if ((g_8c4aad82 & 4) == 0) {
        g_8c4aa350 = noop_21d13c;
    } else {
        g_8c4aa350 = gfxlib_uses_noop_21ce92;
    }
    g_8c4ab0b4 = gfxlib_uses_switch_jump_21c2ea;
    g_8c4ab0b8 = gfxlib_uses_switch_jump_21c398;
    g_8c4aad54 = in_fr4;
    draw_state_save(&g_8c4aad82, &g_8c4aa350, ar6_00, 0x20);
    (*g_8c4aa338)(a4, a5, ar6_00, uVar1);
    gfxlib_draw_21a8b0(unaff_r13);
    uVar1 = draw_state_restore(unaff_r13);
    return (u32 *)uVar1;
}

/*
 * gfxlib_draw_21af26  0x8c21af26
 * area name: in the gfxlib library code range; behaviour name: mostly calls draw functions
 * called by: Class_12ab2c_uses_get_field_1c_on_field_b0_09dec8
 */
u32 gfxlib_draw_21af26(u32 *a0, u32 *a1, u32 *a2) {
    u32 ar5_00;
    u32 uVar1;
    u8 *ar7_00;
    float fVar2;
    float in_fr4;

    ar7_00 = &g_8c4aad82;
    g_8c4aa338 = gfxlib_update_fields_21a854;
    g_8c4aa368 = gfxlib_uses_point_transform_or_copy_21a678;
    if (a1 == NULL) {
        g_8c4aad80 = 0;
        g_8c4ab0c0 = 0;
        g_8c4aad82 = 0;
    } else {
        fVar2 = (float)(int)a1[1];
        if ((int)a1[1] < 0) {
            fVar2 = fVar2 + 4.2949673e+09;
        }
        if (fVar2 <= in_fr4) {
            return &g_8c4aa368;
        }
        g_8c4aad80 = *(u16 *)((int)a1 + 10) & 0xff3f;
        g_8c4ab0c0 = (u16)((*(u16 *)((int)a1 + 10) & 0xc0) != 0);
        g_8c4aad82 = *(u16 *)(a1 + 2);
        g_8c4aad48 = *a1;
        g_8c4aad58 = a1[1];
    }
    g_8c4aad5c = 0;
    g_8c4aad60 = 0;
    if (a2 == NULL) {
        g_8c4aad86 = 0;
        g_8c4ab0c2 = 0;
        g_8c4aad84 = 0;
    } else {
        fVar2 = (float)(int)a2[1];
        if ((int)a2[1] < 0) {
            fVar2 = fVar2 + 4.2949673e+09;
        }
        if (fVar2 <= in_fr4) {
            g_8c4aad60 = 0;
            g_8c4aad5c = 0;
            g_8c4aad54 = in_fr4;
            return 0xc;
        }
        g_8c4aad86 = *(u16 *)(a2 + 2);
        g_8c4aad84 = *(u16 *)((int)a2 + 10) & 0xff3f;
        g_8c4ab0c2 = (u16)((*(u16 *)((int)a2 + 10) & 0xc0) != 0);
        g_8c4aad64 = *a2;
        g_8c4aad74 = a2[1];
        g_8c2759d8 = 0;
    }
    g_8c4aad78 = 0;
    g_8c4aad7c = 0;
    g_8c4aa36c = (&PTR_LAB_8c2759dc)[g_8c4aad84];
    g_8c4aa370 = gfxlib_vec_21ee94;
    g_8c4aa340 = (&PTR_LAB_8c2759a0)[g_8c4aad80];
    uVar1 = 0x20;
    if ((g_8c4aad82 & 1) == 0) {
        g_8c4aa344 = noop_21d108;
    } else {
        g_8c4aa344 = gfxlib_uses_noop_21ce02;
    }
    ar5_00 = (u32)g_8c4aad82;
    if ((g_8c4aad82 & 2) == 0) {
        if ((g_8c4aad82 & 0x2000) == 0) {
            if ((*a0 & 0x20) == 0) {
                g_8c4aa348 = gfxlib_calls_scan_loop_21d112;
            } else {
                g_8c4aa348 = gfxlib_calls_scan_loop_21d11e;
            }
        } else {
            g_8c4aa348 = gfxlib_uses_switch_jump_21d06c;
        }
    } else if ((*a0 & 0x20) == 0) {
        g_8c4aa348 = gfxlib_calls_scan_loop_21cf22;
    } else {
        g_8c4aa348 = gfxlib_calls_scan_loop_21cfd8;
    }
    if ((g_8c4aad82 & 4) == 0) {
        g_8c4aa350 = noop_21d13c;
    } else {
        g_8c4aa350 = gfxlib_uses_noop_21ce92;
    }
    g_8c4ab0b4 = gfxlib_uses_switch_jump_21c2ea;
    g_8c4ab0b8 = gfxlib_uses_switch_jump_21c398;
    g_8c4aad54 = in_fr4;
    g_8c4aad70 = in_fr4;
    draw_state_save(&g_8c4aa350, ar5_00, 0x20, &g_8c4aad82);
    (*g_8c4aa338)();
    gfxlib_uses_noop_21a942(a0);
    uVar1 = draw_state_restore(a0);
    return uVar1;
}

/*
 * alt_entry_21af36  0x8c21af36
 * probably an entry 16 bytes into 8c21af26: it reads registers that code sets before it
 */
u32 alt_entry_21af36(u32 unused_a0, u32 *a1, u32 *a2, u32 unused_a3, u32 *ain0, u32 ain1) {
    u32 *in_r2;
    u8 *a4;
    u32 ar5_00;
    u32 uVar1;
    u8 *a7;
    u32 *unaff_r13;
    float fVar2;
    double in_dr2;
    double dVar3;
    float in_fr4;
    char in_T;
    bool bVar4;

    a7 = &g_8c4aad82;
    *in_r2 = gfxlib_update_fields_21a854;
    *ain0 = ain1;
    if (in_T == '\x01') {
        g_8c4aad80 = 0;
        g_8c4ab0c0 = 0;
        g_8c4aad82 = 0;
    } else {
        fVar2 = (float)(int)a1[1];
        in_dr2 = (double)CONCAT44((int)((u64)in_dr2 >> 0x20), fVar2);
        if ((int)a1[1] < 0) {

            in_dr2 = (double)CONCAT44(0x4f800000, fVar2 + 4.2949673e+09);
        }

        bVar4 = in_fr4 < SUB84(in_dr2, 0);

        if (!bVar4) {
            return ain0;
        }
        g_8c4aad80 = *(u16 *)((int)a1 + 10) & 0xff3f;
        g_8c4ab0c0 = (u16)((*(u16 *)((int)a1 + 10) & 0xc0) != 0);
        g_8c4aad82 = *(u16 *)(a1 + 2);
        g_8c4aad48 = *a1;
        g_8c4aad54 = (u64)(u32)a1[1] << 0x20;
    }

    g_8c4aad54 = CONCAT44(g_8c4aad58, in_fr4);

    g_8c4aad5c = 0;
    g_8c4aad60 = 0;
    if (a2 == NULL) {
        g_8c4aad86 = 0;
        g_8c4ab0c2 = 0;
        g_8c4aad84 = 0;
    } else {
        fVar2 = (float)(int)a2[1];
        dVar3 = (double)CONCAT44((int)((u64)in_dr2 >> 0x20), fVar2);
        if ((int)a2[1] < 0) {

            dVar3 = (double)CONCAT44(0x4f800000, fVar2 + 4.2949673e+09);
        }

        bVar4 = in_fr4 < SUB84(dVar3, 0);

        if (!bVar4) {
            g_8c4aad60 = 0;
            g_8c4aad5c = 0;
            return 0xc;
        }
        g_8c4aad86 = *(u16 *)(a2 + 2);
        g_8c4aad84 = *(u16 *)((int)a2 + 10) & 0xff3f;
        g_8c4ab0c2 = (u16)((*(u16 *)((int)a2 + 10) & 0xc0) != 0);
        g_8c4aad64 = *a2;
        g_8c4aad70 = (u64)(u32)a2[1] << 0x20;
        g_8c2759d8 = 0;
    }

    g_8c4aad70 = CONCAT44(g_8c4aad74, in_fr4);

    g_8c4aad78 = 0;
    g_8c4aad7c = 0;
    g_8c4aa36c = (&PTR_LAB_8c2759dc)[g_8c4aad84];
    g_8c4aa370 = gfxlib_vec_21ee94;
    g_8c4aa340 = (&PTR_LAB_8c2759a0)[g_8c4aad80];
    uVar1 = 0x20;
    if ((g_8c4aad82 & 1) == 0) {
        g_8c4aa344 = (code *)&LAB_8c21d108;
    } else {
        g_8c4aa344 = gfxlib_uses_noop_21ce02;
    }
    ar5_00 = (u32)g_8c4aad82;
    if ((g_8c4aad82 & 2) == 0) {
        if ((g_8c4aad82 & 0x2000) == 0) {
            if ((*unaff_r13 & 0x20) == 0) {
                g_8c4aa348 = (code *)&LAB_8c21d112;
            } else {
                g_8c4aa348 = (code *)&LAB_8c21d11e;
            }
        } else {
            g_8c4aa348 = gfxlib_uses_switch_jump_21d06c;
        }
    } else if ((*unaff_r13 & 0x20) == 0) {
        g_8c4aa348 = gfxlib_calls_scan_loop_21cf22;
    } else {
        g_8c4aa348 = gfxlib_calls_scan_loop_21cfd8;
    }
    a4 = &g_8c4aa350;
    if ((g_8c4aad82 & 4) == 0) {
        g_8c4aa350 = (code *)&LAB_8c21d13c;
    } else {
        g_8c4aa350 = gfxlib_uses_noop_21ce92;
    }
    g_8c4ab0b4 = gfxlib_uses_switch_jump_21c2ea;
    g_8c4ab0b8 = gfxlib_uses_switch_jump_21c398;
    draw_state_save(&g_8c4aa350, ar5_00, 0x20, &g_8c4aad82);
    (*g_8c4aa338)(a4, ar5_00, uVar1, a7);
    gfxlib_uses_noop_21a942(unaff_r13);
    uVar1 = draw_state_restore(unaff_r13);
    return uVar1;
}

/*
 * gfxlib_draw_21b170  0x8c21b170
 * area name: in the gfxlib library code range; behaviour name: mostly calls draw functions
 */
u32 *gfxlib_draw_21b170(u32 unused_a0, u32 *a1, u32 unused_a2, u32 unused_a3, u32 *ain0, u32 ain1) {
    u32 *in_r2;
    u8 *a4;
    u8 *a5;
    u32 ar6_00;
    u32 uVar1;
    u32 *unaff_r13;
    float fVar2;
    float in_fr4;
    char in_T;

    a4 = &g_8c4aad82;
    *in_r2 = gfxlib_calc_218fdc;
    *ain0 = ain1;
    if (in_T == '\x01') {
        g_8c4aad80 = 0;
        g_8c4ab0c0 = 0;
        g_8c4aad82 = 0;
    } else {
        fVar2 = (float)(int)a1[1];
        if ((int)a1[1] < 0) {
            fVar2 = fVar2 + 4.2949673e+09;
        }
        if (fVar2 <= in_fr4) {
            return ain0;
        }
        g_8c4aad80 = *(u16 *)((int)a1 + 10) & 0xff3f;
        g_8c4ab0c0 = (u16)((*(u16 *)((int)a1 + 10) & 0xc0) != 0);
        g_8c4aad82 = *(u16 *)(a1 + 2);
        g_8c4aad48 = *a1;
        g_8c4aad58 = a1[1];
    }
    g_8c4aad5c = 0;
    g_8c4aad60 = 0;
    g_8c4aa340 = (&PTR_LAB_8c2759a0)[g_8c4aad80];
    uVar1 = 0x20;
    if ((g_8c4aad82 & 1) == 0) {
        g_8c4aa344 = noop_21d108;
    } else {
        g_8c4aa344 = gfxlib_uses_noop_21ce02;
    }
    ar6_00 = (u32)g_8c4aad82;
    if ((g_8c4aad82 & 2) == 0) {
        if ((g_8c4aad82 & 0x2000) == 0) {
            if ((*unaff_r13 & 0x20) == 0) {
                g_8c4aa348 = gfxlib_calls_scan_loop_21d112;
            } else {
                g_8c4aa348 = gfxlib_calls_scan_loop_21d11e;
            }
        } else {
            g_8c4aa348 = gfxlib_uses_switch_jump_21d06c;
        }
    } else if ((*unaff_r13 & 0x20) == 0) {
        g_8c4aa348 = gfxlib_calls_scan_loop_21cf22;
    } else {
        g_8c4aa348 = gfxlib_calls_scan_loop_21cfd8;
    }
    a5 = &g_8c4aa350;
    if ((g_8c4aad82 & 4) == 0) {
        g_8c4aa350 = noop_21d13c;
    } else {
        g_8c4aa350 = gfxlib_uses_noop_21ce92;
    }
    g_8c4ab0b4 = gfxlib_uses_switch_jump_21c2ea;
    g_8c4ab0b8 = gfxlib_uses_switch_jump_21d29c;
    g_8c4aad54 = in_fr4;
    draw_state_save(&g_8c4aad82, &g_8c4aa350, ar6_00, 0x20);
    (*g_8c4aa338)(a4, a5, ar6_00, uVar1);
    gfxlib_draw_21a8b0(unaff_r13);
    uVar1 = draw_state_restore(unaff_r13);
    return (u32 *)uVar1;
}

/*
 * gfxlib_draw_21b2f2  0x8c21b2f2
 * area name: in the gfxlib library code range; behaviour name: mostly calls draw functions
 */
u32 gfxlib_draw_21b2f2(u32 unused_a0, u32 *a1, u32 *a2, u32 unused_a3, u32 *ain0, u32 ain1) {
    u32 *in_r2;
    u8 *a4;
    u32 ar5_00;
    u32 uVar1;
    u8 *a7;
    u32 *unaff_r13;
    float fVar2;
    float in_fr4;
    char in_T;

    a7 = &g_8c4aad82;
    *in_r2 = gfxlib_calc_218fdc;
    *ain0 = ain1;
    if (in_T == '\x01') {
        g_8c4aad80 = 0;
        g_8c4ab0c0 = 0;
        g_8c4aad82 = 0;
    } else {
        fVar2 = (float)(int)a1[1];
        if ((int)a1[1] < 0) {
            fVar2 = fVar2 + 4.2949673e+09;
        }
        if (fVar2 <= in_fr4) {
            return ain0;
        }
        g_8c4aad80 = *(u16 *)((int)a1 + 10) & 0xff3f;
        g_8c4ab0c0 = (u16)((*(u16 *)((int)a1 + 10) & 0xc0) != 0);
        g_8c4aad82 = *(u16 *)(a1 + 2);
        g_8c4aad48 = *a1;
        g_8c4aad58 = a1[1];
    }
    g_8c4aad5c = 0;
    g_8c4aad60 = 0;
    if (a2 == NULL) {
        g_8c4aad86 = 0;
        g_8c4ab0c2 = 0;
        g_8c4aad84 = 0;
    } else {
        fVar2 = (float)(int)a2[1];
        if ((int)a2[1] < 0) {
            fVar2 = fVar2 + 4.2949673e+09;
        }
        if (fVar2 <= in_fr4) {
            g_8c4aad60 = 0;
            g_8c4aad5c = 0;
            g_8c4aad54 = in_fr4;
            return 0xc;
        }
        g_8c4aad86 = *(u16 *)(a2 + 2);
        g_8c4aad84 = *(u16 *)((int)a2 + 10) & 0xff3f;
        g_8c4ab0c2 = (u16)((*(u16 *)((int)a2 + 10) & 0xc0) != 0);
        g_8c4aad64 = *a2;
        g_8c4aad74 = a2[1];
        g_8c2759d8 = 0;
    }
    g_8c4aad78 = 0;
    g_8c4aad7c = 0;
    g_8c4aa36c = (&PTR_LAB_8c2759dc)[g_8c4aad84];
    g_8c4aa370 = gfxlib_vec_21ee94;
    g_8c4aa340 = (&PTR_LAB_8c2759a0)[g_8c4aad80];
    uVar1 = 0x20;
    if ((g_8c4aad82 & 1) == 0) {
        g_8c4aa344 = noop_21d108;
    } else {
        g_8c4aa344 = gfxlib_uses_noop_21ce02;
    }
    ar5_00 = (u32)g_8c4aad82;
    if ((g_8c4aad82 & 2) == 0) {
        if ((g_8c4aad82 & 0x2000) == 0) {
            if ((*unaff_r13 & 0x20) == 0) {
                g_8c4aa348 = gfxlib_calls_scan_loop_21d112;
            } else {
                g_8c4aa348 = gfxlib_calls_scan_loop_21d11e;
            }
        } else {
            g_8c4aa348 = gfxlib_uses_switch_jump_21d06c;
        }
    } else if ((*unaff_r13 & 0x20) == 0) {
        g_8c4aa348 = gfxlib_calls_scan_loop_21cf22;
    } else {
        g_8c4aa348 = gfxlib_calls_scan_loop_21cfd8;
    }
    a4 = &g_8c4aa350;
    if ((g_8c4aad82 & 4) == 0) {
        g_8c4aa350 = noop_21d13c;
    } else {
        g_8c4aa350 = gfxlib_uses_noop_21ce92;
    }
    g_8c4ab0b4 = gfxlib_uses_switch_jump_21c2ea;
    g_8c4ab0b8 = gfxlib_uses_switch_jump_21d29c;
    g_8c4aad54 = in_fr4;
    g_8c4aad70 = in_fr4;
    draw_state_save(&g_8c4aa350, ar5_00, 0x20, &g_8c4aad82);
    (*g_8c4aa338)(a4, ar5_00, uVar1, a7);
    gfxlib_uses_noop_21a942(unaff_r13);
    uVar1 = draw_state_restore(unaff_r13);
    return uVar1;
}

/*
 * gfxlib_draw_21b52c  0x8c21b52c
 * area name: in the gfxlib library code range; behaviour name: mostly calls draw functions
 */
u32 *gfxlib_draw_21b52c(u32 unused_a0, u32 *a1, u32 unused_a2, u32 unused_a3, u32 *ain0, u32 ain1) {
    u32 *in_r2;
    u8 *a4;
    u8 *a5;
    u32 ar6_00;
    u32 uVar1;
    u32 *unaff_r13;
    float fVar2;
    float in_fr4;
    char in_T;

    a4 = &g_8c4aad82;
    *in_r2 = gfxlib_update_fields_21a854;
    *ain0 = ain1;
    if (in_T == '\x01') {
        g_8c4aad80 = 0;
        g_8c4ab0c0 = 0;
        g_8c4aad82 = 0;
    } else {
        fVar2 = (float)(int)a1[1];
        if ((int)a1[1] < 0) {
            fVar2 = fVar2 + 4.2949673e+09;
        }
        if (fVar2 <= in_fr4) {
            return ain0;
        }
        g_8c4aad80 = *(u16 *)((int)a1 + 10) & 0xff3f;
        g_8c4ab0c0 = (u16)((*(u16 *)((int)a1 + 10) & 0xc0) != 0);
        g_8c4aad82 = *(u16 *)(a1 + 2);
        g_8c4aad48 = *a1;
        g_8c4aad58 = a1[1];
    }
    g_8c4aad5c = 0;
    g_8c4aad60 = 0;
    g_8c4aa340 = (&PTR_LAB_8c2759a0)[g_8c4aad80];
    uVar1 = 0x20;
    if ((g_8c4aad82 & 1) == 0) {
        g_8c4aa344 = noop_21d108;
    } else {
        g_8c4aa344 = gfxlib_uses_noop_21ce02;
    }
    ar6_00 = (u32)g_8c4aad82;
    if ((g_8c4aad82 & 2) == 0) {
        if ((g_8c4aad82 & 0x2000) == 0) {
            if ((*unaff_r13 & 0x20) == 0) {
                g_8c4aa348 = gfxlib_calls_scan_loop_21d112;
            } else {
                g_8c4aa348 = gfxlib_calls_scan_loop_21d11e;
            }
        } else {
            g_8c4aa348 = gfxlib_uses_switch_jump_21d06c;
        }
    } else if ((*unaff_r13 & 0x20) == 0) {
        g_8c4aa348 = gfxlib_calls_scan_loop_21cf22;
    } else {
        g_8c4aa348 = gfxlib_calls_scan_loop_21cfd8;
    }
    a5 = &g_8c4aa350;
    if ((g_8c4aad82 & 4) == 0) {
        g_8c4aa350 = noop_21d13c;
    } else {
        g_8c4aa350 = gfxlib_uses_noop_21ce92;
    }
    g_8c4ab0b4 = gfxlib_uses_switch_jump_21c2ea;
    g_8c4ab0b8 = gfxlib_uses_switch_jump_21d29c;
    g_8c4aad54 = in_fr4;
    draw_state_save(&g_8c4aad82, &g_8c4aa350, ar6_00, 0x20);
    (*g_8c4aa338)(a4, a5, ar6_00, uVar1);
    gfxlib_draw_21a8b0(unaff_r13);
    uVar1 = draw_state_restore(unaff_r13);
    return (u32 *)uVar1;
}

/*
 * gfxlib_draw_21b6ae  0x8c21b6ae
 * area name: in the gfxlib library code range; behaviour name: mostly calls draw functions
 */
u32 gfxlib_draw_21b6ae(u32 unused_a0, u32 *a1, u32 *a2, u32 unused_a3, u32 *ain0, u32 ain1) {
    u32 *in_r2;
    u8 *a4;
    u32 ar5_00;
    u32 uVar1;
    u8 *a7;
    u32 *unaff_r13;
    float fVar2;
    float in_fr4;
    char in_T;

    a7 = &g_8c4aad82;
    *in_r2 = gfxlib_update_fields_21a854;
    *ain0 = ain1;
    if (in_T == '\x01') {
        g_8c4aad80 = 0;
        g_8c4ab0c0 = 0;
        g_8c4aad82 = 0;
    } else {
        fVar2 = (float)(int)a1[1];
        if ((int)a1[1] < 0) {
            fVar2 = fVar2 + 4.2949673e+09;
        }
        if (fVar2 <= in_fr4) {
            return ain0;
        }
        g_8c4aad80 = *(u16 *)((int)a1 + 10) & 0xff3f;
        g_8c4ab0c0 = (u16)((*(u16 *)((int)a1 + 10) & 0xc0) != 0);
        g_8c4aad82 = *(u16 *)(a1 + 2);
        g_8c4aad48 = *a1;
        g_8c4aad58 = a1[1];
    }
    g_8c4aad5c = 0;
    g_8c4aad60 = 0;
    if (a2 == NULL) {
        g_8c4aad86 = 0;
        g_8c4ab0c2 = 0;
        g_8c4aad84 = 0;
    } else {
        fVar2 = (float)(int)a2[1];
        if ((int)a2[1] < 0) {
            fVar2 = fVar2 + 4.2949673e+09;
        }
        if (fVar2 <= in_fr4) {
            g_8c4aad60 = 0;
            g_8c4aad5c = 0;
            g_8c4aad54 = in_fr4;
            return 0xc;
        }
        g_8c4aad86 = *(u16 *)(a2 + 2);
        g_8c4aad84 = *(u16 *)((int)a2 + 10) & 0xff3f;
        g_8c4ab0c2 = (u16)((*(u16 *)((int)a2 + 10) & 0xc0) != 0);
        g_8c4aad64 = *a2;
        g_8c4aad74 = a2[1];
        g_8c2759d8 = 0;
    }
    g_8c4aad78 = 0;
    g_8c4aad7c = 0;
    g_8c4aa36c = (&PTR_LAB_8c2759dc)[g_8c4aad84];
    g_8c4aa370 = gfxlib_vec_21ee94;
    g_8c4aa340 = (&PTR_LAB_8c2759a0)[g_8c4aad80];
    uVar1 = 0x20;
    if ((g_8c4aad82 & 1) == 0) {
        g_8c4aa344 = noop_21d108;
    } else {
        g_8c4aa344 = gfxlib_uses_noop_21ce02;
    }
    ar5_00 = (u32)g_8c4aad82;
    if ((g_8c4aad82 & 2) == 0) {
        if ((g_8c4aad82 & 0x2000) == 0) {
            if ((*unaff_r13 & 0x20) == 0) {
                g_8c4aa348 = gfxlib_calls_scan_loop_21d112;
            } else {
                g_8c4aa348 = gfxlib_calls_scan_loop_21d11e;
            }
        } else {
            g_8c4aa348 = gfxlib_uses_switch_jump_21d06c;
        }
    } else if ((*unaff_r13 & 0x20) == 0) {
        g_8c4aa348 = gfxlib_calls_scan_loop_21cf22;
    } else {
        g_8c4aa348 = gfxlib_calls_scan_loop_21cfd8;
    }
    a4 = &g_8c4aa350;
    if ((g_8c4aad82 & 4) == 0) {
        g_8c4aa350 = noop_21d13c;
    } else {
        g_8c4aa350 = gfxlib_uses_noop_21ce92;
    }
    g_8c4ab0b4 = gfxlib_uses_switch_jump_21c2ea;
    g_8c4ab0b8 = gfxlib_uses_switch_jump_21d29c;
    g_8c4aad54 = in_fr4;
    g_8c4aad70 = in_fr4;
    draw_state_save(&g_8c4aa350, ar5_00, 0x20, &g_8c4aad82);
    (*g_8c4aa338)(a4, ar5_00, uVar1, a7);
    gfxlib_uses_noop_21a942(unaff_r13);
    uVar1 = draw_state_restore(unaff_r13);
    return uVar1;
}

/*
 * gfxlib_uses_noop_21b908  0x8c21b908
 * area name: in the gfxlib library code range; behaviour name: its main named callee is noop_25b638
 * called by: alt_entry_21b916, alt_entry_21ba6a, gfxlib_draw_21ba62, gfxlib_draw_21bdd6, gfxlib_uses_noop_21b908
 */
u32 gfxlib_uses_noop_21b908(u32 *a0) {
    u32 r5;
    u8 *puVar1;
    u8 *puVar2;
    u8 *puVar3;
    u32 uVar4;
    u8 *puVar5;

    puVar3 = (&matrix_push_regs);
    puVar2 = (&ninja_scan_loop_2569e0);
    puVar1 = (&noop_257098);
    puVar5 = &g_8c4aad80;
    do {
        (*(code *)puVar3)(puVar5);
        if ((*a0 & 0x40) == 0) {
            (*(code *)*0x8c4aa340)(a0);
        } else {
            noop_25b638(a0 + 2);
            r5 = *a0 & 0x20;
            (*(code *)puVar2)(a0 + 5);
            (*(code *)puVar1)(a0 + 8);
        }
        if ((code *)*0x8c4aa358 != NULL) {
            (*(code *)*0x8c4aa358)(a0);
        }
        if ((a0[1] != 0) && ((*a0 & 8) == 0)) {
            gfxlib_calls_test_219954(a0[1]);
        }
        if (a0[0xb] != 0) {
            gfxlib_uses_noop_21b908((u32 *)a0[0xb]);
        }
        uVar4 = matrix_pop1();
        a0 = (u32 *)a0[0xc];
    } while (a0 != NULL);
    return uVar4;
}

/*
 * alt_entry_21b916  0x8c21b916
 * probably an entry 14 bytes into 8c21b908: it reads registers that code sets before it
 */
u32 alt_entry_21b916(u32 *a0, u32 a1, u32 a2, u32 a3) {
    u32 uVar1;
    u32 unaff_r11;
    u32 unaff_r12;
    u32 *unaff_r14;
    u32 in_PR;

    do {
        matrix_push_regs(a0, a1, a2, a3, in_PR);
        if ((*unaff_r14 & unaff_r11) == 0) {
            a0 = unaff_r14;
            (*g_8c4aa340)(unaff_r14, a1, a2, a3);
        } else {
            noop_25b638(unaff_r14 + 2, a1, a2, a3, in_PR);
            a1 = *unaff_r14 & unaff_r12;
            ninja_scan_loop_2569e0(unaff_r14 + 5, a1, a2, a3);
            a0 = unaff_r14 + 8;
            noop_257098();
        }
        if (g_8c4aa358 != NULL) {
            a0 = unaff_r14;
            (*g_8c4aa358)(unaff_r14, a1, a2, a3);
        }
        if ((unaff_r14[1] != 0) && ((*unaff_r14 & 8) == 0)) {
            a0 = (u32 *)unaff_r14[1];
            gfxlib_calls_test_219954(a0, a1, a2, a3);
        }
        if (unaff_r14[0xb] != 0) {
            a0 = (u32 *)unaff_r14[0xb];
            gfxlib_uses_noop_21b908(a0);
        }
        uVar1 = matrix_pop1();
        unaff_r14 = (u32 *)unaff_r14[0xc];
    } while (unaff_r14 != NULL);
    return uVar1;
}

/*
 * gfxlib_uses_noop_21b998  0x8c21b998
 * area name: in the gfxlib library code range; behaviour name: its main named callee is noop_25b638
 * called by: alt_entry_21b9a8, alt_entry_21bbba, gfxlib_draw_21bbb0, gfxlib_draw_21bf44, gfxlib_uses_noop_21b998
 */
u32 gfxlib_uses_noop_21b998(u32 *a0) {
    u32 r5;
    u8 *puVar1;
    u8 *puVar2;
    u32 uVar3;
    u32 uVar4;
    u32 uVar5;

    puVar2 = (&matrix_push_regs);
    puVar1 = (&ninja_scan_loop_2569e0);
    uVar5 = 0x80;
    uVar4 = (u32)0x80;
    do {
        (*(code *)puVar2)(uVar5);
        if ((*a0 & 0x40) == 0) {
            (*(code *)*0x8c4aa340)(a0);
        } else {
            noop_25b638(a0 + 2);
            r5 = *a0 & 0x20;
            (*(code *)puVar1)(a0 + 5);
            noop_257098(a0 + 8);
        }
        if ((code *)*0x8c4aa358 != NULL) {
            (*(code *)*0x8c4aa358)(a0);
        }
        if ((*a0 & uVar4) == 0) {
            (*(code *)*0x8c4aa36c)(a0);
        } else if ((a0[1] != 0) && ((*a0 & 8) == 0)) {
            gfxlib_calls_test_219954(a0[1]);
        }
        if (a0[0xb] != 0) {
            gfxlib_uses_noop_21b998((u32 *)a0[0xb]);
        }
        uVar3 = matrix_pop1();
        a0 = (u32 *)a0[0xc];
    } while (a0 != NULL);
    return uVar3;
}

/*
 * alt_entry_21b9a8  0x8c21b9a8
 * probably an entry 16 bytes into 8c21b998: it reads registers that code sets before it
 */
u32 alt_entry_21b9a8(u32 *a0, u32 a1, u32 a2, u32 a3) {
    u32 uVar1;
    u32 unaff_r10;
    u32 unaff_r11;
    u32 *unaff_r14;
    u32 in_PR;

    do {
        matrix_push_regs(a0, a1, a2, a3, in_PR);
        if ((*unaff_r14 & unaff_r10) == 0) {
            a0 = unaff_r14;
            (*g_8c4aa340)(unaff_r14, a1, a2, a3);
        } else {
            noop_25b638(unaff_r14 + 2, a1, a2, a3, in_PR);
            a1 = *unaff_r14 & unaff_r11;
            ninja_scan_loop_2569e0(unaff_r14 + 5, a1, a2, a3);
            a0 = unaff_r14 + 8;
            noop_257098();
        }
        if (g_8c4aa358 != NULL) {
            a0 = unaff_r14;
            (*g_8c4aa358)(unaff_r14, a1, a2, a3);
        }
        if ((*unaff_r14 & 0x80) == 0) {
            a0 = unaff_r14;
            (*g_8c4aa36c)(unaff_r14, a1, a2, a3);
        } else if ((unaff_r14[1] != 0) && ((*unaff_r14 & 8) == 0)) {
            a0 = (u32 *)unaff_r14[1];
            gfxlib_calls_test_219954(a0, a1, a2, a3);
        }
        if (unaff_r14[0xb] != 0) {
            a0 = (u32 *)unaff_r14[0xb];
            gfxlib_uses_noop_21b998(a0);
        }
        uVar1 = matrix_pop1();
        unaff_r14 = (u32 *)unaff_r14[0xc];
    } while (unaff_r14 != NULL);
    return uVar1;
}

/*
 * gfxlib_draw_21ba62  0x8c21ba62
 * area name: in the gfxlib library code range; behaviour name: mostly calls draw functions
 * called by: Class_12aeec_uses_gfx_set_color4_0a481c, Vec3_uses_obj_set_texlist_0a4a5c, game_draw_015b54
 */
u32 gfxlib_draw_21ba62(u32 *a0, u32 *a1, u32 unused_a2, u32 unused_a3, u32 ain0) {
    u32 uVar1;
    u8 *ar5_00;
    u32 ar6_00;
    u32 uVar2;
    float fVar3;
    float in_fr4;

    if (a1 == NULL) {
        g_8c4aad80 = 0;
        g_8c4ab0c0 = 0;
        g_8c4aad82 = 0;
    } else {
        fVar3 = (float)(int)a1[1];
        if ((int)a1[1] < 0) {
            fVar3 = fVar3 + 4.2949673e+09;
        }
        if (fVar3 <= in_fr4) {
            return ain0;
        }
        g_8c4aad80 = *(u16 *)((int)a1 + 10) & 0xff3f;
        g_8c4ab0c0 = (u16)((*(u16 *)((int)a1 + 10) & 0xc0) != 0);
        g_8c4aad82 = *(u16 *)(a1 + 2);
        g_8c4aad48 = *a1;
        g_8c4aad58 = a1[1];
    }
    g_8c4aad5c = 0;
    g_8c4aad60 = 0;
    g_8c4aa340 = (&PTR_LAB_8c2759a0)[g_8c4aad80];
    uVar2 = 0x20;
    if ((g_8c4aad82 & 1) == 0) {
        g_8c4aa344 = noop_21d108;
    } else {
        g_8c4aa344 = gfxlib_uses_noop_21ce02;
    }
    ar6_00 = (u32)g_8c4aad82;
    if ((g_8c4aad82 & 2) == 0) {
        if ((g_8c4aad82 & 0x2000) == 0) {
            if ((*a0 & 0x20) == 0) {
                g_8c4aa348 = gfxlib_calls_scan_loop_21d112;
            } else {
                g_8c4aa348 = gfxlib_calls_scan_loop_21d11e;
            }
        } else {
            g_8c4aa348 = gfxlib_uses_switch_jump_21d06c;
        }
    } else if ((*a0 & 0x20) == 0) {
        g_8c4aa348 = gfxlib_calls_scan_loop_21cf22;
    } else {
        g_8c4aa348 = gfxlib_calls_scan_loop_21cfd8;
    }
    ar5_00 = &g_8c4aa350;
    if ((g_8c4aad82 & 4) == 0) {
        g_8c4aa350 = noop_21d13c;
    } else {
        g_8c4aa350 = gfxlib_uses_noop_21ce92;
    }
    uVar1 = (u32)g_8c4ab0c0;
    g_8c4ab0b4 = (&PTR_FUN_8c2759b4)[uVar1];
    g_8c4ab0b8 = (&PTR_FUN_8c2759bc)[uVar1];
    g_8c4aad54 = in_fr4;
    draw_state_save(uVar1 * 4, &g_8c4aa350, ar6_00, 0x20);
    gfxlib_uses_noop_21b908(a0);
    uVar2 = draw_state_restore(a0);
    return uVar2;
}

/*
 * alt_entry_21ba6a  0x8c21ba6a
 * probably an entry 8 bytes into 8c21ba62: it reads registers that code sets before it
 */
u32 alt_entry_21ba6a(u32 unused_a0, u32 *a1, u32 unused_a2, u32 unused_a3, u32 ain0) {
    u32 uVar1;
    u8 *a5;
    u32 ar6_00;
    u32 uVar2;
    u32 *unaff_r14;
    float fVar3;
    u64 in_dr2;
    double dVar4;
    float in_fr4;
    char in_T;
    bool bVar5;

    if (in_T == '\x01') {
        g_8c4aad80 = 0;
        g_8c4ab0c0 = 0;
        g_8c4aad82 = 0;
    } else {
        fVar3 = (float)(int)a1[1];
        dVar4 = (double)CONCAT44((int)((u64)in_dr2 >> 0x20), fVar3);
        if ((int)a1[1] < 0) {

            dVar4 = (double)CONCAT44(0x4f800000, fVar3 + 4.2949673e+09);
        }

        bVar5 = in_fr4 < SUB84(dVar4, 0);

        if (!bVar5) {
            return ain0;
        }
        g_8c4aad80 = *(u16 *)((int)a1 + 10) & 0xff3f;
        g_8c4ab0c0 = (u16)((*(u16 *)((int)a1 + 10) & 0xc0) != 0);
        g_8c4aad82 = *(u16 *)(a1 + 2);
        g_8c4aad48 = *a1;
        g_8c4aad54 = (u64)(u32)a1[1] << 0x20;
    }

    g_8c4aad54 = CONCAT44(g_8c4aad58, in_fr4);

    g_8c4aad5c = 0;
    g_8c4aad60 = 0;
    g_8c4aa340 = (&PTR_LAB_8c2759a0)[g_8c4aad80];
    uVar2 = 0x20;
    if ((g_8c4aad82 & 1) == 0) {
        g_8c4aa344 = (code *)&LAB_8c21d108;
    } else {
        g_8c4aa344 = gfxlib_uses_noop_21ce02;
    }
    ar6_00 = (u32)g_8c4aad82;
    if ((g_8c4aad82 & 2) == 0) {
        if ((g_8c4aad82 & 0x2000) == 0) {
            if ((*unaff_r14 & 0x20) == 0) {
                g_8c4aa348 = (code *)&LAB_8c21d112;
            } else {
                g_8c4aa348 = (code *)&LAB_8c21d11e;
            }
        } else {
            g_8c4aa348 = gfxlib_uses_switch_jump_21d06c;
        }
    } else if ((*unaff_r14 & 0x20) == 0) {
        g_8c4aa348 = gfxlib_calls_scan_loop_21cf22;
    } else {
        g_8c4aa348 = gfxlib_calls_scan_loop_21cfd8;
    }
    a5 = &g_8c4aa350;
    if ((g_8c4aad82 & 4) == 0) {
        g_8c4aa350 = (code *)&LAB_8c21d13c;
    } else {
        g_8c4aa350 = gfxlib_uses_noop_21ce92;
    }
    uVar1 = (u32)g_8c4ab0c0;
    g_8c4ab0b4 = (&PTR_FUN_8c2759b4)[uVar1];
    g_8c4ab0b8 = (&PTR_FUN_8c2759bc)[uVar1];
    draw_state_save(uVar1 * 4, &g_8c4aa350, ar6_00, 0x20);
    gfxlib_uses_noop_21b908(unaff_r14);
    uVar2 = draw_state_restore(unaff_r14);
    return uVar2;
}

/*
 * gfxlib_draw_21bbb0  0x8c21bbb0
 * area name: in the gfxlib library code range; behaviour name: mostly calls draw functions
 * called by: CSquidLine_uses_matrix_push_0ad354, Class_12a7f4_draw_09aad0,
 * Class_12ab2c_uses_get_field_1c_on_field_b0_09dec8, Class_12ad50_draw_0a53b0, game_draw_0ad7ec, game_draw_0add00,
 * game_uses_get_field_0_06b460, game_uses_get_field_1c_on_field_b0_08b020 (+4 more)
 */
u32 gfxlib_draw_21bbb0(u32 *a0, u32 *a1, u32 *a2, u32 unused_a3, u32 ain0) {
    u32 uVar1;
    u32 ar5_00;
    u32 uVar2;
    u8 *ar7_00;
    float fVar3;
    float in_fr4;

    ar7_00 = &g_8c4aad82;
    if (a1 == NULL) {
        g_8c4aad80 = 0;
        g_8c4ab0c0 = 0;
        g_8c4aad82 = 0;
    } else {
        fVar3 = (float)(int)a1[1];
        if ((int)a1[1] < 0) {
            fVar3 = fVar3 + 4.2949673e+09;
        }
        if (fVar3 <= in_fr4) {
            return ain0;
        }
        g_8c4aad80 = *(u16 *)((int)a1 + 10) & 0xff3f;
        g_8c4ab0c0 = (u16)((*(u16 *)((int)a1 + 10) & 0xc0) != 0);
        g_8c4aad82 = *(u16 *)(a1 + 2);
        g_8c4aad48 = *a1;
        g_8c4aad58 = a1[1];
    }
    g_8c4aad5c = 0;
    g_8c4aad60 = 0;
    if (a2 == NULL) {
        g_8c4aad86 = 0;
        g_8c4ab0c2 = 0;
        g_8c4aad84 = 0;
    } else {
        fVar3 = (float)(int)a2[1];
        if ((int)a2[1] < 0) {
            fVar3 = fVar3 + 4.2949673e+09;
        }
        if (fVar3 <= in_fr4) {
            g_8c4aad60 = 0;
            g_8c4aad5c = 0;
            g_8c4aad54 = in_fr4;
            return 0xc;
        }
        g_8c4aad86 = *(u16 *)(a2 + 2);
        g_8c4aad84 = *(u16 *)((int)a2 + 10) & 0xff3f;
        g_8c4ab0c2 = (u16)((*(u16 *)((int)a2 + 10) & 0xc0) != 0);
        g_8c4aad64 = *a2;
        g_8c4aad74 = a2[1];
        g_8c2759d8 = 0;
    }
    g_8c4aad78 = 0;
    g_8c4aad7c = 0;
    g_8c4aa36c = (&PTR_LAB_8c2759dc)[g_8c4aad84];
    g_8c4aa370 = (&PTR_FUN_8c2759d0)[g_8c4ab0c2];
    g_8c4aa340 = (&PTR_LAB_8c2759a0)[g_8c4aad80];
    uVar2 = 0x20;
    if ((g_8c4aad82 & 1) == 0) {
        g_8c4aa344 = noop_21d108;
    } else {
        g_8c4aa344 = gfxlib_uses_noop_21ce02;
    }
    ar5_00 = (u32)g_8c4aad82;
    if ((g_8c4aad82 & 2) == 0) {
        if ((g_8c4aad82 & 0x2000) == 0) {
            if ((*a0 & 0x20) == 0) {
                g_8c4aa348 = gfxlib_calls_scan_loop_21d112;
            } else {
                g_8c4aa348 = gfxlib_calls_scan_loop_21d11e;
            }
        } else {
            g_8c4aa348 = gfxlib_uses_switch_jump_21d06c;
        }
    } else if ((*a0 & 0x20) == 0) {
        g_8c4aa348 = gfxlib_calls_scan_loop_21cf22;
    } else {
        g_8c4aa348 = gfxlib_calls_scan_loop_21cfd8;
    }
    if ((g_8c4aad82 & 4) == 0) {
        g_8c4aa350 = noop_21d13c;
    } else {
        g_8c4aa350 = gfxlib_uses_noop_21ce92;
    }
    uVar1 = (u32)g_8c4ab0c0;
    g_8c4ab0b4 = (&PTR_FUN_8c2759b4)[uVar1];
    g_8c4ab0b8 = (&PTR_FUN_8c2759bc)[uVar1];
    g_8c4aa368 = gfxlib_calls_test_219954;
    g_8c4aad54 = in_fr4;
    g_8c4aad70 = in_fr4;
    draw_state_save(uVar1 * 4, ar5_00, 0x20, &g_8c4aad82);
    gfxlib_uses_noop_21b998(a0);
    uVar2 = draw_state_restore(a0);
    return uVar2;
}

/*
 * alt_entry_21bbba  0x8c21bbba
 * probably an entry 10 bytes into 8c21bbb0: it reads registers that code sets before it
 */
u32 alt_entry_21bbba(u32 unused_a0, u32 *a1, u32 *a2, u32 unused_a3, u32 ain0) {
    u32 uVar1;
    u32 ar5_00;
    u32 uVar2;
    u8 *a7;
    u32 *unaff_r12;
    float fVar3;
    double in_dr2;
    double dVar4;
    float in_fr4;
    char in_T;
    bool bVar5;

    a7 = &g_8c4aad82;
    if (in_T == '\x01') {
        g_8c4aad80 = 0;
        g_8c4ab0c0 = 0;
        g_8c4aad82 = 0;
    } else {
        fVar3 = (float)(int)a1[1];
        in_dr2 = (double)CONCAT44((int)((u64)in_dr2 >> 0x20), fVar3);
        if ((int)a1[1] < 0) {

            in_dr2 = (double)CONCAT44(0x4f800000, fVar3 + 4.2949673e+09);
        }

        bVar5 = in_fr4 < SUB84(in_dr2, 0);

        if (!bVar5) {
            return ain0;
        }
        g_8c4aad80 = *(u16 *)((int)a1 + 10) & 0xff3f;
        g_8c4ab0c0 = (u16)((*(u16 *)((int)a1 + 10) & 0xc0) != 0);
        g_8c4aad82 = *(u16 *)(a1 + 2);
        g_8c4aad48 = *a1;
        g_8c4aad54 = (u64)(u32)a1[1] << 0x20;
    }

    g_8c4aad54 = CONCAT44(g_8c4aad58, in_fr4);

    g_8c4aad5c = 0;
    g_8c4aad60 = 0;
    if (a2 == NULL) {
        g_8c4aad86 = 0;
        g_8c4ab0c2 = 0;
        g_8c4aad84 = 0;
    } else {
        fVar3 = (float)(int)a2[1];
        dVar4 = (double)CONCAT44((int)((u64)in_dr2 >> 0x20), fVar3);
        if ((int)a2[1] < 0) {

            dVar4 = (double)CONCAT44(0x4f800000, fVar3 + 4.2949673e+09);
        }

        bVar5 = in_fr4 < SUB84(dVar4, 0);

        if (!bVar5) {
            g_8c4aad60 = 0;
            g_8c4aad5c = 0;
            return 0xc;
        }
        g_8c4aad86 = *(u16 *)(a2 + 2);
        g_8c4aad84 = *(u16 *)((int)a2 + 10) & 0xff3f;
        g_8c4ab0c2 = (u16)((*(u16 *)((int)a2 + 10) & 0xc0) != 0);
        g_8c4aad64 = *a2;
        g_8c4aad70 = (u64)(u32)a2[1] << 0x20;
        g_8c2759d8 = 0;
    }

    g_8c4aad70 = CONCAT44(g_8c4aad74, in_fr4);

    g_8c4aad78 = 0;
    g_8c4aad7c = 0;
    g_8c4aa36c = (&PTR_LAB_8c2759dc)[g_8c4aad84];
    g_8c4aa370 = (&PTR_FUN_8c2759d0)[g_8c4ab0c2];
    g_8c4aa340 = (&PTR_LAB_8c2759a0)[g_8c4aad80];
    uVar2 = 0x20;
    if ((g_8c4aad82 & 1) == 0) {
        g_8c4aa344 = (code *)&LAB_8c21d108;
    } else {
        g_8c4aa344 = gfxlib_uses_noop_21ce02;
    }
    ar5_00 = (u32)g_8c4aad82;
    if ((g_8c4aad82 & 2) == 0) {
        if ((g_8c4aad82 & 0x2000) == 0) {
            if ((*unaff_r12 & 0x20) == 0) {
                g_8c4aa348 = (code *)&LAB_8c21d112;
            } else {
                g_8c4aa348 = (code *)&LAB_8c21d11e;
            }
        } else {
            g_8c4aa348 = gfxlib_uses_switch_jump_21d06c;
        }
    } else if ((*unaff_r12 & 0x20) == 0) {
        g_8c4aa348 = gfxlib_calls_scan_loop_21cf22;
    } else {
        g_8c4aa348 = gfxlib_calls_scan_loop_21cfd8;
    }
    if ((g_8c4aad82 & 4) == 0) {
        g_8c4aa350 = (code *)&LAB_8c21d13c;
    } else {
        g_8c4aa350 = gfxlib_uses_noop_21ce92;
    }
    uVar1 = (u32)g_8c4ab0c0;
    g_8c4ab0b4 = (&PTR_FUN_8c2759b4)[uVar1];
    g_8c4ab0b8 = (&PTR_FUN_8c2759bc)[uVar1];
    g_8c4aa368 = gfxlib_calls_test_219954;
    draw_state_save(uVar1 * 4, ar5_00, 0x20, &g_8c4aad82);
    gfxlib_uses_noop_21b998(unaff_r12);
    uVar2 = draw_state_restore(unaff_r12);
    return uVar2;
}

/*
 * gfxlib_draw_21bdd6  0x8c21bdd6
 * area name: in the gfxlib library code range; behaviour name: mostly calls draw functions
 */
u32 gfxlib_draw_21bdd6(u32 unused_a0, u32 *a1, u32 unused_a2, u32 unused_a3, u32 ain0) {
    u32 uVar1;
    u8 *a5;
    u32 ar6_00;
    u32 uVar2;
    u32 *unaff_r14;
    float fVar3;
    float in_fr4;
    char in_T;

    if (in_T == '\x01') {
        g_8c4aad80 = 0;
        g_8c4ab0c0 = 0;
        g_8c4aad82 = 0;
    } else {
        fVar3 = (float)(int)a1[1];
        if ((int)a1[1] < 0) {
            fVar3 = fVar3 + 4.2949673e+09;
        }
        if (fVar3 <= in_fr4) {
            return ain0;
        }
        g_8c4aad80 = *(u16 *)((int)a1 + 10) & 0xff3f;
        g_8c4ab0c0 = (u16)((*(u16 *)((int)a1 + 10) & 0xc0) != 0);
        g_8c4aad82 = *(u16 *)(a1 + 2);
        g_8c4aad48 = *a1;
        g_8c4aad58 = a1[1];
    }
    g_8c4aad5c = 0;
    g_8c4aad60 = 0;
    g_8c4aa340 = (&PTR_LAB_8c2759a0)[g_8c4aad80];
    uVar2 = 0x20;
    if ((g_8c4aad82 & 1) == 0) {
        g_8c4aa344 = noop_21d108;
    } else {
        g_8c4aa344 = gfxlib_uses_noop_21ce02;
    }
    ar6_00 = (u32)g_8c4aad82;
    if ((g_8c4aad82 & 2) == 0) {
        if ((g_8c4aad82 & 0x2000) == 0) {
            if ((*unaff_r14 & 0x20) == 0) {
                g_8c4aa348 = gfxlib_calls_scan_loop_21d112;
            } else {
                g_8c4aa348 = gfxlib_calls_scan_loop_21d11e;
            }
        } else {
            g_8c4aa348 = gfxlib_uses_switch_jump_21d06c;
        }
    } else if ((*unaff_r14 & 0x20) == 0) {
        g_8c4aa348 = gfxlib_calls_scan_loop_21cf22;
    } else {
        g_8c4aa348 = gfxlib_calls_scan_loop_21cfd8;
    }
    a5 = &g_8c4aa350;
    if ((g_8c4aad82 & 4) == 0) {
        g_8c4aa350 = noop_21d13c;
    } else {
        g_8c4aa350 = gfxlib_uses_noop_21ce92;
    }
    uVar1 = (u32)g_8c4ab0c0;
    g_8c4ab0b4 = (&PTR_FUN_8c2759b4)[uVar1];
    g_8c4ab0b8 = (&PTR_FUN_8c2759c4)[uVar1];
    g_8c4aad54 = in_fr4;
    draw_state_save(uVar1 * 4, &g_8c4aa350, ar6_00, 0x20);
    gfxlib_uses_noop_21b908(unaff_r14);
    uVar2 = draw_state_restore(unaff_r14);
    return uVar2;
}

/*
 * gfxlib_draw_21bf44  0x8c21bf44
 * area name: in the gfxlib library code range; behaviour name: mostly calls draw functions
 */
u32 gfxlib_draw_21bf44(u32 unused_a0, u32 *a1, u32 *a2, u32 unused_a3, u32 ain0) {
    u32 uVar1;
    u32 ar5_00;
    u32 uVar2;
    u8 *a7;
    u32 *unaff_r12;
    float fVar3;
    float in_fr4;
    char in_T;

    a7 = &g_8c4aad82;
    if (in_T == '\x01') {
        g_8c4aad80 = 0;
        g_8c4ab0c0 = 0;
        g_8c4aad82 = 0;
    } else {
        fVar3 = (float)(int)a1[1];
        if ((int)a1[1] < 0) {
            fVar3 = fVar3 + 4.2949673e+09;
        }
        if (fVar3 <= in_fr4) {
            return ain0;
        }
        g_8c4aad80 = *(u16 *)((int)a1 + 10) & 0xff3f;
        g_8c4ab0c0 = (u16)((*(u16 *)((int)a1 + 10) & 0xc0) != 0);
        g_8c4aad82 = *(u16 *)(a1 + 2);
        g_8c4aad48 = *a1;
        g_8c4aad58 = a1[1];
    }
    g_8c4aad5c = 0;
    g_8c4aad60 = 0;
    if (a2 == NULL) {
        g_8c4aad86 = 0;
        g_8c4ab0c2 = 0;
        g_8c4aad84 = 0;
    } else {
        fVar3 = (float)(int)a2[1];
        if ((int)a2[1] < 0) {
            fVar3 = fVar3 + 4.2949673e+09;
        }
        if (fVar3 <= in_fr4) {
            g_8c4aad60 = 0;
            g_8c4aad5c = 0;
            g_8c4aad54 = in_fr4;
            return 0xc;
        }
        g_8c4aad86 = *(u16 *)(a2 + 2);
        g_8c4aad84 = *(u16 *)((int)a2 + 10) & 0xff3f;
        g_8c4ab0c2 = (u16)((*(u16 *)((int)a2 + 10) & 0xc0) != 0);
        g_8c4aad64 = *a2;
        g_8c4aad74 = a2[1];
        g_8c2759d8 = 0;
    }
    g_8c4aad78 = 0;
    g_8c4aad7c = 0;
    g_8c4aa36c = (&PTR_LAB_8c2759dc)[g_8c4aad84];
    g_8c4aa370 = (&PTR_FUN_8c2759d0)[g_8c4ab0c2];
    g_8c4aa340 = (&PTR_LAB_8c2759a0)[g_8c4aad80];
    uVar2 = 0x20;
    if ((g_8c4aad82 & 1) == 0) {
        g_8c4aa344 = noop_21d108;
    } else {
        g_8c4aa344 = gfxlib_uses_noop_21ce02;
    }
    ar5_00 = (u32)g_8c4aad82;
    if ((g_8c4aad82 & 2) == 0) {
        if ((g_8c4aad82 & 0x2000) == 0) {
            if ((*unaff_r12 & 0x20) == 0) {
                g_8c4aa348 = gfxlib_calls_scan_loop_21d112;
            } else {
                g_8c4aa348 = gfxlib_calls_scan_loop_21d11e;
            }
        } else {
            g_8c4aa348 = gfxlib_uses_switch_jump_21d06c;
        }
    } else if ((*unaff_r12 & 0x20) == 0) {
        g_8c4aa348 = gfxlib_calls_scan_loop_21cf22;
    } else {
        g_8c4aa348 = gfxlib_calls_scan_loop_21cfd8;
    }
    if ((g_8c4aad82 & 4) == 0) {
        g_8c4aa350 = noop_21d13c;
    } else {
        g_8c4aa350 = gfxlib_uses_noop_21ce92;
    }
    uVar1 = (u32)g_8c4ab0c0;
    g_8c4ab0b4 = (&PTR_FUN_8c2759b4)[uVar1];
    g_8c4ab0b8 = (&PTR_FUN_8c2759c4)[uVar1];
    g_8c4aa368 = gfxlib_calls_test_219954;
    g_8c4aad54 = in_fr4;
    g_8c4aad70 = in_fr4;
    draw_state_save(uVar1 * 4, ar5_00, 0x20, &g_8c4aad82);
    gfxlib_uses_noop_21b998(unaff_r12);
    uVar2 = draw_state_restore(unaff_r12);
    return uVar2;
}

/*
 * gfxlib_uses_switch_jump_21c1b0  0x8c21c1b0
 * area name: in the gfxlib library code range; behaviour name: its main named callee is switch_jump
 * called by: gfxlib_uses_switch_jump_21d06c
 */
u32 gfxlib_uses_switch_jump_21c1b0(int a0, int a1, u32 a2, double *a3) {
    double *pdVar1;
    double *pdVar2;
    double *pdVar3;
    int iVar4;
    int *piVar5;
    int *piVar6;
    double in_dr0;
    double dVar7;
    float fVar8;
    float fVar9;
    double dVar10;
    u64 uVar11;
    u32 uVar12;
    u32 in_fr5;
    u32 uVar13;
    u32 in_fr7;
    float fVar14;
    u32 in_fr9;
    double in_xd0;
    double in_xd2;
    double dVar15;
    double in_xd4;
    bool bVar16;
    u32 in_PR;
    char cVar17;
    char cVar18;
    u8 auStack_14[8];
    u32 uStack_c;

    cVar18 = '\0';
    cVar17 = '\0';
    uStack_c = in_PR;
    switch_jump(8, auStack_14, &g_8c26d780);
    piVar6 = (int *)(a1 * 0x14 + a0);
    iVar4 = libgcc_divide_helper_0106dc(a1 + 1, a2);
    piVar5 = (int *)(a0 + iVar4 * 0x14);
    fVar8 = (float)(*piVar5 - *piVar6);
    dVar10 = (double)(u64)(u32)fVar8;
    dVar7 = in_xd2;
    if (cVar18 == '\0') {
        dVar7 = (double)CONCAT44(fVar8, in_fr5);
    }
    uVar13 = (u32)((u64)dVar7 >> 0x20);
    dVar15 = dVar7;
    if (cVar17 != '\0' || 0.0 <= fVar8) {
        if (cVar18 == '\0') {
            dVar10 = (double)(u64)uVar13;
            dVar15 = in_xd2;
        }
    } else {
        if (cVar18 == '\0') {
            dVar10 = (double)(u64)uVar13;
            in_dr0 = (double)CONCAT44((int)((u64)in_dr0 >> 0x20), 0x4f800000);
            dVar15 = in_xd2;
        } else {
            in_xd0 = -1.8629950226301174e-249;
        }
        if (cVar17 == '\0') {
            dVar10 = (double)(u64)(u32)(SUB84(dVar10, 0) + SUB84(in_dr0, 0));
        } else {
            dVar10 = dVar10 + in_dr0;
        }
    }
    if (cVar18 == '\0') {
        stack0xfffffff0 = (double)CONCAT44(uStack_c, SUB84(dVar10, 0));
    } else {
        stack0xfffffff0 = dVar15;
    }
    iVar4 = *piVar6;
    fVar8 = (float)iVar4;
    dVar10 = (double)CONCAT44((int)((u64)dVar10 >> 0x20), fVar8);
    if (iVar4 < 0) {
        if (cVar17 == '\0') {
            dVar10 = (double)CONCAT44(0x4f800000, fVar8 + 4.2949673e+09);
        } else {
            dVar10 = (double)CONCAT44(0x4f800000, fVar8) + (double)CONCAT44(0x4f800000, fVar8);
        }
    }
    if (cVar18 == '\0') {
        in_dr0 = (double)CONCAT44((int)((u64)in_dr0 >> 0x20), g_8c4aad54);
    } else {
        in_xd0 = (double)CONCAT44(g_8c4aad58, g_8c4aad54);
    }
    if (cVar17 == '\0') {
        fVar8 = SUB84(in_dr0, 0) - SUB84(dVar10, 0);
    } else {
        fVar8 = SUB84(in_dr0 - dVar10, 0);
    }
    if (cVar18 == '\0') {
        dVar10 = (double)CONCAT44(piVar6[1], SUB84(dVar10, 0));
    } else {
        dVar10 = *(double *)(piVar6 + 1);
    }
    iVar4 = (u32)(0 < *piVar5 - iVar4) * 4;
    if (cVar18 == '\0') {
        dVar10 = (double)CONCAT44((int)((u64)dVar10 >> 0x20), *(u32 *)(auStack_14 + iVar4));
        in_xd0 = (double)CONCAT44(fVar8, SUB84(dVar7, 0));
    } else {
        dVar15 = *(double *)(auStack_14 + iVar4);
    }
    if (cVar17 == '\0') {
        in_xd0 = (double)CONCAT44((float)((u64)in_xd0 >> 0x20) / SUB84(dVar10, 0), SUB84(in_xd0, 0));
    } else {
        in_xd0 = in_xd0 / dVar10;
    }
    if (cVar18 == '\0') {
        dVar7 = (double)CONCAT44(piVar5[2], fVar8);
        dVar10 = (double)CONCAT44((int)((u64)dVar10 >> 0x20), piVar6[2]);
        in_xd0 = (double)CONCAT44((int)((u64)in_xd0 >> 0x20), 0x3f800000);
    } else {
        dVar7 = *(double *)(piVar5 + 2);
        dVar15 = *(double *)(piVar6 + 2);
        in_xd4 = (double)CONCAT44(0x3f800000, in_fr9);
    }
    if (cVar17 == '\0') {
        dVar10 = (double)CONCAT44((int)((u64)dVar10 >> 0x20), SUB84(dVar10, 0) * (float)((u64)dVar7 >> 0x20));
    } else {
        dVar10 = dVar10 * dVar7;
    }
    if (cVar18 == '\0') {
        fVar8 = (float)piVar5[1];
    } else {
        fVar8 = (float)((u64) * (u64 *)(piVar5 + 1) >> 0x20);
    }
    if (cVar17 == '\0') {
        dVar10 = (double)(u64)(u32)(fVar8 * (float)((u64)dVar10 >> 0x20) + SUB84(dVar10, 0));
    }
    if (cVar18 == '\0') {
        uVar11 = CONCAT44(piVar6[3], SUB84(dVar10, 0));
        fVar8 = (float)piVar5[3];
    } else {
        uVar11 = *(u64 *)(piVar6 + 3);
        fVar8 = (float)((u64) * (u64 *)(piVar5 + 3) >> 0x20);
    }
    if (cVar17 == '\0') {
        uVar11 = (u64)(u32)(fVar8 * (float)(uVar11 >> 0x20) + (float)uVar11);
    }
    if (cVar18 == '\0') {
        fVar8 = (float)piVar5[4];
        uVar11 = CONCAT44(piVar6[4], (int)uVar11);
    } else {
        fVar8 = (float)((u64) * (u64 *)(piVar5 + 4) >> 0x20);
        uVar11 = *(u64 *)(piVar6 + 4);
    }
    if (cVar17 == '\0') {
        fVar14 = (float)(uVar11 >> 0x20);
        uVar11 = CONCAT44(fVar14, fVar8 * fVar14 + (float)uVar11);
    }
    dVar10 = dVar15;
    if (cVar18 == '\0') {
        dVar10 = (double)CONCAT44((int)uVar11, in_fr7);
    }
    if (cVar17 == '\0') {
        bVar16 = (float)((u64)dVar10 >> 0x20) < 0.0;
        fVar8 = (float)((u64)in_xd0 >> 0x20);
        in_xd0 = (double)CONCAT44(fVar8, SUB84(in_xd0, 0) - fVar8);
    } else {
        bVar16 = dVar10 < (double)(uVar11 & 0xffffffff00000000);
        in_xd0 = in_xd0 - in_xd0;
    }
    if (bVar16) {
        if (cVar17 == '\0') {
            in_xd0 = (double)CONCAT44((float)((u64)in_xd0 >> 0x20) * -1.0, SUB84(in_xd0, 0));
        } else {
            in_xd0 = in_xd0 * -0.0078125;
        }
    }
    if (cVar18 == '\0') {
        dVar7 = (double)CONCAT44(piVar6[1], piVar5[1]);
        dVar10 = (double)((s64)in_xd0 << 0x20);
    } else {
        dVar15 = *(double *)(piVar5 + 1);
        dVar7 = *(double *)(piVar6 + 1);
        dVar10 = in_xd4;
    }
    fVar14 = (float)((u64)in_xd0 >> 0x20);
    fVar8 = (float)((u64)dVar10 >> 0x20);
    if (cVar17 == '\0') {
        fVar9 = fVar8 * (float)((u64)dVar7 >> 0x20) + SUB84(dVar7, 0) * fVar14;
    } else {
        fVar9 = SUB84(dVar7 * in_xd0, 0);
    }
    pdVar3 = (double *)((int)a3 + 4);
    pdVar2 = a3 + 1;
    pdVar1 = (double *)((int)a3 + 0xc);
    if (cVar18 == '\0') {
        *(float *)a3 = fVar9;
        dVar10 = (double)CONCAT44(piVar6[2], piVar5[2]);
    } else {
        *a3 = dVar15;
        dVar15 = *(double *)(piVar5 + 2);
        dVar10 = *(double *)(piVar6 + 2);
    }
    if (cVar17 == '\0') {
        fVar9 = fVar8 * (float)((u64)dVar10 >> 0x20) + SUB84(dVar10, 0) * fVar14;
    } else {
        fVar9 = SUB84(dVar10 * in_xd0, 0);
    }
    if (cVar18 == '\0') {
        *(float *)pdVar3 = fVar9;
        dVar10 = (double)CONCAT44(piVar6[3], piVar5[3]);
    } else {
        *pdVar3 = dVar15;
        dVar15 = *(double *)(piVar5 + 3);
        dVar10 = *(double *)(piVar6 + 3);
    }
    if (cVar17 == '\0') {
        fVar9 = fVar8 * (float)((u64)dVar10 >> 0x20) + SUB84(dVar10, 0) * fVar14;
    } else {
        fVar9 = SUB84(dVar10 * in_xd0, 0);
    }
    if (cVar18 == '\0') {
        *(float *)pdVar2 = fVar9;
        dVar10 = (double)CONCAT44(piVar6[4], piVar5[4]);
    } else {
        *pdVar2 = dVar15;
        dVar15 = *(double *)(piVar5 + 4);
        dVar10 = *(double *)(piVar6 + 4);
    }
    if (cVar17 == '\0') {
        fVar9 = (float)((u64)dVar10 >> 0x20);
        dVar10 = (double)CONCAT44(fVar9, fVar8 * fVar9 + SUB84(dVar10, 0) * fVar14);
    } else {
        dVar10 = dVar10 * in_xd0;
    }
    if (cVar18 == '\0') {
        *(int *)pdVar1 = SUB84(dVar10, 0);
        fVar14 = *(float *)pdVar3;
        fVar8 = *(float *)pdVar2;
        dVar10 = (double)CONCAT44((int)((u64)dVar10 >> 0x20), fVar8);
        fVar9 = fVar14;
        dVar7 = *pdVar3;
    } else {
        *pdVar1 = dVar15;
        fVar14 = (float)((u64)*pdVar3 >> 0x20);
        dVar15 = *pdVar2;
        fVar9 = SUB84(dVar15, 0);
        fVar8 = (float)((u64)dVar15 >> 0x20);
        dVar7 = dVar15;
    }
    if (cVar17 == '\0') {
        fVar8 = SUB84(dVar10, 0) * fVar8;
    } else {
        fVar8 = SUB84(dVar10 * dVar7, 0);
    }
    if (cVar18 == '\0') {
        dVar10 = (double)CONCAT44(*(u32 *)pdVar1, *(u32 *)a3);
    } else {
        dVar10 = *pdVar1;
        in_xd4 = *a3;
    }
    if (cVar17 == '\0') {
        fVar8 = fVar14 * fVar9 + fVar8;
    }
    fVar9 = (float)((u64)dVar10 >> 0x20);
    fVar14 = SUB84(dVar10, 0);
    dVar7 = in_xd4;
    if (cVar18 == '\0') {
        dVar10 = (double)((u64)(u32)fVar9 << 0x20);
        dVar7 = (double)CONCAT44(fVar14, fVar8);
    }
    if (cVar17 == '\0') {
        dVar7 = (double)CONCAT44((int)((u64)dVar7 >> 0x20), (float)((u64)dVar10 >> 0x20) * fVar9 + SUB84(dVar7, 0));
    }
    fVar8 = fVar14;
    if (cVar18 != '\0') {
        fVar8 = (float)((u64)in_xd4 >> 0x20);
    }
    if (cVar17 == '\0') {
        dVar7 = (double)CONCAT44((int)((u64)dVar7 >> 0x20), fVar8 * fVar14 + SUB84(dVar7, 0));
    }
    dVar10 = dVar15;
    if (cVar18 == '\0') {
        dVar10 = (double)CONCAT44(SUB84(dVar7, 0), fVar14);
    }
    if (cVar17 == '\0') {
        dVar10 = (double)CONCAT44(SQRT((float)((u64)dVar10 >> 0x20)), SUB84(dVar10, 0));
    } else {
        dVar10 = SQRT(dVar10);
    }
    if (cVar18 == '\0') {
        dVar7 = (double)CONCAT44((int)((u64)dVar7 >> 0x20), (int)((u64)dVar10 >> 0x20));
        in_fr9 = SUB84(dVar10, 0);
        dVar10 = dVar15;
    }
    if (cVar17 == '\0') {
        fVar8 = 1.0 / SUB84(dVar7, 0);
        dVar15 = (double)CONCAT44(fVar8, in_fr9);
        dVar7 = (double)CONCAT44((float)((u64)dVar7 >> 0x20) * fVar8, SUB84(dVar7, 0));
    } else {
        dVar15 = (double)CONCAT44(0x3f800000, in_fr9) / dVar7;
        fVar8 = (float)((u64)dVar15 >> 0x20);
        dVar7 = dVar7 * dVar15;
    }
    uVar12 = (u32)((u64)dVar7 >> 0x20);
    if (cVar18 == '\0') {
        *(u32 *)a3 = uVar12;
        dVar7 = (double)CONCAT44(uVar12, *(float *)pdVar3);
    } else {
        *a3 = dVar7;
        dVar10 = *pdVar3;
    }
    if (cVar17 == '\0') {
        fVar14 = SUB84(dVar7, 0) * fVar8;
    } else {
        fVar14 = SUB84(dVar7 * dVar15, 0);
    }
    if (cVar18 == '\0') {
        *(float *)pdVar3 = fVar14;
        dVar7 = (double)CONCAT44(*(float *)pdVar2, fVar14);
    } else {
        *pdVar3 = dVar10;
        dVar7 = *pdVar2;
    }
    if (cVar17 == '\0') {
        dVar7 = (double)CONCAT44((float)((u64)dVar7 >> 0x20) * fVar8, SUB84(dVar7, 0));
    } else {
        dVar7 = dVar7 * dVar15;
    }
    fVar14 = (float)((u64)dVar7 >> 0x20);
    if (cVar18 == '\0') {
        *(float *)pdVar2 = fVar14;
        dVar7 = (double)CONCAT44(fVar14, *(u32 *)pdVar1);
    } else {
        *pdVar2 = dVar7;
        dVar10 = *pdVar1;
    }
    if (cVar17 == '\0') {
        fVar8 = SUB84(dVar7, 0) * fVar8;
    } else {
        fVar8 = SUB84(dVar7 * dVar15, 0);
    }
    if (cVar18 == '\0') {
        *(float *)pdVar1 = fVar8;
    } else {
        *pdVar1 = dVar10;
    }
    return 0x10;
}

/*
 * gfxlib_uses_switch_jump_21c2ea  0x8c21c2ea
 * area name: in the gfxlib library code range; behaviour name: its main named callee is switch_jump
 */
u32 gfxlib_uses_switch_jump_21c2ea(int a0, int a1, u32 a2, u64 *a3) {
    int iVar1;
    int *piVar2;
    int *piVar3;
    double in_dr0;
    float fVar4;
    float fVar5;
    float fVar6;
    double dVar7;
    u32 in_fr5;
    u32 uVar8;
    double in_xd0;
    u64 in_xd2;
    u64 uVar9;
    u64 in_xd4;
    u32 in_PR;
    char cVar10;
    char cVar11;
    u8 auStack_14[8];
    u32 uStack_c;

    fVar6 = (float)((u64)in_xd4 >> 0x20);
    cVar11 = '\0';
    cVar10 = '\0';
    uStack_c = in_PR;
    switch_jump(8, auStack_14, &g_8c26d788);
    piVar3 = (int *)(a1 * 0x10 + a0);
    iVar1 = libgcc_divide_helper_0106dc(a1 + 1, a2);
    piVar2 = (int *)(a0 + iVar1 * 0x10);
    fVar4 = (float)(*piVar2 - *piVar3);
    dVar7 = (double)(u64)(u32)fVar4;
    uVar9 = in_xd2;
    if (cVar11 == '\0') {
        uVar9 = CONCAT44(fVar4, in_fr5);
    }
    uVar8 = (u32)((u64)uVar9 >> 0x20);
    if (cVar10 != '\0' || 0.0 <= fVar4) {
        if (cVar11 == '\0') {
            dVar7 = (double)(u64)uVar8;
            uVar9 = in_xd2;
        }
    } else {
        if (cVar11 == '\0') {
            dVar7 = (double)(u64)uVar8;
            in_dr0 = (double)CONCAT44((int)((u64)in_dr0 >> 0x20), 0x4f800000);
            uVar9 = in_xd2;
        } else {
            in_xd0 = -1.8629950226301174e-249;
        }
        if (cVar10 == '\0') {
            dVar7 = (double)(u64)(u32)(SUB84(dVar7, 0) + SUB84(in_dr0, 0));
        } else {
            dVar7 = dVar7 + in_dr0;
        }
    }
    if (cVar11 == '\0') {
        stack0xfffffff0 = CONCAT44(uStack_c, SUB84(dVar7, 0));
    } else {
        stack0xfffffff0 = uVar9;
    }
    iVar1 = *piVar3;
    fVar4 = (float)iVar1;
    dVar7 = (double)CONCAT44((int)((u64)dVar7 >> 0x20), fVar4);
    if (iVar1 < 0) {
        if (cVar10 == '\0') {
            dVar7 = (double)CONCAT44(0x4f800000, fVar4 + 4.2949673e+09);
        } else {
            dVar7 = (double)CONCAT44(0x4f800000, fVar4) + (double)CONCAT44(0x4f800000, fVar4);
        }
    }
    if (cVar11 == '\0') {
        in_dr0 = (double)CONCAT44((int)((u64)in_dr0 >> 0x20), g_8c4aad54);
    } else {
        in_xd0 = (double)CONCAT44(g_8c4aad58, g_8c4aad54);
    }
    if (cVar10 == '\0') {
        fVar4 = SUB84(in_dr0, 0) - SUB84(dVar7, 0);
    } else {
        fVar4 = SUB84(in_dr0 - dVar7, 0);
    }
    iVar1 = (u32)(0 < *piVar2 - iVar1) * 4;
    if (cVar11 == '\0') {
        dVar7 = (double)CONCAT44((int)((u64)dVar7 >> 0x20), *(u32 *)(auStack_14 + iVar1));
        in_xd0 = (double)CONCAT44(fVar4, 0x3f800000);
    } else {
        uVar9 = *(u64 *)(auStack_14 + iVar1);
    }
    if (cVar10 == '\0') {
        in_xd0 = (double)CONCAT44((float)((u64)in_xd0 >> 0x20) / SUB84(dVar7, 0), SUB84(in_xd0, 0));
    } else {
        in_xd0 = in_xd0 / dVar7;
    }
    if (cVar11 == '\0') {
        dVar7 = (double)CONCAT44(piVar3[1], piVar2[1]);
    } else {
        uVar9 = *(u64 *)(piVar2 + 1);
        dVar7 = *(double *)(piVar3 + 1);
    }
    if (cVar10 == '\0') {
        fVar4 = (float)((u64)in_xd0 >> 0x20);
        in_xd0 = (double)CONCAT44(fVar4, SUB84(in_xd0, 0) - fVar4);
        dVar7 = (double)CONCAT44((int)((u64)dVar7 >> 0x20), SUB84(dVar7, 0) * fVar4);
    } else {
        in_xd0 = in_xd0 - in_xd0;
        fVar4 = (float)((u64)in_xd0 >> 0x20);
        dVar7 = dVar7 * in_xd0;
    }
    if (cVar11 == '\0') {
        fVar6 = SUB84(in_xd0, 0);
    }
    if (cVar10 == '\0') {
        dVar7 = (double)(u64)(u32)(fVar6 * (float)((u64)dVar7 >> 0x20) + SUB84(dVar7, 0));
    }
    if (cVar11 == '\0') {
        *(int *)a3 = SUB84(dVar7, 0);
        dVar7 = (double)CONCAT44(piVar3[2], piVar2[2]);
    } else {
        *a3 = uVar9;
        uVar9 = *(u64 *)(piVar2 + 2);
        dVar7 = *(double *)(piVar3 + 2);
    }
    if (cVar10 == '\0') {
        fVar5 = fVar6 * (float)((u64)dVar7 >> 0x20) + SUB84(dVar7, 0) * fVar4;
    } else {
        fVar5 = SUB84(dVar7 * in_xd0, 0);
    }
    if (cVar11 == '\0') {
        *(float *)((int)a3 + 4) = fVar5;
        dVar7 = (double)CONCAT44(piVar3[3], piVar2[3]);
    } else {
        *(u64 *)((int)a3 + 4) = uVar9;
        uVar9 = *(u64 *)(piVar2 + 3);
        dVar7 = *(double *)(piVar3 + 3);
    }
    if (cVar10 == '\0') {
        fVar6 = fVar6 * (float)((u64)dVar7 >> 0x20) + SUB84(dVar7, 0) * fVar4;
    } else {
        fVar6 = SUB84(dVar7 * in_xd0, 0);
    }
    if (cVar11 == '\0') {
        *(float *)(a3 + 1) = fVar6;
    } else {
        a3[1] = uVar9;
    }
    return 8;
}

/*
 * gfxlib_uses_switch_jump_21c398  0x8c21c398
 * area name: in the gfxlib library code range; behaviour name: its main named callee is switch_jump
 */
int gfxlib_uses_switch_jump_21c398(int a0, int a1, u32 a2, int *a3) {
    int iVar1;
    u32 uVar2;
    int *piVar3;
    int *piVar4;
    double in_dr0;
    float fVar5;
    float fVar6;
    double dVar7;
    double dVar8;
    u32 in_fr5;
    u64 uVar9;
    double in_xd0;
    u64 in_xd2;
    u64 uVar10;
    u64 in_xd4;
    u32 in_PR;
    char cVar11;
    char cVar12;
    u32 uStack_14;
    u64 uStack_10;

    fVar5 = (float)((u64)in_xd4 >> 0x20);
    cVar12 = '\0';
    cVar11 = '\0';
    uStack_10._4_4_ = in_PR;
    switch_jump(8, &uStack_14, &g_8c26d790);
    piVar4 = (int *)(a1 * 0x10 + a0);
    iVar1 = libgcc_divide_helper_0106dc(a1 + 1, a2);
    piVar3 = (int *)(a0 + iVar1 * 0x10);
    fVar6 = (float)(*piVar3 - *piVar4);
    dVar7 = (double)(u64)(u32)fVar6;
    uVar9 = in_xd2;
    if (cVar12 == '\0') {
        uVar9 = CONCAT44(fVar6, in_fr5);
    }
    uVar2 = (u32)((u64)uVar9 >> 0x20);
    uVar10 = uVar9;
    if (cVar11 != '\0' || 0.0 <= fVar6) {
        if (cVar12 == '\0') {
            dVar7 = (double)(u64)uVar2;
            uVar10 = in_xd2;
        }
    } else {
        if (cVar12 == '\0') {
            dVar7 = (double)(u64)uVar2;
            in_dr0 = (double)CONCAT44((int)((u64)in_dr0 >> 0x20), 0x4f800000);
            uVar10 = in_xd2;
        } else {
            in_xd0 = -1.8629950226301174e-249;
        }
        if (cVar11 == '\0') {
            dVar7 = (double)(u64)(u32)(SUB84(dVar7, 0) + SUB84(in_dr0, 0));
        } else {
            dVar7 = dVar7 + in_dr0;
        }
    }
    if (cVar12 == '\0') {
        uStack_10 = CONCAT44(uStack_10._4_4_, SUB84(dVar7, 0));
    } else {
        uStack_10 = uVar10;
    }
    iVar1 = *piVar4;
    fVar6 = (float)iVar1;
    dVar7 = (double)CONCAT44((int)((u64)dVar7 >> 0x20), fVar6);
    if (iVar1 < 0) {
        if (cVar11 == '\0') {
            dVar7 = (double)CONCAT44(0x4f800000, fVar6 + 4.2949673e+09);
        } else {
            dVar7 = (double)CONCAT44(0x4f800000, fVar6) + (double)CONCAT44(0x4f800000, fVar6);
        }
    }
    if (cVar12 == '\0') {
        in_dr0 = (double)CONCAT44((int)((u64)in_dr0 >> 0x20), g_8c4aad54);
    } else {
        in_xd0 = (double)CONCAT44(g_8c4aad58, g_8c4aad54);
    }
    if (cVar11 == '\0') {
        fVar6 = SUB84(in_dr0, 0) - SUB84(dVar7, 0);
    } else {
        fVar6 = SUB84(in_dr0 - dVar7, 0);
    }
    uVar2 = (u32)(0 < *piVar3 - iVar1);
    if (cVar12 == '\0') {
        dVar7 = (double)CONCAT44((int)((u64)dVar7 >> 0x20), (&uStack_14)[uVar2]);
        in_xd0 = (double)CONCAT44(fVar6, (int)uVar9);
    }
    if (cVar11 == '\0') {
        fVar6 = (float)((u64)in_xd0 >> 0x20) / SUB84(dVar7, 0);
    } else {
        fVar6 = (float)((u64)(in_xd0 / dVar7) >> 0x20);
    }
    if (cVar11 == '\0') {
        dVar7 = (double)CONCAT44(fVar6, 1.0 - fVar6);
        dVar8 = (double)CONCAT44((float)piVar3[1] * fVar6, (float)piVar4[1]);
    } else {
        dVar7 = (double)CONCAT44(fVar6, 0x3f800000) - (double)CONCAT44(fVar6, 0x3f800000);
        fVar6 = (float)((u64)dVar7 >> 0x20);
        dVar8 = (double)piVar3[1] * dVar7;
    }
    if (cVar12 == '\0') {
        fVar5 = SUB84(dVar7, 0);
    }
    if (cVar11 == '\0') {
        iVar1 = (int)(fVar5 * SUB84(dVar8, 0) + (float)((u64)dVar8 >> 0x20));
    } else {
        iVar1 = (int)dVar8;
    }
    *a3 = iVar1;
    if (cVar11 == '\0') {
        iVar1 = (int)(fVar5 * (float)piVar4[2] + (float)piVar3[2] * fVar6);
    } else {
        iVar1 = (int)((double)piVar3[2] * dVar7);
    }
    a3[1] = iVar1;
    if (cVar11 == '\0') {
        iVar1 = (int)(fVar5 * (float)piVar4[3] + (float)piVar3[3] * fVar6);
    } else {
        iVar1 = (int)((double)piVar3[3] * dVar7);
    }
    a3[2] = iVar1;
    return uVar2 * 4;
}

/*
 * gfxlib_uses_libgcc_divide_helper_21c47c  0x8c21c47c
 * area name: in the gfxlib library code range; behaviour name: its main named callee is libgcc_divide_helper_0106dc
 */
u32 gfxlib_uses_libgcc_divide_helper_21c47c(int a0, int a1, int a2, double *a3) {
    double dVar1;
    int iVar2;
    int iVar3;
    int iVar4;
    int *piVar5;
    int *piVar6;
    double in_dr0;
    double dVar7;
    float fVar8;
    float fVar9;
    u32 uVar10;
    double dVar11;
    double dVar12;
    u64 uVar13;
    u32 in_fr5;
    u32 uVar15;
    float fVar16;
    double dVar14;
    float fVar17;
    double in_dr6;
    u32 in_fr9;
    double dVar18;
    double dVar19;
    u32 in_fr11;
    double dVar20;
    float fVar21;
    double in_xd0;
    double in_xd2;
    double dVar22;
    double in_xd4;
    double in_xd6;
    double in_xd8;
    double in_xd10;
    u32 in_PR;
    char cVar23;
    char cVar24;
    u8 auStack_1c[8];
    u32 uStack_14;

    cVar24 = '\0';
    cVar23 = '\0';
    uStack_14 = in_PR;
    switch_jump(8, auStack_1c, &g_8c26d798);
    iVar2 = libgcc_divide_helper_0106dc(a1 + a2 + -1, a2);
    iVar4 = iVar2 * 0x10 + a0;
    piVar5 = (int *)(a1 * 0x10 + a0);
    iVar2 = libgcc_divide_helper_0106dc(a1 + 1, a2);
    piVar6 = (int *)(iVar2 * 0x10 + a0);
    iVar2 = libgcc_divide_helper_0106dc(a1 + 2, a2);
    iVar2 = a0 + iVar2 * 0x10;
    fVar8 = (float)(*piVar6 - *piVar5);
    dVar11 = (double)(u64)(u32)fVar8;
    dVar20 = in_xd2;
    if (cVar24 == '\0') {
        dVar20 = (double)CONCAT44(fVar8, in_fr5);
    }
    uVar15 = (u32)((u64)dVar20 >> 0x20);
    dVar22 = dVar20;
    if (cVar23 != '\0' || 0.0 <= fVar8) {
        if (cVar24 == '\0') {
            dVar11 = (double)(u64)uVar15;
            dVar22 = in_xd2;
        }
    } else {
        if (cVar24 == '\0') {
            dVar11 = (double)(u64)uVar15;
            in_dr0 = (double)CONCAT44((int)((u64)in_dr0 >> 0x20), 0x4f800000);
            dVar22 = in_xd2;
        } else {
            in_xd0 = -1.8629950226301174e-249;
        }
        if (cVar23 == '\0') {
            dVar11 = (double)(u64)(u32)(SUB84(dVar11, 0) + SUB84(in_dr0, 0));
        } else {
            dVar11 = dVar11 + in_dr0;
        }
    }
    if (cVar24 == '\0') {
        stack0xffffffe8 = (double)CONCAT44(uStack_14, SUB84(dVar11, 0));
    } else {
        stack0xffffffe8 = dVar22;
    }
    iVar3 = *piVar5;
    fVar8 = (float)iVar3;
    dVar11 = (double)CONCAT44((int)((u64)dVar11 >> 0x20), fVar8);
    if (iVar3 < 0) {
        if (cVar23 == '\0') {
            dVar11 = (double)CONCAT44(0x4f800000, fVar8 + 4.2949673e+09);
        } else {
            dVar11 = (double)CONCAT44(0x4f800000, fVar8) + (double)CONCAT44(0x4f800000, fVar8);
        }
    }
    if (cVar24 == '\0') {
        in_dr0 = (double)CONCAT44((int)((u64)in_dr0 >> 0x20), g_8c4aad54);
    } else {
        in_xd0 = (double)CONCAT44(g_8c4aad58, g_8c4aad54);
    }
    if (cVar23 == '\0') {
        fVar8 = SUB84(in_dr0, 0) - SUB84(dVar11, 0);
    } else {
        fVar8 = SUB84(in_dr0 - dVar11, 0);
    }
    iVar3 = (u32)(0 < *piVar6 - iVar3) * 4;
    if (cVar24 == '\0') {
        dVar11 = (double)CONCAT44((int)((u64)dVar11 >> 0x20), *(u32 *)(auStack_1c + iVar3));
        in_xd0 = (double)CONCAT44(fVar8, SUB84(dVar20, 0));
    } else {
        dVar22 = *(double *)(auStack_1c + iVar3);
    }
    if (cVar23 == '\0') {
        in_xd0 = (double)CONCAT44((float)((u64)in_xd0 >> 0x20) / SUB84(dVar11, 0), SUB84(in_xd0, 0));
    } else {
        in_xd0 = in_xd0 / dVar11;
    }
    uVar10 = (u32)((u64)dVar11 >> 0x20);
    dVar11 = (double)CONCAT44(uVar10, 0x3f800000);
    if (cVar23 == '\0') {
        dVar11 = (double)CONCAT44(uVar10, 0x40000000);
    } else {
        dVar11 = dVar11 + dVar11;
    }
    if (cVar24 == '\0') {
        dVar20 = (double)CONCAT44(0x3f000000, in_fr11);
        uVar10 = (u32)((u64)in_xd0 >> 0x20);
        in_xd0 = (double)CONCAT44(uVar10, uVar10);
    } else {
        dVar20 = 0.1250000293366611;
        in_xd4 = in_xd0;
    }
    if (cVar23 == '\0') {
        fVar16 = (float)((u64)in_xd0 >> 0x20);
        in_xd0 = (double)CONCAT44(fVar16, SUB84(in_xd0, 0) * fVar16);
    } else {
        in_xd0 = in_xd0 * in_xd0;
    }
    fVar9 = (float)((u64)in_xd0 >> 0x20);
    fVar16 = SUB84(in_xd0, 0);
    dVar18 = in_xd4;
    dVar14 = in_xd0;
    if (cVar24 == '\0') {
        in_dr6 = (double)CONCAT44((int)((u64)in_dr6 >> 0x20), fVar9);
        dVar18 = (double)CONCAT44(fVar16, in_fr9);
        dVar14 = in_xd6;
    }
    if (cVar23 == '\0') {
        dVar18 = (double)CONCAT44((float)((u64)dVar18 >> 0x20) * SUB84(dVar11, 0), SUB84(dVar18, 0));
        in_dr6 = (double)CONCAT44((int)((u64)in_dr6 >> 0x20), SUB84(in_dr6, 0) * fVar16);
    } else {
        dVar18 = dVar18 * dVar11;
        in_dr6 = in_dr6 * in_xd0;
    }
    uVar10 = (u32)((u64)dVar18 >> 0x20);
    dVar12 = dVar18;
    if (cVar24 == '\0') {
        dVar12 = (double)CONCAT44(uVar10, SUB84(dVar11, 0));
    }
    if (cVar23 == '\0') {
        dVar12 = (double)CONCAT44((float)((u64)dVar12 >> 0x20) - fVar9, SUB84(dVar12, 0));
    } else {
        dVar12 = dVar12 - in_xd0;
    }
    fVar17 = SUB84(in_dr6, 0);
    dVar11 = dVar14;
    if (cVar24 == '\0') {
        dVar20 = (double)CONCAT44((int)((u64)dVar20 >> 0x20), fVar17);
        dVar11 = in_xd10;
    }
    if (cVar23 == '\0') {
        dVar12 = (double)CONCAT44((float)((u64)dVar12 >> 0x20) - fVar17, SUB84(dVar12, 0));
    } else {
        dVar12 = dVar12 - in_dr6;
    }
    dVar7 = dVar12;
    if (cVar24 == '\0') {
        dVar18 = (double)CONCAT44(uVar10, (int)((u64)dVar12 >> 0x20));
        dVar7 = in_xd8;
    }
    fVar21 = (float)((u64)dVar20 >> 0x20);
    if (cVar23 == '\0') {
        dVar18 = (double)CONCAT44((int)((u64)dVar18 >> 0x20), SUB84(dVar18, 0) * fVar21);
    } else {
        dVar18 = dVar18 * dVar20;
    }
    if (cVar24 == '\0') {
        dVar12 = (double)CONCAT44(0x3fc00000, SUB84(dVar12, 0));
        fVar8 = 2.5;
    } else {
        dVar12 = 8.000001899898052;
    }
    if (cVar23 == '\0') {
        dVar20 = (double)CONCAT44(fVar21, SUB84(dVar20, 0) * (float)((u64)dVar12 >> 0x20));
    } else {
        dVar20 = dVar20 * dVar12;
    }
    if (cVar24 == '\0') {
        in_xd4 = (double)CONCAT44(fVar16, fVar8);
    }
    fVar8 = (float)((u64)dVar20 >> 0x20);
    if (cVar23 == '\0') {
        in_xd4 = (double)CONCAT44((float)((u64)in_xd4 >> 0x20) * SUB84(in_xd4, 0), SUB84(in_xd4, 0));
        in_xd0 = (double)CONCAT44(fVar9 * fVar8, fVar16);
    } else {
        in_xd4 = in_xd4 * in_xd4;
        in_xd0 = in_xd0 * dVar20;
    }
    if (cVar24 == '\0') {
        dVar12 = (double)((u64)dVar20 & 0xffffffff);
        dVar11 = dVar22;
    }
    if (cVar23 == '\0') {
        fVar17 = fVar17 - SUB84(in_xd0, 0);
    } else {
        fVar17 = SUB84(in_dr6 - in_xd0, 0);
    }
    if (cVar24 == '\0') {
        dVar22 = (double)CONCAT44(*(u32 *)(iVar4 + 4), SUB84(dVar12, 0));
    } else {
        dVar22 = *(double *)(iVar4 + 4);
    }
    if (cVar23 == '\0') {
        dVar22 = (double)CONCAT44((int)((u64)dVar22 >> 0x20), SUB84(dVar22, 0) - (float)((u64)in_xd4 >> 0x20));
    } else {
        dVar22 = dVar22 - in_xd4;
    }
    if (cVar23 == '\0') {
        in_xd0 = (double)CONCAT44((float)((u64)in_xd0 >> 0x20) - SUB84(dVar20, 0), SUB84(in_xd0, 0));
    } else {
        in_xd0 = in_xd0 - dVar20;
    }
    dVar12 = dVar11;
    if (cVar24 == '\0') {
        dVar12 = (double)CONCAT44(SUB84(dVar22, 0), fVar17);
    }
    if (cVar23 == '\0') {
        dVar12 = (double)CONCAT44((float)((u64)dVar12 >> 0x20) + 1.0, SUB84(dVar12, 0));
    } else {
        dVar12 = dVar12 + (double)CONCAT44(0x3f800000, SUB84(in_xd4, 0));
    }
    dVar19 = in_xd0;
    if (cVar24 == '\0') {
        dVar22 = (double)CONCAT44((int)((u64)dVar22 >> 0x20), (int)((u64)dVar18 >> 0x20));
        dVar19 = (double)CONCAT44((int)((u64)in_xd0 >> 0x20), SUB84(dVar18, 0));
        dVar18 = dVar11;
    }
    if (cVar23 == '\0') {
        dVar19 = (double)CONCAT44((float)((u64)dVar19 >> 0x20) + SUB84(dVar22, 0), SUB84(dVar19, 0));
    } else {
        dVar19 = dVar19 + dVar22;
    }
    fVar16 = (float)((u64)dVar12 >> 0x20);
    if (cVar24 == '\0') {
        dVar11 = (double)CONCAT44(piVar5[1], SUB84(in_xd4, 0));
        dVar22 = (double)CONCAT44((int)((u64)dVar22 >> 0x20), fVar16);
    } else {
        dVar11 = *(double *)(piVar5 + 1);
        dVar18 = dVar12;
    }
    if (cVar23 == '\0') {
        dVar22 = (double)CONCAT44((int)((u64)dVar22 >> 0x20), SUB84(dVar22, 0) * (float)((u64)dVar11 >> 0x20));
    } else {
        dVar22 = dVar22 * dVar11;
    }
    dVar1 = dVar7;
    if (cVar24 == '\0') {
        dVar14 = (double)CONCAT44(SUB84(dVar12, 0), SUB84(in_xd0, 0));
        dVar1 = (double)CONCAT44(SUB84(dVar19, 0), SUB84(dVar11, 0));
    }
    if (cVar23 == '\0') {
        dVar14 = (double)CONCAT44((float)((u64)dVar14 >> 0x20) * fVar8, SUB84(dVar14, 0));
        dVar22 = (double)(u64)(u32)((float)((u64)dVar1 >> 0x20) * (float)((u64)dVar22 >> 0x20) + SUB84(dVar22, 0));
    } else {
        dVar14 = dVar14 * dVar20;
    }
    uVar15 = (u32)((u64)dVar19 >> 0x20);
    if (cVar24 == '\0') {
        uVar13 = CONCAT44(piVar6[1], SUB84(dVar22, 0));
        dVar11 = (double)CONCAT44(uVar15, SUB84(dVar1, 0));
    } else {
        uVar13 = *(u64 *)(piVar6 + 1);
        dVar11 = dVar19;
    }
    if (cVar23 == '\0') {
        uVar13 = (u64)(u32)((float)((u64)dVar11 >> 0x20) * (float)(uVar13 >> 0x20) + (float)uVar13);
    }
    fVar8 = (float)((u64)dVar14 >> 0x20);
    if (cVar24 == '\0') {
        dVar20 = (double)CONCAT44(*(u32 *)(iVar2 + 4), (int)uVar13);
        dVar11 = (double)CONCAT44(fVar8, SUB84(dVar11, 0));
    } else {
        dVar20 = *(double *)(iVar2 + 4);
        dVar11 = dVar14;
    }
    if (cVar23 == '\0') {
        fVar9 = (float)((u64)dVar20 >> 0x20);
        dVar20 = (double)CONCAT44(fVar9, (float)((u64)dVar11 >> 0x20) * fVar9 + SUB84(dVar20, 0));
    }
    if (cVar24 == '\0') {
        *(int *)a3 = SUB84(dVar20, 0);
        dVar11 = (double)CONCAT44(piVar5[2], SUB84(dVar11, 0));
        dVar20 = (double)CONCAT44((int)((u64)dVar20 >> 0x20), fVar16);
    } else {
        *a3 = dVar18;
        dVar11 = *(double *)(piVar5 + 2);
        dVar18 = dVar12;
    }
    if (cVar23 == '\0') {
        fVar9 = SUB84(dVar20, 0) * (float)((u64)dVar11 >> 0x20);
    } else {
        fVar9 = SUB84(dVar20 * dVar11, 0);
    }
    if (cVar24 == '\0') {
        uVar13 = CONCAT44(*(u32 *)(iVar4 + 8), fVar9);
        dVar11 = (double)CONCAT44(SUB84(dVar19, 0), SUB84(dVar11, 0));
    } else {
        uVar13 = *(u64 *)(iVar4 + 8);
        dVar11 = dVar7;
    }
    if (cVar23 == '\0') {
        uVar13 = (u64)(u32)((float)((u64)dVar11 >> 0x20) * (float)(uVar13 >> 0x20) + (float)uVar13);
    }
    if (cVar24 == '\0') {
        uVar13 = CONCAT44(piVar6[2], (int)uVar13);
        dVar11 = (double)CONCAT44(uVar15, SUB84(dVar11, 0));
    } else {
        uVar13 = *(u64 *)(piVar6 + 2);
        dVar11 = dVar19;
    }
    if (cVar23 == '\0') {
        uVar13 = (u64)(u32)((float)((u64)dVar11 >> 0x20) * (float)(uVar13 >> 0x20) + (float)uVar13);
    }
    if (cVar24 == '\0') {
        uVar13 = CONCAT44(*(u32 *)(iVar2 + 8), (int)uVar13);
        dVar14 = (double)CONCAT44(fVar8, SUB84(dVar11, 0));
    } else {
        uVar13 = *(u64 *)(iVar2 + 8);
    }
    if (cVar23 == '\0') {
        uVar13 = (u64)(u32)((float)((u64)dVar14 >> 0x20) * (float)(uVar13 >> 0x20) + (float)uVar13);
    }
    uVar10 = (u32)uVar13;
    if (cVar24 == '\0') {
        *(u32 *)((int)a3 + 4) = uVar10;
        dVar11 = (double)CONCAT44(piVar5[3], SUB84(dVar14, 0));
        uVar10 = *(u32 *)(iVar4 + 0xc);
    } else {
        *(double *)((int)a3 + 4) = dVar18;
        dVar11 = *(double *)(piVar5 + 3);
        dVar18 = *(double *)(iVar4 + 0xc);
    }
    if (cVar23 == '\0') {
        dVar12 = (double)CONCAT44(fVar16 * (float)((u64)dVar11 >> 0x20), SUB84(dVar12, 0));
    } else {
        dVar12 = dVar12 * dVar11;
    }
    if (cVar24 == '\0') {
        dVar7 = (double)((s64)dVar19 << 0x20);
        uVar13 = CONCAT44(piVar6[3], uVar10);
    } else {
        uVar13 = *(u64 *)(piVar6 + 3);
    }
    if (cVar23 == '\0') {
        dVar12 = (double)CONCAT44((float)((u64)dVar7 >> 0x20) * (float)uVar13 + (float)((u64)dVar12 >> 0x20),
                                  SUB84(dVar12, 0));
    }
    if (cVar24 == '\0') {
        dVar19 = (double)((u64)uVar15 << 0x20);
        uVar13 = CONCAT44((int)(uVar13 >> 0x20), (int)((u64)dVar12 >> 0x20));
        dVar12 = dVar18;
    }
    if (cVar23 == '\0') {
        uVar13 = (u64)(u32)((float)((u64)dVar19 >> 0x20) * (float)(uVar13 >> 0x20) + (float)uVar13);
    }
    if (cVar24 == '\0') {
        uVar13 = CONCAT44(*(u32 *)(iVar2 + 0xc), (int)uVar13);
    } else {
        uVar13 = *(u64 *)(iVar2 + 0xc);
    }
    if (cVar23 == '\0') {
        uVar13 = (u64)(u32)(fVar8 * (float)(uVar13 >> 0x20) + (float)uVar13);
    }
    if (cVar24 == '\0') {
        *(int *)(a3 + 1) = (int)uVar13;
    } else {
        a3[1] = dVar12;
    }
    return 8;
}

/*
 * gfxlib_uses_libgcc_divide_helper_21c5ca  0x8c21c5ca
 * area name: in the gfxlib library code range; behaviour name: its main named callee is libgcc_divide_helper_0106dc
 */
u32 *gfxlib_uses_libgcc_divide_helper_21c5ca(int a0, int a1, int a2, int *a3) {
    int iVar1;
    int iVar2;
    int iVar3;
    int *piVar4;
    int *piVar5;
    u64 *puVar6;
    double in_dr0;
    double dVar7;
    double dVar8;
    float fVar9;
    double dVar10;
    u32 uVar12;
    double dVar11;
    float fVar13;
    u32 in_fr5;
    u32 uVar14;
    float fVar15;
    float fVar16;
    double in_dr6;
    float fVar17;
    u32 in_fr9;
    double dVar18;
    double dVar19;
    u32 in_fr11;
    double dVar20;
    u32 uVar21;
    u64 in_dr12;
    float fVar22;
    double in_xd0;
    double in_xd2;
    double dVar23;
    double in_xd4;
    double in_xd6;
    double in_xd8;
    double in_xd10;
    u32 in_PR;
    u32 auStack_24[3];
    u64 uStack_18;

    puVar6 = (u64 *)((int)&uStack_18 + 4);
    uStack_18 = CONCAT44((int)((u64)in_dr12 >> 0x20), (u32)uStack_18);

    *(u32 *)((int)puVar6 + -4) = in_PR;
    switch_jump(8, (u8 *)((int)puVar6 + -0xc), &g_8c26d7a0);
    uVar21 = (u32)in_dr12;
    iVar1 = libgcc_divide_helper_0106dc(a1 + a2 + -1, a2);
    iVar3 = iVar1 * 0x10 + a0;
    piVar4 = (int *)(a1 * 0x10 + a0);
    iVar1 = libgcc_divide_helper_0106dc(a1 + 1, a2);
    piVar5 = (int *)(iVar1 * 0x10 + a0);
    iVar1 = libgcc_divide_helper_0106dc(a1 + 2, a2);
    iVar1 = a0 + iVar1 * 0x10;
    fVar9 = (float)(*piVar5 - *piVar4);
    dVar10 = (double)(u64)(u32)fVar9;
    dVar20 = in_xd2;

    dVar20 = (double)CONCAT44(fVar9, in_fr5);

    uVar14 = (u32)((u64)dVar20 >> 0x20);
    dVar23 = dVar20;
    if (0.0 <= fVar9) {

        dVar10 = (double)(u64)uVar14;
        dVar23 = in_xd2;

    } else {

        dVar10 = (double)(u64)uVar14;
        in_dr0 = (double)CONCAT44((int)((u64)in_dr0 >> 0x20), 0x4f800000);
        dVar23 = in_xd2;

        dVar10 = (double)(u64)(u32)(SUB84(dVar10, 0) + SUB84(in_dr0, 0));
    }

    *(int *)((int)puVar6 + -8) = SUB84(dVar10, 0);

    iVar2 = *piVar4;
    fVar9 = (float)iVar2;
    dVar10 = (double)CONCAT44((int)((u64)dVar10 >> 0x20), fVar9);
    if (iVar2 < 0) {

        dVar10 = (double)CONCAT44(0x4f800000, fVar9 + 4.2949673e+09);
    }

    in_dr0 = (double)CONCAT44((int)((u64)in_dr0 >> 0x20), g_8c4aad54);

    fVar9 = SUB84(in_dr0, 0) - SUB84(dVar10, 0);

    iVar2 = (u32)(0 < *piVar5 - iVar2) * 4;

    dVar10 = (double)CONCAT44((int)((u64)dVar10 >> 0x20), *(u32 *)((int)puVar6 + iVar2 + -0xc));
    in_xd0 = (double)CONCAT44(fVar9, SUB84(dVar20, 0));

    in_xd0 = (double)CONCAT44((float)((u64)in_xd0 >> 0x20) / SUB84(dVar10, 0), SUB84(in_xd0, 0));

    uVar12 = (u32)((u64)dVar10 >> 0x20);
    dVar10 = (double)CONCAT44(uVar12, 0x3f800000);

    dVar10 = (double)CONCAT44(uVar12, 0x40000000);

    dVar20 = (double)CONCAT44(0x3f000000, in_fr11);
    uVar12 = (u32)((u64)in_xd0 >> 0x20);
    in_xd0 = (double)CONCAT44(uVar12, uVar12);

    fVar15 = (float)((u64)in_xd0 >> 0x20);
    in_xd0 = (double)CONCAT44(fVar15, SUB84(in_xd0, 0) * fVar15);

    fVar17 = (float)((u64)in_xd0 >> 0x20);
    fVar15 = SUB84(in_xd0, 0);
    dVar18 = in_xd4;
    dVar7 = in_xd0;

    in_dr6 = (double)CONCAT44((int)((u64)in_dr6 >> 0x20), fVar17);
    dVar18 = (double)CONCAT44(fVar15, in_fr9);
    dVar7 = in_xd6;

    dVar18 = (double)CONCAT44((float)((u64)dVar18 >> 0x20) * SUB84(dVar10, 0), SUB84(dVar18, 0));
    in_dr6 = (double)CONCAT44((int)((u64)in_dr6 >> 0x20), SUB84(in_dr6, 0) * fVar15);

    uVar12 = (u32)((u64)dVar18 >> 0x20);
    dVar11 = dVar18;

    dVar11 = (double)CONCAT44(uVar12, SUB84(dVar10, 0));

    dVar11 = (double)CONCAT44((float)((u64)dVar11 >> 0x20) - fVar17, SUB84(dVar11, 0));

    fVar16 = SUB84(in_dr6, 0);
    dVar10 = dVar7;

    dVar20 = (double)CONCAT44((int)((u64)dVar20 >> 0x20), fVar16);
    dVar10 = in_xd10;

    dVar11 = (double)CONCAT44((float)((u64)dVar11 >> 0x20) - fVar16, SUB84(dVar11, 0));

    dVar8 = dVar11;

    dVar18 = (double)CONCAT44(uVar12, (int)((u64)dVar11 >> 0x20));
    dVar8 = in_xd8;

    fVar22 = (float)((u64)dVar20 >> 0x20);

    dVar18 = (double)CONCAT44((int)((u64)dVar18 >> 0x20), SUB84(dVar18, 0) * fVar22);

    dVar11 = (double)CONCAT44(0x3fc00000, SUB84(dVar11, 0));

    fVar9 = 2.5;

    fVar13 = (float)((u64)dVar11 >> 0x20);

    dVar20 = (double)CONCAT44(fVar22, SUB84(dVar20, 0) * fVar13);

    in_xd4 = (double)CONCAT44(fVar15, fVar9);

    fVar9 = (float)((u64)dVar20 >> 0x20);

    in_xd4 = (double)CONCAT44((float)((u64)in_xd4 >> 0x20) * SUB84(in_xd4, 0), SUB84(in_xd4, 0));
    in_xd0 = (double)CONCAT44(fVar17 * fVar9, fVar15);

    dVar11 = (double)CONCAT44(fVar13, SUB84(dVar20, 0));
    dVar10 = dVar23;

    fVar16 = fVar16 - SUB84(in_xd0, 0);

    dVar11 = (double)CONCAT44((int)((u64)dVar11 >> 0x20), SUB84(dVar11, 0) - (float)((u64)in_xd4 >> 0x20));
    in_xd0 = (double)CONCAT44((float)((u64)in_xd0 >> 0x20) - SUB84(dVar20, 0), SUB84(in_xd0, 0));

    dVar23 = dVar10;

    dVar23 = (double)CONCAT44(SUB84(dVar11, 0), fVar16);

    dVar23 = (double)CONCAT44((float)((u64)dVar23 >> 0x20) + 1.0, SUB84(dVar23, 0));

    fVar15 = (float)((u64)dVar18 >> 0x20);
    dVar19 = in_xd0;

    dVar11 = (double)CONCAT44((int)((u64)dVar11 >> 0x20), fVar15);
    fVar15 = (float)((u64)dVar10 >> 0x20);
    dVar19 = (double)CONCAT44((int)((u64)in_xd0 >> 0x20), SUB84(dVar18, 0));

    dVar19 = (double)CONCAT44((float)((u64)dVar19 >> 0x20) + SUB84(dVar11, 0), SUB84(dVar19, 0));

    fVar17 = (float)((u64)dVar23 >> 0x20);
    dVar10 = dVar23;

    dVar10 = (double)CONCAT44(fVar17, uVar21);

    dVar18 = (double)CONCAT44((float)piVar5[1], (float)*(int *)(iVar1 + 4));

    dVar7 = (double)CONCAT44(SUB84(dVar23, 0), SUB84(in_xd0, 0));

    fVar9 = (float)((u64)dVar7 >> 0x20) * fVar9;

    fVar16 = (float)piVar4[1];
    dVar20 = (double)CONCAT44(fVar16, (float)*(int *)(iVar3 + 4));
    dVar10 = (double)CONCAT44((float)((u64)dVar10 >> 0x20) * fVar16, SUB84(dVar10, 0));

    uVar21 = SUB84(dVar19, 0);
    dVar7 = dVar8;

    dVar7 = (double)CONCAT44(uVar21, SUB84(dVar20, 0));

    fVar16 = (float)((u64)dVar19 >> 0x20);

    fVar22 = fVar9 * SUB84(dVar18, 0) + fVar16 * (float)((u64)dVar18 >> 0x20) +
             (float)((u64)dVar7 >> 0x20) * SUB84(dVar7, 0) + (float)((u64)dVar10 >> 0x20);
    dVar10 = (double)CONCAT44(fVar22, SUB84(dVar10, 0));
    iVar2 = (int)fVar22;

    dVar20 = dVar23;

    dVar20 = (double)CONCAT44(fVar17, SUB84(dVar10, 0));

    *a3 = iVar2;

    dVar10 = (double)CONCAT44((float)piVar5[2], (float)*(int *)(iVar1 + 8));

    fVar22 = (float)piVar4[2];
    dVar7 = (double)CONCAT44(fVar22, (float)*(int *)(iVar3 + 8));
    dVar20 = (double)CONCAT44((float)((u64)dVar20 >> 0x20) * fVar22, SUB84(dVar20, 0));

    dVar18 = dVar8;

    dVar18 = (double)CONCAT44(uVar21, SUB84(dVar7, 0));

    iVar2 = (int)(fVar9 * SUB84(dVar10, 0) + fVar16 * (float)((u64)dVar10 >> 0x20) +
                  (float)((u64)dVar18 >> 0x20) * SUB84(dVar18, 0) + (float)((u64)dVar20 >> 0x20));

    a3[1] = iVar2;

    fVar15 = (float)*(int *)(iVar1 + 0xc);

    dVar10 = (double)CONCAT44((float)piVar5[3], (float)*(int *)(iVar1 + 0xc));

    fVar22 = (float)piVar4[3];
    dVar20 = (double)CONCAT44(fVar22, (float)*(int *)(iVar3 + 0xc));
    fVar17 = fVar17 * fVar22;

    dVar8 = (double)CONCAT44(uVar21, SUB84(dVar20, 0));

    fVar17 = (float)((u64)dVar8 >> 0x20) * SUB84(dVar8, 0) + fVar17;

    dVar19 = (double)((u64)(u32)fVar16 << 0x20);
    dVar10 = (double)CONCAT44((int)((u64)dVar10 >> 0x20), fVar17);

    iVar1 = (int)(fVar9 * fVar15 + (float)((u64)dVar19 >> 0x20) * (float)((u64)dVar10 >> 0x20) + SUB84(dVar10, 0));

    a3[2] = iVar1;
    return &g_8c21c76c;
}

/*
 * gfxlib_uses_libgcc_divide_helper_21c774  0x8c21c774
 * area name: in the gfxlib library code range; behaviour name: its main named callee is libgcc_divide_helper_0106dc
 */
u32 gfxlib_uses_libgcc_divide_helper_21c774(int a0, int a1, int a2, int a3) {
    int iVar1;
    u32 uVar2;
    double *pdVar3;
    double *pdVar4;
    u32 uVar5;
    int *piVar6;
    int *piVar7;
    int *piVar8;
    int *piVar9;
    float fVar10;
    float fVar11;
    float fVar12;
    double in_dr0;
    double dVar13;
    double dVar14;
    float fVar15;
    float fVar16;
    float fVar17;
    double dVar18;
    double dVar19;
    double dVar20;
    u32 in_fr5;
    double dVar21;
    float fVar22;
    u32 in_fr7;
    double dVar23;
    double dVar24;
    double in_dr8;
    u32 uVar25;
    u32 in_fr11;
    double dVar26;
    u32 uVar29;
    double dVar27;
    double dVar28;
    float fVar30;
    float fVar31;
    double in_dr12;
    u32 uVar32;
    float fVar33;
    double in_dr14;
    double dVar34;
    double dVar35;
    u32 uVar36;
    double in_xd0;
    double in_xd2;
    double in_xd4;
    double in_xd6;
    double in_xd8;
    double dVar37;
    double in_xd10;
    double in_xd12;
    double in_xd14;
    bool bVar38;
    char cVar39;
    char cVar40;
    u32 uStack_5c;
    u32 uStack_58;
    float fStack_54;
    float fStack_50;
    u32 uStack_4c;
    float fStack_48;
    float fStack_44;
    float fStack_40;
    u32 uStack_3c;
    float fStack_38;
    float fStack_34;
    float fStack_30;
    float fStack_2c;
    float fStack_28;

    cVar40 = '\0';
    cVar39 = '\0';
    iVar1 = libgcc_divide_helper_0106dc(a1 + a2 + -1, a2);
    piVar7 = (int *)(iVar1 * 0x10 + a0);
    piVar9 = (int *)(a1 * 0x10 + a0);
    iVar1 = libgcc_divide_helper_0106dc(a1 + 1, a2);
    piVar8 = (int *)(iVar1 * 0x10 + a0);
    iVar1 = libgcc_divide_helper_0106dc(a1 + 2, a2);
    piVar6 = (int *)(iVar1 * 0x10 + a0);
    fVar16 = (float)*piVar8;
    if (*piVar8 < 0) {
        if (cVar39 == '\0') {
            fVar16 = fVar16 + 4.2949673e+09;
        } else {
            fVar16 = SUB84((double)CONCAT44(0x4f800000, fVar16) + (double)CONCAT44(0x4f800000, fVar16), 0);
        }
    }
    iVar1 = *piVar9;
    if (cVar39 == '\0') {
        dVar18 = (double)CONCAT44((float)iVar1, fVar16);
    } else {
        dVar18 = (double)iVar1;
    }
    if (iVar1 < 0) {
        if (cVar40 == '\0') {
            in_dr0 = (double)CONCAT44((int)((u64)in_dr0 >> 0x20), 0x4f800000);
        } else {
            in_xd0 = -1.8629950226301174e-249;
        }
        if (cVar39 == '\0') {
            dVar18 = (double)CONCAT44((float)((u64)dVar18 >> 0x20) + SUB84(in_dr0, 0), SUB84(dVar18, 0));
        } else {
            dVar18 = dVar18 + in_dr0;
        }
    }
    dVar21 = in_xd2;
    if (cVar40 == '\0') {
        dVar21 = (double)CONCAT44(SUB84(dVar18, 0), in_fr5);
    }
    fVar16 = (float)((u64)dVar18 >> 0x20);
    if (cVar39 == '\0') {
        dVar21 = (double)CONCAT44((float)((u64)dVar21 >> 0x20) - fVar16, SUB84(dVar21, 0));
    } else {
        dVar21 = dVar21 - dVar18;
    }
    if (cVar39 == '\0') {
        bVar38 = 0.0 < (float)((u64)dVar21 >> 0x20);
    } else {
        bVar38 = (double)((u64)(u32)fVar16 << 0x20) < dVar21;
    }
    dVar26 = (double)CONCAT44(0x3f800000, in_fr11);
    dVar18 = dVar21;
    if ((!bVar38) && (dVar18 = dVar26, cVar40 == '\0')) {
        dVar18 = (double)CONCAT44(0x3f800000, SUB84(dVar21, 0));
    }
    fVar16 = (float)*piVar6;
    if (*piVar6 < 0) {
        if (cVar39 == '\0') {
            fVar16 = fVar16 + 4.2949673e+09;
        } else {
            fVar16 = SUB84((double)CONCAT44(0x4f800000, fVar16) + (double)CONCAT44(0x4f800000, fVar16), 0);
        }
    }
    iVar1 = *piVar8;
    if (cVar39 == '\0') {
        dVar21 = (double)CONCAT44((float)iVar1, fVar16);
    } else {
        dVar21 = (double)iVar1;
    }
    if (iVar1 < 0) {
        if (cVar40 == '\0') {
            in_dr0 = (double)CONCAT44((int)((u64)in_dr0 >> 0x20), 0x4f800000);
        } else {
            in_xd0 = -1.8629950226301174e-249;
        }
        if (cVar39 == '\0') {
            dVar21 = (double)CONCAT44((float)((u64)dVar21 >> 0x20) + SUB84(in_dr0, 0), SUB84(dVar21, 0));
        } else {
            dVar21 = dVar21 + in_dr0;
        }
    }
    dVar23 = in_xd2;
    if (cVar40 == '\0') {
        dVar23 = (double)CONCAT44(SUB84(dVar21, 0), in_fr7);
    }
    fVar16 = (float)((u64)dVar21 >> 0x20);
    if (cVar39 == '\0') {
        dVar23 = (double)CONCAT44((float)((u64)dVar23 >> 0x20) - fVar16, SUB84(dVar23, 0));
    } else {
        dVar23 = dVar23 - dVar21;
    }
    if (cVar39 == '\0') {
        bVar38 = 0.0 < (float)((u64)dVar23 >> 0x20);
    } else {
        bVar38 = (double)((u64)(u32)fVar16 << 0x20) < dVar23;
    }
    dVar21 = dVar23;
    if ((!bVar38) && (dVar21 = dVar26, cVar40 == '\0')) {
        dVar21 = (double)CONCAT44(0x3f800000, SUB84(dVar23, 0));
    }
    fVar16 = (float)*piVar9;
    if (*piVar9 < 0) {
        if (cVar39 == '\0') {
            fVar16 = fVar16 + 4.2949673e+09;
        } else {
            fVar16 = SUB84((double)CONCAT44(0x4f800000, fVar16) + (double)CONCAT44(0x4f800000, fVar16), 0);
        }
    }
    iVar1 = *piVar7;
    if (cVar39 == '\0') {
        dVar23 = (double)CONCAT44((float)iVar1, fVar16);
    } else {
        dVar23 = (double)iVar1;
    }
    if (iVar1 < 0) {
        if (cVar40 == '\0') {
            in_dr0 = (double)CONCAT44((int)((u64)in_dr0 >> 0x20), 0x4f800000);
        } else {
            in_xd0 = -1.8629950226301174e-249;
        }
        if (cVar39 == '\0') {
            dVar23 = (double)CONCAT44((float)((u64)dVar23 >> 0x20) + SUB84(in_dr0, 0), SUB84(dVar23, 0));
        } else {
            dVar23 = dVar23 + in_dr0;
        }
    }
    dVar19 = in_xd2;
    if (cVar40 == '\0') {
        dVar21 = (double)CONCAT44((int)((u64)dVar21 >> 0x20), SUB84(dVar23, 0));
        dVar19 = in_xd6;
    }
    fVar16 = (float)((u64)dVar23 >> 0x20);
    if (cVar39 == '\0') {
        dVar21 = (double)CONCAT44((int)((u64)dVar21 >> 0x20), SUB84(dVar21, 0) - fVar16);
    } else {
        dVar21 = dVar21 - dVar23;
    }
    if (cVar39 == '\0') {
        bVar38 = 0.0 < SUB84(dVar21, 0);
    } else {
        bVar38 = (double)((u64)(u32)fVar16 << 0x20) < dVar21;
    }
    dVar23 = dVar19;
    if ((!bVar38) && (dVar23 = dVar26, cVar40 == '\0')) {
        dVar21 = (double)CONCAT44((int)((u64)dVar21 >> 0x20), 0x3f800000);
        dVar23 = dVar19;
    }
    fVar16 = (float)*piVar9;
    if (*piVar9 < 0) {
        if (cVar39 == '\0') {
            fVar16 = fVar16 + 4.2949673e+09;
        } else {
            fVar16 = SUB84((double)CONCAT44(0x4f800000, fVar16) + (double)CONCAT44(0x4f800000, fVar16), 0);
        }
    }
    fVar17 = (float)((u64)dVar21 >> 0x20);
    dVar19 = dVar21;
    if (cVar40 == '\0') {
        dVar19 = (double)CONCAT44(fVar17, fVar16);
    }
    fVar16 = (float)((u64)dVar18 >> 0x20);
    if (cVar39 == '\0') {
        dVar19 = (double)CONCAT44((float)((u64)dVar19 >> 0x20) + fVar16, SUB84(dVar19, 0));
    } else {
        dVar19 = dVar19 + dVar18;
    }
    if (cVar40 == '\0') {
        in_dr0 = (double)CONCAT44((int)((u64)in_dr0 >> 0x20), g_8c4aad54);
        in_dr14 = (double)CONCAT44((int)((u64)in_dr14 >> 0x20), 0x3f800000);
    } else {
        in_xd0 = (double)CONCAT44(g_8c4aad58, g_8c4aad54);
        in_xd14 = dVar26;
    }
    if (cVar39 == '\0') {
        in_dr0 = (double)CONCAT44((int)((u64)in_dr0 >> 0x20), SUB84(in_dr0, 0) - SUB84(dVar19, 0));
    } else {
        in_dr0 = in_dr0 - dVar19;
    }
    dVar24 = dVar18;
    dVar37 = dVar18;
    if (cVar40 == '\0') {
        in_dr8 = (double)CONCAT44((int)((u64)in_dr8 >> 0x20), fVar16);
        in_dr12 = (double)CONCAT44((int)((u64)in_dr12 >> 0x20), fVar16);
        dVar24 = in_xd12;
        dVar37 = in_xd8;
    }
    fVar11 = (float)((u64)dVar19 >> 0x20);
    if (cVar39 == '\0') {
        fVar30 = SUB84(in_dr12, 0) / fVar11;
    } else {
        fVar30 = SUB84(in_dr12 / dVar19, 0);
    }
    if (cVar40 == '\0') {
        dVar19 = (double)CONCAT44(fVar11, 0x3eaaaa3b);
        dVar18 = (double)CONCAT44(fVar16, fVar16);
        dVar26 = (double)CONCAT44(0x3f800000, SUB84(in_dr0, 0));
    } else {
        in_xd2 = 32.00000747044802;
        in_xd10 = in_xd0;
        in_xd4 = dVar18;
    }
    fVar16 = (float)((u64)dVar18 >> 0x20);
    if (cVar39 == '\0') {
        dVar26 = (double)CONCAT44((int)((u64)dVar26 >> 0x20), SUB84(dVar26, 0) / fVar16);
    } else {
        dVar26 = dVar26 / dVar18;
    }
    dVar14 = dVar23;
    if (cVar40 == '\0') {
        in_dr0 = (double)CONCAT44((int)((u64)in_dr0 >> 0x20), SUB84(dVar21, 0));
        dVar14 = in_xd0;
    }
    fVar11 = SUB84(dVar26, 0);
    if (cVar39 == '\0') {
        fVar10 = SUB84(in_dr0, 0) + fVar16;
        in_dr0 = (double)CONCAT44((int)((u64)in_dr0 >> 0x20), fVar10);
        dVar18 = (double)CONCAT44(fVar16, SUB84(dVar18, 0) * SUB84(dVar19, 0));
        fVar10 = SUB84(in_dr8, 0) / fVar10;
        fVar16 = SUB84(in_dr14, 0) - fVar11;
    } else {
        in_dr0 = in_dr0 + dVar18;
        dVar18 = dVar18 * dVar19;
        fVar10 = SUB84(in_dr8 / in_dr0, 0);
        fVar16 = SUB84(in_dr14 - dVar26, 0);
    }
    dVar20 = in_xd10;
    if (cVar40 == '\0') {
        dVar20 = (double)CONCAT44(fVar11, SUB84(dVar19, 0));
    }
    if (cVar39 == '\0') {
        dVar20 = (double)CONCAT44((float)((u64)dVar20 >> 0x20) * fVar11, SUB84(dVar20, 0));
    } else {
        dVar20 = dVar20 * dVar26;
    }
    dVar34 = in_xd14;
    dVar19 = in_xd10;
    if (cVar40 == '\0') {
        dVar34 = (double)CONCAT44(fVar16, fVar16);
        dVar19 = (double)CONCAT44(fVar11, fVar30);
    }
    if (cVar39 == '\0') {
        dVar34 = (double)CONCAT44((float)((u64)dVar34 >> 0x20) * SUB84(dVar34, 0), SUB84(dVar34, 0));
    } else {
        dVar34 = dVar34 * dVar34;
    }
    if (cVar40 == '\0') {
        in_xd14 = (double)CONCAT44(SUB84(dVar34, 0), fVar10);
    }
    fVar16 = (float)((u64)dVar20 >> 0x20);
    if (cVar39 == '\0') {
        dVar19 = (double)CONCAT44((float)((u64)dVar19 >> 0x20) * fVar16, SUB84(dVar19, 0));
    } else {
        dVar19 = dVar19 * dVar20;
    }
    fStack_30 = SUB84(dVar20, 0);
    if (cVar40 == '\0') {
        dVar20 = (double)CONCAT44(0x40400000, fStack_30);
        fStack_30 = fVar16;
    } else {
        dVar20 = 1.4969491268382446e-78;
        fStack_2c = fVar16;
    }
    fVar16 = (float)((u64)dVar34 >> 0x20);
    if (cVar39 == '\0') {
        in_xd14 = (double)CONCAT44((float)((u64)in_xd14 >> 0x20) * fVar16, SUB84(in_xd14, 0));
        dVar26 = (double)CONCAT44((int)((u64)dVar26 >> 0x20), fVar11 * fVar16);
    } else {
        in_xd14 = in_xd14 * dVar34;
        dVar26 = dVar26 * dVar34;
    }
    if (cVar40 == '\0') {
        in_dr0 = (double)CONCAT44((int)((u64)in_dr0 >> 0x20), fStack_30);
        dVar34 = (double)CONCAT44(SUB84(dVar26, 0), SUB84(dVar34, 0));
    } else {
        dVar14 = (double)CONCAT44(fStack_2c, fStack_30);
        dVar34 = in_xd10;
    }
    fVar16 = (float)((u64)dVar20 >> 0x20);
    if (cVar39 == '\0') {
        dVar35 = (double)CONCAT44((float)((u64)dVar34 >> 0x20) * fVar16, SUB84(dVar34, 0));
        in_dr0 = (double)CONCAT44((int)((u64)in_dr0 >> 0x20), SUB84(in_dr0, 0) * SUB84(dVar34, 0));
    } else {
        dVar35 = dVar34 * dVar20;
        in_dr0 = in_dr0 * dVar35;
    }
    uVar5 = 0;
    if (cVar40 == '\0') {
        dVar35 = (double)CONCAT44((int)((u64)dVar35 >> 0x20), SUB84(in_dr0, 0));
    }
    if (cVar39 == '\0') {
        dVar35 = (double)CONCAT44((int)((u64)dVar35 >> 0x20), SUB84(dVar35, 0) * fVar16);
    } else {
        dVar35 = dVar35 * dVar20;
    }
    fVar16 = (float)((u64)dVar26 >> 0x20);
    dVar34 = dVar26;
    if (cVar40 == '\0') {
        dVar34 = (double)CONCAT44(fVar16, SUB84(dVar20, 0));
    }
    fVar11 = SUB84(in_xd14, 0);
    if (cVar39 == '\0') {
        dVar34 = (double)CONCAT44((float)((u64)dVar34 >> 0x20) - fVar11, SUB84(dVar34, 0));
    } else {
        dVar34 = dVar34 - in_xd14;
    }
    fVar30 = (float)((u64)dVar34 >> 0x20);
    uVar29 = SUB84(dVar34, 0);
    uStack_58 = uVar29;
    fVar10 = fVar30;
    if (cVar40 == '\0') {
        uStack_58 = fVar30;
        fVar10 = fStack_54;
    }
    fStack_54 = fVar10;
    uVar32 = uStack_58;
    uVar25 = (u32)((u64)in_xd14 >> 0x20);
    fVar10 = SUB84(dVar18, 0);
    fVar22 = (float)((u64)dVar18 >> 0x20);
    fVar33 = SUB84(dVar35, 0);
    uVar36 = (u32)((u64)dVar35 >> 0x20);
    if (a1 == a2 + -2) {
        dVar23 = dVar37;
        uStack_58 = uVar29;
        if (cVar40 == '\0') {
            dVar23 = (double)CONCAT44(fVar11, uVar29);
            uStack_58 = fVar30;
            fVar30 = fStack_54;
        }
        fStack_54 = fVar30;
        if (cVar39 == '\0') {
            dVar23 = (double)CONCAT44((float)((u64)dVar23 >> 0x20) + fVar16, SUB84(dVar23, 0));
        } else {
            dVar23 = dVar23 + dVar26;
        }
        fVar16 = (float)((u64)dVar23 >> 0x20);
        fStack_34 = fVar16;
        if (cVar40 != '\0') {
            fStack_34 = SUB84(dVar23, 0);
            fStack_30 = fVar16;
        }
        do {
            uVar2 = uVar5;
            pdVar3 = (double *)((int)piVar8 + uVar2 + 4);
            if (cVar40 == '\0') {
                uVar29 = *(u32 *)pdVar3;
                dVar26 = (double)CONCAT44(uVar29, uVar29);
            } else {
                dVar26 = *pdVar3;
                in_xd10 = dVar26;
            }
            pdVar3 = (double *)((int)piVar9 + uVar2 + 4);
            pdVar4 = (double *)((int)piVar7 + uVar2 + 4);
            if (cVar40 == '\0') {
                fVar16 = *(float *)pdVar3;
                dVar23 = (double)CONCAT44((int)((u64)dVar23 >> 0x20), *(u32 *)pdVar4);
                dVar19 = (double)CONCAT44((int)((u64)dVar19 >> 0x20), fVar16);
                dVar21 = (double)CONCAT44(fVar16, SUB84(dVar21, 0));
            } else {
                dVar24 = *pdVar3;
                in_xd2 = *pdVar4;
                fVar16 = (float)((u64)dVar24 >> 0x20);
                dVar21 = dVar24;
            }
            if (cVar39 == '\0') {
                dVar26 = (double)CONCAT44((int)((u64)dVar26 >> 0x20), SUB84(dVar26, 0) - fVar16);
                dVar19 = (double)CONCAT44((int)((u64)dVar19 >> 0x20), SUB84(dVar19, 0) - SUB84(dVar23, 0));
            } else {
                dVar26 = dVar26 - dVar21;
                dVar19 = dVar19 - dVar23;
            }
            if (cVar40 == '\0') {
                dVar23 = (double)CONCAT44(uStack_58, fVar11);
                dVar14 = in_xd2;
            } else {
                dVar23 = (double)CONCAT44(fStack_54, uStack_58);
                dVar14 = dVar37;
            }
            if (cVar39 == '\0') {
                dVar23 = (double)CONCAT44(((float)((u64)dVar23 >> 0x20) * SUB84(dVar26, 0)) / fVar22,
                                          (SUB84(dVar23, 0) * SUB84(dVar19, 0)) / SUB84(dVar21, 0));
            } else {
                dVar23 = ((dVar23 * dVar26 * dVar19) / dVar18) / dVar21;
            }
            uVar29 = (u32)((u64)dVar23 >> 0x20);
            if (cVar40 == '\0') {
                dVar19 = (double)CONCAT44((int)((u64)dVar19 >> 0x20), uVar29);
                dVar20 = dVar24;
                fStack_38 = SUB84(dVar23, 0);
            } else {
                fStack_38 = SUB84(dVar14, 0);
                fStack_34 = (float)((u64)dVar14 >> 0x20);
                dVar20 = dVar23;
            }
            if (cVar39 == '\0') {
                dVar19 = (double)CONCAT44((int)((u64)dVar19 >> 0x20), SUB84(dVar19, 0) + SUB84(dVar23, 0));
            } else {
                dVar19 = dVar19 + dVar23;
            }
            if (cVar40 == '\0') {
                dVar23 = (double)CONCAT44(uVar29, fStack_34);
            } else {
                dVar14 = (double)CONCAT44(fStack_30, fStack_34);
            }
            if (cVar39 == '\0') {
                fVar17 = (SUB84(dVar23, 0) * SUB84(dVar26, 0)) / fVar22;
            } else {
                fVar17 = SUB84((dVar23 * dVar26) / dVar18, 0);
            }
            dVar27 = dVar20;
            dVar34 = dVar21;
            if (cVar40 == '\0') {
                dVar26 = (double)CONCAT44((int)((u64)dVar26 >> 0x20), fVar17);
                dVar27 = (double)CONCAT44(SUB84(dVar19, 0), SUB84(in_dr0, 0));
                dVar34 = dVar14;
                fVar17 = fVar16;
                dVar14 = in_xd10;
            }
            if (cVar39 == '\0') {
                fVar17 = (float)((u64)dVar27 >> 0x20) * fVar10 + fVar17;
            }
            if (cVar40 == '\0') {
                dVar23 = (double)CONCAT44(fStack_38, fVar17);
                dVar27 = (double)((u64)dVar18 & 0xffffffff);
            } else {
                dVar23 = (double)CONCAT44(fStack_34, fStack_38);
            }
            fVar17 = (float)((u64)dVar23 >> 0x20);
            if (cVar39 == '\0') {
                dVar26 = (double)CONCAT44((int)((u64)dVar26 >> 0x20), SUB84(dVar26, 0) - fVar17);
            } else {
                dVar26 = dVar26 - dVar23;
            }
            dVar24 = dVar34;
            dVar13 = in_xd14;
            if (cVar40 == '\0') {
                dVar19 = (double)CONCAT44((int)((u64)dVar19 >> 0x20), SUB84(dVar23, 0));
                dVar24 = dVar20;
                dVar13 = (double)CONCAT44(uVar25, SUB84(dVar27, 0));
            }
            in_xd2 = dVar35;
            if (cVar40 == '\0') {
                dVar23 = (double)CONCAT44(fVar17, uVar36);
                in_xd2 = dVar34;
            }
            if (cVar39 == '\0') {
                dVar23 = (double)CONCAT44((int)((u64)dVar23 >> 0x20), SUB84(dVar23, 0) * SUB84(dVar19, 0));
                dVar13 = (double)CONCAT44((int)((u64)dVar13 >> 0x20), SUB84(dVar13, 0) * SUB84(dVar26, 0));
            } else {
                dVar23 = dVar23 * dVar19;
                dVar13 = dVar13 * dVar26;
            }
            in_xd10 = dVar26;
            if (cVar40 == '\0') {
                uVar29 = (u32)((u64)dVar26 >> 0x20);
                dVar26 = (double)CONCAT44(uVar29, uVar29);
                in_xd10 = dVar14;
            }
            if (cVar39 == '\0') {
                dVar23 = (double)CONCAT44((int)((u64)dVar23 >> 0x20),
                                          (float)((u64)dVar13 >> 0x20) * fVar16 + SUB84(dVar23, 0));
                dVar26 = (double)CONCAT44((int)((u64)dVar26 >> 0x20), SUB84(dVar26, 0) - SUB84(dVar13, 0));
            } else {
                dVar26 = dVar26 - dVar13;
            }
            dVar14 = in_xd10;
            if (cVar40 == '\0') {
                dVar14 = (double)CONCAT44(SUB84(dVar26, 0), SUB84(dVar13, 0));
            }
            if (cVar39 == '\0') {
                dVar23 = (double)CONCAT44((int)((u64)dVar23 >> 0x20),
                                          (float)((u64)dVar14 >> 0x20) * fVar33 + SUB84(dVar23, 0));
            }
            in_dr0 = dVar19;
            if (cVar40 == '\0') {
                in_dr0 = (double)CONCAT44((int)((u64)dVar19 >> 0x20), SUB84(dVar14, 0));
            }
            if (cVar39 == '\0') {
                dVar23 =
                    (double)CONCAT44((int)((u64)dVar23 >> 0x20),
                                     (float)((u64)in_dr0 >> 0x20) * (float)((u64)dVar26 >> 0x20) + SUB84(dVar23, 0));
            }
            if (cVar40 == '\0') {
                *(int *)(uVar2 + a3) = SUB84(dVar23, 0);
            } else {
                *(double *)(uVar2 + a3) = in_xd2;
            }
            uVar5 = uVar2 + 4;
        } while (uVar2 + 4 < 0xc);
    } else {
        dVar20 = dVar26;
        if (cVar40 == '\0') {
            in_dr0 = (double)CONCAT44((int)((u64)in_dr0 >> 0x20), fVar16);
            dVar20 = dVar14;
        }
        fVar31 = SUB84(dVar19, 0);
        if (cVar39 == '\0') {
            in_dr0 = (double)CONCAT44((int)((u64)in_dr0 >> 0x20), SUB84(in_dr0, 0) - fVar31);
        } else {
            in_dr0 = in_dr0 - dVar19;
        }
        uStack_58 = (u32)((u64)dVar20 >> 0x20);
        uVar29 = uStack_58;
        if (cVar40 == '\0') {
            uStack_58 = uVar32;
        }
        uVar32 = (u32)((u64)dVar19 >> 0x20);
        uStack_5c = SUB84(dVar20, 0);
        if (a1 == 0) {
            dVar14 = dVar24;
            if (cVar40 == '\0') {
                dVar34 = (double)CONCAT44(fVar30, fVar31);
                dVar14 = in_xd2;
            }
            if (cVar39 == '\0') {
                dVar34 = (double)(u64)(u32)(SUB84(dVar34, 0) + fVar16);
            } else {
                dVar34 = dVar34 + dVar26;
            }
            if (cVar40 == '\0') {
                fStack_2c = SUB84(dVar34, 0);
                uStack_5c = SUB84(in_dr0, 0);
            } else {
                fStack_2c = SUB84(dVar14, 0);
                fStack_28 = (float)((u64)dVar14 >> 0x20);
                uStack_58 = uVar29;
            }
            do {
                uVar2 = uVar5;
                dVar20 = dVar24;
                if (cVar40 == '\0') {
                    dVar20 = (double)CONCAT44(fVar31, SUB84(dVar34, 0));
                }
                pdVar4 = (double *)((int)piVar8 + uVar2 + 4);
                pdVar3 = (double *)((int)piVar9 + uVar2 + 4);
                if (cVar40 == '\0') {
                    fVar16 = *(float *)pdVar4;
                    dVar21 = (double)CONCAT44((int)((u64)dVar21 >> 0x20), fVar16);
                    in_xd14 = (double)CONCAT44((int)((u64)in_xd14 >> 0x20), *(u32 *)pdVar3);
                    dVar26 = (double)CONCAT44(fVar16, SUB84(dVar26, 0));
                } else {
                    dVar26 = *pdVar4;
                    dVar37 = *pdVar3;
                    fVar16 = SUB84(dVar21, 0);
                    dVar23 = dVar26;
                }
                fVar17 = SUB84(in_xd14, 0);
                if (cVar39 == '\0') {
                    dVar26 = (double)CONCAT44((float)((u64)dVar26 >> 0x20) - fVar17, SUB84(dVar26, 0));
                } else {
                    dVar26 = dVar26 - in_xd14;
                }
                if (cVar40 == '\0') {
                    dVar20 = (double)CONCAT44((int)((u64)dVar20 >> 0x20), fStack_2c);
                } else {
                    dVar14 = (double)CONCAT44(fStack_28, fStack_2c);
                }
                pdVar3 = (double *)((int)piVar6 + uVar2 + 4);
                if (cVar40 == '\0') {
                    dVar26 = (double)CONCAT44((int)((u64)dVar26 >> 0x20), *(u32 *)pdVar3);
                } else {
                    in_xd10 = *pdVar3;
                }
                fVar11 = (float)((u64)dVar26 >> 0x20);
                if (cVar39 == '\0') {
                    fVar30 = SUB84(dVar26, 0) - fVar16;
                    dVar27 = (double)CONCAT44(fVar11, fVar30);
                    dVar26 = (double)CONCAT44(((float)((u64)dVar20 >> 0x20) * fVar30) / (float)((u64)dVar21 >> 0x20),
                                              (SUB84(dVar20, 0) * fVar11) / fVar22);
                } else {
                    dVar27 = dVar26 - dVar21;
                    dVar26 = (((dVar20 * dVar26) / dVar18) * dVar27) / dVar21;
                }
                fStack_28 = SUB84(dVar26, 0);
                dVar20 = dVar14;
                if (cVar40 == '\0') {
                    dVar27 = (double)CONCAT44((int)((u64)dVar27 >> 0x20), fStack_28);
                    dVar20 = in_xd10;
                }
                fVar11 = (float)((u64)dVar26 >> 0x20);
                if (cVar39 == '\0') {
                    dVar27 = (double)CONCAT44((int)((u64)dVar27 >> 0x20), SUB84(dVar27, 0) - fVar11);
                } else {
                    dVar27 = dVar27 - dVar26;
                }
                if (cVar40 == '\0') {
                    dVar26 = (double)CONCAT44(fVar11, uStack_5c);
                    fStack_28 = fVar11;
                } else {
                    dVar14 = (double)CONCAT44(uStack_58, uStack_5c);
                }
                if (cVar39 == '\0') {
                    dVar34 = (double)CONCAT44((int)((u64)dVar26 >> 0x20),
                                              (SUB84(dVar26, 0) * (float)((u64)dVar27 >> 0x20)) / fVar22);
                } else {
                    dVar34 = (dVar26 * dVar27) / dVar18;
                }
                dVar26 = dVar14;
                if (cVar40 == '\0') {
                    dVar26 = (double)CONCAT44(SUB84(dVar34, 0), SUB84(dVar27, 0));
                }
                fVar11 = (float)((u64)dVar34 >> 0x20);
                if (cVar39 == '\0') {
                    dVar26 = (double)CONCAT44((float)((u64)dVar26 >> 0x20) + fVar11, SUB84(dVar26, 0));
                } else {
                    dVar26 = dVar26 + dVar34;
                }
                dVar13 = dVar20;
                dVar27 = dVar37;
                if (cVar40 == '\0') {
                    dVar34 = (double)CONCAT44(fVar11, fVar17);
                    dVar13 = (double)CONCAT44(SUB84(dVar26, 0), SUB84(in_dr0, 0));
                    dVar27 = dVar14;
                }
                fVar11 = (float)((u64)dVar13 >> 0x20);
                if (cVar39 == '\0') {
                    dVar34 = (double)CONCAT44((int)((u64)dVar34 >> 0x20), fVar11 * fVar10 + SUB84(dVar34, 0));
                }
                if (cVar40 == '\0') {
                    dVar13 = (double)CONCAT44(fVar11, fVar10);
                }
                if (cVar39 == '\0') {
                    fVar11 = SUB84(dVar13, 0) * (float)((u64)dVar26 >> 0x20);
                } else {
                    fVar11 = SUB84(dVar13 * dVar26, 0);
                }
                dVar28 = dVar23;
                in_xd10 = dVar27;
                dVar13 = in_xd14;
                if (cVar40 == '\0') {
                    dVar28 = (double)CONCAT44(fVar16, SUB84(dVar34, 0));
                    in_xd10 = dVar20;
                    dVar13 = (double)CONCAT44((int)((u64)in_xd14 >> 0x20), fVar11);
                }
                dVar14 = dVar35;
                if (cVar40 == '\0') {
                    dVar34 = (double)CONCAT44((int)((u64)dVar34 >> 0x20), uVar36);
                    dVar14 = dVar27;
                }
                if (cVar39 == '\0') {
                    dVar26 = (double)CONCAT44((float)((u64)dVar28 >> 0x20) - SUB84(dVar13, 0), SUB84(dVar28, 0));
                    dVar34 =
                        (double)(u64)(u32)((float)((u64)dVar13 >> 0x20) * fVar17 + SUB84(dVar34, 0) * SUB84(dVar28, 0));
                } else {
                    dVar34 = dVar34 * dVar28;
                    dVar26 = dVar28 - dVar13;
                }
                dVar20 = dVar26;
                if (cVar40 == '\0') {
                    dVar20 = (double)CONCAT44((int)((u64)dVar26 >> 0x20), SUB84(dVar13, 0));
                }
                if (cVar39 == '\0') {
                    dVar34 = (double)(u64)(u32)((float)((u64)dVar20 >> 0x20) * fVar33 + SUB84(dVar34, 0));
                }
                in_dr0 = dVar19;
                if (cVar40 == '\0') {
                    in_dr0 = (double)CONCAT44(uVar32, SUB84(dVar20, 0));
                }
                if (cVar39 == '\0') {
                    dVar34 = (double)(u64)(u32)((float)((u64)in_dr0 >> 0x20) * fVar16 + SUB84(dVar34, 0));
                }
                if (cVar40 == '\0') {
                    *(int *)(uVar2 + a3) = SUB84(dVar34, 0);
                } else {
                    *(double *)(uVar2 + a3) = dVar14;
                }
                uVar5 = uVar2 + 4;
            } while (uVar2 + 4 < 0xc);
        } else {
            uStack_58 = uVar29;
            if (cVar40 == '\0') {
                uStack_5c = SUB84(in_dr0, 0);
                uStack_58 = fVar30;
            }
            do {
                uVar2 = uVar5;
                pdVar4 = (double *)((int)piVar8 + uVar2 + 4);
                pdVar3 = (double *)((int)piVar9 + uVar2 + 4);
                if (cVar40 == '\0') {
                    fVar16 = *(float *)pdVar4;
                    dVar26 = (double)CONCAT44(*(u32 *)pdVar3, fVar16);
                    dVar34 = (double)CONCAT44((int)((u64)dVar34 >> 0x20), fVar16);
                } else {
                    in_xd2 = *pdVar4;
                    dVar26 = *pdVar3;
                    fVar16 = SUB84(dVar26, 0);
                    in_xd10 = in_xd2;
                }
                fVar30 = (float)((u64)dVar26 >> 0x20);
                if (cVar39 == '\0') {
                    fStack_54 = SUB84(dVar34, 0) - fVar30;
                } else {
                    fStack_54 = SUB84(dVar34 - dVar26, 0);
                }
                pdVar3 = (double *)((int)piVar7 + uVar2 + 4);
                if (cVar40 == '\0') {
                    dVar23 = (double)CONCAT44(fVar30, *(u32 *)pdVar3);
                } else {
                    fStack_54 = SUB84(in_xd2, 0);
                    fStack_50 = (float)((u64)in_xd2 >> 0x20);
                    in_xd2 = *pdVar3;
                    dVar23 = dVar26;
                }
                pdVar3 = (double *)((int)piVar6 + uVar2 + 4);
                if (cVar39 == '\0') {
                    dVar23 = (double)CONCAT44((float)((u64)dVar23 >> 0x20) - SUB84(dVar23, 0), SUB84(dVar23, 0));
                } else {
                    dVar23 = dVar23 - dVar23;
                }
                uVar29 = (u32)((u64)dVar23 >> 0x20);
                if (cVar40 == '\0') {
                    dVar23 = (double)CONCAT44(uVar29, *(u32 *)pdVar3);
                    uStack_3c = uVar29;
                } else {
                    uStack_3c = SUB84(dVar23, 0);
                    in_xd2 = *pdVar3;
                    fStack_38 = (float)uVar29;
                }
                if (cVar39 == '\0') {
                    fStack_40 = SUB84(dVar23, 0) - fVar16;
                } else {
                    fStack_40 = SUB84(dVar23 - dVar26, 0);
                }
                if (cVar40 == '\0') {
                    dVar23 = (double)CONCAT44(fStack_54, fStack_40);
                    in_dr0 = (double)CONCAT44((int)((u64)in_dr0 >> 0x20), uStack_58);
                } else {
                    fStack_40 = SUB84(in_xd2, 0);
                    uStack_3c = (u32)((u64)in_xd2 >> 0x20);
                    dVar23 = (double)CONCAT44(fStack_50, fStack_54);
                    dVar20 = (double)CONCAT44(fStack_54, uStack_58);
                }
                fVar15 = (float)((u64)dVar23 >> 0x20);
                if (cVar39 == '\0') {
                    fVar12 = SUB84(in_dr0, 0) * fVar15;
                } else {
                    fVar12 = SUB84(in_dr0 * dVar23, 0);
                }
                if (cVar40 == '\0') {
                    dVar23 = (double)CONCAT44(fVar15, fVar11);
                    dVar14 = (double)CONCAT44(uStack_3c, fVar12);
                } else {
                    dVar14 = (double)CONCAT44(fStack_38, uStack_3c);
                    in_xd2 = dVar37;
                }
                if (cVar39 == '\0') {
                    fVar15 = (float)((u64)dVar14 >> 0x20);
                    dVar14 = (double)CONCAT44(fVar15, SUB84(dVar14, 0) / fVar22);
                    dVar23 = (double)CONCAT44((int)((u64)dVar23 >> 0x20), SUB84(dVar23, 0) * fVar15);
                } else {
                    dVar14 = dVar14 / dVar18;
                    dVar23 = dVar23 * dVar14;
                }
                dVar34 = dVar24;
                if (cVar40 == '\0') {
                    dVar34 = (double)CONCAT44(fVar31, SUB84(dVar14, 0));
                }
                if (cVar39 == '\0') {
                    dVar34 = (double)CONCAT44((int)((u64)dVar34 >> 0x20),
                                              SUB84(dVar34, 0) + SUB84(dVar23, 0) / SUB84(dVar21, 0));
                } else {
                    dVar34 = dVar34 + dVar23 / dVar21;
                }
                if (cVar40 == '\0') {
                    fStack_44 = SUB84(dVar34, 0);
                    dVar34 = (double)CONCAT44((int)((u64)dVar34 >> 0x20), fStack_40);
                    dVar14 = (double)CONCAT44(uStack_5c, fStack_54);
                    dVar23 = dVar20;
                } else {
                    fStack_44 = SUB84(dVar20, 0);
                    fStack_40 = (float)((u64)dVar20 >> 0x20);
                    in_xd2 = (double)CONCAT44(fStack_50, fStack_54);
                    dVar23 = (double)CONCAT44(uStack_3c, fStack_40);
                    dVar14 = (double)CONCAT44(uStack_58, uStack_5c);
                }
                if (cVar39 == '\0') {
                    dVar34 = (double)CONCAT44((float)((u64)dVar34 >> 0x20) * SUB84(dVar34, 0), SUB84(dVar34, 0));
                    dVar14 = (double)CONCAT44((float)((u64)dVar14 >> 0x20) * SUB84(dVar14, 0), SUB84(dVar14, 0));
                } else {
                    dVar34 = dVar34 * dVar34;
                    dVar14 = dVar14 * dVar14;
                }
                if (cVar40 == '\0') {
                    dVar14 = (double)CONCAT44((int)((u64)dVar14 >> 0x20), fVar30);
                    dVar26 = in_xd2;
                }
                if (cVar39 == '\0') {
                    fVar15 = (float)((u64)dVar34 >> 0x20) / fVar17;
                    dVar34 = (double)CONCAT44(fVar15, SUB84(dVar34, 0));
                    dVar14 = (double)CONCAT44((float)((u64)dVar14 >> 0x20) / fVar22 + fVar15, SUB84(dVar14, 0));
                } else {
                    dVar34 = dVar34 / dVar21;
                    dVar14 = dVar14 / dVar18 + dVar34;
                }
                fVar12 = (float)((u64)dVar14 >> 0x20);
                fStack_48 = SUB84(dVar14, 0);
                fVar15 = fVar12;
                if (cVar40 == '\0') {
                    fStack_48 = fVar12;
                    fVar15 = fStack_44;
                    fVar12 = SUB84(dVar34, 0);
                    fStack_40 = fStack_44;
                }
                fStack_44 = fVar15;
                if (cVar39 == '\0') {
                    dVar14 = (double)(u64)(u32)(fStack_40 * fVar10 + SUB84(dVar14, 0));
                }
                uStack_4c = SUB84(dVar14, 0);
                if (cVar40 == '\0') {
                    dVar34 = (double)CONCAT44(fStack_48, uStack_4c);
                    dVar14 = (double)CONCAT44(fVar10, fVar12);
                } else {
                    uStack_4c = SUB84(dVar26, 0);
                    fStack_48 = (float)((u64)dVar26 >> 0x20);
                    dVar34 = (double)CONCAT44(fStack_44, fStack_48);
                    dVar14 = in_xd4;
                }
                fVar15 = (float)((u64)dVar34 >> 0x20);
                if (cVar39 == '\0') {
                    dVar14 = (double)CONCAT44((float)((u64)dVar14 >> 0x20) * fVar15, SUB84(dVar14, 0));
                } else {
                    dVar14 = dVar14 * dVar34;
                }
                dVar20 = in_xd10;
                if (cVar40 == '\0') {
                    dVar14 = (double)CONCAT44((int)((u64)dVar14 >> 0x20), fVar16);
                    dVar20 = dVar23;
                }
                if (cVar39 == '\0') {
                    fStack_50 = SUB84(dVar14, 0) - (float)((u64)dVar14 >> 0x20);
                } else {
                    fStack_50 = SUB84(dVar14 - dVar14, 0);
                }
                if (cVar40 == '\0') {
                    dVar34 = (double)CONCAT44(fVar15, uVar36);
                    dVar23 = (double)CONCAT44(uStack_4c, fStack_50);
                    in_xd2 = dVar26;
                } else {
                    fStack_50 = SUB84(dVar20, 0);
                    uStack_4c = (u32)((u64)dVar20 >> 0x20);
                    dVar23 = (double)CONCAT44(fStack_48, uStack_4c);
                    in_xd2 = dVar35;
                }
                if (cVar39 == '\0') {
                    dVar34 =
                        (double)CONCAT44((int)((u64)dVar34 >> 0x20), SUB84(dVar34, 0) * (float)((u64)dVar23 >> 0x20));
                } else {
                    dVar34 = dVar34 * dVar23;
                }
                dVar26 = in_xd14;
                if (cVar40 == '\0') {
                    dVar26 = (double)CONCAT44(uVar25, SUB84(dVar23, 0));
                }
                if (cVar39 == '\0') {
                    dVar34 = (double)CONCAT44((int)((u64)dVar34 >> 0x20),
                                              (float)((u64)dVar26 >> 0x20) * fVar30 + SUB84(dVar34, 0));
                }
                dVar23 = dVar20;
                if (cVar40 == '\0') {
                    dVar23 = (double)CONCAT44(SUB84(dVar26, 0), SUB84(dVar26, 0));
                }
                if (cVar39 == '\0') {
                    dVar34 = (double)CONCAT44((int)((u64)dVar34 >> 0x20),
                                              (float)((u64)dVar23 >> 0x20) * fVar33 + SUB84(dVar34, 0));
                }
                in_dr0 = dVar19;
                if (cVar40 == '\0') {
                    in_dr0 = (double)CONCAT44(uVar32, SUB84(dVar23, 0));
                }
                if (cVar39 == '\0') {
                    dVar34 = (double)CONCAT44((int)((u64)dVar34 >> 0x20),
                                              (float)((u64)in_dr0 >> 0x20) * fVar16 + SUB84(dVar34, 0));
                }
                if (cVar40 == '\0') {
                    *(int *)(uVar2 + a3) = SUB84(dVar34, 0);
                } else {
                    *(double *)(uVar2 + a3) = in_xd2;
                }
                uVar5 = uVar2 + 4;
            } while (uVar2 + 4 < 0xc);
        }
    }
    return uVar2;
}

/*
 * gfxlib_uses_libgcc_divide_helper_21caa0  0x8c21caa0
 * area name: in the gfxlib library code range; behaviour name: its main named callee is libgcc_divide_helper_0106dc
 */
u32 gfxlib_uses_libgcc_divide_helper_21caa0(int a0, int a1, int a2, int a3) {
    int iVar1;
    u32 uVar2;
    u32 uVar3;
    int iVar4;
    int *piVar5;
    int *piVar6;
    int *piVar7;
    int *piVar8;
    float fVar9;
    double in_dr0;
    float fVar10;
    float fVar11;
    u32 uVar12;
    u32 uVar13;
    float fVar14;
    u32 uVar15;
    double dVar16;
    double dVar17;
    double dVar18;
    float fVar19;
    float fVar20;
    u32 in_fr5;
    float fVar21;
    double dVar22;
    float fVar23;
    u32 in_fr7;
    double dVar24;
    u32 in_fr9;
    double dVar25;
    double dVar26;
    double dVar27;
    u32 in_fr13;
    double dVar28;
    u32 in_fr15;
    float fVar29;
    double dVar30;
    double dVar31;
    float fVar32;
    double in_xd0;
    double in_xd2;
    double in_xd4;
    double in_xd6;
    double dVar33;
    double in_xd8;
    double in_xd10;
    double in_xd12;
    double dVar34;
    double in_xd14;
    bool bVar35;
    u32 in_PR;
    char cVar36;
    char cVar37;
    float fStack_54;
    float fStack_50;
    float fStack_4c;
    float fStack_48;
    float fStack_44;
    float fStack_40;
    float fStack_3c;
    float fStack_38;
    float fStack_34;
    float fStack_30;
    float fStack_2c;
    u32 uStack_28;
    u32 uStack_24;

    cVar37 = '\0';
    cVar36 = '\0';
    iVar1 = libgcc_divide_helper_0106dc(a1 + a2 + -1, a2);
    piVar6 = (int *)(iVar1 * 0x10 + a0);
    piVar8 = (int *)(a1 * 0x10 + a0);
    iVar1 = libgcc_divide_helper_0106dc(a1 + 1, a2);
    piVar7 = (int *)(iVar1 * 0x10 + a0);
    iVar1 = libgcc_divide_helper_0106dc(a1 + 2, a2);
    piVar5 = (int *)(iVar1 * 0x10 + a0);
    fVar10 = (float)*piVar7;
    if (*piVar7 < 0) {
        if (cVar36 == '\0') {
            fVar10 = fVar10 + 4.2949673e+09;
        } else {
            fVar10 = SUB84((double)CONCAT44(0x4f800000, fVar10) + (double)CONCAT44(0x4f800000, fVar10), 0);
        }
    }
    iVar1 = *piVar8;
    if (cVar36 == '\0') {
        dVar16 = (double)CONCAT44((float)iVar1, fVar10);
    } else {
        dVar16 = (double)iVar1;
    }
    if (iVar1 < 0) {
        if (cVar37 == '\0') {
            in_dr0 = (double)CONCAT44((int)((u64)in_dr0 >> 0x20), 0x4f800000);
        } else {
            in_xd0 = -1.8629950226301174e-249;
        }
        if (cVar36 == '\0') {
            dVar16 = (double)CONCAT44((float)((u64)dVar16 >> 0x20) + SUB84(in_dr0, 0), SUB84(dVar16, 0));
        } else {
            dVar16 = dVar16 + in_dr0;
        }
    }
    dVar22 = in_xd2;
    if (cVar37 == '\0') {
        dVar22 = (double)CONCAT44(SUB84(dVar16, 0), in_fr5);
    }
    fVar10 = (float)((u64)dVar16 >> 0x20);
    if (cVar36 == '\0') {
        dVar22 = (double)CONCAT44((float)((u64)dVar22 >> 0x20) - fVar10, SUB84(dVar22, 0));
    } else {
        dVar22 = dVar22 - dVar16;
    }
    if (cVar36 == '\0') {
        bVar35 = 0.0 < (float)((u64)dVar22 >> 0x20);
    } else {
        bVar35 = (double)((u64)(u32)fVar10 << 0x20) < dVar22;
    }
    dVar16 = dVar22;
    if ((!bVar35) && (dVar16 = in_xd10, cVar37 == '\0')) {
        dVar16 = (double)CONCAT44(0x3f800000, SUB84(dVar22, 0));
    }
    fVar10 = (float)*piVar5;
    if (*piVar5 < 0) {
        if (cVar36 == '\0') {
            fVar10 = fVar10 + 4.2949673e+09;
        } else {
            fVar10 = SUB84((double)CONCAT44(0x4f800000, fVar10) + (double)CONCAT44(0x4f800000, fVar10), 0);
        }
    }
    iVar1 = *piVar7;
    if (cVar36 == '\0') {
        dVar22 = (double)CONCAT44((float)iVar1, fVar10);
    } else {
        dVar22 = (double)iVar1;
    }
    if (iVar1 < 0) {
        if (cVar37 == '\0') {
            in_dr0 = (double)CONCAT44((int)((u64)in_dr0 >> 0x20), 0x4f800000);
        } else {
            in_xd0 = -1.8629950226301174e-249;
        }
        if (cVar36 == '\0') {
            dVar22 = (double)CONCAT44((float)((u64)dVar22 >> 0x20) + SUB84(in_dr0, 0), SUB84(dVar22, 0));
        } else {
            dVar22 = dVar22 + in_dr0;
        }
    }
    dVar24 = in_xd2;
    if (cVar37 == '\0') {
        dVar24 = (double)CONCAT44(SUB84(dVar22, 0), in_fr7);
    }
    fVar10 = (float)((u64)dVar22 >> 0x20);
    if (cVar36 == '\0') {
        dVar24 = (double)CONCAT44((float)((u64)dVar24 >> 0x20) - fVar10, SUB84(dVar24, 0));
    } else {
        dVar24 = dVar24 - dVar22;
    }
    if (cVar36 == '\0') {
        bVar35 = 0.0 < (float)((u64)dVar24 >> 0x20);
    } else {
        bVar35 = (double)((u64)(u32)fVar10 << 0x20) < dVar24;
    }
    dVar22 = dVar24;
    if ((!bVar35) && (dVar22 = in_xd10, cVar37 == '\0')) {
        dVar22 = (double)CONCAT44(0x3f800000, SUB84(dVar24, 0));
    }
    fVar10 = (float)*piVar8;
    if (*piVar8 < 0) {
        if (cVar36 == '\0') {
            fVar10 = fVar10 + 4.2949673e+09;
        } else {
            fVar10 = SUB84((double)CONCAT44(0x4f800000, fVar10) + (double)CONCAT44(0x4f800000, fVar10), 0);
        }
    }
    iVar1 = *piVar6;
    if (cVar36 == '\0') {
        dVar24 = (double)CONCAT44((float)iVar1, fVar10);
    } else {
        dVar24 = (double)iVar1;
    }
    if (iVar1 < 0) {
        if (cVar37 == '\0') {
            in_dr0 = (double)CONCAT44((int)((u64)in_dr0 >> 0x20), 0x4f800000);
        } else {
            in_xd0 = -1.8629950226301174e-249;
        }
        if (cVar36 == '\0') {
            dVar24 = (double)CONCAT44((float)((u64)dVar24 >> 0x20) + SUB84(in_dr0, 0), SUB84(dVar24, 0));
        } else {
            dVar24 = dVar24 + in_dr0;
        }
    }
    dVar17 = in_xd2;
    if (cVar37 == '\0') {
        dVar22 = (double)CONCAT44((int)((u64)dVar22 >> 0x20), SUB84(dVar24, 0));
        dVar17 = in_xd6;
    }
    fVar10 = (float)((u64)dVar24 >> 0x20);
    if (cVar36 == '\0') {
        dVar22 = (double)CONCAT44((int)((u64)dVar22 >> 0x20), SUB84(dVar22, 0) - fVar10);
    } else {
        dVar22 = dVar22 - dVar24;
    }
    if (cVar36 == '\0') {
        bVar35 = 0.0 < SUB84(dVar22, 0);
    } else {
        bVar35 = (double)((u64)(u32)fVar10 << 0x20) < dVar22;
    }
    dVar24 = dVar17;
    if ((!bVar35) && (dVar24 = in_xd10, cVar37 == '\0')) {
        dVar22 = (double)CONCAT44((int)((u64)dVar22 >> 0x20), 0x3f800000);
        dVar24 = dVar17;
    }
    fVar10 = (float)*piVar8;
    if (*piVar8 < 0) {
        if (cVar36 == '\0') {
            fVar10 = fVar10 + 4.2949673e+09;
        } else {
            fVar10 = SUB84((double)CONCAT44(0x4f800000, fVar10) + (double)CONCAT44(0x4f800000, fVar10), 0);
        }
    }
    fVar19 = (float)((u64)dVar22 >> 0x20);
    dVar17 = dVar22;
    if (cVar37 == '\0') {
        dVar17 = (double)CONCAT44(fVar19, fVar10);
    }
    fVar10 = (float)((u64)dVar16 >> 0x20);
    if (cVar36 == '\0') {
        dVar17 = (double)CONCAT44((float)((u64)dVar17 >> 0x20) + fVar10, SUB84(dVar17, 0));
    } else {
        dVar17 = dVar17 + dVar16;
    }
    if (cVar37 == '\0') {
        in_dr0 = (double)CONCAT44((int)((u64)in_dr0 >> 0x20), g_8c4aad54);
        dVar28 = (double)CONCAT44(0x3f800000, in_fr13);
    } else {
        in_xd0 = (double)CONCAT44(g_8c4aad58, g_8c4aad54);
        dVar28 = in_xd10;
    }
    if (cVar36 == '\0') {
        in_dr0 = (double)CONCAT44((int)((u64)in_dr0 >> 0x20), SUB84(in_dr0, 0) - SUB84(dVar17, 0));
    } else {
        in_dr0 = in_dr0 - dVar17;
    }
    dVar26 = dVar16;
    dVar25 = dVar16;
    if (cVar37 == '\0') {
        dVar26 = (double)CONCAT44(fVar10, 0x3f800000);
        dVar25 = (double)CONCAT44(fVar10, in_fr9);
    }
    fVar11 = (float)((u64)dVar17 >> 0x20);
    if (cVar36 == '\0') {
        dVar26 = (double)CONCAT44((float)((u64)dVar26 >> 0x20) / fVar11, SUB84(dVar26, 0));
    } else {
        dVar26 = dVar26 / dVar17;
    }
    if (cVar37 == '\0') {
        dVar17 = (double)CONCAT44(fVar11, 0x3eaaaa3b);
        dVar16 = (double)CONCAT44(fVar10, fVar10);
        dVar30 = (double)CONCAT44(SUB84(in_dr0, 0), in_fr15);
    } else {
        in_xd2 = 32.00000747044802;
        dVar30 = in_xd0;
        in_xd4 = dVar16;
    }
    fVar10 = (float)((u64)dVar16 >> 0x20);
    if (cVar36 == '\0') {
        dVar30 = (double)CONCAT44((float)((u64)dVar30 >> 0x20) / fVar10, SUB84(dVar30, 0));
    } else {
        dVar30 = dVar30 / dVar16;
    }
    dVar27 = dVar24;
    if (cVar37 == '\0') {
        in_dr0 = (double)CONCAT44((int)((u64)in_dr0 >> 0x20), SUB84(dVar22, 0));
        dVar27 = in_xd0;
    }
    fVar11 = (float)((u64)dVar30 >> 0x20);
    if (cVar36 == '\0') {
        fVar9 = SUB84(in_dr0, 0) + fVar10;
        in_dr0 = (double)CONCAT44((int)((u64)in_dr0 >> 0x20), fVar9);
        dVar16 = (double)CONCAT44(fVar10, SUB84(dVar16, 0) * SUB84(dVar17, 0));
        dVar25 = (double)CONCAT44((float)((u64)dVar25 >> 0x20) / fVar9, SUB84(dVar25, 0));
        dVar28 = (double)CONCAT44((float)((u64)dVar28 >> 0x20) - fVar11, SUB84(dVar28, 0));
    } else {
        in_dr0 = in_dr0 + dVar16;
        dVar16 = dVar16 * dVar17;
        dVar25 = dVar25 / in_dr0;
        dVar28 = dVar28 - dVar30;
    }
    dVar18 = dVar30;
    if (cVar37 == '\0') {
        dVar18 = (double)CONCAT44(fVar11, SUB84(dVar17, 0));
    }
    if (cVar36 == '\0') {
        dVar18 = (double)CONCAT44((float)((u64)dVar18 >> 0x20) * fVar11, SUB84(dVar18, 0));
    } else {
        dVar18 = dVar18 * dVar30;
    }
    dVar34 = dVar28;
    dVar17 = dVar30;
    if (cVar37 == '\0') {
        dVar30 = (double)CONCAT44(fVar11, fVar11);
        uVar12 = (u32)((u64)dVar28 >> 0x20);
        dVar28 = (double)CONCAT44(uVar12, uVar12);
        dVar34 = in_xd12;
        dVar17 = in_xd14;
    }
    fVar10 = (float)((u64)dVar17 >> 0x20);
    if (cVar36 == '\0') {
        fVar11 = (float)((u64)dVar28 >> 0x20);
        dVar28 = (double)CONCAT44(fVar11, SUB84(dVar28, 0) * fVar11);
    } else {
        dVar28 = dVar28 * dVar28;
    }
    uVar12 = (u32)((u64)dVar28 >> 0x20);
    dVar17 = dVar28;
    if (cVar37 == '\0') {
        dVar25 = (double)CONCAT44((int)((u64)dVar25 >> 0x20), uVar12);
        dVar17 = in_xd8;
    }
    fVar11 = (float)((u64)dVar18 >> 0x20);
    if (cVar36 == '\0') {
        dVar30 = (double)CONCAT44((int)((u64)dVar30 >> 0x20), SUB84(dVar30, 0) * fVar11);
    } else {
        dVar30 = dVar30 * dVar18;
    }
    fStack_48 = SUB84(dVar18, 0);
    if (cVar37 == '\0') {
        dVar18 = (double)CONCAT44(0x40400000, fStack_48);
        fStack_48 = fVar11;
    } else {
        dVar18 = 1.659535550397677e+182;
        fStack_44 = fVar11;
    }
    if (cVar36 == '\0') {
        dVar25 = (double)CONCAT44((int)((u64)dVar25 >> 0x20), SUB84(dVar25, 0) * SUB84(dVar28, 0));
        dVar30 = (double)CONCAT44((float)((u64)dVar30 >> 0x20) * SUB84(dVar28, 0), SUB84(dVar30, 0));
    } else {
        dVar25 = dVar25 * dVar28;
        dVar30 = dVar30 * dVar28;
    }
    if (cVar37 == '\0') {
        dVar28 = (double)CONCAT44(uVar12, (int)((u64)dVar30 >> 0x20));
        in_dr0 = (double)CONCAT44((int)((u64)in_dr0 >> 0x20), fStack_48);
    } else {
        dVar27 = (double)CONCAT44(fStack_44, fStack_48);
        dVar34 = dVar30;
    }
    fVar11 = (float)((u64)dVar18 >> 0x20);
    if (cVar36 == '\0') {
        fVar9 = (float)((u64)dVar28 >> 0x20);
        dVar28 = (double)CONCAT44(fVar9, SUB84(dVar28, 0) * fVar11);
        in_dr0 = (double)CONCAT44((int)((u64)in_dr0 >> 0x20), SUB84(in_dr0, 0) * fVar9);
    } else {
        dVar28 = dVar28 * dVar18;
        in_dr0 = in_dr0 * dVar28;
    }
    uVar3 = 0;
    dVar31 = dVar27;
    if (cVar37 == '\0') {
        dVar31 = (double)CONCAT44(SUB84(in_dr0, 0), SUB84(dVar30, 0));
    }
    if (cVar36 == '\0') {
        dVar31 = (double)CONCAT44((float)((u64)dVar31 >> 0x20) * fVar11, SUB84(dVar31, 0));
    } else {
        dVar31 = dVar31 * dVar18;
    }
    fVar11 = SUB84(dVar26, 0);
    dVar30 = in_xd10;
    if (cVar37 == '\0') {
        dVar30 = (double)CONCAT44(fVar11, SUB84(dVar18, 0));
    }
    fVar9 = (float)((u64)dVar25 >> 0x20);
    if (cVar36 == '\0') {
        dVar30 = (double)CONCAT44((float)((u64)dVar30 >> 0x20) - fVar9, SUB84(dVar30, 0));
    } else {
        dVar30 = dVar30 - dVar25;
    }
    fVar20 = (float)((u64)dVar30 >> 0x20);
    fVar21 = fVar20;
    if (cVar37 == '\0') {
        fVar21 = fStack_50;
    }
    fStack_50 = fVar21;
    fVar21 = SUB84(dVar16, 0);
    fVar23 = (float)((u64)dVar16 >> 0x20);
    fVar29 = SUB84(dVar31, 0);
    fVar32 = (float)((u64)dVar31 >> 0x20);
    fStack_54 = SUB84(dVar30, 0);
    if (a1 == a2 + -2) {
        dVar24 = dVar25;
        if (cVar37 == '\0') {
            dVar24 = (double)CONCAT44(fVar9, fStack_54);
            fStack_54 = fVar20;
            fVar20 = fStack_50;
        }
        fStack_50 = fVar20;
        if (cVar36 == '\0') {
            dVar24 = (double)CONCAT44((float)((u64)dVar24 >> 0x20) + fVar11, SUB84(dVar24, 0));
        } else {
            dVar24 = dVar24 + dVar26;
        }
        uVar12 = (u32)((u64)dVar24 >> 0x20);
        fStack_44 = (float)uVar12;
        if (cVar37 != '\0') {
            fStack_44 = SUB84(dVar24, 0);
            fStack_40 = (float)uVar12;
        }
        do {
            uVar2 = uVar3;
            fVar19 = fStack_50;
            if (cVar37 == '\0') {
                fVar19 = fStack_54;
            }
            iVar4 = *(int *)((int)piVar7 + uVar2 + 4);
            iVar1 = *(int *)((int)piVar8 + uVar2 + 4);
            fVar11 = (float)(iVar4 - iVar1);
            dVar24 = in_xd2;
            if (cVar37 == '\0') {
                dVar24 = (double)CONCAT44(fVar11, SUB84(dVar22, 0));
            }
            fVar20 = (float)((u64)dVar24 >> 0x20);
            if (cVar36 == '\0') {
                fVar19 = fVar19 * fVar20;
            } else {
                fVar19 = (float)((u64)((double)CONCAT44(fVar19, fVar11) * dVar24) >> 0x20);
            }
            fVar11 = (float)(iVar1 - *(int *)((int)piVar6 + uVar2 + 4));
            if (cVar36 == '\0') {
                dVar30 = (double)CONCAT44(fVar19 / fVar23, fVar11);
            } else {
                dVar30 = (double)CONCAT44(fVar19, fVar11) / dVar16;
            }
            dVar27 = dVar25;
            if (cVar37 == '\0') {
                uVar12 = SUB84(dVar30, 0);
                dVar30 = (double)CONCAT44((int)((u64)dVar30 >> 0x20), fVar9);
                dVar27 = in_xd2;
                in_xd2 = (double)CONCAT44(uVar12, SUB84(dVar26, 0));
            }
            fVar19 = (float)((u64)in_xd2 >> 0x20);
            if (cVar36 == '\0') {
                dVar30 = (double)CONCAT44((int)((u64)dVar30 >> 0x20), SUB84(dVar30, 0) * fVar19);
            } else {
                dVar30 = dVar30 * in_xd2;
            }
            uVar12 = SUB84(dVar30, 0);
            dVar26 = dVar27;
            if (cVar37 == '\0') {
                in_xd2 = (double)CONCAT44(fVar19, uVar12);
                dVar26 = in_xd10;
            }
            if (cVar36 == '\0') {
                fVar19 = SUB84(in_xd2, 0) / SUB84(dVar24, 0);
            } else {
                fVar19 = SUB84(in_xd2 / dVar24, 0);
            }
            if (cVar37 == '\0') {
                dVar30 = (double)CONCAT44((int)((u64)dVar30 >> 0x20), fVar19);
            }
            if (cVar36 == '\0') {
                dVar30 = (double)CONCAT44((float)((u64)dVar30 >> 0x20) + SUB84(dVar30, 0), SUB84(dVar30, 0));
            } else {
                dVar30 = dVar30 + dVar30;
            }
            if (cVar37 == '\0') {
                dVar18 = (double)CONCAT44(fStack_44, uVar12);
            } else {
                dVar18 = (double)CONCAT44(fStack_40, fStack_44);
            }
            if (cVar36 == '\0') {
                dVar18 = (double)CONCAT44((float)((u64)dVar18 >> 0x20) * fVar20, SUB84(dVar18, 0));
            } else {
                dVar18 = dVar18 * dVar24;
            }
            uVar3 = (u32)((u64)dVar30 >> 0x20);
            dVar31 = dVar30;
            dVar22 = dVar26;
            if (cVar37 == '\0') {
                dVar18 = (double)CONCAT44((int)((u64)dVar18 >> 0x20), SUB84(dVar30, 0));
                dVar31 = (double)((u64)uVar3 << 0x20);
                dVar22 = dVar27;
            }
            if (cVar36 == '\0') {
                dVar18 = (double)CONCAT44((float)((u64)dVar18 >> 0x20) / fVar23, SUB84(dVar18, 0));
            } else {
                dVar18 = dVar18 / dVar16;
            }
            dVar27 = dVar18;
            if (cVar37 == '\0') {
                dVar30 = (double)CONCAT44(uVar3, (int)((u64)dVar18 >> 0x20));
                dVar27 = dVar26;
            }
            if (cVar36 == '\0') {
                dVar26 = (double)CONCAT44((float)iVar1, SUB84(dVar18, 0));
                fVar19 = SUB84(dVar30, 0) - SUB84(dVar18, 0);
            } else {
                dVar26 = (double)iVar1;
                fVar19 = SUB84(dVar30 - dVar26, 0);
            }
            fVar20 = (float)((u64)dVar26 >> 0x20);
            fVar11 = (float)iVar4;
            dVar30 = (double)CONCAT44(fVar20, fVar11);
            dVar18 = dVar30;
            if (cVar37 == '\0') {
                dVar18 = (double)CONCAT44(fVar20, SUB84(dVar28, 0));
            }
            if (cVar36 == '\0') {
                dVar30 = (double)CONCAT44((float)((u64)dVar31 >> 0x20) * fVar21 + fVar20, fVar11);
            }
            dVar31 = in_xd4;
            dVar28 = dVar17;
            if (cVar37 == '\0') {
                dVar31 = (double)CONCAT44(fVar21, SUB84(dVar30, 0));
                dVar30 = (double)CONCAT44((int)((u64)dVar30 >> 0x20), fVar19);
                dVar28 = (double)((s64)dVar25 << 0x20);
            }
            if (cVar36 == '\0') {
                dVar31 = (double)CONCAT44((float)((u64)dVar31 >> 0x20) * SUB84(dVar30, 0), SUB84(dVar31, 0));
            } else {
                dVar31 = dVar31 * dVar30;
            }
            uVar12 = SUB84(dVar31, 0);
            in_xd2 = dVar34;
            in_xd10 = dVar22;
            if (cVar37 == '\0') {
                dVar30 = (double)CONCAT44((int)((u64)dVar30 >> 0x20), uVar12);
                dVar31 = (double)CONCAT44((int)((u64)dVar31 >> 0x20), SUB84(dVar18, 0));
                in_xd2 = dVar22;
                dVar22 = (double)CONCAT44(uVar12, SUB84(dVar24, 0));
                in_xd10 = dVar27;
            }
            if (cVar36 == '\0') {
                fVar19 = (float)((u64)dVar31 >> 0x20);
                dVar26 = (double)(u64)(u32)(SUB84(dVar30, 0) - fVar19);
                dVar31 = (double)CONCAT44(fVar19, (float)((u64)dVar28 >> 0x20) * (float)((u64)dVar18 >> 0x20) +
                                                      SUB84(dVar31, 0) * (float)((u64)dVar30 >> 0x20));
            } else {
                dVar31 = dVar31 * dVar30;
                dVar26 = dVar30 - dVar31;
            }
            if (cVar37 == '\0') {
                fVar19 = SUB84(dVar26, 0);
            } else {
                fVar19 = (float)((u64)in_xd10 >> 0x20);
            }
            if (cVar36 == '\0') {
                dVar31 = (double)CONCAT44((int)((u64)dVar31 >> 0x20), fVar19 * fVar32 + SUB84(dVar31, 0));
            }
            fVar19 = fVar10;
            if (cVar37 == '\0') {
                fVar19 = fVar29;
            }
            if (cVar36 == '\0') {
                iVar1 = (int)(fVar19 * (float)((u64)dVar22 >> 0x20) + SUB84(dVar31, 0));
            } else {
                iVar1 = (int)dVar31;
            }
            *(int *)(uVar2 + a3) = iVar1;
            uVar3 = uVar2 + 4;
            dVar28 = dVar18;
        } while (uVar2 + 4 < 0xc);
    } else {
        dVar30 = in_xd10;
        if (cVar37 == '\0') {
            dVar30 = (double)CONCAT44(fVar11, SUB84(dVar28, 0));
        }
        fVar14 = (float)((u64)dVar26 >> 0x20);
        if (cVar36 == '\0') {
            dVar30 = (double)CONCAT44((float)((u64)dVar30 >> 0x20) - fVar14, SUB84(dVar30, 0));
        } else {
            dVar30 = dVar30 - dVar26;
        }
        uVar12 = (u32)((u64)dVar30 >> 0x20);
        if (a1 == 0) {
            dVar28 = dVar26;
            if (cVar37 == '\0') {
                in_dr0 = (double)CONCAT44((int)((u64)in_dr0 >> 0x20), fVar14);
                dVar28 = dVar27;
            }
            if (cVar36 == '\0') {
                fStack_50 = SUB84(in_dr0, 0) + fVar11;
            } else {
                fStack_50 = SUB84(in_dr0 + dVar26, 0);
            }
            if (cVar37 != '\0') {
                fStack_50 = SUB84(dVar28, 0);
                fStack_4c = (float)((u64)dVar28 >> 0x20);
            }
            do {
                uVar2 = uVar3;
                iVar1 = *(int *)((int)piVar7 + uVar2 + 4);
                iVar4 = *(int *)((int)piVar8 + uVar2 + 4);
                fVar19 = fStack_4c;
                if (cVar37 == '\0') {
                    fVar19 = fStack_50;
                }
                fVar11 = (float)(iVar1 - iVar4);
                dVar28 = in_xd2;
                if (cVar37 == '\0') {
                    dVar22 = (double)CONCAT44((int)((u64)dVar22 >> 0x20), fVar11);
                    dVar28 = dVar24;
                }
                if (cVar36 == '\0') {
                    fVar19 = fVar19 * SUB84(dVar22, 0);
                } else {
                    fVar19 = (float)((u64)((double)CONCAT44(fVar19, fVar11) * dVar22) >> 0x20);
                }
                fVar11 = (float)(*(int *)((int)piVar5 + uVar2 + 4) - iVar1);
                if (cVar36 == '\0') {
                    dVar24 = (double)CONCAT44(fVar19 / fVar23, fVar11);
                } else {
                    dVar24 = (double)CONCAT44(fVar19, fVar11) / dVar16;
                }
                uVar15 = (u32)((u64)dVar26 >> 0x20);
                dVar27 = dVar26;
                if (cVar37 == '\0') {
                    uVar13 = SUB84(dVar24, 0);
                    dVar24 = (double)CONCAT44((int)((u64)dVar24 >> 0x20), uVar15);
                    dVar26 = in_xd2;
                    dVar27 = (double)CONCAT44(uVar15, uVar13);
                    in_xd2 = in_xd10;
                }
                if (cVar36 == '\0') {
                    dVar24 = (double)CONCAT44((int)((u64)dVar24 >> 0x20), SUB84(dVar24, 0) * SUB84(dVar27, 0));
                } else {
                    dVar24 = dVar24 * dVar27;
                }
                dVar18 = dVar26;
                if (cVar37 == '\0') {
                    dVar18 = (double)CONCAT44(SUB84(dVar24, 0), SUB84(dVar25, 0));
                }
                fVar19 = (float)((u64)dVar22 >> 0x20);
                if (cVar36 == '\0') {
                    dVar18 = (double)CONCAT44((float)((u64)dVar18 >> 0x20) / fVar19, SUB84(dVar18, 0));
                } else {
                    dVar18 = dVar18 / dVar22;
                }
                fVar11 = (float)((u64)dVar24 >> 0x20);
                dVar25 = dVar30;
                if (cVar37 == '\0') {
                    dVar27 = (double)CONCAT44(uVar15, fVar11);
                    fVar11 = (float)((u64)in_xd2 >> 0x20);
                    dVar25 = (double)CONCAT44(uVar12, SUB84(dVar24, 0));
                    dVar24 = in_xd2;
                }
                fVar9 = (float)((u64)dVar18 >> 0x20);
                if (cVar36 == '\0') {
                    dVar27 = (double)CONCAT44((int)((u64)dVar27 >> 0x20), SUB84(dVar27, 0) - fVar9);
                    fVar20 = (float)((u64)dVar25 >> 0x20) * SUB84(dVar22, 0);
                } else {
                    dVar27 = dVar27 - dVar18;
                    fVar20 = (float)((u64)(dVar25 * dVar22) >> 0x20);
                }
                if (cVar37 == '\0') {
                    fVar11 = SUB84(dVar27, 0);
                }
                fVar14 = (float)iVar4;
                if (cVar36 == '\0') {
                    dVar31 = (double)CONCAT44(fVar20 / fVar23, fVar14);
                } else {
                    dVar31 = (double)CONCAT44(fVar20, fVar14) / dVar16;
                }
                dVar33 = dVar31;
                if (cVar37 == '\0') {
                    dVar22 = (double)CONCAT44(fVar19, (int)((u64)dVar31 >> 0x20));
                    dVar33 = dVar28;
                }
                if (cVar36 == '\0') {
                    dVar22 = (double)CONCAT44((int)((u64)dVar22 >> 0x20), SUB84(dVar22, 0) + fVar9);
                } else {
                    dVar22 = dVar22 + dVar18;
                }
                dVar25 = dVar26;
                if (cVar37 == '\0') {
                    dVar25 = (double)CONCAT44(SUB84(dVar31, 0), SUB84(dVar18, 0));
                }
                if (cVar36 == '\0') {
                    dVar28 = (double)CONCAT44((float)iVar1, fVar11 * fVar21 + SUB84(dVar31, 0));
                } else {
                    dVar28 = (double)iVar1;
                }
                dVar31 = in_xd4;
                in_xd10 = dVar26;
                dVar18 = dVar17;
                if (cVar37 == '\0') {
                    uVar15 = SUB84(dVar28, 0);
                    dVar28 = (double)CONCAT44((int)((u64)dVar28 >> 0x20), fVar21);
                    dVar31 = dVar26;
                    dVar27 = (double)CONCAT44((int)((u64)dVar27 >> 0x20), uVar15);
                    in_xd10 = dVar24;
                    dVar18 = (double)((s64)dVar25 << 0x20);
                }
                dVar26 = dVar27;
                if (cVar36 == '\0') {
                    dVar28 = (double)CONCAT44((int)((u64)dVar28 >> 0x20), SUB84(dVar28, 0) * SUB84(dVar22, 0));
                } else {
                    dVar28 = dVar28 * dVar22;
                }
                uVar15 = (u32)((u64)dVar28 >> 0x20);
                dVar24 = dVar28;
                if (cVar37 == '\0') {
                    dVar22 = (double)CONCAT44((int)((u64)dVar22 >> 0x20), uVar15);
                    dVar24 = dVar33;
                }
                if (cVar36 == '\0') {
                    dVar22 = (double)CONCAT44((int)((u64)dVar22 >> 0x20), SUB84(dVar22, 0) - SUB84(dVar28, 0));
                } else {
                    dVar22 = dVar22 - dVar28;
                }
                in_xd2 = dVar34;
                if (cVar37 == '\0') {
                    dVar28 = (double)CONCAT44(uVar15, SUB84(dVar30, 0));
                    in_xd2 = dVar31;
                }
                if (cVar36 == '\0') {
                    dVar28 = (double)CONCAT44((int)((u64)dVar28 >> 0x20), SUB84(dVar28, 0) * SUB84(dVar26, 0));
                } else {
                    dVar28 = dVar28 * dVar26;
                }
                if (cVar36 == '\0') {
                    dVar28 = (double)CONCAT44((int)((u64)dVar28 >> 0x20),
                                              (float)((u64)dVar18 >> 0x20) * (float)((u64)dVar25 >> 0x20) +
                                                  SUB84(dVar28, 0));
                }
                if (cVar37 == '\0') {
                    fVar19 = SUB84(dVar22, 0);
                } else {
                    fVar19 = (float)((u64)dVar24 >> 0x20);
                }
                if (cVar36 == '\0') {
                    dVar28 = (double)CONCAT44((int)((u64)dVar28 >> 0x20), fVar19 * fVar32 + SUB84(dVar28, 0));
                }
                fVar19 = fVar10;
                if (cVar37 == '\0') {
                    fVar19 = fVar29;
                }
                if (cVar36 == '\0') {
                    iVar1 = (int)(fVar19 * (float)((u64)dVar28 >> 0x20) + SUB84(dVar28, 0));
                } else {
                    iVar1 = (int)dVar28;
                }
                *(int *)(uVar2 + a3) = iVar1;
                uVar3 = uVar2 + 4;
            } while (uVar2 + 4 < 0xc);
        } else {
            uStack_24 = in_PR;
            if (cVar37 == '\0') {
                fStack_54 = fVar20;
                fVar20 = fStack_50;
            }
            do {
                fStack_50 = fVar20;
                uVar2 = uVar3;
                fVar11 = fStack_38;
                iVar1 = *(int *)((int)piVar7 + uVar2 + 4);
                iVar4 = *(int *)((int)piVar8 + uVar2 + 4);
                if (cVar37 == '\0') {
                    dVar26 = (double)CONCAT44((int)((u64)dVar26 >> 0x20), (float)(iVar1 - iVar4));
                }
                fStack_3c = SUB84(in_xd2, 0);
                fStack_40 = fStack_3c;
                fStack_38 = (float)((u64)in_xd2 >> 0x20);
                fVar20 = fStack_38;
                if (cVar37 == '\0') {
                    fStack_3c = (float)(iVar4 - *(int *)((int)piVar6 + uVar2 + 4));
                    fStack_38 = fVar11;
                }
                fVar11 = (float)(*(int *)((int)piVar5 + uVar2 + 4) - iVar1);
                if (cVar37 == '\0') {
                    dVar24 = (double)CONCAT44(fStack_54, fVar11);
                    dVar28 = (double)CONCAT44(fVar9, fStack_3c);
                    fStack_40 = fVar11;
                } else {
                    dVar24 = (double)CONCAT44(fStack_50, fStack_54);
                    dVar27 = (double)CONCAT44(fStack_38, fVar20);
                    dVar28 = dVar25;
                    fStack_3c = fVar20;
                }
                fVar11 = (float)((u64)dVar27 >> 0x20);
                if (cVar36 == '\0') {
                    dVar24 = (double)CONCAT44((float)((u64)dVar24 >> 0x20) * SUB84(dVar26, 0), SUB84(dVar24, 0));
                    dVar28 = (double)CONCAT44((float)((u64)dVar28 >> 0x20) * SUB84(dVar28, 0), SUB84(dVar28, 0));
                } else {
                    dVar24 = dVar24 * dVar26;
                    dVar28 = dVar28 * dVar28;
                }
                dVar18 = dVar30;
                if (cVar37 == '\0') {
                    dVar24 = (double)CONCAT44((int)((u64)dVar24 >> 0x20), uVar12);
                    dVar18 = in_xd2;
                }
                if (cVar36 == '\0') {
                    dVar24 = (double)CONCAT44((float)((u64)dVar24 >> 0x20) / fVar23 +
                                                  (float)((u64)dVar28 >> 0x20) / SUB84(dVar22, 0),
                                              (SUB84(dVar24, 0) * SUB84(dVar26, 0)) / fVar23);
                } else {
                    dVar24 = ((dVar24 * dVar26) / dVar16) / dVar16 + dVar28 / dVar22;
                }
                uVar15 = (u32)((u64)dVar26 >> 0x20);
                fStack_38 = SUB84(dVar24, 0);
                dVar28 = dVar26;
                if (cVar37 == '\0') {
                    dVar28 = (double)CONCAT44(uVar15, fStack_38);
                    fStack_3c = fStack_40;
                    fStack_38 = (float)((u64)dVar24 >> 0x20);
                }
                if (cVar36 == '\0') {
                    dVar24 = (double)CONCAT44((float)iVar4,
                                              SUB84(dVar28, 0) + ((float)((u64)dVar28 >> 0x20) * fStack_3c) / fVar19);
                } else {
                    dVar24 = (double)iVar4;
                }
                fVar20 = (float)((u64)dVar24 >> 0x20);
                fStack_2c = SUB84(dVar24, 0);
                if (cVar37 == '\0') {
                    dVar24 = (double)CONCAT44(fVar20, fVar20);
                    fVar14 = fStack_38;
                    fStack_34 = fStack_2c;
                    fStack_2c = fVar20;
                } else {
                    fStack_34 = SUB84(dVar18, 0);
                    fStack_30 = (float)((u64)dVar18 >> 0x20);
                    dVar18 = dVar24;
                    fVar14 = fStack_34;
                }
                if (cVar36 == '\0') {
                    dVar24 = (double)CONCAT44((int)((u64)dVar24 >> 0x20), fVar14 * fVar21 + SUB84(dVar24, 0));
                }
                if (cVar37 == '\0') {
                    uStack_28 = SUB84(dVar24, 0);
                    dVar24 = (double)CONCAT44((int)((u64)dVar24 >> 0x20), fVar21);
                } else {
                    uStack_28 = SUB84(dVar18, 0);
                    uStack_24 = (u32)((u64)dVar18 >> 0x20);
                    dVar18 = in_xd4;
                    fStack_34 = fStack_30;
                }
                fVar20 = (float)iVar1;
                if (cVar36 == '\0') {
                    dVar24 = (double)CONCAT44((int)((u64)dVar24 >> 0x20), SUB84(dVar24, 0) * fStack_34);
                } else {
                    dVar24 = dVar24 * (double)CONCAT44(fStack_34, fVar20);
                }
                if (cVar37 == '\0') {
                    dVar26 = (double)CONCAT44(uVar15, fVar20);
                }
                if (cVar36 == '\0') {
                    fVar20 = fVar20 - SUB84(dVar24, 0);
                } else {
                    fVar20 = SUB84((double)CONCAT44(fStack_34, fVar20) - dVar24, 0);
                }
                if (cVar37 == '\0') {
                    dVar24 = (double)CONCAT44((int)((u64)dVar24 >> 0x20), SUB84(dVar30, 0));
                    dVar28 = (double)CONCAT44(uStack_28, fVar20);
                    in_xd2 = dVar18;
                } else {
                    dVar28 = (double)CONCAT44(uStack_24, uStack_28);
                    in_xd2 = dVar34;
                }
                if (cVar36 == '\0') {
                    fVar20 = SUB84(dVar24, 0) * (float)((u64)dVar28 >> 0x20);
                } else {
                    fVar20 = SUB84(dVar24 * dVar28, 0);
                }
                if (cVar37 == '\0') {
                    dVar24 = (double)CONCAT44(fStack_2c, fVar20);
                    dVar28 = (double)CONCAT44(SUB84(dVar25, 0), SUB84(dVar28, 0));
                } else {
                    dVar24 = (double)CONCAT44(uStack_28, fStack_2c);
                    dVar28 = dVar17;
                }
                if (cVar36 == '\0') {
                    fVar20 = (float)((u64)dVar24 >> 0x20);
                    dVar24 = (double)CONCAT44(fVar20, (float)((u64)dVar28 >> 0x20) * fVar20 + SUB84(dVar24, 0));
                }
                if (cVar37 == '\0') {
                    fVar11 = SUB84(dVar28, 0);
                }
                if (cVar36 == '\0') {
                    dVar24 = (double)CONCAT44((int)((u64)dVar24 >> 0x20), fVar11 * fVar32 + SUB84(dVar24, 0));
                }
                fVar11 = fVar10;
                if (cVar37 == '\0') {
                    fVar11 = fVar29;
                }
                if (cVar36 == '\0') {
                    iVar1 = (int)(fVar11 * SUB84(dVar26, 0) + SUB84(dVar24, 0));
                } else {
                    iVar1 = (int)dVar24;
                }
                *(int *)(uVar2 + a3) = iVar1;
                uVar3 = uVar2 + 4;
                fVar20 = fStack_50;
            } while (uVar2 + 4 < 0xc);
        }
    }
    return uVar2;
}

/*
 * gfxlib_uses_noop_21ce02  0x8c21ce02
 * area name: in the gfxlib library code range; behaviour name: its main named callee is noop_25b638
 */
u32 gfxlib_uses_noop_21ce02(int a0) {
    u32 r6;
    u32 r7;
    u32 uVar1;
    int a4;
    int ar5_00;
    u32 a5;
    u32 a6;
    u32 uVar2;
    u8 *a7;
    u32 uVar3;
    float fVar4;
    u8 auStack_18[16];

    ar5_00 = g_8c4aad5c * 4;
    a4 = *(int *)(g_8c4aad4c + ar5_00);
    if (a4 == 0) {
        uVar1 = noop_25b638(a0 + 8, ar5_00, r6, r7, a0);
    } else {
        a6 = *(u32 *)(g_8c4aad50 + ar5_00);
        fVar4 = g_8c4aad54;
        if (2.1474836e+09 < g_8c4aad54) {
            fVar4 = g_8c4aad54 + -4.2949673e+09;
        }
        a5 = 0;
        uVar2 = a6;
        while (uVar3 = uVar2, 1 < uVar3 - a5) {
            uVar2 = a5 + uVar3 >> 1;
            if (*(u32 *)(uVar2 * 0x10 + a4) <= (u32)(int)fVar4) {
                a5 = uVar2;
                uVar2 = uVar3;
            }
        }
        a7 = auStack_18;
        (*g_8c4ab0b4)(a4, a5, a6, a7);
        uVar1 = noop_25b638();
    }
    g_8c4aad5c = g_8c4aad5c + 1;
    return uVar1;
}

/*
 * gfxlib_uses_noop_21ce92  0x8c21ce92
 * area name: in the gfxlib library code range; behaviour name: its main named callee is noop_257098
 */
u32 gfxlib_uses_noop_21ce92(int a0) {
    u32 r6;
    u32 r7;
    u32 uVar1;
    int a4;
    int ar5_00;
    u32 a5;
    u32 a6;
    u32 uVar2;
    u8 *a7;
    u32 uVar3;
    float fVar4;
    u8 auStack_18[16];

    ar5_00 = g_8c4aad5c * 4;
    a4 = *(int *)(g_8c4aad4c + ar5_00);
    if (a4 == 0) {
        uVar1 = noop_257098(a0 + 0x20, ar5_00, r6, r7, a0);
    } else {
        a6 = *(u32 *)(g_8c4aad50 + ar5_00);
        fVar4 = g_8c4aad54;
        if (2.1474836e+09 < g_8c4aad54) {
            fVar4 = g_8c4aad54 + -4.2949673e+09;
        }
        a5 = 0;
        uVar2 = a6;
        while (uVar3 = uVar2, 1 < uVar3 - a5) {
            uVar2 = a5 + uVar3 >> 1;
            if (*(u32 *)(uVar2 * 0x10 + a4) <= (u32)(int)fVar4) {
                a5 = uVar2;
                uVar2 = uVar3;
            }
        }
        a7 = auStack_18;
        (*g_8c4ab0b4)(a4, a5, a6, a7);
        uVar1 = noop_257098();
    }
    g_8c4aad5c = g_8c4aad5c + 1;
    return uVar1;
}

/*
 * gfxlib_calls_scan_loop_21cf22  0x8c21cf22
 * area name: in the gfxlib library code range; behaviour name: its callees mostly do: scan_loop
 */
u32 gfxlib_calls_scan_loop_21cf22(int a0) {
    u32 r6;
    u32 r7;
    u32 uVar1;
    int a4;
    u32 a5;
    u32 a6;
    u32 uVar2;
    u8 *a7;
    u32 uVar3;
    float fVar4;
    u8 auStack_18[16];

    a4 = *(int *)(g_8c4aad4c + g_8c4aad5c * 4);
    if (a4 == 0) {
        uVar1 = ninja_scan_loop_2569e0(a0 + 0x14, 0, r6, r7, a0);
    } else {
        a6 = *(u32 *)(g_8c4aad50 + g_8c4aad5c * 4);
        fVar4 = g_8c4aad54;
        if (2.1474836e+09 < g_8c4aad54) {
            fVar4 = g_8c4aad54 + -4.2949673e+09;
        }
        a5 = 0;
        uVar2 = a6;
        while (uVar3 = uVar2, 1 < uVar3 - a5) {
            uVar2 = a5 + uVar3 >> 1;
            if (*(u32 *)(uVar2 * 0x10 + a4) <= (u32)(int)fVar4) {
                a5 = uVar2;
                uVar2 = uVar3;
            }
        }
        a7 = auStack_18;
        (*g_8c4ab0b8)(a4, a5, a6, a7);
        uVar1 = ninja_scan_loop_2569e0(auStack_18, 0, a6, a7, a0);
    }
    g_8c4aad5c = g_8c4aad5c + 1;
    return uVar1;
}

/*
 * gfxlib_calls_scan_loop_21cfd8  0x8c21cfd8
 * area name: in the gfxlib library code range; behaviour name: its callees mostly do: scan_loop
 */
u32 gfxlib_calls_scan_loop_21cfd8(int a0) {
    u32 r6;
    u32 r7;
    u32 uVar1;
    int a4;
    u32 a5;
    u32 a6;
    u32 uVar2;
    u8 *a7;
    u32 uVar3;
    float fVar4;
    u8 auStack_18[16];

    a4 = *(int *)(g_8c4aad4c + g_8c4aad5c * 4);
    if (a4 == 0) {
        uVar1 = ninja_scan_loop_2569e0(a0 + 0x14, 1, r6, r7, a0);
    } else {
        a6 = *(u32 *)(g_8c4aad50 + g_8c4aad5c * 4);
        fVar4 = g_8c4aad54;
        if (2.1474836e+09 < g_8c4aad54) {
            fVar4 = g_8c4aad54 + -4.2949673e+09;
        }
        a5 = 0;
        uVar2 = a6;
        while (uVar3 = uVar2, 1 < uVar3 - a5) {
            uVar2 = a5 + uVar3 >> 1;
            if (*(u32 *)(uVar2 * 0x10 + a4) <= (u32)(int)fVar4) {
                a5 = uVar2;
                uVar2 = uVar3;
            }
        }
        a7 = auStack_18;
        (*g_8c4ab0b8)(a4, a5, a6, a7);
        uVar1 = ninja_scan_loop_2569e0(auStack_18, 1, a6, a7, a0);
    }
    g_8c4aad5c = g_8c4aad5c + 1;
    return uVar1;
}

/*
 * gfxlib_uses_switch_jump_21d06c  0x8c21d06c
 * area name: in the gfxlib library code range; behaviour name: its callees mostly do: uses_switch_jump
 */
u32 gfxlib_uses_switch_jump_21d06c(u32 *a0) {
    u32 r6;
    u32 r7;
    u32 uVar1;
    u32 uVar2;
    int a4;
    u32 a5;
    u32 a6;
    u32 uVar3;
    u8 *a7;
    float fVar4;
    u8 auStack_20[20];

    a4 = *(int *)(g_8c4aad4c + g_8c4aad5c * 4);
    if (a4 == 0) {
        uVar2 = ninja_scan_loop_2569e0(a0 + 5, *a0 & 0x20, r6, r7, a0);
    } else {
        a6 = *(u32 *)(g_8c4aad50 + g_8c4aad5c * 4);
        fVar4 = g_8c4aad54;
        if (2.1474836e+09 < g_8c4aad54) {
            fVar4 = g_8c4aad54 + -4.2949673e+09;
        }
        a5 = 0;
        uVar1 = a6;
        while (uVar3 = uVar1, 1 < uVar3 - a5) {
            uVar1 = a5 + uVar3 >> 1;
            if (*(u32 *)(uVar1 * 0x14 + a4) <= (u32)(int)fVar4) {
                a5 = uVar1;
                uVar1 = uVar3;
            }
        }
        a7 = auStack_20;
        gfxlib_uses_switch_jump_21c1b0(a4, a5, a6, a7);
        uVar2 = matrix_uses_switch_jump_2563f8(auStack_20);
    }
    g_8c4aad5c = g_8c4aad5c + 1;
    return uVar2;
}

/*
 * noop_21d108  0x8c21d108
 * only calls noop_25b638, which does nothing
 */
u32 noop_21d108(int a0) {
    u32 r5;
    u32 r6;
    u32 r7;
    u32 in_r0;
    u32 uVar1;

    uVar1 = noop_25b638(a0 + 8, r5, r6, r7, in_r0);
    return uVar1;
}

/*
 * gfxlib_calls_scan_loop_21d112  0x8c21d112
 * area name: in the gfxlib library code range; behaviour name: its callees mostly do: scan_loop
 */
u32 gfxlib_calls_scan_loop_21d112(int a0) {
    u32 r6;
    u32 r7;
    u32 in_r0;
    u32 uVar1;

    uVar1 = ninja_scan_loop_2569e0(a0 + 0x14, 0, r6, r7, in_r0);
    return uVar1;
}

/*
 * gfxlib_calls_scan_loop_21d11e  0x8c21d11e
 * area name: in the gfxlib library code range; behaviour name: its callees mostly do: scan_loop
 */
u32 gfxlib_calls_scan_loop_21d11e(int a0) {
    u32 r6;
    u32 r7;
    u32 in_r0;
    u32 uVar1;

    uVar1 = ninja_scan_loop_2569e0(a0 + 0x14, 1, r6, r7, in_r0);
    return uVar1;
}

/*
 * noop_21d13c  0x8c21d13c
 * only calls noop_257098, which does nothing
 */
u32 noop_21d13c(int a0) {
    u32 r5;
    u32 r6;
    u32 r7;
    u32 in_r0;
    u32 uVar1;

    uVar1 = noop_257098(a0 + 0x20, r5, r6, r7, in_r0);
    return uVar1;
}

/*
 * alt_entry_21d148  0x8c21d148
 * probably an entry 12 bytes into 8c21d13c: it reads registers that code sets before it
 */
u32 alt_entry_21d148(u32 a0, u32 a1, u32 a2, u32 a3) {
    u32 uVar1;
    u32 *in_r2;

    (*(code *)*in_r2)(a0, a1, a2, a3);
    (*(code *)*0x8c4aa348)(a0, a1, a2, a3);
    /* WARNING: Could not recover jumptable at 0x8c21d162. Too many branches */
    /* WARNING: Treating indirect jump as call */
    uVar1 = (*(code *)*0x8c4aa350)(a0);
    return uVar1;
}

/*
 * gfxlib_init_fields_21d174  0x8c21d174
 * area name: in the gfxlib library code range; behaviour name: writes 3 members
 */
u32 gfxlib_init_fields_21d174(u32 unused_a0, u32 a1, u32 a2, u32 a3) {
    u32 uVar1;
    u32 *in_r1;
    int in_r3;
    u32 unaff_r12;
    int *unaff_r13;
    int iVar2;

    iVar2 = *unaff_r13;
    unaff_r13[1] = iVar2;
    unaff_r13[2] = iVar2 + 4;
    unaff_r13[5] = in_r3;
    (*(code *)*in_r1)(unaff_r12, a1, a2, a3);
    (*(code *)*0x8c4aa348)(unaff_r12, a1, a2, a3);
    uVar1 = (*(code *)*0x8c4aa350)(unaff_r12, a1, a2, a3);
    *unaff_r13 = iVar2 + 8;
    return uVar1;
}

/*
 * gfxlib_init_fields_21d1b4  0x8c21d1b4
 * area name: in the gfxlib library code range; behaviour name: writes 3 members
 */
u32 gfxlib_init_fields_21d1b4(u32 unused_a0, u32 a1, u32 a2, u32 a3) {
    u32 uVar1;
    u32 *in_r1;
    int in_r3;
    u32 unaff_r12;
    int *unaff_r13;
    int iVar2;

    iVar2 = *unaff_r13;
    unaff_r13[1] = iVar2;
    unaff_r13[2] = iVar2 + 8;
    unaff_r13[5] = in_r3;
    (*(code *)*in_r1)(unaff_r12, a1, a2, a3);
    (*(code *)*0x8c4aa348)(unaff_r12, a1, a2, a3);
    uVar1 = (*(code *)*0x8c4aa350)(unaff_r12, a1, a2, a3);
    *unaff_r13 = iVar2 + 0x10;
    return uVar1;
}

/*
 * gfxlib_init_fields_21d1f4  0x8c21d1f4
 * area name: in the gfxlib library code range; behaviour name: writes 3 members
 */
u32 gfxlib_init_fields_21d1f4(u32 unused_a0, u32 a1, u32 a2, u32 a3) {
    u32 uVar1;
    u32 *in_r1;
    int in_r3;
    u32 unaff_r12;
    int *unaff_r13;
    int iVar2;

    iVar2 = *unaff_r13;
    unaff_r13[1] = iVar2;
    unaff_r13[2] = iVar2 + 0xc;
    unaff_r13[5] = in_r3;
    (*(code *)*in_r1)(unaff_r12, a1, a2, a3);
    (*(code *)*0x8c4aa348)(unaff_r12, a1, a2, a3);
    uVar1 = (*(code *)*0x8c4aa350)(unaff_r12, a1, a2, a3);
    *unaff_r13 = iVar2 + 0x18;
    return uVar1;
}

/*
 * gfxlib_init_fields_21d234  0x8c21d234
 * area name: in the gfxlib library code range; behaviour name: writes 3 members
 */
u32 gfxlib_init_fields_21d234(u32 unused_a0, u32 a1, u32 a2, u32 a3) {
    u32 uVar1;
    u32 *in_r1;
    int in_r3;
    u32 unaff_r12;
    int *unaff_r13;
    int iVar2;

    iVar2 = *unaff_r13;
    unaff_r13[1] = iVar2;
    unaff_r13[2] = iVar2 + 0x10;
    unaff_r13[5] = in_r3;
    (*(code *)*in_r1)(unaff_r12, a1, a2, a3);
    (*(code *)*0x8c4aa348)(unaff_r12, a1, a2, a3);
    uVar1 = (*(code *)*0x8c4aa350)(unaff_r12, a1, a2, a3);
    *unaff_r13 = iVar2 + 0x20;
    return uVar1;
}

/*
 * gfxlib_uses_switch_jump_21d29c  0x8c21d29c
 * area name: in the gfxlib library code range; behaviour name: its main named callee is switch_jump
 */
int gfxlib_uses_switch_jump_21d29c(int a0, int a1, u32 a2, int *a3) {
    int iVar1;
    u32 uVar2;
    int iVar3;
    int iVar4;
    int iVar5;
    int *piVar6;
    int iVar7;
    int *piVar8;
    double in_dr0;
    float fVar9;
    float fVar10;
    double dVar11;
    u32 in_fr5;
    u64 uVar12;
    double in_xd0;
    u64 in_xd2;
    u64 uVar13;
    u64 in_xd4;
    u32 in_PR;
    char cVar14;
    char cVar15;
    u32 uStack_1c;
    u64 uStack_18;

    fVar9 = (float)((u64)in_xd4 >> 0x20);
    cVar15 = '\0';
    cVar14 = '\0';
    uStack_18._4_4_ = in_PR;
    switch_jump(8, &uStack_1c, &g_8c26d7a8);
    piVar8 = (int *)(a1 * 0x10 + a0);
    iVar1 = libgcc_divide_helper_0106dc(a1 + 1, a2);
    piVar6 = (int *)(iVar1 * 0x10 + a0);
    fVar10 = (float)(*piVar6 - *piVar8);
    dVar11 = (double)(u64)(u32)fVar10;
    uVar12 = in_xd2;
    if (cVar15 == '\0') {
        uVar12 = CONCAT44(fVar10, in_fr5);
    }
    uVar2 = (u32)((u64)uVar12 >> 0x20);
    uVar13 = uVar12;
    if (cVar14 != '\0' || 0.0 <= fVar10) {
        if (cVar15 == '\0') {
            dVar11 = (double)(u64)uVar2;
            uVar13 = in_xd2;
        }
    } else {
        if (cVar15 == '\0') {
            dVar11 = (double)(u64)uVar2;
            in_dr0 = (double)CONCAT44((int)((u64)in_dr0 >> 0x20), 0x4f800000);
            uVar13 = in_xd2;
        } else {
            in_xd0 = -1.8629950226301174e-249;
        }
        if (cVar14 == '\0') {
            dVar11 = (double)(u64)(u32)(SUB84(dVar11, 0) + SUB84(in_dr0, 0));
        } else {
            dVar11 = dVar11 + in_dr0;
        }
    }
    if (cVar15 == '\0') {
        uStack_18 = CONCAT44(uStack_18._4_4_, SUB84(dVar11, 0));
    } else {
        uStack_18 = uVar13;
    }
    iVar1 = *piVar8;
    fVar10 = (float)iVar1;
    dVar11 = (double)CONCAT44((int)((u64)dVar11 >> 0x20), fVar10);
    if (iVar1 < 0) {
        if (cVar14 == '\0') {
            dVar11 = (double)CONCAT44(0x4f800000, fVar10 + 4.2949673e+09);
        } else {
            dVar11 = (double)CONCAT44(0x4f800000, fVar10) + (double)CONCAT44(0x4f800000, fVar10);
        }
    }
    if (cVar15 == '\0') {
        in_dr0 = (double)CONCAT44((int)((u64)in_dr0 >> 0x20), g_8c4aad54);
    } else {
        in_xd0 = (double)CONCAT44(g_8c4aad58, g_8c4aad54);
    }
    if (cVar14 == '\0') {
        fVar10 = SUB84(in_dr0, 0) - SUB84(dVar11, 0);
    } else {
        fVar10 = SUB84(in_dr0 - dVar11, 0);
    }
    uVar2 = (u32)(0 < *piVar6 - iVar1);
    if (cVar15 == '\0') {
        dVar11 = (double)CONCAT44((int)((u64)dVar11 >> 0x20), (&uStack_1c)[uVar2]);
    }
    iVar1 = piVar6[1] - piVar8[1];
    if (cVar15 == '\0') {
        in_xd0 = (double)CONCAT44(fVar10, (int)uVar12);
    }
    if (cVar14 == '\0') {
        fVar10 = (float)((u64)in_xd0 >> 0x20) / SUB84(dVar11, 0);
    } else {
        fVar10 = (float)((u64)(in_xd0 / dVar11) >> 0x20);
    }
    if (cVar14 == '\0') {
        dVar11 = (double)CONCAT44(fVar10, 1.0 - fVar10);
    } else {
        dVar11 = (double)CONCAT44(fVar10, 0x3f800000) - (double)CONCAT44(fVar10, 0x3f800000);
    }
    if (iVar1 < 0x8001) {
        if (iVar1 < -0x8000) {
            iVar1 = iVar1 + 0x10000;
        }
    } else {
        iVar1 = iVar1 + -0x10000;
    }
    iVar5 = piVar6[2] - piVar8[2];
    if (iVar5 < 0x8001) {
        if (iVar5 < -0x8000) {
            iVar5 = iVar5 + 0x10000;
        }
    } else {
        iVar5 = iVar5 + -0x10000;
    }
    iVar3 = piVar8[2];
    iVar7 = piVar6[3] - piVar8[3];
    if (iVar7 < 0x8001) {
        if (iVar7 < -0x8000) {
            iVar7 = iVar7 + 0x10000;
        }
    } else {
        iVar7 = iVar7 + -0x10000;
    }
    if (cVar15 == '\0') {
        fVar9 = SUB84(dVar11, 0);
    }
    iVar4 = piVar8[3];
    fVar10 = (float)((u64)dVar11 >> 0x20);
    if (cVar14 == '\0') {
        iVar1 = (int)(fVar9 * (float)piVar8[1] + (float)(iVar1 + piVar8[1]) * fVar10);
    } else {
        iVar1 = (int)((double)(iVar1 + piVar8[1]) * dVar11);
    }
    *a3 = iVar1;
    if (cVar14 == '\0') {
        iVar1 = (int)(fVar9 * (float)piVar8[2] + (float)(iVar5 + iVar3) * fVar10);
    } else {
        iVar1 = (int)((double)(iVar5 + iVar3) * dVar11);
    }
    a3[1] = iVar1;
    if (cVar14 == '\0') {
        iVar1 = (int)(fVar9 * (float)piVar8[3] + (float)(iVar7 + iVar4) * fVar10);
    } else {
        iVar1 = (int)((double)(iVar7 + iVar4) * dVar11);
    }
    a3[2] = iVar1;
    return uVar2 * 4;
}

/*
 * gfxlib_uses_libgcc_divide_helper_21d3e8  0x8c21d3e8
 * area name: in the gfxlib library code range; behaviour name: its main named callee is libgcc_divide_helper_0106dc
 */
u32 gfxlib_uses_libgcc_divide_helper_21d3e8(int a0, int a1, int a2, int *a3) {
    float fVar1;
    int iVar2;
    u32 uVar3;
    u32 uVar4;
    int iVar5;
    int *piVar6;
    int *piVar7;
    int *piVar8;
    int *piVar9;
    float fVar10;
    double in_dr0;
    double dVar11;
    float fVar12;
    float fVar13;
    double dVar14;
    double dVar15;
    double dVar16;
    double dVar17;
    double dVar18;
    double dVar19;
    u32 in_fr5;
    float fVar21;
    double dVar22;
    float fVar23;
    float fVar24;
    double in_dr6;
    double dVar25;
    float fVar26;
    u32 in_fr9;
    double dVar27;
    double in_dr10;
    u32 uVar28;
    u32 in_fr13;
    double dVar29;
    double in_dr14;
    double in_xd0;
    double in_xd2;
    double in_xd4;
    double in_xd6;
    double in_xd8;
    double in_xd10;
    double in_xd12;
    double in_xd14;
    bool bVar30;
    u32 in_PR;
    char cVar31;
    char cVar32;
    float fStack_4c;
    float fStack_48;
    float fStack_44;
    float fStack_40;
    float fStack_3c;
    float fStack_38;
    float fStack_34;
    float fStack_30;
    float fStack_2c;
    u32 uStack_28;
    u32 uStack_24;
    float fVar20;

    cVar32 = '\0';
    cVar31 = '\0';
    iVar2 = libgcc_divide_helper_0106dc(a1 + a2 + -1, a2);
    piVar6 = (int *)(iVar2 * 0x10 + a0);
    piVar9 = (int *)(a1 * 0x10 + a0);
    iVar2 = libgcc_divide_helper_0106dc(a1 + 1, a2);
    piVar8 = (int *)(iVar2 * 0x10 + a0);
    iVar2 = libgcc_divide_helper_0106dc(a1 + 2, a2);
    piVar7 = (int *)(iVar2 * 0x10 + a0);
    fVar12 = (float)*piVar8;
    if (*piVar8 < 0) {
        if (cVar31 == '\0') {
            fVar12 = fVar12 + 4.2949673e+09;
        } else {
            fVar12 = SUB84((double)CONCAT44(0x4f800000, fVar12) + (double)CONCAT44(0x4f800000, fVar12), 0);
        }
    }
    iVar2 = *piVar9;
    if (cVar31 == '\0') {
        dVar14 = (double)CONCAT44((float)iVar2, fVar12);
    } else {
        dVar14 = (double)iVar2;
    }
    if (iVar2 < 0) {
        if (cVar32 == '\0') {
            in_dr0 = (double)CONCAT44((int)((u64)in_dr0 >> 0x20), 0x4f800000);
        } else {
            in_xd0 = -1.8629950226301174e-249;
        }
        if (cVar31 == '\0') {
            dVar14 = (double)CONCAT44((float)((u64)dVar14 >> 0x20) + SUB84(in_dr0, 0), SUB84(dVar14, 0));
        } else {
            dVar14 = dVar14 + in_dr0;
        }
    }
    dVar15 = in_xd2;
    if (cVar32 == '\0') {
        in_dr6 = (double)CONCAT44((int)((u64)in_dr6 >> 0x20), SUB84(dVar14, 0));
        dVar15 = in_xd6;
    }
    fVar12 = (float)((u64)dVar14 >> 0x20);
    if (cVar31 == '\0') {
        in_dr6 = (double)CONCAT44((int)((u64)in_dr6 >> 0x20), SUB84(in_dr6, 0) - fVar12);
    } else {
        in_dr6 = in_dr6 - dVar14;
    }
    if (cVar31 == '\0') {
        bVar30 = 0.0 < SUB84(in_dr6, 0);
    } else {
        bVar30 = (double)((u64)(u32)fVar12 << 0x20) < in_dr6;
    }
    dVar27 = (double)CONCAT44(0x3f800000, in_fr9);
    dVar14 = dVar15;
    if ((!bVar30) && (dVar14 = dVar27, cVar32 == '\0')) {
        in_dr6 = (double)CONCAT44((int)((u64)in_dr6 >> 0x20), 0x3f800000);
        dVar14 = dVar15;
    }
    fVar12 = (float)*piVar7;
    if (*piVar7 < 0) {
        if (cVar31 == '\0') {
            fVar12 = fVar12 + 4.2949673e+09;
        } else {
            fVar12 = SUB84((double)CONCAT44(0x4f800000, fVar12) + (double)CONCAT44(0x4f800000, fVar12), 0);
        }
    }
    iVar2 = *piVar8;
    if (cVar31 == '\0') {
        dVar15 = (double)CONCAT44((float)iVar2, fVar12);
    } else {
        dVar15 = (double)iVar2;
    }
    if (iVar2 < 0) {
        if (cVar32 == '\0') {
            in_dr0 = (double)CONCAT44((int)((u64)in_dr0 >> 0x20), 0x4f800000);
        } else {
            in_xd0 = -1.8629950226301174e-249;
        }
        if (cVar31 == '\0') {
            dVar15 = (double)CONCAT44((float)((u64)dVar15 >> 0x20) + SUB84(in_dr0, 0), SUB84(dVar15, 0));
        } else {
            dVar15 = dVar15 + in_dr0;
        }
    }
    dVar16 = in_xd2;
    if (cVar32 == '\0') {
        in_dr14 = (double)CONCAT44((int)((u64)in_dr14 >> 0x20), SUB84(dVar15, 0));
        dVar16 = in_xd14;
    }
    fVar12 = (float)((u64)dVar15 >> 0x20);
    if (cVar31 == '\0') {
        in_dr14 = (double)CONCAT44((int)((u64)in_dr14 >> 0x20), SUB84(in_dr14, 0) - fVar12);
    } else {
        in_dr14 = in_dr14 - dVar15;
    }
    if (cVar31 == '\0') {
        bVar30 = 0.0 < SUB84(in_dr14, 0);
    } else {
        bVar30 = (double)((u64)(u32)fVar12 << 0x20) < in_dr14;
    }
    dVar15 = dVar16;
    if ((!bVar30) && (dVar15 = dVar27, cVar32 == '\0')) {
        in_dr14 = 5.26354424712089e-315;
        dVar15 = dVar16;
    }
    fVar12 = (float)*piVar9;
    if (*piVar9 < 0) {
        if (cVar31 == '\0') {
            fVar12 = fVar12 + 4.2949673e+09;
        } else {
            fVar12 = SUB84((double)CONCAT44(0x4f800000, fVar12) + (double)CONCAT44(0x4f800000, fVar12), 0);
        }
    }
    iVar2 = *piVar6;
    if (cVar31 == '\0') {
        dVar16 = (double)CONCAT44((float)iVar2, fVar12);
    } else {
        dVar16 = (double)iVar2;
    }
    if (iVar2 < 0) {
        if (cVar32 == '\0') {
            in_dr0 = (double)CONCAT44((int)((u64)in_dr0 >> 0x20), 0x4f800000);
        } else {
            in_xd0 = -1.8629950226301174e-249;
        }
        if (cVar31 == '\0') {
            dVar16 = (double)CONCAT44((float)((u64)dVar16 >> 0x20) + SUB84(in_dr0, 0), SUB84(dVar16, 0));
        } else {
            dVar16 = dVar16 + in_dr0;
        }
    }
    dVar17 = in_xd2;
    if (cVar32 == '\0') {
        in_dr10 = (double)CONCAT44((int)((u64)in_dr10 >> 0x20), SUB84(dVar16, 0));
        dVar17 = in_xd10;
    }
    fVar12 = (float)((u64)dVar16 >> 0x20);
    if (cVar31 == '\0') {
        in_dr10 = (double)CONCAT44((int)((u64)in_dr10 >> 0x20), SUB84(in_dr10, 0) - fVar12);
    } else {
        in_dr10 = in_dr10 - dVar16;
    }
    if (cVar31 == '\0') {
        bVar30 = 0.0 < SUB84(in_dr10, 0);
    } else {
        bVar30 = (double)((u64)(u32)fVar12 << 0x20) < in_dr10;
    }
    dVar16 = dVar17;
    if ((!bVar30) && (dVar16 = dVar27, cVar32 == '\0')) {
        in_dr10 = 5.26354424712089e-315;
        dVar16 = dVar17;
    }
    fVar12 = (float)*piVar9;
    if (*piVar9 < 0) {
        if (cVar31 == '\0') {
            fVar12 = fVar12 + 4.2949673e+09;
        } else {
            fVar12 = SUB84((double)CONCAT44(0x4f800000, fVar12) + (double)CONCAT44(0x4f800000, fVar12), 0);
        }
    }
    dVar17 = dVar15;
    if (cVar32 == '\0') {
        dVar17 = (double)CONCAT44(SUB84(in_dr14, 0), fVar12);
    }
    fVar12 = SUB84(in_dr6, 0);
    if (cVar31 == '\0') {
        dVar17 = (double)CONCAT44((float)((u64)dVar17 >> 0x20) + fVar12, SUB84(dVar17, 0));
    } else {
        dVar17 = dVar17 + in_dr6;
    }
    if (cVar32 == '\0') {
        dVar11 = (double)CONCAT44(fVar12, g_8c4aad54);
    } else {
        in_xd0 = (double)CONCAT44(g_8c4aad58, g_8c4aad54);
        dVar11 = dVar14;
    }
    if (cVar31 == '\0') {
        dVar11 = (double)CONCAT44((int)((u64)dVar11 >> 0x20), SUB84(dVar11, 0) - SUB84(dVar17, 0));
    } else {
        dVar11 = dVar11 - dVar17;
    }
    if (cVar32 == '\0') {
        in_fr5 = 0x3f800000;
        dVar17 = (double)CONCAT44((int)((u64)dVar17 >> 0x20), 0x3eaaaa3b);
        dVar27 = (double)CONCAT44(0x3f800000, fVar12);
    } else {
        in_xd2 = 32.00000747044802;
        in_xd8 = dVar14;
        in_xd4 = dVar27;
    }
    if (cVar31 == '\0') {
        dVar27 = (double)CONCAT44((int)((u64)dVar27 >> 0x20), SUB84(dVar27, 0) * SUB84(dVar17, 0));
    } else {
        dVar27 = dVar27 * dVar17;
    }
    dVar22 = in_xd0;
    if (cVar32 == '\0') {
        dVar22 = (double)CONCAT44(SUB84(dVar11, 0), in_fr5);
    }
    if (cVar31 == '\0') {
        dVar22 = (double)CONCAT44((float)((u64)dVar22 >> 0x20) / fVar12, SUB84(dVar22, 0));
    } else {
        dVar22 = dVar22 / in_dr6;
    }
    if (cVar32 == '\0') {
        dVar11 = (double)CONCAT44((int)((u64)dVar11 >> 0x20), fVar12);
        dVar14 = in_xd0;
    }
    if (cVar31 == '\0') {
        dVar11 = (double)CONCAT44((int)((u64)dVar11 >> 0x20), SUB84(dVar11, 0) / (float)((u64)dVar17 >> 0x20));
    } else {
        dVar11 = dVar11 / dVar17;
    }
    dVar18 = dVar16;
    if (cVar32 == '\0') {
        dVar18 = (double)CONCAT44(SUB84(in_dr10, 0), SUB84(dVar17, 0));
    }
    if (cVar31 == '\0') {
        fVar20 = (float)((u64)dVar18 >> 0x20) + fVar12;
        dVar18 = (double)CONCAT44(fVar20, SUB84(dVar18, 0));
        dVar11 = (double)CONCAT44((float)((u64)dVar11 >> 0x20) / fVar20, SUB84(dVar11, 0));
        fVar23 = (float)((u64)dVar22 >> 0x20);
        dVar22 = (double)CONCAT44(fVar23, SUB84(dVar22, 0) - fVar23);
    } else {
        dVar18 = dVar18 + in_dr6;
        fVar20 = (float)((u64)dVar18 >> 0x20);
        dVar11 = dVar11 / dVar18;
        dVar22 = dVar22 - dVar22;
    }
    fVar23 = (float)((u64)dVar22 >> 0x20);
    dVar17 = dVar22;
    if (cVar32 == '\0') {
        dVar17 = (double)CONCAT44(fVar23, SUB84(in_dr10, 0));
    }
    if (cVar31 == '\0') {
        dVar17 = (double)CONCAT44((float)((u64)dVar17 >> 0x20) * fVar23, SUB84(dVar17, 0));
    } else {
        dVar17 = dVar17 * dVar22;
    }
    fVar21 = SUB84(dVar22, 0);
    fStack_38 = SUB84(dVar11, 0);
    if (cVar32 == '\0') {
        dVar25 = (double)CONCAT44(fVar21, fVar12);
        dVar29 = (double)CONCAT44(fVar23, in_fr13);
        fStack_34 = fStack_38;
    } else {
        fStack_34 = SUB84(dVar14, 0);
        fStack_30 = (float)((u64)dVar14 >> 0x20);
        dVar25 = in_xd4;
        dVar29 = dVar22;
    }
    if (cVar31 == '\0') {
        dVar25 = (double)CONCAT44((float)((u64)dVar25 >> 0x20) * fVar21, SUB84(dVar25, 0));
    } else {
        dVar25 = dVar25 * dVar22;
    }
    if (cVar32 == '\0') {
        dVar18 = (double)CONCAT44(fVar20, fVar21);
        in_xd4 = in_xd2;
    }
    fVar12 = (float)((u64)dVar17 >> 0x20);
    if (cVar31 == '\0') {
        dVar29 = (double)CONCAT44((float)((u64)dVar29 >> 0x20) * fVar12, SUB84(dVar29, 0));
    } else {
        dVar29 = dVar29 * dVar17;
    }
    fVar10 = (float)((u64)dVar11 >> 0x20);
    fVar20 = fVar10;
    if (cVar32 == '\0') {
        fStack_38 = fVar10;
        fVar20 = fStack_34;
    }
    fStack_34 = fVar20;
    fVar20 = (float)((u64)dVar25 >> 0x20);
    if (cVar31 == '\0') {
        fVar13 = SUB84(dVar18, 0) * fVar20;
        dVar22 = (double)CONCAT44(fVar23 * fVar20, fVar21);
    } else {
        fVar13 = SUB84(dVar18 * dVar25, 0);
        dVar22 = dVar22 * dVar25;
    }
    fStack_3c = fVar13;
    if (cVar32 != '\0') {
        fStack_3c = SUB84(in_xd4, 0);
        fStack_38 = (float)((u64)in_xd4 >> 0x20);
    }
    if (cVar31 == '\0') {
        dVar17 = (double)CONCAT44(fVar12 * SUB84(dVar22, 0), SUB84(dVar17, 0));
    } else {
        dVar17 = dVar17 * dVar22;
    }
    fVar12 = (float)((u64)dVar27 >> 0x20);
    if (cVar32 == '\0') {
        dVar18 = (double)CONCAT44(0x40400000, SUB84(in_dr14, 0));
        dVar19 = (double)CONCAT44(fVar12, fVar13);
    } else {
        dVar18 = 1.038459620262114e+34;
        dVar19 = dVar27;
    }
    fVar20 = (float)((u64)dVar18 >> 0x20);
    if (cVar31 == '\0') {
        dVar19 = (double)CONCAT44((float)((u64)dVar19 >> 0x20) - fVar10, SUB84(dVar19, 0));
        fVar23 = (float)((u64)dVar22 >> 0x20) * fVar20;
        dVar17 = (double)CONCAT44((float)((u64)dVar17 >> 0x20) * fVar20, SUB84(dVar17, 0));
    } else {
        dVar19 = dVar19 - dVar11;
        fVar23 = (float)((u64)(dVar22 * dVar18) >> 0x20);
        dVar17 = dVar17 * dVar18;
    }
    uVar4 = 0;
    fStack_40 = (float)((u64)dVar17 >> 0x20);
    fVar20 = SUB84(dVar19, 0);
    fStack_44 = (float)((u64)dVar19 >> 0x20);
    if (cVar32 == '\0') {
        dVar25 = (double)CONCAT44(0x47000000, SUB84(dVar25, 0));
        dVar22 = 2.658457962370374e+36;
        fStack_48 = fStack_44;
        fStack_44 = fStack_40;
        fStack_40 = fVar23;
    } else {
        dVar25 = -1.0384596463749117e+34;
        dVar22 = -2.633278440589894e-265;
        fStack_48 = fVar20;
        fStack_3c = fVar23;
    }
    fVar23 = fStack_48;
    fVar26 = (float)((u64)dVar25 >> 0x20);
    fVar21 = SUB84(dVar22, 0);
    fVar13 = (float)((u64)dVar22 >> 0x20);
    fVar24 = SUB84(dVar25, 0);
    if (a1 == a2 + -2) {
        if (cVar32 == '\0') {
            dVar14 = (double)CONCAT44(fStack_38, fVar20);
        } else {
            dVar14 = (double)CONCAT44(fStack_34, fStack_38);
        }
        if (cVar31 == '\0') {
            dVar14 = (double)CONCAT44((float)((u64)dVar14 >> 0x20) + fVar12, SUB84(dVar14, 0));
        } else {
            dVar14 = dVar14 + dVar27;
        }
        uVar3 = (u32)((u64)dVar14 >> 0x20);
        uStack_28 = uVar3;
        uStack_24 = in_PR;
        if (cVar32 != '\0') {
            uStack_28 = SUB84(dVar14, 0);
            uStack_24 = uVar3;
        }
        do {
            iVar2 = *(int *)((int)piVar9 + uVar4 + 4);
            dVar14 = in_xd4;
            if (cVar32 == '\0') {
                dVar14 = (double)CONCAT44((float)iVar2, SUB84(dVar17, 0));
            }
            dVar16 = in_xd4;
            if (cVar32 == '\0') {
                dVar16 = (double)CONCAT44((float)*(int *)((int)piVar8 + uVar4 + 4), SUB84(dVar27, 0));
            }
            fVar12 = (float)((u64)dVar14 >> 0x20);
            if (cVar31 == '\0') {
                dVar16 = (double)CONCAT44((float)((u64)dVar16 >> 0x20) - fVar12, SUB84(dVar16, 0));
            } else {
                dVar16 = dVar16 - dVar14;
            }
            fVar20 = (float)((u64)dVar16 >> 0x20);
            if (cVar31 == '\0') {
                bVar30 = fVar26 < fVar20;
            } else {
                bVar30 = dVar25 < dVar16;
            }
            dVar27 = in_xd4;
            if (cVar32 == '\0') {
                dVar18 =
                    (double)CONCAT44((int)((u64)dVar18 >> 0x20), (float)(iVar2 - *(int *)((int)piVar6 + uVar4 + 4)));
                dVar27 = dVar15;
            }
            if (bVar30) {
                if (cVar31 == '\0') {
                    dVar16 = (double)CONCAT44(fVar20 - fVar13, SUB84(dVar16, 0));
                } else {
                    dVar16 = dVar16 - dVar22;
                }
            } else {
                if (cVar31 == '\0') {
                    bVar30 = fVar21 < fVar20;
                } else {
                    bVar30 = dVar22 < dVar16;
                }
                if (!bVar30) {
                    if (cVar31 == '\0') {
                        dVar16 = (double)CONCAT44(fVar20 + fVar13, SUB84(dVar16, 0));
                    } else {
                        dVar16 = dVar16 + dVar22;
                    }
                }
            }
            if (cVar31 == '\0') {
                bVar30 = fVar26 < SUB84(dVar18, 0);
            } else {
                bVar30 = dVar25 < dVar18;
            }
            fVar20 = (float)((u64)dVar16 >> 0x20);
            dVar15 = dVar16;
            if (cVar32 == '\0') {
                dVar15 = (double)CONCAT44(fVar20, SUB84(dVar18, 0));
            }
            if (cVar31 == '\0') {
                dVar15 = (double)CONCAT44((float)((u64)dVar15 >> 0x20) + fVar12, SUB84(dVar15, 0));
            } else {
                dVar15 = dVar15 + dVar14;
            }
            uVar3 = (u32)((u64)dVar15 >> 0x20);
            fVar23 = SUB84(dVar15, 0);
            if (bVar30) {
                if (cVar31 == '\0') {
                    dVar15 = (double)CONCAT44(uVar3, fVar23 - fVar13);
                } else {
                    dVar15 = dVar15 - dVar22;
                }
            } else {
                if (cVar31 == '\0') {
                    bVar30 = fVar21 < fVar23;
                } else {
                    bVar30 = dVar22 < dVar15;
                }
                if (!bVar30) {
                    if (cVar31 == '\0') {
                        dVar15 = (double)CONCAT44(uVar3, fVar23 + fVar13);
                    } else {
                        dVar15 = dVar15 + dVar22;
                    }
                }
            }
            if (cVar32 == '\0') {
                dVar17 = (double)CONCAT44(fStack_38, fStack_48);
            } else {
                in_xd4 = (double)CONCAT44(fStack_44, fStack_48);
                dVar17 = (double)CONCAT44(fStack_34, fStack_38);
            }
            if (cVar31 == '\0') {
                dVar17 = (double)CONCAT44((float)((u64)dVar17 >> 0x20) * SUB84(dVar15, 0),
                                          (SUB84(dVar17, 0) * fVar20) / fVar24);
            } else {
                dVar17 = (dVar17 * dVar16 * dVar15) / dVar25;
            }
            if (cVar32 == '\0') {
                dVar29 = (double)CONCAT44((int)((u64)dVar29 >> 0x20), (int)((u64)dVar17 >> 0x20));
            }
            if (cVar31 == '\0') {
                dVar29 = (double)CONCAT44((int)((u64)dVar29 >> 0x20), SUB84(dVar29, 0) / SUB84(dVar14, 0));
            } else {
                dVar29 = dVar29 / dVar14;
            }
            if (cVar32 == '\0') {
                dVar15 = (double)CONCAT44((int)((u64)dVar15 >> 0x20), SUB84(dVar17, 0));
                fVar23 = (float)((u64)dVar27 >> 0x20);
                dVar17 = (double)CONCAT44(SUB84(dVar16, 0), uStack_28);
                dVar11 = in_xd4;
            } else {
                fVar23 = (float)((u64)in_xd4 >> 0x20);
                dVar11 = (double)CONCAT44(uStack_24, uStack_28);
                dVar17 = in_xd8;
                dVar27 = in_xd4;
            }
            if (cVar31 == '\0') {
                dVar18 = (double)CONCAT44((int)((u64)dVar15 >> 0x20), SUB84(dVar15, 0) + SUB84(dVar29, 0));
                dVar17 = (double)CONCAT44((int)((u64)dVar17 >> 0x20), SUB84(dVar17, 0) * fVar20);
            } else {
                dVar18 = dVar15 + dVar29;
                dVar17 = dVar17 * dVar16;
            }
            if (cVar32 == '\0') {
                fVar23 = SUB84(dVar18, 0);
            }
            if (cVar31 == '\0') {
                dVar17 = (double)CONCAT44((int)((u64)dVar17 >> 0x20), SUB84(dVar17, 0) / fVar24);
            } else {
                dVar17 = dVar17 / dVar25;
            }
            dVar19 = dVar11;
            if (cVar32 == '\0') {
                dVar19 = (double)CONCAT44(SUB84(dVar17, 0), SUB84(dVar16, 0));
            }
            if (cVar31 == '\0') {
                dVar19 = (double)CONCAT44((float)((u64)dVar19 >> 0x20) - SUB84(dVar29, 0), SUB84(dVar19, 0));
            } else {
                dVar19 = dVar19 - dVar29;
            }
            dVar15 = dVar14;
            if (cVar32 == '\0') {
                dVar17 = (double)CONCAT44((int)((u64)dVar17 >> 0x20), fVar12);
                dVar15 = dVar11;
            }
            if (cVar31 == '\0') {
                dVar17 = (double)CONCAT44((int)((u64)dVar17 >> 0x20), fVar23 * SUB84(dVar19, 0) + SUB84(dVar17, 0));
            }
            dVar16 = dVar14;
            if (cVar32 == '\0') {
                dVar16 = (double)((u64)(u32)fVar12 << 0x20);
            }
            if (cVar31 == '\0') {
                dVar17 =
                    (double)CONCAT44((float)((u64)dVar17 >> 0x20) * (float)((u64)dVar19 >> 0x20), SUB84(dVar17, 0));
            } else {
                dVar17 = dVar17 * dVar19;
            }
            uVar3 = (u32)((u64)dVar18 >> 0x20);
            if (cVar32 == '\0') {
                dVar18 = (double)CONCAT44(uVar3, SUB84(dVar17, 0));
                dVar17 = (double)CONCAT44((int)((u64)dVar17 >> 0x20), fStack_40);
                in_xd4 = dVar15;
                dVar15 = dVar27;
                dVar27 = (double)CONCAT44(uVar3, SUB84(dVar19, 0));
            } else {
                in_xd4 = (double)CONCAT44(fStack_3c, fStack_40);
                dVar27 = dVar18;
            }
            if (cVar31 == '\0') {
                fVar12 = (float)((u64)dVar17 >> 0x20);
                dVar17 = (double)CONCAT44(fVar12, SUB84(dVar17, 0) * SUB84(dVar18, 0));
                dVar27 = (double)CONCAT44((float)((u64)dVar27 >> 0x20) - fVar12, SUB84(dVar27, 0));
            } else {
                dVar17 = dVar17 * dVar18;
                dVar27 = dVar27 - dVar17;
            }
            fVar12 = fStack_3c;
            fVar20 = fStack_38;
            if (cVar32 == '\0') {
                fVar12 = SUB84(dVar17, 0);
                fVar20 = fStack_3c;
            }
            if (cVar31 == '\0') {
                fVar12 = (float)((u64)dVar16 >> 0x20) * fVar20 + fVar12;
            }
            uVar3 = 8;
            if (cVar32 == '\0') {
                dVar17 = (double)CONCAT44(fStack_44, fVar12);
                dVar16 = (double)((u64)dVar27 & 0xffffffff00000000);
            } else {
                dVar17 = (double)CONCAT44(fStack_40, fStack_44);
                dVar16 = dVar27;
            }
            uVar4 = uVar4 + 4;
            if (cVar31 == '\0') {
                iVar2 = (int)((float)((u64)dVar18 >> 0x20) * (float)((u64)dVar29 >> 0x20) +
                              (float)((u64)dVar16 >> 0x20) * (float)((u64)dVar17 >> 0x20) + SUB84(dVar17, 0));
            } else {
                iVar2 = (int)dVar17;
            }
            *a3 = iVar2;
            a3 = a3 + 1;
            dVar17 = dVar14;
        } while (uVar4 < 0xc);
    } else {
        if (cVar32 == '\0') {
            dVar11 = (double)CONCAT44(fVar10, fVar12);
            dVar15 = (double)CONCAT44(fStack_34, fVar20);
        } else {
            dVar15 = (double)CONCAT44(fStack_30, fStack_34);
            dVar14 = dVar27;
        }
        fVar20 = (float)((u64)dVar15 >> 0x20);
        if (cVar31 == '\0') {
            fVar10 = SUB84(dVar11, 0) - fVar20;
        } else {
            fVar10 = SUB84(dVar11 - dVar15, 0);
        }
        fStack_48 = (float)((u64)dVar14 >> 0x20);
        fVar1 = fStack_48;
        if (cVar32 == '\0') {
            fStack_48 = fVar23;
        }
        fStack_4c = SUB84(dVar14, 0);
        if (a1 == 0) {
            if (cVar31 == '\0') {
                dVar15 = (double)CONCAT44(fVar20 + fVar12, SUB84(dVar15, 0));
            } else {
                dVar15 = dVar15 + dVar27;
            }
            uVar3 = (u32)((u64)dVar15 >> 0x20);
            fStack_2c = (float)uVar3;
            if (cVar32 != '\0') {
                fStack_2c = SUB84(dVar15, 0);
                fVar10 = fStack_4c;
                fStack_48 = fVar1;
                uStack_28 = uVar3;
            }
            do {
                fStack_4c = fVar10;
                iVar2 = *(int *)((int)piVar8 + uVar4 + 4);
                dVar14 = in_xd4;
                if (cVar32 == '\0') {
                    dVar14 = (double)CONCAT44((float)*(int *)((int)piVar9 + uVar4 + 4), SUB84(dVar17, 0));
                }
                dVar15 = in_xd4;
                if (cVar32 == '\0') {
                    dVar15 = (double)CONCAT44((float)iVar2, SUB84(dVar27, 0));
                }
                fVar12 = (float)((u64)dVar14 >> 0x20);
                if (cVar31 == '\0') {
                    dVar15 = (double)CONCAT44((float)((u64)dVar15 >> 0x20) - fVar12, SUB84(dVar15, 0));
                } else {
                    dVar15 = dVar15 - dVar14;
                }
                fVar20 = (float)((u64)dVar15 >> 0x20);
                if (cVar31 == '\0') {
                    bVar30 = fVar26 < fVar20;
                } else {
                    bVar30 = dVar25 < dVar15;
                }
                dVar27 = in_xd4;
                if (cVar32 == '\0') {
                    dVar14 = (double)CONCAT44(fVar12, (float)(*(int *)((int)piVar7 + uVar4 + 4) - iVar2));
                    dVar27 = dVar16;
                }
                if (bVar30) {
                    if (cVar31 == '\0') {
                        dVar15 = (double)CONCAT44(fVar20 - fVar13, SUB84(dVar15, 0));
                    } else {
                        dVar15 = dVar15 - dVar22;
                    }
                } else {
                    if (cVar31 == '\0') {
                        bVar30 = fVar21 < fVar20;
                    } else {
                        bVar30 = dVar22 < dVar15;
                    }
                    if (!bVar30) {
                        if (cVar31 == '\0') {
                            dVar15 = (double)CONCAT44(fVar20 + fVar13, SUB84(dVar15, 0));
                        } else {
                            dVar15 = dVar15 + dVar22;
                        }
                    }
                }
                fVar12 = SUB84(dVar14, 0);
                if (cVar31 == '\0') {
                    bVar30 = fVar26 < fVar12;
                } else {
                    bVar30 = dVar25 < dVar14;
                }
                fVar20 = (float)((u64)dVar15 >> 0x20);
                dVar16 = dVar15;
                if (cVar32 == '\0') {
                    dVar16 = (double)CONCAT44(fVar20, SUB84(dVar18, 0));
                }
                fVar23 = (float)((u64)dVar14 >> 0x20);
                if (cVar31 == '\0') {
                    dVar18 = (double)CONCAT44((float)((u64)dVar16 >> 0x20) + fVar23, SUB84(dVar16, 0));
                } else {
                    dVar18 = dVar16 + dVar14;
                }
                if (bVar30) {
                    if (cVar31 == '\0') {
                        dVar14 = (double)CONCAT44(fVar23, fVar12 - fVar13);
                    } else {
                        dVar14 = dVar14 - dVar22;
                    }
                } else {
                    if (cVar31 == '\0') {
                        bVar30 = fVar21 < fVar12;
                    } else {
                        bVar30 = dVar22 < dVar14;
                    }
                    if (!bVar30) {
                        if (cVar31 == '\0') {
                            dVar14 = (double)CONCAT44(fVar23, fVar12 + fVar13);
                        } else {
                            dVar14 = dVar14 + dVar22;
                        }
                    }
                }
                if (cVar32 == '\0') {
                    dVar16 = (double)CONCAT44(fStack_34, fStack_2c);
                } else {
                    in_xd4 = (double)CONCAT44(uStack_28, fStack_2c);
                    dVar16 = (double)CONCAT44(fStack_30, fStack_34);
                }
                if (cVar31 == '\0') {
                    dVar16 = (double)CONCAT44((float)((u64)dVar16 >> 0x20) * SUB84(dVar14, 0),
                                              (SUB84(dVar16, 0) * fVar20) / fVar24);
                } else {
                    dVar16 = (dVar16 * dVar15 * dVar14) / dVar25;
                }
                if (cVar32 == '\0') {
                    dVar29 = (double)CONCAT44((int)((u64)dVar29 >> 0x20), (int)((u64)dVar16 >> 0x20));
                }
                if (cVar31 == '\0') {
                    dVar29 = (double)CONCAT44((int)((u64)dVar29 >> 0x20), SUB84(dVar29, 0) / SUB84(dVar18, 0));
                } else {
                    dVar29 = dVar29 / dVar18;
                }
                if (cVar32 == '\0') {
                    dVar14 = (double)CONCAT44((int)((u64)dVar14 >> 0x20), SUB84(dVar16, 0));
                    fVar12 = (float)((u64)dVar27 >> 0x20);
                    dVar11 = (double)CONCAT44(SUB84(dVar15, 0), fStack_4c);
                    dVar19 = in_xd4;
                } else {
                    fVar12 = (float)((u64)in_xd4 >> 0x20);
                    dVar19 = (double)CONCAT44(fStack_48, fStack_4c);
                    dVar11 = in_xd8;
                    dVar27 = in_xd4;
                }
                if (cVar31 == '\0') {
                    dVar17 = (double)CONCAT44((int)((u64)dVar14 >> 0x20), SUB84(dVar14, 0) - SUB84(dVar29, 0));
                    dVar11 = (double)CONCAT44((int)((u64)dVar11 >> 0x20), SUB84(dVar11, 0) * fVar20);
                } else {
                    dVar17 = dVar14 - dVar29;
                    dVar11 = dVar11 * dVar15;
                }
                if (cVar32 == '\0') {
                    fVar12 = SUB84(dVar17, 0);
                }
                if (cVar31 == '\0') {
                    dVar11 = (double)CONCAT44((int)((u64)dVar11 >> 0x20), SUB84(dVar11, 0) / fVar24);
                } else {
                    dVar11 = dVar11 / dVar25;
                }
                dVar14 = dVar19;
                if (cVar32 == '\0') {
                    dVar14 = (double)CONCAT44(SUB84(dVar11, 0), SUB84(dVar15, 0));
                }
                if (cVar31 == '\0') {
                    dVar14 = (double)CONCAT44((float)((u64)dVar14 >> 0x20) + SUB84(dVar29, 0), SUB84(dVar14, 0));
                } else {
                    dVar14 = dVar14 + dVar29;
                }
                uVar28 = (u32)((u64)dVar17 >> 0x20);
                dVar16 = dVar17;
                if (cVar32 == '\0') {
                    dVar11 = (double)CONCAT44((int)((u64)dVar11 >> 0x20), uVar28);
                    dVar16 = dVar19;
                }
                if (cVar31 == '\0') {
                    dVar11 = (double)CONCAT44((int)((u64)dVar11 >> 0x20), fVar12 * SUB84(dVar14, 0) + SUB84(dVar11, 0));
                }
                dVar15 = dVar17;
                if (cVar32 == '\0') {
                    dVar15 = (double)((u64)uVar28 << 0x20);
                }
                if (cVar31 == '\0') {
                    dVar11 =
                        (double)CONCAT44((float)((u64)dVar11 >> 0x20) * (float)((u64)dVar14 >> 0x20), SUB84(dVar11, 0));
                } else {
                    dVar11 = dVar11 * dVar14;
                }
                fVar12 = (float)((u64)dVar18 >> 0x20);
                if (cVar32 == '\0') {
                    dVar17 = (double)CONCAT44(uVar28, SUB84(dVar11, 0));
                    dVar11 = (double)CONCAT44((int)((u64)dVar11 >> 0x20), fStack_40);
                    in_xd4 = dVar16;
                    dVar16 = dVar27;
                    dVar27 = (double)CONCAT44(fVar12, SUB84(dVar14, 0));
                } else {
                    in_xd4 = (double)CONCAT44(fStack_3c, fStack_40);
                    dVar27 = dVar18;
                }
                if (cVar31 == '\0') {
                    fVar20 = (float)((u64)dVar11 >> 0x20);
                    dVar11 = (double)CONCAT44(fVar20, SUB84(dVar11, 0) * SUB84(dVar17, 0));
                    dVar27 = (double)CONCAT44((float)((u64)dVar27 >> 0x20) - fVar20, SUB84(dVar27, 0));
                } else {
                    dVar11 = dVar11 * dVar17;
                    dVar27 = dVar27 - dVar11;
                }
                fVar20 = fStack_3c;
                fVar23 = fStack_38;
                if (cVar32 == '\0') {
                    fVar20 = SUB84(dVar11, 0);
                    fVar23 = fStack_3c;
                }
                if (cVar31 == '\0') {
                    fVar20 = (float)((u64)dVar15 >> 0x20) * fVar23 + fVar20;
                }
                dVar14 = dVar27;
                if (cVar32 == '\0') {
                    dVar14 = (double)((u64)dVar27 & 0xffffffff00000000);
                }
                uVar3 = 8;
                if (cVar32 == '\0') {
                    dVar15 = (double)CONCAT44(fStack_44, fVar20);
                } else {
                    dVar15 = (double)CONCAT44(fStack_40, fStack_44);
                }
                uVar4 = uVar4 + 4;
                if (cVar31 == '\0') {
                    iVar2 = (int)(fVar12 * (float)((u64)dVar29 >> 0x20) +
                                  (float)((u64)dVar14 >> 0x20) * (float)((u64)dVar15 >> 0x20) + SUB84(dVar15, 0));
                } else {
                    iVar2 = (int)dVar15;
                }
                *a3 = iVar2;
                a3 = a3 + 1;
                fVar10 = fStack_4c;
            } while (uVar4 < 0xc);
        } else {
            if (cVar32 == '\0') {
                fVar1 = fStack_48;
                fStack_4c = fVar10;
            }
            do {
                fStack_48 = fVar1;
                iVar5 = *(int *)((int)piVar9 + uVar4 + 4);
                iVar2 = *(int *)((int)piVar8 + uVar4 + 4);
                dVar14 = in_xd4;
                if (cVar32 == '\0') {
                    dVar29 = (double)CONCAT44((int)((u64)dVar29 >> 0x20), (float)iVar5);
                    dVar14 = in_xd12;
                }
                dVar16 = in_xd4;
                if (cVar32 == '\0') {
                    dVar16 = (double)CONCAT44((float)iVar2, SUB84(dVar27, 0));
                }
                fVar12 = SUB84(dVar29, 0);
                if (cVar31 == '\0') {
                    dVar16 = (double)CONCAT44((float)((u64)dVar16 >> 0x20) - fVar12, SUB84(dVar16, 0));
                } else {
                    dVar16 = dVar16 - dVar29;
                }
                dVar27 = in_xd4;
                if (cVar32 == '\0') {
                    dVar27 = (double)CONCAT44((float)(iVar5 - *(int *)((int)piVar6 + uVar4 + 4)), SUB84(dVar18, 0));
                }
                fVar20 = (float)(*(int *)((int)piVar7 + uVar4 + 4) - iVar2);
                fVar23 = (float)((u64)dVar16 >> 0x20);
                if (cVar31 == '\0') {
                    bVar30 = fVar26 < fVar23;
                } else {
                    bVar30 = dVar25 < dVar16;
                }
                dVar11 = in_xd4;
                if (cVar32 == '\0') {
                    dVar11 = (double)CONCAT44(fVar20, SUB84(dVar17, 0));
                }
                if (bVar30) {
                    if (cVar31 == '\0') {
                        dVar16 = (double)CONCAT44(fVar23 - fVar13, SUB84(dVar16, 0));
                    } else {
                        dVar16 = dVar16 - dVar22;
                    }
                } else {
                    if (cVar31 == '\0') {
                        bVar30 = fVar21 < fVar23;
                    } else {
                        bVar30 = dVar22 < dVar16;
                    }
                    if (!bVar30) {
                        if (cVar31 == '\0') {
                            dVar16 = (double)CONCAT44(fVar23 + fVar13, SUB84(dVar16, 0));
                        } else {
                            dVar16 = dVar16 + dVar22;
                        }
                    }
                }
                fVar23 = (float)((u64)dVar16 >> 0x20);
                dVar18 = dVar16;
                if (cVar32 == '\0') {
                    dVar18 = in_xd4;
                    fVar20 = fVar23;
                }
                fVar10 = (float)((u64)dVar27 >> 0x20);
                if (cVar31 == '\0') {
                    bVar30 = fVar26 < fVar10;
                    fStack_30 = fVar20 + fVar12;
                } else {
                    bVar30 = dVar25 < dVar27;
                    fStack_30 = SUB84((double)CONCAT44((int)((u64)dVar15 >> 0x20), fVar20) + dVar29, 0);
                }
                if (cVar32 != '\0') {
                    fStack_30 = SUB84(dVar18, 0);
                    fStack_2c = (float)((u64)dVar18 >> 0x20);
                }
                if (bVar30) {
                    if (cVar31 == '\0') {
                        dVar27 = (double)CONCAT44(fVar10 - fVar13, SUB84(dVar27, 0));
                    } else {
                        dVar27 = dVar27 - dVar22;
                    }
                } else {
                    if (cVar31 == '\0') {
                        bVar30 = fVar21 < fVar10;
                    } else {
                        bVar30 = dVar22 < dVar27;
                    }
                    if (!bVar30) {
                        if (cVar31 == '\0') {
                            dVar27 = (double)CONCAT44(fVar10 + fVar13, SUB84(dVar27, 0));
                        } else {
                            dVar27 = dVar27 + dVar22;
                        }
                    }
                }
                fVar20 = (float)((u64)dVar11 >> 0x20);
                if (cVar31 == '\0') {
                    bVar30 = fVar26 < fVar20;
                } else {
                    bVar30 = dVar25 < dVar11;
                }
                if (bVar30) {
                    if (cVar31 == '\0') {
                        dVar11 = (double)CONCAT44(fVar20 - fVar13, SUB84(dVar11, 0));
                    } else {
                        dVar11 = dVar11 - dVar22;
                    }
                } else {
                    if (cVar31 == '\0') {
                        bVar30 = fVar21 < fVar20;
                    } else {
                        bVar30 = dVar22 < dVar11;
                    }
                    if (!bVar30) {
                        if (cVar31 == '\0') {
                            dVar11 = (double)CONCAT44(fVar20 + fVar13, SUB84(dVar11, 0));
                        } else {
                            dVar11 = dVar11 + dVar22;
                        }
                    }
                }
                if (cVar32 == '\0') {
                    dVar15 = (double)CONCAT44(fStack_38, fStack_48);
                } else {
                    dVar18 = (double)CONCAT44(fStack_44, fStack_48);
                    dVar15 = (double)CONCAT44(fStack_34, fStack_38);
                }
                if (cVar31 == '\0') {
                    dVar15 = (double)CONCAT44(((float)((u64)dVar15 >> 0x20) * (float)((u64)dVar27 >> 0x20)) /
                                                  SUB84(dVar11, 0),
                                              (SUB84(dVar15, 0) * fVar23) / fVar24);
                } else {
                    dVar15 = ((dVar15 * dVar16 * dVar27) / dVar25) / dVar11;
                }
                if (cVar32 == '\0') {
                    uVar3 = SUB84(dVar15, 0);
                    dVar15 = (double)CONCAT44((int)((u64)dVar15 >> 0x20), fStack_4c);
                    dVar19 = dVar18;
                    dVar18 = (double)CONCAT44(uVar3, SUB84(dVar27, 0));
                } else {
                    dVar19 = (double)CONCAT44(fStack_48, fStack_4c);
                }
                if (cVar31 == '\0') {
                    dVar18 =
                        (double)CONCAT44((float)((u64)dVar18 >> 0x20) + (float)((u64)dVar15 >> 0x20), SUB84(dVar18, 0));
                } else {
                    dVar18 = dVar18 + dVar15;
                }
                if (cVar32 == '\0') {
                    dVar15 = (double)CONCAT44(fStack_34, SUB84(dVar15, 0));
                } else {
                    dVar15 = (double)CONCAT44(fStack_30, fStack_34);
                }
                if (cVar31 == '\0') {
                    dVar15 = (double)CONCAT44((float)((u64)dVar15 >> 0x20) * (float)((u64)dVar11 >> 0x20),
                                              SUB84(dVar15, 0) * fVar23);
                } else {
                    dVar15 = dVar15 * dVar16 * dVar11;
                }
                dVar17 = dVar14;
                if (cVar32 == '\0') {
                    dVar17 = (double)CONCAT44(fVar12, SUB84(dVar11, 0));
                }
                if (cVar31 == '\0') {
                    dVar17 =
                        (double)CONCAT44((float)((u64)dVar18 >> 0x20) * SUB84(dVar16, 0) + (float)((u64)dVar17 >> 0x20),
                                         SUB84(dVar17, 0));
                }
                dVar11 = dVar14;
                if (cVar32 == '\0') {
                    dVar11 = (double)((s64)dVar29 << 0x20);
                }
                if (cVar31 == '\0') {
                    dVar15 =
                        (double)CONCAT44((float)((u64)dVar15 >> 0x20) / SUB84(dVar18, 0), SUB84(dVar15, 0) / fVar24);
                } else {
                    dVar15 = (dVar15 / dVar25) / dVar18;
                }
                dVar27 = dVar19;
                if (cVar32 == '\0') {
                    dVar27 = (double)CONCAT44(SUB84(dVar15, 0), SUB84(dVar16, 0));
                }
                fVar12 = (float)((u64)dVar15 >> 0x20);
                if (cVar31 == '\0') {
                    dVar27 = (double)CONCAT44((float)((u64)dVar27 >> 0x20) + fVar12, SUB84(dVar27, 0));
                } else {
                    dVar27 = dVar27 + dVar15;
                }
                in_xd4 = in_xd8;
                if (cVar32 == '\0') {
                    dVar15 = (double)CONCAT44(fVar12, SUB84(dVar27, 0));
                    in_xd4 = dVar19;
                }
                if (cVar31 == '\0') {
                    dVar15 =
                        (double)CONCAT44((int)((u64)dVar15 >> 0x20), SUB84(dVar15, 0) * (float)((u64)dVar27 >> 0x20));
                } else {
                    dVar15 = dVar15 * dVar27;
                }
                if (cVar32 == '\0') {
                    dVar27 = (double)CONCAT44(fStack_30, SUB84(dVar27, 0));
                } else {
                    dVar27 = (double)CONCAT44(fStack_2c, fStack_30);
                }
                if (cVar31 == '\0') {
                    dVar27 = (double)CONCAT44((float)((u64)dVar27 >> 0x20) - SUB84(dVar15, 0), SUB84(dVar27, 0));
                } else {
                    dVar27 = dVar27 - dVar15;
                }
                if (cVar32 == '\0') {
                    dVar15 = (double)CONCAT44((int)((u64)dVar15 >> 0x20), fStack_40);
                } else {
                    in_xd4 = (double)CONCAT44(fStack_3c, fStack_40);
                }
                if (cVar31 == '\0') {
                    fVar12 = SUB84(dVar15, 0) * (float)((u64)dVar17 >> 0x20);
                } else {
                    fVar12 = SUB84(dVar15 * dVar17, 0);
                }
                fVar20 = fStack_3c;
                fVar23 = fStack_38;
                if (cVar32 == '\0') {
                    fVar20 = fVar12;
                    fVar23 = fStack_3c;
                }
                uVar4 = uVar4 + 4;
                if (cVar31 == '\0') {
                    fVar20 = (float)((u64)dVar11 >> 0x20) * fVar23 + fVar20;
                }
                if (cVar32 == '\0') {
                    dVar15 = (double)CONCAT44(fStack_44, fVar20);
                    dVar16 = (double)((u64)dVar27 & 0xffffffff00000000);
                } else {
                    dVar15 = (double)CONCAT44(fStack_40, fStack_44);
                    dVar16 = dVar27;
                }
                uVar3 = 0x1c;
                if (cVar31 == '\0') {
                    fVar12 = (float)((u64)dVar15 >> 0x20);
                    dVar15 = (double)CONCAT44(fVar12, (float)((u64)dVar16 >> 0x20) * fVar12 + SUB84(dVar15, 0));
                }
                fVar12 = fStack_2c;
                if (cVar32 == '\0') {
                    fVar12 = fStack_30;
                }
                if (cVar31 == '\0') {
                    fVar12 = fVar12 * (float)((u64)dVar29 >> 0x20) + SUB84(dVar15, 0);
                    dVar15 = (double)CONCAT44((int)((u64)dVar15 >> 0x20), fVar12);
                    iVar2 = (int)fVar12;
                } else {
                    iVar2 = (int)dVar15;
                }
                *a3 = iVar2;
                a3 = a3 + 1;
                in_xd12 = dVar14;
                fVar1 = fStack_48;
            } while (uVar4 < 0xc);
        }
    }
    return uVar3;
}

/*
 * gfxlib_calls_calc_21d7d4  0x8c21d7d4
 * area name: in the gfxlib library code range; behaviour name: its callees mostly do: calc
 * called by: gfxlib_draw_217f12, gfxlib_draw_21908e, gfxlib_draw_219ad0, vram_draw_218804
 */
u32 gfxlib_calls_calc_21d7d4(u32 a0, u32 *a1, float *a2, float *a3, float *s0) {
    u32 uVar1;
    u32 uVar2;
    float *pfVar3;
    u32 uVar4;

    uVar4 = (a0 & 0xff) - 0x10;
    if ((uVar4 & 1) != 0) {
        uVar2 = *a1;
        a1 = a1 + 1;
        if ((g_8c4aa4f0 & 0x10) == 0) {
            if (a2 != NULL) {
                if ((g_8c4aa4f0 & 0x20) == 0) {
                    pfVar3 = a2 + 2;
                    *a2 = (float)(uVar2 >> 0x18) * 0.00392157;
                    a2[1] = (float)(uVar2 >> 0x10 & 0xff) * 0.00392157;
                    a2 = a2 + 3;
                    *pfVar3 = (float)(uVar2 >> 8 & 0xff) * 0.00392157;
                    *a2 = (float)(uVar2 & 0xff) * 0.00392157;
                } else {
                    pfVar3 = a2 + 2;
                    *a2 = (float)(uVar2 >> 0x18) * 0.00392157 + g_8c4aa52c;
                    a2[1] = (float)(uVar2 >> 0x10 & 0xff) * 0.00392157 + g_8c4aa530;
                    a2 = a2 + 3;
                    *pfVar3 = (float)(uVar2 >> 8 & 0xff) * 0.00392157 + g_8c4aa534;
                    *a2 = (float)(uVar2 & 0xff) * 0.00392157 + g_8c4aa538;
                }
            }
        } else {
            *a2 = g_8c4aa52c;
            a2[1] = g_8c4aa530;
            a2[2] = g_8c4aa534;
            a2 = a2 + 3;
            *a2 = g_8c4aa538;
        }
    }
    if ((uVar4 & 2) != 0) {
        a2 = (float *)*a1;
        a1 = a1 + 1;
        if (a3 != NULL) {
            pfVar3 = a3 + 2;
            *a3 = (float)((u32)a2 >> 0x18) * 0.00392157;
            uVar2 = (u32)a2 >> 8;
            a3[1] = (float)((u32)a2 >> 0x10 & 0xff) * 0.00392157;
            a3 = a3 + 3;
            a2 = (float *)((u32)a2 & 0xff);
            *pfVar3 = (float)(uVar2 & 0xff) * 0.00392157;
            *a3 = (float)(int)a2 * 0.00392157;
        }
    }
    if (((uVar4 & 4) != 0) && (a1 = (u32 *)*a1, s0 != NULL)) {
        *s0 = (float)((u32)a1 >> 0x18) * 0.00392157;
        uVar4 = (u32)a1 >> 8;
        s0[1] = (float)((u32)a1 >> 0x10 & 0xff) * 0.00392157;
        a1 = (u32 *)((u32)a1 & 0xff);
        s0[2] = (float)(uVar4 & 0xff) * 0.00392157;
        s0[3] = (float)(int)a1 * 0.00392157;
    }
    uVar1 = gfxlib_calc_2375ae(a0, a1);
    return uVar1;
}

/*
 * gfxlib_state_switch_21da20  0x8c21da20
 * area name: in the gfxlib library code range; behaviour name: dispatches on a state or mode value (switch)
 * called by: gfxlib_state_switch_21f200, gfxlib_vec_21daf2, gfxlib_vec_21e4f8
 */
int gfxlib_state_switch_21da20(int a0, u32 a1, u32 a2, u32 a3) {
    u32 *puVar1;
    u32 *puVar2;
    u16 *puVar3;
    u32 *puVar4;
    u32 uVar5;
    int iVar6;
    u16 uVar7;

    puVar4 = 0x8c4aa380;
    puVar3 = 0x8c4aad86;
    puVar2 = 0x8c4aa378;
    puVar1 = 0x8c4aa37c;
    uVar5 = a0 - 0x22;
    if (0xd < uVar5) {
        g_8c4aa374 = 0;
        *puVar2 = 0xffffffff;
        *puVar1 = 0xffffffff;
        *puVar4 = 0xffffffff;
        *puVar3 = 0;
        return uVar5;
    }
    iVar6 = (int)(short)(&switchD_8c21da4c::switchdataD_8c21da64)[uVar5];
    switch (uVar5) {
    case 0:
        g_8c4aa374 = 3;
        *puVar2 = 2;
        *puVar1 = 0xffffffff;
        *puVar4 = 0xffffffff;
        break;
    case 1:
        uVar7 = (u16)0xffdf;
        g_8c4aa374 = 4;
        *puVar2 = 2;
        *puVar1 = 0xffffffff;
        *puVar4 = 5;
        goto LAB_8c21dad2;
    default:
        iVar6 = 4;
        g_8c4aa374 = 4;
        *puVar2 = 2;
        *puVar1 = 0xffffffff;
        *puVar4 = 5;
        break;
    case 7:
        iVar6 = 6;
        g_8c4aa374 = 6;
        *puVar2 = 2;
        *puVar1 = 5;
        *puVar4 = 0xffffffff;
        goto LAB_8c21dad0;
    case 8:
        g_8c4aa374 = 7;
        *puVar2 = 2;
        *puVar1 = 5;
        *puVar4 = 8;
        return iVar6;
    case 9:
    case 10:
    case 0xb:
    case 0xc:
    case 0xd:
        g_8c4aa374 = 7;
        *puVar2 = 2;
        *puVar1 = 5;
        *puVar4 = 8;
    LAB_8c21dad0:
        uVar7 = (u16)0xbfff;
        goto LAB_8c21dad2;
    }
    uVar7 = (u16)0xbfdf;
LAB_8c21dad2:
    *puVar3 = *puVar3 & uVar7;
    return iVar6;
}

/*
 * gfxlib_vec_21daf2  0x8c21daf2
 * area name: in the gfxlib library code range; behaviour name: mostly calls vec functions
 */
u32 gfxlib_vec_21daf2(int a0, int a1, u64 *a2, u8 *a3, u32 ain0) {
    u32 uVar1;
    int iVar2;
    u32 uVar3;
    u32 uVar4;
    int iVar5;
    int iVar6;
    u32 ar5_00;
    u64 *puVar7;
    u64 *unaff_r8;
    u64 *unaff_r11;
    u64 *unaff_r13;
    u8 *puVar8;
    double in_dr2;
    double dVar9;
    float fVar11;
    double dVar10;
    u32 in_fr5;
    float in_fr13;
    u64 in_dr14;
    bool bVar12;
    u32 in_PR;
    int iVar13;
    u8 auStack_34[12];
    u8 auStack_28[4];
    u64 uStack_24;

    uStack_24 = CONCAT44((int)in_dr14, (u32)uStack_24);
    uStack_24._0_4_ = (int)((u64)in_dr14 >> 0x20);
    puVar8 = auStack_28;

    *(u32 *)(puVar8 + -4) = in_PR;
    *(int *)(puVar8 + -0x3c) = a0;
    if (*(int *)(a0 + 4) == 0) {
        return ain0;
    }
    if ((**(u32 **)(puVar8 + -0x3c) & 8) != 0) {
        return **(u32 **)(puVar8 + -0x3c);
    }
    iVar2 = **(int **)(*(int *)(puVar8 + -0x3c) + 4);
    *(int *)(puVar8 + -0x38) = iVar2;
    if (iVar2 != 0) {
        iVar2 = *(int *)(puVar8 + -0x38);
        *(int *)(puVar8 + -0x60) = iVar2;
        if (g_8c4aad84 != 0) {
            *(u32 **)(puVar8 + -0x34) = g_8c4ab0c4;
            *g_8c4ab0c4 = **(u32 **)(puVar8 + -0x38);
            uVar3 = *(u32 *)(*(int *)(puVar8 + -0x38) + 4);
            *(u32 *)(*(int *)(puVar8 + -0x34) + 4) = uVar3;
            uVar3 = uVar3 >> 0x10;
            if (g_8c2759d8 == 0) {
                gfxlib_state_switch_21da20(**(u32 **)(puVar8 + -0x34) & 0xffff, a1, a2, a3);
                g_8c2759d8 = 1;
            }
            *(u32 *)(puVar8 + -0x40) = 0;
            if (g_8c4aa378 != -1) {
                unaff_r13 = (u64 *)(g_8c4ab0c4 + g_8c4aa378);
            }
            if (g_8c4aa37c != -1) {
                unaff_r11 = (u64 *)(g_8c4ab0c4 + g_8c4aa37c);
            }
            if (g_8c4aa380 != -1) {
                unaff_r8 = (u64 *)(g_8c4ab0c4 + g_8c4aa380);
            }

            in_fr13 = 2.1474836e+09;

            if ((g_8c4aad86 & 0x10) != 0) {
                iVar5 = *(int *)(g_8c4aad68 + g_8c4aad78 * 4);
                if (iVar5 != 0) {
                    iVar6 = 0;
                    a2 = *(u64 **)(g_8c4aad6c + g_8c4aad78 * 4);

                    dVar10 = (double)CONCAT44(g_8c4aad70, in_fr5);

                    fVar11 = (float)((u64)dVar10 >> 0x20);

                    bVar12 = in_fr13 < fVar11;

                    if (bVar12) {

                        dVar9 = (double)CONCAT44(0xcf800000, fVar11);

                        fVar11 = (float)((u64)dVar9 >> 0x20);
                        in_dr2 = (double)CONCAT44(fVar11, SUB84(dVar9, 0) + fVar11);

                    } else
                        in_dr2 = (double)CONCAT44((int)((u64)in_dr2 >> 0x20), fVar11);

                    iVar13 = (int)SUB84(in_dr2, 0);

                    *(int *)(puVar8 + -0x5c) = iVar13;
                    puVar7 = a2;
                    while (1 < (u32)((int)puVar7 - iVar6)) {
                        uVar4 = (u32)(iVar6 + (int)puVar7) >> 1;
                        *(u32 *)(puVar8 + -100) = uVar4;
                        if (*(u32 *)(puVar8 + -0x5c) < *(u32 *)(uVar4 * 8 + iVar5)) {
                            puVar7 = *(u64 **)(puVar8 + -100);
                        } else {
                            iVar6 = *(int *)(puVar8 + -100);
                        }
                    }
                    a3 = puVar8 + -0x14;
                    gfxlib_uses_libgcc_divide_helper_22123c(iVar5, iVar6, a2, a3);
                    in_fr5 = SUB84(dVar10, 0);
                    *(u32 *)(puVar8 + -100) = *(u32 *)(puVar8 + -0x14);
                    *(u32 *)(puVar8 + -0x4c) = *(u32 *)(puVar8 + -0x10);
                    *(u32 *)(puVar8 + -0x54) = *(u32 *)(puVar8 + -0xc);
                    *(u32 *)(puVar8 + -0x5c) = *(u32 *)(puVar8 + -8);
                    *(u32 *)(puVar8 + -0x40) = 1;
                }
                g_8c4aad78 = g_8c4aad78 + 1;
            }
            if ((g_8c4aad86 & 0x20) != 0) {
                iVar5 = *(int *)(g_8c4aad68 + g_8c4aad78 * 4);
                if (iVar5 != 0) {
                    a2 = *(u64 **)(g_8c4aad6c + g_8c4aad78 * 4);
                    *(u64 **)(puVar8 + -0x58) = a2;

                    dVar10 = (double)CONCAT44(g_8c4aad70, in_fr5);

                    fVar11 = (float)((u64)dVar10 >> 0x20);

                    bVar12 = in_fr13 < fVar11;

                    if (bVar12) {

                        dVar9 = (double)CONCAT44(0xcf800000, fVar11);

                        fVar11 = (float)((u64)dVar9 >> 0x20);
                        in_dr2 = (double)CONCAT44(fVar11, SUB84(dVar9, 0) + fVar11);

                    } else
                        in_dr2 = (double)CONCAT44((int)((u64)in_dr2 >> 0x20), fVar11);

                    iVar6 = (int)SUB84(in_dr2, 0);

                    *(int *)(puVar8 + -0x48) = iVar6;
                    uVar4 = 0;
                    while (ar5_00 = uVar4, 1 < *(int *)(puVar8 + -0x58) - ar5_00) {
                        uVar4 = *(int *)(puVar8 + -0x58) + ar5_00 >> 1;
                        if (*(u32 *)(puVar8 + -0x48) < *(u32 *)(uVar4 * 8 + iVar5)) {
                            *(u32 *)(puVar8 + -0x58) = uVar4;
                            uVar4 = ar5_00;
                        }
                    }
                    a3 = puVar8 + -0x24;
                    keyframe_pair(iVar5, ar5_00, a2, a3);
                    in_fr5 = SUB84(dVar10, 0);
                    *(u32 *)(puVar8 + -0x58) = *(u32 *)(puVar8 + -0x24);
                    *(u32 *)(puVar8 + -0x48) = *(u32 *)(puVar8 + -0x20);
                    *(int *)(puVar8 + -0x40) = *(int *)(puVar8 + -0x40) + 2;
                }
                g_8c4aad78 = g_8c4aad78 + 1;
            }
            if ((g_8c4aad86 & 0x4000) != 0) {
                iVar5 = *(int *)(g_8c4aad68 + g_8c4aad78 * 4);
                if (iVar5 != 0) {
                    a2 = *(u64 **)(g_8c4aad6c + g_8c4aad78 * 4);

                    dVar10 = (double)CONCAT44(g_8c4aad70, in_fr5);

                    iVar6 = 0;
                    fVar11 = (float)((u64)dVar10 >> 0x20);

                    bVar12 = in_fr13 < fVar11;

                    if (bVar12) {

                        dVar10 = (double)CONCAT44(0xcf800000, fVar11);

                        fVar11 = (float)((u64)dVar10 >> 0x20);
                        in_dr2 = (double)CONCAT44(fVar11, SUB84(dVar10, 0) + fVar11);

                    } else
                        in_dr2 = (double)CONCAT44((int)((u64)in_dr2 >> 0x20), fVar11);

                    iVar13 = (int)SUB84(in_dr2, 0);

                    *(int *)(puVar8 + -0x44) = iVar13;
                    puVar7 = a2;
                    while (1 < (u32)((int)puVar7 - iVar6)) {
                        uVar4 = (u32)(iVar6 + (int)puVar7) >> 1;
                        *(u32 *)(puVar8 + -0x50) = uVar4;
                        if (*(u32 *)(puVar8 + -0x44) < *(u32 *)(uVar4 * 8 + iVar5)) {
                            puVar7 = *(u64 **)(puVar8 + -0x50);
                        } else {
                            iVar6 = *(int *)(puVar8 + -0x50);
                        }
                    }
                    a3 = puVar8 + -0x2c;
                    keyframe_pair_b(iVar5, iVar6, a2, a3);
                    *(u32 *)(puVar8 + -0x50) = *(u32 *)(puVar8 + -0x2c);
                    *(u32 *)(puVar8 + -0x44) = *(u32 *)(puVar8 + -0x28);
                    *(int *)(puVar8 + -0x40) = *(int *)(puVar8 + -0x40) + 4;
                }
                g_8c4aad78 = g_8c4aad78 + 1;
            }
            iVar5 = *(int *)(puVar8 + -0x40);
            a1 = g_8c4aa380;
            if (iVar5 == 1) {
                if (g_8c4aa380 == -1) {
                    if (g_8c4aa37c == -1) {
                        iVar2 = 0;
                        iVar5 = 0;
                        if (uVar3 != 0) {
                            do {
                                *(u64 **)(puVar8 + -0x68) = unaff_r13;
                                iVar6 = iVar5 * 4;
                                a1 = *(int *)(puVar8 + -0x4c) + iVar6;
                                a3 = (u8 *)(*(int *)(puVar8 + -0x5c) + iVar6);
                                a2 = (u64 *)(*(int *)(puVar8 + -0x54) + iVar6);
                                Vec3_catmull_rom(*(int *)(puVar8 + -100) + iVar6, a1, a2, a3, *(u32 *)(puVar8 + -0x68));
                                iVar2 = iVar2 + 1;
                                unaff_r13 = (u64 *)((int)unaff_r13 + g_8c4aa374 * 4);
                                iVar5 = iVar5 + 3;
                            } while (iVar2 < (int)uVar3);
                        }
                    } else {
                        iVar5 = 0;
                        *(u32 *)(puVar8 + -0x60) = 0;
                        if (uVar3 != 0) {
                            do {
                                *(int *)(puVar8 + -0x58) = iVar5;
                                *(u64 **)(puVar8 + -0x68) = unaff_r13;
                                iVar6 = *(int *)(puVar8 + -0x58) * 4;
                                a1 = *(int *)(puVar8 + -0x4c) + iVar6;
                                a3 = (u8 *)(*(int *)(puVar8 + -0x5c) + iVar6);
                                a2 = (u64 *)(*(int *)(puVar8 + -0x54) + iVar6);
                                Vec3_catmull_rom(*(int *)(puVar8 + -100) + iVar6, a1, a2, a3, *(u32 *)(puVar8 + -0x68));
                                unaff_r13 = (u64 *)((int)unaff_r13 + g_8c4aa374 * 4);

                                *(u32 *)unaff_r11 = *(u32 *)(g_8c4aa37c * 4 + iVar2);

                                iVar6 = g_8c4aa37c * 4 + iVar2;

                                *(u32 *)((int)unaff_r11 + 4) = *(u32 *)(iVar6 + 4);

                                iVar6 = g_8c4aa37c * 4 + iVar2;

                                *(u32 *)(unaff_r11 + 1) = *(u32 *)(iVar6 + 8);

                                iVar6 = *(int *)(puVar8 + -0x60);
                                *(int *)(puVar8 + -0x60) = iVar6 + 1;
                                iVar2 = iVar2 + g_8c4aa374 * 4;
                                unaff_r11 = (u64 *)((int)unaff_r11 + g_8c4aa374 * 4);
                                iVar5 = iVar5 + 3;
                            } while (iVar6 + 1 < (int)uVar3);
                        }
                    }
                } else if (g_8c4aa37c == -1) {
                    iVar2 = 0;
                    iVar5 = 0;
                    if (uVar3 != 0) {
                        do {
                            *(int *)(puVar8 + -0x58) = iVar5;
                            *(u64 **)(puVar8 + -0x68) = unaff_r13;
                            iVar6 = *(int *)(puVar8 + -0x58) * 4;
                            a1 = *(int *)(puVar8 + -0x4c) + iVar6;
                            a3 = (u8 *)(*(int *)(puVar8 + -0x5c) + iVar6);
                            a2 = (u64 *)(*(int *)(puVar8 + -0x54) + iVar6);
                            Vec3_catmull_rom(*(int *)(puVar8 + -100) + iVar6, a1, a2, a3, *(u32 *)(puVar8 + -0x68));
                            iVar2 = iVar2 + 1;
                            unaff_r13 = (u64 *)((int)unaff_r13 + g_8c4aa374 * 4);
                            *(u32 *)unaff_r8 = *(u32 *)(*(int *)(puVar8 + -0x60) + g_8c4aa380 * 4);
                            unaff_r8 = (u64 *)((int)unaff_r8 + g_8c4aa374 * 4);
                            *(int *)(puVar8 + -0x60) = *(int *)(puVar8 + -0x60) + g_8c4aa374 * 4;
                            iVar5 = iVar5 + 3;
                        } while (iVar2 < (int)uVar3);
                    }
                } else {
                    iVar5 = 0;
                    *(u32 *)(puVar8 + -0x48) = 0;
                    if (uVar3 != 0) {
                        do {
                            *(int *)(puVar8 + -0x50) = iVar5;
                            *(u64 **)(puVar8 + -0x68) = unaff_r13;
                            *(int *)(puVar8 + -0x58) = *(int *)(puVar8 + -0x50) * 4;
                            a3 = (u8 *)(*(int *)(puVar8 + -0x50) * 4 + *(int *)(puVar8 + -0x5c));
                            a2 = (u64 *)(*(int *)(puVar8 + -0x58) + *(int *)(puVar8 + -0x54));
                            a1 = *(int *)(puVar8 + -0x58) + *(int *)(puVar8 + -0x4c);
                            Vec3_catmull_rom(*(int *)(puVar8 + -0x58) + *(int *)(puVar8 + -100), a1, a2, a3,
                                             *(u32 *)(puVar8 + -0x68));
                            unaff_r13 = (u64 *)((int)unaff_r13 + g_8c4aa374 * 4);

                            *(u32 *)unaff_r11 = *(u32 *)(g_8c4aa37c * 4 + iVar2);

                            iVar6 = g_8c4aa37c * 4 + iVar2;

                            *(u32 *)((int)unaff_r11 + 4) = *(u32 *)(iVar6 + 4);

                            iVar6 = g_8c4aa37c * 4 + iVar2;

                            *(u32 *)(unaff_r11 + 1) = *(u32 *)(iVar6 + 8);

                            unaff_r11 = (u64 *)((int)unaff_r11 + g_8c4aa374 * 4);
                            *(u32 *)unaff_r8 = *(u32 *)(*(int *)(puVar8 + -0x60) + g_8c4aa380 * 4);
                            iVar6 = g_8c4aa374 * 4;
                            unaff_r8 = (u64 *)((int)unaff_r8 + iVar6);
                            iVar2 = iVar2 + iVar6;
                            *(int *)(puVar8 + -0x60) = *(int *)(puVar8 + -0x60) + iVar6;
                            iVar6 = *(int *)(puVar8 + -0x48);
                            *(int *)(puVar8 + -0x48) = iVar6 + 1;
                            iVar5 = iVar5 + 3;
                        } while (iVar6 + 1 < (int)uVar3);
                    }
                }
            } else if (iVar5 == 2) {
                if (g_8c4aa380 == -1) {
                    iVar5 = 0;
                    *(u32 *)(puVar8 + -100) = 0;
                    if (uVar3 != 0) {
                        do {

                            *(u32 *)unaff_r13 = *(u32 *)(g_8c4aa378 * 4 + iVar2);

                            iVar6 = g_8c4aa378 * 4 + iVar2;

                            *(u32 *)((int)unaff_r13 + 4) = *(u32 *)(iVar6 + 4);

                            iVar6 = g_8c4aa378 * 4 + iVar2;

                            *(u32 *)(unaff_r13 + 1) = *(u32 *)(iVar6 + 8);

                            *(int *)(puVar8 + -0x54) = iVar5;
                            *(int *)(puVar8 + -0x5c) = iVar5 * 4;
                            unaff_r13 = (u64 *)((int)unaff_r13 + g_8c4aa374 * 4);
                            a1 = iVar5 * 4 + *(int *)(puVar8 + -0x48);
                            a2 = unaff_r11;
                            Vec3_lerp_normalize(*(int *)(puVar8 + -0x5c) + *(int *)(puVar8 + -0x58), a1, unaff_r11);
                            iVar6 = *(int *)(puVar8 + -100);
                            *(int *)(puVar8 + -100) = iVar6 + 1;
                            unaff_r11 = (u64 *)((int)unaff_r11 + g_8c4aa374 * 4);
                            iVar2 = iVar2 + g_8c4aa374 * 4;
                            iVar5 = iVar5 + 3;
                        } while (iVar6 + 1 < (int)uVar3);
                    }
                } else {
                    *(u32 *)(puVar8 + -0x5c) = 0;
                    *(u32 *)(puVar8 + -100) = 0;
                    if (uVar3 != 0) {
                        do {

                            *(u32 *)unaff_r13 = *(u32 *)(g_8c4aa378 * 4 + iVar2);

                            iVar5 = g_8c4aa378 * 4 + iVar2;

                            *(u32 *)((int)unaff_r13 + 4) = *(u32 *)(iVar5 + 4);

                            iVar5 = g_8c4aa378 * 4 + iVar2;

                            *(u32 *)(unaff_r13 + 1) = *(u32 *)(iVar5 + 8);

                            unaff_r13 = (u64 *)((int)unaff_r13 + g_8c4aa374 * 4);
                            iVar5 = *(int *)(puVar8 + -100) * 4;
                            *(int *)(puVar8 + -0x4c) = *(int *)(puVar8 + -100);
                            *(int *)(puVar8 + -0x54) = iVar5;
                            a1 = iVar5 + *(int *)(puVar8 + -0x48);
                            a2 = unaff_r11;
                            Vec3_lerp_normalize(*(int *)(puVar8 + -0x54) + *(int *)(puVar8 + -0x58), a1, unaff_r11);
                            unaff_r11 = (u64 *)((int)unaff_r11 + g_8c4aa374 * 4);
                            *(u32 *)unaff_r8 = *(u32 *)(*(int *)(puVar8 + -0x60) + g_8c4aa380 * 4);
                            iVar6 = g_8c4aa374 * 4;
                            iVar2 = iVar2 + iVar6;
                            *(int *)(puVar8 + -0x60) = *(int *)(puVar8 + -0x60) + iVar6;
                            iVar5 = *(int *)(puVar8 + -0x5c);
                            unaff_r8 = (u64 *)((int)unaff_r8 + iVar6);
                            *(int *)(puVar8 + -0x5c) = iVar5 + 1;
                            *(int *)(puVar8 + -100) = *(int *)(puVar8 + -100) + 3;
                        } while (iVar5 + 1 < (int)uVar3);
                    }
                }
            } else if (iVar5 == 3) {
                if (g_8c4aa380 == -1) {
                    iVar2 = 0;
                    iVar5 = 0;
                    if (uVar3 != 0) {
                        do {
                            *(int *)(puVar8 + -0x60) = iVar5;
                            *(u64 **)(puVar8 + -0x68) = unaff_r13;
                            iVar6 = *(int *)(puVar8 + -0x60) * 4;
                            a3 = (u8 *)(*(int *)(puVar8 + -0x5c) + iVar6);
                            Vec3_catmull_rom(*(int *)(puVar8 + -100) + iVar6, *(int *)(puVar8 + -0x4c) + iVar6,
                                             *(int *)(puVar8 + -0x54) + iVar6, a3, *(u32 *)(puVar8 + -0x68));
                            *(int *)(puVar8 + -0x60) = iVar5 * 4;
                            unaff_r13 = (u64 *)((int)unaff_r13 + g_8c4aa374 * 4);
                            a1 = iVar5 * 4 + *(int *)(puVar8 + -0x48);
                            a2 = unaff_r11;
                            Vec3_lerp_normalize(*(int *)(puVar8 + -0x60) + *(int *)(puVar8 + -0x58), a1, unaff_r11);
                            iVar2 = iVar2 + 1;
                            unaff_r11 = (u64 *)((int)unaff_r11 + g_8c4aa374 * 4);
                            iVar5 = iVar5 + 3;
                        } while (iVar2 < (int)uVar3);
                    }
                } else {
                    iVar2 = 0;
                    *(u32 *)(puVar8 + -0x50) = 0;
                    if (uVar3 != 0) {
                        do {
                            *(int *)(puVar8 + -0x44) = iVar2;
                            *(u64 **)(puVar8 + -0x68) = unaff_r13;
                            iVar5 = *(int *)(puVar8 + -0x44) * 4;
                            a3 = (u8 *)(*(int *)(puVar8 + -0x5c) + iVar5);
                            Vec3_catmull_rom(*(int *)(puVar8 + -100) + iVar5, *(int *)(puVar8 + -0x4c) + iVar5,
                                             *(int *)(puVar8 + -0x54) + iVar5, a3, *(u32 *)(puVar8 + -0x68));
                            *(int *)(puVar8 + -0x44) = iVar2;
                            unaff_r13 = (u64 *)((int)unaff_r13 + g_8c4aa374 * 4);
                            a1 = *(int *)(puVar8 + -0x48) + iVar2 * 4;
                            a2 = unaff_r11;
                            Vec3_lerp_normalize(*(int *)(puVar8 + -0x58) + iVar2 * 4, a1, unaff_r11);
                            unaff_r11 = (u64 *)((int)unaff_r11 + g_8c4aa374 * 4);
                            *(u32 *)unaff_r8 = *(u32 *)(*(int *)(puVar8 + -0x60) + g_8c4aa380 * 4);
                            *(int *)(puVar8 + -0x60) = *(int *)(puVar8 + -0x60) + g_8c4aa374 * 4;
                            unaff_r8 = (u64 *)((int)unaff_r8 + g_8c4aa374 * 4);
                            iVar5 = *(int *)(puVar8 + -0x50);
                            *(int *)(puVar8 + -0x50) = iVar5 + 1;
                            iVar2 = iVar2 + 3;
                        } while (iVar5 + 1 < (int)uVar3);
                    }
                }
            } else if (iVar5 == 4) {
                if (g_8c4aa37c == -1) {
                    iVar5 = 0;
                    *(u32 *)(puVar8 + -100) = 0;
                    if (uVar3 != 0) {
                        do {

                            *(u32 *)unaff_r13 = *(u32 *)(g_8c4aa378 * 4 + iVar2);

                            iVar6 = g_8c4aa378 * 4 + iVar2;

                            *(u32 *)((int)unaff_r13 + 4) = *(u32 *)(iVar6 + 4);

                            iVar6 = g_8c4aa378 * 4 + iVar2;

                            *(u32 *)(unaff_r13 + 1) = *(u32 *)(iVar6 + 8);

                            unaff_r13 = (u64 *)((int)unaff_r13 + g_8c4aa374 * 4);
                            a1 = *(int *)(puVar8 + -0x44) + iVar5;
                            a2 = unaff_r8;
                            argb_lerp(*(int *)(puVar8 + -0x50) + iVar5, a1, unaff_r8);
                            iVar6 = *(int *)(puVar8 + -100);
                            *(int *)(puVar8 + -100) = iVar6 + 1;
                            unaff_r8 = (u64 *)((int)unaff_r8 + g_8c4aa374 * 4);
                            iVar2 = iVar2 + g_8c4aa374 * 4;
                            iVar5 = iVar5 + 4;
                        } while (iVar6 + 1 < (int)uVar3);
                    }
                } else {
                    *(u32 *)(puVar8 + -0x5c) = 0;
                    *(u32 *)(puVar8 + -100) = 0;
                    if (uVar3 != 0) {
                        do {

                            *(u32 *)unaff_r13 = *(u32 *)(g_8c4aa378 * 4 + iVar2);

                            iVar5 = g_8c4aa378 * 4 + iVar2;

                            *(u32 *)((int)unaff_r13 + 4) = *(u32 *)(iVar5 + 4);

                            iVar5 = g_8c4aa378 * 4 + iVar2;

                            *(u32 *)(unaff_r13 + 1) = *(u32 *)(iVar5 + 8);

                            unaff_r13 = (u64 *)((int)unaff_r13 + g_8c4aa374 * 4);

                            *(u32 *)unaff_r11 = *(u32 *)(g_8c4aa37c * 4 + iVar2);

                            iVar5 = g_8c4aa37c * 4 + iVar2;

                            *(u32 *)((int)unaff_r11 + 4) = *(u32 *)(iVar5 + 4);

                            iVar5 = g_8c4aa37c * 4 + iVar2;

                            *(u32 *)(unaff_r11 + 1) = *(u32 *)(iVar5 + 8);

                            unaff_r11 = (u64 *)((int)unaff_r11 + g_8c4aa374 * 4);
                            a1 = *(int *)(puVar8 + -100) + *(int *)(puVar8 + -0x44);
                            a2 = unaff_r8;
                            argb_lerp(*(int *)(puVar8 + -100) + *(int *)(puVar8 + -0x50), a1, unaff_r8);
                            iVar5 = *(int *)(puVar8 + -0x5c);
                            iVar2 = iVar2 + g_8c4aa374 * 4;
                            *(int *)(puVar8 + -0x5c) = iVar5 + 1;
                            unaff_r8 = (u64 *)((int)unaff_r8 + g_8c4aa374 * 4);
                            *(int *)(puVar8 + -100) = *(int *)(puVar8 + -100) + 4;
                        } while (iVar5 + 1 < (int)uVar3);
                    }
                }
            } else if (iVar5 == 5) {
                if (g_8c4aa37c == -1) {
                    iVar2 = 0;
                    *(u32 *)(puVar8 + -0x60) = 0;
                    iVar5 = 0;
                    if (uVar3 != 0) {
                        do {
                            *(int *)(puVar8 + -0x58) = iVar2;
                            *(u64 **)(puVar8 + -0x68) = unaff_r13;
                            iVar6 = *(int *)(puVar8 + -0x58) * 4;
                            a3 = (u8 *)(*(int *)(puVar8 + -0x5c) + iVar6);
                            Vec3_catmull_rom(*(int *)(puVar8 + -100) + iVar6, *(int *)(puVar8 + -0x4c) + iVar6,
                                             *(int *)(puVar8 + -0x54) + iVar6, a3, *(u32 *)(puVar8 + -0x68));
                            a1 = *(int *)(puVar8 + -0x44) + iVar5;
                            unaff_r13 = (u64 *)((int)unaff_r13 + g_8c4aa374 * 4);
                            a2 = unaff_r8;
                            argb_lerp(*(int *)(puVar8 + -0x50) + iVar5, a1, unaff_r8);
                            iVar6 = *(int *)(puVar8 + -0x60);
                            iVar5 = iVar5 + 4;
                            unaff_r8 = (u64 *)((int)unaff_r8 + g_8c4aa374 * 4);
                            *(int *)(puVar8 + -0x60) = iVar6 + 1;
                            iVar2 = iVar2 + 3;
                        } while (iVar6 + 1 < (int)uVar3);
                    }
                } else {
                    *(u32 *)(puVar8 + -0x48) = 0;
                    iVar5 = 0;
                    *(u32 *)(puVar8 + -0x58) = 0;
                    if (uVar3 != 0) {
                        do {
                            *(u32 *)(puVar8 + -0x40) = *(u32 *)(puVar8 + -0x58);
                            *(u64 **)(puVar8 + -0x68) = unaff_r13;
                            *(int *)(puVar8 + -0x60) = *(int *)(puVar8 + -0x40) * 4;
                            a3 = (u8 *)(*(int *)(puVar8 + -0x40) * 4 + *(int *)(puVar8 + -0x5c));
                            Vec3_catmull_rom(*(int *)(puVar8 + -0x60) + *(int *)(puVar8 + -100),
                                             *(int *)(puVar8 + -0x60) + *(int *)(puVar8 + -0x4c),
                                             *(int *)(puVar8 + -0x60) + *(int *)(puVar8 + -0x54), a3,
                                             *(u32 *)(puVar8 + -0x68));
                            unaff_r13 = (u64 *)((int)unaff_r13 + g_8c4aa374 * 4);

                            *(u32 *)unaff_r11 = *(u32 *)(g_8c4aa37c * 4 + iVar2);

                            iVar6 = g_8c4aa37c * 4 + iVar2;

                            *(u32 *)((int)unaff_r11 + 4) = *(u32 *)(iVar6 + 4);

                            iVar6 = g_8c4aa37c * 4 + iVar2;

                            *(u32 *)(unaff_r11 + 1) = *(u32 *)(iVar6 + 8);

                            unaff_r11 = (u64 *)((int)unaff_r11 + g_8c4aa374 * 4);
                            a1 = *(int *)(puVar8 + -0x44) + iVar5;
                            a2 = unaff_r8;
                            argb_lerp(*(int *)(puVar8 + -0x50) + iVar5, a1, unaff_r8);
                            iVar6 = *(int *)(puVar8 + -0x48);
                            iVar5 = iVar5 + 4;
                            iVar2 = iVar2 + g_8c4aa374 * 4;
                            *(int *)(puVar8 + -0x48) = iVar6 + 1;
                            unaff_r8 = (u64 *)((int)unaff_r8 + g_8c4aa374 * 4);
                            *(int *)(puVar8 + -0x58) = *(int *)(puVar8 + -0x58) + 3;
                        } while (iVar6 + 1 < (int)uVar3);
                    }
                }
            } else if (iVar5 == 6) {
                *(u32 *)(puVar8 + -0x54) = 0;
                *(u32 *)(puVar8 + -100) = 0;
                *(u32 *)(puVar8 + -0x5c) = 0;
                if (uVar3 != 0) {
                    do {

                        *(u32 *)unaff_r13 = *(u32 *)(g_8c4aa378 * 4 + iVar2);

                        iVar5 = g_8c4aa378 * 4 + iVar2;

                        *(u32 *)((int)unaff_r13 + 4) = *(u32 *)(iVar5 + 4);

                        iVar5 = g_8c4aa378 * 4 + iVar2;

                        *(u32 *)(unaff_r13 + 1) = *(u32 *)(iVar5 + 8);

                        unaff_r13 = (u64 *)((int)unaff_r13 + g_8c4aa374 * 4);
                        iVar5 = *(int *)(puVar8 + -0x5c) * 4;
                        *(int *)(puVar8 + -0x60) = *(int *)(puVar8 + -0x5c);
                        *(int *)(puVar8 + -0x4c) = iVar5;
                        Vec3_lerp_normalize(*(int *)(puVar8 + -0x4c) + *(int *)(puVar8 + -0x58),
                                            iVar5 + *(int *)(puVar8 + -0x48), unaff_r11);
                        unaff_r11 = (u64 *)((int)unaff_r11 + g_8c4aa374 * 4);
                        a1 = *(int *)(puVar8 + -100) + *(int *)(puVar8 + -0x44);
                        a2 = unaff_r8;
                        argb_lerp(*(int *)(puVar8 + -100) + *(int *)(puVar8 + -0x50), a1, unaff_r8);
                        *(int *)(puVar8 + -0x54) = *(int *)(puVar8 + -0x54) + 1;
                        unaff_r8 = (u64 *)((int)unaff_r8 + g_8c4aa374 * 4);
                        *(int *)(puVar8 + -100) = *(int *)(puVar8 + -100) + 4;
                        *(int *)(puVar8 + -0x5c) = *(int *)(puVar8 + -0x5c) + 3;
                        iVar2 = iVar2 + g_8c4aa374 * 4;
                    } while (*(int *)(puVar8 + -0x54) < (int)uVar3);
                }
            } else {
                if (iVar5 != 7)
                    goto LAB_8c21e4ba;
                iVar5 = 0;
                *(u32 *)(puVar8 + -0x40) = 0;
                iVar2 = 0;
                if (uVar3 != 0) {
                    do {
                        *(int *)(puVar8 + -0x30) = iVar5;
                        *(u64 **)(puVar8 + -0x68) = unaff_r13;
                        *(int *)(puVar8 + -0x60) = *(int *)(puVar8 + -0x30) * 4;
                        a3 = (u8 *)(*(int *)(puVar8 + -0x30) * 4 + *(int *)(puVar8 + -0x5c));
                        Vec3_catmull_rom(*(int *)(puVar8 + -0x60) + *(int *)(puVar8 + -100),
                                         *(int *)(puVar8 + -0x60) + *(int *)(puVar8 + -0x4c),
                                         *(int *)(puVar8 + -0x60) + *(int *)(puVar8 + -0x54), a3,
                                         *(u32 *)(puVar8 + -0x68));
                        *(int *)(puVar8 + -0x60) = iVar5;
                        *(int *)(puVar8 + -0x30) = iVar5 * 4;
                        unaff_r13 = (u64 *)((int)unaff_r13 + g_8c4aa374 * 4);
                        Vec3_lerp_normalize(*(int *)(puVar8 + -0x30) + *(int *)(puVar8 + -0x58),
                                            iVar5 * 4 + *(int *)(puVar8 + -0x48), unaff_r11);
                        a1 = *(int *)(puVar8 + -0x44) + iVar2;
                        unaff_r11 = (u64 *)((int)unaff_r11 + g_8c4aa374 * 4);
                        a2 = unaff_r8;
                        argb_lerp(*(int *)(puVar8 + -0x50) + iVar2, a1, unaff_r8);
                        iVar6 = *(int *)(puVar8 + -0x40);
                        iVar2 = iVar2 + 4;
                        unaff_r8 = (u64 *)((int)unaff_r8 + g_8c4aa374 * 4);
                        *(int *)(puVar8 + -0x40) = iVar6 + 1;
                        iVar5 = iVar5 + 3;
                    } while (iVar6 + 1 < (int)uVar3);
                }
            }
            **(u32 **)(*(int *)(puVar8 + -0x3c) + 4) = *(u32 *)(puVar8 + -0x34);
            *(u32 *)(g_8c4aa374 * uVar3 * 4 + *(int *)(puVar8 + -0x34) + 8) = 0xff;
        }
    }
LAB_8c21e4ba:
    uVar1 = (*g_8c4aa368)(*(u32 *)(*(int *)(puVar8 + -0x3c) + 4), a1, a2, a3);
    **(u32 **)(*(int *)(puVar8 + -0x3c) + 4) = *(u32 *)(puVar8 + -0x38);
    return uVar1;
}

/*
 * gfxlib_vec_21e4f8  0x8c21e4f8
 * area name: in the gfxlib library code range; behaviour name: mostly calls vec functions
 */
u32 gfxlib_vec_21e4f8(u32 *a0, int a1, u32 *a2, int *a3, u32 ain0) {
    u32 *puVar1;
    u32 uVar2;
    u32 *puVar3;
    u32 uVar4;
    int iVar5;
    u32 *puVar6;
    u32 *puVar7;
    u32 *unaff_r8;
    u32 *unaff_r11;
    int iVar8;
    int iVar9;
    u32 *unaff_r13;
    double in_dr2;
    double dVar10;
    float fVar12;
    double dVar11;
    u32 in_fr5;
    float in_fr13;
    u32 in_fr12;
    u64 in_dr14;
    bool bVar13;
    u32 uVar14;
    char cVar15;
    char cVar16;
    u32 *puStack_74;
    u32 *puStack_70;
    int iStack_6c;
    u32 *puStack_68;
    u32 *puStack_64;
    int iStack_60;
    int iStack_5c;
    int iStack_58;
    int iStack_44;
    int iStack_40;
    int iStack_3c;
    int iStack_38;
    int iStack_34;
    int iStack_30;
    u32 uStack_24;
    u32 uStack_20;

    puVar1 = g_8c4ab0c4;
    cVar16 = '\0';
    cVar15 = '\0';
    uStack_20 = (u32)in_dr14;
    uStack_24 = (u32)((u64)in_dr14 >> 0x20);
    if (a0[1] == 0) {
        return ain0;
    }
    if ((*a0 & 8) != 0) {
        return *a0;
    }
    puVar3 = *(u32 **)a0[1];
    if ((puVar3 != NULL) && (g_8c4aad84 != 0)) {
        *g_8c4ab0c4 = *puVar3;
        uVar4 = puVar3[1];
        puVar1[1] = uVar4;
        uVar4 = uVar4 >> 0x10;
        if (g_8c2759d8 == 0) {
            gfxlib_state_switch_21da20(*puVar1 & 0xffff, a1, a2, a3);
            g_8c2759d8 = 1;
        }
        iStack_58 = 0;
        if (g_8c4aa378 != -1) {
            unaff_r13 = g_8c4ab0c4 + g_8c4aa378;
        }
        if (g_8c4aa37c != -1) {
            unaff_r11 = g_8c4ab0c4 + g_8c4aa37c;
        }
        if (g_8c4aa380 != -1) {
            unaff_r8 = g_8c4ab0c4 + g_8c4aa380;
        }
        if (cVar16 == '\0') {
            in_fr13 = 2.1474836e+09;
        }
        if ((g_8c4aad86 & 0x10) != 0) {
            iVar5 = *(int *)(g_8c4aad68 + g_8c4aad78 * 4);
            if (iVar5 != 0) {
                a2 = *(u32 **)(g_8c4aad6c + g_8c4aad78 * 4);
                if (cVar16 == '\0') {
                    dVar11 = (double)CONCAT44(g_8c4aad70, in_fr5);
                } else {
                    dVar11 = (double)CONCAT44(g_8c4aad74, g_8c4aad70);
                }
                fVar12 = (float)((u64)dVar11 >> 0x20);
                if (cVar15 == '\0') {
                    bVar13 = in_fr13 < fVar12;
                } else {
                    bVar13 = (double)CONCAT44(in_fr12, in_fr13) < dVar11;
                }
                puVar6 = NULL;
                if (bVar13) {
                    if (cVar16 == '\0') {
                        dVar10 = (double)CONCAT44(0xcf800000, fVar12);
                    } else {
                        dVar10 = -3.155538209390776e-250;
                    }
                    if (cVar15 == '\0') {
                        fVar12 = (float)((u64)dVar10 >> 0x20);
                        in_dr2 = (double)CONCAT44(fVar12, SUB84(dVar10, 0) + fVar12);
                    } else {
                        in_dr2 = dVar10 + dVar10;
                    }
                } else if (cVar16 == '\0') {
                    in_dr2 = (double)CONCAT44((int)((u64)in_dr2 >> 0x20), fVar12);
                }
                if (cVar15 == '\0') {
                    uVar14 = (u32)SUB84(in_dr2, 0);
                    puVar7 = a2;
                } else {
                    uVar14 = (u32)in_dr2;
                    puVar7 = a2;
                }
                while (puStack_74 = puVar7, 1 < (u32)((int)puStack_74 - (int)puVar6)) {
                    puVar7 = (u32 *)((u32)((int)puStack_74 + (int)puVar6) >> 1);
                    if (*(u32 *)((int)puVar7 * 8 + iVar5) <= uVar14) {
                        puVar6 = puVar7;
                        puVar7 = puStack_74;
                    }
                }
                a3 = &iStack_34;
                keyframe_pair(iVar5, puVar6, a2, a3);
                in_fr5 = SUB84(dVar11, 0);
                iStack_6c = iStack_34;
                puStack_74 = (u32 *)iStack_30;
                iStack_58 = 1;
            }
            g_8c4aad78 = g_8c4aad78 + 1;
        }
        if ((g_8c4aad86 & 0x20) != 0) {
            iVar5 = *(int *)(g_8c4aad68 + g_8c4aad78 * 4);
            if (iVar5 != 0) {
                a2 = *(u32 **)(g_8c4aad6c + g_8c4aad78 * 4);
                if (cVar16 == '\0') {
                    dVar11 = (double)CONCAT44(g_8c4aad70, in_fr5);
                } else {
                    dVar11 = (double)CONCAT44(g_8c4aad74, g_8c4aad70);
                }
                fVar12 = (float)((u64)dVar11 >> 0x20);
                if (cVar15 == '\0') {
                    bVar13 = in_fr13 < fVar12;
                } else {
                    bVar13 = (double)CONCAT44(in_fr12, in_fr13) < dVar11;
                }
                puVar6 = NULL;
                if (bVar13) {
                    if (cVar16 == '\0') {
                        dVar10 = (double)CONCAT44(0xcf800000, fVar12);
                    } else {
                        dVar10 = -3.155538209390776e-250;
                    }
                    if (cVar15 == '\0') {
                        fVar12 = (float)((u64)dVar10 >> 0x20);
                        in_dr2 = (double)CONCAT44(fVar12, SUB84(dVar10, 0) + fVar12);
                    } else {
                        in_dr2 = dVar10 + dVar10;
                    }
                } else if (cVar16 == '\0') {
                    in_dr2 = (double)CONCAT44((int)((u64)in_dr2 >> 0x20), fVar12);
                }
                if (cVar15 == '\0') {
                    uVar14 = (u32)SUB84(in_dr2, 0);
                    puVar7 = a2;
                } else {
                    uVar14 = (u32)in_dr2;
                    puVar7 = a2;
                }
                while (puStack_68 = puVar7, 1 < (u32)((int)puStack_68 - (int)puVar6)) {
                    puVar7 = (u32 *)((u32)((int)puStack_68 + (int)puVar6) >> 1);
                    if (*(u32 *)((int)puVar7 * 8 + iVar5) <= uVar14) {
                        puVar6 = puVar7;
                        puVar7 = puStack_68;
                    }
                }
                a3 = &iStack_3c;
                keyframe_pair(iVar5, puVar6, a2, a3);
                in_fr5 = SUB84(dVar11, 0);
                iStack_5c = iStack_3c;
                puStack_68 = (u32 *)iStack_38;
                iStack_58 = iStack_58 + 2;
            }
            g_8c4aad78 = g_8c4aad78 + 1;
        }
        if ((g_8c4aad86 & 0x4000) != 0) {
            iVar5 = *(int *)(g_8c4aad68 + g_8c4aad78 * 4);
            if (iVar5 != 0) {
                a2 = *(u32 **)(g_8c4aad6c + g_8c4aad78 * 4);
                if (cVar16 == '\0') {
                    dVar11 = (double)CONCAT44(g_8c4aad70, in_fr5);
                } else {
                    dVar11 = (double)CONCAT44(g_8c4aad74, g_8c4aad70);
                }
                fVar12 = (float)((u64)dVar11 >> 0x20);
                if (cVar15 == '\0') {
                    bVar13 = in_fr13 < fVar12;
                } else {
                    bVar13 = (double)CONCAT44(in_fr12, in_fr13) < dVar11;
                }
                puVar6 = NULL;
                if (bVar13) {
                    if (cVar16 == '\0') {
                        dVar11 = (double)CONCAT44(0xcf800000, fVar12);
                    } else {
                        dVar11 = -3.155905840934326e-250;
                    }
                    if (cVar15 == '\0') {
                        fVar12 = (float)((u64)dVar11 >> 0x20);
                        in_dr2 = (double)CONCAT44(fVar12, SUB84(dVar11, 0) + fVar12);
                    } else {
                        in_dr2 = dVar11 + dVar11;
                    }
                } else if (cVar16 == '\0') {
                    in_dr2 = (double)CONCAT44((int)((u64)in_dr2 >> 0x20), fVar12);
                }
                if (cVar15 == '\0') {
                    uVar14 = (u32)SUB84(in_dr2, 0);
                    puVar7 = a2;
                } else {
                    uVar14 = (u32)in_dr2;
                    puVar7 = a2;
                }
                while (puStack_64 = puVar7, 1 < (u32)((int)puStack_64 - (int)puVar6)) {
                    puVar7 = (u32 *)((u32)((int)puStack_64 + (int)puVar6) >> 1);
                    if (*(u32 *)((int)puVar7 * 8 + iVar5) <= uVar14) {
                        puVar6 = puVar7;
                        puVar7 = puStack_64;
                    }
                }
                a3 = &iStack_44;
                keyframe_pair_b(iVar5, puVar6, a2, a3);
                puStack_64 = (u32 *)iStack_44;
                iStack_60 = iStack_40;
                iStack_58 = iStack_58 + 4;
            }
            g_8c4aad78 = g_8c4aad78 + 1;
        }
        a1 = g_8c4aa380;
        puStack_70 = puVar3;
        if (iStack_58 == 1) {
            if (g_8c4aa380 == -1) {
                if (g_8c4aa37c == -1) {
                    iVar5 = 0;
                    iVar8 = 0;
                    if (uVar4 != 0) {
                        do {
                            a1 = (int)puStack_74 + iVar8 * 4;
                            a2 = unaff_r13;
                            Vec3_lerp(iStack_6c + iVar8 * 4, a1, unaff_r13);
                            iVar5 = iVar5 + 1;
                            unaff_r13 = unaff_r13 + g_8c4aa374;
                            iVar8 = iVar8 + 3;
                        } while (iVar5 < (int)uVar4);
                    }
                } else {
                    iVar5 = 0;
                    iVar8 = 0;
                    puVar6 = puVar3;
                    if (uVar4 != 0) {
                        do {
                            a1 = iVar8 * 4 + (int)puStack_74;
                            a2 = unaff_r13;
                            Vec3_lerp(iVar8 * 4 + iStack_6c, a1, unaff_r13);
                            iVar5 = iVar5 + 1;
                            unaff_r13 = unaff_r13 + g_8c4aa374;
                            if (cVar16 == '\0') {
                                *unaff_r11 = puVar6[g_8c4aa37c];
                                unaff_r11[1] = puVar6[g_8c4aa37c + 1];
                                unaff_r11[2] = puVar6[g_8c4aa37c + 2];
                            } else {
                                *(u64 *)unaff_r11 = *(u64 *)(puVar6 + g_8c4aa37c);
                                *(u64 *)(unaff_r11 + 1) = *(u64 *)(puVar6 + g_8c4aa37c + 1);
                                *(u64 *)(unaff_r11 + 2) = *(u64 *)(puVar6 + g_8c4aa37c + 2);
                            }
                            unaff_r11 = unaff_r11 + g_8c4aa374;
                            puVar6 = puVar6 + g_8c4aa374;
                            iVar8 = iVar8 + 3;
                        } while (iVar5 < (int)uVar4);
                    }
                }
            } else if (g_8c4aa37c == -1) {
                iVar5 = 0;
                iVar8 = 0;
                if (uVar4 != 0) {
                    do {
                        a1 = (int)puStack_74 + iVar8 * 4;
                        a2 = unaff_r13;
                        Vec3_lerp(iStack_6c + iVar8 * 4, a1, unaff_r13);
                        iVar5 = iVar5 + 1;
                        unaff_r13 = unaff_r13 + g_8c4aa374;
                        *unaff_r8 = puStack_70[g_8c4aa380];
                        puStack_70 = puStack_70 + g_8c4aa374;
                        unaff_r8 = unaff_r8 + g_8c4aa374;
                        iVar8 = iVar8 + 3;
                    } while (iVar5 < (int)uVar4);
                }
            } else {
                iVar5 = 0;
                puStack_68 = NULL;
                puVar6 = puVar3;
                if (uVar4 != 0) {
                    do {
                        a1 = iVar5 * 4 + (int)puStack_74;
                        a2 = unaff_r13;
                        Vec3_lerp(iVar5 * 4 + iStack_6c, a1, unaff_r13);
                        unaff_r13 = unaff_r13 + g_8c4aa374;
                        if (cVar16 == '\0') {
                            *unaff_r11 = puVar6[g_8c4aa37c];
                            unaff_r11[1] = puVar6[g_8c4aa37c + 1];
                            unaff_r11[2] = puVar6[g_8c4aa37c + 2];
                        } else {
                            *(u64 *)unaff_r11 = *(u64 *)(puVar6 + g_8c4aa37c);
                            *(u64 *)(unaff_r11 + 1) = *(u64 *)(puVar6 + g_8c4aa37c + 1);
                            *(u64 *)(unaff_r11 + 2) = *(u64 *)(puVar6 + g_8c4aa37c + 2);
                        }
                        unaff_r11 = unaff_r11 + g_8c4aa374;
                        *unaff_r8 = puStack_70[g_8c4aa380];
                        unaff_r8 = unaff_r8 + g_8c4aa374;
                        puVar6 = puVar6 + g_8c4aa374;
                        puStack_70 = puStack_70 + g_8c4aa374;
                        puStack_68 = (u32 *)((int)puStack_68 + 1);
                        iVar5 = iVar5 + 3;
                    } while ((int)puStack_68 < (int)uVar4);
                }
            }
        } else if (iStack_58 == 2) {
            if (g_8c4aa380 == -1) {
                iVar5 = 0;
                puStack_74 = NULL;
                puVar6 = puVar3;
                if (uVar4 != 0) {
                    do {
                        if (cVar16 == '\0') {
                            *unaff_r13 = puVar6[g_8c4aa378];
                            unaff_r13[1] = puVar6[g_8c4aa378 + 1];
                            unaff_r13[2] = puVar6[g_8c4aa378 + 2];
                        } else {
                            *(u64 *)unaff_r13 = *(u64 *)(puVar6 + g_8c4aa378);
                            *(u64 *)(unaff_r13 + 1) = *(u64 *)(puVar6 + g_8c4aa378 + 1);
                            *(u64 *)(unaff_r13 + 2) = *(u64 *)(puVar6 + g_8c4aa378 + 2);
                        }
                        unaff_r13 = unaff_r13 + g_8c4aa374;
                        a1 = iVar5 * 4 + (int)puStack_68;
                        a2 = unaff_r11;
                        Vec3_lerp_normalize(iVar5 * 4 + iStack_5c, a1, unaff_r11);
                        puStack_74 = (u32 *)((int)puStack_74 + 1);
                        unaff_r11 = unaff_r11 + g_8c4aa374;
                        puVar6 = puVar6 + g_8c4aa374;
                        iVar5 = iVar5 + 3;
                    } while ((int)puStack_74 < (int)uVar4);
                }
            } else {
                iStack_6c = 0;
                puStack_74 = NULL;
                puVar6 = puVar3;
                if (uVar4 != 0) {
                    do {
                        if (cVar16 == '\0') {
                            *unaff_r13 = puVar6[g_8c4aa378];
                            unaff_r13[1] = puVar6[g_8c4aa378 + 1];
                            unaff_r13[2] = puVar6[g_8c4aa378 + 2];
                        } else {
                            *(u64 *)unaff_r13 = *(u64 *)(puVar6 + g_8c4aa378);
                            *(u64 *)(unaff_r13 + 1) = *(u64 *)(puVar6 + g_8c4aa378 + 1);
                            *(u64 *)(unaff_r13 + 2) = *(u64 *)(puVar6 + g_8c4aa378 + 2);
                        }
                        unaff_r13 = unaff_r13 + g_8c4aa374;
                        a1 = (int)puStack_74 * 4 + (int)puStack_68;
                        a2 = unaff_r11;
                        Vec3_lerp_normalize((int)puStack_74 * 4 + iStack_5c, a1, unaff_r11);
                        unaff_r11 = unaff_r11 + g_8c4aa374;
                        *unaff_r8 = puStack_70[g_8c4aa380];
                        puStack_70 = puStack_70 + g_8c4aa374;
                        puVar6 = puVar6 + g_8c4aa374;
                        unaff_r8 = unaff_r8 + g_8c4aa374;
                        iStack_6c = iStack_6c + 1;
                        puStack_74 = (u32 *)((int)puStack_74 + 3);
                    } while (iStack_6c < (int)uVar4);
                }
            }
        } else if (iStack_58 == 3) {
            if (g_8c4aa380 == -1) {
                iVar5 = 0;
                iVar8 = 0;
                if (uVar4 != 0) {
                    do {
                        Vec3_lerp(iStack_6c + iVar8 * 4, (int)puStack_74 + iVar8 * 4, unaff_r13);
                        unaff_r13 = unaff_r13 + g_8c4aa374;
                        a1 = iVar8 * 4 + (int)puStack_68;
                        a2 = unaff_r11;
                        Vec3_lerp_normalize(iVar8 * 4 + iStack_5c, a1, unaff_r11);
                        iVar5 = iVar5 + 1;
                        unaff_r11 = unaff_r11 + g_8c4aa374;
                        iVar8 = iVar8 + 3;
                    } while (iVar5 < (int)uVar4);
                }
            } else {
                iVar5 = 0;
                iVar8 = 0;
                if (uVar4 != 0) {
                    do {
                        Vec3_lerp(iVar8 * 4 + iStack_6c, iVar8 * 4 + (int)puStack_74, unaff_r13);
                        unaff_r13 = unaff_r13 + g_8c4aa374;
                        a1 = iVar8 * 4 + (int)puStack_68;
                        a2 = unaff_r11;
                        Vec3_lerp_normalize(iVar8 * 4 + iStack_5c, a1, unaff_r11);
                        iVar5 = iVar5 + 1;
                        unaff_r11 = unaff_r11 + g_8c4aa374;
                        *unaff_r8 = puStack_70[g_8c4aa380];
                        puStack_70 = puStack_70 + g_8c4aa374;
                        unaff_r8 = unaff_r8 + g_8c4aa374;
                        iVar8 = iVar8 + 3;
                    } while (iVar5 < (int)uVar4);
                }
            }
        } else if (iStack_58 == 4) {
            if (g_8c4aa37c == -1) {
                iVar5 = 0;
                puStack_74 = NULL;
                if (uVar4 != 0) {
                    do {
                        if (cVar16 == '\0') {
                            *unaff_r13 = puVar3[g_8c4aa378];
                            unaff_r13[1] = puVar3[g_8c4aa378 + 1];
                            unaff_r13[2] = puVar3[g_8c4aa378 + 2];
                        } else {
                            *(u64 *)unaff_r13 = *(u64 *)(puVar3 + g_8c4aa378);
                            *(u64 *)(unaff_r13 + 1) = *(u64 *)(puVar3 + g_8c4aa378 + 1);
                            *(u64 *)(unaff_r13 + 2) = *(u64 *)(puVar3 + g_8c4aa378 + 2);
                        }
                        unaff_r13 = unaff_r13 + g_8c4aa374;
                        a1 = iStack_60 + iVar5;
                        a2 = unaff_r8;
                        argb_lerp((int)puStack_64 + iVar5, a1, unaff_r8);
                        puStack_74 = (u32 *)((int)puStack_74 + 1);
                        unaff_r8 = unaff_r8 + g_8c4aa374;
                        iVar5 = iVar5 + 4;
                    } while ((int)puStack_74 < (int)uVar4);
                }
            } else {
                iStack_6c = 0;
                puStack_74 = NULL;
                puVar6 = puVar3;
                if (uVar4 != 0) {
                    do {
                        if (cVar16 == '\0') {
                            *unaff_r13 = puVar6[g_8c4aa378];
                            unaff_r13[1] = puVar6[g_8c4aa378 + 1];
                            unaff_r13[2] = puVar6[g_8c4aa378 + 2];
                        } else {
                            *(u64 *)unaff_r13 = *(u64 *)(puVar6 + g_8c4aa378);
                            *(u64 *)(unaff_r13 + 1) = *(u64 *)(puVar6 + g_8c4aa378 + 1);
                            *(u64 *)(unaff_r13 + 2) = *(u64 *)(puVar6 + g_8c4aa378 + 2);
                        }
                        unaff_r13 = unaff_r13 + g_8c4aa374;
                        if (cVar16 == '\0') {
                            *unaff_r11 = puVar6[g_8c4aa37c];
                            unaff_r11[1] = puVar6[g_8c4aa37c + 1];
                            unaff_r11[2] = puVar6[g_8c4aa37c + 2];
                        } else {
                            *(u64 *)unaff_r11 = *(u64 *)(puVar6 + g_8c4aa37c);
                            *(u64 *)(unaff_r11 + 1) = *(u64 *)(puVar6 + g_8c4aa37c + 1);
                            *(u64 *)(unaff_r11 + 2) = *(u64 *)(puVar6 + g_8c4aa37c + 2);
                        }
                        unaff_r11 = unaff_r11 + g_8c4aa374;
                        a1 = (int)puStack_74 + iStack_60;
                        a2 = unaff_r8;
                        argb_lerp((int)puStack_74 + (int)puStack_64, a1, unaff_r8);
                        iStack_6c = iStack_6c + 1;
                        puVar6 = puVar6 + g_8c4aa374;
                        unaff_r8 = unaff_r8 + g_8c4aa374;
                        puStack_74 = (u32 *)((int)puStack_74 + 4);
                    } while (iStack_6c < (int)uVar4);
                }
            }
        } else if (iStack_58 == 5) {
            if (g_8c4aa37c == -1) {
                iVar5 = 0;
                iVar9 = 0;
                iVar8 = 0;
                if (uVar4 != 0) {
                    do {
                        Vec3_lerp(iVar8 * 4 + iStack_6c, iVar8 * 4 + (int)puStack_74, unaff_r13);
                        a1 = iStack_60 + iVar9;
                        unaff_r13 = unaff_r13 + g_8c4aa374;
                        a2 = unaff_r8;
                        argb_lerp((int)puStack_64 + iVar9, a1, unaff_r8);
                        iVar5 = iVar5 + 1;
                        iVar9 = iVar9 + 4;
                        unaff_r8 = unaff_r8 + g_8c4aa374;
                        iVar8 = iVar8 + 3;
                    } while (iVar5 < (int)uVar4);
                }
            } else {
                puStack_68 = NULL;
                iVar5 = 0;
                puStack_70 = NULL;
                puVar6 = puVar3;
                if (uVar4 != 0) {
                    do {
                        Vec3_lerp((int)puStack_70 * 4 + iStack_6c, (int)puStack_70 * 4 + (int)puStack_74, unaff_r13);
                        unaff_r13 = unaff_r13 + g_8c4aa374;
                        if (cVar16 == '\0') {
                            *unaff_r11 = puVar6[g_8c4aa37c];
                            unaff_r11[1] = puVar6[g_8c4aa37c + 1];
                            unaff_r11[2] = puVar6[g_8c4aa37c + 2];
                        } else {
                            *(u64 *)unaff_r11 = *(u64 *)(puVar6 + g_8c4aa37c);
                            *(u64 *)(unaff_r11 + 1) = *(u64 *)(puVar6 + g_8c4aa37c + 1);
                            *(u64 *)(unaff_r11 + 2) = *(u64 *)(puVar6 + g_8c4aa37c + 2);
                        }
                        unaff_r11 = unaff_r11 + g_8c4aa374;
                        a1 = iStack_60 + iVar5;
                        a2 = unaff_r8;
                        argb_lerp((int)puStack_64 + iVar5, a1, unaff_r8);
                        iVar5 = iVar5 + 4;
                        puStack_68 = (u32 *)((int)puStack_68 + 1);
                        puVar6 = puVar6 + g_8c4aa374;
                        unaff_r8 = unaff_r8 + g_8c4aa374;
                        puStack_70 = (u32 *)((int)puStack_70 + 3);
                    } while ((int)puStack_68 < (int)uVar4);
                }
            }
        } else if (iStack_58 == 6) {
            puStack_70 = NULL;
            puStack_74 = NULL;
            iStack_6c = 0;
            puVar6 = puVar3;
            if (uVar4 != 0) {
                do {
                    if (cVar16 == '\0') {
                        *unaff_r13 = puVar6[g_8c4aa378];
                        unaff_r13[1] = puVar6[g_8c4aa378 + 1];
                        unaff_r13[2] = puVar6[g_8c4aa378 + 2];
                    } else {
                        *(u64 *)unaff_r13 = *(u64 *)(puVar6 + g_8c4aa378);
                        *(u64 *)(unaff_r13 + 1) = *(u64 *)(puVar6 + g_8c4aa378 + 1);
                        *(u64 *)(unaff_r13 + 2) = *(u64 *)(puVar6 + g_8c4aa378 + 2);
                    }
                    unaff_r13 = unaff_r13 + g_8c4aa374;
                    Vec3_lerp_normalize(iStack_6c * 4 + iStack_5c, iStack_6c * 4 + (int)puStack_68, unaff_r11);
                    unaff_r11 = unaff_r11 + g_8c4aa374;
                    a1 = (int)puStack_74 + iStack_60;
                    a2 = unaff_r8;
                    argb_lerp((int)puStack_74 + (int)puStack_64, a1, unaff_r8);
                    puStack_70 = (u32 *)((int)puStack_70 + 1);
                    unaff_r8 = unaff_r8 + g_8c4aa374;
                    puStack_74 = (u32 *)((int)puStack_74 + 4);
                    iStack_6c = iStack_6c + 3;
                    puVar6 = puVar6 + g_8c4aa374;
                } while ((int)puStack_70 < (int)uVar4);
            }
        } else {
            if (iStack_58 != 7)
                goto LAB_8c21ee14;
            iVar8 = 0;
            puStack_70 = NULL;
            iVar5 = 0;
            if (uVar4 != 0) {
                do {
                    Vec3_lerp(iVar8 * 4 + iStack_6c, iVar8 * 4 + (int)puStack_74, unaff_r13);
                    unaff_r13 = unaff_r13 + g_8c4aa374;
                    Vec3_lerp_normalize(iVar8 * 4 + iStack_5c, iVar8 * 4 + (int)puStack_68, unaff_r11);
                    a1 = iStack_60 + iVar5;
                    unaff_r11 = unaff_r11 + g_8c4aa374;
                    a2 = unaff_r8;
                    argb_lerp((int)puStack_64 + iVar5, a1, unaff_r8);
                    iVar5 = iVar5 + 4;
                    puStack_70 = (u32 *)((int)puStack_70 + 1);
                    unaff_r8 = unaff_r8 + g_8c4aa374;
                    iVar8 = iVar8 + 3;
                } while ((int)puStack_70 < (int)uVar4);
            }
        }
        *(u32 **)a0[1] = puVar1;
        puVar1[g_8c4aa374 * uVar4 + 2] = 0xff;
    }
LAB_8c21ee14:
    uVar2 = (*g_8c4aa368)(a0[1], a1, a2, a3);
    *(u32 **)a0[1] = puVar3;
    return uVar2;
}

/*
 * gfxlib_calc_21ee54  0x8c21ee54
 * area name: in the gfxlib library code range; behaviour name: integer arithmetic on its arguments
 * called by: gfxlib_vec_21ee94
 */
u32 *gfxlib_calc_21ee54(u32 *a0) {
    u32 *puVar1;
    u16 *puVar2;
    u32 *puVar3;
    u32 *puVar4;
    u32 uVar5;

    puVar4 = 0x8c4aa380;
    puVar3 = 0x8c4aa37c;
    puVar2 = 0x8c4aad86;
    puVar1 = 0x8c4aa378;
    if (a0 == (u32 *)0x29) {
        g_8c4aa374 = 6;
        *puVar1 = 2;
        *puVar3 = 5;
        uVar5 = 0xbfff;
        g_8c4aa380 = 0xffffffff;
        *puVar2 = *puVar2 & (u16)uVar5;
        a0 = puVar3;
    } else {
        g_8c4aa374 = 0;
        *puVar1 = 0xffffffff;
        *puVar3 = 0xffffffff;
        *puVar4 = 0xffffffff;
        *puVar2 = 0;
    }
    return a0;
}

/*
 * gfxlib_vec_21ee94  0x8c21ee94
 * area name: in the gfxlib library code range; behaviour name: mostly calls vec functions
 */
u32 gfxlib_vec_21ee94(u32 *a0, u32 *a1, u32 *a2, u32 **a3, u32 ain0) {
    u32 *puVar1;
    u32 uVar2;
    u32 *puVar3;
    u32 uVar4;
    int iVar5;
    u32 *puVar6;
    u32 *unaff_r11;
    u32 *unaff_r12;
    int iVar7;
    u32 extraout_fr0;
    double in_dr2;
    double dVar8;
    float fVar9;
    u32 in_fr5;
    double dVar10;
    u64 in_dr14;
    double dVar11;
    bool bVar12;
    u32 uVar13;
    char cVar14;
    char cVar15;
    u32 *puStack_5c;
    int iStack_58;
    u32 *puStack_54;
    int iStack_50;
    int iStack_4c;
    u32 *puStack_38;
    int iStack_34;
    u32 *puStack_30;
    int iStack_2c;
    u32 uStack_24;
    u32 uStack_20;

    puVar1 = g_8c4ab0c4;
    cVar15 = '\0';
    cVar14 = '\0';
    uStack_20 = (u32)in_dr14;
    uStack_24 = (u32)((u64)in_dr14 >> 0x20);
    if (a0[1] == 0) {
        return ain0;
    }
    if ((*a0 & 8) != 0) {
        return *a0;
    }
    puVar3 = *(u32 **)a0[1];
    if ((puVar3 != NULL) && (g_8c4aad84 != 0)) {
        *g_8c4ab0c4 = *puVar3;
        uVar4 = puVar3[1];
        puVar1[1] = uVar4;
        uVar4 = uVar4 >> 0x10;
        if (g_8c2759d8 == 0) {
            gfxlib_calc_21ee54(*puVar1 & 0xffff);
            g_8c2759d8 = 1;
        }
        iStack_58 = 0;
        if (g_8c4aa378 != -1) {
            unaff_r12 = g_8c4ab0c4 + g_8c4aa378;
        }
        if (g_8c4aa37c != (u32 *)0xffffffff) {
            unaff_r11 = g_8c4ab0c4 + (int)g_8c4aa37c;
        }
        if (cVar15 == '\0') {
            dVar11 = (double)CONCAT44(0x4f000000, (int)in_dr14);
        } else {
            dVar11 = -1.8630120701277013e-249;
        }
        a1 = g_8c4aa37c;
        if ((g_8c4aad86 & 0x10) != 0) {
            iVar5 = *(int *)(g_8c4aad68 + g_8c4aad78 * 4);
            if (iVar5 != 0) {
                a2 = *(u32 **)(g_8c4aad6c + g_8c4aad78 * 4);
                if (cVar15 == '\0') {
                    dVar10 = (double)CONCAT44(g_8c4aad70, in_fr5);
                } else {
                    dVar10 = (double)CONCAT44(g_8c4aad74, g_8c4aad70);
                }
                fVar9 = (float)((u64)dVar10 >> 0x20);
                if (cVar14 == '\0') {
                    bVar12 = (float)((u64)dVar11 >> 0x20) < fVar9;
                } else {
                    bVar12 = dVar11 < dVar10;
                }
                a1 = NULL;
                if (bVar12) {
                    if (cVar15 == '\0') {
                        dVar8 = (double)CONCAT44(0xcf800000, fVar9);
                    } else {
                        dVar8 = -3.155538209390776e-250;
                    }
                    if (cVar14 == '\0') {
                        fVar9 = (float)((u64)dVar8 >> 0x20);
                        in_dr2 = (double)CONCAT44(fVar9, SUB84(dVar8, 0) + fVar9);
                    } else {
                        in_dr2 = dVar8 + dVar8;
                    }
                } else if (cVar15 == '\0') {
                    in_dr2 = (double)CONCAT44((int)((u64)in_dr2 >> 0x20), fVar9);
                }
                if (cVar14 == '\0') {
                    uVar13 = (u32)SUB84(in_dr2, 0);
                    puVar6 = a2;
                } else {
                    uVar13 = (u32)in_dr2;
                    puVar6 = a2;
                }
                while (puStack_5c = puVar6, 1 < (u32)((int)puStack_5c - (int)a1)) {
                    puVar6 = (u32 *)((u32)((int)puStack_5c + (int)a1) >> 1);
                    if (*(u32 *)((int)puVar6 * 8 + iVar5) <= uVar13) {
                        a1 = puVar6;
                        puVar6 = puStack_5c;
                    }
                }
                a3 = &puStack_30;
                keyframe_pair(iVar5, a1, a2, a3);
                in_fr5 = SUB84(dVar10, 0);
                if (cVar15 == '\0') {
                    dVar11 = (double)CONCAT44((int)((u64)dVar11 >> 0x20), extraout_fr0);
                }
                puStack_54 = puStack_30;
                iStack_4c = iStack_2c;
                iStack_58 = 1;
            }
            g_8c4aad78 = g_8c4aad78 + 1;
        }
        if ((g_8c4aad86 & 0x20) != 0) {
            a1 = (u32 *)(g_8c4aad78 * 4);
            iVar5 = *(int *)(g_8c4aad68 + (int)a1);
            if (iVar5 != 0) {
                a2 = *(u32 **)(g_8c4aad6c + (int)a1);
                if (cVar15 == '\0') {
                    dVar10 = (double)CONCAT44(g_8c4aad70, in_fr5);
                } else {
                    dVar10 = (double)CONCAT44(g_8c4aad74, g_8c4aad70);
                }
                fVar9 = (float)((u64)dVar10 >> 0x20);
                if (cVar14 == '\0') {
                    bVar12 = (float)((u64)dVar11 >> 0x20) < fVar9;
                } else {
                    bVar12 = dVar11 < dVar10;
                }
                a1 = NULL;
                if (bVar12) {
                    if (cVar15 == '\0') {
                        dVar11 = (double)CONCAT44(0xcf800000, fVar9);
                    } else {
                        dVar11 = -3.155538209390776e-250;
                    }
                    if (cVar14 == '\0') {
                        fVar9 = (float)((u64)dVar11 >> 0x20);
                        in_dr2 = (double)CONCAT44(fVar9, SUB84(dVar11, 0) + fVar9);
                    } else {
                        in_dr2 = dVar11 + dVar11;
                    }
                } else if (cVar15 == '\0') {
                    in_dr2 = (double)CONCAT44((int)((u64)in_dr2 >> 0x20), fVar9);
                }
                if (cVar14 == '\0') {
                    uVar13 = (u32)SUB84(in_dr2, 0);
                    puVar6 = a2;
                } else {
                    uVar13 = (u32)in_dr2;
                    puVar6 = a2;
                }
                while (puStack_5c = puVar6, 1 < (u32)((int)puStack_5c - (int)a1)) {
                    puVar6 = (u32 *)((u32)((int)puStack_5c + (int)a1) >> 1);
                    if (*(u32 *)((int)puVar6 * 8 + iVar5) <= uVar13) {
                        a1 = puVar6;
                        puVar6 = puStack_5c;
                    }
                }
                a3 = &puStack_38;
                keyframe_pair(iVar5, a1, a2, a3);
                puStack_5c = puStack_38;
                iStack_50 = iStack_34;
                iStack_58 = iStack_58 + 2;
            }
            g_8c4aad78 = g_8c4aad78 + 1;
        }
        if (iStack_58 == 1) {
            iStack_58 = 0;
            puStack_5c = NULL;
            puVar6 = puVar3;
            if (uVar4 != 0) {
                do {
                    a1 = (u32 *)((int)puStack_5c * 4 + iStack_4c);
                    a2 = unaff_r12;
                    Vec3_lerp(puStack_54 + (int)puStack_5c, a1, unaff_r12);
                    unaff_r12 = unaff_r12 + g_8c4aa374;
                    if (cVar15 == '\0') {
                        *unaff_r11 = puVar6[(int)g_8c4aa37c];
                        unaff_r11[1] = puVar6[(int)g_8c4aa37c + 1];
                        unaff_r11[2] = puVar6[(int)g_8c4aa37c + 2];
                    } else {
                        *(u64 *)unaff_r11 = *(u64 *)(puVar6 + (int)g_8c4aa37c);
                        *(u64 *)(unaff_r11 + 1) = *(u64 *)(puVar6 + (int)g_8c4aa37c + 1);
                        *(u64 *)(unaff_r11 + 2) = *(u64 *)(puVar6 + (int)g_8c4aa37c + 2);
                    }
                    iStack_58 = iStack_58 + 1;
                    unaff_r11 = unaff_r11 + g_8c4aa374;
                    puVar6 = puVar6 + g_8c4aa374;
                    puStack_5c = (u32 *)((int)puStack_5c + 3);
                } while (iStack_58 < (int)uVar4);
            }
        } else if (iStack_58 == 2) {
            iVar5 = 0;
            iVar7 = 0;
            puVar6 = puVar3;
            if (uVar4 != 0) {
                do {
                    if (cVar15 == '\0') {
                        *unaff_r12 = puVar6[g_8c4aa378];
                        unaff_r12[1] = puVar6[g_8c4aa378 + 1];
                        unaff_r12[2] = puVar6[g_8c4aa378 + 2];
                    } else {
                        *(u64 *)unaff_r12 = *(u64 *)(puVar6 + g_8c4aa378);
                        *(u64 *)(unaff_r12 + 1) = *(u64 *)(puVar6 + g_8c4aa378 + 1);
                        *(u64 *)(unaff_r12 + 2) = *(u64 *)(puVar6 + g_8c4aa378 + 2);
                    }
                    unaff_r12 = unaff_r12 + g_8c4aa374;
                    a1 = (u32 *)(iVar7 * 4 + iStack_50);
                    a2 = unaff_r11;
                    Vec3_lerp_normalize(puStack_5c + iVar7, a1, unaff_r11);
                    iVar5 = iVar5 + 1;
                    unaff_r11 = unaff_r11 + g_8c4aa374;
                    puVar6 = puVar6 + g_8c4aa374;
                    iVar7 = iVar7 + 3;
                } while (iVar5 < (int)uVar4);
            }
        } else {
            if (iStack_58 != 3)
                goto LAB_8c21f1c8;
            iVar5 = 0;
            iVar7 = 0;
            if (uVar4 != 0) {
                do {
                    Vec3_lerp(puStack_54 + iVar7, iVar7 * 4 + iStack_4c, unaff_r12);
                    unaff_r12 = unaff_r12 + g_8c4aa374;
                    a1 = (u32 *)(iVar7 * 4 + iStack_50);
                    a2 = unaff_r11;
                    Vec3_lerp_normalize(puStack_5c + iVar7, a1, unaff_r11);
                    iVar5 = iVar5 + 1;
                    unaff_r11 = unaff_r11 + g_8c4aa374;
                    iVar7 = iVar7 + 3;
                } while (iVar5 < (int)uVar4);
            }
        }
        *(u32 **)a0[1] = puVar1;
        puVar1[g_8c4aa374 * uVar4 + 2] = 0xff;
    }
LAB_8c21f1c8:
    uVar2 = (*g_8c4aa368)(a0[1], a1, a2, a3);
    *(u32 **)a0[1] = puVar3;
    return uVar2;
}

/*
 * gfxlib_state_switch_21f200  0x8c21f200
 * area name: in the gfxlib library code range; behaviour name: mostly calls state_switch functions
 * called by: CAnimBody_uses_get_field_1c_on_field_b0_026de0, CAnimal_uses_njGetMatrix_026968
 */
u32 gfxlib_state_switch_21f200(u32 *a0, u32 a1, u32 unused_a2, u32 unused_a3, u32 ain0) {
    u32 uVar1;
    float fVar2;
    float in_fr4;

    if (a0 == NULL) {
        g_8c4aad86 = 0;
        g_8c4ab0c2 = 0;
        g_8c4aad84 = 0;
    } else {
        fVar2 = (float)(int)a0[1];
        if ((int)a0[1] < 0) {
            fVar2 = fVar2 + 4.2949673e+09;
        }
        if (fVar2 <= in_fr4) {
            return ain0;
        }
        g_8c4aad86 = *(u16 *)(a0 + 2);
        g_8c4aad84 = *(u16 *)((int)a0 + 10) & 0xff3f;
        g_8c4ab0c2 = (u16)((*(u16 *)((int)a0 + 10) & 0xc0) != 0);
        g_8c4aad64 = *a0;
        g_8c4aad74 = a0[1];
        g_8c2759d8 = 0;
    }
    g_8c4aad78 = 0;
    g_8c4aad7c = 0;
    g_8c4aa36c = (&PTR_LAB_8c2759dc)[g_8c4aad84];
    g_8c4aad70 = in_fr4;
    uVar1 = gfxlib_state_switch_21da20(a1, 0, &g_8c4aad64, &g_8c4aad84);
    return uVar1;
}

/*
 * gfxlib_calc_21f27c  0x8c21f27c
 * area name: in the gfxlib library code range; behaviour name: integer arithmetic on its arguments
 * called by: game_uses_obj_set_texlist_0297b8
 */
u32 gfxlib_calc_21f27c(u32 a0, int a1, int a2) {
    int *a7;
    u32 *a5;

    a7 = 0x8c4aa360;
    if (a1 == 0) {
        g_8c4aa360 = g_8c4ab0c4;
    } else {
        g_8c4aa360 = a1;
    }
    a5 = 0x8c4aa370;
    if (a2 == 0) {
        g_8c4aa370 = (&gfxlib_vec_21fca8);
    } else {
        g_8c4aa370 = (&gfxlib_vec_21f2ae);
    }
    (*(code *)*0x8c4aa36c)(a0, a5, a2, a7);
    return g_8c4aa364;
}

/*
 * gfxlib_vec_21f2ae  0x8c21f2ae
 * area name: in the gfxlib library code range; behaviour name: mostly calls vec functions
 */
u32 *gfxlib_vec_21f2ae(u32 *a0, u32 unused_a1, u32 unused_a2, int *a3, u32 *ain0) {
    u32 *puVar1;
    u32 uVar2;
    u32 uVar3;
    u32 *puVar4;
    int iVar5;
    u32 uVar6;
    u32 uVar7;
    u32 uVar8;
    int iVar9;
    u32 *unaff_r8;
    int iVar10;
    int iVar11;
    u64 *unaff_r11;
    u64 *unaff_r13;
    double in_dr2;
    double dVar12;
    float fVar14;
    double dVar13;
    float fVar15;
    u32 in_fr5;
    u32 in_fr12;
    u64 in_dr14;
    bool bVar16;
    u32 uVar17;
    char cVar18;
    char cVar19;
    u32 uStack_84;
    u32 *puStack_80;
    int iStack_7c;
    u32 uStack_78;
    int iStack_74;
    int iStack_70;
    int iStack_6c;
    int iStack_68;
    int iStack_64;
    u32 *puStack_60;
    int iStack_54;
    int iStack_50;
    int iStack_4c;
    int iStack_48;
    int iStack_3c;
    int iStack_38;
    int iStack_34;
    int iStack_30;
    u32 uStack_24;
    u32 uStack_20;

    puVar1 = g_8c4aa360;
    cVar19 = '\0';
    cVar18 = '\0';
    uStack_20 = (u32)in_dr14;
    uStack_24 = (u32)((u64)in_dr14 >> 0x20);
    g_8c4aa364 = 0;
    if ((((a0[1] != 0) && (ain0 = (u32 *)*a0, ((u32)ain0 & 8) == 0)) && (puVar4 = *(u32 **)a0[1], puVar4 != NULL)) &&
        (g_8c4aad84 != 0)) {
        *g_8c4aa360 = *puVar4;
        uVar3 = puVar4[1];
        puVar1[1] = uVar3;
        puStack_60 = NULL;
        uVar3 = uVar3 >> 0x10;
        if (g_8c4aa378 != -1) {
            unaff_r13 = (u64 *)(g_8c4aa360 + g_8c4aa378);
        }
        if (g_8c4aa37c != (u32 *)0xffffffff) {
            unaff_r11 = (u64 *)(g_8c4aa360 + (int)g_8c4aa37c);
        }
        if (g_8c4aa380 != (u32 *)0xffffffff) {
            unaff_r8 = g_8c4aa360 + (int)g_8c4aa380;
        }
        fVar15 = 2.1474836e+09;
        if ((g_8c4aad86 & 0x10) != 0) {
            iVar5 = *(int *)(g_8c4aad68 + g_8c4aad78 * 4);
            if (iVar5 != 0) {
                uVar7 = *(u32 *)(g_8c4aad6c + g_8c4aad78 * 4);
                if (g_8c4aad70 <= 2.1474836e+09) {
                    in_dr2 = (double)CONCAT44((int)((u64)in_dr2 >> 0x20), g_8c4aad70);
                } else {
                    in_dr2 = (double)CONCAT44(0xcf800000, g_8c4aad70 + -4.2949673e+09);
                }
                uVar6 = 0;
                uVar2 = uVar7;
                while (uStack_84 = uVar2, 1 < uStack_84 - uVar6) {
                    uVar2 = uStack_84 + uVar6 >> 1;
                    if (*(u32 *)(uVar2 * 8 + iVar5) <= (u32)(int)SUB84(in_dr2, 0)) {
                        uVar6 = uVar2;
                        uVar2 = uStack_84;
                    }
                }
                a3 = &iStack_3c;
                gfxlib_uses_libgcc_divide_helper_22123c(iVar5, uVar6, uVar7, a3);
                iStack_74 = iStack_3c;
                iStack_6c = iStack_38;
                iStack_7c = iStack_34;
                uStack_84 = iStack_30;
                puStack_60 = (u32 *)0x1;
            }
            g_8c4aad78 = g_8c4aad78 + 1;
        }
        if ((g_8c4aad86 & 0x20) != 0) {
            iVar5 = *(int *)(g_8c4aad68 + g_8c4aad78 * 4);
            if (iVar5 != 0) {
                uVar7 = *(u32 *)(g_8c4aad6c + g_8c4aad78 * 4);
                if (cVar19 == '\0') {
                    dVar13 = (double)CONCAT44(g_8c4aad70, in_fr5);
                } else {
                    dVar13 = (double)CONCAT44(g_8c4aad74, g_8c4aad70);
                }
                fVar14 = (float)((u64)dVar13 >> 0x20);
                if (cVar18 == '\0') {
                    bVar16 = fVar15 < fVar14;
                } else {
                    bVar16 = (double)CONCAT44(in_fr12, fVar15) < dVar13;
                }
                uVar6 = 0;
                if (bVar16) {
                    if (cVar19 == '\0') {
                        dVar12 = (double)CONCAT44(0xcf800000, fVar14);
                    } else {
                        dVar12 = -3.1550160660390674e-250;
                    }
                    if (cVar18 == '\0') {
                        fVar14 = (float)((u64)dVar12 >> 0x20);
                        in_dr2 = (double)CONCAT44(fVar14, SUB84(dVar12, 0) + fVar14);
                    } else {
                        in_dr2 = dVar12 + dVar12;
                    }
                } else if (cVar19 == '\0') {
                    in_dr2 = (double)CONCAT44((int)((u64)in_dr2 >> 0x20), fVar14);
                }
                uVar2 = uVar7;
                if (cVar18 == '\0') {
                    uVar17 = (u32)SUB84(in_dr2, 0);
                } else {
                    uVar17 = (u32)in_dr2;
                }
                while (uStack_78 = uVar2, 1 < uStack_78 - uVar6) {
                    uVar2 = uStack_78 + uVar6 >> 1;
                    if (*(u32 *)(uVar2 * 8 + iVar5) <= uVar17) {
                        uVar6 = uVar2;
                        uVar2 = uStack_78;
                    }
                }
                a3 = &iStack_4c;
                keyframe_pair(iVar5, uVar6, uVar7, a3);
                in_fr5 = SUB84(dVar13, 0);
                uStack_78 = iStack_4c;
                iStack_68 = iStack_48;
                puStack_60 = (u32 *)((int)puStack_60 + 2);
            }
            g_8c4aad78 = g_8c4aad78 + 1;
        }
        if ((g_8c4aad86 & 0x4000) != 0) {
            iVar5 = *(int *)(g_8c4aad68 + g_8c4aad78 * 4);
            if (iVar5 != 0) {
                uVar7 = *(u32 *)(g_8c4aad6c + g_8c4aad78 * 4);
                if (cVar19 == '\0') {
                    dVar13 = (double)CONCAT44(g_8c4aad70, in_fr5);
                } else {
                    dVar13 = (double)CONCAT44(g_8c4aad74, g_8c4aad70);
                }
                uVar6 = 0;
                fVar14 = (float)((u64)dVar13 >> 0x20);
                if (cVar18 == '\0') {
                    bVar16 = fVar15 < fVar14;
                } else {
                    bVar16 = (double)CONCAT44(in_fr12, fVar15) < dVar13;
                }
                if (bVar16) {
                    if (cVar19 == '\0') {
                        dVar13 = (double)CONCAT44(0xcf800000, fVar14);
                    } else {
                        dVar13 = -3.155905840934326e-250;
                    }
                    if (cVar18 == '\0') {
                        fVar15 = (float)((u64)dVar13 >> 0x20);
                        in_dr2 = (double)CONCAT44(fVar15, SUB84(dVar13, 0) + fVar15);
                    } else {
                        in_dr2 = dVar13 + dVar13;
                    }
                } else if (cVar19 == '\0') {
                    in_dr2 = (double)CONCAT44((int)((u64)in_dr2 >> 0x20), fVar14);
                }
                uVar2 = uVar7;
                if (cVar18 == '\0') {
                    uVar17 = (u32)SUB84(in_dr2, 0);
                } else {
                    uVar17 = (u32)in_dr2;
                }
                while (uVar8 = uVar2, 1 < uVar8 - uVar6) {
                    uVar2 = uVar6 + uVar8 >> 1;
                    if (*(u32 *)(uVar2 * 8 + iVar5) <= uVar17) {
                        uVar6 = uVar2;
                        uVar2 = uVar8;
                    }
                }
                a3 = &iStack_54;
                keyframe_pair_b(iVar5, uVar6, uVar7, a3);
                iStack_70 = iStack_54;
                iStack_64 = iStack_50;
                puStack_60 = puStack_60 + 1;
            }
            g_8c4aad78 = g_8c4aad78 + 1;
        }
        ain0 = puStack_60;
        g_8c4aa364 = 1;
        puStack_80 = puVar4;
        if (puStack_60 == (u32 *)0x1) {
            if (g_8c4aa380 == (u32 *)0xffffffff) {
                if (g_8c4aa37c == (u32 *)0xffffffff) {
                    iVar5 = 0;
                    iVar9 = 0;
                    ain0 = g_8c4aa37c;
                    if (uVar3 != 0) {
                        do {
                            iVar10 = iVar9 * 4;
                            ain0 = (u32 *)Vec3_catmull_rom(iStack_74 + iVar10, iStack_6c + iVar10, iStack_7c + iVar10,
                                                           uStack_84 + iVar10, unaff_r13);
                            iVar5 = iVar5 + 1;
                            unaff_r13 = (u64 *)((int)unaff_r13 + g_8c4aa374 * 4);
                            iVar9 = iVar9 + 3;
                        } while (iVar5 < (int)uVar3);
                    }
                } else {
                    iVar5 = 0;
                    puStack_80 = NULL;
                    ain0 = NULL;
                    if (uVar3 != 0) {
                        do {
                            iVar9 = iVar5 * 4;
                            Vec3_catmull_rom(iStack_74 + iVar9, iStack_6c + iVar9, iStack_7c + iVar9, uStack_84 + iVar9,
                                             unaff_r13);
                            unaff_r13 = (u64 *)((int)unaff_r13 + g_8c4aa374 * 4);
                            if (cVar19 == '\0') {
                                *(u32 *)unaff_r11 = puVar4[(int)g_8c4aa37c];
                                *(u32 *)((int)unaff_r11 + 4) = puVar4[(int)g_8c4aa37c + 1];
                            } else {
                                *unaff_r11 = *(u64 *)(puVar4 + (int)g_8c4aa37c);
                                *(u64 *)((int)unaff_r11 + 4) = *(u64 *)(puVar4 + (int)g_8c4aa37c + 1);
                            }
                            if (cVar19 == '\0') {
                                *(u32 *)(unaff_r11 + 1) = puVar4[(int)g_8c4aa37c + 2];
                            } else {
                                unaff_r11[1] = *(u64 *)(puVar4 + (int)g_8c4aa37c + 2);
                            }
                            puStack_80 = (u32 *)((int)puStack_80 + 1);
                            puVar4 = puVar4 + g_8c4aa374;
                            unaff_r11 = (u64 *)((int)unaff_r11 + g_8c4aa374 * 4);
                            iVar5 = iVar5 + 3;
                            ain0 = (u32 *)0x8;
                        } while ((int)puStack_80 < (int)uVar3);
                    }
                }
            } else if (g_8c4aa37c == (u32 *)0xffffffff) {
                iVar5 = 0;
                iVar9 = 0;
                ain0 = g_8c4aa37c;
                if (uVar3 != 0) {
                    do {
                        iVar10 = iVar9 * 4;
                        Vec3_catmull_rom(iStack_74 + iVar10, iStack_6c + iVar10, iStack_7c + iVar10, uStack_84 + iVar10,
                                         unaff_r13);
                        iVar5 = iVar5 + 1;
                        unaff_r13 = (u64 *)((int)unaff_r13 + g_8c4aa374 * 4);
                        *unaff_r8 = puStack_80[(int)g_8c4aa380];
                        unaff_r8 = unaff_r8 + g_8c4aa374;
                        iVar9 = iVar9 + 3;
                        ain0 = puStack_80;
                        puStack_80 = puStack_80 + g_8c4aa374;
                    } while (iVar5 < (int)uVar3);
                }
            } else {
                iVar5 = 0;
                iStack_68 = 0;
                ain0 = g_8c4aa37c;
                if (uVar3 != 0) {
                    do {
                        iVar9 = iVar5 * 4;
                        Vec3_catmull_rom(iVar9 + iStack_74, iVar9 + iStack_6c, iVar9 + iStack_7c, iVar9 + uStack_84,
                                         unaff_r13);
                        unaff_r13 = (u64 *)((int)unaff_r13 + g_8c4aa374 * 4);
                        if (cVar19 == '\0') {
                            *(u32 *)unaff_r11 = puVar4[(int)g_8c4aa37c];
                            *(u32 *)((int)unaff_r11 + 4) = puVar4[(int)g_8c4aa37c + 1];
                            *(u32 *)(unaff_r11 + 1) = puVar4[(int)g_8c4aa37c + 2];
                        } else {
                            *unaff_r11 = *(u64 *)(puVar4 + (int)g_8c4aa37c);
                            *(u64 *)((int)unaff_r11 + 4) = *(u64 *)(puVar4 + (int)g_8c4aa37c + 1);
                            unaff_r11[1] = *(u64 *)(puVar4 + (int)g_8c4aa37c + 2);
                        }
                        unaff_r11 = (u64 *)((int)unaff_r11 + g_8c4aa374 * 4);
                        *unaff_r8 = puStack_80[(int)g_8c4aa380];
                        unaff_r8 = unaff_r8 + g_8c4aa374;
                        puVar4 = puVar4 + g_8c4aa374;
                        iStack_68 = iStack_68 + 1;
                        iVar5 = iVar5 + 3;
                        ain0 = puStack_80;
                        puStack_80 = puStack_80 + g_8c4aa374;
                    } while (iStack_68 < (int)uVar3);
                }
            }
        } else if (puStack_60 == (u32 *)0x2) {
            if (g_8c4aa380 == (u32 *)0xffffffff) {
                iVar5 = 0;
                uStack_84 = 0;
                ain0 = g_8c4aa380;
                if (uVar3 != 0) {
                    do {
                        if (cVar19 == '\0') {
                            *(u32 *)unaff_r13 = puVar4[g_8c4aa378];
                            *(u32 *)((int)unaff_r13 + 4) = puVar4[g_8c4aa378 + 1];
                            *(u32 *)(unaff_r13 + 1) = puVar4[g_8c4aa378 + 2];
                        } else {
                            *unaff_r13 = *(u64 *)(puVar4 + g_8c4aa378);
                            *(u64 *)((int)unaff_r13 + 4) = *(u64 *)(puVar4 + g_8c4aa378 + 1);
                            unaff_r13[1] = *(u64 *)(puVar4 + g_8c4aa378 + 2);
                        }
                        unaff_r13 = (u64 *)((int)unaff_r13 + g_8c4aa374 * 4);
                        ain0 = (u32 *)Vec3_lerp_normalize(iVar5 * 4 + uStack_78, iVar5 * 4 + iStack_68, unaff_r11);
                        uStack_84 = uStack_84 + 1;
                        unaff_r11 = (u64 *)((int)unaff_r11 + g_8c4aa374 * 4);
                        puVar4 = puVar4 + g_8c4aa374;
                        iVar5 = iVar5 + 3;
                    } while ((int)uStack_84 < (int)uVar3);
                }
            } else {
                ain0 = NULL;
                iStack_7c = 0;
                uStack_84 = 0;
                if (uVar3 != 0) {
                    do {
                        if (cVar19 == '\0') {
                            *(u32 *)unaff_r13 = puVar4[g_8c4aa378];
                            *(u32 *)((int)unaff_r13 + 4) = puVar4[g_8c4aa378 + 1];
                            *(u32 *)(unaff_r13 + 1) = puVar4[g_8c4aa378 + 2];
                        } else {
                            *unaff_r13 = *(u64 *)(puVar4 + g_8c4aa378);
                            *(u64 *)((int)unaff_r13 + 4) = *(u64 *)(puVar4 + g_8c4aa378 + 1);
                            unaff_r13[1] = *(u64 *)(puVar4 + g_8c4aa378 + 2);
                        }
                        unaff_r13 = (u64 *)((int)unaff_r13 + g_8c4aa374 * 4);
                        Vec3_lerp_normalize(uStack_84 * 4 + uStack_78, uStack_84 * 4 + iStack_68, unaff_r11);
                        unaff_r11 = (u64 *)((int)unaff_r11 + g_8c4aa374 * 4);
                        *unaff_r8 = puStack_80[(int)g_8c4aa380];
                        puVar4 = puVar4 + g_8c4aa374;
                        unaff_r8 = unaff_r8 + g_8c4aa374;
                        iStack_7c = iStack_7c + 1;
                        uStack_84 = uStack_84 + 3;
                        ain0 = puStack_80;
                        puStack_80 = puStack_80 + g_8c4aa374;
                    } while (iStack_7c < (int)uVar3);
                }
            }
        } else if (puStack_60 == (u32 *)0x3) {
            if (g_8c4aa380 == (u32 *)0xffffffff) {
                iVar5 = 0;
                iVar9 = 0;
                ain0 = g_8c4aa380;
                if (uVar3 != 0) {
                    do {
                        iVar11 = iVar9 * 4;
                        iVar10 = uStack_84 + iVar11;
                        Vec3_catmull_rom(iStack_74 + iVar11, iStack_6c + iVar11, iStack_7c + iVar11, iVar10, unaff_r13);
                        unaff_r13 = (u64 *)((int)unaff_r13 + g_8c4aa374 * 4);
                        ain0 = (u32 *)Vec3_lerp_normalize(uStack_78 + iVar9 * 4, iStack_68 + iVar9 * 4, unaff_r11);
                        iVar5 = iVar5 + 1;
                        unaff_r11 = (u64 *)((int)unaff_r11 + g_8c4aa374 * 4);
                        iVar9 = iVar9 + 3;
                    } while (iVar5 < (int)uVar3);
                }
            } else {
                ain0 = NULL;
                iVar5 = 0;
                iStack_70 = 0;
                if (uVar3 != 0) {
                    do {
                        iVar10 = iVar5 * 4;
                        iVar9 = uStack_84 + iVar10;
                        Vec3_catmull_rom(iStack_74 + iVar10, iStack_6c + iVar10, iStack_7c + iVar10, iVar9, unaff_r13);
                        unaff_r13 = (u64 *)((int)unaff_r13 + g_8c4aa374 * 4);
                        Vec3_lerp_normalize(uStack_78 + iVar5 * 4, iStack_68 + iVar5 * 4, unaff_r11);
                        unaff_r11 = (u64 *)((int)unaff_r11 + g_8c4aa374 * 4);
                        *unaff_r8 = puStack_80[(int)g_8c4aa380];
                        unaff_r8 = unaff_r8 + g_8c4aa374;
                        iStack_70 = iStack_70 + 1;
                        iVar5 = iVar5 + 3;
                        ain0 = puStack_80;
                        puStack_80 = puStack_80 + g_8c4aa374;
                    } while (iStack_70 < (int)uVar3);
                }
            }
        } else if (puStack_60 == (u32 *)0x4) {
            if (g_8c4aa37c == (u32 *)0xffffffff) {
                iVar5 = 0;
                uStack_84 = 0;
                ain0 = g_8c4aa37c;
                if (uVar3 != 0) {
                    do {
                        if (cVar19 == '\0') {
                            *(u32 *)unaff_r13 = puVar4[g_8c4aa378];
                            *(u32 *)((int)unaff_r13 + 4) = puVar4[g_8c4aa378 + 1];
                            *(u32 *)(unaff_r13 + 1) = puVar4[g_8c4aa378 + 2];
                        } else {
                            *unaff_r13 = *(u64 *)(puVar4 + g_8c4aa378);
                            *(u64 *)((int)unaff_r13 + 4) = *(u64 *)(puVar4 + g_8c4aa378 + 1);
                            unaff_r13[1] = *(u64 *)(puVar4 + g_8c4aa378 + 2);
                        }
                        unaff_r13 = (u64 *)((int)unaff_r13 + g_8c4aa374 * 4);
                        ain0 = (u32 *)argb_lerp(iStack_70 + iVar5, iStack_64 + iVar5, unaff_r8);
                        uStack_84 = uStack_84 + 1;
                        unaff_r8 = unaff_r8 + g_8c4aa374;
                        puVar4 = puVar4 + g_8c4aa374;
                        iVar5 = iVar5 + 4;
                    } while ((int)uStack_84 < (int)uVar3);
                }
            } else {
                ain0 = NULL;
                iStack_7c = 0;
                uStack_84 = 0;
                if (uVar3 != 0) {
                    do {
                        if (cVar19 == '\0') {
                            *(u32 *)unaff_r13 = puVar4[g_8c4aa378];
                            *(u32 *)((int)unaff_r13 + 4) = puVar4[g_8c4aa378 + 1];
                            *(u32 *)(unaff_r13 + 1) = puVar4[g_8c4aa378 + 2];
                        } else {
                            *unaff_r13 = *(u64 *)(puVar4 + g_8c4aa378);
                            *(u64 *)((int)unaff_r13 + 4) = *(u64 *)(puVar4 + g_8c4aa378 + 1);
                            unaff_r13[1] = *(u64 *)(puVar4 + g_8c4aa378 + 2);
                        }
                        unaff_r13 = (u64 *)((int)unaff_r13 + g_8c4aa374 * 4);
                        if (cVar19 == '\0') {
                            *(u32 *)unaff_r11 = puVar4[(int)g_8c4aa37c];
                            *(u32 *)((int)unaff_r11 + 4) = puVar4[(int)g_8c4aa37c + 1];
                            *(u32 *)(unaff_r11 + 1) = puVar4[(int)g_8c4aa37c + 2];
                        } else {
                            *unaff_r11 = *(u64 *)(puVar4 + (int)g_8c4aa37c);
                            *(u64 *)((int)unaff_r11 + 4) = *(u64 *)(puVar4 + (int)g_8c4aa37c + 1);
                            unaff_r11[1] = *(u64 *)(puVar4 + (int)g_8c4aa37c + 2);
                        }
                        unaff_r11 = (u64 *)((int)unaff_r11 + g_8c4aa374 * 4);
                        ain0 = (u32 *)argb_lerp(uStack_84 + iStack_70, uStack_84 + iStack_64, unaff_r8);
                        iStack_7c = iStack_7c + 1;
                        puVar4 = puVar4 + g_8c4aa374;
                        unaff_r8 = unaff_r8 + g_8c4aa374;
                        uStack_84 = uStack_84 + 4;
                    } while (iStack_7c < (int)uVar3);
                }
            }
        } else if (puStack_60 == (u32 *)0x5) {
            if (g_8c4aa37c == (u32 *)0xffffffff) {
                iVar5 = 0;
                puStack_80 = NULL;
                iVar9 = 0;
                ain0 = g_8c4aa37c;
                if (uVar3 != 0) {
                    do {
                        iVar11 = iVar5 * 4;
                        iVar10 = uStack_84 + iVar11;
                        Vec3_catmull_rom(iStack_74 + iVar11, iStack_6c + iVar11, iStack_7c + iVar11, iVar10, unaff_r13);
                        unaff_r13 = (u64 *)((int)unaff_r13 + g_8c4aa374 * 4);
                        ain0 = (u32 *)argb_lerp(iStack_70 + iVar9, iStack_64 + iVar9, unaff_r8);
                        iVar9 = iVar9 + 4;
                        puStack_80 = (u32 *)((int)puStack_80 + 1);
                        unaff_r8 = unaff_r8 + g_8c4aa374;
                        iVar5 = iVar5 + 3;
                    } while ((int)puStack_80 < (int)uVar3);
                }
            } else {
                iStack_68 = 0;
                iVar5 = 0;
                uStack_78 = 0;
                ain0 = NULL;
                if (uVar3 != 0) {
                    do {
                        iVar9 = uStack_78 * 4;
                        iVar10 = iVar9 + uStack_84;
                        Vec3_catmull_rom(iVar9 + iStack_74, iVar9 + iStack_6c, iVar9 + iStack_7c, iVar10, unaff_r13);
                        unaff_r13 = (u64 *)((int)unaff_r13 + g_8c4aa374 * 4);
                        if (cVar19 == '\0') {
                            *(u32 *)unaff_r11 = puVar4[(int)g_8c4aa37c];
                            *(u32 *)((int)unaff_r11 + 4) = puVar4[(int)g_8c4aa37c + 1];
                            *(u32 *)(unaff_r11 + 1) = puVar4[(int)g_8c4aa37c + 2];
                        } else {
                            *unaff_r11 = *(u64 *)(puVar4 + (int)g_8c4aa37c);
                            *(u64 *)((int)unaff_r11 + 4) = *(u64 *)(puVar4 + (int)g_8c4aa37c + 1);
                            unaff_r11[1] = *(u64 *)(puVar4 + (int)g_8c4aa37c + 2);
                        }
                        unaff_r11 = (u64 *)((int)unaff_r11 + g_8c4aa374 * 4);
                        ain0 = (u32 *)argb_lerp(iStack_70 + iVar5, iStack_64 + iVar5, unaff_r8);
                        iVar5 = iVar5 + 4;
                        iStack_68 = iStack_68 + 1;
                        puVar4 = puVar4 + g_8c4aa374;
                        unaff_r8 = unaff_r8 + g_8c4aa374;
                        uStack_78 = uStack_78 + 3;
                    } while (iStack_68 < (int)uVar3);
                }
            }
        } else if (puStack_60 == (u32 *)0x6) {
            iStack_74 = 0;
            uStack_84 = 0;
            iStack_7c = 0;
            if (uVar3 != 0) {
                do {
                    if (cVar19 == '\0') {
                        *(u32 *)unaff_r13 = puVar4[g_8c4aa378];
                        *(u32 *)((int)unaff_r13 + 4) = puVar4[g_8c4aa378 + 1];
                        *(u32 *)(unaff_r13 + 1) = puVar4[g_8c4aa378 + 2];
                    } else {
                        *unaff_r13 = *(u64 *)(puVar4 + g_8c4aa378);
                        *(u64 *)((int)unaff_r13 + 4) = *(u64 *)(puVar4 + g_8c4aa378 + 1);
                        unaff_r13[1] = *(u64 *)(puVar4 + g_8c4aa378 + 2);
                    }
                    unaff_r13 = (u64 *)((int)unaff_r13 + g_8c4aa374 * 4);
                    Vec3_lerp_normalize(iStack_7c * 4 + uStack_78, iStack_7c * 4 + iStack_68, unaff_r11);
                    unaff_r11 = (u64 *)((int)unaff_r11 + g_8c4aa374 * 4);
                    ain0 = (u32 *)argb_lerp(uStack_84 + iStack_70, uStack_84 + iStack_64, unaff_r8);
                    iStack_74 = iStack_74 + 1;
                    unaff_r8 = unaff_r8 + g_8c4aa374;
                    uStack_84 = uStack_84 + 4;
                    iStack_7c = iStack_7c + 3;
                    puVar4 = puVar4 + g_8c4aa374;
                } while (iStack_74 < (int)uVar3);
            }
        } else {
            if (puStack_60 != (u32 *)0x7) {
                g_8c4aa364 = 0;
                return (u32 *)&g_8c4aa364;
            }
            iVar5 = 0;
            puStack_60 = NULL;
            iVar9 = 0;
            if (uVar3 != 0) {
                do {
                    iVar10 = iVar5 * 4;
                    iVar11 = iVar10 + uStack_84;
                    Vec3_catmull_rom(iVar10 + iStack_74, iVar10 + iStack_6c, iVar10 + iStack_7c, iVar11, unaff_r13);
                    unaff_r13 = (u64 *)((int)unaff_r13 + g_8c4aa374 * 4);
                    Vec3_lerp_normalize(iVar5 * 4 + uStack_78, iVar5 * 4 + iStack_68, unaff_r11);
                    unaff_r11 = (u64 *)((int)unaff_r11 + g_8c4aa374 * 4);
                    ain0 = (u32 *)argb_lerp(iStack_70 + iVar9, iStack_64 + iVar9, unaff_r8);
                    iVar9 = iVar9 + 4;
                    puStack_60 = (u32 *)((int)puStack_60 + 1);
                    unaff_r8 = unaff_r8 + g_8c4aa374;
                    iVar5 = iVar5 + 3;
                } while ((int)puStack_60 < (int)uVar3);
            }
        }
        puVar1[g_8c4aa374 * uVar3 + 2] = 0xff;
    }
    return ain0;
}

/*
 * gfxlib_vec_21fca8  0x8c21fca8
 * area name: in the gfxlib library code range; behaviour name: mostly calls vec functions
 */
u32 *gfxlib_vec_21fca8(u32 *a0, u32 unused_a1, u32 unused_a2, int *a3, u32 *ain0) {
    u32 *puVar1;
    u32 uVar2;
    u32 uVar3;
    u32 *puVar4;
    int iVar5;
    u32 uVar6;
    u32 uVar7;
    u32 uVar8;
    u32 *unaff_r8;
    u64 *unaff_r11;
    int iVar9;
    int iVar10;
    u64 *unaff_r13;
    double in_dr2;
    double dVar11;
    float fVar13;
    double dVar12;
    float fVar14;
    u32 in_fr5;
    u32 in_fr12;
    u64 in_dr14;
    bool bVar15;
    u32 uVar16;
    char cVar17;
    char cVar18;
    u32 uStack_6c;
    u32 *puStack_68;
    int iStack_64;
    u32 uStack_60;
    int iStack_5c;
    int iStack_58;
    int iStack_54;
    u32 *puStack_50;
    int iStack_44;
    int iStack_40;
    int iStack_3c;
    int iStack_38;
    int iStack_34;
    int iStack_30;
    u32 uStack_24;
    u32 uStack_20;

    puVar1 = g_8c4aa360;
    cVar18 = '\0';
    cVar17 = '\0';
    uStack_20 = (u32)in_dr14;
    uStack_24 = (u32)((u64)in_dr14 >> 0x20);
    g_8c4aa364 = 0;
    puStack_50 = ain0;
    if ((((a0[1] != 0) && (puStack_50 = (u32 *)*a0, ((u32)puStack_50 & 8) == 0)) &&
         (puVar4 = *(u32 **)a0[1], puVar4 != NULL)) &&
        (g_8c4aad84 != 0)) {
        *g_8c4aa360 = *puVar4;
        uVar3 = puVar4[1];
        puVar1[1] = uVar3;
        puStack_50 = NULL;
        uVar3 = uVar3 >> 0x10;
        if (g_8c4aa378 != -1) {
            unaff_r13 = (u64 *)(g_8c4aa360 + g_8c4aa378);
        }
        if (g_8c4aa37c != (u32 *)0xffffffff) {
            unaff_r11 = (u64 *)(g_8c4aa360 + (int)g_8c4aa37c);
        }
        if (g_8c4aa380 != (u32 *)0xffffffff) {
            unaff_r8 = g_8c4aa360 + (int)g_8c4aa380;
        }
        fVar14 = 2.1474836e+09;
        if ((g_8c4aad86 & 0x10) != 0) {
            iVar5 = *(int *)(g_8c4aad68 + g_8c4aad78 * 4);
            if (iVar5 != 0) {
                uVar7 = *(u32 *)(g_8c4aad6c + g_8c4aad78 * 4);
                if (g_8c4aad70 <= 2.1474836e+09) {
                    in_dr2 = (double)CONCAT44((int)((u64)in_dr2 >> 0x20), g_8c4aad70);
                } else {
                    in_dr2 = (double)CONCAT44(0xcf800000, g_8c4aad70 + -4.2949673e+09);
                }
                uVar6 = 0;
                uVar2 = uVar7;
                while (uStack_6c = uVar2, 1 < uStack_6c - uVar6) {
                    uVar2 = uStack_6c + uVar6 >> 1;
                    if (*(u32 *)(uVar2 * 8 + iVar5) <= (u32)(int)SUB84(in_dr2, 0)) {
                        uVar6 = uVar2;
                        uVar2 = uStack_6c;
                    }
                }
                a3 = &iStack_34;
                keyframe_pair(iVar5, uVar6, uVar7, a3);
                uStack_6c = iStack_34;
                iStack_64 = iStack_30;
                puStack_50 = (u32 *)0x1;
            }
            g_8c4aad78 = g_8c4aad78 + 1;
        }
        if ((g_8c4aad86 & 0x20) != 0) {
            iVar5 = *(int *)(g_8c4aad68 + g_8c4aad78 * 4);
            if (iVar5 != 0) {
                uVar7 = *(u32 *)(g_8c4aad6c + g_8c4aad78 * 4);
                if (cVar18 == '\0') {
                    dVar12 = (double)CONCAT44(g_8c4aad70, in_fr5);
                } else {
                    dVar12 = (double)CONCAT44(g_8c4aad74, g_8c4aad70);
                }
                fVar13 = (float)((u64)dVar12 >> 0x20);
                if (cVar17 == '\0') {
                    bVar15 = fVar14 < fVar13;
                } else {
                    bVar15 = (double)CONCAT44(in_fr12, fVar14) < dVar12;
                }
                uVar6 = 0;
                if (bVar15) {
                    if (cVar18 == '\0') {
                        dVar11 = (double)CONCAT44(0xcf800000, fVar13);
                    } else {
                        dVar11 = -3.155538209390776e-250;
                    }
                    if (cVar17 == '\0') {
                        fVar13 = (float)((u64)dVar11 >> 0x20);
                        in_dr2 = (double)CONCAT44(fVar13, SUB84(dVar11, 0) + fVar13);
                    } else {
                        in_dr2 = dVar11 + dVar11;
                    }
                } else if (cVar18 == '\0') {
                    in_dr2 = (double)CONCAT44((int)((u64)in_dr2 >> 0x20), fVar13);
                }
                uVar2 = uVar7;
                if (cVar17 == '\0') {
                    uVar16 = (u32)SUB84(in_dr2, 0);
                } else {
                    uVar16 = (u32)in_dr2;
                }
                while (uStack_60 = uVar2, 1 < uStack_60 - uVar6) {
                    uVar2 = uStack_60 + uVar6 >> 1;
                    if (*(u32 *)(uVar2 * 8 + iVar5) <= uVar16) {
                        uVar6 = uVar2;
                        uVar2 = uStack_60;
                    }
                }
                a3 = &iStack_3c;
                keyframe_pair(iVar5, uVar6, uVar7, a3);
                in_fr5 = SUB84(dVar12, 0);
                uStack_60 = iStack_3c;
                iStack_54 = iStack_38;
                puStack_50 = (u32 *)((int)puStack_50 + 2);
            }
            g_8c4aad78 = g_8c4aad78 + 1;
        }
        if ((g_8c4aad86 & 0x4000) != 0) {
            iVar5 = *(int *)(g_8c4aad68 + g_8c4aad78 * 4);
            if (iVar5 != 0) {
                uVar7 = *(u32 *)(g_8c4aad6c + g_8c4aad78 * 4);
                if (cVar18 == '\0') {
                    dVar12 = (double)CONCAT44(g_8c4aad70, in_fr5);
                } else {
                    dVar12 = (double)CONCAT44(g_8c4aad74, g_8c4aad70);
                }
                uVar6 = 0;
                fVar13 = (float)((u64)dVar12 >> 0x20);
                if (cVar17 == '\0') {
                    bVar15 = fVar14 < fVar13;
                } else {
                    bVar15 = (double)CONCAT44(in_fr12, fVar14) < dVar12;
                }
                if (bVar15) {
                    if (cVar18 == '\0') {
                        dVar12 = (double)CONCAT44(0xcf800000, fVar13);
                    } else {
                        dVar12 = -3.155905840934326e-250;
                    }
                    if (cVar17 == '\0') {
                        fVar14 = (float)((u64)dVar12 >> 0x20);
                        in_dr2 = (double)CONCAT44(fVar14, SUB84(dVar12, 0) + fVar14);
                    } else {
                        in_dr2 = dVar12 + dVar12;
                    }
                } else if (cVar18 == '\0') {
                    in_dr2 = (double)CONCAT44((int)((u64)in_dr2 >> 0x20), fVar13);
                }
                uVar2 = uVar7;
                if (cVar17 == '\0') {
                    uVar16 = (u32)SUB84(in_dr2, 0);
                } else {
                    uVar16 = (u32)in_dr2;
                }
                while (uVar8 = uVar2, 1 < uVar8 - uVar6) {
                    uVar2 = uVar6 + uVar8 >> 1;
                    if (*(u32 *)(uVar2 * 8 + iVar5) <= uVar16) {
                        uVar6 = uVar2;
                        uVar2 = uVar8;
                    }
                }
                a3 = &iStack_44;
                keyframe_pair_b(iVar5, uVar6, uVar7, a3);
                iStack_5c = iStack_44;
                iStack_58 = iStack_40;
                puStack_50 = puStack_50 + 1;
            }
            g_8c4aad78 = g_8c4aad78 + 1;
        }
        g_8c4aa364 = 1;
        puStack_68 = puVar4;
        if (puStack_50 == (u32 *)0x1) {
            if (g_8c4aa380 == (u32 *)0xffffffff) {
                if (g_8c4aa37c == (u32 *)0xffffffff) {
                    iVar5 = 0;
                    iVar9 = 0;
                    puStack_50 = g_8c4aa37c;
                    if (uVar3 != 0) {
                        do {
                            puStack_50 = (u32 *)Vec3_lerp(uStack_6c + iVar9 * 4, iStack_64 + iVar9 * 4, unaff_r13);
                            iVar5 = iVar5 + 1;
                            unaff_r13 = (u64 *)((int)unaff_r13 + g_8c4aa374 * 4);
                            iVar9 = iVar9 + 3;
                        } while (iVar5 < (int)uVar3);
                    }
                } else {
                    iVar5 = 0;
                    iVar9 = 0;
                    puStack_50 = g_8c4aa37c;
                    if (uVar3 != 0) {
                        do {
                            Vec3_lerp(iVar9 * 4 + uStack_6c, iVar9 * 4 + iStack_64, unaff_r13);
                            iVar5 = iVar5 + 1;
                            unaff_r13 = (u64 *)((int)unaff_r13 + g_8c4aa374 * 4);
                            if (cVar18 == '\0') {
                                *(u32 *)unaff_r11 = puVar4[(int)g_8c4aa37c];
                                *(u32 *)((int)unaff_r11 + 4) = puVar4[(int)g_8c4aa37c + 1];
                            } else {
                                *unaff_r11 = *(u64 *)(puVar4 + (int)g_8c4aa37c);
                                *(u64 *)((int)unaff_r11 + 4) = *(u64 *)(puVar4 + (int)g_8c4aa37c + 1);
                            }
                            puStack_50 = (u32 *)0x8;
                            if (cVar18 == '\0') {
                                *(u32 *)(unaff_r11 + 1) = puVar4[(int)g_8c4aa37c + 2];
                            } else {
                                unaff_r11[1] = *(u64 *)(puVar4 + (int)g_8c4aa37c + 2);
                            }
                            unaff_r11 = (u64 *)((int)unaff_r11 + g_8c4aa374 * 4);
                            puVar4 = puVar4 + g_8c4aa374;
                            iVar9 = iVar9 + 3;
                        } while (iVar5 < (int)uVar3);
                    }
                }
            } else if (g_8c4aa37c == (u32 *)0xffffffff) {
                iVar5 = 0;
                iVar9 = 0;
                puStack_50 = g_8c4aa37c;
                if (uVar3 != 0) {
                    do {
                        Vec3_lerp(uStack_6c + iVar9 * 4, iStack_64 + iVar9 * 4, unaff_r13);
                        iVar5 = iVar5 + 1;
                        unaff_r13 = (u64 *)((int)unaff_r13 + g_8c4aa374 * 4);
                        *unaff_r8 = puStack_68[(int)g_8c4aa380];
                        unaff_r8 = unaff_r8 + g_8c4aa374;
                        iVar9 = iVar9 + 3;
                        puStack_50 = puStack_68;
                        puStack_68 = puStack_68 + g_8c4aa374;
                    } while (iVar5 < (int)uVar3);
                }
            } else {
                iVar5 = 0;
                uStack_60 = 0;
                puStack_50 = g_8c4aa37c;
                if (uVar3 != 0) {
                    do {
                        Vec3_lerp(iVar5 * 4 + uStack_6c, iVar5 * 4 + iStack_64, unaff_r13);
                        unaff_r13 = (u64 *)((int)unaff_r13 + g_8c4aa374 * 4);
                        if (cVar18 == '\0') {
                            *(u32 *)unaff_r11 = puVar4[(int)g_8c4aa37c];
                            *(u32 *)((int)unaff_r11 + 4) = puVar4[(int)g_8c4aa37c + 1];
                            *(u32 *)(unaff_r11 + 1) = puVar4[(int)g_8c4aa37c + 2];
                        } else {
                            *unaff_r11 = *(u64 *)(puVar4 + (int)g_8c4aa37c);
                            *(u64 *)((int)unaff_r11 + 4) = *(u64 *)(puVar4 + (int)g_8c4aa37c + 1);
                            unaff_r11[1] = *(u64 *)(puVar4 + (int)g_8c4aa37c + 2);
                        }
                        unaff_r11 = (u64 *)((int)unaff_r11 + g_8c4aa374 * 4);
                        *unaff_r8 = puStack_68[(int)g_8c4aa380];
                        unaff_r8 = unaff_r8 + g_8c4aa374;
                        puVar4 = puVar4 + g_8c4aa374;
                        uStack_60 = uStack_60 + 1;
                        iVar5 = iVar5 + 3;
                        puStack_50 = puStack_68;
                        puStack_68 = puStack_68 + g_8c4aa374;
                    } while ((int)uStack_60 < (int)uVar3);
                }
            }
        } else if (puStack_50 == (u32 *)0x2) {
            if (g_8c4aa380 == (u32 *)0xffffffff) {
                iVar5 = 0;
                uStack_6c = 0;
                puStack_50 = g_8c4aa380;
                if (uVar3 != 0) {
                    do {
                        if (cVar18 == '\0') {
                            *(u32 *)unaff_r13 = puVar4[g_8c4aa378];
                            *(u32 *)((int)unaff_r13 + 4) = puVar4[g_8c4aa378 + 1];
                            *(u32 *)(unaff_r13 + 1) = puVar4[g_8c4aa378 + 2];
                        } else {
                            *unaff_r13 = *(u64 *)(puVar4 + g_8c4aa378);
                            *(u64 *)((int)unaff_r13 + 4) = *(u64 *)(puVar4 + g_8c4aa378 + 1);
                            unaff_r13[1] = *(u64 *)(puVar4 + g_8c4aa378 + 2);
                        }
                        unaff_r13 = (u64 *)((int)unaff_r13 + g_8c4aa374 * 4);
                        puStack_50 =
                            (u32 *)Vec3_lerp_normalize(iVar5 * 4 + uStack_60, iVar5 * 4 + iStack_54, unaff_r11);
                        uStack_6c = uStack_6c + 1;
                        unaff_r11 = (u64 *)((int)unaff_r11 + g_8c4aa374 * 4);
                        puVar4 = puVar4 + g_8c4aa374;
                        iVar5 = iVar5 + 3;
                    } while ((int)uStack_6c < (int)uVar3);
                }
            } else {
                puStack_50 = NULL;
                iStack_64 = 0;
                uStack_6c = 0;
                if (uVar3 != 0) {
                    do {
                        if (cVar18 == '\0') {
                            *(u32 *)unaff_r13 = puVar4[g_8c4aa378];
                            *(u32 *)((int)unaff_r13 + 4) = puVar4[g_8c4aa378 + 1];
                            *(u32 *)(unaff_r13 + 1) = puVar4[g_8c4aa378 + 2];
                        } else {
                            *unaff_r13 = *(u64 *)(puVar4 + g_8c4aa378);
                            *(u64 *)((int)unaff_r13 + 4) = *(u64 *)(puVar4 + g_8c4aa378 + 1);
                            unaff_r13[1] = *(u64 *)(puVar4 + g_8c4aa378 + 2);
                        }
                        unaff_r13 = (u64 *)((int)unaff_r13 + g_8c4aa374 * 4);
                        Vec3_lerp_normalize(uStack_6c * 4 + uStack_60, uStack_6c * 4 + iStack_54, unaff_r11);
                        unaff_r11 = (u64 *)((int)unaff_r11 + g_8c4aa374 * 4);
                        *unaff_r8 = puStack_68[(int)g_8c4aa380];
                        puVar4 = puVar4 + g_8c4aa374;
                        unaff_r8 = unaff_r8 + g_8c4aa374;
                        iStack_64 = iStack_64 + 1;
                        uStack_6c = uStack_6c + 3;
                        puStack_50 = puStack_68;
                        puStack_68 = puStack_68 + g_8c4aa374;
                    } while (iStack_64 < (int)uVar3);
                }
            }
        } else if (puStack_50 == (u32 *)0x3) {
            if (g_8c4aa380 == (u32 *)0xffffffff) {
                iVar5 = 0;
                iVar9 = 0;
                puStack_50 = g_8c4aa380;
                if (uVar3 != 0) {
                    do {
                        Vec3_lerp(iVar9 * 4 + uStack_6c, iVar9 * 4 + iStack_64, unaff_r13);
                        unaff_r13 = (u64 *)((int)unaff_r13 + g_8c4aa374 * 4);
                        puStack_50 =
                            (u32 *)Vec3_lerp_normalize(iVar9 * 4 + uStack_60, iVar9 * 4 + iStack_54, unaff_r11);
                        iVar5 = iVar5 + 1;
                        unaff_r11 = (u64 *)((int)unaff_r11 + g_8c4aa374 * 4);
                        iVar9 = iVar9 + 3;
                    } while (iVar5 < (int)uVar3);
                }
            } else {
                iVar5 = 0;
                iVar9 = 0;
                puStack_50 = g_8c4aa380;
                if (uVar3 != 0) {
                    do {
                        Vec3_lerp(iVar9 * 4 + uStack_6c, iVar9 * 4 + iStack_64, unaff_r13);
                        unaff_r13 = (u64 *)((int)unaff_r13 + g_8c4aa374 * 4);
                        Vec3_lerp_normalize(iVar9 * 4 + uStack_60, iVar9 * 4 + iStack_54, unaff_r11);
                        iVar5 = iVar5 + 1;
                        unaff_r11 = (u64 *)((int)unaff_r11 + g_8c4aa374 * 4);
                        *unaff_r8 = puStack_68[(int)g_8c4aa380];
                        unaff_r8 = unaff_r8 + g_8c4aa374;
                        iVar9 = iVar9 + 3;
                        puStack_50 = puStack_68;
                        puStack_68 = puStack_68 + g_8c4aa374;
                    } while (iVar5 < (int)uVar3);
                }
            }
        } else if (puStack_50 == (u32 *)0x4) {
            if (g_8c4aa37c == (u32 *)0xffffffff) {
                iVar5 = 0;
                uStack_6c = 0;
                puStack_50 = g_8c4aa37c;
                if (uVar3 != 0) {
                    do {
                        if (cVar18 == '\0') {
                            *(u32 *)unaff_r13 = puVar4[g_8c4aa378];
                            *(u32 *)((int)unaff_r13 + 4) = puVar4[g_8c4aa378 + 1];
                            *(u32 *)(unaff_r13 + 1) = puVar4[g_8c4aa378 + 2];
                        } else {
                            *unaff_r13 = *(u64 *)(puVar4 + g_8c4aa378);
                            *(u64 *)((int)unaff_r13 + 4) = *(u64 *)(puVar4 + g_8c4aa378 + 1);
                            unaff_r13[1] = *(u64 *)(puVar4 + g_8c4aa378 + 2);
                        }
                        unaff_r13 = (u64 *)((int)unaff_r13 + g_8c4aa374 * 4);
                        puStack_50 = (u32 *)argb_lerp(iStack_5c + iVar5, iStack_58 + iVar5, unaff_r8);
                        uStack_6c = uStack_6c + 1;
                        unaff_r8 = unaff_r8 + g_8c4aa374;
                        iVar5 = iVar5 + 4;
                    } while ((int)uStack_6c < (int)uVar3);
                }
            } else {
                puStack_50 = NULL;
                iStack_64 = 0;
                uStack_6c = 0;
                if (uVar3 != 0) {
                    do {
                        if (cVar18 == '\0') {
                            *(u32 *)unaff_r13 = puVar4[g_8c4aa378];
                            *(u32 *)((int)unaff_r13 + 4) = puVar4[g_8c4aa378 + 1];
                            *(u32 *)(unaff_r13 + 1) = puVar4[g_8c4aa378 + 2];
                        } else {
                            *unaff_r13 = *(u64 *)(puVar4 + g_8c4aa378);
                            *(u64 *)((int)unaff_r13 + 4) = *(u64 *)(puVar4 + g_8c4aa378 + 1);
                            unaff_r13[1] = *(u64 *)(puVar4 + g_8c4aa378 + 2);
                        }
                        unaff_r13 = (u64 *)((int)unaff_r13 + g_8c4aa374 * 4);
                        if (cVar18 == '\0') {
                            *(u32 *)unaff_r11 = puVar4[(int)g_8c4aa37c];
                            *(u32 *)((int)unaff_r11 + 4) = puVar4[(int)g_8c4aa37c + 1];
                            *(u32 *)(unaff_r11 + 1) = puVar4[(int)g_8c4aa37c + 2];
                        } else {
                            *unaff_r11 = *(u64 *)(puVar4 + (int)g_8c4aa37c);
                            *(u64 *)((int)unaff_r11 + 4) = *(u64 *)(puVar4 + (int)g_8c4aa37c + 1);
                            unaff_r11[1] = *(u64 *)(puVar4 + (int)g_8c4aa37c + 2);
                        }
                        unaff_r11 = (u64 *)((int)unaff_r11 + g_8c4aa374 * 4);
                        puStack_50 = (u32 *)argb_lerp(uStack_6c + iStack_5c, uStack_6c + iStack_58, unaff_r8);
                        iStack_64 = iStack_64 + 1;
                        puVar4 = puVar4 + g_8c4aa374;
                        unaff_r8 = unaff_r8 + g_8c4aa374;
                        uStack_6c = uStack_6c + 4;
                    } while (iStack_64 < (int)uVar3);
                }
            }
        } else if (puStack_50 == (u32 *)0x5) {
            if (g_8c4aa37c == (u32 *)0xffffffff) {
                iVar5 = 0;
                iVar10 = 0;
                iVar9 = 0;
                puStack_50 = g_8c4aa37c;
                if (uVar3 != 0) {
                    do {
                        Vec3_lerp(iVar9 * 4 + uStack_6c, iVar9 * 4 + iStack_64, unaff_r13);
                        unaff_r13 = (u64 *)((int)unaff_r13 + g_8c4aa374 * 4);
                        puStack_50 = (u32 *)argb_lerp(iStack_5c + iVar10, iStack_58 + iVar10, unaff_r8);
                        iVar5 = iVar5 + 1;
                        iVar10 = iVar10 + 4;
                        unaff_r8 = unaff_r8 + g_8c4aa374;
                        iVar9 = iVar9 + 3;
                    } while (iVar5 < (int)uVar3);
                }
            } else {
                puStack_50 = NULL;
                uStack_60 = 0;
                iVar5 = 0;
                puStack_68 = NULL;
                if (uVar3 != 0) {
                    do {
                        Vec3_lerp((int)puStack_68 * 4 + uStack_6c, (int)puStack_68 * 4 + iStack_64, unaff_r13);
                        unaff_r13 = (u64 *)((int)unaff_r13 + g_8c4aa374 * 4);
                        if (cVar18 == '\0') {
                            *(u32 *)unaff_r11 = puVar4[(int)g_8c4aa37c];
                            *(u32 *)((int)unaff_r11 + 4) = puVar4[(int)g_8c4aa37c + 1];
                            *(u32 *)(unaff_r11 + 1) = puVar4[(int)g_8c4aa37c + 2];
                        } else {
                            *unaff_r11 = *(u64 *)(puVar4 + (int)g_8c4aa37c);
                            *(u64 *)((int)unaff_r11 + 4) = *(u64 *)(puVar4 + (int)g_8c4aa37c + 1);
                            unaff_r11[1] = *(u64 *)(puVar4 + (int)g_8c4aa37c + 2);
                        }
                        unaff_r11 = (u64 *)((int)unaff_r11 + g_8c4aa374 * 4);
                        puStack_50 = (u32 *)argb_lerp(iStack_5c + iVar5, iStack_58 + iVar5, unaff_r8);
                        iVar5 = iVar5 + 4;
                        uStack_60 = uStack_60 + 1;
                        puVar4 = puVar4 + g_8c4aa374;
                        unaff_r8 = unaff_r8 + g_8c4aa374;
                        puStack_68 = (u32 *)((int)puStack_68 + 3);
                    } while ((int)uStack_60 < (int)uVar3);
                }
            }
        } else if (puStack_50 == (u32 *)0x6) {
            puStack_68 = NULL;
            uStack_6c = 0;
            iStack_64 = 0;
            if (uVar3 != 0) {
                do {
                    if (cVar18 == '\0') {
                        *(u32 *)unaff_r13 = puVar4[g_8c4aa378];
                        *(u32 *)((int)unaff_r13 + 4) = puVar4[g_8c4aa378 + 1];
                        *(u32 *)(unaff_r13 + 1) = puVar4[g_8c4aa378 + 2];
                    } else {
                        *unaff_r13 = *(u64 *)(puVar4 + g_8c4aa378);
                        *(u64 *)((int)unaff_r13 + 4) = *(u64 *)(puVar4 + g_8c4aa378 + 1);
                        unaff_r13[1] = *(u64 *)(puVar4 + g_8c4aa378 + 2);
                    }
                    unaff_r13 = (u64 *)((int)unaff_r13 + g_8c4aa374 * 4);
                    Vec3_lerp_normalize(iStack_64 * 4 + uStack_60, iStack_64 * 4 + iStack_54, unaff_r11);
                    unaff_r11 = (u64 *)((int)unaff_r11 + g_8c4aa374 * 4);
                    puStack_50 = (u32 *)argb_lerp(uStack_6c + iStack_5c, uStack_6c + iStack_58, unaff_r8);
                    puStack_68 = (u32 *)((int)puStack_68 + 1);
                    unaff_r8 = unaff_r8 + g_8c4aa374;
                    uStack_6c = uStack_6c + 4;
                    iStack_64 = iStack_64 + 3;
                    puVar4 = puVar4 + g_8c4aa374;
                } while ((int)puStack_68 < (int)uVar3);
            }
        } else {
            if (puStack_50 != (u32 *)0x7) {
                g_8c4aa364 = 0;
                return (u32 *)&g_8c4aa364;
            }
            iVar5 = 0;
            puStack_68 = NULL;
            iVar9 = 0;
            if (uVar3 != 0) {
                do {
                    Vec3_lerp(iVar5 * 4 + uStack_6c, iVar5 * 4 + iStack_64, unaff_r13);
                    unaff_r13 = (u64 *)((int)unaff_r13 + g_8c4aa374 * 4);
                    Vec3_lerp_normalize(iVar5 * 4 + uStack_60, iVar5 * 4 + iStack_54, unaff_r11);
                    unaff_r11 = (u64 *)((int)unaff_r11 + g_8c4aa374 * 4);
                    puStack_50 = (u32 *)argb_lerp(iStack_5c + iVar9, iStack_58 + iVar9, unaff_r8);
                    iVar9 = iVar9 + 4;
                    puStack_68 = (u32 *)((int)puStack_68 + 1);
                    unaff_r8 = unaff_r8 + g_8c4aa374;
                    iVar5 = iVar5 + 3;
                } while ((int)puStack_68 < (int)uVar3);
            }
        }
        puVar1[g_8c4aa374 * uVar3 + 2] = 0xff;
    }
    return puStack_50;
}
