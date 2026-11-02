/* Seaman (USA) region 0x8c020000-0x8c030000 (Ghidra decompiler, cleaned up by tools/readable.py) */

#include "seaman.h"
#include "globals.h"

/*
 * FUN_8c02000c  0x8c02000c
 * called by: FUN_8c01ffa0, FUN_8c02077c
 */
u32 *FUN_8c02000c(u32 unused_a0, u32 a1, u32 a2, u32 a3, u32 s0, u32 s4) {
    u32 *puVar1;
    int iVar2;
    puVar1 = (u32 *)malloc_thunk(0xd8, a1, a2, a3);
    if (puVar1 == NULL) {
        puVar1 = NULL;
    } else {
        *puVar1 = a1;
        puVar1[1] = 0;
        puVar1[2] = 0;
        puVar1[3] = 0;
        strcpy(puVar1 + 4, a2);
        strcpy(puVar1 + 0xc, a3);
        puVar1[0x14] = s0;
        puVar1[0x15] = s4;
        for (iVar2 = 0; iVar2 < 0x20; iVar2 = iVar2 + 1) {
            puVar1[iVar2 + 0x16] = 0;
        }
    }
    return puVar1;
}

/*
 * FUN_8c02009c  0x8c02009c
 * called by: FUN_8c01f794, FUN_8c01f8a4, FUN_8c01f9c4, FUN_8c01fab4
 */
int FUN_8c02009c(u32 *a0, u32 unused_a1, u32 a2, u32 a3) {
    int iVar1;
    int *ar5_00;

    a0[1] = 0;
    *a0 = 0;
    iVar1 = 0;
    if (a0[8] != 0) {
        for (ar5_00 = (int *)a0[8]; ar5_00[1] != 0; ar5_00 = (int *)ar5_00[1]) {
        }
        iVar1 = FUN_8c020148(a0, ar5_00 + 0xc, a2, a3);
        if (iVar1 == 0) {
            iVar1 = FUN_8c02049c(a0, ar5_00, a2, a3);
        } else {
            iVar1 = *ar5_00;
            if (iVar1 == 0xb) {
                iVar1 = FUN_8c02041c(a0, ar5_00, a2, a3);
            } else if (((iVar1 == 0xc) || (iVar1 == 0xd)) || (iVar1 == 0xe)) {
                iVar1 = 1;
            } else {
                iVar1 = FUN_8c0202c0(a0, ar5_00, a2, a3);
            }
            if (iVar1 == 1) {
                a0[1] = ar5_00;
            }
        }
    }
    return iVar1;
}

/*
 * FUN_8c020148  0x8c020148
 * called by: FUN_8c02009c
 */
u32 FUN_8c020148(int a0, char *a1, u32 a2, u32 a3) {
    int iVar1;
    int iVar2;
    int iVar3;
    char acStack_3c[36];

    if (*a1 != '\0') {
        acStack_3c[0] = '\0';
        iVar3 = 0;
        iVar2 = 0;
        for (iVar1 = 0; iVar1 < 0x40; iVar1 = iVar1 + 1) {
            if ((a1[iVar3] == '\\') || (a1[iVar3] == '\0')) {
                acStack_3c[iVar2] = '\0';
                iVar1 = 0;
                while (true) {
                    if ((2 < iVar1) || (*(char *)(a0 + iVar1 * 0x16034 + 0x38) == '\0')) {
                        return 0;
                    }
                    iVar3 = a0 + iVar1 * 0x16034 + 0x38;
                    iVar2 = FUN_8c020258(acStack_3c, iVar3);
                    if ((iVar2 == 0) &&
                        (iVar2 = (*(code *)(&FUN_8c1f3952))(*(u32 *)(a0 + iVar1 * 0x16034 + 0x58), iVar3, a2, a3),
                         iVar2 == 0))
                        break;
                    iVar1 = iVar1 + 1;
                }
                return 1;
            }
            acStack_3c[iVar2] = a1[iVar3];
            iVar2 = iVar2 + 1;
            iVar3 = iVar3 + 1;
        }
    }
    iVar1 = FUN_8c1f3952(*(u32 *)(a0 + 0x58), a1, a2, a3);
    return (u32)(iVar1 == 0);
}

/*
 * FUN_8c020258  0x8c020258
 * called by: FUN_8c020148, FUN_8c020588
 */
u32 FUN_8c020258(u8 *a0, u8 *a1) {
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
 * FUN_8c0202c0  0x8c0202c0
 * called by: FUN_8c02009c
 * decompiler: Switch with 1 destination removed at 0x8c020362
 */
u32 FUN_8c0202c0(int *a0, int *a1, u32 a2, u32 a3) {
    int iVar1;
    u32 uVar2;
    int iVar3;
    u8 auStack_30[36];

    a1[2] = 0;
    *a0 = 0;
    strcpy(auStack_30, a1 + 4);
    iVar3 = 0;
    iVar1 = FUN_8c26201c(auStack_30, 0);
    *a0 = iVar1;
    if (*a0 == 0) {
        FUN_8c02049c(a0, a1, a2, a3);
        uVar2 = 0;
    } else {
        iVar1 = ADXF_GetFsizeByte(*a0, iVar3, a2);
        a1[3] = iVar1;
        iVar1 = a1[3] + 0x7ff >> 0xb;
        if (a1[0x15] != 0) {
            iVar1 = a1[0x15];
            a1[3] = iVar1 << 0xb;
            a2 = 0;
            iVar3 = a1[0x14];
            ADXF_Seek(*a0, iVar3, 0);
        }
        if ((*a1 < 0xb) && (-1 < *a1)) {
            a1[2] = a0[4];
        } else {
            iVar3 = malloc_thunk(a1[3] + 0x800, iVar3, a2, a3);
            a1[2] = iVar3;
            if (a1[2] == 0) {
                FUN_8c02049c(a0, a1, a2, a3);
                return 0;
            }
        }
        iVar3 = a1[2];
        iVar1 = FUN_8c262312(*a0, iVar1, iVar3);
        if (iVar1 < 0) {
            FUN_8c02049c(a0, a1, iVar3, a3);
            uVar2 = 0;
        } else {
            uVar2 = 1;
        }
    }
    return uVar2;
}

/*
 * FUN_8c02041c  0x8c02041c
 * called by: FUN_8c02009c
 */
u32 FUN_8c02041c(int *a0, int a1, u32 a2, u32 a3) {
    int iVar1;
    int iVar2;
    int iVar3;

    *(u32 *)(a1 + 8) = 0;
    a0[5] = 0;
    iVar2 = a1;
    for (iVar3 = 0; iVar3 < 2; iVar3 = iVar3 + 1) {
        iVar2 = 0;
        iVar1 = FUN_8c26201c(a1 + 0x10, 0);
        *a0 = iVar1;
        if (*a0 != 0)
            break;
    }
    iVar3 = *a0;
    if (iVar3 != 0) {
        a0[5] = 1;
        iVar2 = ADXF_GetFsizeByte(*a0, iVar2, a2);
        a0[6] = iVar2;
    } else {
        FUN_8c02049c(a0, a1, a2, a3);
    }
    return (u32)(iVar3 != 0);
}

/*
 * FUN_8c02049c  0x8c02049c
 * called by: FUN_8c01f8a4, FUN_8c01f9c4, FUN_8c01fab4, FUN_8c02009c, FUN_8c0202c0, FUN_8c02041c
 */
u32 FUN_8c02049c(int *a0, int *a1, u32 a2, u32 a3) {
    int iVar1;
    u32 uVar2;
    int *piVar3;

    iVar1 = *a1;
    if (((iVar1 != 0xc) && (iVar1 != 0xd)) && (iVar1 != 0xe)) {
        piVar3 = a1;
        if (*a0 != 0) {
            FUN_8c262168(*a0);
        }
        if (a1[2] != 0) {
            FUN_8c1fb57c(a1[2], piVar3, a2, a3);
        }
    }
    *a0 = 0;
    a1[2] = 0;
    piVar3 = a1 + 4;
    FUN_8c020600(a0, *a1, a0 + 8, piVar3);
    uVar2 = list_push_front(a0, a0 + 9, a1);
    return uVar2;
}

/*
 * FUN_8c02051c  0x8c02051c
 * called by: FUN_8c01fec4, FUN_8c02077c, FUN_8c0208ec
 */
int FUN_8c02051c(u32 unused_a0, u32 a1, int a2, u32 a3) {
    int ar6_00;
    int iVar1;
    u32 in_stack_00000000;

    if (a2 == 0) {
        ar6_00 = 0;
    } else {
        do {
            ar6_00 = a2;
            if (ar6_00 == 0) {
                return 0;
            }
            a2 = *(int *)(ar6_00 + 4);
            iVar1 = FUN_8c020588(unused_a0, a1, ar6_00, a3, in_stack_00000000);
        } while (iVar1 != 1);
    }
    return ar6_00;
}

/*
 * FUN_8c020588  0x8c020588
 * called by: FUN_8c02051c, FUN_8c020600
 */
u32 FUN_8c020588(u32 unused_a0, int a1, int *a2, u32 a3, u32 s0) {
    u32 uVar1;
    int iVar2;

    if (*a2 == a1) {
        iVar2 = FUN_8c020258(a2 + 4, a3);
        if (iVar2 == 0) {
            iVar2 = FUN_8c020258(a2 + 0xc, s0);
            if (iVar2 == 0) {
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
    return uVar1;
}

/*
 * list_push_front  0x8c0205e8
 * links node a2 in front of the list head *a1
 * called by: FUN_8c01f8a4, FUN_8c01f9c4, FUN_8c01fab4, FUN_8c01fec4, FUN_8c01ffa0, FUN_8c02049c, FUN_8c02077c
 */
u32 list_push_front(u32 unused_a0, int *a1, int a2) {
    int iVar1;

    if (*a1 == 0) {
        *a1 = a2;
        return 0;
    }
    iVar1 = *a1;
    *(int *)(a2 + 4) = iVar1;
    *a1 = a2;
    return iVar1;
}

/*
 * FUN_8c020600  0x8c020600
 * called by: FUN_8c01f8a4, FUN_8c01f9c4, FUN_8c01fab4, FUN_8c02049c, FUN_8c0208ec
 */
int FUN_8c020600(u32 unused_a0, u32 a1, int *a2, u32 a3) {
    int ar6_00;
    int iVar1;
    int iVar2;
    int iVar3;
    u32 in_stack_00000000;

    ar6_00 = *a2;
    if (ar6_00 == 0) {
        ar6_00 = 0;
    } else {
        iVar1 = FUN_8c020588(unused_a0, a1, ar6_00, a3, in_stack_00000000);
        if (iVar1 == 1) {
            *a2 = *(int *)(ar6_00 + 4);
        } else if (*(int *)(ar6_00 + 4) == 0) {
            ar6_00 = 0;
        } else {
            iVar3 = *(int *)(*(int *)(ar6_00 + 4) + 4);
            iVar1 = ar6_00;
            ar6_00 = *(int *)(ar6_00 + 4);
            while (iVar2 = FUN_8c020588(unused_a0, a1, ar6_00, a3, in_stack_00000000), iVar2 != 1) {
                if (iVar3 == 0) {
                    return 0;
                }
                iVar3 = *(int *)(*(int *)(ar6_00 + 4) + 4);
                iVar1 = ar6_00;
                ar6_00 = *(int *)(ar6_00 + 4);
            }
            *(int *)(iVar1 + 4) = iVar3;
        }
    }
    return ar6_00;
}

/*
 * FUN_8c0206b8  0x8c0206b8
 * called by: FUN_8c01ffa0, FUN_8c02077c
 */
u32 FUN_8c0206b8(u32 unused_a0, int a1, int a2) {
    int iVar1;
    int iVar2;

    for (iVar2 = 0; iVar2 < 0x20; iVar2 = iVar2 + 1) {
        iVar1 = *(int *)(a1 + iVar2 * 4 + 0x58);
        if (iVar1 == a2) {
            return iVar1;
        }
    }
    iVar2 = 0;
    while (true) {
        if (0x1f < iVar2) {
            return 0x20;
        }
        if (*(int *)(a1 + iVar2 * 4 + 0x58) == 0)
            break;
        iVar2 = iVar2 + 1;
    }
    *(int *)(a1 + iVar2 * 4 + 0x58) = a2;
    return 0x58;
}

/*
 * FUN_8c020714  0x8c020714
 * called by: FUN_8c0208ec
 */
u32 FUN_8c020714(u32 unused_a0, int a1, int a2) {
    int iVar1;

    iVar1 = 0;
    do {
        if (0x1f < iVar1) {
        LAB_8c02074c:
            iVar1 = 0;
            while (true) {
                if (0x1f < iVar1) {
                    return 0;
                }
                if (*(int *)(a1 + iVar1 * 4 + 0x58) != 0)
                    break;
                iVar1 = iVar1 + 1;
            }
            return 1;
        }
        if (*(int *)(a1 + iVar1 * 4 + 0x58) == a2) {
            *(u32 *)(a1 + iVar1 * 4 + 0x58) = 0;
            goto LAB_8c02074c;
        }
        iVar1 = iVar1 + 1;
    } while (true);
}

/*
 * FUN_8c02077c  0x8c02077c
 * called by: CDCGD_ReadPVMFileReq
 */
u32 FUN_8c02077c(int a0, int a1, u32 a2, u32 a3, u32 s0, u32 *s4, u32 *s8, u32 s12, u32 s16, u32 s20) {
    int iVar1;
    u32 uVar2;

    uVar2 = a3;
    iVar1 = FUN_8c02051c(a0, a1, *(u32 *)(a0 + 0x20), a3);
    if (iVar1 == 0) {
        iVar1 = FUN_8c02051c(a0, a1, *(u32 *)(a0 + 0x24), a3);
        if (iVar1 == 0) {
            uVar2 = a3;
            iVar1 = FUN_8c02051c(a0, a1, a2, a3);
            if (iVar1 == 0) {
                if (((a1 == 0xc) || (a1 == 0xd)) || (a1 == 0xe)) {
                    iVar1 = FUN_8c02000c(a0, a1, a3, s0, 0, 0);
                    if (iVar1 == 0) {
                        return 0;
                    }
                    *(u32 *)(iVar1 + 8) = *s4;
                    list_push_front(a0, a0 + 0x20, iVar1);
                } else {
                    iVar1 = FUN_8c01ffa0(a0, a1, a3, s0, s12, s16, s20);
                    if (iVar1 == 0) {
                        return 0;
                    }
                }
                uVar2 = 2;
            } else {
                FUN_8c0206b8(a0, iVar1, s20);
                *s4 = *(u32 *)(iVar1 + 8);
                *s8 = *(u32 *)(iVar1 + 0xc);
                uVar2 = 1;
            }
        } else {
            FUN_8c0208ec(a0, a1, a0 + 0x24, a3, s0, s20);
            uVar2 = 0;
        }
    } else {
        FUN_8c0206b8(a0, iVar1, s20);
        uVar2 = 2;
    }
    return uVar2;
}

/*
 * FUN_8c0208ec  0x8c0208ec
 * called by: FUN_8c02077c, FUN_8c020a70, FUN_8c020b68, FUN_8c020c60, FUN_8c020d58, FUN_8c020e48, FUN_8c020f5c,
 * FUN_8c020f90 (+4 more)
 */
u32 FUN_8c0208ec(u32 unused_a0, int a1, u32 *a2, u32 a3, u32 s0, u32 s4) {
    int iVar1;
    u32 uVar2;
    iVar1 = FUN_8c02051c(unused_a0, a1, *a2, a3);
    uVar2 = 0;
    if (iVar1 != 0) {
        if (((a1 == 0xc) || (a1 == 0xd)) || (a1 == 0xe)) {
            FUN_8c020600(unused_a0, a1, a2, a3);
        } else {
            iVar1 = FUN_8c020714(unused_a0, iVar1, s4);
            if (iVar1 == 1) {
                return 1;
            }
            iVar1 = FUN_8c020600(unused_a0, a1, a2, a3);
            if (*(int *)(iVar1 + 8) != 0) {
                FUN_8c1fb57c(*(u32 *)(iVar1 + 8), a1, a2, a3);
            }
        }
        uVar2 = FUN_8c1fb57c(iVar1, a1, a2, a3);
    }
    return uVar2;
}

/*
 * FUN_8c0209b0  0x8c0209b0
 * called by: FUN_8c0209fc, FUN_8c027a78, FUN_8c08c9dc, FUN_8c0ca2cc
 */
u32 FUN_8c0209b0(int a0, u32 a1, u32 a2, u32 a3) {
    u32 uVar1;
    u32 in_stack_00000000;

    uVar1 = (*(code *)(&FUN_8c02077c))(a0, 0, *(u32 *)(a0 + 0x28), a1, a2, a3, a0 + 8, 0, 0, in_stack_00000000);
    return uVar1;
}

/*
 * FUN_8c0209fc  0x8c0209fc
 * called by: CAnimal_LoadGRWait, CSoilTank_Create, CWaterTank_CreateStage, FUN_8c06ce04, FUN_8c0cfff8, FUN_8c0d33e8,
 * FUN_8c0d5218, FUN_8c0d93a8 (+3 more)
 */
u32 FUN_8c0209fc(u32 a0, u32 a1, u32 a2, u32 a3) {
    int iVar1;
    u32 ar5_00;
    u32 ar6_00;
    u32 ar7_00;

    while (true) {
        ar5_00 = a1;
        ar6_00 = a2;
        ar7_00 = a3;
        iVar1 = FUN_8c0209b0(a0, a1, a2, a3);
        if (iVar1 == 1) {
            return 1;
        }
        if (iVar1 == 0)
            break;
        iVar1 = FUN_8c01f810(a0, ar5_00, ar6_00, ar7_00);
        if (iVar1 == 0) {
            return 0;
        }
    }
    return 0;
}

/*
 * FUN_8c020a70  0x8c020a70
 * called by: FUN_8c0d5218, FUN_8c0d57e8
 */
u32 FUN_8c020a70(int a0, u32 a1, u32 a2, u32 a3) {
    u32 uVar1;

    uVar1 = FUN_8c0208ec(a0, 0, a0 + 0x28, a1, a2, a3);
    return uVar1;
}

/*
 * FUN_8c020aa8  0x8c020aa8
 * called by: FUN_8c020af4, FUN_8c027a78, FUN_8c08c9dc, FUN_8c0ca2cc
 */
u32 FUN_8c020aa8(int a0, u32 a1, u32 a2, u32 a3) {
    u32 uVar1;
    u32 in_stack_00000000;

    uVar1 = (*(code *)(&FUN_8c02077c))(a0, 2, *(u32 *)(a0 + 0x28), a1, a2, a3, a0 + 8, 0, 0, in_stack_00000000);
    return uVar1;
}

/*
 * FUN_8c020af4  0x8c020af4
 * called by: CAnimal_LoadGResourceWait, CSoilTank_Create, CWaterTank_CreateStage, FUN_8c06ce04, FUN_8c0cfff8,
 * FUN_8c0d33e8, FUN_8c0d5218, FUN_8c0d93a8 (+3 more)
 */
u32 FUN_8c020af4(u32 a0, u32 a1, u32 a2, u32 a3) {
    int iVar1;
    u32 ar5_00;
    u32 ar6_00;
    u32 ar7_00;

    while (true) {
        ar5_00 = a1;
        ar6_00 = a2;
        ar7_00 = a3;
        iVar1 = FUN_8c020aa8(a0, a1, a2, a3);
        if (iVar1 == 1) {
            return 1;
        }
        if (iVar1 == 0)
            break;
        iVar1 = FUN_8c01f810(a0, ar5_00, ar6_00, ar7_00);
        if (iVar1 == 0) {
            return 0;
        }
    }
    return 0;
}

/*
 * FUN_8c020b68  0x8c020b68
 * called by: FUN_8c0ae640, FUN_8c0ca0e0, FUN_8c0ca22c, FUN_8c0d5218, FUN_8c0d57e8, FUN_8c0e5bb4
 */
u32 FUN_8c020b68(int a0, u32 a1, u32 a2, u32 a3) {
    u32 uVar1;

    uVar1 = FUN_8c0208ec(a0, 2, a0 + 0x28, a1, a2, a3);
    return uVar1;
}

/*
 * FUN_8c020ba0  0x8c020ba0
 * called by: FUN_8c020bec, FUN_8c027a78, FUN_8c028390, FUN_8c08c9dc
 */
u32 FUN_8c020ba0(int a0, u32 a1, u32 a2, u32 a3) {
    u32 uVar1;
    u32 in_stack_00000000;

    uVar1 = (*(code *)(&FUN_8c02077c))(a0, 5, *(u32 *)(a0 + 0x28), a1, a2, a3, a0 + 8, 0, 0, in_stack_00000000);
    return uVar1;
}

/*
 * FUN_8c020bec  0x8c020bec
 * called by: CAnimal_LoadGRWait, FUN_8c06ce04, FUN_8c0d93a8
 */
u32 FUN_8c020bec(u32 a0, u32 a1, u32 a2, u32 a3) {
    int iVar1;
    u32 ar5_00;
    u32 ar6_00;
    u32 ar7_00;

    while (true) {
        ar5_00 = a1;
        ar6_00 = a2;
        ar7_00 = a3;
        iVar1 = FUN_8c020ba0(a0, a1, a2, a3);
        if (iVar1 == 1) {
            return 1;
        }
        if (iVar1 == 0)
            break;
        iVar1 = FUN_8c01f810(a0, ar5_00, ar6_00, ar7_00);
        if (iVar1 == 0) {
            return 0;
        }
    }
    return 0;
}

/*
 * FUN_8c020c60  0x8c020c60
 * called by: FUN_8c06d474
 */
u32 FUN_8c020c60(int a0, u32 a1, u32 unused_a2, u32 a3) {
    u32 uVar1;

    uVar1 = FUN_8c0208ec(a0, 5, a0 + 0x28, a1, unused_a2, a3);
    return uVar1;
}

/*
 * FUN_8c020c98  0x8c020c98
 * called by: FUN_8c020ce4, FUN_8c028390
 */
u32 FUN_8c020c98(int a0, u32 a1, u32 a2, u32 a3) {
    u32 uVar1;
    u32 in_stack_00000000;

    uVar1 = (*(code *)(&FUN_8c02077c))(a0, 8, *(u32 *)(a0 + 0x28), a1, a2, a3, a0 + 8, 0, 0, in_stack_00000000);
    return uVar1;
}

/*
 * FUN_8c020ce4  0x8c020ce4
 * called by: CAnimal_LoadGRWait, FUN_8c06ce04
 */
u32 FUN_8c020ce4(u32 a0, u32 a1, u32 a2, u32 a3) {
    int iVar1;
    u32 ar5_00;
    u32 ar6_00;
    u32 ar7_00;

    while (true) {
        ar5_00 = a1;
        ar6_00 = a2;
        ar7_00 = a3;
        iVar1 = FUN_8c020c98(a0, a1, a2, a3);
        if (iVar1 == 1) {
            return 1;
        }
        if (iVar1 == 0)
            break;
        iVar1 = FUN_8c01f810(a0, ar5_00, ar6_00, ar7_00);
        if (iVar1 == 0) {
            return 0;
        }
    }
    return 0;
}

/*
 * FUN_8c020d58  0x8c020d58
 * called by: CMothLine_FreeGraphicResource, FUN_8c06d474
 */
u32 FUN_8c020d58(int a0, u32 a1, u32 unused_a2, u32 a3) {
    u32 uVar1;

    uVar1 = FUN_8c0208ec(a0, 8, a0 + 0x28, a1, unused_a2, a3);
    return uVar1;
}

/*
 * FUN_8c020d90  0x8c020d90
 * called by: FUN_8c020ddc, FUN_8c027a78, FUN_8c08c9dc
 */
u32 FUN_8c020d90(int a0, u32 a1, u32 a2, u32 a3) {
    u32 uVar1;

    uVar1 = (*(code *)(&FUN_8c02077c))(a0, 0xb, *(u32 *)(a0 + 0x28), a1, a2, a0 + 0xc, a0 + 8, 0, 0, a3);
    return uVar1;
}

/*
 * FUN_8c020ddc  0x8c020ddc
 * called by: CAnimal_LoadGRWait, FUN_8c06ce04, FUN_8c0d93a8
 */
u32 FUN_8c020ddc(u32 a0, u32 a1, u32 a2, u32 a3) {
    int iVar1;
    u32 ar5_00;
    u32 ar6_00;
    u32 ar7_00;

    while (true) {
        ar5_00 = a1;
        ar6_00 = a2;
        ar7_00 = a3;
        iVar1 = FUN_8c020d90(a0, a1, a2, a3);
        if (iVar1 == 1) {
            return 1;
        }
        if (iVar1 == 0)
            break;
        iVar1 = FUN_8c01f810(a0, ar5_00, ar6_00, ar7_00);
        if (iVar1 == 0) {
            return 0;
        }
    }
    return 0;
}

/*
 * FUN_8c020e48  0x8c020e48
 * called by: CMothLine_FreeGraphicResource, FUN_8c06d474
 */
u32 FUN_8c020e48(int a0, u32 a1, u32 unused_a2, u32 a3) {
    u32 uVar1;

    uVar1 = FUN_8c0208ec(a0, 0xb, a0 + 0x28, a1, unused_a2, a3);
    return uVar1;
}

/*
 * FUN_8c020e80  0x8c020e80
 * called by: FUN_8c020ef0, FUN_8c027a78, FUN_8c08c9dc, FUN_8c0ca2cc
 */
int FUN_8c020e80(int a0, u32 a1, u32 a2, u32 a3) {
    int iVar1;
    u32 uStack_1c;
    uStack_1c = a3;
    iVar1 = (*(code *)(&FUN_8c02077c))(a0, 0xc, *(u32 *)(a0 + 0x2c), a1, a2, &uStack_1c, a0 + 8, 0, 0, 1);
    if (iVar1 == 1) {
        FUN_8c020f5c(a0, a1);
    }
    return iVar1;
}

/*
 * FUN_8c020ef0  0x8c020ef0
 * called by: CAnimal_LoadGResourceWait, CEnv_LoadDevicePanelTexture, CGame_Initial, CSoilTank_Create,
 * CSysMessage_LoadMessage, CWaterTank_CreateStage, FUN_8c024968, FUN_8c0cfff8 (+6 more)
 */
u32 FUN_8c020ef0(u32 a0, u32 a1, u32 a2, u32 a3) {
    int iVar1;
    u32 ar5_00;
    u32 ar6_00;
    u32 ar7_00;

    while (true) {
        ar5_00 = a1;
        ar6_00 = a2;
        ar7_00 = a3;
        iVar1 = FUN_8c020e80(a0, a1, a2, a3);
        if (iVar1 == 1) {
            return 1;
        }
        if (iVar1 == 0)
            break;
        iVar1 = FUN_8c01f810(a0, ar5_00, ar6_00, ar7_00);
        if (iVar1 == 0) {
            return 0;
        }
    }
    return 0;
}

/*
 * FUN_8c020f5c  0x8c020f5c
 * called by: FUN_8c020e80
 */
u32 FUN_8c020f5c(int a0, u32 a1) {
    u32 r6;
    u32 uVar1;

    uVar1 = FUN_8c0208ec(a0, 0xc, a0 + 0x2c, a1, r6, 1);
    return uVar1;
}

/*
 * FUN_8c020f90  0x8c020f90
 * called by: FUN_8c02100c
 */
int FUN_8c020f90(int a0, u32 a1, u32 a2, u32 a3) {
    int iVar1;
    u32 uStack_1c;

    uStack_1c = a3;
    iVar1 = (*(code *)(&FUN_8c02077c))(a0, 0xe, *(u32 *)(a0 + 0x2c), a1, a2, &uStack_1c, a0 + 8, 0, 0, 1);
    if (iVar1 == 1) {
        FUN_8c0208ec(a0, 0xe, a0 + 0x2c, a1, a2, 1);
    }
    return iVar1;
}

/*
 * FUN_8c02100c  0x8c02100c
 * called by: CAnimal_LoadGResourceWait, CGame_Init, CIncubater_Create, CSoilTank_Create, CSysMessage_LoadMessage,
 * CWaterTank_CreateStage, FUN_8c06ce04, FUN_8c0baab8 (+6 more)
 */
u32 FUN_8c02100c(u32 a0, u32 a1, u32 a2, u32 a3) {
    int iVar1;
    u32 ar5_00;
    u32 ar6_00;
    u32 ar7_00;

    while (true) {
        ar5_00 = a1;
        ar6_00 = a2;
        ar7_00 = a3;
        iVar1 = FUN_8c020f90(a0, a1, a2, a3);
        if (iVar1 == 1) {
            return 1;
        }
        if (iVar1 == 0)
            break;
        iVar1 = FUN_8c01f810(a0, ar5_00, ar6_00, ar7_00);
        if (iVar1 == 0) {
            return 0;
        }
    }
    return 0;
}

/*
 * CDCGD_ReadPVMFileReq  0x8c021078
 * called by: FUN_8c027a78, FUN_8c08c9dc
 * strings: "Failed to load pvm.."; "CDCGD::ReadPVMFileReq()"
 */
int CDCGD_ReadPVMFileReq(int a0, u32 a1, u32 a2, u32 a3, u32 s0) {
    int iVar1;
    int iVar2;
    u32 ar6_00;
    u32 ar7_00;
    u32 auStack_1c[2];

    ar6_00 = *(u32 *)(a0 + 0x34);
    ar7_00 = a1;
    iVar1 = FUN_8c02077c(a0, 0x10, ar6_00, a1, a2, auStack_1c, a0 + 8, 0, 0, s0);
    if (iVar1 == 1) {
        iVar2 = FUN_8c23a29c(auStack_1c[0], a3, ar6_00, ar7_00);
        if (iVar2 == 1) {
            FUN_8c021138(a0, a1, a2, s0);
        } else {
            FUN_8c021138(a0, a1, a2, s0);
            (*(code *)(&report_error_message))("Failed to load pvm..", "CDCGD::ReadPVMFileReq()", 1, 2);
            iVar1 = 0;
        }
    }
    return iVar1;
}

/*
 * FUN_8c021138  0x8c021138
 * called by: CDCGD_ReadPVMFileReq
 */
u32 FUN_8c021138(int a0, u32 a1, u32 unused_a2, u32 a3) {
    u32 uVar1;

    uVar1 = FUN_8c0208ec(a0, 0x10, a0 + 0x34, a1, unused_a2, a3);
    return uVar1;
}

/*
 * FUN_8c021170  0x8c021170
 * called by: file_load_to_buffer
 */
u32 FUN_8c021170(int a0, u32 a1, u32 a2, u32 a3) {
    u32 uVar1;
    u32 in_stack_00000000;
    u32 in_stack_00000004;

    uVar1 = (*(code *)(&FUN_8c02077c))(a0, 0xf, *(u32 *)(a0 + 0x30), a1, a2, a3, in_stack_00000000, 0, 0,
                                       in_stack_00000004);
    return uVar1;
}

/*
 * file_load_to_buffer  0x8c0211b8
 * called by: FUN_8c022494
 */
u32 file_load_to_buffer(u32 a0, u32 a1, u32 a2, u32 a3) {
    int iVar1;
    u32 ar5_00;
    u32 ar6_00;
    u32 ar7_00;

    while (true) {
        ar5_00 = a1;
        ar6_00 = a2;
        ar7_00 = a3;
        iVar1 = FUN_8c021170(a0, a1, a2, a3);
        if (iVar1 == 1) {
            return 1;
        }
        if (iVar1 == 0)
            break;
        iVar1 = FUN_8c01f810(a0, ar5_00, ar6_00, ar7_00);
        if (iVar1 == 0) {
            return 0;
        }
    }
    return 0;
}

/*
 * FUN_8c021234  0x8c021234
 * called by: FUN_8c01b0a8, FUN_8c022494, aica_driver_load_manatee
 */
u32 FUN_8c021234(int a0, u32 a1, u32 unused_a2, u32 a3) {
    u32 uVar1;

    uVar1 = FUN_8c0208ec(a0, 0xf, a0 + 0x30, a1, unused_a2, a3);
    return uVar1;
}

/*
 * FUN_8c02126c  0x8c02126c
 * called by: FUN_8c01da90, FUN_8c0faa94, FUN_8c0fae24, FUN_8c0fbf28, file_load_into_object_buffer
 */
u32 FUN_8c02126c(int a0, u32 a1, u32 a2, u32 a3) {
    u32 uVar1;
    u32 in_stack_00000000;
    u32 in_stack_00000004;
    u32 in_stack_00000008;

    uVar1 = (*(code *)(&FUN_8c02077c))(a0, 0x10, *(u32 *)(a0 + 0x34), a1, a2, a3, a0 + 8, in_stack_00000000,
                                       in_stack_00000004, in_stack_00000008);
    return uVar1;
}

/*
 * file_load_into_object_buffer  0x8c0212b8
 */
u32 file_load_into_object_buffer(u32 a0, u32 a1, u32 a2, u32 a3) {
    int iVar1;
    u32 ar5_00;
    u32 ar6_00;
    u32 ar7_00;

    while (true) {
        ar5_00 = a1;
        ar6_00 = a2;
        ar7_00 = a3;
        iVar1 = FUN_8c02126c(a0, a1, a2, a3);
        if (iVar1 == 1) {
            return 1;
        }
        if (iVar1 == 0)
            break;
        iVar1 = FUN_8c01f810(a0, ar5_00, ar6_00, ar7_00);
        if (iVar1 == 0) {
            return 0;
        }
    }
    return 0;
}

/*
 * FUN_8c021338  0x8c021338
 * called by: FUN_8c01da90, FUN_8c01dea4, FUN_8c0fae24, FUN_8c0faf98, FUN_8c0fbf28
 */
u32 FUN_8c021338(int a0, u32 a1, u32 a2, u32 a3) {
    u32 uVar1;

    uVar1 = FUN_8c0208ec(a0, 0x10, a0 + 0x34, a1, a2, a3);
    return uVar1;
}

/*
 * FUN_8c021370  0x8c021370
 * called by: FUN_8c0213bc
 */
u32 FUN_8c021370(int a0, u32 a1, u32 a2, u32 a3) {
    u32 uVar1;

    uVar1 = (*(code *)(&FUN_8c02077c))(a0, 0x10, *(u32 *)(a0 + 0x34), a1, a2, a3, a0 + 8, 0, 0, 1);
    return uVar1;
}

/*
 * FUN_8c0213bc  0x8c0213bc
 * called by: FUN_8c01a3e4, FUN_8c01b2a4
 */
u32 FUN_8c0213bc(u32 a0, u32 a1, u32 a2, u32 a3) {
    int iVar1;
    u32 ar5_00;
    u32 ar6_00;
    u32 ar7_00;

    while (true) {
        ar5_00 = a1;
        ar6_00 = a2;
        ar7_00 = a3;
        iVar1 = FUN_8c021370(a0, a1, a2, a3);
        if (iVar1 == 1) {
            return 1;
        }
        if (iVar1 == 0)
            break;
        iVar1 = FUN_8c01f810(a0, ar5_00, ar6_00, ar7_00);
        if (iVar1 == 0) {
            return 0;
        }
    }
    return 0;
}

/*
 * FUN_8c021428  0x8c021428
 * called by: FUN_8c01b2a4
 */
u32 FUN_8c021428(int a0, u32 a1, u32 a2) {
    u32 uVar1;

    uVar1 = FUN_8c0208ec(a0, 0x10, a0 + 0x34, a1, a2, 1);
    return uVar1;
}

/*
 * FUN_8c02145c  0x8c02145c
 * called by: FUN_8c0cff78, FUN_8c0d0b58
 */
u32 *FUN_8c02145c(u32 *a0) {
    *a0 = 0;
    a0[1] = 0xffffffff;
    a0[2] = 0;
    a0[3] = 0;
    a0[4] = 0;
    a0[5] = 0;
    return a0;
}

/*
 * pack_ctor  0x8c02147c
 * called by: FUN_8c0c4644
 */
u32 *pack_ctor(u32 *a0) {
    int iVar1;

    noop_022190(a0 + 1);
    *a0 = 0;
    *(u8 *)(0x9ec14 + (int)a0) = 0;
    *(u32 *)(0x9ec94 + (int)a0) = 0xffffffff;
    for (iVar1 = 0; iVar1 < 3; iVar1 = iVar1 + 1) {
        *(u32 *)((int)a0 + 0x9ec98 + iVar1 * 8) = 0xffffffff;
    }
    return a0;
}

/*
 * FUN_8c0214e0  0x8c0214e0
 */
int FUN_8c0214e0(int a0, u32 a1, u32 a2, u32 a3) {
    u32 ar5_00;
    u32 in_stack_fffffff4;
    u32 ain0;

    ain0 = CONCAT22((short)((u32)in_stack_fffffff4 >> 0x10), (u16)a1);
    if (a0 != 0) {
        ar5_00 = 0xffffffff;
        free_if_nonnull_wrap_022198(a0 + 4, 0xffffffff, a2, a3);
        if (0 < (short)ain0) {
            free_if_nonnull(a0);
        }
    }
    return a0;
}

/*
 * pack_open  0x8c021520
 * called by: FUN_8c0c0444
 */
u32 pack_open(u32 *a0, u32 a1, u32 a2, u32 a3, u32 s0) {
    int iVar1;
    u32 uVar2;

    *a0 = 0;
    iVar1 = FUN_8c0221c8(a0 + 1, a1, a2);
    if (iVar1 == 0) {
        uVar2 = 0;
    } else {
        iVar1 = (*(code *)(&file_load_to_buffer))(0x8c3eb334, a3, (&DATA_8c12fc50) + 0x34, (int)a0 + 0x9ec10);
        if (iVar1 == 0) {
            uVar2 = 0;
        } else {
            iVar1 = (*(code *)(&file_load_to_buffer))(0x8c3eb334, s0, (&DATA_8c12fc50) + 0x34, (int)a0 + 0x9ec0c);
            if (iVar1 == 0) {
                uVar2 = 0;
            } else {
                *a0 = 1;
                uVar2 = 1;
            }
        }
    }
    return uVar2;
}

/*
 * pack_close_and_flush  0x8c0215d4
 * called by: game_poll_exit
 */
u32 pack_close_and_flush(int *a0, u32 unused_a1, u32 a2, u32 a3) {
    int iVar1;
    u32 uVar2;

    uVar2 = 0;
    if (*a0 != 0) {
        sound_server(a0 + 1, unused_a1, a2, a3);
        iVar1 = FUN_8c01f780(0x8c3eb334);
        uVar2 = 1;
        if (iVar1 != 1) {
            if (-1 < *(int *)(0x9ec94 + (int)a0)) {
                FUN_8c0228e4(a0 + 1, *(u32 *)(0x9ec94 + (int)a0));
                FUN_8c022128(a0, 0x3e8, a2, a3);
                *(u32 *)(0x9ec94 + (int)a0) = 0xffffffff;
            }
            for (iVar1 = 0; uVar2 = 3, iVar1 < 3; iVar1 = iVar1 + 1) {
                if (-1 < *(int *)((int)a0 + 0x9ec98 + iVar1 * 8)) {
                    (*(code *)(&FUN_8c022894))(
                        a0 + 1, *(u32 *)((int)a0 + 0x9ec98 + iVar1 * 8), *(u32 *)((int)a0 + 0x9ec9c + iVar1 * 8),
                        *(int *)(0x9ec10 + (int)a0) + (*(u32 *)(*(int *)((int)a0 + 0x9ec9c + iVar1 * 8) * 0x28 +
                                                                *(int *)(0x9ec0c + (int)a0) + 0x20) &
                                                       0xfffffffe));
                    *(u32 *)((int)a0 + 0x9ec98 + iVar1 * 8) = 0xffffffff;
                }
            }
        }
    }
    return uVar2;
}

/*
 * FUN_8c021720  0x8c021720
 * called by: FUN_8c0c4e58, FUN_8c0c97bc, FUN_8c0caac0, FUN_8c0daea8, FUN_8c0e1f90, FUN_8c0e25c0, FUN_8c0e4298,
 * FUN_8c0e5238
 */
u32 FUN_8c021720(int *a0, u32 a1, u32 unused_a2, u32 a3) {
    u32 uVar1;

    uVar1 = 0;
    if (*a0 != 0) {
        uVar1 = FUN_8c02257c(a0 + 1, 0, a1, a3);
    }
    return uVar1;
}

/*
 * se_play_3d  0x8c02174c
 * plays a sound effect with volume/pan from a position
 * called by: FUN_8c0db32c, FUN_8c0f6ac4, se_play_at_object
 */
int se_play_3d(int *a0, u32 a1, u32 unused_a2, u32 a3) {
    u32 uVar1;
    int iVar2;
    u32 ar5_00;
    u32 in_fr1;
    double dVar3;
    u32 in_fr5;
    float in_fr4;
    u32 in_fr14;
    bool bVar4;
    int iVar5;
    char cVar6;
    char cVar7;
    u32 uStack_30;

    cVar7 = '\0';
    cVar6 = '\0';
    if (*a0 == 0) {
        return 0;
    }
    uVar1 = FUN_8c013adc((int)in_fr4);
    ar5_00 = 0x14d;
    iVar2 = libgcc_divide_helper_0101e4(uVar1, 0x14d);
    if ((iVar2 < 9) && (-1 < iVar2)) {
        switch (iVar2) {
        case 0:
            iVar2 = 0;
            break;
        case 1:
            iVar2 = 0x10;
            break;
        case 2:
            iVar2 = 0x20;
            break;
        case 3:
            iVar2 = 0x30;
            break;
        case 4:
            iVar2 = 0x40;
            break;
        case 5:
            iVar2 = 0x50;
            break;
        case 6:
            iVar2 = 0x60;
            break;
        case 7:
            iVar2 = 0x70;
            break;
        case 8:
            goto switchD_8c021798_caseD_8;
        }
    } else {
    switchD_8c021798_caseD_8:
        iVar2 = 0x7f;
    }
    if (cVar6 == '\0') {
        bVar4 = in_fr4 < 0.0;
    } else {
        bVar4 = (double)CONCAT44(in_fr14, in_fr4) < (double)(u64)in_fr1;
    }
    if (bVar4) {
        iVar2 = -iVar2;
    }
    if (cVar7 == '\0') {
        dVar3 = (double)CONCAT44(in_fr5, in_fr1);
    } else {
        dVar3 = (double)CONCAT44(uStack_30, in_fr5);
    }
    if (cVar6 == '\0') {
        iVar5 = (int)(float)((u64)dVar3 >> 0x20);
    } else {
        iVar5 = (int)dVar3;
    }
    uVar1 = FUN_8c013adc(iVar5);
    iVar5 = libgcc_divide_helper_0101e4(uVar1, 0x14d);
    if ((iVar5 < 9) && (-1 < iVar5)) {
        switch (iVar5) {
        case 0:
            uVar1 = 0x7f;
            break;
        case 1:
            uVar1 = 0x1e;
            break;
        case 2:
            uVar1 = 0x14;
            break;
        case 3:
            uVar1 = 7;
            break;
        case 4:
            uVar1 = 0;
            break;
        case 5:
            uVar1 = 0xfffffff9;
            break;
        case 6:
            uVar1 = 0xfffffff4;
            break;
        case 7:
            uVar1 = 0xffffffe7;
            break;
        case 8:
            uVar1 = 0xffffffe2;
        }
    } else {
        uVar1 = 0xffffff81;
    }
    iVar5 = se_slot_open(a0 + 1, 2, a1);
    if (-1 < iVar5) {
        FUN_8c0227bc(a0 + 1, iVar5, iVar2, a3);
        FUN_8c022804(a0 + 1, iVar5, uVar1);
        se_slot_play_wrap(a0 + 1, iVar5);
        iVar5 = se_slot_close(a0 + 1, iVar5, uVar1);
    }
    return iVar5;
}

/*
 * se_open_bank1  0x8c02190c
 * opens an SE port on bank 1 of a sound manager
 * called by: FUN_8c0d0d1c, FUN_8c0d3d6c, FUN_8c0d4c74, FUN_8c0d7508, FUN_8c0db32c, FUN_8c0e1f90, FUN_8c0e2a14,
 * FUN_8c0e3210 (+2 more)
 */
u32 se_open_bank1(u32 a0) {
    u32 uVar1;

    uVar1 = se_open(a0, 1);
    return uVar1;
}

/*
 * se_open_bank3  0x8c02192c
 * opens an SE port on bank 3 of a sound manager
 * called by: FUN_8c101b5c
 */
u32 se_open_bank3(u32 a0) {
    u32 uVar1;

    uVar1 = se_open(a0, 3);
    return uVar1;
}

/*
 * se_open  0x8c02194c
 * called by: se_open_bank1, se_open_bank3
 */
int se_open(int *a0, u32 a1) {
    int iVar1;

    if (*a0 == 0) {
        iVar1 = -1;
    } else {
        iVar1 = se_slot_open(a0 + 1, a1, 0);
        if (iVar1 < 0) {
            iVar1 = -1;
        }
    }
    return iVar1;
}

/*
 * se_play  0x8c021994
 * plays request a2 on port a1 of manager a0
 * called by: FUN_8c0d06ec, FUN_8c0d0d1c, FUN_8c0d1518, FUN_8c0d3d6c, FUN_8c0d4c74, FUN_8c0d55d0, FUN_8c0d7508,
 * FUN_8c0db32c (+5 more)
 */
u32 se_play(u32 a0, u32 a1, u32 a2) {
    u32 uVar1;

    uVar1 = se_play_request(a0, a1, a2);
    return uVar1;
}

/*
 * se_play_2  0x8c0219b8
 * called by: FUN_8c101e1c
 */
u32 se_play_2(u32 a0, u32 a1, u32 a2) {
    u32 uVar1;

    uVar1 = se_play_request(a0, a1, a2);
    return uVar1;
}

/*
 * se_play_request  0x8c0219dc
 * called by: se_play, se_play_2
 */
u32 se_play_request(int *a0, u32 a1, u32 a2) {
    u32 uVar1;

    uVar1 = 0;
    if (*a0 != 0) {
        uVar1 = se_slot_play(a0 + 1, a1, a2);
    }
    return uVar1;
}

/*
 * FUN_8c021a0c  0x8c021a0c
 * called by: FUN_8c0d3d6c
 */
u32 FUN_8c021a0c(u32 a0, u32 a1, u32 a2) {
    u32 uVar1;

    uVar1 = FUN_8c021a30(a0, a1, a2);
    return uVar1;
}

/*
 * FUN_8c021a30  0x8c021a30
 * called by: FUN_8c021a0c
 */
u32 FUN_8c021a30(int *a0, u32 a1, u32 a2) {
    u32 uVar1;

    uVar1 = 0;
    if (*a0 != 0) {
        uVar1 = FUN_8c022804(a0 + 1, a1, a2);
    }
    return uVar1;
}

/*
 * se_status  0x8c021a60
 * sound-effect port status (se_slot_status) when the port is open
 * called by: FUN_8c0d064c, FUN_8c0d06c4, FUN_8c0d0d1c, FUN_8c0d1468, FUN_8c0d14e8, FUN_8c0d3d6c, FUN_8c0d56dc,
 * tank_device_sound_update
 */
u32 se_status(int *a0, u32 a1, u32 a2, u32 a3) {
    u32 uVar1;

    uVar1 = 0;
    if (*a0 != 0) {
        uVar1 = se_slot_status(a0 + 1, a1, a2, a3);
    }
    return uVar1;
}

/*
 * se_close_port_handle  0x8c021a8c
 * closes the port handle *a1 and sets it to -1
 * called by: FUN_8c0d064c, FUN_8c0d0d1c, FUN_8c0d1468, FUN_8c0d3d6c, FUN_8c0d4c74, FUN_8c0d512c, FUN_8c0d56dc,
 * FUN_8c0d7508 (+6 more)
 */
u32 se_close_port_handle(u32 a0, u32 *a1) {
    FUN_8c021ad4(a0, *a1);
    *a1 = 0xffffffff;
    return 0xffffffff;
}

/*
 * FUN_8c021ab4  0x8c021ab4
 */
u32 FUN_8c021ab4(u32 a0, u32 a1) {
    u32 uVar1;

    uVar1 = FUN_8c021ad4(a0, a1);
    return uVar1;
}

/*
 * FUN_8c021ad4  0x8c021ad4
 * called by: FUN_8c021ab4, se_close_port_handle
 */
u32 FUN_8c021ad4(int *a0, u32 a1) {
    u32 uVar1;

    uVar1 = 0;
    if (*a0 != 0) {
        uVar1 = 0x7f;
        FUN_8c022804(a0 + 1, a1, 0x7f);
        uVar1 = se_slot_close(a0 + 1, a1, uVar1);
    }
    return uVar1;
}

/*
 * pack_acquire_entry_handle  0x8c021b10
 * called by: FUN_8c0baab8, FUN_8c0bb1e4, FUN_8c0c2efc, FUN_8c0c38d4, FUN_8c0c76d0, FUN_8c0c8758, FUN_8c0c8c28,
 * FUN_8c0c991c (+3 more)
 */
int pack_acquire_entry_handle(int *a0, u32 a1, u32 a2, u32 a3) {
    int ar5_00;
    int iVar1;

    if (*a0 == 0) {
        ar5_00 = -1;
    } else {
        ar5_00 = handle_slot_alloc(a0 + 1);
        if (ar5_00 == -1) {
            ar5_00 = -1;
        } else {
            iVar1 = pack_find_entry_by_name(a0, a1, a2, a3);
            if (iVar1 == -1) {
                handle_slot_free(a0 + 1, ar5_00);
                ar5_00 = -1;
            } else {
                *(int *)((int)a0 + 0x9ec98 + ar5_00 * 8) = ar5_00;
                *(int *)((int)a0 + 0x9ec9c + ar5_00 * 8) = iVar1;
            }
        }
    }
    return ar5_00;
}

/*
 * pack_find_entry_by_name  0x8c021bac
 * called by: pack_acquire_entry_handle, pack_find_by_name_buffered
 */
u32 pack_find_entry_by_name(int a0, u32 a1, u32 a2, u32 a3) {
    int iVar1;
    int iVar2;
    char acStack_8c[132];

    strcpy(acStack_8c, &g_8c12fc84);
    strcpy(acStack_8c, a1);
    strcat(acStack_8c, &g_8c12fc85);
    iVar2 = 0;
    while (true) {
        if ((0x7fff < iVar2) || (*(char *)(*(int *)(a0 + 0x9ec0c) + iVar2 * 0x28) == '\0')) {
            return 0xffffffff;
        }
        if ((*(char *)(*(int *)(a0 + 0x9ec0c) + iVar2 * 0x28) == acStack_8c[0]) &&
            (iVar1 = FUN_8c021c80(iVar2 * 0x28 + *(int *)(a0 + 0x9ec0c), acStack_8c), iVar1 == 0))
            break;
        iVar2 = iVar2 + 1;
    }
    return iVar2;
}

/*
 * FUN_8c021c80  0x8c021c80
 * called by: pack_find_entry_by_name
 */
u32 FUN_8c021c80(u8 *a0, u8 *a1) {
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
 * pack_release_entry_handle  0x8c021ce8
 * called by: FUN_8c021f4c, FUN_8c0bad68, FUN_8c0bb1e4, FUN_8c0bf22c, FUN_8c0c2efc, FUN_8c0c76d0, FUN_8c0c8c28,
 * FUN_8c0ca0e0 (+5 more)
 */
int pack_release_entry_handle(int *a0, int a1, u32 a2, u32 a3) {
    int iVar1;

    iVar1 = *a0;
    if (((iVar1 != 0) && (-1 < a1)) && (iVar1 = 3, a1 < 3)) {
        *(u32 *)((int)a0 + 0x9ec98 + a1 * 8) = 0xffffffff;
        FUN_8c02296c(a0 + 1, a1, a2, a3);
        iVar1 = handle_slot_free(a0 + 1, a1);
    }
    return iVar1;
}

/*
 * FUN_8c021d4c  0x8c021d4c
 * called by: FUN_8c0c2efc
 */
u32 FUN_8c021d4c(int *a0, u32 unused_a1, u32 a2, u32 a3) {
    u32 uVar1;
    int ar5_00;

    uVar1 = 0;
    if (*a0 != 0) {
        FUN_8c0229a8(a0 + 1, unused_a1, a2, a3);
        for (ar5_00 = 0; uVar1 = 3, ar5_00 < 3; ar5_00 = ar5_00 + 1) {
            FUN_8c02296c(a0 + 1, ar5_00, a2, a3);
        }
    }
    return uVar1;
}

/*
 * FUN_8c021d90  0x8c021d90
 * called by: FUN_8c0bb1e4, FUN_8c0c2efc, FUN_8c0c38d4, FUN_8c0c76d0, FUN_8c0c8758, FUN_8c0c8c28, FUN_8c0d84e8,
 * FUN_8c0fb268 (+1 more)
 */
int FUN_8c021d90(int *a0, int a1, u32 a2, u32 a3) {
    int iVar1;
    u32 ar6_00;
    u32 uVar2;

    iVar1 = *a0;
    if (((iVar1 != 0) && (-1 < a1)) && (iVar1 = 3, a1 < 3)) {
        uVar2 = a2;
        ar6_00 = FUN_8c021ec8(a0, a3);
        uVar2 = FUN_8c021e10(a0, a2);
        FUN_8c022b68(a0 + 1, a1, uVar2);
        iVar1 = FUN_8c022bb0(a0 + 1, a1, ar6_00);
    }
    return iVar1;
}

/*
 * FUN_8c021e10  0x8c021e10
 * called by: FUN_8c021d90
 */
int FUN_8c021e10(u32 unused_a0, int a1) {
    u32 ar4_00;
    int iVar1;

    ar4_00 = FUN_8c013adc(a1);
    iVar1 = libgcc_divide_helper_0101e4(ar4_00, 0x14d);
    if ((iVar1 < 9) && (-1 < iVar1)) {
        switch (iVar1) {
        case 0:
            iVar1 = 0;
            break;
        case 1:
            iVar1 = 1;
            break;
        case 2:
            iVar1 = 2;
            break;
        case 3:
            iVar1 = 3;
            break;
        case 4:
            iVar1 = 4;
            break;
        case 5:
            iVar1 = 5;
            break;
        case 6:
            iVar1 = 6;
            break;
        case 7:
            iVar1 = 7;
            break;
        case 8:
            iVar1 = 8;
        }
    } else {
        iVar1 = 0xf;
    }
    if (a1 < 0) {
        iVar1 = -iVar1;
    }
    return iVar1;
}

/*
 * FUN_8c021ec8  0x8c021ec8
 * called by: FUN_8c021d90
 */
int FUN_8c021ec8(u32 unused_a0, u32 a1) {
    int iVar1;

    iVar1 = FUN_8c013adc(a1);
    iVar1 = libgcc_divide_helper_0101e4(iVar1 * 0x78, 0xbb8);
    return -iVar1;
}

/*
 * FUN_8c021f18  0x8c021f18
 * called by: FUN_8c0bb1e4, FUN_8c0c2c0c, FUN_8c0c2efc, FUN_8c0c76d0, FUN_8c0c8c28, FUN_8c101004
 */
u32 FUN_8c021f18(u32 a0, u32 a1, u32 a2) {
    u32 uVar1;
    u8 auStack_10[4];
    u8 auStack_c[4];
    u8 auStack_8[8];

    uVar1 = FUN_8c021f4c(a0, a1, auStack_8, auStack_c, auStack_10);
    return uVar1;
}

/*
 * FUN_8c021f4c  0x8c021f4c
 * called by: FUN_8c021f18, FUN_8c0fb494
 */
u32 FUN_8c021f4c(int *a0, int a1, int *a2, int *a3, int *s0) {
    u32 uVar1;
    u16 *ar6_00;
    int *ar7_00;
    u16 auStack_18[2];
    int iStack_14;
    u8 *puStack_c;

    puStack_c = &g_8c4366c0;
    if (*a0 == 0) {
        return 2;
    }
    if ((a1 < 0) || (2 < a1)) {
        return 2;
    }
    ar6_00 = auStack_18;
    ar7_00 = a3;
    iStack_14 = adx_stall_watchdog(a0 + 1, a1, ar6_00, a3);
    if (iStack_14 == 1) {
        pack_release_entry_handle(a0, a1, ar6_00, ar7_00);
        return 1;
    }
    if (iStack_14 == 2) {
        return 3;
    }
    if (iStack_14 != 3) {
        return 2;
    }
    *a2 = (int)(auStack_18[0] & 0xf0) >> 4;
    *a3 = (int)(auStack_18[0] & 0xf00) >> 8;
    *s0 = (int)(auStack_18[0] & 0xf000) >> 0xc;
    if ((auStack_18[0] & 0xf) < 8) {
        switch (auStack_18[0] & 0xf) {
        case 0:
            uVar1 = 5;
            break;
        default:
            uVar1 = 6;
            break;
        case 4:
        case 5:
        case 6:
            uVar1 = 7;
            break;
        case 7:
            goto switchD_8c022008_caseD_7;
        }
    } else {
    switchD_8c022008_caseD_7:
        uVar1 = 8;
    }
    return uVar1;
}

/*
 * pack_find_by_name_buffered  0x8c022068
 */
u32 pack_find_by_name_buffered(int *a0, u32 a1, u32 a2, u32 a3) {
    u32 uVar1;

    if (*a0 == 0) {
        uVar1 = 0xffffffff;
    } else {
        *(u8 *)(a0 + 0x27b05) = 0;
        strcpy(a0 + 0x27b05, a1);
        uVar1 = pack_find_entry_by_name(a0, a0 + 0x27b05, a2, a3);
    }
    return uVar1;
}

/*
 * FUN_8c0220bc  0x8c0220bc
 * called by: Class_12b580_m1_0e634c, FUN_8c0c991c, FUN_8c0d50b4, FUN_8c0d512c, FUN_8c0e0764, FUN_8c0e6dc4
 */
int FUN_8c0220bc(int a0) {
    int iVar1;

    *(u32 *)(0x9ec94 + a0) = 0xffffffff;
    iVar1 = 0x9ec14;
    *(u8 *)(0x9ec14 + a0) = 0;
    return iVar1;
}

/*
 * FUN_8c0220d4  0x8c0220d4
 * called by: Class_12b580_m1_0e634c, FUN_8c0d4fe8, FUN_8c0d5040, FUN_8c0d55d0, FUN_8c0d568c, FUN_8c0e070c, FUN_8c0e6d80
 */
u32 FUN_8c0220d4(int *a0, u32 a1) {
    if (*a0 == 0) {
        return 0;
    }
    if (*(char *)(0x9ec14 + (int)a0) == '\0') {
        return 0;
    }
    *(u32 *)(0x9ec94 + (int)a0) = a1;
    return 1;
}

/*
 * FUN_8c022104  0x8c022104
 * called by: Class_12b580_m1_0e634c, FUN_8c0c991c, FUN_8c0d50b4, FUN_8c0d512c, FUN_8c0d5614, FUN_8c0d56b4,
 * FUN_8c0e0764, FUN_8c0e6d24
 */
u32 FUN_8c022104(int *a0, u32 unused_a1, u32 a2, u32 a3) {
    u32 uVar1;

    uVar1 = 0;
    if (*a0 != 0) {
        uVar1 = FUN_8c0229a8(a0 + 1, unused_a1, a2, a3);
    }
    return uVar1;
}

/*
 * FUN_8c022128  0x8c022128
 * called by: Class_12b580_m1_0e634c, FUN_8c0d5040, FUN_8c0d51ec, pack_close_and_flush
 */
u32 FUN_8c022128(int *a0, u32 a1, u32 a2, u32 a3) {
    int iVar1;
    u32 uVar2;

    uVar2 = 0;
    if (*a0 != 0) {
        iVar1 = FUN_8c013adc(a1);
        iVar1 = (*(code *)(&libgcc_divide_helper_0101e4))(iVar1 * 0x190, 0xbb8, a2, a3);
        uVar2 = FUN_8c022bf8(a0 + 1, -iVar1);
    }
    return uVar2;
}

/*
 * noop_022190  0x8c022190
 * does nothing
 * called by: pack_ctor
 */
u32 noop_022190(u32 a0) {
}

/*
 * free_if_nonnull_wrap_022198  0x8c022198
 * called by: FUN_8c0214e0
 */
int free_if_nonnull_wrap_022198(int a0, u32 a1, u32 a2, u32 a3) {
    u32 in_stack_fffffff4;

    if ((a0 != 0) && (0 < (short)a1)) {
        free_if_nonnull(a0, a1, a2, a3, CONCAT22((short)((u32)in_stack_fffffff4 >> 0x10), (short)a1));
    }
    return a0;
}

/*
 * FUN_8c0221c8  0x8c0221c8
 * called by: pack_open
 */
u32 FUN_8c0221c8(int a0, u32 a1, u32 a2) {
    u32 r7;
    u32 uVar1;
    u32 uVar2;
    u32 uVar3;
    u8 *ar6_00;
    int iVar4;
    int aiStack_10[2];

    for (iVar4 = 0; iVar4 < 7; iVar4 = iVar4 + 1) {
        *(u32 *)(iVar4 * 0x10 + a0) = 0;
    }
    *(u32 *)(a0 + 0x70) = 1;
    for (iVar4 = 0; iVar4 < 3; iVar4 = iVar4 + 1) {
        *(u32 *)(0x2d150 + a0 + iVar4 * 0x208e0) = 0;
    }
    thunk_FUN_8c25ecdc(r7, 0);
    iVar4 = a0 + 0x8ebf0;
    uVar1 = 0x8000;
    ADXF_LoadPartition(0, a2, iVar4, 0x8000);
    uVar3 = 0;
    thunk_FUN_8c25ecdc((&DATA_8c022c48), 0);
    iVar4 = aica_driver_load_manatee();
    if (iVar4 == 1) {
        ar6_00 = (&DATA_8c12fc98);
        iVar4 = FUN_8c022494(a0, a1, (&DATA_8c12fc98));
        if (iVar4 == 0) {
            uVar1 = 0;
        } else {
            FUN_8c1f7f1e(aiStack_10, a1, ar6_00, uVar1);
            if (aiStack_10[0] == 0) {
                FUN_8c268818(0x4f525453, a1, ar6_00, uVar1);
            } else {
                FUN_8c268818(0x4f4e4f4d, a1, ar6_00, uVar1);
            }
            FUN_8c265f84(1, a1, ar6_00, uVar1);
            uVar3 = 0x2d0c4;
            uVar2 = FUN_8c263840(2, a0 + 0x8c, 0x2d0c4, uVar1);
            *(u32 *)(a0 + 0x74) = uVar2;
            set_field_6d_u8(*(u32 *)(a0 + 0x74), 2);
            for (iVar4 = 0; iVar4 < 3; iVar4 = iVar4 + 1) {
                uVar3 = 0x208c4;
                uVar2 = (*(code *)(&FUN_8c263840))(2, a0 + iVar4 * 0x208e0 + 0x2d16c, 0x208c4, uVar1);
                *(u32 *)(0x2d154 + a0 + iVar4 * 0x208e0) = uVar2;
                (*(code *)(&set_field_6d_u8))(*(u32 *)(0x2d154 + a0 + iVar4 * 0x208e0), 1, uVar3, uVar1);
            }
            uVar1 = 1;
        }
    } else {
        uVar1 = 0;
    }
    return uVar1;
}

/*
 * sound_server  0x8c022384
 * calls sdSysServer
 * called by: pack_close_and_flush
 */
u32 sound_server(u32 unused_a0, u32 unused_a1, u32 a2, u32 a3) {
    u32 uVar1;

    uVar1 = sdSysServer(unused_a0, unused_a1, a2, a3);
    return uVar1;
}

/*
 * aica_driver_load_manatee  0x8c022398
 * called by: FUN_8c0221c8
 * strings: "MANATEE.DRV"; "MANATEE.DRV"
 */
u32 aica_driver_load_manatee(void) {
    u32 r4;
    int iVar1;
    u8 *ar6_00;
    u32 *ar7_00;
    u32 auStack_8[2];

    ar7_00 = auStack_8;
    ar6_00 = (&DATA_8c12fc98);
    iVar1 = (*(code *)(&file_load_to_buffer))(0x8c3eb334, "MANATEE.DRV", (&DATA_8c12fc98), ar7_00);
    if (iVar1 != 0) {
        aica_driver_upload(r4, auStack_8[0], ar6_00, ar7_00);
        FUN_8c021234(0x8c3eb334, "MANATEE.DRV", (&DATA_8c12fc98), 1);
    }
    return (u32)(iVar1 != 0);
}

/*
 * aica_driver_upload  0x8c022404
 * copies MANATEE.DRV to sound RAM and releases the ARM
 * called by: aica_driver_load_manatee
 */
int aica_driver_upload(u32 unused_a0, u32 a1, u32 unused_a2, u32 a3) {
    int iVar1;
    u32 ar5_00;
    u32 ar6_00;
    int aiStack_10[2];

    aiStack_10[0] = 0;
    ar6_00 = 0;
    ar5_00 = 0;
    iVar1 = FUN_8c2655f4(0, 0, 0, a3);
    if (iVar1 == 0) {
        iVar1 = FUN_8c265704(aiStack_10);
        if (iVar1 == 0) {
            a3 = 0xffffffff;
            ar6_00 = 0;
            iVar1 = sd_dma_setup(aiStack_10[0], a1, 0, 0xffffffff, 0);
            ar5_00 = a1;
            if (iVar1 == 0) {
                iVar1 = FUN_8c2654f4(aiStack_10[0], a1, ar6_00, a3);
                ar5_00 = a1;
            }
        }
    }
    if (aiStack_10[0] != 0) {
        FUN_8c265784(aiStack_10[0]);
    }
    return iVar1;
}

/*
 * FUN_8c022494  0x8c022494
 * called by: FUN_8c0221c8
 */
u32 FUN_8c022494(u32 unused_a0, u32 a1, u32 a2) {
    int iVar1;
    u32 ar6_00;
    u32 *ar7_00;
    u32 auStack_10[2];

    ar7_00 = auStack_10;
    ar6_00 = a2;
    iVar1 = file_load_to_buffer(0x8c3eb334, a1, a2, ar7_00);
    if (iVar1 != 0) {
        FUN_8c022504(unused_a0, auStack_10[0], ar6_00, ar7_00);
        FUN_8c021234(0x8c3eb334, a1, a2, 1);
    }
    return (u32)(iVar1 != 0);
}

/*
 * FUN_8c022504  0x8c022504
 * called by: FUN_8c022494
 */
int FUN_8c022504(u32 unused_a0, u32 a1, u32 a2, u32 a3) {
    int iVar1;
    int aiStack_10[2];

    aiStack_10[0] = 0;
    iVar1 = FUN_8c265704(aiStack_10);
    if (iVar1 == 0) {
        a3 = 0xffffffff;
        a2 = 0;
        iVar1 = sd_dma_setup(aiStack_10[0], a1, 0, 0xffffffff, 0);
        if (iVar1 == 0) {
            iVar1 = FUN_8c2669f4(aiStack_10[0], a1, a2, a3);
        }
    }
    if (aiStack_10[0] != 0) {
        FUN_8c265784(aiStack_10[0]);
    }
    return iVar1;
}

/*
 * FUN_8c02257c  0x8c02257c
 * called by: FUN_8c021720
 */
int FUN_8c02257c(u32 unused_a0, u32 a1, u32 a2, u32 a3) {
    int iVar1;
    u32 ar7_00;
    u32 auStack_8[2];

    iVar1 = FUN_8c2680ec(auStack_8, a1, a2);
    if (iVar1 == 0) {
        FUN_8c2681d0(auStack_8[0], 0, 0, a3);
        FUN_8c268250(auStack_8[0], 0x7f, 0);
        ar7_00 = 0;
        iVar1 = FUN_8c26813c(auStack_8[0], a1, a2, 0);
        if (iVar1 == 0) {
            iVar1 = FUN_8c26809c(auStack_8[0], a1, a2);
        } else {
            iVar1 = FUN_8c26809c(auStack_8[0], a1, a2);
        }
    }
    return iVar1;
}

/*
 * se_slot_open  0x8c0225f4
 * opens one of 7 sound-effect port slots (sd port open)
 * called by: se_open, se_play_3d
 */
u32 se_slot_open(int a0, u32 a1, u32 a2) {
    int iVar1;
    u32 uVar2;

    for (uVar2 = 0; (uVar2 < 7 && (*(int *)(uVar2 * 0x10 + a0) != 0)); uVar2 = uVar2 + 1) {
    }
    if (uVar2 == 7) {
        uVar2 = 0xffffffff;
    } else {
        iVar1 = FUN_8c2680ec(a0 + uVar2 * 0x10 + 0xc, a1, a2);
        if (iVar1 == 0) {
            *(u32 *)(uVar2 * 0x10 + a0) = 1;
            *(u32 *)(a0 + uVar2 * 0x10 + 4) = a1;
            *(u32 *)(a0 + uVar2 * 0x10 + 8) = a2;
        } else {
            uVar2 = 0xffffffff;
        }
    }
    return uVar2;
}

/*
 * se_slot_close  0x8c022688
 * called by: FUN_8c021ad4, se_play_3d
 */
int se_slot_close(int a0, u32 a1, u32 a2) {
    int iVar1;

    iVar1 = 7;
    if (a1 < 7) {
        iVar1 = *(int *)(a1 * 0x10 + a0);
        if (iVar1 == 1) {
            FUN_8c26809c(*(u32 *)(a0 + a1 * 0x10 + 0xc), a1, a2);
            iVar1 = a1 * 0x10;
            *(u32 *)(iVar1 + a0) = 0;
        }
    }
    return iVar1;
}

/*
 * se_slot_play_wrap  0x8c0226d8
 * only calls se_slot_play
 * called by: se_play_3d
 */
u32 se_slot_play_wrap(int a0, int a1) {
    u32 uVar1;

    uVar1 = se_slot_play(a0, a1, *(u32 *)(a0 + a1 * 0x10 + 8));
    return uVar1;
}

/*
 * se_slot_play  0x8c022710
 * plays request a2 on an open slot
 * called by: se_play_request, se_slot_play_wrap
 */
u32 se_slot_play(int a0, int a1, u32 a2) {
    u32 uVar1;
    int iVar2;

    if (*(int *)(a1 * 0x10 + a0) == 1) {
        iVar2 = (*(code *)(&FUN_8c26813c))(*(u32 *)(a0 + a1 * 0x10 + 0xc), *(u32 *)(a0 + a1 * 0x10 + 4), a2, 1);
        if (iVar2 == 0) {
            uVar1 = 1;
        } else {
            uVar1 = 0;
        }
    } else {
        uVar1 = 0;
    }
    return uVar1;
}

/*
 * se_slot_status  0x8c022778
 * called by: se_status
 */
int se_slot_status(int a0, u32 a1, u32 a2, u32 a3) {
    int iVar1;

    iVar1 = 7;
    if (a1 < 7) {
        iVar1 = *(int *)(a1 * 0x10 + a0);
        if (iVar1 == 1) {
            iVar1 = FUN_8c2682bc(*(u32 *)(a0 + a1 * 0x10 + 0xc), a1, a2, a3);
        }
    }
    return iVar1;
}

/*
 * FUN_8c0227bc  0x8c0227bc
 * called by: se_play_3d
 */
int FUN_8c0227bc(int a0, u32 a1, u32 a2, u32 a3) {
    int iVar1;

    iVar1 = 7;
    if (a1 < 7) {
        iVar1 = *(int *)(a1 * 0x10 + a0);
        if (iVar1 == 1) {
            iVar1 = FUN_8c2681d0(*(u32 *)(a0 + a1 * 0x10 + 0xc), a2, 0, a3);
        }
    }
    return iVar1;
}

/*
 * FUN_8c022804  0x8c022804
 * called by: FUN_8c021a30, FUN_8c021ad4, se_play_3d
 */
int FUN_8c022804(int a0, u32 a1, u32 a2) {
    int iVar1;

    iVar1 = 7;
    if (a1 < 7) {
        iVar1 = *(int *)(a1 * 0x10 + a0);
        if (iVar1 == 1) {
            iVar1 = FUN_8c268250(*(u32 *)(a0 + a1 * 0x10 + 0xc), a2, 0);
        }
    }
    return iVar1;
}

/*
 * handle_slot_alloc  0x8c02284c
 * called by: pack_acquire_entry_handle
 */
u32 handle_slot_alloc(int a0) {
    int *piVar1;
    int iVar2;

    iVar2 = 0;
    while (true) {
        if (2 < iVar2) {
            return 0xffffffff;
        }
        piVar1 = (int *)(a0 + iVar2 * 0x208e0 + 0x2d150);
        if (*piVar1 == 0)
            break;
        iVar2 = iVar2 + 1;
    }
    *piVar1 = 1;
    return iVar2;
}

/*
 * FUN_8c022894  0x8c022894
 */
u32 FUN_8c022894(int a0, int a1, u32 a2, u32 a3) {
    u32 uVar1;
    u32 in_stack_00000000;

    uVar1 = (*(code *)(&FUN_8c022918))(a0, a0 + a1 * 0x208e0 + 0x2d150, a2, a3, in_stack_00000000);
    return uVar1;
}

/*
 * FUN_8c0228e4  0x8c0228e4
 * called by: pack_close_and_flush
 */
u32 FUN_8c0228e4(int a0, u32 a1) {
    u32 uVar1;

    uVar1 = FUN_8c022918(a0, a0 + 0x70, a1, 0, 0);
    return uVar1;
}

/*
 * FUN_8c022918  0x8c022918
 * called by: FUN_8c0228e4
 */
u32 FUN_8c022918(u32 unused_a0, int *a1, u32 a2, int a3, int s0) {
    u32 uVar1;

    if ((*a1 == 1) || (*a1 == 3)) {
        ADXT_StartAfs(a1[1], 0, a2, a3);
        *a1 = 2;
        a1[2] = a3;
        a1[3] = s0;
        a1[4] = 0;
        a1[5] = 0;
        a1[6] = 0;
        uVar1 = 1;
    } else {
        uVar1 = 0;
    }
    return uVar1;
}

/*
 * FUN_8c02296c  0x8c02296c
 * called by: FUN_8c021d4c, pack_release_entry_handle
 */
u32 FUN_8c02296c(int a0, int a1, u32 a2, u32 a3) {
    u32 uVar1;

    uVar1 = FUN_8c0229c8(a0, a0 + a1 * 0x208e0 + 0x2d150, a2, a3);
    return uVar1;
}

/*
 * FUN_8c0229a8  0x8c0229a8
 * called by: FUN_8c021d4c, FUN_8c022104
 */
u32 FUN_8c0229a8(int a0, u32 unused_a1, u32 a2, u32 a3) {
    u32 uVar1;

    uVar1 = FUN_8c0229c8(a0, a0 + 0x70, a2, a3);
    return uVar1;
}

/*
 * FUN_8c0229c8  0x8c0229c8
 * called by: FUN_8c02296c, FUN_8c0229a8
 */
int FUN_8c0229c8(u32 unused_a0, int *a1, u32 a2, u32 a3) {
    int iVar1;

    iVar1 = *a1;
    if (iVar1 == 2) {
        FUN_8c263c64(a1[1], a1, a2, a3);
        iVar1 = 3;
        *a1 = 3;
    }
    return iVar1;
}

/*
 * handle_slot_free  0x8c0229ec
 * called by: pack_acquire_entry_handle, pack_release_entry_handle
 */
u32 handle_slot_free(int a0, int a1) {
    int *piVar1;

    piVar1 = (int *)(a0 + a1 * 0x208e0 + 0x2d150);
    if (*piVar1 != 0) {
        *piVar1 = 0;
    }
    return 0;
}

/*
 * adx_stall_watchdog  0x8c022a1c
 * restarts an ADX stream whose play time stops advancing (5 polls)
 * called by: FUN_8c021f4c
 */
u32 adx_stall_watchdog(int a0, int a1, u16 *a2, u32 a3) {
    int iVar1;
    u32 uVar2;
    int *ar6_00;
    int *piVar3;
    u32 uStack_18;
    int aiStack_14[2];
    u8 *puStack_c;

    puStack_c = &g_8c4366c0;
    *a2 = 0;
    piVar3 = (int *)(a0 + a1 * 0x208e0 + 0x2d150);
    iVar1 = *piVar3;
    if (iVar1 == 0) {
    LAB_8c022adc:
        uVar2 = 0;
    } else {
        if (iVar1 != 1) {
            if (iVar1 == 2) {
                iVar1 = get_field_1_s8_263cd4(piVar3[1]);
                if (iVar1 != 1) {
                    if ((iVar1 == 2) || (iVar1 == 3)) {
                        ar6_00 = aiStack_14;
                        FUN_8c263cd8(piVar3[1], &uStack_18, ar6_00, a3);
                        if (0 < (int)uStack_18) {
                            if ((u32)piVar3[5] < uStack_18) {
                                piVar3[6] = 0;
                            } else {
                                piVar3[6] = piVar3[6] + 1;
                                if (4 < (u32)piVar3[6]) {
                                    piVar3[6] = 0;
                                    return 1;
                                }
                            }
                        }
                        piVar3[5] = uStack_18;
                        if (piVar3[3] == 0) {
                            return 2;
                        }
                        if ((u32)piVar3[3] <= (u32)piVar3[4]) {
                            return 2;
                        }
                        aiStack_14[0] = libgcc_divide_helper_0101e4(aiStack_14[0], 0x1e);
                        aiStack_14[0] = aiStack_14[0] * 5;
                        iVar1 = (*(code *)(&libgcc_divide_helper_0101e4))(uStack_18, aiStack_14[0], ar6_00, a3);
                        if (piVar3[4] + 1U <= iVar1 + 3U) {
                            *a2 = *(u16 *)(piVar3[4] * 2 + piVar3[2]);
                            piVar3[4] = piVar3[4] + 1;
                            return 3;
                        }
                        return 2;
                    }
                    if (iVar1 != 4) {
                        return 1;
                    }
                }
                return 2;
            }
            if (iVar1 != 3)
                goto LAB_8c022adc;
        }
        uVar2 = 2;
    }
    return uVar2;
}

/*
 * FUN_8c022b68  0x8c022b68
 * called by: FUN_8c021d90
 */
int FUN_8c022b68(int a0, int a1, u32 a2) {
    int iVar1;
    int *piVar2;

    piVar2 = (int *)(a0 + a1 * 0x208e0 + 0x2d150);
    iVar1 = *piVar2;
    if (iVar1 == 2) {
        iVar1 = ADXT_SetOutPan(piVar2[1], 0, a2);
    }
    return iVar1;
}

/*
 * FUN_8c022bb0  0x8c022bb0
 * called by: FUN_8c021d90
 */
u32 FUN_8c022bb0(int a0, int a1, u32 a2) {
    u32 uVar1;

    uVar1 = FUN_8c022c20(a0, a0 + a1 * 0x208e0 + 0x2d150, a2);
    return uVar1;
}

/*
 * FUN_8c022bf8  0x8c022bf8
 * called by: FUN_8c022128
 */
u32 FUN_8c022bf8(int a0, u32 a1) {
    u32 uVar1;

    uVar1 = FUN_8c022c20(a0, a0 + 0x70, a1);
    return uVar1;
}

/*
 * FUN_8c022c20  0x8c022c20
 * called by: FUN_8c022bb0, FUN_8c022bf8
 */
int FUN_8c022c20(u32 unused_a0, int *a1, u32 a2) {
    int iVar1;

    iVar1 = *a1;
    if (iVar1 == 2) {
        iVar1 = FUN_8c263e8e(a1[1], a2);
    }
    return iVar1;
}

/*
 * Vec3_ctor_zero  0x8c022c4c
 * called by: CAnimal_m7_036d7c, CAnimal_m7_0ade84, CAnimal_m7_0f49b8, CSoilTank_Create, CWaterTank_CreateStage,
 * Class_1297f4_ctor, Class_1299f8_m3_019f00, Class_1299f8_m4_019588 (+211 more)
 */
u32 *Vec3_ctor_zero(u32 *a0, u32 a1, u32 a2) {
    a0[3] = &g_8c129a7c;
    a0[2] = 0;
    a0[1] = 0;
    *a0 = 0;
    return a0;
}

/*
 * Vec3_ctor_copy  0x8c022c88
 * called by: Class_1299f8_m4_019588, Class_129a24_m4_019e40, Class_12acc8_m1_09f470, FUN_8c014eac, FUN_8c023040,
 * FUN_8c023138, FUN_8c023180, FUN_8c023334 (+130 more)
 */
u32 *Vec3_ctor_copy(u32 *a0, u32 *a1, u32 a2, u32 a3) {
    a0[3] = &g_8c129a7c;
    *a0 = *a1;
    a0[1] = a1[1];
    a0[2] = a1[2];
    return a0;
}

/*
 * Vec3_dtor  0x8c022cb0
 * called by: CAnimal_m2_02573c, CAnimal_m3_026078, CAnimal_m7_036d7c, CAnimal_m7_0ade84, CAnimal_m7_0f49b8,
 * CMushroomerBody_AwayFrom, CSoilTank_Create, CWaterTank_CreateStage (+334 more)
 */
int Vec3_dtor(int a0, u32 a1, u32 a2, u32 a3) {
    u32 in_stack_fffffff4;

    if ((a0 != 0) && (*(u8 **)(a0 + 0xc) = &g_8c129a7c, 0 < (short)a1)) {
        free_if_nonnull(a0, a1, a2, a3, CONCAT22((short)((u32)in_stack_fffffff4 >> 0x10), (short)a1));
    }
    return a0;
}

/*
 * Vec3_ctor_xyz  0x8c022ce8
 * called by: Class_1299f8_m3_019f00, Class_1299f8_m4_019588, Class_12b2ac_m1_0aff3c, FUN_8c014eac, FUN_8c0150e0,
 * FUN_8c016978, FUN_8c0185a4, FUN_8c018fb0 (+123 more)
 */
u32 *Vec3_ctor_xyz(u32 *a0, u32 a1, u32 a2, u32 a3) {
    u32 in_fr5;
    u32 in_fr4;
    u32 in_fr6;

    a0[3] = &g_8c129a7c;
    *a0 = in_fr4;
    a0[1] = in_fr5;
    a0[2] = in_fr6;
    return a0;
}

/*
 * Vec3_assign_f  0x8c022d04
 * stores fr4..fr6 as x, y, z
 * called by: Class_1299f8_m4_019588, Class_129a24_m2_01a1d8, FUN_8c02b3d4, FUN_8c0310c0, FUN_8c033530, FUN_8c03c100,
 * FUN_8c03f4a4, FUN_8c046684 (+33 more)
 */
u32 *Vec3_assign_f(u32 *a0, u32 a1, u32 a2, u32 a3) {
    u32 in_fr5;
    u32 in_fr4;
    u32 in_fr6;

    *a0 = in_fr4;
    a0[1] = in_fr5;
    a0[2] = in_fr6;
    return a0 + 1;
}

/*
 * FUN_8c022d14  0x8c022d14
 * called by: FUN_8c05af78, FUN_8c0b54f4, Vec3_cos_angle
 */
int FUN_8c022d14(u32 unused_a0, int a1) {
    return a1 + 4;
}

/*
 * Vec3_ctor_xyz_wrap  0x8c022d3c
 * only calls Vec3_ctor_xyz
 * called by: FUN_8c017900, FUN_8c0185a4
 */
u32 Vec3_ctor_xyz_wrap(u32 a0, u32 a1, u32 a2, u32 a3, u32 s0) {
    u32 uVar1;

    uVar1 = Vec3_ctor_xyz(s0, a1, a2, a3);
    return uVar1;
}

/*
 * Vec3_cos_angle  0x8c022dac
 * dot(a0, a1) / (|a0| |a1|)
 * called by: FUN_8c0231c8, FUN_8c02327c, FUN_8c023334, FUN_8c0332b4, FUN_8c03c94c, FUN_8c03f4a4, FUN_8c046684,
 * FUN_8c048f8c (+54 more)
 */
u32 Vec3_cos_angle(u32 a0, u32 a1, u32 a2, u32 a3) {
    u32 uVar1;
    u32 ar5_00;
    u64 in_dr0;
    double dVar2;
    u32 in_fr15;
    double dVar3;
    bool bVar4;
    char cVar5;
    char cVar6;
    u32 uStack_24;
    u32 uStack_20;
    u32 uStack_1c;

    cVar6 = '\0';
    cVar5 = '\0';
    ar5_00 = a1;
    FUN_8c022d14(a0, a1);
    uStack_1c = (u32)((u64)in_dr0 >> 0x20);
    if (cVar6 != '\0') {
        uStack_1c = (u32)in_dr0;
    }
    Vec3_length_sq(a0, ar5_00, a2, a3);
    uVar1 = (u32)((u64)in_dr0 >> 0x20);
    uStack_20 = uVar1;
    if (cVar6 != '\0') {
        uStack_20 = (u32)in_dr0;
        uStack_1c = uVar1;
    }
    Vec3_length_sq(a1, ar5_00, a2, a3);
    uVar1 = (u32)((u64)in_dr0 >> 0x20);
    if (cVar6 == '\0') {
        dVar3 = (double)CONCAT44(uStack_20, in_fr15);
        uStack_24 = uVar1;
    } else {
        dVar3 = (double)CONCAT44(uStack_1c, uVar1);
        uStack_24 = (int)in_dr0;
        uStack_20 = uVar1;
    }
    uVar1 = 8;
    if (cVar6 == '\0') {
        dVar2 = (double)CONCAT44(uStack_24, (int)in_dr0);
    } else {
        dVar2 = (double)CONCAT44(uStack_20, uStack_24);
    }
    if (cVar5 == '\0') {
        dVar3 = (double)CONCAT44((float)((u64)dVar3 >> 0x20) * (float)((u64)dVar2 >> 0x20), SUB84(dVar3, 0));
    } else {
        dVar3 = dVar3 * dVar2;
    }
    if (cVar5 == '\0') {
        bVar4 = 0.0 < (float)((u64)dVar3 >> 0x20);
    } else {
        bVar4 = (double)((u64)dVar2 & 0xffffffff) < dVar3;
    }
    if (bVar4) {
        FUN_8c013aec();
        ret_const_8c022e74();
        uVar1 = 0;
    }
    return uVar1;
}

/*
 * ret_const_8c022e74  0x8c022e5c
 * called by: Vec3_cos_angle
 */
u32 ret_const_8c022e74(void) {
    return 0x8c022e74;
}

/*
 * Vec3_length_sq  0x8c022e78
 * called by: FUN_8c023040, FUN_8c0231c8, FUN_8c02374c, FUN_8c02f474, FUN_8c02f694, FUN_8c02f880, FUN_8c04c314,
 * FUN_8c04ddd4 (+37 more)
 */
u32 Vec3_length_sq(u32 a0, u32 a1, u32 a2, u32 a3) {
    u32 in_stack_fffffff4;

    FUN_8c258030(a0, a1, a2, a3, in_stack_fffffff4);
    return 0;
}

/*
 * Vec3_normalize  0x8c022ec0
 * called by: FUN_8c033530, FUN_8c03f4a4, FUN_8c046684, FUN_8c048868, FUN_8c048f8c, FUN_8c049b68, FUN_8c04b168,
 * FUN_8c04c314 (+39 more)
 */
u32 Vec3_normalize(double *a0, u32 a1, u32 a2, u32 a3) {
    u64 in_dr0;
    float fVar3;
    double dVar1;
    double dVar2;
    u32 uVar4;
    float in_fr15;
    u32 in_fr14;
    char cVar5;
    char cVar6;
    u32 in_stack_00000000;
    float fStack_1c;
    u32 uStack_18;
    u32 uStack_14;

    cVar6 = '\0';
    cVar5 = '\0';
    Vec3_ctor_zero(&fStack_1c, a1, a2);
    Vec3_length_sq(a0, a1, a2, a3);
    fVar3 = (float)((u64)in_dr0 >> 0x20);
    if (cVar6 == '\0') {
        in_fr15 = fVar3;
        fVar3 = fStack_1c;
    }
    fStack_1c = fVar3;
    if (in_fr15 == 0.0) {
        Vec3_assign(&fStack_1c, a0, a2, a3);
    } else {
        if (cVar6 == '\0') {
            dVar1 = (double)CONCAT44(*(u32 *)a0, (int)in_dr0);
        } else {
            dVar1 = *a0;
        }
        if (cVar5 == '\0') {
            dVar1 = (double)CONCAT44((float)((u64)dVar1 >> 0x20) / in_fr15, SUB84(dVar1, 0));
        } else {
            dVar1 = dVar1 / (double)CONCAT44(in_fr14, in_fr15);
        }
        fStack_1c = SUB84(dVar1, 0);
        if (cVar6 == '\0') {
            dVar2 = (double)CONCAT44(*(u32 *)((int)a0 + 4), fStack_1c);
            fStack_1c = (float)((u64)dVar1 >> 0x20);
        } else {
            dVar2 = *(double *)((int)a0 + 4);
        }
        if (cVar5 == '\0') {
            dVar2 = (double)CONCAT44((float)((u64)dVar2 >> 0x20) / in_fr15, SUB84(dVar2, 0));
        } else {
            dVar2 = dVar2 / (double)CONCAT44(in_fr14, in_fr15);
        }
        uStack_18 = SUB84(dVar2, 0);
        if (cVar6 == '\0') {
            dVar1 = (double)CONCAT44(*(u32 *)(a0 + 1), uStack_18);
            uStack_18 = (int)((u64)dVar2 >> 0x20);
        } else {
            dVar1 = a0[1];
        }
        if (cVar5 == '\0') {
            dVar1 = (double)CONCAT44((float)((u64)dVar1 >> 0x20) / in_fr15, SUB84(dVar1, 0));
        } else {
            dVar1 = dVar1 / (double)CONCAT44(in_fr14, in_fr15);
        }
        uVar4 = (u32)((u64)dVar1 >> 0x20);
        uStack_14 = uVar4;
        if (cVar6 != '\0') {
            uStack_14 = SUB84(dVar1, 0);
        }
    }
    Vec3_ctor_copy(in_stack_00000000, &fStack_1c, a2, a3);
    Vec3_dtor(&fStack_1c, 0xffffffff, a2, a3);
    return 0;
}

/*
 * Vec3_length  0x8c022f54
 * called by: CMushroomerBody_AwayFrom, Class_1299f8_m4_019588, Class_12ad14_m1_0a09e8, FUN_8c017900, FUN_8c0185a4,
 * FUN_8c031764, FUN_8c031eb0, FUN_8c0332b4 (+59 more)
 */
double *Vec3_length(double *a0, u32 a1, u32 a2, u32 a3) {
    float fVar1;
    u64 in_dr0;
    double dVar2;
    float in_fr15;
    u32 in_fr14;
    char cVar3;
    char cVar4;

    cVar4 = '\0';
    cVar3 = '\0';
    Vec3_length_sq(a0, a1, a2, a3);
    if (cVar4 == '\0') {
        in_fr15 = (float)((u64)in_dr0 >> 0x20);
        fVar1 = in_fr15;
    } else {
        fVar1 = (float)in_dr0;
    }
    if (fVar1 != 0.0) {
        if (cVar4 == '\0') {
            dVar2 = (double)CONCAT44(*(u32 *)a0, fVar1);
        } else {
            dVar2 = *a0;
        }
        if (cVar3 == '\0') {
            dVar2 = (double)CONCAT44((float)((u64)dVar2 >> 0x20) / in_fr15, SUB84(dVar2, 0));
        } else {
            dVar2 = dVar2 / (double)CONCAT44(in_fr14, in_fr15);
        }
        if (cVar4 == '\0') {
            *(int *)a0 = (int)((u64)dVar2 >> 0x20);
            dVar2 = (double)CONCAT44(*(u32 *)((int)a0 + 4), SUB84(dVar2, 0));
        } else {
            *a0 = dVar2;
            dVar2 = *(double *)((int)a0 + 4);
        }
        if (cVar3 == '\0') {
            dVar2 = (double)CONCAT44((float)((u64)dVar2 >> 0x20) / in_fr15, SUB84(dVar2, 0));
        } else {
            dVar2 = dVar2 / (double)CONCAT44(in_fr14, in_fr15);
        }
        if (cVar4 == '\0') {
            *(int *)((int)a0 + 4) = (int)((u64)dVar2 >> 0x20);
            dVar2 = (double)CONCAT44(*(u32 *)(a0 + 1), SUB84(dVar2, 0));
        } else {
            *(double *)((int)a0 + 4) = dVar2;
            dVar2 = a0[1];
        }
        if (cVar3 == '\0') {
            dVar2 = (double)CONCAT44((float)((u64)dVar2 >> 0x20) / in_fr15, SUB84(dVar2, 0));
        } else {
            dVar2 = dVar2 / (double)CONCAT44(in_fr14, in_fr15);
        }
        if (cVar4 == '\0') {
            *(int *)(a0 + 1) = (int)((u64)dVar2 >> 0x20);
        } else {
            a0[1] = dVar2;
        }
    }
    return a0;
}

/*
 * Vec3_distance_sq  0x8c022fc0
 * squared distance between two points
 * called by: FUN_8c017490, FUN_8c017630, FUN_8c031764, FUN_8c031bb4, FUN_8c032d48, FUN_8c048f8c, FUN_8c049b68,
 * FUN_8c04b168 (+41 more)
 */
u32 Vec3_distance_sq(u32 a0, u32 a1, u32 a2, u32 a3) {
    u32 ar5_00;
    u64 in_dr0;
    u32 uVar1;
    char cVar2;
    u32 auStack_28[4];
    u8 auStack_18[24];

    uVar1 = (u32)((u64)in_dr0 >> 0x20);
    cVar2 = '\0';
    Vec3_sub(a1, a0, a2, a3, auStack_28);
    Vec3_ctor_copy(auStack_18, auStack_28, a2, a3);
    ar5_00 = 0xffffffff;
    Vec3_dtor(auStack_28, 0xffffffff, a2, a3);
    Vec3_length_sq(auStack_18, ar5_00, a2, a3);
    if (cVar2 != '\0') {
        auStack_28[0] = uVar1;
    }
    Vec3_dtor(auStack_18, 0xffffffff, a2, a3);
    return 0xc;
}

/*
 * FUN_8c023040  0x8c023040
 * called by: FUN_8c0e0f48, FUN_8c0e1398, FUN_8c0e2a14, FUN_8c0e3210
 */
u32 FUN_8c023040(u32 a0, u32 a1, u32 a2, u32 a3) {
    u32 ar5_00;
    u64 in_dr0;
    u32 uVar1;
    char cVar2;
    u32 auStack_38[4];
    u8 auStack_28[16];
    u8 auStack_18[24];

    uVar1 = (u32)((u64)in_dr0 >> 0x20);
    cVar2 = '\0';
    Vec3_ctor_xyz(auStack_18, a1, a2, a3);
    Vec3_sub(auStack_18, a0, a2, a3, auStack_38);
    Vec3_ctor_copy(auStack_28, auStack_38, a2, a3);
    ar5_00 = 0xffffffff;
    Vec3_dtor(auStack_38, 0xffffffff, a2, a3);
    Vec3_length_sq(auStack_28, ar5_00, a2, a3);
    if (cVar2 != '\0') {
        auStack_38[0] = uVar1;
    }
    Vec3_dtor(auStack_28, 0xffffffff, a2, a3);
    Vec3_dtor(auStack_18, 0xffffffff, a2, a3);
    return 0x14;
}

/*
 * Vec3_make  0x8c0230f0
 * builds a Vec3 from x, y, z into the caller's return slot
 * called by: CMushroomerBody_AwayFrom, FUN_8c0231c8, FUN_8c02327c, FUN_8c023334, FUN_8c031764, FUN_8c0332b4,
 * FUN_8c03c94c, FUN_8c03f4a4 (+71 more)
 */
u32 Vec3_make(u32 unused_a0, u32 a1, u32 a2, u32 a3, u32 s0) {
    u8 auStack_18[20];

    Vec3_ctor_xyz(auStack_18, a1, a2, a3);
    Vec3_ctor_copy(s0, auStack_18, a2, a3);
    Vec3_dtor(auStack_18, 0xffffffff, a2, a3);
    return 0;
}

/*
 * FUN_8c023138  0x8c023138
 * called by: FUN_8c0a8f94, FUN_8c0aa11c, FUN_8c0ab0d8
 */
u32 FUN_8c023138(u32 unused_a0, u32 a1, u32 a2, u32 a3, u32 s0) {
    u8 auStack_18[20];

    Vec3_ctor_xyz(auStack_18, a1, a2, a3);
    Vec3_ctor_copy(s0, auStack_18, a2, a3);
    Vec3_dtor(auStack_18, 0xffffffff, a2, a3);
    return 0;
}

/*
 * FUN_8c023180  0x8c023180
 * called by: FUN_8c0a8f94
 */
u32 FUN_8c023180(u32 unused_a0, u32 a1, u32 a2, u32 a3, u32 s0) {
    u8 auStack_18[20];

    Vec3_ctor_xyz(auStack_18, a1, a2, a3);
    Vec3_ctor_copy(s0, auStack_18, a2, a3);
    Vec3_dtor(auStack_18, 0xffffffff, a2, a3);
    return 0;
}

/*
 * FUN_8c0231c8  0x8c0231c8
 * called by: FUN_8c0232e8, FUN_8c02374c, FUN_8c0238b4, FUN_8c02a2b8, FUN_8c031ab4, FUN_8c0332b4, FUN_8c03c94c,
 * FUN_8c03f4a4 (+11 more)
 */
u32 *FUN_8c0231c8(int a0, u32 a1, u32 a2, u32 a3) {
    u32 *puVar1;
    u32 ar5_00;
    float fVar2;
    u64 in_dr0;
    bool bVar3;
    char cVar4;
    char cVar5;
    u8 auStack_2c[16];
    u8 auStack_1c[20];

    cVar5 = '\0';
    cVar4 = '\0';
    Vec3_make(a0, a1, a2, a3, auStack_1c);
    Vec3_length_sq(auStack_1c, a1, a2, a3);
    if (cVar5 == '\0') {
        in_dr0 = in_dr0 >> 0x20;
    }
    fVar2 = (float)in_dr0;
    bVar3 = fVar2 == 0.0;
    ar5_00 = 0xffffffff;
    Vec3_dtor(auStack_1c, 0xffffffff, a2, a3);
    if (bVar3) {
        puVar1 = (u32 *)&g_8c023270;
    } else {
        Vec3_make(a0, ar5_00, a2, a3, auStack_2c);
        Vec3_cos_angle(a0, auStack_2c, a2, a3);
        puVar1 = (u32 *)Vec3_dtor(auStack_2c, 0xffffffff, a2, a3);
    }
    if (cVar5 == '\0') {
        fVar2 = *(float *)(a0 + 4);
    }
    if (cVar4 == '\0' && 0.0 < fVar2) {
        puVar1 = &g_8c023278;
    }
    return puVar1;
}

/*
 * FUN_8c02327c  0x8c02327c
 * called by: FUN_8c023334, FUN_8c02374c, FUN_8c0238b4, FUN_8c02a2b8, FUN_8c031ab4, FUN_8c04dd34, FUN_8c075ef4
 */
u32 *FUN_8c02327c(float *a0, u32 a1, u32 a2, u32 a3) {
    u64 uVar1;
    u32 *puVar2;
    float fVar3;
    u64 in_dr0;
    char cVar4;
    char cVar5;
    u64 uStack_20;

    cVar5 = '\0';
    cVar4 = '\0';
    Vec3_make(a0, a1, a2, a3, (int)&uStack_20 + 4);
    Vec3_cos_angle(&g_8c1259a8, (int)&uStack_20 + 4, a2, a3);
    uVar1 = in_dr0;
    if (cVar5 == '\0') {
        uStack_20 = CONCAT44(uStack_20._4_4_, (int)((u64)in_dr0 >> 0x20));
        uVar1 = uStack_20;
    }
    uStack_20 = uVar1;
    puVar2 = (u32 *)Vec3_dtor((int)&uStack_20 + 4, 0xffffffff, a2, a3);
    fVar3 = (float)in_dr0;
    if (cVar5 == '\0') {
        fVar3 = *a0;
    }
    if (cVar4 == '\0' && fVar3 < 0.0) {
        puVar2 = &g_8c0232e4;
    }
    return puVar2;
}

/*
 * FUN_8c0232e8  0x8c0232e8
 * called by: FUN_8c092884, FUN_8c0a3dc0
 */
u32 FUN_8c0232e8(u32 a0, u32 a1, u32 a2, u32 a3) {
    u32 uVar1;
    float extraout_fr1;
    float extraout_fr0;
    float extraout_fr0_00;
    float in_fr15;
    float fVar2;
    char cVar3;
    char cVar4;

    cVar4 = '\0';
    cVar3 = '\0';
    uVar1 = 2;
    FUN_8c0231c8(a1, a1, a2, a3);
    if (cVar4 == '\0') {
        in_fr15 = extraout_fr0;
    }
    FUN_8c0231c8(a0, a1, a2, a3);
    fVar2 = extraout_fr1;
    if (cVar4 == '\0') {
        fVar2 = in_fr15;
    }
    if (cVar3 == '\0' && fVar2 < extraout_fr0_00) {
        uVar1 = 1;
    }
    return uVar1;
}

/*
 * FUN_8c023334  0x8c023334
 * called by: FUN_8c0332b4, FUN_8c03c94c, FUN_8c03f4a4, FUN_8c046684, FUN_8c049b68, FUN_8c04b168, FUN_8c04c314,
 * FUN_8c04e2d0 (+23 more)
 */
u32 FUN_8c023334(u32 a0, u32 a1, u32 a2, u32 a3) {
    float fVar1;
    u32 uVar2;
    float fVar3;
    u64 in_dr0;
    code *pcVar4;
    char cVar5;
    char cVar6;
    float afStack_6c[4];
    u8 auStack_5c[12];
    u8 auStack_50[16];
    u8 auStack_40[16];
    u8 auStack_30[16];
    u8 auStack_20[20];
    u32 uStack_c;

    fVar3 = (float)((u64)in_dr0 >> 0x20);
    cVar6 = '\0';
    cVar5 = '\0';
    uStack_c = 1;
    uVar2 = a1;
    FUN_8c02327c(a1, a1, a2, a3);
    fVar1 = fVar3;
    if (cVar6 == '\0') {
        fVar1 = afStack_6c[0];
    }
    afStack_6c[0] = fVar1;
    FUN_8c02327c(a0, uVar2, a2, a3);
    Vec3_make(a0, uVar2, a2, a3, auStack_40);
    Vec3_ctor_copy(auStack_20, auStack_40, a2, a3);
    uVar2 = 0xffffffff;
    Vec3_dtor(auStack_40, 0xffffffff, a2, a3);
    Vec3_make(a1, uVar2, a2, a3, auStack_50);
    Vec3_ctor_copy(auStack_30, auStack_50, a2, a3);
    uVar2 = 0xffffffff;
    Vec3_dtor(auStack_50, 0xffffffff, a2, a3);
    Vec3_set_xyz(auStack_5c, uVar2, a2, a3);
    FUN_8c023484(auStack_20, auStack_5c, a2, a3, afStack_6c);
    Vec3_assign(auStack_20, afStack_6c, a2, a3);
    Vec3_dtor(afStack_6c, 0xffffffff, a2, a3);
    object_dtor_delete(auStack_5c, 0xffffffff, a2, a3);
    Vec3_cos_angle(auStack_20, auStack_30, a2, a3);
    if (cVar6 == '\0') {
        pcVar4 = (code *)0x42b40000;
    } else {
        fVar3 = 90.0;
        pcVar4 = Vec3_set_xyz;
    }
    if (cVar5 == '\0' && (float)pcVar4 < fVar3) {
        uVar2 = 4;
    } else {
        uVar2 = 3;
    }
    Vec3_dtor(auStack_30, 0xffffffff, a2, a3);
    Vec3_dtor(auStack_20, 0xffffffff, a2, a3);
    return uVar2;
}

/*
 * FUN_8c023484  0x8c023484
 * called by: Class_129cbc_m1_031598, Class_12b2ac_m1_0aff3c, FUN_8c023334, FUN_8c031eb0, FUN_8c03263c, FUN_8c032d48,
 * FUN_8c036adc, FUN_8c03c94c (+64 more)
 */
u32 FUN_8c023484(u64 *a0, u32 *a1, u32 a2, u32 a3, u32 s0) {
    u32 *ar5_00;
    u8 *ar6_00;
    float fVar1;
    double dVar2;
    int ar7_00;
    int ar6_01;
    int ar5_01;
    char cVar3;
    char cVar4;
    u32 in_stack_ffffff8c;
    u8 auStack_64[12];
    u32 uStack_58;
    u32 uStack_54;
    u32 uStack_50;
    u32 auStack_4c[17];

    cVar4 = '\0';
    cVar3 = '\0';
    ar5_00 = a1;
    Vec3_ctor_zero(&stack0xffffff8c, a1, a2);
    if (cVar4 == '\0') {
        uStack_58 = *(u32 *)a0;
        uStack_54 = *(u32 *)((int)a0 + 4);
        uStack_50 = *(u32 *)(a0 + 1);
    } else {
        uStack_58 = (u32)*a0;
        uStack_54 = (u32) * (u64 *)((int)a0 + 4);
        uStack_50 = (u32)a0[1];
        auStack_4c[0] = (u32)((u64)a0[1] >> 0x20);
    }
    njGetMatrix(auStack_4c, ar5_00, a2, a3, in_stack_ffffff8c);
    if (cVar4 == '\0') {
        dVar2 = (double)CONCAT44(0x47800000, a1[2]);
    } else {
        dVar2 = 1.4411521878487204e+18;
    }
    if (cVar3 == '\0') {
        fVar1 = SUB84(dVar2, 0) * (float)((u64)dVar2 >> 0x20);
    } else {
        fVar1 = SUB84(dVar2 * dVar2, 0);
    }
    if (cVar4 == '\0') {
        dVar2 = (double)CONCAT44(0x43b40000, fVar1);
    } else {
        dVar2 = -3.739346301775294e-250;
    }
    if (cVar3 == '\0') {
        ar7_00 = (int)(SUB84(dVar2, 0) / (float)((u64)dVar2 >> 0x20));
    } else {
        ar7_00 = (int)(dVar2 / dVar2);
    }
    if (cVar4 == '\0') {
        dVar2 = (double)CONCAT44(0x47800000, a1[1]);
    } else {
        dVar2 = 1.4411521878487204e+18;
    }
    if (cVar3 == '\0') {
        fVar1 = SUB84(dVar2, 0) * (float)((u64)dVar2 >> 0x20);
    } else {
        fVar1 = SUB84(dVar2 * dVar2, 0);
    }
    if (cVar4 == '\0') {
        dVar2 = (double)CONCAT44(0x43b40000, fVar1);
    } else {
        dVar2 = -3.739346301775294e-250;
    }
    if (cVar3 == '\0') {
        ar6_01 = (int)(SUB84(dVar2, 0) / (float)((u64)dVar2 >> 0x20));
    } else {
        ar6_01 = (int)(dVar2 / dVar2);
    }
    if (cVar4 == '\0') {
        dVar2 = (double)CONCAT44(0x47800000, *a1);
    } else {
        dVar2 = 1.4411521878487204e+18;
    }
    if (cVar3 == '\0') {
        fVar1 = SUB84(dVar2, 0) * (float)((u64)dVar2 >> 0x20);
    } else {
        fVar1 = SUB84(dVar2 * dVar2, 0);
    }
    if (cVar4 == '\0') {
        dVar2 = (double)CONCAT44(0x43b40000, fVar1);
    } else {
        dVar2 = -3.739346301775294e-250;
    }
    if (cVar3 == '\0') {
        ar5_01 = (int)(SUB84(dVar2, 0) / (float)((u64)dVar2 >> 0x20));
    } else {
        ar5_01 = (int)(dVar2 / dVar2);
    }
    FUN_8c256b0c(auStack_4c, ar5_01, ar6_01, ar7_00, in_stack_ffffff8c);
    ar6_00 = auStack_64;
    FUN_8c21279c(auStack_4c, &uStack_58, ar6_00, ar7_00, in_stack_ffffff8c);
    Vec3_ctor_copy(s0, &stack0xffffff8c, ar6_00, ar7_00);
    Vec3_dtor(&stack0xffffff8c, 0xffffffff, ar6_00, ar7_00);
    return 0;
}

/*
 * FUN_8c023570  0x8c023570
 * called by: FUN_8c0d294c
 */
u32 FUN_8c023570(u64 *a0, u32 a1, u32 a2, u32 unused_a3, u32 s0) {
    u8 *ar6_00;
    float fVar1;
    double dVar2;
    u32 in_fr5;
    u32 in_fr4;
    u32 in_fr6;
    int ar7_00;
    int ar6_01;
    int ar5_00;
    char cVar3;
    char cVar4;
    u8 auStack_70[12];
    u8 auStack_60[12];
    u32 uStack_54;
    u32 uStack_50;
    u32 uStack_4c;
    u32 auStack_48[17];

    cVar4 = '\0';
    cVar3 = '\0';
    Vec3_ctor_zero(auStack_70, a1, a2);
    if (cVar4 == '\0') {
        uStack_54 = *(u32 *)a0;
        uStack_50 = *(u32 *)((int)a0 + 4);
        uStack_4c = *(u32 *)(a0 + 1);
    } else {
        uStack_54 = (u32)*a0;
        uStack_50 = (u32) * (u64 *)((int)a0 + 4);
        uStack_4c = (u32)a0[1];
        auStack_48[0] = (u32)((u64)a0[1] >> 0x20);
    }
    njGetMatrix(auStack_48, a1, a2, unused_a3, in_fr4);
    if (cVar4 == '\0') {
        dVar2 = (double)CONCAT44(0x47800000, in_fr6);
    } else {
        dVar2 = 1.4411521878487204e+18;
    }
    if (cVar3 == '\0') {
        fVar1 = SUB84(dVar2, 0) * (float)((u64)dVar2 >> 0x20);
    } else {
        fVar1 = SUB84(dVar2 * dVar2, 0);
    }
    if (cVar4 == '\0') {
        dVar2 = (double)CONCAT44(0x43b40000, fVar1);
    } else {
        dVar2 = -3.739346301775294e-250;
    }
    if (cVar3 == '\0') {
        ar7_00 = (int)(SUB84(dVar2, 0) / (float)((u64)dVar2 >> 0x20));
    } else {
        ar7_00 = (int)(dVar2 / dVar2);
    }
    if (cVar4 == '\0') {
        dVar2 = (double)CONCAT44(0x47800000, in_fr5);
    } else {
        dVar2 = 1.4411521878487204e+18;
    }
    if (cVar3 == '\0') {
        fVar1 = SUB84(dVar2, 0) * (float)((u64)dVar2 >> 0x20);
    } else {
        fVar1 = SUB84(dVar2 * dVar2, 0);
    }
    if (cVar4 == '\0') {
        dVar2 = (double)CONCAT44(0x43b40000, fVar1);
    } else {
        dVar2 = -3.739346301775294e-250;
    }
    if (cVar3 == '\0') {
        ar6_01 = (int)(SUB84(dVar2, 0) / (float)((u64)dVar2 >> 0x20));
    } else {
        ar6_01 = (int)(dVar2 / dVar2);
    }
    if (cVar4 == '\0') {
        dVar2 = (double)CONCAT44(0x47800000, in_fr4);
    } else {
        dVar2 = 1.4411521878487204e+18;
    }
    if (cVar3 == '\0') {
        fVar1 = SUB84(dVar2, 0) * (float)((u64)dVar2 >> 0x20);
    } else {
        fVar1 = SUB84(dVar2 * dVar2, 0);
    }
    if (cVar4 == '\0') {
        dVar2 = (double)CONCAT44(0x43b40000, fVar1);
    } else {
        dVar2 = -3.739346301775294e-250;
    }
    if (cVar3 == '\0') {
        ar5_00 = (int)(SUB84(dVar2, 0) / (float)((u64)dVar2 >> 0x20));
    } else {
        ar5_00 = (int)(dVar2 / dVar2);
    }
    FUN_8c256b0c(auStack_48, ar5_00, ar6_01, ar7_00, in_fr4);
    ar6_00 = auStack_60;
    FUN_8c21279c(auStack_48, &uStack_54, ar6_00, ar7_00, in_fr4);
    if (cVar4 != '\0') {
    }
    Vec3_ctor_copy(s0, auStack_70, ar6_00, ar7_00);
    Vec3_dtor(auStack_70, 0xffffffff, ar6_00, ar7_00);
    return 0;
}

/*
 * FUN_8c023668  0x8c023668
 * called by: FUN_8c0d0d1c
 */
u32 FUN_8c023668(u64 *a0, u32 unused_a1, u32 unused_a2, u32 unused_a3, u32 s0) {
    u32 uVar1;
    u32 *ar6_00;
    float fVar2;
    double dVar3;
    u32 in_fr5;
    u32 in_fr4;
    u32 in_fr6;
    int ar7_00;
    int ar6_01;
    int ar5_00;
    char cVar4;
    char cVar5;
    u32 uStack_60;
    u32 uStack_5c;
    u32 uStack_58;
    u32 uStack_54;
    u32 uStack_50;
    u32 uStack_4c;
    u8 auStack_48[68];

    cVar5 = '\0';
    cVar4 = '\0';
    uStack_54 = *(u32 *)a0;
    uStack_50 = *(u32 *)((int)a0 + 4);
    uStack_4c = *(u32 *)(a0 + 1);
    njGetMatrix(auStack_48, unused_a1, unused_a2, unused_a3, in_fr4);
    if (cVar5 == '\0') {
        dVar3 = (double)CONCAT44(0x47800000, in_fr6);
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
        dVar3 = (double)CONCAT44(0x47800000, in_fr5);
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
        dVar3 = (double)CONCAT44(0x47800000, in_fr4);
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
    FUN_8c256b0c(auStack_48, ar5_00, ar6_01, ar7_00, in_fr4);
    ar6_00 = &uStack_60;
    FUN_8c21279c(auStack_48, &uStack_54, ar6_00, ar7_00, in_fr4);
    if (cVar5 == '\0') {
        *(u32 *)a0 = uStack_60;
        *(u32 *)((int)a0 + 4) = uStack_5c;
        *(u32 *)(a0 + 1) = uStack_58;
    } else {
        *a0 = CONCAT44(uStack_5c, uStack_60);
        *(u64 *)((int)a0 + 4) = CONCAT44(uStack_58, uStack_5c);
        a0[1] = CONCAT44(uStack_54, uStack_58);
    }
    uVar1 = Vec3_ctor_copy(s0, a0, ar6_00, ar7_00);
    return uVar1;
}

/*
 * FUN_8c02374c  0x8c02374c
 * called by: FUN_8c031eb0, FUN_8c03263c, FUN_8c03c94c, FUN_8c0507c0, FUN_8c082c50, FUN_8c093aec, FUN_8c093e80,
 * FUN_8c094514 (+2 more)
 */
u32 FUN_8c02374c(u32 a0, u32 a1, u32 a2, u32 a3) {
    u32 *puVar1;
    u32 *puVar2;
    u32 ar7_00;
    float fVar3;
    u32 uVar4;
    double in_dr0;
    u64 uVar5;
    double dVar6;
    float fVar7;
    u32 in_fr4;
    u32 in_fr15;
    double dVar8;
    int iVar9;
    int ar5_00;
    char cVar10;
    char cVar11;
    u32 in_stack_00000000;
    u32 uStack_80;
    u32 auStack_78[3];
    u32 uStack_68;
    u32 uStack_64;
    u32 uStack_60;
    u32 uStack_5c;
    u32 uStack_58;
    u32 uStack_54;
    u32 auStack_50[17];

    cVar11 = '\0';
    cVar10 = '\0';
    FUN_8c0231c8(a0, a1, a2, a3);
    uVar4 = (u32)((u64)in_dr0 >> 0x20);
    if (cVar11 == '\0') {
        in_fr15 = uVar4;
        uVar4 = auStack_78[0];
    }
    auStack_78[0] = uVar4;
    FUN_8c02327c(a0, a1, a2, a3);
    uStack_80 = SUB84(in_dr0, 0);
    uStack_5c = uStack_80;
    dVar8 = in_dr0;
    if (cVar11 == '\0') {
        uStack_5c = 0;
        dVar8 = (double)CONCAT44((int)((u64)in_dr0 >> 0x20), in_fr15);
    }
    uVar5 = (u64)in_dr0 & 0xffffffff;
    if (cVar11 == '\0') {
        uStack_58 = 0;
    } else {
        uStack_54 = 0;
        uStack_58 = uStack_80;
    }
    Vec3_length_sq(a0, a1, a2, a3);
    uVar4 = (u32)(uVar5 >> 0x20);
    uStack_54 = uVar4;
    if (cVar11 != '\0') {
        uStack_54 = (u32)uVar5;
        auStack_50[0] = uVar4;
    }
    njGetMatrix(auStack_50, a1, a2, a3, in_fr4);
    if (cVar11 == '\0') {
        dVar6 = (double)CONCAT44(0x47800000, in_fr4);
    } else {
        dVar6 = 1.4411521878487204e+18;
    }
    if (cVar10 == '\0') {
        fVar3 = SUB84(dVar6, 0) * (float)((u64)dVar6 >> 0x20);
    } else {
        fVar3 = SUB84(dVar6 * dVar6, 0);
    }
    if (cVar11 == '\0') {
        dVar6 = (double)CONCAT44(0x43b40000, fVar3);
    } else {
        dVar6 = -3.7389520302648205e-250;
    }
    if (cVar10 == '\0') {
        fVar7 = (float)((u64)dVar6 >> 0x20);
        fVar3 = SUB84(dVar6, 0) / fVar7;
        dVar6 = (double)CONCAT44(fVar7, fVar3);
        iVar9 = (int)fVar3;
    } else {
        dVar6 = dVar6 / dVar6;
        iVar9 = (int)dVar6;
    }
    uVar4 = SUB84(dVar6, 0);
    FUN_8c256a78(auStack_50, iVar9, a2, a3, in_fr4);
    puVar2 = &uStack_68;
    puVar1 = &uStack_5c;
    FUN_8c21279c(auStack_50, puVar1, puVar2, a3, in_fr4);
    uStack_5c = uStack_68;
    uStack_58 = uStack_64;
    uStack_54 = uStack_60;
    njGetMatrix(auStack_50, puVar1, puVar2, a3, in_fr4);
    ar7_00 = 0;
    if (cVar11 == '\0') {
        dVar6 = (double)CONCAT44(0x47800000, uVar4);
    } else {
        dVar6 = 1.4411521878487204e+18;
    }
    if (cVar10 == '\0') {
        dVar8 = (double)CONCAT44((float)((u64)dVar8 >> 0x20) * (float)((u64)dVar6 >> 0x20), SUB84(dVar8, 0));
    } else {
        dVar8 = dVar8 * dVar6;
    }
    if (cVar11 == '\0') {
        dVar6 = (double)CONCAT44(0x43b40000, SUB84(dVar6, 0));
    } else {
        dVar6 = -3.7389520302648205e-250;
    }
    if (cVar10 == '\0') {
        fVar3 = (float)((u64)dVar8 >> 0x20) / (float)((u64)dVar6 >> 0x20);
        dVar8 = (double)CONCAT44(fVar3, SUB84(dVar8, 0));
        iVar9 = (int)fVar3;
    } else {
        dVar8 = dVar8 / dVar6;
        fVar3 = (float)((u64)dVar8 >> 0x20);
        iVar9 = (int)dVar8;
    }
    if (cVar11 == '\0') {
        dVar6 = (double)CONCAT44(0x47800000, SUB84(dVar6, 0));
    } else {
        dVar6 = 1.4411521878487204e+18;
    }
    if (cVar10 == '\0') {
        dVar8 = (double)CONCAT44(fVar3, SUB84(dVar8, 0) * (float)((u64)dVar6 >> 0x20));
    } else {
        dVar8 = dVar8 * dVar6;
    }
    if (cVar11 == '\0') {
        dVar6 = (double)CONCAT44(0x43b40000, SUB84(dVar6, 0));
    } else {
        dVar6 = -3.7389520302648205e-250;
    }
    if (cVar10 == '\0') {
        ar5_00 = (int)(SUB84(dVar8, 0) / (float)((u64)dVar6 >> 0x20));
    } else {
        ar5_00 = (int)(dVar8 / dVar6);
    }
    FUN_8c256b0c(auStack_50, ar5_00, iVar9, 0, in_fr4);
    puVar2 = &uStack_68;
    puVar1 = &uStack_5c;
    FUN_8c21279c(auStack_50, puVar1, puVar2, ar7_00, in_fr4);
    Vec3_ctor_zero(auStack_78, puVar1, puVar2);
    if (cVar11 != '\0') {
    }
    Vec3_ctor_copy(in_stack_00000000, auStack_78, puVar2, ar7_00);
    Vec3_dtor(auStack_78, 0xffffffff, puVar2, ar7_00);
    return 0;
}

/*
 * FUN_8c0238b4  0x8c0238b4
 * called by: FUN_8c097fcc, FUN_8c0b3604
 */
u32 FUN_8c0238b4(u32 a0, u32 a1, u32 a2, u32 a3) {
    u32 *ar5_00;
    u8 *ar6_00;
    float fVar1;
    u64 in_dr0;
    u32 uVar3;
    u32 uVar4;
    double dVar2;
    u32 in_fr4;
    int ar7_00;
    int ar6_01;
    int iVar5;
    char cVar6;
    char cVar7;
    u32 in_stack_00000000;
    u32 auStack_7c[3];
    u8 auStack_6c[12];
    u32 uStack_60;
    u32 uStack_58;
    u32 auStack_54[16];
    u32 uStack_14;
    u32 uStack_10;
    u32 uStack_c;

    cVar7 = '\0';
    cVar6 = '\0';
    Vec3_set_zero(&uStack_14);
    FUN_8c0231c8(a0, a1, a2, a3);
    uStack_14 = (u32)in_dr0;
    uVar3 = (u32)((u64)in_dr0 >> 0x20);
    uVar4 = uVar3;
    if (cVar7 == '\0') {
        uVar4 = auStack_7c[0];
        uStack_14 = uVar3;
        uVar3 = uStack_10;
    }
    uStack_10 = uVar3;
    auStack_7c[0] = uVar4;
    FUN_8c02327c(a0, a1, a2, a3);
    uVar4 = (u32)((u64)in_dr0 >> 0x20);
    uStack_10 = (u32)in_dr0;
    if (cVar7 == '\0') {
        uStack_60 = 0;
        uStack_58 = 0x3f800000;
        uStack_10 = uVar4;
    } else {
        auStack_54[0] = 0x3f800000;
        uStack_58 = uStack_10;
        uStack_60 = uStack_10;
        uStack_c = uVar4;
    }
    njGetMatrix(auStack_54, a1, a2, a3, in_fr4);
    if (cVar7 == '\0') {
        dVar2 = (double)CONCAT44(0x47800000, uStack_c);
    } else {
        dVar2 = 1.4411521878487204e+18;
    }
    if (cVar6 == '\0') {
        fVar1 = SUB84(dVar2, 0) * (float)((u64)dVar2 >> 0x20);
    } else {
        fVar1 = SUB84(dVar2 * dVar2, 0);
    }
    if (cVar7 == '\0') {
        dVar2 = (double)CONCAT44(0x43b40000, fVar1);
    } else {
        dVar2 = -3.739346301775294e-250;
    }
    if (cVar6 == '\0') {
        ar7_00 = (int)(SUB84(dVar2, 0) / (float)((u64)dVar2 >> 0x20));
    } else {
        ar7_00 = (int)(dVar2 / dVar2);
    }
    if (cVar7 == '\0') {
        dVar2 = (double)CONCAT44(0x47800000, uStack_10);
    } else {
        dVar2 = 1.4411521878487204e+18;
    }
    if (cVar6 == '\0') {
        fVar1 = SUB84(dVar2, 0) * (float)((u64)dVar2 >> 0x20);
    } else {
        fVar1 = SUB84(dVar2 * dVar2, 0);
    }
    if (cVar7 == '\0') {
        dVar2 = (double)CONCAT44(0x43b40000, fVar1);
    } else {
        dVar2 = -3.739346301775294e-250;
    }
    if (cVar6 == '\0') {
        ar6_01 = (int)(SUB84(dVar2, 0) / (float)((u64)dVar2 >> 0x20));
    } else {
        ar6_01 = (int)(dVar2 / dVar2);
    }
    if (cVar7 == '\0') {
        dVar2 = (double)CONCAT44(0x47800000, uStack_14);
    } else {
        dVar2 = 1.4411521878487204e+18;
    }
    if (cVar6 == '\0') {
        fVar1 = SUB84(dVar2, 0) * (float)((u64)dVar2 >> 0x20);
    } else {
        fVar1 = SUB84(dVar2 * dVar2, 0);
    }
    if (cVar7 == '\0') {
        dVar2 = (double)CONCAT44(0x43b40000, fVar1);
    } else {
        dVar2 = -3.739346301775294e-250;
    }
    if (cVar6 == '\0') {
        iVar5 = (int)(SUB84(dVar2, 0) / (float)((u64)dVar2 >> 0x20));
    } else {
        iVar5 = (int)(dVar2 / dVar2);
    }
    FUN_8c256b0c(auStack_54, iVar5, ar6_01, ar7_00, in_fr4);
    if (cVar7 == '\0') {
        dVar2 = (double)CONCAT44(0x47800000, in_fr4);
    } else {
        dVar2 = 1.4411521878487204e+18;
    }
    if (cVar6 == '\0') {
        fVar1 = SUB84(dVar2, 0) * (float)((u64)dVar2 >> 0x20);
    } else {
        fVar1 = SUB84(dVar2 * dVar2, 0);
    }
    if (cVar7 == '\0') {
        dVar2 = (double)CONCAT44(0x43b40000, fVar1);
    } else {
        dVar2 = -3.739346301775294e-250;
    }
    if (cVar6 == '\0') {
        iVar5 = (int)(SUB84(dVar2, 0) / (float)((u64)dVar2 >> 0x20));
    } else {
        iVar5 = (int)(dVar2 / dVar2);
    }
    FUN_8c256ce0(auStack_54, iVar5, ar6_01, ar7_00, in_fr4);
    ar6_00 = auStack_6c;
    ar5_00 = &uStack_60;
    FUN_8c21279c(auStack_54, ar5_00, ar6_00, ar7_00, in_fr4);
    Vec3_ctor_zero(auStack_7c, ar5_00, ar6_00);
    if (cVar7 != '\0') {
    }
    Vec3_ctor_copy(in_stack_00000000, auStack_7c, ar6_00, ar7_00);
    Vec3_dtor(auStack_7c, 0xffffffff, ar6_00, ar7_00);
    object_dtor_delete(&uStack_14, 0xffffffff, ar6_00, ar7_00);
    return 0;
}

/*
 * Vec3_assign  0x8c023a14
 * called by: CMushroomerBody_AwayFrom, Class_129938_m1_0170e0, Class_129938_m2_0171f4, Class_1299f8_m3_019f00,
 * Class_1299f8_m4_019588, Class_129cbc_m1_031598, Class_12a03c_m1_03c43c, Class_12a03c_m6_03a65c (+195 more)
 */
u32 *Vec3_assign(u32 *a0, u32 *a1, u32 a2, u32 a3) {
    *a0 = *a1;
    a0[1] = a1[1];
    a0[2] = a1[2];
    return a0;
}

/*
 * Vec3_add  0x8c023a34
 * called by: Class_12a03c_m1_03c43c, Class_12a25c_m1_06f530, Class_12ad14_m1_0a09e8, Class_12b088_m1_0a6468,
 * Class_12b2ac_m1_0aff3c, FUN_8c02aba0, FUN_8c032518, FUN_8c032d48 (+66 more)
 */
u32 Vec3_add(u64 *a0, double *a1, u32 a2, u32 a3, u32 s0) {
    double dVar1;
    u64 in_xd0;
    char cVar2;
    char cVar3;
    float fStack_1c;
    float fStack_18;
    float fStack_14;
    u32 uStack_10;

    cVar3 = '\0';
    cVar2 = '\0';
    Vec3_ctor_zero(&fStack_1c, a1, a2);
    if (cVar3 == '\0') {
        dVar1 = (double)CONCAT44(*(u32 *)a1, *(u32 *)a0);
    } else {
        in_xd0 = *a0;
        dVar1 = *a1;
    }
    if (cVar2 == '\0') {
        fStack_1c = SUB84(dVar1, 0) + (float)((u64)dVar1 >> 0x20);
    } else {
        fStack_1c = SUB84(dVar1 + dVar1, 0);
    }
    if (cVar3 == '\0') {
        dVar1 = (double)CONCAT44(*(u32 *)((int)a1 + 4), *(u32 *)((int)a0 + 4));
    } else {
        fStack_1c = (float)in_xd0;
        in_xd0 = *(u64 *)((int)a0 + 4);
        dVar1 = *(double *)((int)a1 + 4);
    }
    if (cVar2 == '\0') {
        fStack_18 = SUB84(dVar1, 0) + (float)((u64)dVar1 >> 0x20);
    } else {
        fStack_18 = SUB84(dVar1 + dVar1, 0);
    }
    if (cVar3 == '\0') {
        dVar1 = (double)CONCAT44(*(u32 *)(a1 + 1), *(u32 *)(a0 + 1));
    } else {
        fStack_18 = (float)in_xd0;
        in_xd0 = a0[1];
        dVar1 = a1[1];
    }
    if (cVar2 == '\0') {
        fStack_14 = SUB84(dVar1, 0) + (float)((u64)dVar1 >> 0x20);
    } else {
        fStack_14 = SUB84(dVar1 + dVar1, 0);
    }
    if (cVar3 != '\0') {
        fStack_14 = (float)in_xd0;
        uStack_10 = (u32)((u64)in_xd0 >> 0x20);
    }
    Vec3_ctor_copy(s0, &fStack_1c, a2, a3);
    Vec3_dtor(&fStack_1c, 0xffffffff, a2, a3);
    return 0;
}

/*
 * Vec3_add_assign  0x8c023aa0
 * a0 += a1
 * called by: CAnimal_m2_02573c, CAnimal_m3_026078, Class_129808_m1_014894, Class_12b2ac_m1_0aff3c,
 * Class_12bea8_m1_0d7860, FUN_8c02a668, FUN_8c031764, FUN_8c03c94c (+30 more)
 */
float *Vec3_add_assign(float *a0, float *a1) {
    *a0 = *a0 + *a1;
    a0[1] = a0[1] + a1[1];
    a0[2] = a0[2] + a1[2];
    return a0;
}

/*
 * Vec3_sub  0x8c023ae0
 * called by: CMushroomerBody_AwayFrom, Class_1299f8_m3_019f00, FUN_8c023040, FUN_8c02f474, FUN_8c02f694, FUN_8c02f880,
 * FUN_8c031764, FUN_8c0332b4 (+76 more)
 */
u32 Vec3_sub(u64 *a0, double *a1, u32 a2, u32 a3, u32 s0) {
    double dVar1;
    u64 in_xd0;
    char cVar2;
    char cVar3;
    float fStack_1c;
    float fStack_18;
    float fStack_14;
    u32 uStack_10;

    cVar3 = '\0';
    cVar2 = '\0';
    Vec3_ctor_zero(&fStack_1c, a1, a2);
    if (cVar3 == '\0') {
        dVar1 = (double)CONCAT44(*(u32 *)a1, *(u32 *)a0);
    } else {
        in_xd0 = *a0;
        dVar1 = *a1;
    }
    if (cVar2 == '\0') {
        fStack_1c = SUB84(dVar1, 0) - (float)((u64)dVar1 >> 0x20);
    } else {
        fStack_1c = SUB84(dVar1 - dVar1, 0);
    }
    if (cVar3 == '\0') {
        dVar1 = (double)CONCAT44(*(u32 *)((int)a1 + 4), *(u32 *)((int)a0 + 4));
    } else {
        fStack_1c = (float)in_xd0;
        in_xd0 = *(u64 *)((int)a0 + 4);
        dVar1 = *(double *)((int)a1 + 4);
    }
    if (cVar2 == '\0') {
        fStack_18 = SUB84(dVar1, 0) - (float)((u64)dVar1 >> 0x20);
    } else {
        fStack_18 = SUB84(dVar1 - dVar1, 0);
    }
    if (cVar3 == '\0') {
        dVar1 = (double)CONCAT44(*(u32 *)(a1 + 1), *(u32 *)(a0 + 1));
    } else {
        fStack_18 = (float)in_xd0;
        in_xd0 = a0[1];
        dVar1 = a1[1];
    }
    if (cVar2 == '\0') {
        fStack_14 = SUB84(dVar1, 0) - (float)((u64)dVar1 >> 0x20);
    } else {
        fStack_14 = SUB84(dVar1 - dVar1, 0);
    }
    if (cVar3 != '\0') {
        fStack_14 = (float)in_xd0;
        uStack_10 = (u32)((u64)in_xd0 >> 0x20);
    }
    Vec3_ctor_copy(s0, &fStack_1c, a2, a3);
    Vec3_dtor(&fStack_1c, 0xffffffff, a2, a3);
    return 0;
}

/*
 * Vec3_sub_assign  0x8c023b4c
 * a0 -= a1
 * called by: FUN_8c08eef4, FUN_8c08f354, FUN_8c08f9e8, FUN_8c0911f0, FUN_8c091570, FUN_8c0db3bc, FUN_8c0db5c4
 */
float *Vec3_sub_assign(float *a0, float *a1) {
    *a0 = *a0 - *a1;
    a0[1] = a0[1] - a1[1];
    a0[2] = a0[2] - a1[2];
    return a0;
}

/*
 * Vec3_scale  0x8c023b8c
 * called by: CMushroomerBody_AwayFrom, Class_12a03c_m1_03c43c, Class_12a25c_m1_06f530, Class_12ad14_m1_0a09e8,
 * Class_12b088_m1_0a6468, Class_12b2ac_m1_0aff3c, FUN_8c02aba0, FUN_8c031764 (+69 more)
 */
u32 Vec3_scale(u64 *a0, double *a1, u32 a2, u32 a3, u32 s0) {
    double dVar1;
    u64 in_xd0;
    char cVar2;
    char cVar3;
    float fStack_1c;
    float fStack_18;
    float fStack_14;
    u32 uStack_10;

    cVar3 = '\0';
    cVar2 = '\0';
    Vec3_ctor_zero(&fStack_1c, a1, a2);
    if (cVar3 == '\0') {
        dVar1 = (double)CONCAT44(*(u32 *)a1, *(u32 *)a0);
    } else {
        in_xd0 = *a0;
        dVar1 = *a1;
    }
    if (cVar2 == '\0') {
        fStack_1c = SUB84(dVar1, 0) * (float)((u64)dVar1 >> 0x20);
    } else {
        fStack_1c = SUB84(dVar1 * dVar1, 0);
    }
    if (cVar3 == '\0') {
        dVar1 = (double)CONCAT44(*(u32 *)a1, *(u32 *)((int)a0 + 4));
    } else {
        fStack_1c = (float)in_xd0;
        in_xd0 = *(u64 *)((int)a0 + 4);
        dVar1 = *a1;
    }
    if (cVar2 == '\0') {
        fStack_18 = SUB84(dVar1, 0) * (float)((u64)dVar1 >> 0x20);
    } else {
        fStack_18 = SUB84(dVar1 * dVar1, 0);
    }
    if (cVar3 == '\0') {
        dVar1 = (double)CONCAT44(*(u32 *)a1, *(u32 *)(a0 + 1));
    } else {
        fStack_18 = (float)in_xd0;
        in_xd0 = a0[1];
        dVar1 = *a1;
    }
    if (cVar2 == '\0') {
        fStack_14 = SUB84(dVar1, 0) * (float)((u64)dVar1 >> 0x20);
    } else {
        fStack_14 = SUB84(dVar1 * dVar1, 0);
    }
    if (cVar3 != '\0') {
        fStack_14 = (float)in_xd0;
        uStack_10 = (u32)((u64)in_xd0 >> 0x20);
    }
    Vec3_ctor_copy(s0, &fStack_1c, a2, a3);
    Vec3_dtor(&fStack_1c, 0xffffffff, a2, a3);
    return 0;
}

/*
 * Vec3_scale_assign  0x8c023bf4
 * a0 *= *a1
 * called by: Class_12b2ac_m1_0aff3c, FUN_8c054f7c, FUN_8c0564c4, FUN_8c05af78, FUN_8c07b2d4, FUN_8c07e828,
 * FUN_8c08eef4, FUN_8c08f354 (+11 more)
 */
float *Vec3_scale_assign(float *a0, float *a1) {
    *a0 = *a0 * *a1;
    a0[1] = a0[1] * *a1;
    a0[2] = a0[2] * *a1;
    return a0;
}

/*
 * FUN_8c023c30  0x8c023c30
 * called by: Class_1299f8_m3_019f00, FUN_8c032d48, FUN_8c093e80, FUN_8c094514, FUN_8c095548, FUN_8c0967d8
 */
u32 FUN_8c023c30(u64 *a0, double *a1, u32 a2, u32 a3, u32 s0) {
    double dVar1;
    u64 in_xd0;
    char cVar2;
    char cVar3;
    float fStack_1c;
    float fStack_18;
    float fStack_14;
    u32 uStack_10;

    cVar3 = '\0';
    cVar2 = '\0';
    Vec3_ctor_zero(&fStack_1c, a1, a2);
    if (cVar3 == '\0') {
        dVar1 = (double)CONCAT44(*(u32 *)a1, *(u32 *)a0);
    } else {
        in_xd0 = *a0;
        dVar1 = *a1;
    }
    if (cVar2 == '\0') {
        fStack_1c = SUB84(dVar1, 0) / (float)((u64)dVar1 >> 0x20);
    } else {
        fStack_1c = SUB84(dVar1 / dVar1, 0);
    }
    if (cVar3 == '\0') {
        dVar1 = (double)CONCAT44(*(u32 *)a1, *(u32 *)((int)a0 + 4));
    } else {
        fStack_1c = (float)in_xd0;
        in_xd0 = *(u64 *)((int)a0 + 4);
        dVar1 = *a1;
    }
    if (cVar2 == '\0') {
        fStack_18 = SUB84(dVar1, 0) / (float)((u64)dVar1 >> 0x20);
    } else {
        fStack_18 = SUB84(dVar1 / dVar1, 0);
    }
    if (cVar3 == '\0') {
        dVar1 = (double)CONCAT44(*(u32 *)a1, *(u32 *)(a0 + 1));
    } else {
        fStack_18 = (float)in_xd0;
        in_xd0 = a0[1];
        dVar1 = *a1;
    }
    if (cVar2 == '\0') {
        fStack_14 = SUB84(dVar1, 0) / (float)((u64)dVar1 >> 0x20);
    } else {
        fStack_14 = SUB84(dVar1 / dVar1, 0);
    }
    if (cVar3 != '\0') {
        fStack_14 = (float)in_xd0;
        uStack_10 = (u32)((u64)in_xd0 >> 0x20);
    }
    Vec3_ctor_copy(s0, &fStack_1c, a2, a3);
    Vec3_dtor(&fStack_1c, 0xffffffff, a2, a3);
    return 0;
}

/*
 * FUN_8c023c98  0x8c023c98
 * called by: FUN_8c0f5fdc
 */
float *FUN_8c023c98(float *a0, float *a1) {
    *a0 = *a0 / *a1;
    a0[1] = a0[1] / *a1;
    a0[2] = a0[2] / *a1;
    return a0;
}

/*
 * FUN_8c023cd4  0x8c023cd4
 * called by: Class_12b2ac_m1_0aff3c, FUN_8c078fd0, FUN_8c07baa0, FUN_8c07bec4, FUN_8c0a3d08, FUN_8c0a861c
 */
u32 FUN_8c023cd4(float *a0, float *a1) {
    if (((*a0 == *a1) && (a0[1] == a1[1])) && (a0[2] == a1[2])) {
        return 1;
    }
    return 0;
}

/*
 * Vec3_not_equal  0x8c023d04
 * 1 unless all three components match
 * called by: FUN_8c05af78, FUN_8c05c9fc, FUN_8c071a38, FUN_8c07b2d4, FUN_8c07c5f8, FUN_8c07f268, FUN_8c08248c,
 * FUN_8c0b0ad4 (+2 more)
 */
u32 Vec3_not_equal(float *a0, float *a1) {
    if (((*a0 == *a1) && (a0[1] == a1[1])) && (a0[2] == a1[2])) {
        return 0;
    }
    return 1;
}

/*
 * Vec3_set_zero  0x8c023d34
 * called by: CSoilTank_Create, CWaterTank_CreateStage, Class_12b930_m3_0de4b0, FUN_8c016a7c, FUN_8c0199d4,
 * FUN_8c01a0cc, FUN_8c0238b4, FUN_8c02447c (+60 more)
 */
u32 *Vec3_set_zero(u32 *a0) {
    a0[2] = 0;
    a0[1] = 0;
    *a0 = 0;
    return a0;
}

/*
 * Vec3_set_xyz  0x8c023d68
 * called by: FUN_8c023334, FUN_8c031eb0, FUN_8c03263c, FUN_8c032d48, FUN_8c034574, FUN_8c034650, FUN_8c036adc,
 * FUN_8c0372a0 (+57 more)
 */
u32 *Vec3_set_xyz(u32 *a0, u32 a1, u32 a2, u32 a3) {
    u32 in_fr5;
    u32 in_fr4;
    u32 in_fr6;

    *a0 = in_fr4;
    a0[1] = in_fr5;
    a0[2] = in_fr6;
    return a0;
}

/*
 * FUN_8c023d7c  0x8c023d7c
 * called by: Class_129a24_m2_01a1d8, FUN_8c057e58, FUN_8c07d904, FUN_8c08a17c, FUN_8c0a6370, FUN_8c0a77c8,
 * FUN_8c0a8c0c, FUN_8c0a8f94 (+3 more)
 */
u32 *FUN_8c023d7c(u32 *a0, u32 a1) {
    u32 in_fr5;
    u32 in_fr4;
    u32 in_fr6;

    *a0 = in_fr4;
    a0[1] = in_fr5;
    a0[2] = in_fr6;
    return a0 + 1;
}

/*
 * vec3_copy_8c023d8c  0x8c023d8c
 * called by: Class_129938_m1_0170e0, Class_129938_m2_0171f4, Class_12a5d0_m2_08a49c, Class_12a5d0_m3_08a704,
 * Class_12b2ac_m1_0aff3c, FUN_8c032d48, FUN_8c036adc, FUN_8c0372a0 (+38 more)
 */
u32 *vec3_copy_8c023d8c(u32 *a0, u32 *a1, u32 a2, u32 a3) {
    *a0 = *a1;
    a0[1] = a1[1];
    a0[2] = a1[2];
    return a0;
}

/*
 * Vec3_set_one  0x8c023dac
 * sets x, y, z to 1.0
 * called by: FUN_8c016a7c, FUN_8c0254d0, FUN_8c04f034, FUN_8c06740c, FUN_8c077a38, FUN_8c08a17c, FUN_8c09b508,
 * FUN_8c0af2b8 (+6 more)
 */
u32 *Vec3_set_one(u32 *a0) {
    a0[2] = 0x3f800000;
    a0[1] = 0x3f800000;
    *a0 = 0x3f800000;
    return a0;
}

/*
 * FUN_8c023de0  0x8c023de0
 * called by: FUN_8c0348ac, FUN_8c0ae84c, FUN_8c0af2b8
 */
u32 *FUN_8c023de0(u32 *a0, u32 a1) {
    u32 in_fr5;
    u32 in_fr4;
    u32 in_fr6;

    *a0 = in_fr4;
    a0[1] = in_fr5;
    a0[2] = in_fr6;
    return a0;
}

/*
 * FUN_8c023df4  0x8c023df4
 * called by: FUN_8c02b058, FUN_8c04f034
 */
u32 *FUN_8c023df4(u32 *a0) {
    u32 in_fr5;
    u32 in_fr4;
    u32 in_fr6;

    *a0 = in_fr4;
    a0[1] = in_fr5;
    a0[2] = in_fr6;
    return a0 + 1;
}

/*
 * FUN_8c023e04  0x8c023e04
 * called by: Class_129938_m2_0171f4, Class_12a5d0_m2_08a49c, Class_12a5d0_m3_08a704, FUN_8c016f84, FUN_8c04f034,
 * FUN_8c06c9c8, FUN_8c06ca34, FUN_8c077a38 (+8 more)
 */
u32 *FUN_8c023e04(u32 *a0, u32 *a1) {
    *a0 = *a1;
    a0[1] = a1[1];
    a0[2] = a1[2];
    return a0;
}

/*
 * FUN_8c023e24  0x8c023e24
 * called by: FUN_8c0348ac, FUN_8c09e204, FUN_8c0f4b98
 */
u32 *FUN_8c023e24(u32 *a0, u32 *a1) {
    *a0 = *a1;
    a0[1] = a1[1];
    a0[2] = a1[2];
    return a0;
}

/*
 * noop_023e44  0x8c023e44
 * does nothing
 * called by: CAnimal_m2_02573c, Class_1299f8_m4_019588, FUN_8c0d167c
 */
u32 noop_023e44(u32 a0) {
}

/*
 * free_if_nonnull_wrap_023e4c  0x8c023e4c
 * called by: CAnimal_m2_02573c, Class_1299f8_m4_019588, FUN_8c0d167c
 */
int free_if_nonnull_wrap_023e4c(int a0, u32 a1, u32 a2, u32 a3) {
    u32 in_stack_fffffff4;

    if ((a0 != 0) && (0 < (short)a1)) {
        free_if_nonnull(a0, a1, a2, a3, CONCAT22((short)((u32)in_stack_fffffff4 >> 0x10), (short)a1));
    }
    return a0;
}

/*
 * njGetMatrix_wrap  0x8c023e7c
 * only calls njGetMatrix
 * called by: CAnimal_m2_02573c, Class_1299f8_m4_019588, FUN_8c0d167c
 */
u32 njGetMatrix_wrap(u32 a0) {
    u32 r5;
    u32 r6;
    u32 r7;
    u32 uVar1;

    uVar1 = njGetMatrix(a0, r5, r6, r7, a0);
    return uVar1;
}

/*
 * FUN_8c023e98  0x8c023e98
 * called by: FUN_8c0d167c
 */
u32 FUN_8c023e98(u32 a0, u32 a1, u32 a2, u32 a3) {
    FUN_8c255d6c(a0, a1, a2, a3, a1);
    return a0;
}

/*
 * FUN_8c023ebc  0x8c023ebc
 * called by: FUN_8c0d167c
 */
u32 FUN_8c023ebc(u32 a0) {
    u32 r6;
    u32 r7;
    u32 uVar1;
    float in_fr4;

    uVar1 = FUN_8c256a78(a0, (int)((in_fr4 * 65536.0) / 360.0), r6, r7, a0);
    return uVar1;
}

/*
 * FUN_8c023ef8  0x8c023ef8
 * called by: FUN_8c0d167c
 */
u32 FUN_8c023ef8(u32 a0) {
    u32 r6;
    u32 r7;
    u32 uVar1;
    float in_fr4;

    uVar1 = FUN_8c256ce0(a0, (int)((in_fr4 * 65536.0) / 360.0), r6, r7, a0);
    return uVar1;
}

/*
 * FUN_8c023f34  0x8c023f34
 * called by: FUN_8c0d167c
 */
u32 FUN_8c023f34(u32 a0) {
    u32 r6;
    u32 r7;
    u32 uVar1;
    float in_fr4;

    uVar1 = FUN_8c256d7c(a0, (int)((in_fr4 * 65536.0) / 360.0), r6, r7, a0);
    return uVar1;
}

/*
 * FUN_8c023f70  0x8c023f70
 * called by: CAnimal_m2_02573c
 */
u32 FUN_8c023f70(u32 a0) {
    u32 uVar1;
    float in_fr5;
    float in_fr4;
    float in_fr6;

    uVar1 = FUN_8c256b0c(a0, (int)((in_fr4 * 65536.0) / 360.0), (int)((in_fr5 * 65536.0) / 360.0),
                         (int)((in_fr6 * 65536.0) / 360.0), a0);
    return uVar1;
}

/*
 * matrix_scale_wrap_023fdc  0x8c023fdc
 * only calls matrix_scale
 * called by: CAnimal_m2_02573c
 */
u32 matrix_scale_wrap_023fdc(u32 a0, u32 a1) {
    u32 r6;
    u32 r7;
    u32 uVar1;

    uVar1 = matrix_scale(a0, a1, r6, r7, a0);
    return uVar1;
}

/*
 * FUN_8c024010  0x8c024010
 * called by: CAnimal_m2_02573c, FUN_8c0d167c
 */
void FUN_8c024010(u32 param_1, u64 *param_2, u64 *param_3) {
    u32 uStack_24;
    u32 uStack_20;
    u32 uStack_1c;
    u32 uStack_18;
    u32 uStack_14;
    u32 uStack_10;

    uStack_18 = *(u32 *)param_3;
    uStack_14 = *(u32 *)((int)param_3 + 4);
    uStack_10 = *(u32 *)(param_3 + 1);

    FUN_8c21279c(param_1, &uStack_18, &uStack_24);

    *(u32 *)param_2 = uStack_24;
    *(u32 *)((int)param_2 + 4) = uStack_20;
    *(u32 *)(param_2 + 1) = uStack_1c;

    return;
}

/*
 * FUN_8c024088  0x8c024088
 * called by: Class_1299f8_m4_019588
 */
int FUN_8c024088(int a0, u32 a1, u32 a2, u32 a3) {
    Vec3_ctor_zero(a0, a1, a2);
    Vec3_ctor_zero(a0 + 0x10, a1, a2);
    FUN_8c0241c4(a0, a1, a2, a3);
    return a0;
}

/*
 * FUN_8c0240bc  0x8c0240bc
 * called by: Class_1299f8_m4_019588
 */
u32 FUN_8c0240bc(double *a0, double *a1, float *a2, u32 a3) {
    float fVar1;
    float fVar2;
    double dVar3;
    u32 in_fr3;
    double dVar4;
    u32 in_fr15;
    double dVar5;
    u32 uVar6;
    double in_xd0;
    char cVar7;
    char cVar8;
    u32 in_stack_00000000;
    u32 uStack_30;
    u32 uStack_2c;
    float fStack_28;
    u32 uStack_24;

    cVar8 = '\0';
    cVar7 = '\0';
    fVar1 = *(float *)(a1 + 1) * a2[2];
    dVar5 = (double)CONCAT44(*(float *)a1 * *a2 + *(float *)((int)a1 + 4) * a2[1] + fVar1, in_fr15);
    Vec3_ctor_zero(&uStack_30, a1, a2);
    if (cVar8 == '\0') {
        dVar4 = (double)CONCAT44(*(u32 *)a1, in_fr3);
        dVar3 = (double)CONCAT44(*(u32 *)a0, fVar1);
    } else {
        dVar4 = *a1;
        dVar3 = *a0;
    }
    if (cVar7 == '\0') {
        dVar4 = (double)CONCAT44((float)((u64)dVar4 >> 0x20) * (float)((u64)dVar3 >> 0x20), SUB84(dVar4, 0));
    } else {
        dVar4 = dVar4 * dVar3;
    }
    if (cVar8 == '\0') {
        dVar3 = (double)CONCAT44(*(u32 *)((int)a0 + 4), *(u32 *)((int)a1 + 4));
    } else {
        in_xd0 = *(double *)((int)a1 + 4);
        dVar3 = *(double *)((int)a0 + 4);
    }
    if (cVar7 == '\0') {
        dVar4 = (double)CONCAT44((float)((u64)dVar4 >> 0x20) + SUB84(dVar3, 0) * (float)((u64)dVar3 >> 0x20),
                                 SUB84(dVar4, 0));
    } else {
        dVar4 = dVar4 + dVar3 * dVar3;
    }
    if (cVar8 == '\0') {
        dVar3 = (double)CONCAT44(*(u32 *)(a0 + 1), *(u32 *)(a1 + 1));
    } else {
        in_xd0 = a1[1];
        dVar3 = a0[1];
    }
    if (cVar7 == '\0') {
        fVar1 = SUB84(dVar3, 0) * (float)((u64)dVar3 >> 0x20);
        dVar5 = (double)CONCAT44((float)((u64)dVar5 >> 0x20) - ((float)((u64)dVar4 >> 0x20) + fVar1), SUB84(dVar5, 0));
    } else {
        fVar1 = SUB84(dVar3 * dVar3, 0);
        dVar5 = dVar5 - (dVar4 + dVar3 * dVar3);
    }
    uVar6 = (u32)((u64)dVar5 >> 0x20);
    if (cVar8 == '\0') {
        dVar4 = (double)CONCAT44(*(u32 *)a1, uVar6);
        dVar3 = (double)CONCAT44(*(u32 *)(a0 + 2), fVar1);
    } else {
        dVar4 = *a1;
        dVar3 = a0[2];
    }
    if (cVar7 == '\0') {
        dVar4 = (double)CONCAT44((float)((u64)dVar4 >> 0x20) * (float)((u64)dVar3 >> 0x20), SUB84(dVar4, 0));
    } else {
        dVar4 = dVar4 * dVar3;
    }
    if (cVar8 == '\0') {
        dVar3 = (double)CONCAT44(*(u32 *)((int)a0 + 0x14), *(u32 *)((int)a1 + 4));
    } else {
        in_xd0 = *(double *)((int)a1 + 4);
        dVar3 = *(double *)((int)a0 + 0x14);
    }
    if (cVar7 == '\0') {
        dVar4 = (double)CONCAT44((float)((u64)dVar4 >> 0x20) + SUB84(dVar3, 0) * (float)((u64)dVar3 >> 0x20),
                                 SUB84(dVar4, 0));
    } else {
        dVar4 = dVar4 + dVar3 * dVar3;
    }
    if (cVar8 == '\0') {
        dVar3 = (double)CONCAT44(*(u32 *)(a0 + 3), *(u32 *)(a1 + 1));
    } else {
        in_xd0 = a1[1];
        dVar3 = a0[3];
    }
    if (cVar7 == '\0') {
        fVar2 = (float)((u64)dVar3 >> 0x20);
        fVar1 = SUB84(dVar3, 0) * fVar2;
        dVar3 = (double)CONCAT44(fVar2, fVar1);
        fVar1 = SUB84(dVar4, 0) / ((float)((u64)dVar4 >> 0x20) + fVar1);
    } else {
        dVar3 = dVar3 * dVar3;
        fVar1 = SUB84((dVar4 + dVar3) / (dVar4 + dVar3), 0);
    }
    if (cVar8 == '\0') {
        dVar5 = (double)CONCAT44(uVar6, fVar1);
        dVar3 = (double)CONCAT44((int)((u64)dVar3 >> 0x20), *(u32 *)(a0 + 2));
    } else {
        in_xd0 = a0[2];
    }
    fVar1 = SUB84(dVar5, 0);
    if (cVar7 == '\0') {
        fVar2 = SUB84(dVar3, 0) * fVar1;
    } else {
        fVar2 = SUB84(dVar3 * dVar5, 0);
    }
    if (cVar8 == '\0') {
        dVar4 = (double)CONCAT44(*(u32 *)a0, fVar2);
    } else {
        dVar4 = *a0;
    }
    if (cVar7 == '\0') {
        fVar2 = (float)((u64)dVar4 >> 0x20);
        dVar4 = (double)CONCAT44(fVar2, SUB84(dVar4, 0) + fVar2);
    } else {
        dVar4 = dVar4 + dVar4;
    }
    if (cVar8 == '\0') {
        uStack_30 = SUB84(dVar4, 0);
        dVar4 = (double)CONCAT44((int)((u64)dVar4 >> 0x20), *(u32 *)((int)a0 + 0x14));
    } else {
        uStack_30 = SUB84(in_xd0, 0);
        in_xd0 = *(double *)((int)a0 + 0x14);
    }
    if (cVar7 == '\0') {
        fVar2 = SUB84(dVar4, 0) * fVar1;
    } else {
        fVar2 = SUB84(dVar4 * dVar5, 0);
    }
    if (cVar8 == '\0') {
        dVar4 = (double)CONCAT44(*(u32 *)((int)a0 + 4), fVar2);
    } else {
        dVar4 = *(double *)((int)a0 + 4);
    }
    if (cVar7 == '\0') {
        fVar2 = (float)((u64)dVar4 >> 0x20);
        dVar4 = (double)CONCAT44(fVar2, SUB84(dVar4, 0) + fVar2);
    } else {
        dVar4 = dVar4 + dVar4;
    }
    if (cVar8 == '\0') {
        uStack_2c = SUB84(dVar4, 0);
        dVar4 = (double)CONCAT44((int)((u64)dVar4 >> 0x20), *(u32 *)(a0 + 3));
    } else {
        uStack_2c = SUB84(in_xd0, 0);
        in_xd0 = a0[3];
    }
    if (cVar7 == '\0') {
        fVar1 = SUB84(dVar4, 0) * fVar1;
    } else {
        fVar1 = SUB84(dVar4 * dVar5, 0);
    }
    if (cVar8 == '\0') {
        dVar5 = (double)CONCAT44(*(u32 *)(a0 + 1), fVar1);
    } else {
        dVar5 = a0[1];
    }
    if (cVar7 == '\0') {
        fStack_28 = SUB84(dVar5, 0) + (float)((u64)dVar5 >> 0x20);
    } else {
        fStack_28 = SUB84(dVar5 + dVar5, 0);
    }
    if (cVar8 != '\0') {
        fStack_28 = SUB84(in_xd0, 0);
        uStack_24 = (u32)((u64)in_xd0 >> 0x20);
    }
    Vec3_ctor_copy(in_stack_00000000, &uStack_30, a2, a3);
    Vec3_dtor(&uStack_30, 0xffffffff, a2, a3);
    return 0;
}

/*
 * FUN_8c0241c4  0x8c0241c4
 * called by: FUN_8c024088
 */
u32 FUN_8c0241c4(int a0, u32 a1, u32 a2, u32 a3) {
    u32 uVar1;

    vec3_clear(a0, a1, a2, a3);
    uVar1 = vec3_clear(a0 + 0x10, a1, a2, a3);
    return uVar1;
}

/*
 * FUN_8c0241e8  0x8c0241e8
 * called by: Class_1299f8_m4_019588
 */
int FUN_8c0241e8(int a0, u32 a1, u32 a2, u32 a3) {
    Vec3_ctor_zero(a0, a1, a2);
    Vec3_ctor_zero(a0 + 0x10, a1, a2);
    FUN_8c02421c(a0, a1, a2, a3);
    return a0;
}

/*
 * FUN_8c02421c  0x8c02421c
 * called by: FUN_8c0241e8
 */
u32 FUN_8c02421c(int a0, u32 a1, u32 a2, u32 a3) {
    u32 uVar1;

    vec3_clear(a0, a1, a2, a3);
    uVar1 = vec3_clear(a0 + 0x10, a1, a2, a3);
    return uVar1;
}

/*
 * FUN_8c024240  0x8c024240
 */
u32 FUN_8c024240(u32 unused_a0, u32 a1, u32 a2, u32 a3) {
    u32 uVar1;
    u32 uVar2;
    u8 *puVar3;

    uVar1 = Vec3_ctor_xyz((&DATA_8c125988), a1, a2, a3);
    puVar3 = (&Vec3_dtor);
    uVar2 = 0x8c2792a8;
    global_list_push(uVar1, (&Vec3_dtor), 0x8c2792a8, a3);
    uVar1 = Vec3_ctor_xyz((&DATA_8c125998), puVar3, uVar2, a3);
    puVar3 = (&Vec3_dtor);
    uVar2 = 0x8c2792b4;
    global_list_push(uVar1, (&Vec3_dtor), 0x8c2792b4, a3);
    uVar1 = Vec3_ctor_xyz((&DATA_8c1259a8), puVar3, uVar2, a3);
    puVar3 = (&Vec3_dtor);
    uVar2 = 0x8c2792c0;
    global_list_push(uVar1, (&Vec3_dtor), 0x8c2792c0, a3);
    uVar2 = Vec3_ctor_xyz((&DATA_8c1259b8), puVar3, uVar2, a3);
    uVar2 = global_list_push(uVar2, (&Vec3_dtor), 0x8c2792cc, a3);
    return uVar2;
}

/*
 * FUN_8c0242e8  0x8c0242e8
 * called by: CGame_Initial
 */
u32 FUN_8c0242e8(void) {
    u32 r5;
    u32 r6;
    u32 r7;
    u32 in_PR;

    njGetMatrix(0x8c27c1ec, r5, r6, r7, in_PR);
    g_8c27d1ec = 0;
    return 0;
}

/*
 * FUN_8c02430c  0x8c02430c
 * called by: FUN_8c029af0
 */
u32 FUN_8c02430c(u32 a0, u32 unused_a1, u32 a2, u32 a3) {
    u32 uVar1;

    uVar1 = FUN_8c255d6c(g_8c27d1ec * 0x40 + 0x8c27c1ec, a0, a2, a3, a0);
    return uVar1;
}

/*
 * memmove_bytes_wrap  0x8c024340
 * only calls memmove_bytes
 * called by: FUN_8c02a568, FUN_8c02a5d4
 */
u32 memmove_bytes_wrap(u32 a0) {
    u32 uVar1;

    uVar1 = memmove_bytes(a0, g_8c27d1ec * 0x40 + 0x8c27c1ec, 0x40);
    return uVar1;
}

/*
 * memmove_bytes_wrap_024378  0x8c024378
 * only calls memmove_bytes
 * called by: FUN_8c026968
 */
u32 memmove_bytes_wrap_024378(u32 a0) {
    u32 uVar1;

    uVar1 = memmove_bytes(g_8c27d1ec * 0x40 + 0x8c27c1ec, a0, 0x40);
    return uVar1;
}

/*
 * FUN_8c0243b0  0x8c0243b0
 * called by: FUN_8c0b9fb4, FUN_8c0e8f54
 */
int FUN_8c0243b0(int a0, u32 a1, u32 a2) {
    u32 extraout_fr1;
    char cVar1;

    cVar1 = '\0';
    FUN_8c0f3e30(a0, a1, a2);
    FUN_8c02d50c(a0 + 0x4c);
    FUN_8c02ff40(a0 + 200);
    FUN_8c036058(a0 + 0xd8);
    *(u32 *)(a0 + 0xe8) = 1;
    if (cVar1 == '\0') {
        *(u32 *)(a0 + 0xec) = 0x3f800000;
    } else {
        *(u64 *)(a0 + 0xec) = CONCAT44(0x3f800000, extraout_fr1);
    }
    return a0;
}

/*
 * FUN_8c02441c  0x8c02441c
 * called by: FUN_8c0ba180
 */
int FUN_8c02441c(int a0, u32 a1, u32 a2, u32 a3) {
    u32 ar5_00;
    u32 in_stack_fffffff4;
    u32 ain0;

    ain0 = CONCAT22((short)((u32)in_stack_fffffff4 >> 0x10), (u16)a1);
    if (a0 != 0) {
        free_if_nonnull_wrap_016ac4(a0 + 0x38, 0xffffffff, a2, a3);
        object_dtor_delete(a0 + 0x2c, 0xffffffff, a2, a3);
        ar5_00 = 0xffffffff;
        Vec3_dtor(a0 + 0x1c, 0xffffffff, a2, a3);
        if (0 < (short)ain0) {
            free_if_nonnull(a0);
        }
    }
    return a0;
}

/*
 * FUN_8c02447c  0x8c02447c
 * called by: FUN_8c02452c
 */
int FUN_8c02447c(int a0) {
    u32 in_fr1;
    char cVar1;

    cVar1 = '\0';
    Vec3_set_zero(a0);
    Vec3_set_zero(a0 + 0xc);
    Vec3_set_zero(a0 + 0x18);
    if (cVar1 == '\0') {
        *(u32 *)(a0 + 0x24) = 0;
        *(u32 *)(a0 + 0x28) = 0x43660000;
        *(u32 *)(a0 + 0xc) = 0x43b40000;
        *(u32 *)(a0 + 0x10) = 0x43b40000;
        *(u32 *)(a0 + 0x14) = 0x43b40000;
        *(u32 *)(a0 + 0x18) = 0xc3b40000;
        *(u32 *)(a0 + 0x1c) = 0xc3b40000;
        *(u32 *)(a0 + 0x20) = 0xc3b40000;
    } else {
        *(u64 *)(a0 + 0x24) = (u64)in_fr1;
        *(u64 *)(a0 + 0x28) = 0x43b4000043660000;
        *(u64 *)(a0 + 0xc) = 0xc3b4000043b40000;
        *(u64 *)(a0 + 0x10) = 0xc3b4000043b40000;
        *(u64 *)(a0 + 0x14) = 0xc3b4000043b40000;
        *(u64 *)(a0 + 0x18) = 0x2402e000c3b40000;
        *(u64 *)(a0 + 0x1c) = 0x2402e000c3b40000;
        *(u64 *)(a0 + 0x20) = 0x2402e000c3b40000;
    }
    return a0;
}

/*
 * FUN_8c024508  0x8c024508
 */
u32 *FUN_8c024508(u32 *a0) {
    *a0 = 0;
    a0[1] = 0;
    return a0;
}

/*
 * FUN_8c024518  0x8c024518
 */
u32 *FUN_8c024518(u32 *a0) {
    *a0 = 0;
    a0[1] = 0;
    a0[4] = 0;
    return a0;
}

/*
 * FUN_8c02452c  0x8c02452c
 * called by: FUN_8c039124, FUN_8c08894c, FUN_8c09b210, FUN_8c09d718, FUN_8c09f060, FUN_8c0a5c90, FUN_8c0af3c4
 */
u32 *FUN_8c02452c(u32 *a0, u32 a1) {
    code *pcVar1;
    code *pcVar2;
    u32 uVar3;
    u32 in_fr1;
    char cVar4;

    cVar4 = '\0';
    vec_new_array(a0 + 8, FUN_8c024518, free_if_nonnull_wrap_0247e0, 0x14, 2);
    vec_new_array(a0 + 0x12, FUN_8c024518, free_if_nonnull_wrap_0247e0, 0x14, 2);
    uVar3 = 4;
    pcVar2 = free_if_nonnull_wrap_016bfc;
    pcVar1 = clear_field_0_wrap_015ab8;
    vec_new_array(a0 + 0x1c, clear_field_0_wrap_015ab8, free_if_nonnull_wrap_016bfc, 4, 1);
    clear_field_0_wrap_015ab8(a0 + 0x1d);
    vec_new_array(a0 + 0x1e, Class_129920_ctor, Class_129920_dtor, 8, 2);
    uVar3 = 8;
    pcVar2 = Class_129920_dtor;
    pcVar1 = Class_129920_ctor;
    vec_new_array(a0 + 0x22, Class_129920_ctor, Class_129920_dtor, 8, 2);
    Class_129920_ctor(a0 + 0x26, pcVar1);
    clear_field_0_wrap_015b94(a0 + 0x2c, pcVar1);
    Vec3_ctor_zero(a0 + 0x36, pcVar1, pcVar2);
    FUN_8c02447c(a0 + 0x3e);
    *a0 = 0;
    a0[2] = 0;
    a0[1] = 0;
    a0[3] = 0;
    a0[5] = 0;
    a0[4] = 0;
    a0[6] = 0;
    a0[7] = 0;
    a0[0x28] = 0;
    a0[0x2a] = 0;
    *(u16 *)(a0 + 0x2b) = 0;
    *(u16 *)(a0 + 0x29) = 0;
    a0[0x2d] = 0;
    if (cVar4 == '\0') {
        a0[0x2f] = 0x3f800000;
        a0[0x2e] = 0x3f800000;
        a0[0x30] = 0x3c23d70a;
    } else {
        *(u64 *)(a0 + 0x2f) = CONCAT44(0x3f800000, in_fr1);
        *(u64 *)(a0 + 0x2e) = CONCAT44(0x3f800000, in_fr1);
        in_fr1 = 0x3c23d70a;
        *(u64 *)(a0 + 0x30) = 0xc43c23d70a;
    }
    *(u16 *)(a0 + 0x31) = 0;
    if (cVar4 == '\0') {
        a0[0x32] = 0x3f800000;
    } else {
        *(u64 *)(a0 + 0x32) = CONCAT44(0x3f800000, in_fr1);
    }
    if (cVar4 == '\0') {
        a0[0x33] = 0x3f800000;
    } else {
        *(u64 *)(a0 + 0x33) = CONCAT44(0x3f800000, in_fr1);
    }
    if (cVar4 == '\0') {
        a0[0x34] = 0x3f800000;
        a0[0x35] = 0x42c80000;
    } else {
        *(u64 *)(a0 + 0x34) = CONCAT44(0x3f800000, in_fr1);
        in_fr1 = 0x42c80000;
        *(u64 *)(a0 + 0x35) = 0xe842c80000;
    }
    if (cVar4 == '\0') {
        a0[0x3a] = 0;
    } else {
        *(u64 *)(a0 + 0x3a) = (u64)in_fr1;
    }
    if (cVar4 == '\0') {
        a0[0x3b] = 0x3f800000;
        a0[0x3c] = 0x43160000;
        a0[0x3d] = 0x43480000;
    } else {
        *(u64 *)(a0 + 0x3b) = CONCAT44(0x3f800000, in_fr1);
        *(u64 *)(a0 + 0x3c) = 0xf443160000;
        *(u64 *)(a0 + 0x3d) = 0x4f222fe643480000;
    }
    return a0;
}

/*
 * FUN_8c024758  0x8c024758
 * called by: FUN_8c03a4ac
 */
int FUN_8c024758(int a0, u32 a1, u32 a2, u32 a3) {
    u32 ar5_00;
    u32 in_stack_fffffff4;
    u32 ain0;

    ain0 = CONCAT22((short)((u32)in_stack_fffffff4 >> 0x10), (u16)a1);
    if (a0 != 0) {
        object_dtor_delete(a0 + 0x18, 0xffffffff, a2, a3);
        object_dtor_delete(a0 + 0xc, 0xffffffff, a2, a3);
        ar5_00 = 0xffffffff;
        object_dtor_delete(a0, 0xffffffff, a2, a3);
        if (0 < (short)ain0) {
            free_if_nonnull(a0);
        }
    }
    return a0;
}

/*
 * free_if_nonnull_wrap_0247b0  0x8c0247b0
 * called by: Class_12a5d0_m0_08a3a4, FUN_8c03a4ac
 */
int free_if_nonnull_wrap_0247b0(int a0, u32 a1, u32 a2, u32 a3) {
    u32 in_stack_fffffff4;

    if ((a0 != 0) && (0 < (short)a1)) {
        free_if_nonnull(a0, a1, a2, a3, CONCAT22((short)((u32)in_stack_fffffff4 >> 0x10), (short)a1));
    }
    return a0;
}

/*
 * free_if_nonnull_wrap_0247e0  0x8c0247e0
 */
int free_if_nonnull_wrap_0247e0(int a0, u32 a1, u32 a2, u32 a3) {
    u32 in_stack_fffffff4;

    if ((a0 != 0) && (0 < (short)a1)) {
        free_if_nonnull(a0, a1, a2, a3, CONCAT22((short)((u32)in_stack_fffffff4 >> 0x10), (short)a1));
    }
    return a0;
}

/*
 * FUN_8c024810  0x8c024810
 * called by: FUN_8c024824
 */
u32 *FUN_8c024810(u32 *a0) {
    *a0 = 1;
    a0[1] = 1;
    a0[2] = 1;
    return a0;
}

/*
 * FUN_8c024824  0x8c024824
 * called by: FUN_8c039124, FUN_8c08894c, FUN_8c09b210, FUN_8c09d718, FUN_8c09f060, FUN_8c0a5c90, FUN_8c0af3c4
 */
u16 *FUN_8c024824(u16 *a0) {
    FUN_8c024810(a0 + 2);
    *a0 = 0;
    return a0;
}

/*
 * FUN_8c024848  0x8c024848
 * called by: FUN_8c0254d0
 */
u32 *FUN_8c024848(u32 *a0, u32 a1, u32 a2) {
    Vec3_ctor_zero(a0 + 8, a1, a2);
    Vec3_ctor_zero(a0 + 0xc, a1, a2);
    Vec3_set_zero(a0 + 0x10);
    Vec3_ctor_zero(a0 + 0x13, a1, a2);
    Vec3_ctor_zero(a0 + 0x17, a1, a2);
    Vec3_set_zero(a0 + 0x1b);
    Vec3_ctor_zero((int)a0 + 0x84, a1, a2);
    Vec3_set_zero((int)a0 + 0xb8);
    a0[6] = 0;
    a0[7] = 0;
    a0[4] = 0;
    a0[5] = 0;
    a0[3] = 0;
    a0[2] = 0;
    a0[1] = 0;
    *a0 = 0;
    *(u32 *)(0x98 + (int)a0) = 0;
    *(u32 *)(0x94 + (int)a0) = 0;
    *(u32 *)(0x9c + (int)a0) = 0;
    *(u32 *)(0xa4 + (int)a0) = 0;
    *(u32 *)(0xa0 + (int)a0) = 0;
    *(u32 *)(0xa8 + (int)a0) = 0;
    *(u16 *)(0xac + (int)a0) = 0;
    *(u32 *)(0xb0 + (int)a0) = 0;
    *(u16 *)(0xb4 + (int)a0) = 0;
    *(u16 *)(0xb6 + (int)a0) = 0;
    return a0;
}

/*
 * FUN_8c024968  0x8c024968
 * name hint from a string it uses: GRAPHICS COMMON
 * called by: FUN_8c0c0444
 * strings: "GRAPHICS\\COMMON"; "COMMON_EYE"; "GRAPHICS\\COMMON"; "Failed to load eye textuer.." ...
 */
int FUN_8c024968(u32 a0) {
    u32 *puVar1;
    int iVar2;
    u32 *puVar3;
    u8 **ar5_00;
    u32 uVar4;
    char *ar6_00;
    u32 ar7_00;
    char cVar5;

    cVar5 = '\0';
    g_8c27d1fc = &g_8c12fcac;
    g_8c27d200 = 300;
    g_8c27d204 = &g_8c12fd28;
    g_8c27d208 = 6;
    g_8c27d20c = &g_8c12fd34;
    g_8c27d210 = 0x10;
    g_8c27d214 = &g_8c12fd58;
    g_8c27d218 = 6;
    g_8c27d21c = &g_8c12fd64;
    g_8c27d220 = 0x10;
    g_8c27d224 = &g_8c12fd40;
    g_8c27d228 = 6;
    g_8c27d22c = &g_8c12fd4c;
    g_8c27d230 = 0x10;
    g_8c27d234 = &g_8c12fd70;
    g_8c27d238 = 8;
    g_8c27d23c = &g_8c162858;
    g_8c27d240 = 0x8c1651ec;
    g_8c27d244 = &g_8c167b80;
    g_8c27d248 = &g_8c16a514;
    g_8c27d24c = &g_8c16cea8;
    g_8c27d354 = 10;
    g_8c27d356 = 5;
    g_8c27d358 = 5;
    g_8c27d35a = 5;
    g_8c27d35c = 5;
    g_8c27d250 = &g_8c16f83c;
    g_8c27d254 = &g_8c1721d0;
    g_8c27d258 = &g_8c174b64;
    g_8c27d25c = &g_8c1774f8;
    g_8c27d260 = &g_8c179e8c;
    g_8c27d35e = 10;
    g_8c27d360 = 5;
    g_8c27d362 = 5;
    g_8c27d364 = 5;
    g_8c27d366 = 5;
    g_8c27d264 = &g_8c1a0e38;
    g_8c27d268 = &g_8c1a37cc;
    g_8c27d26c = &g_8c1a6160;
    g_8c27d270 = &g_8c1a0e38;
    g_8c27d274 = &g_8c1a8af4;
    g_8c27d368 = 0x1e;
    g_8c27d36a = 5;
    g_8c27d36c = 5;
    g_8c27d36e = 5;
    g_8c27d370 = 5;
    g_8c27d278 = &g_8c1d4dc8;
    g_8c27d27c = &g_8c1d775c;
    g_8c27d280 = &g_8c1da0f0;
    g_8c27d284 = &g_8c1d4dc8;
    g_8c27d288 = &g_8c1dca84;
    g_8c27d372 = 0xf;
    g_8c27d374 = 5;
    g_8c27d376 = 5;
    g_8c27d378 = 5;
    g_8c27d37a = 5;
    g_8c27d28c = &g_8c17c820;
    g_8c27d290 = &g_8c17c820;
    g_8c27d294 = &g_8c17f1b4;
    g_8c27d298 = &g_8c181b48;
    g_8c27d29c = &g_8c1844dc;
    g_8c27d37c = 10;
    g_8c27d37e = 5;
    g_8c27d380 = 5;
    g_8c27d382 = 5;
    g_8c27d384 = 5;
    g_8c27d2a0 = &g_8c1967e8;
    g_8c27d2a4 = &g_8c19917c;
    g_8c27d2a8 = &g_8c19bb10;
    g_8c27d2ac = &g_8c1967e8;
    g_8c27d2b0 = &g_8c19e4a4;
    g_8c27d386 = 0xf;
    g_8c27d388 = 5;
    g_8c27d38a = 5;
    g_8c27d38c = 5;
    g_8c27d38e = 5;
    g_8c27d2b4 = &g_8c1c5450;
    g_8c27d2b8 = &g_8c1ca778;
    g_8c27d2bc = &g_8c1cd10c;
    g_8c27d2c0 = &g_8c1cfaa0;
    g_8c27d2c4 = &g_8c1d2434;
    g_8c27d390 = 0x1e;
    g_8c27d392 = 5;
    g_8c27d394 = 5;
    g_8c27d396 = 5;
    g_8c27d398 = 5;
    g_8c27d2c8 = &g_8c1ab488;
    g_8c27d2cc = &g_8c1ade1c;
    g_8c27d2d0 = &g_8c1b07b0;
    g_8c27d2d4 = &g_8c1b3144;
    g_8c27d2d8 = &g_8c1b5ad8;
    g_8c27d39a = 10;
    g_8c27d39c = 5;
    g_8c27d39e = 5;
    g_8c27d3a0 = 5;
    g_8c27d3a2 = 5;
    g_8c27d2dc = &g_8c1b846c;
    g_8c27d2e0 = &g_8c1b846c;
    g_8c27d2e4 = &g_8c1bae00;
    g_8c27d2e8 = &g_8c1bd794;
    g_8c27d2ec = &g_8c1c0128;
    g_8c27d3a4 = 0xf;
    g_8c27d3a6 = 5;
    ar7_00 = 5;
    g_8c27d3a8 = 5;
    g_8c27d3aa = 5;
    g_8c27d3ac = 5;
    g_8c27d2f0 = &g_8c1df418;
    g_8c27d2f4 = &g_8c1e4740;
    g_8c27d2f8 = &g_8c1e70d4;
    g_8c27d2fc = &g_8c1e9a68;
    g_8c27d300 = &g_8c1ec3fc;
    g_8c27d3ae = 0xf;
    g_8c27d3b0 = 5;
    g_8c27d3b2 = 5;
    g_8c27d3b4 = 5;
    g_8c27d3b6 = 5;
    g_8c27d304 = &g_8c189804;
    g_8c27d308 = &g_8c18c198;
    g_8c27d30c = &g_8c18eb2c;
    g_8c27d310 = &g_8c1914c0;
    g_8c27d3b8 = 10;
    g_8c27d3ba = 8;
    g_8c27d3bc = 8;
    g_8c27d3be = 8;
    g_8c27d314 = &g_8c186e70;
    g_8c27d3c0 = 10;
    g_8c27d318 = &g_8c1c2abc;
    g_8c27d3c2 = 0x1e;
    g_8c27d31c = &g_8c16a514;
    g_8c27d320 = &g_8c162858;
    g_8c27d3c4 = 3;
    g_8c27d3c6 = 3;
    g_8c27d324 = &g_8c16a514;
    g_8c27d328 = &g_8c162858;
    g_8c27d3c8 = 8;
    g_8c27d3ca = 8;
    g_8c27d33c = &g_8c1c7de4;
    g_8c27d340 = &g_8c1c5450;
    g_8c27d3d4 = 3;
    g_8c27d3d6 = 3;
    g_8c27d344 = &g_8c1c7de4;
    g_8c27d348 = &g_8c1c5450;
    g_8c27d3d8 = 8;
    g_8c27d3da = 8;
    g_8c27d32c = &g_8c1e1dac;
    g_8c27d330 = &g_8c1df418;
    g_8c27d3cc = 3;
    g_8c27d3ce = 3;
    g_8c27d334 = &g_8c1e1dac;
    g_8c27d338 = &g_8c1df418;
    g_8c27d3d0 = 8;
    g_8c27d3d2 = 8;
    g_8c27d34c = &g_8c193e54;
    g_8c27d350 = &g_8c162858;
    g_8c27d3dc = 4;
    g_8c27d3de = 4;
    set_field_0(0x8c27d3e0, &g_8c143df8, &g_8c27d1fc, 5);
    puVar1 = g_8c27d23c;
    g_8c27c1e8 = (*g_8c27d23c >> 0x10) + 2;
    uVar4 = 8;
    memcpy_bytes(0x8c279308, g_8c27d23c, 8);
    iVar2 = g_8c27c1e8 + -1;
    puVar3 = (u32 *)((g_8c27c1e8 + -1) * 4 + 0x8c279308);
    if (cVar5 == '\0') {
        *puVar3 = puVar1[iVar2];
    } else {
        *(u64 *)puVar3 = *(u64 *)(puVar1 + iVar2);
    }
    set_field_0(0x8c27d3e4, &PTR_DAT_8c14442c, uVar4, ar7_00);
    set_field_0_015ad4(0x8c27d3e8, &g_8c146400, uVar4);
    Class_129920_m0_015248(0x8c27d3ec, &PTR_PTR_8c143e1c, uVar4, ar7_00);
    ar5_00 = &PTR_PTR_8c1444b0;
    Class_129920_m0_015248(0x8c27d3f4, &PTR_PTR_8c1444b0, uVar4, ar7_00);
    uVar4 = get_field_4_0253e4(0x8c27d3ec, ar5_00, uVar4, ar7_00);
    ar6_00 = "GRAPHICS\\COMMON";
    iVar2 = FUN_8c020ef0(a0, "COMMON_EYE", "GRAPHICS\\COMMON", uVar4);
    if (iVar2 == 0) {
        uVar4 = 2;
        ar6_00 = NULL;
        report_error_message("Failed to load eye textuer..", &g_8c12fde4, 0, 2);
    }
    uVar4 = get_field_4_0253e4(0x8c27d3f4, 0x8c27d3f4, ar6_00, uVar4);
    iVar2 = FUN_8c020ef0(a0, "COMMON_SCSI", "GRAPHICS\\COMMON", uVar4);
    if (iVar2 == 0) {
        iVar2 = report_error_message("Failed to load scsi textuer..", &g_8c12fde4, 0, 2);
    }
    return iVar2;
}

/*
 * get_field_4_0253e4  0x8c0253e4
 * called by: CAnimal_ChangeBodyTexture, CAnimal_LoadGResourceWait, CEnv_LoadDevicePanelTexture, CGame_Init,
 * CGame_Initial, CIncubater_Create, CSoilTank_Create, CSquid_Init (+36 more)
 */
u32 get_field_4_0253e4(int a0, u32 a1, u32 a2, u32 a3) {
    return *(u32 *)(a0 + 4);
}

/*
 * FUN_8c0253ec  0x8c0253ec
 * called by: CAnimal_m0_025688
 */
int FUN_8c0253ec(int a0, u32 a1, u32 a2, u32 a3) {
    u32 ar5_00;
    u32 in_stack_fffffff4;
    u32 ain0;

    ain0 = CONCAT22((short)((u32)in_stack_fffffff4 >> 0x10), (u16)a1);
    if (a0 != 0) {
        object_dtor_delete(a0 + 0xb8, 0xffffffff, a2, a3);
        Vec3_dtor(a0 + 0x84, 0xffffffff, a2, a3);
        object_dtor_delete(a0 + 0x6c, 0xffffffff, a2, a3);
        Vec3_dtor(a0 + 0x5c, 0xffffffff, a2, a3);
        Vec3_dtor(a0 + 0x4c, 0xffffffff, a2, a3);
        object_dtor_delete(a0 + 0x40, 0xffffffff, a2, a3);
        Vec3_dtor(a0 + 0x30, 0xffffffff, a2, a3);
        ar5_00 = 0xffffffff;
        Vec3_dtor(a0 + 0x20, 0xffffffff, a2, a3);
        if (0 < (short)ain0) {
            free_if_nonnull(a0);
        }
    }
    return a0;
}

/*
 * FUN_8c025490  0x8c025490
 * called by: CAnimal_m0_025688
 */
int FUN_8c025490(int a0, u32 a1, u32 a2, u32 a3) {
    u32 ar5_00;
    u32 in_stack_fffffff4;
    u32 ain0;

    ain0 = CONCAT22((short)((u32)in_stack_fffffff4 >> 0x10), (u16)a1);
    if (a0 != 0) {
        ar5_00 = 0xffffffff;
        Vec3_dtor(a0 + 4, 0xffffffff, a2, a3);
        if (0 < (short)ain0) {
            free_if_nonnull(a0);
        }
    }
    return a0;
}

/*
 * FUN_8c0254d0  0x8c0254d0
 * called by: FUN_8c036260, FUN_8c0384f8, FUN_8c087ed0, FUN_8c099e74, FUN_8c09b8e4, FUN_8c0a4de8
 */
int FUN_8c0254d0(int a0, u32 a1, u32 a2, u32 a3, u32 s0, u32 s4, u32 s8, u32 s12, u32 s16) {
    u32 uVar1;
    u32 ar7_00;
    u64 *puVar2;
    u32 ar5_00;
    int iVar3;
    float fVar4;
    u64 uVar5;
    double dVar6;
    u64 in_xd0;
    char cVar7;
    char cVar8;

    cVar8 = '\0';
    cVar7 = '\0';
    iVar3 = a0;
    FUN_8c0f4040(a0, a1, a2, s0, s4);
    *(u8 **)(a0 + 8) = &g_8c129a88;
    uVar1 = rand();
    ar7_00 = libgcc_divide_helper_01031c(uVar1, 2, a2);
    ar5_00 = 0;
    uVar1 = a3;
    FUN_8c02b9a8(a0 + 0x174, 0, a3);
    uVar1 = FUN_8c02bfd8(a0 + 0x174);
    iVar3 = (int)(short)uVar1;
    FUN_8c034c50(a0 + 0x2dc, iVar3, a3);
    FUN_8c02b1dc(a0 + 0x310, iVar3, a3, ar7_00);
    Vec3_set_zero(a0 + 0x338);
    FUN_8c024848(a0 + 0x344, iVar3, a3);
    Vec3_set_one(a0 + 0x480);
    FUN_8c02911c(a0, iVar3, a3);
    *(u32 *)(a0 + 0x328) = s8;
    *(u32 *)(a0 + 0x32c) = s12;
    *(u32 *)(a0 + 0x410) = s16;
    puVar2 = (u64 *)(*(int *)(a0 + 0x328) + 0xbc);
    if (cVar8 == '\0') {
        *(u32 *)(a0 + 0x170) = *(u32 *)puVar2;
    } else {
        *(u64 *)(a0 + 0x170) = *puVar2;
    }
    puVar2 = (u64 *)(*(int *)(a0 + 0x328) + 0xb8);
    if (cVar8 == '\0') {
        uVar1 = *(u32 *)puVar2;
        *(u32 *)(a0 + 100) = uVar1;
        *(u32 *)(a0 + 0x60) = uVar1;
        *(u32 *)(a0 + 0x5c) = uVar1;
    } else {
        uVar5 = *puVar2;
        *(u64 *)(a0 + 100) = uVar5;
        *(u64 *)(a0 + 0x60) = uVar5;
        *(u64 *)(a0 + 0x5c) = uVar5;
    }
    puVar2 = (u64 *)(*(int *)(a0 + 0x328) + 0xe8);
    if (cVar8 == '\0') {
        dVar6 = (double)CONCAT44(*(u32 *)(a0 + 0x60), *(u32 *)puVar2);
    } else {
        in_xd0 = *puVar2;
        dVar6 = *(double *)(a0 + 0x60);
    }
    if (cVar7 == '\0') {
        fVar4 = SUB84(dVar6, 0) * (float)((u64)dVar6 >> 0x20);
    } else {
        fVar4 = SUB84(dVar6 * dVar6, 0);
    }
    if (cVar8 == '\0') {
        *(float *)(a0 + 0x408) = fVar4;
    } else {
        *(u64 *)(a0 + 0x408) = in_xd0;
    }
    puVar2 = (u64 *)(*(int *)(a0 + 0x328) + 0xec);
    if (cVar8 == '\0') {
        dVar6 = (double)CONCAT44(*(u32 *)(a0 + 0x5c), *(u32 *)puVar2);
    } else {
        in_xd0 = *puVar2;
        dVar6 = *(double *)(a0 + 0x5c);
    }
    if (cVar7 == '\0') {
        fVar4 = SUB84(dVar6, 0) * (float)((u64)dVar6 >> 0x20);
    } else {
        fVar4 = SUB84(dVar6 * dVar6, 0);
    }
    if (cVar8 == '\0') {
        *(float *)(a0 + 0x40c) = fVar4;
    } else {
        *(u64 *)(a0 + 0x40c) = in_xd0;
    }
    return a0;
}

/*
 * CAnimal_m0_025688  0x8c025688
 * called by: CAnimal_m0_0361d8, CAnimal_m0_038648, CAnimal_m0_08516c, CAnimal_m0_08800c, CAnimal_m0_0aca4c,
 * Class_12a5d0_m0_08a3a4, Class_12a7f4_m0_099fd8, Class_12a990_m0_09bb44 (+3 more)
 */
int CAnimal_m0_025688(int a0, u32 a1, u32 a2, u32 a3) {
    u32 ar5_00;
    u32 in_stack_fffffff4;
    u32 ain0;

    ain0 = CONCAT22((short)((u32)in_stack_fffffff4 >> 0x10), (u16)a1);
    if (a0 != 0) {
        *(u8 **)(a0 + 8) = &g_8c129a88;
        free_if_nonnull_wrap_016ac4(a0 + 0x480, 0xffffffff, a2, a3);
        FUN_8c0253ec(a0 + 0x344, 0xffffffff, a2, a3);
        object_dtor_delete(a0 + 0x338, 0xffffffff, a2, a3);
        FUN_8c025490(a0 + 0x310, 0xffffffff, a2, a3);
        free_if_nonnull_wrap_034d08(a0 + 0x2dc, 0xffffffff, a2, a3);
        ar5_00 = 0;
        Class_12c1f0_m0_0f4108(a0, 0, a2, a3);
        if (0 < (short)ain0) {
            free_if_nonnull(a0);
        }
    }
    return a0;
}

/*
 * CAnimal_m2_02573c  0x8c02573c
 * called by: CAnimal_m2_03640c, CAnimal_m2_085390, CAnimal_m2_0acaec, Class_12a5d0_m2_08a49c, Class_12ab2c_m2_09db4c,
 * Class_12aeec_m2_0a471c
 */
u32 CAnimal_m2_02573c(int a0, u32 a1, int ****a2, int ****a3) {
    u64 uVar1;
    u32 uVar2;
    u32 uVar3;
    int iVar4;
    u32 uVar5;
    int iVar6;
    int iVar7;
    u8 *a5;
    u32 *a5_00;
    u8 *a6;
    int ****ar7_00;
    u8 *a7;
    u32 ar5_00;
    int ****a6_00;
    float fVar8;
    u64 in_dr0;
    double dVar9;
    float fVar10;
    u32 in_fr3;
    double dVar11;
    char cVar12;
    char cVar13;
    int ****ain0;
    u8 auStack_108[16];
    u8 auStack_f8[4];
    u64 uStack_f4;
    u8 auStack_ec[64];
    u32 uStack_ac;
    int iStack_a8;
    u32 uStack_a4;
    int iStack_9c;
    int ***pppiStack_94;
    u32 uStack_8c;
    u32 uStack_88;
    u32 uStack_84;
    u32 uStack_80;
    int iStack_7c;
    int iStack_78;
    u32 uStack_74;
    u32 uStack_70;
    int iStack_6c;
    int ***pppiStack_68;
    int ***pppiStack_60;
    int iStack_58;
    u32 uStack_54;
    u32 uStack_50;
    u32 uStack_4c;
    int iStack_48;
    int ***pppiStack_44;
    u8 auStack_3c[4];
    u8 auStack_38[4];
    u8 auStack_34[4];
    u64 uStack_30;
    int iStack_28;
    int iStack_24;

    cVar13 = '\0';
    cVar12 = '\0';
    uVar5 = a1;
    ar7_00 = a3;
    ain0 = a2;
    FUN_8c030e10(auStack_3c);
    FUN_8c030e5c(&uStack_ac);
    uVar2 = FUN_8c02bef8(a0 + 0x174, uVar5, a2);
    a6_00 = (int ****)(int)(short)uVar2;
    noop_023e44(auStack_ec);
    uVar3 = get_field_a4_s16(a1, uVar5);
    ar5_00 = uVar3 & 0xffff;
    iVar4 = get_field_24_026024(a3, uVar5, a2, ar7_00);
    if ((iVar4 != 2) && (*(int *)(a0 + 0x48c) == 0)) {
        uVar5 = FUN_8c1011b0(*(u32 *)(a1 + 0x7cc), uVar5, a2, ar7_00);
        set_field_14(a0 + 0x26c, uVar5 & 0xffff);
        uVar5 = ar5_00;
        a2 = a3;
        FUN_8c02c030(a0 + 0x174, ar5_00, a3, ar7_00);
    }
    iVar6 = FUN_8c025ff4(a0 + 0x174);
    if (iVar6 == 1) {
        FUN_8c02a6f8(a0, uVar5, a2, ar7_00);
    }
    uVar2 = FUN_8c025fc4(a0 + 0x174);
    if ((short)uVar2 == 1) {
        if (*(int *)(a0 + 0x24) == 3) {
            uVar5 = 2;
            iVar6 = (*(code *)(*a3)[0x47])(a3, 2, a2, ar7_00);
            if (iVar6 != 0) {
                uVar5 = 0;
                set_field_16_s16(a0 + 0x21c, 0);
                goto LAB_8c02590e;
            }
        }
        uVar2 = FUN_8c02bef8(a0 + 0x174, uVar5, a2);
        a6_00 = (int ****)(int)(short)uVar2;
        if (a6_00 != NULL) {
            (**(code **)(*(int *)(a0 + 8) + 0xec))(a0, 0x8c3eb334, (int)a6_00 + -1, ar7_00);
            (**(code **)(*(int *)(a0 + 8) + 0xe0))(a0, 0x8c3eb334, a6_00, ar7_00);
            uVar5 = a1;
            a2 = a6_00;
            (**(code **)(**(int **)(a0 + 0x308) + 0x18))(*(int **)(a0 + 0x308), a1, a6_00, ar7_00);
            (**(code **)(*(int *)(a0 + 8) + 0x5c))(a0, uVar5, a2, ar7_00);
        }
    }
LAB_8c02590e:
    if ((ar5_00 != *(u16 *)(a0 + 0x464)) && (*(short *)(*(int *)(a0 + 0x328) + (int)a6_00 * 0x124 + 0xc4) != 0)) {
        uVar5 = (u32) * (u16 *)(*(int *)(a0 + 0x328) + (int)a6_00 * 0x124 + 0xc4);
        iVar6 = libgcc_divide_helper_01031c(ar5_00, uVar5, a2);
        if (iVar6 == 0) {
            FUN_8c02ae38(a0, uVar5, a2);
        }
        *(short *)(a0 + 0x464) = (short)uVar3;
    }
    if ((((*(int *)(a0 + 0x358) != 0) || (*(int *)(a0 + 0x354) != 0)) || (*(int *)(a0 + 0x360) != 0)) ||
        (*(int *)(a0 + 0x35c) != 0)) {
        if (cVar13 == '\0') {
            dVar11 = (double)CONCAT44(*(u32 *)(a0 + 0x468), in_fr3);
        } else {
            dVar11 = *(double *)(a0 + 0x468);
        }
        if (cVar13 == '\0') {
            dVar9 = (double)CONCAT44(0x361b5837, (float)(int)*(char *)(a0 + 0x46c));
        } else {
            dVar9 = 512.0001032005592;
        }
        if (cVar12 == '\0') {
            fVar8 = SUB84(dVar9, 0) * (float)((u64)dVar9 >> 0x20);
        } else {
            fVar8 = SUB84(dVar9 * dVar9, 0);
        }
        if (cVar13 == '\0') {
            dVar9 = (double)CONCAT44(0x40800000, fVar8);
        } else {
            dVar9 = 5.441987277913441e+158;
        }
        if (cVar12 == '\0') {
            fVar10 = (float)((u64)dVar9 >> 0x20);
            fVar8 = SUB84(dVar9, 0) * fVar10;
            dVar9 = (double)CONCAT44(fVar10, fVar8);
            dVar11 = (double)CONCAT44((float)((u64)dVar11 >> 0x20) + fVar8, SUB84(dVar11, 0));
        } else {
            dVar9 = dVar9 * dVar9;
            dVar11 = dVar11 + dVar9;
        }
        fVar8 = SUB84(dVar9, 0);
        if (cVar13 == '\0') {
            *(int *)(a0 + 0x468) = (int)((u64)dVar11 >> 0x20);
            fVar8 = *(float *)(a0 + 0x468);
        } else {
            *(double *)(a0 + 0x468) = dVar11;
        }
        if (cVar12 != '\0' || fVar8 <= 1.0) {
            if (cVar13 == '\0') {
                fVar8 = *(float *)(a0 + 0x468);
            }
            in_dr0 = (u64)(u32)fVar8;
            if (cVar12 == '\0' && fVar8 < 0.0) {
                in_dr0 = (u64)(u32)fVar8;
                if (cVar13 == '\0') {
                    *(u32 *)(a0 + 0x468) = 0;
                } else {
                    *(u64 *)(a0 + 0x468) = in_dr0;
                }
            }
        } else {
            in_dr0 = CONCAT44(0x3f800000, fVar8);
            if (cVar13 == '\0') {
                *(u32 *)(a0 + 0x468) = 0x3f800000;
            } else {
                *(u64 *)(a0 + 0x468) = in_dr0;
            }
        }
    }
    if (iVar4 != 2) {
        iStack_58 = a0 + 0x174;
        uStack_54 = *(u32 *)(a0 + 0x30c);
        uStack_50 = *(u32 *)(a0 + 0x308);
        iStack_48 = a0 + 0x2dc;
        pppiStack_60 = (int ***)a3;
        pppiStack_44 = (int ***)ain0;
        uStack_4c = (*(code *)(*a3)[0x52])(a3, uVar5, a2, ar7_00);
        uVar5 = get_field_a4_s16(a1, uVar5);
        a2 = &pppiStack_60;
        uVar5 = uVar5 & 0xffff;
        FUN_8c034d48(a0 + 0x2dc, uVar5, a2, ar7_00);
    }
    iStack_78 = a0 + 0x174;
    uStack_74 = *(u32 *)(a0 + 0x30c);
    iStack_7c = a0;
    pppiStack_68 = (int ***)ain0;
    uStack_70 = (*(code *)(*a3)[0x52])(a3, uVar5, a2, ar7_00);
    iStack_6c = a0 + 0x2dc;
    (**(code **)(**(int **)(a0 + 0x308) + 0xc))(*(int **)(a0 + 0x308), a3, &iStack_7c, ar7_00);
    uStack_30._4_4_ = a0 + 0x30;
    iStack_28 = a0 + 0x50;
    iStack_24 = a0 + 0x5c;
    a7 = auStack_34;
    a6 = auStack_38;
    a5 = auStack_3c;
    (*(code *)(*a3)[0x48])(a3, a5, a6, a7);
    (*(code *)(*a3)[0x61])(a3, a5, a6, a7);
    uVar1 = in_dr0;
    if (cVar13 == '\0') {
        uStack_30 = CONCAT44(uStack_30._4_4_, (int)(in_dr0 >> 0x20));
        uVar1 = uStack_30;
    }
    uStack_30 = uVar1;
    uStack_ac = *(u32 *)(a0 + 0x308);
    iStack_a8 = (int)&uStack_30 + 4;
    uStack_a4 = get_field_140_025f70(a0 + 0x174, a5);
    if (cVar13 == '\0') {
        uStack_8c = *(u32 *)(a0 + 0x408);
        uStack_88 = *(u32 *)(a0 + 0x40c);
    } else {
        uStack_8c = (u32) * (u64 *)(a0 + 0x408);
        uStack_88 = (u32) * (u64 *)(a0 + 0x40c);
        uStack_84 = (u32)((u64) * (u64 *)(a0 + 0x40c) >> 0x20);
    }
    uStack_84 = CONCAT31(uStack_84._1_3_, 1);
    iStack_9c = ((*(u32 *)(a0 + 0x74) & 0x70) >> 4) - 1;
    pppiStack_94 = (int ***)a3;
    FUN_8c10277c(auStack_f8);
    iVar4 = get_field_24_026024(a3, a5, a6, a7);
    if (iVar4 == 0) {
        if (cVar13 == '\0') {
            uStack_f4 = CONCAT44(uStack_f4._4_4_, (int)uStack_30);
        } else {
            uStack_f4 = uStack_30;
        }
    }
    uVar2 = get_field_0_s8(a0 + 0x1ec);
    uStack_80 = (u32)((char)uVar2 != '\0');
    a5_00 = &uStack_ac;
    (**(code **)(**(int **)(a0 + 0x30c) + 0xc))(*(int **)(a0 + 0x30c), a5_00, a6, a7);
    Vec3_ctor_copy_wrap(*(u32 *)(a0 + 0x30c), a5_00, a6, a7, auStack_108);
    Vec3_add_assign(a0 + 0x30, auStack_108);
    uVar2 = 0xffffffff;
    Vec3_dtor(auStack_108, 0xffffffff, a6, a7);
    njGetMatrix_wrap(auStack_ec);
    FUN_8c023f70(auStack_ec);
    matrix_scale_wrap_023fdc(auStack_ec, uVar2);
    uVar2 = FUN_8c02bef8(a0 + 0x174, uVar2, a6);
    iVar6 = *(int *)(a0 + 0x328) + (short)uVar2 * 0x124 + 0xd8;
    iVar4 = a0 + 0x3c8;
    FUN_8c024010(auStack_ec, iVar4, iVar6);
    (**(code **)(*(int *)(a0 + 8) + 0xf8))(a0, iVar4, iVar6, a7);
    FUN_8c0f79b8(a0 + 0xa0, iVar4, iVar6, a7);
    uVar2 = get_field_0_s8(a0 + 0x1ec);
    if ((char)uVar2 == '\0') {
        iVar4 = *(int *)(a0 + 0x45c) + -1;
        *(int *)(a0 + 0x45c) = iVar4;
        if (iVar4 < 1) {
            *(u32 *)(a0 + 0x45c) = 0;
        }
    } else {
        iVar7 = *(int *)(a0 + 0x45c);
        *(int *)(a0 + 0x45c) = iVar7 + 1;
        if (0x707 < iVar7 + 1) {
            *(u32 *)(a0 + 0x45c) = 0x708;
        }
    }
    iVar7 = (**(code **)(*(int *)(a0 + 8) + 0xb4))(a0, iVar4, iVar6, a7);
    if (iVar7 == 0) {
        (**(code **)(*(int *)(a0 + 8) + 0x4c))(a0, iVar4, iVar6, a7);
    }
    *(u32 *)(a0 + 0x48c) = 0;
    free_if_nonnull_wrap_102790(auStack_f8, 0xffffffff, iVar6, a7);
    free_if_nonnull_wrap_023e4c(auStack_ec, 0xffffffff, iVar6, a7);
    FUN_8c026038(auStack_3c, 0xffffffff, iVar6, a7);
    return 1;
}

/*
 * Vec3_ctor_copy_wrap  0x8c025f44
 * only calls Vec3_ctor_copy
 * called by: CAnimal_m2_02573c, CAnimal_m3_026078
 */
u32 Vec3_ctor_copy_wrap(int a0, u32 unused_a1, u32 a2, u32 a3, u32 s0) {
    u32 uVar1;

    uVar1 = Vec3_ctor_copy(s0, a0 + 4, a2, a3);
    return uVar1;
}

/*
 * get_field_0_s8  0x8c025f68
 * called by: CAnimal_m2_02573c, CAnimal_m3_026078, FUN_8c0274bc, FUN_8c02bd9c, FUN_8c02c030, FUN_8c02c3a8,
 * FUN_8c02c518, FUN_8c02c5b4 (+10 more)
 */
int get_field_0_s8(char *a0) {
    return (int)*a0;
}

/*
 * get_field_140_025f70  0x8c025f70
 * called by: CAnimal_m2_02573c, CAnimal_m3_026078, FUN_8c02cf20, FUN_8c02d1f4, FUN_8c0355cc, FUN_8c035994,
 * FUN_8c035a3c, FUN_8c05d860 (+7 more)
 */
u32 get_field_140_025f70(int a0, u32 a1) {
    return *(u32 *)(0x140 + a0);
}

/*
 * FUN_8c025f7c  0x8c025f7c
 */
u32 FUN_8c025f7c(int a0, u32 *a1, u32 *a2, u32 *a3) {
    *a1 = *(u32 *)(a0 + 0xba8);
    *a2 = *(u32 *)(a0 + 0xbac);
    *a3 = *(u32 *)(a0 + 0xbb0);
    return 0xbb0;
}

/*
 * field_ptr_f4c  0x8c025fa8
 * returns the address of the member at +0xf4c
 */
int field_ptr_f4c(int a0) {
    return a0 + 0xf4c;
}

/*
 * noop_025fb8  0x8c025fb8
 */
u32 noop_025fb8(void) {
    u32 in_r0;

    return in_r0;
}

/*
 * set_field_16_s16  0x8c025fbc
 * called by: CAnimal_m2_02573c, FUN_8c02c758, FUN_8c02cbe4, FUN_8c02ce58
 */
u32 set_field_16_s16(int a0, u32 a1) {
    *(short *)(a0 + 0x16) = (short)a1;
    return a1;
}

/*
 * FUN_8c025fc4  0x8c025fc4
 * called by: CAnimal_m2_02573c, CAnimal_m3_026078
 */
int FUN_8c025fc4(int a0) {
    u32 uVar1;

    uVar1 = get_field_1e_s16(a0 + 0xa8);
    return (int)(short)uVar1;
}

/*
 * get_field_1e_s16  0x8c025fec
 * called by: FUN_8c025fc4
 */
int get_field_1e_s16(int a0) {
    return (int)*(short *)(a0 + 0x1e);
}

/*
 * FUN_8c025ff4  0x8c025ff4
 * called by: CAnimal_m2_02573c, CAnimal_m3_026078, FUN_8c0274bc
 */
u32 FUN_8c025ff4(int a0) {
    u32 uVar1;

    uVar1 = FUN_8c02db04(a0 + 0xa8);
    return uVar1;
}

/*
 * set_field_14  0x8c02601c
 * called by: CAnimal_m2_02573c
 */
u32 set_field_14(int a0, u32 a1) {
    u32 in_r0;

    *(u32 *)(a0 + 0x14) = a1;
    return in_r0;
}

/*
 * get_field_24_026024  0x8c026024
 * called by: CAnimal_m2_02573c, CAnimal_m3_026078, Class_12a03c_m1_03c43c, Class_12a7a8_m1_098d14,
 * Class_12b0c4_m1_0ab7f4, Class_12b0c4_m2_0abc38, FUN_8c02c030, FUN_8c034d48 (+16 more)
 */
u32 get_field_24_026024(int a0, u32 a1, u32 unused_a2, u32 a3) {
    return *(u32 *)(a0 + 0x24);
}

/*
 * get_field_a4_s16  0x8c02602c
 * called by: CAnimal_m2_02573c, CAnimal_m2_0386d0, CAnimal_m2_088094, CAnimal_m3_026078, Class_12a078_m2_05eee0,
 * Class_12a7f4_m2_09a060, Class_12a7f4_m3_09a558, Class_12a990_m2_09bc2c (+21 more)
 */
int get_field_a4_s16(int a0, u32 a1) {
    return (int)*(short *)(0xa4 + a0);
}

/*
 * FUN_8c026038  0x8c026038
 * called by: CAnimal_m2_02573c, CAnimal_m3_026078, FUN_8c03c94c, FUN_8c03f4a4
 */
int FUN_8c026038(int a0, u32 a1, u32 a2, u32 a3) {
    u32 ar5_00;
    u32 in_stack_fffffff4;
    u32 ain0;

    ain0 = CONCAT22((short)((u32)in_stack_fffffff4 >> 0x10), (u16)a1);
    if (a0 != 0) {
        ar5_00 = 0xffffffff;
        free_if_nonnull_wrap_102790(a0, 0xffffffff, a2, a3);
        if (0 < (short)ain0) {
            free_if_nonnull(a0);
        }
    }
    return a0;
}

/*
 * CAnimal_m3_026078  0x8c026078
 * called by: CAnimal_m3_036568, CAnimal_m3_085550, CAnimal_m3_0acd74, Class_12a5d0_m3_08a704, Class_12aeec_m3_0a4744
 */
u32 CAnimal_m3_026078(int a0, u32 a1, int ****a2, int ****a3) {
    u64 uVar1;
    u32 uVar2;
    u32 uVar3;
    u32 ar5_00;
    int iVar4;
    int iVar5;
    u32 uVar6;
    u8 *a5;
    u32 *a5_00;
    u32 a5_01;
    int ****ar6_00;
    u8 *a6;
    int ****ar7_00;
    u8 *a7;
    int ****a6_00;
    float fVar7;
    u64 in_dr0;
    double dVar8;
    float fVar9;
    u32 in_fr3;
    double dVar10;
    char cVar11;
    char cVar12;
    u8 auStack_c8[16];
    u8 auStack_b8[4];
    u64 uStack_b4;
    u32 uStack_ac;
    int iStack_a8;
    u32 uStack_a4;
    int iStack_9c;
    int ***pppiStack_94;
    u32 uStack_8c;
    u32 uStack_88;
    u32 uStack_84;
    int iStack_7c;
    int iStack_78;
    u32 uStack_74;
    u32 uStack_70;
    int iStack_6c;
    int ***pppiStack_68;
    int ***pppiStack_60;
    int iStack_58;
    u32 uStack_54;
    u32 uStack_50;
    u32 uStack_4c;
    int iStack_48;
    int ***pppiStack_44;
    u8 auStack_3c[4];
    u8 auStack_38[4];
    u8 auStack_34[4];
    u64 uStack_30;
    int iStack_28;
    int iStack_24;

    cVar12 = '\0';
    cVar11 = '\0';
    uVar6 = a1;
    ar6_00 = a2;
    ar7_00 = a3;
    FUN_8c030e10(auStack_3c);
    FUN_8c030e5c(&uStack_ac);
    uVar2 = FUN_8c02bef8(a0 + 0x174, uVar6, ar6_00);
    a6_00 = (int ****)(int)(short)uVar2;
    uVar3 = get_field_a4_s16(a1, uVar6);
    ar5_00 = uVar3 & 0xffff;
    iVar4 = get_field_24_026024(a3, uVar6, ar6_00, ar7_00);
    if ((iVar4 != 2) && (*(int *)(a0 + 0x48c) == 0)) {
        uVar6 = ar5_00;
        ar6_00 = a3;
        FUN_8c02c030(a0 + 0x174, ar5_00, a3, ar7_00);
    }
    iVar5 = FUN_8c025ff4(a0 + 0x174);
    if (iVar5 == 1) {
        FUN_8c02a6f8(a0, uVar6, ar6_00, ar7_00);
    }
    uVar2 = FUN_8c025fc4(a0 + 0x174);
    if ((short)uVar2 == 1) {
        uVar2 = FUN_8c02bef8(a0 + 0x174, uVar6, ar6_00);
        a6_00 = (int ****)(int)(short)uVar2;
        if (a6_00 != NULL) {
            (**(code **)(*(int *)(a0 + 8) + 0xec))(a0, 0x8c3eb334, (int)a6_00 + -1, ar7_00);
            (**(code **)(*(int *)(a0 + 8) + 0xe0))(a0, 0x8c3eb334, a6_00, ar7_00);
            uVar6 = a1;
            ar6_00 = a6_00;
            (**(code **)(**(int **)(a0 + 0x308) + 0x18))(*(int **)(a0 + 0x308), a1, a6_00, ar7_00);
            (**(code **)(*(int *)(a0 + 8) + 0x5c))(a0, uVar6, ar6_00, ar7_00);
        }
    }
    if ((ar5_00 != *(u16 *)(a0 + 0x464)) && (*(short *)(*(int *)(a0 + 0x328) + (int)a6_00 * 0x124 + 0xc4) != 0)) {
        uVar6 = (u32) * (u16 *)(*(int *)(a0 + 0x328) + (int)a6_00 * 0x124 + 0xc4);
        iVar5 = libgcc_divide_helper_01031c(ar5_00, uVar6, ar6_00);
        if (iVar5 == 0) {
            FUN_8c02ae38(a0, uVar6, ar6_00);
        }
        *(short *)(a0 + 0x464) = (short)uVar3;
    }
    if ((((*(int *)(a0 + 0x358) != 0) || (*(int *)(a0 + 0x354) != 0)) || (*(int *)(a0 + 0x360) != 0)) ||
        (*(int *)(a0 + 0x35c) != 0)) {
        if (cVar12 == '\0') {
            dVar10 = (double)CONCAT44(*(u32 *)(a0 + 0x468), in_fr3);
        } else {
            dVar10 = *(double *)(a0 + 0x468);
        }
        if (cVar12 == '\0') {
            dVar8 = (double)CONCAT44(0x361b5837, (float)(int)*(char *)(a0 + 0x46c));
        } else {
            dVar8 = 512.0001032005592;
        }
        if (cVar11 == '\0') {
            fVar7 = SUB84(dVar8, 0) * (float)((u64)dVar8 >> 0x20);
        } else {
            fVar7 = SUB84(dVar8 * dVar8, 0);
        }
        if (cVar12 == '\0') {
            dVar8 = (double)CONCAT44(0x40800000, fVar7);
        } else {
            dVar8 = 5.442117166052762e+158;
        }
        if (cVar11 == '\0') {
            fVar9 = (float)((u64)dVar8 >> 0x20);
            fVar7 = SUB84(dVar8, 0) * fVar9;
            dVar8 = (double)CONCAT44(fVar9, fVar7);
            dVar10 = (double)CONCAT44((float)((u64)dVar10 >> 0x20) + fVar7, SUB84(dVar10, 0));
        } else {
            dVar8 = dVar8 * dVar8;
            dVar10 = dVar10 + dVar8;
        }
        fVar7 = SUB84(dVar8, 0);
        if (cVar12 == '\0') {
            *(int *)(a0 + 0x468) = (int)((u64)dVar10 >> 0x20);
            fVar7 = *(float *)(a0 + 0x468);
        } else {
            *(double *)(a0 + 0x468) = dVar10;
        }
        if (cVar11 != '\0' || fVar7 <= 1.0) {
            if (cVar12 == '\0') {
                fVar7 = *(float *)(a0 + 0x468);
            }
            in_dr0 = (u64)(u32)fVar7;
            if (cVar11 == '\0' && fVar7 < 0.0) {
                in_dr0 = (u64)(u32)fVar7;
                if (cVar12 == '\0') {
                    *(u32 *)(a0 + 0x468) = 0;
                } else {
                    *(u64 *)(a0 + 0x468) = in_dr0;
                }
            }
        } else {
            in_dr0 = CONCAT44(0x3f800000, fVar7);
            if (cVar12 == '\0') {
                *(u32 *)(a0 + 0x468) = 0x3f800000;
            } else {
                *(u64 *)(a0 + 0x468) = in_dr0;
            }
        }
    }
    if (iVar4 != 2) {
        iStack_58 = a0 + 0x174;
        uStack_54 = *(u32 *)(a0 + 0x30c);
        uStack_50 = *(u32 *)(a0 + 0x308);
        iStack_48 = a0 + 0x2dc;
        pppiStack_60 = (int ***)a3;
        pppiStack_44 = (int ***)a2;
        uStack_4c = (*(code *)(*a3)[0x52])(a3, uVar6, ar6_00, ar7_00);
        uVar2 = 1;
        set_field_2_s8(a0 + 0x2dc, 1);
        uVar6 = get_field_a4_s16(a1, uVar2);
        ar6_00 = &pppiStack_60;
        uVar6 = uVar6 & 0xffff;
        FUN_8c034d48(a0 + 0x2dc, uVar6, ar6_00, ar7_00);
    }
    iStack_78 = a0 + 0x174;
    uStack_74 = *(u32 *)(a0 + 0x30c);
    iStack_7c = a0;
    pppiStack_68 = (int ***)a2;
    uStack_70 = (*(code *)(*a3)[0x52])(a3, uVar6, ar6_00, ar7_00);
    iStack_6c = a0 + 0x2dc;
    (**(code **)(**(int **)(a0 + 0x308) + 0x10))(*(int **)(a0 + 0x308), a3, &iStack_7c, ar7_00);
    uStack_30._4_4_ = a0 + 0x30;
    iStack_28 = a0 + 0x50;
    iStack_24 = a0 + 0x5c;
    a7 = auStack_34;
    a6 = auStack_38;
    a5 = auStack_3c;
    (*(code *)(*a3)[0x48])(a3, a5, a6, a7);
    (*(code *)(*a3)[0x61])(a3, a5, a6, a7);
    uVar1 = in_dr0;
    if (cVar12 == '\0') {
        uStack_30 = CONCAT44(uStack_30._4_4_, (int)(in_dr0 >> 0x20));
        uVar1 = uStack_30;
    }
    uStack_30 = uVar1;
    uStack_ac = *(u32 *)(a0 + 0x308);
    iStack_a8 = (int)&uStack_30 + 4;
    uStack_a4 = get_field_140_025f70(a0 + 0x174, a5);
    if (cVar12 == '\0') {
        uStack_8c = *(u32 *)(a0 + 0x408);
        uStack_88 = *(u32 *)(a0 + 0x40c);
    } else {
        uStack_8c = (u32) * (u64 *)(a0 + 0x408);
        uStack_88 = (u32) * (u64 *)(a0 + 0x40c);
        uStack_84 = (u32)((u64) * (u64 *)(a0 + 0x40c) >> 0x20);
    }
    uStack_84 = uStack_84 & 0xffffff00;
    iStack_9c = ((*(u32 *)(a0 + 0x74) & 0x70) >> 4) - 1;
    pppiStack_94 = (int ***)a3;
    FUN_8c10277c(auStack_b8);
    iVar4 = get_field_24_026024(a3, a5, a6, a7);
    if (iVar4 == 0) {
        if (cVar12 == '\0') {
            uStack_b4 = CONCAT44(uStack_b4._4_4_, (int)uStack_30);
        } else {
            uStack_b4 = uStack_30;
        }
    }
    a5_00 = &uStack_ac;
    (**(code **)(**(int **)(a0 + 0x30c) + 0xc))(*(int **)(a0 + 0x30c), a5_00, a6, a7);
    Vec3_ctor_copy_wrap(*(u32 *)(a0 + 0x30c), a5_00, a6, a7, auStack_c8);
    Vec3_add_assign(a0 + 0x30, auStack_c8);
    a5_01 = 0xffffffff;
    Vec3_dtor(auStack_c8, 0xffffffff, a6, a7);
    (**(code **)(*(int *)(a0 + 8) + 0xf8))(a0, a5_01, a6, a7);
    FUN_8c0f79b8(a0 + 0xa0, a5_01, a6, a7);
    uVar2 = get_field_0_s8(a0 + 0x1ec);
    if ((char)uVar2 == '\0') {
        iVar4 = *(int *)(a0 + 0x45c) + -1;
        *(int *)(a0 + 0x45c) = iVar4;
        if (iVar4 < 1) {
            *(u32 *)(a0 + 0x45c) = 0;
        }
    } else {
        iVar4 = *(int *)(a0 + 0x45c);
        *(int *)(a0 + 0x45c) = iVar4 + 1;
        if (0x707 < iVar4 + 1) {
            *(u32 *)(a0 + 0x45c) = 0x708;
        }
    }
    iVar4 = (**(code **)(*(int *)(a0 + 8) + 0xb4))(a0, a5_01, a6, a7);
    if (iVar4 == 0) {
        (**(code **)(*(int *)(a0 + 8) + 0x4c))(a0, a5_01, a6, a7);
    }
    *(u32 *)(a0 + 0x48c) = 0;
    free_if_nonnull_wrap_102790(auStack_b8, 0xffffffff, a6, a7);
    FUN_8c026038(auStack_3c, 0xffffffff, a6, a7);
    return 1;
}

/*
 * set_field_2_s8  0x8c0266d4
 * called by: CAnimal_m3_026078
 */
u32 set_field_2_s8(int a0, u32 a1) {
    *(char *)(a0 + 2) = (char)a1;
    return a1;
}

/*
 * CAnimal_m4_0266dc  0x8c0266dc
 */
u32 CAnimal_m4_0266dc(int a0, u32 unused_a1, u32 a2, u32 a3) {
    u32 uVar1;

    *(u32 *)(a0 + 0x74) = *(u32 *)(a0 + 0x74) & 0xffffffbf;
    *(u32 *)(a0 + 0x74) = *(u32 *)(a0 + 0x74) & 0xffffffef;
    *(u32 *)(a0 + 0x74) = *(u32 *)(a0 + 0x74) & 0xffffffdf;
    *(u32 *)(a0 + 0x74) = *(u32 *)(a0 + 0x74) | 0x40;
    uVar1 = a2;
    (**(code **)(**(int **)(0x308 + a0) + 0x14))(*(int **)(0x308 + a0), a2, a2, a3);
    (**(code **)(**(int **)(0x30c + a0) + 0x1c))(*(int **)(0x30c + a0), a2, uVar1, a3);
    FUN_8c02a788(a0, a2, uVar1, a3);
    uVar1 = FUN_8c02aabc(a0, a2, uVar1, a3);
    return uVar1;
}

/*
 * CAnimal_m5_026774  0x8c026774
 */
u32 CAnimal_m5_026774(int a0, u32 a1, u32 a2, u32 a3) {
    u32 uVar1;

    FUN_8c02bef8(a0 + 0x174, a1, a2);
    *(u32 *)(a0 + 0x74) = *(u32 *)(a0 + 0x74) & 0xffffffbf;
    *(u32 *)(a0 + 0x74) = *(u32 *)(a0 + 0x74) & 0xffffffef;
    *(u32 *)(a0 + 0x74) = *(u32 *)(a0 + 0x74) & 0xffffffdf;
    *(u32 *)(a0 + 0x74) = *(u32 *)(a0 + 0x74) | 0x40;
    *(u32 *)(a0 + 0x70) = 0;
    (**(code **)(**(int **)(0x30c + a0) + 0x14))(*(int **)(0x30c + a0), a1, a2, a3);
    FUN_8c02a788(a0, a1, a2, a3);
    uVar1 = FUN_8c02aabc(a0, a1, a2, a3);
    return uVar1;
}

/*
 * CAnimBody_AdvanceFrame_wrapper_wrap_026834  0x8c026834
 */
u32 CAnimBody_AdvanceFrame_wrapper_wrap_026834(int a0, u32 a1, u32 a2, u32 a3) {
    u32 uVar1;

    uVar1 = CAnimBody_AdvanceFrame_wrapper(a0 + 0xb0, a1, a2, a3);
    return uVar1;
}

/*
 * CAnimBody_AdvanceFrame_wrapper  0x8c026858
 * called by: CAnimBody_AdvanceFrame_wrapper_wrap_026834, CAnimBody_AdvanceFrame_wrapper_wrap_03376c,
 * CAnimBody_AdvanceFrame_wrapper_wrap_033790, CMushroomerBody_AwayFrom, FUN_8c031de8, FUN_8c03c94c, FUN_8c03f4a4,
 * FUN_8c046684 (+83 more)
 */
u32 CAnimBody_AdvanceFrame_wrapper(u32 a0, u32 a1, u32 a2, u32 a3) {
    u32 uVar1;

    uVar1 = CAnimBody_AdvanceFrame_033b98(a0, a1, a2, a3);
    return uVar1;
}

/*
 * CAnimal_RunIncubator  0x8c026880
 * strings: "CAnimal::RunIncubator()"; "Are you an Egg?"
 */
u32 CAnimal_RunIncubator(int a0, u8 *a1, u32 a2, u32 a3) {
    u32 uVar1;

    FUN_8c02bef8(a0 + 0x174, a1, a2);
    *(u32 *)(a0 + 0x74) = *(u32 *)(a0 + 0x74) & 0xffffffbf;
    *(u32 *)(a0 + 0x74) = *(u32 *)(a0 + 0x74) & 0xffffffef;
    *(u32 *)(a0 + 0x74) = *(u32 *)(a0 + 0x74) & 0xffffffdf;
    *(u32 *)(a0 + 0x74) = *(u32 *)(a0 + 0x74) | 0x40;
    FUN_8c02c398(a0 + 0x174);
    if (*(int *)(0x30c + a0) == 0) {
        a3 = 2;
        a2 = 1;
        a1 = "CAnimal::RunIncubator()";
        report_error_message("Are you an Egg?", a1, 1, 2);
    } else {
        (**(code **)(**(int **)(0x30c + a0) + 0x14))(*(int **)(0x30c + a0), a1, a2, a3);
    }
    uVar1 = FUN_8c02aabc(a0, a1, a2, a3);
    return uVar1;
}

/*
 * FUN_8c026968  0x8c026968
 */
int FUN_8c026968(int a0, u32 a1, u32 a2, u32 a3) {
    u32 uVar1;
    int iVar2;
    u32 *puVar3;
    int iVar4;
    u8 *puVar5;
    u32 uVar6;
    int iVar7;
    float fVar8;
    double dVar9;
    float fVar10;
    int iVar11;
    int iVar12;
    char cVar13;
    char cVar14;
    u32 in_stack_ffffff24;
    u16 uVar15;
    u32 uStack_b0;
    u32 uStack_94;
    u8 auStack_8c[64];
    u8 auStack_4c[68];

    uVar15 = (u16)((u32)in_stack_ffffff24 >> 0x10);
    cVar14 = '\0';
    cVar13 = '\0';
    FUN_8c233dac(a0 + 0x438);
    uVar1 = FUN_8c02bef8(a0 + 0x174, a1, a2);
    uVar6 = CONCAT22(uVar15, (short)uVar1);
    iVar7 = *(int *)(a0 + 0x328) + (short)uVar1 * 0x124;
    njGetMatrix(auStack_4c, a1, a2, a3, uVar6);
    njGetMatrix(auStack_8c, a1, a2, a3, uVar6);
    obj_set_texlist(*(u32 *)(a0 + 0x42c), a1, a2);
    uVar1 = 0x40;
    iVar4 = g_8c27d1ec * 0x40 + 0x8c27c1ec;
    memmove_bytes((g_8c27d1ec + 1) * 0x40 + 0x8c27c1ec, iVar4, 0x40);
    g_8c27d1ec = g_8c27d1ec + 1;
    FUN_8c25b5d0(auStack_8c, iVar4, uVar1, a3, uVar6);
    puVar5 = auStack_8c;
    FUN_8c255d6c(auStack_4c, puVar5, uVar1, a3, uVar6);
    njGetMatrix(auStack_8c, puVar5, uVar1, a3, uVar6);
    if (cVar14 == '\0') {
        dVar9 = (double)CONCAT44(0x47800000, *(u32 *)(a0 + 0x58));
    } else {
        dVar9 = 1.4411521878487204e+18;
    }
    if (cVar13 == '\0') {
        fVar8 = SUB84(dVar9, 0) * (float)((u64)dVar9 >> 0x20);
    } else {
        fVar8 = SUB84(dVar9 * dVar9, 0);
    }
    if (cVar14 == '\0') {
        dVar9 = (double)CONCAT44(0x43b40000, fVar8);
    } else {
        dVar9 = -3.739346301775294e-250;
    }
    if (cVar13 == '\0') {
        iVar4 = (int)(SUB84(dVar9, 0) / (float)((u64)dVar9 >> 0x20));
    } else {
        iVar4 = (int)(dVar9 / dVar9);
    }
    if (cVar14 == '\0') {
        dVar9 = (double)CONCAT44(0x47800000, *(u32 *)(a0 + 0x54));
    } else {
        dVar9 = 1.4411521878487204e+18;
    }
    if (cVar13 == '\0') {
        fVar8 = SUB84(dVar9, 0) * (float)((u64)dVar9 >> 0x20);
    } else {
        fVar8 = SUB84(dVar9 * dVar9, 0);
    }
    if (cVar14 == '\0') {
        dVar9 = (double)CONCAT44(0x43b40000, fVar8);
    } else {
        dVar9 = -3.739346301775294e-250;
    }
    if (cVar13 == '\0') {
        iVar11 = (int)(SUB84(dVar9, 0) / (float)((u64)dVar9 >> 0x20));
    } else {
        iVar11 = (int)(dVar9 / dVar9);
    }
    if (cVar14 == '\0') {
        dVar9 = (double)CONCAT44(0x47800000, *(u32 *)(a0 + 0x50));
    } else {
        dVar9 = 1.4411521878487204e+18;
    }
    if (cVar13 == '\0') {
        fVar8 = SUB84(dVar9, 0) * (float)((u64)dVar9 >> 0x20);
    } else {
        fVar8 = SUB84(dVar9 * dVar9, 0);
    }
    if (cVar14 == '\0') {
        dVar9 = (double)CONCAT44(0x43b40000, fVar8);
    } else {
        dVar9 = -3.739346301775294e-250;
    }
    if (cVar13 == '\0') {
        iVar12 = (int)(SUB84(dVar9, 0) / (float)((u64)dVar9 >> 0x20));
    } else {
        iVar12 = (int)(dVar9 / dVar9);
    }
    FUN_8c256b0c(auStack_8c, iVar12, iVar11, iVar4, uVar6);
    puVar5 = auStack_8c;
    FUN_8c255d6c(auStack_4c, puVar5, iVar11, iVar4, uVar6);
    njGetMatrix(auStack_8c, puVar5, iVar11, iVar4, uVar6);
    matrix_scale(auStack_8c, puVar5, iVar11, iVar4, uVar6);
    puVar5 = auStack_8c;
    FUN_8c255d6c(auStack_4c, puVar5, iVar11, iVar4, uVar6);
    njGetMatrix(auStack_8c, puVar5, iVar11, iVar4, uVar6);
    matrix_scale(auStack_8c, puVar5, iVar11, iVar4, uVar6);
    puVar5 = auStack_8c;
    FUN_8c255d6c(auStack_4c, puVar5, iVar11, iVar4, uVar6);
    memmove_bytes_wrap_024378(auStack_4c);
    matrix_push(0, puVar5, iVar11, iVar4, uVar6);
    FUN_8c25b5d0(0, puVar5, iVar11, iVar4, uVar6);
    if (cVar14 == '\0') {
        dVar9 = (double)CONCAT44(0x47800000, *(u32 *)(a0 + 0x58));
    } else {
        dVar9 = 1.4411521878487204e+18;
    }
    if (cVar13 == '\0') {
        fVar8 = SUB84(dVar9, 0) * (float)((u64)dVar9 >> 0x20);
    } else {
        fVar8 = SUB84(dVar9 * dVar9, 0);
    }
    if (cVar14 == '\0') {
        dVar9 = (double)CONCAT44(0x43b40000, fVar8);
    } else {
        dVar9 = -3.739346301775294e-250;
    }
    if (cVar13 == '\0') {
        iVar4 = (int)(SUB84(dVar9, 0) / (float)((u64)dVar9 >> 0x20));
    } else {
        iVar4 = (int)(dVar9 / dVar9);
    }
    if (cVar14 == '\0') {
        dVar9 = (double)CONCAT44(0x47800000, *(u32 *)(a0 + 0x54));
    } else {
        dVar9 = 1.4411521878487204e+18;
    }
    if (cVar13 == '\0') {
        fVar8 = SUB84(dVar9, 0) * (float)((u64)dVar9 >> 0x20);
    } else {
        fVar8 = SUB84(dVar9 * dVar9, 0);
    }
    if (cVar14 == '\0') {
        dVar9 = (double)CONCAT44(0x43b40000, fVar8);
    } else {
        dVar9 = -3.739346301775294e-250;
    }
    if (cVar13 == '\0') {
        iVar11 = (int)(SUB84(dVar9, 0) / (float)((u64)dVar9 >> 0x20));
    } else {
        iVar11 = (int)(dVar9 / dVar9);
    }
    if (cVar14 == '\0') {
        dVar9 = (double)CONCAT44(0x47800000, *(u32 *)(a0 + 0x50));
    } else {
        dVar9 = 1.4411521878487204e+18;
    }
    if (cVar13 == '\0') {
        fVar8 = SUB84(dVar9, 0) * (float)((u64)dVar9 >> 0x20);
    } else {
        fVar8 = SUB84(dVar9 * dVar9, 0);
    }
    if (cVar14 == '\0') {
        dVar9 = (double)CONCAT44(0x43b40000, fVar8);
    } else {
        dVar9 = -3.739346301775294e-250;
    }
    if (cVar13 == '\0') {
        fVar10 = (float)((u64)dVar9 >> 0x20);
        fVar8 = SUB84(dVar9, 0) / fVar10;
        dVar9 = (double)CONCAT44(fVar10, fVar8);
        iVar12 = (int)fVar8;
    } else {
        dVar9 = dVar9 / dVar9;
        iVar12 = (int)dVar9;
    }
    uStack_b0 = (u32)((u64)dVar9 >> 0x20);
    FUN_8c256b0c(0, iVar12, iVar11, iVar4, uVar6);
    matrix_scale(0, iVar12, iVar11, iVar4, uVar6);
    iVar2 = get_field_1c_on_field_b0(*(u32 *)(a0 + 0x30c), iVar12, iVar11);
    uVar1 = deref_u32(*(int *)(iVar7 + 0xa0) + iVar2 * 4);
    CAnimBody_GetCurFrame_on_field_b0(*(u32 *)(a0 + 0x30c), iVar12, iVar11, iVar4);
    uStack_94 = uStack_b0;
    if (cVar14 == '\0') {
        uStack_94 = uVar1;
    }
    FUN_8c2540a0(uStack_94, iVar12, iVar11, iVar4, uVar6);
    iVar2 = get_field_1c_on_field_b0(*(u32 *)(a0 + 0x30c), iVar12, iVar11);
    puVar3 = (u32 *)deref_u32(*(int *)(iVar7 + 0xa0) + iVar2 * 4);
    *(u32 *)(a0 + 0x434) = *puVar3;
    iVar2 = get_field_1c_on_field_b0(*(u32 *)(a0 + 0x30c), iVar12, iVar11);
    iVar2 = noop_026d74(*(int *)(iVar7 + 0xa8) + iVar2 * 4);
    if (iVar2 == 0) {
        uVar1 = noop_015bb8(iVar7 + 0x70);
        uVar6 = 0;
        FUN_8c029510(a0, uVar1, 0, iVar4);
    } else {
        iVar2 = get_field_1c_on_field_b0(*(u32 *)(a0 + 0x30c), iVar12, iVar11);
        uVar1 = noop_026d74(*(int *)(iVar7 + 0xa8) + iVar2 * 4);
        CAnimBody_GetCurFrame_on_field_b0(*(u32 *)(a0 + 0x30c), iVar12, iVar11, iVar4);
        if (cVar14 == '\0') {
            uStack_b0 = uVar1;
        }
        uVar1 = 0x29;
        FUN_8c21f200(uStack_b0, 0x29, iVar11, iVar4, uVar6);
        uVar1 = noop_015bb8(iVar7 + 0x70);
        uVar6 = 0;
        FUN_8c0297b8(a0, uVar1, 0, iVar4);
    }
    matrix_pop_n(1);
    g_8c27d1ec = g_8c27d1ec + -1;
    FUN_8c233dac(&g_8c12fd7c);
    iVar7 = *(int *)(a0 + 0x474);
    if (iVar7 == 1) {
        iVar7 = FUN_8c02b058(a0, uVar1, uVar6, iVar4);
    }
    return iVar7;
}

/*
 * noop_026d74  0x8c026d74
 * does nothing
 * called by: CAnimBody_SetInterpolate, FUN_8c026968, FUN_8c026de0, FUN_8c06b460, FUN_8c08b020, FUN_8c08b5a8,
 * FUN_8c09aad0, FUN_8c09dec8 (+7 more)
 */
u32 noop_026d74(u32 *a0) {
}

/*
 * CAnimBody_GetCurFrame_on_field_b0  0x8c026d7c
 * calls CAnimBody_GetCurFrame on the member at +0xb0
 * called by: CAnimBody_GetCurFrame_on_field_b0_wrap, FUN_8c026968, FUN_8c026de0, FUN_8c073cac, FUN_8c08b020,
 * FUN_8c08b5a8, FUN_8c09dec8, FUN_8c09e2e8 (+7 more)
 */
u32 CAnimBody_GetCurFrame_on_field_b0(int a0, u32 a1, u32 a2, u32 a3) {
    CAnimBody_GetCurFrame(a0 + 0xb0, a1, a2, a3);
    return 4;
}

/*
 * CAnimBody_GetCurFrame  0x8c026da8
 * called by: CAnimBody_GetCurFrame_on_field_b0, FUN_8c03c94c, FUN_8c03f4a4, FUN_8c048f8c, FUN_8c049b68, FUN_8c04b168,
 * FUN_8c04c314, FUN_8c04ddd4 (+56 more)
 */
u32 CAnimBody_GetCurFrame(u32 unused_a0, u32 a1, u32 a2, u32 a3) {
    u32 in_r0;

    return in_r0;
}

/*
 * get_field_1c_on_field_b0  0x8c026db0
 * calls get_field_1c_026dd8 on the member at +0xb0
 * called by: FUN_8c026968, FUN_8c026de0, FUN_8c03f4a4, FUN_8c049b68, FUN_8c04b168, FUN_8c04c314, FUN_8c051c14,
 * FUN_8c055c38 (+23 more)
 */
u32 get_field_1c_on_field_b0(int a0, u32 a1, u32 a2) {
    u32 uVar1;

    uVar1 = get_field_1c_026dd8(a0 + 0xb0, a1, a2);
    return uVar1;
}

/*
 * get_field_1c_026dd8  0x8c026dd8
 * called by: Class_129cbc_m5_031440, Class_12ad14_m3_0a427c, FUN_8c03c94c, FUN_8c03f4a4, FUN_8c046684, FUN_8c048868,
 * FUN_8c048f8c, FUN_8c049b68 (+31 more)
 */
u32 get_field_1c_026dd8(int a0, u32 a1, u32 a2) {
    return *(u32 *)(a0 + 0x1c);
}

/*
 * FUN_8c026de0  0x8c026de0
 */
u32 FUN_8c026de0(int a0, u32 a1, u32 a2, u32 a3) {
    u32 uVar1;
    int iVar2;
    u32 *puVar3;
    int iVar4;
    u32 extraout_fr0;
    u32 extraout_fr0_00;
    char cVar5;
    u32 in_stack_ffffffac;
    u16 uVar6;
    u32 ain0;
    u32 uStack_30;
    u32 uStack_14;

    uVar6 = (u16)((u32)in_stack_ffffffac >> 0x10);
    cVar5 = '\0';
    uVar1 = FUN_8c02bef8(a0 + 0x174, a1, a2);
    ain0 = CONCAT22(uVar6, (short)uVar1);
    iVar4 = *(int *)(a0 + 0x328) + (short)uVar1 * 0x124;
    obj_set_texlist(*(u32 *)(a0 + 0x42c), a1, a2);
    iVar2 = get_field_1c_on_field_b0(*(u32 *)(a0 + 0x30c), a1, a2);
    uVar1 = deref_u32(*(int *)(iVar4 + 0xa0) + iVar2 * 4);
    CAnimBody_GetCurFrame_on_field_b0(*(u32 *)(a0 + 0x30c), a1, a2, a3);
    uStack_14 = extraout_fr0;
    if (cVar5 == '\0') {
        uStack_14 = uVar1;
    }
    FUN_8c2540a0(uStack_14, a1, a2, a3, ain0);
    iVar2 = get_field_1c_on_field_b0(*(u32 *)(a0 + 0x30c), a1, a2);
    puVar3 = (u32 *)deref_u32(*(int *)(iVar4 + 0xa0) + iVar2 * 4);
    *(u32 *)(a0 + 0x434) = *puVar3;
    iVar2 = get_field_1c_on_field_b0(*(u32 *)(a0 + 0x30c), a1, a2);
    iVar2 = noop_026d74(*(int *)(iVar4 + 0xa8) + iVar2 * 4);
    if (iVar2 == 0) {
        uVar1 = noop_015bb8(iVar4 + 0x70);
        uVar1 = FUN_8c029510(a0, uVar1, 0, a3);
    } else {
        iVar2 = get_field_1c_on_field_b0(*(u32 *)(a0 + 0x30c), a1, a2);
        uVar1 = noop_026d74(*(int *)(iVar4 + 0xa8) + iVar2 * 4);
        CAnimBody_GetCurFrame_on_field_b0(*(u32 *)(a0 + 0x30c), a1, a2, a3);
        uStack_30 = extraout_fr0_00;
        if (cVar5 == '\0') {
            uStack_30 = uVar1;
        }
        uVar1 = 0x29;
        FUN_8c21f200(uStack_30, 0x29, a2, a3, ain0);
        uVar1 = noop_015bb8(iVar4 + 0x70);
        uVar1 = FUN_8c0297b8(a0, uVar1, 0, a3);
    }
    return uVar1;
}

/*
 * FUN_8c026f7c  0x8c026f7c
 */
int FUN_8c026f7c(int a0, u32 a1, u32 a2, u32 a3) {
    u32 uVar1;
    u32 *puVar2;
    int iVar3;

    FUN_8c02bef8(a0 + 0x174, a1, a2);
    uVar1 = FUN_8c02bef8(a0 + 0x174, a1, a2);
    puVar2 =
        (u32 *)(*(code *)(&noop_015510))(*(int *)((short)uVar1 * 0x124 + *(int *)(0x328 + a0)) + 0x1e4, a1, a2, a3);
    *puVar2 = *(u32 *)(*(int *)((short)uVar1 * 0x124 + *(int *)(0x328 + a0)) + 0x40);
    iVar3 = *(int *)(0x344 + a0);
    *(u32 **)(iVar3 + 4) = puVar2;
    return iVar3;
}

/*
 * FUN_8c02702c  0x8c02702c
 * called by: FUN_8c037034, FUN_8c085704, FUN_8c08b798
 */
u32 FUN_8c02702c(int a0, u32 a1, u32 a2) {
    short sVar1;
    u32 uVar2;
    u64 *puVar3;
    int a5;
    u32 a5_00;
    int ar6_00;
    int iVar4;
    float fVar5;
    u64 uVar6;
    double dVar7;
    u64 in_xd0;
    char cVar9;
    char cVar10;
    u32 in_stack_ffffffc8;
    u16 uVar11;
    u32 uVar8;

    uVar11 = (u16)((u32)in_stack_ffffffc8 >> 0x10);
    cVar10 = '\0';
    cVar9 = '\0';
    uVar2 = FUN_8c02bef8(a0 + 0x174, a1, a2);
    sVar1 = (short)uVar2;
    uVar8 = CONCAT22(uVar11, sVar1);
    iVar4 = *(int *)(a0 + 0x328) + sVar1 * 0x124;
    uVar2 = *(u32 *)(iVar4 + 0xa8);
    ar6_00 = (int)*(short *)(iVar4 + 0xa4);
    FUN_8c027234(*(u32 *)(a0 + 0x30c), *(u32 *)(iVar4 + 0xa0), ar6_00, uVar2);
    if ((*(u32 *)(a0 + 0x74) & 0x70) == 0x20) {
        set_field_64(*(u32 *)(a0 + 0x30c), 1);
    }
    a5 = (int)sVar1;
    (**(code **)(**(int **)(a0 + 0x30c) + 0x20))(*(int **)(a0 + 0x30c), a5, ar6_00, uVar2);
    (**(code **)(**(int **)(a0 + 0x30c) + 0x2c))(*(int **)(a0 + 0x30c), a5, ar6_00, uVar2);
    *(u32 *)(a0 + 0xa0) = *(u32 *)(iVar4 + 0xb4);
    a5_00 = *(u32 *)(a0 + 0xa0);
    (**(code **)(**(int **)(a0 + 0xa4) + 0x24))(*(int **)(a0 + 0xa4), a5_00, ar6_00, uVar2);
    noop_027224(*(u32 *)(a0 + 0x30c), a5_00, ar6_00, uVar2, uVar8);
    (**(code **)(*(int *)(a0 + 0xa8) + 0x28))((int *)(a0 + 0xa8), a0 + 0x30, ar6_00, uVar2);
    puVar3 = (u64 *)(*(int *)(a0 + 0x328) + sVar1 * 0x124 + 0xbc);
    if (cVar10 == '\0') {
        *(u32 *)(a0 + 0x170) = *(u32 *)puVar3;
    } else {
        *(u64 *)(a0 + 0x170) = *puVar3;
    }
    puVar3 = (u64 *)(*(int *)(a0 + 0x328) + sVar1 * 0x124 + 0xb8);
    if (cVar10 == '\0') {
        uVar8 = *(u32 *)puVar3;
        *(u32 *)(a0 + 100) = uVar8;
        *(u32 *)(a0 + 0x60) = uVar8;
        *(u32 *)(a0 + 0x5c) = uVar8;
    } else {
        uVar6 = *puVar3;
        *(u64 *)(a0 + 100) = uVar6;
        *(u64 *)(a0 + 0x60) = uVar6;
        *(u64 *)(a0 + 0x5c) = uVar6;
    }
    puVar3 = (u64 *)(*(int *)(a0 + 0x328) + sVar1 * 0x124 + 0xe8);
    if (cVar10 == '\0') {
        dVar7 = (double)CONCAT44(*(u32 *)(a0 + 0x5c), *(u32 *)puVar3);
    } else {
        in_xd0 = *puVar3;
        dVar7 = *(double *)(a0 + 0x5c);
    }
    if (cVar9 == '\0') {
        fVar5 = SUB84(dVar7, 0) * (float)((u64)dVar7 >> 0x20);
    } else {
        fVar5 = SUB84(dVar7 * dVar7, 0);
    }
    if (cVar10 == '\0') {
        *(float *)(a0 + 0x408) = fVar5;
    } else {
        *(u64 *)(a0 + 0x408) = in_xd0;
    }
    puVar3 = (u64 *)(*(int *)(a0 + 0x328) + sVar1 * 0x124 + 0xec);
    if (cVar10 == '\0') {
        dVar7 = (double)CONCAT44(*(u32 *)(a0 + 0x60), *(u32 *)puVar3);
    } else {
        in_xd0 = *puVar3;
        dVar7 = *(double *)(a0 + 0x60);
    }
    if (cVar9 == '\0') {
        fVar5 = SUB84(dVar7, 0) * (float)((u64)dVar7 >> 0x20);
    } else {
        fVar5 = SUB84(dVar7 * dVar7, 0);
    }
    if (cVar10 == '\0') {
        *(float *)(a0 + 0x40c) = fVar5;
    } else {
        *(u64 *)(a0 + 0x40c) = in_xd0;
    }
    uVar2 = CAnimal_ChangeBodyTexture(a0, *(u32 *)(a0 + 0x478), ar6_00, uVar2);
    return uVar2;
}

/*
 * noop_027224  0x8c027224
 * does nothing
 * called by: FUN_8c02702c, FUN_8c02aba0, FUN_8c0384f8, FUN_8c087ed0, FUN_8c099e74, FUN_8c09b8e4, FUN_8c0a4de8
 */
u32 noop_027224(void) {
    u32 in_r0;

    return in_r0;
}

/*
 * set_field_64  0x8c02722c
 * called by: FUN_8c02702c
 */
u32 set_field_64(int a0, u32 a1) {
    *(u32 *)(a0 + 100) = a1;
    return 100;
}

/*
 * FUN_8c027234  0x8c027234
 * called by: FUN_8c02702c
 */
u32 FUN_8c027234(int a0, u32 a1, u32 a2, u32 a3) {
    u32 uVar1;

    uVar1 = FUN_8c027264(a0 + 0xb0, a1, a2, a3);
    return uVar1;
}

/*
 * FUN_8c027264  0x8c027264
 * called by: FUN_8c027234
 */
u32 FUN_8c027264(int a0, u32 a1, u32 a2, u32 a3) {
    u32 in_r0;

    *(u32 *)(a0 + 0x14) = a1;
    *(u32 *)(a0 + 0x10) = a2;
    *(u32 *)(a0 + 0x18) = a3;
    return in_r0;
}

/*
 * FUN_8c027270  0x8c027270
 */
u32 FUN_8c027270(int a0, u32 unused_a1, u32 a2, u32 a3) {
    u32 uVar1;
    int ar6_00;
    u32 uVar2;

    uVar2 = 1;
    FUN_8c027388(a0 + 0x174, 1);
    uVar1 = get_field_138_02737c(a0 + 0x174);
    uVar2 = FUN_8c02bef8(a0 + 0x174, uVar2, a2);
    ar6_00 = (int)(short)uVar2;
    uVar1 = FUN_8c02775c(a0, uVar1, ar6_00);
    uVar1 = FUN_8c0fa388(0x8c35468c, uVar1, ar6_00, a3);
    set_field_44(a0 + 0x21c, uVar1);
    uVar1 = get_field_99_s8(*(u32 *)(0x308 + a0));
    set_field_40_u8(a0 + 0x21c, uVar1);
    uVar1 = 1;
    set_field_28_u8(a0 + 0x2dc, 1);
    uVar1 = FUN_8c027344(*(u32 *)(0x308 + a0));
    return uVar1;
}

/*
 * FUN_8c027344  0x8c027344
 * called by: FUN_8c027270, FUN_8c0274bc
 */
int FUN_8c027344(int a0) {
    int iVar1;

    iVar1 = 0x9b;
    *(u8 *)(0x9b + a0) = 1;
    return iVar1;
}

/*
 * set_field_28_u8  0x8c027354
 * called by: FUN_8c027270
 */
u32 set_field_28_u8(int a0, u32 a1) {
    *(u8 *)(a0 + 0x28) = (u8)a1;
    return 0x28;
}

/*
 * set_field_40_u8  0x8c02735c
 * called by: FUN_8c027270, FUN_8c0274bc
 */
u32 set_field_40_u8(int a0, u32 a1) {
    *(u8 *)(a0 + 0x40) = (u8)a1;
    return 0x40;
}

/*
 * get_field_99_s8  0x8c027364
 * called by: FUN_8c027270, FUN_8c0274bc
 */
int get_field_99_s8(int a0) {
    return (int)*(char *)(0x99 + a0);
}

/*
 * set_field_44  0x8c027374
 * called by: FUN_8c027270, FUN_8c0274bc
 */
u32 set_field_44(int a0, u32 a1) {
    *(u32 *)(a0 + 0x44) = a1;
    return 0x44;
}

/*
 * get_field_138_02737c  0x8c02737c
 * called by: FUN_8c027270, FUN_8c0274bc, FUN_8c02cf20, FUN_8c02d1f4
 */
u32 get_field_138_02737c(int a0) {
    return *(u32 *)(0x138 + a0);
}

/*
 * FUN_8c027388  0x8c027388
 * called by: FUN_8c027270
 */
int FUN_8c027388(int a0, u32 a1) {
    int iVar1;

    iVar1 = 0x144;
    *(u8 *)(0x144 + a0) = (u8)a1;
    return iVar1;
}

/*
 * FUN_8c027394  0x8c027394
 */
u32 FUN_8c027394(int a0, u32 a1, u32 a2, u32 a3) {
    u32 uVar1;

    FUN_8c0f4c0c(a0);
    (**(code **)(**(int **)(0x30c + a0) + 0x24))(*(int **)(0x30c + a0), a1, a2, a3);
    uVar1 = (**(code **)(0xa8 + *(int *)(a0 + 8)))(a0, a1, a2, a3);
    return uVar1;
}

/*
 * noop_0273d0  0x8c0273d0
 */
u32 noop_0273d0(void) {
    u32 in_r0;

    return in_r0;
}

/*
 * FUN_8c0273d4  0x8c0273d4
 */
u32 FUN_8c0273d4(int a0) {
    u32 uVar1;

    uVar1 = FUN_8c0273f8(*(u32 *)(0x308 + a0), 1);
    return uVar1;
}

/*
 * FUN_8c0273f8  0x8c0273f8
 * called by: FUN_8c0273d4
 */
int FUN_8c0273f8(int a0, u32 a1) {
    int iVar1;

    iVar1 = 0x81;
    *(u8 *)(0x81 + a0) = (u8)a1;
    return iVar1;
}

/*
 * FUN_8c027404  0x8c027404
 */
u32 FUN_8c027404(int a0) {
    u32 uVar1;

    FUN_8c027448(*(u32 *)(0x308 + a0), 1);
    uVar1 = FUN_8c02743c(*(u32 *)(0x30c + a0), 1);
    return uVar1;
}

/*
 * FUN_8c02743c  0x8c02743c
 * called by: FUN_8c027404
 */
int FUN_8c02743c(int a0, u32 a1) {
    int iVar1;

    iVar1 = 0x21c;
    *(u32 *)(0x21c + a0) = a1;
    return iVar1;
}

/*
 * FUN_8c027448  0x8c027448
 * called by: FUN_8c027404
 */
int FUN_8c027448(int a0, u32 a1) {
    int iVar1;

    iVar1 = 0x82;
    *(u8 *)(0x82 + a0) = (u8)a1;
    return iVar1;
}

/*
 * FUN_8c027454  0x8c027454
 */
u32 FUN_8c027454(int a0) {
    u32 uVar1;

    uVar1 = FUN_8c027478(*(u32 *)(0x308 + a0), 1);
    return uVar1;
}

/*
 * FUN_8c027478  0x8c027478
 * called by: FUN_8c027454
 */
int FUN_8c027478(int a0, u32 a1) {
    int iVar1;

    iVar1 = 0x84;
    *(u8 *)(0x84 + a0) = (u8)a1;
    return iVar1;
}

/*
 * noop_027484  0x8c027484
 */
u32 noop_027484(void) {
    u32 in_r0;

    return in_r0;
}

/*
 * noop_027488  0x8c027488
 */
u32 noop_027488(void) {
    u32 in_r0;

    return in_r0;
}

/*
 * FUN_8c02748c  0x8c02748c
 */
u32 FUN_8c02748c(int a0) {
    u32 uVar1;

    uVar1 = FUN_8c0274b0(*(u32 *)(0x308 + a0), 1);
    return uVar1;
}

/*
 * FUN_8c0274b0  0x8c0274b0
 * called by: FUN_8c02748c
 */
int FUN_8c0274b0(int a0, u32 a1) {
    int iVar1;

    iVar1 = 0x87;
    *(u8 *)(0x87 + a0) = (u8)a1;
    return iVar1;
}

/*
 * FUN_8c0274bc  0x8c0274bc
 */
u32 FUN_8c0274bc(int a0, u16 *a1, int a2, u32 a3) {
    int iVar1;
    u32 uVar2;
    u32 uVar3;
    u16 *ar5_00;
    int iVar4;

    ar5_00 = a1;
    iVar1 = get_field_138_02737c(a0 + 0x174);
    if (iVar1 != 1) {
        iVar1 = get_field_138_02737c(a0 + 0x174);
        if (iVar1 != 2)
            goto LAB_8c027550;
    }
    uVar2 = get_field_138_02737c(a0 + 0x174);
    uVar3 = FUN_8c02bef8(a0 + 0x174, ar5_00, a2);
    a2 = (int)(short)uVar3;
    uVar2 = FUN_8c02775c(a0, uVar2, a2);
    uVar2 = FUN_8c0fa388(0x8c35468c, uVar2, a2, a3);
    set_field_44(a0 + 0x21c, uVar2);
    ar5_00 = (u16 *)get_field_99_s8(*(u32 *)(0x308 + a0));
    set_field_40_u8(a0 + 0x21c, ar5_00);
LAB_8c027550:
    iVar1 = noop_0fa5b4(0x8c35468c);
    iVar4 = (**(code **)(**(int **)(0x308 + a0) + 0x40))(*(int **)(0x308 + a0), ar5_00, a2, a3);
    if (iVar1 == iVar4) {
        iVar1 = (**(code **)(**(int **)(0x308 + a0) + 0x40))(*(int **)(0x308 + a0), ar5_00, a2, a3);
        if (0 < iVar1) {
            ar5_00 = (u16 *)0x1;
            FUN_8c02b04c(a0, 1);
        }
    }
    if (*a1 == 0) {
        if ((*a1 == 0) && (7 < a1[1])) {
            if (a1[1] < 0x18) {
                ar5_00 = (u16 *)libgcc_divide_helper_0101e4((u32)a1[1], 8);
                FUN_8c02d2e0(a0 + 0x174, ar5_00, a2, a3);
            } else {
                ar5_00 = (u16 *)libgcc_divide_helper_0101e4((u32)a1[1], 0x18);
                FUN_8c02d2e0(a0 + 0x174, ar5_00, a2, a3);
            }
            FUN_8c027344(*(u32 *)(0x308 + a0));
        }
    } else {
        ar5_00 = (u16 *)(u32)*a1;
        FUN_8c02d2e0(a0 + 0x174, ar5_00, a2, a3);
        FUN_8c027344(*(u32 *)(0x308 + a0));
    }
    iVar1 = FUN_8c025ff4(a0 + 0x174);
    if (iVar1 == 1) {
        FUN_8c02a6f8(a0, ar5_00, a2, a3);
    }
    uVar2 = get_field_0_s8(a0 + 0x1ec);
    if ((char)uVar2 != '\0') {
        FUN_8c02b190(a0);
    }
    FUN_8c0353bc(a0 + 0x2dc, a0 + 0x174, a2);
    uVar2 = (**(code **)(**(int **)(0x308 + a0) + 0x3c))(*(int **)(0x308 + a0), a0 + 0x174, a0 + 0x2dc, a3);
    return uVar2;
}

/*
 * ret_const_ffffffff_0276ec  0x8c0276ec
 */
u32 ret_const_ffffffff_0276ec(void) {
    return 0xffffffff;
}

/*
 * FUN_8c0276f4  0x8c0276f4
 */
int FUN_8c0276f4(int a0, u32 a1, u32 a2, u32 a3) {
    int iVar1;
    int iVar2;

    iVar1 = noop_0fa5b4(0x8c35468c);
    iVar2 = (**(code **)(**(int **)(0x308 + a0) + 0x40))(*(int **)(0x308 + a0), a1, a2, a3);
    if (iVar1 == iVar2) {
        iVar2 = (**(code **)(**(int **)(0x308 + a0) + 0x40))(*(int **)(0x308 + a0), a1, a2, a3);
        if (0 < iVar2) {
            iVar2 = FUN_8c02b04c(a0, 1);
        }
    }
    return iVar2;
}

/*
 * FUN_8c02775c  0x8c02775c
 * called by: FUN_8c027270, FUN_8c0274bc
 */
u32 FUN_8c02775c(u32 unused_a0, int a1, u32 a2) {
    int iVar1;

    if (((a1 == 1) && (iVar1 = (int)(short)a2, iVar1 < 8)) && (-1 < iVar1)) {
        switch (iVar1) {
        case 0:
            return 0;
        case 1:
            return 1;
        case 2:
            return 2;
        case 3:
            return 3;
        case 4:
            return 4;
        case 5:
            return 5;
        case 6:
            return 6;
        case 7:
            return 7;
        }
    }
    if (((a1 == 2) && (iVar1 = (int)(short)a2, iVar1 < 5)) && (-1 < iVar1)) {
        switch (iVar1) {
        case 0:
            return 8;
        case 1:
            return 9;
        case 2:
            return 10;
        case 3:
            return 0xb;
        case 4:
            return 0xc;
        }
    }
    return 0xc;
}

/*
 * FUN_8c02781c  0x8c02781c
 */
u32 FUN_8c02781c(int a0, u32 a1, u32 a2, u32 a3) {
    u32 uVar1;

    uVar1 = (*(code *)(&Vec3_assign_wrap_027844))(*(u32 *)(0x30c + a0), a1, a2, a3);
    return uVar1;
}

/*
 * Vec3_assign_wrap_027844  0x8c027844
 */
u32 Vec3_assign_wrap_027844(int a0, u32 a1, u32 a2, u32 a3) {
    u32 uVar1;

    uVar1 = Vec3_assign(a0 + 0x13c, a1, a2, a3);
    return uVar1;
}

/*
 * vec3_copy_on_field_14c_wrap  0x8c02786c
 * only calls vec3_copy_on_field_14c
 */
u32 vec3_copy_on_field_14c_wrap(int a0, u32 a1, u32 a2, u32 a3) {
    u32 uVar1;

    uVar1 = vec3_copy_on_field_14c(*(u32 *)(0x30c + a0), a1, a2, a3);
    return uVar1;
}

/*
 * vec3_copy_on_field_14c  0x8c027894
 * calls vec3_copy_8c023d8c on the member at +0x14c
 * called by: vec3_copy_on_field_14c_wrap
 */
u32 vec3_copy_on_field_14c(int a0, u32 a1, u32 a2, u32 a3) {
    u32 uVar1;

    uVar1 = vec3_copy_8c023d8c(a0 + 0x14c, a1, a2, a3);
    return uVar1;
}

/*
 * FUN_8c0278bc  0x8c0278bc
 */
u32 FUN_8c0278bc(int a0, u32 a1, u32 a2, u32 a3) {
    u32 uVar1;

    uVar1 = FUN_8c0336e8(*(u32 *)(0x30c + a0), a1, a2, a3);
    return uVar1;
}

/*
 * FUN_8c0278e4  0x8c0278e4
 */
u32 FUN_8c0278e4(int a0, u32 a1, u32 a2, u32 a3) {
    u32 uVar1;

    uVar1 = (**(code **)(**(int **)(0x308 + a0) + 0x1c))(*(int **)(0x308 + a0), a1, a2, a3);
    return uVar1;
}

/*
 * noop_027904  0x8c027904
 */
u32 noop_027904(void) {
    u32 in_r0;

    return in_r0;
}

/*
 * FUN_8c027908  0x8c027908
 */
u32 FUN_8c027908(int a0, u32 a1, u32 a2, u32 a3) {
    u32 uVar1;

    uVar1 = (*(code *)(&get_field_124_027930))(*(u32 *)(0x30c + a0), a1, a2, a3);
    return uVar1;
}

/*
 * get_field_124_027930  0x8c027930
 * called by: CAnimal_m7_0ade84, Class_12a078_m2_05eee0, Class_12a5d0_m2_08a49c, Class_12a5d0_m3_08a704,
 * Class_12a7a8_m1_098d14, Class_12ab2c_m2_09db4c, Class_12acc8_m1_09f470, Class_12b0c4_m1_0ab7f4 (+17 more)
 */
u32 get_field_124_027930(int a0, u32 a1, u32 unused_a2, u32 a3) {
    return *(u32 *)(0x124 + a0);
}

/*
 * FUN_8c02793c  0x8c02793c
 */
u32 FUN_8c02793c(int a0) {
    if ((*(u32 *)(a0 + 0x74) & 1) == 1) {
        return 1;
    }
    return 0;
}

/*
 * mask_74_fffffffe  0x8c027954
 * called by: Class_12a7f4_m2_09a060, Class_12a7f4_m3_09a558, Class_12ad50_m2_0a4fdc, FUN_8c05f660, FUN_8c099714,
 * FUN_8c099914, FUN_8c0999ac, FUN_8c09ff1c (+3 more)
 */
u32 mask_74_fffffffe(int a0) {
    *(u32 *)(a0 + 0x74) = *(u32 *)(a0 + 0x74) & 0xfffffffe;
    return 1;
}

/*
 * FUN_8c027970  0x8c027970
 */
u32 FUN_8c027970(int a0) {
    if ((*(u32 *)(a0 + 0x74) & 2) == 2) {
        return 1;
    }
    return 0;
}

/*
 * FUN_8c027988  0x8c027988
 * called by: Class_12a990_m2_09bc2c
 */
u32 FUN_8c027988(int a0) {
    if ((*(u32 *)(a0 + 0x74) & 0x40) == 0x40) {
        return 1;
    }
    return 0;
}

/*
 * FUN_8c0279a0  0x8c0279a0
 */
u32 FUN_8c0279a0(int a0) {
    if ((*(u32 *)(a0 + 0x74) & 0x100) == 0x100) {
        return 1;
    }
    return 0;
}

/*
 * set_bits_74_100  0x8c0279c0
 */
u32 set_bits_74_100(int a0) {
    *(u32 *)(a0 + 0x74) = *(u32 *)(a0 + 0x74) | 0x100;
    return 1;
}

/*
 * FUN_8c0279e0  0x8c0279e0
 */
u32 FUN_8c0279e0(int a0) {
    if ((*(u32 *)(a0 + 0x74) & 0x80) == 0x80) {
        return 1;
    }
    return 0;
}

/*
 * FUN_8c027a00  0x8c027a00
 */
u32 FUN_8c027a00(int a0, u32 a1, u32 a2, u32 a3) {
    int iVar1;

    iVar1 = (**(code **)(**(int **)(0x308 + a0) + 0x20))(*(int **)(0x308 + a0), a1, a2, a3);
    if ((iVar1 != 0) && (iVar1 = (*(code *)(&get_field_214_027a4c))(*(u32 *)(0x30c + a0), a1, a2, a3), iVar1 != 0)) {
        return 1;
    }
    return 0;
}

/*
 * get_field_214_027a4c  0x8c027a4c
 */
u32 get_field_214_027a4c(int a0) {
    return *(u32 *)(0x214 + a0);
}

/*
 * set_bits_74_80  0x8c027a58
 */
u32 set_bits_74_80(int a0) {
    *(u32 *)(a0 + 0x74) = *(u32 *)(a0 + 0x74) | 0x80;
    return 1;
}

/*
 * FUN_8c027a78  0x8c027a78
 * name hint from a string it uses: Failed to load Pack CAnimal
 * called by: CFrogManEgg_LoadGRReq, CHigyoEgg_LoadGRReq, CMothEgg_LoadGRReq, CSpiderEgg_LoadGRReq
 * strings: "Failed to load Pack:CAnimal::LoadGRReq()"; "Failed to load Pack:CAnimal::LoadGRReq()"; "Read NJCM
 * Failed.."; "Read NJTL Failed.." ...
 */
u32 FUN_8c027a78(int a0, int a1, int a2) {
    int iVar1;
    int iVar2;
    int a5;
    u32 uVar3;
    u8 *ar7_00;
    u32 *puVar4;
    u32 uVar5;
    int s0;
    int iVar6;
    u32 uStack_2c;
    u32 uStack_28;
    u32 auStack_24[2];

    auStack_24[0] = 0;
    uStack_28 = 0;
    uVar5 = 0;
    iVar6 = a2 * 0x124;
    iVar1 = *(int *)(a0 + 0x328) + iVar6;
    s0 = a0 + a2;
    uStack_2c = 0;
    iVar2 = *(int *)(a0 + 0x418);
    if ((iVar2 < 0xc) && (-1 < iVar2)) {
        ar7_00 = (&switchD_8c027ae0::switchdataD_8c027afc)[iVar2];
        a5 = a1;
        switch (iVar2) {
        case 0:
            *(u16 *)(a0 + 0x414) = 0;
            *(u32 *)(a0 + 0x418) = 1;
            break;
        case 1:
            if (*(int *)(iVar1 + 0x18) == 0) {
                *(u32 *)(a0 + 0x418) = 2;
            } else {
                iVar2 = FUN_8c020d90(a1, *(u32 *)(iVar1 + 0x18), *(u32 *)(a0 + 0x410), s0);
                if (iVar2 == 1) {
                    *(u32 *)(a0 + 0x418) = 2;
                } else if (iVar2 == 0) {
                    report_error_message(*(u32 *)(iVar1 + 0x18), "Failed to load Pack:CAnimal::LoadGRReq()", 0, 2);
                }
            }
            break;
        case 2:
            if (*(int *)(iVar1 + 4) == 0) {
                *(u32 *)(a0 + 0x418) = 3;
            } else {
                iVar1 = FUN_8c028390(a0, *(u32 *)(*(short *)(a0 + 0x414) * 4 + *(int *)(iVar1 + 4)),
                                     *(u32 *)(a0 + 0x410), *(int *)(iVar1 + 0xa0) + *(short *)(a0 + 0x414) * 4,
                                     a0 + 0x414, (int)*(short *)(iVar1 + 0xa4), a1, s0, 0);
                if (iVar1 == 1) {
                    *(u16 *)(a0 + 0x414) = 0;
                    *(u32 *)(a0 + 0x418) = 3;
                }
            }
            break;
        case 3:
            if (*(int *)(iVar1 + 0x1c) == 0) {
                *(u32 *)(a0 + 0x418) = 4;
            } else {
                puVar4 = &uStack_2c;
                uVar3 = *(u32 *)(a0 + 0x410);
                iVar2 = FUN_8c020ba0(a1, *(u32 *)(iVar1 + 0x1c), uVar3, puVar4);
                if (iVar2 == 1) {
                    set_field_0_015bb0(iVar1 + 0xb0, uStack_2c);
                    *(u32 *)(a0 + 0x418) = 4;
                } else if (iVar2 == 0) {
                    report_error_message(*(u32 *)(iVar1 + 0x18), "Failed to load Pack:CAnimal::LoadGRReq()", 0, 2);
                }
            }
            break;
        case 4:
            if (*(int *)(iVar1 + 8) == 0) {
                *(u32 *)(a0 + 0x418) = 5;
            } else {
                iVar1 = FUN_8c028390(a0, *(u32 *)(*(short *)(a0 + 0x414) * 4 + *(int *)(iVar1 + 8)),
                                     *(u32 *)(a0 + 0x410), *(int *)(iVar1 + 0xa8) + *(short *)(a0 + 0x414) * 4,
                                     a0 + 0x414, (int)*(short *)(iVar1 + 0xac), a1, s0, 1);
                if (iVar1 == 1) {
                    *(u16 *)(a0 + 0x414) = 0;
                    *(u32 *)(a0 + 0x418) = 5;
                }
            }
            break;
        case 5:
            puVar4 = auStack_24;
            uVar3 = *(u32 *)(a0 + 0x410);
            iVar2 = FUN_8c0209b0(a1, *(u32 *)(iVar1 + 0xc), uVar3, puVar4);
            if (iVar2 == 1) {
                set_field_0_015ad4(iVar1 + 0x70, auStack_24[0], uVar3);
                *(u32 *)(a0 + 0x418) = 6;
            } else if (iVar2 == 0) {
                report_error_message(*(u32 *)(iVar1 + 0xc), "Read NJCM Failed..", 0, 2);
            }
            break;
        case 6:
            if (*(int *)(iVar1 + 0x20) == 0) {
                puVar4 = &uStack_28;
                uVar3 = *(u32 *)(a0 + 0x410);
                iVar2 = FUN_8c020aa8(a1, *(u32 *)(iVar1 + 0xc), uVar3, puVar4);
                if (iVar2 == 1) {
                    (**(code **)(*(int *)(iVar1 + 0x78) + 8))((int *)(iVar1 + 0x78), uStack_28, uVar3, puVar4);
                    *(u32 *)(a0 + 0x418) = 7;
                } else if (iVar2 == 0) {
                    report_error_message(*(u32 *)(iVar1 + 0xc), "Read NJTL Failed..", 0, 2);
                }
            } else {
                uVar3 = *(u32 *)(iVar1 + 0xc);
                FUN_8c029400(a0, iVar1 + 0x20, uVar3, ar7_00);
                (**(code **)(*(int *)(iVar1 + 0x78) + 8))((int *)(iVar1 + 0x78), iVar1 + 0x28, uVar3, ar7_00);
                *(u32 *)(a0 + 0x418) = 7;
            }
            break;
        case 7:
            if (*(int *)(iVar1 + 0x20) == 0) {
                uVar3 = get_field_4_0253e4(iVar1 + 0x78, a1, iVar6, ar7_00);
                iVar2 = FUN_8c020e80(a1, *(u32 *)(iVar1 + 0x14), *(u32 *)(a0 + 0x410), uVar3);
                if (iVar2 == 0) {
                    report_error_message(*(u32 *)(iVar1 + 0x14), "Failed to load tex:CAnimal::LoadTRReq()", 0, 2);
                }
            } else {
                uVar3 = get_field_4_0253e4(iVar1 + 0x78, a1, iVar6, ar7_00);
                iVar2 = CDCGD_ReadPVMFileReq(a1, *(u32 *)(iVar1 + 0x20), *(u32 *)(a0 + 0x410), uVar3, s0);
                if (iVar2 == 0) {
                    report_error_message("Failed to load body pvm textuer..", "CAnimal::LoadTextureResourceReq()", 0,
                                         2);
                }
            }
            if (iVar2 == 1) {
                if (*(int *)(iVar1 + 0x34) == 0) {
                    *(u32 *)(a0 + 0x418) = 8;
                } else {
                    *(u32 *)(a0 + 0x418) = 9;
                }
            }
            break;
        case 8:
            if (*(int *)(iVar1 + 0x10) == 0) {
                *(u32 *)(a0 + 0x418) = 0;
                uVar5 = 1;
            } else {
                if (*(int *)(iVar1 + 0x48) == 0) {
                    uVar3 = get_field_4_0253e4(iVar1 + 0x88, get_field_4_0253e4, iVar6, ar7_00);
                    iVar2 = FUN_8c020e80(a1, *(u32 *)(iVar1 + 0x10), *(u32 *)(a0 + 0x410), uVar3);
                    if (iVar2 == 0) {
                        report_error_message(*(u32 *)(iVar1 + 0x10), "Failed to load tex:CAnimal::LoadTRReq()", 0, 2);
                    }
                } else {
                    FUN_8c029400(a0, iVar1 + 0x48, *(u32 *)(iVar1 + 0xc), ar7_00);
                    iVar6 = iVar1 + 0x50;
                    uVar3 = 0x88;
                    iVar2 = iVar6;
                    (**(code **)(*(int *)(iVar1 + 0x88) + 8))((int *)(iVar1 + 0x88), iVar6, 0x88, iVar6);
                    uVar3 = get_field_4_0253e4(iVar1 + 0x88, iVar6, uVar3, iVar2);
                    iVar2 = CDCGD_ReadPVMFileReq(a1, *(u32 *)(iVar1 + 0x48), *(u32 *)(a0 + 0x410), uVar3, s0);
                    if (iVar2 == 0) {
                        report_error_message("Failed to load face pvm textuer..", "CAnimal::LoadGResourceReq()", 0, 2);
                    }
                }
                if (iVar2 == 1) {
                    if (*(int *)(iVar1 + 0x5c) == 0) {
                        *(u32 *)(a0 + 0x418) = 0;
                        uVar5 = 1;
                    } else {
                        *(u32 *)(a0 + 0x418) = 0xb;
                    }
                }
            }
            break;
        case 9:
            iVar6 = *(int *)(iVar1 + 0xc);
            FUN_8c029400(a0, iVar1 + 0x34, iVar6, ar7_00);
            a5 = iVar1 + 0x3c;
            (**(code **)(*(int *)(iVar1 + 0x80) + 8))((int *)(iVar1 + 0x80), a5, iVar6, ar7_00);
            *(u32 *)(a0 + 0x418) = 10;
        case 10:
            uVar3 = get_field_4_0253e4(iVar1 + 0x80, a5, iVar6, ar7_00);
            iVar1 = CDCGD_ReadPVMFileReq(a1, *(u32 *)(iVar1 + 0x34), *(u32 *)(a0 + 0x410), uVar3, s0);
            if (iVar1 == 0) {
                report_error_message("Failed to load SPECIAL body pvm textuer..", "CAnimal::LoadGResourceReq()", 0, 2);
            }
            if (iVar1 == 1) {
                *(u32 *)(a0 + 0x418) = 8;
            }
            break;
        case 0xb:
            uVar3 = *(u32 *)(iVar1 + 0xc);
            iVar6 = iVar1 + 0x5c;
            FUN_8c029400(a0, iVar6, uVar3, iVar6);
            iVar2 = iVar1 + 100;
            (**(code **)(*(int *)(iVar1 + 0x90) + 8))((int *)(iVar1 + 0x90), iVar2, uVar3, iVar6);
            uVar3 = get_field_4_0253e4(iVar1 + 0x90, iVar2, uVar3, iVar6);
            iVar1 = CDCGD_ReadPVMFileReq(a1, *(u32 *)(iVar1 + 0x5c), *(u32 *)(a0 + 0x410), uVar3, s0);
            if (iVar1 == 0) {
                report_error_message("Failed to load SPECIAL face pvm textuer..", "CAnimal::LoadGResourceReq()", 0, 2);
            }
            if (iVar1 == 1) {
                *(u32 *)(a0 + 0x418) = 0;
                uVar5 = 1;
            }
        }
    } else {
        report_error_message("Invalid Load Sequence..", "CAnimal::LoadGResourceReq()", 0, 2);
    }
    return uVar5;
}

/*
 * FUN_8c028390  0x8c028390
 * name hint from a string it uses: Failed to Read CAnimal LoadM
 * called by: FUN_8c027a78, FUN_8c08c9dc
 * strings: "Failed to Read ..:CAnimal::LoadMFile()"
 */
u32 FUN_8c028390(u32 unused_a0, char *a1, u32 a2, u32 *a3, short *s0, u32 s4, u32 s8, u32 s12, int s16) {
    u32 *ar7_00;
    u32 uVar1;
    int iVar2;
    u32 auStack_24[2];

    uVar1 = 0;
    iVar2 = 2;
    auStack_24[0] = 0;
    if (s16 == 0) {
        ar7_00 = auStack_24;
        iVar2 = FUN_8c020ba0(s8, a1, a2, ar7_00);
    } else {
        ar7_00 = a3;
        if (s16 == 1) {
            if (*a1 == '\0') {
                iVar2 = 1;
            } else {
                ar7_00 = auStack_24;
                iVar2 = FUN_8c020c98(s8, a1, a2, ar7_00);
            }
        }
    }
    if (iVar2 == 1) {
        if (s16 == 0) {
            set_field_0_015bb0(a3, auStack_24[0]);
        } else if (s16 == 1) {
            set_field_0_015be4(a3, auStack_24[0]);
        }
        *s0 = *s0 + 1;
        if (*s0 == (short)s4) {
            uVar1 = 1;
        }
    } else if (iVar2 == 0) {
        report_error_message(a1, "Failed to Read ..:CAnimal::LoadMFile()", 1, 2);
    }
    return uVar1;
}

/*
 * CAnimal_LoadGRWait  0x8c0284ac
 * called by: FUN_8c038e24, FUN_8c0885fc, FUN_8c09af68, FUN_8c09d310, FUN_8c0a5854, FUN_8c0ae160
 * strings: "Failed to Load :CAnimal::LoadGRWait"; "Attach NULL!!"; "CAnimal::LoadGRWait()"; "Read NMDM Failed.." ...
 */
u32 CAnimal_LoadGRWait(int a0, u32 a1, int a2, u32 *a3) {
    int iVar1;
    int iVar2;
    int iVar3;
    u32 uVar4;
    u32 *ar7_00;
    u32 *ar7_01;
    int iVar5;
    u32 uStack_24;
    u32 auStack_20[2];

    iVar5 = *(int *)(a0 + 0x328) + a2 * 0x124;
    auStack_20[0] = 0;
    uStack_24 = 0;
    ar7_01 = (u32 *)(a0 + a2);
    iVar3 = a2;
    if (*(int *)(iVar5 + 0x18) != 0) {
        iVar3 = *(int *)(a0 + 0x410);
        a3 = ar7_01;
        iVar1 = FUN_8c020ddc(a1, *(u32 *)(iVar5 + 0x18), iVar3, ar7_01);
        if (iVar1 == 0) {
            a3 = (u32 *)0x2;
            iVar3 = 0;
            report_error_message(*(u32 *)(iVar5 + 0x18), "Failed to Load :CAnimal::LoadGRWait", 0, 2);
        }
    }
    for (iVar1 = 0; iVar1 < *(short *)(iVar5 + 0xa4); iVar1 = iVar1 + 1) {
        if (**(char **)(iVar1 * 4 + *(int *)(iVar5 + 4)) == '\0') {
            a3 = (u32 *)0x2;
            iVar3 = 0;
            report_error_message("Attach NULL!!", "CAnimal::LoadGRWait()", 0, 2);
            auStack_20[0] = 0;
        } else {
            a3 = auStack_20;
            iVar3 = *(int *)(a0 + 0x410);
            iVar2 = FUN_8c020bec(a1, *(u32 *)(iVar1 * 4 + *(int *)(iVar5 + 4)), iVar3, a3);
            if (iVar2 == 0) {
                a3 = (u32 *)0x2;
                iVar3 = 0;
                report_error_message(*(u32 *)(iVar1 * 4 + *(int *)(iVar5 + 4)), "Read NMDM Failed..", 0, 2);
            }
        }
        set_field_0_015bb0(*(int *)(iVar5 + 0xa0) + iVar1 * 4, auStack_20[0]);
    }
    if (*(int *)(iVar5 + 0x1c) != 0) {
        a3 = auStack_20;
        iVar3 = *(int *)(a0 + 0x410);
        iVar1 = FUN_8c020bec(a1, *(u32 *)(iVar5 + 0x1c), iVar3, a3);
        if (iVar1 == 1) {
            set_field_0_015bb0(iVar5 + 0xb0, auStack_20[0]);
        } else {
            a3 = (u32 *)0x2;
            iVar3 = 0;
            report_error_message(*(u32 *)(iVar5 + 0x1c), "Failed to read Munzu hand motion..", 0, 2);
        }
    }
    for (iVar1 = 0; iVar1 < *(short *)(iVar5 + 0xac); iVar1 = iVar1 + 1) {
        if (**(char **)(iVar1 * 4 + *(int *)(iVar5 + 8)) == '\0') {
            auStack_20[0] = 0;
        } else {
            a3 = auStack_20;
            iVar3 = *(int *)(a0 + 0x410);
            iVar2 = FUN_8c020ce4(a1, *(u32 *)(iVar1 * 4 + *(int *)(iVar5 + 8)), iVar3, a3);
            if (iVar2 == 0) {
                a3 = (u32 *)0x2;
                iVar3 = 0;
                report_error_message(*(u32 *)(iVar1 * 4 + *(int *)(iVar5 + 8)), "Read NSSM Failed..", 0, 2);
            }
            set_field_0_015be4(*(int *)(*(int *)(a0 + 0x328) + a2 * 0x124 + 0xa8) + iVar1 * 4, auStack_20[0]);
        }
        set_field_0_015be4(*(int *)(iVar5 + 0xa8) + iVar1 * 4, auStack_20[0]);
    }
    ar7_00 = &uStack_24;
    uVar4 = *(u32 *)(a0 + 0x410);
    iVar3 = FUN_8c0209fc(a1, *(u32 *)(iVar5 + 0xc), uVar4, ar7_00);
    if (iVar3 == 0) {
        ar7_00 = (u32 *)0x2;
        uVar4 = 0;
        report_error_message(*(u32 *)(iVar5 + 0xc), "Read NJCM Failed..:CAnimal::LoadGRWait()", 0, 2);
    }
    set_field_0_015ad4(iVar5 + 0x70, uStack_24, uVar4);
    CAnimal_LoadGResourceWait(a0, a1, 0, ar7_01);
    uVar4 = 0;
    if (*(int *)(iVar5 + 0x34) != 0) {
        uVar4 = CAnimal_LoadGResourceWait(a0, a1, 1, ar7_01);
    }
    return uVar4;
}

/*
 * CAnimal_LoadGResourceWait  0x8c0287a4
 * called by: CAnimal_LoadGRWait
 * strings: "Read NJTL Failed..:CAnimal::LoadGRWait()"; "Failed to load tex:CAnimal::LoadGRWait()";
 * "CAnimal::LoadGResourceWait()"; "Failed to load body pvm textuer.." ...
 */
int CAnimal_LoadGResourceWait(int a0, u32 a1, int a2, u32 a3) {
    int iVar1;
    int *piVar2;
    int iVar3;
    u8 *ar5_00;
    u32 uVar4;
    u32 uVar5;
    u32 *ar7_00;
    u32 auStack_18[2];

    iVar1 = (**(code **)(0x144 + *(int *)(a0 + 8)))(a0, a1, a2, a3);
    if (*(int *)(a2 * 0x14 + iVar1 + 0x20) == 0) {
        auStack_18[0] = 0;
        ar7_00 = auStack_18;
        uVar4 = *(u32 *)(0x410 + a0);
        iVar3 = FUN_8c020af4(a1, *(u32 *)(iVar1 + 0xc), uVar4, ar7_00);
        if (iVar3 == 0) {
            ar7_00 = (u32 *)0x2;
            uVar4 = 0;
            (*(code *)(&report_error_message))(*(u32 *)(iVar1 + 0xc), "Read NJTL Failed..:CAnimal::LoadGRWait()", 0, 2);
        }
        piVar2 = (int *)(iVar1 + a2 * 8 + 0x78);
        uVar5 = auStack_18[0];
        (**(code **)(*piVar2 + 8))(piVar2, auStack_18[0], uVar4, ar7_00);
        uVar4 = get_field_4_0253e4(iVar1 + a2 * 8 + 0x78, uVar5, uVar4, ar7_00);
        uVar5 = *(u32 *)(0x410 + a0);
        ar5_00 = *(u8 **)(iVar1 + 0x14);
        iVar3 = FUN_8c020ef0(a1, ar5_00, uVar5, uVar4);
        if (iVar3 == 0) {
            uVar4 = 2;
            uVar5 = 0;
            ar5_00 = "Failed to load tex:CAnimal::LoadGRWait()";
            report_error_message(*(u32 *)(iVar1 + 0x14), ar5_00, 0, 2);
        }
    } else {
        uVar4 = *(u32 *)(iVar1 + 0xc);
        (*(code *)(&FUN_8c029400))(a0, a2 * 0x14 + iVar1 + 0x20, uVar4, a3);
        iVar3 = a2 * 0x14 + iVar1 + 0x28;
        piVar2 = (int *)(iVar1 + a2 * 8 + 0x78);
        (**(code **)(*piVar2 + 8))(piVar2, iVar3, uVar4, a3);
        uVar4 = get_field_4_0253e4(iVar1 + a2 * 8 + 0x78, iVar3, uVar4, a3);
        uVar5 = *(u32 *)(0x410 + a0);
        ar5_00 = *(u8 **)(a2 * 0x14 + iVar1 + 0x20);
        iVar3 = FUN_8c02100c(a1, ar5_00, uVar5, uVar4);
        if (iVar3 == 0) {
            uVar4 = 2;
            uVar5 = 0;
            ar5_00 = "CAnimal::LoadGResourceWait()";
            (*(code *)(&report_error_message))("Failed to load body pvm textuer..", ar5_00, 0, 2);
        }
    }
    if (*(int *)(iVar1 + 0x10) == 0) {
        iVar3 = 0;
    } else if (*(int *)(a2 * 0x14 + iVar1 + 0x48) == 0) {
        uVar4 = (*(code *)(&get_field_4_0253e4))(iVar1 + a2 * 8 + 0x88, ar5_00, uVar5, uVar4);
        iVar3 = (*(code *)(&FUN_8c020ef0))(a1, *(u32 *)(iVar1 + 0x10), *(u32 *)(0x410 + a0), uVar4);
        if (iVar3 == 0) {
            iVar3 = (*(code *)(&report_error_message))(*(u32 *)(iVar1 + 0x10),
                                                       "Failed to load facce tex:CAnimal::LoadGRWait()", 0, 2);
        }
    } else {
        uVar5 = *(u32 *)(iVar1 + 0xc);
        (*(code *)(&FUN_8c029400))(a0, a2 * 0x14 + iVar1 + 0x48, uVar5, uVar4);
        iVar3 = a2 * 0x14 + iVar1 + 0x50;
        piVar2 = (int *)(iVar1 + a2 * 8 + 0x88);
        (**(code **)(*piVar2 + 8))(piVar2, iVar3, uVar5, uVar4);
        uVar4 = (*(code *)(&get_field_4_0253e4))(iVar1 + a2 * 8 + 0x88, iVar3, uVar5, uVar4);
        iVar3 = (*(code *)(&FUN_8c02100c))(a1, *(u32 *)(a2 * 0x14 + iVar1 + 0x48), *(u32 *)(0x410 + a0), uVar4);
        if (iVar3 == 0) {
            iVar3 = (*(code *)(&report_error_message))("Failed to load face pvm textuer..",
                                                       "CAnimal::LoadGResourceWait()", 0, 2);
        }
    }
    return iVar3;
}

/*
 * FUN_8c028ab8  0x8c028ab8
 */
int FUN_8c028ab8(int a0, u32 a1, u32 a2) {
    u32 uVar1;

    uVar1 = FUN_8c02bef8(a0 + 0x174, a1, a2);
    return *(int *)(0x328 + a0) + (short)uVar1 * 0x124;
}

/*
 * FUN_8c028afc  0x8c028afc
 * called by: CMothLine_FreeGraphicResource, FUN_8c038e78, FUN_8c08864c, FUN_8c09afb8, FUN_8c09d384, FUN_8c0a58a4,
 * Squid_FreeGraphicResource
 */
u32 FUN_8c028afc(int a0, u32 a1, int a2) {
    u32 uVar1;
    int ar7_00;
    int iVar2;
    int iVar3;

    iVar2 = *(int *)(0x328 + a0) + a2 * 0x124;
    ar7_00 = a0 + a2;
    for (iVar3 = 0; iVar3 < *(short *)(0xa4 + iVar2); iVar3 = iVar3 + 1) {
        if (**(char **)(iVar3 * 4 + *(int *)(iVar2 + 4)) != '\0') {
            (*(code *)(&FUN_8c020c60))(a1, *(u32 *)(iVar3 * 4 + *(int *)(iVar2 + 4)), *(u32 *)(0x410 + a0), ar7_00);
        }
        if (**(char **)(iVar3 * 4 + *(int *)(iVar2 + 8)) != '\0') {
            (*(code *)(&FUN_8c020d58))(a1, *(u32 *)(iVar3 * 4 + *(int *)(iVar2 + 8)), *(u32 *)(0x410 + a0), ar7_00);
        }
    }
    iVar3 = ar7_00;
    (*(code *)(&FUN_8c020a70))(a1, *(u32 *)(iVar2 + 0xc), *(u32 *)(0x410 + a0), ar7_00);
    if (*(int *)(iVar2 + 0x20) == 0) {
        iVar3 = ar7_00;
        (*(code *)(&FUN_8c020b68))(a1, *(u32 *)(iVar2 + 0xc), *(u32 *)(0x410 + a0), ar7_00);
    }
    if (*(int *)(iVar2 + 0x18) != 0) {
        (*(code *)(&FUN_8c020e48))(a1, *(u32 *)(iVar2 + 0x18), *(u32 *)(0x410 + a0), ar7_00);
        iVar3 = ar7_00;
    }
    uVar1 = (**(code **)(0xf0 + *(int *)(a0 + 8)))(a0, a1, a2, iVar3);
    return uVar1;
}

/*
 * FUN_8c028c18  0x8c028c18
 * name hint from a string it uses: Failed wrap
 */
u32 FUN_8c028c18(int a0, u32 a1, int a2, u32 a3) {
    u32 uVar1;
    int iVar2;

    iVar2 = *(int *)(0x328 + a0) + a2 * 0x124;
    CTexture_ReleaseFromVRAM(iVar2 + 0x78, a1, a2, a3);
    if (*(int *)(iVar2 + 0x34) != 0) {
        CTexture_ReleaseFromVRAM(iVar2 + 0x80, a1, a2, a3);
    }
    uVar1 = 0;
    if (*(int *)(iVar2 + 0x10) != 0) {
        CTexture_ReleaseFromVRAM(iVar2 + 0x88, a1, a2, a3);
        uVar1 = 0;
        if (*(int *)(iVar2 + 0x5c) != 0) {
            uVar1 = CTexture_ReleaseFromVRAM(iVar2 + 0x90, a1, a2, a3);
        }
    }
    return uVar1;
}

/*
 * FUN_8c028c9c  0x8c028c9c
 */
u32 FUN_8c028c9c(int a0, u32 a1, u32 a2, u32 a3) {
    u32 uVar1;

    uVar1 = (*(code *)(&get_field_6c_028cc4))(*(u32 *)(0x308 + a0), a1, a2, a3);
    return uVar1;
}

/*
 * get_field_6c_028cc4  0x8c028cc4
 * called by: FUN_8c03c94c, FUN_8c04ddd4, FUN_8c04f034, FUN_8c050300, FUN_8c06f93c, FUN_8c070d7c, FUN_8c071a38,
 * FUN_8c077a38 (+3 more)
 */
u32 get_field_6c_028cc4(int a0, u32 a1) {
    return *(u32 *)(a0 + 0x6c);
}

/*
 * FUN_8c028ccc  0x8c028ccc
 * called by: FUN_8c0ae2b8
 */
u32 FUN_8c028ccc(int a0, int a1, u32 a2, u32 a3) {
    int iVar1;
    char cVar2;

    cVar2 = '\0';
    FUN_8c0f4e34(a0, a1, a2, a3);
    FUN_8c02cbe4(a0 + 0x174, a1 + 0x4c, a2, a3);
    iVar1 = a1 + 0xd8;
    FUN_8c035338(a0 + 0x2dc, iVar1);
    iVar1 = get_field_13c_028d9c(a0 + 0x174, iVar1, a2);
    if (iVar1 == 2) {
        (**(code **)(**(int **)(a0 + 0x308) + 0x2c))(*(int **)(a0 + 0x308), a1 + 200, 2, a3);
    } else {
        (**(code **)(**(int **)(a0 + 0x308) + 0x24))(*(int **)(a0 + 0x308), a1 + 200, a2, a3);
    }
    *(u32 *)(a0 + 0x460) = *(u32 *)(a1 + 0xe8);
    if (cVar2 == '\0') {
        *(u32 *)(a0 + 0x468) = *(u32 *)(a1 + 0xec);
    } else {
        *(u64 *)(a0 + 0x468) = *(u64 *)(a1 + 0xec);
    }
    return 0xec;
}

/*
 * get_field_13c_028d9c  0x8c028d9c
 * called by: Class_12a7a8_m1_098d14, Class_12c3c4_m2_104264, FUN_8c028ccc, FUN_8c028e20, FUN_8c028f60, FUN_8c02cf20,
 * FUN_8c02d1f4, FUN_8c035994 (+14 more)
 */
u32 get_field_13c_028d9c(int a0, u32 a1, u32 a2) {
    return *(u32 *)(0x13c + a0);
}

/*
 * FUN_8c028da8  0x8c028da8
 */
int FUN_8c028da8(int a0, int a1, u32 a2, u32 a3) {
    int iVar1;

    FUN_8c0f4ebc(a0, a1, a2, a3);
    FUN_8c02ce58(a0 + 0x174, a1 + 0x24);
    FUN_8c035338(a0 + 0x2dc, a1 + 0x58);
    (**(code **)(**(int **)(0x308 + a0) + 0x24))(*(int **)(0x308 + a0), a1 + 0x48, a2, a3);
    iVar1 = 0x460;
    *(u32 *)(0x460 + a0) = *(u32 *)(a1 + 0x68);
    return iVar1;
}

/*
 * FUN_8c028e20  0x8c028e20
 */
u32 FUN_8c028e20(int a0, u32 a1, u32 a2) {
    u32 r7;
    u32 uVar1;
    u32 ar5_00;
    u32 uVar2;
    u16 in_stack_ffffffe8;
    u16 uVar3;

    uVar1 = get_field_a2_s16(a1, a1);
    uVar2 = CONCAT22((short)uVar1, in_stack_ffffffe8);
    uVar1 = uVar1 & 0xffff;
    set_field_8(a0 + 0x21c, uVar1);
    uVar3 = (u16)((u32)uVar2 >> 0x10);
    uVar1 = get_field_a4_s16(a1, uVar1);
    ar5_00 = uVar1 & 0xffff;
    set_field_c(a0 + 0x21c, ar5_00, a2, r7, CONCAT22(uVar3, (short)uVar1));
    uVar2 = get_field_13c_028d9c(a0 + 0x174, ar5_00, a2);
    uVar2 = FUN_8c034d38(a0 + 0x2dc, uVar2);
    uVar2 = FUN_8c028ec8(*(u32 *)(a0 + 0x308), uVar2);
    return uVar2;
}

/*
 * FUN_8c028ec8  0x8c028ec8
 * called by: FUN_8c028e20, FUN_8c035d7c, FUN_8c035d9c, FUN_8c035dbc, FUN_8c035ddc, FUN_8c035dfc, FUN_8c035e1c,
 * FUN_8c035e3c (+7 more)
 */
int FUN_8c028ec8(int a0, u32 a1) {
    int iVar1;

    iVar1 = 0x98;
    *(u8 *)(0x98 + a0) = (u8)a1;
    return iVar1;
}

/*
 * set_field_c  0x8c028ed4
 * called by: CAnimal_m2_0386d0, Class_12a7f4_m2_09a060, Class_12a7f4_m3_09a558, Class_12a990_m2_09bc2c,
 * Class_12ad50_m2_0a4fdc, FUN_8c028e20, FUN_8c02cbe4, FUN_8c02ce58
 */
u32 set_field_c(int a0, u32 a1) {
    u32 in_r0;

    *(u32 *)(a0 + 0xc) = a1;
    return in_r0;
}

/*
 * set_field_8  0x8c028edc
 * called by: CAnimal_m2_0386d0, Class_12a7f4_m2_09a060, Class_12a7f4_m3_09a558, Class_12a990_m2_09bc2c,
 * Class_12ad50_m2_0a4fdc, FUN_8c028e20, FUN_8c02cbe4, FUN_8c02ce58
 */
u32 set_field_8(int a0, u32 a1) {
    u32 in_r0;

    *(u32 *)(a0 + 8) = a1;
    return in_r0;
}

/*
 * get_field_a2_s16  0x8c028ee4
 * called by: CAnimal_m2_0386d0, Class_12a7f4_m2_09a060, Class_12a7f4_m3_09a558, Class_12a990_m2_09bc2c,
 * Class_12ad50_m2_0a4fdc, FUN_8c028e20, FUN_8c06af5c, FUN_8c06afb0 (+2 more)
 */
int get_field_a2_s16(int a0, u32 a1) {
    return (int)*(short *)(0xa2 + a0);
}

/*
 * FUN_8c028ef0  0x8c028ef0
 */
u32 FUN_8c028ef0(int a0, float *a1, float *a2, float *a3) {
    *a1 = *(float *)(a0 + 0x30) + *(float *)(a0 + 0x3c8);
    *a2 = *(float *)(a0 + 0x34) + *(float *)(a0 + 0x3cc);
    *a3 = *(float *)(a0 + 0x38) + *(float *)(a0 + 0x3d0);
    return 0x3d0;
}

/*
 * FUN_8c028f34  0x8c028f34
 */
u32 FUN_8c028f34(int a0, u32 *a1, u32 *a2, u32 *a3) {
    *a1 = *(u32 *)(a0 + 0x3c8);
    *a2 = *(u32 *)(a0 + 0x3cc);
    *a3 = *(u32 *)(a0 + 0x3d0);
    return 0x3d0;
}

/*
 * FUN_8c028f60  0x8c028f60
 * called by: FUN_8c0ae270
 */
u32 FUN_8c028f60(int a0, int a1, u32 a2, u32 a3) {
    int iVar1;
    u32 a6;
    int ar5_00;
    char cVar2;

    cVar2 = '\0';
    FUN_8c0f4f0c(a0, a1, a2, a3);
    FUN_8c02cf20(a0 + 0x174, a1 + 0x4c, a2);
    ar5_00 = a1 + 0xd8;
    FUN_8c03539c(a0 + 0x2dc, ar5_00);
    iVar1 = get_field_13c_028d9c(a0 + 0x174, ar5_00, a2);
    if (iVar1 == 2) {
        a6 = get_field_13c_028d9c(a0 + 0x174, ar5_00, a2);
        (**(code **)(**(int **)(a0 + 0x308) + 0x30))(*(int **)(a0 + 0x308), a1 + 200, a6, a3);
    } else {
        (**(code **)(**(int **)(a0 + 0x308) + 0x28))(*(int **)(a0 + 0x308), a1 + 200, a2, a3);
    }
    *(u32 *)(a1 + 0xe8) = *(u32 *)(a0 + 0x460);
    if (cVar2 == '\0') {
        *(u32 *)(a1 + 0xec) = *(u32 *)(a0 + 0x468);
    } else {
        *(u64 *)(a1 + 0xec) = *(u64 *)(a0 + 0x468);
    }
    return 0x468;
}

/*
 * FUN_8c02903c  0x8c02903c
 */
u32 FUN_8c02903c(int a0, int a1, u32 a2, u32 a3) {
    FUN_8c0f4fa4(a0, a1, a2, a3);
    FUN_8c02d1f4(a0 + 0x174, a1 + 0x24, a2);
    FUN_8c03539c(a0 + 0x2dc, a1 + 0x58);
    (**(code **)(**(int **)(0x308 + a0) + 0x28))(*(int **)(0x308 + a0), a1 + 0x48, a2, a3);
    *(u32 *)(a1 + 0x68) = *(u32 *)(0x460 + a0);
    return 0x68;
}

/*
 * FUN_8c0290b8  0x8c0290b8
 */
u32 FUN_8c0290b8(int a0, u64 *a1, u32 a2) {
    u32 uVar1;
    u64 *puVar2;
    char cVar3;

    cVar3 = '\0';
    uVar1 = FUN_8c02bef8(a0 + 0x174, a1, a2);
    puVar2 = (u64 *)(*(int *)(a0 + 0x328) + (short)uVar1 * 0x124 + 0xf4);
    if (cVar3 == '\0') {
        *(u32 *)a1 = *(u32 *)puVar2;
    } else {
        *a1 = *puVar2;
    }
    return 0xf0;
}

/*
 * FUN_8c02911c  0x8c02911c
 * called by: FUN_8c0254d0
 */
u32 FUN_8c02911c(int a0, u32 a1, u32 a2) {
    u32 ar4_00;
    int iVar1;
    u32 in_fr1;
    u64 uVar2;
    char cVar3;

    cVar3 = '\0';
    *(u32 *)(a0 + 0x330) = 0;
    *(u32 *)(a0 + 0x308) = 0;
    *(u32 *)(a0 + 0x30c) = 0;
    *(u32 *)(a0 + 0x328) = 0;
    *(u32 *)(a0 + 0x32c) = 0;
    *(u32 *)(a0 + 0x424) = 1;
    *(u32 *)(a0 + 0x428) = 0;
    *(u32 *)(a0 + 0x364) = 0;
    *(u32 *)(a0 + 0x368) = 0;
    *(u32 *)(a0 + 0x36c) = 0x3f800000;
    *(u32 *)(a0 + 0x390) = 0;
    *(u32 *)(a0 + 0x394) = 0;
    *(u32 *)(a0 + 0x398) = 0x3f800000;
    uVar2 = CONCAT44(0x3e4ccccd, in_fr1);
    *(u32 *)(a0 + 0x170) = 0x3e4ccccd;
    set_field_4_on_field_f8(a0 + 0x174);
    *(u32 *)(a0 + 0x74) = *(u32 *)(a0 + 0x74) | 1;
    if (cVar3 == '\0') {
        *(u32 *)(a0 + 0x334) = 0;
    } else {
        *(u64 *)(a0 + 0x334) = uVar2 & 0xffffffff;
    }
    *(u32 *)(a0 + 0x430) = 0;
    *(u32 *)(a0 + 0x42c) = 0;
    *(u32 *)(a0 + 0x434) = 0;
    if (cVar3 == '\0') {
        *(u32 *)(a0 + 0x408) = 0;
    } else {
        *(u64 *)(a0 + 0x408) = uVar2 & 0xffffffff;
    }
    if (cVar3 == '\0') {
        *(u32 *)(a0 + 0x40c) = 0x3f800000;
    } else {
        *(u64 *)(a0 + 0x40c) = CONCAT44(0x3f800000, (int)uVar2);
    }
    *(u32 *)(a0 + 0x410) = 0;
    *(u16 *)(a0 + 0x414) = 0;
    *(u32 *)(a0 + 0x418) = 0;
    *(u32 *)(a0 + 0x420) = 0;
    *(u16 *)(a0 + 0x41c) = 0;
    *(u32 *)(a0 + 0x45c) = 0;
    *(u32 *)(a0 + 0x470) = 0;
    *(u32 *)(a0 + 0x458) = 0;
    if (cVar3 == '\0') {
        *(u32 *)(a0 + 0x438) = 0;
        *(u32 *)(a0 + 0x43c) = 0;
        *(u32 *)(a0 + 0x440) = 0;
        *(u32 *)(a0 + 0x444) = 0;
        *(u32 *)(a0 + 0x448) = 0;
        *(u32 *)(a0 + 0x44c) = 0;
        *(u32 *)(a0 + 0x450) = 0;
        uVar2 = uVar2 & 0xffffffff;
        *(u32 *)(a0 + 0x454) = 0;
    } else {
        *(u64 *)(a0 + 0x438) = 0;
        *(u64 *)(a0 + 0x43c) = 0;
        *(u64 *)(a0 + 0x440) = 0;
        *(u64 *)(a0 + 0x444) = 0x3f80000000000000;
        *(u64 *)(a0 + 0x448) = 0;
        *(u64 *)(a0 + 0x44c) = 0;
        *(u64 *)(a0 + 0x450) = 0;
        uVar2 = 0;
        *(u64 *)(a0 + 0x454) = 0x3f80000000000000;
    }
    *(u16 *)(a0 + 0x464) = 0;
    if (cVar3 == '\0') {
        *(u32 *)(a0 + 0x468) = 0;
    } else {
        *(u64 *)(a0 + 0x468) = uVar2;
    }
    *(u8 *)(a0 + 0x46c) = 1;
    *(u32 *)(a0 + 0x474) = 0;
    *(u32 *)(a0 + 0x47c) = 0;
    *(u32 *)(a0 + 0x478) = 0;
    *(u32 *)(a0 + 0x48c) = 0;
    ar4_00 = rand();
    iVar1 = libgcc_divide_helper_01031c(ar4_00, 100, a2);
    if (iVar1 < 0x14) {
        *(u32 *)(a0 + 0x460) = 0;
    } else if (iVar1 < 0x5a) {
        *(u32 *)(a0 + 0x460) = 1;
    } else {
        *(u32 *)(a0 + 0x460) = 2;
    }
    return 1;
}

/*
 * set_field_4_on_field_f8  0x8c0293d4
 * calls set_field_4 on the member at +0xf8
 * called by: FUN_8c02911c
 */
u32 set_field_4_on_field_f8(int a0) {
    u32 uVar1;

    uVar1 = set_field_4(a0 + 0xf8, 1);
    return uVar1;
}

/*
 * set_field_4  0x8c0293f8
 * called by: set_field_4_on_field_f8, set_field_4_on_field_f8_0611a8
 */
u32 set_field_4(int a0, u32 a1) {
    u32 in_r0;

    *(u32 *)(a0 + 4) = a1;
    return in_r0;
}

/*
 * FUN_8c029400  0x8c029400
 * name hint from a string it uses: CAnimal SetPVMTexture s
 * called by: FUN_8c027a78, FUN_8c08c9dc
 * strings: "CAnimal::SetPVMTexture():%s"; "PVM TexName Area is null.."; "CAnimal::SetPVMTexture():%s"; "PVM Texcount is
 * 0.."
 */
u8 *FUN_8c029400(u32 unused_a0, u8 *a1, u32 a2, u32 a3) {
    u8 *ar5_00;
    u8 auStack_10c[260];

    ar5_00 = a1;
    if (*(int *)(a1 + 0x10) == 0) {
        (*(code *)(&sprintf))(auStack_10c, a1, a2, a3, "CAnimal::SetPVMTexture():%s");
        a3 = 2;
        a2 = 0;
        ar5_00 = auStack_10c;
        (*(code *)(&report_error_message))("PVM TexName Area is null..", ar5_00, 0, 2);
    }
    if (*(int *)(a1 + 4) == 0) {
        (*(code *)(&sprintf))(auStack_10c, ar5_00, a2, a3, "CAnimal::SetPVMTexture():%s");
        (*(code *)(&report_error_message))("PVM Texcount is 0..", auStack_10c, 0, 2);
    }
    (*(code *)(&FUN_8c239170))(a1 + 8, *(u32 *)(a1 + 0x10), 0x8c4312a8, *(u32 *)(a1 + 4));
    return a1 + 8;
}

/*
 * FUN_8c0294c0  0x8c0294c0
 * called by: Class_12a7f4_m4_09aa8c, Class_12a7f4_m5_09aa48, Class_12a7f4_m6_09aa28, Class_12a990_m4_09c77c,
 * Class_12a990_m6_09c6a4, Class_12ad50_m4_0a536c, Class_12ad50_m5_0a5328, Class_12ad50_m6_0a5308
 */
u32 FUN_8c0294c0(int a0) {
    *(u32 *)(a0 + 0x74) = *(u32 *)(a0 + 0x74) & 0xffffffbf;
    *(u32 *)(a0 + 0x74) = *(u32 *)(a0 + 0x74) & 0xffffffef;
    *(u32 *)(a0 + 0x74) = *(u32 *)(a0 + 0x74) & 0xffffffdf;
    *(u32 *)(a0 + 0x74) = *(u32 *)(a0 + 0x74) | 0x40;
    return 0x74;
}

/*
 * FUN_8c029510  0x8c029510
 * called by: FUN_8c026968, FUN_8c026de0, FUN_8c029510
 */
u32 FUN_8c029510(int a0, int a1, int a2, int a3) {
    u32 uVar1;
    double *pdVar2;
    int iVar3;
    int ar6_00;
    int *piVar4;
    double dVar5;
    u32 in_fr15;
    double in_xd14;
    char cVar6;
    char cVar7;
    u32 in_stack_ffffffd4;
    u16 uVar8;
    u32 ain0;

    uVar8 = (u16)((u32)in_stack_ffffffd4 >> 0x10);
    cVar7 = '\0';
    cVar6 = '\0';
    uVar1 = FUN_8c02bef8(a0 + 0x174, a1, a2);
    ain0 = CONCAT22(uVar8, (short)uVar1);
    piVar4 = (int *)(*(int *)(a0 + 0x328) + (short)uVar1 * 0x124);
    uVar1 = 0x40;
    iVar3 = g_8c27d1ec * 0x40 + 0x8c27c1ec;
    memmove_bytes((g_8c27d1ec + 1) * 0x40 + 0x8c27c1ec, iVar3, 0x40);
    g_8c27d1ec = g_8c27d1ec + 1;
    matrix_push(0, iVar3, uVar1, a3, ain0);
    iVar3 = a1;
    ar6_00 = a2;
    FUN_8c029af0(a0, a1, a2);
    if (*(int *)(a1 + 4) != 0) {
        pdVar2 = (double *)(*(int *)(a1 + 4) + 0x14);
        if (cVar7 == '\0') {
            in_fr15 = *(u32 *)pdVar2;
        } else {
            in_xd14 = *pdVar2;
        }
        pdVar2 = (double *)(*(int *)(a1 + 4) + 0x14);
        dVar5 = in_xd14;
        if (cVar7 == '\0') {
            dVar5 = (double)CONCAT44(in_fr15, *(u32 *)(a0 + 0x5c));
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
        if (*(int *)(a0 + 0x344) == a1) {
            iVar3 = a1;
            FUN_8c029dec(a0, a1, ar6_00, a3);
        } else if (*(int *)(a0 + 0x348) == a1) {
            a3 = a0 + 900;
            ar6_00 = a0 + 0x374;
            iVar3 = a0 + 0x364;
            FUN_8c02a2b8(a0, iVar3, ar6_00, a3);
            obj_set_texlist(*piVar4 + 0x1f0, iVar3, ar6_00);
            iVar3 = a0 + 900;
            FUN_8c029ca8(a0, iVar3, ar6_00, a3);
            obj_set_texlist(*(u32 *)(a0 + 0x42c), iVar3, ar6_00);
        } else if (*(int *)(a0 + 0x34c) == a1) {
            a3 = a0 + 0x3b0;
            ar6_00 = a0 + 0x3a0;
            iVar3 = a0 + 0x390;
            FUN_8c02a2b8(a0, iVar3, ar6_00, a3);
            obj_set_texlist(*piVar4 + 0x1f0, iVar3, ar6_00);
            iVar3 = a0 + 0x3b0;
            FUN_8c029ca8(a0, iVar3, ar6_00, a3);
            obj_set_texlist(*(u32 *)(a0 + 0x42c), iVar3, ar6_00);
        } else if ((((*(int *)(a0 + 0x358) == a1) || (*(int *)(a0 + 0x354) == a1)) || (*(int *)(a0 + 0x360) == a1)) ||
                   (*(int *)(a0 + 0x35c) == a1)) {
            iVar3 = a1;
            (**(code **)(*(int *)(a0 + 8) + 0x198))(a0, a1, ar6_00, a3);
        } else {
            iVar3 = *(int *)(a1 + 4);
            FUN_8c02a29c(a0, iVar3, ar6_00, a3);
        }
        pdVar2 = (double *)(*(int *)(a1 + 4) + 0x14);
        if (cVar7 == '\0') {
            *(u32 *)pdVar2 = in_fr15;
        } else {
            *pdVar2 = in_xd14;
        }
    }
    if (*(int *)(a0 + 0x350) == a1) {
        obj_set_texlist(*piVar4 + 0x1f8, iVar3, ar6_00);
        iVar3 = noop_015bb8(0x8c27d3e8);
        ar6_00 = a2;
        FUN_8c029d64(a0, iVar3, a2, a3);
        obj_set_texlist(*(u32 *)(a0 + 0x42c), iVar3, ar6_00);
    }
    if (*(int *)(a1 + 0x2c) != 0) {
        iVar3 = *(int *)(a1 + 0x2c);
        ar6_00 = a2;
        FUN_8c029510(a0, iVar3, a2, a3);
    }
    matrix_pop_n(1);
    g_8c27d1ec = g_8c27d1ec + -1;
    uVar1 = 0;
    if (*(int *)(a1 + 0x30) != 0) {
        uVar1 = FUN_8c029510(a0, *(u32 *)(a1 + 0x30), a2, a3);
    }
    return uVar1;
}

/*
 * FUN_8c0297b8  0x8c0297b8
 * called by: FUN_8c026968, FUN_8c026de0, FUN_8c0297b8
 */
u32 FUN_8c0297b8(int a0, u32 *a1, int a2, int a3) {
    u32 uVar1;
    int iVar2;
    int iVar3;
    u32 *ar5_00;
    u32 unaff_r10;
    int *piVar4;
    double dVar5;
    u32 in_fr15;
    double in_xd14;
    char cVar6;
    char cVar7;
    u32 in_stack_ffffffcc;
    u16 uVar8;
    u32 ain0;

    uVar8 = (u16)((u32)in_stack_ffffffcc >> 0x10);
    cVar7 = '\0';
    cVar6 = '\0';
    uVar1 = FUN_8c02bef8(a0 + 0x174, a1, a2);
    ain0 = CONCAT22(uVar8, (short)uVar1);
    piVar4 = (int *)(*(int *)(a0 + 0x328) + (short)uVar1 * 0x124);
    uVar1 = 0x40;
    iVar3 = g_8c27d1ec * 0x40 + 0x8c27c1ec;
    memmove_bytes((g_8c27d1ec + 1) * 0x40 + 0x8c27c1ec, iVar3, 0x40);
    g_8c27d1ec = g_8c27d1ec + 1;
    matrix_push(0, iVar3, uVar1, a3, ain0);
    ar5_00 = a1;
    iVar3 = a2;
    FUN_8c029af0(a0, a1, a2);
    if (a1[1] != 0) {
        unaff_r10 = *(u32 *)a1[1];
    }
    if ((*a1 & 0x80) == 0) {
        ar5_00 = (u32 *)0x8c42d408;
        iVar3 = a2;
        iVar2 = FUN_8c21f27c(a1, 0x8c42d408, a2);
        if (iVar2 == 1) {
            *(u32 *)a1[1] = 0x8c42d408;
        }
    }
    if (a1[1] != 0) {
        if (cVar7 == '\0') {
            in_fr15 = *(u32 *)(a1[1] + 0x14);
        } else {
            in_xd14 = *(double *)(a1[1] + 0x14);
        }
        dVar5 = in_xd14;
        if (cVar7 == '\0') {
            dVar5 = (double)CONCAT44(in_fr15, *(u32 *)(a0 + 0x5c));
        }
        if (cVar6 == '\0') {
            dVar5 = (double)CONCAT44((float)((u64)dVar5 >> 0x20) * SUB84(dVar5, 0), SUB84(dVar5, 0));
        } else {
            dVar5 = dVar5 * dVar5;
        }
        if (cVar7 == '\0') {
            *(int *)(a1[1] + 0x14) = (int)((u64)dVar5 >> 0x20);
        } else {
            *(double *)(a1[1] + 0x14) = dVar5;
        }
        if (*(u32 **)(a0 + 0x344) == a1) {
            ar5_00 = a1;
            FUN_8c029dec(a0, a1, iVar3, a3);
        } else if (*(u32 **)(a0 + 0x348) == a1) {
            FUN_8c0f52c8();
            a3 = a0 + 900;
            iVar3 = a0 + 0x374;
            iVar2 = a0 + 0x364;
            FUN_8c02a2b8(a0, iVar2, iVar3, a3);
            obj_set_texlist(*piVar4 + 0x1f0, iVar2, iVar3);
            ar5_00 = (u32 *)(a0 + 900);
            FUN_8c029ca8(a0, ar5_00, iVar3, a3);
            obj_set_texlist(*(u32 *)(a0 + 0x42c), ar5_00, iVar3);
            FUN_8c0f5308();
        } else if (*(u32 **)(a0 + 0x34c) == a1) {
            FUN_8c0f52c8();
            a3 = a0 + 0x3b0;
            iVar3 = a0 + 0x3a0;
            iVar2 = a0 + 0x390;
            FUN_8c02a2b8(a0, iVar2, iVar3, a3);
            obj_set_texlist(*piVar4 + 0x1f0, iVar2, iVar3);
            ar5_00 = (u32 *)(a0 + 0x3b0);
            FUN_8c029ca8(a0, ar5_00, iVar3, a3);
            obj_set_texlist(*(u32 *)(a0 + 0x42c), ar5_00, iVar3);
            FUN_8c0f5308();
        } else if ((((*(u32 **)(a0 + 0x358) == a1) || (*(u32 **)(a0 + 0x354) == a1)) ||
                    (*(u32 **)(a0 + 0x360) == a1)) ||
                   (*(u32 **)(a0 + 0x35c) == a1)) {
            ar5_00 = a1;
            (**(code **)(*(int *)(a0 + 8) + 0x198))(a0, a1, iVar3, a3);
            *(u32 *)a1[1] = unaff_r10;
        } else {
            ar5_00 = (u32 *)a1[1];
            FUN_8c02a29c(a0, ar5_00, iVar3, a3);
            *(u32 *)a1[1] = unaff_r10;
        }
        if (cVar7 == '\0') {
            *(u32 *)(a1[1] + 0x14) = in_fr15;
        } else {
            *(double *)(a1[1] + 0x14) = in_xd14;
        }
    }
    if (*(u32 **)(a0 + 0x350) == a1) {
        FUN_8c0f52c8();
        obj_set_texlist(*piVar4 + 0x1f8, ar5_00, iVar3);
        ar5_00 = (u32 *)noop_015bb8(0x8c27d3e8);
        iVar3 = a2;
        FUN_8c029d64(a0, ar5_00, a2, a3);
        obj_set_texlist(*(u32 *)(a0 + 0x42c), ar5_00, iVar3);
        FUN_8c0f5308();
    }
    if (a1[0xb] != 0) {
        ar5_00 = (u32 *)a1[0xb];
        iVar3 = a2;
        FUN_8c0297b8(a0, ar5_00, a2, a3);
    }
    matrix_pop_n(1);
    g_8c27d1ec = g_8c27d1ec + -1;
    uVar1 = 0;
    if (a1[0xc] != 0) {
        uVar1 = FUN_8c0297b8(a0, a1[0xc], a2, a3);
    }
    return uVar1;
}

/*
 * FUN_8c029af0  0x8c029af0
 * called by: FUN_8c029510, FUN_8c0297b8, FUN_8c029d64
 */
u32 FUN_8c029af0(int a0, int a1, int a2) {
    u32 r7;
    u32 uVar1;
    u32 ar4_00;
    int ar5_00;
    int iVar2;
    u32 uVar3;
    u32 uVar4;
    char cVar5;
    u32 in_stack_ffffff88;
    u8 auStack_74[64];
    u32 uStack_34;
    u32 uStack_30;
    u32 uStack_2c;
    u32 uStack_28;
    u32 uStack_24;
    u32 uStack_20;
    u32 uStack_1c;
    u32 uStack_18;
    u32 uStack_14;

    cVar5 = '\0';
    iVar2 = a2;
    if (**(int **)(a0 + 0x434) == 0) {
        uStack_1c = *(u32 *)(a1 + 8);
        uStack_18 = *(u32 *)(a1 + 0xc);
        uStack_14 = *(u32 *)(a1 + 0x10);
        ar5_00 = a1;
    } else {
        ar5_00 = a2;
        FUN_8c2545ec(&uStack_1c, a2);
    }
    if (*(int *)(*(int *)(a0 + 0x434) + 4) == 0) {
        uStack_34 = *(u32 *)(a1 + 0x14);
        uStack_30 = *(u32 *)(a1 + 0x18);
        uStack_2c = *(u32 *)(a1 + 0x1c);
    } else {
        ar5_00 = a2;
        FUN_8c254698(&uStack_34, a2);
    }
    if (*(int *)(*(int *)(a0 + 0x434) + 8) == 0) {
        if (cVar5 == '\0') {
            uStack_28 = *(u32 *)(a1 + 0x20);
            uStack_24 = *(u32 *)(a1 + 0x24);
            uStack_20 = *(u32 *)(a1 + 0x28);
        } else {
            uStack_28 = (u32) * (u64 *)(a1 + 0x20);
            uStack_24 = (u32) * (u64 *)(a1 + 0x24);
            uStack_20 = (u32) * (u64 *)(a1 + 0x28);
            uStack_1c = (u32)((u64) * (u64 *)(a1 + 0x28) >> 0x20);
        }
    } else {
        FUN_8c254780(&uStack_28, a2);
        ar5_00 = a2;
    }
    FUN_8c25b5d0(0, ar5_00, iVar2, r7, in_stack_ffffff88);
    uVar1 = uStack_34;
    uVar3 = uStack_30;
    uVar4 = uStack_2c;
    FUN_8c256e18(0, uStack_34, uStack_30, uStack_2c, in_stack_ffffff88);
    ar4_00 = 0;
    matrix_scale(0, uVar1, uVar3, uVar4, in_stack_ffffff88);
    FUN_8c25484c();
    *(int *)(a0 + 0x434) = *(int *)(a0 + 0x434) + 0x18;
    njGetMatrix(auStack_74, uVar1, uVar3, uVar4, a0);
    FUN_8c25b5d0(auStack_74, uVar1, uVar3, uVar4, a0);
    FUN_8c02430c(auStack_74, uVar1, uVar3, uVar4);
    njGetMatrix(auStack_74, uVar1, uVar3, uVar4, a0);
    uVar1 = uStack_34;
    uVar3 = uStack_30;
    uVar4 = uStack_2c;
    FUN_8c256e18(auStack_74, uStack_34, uStack_30, uStack_2c, a0);
    FUN_8c02430c(auStack_74, uVar1, uVar3, uVar4);
    njGetMatrix(auStack_74, uVar1, uVar3, uVar4, a0);
    matrix_scale(auStack_74, uVar1, uVar3, uVar4, a0);
    uVar1 = FUN_8c02430c(auStack_74, uVar1, uVar3, uVar4);
    return uVar1;
}

/*
 * FUN_8c029ca8  0x8c029ca8
 * called by: FUN_8c029510, FUN_8c0297b8
 */
u32 FUN_8c029ca8(int a0, u32 a1, u32 a2, u32 a3) {
    u32 uVar1;
    u32 ar4_00;
    int iVar2;
    u32 in_stack_ffffffe4;
    u16 uVar3;

    uVar3 = (u16)((u32)in_stack_ffffffe4 >> 0x10);
    uVar1 = FUN_8c02bef8(a0 + 0x174, a1, a2);
    iVar2 = *(int *)(a0 + 0x328);
    ar4_00 = 0;
    matrix_push(0, a1, a2, a3, CONCAT22(uVar3, (short)uVar1));
    FUN_8c019088();
    matrix_scale_wrap(ar4_00, a1);
    uVar1 = noop_015510(*(int *)(iVar2 + (short)uVar1 * 0x124) + 0x1e8);
    FUN_8c02a29c(a0, uVar1, a2, a3);
    uVar1 = matrix_pop_n(1);
    return uVar1;
}

/*
 * FUN_8c029d64  0x8c029d64
 * called by: FUN_8c029510, FUN_8c0297b8, FUN_8c029d64
 */
u32 FUN_8c029d64(int a0, int a1, u32 a2, u32 a3) {
    u32 uVar1;
    double *pdVar2;
    u32 ar5_00;
    double dVar3;
    u32 uVar4;
    double in_xd14;
    u32 in_PR;
    char cVar5;
    char cVar6;

    cVar6 = '\0';
    cVar5 = '\0';
    uVar4 = *(u32 *)(*(int *)(a1 + 4) + 0x14);
    matrix_push(0, a1, a2, a3, in_PR);
    uVar1 = a2;
    FUN_8c029af0(a0, a1, a2);
    pdVar2 = (double *)(*(int *)(a1 + 4) + 0x14);
    dVar3 = in_xd14;
    if (cVar6 == '\0') {
        dVar3 = (double)CONCAT44(uVar4, *(u32 *)(a0 + 0x5c));
    }
    if (cVar5 == '\0') {
        dVar3 = (double)CONCAT44((float)((u64)dVar3 >> 0x20) * SUB84(dVar3, 0), SUB84(dVar3, 0));
    } else {
        dVar3 = dVar3 * dVar3;
    }
    if (cVar6 == '\0') {
        *(int *)pdVar2 = (int)((u64)dVar3 >> 0x20);
    } else {
        *pdVar2 = dVar3;
    }
    ar5_00 = *(u32 *)(a1 + 4);
    FUN_8c02a29c(a0, ar5_00, uVar1, a3);
    pdVar2 = (double *)(*(int *)(a1 + 4) + 0x14);
    if (cVar6 == '\0') {
        *(u32 *)pdVar2 = uVar4;
    } else {
        *pdVar2 = in_xd14;
    }
    if (*(int *)(a1 + 0x2c) != 0) {
        ar5_00 = *(u32 *)(a1 + 0x2c);
        FUN_8c029d64(a0, ar5_00, a2, a3);
        uVar1 = a2;
    }
    uVar1 = matrix_pop_n(1);
    return uVar1;
}

/*
 * FUN_8c029dec  0x8c029dec
 * called by: FUN_8c029510, FUN_8c0297b8
 */
u32 FUN_8c029dec(int a0, int a1, int a2, u32 a3) {
    u32 uVar1;
    int *piVar2;
    int iVar3;
    int iVar4;
    u32 uVar5;
    u32 uVar6;
    u32 uVar7;
    float fVar8;
    double dVar9;
    double dVar10;
    u32 uVar11;
    double in_dr14;
    u64 in_xd0;
    bool bVar12;
    int ar6_00;
    int iVar13;
    char cVar14;
    char cVar15;
    u32 in_stack_ffffff9c;
    u16 uVar16;

    uVar16 = (u16)((u32)in_stack_ffffff9c >> 0x10);
    cVar15 = '\0';
    cVar14 = '\0';
    iVar3 = a1;
    uVar1 = FUN_8c02bef8(a0 + 0x174, a1, a2);
    uVar7 = CONCAT22(uVar16, (short)uVar1);
    if (*(int *)(a0 + 0x3dc) == *(int *)(a0 + 0x3d8)) {
        **(u32 **)(a1 + 4) =
            *(u32 *)(*(int *)(*(int *)(a0 + 0x328) + (short)uVar1 * 0x124) + *(int *)(a0 + 0x3e4) * 4 + 0x40);
    } else {
        a2 = (int)*(short *)(a0 + 0x3fa);
        iVar3 = 0x8c279308;
        FUN_8c02ab24(a0, 0x8c279308, a2);
        **(u32 **)(a1 + 4) = 0x8c279308;
    }
    FUN_8c0f52c8();
    obj_set_texlist(*(u32 *)(a0 + 0x430), iVar3, a2);
    iVar4 = 0;
    piVar2 = (int *)get_field_4_0253e4(*(u32 *)(a0 + 0x430), iVar3, a2, a3);
    if (*(int *)(a0 + 0x460) != 0) {
        if (*(int *)(a0 + 0x460) != 2)
            goto LAB_8c029f42;
        iVar4 = 2;
    }
    iVar4 = iVar4 + 6;
    for (iVar3 = 0; iVar3 < 2; iVar3 = iVar3 + 1) {
        uVar1 = *(u32 *)(iVar3 * 0xc + *piVar2 + 8);
        *(u32 *)(iVar3 * 0xc + *piVar2 + 8) = *(u32 *)((iVar4 + iVar3) * 0xc + *piVar2 + 8);
        *(u32 *)((iVar4 + iVar3) * 0xc + *piVar2 + 8) = uVar1;
    }
LAB_8c029f42:
    if (cVar15 == '\0') {
        dVar9 = (double)CONCAT44(0x47800000, *(u32 *)(a0 + 0x404));
    } else {
        in_xd0 = *(u64 *)(a0 + 0x404);
        dVar9 = 1.4411521878487204e+18;
    }
    if (cVar14 == '\0') {
        fVar8 = SUB84(dVar9, 0) * (float)((u64)dVar9 >> 0x20);
    } else {
        fVar8 = SUB84(dVar9 * dVar9, 0);
    }
    if (cVar15 == '\0') {
        dVar9 = (double)CONCAT44(0x43b40000, fVar8);
    } else {
        dVar9 = 2.17348488426987e-311;
    }
    if (cVar14 == '\0') {
        iVar3 = (int)(SUB84(dVar9, 0) / (float)((u64)dVar9 >> 0x20));
    } else {
        iVar3 = (int)(dVar9 / dVar9);
    }
    if (cVar15 == '\0') {
        dVar9 = (double)CONCAT44(0x47800000, *(u32 *)(a0 + 0x400));
    } else {
        in_xd0 = *(u64 *)(a0 + 0x400);
        dVar9 = 1.4411521878487204e+18;
    }
    if (cVar14 == '\0') {
        fVar8 = SUB84(dVar9, 0) * (float)((u64)dVar9 >> 0x20);
    } else {
        fVar8 = SUB84(dVar9 * dVar9, 0);
    }
    if (cVar15 == '\0') {
        dVar9 = (double)CONCAT44(0x43b40000, fVar8);
    } else {
        dVar9 = 2.17348488426987e-311;
    }
    if (cVar14 == '\0') {
        ar6_00 = (int)(SUB84(dVar9, 0) / (float)((u64)dVar9 >> 0x20));
    } else {
        ar6_00 = (int)(dVar9 / dVar9);
    }
    if (cVar15 == '\0') {
        dVar9 = (double)CONCAT44(0x47800000, *(u32 *)(a0 + 0x3fc));
    } else {
        in_xd0 = *(u64 *)(a0 + 0x3fc);
        dVar9 = 1.4411521878487204e+18;
    }
    if (cVar14 == '\0') {
        fVar8 = SUB84(dVar9, 0) * (float)((u64)dVar9 >> 0x20);
    } else {
        fVar8 = SUB84(dVar9 * dVar9, 0);
    }
    if (cVar15 == '\0') {
        dVar9 = (double)CONCAT44(0x43b40000, fVar8);
    } else {
        dVar9 = 2.17348488426987e-311;
    }
    if (cVar14 == '\0') {
        iVar13 = (int)(SUB84(dVar9, 0) / (float)((u64)dVar9 >> 0x20));
    } else {
        iVar13 = (int)(dVar9 / dVar9);
    }
    FUN_8c256b0c(0, iVar13, ar6_00, iVar3, uVar7);
    if (cVar15 == '\0') {
        dVar9 = (double)CONCAT44(0x3f666666, *(u32 *)(a0 + 0x3fc));
    } else {
        in_xd0 = *(u64 *)(a0 + 0x3fc);
        dVar9 = 5.238690724707756e-11;
    }
    if (cVar14 == '\0') {
        fVar8 = SUB84(dVar9, 0) * (float)((u64)dVar9 >> 0x20);
    } else {
        fVar8 = SUB84(dVar9 * dVar9, 0);
    }
    if (cVar15 == '\0') {
        *(float *)(a0 + 0x3fc) = fVar8;
        dVar9 = (double)CONCAT44(0x3f666666, *(u32 *)(a0 + 0x400));
    } else {
        *(u64 *)(a0 + 0x3fc) = in_xd0;
        in_xd0 = *(u64 *)(a0 + 0x400);
        dVar9 = 5.238690724707756e-11;
    }
    if (cVar14 == '\0') {
        fVar8 = SUB84(dVar9, 0) * (float)((u64)dVar9 >> 0x20);
    } else {
        fVar8 = SUB84(dVar9 * dVar9, 0);
    }
    if (cVar15 == '\0') {
        *(float *)(a0 + 0x400) = fVar8;
        dVar9 = (double)CONCAT44(0x3f666666, *(u32 *)(a0 + 0x404));
    } else {
        *(u64 *)(a0 + 0x400) = in_xd0;
        in_xd0 = *(u64 *)(a0 + 0x404);
        dVar9 = 5.238690724707756e-11;
    }
    if (cVar14 == '\0') {
        fVar8 = SUB84(dVar9, 0) * (float)((u64)dVar9 >> 0x20);
    } else {
        fVar8 = SUB84(dVar9 * dVar9, 0);
    }
    if (cVar15 == '\0') {
        *(float *)(a0 + 0x404) = fVar8;
        in_dr14 = (double)CONCAT44((int)((u64)in_dr14 >> 0x20), *(u32 *)(a0 + 0x3fc));
        dVar9 = (double)CONCAT44(*(u32 *)(a0 + 0x400), fVar8);
    } else {
        *(u64 *)(a0 + 0x404) = in_xd0;
        dVar9 = *(double *)(a0 + 0x400);
    }
    if (cVar14 == '\0') {
        in_dr14 = (double)CONCAT44((int)((u64)in_dr14 >> 0x20), SUB84(in_dr14, 0) + (float)((u64)dVar9 >> 0x20));
    } else {
        in_dr14 = in_dr14 + dVar9;
    }
    if (cVar15 == '\0') {
        dVar9 = (double)CONCAT44(*(u32 *)(a0 + 0x404), SUB84(dVar9, 0));
    } else {
        dVar9 = *(double *)(a0 + 0x404);
    }
    if (cVar14 == '\0') {
        in_dr14 = (double)CONCAT44((int)((u64)in_dr14 >> 0x20), SUB84(in_dr14, 0) + (float)((u64)dVar9 >> 0x20));
    } else {
        in_dr14 = in_dr14 + dVar9;
    }
    if (cVar15 == '\0') {
        dVar9 = (double)CONCAT44(0x3dcccccd, SUB84(dVar9, 0));
    } else {
        dVar9 = -5.238690707360522e-11;
    }
    if (cVar14 == '\0') {
        bVar12 = SUB84(in_dr14, 0) < (float)((u64)dVar9 >> 0x20);
    } else {
        bVar12 = in_dr14 < dVar9;
    }
    if (bVar12) {
        if (cVar15 == '\0') {
            dVar9 = (double)CONCAT44(0xbdcccccd, SUB84(dVar9, 0));
        } else {
            dVar9 = -8.132627400321583e-251;
        }
        if (cVar14 == '\0') {
            bVar12 = (float)((u64)dVar9 >> 0x20) < SUB84(in_dr14, 0);
        } else {
            bVar12 = dVar9 < in_dr14;
        }
        if (bVar12) {
            clear_3_words(a0 + 0x3fc, iVar13, ar6_00, iVar3);
        }
    }
    uVar6 = SUB84(dVar9, 0);
    uVar11 = SUB84(in_dr14, 0);
    uVar1 = *(u32 *)(a1 + 4);
    FUN_8c02a29c(a0, uVar1, ar6_00, iVar3);
    if (*(int *)(a0 + 0x460) != 1) {
        for (iVar13 = 0; iVar13 < 2; iVar13 = iVar13 + 1) {
            uVar5 = *(u32 *)((iVar4 + iVar13) * 0xc + *piVar2 + 8);
            *(u32 *)((iVar4 + iVar13) * 0xc + *piVar2 + 8) = *(u32 *)(iVar13 * 0xc + *piVar2 + 8);
            *(u32 *)(iVar13 * 0xc + *piVar2 + 8) = uVar5;
        }
    }
    if (*(int *)(a0 + 0x45c) != 0) {
        if (cVar14 == '\0') {
            dVar9 = (double)CONCAT44((float)*(int *)(a0 + 0x45c), uVar11);
        } else {
            dVar9 = (double)*(int *)(a0 + 0x45c);
        }
        if (cVar15 == '\0') {
            dVar10 = (double)CONCAT44(0x44e10000, uVar6);
        } else {
            dVar10 = 2.3262783273243e-311;
        }
        if (cVar14 == '\0') {
            dVar9 = (double)CONCAT44((float)((u64)dVar9 >> 0x20) / (float)((u64)dVar10 >> 0x20), SUB84(dVar9, 0));
        } else {
            dVar9 = dVar9 / dVar10;
        }
        if (cVar14 == '\0') {
            dVar9 = (double)CONCAT44((float)((u64)dVar9 >> 0x20) - 1.0, SUB84(dVar9, 0));
        } else {
            dVar9 = dVar9 - (double)CONCAT44(0x3f800000, SUB84(dVar10, 0));
        }
        if (cVar15 == '\0') {
            *(int *)(a0 + 0x448) = (int)((u64)dVar9 >> 0x20);
            *(u32 *)(a0 + 0x44c) = *(u32 *)(a0 + 0x43c);
            *(u32 *)(a0 + 0x450) = *(u32 *)(a0 + 0x440);
            *(u32 *)(a0 + 0x454) = *(u32 *)(a0 + 0x444);
        } else {
            *(double *)(a0 + 0x448) = dVar9;
            *(u64 *)(a0 + 0x44c) = *(u64 *)(a0 + 0x43c);
            *(u64 *)(a0 + 0x450) = *(u64 *)(a0 + 0x440);
            *(u64 *)(a0 + 0x454) = *(u64 *)(a0 + 0x444);
        }
        FUN_8c233dac(a0 + 0x448);
        uVar6 = *(u32 *)(*piVar2 + 8);
        *(u32 *)(*piVar2 + 8) = *(u32 *)(*piVar2 + 0x44);
        *(u32 *)(*piVar2 + 0x44) = uVar6;
        matrix_push(0, uVar1, ar6_00, iVar3, uVar7);
        matrix_scale(0, uVar1, ar6_00, iVar3, uVar7);
        uVar1 = *(u32 *)(a1 + 4);
        FUN_8c02a29c(a0, uVar1, ar6_00, iVar3);
        matrix_pop_n(1);
        uVar7 = *(u32 *)(*piVar2 + 0x44);
        *(u32 *)(*piVar2 + 0x44) = *(u32 *)(*piVar2 + 8);
        *(u32 *)(*piVar2 + 8) = uVar7;
        if (cVar15 == '\0') {
            *(u32 *)(a0 + 0x448) = *(u32 *)(a0 + 0x438);
        } else {
            *(u64 *)(a0 + 0x448) = *(u64 *)(a0 + 0x438);
        }
        FUN_8c233dac(a0 + 0x448);
    }
    obj_set_texlist(*(u32 *)(a0 + 0x42c), uVar1, ar6_00);
    uVar1 = FUN_8c0f5308();
    return uVar1;
}

/*
 * clear_3_words  0x8c02a1fc
 * a0[0..2] = 0
 * called by: Class_129cbc_m1_031598, Class_12b2ac_m1_0aff3c, FUN_8c029dec, FUN_8c049b68, FUN_8c04b168, FUN_8c04c314,
 * FUN_8c051c14, FUN_8c0530e0 (+14 more)
 */
u32 clear_3_words(u32 *a0, u32 a1, u32 unused_a2, u32 a3) {
    a0[2] = 0;
    a0[1] = 0;
    *a0 = 0;
    return 0;
}

/*
 * FUN_8c02a230  0x8c02a230
 */
float *FUN_8c02a230(int a0, int a1, u32 a2, u32 a3) {
    float *pfVar1;
    float fVar2;
    u64 in_xd14;
    u32 in_PR;
    char cVar3;

    cVar3 = '\0';
    fVar2 = *(float *)(*(int *)(a1 + 4) + 0x14);
    *(float *)(*(int *)(a1 + 4) + 0x14) = fVar2 * *(float *)(a0 + 0x468);
    matrix_scale(0, a1, a2, a3, in_PR);
    FUN_8c02a29c(a0, *(u32 *)(a1 + 4), a2, a3);
    pfVar1 = (float *)(*(int *)(a1 + 4) + 0x14);
    if (cVar3 == '\0') {
        *pfVar1 = fVar2;
    } else {
        *(u64 *)pfVar1 = in_xd14;
    }
    return pfVar1;
}

/*
 * FUN_8c02a29c  0x8c02a29c
 * called by: FUN_8c029510, FUN_8c0297b8, FUN_8c029ca8, FUN_8c029d64, FUN_8c029dec, FUN_8c02a230, FUN_8c0369c4
 */
u32 FUN_8c02a29c(u32 unused_a0, u32 a1, u32 a2, u32 a3) {
    u32 uVar1;

    uVar1 = FUN_8c219a86(a1, a1, a2, a3);
    return uVar1;
}

/*
 * FUN_8c02a2b8  0x8c02a2b8
 * called by: FUN_8c029510, FUN_8c0297b8
 */
u32 FUN_8c02a2b8(int a0, u32 a1, u32 a2, double *a3) {
    code *pcVar1;
    u32 uVar2;
    u32 ar6_00;
    u8 *ar6_01;
    double *ar7_00;
    float *pfVar3;
    float fVar4;
    code *pcVar5;
    u64 uVar6;
    double dVar7;
    code *pcVar9;
    double dVar8;
    float fVar10;
    double in_xd0;
    char cVar11;
    char cVar12;
    u32 uStack_7c;
    u32 auStack_74[4];
    u32 uStack_64;
    code *pcStack_60;
    u32 uStack_58;
    code *pcStack_54;
    code *pcStack_50;
    u32 uStack_4c;
    u32 uStack_48;
    u32 uStack_44;
    u32 uStack_40;
    u32 uStack_3c;
    u32 uStack_38;
    u32 uStack_34;
    u32 uStack_30;
    u8 auStack_2c[16];
    float fStack_1c;
    float fStack_18;
    u32 uStack_14;
    u32 uStack_10;

    cVar12 = '\0';
    cVar11 = '\0';
    uVar2 = a1;
    ar6_00 = a2;
    ar7_00 = a3;
    Vec3_ctor_zero(&fStack_1c, a1, a2);
    Vec3_ctor_zero(auStack_2c, uVar2, ar6_00);
    Vec3_ctor_zero(&uStack_3c, uVar2, ar6_00);
    Vec3_ctor_zero(&uStack_4c, uVar2, ar6_00);
    Vec3_set_zero(&uStack_58);
    Vec3_set_zero(&uStack_64);
    Vec3_ctor_copy_wrap_02a544(*(u32 *)(a0 + 0x308), uVar2, ar6_00, ar7_00, auStack_74);
    Vec3_assign(&uStack_3c, auStack_74, ar6_00, ar7_00);
    Vec3_dtor(auStack_74, 0xffffffff, ar6_00, ar7_00);
    if (cVar12 == '\0') {
        uVar6 = CONCAT44(0xc7c35000, uStack_3c);
    } else {
        in_xd0 = (double)CONCAT44(uStack_38, uStack_3c);
        uVar6 = 0x8c014a34c7c35000;
    }
    if ((float)uVar6 == (float)(uVar6 >> 0x20)) {
        if (cVar12 == '\0') {
            *(float *)a3 = 0.0;
        } else {
            *a3 = (double)(uVar6 & 0xffffffff);
        }
        if (cVar12 == '\0') {
            *(float *)((int)a3 + 4) = 0.0;
        } else {
            *(u64 *)((int)a3 + 4) = uVar6 & 0xffffffff;
        }
        if (cVar12 == '\0') {
            *(float *)(a3 + 1) = 0.0;
        } else {
            a3[1] = (double)(uVar6 & 0xffffffff);
        }
        object_dtor_delete(&uStack_64, 0xffffffff, ar6_00, ar7_00);
        object_dtor_delete(&uStack_58, 0xffffffff, ar6_00, ar7_00);
        Vec3_dtor(&uStack_4c, 0xffffffff, ar6_00, ar7_00);
        Vec3_dtor(&uStack_3c, 0xffffffff, ar6_00, ar7_00);
        Vec3_dtor(auStack_2c, 0xffffffff, ar6_00, ar7_00);
        uVar2 = Vec3_dtor(&fStack_1c, 0xffffffff, ar6_00, ar7_00);
    } else {
        FUN_8c02a568(a0, a2, &uStack_4c);
        ar6_01 = auStack_2c;
        FUN_8c02a5d4(a0, a1, ar6_01);
        if (cVar12 == '\0') {
            dVar7 = (double)CONCAT44(uStack_4c, uStack_3c);
        } else {
            in_xd0 = (double)CONCAT44(uStack_38, uStack_3c);
            dVar7 = (double)CONCAT44(uStack_48, uStack_4c);
        }
        if (cVar11 == '\0') {
            fStack_1c = SUB84(dVar7, 0) - (float)((u64)dVar7 >> 0x20);
        } else {
            fStack_1c = SUB84(dVar7 - dVar7, 0);
        }
        if (cVar12 == '\0') {
            dVar7 = (double)CONCAT44(uStack_48, uStack_38);
        } else {
            fStack_1c = SUB84(in_xd0, 0);
            in_xd0 = (double)CONCAT44(uStack_34, uStack_38);
            dVar7 = (double)CONCAT44(uStack_44, uStack_48);
        }
        if (cVar11 == '\0') {
            fStack_18 = SUB84(dVar7, 0) - (float)((u64)dVar7 >> 0x20);
        } else {
            fStack_18 = SUB84(dVar7 - dVar7, 0);
        }
        if (cVar12 == '\0') {
            dVar7 = (double)CONCAT44(uStack_44, uStack_34);
        } else {
            fStack_18 = SUB84(in_xd0, 0);
            in_xd0 = (double)CONCAT44(uStack_30, uStack_34);
            dVar7 = (double)CONCAT44(uStack_40, uStack_44);
        }
        if (cVar11 == '\0') {
            fVar4 = (float)((u64)dVar7 >> 0x20);
            dVar7 = (double)CONCAT44(fVar4, SUB84(dVar7, 0) - fVar4);
        } else {
            dVar7 = dVar7 - dVar7;
        }
        if (cVar12 == '\0') {
            uStack_14 = SUB84(dVar7, 0);
        } else {
            uStack_14 = SUB84(in_xd0, 0);
            uStack_10 = (u32)((u64)in_xd0 >> 0x20);
        }
        FUN_8c0231c8(auStack_2c, a1, ar6_01, ar7_00);
        uStack_58 = SUB84(dVar7, 0);
        pcVar5 = (code *)((u64)dVar7 >> 0x20);
        uVar2 = pcVar5;
        if (cVar12 == '\0') {
            uVar2 = auStack_74[0];
            uStack_58 = pcVar5;
            pcVar5 = pcStack_54;
        }
        pcStack_54 = pcVar5;
        auStack_74[0] = uVar2;
        FUN_8c0231c8(&fStack_1c, a1, ar6_01, ar7_00);
        uStack_64 = (u32)((u64)dVar7 >> 0x20);
        if (cVar12 == '\0') {
            dVar8 = (double)CONCAT44(uStack_58, uStack_64);
            dVar7 = in_xd0;
        } else {
            uStack_7c = SUB84(dVar7, 0);
            dVar8 = (double)CONCAT44(pcStack_54, uStack_58);
            uStack_64 = uStack_7c;
            pcStack_60 = (code *)uStack_64;
        }
        if (cVar11 == '\0') {
            fVar4 = SUB84(dVar8, 0) - (float)((u64)dVar8 >> 0x20);
        } else {
            fVar4 = SUB84(dVar8 - dVar8, 0);
        }
        if (cVar12 == '\0') {
            *(float *)a3 = fVar4;
            pcVar5 = *(code **)a3;
            fVar4 = -20.0;
        } else {
            *a3 = dVar7;
            dVar7 = *a3;
            pcVar5 = (code *)0xc1a00000;
            fVar4 = 20.0;
        }
        if (cVar11 != '\0' || fVar4 <= (float)pcVar5) {
            if (cVar12 == '\0') {
                pcVar5 = *(code **)a3;
                pcVar9 = (code *)0x41a00000;
            } else {
                dVar7 = *a3;
                pcVar5 = (code *)0x41a00000;
                pcVar9 = FUN_8c02327c;
            }
            if (cVar11 == '\0' && (float)pcVar9 < (float)pcVar5) {
                if (cVar12 == '\0') {
                    pcVar9 = (code *)0x41a00000;
                    *(float *)a3 = 20.0;
                } else {
                    pcVar5 = (code *)0x41a00000;
                    pcVar9 = FUN_8c02327c;
                    *a3 = -7.94252136586639e-251;
                }
            }
        } else if (cVar12 == '\0') {
            pcVar9 = (code *)0xc1a00000;
            *(float *)a3 = -20.0;
        } else {
            pcVar5 = (code *)0xc1a00000;
            pcVar9 = (code *)0x41a00000;
            *a3 = 134217824.8125;
        }
        FUN_8c02327c(auStack_2c, a1, ar6_01, ar7_00);
        pcStack_54 = pcVar5;
        pcVar1 = pcVar9;
        if (cVar12 == '\0') {
            pcStack_54 = pcVar9;
            pcVar1 = pcStack_50;
        }
        pcStack_50 = pcVar1;
        FUN_8c02327c(&fStack_1c, a1, ar6_01, ar7_00);
        pcStack_60 = pcVar5;
        if (cVar12 == '\0') {
            dVar8 = (double)CONCAT44(pcStack_54, pcVar9);
            pcStack_60 = pcVar9;
        } else {
            dVar7 = (double)CONCAT44(pcVar9, pcStack_60);
            dVar8 = (double)CONCAT44(pcStack_50, pcStack_54);
        }
        if (cVar11 == '\0') {
            fVar4 = SUB84(dVar8, 0) - (float)((u64)dVar8 >> 0x20);
        } else {
            fVar4 = SUB84(dVar8 - dVar8, 0);
        }
        if (cVar12 == '\0') {
            *(float *)((int)a3 + 4) = fVar4;
            fVar4 = *(float *)((int)a3 + 4);
            fVar10 = -40.0;
        } else {
            *(double *)((int)a3 + 4) = dVar7;
            fVar4 = -40.0;
            fVar10 = 40.0;
        }
        if (cVar11 != '\0' || fVar10 <= fVar4) {
            if (cVar12 == '\0') {
                fVar4 = *(float *)((int)a3 + 4);
                fVar10 = 40.0;
            } else {
                fVar4 = 40.0;
                fVar10 = NAN;
            }
            if (cVar11 == '\0' && fVar10 < fVar4) {
                pfVar3 = (float *)((int)a3 + 4);
                if (cVar12 == '\0') {
                    *pfVar3 = 40.0;
                } else {
                    pfVar3[0] = 40.0;
                    pfVar3[1] = NAN;
                }
            }
        } else {
            pfVar3 = (float *)((int)a3 + 4);
            if (cVar12 == '\0') {
                *pfVar3 = -40.0;
            } else {
                pfVar3[0] = -40.0;
                pfVar3[1] = 40.0;
            }
        }
        object_dtor_delete(&uStack_64, 0xffffffff, ar6_01, ar7_00);
        object_dtor_delete(&uStack_58, 0xffffffff, ar6_01, ar7_00);
        Vec3_dtor(&uStack_4c, 0xffffffff, ar6_01, ar7_00);
        Vec3_dtor(&uStack_3c, 0xffffffff, ar6_01, ar7_00);
        Vec3_dtor(auStack_2c, 0xffffffff, ar6_01, ar7_00);
        uVar2 = Vec3_dtor(&fStack_1c, 0xffffffff, ar6_01, ar7_00);
    }
    return uVar2;
}

/*
 * Vec3_ctor_copy_wrap_02a544  0x8c02a544
 * only calls Vec3_ctor_copy
 * called by: FUN_8c02a2b8, FUN_8c02a788
 */
u32 Vec3_ctor_copy_wrap_02a544(int a0, u32 unused_a1, u32 a2, u32 a3, u32 s0) {
    u32 uVar1;

    uVar1 = Vec3_ctor_copy(s0, a0 + 0x70, a2, a3);
    return uVar1;
}

/*
 * FUN_8c02a568  0x8c02a568
 * called by: FUN_8c02a2b8
 */
u32 FUN_8c02a568(u32 unused_a0, u32 *a1, u64 *a2) {
    u32 r7;
    char cVar1;
    u32 in_stack_ffffff9c;
    u32 uStack_60;
    u32 uStack_5c;
    u32 uStack_58;
    u32 uStack_54;
    u32 uStack_50;
    u8 auStack_4c[68];

    cVar1 = '\0';
    uStack_58 = *a1;
    uStack_54 = a1[1];
    uStack_50 = a1[2];
    memmove_bytes_wrap(auStack_4c);
    FUN_8c212740(auStack_4c, &uStack_58, &stack0xffffff9c, r7, in_stack_ffffff9c);
    if (cVar1 == '\0') {
        *(u32 *)a2 = in_stack_ffffff9c;
        *(u32 *)((int)a2 + 4) = uStack_60;
    } else {
        *a2 = CONCAT44(uStack_60, in_stack_ffffff9c);
        *(u64 *)((int)a2 + 4) = CONCAT44(uStack_5c, uStack_60);
    }
    if (cVar1 == '\0') {
        *(u32 *)(a2 + 1) = uStack_5c;
    } else {
        a2[1] = CONCAT44(uStack_58, uStack_5c);
    }
    return 8;
}

/*
 * FUN_8c02a5d4  0x8c02a5d4
 * called by: FUN_8c02a2b8
 */
u32 FUN_8c02a5d4(u32 unused_a0, u32 *a1, u64 *a2) {
    u32 r7;
    u32 in_fr1;
    char cVar1;
    u32 uStack_64;
    u32 uStack_60;
    u32 uStack_5c;
    u32 uStack_58;
    u32 uStack_54;
    u32 uStack_50;
    u8 auStack_4c[48];
    u32 uStack_1c;
    u32 uStack_18;
    u32 uStack_14;
    u32 uStack_10;

    cVar1 = '\0';
    uStack_58 = *a1;
    uStack_54 = a1[1];
    uStack_50 = a1[2];
    uStack_1c = in_fr1;
    memmove_bytes_wrap(auStack_4c);
    if (cVar1 == '\0') {
        uStack_1c = 0;
    } else {
        uStack_64 = 0;
        uStack_10 = 0;
    }
    uStack_14 = 0;
    uStack_18 = 0;
    FUN_8c212740(auStack_4c, &uStack_58, &uStack_64, r7, uStack_1c);
    if (cVar1 == '\0') {
        *(u32 *)a2 = uStack_64;
        *(u32 *)((int)a2 + 4) = uStack_60;
    } else {
        *a2 = CONCAT44(uStack_60, uStack_64);
        *(u64 *)((int)a2 + 4) = CONCAT44(uStack_5c, uStack_60);
    }
    if (cVar1 == '\0') {
        *(u32 *)(a2 + 1) = uStack_5c;
    } else {
        a2[1] = CONCAT44(uStack_58, uStack_5c);
    }
    return 0x10;
}

/*
 * FUN_8c02a668  0x8c02a668
 */
u32 FUN_8c02a668(int a0, u32 a1, u32 a2) {
    int a5;
    u8 auStack_18[20];

    a5 = a0 + 0x30;
    (**(code **)(**(int **)(0x30c + a0) + 0x38))(*(int **)(0x30c + a0), a5, a1, a2);
    Vec3_ctor_copy_wrap_02a6d0(*(u32 *)(0x30c + a0), a5, a1, a2, auStack_18);
    Vec3_add_assign(a0 + 0x30, auStack_18);
    Vec3_dtor(auStack_18, 0xffffffff, a1, a2);
    return 1;
}

/*
 * Vec3_ctor_copy_wrap_02a6d0  0x8c02a6d0
 * only calls Vec3_ctor_copy
 * called by: FUN_8c02a668
 */
u32 Vec3_ctor_copy_wrap_02a6d0(int a0, u32 unused_a1, u32 a2, u32 a3, u32 s0) {
    u32 uVar1;

    uVar1 = Vec3_ctor_copy(s0, a0 + 0x200, a2, a3);
    return uVar1;
}

/*
 * FUN_8c02a6f8  0x8c02a6f8
 * called by: CAnimal_m2_02573c, CAnimal_m3_026078, FUN_8c0274bc
 */
u32 FUN_8c02a6f8(int a0, u32 unused_a1, u32 a2, u32 a3) {
    u32 ar5_00;

    get_field_30_on_field_a8(a0 + 0x174);
    ar5_00 = get_field_30_on_field_a8(a0 + 0x174);
    FUN_8c02c758(a0 + 0x174, ar5_00, a2, a3);
    *(u32 *)(a0 + 0x74) = *(u32 *)(a0 + 0x74) & 0xfffffff7;
    return 0x74;
}

/*
 * get_field_30_on_field_a8  0x8c02a758
 * calls get_field_30_02a780 on the member at +0xa8
 * called by: FUN_8c02a6f8
 */
u32 get_field_30_on_field_a8(int a0) {
    u32 uVar1;

    uVar1 = get_field_30_02a780(a0 + 0xa8);
    return uVar1;
}

/*
 * get_field_30_02a780  0x8c02a780
 * called by: get_field_30_on_field_a8
 */
u32 get_field_30_02a780(int a0) {
    return *(u32 *)(a0 + 0x30);
}

/*
 * FUN_8c02a788  0x8c02a788
 * called by: CAnimal_m2_03640c, CAnimal_m2_085390, CAnimal_m3_036568, CAnimal_m3_085550, CAnimal_m4_0266dc,
 * CAnimal_m5_026774, FUN_8c037034, FUN_8c085704 decompiler: Switch with 1 destination removed at 0x8c02a8fc
 */
u32 FUN_8c02a788(int a0, u32 a1, u32 a2, u32 a3) {
    short sVar1;
    u32 uVar2;
    u8 *ar6_00;
    u8 auStack_1c[20];

    uVar2 = FUN_8c02bef8(a0 + 0x174, a1, a2);
    sVar1 = (short)uVar2;
    if (*(short *)(a0 + 0x3f8) < *(short *)(a0 + 0x3fa)) {
        *(u16 *)(a0 + 0x3fa) = 0;
        *(u16 *)(a0 + 0x3f8) = 1;
        if (*(int *)(a0 + 0x3f4) == 0) {
            *(u32 *)(a0 + 0x3dc) = *(u32 *)(a0 + 0x3d8);
        } else if (*(int *)(a0 + 0x3f4) == 1) {
            *(short *)(a0 + 0x3f0) = *(short *)(a0 + 0x3f0) + 1;
            if (*(int *)(*(short *)(a0 + 0x3f0) * 4 + **(int **)(a0 + 0x3ec)) == 0x50) {
                a1 = *(u32 *)(a0 + 0x3e4);
                FUN_8c02aab0(*(u32 *)(a0 + 0x308), a1);
                *(u16 *)(a0 + 0x3f0) = 0;
                *(u32 *)(a0 + 0x3f4) = 0;
                *(u32 *)(a0 + 0x3ec) = 0;
                *(u32 *)(a0 + 0x3e0) = 0;
            } else {
                *(u32 *)(a0 + 0x3e4) = *(u32 *)(*(short *)(a0 + 0x3f0) * 4 + **(int **)(a0 + 0x3ec));
            }
        }
    }
    if (*(int *)(a0 + 0x3e0) == 0) {
        uVar2 = get_field_94_02aaa4(*(u32 *)(a0 + 0x308));
        *(u32 *)(a0 + 0x3e4) = uVar2;
        Vec3_ctor_copy_wrap_02a544(*(u32 *)(a0 + 0x308), a1, a2, a3, auStack_1c);
        ar6_00 = auStack_1c;
        uVar2 = FUN_8c02b208(a0 + 0x310, *(u32 *)(a0 + 0x3e4), ar6_00);
        *(u32 *)(a0 + 0x3e4) = uVar2;
        Vec3_dtor(auStack_1c, 0xffffffff, ar6_00, a3);
    } else {
        *(u32 *)(a0 + 0x3e4) = *(u32 *)(*(short *)(a0 + 0x3f0) * 4 + **(int **)(a0 + 0x3ec));
    }
    if (*(int *)(a0 + 0x3e4) != *(int *)(a0 + 1000)) {
        *(u16 *)(a0 + 0x3fa) = 0;
        if ((*(int *)(a0 + 0x3e4) < 0x4f) && (0x46 < *(int *)(a0 + 0x3e4))) {
            *(int *)(a0 + 0x3ec) = *(int *)(sVar1 * 0x124 + *(int *)(a0 + 0x328)) + (*(int *)(a0 + 0x3e4) + -0x47) * 8;
            *(u32 *)(a0 + 0x3e4) = *(u32 *)(*(short *)(a0 + 0x3f0) * 4 + **(int **)(a0 + 0x3ec));
            *(u32 *)(a0 + 0x3f4) = 1;
            *(u32 *)(a0 + 0x3e0) = 1;
        }
        *(u32 *)(a0 + 0x3d8) =
            *(u32 *)(*(int *)(sVar1 * 0x124 + *(int *)(a0 + 0x328)) + *(int *)(a0 + 0x3e4) * 4 + 0x40);
        *(u32 *)(a0 + 0x3dc) =
            *(u32 *)(*(int *)(sVar1 * 0x124 + *(int *)(a0 + 0x328)) + *(int *)(a0 + 1000) * 4 + 0x40);
        *(u16 *)(a0 + 0x3f8) =
            *(u16 *)(*(int *)(sVar1 * 0x124 + *(int *)(a0 + 0x328)) + *(int *)(a0 + 0x3e4) * 2 + 0x158);
    }
    if (*(int *)(a0 + 0x3dc) != *(int *)(a0 + 0x3d8)) {
        *(short *)(a0 + 0x3fa) = *(short *)(a0 + 0x3fa) + 1;
    }
    if (((*(int *)(a0 + 0x3dc) == *(int *)(a0 + 0x3d8)) && (*(short *)(a0 + 0x3fa) < *(short *)(a0 + 0x3f8))) &&
        (*(int *)(a0 + 0x3e0) == 1)) {
        *(short *)(a0 + 0x3fa) = *(short *)(a0 + 0x3f8) + 1;
    }
    *(u32 *)(a0 + 1000) = *(u32 *)(a0 + 0x3e4);
    return 1000;
}

/*
 * get_field_94_02aaa4  0x8c02aaa4
 * called by: FUN_8c02a788, FUN_8c046684, FUN_8c048868, FUN_8c053f24, FUN_8c0831c8
 */
u32 get_field_94_02aaa4(int a0) {
    return *(u32 *)(0x94 + a0);
}

/*
 * FUN_8c02aab0  0x8c02aab0
 * called by: FUN_8c02a788
 */
int FUN_8c02aab0(int a0, u32 a1) {
    int iVar1;

    iVar1 = 0x94;
    *(u32 *)(0x94 + a0) = a1;
    return iVar1;
}

/*
 * FUN_8c02aabc  0x8c02aabc
 * called by: CAnimal_RunIncubator, CAnimal_m2_03640c, CAnimal_m2_085390, CAnimal_m3_036568, CAnimal_m3_085550,
 * CAnimal_m4_0266dc, CAnimal_m5_026774, FUN_8c037034 (+1 more)
 */
int FUN_8c02aabc(int a0, u32 a1, u32 a2, u32 a3) {
    u32 uVar1;
    int iVar2;

    uVar1 = FUN_8c02bef8(a0 + 0x174, a1, a2);
    uVar1 = (*(code *)(&noop_015510))(*(int *)((short)uVar1 * 0x124 + *(int *)(0x328 + a0)) + 0x1e4, a1, a2, a3);
    iVar2 = *(int *)(0x344 + a0);
    *(u32 *)(iVar2 + 4) = uVar1;
    return iVar2;
}

/*
 * FUN_8c02ab24  0x8c02ab24
 * called by: FUN_8c029dec
 */
u32 FUN_8c02ab24(int a0, int a1, int a2) {
    u32 uVar1;

    for (uVar1 = 2; uVar1 < g_8c27c1e8 - 1U; uVar1 = uVar1 + 1) {
        *(float *)(a1 + uVar1 * 4) =
            *(float *)(*(int *)(a0 + 0x3dc) + uVar1 * 4) +
            ((*(float *)(*(int *)(a0 + 0x3d8) + uVar1 * 4) - *(float *)(*(int *)(a0 + 0x3dc) + uVar1 * 4)) *
             (float)a2) /
                (float)(int)*(short *)(a0 + 0x3f8);
    }
    return g_8c27c1e8 - 1U;
}

/*
 * FUN_8c02aba0  0x8c02aba0
 */
u32 FUN_8c02aba0(int a0) {
    int iVar1;
    u32 uVar2;
    int iVar3;
    int a7;
    u64 in_dr0;
    double dVar4;
    u64 in_xd0;
    char cVar5;
    char cVar6;
    u32 in_stack_ffffffac;
    float fStack_4c;
    u32 auStack_48[4];
    u8 auStack_38[16];
    u8 auStack_28[16];
    u8 auStack_18[20];

    cVar6 = '\0';
    cVar5 = '\0';
    a7 = a0 + 0x5c;
    iVar3 = a0 + 0x50;
    iVar1 = a0 + 0x30;
    (**(code **)(**(int **)(a0 + 0xa4) + 0x10))(*(int **)(a0 + 0xa4), iVar1, iVar3, a7);
    Vec3_ctor_copy_wrap_02ace4(*(u32 *)(a0 + 0x30c), iVar1, iVar3, a7, auStack_28);
    noop_027224(*(u32 *)(a0 + 0x30c), iVar1, iVar3, a7, in_stack_ffffffac);
    if (cVar6 == '\0') {
        dVar4 = (double)CONCAT44(0x40000000, (int)((u64)in_dr0 >> 0x20));
        in_dr0 = in_xd0;
    } else {
        dVar4 = -7.957972504406915e-251;
    }
    if (cVar5 == '\0') {
        fStack_4c = SUB84(dVar4, 0) * (float)((u64)dVar4 >> 0x20);
    } else {
        fStack_4c = SUB84(dVar4 * dVar4, 0);
    }
    if (cVar6 != '\0') {
        fStack_4c = (float)in_dr0;
        auStack_48[0] = (u32)((u64)in_dr0 >> 0x20);
    }
    Vec3_scale(auStack_28, &fStack_4c, iVar3, a7, auStack_38);
    Vec3_add(a0 + 0x30, auStack_38, iVar3, a7, auStack_48);
    Vec3_ctor_copy(auStack_18, auStack_48, iVar3, a7);
    Vec3_dtor(auStack_48, 0xffffffff, iVar3, a7);
    Vec3_dtor(auStack_38, 0xffffffff, iVar3, a7);
    uVar2 = 0xffffffff;
    Vec3_dtor(auStack_28, 0xffffffff, iVar3, a7);
    noop_027224(*(u32 *)(a0 + 0x30c), uVar2, iVar3, a7, in_stack_ffffffac);
    (**(code **)(*(int *)(a0 + 0xa8) + 0x28))((int *)(a0 + 0xa8), a0 + 0x30, iVar3, a7);
    iVar3 = a0 + 0x5c;
    iVar1 = a0 + 0x50;
    (**(code **)(*(int *)(a0 + 0xa8) + 0x10))((int *)(a0 + 0xa8), auStack_18, iVar1, iVar3);
    uVar2 = Vec3_dtor(auStack_18, 0xffffffff, iVar1, iVar3);
    return uVar2;
}

/*
 * Vec3_ctor_copy_wrap_02ace4  0x8c02ace4
 * only calls Vec3_ctor_copy
 * called by: FUN_8c02aba0, FUN_8c02ad5c, FUN_8c036adc, FUN_8c085c3c, FUN_8c0ae84c
 */
u32 Vec3_ctor_copy_wrap_02ace4(int a0, u32 unused_a1, u32 a2, u32 a3, u32 s0) {
    u32 uVar1;

    uVar1 = Vec3_ctor_copy(s0, a0 + 0x80, a2, a3);
    return uVar1;
}

/*
 * Vec3_normalize_on_field_4_wrap  0x8c02ad0c
 * only calls Vec3_normalize_on_field_4
 */
u32 Vec3_normalize_on_field_4_wrap(int a0, u32 a1, u32 a2, u32 a3, u32 s0) {
    Vec3_normalize_on_field_4(*(u32 *)(0x30c + a0), a1, a2, a3, s0);
    return s0;
}

/*
 * Vec3_normalize_on_field_4  0x8c02ad38
 * calls Vec3_normalize on the member at +0x4
 * called by: Vec3_normalize_on_field_4_wrap
 */
u32 Vec3_normalize_on_field_4(int a0, u32 a1, u32 a2, u32 a3, u32 s0) {
    Vec3_normalize(a0 + 4, a1, a2, a3);
}

/*
 * FUN_8c02ad5c  0x8c02ad5c
 */
u32 FUN_8c02ad5c(int a0, u32 unused_a1, u32 a2, u32 a3, u32 s0) {
    Vec3_ctor_copy_wrap_02ace4(*(u32 *)(0x30c + a0), unused_a1, a2, a3, s0);
    return s0;
}

/*
 * FUN_8c02ad88  0x8c02ad88
 */
u32 FUN_8c02ad88(int a0) {
    int iVar1;
    u32 uVar2;
    float fVar3;

    fVar3 = (float)*(int *)(a0 + 0x458) / 5400.0;
    *(float *)(a0 + 0x438) = fVar3 * 0.0;
    *(float *)(a0 + 0x43c) = fVar3 * -0.84705883;
    *(float *)(a0 + 0x440) = fVar3 * -0.84705883;
    *(float *)(a0 + 0x444) = fVar3 * -1.0;
    iVar1 = *(int *)(a0 + 0x458);
    *(int *)(a0 + 0x458) = iVar1 + 1;
    uVar2 = 0x1518;
    if (0x1518 < iVar1 + 1) {
        *(u32 *)(a0 + 0x458) = 0;
        uVar2 = 0x74;
        *(u32 *)(a0 + 0x74) = *(u32 *)(a0 + 0x74) & 0x7fffffff;
    }
    return uVar2;
}

/*
 * FUN_8c02ae38  0x8c02ae38
 * called by: CAnimal_m2_02573c, CAnimal_m3_026078
 */
u32 FUN_8c02ae38(int a0, u32 a1, u32 a2) {
    u32 uVar1;
    int iVar2;
    float fVar3;
    u64 uVar4;
    double dVar5;
    u64 in_xd0;
    char cVar6;
    char cVar7;
    float fStack_18;
    int iStack_14;

    cVar7 = '\0';
    cVar6 = '\0';
    uVar1 = FUN_8c02bef8(a0 + 0x174, a1, a2);
    iVar2 = *(int *)(a0 + 0x328) + (short)uVar1 * 0x124;
    if (cVar7 == '\0') {
        uVar4 = CONCAT44(*(u32 *)(a0 + 0x5c), *(u32 *)(a0 + 0x170));
    } else {
        in_xd0 = *(u64 *)(a0 + 0x170);
        uVar4 = *(u64 *)(a0 + 0x5c);
    }
    if (cVar6 != '\0' || (float)uVar4 <= (float)((u64)uVar4 >> 0x20)) {
        if (cVar7 == '\0') {
            uVar4 = CONCAT44(*(u32 *)(a0 + 0x5c), *(u32 *)(a0 + 0x170));
        } else {
            in_xd0 = *(u64 *)(a0 + 0x170);
            uVar4 = *(u64 *)(a0 + 0x5c);
        }
        if (cVar6 == '\0' && (float)uVar4 < (float)((u64)uVar4 >> 0x20)) {
            if (cVar7 == '\0') {
                uVar1 = *(u32 *)(a0 + 0x170);
                *(u32 *)(a0 + 100) = uVar1;
                *(u32 *)(a0 + 0x60) = uVar1;
                *(u32 *)(a0 + 0x5c) = uVar1;
            } else {
                uVar4 = *(u64 *)(a0 + 0x170);
                *(u64 *)(a0 + 100) = uVar4;
                *(u64 *)(a0 + 0x60) = uVar4;
                *(u64 *)(a0 + 0x5c) = uVar4;
            }
        }
    } else {
        if (cVar7 == '\0') {
            dVar5 = (double)CONCAT44(*(u32 *)(iVar2 + 0xc0), *(u32 *)(a0 + 100));
        } else {
            in_xd0 = *(u64 *)(a0 + 100);
            dVar5 = *(double *)(iVar2 + 0xc0);
        }
        if (cVar6 == '\0') {
            fStack_18 = SUB84(dVar5, 0) + (float)((u64)dVar5 >> 0x20);
        } else {
            fStack_18 = SUB84(dVar5 + dVar5, 0);
        }
        iStack_14 = a0;
        if (cVar7 != '\0') {
            fStack_18 = (float)in_xd0;
            iStack_14 = (int)((u64)in_xd0 >> 0x20);
        }
        if (cVar7 == '\0') {
            *(float *)(iStack_14 + 100) = fStack_18;
            *(float *)(a0 + 0x60) = fStack_18;
            *(float *)(a0 + 0x5c) = fStack_18;
        } else {
            *(u64 *)(iStack_14 + 100) = CONCAT44(iStack_14, fStack_18);
            *(u64 *)(a0 + 0x60) = CONCAT44(iStack_14, fStack_18);
            *(u64 *)(a0 + 0x5c) = CONCAT44(iStack_14, fStack_18);
        }
    }
    if (cVar7 == '\0') {
        dVar5 = (double)CONCAT44(*(u32 *)(a0 + 0x60), *(u32 *)(iVar2 + 0xe8));
    } else {
        in_xd0 = *(u64 *)(iVar2 + 0xe8);
        dVar5 = *(double *)(a0 + 0x60);
    }
    if (cVar6 == '\0') {
        fVar3 = SUB84(dVar5, 0) * (float)((u64)dVar5 >> 0x20);
    } else {
        fVar3 = SUB84(dVar5 * dVar5, 0);
    }
    if (cVar7 == '\0') {
        *(float *)(a0 + 0x408) = fVar3;
    } else {
        *(u64 *)(a0 + 0x408) = in_xd0;
    }
    if (cVar7 == '\0') {
        dVar5 = (double)CONCAT44(*(u32 *)(a0 + 0x5c), *(u32 *)(iVar2 + 0xec));
    } else {
        in_xd0 = *(u64 *)(iVar2 + 0xec);
        dVar5 = *(double *)(a0 + 0x5c);
    }
    if (cVar6 == '\0') {
        fVar3 = SUB84(dVar5, 0) * (float)((u64)dVar5 >> 0x20);
    } else {
        fVar3 = SUB84(dVar5 * dVar5, 0);
    }
    if (cVar7 == '\0') {
        *(float *)(a0 + 0x40c) = fVar3;
    } else {
        *(u64 *)(a0 + 0x40c) = in_xd0;
    }
    return 0xec;
}

/*
 * FUN_8c02af68  0x8c02af68
 * called by: FUN_8c0656d4, FUN_8c1089e4
 */
int FUN_8c02af68(int a0, int a1) {
    int iVar1;

    iVar1 = *(int *)(0x47c + a0);
    if (iVar1 != a1) {
        *(u32 *)(0x474 + a0) = 1;
        *(u32 *)(0x470 + a0) = 0;
        iVar1 = 0x47c;
        *(int *)(0x47c + a0) = a1;
    }
    return iVar1;
}

/*
 * CAnimal_ChangeBodyTexture  0x8c02af90
 * called by: FUN_8c02702c, FUN_8c02b058
 * strings: "Texlist NULL!"; "CAnimal::ChangeBodyTexture()"
 */
int CAnimal_ChangeBodyTexture(int a0, int a1, u32 a2, u32 a3) {
    int iVar1;
    int iVar2;

    iVar2 = a1;
    iVar1 = (**(code **)(0x144 + *(int *)(a0 + 8)))(a0, a1, a2, a3);
    iVar2 = get_field_4_0253e4(iVar1 + a1 * 8 + 0x78, iVar2, a2, a3);
    if (iVar2 == 0) {
        iVar2 = (*(code *)(&report_error_message))("Texlist NULL!", "CAnimal::ChangeBodyTexture()", 0, 2);
    } else {
        *(int *)(0x42c + a0) = iVar1 + a1 * 8 + 0x78;
        *(int *)(0x430 + a0) = iVar1 + a1 * 8 + 0x88;
        iVar2 = 0x478;
        *(int *)(0x478 + a0) = a1;
    }
    return iVar2;
}

/*
 * FUN_8c02b04c  0x8c02b04c
 * called by: FUN_8c0274bc, FUN_8c0276f4
 */
int FUN_8c02b04c(int a0, u32 a1) {
    int iVar1;

    iVar1 = 0x478;
    *(u32 *)(0x478 + a0) = a1;
    return iVar1;
}

/*
 * FUN_8c02b058  0x8c02b058
 * called by: FUN_8c026968
 */
u32 FUN_8c02b058(int a0, u32 a1, u32 a2, u32 a3) {
    int iVar1;
    u32 uVar2;
    u32 ar5_00;
    u32 in_fr1;
    double dVar3;
    float fVar4;
    u64 in_dr14;
    double dVar5;
    u64 in_xd14;
    char cVar6;
    char cVar7;

    uVar2 = (u32)((u64)in_dr14 >> 0x20);
    cVar7 = '\0';
    cVar6 = '\0';
    (**(code **)(*(int *)(a0 + 8) + 0x144))(a0, a1, a2, a3);
    if (cVar7 == '\0') {
        dVar3 = (double)CONCAT44(0x43e10000, in_fr1);
    } else {
        dVar3 = 2.2923181056228e-311;
    }
    if (cVar6 == '\0') {
        fVar4 = (float)*(int *)(a0 + 0x470) / (float)((u64)dVar3 >> 0x20);
    } else {
        fVar4 = SUB84((double)CONCAT44(uVar2, (float)*(int *)(a0 + 0x470)) / dVar3, 0);
    }
    if (cVar7 == '\0') {
        dVar5 = (double)CONCAT44(*(u32 *)(a0 + 0x438), fVar4);
    } else {
        dVar5 = *(double *)(a0 + 0x438);
    }
    if (cVar6 == '\0') {
        dVar5 = (double)CONCAT44((int)((u64)dVar5 >> 0x20), SUB84(dVar5, 0) - 1.0);
    } else {
        dVar5 = dVar5 - (double)CONCAT44(0x3f800000, SUB84(dVar3, 0));
    }
    if (cVar7 == '\0') {
        *(int *)(a0 + 0x438) = SUB84(dVar5, 0);
    } else {
        *(u64 *)(a0 + 0x438) = in_xd14;
    }
    ar5_00 = *(u32 *)(a0 + 0x478);
    uVar2 = *(u32 *)(a0 + 0x47c);
    CAnimal_ChangeBodyTexture(a0, uVar2, a2, a3);
    *(int *)(a0 + 0x474) = *(int *)(a0 + 0x474) + 1;
    FUN_8c023df4(a0 + 0x480);
    (**(code **)(*(int *)(a0 + 8) + 0x34))(a0, uVar2, a2, a3);
    if (cVar7 == '\0') {
        *(int *)(a0 + 0x438) = (int)((u64)dVar5 >> 0x20);
    } else {
        *(double *)(a0 + 0x438) = dVar5;
    }
    CAnimal_ChangeBodyTexture(a0, ar5_00, a2, a3);
    iVar1 = *(int *)(a0 + 0x470);
    *(int *)(a0 + 0x470) = iVar1 + 1;
    if (iVar1 < 0x1c2) {
        uVar2 = 0x474;
        *(int *)(a0 + 0x474) = *(int *)(a0 + 0x474) + -1;
    } else {
        FUN_8c023df4(a0 + 0x480);
        *(u32 *)(a0 + 0x470) = 0;
        *(u32 *)(a0 + 0x474) = 0;
        uVar2 = CAnimal_ChangeBodyTexture(a0, *(u32 *)(a0 + 0x47c), a2, a3);
    }
    return uVar2;
}

/*
 * FUN_8c02b190  0x8c02b190
 * called by: FUN_8c0274bc
 */
u32 FUN_8c02b190(int a0) {
    *(u32 *)(a0 + 0x45c) = 0x708;
    *(u32 *)(a0 + 0x448) = 0;
    return 0x448;
}

/*
 * CAnimBody_GetCurFrame_on_field_b0_wrap  0x8c02b1b0
 * only calls CAnimBody_GetCurFrame_on_field_b0
 */
u32 CAnimBody_GetCurFrame_on_field_b0_wrap(int a0, u32 a1, u32 a2, u32 a3) {
    CAnimBody_GetCurFrame_on_field_b0(*(u32 *)(0x30c + a0), a1, a2, a3);
    return 4;
}

/*
 * FUN_8c02b1dc  0x8c02b1dc
 * called by: FUN_8c0254d0
 */
int FUN_8c02b1dc(int a0, u32 a1, u32 a2, u32 a3) {
    Vec3_ctor_zero(a0 + 4, a1, a2);
    FUN_8c02b3d4(a0, a1, a2, a3);
    return a0;
}

/*
 * FUN_8c02b208  0x8c02b208
 * called by: FUN_8c02a788
 */
int FUN_8c02b208(short *a0, int a1, float *a2) {
    bool bVar1;
    u32 uVar2;
    int iVar3;
    char cVar4;

    cVar4 = '\0';
    bVar1 = false;
    if (((a1 == 0) || (a1 == 0x2d)) || (a1 == 0x1e)) {
        if ((*(float *)(a0 + 2) == -100000.0) && (*a2 != -100000.0)) {
            bVar1 = true;
        } else if ((*(float *)(a0 + 2) != -100000.0) && (*a2 == -100000.0)) {
            bVar1 = true;
        }
        *a0 = *a0 + 1;
        if (a0[1] < *a0) {
            bVar1 = true;
        }
        if (bVar1) {
            if (a1 == 0) {
                if ((int)((u32) * (u8 *)(a0 + 10) << 0x1e) < 0) {
                    iVar3 = 0x48;
                } else {
                    iVar3 = 0x49;
                }
            } else if (a1 == 0x2d) {
                if ((int)((u32) * (u8 *)(a0 + 10) << 0x1e) < 0) {
                    iVar3 = 0x4a;
                } else {
                    iVar3 = 0x4b;
                }
            } else {
                iVar3 = a1;
                if (a1 == 0x1e) {
                    if ((int)((u32) * (u8 *)(a0 + 10) << 0x1e) < 0) {
                        iVar3 = 0x4c;
                    } else {
                        iVar3 = 0x4d;
                    }
                }
            }
            *a0 = 0;
            uVar2 = FUN_8c02b340(a0, a1, a2);
            a0[1] = (short)uVar2;
            a1 = iVar3;
        }
        if (cVar4 == '\0') {
            *(float *)(a0 + 2) = *a2;
        } else {
            *(u64 *)(a0 + 2) = *(u64 *)a2;
        }
    } else {
        *a0 = 0;
        uVar2 = FUN_8c02b340(a0, a1, a2);
        a0[1] = (short)uVar2;
    }
    return a1;
}

/*
 * FUN_8c02b340  0x8c02b340
 * called by: FUN_8c02b208
 */
int FUN_8c02b340(int a0, u32 a1, u32 a2) {
    u8 bVar1;
    u32 uVar2;
    int iVar3;
    u32 ar5_00;

    uVar2 = rand();
    ar5_00 = 2;
    uVar2 = libgcc_divide_helper_01031c(uVar2, 2, a2);
    bVar1 = (u8)uVar2 & 1;
    *(u8 *)(a0 + 0x14) = *(u8 *)(a0 + 0x14) & 0xfe | bVar1;
    *(u8 *)(a0 + 0x14) = *(u8 *)(a0 + 0x14) & 0xfd | bVar1 << 1;
    uVar2 = rand();
    iVar3 = libgcc_divide_helper_01031c(uVar2, 0x96, a2);
    return iVar3 + 0x1e;
}

/*
 * FUN_8c02b3d4  0x8c02b3d4
 * called by: FUN_8c02b1dc
 */
u32 FUN_8c02b3d4(u16 *a0, u32 a1, u32 a2, u32 a3) {
    a0[1] = 0;
    *a0 = 0;
    Vec3_assign_f(a0 + 2, a1, a2, a3);
    *(u8 *)(a0 + 10) = *(u8 *)(a0 + 10) & 0xfe | 1;
    *(u8 *)(a0 + 10) = *(u8 *)(a0 + 10) & 0xfd | 2;
    return 0x14;
}

/*
 * get_field_48c_02b444  0x8c02b444
 */
u32 get_field_48c_02b444(int a0) {
    return *(u32 *)(0x48c + a0);
}

/*
 * FUN_8c02b450  0x8c02b450
 */
int FUN_8c02b450(int a0, u32 a1) {
    int iVar1;

    iVar1 = 0x48c;
    *(u32 *)(0x48c + a0) = a1;
    return iVar1;
}

/*
 * FUN_8c02b45c  0x8c02b45c
 */
u32 FUN_8c02b45c(int a0, u32 a1, u32 a2) {
    FUN_8c02bef8(a0 + 0x174, a1, a2);
    return 0xc8;
}

/*
 * FUN_8c02b4ac  0x8c02b4ac
 */
u32 FUN_8c02b4ac(int a0, u32 a1, u32 a2) {
    FUN_8c02bef8(a0 + 0x174, a1, a2);
    return 0xcc;
}

/*
 * get_field_13c_on_field_174  0x8c02b4fc
 * calls get_field_13c_028d9c on the member at +0x174
 */
u32 get_field_13c_on_field_174(int a0, u32 a1, u32 a2) {
    u32 uVar1;

    uVar1 = get_field_13c_028d9c(a0 + 0x174, a1, a2);
    return uVar1;
}

/*
 * FUN_8c02b524  0x8c02b524
 */
u32 FUN_8c02b524(int a0, u32 a1, u32 a2) {
    FUN_8c02bef8(a0 + 0x174, a1, a2);
    return 0x120;
}

/*
 * ret_const_334  0x8c02b574
 */
u32 ret_const_334(void) {
    return 0x334;
}

/*
 * FUN_8c02b584  0x8c02b584
 */
u32 FUN_8c02b584(int a0, u32 a1, u32 a2) {
    FUN_8c02bef8(a0 + 0x174, a1, a2);
    return 0xd0;
}

/*
 * vec3_copy_wrap  0x8c02b5d4
 * only calls vec3_copy_8c02b5fc
 */
u32 vec3_copy_wrap(int a0, u32 unused_a1, u32 a2, u32 unused_a3, u32 s0) {
    u32 uVar1;

    uVar1 = vec3_copy_8c02b5fc(s0, a0 + 0x338, a2);
    return uVar1;
}

/*
 * vec3_copy_8c02b5fc  0x8c02b5fc
 * called by: Class_129cbc_m1_031598, Class_12b2ac_m1_0aff3c, FUN_8c031eb0, FUN_8c032d48, FUN_8c0332b4, FUN_8c034574,
 * FUN_8c034650, FUN_8c036adc (+41 more)
 */
u32 *vec3_copy_8c02b5fc(u32 *a0, u32 *a1, u32 a2) {
    *a0 = *a1;
    a0[1] = a1[1];
    a0[2] = a1[2];
    return a0;
}

/*
 * FUN_8c02b61c  0x8c02b61c
 */
u32 FUN_8c02b61c(int a0, u32 a1, u32 a2) {
    FUN_8c02bef8(a0 + 0x174, a1, a2);
    return 0xd4;
}

/*
 * FUN_8c02b670  0x8c02b670
 */
int FUN_8c02b670(int a0, u32 a1, u32 a2) {
    u32 uVar1;

    uVar1 = FUN_8c02bef8(a0 + 0x174, a1, a2);
    return (int)(short)uVar1;
}

/*
 * FUN_8c02b698  0x8c02b698
 */
int FUN_8c02b698(int a0) {
    u32 uVar1;

    uVar1 = FUN_8c02bfbc(a0 + 0x174);
    return (int)(short)uVar1;
}

/*
 * ret_const_40c  0x8c02b6c0
 */
u32 ret_const_40c(void) {
    return 0x40c;
}

/*
 * ret_const_408  0x8c02b6d0
 */
u32 ret_const_408(void) {
    return 0x408;
}

/*
 * field_ptr_174  0x8c02b6e0
 * returns the address of the member at +0x174
 */
int field_ptr_174(int a0) {
    return a0 + 0x174;
}

/*
 * get_field_308_02b6f0  0x8c02b6f0
 */
u32 get_field_308_02b6f0(int a0) {
    return *(u32 *)(0x308 + a0);
}

/*
 * get_field_30c_02b6fc  0x8c02b6fc
 */
u32 get_field_30c_02b6fc(int a0) {
    return *(u32 *)(0x30c + a0);
}

/*
 * noop_02b708  0x8c02b708
 */
u32 noop_02b708(void) {
    u32 in_r0;

    return in_r0;
}

/*
 * noop_02b70c  0x8c02b70c
 */
u32 noop_02b70c(void) {
    u32 in_r0;

    return in_r0;
}

/*
 * noop_02b710  0x8c02b710
 */
u32 noop_02b710(void) {
    u32 in_r0;

    return in_r0;
}

/*
 * noop_02b714  0x8c02b714
 */
u32 noop_02b714(void) {
    u32 in_r0;

    return in_r0;
}

/*
 * noop_02b718  0x8c02b718
 */
u32 noop_02b718(void) {
    u32 in_r0;

    return in_r0;
}

/*
 * noop_02b71c  0x8c02b71c
 */
u32 noop_02b71c(void) {
    u32 in_r0;

    return in_r0;
}

/*
 * noop_02b720  0x8c02b720
 */
u32 noop_02b720(void) {
    u32 in_r0;

    return in_r0;
}

/*
 * noop_02b724  0x8c02b724
 */
u32 noop_02b724(void) {
    u32 in_r0;

    return in_r0;
}

/*
 * noop_02b728  0x8c02b728
 */
u32 noop_02b728(void) {
    u32 in_r0;

    return in_r0;
}

/*
 * noop_02b72c  0x8c02b72c
 */
u32 noop_02b72c(void) {
    u32 in_r0;

    return in_r0;
}

/*
 * ret_const_0_02b730  0x8c02b730
 */
u32 ret_const_0_02b730(void) {
    return 0;
}

/*
 * ret_const_0_02b738  0x8c02b738
 */
u32 ret_const_0_02b738(void) {
    return 0;
}

/*
 * ret_const_0_02b740  0x8c02b740
 */
u32 ret_const_0_02b740(void) {
    return 0;
}

/*
 * noop_02b748  0x8c02b748
 */
u32 noop_02b748(void) {
    u32 in_r0;

    return in_r0;
}

/*
 * noop_02b74c  0x8c02b74c
 */
u32 noop_02b74c(void) {
    u32 in_r0;

    return in_r0;
}

/*
 * noop_02b750  0x8c02b750
 */
u32 noop_02b750(void) {
    u32 in_r0;

    return in_r0;
}

/*
 * noop_02b754  0x8c02b754
 */
u32 noop_02b754(void) {
    u32 in_r0;

    return in_r0;
}

/*
 * noop_02b758  0x8c02b758
 */
u32 noop_02b758(void) {
    u32 in_r0;

    return in_r0;
}

/*
 * ret_const_0_02b75c  0x8c02b75c
 */
u32 ret_const_0_02b75c(void) {
    return 0;
}

/*
 * noop_02b764  0x8c02b764
 */
u32 noop_02b764(void) {
    u32 in_r0;

    return in_r0;
}

/*
 * ret_const_0_02b768  0x8c02b768
 */
u32 ret_const_0_02b768(void) {
    return 0;
}

/*
 * ret_const_0_02b770  0x8c02b770
 */
u32 ret_const_0_02b770(void) {
    return 0;
}

/*
 * FUN_8c02b778  0x8c02b778
 */
u32 FUN_8c02b778(u32 unused_a0, u32 a1, u32 a2, u32 a3) {
    u32 uVar1;
    code *pcVar2;
    u32 uVar3;
    char cVar4;

    cVar4 = '\0';
    uVar1 = Vec3_ctor_xyz(&g_8c1259c8, a1, a2, a3);
    uVar3 = 0x8c2792d8;
    pcVar2 = Vec3_dtor;
    global_list_push(uVar1, Vec3_dtor, 0x8c2792d8, a3);
    uVar1 = Vec3_ctor_xyz(&g_8c1259d8, pcVar2, uVar3, a3);
    uVar3 = 0x8c2792e4;
    pcVar2 = Vec3_dtor;
    global_list_push(uVar1, Vec3_dtor, 0x8c2792e4, a3);
    uVar1 = Vec3_ctor_xyz(&g_8c1259e8, pcVar2, uVar3, a3);
    uVar3 = 0x8c2792f0;
    pcVar2 = Vec3_dtor;
    global_list_push(uVar1, Vec3_dtor, 0x8c2792f0, a3);
    uVar1 = Vec3_ctor_xyz(&g_8c1259f8, pcVar2, uVar3, a3);
    uVar3 = 0x8c2792fc;
    pcVar2 = Vec3_dtor;
    global_list_push(uVar1, Vec3_dtor, 0x8c2792fc, a3);
    if (cVar4 == '\0') {
        g_8c125a08 = CONCAT44(_UNK_8c125a0c, 0x800000);
        /* WARNING: Read-only address (ram,0x8c125a0c) is written */
    } else {
        g_8c125a08 = 0xffffffff00800000;
    }
    uVar1 = FUN_8c02b920(&g_8c27d1fc);
    uVar1 = global_list_push(uVar1, FUN_8c02b858, 0x8c27d1f0, a3);
    return uVar1;
}

/*
 * FUN_8c02b858  0x8c02b858
 */
int FUN_8c02b858(int a0, u32 a1, u32 a2, u32 a3) {
    u32 ar5_00;
    u32 in_stack_fffffff4;
    u32 ain0;

    ain0 = CONCAT22((short)((u32)in_stack_fffffff4 >> 0x10), (u16)a1);
    if (a0 != 0) {
        Class_129920_dtor(a0 + 0x1f8, 0xffffffff, a2, a3);
        Class_129920_dtor(a0 + 0x1f0, 0xffffffff, a2, a3);
        free_if_nonnull_wrap_016bfc(a0 + 0x1ec, 0xffffffff, a2, a3);
        free_if_nonnull_wrap_02b8f0(a0 + 0x1e8, 0xffffffff, a2, a3);
        ar5_00 = 0xffffffff;
        free_if_nonnull_wrap_02b8f0(a0 + 0x1e4, 0xffffffff, a2, a3);
        if (0 < (short)ain0) {
            free_if_nonnull(a0);
        }
    }
    return a0;
}

/*
 * free_if_nonnull_wrap_02b8f0  0x8c02b8f0
 * called by: FUN_8c02b858
 */
int free_if_nonnull_wrap_02b8f0(int a0, u32 a1, u32 a2, u32 a3) {
    u32 in_stack_fffffff4;

    if ((a0 != 0) && (0 < (short)a1)) {
        free_if_nonnull(a0, a1, a2, a3, CONCAT22((short)((u32)in_stack_fffffff4 >> 0x10), (short)a1));
    }
    return a0;
}

/*
 * FUN_8c02b920  0x8c02b920
 * called by: FUN_8c02b778
 */
int FUN_8c02b920(int a0) {
    u8 *ar5_00;
    u32 ar6_00;
    u32 ar7_00;

    ar7_00 = 8;
    ar6_00 = 0;
    ar5_00 = (&FUN_8c024508);
    vec_new_array(a0, (&FUN_8c024508), 0, 8, 8);
    clear_field_0_wrap(a0 + 0x1e4);
    clear_field_0_wrap(a0 + 0x1e8);
    clear_field_0_wrap_015ab8(a0 + 0x1ec);
    Class_129920_ctor(a0 + 0x1f0, ar5_00);
    Class_129920_ctor(a0 + 0x1f8, ar5_00);
    return a0;
}

/*
 * FUN_8c02b9a8  0x8c02b9a8
 * called by: FUN_8c0254d0
 */
int FUN_8c02b9a8(int a0, u32 a1, int a2) {
    u32 uVar1;
    u32 ar6_00;
    u8 *ar7_00;
    int iVar2;
    int iVar3;

    vec_new_array(a0, &LAB_8c02df08, 0, 0x18, 6);
    FUN_8c02d7c8(a0 + 0x90, *(u32 *)(&g_8c1305dc + a2 * 0x140), *(u32 *)(&g_8c1305e4 + a2 * 0x140),
                 *(u32 *)(&g_8c1305e0 + a2 * 0x140));
    ar7_00 = &g_8c1304b6 + a2 * 0x140;
    FUN_8c02da5c(a0 + 0xa8, *(u32 *)(&g_8c1304b0 + a2 * 0x140), (int)*(short *)(&g_8c1304b4 + a2 * 0x140), ar7_00,
                 *(u32 *)(&g_8c1304c4 + a2 * 0x140), *(u32 *)(&g_8c1304c8 + a2 * 0x140));
    ar6_00 = *(u32 *)(&g_8c1304d0 + a2 * 0x140);
    uVar1 = *(u32 *)(&g_8c1304cc + a2 * 0x140);
    FUN_8c02e460(a0 + 0xf8, uVar1, ar6_00, ar7_00);
    iVar3 = a2 * 0x140;
    *(u32 *)(a0 + 0x134) = a1;
    *(int *)(a0 + 0x13c) = a2;
    uVar1 = FUN_8c02bfd8(a0);
    *(int *)(a0 + 0x138) = (int)(short)uVar1;
    *(u8 *)(a0 + 0x144) = 0;
    *(u8 *)(a0 + 0x164) = 0;
    *(u32 *)(a0 + 0x140) = 0;
    *(u32 *)(a0 + 0x148) = 0;
    for (iVar2 = 0; iVar2 < 6; iVar2 = iVar2 + 1) {
        *(u32 *)(a0 + iVar2 * 4 + 0x14c) = 0;
    }
    set_field_b_s8(a0, (int)(char)(&g_8c1304d4)[iVar3]);
    set_field_c_02bd8c(a0, iVar3 + 0x8c1304d8);
    set_field_10_02bd84(a0, iVar3 + 0x8c1304ec);
    set_field_b_s8(a0 + 0x18, (int)(char)(&g_8c130500)[iVar3]);
    set_field_c_02bd8c(a0 + 0x18, iVar3 + 0x8c130504);
    set_field_10_02bd84(a0 + 0x18, iVar3 + 0x8c130518);
    set_field_b_s8(a0 + 0x30, (int)(char)(&g_8c13052c)[iVar3]);
    set_field_c_02bd8c(a0 + 0x30, iVar3 + 0x8c130530);
    set_field_10_02bd84(a0 + 0x30, iVar3 + 0x8c130544);
    set_field_b_s8(a0 + 0x48, (int)(char)(&g_8c130558)[iVar3]);
    set_field_c_02bd8c(a0 + 0x48, iVar3 + 0x8c13055c);
    set_field_10_02bd84(a0 + 0x48, iVar3 + 0x8c130570);
    set_field_b_s8(a0 + 0x60, (int)(char)(&g_8c130584)[iVar3]);
    set_field_c_02bd8c(a0 + 0x60, iVar3 + 0x8c130588);
    set_field_10_02bd84(a0 + 0x60, iVar3 + 0x8c13059c);
    set_field_b_s8(a0 + 0x78, (int)(char)(&g_8c1305b0)[iVar3]);
    set_field_c_02bd8c(a0 + 0x78, iVar3 + 0x8c1305b4);
    set_field_10_02bd84(a0 + 0x78, iVar3 + 0x8c1305c8);
    FUN_8c02bd70(a0 + 0xa8, 0, (int)*(short *)(&g_8c1304b6 + iVar3));
    FUN_8c02bd70(a0 + 0xa8, 1, (int)*(short *)(&g_8c1304b8 + iVar3));
    FUN_8c02bd70(a0 + 0xa8, 2, (int)*(short *)(&g_8c1304ba + iVar3));
    FUN_8c02bd70(a0 + 0xa8, 3, (int)*(short *)(&g_8c1304bc + iVar3));
    FUN_8c02bd70(a0 + 0xa8, 4, (int)*(short *)(&g_8c1304be + iVar3));
    iVar2 = (int)*(short *)(&g_8c1304c0 + iVar3);
    FUN_8c02bd70(a0 + 0xa8, 5, iVar2);
    set_field_14_s16(a0 + 0xa8, *(u32 *)(&g_8c1304ac + iVar3));
    return a0;
}

/*
 * set_field_14_s16  0x8c02bd68
 * called by: FUN_8c02b9a8, FUN_8c02c758, FUN_8c02cbe4, FUN_8c02ce58
 */
u32 set_field_14_s16(int a0, u32 a1) {
    *(short *)(a0 + 0x14) = (short)a1;
    return a1;
}

/*
 * FUN_8c02bd70  0x8c02bd70
 * called by: FUN_8c02b9a8, FUN_8c02c758
 */
u32 FUN_8c02bd70(int a0, int a1, u32 a2) {
    *(u16 *)(a0 + a1 * 2 + 0x22) = (u16)a2;
    return 0x22;
}

/*
 * set_field_10_02bd84  0x8c02bd84
 * called by: FUN_8c02b9a8, FUN_8c02c758
 */
u32 set_field_10_02bd84(int a0, u32 a1) {
    u32 in_r0;

    *(u32 *)(a0 + 0x10) = a1;
    return in_r0;
}

/*
 * set_field_c_02bd8c  0x8c02bd8c
 * called by: FUN_8c02b9a8, FUN_8c02c758
 */
u32 set_field_c_02bd8c(int a0, u32 a1) {
    u32 in_r0;

    *(u32 *)(a0 + 0xc) = a1;
    return in_r0;
}

/*
 * set_field_b_s8  0x8c02bd94
 * called by: FUN_8c02b9a8, FUN_8c02c758, FUN_8c02cbe4
 */
u32 set_field_b_s8(int a0, u32 a1) {
    *(char *)(a0 + 0xb) = (char)a1;
    return a1;
}

/*
 * FUN_8c02bd9c  0x8c02bd9c
 * called by: FUN_8c02ebfc
 */
u32 FUN_8c02bd9c(int a0) {
    int iVar1;
    u32 uVar2;

    iVar1 = FUN_8c02bea4(a0);
    if ((iVar1 < 1) && (uVar2 = get_field_0_s8(a0), (char)uVar2 == '\x01')) {
        return 0;
    }
    iVar1 = FUN_8c02bea4(a0 + 0x18);
    if ((iVar1 < 1) && (uVar2 = get_field_0_s8(a0 + 0x18), (char)uVar2 == '\x01')) {
        return 0;
    }
    iVar1 = FUN_8c02bea4(a0 + 0x30);
    if ((iVar1 < 1) && (uVar2 = get_field_0_s8(a0 + 0x30), (char)uVar2 == '\x01')) {
        return 0;
    }
    iVar1 = FUN_8c02bea4(a0 + 0x48);
    if ((iVar1 < 1) && (uVar2 = get_field_0_s8(a0 + 0x48), (char)uVar2 == '\x01')) {
        return 0;
    }
    iVar1 = get_field_4_02be9c(a0 + 0x60);
    if ((iVar1 == 0x2710) && (uVar2 = get_field_0_s8(a0 + 0x60), (char)uVar2 == '\x01')) {
        return 0;
    }
    return 1;
}

/*
 * get_field_4_02be9c  0x8c02be9c
 * called by: FUN_8c02bd9c, FUN_8c02c3a8, FUN_8c02cf20
 */
u32 get_field_4_02be9c(int a0) {
    return *(u32 *)(a0 + 4);
}

/*
 * FUN_8c02bea4  0x8c02bea4
 * called by: FUN_8c02bd9c, FUN_8c02c3a8, FUN_8c02dfa0
 */
int FUN_8c02bea4(int a0) {
    return *(int *)(*(char *)(a0 + 8) * 4 + *(int *)(a0 + 0x10)) - *(int *)(a0 + 4);
}

/*
 * FUN_8c02bebc  0x8c02bebc
 * called by: FUN_8c065228, FUN_8c108560
 */
u32 FUN_8c02bebc(int a0) {
    int iVar1;

    iVar1 = 0;
    while (true) {
        if (5 < iVar1) {
            return 0xffffffff;
        }
        if (*(int *)(0x14c + a0 + iVar1 * 4) == 2)
            break;
        iVar1 = iVar1 + 1;
    }
    return iVar1;
}

/*
 * FUN_8c02bef8  0x8c02bef8
 * called by: CAnimal_RunIncubator, CAnimal_m2_02573c, CAnimal_m3_026078, CAnimal_m5_026774, Class_12a078_m2_05eee0,
 * Class_12a5d0_m2_08a49c, Class_12a5d0_m3_08a704, Class_12a7a8_m1_098d14 (+45 more)
 */
int FUN_8c02bef8(int a0, u32 a1, u32 a2) {
    u32 uVar1;
    int iStack_10;

    uVar1 = FUN_8c02bfd8(a0);
    iStack_10 = *(short *)((&DATA_8c1302bc) + (short)uVar1 * 2) + -1;
    uVar1 = FUN_8c02bf8c(a0, a1);
    if ((int)*(short *)((&DATA_8c1302e0) + *(int *)(0x13c + a0) * 2) + (int)(short)uVar1 < iStack_10) {
        uVar1 = FUN_8c02bf8c(a0, a1);
        iStack_10 = (int)*(short *)((&DATA_8c1302e0) + *(int *)(0x13c + a0) * 2) + (int)(short)uVar1;
    }
    return iStack_10;
}

/*
 * FUN_8c02bf8c  0x8c02bf8c
 * called by: FUN_8c02bef8, FUN_8c0bcedc
 */
int FUN_8c02bf8c(int a0, u32 a1) {
    u32 uVar1;

    uVar1 = get_field_16_s16(a0 + 0xa8);
    return (int)(short)uVar1;
}

/*
 * get_field_16_s16  0x8c02bfb4
 * called by: FUN_8c02bf8c, FUN_8c02cf20, FUN_8c02d1f4
 */
int get_field_16_s16(int a0) {
    return (int)*(short *)(a0 + 0x16);
}

/*
 * FUN_8c02bfbc  0x8c02bfbc
 * called by: FUN_8c02b698
 */
int FUN_8c02bfbc(int a0) {
    return (int)*(short *)((&DATA_8c1302bc) + *(int *)(0x138 + a0) * 2);
}

/*
 * FUN_8c02bfd8  0x8c02bfd8
 * called by: FUN_8c0254d0, FUN_8c02b9a8, FUN_8c02bef8, FUN_8c02c030, FUN_8c02c758, FUN_8c034d48, FUN_8c0611cc,
 * FUN_8c1063a8
 */
u32 FUN_8c02bfd8(int a0) {
    int iVar1;
    int iVar2;

    iVar1 = 0;
    do {
        if (0x11 < iVar1) {
            return 0xffffffff;
        }
        for (iVar2 = 0; iVar2 < 4; iVar2 = iVar2 + 1) {
            if (*(int *)((&DATA_8c13019c) + iVar2 * 4 + iVar1 * 0x10) == *(int *)(0x13c + a0)) {
                return iVar1;
            }
        }
        iVar1 = iVar1 + 1;
    } while (true);
}

/*
 * FUN_8c02c030  0x8c02c030
 * called by: CAnimal_m2_02573c, CAnimal_m2_0386d0, CAnimal_m3_026078, Class_12a990_m2_09bc2c
 */
u32 FUN_8c02c030(int a0, int *a1, int *a2, u32 a3) {
    int iVar1;
    u32 uVar2;
    int *ar6_00;
    int *ar5_00;
    u32 uVar3;
    u32 ar6_01;
    int ar5_01;
    u32 in_stack_ffffffb4;

    ar5_00 = a1;
    ar6_00 = a2;
    iVar1 = get_field_24_026024(a2, a1, a2, a3);
    if (*(char *)(a0 + 0x144) == '\x01') {
        set_field_4c_u8(a0 + 0xa8, (int)*(char *)(a0 + 0x144));
        set_field_a_s8(a0, (int)*(char *)(a0 + 0x144));
        set_field_a_s8(a0 + 0x18, (int)*(char *)(a0 + 0x144));
        if (iVar1 == 0) {
            set_field_a_s8(a0 + 0x30, (int)*(char *)(a0 + 0x144));
        }
        if (iVar1 == 1) {
            set_field_a_s8(a0 + 0x48, (int)*(char *)(a0 + 0x144));
        }
        set_field_a_s8(a0 + 0x60, (int)*(char *)(a0 + 0x144));
        ar5_00 = (int *)(int)*(char *)(a0 + 0x144);
        set_field_a_s8(a0 + 0x78, ar5_00);
    }
    if (iVar1 == 0) {
        FUN_8c02df24(a0, a2, ar6_00, a3);
        FUN_8c02df24(a0 + 0x18, a2, ar6_00, a3);
        FUN_8c02df24(a0 + 0x30, a2, ar6_00, a3);
        ar5_00 = a2;
        FUN_8c02df24(a0 + 0x48, a2, ar6_00, a3);
        uVar2 = get_field_0_s8(a0 + 0x78);
        in_stack_ffffffb4 =
            CONCAT22((short)((u32)in_stack_ffffffb4 >> 0x10), CONCAT11((char)uVar2, (char)in_stack_ffffffb4));
        if ((char)uVar2 == '\x01') {
            ar5_00 = a2;
            FUN_8c02df24(a0 + 0x78, a2, ar6_00, a3);
        }
    }
    if (a1 != *(int **)(a0 + 0x148)) {
        a3 = FUN_8c02c518(a0, ar5_00, ar6_00);
        ar5_00 = a2;
        ar6_00 = a1;
        FUN_8c02e4cc(a0 + 0xf8, a2, a1, a3);
    }
    iVar1 = noop_02c380(a0 + 0xf8);
    if ((iVar1 == 0) && (a1 != *(int **)(a0 + 0x148))) {
        if (a1 != *(int **)(a0 + 0x148)) {
            ar6_00 = (int *)FUN_8c02c518(a0, ar5_00, ar6_00);
            ar5_00 = a1;
            FUN_8c02d854(a0 + 0x90, a1, ar6_00, a3);
        }
        iVar1 = FUN_8c02c340(a0 + 0x90, ar5_00, ar6_00, a3);
        uVar3 = 0xd;
        uVar2 = libgcc_divide_helper_0101e4(iVar1 + -0x32, 0xd);
        ar5_01 = (int)(char)uVar2;
        iVar1 = FUN_8c02c340(a0 + 0x90, uVar3, ar6_00, a3);
        if ((iVar1 == 100) && (ar5_01 = 5, g_8c27d430 == 1)) {
            ar5_01 = 4;
        }
        set_field_8_s8(a0 + 0x60, ar5_01);
        iVar1 = FUN_8c02d8fc(a0 + 0x90);
        if (iVar1 == 1) {
            set_field_0_u8(a0 + 0x60, 1);
        } else {
            set_field_0_u8(a0 + 0x60, 0);
        }
        ar5_00 = a2;
        FUN_8c02df24(a0 + 0x60, a2, ar6_00, a3);
    }
    uVar2 = FUN_8c02c518(a0, ar5_00, ar6_00);
    set_field_48(a0 + 0xa8, uVar2);
    uVar3 = (**(code **)(*a2 + 0x148))(a2, uVar2, ar6_00, a3);
    uVar2 = FUN_8c02bfd8(a0);
    ar6_01 = *(u32 *)(a0 + 0x140);
    uVar2 = FUN_8c02c310(uVar3, (int)(short)uVar2, ar6_01);
    set_field_3_s8(a0 + 0xa8, (int)(char)uVar2);
    uVar2 = *(u32 *)(a0 + 0x13c);
    FUN_8c02db6c(a0 + 0xa8, uVar2, ar6_01);
    *(u8 *)(a0 + 0x144) = 0;
    FUN_8c02c5b4(a0);
    *(int **)(a0 + 0x148) = a1;
    return 0x148;
}

/*
 * set_field_3_s8  0x8c02c308
 * called by: FUN_8c02c030
 */
u32 set_field_3_s8(int a0, u32 a1) {
    *(char *)(a0 + 3) = (char)a1;
    return a1;
}

/*
 * FUN_8c02c310  0x8c02c310
 * called by: FUN_8c02c030, FUN_8c0611cc
 */
int FUN_8c02c310(int a0, u32 a1, u32 a2) {
    return (int)*(char *)(a0 + (short)a1 * 2 + (int)(short)a2 + 0x51);
}

/*
 * set_field_48  0x8c02c328
 * called by: FUN_8c02c030, FUN_8c02d2e0
 */
u32 set_field_48(int a0, u32 a1) {
    *(u32 *)(a0 + 0x48) = a1;
    return 0x48;
}

/*
 * set_field_0_u8  0x8c02c330
 * called by: Class_12a078_m2_05eee0, FUN_8c02c030, FUN_8c02cbe4, FUN_8c02d2e0, FUN_8c05d860, FUN_8c0611cc, FUN_8c1063a8
 */
u32 set_field_0_u8(u8 *a0, u32 a1) {
    u32 in_r0;

    *a0 = (u8)a1;
    return in_r0;
}

/*
 * set_field_8_s8  0x8c02c338
 * called by: FUN_8c02c030, FUN_8c02cbe4
 */
u32 set_field_8_s8(int a0, u32 a1) {
    *(char *)(a0 + 8) = (char)a1;
    return a1;
}

/*
 * FUN_8c02c340  0x8c02c340
 * called by: FUN_8c02c030, FUN_8c02d3e8, FUN_8c035740, FUN_8c035858, FUN_8c05d860, FUN_8c0620d4, FUN_8c062b0c,
 * FUN_8c063838 (+3 more)
 */
u32 FUN_8c02c340(int a0, u32 unused_a1, u32 a2, u32 a3) {
    u32 uVar1;

    uVar1 = (*(code *)(&libgcc_divide_helper_0101e4))(*(int *)(a0 + 4) * 0x3e8, *(int *)(a0 + 0xc) * 10, a2, a3);
    return uVar1;
}

/*
 * noop_02c380  0x8c02c380
 * does nothing
 * called by: FUN_8c02c030, FUN_8c02d478, FUN_8c02d4c4
 */
u32 noop_02c380(u32 *a0) {
}

/*
 * set_field_a_s8  0x8c02c388
 * called by: FUN_8c02c030
 */
u32 set_field_a_s8(int a0, u32 a1) {
    *(char *)(a0 + 10) = (char)a1;
    return a1;
}

/*
 * set_field_4c_u8  0x8c02c390
 * called by: FUN_8c02c030
 */
u32 set_field_4c_u8(int a0, u32 a1) {
    *(u8 *)(a0 + 0x4c) = (u8)a1;
    return 0x4c;
}

/*
 * FUN_8c02c398  0x8c02c398
 * called by: CAnimal_RunIncubator, Class_12a5d0_m6_08aad8, Class_12ab2c_m6_09dd64, Class_12aeec_m6_0a47f0
 */
int FUN_8c02c398(int a0) {
    int iVar1;

    iVar1 = 0x144;
    *(u8 *)(0x144 + a0) = 0;
    return iVar1;
}

/*
 * FUN_8c02c3a8  0x8c02c3a8
 * called by: FUN_8c0bcedc
 */
u32 FUN_8c02c3a8(int a0) {
    int iVar1;
    u32 uVar2;

    iVar1 = FUN_8c02bea4(a0 + 0x48);
    if ((iVar1 < 1) && (uVar2 = get_field_0_s8(a0 + 0x48), (char)uVar2 == '\x01')) {
        return 3;
    }
    iVar1 = FUN_8c02bea4(a0 + 0x30);
    if ((iVar1 < 1) && (uVar2 = get_field_0_s8(a0 + 0x30), (char)uVar2 == '\x01')) {
        return 2;
    }
    iVar1 = FUN_8c02bea4(a0);
    if ((iVar1 < 1) && (uVar2 = get_field_0_s8(a0), (char)uVar2 == '\x01')) {
        return 0;
    }
    iVar1 = FUN_8c02bea4(a0 + 0x18);
    if ((iVar1 < 1) && (uVar2 = get_field_0_s8(a0 + 0x18), (char)uVar2 == '\x01')) {
        return 1;
    }
    iVar1 = get_field_4_02be9c(a0 + 0x18);
    if (iVar1 == 0x2710) {
        uVar2 = 1;
    } else {
        iVar1 = get_field_4_02be9c(a0 + 0x60);
        if ((iVar1 == 0x2710) && (uVar2 = get_field_0_s8(a0 + 0x60), (char)uVar2 == '\x01')) {
            return 4;
        }
        iVar1 = FUN_8c02c4e8(a0);
        if (iVar1 == 0) {
            uVar2 = 10;
        } else {
            uVar2 = 0xffffffff;
        }
    }
    return uVar2;
}

/*
 * FUN_8c02c4e8  0x8c02c4e8
 * called by: FUN_8c02c3a8, FUN_8c02ebfc
 */
int FUN_8c02c4e8(int a0) {
    u32 uVar1;

    uVar1 = get_field_1c_s8(a0 + 0xa8);
    return (int)(char)uVar1;
}

/*
 * get_field_1c_s8  0x8c02c510
 * called by: FUN_8c02c4e8
 */
int get_field_1c_s8(int a0) {
    return (int)*(char *)(a0 + 0x1c);
}

/*
 * FUN_8c02c518  0x8c02c518
 * called by: CAnimal_m2_0386d0, Class_12a990_m2_09bc2c, FUN_8c02c030, FUN_8c02c668, FUN_8c02d2e0, FUN_8c035110,
 * FUN_8c05d860, FUN_8c05f660 (+15 more)
 */
int FUN_8c02c518(int a0, u32 a1, u32 a2) {
    u32 uVar1;
    int iVar2;
    char cVar3;
    int iVar4;

    cVar3 = -1;
    iVar2 = -1;
    for (iVar4 = 0; iVar4 < 6; iVar4 = iVar4 + 1) {
        uVar1 = get_field_0_s8(iVar4 * 0x18 + a0);
        if (((char)uVar1 == '\x01') && (iVar4 != 5)) {
            uVar1 = get_field_8_s8(iVar4 * 0x18 + a0, a1);
            if (cVar3 < (char)uVar1) {
                iVar2 = iVar4;
                cVar3 = (char)uVar1;
            }
        }
    }
    return iVar2;
}

/*
 * get_field_8_s8  0x8c02c5ac
 * called by: FUN_8c02c518, FUN_8c02c668, FUN_8c02cf20, FUN_8c05d860, FUN_8c05f660, FUN_8c0652f4, FUN_8c103100,
 * FUN_8c10862c (+1 more)
 */
int get_field_8_s8(int a0, u32 a1) {
    return (int)*(char *)(a0 + 8);
}

/*
 * FUN_8c02c5b4  0x8c02c5b4
 * called by: FUN_8c02c030
 */
u32 FUN_8c02c5b4(int a0) {
    u32 uVar1;
    int iVar2;

    for (iVar2 = 0; iVar2 < 6; iVar2 = iVar2 + 1) {
        uVar1 = get_field_0_s8(iVar2 * 0x18 + a0);
        if ((char)uVar1 == '\0') {
            if (*(int *)(0x14c + a0 + iVar2 * 4) == 2) {
                *(u32 *)(0x14c + a0 + iVar2 * 4) = 0;
            } else if (*(int *)(0x14c + a0 + iVar2 * 4) == 1) {
                *(u32 *)(0x14c + a0 + iVar2 * 4) = 2;
            }
        } else {
            *(u32 *)(0x14c + a0 + iVar2 * 4) = 1;
        }
    }
    return 6;
}

/*
 * FUN_8c02c668  0x8c02c668
 * called by: FUN_8c02ebfc
 */
int FUN_8c02c668(int a0, int a1, u32 a2) {
    int iVar1;
    u32 uVar2;
    u32 uVar3;
    int iVar4;

    iVar4 = 0;
    iVar1 = FUN_8c02c518(a0, a1, a2);
    if (iVar1 != -1) {
        iVar1 = FUN_8c02c518(a0, a1, a2);
        uVar2 = FUN_8c02e400(iVar1 * 0x18 + a0);
        if ((char)uVar2 == '\0') {
            iVar4 = 0;
        } else {
            iVar1 = FUN_8c02c518(a0, a1, a2);
            uVar2 = FUN_8c02e400(iVar1 * 0x18 + a0);
            iVar1 = FUN_8c02c518(a0, a1, a2);
            uVar3 = get_field_8_s8(iVar1 * 0x18 + a0, a1);
            a1 = (int)(char)uVar2;
            iVar4 = libgcc_divide_helper_0101e4(0x1e, a1);
            iVar4 = iVar4 * (char)uVar3;
        }
    }
    iVar1 = FUN_8c02c518(a0, a1, a2);
    return iVar4 + (u32)(iVar1 != -1) * 0x46;
}

/*
 * FUN_8c02c758  0x8c02c758
 * called by: FUN_8c02a6f8
 */
u32 FUN_8c02c758(int a0, int a1, u32 a2, u32 a3) {
    int iVar1;
    u32 uVar2;
    int iVar3;
    int iVar4;
    u32 in_stack_ffffffe4;
    u16 uVar5;
    u32 ain0;

    iVar4 = a1 * 0x140;
    iVar3 = a1;
    iVar1 = get_field_34_02cbdc(a0 + 0xa8);
    if (iVar1 != 0x13) {
        set_field_10_02cbd4(a0 + 0xa8, 0);
        iVar3 = 0;
        FUN_8c02cbbc(a0 + 0x90, 0);
    }
    uVar5 = (u16)((u32)in_stack_ffffffe4 >> 0x10);
    *(u8 *)(a0 + 0x144) = 0;
    *(u8 *)(a0 + 0x164) = 0;
    *(int *)(a0 + 0x13c) = a1;
    uVar2 = FUN_8c02bfd8(a0);
    ain0 = CONCAT22(uVar5, (short)uVar2);
    *(int *)(a0 + 0x138) = (int)(short)uVar2;
    set_field_b_s8(a0, (int)(char)(&g_8c1304d4)[iVar4]);
    set_field_c_02bd8c(a0, iVar4 + 0x8c1304d8);
    set_field_10_02bd84(a0, iVar4 + 0x8c1304ec);
    set_field_b_s8(a0 + 0x18, (int)(char)(&g_8c130500)[iVar4]);
    set_field_c_02bd8c(a0 + 0x18, iVar4 + 0x8c130504);
    set_field_10_02bd84(a0 + 0x18, iVar4 + 0x8c130518);
    set_field_b_s8(a0 + 0x30, (int)(char)(&g_8c13052c)[iVar4]);
    set_field_c_02bd8c(a0 + 0x30, iVar4 + 0x8c130530);
    set_field_10_02bd84(a0 + 0x30, iVar4 + 0x8c130544);
    set_field_b_s8(a0 + 0x48, (int)(char)(&g_8c130558)[iVar4]);
    set_field_c_02bd8c(a0 + 0x48, iVar4 + 0x8c13055c);
    set_field_10_02bd84(a0 + 0x48, iVar4 + 0x8c130570);
    set_field_b_s8(a0 + 0x60, (int)(char)(&g_8c130584)[iVar4]);
    set_field_c_02bd8c(a0 + 0x60, iVar4 + 0x8c130588);
    set_field_10_02bd84(a0 + 0x60, iVar4 + 0x8c13059c);
    set_field_b_s8(a0 + 0x78, (int)(char)(&g_8c1305b0)[iVar4]);
    set_field_c_02bd8c(a0 + 0x78, iVar4 + 0x8c1305b4);
    set_field_10_02bd84(a0 + 0x78, iVar4 + 0x8c1305c8);
    set_field_c_02cbb4(a0 + 0x90, *(u32 *)(&g_8c1305dc + iVar4));
    set_field_10_02cbac(a0 + 0x90, *(u32 *)(&g_8c1305e4 + iVar4));
    FUN_8c02d81c(a0 + 0x90, *(u32 *)(&g_8c1305e0 + iVar4), a2, a3);
    set_field_38(a0 + 0xa8, *(u32 *)(&g_8c1304b0 + iVar4));
    set_field_20_u16(a0 + 0xa8, (int)*(short *)(&g_8c1304b4 + iVar4));
    FUN_8c02bd70(a0 + 0xa8, 0, (int)*(short *)(&g_8c1304b6 + iVar4));
    FUN_8c02bd70(a0 + 0xa8, 1, (int)*(short *)(&g_8c1304b8 + iVar4));
    FUN_8c02bd70(a0 + 0xa8, 2, (int)*(short *)(&g_8c1304ba + iVar4));
    FUN_8c02bd70(a0 + 0xa8, 3, (int)*(short *)(&g_8c1304bc + iVar4));
    FUN_8c02bd70(a0 + 0xa8, 4, (int)*(short *)(&g_8c1304be + iVar4));
    iVar3 = (int)*(short *)(&g_8c1304c0 + iVar4);
    FUN_8c02bd70(a0 + 0xa8, 5, iVar3);
    set_field_34(a0 + 0xa8, *(u32 *)(&g_8c1304c4 + iVar4));
    set_field_30(a0 + 0xa8, *(u32 *)(&g_8c1304c8 + iVar4));
    set_field_14_s16(a0 + 0xa8, *(u32 *)(&g_8c1304ac + iVar4));
    set_field_16_s16(a0 + 0xa8, 0);
    set_field_18(a0 + 0xa8, 0);
    set_field_0_u8_02cb7c(a0 + 0xa8, 0, iVar3, a3);
    set_field_1_s8(a0 + 0xa8, 0);
    set_field_3c(a0 + 0xa8, 0);
    FUN_8c02cb24(a0 + 0xf8, *(u32 *)(&g_8c1304cc + iVar4), iVar3, a3);
    uVar2 = FUN_8c02cadc(a0 + 0xf8, *(u32 *)(&g_8c1304d0 + iVar4), iVar3, a3);
    return uVar2;
}

/*
 * FUN_8c02cadc  0x8c02cadc
 * called by: FUN_8c02c758, FUN_8c02e460
 */
u32 FUN_8c02cadc(int a0, int a1, u32 a2, u32 a3) {
    u32 uVar1;

    uVar1 = (*(code *)(&libgcc_divide_helper_0101e4))(a1 * 0x708 * 0x3e8, 0x34bc0, a2, a3);
    *(u32 *)(a0 + 0xc) = uVar1;
    return uVar1;
}

/*
 * FUN_8c02cb24  0x8c02cb24
 * called by: FUN_8c02c758, FUN_8c02e460
 */
u32 FUN_8c02cb24(int a0, int a1, u32 a2, u32 a3) {
    u32 uVar1;

    uVar1 = (*(code *)(&libgcc_divide_helper_0101e4))(a1 * 0x708 * 0x3e8, 0x34bc0, a2, a3);
    *(u32 *)(a0 + 8) = uVar1;
    return uVar1;
}

/*
 * set_field_3c  0x8c02cb6c
 * called by: FUN_8c02c758, FUN_8c035f58, FUN_8c035fa0, FUN_8c035fe8
 */
u32 set_field_3c(int a0, u32 a1) {
    u32 in_r0;

    *(u32 *)(a0 + 0x3c) = a1;
    return in_r0;
}

/*
 * set_field_1_s8  0x8c02cb74
 * called by: FUN_8c02c758, FUN_8c02cbe4, FUN_8c0611cc, FUN_8c103100, FUN_8c1063a8, FUN_8c109e40
 */
u32 set_field_1_s8(int a0, u32 a1) {
    *(char *)(a0 + 1) = (char)a1;
    return a1;
}

/*
 * set_field_0_u8_02cb7c  0x8c02cb7c
 * called by: Class_12a078_m2_05eee0, FUN_8c02c758, FUN_8c02cbe4, FUN_8c05d860, FUN_8c103100, FUN_8c109e40,
 * set_field_0_u8_wrap
 */
u32 set_field_0_u8_02cb7c(u8 *a0, u32 a1, u32 a2, u32 a3) {
    u32 in_r0;

    *a0 = (u8)a1;
    return in_r0;
}

/*
 * set_field_18  0x8c02cb84
 * called by: Class_12b2e8_m1_0b5ad0, FUN_8c02c758, FUN_8c02cbe4, FUN_8c02ce58, FUN_8c0b6440, FUN_8c104854, FUN_8c1063a8
 */
u32 set_field_18(int a0, u32 a1) {
    u32 in_r0;

    *(u32 *)(a0 + 0x18) = a1;
    return in_r0;
}

/*
 * set_field_30  0x8c02cb8c
 * called by: FUN_8c02c758, FUN_8c035f58, FUN_8c035fa0, FUN_8c035fe8
 */
u32 set_field_30(int a0, u32 a1) {
    u32 in_r0;

    *(u32 *)(a0 + 0x30) = a1;
    return in_r0;
}

/*
 * set_field_34  0x8c02cb94
 * called by: FUN_8c02c758
 */
u32 set_field_34(int a0, u32 a1) {
    u32 in_r0;

    *(u32 *)(a0 + 0x34) = a1;
    return in_r0;
}

/*
 * set_field_20_u16  0x8c02cb9c
 * called by: FUN_8c02c758
 */
u32 set_field_20_u16(int a0, u32 a1) {
    *(u16 *)(a0 + 0x20) = (u16)a1;
    return 0x20;
}

/*
 * set_field_38  0x8c02cba4
 * called by: FUN_8c02c758
 */
u32 set_field_38(int a0, u32 a1) {
    u32 in_r0;

    *(u32 *)(a0 + 0x38) = a1;
    return in_r0;
}

/*
 * set_field_10_02cbac  0x8c02cbac
 * called by: FUN_8c02c758
 */
u32 set_field_10_02cbac(int a0, u32 a1) {
    u32 in_r0;

    *(u32 *)(a0 + 0x10) = a1;
    return in_r0;
}

/*
 * set_field_c_02cbb4  0x8c02cbb4
 * called by: FUN_8c02c758
 */
u32 set_field_c_02cbb4(int a0, u32 a1) {
    u32 in_r0;

    *(u32 *)(a0 + 0xc) = a1;
    return in_r0;
}

/*
 * FUN_8c02cbbc  0x8c02cbbc
 * called by: Class_12a078_m2_05eee0, FUN_8c02c758, FUN_8c02cbe4, FUN_8c05d860, FUN_8c0611cc, FUN_8c103100,
 * FUN_8c1063a8, FUN_8c109e40
 */
u32 FUN_8c02cbbc(int a0, int a1) {
    int iVar1;

    iVar1 = *(int *)(a0 + 0xc) - a1;
    if (iVar1 < 1) {
        *(u32 *)(a0 + 4) = *(u32 *)(a0 + 0xc);
        return *(u32 *)(a0 + 0xc);
    }
    *(int *)(a0 + 4) = a1;
    return iVar1;
}

/*
 * set_field_10_02cbd4  0x8c02cbd4
 * called by: Class_12acc8_m1_09f470, FUN_8c02c758, FUN_8c02cbe4, FUN_8c02ce58
 */
u32 set_field_10_02cbd4(int a0, u32 a1) {
    u32 in_r0;

    *(u32 *)(a0 + 0x10) = a1;
    return in_r0;
}

/*
 * get_field_34_02cbdc  0x8c02cbdc
 * called by: FUN_8c02c758
 */
u32 get_field_34_02cbdc(int a0) {
    return *(u32 *)(a0 + 0x34);
}

/*
 * FUN_8c02cbe4  0x8c02cbe4
 * called by: FUN_8c028ccc, FUN_8c038a44, FUN_8c0883e0, FUN_8c08b694, FUN_8c09ad34, FUN_8c09c7c0, FUN_8c0a5614
 */
u32 FUN_8c02cbe4(int a0, u32 *a1, u32 a2, u32 a3) {
    u32 uVar1;
    int ain0;

    FUN_8c02ce4c(a0, *a1);
    FUN_8c02ce40(a0, a1[1]);
    FUN_8c02ce34(a0, a1[2]);
    FUN_8c02ce28(a0, a1[3]);
    FUN_8c02cbbc(a0 + 0x90, a1[4]);
    FUN_8c02ce10(a0 + 0x90, a1[5], a2);
    set_field_0_u8_02cb7c(a0 + 0xa8, (int)*(char *)(a1 + 6), a2, a3);
    set_field_1_s8(a0 + 0xa8, (int)*(char *)((int)a1 + 0x19));
    set_field_8(a0 + 0xa8, a1[7]);
    set_field_c(a0 + 0xa8, a1[8]);
    set_field_10_02cbd4(a0 + 0xa8, a1[9]);
    set_field_14_s16(a0 + 0xa8, (int)*(short *)(a1 + 10));
    set_field_16_s16(a0 + 0xa8, (int)*(short *)((int)a1 + 0x2a));
    set_field_18(a0 + 0xa8, a1[0xb]);
    set_field_10_02ce08(a0 + 0xf8, a1[0xc]);
    for (ain0 = 0; ain0 < 6; ain0 = ain0 + 1) {
        set_field_b_s8(ain0 * 0x18 + a0, (int)*(char *)(a1 + ain0 * 3 + 0xd));
        set_field_0_u8(ain0 * 0x18 + a0, (int)*(char *)((int)a1 + ain0 * 0xc + 0x35));
        set_field_8_s8(ain0 * 0x18 + a0, (int)*(char *)(a1 + ain0 * 3 + 0xf));
        set_field_4_02ce00(ain0 * 0x18 + a0, a1[ain0 * 3 + 0xe], a2, a3);
    }
    set_field_9_s8(a0 + 0x78, (int)*(char *)(a1 + 0x1e));
    uVar1 = set_field_8_s8(a0 + 0x78, 0);
    return uVar1;
}

/*
 * set_field_9_s8  0x8c02cdf8
 * called by: FUN_8c02cbe4
 */
u32 set_field_9_s8(int a0, u32 a1) {
    *(char *)(a0 + 9) = (char)a1;
    return a1;
}

/*
 * set_field_4_02ce00  0x8c02ce00
 * called by: FUN_8c02cbe4, FUN_8c02d2e0, FUN_8c05d860
 */
u32 set_field_4_02ce00(int a0, u32 a1, u32 unused_a2, u32 a3) {
    u32 in_r0;

    *(u32 *)(a0 + 4) = a1;
    return in_r0;
}

/*
 * set_field_10_02ce08  0x8c02ce08
 * called by: FUN_8c02cbe4
 */
u32 set_field_10_02ce08(int a0, u32 a1) {
    u32 in_r0;

    *(u32 *)(a0 + 0x10) = a1;
    return in_r0;
}

/*
 * FUN_8c02ce10  0x8c02ce10
 * called by: Class_12a078_m2_05eee0, FUN_8c02cbe4, FUN_8c035740, FUN_8c035858, FUN_8c05d860, FUN_8c0611cc,
 * FUN_8c0620d4, FUN_8c062b0c (+5 more)
 */
u32 FUN_8c02ce10(int a0, int a1, u32 a2) {
    int iVar1;

    iVar1 = *(int *)(a0 + 0x10) - a1;
    if (iVar1 < 1) {
        *(u32 *)(a0 + 8) = *(u32 *)(a0 + 0x10);
        return *(u32 *)(a0 + 0x10);
    }
    *(int *)(a0 + 8) = a1;
    return iVar1;
}

/*
 * FUN_8c02ce28  0x8c02ce28
 * called by: FUN_8c02cbe4, FUN_8c02ce58
 */
int FUN_8c02ce28(int a0, u32 a1) {
    int iVar1;

    iVar1 = 0x140;
    *(u32 *)(0x140 + a0) = a1;
    return iVar1;
}

/*
 * FUN_8c02ce34  0x8c02ce34
 * called by: FUN_8c02cbe4, FUN_8c02ce58
 */
int FUN_8c02ce34(int a0, u32 a1) {
    int iVar1;

    iVar1 = 0x13c;
    *(u32 *)(0x13c + a0) = a1;
    return iVar1;
}

/*
 * FUN_8c02ce40  0x8c02ce40
 * called by: FUN_8c02cbe4, FUN_8c02ce58
 */
int FUN_8c02ce40(int a0, u32 a1) {
    int iVar1;

    iVar1 = 0x138;
    *(u32 *)(0x138 + a0) = a1;
    return iVar1;
}

/*
 * FUN_8c02ce4c  0x8c02ce4c
 * called by: FUN_8c02cbe4, FUN_8c02ce58
 */
int FUN_8c02ce4c(int a0, u32 a1) {
    int iVar1;

    iVar1 = 0x134;
    *(u32 *)(0x134 + a0) = a1;
    return iVar1;
}

/*
 * FUN_8c02ce58  0x8c02ce58
 * called by: FUN_8c028da8, FUN_8c08b720, FUN_8c09ad94, FUN_8c09c820, FUN_8c0a5674
 */
u32 FUN_8c02ce58(int a0, u32 *a1) {
    u32 uVar1;

    uVar1 = 0;
    FUN_8c02ce4c(a0, *a1);
    FUN_8c02ce40(a0, a1[1]);
    FUN_8c02ce34(a0, a1[2]);
    FUN_8c02ce28(a0, a1[3]);
    set_field_8(a0 + 0xa8, a1[4]);
    set_field_c(a0 + 0xa8, a1[5]);
    set_field_10_02cbd4(a0 + 0xa8, a1[6]);
    set_field_14_s16(a0 + 0xa8, (int)*(short *)(a1 + 7));
    set_field_16_s16(a0 + 0xa8, (int)*(short *)((int)a1 + 0x1e));
    uVar1 = set_field_18(a0 + 0xa8, a1[8]);
    return uVar1;
}

/*
 * FUN_8c02cf20  0x8c02cf20
 * called by: FUN_8c028f60, FUN_8c038aa4, FUN_8c088440, FUN_8c09adec, FUN_8c09c878, FUN_8c0a56cc
 */
u32 FUN_8c02cf20(int a0, u32 *a1, u32 a2) {
    u32 uVar1;
    u32 *ar5_00;
    int iVar2;

    ar5_00 = a1;
    uVar1 = get_field_134_02d1e8(a0);
    *a1 = uVar1;
    uVar1 = get_field_138_02737c(a0);
    a1[1] = uVar1;
    uVar1 = get_field_13c_028d9c(a0, ar5_00, a2);
    a1[2] = uVar1;
    uVar1 = get_field_140_025f70(a0, ar5_00);
    a1[3] = uVar1;
    uVar1 = get_field_4_02d1e0(a0 + 0x90);
    a1[4] = uVar1;
    uVar1 = get_field_8_02d1d8(a0 + 0x90);
    a1[5] = uVar1;
    uVar1 = get_field_0_s8_02d1d0(a0 + 0xa8);
    *(char *)(a1 + 6) = (char)uVar1;
    uVar1 = get_field_1_s8(a0 + 0xa8);
    *(char *)((int)a1 + 0x19) = (char)uVar1;
    uVar1 = get_field_8_02d1c0(a0 + 0xa8);
    a1[7] = uVar1;
    uVar1 = get_field_c_02d1b8(a0 + 0xa8);
    a1[8] = uVar1;
    uVar1 = get_field_10_02d1b0(a0 + 0xa8);
    a1[9] = uVar1;
    uVar1 = get_field_14_s16(a0 + 0xa8);
    *(short *)(a1 + 10) = (short)uVar1;
    uVar1 = get_field_16_s16(a0 + 0xa8);
    *(short *)((int)a1 + 0x2a) = (short)uVar1;
    uVar1 = get_field_18_02d1a0(a0 + 0xa8);
    a1[0xb] = uVar1;
    uVar1 = get_field_10_02d198(a0 + 0xf8);
    a1[0xc] = uVar1;
    for (iVar2 = 0; iVar2 < 6; iVar2 = iVar2 + 1) {
        *(char *)(a1 + iVar2 * 3 + 0xd) = (char)iVar2;
        uVar1 = get_field_0_s8(iVar2 * 0x18 + a0);
        *(char *)((int)a1 + iVar2 * 0xc + 0x35) = (char)uVar1;
        uVar1 = get_field_4_02be9c(iVar2 * 0x18 + a0);
        a1[iVar2 * 3 + 0xe] = uVar1;
        uVar1 = get_field_8_s8(iVar2 * 0x18 + a0, ar5_00);
        *(char *)(a1 + iVar2 * 3 + 0xf) = (char)uVar1;
    }
    uVar1 = get_field_9_s8(a0 + 0x78);
    *(char *)(a1 + 0x1e) = (char)uVar1;
    return 0x78;
}

/*
 * get_field_9_s8  0x8c02d190
 * called by: FUN_8c02cf20
 */
int get_field_9_s8(int a0) {
    return (int)*(char *)(a0 + 9);
}

/*
 * get_field_10_02d198  0x8c02d198
 * called by: FUN_8c02cf20
 */
u32 get_field_10_02d198(int a0) {
    return *(u32 *)(a0 + 0x10);
}

/*
 * get_field_18_02d1a0  0x8c02d1a0
 * called by: CAnimal_m2_0386d0, Class_12b0c4_m2_0abc38, FUN_8c02cf20, FUN_8c02d1f4, get_field_18_on_field_a8
 */
u32 get_field_18_02d1a0(int a0) {
    return *(u32 *)(a0 + 0x18);
}

/*
 * get_field_14_s16  0x8c02d1a8
 * called by: FUN_8c02cf20, FUN_8c02d1f4
 */
int get_field_14_s16(int a0) {
    return (int)*(short *)(a0 + 0x14);
}

/*
 * get_field_10_02d1b0  0x8c02d1b0
 * called by: FUN_8c02cf20, FUN_8c02d1f4
 */
u32 get_field_10_02d1b0(int a0) {
    return *(u32 *)(a0 + 0x10);
}

/*
 * get_field_c_02d1b8  0x8c02d1b8
 * called by: CAnimal_m2_0386d0, CAnimal_m2_088094, Class_12a7f4_m2_09a060, Class_12a7f4_m3_09a558,
 * Class_12a990_m2_09bc2c, Class_12ad50_m2_0a4fdc, FUN_8c02cf20, FUN_8c02d1f4 (+1 more)
 */
u32 get_field_c_02d1b8(int a0) {
    return *(u32 *)(a0 + 0xc);
}

/*
 * get_field_8_02d1c0  0x8c02d1c0
 * called by: FUN_8c02cf20, FUN_8c02d1f4
 */
u32 get_field_8_02d1c0(int a0) {
    return *(u32 *)(a0 + 8);
}

/*
 * get_field_1_s8  0x8c02d1c8
 * called by: FUN_8c02cf20, FUN_8c02db04, FUN_8c0355cc, FUN_8c035994, FUN_8c035a3c, FUN_8c10862c
 */
int get_field_1_s8(int a0) {
    return (int)*(char *)(a0 + 1);
}

/*
 * get_field_0_s8_02d1d0  0x8c02d1d0
 * called by: FUN_8c02cf20, FUN_8c109dc4
 */
int get_field_0_s8_02d1d0(char *a0) {
    return (int)*a0;
}

/*
 * get_field_8_02d1d8  0x8c02d1d8
 * called by: FUN_8c02cf20
 */
u32 get_field_8_02d1d8(int a0) {
    return *(u32 *)(a0 + 8);
}

/*
 * get_field_4_02d1e0  0x8c02d1e0
 * called by: FUN_8c02cf20, FUN_8c109e40
 */
u32 get_field_4_02d1e0(int a0) {
    return *(u32 *)(a0 + 4);
}

/*
 * get_field_134_02d1e8  0x8c02d1e8
 * called by: FUN_8c02cf20, FUN_8c02d1f4
 */
u32 get_field_134_02d1e8(int a0) {
    return *(u32 *)(0x134 + a0);
}

/*
 * FUN_8c02d1f4  0x8c02d1f4
 * called by: FUN_8c02903c, FUN_8c09ae4c, FUN_8c09c8d8, FUN_8c0a572c
 */
u32 FUN_8c02d1f4(int a0, u32 *a1, u32 a2) {
    u32 uVar1;
    u32 *ar5_00;

    ar5_00 = a1;
    uVar1 = get_field_134_02d1e8(a0);
    *a1 = uVar1;
    uVar1 = get_field_138_02737c(a0);
    a1[1] = uVar1;
    uVar1 = get_field_13c_028d9c(a0, ar5_00, a2);
    a1[2] = uVar1;
    uVar1 = get_field_140_025f70(a0, ar5_00);
    a1[3] = uVar1;
    uVar1 = get_field_8_02d1c0(a0 + 0xa8);
    a1[4] = uVar1;
    uVar1 = get_field_c_02d1b8(a0 + 0xa8);
    a1[5] = uVar1;
    uVar1 = get_field_10_02d1b0(a0 + 0xa8);
    a1[6] = uVar1;
    uVar1 = get_field_14_s16(a0 + 0xa8);
    *(short *)(a1 + 7) = (short)uVar1;
    uVar1 = get_field_16_s16(a0 + 0xa8);
    *(short *)((int)a1 + 0x1e) = (short)uVar1;
    uVar1 = get_field_18_02d1a0(a0 + 0xa8);
    a1[8] = uVar1;
    return uVar1;
}

/*
 * FUN_8c02d2e0  0x8c02d2e0
 * called by: FUN_8c0274bc
 */
u32 FUN_8c02d2e0(int a0, int a1, u32 a2, u32 a3) {
    u32 uVar1;
    int ar5_00;
    int iVar2;
    u32 in_stack_ffffffe4;
    u32 ain0;

    ar5_00 = a1;
    FUN_8c02d944(a0 + 0x90, a1, a2, a3, in_stack_ffffffe4);
    for (iVar2 = 0; iVar2 < 6; iVar2 = iVar2 + 1) {
        ar5_00 = a1;
        FUN_8c02e3cc(iVar2 * 0x18 + a0, a1);
    }
    if ((6 < a1) && ((*(int *)(a0 + 0x13c) == 2 || (*(int *)(a0 + 0x13c) == 6)))) {
        ar5_00 = 10000;
        set_field_4_02ce00(a0 + 0x18, 10000, a2, a3);
    }
    uVar1 = get_field_0_s8_02d3e0(a0 + 0x90);
    ain0 = CONCAT31((s32)((u32)in_stack_ffffffe4 >> 8), (char)uVar1);
    if ((char)uVar1 == '\0') {
        uVar1 = FUN_8c02c518(a0, ar5_00, a2);
        set_field_48(a0 + 0xa8, uVar1);
        uVar1 = FUN_8c02de00(a0 + 0xa8, a1, *(u32 *)(a0 + 0x13c));
    } else {
        set_field_4_02ce00(a0 + 0x60, 10000, a2, a3);
        uVar1 = set_field_0_u8(a0 + 0x60, 1);
    }
    return uVar1;
}

/*
 * get_field_0_s8_02d3e0  0x8c02d3e0
 * called by: FUN_8c02d2e0, FUN_8c103100
 */
int get_field_0_s8_02d3e0(char *a0) {
    return (int)*a0;
}

/*
 * FUN_8c02d3e8  0x8c02d3e8
 * called by: FUN_8c02ebfc, FUN_8c0bcedc
 */
u32 FUN_8c02d3e8(int a0, u32 a1, u32 a2, u32 a3) {
    u32 uVar1;

    uVar1 = FUN_8c02c340(a0 + 0x90, a1, a2, a3);
    return uVar1;
}

/*
 * FUN_8c02d410  0x8c02d410
 * called by: FUN_8c02ebfc
 */
u32 FUN_8c02d410(int a0, u32 unused_a1, u32 a2, u32 a3) {
    u32 uVar1;

    uVar1 = FUN_8c02d438(a0 + 0x90, unused_a1, a2, a3);
    return uVar1;
}

/*
 * FUN_8c02d438  0x8c02d438
 * called by: FUN_8c02d410
 */
u32 FUN_8c02d438(int a0, u32 unused_a1, u32 a2, u32 a3) {
    u32 uVar1;

    uVar1 = (*(code *)(&libgcc_divide_helper_0101e4))(*(int *)(a0 + 8) * 0x3e8, *(int *)(a0 + 0x10) * 10, a2, a3);
    return uVar1;
}

/*
 * FUN_8c02d478  0x8c02d478
 * called by: FUN_8c02ebfc
 */
int FUN_8c02d478(int a0) {
    int iVar1;
    int iVar2;

    iVar1 = noop_02c380(a0 + 0xf8);
    iVar2 = get_field_4_02d4bc(a0 + 0xf8);
    return iVar1 * iVar2;
}

/*
 * get_field_4_02d4bc  0x8c02d4bc
 * called by: FUN_8c02d478, FUN_8c02d4c4
 */
u32 get_field_4_02d4bc(int a0) {
    return *(u32 *)(a0 + 4);
}

/*
 * FUN_8c02d4c4  0x8c02d4c4
 * called by: FUN_8c02ebfc
 */
int FUN_8c02d4c4(int a0) {
    int iVar1;
    int iVar2;

    iVar1 = noop_02c380(a0 + 0xf8);
    iVar2 = get_field_4_02d4bc(a0 + 0xf8);
    return (1 - iVar1) * iVar2;
}

/*
 * FUN_8c02d50c  0x8c02d50c
 * called by: FUN_8c0243b0
 */
u32 *FUN_8c02d50c(u32 *a0) {
    int iVar1;

    *a0 = 0xffffffff;
    a0[1] = 0x13;
    a0[2] = 0x1b;
    a0[3] = 2;
    a0[4] = 0;
    a0[5] = 0;
    *(u8 *)(a0 + 6) = 0;
    *(u8 *)((int)a0 + 0x19) = 0;
    a0[7] = 0;
    a0[8] = 0;
    a0[9] = 0;
    *(u16 *)(a0 + 10) = 0;
    *(u16 *)((int)a0 + 0x2a) = 0;
    a0[0xb] = 0;
    a0[0xc] = 0;
    for (iVar1 = 0; iVar1 < 6; iVar1 = iVar1 + 1) {
        *(char *)(a0 + iVar1 * 3 + 0xd) = (char)iVar1;
        *(u8 *)((int)a0 + iVar1 * 0xc + 0x35) = 0;
        a0[iVar1 * 3 + 0xe] = 0;
        *(u8 *)(a0 + iVar1 * 3 + 0xf) = 0;
    }
    return a0;
}

/*
 * FUN_8c02d5b8  0x8c02d5b8
 * called by: FUN_8c0ba284
 */
u32 *FUN_8c02d5b8(u32 *a0) {
    *a0 = 0xffffffff;
    a0[1] = 0x13;
    a0[2] = 0x1b;
    a0[3] = 2;
    a0[4] = 0;
    a0[5] = 0;
    a0[6] = 0;
    *(u16 *)(a0 + 7) = 0;
    *(u16 *)((int)a0 + 0x1e) = 0;
    a0[8] = 0;
    return a0;
}

/*
 * FUN_8c02d5e8  0x8c02d5e8
 */
u32 FUN_8c02d5e8(u32 unused_a0, u32 a1, u32 a2, u32 a3) {
    u32 uVar1;
    u32 uVar2;
    u8 *puVar3;

    uVar1 = Vec3_ctor_xyz((&DATA_8c125a10), a1, a2, a3);
    puVar3 = (&Vec3_dtor);
    uVar2 = 0x8c27d400;
    global_list_push(uVar1, (&Vec3_dtor), 0x8c27d400, a3);
    uVar1 = Vec3_ctor_xyz((&DATA_8c125a20), puVar3, uVar2, a3);
    puVar3 = (&Vec3_dtor);
    uVar2 = 0x8c27d40c;
    global_list_push(uVar1, (&Vec3_dtor), 0x8c27d40c, a3);
    uVar1 = Vec3_ctor_xyz((&DATA_8c125a30), puVar3, uVar2, a3);
    puVar3 = (&Vec3_dtor);
    uVar2 = 0x8c27d418;
    global_list_push(uVar1, (&Vec3_dtor), 0x8c27d418, a3);
    uVar2 = Vec3_ctor_xyz((&DATA_8c125a40), puVar3, uVar2, a3);
    global_list_push(uVar2, (&Vec3_dtor), 0x8c27d424, a3);
    *(u16 *)((&DATA_8c1302e0) + 6) = *(u16 *)((&DATA_8c1304a8) + 0x28c);
    *(short *)((&DATA_8c1302e0) + 8) = *(short *)((&DATA_8c1304a8) + 0x28c) + *(short *)((&DATA_8c1304a8) + 0x3cc);
    *(u16 *)((&DATA_8c1302e0) + 0xe) = *(u16 *)((&DATA_8c1304a8) + 0x78c);
    *(u16 *)((&DATA_8c1302e0) + 0x1e) = *(u16 *)((&DATA_8c1304a8) + 0x118c);
    *(short *)((&DATA_8c1302e0) + 0x20) = *(short *)((&DATA_8c1304a8) + 0x118c) + *(short *)((&DATA_8c1304a8) + 0x12cc);
    *(u16 *)((&DATA_8c1302e0) + 0x24) = *(u16 *)((&DATA_8c1304a8) + 0x154c);
    *(short *)((&DATA_8c1302e0) + 0x26) = *(short *)((&DATA_8c1304a8) + 0x154c) + *(short *)((&DATA_8c1304a8) + 0x168c);
    return 0x26;
}

/*
 * FUN_8c02d720  0x8c02d720
 */
u32 FUN_8c02d720(u32 unused_a0, u32 a1, u32 a2, u32 a3) {
    u32 uVar1;
    u32 uVar2;
    u8 *puVar3;

    uVar1 = Vec3_ctor_xyz((&DATA_8c125a50), a1, a2, a3);
    puVar3 = (&Vec3_dtor);
    uVar2 = 0x8c27d438;
    global_list_push(uVar1, (&Vec3_dtor), 0x8c27d438, a3);
    uVar1 = Vec3_ctor_xyz((&DATA_8c125a60), puVar3, uVar2, a3);
    puVar3 = (&Vec3_dtor);
    uVar2 = 0x8c27d444;
    global_list_push(uVar1, (&Vec3_dtor), 0x8c27d444, a3);
    uVar1 = Vec3_ctor_xyz((&DATA_8c125a70), puVar3, uVar2, a3);
    puVar3 = (&Vec3_dtor);
    uVar2 = 0x8c27d450;
    global_list_push(uVar1, (&Vec3_dtor), 0x8c27d450, a3);
    uVar2 = Vec3_ctor_xyz((&DATA_8c125a80), puVar3, uVar2, a3);
    uVar2 = global_list_push(uVar2, (&Vec3_dtor), 0x8c27d45c, a3);
    return uVar2;
}

/*
 * FUN_8c02d7c8  0x8c02d7c8
 * called by: FUN_8c02b9a8
 */
u8 *FUN_8c02d7c8(u8 *a0, u32 a1, u32 a2, int a3) {
    u32 uVar1;

    *(u32 *)(a0 + 0xc) = a1;
    *(u32 *)(a0 + 0x10) = a2;
    uVar1 = libgcc_divide_helper_0101e4(a3 * 0x3840, a1);
    *(u32 *)(a0 + 0x14) = uVar1;
    *a0 = 0;
    *(u32 *)(a0 + 4) = 0;
    *(u32 *)(a0 + 8) = 0;
    return a0;
}

/*
 * FUN_8c02d81c  0x8c02d81c
 * called by: FUN_8c02c758
 */
u32 FUN_8c02d81c(int a0, int a1, u32 a2, u32 a3) {
    u32 uVar1;

    uVar1 = (*(code *)(&libgcc_divide_helper_0101e4))(a1 * 0x3840, *(u32 *)(a0 + 0xc), a2, a3);
    *(u32 *)(a0 + 0x14) = uVar1;
    return uVar1;
}

/*
 * FUN_8c02d854  0x8c02d854
 * called by: FUN_8c02c030
 */
u32 FUN_8c02d854(int a0, u32 a1, u32 a2, u32 a3) {
    char cVar1;
    int iVar2;
    u32 uVar3;
    u32 uVar4;

    cVar1 = (char)a2;
    uVar3 = 0;
    if (*(int *)(a0 + 0x14) != 0) {
        uVar4 = *(u32 *)(a0 + 0x14);
        iVar2 = libgcc_divide_helper_0103d0(a1, uVar4);
        if ((iVar2 == 0) && (*(int *)(a0 + 4) < *(int *)(a0 + 0xc))) {
            *(int *)(a0 + 4) = *(int *)(a0 + 4) + 1;
        }
        uVar3 = *(u32 *)(a0 + 8);
        if (((*(u32 *)(a0 + 8) == 1) && (uVar3 = (int)cVar1, (int)cVar1 == 0xffffffff)) &&
            (uVar3 = 0x258, 0x258 < a1)) {
            uVar4 = rand();
            uVar3 = libgcc_divide_helper_01031c(uVar4, 100, a2);
            if (uVar3 == 1) {
                uVar3 = (*(code *)(&libgcc_divide_helper_0101e4))(*(u32 *)(a0 + 0x10), 10, a2, a3);
                *(u32 *)(a0 + 8) = uVar3 * 6;
            }
        }
    }
    return uVar3;
}

/*
 * FUN_8c02d8fc  0x8c02d8fc
 * called by: FUN_8c02c030
 */
u32 FUN_8c02d8fc(int a0) {
    int iVar1;

    iVar1 = libgcc_divide_helper_0101e4(*(u32 *)(a0 + 0xc), 2);
    return (u32)(iVar1 < *(int *)(a0 + 4));
}

/*
 * FUN_8c02d930  0x8c02d930
 * called by: FUN_8c05fec4
 */
u32 FUN_8c02d930(int a0) {
    bool bVar1;

    bVar1 = *(int *)(a0 + 0x14) != 0;
    if (bVar1) {
        *(u32 *)(a0 + 4) = 1;
        *(u32 *)(a0 + 8) = 1;
    }
    return (u32)bVar1;
}

/*
 * FUN_8c02d944  0x8c02d944
 * called by: FUN_8c02d2e0
 */
int FUN_8c02d944(u8 *a0, int a1, u32 unused_a2, u32 unused_a3, int ain0) {
    int iVar1;

    if ((0 < a1) && (ain0 = 0, *(int *)(a0 + 0x14) != 0)) {
        iVar1 = *(int *)(a0 + 0xc) - *(int *)(a0 + 4);
        if ((a1 < 5) && (-1 < a1)) {
            switch (a1) {
            case 1:
                iVar1 = libgcc_divide_helper_0101e4(iVar1, 2);
                iVar1 = iVar1 + -1;
                if (iVar1 < 0) {
                    iVar1 = 0;
                }
                break;
            case 2:
                iVar1 = libgcc_divide_helper_0101e4(iVar1, 0x10);
                break;
            case 3:
                iVar1 = libgcc_divide_helper_0101e4(iVar1, 0x10);
                break;
            case 4:
                iVar1 = 0;
            }
        } else {
            iVar1 = 0;
        }
        if (iVar1 == 0) {
            *a0 = 1;
        }
        ain0 = *(int *)(a0 + 0xc) - iVar1;
        *(int *)(a0 + 4) = ain0;
    }
    return ain0;
}

/*
 * FUN_8c02d9f4  0x8c02d9f4
 * called by: FUN_8c02da5c
 */
u8 *FUN_8c02d9f4(u8 *a0) {
    *a0 = 0;
    a0[1] = 0;
    a0[2] = 0;
    a0[4] = 0;
    return a0;
}

/*
 * noop_02da0c  0x8c02da0c
 * called by: FUN_8c02db6c
 */
u32 noop_02da0c(void) {
    u32 in_r0;

    return in_r0;
}

/*
 * FUN_8c02da10  0x8c02da10
 */
u32 FUN_8c02da10(char *a0, int a1) {
    if (((a1 != 4) && (a1 != 7)) && (a1 != 0x13)) {
        *a0 = '\0';
        return 0;
    }
    if (((a0[3] == '\0') && (a0[1] == '\0')) && ((a0[4] == '\0' && (*a0 == '\x01')))) {
        return 1;
    }
    return 0;
}

/*
 * FUN_8c02da5c  0x8c02da5c
 * called by: FUN_8c02b9a8
 */
int FUN_8c02da5c(int a0, u32 a1, u32 a2, int a3, u32 s0, u32 s4) {
    int iVar1;

    FUN_8c02d9f4(a0);
    *(u32 *)(a0 + 8) = 0;
    *(u32 *)(a0 + 0xc) = 0;
    *(u32 *)(a0 + 0x10) = 0;
    *(u16 *)(a0 + 0x14) = 0;
    *(u16 *)(a0 + 0x16) = 0;
    *(u32 *)(a0 + 0x18) = 0;
    *(u32 *)(a0 + 0x3c) = 0;
    *(u8 *)(a0 + 0x1c) = 1;
    *(u8 *)(a0 + 0x40) = 0;
    *(u32 *)(a0 + 0x44) = 1;
    *(short *)(a0 + 0x20) = (short)a2;
    for (iVar1 = 0; iVar1 < 6; iVar1 = iVar1 + 1) {
        *(u16 *)(a0 + iVar1 * 2 + 0x22) = *(u16 *)(iVar1 * 2 + a3);
    }
    *(u32 *)(a0 + 0x34) = s0;
    *(u32 *)(a0 + 0x30) = s4;
    *(u32 *)(a0 + 0x38) = a1;
    *(u32 *)(a0 + 0x38) = 0x270f;
    *(u8 *)(a0 + 0x4c) = 0;
    return a0;
}

/*
 * FUN_8c02db04  0x8c02db04
 * called by: FUN_8c025ff4
 */
u32 FUN_8c02db04(int a0) {
    u32 uVar1;
    bool bVar2;

    if (*(short *)(a0 + 0x20) <= *(short *)(a0 + 0x16)) {
        if ((int)*(short *)(a0 + 0x14) != *(int *)(a0 + 0x30)) {
            *(u16 *)(a0 + 0x1e) = 1;
            return 1;
        }
        uVar1 = get_field_1_s8(a0);
        if ((char)uVar1 == '\x01') {
            *(u16 *)(a0 + 0x1e) = 1;
            return 1;
        }
    }
    bVar2 = *(int *)(a0 + 0x3c) == 1;
    if (bVar2) {
        *(u16 *)(a0 + 0x1e) = 1;
    }
    return (u32)bVar2;
}

/*
 * FUN_8c02db6c  0x8c02db6c
 * called by: FUN_8c02c030
 */
u32 FUN_8c02db6c(int a0, int a1, u32 a2) {
    u32 r7;
    int iVar1;
    u32 uVar2;
    int iVar3;
    int iVar4;
    u32 in_stack_ffffffcc;

    iVar3 = a0;
    noop_02da0c(a0, a1, a2, r7, CONCAT31((u32)((u32)in_stack_ffffffcc >> 8) & 0xffff00, 1));
    *(u16 *)(a0 + 0x1e) = 0;
    if (*(char *)(a0 + 0x4c) == '\x01') {
        *(int *)(a0 + 0x10) = *(int *)(a0 + 0x10) + 1;
        iVar1 = *(int *)(&g_8c1304b0 + a1 * 0x140);
        iVar4 = *(int *)(a0 + 0x10) - iVar1;
        if (2 < iVar4) {
            *(u8 *)(a0 + 0x1c) = 0;
        }
        if (*(int *)(a0 + 0x10) == iVar1) {
            uVar2 = rand();
            iVar3 = libgcc_divide_helper_01031c(uVar2, 100, a2);
            if (iVar3 < 0x32) {
                *(u8 *)(a0 + 0x1c) = 0;
            }
        } else if (iVar4 == 1) {
            uVar2 = rand();
            iVar3 = libgcc_divide_helper_01031c(uVar2, 100, a2);
            if (iVar3 < 0x4b) {
                *(u8 *)(a0 + 0x1c) = 0;
            }
        } else if (iVar4 == 2) {
            *(u8 *)(a0 + 0x1c) = 0;
        }
        *(u32 *)(a0 + 0xc) = 0;
        *(int *)(a0 + 0x18) = *(int *)(a0 + 0x18) + 1;
        FUN_8c02dc8c(a0);
    }
    *(u8 *)(a0 + 0x4c) = 0;
    return 0x4c;
}

/*
 * FUN_8c02dc8c  0x8c02dc8c
 * called by: FUN_8c02db6c, FUN_8c02de00
 */
int FUN_8c02dc8c(int a0) {
    int iVar1;
    char cVar2;

    cVar2 = '\x01';
    if ((*(int *)(a0 + 0x48) != -1) && (*(int *)(a0 + 0x48) != 4)) {
        return *(int *)(a0 + 0x48);
    }
    iVar1 = (int)*(short *)(a0 + 0x14);
    if ((iVar1 < 8) && (1 < iVar1)) {
        switch (iVar1) {
        case 2:
            if ((*(short *)(a0 + 0x16) == 2) && (*(char *)(a0 + 0x40) < '\x01')) {
                cVar2 = '\0';
            }
            break;
        case 3:
            if ((*(short *)(a0 + 0x16) == 0) && (*(char *)(a0 + 0x40) < '\x02')) {
                cVar2 = '\0';
            }
            break;
        case 5:
            goto switchD_8c02dcc2_caseD_5;
        case 6:
            cVar2 = '\x01';
            if ((*(short *)(a0 + 0x16) < 2) && (*(char *)(a0 + 0x40) < '\x01')) {
                cVar2 = '\0';
            }
            if ((*(short *)(a0 + 0x16) == 2) && (*(char *)(a0 + 0x40) < '\x03')) {
                cVar2 = '\0';
            }
            break;
        case 7:
            if ((*(short *)(a0 + 0x16) == 0) && (*(char *)(a0 + 0x40) < '\x04')) {
                cVar2 = '\0';
            }
        }
    } else {
    switchD_8c02dcc2_caseD_5:
        *(u32 *)(a0 + 0x44) = 1;
    }
    iVar1 = *(int *)(a0 + 0x44);
    if (((iVar1 == 1) && (iVar1 = (int)cVar2, iVar1 == 1)) &&
        (iVar1 = *(int *)(a0 + 0x18), *(short *)(a0 + *(short *)(a0 + 0x16) * 2 + 0x22) <= iVar1)) {
        *(u16 *)(a0 + 0x1e) = 1;
        if (*(short *)(a0 + *(short *)(a0 + 0x16) * 2 + 0x22) != 0) {
            *(short *)(a0 + 0x16) = *(short *)(a0 + 0x16) + 1;
        }
        *(u32 *)(a0 + 0x18) = 0;
        iVar1 = (int)*(short *)(a0 + 0x20);
        if (iVar1 <= *(short *)(a0 + 0x16)) {
            if ((int)*(short *)(a0 + 0x14) == *(int *)(a0 + 0x30)) {
                *(u16 *)(a0 + 0x1e) = 0;
                iVar1 = *(short *)(a0 + 0x20) + -1;
                *(short *)(a0 + 0x16) = (short)iVar1;
            } else {
                iVar1 = (int)*(short *)(a0 + 0x20);
                *(short *)(a0 + 0x16) = *(short *)(a0 + 0x20);
            }
        }
    }
    return iVar1;
}

/*
 * FUN_8c02de00  0x8c02de00
 * called by: FUN_8c02d2e0
 */
u32 FUN_8c02de00(int a0, int a1, int a2) {
    u32 uVar1;
    int iVar2;
    int iVar3;

    uVar1 = 1;
    if (0 < a1) {
        *(int *)(a0 + 0x18) = *(int *)(a0 + 0x18) + 1;
        *(int *)(a0 + 0x10) = *(int *)(a0 + 0x10) + a1;
        if (2 < *(int *)(a0 + 0x10) - *(int *)((&DATA_8c1304a8) + a2 * 0x140 + 8)) {
            *(u8 *)(a0 + 0x1c) = 0;
        }
        iVar2 = *(int *)(a0 + 0x10) - *(int *)((&DATA_8c1304a8) + a2 * 0x140 + 8);
        iVar3 = a2;
        if (*(int *)(a0 + 0x10) == *(int *)((&DATA_8c1304a8) + a2 * 0x140 + 8)) {
            uVar1 = rand();
            iVar2 = libgcc_divide_helper_01031c(uVar1, 100, iVar3);
            if (iVar2 < 0x32) {
                *(u8 *)(a0 + 0x1c) = 0;
            }
        } else if (iVar2 == 1) {
            uVar1 = rand();
            iVar2 = libgcc_divide_helper_01031c(uVar1, 100, iVar3);
            if (iVar2 < 0x4b) {
                *(u8 *)(a0 + 0x1c) = 0;
            }
        } else if (iVar2 == 2) {
            *(u8 *)(a0 + 0x1c) = 0;
        }
        *(u32 *)(a0 + 0xc) = 0;
        uVar1 = FUN_8c02dc8c(a0);
    }
    return uVar1;
}

/*
 * FUN_8c02df08  0x8c02df08
 */
u8 *FUN_8c02df08(u8 *a0) {
    *a0 = 0;
    *(u32 *)(a0 + 4) = 0;
    a0[8] = 0;
    a0[9] = 0;
    *(u32 *)(a0 + 0x14) = 0;
    return a0;
}

/*
 * FUN_8c02df24  0x8c02df24
 * called by: FUN_8c02c030
 */
u32 FUN_8c02df24(char *a0, u32 a1, u32 a2, u32 a3) {
    FUN_8c02dfa0(a0, a1, a2, a3);
    if (*a0 == '\x01') {
        if (a0[10] == '\x01') {
            if (a0[0xb] == '\x05') {
                FUN_8c02e38c(a0, 1);
            } else {
                *(int *)(a0 + 4) = *(int *)(a0 + 4) + 1;
            }
        }
        if ((a0[0xb] == '\x05') && (2 < *(int *)(a0 + 4))) {
            *a0 = '\0';
            a0[4] = '\0';
            a0[5] = '\0';
            a0[6] = '\0';
            a0[7] = '\0';
        }
    } else {
        a0[4] = '\0';
        a0[5] = '\0';
        a0[6] = '\0';
        a0[7] = '\0';
    }
    a0[10] = '\0';
    return 0;
}

/*
 * FUN_8c02dfa0  0x8c02dfa0
 * called by: FUN_8c02df24
 */
int FUN_8c02dfa0(char *a0, int *a1, u32 a2, u32 a3) {
    u64 uVar1;
    u32 uVar2;
    int iVar3;
    int *piVar4;
    char cVar5;
    float fVar6;
    u64 in_dr0;
    float fVar7;
    char cVar8;
    char cVar9;
    u64 uStack_54;
    u32 uStack_48;
    u32 uStack_44;
    u32 uStack_34;
    u32 uStack_30;
    u32 uStack_28;
    u32 uStack_24;

    cVar9 = '\0';
    cVar8 = '\0';
    iVar3 = (int)a0[0xb];
    if ((iVar3 < 6) && (-1 < iVar3)) {
        switch (iVar3) {
        case 0:
            *a0 = '\0';
            piVar4 = a1;
            for (cVar5 = '\0'; cVar5 < '\x05'; cVar5 = cVar5 + '\x01') {
                if (*(int *)(cVar5 * 4 + *(int *)(a0 + 0xc)) != -1) {
                    (**(code **)(*a1 + 0x178))(a1, piVar4, a2, a3);
                    uVar2 = (u32)(in_dr0 >> 0x20);
                    uStack_28 = uVar2;
                    if (cVar9 != '\0') {
                        uStack_28 = (u32)in_dr0;
                        uStack_24 = uVar2;
                    }
                    if (cVar9 == '\0') {
                        in_dr0 = CONCAT44(uStack_28, (float)*(int *)(cVar5 * 4 + *(int *)(a0 + 0xc)));
                    } else {
                        in_dr0 = CONCAT44(uStack_24, uStack_28);
                    }
                    if (cVar8 != '\0' || (float)in_dr0 <= (float)(in_dr0 >> 0x20)) {
                        a0[8] = cVar5;
                        *a0 = '\x01';
                    }
                }
            }
            (**(code **)(*a1 + 0x178))(a1, piVar4, a2, a3);
            fVar6 = (float)(in_dr0 >> 0x20);
            if (cVar9 == '\0') {
                fVar7 = 35.0;
            } else {
                fVar6 = 35.0;
                fVar7 = 3.78351e-42;
            }
            if ((cVar8 != '\0' || fVar7 <= fVar6) &&
                (*(int *)(a0 + 0x14) = *(int *)(a0 + 0x14) + 1, 0xa8c < *(u32 *)(a0 + 0x14))) {
                uVar2 = rand();
                iVar3 = libgcc_divide_helper_01031c(uVar2, 1000, a2);
                if (iVar3 == 4) {
                    a0[4] = '\x10';
                    a0[5] = '\'';
                    a0[6] = '\0';
                    a0[7] = '\0';
                }
            }
            break;
        case 1:
            *a0 = '\0';
            piVar4 = a1;
            for (cVar5 = '\0'; cVar5 < '\x05'; cVar5 = cVar5 + '\x01') {
                if (*(int *)(cVar5 * 4 + *(int *)(a0 + 0xc)) != -1) {
                    (**(code **)(*a1 + 0x178))(a1, piVar4, a2, a3);
                    uVar2 = (u32)(in_dr0 >> 0x20);
                    uStack_34 = uVar2;
                    if (cVar9 != '\0') {
                        uStack_34 = (u32)in_dr0;
                        uStack_30 = uVar2;
                    }
                    if (cVar9 == '\0') {
                        in_dr0 = CONCAT44(uStack_34, (float)*(int *)(cVar5 * 4 + *(int *)(a0 + 0xc)));
                    } else {
                        in_dr0 = CONCAT44(uStack_30, uStack_34);
                    }
                    if (cVar8 == '\0' && (float)(in_dr0 >> 0x20) < (float)in_dr0) {
                        a0[8] = cVar5;
                        *a0 = '\x01';
                    }
                }
            }
            (**(code **)(*a1 + 0x178))(a1, piVar4, a2, a3);
            if (cVar9 == '\0') {
                in_dr0 = in_dr0 >> 0x20;
            }
            if (((float)in_dr0 == 0.0) &&
                (*(int *)(a0 + 0x14) = *(int *)(a0 + 0x14) + 1, 0xa8c < *(u32 *)(a0 + 0x14))) {
                uVar2 = rand();
                piVar4 = (int *)0x3e8;
                iVar3 = libgcc_divide_helper_01031c(uVar2, 1000, a2);
                if (iVar3 == 4) {
                    a0[4] = '\x10';
                    a0[5] = '\'';
                    a0[6] = '\0';
                    a0[7] = '\0';
                }
            }
            iVar3 = FUN_8c02bea4(a0);
            if (iVar3 < 1) {
                (**(code **)(*a1 + 0x178))(a1, piVar4, a2, a3);
            }
            break;
        case 2:
            *a0 = '\0';
            piVar4 = a1;
            for (cVar5 = '\0'; cVar5 < '\x05'; cVar5 = cVar5 + '\x01') {
                if (*(int *)(cVar5 * 4 + *(int *)(a0 + 0xc)) != -1) {
                    (**(code **)(*a1 + 0x17c))(a1, piVar4, a2, a3);
                    uVar2 = (u32)(in_dr0 >> 0x20);
                    uStack_48 = uVar2;
                    if (cVar9 != '\0') {
                        uStack_48 = (u32)in_dr0;
                        uStack_44 = uVar2;
                    }
                    if (cVar9 == '\0') {
                        in_dr0 = CONCAT44(uStack_48, (float)*(int *)(cVar5 * 4 + *(int *)(a0 + 0xc)));
                    } else {
                        in_dr0 = CONCAT44(uStack_44, uStack_48);
                    }
                    if (cVar8 == '\0' && (float)(in_dr0 >> 0x20) < (float)in_dr0) {
                        a0[8] = cVar5;
                        *a0 = '\x01';
                    }
                }
            }
            (**(code **)(*a1 + 0x17c))(a1, piVar4, a2, a3);
            if (cVar9 == '\0') {
                in_dr0 = in_dr0 >> 0x20;
            }
            if (((float)in_dr0 == 0.0) &&
                (*(int *)(a0 + 0x14) = *(int *)(a0 + 0x14) + 1, 0xa8c < *(u32 *)(a0 + 0x14))) {
                uVar2 = rand();
                iVar3 = libgcc_divide_helper_01031c(uVar2, 1000, a2);
                if (iVar3 == 4) {
                    a0[4] = '\x10';
                    a0[5] = '\'';
                    a0[6] = '\0';
                    a0[7] = '\0';
                }
            }
            break;
        case 3:
            *a0 = '\0';
            piVar4 = a1;
            for (cVar5 = '\0'; cVar5 < '\x05'; cVar5 = cVar5 + '\x01') {
                if (*(int *)(cVar5 * 4 + *(int *)(a0 + 0xc)) != -1) {
                    (**(code **)(*a1 + 0x188))(a1, piVar4, a2, a3);
                    uVar1 = in_dr0;
                    if (cVar9 == '\0') {
                        uStack_54 = CONCAT44(uStack_54._4_4_, (int)(in_dr0 >> 0x20));
                        uVar1 = uStack_54;
                    }
                    uStack_54 = uVar1;
                    in_dr0 = uStack_54;
                    if (cVar9 == '\0') {
                        in_dr0 = CONCAT44((u32)uStack_54, (float)*(int *)(cVar5 * 4 + *(int *)(a0 + 0xc)));
                    }
                    if (cVar8 == '\0' && (float)(in_dr0 >> 0x20) < (float)in_dr0) {
                        a0[8] = cVar5;
                        *a0 = '\x01';
                    }
                }
            }
            break;
        case 4:
            if ((*a0 == '\x01') && (a0[8] == '\x05')) {
                a0[4] = '\x10';
                a0[5] = '\'';
                a0[6] = '\0';
                a0[7] = '\0';
            }
            break;
        case 5:
            if (*a0 == '\x01') {
                a0[8] = '\x02' - (char)*(u32 *)(a0 + 4);
            }
        }
    }
    iVar3 = (int)*a0;
    if (iVar3 == 0) {
        iVar3 = 0;
        a0[4] = '\0';
        a0[5] = '\0';
        a0[6] = '\0';
        a0[7] = '\0';
    }
    return iVar3;
}

/*
 * FUN_8c02e38c  0x8c02e38c
 * called by: FUN_8c02df24, FUN_8c02e3cc
 */
int FUN_8c02e38c(char *a0, int a1) {
    int iVar1;

    iVar1 = 1;
    if ((0 < a1) && (iVar1 = (int)*a0, iVar1 == 1)) {
        if (a1 == 1) {
            *(int *)(a0 + 4) = *(int *)(a0 + 4) + 1;
        }
        a0[9] = '\0';
        iVar1 = 3;
        if (2 < *(int *)(a0 + 4)) {
            *a0 = '\0';
            iVar1 = 0;
            a0[4] = '\0';
            a0[5] = '\0';
            a0[6] = '\0';
            a0[7] = '\0';
        }
    }
    return iVar1;
}

/*
 * FUN_8c02e3cc  0x8c02e3cc
 * called by: FUN_8c02d2e0
 */
int FUN_8c02e3cc(char *a0, u32 a1) {
    int iVar1;

    iVar1 = (int)*a0;
    if ((iVar1 == 1) && (iVar1 = (int)a0[0xb], iVar1 == 5)) {
        iVar1 = FUN_8c02e38c(a0, a1);
    }
    return iVar1;
}

/*
 * FUN_8c02e400  0x8c02e400
 * called by: FUN_8c02c668
 */
int FUN_8c02e400(int a0) {
    int iVar1;
    int iVar2;

    iVar1 = 0;
    for (iVar2 = 0; (iVar2 < 5 && (*(int *)(iVar2 * 4 + *(int *)(a0 + 0xc)) != -1)); iVar2 = iVar2 + 1) {
        iVar1 = iVar1 + 1;
    }
    return iVar1;
}

/*
 * FUN_8c02e438  0x8c02e438
 * called by: FUN_8c0656d4
 */
int FUN_8c02e438(int a0) {
    int iVar1;

    iVar1 = 1;
    if (*(char *)(a0 + 9) < '\x01') {
        *(char *)(a0 + 9) = *(char *)(a0 + 9) + '\x01';
        iVar1 = *(int *)(a0 + 4) + 1;
        *(int *)(a0 + 4) = iVar1;
    }
    return iVar1;
}

/*
 * FUN_8c02e460  0x8c02e460
 * called by: FUN_8c02b9a8
 */
u32 *FUN_8c02e460(u32 *a0, u32 a1, u32 a2, u32 a3) {
    u32 ar6_00;

    *a0 = 0;
    a0[1] = 1;
    ar6_00 = a2;
    FUN_8c02cb24(a0, a1, a2, a3);
    FUN_8c02cadc(a0, a2, ar6_00, a3);
    a0[4] = 0;
    a0[10] = 0;
    a0[5] = 0;
    a0[7] = 0;
    a0[8] = 0;
    a0[9] = 0;
    a0[6] = 0;
    *(u8 *)(a0 + 0xc) = 0;
    a0[0xd] = 0;
    a0[0xe] = 0;
    a0[0xb] = 5;
    return a0;
}

/*
 * FUN_8c02e4cc  0x8c02e4cc
 * called by: FUN_8c02c030
 */
u32 FUN_8c02e4cc(u32 *a0, int *a1, u32 a2, u32 a3) {
    u8 *puVar1;
    u32 uVar2;
    u8 *puVar3;
    u8 *puVar4;
    int iVar5;
    int *a5;
    char cVar6;
    char cVar7;
    u8 bStack_48;
    u8 auStack_40[36];

    puVar1 = auStack_40;
    puVar3 = &g_8c13252c;
    iVar5 = 0x10;
    do {
        puVar4 = puVar3 + 1;
        *puVar1 = *puVar3;
        puVar3 = puVar3 + 2;
        puVar1[1] = *puVar4;
        puVar1 = puVar1 + 2;
        iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
    a0[0xd] = 0;
    if (a2 < 0x4b0) {
        a0[5] = 0;
    }
    uVar2 = a0[7];
    if (((int)uVar2 < 8) && (-1 < (int)uVar2)) {
        switch (uVar2) {
        default:
            break;
        case 2:
        case 3:
            break;
        case 4:
            break;
        case 5:
        }
    }
    if (a0[2] * a0[3] == 0) {
        uVar2 = 0;
    } else {
        cVar6 = (char)a3;
        if (*a0 == 0) {
            if (a0[5] != a0[0xe]) {
                a0[0xe] = a0[5];
                a0[6] = a0[6] + 1;
                if ((a0[5] == 0) || (cVar6 != -1)) {
                    a0[6] = 0;
                }
            }
            if (cVar6 != -1) {
                a0[6] = 0;
                a0[9] = 0;
            }
            a0[0xb] = 5;
            a5 = a1;
            if ((a0[9] == 1) && (cVar6 == -1)) {
                a0[8] = a0[8] + 1;
                (**(code **)(*a1 + 0x198))(a1, a1, a2, a3);
                *(u8 *)(a0 + 0xc) = (u8)(((u32)bStack_48 << 0x1e) >> 0x1f);
                a5 = (int *)0xffffffe1;
                *(char *)(a0 + 0xc) = (char)a0[0xc] - (char)((int)((u32)bStack_48 << 0x1f) >> 0x1f);
                if ((0xb4 < (int)a0[8]) || ((char)a0[0xc] < '\x02')) {
                    a0[8] = 0;
                    *a0 = 1;
                    a0[1] = 0x5a;
                    if ((char)a0[0xc] < '\x02') {
                        a0[0xd] = 1;
                    }
                    a0[9] = 0;
                    a0[4] = a0[4] + 1;
                }
            }
            uVar2 = a0[6];
            if (299 < uVar2) {
                if (a0[9] == 1) {
                    uVar2 = 1;
                } else {
                    uVar2 = (u32)cVar6;
                    if (uVar2 == 0xffffffff) {
                        (**(code **)(*a1 + 0x198))(a1, a5, a2, a3);
                        *(u8 *)(a0 + 0xc) = (u8)(((u32)bStack_48 << 0x1e) >> 0x1f);
                        *(char *)(a0 + 0xc) = (char)a0[0xc] - (char)((int)((u32)bStack_48 << 0x1f) >> 0x1f);
                        if ((char)a0[0xc] < '\x02') {
                            a0[9] = 0;
                            *a0 = 1;
                            a0[1] = 0x5a;
                        } else {
                            a0[9] = 1;
                        }
                        uVar2 = 0;
                        a0[8] = 0;
                    }
                }
            }
        } else {
            a0[6] = 0;
            a0[8] = a0[8] + 1;
            (**(code **)(*a1 + 0x198))(a1, a1, a2, a3);
            cVar7 = -(char)((int)((u32)bStack_48 << 0x1f) >> 0x1f) - (char)((int)((u32)bStack_48 << 0x1e) >> 0x1f);
            if (a0[0xb] == 5) {
                if ((char)a0[0xc] < cVar7) {
                    a0[0xb] = 3;
                    a0[8] = 0;
                } else {
                    *(char *)(a0 + 0xc) = cVar7;
                }
                if ((((cVar6 == '\0') || (cVar6 == '\x01')) || (cVar6 == '\x02')) || (cVar6 == '\x03')) {
                    a0[0xb] = 0;
                }
            }
            uVar2 = a0[0xb];
            if (uVar2 == 0) {
                *a0 = 0;
            } else if (uVar2 == 1) {
                *a0 = 0;
            } else if (uVar2 == 2) {
                *a0 = 0;
            } else if (uVar2 == 3) {
                if (5 < (int)a0[8]) {
                    *a0 = 0;
                }
            } else if (600 < (int)a0[8]) {
                *a0 = 0;
                a0[0xb] = 5;
            }
            uVar2 = *a0;
            if (uVar2 == 0) {
                *(u8 *)(a0 + 0xc) = 0xff;
                a0[1] = 100;
                a0[9] = 0;
                a0[0xd] = 0;
                uVar2 = 0;
                a0[8] = 0;
            }
        }
    }
    return uVar2;
}

/*
 * FUN_8c02e838  0x8c02e838
 */
u32 FUN_8c02e838(u32 unused_a0, u32 a1, u32 a2, u32 a3) {
    u32 uVar1;
    u32 uVar2;
    u8 *puVar3;

    uVar1 = Vec3_ctor_xyz((&DATA_8c125a90), a1, a2, a3);
    puVar3 = (&Vec3_dtor);
    uVar2 = 0x8c27d468;
    global_list_push(uVar1, (&Vec3_dtor), 0x8c27d468, a3);
    uVar1 = Vec3_ctor_xyz((&DATA_8c125aa0), puVar3, uVar2, a3);
    puVar3 = (&Vec3_dtor);
    uVar2 = 0x8c27d474;
    global_list_push(uVar1, (&Vec3_dtor), 0x8c27d474, a3);
    uVar1 = Vec3_ctor_xyz((&DATA_8c125ab0), puVar3, uVar2, a3);
    puVar3 = (&Vec3_dtor);
    uVar2 = 0x8c27d480;
    global_list_push(uVar1, (&Vec3_dtor), 0x8c27d480, a3);
    uVar2 = Vec3_ctor_xyz((&DATA_8c125ac0), puVar3, uVar2, a3);
    uVar2 = global_list_push(uVar2, (&Vec3_dtor), 0x8c27d48c, a3);
    return uVar2;
}

/*
 * FUN_8c02e8e0  0x8c02e8e0
 * called by: FUN_8c05d860, FUN_8c103100
 */
int FUN_8c02e8e0(int a0, int a1) {
    int iVar1;

    if (a1 == 0) {
        FUN_8c02ea98(a0, 0);
        FUN_8c02eaac(a0);
    }
    if (*(int *)(a0 + 0xc) != 0) {
        *(int *)(a0 + 0xc) = *(int *)(a0 + 0xc) + -1;
    }
    if (*(int *)(a0 + 0x14) != 0) {
        *(int *)(a0 + 0x14) = *(int *)(a0 + 0x14) + -1;
    }
    if (*(int *)(a0 + 0x10) != 0) {
        *(int *)(a0 + 0x10) = *(int *)(a0 + 0x10) + -1;
    }
    if (*(int *)(a0 + 0x10) == 0) {
        FUN_8c02ea98(a0, a1);
    }
    if (*(int *)(a0 + 0x18) != 0) {
        *(int *)(a0 + 0x18) = *(int *)(a0 + 0x18) + -1;
    }
    if (*(int *)(a0 + 0x20) != 0) {
        *(int *)(a0 + 0x20) = *(int *)(a0 + 0x20) + -1;
    }
    if (*(int *)(a0 + 0x1c) != 0) {
        *(int *)(a0 + 0x1c) = *(int *)(a0 + 0x1c) + -1;
    }
    iVar1 = *(int *)(a0 + 0x1c);
    if (iVar1 == 0) {
        iVar1 = FUN_8c02eaac(a0);
    }
    return iVar1;
}

/*
 * FUN_8c02e99c  0x8c02e99c
 */
u32 FUN_8c02e99c(u32 *a0) {
    u32 uVar1;

    if (*a0 < 3) {
        if (a0[4] == 0) {
            a0[3] = 0x1e;
        }
        if (a0[5] == 0) {
            a0[4] = 0x708;
            uVar1 = 0x258;
            a0[5] = 0x258;
        } else {
            a0[4] = a0[4] + 0x708;
            uVar1 = 0x258;
            a0[5] = a0[5] + 0x258;
        }
    } else {
        uVar1 = a0[6];
        if ((uVar1 == 0) && (uVar1 = 0, a0[8] != 0)) {
            uVar1 = 1;
            a0[2] = 1;
        }
    }
    return uVar1;
}

/*
 * FUN_8c02ea00  0x8c02ea00
 * called by: FUN_8c0611cc
 */
u32 FUN_8c02ea00(u32 *a0, u32 a1) {
    if (*a0 < 3) {
        if (a0[1] == 1) {
            FUN_8c02ea98(a0, a1);
            FUN_8c02eaac(a0);
            *a0 = *a0 + 1;
            g_8c27d49c = 0;
            if (2 < *a0) {
                g_8c27d49c = 1;
            }
        }
    } else if (a0[2] == 1) {
        g_8c27d49c = 2;
        FUN_8c02ea98(a0, a1);
        FUN_8c02eaac(a0);
        if (4 < *a0) {
            return 1;
        }
        *a0 = *a0 + 1;
    }
    return 0;
}

/*
 * FUN_8c02ea98  0x8c02ea98
 * called by: FUN_8c02e8e0, FUN_8c02ea00, FUN_8c02eac0
 */
u32 FUN_8c02ea98(int a0, u32 a1) {
    *(u32 *)(a0 + 4) = 0;
    *(u32 *)(a0 + 0xc) = 0;
    *(u32 *)(a0 + 0x10) = 0;
    *(u32 *)(a0 + 0x14) = 0;
    return 0;
}

/*
 * FUN_8c02eaac  0x8c02eaac
 * called by: FUN_8c02e8e0, FUN_8c02ea00, FUN_8c02eac0
 */
u32 FUN_8c02eaac(int a0) {
    *(u32 *)(a0 + 8) = 0;
    *(u32 *)(a0 + 0x18) = 0;
    *(u32 *)(a0 + 0x1c) = 0;
    *(u32 *)(a0 + 0x20) = 0;
    return 0;
}

/*
 * FUN_8c02eac0  0x8c02eac0
 * called by: Class_12a078_ctor, Class_12c3c4_ctor
 */
u32 *FUN_8c02eac0(u32 *a0, u32 a1) {
    *a0 = 0;
    FUN_8c02ea98(a0, a1);
    FUN_8c02eaac(a0);
    return a0;
}

/*
 * free_if_nonnull_wrap_02eaec  0x8c02eaec
 * called by: Class_12a078_dtor, Class_12c3c4_dtor
 */
int free_if_nonnull_wrap_02eaec(int a0, u32 a1, u32 a2, u32 a3) {
    u32 in_stack_fffffff4;

    if ((a0 != 0) && (0 < (short)a1)) {
        free_if_nonnull(a0, a1, a2, a3, CONCAT22((short)((u32)in_stack_fffffff4 >> 0x10), (short)a1));
    }
    return a0;
}

/*
 * noop_02eb1c  0x8c02eb1c
 * does nothing
 * called by: Class_129c70_ctor
 */
u32 noop_02eb1c(u32 a0) {
}

/*
 * get_field_4_02eb24  0x8c02eb24
 * called by: FUN_8c02f20c
 */
u32 get_field_4_02eb24(int a0) {
    return *(u32 *)(a0 + 4);
}

/*
 * FUN_8c02eb2c  0x8c02eb2c
 */
int FUN_8c02eb2c(int a0, int a1) {
    int iVar1;

    if ((a1 < 8) && (0 < a1)) {
        switch (a1) {
        case 1:
            iVar1 = 1;
            break;
        case 2:
            iVar1 = libgcc_divide_helper_0101e4(*(int *)(a0 + 0x10) + -0x46, 6);
            break;
        case 3:
            iVar1 = libgcc_divide_helper_0101e4(*(int *)(a0 + 0x14) + -0x50, 4);
            break;
        case 4:
            iVar1 = libgcc_divide_helper_0101e4(*(int *)(a0 + 0x18) + -0x50, 4);
            break;
        case 5:
            iVar1 = libgcc_divide_helper_0101e4(*(int *)(a0 + 0x24) + -0x3c, 8);
            break;
        case 6:
            iVar1 = libgcc_divide_helper_0101e4(*(int *)(a0 + 0x20) + -0x32, 0xd);
            iVar1 = iVar1 + 1;
            break;
        case 7:
            iVar1 = libgcc_divide_helper_0101e4(*(int *)(a0 + 0x1c) + -0x32, 0xd);
        }
    } else {
        iVar1 = 0;
    }
    return iVar1;
}

/*
 * FUN_8c02ebfc  0x8c02ebfc
 * called by: FUN_8c02ee20
 */
int FUN_8c02ebfc(int a0, u32 a1, u32 a2, u32 a3) {
    u32 uVar1;
    u32 uVar2;
    int iVar3;
    int iVar4;
    int iVar5;
    int iVar6;
    int aiStack_38[9];

    iVar3 = 0;
    iVar4 = 0;
    uVar2 = a1;
    uVar1 = FUN_8c02c4e8(a1);
    *(u32 *)(a0 + 8) = uVar1;
    uVar1 = FUN_8c02bd9c(a1);
    *(u32 *)(a0 + 0xc) = uVar1;
    uVar1 = FUN_8c02c668(a1, uVar2, a2);
    *(u32 *)(a0 + 0x10) = uVar1;
    uVar1 = FUN_8c02d4c4(a1);
    *(u32 *)(a0 + 0x18) = uVar1;
    uVar1 = FUN_8c02d478(a1);
    *(u32 *)(a0 + 0x14) = uVar1;
    uVar1 = FUN_8c02d410(a1, uVar2, a2, a3);
    *(u32 *)(a0 + 0x24) = uVar1;
    uVar1 = FUN_8c02d3e8(a1, uVar2, a2, a3);
    *(u32 *)(a0 + 0x20) = uVar1;
    uVar2 = FUN_8c02ede0(a1, uVar2, a2, a3);
    *(u32 *)(a0 + 0x1c) = uVar2;
    if (100 < *(int *)(a0 + 0x14)) {
        *(u32 *)(a0 + 0x14) = 100;
    }
    if (100 < *(int *)(a0 + 0x18)) {
        *(u32 *)(a0 + 0x18) = 100;
    }
    iVar5 = 0xc7;
    if ((0 < *(int *)(a0 + 0xc)) && (*(int *)(a0 + 8) != 0)) {
        for (iVar5 = 0; iVar5 < 8; iVar5 = iVar5 + 1) {
            aiStack_38[iVar5] = 0;
        }
        aiStack_38[2] = FUN_8c02ee48(a0, 2, *(u32 *)(a0 + 0x10), a3);
        aiStack_38[3] = FUN_8c02ee48(a0, 3, *(u32 *)(a0 + 0x14), a3);
        aiStack_38[4] = FUN_8c02ee48(a0, 4, *(u32 *)(a0 + 0x18), a3);
        aiStack_38[5] = FUN_8c02ee48(a0, 5, *(u32 *)(a0 + 0x24), a3);
        aiStack_38[6] = FUN_8c02ee48(a0, 6, *(u32 *)(a0 + 0x20), a3);
        aiStack_38[7] = FUN_8c02ee48(a0, 7, *(u32 *)(a0 + 0x1c), a3);
        for (iVar6 = 0; iVar5 = iVar3, iVar6 < 8; iVar6 = iVar6 + 1) {
            if (iVar4 < aiStack_38[iVar6]) {
                iVar4 = aiStack_38[iVar6];
                iVar3 = iVar6 * 100 + aiStack_38[iVar6];
            }
        }
    }
    return iVar5;
}

/*
 * FUN_8c02ede0  0x8c02ede0
 * called by: FUN_8c02ebfc
 */
int FUN_8c02ede0(int a0, u32 unused_a1, u32 a2, u32 a3) {
    u32 uVar1;

    uVar1 = (*(code *)(&FUN_8c02da10))(a0 + 0xa8, *(u32 *)(0x13c + a0), a2, a3);
    return (char)uVar1 * 0x62;
}

/*
 * FUN_8c02ee20  0x8c02ee20
 * called by: FUN_8c02f20c
 */
u32 FUN_8c02ee20(int a0, u32 a1, u32 a2, u32 a3) {
    u32 uVar1;

    uVar1 = FUN_8c02ebfc(a0, a1, a2, a3);
    *(u32 *)(a0 + 4) = uVar1;
    return uVar1;
}

/*
 * FUN_8c02ee48  0x8c02ee48
 * called by: FUN_8c02ebfc
 */
int FUN_8c02ee48(u32 a0, u32 a1, int a2, u32 a3) {
    int iVar1;
    u32 uVar2;
    int iVar3;
    int iVar4;
    int ar5_00;

    iVar4 = a2;
    iVar1 = FUN_8c02ef60(a0, a1);
    uVar2 = rand();
    ar5_00 = 0x65 - *(int *)((&DATA_8c1327b4) + iVar1 * 0x18 + 0xc);
    iVar3 = libgcc_divide_helper_01031c(uVar2, ar5_00, iVar4);
    if (a2 - *(int *)((&DATA_8c1327b4) + iVar1 * 0x18 + 0xc) < iVar3) {
        iVar4 = 0;
    } else {
        uVar2 = rand();
        iVar3 = (*(code *)(&libgcc_divide_helper_0101e4))((a2 - *(int *)((&DATA_8c1327b4) + iVar1 * 0x18 + 0xc)) *
                                                              *(int *)((&DATA_8c1327b4) + iVar1 * 0x18 + 8),
                                                          *(u32 *)((&DATA_8c1327b4) + iVar1 * 0x18 + 4), iVar4, a3);
        iVar4 = (*(code *)(&libgcc_divide_helper_01031c))(uVar2, *(u32 *)((&DATA_8c1327b4) + iVar1 * 0x18 + 0x14),
                                                          iVar4, a3);
        iVar4 = *(int *)((&DATA_8c1327b4) + iVar1 * 0x18 + 0x10) + iVar3 + iVar4;
    }
    return iVar4;
}

/*
 * FUN_8c02ef60  0x8c02ef60
 * called by: FUN_8c02ee48
 */
u32 FUN_8c02ef60(u32 unused_a0, int a1) {
    if ((a1 < 8) && (1 < a1)) {
        switch (a1) {
        case 2:
            return 0;
        case 3:
            return 1;
        case 4:
            return 2;
        case 5:
            return 3;
        case 6:
            return 4;
        case 7:
            return 5;
        }
    }
    return 0xffffffff;
}

/*
 * FUN_8c02efbc  0x8c02efbc
 */
u32 FUN_8c02efbc(u32 unused_a0, u32 a1, u32 a2, u32 a3) {
    u32 uVar1;
    u32 uVar2;
    u8 *puVar3;

    uVar1 = Vec3_ctor_xyz((&DATA_8c125ad0), a1, a2, a3);
    puVar3 = (&Vec3_dtor);
    uVar2 = 0x8c27d4a0;
    global_list_push(uVar1, (&Vec3_dtor), 0x8c27d4a0, a3);
    uVar1 = Vec3_ctor_xyz((&DATA_8c125ae0), puVar3, uVar2, a3);
    puVar3 = (&Vec3_dtor);
    uVar2 = 0x8c27d4ac;
    global_list_push(uVar1, (&Vec3_dtor), 0x8c27d4ac, a3);
    uVar1 = Vec3_ctor_xyz((&DATA_8c125af0), puVar3, uVar2, a3);
    puVar3 = (&Vec3_dtor);
    uVar2 = 0x8c27d4b8;
    global_list_push(uVar1, (&Vec3_dtor), 0x8c27d4b8, a3);
    uVar2 = Vec3_ctor_xyz((&DATA_8c125b00), puVar3, uVar2, a3);
    uVar2 = global_list_push(uVar2, (&Vec3_dtor), 0x8c27d4c4, a3);
    return uVar2;
}

/*
 * Class_129c70_ctor  0x8c02f064
 * stores the vtable 0x8c129c70
 * called by: Class_12a078_ctor, Class_12c3c4_ctor, FUN_8c02ff6c, FUN_8c098ca8, FUN_8c09f3b4, FUN_8c0ab760, FUN_8c0b5a30
 */
u32 *Class_129c70_ctor(u32 *a0, u32 a1, u32 a2) {
    u32 in_fr1;
    char cVar1;

    cVar1 = '\0';
    *a0 = &g_8c129c70;
    Vec3_ctor_zero(a0 + 10, a1, a2);
    noop_02eb1c(a0 + 0x11);
    Vec3_ctor_zero(a0 + 0x1c, a1, a2);
    a0[1] = 0;
    a0[0x1b] = 0;
    a0[3] = 0;
    a0[0xf] = 2;
    a0[4] = 0;
    a0[9] = 0;
    a0[8] = 0;
    a0[7] = 0;
    a0[6] = 0;
    a0[5] = 0;
    *(u8 *)((int)a0 + 0x91) = 0;
    a0[0x10] = 0;
    a0[0x25] = 0;
    *(u8 *)(a0 + 0x26) = 0;
    *(u8 *)((int)a0 + 0x99) = 0;
    if (cVar1 == '\0') {
        a0[10] = 0;
    } else {
        *(u64 *)(a0 + 10) = (u64)in_fr1;
    }
    if (cVar1 == '\0') {
        a0[0xb] = 0;
    } else {
        *(u64 *)(a0 + 0xb) = (u64)in_fr1;
    }
    if (cVar1 == '\0') {
        a0[0xc] = 0;
        a0[0x1c] = 0xc7c35000;
        a0[0x1d] = 0xc7c35000;
        a0[0x1e] = 0xc7c35000;
    } else {
        *(u64 *)(a0 + 0xc) = (u64)in_fr1;
        *(u64 *)(a0 + 0x1c) = 0x88c7c35000;
        *(u64 *)(a0 + 0x1d) = 0x88c7c35000;
        *(u64 *)(a0 + 0x1e) = 0x88c7c35000;
    }
    a0[0x22] = 0;
    a0[0x23] = 0;
    *(u8 *)((int)a0 + 0x82) = 0;
    *(u8 *)(a0 + 0x21) = 0;
    *(u8 *)((int)a0 + 0x85) = 0;
    *(u8 *)((int)a0 + 0x87) = 0;
    *(u8 *)((int)a0 + 0x86) = 0;
    *(u8 *)(a0 + 0x24) = 0;
    *(u8 *)((int)a0 + 0x83) = 4;
    *(u8 *)((int)a0 + 0x9a) = 2;
    *(u8 *)((int)a0 + 0x9b) = 0;
    return a0;
}

/*
 * Class_129c70_dtor  0x8c02f1b8
 * stores the vtable 0x8c129c70
 * called by: Class_129c24_dtor, Class_12a078_dtor, Class_12a7a8_dtor, Class_12acc8_dtor, Class_12b0c4_dtor,
 * Class_12b2e8_dtor, Class_12c3c4_dtor
 */
u32 *Class_129c70_dtor(u32 *a0, u32 a1, u32 a2, u32 a3) {
    u32 ar5_00;
    u32 in_stack_fffffff4;
    u32 ain0;

    ain0 = CONCAT22((short)((u32)in_stack_fffffff4 >> 0x10), (u16)a1);
    if (a0 != NULL) {
        *a0 = &g_8c129c70;
        Vec3_dtor(a0 + 0x1c, 0xffffffff, a2, a3);
        ar5_00 = 0xffffffff;
        Vec3_dtor(a0 + 10, 0xffffffff, a2, a3);
        if (0 < (short)ain0) {
            free_if_nonnull(a0);
        }
    }
    return a0;
}

/*
 * FUN_8c02f20c  0x8c02f20c
 * called by: Class_12a078_m2_05eee0, Class_12a7a8_m1_098d14, Class_12acc8_m1_09f470, Class_12b0c4_m1_0ab7f4,
 * Class_12b0c4_m2_0abc38, Class_12b2e8_m1_0b5ad0, Class_12b2e8_m2_0b6028, Class_12c3c4_m2_104264 (+2 more)
 */
u32 FUN_8c02f20c(int a0, int a1, u32 a2, u32 a3) {
    u32 uVar1;

    uVar1 = *(u32 *)(a1 + 4);
    FUN_8c02ee20(a0 + 0x44, uVar1, a2, a3);
    uVar1 = get_field_4_02eb24(a0 + 0x44);
    list5_push(a0, uVar1);
    FUN_8c02f2c8(a0, uVar1, a2);
    *(u8 *)(0x9b + a0) = 0;
    *(u32 *)(a0 + 0x10) = 0;
    *(u32 *)(a0 + 0x24) = 0;
    *(u32 *)(a0 + 0x20) = 0;
    *(u32 *)(a0 + 0x1c) = 0;
    *(u32 *)(a0 + 0x18) = 0;
    *(u32 *)(a0 + 0x14) = 0;
    return 0;
}

/*
 * noop_02f290  0x8c02f290
 */
u32 noop_02f290(void) {
    u32 in_r0;

    return in_r0;
}

/*
 * noop_02f294  0x8c02f294
 */
u32 noop_02f294(void) {
    u32 in_r0;

    return in_r0;
}

/*
 * list5_push  0x8c02f298
 * appends a1 to the five-entry list at +0x14 (count at +0x10)
 * called by: Class_12a078_m2_05eee0, Class_12a7a8_m1_098d14, Class_12acc8_m1_09f470, Class_12b0c4_m1_0ab7f4,
 * Class_12b2e8_m1_0b5ad0, Class_12c3c4_m2_104264, FUN_8c02f20c, FUN_8c0660d4 (+1 more)
 */
int list5_push(int a0, u32 a1) {
    int iVar1;

    iVar1 = 5;
    if (*(int *)(a0 + 0x10) < 5) {
        *(u32 *)(a0 + *(int *)(a0 + 0x10) * 4 + 0x14) = a1;
        iVar1 = *(int *)(a0 + 0x10) + 1;
        *(int *)(a0 + 0x10) = iVar1;
    }
    return iVar1;
}

/*
 * set_field_3c_02f2c0  0x8c02f2c0
 * called by: Class_12a03c_m1_03c43c, Class_12a25c_m1_06f530, Class_12ad14_m1_0a09e8, Class_12b088_m1_0a6468,
 * Class_12b2ac_m1_0aff3c
 */
u32 set_field_3c_02f2c0(int a0, u32 a1) {
    u32 in_r0;

    *(u32 *)(a0 + 0x3c) = a1;
    return in_r0;
}

/*
 * FUN_8c02f2c8  0x8c02f2c8
 * called by: FUN_8c02f20c
 */
u32 FUN_8c02f2c8(int a0, u32 unused_a1, u32 a2) {
    u32 uVar1;
    u32 uVar2;
    int iVar3;

    *(u8 *)(0x91 + a0) = 0;
    uVar1 = FUN_8c02f3ac(a0);
    if (*(int *)(a0 + 4) == 8) {
        *(u32 *)(a0 + 4) = 8;
    }
    if ((*(int *)(a0 + 0x38) == 2) || (*(int *)(a0 + 0x38) == 0)) {
        *(u8 *)(0x91 + a0) = 1;
        uVar2 = libgcc_divide_helper_0101e4(uVar1, 100);
        *(u32 *)(a0 + 4) = uVar2;
        uVar1 = libgcc_divide_helper_01031c(uVar1, 100, a2);
        *(u32 *)(a0 + 8) = uVar1;
        *(u32 *)(a0 + 0x38) = 2;
    } else if (*(int *)(a0 + 0x38) == 3) {
        iVar3 = libgcc_divide_helper_01031c(uVar1, 100, a2);
        if (*(int *)(a0 + 8) < iVar3) {
            uVar2 = libgcc_divide_helper_01031c(uVar1, 100, a2);
            *(u32 *)(a0 + 8) = uVar2;
            iVar3 = libgcc_divide_helper_0101e4(uVar1, 100);
            if (*(int *)(a0 + 4) != iVar3) {
                *(u8 *)(0x91 + a0) = 1;
                uVar1 = libgcc_divide_helper_0101e4(uVar1, 100);
                *(u32 *)(a0 + 4) = uVar1;
                *(u32 *)(a0 + 0x38) = 2;
            }
        }
    }
    if (*(int *)(a0 + 4) == 8) {
        *(u32 *)(a0 + 4) = 8;
    }
    return *(u32 *)(a0 + 4);
}

/*
 * FUN_8c02f3ac  0x8c02f3ac
 * called by: FUN_8c02f2c8
 */
int FUN_8c02f3ac(int a0) {
    int iVar1;
    int iVar2;

    iVar1 = 0x2710;
    for (iVar2 = 0; iVar2 < *(int *)(a0 + 0x10); iVar2 = iVar2 + 1) {
        if ((*(int *)(a0 + iVar2 * 4 + 0x14) < iVar1) && (*(int *)(a0 + iVar2 * 4 + 0x14) != 0)) {
            iVar1 = *(int *)(a0 + iVar2 * 4 + 0x14);
        }
    }
    if (iVar1 == 0x2710) {
        iVar1 = 0;
    }
    return iVar1;
}

/*
 * set_field_38_02f404  0x8c02f404
 * called by: FUN_8c05f660, FUN_8c05ff40, FUN_8c099714, FUN_8c099858, FUN_8c099b0c, FUN_8c09ff1c, FUN_8c0a0040,
 * FUN_8c0a0278 (+8 more)
 */
u32 set_field_38_02f404(int a0, u32 a1) {
    u32 in_r0;

    *(u32 *)(a0 + 0x38) = a1;
    return in_r0;
}

/*
 * ret_const_1_02f40c  0x8c02f40c
 */
u32 ret_const_1_02f40c(void) {
    return 1;
}

/*
 * FUN_8c02f414  0x8c02f414
 * called by: FUN_8c05f660, FUN_8c0611cc, FUN_8c0abe84, FUN_8c0ac068, FUN_8c0ac124, FUN_8c0b61bc, FUN_8c0b6440,
 * FUN_8c104854 (+1 more)
 */
u32 FUN_8c02f414(int a0, u32 a1, u32 a2, u32 a3) {
    int iVar1;

    if (((*(int *)(a0 + 0x6c) != 0) && (iVar1 = get_field_6c_02f46c(*(u32 *)(a0 + 0x6c)), iVar1 != 0)) &&
        (iVar1 = (**(code **)(0xb4 + *(int *)(*(int *)(a0 + 0x6c) + 8)))(*(int *)(a0 + 0x6c), a1, a2, a3),
         iVar1 == 1)) {
        return 1;
    }
    return 0;
}

/*
 * get_field_6c_02f46c  0x8c02f46c
 * called by: Class_12a078_m2_05eee0, Class_12acc8_m1_09f470, Class_12b0c4_m1_0ab7f4, Class_12b0c4_m2_0abc38,
 * Class_12bec0_m2_0f5ca8, Class_12bec0_m3_0f5d1c, Class_12c3c4_m2_104264, FUN_8c02f414 (+12 more)
 */
u32 get_field_6c_02f46c(int a0) {
    return *(u32 *)(a0 + 0x6c);
}

/*
 * FUN_8c02f474  0x8c02f474
 */
u32 FUN_8c02f474(int a0, int *a1, u32 *a2, u32 a3) {
    u32 uVar1;
    int iVar2;
    int *ar5_00;
    u32 uVar3;
    u32 *ar6_00;
    u32 ar7_00;
    u32 uVar4;
    u32 *a6;
    u32 in_fr1;
    double dVar5;
    float in_fr15;
    u32 in_fr14;
    bool bVar7;
    char cVar8;
    char cVar9;
    u8 auStack_70[16];
    u8 auStack_60[16];
    u8 auStack_50[16];
    u8 auStack_40[16];
    u32 auStack_30[5];
    double dVar6;

    cVar9 = '\0';
    cVar8 = '\0';
    uVar4 = 0;
    ar5_00 = a1;
    ar6_00 = a2;
    ar7_00 = a3;
    Vec3_ctor_zero(auStack_30, a1, a2);
    if (cVar9 == '\0') {
        in_fr15 = 1e+07;
        auStack_30[0] = 0;
    } else {
        auStack_30[3] = 0;
        auStack_30[0] = in_fr1;
    }
    dVar5 = (double)(u64)in_fr1;
    auStack_30[2] = 0;
    auStack_30[1] = 0;
    if (*(int *)(a0 + 0x6c) != 0) {
        Vec3_ctor_copy_wrap_02f670(*(u32 *)(a0 + 0x6c), ar5_00, ar6_00, ar7_00, auStack_40);
        Vec3_length_sq(auStack_40, ar5_00, ar6_00, ar7_00);
        if (cVar9 == '\0') {
            in_fr15 = (float)((u64)dVar5 >> 0x20);
        }
        Vec3_dtor(auStack_40, 0xffffffff, ar6_00, ar7_00);
        uVar4 = *(u32 *)(a0 + 0x6c);
    }
    for (a6 = NULL; iVar2 = (**(code **)(*a1 + 0x11c))(a1, a3, ar6_00, ar7_00), (int)a6 < iVar2;
         a6 = (u32 *)((int)a6 + 1)) {
        uVar3 = a3;
        ar6_00 = a6;
        uVar1 = (**(code **)(*a1 + 0x100))(a1, a3, a6, ar7_00);
        iVar2 = get_field_6c_02f46c(uVar1);
        if (iVar2 != 0) {
            Vec3_ctor_copy_wrap_02f670(*a2, uVar3, ar6_00, ar7_00, auStack_50);
            uVar3 = a3;
            ar6_00 = a6;
            uVar1 = (**(code **)(*a1 + 0x100))(a1, a3, a6, ar7_00);
            Vec3_ctor_copy_wrap_02f670(uVar1, uVar3, ar6_00, ar7_00, auStack_60);
            Vec3_sub(auStack_50, auStack_60, ar6_00, ar7_00, auStack_70);
            Vec3_assign(auStack_30, auStack_70, ar6_00, ar7_00);
            Vec3_dtor(auStack_70, 0xffffffff, ar6_00, ar7_00);
            Vec3_dtor(auStack_60, 0xffffffff, ar6_00, ar7_00);
            uVar3 = 0xffffffff;
            Vec3_dtor(auStack_50, 0xffffffff, ar6_00, ar7_00);
            Vec3_length_sq(auStack_30, uVar3, ar6_00, ar7_00);
            if (cVar8 == '\0') {
                bVar7 = (float)((u64)dVar5 >> 0x20) < in_fr15;
            } else {
                bVar7 = dVar5 < (double)CONCAT44(in_fr14, in_fr15);
            }
            if (bVar7) {
                Vec3_length_sq(auStack_30, uVar3, ar6_00, ar7_00);
                dVar6 = dVar5;
                if (cVar9 == '\0') {
                    dVar6 = (double)((u64)dVar5 >> 0x20);
                }
                dVar5 = (double)((u64)dVar6 & 0xffffffff);
                if (SUB84(dVar6, 0) != 0.0) {
                    Vec3_length_sq(auStack_30, uVar3, ar6_00, ar7_00);
                    if (cVar9 == '\0') {
                        in_fr15 = (float)((u64)dVar5 >> 0x20);
                    }
                    ar6_00 = a6;
                    uVar4 = (**(code **)(*a1 + 0x100))(a1, a3, a6, ar7_00);
                }
            }
        }
    }
    Vec3_dtor(auStack_30, 0xffffffff, ar6_00, ar7_00);
    return uVar4;
}

/*
 * Vec3_ctor_copy_wrap_02f670  0x8c02f670
 * only calls Vec3_ctor_copy
 * called by: Class_12acc8_m1_09f470, FUN_8c02f474, FUN_8c02f694, FUN_8c02f880, FUN_8c02fcc4, FUN_8c03525c,
 * FUN_8c04f034, FUN_8c05af78 (+19 more)
 */
u32 Vec3_ctor_copy_wrap_02f670(int a0, u32 unused_a1, u32 a2, u32 a3, u32 s0) {
    u32 uVar1;

    uVar1 = Vec3_ctor_copy(s0, a0 + 0x30, a2, a3);
    return uVar1;
}

/*
 * FUN_8c02f694  0x8c02f694
 */
u32 FUN_8c02f694(int a0, int *a1, u32 *a2, u32 a3) {
    u32 ar4_00;
    int iVar1;
    int *ar5_00;
    u32 uVar2;
    u32 *ar6_00;
    u32 ar7_00;
    u32 uVar3;
    u32 *a6;
    double in_dr0;
    double dVar4;
    float in_fr15;
    u32 in_fr14;
    bool bVar5;
    char cVar6;
    char cVar7;
    int in_stack_00000000;
    u8 auStack_74[16];
    u8 auStack_64[16];
    u8 auStack_54[16];
    u8 auStack_44[16];
    u8 auStack_34[20];

    cVar7 = '\0';
    cVar6 = '\0';
    uVar3 = 0;
    ar5_00 = a1;
    ar6_00 = a2;
    ar7_00 = a3;
    Vec3_ctor_zero(auStack_34, a1, a2);
    if (cVar7 == '\0') {
        in_fr15 = 1e+07;
    }
    if (*(int *)(a0 + 0x6c) != 0) {
        Vec3_ctor_copy_wrap_02f670(*(u32 *)(a0 + 0x6c), ar5_00, ar6_00, ar7_00, auStack_44);
        Vec3_length_sq(auStack_44, ar5_00, ar6_00, ar7_00);
        if (cVar7 == '\0') {
            in_fr15 = (float)((u64)in_dr0 >> 0x20);
        }
        Vec3_dtor(auStack_44, 0xffffffff, ar6_00, ar7_00);
        uVar3 = *(u32 *)(a0 + 0x6c);
    }
    for (a6 = NULL; iVar1 = (**(code **)(*a1 + 0x11c))(a1, a3, ar6_00, ar7_00), (int)a6 < iVar1;
         a6 = (u32 *)((int)a6 + 1)) {
        uVar2 = a3;
        ar6_00 = a6;
        iVar1 = (**(code **)(*a1 + 0x100))(a1, a3, a6, ar7_00);
        iVar1 = (**(code **)(*(int *)(iVar1 + 8) + 0x114))(iVar1, uVar2, ar6_00, ar7_00);
        if (in_stack_00000000 == iVar1) {
            Vec3_ctor_copy_wrap_02f670(*a2, uVar2, ar6_00, ar7_00, auStack_54);
            uVar2 = a3;
            ar6_00 = a6;
            ar4_00 = (**(code **)(*a1 + 0x100))(a1, a3, a6, ar7_00);
            Vec3_ctor_copy_wrap_02f670(ar4_00, uVar2, ar6_00, ar7_00, auStack_64);
            Vec3_sub(auStack_54, auStack_64, ar6_00, ar7_00, auStack_74);
            Vec3_assign(auStack_34, auStack_74, ar6_00, ar7_00);
            Vec3_dtor(auStack_74, 0xffffffff, ar6_00, ar7_00);
            Vec3_dtor(auStack_64, 0xffffffff, ar6_00, ar7_00);
            uVar2 = 0xffffffff;
            Vec3_dtor(auStack_54, 0xffffffff, ar6_00, ar7_00);
            Vec3_length_sq(auStack_34, uVar2, ar6_00, ar7_00);
            if (cVar6 == '\0') {
                bVar5 = (float)((u64)in_dr0 >> 0x20) < in_fr15;
            } else {
                bVar5 = in_dr0 < (double)CONCAT44(in_fr14, in_fr15);
            }
            if (bVar5) {
                Vec3_length_sq(auStack_34, uVar2, ar6_00, ar7_00);
                dVar4 = in_dr0;
                if (cVar7 == '\0') {
                    dVar4 = (double)((u64)in_dr0 >> 0x20);
                }
                in_dr0 = (double)((u64)dVar4 & 0xffffffff);
                if (SUB84(dVar4, 0) != 0.0) {
                    Vec3_length_sq(auStack_34, uVar2, ar6_00, ar7_00);
                    if (cVar7 == '\0') {
                        in_fr15 = (float)((u64)in_dr0 >> 0x20);
                    }
                    ar6_00 = a6;
                    uVar3 = (**(code **)(*a1 + 0x100))(a1, a3, a6, ar7_00);
                }
            }
        }
    }
    Vec3_dtor(auStack_34, 0xffffffff, ar6_00, ar7_00);
    return uVar3;
}

/*
 * ret_const_1b_02f878  0x8c02f878
 */
u32 ret_const_1b_02f878(void) {
    return 0x1b;
}

/*
 * FUN_8c02f880  0x8c02f880
 * called by: FUN_8c1093a4
 */
u32 FUN_8c02f880(int a0, int *a1, u32 *a2, u32 a3) {
    int iVar1;
    u32 ar4_00;
    u32 uVar2;
    u32 *puVar3;
    u32 a7;
    int iVar4;
    u32 uVar5;
    u32 *puVar6;
    u32 in_fr1;
    double dVar7;
    float in_fr15;
    u32 in_fr14;
    bool bVar9;
    char cVar10;
    char cVar11;
    int in_stack_00000000;
    short in_stack_00000004;
    u8 auStack_74[16];
    u8 auStack_64[16];
    u8 auStack_54[16];
    u8 auStack_44[16];
    u32 auStack_34[5];
    double dVar8;

    cVar11 = '\0';
    cVar10 = '\0';
    uVar5 = 0;
    puVar3 = a2;
    a7 = a3;
    Vec3_ctor_zero(auStack_34, a1, a2);
    if (cVar11 == '\0') {
        in_fr15 = 1e+07;
    }
    iVar4 = 0;
    if (cVar11 == '\0') {
        auStack_34[0] = 0;
    } else {
        auStack_34[3] = 0;
        auStack_34[0] = in_fr1;
    }
    dVar7 = (double)(u64)in_fr1;
    auStack_34[2] = 0;
    auStack_34[1] = 0;
    (**(code **)(*a1 + 0x11c))(a1, a3, puVar3, a7);
    for (puVar6 = NULL; uVar2 = a3, iVar1 = (**(code **)(*a1 + 0x11c))(a1, a3, puVar3, a7), (int)puVar6 < iVar1;
         puVar6 = (u32 *)((int)puVar6 + 1)) {
        uVar2 = a3;
        puVar3 = puVar6;
        iVar1 = (**(code **)(*a1 + 0x100))(a1, a3, puVar6, a7);
        iVar1 = (**(code **)(*(int *)(iVar1 + 8) + 0x114))(iVar1, uVar2, puVar3, a7);
        if (in_stack_00000000 == iVar1) {
            uVar2 = a3;
            puVar3 = puVar6;
            iVar1 = (**(code **)(*a1 + 0x100))(a1, a3, puVar6, a7);
            iVar1 = (**(code **)(*(int *)(iVar1 + 8) + 0xb4))(iVar1, uVar2, puVar3, a7);
            if (iVar1 == 1) {
                uVar2 = a3;
                puVar3 = puVar6;
                iVar1 = (**(code **)(*a1 + 0x100))(a1, a3, puVar6, a7);
                iVar1 = (**(code **)(*(int *)(iVar1 + 8) + 0xb8))(iVar1, uVar2, puVar3, a7);
                if (iVar1 == 0) {
                    iVar4 = iVar4 + 1;
                }
            }
        }
    }
    if (in_stack_00000004 < iVar4) {
        if (*(int *)(a0 + 0x6c) != 0) {
            Vec3_ctor_copy_wrap_02f670(*(u32 *)(a0 + 0x6c), uVar2, puVar3, a7, auStack_44);
            Vec3_length_sq(auStack_44, uVar2, puVar3, a7);
            if (cVar11 == '\0') {
                in_fr15 = (float)((u64)dVar7 >> 0x20);
            }
            Vec3_dtor(auStack_44, 0xffffffff, puVar3, a7);
            uVar5 = *(u32 *)(a0 + 0x6c);
        }
        for (puVar6 = NULL; iVar4 = (**(code **)(*a1 + 0x11c))(a1, a3, puVar3, a7), (int)puVar6 < iVar4;
             puVar6 = (u32 *)((int)puVar6 + 1)) {
            uVar2 = a3;
            puVar3 = puVar6;
            iVar4 = (**(code **)(*a1 + 0x100))(a1, a3, puVar6, a7);
            (**(code **)(*(int *)(iVar4 + 8) + 0x114))(iVar4, uVar2, puVar3, a7);
            uVar2 = a3;
            puVar3 = puVar6;
            iVar4 = (**(code **)(*a1 + 0x100))(a1, a3, puVar6, a7);
            iVar4 = (**(code **)(*(int *)(iVar4 + 8) + 0x114))(iVar4, uVar2, puVar3, a7);
            if (in_stack_00000000 == iVar4) {
                uVar2 = a3;
                puVar3 = puVar6;
                iVar4 = (**(code **)(*a1 + 0x100))(a1, a3, puVar6, a7);
                iVar4 = (**(code **)(*(int *)(iVar4 + 8) + 0xb4))(iVar4, uVar2, puVar3, a7);
                if (iVar4 == 1) {
                    uVar2 = a3;
                    puVar3 = puVar6;
                    iVar4 = (**(code **)(*a1 + 0x100))(a1, a3, puVar6, a7);
                    iVar4 = (**(code **)(*(int *)(iVar4 + 8) + 0xb8))(iVar4, uVar2, puVar3, a7);
                    if (iVar4 == 0) {
                        Vec3_ctor_copy_wrap_02f670(*a2, uVar2, puVar3, a7, auStack_54);
                        uVar2 = a3;
                        puVar3 = puVar6;
                        ar4_00 = (**(code **)(*a1 + 0x100))(a1, a3, puVar6, a7);
                        Vec3_ctor_copy_wrap_02f670(ar4_00, uVar2, puVar3, a7, auStack_64);
                        Vec3_sub(auStack_54, auStack_64, puVar3, a7, auStack_74);
                        Vec3_assign(auStack_34, auStack_74, puVar3, a7);
                        Vec3_dtor(auStack_74, 0xffffffff, puVar3, a7);
                        Vec3_dtor(auStack_64, 0xffffffff, puVar3, a7);
                        uVar2 = 0xffffffff;
                        Vec3_dtor(auStack_54, 0xffffffff, puVar3, a7);
                        Vec3_length_sq(auStack_34, uVar2, puVar3, a7);
                        if (cVar10 == '\0') {
                            bVar9 = (float)((u64)dVar7 >> 0x20) < in_fr15;
                        } else {
                            bVar9 = dVar7 < (double)CONCAT44(in_fr14, in_fr15);
                        }
                        if (bVar9) {
                            Vec3_length_sq(auStack_34, uVar2, puVar3, a7);
                            dVar8 = dVar7;
                            if (cVar11 == '\0') {
                                dVar8 = (double)((u64)dVar7 >> 0x20);
                            }
                            dVar7 = (double)((u64)dVar8 & 0xffffffff);
                            if (SUB84(dVar8, 0) != 0.0) {
                                Vec3_length_sq(auStack_34, uVar2, puVar3, a7);
                                if (cVar11 == '\0') {
                                    in_fr15 = (float)((u64)dVar7 >> 0x20);
                                }
                                puVar3 = puVar6;
                                uVar5 = (**(code **)(*a1 + 0x100))(a1, a3, puVar6, a7);
                            }
                        }
                    }
                }
            }
        }
        Vec3_dtor(auStack_34, 0xffffffff, puVar3, a7);
    } else {
        Vec3_dtor(auStack_34, 0xffffffff, puVar3, a7);
        uVar5 = 0;
    }
    return uVar5;
}

/*
 * FUN_8c02fc8c  0x8c02fc8c
 * called by: FUN_8c0a5c2c
 */
u32 FUN_8c02fc8c(int a0, u32 a1, u32 a2, u32 a3) {
    bool bVar1;

    bVar1 = *(int *)(a0 + 0x6c) != 0;
    if (bVar1) {
        (**(code **)(*(int *)(*(int *)(a0 + 0x6c) + 8) + 0x78))(*(int *)(a0 + 0x6c), a1, a2, a3);
        *(u32 *)(a0 + 0x6c) = 0;
    }
    return (u32)bVar1;
}

/*
 * FUN_8c02fcc4  0x8c02fcc4
 * called by: Class_12b2e8_m1_0b5ad0, FUN_8c05f660, FUN_8c062b0c, FUN_8c063838, FUN_8c066464, FUN_8c104854,
 * FUN_8c107590, FUN_8c1097a8
 */
u32 FUN_8c02fcc4(int a0, u32 *a1, u32 a2, u32 a3) {
    u32 uVar1;
    u32 *ar5_00;
    float *ar6_00;
    float fVar2;
    float fVar3;
    char cVar4;
    char cVar5;
    float fStack_3c;
    float fStack_38;
    u8 auStack_34[16];
    u8 auStack_24[16];
    u8 auStack_14[16];

    cVar5 = '\0';
    cVar4 = '\0';
    ar5_00 = a1;
    uVar1 = FUN_8c1011b0(*(u32 *)(a1[6] + 0x7cc), a1, a2, a3);
    if ((u16)uVar1 < 5) {
        Vec3_ctor_copy_wrap_02f670(*a1, ar5_00, a2, a3, auStack_34);
        Vec3_ctor_copy(auStack_24, auStack_34, a2, a3);
        Vec3_dtor(auStack_34, 0xffffffff, a2, a3);
        ar6_00 = &fStack_3c;
        FUN_8c256294(0, auStack_14, ar6_00);
        if (cVar5 == '\0') {
            fVar3 = 150.0;
            fVar2 = fStack_3c;
        } else {
            fVar2 = 150.0;
            fVar3 = 500.0;
        }
        if (cVar4 == '\0' && fVar3 < fVar2) {
            if (cVar5 == '\0') {
                fVar2 = 500.0;
            } else {
                fStack_3c = 500.0;
                fVar2 = 80.0;
            }
            if (cVar4 == '\0' && fStack_3c < fVar2) {
                if (cVar5 == '\0') {
                    fVar3 = 80.0;
                    fVar2 = fStack_38;
                } else {
                    fVar2 = 80.0;
                    fVar3 = 400.0;
                }
                if (cVar4 == '\0' && fVar3 < fVar2) {
                    if (cVar5 == '\0') {
                        fVar2 = 400.0;
                    } else {
                        fStack_38 = 400.0;
                        fVar2 = 1.82169e-43;
                    }
                    if (cVar4 == '\0' && fStack_38 < fVar2) {
                        Vec3_dtor(auStack_24, 0xffffffff, ar6_00, a3);
                        return 1;
                    }
                }
            }
        }
        Vec3_dtor(auStack_24, 0xffffffff, ar6_00, a3);
    }
    return (u32)(*(char *)(a0 + 0x82) == '\x01');
}

/*
 * FUN_8c02fdd8  0x8c02fdd8
 * called by: FUN_8c05f660, FUN_8c09ff1c, FUN_8c0b61bc, FUN_8c104854
 */
double *FUN_8c02fdd8(int a0, int *a1) {
    double *pdVar1;
    u8 *a5;
    float *a6;
    float *a7;
    float fVar2;
    double dVar3;
    float fVar4;
    u32 in_fr3;
    u32 uVar5;
    double dVar6;
    bool bVar7;
    char cVar8;
    char cVar9;
    float fStack_1c;
    float fStack_18;
    float fStack_14;
    u8 auStack_10[8];

    cVar9 = '\0';
    cVar8 = '\0';
    a7 = &fStack_18;
    a6 = &fStack_14;
    a5 = auStack_10;
    (**(code **)(*a1 + 0x120))(a1, a5, a6, a7);
    if (cVar9 == '\0') {
        dVar6 = (double)CONCAT44(fStack_18, in_fr3);
        dVar3 = (double)CONCAT44(0x3dcccccd, fStack_14);
    } else {
        dVar6 = (double)CONCAT44(fStack_14, fStack_18);
        dVar3 = 8.15358646777176e-312;
    }
    if (cVar8 == '\0') {
        fVar4 = (float)((u64)dVar3 >> 0x20);
        fVar2 = SUB84(dVar3, 0) * fVar4;
        dVar3 = (double)CONCAT44(fVar4, fVar2);
        dVar6 = (double)CONCAT44((float)((u64)dVar6 >> 0x20) - fVar2, SUB84(dVar6, 0));
    } else {
        dVar3 = dVar3 * dVar3;
        dVar6 = dVar6 - dVar3;
    }
    fVar2 = (float)((u64)dVar6 >> 0x20);
    fStack_18 = fVar2;
    if (cVar9 != '\0') {
        fStack_18 = SUB84(dVar6, 0);
        fStack_14 = fVar2;
    }
    (**(code **)(*a1 + 0x180))(a1, a5, a6, a7);
    uVar5 = SUB84(dVar6, 0);
    fVar2 = (float)((u64)dVar3 >> 0x20);
    if (cVar9 == '\0') {
        dVar3 = 4.14452302922905e-317;
        fStack_1c = fVar2;
    } else {
        fStack_1c = SUB84(dVar3, 0);
        fStack_18 = fVar2;
    }
    pdVar1 = (double *)0x8;
    fVar2 = fStack_1c;
    fVar4 = fStack_18;
    if (cVar9 == '\0') {
        fVar2 = SUB84(dVar3, 0);
        fVar4 = fStack_1c;
    }
    if (fVar2 != fVar4) {
        (**(code **)(*a1 + 0x180))(a1, a5, a6, a7);
        if (cVar9 == '\0') {
            dVar6 = (double)CONCAT44(fStack_18, uVar5);
            dVar3 = (double)CONCAT44(0x42c80000, fVar4);
        } else {
            dVar6 = (double)CONCAT44(fStack_14, fStack_18);
            dVar3 = 2.0000004975590855;
        }
        if (cVar8 == '\0') {
            dVar6 = (double)CONCAT44((float)((u64)dVar6 >> 0x20) * (SUB84(dVar3, 0) / (float)((u64)dVar3 >> 0x20)),
                                     SUB84(dVar6, 0));
        } else {
            dVar6 = dVar6 * (dVar3 / dVar3);
        }
        if (cVar9 == '\0') {
            dVar3 = (double)CONCAT44(0x40000000, fStack_14);
        } else {
            dVar3 = 1.6514225348597613e-308;
        }
        if (cVar8 == '\0') {
            fVar2 = SUB84(dVar3, 0) / (float)((u64)dVar3 >> 0x20);
            dVar6 = (double)CONCAT44((float)((u64)dVar6 >> 0x20) - fVar2, SUB84(dVar6, 0));
        } else {
            fVar2 = SUB84(dVar3 / dVar3, 0);
            dVar6 = dVar6 - dVar3 / dVar3;
        }
        pdVar1 = (double *)(a0 + 0x2c);
        if (cVar9 == '\0') {
            dVar3 = (double)CONCAT44(*(u32 *)pdVar1, fVar2);
        } else {
            dVar3 = *pdVar1;
        }
        if (cVar8 == '\0') {
            bVar7 = (float)((u64)dVar3 >> 0x20) < (float)((u64)dVar6 >> 0x20);
        } else {
            bVar7 = dVar3 < dVar6;
        }
        if (!bVar7) {
            (**(code **)(*a1 + 0x180))(a1, a5, a6, a7);
            if (cVar9 == '\0') {
                dVar6 = (double)CONCAT44(fStack_18, SUB84(dVar6, 0));
                dVar3 = (double)CONCAT44(0x42c80000, (int)((u64)dVar3 >> 0x20));
            } else {
                dVar6 = (double)CONCAT44(fStack_14, fStack_18);
                dVar3 = 2.0000004975590855;
            }
            if (cVar8 == '\0') {
                fVar4 = (float)((u64)dVar3 >> 0x20);
                fVar2 = SUB84(dVar3, 0) / fVar4;
                dVar3 = (double)CONCAT44(fVar4, fVar2);
                dVar6 = (double)CONCAT44((float)((u64)dVar6 >> 0x20) * fVar2, SUB84(dVar6, 0));
            } else {
                dVar3 = dVar3 / dVar3;
                dVar6 = dVar6 * dVar3;
            }
            fVar2 = SUB84(dVar3, 0);
            if (cVar9 == '\0') {
                fVar2 = fStack_14;
            }
            pdVar1 = (double *)&g_8c02febc;
            if (cVar9 == '\0') {
                dVar3 = (double)CONCAT44(0x40000000, fVar2);
            } else {
                dVar3 = 1.6514225348597613e-308;
            }
            if (cVar8 == '\0') {
                dVar6 = (double)CONCAT44((float)((u64)dVar6 >> 0x20) - SUB84(dVar3, 0) / (float)((u64)dVar3 >> 0x20),
                                         SUB84(dVar6, 0));
            } else {
                dVar6 = dVar6 - dVar3 / dVar3;
            }
            if (cVar9 == '\0') {
                *(int *)(a0 + 0x2c) = (int)((u64)dVar6 >> 0x20);
            } else {
                *(double *)(a0 + 0x2c) = dVar6;
            }
        }
    }
    return pdVar1;
}

/*
 * ret_const_0_02fec0  0x8c02fec0
 */
u32 ret_const_0_02fec0(void) {
    return 0;
}

/*
 * noop_02fec8  0x8c02fec8
 */
u32 noop_02fec8(void) {
    u32 in_r0;

    return in_r0;
}

/*
 * noop_02fecc  0x8c02fecc
 */
u32 noop_02fecc(void) {
    u32 in_r0;

    return in_r0;
}

/*
 * FUN_8c02fed0  0x8c02fed0
 */
int FUN_8c02fed0(int a0, u8 *a1) {
    int iVar1;

    *(u8 *)(0x98 + a0) = *a1;
    iVar1 = 0x99;
    *(u8 *)(0x99 + a0) = a1[1];
    return iVar1;
}

/*
 * FUN_8c02feec  0x8c02feec
 */
int FUN_8c02feec(int a0, u8 *a1) {
    char cVar1;

    *(u32 *)(a1 + 4) = 0;
    *a1 = *(u8 *)(0x98 + a0);
    cVar1 = *(char *)(0x99 + a0);
    a1[1] = cVar1;
    return (int)cVar1;
}

/*
 * FUN_8c02ff08  0x8c02ff08
 */
int FUN_8c02ff08(int a0, u8 *a1) {
    int iVar1;

    *(u8 *)(0x98 + a0) = *a1;
    iVar1 = 0x99;
    *(u8 *)(0x99 + a0) = a1[1];
    return iVar1;
}

/*
 * FUN_8c02ff24  0x8c02ff24
 */
int FUN_8c02ff24(int a0, u8 *a1) {
    char cVar1;

    *(u32 *)(a1 + 4) = 0;
    *a1 = *(u8 *)(0x98 + a0);
    cVar1 = *(char *)(0x99 + a0);
    a1[1] = cVar1;
    return (int)cVar1;
}

/*
 * FUN_8c02ff40  0x8c02ff40
 * called by: FUN_8c0243b0, FUN_8c0ba284
 */
u8 *FUN_8c02ff40(u8 *a0) {
    FUN_8c030d44(a0 + 8);
    *(u32 *)(a0 + 4) = 0;
    *a0 = 0;
    a0[1] = 0;
    return a0;
}

/*
 * FUN_8c02ff6c  0x8c02ff6c
 * called by: FUN_8c0384f8, FUN_8c087ed0, FUN_8c099e74, FUN_8c09b8e4, FUN_8c0a4de8
 */
u32 *FUN_8c02ff6c(u32 *a0, u32 a1, u32 a2) {
    Class_129c70_ctor(a0, a1, a2);
    *a0 = (&DATA_8c129c24);
    return a0;
}

/*
 * Class_129c24_dtor  0x8c02ff90
 * stores the vtable 0x8c129c24
 * called by: CAnimal_m0_038648, CAnimal_m0_08800c, Class_12a7f4_m0_099fd8, Class_12a990_m0_09bb44,
 * Class_12ad50_m0_0a4f54
 */
u32 *Class_129c24_dtor(u32 *a0, u32 a1, u32 a2, u32 a3) {
    u32 ar5_00;
    u32 in_stack_fffffff4;
    u32 ain0;

    ain0 = CONCAT22((short)((u32)in_stack_fffffff4 >> 0x10), (u16)a1);
    if (a0 != NULL) {
        *a0 = &g_8c129c24;
        ar5_00 = 0;
        Class_129c70_dtor(a0, 0, a2, a3);
        if (0 < (short)ain0) {
            free_if_nonnull(a0);
        }
    }
    return a0;
}

/*
 * noop_02ffd8  0x8c02ffd8
 */
u32 noop_02ffd8(void) {
    u32 in_r0;

    return in_r0;
}

/*
 * ret_const_0_02ffdc  0x8c02ffdc
 */
u32 ret_const_0_02ffdc(void) {
    return 0;
}

/*
 * ret_const_0_02ffe4  0x8c02ffe4
 */
u32 ret_const_0_02ffe4(void) {
    return 0;
}

/*
 * FUN_8c02ffec  0x8c02ffec
 */
u32 FUN_8c02ffec(u32 unused_a0, u32 a1, u32 a2, u32 a3) {
    u32 uVar1;
    code *pcVar2;
    u32 uVar3;
    char cVar4;

    cVar4 = '\0';
    uVar1 = Vec3_ctor_xyz(&g_8c125b10, a1, a2, a3);
    uVar3 = 0x8c27d4d0;
    pcVar2 = Vec3_dtor;
    global_list_push(uVar1, Vec3_dtor, 0x8c27d4d0, a3);
    uVar1 = Vec3_ctor_xyz(&g_8c125b20, pcVar2, uVar3, a3);
    uVar3 = 0x8c27d4dc;
    pcVar2 = Vec3_dtor;
    global_list_push(uVar1, Vec3_dtor, 0x8c27d4dc, a3);
    uVar1 = Vec3_ctor_xyz(&g_8c125b30, pcVar2, uVar3, a3);
    uVar3 = 0x8c27d4e8;
    pcVar2 = Vec3_dtor;
    global_list_push(uVar1, Vec3_dtor, 0x8c27d4e8, a3);
    uVar1 = Vec3_ctor_xyz(&g_8c125b40, pcVar2, uVar3, a3);
    global_list_push(uVar1, Vec3_dtor, 0x8c27d4f4, a3);
    if (cVar4 == '\0') {
        g_8c125b50 = CONCAT44(_UNK_8c125b54, 0x800000);
        /* WARNING: Read-only address (ram,0x8c125b54) is written */
    } else {
        g_8c125b50 = 0xffffffff00800000;
    }
    return 0x8c125864;
}
