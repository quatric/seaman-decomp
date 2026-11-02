/* Seaman (USA) region 0x8c0e0000-0x8c0f0000 (Ghidra decompiler, cleaned up by tools/readable.py) */

#include "seaman.h"
#include "globals.h"

/*
 * FUN_8c0e000c  0x8c0e000c
 */
u32 FUN_8c0e000c(int a0) {
    u32 r5;
    u32 r6;
    u32 r7;
    u32 uVar1;
    u32 in_PR;

    FUN_8c0d1458(a0 + 0x13b8c);
    uVar1 = FUN_8c0de6b0(a0 + 0x13b70, r5, r6, r7, in_PR);
    return uVar1;
}

/*
 * FUN_8c0e004c  0x8c0e004c
 */
u32 FUN_8c0e004c(int *a0, u32 a1, u32 a2, u32 a3) {
    u32 ar5_00;
    u32 a5;
    u32 in_PR;

    FUN_8c0db008(a0, a1, a2, a3);
    ar5_00 = 0;
    FUN_8c0d0538(a0 + 0x4ec9, 0);
    FUN_8c0d064c(a0 + 0x4ec9, ar5_00, a2, a3);
    noop_0d98f4(a0 + 0x89c1, ar5_00, a2, a3, in_PR);
    a5 = a1;
    FUN_8c0d50ec(a0 + 0x42b, a1, a2, a3);
    if ((a1 & 0xff) < 2) {
        (**(code **)(*a0 + 0x1c4))(a0, a5, a2, a3);
    } else {
        (**(code **)(*a0 + 0x7c))(a0, a5, a2, a3);
    }
    return 0;
}

/*
 * FUN_8c0e00ec  0x8c0e00ec
 */
u32 FUN_8c0e00ec(int *a0, u32 a1, u32 a2, u32 a3) {
    u32 in_PR;

    noop_0d09f8(a0 + 0x4edc, a1, a2, a3, in_PR);
    (**(code **)(*a0 + 0x15c))(a0, a1, a2, a3);
    return 0;
}

/*
 * FUN_8c0e0124  0x8c0e0124
 */
u32 FUN_8c0e0124(int a0, u32 unused_a1, u32 a2, u32 a3) {
    FUN_8c0d1468(a0 + 0x13b8c, unused_a1, a2, a3);
    FUN_8c0e015c(a0 + 0x13b8c, 0);
    return 0;
}

/*
 * FUN_8c0e015c  0x8c0e015c
 * called by: FUN_8c0e0124, FUN_8c0e021c, FUN_8c0e1398, FUN_8c0e3210
 */
int FUN_8c0e015c(int a0, u32 a1) {
    int iVar1;

    iVar1 = 0xeb44;
    *(u32 *)(0xeb44 + a0) = a1;
    return iVar1;
}

/*
 * noop_0e0168  0x8c0e0168
 */
u32 noop_0e0168(void) {
    u32 in_r0;

    return in_r0;
}

/*
 * FUN_8c0e016c  0x8c0e016c
 */
u32 FUN_8c0e016c(int *a0, u32 a1, u32 a2, u32 a3) {
    u32 uVar1;

    FUN_8c0d50a0((int)a0 + 0x10ac, a1, a2, a3);
    FUN_8c0d0bcc((int)a0 + 0x13b8c, a1, a2, a3);
    FUN_8c0d14b0((int)a0 + 0x13b8c, a1, a2, a3);
    *(u32 *)(0x1024 + (int)a0) = 3;
    uVar1 = 0;
    FUN_8c0d0538((int)a0 + 0x13b24, 0);
    FUN_8c0d0714((int)a0 + 0x13b24);
    (**(code **)(0x15c + *a0))(a0, uVar1, a2, a3);
    *(u32 *)(0x9d4 + (int)a0) = 0;
    uVar1 = FUN_8c0d6980((int)a0 + 0xa68);
    return uVar1;
}

/*
 * FUN_8c0e021c  0x8c0e021c
 */
u32 FUN_8c0e021c(int a0, u32 unused_a1, u32 a2, u32 a3) {
    u32 uVar1;

    FUN_8c0d50b4(a0 + 0x10ac, unused_a1, a2, a3);
    uVar1 = 0;
    FUN_8c0d0538(a0 + 0x13b24, 0);
    FUN_8c0d0714(a0 + 0x13b24);
    uVar1 = 0;
    FUN_8c0e015c(a0 + 0x13b8c, 0);
    *(u32 *)(0x1024 + a0) = 3;
    *(u32 *)(0x9d4 + a0) = 0;
    uVar1 = FUN_8c0d6980(a0 + 0xa68);
    return uVar1;
}

/*
 * noop_0e02ac  0x8c0e02ac
 */
u32 noop_0e02ac(void) {
    u32 in_r0;

    return in_r0;
}

/*
 * FUN_8c0e02b0  0x8c0e02b0
 */
u32 FUN_8c0e02b0(int a0, u32 a1) {
    u32 uVar1;

    *(u32 *)(0x1020 + a0) = 0;
    uVar1 = FUN_8c0d5218(a0 + 0x10ac, a1);
    return uVar1;
}

/*
 * noop_0e02e4  0x8c0e02e4
 */
u32 noop_0e02e4(void) {
    u32 in_r0;

    return in_r0;
}

/*
 * FUN_8c0e02e8  0x8c0e02e8
 */
u32 *FUN_8c0e02e8(int a0) {
    u32 in_fr4;

    *(u32 *)(a0 + 0xa68) = in_fr4;
    *(u32 *)(a0 + 0xa6c) = 0x43d6fe14;
    *(u32 *)(a0 + 0xa70) = 0x4523bfd7;
    return &g_8c0e031c;
}

/*
 * FUN_8c0e0320  0x8c0e0320
 */
u32 FUN_8c0e0320(int a0, u32 a1, u32 a2, u32 a3) {
    u32 uVar1;
    u32 uVar2;

    uVar2 = a1;
    FUN_8c0d9b60(a0, a1, a2, a3);
    CTexture_LoadFromCache(a0 + 0x106c, uVar2, a2, a3);
    FUN_8c0d068c(a0 + 0x13b24, uVar2, a2, a3);
    uVar2 = a1;
    FUN_8c0d5578(a0 + 0x10ac, a1, a2, a3);
    FUN_8c0d97b4(a0 + 0x22704, uVar2, a2, a3);
    if ((a1 & 0xff) < 2) {
        FUN_8c0d09fc(a0 + 0x13b70, uVar2, a2, a3);
    } else {
        FUN_8c0d14b0(a0 + 0x13b8c, uVar2, a2, a3);
    }
    uVar1 = CTexture_LoadFromCache(a0 + 4, uVar2, a2, a3);
    return uVar1;
}

/*
 * FUN_8c0e03d4  0x8c0e03d4
 */
u32 FUN_8c0e03d4(int a0, u32 a1, u32 a2, u32 a3) {
    u32 uVar1;
    u32 uVar2;

    uVar2 = a1;
    FUN_8c0d9b8c(a0, a1, a2, a3);
    CTexture_ReleaseFromVRAM(a0 + 0x106c, uVar2, a2, a3);
    FUN_8c0d06a8(a0 + 0x13b24, uVar2, a2, a3);
    uVar2 = a1;
    FUN_8c0d55a4(a0 + 0x10ac, a1, a2, a3);
    FUN_8c0d97d0(a0 + 0x22704, uVar2, a2, a3);
    if ((a1 & 0xff) < 2) {
        FUN_8c0d0a18(a0 + 0x13b70, uVar2, a2, a3);
    } else {
        FUN_8c0d14cc(a0 + 0x13b8c, uVar2, a2, a3);
    }
    uVar1 = CTexture_ReleaseFromVRAM(a0 + 4, uVar2, a2, a3);
    return uVar1;
}

/*
 * FUN_8c0e0488  0x8c0e0488
 */
u32 FUN_8c0e0488(int a0, u32 a1, u32 a2, u32 a3) {
    u32 uVar1;
    u32 ar5_00;
    u32 in_PR;

    FUN_8c0db090(a0, a1, a2, a3);
    ar5_00 = a1;
    FUN_8c0d5614(a0 + 0x10ac, a1, a2, a3);
    FUN_8c0d06c4(a0 + 0x13b24, ar5_00, a2, a3);
    if ((a1 & 0xff) < 2) {
        uVar1 = noop_0d0a34(a0 + 0x13b70, ar5_00, a2, a3, in_PR);
    } else {
        uVar1 = FUN_8c0d14e8(a0 + 0x13b8c, ar5_00, a2, a3);
    }
    return uVar1;
}

/*
 * FUN_8c0e0508  0x8c0e0508
 */
u32 FUN_8c0e0508(int a0, u32 a1) {
    u32 r6;
    u32 r7;
    u32 uVar1;
    u32 ar5_00;
    u32 in_PR;

    ar5_00 = a1;
    FUN_8c0d55d0(a0 + 0x10ac);
    FUN_8c0d06ec(a0 + 0x13b24);
    if ((a1 & 0xff) < 2) {
        uVar1 = noop_0d0a38(a0 + 0x13b70, ar5_00, r6, r7, in_PR);
    } else {
        uVar1 = FUN_8c0d1518(a0 + 0x13b8c);
    }
    return uVar1;
}

/*
 * FUN_8c0e057c  0x8c0e057c
 */
u32 FUN_8c0e057c(u32 a0, u32 a1, u32 a2, u32 a3) {
    int a4;
    u32 uVar1;

    uVar1 = 0x1b;
    a4 = FUN_8c0fef94(0x8c3eb324, 0x10, 0x1b, a3);
    (**(code **)(*(int *)(a4 + 8) + 0x30))(a4, a1, uVar1, a3);
    (**(code **)(*(int *)(a4 + 8) + 0x2c))(a4, a2, uVar1, a3);
    FUN_8c036988(a4, a2, uVar1);
    FUN_8c078fb8(a4);
    uVar1 = FUN_8c0df998(a0, a4, uVar1, a3);
    return uVar1;
}

/*
 * FUN_8c0e0614  0x8c0e0614
 */
u32 FUN_8c0e0614(int a0, u32 a1, u32 a2, u32 a3) {
    int iVar1;
    int iVar2;
    u32 uVar3;
    int *a4;
    int iVar4;
    u8 auStack_5c[72];

    uVar3 = a1;
    iVar1 = get_field_bb4_0e06e4(a0);
    FUN_8c0db304(auStack_5c, uVar3, a2);
    FUN_8c018f80(auStack_5c, a1);
    iVar4 = 0;
    while (true) {
        if (iVar1 <= iVar4) {
            uVar3 = FUN_8c0db224(a0, a1, a2, a3);
            Class_129974_m0_016c2c(auStack_5c, 0xffffffff, a2, a3);
            return uVar3;
        }
        a4 = (int *)(a0 + iVar4 * 0x16c + 0x22e0c);
        iVar2 = (**(code **)(*a4 + 0x14))(a4, auStack_5c, a2, a3);
        if (iVar2 == 1)
            break;
        iVar4 = iVar4 + 1;
    }
    Class_129974_m0_016c2c(auStack_5c, 0xffffffff, a2, a3);
    return 2;
}

/*
 * get_field_bb4_0e06e4  0x8c0e06e4
 * called by: FUN_8c0e0614, FUN_8c0f4258
 */
u32 get_field_bb4_0e06e4(int a0) {
    return *(u32 *)(0xbb4 + a0);
}

/*
 * FUN_8c0e06f0  0x8c0e06f0
 */
u32 FUN_8c0e06f0(int a0, u32 *a1) {
    u32 uVar1;
    u32 *puVar2;

    puVar2 = (u32 *)(a0 + 0x1698);
    uVar1 = a1[1];
    *puVar2 = *a1;
    puVar2[1] = uVar1;
    uVar1 = a1[3];
    puVar2[2] = a1[2];
    puVar2[3] = uVar1;
    return uVar1;
}

/*
 * FUN_8c0e070c  0x8c0e070c
 */
int FUN_8c0e070c(int a0, u32 unused_a1, u32 a2, u32 a3) {
    u32 uVar1;
    int iVar2;

    *(u32 *)(0x23254 + a0) = 1;
    uVar1 = (*(code *)(&pack_find_by_name_buffered))(0x8c2b59d0, *(u32 *)(0x23258 + a0), a2, a3);
    *(u32 *)(0x2325c + a0) = uVar1;
    iVar2 = *(int *)(0x2325c + a0);
    if (iVar2 != -1) {
        iVar2 = FUN_8c0220d4(0x8c2b59d0, *(u32 *)(0x2325c + a0));
    }
    return iVar2;
}

/*
 * FUN_8c0e0764  0x8c0e0764
 */
u64 *FUN_8c0e0764(int a0, u32 unused_a1, u32 a2, u32 a3) {
    u64 *puVar1;

    if (g_8c438258 == '\0') {
        g_8c438254 = 0;
        g_8c438258 = '\x01';
    }
    if (g_8c438260 == '\0') {
        g_8c43825c = NULL;
        g_8c438260 = '\x01';
    }
    if (g_8c43825c == NULL) {
        *(float *)(a0 + 0x2324c) = *(float *)(a0 + 0x2324c) - 8.9;
        puVar1 = &g_8c0e0860;
        if (*(float *)(a0 + 0x2324c) < -1314.45) {
            *(u32 *)(a0 + 0x2324c) = 0xc4a214cc;
            g_8c438254 = 0;
            g_8c43825c = (u64 *)0x1;
            puVar1 = (u64 *)0x1;
        }
    } else {
        puVar1 = g_8c43825c;
        if (g_8c43825c == (u64 *)0x1) {
            g_8c438254 = g_8c438254 + 1;
            puVar1 = (u64 *)0x5a;
            if (0x5a < g_8c438254) {
                *(u32 *)(a0 + 0x23254) = 0;
                *(u32 *)(a0 + 0x2324c) = 0xc4a44e66;
                puVar1 = *(u64 **)(a0 + 0x2325c);
                if (*(u64 **)(a0 + 0x2325c) != (u64 *)0xffffffff) {
                    FUN_8c022104(0x8c2b59d0, *(u32 *)(a0 + 0x2325c), a2, a3);
                    FUN_8c0220bc(0x8c2b59d0, *(u32 *)(a0 + 0x2325c), a2, a3);
                    *(u32 *)(a0 + 0x2325c) = 0xffffffff;
                    g_8c43825c = NULL;
                    puVar1 = NULL;
                }
            }
        }
    }
    return puVar1;
}

/*
 * FUN_8c0e087c  0x8c0e087c
 */
u32 FUN_8c0e087c(int a0) {
    if (-1314.45 < *(float *)(a0 + 0x2324c)) {
        return 0;
    }
    return 1;
}

/*
 * FUN_8c0e08a0  0x8c0e08a0
 */
u32 FUN_8c0e08a0(int a0) {
    u32 in_fr4;

    *(u32 *)(a0 + 0x10ac) = in_fr4;
    return 0x10ac;
}

/*
 * FUN_8c0e08b0  0x8c0e08b0
 */
int FUN_8c0e08b0(int a0, int a1) {
    int iVar1;

    if (a1 == 1) {
        iVar1 = 0x22810;
        *(u32 *)(0x22810 + a0) = 1;
        return iVar1;
    }
    iVar1 = 0x22810;
    *(u32 *)(0x22810 + a0) = 0;
    return iVar1;
}

/*
 * FUN_8c0e08d0  0x8c0e08d0
 */
int FUN_8c0e08d0(int a0, int a1) {
    int iVar1;

    if (a1 == 1) {
        iVar1 = 0x22814;
        *(u32 *)(0x22814 + a0) = 1;
        return iVar1;
    }
    iVar1 = 0x22814;
    *(u32 *)(0x22814 + a0) = 0;
    return iVar1;
}

/*
 * FUN_8c0e08f0  0x8c0e08f0
 */
u32 FUN_8c0e08f0(int a0, u32 unused_a1, u32 unused_a2, u32 unused_a3, u32 *s0) {
    u32 uStack_4;

    uStack_4 = uStack_4 & 0xfffffffc;
    if (*(int *)(0x22814 + a0) == 1) {
        uStack_4 = uStack_4 | 2;
    }
    if (*(int *)(0x22810 + a0) == 1) {
        uStack_4 = uStack_4 | 1;
    }
    *s0 = uStack_4;
    return uStack_4;
}

/*
 * FUN_8c0e0950  0x8c0e0950
 */
int FUN_8c0e0950(int a0) {
    return a0 + 0x22d48;
}

/*
 * FUN_8c0e0960  0x8c0e0960
 */
u32 FUN_8c0e0960(int a0) {
    u32 uVar1;

    uVar1 = get_field_164_0d5c94(a0 + 0x22d48);
    return uVar1;
}

/*
 * FUN_8c0e0988  0x8c0e0988
 */
u32 FUN_8c0e0988(int a0, u32 *a1, u32 a2, u32 a3) {
    u32 uVar1;
    u32 *puVar2;
    u8 *ar6_00;
    double dVar3;
    int iVar4;
    int iVar5;
    char cVar6;
    char cVar7;
    u32 auStack_38[4];
    u8 auStack_28[20];

    cVar7 = '\0';
    cVar6 = '\0';
    puVar2 = a1;
    Vec3_ctor_zero(auStack_28, a1, a2);
    Vec3_ctor_zero(auStack_38, puVar2, a2);
    if (cVar7 == '\0') {
        dVar3 = (double)CONCAT44(0x43608ba3, *a1);
    } else {
        dVar3 = 1548112654508776.8;
    }
    if (cVar6 == '\0') {
        iVar4 = (int)(SUB84(dVar3, 0) / (float)((u64)dVar3 >> 0x20));
    } else {
        iVar4 = (int)(dVar3 / dVar3);
    }
    if (cVar7 == '\0') {
        dVar3 = (double)CONCAT44(0x43160000, a1[2]);
    } else {
        dVar3 = 2.999234411734574e-309;
    }
    if (cVar6 == '\0') {
        iVar5 = (int)(SUB84(dVar3, 0) / (float)((u64)dVar3 >> 0x20));
    } else {
        iVar5 = (int)(dVar3 / dVar3);
    }
    if (iVar4 < 0) {
        iVar4 = 0;
    } else if (10 < iVar4) {
        iVar4 = 10;
    }
    if (iVar5 < 0) {
        iVar5 = 0;
    } else if (9 < iVar5) {
        iVar5 = 9;
    }
    if ((*(int *)(iVar4 * 0x78 + a0 + iVar5 * 0xc + 0x2281c) == 0) ||
        (*(int *)(iVar4 * 0x78 + a0 + iVar5 * 0xc + 0x2281c) == 1)) {
        if (cVar7 != '\0') {
            auStack_38[0] = (u32)((u64) * (u64 *)(iVar4 * 0x78 + a0 + iVar5 * 0xc + 0x22818) >> 0x20);
        }
        Vec3_dtor(auStack_38, 0xffffffff, a2, a3);
        Vec3_dtor(auStack_28, 0xffffffff, a2, a3);
        uVar1 = 0x20;
    } else {
        puVar2 = auStack_38;
        ar6_00 = auStack_28;
        FUN_8c0185a4(a0 + 0x2274c, a1, ar6_00, puVar2);
        FUN_8c016a20(auStack_28);
        Vec3_dtor(auStack_38, 0xffffffff, ar6_00, puVar2);
        Vec3_dtor(auStack_28, 0xffffffff, ar6_00, puVar2);
        uVar1 = 0x1c;
    }
    return uVar1;
}

/*
 * FUN_8c0e0b2c  0x8c0e0b2c
 */
u32 FUN_8c0e0b2c(int a0, int a1) {
    u32 uVar1;

    if (a1 == 0) {
        uVar1 = FUN_8c0e0bd0(a0 + 0x13b24, 0);
    } else if (a1 == 1) {
        uVar1 = FUN_8c0e0bb8(a0 + 0x13b70, 1);
    } else if (a1 == 4) {
        uVar1 = FUN_8c0e0ba8(a0 + 0x13b8c, 4);
    } else {
        uVar1 = 0;
    }
    return uVar1;
}

/*
 * FUN_8c0e0ba8  0x8c0e0ba8
 * called by: FUN_8c0e0b2c
 */
u32 FUN_8c0e0ba8(int a0, u32 a1) {
    return (u32)(*(int *)(0xeb44 + a0) == 1);
}

/*
 * FUN_8c0e0bb8  0x8c0e0bb8
 * called by: FUN_8c0e0b2c
 */
u32 FUN_8c0e0bb8(int a0, u32 a1) {
    if ((*(int *)(a0 + 0x18) == 1) && (*(int *)(a0 + 0x14) == 1)) {
        return 1;
    }
    return 0;
}

/*
 * FUN_8c0e0bd0  0x8c0e0bd0
 * called by: FUN_8c0e0b2c
 */
u32 FUN_8c0e0bd0(int a0, u32 a1) {
    if (*(float *)(a0 + 0x10) <= 0.0) {
        return 0;
    }
    return 1;
}

/*
 * FUN_8c0e0be8  0x8c0e0be8
 * name hint from a string it uses: GRAPHICS ENV
 * strings: "suisou.nj"; "GRAPHICS\\ENV"; "suisou.nj"; "GRAPHICS\\ENV" ...
 */
u32 FUN_8c0e0be8(int a0, u32 a1, u32 a2) {
    u32 ar6_00;
    u32 uVar1;

    (*(code *)(&FUN_8c020a70))(a1, "suisou.nj", "GRAPHICS\\ENV", a0);
    (*(code *)(&FUN_8c020b68))(a1, "suisou.nj", "GRAPHICS\\ENV", a0);
    (*(code *)(&FUN_8c020a70))(a1, "suisou_parts_S_GlassB_Up.nj", "GRAPHICS\\ENV", a0);
    (*(code *)(&FUN_8c020b68))(a1, "suisou_parts_S_GlassB_Up.nj", "GRAPHICS\\ENV", a0);
    (*(code *)(&FUN_8c020a70))(a1, "suisou_parts_S_GlassB_Dn.nj", "GRAPHICS\\ENV", a0);
    (*(code *)(&FUN_8c020b68))(a1, "suisou_parts_S_GlassB_Dn.nj", "GRAPHICS\\ENV", a0);
    (*(code *)(&FUN_8c020a70))(a1, "suisou_parts_S_GlassS_Up.nj", "GRAPHICS\\ENV", a0);
    (*(code *)(&FUN_8c020b68))(a1, "suisou_parts_S_GlassS_Up.nj", "GRAPHICS\\ENV", a0);
    (*(code *)(&FUN_8c020a70))(a1, "suisou_TempMeter.nj", "GRAPHICS\\ENV", a0);
    (*(code *)(&FUN_8c020b68))(a1, "suisou_TempMeter.nj", "GRAPHICS\\ENV", a0);
    (*(code *)(&FUN_8c020a70))(a1, "suisou_Collision.nj", "GRAPHICS\\ENV", a0);
    ar6_00 = (u32)(u8)a2;
    FUN_8c0d57e8(a0 + 0x10ac, a1, ar6_00);
    FUN_8c0d0768(a0 + 0x13b24, a1);
    uVar1 = FUN_8c0d990c(a0 + 0x22704, a1);
    return uVar1;
}

/*
 * FUN_8c0e0d6c  0x8c0e0d6c
 */
int FUN_8c0e0d6c(int a0) {
    return a0 + 0x22704;
}

/*
 * FUN_8c0e0d7c  0x8c0e0d7c
 */
u32 FUN_8c0e0d7c(int a0, u32 a1, u32 a2, u32 a3) {
    u32 uVar1;

    uVar1 = (**(code **)(*(int *)(a0 + 0x9e8) + 0x28))((int *)(a0 + 0x9e8), a1, a2, a3);
    return uVar1;
}

/*
 * FUN_8c0e0da4  0x8c0e0da4
 * called by: FUN_8c0dca9c
 */
u32 FUN_8c0e0da4(int *a0, u32 unused_a1, u32 a2, u32 a3) {
    u32 uVar1;

    uVar1 = 1;
    (**(code **)(0x1b0 + *a0))(a0, 1, a2, a3);
    *(u32 *)(0x22814 + (int)a0) = 1;
    *(u32 *)(0x22810 + (int)a0) = 1;
    FUN_8c102a7c((int)a0 + 0xb10);
    FUN_8c102a7c((int)a0 + 0xb30);
    FUN_8c102a7c((int)a0 + 0xad0);
    FUN_8c102a7c((int)a0 + 0xaf0);
    FUN_8c102a7c((int)a0 + 0xb50);
    uVar1 = FUN_8c102974((int)a0 + 0xb70);
    return uVar1;
}

/*
 * FUN_8c0e0f48  0x8c0e0f48
 */
u32 FUN_8c0e0f48(int *a0, u32 a1, float *a2, float *a3) {
    int ar4_00;
    int iVar1;
    int iVar2;
    int *ar5_00;
    float *ar5_01;
    u32 uVar3;
    int iVar4;
    float fVar5;
    float fVar6;
    double in_dr0;
    double dVar7;
    u32 uVar9;
    double dVar8;
    u32 in_fr3;
    double in_dr14;
    double in_xd0;
    double dVar10;
    double in_xd14;
    bool bVar11;
    char cVar12;
    char cVar13;
    float afStack_4c[3];
    float fStack_40;
    float fStack_3c;
    double dStack_38;
    float fStack_30;
    float fStack_2c;
    float fStack_28;
    u32 uStack_24;

    cVar13 = '\0';
    cVar12 = '\0';
    get_field_300_0bf154(a0 + 0x29);
    ar4_00 = FUN_8c0da588(a0 + 0x29);
    Vec3_ctor_zero(&fStack_30, a1, a2);
    Vec3_ctor_zero(&fStack_40, a1, a2);
    Vec3_set_xyz(afStack_4c, a1, a2, a3);
    FUN_8c023040(a0 + 0x8bae, a1, a2, a3);
    if (cVar13 == '\0') {
        in_dr0 = (double)CONCAT44((int)((u64)in_dr0 >> 0x20), in_fr3);
        dVar7 = (double)CONCAT44(0x3f400000, a0[0x8c03]);
    } else {
        in_xd0 = *(double *)(a0 + 0x8c03);
        dVar7 = 7.38978817419112e-312;
    }
    if (cVar12 == '\0') {
        fVar6 = (float)((u64)dVar7 >> 0x20);
        fVar5 = SUB84(dVar7, 0) * fVar6;
        dVar7 = (double)CONCAT44(fVar6, fVar5);
        bVar11 = (float)((u64)in_dr0 >> 0x20) < fVar5;
    } else {
        dVar7 = dVar7 * dVar7;
        bVar11 = in_dr0 < dVar7;
    }
    if (bVar11) {
        (**(code **)(*a0 + 0x15c))(a0, a1, a2, a3);
        FUN_8c0d56b4(a0 + 0x42b, a1, a2, a3);
    }
    ar5_00 = a0 + 0x8bad;
    iVar1 = FUN_8c0d3d6c(a0 + 0x42b, ar5_00, a2, a3);
    if (iVar1 == 0) {
        FUN_8c0e1320(a0 + 0x4edc);
    } else {
        FUN_8c0d0aac(a0 + 0x4edc);
        FUN_8c0d568c(a0 + 0x42b);
    }
    FUN_8c0d08c0(a0 + 0x4edc);
    iVar1 = get_field_14_0e1318(a0 + 0x4edc);
    if (iVar1 == 1) {
        iVar1 = get_field_300_0bf154(a0 + 0x29);
        for (iVar4 = 0; uVar3 = SUB84(in_dr14, 0), iVar4 < iVar1; iVar4 = iVar4 + 1) {
            a3 = &fStack_28;
            a2 = &fStack_2c;
            ar5_01 = &fStack_30;
            FUN_8c0507a4(ar4_00, ar5_01, a2, a3);
            if (cVar13 == '\0') {
                in_dr14 = (double)CONCAT44(fStack_2c, uVar3);
            } else {
                in_dr14 = (double)CONCAT44(fStack_28, fStack_2c);
            }
            FUN_8c0e130c(a0 + 0x42b, ar5_01, a2, a3);
            if (cVar12 == '\0') {
                bVar11 = (float)((u64)dVar7 >> 0x20) < (float)((u64)in_dr14 >> 0x20);
            } else {
                bVar11 = dVar7 < in_dr14;
            }
            if ((!bVar11) && (iVar2 = (**(code **)(*(int *)(ar4_00 + 8) + 200))(ar4_00, ar5_01, a2, a3), iVar2 == 1)) {
                if (cVar13 == '\0') {
                    dVar7 = (double)CONCAT44(0x44861000, fStack_30);
                } else {
                    in_xd0 = (double)CONCAT44(fStack_2c, fStack_30);
                    dVar7 = 3.03513869969298e-309;
                }
                if (cVar12 == '\0') {
                    fStack_30 = SUB84(dVar7, 0) - (float)((u64)dVar7 >> 0x20);
                } else {
                    fStack_30 = SUB84(dVar7 - dVar7, 0);
                }
                if (cVar13 == '\0') {
                    dVar7 = (double)CONCAT44(0x43320000, fStack_2c);
                } else {
                    fStack_30 = SUB84(in_xd0, 0);
                    fStack_2c = (float)((u64)in_xd0 >> 0x20);
                    in_xd0 = (double)CONCAT44(fStack_28, fStack_2c);
                    dVar7 = 1.3023403680263821e+22;
                }
                if (cVar12 == '\0') {
                    fStack_2c = SUB84(dVar7, 0) - (float)((u64)dVar7 >> 0x20);
                } else {
                    fStack_2c = SUB84(dVar7 - dVar7, 0);
                }
                if (cVar13 == '\0') {
                    dVar7 = (double)CONCAT44(0x44358000, fStack_28);
                } else {
                    fStack_2c = SUB84(in_xd0, 0);
                    fStack_28 = (float)((u64)in_xd0 >> 0x20);
                    in_xd0 = (double)CONCAT44(uStack_24, fStack_28);
                    dVar7 = 5066550725148672.0;
                }
                if (cVar12 == '\0') {
                    fStack_28 = SUB84(dVar7, 0) - (float)((u64)dVar7 >> 0x20);
                } else {
                    fStack_28 = SUB84(dVar7 - dVar7, 0);
                }
                if (cVar13 == '\0') {
                    dStack_38 = (double)CONCAT44(dStack_38._4_4_, fStack_28);
                    dVar10 = (double)CONCAT44(fStack_28, fStack_28);
                } else {
                    fStack_28 = SUB84(in_xd0, 0);
                    uStack_24 = (u32)((u64)in_xd0 >> 0x20);
                    dVar10 = in_xd0;
                    dStack_38 = in_xd0;
                    fStack_3c = fStack_2c;
                }
                _fStack_40 = CONCAT44(fStack_3c, fStack_30);
                Vec3_length_sq(&fStack_40, ar5_01, a2, a3);
                uVar3 = SUB84(in_dr0, 0);
                if (cVar13 == '\0') {
                    dVar7 = (double)CONCAT44(0x443b8000, (int)((u64)dVar10 >> 0x20));
                } else {
                    dVar7 = -7.937140160381387e-251;
                    in_xd0 = dVar10;
                }
                if (cVar12 == '\0' && SUB84(dVar7, 0) < (float)((u64)dVar7 >> 0x20)) {
                    Vec3_length(&fStack_30, ar5_01, a2, a3);
                    if (cVar13 == '\0') {
                        dVar7 = (double)CONCAT44(0x43320000, SUB84(dVar7, 0));
                    } else {
                        dVar7 = 1.3023403680263821e+22;
                    }
                    fVar5 = (float)((u64)dVar7 >> 0x20);
                    if (cVar12 == '\0') {
                        in_dr14 = (double)CONCAT44((float)((u64)in_dr14 >> 0x20) - fVar5, SUB84(in_dr14, 0));
                    } else {
                        in_dr14 = in_dr14 - dVar7;
                    }
                    if (cVar13 == '\0') {
                        dVar7 = (double)CONCAT44(fVar5, 0x44348000);
                    } else {
                        in_xd0 = 0.008437501388982582;
                    }
                    fVar5 = (float)((u64)in_dr14 >> 0x20);
                    if (cVar12 == '\0') {
                        fVar6 = SUB84(dVar7, 0) - fVar5;
                    } else {
                        fVar6 = SUB84(dVar7 - in_dr14, 0);
                    }
                    if (cVar13 == '\0') {
                        dVar7 = (double)CONCAT44(0x44348000, fVar6);
                    } else {
                        dVar7 = 0.008437501388982582;
                    }
                    if (cVar12 == '\0') {
                        fVar6 = SUB84(dVar7, 0) / (float)((u64)dVar7 >> 0x20);
                    } else {
                        fVar6 = SUB84(dVar7 / dVar7, 0);
                    }
                    if (cVar13 == '\0') {
                        dVar7 = (double)CONCAT44(0x3f8147ae, fVar6);
                    } else {
                        dVar7 = 5.377642808889976e-19;
                    }
                    if (cVar12 == '\0') {
                        dVar7 = (double)CONCAT44((float)((u64)dVar7 >> 0x20) - SUB84(dVar7, 0), SUB84(dVar7, 0));
                    } else {
                        dVar7 = dVar7 - dVar7;
                    }
                    dVar10 = dVar7;
                    dVar8 = dVar7;
                    if (cVar13 == '\0') {
                        uVar9 = (u32)((u64)dVar7 >> 0x20);
                        in_dr14 = (double)CONCAT44(fVar5, uVar9);
                        dVar7 = (double)(u64)uVar9;
                        dVar10 = in_xd0;
                        dVar8 = in_xd14;
                    }
                    in_xd14 = dVar8;
                    if (cVar12 == '\0' && SUB84(dVar7, 0) < 0.0) {
                        if (cVar13 == '\0') {
                            in_dr14 = (double)CONCAT44((int)((u64)in_dr14 >> 0x20), 0x3c23d70a);
                        } else {
                            in_xd14 = 134217758.07;
                        }
                    }
                    fVar5 = SUB84(in_dr14, 0);
                    if (cVar13 == '\0') {
                        dVar7 = (double)CONCAT44(fStack_30, uVar3);
                        dVar8 = (double)CONCAT44(fVar5, 0x41a00000);
                    } else {
                        dVar7 = (double)CONCAT44(fStack_2c, fStack_30);
                        dVar10 = -1.362436379967432e-249;
                        dVar8 = in_xd14;
                    }
                    if (cVar12 == '\0') {
                        dVar7 = (double)CONCAT44((float)((u64)dVar7 >> 0x20) * (float)((u64)dVar8 >> 0x20) *
                                                     SUB84(dVar8, 0),
                                                 SUB84(dVar7, 0));
                    } else {
                        dVar7 = dVar7 * dVar8 * dVar8;
                    }
                    fStack_30 = SUB84(dVar7, 0);
                    fVar6 = (float)((u64)dVar7 >> 0x20);
                    if (cVar13 == '\0') {
                        in_dr0 = (double)CONCAT44(fStack_2c, fStack_30);
                        dVar7 = (double)CONCAT44(fVar5, 0x41a00000);
                        fStack_30 = fVar6;
                    } else {
                        in_dr0 = (double)CONCAT44(fStack_28, fVar6);
                        dVar10 = -1.362436379967432e-249;
                        dVar7 = in_xd14;
                    }
                    if (cVar12 == '\0') {
                        in_dr0 = (double)CONCAT44((float)((u64)in_dr0 >> 0x20) * (float)((u64)dVar7 >> 0x20) *
                                                      SUB84(dVar7, 0),
                                                  SUB84(in_dr0, 0));
                    } else {
                        in_dr0 = in_dr0 * dVar7 * dVar7;
                    }
                    fVar6 = (float)((u64)in_dr0 >> 0x20);
                    if (cVar13 == '\0') {
                        dVar7 = (double)CONCAT44(0x41a00000, fStack_28);
                        in_xd0 = dVar10;
                        fStack_2c = fVar6;
                    } else {
                        fStack_2c = SUB84(in_dr0, 0);
                        in_xd0 = (double)CONCAT44(uStack_24, fVar6);
                        dVar7 = -1.362436379967432e-249;
                    }
                    fVar6 = (float)((u64)dVar7 >> 0x20);
                    if (cVar12 == '\0') {
                        fVar5 = fVar5 * fVar6;
                        in_dr14 = (double)(u64)(u32)fVar5;
                        dVar7 = (double)CONCAT44(fVar6, SUB84(dVar7, 0) * fVar5);
                    } else {
                        in_dr14 = in_dr14 * dVar7;
                        dVar7 = dVar7 * in_dr14;
                    }
                    if (cVar13 == '\0') {
                        fStack_28 = SUB84(dVar7, 0);
                    } else {
                        fStack_28 = SUB84(in_xd0, 0);
                        uStack_24 = (u32)((u64)in_xd0 >> 0x20);
                    }
                    FUN_8c023bf4(&fStack_30, &g_8c438264);
                    (**(code **)(*(int *)(ar4_00 + 8) + 0x9c))(ar4_00, &fStack_30, a2, a3);
                    ar5_01 = afStack_4c;
                    (**(code **)(*(int *)(ar4_00 + 8) + 0xa0))(ar4_00, ar5_01, a2, a3);
                }
            }
            ar4_00 = list_node_next(ar4_00);
        }
        dVar10 = g_8c438264;
        if (cVar13 == '\0') {
            dVar7 = (double)((u64)g_8c438264 & 0xffffffff);
            dVar10 = in_xd0;
        }
        dVar8 = g_8c438264;
        if (cVar12 == '\0' && SUB84(dVar7, 0) < 1.0) {
            if (cVar13 == '\0') {
                dVar7 = (double)CONCAT44(0x3dcccccd, SUB84(g_8c438264, 0));
            } else {
                dVar7 = -1.2971028142978771e-250;
                dVar10 = g_8c438264;
            }
            if (cVar12 == '\0') {
                fVar5 = SUB84(dVar7, 0) + (float)((u64)dVar7 >> 0x20);
            } else {
                fVar5 = SUB84(dVar7 + dVar7, 0);
            }
            dVar8 = dVar10;
            if (cVar13 == '\0') {
                g_8c438264 = (double)CONCAT44(g_8c438268, fVar5);
                dVar8 = g_8c438264;
            }
        }
    } else {
        dVar8 = (double)((u64)dVar7 & 0xffffffff);
        if (cVar13 == '\0') {
            g_8c438264 = (double)((u64)g_8c438264 & 0xffffffff00000000);
            dVar8 = g_8c438264;
        }
    }
    g_8c438264 = dVar8;
    FUN_8c0db7d4(a0, 1);
    uVar3 = 3;
    FUN_8c0db7d4(a0, 3);
    FUN_8c0d0a44(a0 + 0x4edc);
    object_dtor_delete(afStack_4c, 0xffffffff, a2, a3);
    Vec3_dtor(&fStack_40, 0xffffffff, a2, a3);
    uVar3 = Vec3_dtor(&fStack_30, 0xffffffff, a2, a3);
    return uVar3;
}

/*
 * FUN_8c0e130c  0x8c0e130c
 * called by: FUN_8c0e0f48
 */
u32 *FUN_8c0e130c(void) {
    return &g_8c0e1314;
}

/*
 * get_field_14_0e1318  0x8c0e1318
 * called by: FUN_8c0e0f48
 */
u32 get_field_14_0e1318(int a0) {
    return *(u32 *)(a0 + 0x14);
}

/*
 * FUN_8c0e1320  0x8c0e1320
 * called by: FUN_8c0e0f48
 */
u32 FUN_8c0e1320(int a0) {
    *(u32 *)(a0 + 0x14) = 0;
    *(u32 *)(a0 + 0x18) = 0;
    return 0;
}

/*
 * FUN_8c0e132c  0x8c0e132c
 */
u32 FUN_8c0e132c(int a0) {
    u32 uVar1;

    FUN_8c0d0910(a0 + 0x13b70);
    FUN_8c0db7d4(a0, 1);
    uVar1 = 3;
    FUN_8c0db7d4(a0, 3);
    uVar1 = FUN_8c0d0a44(a0 + 0x13b70);
    return uVar1;
}

/*
 * FUN_8c0e1398  0x8c0e1398
 */
int FUN_8c0e1398(int a0, int a1, u32 a2, u32 a3) {
    int ar4_00;
    int iVar1;
    u32 uVar2;
    int iVar3;
    u64 in_dr0;
    u32 uVar5;
    u64 uVar4;
    char cVar6;
    char cVar7;

    uVar5 = (u32)((u64)in_dr0 >> 0x20);
    cVar7 = '\0';
    cVar6 = '\0';
    uVar2 = a0 + 0x22eb4;
    FUN_8c0d3d6c(a0 + 0x10ac, uVar2, a2, a3);
    FUN_8c023040(a0 + 0x22eb8, uVar2, a2, a3);
    if (cVar7 == '\0') {
        uVar4 = CONCAT44(*(u32 *)(a0 + 0x2300c), uVar5);
    } else {
        uVar4 = *(u64 *)(a0 + 0x2300c);
    }
    if (cVar6 == '\0' && (float)uVar4 < (float)((u64)uVar4 >> 0x20)) {
        uVar2 = 0;
        FUN_8c0e015c(a0 + 0x13b8c, 0);
    }
    FUN_8c0d0d1c(a0 + 0x13b8c, uVar2, a2, a3);
    ar4_00 = FUN_8c101154(*(u32 *)(a1 + 0x7cc));
    if (ar4_00 == 1) {
        iVar1 = get_field_38_0db5a0(a0 + 0x4d4);
        ar4_00 = 0;
        if (iVar1 != 0) {
            ar4_00 = FUN_8c0db580(a0 + 0x4d4);
            for (iVar3 = 0; iVar3 < iVar1; iVar3 = iVar3 + 1) {
                uVar2 = get_field_b8_101178(*(u32 *)(a1 + 0x7cc));
                uVar2 = uVar2 & 0xff;
                (**(code **)(*(int *)(*(int *)(ar4_00 + 8) + 8) + 0x50))(*(int *)(ar4_00 + 8), uVar2, a2, a3);
                ar4_00 = list_node_next(ar4_00);
            }
        }
    }
    return ar4_00;
}

/*
 * FUN_8c0e14d8  0x8c0e14d8
 */
u32 FUN_8c0e14d8(int a0, u32 a1, u32 a2, u32 a3) {
    u32 uVar1;

    uVar1 = FUN_8c0d1060(a0 + 0x13b8c, a1, a2, a3);
    return uVar1;
}

/*
 * FUN_8c0e14fc  0x8c0e14fc
 * called by: FUN_8c0de6d0
 */
u32 FUN_8c0e14fc(int a0, u32 a1, u32 a2, u32 a3) {
    u32 uVar1;
    int ar4_00;

    FUN_8c235ee4();
    FUN_8c01538c(a0 + 0x106c, a1, a2);
    FUN_8c015b14(a0 + 0x1074, a1, a2, a3);
    ar4_00 = a0 + 0x107c;
    FUN_8c015b14(ar4_00, a1, a2, a3);
    FUN_8c235f14();
    FUN_8c015b14(a0 + 0x1078, a1, a2, a3);
    FUN_8c01538c(a0 + 0x28, a1, a2);
    uVar1 = FUN_8c015b14(a0 + 0x30, a1, a2, a3);
    return uVar1;
}

/*
 * FUN_8c0e157c  0x8c0e157c
 * called by: FUN_8c0deb60, FUN_8c0def78
 */
u32 FUN_8c0e157c(int a0, u32 a1, u32 a2, u32 a3) {
    u32 uVar1;
    int ar4_00;

    FUN_8c235ee4();
    FUN_8c01538c(a0 + 0x106c, a1, a2);
    FUN_8c015adc(a0 + 0x1074, a1, a2, a3);
    ar4_00 = a0 + 0x107c;
    FUN_8c015adc(ar4_00, a1, a2, a3);
    FUN_8c235f14();
    FUN_8c015adc(a0 + 0x1078, a1, a2, a3);
    FUN_8c01538c(a0 + 0x28, a1, a2);
    uVar1 = FUN_8c015adc(a0 + 0x30, a1, a2, a3);
    return uVar1;
}

/*
 * FUN_8c0e15fc  0x8c0e15fc
 * called by: FUN_8c0df250, FUN_8c0df668
 */
u32 FUN_8c0e15fc(int a0, u32 a1, u32 a2, u32 a3) {
    u32 uVar1;
    u32 in_PR;

    FUN_8c01538c(a0 + 0x106c, a1, a2);
    FUN_8c015adc(a0 + 0x107c, a1, a2, a3);
    uVar1 = 0;
    FUN_8c256328(0, a1, a2, a3, in_PR);
    FUN_8c019058();
    FUN_8c015adc(a0 + 0x1074, a1, a2, a3);
    FUN_8c015adc(a0 + 0x1078, a1, a2, a3);
    FUN_8c256210(1);
    FUN_8c01538c(a0 + 0x28, a1, a2);
    uVar1 = FUN_8c015adc(a0 + 0x30, a1, a2, a3);
    return uVar1;
}

/*
 * CWaterTank_CreateStage  0x8c0e1698
 * called by: FUN_8c0de07c, FUN_8c0de18c
 * strings: "suisou.nj"; "GRAPHICS\\ENV"; "suisou.nj"; "Failed NJCM:CWaterTank::CreateStage()" ...
 */
u32 CWaterTank_CreateStage(int a0, u32 a1, u32 a2) {
    int iVar1;
    u32 ar5_00;
    char *pcVar2;
    u32 uVar3;
    u32 *puVar4;
    u32 uVar5;
    u32 a7;
    code *pcVar6;
    int *piVar7;
    code *ar7_00;
    u32 uVar8;
    u32 in_fr1;
    char cVar9;
    u32 uStack_3c;
    int aiStack_38[4];
    u32 uStack_28;
    u32 uStack_24;
    u32 uStack_20;
    u32 uStack_1c;
    u32 uStack_18;

    cVar9 = '\0';
    uVar3 = a1;
    Vec3_ctor_zero(&uStack_24, a1, a2);
    Vec3_set_zero(aiStack_38 + 2);
    aiStack_38[1] = 0;
    aiStack_38[0] = 0;
    uStack_3c = 0;
    iVar1 = FUN_8c0209fc(a1, "suisou.nj", "GRAPHICS\\ENV", aiStack_38);
    if (iVar1 == 0) {
        report_error_message("suisou.nj", "Failed NJCM:CWaterTank::CreateStage()", 0, 2);
    }
    puVar4 = &uStack_3c;
    pcVar2 = "GRAPHICS\\ENV";
    iVar1 = FUN_8c020af4(a1, "suisou.nj", "GRAPHICS\\ENV", puVar4);
    if (iVar1 == 0) {
        puVar4 = (u32 *)0x2;
        pcVar2 = NULL;
        report_error_message("suisou.nj", "Failed NJTL:CWaterTank::CreateStage()", 0, 2);
    }
    FUN_8c015ad4(a0 + 0x30, aiStack_38[0], pcVar2);
    uVar5 = 5;
    uVar3 = 0x8c4312a8;
    FUN_8c239170(0x8c437554, 0x8c43755c, 0x8c4312a8, 5);
    for (uVar8 = 0; uVar8 < 5; uVar8 = uVar8 + 1) {
        uVar5 = 0x8c43755c;
        *(u32 *)(uVar8 * 0xc + 0x8c437560) = *(u32 *)(uVar8 * 0xc + 0x8c437560) | 0x80000000;
    }
    ar5_00 = 0x8c437554;
    (**(code **)(*(int *)(a0 + 0x28) + 8))((int *)(a0 + 0x28), 0x8c437554, uVar3, uVar5);
    uVar3 = get_field_4_0253e4(a0 + 0x28, ar5_00, uVar3, uVar5);
    iVar1 = FUN_8c02100c(a1, "suisou.pvm", "GRAPHICS\\ENV", uVar3);
    if (iVar1 == 0) {
        report_error_message("Failed to load water tank textuer..", "CWaterTank::CreateStage()", 0, 2);
    }
    iVar1 = FUN_8c0209fc(a1, "suisou_parts_S_GlassB_Up.nj", "GRAPHICS\\ENV", aiStack_38);
    if (iVar1 == 0) {
        report_error_message("suisou_parts_S_GlassB_Up.nj", "Failed NJCM:CWaterTank::CreateStage()", 0, 2);
    }
    puVar4 = &uStack_3c;
    pcVar2 = "GRAPHICS\\ENV";
    iVar1 = FUN_8c020af4(a1, "suisou_parts_S_GlassB_Up.nj", "GRAPHICS\\ENV", puVar4);
    if (iVar1 == 0) {
        puVar4 = (u32 *)0x2;
        pcVar2 = NULL;
        report_error_message("suisou_parts_S_GlassB_Up.nj", "Failed NJTL:CWaterTank::CreateStage()", 0, 2);
    }
    FUN_8c015ad4(a0 + 0x1074, aiStack_38[0], pcVar2);
    iVar1 = FUN_8c0209fc(a1, "suisou_parts_S_GlassB_Dn.nj", "GRAPHICS\\ENV", aiStack_38);
    if (iVar1 == 0) {
        report_error_message("suisou_parts_S_GlassB_Dn.nj", "Failed NJCM:CWaterTank::CreateStage()", 0, 2);
    }
    puVar4 = &uStack_3c;
    iVar1 = FUN_8c020af4(a1, "suisou_parts_S_GlassB_Dn.nj", "GRAPHICS\\ENV", puVar4);
    if (iVar1 == 0) {
        puVar4 = (u32 *)0x2;
        report_error_message("suisou_parts_S_GlassB_Dn.nj", "Failed NJTL:CWaterTank::CreateStage()", 0, 2);
    }
    FUN_8c015ad4(a0 + 0x1078, aiStack_38[0], 0x1078);
    iVar1 = FUN_8c0209fc(a1, "suisou_parts_S_GlassS_Up.nj", "GRAPHICS\\ENV", aiStack_38);
    if (iVar1 == 0) {
        report_error_message("suisou_parts_S_GlassS_Up.nj", "Failed NJCM:CWaterTank::CreateStage()", 0, 2);
    }
    puVar4 = &uStack_3c;
    pcVar2 = "GRAPHICS\\ENV";
    iVar1 = FUN_8c020af4(a1, "suisou_parts_S_GlassS_Up.nj", "GRAPHICS\\ENV", puVar4);
    if (iVar1 == 0) {
        puVar4 = (u32 *)0x2;
        pcVar2 = NULL;
        report_error_message("suisou_parts_S_GlassS_Up.nj", "Failed NJTL:CWaterTank::CreateStage()", 0, 2);
    }
    FUN_8c015ad4(a0 + 0x107c, aiStack_38[0], pcVar2);
    a7 = 3;
    FUN_8c239170(a0 + 0x1080, a0 + 0x1088, 0x8c4312a8, 3);
    uVar8 = 0;
    while (uVar8 < 3) {
        *(u32 *)(uVar8 * 0xc + a0 + 0x108c) = *(u32 *)(uVar8 * 0xc + a0 + 0x108c) | 0x80000000;
        a7 = uVar8 + 1;
        uVar8 = a7;
    }
    iVar1 = a0 + 0x1080;
    (**(code **)(*(int *)(a0 + 0x106c) + 8))((int *)(a0 + 0x106c), iVar1, 3, a7);
    uVar3 = get_field_4_0253e4(a0 + 0x106c, iVar1, get_field_4_0253e4, a0 + 0x106c);
    iVar1 = FUN_8c02100c(a1, "SuisouParts.pvm", "GRAPHICS\\ENV", uVar3);
    if (iVar1 == 0) {
        report_error_message("Failed to load water tank upper textuer..", "CWaterTank::CreateStage()", 0, 2);
    }
    iVar1 = FUN_8c0209fc(a1, "suisou_TempMeter.nj", "GRAPHICS\\ENV", aiStack_38);
    if (iVar1 == 0) {
        report_error_message("suisou_TempMeter.nj", "Failed NJCM:CWaterTank::CreateStage()", 0, 2);
    }
    pcVar2 = "GRAPHICS\\ENV";
    iVar1 = FUN_8c020af4(a1, "suisou_TempMeter.nj", "GRAPHICS\\ENV", &uStack_3c);
    if (iVar1 == 0) {
        pcVar2 = NULL;
        report_error_message("suisou_TempMeter.nj", "Failed NJTL:CWaterTank::CreateStage()", 0, 2);
    }
    pcVar6 = FUN_8c015ad4;
    FUN_8c015ad4(a0 + 0x226f8, aiStack_38[0], pcVar2);
    uVar3 = uStack_3c;
    uVar5 = uStack_3c;
    (**(code **)(*(int *)(a0 + 0x226fc) + 8))((int *)(a0 + 0x226fc), uStack_3c, uStack_3c, pcVar6);
    uVar3 = get_field_4_0253e4(a0 + 0x226fc, uVar3, uVar5, pcVar6);
    pcVar2 = "THERMOMETER";
    iVar1 = FUN_8c020ef0(a1, "THERMOMETER", "GRAPHICS\\ENV", uVar3);
    if (iVar1 == 0) {
        uVar3 = 2;
        pcVar2 = "CWaterTank::CreateStage()";
        report_error_message("Failed to load thermometer textuer..", "CWaterTank::CreateStage()", 0, 2);
    }
    uVar3 = get_field_4_0253e4(a0 + 0x22d40, pcVar2, get_field_4_0253e4, uVar3);
    iVar1 = FUN_8c020ef0(a1, "WATER_ROCK", "GRAPHICS\\ENV", uVar3);
    if (iVar1 == 0) {
        report_error_message("Failed to load rock textuer..", "CWaterTank::CreateStage()", 0, 2);
    }
    piVar7 = aiStack_38;
    iVar1 = FUN_8c0209fc(a1, "suisou_Collision.nj", "GRAPHICS\\ENV", piVar7);
    if (iVar1 == 0) {
        piVar7 = (int *)0x2;
        report_error_message("suisou_Collision.nj", "Failed NJCM:CWaterTank::CreateStage()", 0, 2);
    }
    uVar3 = 0x2274c;
    FUN_8c0178b4(a0 + 0x2274c, *(u32 *)(aiStack_38[0] + 4), 0x2274c);
    FUN_8c0cfff8(a0 + 0x13b24, a1);
    pcVar6 = FUN_8c0d07ec;
    FUN_8c0d07ec(a0 + 0x13b70, a1, uVar3, FUN_8c0d07ec);
    uVar3 = 0x22704;
    FUN_8c0d93a8(a0 + 0x22704, a1, 0x22704);
    FUN_8c0dbb14(a0, a1, uVar3, pcVar6);
    if (cVar9 == '\0') {
        uStack_20 = 0;
        uVar3 = in_fr1;
    } else {
        uStack_18 = 0x80;
        uVar3 = 0xc23c0000;
        uStack_20 = in_fr1;
    }
    uStack_1c = 0xbf800000;
    aiStack_38[2] = 0xc23c0000;
    if (cVar9 == '\0') {
        uStack_28 = 0;
        uStack_24 = uStack_20;
    } else {
        uStack_24 = 0;
        uStack_28 = uVar3;
    }
    aiStack_38[3] = uStack_28;
    FUN_8c0d167c(&uStack_24, a0 + 0x227d0, aiStack_38 + 2, pcVar6);
    if (cVar9 != '\0') {
        uVar3 = 0x423c0000;
    }
    aiStack_38[2] = 0x423c0000;
    if (cVar9 == '\0') {
        uStack_28 = 0;
    } else {
        uStack_24 = 0;
        uStack_28 = uVar3;
    }
    puVar4 = &uStack_24;
    aiStack_38[3] = uStack_28;
    FUN_8c0d167c(puVar4, a0 + 0x227e0, aiStack_38 + 2, puVar4);
    if (cVar9 == '\0') {
        uStack_20 = 0;
        uVar5 = uVar3;
    } else {
        uStack_18 = 0x80;
        uVar5 = 0xc23c0000;
        uStack_20 = uVar3;
    }
    uStack_1c = 0xbf800000;
    aiStack_38[2] = 0xc23c0000;
    if (cVar9 == '\0') {
        uStack_28 = 0;
        uStack_24 = uStack_20;
    } else {
        uStack_24 = 0;
        uStack_28 = uVar5;
    }
    aiStack_38[3] = uStack_28;
    FUN_8c0d167c(&uStack_24, a0 + 0x227f0, aiStack_38 + 2, puVar4);
    uStack_28 = uVar5;
    if (cVar9 != '\0') {
        uStack_28 = 0x423c0000;
    }
    aiStack_38[2] = 0x423c0000;
    if (cVar9 == '\0') {
        uStack_28 = 0;
    } else {
        uStack_24 = 0;
    }
    ar7_00 = FUN_8c0d167c;
    aiStack_38[3] = uStack_28;
    FUN_8c0d167c(&uStack_24, a0 + 0x22800, aiStack_38 + 2, FUN_8c0d167c);
    pcVar6 = NULL;
    while (pcVar6 < (code *)0x3) {
        FUN_8c0d70e4(a0 + (int)pcVar6 * 0x16c + 0x22d48, (int)pcVar6 * 0x16c, 3, ar7_00);
        ar7_00 = pcVar6 + 1;
        pcVar6 = ar7_00;
    }
    piVar7 = aiStack_38 + 2;
    object_dtor_delete(piVar7, 0xffffffff, piVar7, ar7_00);
    uVar3 = Vec3_dtor(&uStack_24, 0xffffffff, piVar7, ar7_00);
    return uVar3;
}

/*
 * FUN_8c0e1f90  0x8c0e1f90
 */
u32 FUN_8c0e1f90(int a0, u32 *a1, u8 *a2, u32 a3) {
    int iVar1;
    u64 *puVar2;
    double *pdVar3;
    u32 uVar4;
    float *pfVar5;
    u32 *puVar6;
    float fVar7;
    u64 uVar8;
    double dVar9;
    double dVar10;
    double in_dr2;
    u64 in_xd0;
    bool bVar11;
    u32 in_PR;
    char cVar12;
    char cVar13;
    u8 auStack_30[8];
    u32 uStack_28;
    u32 uStack_24;
    u32 uStack_20;
    u32 uStack_1c;
    u32 uStack_18;
    u32 uStack_14;
    u32 uStack_10;
    u32 uStack_c;

    cVar13 = '\0';
    cVar12 = '\0';
    uStack_1c = 0;
    uStack_20 = 0;
    if (g_8c43826c == '\0') {
        g_8c438268 = CONCAT35((s32)(g_8c438268 >> 0x28), 0x100000000);
    }
    uStack_28 = 0;
    if (g_8c438270 == '\0') {
        g_8c438268 = g_8c438268 & 0xffffffffffff;
        g_8c438270 = '\x01';
    }
    puVar6 = a1;
    uStack_c = in_PR;
    FUN_8c0dc61c(a0, a1, a2, a3);
    iVar1 = FUN_8c1003b0(a1, puVar6, a2, a3);
    if ((iVar1 != 1) && (*(int *)(a0 + 0x9d8) != 0)) {
        *(u32 *)(a0 + 0x9d8) = 0;
    }
    iVar1 = FUN_8c100ce8(a1, puVar6, a2, a3);
    if ((iVar1 == 1) && (*(int *)(a0 + 0x9d4) != 0)) {
        (**(code **)(*(int *)(*(int *)(a0 + 0x9d4) + 8) + 0x88))(*(int *)(a0 + 0x9d4), puVar6, a2, a3);
    }
    puVar6 = &uStack_28;
    iVar1 = FUN_8c100e4c(a1, puVar6);
    if ((iVar1 == 1) && (*(int *)(a0 + 0x9d4) != 0)) {
        (**(code **)(*(int *)(*(int *)(a0 + 0x9d4) + 8) + 0x184))(*(int *)(a0 + 0x9d4), puVar6, a2, a3);
    } else {
        puVar6 = &uStack_28;
        iVar1 = FUN_8c100e4c(a1, puVar6);
        if ((iVar1 == 2) && (*(int *)(a0 + 0x9d4) != 0)) {
            (**(code **)(*(int *)(*(int *)(a0 + 0x9d4) + 8) + 0x188))(*(int *)(a0 + 0x9d4), puVar6, a2, a3);
        }
    }
    FUN_8c0dc8fc(a0, a1, a2, a3);
    puVar6 = a1;
    FUN_8c0dc7e8(a0, a1, a2, a3);
    iVar1 = FUN_8c10031c(a1);
    if ((iVar1 == 1) && (*(int *)(a0 + 0x9d4) != 0)) {
        iVar1 = (**(code **)(*(int *)(*(int *)(a0 + 0x9d4) + 8) + 200))(*(int *)(a0 + 0x9d4), puVar6, a2, a3);
        if (iVar1 == 1) {
            puVar6 = a1;
            FUN_8c0e4298(a0, a1, a2, a3);
        } else {
            puVar6 = (u32 *)0x2;
            FUN_8c021720(0x8c2b59d0, 2, a2, a3);
        }
    }
    iVar1 = FUN_8c1003b0(a1, puVar6, a2, a3);
    if (((iVar1 == 1) && (*(int *)(a0 + 0x9d8) != 0)) && (*(int *)(a0 + 0x9d4) == 0)) {
        puVar2 = (u64 *)(*(int *)(a0 + 0x9d8) + 4);
        if (cVar13 == '\0') {
            uStack_18 = *(u32 *)puVar2;
        } else {
            uStack_18 = (u32)*puVar2;
        }
        puVar2 = (u64 *)(*(int *)(a0 + 0x9d8) + 8);
        if (cVar13 == '\0') {
            uStack_14 = *(u32 *)puVar2;
        } else {
            uStack_14 = (u32)*puVar2;
        }
        puVar2 = (u64 *)(*(int *)(a0 + 0x9d8) + 0xc);
        if (cVar13 == '\0') {
            uStack_10 = *(u32 *)puVar2;
        } else {
            uVar8 = *puVar2;
            uStack_10 = (u32)uVar8;
            uStack_c = (u32)((u64)uVar8 >> 0x20);
        }
        a2 = auStack_30;
        puVar6 = &uStack_18;
        FUN_8c256294(0, puVar6, a2);
        FUN_8c0c90d0(a1);
    }
    FUN_8c0d723c(a0 + 0x22d48);
    if ((*(int *)(a0 + 0x9d8) == 0) || (*(int *)(a0 + 0x9d8) == a0 + 0x22d48)) {
        if (*(int *)(a0 + 0x9d8) == a0 + 0x22d48) {
            iVar1 = FUN_8c100850(a1);
            if (iVar1 == 1) {
                FUN_8c0d74cc(a0 + 0x22d48);
            } else {
                iVar1 = FUN_8c100874(a1);
                if (iVar1 == 1) {
                    FUN_8c0d74cc(a0 + 0x22d48);
                }
            }
            if (cVar13 == '\0') {
                uVar8 = CONCAT44(*(u32 *)(a0 + 0x22d74), g_8c438268);
            } else {
                uVar8 = *(u64 *)(a0 + 0x22d74);
            }
            if (((float)uVar8 != (float)((u64)uVar8 >> 0x20)) && (g_8c43826e == 0)) {
                uStack_24 = se_open_bank1(0x8c2b59d0);
                a2 = (u8 *)0x10;
                se_play(0x8c2b59d0, uStack_24, 0x10);
                puVar6 = &uStack_24;
                FUN_8c021a8c(0x8c2b59d0, puVar6);
                g_8c438268 = CONCAT26(8, g_8c438268);
            }
        }
    } else {
        iVar1 = FUN_8c100808(a1);
        if (iVar1 == 1) {
            pfVar5 = (float *)(*(int *)(a0 + 0x9d8) + 0xc);
            puVar2 = (u64 *)(*(int *)(a0 + 0x9d8) + 0xc);
            if (cVar13 == '\0') {
                dVar9 = (double)CONCAT44(0x3f4ccccd, *(u32 *)puVar2);
            } else {
                in_xd0 = *puVar2;
                dVar9 = 3848291215769.6;
            }
            if (cVar12 == '\0') {
                fVar7 = SUB84(dVar9, 0) - (float)((u64)dVar9 >> 0x20);
            } else {
                fVar7 = SUB84(dVar9 - dVar9, 0);
            }
            if (cVar13 == '\0') {
                *pfVar5 = fVar7;
            } else {
                *(u64 *)pfVar5 = in_xd0;
            }
            pdVar3 = (double *)(*(int *)(a0 + 0x9d8) + 0xc);
            if (cVar13 == '\0') {
                in_dr2 = (double)CONCAT44(*(u32 *)pdVar3, SUB84(in_dr2, 0));
            } else {
                in_dr2 = *pdVar3;
            }
            puVar2 = (u64 *)(*(int *)(a0 + 0x9d8) + 0x1c);
            if (cVar13 == '\0') {
                dVar9 = (double)CONCAT44(0x428c0000, *(u32 *)puVar2);
            } else {
                in_xd0 = *puVar2;
                dVar9 = -1.701787568380408e+78;
            }
            if (cVar12 == '\0') {
                bVar11 = (float)((u64)in_dr2 >> 0x20) < SUB84(dVar9, 0) - (float)((u64)dVar9 >> 0x20);
            } else {
                bVar11 = in_dr2 < dVar9 - dVar9;
            }
            if (bVar11) {
                pfVar5 = (float *)(*(int *)(a0 + 0x9d8) + 0xc);
                puVar2 = (u64 *)(*(int *)(a0 + 0x9d8) + 0x1c);
                if (cVar13 == '\0') {
                    dVar9 = (double)CONCAT44(0x428c0000, *(u32 *)puVar2);
                } else {
                    in_xd0 = *puVar2;
                    dVar9 = -1.701787568380408e+78;
                }
                if (cVar12 == '\0') {
                    fVar7 = SUB84(dVar9, 0) - (float)((u64)dVar9 >> 0x20);
                } else {
                    fVar7 = SUB84(dVar9 - dVar9, 0);
                }
                if (cVar13 == '\0') {
                    *pfVar5 = fVar7;
                } else {
                    *(u64 *)pfVar5 = in_xd0;
                }
            }
        } else {
            iVar1 = FUN_8c10082c(a1);
            if (iVar1 == 1) {
                pfVar5 = (float *)(*(int *)(a0 + 0x9d8) + 0xc);
                puVar2 = (u64 *)(*(int *)(a0 + 0x9d8) + 0xc);
                if (cVar13 == '\0') {
                    dVar9 = (double)CONCAT44(0x3f4ccccd, *(u32 *)puVar2);
                } else {
                    in_xd0 = *puVar2;
                    dVar9 = 3848291215769.6;
                }
                if (cVar12 == '\0') {
                    fVar7 = SUB84(dVar9, 0) + (float)((u64)dVar9 >> 0x20);
                } else {
                    fVar7 = SUB84(dVar9 + dVar9, 0);
                }
                if (cVar13 == '\0') {
                    *pfVar5 = fVar7;
                } else {
                    *(u64 *)pfVar5 = in_xd0;
                }
                pdVar3 = (double *)(*(int *)(a0 + 0x9d8) + 0xc);
                if (cVar13 == '\0') {
                    in_dr2 = (double)CONCAT44(*(u32 *)pdVar3, SUB84(in_dr2, 0));
                } else {
                    in_dr2 = *pdVar3;
                }
                puVar2 = (u64 *)(*(int *)(a0 + 0x9d8) + 0x1c);
                if (cVar13 == '\0') {
                    dVar9 = (double)CONCAT44(0x428c0000, *(u32 *)puVar2);
                } else {
                    in_xd0 = *puVar2;
                    dVar9 = -1.3995363365918915e-250;
                }
                if (cVar12 == '\0') {
                    bVar11 = SUB84(dVar9, 0) + (float)((u64)dVar9 >> 0x20) < (float)((u64)in_dr2 >> 0x20);
                } else {
                    bVar11 = dVar9 + dVar9 < in_dr2;
                }
                if (bVar11) {
                    pfVar5 = (float *)(*(int *)(a0 + 0x9d8) + 0xc);
                    puVar2 = (u64 *)(*(int *)(a0 + 0x9d8) + 0x1c);
                    if (cVar13 == '\0') {
                        dVar9 = (double)CONCAT44(0x428c0000, *(u32 *)puVar2);
                    } else {
                        in_xd0 = *puVar2;
                        dVar9 = -1.3995363365918915e-250;
                    }
                    if (cVar12 == '\0') {
                        fVar7 = SUB84(dVar9, 0) + (float)((u64)dVar9 >> 0x20);
                    } else {
                        fVar7 = SUB84(dVar9 + dVar9, 0);
                    }
                    if (cVar13 == '\0') {
                        *pfVar5 = fVar7;
                    } else {
                        *(u64 *)pfVar5 = in_xd0;
                    }
                }
            }
        }
        uVar4 = SUB84(in_dr2, 0);
        iVar1 = FUN_8c100850(a1);
        if (iVar1 == 1) {
            pfVar5 = (float *)(*(int *)(a0 + 0x9d8) + 4);
            puVar2 = (u64 *)(*(int *)(a0 + 0x9d8) + 4);
            if (cVar13 == '\0') {
                dVar9 = (double)CONCAT44(0x3f4ccccd, *(u32 *)puVar2);
            } else {
                in_xd0 = *puVar2;
                dVar9 = 3848291215769.6;
            }
            if (cVar12 == '\0') {
                fVar7 = SUB84(dVar9, 0) + (float)((u64)dVar9 >> 0x20);
            } else {
                fVar7 = SUB84(dVar9 + dVar9, 0);
            }
            if (cVar13 == '\0') {
                *pfVar5 = fVar7;
            } else {
                *(u64 *)pfVar5 = in_xd0;
            }
            pdVar3 = (double *)(*(int *)(a0 + 0x9d8) + 4);
            if (cVar13 == '\0') {
                dVar9 = (double)CONCAT44(*(u32 *)pdVar3, uVar4);
            } else {
                dVar9 = *pdVar3;
            }
            puVar2 = (u64 *)(*(int *)(a0 + 0x9d8) + 0x14);
            if (cVar13 == '\0') {
                dVar10 = (double)CONCAT44(0x428c0000, *(u32 *)puVar2);
            } else {
                in_xd0 = *puVar2;
                dVar10 = -1.3995363365918915e-250;
            }
            if (cVar12 == '\0') {
                bVar11 = SUB84(dVar10, 0) + (float)((u64)dVar10 >> 0x20) < (float)((u64)dVar9 >> 0x20);
            } else {
                bVar11 = dVar10 + dVar10 < dVar9;
            }
            if (bVar11) {
                pfVar5 = (float *)(*(int *)(a0 + 0x9d8) + 4);
                puVar2 = (u64 *)(*(int *)(a0 + 0x9d8) + 0x14);
                if (cVar13 == '\0') {
                    dVar9 = (double)CONCAT44(0x428c0000, *(u32 *)puVar2);
                } else {
                    in_xd0 = *puVar2;
                    dVar9 = -1.3995363365918915e-250;
                }
                if (cVar12 == '\0') {
                    fVar7 = SUB84(dVar9, 0) + (float)((u64)dVar9 >> 0x20);
                } else {
                    fVar7 = SUB84(dVar9 + dVar9, 0);
                }
                if (cVar13 == '\0') {
                    *pfVar5 = fVar7;
                } else {
                    *(u64 *)pfVar5 = in_xd0;
                }
            }
        } else {
            iVar1 = FUN_8c100874(a1);
            if (iVar1 == 1) {
                pfVar5 = (float *)(*(int *)(a0 + 0x9d8) + 4);
                puVar2 = (u64 *)(*(int *)(a0 + 0x9d8) + 4);
                if (cVar13 == '\0') {
                    dVar9 = (double)CONCAT44(0x3f4ccccd, *(u32 *)puVar2);
                } else {
                    in_xd0 = *puVar2;
                    dVar9 = 3848291215769.6;
                }
                if (cVar12 == '\0') {
                    fVar7 = SUB84(dVar9, 0) - (float)((u64)dVar9 >> 0x20);
                } else {
                    fVar7 = SUB84(dVar9 - dVar9, 0);
                }
                if (cVar13 == '\0') {
                    *pfVar5 = fVar7;
                } else {
                    *(u64 *)pfVar5 = in_xd0;
                }
                pdVar3 = (double *)(*(int *)(a0 + 0x9d8) + 4);
                if (cVar13 == '\0') {
                    dVar9 = (double)CONCAT44(*(u32 *)pdVar3, uVar4);
                } else {
                    dVar9 = *pdVar3;
                }
                puVar2 = (u64 *)(*(int *)(a0 + 0x9d8) + 0x14);
                if (cVar13 == '\0') {
                    dVar10 = (double)CONCAT44(0x428c0000, *(u32 *)puVar2);
                } else {
                    in_xd0 = *puVar2;
                    dVar10 = 9.880610002640478e-290;
                }
                if (cVar12 == '\0') {
                    bVar11 = (float)((u64)dVar9 >> 0x20) < SUB84(dVar10, 0) - (float)((u64)dVar10 >> 0x20);
                } else {
                    bVar11 = dVar9 < dVar10 - dVar10;
                }
                if (bVar11) {
                    pfVar5 = (float *)(*(int *)(a0 + 0x9d8) + 4);
                    puVar2 = (u64 *)(*(int *)(a0 + 0x9d8) + 0x14);
                    if (cVar13 == '\0') {
                        dVar9 = (double)CONCAT44(0x428c0000, *(u32 *)puVar2);
                    } else {
                        in_xd0 = *puVar2;
                        dVar9 = 9.880610002640478e-290;
                    }
                    if (cVar12 == '\0') {
                        fVar7 = SUB84(dVar9, 0) - (float)((u64)dVar9 >> 0x20);
                    } else {
                        fVar7 = SUB84(dVar9 - dVar9, 0);
                    }
                    if (cVar13 == '\0') {
                        *pfVar5 = fVar7;
                    } else {
                        *(u64 *)pfVar5 = in_xd0;
                    }
                }
            }
        }
    }
    if (cVar13 == '\0') {
        g_8c438268 = CONCAT44(g_8c43826c, *(u32 *)(a0 + 0x22d74));
    } else {
        g_8c438268 = *(u64 *)(a0 + 0x22d74);
    }
    if (g_8c43826e != 0) {
        g_8c438268 = CONCAT26(g_8c43826e + -1, g_8c438268);
    }
    iVar1 = FUN_8c0e2554(a1, puVar6, a2, a3);
    if ((iVar1 == 1) && (*(int *)(a0 + 0x9d8) == 0)) {
        puVar6 = a1;
        FUN_8c0e4348(a0, a1);
    }
    iVar1 = FUN_8c0e252c(a1);
    if (iVar1 == 1) {
        uVar4 = get_field_cc_0dfee8(a1);
        uVar4 = FUN_8c01f528(uVar4);
        FUN_8c01d9e0();
    }
    return 1;
}

/*
 * FUN_8c0e252c  0x8c0e252c
 * called by: FUN_8c0e1f90, FUN_8c0e25c0, FUN_8c0e6804
 */
u32 FUN_8c0e252c(int a0) {
    u32 uVar1;

    uVar1 = FUN_8c01edcc(*(u32 *)(0xcc + a0));
    return uVar1;
}

/*
 * FUN_8c0e2554  0x8c0e2554
 * called by: FUN_8c0e1f90, FUN_8c0e29dc
 */
u32 FUN_8c0e2554(int a0, u32 a1, u32 a2, u32 a3) {
    int iVar1;

    iVar1 = get_field_4_0637f8(a0 + 0xd8);
    if (((iVar1 == 0) &&
         (iVar1 = (*(code *)(&input_is_mask_set_20000_01ebd8))(*(u32 *)(0xcc + a0), a1, a2, a3), iVar1 == 1)) &&
        (iVar1 = (*(code *)(&input_is_mask_set_10000_01ec68))(*(u32 *)(0xcc + a0), a1, a2, a3), iVar1 == 1)) {
        return 1;
    }
    return 0;
}

/*
 * FUN_8c0e25c0  0x8c0e25c0
 */
u32 FUN_8c0e25c0(int a0, u32 a1, u32 a2, u32 a3) {
    int iVar1;
    int a4;
    u32 uVar2;
    u32 uVar3;
    u32 *ar5_00;
    int iVar4;
    u32 auStack_20[2];

    auStack_20[0] = 0;
    if (*(int *)(a0 + 0xac8) != 0) {
        uVar3 = a1;
        iVar1 = get_field_24_05c284(*(u32 *)(a0 + 0xac8), a1);
        if (((iVar1 == 3) || (iVar1 == 5)) || (iVar1 == 7)) {
            uVar3 = 0;
            (**(code **)(*(int *)(*(int *)(a0 + 0xac8) + 8) + 0x84))(*(int *)(a0 + 0xac8), 0, a2, a3);
        }
        iVar1 = FUN_8c100cb4(a1);
        if (iVar1 == 1) {
            iVar1 = get_field_300_0bf154(a0 + 0xa4);
            a4 = FUN_8c0da588(a0 + 0xa4);
            for (iVar4 = 0; iVar4 < iVar1; iVar4 = iVar4 + 1) {
                uVar3 = 2;
                (**(code **)(*(int *)(a4 + 8) + 0x84))(a4, 2, a2, a3);
                a4 = list_node_next(a4);
            }
        }
        ar5_00 = auStack_20;
        iVar1 = FUN_8c100e4c(a1, ar5_00);
        if ((iVar1 == 1) && (*(int *)(a0 + 0x9d4) != 0)) {
            (**(code **)(*(int *)(*(int *)(a0 + 0x9d4) + 8) + 0x184))(*(int *)(a0 + 0x9d4), ar5_00, a2, a3);
        } else {
            ar5_00 = auStack_20;
            iVar1 = FUN_8c100e4c(a1, ar5_00);
            if ((iVar1 == 2) && (*(int *)(a0 + 0x9d4) != 0)) {
                (**(code **)(*(int *)(*(int *)(a0 + 0x9d4) + 8) + 0x188))(*(int *)(a0 + 0x9d4), ar5_00, a2, a3);
            }
        }
        iVar1 = FUN_8c100ce8(a1, ar5_00, a2, a3);
        if ((iVar1 == 1) && (*(int *)(a0 + 0x9d4) != 0)) {
            (**(code **)(*(int *)(*(int *)(a0 + 0x9d4) + 8) + 0x88))(*(int *)(a0 + 0x9d4), ar5_00, a2, a3);
        }
        FUN_8c0dc8fc(a0, a1, a2, a3);
        uVar3 = a1;
        FUN_8c0dc7e8(a0, a1, a2, a3);
        iVar1 = FUN_8c10031c(a1);
        if (iVar1 == 1) {
            iVar1 = (**(code **)(*(int *)(*(int *)(a0 + 0xac8) + 8) + 200))(*(int *)(a0 + 0xac8), uVar3, a2, a3);
            if ((iVar1 == 1) && (*(int *)(a0 + 0x9d4) == *(int *)(a0 + 0xac8))) {
                uVar3 = a1;
                FUN_8c0e4298(a0, a1, a2, a3);
                for (iVar1 = 0; iVar1 < 3; iVar1 = iVar1 + 1) {
                    uVar3 = 0;
                    FUN_8c0e2838(a0 + iVar1 * 0x16c + 0x22d48, 0);
                }
            } else {
                uVar3 = 2;
                FUN_8c021720(0x8c2b59d0, 2, a2, a3);
            }
        }
        iVar1 = FUN_8c0e252c(a1);
        if (iVar1 == 1) {
            uVar2 = get_field_cc_0dfee8(a1);
            uVar2 = FUN_8c01f528(uVar2);
            FUN_8c01d9e0();
        }
    }
    return 1;
}

/*
 * FUN_8c0e2838  0x8c0e2838
 * called by: FUN_8c0e25c0, FUN_8c0e2844
 */
int FUN_8c0e2838(int a0, u32 a1) {
    int iVar1;

    iVar1 = 0x160;
    *(u32 *)(0x160 + a0) = a1;
    return iVar1;
}

/*
 * FUN_8c0e2844  0x8c0e2844
 */
u32 FUN_8c0e2844(int a0) {
    int iVar1;

    ret_const_1_0dc548();
    for (iVar1 = 0; iVar1 < 3; iVar1 = iVar1 + 1) {
        FUN_8c0e2838(a0 + iVar1 * 0x16c + 0x22d48, 0);
    }
    return 1;
}

/*
 * FUN_8c0e28a0  0x8c0e28a0
 */
u32 FUN_8c0e28a0(int a0, u32 a1, u32 a2, u32 a3) {
    int iVar1;
    float fVar2;
    u64 in_dr0;
    u32 uVar5;
    double dVar3;
    float fVar6;
    double dVar4;
    u32 uVar7;
    double in_dr2;
    char cVar8;
    char cVar9;

    uVar5 = (u32)((u64)in_dr0 >> 0x20);
    cVar9 = '\0';
    cVar8 = '\0';
    iVar1 = FUN_8c100b20(a1);
    uVar7 = SUB84(in_dr2, 0);
    if (iVar1 == 1) {
        FUN_8c0dc27c();
        if (cVar9 == '\0') {
            in_dr2 = (double)CONCAT44(*(u32 *)(a0 + 0xa70), uVar7);
            dVar3 = (double)CONCAT44(0x40000000, uVar5);
        } else {
            in_dr2 = *(double *)(a0 + 0xa70);
            dVar3 = -1.400628561984079e-250;
        }
        if (cVar8 == '\0') {
            fVar6 = (float)((u64)dVar3 >> 0x20);
            fVar2 = SUB84(dVar3, 0) * fVar6;
            dVar3 = (double)CONCAT44(fVar6, fVar2);
            in_dr2 = (double)CONCAT44((float)((u64)in_dr2 >> 0x20) + fVar2, SUB84(in_dr2, 0));
        } else {
            dVar3 = dVar3 * dVar3;
            in_dr2 = in_dr2 + dVar3;
        }
        uVar5 = (u32)((u64)dVar3 >> 0x20);
        if (cVar9 == '\0') {
            *(int *)(a0 + 0xa70) = (int)((u64)in_dr2 >> 0x20);
        } else {
            *(double *)(a0 + 0xa70) = in_dr2;
        }
    } else {
        iVar1 = FUN_8c100b84(a1);
        uVar7 = SUB84(in_dr2, 0);
        if (iVar1 == 1) {
            FUN_8c0dc27c();
            if (cVar9 == '\0') {
                in_dr2 = (double)CONCAT44(*(u32 *)(a0 + 0xa70), uVar7);
                dVar3 = (double)CONCAT44(0x40000000, uVar5);
            } else {
                in_dr2 = *(double *)(a0 + 0xa70);
                dVar3 = -1.400628561984079e-250;
            }
            if (cVar8 == '\0') {
                fVar6 = (float)((u64)dVar3 >> 0x20);
                fVar2 = SUB84(dVar3, 0) * fVar6;
                dVar3 = (double)CONCAT44(fVar6, fVar2);
                in_dr2 = (double)CONCAT44((float)((u64)in_dr2 >> 0x20) + fVar2, SUB84(in_dr2, 0));
            } else {
                dVar3 = dVar3 * dVar3;
                in_dr2 = in_dr2 + dVar3;
            }
            uVar5 = (u32)((u64)dVar3 >> 0x20);
            if (cVar9 == '\0') {
                *(int *)(a0 + 0xa70) = (int)((u64)in_dr2 >> 0x20);
            } else {
                *(double *)(a0 + 0xa70) = in_dr2;
            }
        }
    }
    uVar7 = SUB84(in_dr2, 0);
    iVar1 = FUN_8c100be8(a1);
    if (iVar1 == 1) {
        FUN_8c0dc26c();
        if (cVar9 == '\0') {
            dVar3 = (double)CONCAT44(*(u32 *)(a0 + 0xa68), uVar7);
            dVar4 = (double)CONCAT44(0x40000000, uVar5);
        } else {
            dVar3 = *(double *)(a0 + 0xa68);
            dVar4 = -1.400628561984079e-250;
        }
        if (cVar8 == '\0') {
            dVar3 = (double)CONCAT44((float)((u64)dVar3 >> 0x20) + SUB84(dVar4, 0) * (float)((u64)dVar4 >> 0x20),
                                     SUB84(dVar3, 0));
        } else {
            dVar3 = dVar3 + dVar4 * dVar4;
        }
        if (cVar9 == '\0') {
            *(int *)(a0 + 0xa68) = (int)((u64)dVar3 >> 0x20);
        } else {
            *(double *)(a0 + 0xa68) = dVar3;
        }
    } else {
        iVar1 = FUN_8c100c34(a1);
        if (iVar1 == 1) {
            FUN_8c0dc26c();
            if (cVar9 == '\0') {
                dVar3 = (double)CONCAT44(*(u32 *)(a0 + 0xa68), uVar7);
                dVar4 = (double)CONCAT44(0x40000000, uVar5);
            } else {
                dVar3 = *(double *)(a0 + 0xa68);
                dVar4 = -1.400628561984079e-250;
            }
            if (cVar8 == '\0') {
                dVar3 = (double)CONCAT44((float)((u64)dVar3 >> 0x20) + SUB84(dVar4, 0) * (float)((u64)dVar4 >> 0x20),
                                         SUB84(dVar3, 0));
            } else {
                dVar3 = dVar3 + dVar4 * dVar4;
            }
            if (cVar9 == '\0') {
                *(int *)(a0 + 0xa68) = (int)((u64)dVar3 >> 0x20);
            } else {
                *(double *)(a0 + 0xa68) = dVar3;
            }
        }
    }
    FUN_8c0dc558(a0, a1, a2, a3);
    return 1;
}

/*
 * FUN_8c0e29dc  0x8c0e29dc
 */
u32 FUN_8c0e29dc(u32 a0, u32 a1, u32 a2, u32 a3) {
    int iVar1;

    iVar1 = FUN_8c0e2554(a1, a1, a2, a3);
    if (iVar1 == 1) {
        FUN_8c0e4348(a0, a1);
    }
    return 1;
}

/*
 * FUN_8c0e2a14  0x8c0e2a14
 */
int FUN_8c0e2a14(int *a0, u32 a1, u32 a2, u32 a3) {
    int iVar1;
    int *piVar2;
    u32 uVar3;
    u16 uVar4;
    u16 uVar5;
    double in_dr0;
    double dVar6;
    u32 in_fr3;
    bool bVar7;
    char cVar8;
    char cVar9;
    u32 auStack_18[2];

    cVar9 = '\0';
    cVar8 = '\0';
    uVar5 = 0;
    uVar4 = 0x80;
    iVar1 = a0[0x409];
    if (iVar1 == 0) {
        uVar3 = 0;
        FUN_8c0d0538(a0 + 0x4ec9, 0);
        (**(code **)(*a0 + 0x15c))(a0, uVar3, a2, a3);
        iVar1 = FUN_8c0e31e8(a1);
        if (iVar1 == 1) {
            a0[0x409] = 1;
            piVar2 = a0 + 0x412;
            if (cVar9 == '\0') {
                *piVar2 = 0x43df8000;
                in_dr0 = (double)CONCAT44(0x43df8000, SUB84(in_dr0, 0));
                a0[0x414] = 0x43df8000;
            } else {
                piVar2[0] = 0x43df8000;
                piVar2[1] = 0x1050;
                in_dr0 = 8.86201702588265e-311;
                a0[0x414] = 0x43df8000;
                a0[0x415] = 0x1050;
            }
        } else {
            iVar1 = FUN_8c0e319c(a1);
            if (iVar1 == 1) {
                iVar1 = a0[0x408];
                if (iVar1 == 0) {
                    a0[0x408] = 1;
                } else if (iVar1 == 1) {
                    a0[0x408] = 3;
                } else if (iVar1 == 3) {
                    a0[0x408] = 0;
                }
                a0[0x409] = 1;
                piVar2 = a0 + 0x412;
                if (cVar9 == '\0') {
                    *piVar2 = 0x43df8000;
                    in_dr0 = (double)CONCAT44(0x43df8000, SUB84(in_dr0, 0));
                    a0[0x414] = 0x43df8000;
                } else {
                    piVar2[0] = 0x43df8000;
                    piVar2[1] = 0x1050;
                    in_dr0 = 8.86201702588265e-311;
                    a0[0x414] = 0x43df8000;
                    a0[0x415] = 0x1050;
                }
            } else {
                iVar1 = FUN_8c0e3150(a1);
                if (iVar1 == 1) {
                    iVar1 = a0[0x408];
                    if (iVar1 == 0) {
                        a0[0x408] = 3;
                    } else if (iVar1 == 1) {
                        a0[0x408] = 0;
                    } else if (iVar1 == 3) {
                        a0[0x408] = 1;
                    }
                    a0[0x409] = 1;
                    piVar2 = a0 + 0x412;
                    if (cVar9 == '\0') {
                        *piVar2 = 0x43df8000;
                        in_dr0 = (double)CONCAT44(0x43df8000, SUB84(in_dr0, 0));
                        a0[0x414] = 0x43df8000;
                    } else {
                        piVar2[0] = 0x43df8000;
                        piVar2[1] = 0x1050;
                        in_dr0 = 8.86201702588265e-311;
                        a0[0x414] = 0x43df8000;
                        a0[0x415] = 0x1050;
                    }
                }
            }
        }
    } else {
        uVar3 = a1;
        if (iVar1 == 1) {
            in_dr0 = (double)CONCAT44(0x43c58000, a0[0x412]);
            if (((float)a0[0x412] == 395.0) && (iVar1 = FUN_8c0e30f0(a1), iVar1 == 1)) {
                a0[0x409] = 2;
            }
        } else if (iVar1 == 2) {
            iVar1 = FUN_8c0e319c(a1);
            if (iVar1 == 1) {
                iVar1 = a0[0x408];
                if (iVar1 == 0) {
                    a0[0x408] = 1;
                } else if (iVar1 == 1) {
                    a0[0x408] = 3;
                } else if (iVar1 == 3) {
                    a0[0x408] = 0;
                }
            } else {
                iVar1 = FUN_8c0e3150(a1);
                if (iVar1 == 1) {
                    iVar1 = a0[0x408];
                    if (iVar1 == 0) {
                        a0[0x408] = 3;
                    } else if (iVar1 == 1) {
                        a0[0x408] = 0;
                    } else if (iVar1 == 3) {
                        a0[0x408] = 1;
                    }
                }
            }
        }
    }
    iVar1 = FUN_8c0e30c8(a1);
    if (iVar1 == 1) {
        a0[0x409] = 3;
    }
    if (a0[0x409] == 2) {
        if (a0[0x408] == 3) {
            uVar3 = 0;
            FUN_8c0d0538(a0 + 0x4ec9, 0);
            (**(code **)(*a0 + 0x15c))(a0, uVar3, a2, a3);
        }
        if ((a0[0x408] == 3) && (iVar1 = FUN_8c0e30a0(a1), iVar1 == 1)) {
            if ((a0[0x8a04] == 1) && (a0[0x8a05] == 1)) {
                a0[0x8a04] = 0;
                a0[0x8a05] = 1;
            } else if ((a0[0x8a04] == 0) && (a0[0x8a05] == 1)) {
                a0[0x8a04] = 0;
                a0[0x8a05] = 0;
            } else if ((a0[0x8a04] == 0) && (a0[0x8a05] == 0)) {
                a0[0x8a04] = 1;
                a0[0x8a05] = 1;
            }
            if ((a0[0x8a04] == 1) || (a0[0x8a05] == 1)) {
                FUN_8c0d4f3c(a0 + 0x42b, uVar3, a2, a3);
            } else {
                FUN_8c0d4f70(a0 + 0x42b, uVar3, a2, a3);
            }
            uVar5 = 0x80;
            uVar4 = 0xff;
            auStack_18[0] = se_open_bank1(0x8c2b59d0);
            uVar3 = 3;
            se_play(0x8c2b59d0, auStack_18[0], 3);
            FUN_8c021a8c(0x8c2b59d0, auStack_18);
        } else if (a0[0x408] == 0) {
            iVar1 = FUN_8c0e3078(a1, uVar3, a2, a3);
            if (iVar1 == 1) {
                uVar3 = 1;
                FUN_8c0d0538(a0 + 0x4ec9, 1);
                uVar5 = 0x80;
                uVar4 = 0xff;
            } else {
                uVar3 = 0;
                FUN_8c0d0538(a0 + 0x4ec9, 0);
                uVar5 = 0;
                uVar4 = 0x80;
            }
            (**(code **)(*a0 + 0x15c))(a0, uVar3, a2, a3);
        } else if (a0[0x408] == 1) {
            iVar1 = FUN_8c0e3050(a1, uVar3, a2, a3);
            if (iVar1 == 1) {
                (**(code **)(*a0 + 0x158))(a0, uVar3, a2, a3);
                FUN_8c023040(a0 + 0x8bae, uVar3, a2, a3);
                if (cVar9 == '\0') {
                    in_dr0 = (double)CONCAT44((int)((u64)in_dr0 >> 0x20), in_fr3);
                    dVar6 = (double)CONCAT44(0x3f400000, a0[0x8c03]);
                } else {
                    dVar6 = 3.03505338272344e-309;
                }
                if (cVar8 == '\0') {
                    bVar7 = (float)((u64)in_dr0 >> 0x20) < SUB84(dVar6, 0) * (float)((u64)dVar6 >> 0x20);
                } else {
                    bVar7 = in_dr0 < dVar6 * dVar6;
                }
                uVar5 = 0x80;
                uVar4 = 0xff;
                if (bVar7) {
                    FUN_8c0d7508(a0 + 0x8bad, uVar3, a2);
                }
            } else {
                (**(code **)(*a0 + 0x15c))(a0, uVar3, a2, a3);
                uVar5 = 0;
                uVar4 = 0x80;
            }
            FUN_8c0d0538(a0 + 0x4ec9, 0);
        }
    }
    iVar1 = 0;
    if (a0[0x409] != 0) {
        *(u16 *)(a0 + 0x417) = uVar5;
        *(u16 *)(a0 + 0x418) = uVar5;
        *(u16 *)(a0 + 0x419) = uVar4;
        *(u16 *)(a0 + 0x41a) = uVar4;
        iVar1 = a0[0x408];
        if (iVar1 == 0) {
            *(u16 *)((int)a0 + 0x105e) = 0x40;
            *(u16 *)((int)a0 + 0x1062) = 0x20;
            *(u16 *)((int)a0 + 0x1066) = 0x20;
            iVar1 = 0x106a;
            *(u16 *)((int)a0 + 0x106a) = 0x40;
        } else if (iVar1 == 1) {
            *(u16 *)((int)a0 + 0x105e) = 0x60;
            *(u16 *)((int)a0 + 0x1062) = 0x40;
            *(u16 *)((int)a0 + 0x1066) = 0x40;
            iVar1 = 0x106a;
            *(u16 *)((int)a0 + 0x106a) = 0x60;
        } else if (iVar1 == 3) {
            *(u16 *)((int)a0 + 0x105e) = 0x20;
            *(u16 *)((int)a0 + 0x1062) = 0;
            *(u16 *)((int)a0 + 0x1066) = 0;
            iVar1 = 0x106a;
            *(u16 *)((int)a0 + 0x106a) = 0x20;
        }
    }
    return iVar1;
}

/*
 * FUN_8c0e3050  0x8c0e3050
 * called by: FUN_8c0e2a14, FUN_8c0e3210
 */
u32 FUN_8c0e3050(int a0, u32 a1, u32 a2, u32 a3) {
    u32 uVar1;

    uVar1 = (*(code *)(&input_is_mask_set_10_01f2b4))(*(u32 *)(0xcc + a0), a1, a2, a3);
    return uVar1;
}

/*
 * FUN_8c0e3078  0x8c0e3078
 * called by: FUN_8c0e2a14, FUN_8c0e3210
 */
u32 FUN_8c0e3078(int a0, u32 a1, u32 a2, u32 a3) {
    u32 uVar1;

    uVar1 = (*(code *)(&input_is_mask_set_10_01f2b4))(*(u32 *)(0xcc + a0), a1, a2, a3);
    return uVar1;
}

/*
 * FUN_8c0e30a0  0x8c0e30a0
 * called by: FUN_8c0e2a14, FUN_8c0e3210
 */
u32 FUN_8c0e30a0(int a0) {
    u32 uVar1;

    uVar1 = FUN_8c01f33c(*(u32 *)(0xcc + a0));
    return uVar1;
}

/*
 * FUN_8c0e30c8  0x8c0e30c8
 * called by: FUN_8c0e2a14, FUN_8c0e3210, FUN_8c0e5238
 */
u32 FUN_8c0e30c8(int a0) {
    u32 uVar1;

    uVar1 = FUN_8c01f270(*(u32 *)(0xcc + a0));
    return uVar1;
}

/*
 * FUN_8c0e30f0  0x8c0e30f0
 * called by: FUN_8c0e2a14, FUN_8c0e3210, FUN_8c0e5238
 */
u32 FUN_8c0e30f0(int a0) {
    int iVar1;

    iVar1 = FUN_8c01f2f8(*(u32 *)(0xcc + a0));
    if (((iVar1 != 0) && (iVar1 = FUN_8c01f0d0(*(u32 *)(0xcc + a0)), iVar1 != 0)) &&
        (iVar1 = FUN_8c01f1a4(*(u32 *)(0xcc + a0)), iVar1 != 0)) {
        return 1;
    }
    return 0;
}

/*
 * FUN_8c0e3150  0x8c0e3150
 * called by: FUN_8c0e2a14, FUN_8c0e3210
 */
u32 FUN_8c0e3150(int a0) {
    int iVar1;

    iVar1 = FUN_8c01f2f8(*(u32 *)(0xcc + a0));
    if ((iVar1 != 0) && (iVar1 = FUN_8c01f1e8(*(u32 *)(0xcc + a0)), iVar1 != 0)) {
        return 1;
    }
    return 0;
}

/*
 * FUN_8c0e319c  0x8c0e319c
 * called by: FUN_8c0e2a14, FUN_8c0e3210
 */
u32 FUN_8c0e319c(int a0) {
    int iVar1;

    iVar1 = FUN_8c01f2f8(*(u32 *)(0xcc + a0));
    if ((iVar1 != 0) && (iVar1 = FUN_8c01f118(*(u32 *)(0xcc + a0)), iVar1 != 0)) {
        return 1;
    }
    return 0;
}

/*
 * FUN_8c0e31e8  0x8c0e31e8
 * called by: FUN_8c0e2a14, FUN_8c0e3210, FUN_8c0e5238
 */
u32 FUN_8c0e31e8(int a0) {
    u32 uVar1;

    uVar1 = FUN_8c01f33c(*(u32 *)(0xcc + a0));
    return uVar1;
}

/*
 * FUN_8c0e3210  0x8c0e3210
 */
int FUN_8c0e3210(int a0, u32 a1, u32 a2, u32 a3) {
    int iVar1;
    u32 uVar2;
    u16 uVar3;
    u16 uVar4;
    double in_dr0;
    double dVar5;
    u32 in_fr3;
    bool bVar6;
    char cVar7;
    char cVar8;
    u32 auStack_18[2];

    cVar8 = '\0';
    cVar7 = '\0';
    uVar4 = 0;
    uVar3 = 0x80;
    iVar1 = *(int *)(a0 + 0x1024);
    if (iVar1 == 0) {
        FUN_8c0d0538(a0 + 0x13b24, 0);
        uVar2 = 0;
        FUN_8c0e015c(a0 + 0x13b8c, 0);
        iVar1 = FUN_8c0e31e8(a1);
        if (iVar1 == 1) {
            *(u32 *)(a0 + 0x1024) = 1;
            if (cVar8 == '\0') {
                *(u32 *)(a0 + 0x1048) = 0x43df8000;
                in_dr0 = (double)CONCAT44(0x43df8000, SUB84(in_dr0, 0));
                *(u32 *)(a0 + 0x1050) = 0x43df8000;
            } else {
                *(u64 *)(a0 + 0x1048) = 0x105043df8000;
                in_dr0 = 8.86201702588265e-311;
                *(u64 *)(a0 + 0x1050) = 0x105043df8000;
            }
        } else {
            iVar1 = FUN_8c0e319c(a1);
            if (iVar1 == 1) {
                iVar1 = *(int *)(a0 + 0x1020);
                if (iVar1 == 0) {
                    if (*(int *)(a0 + 0x226f4) == 1) {
                        *(u32 *)(a0 + 0x1020) = 4;
                    } else {
                        *(u32 *)(a0 + 0x1020) = 3;
                    }
                } else if (iVar1 == 3) {
                    *(u32 *)(a0 + 0x1020) = 0;
                } else if (iVar1 == 4) {
                    *(u32 *)(a0 + 0x1020) = 3;
                }
                *(u32 *)(a0 + 0x1024) = 1;
                if (cVar8 == '\0') {
                    *(u32 *)(a0 + 0x1048) = 0x43df8000;
                    in_dr0 = (double)CONCAT44(0x43df8000, SUB84(in_dr0, 0));
                    *(u32 *)(a0 + 0x1050) = 0x43df8000;
                } else {
                    *(u64 *)(a0 + 0x1048) = 0x105043df8000;
                    in_dr0 = 8.86201702588265e-311;
                    *(u64 *)(a0 + 0x1050) = 0x105043df8000;
                }
            } else {
                iVar1 = FUN_8c0e3150(a1);
                if (iVar1 == 1) {
                    iVar1 = *(int *)(a0 + 0x1020);
                    if (iVar1 == 0) {
                        *(u32 *)(a0 + 0x1020) = 3;
                    } else if (iVar1 == 3) {
                        if (*(int *)(a0 + 0x226f4) == 1) {
                            *(u32 *)(a0 + 0x1020) = 4;
                        } else {
                            *(u32 *)(a0 + 0x1020) = 0;
                        }
                    } else if (iVar1 == 4) {
                        *(u32 *)(a0 + 0x1020) = 0;
                    }
                    *(u32 *)(a0 + 0x1024) = 1;
                    if (cVar8 == '\0') {
                        *(u32 *)(a0 + 0x1048) = 0x43df8000;
                        in_dr0 = (double)CONCAT44(0x43df8000, SUB84(in_dr0, 0));
                        *(u32 *)(a0 + 0x1050) = 0x43df8000;
                    } else {
                        *(u64 *)(a0 + 0x1048) = 0x105043df8000;
                        in_dr0 = 8.86201702588265e-311;
                        *(u64 *)(a0 + 0x1050) = 0x105043df8000;
                    }
                }
            }
        }
    } else {
        uVar2 = a1;
        if (iVar1 == 1) {
            in_dr0 = (double)CONCAT44(0x43c58000, *(float *)(a0 + 0x1048));
            if ((*(float *)(a0 + 0x1048) == 395.0) && (iVar1 = FUN_8c0e30f0(a1), iVar1 == 1)) {
                *(u32 *)(a0 + 0x1024) = 2;
            }
        } else if (iVar1 == 2) {
            iVar1 = FUN_8c0e319c(a1);
            if (iVar1 == 1) {
                iVar1 = *(int *)(a0 + 0x1020);
                if (iVar1 == 0) {
                    if (*(int *)(a0 + 0x226f4) == 1) {
                        *(u32 *)(a0 + 0x1020) = 4;
                    } else {
                        *(u32 *)(a0 + 0x1020) = 3;
                    }
                } else if (iVar1 == 3) {
                    *(u32 *)(a0 + 0x1020) = 0;
                } else if (iVar1 == 4) {
                    *(u32 *)(a0 + 0x1020) = 3;
                }
            } else {
                iVar1 = FUN_8c0e3150(a1);
                if (iVar1 == 1) {
                    iVar1 = *(int *)(a0 + 0x1020);
                    if (iVar1 == 0) {
                        *(u32 *)(a0 + 0x1020) = 3;
                    } else if (iVar1 == 3) {
                        if (*(int *)(a0 + 0x226f4) == 1) {
                            *(u32 *)(a0 + 0x1020) = 4;
                        } else {
                            *(u32 *)(a0 + 0x1020) = 0;
                        }
                    } else if (iVar1 == 4) {
                        *(u32 *)(a0 + 0x1020) = 0;
                    }
                }
            }
        }
    }
    iVar1 = FUN_8c0e30c8(a1);
    if (iVar1 == 1) {
        *(u32 *)(a0 + 0x1024) = 3;
    }
    if (*(int *)(a0 + 0x1024) == 2) {
        if (*(int *)(a0 + 0x1020) == 3) {
            FUN_8c0d0538(a0 + 0x13b24, 0);
            uVar2 = 0;
            FUN_8c0e015c(a0 + 0x13b8c, 0);
        }
        if ((*(int *)(a0 + 0x1020) == 3) && (iVar1 = FUN_8c0e30a0(a1), iVar1 == 1)) {
            if ((*(int *)(a0 + 0x22810) == 1) && (*(int *)(a0 + 0x22814) == 1)) {
                *(u32 *)(a0 + 0x22810) = 0;
                *(u32 *)(a0 + 0x22814) = 1;
            } else if ((*(int *)(a0 + 0x22810) == 0) && (*(int *)(a0 + 0x22814) == 1)) {
                *(u32 *)(a0 + 0x22810) = 0;
                *(u32 *)(a0 + 0x22814) = 0;
            } else if ((*(int *)(a0 + 0x22810) == 0) && (*(int *)(a0 + 0x22814) == 0)) {
                *(u32 *)(a0 + 0x22810) = 1;
                *(u32 *)(a0 + 0x22814) = 1;
            }
            uVar4 = 0x80;
            uVar3 = 0xff;
            auStack_18[0] = se_open_bank1(0x8c2b59d0);
            uVar2 = 3;
            se_play(0x8c2b59d0, auStack_18[0], 3);
            FUN_8c021a8c(0x8c2b59d0, auStack_18);
        } else if (*(int *)(a0 + 0x1020) == 0) {
            iVar1 = FUN_8c0e3078(a1, uVar2, a2, a3);
            if (iVar1 == 1) {
                FUN_8c0d0538(a0 + 0x13b24, 1);
                uVar4 = 0x80;
                uVar3 = 0xff;
            } else {
                FUN_8c0d0538(a0 + 0x13b24, 0);
                uVar4 = 0;
                uVar3 = 0x80;
            }
            FUN_8c0e015c(a0 + 0x13b8c, 0);
        } else if (*(int *)(a0 + 0x1020) == 4) {
            iVar1 = FUN_8c0e3050(a1, uVar2, a2, a3);
            if (iVar1 == 1) {
                uVar2 = 1;
                FUN_8c0e015c(a0 + 0x13b8c, 1);
                FUN_8c023040(a0 + 0x22eb8, uVar2, a2, a3);
                if (cVar8 == '\0') {
                    in_dr0 = (double)CONCAT44((int)((u64)in_dr0 >> 0x20), in_fr3);
                    dVar5 = (double)CONCAT44(0x3f400000, *(u32 *)(a0 + 0x2300c));
                } else {
                    dVar5 = 3.03505338272344e-309;
                }
                if (cVar7 == '\0') {
                    bVar6 = (float)((u64)in_dr0 >> 0x20) < SUB84(dVar5, 0) * (float)((u64)dVar5 >> 0x20);
                } else {
                    bVar6 = in_dr0 < dVar5 * dVar5;
                }
                uVar4 = 0x80;
                uVar3 = 0xff;
                if (bVar6) {
                    FUN_8c0d7508(a0 + 0x22eb4, uVar2, a2);
                }
            } else {
                FUN_8c0e015c(a0 + 0x13b8c, 0);
                uVar4 = 0;
                uVar3 = 0x80;
            }
            FUN_8c0d0538(a0 + 0x13b24, 0);
        }
    }
    iVar1 = 0;
    if (*(int *)(a0 + 0x1024) != 0) {
        *(u16 *)(a0 + 0x105c) = uVar4;
        *(u16 *)(a0 + 0x1060) = uVar4;
        *(u16 *)(a0 + 0x1064) = uVar3;
        *(u16 *)(a0 + 0x1068) = uVar3;
        iVar1 = *(int *)(a0 + 0x1020);
        if (iVar1 == 0) {
            *(u16 *)(a0 + 0x105e) = 0x40;
            *(u16 *)(a0 + 0x1062) = 0x20;
            *(u16 *)(a0 + 0x1066) = 0x20;
            iVar1 = 0x106a;
            *(u16 *)(a0 + 0x106a) = 0x40;
        } else if (iVar1 == 3) {
            *(u16 *)(a0 + 0x105e) = 0x20;
            *(u16 *)(a0 + 0x1062) = 0;
            *(u16 *)(a0 + 0x1066) = 0;
            iVar1 = 0x106a;
            *(u16 *)(a0 + 0x106a) = 0x20;
        } else if (iVar1 == 4) {
            *(u16 *)(a0 + 0x105e) = 0xa0;
            *(u16 *)(a0 + 0x1062) = 0x80;
            *(u16 *)(a0 + 0x1066) = 0x80;
            iVar1 = 0x106a;
            *(u16 *)(a0 + 0x106a) = 0xa0;
        }
    }
    return iVar1;
}

/*
 * FUN_8c0e389c  0x8c0e389c
 * called by: Class_12b930_m1_0de1dc, Class_12b930_m3_0de4b0
 */
u32 *FUN_8c0e389c(int a0) {
    u32 *puVar1;
    float fVar2;

    puVar1 = *(u32 **)(a0 + 0x1024);
    if (puVar1 == (u32 *)0x1) {
        fVar2 = *(float *)(a0 + 0x1050) - 8.0;
        *(float *)(a0 + 0x1050) = fVar2;
        *(float *)(a0 + 0x1048) = fVar2;
        puVar1 = &g_8c0e398c;
        if (*(float *)(a0 + 0x1048) <= 395.0) {
            *(u32 *)(a0 + 0x1050) = 0x43c58000;
            puVar1 = (u32 *)0xc;
            *(u32 *)(a0 + 0x1048) = 0x43c58000;
        }
    } else if (puVar1 == (u32 *)0x3) {
        fVar2 = *(float *)(a0 + 0x1050) + 8.0;
        *(float *)(a0 + 0x1050) = fVar2;
        *(float *)(a0 + 0x1048) = fVar2;
        puVar1 = (u32 *)&g_8c0e3990;
        if (447.0 <= *(float *)(a0 + 0x1048)) {
            *(u32 *)(a0 + 0x1050) = 0x43df8000;
            *(u32 *)(a0 + 0x1048) = 0x43df8000;
            puVar1 = (u32 *)0x1024;
            *(u32 *)(a0 + 0x1024) = 0;
        }
    }
    return puVar1;
}

/*
 * FUN_8c0e3994  0x8c0e3994
 * called by: Class_12b930_m1_0de1dc, Class_12b930_m3_0de4b0
 */
u32 FUN_8c0e3994(int a0, code *a1, u32 a2, int a3) {
    int iVar1;
    int ar4_00;
    u32 uVar2;
    int iVar3;
    int *a4;
    int iVar4;
    code *ar5_00;
    int iVar5;
    float fVar6;
    u64 uVar7;
    float fVar9;
    double dVar8;
    double in_dr2;
    bool bVar10;
    char cVar11;
    char cVar12;
    u8 auStack_6c[16];
    u8 auStack_5c[16];
    u8 auStack_4c[16];
    u8 auStack_3c[4];
    u32 uStack_38;
    u8 auStack_2c[4];
    u32 uStack_28;
    u32 uStack_24;

    cVar12 = '\0';
    cVar11 = '\0';
    ar5_00 = a1;
    iVar1 = get_field_300_0bf154(a0 + 0xa4);
    ar4_00 = FUN_8c0da588(a0 + 0xa4);
    Vec3_ctor_zero(auStack_2c, ar5_00, a2);
    Vec3_ctor_zero(auStack_3c, ar5_00, a2);
    if (g_8c438280 == '\0') {
        uVar2 = Vec3_ctor_xyz(0x8c438284, ar5_00, a2, a3);
        a2 = 0x8c438274;
        ar5_00 = Vec3_dtor;
        global_list_push(uVar2, Vec3_dtor, 0x8c438274, a3);
        g_8c438280 = '\x01';
    }
    if (g_8c4382a0 == '\0') {
        uVar2 = Vec3_ctor_zero(0x8c4382a4, ar5_00, a2);
        a2 = 0x8c438294;
        ar5_00 = Vec3_dtor;
        global_list_push(uVar2, Vec3_dtor, 0x8c438294, a3);
        g_8c4382a0 = '\x01';
    }
    iVar5 = 0;
    do {
        if (iVar1 <= iVar5) {
            Vec3_dtor(auStack_3c, 0xffffffff, a2, a3);
            uVar2 = Vec3_dtor(auStack_2c, 0xffffffff, a2, a3);
            return uVar2;
        }
        iVar3 = get_field_24_05c284(ar4_00, ar5_00);
        if (iVar3 != 0xe) {
            FUN_8c02f670(ar4_00, ar5_00, a2, a3, auStack_4c);
            Vec3_assign(auStack_2c, auStack_4c, a2, a3);
            uVar2 = 0xffffffff;
            Vec3_dtor(auStack_4c, 0xffffffff, a2, a3);
            FUN_8c0e3e98(ar4_00, uVar2, a2, a3, auStack_5c);
            Vec3_assign(auStack_3c, auStack_5c, a2, a3);
            uVar2 = 0xffffffff;
            Vec3_dtor(auStack_5c, 0xffffffff, a2, a3);
            (**(code **)(*(int *)(ar4_00 + 8) + 0x13c))(ar4_00, uVar2, a2, a3);
            Vec3_assign(0x8c4382a4, auStack_6c, a2, a3);
            ar5_00 = (code *)0xffffffff;
            Vec3_dtor(auStack_6c, 0xffffffff, a2, a3);
            if (cVar12 == '\0') {
                uVar7 = CONCAT44(*(u32 *)a1, uStack_38);
            } else {
                uVar7 = *(u64 *)a1;
            }
            if (cVar11 != '\0' || (float)((u64)uVar7 >> 0x20) <= (float)uVar7) {
                if (cVar12 == '\0') {
                    uVar7 = CONCAT44(*(u32 *)a1, uStack_28);
                } else {
                    uVar7 = *(u64 *)a1;
                }
                if (cVar11 != '\0' || (float)uVar7 <= (float)((u64)uVar7 >> 0x20)) {
                    iVar4 = (**(code **)(*(int *)(ar4_00 + 8) + 0xb4))(ar4_00, ar5_00, a2, a3);
                    fVar6 = (float)((u64)uVar7 >> 0x20);
                    if (iVar4 == 1) {
                        iVar4 = (**(code **)(*(int *)(ar4_00 + 8) + 0x16c))(ar4_00, ar5_00, a2, a3);
                        if (iVar4 != 0) {
                            a4 = (int *)(**(code **)(*(int *)(ar4_00 + 8) + 0x16c))(ar4_00, ar5_00, a2, a3);
                            iVar4 = (**(code **)(*a4 + 0x28))(a4, ar5_00, a2, a3);
                            if (iVar4 == 1) {
                                (**(code **)(*(int *)(ar4_00 + 8) + 0x118))(ar4_00, ar5_00, a2, a3);
                                a2 = 4;
                                ar5_00 = (code *)auStack_2c;
                                a3 = ar4_00;
                                FUN_8c0d4c74(a1, ar5_00, 4, ar4_00);
                                goto LAB_8c0e3d7e;
                            }
                        }
                        if (iVar3 == 5) {
                            (**(code **)(*(int *)(ar4_00 + 8) + 0x118))(ar4_00, ar5_00, a2, a3);
                            a2 = 3;
                            ar5_00 = (code *)auStack_2c;
                            a3 = ar4_00;
                            FUN_8c0d4c74(a1, ar5_00, 3, ar4_00);
                        } else {
                            (**(code **)(*(int *)(ar4_00 + 8) + 0x118))(ar4_00, ar5_00, a2, a3);
                            if (cVar12 == '\0') {
                                fVar9 = 0.8;
                            } else {
                                fVar6 = 0.8;
                                fVar9 = -1.5061567e-31;
                            }
                            if (cVar11 == '\0' && fVar9 < fVar6) {
                                ar5_00 = (code *)0x8c4382a4;
                                FUN_8c022dac(0x8c438284, 0x8c4382a4, a2, a3);
                                if (cVar12 == '\0') {
                                    fVar6 = fVar9;
                                    fVar9 = 10.0;
                                } else {
                                    fVar6 = 10.0;
                                    fVar9 = 2.18603e-43;
                                }
                                if (cVar11 == '\0' && fVar6 < fVar9) {
                                    (**(code **)(*(int *)(ar4_00 + 8) + 0x118))(ar4_00, ar5_00, a2, a3);
                                    a2 = 3;
                                    ar5_00 = (code *)auStack_2c;
                                    a3 = ar4_00;
                                    FUN_8c0d4c74(a1, ar5_00, 3, ar4_00);
                                    goto LAB_8c0e3d7e;
                                }
                            }
                            (**(code **)(*(int *)(ar4_00 + 8) + 0x118))(ar4_00, ar5_00, a2, a3);
                            if (cVar12 == '\0') {
                                fVar6 = 0.8;
                            } else {
                                fVar9 = 0.8;
                                fVar6 = -1.5061567e-31;
                            }
                            if (cVar11 == '\0' && fVar9 < fVar6) {
                                ar5_00 = (code *)0x8c4382a4;
                                FUN_8c022dac(0x8c438284, 0x8c4382a4, a2, a3);
                                if (cVar12 == '\0') {
                                    fVar9 = 10.0;
                                } else {
                                    fVar6 = 10.0;
                                    fVar9 = 2.18603e-43;
                                }
                                if (cVar11 == '\0' && fVar6 < fVar9) {
                                    (**(code **)(*(int *)(ar4_00 + 8) + 0x118))(ar4_00, ar5_00, a2, a3);
                                    a2 = 2;
                                    ar5_00 = (code *)auStack_2c;
                                    a3 = ar4_00;
                                    FUN_8c0d4c74(a1, ar5_00, 2, ar4_00);
                                    goto LAB_8c0e3d7e;
                                }
                            }
                            (**(code **)(*(int *)(ar4_00 + 8) + 0x118))(ar4_00, ar5_00, a2, a3);
                            a2 = 0;
                            ar5_00 = (code *)auStack_2c;
                            a3 = ar4_00;
                            FUN_8c0d4c74(a1, ar5_00, 0, ar4_00);
                        }
                    }
                }
            }
        LAB_8c0e3d7e:
            if (cVar12 == '\0') {
                uVar7 = CONCAT44(*(u32 *)a1, uStack_38);
            } else {
                uVar7 = *(u64 *)a1;
            }
            if (cVar11 != '\0' || (float)uVar7 <= (float)((u64)uVar7 >> 0x20)) {
                if (cVar12 == '\0') {
                    uVar7 = CONCAT44(*(u32 *)a1, uStack_28);
                } else {
                    uVar7 = *(u64 *)a1;
                }
                if ((cVar11 != '\0' || (float)((u64)uVar7 >> 0x20) <= (float)uVar7) &&
                    (iVar4 = (**(code **)(*(int *)(ar4_00 + 8) + 0xb4))(ar4_00, ar5_00, a2, a3), iVar4 == 1)) {
                    if (iVar3 == 5) {
                        (**(code **)(*(int *)(ar4_00 + 8) + 0x118))(ar4_00, ar5_00, a2, a3);
                        a2 = 1;
                        ar5_00 = (code *)auStack_3c;
                        a3 = ar4_00;
                        FUN_8c0d4c74(a1, ar5_00, 1, ar4_00);
                    }
                    goto LAB_8c0e3e34;
                }
            }
            if (cVar12 == '\0') {
                uVar7 = CONCAT44(*(u32 *)a1, uStack_28);
            } else {
                uVar7 = *(u64 *)a1;
            }
            if (cVar11 != '\0' || (float)uVar7 <= (float)((u64)uVar7 >> 0x20)) {
                if (cVar12 == '\0') {
                    in_dr2 = (double)CONCAT44(uStack_28, SUB84(in_dr2, 0));
                    dVar8 = (double)CONCAT44(0x41200000, *(u32 *)a1);
                } else {
                    in_dr2 = (double)CONCAT44(uStack_24, uStack_28);
                    dVar8 = 5.94698645594833e-312;
                }
                if (cVar11 == '\0') {
                    bVar10 = (float)((u64)in_dr2 >> 0x20) < SUB84(dVar8, 0) - (float)((u64)dVar8 >> 0x20);
                } else {
                    bVar10 = in_dr2 < dVar8 - dVar8;
                }
                if (!bVar10) {
                    (**(code **)(*(int *)(ar4_00 + 8) + 0x118))(ar4_00, ar5_00, a2, a3);
                    a2 = 0;
                    ar5_00 = (code *)auStack_2c;
                    a3 = ar4_00;
                    FUN_8c0d4c74(a1, ar5_00, 0, ar4_00);
                }
            }
        }
    LAB_8c0e3e34:
        ar4_00 = list_node_next(ar4_00);
        iVar5 = iVar5 + 1;
    } while (true);
}

/*
 * FUN_8c0e3e98  0x8c0e3e98
 * called by: FUN_8c0e3994
 */
u32 FUN_8c0e3e98(int a0, u32 unused_a1, u32 a2, u32 a3, u32 s0) {
    u32 uVar1;

    uVar1 = Vec3_ctor_copy(s0, a0 + 0x40, a2, a3);
    return uVar1;
}

/*
 * FUN_8c0e3ebc  0x8c0e3ebc
 * called by: FUN_8c0de6d0, FUN_8c0deb60, FUN_8c0def78, FUN_8c0df250, FUN_8c0df668
 */
u32 *FUN_8c0e3ebc(int a0, u32 *a1, u32 *a2) {
    if ((*(int *)(a0 + 0x22810) == 1) && (*(int *)(a0 + 0x22814) == 1)) {
        *a1 = 0x3f800000;
        *a2 = 0x3e99999a;
        return &g_8c0e3f14;
    }
    if ((*(int *)(a0 + 0x22810) == 0) && (*(int *)(a0 + 0x22814) == 1)) {
        *a1 = 0x3f666666;
        *a2 = 0x3e3851ec;
        return &g_8c0e3f1c;
    }
    *a1 = 0x3dcccccd;
    *a2 = 0x3dcccccd;
    return &g_8c0e3f20;
}

/*
 * FUN_8c0e3f24  0x8c0e3f24
 * called by: FUN_8c0de6d0, FUN_8c0deb60, FUN_8c0def78, FUN_8c0df250, FUN_8c0df668, FUN_8c0dff1c
 */
u32 FUN_8c0e3f24(int a0) {
    u32 r5;
    u32 r6;
    u32 r7;
    int iVar1;
    u32 uVar2;
    u32 *ar5_00;
    u8 *ar6_00;
    u32 in_PR;
    char cVar3;
    u32 in_stack_ffffffd8;
    u32 uStack_1c;
    u32 uStack_18;
    u32 uStack_14;
    u32 uStack_10;

    cVar3 = '\0';
    ar6_00 = &stack0xffffffd8;
    iVar1 = a0;
    uStack_10 = in_PR;
    if ((*(int *)(a0 + 0x22810) == 1) && (*(int *)(a0 + 0x22814) == 1)) {
        FUN_8c2219a8(a0, r5, r6, r7, in_stack_ffffffd8);
        FUN_8c214158(iVar1, r5, r6, r7, in_stack_ffffffd8);
        if (cVar3 == '\0') {
            uStack_1c = *(u32 *)(a0 + 0x227f0);
            uStack_18 = *(u32 *)(a0 + 0x227f4);
            uStack_14 = *(u32 *)(a0 + 0x227f8);
        } else {
            uStack_1c = (u32) * (u64 *)(a0 + 0x227f0);
            uStack_18 = (u32) * (u64 *)(a0 + 0x227f4);
            uStack_14 = (u32) * (u64 *)(a0 + 0x227f8);
            uStack_10 = (u32)((u64) * (u64 *)(a0 + 0x227f8) >> 0x20);
        }
    } else if ((*(int *)(a0 + 0x22810) == 0) && (*(int *)(a0 + 0x22814) == 1)) {
        FUN_8c2219a8(a0, r5, r6, r7, in_stack_ffffffd8);
        FUN_8c214158(iVar1, r5, r6, r7, in_stack_ffffffd8);
        if (cVar3 == '\0') {
            uStack_1c = *(u32 *)(a0 + 0x22800);
            uStack_18 = *(u32 *)(a0 + 0x22804);
            uStack_14 = *(u32 *)(a0 + 0x22808);
        } else {
            uStack_1c = (u32) * (u64 *)(a0 + 0x22800);
            uStack_18 = (u32) * (u64 *)(a0 + 0x22804);
            uStack_14 = (u32) * (u64 *)(a0 + 0x22808);
            uStack_10 = (u32)((u64) * (u64 *)(a0 + 0x22808) >> 0x20);
        }
    } else {
        FUN_8c2219a8(a0, r5, r6, r7, in_stack_ffffffd8);
        FUN_8c214158(iVar1, r5, r6, r7, in_stack_ffffffd8);
        if (cVar3 == '\0') {
            uStack_1c = *(u32 *)(a0 + 0x227f0);
            uStack_18 = *(u32 *)(a0 + 0x227f4);
            uStack_14 = *(u32 *)(a0 + 0x227f8);
        } else {
            uStack_1c = (u32) * (u64 *)(a0 + 0x227f0);
            uStack_18 = (u32) * (u64 *)(a0 + 0x227f4);
            uStack_14 = (u32) * (u64 *)(a0 + 0x227f8);
            uStack_10 = (u32)((u64) * (u64 *)(a0 + 0x227f8) >> 0x20);
        }
    }
    FUN_8c22194e(iVar1, r5, r6, r7, in_stack_ffffffd8);
    uVar2 = 1;
    FUN_8c22195c(1, r5, r6, r7, in_stack_ffffffd8);
    FUN_8c2140fe(uVar2, r5, r6, r7, in_stack_ffffffd8);
    uVar2 = 1;
    FUN_8c21410c(1, r5, r6, r7, in_stack_ffffffd8);
    FUN_8c2219f6();
    FUN_8c2141a6();
    ar5_00 = &uStack_1c;
    uVar2 = 0;
    FUN_8c21279c(0, ar5_00, &stack0xffffffd8, r7, in_stack_ffffffd8);
    FUN_8c219038();
    FUN_8c21907e();
    FUN_8c219070();
    FUN_8c217ebc();
    FUN_8c217f02();
    uVar2 = FUN_8c217ef4();
    return uVar2;
}

/*
 * FUN_8c0e4198  0x8c0e4198
 * called by: FUN_8c0de6d0, FUN_8c0deb60, FUN_8c0def78, FUN_8c0df250, FUN_8c0df668
 */
u32 FUN_8c0e4198(int a0, u32 a1, u32 a2, u32 a3) {
    int iVar1;
    u32 uVar2;
    u32 ar5_00;
    double *pdVar3;
    double *pdVar4;
    u64 in_dr0;
    double dVar5;
    u32 in_fr3;
    double dVar6;
    u32 in_fr15;
    double in_xd14;
    char cVar7;
    char cVar8;
    u32 in_stack_ffffffd0;
    double dStack_30;

    uVar2 = (u32)((u64)in_dr0 >> 0x20);
    cVar8 = '\0';
    cVar7 = '\0';
    ar5_00 = a1;
    iVar1 = FUN_8c015bb8(a1);
    iVar1 = **(int **)(*(int *)(iVar1 + 0x2c) + 4);
    if (cVar8 == '\0') {
        in_fr15 = *(u32 *)(iVar1 + 0x24);
    } else {
        in_xd14 = *(double *)(iVar1 + 0x24);
    }
    pdVar3 = (double *)(iVar1 + 0x24);
    pdVar4 = (double *)(iVar1 + 0x54);
    FUN_8c0bf0e8(a0 + 0x13b24, ar5_00, a2, a3, in_stack_ffffffd0);
    if (cVar8 == '\0') {
        dVar6 = (double)CONCAT44(*(u32 *)pdVar3, in_fr3);
        dVar5 = (double)CONCAT44(0x4101999a, uVar2);
    } else {
        dVar6 = *pdVar3;
        dVar5 = 2.99312289147034e-309;
    }
    if (cVar7 == '\0') {
        dVar6 = (double)CONCAT44((float)((u64)dVar6 >> 0x20) + SUB84(dVar5, 0) * (float)((u64)dVar5 >> 0x20),
                                 SUB84(dVar6, 0));
    } else {
        dVar6 = dVar6 + dVar5 * dVar5;
    }
    if (cVar8 == '\0') {
        *(int *)pdVar3 = (int)((u64)dVar6 >> 0x20);
        *(u32 *)pdVar4 = *(u32 *)pdVar3;
    } else {
        *pdVar3 = dVar6;
        *pdVar4 = *pdVar3;
    }
    FUN_8c01538c(a0 + 0x226fc, ar5_00, a2);
    uVar2 = 0;
    FUN_8c256328(0, ar5_00, a2, a3, in_stack_ffffffd0);
    FUN_8c019058();
    FUN_8c015af8(a1, ar5_00, a2, a3);
    FUN_8c256210(1);
    if (cVar8 == '\0') {
        dStack_30 = (double)CONCAT44(pdVar3, in_fr15);
        *(u32 *)pdVar4 = in_fr15;
    } else {
        *pdVar4 = in_xd14;
        dStack_30 = in_xd14;
    }
    if (cVar8 == '\0') {
        *(u32 *)pdVar3 = in_stack_ffffffd0;
    } else {
        *pdVar3 = dStack_30;
    }
    return 0;
}

/*
 * FUN_8c0e4298  0x8c0e4298
 * called by: FUN_8c0e1f90, FUN_8c0e25c0
 */
u32 FUN_8c0e4298(int *a0, u32 a1, u32 a2, u32 a3) {
    int iVar1;
    u32 uVar2;

    uVar2 = a1;
    iVar1 = (*(code *)(&get_field_24_05c284))(*(u32 *)(0x9d4 + (int)a0), a1, a2, a3);
    if ((((iVar1 == 2) || (iVar1 == 3)) || (iVar1 == 5)) || (iVar1 == 1)) {
        uVar2 = (**(code **)(*a0 + 0x58))(a0, uVar2, a2, a3);
        FUN_8c0e433c(a1, uVar2);
        uVar2 = 0;
        FUN_8c0e4330(a1, 0);
        uVar2 = FUN_8c1006bc(a1);
    } else {
        uVar2 = FUN_8c021720(0x8c2b59d0, 2, a2, a3);
    }
    return uVar2;
}

/*
 * FUN_8c0e4330  0x8c0e4330
 * called by: FUN_8c0e4298, FUN_8c0e5238, FUN_8c0e8280
 */
int FUN_8c0e4330(int a0, u32 a1) {
    int iVar1;

    iVar1 = 0x128;
    *(u32 *)(0x128 + a0) = a1;
    return iVar1;
}

/*
 * FUN_8c0e433c  0x8c0e433c
 * called by: FUN_8c0e4298
 */
int FUN_8c0e433c(int a0, u32 a1) {
    int iVar1;

    iVar1 = 0xd4;
    *(u32 *)(0xd4 + a0) = a1;
    return iVar1;
}

/*
 * FUN_8c0e4348  0x8c0e4348
 * called by: FUN_8c0e1f90, FUN_8c0e29dc
 */
u32 FUN_8c0e4348(int a0, u32 a1) {
    u32 uVar1;

    FUN_8c0c51c4(a1);
    uVar1 = FUN_8c0d6a20(a0 + 0xa68);
    return uVar1;
}

/*
 * FUN_8c0e4378  0x8c0e4378
 * name hint from a string it uses: SoilTank
 * called by: FUN_8c0c5340
 * strings: "SoilTank"
 */
u32 *FUN_8c0e4378(u32 *a0) {
    code *pcVar1;
    code *pcVar2;
    u32 uVar3;
    int iVar4;
    int iVar5;
    u32 in_fr1;
    char cVar6;

    cVar6 = '\0';
    FUN_8c0d9c80(a0, "SoilTank", 1, 0);
    *a0 = &g_8c12b758;
    uVar3 = 0x24;
    pcVar2 = FUN_8c0e468c;
    pcVar1 = FUN_8c0d611c;
    FUN_8c010120(a0 + 0x41c, FUN_8c0d611c, FUN_8c0e468c, 0x24, 3);
    FUN_8c015224(a0 + 0x437, pcVar1);
    FUN_8c015ab8(a0 + 0x439);
    Vec3_ctor_zero(a0 + 0x43b, pcVar1, pcVar2);
    Vec3_ctor_zero(a0 + 0x43f, pcVar1, pcVar2);
    uVar3 = 0xc;
    pcVar2 = free_if_nonnull_wrap_0d6ef8;
    pcVar1 = FUN_8c0d6ee0;
    FUN_8c010120(a0 + 0x443, FUN_8c0d6ee0, free_if_nonnull_wrap_0d6ef8, 0xc, 100);
    FUN_8c0d5e9c(a0 + 0x56f, pcVar1, pcVar2);
    uVar3 = 0x18;
    pcVar2 = free_if_nonnull_wrap_0cffc8;
    pcVar1 = FUN_8c02145c;
    FUN_8c010120(a0 + 0x578, FUN_8c02145c, free_if_nonnull_wrap_0cffc8, 0x18, 1);
    FUN_8c0e5c4c(a0, pcVar1, pcVar2, uVar3);
    if (cVar6 == '\0') {
        a0[0x2e9] = 0x41f00000;
        a0[0x2af] = 0x45176000;
        a0[0x2b0] = 0x44898000;
        a0[0x2b1] = 0x44c80000;
    } else {
        *(u64 *)(a0 + 0x2e9) = 0xabc41f00000;
        *(u64 *)(a0 + 0x2af) = 0xac045176000;
        *(u64 *)(a0 + 0x2b0) = 0xac444898000;
        in_fr1 = 0x44c80000;
        *(u64 *)(a0 + 0x2b1) = 0x42c8000044c80000;
    }
    for (iVar4 = 0; iVar4 < 10; iVar4 = iVar4 + 1) {
        for (iVar5 = 0; iVar5 < 10; iVar5 = iVar5 + 1) {
            if (cVar6 == '\0') {
                a0[iVar4 * 0x1e + iVar5 * 3 + 0x443] = 0x42c80000;
            } else {
                in_fr1 = 0x42c80000;
                *(u64 *)(a0 + iVar4 * 0x1e + iVar5 * 3 + 0x443) = 0x111042c80000;
            }
        }
        a0[iVar4 * 0x1e + iVar5 * 3 + 0x444] = 0;
    }
    if (cVar6 == '\0') {
        a0[0x20] = 0x430c0000;
        a0[0x21] = 0x42c80000;
        a0[0x23] = 0x43a00000;
        a0[0x24] = 0x42e00000;
    } else {
        *(u64 *)(a0 + 0x20) = 0x84430c0000;
        *(u64 *)(a0 + 0x21) = 0x111042c80000;
        *(u64 *)(a0 + 0x23) = 0x9043a00000;
        in_fr1 = 0x42e00000;
        *(u64 *)(a0 + 0x24) = 0x10e842e00000;
    }
    a0[0x43a] = 0;
    if (cVar6 == '\0') {
        a0[0x25] = 0x41000000;
    } else {
        in_fr1 = 0x41000000;
        *(u64 *)(a0 + 0x25) = 0x9841000000;
    }
    if (cVar6 == '\0') {
        a0[0x26] = 0x3f800000;
        a0[0x27] = 0x41300000;
        a0[0x28] = 0x40400000;
    } else {
        *(u64 *)(a0 + 0x26) = CONCAT44(0x3f800000, in_fr1);
        *(u64 *)(a0 + 0x27) = 0xa041300000;
        *(u64 *)(a0 + 0x28) = 0x4f222fe640400000;
    }
    return a0;
}

/*
 * FUN_8c0e462c  0x8c0e462c
 * called by: Class_12b758_m0_0e46cc
 */
int FUN_8c0e462c(int a0, u32 a1, u32 a2, u32 a3) {
    u32 ar5_00;
    u32 in_stack_fffffff4;
    u32 ain0;

    ain0 = CONCAT22((short)((u32)in_stack_fffffff4 >> 0x10), (u16)a1);
    if (a0 != 0) {
        Vec3_dtor(a0 + 0x10, 0xffffffff, a2, a3);
        free_if_nonnull_wrap_016bfc(a0 + 8, 0xffffffff, a2, a3);
        ar5_00 = 0xffffffff;
        free_if_nonnull_wrap_0153e4(a0, 0xffffffff, a2, a3);
        if (0 < (short)ain0) {
            free_if_nonnull(a0);
        }
    }
    return a0;
}

/*
 * FUN_8c0e468c  0x8c0e468c
 */
int FUN_8c0e468c(int a0, u32 a1, u32 a2, u32 a3) {
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
 * Class_12b758_m0_0e46cc  0x8c0e46cc
 * called by: Class_12b388_m0_0c5928
 */
u32 *Class_12b758_m0_0e46cc(u32 *a0, u32 a1) {
    u32 uVar1;
    u32 uVar2;
    u32 ar7_00;
    u32 in_stack_fffffff4;
    u32 ain0;

    ain0 = CONCAT22((short)((u32)in_stack_fffffff4 >> 0x10), (u16)a1);
    if (a0 != NULL) {
        *a0 = &g_8c12b758;
        uVar2 = 1;
        uVar1 = 0x18;
        vec_delete_array(a0 + 0x578, free_if_nonnull_wrap_0cffc8, 0x18, 1);
        FUN_8c0e462c(a0 + 0x56f, 0xffffffff, uVar1, uVar2);
        uVar2 = 100;
        uVar1 = 0xc;
        vec_delete_array(a0 + 0x443, free_if_nonnull_wrap_0d6ef8, 0xc, 100);
        Vec3_dtor(a0 + 0x43f, 0xffffffff, uVar1, uVar2);
        Vec3_dtor(a0 + 0x43b, 0xffffffff, uVar1, uVar2);
        free_if_nonnull_wrap_016bfc(a0 + 0x439, 0xffffffff, uVar1, uVar2);
        free_if_nonnull_wrap_0153e4(a0 + 0x437, 0xffffffff, uVar1, uVar2);
        ar7_00 = 3;
        uVar2 = 0x24;
        vec_delete_array(a0 + 0x41c, FUN_8c0e468c, 0x24, 3);
        uVar1 = 0;
        Class_12bb08_m0_0da208(a0, 0, uVar2, ar7_00);
        if (0 < (short)ain0) {
            free_if_nonnull(a0);
        }
    }
    return a0;
}

/*
 * CSoilTank_Create  0x8c0e47d0
 * strings: "musikago.nj"; "GRAPHICS\\ENV"; "musikago.nj"; "Failed to load:CSoilTank::Create()" ...
 */
u32 CSoilTank_Create(int a0, u32 a1, u32 a2) {
    int iVar1;
    int *ar7_00;
    u32 ar5_00;
    u8 **ar5_01;
    u8 *ar5_02;
    char *pcVar2;
    u32 uVar3;
    u32 *puVar4;
    u32 a7;
    u32 uVar5;
    u32 uVar6;
    u32 in_fr1;
    char cVar7;
    u32 uStack_44;
    u32 uStack_40;
    u32 uStack_3c;
    u32 uStack_34;
    u32 uStack_30;
    u32 uStack_2c;
    u32 uStack_28;
    u32 uStack_24;

    cVar7 = '\0';
    uVar3 = a1;
    Vec3_ctor_zero(&uStack_30, a1, a2);
    Vec3_set_zero(&uStack_3c);
    uStack_40 = 0;
    uStack_44 = 0;
    iVar1 = FUN_8c0209fc(a1, "musikago.nj", "GRAPHICS\\ENV", &uStack_40);
    if (iVar1 == 0) {
        report_error_message("musikago.nj", "Failed to load:CSoilTank::Create()", 0, 2);
    }
    puVar4 = &uStack_44;
    pcVar2 = "GRAPHICS\\ENV";
    iVar1 = FUN_8c020af4(a1, "musikago.nj", "GRAPHICS\\ENV", puVar4);
    if (iVar1 == 0) {
        puVar4 = (u32 *)0x2;
        pcVar2 = NULL;
        report_error_message("musikago.nj", "Failed NJTL:CSoilTank::Create()", 0, 2);
    }
    FUN_8c015ad4(a0 + 0x30, uStack_40, pcVar2);
    a7 = 8;
    uVar3 = 0x8c4312a8;
    FUN_8c239170(0x8c437598, 0x8c4375a0, 0x8c4312a8, 8);
    for (uVar5 = 0; uVar5 < 8; uVar5 = uVar5 + 1) {
        *(u32 *)(uVar5 * 0xc + 0x8c4375a4) = *(u32 *)(uVar5 * 0xc + 0x8c4375a4) | 0x80000000;
    }
    ar5_00 = 0x8c437598;
    (**(code **)(*(int *)(a0 + 0x28) + 8))((int *)(a0 + 0x28), 0x8c437598, uVar3, a7);
    get_field_4_0253e4(a0 + 0x28, ar5_00, uVar3, a7);
    uVar3 = get_field_4_0253e4(a0 + 0x28, ar5_00, uVar3, a7);
    pcVar2 = "GRAPHICS\\ENV";
    iVar1 = FUN_8c02100c(a1, "musikago.pvm", "GRAPHICS\\ENV", uVar3);
    if (iVar1 == 0) {
        uVar3 = 2;
        pcVar2 = NULL;
        report_error_message("Failed to load soiltank textuer..", &g_8c13f91d, 0, 2);
    }
    SoilTank_Createt(a0 + 0x15bc, a1);
    ar5_01 = &PTR_PTR_8c13f1a4;
    (**(code **)(*(int *)(a0 + 0x10dc) + 8))((int *)(a0 + 0x10dc), &PTR_PTR_8c13f1a4, pcVar2, uVar3);
    ar7_00 = (int *)get_field_4_0253e4(a0 + 0x10dc, ar5_01, pcVar2, uVar3);
    uVar5 = 0;
    while (uVar6 = uVar5, uVar6 < (u32)ar7_00[1]) {
        *(u32 *)(uVar6 * 0xc + *ar7_00 + 4) = *(u32 *)(uVar6 * 0xc + *ar7_00 + 4) | 0x80000000;
        uVar5 = uVar6 + 1;
    }
    pcVar2 = "GRAPHICS\\ENV";
    iVar1 = FUN_8c020ef0(a1, "SPRAY_MIST", "GRAPHICS\\ENV", ar7_00);
    if (iVar1 == 0) {
        ar7_00 = (int *)0x2;
        pcVar2 = NULL;
        report_error_message("Failed to load mist textuer..", "CSoilTank::Create()", 0, 2);
    }
    ar5_02 = &g_8c13f268;
    FUN_8c015ad4(a0 + 0x10e4, &g_8c13f268, pcVar2);
    iVar1 = FUN_8c015bb8(a0 + 0x10e4);
    iVar1 = thunk_FUN_8c0151e8(*(u32 *)(*(int *)(iVar1 + 4) + 4), 0x17);
    *(int *)(a0 + 0x10e8) = iVar1 + 4;
    if (cVar7 == '\0') {
        uStack_2c = 0;
        uVar3 = in_fr1;
    } else {
        uStack_24 = 0xc2700000;
        uVar3 = 0xc2700000;
        uStack_2c = in_fr1;
    }
    uStack_28 = 0xbf800000;
    uStack_3c = 0xc2700000;
    if (cVar7 == '\0') {
        uStack_34 = 0;
        uStack_30 = uStack_2c;
    } else {
        uStack_30 = 0;
        uStack_34 = uVar3;
    }
    FUN_8c0d167c(&uStack_30, a0 + 0x10fc, &uStack_3c, ar7_00);
    if (cVar7 == '\0') {
        uStack_2c = 0;
        uStack_34 = uVar3;
    } else {
        uStack_24 = 0xc2700000;
        uStack_34 = 0xc2700000;
        uStack_2c = uVar3;
    }
    uStack_28 = 0xbf800000;
    uStack_3c = 0xc2700000;
    if (cVar7 == '\0') {
        uStack_34 = 0;
        uStack_30 = uStack_2c;
    } else {
        uStack_30 = 0;
    }
    puVar4 = &uStack_3c;
    FUN_8c0d167c(&uStack_30, a0 + 0x10ec, puVar4, ar7_00);
    object_dtor_delete(&uStack_3c, 0xffffffff, puVar4, ar7_00);
    uVar3 = Vec3_dtor(&uStack_30, 0xffffffff, puVar4, ar7_00);
    return uVar3;
}

/*
 * Class_12b758_m1_0e4b5c  0x8c0e4b5c
 */
u32 Class_12b758_m1_0e4b5c(int a0, u32 *a1, u32 a2, u32 a3) {
    float fVar1;
    double dVar2;
    u64 in_xd0;
    char cVar3;
    char cVar4;

    cVar4 = '\0';
    cVar3 = '\0';
    if (*(int *)(a0 + 0x1024) == 1) {
        fVar1 = *(float *)(a0 + 0x1050) - 8.0;
        *(float *)(a0 + 0x1050) = fVar1;
        *(float *)(a0 + 0x1048) = fVar1;
        if (*(float *)(a0 + 0x1048) <= 395.0) {
            *(u32 *)(a0 + 0x1050) = 0x43c58000;
            *(u32 *)(a0 + 0x1048) = 0x43c58000;
        }
    } else if (*(int *)(a0 + 0x1024) == 3) {
        fVar1 = *(float *)(a0 + 0x1050) + 8.0;
        *(float *)(a0 + 0x1050) = fVar1;
        *(float *)(a0 + 0x1048) = fVar1;
        if (447.0 <= *(float *)(a0 + 0x1048)) {
            *(u32 *)(a0 + 0x1050) = 0x43df8000;
            *(u32 *)(a0 + 0x1048) = 0x43df8000;
            *(u32 *)(a0 + 0x1024) = 0;
        }
    }
    FUN_8c0e4d64(a0, *a1);
    Class_12bb08_m1_0da338(a0, a1, a2);
    if (cVar4 == '\0') {
        dVar2 = (double)CONCAT44(0x3a03126f, *(u32 *)(a0 + 0x106c));
    } else {
        in_xd0 = *(u64 *)(a0 + 0x106c);
        dVar2 = -1.2980698352425083e-250;
    }
    if (cVar3 == '\0') {
        fVar1 = SUB84(dVar2, 0) - (float)((u64)dVar2 >> 0x20);
    } else {
        fVar1 = SUB84(dVar2 - dVar2, 0);
    }
    if (cVar4 == '\0') {
        *(float *)(a0 + 0x106c) = fVar1;
        fVar1 = *(float *)(a0 + 0x106c);
    } else {
        *(u64 *)(a0 + 0x106c) = in_xd0;
    }
    if (cVar3 == '\0' && fVar1 < 0.0) {
        if (cVar4 == '\0') {
            *(u32 *)(a0 + 0x106c) = 0;
        } else {
            *(u64 *)(a0 + 0x106c) = (u64)(u32)fVar1;
        }
    }
    FUN_8c0dbd80(a0, a1, a2, a3);
    FUN_8c0d64a0(a0 + 0xa68, a1, a2, a3);
    return 1;
}

/*
 * Class_12b758_m2_0e4ce4  0x8c0e4ce4
 */
u32 Class_12b758_m2_0e4ce4(int a0, u32 *a1, u32 a2, u32 a3) {
    float fVar1;
    double dVar2;
    u64 in_xd0;
    char cVar3;
    char cVar4;

    cVar4 = '\0';
    cVar3 = '\0';
    FUN_8c0e4d64(a0, *a1);
    Class_12bb08_m2_0da5a8(a0, a1, a2);
    if (cVar4 == '\0') {
        dVar2 = (double)CONCAT44(0x3a03126f, *(u32 *)(a0 + 0x106c));
    } else {
        in_xd0 = *(u64 *)(a0 + 0x106c);
        dVar2 = -1.2980698352425083e-250;
    }
    if (cVar3 == '\0') {
        fVar1 = SUB84(dVar2, 0) - (float)((u64)dVar2 >> 0x20);
    } else {
        fVar1 = SUB84(dVar2 - dVar2, 0);
    }
    if (cVar4 == '\0') {
        *(float *)(a0 + 0x106c) = fVar1;
        fVar1 = *(float *)(a0 + 0x106c);
    } else {
        *(u64 *)(a0 + 0x106c) = in_xd0;
    }
    if (cVar3 == '\0' && fVar1 < 0.0) {
        if (cVar4 == '\0') {
            *(u32 *)(a0 + 0x106c) = 0;
        } else {
            *(u64 *)(a0 + 0x106c) = (u64)(u32)fVar1;
        }
    }
    FUN_8c0dbd80(a0, a1, a2, a3);
    return 1;
}

/*
 * FUN_8c0e4d64  0x8c0e4d64
 * called by: Class_12b758_m1_0e4b5c, Class_12b758_m2_0e4ce4
 */
u32 FUN_8c0e4d64(int a0, u32 a1) {
    int iVar1;

    for (iVar1 = 0; iVar1 < 3; iVar1 = iVar1 + 1) {
        if (*(int *)(0x1090 + iVar1 * 0x24 + a0) == 1) {
            FUN_8c0d6164(iVar1 * 0x24 + a0 + 0x1070, a1);
        }
    }
    return 3;
}

/*
 * FUN_8c0e4dd0  0x8c0e4dd0
 */
u32 FUN_8c0e4dd0(int a0, u32 unused_a1, u32 unused_a2, u32 a3) {
    u32 uVar1;
    u32 *ar5_00;
    u8 *ar6_00;
    int iVar2;
    u32 in_PR;
    char cVar3;
    int in_stack_ffffffbc;
    u8 auStack_24[12];
    u32 uStack_18;
    u32 uStack_14;
    u32 uStack_10;
    u32 uStack_c;

    cVar3 = '\0';
    uStack_c = in_PR;
    FUN_8c0dbdf4(a0);
    if (cVar3 == '\0') {
        uStack_18 = *(u32 *)(a0 + 0x10fc);
        uStack_14 = *(u32 *)(a0 + 0x1100);
        uStack_10 = *(u32 *)(a0 + 0x1104);
    } else {
        uStack_18 = (u32) * (u64 *)(a0 + 0x10fc);
        uStack_14 = (u32) * (u64 *)(a0 + 0x1100);
        uStack_10 = (u32) * (u64 *)(a0 + 0x1104);
        uStack_c = (u32)((u64) * (u64 *)(a0 + 0x1104) >> 0x20);
    }
    ar6_00 = auStack_24;
    ar5_00 = &uStack_18;
    uVar1 = 0;
    FUN_8c21279c(0, ar5_00, ar6_00, a3, in_stack_ffffffbc);
    FUN_8c217ebc();
    FUN_8c219038();
    FUN_8c217ef4();
    FUN_8c219070();
    if (*(int *)(a0 + 0x1024) != 0) {
        FUN_8c0d2028(uVar1, ar5_00, ar6_00);
        FUN_8c016340(a0 + 0x1028, ar5_00, ar6_00, a3);
    }
    if (*(int *)(a0 + 0x1024) == 2) {
        FUN_8c0d1858(&g_8c13f450);
    }
    for (iVar2 = 0; iVar2 < 3; iVar2 = iVar2 + 1) {
        if (*(int *)(iVar2 * 0x24 + a0 + 0x1090) == 1) {
            **(u32 **)(a0 + 0x10e8) = *(u32 *)(iVar2 * 0x24 + a0 + 0x108c);
            FUN_8c01538c(a0 + 0x10dc, ar5_00, ar6_00);
            uVar1 = 0;
            FUN_8c256328(0, ar5_00, ar6_00, a3, in_stack_ffffffbc);
            FUN_8c019058();
            in_stack_ffffffbc = iVar2;
            FUN_8c019198(uVar1, ar5_00);
            FUN_8c015adc(a0 + 0x10e4, ar5_00, ar6_00, a3);
            FUN_8c256210(1);
        }
    }
    FUN_8c01538c(a0 + 0x28, ar5_00, ar6_00);
    FUN_8c015adc(a0 + 0x30, ar5_00, ar6_00, a3);
    if (*(int *)(a0 + 0x15c8) == 1) {
        FUN_8c0d6090(a0 + 0x15bc, ar5_00, ar6_00, a3);
    }
    FUN_8c0da754(a0);
    return 1;
}

/*
 * FUN_8c0e505c  0x8c0e505c
 */
u32 FUN_8c0e505c(int a0, u32 a1, u32 a2, u32 a3) {
    u32 uVar1;

    FUN_8c0dbdf4(a0);
    FUN_8c01538c(a0 + 0x28, a1, a2);
    FUN_8c015adc(a0 + 0x30, a1, a2, a3);
    uVar1 = FUN_8c0da754(a0);
    return uVar1;
}

/*
 * FUN_8c0e50a0  0x8c0e50a0
 */
u32 FUN_8c0e50a0(int a0, u32 a1, u32 a2, u32 a3) {
    int iVar1;

    iVar1 = get_field_300_0bf154(a0 + 0xa4);
    if (iVar1 != 0x19) {
        a1 = CEnv_AddItem(a0, a1, a2, a3);
    }
    return a1;
}

/*
 * FUN_8c0e50f4  0x8c0e50f4
 */
u32 FUN_8c0e50f4(int *a0, u32 a1, u32 a2, u32 a3) {
    u32 uVar1;
    u8 auStack_28[16];
    u8 auStack_18[20];

    uVar1 = a1;
    Vec3_ctor_zero(auStack_18, a1, a2);
    FUN_8c02f670(a1, uVar1, a2, a3, auStack_28);
    Vec3_assign(auStack_18, auStack_28, a2, a3);
    uVar1 = 0xffffffff;
    Vec3_dtor(auStack_28, 0xffffffff, a2, a3);
    FUN_8c036988(a1, uVar1, a2);
    uVar1 = (**(code **)(*a0 + 0x4c))(a0, a1, a2, a3);
    Vec3_dtor(auStack_18, 0xffffffff, a2, a3);
    return uVar1;
}

/*
 * FUN_8c0e518c  0x8c0e518c
 */
u32 FUN_8c0e518c(int a0) {
    if (*(int *)(0x15c8 + a0) == 0) {
        *(u32 *)(0x15c8 + a0) = 1;
        return 1;
    }
    return 0;
}

/*
 * FUN_8c0e51ac  0x8c0e51ac
 */
u32 FUN_8c0e51ac(int a0, u32 a1, u32 a2, u32 a3) {
    u32 extraout_fr1;
    char cVar1;

    cVar1 = '\0';
    FUN_8c0db8d4(a0, a1, a2, a3);
    FUN_8c0e96b8(a0 + 0xf4c);
    FUN_8c0d6920(a0 + 0xa68, a1, a2, a3);
    (**(code **)(*(int *)(a0 + 0x9e8) + 0x10))((int *)(a0 + 0x9e8), a1, a2, a3);
    if (cVar1 == '\0') {
        *(u32 *)(a0 + 0x106c) = 0;
    } else {
        *(u64 *)(a0 + 0x106c) = (u64)extraout_fr1;
    }
    return 1;
}

/*
 * noop_0e5230  0x8c0e5230
 */
u32 noop_0e5230(void) {
    u32 in_r0;

    return in_r0;
}

/*
 * noop_0e5234  0x8c0e5234
 */
u32 noop_0e5234(void) {
    u32 in_r0;

    return in_r0;
}

/*
 * FUN_8c0e5238  0x8c0e5238
 */
u32 FUN_8c0e5238(int *a0, u32 *a1, u32 a2, u32 a3) {
    u32 uVar1;
    u32 ar6_00;
    int iVar2;
    int iVar3;
    int a4;
    int iVar4;
    int *piVar5;
    u32 *ar5_00;
    u16 uVar6;
    u16 uVar7;
    u32 ar6_01;
    float fVar8;
    code *pcVar10;
    double dVar9;
    float fVar11;
    u64 in_xd0;
    char cVar12;
    char cVar13;
    u32 auStack_24[2];

    cVar13 = '\0';
    cVar12 = '\0';
    uVar7 = 0;
    uVar6 = 0x80;
    uVar1 = FUN_8c01f520(0x8c3dd7dc, a1, a2, a3);
    ar6_00 = a2 & 0xff;
    FUN_8c0daf3c();
    ar5_00 = g_8c431a58;
    iVar2 = FUN_8c01ad9c(uVar1, g_8c431a58);
    if ((iVar2 == 4) && (iVar2 = FUN_8c10031c(a1), iVar2 == 1)) {
        if (a0[0x2b3] == 0) {
            if (a0[0x275] != 0) {
                iVar2 = get_field_24_05c284(a0[0x275], ar5_00);
                iVar3 = (**(code **)(*(int *)(a0[0x275] + 8) + 0x114))(a0[0x275], ar5_00, ar6_00, a3);
                if (((((iVar2 == 10) && (iVar3 == 0x12)) || (iVar2 == 0xb)) || (iVar2 == 0xc)) ||
                    ((iVar2 == 0xe &&
                      (uVar1 = (**(code **)(*(int *)(a0[0x275] + 8) + 0x148))(a0[0x275], ar5_00, ar6_00, a3),
                       (short)uVar1 != 0)))) {
                    ar5_00 = (u32 *)0x2;
                    FUN_8c021720(0x8c2b59d0, 2, ar6_00, a3);
                } else {
                    iVar2 = (**(code **)(*(int *)(a0[0x275] + 8) + 200))(a0[0x275], ar5_00, ar6_00, a3);
                    if (iVar2 == 1) {
                        uVar1 = (**(code **)(*a0 + 0x58))(a0, ar5_00, ar6_00, a3);
                        FUN_8c0e59c0(a1, uVar1);
                        ar5_00 = (u32 *)0x1;
                        FUN_8c0e4330(a1, 1);
                    } else {
                        ar5_00 = (u32 *)0x2;
                        FUN_8c021720(0x8c2b59d0, 2, ar6_00, a3);
                    }
                }
            }
        } else if (a0[0x2b3] == 2) {
            iVar2 = get_field_24_05c284(a0[0x2b2], ar5_00);
            iVar3 = (**(code **)(*(int *)(a0[0x2b2] + 8) + 0x114))(a0[0x2b2], ar5_00, ar6_00, a3);
            if ((((iVar2 == 10) && (iVar3 == 0x12)) || ((iVar2 == 0xb || (iVar2 == 0xc)))) ||
                ((iVar2 == 0xe &&
                  (uVar1 = (**(code **)(*(int *)(a0[0x2b2] + 8) + 0x148))(a0[0x2b2], ar5_00, ar6_00, a3),
                   (short)uVar1 != 0)))) {
                ar5_00 = (u32 *)0x2;
                FUN_8c021720(0x8c2b59d0, 2, ar6_00, a3);
            } else {
                iVar2 = (**(code **)(*(int *)(a0[0x2b2] + 8) + 200))(a0[0x2b2], ar5_00, ar6_00, a3);
                if ((iVar2 == 1) && (a0[0x275] == a0[0x2b2])) {
                    (**(code **)(*a0 + 0x58))(a0, ar5_00, ar6_00, a3);
                    FUN_8c0e59c0(a1, a0[0x2b2]);
                    FUN_8c0e4330(a1, 1);
                    ar5_00 = a1;
                    FUN_8c0dca2c(a0, a1, ar6_00, a3);
                } else {
                    ar5_00 = (u32 *)0x2;
                    FUN_8c021720(0x8c2b59d0, 2, ar6_00, a3);
                }
            }
        }
        iVar2 = FUN_8c0637d0(a1, ar5_00, ar6_00);
        if (((iVar2 != 0) && (iVar3 = get_field_24_05c284(iVar2, ar5_00), iVar3 == 10)) &&
            (uVar1 = (**(code **)(*(int *)(iVar2 + 8) + 0x148))(iVar2, ar5_00, ar6_00, a3), (short)uVar1 == 3)) {
            ar5_00 = (u32 *)0xd;
            iVar3 = FUN_8c0db7d4(a0, 0xd);
            if (iVar3 != 0) {
                for (ar6_01 = 0; (int)ar6_01 < iVar3; ar6_01 = ar6_01 + 1) {
                    ar5_00 = (u32 *)0xd;
                    ar6_00 = ar6_01;
                    a4 = FUN_8c0db790(a0, 0xd, ar6_01, a3);
                    iVar4 = (**(code **)(*(int *)(a4 + 8) + 0xb0))(a4, ar5_00, ar6_00, a3);
                    if (iVar4 == iVar2) {
                        (**(code **)(*(int *)(a4 + 8) + 0xac))(a4, ar5_00, ar6_00, a3);
                    }
                }
            }
        }
    }
    iVar2 = a0[0x409];
    if (iVar2 == 0) {
        iVar2 = FUN_8c0e31e8(a1);
        if (iVar2 == 1) {
            a0[0x409] = 1;
            piVar5 = a0 + 0x412;
            if (cVar13 == '\0') {
                *piVar5 = 0x43df8000;
                a0[0x414] = 0x43df8000;
            } else {
                piVar5[0] = 0x43df8000;
                piVar5[1] = 0x1050;
                a0[0x414] = 0x43df8000;
                a0[0x415] = 0x1050;
            }
        }
    } else if (iVar2 == 1) {
        if (cVar13 == '\0') {
            fVar8 = (float)a0[0x412];
            pcVar10 = (code *)0x43c58000;
        } else {
            fVar8 = 395.0;
            pcVar10 = FUN_8c0e30f0;
        }
        if ((fVar8 == (float)pcVar10) && (iVar2 = FUN_8c0e30f0(a1), iVar2 == 1)) {
            a0[0x409] = 2;
        }
    } else if ((iVar2 == 2) && (iVar2 = FUN_8c0e5998(a1), iVar2 == 1)) {
        for (iVar2 = 0; iVar2 < 3; iVar2 = iVar2 + 1) {
            if (a0[iVar2 * 9 + 0x424] == 0) {
                piVar5 = a0 + iVar2 * 9 + 0x41c;
                if (cVar13 == '\0') {
                    *piVar5 = 0x43bb8000;
                } else {
                    piVar5[0] = 0x43bb8000;
                    piVar5[1] = 0x1074;
                }
                piVar5 = a0 + iVar2 * 9 + 0x41d;
                if (cVar13 == '\0') {
                    *piVar5 = 0x43f78000;
                } else {
                    piVar5[0] = 0x43f78000;
                    piVar5[1] = 0x1078;
                }
                piVar5 = a0 + iVar2 * 9 + 0x41e;
                if (cVar13 == '\0') {
                    *piVar5 = 0x44548000;
                } else {
                    piVar5[0] = 0x44548000;
                    piVar5[1] = 0x1084;
                }
                piVar5 = a0 + iVar2 * 9 + 0x421;
                if (cVar13 == '\0') {
                    *piVar5 = -0x41000000;
                } else {
                    piVar5[0] = -0x41000000;
                    piVar5[1] = 0x1080;
                }
                piVar5 = a0 + iVar2 * 9 + 0x420;
                if (cVar13 == '\0') {
                    *piVar5 = 0x3dcccccd;
                } else {
                    piVar5[0] = 0x3dcccccd;
                    piVar5[1] = 0x108c;
                }
                a0[iVar2 * 9 + 0x423] = 0xffffff;
                a0[iVar2 * 9 + 0x422] = 0;
                a0[iVar2 * 9 + 0x424] = 1;
                if (cVar13 == '\0') {
                    dVar9 = (double)CONCAT44(0x40800000, a0[0x41b]);
                } else {
                    in_xd0 = *(u64 *)(a0 + 0x41b);
                    dVar9 = 52776566587392.0;
                }
                if (cVar12 == '\0') {
                    fVar8 = SUB84(dVar9, 0) + (float)((u64)dVar9 >> 0x20);
                } else {
                    fVar8 = SUB84(dVar9 + dVar9, 0);
                }
                if (cVar13 == '\0') {
                    a0[0x41b] = (int)fVar8;
                    fVar8 = (float)a0[0x41b];
                    fVar11 = 100.0;
                } else {
                    *(u64 *)(a0 + 0x41b) = in_xd0;
                    fVar8 = 100.0;
                    fVar11 = 1.79366e-43;
                }
                if (cVar12 == '\0' && fVar11 < fVar8) {
                    piVar5 = a0 + 0x41b;
                    if (cVar13 == '\0') {
                        *piVar5 = 0x42c80000;
                    } else {
                        piVar5[0] = 0x42c80000;
                        piVar5[1] = 0x80;
                    }
                }
                uVar7 = 0x80;
                uVar6 = 0xff;
                auStack_24[0] = se_open_bank1(0x8c2b59d0);
                ar6_00 = 0xe;
                se_play(0x8c2b59d0, auStack_24[0], 0xe);
                ar5_00 = auStack_24;
                FUN_8c021a8c(0x8c2b59d0, ar5_00);
                break;
            }
        }
    }
    if (a0[0x409] != 0) {
        *(u16 *)(a0 + 0x417) = uVar7;
        *(u16 *)((int)a0 + 0x105e) = 0x80;
        *(u16 *)(a0 + 0x418) = uVar7;
        *(u16 *)((int)a0 + 0x1062) = 0x60;
        *(u16 *)(a0 + 0x419) = uVar6;
        *(u16 *)((int)a0 + 0x1066) = 0x60;
        *(u16 *)(a0 + 0x41a) = uVar6;
        *(u16 *)((int)a0 + 0x106a) = 0x80;
    }
    iVar2 = FUN_8c0e30c8(a1);
    if (iVar2 == 1) {
        a0[0x409] = 3;
    }
    return 1;
}

/*
 * FUN_8c0e5998  0x8c0e5998
 * called by: FUN_8c0e5238
 */
u32 FUN_8c0e5998(int a0) {
    u32 uVar1;

    uVar1 = FUN_8c01f33c(*(u32 *)(0xcc + a0));
    return uVar1;
}

/*
 * FUN_8c0e59c0  0x8c0e59c0
 * called by: FUN_8c0e5238, FUN_8c0e8280
 */
u32 FUN_8c0e59c0(int a0, u32 a1) {
    FUN_8c0ffb84(a0 + 0xd8, a1);
    return 1;
}

/*
 * FUN_8c0e59e8  0x8c0e59e8
 */
u32 FUN_8c0e59e8(int *a0, u32 a1, u32 a2, u32 a3) {
    u32 uVar1;

    uVar1 = (**(code **)(0x1c0 + *a0))(a0, a1, a2, a3);
    return uVar1;
}

/*
 * FUN_8c0e5a08  0x8c0e5a08
 */
u32 FUN_8c0e5a08(int a0, u32 a1, u32 a2, u32 a3) {
    u32 uVar1;

    FUN_8c235ee4();
    FUN_8c0daf80(a0, a1, a2, a3);
    FUN_8c0d6954(a0 + 0xa68, a1, a2, a3);
    FUN_8c0dbdf4(a0);
    *(u32 *)(0x1020 + a0) = 5;
    uVar1 = FUN_8c0e5dac();
    return uVar1;
}

/*
 * FUN_8c0e5a64  0x8c0e5a64
 */
u32 FUN_8c0e5a64(int *a0, u32 a1, u32 a2, u32 a3) {
    (**(code **)(0x1c4 + *a0))(a0, a1, a2, a3);
    return 0;
}

/*
 * ret_const_0_0e5a88  0x8c0e5a88
 */
u32 ret_const_0_0e5a88(void) {
    return 0;
}

/*
 * noop_0e5a90  0x8c0e5a90
 */
u32 noop_0e5a90(void) {
    u32 in_r0;

    return in_r0;
}

/*
 * noop_0e5a94  0x8c0e5a94
 */
u32 noop_0e5a94(void) {
    u32 in_r0;

    return in_r0;
}

/*
 * noop_0e5a98  0x8c0e5a98
 */
u32 noop_0e5a98(void) {
    u32 in_r0;

    return in_r0;
}

/*
 * noop_0e5a9c  0x8c0e5a9c
 */
u32 noop_0e5a9c(void) {
    u32 in_r0;

    return in_r0;
}

/*
 * noop_0e5aa0  0x8c0e5aa0
 */
u32 noop_0e5aa0(void) {
    u32 in_r0;

    return in_r0;
}

/*
 * noop_0e5aa4  0x8c0e5aa4
 */
u32 noop_0e5aa4(void) {
    u32 in_r0;

    return in_r0;
}

/*
 * FUN_8c0e5aa8  0x8c0e5aa8
 */
u32 *FUN_8c0e5aa8(int a0) {
    u32 in_fr4;

    *(u32 *)(a0 + 0xa68) = in_fr4;
    *(u32 *)(a0 + 0xa6c) = 0x43898000;
    *(u32 *)(a0 + 0xa70) = 0x44ed8000;
    return &g_8c0e5adc;
}

/*
 * FUN_8c0e5ae0  0x8c0e5ae0
 */
u32 FUN_8c0e5ae0(int a0, u32 a1, u32 a2, u32 a3) {
    u32 uVar1;
    u32 ar5_00;

    ar5_00 = a1;
    FUN_8c0d6058(a0 + 0x15bc, a1, a2, a3);
    CTexture_LoadFromCache(a0 + 0x10dc, ar5_00, a2, a3);
    uVar1 = FUN_8c0d9b60(a0, a1 & 0xff, a2, a3);
    return uVar1;
}

/*
 * FUN_8c0e5b30  0x8c0e5b30
 */
u32 FUN_8c0e5b30(int a0, u32 a1, u32 a2, u32 a3) {
    u32 uVar1;
    u32 ar5_00;

    ar5_00 = a1;
    FUN_8c0d6074(a0 + 0x15bc, a1, a2, a3);
    CTexture_ReleaseFromVRAM(a0 + 0x10dc, ar5_00, a2, a3);
    uVar1 = FUN_8c0d9b8c(a0, a1 & 0xff, a2, a3);
    return uVar1;
}

/*
 * FUN_8c0e5b80  0x8c0e5b80
 */
u32 FUN_8c0e5b80(u32 unused_a0, u32 unused_a1, u32 unused_a2, u32 unused_a3, u32 *s0) {
    u32 uStack_4;

    uStack_4 = uStack_4 & 0xfffffffc | 1;
    *s0 = uStack_4;
    return uStack_4;
}

/*
 * get_field_15c8_0e5ba8  0x8c0e5ba8
 */
u32 get_field_15c8_0e5ba8(int a0) {
    return *(u32 *)(0x15c8 + a0);
}

/*
 * FUN_8c0e5bb4  0x8c0e5bb4
 * name hint from a string it uses: GRAPHICS ENV
 * strings: "musikago.nj"; "GRAPHICS\\ENV"; "GRAPHICS\\ENV"; "musikago.nj"
 */
u32 FUN_8c0e5bb4(int a0, u32 a1) {
    u32 uVar1;
    u8 *ar6_00;

    (*(code *)(&FUN_8c020a70))(a1, "musikago.nj", "GRAPHICS\\ENV", a0);
    ar6_00 = "GRAPHICS\\ENV";
    FUN_8c020b68(a1, "musikago.nj", ar6_00, a0);
    uVar1 = FUN_8c0d60c8(a0 + 0x15bc, a1);
    return uVar1;
}

/*
 * FUN_8c0e5c24  0x8c0e5c24
 */
u32 FUN_8c0e5c24(int a0, u32 a1, u32 a2, u32 a3) {
    u32 uVar1;

    uVar1 = (**(code **)(*(int *)(a0 + 0x9e8) + 0x28))((int *)(a0 + 0x9e8), a1, a2, a3);
    return uVar1;
}

/*
 * FUN_8c0e5c4c  0x8c0e5c4c
 * called by: FUN_8c0e4378
 */
u32 FUN_8c0e5c4c(int *a0, u32 unused_a1, u32 a2, u32 a3) {
    u32 uVar1;
    u32 in_fr1;
    char cVar2;

    cVar2 = '\0';
    uVar1 = 1;
    (**(code **)(*a0 + 0x1b0))(a0, 1, a2, a3);
    if (cVar2 == '\0') {
        a0[0x1e] = 0x3f800000;
        a0[0x1f] = 0x3f19999a;
    } else {
        *(u64 *)(a0 + 0x1e) = CONCAT44(0x3f800000, in_fr1);
        a0[0x1f] = 0x3f19999a;
        a0[0x20] = 0x443a3e67;
    }
    FUN_8c102a7c(a0 + 0x2c4);
    FUN_8c102a7c(a0 + 0x2cc);
    FUN_8c102a7c(a0 + 0x2b4);
    FUN_8c102a7c(a0 + 700);
    uVar1 = FUN_8c102974(a0 + 0x2dc);
    return uVar1;
}

/*
 * FUN_8c0e5dac  0x8c0e5dac
 * called by: FUN_8c0e5a08
 */
u32 FUN_8c0e5dac(void) {
    u32 uVar1;

    FUN_8c217ebc();
    FUN_8c217f02();
    FUN_8c217ef4();
    FUN_8c219038();
    FUN_8c21907e();
    uVar1 = FUN_8c219070();
    return uVar1;
}

/*
 * FUN_8c0e5e54  0x8c0e5e54
 * name hint from a string it uses: Outside
 * called by: FUN_8c0c5340
 * strings: "Outside"; "Outside"
 */
u32 *FUN_8c0e5e54(u32 *a0) {
    char *ar5_00;
    code *ar5_01;
    u32 uVar1;
    code *ar6_00;
    u32 uVar2;
    u32 in_fr1;
    char cVar3;

    cVar3 = '\0';
    uVar2 = 0;
    uVar1 = 2;
    ar5_00 = "Outside";
    FUN_8c0d9c80(a0, "Outside", 2, 0);
    *a0 = &g_8c12b580;
    FUN_8c015224(a0 + 0x430, ar5_00);
    FUN_8c015ab8(a0 + 0x432);
    Vec3_ctor_zero(a0 + 0x433, ar5_00, uVar1);
    FUN_8c0d7f18(a0 + 0x437, ar5_00, uVar1);
    FUN_8c010120(a0 + 0x1fd2, FUN_8c0d6ee0, free_if_nonnull_wrap_0d6ef8, 0xc, 100);
    uVar1 = 0x18;
    ar6_00 = free_if_nonnull_wrap_0cffc8;
    ar5_01 = FUN_8c02145c;
    FUN_8c010120(a0 + 0x20fe, FUN_8c02145c, free_if_nonnull_wrap_0cffc8, 0x18, 1);
    FUN_8c0e6ef0(a0, ar5_01, ar6_00, uVar1);
    if (cVar3 == '\0') {
        a0[0x2e9] = 0x425dae14;
        a0[0x2af] = 0x453b7ff4;
        a0[0x2b0] = 0x4506eccd;
        a0[0x2b1] = 0x45520000;
        a0[0x20] = 0x430c0000;
        a0[0x21] = 0x42c80000;
        a0[0x23] = 0x43a00000;
        a0[0x24] = 0x42e00000;
        a0[0x25] = 0x41000000;
    } else {
        *(u64 *)(a0 + 0x2e9) = 0xabc425dae14;
        *(u64 *)(a0 + 0x2af) = 0xac0453b7ff4;
        *(u64 *)(a0 + 0x2b0) = 0x440ea6664506eccd;
        *(u64 *)(a0 + 0x2b1) = 0x8045520000;
        *(u64 *)(a0 + 0x20) = 0x84430c0000;
        *(u64 *)(a0 + 0x21) = 0x8c42c80000;
        *(u64 *)(a0 + 0x23) = 0x9043a00000;
        *(u64 *)(a0 + 0x24) = 0x9442e00000;
        in_fr1 = 0x41000000;
        *(u64 *)(a0 + 0x25) = 0x9841000000;
    }
    if (cVar3 == '\0') {
        a0[0x26] = 0x3f800000;
        a0[0x27] = 0x41300000;
        a0[0x28] = 0x40400000;
    } else {
        *(u64 *)(a0 + 0x26) = CONCAT44(0x3f800000, in_fr1);
        *(u64 *)(a0 + 0x27) = 0xa041300000;
        *(u64 *)(a0 + 0x28) = 0x106c40400000;
    }
    uVar2 = g_8c13f718;
    a0[0x41b] = g_8c13f714;
    a0[0x41c] = uVar2;
    a0[0x41d] = PTR_FUN_8c13f71c;
    uVar2 = g_8c13f724;
    a0[0x41e] = g_8c13f720;
    a0[0x41f] = uVar2;
    a0[0x420] = PTR_FUN_8c13f728;
    uVar2 = g_8c13f730;
    a0[0x421] = g_8c13f72c;
    a0[0x422] = uVar2;
    a0[0x423] = PTR_FUN_8c13f734;
    uVar2 = g_8c13f73c;
    a0[0x42a] = g_8c13f738;
    a0[0x42b] = uVar2;
    a0[0x42c] = PTR_FUN_8c13f740;
    uVar2 = g_8c13f748;
    a0[0x427] = g_8c13f744;
    a0[0x428] = uVar2;
    a0[0x429] = PTR_FUN_8c13f74c;
    a0[0x2104] = 0;
    a0[0x20fe] = (&PTR_s_62_JUNGLE_DAYTIME1_8c13f2fc)[a0[0x2104]];
    a0[0x2100] = 500;
    FUN_8c0d76e8(a0 + 0x427, ar5_01, ar6_00, uVar1);
    return a0;
}

/*
 * FUN_8c0e6114  0x8c0e6114
 * called by: Class_12b580_m0_0e61f4
 */
int FUN_8c0e6114(int a0, u32 a1, u32 a2, u32 a3) {
    u32 ar5_00;
    u32 ar6_00;
    u32 ar7_00;
    u32 in_stack_fffffff4;
    u32 ain0;

    ain0 = CONCAT22((short)((u32)in_stack_fffffff4 >> 0x10), (u16)a1);
    if (a0 != 0) {
        FUN_8c015428(a0 + 0x6e50, 0xffffffff, a2, a3);
        vec_delete_array(a0 + 0x6e20, free_if_nonnull_wrap_0cffc8, 0x18, 2);
        ar7_00 = 500;
        ar6_00 = 0x38;
        vec_delete_array(a0 + 0xbc, FUN_8c0d8094, 0x38, 500);
        FUN_8c0d80dc(a0 + 0x78, 0xffffffff, ar6_00, ar7_00);
        FUN_8c0d8128(a0 + 0x50, 0xffffffff, ar6_00, ar7_00);
        free_if_nonnull_wrap_0d8168(a0 + 0x34, 0xffffffff, ar6_00, ar7_00);
        object_dtor_delete(a0 + 0x28, 0xffffffff, ar6_00, ar7_00);
        Vec3_dtor(a0 + 0x18, 0xffffffff, ar6_00, ar7_00);
        ar5_00 = 0xffffffff;
        Vec3_dtor(a0 + 8, 0xffffffff, ar6_00, ar7_00);
        if (0 < (short)ain0) {
            free_if_nonnull(a0);
        }
    }
    return a0;
}

/*
 * Class_12b580_m0_0e61f4  0x8c0e61f4
 * called by: Class_12b388_m0_0c5928
 */
u32 *Class_12b580_m0_0e61f4(u32 *a0, u32 a1) {
    u32 ar5_00;
    u32 ar6_00;
    u32 ar7_00;
    u32 in_stack_fffffff4;
    u32 ain0;

    ain0 = CONCAT22((short)((u32)in_stack_fffffff4 >> 0x10), (u16)a1);
    if (a0 != NULL) {
        *a0 = &g_8c12b580;
        vec_delete_array(a0 + 0x20fe, free_if_nonnull_wrap_0cffc8, 0x18, 1);
        ar7_00 = 100;
        ar6_00 = 0xc;
        vec_delete_array(a0 + 0x1fd2, free_if_nonnull_wrap_0d6ef8, 0xc, 100);
        FUN_8c0e6114(a0 + 0x437, 0xffffffff, ar6_00, ar7_00);
        Vec3_dtor(a0 + 0x433, 0xffffffff, ar6_00, ar7_00);
        free_if_nonnull_wrap_016bfc(a0 + 0x432, 0xffffffff, ar6_00, ar7_00);
        free_if_nonnull_wrap_0153e4(a0 + 0x430, 0xffffffff, ar6_00, ar7_00);
        ar5_00 = 0;
        Class_12bb08_m0_0da208(a0, 0, ar6_00, ar7_00);
        if (0 < (short)ain0) {
            free_if_nonnull(a0);
        }
    }
    return a0;
}

/*
 * FUN_8c0e62cc  0x8c0e62cc
 */
int FUN_8c0e62cc(int *a0, u32 a1, u32 a2, u32 a3) {
    int iVar1;
    u32 uVar2;

    (**(code **)(0x88 + *a0))(a0, a1, a2, a3);
    WEATHRE_UNIT_CreateGraphics((int)a0 + 0x10dc, a1, a2, a3);
    (*(code *)(&FUN_8c0e705c))(a0, *(u32 *)(0x10dc + (int)a0), a2, a3);
    iVar1 = *(int *)(0x83fc + (int)a0);
    if (iVar1 == -1) {
        uVar2 = (*(code *)(&pack_find_by_name_buffered))(0x8c2b59d0, *(u32 *)(0x83f8 + (int)a0), a2, a3);
        iVar1 = 0x83fc;
        *(u32 *)(0x83fc + (int)a0) = uVar2;
    }
    return iVar1;
}

/*
 * Class_12b580_m1_0e634c  0x8c0e634c
 */
u32 Class_12b580_m1_0e634c(int a0, int a1, u32 a2, u32 a3) {
    u32 uVar1;
    int iVar2;
    int ar4_00;
    u32 uVar3;
    int iVar4;
    int iVar5;

    iVar4 = a0 + 0xa68;
    FUN_8c0d84e8(a0 + 0x10dc, a1, iVar4, a3);
    uVar3 = *(u32 *)(0x10dc + a0);
    FUN_8c0e705c(a0, uVar3, iVar4);
    if ((*(int *)(0x10dc + a0) == 0) || (*(int *)(0x10dc + a0) == 0x8ca0)) {
        if (*(int *)(0x83fc + a0) != -1) {
            FUN_8c022104(0x8c2b59d0, *(u32 *)(0x83fc + a0), iVar4, a3);
            FUN_8c0220bc(0x8c2b59d0, *(u32 *)(0x83fc + a0), iVar4, a3);
        }
        uVar1 = (*(code *)(&pack_find_by_name_buffered))(0x8c2b59d0, *(u32 *)(0x83f8 + a0), iVar4, a3);
        *(u32 *)(0x83fc + a0) = uVar1;
        uVar3 = *(u32 *)(0x83fc + a0);
        FUN_8c0220d4(0x8c2b59d0, uVar3);
    }
    if ((*(u32 *)(0x10dc + a0) & 1) == 0) {
        uVar3 = *(u32 *)(0x8400 + a0);
        FUN_8c022128(0x8c2b59d0, uVar3, iVar4, a3);
    }
    iVar2 = FUN_8c101154(*(u32 *)(0x7cc + a1));
    if (iVar2 == 1) {
        iVar2 = get_field_38_0db5a0(a0 + 0x4d4);
        if (iVar2 != 0) {
            ar4_00 = FUN_8c0db580(a0 + 0x4d4);
            for (iVar5 = 0; iVar5 < iVar2; iVar5 = iVar5 + 1) {
                uVar3 = (*(code *)(&get_field_b8_101178))(*(u32 *)(0x7cc + a1), uVar3, iVar4, a3);
                uVar3 = uVar3 & 0xff;
                (**(code **)(*(int *)(*(int *)(ar4_00 + 8) + 8) + 0x50))(*(int *)(ar4_00 + 8), uVar3, iVar4, a3);
                ar4_00 = list_node_next(ar4_00);
            }
        }
    }
    Class_12bb08_m1_0da338(a0, a1, a2);
    FUN_8c0dbd80(a0, a1, a2, a3);
    for (iVar4 = 0; iVar4 < 8; iVar4 = iVar4 + 1) {
        iVar2 = FUN_8c0f6ab0(a0 + iVar4 * 0x68 + 0xc0c);
        if (iVar2 == 1) {
            a1 = a0;
            FUN_8c0f7204(a0 + iVar4 * 0x68 + 0xc0c, a0, a2, a3);
        }
    }
    FUN_8c0d64a0(a0 + 0xa68, a1, a2, a3);
    return 1;
}

/*
 * Class_12b580_m2_0e6548  0x8c0e6548
 */
u32 Class_12b580_m2_0e6548(int a0, int a1, u32 a2, u32 a3) {
    int iVar1;
    u32 ar5_00;
    int ar6_00;
    int iVar2;

    Class_12bb08_m2_0da5a8(a0, a1, a2);
    ar5_00 = *(u32 *)(0x10dc + a0);
    FUN_8c0e705c(a0, ar5_00, a2);
    FUN_8c0dbd80(a0, ar5_00, a2, a3);
    ar6_00 = a0 + 0xa68;
    FUN_8c0d8710(a0 + 0x10dc, a1, ar6_00, a3);
    for (iVar2 = 0; iVar2 < 8; iVar2 = iVar2 + 1) {
        iVar1 = FUN_8c0f6ab0(a0 + iVar2 * 0x68 + 0xc0c);
        if (iVar1 == 1) {
            a1 = a0;
            FUN_8c0f7204(a0 + iVar2 * 0x68 + 0xc0c, a0, ar6_00, a3);
        }
    }
    return 1;
}

/*
 * FUN_8c0e660c  0x8c0e660c
 */
u32 FUN_8c0e660c(int a0, int a1, int a2, u32 a3) {
    int iVar1;
    int iVar2;
    char cVar3;

    cVar3 = '\0';
    FUN_8c0dbdf4(a0);
    FUN_8c0d8808(a0 + 0x10dc);
    if (cVar3 == '\0') {
        *(u32 *)(a0 + 0x78) = *(u32 *)(a0 + 0x1120);
        *(u32 *)(a0 + 0x7c) = *(u32 *)(a0 + 0x1124);
    } else {
        *(u64 *)(a0 + 0x78) = *(u64 *)(a0 + 0x1120);
        *(u64 *)(a0 + 0x7c) = *(u64 *)(a0 + 0x1124);
    }
    FUN_8c0d89d8(a0 + 0x10dc, a1);
    FUN_8c01538c(a0 + 0x28, a1, a2);
    FUN_8c015adc(a0 + 0x30, a1, a2, a3);
    for (iVar2 = 0; iVar2 < 8; iVar2 = iVar2 + 1) {
        iVar1 = FUN_8c0f6ab0(a0 + iVar2 * 0x68 + 0xc0c);
        if (iVar1 == 1) {
            a2 = a0 + 4;
            a1 = a0 + 0xc;
            FUN_8c0f7118(a0 + iVar2 * 0x68 + 0xc0c, a1, a2);
        }
    }
    FUN_8c0da754(a0);
    return 1;
}

/*
 * FUN_8c0e66fc  0x8c0e66fc
 */
u32 FUN_8c0e66fc(u32 a0, u32 a1, u32 a2, u32 a3) {
    u32 uVar1;

    uVar1 = FUN_8c0d9b34(a0, a1, a2, a3);
    return uVar1;
}

/*
 * FUN_8c0e6718  0x8c0e6718
 */
u32 FUN_8c0e6718(int a0, u32 a1, u32 a2, u32 a3) {
    int iVar1;

    iVar1 = get_field_300_0bf154(a0 + 0xa4);
    if (iVar1 != 0xf) {
        a1 = CEnv_AddItem(a0, a1, a2, a3);
    }
    return a1;
}

/*
 * FUN_8c0e676c  0x8c0e676c
 */
u32 FUN_8c0e676c(int *a0, u32 a1, u32 a2, u32 a3) {
    u32 uVar1;
    u8 auStack_28[16];
    u8 auStack_18[20];

    uVar1 = a1;
    Vec3_ctor_zero(auStack_18, a1, a2);
    FUN_8c02f670(a1, uVar1, a2, a3, auStack_28);
    Vec3_assign(auStack_18, auStack_28, a2, a3);
    uVar1 = 0xffffffff;
    Vec3_dtor(auStack_28, 0xffffffff, a2, a3);
    FUN_8c036988(a1, uVar1, a2);
    uVar1 = (**(code **)(*a0 + 0x4c))(a0, a1, a2, a3);
    Vec3_dtor(auStack_18, 0xffffffff, a2, a3);
    return uVar1;
}

/*
 * FUN_8c0e6804  0x8c0e6804
 */
u32 FUN_8c0e6804(u32 unused_a0, u32 a1, u32 a2) {
    u32 ar6_00;
    int iVar1;
    u32 uVar2;

    ar6_00 = (u32)(u8)a2;
    FUN_8c0daf3c();
    pure_virtual_stub();
    iVar1 = FUN_8c0e252c(a1);
    if (iVar1 == 1) {
        uVar2 = get_field_cc_0dfee8(a1);
        uVar2 = FUN_8c01f528(uVar2);
        FUN_8c01d9e0();
    }
    iVar1 = FUN_8c0dfef4(a1);
    if (iVar1 == 1) {
        uVar2 = get_field_cc_0dfee8(a1);
        uVar2 = FUN_8c01f528(uVar2);
        FUN_8c01da60();
    }
    return 1;
}

/*
 * FUN_8c0e68d4  0x8c0e68d4
 */
u32 FUN_8c0e68d4(int *a0, u32 a1, u32 a2, u32 a3) {
    u32 uVar1;

    uVar1 = (**(code **)(0x1c0 + *a0))(a0, a1, a2, a3);
    return uVar1;
}

/*
 * FUN_8c0e68f4  0x8c0e68f4
 */
u32 FUN_8c0e68f4(int *a0, u32 a1, u32 a2, u32 a3) {
    u32 uVar1;

    FUN_8c0daf80(a0, a1, a2, a3);
    FUN_8c0d6954((int)a0 + 0xa68, a1, a2, a3);
    FUN_8c0dbdf4(a0);
    FUN_8c0e743c();
    FUN_8c0d8400((int)a0 + 0x10dc, a1, a2, a3);
    uVar1 = (**(code **)(0xa8 + *a0))(a0, 3, a2, a3);
    return uVar1;
}

/*
 * FUN_8c0e6964  0x8c0e6964
 */
u32 FUN_8c0e6964(int *a0, u32 a1, u32 a2, u32 a3) {
    (**(code **)(0x1c4 + *a0))(a0, a1, a2, a3);
    return 0;
}

/*
 * FUN_8c0e6988  0x8c0e6988
 */
u32 FUN_8c0e6988(int *a0, u32 unused_a1, u32 a2, u32 a3) {
    FUN_8c0d8444((int)a0 + 0x10dc, unused_a1, a2, a3);
    (**(code **)(0xa4 + *a0))(a0, 3, a2, a3);
    return 0;
}

/*
 * FUN_8c0e69c0  0x8c0e69c0
 * name hint from a string it uses: GRAPHICS ENV
 * strings: "amazon.nj"; "GRAPHICS\\ENV"; "amazon.nj"; "Failed to load:COutside::Create()" ...
 */
u32 FUN_8c0e69c0(int a0, u32 a1, u32 a2) {
    int iVar1;
    u32 ar5_00;
    char *pcVar2;
    u32 uVar3;
    u32 *puVar4;
    u32 a7;
    u32 uVar5;
    u32 in_fr1;
    char cVar6;
    u32 uStack_38;
    u32 uStack_34;
    u32 uStack_30;
    u32 uStack_28;
    u32 uStack_24;
    u32 uStack_20;
    u32 uStack_1c;
    u32 uStack_18;

    cVar6 = '\0';
    uVar3 = a1;
    Vec3_ctor_zero(&uStack_24, a1, a2);
    Vec3_set_zero(&uStack_30);
    uStack_34 = 0;
    uStack_38 = 0;
    iVar1 = FUN_8c0209fc(a1, "amazon.nj", "GRAPHICS\\ENV", &uStack_34);
    if (iVar1 == 0) {
        report_error_message("amazon.nj", "Failed to load:COutside::Create()", 0, 2);
    }
    puVar4 = &uStack_38;
    pcVar2 = "GRAPHICS\\ENV";
    iVar1 = FUN_8c020af4(a1, "amazon.nj", "GRAPHICS\\ENV", puVar4);
    if (iVar1 == 0) {
        puVar4 = (u32 *)0x2;
        pcVar2 = NULL;
        report_error_message("amazon.nj", "Failed NJTL:COutside::Create()", 0, 2);
    }
    FUN_8c015ad4(a0 + 0x30, uStack_34, pcVar2);
    a7 = 0xd;
    uVar3 = 0x8c4312a8;
    FUN_8c239170(0x8c437600, 0x8c437608, 0x8c4312a8, 0xd);
    for (uVar5 = 0; uVar5 < 0xd; uVar5 = uVar5 + 1) {
        *(u32 *)(uVar5 * 0xc + 0x8c43760c) = *(u32 *)(uVar5 * 0xc + 0x8c43760c) | 0x80000000;
    }
    ar5_00 = 0x8c437600;
    (**(code **)(*(int *)(a0 + 0x28) + 8))((int *)(a0 + 0x28), 0x8c437600, uVar3, a7);
    get_field_4_0253e4(a0 + 0x28, ar5_00, uVar3, a7);
    uVar3 = get_field_4_0253e4(a0 + 0x28, ar5_00, uVar3, a7);
    pcVar2 = "GRAPHICS\\ENV";
    iVar1 = FUN_8c02100c(a1, "amazon.pvm", "GRAPHICS\\ENV", uVar3);
    if (iVar1 == 0) {
        uVar3 = 2;
        pcVar2 = NULL;
        report_error_message("Failed to load outside pvm textuer..", &g_8c13f91d, 0, 2);
    }
    FUN_8c0dbb14(a0, a1, pcVar2, uVar3);
    if (cVar6 == '\0') {
        uStack_20 = 0;
        uStack_28 = in_fr1;
    } else {
        uStack_18 = 0xc2700000;
        uStack_28 = 0xc2700000;
        uStack_20 = in_fr1;
    }
    uStack_1c = 0xbf800000;
    uStack_30 = 0xc2700000;
    if (cVar6 == '\0') {
        uStack_28 = 0;
        uStack_24 = uStack_20;
    } else {
        uStack_24 = 0;
    }
    puVar4 = &uStack_30;
    FUN_8c0d167c(&uStack_24, a0 + 0x10cc, puVar4, uVar3);
    object_dtor_delete(&uStack_30, 0xffffffff, puVar4, uVar3);
    uVar3 = Vec3_dtor(&uStack_24, 0xffffffff, puVar4, uVar3);
    return uVar3;
}

/*
 * FUN_8c0e6c00  0x8c0e6c00
 */
int FUN_8c0e6c00(int a0, u32 unused_a1, u32 a2, u32 a3) {
    int iVar1;
    u32 uVar2;

    FUN_8c0e705c(a0, *(u32 *)(0x10dc + a0), a2);
    iVar1 = *(int *)(0x83fc + a0);
    if (iVar1 == -1) {
        uVar2 = (*(code *)(&pack_find_by_name_buffered))(0x8c2b59d0, *(u32 *)(0x83f8 + a0), a2, a3);
        iVar1 = 0x83fc;
        *(u32 *)(0x83fc + a0) = uVar2;
    }
    return iVar1;
}

/*
 * FUN_8c0e6c54  0x8c0e6c54
 */
u32 *FUN_8c0e6c54(int a0) {
    u32 in_fr4;

    *(u32 *)(a0 + 0xa68) = in_fr4;
    *(u32 *)(a0 + 0xa6c) = 0x44610000;
    *(u32 *)(a0 + 0xa70) = 0x4544e000;
    return &g_8c0e6c88;
}

/*
 * FUN_8c0e6c8c  0x8c0e6c8c
 */
u32 FUN_8c0e6c8c(int a0, u32 a1, u32 a2, u32 a3) {
    u32 uVar1;
    u32 ar5_00;
    u32 in_PR;

    ar5_00 = a1;
    FUN_8c0d9b60(a0, a1, a2, a3);
    CTexture_LoadFromCache(a0 + 4, ar5_00, a2, a3);
    uVar1 = 2;
    if (2 < (a1 & 0xff)) {
        uVar1 = noop_0d8458(a0 + 0x10dc, ar5_00, a2, a3, in_PR);
    }
    return uVar1;
}

/*
 * FUN_8c0e6cd8  0x8c0e6cd8
 */
u32 FUN_8c0e6cd8(int a0, u32 a1, u32 a2, u32 a3) {
    u32 uVar1;
    u32 ar5_00;
    u32 in_PR;

    ar5_00 = a1;
    FUN_8c0d9b8c(a0, a1, a2, a3);
    CTexture_ReleaseFromVRAM(a0 + 4, ar5_00, a2, a3);
    uVar1 = 2;
    if (2 < (a1 & 0xff)) {
        uVar1 = noop_0d845c(a0 + 0x10dc, ar5_00, a2, a3, in_PR);
    }
    return uVar1;
}

/*
 * FUN_8c0e6d24  0x8c0e6d24
 */
u32 FUN_8c0e6d24(int a0, u32 a1, u32 a2, u32 a3) {
    u32 ar5_00;
    u32 uVar1;

    ar5_00 = (u32)(u8)a1;
    FUN_8c0db090(a0, ar5_00, a2, a3);
    if (*(int *)(0x83fc + a0) != -1) {
        ar5_00 = *(u32 *)(0x83fc + a0);
        FUN_8c022104(0x8c2b59d0, ar5_00, a2, a3);
    }
    uVar1 = FUN_8c0d8460(a0 + 0x10dc, ar5_00, a2, a3);
    return uVar1;
}

/*
 * FUN_8c0e6d80  0x8c0e6d80
 */
u32 FUN_8c0e6d80(int a0, u32 a1, u32 a2, u32 a3) {
    u32 uVar1;

    if (*(int *)(0x83fc + a0) != -1) {
        a1 = *(u32 *)(0x83fc + a0);
        FUN_8c0220d4(0x8c2b59d0, a1);
    }
    uVar1 = FUN_8c0d84a8(a0 + 0x10dc, a1, a2, a3);
    return uVar1;
}

/*
 * FUN_8c0e6dc4  0x8c0e6dc4
 */
u32 FUN_8c0e6dc4(int a0, u32 a1, u32 a2, u32 a3) {
    FUN_8c0db8d4(a0, a1, a2, a3);
    FUN_8c0e96b8(a0 + 0xf4c);
    FUN_8c0d6920(a0 + 0xa68, a1, a2, a3);
    (**(code **)(*(int *)(a0 + 0x9e8) + 0x10))((int *)(a0 + 0x9e8), a1, a2, a3);
    FUN_8c0d92b0(a0 + 0x10dc);
    if (*(int *)(0x83fc + a0) != -1) {
        FUN_8c0220bc(0x8c2b59d0, *(u32 *)(0x83fc + a0), a2, a3);
        *(u32 *)(0x83fc + a0) = 0xffffffff;
    }
    return 1;
}

/*
 * FUN_8c0e6e74  0x8c0e6e74
 * name hint from a string it uses: GRAPHICS ENV
 * strings: "amazon.nj"; "GRAPHICS\\ENV"; "amazon.nj"; "GRAPHICS\\ENV"
 */
u32 FUN_8c0e6e74(u32 a0, u32 a1) {
    u32 uVar1;

    (*(code *)(&FUN_8c020a70))(a1, "amazon.nj", "GRAPHICS\\ENV", a0);
    uVar1 = (*(code *)(&FUN_8c020b68))(a1, "amazon.nj", "GRAPHICS\\ENV", a0);
    return uVar1;
}

/*
 * FUN_8c0e6ec8  0x8c0e6ec8
 */
u32 FUN_8c0e6ec8(int a0, u32 a1, u32 a2, u32 a3) {
    u32 uVar1;

    uVar1 = (**(code **)(*(int *)(a0 + 0x9e8) + 0x28))((int *)(a0 + 0x9e8), a1, a2, a3);
    return uVar1;
}

/*
 * FUN_8c0e6ef0  0x8c0e6ef0
 * called by: FUN_8c0e5e54
 */
u32 FUN_8c0e6ef0(int *a0, u32 unused_a1, u32 a2, u32 a3) {
    u32 uVar1;
    u32 in_fr1;
    char cVar2;

    cVar2 = '\0';
    uVar1 = 1;
    (**(code **)(*a0 + 0x1b0))(a0, 1, a2, a3);
    if (cVar2 == '\0') {
        a0[0x1e] = 0x3f800000;
        a0[0x1f] = 0x3e4ccccd;
    } else {
        *(u64 *)(a0 + 0x1e) = CONCAT44(0x3f800000, in_fr1);
        a0[0x1f] = 0x3e4ccccd;
        a0[0x20] = 0x458ca000;
    }
    FUN_8c102a7c(a0 + 0x2c4);
    FUN_8c102a7c(a0 + 0x2cc);
    FUN_8c102a7c(a0 + 0x2b4);
    FUN_8c102a7c(a0 + 700);
    uVar1 = FUN_8c102974(a0 + 0x2dc);
    return uVar1;
}

/*
 * FUN_8c0e705c  0x8c0e705c
 * name hint from a string it uses: 64 JUNGLE NIGHT
 * called by: Class_12b580_m1_0e634c, Class_12b580_m2_0e6548, FUN_8c0e6c00
 */
u32 FUN_8c0e705c(int a0, int a1, u32 a2) {
    u32 r7;
    u32 uVar1;
    u32 in_fr1;
    double dVar2;
    float fVar3;
    float fVar4;
    u64 in_dr14;
    double dVar5;
    double in_xd14;
    int ar4_00;
    int iVar6;
    char cVar7;
    char cVar8;

    cVar8 = '\0';
    cVar7 = '\0';
    fVar4 = (float)a1;
    if (fVar4 < 0.0) {
        fVar4 = fVar4 + 4.2949673e+09;
    }
    uVar1 = 0x43b40000;
    fVar4 = (((fVar4 * 360.0) / 72000.0) * 65536.0) / 360.0;
    dVar5 = (double)CONCAT44((int)((u64)in_dr14 >> 0x20), fVar4);
    ar4_00 = (int)fVar4;
    iVar6 = a1;
    FUN_8c25747c(ar4_00, a1, a2, r7, a1);
    FUN_8c010e38(ar4_00, a1, a2, r7, iVar6);
    if (cVar8 == '\0') {
        dVar5 = (double)CONCAT44((int)((u64)dVar5 >> 0x20), uVar1);
    } else {
        in_xd14 = (double)CONCAT44(uVar1, in_fr1);
    }
    if (*(int *)(a0 + 0x10dc) == 0) {
        uVar1 = rand();
        uVar1 = libgcc_divide_helper_01031c(uVar1, 2, a2);
        *(u32 *)(a0 + 0x8410) = uVar1;
        *(u8 **)(a0 + 0x83f8) = (&PTR_s_62_JUNGLE_DAYTIME1_8c13f2fc)[*(int *)(a0 + 0x8410)];
    } else if (*(int *)(a0 + 0x10dc) == 36000) {
        *(u32 *)(a0 + 0x8410) = 2;
        *(u8 **)(a0 + 0x83f8) = (&PTR_s_62_JUNGLE_DAYTIME1_8c13f2fc)[*(int *)(a0 + 0x8410)];
    }
    if (cVar8 == '\0') {
        dVar2 = (double)CONCAT44(0x461ba000, in_fr1);
    } else {
        dVar2 = 8.349145204665365e+24;
    }
    if (cVar7 == '\0') {
        fVar4 = SUB84(dVar5, 0) * (float)((u64)dVar2 >> 0x20);
    } else {
        fVar4 = SUB84(dVar5 * dVar2, 0);
    }
    if (cVar8 == '\0') {
        in_xd14 = (double)CONCAT44(fVar4, fVar4);
        fVar3 = 2490.0;
    } else {
        fVar4 = 2490.0;
        fVar3 = 4.73527e-41;
    }
    if (cVar7 == '\0' && fVar3 < fVar4) {
        if (cVar8 == '\0') {
            in_xd14 = (double)CONCAT44(0x451ba000, SUB84(in_xd14, 0));
        } else {
            in_xd14 = 7.17070546069488e-310;
        }
    }
    if (cVar7 == '\0') {
        iVar6 = (int)(float)((u64)in_xd14 >> 0x20);
    } else {
        iVar6 = (int)in_xd14;
    }
    *(int *)(a0 + 0x8400) = 0xbae - iVar6;
    return 0x8400;
}

/*
 * FUN_8c0e7190  0x8c0e7190
 */
u32 FUN_8c0e7190(int a0, u32 a1, u32 a2, u32 a3) {
    int iVar1;
    u32 a5;
    u32 *puVar2;
    u32 auStack_10[2];

    auStack_10[0] = 0;
    a5 = a1;
    iVar1 = FUN_8c100ce8(a1, a1, a2, a3);
    if ((iVar1 == 1) && (*(int *)(a0 + 0x9d4) != 0)) {
        (**(code **)(*(int *)(*(int *)(a0 + 0x9d4) + 8) + 0x88))(*(int *)(a0 + 0x9d4), a5, a2, a3);
    }
    FUN_8c0dc61c(a0, a1, a2, a3);
    FUN_8c0dc8fc(a0, a1, a2, a3);
    FUN_8c0dc7e8(a0, a1, a2, a3);
    puVar2 = auStack_10;
    iVar1 = FUN_8c100e4c(a1, puVar2);
    if ((iVar1 == 1) && (*(int *)(a0 + 0x9d4) != 0)) {
        (**(code **)(*(int *)(*(int *)(a0 + 0x9d4) + 8) + 0x184))(*(int *)(a0 + 0x9d4), puVar2, a2, a3);
    } else {
        puVar2 = auStack_10;
        iVar1 = FUN_8c100e4c(a1, puVar2);
        if ((iVar1 == 2) && (*(int *)(a0 + 0x9d4) != 0)) {
            (**(code **)(*(int *)(*(int *)(a0 + 0x9d4) + 8) + 0x188))(*(int *)(a0 + 0x9d4), puVar2, a2, a3);
        }
    }
    return 1;
}

/*
 * FUN_8c0e727c  0x8c0e727c
 */
u32 FUN_8c0e727c(int a0, u32 a1, u32 a2, u32 a3) {
    int iVar1;
    int a4;
    u32 uVar2;
    u32 *ar5_00;
    int iVar3;
    u32 auStack_20[2];

    auStack_20[0] = 0;
    if (*(int *)(a0 + 0xac8) != 0) {
        uVar2 = a1;
        iVar1 = get_field_24_05c284(*(u32 *)(a0 + 0xac8), a1);
        if ((iVar1 == 5) || (iVar1 == 7)) {
            uVar2 = 0;
            (**(code **)(*(int *)(*(int *)(a0 + 0xac8) + 8) + 0x84))(*(int *)(a0 + 0xac8), 0, a2, a3);
        }
        iVar1 = FUN_8c100cb4(a1);
        if (iVar1 == 1) {
            iVar1 = get_field_300_0bf154(a0 + 0xa4);
            a4 = FUN_8c0da588(a0 + 0xa4);
            for (iVar3 = 0; iVar3 < iVar1; iVar3 = iVar3 + 1) {
                uVar2 = 2;
                (**(code **)(*(int *)(a4 + 8) + 0x84))(a4, 2, a2, a3);
                a4 = list_node_next(a4);
            }
        }
        ar5_00 = auStack_20;
        iVar1 = FUN_8c100e4c(a1, ar5_00);
        if ((iVar1 == 1) && (*(int *)(a0 + 0x9d4) != 0)) {
            (**(code **)(*(int *)(*(int *)(a0 + 0x9d4) + 8) + 0x184))(*(int *)(a0 + 0x9d4), ar5_00, a2, a3);
        } else {
            ar5_00 = auStack_20;
            iVar1 = FUN_8c100e4c(a1, ar5_00);
            if ((iVar1 == 2) && (*(int *)(a0 + 0x9d4) != 0)) {
                (**(code **)(*(int *)(*(int *)(a0 + 0x9d4) + 8) + 0x188))(*(int *)(a0 + 0x9d4), ar5_00, a2, a3);
            }
        }
        iVar1 = FUN_8c100ce8(a1, ar5_00, a2, a3);
        if ((iVar1 == 1) && (*(int *)(a0 + 0x9d4) != 0)) {
            (**(code **)(*(int *)(*(int *)(a0 + 0x9d4) + 8) + 0x88))(*(int *)(a0 + 0x9d4), ar5_00, a2, a3);
        }
        FUN_8c0dc7e8(a0, a1, a2, a3);
        FUN_8c0dc8fc(a0, a1, a2, a3);
    }
    return 1;
}

/*
 * FUN_8c0e741c  0x8c0e741c
 */
u32 FUN_8c0e741c(void) {
    ret_const_1_0dc548();
    return 1;
}

/*
 * FUN_8c0e743c  0x8c0e743c
 * called by: FUN_8c0e68f4
 */
u32 FUN_8c0e743c(void) {
    u32 uVar1;

    FUN_8c219038();
    FUN_8c21907e();
    uVar1 = FUN_8c219070();
    return uVar1;
}

/*
 * ret_const_11940_0e749c  0x8c0e749c
 */
u32 ret_const_11940_0e749c(void) {
    return 0x11940;
}

/*
 * FUN_8c0e74a8  0x8c0e74a8
 * name hint from a string it uses: INCUBATOR
 * called by: FUN_8c0c5340
 * strings: "INCUBATOR"
 */
u32 *FUN_8c0e74a8(u32 *a0) {
    u32 uVar1;
    u8 *ar5_01;
    code *ar6_00;
    u8 *ar6_01;
    u32 uVar2;
    int iVar3;
    int iVar4;
    u32 in_fr1;
    float fVar5;
    double dVar6;
    u64 in_xd0;
    char cVar7;
    char cVar8;

    cVar8 = '\0';
    cVar7 = '\0';
    FUN_8c0d99e8(a0, "INCUBATOR", 3);
    *a0 = &g_8c12b3b8;
    uVar2 = 0x20;
    ar6_00 = FUN_8c0d6f68;
    FUN_8c010120(a0 + 0x29, FUN_8c0d6f28, FUN_8c0d6f68, 0x20, 0xc);
    FUN_8c016690(a0 + 0x89);
    FUN_8c0191e4(a0 + 0x8a);
    FUN_8c01a0cc(a0 + 0xaa);
    uVar1 = 0;
    FUN_8c015c58(a0 + 0x105, 0);
    FUN_8c016410(a0 + 0x111);
    FUN_8c0153b8(a0 + 0x122, uVar1);
    FUN_8c0e89a0(a0, uVar1, ar6_00, uVar2);
    FUN_8c019384(a0 + 0x8a);
    if (cVar8 != '\0') {
        in_fr1 = 0xc1200000;
    }
    g_8c4383c8 = 0xc1200000;
    g_8c4383c4 = 0xc1880000;
    if (cVar8 == '\0') {
        g_8c4383cc = 0;
        uVar1 = in_fr1;
    } else {
        uVar1 = 0x41800000;
        g_8c4383cc = in_fr1;
    }
    g_8c4383d4 = 0x41800000;
    g_8c4383d0 = 0xc1880000;
    if (cVar8 == '\0') {
        g_8c4383d8 = 0;
        uVar2 = uVar1;
    } else {
        uVar2 = 0x41800000;
        g_8c4383d8 = uVar1;
    }
    g_8c4383e0 = 0x41800000;
    g_8c4383dc = 0x41880000;
    if (cVar8 == '\0') {
        g_8c4383e4 = 0;
        g_8c4383f0 = uVar2;
    } else {
        g_8c4383f0 = 0xc1200000;
        g_8c4383e4 = uVar2;
    }
    g_8c4383ec = 0xc1200000;
    g_8c4383e8 = 0x41880000;
    if (cVar8 == '\0') {
        g_8c4383f0 = 0;
    }
    g_8c4383f4 = 0xff0f0f0f;
    g_8c4383f8 = 0xff00008f;
    g_8c4383fc = 0xff00008f;
    g_8c438400 = 0xff0f0f0f;
    uVar1 = 4;
    ar6_01 = &g_8c4383f4;
    ar5_01 = &g_8c4383c4;
    FUN_8c016464(a0 + 0x111, &g_8c4383c4, &g_8c4383f4, 4);
    FUN_8c014790(a0 + 0x111);
    for (iVar3 = 0; iVar3 < 3; iVar3 = iVar3 + 1) {
        for (iVar4 = 0; iVar4 < 4; iVar4 = iVar4 + 1) {
            if (cVar8 == '\0') {
                dVar6 = (double)CONCAT44(0x42140000, (float)iVar4);
            } else {
                dVar6 = -3023657517696.0;
            }
            if (cVar7 == '\0') {
                fVar5 = SUB84(dVar6, 0) * (float)((u64)dVar6 >> 0x20);
            } else {
                fVar5 = SUB84(dVar6 * dVar6, 0);
            }
            if (cVar8 == '\0') {
                dVar6 = (double)CONCAT44(0xc2860000, fVar5);
            } else {
                dVar6 = 3.66595689778914e-312;
            }
            if (cVar7 == '\0') {
                fVar5 = SUB84(dVar6, 0) + (float)((u64)dVar6 >> 0x20);
            } else {
                fVar5 = SUB84(dVar6 + dVar6, 0);
            }
            if (cVar8 == '\0') {
                a0[iVar3 * 0x20 + iVar4 * 8 + 0x2a] = fVar5;
            } else {
                *(u64 *)(a0 + iVar3 * 0x20 + iVar4 * 8 + 0x2a) = in_xd0;
            }
            if (cVar8 == '\0') {
                dVar6 = (double)CONCAT44(0x41e00000, (float)iVar3);
            } else {
                dVar6 = 60129550576.0;
            }
            if (cVar7 == '\0') {
                fVar5 = SUB84(dVar6, 0) * (float)((u64)dVar6 >> 0x20);
            } else {
                fVar5 = SUB84(dVar6 * dVar6, 0);
            }
            if (cVar8 == '\0') {
                dVar6 = (double)CONCAT44(0x422c0000, fVar5);
            } else {
                dVar6 = 3.74019760929537e-312;
            }
            if (cVar7 == '\0') {
                dVar6 = (double)CONCAT44((float)((u64)dVar6 >> 0x20) - SUB84(dVar6, 0), SUB84(dVar6, 0));
            } else {
                dVar6 = dVar6 - dVar6;
            }
            if (cVar8 == '\0') {
                a0[iVar3 * 0x20 + iVar4 * 8 + 0x2b] = (int)((u64)dVar6 >> 0x20);
            } else {
                *(double *)(a0 + iVar3 * 0x20 + iVar4 * 8 + 0x2b) = dVar6;
            }
            if (cVar8 == '\0') {
                a0[iVar3 * 0x20 + iVar4 * 8 + 0x2c] = 0;
            } else {
                *(u64 *)(a0 + iVar3 * 0x20 + iVar4 * 8 + 0x2c) = (u64)dVar6 & 0xffffffff;
            }
        }
    }
    if (cVar8 == '\0') {
        a0[0x20] = 0x430c0000;
        a0[0x21] = 0x42c80000;
        a0[0x23] = 0x44048000;
        a0[0x24] = 0x43cd0000;
        a0[0x25] = 0x41600000;
        a0[0x26] = 0x41200000;
        a0[0x27] = 0x41900000;
        a0[0x28] = 0x41500000;
    } else {
        *(u64 *)(a0 + 0x20) = 0x84430c0000;
        *(u64 *)(a0 + 0x21) = 0x8c42c80000;
        *(u64 *)(a0 + 0x23) = 0x9044048000;
        *(u64 *)(a0 + 0x24) = 0x9443cd0000;
        *(u64 *)(a0 + 0x25) = 0x9841600000;
        *(u64 *)(a0 + 0x26) = 0x9c41200000;
        *(u64 *)(a0 + 0x27) = 0xa041900000;
        *(u64 *)(a0 + 0x28) = 0x4f222fe641500000;
    }
    return a0;
}

/*
 * Class_12b3b8_m0_0e77ec  0x8c0e77ec
 * called by: Class_12b388_m0_0c5928
 */
u32 *Class_12b3b8_m0_0e77ec(u32 *a0, u32 a1, u32 a2, u32 a3) {
    u32 ar5_00;
    u32 ar6_00;
    u32 ar7_00;
    u32 in_stack_fffffff4;
    u32 ain0;

    ain0 = CONCAT22((short)((u32)in_stack_fffffff4 >> 0x10), (u16)a1);
    if (a0 != NULL) {
        *a0 = &g_8c12b3b8;
        FUN_8c015428(a0 + 0x122, 0xffffffff, a2, a3);
        free_if_nonnull_wrap_015c94(a0 + 0x105, 0xffffffff, a2, a3);
        Class_1299ec_m0_01a0f8(a0 + 0xaa, 0xffffffff, a2, a3);
        free_if_nonnull_wrap_019270(a0 + 0x8a, 0xffffffff, a2, a3);
        free_if_nonnull_wrap_016660(a0 + 0x89, 0xffffffff, a2, a3);
        ar7_00 = 0xc;
        ar6_00 = 0x20;
        vec_delete_array(a0 + 0x29, FUN_8c0d6f68, 0x20, 0xc);
        ar5_00 = 0;
        Class_12bce0_m0_0d9a98(a0, 0, ar6_00, ar7_00);
        if (0 < (short)ain0) {
            free_if_nonnull(a0);
        }
    }
    return a0;
}

/*
 * CIncubater_Create  0x8c0e78c0
 * strings: "GRAPHICS\\ENV"; "Incubater.pvm"; "Incubater.pvm"; "GRAPHICS\\ENV" ...
 */
u32 CIncubater_Create(int a0, u32 a1, u32 a2, u32 a3) {
    u32 uVar1;
    int iVar2;
    char *ar5_00;
    u32 uVar3;
    char *ar6_00;
    u32 ar7_00;
    int iVar4;

    uVar1 = get_field_4_0253e4(a0 + 0x488, a1, a2, a3);
    ar7_00 = 2;
    uVar3 = 0x8c4312a8;
    iVar2 = a0 + 0x498;
    FUN_8c239170(uVar1, iVar2, 0x8c4312a8, 2);
    for (iVar4 = 0; iVar4 < 2; iVar4 = iVar4 + 1) {
        *(u32 *)(iVar4 * 0xc + a0 + 0x49c) = 0x80000000;
    }
    uVar1 = get_field_4_0253e4(a0 + 0x488, iVar2, uVar3, ar7_00);
    ar6_00 = "GRAPHICS\\ENV";
    ar5_00 = "Incubater.pvm";
    iVar2 = FUN_8c02100c(a1, "Incubater.pvm", "GRAPHICS\\ENV", uVar1);
    if (iVar2 == 0) {
        uVar1 = 2;
        ar6_00 = NULL;
        ar5_00 = "CIncubater::Create()";
        report_error_message("Failed to load incubater textuers..", "CIncubater::Create()", 0, 2);
    }
    uVar3 = get_field_4_0253e4(a0 + 0x488, ar5_00, ar6_00, uVar1);
    FUN_8c015ccc(a0 + 0x414, uVar3);
    uVar1 = FUN_8c015cd4(a0 + 0x414, &g_8c13f750);
    return uVar1;
}

/*
 * Class_12b3b8_m1_0e79d4  0x8c0e79d4
 */
u32 Class_12b3b8_m1_0e79d4(int a0, u32 a1, u32 a2, u32 a3) {
    int a4;
    int iVar1;
    int iVar2;

    if (*(int *)(0x410 + a0) != 0) {
        for (iVar1 = 0; iVar1 < 3; iVar1 = iVar1 + 1) {
            for (iVar2 = 0; iVar2 < 4; iVar2 = iVar2 + 1) {
                if (*(int *)(0xa4 + a0 + iVar1 * 0x80 + iVar2 * 0x20) != 0) {
                    a4 = *(int *)(0xa4 + a0 + iVar1 * 0x80 + iVar2 * 0x20);
                    (**(code **)(*(int *)(a4 + 8) + 0x20))(a4, a1, a2, a3);
                }
            }
        }
    }
    return 1;
}

/*
 * ret_const_1_0e7a70  0x8c0e7a70
 */
u32 ret_const_1_0e7a70(void) {
    return 1;
}

/*
 * FUN_8c0e7a78  0x8c0e7a78
 */
u32 FUN_8c0e7a78(int a0, u32 a1, u32 a2, u32 a3) {
    int iVar1;
    int ar4_00;
    u32 uVar2;
    int iVar3;
    int *piVar4;
    u32 in_stack_ffffff50;
    int ain0;
    u8 auStack_80[12];
    u8 auStack_74[20];
    u16 uStack_60;
    u16 uStack_5e;
    u16 uStack_5c;
    u16 uStack_5a;
    u16 uStack_58;
    u16 uStack_56;
    u16 uStack_54;
    u16 uStack_52;
    u32 uStack_50;
    u8 auStack_30[16];

    Vec3_set_zero(auStack_30);
    uStack_50 = g_8c13f764;
    FUN_8c0162f8(auStack_74, a1, a2, a3);
    iVar1 = a0 + 0x228;
    FUN_8c0194c0(iVar1);
    FUN_8c219038();
    FUN_8c21907e();
    (**(code **)(*(int *)(a0 + 0x414) + 0x14))((int *)(a0 + 0x414), a1, a2, a3);
    if (*(int *)(a0 + 0x410) == 0) {
        free_if_nonnull_wrap_0151a0(auStack_74, 0xffffffff, a2, a3);
        object_dtor_delete(auStack_30, 0xffffffff, a2, a3);
    } else {
        if ((*(short *)(a0 + 0x224) != -1) && (*(short *)(a0 + 0x226) != -1)) {
            piVar4 = (int *)(a0 + *(short *)(a0 + 0x226) * 0x80 + *(short *)(a0 + 0x224) * 0x20 + 0xa4);
            uVar2 = 0;
            FUN_8c256328(0, a1, a2, a3, in_stack_ffffff50);
            FUN_8c019058();
            FUN_8c016524(a0 + 0x444, a1, a2, a3);
            FUN_8c256210(1);
            if (*piVar4 != 0) {
                a3 = 4;
                a2 = 0x8c437c48;
                FUN_8c016318(auStack_74, &uStack_50, 0x8c437c48, 4);
                FUN_8c016324(auStack_74, &uStack_60, a2);
                uVar2 = 0x80000060;
                FUN_8c015198(auStack_74, 0x80000060);
                FUN_8c01538c(a0 + 0x488, uVar2, a2);
                a1 = 1;
                FUN_8c014a94(a0 + 0x488, 1);
                iVar1 = get_field_24_05c284(*piVar4, a1);
                if (iVar1 == 0) {
                    uStack_60 = 0;
                    uStack_5e = 0x1f;
                    uStack_5c = 0;
                    uStack_5a = 0;
                    uStack_58 = 0xff;
                    uStack_56 = 0;
                    uStack_54 = 0xff;
                    uStack_52 = 0x1f;
                } else if (iVar1 == 10) {
                    iVar1 = (**(code **)(*(int *)(*piVar4 + 8) + 0x114))(*piVar4, a1, a2, a3);
                    if (iVar1 == 0x11) {
                        uStack_60 = 0;
                        uStack_5e = 0x3f;
                        uStack_5c = 0;
                        uStack_5a = 0x20;
                        uStack_58 = 0xff;
                        uStack_56 = 0x20;
                        uStack_54 = 0xff;
                        uStack_52 = 0x3f;
                    } else {
                        uStack_60 = 0;
                        uStack_5e = 0x9f;
                        uStack_5c = 0;
                        uStack_5a = 0x80;
                        uStack_58 = 0xff;
                        uStack_56 = 0x80;
                        uStack_54 = 0xff;
                        uStack_52 = 0x9f;
                    }
                } else if (iVar1 == 0xe) {
                    uStack_60 = 0;
                    uStack_5e = 0x7f;
                    uStack_5c = 0;
                    uStack_5a = 0x60;
                    uStack_58 = 0xff;
                    uStack_56 = 0x60;
                    uStack_54 = 0xff;
                    uStack_52 = 0x7f;
                } else if (iVar1 == 0xf) {
                    uStack_60 = 0;
                    uStack_5e = 0x5f;
                    uStack_5c = 0;
                    uStack_5a = 0x40;
                    uStack_58 = 0xff;
                    uStack_56 = 0x40;
                    uStack_54 = 0xff;
                    uStack_52 = 0x5f;
                }
                FUN_8c01636c(auStack_74, a1, a2, a3);
            }
        }
        for (iVar1 = 0; iVar1 < 3; iVar1 = iVar1 + 1) {
            for (iVar3 = 0; iVar3 < 4; iVar3 = iVar3 + 1) {
                if (*(int *)(a0 + iVar1 * 0x80 + iVar3 * 0x20 + 0xa4) != 0) {
                    piVar4 = (int *)(a0 + iVar1 * 0x80 + iVar3 * 0x20 + 0xa4);
                    ain0 = iVar3;
                    (**(code **)(*(int *)(*piVar4 + 8) + 0x124))(*piVar4, a1, a2, a3);
                    (**(code **)(*(int *)(*piVar4 + 8) + 0x128))(*piVar4, a1, a2, a3);
                    (**(code **)(*(int *)(*piVar4 + 8) + 300))(*piVar4, a1, a2, a3);
                    vec3_copy_8c023d8c(auStack_30, auStack_80, a2, a3);
                    a1 = 0xffffffff;
                    object_dtor_delete(auStack_80, 0xffffffff, a2, a3);
                    ar4_00 = *piVar4;
                    FUN_8c0f4b44(ar4_00);
                    FUN_8c219070();
                    uVar2 = 0;
                    FUN_8c256328(0, a1, a2, a3, ain0);
                    FUN_8c019058();
                    FUN_8c019128();
                    FUN_8c0190f0();
                    FUN_8c019160();
                    FUN_8c019198(uVar2, a1);
                    (**(code **)(*(int *)(*piVar4 + 8) + 0x3c))(*piVar4, a1, a2, a3);
                    FUN_8c256210(1);
                }
            }
        }
        free_if_nonnull_wrap_0151a0(auStack_74, 0xffffffff, a2, a3);
        object_dtor_delete(auStack_30, 0xffffffff, a2, a3);
    }
    return 1;
}

/*
 * ret_const_3f800000_0e8040  0x8c0e8040
 */
u32 ret_const_3f800000_0e8040(void) {
    u32 in_r0;

    return in_r0;
}

/*
 * FUN_8c0e8048  0x8c0e8048
 * name hint from a string it uses: Failed to set texture wrap
 */
u32 FUN_8c0e8048(int a0, u32 a1, u32 a2, u32 a3) {
    u32 uVar1;

    uVar1 = CTexture_LoadFromCache(a0 + 0x488, a1, a2, a3);
    return uVar1;
}

/*
 * FUN_8c0e806c  0x8c0e806c
 * name hint from a string it uses: Failed wrap
 */
u32 FUN_8c0e806c(int a0, u32 a1, u32 a2, u32 a3) {
    u32 uVar1;

    uVar1 = CTexture_ReleaseFromVRAM(a0 + 0x488, a1, a2, a3);
    return uVar1;
}

/*
 * FUN_8c0e8090  0x8c0e8090
 */
u32 FUN_8c0e8090(int a0, u32 a1, u32 a2, u32 a3) {
    u16 *puVar1;
    u16 uStack_10;
    u16 uStack_e;

    FUN_8c0e8ae0(a0, a1, a2, a3, &uStack_10);
    puVar1 = (u16 *)(a0 + 0x224);
    *puVar1 = uStack_10;
    puVar1[1] = uStack_e;
    free_if_nonnull_wrap_016660(&uStack_10, 0xffffffff, a2, a3);
    if ((*(short *)(0x224 + a0) != -1) && (*(short *)(0x226 + a0) != -1)) {
        FUN_8c0e810c(a0, a1, a0 + 0x224, a3);
        a1 = 0;
    }
    return a1;
}

/*
 * FUN_8c0e810c  0x8c0e810c
 * called by: FUN_8c0e8090
 */
u32 FUN_8c0e810c(int a0, u32 a1, short *a2, u32 a3) {
    u32 ar5_00;
    short *ar6_00;

    ar5_00 = a1;
    ar6_00 = a2;
    FUN_8c0c4da0(a0, a1);
    *(u32 *)(0xa4 + a0 + a2[1] * 0x80 + *a2 * 0x20) = a1;
    FUN_8c0d6fb8(a0 + a2[1] * 0x80 + *a2 * 0x20 + 0xa4, ar5_00, ar6_00, a3);
    *(int *)(0x410 + a0) = *(int *)(0x410 + a0) + 1;
    a2[1] = -1;
    *a2 = -1;
    return a1;
}

/*
 * FUN_8c0e81b4  0x8c0e81b4
 */
u32 FUN_8c0e81b4(int *a0, u32 a1, u32 a2, u32 a3) {
    u32 uVar1;

    FUN_8c036988(a1, a1, a2);
    uVar1 = (**(code **)(*a0 + 0x4c))(a0, a1, a2, a3);
    return uVar1;
}

/*
 * FUN_8c0e81f0  0x8c0e81f0
 * called by: FUN_8c0e8280
 */
u32 FUN_8c0e81f0(int a0, short *a1) {
    u32 uVar1;

    uVar1 = *(u32 *)(0xa4 + a0 + *(short *)(0x226 + a0) * 0x80 + *(short *)(0x224 + a0) * 0x20);
    *(u32 *)(0xa4 + a0 + a1[1] * 0x80 + *a1 * 0x20) = 0;
    *(int *)(0x410 + a0) = *(int *)(0x410 + a0) + -1;
    *(u32 *)(0x440 + a0) = 1;
    return uVar1;
}

/*
 * ret_const_1_0e8278  0x8c0e8278
 */
u32 ret_const_1_0e8278(void) {
    return 1;
}

/*
 * FUN_8c0e8280  0x8c0e8280
 */
u32 FUN_8c0e8280(int a0, u32 a1, u32 a2, u32 a3) {
    u32 ar4_00;
    u16 *puVar1;
    u32 uVar2;
    u8 *ar6_00;
    u8 auStack_60[4];
    u16 uStack_5c;
    u16 uStack_5a;
    int iStack_58;
    int iStack_54;
    u32 uStack_50;
    int iStack_4c;
    int iStack_48;
    int iStack_44;
    int iStack_40;
    int iStack_3c;
    int iStack_38;
    int iStack_34;
    u32 uStack_2c;
    u32 uStack_28;
    u32 uStack_24;
    u8 auStack_20[4];
    u8 auStack_1c[16];

    uStack_24 = 0;
    uVar2 = a1;
    Vec3_ctor_zero(auStack_20, a1, a2);
    ar4_00 = FUN_8c01f520(0x8c3dd7dc, uVar2, a2, a3);
    iStack_34 = FUN_8c0637d0(a1, uVar2, a2);
    if (iStack_34 == 0) {
        iStack_38 = FUN_8c100898(a1);
        if (iStack_38 == 1) {
            FUN_8c1004b4(a1);
        }
        iStack_3c = FUN_8c1008e4(a1);
        if (iStack_3c == 1) {
            FUN_8c10052c(a1);
        }
        iStack_40 = FUN_8c100930(a1);
        if (iStack_40 == 1) {
            FUN_8c1005a4(a1);
        }
        iStack_44 = FUN_8c10097c(a1);
        if (iStack_44 == 1) {
            FUN_8c10061c(a1);
        }
        FUN_8c1002a8(a1);
        ar6_00 = auStack_1c;
        FUN_8c101210(a1, auStack_20, ar6_00);
        FUN_8c0e89c4(a0, auStack_20, ar6_00, a3, &uStack_5c);
        puVar1 = (u16 *)(a0 + 0x224);
        *puVar1 = uStack_5c;
        puVar1[1] = uStack_5a;
        free_if_nonnull_wrap_016660(&uStack_5c, 0xffffffff, ar6_00, a3);
        if ((*(short *)(0x224 + a0) != -1) && (*(short *)(0x226 + a0) != -1)) {
            uVar2 = g_8c431a58;
            iStack_48 = FUN_8c01ad9c(ar4_00, uVar2);
            if (iStack_48 == 4) {
                iStack_54 = (int)*(short *)(0x226 + a0);
                iStack_58 = (int)*(short *)(0x224 + a0);
                if ((*(int *)(0xa4 + a0 + iStack_54 * 0x80 + iStack_58 * 0x20) != 0) &&
                    (iStack_4c = FUN_8c10031c(a1), iStack_4c == 1)) {
                    FUN_8c0c51c4(a1);
                    FUN_8c0e84c8(auStack_60, a0 + 0x224);
                    uStack_50 = FUN_8c0e81f0(a0, auStack_60);
                    FUN_8c0e59c0(a1, uStack_50);
                    free_if_nonnull_wrap_016660(auStack_60, 0xffffffff, ar6_00, a3);
                    uVar2 = 3;
                    FUN_8c0e4330(a1, 3);
                    FUN_8c0c90d0(a1);
                }
            }
        }
        uStack_2c = 1;
        Vec3_dtor(auStack_20, 0xffffffff, ar6_00, a3);
        uStack_28 = uStack_2c;
    } else {
        uStack_28 = 1;
        Vec3_dtor(auStack_20, 0xffffffff, a2, a3);
    }
    return uStack_28;
}

/*
 * FUN_8c0e84c8  0x8c0e84c8
 * called by: FUN_8c0e8280, FUN_8c0e89c4, FUN_8c0e8ae0
 */
u16 *FUN_8c0e84c8(u16 *a0, u16 *a1) {
    *a0 = *a1;
    a0[1] = a1[1];
    return a0;
}

/*
 * FUN_8c0e84d8  0x8c0e84d8
 */
u32 FUN_8c0e84d8(int *a0, u32 a1, u32 a2, u32 a3) {
    u32 uVar1;

    uVar1 = (**(code **)(0x1c0 + *a0))(a0, a1, a2, a3);
    return uVar1;
}

/*
 * FUN_8c0e84f8  0x8c0e84f8
 */
int FUN_8c0e84f8(int a0) {
    int iVar1;

    FUN_8c235ee4();
    FUN_8c0194c0(a0 + 0x228);
    iVar1 = 0x440;
    *(u32 *)(0x440 + a0) = 0;
    return iVar1;
}

/*
 * FUN_8c0e8538  0x8c0e8538
 */
u32 FUN_8c0e8538(int *a0, u32 a1, u32 a2, u32 a3) {
    u32 uVar1;

    uVar1 = (**(code **)(0x1c4 + *a0))(a0, a1, a2, a3);
    return uVar1;
}

/*
 * FUN_8c0e855c  0x8c0e855c
 */
u32 FUN_8c0e855c(int a0) {
    if (*(int *)(0x440 + a0) == 1) {
        return 1;
    }
    return 0;
}

/*
 * FUN_8c0e8574  0x8c0e8574
 */
u32 FUN_8c0e8574(int a0, u32 a1, u32 a2, u32 a3) {
    (**(code **)(*(int *)(a0 + 0x228) + 0xc))((int *)(a0 + 0x228), a1, a2, a3);
    return 1;
}

/*
 * FUN_8c0e8598  0x8c0e8598
 */
u32 FUN_8c0e8598(int a0, int a1, u32 unused_a2, u32 a3) {
    u32 uVar1;
    int iVar2;
    int iVar3;
    u32 ar6_00;
    int iVar4;
    int iVar5;
    int iVar6;
    int iVar7;

    iVar5 = 0;
    iVar4 = 0;
    for (iVar6 = 0; iVar6 < 3; iVar6 = iVar6 + 1) {
        for (iVar7 = 0; iVar7 < 4; iVar7 = iVar7 + 1) {
            if (*(int *)(iVar5 * 0x80 + a1) != -1) {
                ar6_00 = *(u32 *)(a1 + iVar5 * 0x80 + 0x2c);
                uVar1 = (*(code *)(&FUN_8c0fef94))(0x8c3eb324, *(u32 *)(iVar5 * 0x80 + a1), ar6_00, a3);
                *(u32 *)(0xa4 + a0 + iVar6 * 0x80 + iVar7 * 0x20) = uVar1;
                if (*(int *)(iVar5 * 0x80 + a1) == 0xf) {
                    iVar3 = a1 + iVar5 * 0x80;
                    iVar2 = *(int *)(0xa4 + a0 + iVar6 * 0x80 + iVar7 * 0x20);
                    (**(code **)(0x108 + *(int *)(iVar2 + 8)))(iVar2, iVar3, ar6_00, a3);
                    iVar2 = *(int *)(0xa4 + a0 + iVar6 * 0x80 + iVar7 * 0x20);
                    uVar1 = (**(code **)(0x148 + *(int *)(iVar2 + 8)))(iVar2, iVar3, ar6_00, a3);
                    iVar3 = (int)(short)uVar1;
                    iVar2 = *(int *)(0xa4 + a0 + iVar6 * 0x80 + iVar7 * 0x20);
                    (**(code **)(0xe0 + *(int *)(iVar2 + 8)))(iVar2, 0x8c3eb334, iVar3, a3);
                } else {
                    iVar3 = a1 + iVar5 * 0x80;
                    iVar2 = *(int *)(0xa4 + a0 + iVar6 * 0x80 + iVar7 * 0x20);
                    (**(code **)(0x108 + *(int *)(iVar2 + 8)))(iVar2, iVar3, ar6_00, a3);
                    iVar2 = *(int *)(0xa4 + a0 + iVar6 * 0x80 + iVar7 * 0x20);
                    uVar1 = (**(code **)(0x148 + *(int *)(iVar2 + 8)))(iVar2, iVar3, ar6_00, a3);
                    iVar3 = (int)(short)uVar1;
                    iVar2 = *(int *)(0xa4 + a0 + iVar6 * 0x80 + iVar7 * 0x20);
                    uVar1 = 0x8c3eb334;
                    (**(code **)(0xe0 + *(int *)(iVar2 + 8)))(iVar2, 0x8c3eb334, iVar3, a3);
                    iVar2 = *(int *)(0xa4 + a0 + iVar6 * 0x80 + iVar7 * 0x20);
                    (**(code **)(*(int *)(iVar2 + 8) + 0x5c))(iVar2, uVar1, iVar3, a3);
                    (*(code *)(&FUN_8c0d6fb8))(a0 + iVar6 * 0x80 + iVar7 * 0x20 + 0xa4, uVar1, iVar3, a3);
                }
                (*(code *)(&FUN_8c0c4da0))(a0, *(u32 *)(0xa4 + a0 + iVar6 * 0x80 + iVar7 * 0x20), iVar3, a3);
                iVar4 = iVar4 + 1;
            }
            iVar5 = iVar5 + 1;
        }
    }
    *(int *)(0x410 + a0) = iVar4;
    return 1;
}

/*
 * FUN_8c0e8840  0x8c0e8840
 */
u32 FUN_8c0e8840(int a0, int a1, u32 a2, u32 a3) {
    int a4;
    int iVar1;
    int iVar2;
    int iVar3;

    iVar1 = 0;
    for (iVar2 = 0; iVar2 < 0xc; iVar2 = iVar2 + 1) {
        *(u32 *)(iVar2 * 0x80 + a1) = 0xffffffff;
    }
    for (iVar2 = 0; iVar2 < 3; iVar2 = iVar2 + 1) {
        for (iVar3 = 0; iVar3 < 4; iVar3 = iVar3 + 1) {
            if (*(int *)(0xa4 + a0 + iVar2 * 0x80 + iVar3 * 0x20) != 0) {
                a4 = *(int *)(0xa4 + a0 + iVar2 * 0x80 + iVar3 * 0x20);
                (**(code **)(0x15c + *(int *)(a4 + 8)))(a4, a1 + iVar1 * 0x80, a2, a3);
                iVar1 = iVar1 + 1;
            }
        }
    }
    return 1;
}

/*
 * noop_0e88fc  0x8c0e88fc
 */
u32 noop_0e88fc(void) {
    u32 in_r0;

    return in_r0;
}

/*
 * FUN_8c0e8900  0x8c0e8900
 */
u32 FUN_8c0e8900(int a0, u32 a1, u32 a2, u32 a3) {
    int iVar1;
    int iVar2;

    *(u32 *)(0x410 + a0) = 0;
    *(u32 *)(0x440 + a0) = 0;
    for (iVar1 = 0; iVar1 < 3; iVar1 = iVar1 + 1) {
        for (iVar2 = 0; iVar2 < 4; iVar2 = iVar2 + 1) {
            if (*(int *)(0xa4 + a0 + iVar1 * 0x80 + iVar2 * 0x20) != 0) {
                FUN_8c0d1b90(a0 + iVar1 * 0x80 + iVar2 * 0x20 + 0xa4, a1, a2, a3);
            }
        }
    }
    return 1;
}

/*
 * FUN_8c0e89a0  0x8c0e89a0
 * called by: FUN_8c0e74a8
 */
u32 FUN_8c0e89a0(int *a0, u32 unused_a1, u32 a2, u32 a3) {
    u32 uVar1;

    uVar1 = (**(code **)(0x1b0 + *a0))(a0, 1, a2, a3);
    return uVar1;
}

/*
 * FUN_8c0e89c4  0x8c0e89c4
 * called by: FUN_8c0e8280
 */
u32 FUN_8c0e89c4(u32 unused_a0, double *a1, u32 unused_a2, u32 a3, u32 s0) {
    u32 ar6_00;
    int iVar1;
    float fVar2;
    float fVar4;
    double dVar3;
    double in_dr2;
    bool bVar5;
    char cVar6;
    char cVar7;
    u16 uStack_10;
    u16 uStack_e;

    cVar7 = '\0';
    cVar6 = '\0';
    ar6_00 = 0xffffffff;
    FUN_8c10273c(&uStack_10, 0xffffffff, 0xffffffff);
    fVar2 = g_8c1264b8;
    fVar4 = _UNK_8c1264bc;
    if (cVar7 == '\0') {
        fVar2 = *(float *)a1;
        fVar4 = g_8c1264b8;
    }
    if (fVar2 == fVar4) {
        FUN_8c0e84c8(s0, &uStack_10);
        free_if_nonnull_wrap_016660(&uStack_10, 0xffffffff, ar6_00, a3);
    } else {
        for (iVar1 = 0; iVar1 < 4; iVar1 = iVar1 + 1) {
            if (cVar7 == '\0') {
                in_dr2 = (double)CONCAT44(*(float *)a1, SUB84(in_dr2, 0));
            } else {
                in_dr2 = *a1;
            }
            if (cVar7 == '\0') {
                dVar3 = (double)CONCAT44(0x42f00000, (float)iVar1);
            } else {
                dVar3 = 206158464480.0;
            }
            if (cVar6 == '\0') {
                fVar2 = SUB84(dVar3, 0) * (float)((u64)dVar3 >> 0x20);
            } else {
                fVar2 = SUB84(dVar3 * dVar3, 0);
            }
            if (cVar7 == '\0') {
                dVar3 = (double)CONCAT44(0x42480000, fVar2);
            } else {
                dVar3 = 123145319686144.0;
            }
            if (cVar6 == '\0') {
                bVar5 = (float)((u64)in_dr2 >> 0x20) < SUB84(dVar3, 0) + (float)((u64)dVar3 >> 0x20);
            } else {
                bVar5 = in_dr2 < dVar3 + dVar3;
            }
            if (!bVar5) {
                if (cVar7 == '\0') {
                    in_dr2 = (double)CONCAT44(*(float *)a1, SUB84(in_dr2, 0));
                } else {
                    in_dr2 = *a1;
                }
                if (cVar7 == '\0') {
                    dVar3 = (double)CONCAT44(0x42f00000, (float)iVar1);
                } else {
                    dVar3 = 206158464480.0;
                }
                if (cVar6 == '\0') {
                    fVar2 = SUB84(dVar3, 0) * (float)((u64)dVar3 >> 0x20);
                } else {
                    fVar2 = SUB84(dVar3 * dVar3, 0);
                }
                if (cVar7 == '\0') {
                    dVar3 = (double)CONCAT44(0x42480000, fVar2);
                } else {
                    dVar3 = 123145319686144.0;
                }
                if (cVar6 == '\0') {
                    fVar2 = SUB84(dVar3, 0) + (float)((u64)dVar3 >> 0x20);
                } else {
                    fVar2 = SUB84(dVar3 + dVar3, 0);
                }
                if (cVar7 == '\0') {
                    dVar3 = (double)CONCAT44(0x42dc0000, fVar2);
                } else {
                    dVar3 = 32985353214976.0;
                }
                if (cVar6 == '\0') {
                    bVar5 = SUB84(dVar3, 0) + (float)((u64)dVar3 >> 0x20) < (float)((u64)in_dr2 >> 0x20);
                } else {
                    bVar5 = dVar3 + dVar3 < in_dr2;
                }
                if (!bVar5) {
                    uStack_10 = (u16)iVar1;
                    break;
                }
            }
        }
        for (iVar1 = 0; iVar1 < 3; iVar1 = iVar1 + 1) {
            if (cVar7 == '\0') {
                in_dr2 = (double)CONCAT44(*(float *)((int)a1 + 4), SUB84(in_dr2, 0));
            } else {
                in_dr2 = *(double *)((int)a1 + 4);
            }
            if (cVar7 == '\0') {
                dVar3 = (double)CONCAT44(0x42be0000, (float)iVar1);
            } else {
                dVar3 = 8796095209216.0;
            }
            if (cVar6 == '\0') {
                fVar2 = SUB84(dVar3, 0) * (float)((u64)dVar3 >> 0x20);
            } else {
                fVar2 = SUB84(dVar3 * dVar3, 0);
            }
            if (cVar7 == '\0') {
                dVar3 = (double)CONCAT44(0x42a00000, fVar2);
            } else {
                dVar3 = 14293653344256.0;
            }
            if (cVar6 == '\0') {
                bVar5 = (float)((u64)in_dr2 >> 0x20) < SUB84(dVar3, 0) + (float)((u64)dVar3 >> 0x20);
            } else {
                bVar5 = in_dr2 < dVar3 + dVar3;
            }
            if (!bVar5) {
                if (cVar7 == '\0') {
                    in_dr2 = (double)CONCAT44(*(float *)((int)a1 + 4), SUB84(in_dr2, 0));
                } else {
                    in_dr2 = *(double *)((int)a1 + 4);
                }
                if (cVar7 == '\0') {
                    dVar3 = (double)CONCAT44(0x42be0000, (float)iVar1);
                } else {
                    dVar3 = 8796095209216.0;
                }
                if (cVar6 == '\0') {
                    fVar2 = SUB84(dVar3, 0) * (float)((u64)dVar3 >> 0x20);
                } else {
                    fVar2 = SUB84(dVar3 * dVar3, 0);
                }
                if (cVar7 == '\0') {
                    dVar3 = (double)CONCAT44(0x42a00000, fVar2);
                } else {
                    dVar3 = 14293653344256.0;
                }
                if (cVar6 == '\0') {
                    fVar2 = SUB84(dVar3, 0) + (float)((u64)dVar3 >> 0x20);
                } else {
                    fVar2 = SUB84(dVar3 + dVar3, 0);
                }
                if (cVar7 == '\0') {
                    dVar3 = (double)CONCAT44(0x42aa0000, fVar2);
                } else {
                    dVar3 = 2.993931217461508e-78;
                }
                if (cVar6 == '\0') {
                    bVar5 = SUB84(dVar3, 0) + (float)((u64)dVar3 >> 0x20) < (float)((u64)in_dr2 >> 0x20);
                } else {
                    bVar5 = dVar3 + dVar3 < in_dr2;
                }
                if (!bVar5) {
                    uStack_e = (u16)iVar1;
                    break;
                }
            }
        }
        FUN_8c0e84c8(s0, &uStack_10);
        free_if_nonnull_wrap_016660(&uStack_10, 0xffffffff, ar6_00, a3);
    }
    return 0;
}

/*
 * FUN_8c0e8ae0  0x8c0e8ae0
 * called by: FUN_8c0e8090
 */
u32 FUN_8c0e8ae0(int a0, u32 unused_a1, u32 unused_a2, u32 a3, u32 s0) {
    u32 ar6_00;
    int iVar1;
    int iVar2;
    u16 uStack_1c;
    u16 uStack_1a;

    ar6_00 = 0xffffffff;
    FUN_8c10273c(&uStack_1c, 0xffffffff, 0xffffffff);
    iVar1 = 0;
    do {
        if (2 < iVar1) {
        LAB_8c0e8b40:
            FUN_8c0e84c8(s0, &uStack_1c);
            free_if_nonnull_wrap_016660(&uStack_1c, 0xffffffff, ar6_00, a3);
            return 0;
        }
        for (iVar2 = 0; iVar2 < 4; iVar2 = iVar2 + 1) {
            if (*(int *)(0xa4 + a0 + iVar1 * 0x80 + iVar2 * 0x20) == 0) {
                uStack_1c = (u16)iVar2;
                uStack_1a = (u16)iVar1;
                goto LAB_8c0e8b40;
            }
        }
        iVar1 = iVar1 + 1;
    } while (true);
}

/*
 * get_field_410_0e8b74  0x8c0e8b74
 */
u32 get_field_410_0e8b74(int a0) {
    return *(u32 *)(0x410 + a0);
}

/*
 * noop_0e8b80  0x8c0e8b80
 */
u32 noop_0e8b80(void) {
    u32 in_r0;

    return in_r0;
}

/*
 * ret_const_0_0e8b84  0x8c0e8b84
 */
u32 ret_const_0_0e8b84(void) {
    return 0;
}

/*
 * noop_0e8b8c  0x8c0e8b8c
 */
u32 noop_0e8b8c(void) {
    u32 in_r0;

    return in_r0;
}

/*
 * noop_0e8b90  0x8c0e8b90
 */
u32 noop_0e8b90(void) {
    u32 in_r0;

    return in_r0;
}

/*
 * ret_const_0_0e8b94  0x8c0e8b94
 */
u32 ret_const_0_0e8b94(void) {
    return 0;
}

/*
 * noop_0e8b9c  0x8c0e8b9c
 */
u32 noop_0e8b9c(void) {
    u32 in_r0;

    return in_r0;
}

/*
 * noop_0e8ba0  0x8c0e8ba0
 */
u32 noop_0e8ba0(void) {
    u32 in_r0;

    return in_r0;
}

/*
 * noop_0e8ba4  0x8c0e8ba4
 */
u32 noop_0e8ba4(void) {
    u32 in_r0;

    return in_r0;
}

/*
 * noop_0e8ba8  0x8c0e8ba8
 */
u32 noop_0e8ba8(void) {
    u32 in_r0;

    return in_r0;
}

/*
 * ret_const_0_0e8bac  0x8c0e8bac
 */
u32 ret_const_0_0e8bac(void) {
    return 0;
}

/*
 * ret_const_0_0e8bb4  0x8c0e8bb4
 */
u32 ret_const_0_0e8bb4(void) {
    u32 in_r0;

    return in_r0;
}

/*
 * ret_const_0_0e8bbc  0x8c0e8bbc
 */
u32 ret_const_0_0e8bbc(void) {
    return 0;
}

/*
 * ret_const_0_0e8bc4  0x8c0e8bc4
 */
u32 ret_const_0_0e8bc4(void) {
    return 0;
}

/*
 * ret_const_0_0e8bcc  0x8c0e8bcc
 */
u32 ret_const_0_0e8bcc(void) {
    return 0;
}

/*
 * noop_0e8bd4  0x8c0e8bd4
 */
u32 noop_0e8bd4(void) {
    u32 in_r0;

    return in_r0;
}

/*
 * ret_const_0_0e8bd8  0x8c0e8bd8
 */
u32 ret_const_0_0e8bd8(void) {
    u32 in_r0;

    return in_r0;
}

/*
 * noop_0e8be0  0x8c0e8be0
 */
u32 noop_0e8be0(void) {
    u32 in_r0;

    return in_r0;
}

/*
 * noop_0e8be4  0x8c0e8be4
 */
u32 noop_0e8be4(void) {
    u32 in_r0;

    return in_r0;
}

/*
 * noop_0e8be8  0x8c0e8be8
 */
u32 noop_0e8be8(void) {
    u32 in_r0;

    return in_r0;
}

/*
 * ret_const_0_0e8bec  0x8c0e8bec
 */
u32 ret_const_0_0e8bec(void) {
    return 0;
}

/*
 * FUN_8c0e8bf4  0x8c0e8bf4
 */
int FUN_8c0e8bf4(int a0, u32 a1) {
    int iVar1;

    iVar1 = 0x10dc;
    *(u32 *)(0x10dc + a0) = a1;
    return iVar1;
}

/*
 * FUN_8c0e8c00  0x8c0e8c00
 */
u32 *FUN_8c0e8c00(void) {
    return &g_8c0e8c08;
}

/*
 * FUN_8c0e8c0c  0x8c0e8c0c
 */
u32 *FUN_8c0e8c0c(void) {
    return &g_8c0e8c14;
}

/*
 * get_field_10dc_0e8c18  0x8c0e8c18
 */
u32 get_field_10dc_0e8c18(int a0) {
    return *(u32 *)(0x10dc + a0);
}

/*
 * FUN_8c0e8c24  0x8c0e8c24
 */
int FUN_8c0e8c24(int a0) {
    return a0 + 0x10dc;
}

/*
 * get_field_9d4_0e8c34  0x8c0e8c34
 */
u32 get_field_9d4_0e8c34(int a0) {
    return *(u32 *)(0x9d4 + a0);
}

/*
 * get_field_acc_0e8c40  0x8c0e8c40
 */
u32 get_field_acc_0e8c40(int a0) {
    return *(u32 *)(0xacc + a0);
}

/*
 * ret_const_0_0e8c4c  0x8c0e8c4c
 */
u32 ret_const_0_0e8c4c(void) {
    return 0;
}

/*
 * FUN_8c0e8c54  0x8c0e8c54
 */
int FUN_8c0e8c54(int a0) {
    return a0 + 0xc0c;
}

/*
 * FUN_8c0e8c64  0x8c0e8c64
 */
u32 FUN_8c0e8c64(int a0) {
    float in_fr4;

    if (in_fr4 < 0.0) {
        in_fr4 = 0.0;
    }
    *(float *)(a0 + 0x106c) = in_fr4;
    return 0x106c;
}

/*
 * FUN_8c0e8c7c  0x8c0e8c7c
 */
u32 FUN_8c0e8c7c(void) {
    return 0x106c;
}

/*
 * FUN_8c0e8c8c  0x8c0e8c8c
 */
u32 *FUN_8c0e8c8c(void) {
    return &g_8c0e8c94;
}

/*
 * FUN_8c0e8c98  0x8c0e8c98
 */
u32 *FUN_8c0e8c98(void) {
    return &g_8c0e8ca0;
}

/*
 * FUN_8c0e8ca4  0x8c0e8ca4
 */
u32 FUN_8c0e8ca4(int a0) {
    u32 uVar1;

    uVar1 = FUN_8c0d98d4(a0 + 0x22704);
    return uVar1;
}

/*
 * FUN_8c0e8cc8  0x8c0e8cc8
 */
int FUN_8c0e8cc8(int a0, u32 a1) {
    int iVar1;

    iVar1 = 0x23250;
    *(u32 *)(0x23250 + a0) = a1;
    return iVar1;
}

/*
 * get_field_23250_0e8cd4  0x8c0e8cd4
 */
u32 get_field_23250_0e8cd4(int a0) {
    return *(u32 *)(0x23250 + a0);
}

/*
 * get_field_23254_0e8ce0  0x8c0e8ce0
 */
u32 get_field_23254_0e8ce0(int a0) {
    return *(u32 *)(0x23254 + a0);
}

/*
 * FUN_8c0e8cec  0x8c0e8cec
 */
u32 FUN_8c0e8cec(void) {
    return 0x2324c;
}

/*
 * FUN_8c0e8cfc  0x8c0e8cfc
 */
u32 FUN_8c0e8cfc(int a0) {
    u32 r5;
    u32 r6;
    u32 r7;
    u32 uVar1;

    uVar1 = FUN_8c0de6c0(a0 + 0x13b24, r5, r6, r7, a0);
    return uVar1;
}

/*
 * FUN_8c0e8d28  0x8c0e8d28
 */
u32 FUN_8c0e8d28(int a0) {
    u32 r5;
    u32 r6;
    u32 r7;
    u32 uVar1;

    uVar1 = FUN_8c0de6b0(a0 + 0x13b70, r5, r6, r7, a0);
    return uVar1;
}

/*
 * FUN_8c0e8d54  0x8c0e8d54
 */
u32 FUN_8c0e8d54(int a0) {
    u32 uVar1;

    uVar1 = FUN_8c0e8d80(a0 + 0x13b8c);
    return uVar1;
}

/*
 * FUN_8c0e8d80  0x8c0e8d80
 * called by: FUN_8c0e8d54
 */
u32 FUN_8c0e8d80(int a0) {
    float in_fr4;

    if (in_fr4 < 0.0) {
        in_fr4 = 0.0;
    }
    *(float *)(a0 + 0xeb40) = in_fr4;
    return 0xeb40;
}

/*
 * FUN_8c0e8d98  0x8c0e8d98
 */
int FUN_8c0e8d98(int a0, u32 a1) {
    int iVar1;

    iVar1 = 0x226f4;
    *(u32 *)(0x226f4 + a0) = a1;
    return iVar1;
}

/*
 * FUN_8c0e8da4  0x8c0e8da4
 */
u32 *FUN_8c0e8da4(void) {
    return &g_8c0e8dac;
}

/*
 * FUN_8c0e8db0  0x8c0e8db0
 */
u32 FUN_8c0e8db0(void) {
    return 0x10ac;
}

/*
 * get_field_226f4_0e8dc0  0x8c0e8dc0
 */
u32 get_field_226f4_0e8dc0(int a0) {
    return *(u32 *)(0x226f4 + a0);
}

/*
 * FUN_8c0e8dcc  0x8c0e8dcc
 */
int FUN_8c0e8dcc(int a0, int a1) {
    return a0 + a1 * 0x16c + 0x22d48;
}

/*
 * FUN_8c0e8dec  0x8c0e8dec
 */
u32 *FUN_8c0e8dec(void) {
    return &g_8c0e8df4;
}

/*
 * FUN_8c0e8df8  0x8c0e8df8
 */
u32 FUN_8c0e8df8(int a0, float *a1) {
    int iVar1;
    int iVar2;

    iVar1 = (int)(*a1 / 224.54546);
    iVar2 = (int)(a1[2] / 150.0);
    if (iVar1 < 0) {
        iVar1 = 0;
    } else if (10 < iVar1) {
        iVar1 = 10;
    }
    if (iVar2 < 0) {
        iVar2 = 0;
    } else if (9 < iVar2) {
        iVar2 = 9;
    }
    return *(u32 *)(iVar1 * 0x78 + a0 + iVar2 * 0xc + 0x2281c);
}

/*
 * FUN_8c0e8e74  0x8c0e8e74
 */
u32 FUN_8c0e8e74(int a0, float *a1) {
    int iVar1;
    int iVar2;

    iVar1 = (int)(*a1 / 224.54546);
    iVar2 = (int)(a1[2] / 150.0);
    if (iVar1 < 0) {
        iVar1 = 0;
    } else if (10 < iVar1) {
        iVar1 = 10;
    }
    if (iVar2 < 0) {
        iVar2 = 0;
    } else if (9 < iVar2) {
        iVar2 = 9;
    }
    return *(u32 *)(iVar1 * 0x78 + a0 + iVar2 * 0xc + 0x22820);
}

/*
 * FUN_8c0e8ef0  0x8c0e8ef0
 */
int FUN_8c0e8ef0(int a0) {
    return a0 + 0x2274c;
}

/*
 * FUN_8c0e8f00  0x8c0e8f00
 */
int FUN_8c0e8f00(int a0) {
    return a0 + 0x10ac;
}

/*
 * FUN_8c0e8f10  0x8c0e8f10
 */
u32 FUN_8c0e8f10(int a0) {
    u32 uVar1;

    uVar1 = get_field_48_0e8f38(a0 + 0x13b24);
    return uVar1;
}

/*
 * get_field_48_0e8f38  0x8c0e8f38
 * called by: FUN_8c0e8f10
 */
u32 get_field_48_0e8f38(int a0) {
    return *(u32 *)(a0 + 0x48);
}

/*
 * noop_0e8f40  0x8c0e8f40
 */
u32 noop_0e8f40(void) {
    u32 in_r0;

    return in_r0;
}

/*
 * noop_0e8f44  0x8c0e8f44
 */
u32 noop_0e8f44(void) {
    u32 in_r0;

    return in_r0;
}

/*
 * noop_0e8f48  0x8c0e8f48
 */
u32 noop_0e8f48(void) {
    u32 in_r0;

    return in_r0;
}

/*
 * ret_const_0_0e8f4c  0x8c0e8f4c
 */
u32 ret_const_0_0e8f4c(void) {
    return 0;
}

/*
 * FUN_8c0e8f54  0x8c0e8f54
 */
u32 FUN_8c0e8f54(u32 unused_a0, u32 a1, u32 a2, u32 a3) {
    u32 uVar1;
    code *pcVar2;
    u32 uVar3;
    char cVar4;

    cVar4 = '\0';
    uVar1 = Vec3_ctor_xyz(&g_8c126478, a1, a2, a3);
    uVar3 = 0x8c437520;
    pcVar2 = Vec3_dtor;
    global_list_push(uVar1, Vec3_dtor, 0x8c437520, a3);
    uVar1 = Vec3_ctor_xyz(&g_8c126488, pcVar2, uVar3, a3);
    uVar3 = 0x8c43752c;
    pcVar2 = Vec3_dtor;
    global_list_push(uVar1, Vec3_dtor, 0x8c43752c, a3);
    uVar1 = Vec3_ctor_xyz(&g_8c126498, pcVar2, uVar3, a3);
    uVar3 = 0x8c437538;
    pcVar2 = Vec3_dtor;
    global_list_push(uVar1, Vec3_dtor, 0x8c437538, a3);
    uVar1 = Vec3_ctor_xyz(&g_8c1264a8, pcVar2, uVar3, a3);
    uVar3 = 0x8c437544;
    pcVar2 = Vec3_dtor;
    global_list_push(uVar1, Vec3_dtor, 0x8c437544, a3);
    if (cVar4 == '\0') {
        g_8c1264b8 = CONCAT44(_UNK_8c1264bc, 0x800000);
        /* WARNING: Read-only address (ram,0x8c1264bc) is written */
    } else {
        g_8c1264b8 = 0xffffffff00800000;
    }
    uVar1 = FUN_8c015224(0x8c4377f4, pcVar2);
    uVar3 = 0x8c4377e8;
    pcVar2 = free_if_nonnull_wrap_0153e4;
    global_list_push(uVar1, free_if_nonnull_wrap_0153e4, 0x8c4377e8, a3);
    uVar1 = FUN_8c102a08(0x8c437a78);
    uVar3 = 0x8c437a6c;
    pcVar2 = FUN_8c0d6424;
    global_list_push(uVar1, FUN_8c0d6424, 0x8c437a6c, a3);
    uVar1 = FUN_8c102a08(0x8c437aa4);
    uVar3 = 0x8c437a98;
    pcVar2 = FUN_8c0d6424;
    global_list_push(uVar1, FUN_8c0d6424, 0x8c437a98, a3);
    uVar1 = FUN_8c102a08(0x8c437ad0);
    uVar3 = 0x8c437ac4;
    pcVar2 = FUN_8c0d6424;
    global_list_push(uVar1, FUN_8c0d6424, 0x8c437ac4, a3);
    uVar1 = FUN_8c102a08(0x8c437afc);
    uVar3 = 0x8c437af0;
    pcVar2 = FUN_8c0d6424;
    global_list_push(uVar1, FUN_8c0d6424, 0x8c437af0, a3);
    uVar1 = FUN_8c10291c(0x8c437b28);
    uVar3 = 0x8c437b1c;
    pcVar2 = free_if_nonnull_wrap_0d63c0;
    global_list_push(uVar1, free_if_nonnull_wrap_0d63c0, 0x8c437b1c, a3);
    uVar1 = FUN_8c0243b0(0x8c437b48, pcVar2, uVar3);
    uVar1 = global_list_push(uVar1, FUN_8c0ba180, 0x8c437b3c, a3);
    return uVar1;
}

/*
 * FUN_8c0e91b8  0x8c0e91b8
 * called by: FUN_8c0d9c80
 */
u8 *FUN_8c0e91b8(u8 *a0) {
    FUN_8c0e96b8(a0);
    a0[0x39] = 0;
    a0[0x3c] = 0;
    a0[0x3b] = 0;
    a0[0x3d] = 0;
    *a0 = 0;
    return a0;
}

/*
 * free_if_nonnull_wrap_0e91f0  0x8c0e91f0
 * called by: Class_12bb08_m0_0da208
 */
int free_if_nonnull_wrap_0e91f0(int a0, u32 a1, u32 a2, u32 a3) {
    u32 in_stack_fffffff4;

    if ((a0 != 0) && (0 < (short)a1)) {
        free_if_nonnull(a0, a1, a2, a3, CONCAT22((short)((u32)in_stack_fffffff4 >> 0x10), (short)a1));
    }
    return a0;
}

/*
 * FUN_8c0e9220  0x8c0e9220
 * called by: Class_12bb08_m1_0da338, Class_12bb08_m2_0da5a8
 */
int FUN_8c0e9220(int a0, u32 a1, int a2, int *a3) {
    u32 uVar1;
    int iVar2;
    int iVar3;
    u8 *puVar4;
    u8 *puVar5;
    u8 *puVar6;
    u32 uVar7;
    int *a7;
    char cVar8;
    u8 bStack_40;
    u8 auStack_3c[36];

    puVar6 = auStack_3c;
    iVar3 = 0x10;
    puVar5 = (&DATA_8c14012c);
    do {
        puVar4 = puVar5 + 1;
        *puVar6 = *puVar5;
        puVar5 = puVar5 + 2;
        puVar6[1] = *puVar4;
        puVar6 = puVar6 + 2;
        iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    uVar7 = a1;
    a7 = a3;
    uVar1 = FUN_8c02602c(a1, a1);
    if (*(u32 *)(0xb4 + a0) != (uVar1 & 0xffff)) {
        if (*(u32 *)(0xb4 + a0) < 5) {
            (**(code **)(0x198 + *a3))(a3, uVar7, a2, a7);
            *(u8 *)(0xbc + a0) = (u8)(((u32)bStack_40 << 0x1e) >> 0x1f);
            *(char *)(0xbc + a0) = *(char *)(0xbc + a0) - (char)((int)((u32)bStack_40 << 0x1f) >> 0x1f);
            uVar7 = (**(code **)(0x11c + *a3))(a3, 0xb, a2, a7);
            *(char *)(a0 + 0x4d) = (char)uVar7;
            *(u8 *)(a0 + 0x4e) = 0;
            for (iVar3 = 0; iVar2 = (**(code **)(0x11c + *a3))(a3, 10, a2, a7), iVar3 < iVar2; iVar3 = iVar3 + 1) {
                uVar7 = 10;
                a2 = iVar3;
                iVar2 = (**(code **)(0x100 + *a3))(a3, 10, iVar3, a7);
                iVar2 = (**(code **)(0x114 + *(int *)(iVar2 + 8)))(iVar2, uVar7, a2, a7);
                if (iVar2 == 0x11) {
                    uVar7 = 10;
                    a2 = iVar3;
                    iVar2 = (**(code **)(0x100 + *a3))(a3, 10, iVar3, a7);
                    iVar2 = (**(code **)(0xb4 + *(int *)(iVar2 + 8)))(iVar2, uVar7, a2, a7);
                    if (iVar2 == 1) {
                        *(char *)(a0 + 0x4e) = *(char *)(a0 + 0x4e) + '\x01';
                    }
                }
            }
            *(u8 *)(a0 + 0x4f) = 0;
            for (iVar3 = 0; iVar2 = (**(code **)(0x11c + *a3))(a3, 10, a2, a7), iVar3 < iVar2; iVar3 = iVar3 + 1) {
                uVar7 = 10;
                a2 = iVar3;
                iVar2 = (**(code **)(0x100 + *a3))(a3, 10, iVar3, a7);
                iVar2 = (**(code **)(0x114 + *(int *)(iVar2 + 8)))(iVar2, uVar7, a2, a7);
                if (iVar2 == 0x12) {
                    uVar7 = 10;
                    a2 = iVar3;
                    iVar2 = (**(code **)(0x100 + *a3))(a3, 10, iVar3, a7);
                    iVar2 = (**(code **)(0xb4 + *(int *)(iVar2 + 8)))(iVar2, uVar7, a2, a7);
                    if (iVar2 == 1) {
                        *(char *)(a0 + 0x4f) = *(char *)(a0 + 0x4f) + '\x01';
                    }
                }
            }
            *(u8 *)(a0 + 0x50) = 0;
            for (iVar3 = 0; iVar2 = (**(code **)(0x11c + *a3))(a3, 10, a2, a7), iVar3 < iVar2; iVar3 = iVar3 + 1) {
                uVar7 = 10;
                a2 = iVar3;
                iVar2 = (**(code **)(0x100 + *a3))(a3, 10, iVar3, a7);
                iVar2 = (**(code **)(0x114 + *(int *)(iVar2 + 8)))(iVar2, uVar7, a2, a7);
                if (iVar2 == 0x13) {
                    uVar7 = 10;
                    a2 = iVar3;
                    iVar2 = (**(code **)(0x100 + *a3))(a3, 10, iVar3, a7);
                    iVar2 = (**(code **)(0xb4 + *(int *)(iVar2 + 8)))(iVar2, uVar7, a2, a7);
                    if (iVar2 == 1) {
                        *(char *)(a0 + 0x50) = *(char *)(a0 + 0x50) + '\x01';
                    }
                }
            }
            for (iVar3 = 0; iVar3 < 0x12; iVar3 = iVar3 + 1) {
                for (iVar2 = 0; iVar2 < 2; iVar2 = iVar2 + 1) {
                    *(u8 *)(a0 + iVar3 * 2 + iVar2 + 0x51) = 0;
                    *(u8 *)(a0 + iVar3 * 2 + iVar2 + 0x75) = 0;
                }
            }
        }
        *(u32 *)(a0 + 8) = 0;
        *(u32 *)(a0 + 4) = 0;
        *(u32 *)(a0 + 0xc) = 0;
        *(int *)(a0 + 0x10) = *(int *)(a0 + 0x10) + 1;
        iVar3 = (*(code *)(&libgcc_divide_helper_0103d0))(*(u32 *)(0xb4 + a0), 0x12c, a2, a7);
        if (iVar3 == 0xc8) {
            *(u32 *)(a0 + 4) = 1;
        }
        iVar3 = (*(code *)(&libgcc_divide_helper_0103d0))(*(u32 *)(0xb4 + a0), 0x5a, a2, a7);
        if (iVar3 == 0x4b) {
            *(u32 *)(a0 + 8) = 1;
        }
        uVar7 = 100;
        iVar3 = (*(code *)(&libgcc_divide_helper_0103d0))(*(u32 *)(0xb4 + a0), 100, a2, a7);
        if (iVar3 == 0x41) {
            *(u32 *)(a0 + 0xc) = 1;
        }
        *(u8 *)(0xbd + a0) = 0;
        (**(code **)(0x198 + *a3))(a3, uVar7, a2, a7);
        cVar8 = -(char)((int)((u32)bStack_40 << 0x1f) >> 0x1f) - (char)((int)((u32)bStack_40 << 0x1e) >> 0x1f);
        if (cVar8 != *(char *)(0xbc + a0)) {
            *(u8 *)(0xbd + a0) = 1;
        }
        *(char *)(0xbc + a0) = cVar8;
    }
    *(u32 *)(0xcc + a0) = 1;
    *(u32 *)(0xd0 + a0) = 1;
    uVar1 = FUN_8c02602c(a1, uVar7);
    iVar3 = 0xb4;
    *(u32 *)(0xb4 + a0) = uVar1 & 0xffff;
    return iVar3;
}

/*
 * FUN_8c0e9668  0x8c0e9668
 * called by: FUN_8c05d860, FUN_8c103100
 */
int FUN_8c0e9668(int a0) {
    int iVar1;
    int iVar2;

    iVar1 = 0xbe;
    iVar2 = 2;
    if (*(char *)(0xbe + a0) < '\x02') {
        *(char *)(0xbe + a0) = *(char *)(0xbe + a0) + '\x01';
        iVar2 = iVar1;
    }
    return iVar2;
}

/*
 * FUN_8c0e9690  0x8c0e9690
 * called by: FUN_8c05d860, FUN_8c103100
 */
int FUN_8c0e9690(int a0) {
    int iVar1;
    int iVar2;

    iVar1 = 0xbe;
    iVar2 = (int)*(char *)(0xbe + a0);
    if (0 < *(char *)(0xbe + a0)) {
        *(char *)(0xbe + a0) = *(char *)(0xbe + a0) + -1;
        iVar2 = iVar1;
    }
    return iVar2;
}

/*
 * FUN_8c0e96b8  0x8c0e96b8
 * called by: FUN_8c0dfbdc, FUN_8c0e51ac, FUN_8c0e6dc4, FUN_8c0e91b8
 */
u32 FUN_8c0e96b8(int a0) {
    int iVar1;
    int iVar2;

    *(u32 *)(a0 + 4) = 0;
    *(u32 *)(a0 + 8) = 0;
    *(u32 *)(a0 + 0xc) = 0;
    *(u32 *)(a0 + 0x10) = 0;
    *(u8 *)(a0 + 0x38) = 0;
    *(u8 *)(a0 + 0x44) = 0;
    *(u8 *)(a0 + 0x45) = 0;
    *(u8 *)(a0 + 0x3a) = 0;
    *(u32 *)(a0 + 0xb0) = 0;
    *(u32 *)(a0 + 0x48) = 0;
    *(u8 *)(a0 + 0x4d) = 0;
    *(u8 *)(a0 + 0x4e) = 0;
    *(u8 *)(a0 + 0x4f) = 0;
    *(u8 *)(a0 + 0x50) = 0;
    *(u8 *)(a0 + 0xbe) = 0;
    *(u32 *)(a0 + 0xc0) = 0;
    *(u32 *)(a0 + 0xc4) = 0;
    *(u32 *)(a0 + 200) = 0;
    *(u32 *)(a0 + 0xcc) = 0;
    *(u32 *)(a0 + 0xd0) = 0;
    *(u32 *)(a0 + 0xac) = 4;
    *(u32 *)(a0 + 0x40) = 0;
    *(u8 *)(a0 + 0xbc) = 0;
    *(u8 *)(a0 + 0xbd) = 0;
    *(u8 *)(a0 + 0x4c) = 0;
    *(u32 *)(a0 + 0xb4) = 0;
    for (iVar1 = 0; iVar1 < 2; iVar1 = iVar1 + 1) {
        *(u32 *)(a0 + iVar1 * 4 + 0xa4) = 0;
        *(u32 *)(a0 + iVar1 * 4 + 0x9c) = 0;
    }
    for (iVar1 = 0; iVar1 < 3; iVar1 = iVar1 + 1) {
        for (iVar2 = 0; iVar2 < 3; iVar2 = iVar2 + 1) {
            *(u32 *)(iVar1 * 0xc + a0 + iVar2 * 4 + 0x14) = 0x47c35000;
        }
    }
    for (iVar1 = 0; iVar1 < 0x12; iVar1 = iVar1 + 1) {
        for (iVar2 = 0; iVar2 < 2; iVar2 = iVar2 + 1) {
            *(u8 *)(a0 + iVar1 * 2 + iVar2 + 0x51) = 0;
            *(u8 *)(a0 + iVar1 * 2 + iVar2 + 0x75) = 0;
        }
    }
    return 0x12;
}

/*
 * FUN_8c0e983c  0x8c0e983c
 * called by: FUN_8c0cc784, FUN_8c0cd3c8
 */
u32 FUN_8c0e983c(char *a0, char *a1) {
    FUN_8c0e9890(a0, (int)*a1);
    FUN_8c0e9888(a0, (int)a1[1]);
    a0[0x3d] = a1[2];
    *a0 = a1[3];
    a0[0x3b] = a1[4];
    return 0x3b;
}

/*
 * FUN_8c0e9888  0x8c0e9888
 * called by: FUN_8c0e983c, FUN_8c1089e4
 */
u32 FUN_8c0e9888(int a0, u32 a1) {
    *(u8 *)(a0 + 0x3c) = (u8)a1;
    return 0x3c;
}

/*
 * FUN_8c0e9890  0x8c0e9890
 * called by: FUN_8c0e983c
 */
u32 FUN_8c0e9890(int a0, u32 a1) {
    *(u8 *)(a0 + 0x39) = (u8)a1;
    return 0x39;
}

/*
 * FUN_8c0e9898  0x8c0e9898
 * called by: FUN_8c0c5de8
 */
int FUN_8c0e9898(u8 *a0, u8 *a1) {
    char cVar1;
    u32 uVar2;
    uVar2 = FUN_8c0e98f0(a0);
    *a1 = (char)uVar2;
    uVar2 = FUN_8c0e98e8(a0);
    a1[1] = (char)uVar2;
    a1[2] = a0[0x3d];
    a1[3] = *a0;
    cVar1 = a0[0x3b];
    a1[4] = cVar1;
    return (int)cVar1;
}

/*
 * FUN_8c0e98e8  0x8c0e98e8
 * called by: FUN_8c0e9898
 */
int FUN_8c0e98e8(int a0) {
    return (int)*(char *)(a0 + 0x3c);
}

/*
 * FUN_8c0e98f0  0x8c0e98f0
 * called by: FUN_8c0e9898, FUN_8c104854, FUN_8c1063a8, FUN_8c107590
 */
int FUN_8c0e98f0(int a0) {
    return (int)*(char *)(a0 + 0x39);
}

/*
 * FUN_8c0e98f8  0x8c0e98f8
 * called by: FUN_8c0c67f4
 */
u32 FUN_8c0e98f8(u8 *a0) {
    *a0 = 0;
    a0[1] = 0;
    a0[2] = 0;
    a0[3] = 0;
    a0[4] = 0;
    return 0;
}

/*
 * FUN_8c0e9910  0x8c0e9910
 * called by: FUN_8c0b9fb4
 */
u8 *FUN_8c0e9910(u8 *a0) {
    *a0 = 0;
    a0[1] = 0;
    a0[2] = 0;
    a0[3] = 0;
    a0[4] = 0;
    return a0;
}

/*
 * FUN_8c0e992c  0x8c0e992c
 */
u32 FUN_8c0e992c(u32 unused_a0, u32 a1, u32 a2, u32 a3) {
    u32 uVar1;
    code *pcVar2;
    u32 uVar3;
    char cVar4;

    cVar4 = '\0';
    uVar1 = Vec3_ctor_xyz(&g_8c1264c0, a1, a2, a3);
    uVar3 = 0x8c438440;
    pcVar2 = Vec3_dtor;
    global_list_push(uVar1, Vec3_dtor, 0x8c438440, a3);
    uVar1 = Vec3_ctor_xyz(&g_8c1264d0, pcVar2, uVar3, a3);
    uVar3 = 0x8c43844c;
    pcVar2 = Vec3_dtor;
    global_list_push(uVar1, Vec3_dtor, 0x8c43844c, a3);
    uVar1 = Vec3_ctor_xyz(&g_8c1264e0, pcVar2, uVar3, a3);
    uVar3 = 0x8c438458;
    pcVar2 = Vec3_dtor;
    global_list_push(uVar1, Vec3_dtor, 0x8c438458, a3);
    uVar1 = Vec3_ctor_xyz(&g_8c1264f0, pcVar2, uVar3, a3);
    global_list_push(uVar1, Vec3_dtor, 0x8c438464, a3);
    if (cVar4 == '\0') {
        g_8c126500 = CONCAT44(_UNK_8c126504, 0x800000);
        /* WARNING: Read-only address (ram,0x8c126504) is written */
    } else {
        g_8c126500 = 0xffffffff00800000;
    }
    return 0x8c125864;
}

/*
 * FUN_8c0e99e4  0x8c0e99e4
 */
u32 FUN_8c0e99e4(u32 unused_a0, u32 a1, u32 a2, u32 a3) {
    u32 uVar1;
    code *pcVar2;
    u32 uVar3;
    u8 *puVar4;
    u8 auStack_1c10[20];
    u8 auStack_1bfc[20];
    u8 auStack_1be8[20];
    u8 auStack_1bd4[20];
    u8 auStack_1bc0[20];
    u8 auStack_1bac[20];
    u8 auStack_1b98[20];
    u8 auStack_1b84[20];
    u8 auStack_1b70[20];
    u8 auStack_1b5c[20];
    u8 auStack_1b48[20];
    u8 auStack_1b34[20];
    u8 auStack_1b20[20];
    u8 auStack_1b0c[20];
    u8 auStack_1af8[20];
    u8 auStack_1ae4[20];
    u8 auStack_1ad0[20];
    u8 auStack_1abc[20];
    u8 auStack_1aa8[20];
    u8 auStack_1a94[20];
    u8 auStack_1a80[20];
    u8 auStack_1a6c[20];
    u8 auStack_1a58[20];
    u8 auStack_1a44[20];
    u8 auStack_1a30[20];
    u8 auStack_1a1c[20];
    u8 auStack_1a08[20];
    u8 auStack_19f4[20];
    u8 auStack_19e0[20];
    u8 auStack_19cc[20];
    u8 auStack_19b8[20];
    u8 auStack_19a4[20];
    u8 auStack_1990[20];
    u8 auStack_197c[20];
    u8 auStack_1968[20];
    u8 auStack_1954[20];
    u8 auStack_1940[20];
    u8 auStack_192c[20];
    u8 auStack_1918[20];
    u8 auStack_1904[20];
    u8 auStack_18f0[20];
    u8 auStack_18dc[20];
    u8 auStack_18c8[20];
    u8 auStack_18b4[20];
    u8 auStack_18a0[20];
    u8 auStack_188c[20];
    u8 auStack_1878[20];
    u8 auStack_1864[20];
    u8 auStack_1850[20];
    u8 auStack_183c[20];
    u8 auStack_1828[20];
    u8 auStack_1814[20];
    u8 auStack_1800[20];
    u8 auStack_17ec[20];
    u8 auStack_17d8[20];
    u8 auStack_17c4[20];
    u8 auStack_17b0[20];
    u8 auStack_179c[20];
    u8 auStack_1788[20];
    u8 auStack_1774[20];
    u8 auStack_1760[20];
    u8 auStack_174c[20];
    u8 auStack_1738[20];
    u8 auStack_1724[20];
    u8 auStack_1710[20];
    u8 auStack_16fc[20];
    u8 auStack_16e8[20];
    u8 auStack_16d4[20];
    u8 auStack_16c0[20];
    u8 auStack_16ac[20];
    u8 auStack_1698[20];
    u8 auStack_1684[20];
    u8 auStack_1670[20];
    u8 auStack_165c[20];
    u8 auStack_1648[20];
    u8 auStack_1634[20];
    u8 auStack_1620[20];
    u8 auStack_160c[20];
    u8 auStack_15f8[20];
    u8 auStack_15e4[20];
    u8 auStack_15d0[20];
    u8 auStack_15bc[20];
    u8 auStack_15a8[20];
    u8 auStack_1594[20];
    u8 auStack_1580[20];
    u8 auStack_156c[20];
    u8 auStack_1558[20];
    u8 auStack_1544[20];
    u8 auStack_1530[20];
    u8 auStack_151c[20];
    u8 auStack_1508[20];
    u8 auStack_14f4[20];
    u8 auStack_14e0[20];
    u8 auStack_14cc[20];
    u8 auStack_14b8[20];
    u8 auStack_14a4[20];
    u8 auStack_1490[20];
    u8 auStack_147c[20];
    u8 auStack_1468[20];
    u8 auStack_1454[20];
    u8 auStack_1440[20];
    u8 auStack_142c[20];
    u8 auStack_1418[20];
    u8 auStack_1404[20];
    u8 auStack_13f0[20];
    u8 auStack_13dc[20];
    u8 auStack_13c8[20];
    u8 auStack_13b4[20];
    u8 auStack_13a0[20];
    u8 auStack_138c[20];
    u8 auStack_1378[20];
    u8 auStack_1364[20];
    u8 auStack_1350[20];
    u8 auStack_133c[20];
    u8 auStack_1328[20];
    u8 auStack_1314[20];
    u8 auStack_1300[20];
    u8 auStack_12ec[20];
    u8 auStack_12d8[20];
    u8 auStack_12c4[20];
    u8 auStack_12b0[20];
    u8 auStack_129c[20];
    u8 auStack_1288[20];
    u8 auStack_1274[20];
    u8 auStack_1260[20];
    u8 auStack_124c[20];
    u8 auStack_1238[20];
    u8 auStack_1224[20];
    u8 auStack_1210[20];
    u8 auStack_11fc[20];
    u8 auStack_11e8[20];
    u8 auStack_11d4[20];
    u8 auStack_11c0[20];
    u8 auStack_11ac[20];
    u8 auStack_1198[20];
    u8 auStack_1184[20];
    u8 auStack_1170[20];
    u8 auStack_115c[20];
    u8 auStack_1148[20];
    u8 auStack_1134[20];
    u8 auStack_1120[20];
    u8 auStack_110c[20];
    u8 auStack_10f8[20];
    u8 auStack_10e4[20];
    u8 auStack_10d0[20];
    u8 auStack_10bc[20];
    u8 auStack_10a8[20];
    u8 auStack_1094[20];
    u8 auStack_1080[20];
    u8 auStack_106c[20];
    u8 auStack_1058[20];
    u8 auStack_1044[20];
    u8 auStack_1030[20];
    u8 auStack_101c[20];
    u8 auStack_1008[20];
    u8 auStack_ff4[20];
    u8 auStack_fe0[20];
    u8 auStack_fcc[20];
    u8 auStack_fb8[20];
    u8 auStack_fa4[20];
    u8 auStack_f90[20];
    u8 auStack_f7c[20];
    u8 auStack_f68[20];
    u8 auStack_f54[20];
    u8 auStack_f40[20];
    u8 auStack_f2c[20];
    u8 auStack_f18[20];
    u8 auStack_f04[20];
    u8 auStack_ef0[20];
    u8 auStack_edc[20];
    u8 auStack_ec8[20];
    u8 auStack_eb4[20];
    u8 auStack_ea0[20];
    u8 auStack_e8c[20];
    u8 auStack_e78[20];
    u8 auStack_e64[20];
    u8 auStack_e50[20];
    u8 auStack_e3c[20];
    u8 auStack_e28[20];
    u8 auStack_e14[20];
    u8 auStack_e00[20];
    u8 auStack_dec[20];
    u8 auStack_dd8[20];
    u8 auStack_dc4[20];
    u8 auStack_db0[20];
    u8 auStack_d9c[20];
    u8 auStack_d88[20];
    u8 auStack_d74[20];
    u8 auStack_d60[20];
    u8 auStack_d4c[20];
    u8 auStack_d38[20];
    u8 auStack_d24[20];
    u8 auStack_d10[20];
    u8 auStack_cfc[20];
    u8 auStack_ce8[20];
    u8 auStack_cd4[20];
    u8 auStack_cc0[20];
    u8 auStack_cac[20];
    u8 auStack_c98[20];
    u8 auStack_c84[20];
    u8 auStack_c70[20];
    u8 auStack_c5c[20];
    u8 auStack_c48[20];
    u8 auStack_c34[20];
    u8 auStack_c20[20];
    u8 auStack_c0c[20];
    u8 auStack_bf8[20];
    u8 auStack_be4[20];
    u8 auStack_bd0[20];
    u8 auStack_bbc[20];
    u8 auStack_ba8[20];
    u8 auStack_b94[20];
    u8 auStack_b80[20];
    u8 auStack_b6c[20];
    u8 auStack_b58[20];
    u8 auStack_b44[20];
    u8 auStack_b30[20];
    u8 auStack_b1c[20];
    u8 auStack_b08[20];
    u8 auStack_af4[20];
    u8 auStack_ae0[20];
    u8 auStack_acc[20];
    u8 auStack_ab8[20];
    u8 auStack_aa4[20];
    u8 auStack_a90[20];
    u8 auStack_a7c[20];
    u8 auStack_a68[20];
    u8 auStack_a54[20];
    u8 auStack_a40[20];
    u8 auStack_a2c[20];
    u8 auStack_a18[20];
    u8 auStack_a04[20];
    u8 auStack_9f0[20];
    u8 auStack_9dc[20];
    u8 auStack_9c8[20];
    u8 auStack_9b4[20];
    u8 auStack_9a0[20];
    u8 auStack_98c[20];
    u8 auStack_978[20];
    u8 auStack_964[20];
    u8 auStack_950[20];
    u8 auStack_93c[20];
    u8 auStack_928[20];
    u8 auStack_914[20];
    u8 auStack_900[20];
    u8 auStack_8ec[20];
    u8 auStack_8d8[20];
    u8 auStack_8c4[20];
    u8 auStack_8b0[20];
    u8 auStack_89c[20];
    u8 auStack_888[20];
    u8 auStack_874[20];
    u8 auStack_860[20];
    u8 auStack_84c[20];
    u8 auStack_838[20];
    u8 auStack_824[20];
    u8 auStack_810[20];
    u8 auStack_7fc[20];
    u8 auStack_7e8[20];
    u8 auStack_7d4[20];
    u8 auStack_7c0[20];
    u8 auStack_7ac[20];
    u8 auStack_798[20];
    u8 auStack_784[20];
    u8 auStack_770[20];
    u8 auStack_75c[20];
    u8 auStack_748[20];
    u8 auStack_734[20];
    u8 auStack_720[20];
    u8 auStack_70c[20];
    u8 auStack_6f8[20];
    u8 auStack_6e4[20];
    u8 auStack_6d0[20];
    u8 auStack_6bc[20];
    u8 auStack_6a8[20];
    u8 auStack_694[20];
    u8 auStack_680[20];
    u8 auStack_66c[20];
    u8 auStack_658[20];
    u8 auStack_644[20];
    u8 auStack_630[20];
    u8 auStack_61c[20];
    u8 auStack_608[20];
    u8 auStack_5f4[20];
    u8 auStack_5e0[20];
    u8 auStack_5cc[20];
    u8 auStack_5b8[20];
    u8 auStack_5a4[20];
    u8 auStack_590[20];
    u8 auStack_57c[20];
    u8 auStack_568[20];
    u8 auStack_554[20];
    u8 auStack_540[20];
    u8 auStack_52c[20];
    u8 auStack_518[20];
    u8 auStack_504[20];
    u8 auStack_4f0[20];
    u8 auStack_4dc[20];
    u8 auStack_4c8[20];
    u8 auStack_4b4[20];
    u8 auStack_4a0[20];
    u8 auStack_48c[20];
    u8 auStack_478[20];
    u8 auStack_464[20];
    u8 auStack_450[20];
    u8 auStack_43c[20];
    u8 auStack_428[20];
    u8 auStack_414[20];
    u8 auStack_400[20];
    u8 auStack_3ec[20];
    u8 auStack_3d8[20];
    u8 auStack_3c4[20];
    u8 auStack_3b0[20];
    u8 auStack_39c[20];
    u8 auStack_388[20];
    u8 auStack_374[20];
    u8 auStack_360[20];
    u8 auStack_34c[20];
    u8 auStack_338[20];
    u8 auStack_324[20];
    u8 auStack_310[20];
    u8 auStack_2fc[20];
    u8 auStack_2e8[20];
    u8 auStack_2d4[20];
    u8 auStack_2c0[20];
    u8 auStack_2ac[20];
    u8 auStack_298[20];
    u8 auStack_284[20];
    u8 auStack_270[20];
    u8 auStack_25c[20];
    u8 auStack_248[20];
    u8 auStack_234[20];
    u8 auStack_220[20];
    u8 auStack_20c[20];
    u8 auStack_1f8[20];
    u8 auStack_1e4[20];
    u8 auStack_1d0[20];
    u8 auStack_1bc[20];
    u8 auStack_1a8[20];
    u8 auStack_194[20];
    u8 auStack_180[20];
    u8 auStack_16c[20];
    u8 auStack_158[20];
    u8 auStack_144[20];
    u8 auStack_130[20];
    u8 auStack_11c[20];
    u8 auStack_108[20];
    u8 auStack_f4[20];
    u8 auStack_e0[20];
    u8 auStack_cc[20];
    u8 auStack_b8[20];
    u8 auStack_a4[20];
    u8 auStack_90[20];
    u8 auStack_7c[20];
    u8 auStack_68[20];
    u8 auStack_54[20];
    u8 auStack_40[20];
    u8 auStack_2c[20];
    u8 auStack_18[24];

    uVar1 = Vec3_ctor_xyz(&g_8c126508, a1, a2, a3);
    uVar3 = 0x8c438478;
    pcVar2 = Vec3_dtor;
    global_list_push(uVar1, Vec3_dtor, 0x8c438478, a3);
    uVar1 = Vec3_ctor_xyz(&g_8c126518, pcVar2, uVar3, a3);
    uVar3 = 0x8c438484;
    global_list_push(uVar1, Vec3_dtor, 0x8c438484, a3);
    uVar1 = Vec3_ctor_xyz(&g_8c126528, Vec3_ctor_xyz, uVar3, a3);
    uVar3 = 0x8c438490;
    pcVar2 = Vec3_dtor;
    global_list_push(uVar1, Vec3_dtor, 0x8c438490, a3);
    uVar1 = Vec3_ctor_xyz(&g_8c126538, pcVar2, uVar3, a3);
    uVar3 = 0x8c43849c;
    pcVar2 = Vec3_dtor;
    global_list_push(uVar1, Vec3_dtor, 0x8c43849c, a3);
    FUN_8c0d7668(auStack_18);
    uVar1 = FUN_8c0f3df8(0x8c43957c, auStack_18, uVar3);
    uVar3 = 0x8c4384a8;
    global_list_push(uVar1, free_if_nonnull_wrap_0d76b8, 0x8c4384a8, a3);
    uVar1 = 0xffffffff;
    free_if_nonnull_wrap_0d76b8(auStack_18, 0xffffffff, uVar3, a3);
    FUN_8c0d7668(auStack_2c);
    uVar1 = FUN_8c0f3df8(0x8c439590, auStack_2c, uVar3);
    uVar3 = 0x8c4384b4;
    global_list_push(uVar1, free_if_nonnull_wrap_0d76b8, 0x8c4384b4, a3);
    uVar1 = 0xffffffff;
    free_if_nonnull_wrap_0d76b8(auStack_2c, 0xffffffff, uVar3, a3);
    FUN_8c0d7668(auStack_40);
    uVar1 = FUN_8c0f3df8(0x8c4395a4, auStack_40, FUN_8c0f3df8);
    uVar3 = 0x8c4384c0;
    global_list_push(uVar1, free_if_nonnull_wrap_0d76b8, 0x8c4384c0, a3);
    uVar1 = 0xffffffff;
    free_if_nonnull_wrap_0d76b8(auStack_40, 0xffffffff, uVar3, a3);
    FUN_8c0d7668(auStack_54);
    uVar1 = FUN_8c0f3df8(0x8c4395b8, auStack_54, uVar3);
    uVar3 = 0x8c4384cc;
    global_list_push(uVar1, free_if_nonnull_wrap_0d76b8, 0x8c4384cc, a3);
    uVar1 = 0xffffffff;
    free_if_nonnull_wrap_0d76b8(auStack_54, 0xffffffff, uVar3, a3);
    FUN_8c0d7668(auStack_68);
    uVar1 = FUN_8c0f3df8(0x8c4395cc, auStack_68, uVar3);
    uVar3 = 0x8c4384d8;
    global_list_push(uVar1, free_if_nonnull_wrap_0d76b8, 0x8c4384d8, a3);
    uVar1 = 0xffffffff;
    free_if_nonnull_wrap_0d76b8(auStack_68, 0xffffffff, uVar3, a3);
    FUN_8c0d7668(auStack_7c);
    uVar1 = FUN_8c0f3df8(0x8c4395e0, auStack_7c, uVar3);
    uVar3 = 0x8c4384e4;
    global_list_push(uVar1, free_if_nonnull_wrap_0d76b8, 0x8c4384e4, a3);
    uVar1 = 0xffffffff;
    free_if_nonnull_wrap_0d76b8(auStack_7c, 0xffffffff, uVar3, a3);
    FUN_8c0d7668(auStack_90);
    uVar1 = FUN_8c0f3df8(0x8c4395f4, auStack_90, uVar3);
    uVar3 = 0x8c4384f0;
    global_list_push(uVar1, free_if_nonnull_wrap_0d76b8, 0x8c4384f0, a3);
    uVar1 = 0xffffffff;
    free_if_nonnull_wrap_0d76b8(auStack_90, 0xffffffff, uVar3, a3);
    FUN_8c0d7668(auStack_a4);
    uVar1 = FUN_8c0f3df8(0x8c439608, auStack_a4, uVar3);
    uVar3 = 0x8c4384fc;
    global_list_push(uVar1, free_if_nonnull_wrap_0d76b8, 0x8c4384fc, a3);
    uVar1 = 0xffffffff;
    free_if_nonnull_wrap_0d76b8(auStack_a4, 0xffffffff, uVar3, a3);
    FUN_8c0d7668(auStack_b8);
    uVar1 = FUN_8c0f3df8(0x8c43961c, auStack_b8, uVar3);
    uVar3 = 0x8c438508;
    global_list_push(uVar1, free_if_nonnull_wrap_0d76b8, 0x8c438508, a3);
    uVar1 = 0xffffffff;
    free_if_nonnull_wrap_0d76b8(auStack_b8, 0xffffffff, uVar3, a3);
    FUN_8c0d7668(auStack_cc);
    uVar1 = FUN_8c0f3df8(0x8c439630, auStack_cc, uVar3);
    uVar3 = 0x8c438514;
    global_list_push(uVar1, free_if_nonnull_wrap_0d76b8, 0x8c438514, a3);
    uVar1 = 0xffffffff;
    free_if_nonnull_wrap_0d76b8(auStack_cc, 0xffffffff, uVar3, a3);
    FUN_8c0d7668(auStack_e0);
    uVar1 = FUN_8c0f3df8(0x8c439644, auStack_e0, uVar3);
    uVar3 = 0x8c438520;
    global_list_push(uVar1, free_if_nonnull_wrap_0d76b8, 0x8c438520, a3);
    uVar1 = 0xffffffff;
    free_if_nonnull_wrap_0d76b8(auStack_e0, 0xffffffff, uVar3, a3);
    FUN_8c0d7668(auStack_f4);
    uVar1 = FUN_8c0f3df8(0x8c439658, auStack_f4, uVar3);
    uVar3 = 0x8c43852c;
    global_list_push(uVar1, free_if_nonnull_wrap_0d76b8, 0x8c43852c, a3);
    uVar1 = 0xffffffff;
    free_if_nonnull_wrap_0d76b8(auStack_f4, 0xffffffff, uVar3, a3);
    FUN_8c0d7668(auStack_108);
    uVar1 = FUN_8c0f3df8(0x8c43966c, auStack_108, uVar3);
    uVar3 = 0x8c438538;
    global_list_push(uVar1, free_if_nonnull_wrap_0d76b8, 0x8c438538, a3);
    uVar1 = 0xffffffff;
    free_if_nonnull_wrap_0d76b8(auStack_108, 0xffffffff, uVar3, a3);
    FUN_8c0d7668(auStack_11c);
    uVar1 = FUN_8c0f3df8(0x8c439680, auStack_11c, uVar3);
    uVar3 = 0x8c438544;
    global_list_push(uVar1, free_if_nonnull_wrap_0d76b8, 0x8c438544, a3);
    uVar1 = 0xffffffff;
    free_if_nonnull_wrap_0d76b8(auStack_11c, 0xffffffff, uVar3, a3);
    FUN_8c0d7668(auStack_130);
    uVar1 = FUN_8c0f3df8(0x8c439694, auStack_130, uVar3);
    uVar3 = 0x8c438550;
    global_list_push(uVar1, free_if_nonnull_wrap_0d76b8, 0x8c438550, a3);
    uVar1 = 0xffffffff;
    free_if_nonnull_wrap_0d76b8(auStack_130, 0xffffffff, uVar3, a3);
    FUN_8c0d7668(auStack_144);
    uVar1 = FUN_8c0f3df8(0x8c4396a8, auStack_144, uVar3);
    uVar3 = 0x8c43855c;
    global_list_push(uVar1, free_if_nonnull_wrap_0d76b8, 0x8c43855c, a3);
    uVar1 = 0xffffffff;
    free_if_nonnull_wrap_0d76b8(auStack_144, 0xffffffff, uVar3, a3);
    FUN_8c0d7668(auStack_158);
    uVar1 = FUN_8c0f3df8(0x8c4396bc, auStack_158, uVar3);
    uVar3 = 0x8c438568;
    global_list_push(uVar1, free_if_nonnull_wrap_0d76b8, 0x8c438568, a3);
    uVar1 = 0xffffffff;
    free_if_nonnull_wrap_0d76b8(auStack_158, 0xffffffff, uVar3, a3);
    pcVar2 = FUN_8c0d7668;
    FUN_8c0d7668(auStack_16c);
    uVar1 = FUN_8c0f3df8(0x8c4396d0, auStack_16c, pcVar2);
    uVar3 = 0x8c438574;
    global_list_push(uVar1, free_if_nonnull_wrap_0d76b8, 0x8c438574, a3);
    uVar1 = 0xffffffff;
    free_if_nonnull_wrap_0d76b8(auStack_16c, 0xffffffff, uVar3, a3);
    FUN_8c0d7668(auStack_180);
    uVar1 = FUN_8c0f3df8(0x8c4396e4, auStack_180, uVar3);
    global_list_push(uVar1, free_if_nonnull_wrap_0d76b8, 0x8c438580, a3);
    uVar3 = 0xffffffff;
    uVar1 = 0xffffffff;
    free_if_nonnull_wrap_0d76b8(auStack_180, 0xffffffff, 0xffffffff, a3);
    FUN_8c0d7668(auStack_194);
    uVar1 = FUN_8c0f3df8(0x8c4396f8, auStack_194, uVar3);
    uVar3 = 0x8c43858c;
    global_list_push(uVar1, free_if_nonnull_wrap_0d76b8, 0x8c43858c, a3);
    uVar1 = 0xffffffff;
    free_if_nonnull_wrap_0d76b8(auStack_194, 0xffffffff, uVar3, a3);
    FUN_8c0d7668(auStack_1a8);
    uVar1 = FUN_8c0f3df8(0x8c43970c, auStack_1a8, uVar3);
    global_list_push(uVar1, free_if_nonnull_wrap_0d76b8, 0x8c438598, a3);
    uVar3 = 0xffffffff;
    uVar1 = 0xffffffff;
    free_if_nonnull_wrap_0d76b8(auStack_1a8, 0xffffffff, 0xffffffff, a3);
    FUN_8c0d7668(auStack_1bc);
    uVar1 = FUN_8c0f3df8(0x8c439720, auStack_1bc, uVar3);
    uVar3 = 0x8c4385a4;
    global_list_push(uVar1, free_if_nonnull_wrap_0d76b8, 0x8c4385a4, a3);
    uVar1 = 0xffffffff;
    free_if_nonnull_wrap_0d76b8(auStack_1bc, 0xffffffff, uVar3, a3);
    FUN_8c0d7668(auStack_1d0);
    uVar1 = FUN_8c0f3df8(0x8c439734, auStack_1d0, uVar3);
    uVar3 = 0x8c4385b0;
    global_list_push(uVar1, free_if_nonnull_wrap_0d76b8, 0x8c4385b0, a3);
    uVar1 = 0xffffffff;
    free_if_nonnull_wrap_0d76b8(auStack_1d0, 0xffffffff, uVar3, a3);
    FUN_8c0d7668(auStack_1e4);
    uVar1 = FUN_8c0f3df8(0x8c439748, auStack_1e4, uVar3);
    uVar3 = 0x8c4385bc;
    global_list_push(uVar1, free_if_nonnull_wrap_0d76b8, 0x8c4385bc, a3);
    uVar1 = 0xffffffff;
    free_if_nonnull_wrap_0d76b8(auStack_1e4, 0xffffffff, uVar3, a3);
    FUN_8c0d7668(auStack_1f8);
    uVar1 = FUN_8c0f3df8(0x8c43975c, auStack_1f8, uVar3);
    uVar3 = 0x8c4385c8;
    global_list_push(uVar1, free_if_nonnull_wrap_0d76b8, 0x8c4385c8, a3);
    uVar1 = 0xffffffff;
    free_if_nonnull_wrap_0d76b8(auStack_1f8, 0xffffffff, uVar3, a3);
    FUN_8c0d7668(auStack_20c);
    uVar1 = FUN_8c0f3df8(0x8c439770, auStack_20c, uVar3);
    uVar3 = 0x8c4385d4;
    global_list_push(uVar1, free_if_nonnull_wrap_0d76b8, 0x8c4385d4, a3);
    uVar1 = 0xffffffff;
    free_if_nonnull_wrap_0d76b8(auStack_20c, 0xffffffff, uVar3, a3);
    FUN_8c0d7668(auStack_220);
    uVar1 = FUN_8c0f3df8(0x8c439784, auStack_220, uVar3);
    uVar3 = 0x8c4385e0;
    global_list_push(uVar1, free_if_nonnull_wrap_0d76b8, 0x8c4385e0, a3);
    uVar1 = 0xffffffff;
    free_if_nonnull_wrap_0d76b8(auStack_220, 0xffffffff, uVar3, a3);
    FUN_8c0d7668(auStack_234);
    uVar1 = FUN_8c0f3df8(0x8c439798, auStack_234, uVar3);
    uVar3 = 0x8c4385ec;
    global_list_push(uVar1, free_if_nonnull_wrap_0d76b8, 0x8c4385ec, a3);
    uVar1 = 0xffffffff;
    free_if_nonnull_wrap_0d76b8(auStack_234, 0xffffffff, uVar3, a3);
    FUN_8c0d7668(auStack_248);
    uVar1 = FUN_8c0f3df8(0x8c4397ac, auStack_248, uVar3);
    uVar3 = 0x8c4385f8;
    global_list_push(uVar1, free_if_nonnull_wrap_0d76b8, 0x8c4385f8, a3);
    uVar1 = 0xffffffff;
    free_if_nonnull_wrap_0d76b8(auStack_248, 0xffffffff, uVar3, a3);
    FUN_8c0d7668(auStack_25c);
    uVar1 = FUN_8c0f3df8(0x8c4397c0, auStack_25c, uVar3);
    uVar3 = 0x8c438604;
    global_list_push(uVar1, free_if_nonnull_wrap_0d76b8, 0x8c438604, a3);
    uVar1 = 0xffffffff;
    free_if_nonnull_wrap_0d76b8(auStack_25c, 0xffffffff, uVar3, a3);
    FUN_8c0d7668(auStack_270);
    uVar1 = FUN_8c0f3df8(0x8c4397d4, auStack_270, uVar3);
    uVar3 = 0x8c438610;
    global_list_push(uVar1, free_if_nonnull_wrap_0d76b8, 0x8c438610, a3);
    uVar1 = 0xffffffff;
    free_if_nonnull_wrap_0d76b8(auStack_270, 0xffffffff, uVar3, a3);
    FUN_8c0d7668(auStack_284);
    uVar1 = FUN_8c0f3df8(0x8c4397e8, auStack_284, uVar3);
    uVar3 = 0x8c43861c;
    global_list_push(uVar1, free_if_nonnull_wrap_0d76b8, 0x8c43861c, a3);
    free_if_nonnull_wrap_0d76b8(auStack_284, 0xffffffff, uVar3, a3);
    FUN_8c0d7668(auStack_298);
    uVar1 = FUN_8c0f3df8(0x8c4397fc, auStack_298, uVar3);
    uVar3 = 0x8c438628;
    global_list_push(uVar1, free_if_nonnull_wrap_0d76b8, 0x8c438628, a3);
    free_if_nonnull_wrap_0d76b8(auStack_298, 0xffffffff, uVar3, a3);
    FUN_8c0d7668(auStack_2ac);
    uVar1 = FUN_8c0f3df8(0x8c439810, auStack_2ac, 0x294);
    uVar3 = 0x8c438634;
    global_list_push(uVar1, free_if_nonnull_wrap_0d76b8, 0x8c438634, a3);
    uVar1 = 0xffffffff;
    free_if_nonnull_wrap_0d76b8(auStack_2ac, 0xffffffff, uVar3, a3);
    FUN_8c0d7668(auStack_2c0);
    uVar1 = FUN_8c0f3df8(0x8c439824, auStack_2c0, uVar3);
    uVar3 = 0x8c438640;
    global_list_push(uVar1, free_if_nonnull_wrap_0d76b8, 0x8c438640, a3);
    uVar1 = 0xffffffff;
    free_if_nonnull_wrap_0d76b8(auStack_2c0, 0xffffffff, uVar3, a3);
    puVar4 = auStack_2d4;
    FUN_8c0d7668(puVar4);
    uVar1 = FUN_8c0f3df8(0x8c439838, auStack_2d4, puVar4);
    uVar3 = 0x8c43864c;
    global_list_push(uVar1, free_if_nonnull_wrap_0d76b8, 0x8c43864c, a3);
    uVar1 = 0xffffffff;
    free_if_nonnull_wrap_0d76b8(auStack_2d4, 0xffffffff, uVar3, a3);
    FUN_8c0d7668(auStack_2e8);
    uVar1 = FUN_8c0f3df8(0x8c43984c, auStack_2e8, uVar3);
    uVar3 = 0x8c438658;
    global_list_push(uVar1, free_if_nonnull_wrap_0d76b8, 0x8c438658, a3);
    uVar1 = 0xffffffff;
    free_if_nonnull_wrap_0d76b8(auStack_2e8, 0xffffffff, uVar3, a3);
    puVar4 = auStack_2fc;
    FUN_8c0d7668(puVar4);
    uVar1 = FUN_8c0f3df8(0x8c439860, auStack_2fc, puVar4);
    uVar3 = 0x8c438664;
    global_list_push(uVar1, free_if_nonnull_wrap_0d76b8, 0x8c438664, a3);
    free_if_nonnull_wrap_0d76b8(auStack_2fc, 0xffffffff, uVar3, a3);
    FUN_8c0d7668(auStack_310);
    uVar1 = FUN_8c0f3df8(0x8c439874, auStack_310, uVar3);
    uVar3 = 0x8c438670;
    global_list_push(uVar1, free_if_nonnull_wrap_0d76b8, 0x8c438670, a3);
    uVar1 = 0xffffffff;
    free_if_nonnull_wrap_0d76b8(auStack_310, 0xffffffff, uVar3, a3);
    FUN_8c0d7668(auStack_324);
    uVar1 = FUN_8c0f3df8(0x8c439888, auStack_324, uVar3);
    uVar3 = 0x8c43867c;
    global_list_push(uVar1, free_if_nonnull_wrap_0d76b8, 0x8c43867c, a3);
    uVar1 = 0xffffffff;
    free_if_nonnull_wrap_0d76b8(auStack_324, 0xffffffff, uVar3, a3);
    FUN_8c0d7668(auStack_338);
    uVar1 = FUN_8c0f3df8(0x8c43989c, auStack_338, uVar3);
    uVar3 = 0x8c438688;
    global_list_push(uVar1, free_if_nonnull_wrap_0d76b8, 0x8c438688, a3);
    uVar1 = 0xffffffff;
    free_if_nonnull_wrap_0d76b8(auStack_338, 0xffffffff, uVar3, a3);
    FUN_8c0d7668(auStack_34c);
    uVar1 = FUN_8c0f3df8(0x8c4398b0, auStack_34c, uVar3);
    uVar3 = 0x8c438694;
    global_list_push(uVar1, free_if_nonnull_wrap_0d76b8, 0x8c438694, a3);
    uVar1 = 0xffffffff;
    free_if_nonnull_wrap_0d76b8(auStack_34c, 0xffffffff, uVar3, a3);
    FUN_8c0d7668(auStack_360);
    uVar1 = FUN_8c0f3df8(0x8c4398c4, auStack_360, uVar3);
    uVar3 = 0x8c4386a0;
    global_list_push(uVar1, free_if_nonnull_wrap_0d76b8, 0x8c4386a0, a3);
    uVar1 = 0xffffffff;
    free_if_nonnull_wrap_0d76b8(auStack_360, 0xffffffff, uVar3, a3);
    FUN_8c0d7668(auStack_374);
    uVar1 = FUN_8c0f3df8(0x8c4398d8, auStack_374, uVar3);
    uVar3 = 0x8c4386ac;
    global_list_push(uVar1, free_if_nonnull_wrap_0d76b8, 0x8c4386ac, a3);
    uVar1 = 0xffffffff;
    free_if_nonnull_wrap_0d76b8(auStack_374, 0xffffffff, uVar3, a3);
    FUN_8c0d7668(auStack_388);
    uVar1 = FUN_8c0f3df8(0x8c4398ec, auStack_388, uVar3);
    uVar3 = 0x8c4386b8;
    global_list_push(uVar1, free_if_nonnull_wrap_0d76b8, 0x8c4386b8, a3);
    uVar1 = 0xffffffff;
    free_if_nonnull_wrap_0d76b8(auStack_388, 0xffffffff, uVar3, a3);
    FUN_8c0d7668(auStack_39c);
    uVar1 = FUN_8c0f3df8(0x8c439900, auStack_39c, uVar3);
    uVar3 = 0x8c4386c4;
    global_list_push(uVar1, free_if_nonnull_wrap_0d76b8, 0x8c4386c4, a3);
    uVar1 = 0xffffffff;
    free_if_nonnull_wrap_0d76b8(auStack_39c, 0xffffffff, uVar3, a3);
    FUN_8c0d7668(auStack_3b0);
    uVar1 = FUN_8c0f3df8(0x8c439914, auStack_3b0, uVar3);
    uVar3 = 0x8c4386d0;
    global_list_push(uVar1, free_if_nonnull_wrap_0d76b8, 0x8c4386d0, a3);
    uVar1 = 0xffffffff;
    free_if_nonnull_wrap_0d76b8(auStack_3b0, 0xffffffff, uVar3, a3);
    FUN_8c0d7668(auStack_3c4);
    uVar1 = FUN_8c0f3df8(0x8c439928, auStack_3c4, uVar3);
    uVar3 = 0x8c4386dc;
    global_list_push(uVar1, free_if_nonnull_wrap_0d76b8, 0x8c4386dc, a3);
    uVar1 = 0xffffffff;
    free_if_nonnull_wrap_0d76b8(auStack_3c4, 0xffffffff, uVar3, a3);
    FUN_8c0d7668(auStack_3d8);
    uVar1 = FUN_8c0f3df8(0x8c43993c, auStack_3d8, uVar3);
    uVar3 = 0x8c4386e8;
    global_list_push(uVar1, free_if_nonnull_wrap_0d76b8, 0x8c4386e8, a3);
    uVar1 = 0xffffffff;
    free_if_nonnull_wrap_0d76b8(auStack_3d8, 0xffffffff, uVar3, a3);
    FUN_8c0d7668(auStack_3ec);
    uVar1 = FUN_8c0f3df8(0x8c439950, auStack_3ec, FUN_8c0f3df8);
    uVar3 = 0x8c4386f4;
    global_list_push(uVar1, free_if_nonnull_wrap_0d76b8, 0x8c4386f4, a3);
    uVar1 = 0xffffffff;
    free_if_nonnull_wrap_0d76b8(auStack_3ec, 0xffffffff, uVar3, a3);
    FUN_8c0d7668(auStack_400);
    uVar1 = FUN_8c0f3df8(0x8c439964, auStack_400, uVar3);
    uVar3 = 0x8c438700;
    global_list_push(uVar1, free_if_nonnull_wrap_0d76b8, 0x8c438700, a3);
    uVar1 = 0xffffffff;
    free_if_nonnull_wrap_0d76b8(auStack_400, 0xffffffff, uVar3, a3);
    FUN_8c0d7668(auStack_414);
    uVar1 = FUN_8c0f3df8(0x8c439978, auStack_414, auStack_414);
    uVar3 = 0x8c43870c;
    global_list_push(uVar1, free_if_nonnull_wrap_0d76b8, 0x8c43870c, a3);
    uVar1 = 0xffffffff;
    free_if_nonnull_wrap_0d76b8(auStack_414, 0xffffffff, uVar3, a3);
    FUN_8c0d7668(auStack_428);
    uVar1 = FUN_8c0f3df8(0x8c43998c, auStack_428, uVar3);
    uVar3 = 0x8c438718;
    global_list_push(uVar1, free_if_nonnull_wrap_0d76b8, 0x8c438718, a3);
    uVar1 = 0xffffffff;
    free_if_nonnull_wrap_0d76b8(auStack_428, 0xffffffff, uVar3, a3);
    FUN_8c0d7668(auStack_43c);
    uVar1 = FUN_8c0f3df8(0x8c4399a0, auStack_43c, auStack_43c);
    uVar3 = 0x8c438724;
    global_list_push(uVar1, free_if_nonnull_wrap_0d76b8, 0x8c438724, a3);
    uVar1 = 0xffffffff;
    free_if_nonnull_wrap_0d76b8(auStack_43c, 0xffffffff, uVar3, a3);
    FUN_8c0d7668(auStack_450);
    uVar1 = FUN_8c0f3df8(0x8c4399b4, auStack_450, uVar3);
    uVar3 = 0x8c438730;
    global_list_push(uVar1, free_if_nonnull_wrap_0d76b8, 0x8c438730, a3);
    uVar1 = 0xffffffff;
    free_if_nonnull_wrap_0d76b8(auStack_450, 0xffffffff, uVar3, a3);
    FUN_8c0d7668(auStack_464);
    uVar1 = FUN_8c0f3df8(0x8c4399c8, auStack_464, uVar3);
    uVar3 = 0x8c43873c;
    global_list_push(uVar1, free_if_nonnull_wrap_0d76b8, 0x8c43873c, a3);
    uVar1 = 0xffffffff;
    free_if_nonnull_wrap_0d76b8(auStack_464, 0xffffffff, uVar3, a3);
    FUN_8c0d7668(auStack_478);
    uVar1 = FUN_8c0f3df8(0x8c4399dc, auStack_478, uVar3);
    uVar3 = 0x8c438748;
    global_list_push(uVar1, free_if_nonnull_wrap_0d76b8, 0x8c438748, a3);
    uVar1 = 0xffffffff;
    free_if_nonnull_wrap_0d76b8(auStack_478, 0xffffffff, uVar3, a3);
    FUN_8c0d7668(auStack_48c);
    uVar1 = FUN_8c0f3df8(0x8c4399f0, auStack_48c, uVar3);
    uVar3 = 0x8c438754;
    global_list_push(uVar1, free_if_nonnull_wrap_0d76b8, 0x8c438754, a3);
    uVar1 = 0xffffffff;
    free_if_nonnull_wrap_0d76b8(auStack_48c, 0xffffffff, uVar3, a3);
    FUN_8c0d7668(auStack_4a0);
    uVar1 = FUN_8c0f3df8(0x8c439a04, auStack_4a0, uVar3);
    uVar3 = 0x8c438760;
    global_list_push(uVar1, free_if_nonnull_wrap_0d76b8, 0x8c438760, a3);
    uVar1 = 0xffffffff;
    free_if_nonnull_wrap_0d76b8(auStack_4a0, 0xffffffff, uVar3, a3);
    FUN_8c0d7668(auStack_4b4);
    uVar1 = FUN_8c0f3df8(0x8c439a18, auStack_4b4, uVar3);
    uVar3 = 0x8c43876c;
    global_list_push(uVar1, free_if_nonnull_wrap_0d76b8, 0x8c43876c, a3);
    uVar1 = 0xffffffff;
    free_if_nonnull_wrap_0d76b8(auStack_4b4, 0xffffffff, uVar3, a3);
    FUN_8c0d7668(auStack_4c8);
    uVar1 = FUN_8c0f3df8(0x8c439a2c, auStack_4c8, uVar3);
    uVar3 = 0x8c438778;
    global_list_push(uVar1, free_if_nonnull_wrap_0d76b8, 0x8c438778, a3);
    uVar1 = 0xffffffff;
    free_if_nonnull_wrap_0d76b8(auStack_4c8, 0xffffffff, uVar3, a3);
    FUN_8c0d7668(auStack_4dc);
    uVar1 = FUN_8c0f3df8(0x8c439a40, auStack_4dc, uVar3);
    uVar3 = 0x8c438784;
    global_list_push(uVar1, free_if_nonnull_wrap_0d76b8, 0x8c438784, a3);
    uVar1 = 0xffffffff;
    free_if_nonnull_wrap_0d76b8(auStack_4dc, 0xffffffff, uVar3, a3);
    FUN_8c0d7668(auStack_4f0);
    uVar1 = FUN_8c0f3df8(0x8c439a54, auStack_4f0, uVar3);
    uVar3 = 0x8c438790;
    global_list_push(uVar1, free_if_nonnull_wrap_0d76b8, 0x8c438790, a3);
    uVar1 = 0xffffffff;
    free_if_nonnull_wrap_0d76b8(auStack_4f0, 0xffffffff, uVar3, a3);
    FUN_8c0d7668(auStack_504);
    uVar1 = FUN_8c0f3df8(0x8c439a68, auStack_504, uVar3);
    uVar3 = 0x8c43879c;
    global_list_push(uVar1, free_if_nonnull_wrap_0d76b8, 0x8c43879c, a3);
    uVar1 = 0xffffffff;
    free_if_nonnull_wrap_0d76b8(auStack_504, 0xffffffff, uVar3, a3);
    FUN_8c0d7668(auStack_518);
    uVar1 = FUN_8c0f3df8(0x8c439a7c, auStack_518, uVar3);
    uVar3 = 0x8c4387a8;
    global_list_push(uVar1, free_if_nonnull_wrap_0d76b8, 0x8c4387a8, a3);
    uVar1 = 0xffffffff;
    free_if_nonnull_wrap_0d76b8(auStack_518, 0xffffffff, uVar3, a3);
    FUN_8c0d7668(auStack_52c);
    uVar1 = FUN_8c0f3df8(0x8c439a90, auStack_52c, uVar3);
    global_list_push(uVar1, free_if_nonnull_wrap_0d76b8, 0x8c4387b4, a3);
    uVar3 = 0xffffffff;
    uVar1 = 0xffffffff;
    free_if_nonnull_wrap_0d76b8(auStack_52c, 0xffffffff, 0xffffffff, a3);
    FUN_8c0d7668(auStack_540);
    uVar1 = FUN_8c0f3df8(0x8c439aa4, auStack_540, uVar3);
    uVar3 = 0x8c4387c0;
    global_list_push(uVar1, free_if_nonnull_wrap_0d76b8, 0x8c4387c0, a3);
    uVar1 = 0xffffffff;
    free_if_nonnull_wrap_0d76b8(auStack_540, 0xffffffff, uVar3, a3);
    FUN_8c0d7668(auStack_554);
    uVar1 = FUN_8c0f3df8(0x8c439ab8, auStack_554, uVar3);
    uVar3 = 0x8c4387cc;
    global_list_push(uVar1, free_if_nonnull_wrap_0d76b8, 0x8c4387cc, a3);
    uVar1 = 0xffffffff;
    free_if_nonnull_wrap_0d76b8(auStack_554, 0xffffffff, uVar3, a3);
    FUN_8c0d7668(auStack_568);
    uVar1 = FUN_8c0f3df8(0x8c439acc, auStack_568, uVar3);
    uVar3 = 0x8c4387d8;
    global_list_push(uVar1, free_if_nonnull_wrap_0d76b8, 0x8c4387d8, a3);
    uVar1 = 0xffffffff;
    free_if_nonnull_wrap_0d76b8(auStack_568, 0xffffffff, uVar3, a3);
    FUN_8c0d7668(auStack_57c);
    uVar1 = FUN_8c0f3df8(0x8c439ae0, auStack_57c, uVar3);
    uVar3 = 0x8c4387e4;
    global_list_push(uVar1, free_if_nonnull_wrap_0d76b8, 0x8c4387e4, a3);
    uVar1 = 0xffffffff;
    free_if_nonnull_wrap_0d76b8(auStack_57c, 0xffffffff, uVar3, a3);
    FUN_8c0d7668(auStack_590);
    uVar1 = FUN_8c0f3df8(0x8c439af4, auStack_590, uVar3);
    uVar3 = 0x8c4387f0;
    global_list_push(uVar1, free_if_nonnull_wrap_0d76b8, 0x8c4387f0, a3);
    uVar1 = 0xffffffff;
    free_if_nonnull_wrap_0d76b8(auStack_590, 0xffffffff, uVar3, a3);
    FUN_8c0d7668(auStack_5a4);
    uVar1 = FUN_8c0f3df8(0x8c439b08, auStack_5a4, uVar3);
    uVar3 = 0x8c4387fc;
    global_list_push(uVar1, free_if_nonnull_wrap_0d76b8, 0x8c4387fc, a3);
    uVar1 = 0xffffffff;
    free_if_nonnull_wrap_0d76b8(auStack_5a4, 0xffffffff, uVar3, a3);
    FUN_8c0d7668(auStack_5b8);
    uVar1 = FUN_8c0f3df8(0x8c439b1c, auStack_5b8, uVar3);
    uVar3 = 0x8c438808;
    global_list_push(uVar1, free_if_nonnull_wrap_0d76b8, 0x8c438808, a3);
    uVar1 = 0xffffffff;
    free_if_nonnull_wrap_0d76b8(auStack_5b8, 0xffffffff, uVar3, a3);
    FUN_8c0d7668(auStack_5cc);
    uVar1 = FUN_8c0f3df8(0x8c439b30, auStack_5cc, uVar3);
    uVar3 = 0x8c438814;
    global_list_push(uVar1, free_if_nonnull_wrap_0d76b8, 0x8c438814, a3);
    uVar1 = 0xffffffff;
    free_if_nonnull_wrap_0d76b8(auStack_5cc, 0xffffffff, uVar3, a3);
    FUN_8c0d7668(auStack_5e0);
    uVar1 = FUN_8c0f3df8(0x8c439b44, auStack_5e0, uVar3);
    uVar3 = 0x8c438820;
    global_list_push(uVar1, free_if_nonnull_wrap_0d76b8, 0x8c438820, a3);
    uVar1 = 0xffffffff;
    free_if_nonnull_wrap_0d76b8(auStack_5e0, 0xffffffff, uVar3, a3);
    FUN_8c0d7668(auStack_5f4);
    uVar1 = FUN_8c0f3df8(0x8c439b58, auStack_5f4, uVar3);
    uVar3 = 0x8c43882c;
    global_list_push(uVar1, free_if_nonnull_wrap_0d76b8, 0x8c43882c, a3);
    uVar1 = 0xffffffff;
    free_if_nonnull_wrap_0d76b8(auStack_5f4, 0xffffffff, uVar3, a3);
    FUN_8c0d7668(auStack_608);
    uVar1 = FUN_8c0f3df8(0x8c439b6c, auStack_608, uVar3);
    uVar3 = 0x8c438838;
    global_list_push(uVar1, free_if_nonnull_wrap_0d76b8, 0x8c438838, a3);
    uVar1 = 0xffffffff;
    free_if_nonnull_wrap_0d76b8(auStack_608, 0xffffffff, uVar3, a3);
    FUN_8c0d7668(auStack_61c);
    uVar1 = FUN_8c0f3df8(0x8c439b80, auStack_61c, uVar3);
    uVar3 = 0x8c438844;
    global_list_push(uVar1, free_if_nonnull_wrap_0d76b8, 0x8c438844, a3);
    uVar1 = 0xffffffff;
    free_if_nonnull_wrap_0d76b8(auStack_61c, 0xffffffff, uVar3, a3);
    FUN_8c0d7668(auStack_630);
    uVar1 = FUN_8c0f3df8(0x8c439b94, auStack_630, uVar3);
    uVar3 = 0x8c438850;
    global_list_push(uVar1, free_if_nonnull_wrap_0d76b8, 0x8c438850, a3);
    uVar1 = 0xffffffff;
    free_if_nonnull_wrap_0d76b8(auStack_630, 0xffffffff, uVar3, a3);
    FUN_8c0d7668(auStack_644);
    uVar1 = FUN_8c0f3df8(0x8c439ba8, auStack_644, uVar3);
    uVar3 = 0x8c43885c;
    global_list_push(uVar1, free_if_nonnull_wrap_0d76b8, 0x8c43885c, a3);
    uVar1 = 0xffffffff;
    free_if_nonnull_wrap_0d76b8(auStack_644, 0xffffffff, uVar3, a3);
    FUN_8c0d7668(auStack_658);
    uVar1 = FUN_8c0f3df8(0x8c439bbc, auStack_658, uVar3);
    uVar3 = 0x8c438868;
    global_list_push(uVar1, free_if_nonnull_wrap_0d76b8, 0x8c438868, a3);
    uVar1 = 0xffffffff;
    free_if_nonnull_wrap_0d76b8(auStack_658, 0xffffffff, uVar3, a3);
    FUN_8c0d7668(auStack_66c);
    uVar1 = FUN_8c0f3df8(0x8c439bd0, auStack_66c, uVar3);
    uVar3 = 0x8c438874;
    global_list_push(uVar1, free_if_nonnull_wrap_0d76b8, 0x8c438874, a3);
    uVar1 = 0xffffffff;
    free_if_nonnull_wrap_0d76b8(auStack_66c, 0xffffffff, uVar3, a3);
    pcVar2 = FUN_8c0d7668;
    FUN_8c0d7668(auStack_680);
    uVar1 = FUN_8c0f3df8(0x8c439be4, auStack_680, pcVar2);
    uVar3 = 0x8c438880;
    global_list_push(uVar1, free_if_nonnull_wrap_0d76b8, 0x8c438880, a3);
    uVar1 = 0xffffffff;
    free_if_nonnull_wrap_0d76b8(auStack_680, 0xffffffff, uVar3, a3);
    FUN_8c0d7668(auStack_694);
    uVar1 = FUN_8c0f3df8(0x8c439bf8, auStack_694, uVar3);
    global_list_push(uVar1, free_if_nonnull_wrap_0d76b8, 0x8c43888c, a3);
    uVar3 = 0xffffffff;
    uVar1 = 0xffffffff;
    free_if_nonnull_wrap_0d76b8(auStack_694, 0xffffffff, 0xffffffff, a3);
    FUN_8c0d7668(auStack_6a8);
    uVar1 = FUN_8c0f3df8(0x8c439c0c, auStack_6a8, uVar3);
    uVar3 = 0x8c438898;
    global_list_push(uVar1, free_if_nonnull_wrap_0d76b8, 0x8c438898, a3);
    uVar1 = 0xffffffff;
    free_if_nonnull_wrap_0d76b8(auStack_6a8, 0xffffffff, uVar3, a3);
    FUN_8c0d7668(auStack_6bc);
    uVar1 = FUN_8c0f3df8(0x8c439c20, auStack_6bc, uVar3);
    global_list_push(uVar1, free_if_nonnull_wrap_0d76b8, 0x8c4388a4, a3);
    uVar3 = 0xffffffff;
    uVar1 = 0xffffffff;
    free_if_nonnull_wrap_0d76b8(auStack_6bc, 0xffffffff, 0xffffffff, a3);
    FUN_8c0d7668(auStack_6d0);
    uVar1 = FUN_8c0f3df8(0x8c439c34, auStack_6d0, uVar3);
    uVar3 = 0x8c4388b0;
    global_list_push(uVar1, free_if_nonnull_wrap_0d76b8, 0x8c4388b0, a3);
    uVar1 = 0xffffffff;
    free_if_nonnull_wrap_0d76b8(auStack_6d0, 0xffffffff, uVar3, a3);
    FUN_8c0d7668(auStack_6e4);
    uVar1 = FUN_8c0f3df8(0x8c439c48, auStack_6e4, uVar3);
    uVar3 = 0x8c4388bc;
    global_list_push(uVar1, free_if_nonnull_wrap_0d76b8, 0x8c4388bc, a3);
    uVar1 = 0xffffffff;
    free_if_nonnull_wrap_0d76b8(auStack_6e4, 0xffffffff, uVar3, a3);
    FUN_8c0d7668(auStack_6f8);
    uVar1 = FUN_8c0f3df8(0x8c439c5c, auStack_6f8, uVar3);
    uVar3 = 0x8c4388c8;
    global_list_push(uVar1, free_if_nonnull_wrap_0d76b8, 0x8c4388c8, a3);
    uVar1 = 0xffffffff;
    free_if_nonnull_wrap_0d76b8(auStack_6f8, 0xffffffff, uVar3, a3);
    FUN_8c0d7668(auStack_70c);
    uVar1 = FUN_8c0f3df8(0x8c439c70, auStack_70c, uVar3);
    uVar3 = 0x8c4388d4;
    global_list_push(uVar1, free_if_nonnull_wrap_0d76b8, 0x8c4388d4, a3);
    uVar1 = 0xffffffff;
    free_if_nonnull_wrap_0d76b8(auStack_70c, 0xffffffff, uVar3, a3);
    FUN_8c0d7668(auStack_720);
    uVar1 = FUN_8c0f3df8(0x8c439c84, auStack_720, uVar3);
    uVar3 = 0x8c4388e0;
    global_list_push(uVar1, free_if_nonnull_wrap_0d76b8, 0x8c4388e0, a3);
    uVar1 = 0xffffffff;
    free_if_nonnull_wrap_0d76b8(auStack_720, 0xffffffff, uVar3, a3);
    FUN_8c0d7668(auStack_734);
    uVar1 = FUN_8c0f3df8(0x8c439c98, auStack_734, uVar3);
    uVar3 = 0x8c4388ec;
    global_list_push(uVar1, free_if_nonnull_wrap_0d76b8, 0x8c4388ec, a3);
    uVar1 = 0xffffffff;
    free_if_nonnull_wrap_0d76b8(auStack_734, 0xffffffff, uVar3, a3);
    FUN_8c0d7668(auStack_748);
    uVar1 = FUN_8c0f3df8(0x8c439cac, auStack_748, uVar3);
    uVar3 = 0x8c4388f8;
    global_list_push(uVar1, free_if_nonnull_wrap_0d76b8, 0x8c4388f8, a3);
    uVar1 = 0xffffffff;
    free_if_nonnull_wrap_0d76b8(auStack_748, 0xffffffff, uVar3, a3);
    FUN_8c0d7668(auStack_75c);
    uVar1 = FUN_8c0f3df8(0x8c439cc0, auStack_75c, uVar3);
    uVar3 = 0x8c438904;
    global_list_push(uVar1, free_if_nonnull_wrap_0d76b8, 0x8c438904, a3);
    uVar1 = 0xffffffff;
    free_if_nonnull_wrap_0d76b8(auStack_75c, 0xffffffff, uVar3, a3);
    FUN_8c0d7668(auStack_770);
    uVar1 = FUN_8c0f3df8(0x8c439cd4, auStack_770, uVar3);
    uVar3 = 0x8c438910;
    global_list_push(uVar1, free_if_nonnull_wrap_0d76b8, 0x8c438910, a3);
    uVar1 = 0xffffffff;
    free_if_nonnull_wrap_0d76b8(auStack_770, 0xffffffff, uVar3, a3);
    FUN_8c0d7668(auStack_784);
    uVar1 = FUN_8c0f3df8(0x8c439ce8, auStack_784, uVar3);
    uVar3 = 0x8c43891c;
    global_list_push(uVar1, free_if_nonnull_wrap_0d76b8, 0x8c43891c, a3);
    uVar1 = 0xffffffff;
    free_if_nonnull_wrap_0d76b8(auStack_784, 0xffffffff, uVar3, a3);
    FUN_8c0d7668(auStack_798);
    uVar1 = FUN_8c0f3df8(0x8c439cfc, auStack_798, uVar3);
    uVar3 = 0x8c438928;
    global_list_push(uVar1, free_if_nonnull_wrap_0d76b8, 0x8c438928, a3);
    free_if_nonnull_wrap_0d76b8(auStack_798, 0xffffffff, uVar3, a3);
    FUN_8c0d7668(auStack_7ac);
    uVar1 = FUN_8c0f3df8(0x8c439d10, auStack_7ac, uVar3);
    uVar3 = 0x8c438934;
    global_list_push(uVar1, free_if_nonnull_wrap_0d76b8, 0x8c438934, a3);
    free_if_nonnull_wrap_0d76b8(auStack_7ac, 0xffffffff, uVar3, a3);
    FUN_8c0d7668(auStack_7c0);
    uVar1 = FUN_8c0f3df8(0x8c439d24, auStack_7c0, 0x7a8);
    uVar3 = 0x8c438940;
    global_list_push(uVar1, free_if_nonnull_wrap_0d76b8, 0x8c438940, a3);
    uVar1 = 0xffffffff;
    free_if_nonnull_wrap_0d76b8(auStack_7c0, 0xffffffff, uVar3, a3);
    FUN_8c0d7668(auStack_7d4);
    uVar1 = FUN_8c0f3df8(0x8c439d38, auStack_7d4, uVar3);
    uVar3 = 0x8c43894c;
    global_list_push(uVar1, free_if_nonnull_wrap_0d76b8, 0x8c43894c, a3);
    uVar1 = 0xffffffff;
    free_if_nonnull_wrap_0d76b8(auStack_7d4, 0xffffffff, uVar3, a3);
    puVar4 = auStack_7e8;
    FUN_8c0d7668(puVar4);
    uVar1 = FUN_8c0f3df8(0x8c439d4c, auStack_7e8, puVar4);
    uVar3 = 0x8c438958;
    global_list_push(uVar1, free_if_nonnull_wrap_0d76b8, 0x8c438958, a3);
    uVar1 = 0xffffffff;
    free_if_nonnull_wrap_0d76b8(auStack_7e8, 0xffffffff, uVar3, a3);
    FUN_8c0d7668(auStack_7fc);
    uVar1 = FUN_8c0f3df8(0x8c439d60, auStack_7fc, uVar3);
    uVar3 = 0x8c438964;
    global_list_push(uVar1, free_if_nonnull_wrap_0d76b8, 0x8c438964, a3);
    uVar1 = 0xffffffff;
    free_if_nonnull_wrap_0d76b8(auStack_7fc, 0xffffffff, uVar3, a3);
    puVar4 = auStack_810;
    FUN_8c0d7668(puVar4);
    uVar1 = FUN_8c0f3df8(0x8c439d74, auStack_810, puVar4);
    uVar3 = 0x8c438970;
    global_list_push(uVar1, free_if_nonnull_wrap_0d76b8, 0x8c438970, a3);
    free_if_nonnull_wrap_0d76b8(auStack_810, 0xffffffff, uVar3, a3);
    FUN_8c0d7668(auStack_824);
    uVar1 = FUN_8c0f3df8(0x8c439d88, auStack_824, uVar3);
    uVar3 = 0x8c43897c;
    global_list_push(uVar1, free_if_nonnull_wrap_0d76b8, 0x8c43897c, a3);
    uVar1 = 0xffffffff;
    free_if_nonnull_wrap_0d76b8(auStack_824, 0xffffffff, uVar3, a3);
    FUN_8c0d7668(auStack_838);
    uVar1 = FUN_8c0f3df8(0x8c439d9c, auStack_838, uVar3);
    uVar3 = 0x8c438988;
    global_list_push(uVar1, free_if_nonnull_wrap_0d76b8, 0x8c438988, a3);
    uVar1 = 0xffffffff;
    free_if_nonnull_wrap_0d76b8(auStack_838, 0xffffffff, uVar3, a3);
    FUN_8c0d7668(auStack_84c);
    uVar1 = FUN_8c0f3df8(0x8c439db0, auStack_84c, uVar3);
    uVar3 = 0x8c438994;
    global_list_push(uVar1, free_if_nonnull_wrap_0d76b8, 0x8c438994, a3);
    uVar1 = 0xffffffff;
    free_if_nonnull_wrap_0d76b8(auStack_84c, 0xffffffff, uVar3, a3);
    FUN_8c0d7668(auStack_860);
    uVar1 = FUN_8c0f3df8(0x8c439dc4, auStack_860, uVar3);
    uVar3 = 0x8c4389a0;
    global_list_push(uVar1, free_if_nonnull_wrap_0d76b8, 0x8c4389a0, a3);
    uVar1 = 0xffffffff;
    free_if_nonnull_wrap_0d76b8(auStack_860, 0xffffffff, uVar3, a3);
    FUN_8c0d7668(auStack_874);
    uVar1 = FUN_8c0f3df8(0x8c439dd8, auStack_874, uVar3);
    uVar3 = 0x8c4389ac;
    global_list_push(uVar1, free_if_nonnull_wrap_0d76b8, 0x8c4389ac, a3);
    uVar1 = 0xffffffff;
    free_if_nonnull_wrap_0d76b8(auStack_874, 0xffffffff, uVar3, a3);
    FUN_8c0d7668(auStack_888);
    uVar1 = FUN_8c0f3df8(0x8c439dec, auStack_888, uVar3);
    uVar3 = 0x8c4389b8;
    global_list_push(uVar1, free_if_nonnull_wrap_0d76b8, 0x8c4389b8, a3);
    uVar1 = 0xffffffff;
    free_if_nonnull_wrap_0d76b8(auStack_888, 0xffffffff, uVar3, a3);
    FUN_8c0d7668(auStack_89c);
    uVar1 = FUN_8c0f3df8(0x8c439e00, auStack_89c, uVar3);
    uVar3 = 0x8c4389c4;
    global_list_push(uVar1, free_if_nonnull_wrap_0d76b8, 0x8c4389c4, a3);
    uVar1 = 0xffffffff;
    free_if_nonnull_wrap_0d76b8(auStack_89c, 0xffffffff, uVar3, a3);
    FUN_8c0d7668(auStack_8b0);
    uVar1 = FUN_8c0f3df8(0x8c439e14, auStack_8b0, uVar3);
    uVar3 = 0x8c4389d0;
    global_list_push(uVar1, free_if_nonnull_wrap_0d76b8, 0x8c4389d0, a3);
    uVar1 = 0xffffffff;
    free_if_nonnull_wrap_0d76b8(auStack_8b0, 0xffffffff, uVar3, a3);
    FUN_8c0d7668(auStack_8c4);
    uVar1 = FUN_8c0f3df8(0x8c439e28, auStack_8c4, uVar3);
    uVar3 = 0x8c4389dc;
    global_list_push(uVar1, free_if_nonnull_wrap_0d76b8, 0x8c4389dc, a3);
    uVar1 = 0xffffffff;
    free_if_nonnull_wrap_0d76b8(auStack_8c4, 0xffffffff, uVar3, a3);
    FUN_8c0d7668(auStack_8d8);
    uVar1 = FUN_8c0f3df8(0x8c439e3c, auStack_8d8, uVar3);
    uVar3 = 0x8c4389e8;
    global_list_push(uVar1, free_if_nonnull_wrap_0d76b8, 0x8c4389e8, a3);
    uVar1 = 0xffffffff;
    free_if_nonnull_wrap_0d76b8(auStack_8d8, 0xffffffff, uVar3, a3);
    FUN_8c0d7668(auStack_8ec);
    uVar1 = FUN_8c0f3df8(0x8c439e50, auStack_8ec, uVar3);
    uVar3 = 0x8c4389f4;
    global_list_push(uVar1, free_if_nonnull_wrap_0d76b8, 0x8c4389f4, a3);
    uVar1 = 0xffffffff;
    free_if_nonnull_wrap_0d76b8(auStack_8ec, 0xffffffff, uVar3, a3);
    FUN_8c0d7668(auStack_900);
    uVar1 = FUN_8c0f3df8(0x8c439e64, auStack_900, FUN_8c0f3df8);
    uVar3 = 0x8c438a00;
    global_list_push(uVar1, free_if_nonnull_wrap_0d76b8, 0x8c438a00, a3);
    uVar1 = 0xffffffff;
    free_if_nonnull_wrap_0d76b8(auStack_900, 0xffffffff, uVar3, a3);
    FUN_8c0d7668(auStack_914);
    uVar1 = FUN_8c0f3df8(0x8c439e78, auStack_914, uVar3);
    uVar3 = 0x8c438a0c;
    global_list_push(uVar1, free_if_nonnull_wrap_0d76b8, 0x8c438a0c, a3);
    uVar1 = 0xffffffff;
    free_if_nonnull_wrap_0d76b8(auStack_914, 0xffffffff, uVar3, a3);
    FUN_8c0d7668(auStack_928);
    uVar1 = FUN_8c0f3df8(0x8c439e8c, auStack_928, auStack_928);
    uVar3 = 0x8c438a18;
    global_list_push(uVar1, free_if_nonnull_wrap_0d76b8, 0x8c438a18, a3);
    uVar1 = 0xffffffff;
    free_if_nonnull_wrap_0d76b8(auStack_928, 0xffffffff, uVar3, a3);
    FUN_8c0d7668(auStack_93c);
    uVar1 = FUN_8c0f3df8(0x8c439ea0, auStack_93c, uVar3);
    uVar3 = 0x8c438a24;
    global_list_push(uVar1, free_if_nonnull_wrap_0d76b8, 0x8c438a24, a3);
    uVar1 = 0xffffffff;
    free_if_nonnull_wrap_0d76b8(auStack_93c, 0xffffffff, uVar3, a3);
    FUN_8c0d7668(auStack_950);
    uVar1 = FUN_8c0f3df8(0x8c439eb4, auStack_950, auStack_950);
    uVar3 = 0x8c438a30;
    global_list_push(uVar1, free_if_nonnull_wrap_0d76b8, 0x8c438a30, a3);
    uVar1 = 0xffffffff;
    free_if_nonnull_wrap_0d76b8(auStack_950, 0xffffffff, uVar3, a3);
    FUN_8c0d7668(auStack_964);
    uVar1 = FUN_8c0f3df8(0x8c439ec8, auStack_964, uVar3);
    uVar3 = 0x8c438a3c;
    global_list_push(uVar1, free_if_nonnull_wrap_0d76b8, 0x8c438a3c, a3);
    uVar1 = 0xffffffff;
    free_if_nonnull_wrap_0d76b8(auStack_964, 0xffffffff, uVar3, a3);
    FUN_8c0d7668(auStack_978);
    uVar1 = FUN_8c0f3df8(0x8c439edc, auStack_978, uVar3);
    uVar3 = 0x8c438a48;
    global_list_push(uVar1, free_if_nonnull_wrap_0d76b8, 0x8c438a48, a3);
    uVar1 = 0xffffffff;
    free_if_nonnull_wrap_0d76b8(auStack_978, 0xffffffff, uVar3, a3);
    FUN_8c0d7668(auStack_98c);
    uVar1 = FUN_8c0f3df8(0x8c439ef0, auStack_98c, uVar3);
    uVar3 = 0x8c438a54;
    global_list_push(uVar1, free_if_nonnull_wrap_0d76b8, 0x8c438a54, a3);
    uVar1 = 0xffffffff;
    free_if_nonnull_wrap_0d76b8(auStack_98c, 0xffffffff, uVar3, a3);
    FUN_8c0d7668(auStack_9a0);
    uVar1 = FUN_8c0f3df8(0x8c439f04, auStack_9a0, uVar3);
    uVar3 = 0x8c438a60;
    global_list_push(uVar1, free_if_nonnull_wrap_0d76b8, 0x8c438a60, a3);
    uVar1 = 0xffffffff;
    free_if_nonnull_wrap_0d76b8(auStack_9a0, 0xffffffff, uVar3, a3);
    FUN_8c0d7668(auStack_9b4);
    uVar1 = FUN_8c0f3df8(0x8c439f18, auStack_9b4, uVar3);
    uVar3 = 0x8c438a6c;
    global_list_push(uVar1, free_if_nonnull_wrap_0d76b8, 0x8c438a6c, a3);
    uVar1 = 0xffffffff;
    free_if_nonnull_wrap_0d76b8(auStack_9b4, 0xffffffff, uVar3, a3);
    FUN_8c0d7668(auStack_9c8);
    uVar1 = FUN_8c0f3df8(0x8c439f2c, auStack_9c8, uVar3);
    uVar3 = 0x8c438a78;
    global_list_push(uVar1, free_if_nonnull_wrap_0d76b8, 0x8c438a78, a3);
    uVar1 = 0xffffffff;
    free_if_nonnull_wrap_0d76b8(auStack_9c8, 0xffffffff, uVar3, a3);
    FUN_8c0d7668(auStack_9dc);
    uVar1 = FUN_8c0f3df8(0x8c439f40, auStack_9dc, uVar3);
    uVar3 = 0x8c438a84;
    global_list_push(uVar1, free_if_nonnull_wrap_0d76b8, 0x8c438a84, a3);
    uVar1 = 0xffffffff;
    free_if_nonnull_wrap_0d76b8(auStack_9dc, 0xffffffff, uVar3, a3);
    FUN_8c0d7668(auStack_9f0);
    uVar1 = FUN_8c0f3df8(0x8c439f54, auStack_9f0, uVar3);
    uVar3 = 0x8c438a90;
    global_list_push(uVar1, free_if_nonnull_wrap_0d76b8, 0x8c438a90, a3);
    uVar1 = 0xffffffff;
    free_if_nonnull_wrap_0d76b8(auStack_9f0, 0xffffffff, uVar3, a3);
    FUN_8c0d7668(auStack_a04);
    uVar1 = FUN_8c0f3df8(0x8c439f68, auStack_a04, uVar3);
    uVar3 = 0x8c438a9c;
    global_list_push(uVar1, free_if_nonnull_wrap_0d76b8, 0x8c438a9c, a3);
    uVar1 = 0xffffffff;
    free_if_nonnull_wrap_0d76b8(auStack_a04, 0xffffffff, uVar3, a3);
    FUN_8c0d7668(auStack_a18);
    uVar1 = FUN_8c0f3df8(0x8c439f7c, auStack_a18, uVar3);
    uVar3 = 0x8c438aa8;
    global_list_push(uVar1, free_if_nonnull_wrap_0d76b8, 0x8c438aa8, a3);
    uVar1 = 0xffffffff;
    free_if_nonnull_wrap_0d76b8(auStack_a18, 0xffffffff, uVar3, a3);
    FUN_8c0d7668(auStack_a2c);
    uVar1 = FUN_8c0f3df8(0x8c439f90, auStack_a2c, uVar3);
    uVar3 = 0x8c438ab4;
    global_list_push(uVar1, free_if_nonnull_wrap_0d76b8, 0x8c438ab4, a3);
    uVar1 = 0xffffffff;
    free_if_nonnull_wrap_0d76b8(auStack_a2c, 0xffffffff, uVar3, a3);
    FUN_8c0d7668(auStack_a40);
    uVar1 = FUN_8c0f3df8(0x8c439fa4, auStack_a40, uVar3);
    global_list_push(uVar1, free_if_nonnull_wrap_0d76b8, 0x8c438ac0, a3);
    uVar3 = 0xffffffff;
    uVar1 = 0xffffffff;
    free_if_nonnull_wrap_0d76b8(auStack_a40, 0xffffffff, 0xffffffff, a3);
    FUN_8c0d7668(auStack_a54);
    uVar1 = FUN_8c0f3df8(0x8c439fb8, auStack_a54, uVar3);
    uVar3 = 0x8c438acc;
    global_list_push(uVar1, free_if_nonnull_wrap_0d76b8, 0x8c438acc, a3);
    uVar1 = 0xffffffff;
    free_if_nonnull_wrap_0d76b8(auStack_a54, 0xffffffff, uVar3, a3);
    FUN_8c0d7668(auStack_a68);
    uVar1 = FUN_8c0f3df8(0x8c439fcc, auStack_a68, uVar3);
    uVar3 = 0x8c438ad8;
    global_list_push(uVar1, free_if_nonnull_wrap_0d76b8, 0x8c438ad8, a3);
    uVar1 = 0xffffffff;
    free_if_nonnull_wrap_0d76b8(auStack_a68, 0xffffffff, uVar3, a3);
    FUN_8c0d7668(auStack_a7c);
    uVar1 = FUN_8c0f3df8(0x8c439fe0, auStack_a7c, uVar3);
    uVar3 = 0x8c438ae4;
    global_list_push(uVar1, free_if_nonnull_wrap_0d76b8, 0x8c438ae4, a3);
    uVar1 = 0xffffffff;
    free_if_nonnull_wrap_0d76b8(auStack_a7c, 0xffffffff, uVar3, a3);
    FUN_8c0d7668(auStack_a90);
    uVar1 = FUN_8c0f3df8(0x8c439ff4, auStack_a90, uVar3);
    uVar3 = 0x8c438af0;
    global_list_push(uVar1, free_if_nonnull_wrap_0d76b8, 0x8c438af0, a3);
    uVar1 = 0xffffffff;
    free_if_nonnull_wrap_0d76b8(auStack_a90, 0xffffffff, uVar3, a3);
    FUN_8c0d7668(auStack_aa4);
    uVar1 = FUN_8c0f3df8(0x8c43a008, auStack_aa4, uVar3);
    uVar3 = 0x8c438afc;
    global_list_push(uVar1, free_if_nonnull_wrap_0d76b8, 0x8c438afc, a3);
    uVar1 = 0xffffffff;
    free_if_nonnull_wrap_0d76b8(auStack_aa4, 0xffffffff, uVar3, a3);
    FUN_8c0d7668(auStack_ab8);
    uVar1 = FUN_8c0f3df8(0x8c43a01c, auStack_ab8, uVar3);
    uVar3 = 0x8c438b08;
    global_list_push(uVar1, free_if_nonnull_wrap_0d76b8, 0x8c438b08, a3);
    uVar1 = 0xffffffff;
    free_if_nonnull_wrap_0d76b8(auStack_ab8, 0xffffffff, uVar3, a3);
    FUN_8c0d7668(auStack_acc);
    uVar1 = FUN_8c0f3df8(0x8c43a030, auStack_acc, uVar3);
    uVar3 = 0x8c438b14;
    global_list_push(uVar1, free_if_nonnull_wrap_0d76b8, 0x8c438b14, a3);
    uVar1 = 0xffffffff;
    free_if_nonnull_wrap_0d76b8(auStack_acc, 0xffffffff, uVar3, a3);
    FUN_8c0d7668(auStack_ae0);
    uVar1 = FUN_8c0f3df8(0x8c43a044, auStack_ae0, uVar3);
    uVar3 = 0x8c438b20;
    global_list_push(uVar1, free_if_nonnull_wrap_0d76b8, 0x8c438b20, a3);
    uVar1 = 0xffffffff;
    free_if_nonnull_wrap_0d76b8(auStack_ae0, 0xffffffff, uVar3, a3);
    FUN_8c0d7668(auStack_af4);
    uVar1 = FUN_8c0f3df8(0x8c43a058, auStack_af4, uVar3);
    uVar3 = 0x8c438b2c;
    global_list_push(uVar1, free_if_nonnull_wrap_0d76b8, 0x8c438b2c, a3);
    uVar1 = 0xffffffff;
    free_if_nonnull_wrap_0d76b8(auStack_af4, 0xffffffff, uVar3, a3);
    FUN_8c0d7668(auStack_b08);
    uVar1 = FUN_8c0f3df8(0x8c43a06c, auStack_b08, uVar3);
    uVar3 = 0x8c438b38;
    global_list_push(uVar1, free_if_nonnull_wrap_0d76b8, 0x8c438b38, a3);
    uVar1 = 0xffffffff;
    free_if_nonnull_wrap_0d76b8(auStack_b08, 0xffffffff, uVar3, a3);
    FUN_8c0d7668(auStack_b1c);
    uVar1 = FUN_8c0f3df8(0x8c43a080, auStack_b1c, uVar3);
    uVar3 = 0x8c438b44;
    global_list_push(uVar1, free_if_nonnull_wrap_0d76b8, 0x8c438b44, a3);
    uVar1 = 0xffffffff;
    free_if_nonnull_wrap_0d76b8(auStack_b1c, 0xffffffff, uVar3, a3);
    FUN_8c0d7668(auStack_b30);
    uVar1 = FUN_8c0f3df8(0x8c43a094, auStack_b30, uVar3);
    uVar3 = 0x8c438b50;
    global_list_push(uVar1, free_if_nonnull_wrap_0d76b8, 0x8c438b50, a3);
    uVar1 = 0xffffffff;
    free_if_nonnull_wrap_0d76b8(auStack_b30, 0xffffffff, uVar3, a3);
    FUN_8c0d7668(auStack_b44);
    uVar1 = FUN_8c0f3df8(0x8c43a0a8, auStack_b44, uVar3);
    uVar3 = 0x8c438b5c;
    global_list_push(uVar1, free_if_nonnull_wrap_0d76b8, 0x8c438b5c, a3);
    uVar1 = 0xffffffff;
    free_if_nonnull_wrap_0d76b8(auStack_b44, 0xffffffff, uVar3, a3);
    FUN_8c0d7668(auStack_b58);
    uVar1 = FUN_8c0f3df8(0x8c43a0bc, auStack_b58, uVar3);
    uVar3 = 0x8c438b68;
    global_list_push(uVar1, free_if_nonnull_wrap_0d76b8, 0x8c438b68, a3);
    uVar1 = 0xffffffff;
    free_if_nonnull_wrap_0d76b8(auStack_b58, 0xffffffff, uVar3, a3);
    FUN_8c0d7668(auStack_b6c);
    uVar1 = FUN_8c0f3df8(0x8c43a0d0, auStack_b6c, uVar3);
    uVar3 = 0x8c438b74;
    global_list_push(uVar1, free_if_nonnull_wrap_0d76b8, 0x8c438b74, a3);
    uVar1 = 0xffffffff;
    free_if_nonnull_wrap_0d76b8(auStack_b6c, 0xffffffff, uVar3, a3);
    FUN_8c0d7668(auStack_b80);
    uVar1 = FUN_8c0f3df8(0x8c43a0e4, auStack_b80, uVar3);
    uVar3 = 0x8c438b80;
    global_list_push(uVar1, free_if_nonnull_wrap_0d76b8, 0x8c438b80, a3);
    uVar1 = 0xffffffff;
    free_if_nonnull_wrap_0d76b8(auStack_b80, 0xffffffff, uVar3, a3);
    pcVar2 = FUN_8c0d7668;
    FUN_8c0d7668(auStack_b94);
    uVar1 = FUN_8c0f3df8(0x8c43a0f8, auStack_b94, pcVar2);
    uVar3 = 0x8c438b8c;
    global_list_push(uVar1, free_if_nonnull_wrap_0d76b8, 0x8c438b8c, a3);
    uVar1 = 0xffffffff;
    free_if_nonnull_wrap_0d76b8(auStack_b94, 0xffffffff, uVar3, a3);
    FUN_8c0d7668(auStack_ba8);
    uVar1 = FUN_8c0f3df8(0x8c43a10c, auStack_ba8, uVar3);
    global_list_push(uVar1, free_if_nonnull_wrap_0d76b8, 0x8c438b98, a3);
    uVar3 = 0xffffffff;
    uVar1 = 0xffffffff;
    free_if_nonnull_wrap_0d76b8(auStack_ba8, 0xffffffff, 0xffffffff, a3);
    FUN_8c0d7668(auStack_bbc);
    uVar1 = FUN_8c0f3df8(0x8c43a120, auStack_bbc, uVar3);
    uVar3 = 0x8c438ba4;
    global_list_push(uVar1, free_if_nonnull_wrap_0d76b8, 0x8c438ba4, a3);
    uVar1 = 0xffffffff;
    free_if_nonnull_wrap_0d76b8(auStack_bbc, 0xffffffff, uVar3, a3);
    FUN_8c0d7668(auStack_bd0);
    uVar1 = FUN_8c0f3df8(0x8c43a134, auStack_bd0, uVar3);
    global_list_push(uVar1, free_if_nonnull_wrap_0d76b8, 0x8c438bb0, a3);
    uVar3 = 0xffffffff;
    uVar1 = 0xffffffff;
    free_if_nonnull_wrap_0d76b8(auStack_bd0, 0xffffffff, 0xffffffff, a3);
    FUN_8c0d7668(auStack_be4);
    uVar1 = FUN_8c0f3df8(0x8c43a148, auStack_be4, uVar3);
    uVar3 = 0x8c438bbc;
    global_list_push(uVar1, free_if_nonnull_wrap_0d76b8, 0x8c438bbc, a3);
    uVar1 = 0xffffffff;
    free_if_nonnull_wrap_0d76b8(auStack_be4, 0xffffffff, uVar3, a3);
    FUN_8c0d7668(auStack_bf8);
    uVar1 = FUN_8c0f3df8(0x8c43a15c, auStack_bf8, uVar3);
    uVar3 = 0x8c438bc8;
    global_list_push(uVar1, free_if_nonnull_wrap_0d76b8, 0x8c438bc8, a3);
    uVar1 = 0xffffffff;
    free_if_nonnull_wrap_0d76b8(auStack_bf8, 0xffffffff, uVar3, a3);
    FUN_8c0d7668(auStack_c0c);
    uVar1 = FUN_8c0f3df8(0x8c43a170, auStack_c0c, uVar3);
    uVar3 = 0x8c438bd4;
    global_list_push(uVar1, free_if_nonnull_wrap_0d76b8, 0x8c438bd4, a3);
    uVar1 = 0xffffffff;
    free_if_nonnull_wrap_0d76b8(auStack_c0c, 0xffffffff, uVar3, a3);
    FUN_8c0d7668(auStack_c20);
    uVar1 = FUN_8c0f3df8(0x8c43a184, auStack_c20, uVar3);
    uVar3 = 0x8c438be0;
    global_list_push(uVar1, free_if_nonnull_wrap_0d76b8, 0x8c438be0, a3);
    uVar1 = 0xffffffff;
    free_if_nonnull_wrap_0d76b8(auStack_c20, 0xffffffff, uVar3, a3);
    FUN_8c0d7668(auStack_c34);
    uVar1 = FUN_8c0f3df8(0x8c43a198, auStack_c34, uVar3);
    uVar3 = 0x8c438bec;
    global_list_push(uVar1, free_if_nonnull_wrap_0d76b8, 0x8c438bec, a3);
    uVar1 = 0xffffffff;
    free_if_nonnull_wrap_0d76b8(auStack_c34, 0xffffffff, uVar3, a3);
    FUN_8c0d7668(auStack_c48);
    uVar1 = FUN_8c0f3df8(0x8c43a1ac, auStack_c48, uVar3);
    uVar3 = 0x8c438bf8;
    global_list_push(uVar1, free_if_nonnull_wrap_0d76b8, 0x8c438bf8, a3);
    uVar1 = 0xffffffff;
    free_if_nonnull_wrap_0d76b8(auStack_c48, 0xffffffff, uVar3, a3);
    FUN_8c0d7668(auStack_c5c);
    uVar1 = FUN_8c0f3df8(0x8c43a1c0, auStack_c5c, uVar3);
    uVar3 = 0x8c438c04;
    global_list_push(uVar1, free_if_nonnull_wrap_0d76b8, 0x8c438c04, a3);
    uVar1 = 0xffffffff;
    free_if_nonnull_wrap_0d76b8(auStack_c5c, 0xffffffff, uVar3, a3);
    FUN_8c0d7668(auStack_c70);
    uVar1 = FUN_8c0f3df8(0x8c43a1d4, auStack_c70, uVar3);
    uVar3 = 0x8c438c10;
    global_list_push(uVar1, free_if_nonnull_wrap_0d76b8, 0x8c438c10, a3);
    uVar1 = 0xffffffff;
    free_if_nonnull_wrap_0d76b8(auStack_c70, 0xffffffff, uVar3, a3);
    FUN_8c0d7668(auStack_c84);
    uVar1 = FUN_8c0f3df8(0x8c43a1e8, auStack_c84, uVar3);
    uVar3 = 0x8c438c1c;
    global_list_push(uVar1, free_if_nonnull_wrap_0d76b8, 0x8c438c1c, a3);
    uVar1 = 0xffffffff;
    free_if_nonnull_wrap_0d76b8(auStack_c84, 0xffffffff, uVar3, a3);
    FUN_8c0d7668(auStack_c98);
    uVar1 = FUN_8c0f3df8(0x8c43a1fc, auStack_c98, uVar3);
    uVar3 = 0x8c438c28;
    global_list_push(uVar1, free_if_nonnull_wrap_0d76b8, 0x8c438c28, a3);
    uVar1 = 0xffffffff;
    free_if_nonnull_wrap_0d76b8(auStack_c98, 0xffffffff, uVar3, a3);
    FUN_8c0d7668(auStack_cac);
    uVar1 = FUN_8c0f3df8(0x8c43a210, auStack_cac, uVar3);
    uVar3 = 0x8c438c34;
    global_list_push(uVar1, free_if_nonnull_wrap_0d76b8, 0x8c438c34, a3);
    free_if_nonnull_wrap_0d76b8(auStack_cac, 0xffffffff, uVar3, a3);
    FUN_8c0d7668(auStack_cc0);
    uVar1 = FUN_8c0f3df8(0x8c43a224, auStack_cc0, uVar3);
    uVar3 = 0x8c438c40;
    global_list_push(uVar1, free_if_nonnull_wrap_0d76b8, 0x8c438c40, a3);
    free_if_nonnull_wrap_0d76b8(auStack_cc0, 0xffffffff, uVar3, a3);
    FUN_8c0d7668(auStack_cd4);
    uVar1 = FUN_8c0f3df8(0x8c43a238, auStack_cd4, 0xcbc);
    uVar3 = 0x8c438c4c;
    global_list_push(uVar1, free_if_nonnull_wrap_0d76b8, 0x8c438c4c, a3);
    uVar1 = 0xffffffff;
    free_if_nonnull_wrap_0d76b8(auStack_cd4, 0xffffffff, uVar3, a3);
    FUN_8c0d7668(auStack_ce8);
    uVar1 = FUN_8c0f3df8(0x8c43a24c, auStack_ce8, uVar3);
    uVar3 = 0x8c438c58;
    global_list_push(uVar1, free_if_nonnull_wrap_0d76b8, 0x8c438c58, a3);
    uVar1 = 0xffffffff;
    free_if_nonnull_wrap_0d76b8(auStack_ce8, 0xffffffff, uVar3, a3);
    puVar4 = auStack_cfc;
    FUN_8c0d7668(puVar4);
    uVar1 = FUN_8c0f3df8(0x8c43a260, auStack_cfc, puVar4);
    uVar3 = 0x8c438c64;
    global_list_push(uVar1, free_if_nonnull_wrap_0d76b8, 0x8c438c64, a3);
    uVar1 = 0xffffffff;
    free_if_nonnull_wrap_0d76b8(auStack_cfc, 0xffffffff, uVar3, a3);
    FUN_8c0d7668(auStack_d10);
    uVar1 = FUN_8c0f3df8(0x8c43a274, auStack_d10, uVar3);
    uVar3 = 0x8c438c70;
    global_list_push(uVar1, free_if_nonnull_wrap_0d76b8, 0x8c438c70, a3);
    uVar1 = 0xffffffff;
    free_if_nonnull_wrap_0d76b8(auStack_d10, 0xffffffff, uVar3, a3);
    puVar4 = auStack_d24;
    FUN_8c0d7668(puVar4);
    uVar1 = FUN_8c0f3df8(0x8c43a288, auStack_d24, puVar4);
    uVar3 = 0x8c438c7c;
    global_list_push(uVar1, free_if_nonnull_wrap_0d76b8, 0x8c438c7c, a3);
    free_if_nonnull_wrap_0d76b8(auStack_d24, 0xffffffff, uVar3, a3);
    FUN_8c0d7668(auStack_d38);
    uVar1 = FUN_8c0f3df8(0x8c43a29c, auStack_d38, uVar3);
    uVar3 = 0x8c438c88;
    global_list_push(uVar1, free_if_nonnull_wrap_0d76b8, 0x8c438c88, a3);
    uVar1 = 0xffffffff;
    free_if_nonnull_wrap_0d76b8(auStack_d38, 0xffffffff, uVar3, a3);
    FUN_8c0d7668(auStack_d4c);
    uVar1 = FUN_8c0f3df8(0x8c43a2b0, auStack_d4c, uVar3);
    uVar3 = 0x8c438c94;
    global_list_push(uVar1, free_if_nonnull_wrap_0d76b8, 0x8c438c94, a3);
    uVar1 = 0xffffffff;
    free_if_nonnull_wrap_0d76b8(auStack_d4c, 0xffffffff, uVar3, a3);
    FUN_8c0d7668(auStack_d60);
    uVar1 = FUN_8c0f3df8(0x8c43a2c4, auStack_d60, uVar3);
    uVar3 = 0x8c438ca0;
    global_list_push(uVar1, free_if_nonnull_wrap_0d76b8, 0x8c438ca0, a3);
    uVar1 = 0xffffffff;
    free_if_nonnull_wrap_0d76b8(auStack_d60, 0xffffffff, uVar3, a3);
    FUN_8c0d7668(auStack_d74);
    uVar1 = FUN_8c0f3df8(0x8c43a2d8, auStack_d74, uVar3);
    uVar3 = 0x8c438cac;
    global_list_push(uVar1, free_if_nonnull_wrap_0d76b8, 0x8c438cac, a3);
    uVar1 = 0xffffffff;
    free_if_nonnull_wrap_0d76b8(auStack_d74, 0xffffffff, uVar3, a3);
    FUN_8c0d7668(auStack_d88);
    uVar1 = FUN_8c0f3df8(0x8c43a2ec, auStack_d88, uVar3);
    uVar3 = 0x8c438cb8;
    global_list_push(uVar1, free_if_nonnull_wrap_0d76b8, 0x8c438cb8, a3);
    uVar1 = 0xffffffff;
    free_if_nonnull_wrap_0d76b8(auStack_d88, 0xffffffff, uVar3, a3);
    FUN_8c0d7668(auStack_d9c);
    uVar1 = FUN_8c0f3df8(0x8c43a300, auStack_d9c, uVar3);
    uVar3 = 0x8c438cc4;
    global_list_push(uVar1, free_if_nonnull_wrap_0d76b8, 0x8c438cc4, a3);
    uVar1 = 0xffffffff;
    free_if_nonnull_wrap_0d76b8(auStack_d9c, 0xffffffff, uVar3, a3);
    FUN_8c0d7668(auStack_db0);
    uVar1 = FUN_8c0f3df8(0x8c43a314, auStack_db0, uVar3);
    uVar3 = 0x8c438cd0;
    global_list_push(uVar1, free_if_nonnull_wrap_0d76b8, 0x8c438cd0, a3);
    uVar1 = 0xffffffff;
    free_if_nonnull_wrap_0d76b8(auStack_db0, 0xffffffff, uVar3, a3);
    FUN_8c0d7668(auStack_dc4);
    uVar1 = FUN_8c0f3df8(0x8c43a328, auStack_dc4, uVar3);
    uVar3 = 0x8c438cdc;
    global_list_push(uVar1, free_if_nonnull_wrap_0d76b8, 0x8c438cdc, a3);
    uVar1 = 0xffffffff;
    free_if_nonnull_wrap_0d76b8(auStack_dc4, 0xffffffff, uVar3, a3);
    FUN_8c0d7668(auStack_dd8);
    uVar1 = FUN_8c0f3df8(0x8c43a33c, auStack_dd8, uVar3);
    uVar3 = 0x8c438ce8;
    global_list_push(uVar1, free_if_nonnull_wrap_0d76b8, 0x8c438ce8, a3);
    uVar1 = 0xffffffff;
    free_if_nonnull_wrap_0d76b8(auStack_dd8, 0xffffffff, uVar3, a3);
    FUN_8c0d7668(auStack_dec);
    uVar1 = FUN_8c0f3df8(0x8c43a350, auStack_dec, uVar3);
    uVar3 = 0x8c438cf4;
    global_list_push(uVar1, free_if_nonnull_wrap_0d76b8, 0x8c438cf4, a3);
    uVar1 = 0xffffffff;
    free_if_nonnull_wrap_0d76b8(auStack_dec, 0xffffffff, uVar3, a3);
    FUN_8c0d7668(auStack_e00);
    uVar1 = FUN_8c0f3df8(0x8c43a364, auStack_e00, uVar3);
    uVar3 = 0x8c438d00;
    global_list_push(uVar1, free_if_nonnull_wrap_0d76b8, 0x8c438d00, a3);
    uVar1 = 0xffffffff;
    free_if_nonnull_wrap_0d76b8(auStack_e00, 0xffffffff, uVar3, a3);
    FUN_8c0d7668(auStack_e14);
    uVar1 = FUN_8c0f3df8(0x8c43a378, auStack_e14, FUN_8c0f3df8);
    uVar3 = 0x8c438d0c;
    global_list_push(uVar1, free_if_nonnull_wrap_0d76b8, 0x8c438d0c, a3);
    uVar1 = 0xffffffff;
    free_if_nonnull_wrap_0d76b8(auStack_e14, 0xffffffff, uVar3, a3);
    FUN_8c0d7668(auStack_e28);
    uVar1 = FUN_8c0f3df8(0x8c43a38c, auStack_e28, uVar3);
    uVar3 = 0x8c438d18;
    global_list_push(uVar1, free_if_nonnull_wrap_0d76b8, 0x8c438d18, a3);
    uVar1 = 0xffffffff;
    free_if_nonnull_wrap_0d76b8(auStack_e28, 0xffffffff, uVar3, a3);
    FUN_8c0d7668(auStack_e3c);
    uVar1 = FUN_8c0f3df8(0x8c43a3a0, auStack_e3c, auStack_e3c);
    uVar3 = 0x8c438d24;
    global_list_push(uVar1, free_if_nonnull_wrap_0d76b8, 0x8c438d24, a3);
    uVar1 = 0xffffffff;
    free_if_nonnull_wrap_0d76b8(auStack_e3c, 0xffffffff, uVar3, a3);
    FUN_8c0d7668(auStack_e50);
    uVar1 = FUN_8c0f3df8(0x8c43a3b4, auStack_e50, uVar3);
    uVar3 = 0x8c438d30;
    global_list_push(uVar1, free_if_nonnull_wrap_0d76b8, 0x8c438d30, a3);
    uVar1 = 0xffffffff;
    free_if_nonnull_wrap_0d76b8(auStack_e50, 0xffffffff, uVar3, a3);
    FUN_8c0d7668(auStack_e64);
    uVar1 = FUN_8c0f3df8(0x8c43a3c8, auStack_e64, auStack_e64);
    uVar3 = 0x8c438d3c;
    global_list_push(uVar1, free_if_nonnull_wrap_0d76b8, 0x8c438d3c, a3);
    uVar1 = 0xffffffff;
    free_if_nonnull_wrap_0d76b8(auStack_e64, 0xffffffff, uVar3, a3);
    FUN_8c0d7668(auStack_e78);
    uVar1 = FUN_8c0f3df8(0x8c43a3dc, auStack_e78, uVar3);
    uVar3 = 0x8c438d48;
    global_list_push(uVar1, free_if_nonnull_wrap_0d76b8, 0x8c438d48, a3);
    uVar1 = 0xffffffff;
    free_if_nonnull_wrap_0d76b8(auStack_e78, 0xffffffff, uVar3, a3);
    FUN_8c0d7668(auStack_e8c);
    uVar1 = FUN_8c0f3df8(0x8c43a3f0, auStack_e8c, uVar3);
    uVar3 = 0x8c438d54;
    global_list_push(uVar1, free_if_nonnull_wrap_0d76b8, 0x8c438d54, a3);
    uVar1 = 0xffffffff;
    free_if_nonnull_wrap_0d76b8(auStack_e8c, 0xffffffff, uVar3, a3);
    FUN_8c0d7668(auStack_ea0);
    uVar1 = FUN_8c0f3df8(0x8c43a404, auStack_ea0, uVar3);
    uVar3 = 0x8c438d60;
    global_list_push(uVar1, free_if_nonnull_wrap_0d76b8, 0x8c438d60, a3);
    uVar1 = 0xffffffff;
    free_if_nonnull_wrap_0d76b8(auStack_ea0, 0xffffffff, uVar3, a3);
    FUN_8c0d7668(auStack_eb4);
    uVar1 = FUN_8c0f3df8(0x8c43a418, auStack_eb4, uVar3);
    uVar3 = 0x8c438d6c;
    global_list_push(uVar1, free_if_nonnull_wrap_0d76b8, 0x8c438d6c, a3);
    uVar1 = 0xffffffff;
    free_if_nonnull_wrap_0d76b8(auStack_eb4, 0xffffffff, uVar3, a3);
    FUN_8c0d7668(auStack_ec8);
    uVar1 = FUN_8c0f3df8(0x8c43a42c, auStack_ec8, uVar3);
    uVar3 = 0x8c438d78;
    global_list_push(uVar1, free_if_nonnull_wrap_0d76b8, 0x8c438d78, a3);
    uVar1 = 0xffffffff;
    free_if_nonnull_wrap_0d76b8(auStack_ec8, 0xffffffff, uVar3, a3);
    FUN_8c0d7668(auStack_edc);
    uVar1 = FUN_8c0f3df8(0x8c43a440, auStack_edc, uVar3);
    uVar3 = 0x8c438d84;
    global_list_push(uVar1, free_if_nonnull_wrap_0d76b8, 0x8c438d84, a3);
    uVar1 = 0xffffffff;
    free_if_nonnull_wrap_0d76b8(auStack_edc, 0xffffffff, uVar3, a3);
    FUN_8c0d7668(auStack_ef0);
    uVar1 = FUN_8c0f3df8(0x8c43a454, auStack_ef0, uVar3);
    uVar3 = 0x8c438d90;
    global_list_push(uVar1, free_if_nonnull_wrap_0d76b8, 0x8c438d90, a3);
    uVar1 = 0xffffffff;
    free_if_nonnull_wrap_0d76b8(auStack_ef0, 0xffffffff, uVar3, a3);
    FUN_8c0d7668(auStack_f04);
    uVar1 = FUN_8c0f3df8(0x8c43a468, auStack_f04, uVar3);
    uVar3 = 0x8c438d9c;
    global_list_push(uVar1, free_if_nonnull_wrap_0d76b8, 0x8c438d9c, a3);
    uVar1 = 0xffffffff;
    free_if_nonnull_wrap_0d76b8(auStack_f04, 0xffffffff, uVar3, a3);
    FUN_8c0d7668(auStack_f18);
    uVar1 = FUN_8c0f3df8(0x8c43a47c, auStack_f18, uVar3);
    uVar3 = 0x8c438da8;
    global_list_push(uVar1, free_if_nonnull_wrap_0d76b8, 0x8c438da8, a3);
    uVar1 = 0xffffffff;
    free_if_nonnull_wrap_0d76b8(auStack_f18, 0xffffffff, uVar3, a3);
    FUN_8c0d7668(auStack_f2c);
    uVar1 = FUN_8c0f3df8(0x8c43a490, auStack_f2c, uVar3);
    uVar3 = 0x8c438db4;
    global_list_push(uVar1, free_if_nonnull_wrap_0d76b8, 0x8c438db4, a3);
    uVar1 = 0xffffffff;
    free_if_nonnull_wrap_0d76b8(auStack_f2c, 0xffffffff, uVar3, a3);
    FUN_8c0d7668(auStack_f40);
    uVar1 = FUN_8c0f3df8(0x8c43a4a4, auStack_f40, uVar3);
    uVar3 = 0x8c438dc0;
    global_list_push(uVar1, free_if_nonnull_wrap_0d76b8, 0x8c438dc0, a3);
    uVar1 = 0xffffffff;
    free_if_nonnull_wrap_0d76b8(auStack_f40, 0xffffffff, uVar3, a3);
    FUN_8c0d7668(auStack_f54);
    uVar1 = FUN_8c0f3df8(0x8c43a4b8, auStack_f54, uVar3);
    global_list_push(uVar1, free_if_nonnull_wrap_0d76b8, 0x8c438dcc, a3);
    uVar3 = 0xffffffff;
    uVar1 = 0xffffffff;
    free_if_nonnull_wrap_0d76b8(auStack_f54, 0xffffffff, 0xffffffff, a3);
    FUN_8c0d7668(auStack_f68);
    uVar1 = FUN_8c0f3df8(0x8c43a4cc, auStack_f68, uVar3);
    uVar3 = 0x8c438dd8;
    global_list_push(uVar1, free_if_nonnull_wrap_0d76b8, 0x8c438dd8, a3);
    uVar1 = 0xffffffff;
    free_if_nonnull_wrap_0d76b8(auStack_f68, 0xffffffff, uVar3, a3);
    FUN_8c0d7668(auStack_f7c);
    uVar1 = FUN_8c0f3df8(0x8c43a4e0, auStack_f7c, uVar3);
    uVar3 = 0x8c438de4;
    global_list_push(uVar1, free_if_nonnull_wrap_0d76b8, 0x8c438de4, a3);
    uVar1 = 0xffffffff;
    free_if_nonnull_wrap_0d76b8(auStack_f7c, 0xffffffff, uVar3, a3);
    FUN_8c0d7668(auStack_f90);
    uVar1 = FUN_8c0f3df8(0x8c43a4f4, auStack_f90, uVar3);
    uVar3 = 0x8c438df0;
    global_list_push(uVar1, free_if_nonnull_wrap_0d76b8, 0x8c438df0, a3);
    uVar1 = 0xffffffff;
    free_if_nonnull_wrap_0d76b8(auStack_f90, 0xffffffff, uVar3, a3);
    FUN_8c0d7668(auStack_fa4);
    uVar1 = FUN_8c0f3df8(0x8c43a508, auStack_fa4, uVar3);
    uVar3 = 0x8c438dfc;
    global_list_push(uVar1, free_if_nonnull_wrap_0d76b8, 0x8c438dfc, a3);
    uVar1 = 0xffffffff;
    free_if_nonnull_wrap_0d76b8(auStack_fa4, 0xffffffff, uVar3, a3);
    FUN_8c0d7668(auStack_fb8);
    uVar1 = FUN_8c0f3df8(0x8c43a51c, auStack_fb8, uVar3);
    uVar3 = 0x8c438e08;
    global_list_push(uVar1, free_if_nonnull_wrap_0d76b8, 0x8c438e08, a3);
    uVar1 = 0xffffffff;
    free_if_nonnull_wrap_0d76b8(auStack_fb8, 0xffffffff, uVar3, a3);
    FUN_8c0d7668(auStack_fcc);
    uVar1 = FUN_8c0f3df8(0x8c43a530, auStack_fcc, uVar3);
    uVar3 = 0x8c438e14;
    global_list_push(uVar1, free_if_nonnull_wrap_0d76b8, 0x8c438e14, a3);
    uVar1 = 0xffffffff;
    free_if_nonnull_wrap_0d76b8(auStack_fcc, 0xffffffff, uVar3, a3);
    FUN_8c0d7668(auStack_fe0);
    uVar1 = FUN_8c0f3df8(0x8c43a544, auStack_fe0, uVar3);
    uVar3 = 0x8c438e20;
    global_list_push(uVar1, free_if_nonnull_wrap_0d76b8, 0x8c438e20, a3);
    uVar1 = 0xffffffff;
    free_if_nonnull_wrap_0d76b8(auStack_fe0, 0xffffffff, uVar3, a3);
    FUN_8c0d7668(auStack_ff4);
    uVar1 = FUN_8c0f3df8(0x8c43a558, auStack_ff4, uVar3);
    uVar3 = 0x8c438e2c;
    global_list_push(uVar1, free_if_nonnull_wrap_0d76b8, 0x8c438e2c, a3);
    uVar1 = 0xffffffff;
    free_if_nonnull_wrap_0d76b8(auStack_ff4, 0xffffffff, uVar3, a3);
    FUN_8c0d7668(auStack_1008);
    uVar1 = FUN_8c0f3df8(0x8c43a56c, auStack_1008, uVar3);
    uVar3 = 0x8c438e38;
    global_list_push(uVar1, free_if_nonnull_wrap_0d76b8, 0x8c438e38, a3);
    uVar1 = 0xffffffff;
    free_if_nonnull_wrap_0d76b8(auStack_1008, 0xffffffff, uVar3, a3);
    FUN_8c0d7668(auStack_101c);
    uVar1 = FUN_8c0f3df8(0x8c43a580, auStack_101c, uVar3);
    uVar3 = 0x8c438e44;
    global_list_push(uVar1, free_if_nonnull_wrap_0d76b8, 0x8c438e44, a3);
    uVar1 = 0xffffffff;
    free_if_nonnull_wrap_0d76b8(auStack_101c, 0xffffffff, uVar3, a3);
    FUN_8c0d7668(auStack_1030);
    uVar1 = FUN_8c0f3df8(0x8c43a594, auStack_1030, uVar3);
    uVar3 = 0x8c438e50;
    global_list_push(uVar1, free_if_nonnull_wrap_0d76b8, 0x8c438e50, a3);
    uVar1 = 0xffffffff;
    free_if_nonnull_wrap_0d76b8(auStack_1030, 0xffffffff, uVar3, a3);
    FUN_8c0d7668(auStack_1044);
    uVar1 = FUN_8c0f3df8(0x8c43a5a8, auStack_1044, uVar3);
    uVar3 = 0x8c438e5c;
    global_list_push(uVar1, free_if_nonnull_wrap_0d76b8, 0x8c438e5c, a3);
    uVar1 = 0xffffffff;
    free_if_nonnull_wrap_0d76b8(auStack_1044, 0xffffffff, uVar3, a3);
    FUN_8c0d7668(auStack_1058);
    uVar1 = FUN_8c0f3df8(0x8c43a5bc, auStack_1058, uVar3);
    uVar3 = 0x8c438e68;
    global_list_push(uVar1, free_if_nonnull_wrap_0d76b8, 0x8c438e68, a3);
    uVar1 = 0xffffffff;
    free_if_nonnull_wrap_0d76b8(auStack_1058, 0xffffffff, uVar3, a3);
    FUN_8c0d7668(auStack_106c);
    uVar1 = FUN_8c0f3df8(0x8c43a5d0, auStack_106c, uVar3);
    uVar3 = 0x8c438e74;
    global_list_push(uVar1, free_if_nonnull_wrap_0d76b8, 0x8c438e74, a3);
    uVar1 = 0xffffffff;
    free_if_nonnull_wrap_0d76b8(auStack_106c, 0xffffffff, uVar3, a3);
    FUN_8c0d7668(auStack_1080);
    uVar1 = FUN_8c0f3df8(0x8c43a5e4, auStack_1080, uVar3);
    uVar3 = 0x8c438e80;
    global_list_push(uVar1, free_if_nonnull_wrap_0d76b8, 0x8c438e80, a3);
    uVar1 = 0xffffffff;
    free_if_nonnull_wrap_0d76b8(auStack_1080, 0xffffffff, uVar3, a3);
    FUN_8c0d7668(auStack_1094);
    uVar1 = FUN_8c0f3df8(0x8c43a5f8, auStack_1094, uVar3);
    uVar3 = 0x8c438e8c;
    global_list_push(uVar1, free_if_nonnull_wrap_0d76b8, 0x8c438e8c, a3);
    uVar1 = 0xffffffff;
    free_if_nonnull_wrap_0d76b8(auStack_1094, 0xffffffff, uVar3, a3);
    pcVar2 = FUN_8c0d7668;
    FUN_8c0d7668(auStack_10a8);
    uVar1 = FUN_8c0f3df8(0x8c43a60c, auStack_10a8, pcVar2);
    uVar3 = 0x8c438e98;
    global_list_push(uVar1, free_if_nonnull_wrap_0d76b8, 0x8c438e98, a3);
    uVar1 = 0xffffffff;
    free_if_nonnull_wrap_0d76b8(auStack_10a8, 0xffffffff, uVar3, a3);
    FUN_8c0d7668(auStack_10bc);
    uVar1 = FUN_8c0f3df8(0x8c43a620, auStack_10bc, uVar3);
    global_list_push(uVar1, free_if_nonnull_wrap_0d76b8, 0x8c438ea4, a3);
    uVar3 = 0xffffffff;
    uVar1 = 0xffffffff;
    free_if_nonnull_wrap_0d76b8(auStack_10bc, 0xffffffff, 0xffffffff, a3);
    FUN_8c0d7668(auStack_10d0);
    uVar1 = FUN_8c0f3df8(0x8c43a634, auStack_10d0, uVar3);
    uVar3 = 0x8c438eb0;
    global_list_push(uVar1, free_if_nonnull_wrap_0d76b8, 0x8c438eb0, a3);
    uVar1 = 0xffffffff;
    free_if_nonnull_wrap_0d76b8(auStack_10d0, 0xffffffff, uVar3, a3);
    FUN_8c0d7668(auStack_10e4);
    uVar1 = FUN_8c0f3df8(0x8c43a648, auStack_10e4, uVar3);
    global_list_push(uVar1, free_if_nonnull_wrap_0d76b8, 0x8c438ebc, a3);
    uVar3 = 0xffffffff;
    uVar1 = 0xffffffff;
    free_if_nonnull_wrap_0d76b8(auStack_10e4, 0xffffffff, 0xffffffff, a3);
    FUN_8c0d7668(auStack_10f8);
    uVar1 = FUN_8c0f3df8(0x8c43a65c, auStack_10f8, uVar3);
    uVar3 = 0x8c438ec8;
    global_list_push(uVar1, free_if_nonnull_wrap_0d76b8, 0x8c438ec8, a3);
    uVar1 = 0xffffffff;
    free_if_nonnull_wrap_0d76b8(auStack_10f8, 0xffffffff, uVar3, a3);
    FUN_8c0d7668(auStack_110c);
    uVar1 = FUN_8c0f3df8(0x8c43a670, auStack_110c, uVar3);
    uVar3 = 0x8c438ed4;
    global_list_push(uVar1, free_if_nonnull_wrap_0d76b8, 0x8c438ed4, a3);
    uVar1 = 0xffffffff;
    free_if_nonnull_wrap_0d76b8(auStack_110c, 0xffffffff, uVar3, a3);
    FUN_8c0d7668(auStack_1120);
    uVar1 = FUN_8c0f3df8(0x8c43a684, auStack_1120, uVar3);
    uVar3 = 0x8c438ee0;
    global_list_push(uVar1, free_if_nonnull_wrap_0d76b8, 0x8c438ee0, a3);
    uVar1 = 0xffffffff;
    free_if_nonnull_wrap_0d76b8(auStack_1120, 0xffffffff, uVar3, a3);
    FUN_8c0d7668(auStack_1134);
    uVar1 = FUN_8c0f3df8(0x8c43a698, auStack_1134, uVar3);
    uVar3 = 0x8c438eec;
    global_list_push(uVar1, free_if_nonnull_wrap_0d76b8, 0x8c438eec, a3);
    uVar1 = 0xffffffff;
    free_if_nonnull_wrap_0d76b8(auStack_1134, 0xffffffff, uVar3, a3);
    FUN_8c0d7668(auStack_1148);
    uVar1 = FUN_8c0f3df8(0x8c43a6ac, auStack_1148, uVar3);
    uVar3 = 0x8c438ef8;
    global_list_push(uVar1, free_if_nonnull_wrap_0d76b8, 0x8c438ef8, a3);
    uVar1 = 0xffffffff;
    free_if_nonnull_wrap_0d76b8(auStack_1148, 0xffffffff, uVar3, a3);
    FUN_8c0d7668(auStack_115c);
    uVar1 = FUN_8c0f3df8(0x8c43a6c0, auStack_115c, uVar3);
    uVar3 = 0x8c438f04;
    global_list_push(uVar1, free_if_nonnull_wrap_0d76b8, 0x8c438f04, a3);
    uVar1 = 0xffffffff;
    free_if_nonnull_wrap_0d76b8(auStack_115c, 0xffffffff, uVar3, a3);
    FUN_8c0d7668(auStack_1170);
    uVar1 = FUN_8c0f3df8(0x8c43a6d4, auStack_1170, uVar3);
    uVar3 = 0x8c438f10;
    global_list_push(uVar1, free_if_nonnull_wrap_0d76b8, 0x8c438f10, a3);
    uVar1 = 0xffffffff;
    free_if_nonnull_wrap_0d76b8(auStack_1170, 0xffffffff, uVar3, a3);
    FUN_8c0d7668(auStack_1184);
    uVar1 = FUN_8c0f3df8(0x8c43a6e8, auStack_1184, uVar3);
    uVar3 = 0x8c438f1c;
    global_list_push(uVar1, free_if_nonnull_wrap_0d76b8, 0x8c438f1c, a3);
    uVar1 = 0xffffffff;
    free_if_nonnull_wrap_0d76b8(auStack_1184, 0xffffffff, uVar3, a3);
    FUN_8c0d7668(auStack_1198);
    uVar1 = FUN_8c0f3df8(0x8c43a6fc, auStack_1198, uVar3);
    uVar3 = 0x8c438f28;
    global_list_push(uVar1, free_if_nonnull_wrap_0d76b8, 0x8c438f28, a3);
    uVar1 = 0xffffffff;
    free_if_nonnull_wrap_0d76b8(auStack_1198, 0xffffffff, uVar3, a3);
    FUN_8c0d7668(auStack_11ac);
    uVar1 = FUN_8c0f3df8(0x8c43a710, auStack_11ac, uVar3);
    uVar3 = 0x8c438f34;
    global_list_push(uVar1, free_if_nonnull_wrap_0d76b8, 0x8c438f34, a3);
    uVar1 = 0xffffffff;
    free_if_nonnull_wrap_0d76b8(auStack_11ac, 0xffffffff, uVar3, a3);
    FUN_8c0d7668(auStack_11c0);
    uVar1 = FUN_8c0f3df8(0x8c43a724, auStack_11c0, uVar3);
    uVar3 = 0x8c438f40;
    global_list_push(uVar1, free_if_nonnull_wrap_0d76b8, 0x8c438f40, a3);
    free_if_nonnull_wrap_0d76b8(auStack_11c0, 0xffffffff, uVar3, a3);
    FUN_8c0d7668(auStack_11d4);
    uVar1 = FUN_8c0f3df8(0x8c43a738, auStack_11d4, uVar3);
    uVar3 = 0x8c438f4c;
    global_list_push(uVar1, free_if_nonnull_wrap_0d76b8, 0x8c438f4c, a3);
    free_if_nonnull_wrap_0d76b8(auStack_11d4, 0xffffffff, uVar3, a3);
    FUN_8c0d7668(auStack_11e8);
    uVar1 = FUN_8c0f3df8(0x8c43a74c, auStack_11e8, 0x11d0);
    uVar3 = 0x8c438f58;
    global_list_push(uVar1, free_if_nonnull_wrap_0d76b8, 0x8c438f58, a3);
    uVar1 = 0xffffffff;
    free_if_nonnull_wrap_0d76b8(auStack_11e8, 0xffffffff, uVar3, a3);
    FUN_8c0d7668(auStack_11fc);
    uVar1 = FUN_8c0f3df8(0x8c43a760, auStack_11fc, uVar3);
    uVar3 = 0x8c438f64;
    global_list_push(uVar1, free_if_nonnull_wrap_0d76b8, 0x8c438f64, a3);
    uVar1 = 0xffffffff;
    free_if_nonnull_wrap_0d76b8(auStack_11fc, 0xffffffff, uVar3, a3);
    puVar4 = auStack_1210;
    FUN_8c0d7668(puVar4);
    uVar1 = FUN_8c0f3df8(0x8c43a774, auStack_1210, puVar4);
    uVar3 = 0x8c438f70;
    global_list_push(uVar1, free_if_nonnull_wrap_0d76b8, 0x8c438f70, a3);
    uVar1 = 0xffffffff;
    free_if_nonnull_wrap_0d76b8(auStack_1210, 0xffffffff, uVar3, a3);
    FUN_8c0d7668(auStack_1224);
    uVar1 = FUN_8c0f3df8(0x8c43a788, auStack_1224, uVar3);
    uVar3 = 0x8c438f7c;
    global_list_push(uVar1, free_if_nonnull_wrap_0d76b8, 0x8c438f7c, a3);
    uVar1 = 0xffffffff;
    free_if_nonnull_wrap_0d76b8(auStack_1224, 0xffffffff, uVar3, a3);
    puVar4 = auStack_1238;
    FUN_8c0d7668(puVar4);
    uVar1 = FUN_8c0f3df8(0x8c43a79c, auStack_1238, puVar4);
    uVar3 = 0x8c438f88;
    global_list_push(uVar1, free_if_nonnull_wrap_0d76b8, 0x8c438f88, a3);
    free_if_nonnull_wrap_0d76b8(auStack_1238, 0xffffffff, uVar3, a3);
    FUN_8c0d7668(auStack_124c);
    uVar1 = FUN_8c0f3df8(0x8c43a7b0, auStack_124c, uVar3);
    uVar3 = 0x8c438f94;
    global_list_push(uVar1, free_if_nonnull_wrap_0d76b8, 0x8c438f94, a3);
    uVar1 = 0xffffffff;
    free_if_nonnull_wrap_0d76b8(auStack_124c, 0xffffffff, uVar3, a3);
    FUN_8c0d7668(auStack_1260);
    uVar1 = FUN_8c0f3df8(0x8c43a7c4, auStack_1260, uVar3);
    uVar3 = 0x8c438fa0;
    global_list_push(uVar1, free_if_nonnull_wrap_0d76b8, 0x8c438fa0, a3);
    uVar1 = 0xffffffff;
    free_if_nonnull_wrap_0d76b8(auStack_1260, 0xffffffff, uVar3, a3);
    FUN_8c0d7668(auStack_1274);
    uVar1 = FUN_8c0f3df8(0x8c43a7d8, auStack_1274, uVar3);
    uVar3 = 0x8c438fac;
    global_list_push(uVar1, free_if_nonnull_wrap_0d76b8, 0x8c438fac, a3);
    uVar1 = 0xffffffff;
    free_if_nonnull_wrap_0d76b8(auStack_1274, 0xffffffff, uVar3, a3);
    FUN_8c0d7668(auStack_1288);
    uVar1 = FUN_8c0f3df8(0x8c43a7ec, auStack_1288, uVar3);
    uVar3 = 0x8c438fb8;
    global_list_push(uVar1, free_if_nonnull_wrap_0d76b8, 0x8c438fb8, a3);
    uVar1 = 0xffffffff;
    free_if_nonnull_wrap_0d76b8(auStack_1288, 0xffffffff, uVar3, a3);
    FUN_8c0d7668(auStack_129c);
    uVar1 = FUN_8c0f3df8(0x8c43a800, auStack_129c, uVar3);
    uVar3 = 0x8c438fc4;
    global_list_push(uVar1, free_if_nonnull_wrap_0d76b8, 0x8c438fc4, a3);
    uVar1 = 0xffffffff;
    free_if_nonnull_wrap_0d76b8(auStack_129c, 0xffffffff, uVar3, a3);
    FUN_8c0d7668(auStack_12b0);
    uVar1 = FUN_8c0f3df8(0x8c43a814, auStack_12b0, uVar3);
    uVar3 = 0x8c438fd0;
    global_list_push(uVar1, free_if_nonnull_wrap_0d76b8, 0x8c438fd0, a3);
    uVar1 = 0xffffffff;
    free_if_nonnull_wrap_0d76b8(auStack_12b0, 0xffffffff, uVar3, a3);
    FUN_8c0d7668(auStack_12c4);
    uVar1 = FUN_8c0f3df8(0x8c43a828, auStack_12c4, uVar3);
    uVar3 = 0x8c438fdc;
    global_list_push(uVar1, free_if_nonnull_wrap_0d76b8, 0x8c438fdc, a3);
    uVar1 = 0xffffffff;
    free_if_nonnull_wrap_0d76b8(auStack_12c4, 0xffffffff, uVar3, a3);
    FUN_8c0d7668(auStack_12d8);
    uVar1 = FUN_8c0f3df8(0x8c43a83c, auStack_12d8, uVar3);
    uVar3 = 0x8c438fe8;
    global_list_push(uVar1, free_if_nonnull_wrap_0d76b8, 0x8c438fe8, a3);
    uVar1 = 0xffffffff;
    free_if_nonnull_wrap_0d76b8(auStack_12d8, 0xffffffff, uVar3, a3);
    FUN_8c0d7668(auStack_12ec);
    uVar1 = FUN_8c0f3df8(0x8c43a850, auStack_12ec, uVar3);
    uVar3 = 0x8c438ff4;
    global_list_push(uVar1, free_if_nonnull_wrap_0d76b8, 0x8c438ff4, a3);
    uVar1 = 0xffffffff;
    free_if_nonnull_wrap_0d76b8(auStack_12ec, 0xffffffff, uVar3, a3);
    FUN_8c0d7668(auStack_1300);
    uVar1 = FUN_8c0f3df8(0x8c43a864, auStack_1300, uVar3);
    uVar3 = 0x8c439000;
    global_list_push(uVar1, free_if_nonnull_wrap_0d76b8, 0x8c439000, a3);
    uVar1 = 0xffffffff;
    free_if_nonnull_wrap_0d76b8(auStack_1300, 0xffffffff, uVar3, a3);
    FUN_8c0d7668(auStack_1314);
    uVar1 = FUN_8c0f3df8(0x8c43a878, auStack_1314, uVar3);
    uVar3 = 0x8c43900c;
    global_list_push(uVar1, free_if_nonnull_wrap_0d76b8, 0x8c43900c, a3);
    uVar1 = 0xffffffff;
    free_if_nonnull_wrap_0d76b8(auStack_1314, 0xffffffff, uVar3, a3);
    FUN_8c0d7668(auStack_1328);
    uVar1 = FUN_8c0f3df8(0x8c43a88c, auStack_1328, FUN_8c0f3df8);
    uVar3 = 0x8c439018;
    global_list_push(uVar1, free_if_nonnull_wrap_0d76b8, 0x8c439018, a3);
    uVar1 = 0xffffffff;
    free_if_nonnull_wrap_0d76b8(auStack_1328, 0xffffffff, uVar3, a3);
    FUN_8c0d7668(auStack_133c);
    uVar1 = FUN_8c0f3df8(0x8c43a8a0, auStack_133c, uVar3);
    uVar3 = 0x8c439024;
    global_list_push(uVar1, free_if_nonnull_wrap_0d76b8, 0x8c439024, a3);
    uVar1 = 0xffffffff;
    free_if_nonnull_wrap_0d76b8(auStack_133c, 0xffffffff, uVar3, a3);
    FUN_8c0d7668(auStack_1350);
    uVar1 = FUN_8c0f3df8(0x8c43a8b4, auStack_1350, auStack_1350);
    uVar3 = 0x8c439030;
    global_list_push(uVar1, free_if_nonnull_wrap_0d76b8, 0x8c439030, a3);
    uVar1 = 0xffffffff;
    free_if_nonnull_wrap_0d76b8(auStack_1350, 0xffffffff, uVar3, a3);
    FUN_8c0d7668(auStack_1364);
    uVar1 = FUN_8c0f3df8(0x8c43a8c8, auStack_1364, uVar3);
    uVar3 = 0x8c43903c;
    global_list_push(uVar1, free_if_nonnull_wrap_0d76b8, 0x8c43903c, a3);
    uVar1 = 0xffffffff;
    free_if_nonnull_wrap_0d76b8(auStack_1364, 0xffffffff, uVar3, a3);
    FUN_8c0d7668(auStack_1378);
    uVar1 = FUN_8c0f3df8(0x8c43a8dc, auStack_1378, auStack_1378);
    uVar3 = 0x8c439048;
    global_list_push(uVar1, free_if_nonnull_wrap_0d76b8, 0x8c439048, a3);
    uVar1 = 0xffffffff;
    free_if_nonnull_wrap_0d76b8(auStack_1378, 0xffffffff, uVar3, a3);
    FUN_8c0d7668(auStack_138c);
    uVar1 = FUN_8c0f3df8(0x8c43a8f0, auStack_138c, uVar3);
    uVar3 = 0x8c439054;
    global_list_push(uVar1, free_if_nonnull_wrap_0d76b8, 0x8c439054, a3);
    uVar1 = 0xffffffff;
    free_if_nonnull_wrap_0d76b8(auStack_138c, 0xffffffff, uVar3, a3);
    FUN_8c0d7668(auStack_13a0);
    uVar1 = FUN_8c0f3df8(0x8c43a904, auStack_13a0, uVar3);
    uVar3 = 0x8c439060;
    global_list_push(uVar1, free_if_nonnull_wrap_0d76b8, 0x8c439060, a3);
    uVar1 = 0xffffffff;
    free_if_nonnull_wrap_0d76b8(auStack_13a0, 0xffffffff, uVar3, a3);
    FUN_8c0d7668(auStack_13b4);
    uVar1 = FUN_8c0f3df8(0x8c43a918, auStack_13b4, uVar3);
    uVar3 = 0x8c43906c;
    global_list_push(uVar1, free_if_nonnull_wrap_0d76b8, 0x8c43906c, a3);
    uVar1 = 0xffffffff;
    free_if_nonnull_wrap_0d76b8(auStack_13b4, 0xffffffff, uVar3, a3);
    FUN_8c0d7668(auStack_13c8);
    uVar1 = FUN_8c0f3df8(0x8c43a92c, auStack_13c8, uVar3);
    uVar3 = 0x8c439078;
    global_list_push(uVar1, free_if_nonnull_wrap_0d76b8, 0x8c439078, a3);
    uVar1 = 0xffffffff;
    free_if_nonnull_wrap_0d76b8(auStack_13c8, 0xffffffff, uVar3, a3);
    FUN_8c0d7668(auStack_13dc);
    uVar1 = FUN_8c0f3df8(0x8c43a940, auStack_13dc, uVar3);
    uVar3 = 0x8c439084;
    global_list_push(uVar1, free_if_nonnull_wrap_0d76b8, 0x8c439084, a3);
    uVar1 = 0xffffffff;
    free_if_nonnull_wrap_0d76b8(auStack_13dc, 0xffffffff, uVar3, a3);
    FUN_8c0d7668(auStack_13f0);
    uVar1 = FUN_8c0f3df8(0x8c43a954, auStack_13f0, uVar3);
    uVar3 = 0x8c439090;
    global_list_push(uVar1, free_if_nonnull_wrap_0d76b8, 0x8c439090, a3);
    uVar1 = 0xffffffff;
    free_if_nonnull_wrap_0d76b8(auStack_13f0, 0xffffffff, uVar3, a3);
    FUN_8c0d7668(auStack_1404);
    uVar1 = FUN_8c0f3df8(0x8c43a968, auStack_1404, uVar3);
    uVar3 = 0x8c43909c;
    global_list_push(uVar1, free_if_nonnull_wrap_0d76b8, 0x8c43909c, a3);
    uVar1 = 0xffffffff;
    free_if_nonnull_wrap_0d76b8(auStack_1404, 0xffffffff, uVar3, a3);
    FUN_8c0d7668(auStack_1418);
    uVar1 = FUN_8c0f3df8(0x8c43a97c, auStack_1418, uVar3);
    uVar3 = 0x8c4390a8;
    global_list_push(uVar1, free_if_nonnull_wrap_0d76b8, 0x8c4390a8, a3);
    uVar1 = 0xffffffff;
    free_if_nonnull_wrap_0d76b8(auStack_1418, 0xffffffff, uVar3, a3);
    FUN_8c0d7668(auStack_142c);
    uVar1 = FUN_8c0f3df8(0x8c43a990, auStack_142c, uVar3);
    uVar3 = 0x8c4390b4;
    global_list_push(uVar1, free_if_nonnull_wrap_0d76b8, 0x8c4390b4, a3);
    uVar1 = 0xffffffff;
    free_if_nonnull_wrap_0d76b8(auStack_142c, 0xffffffff, uVar3, a3);
    FUN_8c0d7668(auStack_1440);
    uVar1 = FUN_8c0f3df8(0x8c43a9a4, auStack_1440, uVar3);
    uVar3 = 0x8c4390c0;
    global_list_push(uVar1, free_if_nonnull_wrap_0d76b8, 0x8c4390c0, a3);
    uVar1 = 0xffffffff;
    free_if_nonnull_wrap_0d76b8(auStack_1440, 0xffffffff, uVar3, a3);
    FUN_8c0d7668(auStack_1454);
    uVar1 = FUN_8c0f3df8(0x8c43a9b8, auStack_1454, uVar3);
    uVar3 = 0x8c4390cc;
    global_list_push(uVar1, free_if_nonnull_wrap_0d76b8, 0x8c4390cc, a3);
    uVar1 = 0xffffffff;
    free_if_nonnull_wrap_0d76b8(auStack_1454, 0xffffffff, uVar3, a3);
    FUN_8c0d7668(auStack_1468);
    uVar1 = FUN_8c0f3df8(0x8c43a9cc, auStack_1468, uVar3);
    global_list_push(uVar1, free_if_nonnull_wrap_0d76b8, 0x8c4390d8, a3);
    uVar3 = 0xffffffff;
    uVar1 = 0xffffffff;
    free_if_nonnull_wrap_0d76b8(auStack_1468, 0xffffffff, 0xffffffff, a3);
    FUN_8c0d7668(auStack_147c);
    uVar1 = FUN_8c0f3df8(0x8c43a9e0, auStack_147c, uVar3);
    uVar3 = 0x8c4390e4;
    global_list_push(uVar1, free_if_nonnull_wrap_0d76b8, 0x8c4390e4, a3);
    uVar1 = 0xffffffff;
    free_if_nonnull_wrap_0d76b8(auStack_147c, 0xffffffff, uVar3, a3);
    FUN_8c0d7668(auStack_1490);
    uVar1 = FUN_8c0f3df8(0x8c43a9f4, auStack_1490, uVar3);
    uVar3 = 0x8c4390f0;
    global_list_push(uVar1, free_if_nonnull_wrap_0d76b8, 0x8c4390f0, a3);
    uVar1 = 0xffffffff;
    free_if_nonnull_wrap_0d76b8(auStack_1490, 0xffffffff, uVar3, a3);
    FUN_8c0d7668(auStack_14a4);
    uVar1 = FUN_8c0f3df8(0x8c43aa08, auStack_14a4, uVar3);
    uVar3 = 0x8c4390fc;
    global_list_push(uVar1, free_if_nonnull_wrap_0d76b8, 0x8c4390fc, a3);
    uVar1 = 0xffffffff;
    free_if_nonnull_wrap_0d76b8(auStack_14a4, 0xffffffff, uVar3, a3);
    FUN_8c0d7668(auStack_14b8);
    uVar1 = FUN_8c0f3df8(0x8c43aa1c, auStack_14b8, uVar3);
    uVar3 = 0x8c439108;
    global_list_push(uVar1, free_if_nonnull_wrap_0d76b8, 0x8c439108, a3);
    uVar1 = 0xffffffff;
    free_if_nonnull_wrap_0d76b8(auStack_14b8, 0xffffffff, uVar3, a3);
    FUN_8c0d7668(auStack_14cc);
    uVar1 = FUN_8c0f3df8(0x8c43aa30, auStack_14cc, uVar3);
    uVar3 = 0x8c439114;
    global_list_push(uVar1, free_if_nonnull_wrap_0d76b8, 0x8c439114, a3);
    uVar1 = 0xffffffff;
    free_if_nonnull_wrap_0d76b8(auStack_14cc, 0xffffffff, uVar3, a3);
    FUN_8c0d7668(auStack_14e0);
    uVar1 = FUN_8c0f3df8(0x8c43aa44, auStack_14e0, uVar3);
    uVar3 = 0x8c439120;
    global_list_push(uVar1, free_if_nonnull_wrap_0d76b8, 0x8c439120, a3);
    uVar1 = 0xffffffff;
    free_if_nonnull_wrap_0d76b8(auStack_14e0, 0xffffffff, uVar3, a3);
    FUN_8c0d7668(auStack_14f4);
    uVar1 = FUN_8c0f3df8(0x8c43aa58, auStack_14f4, uVar3);
    uVar3 = 0x8c43912c;
    global_list_push(uVar1, free_if_nonnull_wrap_0d76b8, 0x8c43912c, a3);
    uVar1 = 0xffffffff;
    free_if_nonnull_wrap_0d76b8(auStack_14f4, 0xffffffff, uVar3, a3);
    FUN_8c0d7668(auStack_1508);
    uVar1 = FUN_8c0f3df8(0x8c43aa6c, auStack_1508, uVar3);
    uVar3 = 0x8c439138;
    global_list_push(uVar1, free_if_nonnull_wrap_0d76b8, 0x8c439138, a3);
    uVar1 = 0xffffffff;
    free_if_nonnull_wrap_0d76b8(auStack_1508, 0xffffffff, uVar3, a3);
    FUN_8c0d7668(auStack_151c);
    uVar1 = FUN_8c0f3df8(0x8c43aa80, auStack_151c, uVar3);
    uVar3 = 0x8c439144;
    global_list_push(uVar1, free_if_nonnull_wrap_0d76b8, 0x8c439144, a3);
    uVar1 = 0xffffffff;
    free_if_nonnull_wrap_0d76b8(auStack_151c, 0xffffffff, uVar3, a3);
    FUN_8c0d7668(auStack_1530);
    uVar1 = FUN_8c0f3df8(0x8c43aa94, auStack_1530, uVar3);
    uVar3 = 0x8c439150;
    global_list_push(uVar1, free_if_nonnull_wrap_0d76b8, 0x8c439150, a3);
    uVar1 = 0xffffffff;
    free_if_nonnull_wrap_0d76b8(auStack_1530, 0xffffffff, uVar3, a3);
    FUN_8c0d7668(auStack_1544);
    uVar1 = FUN_8c0f3df8(0x8c43aaa8, auStack_1544, uVar3);
    uVar3 = 0x8c43915c;
    global_list_push(uVar1, free_if_nonnull_wrap_0d76b8, 0x8c43915c, a3);
    uVar1 = 0xffffffff;
    free_if_nonnull_wrap_0d76b8(auStack_1544, 0xffffffff, uVar3, a3);
    FUN_8c0d7668(auStack_1558);
    uVar1 = FUN_8c0f3df8(0x8c43aabc, auStack_1558, uVar3);
    uVar3 = 0x8c439168;
    global_list_push(uVar1, free_if_nonnull_wrap_0d76b8, 0x8c439168, a3);
    uVar1 = 0xffffffff;
    free_if_nonnull_wrap_0d76b8(auStack_1558, 0xffffffff, uVar3, a3);
    FUN_8c0d7668(auStack_156c);
    uVar1 = FUN_8c0f3df8(0x8c43aad0, auStack_156c, uVar3);
    uVar3 = 0x8c439174;
    global_list_push(uVar1, free_if_nonnull_wrap_0d76b8, 0x8c439174, a3);
    uVar1 = 0xffffffff;
    free_if_nonnull_wrap_0d76b8(auStack_156c, 0xffffffff, uVar3, a3);
    FUN_8c0d7668(auStack_1580);
    uVar1 = FUN_8c0f3df8(0x8c43aae4, auStack_1580, uVar3);
    uVar3 = 0x8c439180;
    global_list_push(uVar1, free_if_nonnull_wrap_0d76b8, 0x8c439180, a3);
    uVar1 = 0xffffffff;
    free_if_nonnull_wrap_0d76b8(auStack_1580, 0xffffffff, uVar3, a3);
    FUN_8c0d7668(auStack_1594);
    uVar1 = FUN_8c0f3df8(0x8c43aaf8, auStack_1594, uVar3);
    uVar3 = 0x8c43918c;
    global_list_push(uVar1, free_if_nonnull_wrap_0d76b8, 0x8c43918c, a3);
    uVar1 = 0xffffffff;
    free_if_nonnull_wrap_0d76b8(auStack_1594, 0xffffffff, uVar3, a3);
    FUN_8c0d7668(auStack_15a8);
    uVar1 = FUN_8c0f3df8(0x8c43ab0c, auStack_15a8, uVar3);
    uVar3 = 0x8c439198;
    global_list_push(uVar1, free_if_nonnull_wrap_0d76b8, 0x8c439198, a3);
    uVar1 = 0xffffffff;
    free_if_nonnull_wrap_0d76b8(auStack_15a8, 0xffffffff, uVar3, a3);
    pcVar2 = FUN_8c0d7668;
    FUN_8c0d7668(auStack_15bc);
    uVar1 = FUN_8c0f3df8(0x8c43ab20, auStack_15bc, pcVar2);
    uVar3 = 0x8c4391a4;
    global_list_push(uVar1, free_if_nonnull_wrap_0d76b8, 0x8c4391a4, a3);
    uVar1 = 0xffffffff;
    free_if_nonnull_wrap_0d76b8(auStack_15bc, 0xffffffff, uVar3, a3);
    FUN_8c0d7668(auStack_15d0);
    uVar1 = FUN_8c0f3df8(0x8c43ab34, auStack_15d0, uVar3);
    global_list_push(uVar1, free_if_nonnull_wrap_0d76b8, 0x8c4391b0, a3);
    uVar3 = 0xffffffff;
    uVar1 = 0xffffffff;
    free_if_nonnull_wrap_0d76b8(auStack_15d0, 0xffffffff, 0xffffffff, a3);
    FUN_8c0d7668(auStack_15e4);
    uVar1 = FUN_8c0f3df8(0x8c43ab48, auStack_15e4, uVar3);
    uVar3 = 0x8c4391bc;
    global_list_push(uVar1, free_if_nonnull_wrap_0d76b8, 0x8c4391bc, a3);
    uVar1 = 0xffffffff;
    free_if_nonnull_wrap_0d76b8(auStack_15e4, 0xffffffff, uVar3, a3);
    FUN_8c0d7668(auStack_15f8);
    uVar1 = FUN_8c0f3df8(0x8c43ab5c, auStack_15f8, uVar3);
    global_list_push(uVar1, free_if_nonnull_wrap_0d76b8, 0x8c4391c8, a3);
    uVar3 = 0xffffffff;
    uVar1 = 0xffffffff;
    free_if_nonnull_wrap_0d76b8(auStack_15f8, 0xffffffff, 0xffffffff, a3);
    FUN_8c0d7668(auStack_160c);
    uVar1 = FUN_8c0f3df8(0x8c43ab70, auStack_160c, uVar3);
    uVar3 = 0x8c4391d4;
    global_list_push(uVar1, free_if_nonnull_wrap_0d76b8, 0x8c4391d4, a3);
    uVar1 = 0xffffffff;
    free_if_nonnull_wrap_0d76b8(auStack_160c, 0xffffffff, uVar3, a3);
    FUN_8c0d7668(auStack_1620);
    uVar1 = FUN_8c0f3df8(0x8c43ab84, auStack_1620, uVar3);
    uVar3 = 0x8c4391e0;
    global_list_push(uVar1, free_if_nonnull_wrap_0d76b8, 0x8c4391e0, a3);
    uVar1 = 0xffffffff;
    free_if_nonnull_wrap_0d76b8(auStack_1620, 0xffffffff, uVar3, a3);
    FUN_8c0d7668(auStack_1634);
    uVar1 = FUN_8c0f3df8(0x8c43ab98, auStack_1634, uVar3);
    uVar3 = 0x8c4391ec;
    global_list_push(uVar1, free_if_nonnull_wrap_0d76b8, 0x8c4391ec, a3);
    uVar1 = 0xffffffff;
    free_if_nonnull_wrap_0d76b8(auStack_1634, 0xffffffff, uVar3, a3);
    FUN_8c0d7668(auStack_1648);
    uVar1 = FUN_8c0f3df8(0x8c43abac, auStack_1648, uVar3);
    uVar3 = 0x8c4391f8;
    global_list_push(uVar1, free_if_nonnull_wrap_0d76b8, 0x8c4391f8, a3);
    uVar1 = 0xffffffff;
    free_if_nonnull_wrap_0d76b8(auStack_1648, 0xffffffff, uVar3, a3);
    FUN_8c0d7668(auStack_165c);
    uVar1 = FUN_8c0f3df8(0x8c43abc0, auStack_165c, uVar3);
    uVar3 = 0x8c439204;
    global_list_push(uVar1, free_if_nonnull_wrap_0d76b8, 0x8c439204, a3);
    uVar1 = 0xffffffff;
    free_if_nonnull_wrap_0d76b8(auStack_165c, 0xffffffff, uVar3, a3);
    FUN_8c0d7668(auStack_1670);
    uVar1 = FUN_8c0f3df8(0x8c43abd4, auStack_1670, uVar3);
    uVar3 = 0x8c439210;
    global_list_push(uVar1, free_if_nonnull_wrap_0d76b8, 0x8c439210, a3);
    uVar1 = 0xffffffff;
    free_if_nonnull_wrap_0d76b8(auStack_1670, 0xffffffff, uVar3, a3);
    FUN_8c0d7668(auStack_1684);
    uVar1 = FUN_8c0f3df8(0x8c43abe8, auStack_1684, uVar3);
    uVar3 = 0x8c43921c;
    global_list_push(uVar1, free_if_nonnull_wrap_0d76b8, 0x8c43921c, a3);
    uVar1 = 0xffffffff;
    free_if_nonnull_wrap_0d76b8(auStack_1684, 0xffffffff, uVar3, a3);
    FUN_8c0d7668(auStack_1698);
    uVar1 = FUN_8c0f3df8(0x8c43abfc, auStack_1698, uVar3);
    uVar3 = 0x8c439228;
    global_list_push(uVar1, free_if_nonnull_wrap_0d76b8, 0x8c439228, a3);
    uVar1 = 0xffffffff;
    free_if_nonnull_wrap_0d76b8(auStack_1698, 0xffffffff, uVar3, a3);
    FUN_8c0d7668(auStack_16ac);
    uVar1 = FUN_8c0f3df8(0x8c43ac10, auStack_16ac, uVar3);
    uVar3 = 0x8c439234;
    global_list_push(uVar1, free_if_nonnull_wrap_0d76b8, 0x8c439234, a3);
    uVar1 = 0xffffffff;
    free_if_nonnull_wrap_0d76b8(auStack_16ac, 0xffffffff, uVar3, a3);
    FUN_8c0d7668(auStack_16c0);
    uVar1 = FUN_8c0f3df8(0x8c43ac24, auStack_16c0, uVar3);
    uVar3 = 0x8c439240;
    global_list_push(uVar1, free_if_nonnull_wrap_0d76b8, 0x8c439240, a3);
    uVar1 = 0xffffffff;
    free_if_nonnull_wrap_0d76b8(auStack_16c0, 0xffffffff, uVar3, a3);
    FUN_8c0d7668(auStack_16d4);
    uVar1 = FUN_8c0f3df8(0x8c43ac38, auStack_16d4, uVar3);
    uVar3 = 0x8c43924c;
    global_list_push(uVar1, free_if_nonnull_wrap_0d76b8, 0x8c43924c, a3);
    free_if_nonnull_wrap_0d76b8(auStack_16d4, 0xffffffff, uVar3, a3);
    FUN_8c0d7668(auStack_16e8);
    uVar1 = FUN_8c0f3df8(0x8c43ac4c, auStack_16e8, uVar3);
    uVar3 = 0x8c439258;
    global_list_push(uVar1, free_if_nonnull_wrap_0d76b8, 0x8c439258, a3);
    free_if_nonnull_wrap_0d76b8(auStack_16e8, 0xffffffff, uVar3, a3);
    FUN_8c0d7668(auStack_16fc);
    uVar1 = FUN_8c0f3df8(0x8c43ac60, auStack_16fc, 0x16e4);
    uVar3 = 0x8c439264;
    global_list_push(uVar1, free_if_nonnull_wrap_0d76b8, 0x8c439264, a3);
    uVar1 = 0xffffffff;
    free_if_nonnull_wrap_0d76b8(auStack_16fc, 0xffffffff, uVar3, a3);
    FUN_8c0d7668(auStack_1710);
    uVar1 = FUN_8c0f3df8(0x8c43ac74, auStack_1710, uVar3);
    uVar3 = 0x8c439270;
    global_list_push(uVar1, free_if_nonnull_wrap_0d76b8, 0x8c439270, a3);
    uVar1 = 0xffffffff;
    free_if_nonnull_wrap_0d76b8(auStack_1710, 0xffffffff, uVar3, a3);
    puVar4 = auStack_1724;
    FUN_8c0d7668(puVar4);
    uVar1 = FUN_8c0f3df8(0x8c43ac88, auStack_1724, puVar4);
    uVar3 = 0x8c43927c;
    global_list_push(uVar1, free_if_nonnull_wrap_0d76b8, 0x8c43927c, a3);
    uVar1 = 0xffffffff;
    free_if_nonnull_wrap_0d76b8(auStack_1724, 0xffffffff, uVar3, a3);
    FUN_8c0d7668(auStack_1738);
    uVar1 = FUN_8c0f3df8(0x8c43ac9c, auStack_1738, uVar3);
    uVar3 = 0x8c439288;
    global_list_push(uVar1, free_if_nonnull_wrap_0d76b8, 0x8c439288, a3);
    uVar1 = 0xffffffff;
    free_if_nonnull_wrap_0d76b8(auStack_1738, 0xffffffff, uVar3, a3);
    puVar4 = auStack_174c;
    FUN_8c0d7668(puVar4);
    uVar1 = FUN_8c0f3df8(0x8c43acb0, auStack_174c, puVar4);
    uVar3 = 0x8c439294;
    global_list_push(uVar1, free_if_nonnull_wrap_0d76b8, 0x8c439294, a3);
    free_if_nonnull_wrap_0d76b8(auStack_174c, 0xffffffff, uVar3, a3);
    FUN_8c0d7668(auStack_1760);
    uVar1 = FUN_8c0f3df8(0x8c43acc4, auStack_1760, uVar3);
    uVar3 = 0x8c4392a0;
    global_list_push(uVar1, free_if_nonnull_wrap_0d76b8, 0x8c4392a0, a3);
    uVar1 = 0xffffffff;
    free_if_nonnull_wrap_0d76b8(auStack_1760, 0xffffffff, uVar3, a3);
    FUN_8c0d7668(auStack_1774);
    uVar1 = FUN_8c0f3df8(0x8c43acd8, auStack_1774, uVar3);
    uVar3 = 0x8c4392ac;
    global_list_push(uVar1, free_if_nonnull_wrap_0d76b8, 0x8c4392ac, a3);
    uVar1 = 0xffffffff;
    free_if_nonnull_wrap_0d76b8(auStack_1774, 0xffffffff, uVar3, a3);
    FUN_8c0d7668(auStack_1788);
    uVar1 = FUN_8c0f3df8(0x8c43acec, auStack_1788, uVar3);
    uVar3 = 0x8c4392b8;
    global_list_push(uVar1, free_if_nonnull_wrap_0d76b8, 0x8c4392b8, a3);
    uVar1 = 0xffffffff;
    free_if_nonnull_wrap_0d76b8(auStack_1788, 0xffffffff, uVar3, a3);
    FUN_8c0d7668(auStack_179c);
    uVar1 = FUN_8c0f3df8(0x8c43ad00, auStack_179c, uVar3);
    uVar3 = 0x8c4392c4;
    global_list_push(uVar1, free_if_nonnull_wrap_0d76b8, 0x8c4392c4, a3);
    uVar1 = 0xffffffff;
    free_if_nonnull_wrap_0d76b8(auStack_179c, 0xffffffff, uVar3, a3);
    FUN_8c0d7668(auStack_17b0);
    uVar1 = FUN_8c0f3df8(0x8c43ad14, auStack_17b0, uVar3);
    uVar3 = 0x8c4392d0;
    global_list_push(uVar1, free_if_nonnull_wrap_0d76b8, 0x8c4392d0, a3);
    uVar1 = 0xffffffff;
    free_if_nonnull_wrap_0d76b8(auStack_17b0, 0xffffffff, uVar3, a3);
    FUN_8c0d7668(auStack_17c4);
    uVar1 = FUN_8c0f3df8(0x8c43ad28, auStack_17c4, uVar3);
    uVar3 = 0x8c4392dc;
    global_list_push(uVar1, free_if_nonnull_wrap_0d76b8, 0x8c4392dc, a3);
    uVar1 = 0xffffffff;
    free_if_nonnull_wrap_0d76b8(auStack_17c4, 0xffffffff, uVar3, a3);
    FUN_8c0d7668(auStack_17d8);
    uVar1 = FUN_8c0f3df8(0x8c43ad3c, auStack_17d8, uVar3);
    uVar3 = 0x8c4392e8;
    global_list_push(uVar1, free_if_nonnull_wrap_0d76b8, 0x8c4392e8, a3);
    uVar1 = 0xffffffff;
    free_if_nonnull_wrap_0d76b8(auStack_17d8, 0xffffffff, uVar3, a3);
    FUN_8c0d7668(auStack_17ec);
    uVar1 = FUN_8c0f3df8(0x8c43ad50, auStack_17ec, uVar3);
    uVar3 = 0x8c4392f4;
    global_list_push(uVar1, free_if_nonnull_wrap_0d76b8, 0x8c4392f4, a3);
    uVar1 = 0xffffffff;
    free_if_nonnull_wrap_0d76b8(auStack_17ec, 0xffffffff, uVar3, a3);
    FUN_8c0d7668(auStack_1800);
    uVar1 = FUN_8c0f3df8(0x8c43ad64, auStack_1800, uVar3);
    uVar3 = 0x8c439300;
    global_list_push(uVar1, free_if_nonnull_wrap_0d76b8, 0x8c439300, a3);
    uVar1 = 0xffffffff;
    free_if_nonnull_wrap_0d76b8(auStack_1800, 0xffffffff, uVar3, a3);
    FUN_8c0d7668(auStack_1814);
    uVar1 = FUN_8c0f3df8(0x8c43ad78, auStack_1814, uVar3);
    uVar3 = 0x8c43930c;
    global_list_push(uVar1, free_if_nonnull_wrap_0d76b8, 0x8c43930c, a3);
    uVar1 = 0xffffffff;
    free_if_nonnull_wrap_0d76b8(auStack_1814, 0xffffffff, uVar3, a3);
    FUN_8c0d7668(auStack_1828);
    uVar1 = FUN_8c0f3df8(0x8c43ad8c, auStack_1828, uVar3);
    uVar3 = 0x8c439318;
    global_list_push(uVar1, free_if_nonnull_wrap_0d76b8, 0x8c439318, a3);
    uVar1 = 0xffffffff;
    free_if_nonnull_wrap_0d76b8(auStack_1828, 0xffffffff, uVar3, a3);
    FUN_8c0d7668(auStack_183c);
    uVar1 = FUN_8c0f3df8(0x8c43ada0, auStack_183c, FUN_8c0f3df8);
    uVar3 = 0x8c439324;
    global_list_push(uVar1, free_if_nonnull_wrap_0d76b8, 0x8c439324, a3);
    uVar1 = 0xffffffff;
    free_if_nonnull_wrap_0d76b8(auStack_183c, 0xffffffff, uVar3, a3);
    FUN_8c0d7668(auStack_1850);
    uVar1 = FUN_8c0f3df8(0x8c43adb4, auStack_1850, uVar3);
    uVar3 = 0x8c439330;
    global_list_push(uVar1, free_if_nonnull_wrap_0d76b8, 0x8c439330, a3);
    uVar1 = 0xffffffff;
    free_if_nonnull_wrap_0d76b8(auStack_1850, 0xffffffff, uVar3, a3);
    FUN_8c0d7668(auStack_1864);
    uVar1 = FUN_8c0f3df8(0x8c43adc8, auStack_1864, auStack_1864);
    uVar3 = 0x8c43933c;
    global_list_push(uVar1, free_if_nonnull_wrap_0d76b8, 0x8c43933c, a3);
    uVar1 = 0xffffffff;
    free_if_nonnull_wrap_0d76b8(auStack_1864, 0xffffffff, uVar3, a3);
    FUN_8c0d7668(auStack_1878);
    uVar1 = FUN_8c0f3df8(0x8c43addc, auStack_1878, uVar3);
    uVar3 = 0x8c439348;
    global_list_push(uVar1, free_if_nonnull_wrap_0d76b8, 0x8c439348, a3);
    uVar1 = 0xffffffff;
    free_if_nonnull_wrap_0d76b8(auStack_1878, 0xffffffff, uVar3, a3);
    FUN_8c0d7668(auStack_188c);
    uVar1 = FUN_8c0f3df8(0x8c43adf0, auStack_188c, auStack_188c);
    uVar3 = 0x8c439354;
    global_list_push(uVar1, free_if_nonnull_wrap_0d76b8, 0x8c439354, a3);
    uVar1 = 0xffffffff;
    free_if_nonnull_wrap_0d76b8(auStack_188c, 0xffffffff, uVar3, a3);
    FUN_8c0d7668(auStack_18a0);
    uVar1 = FUN_8c0f3df8(0x8c43ae04, auStack_18a0, uVar3);
    uVar3 = 0x8c439360;
    global_list_push(uVar1, free_if_nonnull_wrap_0d76b8, 0x8c439360, a3);
    uVar1 = 0xffffffff;
    free_if_nonnull_wrap_0d76b8(auStack_18a0, 0xffffffff, uVar3, a3);
    FUN_8c0d7668(auStack_18b4);
    uVar1 = FUN_8c0f3df8(0x8c43ae18, auStack_18b4, uVar3);
    uVar3 = 0x8c43936c;
    global_list_push(uVar1, free_if_nonnull_wrap_0d76b8, 0x8c43936c, a3);
    uVar1 = 0xffffffff;
    free_if_nonnull_wrap_0d76b8(auStack_18b4, 0xffffffff, uVar3, a3);
    FUN_8c0d7668(auStack_18c8);
    uVar1 = FUN_8c0f3df8(0x8c43ae2c, auStack_18c8, uVar3);
    uVar3 = 0x8c439378;
    global_list_push(uVar1, free_if_nonnull_wrap_0d76b8, 0x8c439378, a3);
    uVar1 = 0xffffffff;
    free_if_nonnull_wrap_0d76b8(auStack_18c8, 0xffffffff, uVar3, a3);
    FUN_8c0d7668(auStack_18dc);
    uVar1 = FUN_8c0f3df8(0x8c43ae40, auStack_18dc, uVar3);
    uVar3 = 0x8c439384;
    global_list_push(uVar1, free_if_nonnull_wrap_0d76b8, 0x8c439384, a3);
    uVar1 = 0xffffffff;
    free_if_nonnull_wrap_0d76b8(auStack_18dc, 0xffffffff, uVar3, a3);
    FUN_8c0d7668(auStack_18f0);
    uVar1 = FUN_8c0f3df8(0x8c43ae54, auStack_18f0, uVar3);
    uVar3 = 0x8c439390;
    global_list_push(uVar1, free_if_nonnull_wrap_0d76b8, 0x8c439390, a3);
    uVar1 = 0xffffffff;
    free_if_nonnull_wrap_0d76b8(auStack_18f0, 0xffffffff, uVar3, a3);
    FUN_8c0d7668(auStack_1904);
    uVar1 = FUN_8c0f3df8(0x8c43ae68, auStack_1904, uVar3);
    uVar3 = 0x8c43939c;
    global_list_push(uVar1, free_if_nonnull_wrap_0d76b8, 0x8c43939c, a3);
    uVar1 = 0xffffffff;
    free_if_nonnull_wrap_0d76b8(auStack_1904, 0xffffffff, uVar3, a3);
    FUN_8c0d7668(auStack_1918);
    uVar1 = FUN_8c0f3df8(0x8c43ae7c, auStack_1918, uVar3);
    uVar3 = 0x8c4393a8;
    global_list_push(uVar1, free_if_nonnull_wrap_0d76b8, 0x8c4393a8, a3);
    uVar1 = 0xffffffff;
    free_if_nonnull_wrap_0d76b8(auStack_1918, 0xffffffff, uVar3, a3);
    FUN_8c0d7668(auStack_192c);
    uVar1 = FUN_8c0f3df8(0x8c43ae90, auStack_192c, uVar3);
    uVar3 = 0x8c4393b4;
    global_list_push(uVar1, free_if_nonnull_wrap_0d76b8, 0x8c4393b4, a3);
    uVar1 = 0xffffffff;
    free_if_nonnull_wrap_0d76b8(auStack_192c, 0xffffffff, uVar3, a3);
    FUN_8c0d7668(auStack_1940);
    uVar1 = FUN_8c0f3df8(0x8c43aea4, auStack_1940, uVar3);
    uVar3 = 0x8c4393c0;
    global_list_push(uVar1, free_if_nonnull_wrap_0d76b8, 0x8c4393c0, a3);
    uVar1 = 0xffffffff;
    free_if_nonnull_wrap_0d76b8(auStack_1940, 0xffffffff, uVar3, a3);
    FUN_8c0d7668(auStack_1954);
    uVar1 = FUN_8c0f3df8(0x8c43aeb8, auStack_1954, uVar3);
    uVar3 = 0x8c4393cc;
    global_list_push(uVar1, free_if_nonnull_wrap_0d76b8, 0x8c4393cc, a3);
    uVar1 = 0xffffffff;
    free_if_nonnull_wrap_0d76b8(auStack_1954, 0xffffffff, uVar3, a3);
    FUN_8c0d7668(auStack_1968);
    uVar1 = FUN_8c0f3df8(0x8c43aecc, auStack_1968, uVar3);
    uVar3 = 0x8c4393d8;
    global_list_push(uVar1, free_if_nonnull_wrap_0d76b8, 0x8c4393d8, a3);
    uVar1 = 0xffffffff;
    free_if_nonnull_wrap_0d76b8(auStack_1968, 0xffffffff, uVar3, a3);
    FUN_8c0d7668(auStack_197c);
    uVar1 = FUN_8c0f3df8(0x8c43aee0, auStack_197c, uVar3);
    global_list_push(uVar1, free_if_nonnull_wrap_0d76b8, 0x8c4393e4, a3);
    uVar3 = 0xffffffff;
    uVar1 = 0xffffffff;
    free_if_nonnull_wrap_0d76b8(auStack_197c, 0xffffffff, 0xffffffff, a3);
    FUN_8c0d7668(auStack_1990);
    uVar1 = FUN_8c0f3df8(0x8c43aef4, auStack_1990, uVar3);
    uVar3 = 0x8c4393f0;
    global_list_push(uVar1, free_if_nonnull_wrap_0d76b8, 0x8c4393f0, a3);
    uVar1 = 0xffffffff;
    free_if_nonnull_wrap_0d76b8(auStack_1990, 0xffffffff, uVar3, a3);
    FUN_8c0d7668(auStack_19a4);
    uVar1 = FUN_8c0f3df8(0x8c43af08, auStack_19a4, uVar3);
    uVar3 = 0x8c4393fc;
    global_list_push(uVar1, free_if_nonnull_wrap_0d76b8, 0x8c4393fc, a3);
    uVar1 = 0xffffffff;
    free_if_nonnull_wrap_0d76b8(auStack_19a4, 0xffffffff, uVar3, a3);
    FUN_8c0d7668(auStack_19b8);
    uVar1 = FUN_8c0f3df8(0x8c43af1c, auStack_19b8, uVar3);
    uVar3 = 0x8c439408;
    global_list_push(uVar1, free_if_nonnull_wrap_0d76b8, 0x8c439408, a3);
    uVar1 = 0xffffffff;
    free_if_nonnull_wrap_0d76b8(auStack_19b8, 0xffffffff, uVar3, a3);
    FUN_8c0d7668(auStack_19cc);
    uVar1 = FUN_8c0f3df8(0x8c43af30, auStack_19cc, uVar3);
    uVar3 = 0x8c439414;
    global_list_push(uVar1, free_if_nonnull_wrap_0d76b8, 0x8c439414, a3);
    uVar1 = 0xffffffff;
    free_if_nonnull_wrap_0d76b8(auStack_19cc, 0xffffffff, uVar3, a3);
    FUN_8c0d7668(auStack_19e0);
    uVar1 = FUN_8c0f3df8(0x8c43af44, auStack_19e0, uVar3);
    uVar3 = 0x8c439420;
    global_list_push(uVar1, free_if_nonnull_wrap_0d76b8, 0x8c439420, a3);
    uVar1 = 0xffffffff;
    free_if_nonnull_wrap_0d76b8(auStack_19e0, 0xffffffff, uVar3, a3);
    FUN_8c0d7668(auStack_19f4);
    uVar1 = FUN_8c0f3df8(0x8c43af58, auStack_19f4, uVar3);
    uVar3 = 0x8c43942c;
    global_list_push(uVar1, free_if_nonnull_wrap_0d76b8, 0x8c43942c, a3);
    uVar1 = 0xffffffff;
    free_if_nonnull_wrap_0d76b8(auStack_19f4, 0xffffffff, uVar3, a3);
    FUN_8c0d7668(auStack_1a08);
    uVar1 = FUN_8c0f3df8(0x8c43af6c, auStack_1a08, uVar3);
    uVar3 = 0x8c439438;
    global_list_push(uVar1, free_if_nonnull_wrap_0d76b8, 0x8c439438, a3);
    uVar1 = 0xffffffff;
    free_if_nonnull_wrap_0d76b8(auStack_1a08, 0xffffffff, uVar3, a3);
    FUN_8c0d7668(auStack_1a1c);
    uVar1 = FUN_8c0f3df8(0x8c43af80, auStack_1a1c, uVar3);
    uVar3 = 0x8c439444;
    global_list_push(uVar1, free_if_nonnull_wrap_0d76b8, 0x8c439444, a3);
    uVar1 = 0xffffffff;
    free_if_nonnull_wrap_0d76b8(auStack_1a1c, 0xffffffff, uVar3, a3);
    FUN_8c0d7668(auStack_1a30);
    uVar1 = FUN_8c0f3df8(0x8c43af94, auStack_1a30, uVar3);
    uVar3 = 0x8c439450;
    global_list_push(uVar1, free_if_nonnull_wrap_0d76b8, 0x8c439450, a3);
    uVar1 = 0xffffffff;
    free_if_nonnull_wrap_0d76b8(auStack_1a30, 0xffffffff, uVar3, a3);
    FUN_8c0d7668(auStack_1a44);
    uVar1 = FUN_8c0f3df8(0x8c43afa8, auStack_1a44, uVar3);
    uVar3 = 0x8c43945c;
    global_list_push(uVar1, free_if_nonnull_wrap_0d76b8, 0x8c43945c, a3);
    uVar1 = 0xffffffff;
    free_if_nonnull_wrap_0d76b8(auStack_1a44, 0xffffffff, uVar3, a3);
    FUN_8c0d7668(auStack_1a58);
    uVar1 = FUN_8c0f3df8(0x8c43afbc, auStack_1a58, uVar3);
    uVar3 = 0x8c439468;
    global_list_push(uVar1, free_if_nonnull_wrap_0d76b8, 0x8c439468, a3);
    uVar1 = 0xffffffff;
    free_if_nonnull_wrap_0d76b8(auStack_1a58, 0xffffffff, uVar3, a3);
    FUN_8c0d7668(auStack_1a6c);
    uVar1 = FUN_8c0f3df8(0x8c43afd0, auStack_1a6c, uVar3);
    uVar3 = 0x8c439474;
    global_list_push(uVar1, free_if_nonnull_wrap_0d76b8, 0x8c439474, a3);
    uVar1 = 0xffffffff;
    free_if_nonnull_wrap_0d76b8(auStack_1a6c, 0xffffffff, uVar3, a3);
    FUN_8c0d7668(auStack_1a80);
    uVar1 = FUN_8c0f3df8(0x8c43afe4, auStack_1a80, uVar3);
    uVar3 = 0x8c439480;
    global_list_push(uVar1, free_if_nonnull_wrap_0d76b8, 0x8c439480, a3);
    uVar1 = 0xffffffff;
    free_if_nonnull_wrap_0d76b8(auStack_1a80, 0xffffffff, uVar3, a3);
    FUN_8c0d7668(auStack_1a94);
    uVar1 = FUN_8c0f3df8(0x8c43aff8, auStack_1a94, uVar3);
    uVar3 = 0x8c43948c;
    global_list_push(uVar1, free_if_nonnull_wrap_0d76b8, 0x8c43948c, a3);
    uVar1 = 0xffffffff;
    free_if_nonnull_wrap_0d76b8(auStack_1a94, 0xffffffff, uVar3, a3);
    FUN_8c0d7668(auStack_1aa8);
    uVar1 = FUN_8c0f3df8(0x8c43b00c, auStack_1aa8, uVar3);
    uVar3 = 0x8c439498;
    global_list_push(uVar1, free_if_nonnull_wrap_0d76b8, 0x8c439498, a3);
    uVar1 = 0xffffffff;
    free_if_nonnull_wrap_0d76b8(auStack_1aa8, 0xffffffff, uVar3, a3);
    FUN_8c0d7668(auStack_1abc);
    uVar1 = FUN_8c0f3df8(0x8c43b020, auStack_1abc, uVar3);
    uVar3 = 0x8c4394a4;
    global_list_push(uVar1, free_if_nonnull_wrap_0d76b8, 0x8c4394a4, a3);
    uVar1 = 0xffffffff;
    free_if_nonnull_wrap_0d76b8(auStack_1abc, 0xffffffff, uVar3, a3);
    pcVar2 = FUN_8c0d7668;
    FUN_8c0d7668(auStack_1ad0);
    uVar1 = FUN_8c0f3df8(0x8c43b034, auStack_1ad0, pcVar2);
    uVar3 = 0x8c4394b0;
    global_list_push(uVar1, free_if_nonnull_wrap_0d76b8, 0x8c4394b0, a3);
    uVar1 = 0xffffffff;
    free_if_nonnull_wrap_0d76b8(auStack_1ad0, 0xffffffff, uVar3, a3);
    FUN_8c0d7668(auStack_1ae4);
    uVar1 = FUN_8c0f3df8(0x8c43b048, auStack_1ae4, uVar3);
    global_list_push(uVar1, free_if_nonnull_wrap_0d76b8, 0x8c4394bc, a3);
    uVar3 = 0xffffffff;
    uVar1 = 0xffffffff;
    free_if_nonnull_wrap_0d76b8(auStack_1ae4, 0xffffffff, 0xffffffff, a3);
    FUN_8c0d7668(auStack_1af8);
    uVar1 = FUN_8c0f3df8(0x8c43b05c, auStack_1af8, uVar3);
    uVar3 = 0x8c4394c8;
    global_list_push(uVar1, free_if_nonnull_wrap_0d76b8, 0x8c4394c8, a3);
    uVar1 = 0xffffffff;
    free_if_nonnull_wrap_0d76b8(auStack_1af8, 0xffffffff, uVar3, a3);
    FUN_8c0d7668(auStack_1b0c);
    uVar1 = FUN_8c0f3df8(0x8c43b070, auStack_1b0c, uVar3);
    global_list_push(uVar1, free_if_nonnull_wrap_0d76b8, 0x8c4394d4, a3);
    uVar3 = 0xffffffff;
    uVar1 = 0xffffffff;
    free_if_nonnull_wrap_0d76b8(auStack_1b0c, 0xffffffff, 0xffffffff, a3);
    FUN_8c0d7668(auStack_1b20);
    uVar1 = FUN_8c0f3df8(0x8c43b084, auStack_1b20, uVar3);
    uVar3 = 0x8c4394e0;
    global_list_push(uVar1, free_if_nonnull_wrap_0d76b8, 0x8c4394e0, a3);
    uVar1 = 0xffffffff;
    free_if_nonnull_wrap_0d76b8(auStack_1b20, 0xffffffff, uVar3, a3);
    FUN_8c0d7668(auStack_1b34);
    uVar1 = FUN_8c0f3df8(0x8c43b098, auStack_1b34, uVar3);
    uVar3 = 0x8c4394ec;
    global_list_push(uVar1, free_if_nonnull_wrap_0d76b8, 0x8c4394ec, a3);
    uVar1 = 0xffffffff;
    free_if_nonnull_wrap_0d76b8(auStack_1b34, 0xffffffff, uVar3, a3);
    FUN_8c0d7668(auStack_1b48);
    uVar1 = FUN_8c0f3df8(0x8c43b0ac, auStack_1b48, uVar3);
    uVar3 = 0x8c4394f8;
    global_list_push(uVar1, free_if_nonnull_wrap_0d76b8, 0x8c4394f8, a3);
    uVar1 = 0xffffffff;
    free_if_nonnull_wrap_0d76b8(auStack_1b48, 0xffffffff, uVar3, a3);
    FUN_8c0d7668(auStack_1b5c);
    uVar1 = FUN_8c0f3df8(0x8c43b0c0, auStack_1b5c, uVar3);
    uVar3 = 0x8c439504;
    global_list_push(uVar1, free_if_nonnull_wrap_0d76b8, 0x8c439504, a3);
    uVar1 = 0xffffffff;
    free_if_nonnull_wrap_0d76b8(auStack_1b5c, 0xffffffff, uVar3, a3);
    FUN_8c0d7668(auStack_1b70);
    uVar1 = FUN_8c0f3df8(0x8c43b0d4, auStack_1b70, uVar3);
    uVar3 = 0x8c439510;
    global_list_push(uVar1, free_if_nonnull_wrap_0d76b8, 0x8c439510, a3);
    uVar1 = 0xffffffff;
    free_if_nonnull_wrap_0d76b8(auStack_1b70, 0xffffffff, uVar3, a3);
    FUN_8c0d7668(auStack_1b84);
    uVar1 = FUN_8c0f3df8(0x8c43b0e8, auStack_1b84, uVar3);
    uVar3 = 0x8c43951c;
    global_list_push(uVar1, free_if_nonnull_wrap_0d76b8, 0x8c43951c, a3);
    uVar1 = 0xffffffff;
    free_if_nonnull_wrap_0d76b8(auStack_1b84, 0xffffffff, uVar3, a3);
    FUN_8c0d7668(auStack_1b98);
    uVar1 = FUN_8c0f3df8(0x8c43b0fc, auStack_1b98, uVar3);
    uVar3 = 0x8c439528;
    global_list_push(uVar1, free_if_nonnull_wrap_0d76b8, 0x8c439528, a3);
    uVar1 = 0xffffffff;
    free_if_nonnull_wrap_0d76b8(auStack_1b98, 0xffffffff, uVar3, a3);
    FUN_8c0d7668(auStack_1bac);
    uVar1 = FUN_8c0f3df8(0x8c43b110, auStack_1bac, uVar3);
    uVar3 = 0x8c439534;
    global_list_push(uVar1, free_if_nonnull_wrap_0d76b8, 0x8c439534, a3);
    uVar1 = 0xffffffff;
    free_if_nonnull_wrap_0d76b8(auStack_1bac, 0xffffffff, uVar3, a3);
    FUN_8c0d7668(auStack_1bc0);
    uVar1 = FUN_8c0f3df8(0x8c43b124, auStack_1bc0, uVar3);
    uVar3 = 0x8c439540;
    global_list_push(uVar1, free_if_nonnull_wrap_0d76b8, 0x8c439540, a3);
    uVar1 = 0xffffffff;
    free_if_nonnull_wrap_0d76b8(auStack_1bc0, 0xffffffff, uVar3, a3);
    FUN_8c0d7668(auStack_1bd4);
    uVar1 = FUN_8c0f3df8(0x8c43b138, auStack_1bd4, uVar3);
    uVar3 = 0x8c43954c;
    global_list_push(uVar1, free_if_nonnull_wrap_0d76b8, 0x8c43954c, a3);
    uVar1 = 0xffffffff;
    free_if_nonnull_wrap_0d76b8(auStack_1bd4, 0xffffffff, uVar3, a3);
    FUN_8c0d7668(auStack_1be8);
    uVar1 = FUN_8c0f3df8(0x8c43b14c, auStack_1be8, uVar3);
    uVar3 = 0x8c439558;
    global_list_push(uVar1, free_if_nonnull_wrap_0d76b8, 0x8c439558, a3);
    free_if_nonnull_wrap_0d76b8(auStack_1be8, 0xffffffff, uVar3, a3);
    FUN_8c0d7668(auStack_1bfc);
    uVar1 = FUN_8c0f3df8(0x8c43b160, auStack_1bfc, uVar3);
    uVar3 = 0x8c439564;
    global_list_push(uVar1, free_if_nonnull_wrap_0d76b8, 0x8c439564, a3);
    free_if_nonnull_wrap_0d76b8(auStack_1bfc, 0xffffffff, uVar3, a3);
    FUN_8c0d7668(auStack_1c10);
    uVar1 = FUN_8c0f3df8(0x8c43b174, auStack_1c10, 0x1bf8);
    uVar3 = 0x8c439570;
    global_list_push(uVar1, free_if_nonnull_wrap_0d76b8, 0x8c439570, a3);
    uVar1 = free_if_nonnull_wrap_0d76b8(auStack_1c10, 0xffffffff, uVar3, a3);
    return uVar1;
}
