/* Seaman (USA) region 0x8c200000-0x8c210000 (Ghidra decompiler, cleaned up by tools/readable.py) */

#include "seaman.h"
#include "globals.h"

/*
 * shinobi_save_200038  0x8c200038
 * area name: in the shinobi library code range; behaviour name: mostly calls save functions
 */
int shinobi_save_200038(int a0, u32 a1, u32 unused_a2, u32 a3) {
    int iVar1;
    u8 *puVar2;
    int a5;
    u32 uVar3;
    int iVar4;
    int iVar5;
    u8 auStack_2c[20];

    iVar4 = (int)0x148;
    iVar5 = a0 * iVar4 + 0x8c4783e0;
    if (*(char *)(iVar5 + 2) != '\0') {
        uVar3 = a1;
        iVar1 = maple_device_ready(a0, a1);
        if (iVar1 == 0) {
            vmu_drive_reset(a0);
        } else {
            iVar1 = maple_device_ready_idle(a0, uVar3);
            if ((iVar1 != 0) && (*(char *)(a0 * iVar4 + 0x8c4783e0 + 8) != '\0')) {
                iVar4 = thunk_FUN_8c1ffcc2();
                if (iVar4 < 0) {
                    return (int)(int)0xffffff03;
                }
                if (*(int *)(*(int *)(iVar5 + 0x1c) + 0x38) != 0) {
                    puVar2 = auStack_2c;
                    iVar4 = bu_get_game_file_name_now(a0, puVar2);
                    if ((iVar4 != 0) && (iVar4 = vmu_fat_check_links(a0), -1 < iVar4)) {
                        while (true) {
                            puVar2 = (u8 *)vmu_fat_find_first_used(a0);
                            if (((int)puVar2 < 0) || (iVar4 = vmu_fat_find_free_from_end(a0, puVar2 + 1), iVar4 < 0)) {
                                iVar4 = (int)0x100;
                                uVar3 = 1;
                                for (puVar2 = (u8 *)(iVar5 + 0x48); puVar2 < (u8 *)(iVar5 + 0x48 + iVar4);
                                     puVar2 = puVar2 + 1) {
                                    *puVar2 = 1;
                                }
                                iVar5 = shinobi_save_200346(a0, iVar4, 1, a3);
                                if (iVar5 < 0) {
                                    return iVar5;
                                }
                                uVar3 = shinobi_save_2007f0(a0, iVar4, uVar3);
                                return uVar3;
                            }
                            iVar1 = vmu_block_read_retry(a0, puVar2, a1);
                            if (iVar1 < 0) {
                                return iVar1;
                            }
                            uVar3 = a1;
                            iVar1 = vmu_block_write_retry(a0, iVar4, a1, a3);
                            if (iVar1 < 0)
                                break;
                            a5 = vmu_fat_find(a0, puVar2, uVar3, a3);
                            iVar1 = iVar4;
                            if (a5 < 1) {
                                uVar3 = vmu_dir_find_by_start_block(a0, puVar2, uVar3, a3);
                                (**(code **)(g_8c4783dc + 0x10))(uVar3, 2, iVar4, a3);
                            } else {
                                vmu_drive_write_like(a0, a5, iVar4);
                            }
                            uVar3 = vmu_drive_read_like(a0, puVar2);
                            vmu_drive_write_like(a0, iVar4, uVar3);
                            unused_a2 = 0xfffc;
                            vmu_drive_write_like(a0, puVar2, 0xfffc);
                        }
                        return iVar1;
                    }
                }
                return (int)(int)0xffffff0b;
            }
        }
    }
    return (int)(int)0xffffff01;
}

/*
 * vmu_read_block_chain  0x8c2001b8
 * reads the block chain that starts at the root-block field +0x14, up to the count at +0x18, stopping at the 0xfffa end
 * marker called by: shinobi_save_200a00
 */
u32 vmu_read_block_chain(int a0) {
    u32 uVar1;
    int iVar2;
    int iVar3;
    int iVar4;
    int iVar5;
    int iVar6;
    int iVar7;
    u32 uVar8;
    u32 uVar9;

    uVar1 = 0xfffa;
    uVar9 = 1;
    iVar7 = 0;
    iVar3 = a0 * 0x148 + 0x8c4783e0;
    iVar5 = (int)0x200;
    iVar4 = *(int *)(iVar3 + 0x1c);
    iVar6 = *(int *)(iVar4 + 0x18);
    uVar8 = *(u32 *)(iVar4 + 0x14);
    iVar3 = *(int *)(iVar3 + 0x28);
    if (0 < iVar6) {
        do {
            iVar4 = iVar3;
            iVar2 = vmu_block_read_retry(a0, uVar8 & 0xffff, uVar9);
            if (iVar2 < 0) {
                return iVar2;
            }
            uVar8 = vmu_drive_read_like(a0, uVar8 & 0xffff);
            if ((uVar8 & 0xffff) == uVar1) {
                return 0;
            }
            iVar7 = iVar7 + 1;
            iVar3 = iVar3 + iVar5;
        } while (iVar7 < iVar6);
    }
    return 0;
}

/*
 * alt_entry_2001d0  0x8c2001d0
 * probably an entry 24 bytes into 8c2001b8: it reads registers that code sets before it
 */
u32 alt_entry_2001d0(int a0) {
    u32 uVar1;
    int iVar2;
    int in_r3;
    int iVar3;
    int iVar4;
    int iVar5;
    int unaff_r11;
    u32 unaff_r12;
    u32 uVar6;

    uVar1 = 0xfffa;
    iVar4 = (int)0x200;
    iVar3 = *(int *)(a0 + in_r3 + 0x1c);
    iVar5 = *(int *)(iVar3 + 0x18);
    uVar6 = *(u32 *)(iVar3 + 0x14);
    iVar3 = *(int *)(a0 + in_r3 + 0x28);
    if (0 < iVar5) {
        do {
            iVar2 = vmu_block_read_retry(unaff_r12, uVar6 & 0xffff, iVar3);
            if (iVar2 < 0) {
                return iVar2;
            }
            uVar6 = vmu_drive_read_like(unaff_r12, uVar6 & 0xffff);
            if ((uVar6 & 0xffff) == uVar1) {
                return 0;
            }
            unaff_r11 = unaff_r11 + 1;
            iVar3 = iVar3 + iVar4;
        } while (unaff_r11 < iVar5);
    }
    return 0;
}

/*
 * shinobi_save_200226  0x8c200226
 * area name: in the shinobi library code range; behaviour name: mostly calls save functions
 * called by: shinobi_save_1fde30
 */
u32 shinobi_save_200226(int a0, u32 unused_a1, u32 unused_a2, u32 a3) {
    u32 a6;
    u32 uVar1;
    int iVar2;
    u32 uVar3;
    u32 uVar4;
    int iVar5;
    int iVar6;
    int iVar7;
    u32 a6_00;
    u16 uStack_2c;

    a6 = 0xfffa;
    iVar7 = 0;
    iVar6 = a0 * 0x148 + 0x8c4783e0;
    uStack_2c = *(u16 *)(*(int *)(iVar6 + 0x1c) + 0x14);
    uVar1 = (u32)(short)uStack_2c;
    iVar5 = *(int *)(*(int *)(iVar6 + 0x1c) + 0x18);
    a6_00 = 0xfffa + 2;
    if (0 < iVar5) {
        do {
            uVar3 = uVar1 & 0xffff;
            uVar1 = vmu_drive_read_like(a0, uVar3);
            unused_a2 = a6_00;
            vmu_drive_write_like(a0, uVar3, a6_00);
            if (((uVar1 & 0xffff) == a6) || ((uVar1 & 0xffff) == a6_00))
                break;
            iVar7 = iVar7 + 1;
        } while (iVar7 < iVar5);
    }
    uVar1 = (u32)(short)uStack_2c;
    iVar7 = 0;
    do {
        if (iVar5 <= iVar7) {
            if ((u32)uStack_2c != *(u32 *)(*(int *)(iVar6 + 0x1c) + 0x14)) {
                uVar4 = 0x4a;
                iVar5 = (int)(short)uStack_2c;
                (**(code **)(g_8c4783dc + 0x10))(*(u32 *)(iVar6 + 0x20), 0x4a, iVar5, a3);
                shinobi_save_2007f0(a0, uVar4, iVar5);
                shinobi_calc_20065a(a0);
            }
            return 0;
        }
        while (iVar2 =
                   (*(code *)(&vmu_block_write_retry))(a0, uVar1 & 0xffff, *(int *)(iVar6 + 0x28) + iVar7 * 0x200, a3),
               iVar2 != 0) {
            if (iVar2 == (int)0xffffff01) {
                return iVar2;
            }
            uVar4 = 0xffff;
            vmu_drive_write_like(a0, uVar1 & 0xffff, 0xffff);
            uVar1 = shinobi_save_1fe15a(a0, a6_00);
        }
        if (iVar7 == 0) {
            uStack_2c = (u16)uVar1;
        }
        uVar3 = a6;
        vmu_drive_write_like(a0, uVar1 & 0xffff, a6);
        if (iVar7 != iVar5 + -1) {
            uVar4 = shinobi_save_1fe15a(a0, a6_00);
            vmu_drive_write_like(a0, uVar1 & 0xffff, uVar4);
            uVar1 = (u32)(short)uVar4;
        }
        iVar7 = iVar7 + 1;
    } while (true);
}

/*
 * shinobi_save_200346  0x8c200346
 * area name: in the shinobi library code range; behaviour name: mostly calls save functions
 * called by: shinobi_save_1ff530, shinobi_save_1ff610, shinobi_save_1ff72e, shinobi_save_1ff844, shinobi_save_1ffa54,
 * shinobi_save_200038, vmu_file_close
 */
int shinobi_save_200346(int a0, u32 unused_a1, int a2, u32 a3) {
    bool bVar1;
    int iVar2;
    int iVar3;
    u32 uVar4;
    u32 uVar5;
    u32 ar6_00;
    u32 unaff_r8;
    int iVar6;
    int iVar7;
    u32 a5;

    iVar6 = a0 * 0x148 + 0x8c4783e0;
    uVar5 = *(u32 *)(iVar6 + 0x1c);
    iVar3 = *(int *)(uVar5 + 0x18);
    uVar4 = *(u32 *)(uVar5 + 0x14);
    iVar7 = 0;
    bVar1 = false;
    do {
        a5 = uVar4 & 0xffff;
        if (iVar3 <= iVar7) {
            if ((!bVar1) || ((iVar3 = shinobi_save_2007f0(a0, uVar5, a2),
                              -1 < iVar3 && (iVar3 = shinobi_calc_20065a(a0), -1 < iVar3)))) {
                iVar3 = 0;
            }
            return iVar3;
        }
        if (*(char *)(iVar6 + 0x48 + iVar7) == '\0') {
            uVar5 = a5;
            uVar4 = vmu_drive_read_like(a0, a5);
        } else {
            while (true) {
                a2 = *(int *)(iVar6 + 0x28) + iVar7 * 0x200;
                iVar2 = vmu_block_write_retry(a0, a5, a2, a3);
                if (iVar2 == 0)
                    break;
                if (iVar2 == (int)0xffffff01) {
                    return iVar2;
                }
                bVar1 = true;
                uVar4 = vmu_drive_read_like(a0, a5);
                ar6_00 = 0xffff;
                vmu_drive_write_like(a0, a5, 0xffff);
                uVar5 = shinobi_save_1fe15a(a0, 0xfffc);
                if ((int)uVar5 < 0) {
                    return (int)(int)0xffffff04;
                }
                vmu_drive_write_like(a0, uVar5, uVar4 & 0xffff);
                if (iVar7 == 0) {
                    (**(code **)(g_8c4783dc + 0x10))(*(u32 *)(iVar6 + 0x20), 0x4a, uVar5, a3);
                    unaff_r8 = a5;
                    a5 = uVar5;
                } else {
                    vmu_drive_write_like(a0, unaff_r8, uVar5);
                    unaff_r8 = a5;
                    a5 = uVar5;
                }
            }
            uVar5 = a5;
            uVar4 = vmu_drive_read_like(a0, a5);
            *(u8 *)(iVar6 + 0x48 + iVar7) = 0;
        }
        iVar7 = iVar7 + 1;
        unaff_r8 = a5;
    } while (true);
}

/*
 * strnlen_12  0x8c200472
 * length of string a0, at most 12
 * called by: filename12_equal
 */
int strnlen_12(char *a0) {
    int iVar1;
    int iVar2;

    iVar2 = 0;
    iVar1 = 0;
    do {
        if (*a0 == '\0') {
            return iVar1;
        }
        iVar2 = iVar2 + 1;
        iVar1 = iVar1 + 1;
        a0 = a0 + 1;
    } while (iVar2 < 0xc);
    return iVar1;
}

/*
 * filename12_equal  0x8c2004a0
 * 1 when the two names (at most 12 characters) are equal
 * called by: vmu_dir_find_file
 */
u32 filename12_equal(char *a0, char *a1) {
    int iVar1;
    int iVar2;
    iVar1 = strnlen_12(a0);
    iVar2 = strnlen_12(a1);
    if (iVar1 != iVar2) {
        return 0;
    }
    iVar2 = 0;
    if (0 < iVar1) {
        do {
            if (*a0 != *a1) {
                return 0;
            }
            iVar2 = iVar2 + 1;
            a1 = a1 + 1;
            a0 = a0 + 1;
        } while (iVar2 < iVar1);
    }
    return 1;
}

/*
 * vmu_dir_entry_unpack  0x8c2004ea
 * unpacks the directory entry a0 into a1: type, copy flag, name, date, start block, size and header offset
 * called by: alt_entry_2005dc, vmu_dir_find_file, vmu_dir_find_game_file
 */
u32 vmu_dir_entry_unpack(u8 *a0, int a1) {
    u8 bVar1;
    int *piVar2;
    u32 uVar3;
    u32 uVar4;
    u8 *pbVar5;
    u8 *pbVar6;

    pbVar5 = (u8 *)(a1 + 0x10);
    *(u32 *)(a1 + 4) = (u32)*a0;
    pbVar6 = a0 + 4;
    do {
        bVar1 = *pbVar6;
        pbVar6 = pbVar6 + 1;
        *pbVar5 = bVar1;
        pbVar5 = pbVar5 + 1;
    } while (pbVar5 < (u8 *)(a1 + 0x1c));
    pbVar5 = (u8 *)(a1 + 0x20);
    *(u8 *)(a1 + 0x1c) = 0;
    pbVar6 = a0 + 0x10;
    do {
        bVar1 = *pbVar6;
        pbVar6 = pbVar6 + 1;
        *pbVar5 = bVar1;
        piVar2 = 0x8c4783dc;
        pbVar5 = pbVar5 + 1;
    } while (pbVar5 < (u8 *)(a1 + 0x28));
    uVar3 = (**(code **)(g_8c4783dc + 0xc))(a0, 2, 1);
    *(u32 *)(a1 + 0xc) = uVar3 & 0xffff;
    uVar3 = (**(code **)(*piVar2 + 0xc))(a0, 0x18);
    *(u32 *)(a1 + 0x28) = uVar3 & 0xffff;
    *(u8 *)(a1 + 10) = a0[1];
    uVar4 = (**(code **)(*piVar2 + 0xc))(a0, 0x1a);
    *(short *)(a1 + 8) = (short)uVar4;
    return uVar4;
}

/*
 * alt_entry_2004f6  0x8c2004f6
 * probably an entry 12 bytes into 8c2004ea: it reads registers that code sets before it
 */
u32 alt_entry_2004f6(u32 unused_a0, int a1, u32 a2, u32 a3) {
    u8 uVar1;
    u8 bVar2;
    int *piVar3;
    u32 uVar4;
    u32 uVar5;
    u8 *puVar6;
    u8 *pbVar7;
    u8 *puVar8;
    u8 *pbVar9;
    u8 *unaff_r13;
    int unaff_r14;

    puVar6 = (u8 *)(unaff_r14 + 0x10);
    *(u32 *)(unaff_r14 + 4) = (u32)*unaff_r13;
    puVar8 = (u8 *)(a1 + 4);
    do {
        uVar1 = *puVar8;
        puVar8 = puVar8 + 1;
        *puVar6 = uVar1;
        puVar6 = puVar6 + 1;
    } while (puVar6 < (u8 *)(unaff_r14 + 0x1c));
    pbVar7 = (u8 *)(unaff_r14 + 0x20);
    *(u8 *)(unaff_r14 + 0x1c) = 0;
    pbVar9 = unaff_r13 + 0x10;
    do {
        bVar2 = *pbVar9;
        pbVar9 = pbVar9 + 1;
        *pbVar7 = bVar2;
        piVar3 = 0x8c4783dc;
        pbVar7 = pbVar7 + 1;
    } while (pbVar7 < (u8 *)(unaff_r14 + 0x28));
    uVar4 = (**(code **)(g_8c4783dc + 0xc))(unaff_r13, 2, a2, a3);
    *(u32 *)(unaff_r14 + 0xc) = uVar4 & 0xffff;
    uVar4 = (**(code **)(*piVar3 + 0xc))(unaff_r13, 0x18, a2, a3);
    *(u32 *)(unaff_r14 + 0x28) = uVar4 & 0xffff;
    *(u8 *)(unaff_r14 + 10) = unaff_r13[1];
    uVar5 = (**(code **)(*piVar3 + 0xc))(unaff_r13, 0x1a, a2, a3);
    *(short *)(unaff_r14 + 8) = (short)uVar5;
    return uVar5;
}

/*
 * vmu_dir_find_file  0x8c200566
 * finds the data (0x33) or game (0xcc) directory entry named a1 on drive a0 and copies it to a2
 * called by: bu_get_file_size_now, bu_is_exist_file_now, shinobi_input_1fdd44, shinobi_save_1fe646,
 * shinobi_save_1fe7aa, shinobi_save_1ff72e, shinobi_save_1ff844, shinobi_save_1ffa54 (+5 more)
 */
u32 vmu_dir_find_file(int a0, u32 a1, u32 a2) {
    int iVar1;
    int iVar2;
    int iVar3;
    u8 *a4;

    iVar2 = a0 * 0x148 + 0x8c4783e0;
    a4 = *(u8 **)(iVar2 + 0x28);
    iVar3 = 0;
    while (true) {
        if (*(int *)(*(int *)(iVar2 + 0x1c) + 0x30) <= iVar3) {
            return 0xffffffff;
        }
        if (((*a4 == 0x33) || (*a4 == 0xcc)) && (iVar1 = filename12_equal(a1, a4 + 4), iVar1 != 0))
            break;
        a4 = a4 + 0x20;
        iVar3 = iVar3 + 1;
    }
    vmu_dir_entry_unpack(a4, a2);
    return iVar3;
}

/*
 * vmu_dir_find_game_file  0x8c2005d6
 * scans the drive's 32-byte directory entries for type 0xcc (game file) and fills a1 from it; -1 if none
 * called by: bu_get_game_file_name_now, shinobi_save_1fe646
 */
u32 vmu_dir_find_game_file(int a0, u32 a1) {
    int ar6_00;
    u8 *ar4_00;
    int iVar1;

    ar6_00 = a0 * 0x148 + 0x8c4783e0;
    ar4_00 = *(u8 **)(ar6_00 + 0x28);
    iVar1 = 0;
    while (true) {
        if (*(int *)(*(int *)(ar6_00 + 0x1c) + 0x30) <= iVar1) {
            return 0xffffffff;
        }
        if ((u32)*ar4_00 == (int)0xcc)
            break;
        ar4_00 = ar4_00 + 0x20;
        iVar1 = iVar1 + 1;
    }
    vmu_dir_entry_unpack(ar4_00, a1);
    return iVar1;
}

/*
 * alt_entry_2005dc  0x8c2005dc
 * probably an entry 6 bytes into 8c2005d6: it reads registers that code sets before it
 */
u32 alt_entry_2005dc(u32 unused_a0, u32 a1) {
    int in_r3;
    int a6;
    u8 *a4;
    int iVar1;
    int in_MACL;

    a6 = in_MACL + in_r3;
    a4 = *(u8 **)(a6 + 0x28);
    iVar1 = 0;
    while (true) {
        if (*(int *)(*(int *)(a6 + 0x1c) + 0x30) <= iVar1) {
            return 0xffffffff;
        }
        if ((u32)*a4 == (int)0xcc)
            break;
        a4 = a4 + 0x20;
        iVar1 = iVar1 + 1;
    }
    vmu_dir_entry_unpack(a4, a1);
    return iVar1;
}

/*
 * vmu_dir_find_empty_entry  0x8c200614
 * index of the first directory entry whose type byte is 0 (free); -1 if none
 * called by: shinobi_save_1fe646, shinobi_save_1fe7aa
 */
u32 vmu_dir_find_empty_entry(int a0) {
    int iVar1;
    char *pcVar2;
    int iVar3;

    iVar3 = a0 * 0x148 + 0x8c4783e0;
    pcVar2 = *(char **)(iVar3 + 0x28);
    iVar1 = 0;
    while (true) {
        if (*(int *)(*(int *)(iVar3 + 0x1c) + 0x30) <= iVar1) {
            return 0xffffffff;
        }
        if (*pcVar2 == '\0')
            break;
        pcVar2 = pcVar2 + 0x20;
        iVar1 = iVar1 + 1;
    }
    return iVar1;
}

/*
 * shinobi_calc_200642  0x8c200642
 * area name: in the shinobi library code range; behaviour name: integer arithmetic on its arguments
 * called by: shinobi_save_200a00
 */
u32 shinobi_calc_200642(int a0) {
    u32 uVar1;
    int iVar2;

    iVar2 = a0 * 0x148 + 0x8c4783e0;
    uVar1 = (*(code *)(&vmu_block_read_retry))(*(u32 *)(*(int *)(iVar2 + 0x1c) + 8), *(u32 *)(iVar2 + 0x20));
    return uVar1;
}

/*
 * shinobi_calc_20065a  0x8c20065a
 * area name: in the shinobi library code range; behaviour name: integer arithmetic on its arguments
 * called by: alt_entry_20080e, shinobi_input_1ffdfa, shinobi_save_1fde30, shinobi_save_200226, shinobi_save_200346,
 * shinobi_save_2007f0
 */
u32 shinobi_calc_20065a(int a0) {
    u32 uVar1;
    int iVar2;

    iVar2 = a0 * 0x148 + 0x8c4783e0;
    uVar1 = (*(code *)(&vmu_block_write_retry))(*(u32 *)(*(int *)(iVar2 + 0x1c) + 8), *(u32 *)(iVar2 + 0x20));
    return uVar1;
}

/*
 * vmu_load_fat_like  0x8c200672
 * reads the drive's FAT blocks into its buffer, stopping at the first error
 * called by: shinobi_save_200a00
 */
u32 vmu_load_fat_like(int a0) {
    u8 *puVar1;
    int iVar2;
    int iVar3;
    int iVar4;
    int iVar5;
    u32 uVar6;

    puVar1 = (&vmu_block_read_retry);
    uVar6 = 1;
    iVar4 = a0 * 0x148 + 0x8c4783e0;
    iVar3 = *(int *)(*(int *)(iVar4 + 0x1c) + 0x10);
    iVar5 = 0;
    if (0 < iVar3) {
        do {
            iVar2 = (*(code *)puVar1)(a0, *(int *)(*(int *)(iVar4 + 0x1c) + 0xc) + iVar5,
                                      iVar5 * 0x200 + *(int *)(iVar4 + 0x24), uVar6);
            if (iVar2 < 0) {
                return iVar2;
            }
            iVar5 = iVar5 + 1;
        } while (iVar5 < iVar3);
    }
    return 0;
}

/*
 * alt_entry_200682  0x8c200682
 * probably an entry 16 bytes into 8c200672: it reads registers that code sets before it
 */
u32 alt_entry_200682(u32 unused_a0, u32 unused_a1, u32 unused_a2, u32 a3) {
    u8 *puVar1;
    int iVar2;
    int in_r3;
    u32 unaff_r11;
    int iVar3;
    int iVar4;
    int iVar5;
    int in_MACL;

    puVar1 = (&vmu_block_read_retry);
    iVar4 = in_MACL + in_r3;
    iVar3 = *(int *)(*(int *)(iVar4 + 0x1c) + 0x10);
    iVar5 = 0;
    if (0 < iVar3) {
        do {
            iVar2 = (*(code *)puVar1)(unaff_r11, *(int *)(*(int *)(iVar4 + 0x1c) + 0xc) + iVar5,
                                      iVar5 * 0x200 + *(int *)(iVar4 + 0x24), a3);
            if (iVar2 < 0) {
                return iVar2;
            }
            iVar5 = iVar5 + 1;
        } while (iVar5 < iVar3);
    }
    return 0;
}

/*
 * shinobi_save_2006dc  0x8c2006dc
 * area name: in the shinobi library code range; behaviour name: mostly calls save functions
 * called by: alt_entry_20080e, shinobi_save_2007f0
 */
u32 shinobi_save_2006dc(int a0) {
    int ar6_00;
    int iVar1;
    int ar6_01;
    int iVar2;
    int iVar3;
    int iVar4;

    ar6_00 = 0xfffa;
    iVar4 = 0;
    iVar3 = a0 * 0x148 + 0x8c4783e0;
    iVar2 = *(int *)(*(int *)(iVar3 + 0x1c) + 0x10);
    ar6_01 = 0xfffa + 5;
    if (0 < iVar2) {
        do {
            iVar1 = (*(code *)(&vmu_block_write_retry))(a0, *(int *)(*(int *)(iVar3 + 0x1c) + 0xc) + iVar4,
                                                        iVar4 * 0x200 + *(int *)(iVar3 + 0x24));
            if (iVar1 < 0) {
                vmu_drive_write_like(a0, *(int *)(*(int *)(iVar3 + 0x1c) + 0xc) + iVar4, ar6_01);
                return iVar1;
            }
            vmu_drive_write_like(a0, *(int *)(*(int *)(iVar3 + 0x1c) + 0xc) + iVar4, ar6_00);
            iVar4 = iVar4 + 1;
        } while (iVar4 < iVar2);
    }
    return 0;
}

/*
 * alt_entry_2006fa  0x8c2006fa
 * probably an entry 30 bytes into 8c2006dc: it reads registers that code sets before it
 */
u32 alt_entry_2006fa(u32 unused_a0, u32 unused_a1, u32 unused_a2, u32 a3) {
    int iVar1;
    int unaff_r8;
    int iVar2;
    u32 unaff_r12;
    int unaff_r13;
    int unaff_r14;

    iVar2 = *(int *)(*(int *)(unaff_r13 + 0x1c) + 0x10);
    if (0 < iVar2) {
        do {
            iVar1 =
                (*(code *)(&vmu_block_write_retry))(unaff_r12, *(int *)(*(int *)(unaff_r13 + 0x1c) + 0xc) + unaff_r14,
                                                    unaff_r14 * 0x200 + *(int *)(unaff_r13 + 0x24), a3);
            if (iVar1 < 0) {
                vmu_drive_write_like(unaff_r12, *(int *)(*(int *)(unaff_r13 + 0x1c) + 0xc) + unaff_r14, unaff_r8 + 5);
                return iVar1;
            }
            vmu_drive_write_like(unaff_r12, *(int *)(*(int *)(unaff_r13 + 0x1c) + 0xc) + unaff_r14, unaff_r8);
            unaff_r14 = unaff_r14 + 1;
        } while (unaff_r14 < iVar2);
    }
    return 0;
}

/*
 * vmu_fat_find_free_run  0x8c20075a
 * searches backwards for a run of free (0xfffc) FAT blocks as long as the root block's count and returns its first
 * block called by: alt_entry_20080e, shinobi_save_2007f0
 */
int vmu_fat_find_free_run(int a0) {
    u32 uVar1;
    int iVar2;
    u32 uVar3;
    int iVar4;
    int iVar5;
    int iVar6;
    int iVar7;

    uVar1 = 0xfffc;
    iVar4 = *(int *)(a0 * 0x148 + 0x8c4783e0 + 0x1c);
    iVar5 = *(int *)(iVar4 + 0x1c);
    iVar6 = *(int *)(iVar4 + 0x10);
    iVar4 = *(int *)(iVar4 + 0x20) + iVar5 + -1;
    do {
        iVar2 = vmu_fat_find_rev(a0, uVar1);
        if (iVar2 < 0) {
            return 0xffffffff;
        }
        iVar7 = 0;
        if (0 < iVar6) {
            do {
                uVar3 = vmu_drive_read_like(a0, iVar2 - iVar7);
                if ((uVar3 & 0xffff) != uVar1) {
                    iVar4 = (iVar2 - iVar7) + -1;
                    break;
                }
                iVar7 = iVar7 + 1;
            } while (iVar7 < iVar6);
        }
        if (iVar7 == iVar6) {
            return (iVar2 - iVar6) + 1;
        }
    } while (true);
}

/*
 * alt_entry_200772  0x8c200772
 * probably an entry 24 bytes into 8c20075a: it reads registers that code sets before it
 */
int alt_entry_200772(u32 unused_a0, int a1) {
    u32 ar5_00;
    int iVar1;
    u32 uVar2;
    int in_r3;
    int iVar3;
    int ar6_00;
    u32 unaff_r10;
    int iVar4;
    int iVar5;

    ar5_00 = 0xfffc;
    iVar3 = *(int *)(a1 + in_r3 + 0x1c);
    ar6_00 = *(int *)(iVar3 + 0x1c);
    iVar4 = *(int *)(iVar3 + 0x10);
    iVar3 = *(int *)(iVar3 + 0x20) + ar6_00 + -1;
    do {
        iVar1 = vmu_fat_find_rev(unaff_r10, ar5_00, ar6_00, iVar3);
        if (iVar1 < 0) {
            return 0xffffffff;
        }
        iVar5 = 0;
        if (0 < iVar4) {
            do {
                uVar2 = vmu_drive_read_like(unaff_r10, iVar1 - iVar5);
                if ((uVar2 & 0xffff) != ar5_00) {
                    iVar3 = (iVar1 - iVar5) + -1;
                    break;
                }
                iVar5 = iVar5 + 1;
            } while (iVar5 < iVar4);
        }
        if (iVar5 == iVar4) {
            return (iVar1 - iVar4) + 1;
        }
    } while (true);
}

/*
 * shinobi_save_2007f0  0x8c2007f0
 * area name: in the shinobi library code range; behaviour name: mostly calls save functions
 * called by: shinobi_save_1fde30, shinobi_save_1ff530, shinobi_save_1ff610, shinobi_save_200038, shinobi_save_200226,
 * shinobi_save_200346, vmu_file_close
 */
int shinobi_save_2007f0(int a0, int a1, int a2) {
    bool bVar1;
    int *piVar2;
    int ar6_00;
    int iVar3;
    int iVar4;
    u32 uVar5;

    ar6_00 = 0xfffa;
    piVar2 = 0x8c4783dc;
    uVar5 = 0;
    iVar4 = a0 * 0x148 + 0x8c4783e0;
    bVar1 = false;
    while (true) {
        iVar3 = shinobi_save_2006dc(a0);
        if (iVar3 == (int)0xffffff01) {
            return (int)(int)0xffffff01;
        }
        if (iVar3 != (int)0xffffff40)
            break;
        a2 = vmu_fat_find_free_run(a0);
        if (a2 < 0) {
            return (int)(int)0xffffff40;
        }
        a1 = 0x46;
        *(int *)(*(int *)(iVar4 + 0x1c) + 0xc) = a2;
        (**(code **)(*piVar2 + 0x10))(*(u32 *)(iVar4 + 0x20), uVar5);
        for (iVar3 = 0; bVar1 = true, iVar3 < *(int *)(*(int *)(iVar4 + 0x1c) + 0x10); iVar3 = iVar3 + 1) {
            a1 = *(int *)(*(int *)(iVar4 + 0x1c) + 0xc) + iVar3;
            a2 = ar6_00;
            vmu_drive_write_like(a0, a1, ar6_00);
        }
    }
    if (bVar1) {
        shinobi_calc_20065a(a0);
    }
    return 0;
}

/*
 * alt_entry_20080e  0x8c20080e
 * probably an entry 30 bytes into 8c2007f0: it reads registers that code sets before it
 */
int alt_entry_20080e(u32 unused_a0, int a1, int a2, u32 a3) {
    int *piVar1;
    int a6;
    int iVar2;
    int in_r3;
    int unaff_r9;
    int unaff_r10;
    u32 unaff_r12;
    int unaff_r13;
    int unaff_r14;
    int iVar3;

    a6 = 0xfffa;
    piVar1 = 0x8c4783dc;
    iVar3 = unaff_r14 + in_r3;
    while (true) {
        iVar2 = shinobi_save_2006dc(unaff_r12);
        if (iVar2 == (int)0xffffff01) {
            return (int)(int)0xffffff01;
        }
        if (iVar2 != (int)0xffffff40)
            break;
        a2 = vmu_fat_find_free_run(unaff_r12);
        if (a2 < 0) {
            return (int)(int)0xffffff40;
        }
        a1 = 0x46;
        *(int *)(*(int *)(iVar3 + 0x1c) + 0xc) = a2;
        (**(code **)(*piVar1 + 0x10))(*(u32 *)(iVar3 + 0x20), 0x46, a2, a3);
        for (iVar2 = unaff_r10; unaff_r13 = unaff_r9, iVar2 < *(int *)(*(int *)(iVar3 + 0x1c) + 0x10);
             iVar2 = iVar2 + 1) {
            a1 = *(int *)(*(int *)(iVar3 + 0x1c) + 0xc) + iVar2;
            a2 = a6;
            vmu_drive_write_like(unaff_r12, a1, a6);
        }
    }
    if (unaff_r13 != 0) {
        shinobi_calc_20065a(unaff_r12);
    }
    return 0;
}

/*
 * vmu_fat_find  0x8c200890
 * last block of drive a0 whose map entry (drive operation +0xc) is a1; -1 if none
 * called by: alt_entry_1febe6, alt_entry_200900, shinobi_save_200038, vmu_fat_alloc_block, vmu_file_write_next_block
 */
int vmu_fat_find(int a0, u32 a1, u32 a2, u32 a3) {
    int *piVar1;
    u32 uVar2;
    int iVar3;
    int iVar4;

    piVar1 = 0x8c4783dc;
    iVar4 = a0 * 0x148 + 0x8c4783e0;
    iVar3 = *(int *)(*(int *)(iVar4 + 0x1c) + 0x30);
    do {
        iVar3 = iVar3 + -1;
        if (iVar3 < 0) {
            return 0xffffffff;
        }
        uVar2 = (**(code **)(*piVar1 + 0xc))(*(u32 *)(iVar4 + 0x24), iVar3 * 2, a2, a3);
    } while ((uVar2 & 0xffff) != (u32)(u16)a1);
    return iVar3;
}

/*
 * vmu_fat_alloc_block  0x8c2008f4
 * finds a free FAT block, marking blocks that fail the check as bad (0xfffa) and retrying; -1 when full
 * called by: alt_entry_1febe6, vmu_file_write_next_block
 */
u32 vmu_fat_alloc_block(u32 a0, u32 unused_a1, int a2, u32 a3) {
    int ar5_00;
    int ar5_01;
    int iVar1;
    int ar6_00;

    ar5_00 = 0xfffc;
    ar6_00 = 0xfffc + -2;
    while (true) {
        ar5_01 = vmu_fat_find(a0, ar5_00, a2, a3);
        if (ar5_01 < 0) {
            return 0xffffffff;
        }
        iVar1 = shinobi_save_20093a(a0, ar5_01);
        if (-1 < iVar1)
            break;
        a2 = ar6_00;
        vmu_drive_write_like(a0, ar5_01, ar6_00);
    }
    return ar5_01;
}

/*
 * alt_entry_200900  0x8c200900
 * probably an entry 12 bytes into 8c2008f4: it reads registers that code sets before it
 */
u32 alt_entry_200900(u32 unused_a0, u32 unused_a1, int a2, u32 a3) {
    int a5;
    int iVar1;
    int unaff_r11;
    u32 unaff_r13;

    while (true) {
        a5 = vmu_fat_find(unaff_r13, unaff_r11, a2, a3);
        if (a5 < 0) {
            return 0xffffffff;
        }
        iVar1 = shinobi_save_20093a(unaff_r13, a5);
        if (-1 < iVar1)
            break;
        a2 = unaff_r11 + -2;
        vmu_drive_write_like(unaff_r13, a5, unaff_r11 + -2);
    }
    return a5;
}

/*
 * shinobi_save_20093a  0x8c20093a
 * area name: in the shinobi library code range; behaviour name: mostly calls save functions
 * called by: alt_entry_200900, bu_get_free_blocks_now, vmu_fat_alloc_block
 */
u32 shinobi_save_20093a(int a0, u32 a1) {
    int *piVar1;
    u8 *pbVar2;
    u32 uVar3;
    int iVar4;
    int ar5_00;
    u32 uVar5;

    piVar1 = 0x8c4783dc;
    ar5_00 = 0;
    uVar5 = 0xfffa;
    iVar4 = a0 * 0x148 + 0x8c4783e0;
    while (true) {
        if (*(int *)(*(int *)(iVar4 + 0x1c) + 0x30) <= ar5_00) {
            return a1 & 0xffff;
        }
        pbVar2 = (u8 *)vmu_dir_entry(a0, ar5_00);
        if (((*pbVar2 == 0x33) || (*pbVar2 == 0xcc)) &&
            (uVar3 = (**(code **)(*piVar1 + 0xc))(2, uVar5), (a1 & 0xffff) == (uVar3 & 0xffff)))
            break;
        ar5_00 = ar5_00 + 1;
    }
    return 0xffffffff;
}

/*
 * alt_entry_20094e  0x8c20094e
 * probably an entry 20 bytes into 8c20093a: it reads registers that code sets before it
 */
u32 alt_entry_20094e(u32 unused_a0, u32 a1, u32 a2, u32 a3) {
    int *piVar1;
    u8 *a4;
    u32 uVar2;
    int in_r3;
    u32 unaff_r12;
    int unaff_r14;
    int in_MACL;

    piVar1 = 0x8c4783dc;
    while (true) {
        if (*(int *)(*(int *)(in_MACL + in_r3 + 0x1c) + 0x30) <= unaff_r14) {
            return a1 & 0xffff;
        }
        a4 = (u8 *)vmu_dir_entry(unaff_r12, unaff_r14);
        if (((*a4 == 0x33) || (*a4 == 0xcc)) &&
            (uVar2 = (**(code **)(*piVar1 + 0xc))(a4, 2, a2, a3), (a1 & 0xffff) == (uVar2 & 0xffff)))
            break;
        unaff_r14 = unaff_r14 + 1;
    }
    return 0xffffffff;
}

/*
 * vmu_drive_write_like  0x8c20099e
 * calls the drive's operation +0x10 for block a1 when it is within the card (probably a block write)
 * called by: alt_entry_1febe6, alt_entry_2006fa, alt_entry_20080e, alt_entry_200900, shinobi_save_1fde30,
 * shinobi_save_1fecf2, shinobi_save_200038, shinobi_save_200226 (+6 more)
 */
int vmu_drive_write_like(int a0, int a1, u32 a2) {
    u32 uVar1;
    int iVar2;

    iVar2 = a0 * 0x148 + 0x8c4783e0;
    if (a1 <= **(int **)(iVar2 + 0x1c)) {
        /* WARNING: Could not recover jumptable at 0x8c2009c6. Too many branches */
        /* WARNING: Treating indirect jump as call */
        uVar1 = (**(code **)(g_8c4783dc + 0x10))(*(u32 *)(iVar2 + 0x24), a1 << 1);
        return uVar1;
    }
    return a1;
}

/*
 * vmu_drive_read_like  0x8c2009d0
 * calls the drive's operation +0xc for block a1 (probably a block read)
 * called by: alt_entry_1fffd8, alt_entry_2001d0, alt_entry_200772, alt_entry_20136c, bu_get_free_blocks_now,
 * shinobi_input_1fe466, shinobi_save_1fe646, shinobi_save_1fecf2 (+11 more)
 */
u32 vmu_drive_read_like(int a0, int a1) {
    u32 uVar1;

    /* WARNING: Could not recover jumptable at 0x8c2009ec. Too many branches */
    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(g_8c4783dc + 0xc))(*(u32 *)(a0 * 0x148 + 0x8c4783e0 + 0x24), a1 << 1);
    return uVar1;
}

/*
 * shinobi_save_200a00  0x8c200a00
 * area name: in the shinobi library code range; behaviour name: mostly calls save functions
 * called by: shinobi_save_1fdab0, shinobi_save_1fdc80, shinobi_save_1fde30
 */
int shinobi_save_200a00(int a0, u32 a1) {
    int iVar1;
    int iVar2;

    iVar2 = a0 * 0x148 + 0x8c4783e0;
    *(u32 *)(0x8c478e20 + a0 * 4) = 0;
    if ((*(char *)(iVar2 + 10) != '\0') || (iVar1 = shinobi_calc_200642(a0), -1 < iVar1)) {
        iVar1 = shinobi_input_1ffcc2(a0, a1);
        if (-1 < iVar1) {
            if (((*(char *)(iVar2 + 0xb) == '\0') && (iVar1 = vmu_load_fat_like(a0), iVar1 < 0)) ||
                ((*(char *)(iVar2 + 0xc) == '\0' && (iVar1 = vmu_read_block_chain(a0), iVar1 < 0)))) {
                if (iVar1 != 0xffff0000) {
                    return iVar1;
                }
                *(u32 *)(0x8c478e20 + a0 * 4) = 1;
            } else {
                *(u8 *)(iVar2 + 10) = 1;
                *(u8 *)(iVar2 + 0xb) = 1;
                *(u8 *)(iVar2 + 0xc) = 1;
            }
        }
        iVar1 = 0;
    }
    return iVar1;
}

/*
 * vmu_dir_entry  0x8c200a84
 * address of 32-byte directory entry a1 of memory-card drive a0 (drives are 0x148 bytes at 0x8c4783e0)
 * called by: alt_entry_20094e, shinobi_input_1ff110, shinobi_input_1ff336, shinobi_save_1fe646, shinobi_save_1fe7aa,
 * shinobi_save_1ff72e, shinobi_save_1ff844, shinobi_save_1ffa54 (+6 more)
 */
int vmu_dir_entry(int a0, int a1) {
    return a1 * 0x20 + *(int *)(a0 * 0x148 + 0x8c4783e0 + 0x28);
}

/*
 * vmu_fat_mark  0x8c200a9c
 * marks block a1 in drive a0's map at +0x48
 * called by: shinobi_save_1ff72e, shinobi_save_1ff844, shinobi_save_1ffa54, vmu_file_close, vmu_file_delete
 */
int vmu_fat_mark(int a0, int a1) {
    int iVar1;

    iVar1 = a0 * 0x148 + 0x8c4783e0 + 0x48;
    *(u8 *)((a1 >> 4) + iVar1) = 1;
    return iVar1;
}

/*
 * vmu_handle_alloc  0x8c200ab6
 * claims a free 0x48-byte file handle at 0x8c47d0a0; error -249 when none is free
 * called by: shinobi_save_1fe646, shinobi_save_1fe7aa, vmu_file_open
 */
u32 vmu_handle_alloc(void) {
    char *pcVar1;
    int iVar2;

    iVar2 = 0;
    pcVar1 = 0x8c47d0a0;
    while (true) {
        if (g_8c47d2e0 <= iVar2) {
            g_8c47d2e4 = (int)(int)0xffffff07;
            return 0;
        }
        if (*pcVar1 == '\0')
            break;
        pcVar1 = pcVar1 + 0x48;
        iVar2 = iVar2 + 1;
    }
    *pcVar1 = '\x01';
    *(int *)(pcVar1 + 0xc) = iVar2;
    return pcVar1;
}

/*
 * shinobi_calc_200ae4  0x8c200ae4
 * area name: in the shinobi library code range; behaviour name: integer arithmetic on its arguments
 * called by: vmu_file_close, vmu_file_open
 */
u32 shinobi_calc_200ae4(void) {
    u32 uVar1;

    uVar1 = (g_8c013ff8)(0, 0x48);
    return uVar1;
}

/*
 * ret_const_0_200aec  0x8c200aec
 * called by: bu_get_file_size_now, shinobi_save_1fe646, shinobi_save_1fe7aa, shinobi_save_1ff530, shinobi_save_1ff610,
 * shinobi_save_1ff72e, shinobi_save_1ff844, shinobi_save_1ffa54 (+2 more)
 */
u32 ret_const_0_200aec(void) {
    return 0;
}

/*
 * vmu_file_check_chain  0x8c200b10
 * checks that file a1's FAT chain on port a0 has the right length, ends with 0xfffa and has no free or out-of-range
 * links called by: shinobi_save_2014e6, vmu_file_delete, vmu_file_get_block_list, vmu_file_open
 */
int vmu_file_check_chain(int a0, u32 a1) {
    int iVar1;
    u32 uVar2;
    int iVar3;
    u32 a5;
    u8 auStack_40[12];
    u32 uStack_34;
    int iStack_18;
    iVar3 = a0 * 0x148 + 0x8c4783e0;
    iVar1 = vmu_dir_find_file(a0, a1, auStack_40);
    if (iVar1 < 0) {
        iVar1 = (int)(int)0xffffff05;
    } else {
        vmu_dir_entry(a0, iVar1);
        if ((int)uStack_34 < *(int *)(*(int *)(iVar3 + 0x1c) + 0x30)) {
            a5 = uStack_34;
            for (iVar1 = 0; iVar1 < iStack_18; iVar1 = iVar1 + 1) {
                uVar2 = vmu_drive_read_like(a0, a5);
                uVar2 = uVar2 & 0xffff;
                if (iVar1 == iStack_18 + -1) {
                    if (uVar2 != 0xfffa)
                        goto LAB_8c200b80;
                } else if ((((uVar2 == a5) || (uVar2 == 0xfffa)) || (uVar2 == 0xfffc)) ||
                           ((uVar2 == 0xffff || (*(int *)(*(int *)(iVar3 + 0x1c) + 0x30) <= (int)uVar2))))
                    goto LAB_8c200b80;
                a5 = uVar2;
            }
            iVar1 = 0;
        } else {
        LAB_8c200b80:
            iVar1 = (int)(int)0xffffff41;
        }
    }
    return iVar1;
}

/*
 * int_to_bcd  0x8c200ba0
 * two decimal digits to packed BCD
 * called by: alt_entry_200c08, date_to_bcd8
 */
int int_to_bcd(u32 a0) {
    int iVar1;
    int iVar2;
    u32 d;

    d = 10;
    iVar1 = libgcc_divide_helper_01051c(a0, 10);
    iVar2 = libgcc_divide_helper_0106dc(a0, d);
    return iVar1 * 0x10 + iVar2;
}

/*
 * bcd_to_int  0x8c200bc4
 * two packed BCD digits to an integer
 * called by: alt_entry_200c8a, date_from_bcd8
 */
int bcd_to_int(u32 a0) {
    return (a0 >> 4) * 10 + (a0 & 0xf);
}

/*
 * date_to_bcd8  0x8c200bfc
 * packs a date (u16 year, month, day, hour, minute, second, weekday) into 8 BCD bytes: century, year, month, day, hour,
 * minute, second, weekday code called by: shinobi_save_1fde30, shinobi_save_1ff844
 */
u32 date_to_bcd8(u8 *a0, int a1, u32 a2) {
    u32 uVar1;
    u32 uVar2;
    uVar1 = libgcc_divide_helper_010468((u32) * (u16 *)a1, 100);
    uVar1 = int_to_bcd(uVar1);
    *a0 = (char)uVar1;
    uVar1 = libgcc_divide_helper_010614((u32) * (u16 *)a1, 100);
    uVar1 = int_to_bcd(uVar1);
    a0[1] = (char)uVar1;
    uVar1 = int_to_bcd((u32) * (u8 *)(a1 + 2));
    a0[2] = (char)uVar1;
    uVar1 = int_to_bcd((u32) * (u8 *)(a1 + 3));
    a0[3] = (char)uVar1;
    uVar1 = int_to_bcd((u32) * (u8 *)(a1 + 4));
    a0[4] = (char)uVar1;
    uVar1 = int_to_bcd((u32) * (u8 *)(a1 + 5));
    a0[5] = (char)uVar1;
    uVar1 = int_to_bcd((u32) * (u8 *)(a1 + 6));
    a0[6] = (char)uVar1;
    uVar2 = *(u8 *)(a1 + 7) & 7;
    a0[7] = (&g_8c26d210)[uVar2];
    return uVar2;
}

/*
 * alt_entry_200c08  0x8c200c08
 * probably an entry 12 bytes into 8c200bfc: it reads registers that code sets before it
 */
u32 alt_entry_200c08(void) {
    u32 uVar1;
    u32 uVar2;
    u8 *unaff_r8;
    u16 *unaff_r13;
    int unaff_r14;

    uVar1 = libgcc_divide_helper_010468((u32)*unaff_r13, 100);
    uVar1 = int_to_bcd(uVar1);
    *unaff_r8 = (char)uVar1;
    uVar1 = libgcc_divide_helper_010614((u32)*unaff_r13, 100);
    uVar1 = int_to_bcd(uVar1);
    *(char *)(unaff_r14 + 1) = (char)uVar1;
    uVar1 = int_to_bcd((u32)(u8)unaff_r13[1]);
    *(char *)(unaff_r14 + 2) = (char)uVar1;
    uVar1 = int_to_bcd((u32) * (u8 *)((int)unaff_r13 + 3));
    *(char *)(unaff_r14 + 3) = (char)uVar1;
    uVar1 = int_to_bcd((u32)(u8)unaff_r13[2]);
    *(char *)(unaff_r14 + 4) = (char)uVar1;
    uVar1 = int_to_bcd((u32) * (u8 *)((int)unaff_r13 + 5));
    *(char *)(unaff_r14 + 5) = (char)uVar1;
    uVar1 = int_to_bcd((u32)(u8)unaff_r13[3]);
    *(char *)(unaff_r14 + 6) = (char)uVar1;
    uVar2 = *(u8 *)((int)unaff_r13 + 7) & 7;
    *(u8 *)(unaff_r14 + 7) = (&g_8c26d210)[uVar2];
    return uVar2;
}

/*
 * date_from_bcd8  0x8c200c82
 * unpacks 8 BCD date bytes (century, year, ... weekday) into the u16-year date record
 * called by: shinobi_uses_bu_get_free_blocks_now_1fe236, shinobi_uses_maple_device_ready_1ff95a
 */
int date_from_bcd8(short *a0, u8 *a1) {
    char cVar1;
    u32 uVar2;
    u32 uVar3;
    uVar2 = bcd_to_int((u32)*a1);
    uVar3 = bcd_to_int((u32)a1[1]);
    *a0 = (short)uVar2 * 100 + (short)uVar3;
    uVar2 = bcd_to_int((u32)a1[2]);
    *(char *)(a0 + 1) = (char)uVar2;
    uVar2 = bcd_to_int((u32)a1[3]);
    *(char *)((int)a0 + 3) = (char)uVar2;
    uVar2 = bcd_to_int((u32)a1[4]);
    *(char *)(a0 + 2) = (char)uVar2;
    uVar2 = bcd_to_int((u32)a1[5]);
    *(char *)((int)a0 + 5) = (char)uVar2;
    uVar2 = bcd_to_int((u32)a1[6]);
    *(char *)(a0 + 3) = (char)uVar2;
    cVar1 = (&g_8c26d218)[a1[7] & 7];
    *(char *)((int)a0 + 7) = cVar1;
    return (int)cVar1;
}

/*
 * alt_entry_200c8a  0x8c200c8a
 * probably an entry 8 bytes into 8c200c82: it reads registers that code sets before it
 */
int alt_entry_200c8a(void) {
    char cVar1;
    u32 uVar2;
    u32 uVar3;
    short *unaff_r13;
    u8 *unaff_r14;

    uVar2 = bcd_to_int((u32)*unaff_r14);
    uVar3 = bcd_to_int((u32)unaff_r14[1]);
    *unaff_r13 = (short)uVar2 * 100 + (short)uVar3;
    uVar2 = bcd_to_int((u32)unaff_r14[2]);
    *(char *)(unaff_r13 + 1) = (char)uVar2;
    uVar2 = bcd_to_int((u32)unaff_r14[3]);
    *(char *)((int)unaff_r13 + 3) = (char)uVar2;
    uVar2 = bcd_to_int((u32)unaff_r14[4]);
    *(char *)(unaff_r13 + 2) = (char)uVar2;
    uVar2 = bcd_to_int((u32)unaff_r14[5]);
    *(char *)((int)unaff_r13 + 5) = (char)uVar2;
    uVar2 = bcd_to_int((u32)unaff_r14[6]);
    *(char *)(unaff_r13 + 3) = (char)uVar2;
    cVar1 = (&g_8c26d218)[unaff_r14[7] & 7];
    *(char *)((int)unaff_r13 + 7) = cVar1;
    return (int)cVar1;
}

/*
 * vmu_root_block_validate  0x8c200cf4
 * checks the drive's root block fields for consistency and sets the size class (0..3 for 256..2048 blocks); -1 when
 * invalid called by: shinobi_input_1fdbaa, shinobi_save_1fdab0, shinobi_save_1fde30
 */
u32 vmu_root_block_validate(int a0) {
    int iVar1;
    int *piVar2;

    piVar2 = *(int **)(a0 + 0x1c);
    if ((((((0 < *piVar2) && (*piVar2 <= (int)0x7ff)) && (*piVar2 == piVar2[2])) &&
          ((-1 < piVar2[3] && (piVar2[3] < *piVar2)))) &&
         (((-1 < piVar2[5] && ((piVar2[5] < *piVar2 && (-1 < piVar2[0xd])))) && (piVar2[0xd] <= *piVar2)))) &&
        (((-1 < piVar2[0xe] && (piVar2[0xe] <= *piVar2)) &&
          ((*(int *)(g_8c4783dc + 8) != 0 ||
            ((piVar2[4] <= (int)*(short *)(a0 + 0x10) && (piVar2[6] <= (int)*(short *)(a0 + 0x12))))))))) {
        iVar1 = *piVar2;
        if (iVar1 == 0xff) {
            *(u32 *)(a0 + 4) = 0;
        } else if (iVar1 == 0x1ff) {
            *(u32 *)(a0 + 4) = 1;
        } else if (iVar1 == 0x3ff) {
            *(u32 *)(a0 + 4) = 2;
        } else {
            if (iVar1 != 0x7ff) {
                return 0xffffffff;
            }
            *(u32 *)(a0 + 4) = 3;
        }
        return 0;
    }
    return 0xffffffff;
}

/*
 * vmu_read_blocks_to  0x8c200d94
 * reads every block of the drive's area into the buffer a1, 512 bytes each; stops at the first error
 */
u32 vmu_read_blocks_to(int a0, int a1) {
    int iVar1;
    int ar5_00;
    int iVar2;

    iVar2 = a0 * 0x148;
    *(u32 *)(iVar2 + 0x8c478410) = 1;
    *(u32 *)(iVar2 + 0x8c478414) = *(u32 *)(&g_8c273ab0 + *(int *)(iVar2 + 0x8c4783e4) * 0x50);
    ar5_00 = 0;
    while (true) {
        if (**(int **)(&g_8c4783fc + iVar2) + 1 <= ar5_00) {
            return 0;
        }
        iVar1 = vmu_block_read_retry(a0, ar5_00, a1);
        if (iVar1 < 0)
            break;
        ar5_00 = ar5_00 + 1;
        a1 = a1 + 0x200;
    }
    return iVar1;
}

/*
 * alt_entry_200db0  0x8c200db0
 * probably an entry 28 bytes into 8c200d94: it reads registers that code sets before it
 */
u32 alt_entry_200db0(u32 unused_a0, u32 unused_a1, u32 unused_a2, u32 a3) {
    u8 *puVar1;
    int in_r0;
    int iVar2;
    u32 in_r2;
    int in_r3;
    u32 unaff_r10;
    int iVar3;
    int unaff_r12;
    int unaff_r13;
    int iVar4;
    int a5;

    puVar1 = (&vmu_block_read_retry);
    iVar4 = unaff_r13 + in_r3;
    iVar3 = (int)0x200;
    *(u32 *)(iVar4 + 0x30) = in_r2;
    *(u32 *)(iVar4 + 0x34) = *(u32 *)(in_r0 + *(int *)(iVar4 + 4) * 0x50);
    a5 = 0;
    while (true) {
        if (**(int **)(iVar4 + 0x1c) + 1 <= a5) {
            return 0;
        }
        iVar2 = (*(code *)puVar1)(unaff_r10, a5, unaff_r12, a3);
        if (iVar2 < 0)
            break;
        a5 = a5 + 1;
        unaff_r12 = unaff_r12 + iVar3;
    }
    return iVar2;
}

/*
 * vmu_write_blocks_from  0x8c200e1e
 * writes every block of the drive's area from the buffer a1, 512 bytes each; stops at the first error
 */
u32 vmu_write_blocks_from(int a0, int a1, u32 unused_a2, u32 a3) {
    int iVar1;
    int ar5_00;
    int iVar2;

    iVar2 = a0 * 0x148;
    *(u32 *)(iVar2 + 0x8c478410) = 1;
    *(u32 *)(iVar2 + 0x8c478414) = *(u32 *)(&g_8c273ab4 + *(int *)(iVar2 + 0x8c4783e4) * 0x50);
    ar5_00 = 0;
    while (true) {
        if (**(int **)(&g_8c4783fc + iVar2) + 1 <= ar5_00) {
            return 0;
        }
        iVar1 = vmu_block_write_retry(a0, ar5_00, a1, a3);
        if (iVar1 < 0)
            break;
        ar5_00 = ar5_00 + 1;
        a1 = a1 + 0x200;
    }
    return iVar1;
}

/*
 * alt_entry_200e3a  0x8c200e3a
 * probably an entry 28 bytes into 8c200e1e: it reads registers that code sets before it
 */
u32 alt_entry_200e3a(u32 unused_a0, u32 unused_a1, u32 unused_a2, u32 a3) {
    u8 *puVar1;
    int in_r0;
    int iVar2;
    u32 in_r2;
    int in_r3;
    u32 unaff_r10;
    int iVar3;
    int unaff_r12;
    int unaff_r13;
    int iVar4;
    int a5;

    puVar1 = (&vmu_block_write_retry);
    iVar4 = unaff_r13 + in_r3;
    iVar3 = (int)0x200;
    *(u32 *)(iVar4 + 0x30) = in_r2;
    *(u32 *)(iVar4 + 0x34) = *(u32 *)(in_r0 + *(int *)(iVar4 + 4) * 0x50);
    a5 = 0;
    while (true) {
        if (**(int **)(iVar4 + 0x1c) + 1 <= a5) {
            return 0;
        }
        iVar2 = (*(code *)puVar1)(unaff_r10, a5, unaff_r12, a3);
        if (iVar2 < 0)
            break;
        a5 = a5 + 1;
        unaff_r12 = unaff_r12 + iVar3;
    }
    return iVar2;
}

/*
 * vmu_file_load  0x8c200e8a
 * opens file a1 on port a0, reads a3 blocks (or the whole file when a3 is 0) into a2 and closes it
 */
u32 vmu_file_load(int a0, u32 a1, int a2, u32 a3) {
    u32 uVar1;
    int iVar2;
    u32 *ar6_00;
    int iVar3;
    u32 uVar4;
    u32 uVar5;
    u32 uStack_24;
    u32 uStack_20;
    int iStack_1c;

    ar6_00 = &uStack_24;
    uVar5 = a3;
    uStack_20 = a1;
    iStack_1c = a2;
    if (((a3 != 0) || (uVar1 = bu_get_file_size_now(a0, a1, a2, 0), uVar5 = uVar1, -1 < (int)uVar1)) &&
        (uVar1 = vmu_file_open(a0, uStack_20, &uStack_24), -1 < (int)uVar1)) {
        uVar4 = 0;
        iVar2 = a0 * 0x148 + 0x8c4783e0;
        *(u32 *)(iVar2 + 0x30) = 1;
        *(u32 *)(iVar2 + 0x34) = uVar5;
        if (uVar5 != 0) {
            iVar3 = (int)0x200;
            iVar2 = iStack_1c;
            do {
                uVar1 = vmu_file_read_next_block(uStack_24, iVar2);
                if ((int)uVar1 < 0)
                    goto LAB_8c200f12;
                uVar4 = uVar4 + 1;
                iVar2 = iVar2 + iVar3;
            } while (uVar4 < uVar5);
        }
        uVar1 = 0;
    LAB_8c200f12:
        vmu_file_close(uStack_24, 0, ar6_00, a3);
    }
    return uVar1;
}

/*
 * shinobi_save_200f2c  0x8c200f2c
 * area name: in the shinobi library code range; behaviour name: mostly calls save functions
 */
u32 shinobi_save_200f2c(int a0, u32 a1, int a2, u32 a3, u32 s0, u32 s4) {
    u32 uVar1;
    int iVar2;
    int *ar7_00;
    u32 uVar3;
    int iStack_20;
    int iStack_1c;

    ar7_00 = &iStack_20;
    uVar3 = a3;
    iStack_1c = a2;
    uVar1 = bu_get_free_blocks_now(a0, 0);
    iVar2 = bu_get_file_size_now(a0, a1, a2, uVar3);
    if (0 < iVar2) {
        uVar1 = uVar1 + iVar2;
    }
    if (-1 < (int)uVar1) {
        if (uVar1 < a3) {
            uVar1 = 0xffffff04;
        } else if ((s4 & 0x80000000) == 0) {
            uVar1 = shinobi_save_1fe7aa(a0, a1, s0, &iStack_20);
            if (-1 < (int)uVar1) {
                iVar2 = a0 * 0x148;
                uVar3 = 0;
                *(char *)(iStack_20 + 1) = (char)s4;
                *(u32 *)(iVar2 + 0x8c478410) = 1;
                *(u32 *)(iVar2 + 0x8c478414) = *(int *)(&g_8c273aa4 + *(int *)(iVar2 + 0x8c4783e4) * 0x50) + a3;
                iVar2 = iStack_1c;
                if (a3 != 0) {
                    do {
                        uVar1 = vmu_file_write_next_block(iStack_20, iVar2);
                        if ((int)uVar1 < 0)
                            goto LAB_8c20100a;
                        uVar3 = uVar3 + 1;
                        iVar2 = iVar2 + 0x200;
                    } while (uVar3 < a3);
                }
                uVar1 = 0;
            LAB_8c20100a:
                vmu_file_close(iStack_20, 0, s0, ar7_00);
            }
        } else {
            uVar1 = shinobi_save_20103c(a0, a1, iStack_1c, a3);
        }
    }
    return uVar1;
}

/*
 * shinobi_save_20103c  0x8c20103c
 * area name: in the shinobi library code range; behaviour name: mostly calls save functions
 * called by: shinobi_save_200f2c
 */
int shinobi_save_20103c(int a0, u32 a1, int a2, u32 a3, u8 *s0, u32 s4) {
    int iVar1;
    int *ar6_00;
    int *ar7_00;
    int ar5_00;
    u32 uVar2;
    int iVar3;
    int iStack_2c;
    u32 uStack_28;
    int iStack_24;

    ar7_00 = &iStack_2c;
    ar6_00 = &iStack_2c;
    uStack_28 = a1;
    iStack_24 = a2;
    iVar1 = shinobi_save_1fe7aa(a0, a1, s0, &iStack_2c);
    if (-1 < iVar1) {
        iVar1 = a0 * 0x148;
        uVar2 = 0;
        *(u8 *)(iStack_2c + 1) = (u8)s4;
        *(u32 *)(iVar1 + 0x8c478410) = 1;
        *(u32 *)(iVar1 + 0x8c478414) = a3 * 2 + *(int *)(&g_8c273aa4 + *(int *)(iVar1 + 0x8c4783e4) * 0x50);
        iVar3 = iStack_24;
        if (a3 != 0) {
            do {
                iVar1 = vmu_file_write_next_block(iStack_2c, iVar3);
                if (iVar1 < 0)
                    goto LAB_8c20110e;
                uVar2 = uVar2 + 1;
                iVar3 = iVar3 + 0x200;
            } while (uVar2 < a3);
        }
        vmu_file_close(iStack_2c, 0, s0, ar7_00);
        iVar1 = vmu_file_open(a0, uStack_28, &iStack_2c);
        if (-1 < iVar1) {
            uVar2 = 0;
            ar5_00 = a0 * 0x800 + 0x8c478e40;
            iVar3 = iStack_24;
            if (a3 != 0) {
                do {
                    iVar1 = vmu_file_read_next_block(iStack_2c, ar5_00);
                    s0 = (u8 *)ar6_00;
                    if (iVar1 < 0)
                        goto LAB_8c20110e;
                    iVar1 = cmp_512_bytes(ar5_00, iVar3);
                    if (iVar1 != 0) {
                        iVar1 = -0xf0;
                        s0 = (u8 *)ar6_00;
                        goto LAB_8c20110e;
                    }
                    uVar2 = uVar2 + 1;
                    iVar3 = iVar3 + 0x200;
                } while (uVar2 < a3);
            }
            iVar1 = 0;
            s0 = (u8 *)ar6_00;
        LAB_8c20110e:
            vmu_file_close(iStack_2c, 0, s0, ar7_00);
        }
    }
    return iVar1;
}

/*
 * shinobi_save_20112c  0x8c20112c
 * area name: in the shinobi library code range; behaviour name: mostly calls save functions
 */
u32 shinobi_save_20112c(int a0, u32 a1, int a2, u32 a3, u32 s0, u32 s4) {
    u32 uVar1;
    int *ar7_00;
    u32 uVar2;
    int iVar3;
    int iStack_24;
    int iStack_20;
    u32 uStack_1c;

    ar7_00 = &iStack_24;
    iStack_20 = a2;
    uStack_1c = a1;
    uVar1 = bu_get_free_blocks_now(a0, 1);
    if (-1 < (int)uVar1) {
        if (uVar1 < a3) {
            uVar1 = 0xffffff04;
        } else if ((s4 & 0x80000000) == 0) {
            uVar1 = shinobi_save_1fe646(a0, uStack_1c, s0, &iStack_24);
            if (-1 < (int)uVar1) {
                iVar3 = a0 * 0x148;
                uVar2 = 0;
                *(char *)(iStack_24 + 1) = (char)s4;
                *(u32 *)(iVar3 + 0x8c478410) = 1;
                *(u32 *)(iVar3 + 0x8c478414) = *(int *)(&g_8c273aa4 + *(int *)(iVar3 + 0x8c4783e4) * 0x50) + a3;
                iVar3 = iStack_20;
                if (a3 != 0) {
                    do {
                        uVar1 = shinobi_save_1fecf2(iStack_24, iVar3, s0, ar7_00);
                        if ((int)uVar1 < 0)
                            goto LAB_8c201208;
                        uVar2 = uVar2 + 1;
                        iVar3 = iVar3 + 0x200;
                    } while (uVar2 < a3);
                }
                uVar1 = 0;
            LAB_8c201208:
                vmu_file_close(iStack_24, 0, s0, ar7_00);
            }
        } else {
            uVar1 = shinobi_save_201240(a0, uStack_1c, iStack_20, a3);
        }
    }
    return uVar1;
}

/*
 * shinobi_save_201240  0x8c201240
 * area name: in the shinobi library code range; behaviour name: mostly calls save functions
 * called by: shinobi_save_20112c
 */
int shinobi_save_201240(int a0, u32 a1, int a2, u32 a3, u8 *s0, u32 s4) {
    int iVar1;
    int *ar6_00;
    int *ar7_00;
    int ar5_00;
    u32 uVar2;
    int iVar3;
    int iStack_2c;
    u32 uStack_28;
    int iStack_24;

    ar7_00 = &iStack_2c;
    ar6_00 = &iStack_2c;
    uStack_28 = a1;
    iStack_24 = a2;
    iVar1 = shinobi_save_1fe646(a0, a1, s0, &iStack_2c);
    if (-1 < iVar1) {
        iVar1 = a0 * 0x148;
        uVar2 = 0;
        *(u8 *)(iStack_2c + 1) = (u8)s4;
        *(u32 *)(iVar1 + 0x8c478410) = 1;
        *(u32 *)(iVar1 + 0x8c478414) = a3 * 2 + *(int *)(&g_8c273aa4 + *(int *)(iVar1 + 0x8c4783e4) * 0x50);
        iVar3 = iStack_24;
        if (a3 != 0) {
            do {
                iVar1 = shinobi_save_1fecf2(iStack_2c, iVar3, s0, ar7_00);
                if (iVar1 < 0)
                    goto LAB_8c201312;
                uVar2 = uVar2 + 1;
                iVar3 = iVar3 + 0x200;
            } while (uVar2 < a3);
        }
        vmu_file_close(iStack_2c, 0, s0, ar7_00);
        iVar1 = vmu_file_open(a0, uStack_28, &iStack_2c);
        if (-1 < iVar1) {
            uVar2 = 0;
            ar5_00 = a0 * 0x800 + 0x8c478e40;
            iVar3 = iStack_24;
            if (a3 != 0) {
                do {
                    iVar1 = vmu_file_read_next_block(iStack_2c, ar5_00);
                    s0 = (u8 *)ar6_00;
                    if (iVar1 < 0)
                        goto LAB_8c201312;
                    iVar1 = cmp_512_bytes(ar5_00, iVar3);
                    if (iVar1 != 0) {
                        iVar1 = -0xf0;
                        s0 = (u8 *)ar6_00;
                        goto LAB_8c201312;
                    }
                    uVar2 = uVar2 + 1;
                    iVar3 = iVar3 + 0x200;
                } while (uVar2 < a3);
            }
            iVar1 = 0;
            s0 = (u8 *)ar6_00;
        LAB_8c201312:
            vmu_file_close(iStack_2c, 0, s0, ar7_00);
        }
    }
    return iVar1;
}

/*
 * vmu_file_skip_blocks  0x8c20135c
 * advances the open file's block cursor a1 blocks along its FAT chain; 0xffff0000 on a broken chain
 * called by: shinobi_save_2013c2
 */
u32 vmu_file_skip_blocks(int a0, u32 a1, u32 a2) {
    u32 uVar1;
    u32 ar4_00;
    u32 uVar2;

    uVar2 = 0;
    ar4_00 = *(u32 *)(a0 + 0x28);
    *(u32 *)(a0 + 0x40) = *(u32 *)(a0 + 0x38);
    if (a1 != 0) {
        do {
            if (*(int *)(a0 + 0x40) == 0xfffa) {
                if (*(int *)(a0 + 0x34) != 0) {
                    return 0xffff0000;
                }
                return 0;
            }
            if (*(int *)(a0 + 0x34) == 0) {
                return 0xffff0000;
            }
            uVar1 = vmu_drive_read_like(ar4_00, *(u32 *)(a0 + 0x40));
            uVar2 = uVar2 + 1;
            *(u32 *)(a0 + 0x40) = uVar1 & 0xffff;
            *(int *)(a0 + 0x34) = *(int *)(a0 + 0x34) + -1;
        } while (uVar2 < a1);
    }
    return *(u32 *)(a0 + 0x34);
}

/*
 * alt_entry_20136c  0x8c20136c
 * probably an entry 16 bytes into 8c20135c: it reads registers that code sets before it
 */
u32 alt_entry_20136c(void) {
    int in_r0;
    u32 uVar1;
    u32 a4;
    u32 unaff_r12;
    u32 unaff_r13;
    int unaff_r14;

    a4 = *(u32 *)(unaff_r14 + 0x28);
    *(u32 *)(in_r0 + unaff_r14) = *(u32 *)(unaff_r14 + 0x38);
    while (true) {
        if (unaff_r12 <= unaff_r13) {
            return *(u32 *)(unaff_r14 + 0x34);
        }
        if (*(int *)(unaff_r14 + 0x40) == 0xfffa)
            break;
        if (*(int *)(unaff_r14 + 0x34) == 0) {
            return 0xffff0000;
        }
        uVar1 = vmu_drive_read_like(a4, *(u32 *)(unaff_r14 + 0x40));
        unaff_r13 = unaff_r13 + 1;
        *(u32 *)(unaff_r14 + 0x40) = uVar1 & 0xffff;
        *(int *)(unaff_r14 + 0x34) = *(int *)(unaff_r14 + 0x34) + -1;
    }
    if (*(int *)(unaff_r14 + 0x34) != 0) {
        return 0xffff0000;
    }
    return 0;
}

/*
 * shinobi_save_2013c2  0x8c2013c2
 * area name: in the shinobi library code range; behaviour name: mostly calls save functions
 */
int shinobi_save_2013c2(int a0, u32 a1, int a2, int a3, u32 s0) {
    int iVar1;
    int iVar2;
    u32 ar6_00;
    int iVar3;
    u32 uVar4;
    u32 uStack_28;
    int iStack_24;
    u32 uStack_20;
    int iStack_1c;

    iStack_24 = a3;
    uStack_20 = a1;
    iStack_1c = a2;
    if (s0 == 0) {
        iVar1 = bu_get_file_size_now(a0, a1, a2, a3);
        if (iVar1 < 0) {
            return iVar1;
        }
        s0 = iVar1 - iStack_24;
    }
    iVar2 = vmu_file_open(a0, uStack_20, &uStack_28);
    iVar1 = iStack_1c;
    if (-1 < iVar2) {
        ar6_00 = 0;
        iVar2 = a0 * 0x148 + 0x8c4783e0;
        *(u32 *)(iVar2 + 0x30) = 1;
        *(u32 *)(iVar2 + 0x34) = s0;
        vmu_file_skip_blocks(uStack_28, iStack_24, 0);
        uVar4 = 0;
        if (s0 != 0) {
            iVar3 = (int)0x200;
            do {
                iVar2 = vmu_file_read_next_block(uStack_28, iVar1);
                if (iVar2 < 0)
                    goto LAB_8c201442;
                uVar4 = uVar4 + 1;
                iVar1 = iVar1 + iVar3;
            } while (uVar4 < s0);
        }
        iVar2 = 0;
    LAB_8c201442:
        vmu_file_close(uStack_28, 0, ar6_00, a3);
    }
    return iVar2;
}

/*
 * vmu_file_get_block_list  0x8c20147c
 * finds file a1 on drive a0 and fills a2 with its chain of block numbers from the FAT; 0xffffff05 if not found
 */
int vmu_file_get_block_list(u32 a0, u32 a1, u16 *a2) {
    int a5;
    u32 uVar1;
    u8 *a6;
    int iVar2;
    u8 auStack_40[12];
    u32 uStack_34;
    int iStack_18;

    a6 = auStack_40;
    a5 = vmu_dir_find_file(a0, a1, a6);
    if (a5 < 0) {
        a5 = (int)(int)0xffffff05;
    } else {
        vmu_dir_entry(a0, a5);
        *a2 = (short)uStack_34;
        for (iVar2 = 0; a2 = a2 + 1, iVar2 < iStack_18; iVar2 = iVar2 + 1) {
            uVar1 = vmu_drive_read_like(a0, uStack_34);
            uStack_34 = uVar1 & 0xffff;
            *a2 = (short)uVar1;
        }
        iVar2 = vmu_file_check_chain(a0, a1);
        if (iVar2 < 0) {
            a5 = iVar2;
        }
    }
    return a5;
}

/*
 * shinobi_save_2014e6  0x8c2014e6
 * area name: in the shinobi library code range; behaviour name: mostly calls save functions
 */
int shinobi_save_2014e6(int a0, u32 a1, int a2, u32 a3, u32 s0) {
    u8 *puVar1;
    u32 uVar2;
    u8 *ar6_00;
    u32 a7;
    int iVar3;
    u8 auStack_30[4];
    u16 uStack_2c;
    char cStack_2a;

    ar6_00 = auStack_30;
    iVar3 = a0 * 0x148 + 0x8c4783e0;
    *(u32 *)(iVar3 + 0x30) = 1;
    puVar1 = (&shinobi_input_1fdd44);
    *(u32 *)(iVar3 + 0x34) = s0;
    a7 = a3;
    iVar3 = (*(code *)puVar1)(a0, a1, ar6_00, a3);
    if (-1 < iVar3) {
        if (cStack_2a == '\x01') {
            uVar2 = (u32)uStack_2c;
            if (((a3 < uVar2) && (s0 <= uVar2)) && (a3 + s0 <= uVar2)) {
                iVar3 = vmu_file_check_chain(a0, a1);
                if (-1 < iVar3) {
                    uVar2 = 0;
                    if (s0 != 0) {
                        do {
                            iVar3 = vmu_block_write_retry(a0, a3, a2, a7);
                            if (iVar3 < 0) {
                                return iVar3;
                            }
                            uVar2 = uVar2 + 1;
                            a2 = a2 + 0x200;
                            a3 = a3 + 1;
                        } while (uVar2 < s0);
                    }
                    iVar3 = 0;
                }
            } else {
                iVar3 = (int)(int)0xffffff00;
            }
        } else {
            iVar3 = (int)(int)0xffffff0b;
        }
    }
    return iVar3;
}

/*
 * shinobi_copy_2015b0  0x8c2015b0
 * area name: in the shinobi library code range; behaviour name: mostly calls copy functions
 * called by: memcard_queue_save
 */
int shinobi_copy_2015b0(char *a0, char *a1, u32 unused_a2, u32 a3) {
    char cVar1;
    int iVar2;
    u32 uVar3;
    char *pcVar4;
    char *pcVar5;
    int ar6_00;
    int ar6_01;
    int iVar6;
    u32 a5;
    u32 uVar7;
    int iStack_28;
    int iStack_24;

    if (((((*(short *)(a1 + 0x4c) == 0) || (3 < *(u16 *)(a1 + 0x4c))) || (3 < *(u16 *)(a1 + 0x54))) ||
         ((*(int *)(a1 + 0x44) == 0 || (*(int *)(a1 + 0x48) == 0)))) ||
        ((*(short *)(a1 + 0x54) != 0 && (*(int *)(a1 + 0x50) == 0)))) {
        iVar2 = -0x100;
    } else {
        memset(a0, 0, 0x60);
        memset(a0, 0x20, 0x10);
        memset(a0 + 0x10, 0x20, 0x20);
        memset(a0 + 0x30, 0, 0x10);
        iVar2 = 0;
        pcVar4 = a1;
        pcVar5 = a0;
        do {
            if (*pcVar4 == '\0')
                break;
            cVar1 = *pcVar4;
            pcVar4 = pcVar4 + 1;
            iVar2 = iVar2 + 1;
            *pcVar5 = cVar1;
            pcVar5 = pcVar5 + 1;
        } while (iVar2 < 0x10);
        iVar2 = 0;
        pcVar5 = a0 + 0x10;
        pcVar4 = a1 + 0x12;
        do {
            if (*pcVar4 == '\0')
                break;
            cVar1 = *pcVar4;
            pcVar4 = pcVar4 + 1;
            iVar2 = iVar2 + 1;
            *pcVar5 = cVar1;
            pcVar5 = pcVar5 + 1;
        } while (iVar2 < 0x20);
        iVar2 = 0;
        pcVar4 = a1 + 0x34;
        pcVar5 = a0 + 0x30;
        do {
            if (*pcVar4 == '\0')
                break;
            cVar1 = *pcVar4;
            pcVar4 = pcVar4 + 1;
            iVar2 = iVar2 + 1;
            *pcVar5 = cVar1;
            pcVar5 = pcVar5 + 1;
        } while (iVar2 < 0x10);
        ar6_01 = *(int *)(&g_8c273bb8 + (*(u16 *)(a1 + 0x4c) & 3) * 4);
        ar6_00 = *(int *)(&g_8c273bc8 + (*(u16 *)(a1 + 0x54) & 3) * 4);
        iVar6 = *(int *)(a1 + 0x5c);
        iVar2 = ar6_01 + ar6_00;
        *(u16 *)(a0 + 0x42) = *(u16 *)(a1 + 0x4e);
        *(u16 *)(a0 + 0x40) = *(u16 *)(a1 + 0x4c);
        a5 = iVar6 + iVar2 + 0x80;
        if ((*(short *)(a1 + 0x54) == 0) || (*(int *)(a1 + 0x50) == 0)) {
            a0[0x44] = '\0';
            a0[0x45] = '\0';
            iStack_24 = 0;
        } else {
            iStack_24 = ar6_01 + 0x80;
            *(u16 *)(a0 + 0x44) = *(u16 *)(a1 + 0x54);
        }
        if ((*(int *)(a1 + 0x5c) == 0) || (*(int *)(a1 + 0x58) == 0)) {
            a0[0x48] = '\0';
            a0[0x49] = '\0';
            a0[0x4a] = '\0';
            a0[0x4b] = '\0';
            iStack_28 = 0;
        } else {
            iVar2 = iVar2 + 0x80;
            *(u32 *)(a0 + 0x48) = *(u32 *)(a1 + 0x5c);
            iStack_28 = iVar2;
        }
        if (ar6_01 != 0) {
            memmove(a0 + 0x60, *(u32 *)(a1 + 0x44), 0x20);
            memmove(a0 + 0x80, *(u32 *)(a1 + 0x48), ar6_01);
            iVar2 = ar6_01;
        }
        if (ar6_00 != 0) {
            memmove(a0 + iStack_24, *(u32 *)(a1 + 0x50), ar6_00);
            iVar2 = ar6_00;
        }
        if (*(int *)(a1 + 0x5c) != 0) {
            iVar2 = *(int *)(a1 + 0x5c);
            memmove(a0 + iStack_28, *(u32 *)(a1 + 0x58), iVar2);
        }
        uVar7 = a5 & 0x1ff;
        if (uVar7 != 0) {
            iVar2 = 0x200 - uVar7;
            memset(a0 + a5, 0, iVar2);
        }
        uVar3 = crc16_xmodem(a0, a5);
        *(short *)(a0 + 0x46) = (short)uVar3;
        iVar2 = (u32)(uVar7 != 0) + (a5 >> 9);
    }
    return iVar2;
}

/*
 * buCalcBackupFileSize_like  0x8c2017a8
 * blocks for a VMU file with a0 icons (1..3), eyecatch type a1 (0..3) and a2 data bytes; -256 when out of range
 * called by: memcard_queue_save
 */
u32 buCalcBackupFileSize_like(u32 a0, u32 a1, int a2) {
    u32 uVar1;

    if (((a0 != 0) && (a0 < 4)) && (a1 < 4)) {
        uVar1 = *(int *)(&g_8c273bb8 + a0 * 4) + *(int *)(&g_8c273bc8 + a1 * 4) + a2 + 0x80;
        return (u32)((uVar1 & 0x1ff) != 0) + (uVar1 >> 9);
    }
    return 0xffffff00;
}

/*
 * ta_fifo_2017fc  0x8c2017fc
 * called by: memcard_load_wait
 */
u32 ta_fifo_2017fc(u8 *a0, u8 *a1) {
    u8 uVar1;
    u16 uVar2;
    int iVar3;
    int iVar4;
    u8 *puVar5;
    int iVar6;
    u8 *puVar7;
    u32 uVar8;

    if ((((*(short *)(a1 + 0x40) != 0) && (*(u16 *)(a1 + 0x40) < 4)) && (*(u16 *)(a1 + 0x44) < 4)) &&
        (*(u32 *)(a1 + 0x48) < 0xe1001)) {
        iVar3 = *(int *)(&g_8c273bb8 + (u32) * (u16 *)(a1 + 0x40) * 4);
        iVar6 = *(int *)(&g_8c273bc8 + (u32) * (u16 *)(a1 + 0x44) * 4);
        uVar8 = iVar3 + iVar6 + *(int *)(a1 + 0x48) + 0x80;
        if (uVar8 < 0xe1001) {
            puVar5 = a0;
            puVar7 = a1;
            for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 + -1) {
                uVar1 = *puVar7;
                puVar7 = puVar7 + 1;
                *puVar5 = uVar1;
                puVar5 = puVar5 + 1;
            }
            puVar7 = a1 + 0x10;
            *puVar5 = 0;
            puVar5 = a0 + 0x12;
            for (iVar4 = 0x20; iVar4 != 0; iVar4 = iVar4 + -1) {
                uVar1 = *puVar7;
                puVar7 = puVar7 + 1;
                *puVar5 = uVar1;
                puVar5 = puVar5 + 1;
            }
            *puVar5 = 0;
            puVar7 = a1 + 0x30;
            puVar5 = a0 + 0x34;
            for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 + -1) {
                uVar1 = *puVar7;
                puVar7 = puVar7 + 1;
                *puVar5 = uVar1;
                puVar5 = puVar5 + 1;
            }
            *puVar5 = 0;
            *(u16 *)(a0 + 0x4e) = *(u16 *)(a1 + 0x42);
            *(u16 *)(a0 + 0x4c) = *(u16 *)(a1 + 0x40);
            *(u8 **)(a0 + 0x44) = a1 + 0x60;
            *(u8 **)(a0 + 0x48) = a1 + 0x80;
            puVar7 = a1 + 0x80 + iVar3;
            *(u16 *)(a0 + 0x54) = *(u16 *)(a1 + 0x44);
            if (*(short *)(a1 + 0x44) == 0) {
                *(u32 *)(a0 + 0x50) = 0;
            } else {
                *(u8 **)(a0 + 0x50) = puVar7;
                puVar7 = puVar7 + iVar6;
            }
            *(u32 *)(a0 + 0x5c) = *(u32 *)(a1 + 0x48);
            if (*(int *)(a1 + 0x48) == 0) {
                *(u32 *)(a0 + 0x58) = 0;
            } else {
                *(u8 **)(a0 + 0x58) = puVar7;
            }
            uVar2 = *(u16 *)(a1 + 0x46);
            *(u16 *)(a1 + 0x46) = 0;
            uVar8 = crc16_xmodem(a1, uVar8);
            *(u16 *)(a1 + 0x46) = uVar2;
            if ((uVar8 & 0xffff) != (u32)uVar2) {
                return 0xffffff20;
            }
            return 0;
        }
    }
    return 0xffffff21;
}

/*
 * ta_fifo_201804  0x8c201804
 */
u32 ta_fifo_201804(u8 *a0, int a1, u32 unused_a2, u32 unused_a3, int ain0) {
    u8 uVar1;
    u16 uVar2;
    int iVar3;
    int iVar4;
    u8 *puVar5;
    int iVar6;
    u8 *puVar7;
    u32 uVar8;
    u8 *unaff_r14;

    if ((((*(short *)(unaff_r14 + ain0) != 0) && (*(u16 *)(unaff_r14 + ain0) < 4)) &&
         (*(u16 *)(unaff_r14 + 0x44) < 4)) &&
        (*(u32 *)(unaff_r14 + 0x48) < 0xe1001)) {
        iVar3 = *(int *)(&g_8c273bb8 + (u32) * (u16 *)(unaff_r14 + 0x40) * 4);
        iVar6 = *(int *)(&g_8c273bc8 + (u32) * (u16 *)(unaff_r14 + 0x44) * 4);
        uVar8 = iVar3 + iVar6 + *(int *)(unaff_r14 + 0x48) + 0x80;
        if (uVar8 < 0xe1001) {
            puVar5 = a0;
            puVar7 = unaff_r14;
            for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 + -1) {
                uVar1 = *puVar7;
                puVar7 = puVar7 + 1;
                *puVar5 = uVar1;
                puVar5 = puVar5 + 1;
            }
            puVar7 = unaff_r14 + 0x10;
            *puVar5 = 0;
            puVar5 = a0 + 0x12;
            for (iVar4 = 0x20; iVar4 != 0; iVar4 = iVar4 + -1) {
                uVar1 = *puVar7;
                puVar7 = puVar7 + 1;
                *puVar5 = uVar1;
                puVar5 = puVar5 + 1;
            }
            *puVar5 = 0;
            puVar7 = unaff_r14 + 0x30;
            puVar5 = a0 + 0x34;
            for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 + -1) {
                uVar1 = *puVar7;
                puVar7 = puVar7 + 1;
                *puVar5 = uVar1;
                puVar5 = puVar5 + 1;
            }
            *puVar5 = 0;
            *(u16 *)(a0 + 0x4e) = *(u16 *)(unaff_r14 + 0x42);
            *(u16 *)(a0 + 0x4c) = *(u16 *)(unaff_r14 + 0x40);
            *(int *)(a0 + 0x44) = a1 + 0x60;
            *(int *)(a0 + 0x48) = a1 + 0x80;
            iVar3 = a1 + 0x80 + iVar3;
            *(u16 *)(a0 + 0x54) = *(u16 *)(unaff_r14 + 0x44);
            if (*(short *)(unaff_r14 + 0x44) == 0) {
                *(u32 *)(a0 + 0x50) = 0;
            } else {
                *(int *)(a0 + 0x50) = iVar3;
                iVar3 = iVar3 + iVar6;
            }
            *(u32 *)(a0 + 0x5c) = *(u32 *)(unaff_r14 + 0x48);
            if (*(int *)(unaff_r14 + 0x48) == 0) {
                *(u32 *)(a0 + 0x58) = 0;
            } else {
                *(int *)(a0 + 0x58) = iVar3;
            }
            uVar2 = *(u16 *)(unaff_r14 + 0x46);
            *(u16 *)(unaff_r14 + 0x46) = 0;
            uVar8 = crc16_xmodem(a1, uVar8);
            *(u16 *)(unaff_r14 + 0x46) = uVar2;
            if ((uVar8 & 0xffff) != (u32)uVar2) {
                return 0xffffff20;
            }
            return 0;
        }
    }
    return 0xffffff21;
}

/*
 * crc16_xmodem  0x8c201948
 * bitwise CRC-16 (polynomial 0x1021, initial 0) of a1 bytes at a0, as used in VMS file headers
 * called by: shinobi_copy_2015b0, ta_fifo_2017fc, ta_fifo_201804
 */
u32 crc16_xmodem(char *a0, u32 a1) {
    char cVar1;
    u32 uVar2;
    u32 uVar3;
    int iVar4;
    u32 uVar5;

    uVar2 = 0;
    for (uVar5 = 0; uVar5 < a1; uVar5 = uVar5 + 1) {
        cVar1 = *a0;
        a0 = a0 + 1;
        iVar4 = 8;
        uVar3 = uVar2 ^ (int)cVar1 << 8;
        do {
            uVar2 = uVar3 << 1;
            if ((uVar3 & 0x8000) != 0) {
                uVar2 = uVar2 ^ (int)0x1021;
            }
            iVar4 = iVar4 + -1;
            uVar3 = uVar2;
        } while (iVar4 != 0);
    }
    return uVar2;
}

/*
 * ta_copy_201994  0x8c201994
 * area name: sits between ta functions (same compilation unit); behaviour name: mostly calls copy functions
 * called by: asr_session_open_like
 */
u32 ta_copy_201994(void) {
    u8 *puVar1;
    u32 uVar2;
    int ar4_00;
    u8 *ar5_00;
    u32 ar6_00;
    u32 ar7_00;
    u32 uVar3;
    u32 uVar4;

    uVar3 = (int)0x130 + 0x8c47e6f0;
    uVar4 = 0x8c47e6f0;
    do {
        shinobi_copy_2020f8(uVar4);
        uVar4 = uVar4 + 0x4c;
    } while (uVar4 < uVar3);
    uVar3 = (int)0x100 + 0x8c47e820;
    uVar4 = 0x8c47e820;
    do {
        shinobi_copy_202116(uVar4);
        uVar4 = uVar4 + 0x10;
    } while (uVar4 < uVar3);
    ar4_00 = (int)0xa00;
    ar7_00 = 0;
    ar6_00 = 0x20;
    ar5_00 = (&shinobi_input_201b10);
    uVar2 = ta_uses_ret_const_1_1fa244(ar4_00, (&shinobi_input_201b10), 0x20, 0);
    puVar1 = (&maple_port_info_snapshot);
    g_8c47e920 = uVar2;
    (*(code *)puVar1)(ar4_00, ar5_00, ar6_00, ar7_00);
    return 0;
}

/*
 * ta_copy_2019e0  0x8c2019e0
 * area name: sits between ta functions (same compilation unit); behaviour name: mostly calls copy functions
 * called by: asr_copy_01cfc8
 */
u32 ta_copy_2019e0(void) {
    u32 uVar1;
    u32 uVar2;
    u32 uVar3;

    shinobi_uses_ret_const_1_1fa54c(g_8c47e920);
    uVar2 = (int)0x130 + 0x8c47e6f0;
    uVar3 = 0x8c47e6f0;
    do {
        shinobi_copy_2020f8(uVar3);
        uVar3 = uVar3 + 0x4c;
    } while (uVar3 < uVar2);
    uVar2 = (int)0x100 + 0x8c47e820;
    uVar3 = 0x8c47e820;
    do {
        uVar1 = shinobi_copy_202116(uVar3);
        uVar3 = uVar3 + 0x10;
    } while (uVar3 < uVar2);
    return uVar1;
}

/*
 * shinobi_fill_loop_201a1a  0x8c201a1a
 * area name: in the shinobi library code range; behaviour name: a loop that writes memory
 * called by: asr_session_open_like
 */
u32 shinobi_fill_loop_201a1a(u32 a0, u32 unused_a1, u32 unused_a2, u32 unused_a3, u32 s0, u32 s4, u32 s8, u32 s12,
                             u32 s16, u32 s20) {
    u8 *puVar1;
    u8 *puVar2;
    u8 *puVar3;
    u8 *a7;

    puVar1 = (&memset);
    a7 = 0x8c47e6f0 + 0x130;
    puVar2 = 0x8c47e6f0;
    puVar3 = 0x8c47e6f0;
    while (true) {
        if (a7 <= puVar2) {
            return 0;
        }
        if (puVar2[2] == '\0')
            break;
        puVar2 = puVar2 + 0x4c;
        puVar3 = puVar3 + 0x4c;
    }
    *puVar3 = 0;
    puVar3[1] = 0;
    *(u32 *)(puVar3 + 4) = s0;
    *(u32 *)(puVar3 + 8) = s4;
    *(u32 *)(puVar3 + 0xc) = s8;
    *(u32 *)(puVar3 + 0x10) = s12;
    if (*(int *)(puVar3 + 8) == 0) {
        *(int *)(puVar3 + 0x14) = *(int *)(puVar3 + 0xc) * *(int *)(puVar3 + 0x10) >> 1;
    } else {
        *(int *)(puVar3 + 0x14) = *(int *)(puVar3 + 0xc) * *(int *)(puVar3 + 0x10);
    }
    *(u32 *)(puVar3 + 0x18) = s16;
    *(u32 *)(puVar3 + 0x48) = s20;
    (*(code *)puVar1)(*(u32 *)(puVar3 + 0x48), 0, *(int *)(puVar3 + 0xc) * *(int *)(puVar3 + 0x10), a7);
    *(u32 *)(puVar3 + 0x1c) = 0;
    *(u32 *)(puVar3 + 0x20) = 0;
    *(u32 *)(puVar3 + 0x24) = a0;
    *(u32 *)(puVar3 + 0x28) = 0;
    *(u32 *)(puVar3 + 0x2c) = 0;
    *(u32 *)(puVar3 + 0x30) = 0;
    *(u32 *)(puVar3 + 0x34) = 1;
    *(u32 *)(puVar3 + 0x38) = 0;
    *(u32 *)(puVar3 + 0x3c) = 0;
    *(u32 *)(puVar3 + 0x40) = 0;
    *(u32 *)(puVar3 + 0x44) = 0;
    puVar3[2] = 1;
    return puVar3;
}

/*
 * shinobi_copy_201b04  0x8c201b04
 * area name: in the shinobi library code range; behaviour name: mostly calls copy functions
 * called by: asr_copy_01cfc8
 */
u32 shinobi_copy_201b04(int a0) {
    u32 in_r0;
    u32 uVar1;

    if (a0 != 0) {
        uVar1 = shinobi_copy_2020f8(a0);
        return uVar1;
    }
    return in_r0;
}

/*
 * shinobi_input_201b10  0x8c201b10
 * area name: in the shinobi library code range; behaviour name: mostly calls input functions
 */
u32 shinobi_input_201b10(u32 unused_a0, u32 unused_a1, u32 a2, u32 a3) {
    u32 uVar1;
    u32 uVar2;
    int iVar3;
    u32 uVar4;
    u32 uVar5;
    u32 uVar6;
    u8 in_MD;
    u8 bVar7;
    u8 in_RB;
    u8 bVar8;
    u8 in_BL;
    u8 bVar9;
    u8 in_FD;
    u8 bVar10;
    u8 in_M;
    u8 extraout_M;
    u8 extraout_M_00;
    u8 extraout_M_01;
    u8 bVar11;
    u8 in_Q;
    u8 extraout_Q;
    u8 extraout_Q_00;
    u8 extraout_Q_01;
    u8 bVar12;
    u8 in_IMASK;
    u8 bVar13;
    u8 in_S;
    u8 extraout_S;
    u8 extraout_S_00;
    u8 extraout_S_01;
    u8 bVar14;
    u8 in_T;
    bool bVar15;

    uVar1 = (u32)in_T | (u32)in_S << 1;
    uVar4 = uVar1 | (u32)in_IMASK << 4;
    uVar5 = uVar4 | (u32)in_Q << 8;
    uVar6 = uVar5 | (u32)in_M << 9;
    bVar9 = (u8)(((u32)in_BL << 0x1c) >> 0x18);
    bVar7 = bVar9 | (u8)(((u32)in_RB << 0x1d) >> 0x18);
    bVar14 = (u8)((uVar1 & 2) >> 1);
    bVar13 = (u8)((uVar4 & 0xf0) >> 4);
    bVar12 = (u8)(uVar5 >> 8) & 1;
    bVar11 = (u8)((uVar6 & 0x200) >> 9);
    bVar10 = (u8)(((uVar6 | (u32)in_FD << 0xf) & 0x8000) >> 0xf);
    bVar9 = (bVar9 & 0x10) >> 4;
    bVar8 = (bVar7 & 0x20) >> 5;
    bVar7 = ((bVar7 | (u8)(((u32)in_MD << 0x1e) >> 0x18)) & 0x40) >> 6;
    uVar2 = (int)0x130 + 0x8c47e6f0;
    uVar1 = 0x8c47e6f0;
    uVar4 = 0x8c47e6f0;
    uVar5 = 0x8c47e6f0;
    uVar6 = 0x8c47e6f0;
    do {
        if (((*(char *)(uVar4 + 2) == '\x01') &&
             (iVar3 = *(int *)(uVar6 + 0x20), shinobi_input_202424(uVar6, uVar1, a2, a3), bVar11 = extraout_M,
              bVar12 = extraout_Q, bVar14 = extraout_S, iVar3 == 1)) &&
            (iVar3 = shinobi_uses_libgcc_divide_helper_202a30(*(u32 *)(uVar6 + 0x24)), bVar11 = extraout_M_00,
             bVar12 = extraout_Q_00, bVar14 = extraout_S_00, iVar3 == 0)) {
            shinobi_input_2020b6(uVar5);
            shinobi_input_20227c(uVar5);
            bVar11 = extraout_M_01;
            bVar12 = extraout_Q_01;
            bVar14 = extraout_S_01;
        }
        uVar4 = uVar4 + 0x4c;
        bVar15 = uVar2 <= uVar4;
        uVar5 = uVar5 + 0x4c;
        uVar6 = uVar6 + 0x4c;
    } while (!bVar15);
    return ((u32)in_T | (u32)in_S << 1 | (u32)in_IMASK << 4) & 0xf0 |
           ((u32)bVar15 | (u32)bVar14 << 1 | (u32)bVar13 << 4 | (u32)bVar12 << 8 | (u32)bVar11 << 9 |
            (u32)bVar10 << 0xf | (u32)bVar9 << 0x1c | (u32)bVar8 << 0x1d | (u32)bVar7 << 0x1e) &
               (int)(int)0xffffff0f;
}

/*
 * set_field_28_to_1  0x8c201b92
 * called by: asr_state_switch_01d15c
 */
u32 set_field_28_to_1(int a0) {
    *(u32 *)(a0 + 0x28) = 1;
    return 0;
}

/*
 * set_field_28_to_2  0x8c201b9a
 * called by: game_uses_get_field_0_u8_01d490
 */
u32 set_field_28_to_2(int a0) {
    *(u32 *)(a0 + 0x28) = 2;
    return 0;
}

/*
 * get_field_0_u8  0x8c201ba2
 * called by: asr_state_switch_01d15c, game_uses_get_field_0_u8_01d490
 */
u32 get_field_0_u8(u8 *a0) {
    return (u32)*a0;
}

/*
 * shinobi_uses_switch_jump_201bae  0x8c201bae
 * area name: in the shinobi library code range; behaviour name: its main named callee is switch_jump
 * called by: shinobi_uses_switch_jump_20202e
 */
u32 shinobi_uses_switch_jump_201bae(int a0) {
    u32 r5;
    u32 r6;
    u32 r7;
    int iVar1;
    u32 uVar2;
    u8 auStack_24[8];
    u8 auStack_1c[8];
    u32 uStack_14;
    u32 uStack_10;

    uStack_14 = 0;
    uStack_10 = *(u32 *)(a0 + 0x14);
    iVar1 = a0;
    switch_jump(8, auStack_1c, &uStack_14);
    switch_jump(8, auStack_24, a0 + 0x3c);
    iVar1 = cmp_u64_pair(iVar1, r5, r6, r7);
    if (iVar1 == 1) {
        uVar2 = *(u32 *)(a0 + 0x14);
    } else {
        uVar2 = *(u32 *)(a0 + 0x40);
    }
    return uVar2;
}

/*
 * switch_jump_wrap  0x8c201c08
 * only calls switch_jump
 */
u32 switch_jump_wrap(int a0) {
    u32 uVar1;
    u32 in_stack_00000000;

    uVar1 = switch_jump(8, in_stack_00000000, a0 + 0x3c);
    return uVar1;
}

/*
 * set_field_18_mark_dirty  0x8c201c28
 * +0x18 = a1 and +0x28 = 4 when it changes
 * called by: msg_substitute_name
 */
u32 set_field_18_mark_dirty(int a0, int a1) {
    if (*(int *)(a0 + 0x18) != a1) {
        *(int *)(a0 + 0x18) = a1;
        *(u32 *)(a0 + 0x28) = 4;
    }
    return 0;
}

/*
 * slot16_alloc  0x8c201c3e
 * takes the first free one of 16 16-byte records at 8c47e820 for a0; 0 when full
 * called by: asr_session_open_like
 */
u32 slot16_alloc(u32 a0) {
    u8 *puVar1;
    u8 *puVar2;

    puVar1 = 0x8c47e820;
    puVar2 = 0x8c47e820;
    while (true) {
        if (0x8c47e820 + 0x100 <= puVar1) {
            return 0;
        }
        if (puVar1[1] == '\0')
            break;
        puVar1 = puVar1 + 0x10;
        puVar2 = puVar2 + 0x10;
    }
    *puVar2 = 0;
    *(u32 *)(puVar2 + 4) = a0;
    *(u32 *)(puVar2 + 0xc) = 0;
    *(u32 *)(puVar2 + 8) = 0;
    puVar2[1] = 1;
    return puVar2;
}

/*
 * shinobi_copy_201c82  0x8c201c82
 * area name: in the shinobi library code range; behaviour name: mostly calls copy functions
 * called by: asr_copy_01cfc8
 */
u32 shinobi_copy_201c82(int a0) {
    u32 in_r0;
    u32 uVar1;

    if (a0 != 0) {
        uVar1 = shinobi_copy_202116(a0);
        return uVar1;
    }
    return in_r0;
}

/*
 * get_field_4_201c8e  0x8c201c8e
 * called by: shinobi_uses_get_field_4_201f2c, shinobi_uses_switch_jump_201c92, shinobi_uses_switch_jump_201cf6,
 * shinobi_uses_switch_jump_201e14, shinobi_uses_switch_jump_20202e
 */
u32 get_field_4_201c8e(int a0) {
    return *(u32 *)(a0 + 4);
}

/*
 * shinobi_uses_switch_jump_201c92  0x8c201c92
 * area name: in the shinobi library code range; behaviour name: its main named callee is switch_jump
 * called by: asr_state_switch_01d15c
 */
u32 shinobi_uses_switch_jump_201c92(int a0) {
    u32 r5;
    u32 r6;
    u32 r7;
    int iVar1;
    int iVar2;
    u32 uVar3;
    int a4;
    u32 in_PR;
    u8 auStackY_1c[8];
    u8 auStackY_14[8];

    shinobi_uses_switch_jump_20202e(a0, r5, r6, r7, in_PR);
    a4 = a0;
    iVar1 = get_field_4_201c8e(a0);
    switch_jump(8, auStackY_14, a0 + 8);
    switch_jump(8, auStackY_1c, iVar1 + 0x3c);
    iVar2 = cmp_u64_pair(a4, r5, r6, r7);
    if (iVar2 == 1) {
        switch_jump(8, auStackY_14, a0 + 8);
        switch_jump(8, auStackY_1c, iVar1 + 0x3c);
        uVar3 = shinobi_uses_switch_jump_2028cc(a4, r5, r6, r7);
    } else {
        uVar3 = 0;
    }
    return uVar3;
}

/*
 * shinobi_uses_switch_jump_201cf6  0x8c201cf6
 * area name: in the shinobi library code range; behaviour name: its main named callee is switch_jump
 * called by: shinobi_uses_switch_jump_201da0
 */
u32 shinobi_uses_switch_jump_201cf6(int a0, int a1) {
    u32 r6;
    u32 r7;
    int iVar1;
    u32 uVar2;
    u32 in_stack_00000000;
    u8 auStackY_1c[8];
    u8 auStackY_14[8];
    int iVar3;

    iVar1 = a0;
    iVar3 = a1;
    shinobi_uses_switch_jump_20202e(a0, a1, r6, r7, a1);
    if (iVar3 == 0) {
        switch_jump(8, a0 + 8, &stack0x00000004);
    } else if (iVar3 == 1) {
        switch_jump(8, auStackY_14, &stack0x00000004);
        switch_jump(8, auStackY_1c, a0 + 8);
        shinobi_uses_switch_jump_20280c(iVar1, a1, r6, r7);
    } else if (iVar3 == 2) {
        iVar1 = get_field_4_201c8e(a0);
        switch_jump(8, a0 + 8, iVar1 + 0x3c);
    }
    uVar2 = switch_jump(8, in_stack_00000000, a0 + 8);
    return uVar2;
}

/*
 * shinobi_uses_switch_jump_201d84  0x8c201d84
 * area name: in the shinobi library code range; behaviour name: its main named callee is switch_jump
 */
u32 shinobi_uses_switch_jump_201d84(int a0) {
    u32 r5;
    u32 r6;
    u32 r7;
    u32 uVar1;
    u32 in_stack_00000000;

    shinobi_uses_switch_jump_20202e(a0, r5, r6, r7, a0);
    uVar1 = switch_jump(8, in_stack_00000000, a0 + 8);
    return uVar1;
}

/*
 * shinobi_uses_switch_jump_201da0  0x8c201da0
 * area name: in the shinobi library code range; behaviour name: its main named callee is switch_jump
 * called by: asr_state_switch_01d15c
 */
u32 shinobi_uses_switch_jump_201da0(int a0, int a1) {
    u32 uVar1;
    u32 in_stack_00000000;
    u8 auStack_1c[8];
    u32 uStack_14;

    uStack_14 = 0;
    if (a1 < 1) {
        a1 = 0;
    }
    switch_jump(8, auStack_1c, &uStack_14);
    shinobi_uses_switch_jump_201cf6(a0, 1);
    uVar1 = switch_jump(8, in_stack_00000000, a0 + 8);
    return uVar1;
}

/*
 * shinobi_uses_switch_jump_201dea  0x8c201dea
 * area name: in the shinobi library code range; behaviour name: its callees mostly do: uses_switch_jump
 */
u32 shinobi_uses_switch_jump_201dea(u8 *a0) {
    u32 r5;
    u32 r6;
    u32 r7;
    shinobi_uses_switch_jump_20202e(a0, r5, r6, r7, a0);
    return (u32)*a0;
}

/*
 * shinobi_uses_switch_jump_201dfe  0x8c201dfe
 * area name: in the shinobi library code range; behaviour name: its callees mostly do: uses_switch_jump
 */
u32 shinobi_uses_switch_jump_201dfe(u8 *a0) {
    u32 r5;
    u32 r6;
    u32 r7;
    u32 uVar1;

    uVar1 = shinobi_uses_switch_jump_20202e(a0, r5, r6, r7, a0);
    *a0 = 0;
    return uVar1;
}

/*
 * shinobi_uses_switch_jump_201e14  0x8c201e14
 * area name: in the shinobi library code range; behaviour name: its main named callee is switch_jump
 * called by: asr_state_switch_01d15c, shinobi_uses_get_field_4_201f2c
 */
int shinobi_uses_switch_jump_201e14(int a0, int a1, int a2) {
    u32 r7;
    int iVar1;
    int iVar2;
    int iVar3;
    int iVar4;
    int iVar5;
    int iVar6;
    u8 auStackY_30[8];
    u8 auStackY_28[8];

    iVar5 = a1;
    iVar4 = a2;
    shinobi_uses_switch_jump_20202e(a0, a1, a2, r7, a2);
    iVar3 = a0;
    iVar2 = get_field_4_201c8e(a0);
    switch_jump(8, auStackY_28, a0 + 8);
    switch_jump(8, auStackY_30, iVar2 + 0x3c);
    iVar3 = cmp_u64_pair(iVar3, iVar5, a2, r7);
    if (iVar3 == 1) {
        switch_jump(8, auStackY_28, a0 + 8);
        iVar3 = shinobi_uses_libgcc_divide_helper_202924(*(u32 *)(iVar2 + 0x14), iVar5, a2, r7);
        switch_jump(8, auStackY_30, iVar2 + 0x3c);
        iVar5 = shinobi_uses_libgcc_divide_helper_202924(*(u32 *)(iVar2 + 0x14), iVar5, a2, r7);
        iVar6 = *(int *)(iVar2 + 0x14) - iVar3;
        if (*(int *)(iVar2 + 8) == 0) {
            iVar4 = iVar4 >> 1;
        }
        iVar1 = iVar6;
        if (iVar3 < iVar5) {
            iVar1 = -iVar3;
        }
        if (iVar5 + iVar1 < iVar4) {
            iVar4 = iVar5 + iVar1;
        }
        if (iVar6 < iVar4) {
            iVar6 = iVar4 - iVar6;
        } else {
            iVar6 = 0;
        }
        iVar4 = iVar4 - iVar6;
        if (*(int *)(iVar2 + 8) == 0) {
            memmove(a1, iVar3 * 2 + *(int *)(iVar2 + 0x48), iVar4 * 2);
            if (iVar6 != 0) {
                memmove(iVar4 * 2 + a1, *(u32 *)(iVar2 + 0x48), iVar6 << 1);
            }
        } else {
            memmove(a1, *(int *)(iVar2 + 0x48) + iVar3, iVar4);
            if (iVar6 != 0) {
                memmove(a1 + iVar4, *(u32 *)(iVar2 + 0x48), iVar6);
            }
        }
        iVar4 = iVar4 + iVar6;
    } else {
        iVar4 = 0;
    }
    return iVar4;
}

/*
 * shinobi_uses_get_field_4_201f2c  0x8c201f2c
 * area name: in the shinobi library code range; behaviour name: its main named callee is get_field_4_201c8e
 */
u32 shinobi_uses_get_field_4_201f2c(u32 a0, u32 a1, int a2) {
    int iVar1;
    u32 uVar2;

    iVar1 = get_field_4_201c8e(a0);
    if (*(int *)(iVar1 + 8) == 0) {
        a2 = a2 << 1;
    }
    uVar2 = shinobi_uses_switch_jump_201e14(a0, a1, a2);
    return uVar2;
}

/*
 * shinobi_input_201f58  0x8c201f58
 * area name: in the shinobi library code range; behaviour name: mostly calls input functions
 * called by: shinobi_input_202424
 */
u32 shinobi_input_201f58(u32 a0, u32 a1) {
    char *pcVar1;
    u32 *puVar2;

    pcVar1 = (char *)maple_port_info(a0, a1);
    if ((*pcVar1 != '\0') && (puVar2 = (u32 *)maple_port_status(a0), (*puVar2 & 0x10) != 0)) {
        return 1;
    }
    return 0;
}

/*
 * shinobi_calls_one_201f8a  0x8c201f8a
 * area name: in the shinobi library code range; behaviour name: calls 1 not yet named function
 * called by: shinobi_input_202424
 */
u32 shinobi_calls_one_201f8a(void) {
    int iVar1;

    iVar1 = thunk_FUN_8c1f461c();
    if (iVar1 == 0) {
        return 0;
    }
    return 1;
}

/*
 * shinobi_test_201fb8  0x8c201fb8
 * area name: in the shinobi library code range; behaviour name: returns the result of a comparison
 * called by: shinobi_input_202424
 */
u32 shinobi_test_201fb8(int a0, u32 a1) {
    int iVar1;

    iVar1 = *(int *)(a0 + 0x2c);
    if (iVar1 == 3) {
        if ((char)a1 != '\b') {
            return 0xffffffff;
        }
    } else {
        if (iVar1 == 0) {
            return 0;
        }
        if ((((iVar1 == 1) || (iVar1 == 2)) || (iVar1 == 4)) || (iVar1 == 100)) {
            if ((char)a1 != '\a') {
                return 0xffffffff;
            }
        } else {
            if (iVar1 != 0x65) {
                return 0xffffffff;
            }
            if ((char)a1 != '\x05') {
                return 0xffffffff;
            }
        }
    }
    return 0;
}

/*
 * shinobi_update_fields_20200c  0x8c20200c
 * area name: in the shinobi library code range; behaviour name: conditionally writes members
 * called by: alt_entry_202550, shinobi_input_20254c
 */
u32 shinobi_update_fields_20200c(int a0, int a1) {
    u32 uVar1;
    u32 uVar2;

    uVar1 = (u32) * (u8 *)(*(int *)(a1 + 8) + 0xb);
    uVar2 = 0;
    if (((*(char *)(a1 + 4) == '\b') && (uVar1 == 0)) && (*(int *)(a0 + 0x34) == 0)) {
        uVar2 = 0xffffffff;
    }
    *(u32 *)(a0 + 0x34) = uVar1;
    return uVar2;
}

/*
 * shinobi_uses_switch_jump_20202e  0x8c20202e
 * area name: in the shinobi library code range; behaviour name: its main named callee is switch_jump
 * called by: shinobi_uses_switch_jump_201c92, shinobi_uses_switch_jump_201cf6, shinobi_uses_switch_jump_201d84,
 * shinobi_uses_switch_jump_201dea, shinobi_uses_switch_jump_201dfe, shinobi_uses_switch_jump_201e14
 */
int shinobi_uses_switch_jump_20202e(u8 *a0, u32 unused_a1, u32 unused_a2, u32 unused_a3, int ain0) {
    int a4;
    int a4_00;
    u8 auStack_48[8];
    u8 auStack_40[8];
    u8 auStack_34[8];
    u8 auStack_2c[8];
    u32 uStack_24;
    u32 uStack_20;
    u8 auStack_1c[12];

    if (a0 != NULL) {
        a4 = get_field_4_201c8e(a0);
        uStack_24 = 0;
        a4_00 = a4;
        uStack_20 = shinobi_uses_switch_jump_201bae(a4);
        switch_jump(8, auStack_2c, &uStack_24);
        switch_jump(8, auStack_34, a4 + 0x3c);
        shinobi_uses_switch_jump_20284e(a4_00, unused_a1, unused_a2, unused_a3);
        switch_jump(8, auStack_40, a0 + 8);
        switch_jump(8, auStack_48, auStack_1c);
        ain0 = cmp_u64_pair(a4_00, unused_a1, unused_a2, unused_a3);
        if (ain0 == 1) {
            ain0 = switch_jump(8, a0 + 8, auStack_1c);
            *a0 = 1;
        }
    }
    return ain0;
}

/*
 * shinobi_input_2020b6  0x8c2020b6
 * area name: in the shinobi library code range; behaviour name: mostly calls input functions
 * called by: shinobi_input_201b10
 */
u32 shinobi_input_2020b6(int a0) {
    int iVar1;
    u32 uVar2;

    iVar1 = maple_port_info(*(u32 *)(a0 + 0x24));
    uVar2 = (u32) * (u8 *)(iVar1 + 4);
    if ((uVar2 == 8) && (uVar2 = *(u8 *)(*(int *)(iVar1 + 8) + 8) >> 6 & 1, uVar2 == 1)) {
        *(u32 *)(a0 + 0x38) = 1;
    } else {
        *(u32 *)(a0 + 0x38) = 0;
    }
    return uVar2;
}

/*
 * alt_entry_2020ba  0x8c2020ba
 * probably an entry 4 bytes into 8c2020b6: it reads registers that code sets before it
 */
u32 alt_entry_2020ba(u32 unused_a0, u32 a1) {
    int iVar1;
    u32 uVar2;
    int unaff_r14;

    iVar1 = maple_port_info(*(u32 *)(unaff_r14 + 0x24), a1);
    uVar2 = (u32) * (u8 *)(iVar1 + 4);
    if ((uVar2 == 8) && (uVar2 = *(u8 *)(*(int *)(iVar1 + 8) + 8) >> 6 & 1, uVar2 == 1)) {
        *(u32 *)(unaff_r14 + 0x38) = 1;
    } else {
        *(u32 *)(unaff_r14 + 0x38) = 0;
    }
    return uVar2;
}

/*
 * shinobi_copy_2020f8  0x8c2020f8
 * area name: in the shinobi library code range; behaviour name: mostly calls copy functions
 * called by: shinobi_copy_201b04, ta_copy_201994, ta_copy_2019e0
 */
u32 shinobi_copy_2020f8(int a0) {
    memset(0, 0x4c);
    *(u32 *)(a0 + 0x48) = 0;
    *(u8 *)(a0 + 2) = 0;
    return 0;
}

/*
 * shinobi_copy_2020fc  0x8c2020fc
 * area name: in the shinobi library code range; behaviour name: mostly calls copy functions
 */
u32 shinobi_copy_2020fc(int a0, u32 unused_a1, u32 a2, u32 a3) {
    memset(a0, 0, a2);
    *(u32 *)(a0 + 0x48) = 0;
    *(u8 *)(a0 + 2) = 0;
    return 0;
}

/*
 * shinobi_copy_202116  0x8c202116
 * area name: in the shinobi library code range; behaviour name: mostly calls copy functions
 * called by: shinobi_copy_201c82, ta_copy_201994, ta_copy_2019e0
 */
u32 shinobi_copy_202116(int a0) {
    memset(0, 0x10);
    *(u32 *)(a0 + 4) = 0;
    *(u8 *)(a0 + 1) = 0;
    return 0;
}

/*
 * shinobi_copy_20211a  0x8c20211a
 * area name: in the shinobi library code range; behaviour name: mostly calls copy functions
 */
u32 shinobi_copy_20211a(int a0, u32 unused_a1, u32 a2, u32 a3) {
    memset(a0, 0, a2);
    *(u32 *)(a0 + 4) = 0;
    *(u8 *)(a0 + 1) = 0;
    return 0;
}

/*
 * field_ptr_f  0x8c202132
 * returns the address of the member at +0xf
 * called by: field_ptr_f_wrap
 */
int field_ptr_f(int a0) {
    return a0 + 0xf;
}

/*
 * shinobi_uses_switch_jump_20213e  0x8c20213e
 * area name: in the shinobi library code range; behaviour name: its main named callee is switch_jump
 * called by: alt_entry_202280, shinobi_input_20227c
 */
u32 shinobi_uses_switch_jump_20213e(int a0, int a1) {
    u32 r6;
    u32 r7;
    int iVar1;
    int iVar2;
    int iVar3;
    u32 a4;
    int iVar4;
    int iVar5;
    u8 auStack_40[4];
    u8 *puStack_3c;
    u8 auStack_38[8];
    u32 uStack_30;
    u32 uStack_2c;
    u8 auStack_28[12];

    iVar5 = *(int *)(a0 + 8);
    iVar4 = *(int *)(a1 + 0x48);
    a4 = (u32) * (u8 *)(iVar5 + 0xb);
    if (a4 == 0) {
        a4 = 0;
    } else {
        iVar3 = a1;
        switch_jump(8, auStack_28, a1 + 0x3c);
        switch_jump(8, auStack_38, auStack_28);
        puStack_3c = (u8 *)&uStack_30;
        shinobi_uses_switch_jump_2027c0(a4, iVar3, r6, r7);
        *(u32 *)(a1 + 0x3c) = uStack_30;
        *(u32 *)(a1 + 0x40) = uStack_2c;
        if (*(int *)(a1 + 8) == 0) {
            switch_jump(8, auStack_38, auStack_28);
            iVar2 = shinobi_uses_libgcc_divide_helper_202924(*(u32 *)(a1 + 0x14), iVar3, r6, r7);
            switch_jump(8, auStack_40, &uStack_30);
            iVar3 = shinobi_uses_libgcc_divide_helper_202924(*(u32 *)(a1 + 0x14), iVar3, r6, r7);
            iVar1 = iVar2 * 2 + iVar4;
            if (iVar3 < iVar2) {
                memmove(iVar1, iVar5 + 0xc, (*(int *)(a1 + 0x14) - iVar2) * 2);
                iVar5 = (*(int *)(a1 + 0x14) - iVar2) * 2 + 0xc + iVar5;
                iVar1 = iVar4;
            } else {
                iVar3 = iVar3 - iVar2;
                iVar5 = iVar5 + 0xc;
            }
            memmove(iVar1, iVar5, iVar3 << 1);
        } else if (*(int *)(a1 + 8) == 1) {
            switch_jump(8, auStack_38, auStack_28);
            iVar1 = shinobi_uses_libgcc_divide_helper_202924(*(u32 *)(a1 + 0x14), iVar3, r6, r7);
            switch_jump(8, auStack_40, &uStack_30);
            iVar2 = shinobi_uses_libgcc_divide_helper_202924(*(u32 *)(a1 + 0x14), iVar3, r6, r7);
            iVar3 = iVar1 + iVar4;
            if (iVar2 < iVar1) {
                memmove(iVar3, iVar5 + 0xc, *(int *)(a1 + 0x14) - iVar1);
                iVar5 = (*(int *)(a1 + 0x14) - iVar1) + 0xc + iVar5;
                iVar3 = iVar4;
            } else {
                iVar5 = iVar5 + 0xc;
                iVar2 = iVar2 - iVar1;
            }
            memmove(iVar3, iVar5, iVar2);
        }
    }
    return a4;
}

/*
 * shinobi_input_20227c  0x8c20227c
 * area name: in the shinobi library code range; behaviour name: mostly calls input functions
 * called by: shinobi_input_201b10
 */
u32 shinobi_input_20227c(char *a0) {
    int ar4_00;

    if (((*a0 != '\0') && (*a0 != '\x03')) &&
        (ar4_00 = maple_port_info(*(u32 *)(a0 + 0x24)), *(char *)(ar4_00 + 4) == '\b')) {
        shinobi_uses_switch_jump_20213e(ar4_00, a0);
    }
    return 0;
}

/*
 * alt_entry_202280  0x8c202280
 * probably an entry 4 bytes into 8c20227c: it reads registers that code sets before it
 */
u32 alt_entry_202280(u32 unused_a0, u32 a1) {
    int a4;
    char *unaff_r14;

    if (((*unaff_r14 != '\0') && (*unaff_r14 != '\x03')) &&
        (a4 = maple_port_info(*(u32 *)(unaff_r14 + 0x24), a1), *(char *)(a4 + 4) == '\b')) {
        shinobi_uses_switch_jump_20213e(a4, unaff_r14);
    }
    return 0;
}

/*
 * shinobi_uses_field_ptr_f_wrap_2022ac  0x8c2022ac
 * area name: in the shinobi library code range; behaviour name: its main named callee is field_ptr_f_wrap
 * called by: alt_entry_202786, shinobi_uses_maple_cmd15_func10_hooked_202342,
 * shinobi_uses_maple_device_reset_hooked_202782
 */
u32 shinobi_uses_field_ptr_f_wrap_2022ac(int a0, u8 *a1) {
    int iVar1;
    u32 uVar2;
    u8 uVar3;

    iVar1 = *(int *)(a0 + 0x28);
    if (((iVar1 == 0) || (iVar1 == 1)) || (iVar1 == 2)) {
        *a1 = 2;
        uVar2 = shinobi_calc_202302(a0);
        a1[1] = (char)uVar2;
        a1[2] = 0;
        a1[3] = 0;
    } else {
        if (iVar1 == 3) {
            uVar3 = 1;
        } else {
            if (iVar1 != 4) {
                return iVar1;
            }
            uVar3 = 3;
        }
        *a1 = uVar3;
        uVar2 = field_ptr_f_wrap(a0);
        a1[1] = (char)uVar2;
        a1[2] = 0;
        a1[3] = 0;
    }
    return 0;
}

/*
 * alt_entry_2022b8  0x8c2022b8
 * probably an entry 12 bytes into 8c2022ac: it reads registers that code sets before it
 */
u32 alt_entry_2022b8(int a0) {
    u8 uVar1;
    int iVar2;
    u32 uVar3;
    u8 uVar4;
    int unaff_r12;
    u32 unaff_r13;
    u8 *unaff_r14;

    iVar2 = *(int *)(a0 + 0x28);
    uVar1 = (u8)unaff_r13;
    if (((iVar2 == 0) || (iVar2 == 1)) || (iVar2 == 2)) {
        *unaff_r14 = 2;
        uVar3 = shinobi_calc_202302(a0);
        *(u8 *)(unaff_r12 + 1) = (char)uVar3;
        unaff_r14[2] = uVar1;
        unaff_r14[3] = uVar1;
    } else {
        if (iVar2 == 3) {
            uVar4 = 1;
        } else {
            if (iVar2 != 4) {
                return iVar2;
            }
            uVar4 = 3;
        }
        *unaff_r14 = uVar4;
        uVar3 = field_ptr_f_wrap(a0);
        *(u8 *)(unaff_r12 + 1) = (char)uVar3;
        unaff_r14[2] = uVar1;
        unaff_r14[3] = uVar1;
    }
    return unaff_r13;
}

/*
 * shinobi_calc_202302  0x8c202302
 * area name: in the shinobi library code range; behaviour name: integer arithmetic on its arguments
 * called by: alt_entry_2022b8, shinobi_uses_field_ptr_f_wrap_2022ac
 */
u32 shinobi_calc_202302(int a0) {
    u32 uVar1;

    uVar1 = 0;
    if (*(int *)(a0 + 0x28) == 1) {
        uVar1 = (u32)0x80;
    }
    if (*(int *)(a0 + 4) == 1) {
        uVar1 = uVar1 | 4;
    }
    if (*(int *)(a0 + 8) == 1) {
        uVar1 = uVar1 | 1;
    }
    return uVar1;
}

/*
 * field_ptr_f_wrap  0x8c202330
 * only calls field_ptr_f
 * called by: alt_entry_2022b8, shinobi_uses_field_ptr_f_wrap_2022ac
 */
u32 field_ptr_f_wrap(int a0) {
    u32 uVar1;

    uVar1 = field_ptr_f(*(u32 *)(a0 + 0x18));
    return uVar1;
}

/*
 * shinobi_uses_maple_cmd15_func10_hooked_202342  0x8c202342
 * area name: in the shinobi library code range; behaviour name: its main named callee is maple_cmd15_func10_hooked
 */
int shinobi_uses_maple_cmd15_func10_hooked_202342(char *a0, u32 unused_a1, u32 a2, u32 a3) {
    char cVar1;
    bool bVar2;
    int iVar3;
    u8 uStack_14;
    u8 uStack_13;
    u8 uStack_12;
    u8 uStack_11;

    cVar1 = *a0;
    bVar2 = false;
    if (cVar1 == '\0') {
        iVar3 = *(int *)(a0 + 0x28);
        if ((iVar3 == 0) || (iVar3 != 1))
            goto LAB_8c2023fe;
    LAB_8c2023be:
        iVar3 = shinobi_uses_field_ptr_f_wrap_2022ac(a0, &uStack_14);
    } else {
        if (cVar1 == '\x01') {
            iVar3 = *(int *)(a0 + 0x28);
            if ((iVar3 != 1) && (iVar3 != 2)) {
            joined_r0x8c20239e:
                if (iVar3 != 4)
                    goto LAB_8c2023fe;
                goto LAB_8c2023be;
            }
        } else if (cVar1 == '\x02') {
            iVar3 = *(int *)(a0 + 0x28);
            if (iVar3 == 3)
                goto LAB_8c2023be;
            if (iVar3 != 2)
                goto LAB_8c2023fe;
        } else if (cVar1 != '\x04') {
            if (cVar1 == '\x05') {
                shinobi_uses_field_ptr_f_wrap_2022ac(a0, &uStack_14);
                iVar3 = 0;
                uStack_14 = (u8)0xfc;
                uStack_13 = 0;
                uStack_12 = 0;
                uStack_11 = 0;
            } else {
                if (cVar1 == '\x06') {
                    iVar3 = *(int *)(a0 + 0x28);
                    goto joined_r0x8c20239e;
                }
                iVar3 = shinobi_uses_field_ptr_f_wrap_2022ac(a0, &uStack_14);
            }
            goto LAB_8c2023fc;
        }
        iVar3 = shinobi_uses_field_ptr_f_wrap_2022ac(a0, &uStack_14);
    }
LAB_8c2023fc:
    bVar2 = true;
LAB_8c2023fe:
    if (bVar2) {
        iVar3 = maple_cmd15_func10_hooked(*(u32 *)(a0 + 0x24), &uStack_14, a2, a3);
        *(int *)(a0 + 0x1c) = iVar3;
        a0[0x20] = '\x01';
        a0[0x21] = '\0';
        a0[0x22] = '\0';
        a0[0x23] = '\0';
    } else {
        a0[0x20] = '\0';
        a0[0x21] = '\0';
        a0[0x22] = '\0';
        a0[0x23] = '\0';
    }
    *(u32 *)(a0 + 0x2c) = *(u32 *)(a0 + 0x28);
    return iVar3;
}

/*
 * shinobi_input_202424  0x8c202424
 * area name: in the shinobi library code range; behaviour name: mostly calls input functions
 * called by: shinobi_input_201b10
 */
u32 shinobi_input_202424(char *a0, u32 a1, u32 a2, u32 a3) {
    u8 *puVar1;
    int iVar2;
    u32 uVar3;
    u32 uVar4;

    iVar2 = shinobi_input_201f58(*(u32 *)(a0 + 0x24), a1);
    puVar1 = (&maple_port_info);
    if (iVar2 == 1) {
        if (*(int *)(a0 + 0x30) == 0) {
            uVar3 = maple_device_reset_hooked(*(u32 *)(a0 + 0x24), a1, a2, a3);
            *(u32 *)(a0 + 0x1c) = uVar3;
            a0[0x30] = '\x01';
            a0[0x31] = '\0';
            a0[0x32] = '\0';
            a0[0x33] = '\0';
        } else {
            if (*(int *)(a0 + 0x30) == 1) {
                iVar2 = maple_port_info(*(u32 *)(a0 + 0x24), a1);
                if (*(char *)(iVar2 + 4) != '\a') {
                    uVar3 = maple_device_reset_hooked(*(u32 *)(a0 + 0x24), a1, a2, a3);
                    *(u32 *)(a0 + 0x1c) = uVar3;
                    return uVar3;
                }
                uVar3 = maple_device_request_hooked(*(u32 *)(a0 + 0x24), a1, a2, a3);
                *(u32 *)(a0 + 0x1c) = uVar3;
                uVar4 = 2;
            } else {
                if (*(int *)(a0 + 0x30) != 2) {
                    if (*(int *)(a0 + 0x30) == 3) {
                        iVar2 = maple_port_info(*(u32 *)(a0 + 0x24), a1);
                        if (*(char *)(iVar2 + 4) == '\a') {
                            a0[0x30] = '\x04';
                            a0[0x31] = '\0';
                            a0[0x32] = '\0';
                            a0[0x33] = '\0';
                        } else {
                            a0[0x28] = '\x04';
                            a0[0x29] = '\0';
                            a0[0x2a] = '\0';
                            a0[0x2b] = '\0';
                            *a0 = '\x01';
                            shinobi_uses_maple_device_reset_hooked_202782(a0);
                        }
                    }
                    if ((*(int *)(a0 + 0x20) != 0) && (-1 < *(int *)(a0 + 0x1c))) {
                        iVar2 = shinobi_uses_libgcc_divide_helper_202a30(*(u32 *)(a0 + 0x24));
                        if ((iVar2 == 0) && (*a0 != '\x03')) {
                            uVar3 = *(u32 *)(a0 + 0x1c);
                            iVar2 = shinobi_calls_one_201f8a(*(u32 *)(a0 + 0x24), uVar3, a2, a3);
                            if (iVar2 != 1) {
                                return iVar2;
                            }
                            iVar2 = (*(code *)puVar1)(*(u32 *)(a0 + 0x24), uVar3, a2, a3);
                            a1 = shinobi_test_201fb8(a0, (int)*(char *)(iVar2 + 4));
                            shinobi_input_20254c(a0, a1);
                        } else {
                            a0[1] = *a0;
                            *a0 = '\x06';
                            a1 = *(u32 *)(a0 + 0x1c);
                            iVar2 = shinobi_calls_one_201f8a(*(u32 *)(a0 + 0x24), a1, a2, a3);
                            if (iVar2 != 1) {
                                return iVar2;
                            }
                        }
                        shinobi_update_fields_202682(a0);
                    }
                    uVar3 = shinobi_uses_maple_device_reset_hooked_202782(a0);
                    return uVar3;
                }
                iVar2 = maple_port_info(*(u32 *)(a0 + 0x24), a1);
                if (*(char *)(iVar2 + 4) != '\x05') {
                    uVar3 = maple_device_request_hooked(*(u32 *)(a0 + 0x24), a1, a2, a3);
                    *(u32 *)(a0 + 0x1c) = uVar3;
                    return uVar3;
                }
                a0[0x28] = '\x04';
                a0[0x29] = '\0';
                a0[0x2a] = '\0';
                a0[0x2b] = '\0';
                *a0 = '\x01';
                uVar3 = shinobi_uses_maple_device_reset_hooked_202782(a0);
                uVar4 = 3;
            }
            *(u32 *)(a0 + 0x30) = uVar4;
        }
    } else {
        uVar3 = 0x44;
        *a0 = '\0';
        a0[0x1c] = '\0';
        a0[0x1d] = '\0';
        a0[0x1e] = '\0';
        a0[0x1f] = '\0';
        a0[0x20] = '\0';
        a0[0x21] = '\0';
        a0[0x22] = '\0';
        a0[0x23] = '\0';
        a0[0x2c] = '\0';
        a0[0x2d] = '\0';
        a0[0x2e] = '\0';
        a0[0x2f] = '\0';
        a0[0x44] = '\0';
        a0[0x45] = '\0';
        a0[0x46] = '\0';
        a0[0x47] = '\0';
        a0[0x30] = '\0';
        a0[0x31] = '\0';
        a0[0x32] = '\0';
        a0[0x33] = '\0';
    }
    return uVar3;
}

/*
 * shinobi_input_20254c  0x8c20254c
 * area name: in the shinobi library code range; behaviour name: mostly calls input functions
 * called by: shinobi_input_202424
 */
u32 shinobi_input_20254c(u8 *a0, u32 a1) {
    u32 uVar1;
    int iVar2;
    u32 ar5_00;
    u8 bVar3;

    if (*a0 == 3) {
        return 3;
    }
    uVar1 = a1;
    if (a1 == 0xffffffff) {
        uVar1 = (u32)*a0;
        if (uVar1 == 4) {
            *a0 = 3;
        } else {
            *a0 = 4;
        }
    }
    if (a1 != 0) {
        return uVar1;
    }
    if (*a0 == 0) {
        iVar2 = *(int *)(a0 + 0x2c);
        if (iVar2 != 1)
            goto LAB_8c20262e;
    } else if ((*a0 != 1) || (iVar2 = 1, *(int *)(a0 + 0x2c) != 1)) {
        if (*a0 == 2) {
            iVar2 = *(int *)(a0 + 0x2c);
            if (iVar2 == 2)
                goto LAB_8c20262e;
            if ((*a0 == 2) && (*(int *)(a0 + 0x2c) == 3)) {
                ar5_00 = maple_port_info(*(u32 *)(a0 + 0x24));
                iVar2 = shinobi_update_fields_20200c(a0, ar5_00);
                if (iVar2 == 0) {
                    return 0;
                }
                *a0 = 5;
                return iVar2;
            }
        }
        if (*a0 == 4) {
            iVar2 = 4;
            if (*(int *)(a0 + 0x2c) == 0)
                goto LAB_8c20262e;
            if (*a0 == 4) {
                iVar2 = 1;
                if (*(int *)(a0 + 0x2c) == 1)
                    goto LAB_8c202640;
                if (*a0 == 4) {
                    iVar2 = *(int *)(a0 + 0x2c);
                    if (iVar2 == 2) {
                    LAB_8c20262e:
                        bVar3 = 1;
                        goto LAB_8c202642;
                    }
                    if (*a0 == 4) {
                        iVar2 = *(int *)(a0 + 0x2c);
                        if (iVar2 == 3)
                            goto LAB_8c202640;
                        if ((*a0 == 4) && (iVar2 = *(int *)(a0 + 0x2c), iVar2 == 4))
                            goto LAB_8c20262e;
                    }
                }
            }
        }
        if ((*a0 != 5) || (iVar2 = 1, *(int *)(a0 + 0x2c) != 1)) {
            uVar1 = (u32)*a0;
            if ((uVar1 == 6) && (uVar1 = *(u32 *)(a0 + 0x2c), uVar1 == 4)) {
                if (a0[1] == 2) {
                    *a0 = 0;
                    a0[0x28] = 1;
                    a0[0x29] = 0;
                    a0[0x2a] = 0;
                    a0[0x2b] = 0;
                } else {
                    *a0 = 2;
                    a0[0x28] = 2;
                    a0[0x29] = 0;
                    a0[0x2a] = 0;
                    a0[0x2b] = 0;
                }
                return (u32)a0[1];
            }
            return uVar1;
        }
    }
LAB_8c202640:
    bVar3 = 2;
LAB_8c202642:
    *a0 = bVar3;
    return iVar2;
}

/*
 * alt_entry_202550  0x8c202550
 * probably an entry 4 bytes into 8c20254c: it reads registers that code sets before it
 */
u32 alt_entry_202550(u32 unused_a0, u32 a1) {
    u32 uVar1;
    int iVar2;
    u32 a5;
    u8 bVar3;
    u8 *unaff_r14;

    if (*unaff_r14 == 3) {
        return 3;
    }
    uVar1 = a1;
    if (a1 == 0xffffffff) {
        uVar1 = (u32)*unaff_r14;
        if (uVar1 == 4) {
            *unaff_r14 = 3;
        } else {
            *unaff_r14 = 4;
        }
    }
    if (a1 != 0) {
        return uVar1;
    }
    if (*unaff_r14 == 0) {
        iVar2 = *(int *)(unaff_r14 + 0x2c);
        if (iVar2 != 1)
            goto LAB_8c20262e;
    } else if ((*unaff_r14 != 1) || (iVar2 = 1, *(int *)(unaff_r14 + 0x2c) != 1)) {
        if (*unaff_r14 == 2) {
            iVar2 = *(int *)(unaff_r14 + 0x2c);
            if (iVar2 == 2)
                goto LAB_8c20262e;
            if ((*unaff_r14 == 2) && (*(int *)(unaff_r14 + 0x2c) == 3)) {
                a5 = maple_port_info(*(u32 *)(unaff_r14 + 0x24), 0);
                iVar2 = shinobi_update_fields_20200c(unaff_r14, a5);
                if (iVar2 == 0) {
                    return 0;
                }
                *unaff_r14 = 5;
                return iVar2;
            }
        }
        if (*unaff_r14 == 4) {
            iVar2 = 4;
            if (*(int *)(unaff_r14 + 0x2c) == 0)
                goto LAB_8c20262e;
            if (*unaff_r14 == 4) {
                iVar2 = 1;
                if (*(int *)(unaff_r14 + 0x2c) == 1)
                    goto LAB_8c202640;
                if (*unaff_r14 == 4) {
                    iVar2 = *(int *)(unaff_r14 + 0x2c);
                    if (iVar2 == 2) {
                    LAB_8c20262e:
                        bVar3 = 1;
                        goto LAB_8c202642;
                    }
                    if (*unaff_r14 == 4) {
                        iVar2 = *(int *)(unaff_r14 + 0x2c);
                        if (iVar2 == 3)
                            goto LAB_8c202640;
                        if ((*unaff_r14 == 4) && (iVar2 = *(int *)(unaff_r14 + 0x2c), iVar2 == 4))
                            goto LAB_8c20262e;
                    }
                }
            }
        }
        if ((*unaff_r14 != 5) || (iVar2 = 1, *(int *)(unaff_r14 + 0x2c) != 1)) {
            uVar1 = (u32)*unaff_r14;
            if ((uVar1 == 6) && (uVar1 = *(u32 *)(unaff_r14 + 0x2c), uVar1 == 4)) {
                if (unaff_r14[1] == 2) {
                    *unaff_r14 = 0;
                    unaff_r14[0x28] = 1;
                    unaff_r14[0x29] = 0;
                    unaff_r14[0x2a] = 0;
                    unaff_r14[0x2b] = 0;
                } else {
                    *unaff_r14 = 2;
                    unaff_r14[0x28] = 2;
                    unaff_r14[0x29] = 0;
                    unaff_r14[0x2a] = 0;
                    unaff_r14[0x2b] = 0;
                }
                return (u32)unaff_r14[1];
            }
            return uVar1;
        }
    }
LAB_8c202640:
    bVar3 = 2;
LAB_8c202642:
    *unaff_r14 = bVar3;
    return iVar2;
}

/*
 * shinobi_update_fields_202682  0x8c202682
 * area name: in the shinobi library code range; behaviour name: conditionally writes members
 * called by: shinobi_input_202424
 */
u32 shinobi_update_fields_202682(u8 *a0) {
    u32 uVar1;
    u32 uVar2;
    int iVar3;

    uVar1 = (u32)*a0;
    if (uVar1 == 1) {
        uVar1 = *(u32 *)(a0 + 0x28);
        if (uVar1 != 0) {
            if (uVar1 == 2) {
            LAB_8c2026ca:
                a0[0x28] = 0;
                a0[0x29] = 0;
                a0[0x2a] = 0;
                a0[0x2b] = 0;
                return uVar1;
            }
            if (uVar1 != 1) {
                if (uVar1 == 3) {
                    a0[0x28] = 1;
                    a0[0x29] = 0;
                    a0[0x2a] = 0;
                    a0[0x2b] = 0;
                    return 3;
                }
                if (uVar1 != 4)
                    goto LAB_8c2026ca;
            }
        }
    } else if (uVar1 == 2) {
        uVar1 = *(u32 *)(a0 + 0x28);
        if (uVar1 == 0) {
            a0[0x28] = 2;
            a0[0x29] = 0;
            a0[0x2a] = 0;
            a0[0x2b] = 0;
            return 0;
        }
        if ((uVar1 == 1) || ((uVar1 != 2 && (uVar1 != 3)))) {
            a0[0x28] = 3;
            a0[0x29] = 0;
            a0[0x2a] = 0;
            a0[0x2b] = 0;
            return uVar1;
        }
    } else {
        if (uVar1 == 4) {
            uVar2 = *(u32 *)(a0 + 0x28);
            *(u32 *)(a0 + 0x28) = *(u32 *)(a0 + 0x2c);
            return uVar2;
        }
        if (uVar1 == 5) {
            uVar2 = *(u32 *)(a0 + 0x28);
            a0[0x28] = 1;
            a0[0x29] = 0;
            a0[0x2a] = 0;
            a0[0x2b] = 0;
            return uVar2;
        }
        if (uVar1 == 6) {
            iVar3 = *(int *)(a0 + 0x2c);
            if (iVar3 == 100) {
                a0[0x28] = 0x65;
                a0[0x29] = 0;
                a0[0x2a] = 0;
                a0[0x2b] = 0;
                return 100;
            }
            if (iVar3 != 0x65) {
                a0[0x28] = 100;
                a0[0x29] = 0;
                a0[0x2a] = 0;
                a0[0x2b] = 0;
                return iVar3;
            }
            a0[0x28] = 4;
            a0[0x29] = 0;
            a0[0x2a] = 0;
            a0[0x2b] = 0;
            return 0x65;
        }
        if (uVar1 == 0) {
            uVar1 = *(u32 *)(a0 + 0x28);
            if ((((uVar1 != 0) && (uVar1 != 1)) && (uVar1 != 2)) && (uVar1 != 3)) {
                return uVar1;
            }
        } else if (uVar1 == 3) {
            uVar1 = *(u32 *)(a0 + 0x28);
            if (((uVar1 != 0) && (uVar1 != 1)) && ((uVar1 != 2 && (uVar1 != 3)))) {
                return uVar1;
            }
        } else {
            *a0 = 3;
        }
    }
    return uVar1;
}

/*
 * shinobi_uses_maple_device_reset_hooked_202782  0x8c202782
 * area name: in the shinobi library code range; behaviour name: its main named callee is maple_device_reset_hooked
 * called by: shinobi_input_202424
 */
int shinobi_uses_maple_device_reset_hooked_202782(char *a0) {
    char cVar1;
    bool bVar2;
    int iVar3;
    u32 uVar4;
    u8 uStack_14;
    u8 uStack_13;
    u8 uStack_12;
    u8 uStack_11;
    u32 uStack_c;

    if (*(int *)(a0 + 0x28) == 100) {
        uVar4 = maple_device_reset_hooked(*(u32 *)(a0 + 0x24));
    LAB_8c2027a6:
        *(u32 *)(a0 + 0x1c) = uVar4;
        a0[0x20] = '\x01';
        a0[0x21] = '\0';
        a0[0x22] = '\0';
        a0[0x23] = '\0';
        *(u32 *)(a0 + 0x2c) = *(u32 *)(a0 + 0x28);
        return uVar4;
    }
    if (*(int *)(a0 + 0x28) == 0x65) {
        uVar4 = maple_device_request_hooked(*(u32 *)(a0 + 0x24));
        goto LAB_8c2027a6;
    }
    uStack_c = 1;
    cVar1 = *a0;
    bVar2 = false;
    if (cVar1 == '\0') {
        iVar3 = *(int *)(a0 + 0x28);
        if ((iVar3 == 0) || (iVar3 != 1))
            goto LAB_8c2023fe;
    LAB_8c2023be:
        iVar3 = shinobi_uses_field_ptr_f_wrap_2022ac(a0, &uStack_14);
    } else {
        if (cVar1 == '\x01') {
            iVar3 = *(int *)(a0 + 0x28);
            if ((iVar3 != 1) && (iVar3 != 2)) {
            joined_r0x8c20239e:
                if (iVar3 != 4)
                    goto LAB_8c2023fe;
                goto LAB_8c2023be;
            }
        } else if (cVar1 == '\x02') {
            iVar3 = *(int *)(a0 + 0x28);
            if (iVar3 == 3)
                goto LAB_8c2023be;
            if (iVar3 != 2)
                goto LAB_8c2023fe;
        } else if (cVar1 != '\x04') {
            if (cVar1 == '\x05') {
                shinobi_uses_field_ptr_f_wrap_2022ac(a0, &uStack_14);
                iVar3 = 0;
                uStack_14 = (u8)0xfc;
                uStack_13 = 0;
                uStack_12 = 0;
                uStack_11 = 0;
            } else {
                if (cVar1 == '\x06') {
                    iVar3 = *(int *)(a0 + 0x28);
                    goto joined_r0x8c20239e;
                }
                iVar3 = shinobi_uses_field_ptr_f_wrap_2022ac(a0, &uStack_14);
            }
            goto LAB_8c2023fc;
        }
        iVar3 = shinobi_uses_field_ptr_f_wrap_2022ac(a0, &uStack_14);
    }
LAB_8c2023fc:
    bVar2 = true;
LAB_8c2023fe:
    if (bVar2) {
        iVar3 = maple_cmd15_func10_hooked(*(u32 *)(a0 + 0x24), &uStack_14);
        *(int *)(a0 + 0x1c) = iVar3;
        a0[0x20] = '\x01';
        a0[0x21] = '\0';
        a0[0x22] = '\0';
        a0[0x23] = '\0';
    } else {
        a0[0x20] = '\0';
        a0[0x21] = '\0';
        a0[0x22] = '\0';
        a0[0x23] = '\0';
    }
    *(u32 *)(a0 + 0x2c) = *(u32 *)(a0 + 0x28);
    return iVar3;
}

/*
 * alt_entry_202786  0x8c202786
 * probably an entry 4 bytes into 8c202782: it reads registers that code sets before it
 */
int alt_entry_202786(u32 unused_a0, u32 unused_a1, u32 a2, u32 a3) {
    char cVar1;
    bool bVar2;
    int iVar3;
    u32 uVar4;
    char *unaff_r14;
    u8 uStack_10;
    u8 uStack_f;
    u8 uStack_e;
    u8 uStack_d;

    if (*(int *)(unaff_r14 + 0x28) == 100) {
        uVar4 = maple_device_reset_hooked(*(u32 *)(unaff_r14 + 0x24), unused_a1, a2, a3);
    LAB_8c2027a6:
        *(u32 *)(unaff_r14 + 0x1c) = uVar4;
        unaff_r14[0x20] = '\x01';
        unaff_r14[0x21] = '\0';
        unaff_r14[0x22] = '\0';
        unaff_r14[0x23] = '\0';
        *(u32 *)(unaff_r14 + 0x2c) = *(u32 *)(unaff_r14 + 0x28);
        return uVar4;
    }
    if (*(int *)(unaff_r14 + 0x28) == 0x65) {
        uVar4 = maple_device_request_hooked(*(u32 *)(unaff_r14 + 0x24), unused_a1, a2, a3);
        goto LAB_8c2027a6;
    }
    cVar1 = *unaff_r14;
    bVar2 = false;
    if (cVar1 == '\0') {
        iVar3 = *(int *)(unaff_r14 + 0x28);
        if ((iVar3 == 0) || (iVar3 != 1))
            goto LAB_8c2023fe;
    LAB_8c2023be:
        iVar3 = shinobi_uses_field_ptr_f_wrap_2022ac(unaff_r14, &uStack_10);
    } else {
        if (cVar1 == '\x01') {
            iVar3 = *(int *)(unaff_r14 + 0x28);
            if ((iVar3 != 1) && (iVar3 != 2)) {
            joined_r0x8c20239e:
                if (iVar3 != 4)
                    goto LAB_8c2023fe;
                goto LAB_8c2023be;
            }
        } else if (cVar1 == '\x02') {
            iVar3 = *(int *)(unaff_r14 + 0x28);
            if (iVar3 == 3)
                goto LAB_8c2023be;
            if (iVar3 != 2)
                goto LAB_8c2023fe;
        } else if (cVar1 != '\x04') {
            if (cVar1 == '\x05') {
                shinobi_uses_field_ptr_f_wrap_2022ac(unaff_r14, &uStack_10);
                iVar3 = 0;
                uStack_10 = (u8)0xfc;
                uStack_f = 0;
                uStack_e = 0;
                uStack_d = 0;
            } else {
                if (cVar1 == '\x06') {
                    iVar3 = *(int *)(unaff_r14 + 0x28);
                    goto joined_r0x8c20239e;
                }
                iVar3 = shinobi_uses_field_ptr_f_wrap_2022ac(unaff_r14, &uStack_10);
            }
            goto LAB_8c2023fc;
        }
        iVar3 = shinobi_uses_field_ptr_f_wrap_2022ac(unaff_r14, &uStack_10);
    }
LAB_8c2023fc:
    bVar2 = true;
LAB_8c2023fe:
    if (bVar2) {
        iVar3 = maple_cmd15_func10_hooked(*(u32 *)(unaff_r14 + 0x24), &uStack_10);
        *(int *)(unaff_r14 + 0x1c) = iVar3;
        unaff_r14[0x20] = '\x01';
        unaff_r14[0x21] = '\0';
        unaff_r14[0x22] = '\0';
        unaff_r14[0x23] = '\0';
    } else {
        unaff_r14[0x20] = '\0';
        unaff_r14[0x21] = '\0';
        unaff_r14[0x22] = '\0';
        unaff_r14[0x23] = '\0';
    }
    *(u32 *)(unaff_r14 + 0x2c) = *(u32 *)(unaff_r14 + 0x28);
    return iVar3;
}

/*
 * shinobi_uses_switch_jump_2027c0  0x8c2027c0
 * area name: in the shinobi library code range; behaviour name: its main named callee is switch_jump
 * called by: shinobi_uses_switch_jump_20213e
 */
u32 shinobi_uses_switch_jump_2027c0(int a0, u32 unused_a1, u32 unused_a2, u32 unused_a3, u32 s0, int s4, u32 s8) {
    u32 uVar1;
    int iStack_c;
    u32 uStack_8;

    if (a0 < 1) {
        uVar1 = switch_jump(8, s0, &s4);
        return uVar1;
    }
    uStack_8 = a0 + s8;
    iStack_c = s4;
    if (uStack_8 < s8) {
        iStack_c = s4 + 1;
    }
    uVar1 = switch_jump(8, s0, &iStack_c);
    return uVar1;
}

/*
 * shinobi_uses_switch_jump_20280c  0x8c20280c
 * area name: in the shinobi library code range; behaviour name: its main named callee is switch_jump
 * called by: shinobi_uses_switch_jump_201cf6
 */
u32 shinobi_uses_switch_jump_20280c(u32 unused_a0, u32 unused_a1, u32 unused_a2, u32 unused_a3, u32 s0, int s4, int s8,
                                    int s12, u32 s16) {
    u32 uVar1;
    bool bVar2;
    int iStack_c;
    int iStack_8;

    bVar2 = s16 <= 0xffffffffU - s8;
    if (bVar2) {
        iStack_8 = s8 + s16;
    } else {
        iStack_8 = s16 + s8 + 1;
    }
    iStack_c = s4 + s12 + (u32)!bVar2;
    uVar1 = switch_jump(8, s0, &iStack_c);
    return uVar1;
}

/*
 * shinobi_uses_switch_jump_20284e  0x8c20284e
 * area name: in the shinobi library code range; behaviour name: its main named callee is switch_jump
 * called by: shinobi_uses_switch_jump_20202e
 */
u32 shinobi_uses_switch_jump_20284e(u32 unused_a0, u32 unused_a1, u32 unused_a2, u32 unused_a3, u32 s0, int s4, u32 s8,
                                    int s12, u32 s16) {
    int iVar1;
    u32 uVar2;
    u8 auStack_30[8];
    u8 auStack_28[8];
    int iStack_20;
    int iStack_1c;

    switch_jump(8, auStack_28, &s12);
    switch_jump(8, auStack_30, &s4);
    iVar1 = cmp_u64_pair(unused_a0, unused_a1, unused_a2, unused_a3);
    if (iVar1 == 1) {
        iStack_1c = s8 - s16;
        iStack_20 = (s4 - s12) - (u32)(s8 < s16);
    } else {
        iStack_1c = 0;
        iStack_20 = 0;
    }
    uVar2 = switch_jump(8, s0, &iStack_20);
    return uVar2;
}

/*
 * shinobi_uses_switch_jump_2028cc  0x8c2028cc
 * area name: in the shinobi library code range; behaviour name: its main named callee is switch_jump
 * called by: shinobi_uses_switch_jump_201c92
 */
u32 shinobi_uses_switch_jump_2028cc(u32 unused_a0, u32 unused_a1, u32 unused_a2, u32 unused_a3, u32 s0, int s4, u32 s8,
                                    int s12) {
    int iVar1;
    u32 uVar2;
    u32 in_stack_ffffffe4;
    u32 in_stack_ffffffe8;
    u32 in_stack_ffffffec;
    u32 in_stack_fffffff0;

    switch_jump(8, &stack0xffffffec, &s8);
    switch_jump(8, &stack0xffffffe4, &s0);
    iVar1 = cmp_u64_pair(unused_a0, unused_a1, unused_a2, unused_a3, in_stack_ffffffe4, in_stack_ffffffe8,
                         in_stack_ffffffec, in_stack_fffffff0);
    if (iVar1 == 1) {
        if ((s8 < s0) || (uVar2 = s4 - s12, 0x7fffffff < uVar2)) {
            uVar2 = 0x7fffffff;
        }
    } else {
        uVar2 = 0;
    }
    return uVar2;
}

/*
 * shinobi_uses_switch_jump_2028d0  0x8c2028d0
 * area name: in the shinobi library code range; behaviour name: its main named callee is switch_jump
 */
u32 shinobi_uses_switch_jump_2028d0(u32 unused_a0, u32 unused_a1, u32 unused_a2, u32 unused_a3, u32 s0, u32 s4, int s8,
                                    u32 s12, int s16) {
    int in_r0;
    int iVar1;
    u32 uVar2;
    u8 auStack_10[8];
    u8 auStack_8[4];

    switch_jump(in_r0, auStack_8 + -in_r0, &s12);
    switch_jump(8, auStack_10 + -in_r0, &s4);
    iVar1 = cmp_u64_pair(unused_a0, unused_a1, unused_a2, unused_a3);
    if (iVar1 == 1) {
        if ((s12 < s4) || (uVar2 = s8 - s16, 0x7fffffff < uVar2)) {
            uVar2 = 0x7fffffff;
        }
    } else {
        uVar2 = 0;
    }
    return uVar2;
}

/*
 * shinobi_uses_libgcc_divide_helper_202924  0x8c202924
 * area name: in the shinobi library code range; behaviour name: its main named callee is libgcc_divide_helper_0106dc
 * called by: shinobi_uses_switch_jump_201e14, shinobi_uses_switch_jump_20213e
 */
u32 shinobi_uses_libgcc_divide_helper_202924(int a0, u32 unused_a1, u32 unused_a2, u32 unused_a3, int s0) {
    int iVar1;
    int iVar2;
    int iVar3;
    u32 uVar4;
    u32 in_stack_00000004;

    if (a0 < 1) {
        return 0;
    }
    iVar1 = libgcc_divide_helper_0106dc(in_stack_00000004, a0);
    if (s0 == 0) {
        return iVar1;
    }
    iVar2 = libgcc_divide_helper_0106dc(0xffffffff, a0);
    iVar2 = iVar2 + 1;
    if (iVar2 == a0) {
        iVar2 = 0;
    }
    iVar3 = libgcc_divide_helper_0106dc(s0, a0);
    uVar4 = libgcc_divide_helper_0106dc(iVar3 * iVar2 + iVar1, a0);
    return uVar4;
}

/*
 * shinobi_uses_switch_jump_202976  0x8c202976
 * area name: in the shinobi library code range; behaviour name: its main named callee is switch_jump
 */
u32 shinobi_uses_switch_jump_202976(u32 unused_a0, u32 unused_a1, u32 unused_a2, u32 unused_a3, u32 s0, u32 s4,
                                    u32 s8) {
    u32 uVar1;
    int iStack_c;
    int iStack_8;

    iStack_8 = s8 << 1;
    if (s4 < 0x80000000) {
        iStack_c = s4 * 2 + (u32)(0x7fffffff < s8);
    } else {
        iStack_c = -1;
    }
    uVar1 = switch_jump(8, s0, &iStack_c);
    return uVar1;
}

/*
 * cmp_u64_pair  0x8c2029b4
 * compares the 64-bit values (s0, s4) and (s8, s12): -1, 0 or 1
 * called by: shinobi_uses_switch_jump_201bae, shinobi_uses_switch_jump_201c92, shinobi_uses_switch_jump_201e14,
 * shinobi_uses_switch_jump_20202e, shinobi_uses_switch_jump_20284e, shinobi_uses_switch_jump_2028cc,
 * shinobi_uses_switch_jump_2028d0
 */
u32 cmp_u64_pair(u32 unused_a0, u32 unused_a1, u32 unused_a2, u32 unused_a3, u32 s0, u32 s4, u32 s8, u32 s12) {
    if (s0 == s8) {
        if (s4 == s12) {
            return 0;
        }
        if (s12 < s4) {
            return 1;
        }
    } else if (s8 < s0) {
        return 1;
    }
    return 0xffffffff;
}

/*
 * maple_port_info_snapshot  0x8c2029fc
 * copies the first byte of each of the 24 maple port info records into the table at 8c47e928
 */
int maple_port_info_snapshot(void) {
    int iVar1;
    u8 *puVar2;
    u8 *pbVar3;
    int iVar4;
    int iVar5;
    int iVar6;

    puVar2 = (&maple_port_info);
    iVar1 = 0x8c47e928;
    iVar5 = 0;
    do {
        pbVar3 = (u8 *)(*(code *)puVar2)(iVar5);
        iVar6 = iVar5 + 1;
        iVar4 = iVar5 * 4;
        *(u32 *)(iVar4 + iVar1) = (u32)*pbVar3;
        iVar5 = iVar6;
    } while (iVar6 < 0x18);
    return iVar4;
}

/*
 * alt_entry_202a04  0x8c202a04
 * probably an entry 8 bytes into 8c2029fc: it reads registers that code sets before it
 */
int alt_entry_202a04(u32 unused_a0, u32 a1, u32 a2, u32 a3) {
    int iVar1;
    u8 *puVar2;
    u8 *pbVar3;
    int iVar4;
    int unaff_r13;
    int unaff_r14;
    int iVar5;

    puVar2 = (&maple_port_info);
    iVar1 = 0x8c47e928;
    do {
        pbVar3 = (u8 *)(*(code *)puVar2)(unaff_r14, a1, a2, a3);
        iVar5 = unaff_r14 + 1;
        iVar4 = unaff_r14 * 4;
        *(u32 *)(iVar4 + iVar1) = (u32)*pbVar3;
        unaff_r14 = iVar5;
    } while (iVar5 <= unaff_r13);
    return iVar4;
}

/*
 * shinobi_uses_libgcc_divide_helper_202a30  0x8c202a30
 * area name: in the shinobi library code range; behaviour name: its main named callee is libgcc_divide_helper_010468
 * called by: shinobi_input_201b10, shinobi_input_202424
 */
u32 shinobi_uses_libgcc_divide_helper_202a30(u32 a0) {
    int iVar1;

    iVar1 = libgcc_divide_helper_010468(a0, 6);
    iVar1 = shinobi_calls_calc_1efd34(iVar1 * 6);
    return (u32)((*(u8 *)(iVar1 + 2) & 0x1f) != 0);
}

/*
 * shinobi_uses_libgcc_divide_helper_202a34  0x8c202a34
 * area name: in the shinobi library code range; behaviour name: its main named callee is libgcc_divide_helper_010468
 */
u32 shinobi_uses_libgcc_divide_helper_202a34(void) {
    int iVar1;
    u32 in_r1;

    iVar1 = libgcc_divide_helper_010468(in_r1, 6);
    iVar1 = shinobi_calls_calc_1efd34(iVar1 * 6);
    return (u32)((*(u8 *)(iVar1 + 2) & 0x1f) != 0);
}

/*
 * shinobi_uses_sh4_dmac_202a80  0x8c202a80
 * area name: in the shinobi library code range; behaviour name: its main named callee is sh4_dmac_202c60
 * called by: kamui_draw_211f40
 */
u32 shinobi_uses_sh4_dmac_202a80(u32 *a0, int a1, u32 a2, int a3, int s0) {
    int iVar1;
    u32 *puVar2;
    u32 uVar3;
    u32 auStack_a30[4];
    u32 auStack_a18[640];
    u32 uStack_18;

    puVar2 = &g_8c273be0;
    auStack_a30[0] = g_8c26d250;
    auStack_a30[1] = g_8c26d254;
    auStack_a30[2] = g_8c26d258;
    auStack_a30[3] = g_8c26d25c;
    *(u32 **)(&g_8c4aa1bc + g_8c273be0 * 0x10) = a0;
    *(int *)(&g_8c4aa1c0 + g_8c273be0 * 0x10) = a1;
    *(u32 *)(&g_8c4aa1c4 + g_8c273be0 * 0x10) = a2;
    g_8c4aa1b8 = a3;
    *(int *)(&g_8c4aa1c8 + g_8c273be0 * 0x10) = s0;
    g_8c273be0 = g_8c273be0 + 1 & 1;
    g_8c4a9be0 = a3;
    if (g_8c4aa1f4 != 0) {
        puVar2 = (u32 *)0xff;
        a1 = a3;
        sh4_dmac_202c60(0xff, a3, a2);
    }
    iVar1 = get_g_8c2758e8();
    if (iVar1 == -0x80000000) {
        iVar1 = kamui_list_2036a0(g_8c4aa200, a0);
        if (iVar1 != 0) {
            return iVar1;
        }
        *a0 = 1;
        a0[1] = auStack_a30[g_8c4a9bd0];
        a0[2] = g_8c4a9bd0;
        a0[3] = g_8c4aa1e8;
        a0[4] = g_8c4aa1ec;
        if (a3 == 1) {
            a0[6] = 1;
        } else {
            a0[6] = 0;
        }
        if (s0 == 1) {
            for (puVar2 = auStack_a18; puVar2 < &uStack_18; puVar2 = puVar2 + 1) {
                *puVar2 = 0;
            }
            uVar3 = 0;
            if (a0[5] != 0) {
                do {
                    vram_20a87c(a0[7] + uVar3, auStack_a18, 0xa00);
                    uVar3 = uVar3 + 0xa00;
                } while (uVar3 < (u32)a0[5]);
            }
        }
    } else {
        kamui_set_flags_2758e8(0x200);
    }
    return 0;
}

/*
 * sh4_dmac_202c60  0x8c202c60
 * called by: kamui_uses_kamui_cfg_texture_memory_211120, kamui_uses_ta_fifo_21092e, shinobi_uses_sh4_dmac_202a80,
 * ta_uses_sh4_dmac_210e40
 */
u32 sh4_dmac_202c60(int a0, int a1, int a2) {
    short sVar1;
    int iVar2;
    u32 uVar3;
    int iVar4;
    u32 auStack_1c[4];
    u32 uStack_c;
    u32 uStack_8;

    auStack_1c[0] = *(u32 *)(&DATA_8c26d268);
    auStack_1c[1] = *(u32 *)((&DATA_8c26d268) + 4);
    auStack_1c[2] = *(u32 *)((&DATA_8c26d268) + 8);
    auStack_1c[3] = *(u32 *)((&DATA_8c26d268) + 0xc);
    uStack_c = *(u32 *)((&DATA_8c26d268) + 0x10);
    uStack_8 = *(u32 *)((&DATA_8c26d268) + 0x14);
    sVar1 = 0x280;
    if ((g_8c4a9bc8 != 1) && ((g_8c4a9bcc & 0x10) == 0)) {
        sVar1 = 0x140;
    }
    if (a1 == 1) {
        uVar3 = a2 + 0x1fU & 0xffffffe0;
        g_8c4a9e74 = g_8c4a9e74 & 0xffa0ffff | 0x400000 | (a2 + 0x1fU >> 5 & 0x1f) << 0x10;
    } else if (g_8c4a9bc8 == 1) {
        uVar3 = (u32)0x1e0;
    } else if (((g_8c4a9bcc & 1) == 1) || ((g_8c4a9bcc & 0x2c) != 0x20)) {
        if ((g_8c4a9bcc & 0x20) == 0) {
            if ((g_8c4a9bcc & 0x62) == 0x42) {
                iVar4 = *(int *)(0x8c4aa084 + g_8c4a9bdc * 4);
                uVar3 = (int)(iVar4 + (u32)(iVar4 < 0)) >> 1;
            } else {
                uVar3 = (u32)0xf0;
            }
        } else if ((g_8c4a9bcc & 0x42) == 0x42) {
            uVar3 = *(u32 *)(0x8c4aa084 + g_8c4a9bdc * 4);
        } else {
            uVar3 = (u32)0x1e0;
        }
    } else {
        uVar3 = (u32)0xf0;
    }
    iVar4 = 0x8c4aa1a0;
    iVar2 = (int)0xff;
    *(int *)(0x8c4aa1a0 + 0x48) = (int)sVar1;
    *(u32 *)(iVar4 + 0x4c) = uVar3;
    if (a0 == iVar2) {
        a0 = g_8c4a9bd0;
    }
    *(u32 *)(iVar4 + 0x50) = auStack_1c[a0] >> 3;
    *(int *)(iVar4 + 0x60) = *(int *)(iVar4 + 0x48) * *(int *)(iVar4 + 0x4c) * *(int *)(iVar4 + 0x50);
    return 0x60;
}

/*
 * sh4_dmac_202e20  0x8c202e20
 * called by: ninja_draw_25d780
 */
u32 sh4_dmac_202e20(void) {
    int *piVar1;
    u32 *puVar2;
    u32 *puVar3;
    u32 *puVar4;
    int iVar5;
    u32 uVar6;
    u32 uVar7;
    int iVar8;

    piVar1 = 0xffa0002c;
    *0xffa00020 = 0;
    *0xffa00024 = 0;
    *0xffa00028 = 0;
    *piVar1 = (int)0x12c0;
    *0xffa00040 = 0x8201;
    *0xa05f6884 = 0;
    *0xff000038 = 0x10;
    *0xff00003c = 0x10;
    puVar4 = 0x8c47eb9c;
    puVar3 = 0x8c47eb90;
    puVar2 = 0x8c47eb88;
    g_8c47eb88 = 0;
    puVar2[1] = 0;
    puVar2 = 0x8c47eb94;
    uVar7 = (u32)0x100;
    g_8c47eb94 = 0;
    puVar2[1] = 0;
    uVar6 = 0;
    *puVar3 = 0;
    *puVar4 = 7;
    g_8c47eba0 = 1;
    iVar5 = 0x8c47e988;
    do {
        iVar8 = iVar5 + uVar6;
        uVar6 = uVar6 + 0x20;
        *(u32 *)(iVar8 + 0x18) = 0;
        *(u32 *)(iVar8 + uVar7 + 0x18) = 8;
    } while (uVar6 < uVar7);
    return 8;
}

/*
 * g2dma_202e82  0x8c202e82
 * called by: pvr_2069a0
 */
u32 g2dma_202e82(void) {
    u32 *puVar1;
    u32 *puVar2;
    u32 *puVar3;
    u32 *puVar4;
    int iVar5;
    int *piVar6;
    u32 uVar7;
    u32 uVar8;
    int iVar9;

    piVar6 = 0xa05f6808;
    *0xa05f6808 = 0;
    puVar1 = 0xa05f8008;
    *0xa05f8008 = 1;
    *puVar1 = 0;
    do {
    } while (*piVar6 != 0);
    *0xffa0002c = *0xffa0002c & 0xfffffffe;
    *puVar1 = 1;
    *puVar1 = 0;
    puVar2 = 0x8c47eb90;
    puVar1 = 0x8c47eb88;
    g_8c47eb88 = 0;
    puVar1[1] = 0;
    puVar4 = 0x8c47eba0;
    puVar3 = 0x8c47eb9c;
    puVar1 = 0x8c47eb94;
    g_8c47eb94 = 0;
    puVar1[1] = 0;
    *puVar2 = 0;
    iVar5 = 0x8c47e988;
    uVar8 = (u32)0x100;
    *puVar3 = 7;
    *puVar4 = 7;
    uVar7 = 0;
    do {
        iVar9 = iVar5 + uVar7;
        uVar7 = uVar7 + 0x20;
        *(u32 *)(iVar9 + 0x18) = 0;
        *(u32 *)(iVar9 + uVar8 + 0x18) = 8;
    } while (uVar7 < uVar8);
    return 0;
}

/*
 * sh4_dmac_202f40  0x8c202f40
 * called by: ta_draw_20b260, vram64_20a8e0
 */
int sh4_dmac_202f40(int a0, u32 a1, u32 a2, u32 a3, u32 *s0) {
    u16 uVar1;
    int iVar2;
    int *piVar3;
    int iVar4;
    int iVar5;
    int iVar6;
    int iVar7;
    int iVar8;
    u32 uVar9;
    int iVar10;
    int *piVar11;

    piVar3 = 0x8c47eb90;
    iVar2 = 0x8c47e988;
    if (a2 == 0) {
        iVar4 = (int)0x103;
    } else {
        uVar9 = (a3 & 8) >> 3;
        iVar4 = (int)0x100;
        iVar5 = uVar9 * 4;
        iVar7 = uVar9 * 0x100;
        iVar6 = *(int *)(0x8c47eb88 + iVar5);
        iVar10 = iVar6 * 0x20;
        if ((*(u32 *)(iVar7 + 0x8c47e988 + iVar10 + 0x18) & 3) == 0) {
            if ((a1 & 0x1f) != 0) {
                a1 = a1 + 0x1f & 0xffffffe0;
            }
            if ((a2 & 0x1f) != 0) {
                a2 = a2 + 0x1f & 0xffffffe0;
            }
            piVar11 = (int *)(iVar7 + 0x8c47e988 + iVar10);
            *piVar11 = g_8c47eb90;
            iVar8 = 0x8c47eb88;
            piVar11[1] = a1;
            piVar11[3] = a0;
            piVar11[5] = a2;
            piVar11[6] = a3 | 1;
            *s0 = piVar11;
            iVar4 = 0;
            *(u32 *)(iVar5 + iVar8) = *(u32 *)(iVar5 + iVar8) + 1 & 7;
            *piVar3 = *piVar3 + 1;
        }
        if (((iVar4 != 0x100) && ((*(u32 *)(g_8c47eba0 * 0x100 + iVar2 + g_8c47eb9c * 0x20 + 0x18) & 3) == 0)) &&
            ((*(u32 *)(iVar7 + iVar2 + iVar10 + 0x18) & 3) == 1)) {
            iVar8 = iVar7 + iVar2 + iVar10;
            *(u32 *)(iVar8 + 0x18) = *(u32 *)(iVar8 + 0x18) & 0xfffffffc | 2;
            *0xffa00020 = *(u32 *)(iVar8 + 4);
            *0xffa00024 = (*(int *)(iVar8 + 0xc) + 0xf0000000) * 2;
            *0xffa00028 = a2 >> 5;
            uVar1 = 0x241;
            if ((*(u32 *)(iVar8 + 0x18) & 4) == 0) {
                uVar1 = 0x2c1;
            }
            if ((*(u32 *)(iVar7 + iVar2 + iVar10 + 0x18) & 0x10) != 0) {
                uVar1 = uVar1 | 0x1000;
            }
            *0xffa0002c = (int)(short)uVar1;
            iVar10 = iVar7 + iVar2 + iVar10;
            *0xa05f6800 = *(u32 *)(iVar10 + 0xc);
            *0xa05f6804 = *(u32 *)(iVar10 + 0x14);
            *0xa05f6808 = 1;
            iVar2 = 0x8c47eb94;
            g_8c47eb9c = iVar6;
            g_8c47eba0 = uVar9;
            *(u32 *)(iVar5 + iVar2) = *(u32 *)(iVar5 + iVar2) + 1 & 7;
        }
    }
    return iVar4;
}

/*
 * sh4_dmac_203160  0x8c203160
 */
u32 sh4_dmac_203160(void) {
    u16 uVar1;
    int iVar2;
    u32 *puVar3;
    int iVar4;
    u32 *puVar5;
    int iVar6;
    u32 uVar7;
    u32 *puVar8;
    int iVar9;
    int iVar10;
    int iVar11;

    iVar4 = 0x8c47eb94;
    iVar2 = 0x8c47e988;
    uVar1 = 0x241;
    iVar6 = g_8c47eba0 * 0x100 + 0x8c47e988 + g_8c47eb9c * 0x20;
    *(u32 *)(iVar6 + 0x18) = *(u32 *)(iVar6 + 0x18) & 0xfffffffc;
    puVar5 = 0xffa00020;
    uVar7 = 0;
    do {
        iVar6 = *(int *)(uVar7 * 4 + iVar4);
        if ((*(u32 *)(uVar7 * 0x100 + iVar2 + iVar6 * 0x20 + 0x18) & 3) == 1) {
            iVar11 = uVar7 * 0x100;
            iVar10 = iVar6 * 0x20;
            iVar9 = iVar11 + iVar2 + iVar10;
            *(u32 *)(iVar9 + 0x18) = *(u32 *)(iVar9 + 0x18) & 0xfffffffc | 2;
            *puVar5 = *(u32 *)(iVar9 + 4);
            *0xffa00024 = (*(int *)(iVar9 + 0xc) + 0xf0000000) * 2;
            *0xffa00028 = *(u32 *)(iVar9 + 0x14) >> 5;
            if ((*(u32 *)(iVar9 + 0x18) & 4) == 0) {
                uVar1 = 0x2c1;
            }
            if ((*(u32 *)(iVar11 + iVar2 + iVar10 + 0x18) & 0x10) != 0) {
                uVar1 = uVar1 | 0x1000;
            }
            *0xffa0002c = (int)(short)uVar1;
            iVar10 = iVar11 + iVar2 + iVar10;
            *0xa05f6800 = *(u32 *)(iVar10 + 0xc);
            *0xa05f6804 = *(u32 *)(iVar10 + 0x14);
            *0xa05f6808 = 1;
            puVar3 = 0x8c47eba0;
            puVar8 = (u32 *)(uVar7 * 4 + iVar4);
            g_8c47eb9c = iVar6;
            *puVar3 = uVar7;
            *puVar8 = *puVar8 + 1 & 7;
            return 1;
        }
        uVar7 = uVar7 + 1;
    } while (uVar7 < 2);
    return 0;
}

/*
 * sh4_scan_loop_203298  0x8c203298
 * area name: sits between sh4 functions (same compilation unit); behaviour name: a loop that only reads
 * called by: pvr_calls_scan_loop_20a7e0, shinobi_calls_scan_loop_203320, ta_calls_scan_loop_210dfc
 */
u32 sh4_scan_loop_203298(int a0) {
    u32 uVar1;
    int *piVar2;
    int *piVar3;
    int *piVar4;
    int *piVar5;

    piVar4 = 0x8c47e988;
    piVar5 = 0x8c47e988;
    do {
        if ((int *)((int)0x200 + (int)0x8c47e988) <= piVar4) {
            return 1;
        }
        uVar1 = 0;
        piVar2 = piVar4;
        piVar3 = piVar5;
        do {
            if ((*piVar3 == a0) && ((piVar2[6] & 3U) != 0)) {
                return 0;
            }
            uVar1 = uVar1 + 1;
            piVar2 = piVar2 + 8;
            piVar3 = piVar3 + 8;
        } while (uVar1 < 8);
        piVar4 = (int *)((int)piVar4 + (int)0x100);
        piVar5 = (int *)((int)piVar5 + (int)0x100);
    } while (true);
}

/*
 * shinobi_calls_scan_loop_203320  0x8c203320
 * area name: in the shinobi library code range; behaviour name: its callees mostly do: scan_loop
 * called by: tex_calls_scan_loop_20cd92, vram64_20a8e0
 */
u32 shinobi_calls_scan_loop_203320(u32 a0, u32 a1) {
    int iVar1;

    do {
        iVar1 = sh4_scan_loop_203298(a0);
    } while (iVar1 != 1);
    return 1;
}

/*
 * strupr  0x8c2033c0
 * converts string a0 to upper case in place
 * called by: filename_add_ext_if_missing
 */
u32 strupr(char *a0, u32 a1, u32 a2, u32 a3) {
    u8 *puVar1;
    u32 in_r0;

    puVar1 = (&toupper_0146b4);
    for (; *a0 != '\0'; a0 = a0 + 1) {
        in_r0 = (*(code *)puVar1)((int)*a0, a1, a2, a3);
        *a0 = (char)in_r0;
    }
    *a0 = '\0';
    return in_r0;
}

/*
 * shinobi_uses_pool47eba8_free_203400  0x8c203400
 * area name: in the shinobi library code range; behaviour name: its main named callee is pool47eba8_free
 * called by: kamui_cfg_texture_memory, kamui_cfg_texture_memory_b
 */
u32 shinobi_uses_pool47eba8_free_203400(void) {
    u32 in_r0;
    u16 *puVar1;
    u8 *ar5_00;
    u8 *ar6_00;
    int iVar2;
    int iVar3;

    iVar3 = g_8c275408;
    while (iVar2 = g_8c275400, iVar3 != 0) {
        iVar2 = *(int *)(iVar3 + 8);
        in_r0 = pool47eba8_free(iVar3);
        iVar3 = iVar2;
    }
    while (iVar3 = g_8c27541c, iVar2 != 0) {
        iVar3 = *(int *)(iVar2 + 8);
        in_r0 = pool47eba8_free(iVar2);
        iVar2 = iVar3;
    }
    while (iVar2 = g_8c275414, iVar3 != 0) {
        iVar2 = *(int *)(iVar3 + 8);
        in_r0 = pool47eba8_free(iVar3);
        iVar3 = iVar2;
    }
    while (iVar2 != 0) {
        iVar3 = *(int *)(iVar2 + 8);
        in_r0 = pool47eba8_free(iVar2);
        iVar2 = iVar3;
    }
    ar6_00 = &g_8c47eba8;
    ar5_00 = &g_8c496ba8;
    puVar1 = (u16 *)&g_8c47eba8;
    do {
        *puVar1 = 0;
        puVar1 = puVar1 + 0xc;
    } while (puVar1 < &g_8c496ba8);
    g_8c275400 = 0;
    g_8c275404 = 0;
    g_8c275408 = 0;
    g_8c27540c = 0;
    g_8c275410 = 0;
    g_8c275414 = 0;
    g_8c275418 = 0;
    g_8c27541c = 0;
    g_8c275420 = 0;
    g_8c275424 = 0;
    iVar3 = g_8c275428;
    while (iVar3 != 0) {
        iVar2 = *(int *)(iVar3 + 4);
        in_r0 = pool496ba8_free(iVar3);
        iVar3 = iVar2;
    }
    g_8c275428 = 0;
    return 0;
}

/*
 * alt_entry_203406  0x8c203406
 * probably an entry 6 bytes into 8c203400: it reads registers that code sets before it
 */
u32 alt_entry_203406(void) {
    int iVar1;
    u16 *puVar2;
    u8 *ar5_00;
    u8 *ar6_00;
    int *unaff_r13;
    int iVar3;

    iVar1 = unaff_r13[2];
    while (iVar1 != 0) {
        iVar3 = *(int *)(iVar1 + 8);
        pool47eba8_free(iVar1);
        iVar1 = iVar3;
    }
    iVar1 = *unaff_r13;
    while (iVar1 != 0) {
        iVar3 = *(int *)(iVar1 + 8);
        pool47eba8_free(iVar1);
        iVar1 = iVar3;
    }
    iVar1 = unaff_r13[7];
    while (iVar1 != 0) {
        iVar3 = *(int *)(iVar1 + 8);
        pool47eba8_free(iVar1);
        iVar1 = iVar3;
    }
    iVar1 = unaff_r13[5];
    while (iVar1 != 0) {
        iVar3 = *(int *)(iVar1 + 8);
        pool47eba8_free(iVar1);
        iVar1 = iVar3;
    }
    ar6_00 = &g_8c47eba8;
    ar5_00 = &g_8c496ba8;
    puVar2 = (u16 *)&g_8c47eba8;
    do {
        *puVar2 = 0;
        puVar2 = puVar2 + 0xc;
    } while (puVar2 < &g_8c496ba8);
    *unaff_r13 = 0;
    unaff_r13[1] = 0;
    unaff_r13[2] = 0;
    unaff_r13[3] = 0;
    unaff_r13[4] = 0;
    unaff_r13[5] = 0;
    unaff_r13[6] = 0;
    unaff_r13[7] = 0;
    unaff_r13[8] = 0;
    unaff_r13[9] = 0;
    iVar1 = g_8c275428;
    while (iVar1 != 0) {
        iVar3 = *(int *)(iVar1 + 4);
        pool496ba8_free(iVar1);
        iVar1 = iVar3;
    }
    g_8c275428 = 0;
    return 0;
}

/*
 * kamui_cfg_texture_memory  0x8c2034c0
 * reads HARDWARE/EnableTexture16MB and sets the texture memory to 16 MB or 8 MB
 * called by: kamui_uses_kamui_cfg_texture_memory_211120, shinobi_draw_206162
 * strings: "HARDWARE"; "EnableTexture16MB"; "HARDWARE"; "EnableTexture16MB"
 */
u32 kamui_cfg_texture_memory(u32 unused_a0, u32 unused_a1, u32 unused_a2, u32 a3) {
    int iVar1;
    u32 uVar2;
    u32 uVar3;
    u32 *puVar4;
    u32 uVar5;

    if (g_8c2753e8 == 1) {
        uVar5 = 0;
        iVar1 = kamui_cfg_get("HARDWARE", "EnableTexture16MB", 0);
        if (iVar1 == 1) {
            g_8c4a9bc0 = 0x1000000;
            uVar2 = 0xe4;
            g_8c2753ec = 0x1000000;
            g_8c2753f0 = 0;
            g_8c2753f4 = 0x1000000;
            g_8c2753f8 = 0x1000000;
            g_8c2753fc = 0;
            uVar3 = 0;
            pvr_20a844(0xe4, 0);
        } else {
            g_8c4a9bc0 = 0x800000;
            uVar2 = 0xe4;
            g_8c2753ec = 0x800000;
            g_8c2753f0 = 0;
            g_8c2753f4 = 0x800000;
            g_8c2753f8 = 0x800000;
            g_8c2753fc = 0;
            uVar3 = 0;
            pvr_20a844(0xe4, 0);
        }
        shinobi_uses_pool47eba8_free_203400();
        g_8c275410 = g_8c2753f4;
        g_8c275424 = g_8c2753fc;
        iVar1 = pool47eba8_alloc(uVar2, uVar3, uVar5, a3);
        if (iVar1 != 0) {
            *(u32 *)(iVar1 + 0xc) = g_8c2753f0;
            *(u32 *)(iVar1 + 0x10) = g_8c2753f4;
            puVar4 = &g_8c275400;
        LAB_8c20362c:
            *(u32 *)(iVar1 + 8) = puVar4[2];
            puVar4[2] = iVar1;
            *(u32 *)(iVar1 + 4) = puVar4[3];
            puVar4[3] = iVar1;
            return 0;
        }
    } else {
        uVar5 = 0;
        iVar1 = kamui_cfg_get("HARDWARE", "EnableTexture16MB", 0);
        if (iVar1 == 1) {
            g_8c4a9bc0 = 0x1000000;
            uVar2 = 0xe4;
            g_8c2753ec = 0x800000;
            g_8c2753f0 = 0;
            g_8c2753f4 = 0x800000;
            g_8c2753f8 = 0x800000;
            g_8c2753fc = 0x800000;
            uVar3 = 0;
            pvr_20a844(0xe4, 0);
        } else {
            g_8c4a9bc0 = 0x800000;
            g_8c2753ec = 0x400000;
            g_8c2753f0 = 0;
            g_8c2753f4 = 0x400000;
            g_8c2753f8 = 0x400000;
            g_8c2753fc = 0x400000;
            uVar2 = 0xe4;
            uVar3 = 0;
            pvr_20a844(0xe4, 0);
        }
        shinobi_uses_pool47eba8_free_203400();
        g_8c275410 = g_8c2753f4;
        g_8c275424 = g_8c2753fc;
        iVar1 = pool47eba8_alloc(uVar2, uVar3, uVar5, a3);
        if (iVar1 != 0) {
            *(u32 *)(iVar1 + 0xc) = g_8c2753f0;
            *(u32 *)(iVar1 + 0x10) = g_8c2753f4;
            *(int *)(iVar1 + 8) = g_8c275408;
            g_8c275408 = iVar1;
            *(int *)(iVar1 + 4) = g_8c27540c;
            g_8c27540c = iVar1;
            iVar1 = pool47eba8_alloc(iVar1, &g_8c275400, uVar5, a3);
            if (iVar1 != 0) {
                puVar4 = &g_8c275414;
                *(u32 *)(iVar1 + 0xc) = g_8c2753f8;
                *(u32 *)(iVar1 + 0x10) = g_8c2753fc;
                goto LAB_8c20362c;
            }
        }
    }
    return 3;
}

/*
 * kamui_cfg_texture_memory_b  0x8c2034cc
 * alternate entry of kamui_cfg_texture_memory
 * strings: "HARDWARE"; "EnableTexture16MB"; "HARDWARE"; "EnableTexture16MB"
 */
u32 kamui_cfg_texture_memory_b(u32 unused_a0, u32 unused_a1, u32 unused_a2, u32 a3) {
    int iVar1;
    int *in_r3;
    u32 uVar2;
    u32 uVar3;
    u32 *puVar4;
    u32 uVar5;

    if (*in_r3 == 1) {
        uVar5 = 0;
        iVar1 = kamui_cfg_get("HARDWARE", "EnableTexture16MB", 0);
        if (iVar1 == 1) {
            g_8c4a9bc0 = 0x1000000;
            uVar2 = 0xe4;
            g_8c2753ec = 0x1000000;
            g_8c2753f0 = 0;
            g_8c2753f4 = 0x1000000;
            g_8c2753f8 = 0x1000000;
            g_8c2753fc = 0;
            uVar3 = 0;
            pvr_20a844(0xe4, 0);
        } else {
            g_8c4a9bc0 = 0x800000;
            uVar2 = 0xe4;
            g_8c2753ec = 0x800000;
            g_8c2753f0 = 0;
            g_8c2753f4 = 0x800000;
            g_8c2753f8 = 0x800000;
            g_8c2753fc = 0;
            uVar3 = 0;
            pvr_20a844(0xe4, 0);
        }
        shinobi_uses_pool47eba8_free_203400();
        g_8c275410 = g_8c2753f4;
        g_8c275424 = g_8c2753fc;
        iVar1 = pool47eba8_alloc(uVar2, uVar3, uVar5, a3);
        if (iVar1 != 0) {
            *(u32 *)(iVar1 + 0xc) = g_8c2753f0;
            *(u32 *)(iVar1 + 0x10) = g_8c2753f4;
            puVar4 = &g_8c275400;
        LAB_8c20362c:
            *(u32 *)(iVar1 + 8) = puVar4[2];
            puVar4[2] = iVar1;
            *(u32 *)(iVar1 + 4) = puVar4[3];
            puVar4[3] = iVar1;
            return 0;
        }
    } else {
        uVar5 = 0;
        iVar1 = kamui_cfg_get("HARDWARE", "EnableTexture16MB", 0);
        if (iVar1 == 1) {
            g_8c4a9bc0 = 0x1000000;
            uVar2 = 0xe4;
            g_8c2753ec = 0x800000;
            g_8c2753f0 = 0;
            g_8c2753f4 = 0x800000;
            g_8c2753f8 = 0x800000;
            g_8c2753fc = 0x800000;
            uVar3 = 0;
            pvr_20a844(0xe4, 0);
        } else {
            g_8c4a9bc0 = 0x800000;
            g_8c2753ec = 0x400000;
            g_8c2753f0 = 0;
            g_8c2753f4 = 0x400000;
            g_8c2753f8 = 0x400000;
            g_8c2753fc = 0x400000;
            uVar2 = 0xe4;
            uVar3 = 0;
            pvr_20a844(0xe4, 0);
        }
        shinobi_uses_pool47eba8_free_203400();
        g_8c275410 = g_8c2753f4;
        g_8c275424 = g_8c2753fc;
        iVar1 = pool47eba8_alloc(uVar2, uVar3, uVar5, a3);
        if (iVar1 != 0) {
            *(u32 *)(iVar1 + 0xc) = g_8c2753f0;
            *(u32 *)(iVar1 + 0x10) = g_8c2753f4;
            *(int *)(iVar1 + 8) = g_8c275408;
            g_8c275408 = iVar1;
            *(int *)(iVar1 + 4) = g_8c27540c;
            g_8c27540c = iVar1;
            iVar1 = pool47eba8_alloc(iVar1, &g_8c275400, uVar5, a3);
            if (iVar1 != 0) {
                puVar4 = &g_8c275414;
                *(u32 *)(iVar1 + 0xc) = g_8c2753f8;
                *(u32 *)(iVar1 + 0x10) = g_8c2753fc;
                goto LAB_8c20362c;
            }
        }
    }
    return 3;
}

/*
 * kamui_list_2036a0  0x8c2036a0
 * area name: sits between kamui functions (same compilation unit); behaviour name: mostly calls list functions
 * called by: shinobi_uses_sh4_dmac_202a80
 */
int kamui_list_2036a0(u32 a0, int a1) {
    u32 uVar1;
    int iVar2;
    u32 uVar3;
    int ar5_00;

    if ((int)a0 < 0) {
        uVar1 = ~(~a0 + 1 & 0x1f) + 1;
    } else {
        uVar1 = a0 & 0x1f;
    }
    if (uVar1 != 0) {
        a0 = a0 + (0x20 - uVar1);
    }
    if (g_8c275430 == a0) {
        *(u32 *)(a1 + 0x14) = a0;
        uVar3 = vram64_to_vram32(g_8c27542c + 4);
        *(u32 *)(a1 + 0x1c) = uVar3;
        iVar2 = 0;
        g_8c275430 = 0;
        g_8c27542c = 0;
    } else {
        ar5_00 = a0 << 1;
        if ((g_8c4a9bb0 & 4) == 0) {
            uVar3 = 8;
            iVar2 = shinobi_list_2046d2(0, ar5_00, a1, 8);
        } else {
            uVar3 = 8;
            iVar2 = shinobi_list_2046d2((u32)(g_8c275410 < g_8c275424), ar5_00, a1, 8);
        }
        if (iVar2 == 0) {
            g_8c27542c = *(int *)(a1 + 0x1c);
            g_8c275430 = a0;
            *(u32 *)(a1 + 0x14) = a0;
            uVar3 = vram64_to_vram32(*(u32 *)(a1 + 0x1c));
            *(u32 *)(a1 + 0x1c) = uVar3;
        }
    }
    return iVar2;
}

/*
 * alt_entry_2036ac  0x8c2036ac
 * probably an entry 12 bytes into 8c2036a0: it reads registers that code sets before it
 */
int alt_entry_2036ac(u32 unused_a0, int a1, u32 unused_a2, u32 unused_a3, u32 ain0) {
    u32 uVar1;
    int iVar2;
    u32 uVar3;
    int ar5_00;
    int unaff_r13;
    char in_T;

    if (in_T == '\0') {
        uVar1 = ~(~ain0 + 1 & 0x1f) + 1;
    } else {
        uVar1 = ain0 & 0x1f;
    }
    if (uVar1 != 0) {
        unaff_r13 = unaff_r13 + (0x20 - uVar1);
    }
    if (g_8c275430 == unaff_r13) {
        *(int *)(a1 + 0x14) = unaff_r13;
        uVar3 = vram64_to_vram32(g_8c27542c + 4);
        *(u32 *)(a1 + 0x1c) = uVar3;
        iVar2 = 0;
        g_8c275430 = 0;
        g_8c27542c = 0;
    } else {
        ar5_00 = unaff_r13 << 1;
        if ((g_8c4a9bb0 & 4) == 0) {
            uVar3 = 8;
            iVar2 = shinobi_list_2046d2(0, ar5_00, a1, 8);
        } else {
            uVar3 = 8;
            iVar2 = shinobi_list_2046d2((u32)(g_8c275410 < g_8c275424), ar5_00, a1, 8);
        }
        if (iVar2 == 0) {
            g_8c27542c = *(int *)(a1 + 0x1c);
            g_8c275430 = unaff_r13;
            *(int *)(a1 + 0x14) = unaff_r13;
            uVar3 = vram64_to_vram32(*(u32 *)(a1 + 0x1c));
            *(u32 *)(a1 + 0x1c) = uVar3;
        }
    }
    return iVar2;
}

/*
 * shinobi_list_20374e  0x8c20374e
 * area name: in the shinobi library code range; behaviour name: mostly calls list functions
 */
int shinobi_list_20374e(u32 a0, int a1, int a2) {
    u32 uVar1;
    int iVar2;
    u32 uVar3;
    u32 uVar4;
    int ar5_00;
    int ar4_00;

    if ((int)a0 < 0) {
        uVar1 = ~(~a0 + 1 & 0x1f) + 1;
    } else {
        uVar1 = a0 & 0x1f;
    }
    if (uVar1 != 0) {
        a0 = a0 + (0x20 - uVar1);
    }
    ar5_00 = a0 << 1;
    if ((g_8c4a9bb0 & 4) == 0) {
        uVar4 = 8;
        iVar2 = shinobi_list_2046d2(0, ar5_00, a1, 8);
    } else {
        uVar4 = 8;
        iVar2 = shinobi_list_2046d2((u32)(g_8c275410 <= g_8c275424), ar5_00, a1, 8);
    }
    if (iVar2 == 0) {
        ar4_00 = *(int *)(a1 + 0x1c);
        *(u32 *)(a1 + 0x14) = a0;
        uVar3 = vram64_to_vram32(ar4_00);
        *(u32 *)(a1 + 0x1c) = uVar3;
        *(u32 *)(a2 + 0x14) = a0;
        uVar4 = vram64_to_vram32(ar4_00 + 4);
        *(u32 *)(a2 + 0x1c) = uVar4;
    }
    return iVar2;
}

/*
 * shinobi_list_203820  0x8c203820
 * area name: in the shinobi library code range; behaviour name: mostly calls list functions
 * called by: kamui_uses_kamui_cfg_texture_memory_211120, kamui_uses_ta_fifo_21092e, ta_uses_sh4_dmac_210e40
 */
int shinobi_list_203820(u32 a0, int *a1, u32 *a2) {
    u8 *puVar1;
    u32 uVar2;
    int iVar3;
    int iVar4;
    u32 uVar5;
    int ar5_00;
    int *ar6_00;
    int ar7_00;
    int ar4_00;

    if ((int)a0 < 0) {
        uVar2 = ~(~a0 + 1 & 0x1f) + 1;
    } else {
        uVar2 = a0 & 0x1f;
    }
    if (uVar2 != 0) {
        a0 = a0 + (0x20 - uVar2);
    }
    ar7_00 = (int)0x2000;
    ar5_00 = a0 << 1;
    ar6_00 = a1;
    iVar3 = shinobi_list_2046d2(0, ar5_00, a1, ar7_00);
    if (iVar3 == 0) {
        ar4_00 = *a1;
        iVar4 = vram64_to_vram32(ar4_00);
        puVar1 = (&vram64_to_vram32);
        *a1 = iVar4;
        uVar5 = (*(code *)puVar1)(ar4_00 + 4, ar5_00, ar6_00, ar7_00);
        *a2 = uVar5;
    }
    return iVar3;
}

/*
 * shinobi_list_2038c0  0x8c2038c0
 * area name: in the shinobi library code range; behaviour name: mostly calls list functions
 * called by: gfxlib_uses_ta_fifo_233e10, kamui_uses_callback_table_call_20ca32, pvr_list_20c980,
 * pvr_uses_ta_fifo_20c90c
 */
u32 shinobi_list_2038c0(u32 a0, u32 a1, u32 unused_a2, u32 a3) {
    u32 uVar1;
    int iStack_14;
    int aiStack_10[2];

    if ((g_8c4a9bb0 & 4) == 0) {
        uVar1 = shinobi_list_2048aa(1, a0, a1, a3);
    } else {
        mem_pools_largest_free(&iStack_14, aiStack_10);
        uVar1 = shinobi_list_2048aa((u32)(iStack_14 < aiStack_10[0]), a0, a1, a3);
    }
    return uVar1;
}

/*
 * shinobi_list_203914  0x8c203914
 * area name: in the shinobi library code range; behaviour name: mostly calls list functions
 */
int shinobi_list_203914(u32 a0, int a1, u32 a2) {
    int iVar1;
    int iVar2;

    iVar1 = shinobi_calls_scan_loop_2041e2(a0, a1);
    if (iVar1 == -1) {
        iVar2 = 3;
    } else {
        iVar2 = shinobi_list_2043d4(0, iVar1, a0, a1);
        if (iVar2 == 0) {
            iVar1 = g_8c2753f4 + iVar1;
            iVar2 = shinobi_list_2043d4(1, iVar1, a0, a2);
            if (iVar2 != 0) {
                shinobi_list_203bda(*(u32 *)(a1 + 0x1c), iVar1, a0, a2);
            }
        }
    }
    return iVar2;
}

/*
 * shinobi_list_203980  0x8c203980
 * area name: in the shinobi library code range; behaviour name: mostly calls list functions
 */
u32 shinobi_list_203980(u32 a0, int a1) {
    u32 uVar1;

    uVar1 = shinobi_list_2043d4((u32)(g_8c2753f8 <= *(int *)(a1 + 0x1c)), *(int *)(a1 + 0x1c), a0, a1);
    return uVar1;
}

/*
 * shinobi_uses_mem_pool_find_block_2039e0  0x8c2039e0
 * area name: in the shinobi library code range; behaviour name: its callees mostly do: uses_mem_pool_find_block
 */
int shinobi_uses_mem_pool_find_block_2039e0(u32 a0, int a1) {
    u32 uVar1;
    u16 *puVar2;
    int iVar3;
    int iVar4;
    u8 auStack_3c[44];

    if ((int)a0 < 0) {
        uVar1 = ~(~a0 + 1 & 0x1f) + 1;
    } else {
        uVar1 = a0 & 0x1f;
    }
    if (uVar1 != 0) {
        a0 = a0 + (0x20 - uVar1);
    }
    iVar4 = a1;
    puVar2 = (u16 *)shinobi_uses_mem_pool_find_block_204c00(0, a0, a1);
    if (puVar2 == NULL) {
        iVar4 = a1;
        puVar2 = (u16 *)shinobi_uses_mem_pool_find_block_204c00(1, a0, a1);
    }
    if (puVar2 == NULL) {
        iVar4 = shinobi_calls_scan_loop_2041e2(a0, a1);
        if (iVar4 == -1) {
            iVar3 = 3;
        } else {
            iVar3 = shinobi_list_2043d4(0, iVar4, a0, a1);
            if (iVar3 == 0) {
                iVar3 = shinobi_list_2043d4(1, g_8c2753f4 + iVar4, a0, auStack_3c);
            }
        }
    } else {
        *(u32 *)(a1 + 0x1c) = *(u32 *)(puVar2 + 6);
        *(int *)(puVar2 + 10) = a1;
        *puVar2 = *puVar2 | 4;
        iVar3 = 0;
    }
    return iVar3;
}

/*
 * shinobi_uses_rec4c_alloc_203a92  0x8c203a92
 * area name: in the shinobi library code range; behaviour name: its main named callee is rec4c_alloc_496ba8
 * called by: gfxlib_uses_ta_fifo_233e10, pvr_list_20c980, pvr_uses_ta_fifo_20c90c
 */
u32 shinobi_uses_rec4c_alloc_203a92(u32 a0, u32 unused_a1, u32 a2, u32 a3) {
    int iVar1;
    u32 uVar2;
    u16 *puVar3;
    u16 *puVar4;
    u32 ar5_00;
    u32 uVar5;
    u32 unaff_r12;
    u16 *ar5_01;
    int in_stack_ffffffd0;
    int iStack_2c;
    u32 uStack_28;
    u32 uStack_24;
    u32 uStack_1c;
    u32 uStack_18;

    ar5_00 = a0;
    shinobi_uses_libgcc_divide_helper_205640(&uStack_28, a0);
    ar5_01 = NULL;
    if (g_8c275428 != NULL) {
        a3 = 0xf000;
        puVar4 = g_8c275428;
        do {
            if (((*puVar4 & 0xf000) == uStack_28) && (ar5_00 = 0, puVar3 = puVar4, a2 = uStack_18, uStack_18 != 0)) {
                do {
                    puVar4 = puVar3;
                    uVar5 = ar5_00;
                    if (*(int *)(puVar3 + ar5_00 * 2 + 6) == 0) {
                        puVar4 = NULL;
                        uVar5 = uStack_18;
                        unaff_r12 = ar5_00;
                        ar5_01 = puVar3;
                    }
                    ar5_00 = uVar5 + 1;
                    puVar3 = puVar4;
                } while (ar5_00 < uStack_18);
            }
            if (ar5_01 == NULL) {
                puVar4 = *(u16 **)(puVar4 + 2);
            }
        } while (puVar4 != NULL);
    }
    if (ar5_01 == NULL) {
        ar5_01 = (u16 *)rec4c_alloc_496ba8(0);
        if (ar5_01 != NULL) {
            puVar4 = ar5_01 + 6;
            do {
                puVar4[0] = 0;
                puVar4[1] = 0;
                puVar4 = puVar4 + 2;
            } while (puVar4 < ar5_01 + 0x26);
            unaff_r12 = 0;
            list_push_front_2057e6(&g_8c275428, ar5_01);
            *ar5_01 = *ar5_01 | (u16)uStack_28;
            puVar4 = ar5_01;
            if ((g_8c4a9bb0 & 4) == 0) {
                iVar1 = shinobi_list_2049ec(1, uStack_1c, ar5_01, a3);
            } else {
                mem_pools_largest_free(&stack0xffffffd0, &iStack_2c);
                iVar1 = shinobi_list_2049ec((u32)(in_stack_ffffffd0 < iStack_2c), uStack_1c, ar5_01, a3);
            }
            if (iVar1 == 0)
                goto LAB_8c203baa;
            pool496ba8_free(ar5_01);
        }
        uVar2 = 3;
    } else {
    LAB_8c203baa:
        *(u32 *)(a0 + 0x1c) = unaff_r12 * (uStack_24 >> 2) * 4 + *(int *)(ar5_01 + 4);
        *(u32 *)(ar5_01 + unaff_r12 * 2 + 6) = a0;
        *ar5_01 = *ar5_01 | 2;
        uVar2 = 0;
    }
    return uVar2;
}

/*
 * shinobi_list_203bda  0x8c203bda
 * area name: in the shinobi library code range; behaviour name: mostly calls list functions
 * called by: alt_entry_20cf8c, kamui_list_20cf88, kamui_uses_callback_table_call_20ca32, pvr_list_20c980,
 * shinobi_list_203914, shinobi_list_203ca0, shinobi_list_203cd0
 */
u32 shinobi_list_203bda(int a0, u32 a1, u32 a2, u32 a3) {
    int iVar1;
    u16 *ar5_00;
    u32 uVar2;
    u16 *ar5_01;
    short asStack_14[2];
    short asStack_10[4];

    ar5_00 = (u16 *)mem_pool_find_block(a0, asStack_14);
    if (ar5_00 == NULL) {
        uVar2 = 7;
    } else if ((*ar5_00 & 2) == 0) {
        uVar2 = shinobi_list_204cfc((int)asStack_14[0], ar5_00, a2, a3);
    } else {
        iVar1 = g_8c2753f4;
        if (asStack_14[0] != 0) {
            iVar1 = -g_8c2753f4;
        }
        ar5_01 = (u16 *)mem_pool_find_block(iVar1 + a0, asStack_10);
        if (ar5_01 == NULL) {
            shinobi_list_204cfc((int)asStack_14[0], ar5_00, a2, a3);
            uVar2 = 0;
        } else if ((*ar5_01 & 4) == 0) {
            shinobi_list_204cfc((int)asStack_14[0], ar5_00, a2, a3);
            uVar2 = shinobi_list_204cfc((int)asStack_10[0], ar5_01, a2, a3);
        } else {
            *ar5_00 = *ar5_00 & 0xfffb;
            uVar2 = 0;
        }
    }
    return uVar2;
}

/*
 * shinobi_list_203ca0  0x8c203ca0
 * area name: in the shinobi library code range; behaviour name: mostly calls list functions
 * called by: kamui_list_210fd2, kamui_list_210fd4
 */
u32 shinobi_list_203ca0(u32 a0, u32 a1, u32 a2, u32 a3) {
    u32 uVar1;
    int iVar2;
    u32 a5;

    a5 = a1;
    uVar1 = vram_addr_64_to_32(a0);
    iVar2 = shinobi_list_203bda(uVar1, a5, a2, a3);
    uVar1 = 0;
    if (iVar2 != 0) {
        uVar1 = vram_addr_64_to_32(a1);
        uVar1 = shinobi_list_203bda(uVar1, a5, a2, a3);
    }
    return uVar1;
}

/*
 * shinobi_list_203cd0  0x8c203cd0
 * area name: in the shinobi library code range; behaviour name: mostly calls list functions
 * called by: alt_entry_20cf8c, kamui_list_20cf88, pvr_list_20c980
 */
u32 shinobi_list_203cd0(int a0) {
    bool bVar1;
    int iVar2;
    u16 *puVar3;
    u16 *puVar4;
    u32 uVar5;
    u32 uVar6;
    u32 uVar7;
    u32 unaff_r11;
    u16 *ar5_00;
    u32 in_stack_ffffffd4;
    u32 uStack_28;
    u32 uStack_1c;

    shinobi_uses_libgcc_divide_helper_205640(&stack0xffffffd4, a0);
    uVar7 = 0;
    ar5_00 = NULL;
    puVar4 = g_8c275428;
    while (puVar4 != NULL) {
        if (((*puVar4 & 0xf000) == in_stack_ffffffd4) && (uVar5 = 0, puVar3 = puVar4, uStack_1c != 0)) {
            do {
                puVar4 = puVar3;
                uVar6 = uVar5;
                if ((*(int *)(puVar3 + uVar5 * 2 + 6) != 0) &&
                    (uVar5 * (uStack_28 >> 2) * 4 + *(int *)(puVar3 + 4) == *(int *)(a0 + 0x1c))) {
                    puVar4 = NULL;
                    uVar6 = uStack_1c;
                    unaff_r11 = uVar5;
                    ar5_00 = puVar3;
                }
                uVar5 = uVar6 + 1;
                puVar3 = puVar4;
            } while (uVar5 < uStack_1c);
        }
        if (ar5_00 == NULL) {
            puVar4 = *(u16 **)(puVar4 + 2);
        }
    }
    if (ar5_00 == NULL) {
        uVar7 = 7;
    } else {
        bVar1 = false;
        uVar5 = 0;
        (ar5_00 + unaff_r11 * 2 + 6)[0] = 0;
        (ar5_00 + unaff_r11 * 2 + 6)[1] = 0;
        if (uStack_1c != 0) {
            do {
                iVar2 = uVar5 * 2;
                uVar5 = uVar5 + 1;
                if (*(int *)(ar5_00 + iVar2 + 6) != 0) {
                    bVar1 = true;
                }
            } while (uVar5 < uStack_1c);
        }
        if (!bVar1) {
            iVar2 = shinobi_list_203bda(*(u32 *)(ar5_00 + 4), 1, 0, uStack_1c);
            if (iVar2 != 0) {
                return iVar2;
            }
            puVar4 = ar5_00;
            slist_remove(&g_8c275428, ar5_00);
            pool496ba8_free(ar5_00);
        }
        uVar7 = 0;
    }
    return uVar7;
}

/*
 * shinobi_scan_loop_203de0  0x8c203de0
 * area name: in the shinobi library code range; behaviour name: a loop that only reads
 * called by: kamui_calls_scan_loop_20cfe0
 */
u32 shinobi_scan_loop_203de0(int *a0, int *a1, int *a2, int *a3) {
    u16 *puVar1;
    u16 uVar2;
    u16 *puVar3;
    int iVar4;
    int iVar5;
    int iStack_38;
    int iStack_34;
    int iStack_30;
    int iStack_2c;
    int iStack_28;
    int iStack_24;
    int iStack_20;
    int iStack_1c;

    iStack_1c = 0;
    iStack_28 = 0;
    iStack_20 = 0;
    iStack_24 = 0;
    iStack_30 = 0;
    iStack_34 = 0;
    iStack_2c = 0;
    for (iVar4 = g_8c275408; puVar3 = g_8c275400, iVar4 != 0; iVar4 = *(int *)(iVar4 + 8)) {
        if (iStack_34 < *(int *)(iVar4 + 0x10)) {
            iStack_34 = *(int *)(iVar4 + 0x10);
        }
        iStack_24 = iStack_24 + *(int *)(iVar4 + 0x10);
    }
    for (; iVar4 = g_8c27541c, puVar3 != NULL; puVar3 = *(u16 **)(puVar3 + 4)) {
        if ((*puVar3 & 4) == 0) {
            if (iStack_34 < *(int *)(puVar3 + 8)) {
                iStack_34 = *(int *)(puVar3 + 8);
            }
            iStack_28 = iStack_28 + *(int *)(puVar3 + 8);
        }
    }
    for (; puVar3 = g_8c275414, iVar4 != 0; iVar4 = *(int *)(iVar4 + 8)) {
        if (iStack_30 < *(int *)(iVar4 + 0x10)) {
            iStack_30 = *(int *)(iVar4 + 0x10);
        }
        iStack_20 = iStack_20 + *(int *)(iVar4 + 0x10);
    }
    for (; puVar1 = g_8c275428, puVar3 != NULL; puVar3 = *(u16 **)(puVar3 + 4)) {
        if ((*puVar3 & 4) == 0) {
            if (iStack_30 < *(int *)(puVar3 + 8)) {
                iStack_30 = *(int *)(puVar3 + 8);
            }
            iStack_1c = iStack_1c + *(int *)(puVar3 + 8);
        }
    }
    do {
        if (puVar1 == NULL) {
            *a0 = iStack_24 + iStack_28;
            *a1 = iStack_20 + iStack_1c;
            *a2 = iStack_2c;
            if (iStack_34 < iStack_30) {
                iStack_34 = iStack_30;
            }
            *a3 = iStack_34;
            return 0;
        }
        uVar2 = *puVar1 & 0xf000;
        if (uVar2 == 0x1000) {
            iVar4 = 0x90;
        LAB_8c203f32:
            iVar5 = 0x10;
        } else {
            if (uVar2 == 0x2000) {
                iVar4 = 0xa0;
                goto LAB_8c203f32;
            }
            if (uVar2 == 0x3000) {
                iVar4 = 0xc0;
                goto LAB_8c203f32;
            }
            if (uVar2 == 0x4000) {
                iVar4 = 0xe0;
                goto LAB_8c203f32;
            }
            if (uVar2 == 0x5000) {
                iVar4 = 0x200;
                iVar5 = 8;
            } else if (uVar2 == 0x6000) {
                iVar4 = 0x360;
                iVar5 = 4;
            } else if (uVar2 == 0x7000) {
                iVar4 = 0x800;
                iVar5 = 2;
            } else if (uVar2 == 0x8000) {
                iVar4 = 0xd60;
                iVar5 = 1;
            } else {
                iVar5 = 0;
                iVar4 = 0;
            }
        }
        iStack_38 = 0;
        puVar3 = puVar1 + 6;
        if (iVar5 != 0) {
            do {
                if (*(int *)puVar3 == 0) {
                    iStack_2c = iStack_2c + iVar4;
                }
                iStack_38 = iStack_38 + 1;
                puVar3 = puVar3 + 2;
            } while (iStack_38 < iVar5);
        }
        puVar1 = *(u16 **)(puVar1 + 2);
    } while (true);
}

/*
 * mem_pools_largest_free  0x8c204006
 * stores the largest block size of each of the two pool lists in *a0 and *a1
 * called by: shinobi_list_2038c0, shinobi_uses_rec4c_alloc_203a92
 */
u32 mem_pools_largest_free(int *a0, int *a1) {
    u16 *puVar1;
    int iVar2;
    int iVar3;
    int iVar4;

    iVar4 = 0;
    iVar3 = 0;
    for (iVar2 = g_8c275408; puVar1 = g_8c275400, iVar2 != 0; iVar2 = *(int *)(iVar2 + 8)) {
        if (iVar3 < *(int *)(iVar2 + 0x10)) {
            iVar3 = *(int *)(iVar2 + 0x10);
        }
    }
    for (; iVar2 = g_8c27541c, puVar1 != NULL; puVar1 = *(u16 **)(puVar1 + 4)) {
        if (((*puVar1 & 4) == 0) && (iVar3 < *(int *)(puVar1 + 8))) {
            iVar3 = *(int *)(puVar1 + 8);
        }
    }
    for (; puVar1 = g_8c275414, iVar2 != 0; iVar2 = *(int *)(iVar2 + 8)) {
        if (iVar4 < *(int *)(iVar2 + 0x10)) {
            iVar4 = *(int *)(iVar2 + 0x10);
        }
    }
    for (; puVar1 != NULL; puVar1 = *(u16 **)(puVar1 + 4)) {
        if (((*puVar1 & 4) == 0) && (iVar4 < *(int *)(puVar1 + 8))) {
            iVar4 = *(int *)(puVar1 + 8);
        }
    }
    *a0 = iVar3;
    *a1 = iVar4;
    return 0;
}

/*
 * shinobi_list_20408e  0x8c20408e
 * area name: in the shinobi library code range; behaviour name: mostly calls list functions
 * called by: kamui_draw_20d114
 */
u32 shinobi_list_20408e(u32 unused_a0, u32 unused_a1, u32 unused_a2, u32 a3) {
    u32 in_r0;
    u32 uVar1;

    uVar1 = shinobi_list_205020(&g_8c275400, &g_8c275404, unused_a2, a3, in_r0);
    uVar1 = shinobi_list_205020(&g_8c275414, &g_8c275418, unused_a2, a3, uVar1);
    uVar1 = shinobi_list_205020(&g_8c275408, &g_8c27540c, unused_a2, a3, uVar1);
    shinobi_list_205020(&g_8c27541c, &g_8c275420, unused_a2, a3, uVar1);
    return 0;
}

/*
 * alt_entry_204092  0x8c204092
 * probably an entry 4 bytes into 8c20408e: it reads registers that code sets before it
 */
u32 alt_entry_204092(u32 unused_a0, u32 unused_a1, u32 unused_a2, u32 a3) {
    int unaff_r14;
    u32 in_PR;

    shinobi_list_205020(unaff_r14, unaff_r14 + 4, unused_a2, a3, in_PR);
    shinobi_list_205020(&g_8c275414, &g_8c275418, unused_a2, a3, in_PR);
    shinobi_list_205020(unaff_r14 + 8, unaff_r14 + 0xc, unused_a2, a3, in_PR);
    shinobi_list_205020(&g_8c27541c, &g_8c275420, unused_a2, a3, in_PR);
    return 0;
}

/*
 * shinobi_draw_2040ce  0x8c2040ce
 * area name: in the shinobi library code range; behaviour name: mostly calls draw functions
 * called by: kamui_draw_20d114
 */
int shinobi_draw_2040ce(void) {
    int iVar1;

    iVar1 = ta_fifo_2050cc(&g_8c275408, &g_8c27540c, &g_8c275400, &g_8c275404);
    if (iVar1 == 0) {
        iVar1 = ta_fifo_2050cc(&g_8c27541c, &g_8c275420, &g_8c275414, &g_8c275418);
    }
    return iVar1;
}

/*
 * alt_entry_2040d2  0x8c2040d2
 * probably an entry 4 bytes into 8c2040ce: it reads registers that code sets before it
 */
int alt_entry_2040d2(void) {
    int iVar1;
    int unaff_r14;

    iVar1 = ta_fifo_2050cc(unaff_r14 + 8, unaff_r14 + 0xc, unaff_r14, unaff_r14 + 4);
    if (iVar1 == 0) {
        iVar1 = ta_fifo_2050cc(&g_8c27541c, &g_8c275420, &g_8c275414, &g_8c275418);
    }
    return iVar1;
}

/*
 * shinobi_calc_204140  0x8c204140
 * area name: in the shinobi library code range; behaviour name: integer arithmetic on its arguments
 * called by: shinobi_calls_scan_loop_2041e2
 */
u32 shinobi_calc_204140(int a0, u32 a1) {
    u32 uVar1;
    u32 uVar2;
    int iVar3;

    uVar2 = *(int *)(a0 + 0xc) + *(int *)(a0 + 0x10);
    uVar1 = (int)0x800 + *(int *)(a0 + 0xc) & (int)(int)0xfffff800;
    if ((u32)(int)0x2b0 < a1) {
        iVar3 = (int)(int)0xfffffd50;
        if (uVar1 - *(int *)(a0 + 0xc) < (u32)(int)0x2b0) {
            uVar1 = uVar1 + (int)0x800;
            if (uVar2 < (uVar1 - *(int *)(a0 + 0xc)) + a1 + iVar3) {
                return 0xffffffff;
            }
        } else if (uVar2 < (uVar1 - *(int *)(a0 + 0xc)) + a1 + iVar3) {
            return 0xffffffff;
        }
        uVar1 = uVar1 + iVar3;
    } else if ((uVar1 < uVar2) && (uVar1 - *(int *)(a0 + 0xc) < a1)) {
        if (uVar2 - uVar1 < a1) {
            uVar1 = 0xffffffff;
        }
    } else {
        uVar1 = *(u32 *)(a0 + 0xc);
    }
    return uVar1;
}

/*
 * shinobi_calls_scan_loop_2041e2  0x8c2041e2
 * area name: in the shinobi library code range; behaviour name: its callees mostly do: scan_loop
 * called by: shinobi_list_203914, shinobi_uses_mem_pool_find_block_2039e0
 */
int shinobi_calls_scan_loop_2041e2(u32 a0, int a1) {
    int a4;
    u32 uVar1;
    int iVar2;
    int iVar3;
    int iVar4;
    int iVar5;
    int iStack_24;

    iStack_24 = 0;
    iVar4 = 0;
    if ((int)a0 < 0) {
        uVar1 = ~(~a0 + 1 & 0x1f) + 1;
    } else {
        uVar1 = a0 & 0x1f;
    }
    a4 = g_8c275408;
    if (uVar1 != 0) {
        a0 = a0 + (0x20 - uVar1);
    }
    do {
        if (a4 == 0) {
            if ((iStack_24 != 2) || (iVar4 == 0)) {
                iVar4 = -1;
            }
            return iVar4;
        }
        if ((int)a0 <= *(int *)(a4 + 0x10)) {
            uVar1 = *(u32 *)(a1 + 0x18);
            iVar5 = (*(int *)(a4 + 0xc) + *(int *)(a4 + 0x10)) - a0;
            if ((((uVar1 & 1) == 0) || ((uVar1 & 8) != 0)) || ((uVar1 & 0x20) != 0)) {
                iStack_24 = 1;
                for (iVar2 = *(int *)(a4 + 0xc); iVar2 <= iVar5; iVar2 = iVar2 + 0x20) {
                    iVar3 = shinobi_scan_loop_20436c(1, g_8c2753f4 + iVar2, a0);
                    if (iVar3 == 0) {
                        return iVar2;
                    }
                }
            } else {
                iVar2 = shinobi_calc_204140(a4, a0);
                if (-1 < iVar2) {
                    for (; iVar2 <= iVar5; iVar2 = iVar2 + 0x800) {
                        iVar3 = shinobi_scan_loop_20436c(1, g_8c2753f4 + iVar2, a0);
                        if (iVar3 == 0) {
                            return iVar2;
                        }
                    }
                }
                iStack_24 = 2;
                if (iVar4 == 0) {
                    for (iVar2 = *(int *)(a4 + 0xc); iVar2 <= iVar5; iVar2 = iVar2 + 0x20) {
                        iVar3 = shinobi_scan_loop_20436c(1, g_8c2753f4 + iVar2, a0);
                        if (iVar3 == 0) {
                            iVar4 = iVar2;
                            iVar2 = iVar5;
                        }
                    }
                }
            }
        }
        a4 = *(int *)(a4 + 8);
    } while (true);
}

/*
 * shinobi_scan_loop_20436c  0x8c20436c
 * area name: in the shinobi library code range; behaviour name: a loop that only reads
 * called by: shinobi_calls_scan_loop_2041e2, shinobi_calls_scan_loop_205948
 */
u32 shinobi_scan_loop_20436c(u32 a0, int a1, int a2) {
    int iVar1;
    int iVar2;
    int iVar3;

    iVar3 = (&g_8c275408)[(short)a0 * 5];
    iVar2 = 0;
    while (iVar1 = iVar3, iVar1 != 0) {
        iVar3 = *(int *)(iVar1 + 0xc);
        if ((((a1 < iVar3) || (*(int *)(iVar1 + 0x10) + iVar3 <= a1)) || (a1 + a2 < iVar3)) ||
            (*(int *)(iVar1 + 0x10) + iVar3 < a1 + a2)) {
            iVar3 = *(int *)(iVar1 + 8);
        } else {
            iVar3 = 0;
            iVar2 = iVar1;
        }
    }
    if (iVar2 != 0) {
        return 0;
    }
    return 3;
}

/*
 * shinobi_list_2043d4  0x8c2043d4
 * area name: in the shinobi library code range; behaviour name: mostly calls list functions
 * called by: shinobi_list_203914, shinobi_list_203980, shinobi_uses_mem_pool_find_block_2039e0
 */
u32 shinobi_list_2043d4(u32 a0, int a1, u32 a2, int a3, int s0, int s4) {
    u16 *ar6_00;
    u32 uVar1;
    int iVar2;
    u16 *puVar3;
    u16 *ar6_01;
    int ain0;
    int iVar4;
    int iVar5;
    u32 a7;

    iVar5 = a1 + a2;
    if ((int)a2 < 0) {
        uVar1 = ~(~a2 + 1 & 0x1f) + 1;
    } else {
        uVar1 = a2 & 0x1f;
    }
    a7 = 0;
    if (uVar1 != 0) {
        a2 = a2 + (0x20 - uVar1);
    }
    iVar2 = (int)(short)a0;
    ar6_00 = NULL;
    puVar3 = (u16 *)(&g_8c275408)[iVar2 * 5];
    iVar4 = a1;
    while (puVar3 != NULL) {
        iVar4 = *(int *)(puVar3 + 6);
        if ((((a1 < iVar4) || (*(int *)(puVar3 + 8) + iVar4 <= a1)) || (iVar5 < iVar4)) ||
            (*(int *)(puVar3 + 8) + iVar4 < iVar5)) {
            puVar3 = *(u16 **)(puVar3 + 4);
        } else {
            ar6_00 = puVar3;
            puVar3 = NULL;
        }
    }
    if (ar6_00 == NULL) {
        return 3;
    }
    if (*(u32 *)(ar6_00 + 8) == a2) {
        dlist_unlink(&g_8c275408 + iVar2 * 5, &g_8c27540c + iVar2 * 5, ar6_00, 0);
        dlist_push_front(&g_8c275400 + iVar2 * 5, &g_8c275404 + iVar2 * 5, ar6_00);
        *(u32 *)(a3 + 0x1c) = *(u32 *)(ar6_00 + 6);
        *(int *)(ar6_00 + 10) = a3;
        *ar6_00 = 1;
        if ((short)a0 == 0) {
            *ar6_00 = *ar6_00 | 0x80;
        } else {
            *ar6_00 = *ar6_00 | 0x100;
        }
        if (s0 != 0) {
            *ar6_00 = *ar6_00 | 2;
        }
        if (s4 != 0) {
            *ar6_00 = *ar6_00 | 4;
        }
        iVar5 = *(int *)(ar6_00 + 8);
    } else {
        if (*(int *)(ar6_00 + 6) != a1) {
            if (*(int *)(ar6_00 + 6) + *(int *)(ar6_00 + 8) == iVar5) {
                ar6_01 = (u16 *)pool47eba8_alloc(0, iVar4, iVar5, 0);
                if (ar6_01 == NULL) {
                    return 3;
                }
                *(u32 *)(ar6_00 + 8) = *(int *)(ar6_00 + 8) - a2;
                *(int *)(ar6_01 + 6) = a1;
                *(u32 *)(ar6_01 + 8) = a2;
                dlist_push_front(&g_8c275400 + iVar2 * 5, &g_8c275404 + iVar2 * 5, ar6_01, a7, &g_8c275400 + iVar2 * 5);
                *(u32 *)(a3 + 0x1c) = *(u32 *)(ar6_01 + 6);
                *(int *)(ar6_01 + 10) = a3;
                if ((short)a0 == 0) {
                    *ar6_01 = *ar6_01 | 0x80;
                } else {
                    *ar6_01 = *ar6_01 | 0x100;
                }
                if (s0 != 0) {
                    *ar6_01 = *ar6_01 | 2;
                }
                if (s4 != 0) {
                    *ar6_01 = *ar6_01 | 4;
                }
            } else {
                ar6_01 = (u16 *)pool47eba8_alloc(0, iVar4, iVar5, 0);
                if (ar6_01 == NULL) {
                    return 3;
                }
                ain0 = pool47eba8_alloc(puVar3, iVar4, iVar5, a7);
                if (ain0 == 0) {
                    pool47eba8_free(ar6_01);
                    return 3;
                }
                iVar5 = *(int *)(ar6_00 + 8);
                iVar4 = *(int *)(ar6_00 + 6);
                *(int *)(ar6_00 + 8) = a1 - iVar4;
                *(int *)(ar6_01 + 6) = a1;
                *(u32 *)(ar6_01 + 8) = a2;
                dlist_push_front(&g_8c275400 + iVar2 * 5, &g_8c275404 + iVar2 * 5, ar6_01);
                *(u32 *)(ain0 + 0xc) = a1 + a2;
                *(u32 *)(ain0 + 0x10) = (iVar5 - a2) - (a1 - iVar4);
                dlist_insert_before(&g_8c27540c + iVar2 * 5, ain0, (&g_8c27540c)[iVar2 * 5]);
                *(u32 *)(a3 + 0x1c) = *(u32 *)(ar6_01 + 6);
                *(int *)(ar6_01 + 10) = a3;
                if ((short)a0 == 0) {
                    *ar6_01 = *ar6_01 | 0x80;
                } else {
                    *ar6_01 = *ar6_01 | 0x100;
                }
                if (s0 != 0) {
                    *ar6_01 = *ar6_01 | 2;
                }
                if (s4 != 0) {
                    *ar6_01 = *ar6_01 | 4;
                }
            }
            (&g_8c275410)[iVar2 * 5] = (&g_8c275410)[iVar2 * 5] - *(int *)(ar6_01 + 8);
            return 0;
        }
        puVar3 = (u16 *)pool47eba8_alloc(0, iVar4, iVar5, 0);
        if (puVar3 == NULL) {
            return 3;
        }
        *(u32 *)(puVar3 + 6) = *(u32 *)(ar6_00 + 6);
        *(u32 *)(puVar3 + 8) = a2;
        *(u32 *)(ar6_00 + 8) = *(int *)(ar6_00 + 8) - a2;
        *(u32 *)(ar6_00 + 6) = *(int *)(ar6_00 + 6) + a2;
        dlist_push_front(&g_8c275400 + iVar2 * 5, &g_8c275404 + iVar2 * 5, puVar3, a7, &g_8c275400 + iVar2 * 5);
        *(u32 *)(a3 + 0x1c) = *(u32 *)(puVar3 + 6);
        *(int *)(puVar3 + 10) = a3;
        if ((short)a0 == 0) {
            *puVar3 = *puVar3 | 0x80;
        } else {
            *puVar3 = *puVar3 | 0x100;
        }
        if (s0 != 0) {
            *puVar3 = *puVar3 | 2;
        }
        if (s4 != 0) {
            *puVar3 = *puVar3 | 4;
        }
        iVar5 = *(int *)(puVar3 + 8);
    }
    (&g_8c275410)[iVar2 * 5] = (&g_8c275410)[iVar2 * 5] - iVar5;
    return 0;
}

/*
 * shinobi_list_2046d2  0x8c2046d2
 * area name: in the shinobi library code range; behaviour name: mostly calls list functions
 * called by: alt_entry_2036ac, kamui_list_2036a0, shinobi_list_20374e, shinobi_list_203820
 */
u32 shinobi_list_2046d2(u32 a0, u32 a1, u32 *a2, u32 a3) {
    u16 *puVar1;
    u16 *ar6_00;
    u32 uVar2;
    u16 *puVar3;
    u32 uVar4;
    int iVar5;
    short sVar6;
    int iVar7;

    if ((int)a1 < 0) {
        uVar2 = ~(~a1 + 1 & 0x1f) + 1;
    } else {
        uVar2 = a1 & 0x1f;
    }
    if (uVar2 != 0) {
        a1 = a1 + (0x20 - uVar2);
    }
    iVar7 = (int)(short)a0;
    puVar3 = (u16 *)(&g_8c275408)[iVar7 * 5];
    ar6_00 = NULL;
    while (puVar1 = puVar3, puVar1 != NULL) {
        if (*(int *)(puVar1 + 8) < (int)a1) {
            puVar3 = *(u16 **)(puVar1 + 4);
        } else {
            puVar3 = NULL;
            ar6_00 = puVar1;
        }
    }
    if (ar6_00 == NULL) {
    LAB_8c204880:
        uVar4 = 3;
    } else {
        sVar6 = (short)a3;
        if (*(u32 *)(ar6_00 + 8) == a1) {
            dlist_unlink(&g_8c275408 + iVar7 * 5, &g_8c27540c + iVar7 * 5, ar6_00, a3);
            dlist_push_front(&g_8c275400 + iVar7 * 5, &g_8c275404 + iVar7 * 5, ar6_00);
            *ar6_00 = 1;
            if (sVar6 == 8) {
                a2[7] = *(u32 *)(ar6_00 + 6);
                *(u32 **)(ar6_00 + 10) = a2;
                *ar6_00 = *ar6_00 | 8;
            } else {
                if (sVar6 != 0x2000)
                    goto LAB_8c204880;
                *a2 = *(u32 *)(ar6_00 + 6);
                *(u32 **)(ar6_00 + 10) = a2;
                *ar6_00 = *ar6_00 | 0x2000;
            }
            *ar6_00 = *ar6_00 | 4;
            iVar5 = *(int *)(ar6_00 + 8);
        } else {
            puVar3 = (u16 *)pool47eba8_alloc(0, 0, a2, a3);
            if (puVar3 == NULL)
                goto LAB_8c204880;
            *(u32 *)(puVar3 + 6) = *(u32 *)(ar6_00 + 6);
            *(u32 *)(puVar3 + 8) = a1;
            *(u32 *)(ar6_00 + 8) = *(int *)(ar6_00 + 8) - a1;
            *(u32 *)(ar6_00 + 6) = a1 + *(int *)(ar6_00 + 6);
            dlist_push_front(&g_8c275400 + iVar7 * 5, &g_8c275404 + iVar7 * 5, puVar3, a3, &g_8c275400 + iVar7 * 5);
            if (sVar6 == 8) {
                a2[7] = *(u32 *)(puVar3 + 6);
                *(u32 **)(puVar3 + 10) = a2;
                *puVar3 = *puVar3 | 8;
            } else {
                if (sVar6 != 0x2000)
                    goto LAB_8c204880;
                *a2 = *(u32 *)(puVar3 + 6);
                *(u32 **)(puVar3 + 10) = a2;
                *puVar3 = *puVar3 | 0x2000;
            }
            *puVar3 = *puVar3 | 4;
            iVar5 = *(int *)(puVar3 + 8);
        }
        uVar4 = 0;
        (&g_8c275410)[iVar7 * 5] = (&g_8c275410)[iVar7 * 5] - iVar5;
    }
    return uVar4;
}

/*
 * shinobi_list_2048aa  0x8c2048aa
 * area name: in the shinobi library code range; behaviour name: mostly calls list functions
 * called by: shinobi_list_2038c0
 */
u32 shinobi_list_2048aa(u32 a0, u32 a1, int a2, u32 a3) {
    u16 *puVar1;
    u16 *ar6_00;
    u16 uVar2;
    u32 uVar3;
    u16 *puVar4;
    u32 uVar5;
    int iVar6;
    int iVar7;

    if ((int)a1 < 0) {
        uVar3 = ~(~a1 + 1 & 0x1f) + 1;
    } else {
        uVar3 = a1 & 0x1f;
    }
    if (uVar3 != 0) {
        a1 = a1 + (0x20 - uVar3);
    }
    iVar7 = (int)(short)a0;
    puVar4 = (u16 *)(&g_8c275408)[iVar7 * 5];
    ar6_00 = NULL;
    while (puVar1 = puVar4, puVar1 != NULL) {
        if (*(int *)(puVar1 + 8) < (int)a1) {
            puVar4 = *(u16 **)(puVar1 + 4);
        } else {
            puVar4 = NULL;
            ar6_00 = puVar1;
        }
    }
    if (ar6_00 == NULL) {
    LAB_8c204964:
        uVar5 = 3;
    } else {
        if (*(u32 *)(ar6_00 + 8) == a1) {
            dlist_unlink(&g_8c275408 + iVar7 * 5, &g_8c27540c + iVar7 * 5, ar6_00, a3);
            dlist_push_front(&g_8c275400 + iVar7 * 5, &g_8c275404 + iVar7 * 5, ar6_00);
            *(u32 *)(a2 + 0x1c) = *(u32 *)(ar6_00 + 6);
            *(int *)(ar6_00 + 10) = a2;
            *ar6_00 = 1;
            if ((short)a0 == 0) {
                uVar2 = *ar6_00 | 0x20;
            } else {
                uVar2 = *ar6_00 | 0x40;
            }
            *ar6_00 = uVar2;
            *ar6_00 = *ar6_00 | 4;
            iVar6 = *(int *)(ar6_00 + 8);
        } else {
            puVar4 = (u16 *)pool47eba8_alloc(0, 0, a2, a3);
            if (puVar4 == NULL)
                goto LAB_8c204964;
            *(u32 *)(puVar4 + 6) = *(u32 *)(ar6_00 + 6);
            *(u32 *)(puVar4 + 8) = a1;
            *(u32 *)(ar6_00 + 8) = *(int *)(ar6_00 + 8) - a1;
            *(u32 *)(ar6_00 + 6) = *(int *)(ar6_00 + 6) + a1;
            dlist_push_front(&g_8c275400 + iVar7 * 5, &g_8c275404 + iVar7 * 5, puVar4, a3, &g_8c275400 + iVar7 * 5);
            *(u32 *)(a2 + 0x1c) = *(u32 *)(puVar4 + 6);
            *(int *)(puVar4 + 10) = a2;
            if ((short)a0 == 0) {
                uVar2 = *puVar4 | 0x20;
            } else {
                uVar2 = *puVar4 | 0x40;
            }
            *puVar4 = uVar2;
            *puVar4 = *puVar4 | 4;
            iVar6 = *(int *)(puVar4 + 8);
        }
        uVar5 = 0;
        (&g_8c275410)[iVar7 * 5] = (&g_8c275410)[iVar7 * 5] - iVar6;
    }
    return uVar5;
}

/*
 * shinobi_list_2049ec  0x8c2049ec
 * area name: in the shinobi library code range; behaviour name: mostly calls list functions
 * called by: shinobi_uses_rec4c_alloc_203a92
 */
u32 shinobi_list_2049ec(u32 a0, u32 a1, int a2, int a3) {
    u32 uVar1;
    int iVar2;
    int iVar3;
    u32 uVar4;
    u16 *puVar5;
    u16 *puVar6;
    int iVar7;
    u16 *puVar8;
    u32 a6;
    u16 *ar6_00;
    int in_stack_ffffffd4;

    iVar7 = 0;
    if ((int)a1 < 0) {
        uVar1 = ~(~a1 + 1 & 0x1f) + 1;
    } else {
        uVar1 = a1 & 0x1f;
    }
    puVar8 = NULL;
    a6 = a1;
    if (uVar1 != 0) {
        a6 = a1 + (0x20 - uVar1);
    }
    iVar2 = (int)(short)a0;
    ar6_00 = NULL;
    if ((u16 *)(&g_8c275408)[iVar2 * 5] != NULL) {
        a3 = 0x800;
        puVar5 = (u16 *)(&g_8c275408)[iVar2 * 5];
        do {
            if (*(int *)(puVar5 + 8) < (int)a6) {
                puVar6 = *(u16 **)(puVar5 + 4);
            } else {
                if (puVar8 == NULL) {
                    puVar8 = puVar5;
                }
                iVar3 = libgcc_divide_helper_010614(*(u32 *)(puVar5 + 6), a3);
                if (iVar3 == 0) {
                    a1 = *(u32 *)(puVar5 + 6);
                LAB_8c204a94:
                    iVar7 = 1;
                } else {
                    a1 = *(int *)(puVar5 + 6) + a3 & 0xfffff800;
                    in_stack_ffffffd4 = *(int *)(puVar5 + 6) + *(int *)(puVar5 + 8);
                    if ((in_stack_ffffffd4 <= (int)a1) || ((int)a6 <= (int)(a1 - *(int *)(puVar5 + 6))))
                        goto LAB_8c204a94;
                    if ((int)(in_stack_ffffffd4 - a1) < (int)a6) {
                        puVar6 = *(u16 **)(puVar5 + 4);
                        goto LAB_8c204ac2;
                    }
                    iVar7 = 2;
                }
                puVar6 = NULL;
                ar6_00 = puVar5;
            }
        LAB_8c204ac2:
            puVar5 = puVar6;
        } while (puVar6 != NULL);
    }
    if ((iVar7 == 0) && (puVar8 != NULL)) {
        iVar7 = 1;
        ar6_00 = puVar8;
    }
    if (ar6_00 == NULL) {
    LAB_8c204b6a:
        uVar4 = 3;
    } else {
        if (iVar7 == 2) {
            uVar4 = ta_fifo_2052f2((int)(short)a0, a1, a6, a2);
            return uVar4;
        }
        if (*(u32 *)(ar6_00 + 8) == a6) {
            dlist_unlink(&g_8c275408 + iVar2 * 5, &g_8c27540c + iVar2 * 5, ar6_00, a3);
            dlist_push_front(&g_8c275400 + iVar2 * 5, &g_8c275404 + iVar2 * 5, ar6_00);
            *(u32 *)(a2 + 8) = *(u32 *)(ar6_00 + 6);
            *(int *)(ar6_00 + 10) = a2;
            *ar6_00 = 1;
            if ((short)a0 == 0) {
                *ar6_00 = *ar6_00 | 0x200;
            } else {
                *ar6_00 = *ar6_00 | 0x400;
            }
            *ar6_00 = *ar6_00 | 4;
            iVar7 = *(int *)(ar6_00 + 8);
        } else {
            puVar8 = (u16 *)pool47eba8_alloc(0, a1, iVar7, a3);
            if (puVar8 == NULL)
                goto LAB_8c204b6a;
            *(u32 *)(puVar8 + 6) = *(u32 *)(ar6_00 + 6);
            *(u32 *)(puVar8 + 8) = a6;
            *(u32 *)(ar6_00 + 8) = *(int *)(ar6_00 + 8) - a6;
            *(u32 *)(ar6_00 + 6) = *(int *)(ar6_00 + 6) + a6;
            dlist_push_front(&g_8c275400 + iVar2 * 5, &g_8c275404 + iVar2 * 5, puVar8, a3, &g_8c275400 + iVar2 * 5);
            *(u32 *)(a2 + 8) = *(u32 *)(puVar8 + 6);
            *(int *)(puVar8 + 10) = a2;
            if ((short)a0 == 0) {
                *puVar8 = *puVar8 | 0x200;
            } else {
                *puVar8 = *puVar8 | 0x400;
            }
            *puVar8 = *puVar8 | 4;
            iVar7 = *(int *)(puVar8 + 8);
        }
        uVar4 = 0;
        (&g_8c275410)[iVar2 * 5] = (&g_8c275410)[iVar2 * 5] - iVar7;
    }
    return uVar4;
}

/*
 * shinobi_uses_mem_pool_find_block_204c00  0x8c204c00
 * area name: in the shinobi library code range; behaviour name: its main named callee is mem_pool_find_block
 * called by: shinobi_uses_mem_pool_find_block_2039e0
 */
u16 *shinobi_uses_mem_pool_find_block_204c00(u32 a0, int a1, int a2) {
    u16 uVar1;
    int iVar2;
    u16 *puVar3;
    int iVar4;
    u16 *puVar5;
    u8 auStack_28[4];
    int iStack_24;
    int iStack_20;

    puVar3 = NULL;
    iStack_24 = a1;
    iStack_20 = a2;
    iVar4 = g_8c2753ec;
    for (puVar5 = (u16 *)(&g_8c275400)[(short)a0 * 5]; puVar5 != NULL; puVar5 = *(u16 **)(puVar5 + 4)) {
        uVar1 = *puVar5;
        if (((((uVar1 & 4) == 0) && ((uVar1 & 2) != 0)) && ((uVar1 & 0x180) != 0)) &&
            ((iStack_24 <= *(int *)(puVar5 + 8) && (*(int *)(puVar5 + 8) < iVar4)))) {
            if ((short)a0 == 0) {
                iVar2 = *(int *)(puVar5 + 6) + g_8c2753f4;
            } else {
                iVar2 = *(int *)(puVar5 + 6) - g_8c2753f4;
            }
            iVar2 = mem_pool_find_block(iVar2, auStack_28);
            if ((iVar2 != 0) && (*(int *)(*(int *)(iVar2 + 0x14) + 0x18) == *(int *)(iStack_20 + 0x18))) {
                iVar4 = *(int *)(puVar5 + 8);
                puVar3 = puVar5;
            }
        }
    }
    return puVar3;
}

/*
 * mem_pool_find_block  0x8c204cc0
 * finds the block starting at a0 in its pool's list (pool 0 below 0x8c2753f8's limit, else 1)
 * called by: shinobi_list_203bda, shinobi_uses_mem_pool_find_block_204c00, shinobi_uses_mem_pool_find_block_205860
 */
int mem_pool_find_block(int a0, short *a1) {
    int iVar1;
    int iVar2;
    int iVar3;

    if (a0 < g_8c2753f8) {
        *a1 = 0;
    } else {
        *a1 = 1;
    }
    iVar3 = (&g_8c275400)[*a1 * 5];
    iVar2 = 0;
    while (iVar1 = iVar3, iVar1 != 0) {
        if (*(int *)(iVar1 + 0xc) == a0) {
            iVar3 = 0;
            iVar2 = iVar1;
        } else {
            iVar3 = *(int *)(iVar1 + 8);
        }
    }
    return iVar2;
}

/*
 * shinobi_list_204cfc  0x8c204cfc
 * area name: in the shinobi library code range; behaviour name: mostly calls list functions
 * called by: shinobi_list_203bda
 */
u32 shinobi_list_204cfc(u32 a0, u16 *a1, u32 unused_a2, u32 a3) {
    u16 *puVar1;
    u16 *puVar2;
    u32 *ar5_00;
    u32 *puVar3;
    u16 *ar6_00;
    int iVar4;
    u16 *puVar5;

    iVar4 = (int)(short)a0;
    *a1 = *a1 & 0xfffb;
    ar5_00 = &g_8c275404 + iVar4 * 5;
    ar6_00 = a1;
    dlist_unlink(&g_8c275400 + iVar4 * 5, ar5_00, a1, a3);
    (&g_8c275410)[iVar4 * 5] = (&g_8c275410)[iVar4 * 5] + *(int *)(a1 + 8);
    puVar5 = (u16 *)(&g_8c275408)[iVar4 * 5];
    puVar2 = NULL;
    while (puVar1 = puVar5, puVar1 != NULL) {
        ar6_00 = *(u16 **)(a1 + 6);
        ar5_00 = *(u32 **)(puVar1 + 6);
        if ((ar5_00 == (u32 *)(*(int *)(a1 + 8) + (int)ar6_00)) ||
            (ar6_00 == (u16 *)(*(int *)(puVar1 + 8) + (int)ar5_00))) {
            puVar5 = NULL;
            puVar2 = puVar1;
        } else {
            puVar5 = *(u16 **)(puVar1 + 4);
        }
    }
    iVar4 = (int)(short)a0;
    puVar3 = &g_8c275400 + iVar4 * 5;
    puVar5 = a1;
    if (puVar2 != NULL) {
        do {
            a1 = puVar2;
            if (*(int *)(a1 + 6) == *(int *)(puVar5 + 6) + *(int *)(puVar5 + 8)) {
                *(u32 *)(a1 + 6) = *(u32 *)(puVar5 + 6);
                *(int *)(a1 + 8) = *(int *)(a1 + 8) + *(int *)(puVar5 + 8);
            } else {
                *(int *)(a1 + 8) = *(int *)(a1 + 8) + *(int *)(puVar5 + 8);
            }
            pool47eba8_free(puVar5);
            ar5_00 = &g_8c27540c + iVar4 * 5;
            ar6_00 = a1;
            dlist_unlink(&g_8c275408 + iVar4 * 5, ar5_00, a1, a3);
            puVar5 = (u16 *)(&g_8c275408)[iVar4 * 5];
            puVar2 = NULL;
            while (puVar1 = puVar5, puVar1 != NULL) {
                ar5_00 = *(u32 **)(a1 + 6);
                ar6_00 = *(u16 **)(puVar1 + 6);
                if ((ar6_00 == (u16 *)(*(int *)(a1 + 8) + (int)ar5_00)) ||
                    (ar5_00 == (u32 *)(*(int *)(puVar1 + 8) + (int)ar6_00))) {
                    puVar5 = NULL;
                    puVar2 = puVar1;
                } else {
                    puVar5 = *(u16 **)(puVar1 + 4);
                }
            }
            puVar5 = a1;
        } while (puVar2 != NULL);
        puVar3 = &g_8c275400 + (short)a0 * 5;
    }
    dlist_push_front(puVar3 + 2, puVar3 + 3, a1);
    return 0;
}

/*
 * pool47eba8_alloc  0x8c204e40
 * marks and returns the first free 0x18-byte entry of the pool at 0x8c47eba8; NULL when full
 * called by: kamui_cfg_texture_memory, kamui_cfg_texture_memory_b, shinobi_list_2043d4, shinobi_list_2046d2,
 * shinobi_list_2048aa, shinobi_list_2049ec, ta_fifo_2050cc, ta_fifo_2050de (+1 more)
 */
u16 *pool47eba8_alloc(u32 a0, u32 a1, u32 unused_a2, u32 a3) {
    u16 *puVar1;
    u16 *puVar2;

    puVar1 = 0x8c47eba8;
    puVar2 = 0x8c47eba8;
    while (true) {
        if ((u16 *)(0x18000 + (int)0x8c47eba8) <= puVar1) {
            return (u16 *)0;
        }
        if ((*puVar1 & 1) == 0)
            break;
        puVar1 = puVar1 + 0xc;
        puVar2 = puVar2 + 0xc;
    }
    *puVar2 = 1;
    return puVar2;
}

/*
 * pool47eba8_free  0x8c204e6c
 * frees entry a0 of the pool at 0x8c47eba8 (pairs with pool47eba8_alloc)
 * called by: alt_entry_203406, shinobi_list_2043d4, shinobi_list_204cfc, shinobi_uses_pool47eba8_free_203400,
 * ta_fifo_2050cc, ta_fifo_2050de, ta_fifo_2052f2
 */
u32 pool47eba8_free(u16 *a0) {
    u32 uVar1;
    u32 in_r0;
    u16 *puVar2;
    u16 *puVar3;
    u16 *puVar4;

    uVar1 = 0xfffe;
    puVar2 = (u16 *)((int)0x8c47eba8 + 0x18000);
    puVar3 = 0x8c47eba8;
    puVar4 = 0x8c47eba8;
    do {
        if (puVar3 == a0) {
            *puVar4 = *puVar4 & (u16)uVar1;
        }
        puVar3 = puVar3 + 0xc;
        puVar4 = puVar4 + 0xc;
    } while (puVar3 < puVar2);
    return in_r0;
}

/*
 * dlist_push_front  0x8c204e92
 * links node a2 in front of the list with head *a0 and tail *a1 (prev +4, next +8)
 * called by: shinobi_list_2043d4, shinobi_list_2046d2, shinobi_list_2048aa, shinobi_list_2049ec, shinobi_list_204cfc,
 * ta_fifo_2050cc, ta_fifo_2050de, ta_fifo_2052f2
 */
u32 dlist_push_front(int *a0, int *a1, int a2) {
    u32 in_r0;
    int iVar1;

    if (*a0 == 0) {
        *(u32 *)(a2 + 4) = 0;
        *(u32 *)(a2 + 8) = 0;
        *a0 = a2;
        *a1 = a2;
    } else {
        iVar1 = *a0;
        *(u32 *)(a2 + 4) = *(u32 *)(iVar1 + 4);
        *(int *)(a2 + 8) = *a0;
        *(int *)(iVar1 + 4) = a2;
        *a0 = a2;
    }
    return in_r0;
}

/*
 * dlist_insert_before  0x8c204eb6
 * links node a1 in front of node a2 (prev +4, next +8), updating the head *a0
 * called by: shinobi_list_2043d4, shinobi_list_205020, ta_fifo_2050cc, ta_fifo_2050de, ta_fifo_2052f2
 */
u32 dlist_insert_before(int *a0, int a1, int a2) {
    u32 in_r0;
    u32 uVar1;

    if (*(int *)(a2 + 8) == 0) {
        *a0 = a1;
        *(int *)(a1 + 4) = a2;
        uVar1 = 0;
    } else {
        *(int *)(*(int *)(a2 + 8) + 4) = a1;
        *(int *)(a1 + 4) = a2;
        uVar1 = *(u32 *)(a2 + 8);
    }
    *(u32 *)(a1 + 8) = uVar1;
    *(int *)(a2 + 8) = a1;
    return in_r0;
}

/*
 * dlist_unlink  0x8c204ed2
 * unlinks node a2 (prev +4, next +8) from the list with head *a0 and tail *a1
 * called by: shinobi_list_2043d4, shinobi_list_2046d2, shinobi_list_2048aa, shinobi_list_2049ec, shinobi_list_204cfc,
 * shinobi_list_205020, ta_fifo_2050cc, ta_fifo_2050de (+1 more)
 */
u32 dlist_unlink(u32 *a0, u32 *a1, int a2, u32 a3) {
    u32 in_r0;
    int iVar1;

    iVar1 = *(int *)(a2 + 8);
    if (*(int *)(a2 + 4) == 0) {
        *a0 = *(u32 *)(a2 + 8);
    } else {
        *(u32 *)(*(int *)(a2 + 4) + 8) = *(u32 *)(a2 + 8);
    }
    if (*(int *)(a2 + 8) == 0) {
        *a1 = *(u32 *)(a2 + 4);
    } else {
        *(u32 *)(iVar1 + 4) = *(u32 *)(a2 + 4);
    }
    return in_r0;
}

/*
 * shinobi_uses_vram64_204f2a  0x8c204f2a
 * area name: in the shinobi library code range; behaviour name: its main named callee is vram64_20a9c2
 * called by: ta_fifo_2050cc, ta_fifo_2050de
 */
u32 shinobi_uses_vram64_204f2a(int a0, int a1, u32 a2, u32 a3) {
    u8 *puVar1;
    int iVar2;
    u32 uVar3;
    u32 a6;
    int iVar4;
    int a4;
    int iVar5;
    u32 uVar6;
    int iStack_20;

    puVar1 = (&CacheBlockWriteBack_wrap);
    iVar2 = (int)(int)0xfffff7fc;
    uVar6 = (u32)0x800;
    if (uVar6 < a2) {
        *(u8 **)((int)&iStack_20 + iVar2) = &stack0xffffffe4 + iVar2;
        do {
            iVar5 = a1;
            a6 = uVar6;
            vram64_20a9c2(*(u32 *)((int)&iStack_20 + iVar2), a1, uVar6);
            a4 = *(int *)((int)&iStack_20 + iVar2);
            for (iVar4 = 0x40; iVar4 != 0; iVar4 = iVar4 + -1) {
                (*(code *)puVar1)(a4, iVar5, a6, a3);
                a4 = a4 + 0x20;
            }
            vram64_20a8e0(a0, *(u32 *)((int)&iStack_20 + iVar2), uVar6);
            a2 = a2 - uVar6;
            a1 = a1 + uVar6;
            a0 = a0 + uVar6;
        } while (uVar6 < a2);
    }
    *(u8 **)((int)&iStack_20 + iVar2) = &stack0xffffffe4 + iVar2;
    uVar6 = a2;
    vram64_20a9c2(&stack0xffffffe4 + iVar2, a1, a2);
    iVar4 = *(int *)((int)&iStack_20 + iVar2);
    for (iVar5 = 0x40; iVar5 != 0; iVar5 = iVar5 + -1) {
        (*(code *)puVar1)(iVar4, a1, uVar6, a3);
        iVar4 = iVar4 + 0x20;
    }
    uVar3 = vram64_20a8e0(a0, *(u32 *)((int)&iStack_20 + iVar2), a2);
    return uVar3;
}

/*
 * shinobi_list_205020  0x8c205020
 * area name: in the shinobi library code range; behaviour name: mostly calls list functions
 * called by: alt_entry_204092, shinobi_list_20408e
 */
u32 shinobi_list_205020(int *a0, int *a1, u32 unused_a2, u32 a3, u32 ain0) {
    int iVar1;
    int iVar2;
    int iVar3;
    int iVar4;
    int ar6_00;
    int iVar5;

    if (*a0 != 0) {
        iVar1 = *a0;
        iVar3 = 0;
        iVar5 = iVar1;
        do {
            iVar4 = iVar3;
            if (*(int *)(iVar5 + 0xc) < *(int *)(iVar1 + 0xc)) {
                iVar5 = iVar1;
            }
            iVar1 = *(int *)(iVar1 + 8);
            iVar3 = iVar4 + 1;
        } while (iVar1 != 0);
        if (1 < iVar3) {
            if (*a1 != iVar5) {
                dlist_unlink(a0, a1, iVar5, a3);
                ain0 = dlist_insert_before(a1, iVar5, *a1);
            }
            iVar4 = iVar4 + -1;
            iVar5 = 0;
            iVar3 = iVar4;
            if (0 < iVar4) {
                do {
                    iVar1 = *a0;
                    iVar2 = 0;
                    ar6_00 = iVar1;
                    if (0 < iVar3) {
                        do {
                            ar6_00 = *(int *)(ar6_00 + 8);
                            iVar2 = iVar2 + 1;
                            if (*(int *)(iVar1 + 0xc) < *(int *)(ar6_00 + 0xc)) {
                                iVar1 = ar6_00;
                            }
                        } while (iVar2 < iVar3);
                    }
                    if (ar6_00 != iVar1) {
                        dlist_unlink(a0, a1, iVar1, a3);
                        ain0 = dlist_insert_before(a1, iVar1, ar6_00);
                    }
                    iVar3 = iVar3 + -1;
                    iVar5 = iVar5 + 1;
                } while (iVar5 < iVar4);
            }
        }
    }
    return ain0;
}

/*
 * ta_fifo_2050cc  0x8c2050cc
 * called by: alt_entry_2040d2, shinobi_draw_2040ce
 */
u32 ta_fifo_2050cc(int *a0, int a1, u32 *a2, int a3) {
    u16 uVar1;
    u32 uVar2;
    int iVar3;
    int iVar4;
    u32 uVar5;
    int iVar6;
    int iVar7;
    u32 *ar6_00;
    int iVar8;
    u16 *puVar9;

    iVar8 = *a0;
    puVar9 = (u16 *)*a2;
    if ((iVar8 == 0) || (iVar3 = a1, puVar9 == NULL)) {
        return 0;
    }
    do {
        uVar1 = *puVar9;
        iVar7 = 0;
        if ((((uVar1 & 0x20) != 0) || ((uVar1 & 0x40) != 0)) ||
            (((uVar1 & 2) == 0 && (((0x80 & uVar1) != 0 || (((uVar1 & 2) == 0 && ((0x100 & uVar1) != 0)))))))) {
            iVar7 = 1;
        }
        uVar1 = *puVar9;
        uVar5 = (u32)uVar1;
        if (((((int)0x200 & uVar5) != 0) || (((int)0x400 & uVar5) != 0)) ||
            (((uVar1 & 2) == 0 &&
              ((((int)0x800 & uVar5) != 0 || (((uVar1 & 2) == 0 && (((int)0x1000 & uVar5) != 0)))))))) {
            iVar7 = 2;
        }
        if (iVar7 == 0) {
            if (iVar8 == 0) {
                return 0;
            }
            if (*(int *)(iVar8 + 0xc) < *(int *)(puVar9 + 6)) {
                do {
                    iVar8 = *(int *)(iVar8 + 8);
                    if (iVar8 == 0) {
                        return 0;
                    }
                } while (*(int *)(iVar8 + 0xc) < *(int *)(puVar9 + 6));
            }
            if (iVar8 == 0) {
                return 0;
            }
            if (puVar9 == NULL) {
                return 0;
            }
            if (*(int *)(puVar9 + 6) < *(int *)(iVar8 + 0xc)) {
                do {
                    puVar9 = *(u16 **)(puVar9 + 4);
                    if (puVar9 == NULL) {
                        return 0;
                    }
                } while (*(int *)(puVar9 + 6) < *(int *)(iVar8 + 0xc));
            }
        } else {
            if (*(int *)(iVar8 + 0xc) + *(int *)(iVar8 + 0x10) == *(int *)(puVar9 + 6)) {
                uVar2 = *(u32 *)(iVar8 + 0xc);
                if ((int)uVar2 < 0) {
                    uVar2 = ~(~uVar2 + 1 & 0x1f) + 1;
                } else {
                    uVar2 = uVar2 & 0x1f;
                }
                if (uVar2 != 0) {
                    iVar3 = pool47eba8_alloc(uVar5, iVar3, a2, a3);
                    if (iVar3 == 0) {
                        return 3;
                    }
                    *(u32 *)(iVar3 + 0xc) = *(u32 *)(iVar8 + 0xc);
                    *(u32 *)(iVar8 + 0xc) = *(int *)(iVar8 + 0xc) + 0x1fU & 0xffffffe0;
                    iVar4 = *(int *)(iVar8 + 0xc) - *(int *)(iVar3 + 0xc);
                    *(int *)(iVar3 + 0x10) = iVar4;
                    *(int *)(iVar8 + 0x10) = *(int *)(iVar8 + 0x10) - iVar4;
                    if (*(int *)(iVar8 + 4) == 0) {
                        dlist_push_front(a0, a1, iVar3);
                    } else {
                        dlist_insert_before(a1, iVar3, *(int *)(iVar8 + 4));
                    }
                }
                iVar3 = *(int *)(puVar9 + 6);
                shinobi_uses_vram64_204f2a(*(u32 *)(iVar8 + 0xc), iVar3, *(u32 *)(puVar9 + 8), a3);
                iVar6 = *(int *)(puVar9 + 6);
                iVar4 = *(int *)(iVar8 + 0xc);
                *(int *)(puVar9 + 6) = iVar4;
                a2 = (u32 *)(iVar6 - iVar4);
                *(int *)(iVar8 + 0xc) = *(int *)(iVar8 + 0xc) + *(int *)(puVar9 + 8);
                if (iVar7 == 1) {
                    *(u32 *)(*(int *)(puVar9 + 10) + 0x1c) = *(u32 *)(puVar9 + 6);
                } else {
                    a2 = (u32 *)((u32)a2 >> 2);
                    a3 = (int)a2 * 4;
                    iVar3 = 0;
                    *(u32 *)(*(int *)(puVar9 + 10) + 8) = *(u32 *)(puVar9 + 6);
                    uVar5 = 0;
                    do {
                        if (*(int *)(*(int *)(puVar9 + 10) + 0xc + uVar5) != 0) {
                            iVar7 = *(int *)(*(int *)(puVar9 + 10) + 0xc + iVar3);
                            *(int *)(iVar7 + 0x1c) = *(int *)(iVar7 + 0x1c) + (int)a2 * -4;
                        }
                        uVar5 = uVar5 + 4;
                        iVar3 = iVar3 + 4;
                    } while (uVar5 < 0x40);
                }
                ar6_00 = *(u32 **)(iVar8 + 8);
                if ((ar6_00 != NULL) && (*(int *)(iVar8 + 0xc) + *(int *)(iVar8 + 0x10) == ar6_00[3])) {
                    *(int *)(iVar8 + 0x10) = *(int *)(iVar8 + 0x10) + ar6_00[4];
                    iVar3 = a1;
                    a2 = ar6_00;
                    dlist_unlink(a0, a1, ar6_00, a3);
                    pool47eba8_free(ar6_00);
                }
            }
            if ((puVar9 != NULL) && (*(int *)(puVar9 + 6) < *(int *)(iVar8 + 0xc))) {
                do {
                    puVar9 = *(u16 **)(puVar9 + 4);
                    if (puVar9 == NULL)
                        break;
                } while (*(int *)(puVar9 + 6) < *(int *)(iVar8 + 0xc));
            }
        }
        if (puVar9 == NULL) {
            return 0;
        }
        if (iVar8 == 0) {
            return 0;
        }
    } while (true);
}

/*
 * ta_fifo_2050de  0x8c2050de
 */
u32 ta_fifo_2050de(u32 unused_a0, int a1, u32 *a2, int a3) {
    u16 uVar1;
    u32 uVar2;
    int iVar3;
    int iVar4;
    int *unaff_r8;
    int unaff_r9;
    int iVar5;
    u32 *ar6_00;
    int iVar6;
    u16 *puVar7;

    iVar6 = *unaff_r8;
    puVar7 = (u16 *)*a2;
    if ((iVar6 == 0) || (puVar7 == NULL)) {
        return 0;
    }
    do {
        uVar1 = *puVar7;
        iVar5 = 0;
        if ((((uVar1 & 0x20) != 0) || ((uVar1 & 0x40) != 0)) ||
            (((uVar1 & 2) == 0 && (((uVar1 & 0x80) != 0 || (((uVar1 & 2) == 0 && ((uVar1 & 0x100) != 0)))))))) {
            iVar5 = 1;
        }
        uVar1 = *puVar7;
        if ((((uVar1 & 0x200) != 0) || ((uVar1 & 0x400) != 0)) ||
            (((uVar1 & 2) == 0 && (((uVar1 & 0x800) != 0 || (((uVar1 & 2) == 0 && ((uVar1 & 0x1000) != 0)))))))) {
            iVar5 = 2;
        }
        if (iVar5 == 0) {
            if (iVar6 == 0) {
                return 0;
            }
            if (*(int *)(iVar6 + 0xc) < *(int *)(puVar7 + 6)) {
                do {
                    iVar6 = *(int *)(iVar6 + 8);
                    if (iVar6 == 0) {
                        return 0;
                    }
                } while (*(int *)(iVar6 + 0xc) < *(int *)(puVar7 + 6));
            }
            if (iVar6 == 0) {
                return 0;
            }
            if (puVar7 == NULL) {
                return 0;
            }
            if (*(int *)(puVar7 + 6) < *(int *)(iVar6 + 0xc)) {
                do {
                    puVar7 = *(u16 **)(puVar7 + 4);
                    if (puVar7 == NULL) {
                        return 0;
                    }
                } while (*(int *)(puVar7 + 6) < *(int *)(iVar6 + 0xc));
            }
        } else {
            if (*(int *)(iVar6 + 0xc) + *(int *)(iVar6 + 0x10) == *(int *)(puVar7 + 6)) {
                uVar2 = *(u32 *)(iVar6 + 0xc);
                if ((int)uVar2 < 0) {
                    uVar2 = ~(~uVar2 + 1 & 0x1f) + 1;
                } else {
                    uVar2 = uVar2 & 0x1f;
                }
                if (uVar2 != 0) {
                    iVar3 = pool47eba8_alloc((u32)uVar1, a1, a2, a3);
                    if (iVar3 == 0) {
                        return 3;
                    }
                    *(u32 *)(iVar3 + 0xc) = *(u32 *)(iVar6 + 0xc);
                    *(u32 *)(iVar6 + 0xc) = *(int *)(iVar6 + 0xc) + 0x1fU & 0xffffffe0;
                    iVar4 = *(int *)(iVar6 + 0xc) - *(int *)(iVar3 + 0xc);
                    *(int *)(iVar3 + 0x10) = iVar4;
                    *(int *)(iVar6 + 0x10) = *(int *)(iVar6 + 0x10) - iVar4;
                    if (*(int *)(iVar6 + 4) == 0) {
                        dlist_push_front(unaff_r8, unaff_r9, iVar3);
                    } else {
                        dlist_insert_before(unaff_r9, iVar3, *(int *)(iVar6 + 4));
                    }
                }
                a1 = *(int *)(puVar7 + 6);
                shinobi_uses_vram64_204f2a(*(u32 *)(iVar6 + 0xc), a1, *(u32 *)(puVar7 + 8), a3);
                iVar4 = *(int *)(puVar7 + 6);
                iVar3 = *(int *)(iVar6 + 0xc);
                *(int *)(puVar7 + 6) = iVar3;
                a2 = (u32 *)(iVar4 - iVar3);
                *(int *)(iVar6 + 0xc) = *(int *)(iVar6 + 0xc) + *(int *)(puVar7 + 8);
                if (iVar5 == 1) {
                    *(u32 *)(*(int *)(puVar7 + 10) + 0x1c) = *(u32 *)(puVar7 + 6);
                } else {
                    a2 = (u32 *)((u32)a2 >> 2);
                    a3 = (int)a2 * 4;
                    a1 = 0;
                    *(u32 *)(*(int *)(puVar7 + 10) + 8) = *(u32 *)(puVar7 + 6);
                    uVar2 = 0;
                    do {
                        if (*(int *)(*(int *)(puVar7 + 10) + 0xc + uVar2) != 0) {
                            iVar5 = *(int *)(*(int *)(puVar7 + 10) + 0xc + a1);
                            *(int *)(iVar5 + 0x1c) = *(int *)(iVar5 + 0x1c) + (int)a2 * -4;
                        }
                        uVar2 = uVar2 + 4;
                        a1 = a1 + 4;
                    } while (uVar2 < 0x40);
                }
                ar6_00 = *(u32 **)(iVar6 + 8);
                if ((ar6_00 != NULL) && (*(int *)(iVar6 + 0xc) + *(int *)(iVar6 + 0x10) == ar6_00[3])) {
                    *(int *)(iVar6 + 0x10) = *(int *)(iVar6 + 0x10) + ar6_00[4];
                    a1 = unaff_r9;
                    a2 = ar6_00;
                    dlist_unlink(unaff_r8, unaff_r9, ar6_00, a3);
                    pool47eba8_free(ar6_00);
                }
            }
            if ((puVar7 != NULL) && (*(int *)(puVar7 + 6) < *(int *)(iVar6 + 0xc))) {
                do {
                    puVar7 = *(u16 **)(puVar7 + 4);
                    if (puVar7 == NULL)
                        break;
                } while (*(int *)(puVar7 + 6) < *(int *)(iVar6 + 0xc));
            }
        }
        if (puVar7 == NULL) {
            return 0;
        }
        if (iVar6 == 0) {
            return 0;
        }
    } while (true);
}

/*
 * ta_fifo_2052f2  0x8c2052f2
 * called by: shinobi_list_2049ec
 */
u32 ta_fifo_2052f2(u32 a0, int a1, u32 a2, int a3, int s0, int s4) {
    u16 *ar6_00;
    u32 uVar1;
    int iVar2;
    u16 *puVar3;
    u16 *ar6_01;
    int ain0;
    int iVar4;
    int iVar5;
    u32 a7;

    iVar5 = a1 + a2;
    if ((int)a2 < 0) {
        uVar1 = ~(~a2 + 1 & 0x1f) + 1;
    } else {
        uVar1 = a2 & 0x1f;
    }
    a7 = 0;
    if (uVar1 != 0) {
        a2 = a2 + (0x20 - uVar1);
    }
    iVar2 = (int)(short)a0;
    ar6_00 = NULL;
    puVar3 = (u16 *)(&g_8c275408)[iVar2 * 5];
    iVar4 = a1;
    while (puVar3 != NULL) {
        iVar4 = *(int *)(puVar3 + 6);
        if ((((a1 < iVar4) || (*(int *)(puVar3 + 8) + iVar4 <= a1)) || (iVar5 < iVar4)) ||
            (*(int *)(puVar3 + 8) + iVar4 < iVar5)) {
            puVar3 = *(u16 **)(puVar3 + 4);
        } else {
            ar6_00 = puVar3;
            puVar3 = NULL;
        }
    }
    if (ar6_00 == NULL) {
        return 3;
    }
    if (*(u32 *)(ar6_00 + 8) == a2) {
        dlist_unlink(&g_8c275408 + iVar2 * 5, &g_8c27540c + iVar2 * 5, ar6_00, 0);
        dlist_push_front(&g_8c275400 + iVar2 * 5, &g_8c275404 + iVar2 * 5, ar6_00);
        *(u32 *)(a3 + 8) = *(u32 *)(ar6_00 + 6);
        *(int *)(ar6_00 + 10) = a3;
        *ar6_00 = 1;
        if ((short)a0 == 0) {
            *ar6_00 = *ar6_00 | 0x800;
        } else {
            *ar6_00 = *ar6_00 | 0x1000;
        }
        if (s0 != 0) {
            *ar6_00 = *ar6_00 | 2;
        }
        if (s4 != 0) {
            *ar6_00 = *ar6_00 | 4;
        }
        iVar5 = *(int *)(ar6_00 + 8);
    } else {
        if (*(int *)(ar6_00 + 6) != a1) {
            if (*(int *)(ar6_00 + 6) + *(int *)(ar6_00 + 8) == iVar5) {
                ar6_01 = (u16 *)pool47eba8_alloc(0, iVar4, iVar5, 0);
                if (ar6_01 == NULL) {
                    return 3;
                }
                *(u32 *)(ar6_00 + 8) = *(int *)(ar6_00 + 8) - a2;
                *(int *)(ar6_01 + 6) = a1;
                *(u32 *)(ar6_01 + 8) = a2;
                dlist_push_front(&g_8c275400 + iVar2 * 5, &g_8c275404 + iVar2 * 5, ar6_01, a7, &g_8c275400 + iVar2 * 5);
                *(u32 *)(a3 + 8) = *(u32 *)(ar6_01 + 6);
                *(int *)(ar6_01 + 10) = a3;
                if ((short)a0 == 0) {
                    *ar6_01 = *ar6_01 | 0x800;
                } else {
                    *ar6_01 = *ar6_01 | 0x1000;
                }
                if (s0 != 0) {
                    *ar6_01 = *ar6_01 | 2;
                }
                if (s4 != 0) {
                    *ar6_01 = *ar6_01 | 4;
                }
            } else {
                ar6_01 = (u16 *)pool47eba8_alloc(0, iVar4, iVar5, 0);
                if (ar6_01 == NULL) {
                    return 3;
                }
                ain0 = pool47eba8_alloc(puVar3, iVar4, iVar5, a7);
                if (ain0 == 0) {
                    pool47eba8_free(ar6_01);
                    return 3;
                }
                iVar5 = *(int *)(ar6_00 + 8);
                iVar4 = *(int *)(ar6_00 + 6);
                *(int *)(ar6_00 + 8) = a1 - iVar4;
                *(int *)(ar6_01 + 6) = a1;
                *(u32 *)(ar6_01 + 8) = a2;
                dlist_push_front(&g_8c275400 + iVar2 * 5, &g_8c275404 + iVar2 * 5, ar6_01);
                *(u32 *)(ain0 + 0xc) = a1 + a2;
                *(u32 *)(ain0 + 0x10) = (iVar5 - a2) - (a1 - iVar4);
                dlist_insert_before(&g_8c27540c + iVar2 * 5, ain0, (&g_8c27540c)[iVar2 * 5]);
                *(u32 *)(a3 + 8) = *(u32 *)(ar6_01 + 6);
                *(int *)(ar6_01 + 10) = a3;
                if ((short)a0 == 0) {
                    *ar6_01 = *ar6_01 | 0x800;
                } else {
                    *ar6_01 = *ar6_01 | 0x1000;
                }
                if (s0 != 0) {
                    *ar6_01 = *ar6_01 | 2;
                }
                if (s4 != 0) {
                    *ar6_01 = *ar6_01 | 4;
                }
            }
            (&g_8c275410)[iVar2 * 5] = (&g_8c275410)[iVar2 * 5] - *(int *)(ar6_01 + 8);
            return 0;
        }
        puVar3 = (u16 *)pool47eba8_alloc(0, iVar4, iVar5, 0);
        if (puVar3 == NULL) {
            return 3;
        }
        *(u32 *)(puVar3 + 6) = *(u32 *)(ar6_00 + 6);
        *(u32 *)(puVar3 + 8) = a2;
        *(u32 *)(ar6_00 + 8) = *(int *)(ar6_00 + 8) - a2;
        *(u32 *)(ar6_00 + 6) = *(int *)(ar6_00 + 6) + a2;
        dlist_push_front(&g_8c275400 + iVar2 * 5, &g_8c275404 + iVar2 * 5, puVar3, a7, &g_8c275400 + iVar2 * 5);
        *(u32 *)(a3 + 8) = *(u32 *)(puVar3 + 6);
        *(int *)(puVar3 + 10) = a3;
        if ((short)a0 == 0) {
            *puVar3 = *puVar3 | 0x800;
        } else {
            *puVar3 = *puVar3 | 0x1000;
        }
        if (s0 != 0) {
            *puVar3 = *puVar3 | 2;
        }
        if (s4 != 0) {
            *puVar3 = *puVar3 | 4;
        }
        iVar5 = *(int *)(puVar3 + 8);
    }
    (&g_8c275410)[iVar2 * 5] = (&g_8c275410)[iVar2 * 5] - iVar5;
    return 0;
}

/*
 * shinobi_uses_libgcc_divide_helper_205640  0x8c205640
 * area name: in the shinobi library code range; behaviour name: its main named callee is libgcc_divide_helper_01051c
 * called by: shinobi_list_203cd0, shinobi_uses_rec4c_alloc_203a92
 */
u32 shinobi_uses_libgcc_divide_helper_205640(u32 *a0, int a1) {
    int iVar1;
    u32 uVar2;

    iVar1 = *(int *)(a1 + 0xc);
    if (iVar1 == 8) {
        if ((*(u32 *)(a1 + 0x18) & 1) == 0) {
            *a0 = 0x1000;
            a0[1] = 0x80;
            a0[2] = 0x20;
            a0[3] = 0xf90;
        } else {
            *a0 = 0x2000;
            a0[1] = 0x80;
            a0[2] = 0x20;
            a0[3] = 4000;
        }
    } else if (iVar1 == 0x10) {
        if ((*(u32 *)(a1 + 0x18) & 1) == 0) {
            uVar2 = 0xfc0;
            *a0 = 0x3000;
            a0[1] = 0x80;
            a0[2] = 0x40;
        } else {
            *a0 = 0x4000;
            uVar2 = 0xfe0;
            a0[1] = 0x80;
            a0[2] = 0x60;
        }
        a0[3] = uVar2;
    } else {
        if (iVar1 == 0x20) {
            if ((*(u32 *)(a1 + 0x18) & 1) == 0) {
                *a0 = 0x5000;
                a0[1] = 0x100;
                a0[2] = 0x100;
                a0[3] = 0x1000;
                goto LAB_8c205756;
            }
            *a0 = 0x6000;
            a0[1] = 0x200;
            uVar2 = 0xf60;
            a0[2] = 0x160;
        } else {
            if (iVar1 != 0x40) {
                return 0;
            }
            if ((*(u32 *)(a1 + 0x18) & 1) == 0) {
                *a0 = 0x7000;
                a0[1] = 0x400;
                a0[2] = 0x400;
                a0[3] = 0x1000;
                goto LAB_8c205756;
            }
            *a0 = 0x8000;
            a0[1] = 0x800;
            uVar2 = 0xd60;
            a0[2] = 0x560;
        }
        a0[3] = uVar2;
    }
LAB_8c205756:
    uVar2 = libgcc_divide_helper_01051c(0x800, a0[1]);
    a0[4] = uVar2;
    return 1;
}

/*
 * alt_entry_205644  0x8c205644
 * probably an entry 4 bytes into 8c205640: it reads registers that code sets before it
 */
u32 alt_entry_205644(u32 *a0, int a1) {
    int iVar1;
    u32 uVar2;
    int iVar3;
    u32 unaff_r14;

    iVar1 = *(int *)(a1 + 0xc);
    iVar3 = unaff_r14 + 0x7f;
    if (iVar1 == 8) {
        if ((unaff_r14 & *(u32 *)(a1 + 0x18)) == 0) {
            *a0 = 0x1000;
            a0[1] = iVar3;
            a0[2] = 0x20;
            a0[3] = 0xf90;
        } else {
            *a0 = 0x2000;
            a0[1] = iVar3;
            a0[2] = 0x20;
            a0[3] = 4000;
        }
    } else if (iVar1 == 0x10) {
        if ((unaff_r14 & *(u32 *)(a1 + 0x18)) == 0) {
            uVar2 = 0xfc0;
            *a0 = 0x3000;
            a0[1] = iVar3;
            a0[2] = 0x40;
        } else {
            *a0 = 0x4000;
            uVar2 = 0xfe0;
            a0[1] = iVar3;
            a0[2] = 0x60;
        }
        a0[3] = uVar2;
    } else {
        if (iVar1 == 0x20) {
            if ((unaff_r14 & *(u32 *)(a1 + 0x18)) == 0) {
                *a0 = 0x5000;
                a0[1] = 0x100;
                a0[2] = 0x100;
                a0[3] = 0x1000;
                goto LAB_8c205756;
            }
            *a0 = 0x6000;
            a0[1] = 0x200;
            uVar2 = 0xf60;
            a0[2] = 0x160;
        } else {
            if (iVar1 != 0x40) {
                return 0;
            }
            if ((unaff_r14 & *(u32 *)(a1 + 0x18)) == 0) {
                *a0 = 0x7000;
                a0[1] = 0x400;
                a0[2] = 0x400;
                a0[3] = 0x1000;
                goto LAB_8c205756;
            }
            *a0 = 0x8000;
            a0[1] = 0x800;
            uVar2 = 0xd60;
            a0[2] = 0x560;
        }
        a0[3] = uVar2;
    }
LAB_8c205756:
    uVar2 = libgcc_divide_helper_01051c(0x800, a0[1]);
    a0[4] = uVar2;
    return 1;
}

/*
 * rec4c_alloc_496ba8  0x8c205768
 * marks and returns the first free 0x4c-byte record of the table at 8c496ba8; NULL when full
 * called by: shinobi_uses_rec4c_alloc_203a92
 */
u16 *rec4c_alloc_496ba8(u32 a0) {
    u16 *puVar1;
    u16 *puVar2;

    puVar1 = 0x8c496ba8;
    puVar2 = 0x8c496ba8;
    while (true) {
        if ((u16 *)(0x13000 + (int)0x8c496ba8) <= puVar1) {
            return (u16 *)0;
        }
        if ((*puVar1 & 1) == 0)
            break;
        puVar1 = puVar1 + 0x26;
        puVar2 = puVar2 + 0x26;
    }
    *puVar2 = 1;
    return puVar2;
}

/*
 * pool496ba8_free  0x8c2057c0
 * frees entry a0 of the 0x4c-byte pool at 0x8c496ba8
 * called by: alt_entry_203406, shinobi_list_203cd0, shinobi_uses_pool47eba8_free_203400,
 * shinobi_uses_rec4c_alloc_203a92
 */
u32 pool496ba8_free(u16 *a0) {
    u32 uVar1;
    u32 in_r0;
    u16 *puVar2;
    u16 *puVar3;
    u16 *puVar4;

    uVar1 = 0xfffe;
    puVar2 = (u16 *)((int)0x8c496ba8 + 0x13000);
    puVar3 = 0x8c496ba8;
    puVar4 = 0x8c496ba8;
    do {
        if (puVar3 == a0) {
            *puVar4 = *puVar4 & (u16)uVar1;
        }
        puVar3 = puVar3 + 0x26;
        puVar4 = puVar4 + 0x26;
    } while (puVar3 < puVar2);
    return in_r0;
}

/*
 * list_push_front_2057e6  0x8c2057e6
 * pushes node a1 (next pointer at +4) onto the list *a0
 * called by: shinobi_uses_rec4c_alloc_203a92
 */
u32 list_push_front_2057e6(int *a0, int a1) {
    u32 in_r0;
    int iVar1;

    if (*a0 == 0) {
        iVar1 = 0;
    } else {
        iVar1 = *a0;
    }
    *(int *)(a1 + 4) = iVar1;
    *a0 = a1;
    return in_r0;
}

/*
 * slist_remove  0x8c2057f8
 * unlinks node a1 from the singly linked list whose head is *a0 (next at +4)
 * called by: shinobi_list_203cd0
 */
int slist_remove(int *a0, int a1) {
    int iVar1;
    int iVar2;
    int iVar3;

    iVar3 = *a0;
    iVar2 = 0;
    while (iVar1 = iVar3, iVar1 != 0) {
        if (*(int *)(iVar1 + 4) == a1) {
            iVar3 = 0;
            iVar2 = iVar1;
        } else {
            iVar3 = *(int *)(iVar1 + 4);
        }
    }
    if (*a0 == a1) {
        *a0 = *(int *)(a1 + 4);
    } else {
        *(u32 *)(iVar2 + 4) = *(u32 *)(a1 + 4);
    }
    return iVar2;
}

/*
 * shinobi_uses_mem_pool_find_block_205860  0x8c205860
 * area name: in the shinobi library code range; behaviour name: its main named callee is mem_pool_find_block
 */
u16 *shinobi_uses_mem_pool_find_block_205860(u32 a0, int a1, u16 *a2) {
    u16 uVar1;
    int iVar2;
    u16 *puVar3;
    int iVar4;
    u16 *puVar5;
    u8 auStack_2c[4];
    int iStack_28;
    u16 *puStack_24;

    puVar3 = NULL;
    iStack_28 = a1;
    puStack_24 = a2;
    iVar4 = g_8c2753ec;
    for (puVar5 = (u16 *)(&g_8c275400)[(short)a0 * 5]; puVar5 != NULL; puVar5 = *(u16 **)(puVar5 + 4)) {
        uVar1 = *puVar5;
        if (((((uVar1 & 4) == 0) && ((uVar1 & 2) != 0)) && ((uVar1 & 0x1800) != 0)) &&
            ((iStack_28 <= *(int *)(puVar5 + 8) && (*(int *)(puVar5 + 8) < iVar4)))) {
            if ((short)a0 == 0) {
                iVar2 = *(int *)(puVar5 + 6) + g_8c2753f4;
            } else {
                iVar2 = *(int *)(puVar5 + 6) - g_8c2753f4;
            }
            iVar2 = mem_pool_find_block(iVar2, auStack_2c);
            if ((iVar2 != 0) && ((**(u16 **)(iVar2 + 0x14) & 0xf000) == (*puStack_24 & 0xf000))) {
                iVar4 = *(int *)(puVar5 + 8);
                puVar3 = puVar5;
            }
        }
    }
    return puVar3;
}

/*
 * shinobi_calls_scan_loop_205948  0x8c205948
 * area name: in the shinobi library code range; behaviour name: its callees mostly do: scan_loop
 */
u32 shinobi_calls_scan_loop_205948(int a0, u32 unused_a1, u32 unused_a2, u32 unused_a3, u32 ain0) {
    int iVar1;
    u32 uVar2;
    int iVar3;
    int iVar4;
    int iVar5;
    int iVar6;
    char in_T;

    if (in_T == '\0') {
        uVar2 = ~(~ain0 + 1 & 0x1f) + 1;
    } else {
        uVar2 = ain0 & 0x1f;
    }
    iVar1 = g_8c275408;
    if (uVar2 != 0) {
        a0 = a0 + (0x20 - uVar2);
    }
    do {
        if (iVar1 == 0) {
            return 0xffffffff;
        }
        if (a0 <= *(int *)(iVar1 + 0x10)) {
            iVar5 = *(int *)(iVar1 + 0xc);
            iVar4 = *(int *)(iVar1 + 0x10);
            for (iVar6 = *(int *)(iVar1 + 0xc); iVar6 <= (iVar5 + iVar4) - a0; iVar6 = iVar6 + 0x20) {
                iVar3 = shinobi_scan_loop_20436c(1, g_8c2753f4 + iVar6, a0);
                if (iVar3 == 0) {
                    return iVar6;
                }
            }
        }
        iVar1 = *(int *)(iVar1 + 8);
    } while (true);
}

/*
 * vram64_to_vram32  0x8c2059be
 * converts a 64-bit-bus VRAM offset to the 32-bit (interleaved bank) view
 * called by: alt_entry_2036ac, kamui_list_2036a0, shinobi_list_20374e, shinobi_list_203820
 */
int vram64_to_vram32(u32 a0) {
    int iVar1;

    iVar1 = ((a0 & 0xfffffff8) >> 1) + (a0 & 3);
    if ((a0 & 4) != 0) {
        iVar1 = iVar1 + 0x400000;
    }
    if (0x800000 <= a0) {
        iVar1 = iVar1 + 0x400000;
    }
    return iVar1;
}

/*
 * vram_addr_64_to_32  0x8c2059e0
 * converts an offset in the 64-bit VRAM view to the matching 32-bit view address (interleaved banks)
 * called by: shinobi_list_203ca0
 */
int vram_addr_64_to_32(u32 a0) {
    int iVar1;

    iVar1 = 0;
    if (a0 < 0x800000) {
        if (0x400000 <= a0) {
            a0 = a0 - 0x400000;
            iVar1 = 4;
        }
        iVar1 = (a0 & 0xfffffffc) * 2 + (a0 & 3) + iVar1;
    } else {
        if (0xc00000 <= a0) {
            a0 = a0 - 0x400000;
            iVar1 = 4;
        }
        iVar1 = (a0 & 0xfffffffc) * 2 + (a0 & 3) + iVar1 + 0xff800000;
    }
    return iVar1;
}

/*
 * shinobi_draw_205a40  0x8c205a40
 * area name: in the shinobi library code range; behaviour name: mostly calls draw functions
 * called by: alt_entry_207f84, pvr_draw_20a6f2, shinobi_draw_207da0, shinobi_draw_207f80
 */
u32 shinobi_draw_205a40(void) {
    u8 *puVar1;
    u32 uVar2;

    puVar1 = (&pvr_20a844);
    pvr_20a844(8, 3);
    (*(code *)puVar1)(0);
    uVar2 = (*(code *)puVar1)(8, 0);
    return uVar2;
}

/*
 * shinobi_draw_205a44  0x8c205a44
 * area name: in the shinobi library code range; behaviour name: mostly calls draw functions
 */
u32 shinobi_draw_205a44(u32 unused_a0, u32 a1, u32 a2, u32 a3) {
    u8 *puVar1;
    u32 uVar2;

    puVar1 = (&pvr_20a844);
    pvr_20a844(8, a1);
    (*(code *)puVar1)(0, 0, a2, a3);
    uVar2 = (*(code *)puVar1)(8, 0, a2, a3);
    return uVar2;
}

/*
 * g2dma_205a62  0x8c205a62
 * called by: shinobi_draw_206162
 */
u32 g2dma_205a62(u32 unused_a0, u32 unused_a1, u32 a2, u32 a3) {
    short sVar1;
    u8 *puVar2;
    u32 uVar3;
    int iVar4;
    int iVar5;
    u32 uVar6;
    int iVar7;
    u32 uStack_1c;
    int iStack_18;

    uVar6 = 0xdd18957;
    g_8c4a9ec0 = 0;
    iStack_18 = pvr_20a876(0);
    uVar3 = pvr_20a876(4);
    g_8c4a9bac = 5;
    if (iStack_18 == 0x17fd11db) {
        if (uVar3 == 1) {
            g_8c4a9bac = 5;
        } else if (0x10 < uVar3) {
            g_8c4a9bac = 6;
            g_8c4a9ec0 = 0x800408;
            uVar6 = 0x15d1c951;
        }
    } else {
        g_8c4a9bac = 5;
    }
    iVar4 = (int)0x101;
    iVar5 = *0xa05f689c;
    if (iVar5 == 0) {
        g_8c4a9bb0 = 0;
    } else {
        if (iVar5 != 1) {
            if (iVar5 == 2) {
                g_8c4a9bb0 = 3;
            } else if (((iVar5 == 4) || (iVar5 == 5)) || (iVar5 == 6)) {
                g_8c4a9bb0 = 0x7f;
                iVar4 = 0x10101;
            } else if (iVar5 == 8) {
                g_8c4a9bb0 = 0x1f;
            } else if (iVar5 == 9) {
                g_8c4a9bb0 = 0xf;
            } else {
                g_8c4a9bb0 = (int)0x8f;
            }
            goto LAB_8c205bc8;
        }
        g_8c4a9bb0 = 1;
    }
    iVar4 = 0;
LAB_8c205bc8:
    puVar2 = (&pvr_20a844);
    pvr_20a844((int)0xa8, uVar6);
    (*(code *)puVar2)((int)0xa0, 0x20, a2, a3);
    (*(code *)puVar2)(8, 0, a2, a3);
    (*(code *)puVar2)((int)0xe4, 3, a2, a3);
    (*(code *)puVar2)(0x48, 9, a2, a3);
    if ((g_8c4a9bc8 & 1) == 0) {
        pvr_20a844(0x44, 0);
    } else {
        pvr_20a844(0x44, 0x800000);
    }
    (*(code *)puVar2)(0x5c, 0, a2, a3);
    (*(code *)puVar2)(0x68, 0x2800000, a2, a3);
    (*(code *)puVar2)(0x6c, 0x1e00000, a2, a3);
    uVar6 = 0x92039;
    sVar1 = 0x110;
    if (g_8c4a9bac == 6) {
        (*(code *)puVar2)((int)0x110, 0x93f39, a2, a3);
        uVar6 = g_8c4a9ec0;
        sVar1 = 0x98;
    }
    (*(code *)puVar2)((int)sVar1, uVar6, a2, a3);
    (*(code *)puVar2)(0x4c, (int)0xa0, a2, a3);
    (*(code *)puVar2)(0x74, 0, a2, a3);
    (*(code *)puVar2)(0x78, 0x3f800000, a2, a3);
    (*(code *)puVar2)((int)0x84, 0, a2, a3);
    (*(code *)puVar2)(0x30, iVar4, a2, a3);
    (*(code *)puVar2)((int)0xb0, 0x7f7f7f, a2, a3);
    (*(code *)puVar2)((int)0xb4, 0x7f7f7f, a2, a3);
    (*(code *)puVar2)((int)0xc0, 0, a2, a3);
    (*(code *)puVar2)((int)0xbc, 0xffffffff, a2, a3);
    (*(code *)puVar2)(0x80, 7, a2, a3);
    (*(code *)puVar2)((int)0x88, 0x3727c5a0, a2, a3);
    (*(code *)puVar2)((int)0x8c, 0x1203000, a2, a3);
    (*(code *)puVar2)(0x74, 1, a2, a3);
    if (g_8c4a9bac == 6) {
        uVar6 = 0x7df77;
        if (g_8c4a9bac == 6) {
            uVar6 = 0x27df77;
        }
        (*(code *)puVar2)(0x7c, uVar6, a2, a3);
        iVar4 = 0x200000;
        puVar2 = (&memcpy_words);
        iVar7 = 0;
        uStack_1c = 0;
        iVar5 = 0xa5000000;
        do {
            (*(code *)puVar2)(iVar5, &uStack_1c, 4, a3);
            iVar7 = iVar7 + 1;
            iVar5 = iVar5 + 4;
        } while (iVar7 < iVar4);
        return 1;
    }
    do {
        /* WARNING: Do nothing block with infinite loop */
    } while (true);
}

/*
 * pvr_fog_init_default  0x8c205d80
 * sets FOG_DENSITY, both fog colours (0x7f7f7f) and the 128-entry fog table to its default ramp
 * called by: shinobi_draw_206162
 */
u32 pvr_fog_init_default(u32 unused_a0, u32 unused_a1, u32 a2, u32 a3) {
    u8 *puVar1;
    u32 uVar2;
    int a4;
    u32 uVar3;
    u32 uVar4;

    puVar1 = (&pvr_20a844);
    pvr_20a844((int)0xb8, 0xff07);
    (*(code *)puVar1)((int)0xb4, 0x7f7f7f, a2, a3);
    (*(code *)puVar1)((int)0xb0, 0x7f7f7f, a2, a3);
    uVar4 = (u32)0xff;
    uVar3 = (u32)0xfe;
    a4 = (int)0x200;
    do {
        uVar2 = (*(code *)puVar1)(a4, (uVar4 & 0xff) << 8 | uVar3 & 0xff, a2, a3);
        uVar4 = uVar4 - 1;
        a4 = a4 + 4;
        uVar3 = uVar3 - 1;
    } while (0x7f < (int)uVar4);
    return uVar2;
}

/*
 * noop_205dd4  0x8c205dd4
 * called by: kamui_release_state
 */
u32 noop_205dd4(void) {
    u32 in_r0;

    return in_r0;
}

/*
 * kamui_cfg_get  0x8c205e00
 * configuration lookup (section a0, key a1, default a2); this build answers 0 for HARDWARE/EnableTexture16MB and the
 * default otherwise called by: kamui_cfg_texture_memory, kamui_cfg_texture_memory_b, kamui_init_defaults,
 * kamui_set_display_mode_cfg, kamui_set_video_mode_like, kamui_uses_kamui_cfg_texture_memory_211120 strings:
 * "HARDWARE"; "EnableTexture16MB"
 */
u32 kamui_cfg_get(u32 a0, u32 a1, u32 a2) {
    int iVar1;
    iVar1 = strcmp_01439c(a0, "HARDWARE");
    if ((iVar1 == 0) && (iVar1 = strcmp_01439c(a1, "EnableTexture16MB"), a2 = a1, iVar1 == 0)) {
        a2 = 0;
    }
    return a2;
}

/*
 * kamui_init_defaults  0x8c205e64
 * sets up the Kamui state block at 8c4a9ba8 with its default values
 * called by: kamui_set_video_mode_like
 * strings: "RENDER"; "VSYNCCount"; "RENDER"; "RegionSize" ...
 */
u32 kamui_init_defaults(u32 unused_a0, u32 unused_a1, u32 unused_a2, u32 a3) {
    u32 uVar1;
    u32 uVar2;
    u32 uVar3;
    int ain0;
    int iVar5;
    u32 uVar6;
    int iVar7;
    int a7;

    if (g_8c2756b0 == NULL) {
        g_8c2756b0 = &g_8c4a9ba8;
        unused_a1 = 0;
        unused_a2 = 0x4f4;
        memset(&g_8c4a9ba8, 0, 0x4f4);
    }
    g_8c4aa09c = 3;
    g_8c4aa0a0 = 2;
    g_8c4aa0a4 = 6;
    g_8c4aa0a8 = 0;
    g_8c4aa0ac = s_COPYRIGHT__C__NEC_Corporation_19_8c275440;
    g_8c4a9ba8 = &g_8c4aa09c;
    g_8c4a9be0 = 0;
    g_8c4a9be4 = 0;
    g_8c4a9be8 = 0;
    g_8c4a9bfc = 0;
    g_8c4a9c00 = 0;
    g_8c4aa084 = 0x1f0;
    g_8c4aa088 = 0x200;
    g_8c4aa08c = 0x210;
    g_8c4aa090 = 0x220;
    g_8c4aa094 = 0x230;
    pvr_init_fields_2073a0(&g_8c4aa09c);
    g_8c4a9db4 = 0;
    g_8c4a9db8 = 0;
    uVar6 = 1;
    g_8c4a9d8c = kamui_cfg_get("RENDER", "VSYNCCount", 1);
    g_8c4a9d8c = g_8c4a9d8c + -1;
    g_8c4a9bbc = 0x10000;
    g_8c4a9bc0 = 0x800000;
    g_8c4a9bc4 = 0x800000;
    g_8c4a9d74 = 0;
    g_8c4a9d70 = 0;
    g_8c4a9d6c = 0;
    g_8c4a9d88 = 3;
    g_8c4a9e54 = 1;
    g_8c4a9d90 = g_8c4a9d8c;
    ta_default_triangle_init(0x800000);
    uVar1 = kamui_cfg_get("RENDER", "RegionSize", 0x6000);
    uVar2 = kamui_cfg_get("RENDER", "ObjListSize", 0x7a000);
    uVar3 = kamui_cfg_get("RENDER", "ISPParamSize", 0x180000);
    g_8c4a9c44 = kamui_cfg_get("RENDER", "TSPParamSize", 0x180000);
    g_8c4a9c40 = uVar3 & 0xfffff800;
    g_8c4a9c44 = g_8c4a9c44 & 0xfffff800;
    a7 = (uVar1 & 0xfffff800) + (uVar2 & 0xfffff800);
    ain0 = g_8c4a9c40 + a7;
    iVar7 = 0;
    iVar5 = 0;
    for (uVar2 = 0; uVar2 < 0x20; uVar2 = uVar2 + 0x10) {
        *(int *)(&g_8c4a9c18 + uVar2) = iVar5;
        *(u32 *)(&g_8c4a9c1c + uVar2) = iVar5 + (uVar1 & 0xfffff800);
        *(int *)(&g_8c4a9c20 + uVar2) = iVar5 + a7;
        *(int *)(&g_8c4a9c24 + uVar2) = ain0 + iVar5;
        *(int *)(iVar7 + 0x8c4a9c38) = 0x7d0000 - iVar5;
        iVar5 = iVar5 + 0x400000;
        iVar7 = iVar7 + 4;
    }
    g_8c4a9ef0 = 0;
    g_8c4a9fcc = 0;
    g_8c4a9ef8 = 0;
    g_8c4a9efc = 0xffffffff;
    g_8c4a9f00 = 0xffffffff;
    g_8c4a9f04 = 0xffffffff;
    g_8c4a9f08 = 0;
    g_8c4a9f0c = 0;
    g_8c4a9f10 = 0;
    g_8c4a9fd8 = 0;
    g_8c4a9fe0 = 0;
    g_8c4a9fdc = 1;
    g_8c4a9fec = kamui_cfg_get("VertexBuffer", "BufferBase", 0xacc00000);
    g_8c4a9ff0 = kamui_cfg_get("VertexBuffer", "BufferSize", 0x400000);
    g_8c4a9c10 = kamui_cfg_get("RENDER", "PoolingTAStatus", 0);
    g_8c4a9dd0 = kamui_cfg_get("RENDER", "RenderTimeOut", 10);
    g_8c4a9dd4 = kamui_cfg_get("RENDER", "VertexTimeOut", 10);
    uVar6 = 10;
    g_8c4a9dd8 = kamui_cfg_get("RENDER", "VSYNCTimeOut", 10);
    g_8c4a9d80 = 0;
    g_8c4a9d84 = 1;
    g_8c4a9c14 = 0xf;
    g_8c4a9dc4 = 0;
    g_8c4a9dc8 = 0;
    uVar6 = noop_20b77a();
    return uVar6;
}

/*
 * kamui_release_state  0x8c206146
 * releases the Kamui state block pointer 8c2756b0
 */
u32 kamui_release_state(u32 unused_a0, u32 unused_a1, u32 unused_a2, u32 unused_a3, u32 ain0) {

    if (g_8c2756b0 != 0) {
        ain0 = noop_205dd4();
        g_8c2756b0 = 0;
    }
    return ain0;
}

/*
 * shinobi_draw_206162  0x8c206162
 * area name: in the shinobi library code range; behaviour name: mostly calls draw functions
 * called by: kamui_set_video_mode_like
 */
u32 shinobi_draw_206162(u32 unused_a0, u32 unused_a1, u32 a2, u32 a3) {
    u32 uVar1;

    noop_20a840();
    g2dma_205a62(unused_a0, unused_a1, a2, a3);
    ninja_draw_25d780();
    kamui_cfg_texture_memory(unused_a0, unused_a1, a2, a3);
    shinobi_draw_206300();
    pvr_fog_init_default(unused_a0, unused_a1, a2, a3);
    g_8c4aa004 = 0x100000;
    g_8c4aa008 = 0;
    g_8c4aa00c = 0;
    g_8c4aa010 = 0;
    uVar1 = ninja_draw_25d7c6(g_8c4a9c18 >> 7, g_8c4a9c1c >> 7, g_8c4a9c20 >> 7, g_8c4a9c24 >> 7, g_8c4a9c14);
    return uVar1;
}

/*
 * shinobi_calc_2061cc  0x8c2061cc
 * area name: in the shinobi library code range; behaviour name: integer arithmetic on its arguments
 */
u32 shinobi_calc_2061cc(void) {
    u32 uVar1;

    uVar1 = (g_8c20a844)();
    return uVar1;
}

/*
 * shinobi_calc_2062c8  0x8c2062c8
 * area name: in the shinobi library code range; behaviour name: integer arithmetic on its arguments
 * called by: kamui_draw_20bdc0, pvr_calls_calc_206e14, ta_copy_20b7a0, ta_draw_20b260
 */
u32 shinobi_calc_2062c8(u32 a0, u32 a1, u32 a2, u32 a3) {
    u32 uVar1;

    /* WARNING: Could not recover jumptable at 0x8c2062ce. Too many branches */
    /* WARNING: Treating indirect jump as call */
    uVar1 = (*(code *)*0x8c4a9e1c)();
    return uVar1;
}

/*
 * shinobi_draw_206300  0x8c206300
 * area name: in the shinobi library code range; behaviour name: mostly calls draw functions
 * called by: shinobi_draw_206162
 */
u32 shinobi_draw_206300(void) {
    int iVar1;
    u32 *puVar2;
    u32 *puVar3;
    u32 *puVar4;
    u32 uVar5;
    u32 uVar6;

    uVar5 = ta_fifo_20aa40((&pvr_206ff0));
    g_8c4a9d98 = 0;
    g_8c4a9e5c = 0;
    g_8c4a9f24 = 0;
    g_8c4a9f28 = 0;
    puVar4 = 0x8c4aa0b0;
    puVar3 = 0x8c4aa104;
    puVar2 = 0x8c4aa0b4;
    uVar6 = 0;
    g_8c4aa0b4 = 0;
    puVar2[1] = 0;
    puVar2[2] = 0;
    puVar2[3] = 0;
    puVar2[4] = 0;
    puVar2[5] = 0;
    puVar2[6] = 0;
    puVar2[7] = 0;
    puVar2[8] = 0;
    *puVar3 = 0;
    *puVar4 = 0;
    do {
        iVar1 = uVar6 + 0x2c;
        uVar6 = uVar6 + 4;
        *(u32 *)((int)puVar2 + iVar1) = 0;
    } while (uVar6 < 0x14);
    return uVar5;
}

/*
 * pvr_206350  0x8c206350
 * called by: pvr_2069a0
 */
int pvr_206350(u32 a0) {
    u32 *puVar1;
    u32 *puVar2;
    int *piVar3;
    int *piVar4;
    int iVar5;
    u32 uVar6;
    int *piVar7;

    piVar3 = 0xa05f8054;
    puVar2 = 0xa05f80e8;
    puVar1 = 0xa05f8044;
    uVar6 = 0;
    piVar7 = 0xa05f8054 + -1;
    while ((*(int *)(0x8c4a9ef8 + uVar6 * 4) != 5 && (iVar5 = *(int *)(0x8c4a9ef8 + uVar6 * 4), iVar5 != -3))) {
        uVar6 = uVar6 + 1;
        if (3 < (int)uVar6) {
            return iVar5;
        }
    }
    *(u32 *)(0x8c4a9ef8 + uVar6 * 4) = 7;
    piVar4 = 0x8c4a9ee0;
    if (((g_8c4a9bcc & 1) == 1) || ((g_8c4a9bcc & 0x2c) != 0x20)) {
        if (g_8c4a9be0 != 1) {
            *piVar7 = 0x8c4a9ee0 [uVar6 & 1] + g_8c4a9dc4;
            *piVar3 = piVar4[uVar6 & 1] + g_8c4a9dc8;
        }
    } else {
        *piVar7 = g_8c4a9ee0 + g_8c4a9dc4;
        *piVar3 = g_8c4a9ee4 + g_8c4a9dc8;
    }
    if (*(int *)(0x8c4a9ef8 + uVar6 * 4) == -3) {
        return 0xfffffffd;
    }
    if (g_8c4a9e54 != 1) {
        return g_8c4a9e54;
    }
    *puVar2 = g_8c4a9eb0;
    puVar2 = 0x8c4a9e74;
    *puVar1 = g_8c4a9e74;
    g_8c4a9e54 = 0;
    return (int)puVar2;
}

/*
 * pvr_206480  0x8c206480
 * called by: pvr_2069a0
 */
u32 pvr_206480(void) {
    u32 *puVar1;
    u32 uVar2;
    u8 *puVar3;
    u32 a4;
    u32 *puVar4;
    int iVar5;
    u32 uVar6;
    int iVar7;
    int iVar8;
    int iVar9;

    a4 = 0x10000000;
    puVar3 = (&sh4_dmac_202f40);
    uVar2 = 0xf0ffffff;
    puVar1 = 0xa05f8144;
    iVar8 = (int)0x100;
    uVar6 = 0;
    while ((*(int *)(uVar6 * 4 + 0x8c4a9ef8) != 1 || (g_8c4a9db8 != 0))) {
        uVar6 = uVar6 + 1;
        if (3 < (int)uVar6) {
            return 1;
        }
    }
    g_8c4a9db8 = 1;
    iVar9 = uVar6 * 4;
    *(u32 *)(0x8c4a9ef8 + iVar9) = 2;
    g_8c4a9f10 = uVar6;
    puVar4 = 0xa05f8008;
    g_8c4aa0fc = *0xffd8000c;
    *puVar4 = 1;
    *puVar4 = 0;
    iVar5 = 0x8c4aa024;
    iVar7 = (uVar6 & 1) * 0x20;
    *0xa05f8124 = *(u32 *)(0x8c4aa024 + iVar7);
    *0xa05f812c = *(u32 *)(iVar5 + 4 + iVar7);
    *0xa05f8128 = *(u32 *)(iVar5 + 0xc + iVar7);
    *0xa05f8130 = *(u32 *)(iVar5 + 0x10 + iVar7);
    *0xa05f8164 = *(u32 *)(iVar5 + 8 + iVar7);
    *puVar1 = 0x80000000;
    g_8c4a9f14 = 0;
    g_8c4a9f18 = 0;
    iVar5 = 0x8c4a9f7c;
    g_8c4aa0b8 = 0;
    if (*(int *)(iVar5 + iVar9) != 0) {
        g_8c4a9f14 = g_8c4a9f14 | 1;
        iVar5 = (*(code *)puVar3)(a4, *(u32 *)(0x8c4a9f2c + iVar9), *(int *)(iVar5 + iVar9) + 0x20, 0x10);
        if (iVar5 == iVar8) {
            return 0;
        }
    }
    if (*(int *)(0x8c4a9f8c + iVar9) != 0) {
        g_8c4a9f14 = g_8c4a9f14 | 2;
        puVar1 = 0x8c4a9fe4;
        if (g_8c4a9fe0 == 1) {
            *(u32 *)*0x8c4a9fe4 = *(u32 *)*0x8c4a9fe4 & uVar2 | 0x1000000;
            iVar5 = (*(code *)puVar3)(a4, *puVar1, g_8c4a9fe8, 0x10);
            if (iVar5 == iVar8) {
                return 0;
            }
        }
        iVar5 = (*(code *)puVar3)(a4, *(u32 *)(0x8c4a9f8c + -0x50 + iVar9), *(int *)(0x8c4a9f8c + iVar9) + 0x20, 0x10);
        if (iVar5 == iVar8) {
            return 0;
        }
    }
    iVar5 = 0x8c4a9f9c;
    if (*(int *)(0x8c4a9f9c + iVar9) != 0) {
        g_8c4a9f14 = g_8c4a9f14 | 4;
        iVar5 = (*(code *)puVar3)(a4, *(u32 *)(0x8c4a9f4c + iVar9), *(int *)(iVar5 + iVar9) + 0x20, 0x10);
        if (iVar5 == iVar8) {
            return 0;
        }
    }
    if (*(int *)(0x8c4a9fac + iVar9) != 0) {
        g_8c4a9f14 = g_8c4a9f14 | 8;
        if (g_8c4a9fe0 == 1) {
            *(u32 *)*0x8c4a9fe4 = *(u32 *)*0x8c4a9fe4 & uVar2 | 0x3000000;
            iVar5 = (*(code *)puVar3)(a4, g_8c4a9fe4, g_8c4a9fe8, 0x10);
            if (iVar5 == iVar8) {
                return 0;
            }
        }
        iVar5 = (*(code *)puVar3)(a4, *(u32 *)(0x8c4a9fac + -0x50 + iVar9), *(int *)(0x8c4a9fac + iVar9) + 0x20, 0x10);
        if (iVar5 == iVar8) {
            return 0;
        }
    }
    if (*(int *)(0x8c4a9fbc + iVar9) == 0) {
        return 1;
    }
    g_8c4a9f14 = g_8c4a9f14 | 0x10;
    iVar5 = (*(code *)puVar3)(a4, *(u32 *)(0x8c4a9fbc + -0x50 + iVar9), *(int *)(0x8c4a9fbc + iVar9) + 0x20, 0x10);
    if (iVar5 != iVar8) {
        return 1;
    }
    return 0;
}

/*
 * pvr_20672a  0x8c20672a
 * called by: pvr_2069a0
 */
int pvr_20672a(void) {
    u32 *puVar1;
    u32 *puVar2;
    int iVar3;
    u32 uVar4;
    u32 uVar5;
    u32 *puVar6;
    u32 uVar7;
    u32 uVar8;

    puVar1 = 0xa05f8008;
    uVar8 = 0;
    puVar6 = 0xa05f8008 + 0x16;
    while ((iVar3 = *(int *)(uVar8 * 4 + 0x8c4a9ef8), iVar3 != 3 || (g_8c4a9db4 != 0))) {
        uVar8 = uVar8 + 1;
        if (3 < (int)uVar8) {
            return iVar3;
        }
    }
    uVar7 = uVar8 & 1;
    if ((uVar7 + 1 & g_8c4a9d6c) != 0) {
        ta_fifo_25d0a0(g_8c4aa008, g_8c4aa00c, 0, 1);
        g_8c4a9d6c = ~(uVar7 + 1) & g_8c4a9d6c & 3;
    }
    g_8c4a9db4 = 1;
    *(u32 *)(0x8c4a9ef8 + uVar8 * 4) = 4;
    if ((g_8c4a9bb0 & 0x10) != 0) {
        *puVar1 = 2;
        *puVar1 = 0;
    }
    iVar3 = 0x8c4aa01c;
    *0xa05f802c = *(u32 *)(0x8c4aa01c + uVar7 * 0x20);
    *0xa05f8020 = *(u32 *)(iVar3 + 0x14 + uVar7 * 0x20);
    if (g_8c4a9be0 != 1) {
        if (((g_8c4a9bcc & 1) == 1) || ((g_8c4a9bcc & 0x2c) != 0x20)) {
            uVar5 = *(u32 *)(0x8c4a9ee0 + uVar7 * 4);
        } else {
            uVar5 = *(u32 *)(0x8c4a9ee0 + g_8c4aa10c * 4);
        }
        *puVar6 = uVar5;
    }
    puVar6 = 0xa05f808c;
    puVar1 = 0x8c4a9d60;
    *0xa05f808c = g_8c4a9d60;
    puVar6[-1] = puVar1[-1] & 0xfffffff0;
    puVar1 = 0xa05f8068;
    *0xa05f8068 = g_8c4a9e60;
    puVar1[1] = g_8c4a9e64;
    puVar1[-7] = g_8c4a9e70;
    puVar1[-8] = g_8c4a9e78;
    puVar2 = 0x8c4a9bcc;
    g_8c4aa0b4 = 0;
    if ((*puVar2 & 0xffffffed) == 0x20) {
        if (g_8c4aa10c == 0) {
            uVar4 = g_8c4a9eac;
            uVar7 = 0x20000;
        } else {
            uVar4 = g_8c4a9eac;
            uVar7 = 0x60000;
        }
        *0xa05f80f4 = uVar4 | uVar7;
    }
    puVar2 = 0x8c4a9f0c;
    g_8c4aa0f4 = *0xffd8000c;
    *puVar2 = uVar8;
    puVar1 = 0xa05f8014;
    g_8c4aa108 = 1;
    *puVar1 = 0xffffffff;
    return (int)puVar2;
}

/*
 * pvr_2069a0  0x8c2069a0
 * called by: pvr_206ff0
 */
u32 pvr_2069a0(void) {
    u32 r6;
    u32 r7;
    int iVar1;
    u32 ar4_00;
    bool bVar2;
    u32 ar5_00;
    int iStack_34;
    int iStack_30;
    int iStack_2c;
    int iStack_28;
    u32 uStack_24;

    _DAT_a05f6900 = 8;
    g_8c4a9e5c = g_8c4a9e5c | 2;
    g_8c4a9f1c = g_8c4a9f1c + 1;
    if ((g_8c4a9bb0 & 2) == 0) {
        g_8c4aa10c = g_8c2756b8 + 1 & 1;
        g_8c2756b8 = g_8c4aa10c;
    } else {
        g_8c4aa10c = (_DAT_a05f810c & 0x400) >> 10;
    }
    if (((g_8c4a9bcc & 4) == 4) && (g_8c4aa10c == 1)) {
        bVar2 = true;
    } else {
        g_8c4a9d8c = g_8c4a9d8c + -1;
        if (g_8c4a9d8c < 0) {
            g_8c4a9d8c = g_8c4a9d90;
            bVar2 = false;
        } else if (g_8c4aa0b0 == 0) {
            bVar2 = true;
        } else {
            bVar2 = false;
            g_8c4aa0b0 = 0;
        }
    }
    if (!bVar2) {
        uStack_24 = 0;
        ar5_00 = 0;
        if (g_8c4a9f28 == 0) {
            if (g_8c4a9f24 == 0) {
                iStack_28 = 0;
                iStack_30 = 0;
                iStack_2c = 0;
                ar4_00 = 0;
                for (iStack_34 = 0; iStack_34 < 4; iStack_34 = iStack_34 + 1) {
                    iVar1 = iStack_34 * 4;
                    if ((-1 < *(int *)(&g_8c4a9ef8 + iVar1)) && ((*(u32 *)(&g_8c4a9ef8 + iVar1) & 1) == 0)) {
                        if (g_8c4a9dd0 == 0) {
                            if (*(int *)(&g_8c4a9ef8 + iVar1) == 4) {
                                *(u32 *)(&g_8c4a9ef8 + iVar1) = 5;
                                if (g_8c4a9db4 != 0) {
                                    g_8c4aa0bc = g_8c4aa0bc + 1;
                                }
                                g_8c4a9db4 = 0;
                                _DAT_a05f8008 = 0;
                            } else {
                                g_8c4aa0b0 = 1;
                                uStack_24 = 1;
                                if ((*(int *)(&g_8c4a9ef8 + iVar1) == 2) &&
                                    (g_8c4aa0b8 = g_8c4aa0b8 + 1, g_8c4a9dd4 < g_8c4aa0b8)) {
                                    g_8c4aa0c0 = g_8c4aa0c0 + 1;
                                    g2dma_202e82();
                                    *(u32 *)(&g_8c4a9ef8 + iVar1) = 0xffffffff;
                                    g_8c4a9db8 = 0;
                                    g_8c4aa0b8 = 0;
                                }
                            }
                        } else {
                            g_8c4aa0b0 = 1;
                            uStack_24 = 1;
                            if ((*(int *)(&g_8c4a9ef8 + iVar1) == 4) &&
                                (g_8c4aa0b4 = g_8c4aa0b4 + 1, g_8c4a9dd0 < g_8c4aa0b4)) {
                                g_8c4aa0bc = g_8c4aa0bc + 1;
                                _DAT_a05f8008 = 0;
                                _DAT_a05f8044 = g_8c4a9e74;
                                ta_fifo_25d0a0(g_8c4aa008, g_8c4aa00c, 0, 1);
                                r6 = 0;
                                r7 = 1;
                                ar4_00 = g_8c4aa008;
                                ar5_00 = g_8c4aa00c;
                                ta_fifo_25d0a0(g_8c4aa008, g_8c4aa00c, 0, 1);
                                *(u32 *)(&g_8c4a9ef8 + iStack_2c) = 5;
                                g_8c4a9db4 = 0;
                                g_8c4aa104 = g_8c4aa104 + 1;
                                g_8c4aa0b4 = 0;
                            }
                            if ((*(int *)(&g_8c4a9ef8 + iStack_30) == 2) &&
                                (g_8c4aa0b8 = g_8c4aa0b8 + 1, g_8c4a9dd4 < g_8c4aa0b8)) {
                                g_8c4aa0c0 = g_8c4aa0c0 + 1;
                                g2dma_202e82();
                                *(u32 *)(&g_8c4a9ef8 + iStack_28) = 0xffffffff;
                                g_8c4a9db8 = 0;
                                g_8c4aa0b8 = 0;
                            }
                        }
                    }
                    iStack_28 = iStack_28 + 4;
                    iStack_30 = iStack_30 + 4;
                    iStack_2c = iStack_2c + 4;
                }
                uStack_24 = uStack_24 | g_8c4a9db4;
            } else {
                g_8c4aa0cc = g_8c4aa0cc + 1;
                ar5_00 = 1;
                if (0x10 < g_8c4aa0cc) {
                    _DAT_a05f8048 = g_8c4a9e78;
                    _DAT_a05f804c = g_8c4a9e70;
                    _DAT_a05f8068 = g_8c4a9e60;
                    _DAT_a05f806c = g_8c4a9e64;
                    g_8c4a9db4 = 0;
                    g_8c4aa0cc = 0;
                }
                uStack_24 = 1;
            }
        } else {
            uStack_24 = 1;
        }
        if (uStack_24 == 0) {
            pvr_206350(0);
            iVar1 = pvr_206480();
            if (iVar1 == 0) {
                return 1;
            }
            pvr_20672a();
            g_8c4a9f20 = 0;
        }
    }
    return 0;
}

/*
 * pvr_206cfe  0x8c206cfe
 * called by: pvr_206ff0
 */
u32 pvr_206cfe(void) {
    int iVar1;
    u32 *puVar2;
    u32 uVar3;
    int iVar4;
    u32 *puVar5;
    int iVar6;
    u32 *puVar7;

    iVar1 = 0x8c4aa0b4;
    if (*(int *)(g_8c4a9f10 * 4 + 0x8c4a9ef8) != -1) {
        if (g_8c4a9f24 == 0) {
            g_8c4a9e5c = g_8c4a9e5c | 0x20;
            0x8c4a9f10 [g_8c4a9f10 + -6] = 3;
        }
        puVar2 = 0x8c4a9f10;
        if ((g_8c4a9bb0 & 1) == 0) {
            iVar4 = *(int *)(0x8c4aa034 + (g_8c4a9f10 & 1) * 0x20);
        } else {
            iVar4 = *0xa05f8138;
        }
        *(int *)((g_8c4a9f10 & 1) * 4 + iVar1 + 0x24) = *0xa05f8138;
        g_8c4a9d60 = g_8c4a9d58 & 0xff000000 | (iVar4 - *(int *)(0x8c4aa030 + (*puVar2 & 1) * 0x20)) * 2 & 0xfffff8;
        iVar6 = 0x30;
        puVar5 = (u32 *)(iVar4 + 0xa5000000);
        puVar7 = 0x8c4a9c50;
        do {
            uVar3 = *puVar7;
            puVar7 = puVar7 + 1;
            iVar6 = iVar6 + -1;
            *puVar5 = uVar3;
            puVar5 = puVar5 + 1;
        } while (iVar6 != 0);
    }
    g_8c4a9db8 = 0;
    *(int *)(iVar1 + 0x4c) = *(int *)(iVar1 + 0x48) - *0xffd8000c;
    return 0x4c;
}

/*
 * pvr_calls_calc_206e14  0x8c206e14
 * area name: sits between pvr functions (same compilation unit); behaviour name: its callees mostly do: calc
 * called by: pvr_calls_calc_206f76, pvr_calls_calc_206faa
 */
u32 pvr_calls_calc_206e14(int a0, u32 a1, u32 a2, u32 a3) {
    int iVar1;
    int iVar2;
    int iVar3;
    int iVar4;
    int iVar5;
    int iVar6;
    u32 uVar7;
    int iVar8;
    u32 uStack_24;

    iVar1 = 0x8c4aa0b4;
    iVar5 = (int)(int)0xffffff40;
    if (a0 == 0) {
        iVar3 = (int)0x2000;
        uVar7 = 0;
        iVar4 = 0;
        do {
            iVar6 = 0x8c4aa034;
            if ((u32)(*(int *)(0x8c4aa034 + uVar7) + iVar3) < (u32)(*(int *)(0x8c4aa034 + -0x10 + uVar7) + iVar5)) {
                *(int *)(0x8c4aa034 + iVar4) = *(int *)(0x8c4aa034 + iVar4) + iVar3;
                *(int *)(iVar6 + -0xc + iVar4) = *(int *)(iVar6 + iVar4) + (int)0xc0;
                *(u32 *)(iVar1 + 0x14) = 0;
            } else if (*(int *)(iVar1 + 0x14) != 0) {
                shinobi_calc_2062c8(3, a1, a2, a3);
            }
            uVar7 = uVar7 + 0x20;
            iVar4 = iVar4 + 0x20;
        } while (uVar7 < 0x40);
    } else if (a0 == 1) {
        iVar6 = (int)(int)0xfffff800;
        iVar3 = 0;
        iVar4 = 0;
        uStack_24 = 0;
        iVar8 = 0;
        do {
            iVar2 = 0x8c4aa028;
            if ((u32)(*(int *)(0x8c4aa028 + 8 + uStack_24 * 0x20) + (int)0x140) <
                (u32)(*(int *)(0x8c4aa028 + uStack_24 * 0x20) + iVar6)) {
                if (*(u32 *)(iVar1 + 0x24 + iVar3) < (u32)(*(int *)(0x8c4aa028 + iVar4) + iVar6)) {
                    *(int *)(0x8c4aa028 + iVar8) = *(int *)(0x8c4aa028 + iVar8) - (int)0x800;
                    *(int *)(0x8c4aa034 + iVar8) = *(int *)(iVar2 + iVar8) + iVar5;
                }
                *(u32 *)(iVar1 + 0x10) = 0;
            } else if (10 < *(u32 *)(iVar1 + 0x10)) {
                shinobi_calc_2062c8(3, a1, a2, a3);
            }
            iVar4 = iVar4 + 0x20;
            uStack_24 = uStack_24 + 1;
            iVar8 = iVar8 + 0x20;
            iVar3 = iVar3 + 4;
        } while (uStack_24 < 2);
    }
    return 0;
}

/*
 * pvr_calls_calc_206f76  0x8c206f76
 * area name: sits between pvr functions (same compilation unit); behaviour name: its callees mostly do: calls_calc
 * called by: pvr_206ff0
 */
u32 pvr_calls_calc_206f76(u32 unused_a0, u32 a1, u32 a2, u32 a3) {
    int iVar1;
    int *piVar2;

    *0xa05f6908 = 4;
    piVar2 = 0x8c4a9f10;
    iVar1 = 0x8c4aa0b4;
    *(int *)(0x8c4aa0b4 + 0x20) = *(int *)(0x8c4aa0b4 + 0x20) + 1;
    piVar2[*piVar2 + -6] = -3;
    if (g_8c4aa058 == 1) {
        *(int *)(iVar1 + 0x14) = *(int *)(iVar1 + 0x14) + 1;
        pvr_calls_calc_206e14(0, a1, a2, a3);
    }
    return 0;
}

/*
 * pvr_calls_calc_206faa  0x8c206faa
 * area name: sits between pvr functions (same compilation unit); behaviour name: its callees mostly do: calls_calc
 * called by: pvr_206ff0
 */
u32 pvr_calls_calc_206faa(u32 unused_a0, u32 a1, u32 a2, u32 a3) {
    int iVar1;
    int *piVar2;

    *0xa05f6908 = 8;
    piVar2 = 0x8c4aa058;
    iVar1 = 0x8c4aa0b4;
    *(int *)(0x8c4aa0b4 + 0x1c) = *(int *)(0x8c4aa0b4 + 0x1c) + 1;
    if (*piVar2 == 1) {
        *(int *)(iVar1 + 0x10) = *(int *)(iVar1 + 0x10) + 1;
        pvr_calls_calc_206e14(1, a1, a2, a3);
    }
    return 0;
}

/*
 * pvr_test_206fd2  0x8c206fd2
 * area name: sits between pvr functions (same compilation unit); behaviour name: returns the result of a comparison
 * called by: pvr_206ff0
 */
u32 pvr_test_206fd2(void) {
    int *piVar1;

    *0xa05f6908 = 2;
    piVar1 = 0x8c4aa108;
    if (g_8c4aa108 == 0) {
        g_8c4a9e5c = g_8c4a9e5c | 0x10;
    }
    *piVar1 = 0;
    return 0;
}

/*
 * pvr_206ff0  0x8c206ff0
 */
u32 pvr_206ff0(u32 unused_a0, u32 a1, u32 *a2, u32 a3) {
    u8 *puVar1;
    u32 *puVar2;
    u32 *puVar3;
    int *piVar4;
    u32 *puVar5;
    u8 *puVar6;
    int iVar7;
    u32 uVar8;
    u32 uVar9;
    u32 *puVar10;
    u32 uVar11;

    puVar3 = 0xa05f6900;
    puVar1 = (&shinobi_calc_2062c8);
    uVar11 = *0xa05f6900;
    if (((uVar11 & 8) != 0) && (iVar7 = pvr_2069a0(), iVar7 != 0)) {
        (*(code *)puVar1)(iVar7, a1, a2, a3);
    }
    if ((uVar11 & 0x20) != 0) {
        *puVar3 = 0x20;
        g_8c4a9e5c = g_8c4a9e5c | 4;
    }
    if ((uVar11 & 4) != 0) {
        *puVar3 = 7;
        g_8c4a9db4 = 0;
        piVar4 = 0xffd8000c;
        puVar2 = 0x8c4aa0b4;
        g_8c4aa0b4 = 0;
        puVar2[0x11] = puVar2[0x10] - *piVar4;
        if (g_8c4a9f24 == 0) {
            *(u32 *)(0x8c4a9ef8 + *(int *)(0x8c4a9ef8 + 0x14) * 4) = 5;
        } else {
            g_8c4a9f24 = 0;
            puVar5 = 0x8c4a9e78;
            puVar2[6] = 0;
            puVar2 = 0xa05f8048;
            *0xa05f8048 = *puVar5;
            puVar2[1] = g_8c4a9e70;
            *0xa05f8068 = g_8c4a9e60;
            *0xa05f806c = g_8c4a9e64;
        }
        g_8c4a9e5c = g_8c4a9e5c | 1;
        g_8c4aa104 = 0;
    }
    puVar10 = 0xffa0002c;
    uVar9 = 0x80000;
    if ((uVar11 & 0x80000) != 0) {
        uVar8 = *0xffa0002c;
        *0xffa0002c = uVar8 & 0xfffffffc;
        puVar6 = (&sh4_dmac_203160);
        *puVar3 = uVar9;
        (*(code *)puVar6)(uVar8 & 0xfffffffc, uVar9, puVar10, a3);
        a2 = puVar10;
    }
    if ((uVar11 & 0x40) != 0) {
        *puVar3 = 0x40;
        g_8c4a9e5c = g_8c4a9e5c | 0x40;
    }
    uVar8 = (u32)0x80;
    if ((uVar11 & uVar8) != 0) {
        *puVar3 = uVar8;
        puVar10 = 0x8c4a9f18;
        g_8c4a9f18 = g_8c4a9f18 | 1;
        if (g_8c4a9f14 == *puVar10) {
            pvr_206cfe();
        }
    }
    uVar8 = (u32)0x100;
    if ((uVar11 & uVar8) != 0) {
        *puVar3 = uVar8;
        puVar10 = 0x8c4a9f18;
        g_8c4a9f18 = g_8c4a9f18 | 2;
        if (g_8c4a9f14 == *puVar10) {
            pvr_206cfe();
        }
    }
    uVar8 = (u32)0x200;
    if ((uVar11 & uVar8) != 0) {
        *puVar3 = uVar8;
        puVar10 = 0x8c4a9f18;
        g_8c4a9f18 = g_8c4a9f18 | 4;
        if (g_8c4a9f14 == *puVar10) {
            pvr_206cfe();
        }
    }
    uVar8 = (u32)0x400;
    if ((uVar11 & uVar8) != 0) {
        *puVar3 = uVar8;
        puVar10 = 0x8c4a9f18;
        g_8c4a9f18 = g_8c4a9f18 | 8;
        if (g_8c4a9f14 == *puVar10) {
            pvr_206cfe();
        }
    }
    uVar8 = 0x200000;
    if ((uVar11 & 0x200000) != 0) {
        *puVar3 = 0x200000;
        puVar3 = 0x8c4a9f18;
        g_8c4a9f18 = g_8c4a9f18 | 0x10;
        if (g_8c4a9f14 == *puVar3) {
            pvr_206cfe();
        }
    }
    uVar11 = *0xa05f6908;
    if (((uVar11 & 4) != 0) && (uVar8 = pvr_calls_calc_206f76(uVar8, uVar9, a2, a3), uVar8 != 0)) {
        (*(code *)puVar1)(uVar8, uVar9, a2, a3);
    }
    if (((uVar11 & 8) != 0) && (uVar8 = pvr_calls_calc_206faa(uVar8, uVar9, a2, a3), uVar8 != 0)) {
        (*(code *)puVar1)(uVar8, uVar9, a2, a3);
    }
    if (((uVar11 & 2) != 0) && (iVar7 = pvr_test_206fd2(), iVar7 != 0)) {
        (*(code *)puVar1)(iVar7, uVar9, a2, a3);
    }
    puVar1 = (&pvr_update_fields_207334);
    for (uVar11 = 0; (int)uVar11 < 10; uVar11 = uVar11 + 1) {
        if ((int)uVar11 < 0) {
            uVar9 = 1 >> (~uVar11 & 0x1f) + 1;
        } else {
            uVar9 = 1 << (uVar11 & 0x1f);
        }
        if ((g_8c4a9e5c & uVar9) != 0) {
            g_8c4a9e5c = g_8c4a9e5c & ~uVar9;
            (*(code *)puVar1)(*(u32 *)(0x8c4a9de0 + -4 + uVar11 * 8), *(u32 *)(0x8c4a9de0 + uVar11 * 8), a2, a3);
        }
    }
    return 0;
}

/*
 * callback_table_call  0x8c2072b2
 * calls entry a0 of the callback table at 0x8c4a9ddc with its stored argument
 * called by: gfxlib_uses_ta_fifo_233e10, kamui_uses_callback_table_call_20ca32, pvr_uses_ta_fifo_20c90c
 */
u32 callback_table_call(int a0) {
    u32 uVar1;

    /* WARNING: Could not recover jumptable at 0x8c2072c8. Too many branches */
    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(0x8c4a9ddc + a0 * 8))(*(u32 *)(0x8c4a9ddc + a0 * 8 + 4));
    return uVar1;
}

/*
 * sq_copy_words  0x8c207300
 * copies a2 bytes of words from a1 to a0 for a store-queue/TA transfer (unaligned: word by word; aligned: one word per
 * 8-byte step) called by: alt_entry_20af22, kamui_uses_sq_copy_words_212220, kamui_uses_sq_copy_words_212284,
 * kamui_uses_sq_copy_words_2122ea, pvr_uses_sq_copy_words_20af20, pvr_uses_sq_copy_words_2103c4
 */
u32 sq_copy_words(u32 *a0, u32 *a1, u32 a2, u32 a3) {
    u32 uVar1;
    u32 uVar2;
    u32 uVar3;

    uVar1 = (u32)a0 | (u32)a1 | a2;
    if ((uVar1 & 7) != 0) {
        uVar1 = a2 >> 2;
        do {
            uVar3 = *a1;
            a1 = a1 + 1;
            uVar1 = uVar1 - 1;
            *a0 = uVar3;
            a0 = a0 + 1;
        } while (uVar1 != 0);
        return uVar3;
    }
    uVar2 = a2 >> 3;
    do {
        uVar3 = *a1;
        a1 = a1 + 1;
        uVar2 = uVar2 - 1;
        *a0 = uVar3;
        a0 = a0 + 2;
    } while (uVar2 != 0);
    return uVar1;
}

/*
 * memcpy_words  0x8c20731e
 * copies a2 bytes as 32-bit words
 * called by: kamui_copy_211a20, kamui_draw_20bdc0, ta_copy_20b7a0, ta_draw_20b260, vram64_20a8e0, vram64_20a9c2,
 * vram_20a87c, vram_20a892
 */
u32 memcpy_words(u32 *a0, u32 *a1, u32 a2) {
    u32 uVar1;
    u32 uVar2;

    uVar2 = a2 >> 2;
    do {
        uVar1 = *a1;
        a1 = a1 + 1;
        uVar2 = uVar2 - 1;
        *a0 = uVar1;
        a0 = a0 + 1;
    } while (uVar2 != 0);
    return uVar1;
}

/*
 * CacheBlockWriteBack_wrap  0x8c20732e
 * only calls CacheBlockWriteBack
 * called by: kamui_uses_CacheBlockWriteBack_wrap_20d9ce, kamui_uses_CacheBlockWriteBack_wrap_20daa0,
 * kamui_uses_CacheBlockWriteBack_wrap_20db80, tex_uses_CacheBlockWriteBack_wrap_20d82e
 */
u32 CacheBlockWriteBack_wrap(u32 a0) {
    u32 in_r0;

    CacheBlockWriteBack(a0);
    return in_r0;
}

/*
 * pvr_update_fields_207334  0x8c207334
 * area name: sits between pvr functions (same compilation unit); behaviour name: conditionally writes members
 */
u32 pvr_update_fields_207334(code *a0, u32 a1) {
    u8 *puVar1;
    u32 *puVar2;
    u64 in_dr0;
    u32 in_PR;
    u8 in_FPSCR_RM;
    u8 in_FPSCR_FLAG;
    u8 in_FPSCR_ENABLE;
    u8 in_FPSCR_CAUSE;
    u8 in_FPSCR_DN;
    char cVar3;
    u8 in_FPSCR_FR;
    u8 auStack_84[64];
    u8 auStack_44[56];
    u64 uStack_c;
    u32 uStack_4;

    uStack_4 = (u32)in_FPSCR_RM | (u32)in_FPSCR_FLAG << 2 | (u32)in_FPSCR_ENABLE << 7 | (u32)in_FPSCR_CAUSE << 0xc |
               (u32)in_FPSCR_DN << 0x12 | (u32)in_FPSCR_FR << 0x15;
    cVar3 = (char)((~(~uStack_4 | 0x100000) & 0x100000) >> 0x14);
    if (cVar3 == '\0') {
        uStack_c = CONCAT44((int)((u64)in_dr0 >> 0x20), (u32)uStack_c);
        uStack_c._0_4_ = (int)in_dr0;
        puVar1 = auStack_44;
    } else {
        puVar1 = auStack_84;
        uStack_c = in_dr0;
    }
    *(u32 *)(puVar1 + -4) = in_PR;
    (*a0)(a1);
    if (cVar3 == '\0') {
        puVar2 = (u32 *)(puVar1 + 0x40);
    } else {
        puVar2 = (u32 *)(puVar1 + 0x80);
    }
    return *puVar2;
}

/*
 * pvr_update_fields_207344  0x8c207344
 * area name: sits between pvr functions (same compilation unit); behaviour name: conditionally writes members
 */
u32 pvr_update_fields_207344(code *a0, u32 a1, u32 a2, u32 a3) {
    u8 *puVar1;
    u32 *puVar2;
    u64 in_dr0;
    u32 in_PR;
    u8 auStack_80[64];
    u8 auStack_40[56];
    u64 uStack_8;

    uStack_8 = CONCAT44((int)((u64)in_dr0 >> 0x20), (u32)uStack_8);
    uStack_8._0_4_ = (int)in_dr0;
    puVar1 = auStack_40;

    *(u32 *)(puVar1 + -4) = in_PR;
    (*a0)(a1, a1, a2, a3);

    puVar2 = (u32 *)(puVar1 + 0x40);

    return *puVar2;
}

/*
 * pvr_init_fields_2073a0  0x8c2073a0
 * area name: sits between pvr functions (same compilation unit); behaviour name: writes 19 members
 * called by: kamui_init_defaults
 */
u32 pvr_init_fields_2073a0(u32 a0) {
    u32 *puVar1;
    u32 *puVar2;
    u32 in_r0;

    puVar1 = 0x8c4a9e58;
    g_8c4a9e58 = 0;
    puVar2 = 0x8c4a9ddc;
    g_8c4a9ddc = (&DATA_8c2078f2);
    puVar2[1] = 0;
    puVar1[-0x1d] = (&DATA_8c2078f6);
    puVar1[-0x1c] = 0;
    puVar2[4] = (&DATA_8c2078fa);
    puVar2[5] = 0;
    puVar1[-0x19] = (&DATA_8c207920);
    puVar1[-0x18] = 0;
    puVar2[8] = (&DATA_8c207924);
    puVar2[9] = 0;
    puVar1[-0x15] = (&DATA_8c207928);
    puVar1[-0x14] = 0;
    puVar2[0xc] = (&DATA_8c20792c);
    puVar2[0xd] = 0;
    puVar1[-0x11] = (&DATA_8c207930);
    puVar1[-0x10] = 0;
    puVar2[0x10] = (&DATA_8c207934);
    puVar2[0x11] = 0;
    puVar1[-0xd] = (&DATA_8c207972);
    puVar1[-0xc] = 0;
    return in_r0;
}

/*
 * pvr_update_fields_2073f8  0x8c2073f8
 * area name: sits between pvr functions (same compilation unit); behaviour name: conditionally writes members
 * called by: pvr_calls_update_fields_207502
 */
int pvr_update_fields_2073f8(int a0, int a1, u32 a2) {
    int iVar1;
    u8 *puVar2;

    if (a1 == 0) {
        iVar1 = (int)0x234;
        *(u8 **)(iVar1 + a0) = (&DATA_8c2078f2);
        return iVar1;
    }
    if (a1 == 1) {
        iVar1 = (int)0x23c;
        puVar2 = (&DATA_8c2078f6);
    LAB_8c2074f4:
        *(u8 **)(iVar1 + a0) = puVar2;
    } else {
        if (a1 == 2) {
            iVar1 = (int)0x244;
            puVar2 = (&DATA_8c2078fa);
        } else {
            if (a1 == 3) {
                iVar1 = (int)0x24c;
                puVar2 = (&DATA_8c207920);
                goto LAB_8c2074f4;
            }
            if (a1 == 4) {
                iVar1 = (int)0x254;
                puVar2 = (&DATA_8c207924);
            } else {
                if (a1 == 5) {
                    iVar1 = (int)0x25c;
                    puVar2 = (&DATA_8c207928);
                    goto LAB_8c2074f4;
                }
                if (a1 == 6) {
                    iVar1 = (int)0x264;
                    puVar2 = (&DATA_8c20792c);
                } else {
                    if (a1 == 7) {
                        iVar1 = (int)0x26c;
                        puVar2 = (&DATA_8c207930);
                        goto LAB_8c2074f4;
                    }
                    if (a1 != 8) {
                        return a1;
                    }
                    iVar1 = (int)0x274;
                    puVar2 = (&DATA_8c207934);
                }
            }
        }
        *(u8 **)(iVar1 + a0) = puVar2;
    }
    return iVar1;
}

/*
 * pvr_calls_update_fields_207502  0x8c207502
 * area name: sits between pvr functions (same compilation unit); behaviour name: its callees mostly do: update_fields
 * called by: pvr_calls_update_fields_20757e, pvr_uses_ret_const_1_20759a, pvr_uses_ret_const_1_2075bc,
 * shinobi_calls_update_fields_207832, shinobi_calls_update_fields_20784e, shinobi_calls_update_fields_20786a,
 * shinobi_calls_update_fields_207886, shinobi_calls_update_fields_2078a2 (+2 more)
 */
u32 pvr_calls_update_fields_207502(int a0, u32 a1, int a2, u32 a3) {
    u32 uVar1;
    u32 uVar2;
    u32 uVar3;
    u32 uVar4;
    int iVar5;
    u8 in_MD;
    u8 bVar6;
    u8 in_RB;
    u8 bVar7;
    u8 in_BL;
    u8 bVar8;
    u8 in_FD;
    u8 bVar9;
    u8 in_M;
    u8 extraout_M;
    u8 bVar10;
    u8 in_Q;
    u8 extraout_Q;
    u8 bVar11;
    u8 in_IMASK;
    u8 bVar12;
    u8 in_S;
    u8 extraout_S;
    u8 bVar13;
    u8 in_T;
    u8 bVar14;
    u8 extraout_T;

    uVar1 = (u32)in_T | (u32)in_S << 1;
    uVar2 = uVar1 | (u32)in_IMASK << 4;
    uVar3 = uVar2 | (u32)in_Q << 8;
    uVar4 = uVar3 | (u32)in_M << 9;
    bVar8 = (u8)(((u32)in_BL << 0x1c) >> 0x18);
    bVar6 = bVar8 | (u8)(((u32)in_RB << 0x1d) >> 0x18);
    bVar13 = (u8)((uVar1 & 2) >> 1);
    bVar12 = (u8)((uVar2 & 0xf0) >> 4);
    bVar11 = (u8)(uVar3 >> 8) & 1;
    bVar10 = (u8)((uVar4 & 0x200) >> 9);
    bVar9 = (u8)(((uVar4 | (u32)in_FD << 0xf) & 0x8000) >> 0xf);
    bVar8 = (bVar8 & 0x10) >> 4;
    bVar7 = (bVar6 & 0x20) >> 5;
    bVar6 = ((bVar6 | (u8)(((u32)in_MD << 0x1e) >> 0x18)) & 0x40) >> 6;
    if (a2 == 0) {
        pvr_update_fields_2073f8(a0, a1, 0);
        bVar10 = extraout_M;
        bVar11 = extraout_Q;
        bVar13 = extraout_S;
        bVar14 = extraout_T;
    } else {
        bVar14 = (a1 & 0x20000000) != 0;
        iVar5 = (int)0x234;
        *(int *)(a1 * 8 + 0x234 + a0) = a2;
        *(u32 *)(iVar5 + a0 + a1 * 8 + 4) = a3;
    }
    return ((u32)in_T | (u32)in_S << 1 | (u32)in_IMASK << 4) & 0xf0 |
           ((u32)bVar14 | (u32)bVar13 << 1 | (u32)bVar12 << 4 | (u32)bVar11 << 8 | (u32)bVar10 << 9 |
            (u32)bVar9 << 0xf | (u32)bVar8 << 0x1c | (u32)bVar7 << 0x1d | (u32)bVar6 << 0x1e) &
               (int)(int)0xffffff0f;
}

/*
 * pvr_calls_update_fields_20757e  0x8c20757e
 * area name: sits between pvr functions (same compilation unit); behaviour name: its callees mostly do:
 * calls_update_fields called by: ninja_uses_aica_reg_258604, pvr_25825a
 */
u32 pvr_calls_update_fields_20757e(u32 a0, u32 a1) {
    pvr_calls_update_fields_207502(g_8c2756b0, 0, a0, a1);
    return 0;
}

/*
 * pvr_uses_ret_const_1_20759a  0x8c20759a
 * area name: sits between pvr functions (same compilation unit); behaviour name: its main named callee is
 * ret_const_1_25eca0 called by: shinobi_uses_ret_const_1_1fa54c, ta_uses_ret_const_1_1fa244
 */
u32 pvr_uses_ret_const_1_20759a(u32 a0, u32 a1, u32 unused_a2, u32 a3) {
    ret_const_1_25eca0(1);
    pvr_calls_update_fields_207502(g_8c2756b0, 1, a0, a1);
    return 0;
}

/*
 * pvr_uses_ret_const_1_2075bc  0x8c2075bc
 * area name: sits between pvr functions (same compilation unit); behaviour name: its main named callee is
 * ret_const_1_25eca4 called by: shinobi_uses_ret_const_1_1fa54c, ta_uses_ret_const_1_1fa244
 */
u32 pvr_uses_ret_const_1_2075bc(int a0, u32 a1, u32 unused_a2, u32 a3) {
    ret_const_1_25eca4(-((a0 == 0) - 1), a1, unused_a2, a3);
    pvr_calls_update_fields_207502(g_8c2756b0, 2, a0, a1);
    return 0;
}

/*
 * pvr_draw_207620  0x8c207620
 * area name: sits between pvr functions (same compilation unit); behaviour name: mostly calls draw functions
 */
u32 pvr_draw_207620(int a0) {
    u32 uVar1;
    u32 ar6_00;
    u32 ar7_00;

    if (((g_8c4a9bcc & 1) == 1) || ((g_8c4a9bcc & 0x2c) == 0)) {
        ar6_00 = g_8c4a9e9c >> 0x10;
    } else {
        ar6_00 = g_8c4a9e9c >> 0x11;
    }
    ar7_00 = a0 + g_8c4a9c08 + g_8c4a9c00;
    uVar1 = ar7_00;
    if (((g_8c4a9bcc & 1) != 1) && ((g_8c4a9bcc & 0x20) != 0)) {
        uVar1 = ((int)(a0 + (u32)(a0 < 0)) >> 1) + g_8c4a9c08 + g_8c4a9c00;
    }
    if ((int)uVar1 < 0) {
        uVar1 = uVar1 + ar6_00;
    }
    if ((int)ar6_00 < (int)uVar1) {
        uVar1 = ar6_00;
    }
    if ((int)uVar1 < 0) {
        uVar1 = 0;
    }
    uVar1 = g_8c4a9e90 & 0x3ff0000 | (int)0x3ff & uVar1;
    g_8c4a9e90 = uVar1;
    pvr_20a844((int)0xc8, uVar1);
    return 0;
}

/*
 * pvr_draw_2076f6  0x8c2076f6
 * area name: sits between pvr functions (same compilation unit); behaviour name: mostly calls draw functions
 */
u32 pvr_draw_2076f6(int *a0) {
    int *piVar1;
    u32 uVar2;
    int iVar3;
    int iVar4;
    u64 in_dr2;
    u32 uVar5;
    u32 uVar6;
    double dVar7;
    double in_xd4;

    uVar5 = (u32)((u64)in_dr2 >> 0x20);
    if ((g_8c4a9bb0 & 2) == 0) {
        uVar2 = 0;
        piVar1 = a0;
    } else {
        piVar1 = (int *)pvr_20a876((int)0x10c);
        uVar2 = (int)0x3ff & (u32)piVar1;
    }
    iVar3 = g_8c4a9c08 + g_8c4a9c00;
    dVar7 = in_xd4;

    dVar7 = 0.007812501848093234;

    if ((g_8c4a9bcc & 1) == 1) {
        iVar4 = (int)0x1e0;
    } else if (((g_8c4a9bcc & 1) == 1) || ((g_8c4a9bcc & 0x2c) == 0)) {
        iVar4 = (int)0xf0;
    } else {
        uVar6 = SUB84(dVar7, 0);
        if ((g_8c4a9bcc & 0x20) == 0) {
            iVar4 = (int)0xf0;
            iVar3 = iVar3 * 2;

            dVar7 = (double)CONCAT44((u32)g_8c207808, uVar6);

        } else {
            iVar4 = (int)0x1e0;
            dVar7 = in_xd4;

            dVar7 = (double)CONCAT44(uVar6, uVar6);

            iVar3 = iVar3 * 2;
        }
    }
    if ((((g_8c4a9bcc & 1) != 1) && ((g_8c4a9bcc & 0x2c) != 0)) && (((u32)piVar1 & 0x40000) != 0)) {
        uVar2 = uVar2 + 1;
    }

    iVar3 = (int)((float)(int)(uVar2 - iVar3) * (float)((u64)dVar7 >> 0x20));

    if (iVar4 < iVar3) {
        iVar3 = iVar3 - (g_8c4a9e9c >> 0x10);
    }
    *a0 = iVar3;
    return 0;
}

/*
 * shinobi_calls_update_fields_207832  0x8c207832
 * area name: in the shinobi library code range; behaviour name: its callees mostly do: calls_update_fields
 */
u32 shinobi_calls_update_fields_207832(u32 a0, u32 a1) {
    pvr_calls_update_fields_207502(g_8c2756b0, 3, a0, a1);
    return 0;
}

/*
 * shinobi_calls_update_fields_20784e  0x8c20784e
 * area name: in the shinobi library code range; behaviour name: its callees mostly do: calls_update_fields
 */
u32 shinobi_calls_update_fields_20784e(u32 a0, u32 a1) {
    pvr_calls_update_fields_207502(g_8c2756b0, 4, a0, a1);
    return 0;
}

/*
 * shinobi_calls_update_fields_20786a  0x8c20786a
 * area name: in the shinobi library code range; behaviour name: its callees mostly do: calls_update_fields
 * called by: ninja_uses_aica_reg_258604, pvr_25825a
 */
u32 shinobi_calls_update_fields_20786a(u32 a0, u32 a1) {
    pvr_calls_update_fields_207502(g_8c2756b0, 5, a0, a1);
    return 0;
}

/*
 * shinobi_calls_update_fields_207886  0x8c207886
 * area name: in the shinobi library code range; behaviour name: its callees mostly do: calls_update_fields
 */
u32 shinobi_calls_update_fields_207886(u32 a0, u32 a1) {
    pvr_calls_update_fields_207502(g_8c2756b0, 6, a0, a1);
    return 0;
}

/*
 * shinobi_calls_update_fields_2078a2  0x8c2078a2
 * area name: in the shinobi library code range; behaviour name: its callees mostly do: calls_update_fields
 */
u32 shinobi_calls_update_fields_2078a2(u32 a0, u32 a1) {
    pvr_calls_update_fields_207502(g_8c2756b0, 7, a0, a1);
    return 0;
}

/*
 * shinobi_calls_update_fields_2078be  0x8c2078be
 * area name: in the shinobi library code range; behaviour name: its callees mostly do: calls_update_fields
 * called by: ninja_uses_aica_reg_258604, pvr_25825a
 */
u32 shinobi_calls_update_fields_2078be(u32 a0) {
    pvr_calls_update_fields_207502(g_8c2756b0, 8, a0, 0);
    return 0;
}

/*
 * shinobi_calls_update_fields_2078d8  0x8c2078d8
 * area name: in the shinobi library code range; behaviour name: its callees mostly do: calls_update_fields
 * called by: ninja_uses_aica_reg_258604, pvr_25825a
 */
u32 shinobi_calls_update_fields_2078d8(u32 a0, u32 a1) {
    pvr_calls_update_fields_207502(g_8c2756b0, 9, a0, 0);
    return 0;
}

/*
 * pvr_write_saved_regs  0x8c2079a0
 * writes the saved PVR register values back to their registers
 * called by: kamui_set_display_mode_cfg, shinobi_draw_207da0
 */
u32 pvr_write_saved_regs(u32 unused_a0, u32 unused_a1, u32 a2, u32 a3) {
    u8 *puVar1;
    u32 uVar2;

    puVar1 = (&pvr_20a844);
    pvr_20a844(0x68, g_8c4a9e60);
    (*(code *)puVar1)(0x6c, g_8c4a9e64, a2, a3);
    (*(code *)puVar1)(0x5c, g_8c4a9e6c, a2, a3);
    (*(code *)puVar1)(0x4c, g_8c4a9e70, a2, a3);
    (*(code *)puVar1)((int)0x118, g_8c4a9ea8, a2, a3);
    (*(code *)puVar1)((int)0xf4, g_8c4a9eac, a2, a3);
    (*(code *)puVar1)(0x48, g_8c4a9e78, a2, a3);
    (*(code *)puVar1)(0x44, g_8c4a9e74 & 0xfffffffe, a2, a3);
    uVar2 = (*(code *)puVar1)((int)0xe8, g_8c4a9eb0 | 8, a2, a3);
    return uVar2;
}

/*
 * shinobi_scan_loop_2079fc  0x8c2079fc
 * area name: in the shinobi library code range; behaviour name: a loop that only reads
 * called by: pvr_display_regs_apply
 */
u32 shinobi_scan_loop_2079fc(void) {
    u32 in_r0;

    do {
    } while (g_8c4a9f1c == g_8c4a9f1c);
    return in_r0;
}

/*
 * kamui_set_video_mode_like  0x8c207a0c
 * sets video mode a0 (0..2) and stores it as the KAMUI VideoMode setting; 2 when out of range
 * called by: pvr_25825a
 * strings: "KAMUI"; "VideoMode"; "KAMUI"; "VideoMode"
 */
u32 kamui_set_video_mode_like(u32 a0, u32 a1, u32 unused_a2, u32 a3) {
    char *ar4_00;
    char *ar5_00;
    u32 ar6_00;

    kamui_init_defaults(a0, a1, unused_a2, a3);
    if (((int)a0 < 3) && (-1 < (int)a0)) {
        ar4_00 = "KAMUI";
        ar5_00 = "VideoMode";
        ar6_00 = a0 & 3;
        g_8c4a9bc8 = kamui_cfg_get("KAMUI", "VideoMode", ar6_00);
        shinobi_draw_206162(ar4_00, ar5_00, ar6_00, a3);
        return 0;
    }
    return 2;
}

/*
 * kamui_set_display_mode_cfg  0x8c207a9c
 * reads KAMUI DisplayMode, AntiAlias and Dither and sets the display mode
 * called by: ninja_uses_aica_reg_258604, pvr_25825a
 * strings: "KAMUI"; "DisplayMode"; "KAMUI"; "AntiAlias" ...
 */
int kamui_set_display_mode_cfg(u32 a0, int a1, u32 a2, u32 a3) {
    u32 uVar1;
    int iVar2;
    int iVar3;
    char *a5;
    u32 ar7_00;
    u32 uVar4;
    int iVar5;
    u32 uStack_34;
    u32 uStack_30;
    u32 uStack_2c;
    u32 uStack_28;
    int iStack_24;

    iVar5 = 0;
    ar7_00 = a3;
    kamui_fill_loop_21214e();
    uVar1 = kamui_cfg_get("KAMUI", "DisplayMode", a0);
    iVar2 = kamui_cfg_get("KAMUI", "AntiAlias", a3);
    a5 = "Dither";
    iVar3 = kamui_cfg_get("KAMUI", "Dither", a2);
    g_8c4a9bc8 = uVar1 & 3;
    if ((uVar1 & 0x42) == 0x42) {
        uStack_28 = uVar1;
        (*g_8c4a9e24)(&uStack_28, a5, a2, ar7_00);
        g_8c4a9bdc = iStack_24;
        if ((iStack_24 < 0) || (4 < iStack_24)) {
            g_8c4a9bdc = 1;
        }
    }
    if ((((a1 != 5) && (a1 != 4)) && (a1 != 3)) && ((a1 != 1 && (a1 != 0)))) {
        iVar5 = 1;
    }
    uVar4 = (u32)(iVar2 != 0);
    uStack_34 = (u32)(iVar3 != 0);
    if (iVar5 == 0) {
        g_8c4a9bd4 = uStack_34;
        if (uVar1 == 1) {
            iVar2 = 0x1e0;
            uStack_2c = 0x280;
            uStack_30 = 0;
            g_8c4a9ecc = 0x1e0;
        } else {
            if (((uVar1 & 1) == 1) || ((uVar1 & 0x2c) == 0)) {
                uStack_30 = 0;
            } else {
                uStack_30 = 1;
            }
            if ((uVar1 & 0x10) == 0) {
                uStack_2c = 0x140;
            } else {
                uStack_2c = 0x280;
            }
            if ((uVar1 & 0x20) == 0) {
                if ((uVar1 & 0x42) == 0x42) {
                    iVar2 = (int)(*(int *)(&g_8c4aa084 + g_8c4a9bdc * 4) +
                                  (u32)(*(int *)(&g_8c4aa084 + g_8c4a9bdc * 4) < 0)) >>
                            1;
                    g_8c4a9ecc = iVar2;
                } else {
                    iVar2 = 0xf0;
                    g_8c4a9ecc = iVar2;
                }
            } else {
                if ((uVar1 & 0x42) == 0x42) {
                    iVar2 = *(int *)(&g_8c4aa084 + g_8c4a9bdc * 4);
                } else {
                    iVar2 = 0x1e0;
                }
                g_8c4a9ecc = (int)(iVar2 + (u32)(iVar2 < 0)) >> 1;
            }
        }
        g_8c4a9bcc = uVar1;
        g_8c4a9bd0 = a1;
        g_8c4a9bd8 = uVar4;
        if (g_8c4a9bc8 == 1) {
            iVar5 = 0;
            ninja_draw_25eb60(0x280, 0x1e0, a2, ar7_00);
        } else if (g_8c4a9bc8 == 0) {
            iVar5 = 0;
            ninja_draw_25e884(0x280, 0x1e0);
        } else if (g_8c4a9bc8 == 2) {
            iVar5 = 0;
            ninja_draw_25e540(0x280, 0x1e0);
        } else {
            iVar5 = 1;
        }
        pvr_uses_libgcc_divide_helper_25dc60(uStack_2c, iVar2, a1, uStack_30);
        pvr_write_saved_regs(uStack_2c, iVar2, a1, uStack_30);
    }
    return iVar5;
}

/*
 * shinobi_draw_207d32  0x8c207d32
 * area name: in the shinobi library code range; behaviour name: mostly calls draw functions
 */
u32 shinobi_draw_207d32(u32 unused_a0, u32 unused_a1, u32 a2, u32 a3) {
    u8 *puVar1;
    int in_r0;
    u32 a5;

    puVar1 = (&pvr_20a844);
    if (in_r0 == 1) {
        pvr_20a844(0x44, g_8c4a9e74 & 0xfffffffe);
        a5 = g_8c4a9eb0 | 8;
    } else {
        pvr_20a844(0x44, g_8c4a9e74 & 0xfffffffe);
        a5 = g_8c4a9eb0;
    }
    (*(code *)puVar1)((int)0xe8, a5, a2, a3);
    (*(code *)puVar1)(0x44, g_8c4a9e74, a2, a3);
    return 0;
}

/*
 * shinobi_draw_207da0  0x8c207da0
 * area name: in the shinobi library code range; behaviour name: mostly calls draw functions
 */
u32 shinobi_draw_207da0(int a0, int a1) {
    u8 *puVar1;
    u32 ar4_00;
    int ar4_01;
    int ar5_00;
    u32 ar5_01;
    u32 ar6_00;
    u32 ar7_00;

    kamui_fill_loop_21214e();
    g_8c4a9bd4 = (u32)(a0 != 0);
    g_8c4a9bd8 = (u32)(a1 != 0);
    ar4_01 = (int)0x280;
    if (g_8c4a9bcc == 1) {
        ar5_00 = (int)0x1e0;
        ar7_00 = 0;
    } else {
        if (((g_8c4a9bcc & 1) == 1) || ((g_8c4a9bcc & 0x2c) == 0)) {
            ar7_00 = 0;
        } else {
            ar7_00 = 1;
        }
        if ((g_8c4a9bcc & 0x10) == 0) {
            ar4_01 = (int)0x140;
        }
        if ((g_8c4a9bcc & 0x20) == 0) {
            ar5_00 = (int)0xf0;
        } else {
            ar5_00 = (int)0x1e0;
        }
    }
    do {
    } while (g_8c4a9f1c == g_8c4a9f1c);
    ar6_00 = g_8c4a9bd0;
    pvr_uses_libgcc_divide_helper_25dc60(ar4_01, ar5_00, ar6_00, ar7_00);
    pvr_write_saved_regs(ar4_01, ar5_00, ar6_00, ar7_00);
    puVar1 = (&pvr_20a844);
    pvr_20a844(0x44, g_8c4a9e74 & 0xfffffffe);
    (*(code *)puVar1)((int)0xe8, g_8c4a9eb0, ar6_00, ar7_00);
    ar5_01 = g_8c4a9e74;
    ar4_00 = 0x44;
    (*(code *)puVar1)(0x44, ar5_01, ar6_00, ar7_00);
    shinobi_draw_205a40();
    (*(code *)(&ninja_draw_25d7c6))(g_8c4a9c18 >> 7, 0x8c4a9c18 [1] >> 7, 0x8c4a9c18 [2] >> 7, 0x8c4a9c18 [3] >> 7,
                                    g_8c4a9c14);
    g_8c4a9e54 = 1;
    do {
    } while (g_8c4a9f1c == g_8c4a9f1c);
    return 0;
}

/*
 * shinobi_draw_207f80  0x8c207f80
 * area name: in the shinobi library code range; behaviour name: mostly calls draw functions
 */
u32 shinobi_draw_207f80(void) {
    u8 *puVar1;

    puVar1 = (&pvr_20a844);
    pvr_20a844(0x44, g_8c4a9e74 & 0xfffffffe);
    (*(code *)puVar1)((int)0xe8, g_8c4a9eb0 | 8);
    kamui_fill_loop_21214e();
    shinobi_draw_205a40();
    (*(code *)puVar1)(0x44, g_8c4a9e74 & 0xfffffffe);
    (*(code *)puVar1)((int)0xe8, g_8c4a9eb0 | 8);
    do {
    } while (g_8c4a9f1c == g_8c4a9f1c);
    g_8c4a9e54 = 1;
    return 0;
}

/*
 * alt_entry_207f84  0x8c207f84
 * probably an entry 4 bytes into 8c207f80: it reads registers that code sets before it
 */
u32 alt_entry_207f84(u32 unused_a0, u32 unused_a1, u32 a2, u32 a3) {
    u8 *puVar1;
    u32 ar5_00;
    u32 in_r3;
    int ar4_00;

    puVar1 = (&pvr_20a844);
    pvr_20a844(0x44, g_8c4a9e74 & in_r3);
    ar4_00 = (int)0xe8;
    ar5_00 = g_8c4a9eb0 | 8;
    (*(code *)puVar1)(ar4_00, ar5_00, a2, a3);
    kamui_fill_loop_21214e();
    shinobi_draw_205a40();
    (*(code *)puVar1)(0x44, g_8c4a9e74 & 0xfffffffe, a2, a3);
    (*(code *)puVar1)((int)0xe8, g_8c4a9eb0 | 8, a2, a3);
    do {
    } while (g_8c4a9f1c == g_8c4a9f1c);
    g_8c4a9e54 = 1;
    return 0;
}

/*
 * shinobi_calc_207fe4  0x8c207fe4
 * area name: in the shinobi library code range; behaviour name: integer arithmetic on its arguments
 */
u32 shinobi_calc_207fe4(int a0, u32 unused_a1, u32 a2, u32 a3) {
    u8 *puVar1;
    int *piVar2;
    int *piVar3;
    u32 *puVar4;
    int in_r1;
    int *in_r2;
    u32 uVar5;
    int iVar6;
    u32 uVar7;
    u32 uVar8;
    int unaff_r14;

    piVar2 = 0x8c4a9bfc;
    puVar1 = (&pvr_20a844);
    uVar8 = 0;
    if (in_r1 < *in_r2 + a0) {
        if (g_8c4a9bfc != a0) {
            g_8c4a9bfc = a0;
            piVar3 = 0x8c4a9eb4;
            g_8c4a9eb4 = g_8c4a9c04 + *piVar2;
            (*(code *)puVar1)((int)0xec, *piVar3, a2, a3);
        }
    } else {
        uVar8 = 0x12;
    }
    puVar4 = 0x8c4a9eb8;
    if ((g_8c4a9c08 + unaff_r14 < 1) && (g_8c4a9c0c + unaff_r14 < 1)) {
        uVar8 = 0x12;
    } else if (g_8c4a9c00 != unaff_r14) {
        g_8c4a9eb8 = g_8c4a9c08 + unaff_r14 | (g_8c4a9c0c + unaff_r14) * 0x10000;
        (*(code *)puVar1)((int)0xf0, *puVar4, a2, a3);
        uVar7 = g_8c4a9e6c & 0xfff003ff;
        if (unaff_r14 < 1) {
            if ((g_8c4a9bcc & 1) == 1) {
                uVar5 = (u32)0x1de;
            } else if ((g_8c4a9bcc & 0x42) == 0x42) {
                iVar6 = *(int *)(0x8c4aa084 + g_8c4a9bdc * 4);
                uVar5 = ((int)(iVar6 + (u32)(iVar6 < 0)) >> 1) - 2;
            } else {
                uVar5 = (u32)0xee;
            }
        } else {
            iVar6 = unaff_r14;
            if (unaff_r14 <= g_8c4a9be8) {
                iVar6 = g_8c4a9be8;
            }
            uVar5 = g_8c4a9bf0 - iVar6;
            if (g_8c4a9bf0 < unaff_r14 + uVar5) {
                uVar5 = g_8c4a9bf0 - g_8c4a9be8;
            }
            if (g_8c4a9bf0 < uVar5) {
                g_8c4a9bf0 = uVar5;
            }
        }
        g_8c4a9c00 = unaff_r14;
        g_8c4a9e6c = (uVar5 & (int)0x3ff) << 10 | uVar7;
        (*(code *)puVar1)(0x44, g_8c4a9e74 & 0xfffffffe, a2, a3);
        (*(code *)puVar1)(0x5c, g_8c4a9e6c, a2, a3);
        (*(code *)puVar1)(0x44, g_8c4a9e74, a2, a3);
    }
    return uVar8;
}

/*
 * ta_fifo_2081e0  0x8c2081e0
 * called by: shinobi_draw_208980, shinobi_draw_208b00, shinobi_draw_208e00, shinobi_draw_2090e0, shinobi_draw_209380,
 * shinobi_draw_209a40, shinobi_draw_209c00, shinobi_draw_209e80 (+7 more)
 */
u32 ta_fifo_2081e0(u32 a0, int a1, int a2) {
    u32 *puVar1;
    u32 in_r0;

    puVar1 = 0x8c4a9d58;
    g_8c4a9d58 = (a0 & 7) << 0x18;
    if (a2 != 0) {
        in_r0 = *puVar1 | 0x10000000;
        *puVar1 = in_r0;
    }
    if (a1 != 0) {
        g_8c4a9d58 = g_8c4a9d58 | 0x8000000;
    }
    return in_r0;
}

/*
 * ta_param_word_count  0x8c20820a
 * number of colour words a polygon header with flags a0 needs
 * called by: shinobi_draw_208980, shinobi_draw_208b00, shinobi_draw_208e00, shinobi_draw_2090e0, shinobi_draw_209380,
 * shinobi_draw_209a40, shinobi_draw_209c00, shinobi_draw_209e80 (+7 more)
 */
int ta_param_word_count(u32 a0, u32 a1, u32 a2) {
    int iVar1;

    iVar1 = 1;
    if ((0x2000000 & a0) != 0) {
        iVar1 = 2;
        if ((0x1000000 & a0) != 0) {
            iVar1 = 3;
        }
        if ((a0 & 0x400000) == 0) {
            iVar1 = iVar1 + 1;
        }
    }
    return iVar1;
}

/*
 * ta_param_push1_if  0x8c208228
 * appends a2 to the polygon parameter buffer (0x8c4a9c50) when a0 has bit 24; returns the new count
 * called by: shinobi_draw_208980, shinobi_draw_208b00, shinobi_draw_208e00, shinobi_draw_2090e0, shinobi_draw_209380,
 * shinobi_draw_209a40, shinobi_draw_209c00, shinobi_draw_209e80 (+2 more)
 */
int ta_param_push1_if(u32 a0, int a1, u32 a2) {
    int iVar1;

    if ((a0 & 0x1000000) != 0) {
        iVar1 = a1 * 4;
        a1 = a1 + 1;
        *(u32 *)(0x8c4a9c50 + iVar1) = a2;
    }
    return a1;
}

/*
 * ta_param_push_color_if  0x8c20823c
 * appends the packed colour a2 to the polygon parameter buffer when a0 has bit 25
 * called by: shinobi_draw_208980, shinobi_draw_208e00, shinobi_draw_209380, shinobi_draw_209a40, shinobi_draw_209e80
 */
int ta_param_push_color_if(u32 a0, int a1, u32 a2) {
    int iVar1;
    int iVar2;

    iVar1 = 0x8c4a9c50;
    if ((0x2000000 & a0) != 0) {
        iVar2 = a1;
        if ((a0 & 0x400000) == 0) {
            *(u32 *)(0x8c4a9c50 + a1 * 4) = 0xffff0000 & a2;
            a2 = a2 << 0x10;
            iVar2 = a1 + 1;
        }
        a1 = iVar2 + 1;
        *(u32 *)(iVar1 + iVar2 * 4) = a2;
    }
    return a1;
}

/*
 * ta_param_push2_if  0x8c208270
 * appends a2, a3 to the polygon parameter buffer when a0 has bit 25; returns the new count
 * called by: shinobi_draw_208b00, shinobi_draw_2090e0, shinobi_draw_209c00, ta_draw_2087e4, ta_draw_2098c0
 */
int ta_param_push2_if(u32 a0, int a1, u32 a2, u32 a3) {
    int iVar1;
    int iVar2;

    iVar1 = 0x8c4a9c50;
    if ((a0 & 0x2000000) != 0) {
        iVar2 = a1 + 1;
        *(u32 *)(0x8c4a9c50 + a1 * 4) = a2;
        a1 = a1 + 2;
        *(u32 *)(iVar1 + iVar2 * 4) = a3;
    }
    return a1;
}

/*
 * ta_default_triangle_init  0x8c20828c
 * sets the default polygon header and three vertices (positions and opaque black colour) used by the triangle senders
 * called by: kamui_init_defaults
 */
u32 ta_default_triangle_init(u32 a0) {
    u32 *puVar1;
    u32 uVar2;
    u32 *puVar3;
    u32 uVar4;
    u32 *puVar5;
    u32 uVar6;
    u32 uVar7;

    g_8c4a9c50 = 0x80800000;
    puVar1 = 0x8c4a9c54;
    g_8c4a9c54 = 0x20800000;
    g_8c4a9c58 = 0;
    puVar3 = 0x8c4a9c5c;
    uVar2 = 0x40000000;
    g_8c4a9c5c = 0x40000000;
    puVar5 = 0x8c4a9c60;
    uVar4 = 0x43820000;
    g_8c4a9c60 = 0x43820000;
    uVar6 = 0x3727c5ac;
    puVar1[4] = 0x3727c5ac;
    uVar7 = 0xff000000;
    puVar3[3] = 0xff000000;
    puVar5[3] = 0x43160000;
    g_8c4a9c70 = uVar2;
    puVar3[6] = uVar6;
    puVar5[6] = uVar7;
    puVar1 = 0x8c4a9c7c;
    g_8c4a9c7c = 0x440c0000;
    g_8c4a9c80 = uVar4;
    puVar5[9] = uVar6;
    g_8c4a9c88 = uVar7;
    g_8c4a9d5c = puVar1[-6];
    g_8c4a9d58 = 0x1000000;
    return 0;
}

/*
 * ta_send_triangle_color18  0x8c208380
 * copies three vertices (position and the packed colour at +0x18) and sends the triangle to the TA FIFO
 */
u32 ta_send_triangle_color18(int *a0) {
    u32 ar4_00;
    int iVar1;
    int iStack_14;
    int aiStack_10[2];

    iVar1 = *a0;
    iStack_14 = a0[1];
    aiStack_10[0] = a0[2];
    g_8c4a9c50 = g_8c4a9d4c;
    g_8c4a9c54 = g_8c4a9d50;
    g_8c4a9c58 = g_8c4a9d54;
    g_8c4a9c5c = *(u32 *)(iVar1 + 4);
    g_8c4a9c60 = *(u32 *)(iVar1 + 8);
    g_8c4a9c64 = *(u32 *)(iVar1 + 0xc);
    g_8c4a9c68 = *(u32 *)(iVar1 + 0x18);
    g_8c4a9c6c = *(u32 *)(iStack_14 + 4);
    g_8c4a9c70 = *(u32 *)(iStack_14 + 8);
    g_8c4a9c74 = *(u32 *)(iStack_14 + 0xc);
    g_8c4a9c78 = *(u32 *)(iStack_14 + 0x18);
    g_8c4a9c7c = *(u32 *)(aiStack_10[0] + 4);
    g_8c4a9c80 = *(u32 *)(aiStack_10[0] + 8);
    g_8c4a9c84 = *(u32 *)(aiStack_10[0] + 0xc);
    g_8c4a9c88 = *(u32 *)(aiStack_10[0] + 0x18);
    g_8c4a9d48 = 0x3c;
    ar4_00 = ta_param_word_count(g_8c4a9d4c, 0x3c, &iStack_14);
    ta_fifo_2081e0(ar4_00, 0, 0);
    g_8c4a9d5c = *(u32 *)(iVar1 + 0xc);
    return 0;
}

/*
 * ta_send_triangle_rgba_floats  0x8c208484
 * copies three vertices, packing the float ARGB at +0x10..+0x1c into colour words, and sends the triangle
 */
u32 ta_send_triangle_rgba_floats(int *a0) {
    u32 ar4_00;
    int iVar1;
    int iStack_14;
    int aiStack_10[2];

    iVar1 = *a0;
    iStack_14 = a0[1];
    aiStack_10[0] = a0[2];
    g_8c4a9c50 = g_8c4a9d4c;
    g_8c4a9c54 = g_8c4a9d50;
    g_8c4a9c58 = g_8c4a9d54;
    g_8c4a9c5c = *(u32 *)(iVar1 + 4);
    g_8c4a9c60 = *(u32 *)(iVar1 + 8);
    g_8c4a9c64 = *(u32 *)(iVar1 + 0xc);
    g_8c4a9c68 = (int)(*(float *)(iVar1 + 0x10) * 255.0) << 0x18 | (int)(*(float *)(iVar1 + 0x14) * 255.0) << 0x10 |
                 (int)(*(float *)(iVar1 + 0x18) * 255.0) << 8 | (int)(*(float *)(iVar1 + 0x1c) * 255.0);
    g_8c4a9c6c = *(u32 *)(iStack_14 + 4);
    g_8c4a9c70 = *(u32 *)(iStack_14 + 8);
    g_8c4a9c74 = *(u32 *)(iStack_14 + 0xc);
    g_8c4a9c78 = (int)(*(float *)(iStack_14 + 0x10) * 255.0) << 0x18 |
                 (int)(*(float *)(iStack_14 + 0x14) * 255.0) << 0x10 |
                 (int)(*(float *)(iStack_14 + 0x18) * 255.0) << 8 | (int)(*(float *)(iStack_14 + 0x1c) * 255.0);
    g_8c4a9c7c = *(u32 *)(aiStack_10[0] + 4);
    g_8c4a9c80 = *(u32 *)(aiStack_10[0] + 8);
    g_8c4a9c84 = *(u32 *)(aiStack_10[0] + 0xc);
    g_8c4a9c88 = (int)(*(float *)(aiStack_10[0] + 0x10) * 255.0) << 0x18 |
                 (int)(*(float *)(aiStack_10[0] + 0x14) * 255.0) << 0x10 |
                 (int)(*(float *)(aiStack_10[0] + 0x18) * 255.0) << 8 | (int)(*(float *)(aiStack_10[0] + 0x1c) * 255.0);
    g_8c4a9d48 = 0x3c;
    ar4_00 = ta_param_word_count(g_8c4a9d4c, 0x3c, &iStack_14);
    ta_fifo_2081e0(ar4_00, 0, 0);
    g_8c4a9d5c = *(u32 *)(iVar1 + 0xc);
    return 0;
}

/*
 * ta_send_triangle_gray18  0x8c208680
 * copies three vertices, turning the float at +0x18 into a grey colour word, and sends the triangle
 */
u32 ta_send_triangle_gray18(int *a0) {
    u32 ar4_00;
    int iVar1;
    int *a7;
    int iStack_14;
    int aiStack_10[2];

    iVar1 = *a0;
    a7 = &iStack_14;
    iStack_14 = a0[1];
    aiStack_10[0] = a0[2];
    g_8c4a9c50 = g_8c4a9d4c;
    g_8c4a9c54 = g_8c4a9d50;
    g_8c4a9c58 = g_8c4a9d54;
    g_8c4a9c5c = *(u32 *)(iVar1 + 4);
    g_8c4a9c60 = *(u32 *)(iVar1 + 8);
    g_8c4a9c64 = *(u32 *)(iVar1 + 0xc);
    g_8c4a9c68 = (u32)(*(float *)(iVar1 + 0x18) * 255.0);
    g_8c4a9c68 = g_8c4a9c68 << 0x18 | g_8c4a9c68 << 0x10 | g_8c4a9c68 << 8 | g_8c4a9c68;
    g_8c4a9c6c = *(u32 *)(iStack_14 + 4);
    g_8c4a9c70 = *(u32 *)(iStack_14 + 8);
    g_8c4a9c74 = *(u32 *)(iStack_14 + 0xc);
    g_8c4a9c78 = (u32)(*(float *)(iStack_14 + 0x18) * 255.0);
    g_8c4a9c78 = g_8c4a9c78 << 0x18 | g_8c4a9c78 << 0x10 | g_8c4a9c78 << 8 | g_8c4a9c78;
    g_8c4a9c7c = *(u32 *)(aiStack_10[0] + 4);
    g_8c4a9c80 = *(u32 *)(aiStack_10[0] + 8);
    g_8c4a9c84 = *(u32 *)(aiStack_10[0] + 0xc);
    g_8c4a9c88 = (u32)(*(float *)(aiStack_10[0] + 0x18) * 255.0);
    g_8c4a9c88 = g_8c4a9c88 << 0x18 | g_8c4a9c88 << 0x10 | g_8c4a9c88 << 8 | g_8c4a9c88;
    g_8c4a9d48 = 0x3c;
    ar4_00 = ta_param_word_count(g_8c4a9d4c, 0x3c, aiStack_10);
    ta_fifo_2081e0(ar4_00, 0, 0);
    g_8c4a9d5c = *(u32 *)(iVar1 + 0xc);
    return 0;
}

/*
 * ta_draw_2087e4  0x8c2087e4
 * area name: sits between ta functions (same compilation unit); behaviour name: mostly calls draw functions
 */
u32 ta_draw_2087e4(int *a0) {
    int iVar1;
    u32 uVar2;
    int iVar3;
    int iVar4;
    int iVar5;
    u32 uVar6;
    u32 a7;
    int a5;

    uVar2 = g_8c4a9d4c;
    iVar4 = *a0;
    iVar3 = a0[1];
    iVar5 = a0[2];
    g_8c4a9c50 = g_8c4a9d4c;
    g_8c4a9c54 = g_8c4a9d50;
    g_8c4a9c58 = g_8c4a9d54;
    g_8c4a9c5c = *(u32 *)(iVar4 + 4);
    g_8c4a9c60 = *(u32 *)(iVar4 + 8);
    g_8c4a9c64 = *(u32 *)(iVar4 + 0xc);
    uVar6 = *(u32 *)(iVar4 + 0x14);
    iVar1 = ta_param_push2_if(g_8c4a9d4c, 6, *(u32 *)(iVar4 + 0x10), uVar6);
    *(u32 *)(&g_8c4a9c50 + iVar1 * 4) = *(u32 *)(iVar4 + 0x18);
    iVar1 = ta_param_push1_if(uVar2, iVar1 + 1, *(u32 *)(iVar4 + 0x1c));
    *(u32 *)(&g_8c4a9c50 + iVar1 * 4) = *(u32 *)(iVar3 + 4);
    *(u32 *)(&g_8c4a9c50 + (iVar1 + 1) * 4) = *(u32 *)(iVar3 + 8);
    *(u32 *)(&g_8c4a9c50 + (iVar1 + 2) * 4) = *(u32 *)(iVar3 + 0xc);
    uVar6 = *(u32 *)(iVar3 + 0x14);
    iVar1 = ta_param_push2_if(uVar2, iVar1 + 3, *(u32 *)(iVar3 + 0x10), uVar6);
    *(u32 *)(&g_8c4a9c50 + iVar1 * 4) = *(u32 *)(iVar3 + 0x18);
    iVar3 = ta_param_push1_if(uVar2, iVar1 + 1, *(u32 *)(iVar3 + 0x1c));
    *(u32 *)(&g_8c4a9c50 + iVar3 * 4) = *(u32 *)(iVar5 + 4);
    *(u32 *)(&g_8c4a9c50 + (iVar3 + 1) * 4) = *(u32 *)(iVar5 + 8);
    *(u32 *)(&g_8c4a9c50 + (iVar3 + 2) * 4) = *(u32 *)(iVar5 + 0xc);
    a7 = *(u32 *)(iVar5 + 0x14);
    iVar1 = iVar5;
    iVar3 = ta_param_push2_if(uVar2, iVar3 + 3, *(u32 *)(iVar5 + 0x10), a7);
    a5 = iVar3 + 1;
    *(u32 *)(&g_8c4a9c50 + iVar3 * 4) = *(u32 *)(iVar5 + 0x18);
    uVar6 = *(u32 *)(iVar5 + 0x1c);
    g_8c4a9d48 = ta_param_push1_if(uVar2, a5, uVar6);
    g_8c4a9d48 = g_8c4a9d48 << 2;
    uVar2 = ta_param_word_count(uVar2, a5, uVar6);
    ta_fifo_2081e0(uVar2, 0, 0);
    g_8c4a9d5c = *(u32 *)(iVar4 + 0xc);
    return 0;
}

/*
 * shinobi_draw_208980  0x8c208980
 * area name: in the shinobi library code range; behaviour name: mostly calls draw functions
 */
u32 shinobi_draw_208980(int *a0) {
    int iVar1;
    u32 uVar2;
    int iVar3;
    int ain0;
    int iVar4;
    u32 a6;

    uVar2 = g_8c4a9d4c;
    ain0 = *a0;
    iVar3 = a0[1];
    iVar4 = a0[2];
    g_8c4a9c50 = g_8c4a9d4c;
    g_8c4a9c54 = g_8c4a9d50;
    g_8c4a9c58 = g_8c4a9d54;
    g_8c4a9c5c = *(u32 *)(ain0 + 4);
    g_8c4a9c60 = *(u32 *)(ain0 + 8);
    g_8c4a9c64 = *(u32 *)(ain0 + 0xc);
    iVar1 = ta_param_push_color_if(g_8c4a9d4c, 6, *(u32 *)(ain0 + 0x10));
    *(u32 *)(&g_8c4a9c50 + iVar1 * 4) = *(u32 *)(ain0 + 0x18);
    iVar1 = ta_param_push1_if(uVar2, iVar1 + 1, *(u32 *)(ain0 + 0x1c));
    *(u32 *)(&g_8c4a9c50 + iVar1 * 4) = *(u32 *)(iVar3 + 4);
    *(u32 *)(&g_8c4a9c50 + (iVar1 + 1) * 4) = *(u32 *)(iVar3 + 8);
    *(u32 *)(&g_8c4a9c50 + (iVar1 + 2) * 4) = *(u32 *)(iVar3 + 0xc);
    iVar1 = ta_param_push_color_if(uVar2, iVar1 + 3, *(u32 *)(iVar3 + 0x10));
    *(u32 *)(&g_8c4a9c50 + iVar1 * 4) = *(u32 *)(iVar3 + 0x18);
    iVar1 = ta_param_push1_if(uVar2, iVar1 + 1, *(u32 *)(ain0 + 0x1c));
    *(u32 *)(&g_8c4a9c50 + iVar1 * 4) = *(u32 *)(iVar4 + 4);
    *(u32 *)(&g_8c4a9c50 + (iVar1 + 1) * 4) = *(u32 *)(iVar4 + 8);
    *(u32 *)(&g_8c4a9c50 + (iVar1 + 2) * 4) = *(u32 *)(iVar4 + 0xc);
    iVar1 = ta_param_push_color_if(uVar2, iVar1 + 3, *(u32 *)(iVar4 + 0x10));
    iVar3 = iVar1 + 1;
    *(u32 *)(&g_8c4a9c50 + iVar1 * 4) = *(u32 *)(iVar4 + 0x18);
    a6 = *(u32 *)(ain0 + 0x1c);
    g_8c4a9d48 = ta_param_push1_if(uVar2, iVar3, a6);
    g_8c4a9d48 = g_8c4a9d48 << 2;
    uVar2 = ta_param_word_count(uVar2, iVar3, a6);
    ta_fifo_2081e0(uVar2, 0, 0);
    g_8c4a9d5c = *(u32 *)(ain0 + 0xc);
    return 0;
}

/*
 * shinobi_draw_208b00  0x8c208b00
 * area name: in the shinobi library code range; behaviour name: mostly calls draw functions
 */
u32 shinobi_draw_208b00(int *a0) {
    int iVar1;
    u32 uVar2;
    int iVar3;
    int iVar4;
    int iVar5;
    u32 uVar6;
    float fVar7;
    double in_dr2;
    float in_fr15;
    u32 in_fr14;
    int iVar8;
    int iVar9;
    int iVar10;
    u32 uVar11;
    int iVar12;
    char cVar13;
    char cVar14;

    uVar2 = g_8c4a9d4c;
    cVar14 = '\0';
    cVar13 = '\0';
    iVar4 = *a0;
    iVar3 = a0[1];
    iVar5 = a0[2];
    g_8c4a9c50 = g_8c4a9d4c;
    g_8c4a9c54 = g_8c4a9d50;
    g_8c4a9c58 = g_8c4a9d54;
    g_8c4a9c5c = *(u32 *)(iVar4 + 4);
    g_8c4a9c60 = *(u32 *)(iVar4 + 8);
    g_8c4a9c64 = *(u32 *)(iVar4 + 0xc);
    uVar6 = *(u32 *)(iVar4 + 0x14);
    iVar1 = ta_param_push2_if(g_8c4a9d4c, 6, *(u32 *)(iVar4 + 0x10), uVar6);
    if (cVar14 == '\0') {
        in_fr15 = 255.0;
        in_dr2 = (double)CONCAT44((int)((u64)in_dr2 >> 0x20), *(u32 *)(iVar4 + 0x20));
    }
    if (cVar13 == '\0') {
        in_dr2 = (double)CONCAT44((int)((u64)in_dr2 >> 0x20), SUB84(in_dr2, 0) * in_fr15);
    } else {
        in_dr2 = in_dr2 * (double)CONCAT44(in_fr14, in_fr15);
    }
    if (cVar13 == '\0') {
        iVar8 = (int)SUB84(in_dr2, 0);
    } else {
        iVar8 = (int)in_dr2;
    }
    if (cVar14 == '\0') {
        in_dr2 = (double)CONCAT44((int)((u64)in_dr2 >> 0x20), *(u32 *)(iVar4 + 0x24));
    }
    if (cVar13 == '\0') {
        fVar7 = SUB84(in_dr2, 0) * in_fr15;
        in_dr2 = (double)CONCAT44((int)((u64)in_dr2 >> 0x20), fVar7);
        iVar9 = (int)fVar7;
    } else {
        in_dr2 = in_dr2 * (double)CONCAT44(in_fr14, in_fr15);
        iVar9 = (int)in_dr2;
    }
    if (cVar14 == '\0') {
        in_dr2 = (double)CONCAT44((int)((u64)in_dr2 >> 0x20), *(u32 *)(iVar4 + 0x28));
    }
    if (cVar13 == '\0') {
        fVar7 = SUB84(in_dr2, 0) * in_fr15;
        in_dr2 = (double)CONCAT44((int)((u64)in_dr2 >> 0x20), fVar7);
        iVar10 = (int)fVar7;
    } else {
        in_dr2 = in_dr2 * (double)CONCAT44(in_fr14, in_fr15);
        iVar10 = (int)in_dr2;
    }
    if (cVar14 == '\0') {
        in_dr2 = (double)CONCAT44((int)((u64)in_dr2 >> 0x20), *(u32 *)(iVar4 + 0x2c));
    }
    if (cVar13 == '\0') {
        fVar7 = SUB84(in_dr2, 0) * in_fr15;
        in_dr2 = (double)CONCAT44((int)((u64)in_dr2 >> 0x20), fVar7);
        uVar11 = (u32)fVar7;
    } else {
        in_dr2 = in_dr2 * (double)CONCAT44(in_fr14, in_fr15);
        uVar11 = (u32)in_dr2;
    }
    *(u32 *)(&g_8c4a9c50 + iVar1 * 4) = iVar8 << 0x18 | iVar9 << 0x10 | iVar10 << 8 | uVar11;
    if (cVar14 == '\0') {
        in_dr2 = (double)CONCAT44((int)((u64)in_dr2 >> 0x20), *(u32 *)(iVar4 + 0x30));
    }
    if (cVar13 == '\0') {
        fVar7 = SUB84(in_dr2, 0) * in_fr15;
        in_dr2 = (double)CONCAT44((int)((u64)in_dr2 >> 0x20), fVar7);
        iVar8 = (int)fVar7;
    } else {
        in_dr2 = in_dr2 * (double)CONCAT44(in_fr14, in_fr15);
        iVar8 = (int)in_dr2;
    }
    if (cVar14 == '\0') {
        in_dr2 = (double)CONCAT44((int)((u64)in_dr2 >> 0x20), *(u32 *)(iVar4 + 0x34));
    }
    if (cVar13 == '\0') {
        fVar7 = SUB84(in_dr2, 0) * in_fr15;
        in_dr2 = (double)CONCAT44((int)((u64)in_dr2 >> 0x20), fVar7);
        iVar9 = (int)fVar7;
    } else {
        in_dr2 = in_dr2 * (double)CONCAT44(in_fr14, in_fr15);
        iVar9 = (int)in_dr2;
    }
    if (cVar14 == '\0') {
        in_dr2 = (double)CONCAT44((int)((u64)in_dr2 >> 0x20), *(u32 *)(iVar4 + 0x38));
    }
    if (cVar13 == '\0') {
        in_dr2 = (double)CONCAT44((int)((u64)in_dr2 >> 0x20), SUB84(in_dr2, 0) * in_fr15);
    } else {
        in_dr2 = in_dr2 * (double)CONCAT44(in_fr14, in_fr15);
    }
    if (cVar13 == '\0') {
        iVar10 = (int)SUB84(in_dr2, 0);
    } else {
        iVar10 = (int)in_dr2;
    }
    if (cVar14 == '\0') {
        in_dr2 = (double)CONCAT44((int)((u64)in_dr2 >> 0x20), *(u32 *)(iVar4 + 0x3c));
    }
    if (cVar13 == '\0') {
        in_dr2 = (double)CONCAT44((int)((u64)in_dr2 >> 0x20), SUB84(in_dr2, 0) * in_fr15);
    } else {
        in_dr2 = in_dr2 * (double)CONCAT44(in_fr14, in_fr15);
    }
    if (cVar13 == '\0') {
        uVar11 = (u32)SUB84(in_dr2, 0);
    } else {
        uVar11 = (u32)in_dr2;
    }
    iVar1 = ta_param_push1_if(uVar2, iVar1 + 1, iVar8 << 0x18 | iVar9 << 0x10 | iVar10 << 8 | uVar11);
    *(u32 *)(&g_8c4a9c50 + iVar1 * 4) = *(u32 *)(iVar3 + 4);
    *(u32 *)(&g_8c4a9c50 + (iVar1 + 1) * 4) = *(u32 *)(iVar3 + 8);
    *(u32 *)(&g_8c4a9c50 + (iVar1 + 2) * 4) = *(u32 *)(iVar3 + 0xc);
    uVar6 = *(u32 *)(iVar3 + 0x14);
    iVar1 = ta_param_push2_if(uVar2, iVar1 + 3, *(u32 *)(iVar3 + 0x10), uVar6);
    if (cVar14 == '\0') {
        in_dr2 = (double)CONCAT44((int)((u64)in_dr2 >> 0x20), *(u32 *)(iVar3 + 0x20));
    }
    if (cVar13 == '\0') {
        in_dr2 = (double)CONCAT44((int)((u64)in_dr2 >> 0x20), SUB84(in_dr2, 0) * in_fr15);
    } else {
        in_dr2 = in_dr2 * (double)CONCAT44(in_fr14, in_fr15);
    }
    if (cVar13 == '\0') {
        iVar8 = (int)SUB84(in_dr2, 0);
    } else {
        iVar8 = (int)in_dr2;
    }
    if (cVar14 == '\0') {
        in_dr2 = (double)CONCAT44((int)((u64)in_dr2 >> 0x20), *(u32 *)(iVar3 + 0x24));
    }
    if (cVar13 == '\0') {
        fVar7 = SUB84(in_dr2, 0) * in_fr15;
        in_dr2 = (double)CONCAT44((int)((u64)in_dr2 >> 0x20), fVar7);
        iVar9 = (int)fVar7;
    } else {
        in_dr2 = in_dr2 * (double)CONCAT44(in_fr14, in_fr15);
        iVar9 = (int)in_dr2;
    }
    if (cVar14 == '\0') {
        in_dr2 = (double)CONCAT44((int)((u64)in_dr2 >> 0x20), *(u32 *)(iVar3 + 0x28));
    }
    if (cVar13 == '\0') {
        fVar7 = SUB84(in_dr2, 0) * in_fr15;
        in_dr2 = (double)CONCAT44((int)((u64)in_dr2 >> 0x20), fVar7);
        iVar10 = (int)fVar7;
    } else {
        in_dr2 = in_dr2 * (double)CONCAT44(in_fr14, in_fr15);
        iVar10 = (int)in_dr2;
    }
    if (cVar14 == '\0') {
        in_dr2 = (double)CONCAT44((int)((u64)in_dr2 >> 0x20), *(u32 *)(iVar3 + 0x2c));
    }
    if (cVar13 == '\0') {
        fVar7 = SUB84(in_dr2, 0) * in_fr15;
        in_dr2 = (double)CONCAT44((int)((u64)in_dr2 >> 0x20), fVar7);
        uVar11 = (u32)fVar7;
    } else {
        in_dr2 = in_dr2 * (double)CONCAT44(in_fr14, in_fr15);
        uVar11 = (u32)in_dr2;
    }
    *(u32 *)(&g_8c4a9c50 + iVar1 * 4) = iVar8 << 0x18 | iVar9 << 0x10 | iVar10 << 8 | uVar11;
    if (cVar14 == '\0') {
        in_dr2 = (double)CONCAT44((int)((u64)in_dr2 >> 0x20), *(u32 *)(iVar3 + 0x30));
    }
    if (cVar13 == '\0') {
        fVar7 = SUB84(in_dr2, 0) * in_fr15;
        in_dr2 = (double)CONCAT44((int)((u64)in_dr2 >> 0x20), fVar7);
        iVar8 = (int)fVar7;
    } else {
        in_dr2 = in_dr2 * (double)CONCAT44(in_fr14, in_fr15);
        iVar8 = (int)in_dr2;
    }
    if (cVar14 == '\0') {
        in_dr2 = (double)CONCAT44((int)((u64)in_dr2 >> 0x20), *(u32 *)(iVar3 + 0x34));
    }
    if (cVar13 == '\0') {
        fVar7 = SUB84(in_dr2, 0) * in_fr15;
        in_dr2 = (double)CONCAT44((int)((u64)in_dr2 >> 0x20), fVar7);
        iVar9 = (int)fVar7;
    } else {
        in_dr2 = in_dr2 * (double)CONCAT44(in_fr14, in_fr15);
        iVar9 = (int)in_dr2;
    }
    if (cVar14 == '\0') {
        in_dr2 = (double)CONCAT44((int)((u64)in_dr2 >> 0x20), *(u32 *)(iVar3 + 0x38));
    }
    if (cVar13 == '\0') {
        in_dr2 = (double)CONCAT44((int)((u64)in_dr2 >> 0x20), SUB84(in_dr2, 0) * in_fr15);
    } else {
        in_dr2 = in_dr2 * (double)CONCAT44(in_fr14, in_fr15);
    }
    if (cVar13 == '\0') {
        iVar10 = (int)SUB84(in_dr2, 0);
    } else {
        iVar10 = (int)in_dr2;
    }
    if (cVar14 == '\0') {
        in_dr2 = (double)CONCAT44((int)((u64)in_dr2 >> 0x20), *(u32 *)(iVar3 + 0x3c));
    }
    if (cVar13 == '\0') {
        in_dr2 = (double)CONCAT44((int)((u64)in_dr2 >> 0x20), SUB84(in_dr2, 0) * in_fr15);
    } else {
        in_dr2 = in_dr2 * (double)CONCAT44(in_fr14, in_fr15);
    }
    if (cVar13 == '\0') {
        uVar11 = (u32)SUB84(in_dr2, 0);
    } else {
        uVar11 = (u32)in_dr2;
    }
    iVar3 = ta_param_push1_if(uVar2, iVar1 + 1, iVar8 << 0x18 | iVar9 << 0x10 | iVar10 << 8 | uVar11);
    *(u32 *)(&g_8c4a9c50 + iVar3 * 4) = *(u32 *)(iVar5 + 4);
    *(u32 *)(&g_8c4a9c50 + (iVar3 + 1) * 4) = *(u32 *)(iVar5 + 8);
    *(u32 *)(&g_8c4a9c50 + (iVar3 + 2) * 4) = *(u32 *)(iVar5 + 0xc);
    uVar6 = *(u32 *)(iVar5 + 0x14);
    iVar1 = iVar5;
    iVar3 = ta_param_push2_if(uVar2, iVar3 + 3, *(u32 *)(iVar5 + 0x10), uVar6);
    if (cVar14 == '\0') {
        in_dr2 = (double)CONCAT44((int)((u64)in_dr2 >> 0x20), *(u32 *)(iVar5 + 0x20));
    }
    if (cVar13 == '\0') {
        in_dr2 = (double)CONCAT44((int)((u64)in_dr2 >> 0x20), SUB84(in_dr2, 0) * in_fr15);
    } else {
        in_dr2 = in_dr2 * (double)CONCAT44(in_fr14, in_fr15);
    }
    iVar8 = iVar3 + 1;
    if (cVar13 == '\0') {
        iVar9 = (int)SUB84(in_dr2, 0);
    } else {
        iVar9 = (int)in_dr2;
    }
    if (cVar14 == '\0') {
        in_dr2 = (double)CONCAT44((int)((u64)in_dr2 >> 0x20), *(u32 *)(iVar5 + 0x24));
    }
    if (cVar13 == '\0') {
        fVar7 = SUB84(in_dr2, 0) * in_fr15;
        in_dr2 = (double)CONCAT44((int)((u64)in_dr2 >> 0x20), fVar7);
        iVar10 = (int)fVar7;
    } else {
        in_dr2 = in_dr2 * (double)CONCAT44(in_fr14, in_fr15);
        iVar10 = (int)in_dr2;
    }
    if (cVar14 == '\0') {
        in_dr2 = (double)CONCAT44((int)((u64)in_dr2 >> 0x20), *(u32 *)(iVar5 + 0x28));
    }
    if (cVar13 == '\0') {
        fVar7 = SUB84(in_dr2, 0) * in_fr15;
        in_dr2 = (double)CONCAT44((int)((u64)in_dr2 >> 0x20), fVar7);
        iVar12 = (int)fVar7;
    } else {
        in_dr2 = in_dr2 * (double)CONCAT44(in_fr14, in_fr15);
        iVar12 = (int)in_dr2;
    }
    if (cVar14 == '\0') {
        in_dr2 = (double)CONCAT44((int)((u64)in_dr2 >> 0x20), *(u32 *)(iVar5 + 0x2c));
    }
    if (cVar13 == '\0') {
        fVar7 = SUB84(in_dr2, 0) * in_fr15;
        in_dr2 = (double)CONCAT44((int)((u64)in_dr2 >> 0x20), fVar7);
        uVar11 = (u32)fVar7;
    } else {
        in_dr2 = in_dr2 * (double)CONCAT44(in_fr14, in_fr15);
        uVar11 = (u32)in_dr2;
    }
    *(u32 *)(&g_8c4a9c50 + iVar3 * 4) = iVar9 << 0x18 | iVar10 << 0x10 | iVar12 << 8 | uVar11;
    if (cVar14 == '\0') {
        in_dr2 = (double)CONCAT44((int)((u64)in_dr2 >> 0x20), *(u32 *)(iVar5 + 0x30));
    }
    if (cVar13 == '\0') {
        fVar7 = SUB84(in_dr2, 0) * in_fr15;
        in_dr2 = (double)CONCAT44((int)((u64)in_dr2 >> 0x20), fVar7);
        iVar3 = (int)fVar7;
    } else {
        in_dr2 = in_dr2 * (double)CONCAT44(in_fr14, in_fr15);
        iVar3 = (int)in_dr2;
    }
    if (cVar14 == '\0') {
        in_dr2 = (double)CONCAT44((int)((u64)in_dr2 >> 0x20), *(u32 *)(iVar5 + 0x34));
    }
    if (cVar13 == '\0') {
        fVar7 = SUB84(in_dr2, 0) * in_fr15;
        in_dr2 = (double)CONCAT44((int)((u64)in_dr2 >> 0x20), fVar7);
        iVar9 = (int)fVar7;
    } else {
        in_dr2 = in_dr2 * (double)CONCAT44(in_fr14, in_fr15);
        iVar9 = (int)in_dr2;
    }
    if (cVar14 == '\0') {
        in_dr2 = (double)CONCAT44((int)((u64)in_dr2 >> 0x20), *(u32 *)(iVar5 + 0x38));
    }
    if (cVar13 == '\0') {
        in_dr2 = (double)CONCAT44((int)((u64)in_dr2 >> 0x20), SUB84(in_dr2, 0) * in_fr15);
    } else {
        in_dr2 = in_dr2 * (double)CONCAT44(in_fr14, in_fr15);
    }
    if (cVar13 == '\0') {
        iVar10 = (int)SUB84(in_dr2, 0);
    } else {
        iVar10 = (int)in_dr2;
    }
    if (cVar14 == '\0') {
        in_dr2 = (double)CONCAT44((int)((u64)in_dr2 >> 0x20), *(u32 *)(iVar5 + 0x3c));
    }
    if (cVar13 == '\0') {
        in_dr2 = (double)CONCAT44((int)((u64)in_dr2 >> 0x20), SUB84(in_dr2, 0) * in_fr15);
    } else {
        in_dr2 = in_dr2 * (double)CONCAT44(in_fr14, in_fr15);
    }
    if (cVar13 == '\0') {
        uVar11 = (u32)SUB84(in_dr2, 0);
    } else {
        uVar11 = (u32)in_dr2;
    }
    uVar11 = iVar3 << 0x18 | iVar9 << 0x10 | iVar10 << 8 | uVar11;
    g_8c4a9d48 = ta_param_push1_if(uVar2, iVar8, uVar11);
    g_8c4a9d48 = g_8c4a9d48 << 2;
    uVar2 = ta_param_word_count(uVar2, iVar8, uVar11);
    ta_fifo_2081e0(uVar2, 0, 0);
    g_8c4a9d5c = *(u32 *)(iVar4 + 0xc);
    return 0;
}

/*
 * shinobi_draw_208e00  0x8c208e00
 * area name: in the shinobi library code range; behaviour name: mostly calls draw functions
 */
u32 shinobi_draw_208e00(int *a0) {
    int iVar1;
    u32 uVar2;
    int iVar3;
    int ain0;
    int iVar4;
    float fVar5;
    double in_dr2;
    float in_fr15;
    u32 in_fr14;
    int iVar6;
    int iVar7;
    int iVar8;
    u32 uVar9;
    char cVar10;
    char cVar11;

    uVar2 = g_8c4a9d4c;
    cVar11 = '\0';
    cVar10 = '\0';
    ain0 = *a0;
    iVar3 = a0[1];
    iVar4 = a0[2];
    g_8c4a9c50 = g_8c4a9d4c;
    g_8c4a9c54 = g_8c4a9d50;
    g_8c4a9c58 = g_8c4a9d54;
    g_8c4a9c5c = *(u32 *)(ain0 + 4);
    g_8c4a9c60 = *(u32 *)(ain0 + 8);
    g_8c4a9c64 = *(u32 *)(ain0 + 0xc);
    iVar1 = ta_param_push_color_if(g_8c4a9d4c, 6, *(u32 *)(ain0 + 0x10));
    if (cVar11 == '\0') {
        in_fr15 = 255.0;
        in_dr2 = (double)CONCAT44((int)((u64)in_dr2 >> 0x20), *(u32 *)(ain0 + 0x20));
    }
    if (cVar10 == '\0') {
        in_dr2 = (double)CONCAT44((int)((u64)in_dr2 >> 0x20), SUB84(in_dr2, 0) * in_fr15);
    } else {
        in_dr2 = in_dr2 * (double)CONCAT44(in_fr14, in_fr15);
    }
    if (cVar10 == '\0') {
        iVar6 = (int)SUB84(in_dr2, 0);
    } else {
        iVar6 = (int)in_dr2;
    }
    if (cVar11 == '\0') {
        in_dr2 = (double)CONCAT44((int)((u64)in_dr2 >> 0x20), *(u32 *)(ain0 + 0x24));
    }
    if (cVar10 == '\0') {
        fVar5 = SUB84(in_dr2, 0) * in_fr15;
        in_dr2 = (double)CONCAT44((int)((u64)in_dr2 >> 0x20), fVar5);
        iVar7 = (int)fVar5;
    } else {
        in_dr2 = in_dr2 * (double)CONCAT44(in_fr14, in_fr15);
        iVar7 = (int)in_dr2;
    }
    if (cVar11 == '\0') {
        in_dr2 = (double)CONCAT44((int)((u64)in_dr2 >> 0x20), *(u32 *)(ain0 + 0x28));
    }
    if (cVar10 == '\0') {
        fVar5 = SUB84(in_dr2, 0) * in_fr15;
        in_dr2 = (double)CONCAT44((int)((u64)in_dr2 >> 0x20), fVar5);
        iVar8 = (int)fVar5;
    } else {
        in_dr2 = in_dr2 * (double)CONCAT44(in_fr14, in_fr15);
        iVar8 = (int)in_dr2;
    }
    if (cVar11 == '\0') {
        in_dr2 = (double)CONCAT44((int)((u64)in_dr2 >> 0x20), *(u32 *)(ain0 + 0x2c));
    }
    if (cVar10 == '\0') {
        fVar5 = SUB84(in_dr2, 0) * in_fr15;
        in_dr2 = (double)CONCAT44((int)((u64)in_dr2 >> 0x20), fVar5);
        uVar9 = (u32)fVar5;
    } else {
        in_dr2 = in_dr2 * (double)CONCAT44(in_fr14, in_fr15);
        uVar9 = (u32)in_dr2;
    }
    *(u32 *)(&g_8c4a9c50 + iVar1 * 4) = iVar6 << 0x18 | iVar7 << 0x10 | iVar8 << 8 | uVar9;
    if (cVar11 == '\0') {
        in_dr2 = (double)CONCAT44((int)((u64)in_dr2 >> 0x20), *(u32 *)(ain0 + 0x30));
    }
    if (cVar10 == '\0') {
        fVar5 = SUB84(in_dr2, 0) * in_fr15;
        in_dr2 = (double)CONCAT44((int)((u64)in_dr2 >> 0x20), fVar5);
        iVar6 = (int)fVar5;
    } else {
        in_dr2 = in_dr2 * (double)CONCAT44(in_fr14, in_fr15);
        iVar6 = (int)in_dr2;
    }
    if (cVar11 == '\0') {
        in_dr2 = (double)CONCAT44((int)((u64)in_dr2 >> 0x20), *(u32 *)(ain0 + 0x34));
    }
    if (cVar10 == '\0') {
        fVar5 = SUB84(in_dr2, 0) * in_fr15;
        in_dr2 = (double)CONCAT44((int)((u64)in_dr2 >> 0x20), fVar5);
        iVar7 = (int)fVar5;
    } else {
        in_dr2 = in_dr2 * (double)CONCAT44(in_fr14, in_fr15);
        iVar7 = (int)in_dr2;
    }
    if (cVar11 == '\0') {
        in_dr2 = (double)CONCAT44((int)((u64)in_dr2 >> 0x20), *(u32 *)(ain0 + 0x38));
    }
    if (cVar10 == '\0') {
        in_dr2 = (double)CONCAT44((int)((u64)in_dr2 >> 0x20), SUB84(in_dr2, 0) * in_fr15);
    } else {
        in_dr2 = in_dr2 * (double)CONCAT44(in_fr14, in_fr15);
    }
    if (cVar10 == '\0') {
        iVar8 = (int)SUB84(in_dr2, 0);
    } else {
        iVar8 = (int)in_dr2;
    }
    if (cVar11 == '\0') {
        in_dr2 = (double)CONCAT44((int)((u64)in_dr2 >> 0x20), *(u32 *)(ain0 + 0x3c));
    }
    if (cVar10 == '\0') {
        in_dr2 = (double)CONCAT44((int)((u64)in_dr2 >> 0x20), SUB84(in_dr2, 0) * in_fr15);
    } else {
        in_dr2 = in_dr2 * (double)CONCAT44(in_fr14, in_fr15);
    }
    if (cVar10 == '\0') {
        uVar9 = (u32)SUB84(in_dr2, 0);
    } else {
        uVar9 = (u32)in_dr2;
    }
    iVar1 = ta_param_push1_if(uVar2, iVar1 + 1, iVar6 << 0x18 | iVar7 << 0x10 | iVar8 << 8 | uVar9);
    *(u32 *)(&g_8c4a9c50 + iVar1 * 4) = *(u32 *)(iVar3 + 4);
    *(u32 *)(&g_8c4a9c50 + (iVar1 + 1) * 4) = *(u32 *)(iVar3 + 8);
    *(u32 *)(&g_8c4a9c50 + (iVar1 + 2) * 4) = *(u32 *)(iVar3 + 0xc);
    iVar1 = ta_param_push_color_if(uVar2, iVar1 + 3, *(u32 *)(ain0 + 0x10));
    if (cVar11 == '\0') {
        in_dr2 = (double)CONCAT44((int)((u64)in_dr2 >> 0x20), *(u32 *)(iVar3 + 0x20));
    }
    if (cVar10 == '\0') {
        in_dr2 = (double)CONCAT44((int)((u64)in_dr2 >> 0x20), SUB84(in_dr2, 0) * in_fr15);
    } else {
        in_dr2 = in_dr2 * (double)CONCAT44(in_fr14, in_fr15);
    }
    if (cVar10 == '\0') {
        iVar6 = (int)SUB84(in_dr2, 0);
    } else {
        iVar6 = (int)in_dr2;
    }
    if (cVar11 == '\0') {
        in_dr2 = (double)CONCAT44((int)((u64)in_dr2 >> 0x20), *(u32 *)(iVar3 + 0x24));
    }
    if (cVar10 == '\0') {
        fVar5 = SUB84(in_dr2, 0) * in_fr15;
        in_dr2 = (double)CONCAT44((int)((u64)in_dr2 >> 0x20), fVar5);
        iVar7 = (int)fVar5;
    } else {
        in_dr2 = in_dr2 * (double)CONCAT44(in_fr14, in_fr15);
        iVar7 = (int)in_dr2;
    }
    if (cVar11 == '\0') {
        in_dr2 = (double)CONCAT44((int)((u64)in_dr2 >> 0x20), *(u32 *)(iVar3 + 0x28));
    }
    if (cVar10 == '\0') {
        fVar5 = SUB84(in_dr2, 0) * in_fr15;
        in_dr2 = (double)CONCAT44((int)((u64)in_dr2 >> 0x20), fVar5);
        iVar8 = (int)fVar5;
    } else {
        in_dr2 = in_dr2 * (double)CONCAT44(in_fr14, in_fr15);
        iVar8 = (int)in_dr2;
    }
    if (cVar11 == '\0') {
        in_dr2 = (double)CONCAT44((int)((u64)in_dr2 >> 0x20), *(u32 *)(iVar3 + 0x2c));
    }
    if (cVar10 == '\0') {
        fVar5 = SUB84(in_dr2, 0) * in_fr15;
        in_dr2 = (double)CONCAT44((int)((u64)in_dr2 >> 0x20), fVar5);
        uVar9 = (u32)fVar5;
    } else {
        in_dr2 = in_dr2 * (double)CONCAT44(in_fr14, in_fr15);
        uVar9 = (u32)in_dr2;
    }
    *(u32 *)(&g_8c4a9c50 + iVar1 * 4) = iVar6 << 0x18 | iVar7 << 0x10 | iVar8 << 8 | uVar9;
    if (cVar11 == '\0') {
        in_dr2 = (double)CONCAT44((int)((u64)in_dr2 >> 0x20), *(u32 *)(iVar3 + 0x30));
    }
    if (cVar10 == '\0') {
        fVar5 = SUB84(in_dr2, 0) * in_fr15;
        in_dr2 = (double)CONCAT44((int)((u64)in_dr2 >> 0x20), fVar5);
        iVar6 = (int)fVar5;
    } else {
        in_dr2 = in_dr2 * (double)CONCAT44(in_fr14, in_fr15);
        iVar6 = (int)in_dr2;
    }
    if (cVar11 == '\0') {
        in_dr2 = (double)CONCAT44((int)((u64)in_dr2 >> 0x20), *(u32 *)(iVar3 + 0x34));
    }
    if (cVar10 == '\0') {
        fVar5 = SUB84(in_dr2, 0) * in_fr15;
        in_dr2 = (double)CONCAT44((int)((u64)in_dr2 >> 0x20), fVar5);
        iVar7 = (int)fVar5;
    } else {
        in_dr2 = in_dr2 * (double)CONCAT44(in_fr14, in_fr15);
        iVar7 = (int)in_dr2;
    }
    if (cVar11 == '\0') {
        in_dr2 = (double)CONCAT44((int)((u64)in_dr2 >> 0x20), *(u32 *)(iVar3 + 0x38));
    }
    if (cVar10 == '\0') {
        in_dr2 = (double)CONCAT44((int)((u64)in_dr2 >> 0x20), SUB84(in_dr2, 0) * in_fr15);
    } else {
        in_dr2 = in_dr2 * (double)CONCAT44(in_fr14, in_fr15);
    }
    if (cVar10 == '\0') {
        iVar8 = (int)SUB84(in_dr2, 0);
    } else {
        iVar8 = (int)in_dr2;
    }
    if (cVar11 == '\0') {
        in_dr2 = (double)CONCAT44((int)((u64)in_dr2 >> 0x20), *(u32 *)(iVar3 + 0x3c));
    }
    if (cVar10 == '\0') {
        in_dr2 = (double)CONCAT44((int)((u64)in_dr2 >> 0x20), SUB84(in_dr2, 0) * in_fr15);
    } else {
        in_dr2 = in_dr2 * (double)CONCAT44(in_fr14, in_fr15);
    }
    if (cVar10 == '\0') {
        uVar9 = (u32)SUB84(in_dr2, 0);
    } else {
        uVar9 = (u32)in_dr2;
    }
    iVar1 = ta_param_push1_if(uVar2, iVar1 + 1, iVar6 << 0x18 | iVar7 << 0x10 | iVar8 << 8 | uVar9);
    *(u32 *)(&g_8c4a9c50 + iVar1 * 4) = *(u32 *)(iVar4 + 4);
    *(u32 *)(&g_8c4a9c50 + (iVar1 + 1) * 4) = *(u32 *)(iVar4 + 8);
    *(u32 *)(&g_8c4a9c50 + (iVar1 + 2) * 4) = *(u32 *)(iVar4 + 0xc);
    iVar1 = ta_param_push_color_if(uVar2, iVar1 + 3, *(u32 *)(ain0 + 0x10));
    if (cVar11 == '\0') {
        in_dr2 = (double)CONCAT44((int)((u64)in_dr2 >> 0x20), *(u32 *)(iVar4 + 0x20));
    }
    if (cVar10 == '\0') {
        in_dr2 = (double)CONCAT44((int)((u64)in_dr2 >> 0x20), SUB84(in_dr2, 0) * in_fr15);
    } else {
        in_dr2 = in_dr2 * (double)CONCAT44(in_fr14, in_fr15);
    }
    iVar3 = iVar1 + 1;
    if (cVar10 == '\0') {
        iVar6 = (int)SUB84(in_dr2, 0);
    } else {
        iVar6 = (int)in_dr2;
    }
    if (cVar11 == '\0') {
        in_dr2 = (double)CONCAT44((int)((u64)in_dr2 >> 0x20), *(u32 *)(iVar4 + 0x24));
    }
    if (cVar10 == '\0') {
        fVar5 = SUB84(in_dr2, 0) * in_fr15;
        in_dr2 = (double)CONCAT44((int)((u64)in_dr2 >> 0x20), fVar5);
        iVar7 = (int)fVar5;
    } else {
        in_dr2 = in_dr2 * (double)CONCAT44(in_fr14, in_fr15);
        iVar7 = (int)in_dr2;
    }
    if (cVar11 == '\0') {
        in_dr2 = (double)CONCAT44((int)((u64)in_dr2 >> 0x20), *(u32 *)(iVar4 + 0x28));
    }
    if (cVar10 == '\0') {
        fVar5 = SUB84(in_dr2, 0) * in_fr15;
        in_dr2 = (double)CONCAT44((int)((u64)in_dr2 >> 0x20), fVar5);
        iVar8 = (int)fVar5;
    } else {
        in_dr2 = in_dr2 * (double)CONCAT44(in_fr14, in_fr15);
        iVar8 = (int)in_dr2;
    }
    if (cVar11 == '\0') {
        in_dr2 = (double)CONCAT44((int)((u64)in_dr2 >> 0x20), *(u32 *)(iVar4 + 0x2c));
    }
    if (cVar10 == '\0') {
        fVar5 = SUB84(in_dr2, 0) * in_fr15;
        in_dr2 = (double)CONCAT44((int)((u64)in_dr2 >> 0x20), fVar5);
        uVar9 = (u32)fVar5;
    } else {
        in_dr2 = in_dr2 * (double)CONCAT44(in_fr14, in_fr15);
        uVar9 = (u32)in_dr2;
    }
    *(u32 *)(&g_8c4a9c50 + iVar1 * 4) = iVar6 << 0x18 | iVar7 << 0x10 | iVar8 << 8 | uVar9;
    if (cVar11 == '\0') {
        in_dr2 = (double)CONCAT44((int)((u64)in_dr2 >> 0x20), *(u32 *)(iVar4 + 0x30));
    }
    if (cVar10 == '\0') {
        fVar5 = SUB84(in_dr2, 0) * in_fr15;
        in_dr2 = (double)CONCAT44((int)((u64)in_dr2 >> 0x20), fVar5);
        iVar1 = (int)fVar5;
    } else {
        in_dr2 = in_dr2 * (double)CONCAT44(in_fr14, in_fr15);
        iVar1 = (int)in_dr2;
    }
    if (cVar11 == '\0') {
        in_dr2 = (double)CONCAT44((int)((u64)in_dr2 >> 0x20), *(u32 *)(iVar4 + 0x34));
    }
    if (cVar10 == '\0') {
        fVar5 = SUB84(in_dr2, 0) * in_fr15;
        in_dr2 = (double)CONCAT44((int)((u64)in_dr2 >> 0x20), fVar5);
        iVar6 = (int)fVar5;
    } else {
        in_dr2 = in_dr2 * (double)CONCAT44(in_fr14, in_fr15);
        iVar6 = (int)in_dr2;
    }
    if (cVar11 == '\0') {
        in_dr2 = (double)CONCAT44((int)((u64)in_dr2 >> 0x20), *(u32 *)(iVar4 + 0x38));
    }
    if (cVar10 == '\0') {
        in_dr2 = (double)CONCAT44((int)((u64)in_dr2 >> 0x20), SUB84(in_dr2, 0) * in_fr15);
    } else {
        in_dr2 = in_dr2 * (double)CONCAT44(in_fr14, in_fr15);
    }
    if (cVar10 == '\0') {
        iVar7 = (int)SUB84(in_dr2, 0);
    } else {
        iVar7 = (int)in_dr2;
    }
    if (cVar11 == '\0') {
        in_dr2 = (double)CONCAT44((int)((u64)in_dr2 >> 0x20), *(u32 *)(iVar4 + 0x3c));
    }
    if (cVar10 == '\0') {
        in_dr2 = (double)CONCAT44((int)((u64)in_dr2 >> 0x20), SUB84(in_dr2, 0) * in_fr15);
    } else {
        in_dr2 = in_dr2 * (double)CONCAT44(in_fr14, in_fr15);
    }
    if (cVar10 == '\0') {
        uVar9 = (u32)SUB84(in_dr2, 0);
    } else {
        uVar9 = (u32)in_dr2;
    }
    uVar9 = iVar1 << 0x18 | iVar6 << 0x10 | iVar7 << 8 | uVar9;
    g_8c4a9d48 = ta_param_push1_if(uVar2, iVar3, uVar9);
    g_8c4a9d48 = g_8c4a9d48 << 2;
    uVar2 = ta_param_word_count(uVar2, iVar3, uVar9);
    ta_fifo_2081e0(uVar2, 0, 0);
    g_8c4a9d5c = *(u32 *)(ain0 + 0xc);
    return 0;
}

/*
 * shinobi_draw_2090e0  0x8c2090e0
 * area name: in the shinobi library code range; behaviour name: mostly calls draw functions
 */
u32 shinobi_draw_2090e0(int *a0) {
    int iVar1;
    u32 uVar2;
    int iVar3;
    int iVar4;
    int iVar5;
    u32 uVar6;
    int ar5_00;
    float fVar7;
    double in_dr2;
    float in_fr15;
    u32 in_fr14;
    u32 uVar8;
    char cVar9;
    char cVar10;

    uVar2 = g_8c4a9d4c;
    cVar10 = '\0';
    cVar9 = '\0';
    iVar4 = *a0;
    iVar3 = a0[1];
    iVar5 = a0[2];
    g_8c4a9c50 = g_8c4a9d4c;
    g_8c4a9c54 = g_8c4a9d50;
    g_8c4a9c58 = g_8c4a9d54;
    g_8c4a9c5c = *(u32 *)(iVar4 + 4);
    g_8c4a9c60 = *(u32 *)(iVar4 + 8);
    g_8c4a9c64 = *(u32 *)(iVar4 + 0xc);
    uVar6 = *(u32 *)(iVar4 + 0x14);
    iVar1 = ta_param_push2_if(g_8c4a9d4c, 6, *(u32 *)(iVar4 + 0x10), uVar6);
    if (cVar10 == '\0') {
        in_dr2 = (double)CONCAT44((int)((u64)in_dr2 >> 0x20), *(u32 *)(iVar4 + 0x18));
        in_fr15 = 255.0;
    }
    if (cVar9 == '\0') {
        fVar7 = SUB84(in_dr2, 0) * in_fr15;
        in_dr2 = (double)CONCAT44((int)((u64)in_dr2 >> 0x20), fVar7);
        uVar8 = (u32)fVar7;
    } else {
        in_dr2 = in_dr2 * (double)CONCAT44(in_fr14, in_fr15);
        uVar8 = (u32)in_dr2;
    }
    *(u32 *)(&g_8c4a9c50 + iVar1 * 4) = uVar8 << 0x18 | uVar8 << 0x10 | uVar8 << 8 | uVar8;
    if (cVar10 == '\0') {
        in_dr2 = (double)CONCAT44((int)((u64)in_dr2 >> 0x20), *(u32 *)(iVar4 + 0x1c));
    }
    if (cVar9 == '\0') {
        fVar7 = SUB84(in_dr2, 0) * in_fr15;
        in_dr2 = (double)CONCAT44((int)((u64)in_dr2 >> 0x20), fVar7);
        uVar8 = (u32)fVar7;
    } else {
        in_dr2 = in_dr2 * (double)CONCAT44(in_fr14, in_fr15);
        uVar8 = (u32)in_dr2;
    }
    iVar1 = ta_param_push1_if(uVar2, iVar1 + 1, uVar8 << 0x18 | uVar8 << 0x10 | uVar8 << 8 | uVar8);
    if (cVar10 == '\0') {
        in_dr2 = (double)CONCAT44((int)((u64)in_dr2 >> 0x20), *(u32 *)(iVar4 + 0x1c));
    }
    if (cVar9 == '\0') {
        fVar7 = SUB84(in_dr2, 0) * in_fr15;
        in_dr2 = (double)CONCAT44((int)((u64)in_dr2 >> 0x20), fVar7);
        uVar8 = (u32)fVar7;
    } else {
        in_dr2 = in_dr2 * (double)CONCAT44(in_fr14, in_fr15);
        uVar8 = (u32)in_dr2;
    }
    *(u32 *)(&g_8c4a9c50 + iVar1 * 4) = uVar8 << 0x18 | uVar8 << 0x10 | uVar8 << 8 | uVar8;
    *(u32 *)(&g_8c4a9c50 + (iVar1 + 1) * 4) = *(u32 *)(iVar3 + 4);
    *(u32 *)(&g_8c4a9c50 + (iVar1 + 2) * 4) = *(u32 *)(iVar3 + 8);
    *(u32 *)(&g_8c4a9c50 + (iVar1 + 3) * 4) = *(u32 *)(iVar3 + 0xc);
    uVar6 = *(u32 *)(iVar3 + 0x14);
    iVar1 = ta_param_push2_if(uVar2, iVar1 + 4, *(u32 *)(iVar3 + 0x10), uVar6);
    if (cVar10 == '\0') {
        in_dr2 = (double)CONCAT44((int)((u64)in_dr2 >> 0x20), *(u32 *)(iVar3 + 0x18));
    }
    if (cVar9 == '\0') {
        fVar7 = SUB84(in_dr2, 0) * in_fr15;
        in_dr2 = (double)CONCAT44((int)((u64)in_dr2 >> 0x20), fVar7);
        uVar8 = (u32)fVar7;
    } else {
        in_dr2 = in_dr2 * (double)CONCAT44(in_fr14, in_fr15);
        uVar8 = (u32)in_dr2;
    }
    *(u32 *)(&g_8c4a9c50 + iVar1 * 4) = uVar8 << 0x18 | uVar8 << 0x10 | uVar8 << 8 | uVar8;
    if (cVar10 == '\0') {
        in_dr2 = (double)CONCAT44((int)((u64)in_dr2 >> 0x20), *(u32 *)(iVar3 + 0x1c));
    }
    if (cVar9 == '\0') {
        fVar7 = SUB84(in_dr2, 0) * in_fr15;
        in_dr2 = (double)CONCAT44((int)((u64)in_dr2 >> 0x20), fVar7);
        uVar8 = (u32)fVar7;
    } else {
        in_dr2 = in_dr2 * (double)CONCAT44(in_fr14, in_fr15);
        uVar8 = (u32)in_dr2;
    }
    iVar3 = ta_param_push1_if(uVar2, iVar1 + 1, uVar8 << 0x18 | uVar8 << 0x10 | uVar8 << 8 | uVar8);
    *(u32 *)(&g_8c4a9c50 + iVar3 * 4) = *(u32 *)(iVar5 + 4);
    *(u32 *)(&g_8c4a9c50 + (iVar3 + 1) * 4) = *(u32 *)(iVar5 + 8);
    *(u32 *)(&g_8c4a9c50 + (iVar3 + 2) * 4) = *(u32 *)(iVar5 + 0xc);
    uVar6 = *(u32 *)(iVar5 + 0x14);
    iVar1 = iVar5;
    iVar3 = ta_param_push2_if(uVar2, iVar3 + 3, *(u32 *)(iVar5 + 0x10), uVar6);
    if (cVar10 == '\0') {
        in_dr2 = (double)CONCAT44((int)((u64)in_dr2 >> 0x20), *(u32 *)(iVar5 + 0x18));
    }
    ar5_00 = iVar3 + 1;
    if (cVar9 == '\0') {
        fVar7 = SUB84(in_dr2, 0) * in_fr15;
        in_dr2 = (double)CONCAT44((int)((u64)in_dr2 >> 0x20), fVar7);
        uVar8 = (u32)fVar7;
    } else {
        in_dr2 = in_dr2 * (double)CONCAT44(in_fr14, in_fr15);
        uVar8 = (u32)in_dr2;
    }
    *(u32 *)(&g_8c4a9c50 + iVar3 * 4) = uVar8 << 0x18 | uVar8 << 0x10 | uVar8 << 8 | uVar8;
    if (cVar10 == '\0') {
        in_dr2 = (double)CONCAT44((int)((u64)in_dr2 >> 0x20), *(u32 *)(iVar5 + 0x1c));
    }
    if (cVar9 == '\0') {
        uVar8 = (u32)(SUB84(in_dr2, 0) * in_fr15);
    } else {
        uVar8 = (u32)(in_dr2 * (double)CONCAT44(in_fr14, in_fr15));
    }
    uVar8 = uVar8 << 0x18 | uVar8 << 0x10 | uVar8 << 8 | uVar8;
    g_8c4a9d48 = ta_param_push1_if(uVar2, ar5_00, uVar8);
    g_8c4a9d48 = g_8c4a9d48 << 2;
    uVar2 = ta_param_word_count(uVar2, ar5_00, uVar8);
    ta_fifo_2081e0(uVar2, 0, 0);
    g_8c4a9d5c = *(u32 *)(iVar4 + 0xc);
    return 0;
}

/*
 * shinobi_draw_209380  0x8c209380
 * area name: in the shinobi library code range; behaviour name: mostly calls draw functions
 */
u32 shinobi_draw_209380(int *a0) {
    int iVar1;
    u32 uVar2;
    int iVar3;
    int ain0;
    int iVar4;
    float fVar5;
    double in_dr2;
    float in_fr15;
    u32 in_fr14;
    u32 uVar6;
    char cVar7;
    char cVar8;

    uVar2 = g_8c4a9d4c;
    cVar8 = '\0';
    cVar7 = '\0';
    ain0 = *a0;
    iVar3 = a0[1];
    iVar4 = a0[2];
    g_8c4a9c50 = g_8c4a9d4c;
    g_8c4a9c54 = g_8c4a9d50;
    g_8c4a9c58 = g_8c4a9d54;
    g_8c4a9c5c = *(u32 *)(ain0 + 4);
    g_8c4a9c60 = *(u32 *)(ain0 + 8);
    g_8c4a9c64 = *(u32 *)(ain0 + 0xc);
    iVar1 = ta_param_push_color_if(g_8c4a9d4c, 6, *(u32 *)(ain0 + 0x10));
    if (cVar8 == '\0') {
        in_dr2 = (double)CONCAT44((int)((u64)in_dr2 >> 0x20), *(u32 *)(ain0 + 0x18));
        in_fr15 = 255.0;
    }
    if (cVar7 == '\0') {
        fVar5 = SUB84(in_dr2, 0) * in_fr15;
        in_dr2 = (double)CONCAT44((int)((u64)in_dr2 >> 0x20), fVar5);
        uVar6 = (u32)fVar5;
    } else {
        in_dr2 = in_dr2 * (double)CONCAT44(in_fr14, in_fr15);
        uVar6 = (u32)in_dr2;
    }
    *(u32 *)(&g_8c4a9c50 + iVar1 * 4) = uVar6 << 0x18 | uVar6 << 0x10 | uVar6 << 8 | uVar6;
    if (cVar8 == '\0') {
        in_dr2 = (double)CONCAT44((int)((u64)in_dr2 >> 0x20), *(u32 *)(ain0 + 0x1c));
    }
    if (cVar7 == '\0') {
        fVar5 = SUB84(in_dr2, 0) * in_fr15;
        in_dr2 = (double)CONCAT44((int)((u64)in_dr2 >> 0x20), fVar5);
        uVar6 = (u32)fVar5;
    } else {
        in_dr2 = in_dr2 * (double)CONCAT44(in_fr14, in_fr15);
        uVar6 = (u32)in_dr2;
    }
    iVar1 = ta_param_push1_if(uVar2, iVar1 + 1, uVar6 << 0x18 | uVar6 << 0x10 | uVar6 << 8 | uVar6);
    *(u32 *)(&g_8c4a9c50 + iVar1 * 4) = *(u32 *)(iVar3 + 4);
    *(u32 *)(&g_8c4a9c50 + (iVar1 + 1) * 4) = *(u32 *)(iVar3 + 8);
    *(u32 *)(&g_8c4a9c50 + (iVar1 + 2) * 4) = *(u32 *)(iVar3 + 0xc);
    iVar1 = ta_param_push_color_if(uVar2, iVar1 + 3, *(u32 *)(ain0 + 0x10));
    if (cVar8 == '\0') {
        in_dr2 = (double)CONCAT44((int)((u64)in_dr2 >> 0x20), *(u32 *)(iVar3 + 0x18));
    }
    if (cVar7 == '\0') {
        fVar5 = SUB84(in_dr2, 0) * in_fr15;
        in_dr2 = (double)CONCAT44((int)((u64)in_dr2 >> 0x20), fVar5);
        uVar6 = (u32)fVar5;
    } else {
        in_dr2 = in_dr2 * (double)CONCAT44(in_fr14, in_fr15);
        uVar6 = (u32)in_dr2;
    }
    *(u32 *)(&g_8c4a9c50 + iVar1 * 4) = uVar6 << 0x18 | uVar6 << 0x10 | uVar6 << 8 | uVar6;
    if (cVar8 == '\0') {
        in_dr2 = (double)CONCAT44((int)((u64)in_dr2 >> 0x20), *(u32 *)(iVar3 + 0x1c));
    }
    if (cVar7 == '\0') {
        fVar5 = SUB84(in_dr2, 0) * in_fr15;
        in_dr2 = (double)CONCAT44((int)((u64)in_dr2 >> 0x20), fVar5);
        uVar6 = (u32)fVar5;
    } else {
        in_dr2 = in_dr2 * (double)CONCAT44(in_fr14, in_fr15);
        uVar6 = (u32)in_dr2;
    }
    iVar1 = ta_param_push1_if(uVar2, iVar1 + 1, uVar6 << 0x18 | uVar6 << 0x10 | uVar6 << 8 | uVar6);
    *(u32 *)(&g_8c4a9c50 + iVar1 * 4) = *(u32 *)(iVar4 + 4);
    *(u32 *)(&g_8c4a9c50 + (iVar1 + 1) * 4) = *(u32 *)(iVar4 + 8);
    *(u32 *)(&g_8c4a9c50 + (iVar1 + 2) * 4) = *(u32 *)(iVar4 + 0xc);
    iVar1 = ta_param_push_color_if(uVar2, iVar1 + 3, *(u32 *)(ain0 + 0x10));
    if (cVar8 == '\0') {
        in_dr2 = (double)CONCAT44((int)((u64)in_dr2 >> 0x20), *(u32 *)(iVar4 + 0x18));
    }
    iVar3 = iVar1 + 1;
    if (cVar7 == '\0') {
        fVar5 = SUB84(in_dr2, 0) * in_fr15;
        in_dr2 = (double)CONCAT44((int)((u64)in_dr2 >> 0x20), fVar5);
        uVar6 = (u32)fVar5;
    } else {
        in_dr2 = in_dr2 * (double)CONCAT44(in_fr14, in_fr15);
        uVar6 = (u32)in_dr2;
    }
    *(u32 *)(&g_8c4a9c50 + iVar1 * 4) = uVar6 << 0x18 | uVar6 << 0x10 | uVar6 << 8 | uVar6;
    if (cVar8 == '\0') {
        in_dr2 = (double)CONCAT44((int)((u64)in_dr2 >> 0x20), *(u32 *)(iVar4 + 0x1c));
    }
    if (cVar7 == '\0') {
        uVar6 = (u32)(SUB84(in_dr2, 0) * in_fr15);
    } else {
        uVar6 = (u32)(in_dr2 * (double)CONCAT44(in_fr14, in_fr15));
    }
    uVar6 = uVar6 << 0x18 | uVar6 << 0x10 | uVar6 << 8 | uVar6;
    g_8c4a9d48 = ta_param_push1_if(uVar2, iVar3, uVar6);
    g_8c4a9d48 = g_8c4a9d48 << 2;
    uVar2 = ta_param_word_count(uVar2, iVar3, uVar6);
    ta_fifo_2081e0(uVar2, 0, 0);
    g_8c4a9d5c = *(u32 *)(ain0 + 0xc);
    return 0;
}

/*
 * ta_send_triangle_color10  0x8c209600
 * copies three vertices (position and the packed colour at +0x10) and sends the triangle to the TA FIFO
 */
u32 ta_send_triangle_color10(int *a0) {
    u32 ar4_00;
    int iVar1;
    int iStack_14;
    int aiStack_10[2];

    iVar1 = *a0;
    iStack_14 = a0[1];
    aiStack_10[0] = a0[2];
    g_8c4a9c50 = g_8c4a9d4c;
    g_8c4a9c54 = g_8c4a9d50;
    g_8c4a9c58 = g_8c4a9d54;
    g_8c4a9c5c = *(u32 *)(iVar1 + 4);
    g_8c4a9c60 = *(u32 *)(iVar1 + 8);
    g_8c4a9c64 = *(u32 *)(iVar1 + 0xc);
    g_8c4a9c68 = *(u32 *)(iVar1 + 0x10);
    g_8c4a9c6c = *(u32 *)(iStack_14 + 4);
    g_8c4a9c70 = *(u32 *)(iStack_14 + 8);
    g_8c4a9c74 = *(u32 *)(iStack_14 + 0xc);
    g_8c4a9c78 = *(u32 *)(iStack_14 + 0x10);
    g_8c4a9c7c = *(u32 *)(aiStack_10[0] + 4);
    g_8c4a9c80 = *(u32 *)(aiStack_10[0] + 8);
    g_8c4a9c84 = *(u32 *)(aiStack_10[0] + 0xc);
    g_8c4a9c88 = *(u32 *)(aiStack_10[0] + 0x10);
    g_8c4a9d48 = 0x3c;
    ar4_00 = ta_param_word_count(g_8c4a9d4c, 0x3c, &iStack_14);
    ta_fifo_2081e0(ar4_00, 0, 0);
    g_8c4a9d5c = *(u32 *)(iVar1 + 0xc);
    return 0;
}

/*
 * ta_send_triangle_gray10  0x8c209708
 * copies three vertices, turning the float at +0x10 into a grey colour word, and sends the triangle
 */
u32 ta_send_triangle_gray10(int *a0) {
    u32 ar4_00;
    int iVar1;
    int *ar7_00;
    int iStack_14;
    int aiStack_10[2];

    iVar1 = *a0;
    ar7_00 = &iStack_14;
    iStack_14 = a0[1];
    aiStack_10[0] = a0[2];
    g_8c4a9c50 = g_8c4a9d4c;
    g_8c4a9c54 = g_8c4a9d50;
    g_8c4a9c58 = g_8c4a9d54;
    g_8c4a9c5c = *(u32 *)(iVar1 + 4);
    g_8c4a9c60 = *(u32 *)(iVar1 + 8);
    g_8c4a9c64 = *(u32 *)(iVar1 + 0xc);
    g_8c4a9c68 = (u32)(*(float *)(iVar1 + 0x10) * 255.0);
    g_8c4a9c68 = g_8c4a9c68 << 0x18 | g_8c4a9c68 << 0x10 | g_8c4a9c68 << 8 | g_8c4a9c68;
    g_8c4a9c6c = *(u32 *)(iStack_14 + 4);
    g_8c4a9c70 = *(u32 *)(iStack_14 + 8);
    g_8c4a9c74 = *(u32 *)(iStack_14 + 0xc);
    g_8c4a9c78 = (u32)(*(float *)(iStack_14 + 0x10) * 255.0);
    g_8c4a9c78 = g_8c4a9c78 << 0x18 | g_8c4a9c78 << 0x10 | g_8c4a9c78 << 8 | g_8c4a9c78;
    g_8c4a9c7c = *(u32 *)(aiStack_10[0] + 4);
    g_8c4a9c80 = *(u32 *)(aiStack_10[0] + 8);
    g_8c4a9c84 = *(u32 *)(aiStack_10[0] + 0xc);
    g_8c4a9c88 = (u32)(*(float *)(aiStack_10[0] + 0x10) * 255.0);
    g_8c4a9c88 = g_8c4a9c88 << 0x18 | g_8c4a9c88 << 0x10 | g_8c4a9c88 << 8 | g_8c4a9c88;
    g_8c4a9d48 = 0x3c;
    ar4_00 = ta_param_word_count(g_8c4a9d4c, 0x3c, aiStack_10);
    ta_fifo_2081e0(ar4_00, 0, 0);
    g_8c4a9d5c = *(u32 *)(iVar1 + 0xc);
    return 0;
}

/*
 * ta_draw_2098c0  0x8c2098c0
 * area name: sits between ta functions (same compilation unit); behaviour name: mostly calls draw functions
 */
u32 ta_draw_2098c0(int *a0) {
    int iVar1;
    u32 uVar2;
    int iVar3;
    int iVar4;
    int iVar5;
    u32 uVar6;
    u32 ar7_00;
    int ar5_00;

    uVar2 = g_8c4a9d4c;
    iVar4 = *a0;
    iVar3 = a0[1];
    iVar5 = a0[2];
    g_8c4a9c50 = g_8c4a9d4c;
    g_8c4a9c54 = g_8c4a9d50;
    g_8c4a9c58 = g_8c4a9d54;
    g_8c4a9c5c = *(u32 *)(iVar4 + 4);
    g_8c4a9c60 = *(u32 *)(iVar4 + 8);
    g_8c4a9c64 = *(u32 *)(iVar4 + 0xc);
    uVar6 = *(u32 *)(iVar4 + 0x14);
    iVar1 = ta_param_push2_if(g_8c4a9d4c, 6, *(u32 *)(iVar4 + 0x10), uVar6);
    *(u32 *)(&g_8c4a9c50 + iVar1 * 4) = *(u32 *)(iVar4 + 0x18);
    iVar1 = ta_param_push1_if(uVar2, iVar1 + 1, *(u32 *)(iVar4 + 0x1c));
    *(u32 *)(&g_8c4a9c50 + iVar1 * 4) = *(u32 *)(iVar3 + 4);
    *(u32 *)(&g_8c4a9c50 + (iVar1 + 1) * 4) = *(u32 *)(iVar3 + 8);
    *(u32 *)(&g_8c4a9c50 + (iVar1 + 2) * 4) = *(u32 *)(iVar3 + 0xc);
    uVar6 = *(u32 *)(iVar3 + 0x14);
    iVar1 = ta_param_push2_if(uVar2, iVar1 + 3, *(u32 *)(iVar3 + 0x10), uVar6);
    *(u32 *)(&g_8c4a9c50 + iVar1 * 4) = *(u32 *)(iVar3 + 0x18);
    iVar3 = ta_param_push1_if(uVar2, iVar1 + 1, *(u32 *)(iVar3 + 0x1c));
    *(u32 *)(&g_8c4a9c50 + iVar3 * 4) = *(u32 *)(iVar5 + 4);
    *(u32 *)(&g_8c4a9c50 + (iVar3 + 1) * 4) = *(u32 *)(iVar5 + 8);
    *(u32 *)(&g_8c4a9c50 + (iVar3 + 2) * 4) = *(u32 *)(iVar5 + 0xc);
    ar7_00 = *(u32 *)(iVar5 + 0x14);
    iVar1 = iVar5;
    iVar3 = ta_param_push2_if(uVar2, iVar3 + 3, *(u32 *)(iVar5 + 0x10), ar7_00);
    ar5_00 = iVar3 + 1;
    *(u32 *)(&g_8c4a9c50 + iVar3 * 4) = *(u32 *)(iVar5 + 0x18);
    uVar6 = *(u32 *)(iVar5 + 0x1c);
    g_8c4a9d48 = ta_param_push1_if(uVar2, ar5_00, uVar6);
    g_8c4a9d48 = g_8c4a9d48 << 2;
    uVar2 = ta_param_word_count(uVar2, ar5_00, uVar6);
    ta_fifo_2081e0(uVar2, 0, 0);
    g_8c4a9d5c = *(u32 *)(iVar4 + 0xc);
    return 0;
}

/*
 * shinobi_draw_209a40  0x8c209a40
 * area name: in the shinobi library code range; behaviour name: mostly calls draw functions
 */
u32 shinobi_draw_209a40(int *a0) {
    int iVar1;
    u32 uVar2;
    int iVar3;
    int ain0;
    int iVar4;
    u32 ar6_00;

    uVar2 = g_8c4a9d4c;
    ain0 = *a0;
    iVar3 = a0[1];
    iVar4 = a0[2];
    g_8c4a9c50 = g_8c4a9d4c;
    g_8c4a9c54 = g_8c4a9d50;
    g_8c4a9c58 = g_8c4a9d54;
    g_8c4a9c5c = *(u32 *)(ain0 + 4);
    g_8c4a9c60 = *(u32 *)(ain0 + 8);
    g_8c4a9c64 = *(u32 *)(ain0 + 0xc);
    iVar1 = ta_param_push_color_if(g_8c4a9d4c, 6, *(u32 *)(ain0 + 0x10));
    *(u32 *)(&g_8c4a9c50 + iVar1 * 4) = *(u32 *)(ain0 + 0x18);
    iVar1 = ta_param_push1_if(uVar2, iVar1 + 1, *(u32 *)(ain0 + 0x1c));
    *(u32 *)(&g_8c4a9c50 + iVar1 * 4) = *(u32 *)(iVar3 + 4);
    *(u32 *)(&g_8c4a9c50 + (iVar1 + 1) * 4) = *(u32 *)(iVar3 + 8);
    *(u32 *)(&g_8c4a9c50 + (iVar1 + 2) * 4) = *(u32 *)(iVar3 + 0xc);
    iVar1 = ta_param_push_color_if(uVar2, iVar1 + 3, *(u32 *)(ain0 + 0x10));
    *(u32 *)(&g_8c4a9c50 + iVar1 * 4) = *(u32 *)(iVar3 + 0x18);
    iVar1 = ta_param_push1_if(uVar2, iVar1 + 1, *(u32 *)(iVar3 + 0x1c));
    *(u32 *)(&g_8c4a9c50 + iVar1 * 4) = *(u32 *)(iVar4 + 4);
    *(u32 *)(&g_8c4a9c50 + (iVar1 + 1) * 4) = *(u32 *)(iVar4 + 8);
    *(u32 *)(&g_8c4a9c50 + (iVar1 + 2) * 4) = *(u32 *)(iVar4 + 0xc);
    iVar1 = ta_param_push_color_if(uVar2, iVar1 + 3, *(u32 *)(iVar4 + 0x10));
    iVar3 = iVar1 + 1;
    *(u32 *)(&g_8c4a9c50 + iVar1 * 4) = *(u32 *)(iVar4 + 0x18);
    ar6_00 = *(u32 *)(iVar4 + 0x1c);
    g_8c4a9d48 = ta_param_push1_if(uVar2, iVar3, ar6_00);
    g_8c4a9d48 = g_8c4a9d48 << 2;
    uVar2 = ta_param_word_count(uVar2, iVar3, ar6_00);
    ta_fifo_2081e0(uVar2, 0, 0);
    g_8c4a9d5c = *(u32 *)(ain0 + 0xc);
    return 0;
}

/*
 * shinobi_draw_209c00  0x8c209c00
 * area name: in the shinobi library code range; behaviour name: mostly calls draw functions
 */
u32 shinobi_draw_209c00(int *a0) {
    int iVar1;
    u32 uVar2;
    int iVar3;
    int iVar4;
    int iVar5;
    u32 uVar6;
    int ar5_00;
    float fVar7;
    double in_dr2;
    float in_fr15;
    u32 in_fr14;
    u32 uVar8;
    char cVar9;
    char cVar10;

    uVar2 = g_8c4a9d4c;
    cVar10 = '\0';
    cVar9 = '\0';
    iVar4 = *a0;
    iVar3 = a0[1];
    iVar5 = a0[2];
    g_8c4a9c50 = g_8c4a9d4c;
    g_8c4a9c54 = g_8c4a9d50;
    g_8c4a9c58 = g_8c4a9d54;
    g_8c4a9c5c = *(u32 *)(iVar4 + 4);
    g_8c4a9c60 = *(u32 *)(iVar4 + 8);
    g_8c4a9c64 = *(u32 *)(iVar4 + 0xc);
    uVar6 = *(u32 *)(iVar4 + 0x14);
    iVar1 = ta_param_push2_if(g_8c4a9d4c, 6, *(u32 *)(iVar4 + 0x10), uVar6);
    if (cVar10 == '\0') {
        in_dr2 = (double)CONCAT44((int)((u64)in_dr2 >> 0x20), *(u32 *)(iVar4 + 0x18));
        in_fr15 = 255.0;
    }
    if (cVar9 == '\0') {
        fVar7 = SUB84(in_dr2, 0) * in_fr15;
        in_dr2 = (double)CONCAT44((int)((u64)in_dr2 >> 0x20), fVar7);
        uVar8 = (u32)fVar7;
    } else {
        in_dr2 = in_dr2 * (double)CONCAT44(in_fr14, in_fr15);
        uVar8 = (u32)in_dr2;
    }
    *(u32 *)(&g_8c4a9c50 + iVar1 * 4) = uVar8 << 0x18 | uVar8 << 0x10 | uVar8 << 8 | uVar8;
    if (cVar10 == '\0') {
        in_dr2 = (double)CONCAT44((int)((u64)in_dr2 >> 0x20), *(u32 *)(iVar4 + 0x1c));
    }
    if (cVar9 == '\0') {
        fVar7 = SUB84(in_dr2, 0) * in_fr15;
        in_dr2 = (double)CONCAT44((int)((u64)in_dr2 >> 0x20), fVar7);
        uVar8 = (u32)fVar7;
    } else {
        in_dr2 = in_dr2 * (double)CONCAT44(in_fr14, in_fr15);
        uVar8 = (u32)in_dr2;
    }
    iVar1 = ta_param_push1_if(uVar2, iVar1 + 1, uVar8 << 0x18 | uVar8 << 0x10 | uVar8 << 8 | uVar8);
    *(u32 *)(&g_8c4a9c50 + iVar1 * 4) = *(u32 *)(iVar3 + 4);
    *(u32 *)(&g_8c4a9c50 + (iVar1 + 1) * 4) = *(u32 *)(iVar3 + 8);
    *(u32 *)(&g_8c4a9c50 + (iVar1 + 2) * 4) = *(u32 *)(iVar3 + 0xc);
    uVar6 = *(u32 *)(iVar3 + 0x14);
    iVar1 = ta_param_push2_if(uVar2, iVar1 + 3, *(u32 *)(iVar3 + 0x10), uVar6);
    if (cVar10 == '\0') {
        in_dr2 = (double)CONCAT44((int)((u64)in_dr2 >> 0x20), *(u32 *)(iVar3 + 0x18));
    }
    if (cVar9 == '\0') {
        fVar7 = SUB84(in_dr2, 0) * in_fr15;
        in_dr2 = (double)CONCAT44((int)((u64)in_dr2 >> 0x20), fVar7);
        uVar8 = (u32)fVar7;
    } else {
        in_dr2 = in_dr2 * (double)CONCAT44(in_fr14, in_fr15);
        uVar8 = (u32)in_dr2;
    }
    *(u32 *)(&g_8c4a9c50 + iVar1 * 4) = uVar8 << 0x18 | uVar8 << 0x10 | uVar8 << 8 | uVar8;
    if (cVar10 == '\0') {
        in_dr2 = (double)CONCAT44((int)((u64)in_dr2 >> 0x20), *(u32 *)(iVar3 + 0x1c));
    }
    if (cVar9 == '\0') {
        fVar7 = SUB84(in_dr2, 0) * in_fr15;
        in_dr2 = (double)CONCAT44((int)((u64)in_dr2 >> 0x20), fVar7);
        uVar8 = (u32)fVar7;
    } else {
        in_dr2 = in_dr2 * (double)CONCAT44(in_fr14, in_fr15);
        uVar8 = (u32)in_dr2;
    }
    iVar3 = ta_param_push1_if(uVar2, iVar1 + 1, uVar8 << 0x18 | uVar8 << 0x10 | uVar8 << 8 | uVar8);
    *(u32 *)(&g_8c4a9c50 + iVar3 * 4) = *(u32 *)(iVar5 + 4);
    *(u32 *)(&g_8c4a9c50 + (iVar3 + 1) * 4) = *(u32 *)(iVar5 + 8);
    *(u32 *)(&g_8c4a9c50 + (iVar3 + 2) * 4) = *(u32 *)(iVar5 + 0xc);
    uVar6 = *(u32 *)(iVar5 + 0x14);
    iVar1 = iVar5;
    iVar3 = ta_param_push2_if(uVar2, iVar3 + 3, *(u32 *)(iVar5 + 0x10), uVar6);
    if (cVar10 == '\0') {
        in_dr2 = (double)CONCAT44((int)((u64)in_dr2 >> 0x20), *(u32 *)(iVar5 + 0x18));
    }
    ar5_00 = iVar3 + 1;
    if (cVar9 == '\0') {
        fVar7 = SUB84(in_dr2, 0) * in_fr15;
        in_dr2 = (double)CONCAT44((int)((u64)in_dr2 >> 0x20), fVar7);
        uVar8 = (u32)fVar7;
    } else {
        in_dr2 = in_dr2 * (double)CONCAT44(in_fr14, in_fr15);
        uVar8 = (u32)in_dr2;
    }
    *(u32 *)(&g_8c4a9c50 + iVar3 * 4) = uVar8 << 0x18 | uVar8 << 0x10 | uVar8 << 8 | uVar8;
    if (cVar10 == '\0') {
        in_dr2 = (double)CONCAT44((int)((u64)in_dr2 >> 0x20), *(u32 *)(iVar5 + 0x1c));
    }
    if (cVar9 == '\0') {
        uVar8 = (u32)(SUB84(in_dr2, 0) * in_fr15);
    } else {
        uVar8 = (u32)(in_dr2 * (double)CONCAT44(in_fr14, in_fr15));
    }
    uVar8 = uVar8 << 0x18 | uVar8 << 0x10 | uVar8 << 8 | uVar8;
    g_8c4a9d48 = ta_param_push1_if(uVar2, ar5_00, uVar8);
    g_8c4a9d48 = g_8c4a9d48 << 2;
    uVar2 = ta_param_word_count(uVar2, ar5_00, uVar8);
    ta_fifo_2081e0(uVar2, 0, 0);
    g_8c4a9d5c = *(u32 *)(iVar4 + 0xc);
    return 0;
}

/*
 * shinobi_draw_209e80  0x8c209e80
 * area name: in the shinobi library code range; behaviour name: mostly calls draw functions
 */
u32 shinobi_draw_209e80(int *a0) {
    int iVar1;
    u32 uVar2;
    int iVar3;
    int ain0;
    int iVar4;
    float fVar5;
    double in_dr2;
    float in_fr15;
    u32 in_fr14;
    u32 uVar6;
    char cVar7;
    char cVar8;

    uVar2 = g_8c4a9d4c;
    cVar8 = '\0';
    cVar7 = '\0';
    ain0 = *a0;
    iVar3 = a0[1];
    iVar4 = a0[2];
    g_8c4a9c50 = g_8c4a9d4c;
    g_8c4a9c54 = g_8c4a9d50;
    g_8c4a9c58 = g_8c4a9d54;
    g_8c4a9c5c = *(u32 *)(ain0 + 4);
    g_8c4a9c60 = *(u32 *)(ain0 + 8);
    g_8c4a9c64 = *(u32 *)(ain0 + 0xc);
    iVar1 = ta_param_push_color_if(g_8c4a9d4c, 6, *(u32 *)(ain0 + 0x10));
    if (cVar8 == '\0') {
        in_dr2 = (double)CONCAT44((int)((u64)in_dr2 >> 0x20), *(u32 *)(ain0 + 0x18));
        in_fr15 = 255.0;
    }
    if (cVar7 == '\0') {
        fVar5 = SUB84(in_dr2, 0) * in_fr15;
        in_dr2 = (double)CONCAT44((int)((u64)in_dr2 >> 0x20), fVar5);
        uVar6 = (u32)fVar5;
    } else {
        in_dr2 = in_dr2 * (double)CONCAT44(in_fr14, in_fr15);
        uVar6 = (u32)in_dr2;
    }
    *(u32 *)(&g_8c4a9c50 + iVar1 * 4) = uVar6 << 0x18 | uVar6 << 0x10 | uVar6 << 8 | uVar6;
    if (cVar8 == '\0') {
        in_dr2 = (double)CONCAT44((int)((u64)in_dr2 >> 0x20), *(u32 *)(ain0 + 0x1c));
    }
    if (cVar7 == '\0') {
        fVar5 = SUB84(in_dr2, 0) * in_fr15;
        in_dr2 = (double)CONCAT44((int)((u64)in_dr2 >> 0x20), fVar5);
        uVar6 = (u32)fVar5;
    } else {
        in_dr2 = in_dr2 * (double)CONCAT44(in_fr14, in_fr15);
        uVar6 = (u32)in_dr2;
    }
    iVar1 = ta_param_push1_if(uVar2, iVar1 + 1, uVar6 << 0x18 | uVar6 << 0x10 | uVar6 << 8 | uVar6);
    *(u32 *)(&g_8c4a9c50 + iVar1 * 4) = *(u32 *)(iVar3 + 4);
    *(u32 *)(&g_8c4a9c50 + (iVar1 + 1) * 4) = *(u32 *)(iVar3 + 8);
    *(u32 *)(&g_8c4a9c50 + (iVar1 + 2) * 4) = *(u32 *)(iVar3 + 0xc);
    iVar1 = ta_param_push_color_if(uVar2, iVar1 + 3, *(u32 *)(iVar3 + 0x10));
    if (cVar8 == '\0') {
        in_dr2 = (double)CONCAT44((int)((u64)in_dr2 >> 0x20), *(u32 *)(iVar3 + 0x18));
    }
    if (cVar7 == '\0') {
        fVar5 = SUB84(in_dr2, 0) * in_fr15;
        in_dr2 = (double)CONCAT44((int)((u64)in_dr2 >> 0x20), fVar5);
        uVar6 = (u32)fVar5;
    } else {
        in_dr2 = in_dr2 * (double)CONCAT44(in_fr14, in_fr15);
        uVar6 = (u32)in_dr2;
    }
    *(u32 *)(&g_8c4a9c50 + iVar1 * 4) = uVar6 << 0x18 | uVar6 << 0x10 | uVar6 << 8 | uVar6;
    if (cVar8 == '\0') {
        in_dr2 = (double)CONCAT44((int)((u64)in_dr2 >> 0x20), *(u32 *)(iVar3 + 0x1c));
    }
    if (cVar7 == '\0') {
        fVar5 = SUB84(in_dr2, 0) * in_fr15;
        in_dr2 = (double)CONCAT44((int)((u64)in_dr2 >> 0x20), fVar5);
        uVar6 = (u32)fVar5;
    } else {
        in_dr2 = in_dr2 * (double)CONCAT44(in_fr14, in_fr15);
        uVar6 = (u32)in_dr2;
    }
    iVar1 = ta_param_push1_if(uVar2, iVar1 + 1, uVar6 << 0x18 | uVar6 << 0x10 | uVar6 << 8 | uVar6);
    *(u32 *)(&g_8c4a9c50 + iVar1 * 4) = *(u32 *)(iVar4 + 4);
    *(u32 *)(&g_8c4a9c50 + (iVar1 + 1) * 4) = *(u32 *)(iVar4 + 8);
    *(u32 *)(&g_8c4a9c50 + (iVar1 + 2) * 4) = *(u32 *)(iVar4 + 0xc);
    iVar1 = ta_param_push_color_if(uVar2, iVar1 + 3, *(u32 *)(iVar4 + 0x10));
    if (cVar8 == '\0') {
        in_dr2 = (double)CONCAT44((int)((u64)in_dr2 >> 0x20), *(u32 *)(iVar4 + 0x18));
    }
    iVar3 = iVar1 + 1;
    if (cVar7 == '\0') {
        fVar5 = SUB84(in_dr2, 0) * in_fr15;
        in_dr2 = (double)CONCAT44((int)((u64)in_dr2 >> 0x20), fVar5);
        uVar6 = (u32)fVar5;
    } else {
        in_dr2 = in_dr2 * (double)CONCAT44(in_fr14, in_fr15);
        uVar6 = (u32)in_dr2;
    }
    *(u32 *)(&g_8c4a9c50 + iVar1 * 4) = uVar6 << 0x18 | uVar6 << 0x10 | uVar6 << 8 | uVar6;
    if (cVar8 == '\0') {
        in_dr2 = (double)CONCAT44((int)((u64)in_dr2 >> 0x20), *(u32 *)(iVar4 + 0x1c));
    }
    if (cVar7 == '\0') {
        uVar6 = (u32)(SUB84(in_dr2, 0) * in_fr15);
    } else {
        uVar6 = (u32)(in_dr2 * (double)CONCAT44(in_fr14, in_fr15));
    }
    uVar6 = uVar6 << 0x18 | uVar6 << 0x10 | uVar6 << 8 | uVar6;
    g_8c4a9d48 = ta_param_push1_if(uVar2, iVar3, uVar6);
    g_8c4a9d48 = g_8c4a9d48 << 2;
    uVar2 = ta_param_word_count(uVar2, iVar3, uVar6);
    ta_fifo_2081e0(uVar2, 0, 0);
    g_8c4a9d5c = *(u32 *)(ain0 + 0xc);
    return 0;
}

/*
 * shinobi_draw_20a104  0x8c20a104
 * area name: in the shinobi library code range; behaviour name: mostly calls draw functions
 */
u32 shinobi_draw_20a104(u32 a0) {
    u32 in_r3;
    u32 ar5_00;

    if ((in_r3 & a0) != 0) {
        a0 = 0;
    }
    if ((0x7fffff00 & a0) != 0) {
        a0 = (u32)0xff;
    }
    g_8c4a9c4c = a0;
    ar5_00 = g_8c4a9e78 & 0xff00ffff | (a0 & 0xff) << 0xf;
    g_8c4a9e78 = ar5_00;
    pvr_20a844(0x48, ar5_00);
    return 0;
}

/*
 * pvr_wrap  0x8c20a13a
 * only calls pvr_20a844
 * called by: ninja_draw_2588f8
 */
u32 pvr_wrap(void) {
    u32 in_fr4;

    pvr_20a844(0x78, in_fr4 & 0x7fffffff);
    return 0;
}

/*
 * pvr_draw_20a156  0x8c20a156
 * area name: sits between pvr functions (same compilation unit); behaviour name: mostly calls draw functions
 * called by: draw_draw_helper_2599fa
 */
u32 pvr_draw_20a156(u32 unused_a0, u32 unused_a1, u32 unused_a2, u32 unused_a3, u32 s0, u32 s4) {
    pvr_20a844((int)0xbc, s0);
    pvr_20a844((int)0xc0, s4);
    return 0;
}

/*
 * pvr_wrap_20a16e  0x8c20a16e
 * only calls pvr_20a844
 * called by: ninja_draw_257104, ninja_draw_257120
 */
u32 pvr_wrap_20a16e(u32 unused_a0, u32 unused_a1, u32 unused_a2, u32 unused_a3, u32 s0) {
    pvr_20a844((int)0xb0, s0);
    return 0;
}

/*
 * pvr_wrap_20a1c0  0x8c20a1c0
 * only calls pvr_20a844
 */
u32 pvr_wrap_20a1c0(u32 unused_a0, u32 unused_a1, u32 unused_a2, u32 unused_a3, u32 s0) {
    pvr_20a844((int)0xb4, s0);
    return 0;
}

/*
 * pvr_fog_table_write  0x8c20a1d0
 * writes the 128-entry fog table (PVR 0x200) from a0's float densities scaled to 0..255, pairing each entry with the
 * next called by: pvr_fill_fog_table_like
 */
u32 pvr_fog_table_write(int a0, u32 a1) {
    u32 uVar1;
    int iVar2;
    float fVar4;
    double dVar3;
    float fVar5;
    u32 in_fr14;
    u32 uVar6;
    char cVar7;
    char cVar8;

    cVar8 = '\0';
    cVar7 = '\0';
    iVar2 = 0x80;
    fVar5 = 255.0;
    fVar4 = *(float *)(a0 + 0x1fc) * 255.0;
    dVar3 = (double)CONCAT44(fVar4, *(float *)(a0 + 0x1fc));
    uVar1 = (int)fVar4 & 0xff;
    do {
        iVar2 = iVar2 + -1;
        if (cVar8 == '\0') {
            dVar3 = (double)CONCAT44(*(u32 *)(iVar2 * 4 + a0), SUB84(dVar3, 0));
        } else {
            dVar3 = *(double *)(iVar2 * 4 + a0);
        }
        if (cVar7 == '\0') {
            fVar4 = (float)((u64)dVar3 >> 0x20) * fVar5;
            dVar3 = (double)CONCAT44(fVar4, SUB84(dVar3, 0));
            uVar6 = (u32)fVar4;
        } else {
            dVar3 = dVar3 * (double)CONCAT44(in_fr14, fVar5);
            uVar6 = (u32)dVar3;
        }
        pvr_20a844(iVar2 * 4 + 0x200, (uVar6 & 0xff) << 8 | uVar1);
        uVar1 = uVar6 & 0xff;
    } while (iVar2 != 0);
    return 0;
}

/*
 * alt_entry_20a1e4  0x8c20a1e4
 * probably an entry 20 bytes into 8c20a1d0: it reads registers that code sets before it
 */
u32 alt_entry_20a1e4(u32 unused_a0, u32 unused_a1, u32 a2, u32 a3) {
    u8 *puVar1;
    float *in_r0;
    int unaff_r10;
    int iVar2;
    u32 uVar3;
    int unaff_r14;
    u32 in_fr3;
    double dVar4;
    float in_fr15;
    double in_xd2;
    u32 uVar6;
    u32 uVar7;
    float fVar5;

    puVar1 = (&pvr_20a844);

    in_fr15 = *in_r0;

    uVar3 = unaff_r14 + 0x7f;

    in_fr3 = *(u32 *)(0x1fc + unaff_r10);

    iVar2 = (int)0x200;

    in_xd2 = (double)CONCAT44(in_fr3, in_fr3);

    fVar5 = (float)((u64)in_xd2 >> 0x20) * in_fr15;
    dVar4 = (double)CONCAT44(fVar5, SUB84(in_xd2, 0));
    uVar6 = (u32)fVar5;

    uVar6 = uVar6 & uVar3;
    do {
        unaff_r14 = unaff_r14 + -1;

        dVar4 = (double)CONCAT44(*(u32 *)(unaff_r14 * 4 + unaff_r10), SUB84(dVar4, 0));

        fVar5 = (float)((u64)dVar4 >> 0x20) * in_fr15;
        dVar4 = (double)CONCAT44(fVar5, SUB84(dVar4, 0));
        uVar7 = (u32)fVar5;

        uVar7 = uVar7 & uVar3;
        (*(code *)puVar1)(unaff_r14 * 4 + iVar2, (uVar7 << 8 | uVar6) & 0xffff, a2, a3);
        uVar6 = uVar7;
    } while (unaff_r14 != 0);
    return 0;
}

/*
 * pvr_wrap_20a238  0x8c20a238
 * only calls pvr_20a844
 * called by: pvr_draw_235f84
 */
u32 pvr_wrap_20a238(u32 a0) {
    pvr_20a844((int)0xb8, a0);
    return 0;
}

/*
 * shinobi_draw_20a280  0x8c20a280
 * area name: in the shinobi library code range; behaviour name: mostly calls draw functions
 * called by: ninja_set_palette_format
 */
u32 shinobi_draw_20a280(u32 a0) {
    if ((a0 & 0xfffffffc) == 0) {
        g_8c4a9c48 = a0;
        pvr_20a844((int)0x108, a0);
    }
    return 0;
}

/*
 * alt_entry_20a284  0x8c20a284
 * probably an entry 4 bytes into 8c20a280: it reads registers that code sets before it
 */
u32 alt_entry_20a284(u32 a0) {
    u32 in_r3;

    if ((in_r3 & a0) == 0) {
        g_8c4a9c48 = a0;
        pvr_20a844((int)0x108, a0);
    }
    return 0;
}

/*
 * ta_fifo_20a2aa  0x8c20a2aa
 */
u32 ta_fifo_20a2aa(u32 unused_a0, u32 unused_a1, u32 a2, u32 a3) {
    u8 *puVar1;
    u32 ar5_00;
    int iVar2;
    int unaff_r12;
    u32 *unaff_r13;
    int ar4_00;

    puVar1 = (&pvr_20a844);
    ar4_00 = (int)0x1000;
    iVar2 = (int)0x400;
    do {
        ar5_00 = *unaff_r13;
        unaff_r13 = unaff_r13 + 1;
        (*(code *)puVar1)(ar4_00, ar5_00, a2, a3);
        unaff_r12 = unaff_r12 + 1;
        ar4_00 = ar4_00 + 4;
    } while (unaff_r12 < iVar2);
    return 0;
}

/*
 * pvr_palette_upload  0x8c20a2e2
 * writes palette entries a0..a1 (at most 0x3ff) from the table a2 into PVR palette RAM (a05f9000)
 */
u32 pvr_palette_upload(int a0, int a1, int a2, u32 a3) {
    u8 *puVar1;
    int in_r3;
    u32 ar5_00;
    u32 *puVar2;
    int ar4_00;

    puVar1 = (&pvr_20a844);
    if (in_r3 < a1) {
        a1 = (int)0x3ff;
    }
    ar4_00 = a0 * 4 + (int)0x1000;
    puVar2 = (u32 *)(a0 * 4 + a2);
    for (; a0 < a1; a0 = a0 + 1) {
        ar5_00 = *puVar2;
        puVar2 = puVar2 + 1;
        (*(code *)puVar1)(ar4_00, ar5_00, a2, a3);
        ar4_00 = ar4_00 + 4;
    }
    return 0;
}

/*
 * pvr_wrap_20a356  0x8c20a356
 * only calls pvr_20a844
 * called by: draw_draw_helper_259a1c
 */
u32 pvr_wrap_20a356(u32 unused_a0, u32 unused_a1, u32 unused_a2, u32 unused_a3, u32 s0) {
    pvr_20a844(0x40, s0);
    return 0;
}

/*
 * colors_float_to_argb_70_80  0x8c20a366
 * packs the RGBA float colours at +0x70 and +0x80 into ARGB words and copies +0x94..+0x9c
 * called by: ninja_draw_2588f8
 */
u32 colors_float_to_argb_70_80(int a0) {
    g_8c4a9d64 = (int)(*(float *)(a0 + 0x70) * 255.0) << 0x18 | (int)(*(float *)(a0 + 0x74) * 255.0) << 0x10 |
                 (int)(*(float *)(a0 + 0x78) * 255.0) << 8 | (int)(*(float *)(a0 + 0x7c) * 255.0);
    g_8c4a9d68 = (int)(*(float *)(a0 + 0x80) * 255.0) << 0x18 | (int)(*(float *)(a0 + 0x84) * 255.0) << 0x10 |
                 (int)(*(float *)(a0 + 0x88) * 255.0) << 8 | (int)(*(float *)(a0 + 0x8c) * 255.0);
    g_8c4a9d4c = *(u32 *)(a0 + 0x94);
    g_8c4a9d50 = *(u32 *)(a0 + 0x98);
    g_8c4a9d54 = *(u32 *)(a0 + 0x9c);
    return 0;
}

/*
 * pvr_calc_20a420  0x8c20a420
 * area name: sits between pvr functions (same compilation unit); behaviour name: integer arithmetic on its arguments
 * called by: ninja_calls_calc_259046
 */
u32 pvr_calc_20a420(u32 a0, int a1, u32 a2, u32 a3) {
    u32 uVar1;

    uVar1 = (*(code *)(&PTR_FUN_8c2756c0)[a1])(a0, a1, a2, a3);
    g_8c4a9c50 = g_8c4a9c50 & 0xfff00000;
    return uVar1;
}

/*
 * pvr_set_clip_rect  0x8c20a482
 * sets the tile clip rectangle (a0, a1)-(a2, a3), at most 2047, even in mode 4; 0xdddd if empty
 * called by: alt_entry_25b052, kamui_draw_20bdc0, kamui_draw_20c416, ninja_draw_25b044, ninja_draw_into_texture_entry
 */
u32 pvr_set_clip_rect(u32 a0, u32 a1, u32 a2, u32 a3) {
    u32 uVar1;

    if (((int)a0 <= (int)a2) && ((int)a1 <= (int)a3)) {
        uVar1 = (u32)0x7ff;
        if ((int)uVar1 < (int)a2) {
            a2 = uVar1;
        }
        if ((int)uVar1 < (int)a3) {
            a3 = uVar1;
        }
        if (g_8c4a9bd0 == 4) {
            a2 = a2 & 0xfffffffe;
            a3 = a3 & 0xfffffffe;
            a0 = a0 + 1 & 0xfffffffe;
            a1 = a1 + 1 & 0xfffffffe;
        }
        g_8c4a9e60 = a0 & uVar1 | (a2 & uVar1) << 0x10;
        g_8c4a9e64 = (a3 & uVar1) << 0x10 | a1 & uVar1;
        return 0;
    }
    return 0xdddd;
}

/*
 * pvr_draw_20a52c  0x8c20a52c
 * area name: sits between pvr functions (same compilation unit); behaviour name: mostly calls draw functions
 */
u32 pvr_draw_20a52c(int a0, int *a1, u32 a2, u32 a3) {
    u8 *puVar1;
    int *piVar2;
    int iVar3;
    int iVar4;
    u32 uVar5;
    u32 uVar6;

    if (g_8c4a9be4 == 1) {
        iVar4 = g_8c4a9e70;
        iVar3 = g_8c4a9be8;
        g_8c4a9dc4 = g_8c4a9dc4 + iVar3 * iVar4 * -8;
        g_8c4a9dc8 = g_8c4a9dc8 + iVar3 * iVar4 * -8;
    }
    if (a0 == 0) {
        g_8c4a9be8 = 0;
    } else if (a0 == 1) {
        if (((g_8c4a9bcc & 1) == 1) || ((g_8c4a9bcc & 0x20) != 0)) {
            g_8c4a9be8 = 0x10;
        } else {
            g_8c4a9be8 = 8;
        }
        iVar3 = g_8c4a9be8 * g_8c4a9e70 * 8;
        g_8c4a9dc4 = g_8c4a9dc4 + iVar3;
        g_8c4a9dc8 = iVar3 + g_8c4a9dc8;
    }
    uVar6 = g_8c4a9e6c & 0xfff003ff;
    piVar2 = 0x8c4a9be8;
    if (g_8c4a9be8 < g_8c4a9c00) {
        piVar2 = 0x8c4a9c00;
    }
    uVar5 = g_8c4a9bf0 - *piVar2;
    if (g_8c4a9bf0 < g_8c4a9c00 + uVar5) {
        uVar5 = g_8c4a9bf0 - g_8c4a9be8;
    }
    if (g_8c4a9bf0 < uVar5) {
        g_8c4a9bf0 = uVar5;
    }
    g_8c4a9e6c = (uVar5 & (int)0x3ff) << 10 | uVar6;
    puVar1 = (&pvr_20a844);
    pvr_20a844(0x44, 0);
    (*(code *)puVar1)(0x5c, g_8c4a9e6c, a2, a3);
    (*(code *)puVar1)(0x44, g_8c4a9e74, a2, a3);
    g_8c4a9be4 = a0;
    if (a1 != NULL) {
        *a1 = g_8c4a9be8;
    }
    return 0;
}

/*
 * pvr_draw_20a6f2  0x8c20a6f2
 * area name: sits between pvr functions (same compilation unit); behaviour name: mostly calls draw functions
 */
u32 pvr_draw_20a6f2(void) {
    kamui_fill_loop_21214e();
    shinobi_draw_205a40();
    return 0;
}

/*
 * pvr_test_20a786  0x8c20a786
 * area name: sits between pvr functions (same compilation unit); behaviour name: returns the result of a comparison
 * called by: ninja_uses_aica_reg_258604, pvr_25825a
 */
u32 pvr_test_20a786(int a0) {
    g_8c4a9d90 = a0 + -1;
    return 0;
}

/*
 * pvr_draw_20a790  0x8c20a790
 * area name: sits between pvr functions (same compilation unit); behaviour name: mostly calls draw functions
 */
u32 pvr_draw_20a790(u32 *a0, u32 *a1) {
    u32 uVar1;
    u32 uVar2;

    uVar1 = pvr_20a876((int)0xc4);
    uVar2 = (u32)0x3ff;
    *a0 = uVar1 & uVar2;
    *a1 = uVar1 >> 0x10 & uVar2;
    return 0;
}

/*
 * pvr_calls_scan_loop_20a7e0  0x8c20a7e0
 * area name: sits between pvr functions (same compilation unit); behaviour name: its callees mostly do: scan_loop
 * called by: tex_uses_dcache_writeback_range_25a770, vram_calls_scan_loop_25ad42
 */
u32 pvr_calls_scan_loop_20a7e0(void) {
    int iVar1;

    if ((g_8c4a9fdc != 1) && (iVar1 = sh4_scan_loop_203298(g_8c4a9fd8), iVar1 != 1)) {
        return 0x11;
    }
    return 0;
}

/*
 * noop_20a840  0x8c20a840
 * called by: shinobi_draw_206162
 */
u32 noop_20a840(void) {
    u32 in_r0;

    return in_r0;
}

/*
 * pvr_20a844  0x8c20a844
 * called by: alt_entry_207f84, alt_entry_20a284, g2dma_205a62, kamui_cfg_texture_memory, kamui_cfg_texture_memory_b,
 * kamui_draw_20bdc0, kamui_draw_20c416, kamui_draw_20c7e0 (+28 more)
 */
u32 pvr_20a844(int a0, u32 a1) {
    *(u32 *)(a0 + 0xa05f8000) = a1;
    return 1;
}

/*
 * cache_writeback_range  0x8c20a84e
 * writes back the cache blocks covering a1 bytes at a0
 * called by: vram64_20a8e0, vram64_20a9c2
 */
u32 cache_writeback_range(u32 a0, int a1) {
    u8 *puVar1;
    u32 in_r0;
    u32 uVar2;
    code *pcVar3;

    puVar1 = (&CacheBlockWriteBack_wrap);
    pcVar3 = CacheBlockWriteBack_wrap;
    uVar2 = a0 + a1;
    for (; a0 <= uVar2; a0 = a0 + 0x20) {
        in_r0 = (*(code *)puVar1)(a0, pcVar3);
    }
    return in_r0;
}

/*
 * alt_entry_20a85a  0x8c20a85a
 * probably an entry 12 bytes into 8c20a84e: it reads registers that code sets before it
 */
u32 alt_entry_20a85a(u32 unused_a0, u32 a1, u32 a2, u32 a3) {
    u8 *puVar1;
    u32 in_r0;
    u32 unaff_r13;
    u32 unaff_r14;

    puVar1 = (&CacheBlockWriteBack_wrap);
    for (; unaff_r14 <= unaff_r13; unaff_r14 = unaff_r14 + 0x20) {
        in_r0 = (*(code *)puVar1)(unaff_r14, a1, a2, a3);
    }
    return in_r0;
}

/*
 * pvr_20a876  0x8c20a876
 * called by: g2dma_205a62, kamui_draw_20bdc0, kamui_draw_20c416, kamui_draw_20c7e0, kamui_draw_211f40, pvr_draw_2076f6,
 * pvr_draw_20a790, pvr_set_texture_stride (+1 more)
 */
u32 pvr_20a876(int a0) {
    return *(u32 *)(0xa05f8000 + a0);
}

/*
 * vram_20a87c  0x8c20a87c
 * called by: shinobi_uses_sh4_dmac_202a80, ta_fifo_25d028, ta_fifo_25d0a0
 */
u32 vram_20a87c(int a0, u32 a1, u32 a2) {
    memcpy_words(a0 + 0xa5000000, a1, a2);
    return 1;
}

/*
 * vram_20a892  0x8c20a892
 * called by: alt_entry_20d086, kamui_uses_vram_20d082
 */
u32 vram_20a892(u32 a0, int a1, u32 a2) {
    memcpy_words(a0, a1 + 0xa5000000, a2);
    return 1;
}

/*
 * vram64_20a8e0  0x8c20a8e0
 * called by: kamui_uses_CacheBlockWriteBack_wrap_20d9ce, kamui_uses_CacheBlockWriteBack_wrap_20daa0,
 * kamui_uses_CacheBlockWriteBack_wrap_20db80, kamui_uses_vram64_20cb5a, kamui_uses_vram64_20cb5e,
 * kamui_uses_vram64_20cefe, ninja_uses_vram64_25aa80, ninja_uses_vram64_25ab02 (+9 more)
 */
u32 vram64_20a8e0(u32 a0, u32 a1, u32 a2) {
    u32 r7;
    int iVar1;
    u32 ar6_00;
    u32 ar6_01;
    u32 ar5_00;
    u8 in_IMASK;
    char in_S;
    u8 in_T;
    u32 *in_stack_ffffffdc;

    if ((((a0 & 0x1f) == 0) && ((a1 & 0x1f) == 0)) && (((in_T | in_S << 1) & 0xf0) == 0 && (in_IMASK & 0xf) == 0)) {
        ar5_00 = a2;
        cache_writeback_range(a1, a2);
        ar6_01 = a2 & 0xffffffe0;
        if (ar6_01 == 0) {
            g_8c4a9fd8 = 0;
        } else {
            do {
                r7 = 0x18;
                ar5_00 = a1;
                iVar1 = sh4_dmac_202f40(a0 + 0x11000000, a1, ar6_01, 0x18, &stack0xffffffdc);
            } while (iVar1 == 0x100);
            g_8c4a9fd8 = *in_stack_ffffffdc;
        }
        ar6_00 = a2 & 0x1f;
        if (ar6_00 != 0) {
            ar5_00 = a1 + ar6_01;
            memcpy_words(a0 + ar6_01 + -0x5c000000, ar5_00, ar6_00);
        }
        if (g_8c4a9fdc == 1) {
            shinobi_calls_scan_loop_203320(g_8c4a9fd8, ar5_00);
        }
    } else {
        memcpy_words(a0 + 0xa4000000, a1, a2);
    }
    return 1;
}

/*
 * vram64_20a9c2  0x8c20a9c2
 * called by: alt_entry_20d086, kamui_uses_CacheBlockWriteBack_wrap_20d9ce, kamui_uses_CacheBlockWriteBack_wrap_20daa0,
 * kamui_uses_CacheBlockWriteBack_wrap_20db80, kamui_uses_vram_20d082, shinobi_uses_vram64_204f2a,
 * tex_uses_CacheBlockWriteBack_wrap_20d82e, tex_uses_vram64_20d6ea (+1 more)
 */
u32 vram64_20a9c2(u32 a0, int a1, u32 a2) {
    memcpy_words(a0, a1 + -0x5c000000, a2);
    cache_writeback_range(a0, a2);
    return 1;
}

/*
 * ta_fifo_20aa40  0x8c20aa40
 * called by: shinobi_draw_206300
 */
u32 ta_fifo_20aa40(u32 a0) {
    u32 uVar1;
    u32 uVar2;
    u32 uVar3;
    u32 uVar4;
    u32 uVar5;
    u32 *puVar6;
    u32 *puVar7;
    int in_VBR;
    u8 in_MD;
    u8 in_RB;
    u8 in_BL;
    u8 in_FD;
    u8 in_M;
    u8 in_Q;
    u8 in_IMASK;
    u8 in_S;
    u8 in_T;

    puVar6 = 0xa05f6930;
    uVar1 = (u32)in_T | (u32)in_S << 1;
    uVar2 = uVar1 | (u32)in_IMASK << 4;
    uVar3 = uVar2 | (u32)in_Q << 8;
    uVar4 = uVar3 | (u32)in_M << 9;
    uVar5 = (u32)in_BL << 0x1c | (u32)in_RB << 0x1d;
    *(u32 *)(0x224 + in_VBR) = a0;
    *puVar6 = 0;
    puVar7 = 0xa05f6938;
    *0xa05f6938 = 0;
    *0xa05f6900 = 0xffffffff;
    *0xa05f6908 = 0xffffffff;
    *puVar6 = 0x2807ec;
    *puVar7 = 0xe;
    return ((u32)in_T | (u32)in_S << 1 | (u32)in_IMASK << 4) & 0xf0 |
           (in_T & 1 | uVar1 & 2 | uVar2 & 0xf0 | uVar3 & 0x100 | uVar4 & 0x200 | (uVar4 | (u32)in_FD << 0xf) & 0x8000 |
            (u32)in_BL << 0x1c & 0x10000000 | uVar5 & 0x20000000 |
            (u32)((((u8)(uVar5 >> 0x18) | (u8)(((u32)in_MD << 0x1e) >> 0x18)) & 0x40) >> 6) << 0x1e) &
               (int)(int)0xffffff0f;
}

/*
 * ta_fill_loop_20aacc  0x8c20aacc
 * area name: sits between ta functions (same compilation unit); behaviour name: a loop that writes memory
 * called by: draw_copy_259a70, ninja_uses_write_u32_le_25b12e
 */
u32 ta_fill_loop_20aacc(int a0) {
    int iVar1;
    int iVar2;
    u32 *puVar3;
    u32 *puVar4;
    u32 *puVar5;
    int iVar6;
    u32 uVar7;
    int iVar8;
    int iVar9;
    int iVar10;
    int iVar11;

    iVar1 = 0x8c4aa0b4;
    iVar9 = 4;
    iVar6 = 0;
    iVar10 = 0;
    iVar11 = 0;
    do {
        iVar2 = 0x8c4aa030;
        iVar8 = (1 - iVar10) * 0x18;
        *(u32 *)(a0 + iVar8) = *(u32 *)(0x8c4aa030 + iVar6);
        *(u32 *)(a0 + iVar8 + 4) = *(u32 *)(iVar2 + -0xc + iVar6);
        *(u32 *)(a0 + iVar8 + 8) = *(u32 *)(iVar2 + -0x14 + iVar6);
        *(u32 *)(a0 + iVar8 + 0xc) = *(u32 *)(iVar2 + 4 + iVar6);
        *(u32 *)(a0 + iVar8 + 0x10) = *(u32 *)(iVar2 + -8 + iVar6);
        iVar2 = 0x8c4a9dc4;
        *(u32 *)(iVar8 + a0 + 0x14) = *(u32 *)(iVar1 + 0x24 + iVar11);
        iVar10 = iVar10 + 1;
        puVar4 = (u32 *)(iVar2 + iVar11);
        iVar11 = iVar11 + 4;
        *(u32 *)(a0 + 0x38 + iVar9) = *puVar4;
        puVar3 = 0x8c4a9f08;
        iVar2 = 0x8c4a9ee0;
        iVar9 = iVar9 + -4;
        iVar6 = iVar6 + 0x20;
    } while (iVar10 < 2);
    if (g_8c4a9ef0 == 0) {
        puVar3 = (u32 *)(0x8c4a9ee0 + 0x28);
        *(u32 *)(a0 + 0x30) = *(u32 *)(0x8c4a9ee0 + (*puVar3 & 1) * 4);
        *(u32 *)(a0 + 0x34) = *(u32 *)(iVar2 + (1 - (*puVar3 & 1)) * 4);
    } else {
        *(u32 *)(a0 + 0x34) = *(u32 *)((g_8c4a9f08 & 1) * 4 + 0x8c4a9ee0);
        *(u32 *)(a0 + 0x30) = puVar3[-9 - (*puVar3 & 1)];
    }
    *(u32 *)(a0 + 0x40) = g_8c4a9e60;
    uVar7 = 0;
    *(u32 *)(a0 + 0x44) = g_8c4a9e64;
    iVar6 = 0;
    *(u32 *)(a0 + 0x48) = *(u32 *)(iVar1 + 8);
    *(u32 *)(a0 + 0x4c) = *(u32 *)(iVar1 + 0xc);
    *(u32 *)(a0 + 0x50) = *(u32 *)(iVar1 + 0x1c);
    *(u32 *)(a0 + 0x54) = *(u32 *)(iVar1 + 0x20);
    do {
        iVar10 = 0x8c4a9f2c + 4;
        *(u32 *)(a0 + 0x58 + uVar7) = *(u32 *)(0x8c4a9f2c + iVar6);
        iVar9 = 0x8c4aa070;
        *(u32 *)(a0 + uVar7 + 0x6c) = *(u32 *)(iVar10 + iVar6);
        *(u32 *)(0x80 + a0 + uVar7) = *(u32 *)(iVar9 + uVar7);
        puVar4 = (u32 *)(iVar1 + 0x2c + uVar7);
        puVar5 = (u32 *)(0x94 + a0 + uVar7);
        uVar7 = uVar7 + 4;
        *puVar5 = *puVar4;
        iVar6 = iVar6 + 0x10;
    } while (uVar7 < 0x14);
    *(u32 *)(a0 + 0xa8) = *(u32 *)(iVar1 + 0x4c);
    *(u32 *)(a0 + 0xac) = *(u32 *)(iVar1 + 0x44);
    return 0;
}

/*
 * pvr_set_yuv_converter  0x8c20ad04
 * programs TA_YUV_TEX_CTRL (size a3 x s0 macroblocks, format a1, a2 = tex) and TA_YUV_TEX_BASE from a0
 */
u32 pvr_set_yuv_converter(int a0, int a1, int a2, int a3, int s0) {
    u32 uVar1;
    u32 ar7_00;

    uVar1 = 0;
    if (a1 == 3) {
        uVar1 = 0x1000000;
    }
    ar7_00 = a3 - 1U & 0x3f;
    uVar1 = (s0 - 1U & 0x3f) << 8 | ar7_00 | uVar1;
    if (a2 != 0) {
        uVar1 = 0x10000 | uVar1;
    }
    pvr_20a844((int)0x14c, uVar1);
    pvr_20a844((int)0x148, *(u32 *)(a0 + 0x1c));
    return 0;
}

/*
 * pvr_display_regs_apply  0x8c20ade0
 * writes the frame buffer, video output, display start, frame size and scaler registers for display mode a0
 */
u32 pvr_display_regs_apply(int a0) {
    u32 ar5_00;
    int iVar1;
    u32 ar6_00;
    int iVar2;
    u32 ar7_00;
    u32 uVar3;
    u32 uVar4;
    u32 ain0;

    uVar4 = g_8c4a9e6c & 0xfff003ff;
    ar5_00 = g_8c4a9eac & 0xffff;
    iVar1 = g_8c4a9c0c;
    iVar2 = g_8c4a9c08;
    uVar3 = g_8c4a9bf0;
    if (a0 == 0) {
        ar5_00 = g_8c4a9eac & 0xff00;
    } else if ((((a0 != 1) && (a0 == 2)) && ((g_8c4a9bcc & 3) == 0)) &&
               (((g_8c4a9bcc & 0x20) != 0 && (((g_8c4a9bcc & 1) == 1 || ((g_8c4a9bcc & 0x2c) != 0x20)))))) {
        ar5_00 = 0x471;
        iVar1 = g_8c4a9c0c + 0xc;
        iVar2 = g_8c4a9c08 + 0xc;
        uVar3 = 0xd6;
    }
    ain0 = g_8c4a9eac & 0xffff0000 | ar5_00;
    ar6_00 = (iVar1 + g_8c4a9c00) * 0x10000;
    ar7_00 = iVar2 + g_8c4a9c00 | ar6_00;
    shinobi_scan_loop_2079fc();
    pvr_20a844(0x44, g_8c4a9e74 & 0xfffffffe);
    pvr_20a844(0xe8, g_8c4a9eb0 | 8);
    pvr_20a844(0xf0, ar7_00);
    pvr_20a844(0x5c, uVar4 | (uVar3 & 0x3ff) << 10);
    pvr_20a844(0xf4, ain0);
    g_8c4a9e54 = 1;
    return 0;
}

/*
 * pvr_test_20aed8  0x8c20aed8
 * area name: sits between pvr functions (same compilation unit); behaviour name: returns the result of a comparison
 * called by: ninja_uses_aica_reg_258604
 */
u32 pvr_test_20aed8(u32 a0) {
    g_8c4aa098 = a0;
    return 0;
}

/*
 * pvr_uses_sq_copy_words_20af20  0x8c20af20
 * area name: sits between pvr functions (same compilation unit); behaviour name: its main named callee is sq_copy_words
 * called by: ta_copy_20b7a0
 */
u32 pvr_uses_sq_copy_words_20af20(u32 unused_a0, u32 unused_a1, u32 unused_a2, u32 a3) {
    int iVar1;
    u32 uVar2;
    u8 *ar5_00;

    ar5_00 = &g_8c275714;
    _DAT_ff000038 = *g_8c4aa21c >> 0x18;
    iVar1 = 4;
    uVar2 = *g_8c4aa21c & 0x3ffffff | 0xe0000000;
    _DAT_ff00003c = _DAT_ff000038;
    do {
        sq_copy_words(uVar2, ar5_00, 0x20, a3);
        iVar1 = iVar1 + -1;
        uVar2 = uVar2 + 0x20;
        ar5_00 = ar5_00 + 0x20;
    } while (iVar1 != 0);
    uVar2 = *g_8c4aa21c;
    *g_8c4aa21c = uVar2 + 0x80;
    return uVar2 + 0x80;
}

/*
 * alt_entry_20af22  0x8c20af22
 * probably an entry 2 bytes into 8c20af20: it reads registers that code sets before it
 */
int alt_entry_20af22(u32 unused_a0, u32 unused_a1, u32 unused_a2, u32 a3) {
    u32 *in_r3;
    int iVar1;
    u32 ar4_00;
    u8 *ar5_00;

    ar5_00 = &g_8c275714;
    _DAT_ff000038 = *(u32 *)*in_r3 >> 0x18;
    iVar1 = 4;
    ar4_00 = *(u32 *)*in_r3 & 0x3ffffff | 0xe0000000;
    _DAT_ff00003c = _DAT_ff000038;
    do {
        sq_copy_words(ar4_00, ar5_00, 0x20, a3);
        iVar1 = iVar1 + -1;
        ar4_00 = ar4_00 + 0x20;
        ar5_00 = ar5_00 + 0x20;
    } while (iVar1 != 0);
    iVar1 = *g_8c4aa21c;
    *g_8c4aa21c = iVar1 + 0x80;
    return iVar1 + 0x80;
}

/*
 * shinobi_draw_20af76  0x8c20af76
 * area name: in the shinobi library code range; behaviour name: mostly calls draw functions
 * called by: kamui_draw_211f40
 */
u32 shinobi_draw_20af76(int a0, int a1, int a2, u32 a3) {
    int iVar1;
    int *piVar2;
    u8 *puVar3;
    u32 *puVar4;
    int iVar5;
    int ar5_00;
    u32 a5;
    int ar6_00;
    u32 ar7_00;
    u32 uVar6;

    puVar3 = (&get_g_8c2758e8);
    iVar1 = 0x8c4aa1a0;
    uVar6 = 0;
    if ((a0 == 0) || (a1 == 0)) {
        uVar6 = 0xe;
    } else {
        *(int *)(0x8c4aa1a0 + 0x3c) = a0;
        *(int *)(iVar1 + 0x40) = a1;
        *(u32 *)(iVar1 + 0x44) = a3;
        piVar2 = 0x8c4a9be0;
        *(int *)(iVar1 + 0x18) = a2;
        *piVar2 = a2;
        ar5_00 = a1;
        ar6_00 = a2;
        ar7_00 = a3;
        iVar5 = (*(code *)puVar3)(a0, a1, a2, a3);
        if (iVar5 == 0x80000000) {
            if (*(int *)(a0 + 0x18) == *(int *)(a1 + 0x18)) {
                if (*(int *)(a0 + 0x14) == *(int *)(a1 + 0x14)) {
                    g_8c4a9ee0 = *(u32 *)(a0 + 0x1c);
                    puVar4 = 0x8c4a9ee8;
                    g_8c4a9ee8 = 0;
                    g_8c4a9ee4 = *(u32 *)(a1 + 0x1c);
                    g_8c4a9eec = 0;
                    puVar3 = (&pvr_20a844);
                    pvr_20a844(0x50, puVar4[-0x1b]);
                    (*(code *)puVar3)(0x54, g_8c4a9e7c, ar6_00, ar7_00);
                    (*(code *)puVar3)(0x60, g_8c4a9ee0, ar6_00, ar7_00);
                    (*(code *)puVar3)(100, g_8c4a9ee4, ar6_00, ar7_00);
                    puVar4 = 0x8c4a9ee0;
                    g_8c4a9e7c = g_8c4a9ee0;
                    puVar4[-0x18] = g_8c4a9ee4;
                    if (a2 == 1) {
                        g_8c4a9dc4 = 0;
                        g_8c4a9dc8 = 0;
                        (*(code *)puVar3)(0x50, g_8c4a9e7c, ar6_00, ar7_00);
                        a5 = g_8c4a9e80;
                    } else {
                        (*(code *)puVar3)(0x50, g_8c4a9e7c, ar6_00, ar7_00);
                        a5 = g_8c4a9e7c;
                    }
                    (*(code *)puVar3)(0x54, a5, ar6_00, ar7_00);
                    g_8c4a9e54 = 1;
                    g_8c4a9d94 = a3;
                } else {
                    uVar6 = 0x10;
                }
            } else {
                uVar6 = 0xf;
            }
        } else {
            iVar5 = kamui_set_flags_2758e8((int)0x800);
            if (iVar5 == 0xb00) {
                set_g_8c2758e8(0x80000000);
                uVar6 = kamui_draw_211f40(*(u32 *)(iVar1 + 0x54), ar5_00, ar6_00, ar7_00);
            }
        }
    }
    return uVar6;
}

/*
 * ta_fifo_20b160  0x8c20b160
 * called by: kamui_draw_20bdc0, ta_draw_20b260
 */
int ta_fifo_20b160(u32 a0) {
    u32 uVar1;
    u8 *puVar2;
    u32 a4;
    int in_r0;
    int iVar3;
    u32 *puVar4;
    int *piVar5;
    int iVar6;
    u32 uVar7;

    a4 = 0x10000000;
    puVar2 = (&sh4_dmac_202f40);
    uVar1 = 0xf0ffffff;
    uVar7 = 0;
    puVar4 = (u32 *)(0x8c4a9f2c + g_8c4a9f08 * 4);
    piVar5 = (int *)(0x8c4a9f7c + g_8c4a9f08 * 4);
    iVar6 = (int)0x100;
    do {
        if ((*piVar5 != 0) && (a0 != uVar7)) {
            if ((g_8c4a9fe0 == 1) && ((uVar7 == 1 || (uVar7 == 3)))) {
                *(u32 *)*0x8c4a9fe4 = *(u32 *)*0x8c4a9fe4 & uVar1 | uVar7 << 0x18;
                do {
                    iVar3 = (*(code *)puVar2)(a4, g_8c4a9fe4, g_8c4a9fe8, 0x10);
                } while (iVar3 == iVar6);
            }
            do {
                in_r0 = (*(code *)puVar2)(a4, *puVar4, *piVar5 + 0x20, 0x10);
            } while (in_r0 == iVar6);
        }
        uVar7 = uVar7 + 1;
        piVar5 = piVar5 + 4;
        puVar4 = puVar4 + 4;
    } while (uVar7 < 5);
    return in_r0;
}

/*
 * ta_draw_20b260  0x8c20b260
 * area name: sits between ta functions (same compilation unit); behaviour name: mostly calls draw functions
 * called by: alt_entry_258e70, game_frame
 */
u32 ta_draw_20b260(u32 a0, u8 *a1, int a2, u32 a3) {
    bool bVar1;
    int iVar2;
    u32 uVar3;
    int iVar4;
    u32 ar5_00;
    int iVar5;
    int iVar6;
    int iVar7;

    if (g_8c275710 == 0) {
        if (g_8c4a9ef0 == 0) {
            *(u32 *)(&g_8c4a9ef8 + g_8c4a9f08 * 4) = 1;
            g_8c4a9f20 = 1;
        } else {
            g_8c4aa0fc = _DAT_ffd8000c;
            g_8c4a9f10 = g_8c4a9f08;
            g_8c4a9db8 = 1;
            g_8c4a9f18 = 0;
            g_8c4a9f14 = g_8c4aa014;
            g_8c4a9f20 = 1;
            g_8c4aa0b8 = 0;
            *(u32 *)(&g_8c4a9ef8 + g_8c4a9f08 * 4) = 2;
            if ((g_8c4a9fcc & 0x20) == 0) {
                iVar6 = g_8c4a9f08 * 4;
                iVar5 = g_8c4a9f08 * 4;
                iVar7 = g_8c4a9fd0 * 0x10;
                iVar4 = g_8c4a9fd0 * 0x10;
                do {
                    a3 = 0x10;
                    a1 = *(u8 **)(iVar6 + 0x8c4a9f2c + iVar4);
                    a2 = *(int *)(iVar5 + 0x8c4a9f7c + iVar7) + 0x20;
                    iVar2 = sh4_dmac_202f40(0x10000000, a1, a2, 0x10, &stack0xffffffd8);
                } while (iVar2 == 0x100);
                ta_fifo_20b160(g_8c4a9fd0);
            } else {
                _DAT_ff000038 = 0x10;
                _DAT_ff00003c = 0x10;
                a1 = &g_8c26d3f8;
                a2 = 4;
                memcpy_words(0xe0000000, &g_8c26d3f8, 4);
                ta_fifo_20b160(g_8c4a9fd0);
            }
        }
    }
    g_8c4a9f1c = 0;
    bVar1 = false;
    do {
        if (g_8c4a9f20 == 0)
            goto LAB_8c20b3e0;
        (*g_8c4a9e14)(g_8c4a9e18, a1, a2, a3);
    } while (g_8c4a9f1c <= g_8c4a9dd4 + g_8c4a9dd0 + 1U);
    bVar1 = true;
LAB_8c20b3e0:
    if (bVar1) {
        g_8c4a9db4 = 0;
        g_8c4a9f1c = 0;
        bVar1 = false;
        do {
            if (g_8c4a9f20 == 0)
                goto LAB_8c20b468;
            (*g_8c4a9e14)(g_8c4a9e18, a1, a2, a3);
        } while (g_8c4a9f1c < 0x15);
        bVar1 = true;
    LAB_8c20b468:
        if (bVar1) {
            shinobi_calc_2062c8(4, a1, a2, a3);
        }
    }
    g_8c4a9f08 = g_8c4a9f08 + 1 & 3;
    *(u32 *)(&g_8c4a9ef8 + g_8c4a9f08 * 4) = 0;
    if ((g_8c4a9ef0 == 1) || (g_8c275710 == 1)) {
        uVar3 = g_8c4a9f08 & 1;
        pvr_20a844(8, 1);
        pvr_20a844(8, 0);
        iVar7 = uVar3 * 0x20;
        pvr_20a844(0x124, *(u32 *)(iVar7 + 0x8c4aa024));
        pvr_20a844(300, *(u32 *)(iVar7 + 0x8c4aa028));
        pvr_20a844(0x128, *(u32 *)(iVar7 + 0x8c4aa030));
        pvr_20a844(0x130, *(u32 *)(iVar7 + 0x8c4aa034));
        pvr_20a844(0x164, *(u32 *)(iVar7 + 0x8c4aa02c));
        ar5_00 = 0x80000000;
        pvr_20a844(0x144, 0x80000000);
        pvr_20a876(0x144);
        g_8c4a9f18 = 0;
        g_8c4a9f14 = g_8c4aa014;
        if (g_8c275710 != 0) {
            g_8c4a9f10 = g_8c4a9f08;
            *(u32 *)(&g_8c4a9ef8 + g_8c4a9f08 * 4) = 2;
            g_8c4a9db8 = 1;
            g_8c4a9f28 = 1;
        }
    }
    return 0;
}

/*
 * ta_draw_20b5a0  0x8c20b5a0
 * area name: sits between ta functions (same compilation unit); behaviour name: mostly calls draw functions
 * called by: kamui_draw_20bdc0, kamui_draw_20c416
 */
u32 ta_draw_20b5a0(u32 *a0, u32 unused_a1, u32 a2, u32 a3) {
    bool bVar1;
    u32 uVar2;
    int iVar3;
    u32 uVar4;

    g_8c4a9db4 = 1;
    uVar2 = g_8c4a9f10 & 1;
    if ((g_8c4a9bb0 & 0x10) != 0) {
        pvr_20a844(8, 2);
        pvr_20a844(8, 0);
    }
    iVar3 = uVar2 * 0x20;
    pvr_20a844(0x2c, *(u32 *)(iVar3 + 0x8c4aa01c));
    pvr_20a844(0x20, *(u32 *)(iVar3 + 0x8c4aa030));
    pvr_20a844(0x60, a0[2]);
    pvr_20a844(0x48, *a0);
    pvr_20a844(0x4c, a0[1]);
    pvr_20a844(0x68, a0[3]);
    uVar4 = a0[4];
    pvr_20a844(0x6c, uVar4);
    g_8c4a9f1c = 0;
    bVar1 = false;
    do {
        if (g_8c4a9db8 == 0)
            goto LAB_8c20b63e;
        (*g_8c4a9e14)(g_8c4a9e18, uVar4, a2, a3);
    } while (g_8c4a9f1c <= g_8c4a9dd4);
    bVar1 = true;
LAB_8c20b63e:
    if (bVar1) {
        pvr_20a844(0x48, g_8c4a9e78);
        pvr_20a844(0x4c, g_8c4a9e70);
        pvr_20a844(0x68, g_8c4a9e60);
        uVar4 = g_8c4a9e64;
        pvr_20a844(0x6c, g_8c4a9e64);
        g_8c4a9db8 = 0;
        g_8c4a9f24 = 0;
        uVar4 = kamui_fill_loop_210cc0(g_8c27570c);
        return uVar4;
    }
    pvr_20a844(0x8c, g_8c4a9d60);
    pvr_20a844(0x88, g_8c4a9d5c & 0xfffffff0);
    uVar4 = pvr_20a844(0x14, 0xffffffff);
    return uVar4;
}

/*
 * ta_fifo_20b708  0x8c20b708
 * called by: kamui_draw_20bdc0, kamui_draw_20c416
 */
u32 ta_fifo_20b708(u32 a0) {
    u32 uVar1;

    if (((*(u32 *)(a0 + 0x18) & 4) == 0) && (*(int *)(a0 + 4) == 1)) {
        uVar1 = *(u32 *)(a0 + 8) & 0x38000000;
        if (uVar1 == 0) {
            a0 = 3;
        } else if (uVar1 == 0x8000000) {
            a0 = 1;
        } else if (uVar1 == 0x10000000) {
            a0 = 2;
        }
        g_8c4aa110 = g_8c4a9e78 & 0xfffffff8 | a0;
        return 0;
    }
    return 4;
}

/*
 * noop_20b77a  0x8c20b77a
 * called by: kamui_init_defaults
 */
u32 noop_20b77a(void) {
    u32 in_r0;

    return in_r0;
}

/*
 * ta_copy_20b7a0  0x8c20b7a0
 * area name: sits between ta functions (same compilation unit); behaviour name: mostly calls copy functions
 * called by: alt_entry_258e70, game_frame
 */
u32 ta_copy_20b7a0(u32 unused_a0, u32 unused_a1, u32 unused_a2, u32 a3) {
    int iVar1;
    u32 uVar2;
    int *piVar3;
    u32 uVar4;
    u32 **ar5_00;
    u32 **ar6_00;
    u32 **a7;
    int iVar5;
    u32 uStack_78;
    u32 uStack_74;
    u32 *puStack_68;
    int aiStack_48[5];
    u32 *apuStack_34[6];

    puStack_68 = g_8c26d400;
    if (((((g_8c4a9bb0 & 0x40) != 0) && (g_8c4aa05c != 0)) && (g_8c4aa064 != 0)) && (g_8c4a9d70 != 0)) {
        pvr_uses_sq_copy_words_20af20(unused_a0, unused_a1, unused_a2, a3);
    }
    iVar5 = g_8c4a9f08 * 4;
    apuStack_34[0] = (u32 *)(iVar5 + 0x8c4a9f2c);
    ar5_00 = apuStack_34 + 2;
    ar6_00 = apuStack_34 + 1;
    apuStack_34[1] = (u32 *)(iVar5 + 0x8c4a9f3c);
    apuStack_34[2] = (u32 *)(iVar5 + 0x8c4a9f4c);
    a7 = apuStack_34 + 4;
    apuStack_34[3] = (u32 *)(iVar5 + 0x8c4a9f5c);
    apuStack_34[4] = (u32 *)(iVar5 + 0x8c4a9f6c);
    aiStack_48[0] = iVar5 + 0x8c4a9f7c;
    aiStack_48[1] = iVar5 + 0x8c4a9f8c;
    aiStack_48[2] = iVar5 + 0x8c4a9f9c;
    aiStack_48[3] = iVar5 + 0x8c4a9fac;
    aiStack_48[4] = iVar5 + 0x8c4a9fbc;
    *(u32 *)(iVar5 + 0x8c4a9f2c) = *g_8c4aa218;
    *(u32 *)(iVar5 + 0x8c4a9f3c) = g_8c4aa218[1];
    *(u32 *)(iVar5 + 0x8c4a9f4c) = g_8c4aa218[2];
    *(u32 *)(iVar5 + 0x8c4a9f5c) = g_8c4aa218[3];
    *(u32 *)(iVar5 + 0x8c4a9f6c) = g_8c4aa218[4];
    if (g_8c4a9ef0 == 0) {
        uStack_74 = 0;
        do {
            if ((int)uStack_74 < 0) {
                uVar2 = 1 >> (~uStack_74 & 0x1f) + 1;
            } else {
                uVar2 = 1 << (uStack_74 & 0x1f);
            }
            if ((uVar2 & g_8c4aa014) != 0) {
                iVar5 = uStack_74 * 4;
                iVar1 = *(int *)(iVar5 + g_8c4aa21c) - *apuStack_34[uStack_74];
                if (iVar1 < 0) {
                    iVar1 = iVar1 + 3;
                }
                ar5_00 = (u32 **)&g_8c26d3f8;
                *(int *)aiStack_48[uStack_74] = (iVar1 >> 2) << 2;
                ar6_00 = (u32 **)0x4;
                memcpy_words(*(u32 *)(iVar5 + g_8c4aa21c), &g_8c26d3f8, 4);
                *(int *)(iVar5 + g_8c4aa21c) = *(int *)(iVar5 + g_8c4aa21c) + 0x20;
            }
            uStack_74 = uStack_74 + 1;
        } while ((int)uStack_74 < 5);
        uVar2 = 0;
        do {
            if ((int)uVar2 < 0) {
                uVar4 = 1 >> (~uVar2 & 0x1f) + 1;
            } else {
                uVar4 = 1 << (uVar2 & 0x1f);
            }
            if ((uVar4 & g_8c4aa014) == 0) {
                *(u32 *)aiStack_48[uVar2] = 0;
            }
            uVar2 = uVar2 + 1;
        } while ((int)uVar2 < 5);
        uVar2 = 0;
    LAB_8c20b91a:
        if ((int)uVar2 < 0) {
            uVar4 = 1 >> (~uVar2 & 0x1f) + 1;
        } else {
            uVar4 = 1 << (uVar2 & 0x1f);
        }
        if ((uVar4 & g_8c4aa014) == 0)
            goto LAB_8c20b9b4;
        if (*(u32 *)(uVar2 * 4 + 0x8c4aa0e0) < *(u32 *)aiStack_48[uVar2]) {
            *(u32 *)(uVar2 * 4 + 0x8c4aa0e0) = *(u32 *)aiStack_48[uVar2];
        }
        ar5_00 = (u32 **)(uVar2 * 4);
        if ((u32 *)**(u32 **)((int)ar5_00 + (int)aiStack_48) <= ar5_00[-0x1ced57e4])
            goto LAB_8c20b9b4;
        uVar2 = 0;
        do {
            if ((int)uVar2 < 0) {
                uVar4 = 1 >> (~uVar2 & 0x1f) + 1;
            } else {
                uVar4 = 1 << (uVar2 & 0x1f);
            }
            if ((uVar4 & g_8c4aa014) != 0) {
                puStack_68 = (u32 *)((u32)puStack_68 & 0xf0ffffff | uVar2 << 0x18);
                memcpy_words(*apuStack_34[uVar2], &puStack_68, 0x20);
                ar6_00 = (u32 **)0x4;
                ar5_00 = (u32 **)&g_8c26d3f8;
                memcpy_words(*apuStack_34[uVar2] + 0x20, &g_8c26d3f8, 4);
                *(u32 *)aiStack_48[uVar2] = 0x20;
            }
            uVar2 = uVar2 + 1;
        } while ((int)uVar2 < 5);
        goto LAB_8c20bd1e;
    }
    if ((g_8c4a9fcc & 0x20) == 0) {
        ta_calls_scan_loop_210dfc(&g_8c4aa218);
        uStack_78 = 0;
        do {
            iVar5 = uStack_78 * 4;
            iVar1 = *(int *)(iVar5 + g_8c4aa21c) - *apuStack_34[uStack_78];
            if (iVar1 < 0) {
                iVar1 = iVar1 + 3;
            }
            ar5_00 = (u32 **)&g_8c26d3f8;
            *(int *)aiStack_48[uStack_78] = (iVar1 >> 2) << 2;
            ar6_00 = (u32 **)0x4;
            memcpy_words(*(u32 *)(iVar5 + g_8c4aa21c), &g_8c26d3f8, 4);
            *(int *)(iVar5 + g_8c4aa21c) = *(int *)(iVar5 + g_8c4aa21c) + 0x20;
            if ((int)uStack_78 < 0) {
                uVar2 = 1 >> (~uStack_78 & 0x1f) + 1;
            } else {
                uVar2 = 1 << (uStack_78 & 0x1f);
            }
            if ((uVar2 & g_8c4aa014) == 0) {
                *(u32 *)aiStack_48[uStack_78] = 0;
            }
            if ((int)uStack_78 < 0) {
                uVar2 = 1 >> (~uStack_78 & 0x1f) + 1;
            } else {
                uVar2 = 1 << (uStack_78 & 0x1f);
            }
            if ((uVar2 & g_8c4aa014) != 0) {
                iVar5 = uStack_78 * 4;
                if (*(u32 *)(iVar5 + 0x8c4aa0e0) < *(u32 *)aiStack_48[uStack_78]) {
                    *(u32 *)(iVar5 + 0x8c4aa0e0) = *(u32 *)aiStack_48[uStack_78];
                }
                if (*(u32 *)(&g_8c4aa070 + iVar5) < *(u32 *)aiStack_48[uStack_78]) {
                    uVar2 = 0;
                    do {
                        if ((int)uVar2 < 0) {
                            uVar4 = 1 >> (~uVar2 & 0x1f) + 1;
                        } else {
                            uVar4 = 1 << (uVar2 & 0x1f);
                        }
                        if ((uVar4 & g_8c4aa014) == 0) {
                            *(u32 *)aiStack_48[uVar2] = 0;
                        } else {
                            puStack_68 = (u32 *)((u32)puStack_68 & 0xf0ffffff | uVar2 << 0x18);
                            memcpy_words(*apuStack_34[uVar2], &puStack_68, 0x20);
                            ar6_00 = (u32 **)0x4;
                            ar5_00 = (u32 **)&g_8c26d3f8;
                            memcpy_words(*apuStack_34[uVar2] + 0x20, &g_8c26d3f8, 4);
                            *(u32 *)aiStack_48[uVar2] = 0x20;
                        }
                        uVar2 = uVar2 + 1;
                    } while ((int)uVar2 < 5);
                LAB_8c20bd1e:
                    shinobi_calc_2062c8(2, ar5_00, ar6_00, a7);
                    break;
                }
            }
            uStack_78 = uStack_78 + 1;
        } while ((int)uStack_78 < 5);
        goto LAB_8c20bd36;
    }
    uStack_78 = 0;
    do {
        if (uStack_78 != g_8c4a9fd0) {
            if ((int)uStack_78 < 0) {
                uVar2 = 1 >> (~uStack_78 & 0x1f) + 1;
            } else {
                uVar2 = 1 << (uStack_78 & 0x1f);
            }
            if ((uVar2 & g_8c4aa014) == 0) {
                *(u32 *)aiStack_48[uStack_78] = 0;
            } else {
                iVar5 = uStack_78 * 4;
                piVar3 = aiStack_48 + uStack_78;
                iVar1 = *(int *)(iVar5 + g_8c4aa21c) - *apuStack_34[uStack_78];
                if (iVar1 < 0) {
                    iVar1 = iVar1 + 3;
                }
                ar5_00 = (u32 **)&g_8c26d3f8;
                *(int *)*piVar3 = (iVar1 >> 2) << 2;
                ar6_00 = (u32 **)0x4;
                memcpy_words(*(u32 *)(iVar5 + g_8c4aa21c), &g_8c26d3f8, 4);
                *(int *)(iVar5 + g_8c4aa21c) = *(int *)(iVar5 + g_8c4aa21c) + 0x20;
                if (*(u32 *)(iVar5 + 0x8c4aa0e0) < *(u32 *)*piVar3) {
                    *(u32 *)(uStack_78 * 4 + 0x8c4aa0e0) = *(u32 *)aiStack_48[uStack_78];
                }
                if (*(u32 *)(&g_8c4aa070 + uStack_78 * 4) < *(u32 *)aiStack_48[uStack_78]) {
                    uVar2 = 0;
                    goto LAB_8c20bae4;
                }
            }
        }
        uStack_78 = uStack_78 + 1;
    } while ((int)uStack_78 < 5);
    goto LAB_8c20bb6c;
LAB_8c20b9b4:
    uVar2 = uVar2 + 1;
    if (4 < (int)uVar2)
        goto LAB_8c20bd36;
    goto LAB_8c20b91a;
LAB_8c20bae4:
    do {
        if (uVar2 == g_8c4a9fd0) {
        LAB_8c20bb3e:
            *(u32 *)aiStack_48[uVar2] = 0;
        } else {
            if ((int)uVar2 < 0) {
                uVar4 = 1 >> (~uVar2 & 0x1f) + 1;
            } else {
                uVar4 = 1 << (uVar2 & 0x1f);
            }
            if ((uVar4 & g_8c4aa014) == 0)
                goto LAB_8c20bb3e;
            puStack_68 = (u32 *)((u32)puStack_68 & 0xf0ffffff | uVar2 << 0x18);
            memcpy_words(*apuStack_34[uVar2], &puStack_68, 0x20);
            ar6_00 = (u32 **)0x4;
            ar5_00 = (u32 **)&g_8c26d3f8;
            memcpy_words(*apuStack_34[uVar2] + 0x20, &g_8c26d3f8, 4);
            *(u32 *)aiStack_48[uVar2] = 0x20;
        }
        uVar2 = uVar2 + 1;
    } while ((int)uVar2 < 5);
    shinobi_calc_2062c8(2, ar5_00, ar6_00, a7);
LAB_8c20bb6c:
    if (*(int *)(g_8c4aa21c + g_8c4a9fd0 * 4) == *apuStack_34[g_8c4a9fd0]) {
        _DAT_ff000038 = 0x10;
        _DAT_ff00003c = 0x10;
        puStack_68 = (u32 *)((u32)puStack_68 & 0xf0ffffff | (g_8c4a9fd0 & 7) << 0x18);
        ar5_00 = &puStack_68;
        ar6_00 = (u32 **)0x20;
        memcpy_words(*(u32 *)(g_8c4aa21c + g_8c4a9fd0 * 4) & 0x3ffffff | 0xe0000000, ar5_00, 0x20);
    }
LAB_8c20bd36:
    g_8c275710 = 0;
    g_8c27570c = g_8c27570c + 1 & 1;
    kamui_fill_loop_210cc0(g_8c27570c);
    return 0;
}

/*
 * kamui_draw_20bdc0  0x8c20bdc0
 * area name: in the kamui library code range; behaviour name: mostly calls draw functions
 * called by: alt_entry_25b052, ninja_draw_25b044, ninja_draw_into_texture_entry
 */
u32 kamui_draw_20bdc0(int a0, u32 *a1, u32 a2, u32 a3) {
    bool bVar1;
    u32 uVar2;
    u32 uVar3;
    int iVar4;
    u32 uVar5;
    u32 uVar6;
    u32 *puVar7;
    int iVar8;
    u32 uVar9;
    u32 a5;
    u32 uVar10;
    u32 uStack_74;
    u32 *puStack_70;
    u32 *puStack_6c;
    u32 uStack_60;

    uStack_60 = g_8c26d424;
    puVar7 = &uStack_60;
    if (g_8c4a9ef0 == 1) {
        _DAT_ff000038 = 0x10;
        _DAT_ff00003c = 0x10;
        uStack_60 = g_8c26d424 & 0xf0ffffff | (g_8c4a9fd0 & 7) << 0x18;
        a2 = 0x20;
        memcpy_words(*(u32 *)(g_8c4aa21c + g_8c4a9fd0 * 4) & 0x3ffffff | 0xe0000000, puVar7, 0x20);
        a1 = puVar7;
    }
    iVar4 = ta_fifo_20b708(a0);
    if (iVar4 != 0) {
        kamui_fill_loop_210cc0(g_8c27570c);
        return iVar4;
    }
    if ((*(u32 *)(a0 + 0x18) & 0x10) == 0) {
        g_8c4aa114 = (*(u32 *)(a0 + 0xc) & 0xfffffff) >> 2;
    } else {
        uVar5 = pvr_20a876(0xe4);
        g_8c4aa114 = (uVar5 & 0x1f) << 3;
    }
    uVar5 = g_8c4a9f08;
    g_8c4aa118 = *(u32 *)(a0 + 0x1c) | 0x1000000;
    puVar7 = (u32 *)(g_8c4a9f08 * 4);
    uVar9 = g_8c4a9f08 & 1;
    puStack_6c = puVar7 + -0x1ced5835;
    puStack_70 = puVar7 + -0x1ced5821;
    if (g_8c4a9ef0 == 0) {
        g_8c4a9f1c = 0;
        iVar4 = 0;
        do {
            if (g_8c4a9db8 == 0)
                goto LAB_8c20bf52;
            (*g_8c4a9e14)(g_8c4a9e18, a1, a2, a3);
        } while (g_8c4a9f1c <= g_8c4a9dd4);
        iVar4 = 1;
    LAB_8c20bf52:
        if (iVar4 != 0) {
            g_8c4a9f24 = 0;
            goto override_prt_8c20c05a_7a4d7f16;
        }
    }
    puVar7[-0x1ced5835] = *g_8c4aa218;
    puVar7[-0x1ced5831] = g_8c4aa218[1];
    puVar7[-0x1ced582d] = g_8c4aa218[2];
    puVar7[-0x1ced5829] = g_8c4aa218[3];
    puVar7[-0x1ced5825] = g_8c4aa218[4];
    uStack_74 = 0;
    do {
        iVar4 = uStack_74 * 4;
        iVar8 = *(int *)(g_8c4aa21c + iVar4) - *puStack_6c;
        if (iVar8 < 0) {
            iVar8 = iVar8 + 3;
        }
        *puStack_70 = (iVar8 >> 2) << 2;
        if ((g_8c4a9ef0 == 0) || (uStack_74 != g_8c4a9fd0)) {
            if ((int)uStack_74 < 0) {
                uVar6 = 1 >> (~uStack_74 & 0x1f) + 1;
            } else {
                uVar6 = 1 << (uStack_74 & 0x1f);
            }
            if ((uVar6 & g_8c4aa014) != 0) {
                a2 = 4;
                puVar7 = (u32 *)&g_8c26d420;
                memcpy_words(*(u32 *)(iVar4 + g_8c4aa21c), &g_8c26d420, 4);
                *(int *)(iVar4 + g_8c4aa21c) = *(int *)(iVar4 + g_8c4aa21c) + 0x20;
                if (*(u32 *)(&g_8c4aa070 + iVar4) < *puStack_70) {
                    shinobi_calc_2062c8(2, puVar7, a2, a3);
                }
            }
        }
        uVar10 = g_8c4a9d60;
        puStack_70 = puStack_70 + 4;
        puStack_6c = puStack_6c + 4;
        uStack_74 = uStack_74 + 1;
    } while (uStack_74 < 5);
    g_8c4a9f1c = 0;
    bVar1 = false;
    a1 = puVar7;
    do {
        if (g_8c4a9db4 == 0)
            goto LAB_8c20c050;
        (*g_8c4a9e14)(g_8c4a9e18, a1, a2, a3);
    } while (g_8c4a9f1c <= g_8c4a9dd0);
    bVar1 = true;
LAB_8c20c050:
    if (!bVar1) {
        g_8c4a9f24 = 1;
        g_8c4a9db8 = 1;
        iVar4 = uVar9 << 5;
        if (g_8c4a9ef0 == 0) {
            pvr_20a844(8, 1);
            pvr_20a844(8, 0);
            pvr_20a844(0x124, *(u32 *)(iVar4 + 0x8c4aa024));
            pvr_20a844(300, *(u32 *)(iVar4 + 0x8c4aa028));
            pvr_20a844(0x128, *(u32 *)(iVar4 + 0x8c4aa030));
            pvr_20a844(0x130, *(u32 *)(iVar4 + 0x8c4aa034));
            pvr_20a844(0x164, *(u32 *)(iVar4 + 0x8c4aa02c));
            a1 = (u32 *)0x80000000;
            pvr_20a844(0x144, 0x80000000);
            pvr_20a876(0x144);
        }
        g_8c4a9f1c = 0;
        bVar1 = false;
        do {
            if (g_8c4a9db4 == 0)
                goto LAB_8c20c18e;
            (*g_8c4a9e14)(g_8c4a9e18, a1, a2, a3);
        } while (g_8c4a9f1c <= g_8c4a9dd0);
        bVar1 = true;
    LAB_8c20c18e:
        if (bVar1) {
            g_8c4a9f24 = 0;
            kamui_fill_loop_210cc0(g_8c27570c);
            return 0xfffffffe;
        }
        g_8c4a9f10 = uVar5;
        g_8c4a9f14 = g_8c4aa014;
        g_8c4a9f18 = 0;
        if (g_8c4a9ef0 == 0) {
            uVar5 = 0xff;
        } else {
            _DAT_ff000038 = 0x10;
            _DAT_ff00003c = 0x10;
            a2 = 4;
            a1 = (u32 *)&g_8c26d420;
            memcpy_words(*(u32 *)(g_8c4aa21c + g_8c4a9fd0 * 4) & 0x3ffffff | 0xe0000000, &g_8c26d420, 4);
            uVar5 = g_8c4a9fd0;
        }
        ta_fifo_20b160(uVar5);
        uVar3 = g_8c4a9e64;
        uVar2 = g_8c4a9e60;
        uVar5 = g_8c4a9bf8;
        if (*(u32 *)(a0 + 0x10) <= g_8c4a9bf8) {
            uVar5 = *(u32 *)(a0 + 0x10) - 1;
        }
        a5 = 0;
        uVar9 = g_8c4a9bf4;
        if (*(u32 *)(a0 + 0xc) <= g_8c4a9bf4) {
            uVar9 = *(u32 *)(a0 + 0xc) - 1;
        }
        pvr_set_clip_rect(0, 0, uVar9, uVar5);
        g_8c4aa11c = g_8c4a9e60;
        g_8c4aa120 = g_8c4a9e64;
        g_8c4a9e60 = uVar2;
        g_8c4a9e64 = uVar3;
        ta_draw_20b5a0(&g_8c4aa110, a5, uVar9, uVar5);
        g_8c4a9d60 = uVar10;
        kamui_fill_loop_210cc0(g_8c27570c);
        if (g_8c4a9ef0 == 1) {
            g_8c4a9f1c = 0;
            bVar1 = false;
            do {
                if (g_8c4a9db4 == 0)
                    goto LAB_8c20c350;
                (*g_8c4a9e14)(g_8c4a9e18, a5, uVar9, uVar5);
            } while (g_8c4a9f1c <= g_8c4a9dd0);
            bVar1 = true;
        LAB_8c20c350:
            if (bVar1) {
                g_8c4a9f24 = 0;
                return 0xfffffffd;
            }
            pvr_20a844(8, 1);
            pvr_20a844(8, 0);
            pvr_20a844(0x124, *(u32 *)(iVar4 + 0x8c4aa024));
            pvr_20a844(300, *(u32 *)(iVar4 + 0x8c4aa028));
            pvr_20a844(0x128, *(u32 *)(iVar4 + 0x8c4aa030));
            pvr_20a844(0x130, *(u32 *)(iVar4 + 0x8c4aa034));
            pvr_20a844(0x164, *(u32 *)(iVar4 + 0x8c4aa02c));
            uVar10 = 0x80000000;
            pvr_20a844(0x144, 0x80000000);
            pvr_20a876(0x144);
        }
        g_8c275710 = 0;
        g_8c4a9e30 = &stack0xffffff88;
        return 0;
    }
override_prt_8c20c05a_7a4d7f16:
    g_8c4a9db8 = 0;
    kamui_fill_loop_210cc0(g_8c27570c);
    return 0xffffffff;
}

/*
 * kamui_draw_20c416  0x8c20c416
 * area name: in the kamui library code range; behaviour name: mostly calls draw functions
 */
u8 *kamui_draw_20c416(int a0, u32 a1, u32 a2, u32 a3) {
    bool bVar1;
    u32 uVar2;
    u32 uVar3;
    u8 *puVar4;
    u32 *puVar5;
    u32 a5;
    u32 uVar6;
    u32 ar6_00;
    u32 ar7_00;
    int iVar7;

    puVar4 = (u8 *)ta_fifo_20b708(a0);
    uVar3 = g_8c4a9f08;
    if (puVar4 == NULL) {
        g_8c4aa114 = (*(u32 *)(a0 + 0xc) & 0xfffffff) >> 2;
        g_8c4aa118 = *(u32 *)(a0 + 0x1c) | 0x1000000;
        g_8c4a9f1c = 0;
        puVar4 = &g_8c4a9db8;
        bVar1 = false;
        do {
            if (g_8c4a9db8 == 0)
                goto LAB_8c20c4ce;
            (*g_8c4a9e14)(g_8c4a9e18, a1, a2, a3);
            puVar4 = &g_8c4a9dd4;
        } while (g_8c4a9f1c <= g_8c4a9dd4);
        bVar1 = true;
    LAB_8c20c4ce:
        if (!bVar1) {
            g_8c4a9f1c = 0;
            bVar1 = false;
            do {
                if (g_8c4a9db4 == 0)
                    goto LAB_8c20c504;
                (*g_8c4a9e14)(g_8c4a9e18, a1, a2, a3);
                puVar4 = &g_8c4a9dd0;
            } while (g_8c4a9f1c <= g_8c4a9dd0);
            bVar1 = true;
        LAB_8c20c504:
            uVar2 = g_8c4a9e64;
            uVar6 = g_8c4a9e60;
            if (bVar1) {
                puVar5 = (u32 *)&g_8c4a9db4;
            } else {
                g_8c4a9f24 = 1;
                ar7_00 = *(u32 *)(a0 + 0x10);
                ar6_00 = *(u32 *)(a0 + 0xc);
                if (g_8c4a9bf8 < ar7_00) {
                    ar7_00 = g_8c4a9bf8;
                }
                a5 = 0;
                if (g_8c4a9bf4 < ar6_00) {
                    ar6_00 = g_8c4a9bf4;
                }
                pvr_set_clip_rect(0, 0, ar6_00, ar7_00);
                g_8c4aa11c = g_8c4a9e60;
                g_8c4aa120 = g_8c4a9e64;
                g_8c4a9e60 = uVar6;
                g_8c4a9e64 = uVar2;
                puVar4 = (u8 *)ta_draw_20b5a0(&g_8c4aa110, a5, ar6_00, ar7_00);
                g_8c4a9f1c = 0;
                bVar1 = false;
                do {
                    if (g_8c4a9db4 == 0)
                        goto LAB_8c20c5e8;
                    (*g_8c4a9e14)(g_8c4a9e18, a5, ar6_00, ar7_00);
                    puVar4 = &g_8c4a9dd0;
                } while (g_8c4a9f1c <= g_8c4a9dd0);
                bVar1 = true;
            LAB_8c20c5e8:
                if (!bVar1) {
                    pvr_20a844(8, 1);
                    pvr_20a844(8, 0);
                    iVar7 = (uVar3 & 1) * 0x20;
                    pvr_20a844(0x124, *(u32 *)(iVar7 + 0x8c4aa024));
                    pvr_20a844(300, *(u32 *)(iVar7 + 0x8c4aa028));
                    pvr_20a844(0x128, *(u32 *)(iVar7 + 0x8c4aa030));
                    pvr_20a844(0x130, *(u32 *)(iVar7 + 0x8c4aa034));
                    pvr_20a844(0x164, *(u32 *)(iVar7 + 0x8c4aa02c));
                    uVar6 = 0x80000000;
                    pvr_20a844(0x144, 0x80000000);
                    pvr_20a876(0x144);
                    g_8c4a9f18 = 0;
                    g_8c4a9f14 = g_8c4aa014;
                    g_8c4a9f10 = g_8c4a9f08;
                    g_8c4a9db8 = 1;
                    g_8c4a9f28 = 1;
                    *(u32 *)(&g_8c4a9ef8 + g_8c4a9f08 * 4) = 2;
                    return (u8 *)0;
                }
                puVar5 = (u32 *)&g_8c4a9f24;
            }
            *puVar5 = 0;
        }
    } else {
        kamui_fill_loop_210cc0(g_8c27570c);
    }
    return puVar4;
}

/*
 * kamui_draw_20c7e0  0x8c20c7e0
 * area name: in the kamui library code range; behaviour name: mostly calls draw functions
 */
u32 kamui_draw_20c7e0(void) {
    u32 r5;
    u32 uVar1;
    u32 uVar2;
    int iVar3;

    if (g_8c4a9ef0 == 1) {
        uVar1 = g_8c4a9f08 & 1;
        pvr_20a844(8, 1);
        pvr_20a844(8, 0);
        iVar3 = uVar1 * 0x20;
        pvr_20a844(0x124, *(u32 *)(iVar3 + 0x8c4aa024));
        pvr_20a844(300, *(u32 *)(iVar3 + 0x8c4aa028));
        pvr_20a844(0x128, *(u32 *)(iVar3 + 0x8c4aa030));
        pvr_20a844(0x130, *(u32 *)(iVar3 + 0x8c4aa034));
        pvr_20a844(0x164, *(u32 *)(iVar3 + 0x8c4aa02c));
        r5 = 0x80000000;
        pvr_20a844(0x144, 0x80000000);
        pvr_20a876(0x144);
        g_8c4a9f18 = 0;
        g_8c4a9f14 = g_8c4aa014;
    }
    uVar2 = kamui_fill_loop_210cc0(g_8c27570c);
    return uVar2;
}

/*
 * pvr_set_texture_stride  0x8c20c8e0
 * puts the stride field ((a0 & 0x3e0) >> 5) into TEXT_CONTROL (a05f80e4), keeping its other bits
 */
u32 pvr_set_texture_stride(u32 a0, u32 unused_a1, u32 a2, u32 a3) {
    u32 uVar1;
    u32 uVar2;

    uVar2 = (u32)0x3e0;
    uVar1 = pvr_20a876((int)0xe4);
    (*(code *)(&pvr_20a844))((int)0xe4, (int)(a0 & uVar2) >> 5 | uVar1 & 0xffffffe0, a2, a3);
    return 0;
}

/*
 * pvr_uses_ta_fifo_20c90c  0x8c20c90c
 * area name: sits between pvr functions (same compilation unit); behaviour name: its main named callee is
 * ta_fifo_20d128 called by: gfxlib_uses_ta_fifo_233f98
 */
int pvr_uses_ta_fifo_20c90c(u32 *a0, u32 *a1, u32 a2, u32 a3) {
    int iVar1;

    iVar1 = ta_fifo_20d128(a0, a1, a2, a3);
    if (iVar1 == 0) {
        if ((*a0 & 0xffff) == 3) {
            iVar1 = shinobi_uses_rec4c_alloc_203a92(a0, a1, a2, a3);
        } else {
            iVar1 = shinobi_list_2038c0(a0[5], a0, a2, a3);
            a1 = a0;
        }
        if (iVar1 == 3) {
            callback_table_call(3);
        }
    }
    return iVar1;
}

/*
 * pvr_list_20c980  0x8c20c980
 * area name: sits between pvr functions (same compilation unit); behaviour name: mostly calls list functions
 */
int pvr_list_20c980(u32 *a0, u32 *a1, u32 *a2, u32 a3, u32 s0) {
    u8 *puVar1;
    int iVar2;

    iVar2 = ta_fifo_20d128(a0, a2, a3, s0);
    puVar1 = (&callback_table_call);
    if (iVar2 == 0) {
        *a1 = *a0;
        a1[1] = a0[1];
        a1[2] = a0[2];
        a1[3] = a0[3];
        a1[4] = a0[4];
        a1[5] = a0[5];
        a1[6] = a0[6];
        if ((*a0 & 0xffff) == 3) {
            iVar2 = shinobi_uses_rec4c_alloc_203a92(a0, a2, a3, s0);
            if (iVar2 != 3) {
                iVar2 = shinobi_uses_rec4c_alloc_203a92(a1, a2, a3, s0);
                if (iVar2 != 3) {
                    return iVar2;
                }
                shinobi_list_203cd0(a0);
                (*(code *)puVar1)(3, a2, a3, s0);
                return 3;
            }
        } else {
            a2 = a0;
            iVar2 = shinobi_list_2038c0(a0[5], a0, a3, s0);
            if (iVar2 != 3) {
                iVar2 = shinobi_list_2038c0(a1[5], a1, a3, s0);
                if (iVar2 != 3) {
                    return iVar2;
                }
                shinobi_list_203bda(a0[7], a1, a3, s0);
                (*(code *)puVar1)(3, a1, a3, s0);
                return 3;
            }
        }
        (*(code *)puVar1)(3, a2, a3, s0);
    }
    return iVar2;
}

/*
 * kamui_uses_callback_table_call_20ca32  0x8c20ca32
 * area name: in the kamui library code range; behaviour name: its main named callee is callback_table_call
 */
int kamui_uses_callback_table_call_20ca32(u32 *a0, int a1, u32 a2, u32 a3, u32 s0) {
    u8 *puVar1;
    u8 *puVar2;
    int iVar3;
    u32 *puVar4;
    u32 ar4_00;
    u32 *ar5_00;
    int iVar5;

    iVar3 = ta_fifo_20d128(a0, a2, a3, s0);
    if (iVar3 == 0) {
        if ((*a0 & 0xffff) == 3) {
            iVar3 = 4;
        } else {
            if ((1 < a1) && (iVar3 = 1, puVar4 = a0, 1 < a1)) {
                do {
                    iVar3 = iVar3 + 1;
                    puVar4[10] = *a0;
                    puVar4[0xb] = a0[1];
                    puVar4[0xc] = a0[2];
                    puVar4[0xd] = a0[3];
                    puVar4[0xe] = a0[4];
                    puVar4[0xf] = a0[5];
                    puVar4[0x10] = a0[6];
                    puVar4 = puVar4 + 10;
                } while (iVar3 < a1);
            }
            puVar4 = a0;
            iVar3 = shinobi_list_2038c0(a0[5] * a1, a0, a3, s0);
            puVar1 = (&shinobi_list_203bda);
            if (iVar3 == 3) {
                callback_table_call(3);
            } else {
                ar4_00 = a0[7];
                shinobi_list_203bda(ar4_00, puVar4, a3, s0);
                iVar5 = 0;
                if (0 < a1) {
                    do {
                        puVar2 = (&shinobi_list_203980);
                        ar5_00 = a0 + iVar5 * 10;
                        ar5_00[7] = ar4_00;
                        puVar4 = ar5_00;
                        iVar3 = (*(code *)puVar2)(ar5_00[5], ar5_00, a3, s0);
                        ar4_00 = ar4_00 + (ar5_00[5] & 0xfffffffc);
                        if (iVar3 == 3) {
                            iVar3 = 0;
                            if (0 < iVar5) {
                                do {
                                    (*(code *)puVar1)(a0[iVar5 * 10 + 7], puVar4, a3, s0);
                                    iVar3 = iVar3 + 1;
                                } while (iVar3 < iVar5);
                            }
                            callback_table_call(3);
                            return 3;
                        }
                        iVar5 = iVar5 + 1;
                    } while (iVar5 < a1);
                }
            }
        }
    }
    return iVar3;
}

/*
 * kamui_uses_vram64_20cb5a  0x8c20cb5a
 * area name: in the kamui library code range; behaviour name: its main named callee is vram64_20a8e0
 * called by: gfxlib_uses_ta_fifo_233f98
 */
u32 kamui_uses_vram64_20cb5a(u32 *a0, u32 a1, int a2, int a3) {
    u32 uVar1;

    if ((a2 != 1) && (a3 != 1)) {
        if ((*a0 & 0xffff) == 3) {
            tex_uses_vram64_20d740(a0[7], a1, a0[3], a0[6]);
        } else {
            uVar1 = a0[6];
            if (((((uVar1 & 4) == 0) || ((uVar1 & 1) == 0)) || ((uVar1 & 8) != 0)) || ((uVar1 & 0x20) != 0)) {
                vram64_20a8e0(a0[7], a1, a0[5]);
            } else {
                tex_uses_vram64_20d6c0(a0[7], a1, a0[3]);
            }
        }
        return 0;
    }
    return 4;
}

/*
 * kamui_uses_vram64_20cb5e  0x8c20cb5e
 * area name: in the kamui library code range; behaviour name: its main named callee is vram64_20a8e0
 */
u32 kamui_uses_vram64_20cb5e(u32 *a0, u32 a1, u32 unused_a2, int a3) {
    int in_r0;
    u32 uVar1;

    if ((in_r0 != 1) && (a3 != 1)) {
        if ((*a0 & 0xffff) == 3) {
            tex_uses_vram64_20d740(a0[7], a1, a0[3], a0[6]);
        } else {
            uVar1 = a0[6];
            if (((((uVar1 & 4) == 0) || ((uVar1 & 1) == 0)) || ((uVar1 & 8) != 0)) || ((uVar1 & 0x20) != 0)) {
                vram64_20a8e0(a0[7], a1, a0[5]);
            } else {
                tex_uses_vram64_20d6c0(a0[7], a1, a0[3]);
            }
        }
        return 0;
    }
    return 4;
}

/*
 * tex_vram_write_part  0x8c20cbbc
 * copies part a2 (a3 * 32 bytes) of texture a0's data from a1 into its VRAM area; returns 0xc past the end
 */
u32 tex_vram_write_part(u32 *a0, u32 a1, int a2, int a3) {
    u32 uVar1;
    u32 ar7_00;
    u32 uVar2;
    int iVar3;
    u32 uVar4;

    if ((*a0 & 0xffff) == 3) {
        uVar1 = 4;
    } else {
        uVar2 = a0[6];
        if (((((uVar2 & 4) == 0) || ((uVar2 & 1) == 0)) || ((uVar2 & 8) != 0)) || ((uVar2 & 0x20) != 0)) {
            iVar3 = 0;
        } else {
            iVar3 = 4;
        }
        ar7_00 = a3 * 0x20;
        uVar4 = iVar3 + a2 * ar7_00;
        uVar2 = a0[5] - uVar4;
        if (uVar4 < a0[5]) {
            if (ar7_00 < uVar2) {
                uVar2 = ar7_00;
            }
            vram64_20a8e0(uVar4 + a0[7], a1, uVar2);
            uVar1 = 0;
        } else {
            uVar1 = 0xc;
        }
    }
    return uVar1;
}

/*
 * tex_uses_vram64_20cc56  0x8c20cc56
 * area name: sits between tex functions (same compilation unit); behaviour name: its main named callee is vram64_20a8e0
 * called by: ninja_uses_vram64_25acc2
 */
u32 tex_uses_vram64_20cc56(u32 *a0, u32 a1, u32 a2, u32 a3) {
    u32 uVar1;
    int iVar2;
    u32 ar7_00;
    u32 uVar3;

    ar7_00 = a3 & 0xfffffffc;
    if (ar7_00 != 0) {
        if ((*a0 & 0xffff) == 3) {
            return 4;
        }
        uVar1 = a0[6];
        if (((((uVar1 & 4) == 0) || ((uVar1 & 1) == 0)) || ((uVar1 & 8) != 0)) || ((uVar1 & 0x20) != 0)) {
            iVar2 = 0;
        } else {
            iVar2 = 4;
        }
        uVar3 = (a2 & 0xfffffffc) + iVar2;
        uVar1 = a0[5] - uVar3;
        if (a0[5] <= uVar3) {
            return 7;
        }
        if (ar7_00 < uVar1) {
            uVar1 = ar7_00;
        }
        vram64_20a8e0(uVar3 + a0[7], a1, uVar1);
    }
    return 0;
}

/*
 * tex_vram_write_rect  0x8c20ccd6
 * copies a rectangle of 16-bit texels from a1 into texture a0's VRAM row by row
 */
u32 tex_vram_write_rect(int a0, int a1, int a2, u32 unused_a3, u32 s0, u32 s4, u32 s8, u32 s12, u32 s16, u32 s20,
                        int s24, int s28, int s32, int s36, int s40) {
    u32 uVar1;
    u32 in_r3;
    u32 uVar2;
    int ar7_00;
    u32 unaff_r9;
    u32 uVar3;
    int iVar4;
    int ar4_00;

    uVar2 = *(u32 *)(a0 + 0x18);
    if (((((in_r3 & uVar2) == 0) && ((uVar2 & 1) == 0)) && ((uVar2 & 8) == 0)) && ((uVar2 & 0x20) == 0)) {
        ar7_00 = *(int *)(a0 + 0xc);
        iVar4 = ar7_00 * 2;
        ar4_00 = s28 * iVar4 + s24 * 2 + *(int *)(a0 + 0x1c);
        uVar2 = a2 << 1;
        if (s40 != 0) {
            a1 = (s36 * s40 * 2 + s32 * 2 & 0xfffffffcU) + a1;
            uVar2 = s40 * 2;
        }
        uVar3 = 0;
        if (unaff_r9 != 0) {
            do {
                vram64_20a8e0(ar4_00, a1, a2 << 1);
                uVar3 = uVar3 + 1;
                ar4_00 = ar4_00 + iVar4;
                a1 = a1 + (uVar2 & 0xfffffffc);
            } while (uVar3 < unaff_r9);
        }
        uVar1 = 0;
    } else {
        uVar1 = 4;
    }
    return uVar1;
}

/*
 * tex_calls_scan_loop_20cd92  0x8c20cd92
 * area name: sits between tex functions (same compilation unit); behaviour name: its callees mostly do: calls_scan_loop
 */
u32 tex_calls_scan_loop_20cd92(int a0, u32 a1, u32 a2, u32 a3, int s0, int s4) {
    u8 *puVar1;
    int iVar2;
    u32 uVar3;
    u32 a6;
    u32 uVar4;
    u32 ar7_00;
    int iVar5;
    int iVar6;
    u32 *apuStack_1c[2];

    if ((a1 & 0x1f) != 0) {
        return 7;
    }
    uVar3 = *(u32 *)(a0 + 0x18);
    if (((((uVar3 & 1) == 0) && ((uVar3 & 4) == 0)) && ((uVar3 & 8) == 0)) &&
        (((uVar3 & 0x20) == 0 && ((*(u32 *)(a0 + 8) & 0x18000000) != 0)))) {
        if (s0 == 6) {
            iVar5 = 0;
        } else {
            if (s0 != 3) {
                return 4;
            }
            iVar5 = 1;
        }
        if (((0 < (int)a2) && ((int)a2 < 0x41)) && ((0 < (int)a3 && ((int)a3 < 0x41)))) {
            iVar6 = a2 * a3;
            if (iVar6 < 2) {
                a2 = *(u32 *)(a0 + 0xc) >> 4;
                a3 = *(u32 *)(a0 + 0x10) >> 4;
            }
            uVar3 = (u32)(iVar6 >= 2);
            if (iVar5 == 0) {
                if (uVar3 == 0) {
                    iVar6 = a2 * a3;
                }
                iVar6 = iVar6 * 0x180;
            } else {
                if (uVar3 == 0) {
                    iVar6 = a2 * a3;
                }
                iVar6 = iVar6 << 9;
            }
            uVar4 = 0x3f;
            a6 = a2 - 1 & 0x3f;
            (*(code *)(&pvr_20a844))((int)0x14c, iVar5 << 0x18 | uVar3 << 0x10 | (a3 - 1 & 0x3f) << 8 | a6, a6, 0x3f);
            (*(code *)(&pvr_20a844))((int)0x148, *(u32 *)(a0 + 0x1c) & 0xfffff8, a6, uVar4);
            uVar4 = 0x10800000;
            puVar1 = (&sh4_dmac_202f40);
            iVar5 = (int)0x100;
            do {
                ar7_00 = 0x18;
                iVar2 = (*(code *)puVar1)(uVar4, a1, iVar6, 0x18, apuStack_1c);
            } while (iVar2 == iVar5);
            if (iVar2 == 0) {
                if (s4 == 1) {
                    shinobi_calls_scan_loop_203320(*apuStack_1c[0], 0);
                }
                return 0;
            }
            return 8;
        }
    }
    return 4;
}

/*
 * kamui_uses_vram64_20cefe  0x8c20cefe
 * area name: in the kamui library code range; behaviour name: its main named callee is vram64_20a8e0
 */
u32 kamui_uses_vram64_20cefe(u32 *a0, u32 a1) {
    int iVar1;
    u8 *puVar2;
    u32 ar6_00;

    if ((*a0 & 0xffff) == 3) {
        iVar1 = kamui_test_20d400(a0[3], a0[3]);
        if ((a0[6] & 1) == 0) {
            puVar2 = &g_8c26d448;
        } else {
            puVar2 = &g_8c26d464;
        }
        ar6_00 = *(u32 *)(puVar2 + iVar1 * 4);
    } else {
        if ((a0[6] & 8) == 0) {
            return 4;
        }
        ar6_00 = 0x800;
    }
    vram64_20a8e0(a0[7], a1, ar6_00);
    return 0;
}

/*
 * kamui_list_20cf88  0x8c20cf88
 * area name: in the kamui library code range; behaviour name: mostly calls list functions
 * called by: alt_entry_2567fe, alt_entry_25a918, ninja_uses_tex_entry_free_2566c8, ninja_uses_tex_entry_free_2567f8,
 * tex_calls_test_25a914, tex_uses_dcache_writeback_range_25a770
 */
u32 kamui_list_20cf88(u32 *a0) {
    u32 uVar1;

    if ((*a0 & 0xffff) == 3) {
        uVar1 = shinobi_list_203cd0(a0);
    } else {
        uVar1 = shinobi_list_203bda(a0[7]);
    }
    return uVar1;
}

/*
 * alt_entry_20cf8c  0x8c20cf8c
 * probably an entry 4 bytes into 8c20cf88: it reads registers that code sets before it
 */
u32 alt_entry_20cf8c(u32 unused_a0, u32 a1, u32 a2, u32 a3) {
    u32 uVar1;
    u32 *unaff_r14;

    if ((*unaff_r14 & 0xffff) == 3) {
        uVar1 = shinobi_list_203cd0(unaff_r14);
    } else {
        uVar1 = shinobi_list_203bda(unaff_r14[7], a1, a2, a3);
    }
    return uVar1;
}

/*
 * kamui_calls_scan_loop_20cfe0  0x8c20cfe0
 * area name: in the kamui library code range; behaviour name: its callees mostly do: scan_loop
 * called by: ninja_calls_scan_loop_25b49e
 */
u32 kamui_calls_scan_loop_20cfe0(int *a0, u32 *a1) {
    u32 uVar1;
    int iStack_1c;
    int iStack_18;
    int iStack_14;
    u32 uStack_10;
    u32 *puStack_c;
    int *piStack_8;

    puStack_c = a1;
    piStack_8 = a0;
    uVar1 = shinobi_scan_loop_203de0(&iStack_1c, &iStack_18, &iStack_14, &uStack_10);
    *piStack_8 = iStack_1c + iStack_18 + iStack_14;
    *puStack_c = uStack_10;
    return uVar1;
}

/*
 * kamui_uses_CacheBlockWriteBack_wrap_20d01a  0x8c20d01a
 * area name: in the kamui library code range; behaviour name: its callees mostly do: uses_CacheBlockWriteBack_wrap
 */
u32 kamui_uses_CacheBlockWriteBack_wrap_20d01a(u32 *a0, u32 a1, u32 a2) {
    u32 r7;
    u32 uVar1;
    u32 in_r3;
    u32 a7;

    if ((a0[2] == in_r3) && ((a0[6] & 1) != 0)) {
        uVar1 = tex_uses_CacheBlockWriteBack_wrap_20d82e(a0, a1, a2);
    } else if ((a0[2] == 0x30000000) && ((a0[6] & 1) != 0)) {
        uVar1 = kamui_uses_CacheBlockWriteBack_wrap_20d9ce(a0, a1, a2, r7);
    } else if ((*a0 & 0xffff) == 3) {
        uVar1 = kamui_uses_CacheBlockWriteBack_wrap_20db80(a0, a1, a2);
    } else if ((a0[6] & 8) == 0) {
        a7 = a0[6];
        if (((a7 & 4) == 0) || ((a7 & 1) == 0)) {
            uVar1 = 4;
        } else {
            uVar1 = kamui_uses_CacheBlockWriteBack_wrap_20daa0(a0, a1, a2);
        }
    } else {
        uVar1 = kamui_uses_CacheBlockWriteBack_wrap_20db80(a0, a1, a2);
    }
    return uVar1;
}

/*
 * kamui_uses_vram_20d082  0x8c20d082
 * area name: in the kamui library code range; behaviour name: its main named callee is vram_20a892
 * called by: ninja_uses_write_u32_le_25b12e
 */
u32 kamui_uses_vram_20d082(u32 a0, u32 *a1) {
    u32 uVar1;

    if ((*a1 & 3) == 1) {
        vram_20a892(a1[7], a1[5]);
    } else if ((*a1 & 0xffff) == 3) {
        tex_uses_vram64_20d7a0(a0, a1[7], a1[3], a1[6]);
    } else {
        uVar1 = a1[6];
        if (((((uVar1 & 4) == 0) || ((uVar1 & 1) == 0)) || ((uVar1 & 8) != 0)) || ((uVar1 & 0x20) != 0)) {
            vram64_20a9c2(a1[7], a1[5]);
        } else {
            tex_uses_vram64_20d6ea(a0, a1[7], a1[3]);
        }
    }
    return 0;
}

/*
 * alt_entry_20d086  0x8c20d086
 * probably an entry 4 bytes into 8c20d082: it reads registers that code sets before it
 */
u32 alt_entry_20d086(u32 a0) {
    u32 uVar1;
    u32 *unaff_r14;

    if ((*unaff_r14 & 3) == 1) {
        vram_20a892(a0, unaff_r14[7], unaff_r14[5]);
    } else if ((*unaff_r14 & 0xffff) == 3) {
        tex_uses_vram64_20d7a0(a0, unaff_r14[7], unaff_r14[3], unaff_r14[6]);
    } else {
        uVar1 = unaff_r14[6];
        if (((((uVar1 & 4) == 0) || ((uVar1 & 1) == 0)) || ((uVar1 & 8) != 0)) || ((uVar1 & 0x20) != 0)) {
            vram64_20a9c2(a0, unaff_r14[7], unaff_r14[5]);
        } else {
            tex_uses_vram64_20d6ea(a0, unaff_r14[7], unaff_r14[3]);
        }
    }
    return 0;
}

/*
 * kamui_draw_20d114  0x8c20d114
 * area name: in the kamui library code range; behaviour name: mostly calls draw functions
 * called by: ninja_draw_25b4ea
 */
u32 kamui_draw_20d114(u32 unused_a0, u32 unused_a1, u32 unused_a2, u32 a3) {
    u32 uVar1;

    shinobi_list_20408e(unused_a0, unused_a1, unused_a2, a3);
    uVar1 = shinobi_draw_2040ce();
    return uVar1;
}

/*
 * ta_fifo_20d128  0x8c20d128
 * called by: kamui_uses_callback_table_call_20ca32, pvr_list_20c980, pvr_uses_ta_fifo_20c90c
 */
u32 ta_fifo_20d128(u32 *a0, int a1, int a2, u32 a3) {
    u32 uVar1;
    u32 uVar2;
    u32 uVar3;
    u32 uVar4;

    uVar3 = 0;
    uVar4 = a3 & 0xff00;
    uVar2 = a3 & 0xff;
    if ((uVar4 == 0x1000) || (uVar4 == 0x1100)) {
        *a0 = 3;
    } else {
        *a0 = 2;
    }
    if ((uVar4 == 0x500) || (uVar4 == 0x600)) {
        if (*(int *)(g_8c2756b0 + 0xa0) == 3) {
            a0[1] = 3;
        } else {
            a0[1] = 1;
        }
        uVar1 = 0x28000000;
    } else {
        if ((uVar4 != 0x700) && (uVar4 != 0x800)) {
            a0[1] = 1;
            if (uVar2 == 0) {
                a0[2] = 0;
                goto LAB_8c20d262;
            }
            if (uVar2 == 1) {
                uVar1 = 0x8000000;
            LAB_8c20d22e:
                a0[2] = uVar1;
            } else {
                if (uVar2 == 2) {
                    uVar1 = 0x10000000;
                } else {
                    if (uVar2 == 3) {
                        uVar1 = 0x18000000;
                        goto LAB_8c20d22e;
                    }
                    if (uVar2 != 4) {
                        uVar3 = 4;
                        goto LAB_8c20d262;
                    }
                    uVar1 = 0x20000000;
                }
                a0[2] = uVar1;
            }
            goto LAB_8c20d262;
        }
        if (*(int *)(g_8c2756b0 + 0xa0) == 3) {
            a0[1] = 3;
        } else {
            a0[1] = 1;
        }
        uVar1 = 0x30000000;
    }
    a0[2] = uVar1;
LAB_8c20d262:
    a0[3] = a1;
    a0[4] = a2;
    if ((((a1 != 8) && (a1 != 0x10)) && (a1 != 0x20)) &&
        (((a1 != 0x40 && (a1 != 0x80)) && ((a1 != 0x100 && ((a1 != 0x200 && (a1 != 0x400)))))))) {
        uVar3 = 4;
    }
    if (((((a2 != 8) && (a2 != 0x10)) && (a2 != 0x20)) && ((a2 != 0x40 && (a2 != 0x80)))) &&
        ((a2 != 0x100 && ((a2 != 0x200 && (a2 != 0x400)))))) {
        uVar3 = 4;
    }
    if (((((uVar4 != 0x900) && (uVar4 != 0xb00)) && (uVar4 != 0xd00)) && ((uVar4 != 0x500 && (uVar4 != 0x700)))) &&
        (a1 != a2)) {
        uVar3 = 4;
    }
    a0[6] = 0;
    if (((uVar4 == 0xf00) || (uVar4 == 0x200)) ||
        ((uVar4 == 0x400 || (((uVar4 == 0x1100 || (uVar4 == 0x600)) || (uVar4 == 0x800)))))) {
        a0[6] = a0[6] | 1;
    }
    if (((uVar4 == 0xe00) || (uVar4 == 0xf00)) || ((uVar4 == 0x100 || ((uVar4 == 0x200 || (uVar4 == 0xd00)))))) {
        a0[6] = a0[6] | 4;
    }
    if ((((uVar4 == 0x300) || (uVar4 == 0x400)) || (uVar4 == 0x1000)) || (uVar4 == 0x1100)) {
        a0[6] = a0[6] | 0xc;
    }
    if (uVar4 == 0xb00) {
        a0[6] = a0[6] | 0x10;
    }
    if (((uVar4 == 0x500) || (uVar4 == 0x600)) || ((uVar4 == 0x700 || (uVar4 == 0x800)))) {
        a0[6] = a0[6] | 0x24;
    }
    kamui_uses_tex_small_vq_size_bytes_20d4a6(a0, a1, a2, 4);
    return uVar3;
}

/*
 * kamui_test_20d400  0x8c20d400
 * area name: in the kamui library code range; behaviour name: returns the result of a comparison
 * called by: kamui_uses_CacheBlockWriteBack_wrap_20d9ce, kamui_uses_CacheBlockWriteBack_wrap_20daa0,
 * kamui_uses_CacheBlockWriteBack_wrap_20db80, kamui_uses_vram64_20cefe, tex_small_vq_size_bytes,
 * tex_uses_CacheBlockWriteBack_wrap_20d82e, tex_uses_vram64_20d6c0, tex_uses_vram64_20d6ea (+2 more)
 */
u32 kamui_test_20d400(int a0, int a1) {
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
    if (a0 != 8) {
        if (a0 == 0x10) {
            return 4;
        }
        if (a0 == 0x20) {
            return 5;
        }
        if (a0 == 0x40) {
            return 6;
        }
        if (a0 == 0x80) {
            return 7;
        }
        if (a0 == 0x100) {
            return 8;
        }
        if (a0 == 0x200) {
            return 9;
        }
        if (a0 == 0x400) {
            return 10;
        }
    }
    return 3;
}

/*
 * kamui_uses_tex_small_vq_size_bytes_20d4a6  0x8c20d4a6
 * area name: in the kamui library code range; behaviour name: its main named callee is tex_small_vq_size_bytes
 * called by: ta_fifo_20d128
 */
u32 kamui_uses_tex_small_vq_size_bytes_20d4a6(u32 *a0, u32 unused_a1, u32 unused_a2, u32 a3) {
    u32 uVar1;

    if ((*a0 & 0xffff) == 3) {
        uVar1 = tex_small_vq_size_bytes(a0);
    } else if ((a0[6] & 8) == 0) {
        if ((a0[6] & 0x20) == 0) {
            uVar1 = tex_size_bytes(a0);
        } else {
            uVar1 = tex_scan_loop_20d5b2(a0);
        }
    } else {
        uVar1 = tex_vq_size_bytes(a0);
    }
    a0[5] = uVar1;
    return uVar1;
}

/*
 * alt_entry_20d4aa  0x8c20d4aa
 * probably an entry 4 bytes into 8c20d4a6: it reads registers that code sets before it
 */
u32 alt_entry_20d4aa(void) {
    u32 uVar1;
    u32 *unaff_r14;

    if ((*unaff_r14 & 0xffff) == 3) {
        uVar1 = tex_small_vq_size_bytes(unaff_r14);
    } else if ((unaff_r14[6] & 8) == 0) {
        if ((unaff_r14[6] & 0x20) == 0) {
            uVar1 = tex_size_bytes(unaff_r14);
        } else {
            uVar1 = tex_scan_loop_20d5b2(unaff_r14);
        }
    } else {
        uVar1 = tex_vq_size_bytes(unaff_r14);
    }
    unaff_r14[5] = uVar1;
    return uVar1;
}

/*
 * tex_size_bytes  0x8c20d500
 * returns texture a0's size in bytes: width * height (plus the mipmap chain when bit 0 is set) times 2 or 4 bytes
 * called by: alt_entry_20d4aa, kamui_uses_tex_small_vq_size_bytes_20d4a6
 */
int tex_size_bytes(int a0) {
    u32 uVar1;
    u32 uVar2;
    u32 uVar3;
    int iVar4;
    int iVar5;

    iVar4 = *(u32 *)(a0 + 0xc) * *(u32 *)(a0 + 0x10);
    if ((*(u32 *)(a0 + 0x18) & 1) != 0) {
        uVar3 = *(u32 *)(a0 + 0xc) >> 1;
        uVar2 = *(u32 *)(a0 + 0x10) >> 1;
        uVar1 = uVar2;
        if (uVar3 < uVar2) {
            uVar1 = uVar3;
        }
        for (; 1 < uVar1; uVar1 = uVar1 >> 1) {
            iVar5 = uVar3 * uVar2;
            uVar3 = uVar3 >> 1;
            uVar2 = uVar2 >> 1;
            iVar4 = iVar4 + iVar5;
        }
        if (uVar3 == uVar2) {
            iVar4 = iVar4 + 4;
        } else {
            iVar4 = iVar4 + uVar3 * uVar2;
        }
    }
    if (*(int *)(a0 + 4) == 1) {
        iVar4 = iVar4 << 1;
    } else {
        iVar4 = iVar4 << 2;
    }
    return iVar4;
}

/*
 * tex_vq_size_bytes  0x8c20d554
 * returns VQ texture a0's size in bytes: the index data (plus mipmaps) and the 0x800-byte codebook
 * called by: alt_entry_20d4aa, kamui_uses_tex_small_vq_size_bytes_20d4a6
 */
int tex_vq_size_bytes(int a0) {
    u32 uVar1;
    u32 uVar2;
    u32 uVar3;
    int iVar4;
    int iVar5;

    iVar4 = (*(u32 *)(a0 + 0xc) >> 1) * (*(u32 *)(a0 + 0x10) >> 1);
    if ((*(u32 *)(a0 + 0x18) & 1) == 0) {
        if ((*(int *)(a0 + 0xc) == 8) && (*(int *)(a0 + 0x10) == 8)) {
            iVar4 = iVar4 + 0x10;
        }
    } else {
        uVar3 = *(u32 *)(a0 + 0xc) >> 2;
        uVar2 = *(u32 *)(a0 + 0x10) >> 2;
        uVar1 = uVar2;
        if (uVar3 < uVar2) {
            uVar1 = uVar3;
        }
        for (; 1 < uVar1; uVar1 = uVar1 >> 1) {
            iVar5 = uVar3 * uVar2;
            uVar3 = uVar3 >> 1;
            uVar2 = uVar2 >> 1;
            iVar4 = iVar4 + iVar5;
        }
        if (uVar3 == uVar2) {
            iVar4 = iVar4 + 2;
        } else {
            iVar4 = iVar4 + uVar3 * uVar2;
        }
        iVar4 = iVar4 + 10;
    }
    return iVar4 + 0x800;
}

/*
 * tex_scan_loop_20d5b2  0x8c20d5b2
 * area name: sits between tex functions (same compilation unit); behaviour name: a loop that only reads
 * called by: alt_entry_20d4aa, kamui_uses_tex_small_vq_size_bytes_20d4a6
 */
u32 tex_scan_loop_20d5b2(int a0) {
    u32 uVar1;
    u32 uVar2;
    u32 uVar3;
    u32 uVar4;
    int iVar5;

    uVar4 = *(u32 *)(a0 + 0xc) * *(u32 *)(a0 + 0x10);
    if ((*(u32 *)(a0 + 0x18) & 1) != 0) {
        uVar2 = *(u32 *)(a0 + 0xc) >> 1;
        uVar3 = *(u32 *)(a0 + 0x10) >> 1;
        uVar1 = uVar3;
        if (uVar2 < uVar3) {
            uVar1 = uVar2;
        }
        for (; 1 < uVar1; uVar1 = uVar1 >> 1) {
            iVar5 = uVar2 * uVar3;
            uVar2 = uVar2 >> 1;
            uVar3 = uVar3 >> 1;
            uVar4 = uVar4 + iVar5;
        }
        if (uVar2 == uVar3) {
            iVar5 = uVar4 + 1;
        } else {
            iVar5 = uVar4 + uVar2 * uVar3;
        }
        if (*(int *)(a0 + 8) == 0x28000000) {
            uVar4 = iVar5 + 0x2b;
        } else {
            uVar4 = iVar5 + 0xb;
        }
    }
    if (*(int *)(a0 + 8) == 0x28000000) {
        if (uVar4 == 1) {
            uVar4 = 1;
        } else {
            uVar4 = uVar4 >> 1;
        }
    }
    return uVar4;
}

/*
 * tex_small_vq_size_bytes  0x8c20d63c
 * returns small-VQ texture a0's size in bytes, taking the codebook size from a table by texture size
 * called by: alt_entry_20d4aa, kamui_uses_tex_small_vq_size_bytes_20d4a6
 */
int tex_small_vq_size_bytes(int a0) {
    u32 uVar1;
    int iVar2;
    u32 uVar3;
    u32 uVar4;
    int iVar5;
    int iVar6;

    uVar3 = *(u32 *)(a0 + 0xc);
    uVar4 = *(u32 *)(a0 + 0x10);
    iVar5 = (uVar3 >> 1) * (uVar4 >> 1);
    iVar2 = kamui_test_20d400(uVar3, uVar4);
    if ((*(u32 *)(a0 + 0x18) & 1) == 0) {
        iVar5 = iVar5 + *(int *)(&g_8c26d448 + iVar2 * 4);
    } else {
        uVar3 = uVar3 >> 2;
        uVar4 = uVar4 >> 2;
        uVar1 = uVar4;
        if (uVar3 < uVar4) {
            uVar1 = uVar3;
        }
        for (; 1 < uVar1; uVar1 = uVar1 >> 1) {
            iVar6 = uVar3 * uVar4;
            uVar3 = uVar3 >> 1;
            uVar4 = uVar4 >> 1;
            iVar5 = iVar5 + iVar6;
        }
        if (uVar3 == uVar4) {
            iVar5 = iVar5 + 2;
        } else {
            iVar5 = iVar5 + uVar3 * uVar4;
        }
        iVar5 = iVar5 + 10 + *(int *)(&g_8c26d464 + iVar2 * 4);
    }
    return iVar5;
}

/*
 * tex_uses_vram64_20d6c0  0x8c20d6c0
 * area name: sits between tex functions (same compilation unit); behaviour name: its main named callee is vram64_20a8e0
 * called by: kamui_uses_vram64_20cb5a, kamui_uses_vram64_20cb5e
 */
u32 tex_uses_vram64_20d6c0(int a0, u32 a1, u32 a2) {
    int iVar1;
    u32 uVar2;

    iVar1 = kamui_test_20d400(a2, a2);
    uVar2 = vram64_20a8e0(a0 + 4, a1, *(int *)(&g_8c26d4d8 + iVar1 * 4) + 4);
    return uVar2;
}

/*
 * tex_uses_vram64_20d6ea  0x8c20d6ea
 * area name: sits between tex functions (same compilation unit); behaviour name: its main named callee is vram64_20a9c2
 * called by: alt_entry_20d086, kamui_uses_vram_20d082
 */
u32 tex_uses_vram64_20d6ea(u32 a0, int a1, u32 a2) {
    int iVar1;
    u32 uVar2;

    iVar1 = kamui_test_20d400(a2, a2);
    uVar2 = vram64_20a9c2(a0, a1 + 4, *(u32 *)(&g_8c26d4d8 + iVar1 * 4));
    return uVar2;
}

/*
 * tex_uses_vram64_20d740  0x8c20d740
 * area name: sits between tex functions (same compilation unit); behaviour name: its main named callee is vram64_20a8e0
 * called by: kamui_uses_vram64_20cb5a, kamui_uses_vram64_20cb5e
 */
u32 tex_uses_vram64_20d740(int a0, int a1, u32 a2, u32 a3) {
    int iVar1;
    u32 uVar2;
    int ar6_00;
    iVar1 = kamui_test_20d400(a2, a2);
    iVar1 = iVar1 * 4;
    if ((a3 & 1) == 0) {
        ar6_00 = *(int *)(&g_8c26d448 + iVar1);
        iVar1 = *(int *)(&g_8c26d530 + iVar1);
    } else {
        ar6_00 = *(int *)(&g_8c26d464 + iVar1);
        iVar1 = *(int *)(&g_8c26d55c + iVar1) + 10;
    }
    vram64_20a8e0(a0, a1, ar6_00);
    uVar2 = vram64_20a8e0(a0 + 0x800, a1 + ar6_00, iVar1);
    return uVar2;
}

/*
 * tex_uses_vram64_20d7a0  0x8c20d7a0
 * area name: sits between tex functions (same compilation unit); behaviour name: its main named callee is vram64_20a9c2
 * called by: alt_entry_20d086, kamui_uses_vram_20d082
 */
u32 tex_uses_vram64_20d7a0(int a0, int a1, u32 a2, u32 a3) {
    int iVar1;
    u32 uVar2;
    int ar6_00;
    iVar1 = kamui_test_20d400(a2, a2);
    iVar1 = iVar1 * 4;
    if ((a3 & 1) == 0) {
        ar6_00 = *(int *)(&g_8c26d448 + iVar1);
        iVar1 = *(int *)(&g_8c26d530 + iVar1);
    } else {
        ar6_00 = *(int *)(&g_8c26d464 + iVar1);
        iVar1 = *(int *)(&g_8c26d55c + iVar1) + 10;
    }
    vram64_20a9c2(a0, a1, ar6_00);
    uVar2 = vram64_20a9c2(a0 + ar6_00, a1 + 0x800, iVar1);
    return uVar2;
}

/*
 * tex_uses_CacheBlockWriteBack_wrap_20d82e  0x8c20d82e
 * area name: sits between tex functions (same compilation unit); behaviour name: its main named callee is
 * CacheBlockWriteBack_wrap called by: kamui_uses_CacheBlockWriteBack_wrap_20d01a
 */
u32 tex_uses_CacheBlockWriteBack_wrap_20d82e(int a0, u8 *a1, int a2) {
    u8 uVar1;
    int iVar2;
    int iVar3;
    int iVar4;
    u8 *puVar5;
    u8 *puVar6;
    u8 *puVar7;
    int iVar8;
    u8 auStack_30[12];
    u8 auStack_24[4];
    u8 auStack_20[4];

    iVar2 = kamui_test_20d400(a2, a2);
    if (a2 < 5) {
        puVar7 = (u8 *)0x10;
        vram64_20a9c2(auStack_30, *(u32 *)(a0 + 0x1c), 0x10);
        if (a2 == 1) {
            auStack_30[1] = *a1;
        } else {
            puVar6 = auStack_30 + 4;
            if (a2 == 2) {
                puVar5 = auStack_30 + 2;
                do {
                    uVar1 = *a1;
                    a1 = a1 + 1;
                    *puVar5 = uVar1;
                    puVar5 = puVar5 + 1;
                } while (puVar5 < puVar6);
            } else {
                puVar7 = auStack_24;
                do {
                    uVar1 = *a1;
                    a1 = a1 + 1;
                    *puVar6 = uVar1;
                    puVar6 = puVar6 + 1;
                } while (puVar6 < puVar7);
            }
        }
        iVar2 = *(int *)(a0 + 0x1c);
        CacheBlockWriteBack_wrap(auStack_30);
        CacheBlockWriteBack_wrap(&stack0xfffffff0);
    } else {
        iVar8 = iVar2 * 4;
        vram64_20a9c2(auStack_30, *(int *)(a0 + 0x1c) + *(int *)(&g_8c26d5e0 + iVar8) + -0xc, 0x10);
        puVar5 = auStack_20;
        puVar6 = auStack_24;
        puVar7 = a1;
        do {
            uVar1 = *puVar7;
            puVar7 = puVar7 + 1;
            *puVar6 = uVar1;
            puVar6 = puVar6 + 1;
        } while (puVar6 < puVar5);
        iVar3 = *(int *)(a0 + 0x1c);
        iVar4 = *(int *)(&g_8c26d5e0 + iVar8);
        CacheBlockWriteBack_wrap(auStack_30);
        CacheBlockWriteBack_wrap(&stack0xfffffff0);
        vram64_20a8e0(iVar3 + iVar4 + -0xc, auStack_30, 0x10);
        if (*(int *)(&g_8c26d60c + iVar8) != 0x10) {
            vram64_20a8e0(*(int *)(a0 + 0x1c) + *(int *)(&g_8c26d5e0 + iVar8) + 4, a1 + 4,
                          *(int *)(&g_8c26d60c + iVar8) + -0x10);
        }
        vram64_20a9c2(auStack_30, *(int *)(a0 + 0x1c) + *(int *)(&g_8c26d5e0 + (iVar2 + 1) * 4) + -0xc, 0x10);
        puVar5 = auStack_24;
        puVar6 = a1 + *(int *)(&g_8c26d60c + iVar8) + -0xc;
        puVar7 = auStack_30;
        do {
            uVar1 = *puVar6;
            puVar6 = puVar6 + 1;
            *puVar7 = uVar1;
            puVar7 = puVar7 + 1;
        } while (puVar7 < puVar5);
        iVar2 = *(int *)(a0 + 0x1c) + *(int *)(&g_8c26d5e0 + (iVar2 + 1) * 4) + -0xc;
        CacheBlockWriteBack_wrap(auStack_30);
        CacheBlockWriteBack_wrap(&stack0xfffffff0);
    }
    vram64_20a8e0(iVar2, auStack_30, 0x10);
    return 0;
}

/*
 * kamui_uses_CacheBlockWriteBack_wrap_20d9ce  0x8c20d9ce
 * area name: in the kamui library code range; behaviour name: its main named callee is CacheBlockWriteBack_wrap
 * called by: kamui_uses_CacheBlockWriteBack_wrap_20d01a
 */
u32 kamui_uses_CacheBlockWriteBack_wrap_20d9ce(int a0, u8 *a1, int a2, u32 unused_a3, u32 s0, u32 s4) {
    u8 uVar1;
    int iVar2;
    u8 *puVar3;
    u8 *ar5_00;
    u8 *ar6_00;
    u32 ar6_01;
    u8 auStack_1c[3];
    u8 uStack_19;
    u8 auStack_18[4];
    u8 auStack_14[4];

    iVar2 = kamui_test_20d400(a2, a2);
    if (a2 < 3) {
        ar6_00 = (u8 *)0x8;
        ar5_00 = *(u8 **)(a0 + 0x1c);
        vram64_20a9c2(auStack_1c, ar5_00, 8);
        if (a2 == 1) {
            uStack_19 = *a1;
        } else {
            ar6_00 = auStack_14;
            puVar3 = auStack_18;
            ar5_00 = a1;
            do {
                uVar1 = *ar5_00;
                ar5_00 = ar5_00 + 1;
                *puVar3 = uVar1;
                puVar3 = puVar3 + 1;
            } while (puVar3 < ar6_00);
        }
        iVar2 = *(int *)(a0 + 0x1c);
        CacheBlockWriteBack_wrap(auStack_1c);
        CacheBlockWriteBack_wrap(&s4);
        ar6_01 = 8;
        a1 = auStack_1c;
    } else {
        ar6_01 = *(u32 *)(&g_8c26d5b4 + iVar2 * 4);
        iVar2 = *(int *)(&g_8c26d588 + iVar2 * 4) + *(int *)(a0 + 0x1c);
    }
    vram64_20a8e0(iVar2, a1, ar6_01);
    return 0;
}

/*
 * kamui_uses_CacheBlockWriteBack_wrap_20daa0  0x8c20daa0
 * area name: in the kamui library code range; behaviour name: its main named callee is CacheBlockWriteBack_wrap
 * called by: kamui_uses_CacheBlockWriteBack_wrap_20d01a
 */
u32 kamui_uses_CacheBlockWriteBack_wrap_20daa0(int a0, u8 *a1, int a2) {
    u8 uVar1;
    int iVar2;
    u8 *puVar3;
    u8 *puVar4;
    u8 *ar6_00;
    u32 ar6_01;
    u8 auStack_24[6];
    u8 auStack_1e[2];
    u8 auStack_1c[8];
    u8 auStack_14[4];

    iVar2 = kamui_test_20d400(a2, a2);
    if (a2 < 3) {
        ar6_00 = (u8 *)0x10;
        vram64_20a9c2(auStack_24, *(u32 *)(a0 + 0x1c), 0x10);
        puVar4 = auStack_1c;
        if (a2 == 1) {
            puVar3 = auStack_1e;
            do {
                uVar1 = *a1;
                a1 = a1 + 1;
                *puVar3 = uVar1;
                puVar3 = puVar3 + 1;
            } while (puVar3 < puVar4);
        } else {
            ar6_00 = auStack_14;
            do {
                uVar1 = *a1;
                a1 = a1 + 1;
                *puVar4 = uVar1;
                puVar4 = puVar4 + 1;
            } while (puVar4 < ar6_00);
        }
        iVar2 = *(int *)(a0 + 0x1c);
        CacheBlockWriteBack_wrap(auStack_24);
        CacheBlockWriteBack_wrap(&stack0xfffffffc);
        ar6_01 = 0x10;
        a1 = auStack_24;
    } else {
        ar6_01 = *(u32 *)(&g_8c26d4ac + iVar2 * 4);
        iVar2 = *(int *)(&g_8c26d480 + iVar2 * 4) + *(int *)(a0 + 0x1c);
    }
    vram64_20a8e0(iVar2, a1, ar6_01);
    return 0;
}

/*
 * kamui_uses_CacheBlockWriteBack_wrap_20db80  0x8c20db80
 * area name: in the kamui library code range; behaviour name: its main named callee is CacheBlockWriteBack_wrap
 * called by: kamui_uses_CacheBlockWriteBack_wrap_20d01a
 */
u32 kamui_uses_CacheBlockWriteBack_wrap_20db80(int a0, u8 *a1, int a2) {
    u8 uVar1;
    int iVar2;
    int iVar3;
    int iVar4;
    u8 *puVar5;
    u8 *puVar6;
    u8 *a6;
    u8 auStack_30[6];
    u8 auStack_2a[10];
    u8 auStack_20[4];

    iVar2 = kamui_test_20d400(a2, a2);
    if (a2 != 1) {
        if (a2 < 5) {
            puVar6 = (u8 *)0x10;
            vram64_20a9c2(auStack_30, *(int *)(a0 + 0x1c) + 0x800, 0x10);
            if (a2 == 2) {
                auStack_30[1] = *a1;
            } else {
                puVar6 = auStack_2a;
                puVar5 = auStack_30 + 2;
                do {
                    uVar1 = *a1;
                    a1 = a1 + 1;
                    *puVar5 = uVar1;
                    puVar5 = puVar5 + 1;
                } while (puVar5 < puVar6);
            }
            iVar2 = *(int *)(a0 + 0x1c) + 0x800;
        } else {
            vram64_20a9c2(auStack_30, *(int *)(a0 + 0x1c) + *(int *)(&g_8c26d55c + (iVar2 + -1) * 4) + 0x7fa, 0x10);
            a6 = auStack_20;
            puVar6 = auStack_2a;
            puVar5 = a1;
            do {
                uVar1 = *puVar5;
                puVar5 = puVar5 + 1;
                *puVar6 = uVar1;
                puVar6 = puVar6 + 1;
            } while (puVar6 < a6);
            iVar3 = *(int *)(a0 + 0x1c);
            iVar4 = *(int *)(&g_8c26d55c + (iVar2 + -1) * 4);
            CacheBlockWriteBack_wrap(auStack_30);
            CacheBlockWriteBack_wrap(&stack0xfffffff0);
            vram64_20a8e0(iVar3 + iVar4 + 0x7fa, auStack_30, 0x10);
            iVar3 = iVar2 * 4;
            if (*(int *)(&g_8c26d530 + iVar3) != 0x10) {
                vram64_20a8e0(*(int *)(a0 + 0x1c) + *(int *)(&g_8c26d55c + (iVar2 + -1) * 4) + 0x80a, a1 + 10,
                              *(int *)(&g_8c26d530 + iVar3) + -0x10);
            }
            vram64_20a9c2(auStack_30, *(int *)(a0 + 0x1c) + *(int *)(&g_8c26d55c + iVar3) + 0x7fa, 0x10);
            puVar6 = auStack_2a;
            a1 = a1 + *(int *)(&g_8c26d530 + iVar3) + -6;
            puVar5 = auStack_30;
            do {
                uVar1 = *a1;
                a1 = a1 + 1;
                *puVar5 = uVar1;
                puVar5 = puVar5 + 1;
            } while (puVar5 < puVar6);
            iVar2 = *(int *)(a0 + 0x1c) + *(int *)(&g_8c26d55c + iVar3) + 0x7fa;
        }
        CacheBlockWriteBack_wrap(auStack_30);
        CacheBlockWriteBack_wrap(&stack0xfffffff0);
        vram64_20a8e0(iVar2, auStack_30, 0x10);
    }
    return 0;
}

/*
 * ta_fifo_20dd80  0x8c20dd80
 */
u32 ta_fifo_20dd80(u32 a0, u32 a1, int a2, int a3, int s0, u32 s4) {
    u32 uVar1;

    if ((s0 < 8) || (0x400 < s0)) {
    LAB_8c20de00:
        uVar1 = 4;
    } else {
        if ((char)s4 == '\0') {
            uVar1 = 0;
        } else if ((char)s4 == '\x01') {
            uVar1 = 0x8000000;
        } else {
            if ((char)s4 != '\x02')
                goto LAB_8c20de00;
            uVar1 = 0x10000000;
        }
        if (a2 == 1) {
            kamui_draw_20e8c6(a0, a1, a3, s0);
        } else {
            if (a3 == 1) {
                ta_fifo_20e9ae(a1, s0, s0, uVar1);
            }
            ta_fill_loop_20ed60(a0, a1, s0, uVar1);
        }
        uVar1 = 0;
    }
    return uVar1;
}

/*
 * ta_fill_loop_20de80  0x8c20de80
 * area name: sits between ta functions (same compilation unit); behaviour name: a loop that writes memory
 * called by: ninja_uses_write_u32_le_25b12e
 */
u32 ta_fill_loop_20de80(u8 *a0, int a1, int a2, int a3, int s0) {
    u32 uVar1;
    int iVar2;
    u16 *puVar3;
    u16 *puVar4;
    int iVar5;
    int iVar6;
    u32 uVar7;
    u32 uVar8;
    int unaff_r12;
    int unaff_r13;
    u32 uVar9;

    iVar5 = a3 + -1;
    uVar7 = (u32)0x7c00;
    uVar8 = (u32)0x3e0;
    puVar3 = (u16 *)(a2 * iVar5 * 2 + a1);
    iVar6 = iVar5;
    do {
        if (iVar5 < 0) {
            return 0;
        }
        iVar2 = 0;
        puVar4 = puVar3;
        if (0 < a2) {
            do {
                if (s0 == 0) {
                    uVar1 = (u32)*puVar4;
                    iVar6 = (int)(0xf800 & uVar1) >> 8;
                    uVar9 = (int)((int)0x7e0 & uVar1) >> 1;
                LAB_8c20df30:
                    unaff_r13 = (int)uVar9 >> 2;
                    unaff_r12 = (uVar1 & 0x1f) << 3;
                } else {
                    if (s0 == 1) {
                        uVar1 = (u32)*puVar4;
                        iVar6 = (int)(uVar1 & uVar7) >> 7;
                        uVar9 = uVar1 & uVar8;
                        goto LAB_8c20df30;
                    }
                    if (s0 == 3) {
                        uVar1 = (u32)*puVar4;
                        uVar9 = uVar1 & uVar8;
                        iVar6 = (int)(uVar1 & uVar7) >> 7;
                        goto LAB_8c20df30;
                    }
                }
                iVar2 = iVar2 + 1;
                *a0 = (char)unaff_r12;
                a0[1] = (char)unaff_r13;
                a0[2] = (char)iVar6;
                a0 = a0 + 3;
                puVar4 = puVar4 + 1;
            } while (iVar2 < a2);
        }
        iVar5 = iVar5 + -1;
        puVar3 = puVar3 + -a2;
    } while (true);
}

/*
 * ta_uses_libgcc_movstr_i4_20df7a  0x8c20df7a
 * area name: sits between ta functions (same compilation unit); behaviour name: its main named callee is
 * libgcc_movstr_i4
 */
u32 ta_uses_libgcc_movstr_i4_20df7a(int a0, u32 a1, int a2, u32 *a3) {
    u32 uVar1;
    u32 uVar2;
    int ar6_00;
    u32 *ar7_00;
    u32 ain0;

    if (a0 == 0) {
        uVar1 = 1;
    } else {
        ar6_00 = a2;
        ar7_00 = a3;
        ain0 = a1;
        uVar2 = kamui_calc_20e720(a0);
        *a3 = uVar2;
        if (a2 != 0) {
            if (ain0 < *a3) {
                return 2;
            }
            uVar2 = 0;
            if (*a3 != 0) {
                do {
                    libgcc_movstr_i4(uVar2, a1, ar6_00, ar7_00);
                    uVar2 = uVar2 + 1;
                } while (uVar2 < *a3);
            }
            kamui_update_fields_20e78e(a2);
        }
        uVar1 = 0;
    }
    return uVar1;
}

/*
 * kamui_calls_test_20e030  0x8c20e030
 * area name: in the kamui library code range; behaviour name: its callees mostly do: test
 */
u32 kamui_calls_test_20e030(void) {
    int iVar1;
    u32 in_r3;
    u32 uVar2;
    u32 unaff_r10;
    int unaff_r12;
    u32 *unaff_r13;
    u32 a5;

    uVar2 = 0;
    if (unaff_r10 < in_r3) {
        *unaff_r13 = 0;
        uVar2 = 2;
    } else {
        a5 = 0;
        if (unaff_r10 != 0) {
            while (*(int *)(a5 * 4 + unaff_r12) != 0) {
                iVar1 = kamui_test_20e16a(unaff_r12, a5, unaff_r13);
                if (iVar1 != 0) {
                    return iVar1;
                }
                iVar1 = ta_test_20e1e6(unaff_r12, a5, unaff_r13);
                if (iVar1 != 0) {
                    return iVar1;
                }
                iVar1 = ta_test_20e272(unaff_r12, a5, unaff_r13);
                if (iVar1 != 0) {
                    return iVar1;
                }
                if (g_8c275798 == 1) {
                    iVar1 = ta_test_20e300(unaff_r12, a5, unaff_r13);
                    if (iVar1 != 0) {
                        return iVar1;
                    }
                    iVar1 = ta_test_20e328(unaff_r12, a5, unaff_r13);
                    if (iVar1 != 0) {
                        return iVar1;
                    }
                    iVar1 = ta_test_20e368(unaff_r12, a5, unaff_r13);
                    if (iVar1 != 0) {
                        return iVar1;
                    }
                    iVar1 = ta_test_20e3a0(unaff_r12, a5, unaff_r13);
                    if (iVar1 != 0) {
                        return iVar1;
                    }
                    iVar1 = ta_test_20e400(unaff_r12, a5, unaff_r13);
                    if (iVar1 != 0) {
                        return iVar1;
                    }
                }
                if ((g_8c275798 == 2) || (g_8c275798 == 3)) {
                    iVar1 = ta_test_20e428(unaff_r12, a5, unaff_r13);
                    if (iVar1 != 0) {
                        return iVar1;
                    }
                    iVar1 = ta_calc_20e480(unaff_r12, a5, unaff_r13);
                    if (iVar1 != 0) {
                        return iVar1;
                    }
                    iVar1 = kamui_test_20e608(unaff_r12, a5, unaff_r13);
                    if (iVar1 != 0) {
                        return iVar1;
                    }
                }
                iVar1 = kamui_test_20e664(unaff_r12, a5, unaff_r13);
                if (iVar1 != 0) {
                    return iVar1;
                }
                iVar1 = kamui_test_20e6c0(unaff_r12, a5, unaff_r13);
                if (iVar1 != 0) {
                    return iVar1;
                }
                a5 = a5 + 1;
                if (unaff_r10 <= a5) {
                    return 0;
                }
            }
            *unaff_r13 = a5;
            uVar2 = 1;
        }
    }
    return uVar2;
}

/*
 * kamui_test_20e16a  0x8c20e16a
 * area name: in the kamui library code range; behaviour name: returns the result of a comparison
 * called by: kamui_calls_test_20e030
 */
u32 kamui_test_20e16a(int a0, int a1, int *a2) {
    int iVar1;
    int iVar2;

    iVar2 = *(int *)(a1 * 4 + a0);
    if (((((g_8c275798 != 2) && (g_8c275798 != 3)) || (iVar1 = *(int *)(iVar2 + 4), iVar1 == 0)) ||
         ((iVar1 == 1 || (iVar1 == 2)))) &&
        ((g_8c275798 != 1 || ((iVar2 = *(int *)(iVar2 + 4), iVar2 == 0 || (iVar2 == 1)))))) {
        return 0;
    }
    *a2 = a1 + 1;
    return 3;
}

/*
 * ta_test_20e1e6  0x8c20e1e6
 * area name: sits between ta functions (same compilation unit); behaviour name: returns the result of a comparison
 * called by: kamui_calls_test_20e030
 */
u32 ta_test_20e1e6(int a0, int a1, int *a2) {
    int iVar1;
    int iVar2;

    iVar1 = *(int *)(a1 * 4 + a0);
    if (((((g_8c275798 != 2) && (g_8c275798 != 3)) || ((*(int *)(iVar1 + 4) != 0 && (*(int *)(iVar1 + 4) != 2)))) ||
         (((((g_8c275798 != 3 || (iVar2 = *(int *)(iVar1 + 8), iVar2 == 0)) || (iVar2 == 2)) || (iVar2 == 4)) &&
           (((g_8c275798 != 2 || (*(int *)(iVar1 + 8) == 0)) || (*(int *)(iVar1 + 8) == 2)))))) &&
        ((((g_8c275798 != 1 || (*(int *)(iVar1 + 4) != 0)) ||
           ((*(int *)(iVar1 + 8) == 0 || (*(int *)(iVar1 + 8) == 2)))) &&
          (((*(int *)(iVar1 + 4) != 1 || (*(int *)(iVar1 + 8) == 1)) || (*(int *)(iVar1 + 8) == 3)))))) {
        return 0;
    }
    *a2 = a1 + 1;
    return 4;
}

/*
 * ta_test_20e272  0x8c20e272
 * area name: sits between ta functions (same compilation unit); behaviour name: returns the result of a comparison
 * called by: kamui_calls_test_20e030
 */
u32 ta_test_20e272(int a0, int a1, int *a2) {
    int iVar1;

    iVar1 = *(int *)(a1 * 4 + a0);
    if (((((g_8c275798 != 2) && (g_8c275798 != 3)) || ((*(int *)(iVar1 + 4) != 0 && (*(int *)(iVar1 + 4) != 2)))) ||
         (((*(int *)(iVar1 + 0x20) != 2 && (*(int *)(iVar1 + 0x20) != 3)) || (*(int *)(iVar1 + 0x5c) != 0)))) &&
        ((((g_8c275798 != 1 || (*(int *)(iVar1 + 4) != 0)) ||
           ((*(int *)(iVar1 + 0x20) != 2 && (*(int *)(iVar1 + 0x20) != 3)))) ||
          (*(int *)(iVar1 + 0x5c) != 0)))) {
        return 0;
    }
    *a2 = a1 + 1;
    return 5;
}

/*
 * ta_test_20e300  0x8c20e300
 * area name: sits between ta functions (same compilation unit); behaviour name: returns the result of a comparison
 * called by: kamui_calls_test_20e030
 */
u32 ta_test_20e300(int a0, int a1, int *a2) {
    int iVar1;

    iVar1 = *(int *)(a1 * 4 + a0);
    if (((g_8c275798 == 1) && (*(int *)(iVar1 + 4) == 0)) && (*(int *)(iVar1 + 0x3c) == 3)) {
        *a2 = a1 + 1;
        return 6;
    }
    return 0;
}

/*
 * ta_test_20e328  0x8c20e328
 * area name: sits between ta functions (same compilation unit); behaviour name: returns the result of a comparison
 * called by: kamui_calls_test_20e030
 */
u32 ta_test_20e328(int a0, int a1, int *a2) {
    int iVar1;

    iVar1 = *(int *)(a1 * 4 + a0);
    if ((((g_8c275798 == 1) && (*(int *)(iVar1 + 4) == 0)) &&
         ((*(int *)(iVar1 + 0x20) == 2 || (*(int *)(iVar1 + 0x20) == 3)))) &&
        ((*(int *)(iVar1 + 0x54) == 1 || (*(int *)(iVar1 + 0x54) == 3)))) {
        *a2 = a1 + 1;
        return 7;
    }
    return 0;
}

/*
 * ta_test_20e368  0x8c20e368
 * area name: sits between ta functions (same compilation unit); behaviour name: returns the result of a comparison
 * called by: kamui_calls_test_20e030
 */
u32 ta_test_20e368(int a0, int a1, int *a2) {
    int iVar1;

    iVar1 = *(int *)(a1 * 4 + a0);
    if ((((g_8c275798 == 1) && (*(int *)(iVar1 + 4) == 0)) &&
         ((*(int *)(iVar1 + 0x20) == 2 || (*(int *)(iVar1 + 0x20) == 3)))) &&
        (*(int *)(iVar1 + 0x60) == 0)) {
        *a2 = a1 + 1;
        return 8;
    }
    return 0;
}

/*
 * ta_test_20e3a0  0x8c20e3a0
 * area name: sits between ta functions (same compilation unit); behaviour name: returns the result of a comparison
 * called by: kamui_calls_test_20e030
 */
u32 ta_test_20e3a0(int a0, int a1, int *a2) {
    int iVar1;

    iVar1 = *(int *)(a1 * 4 + a0);
    if (((g_8c275798 == 1) && (*(int *)(iVar1 + 4) == 0)) && (*(int *)(iVar1 + 0xc) == 3)) {
        *a2 = a1 + 1;
        return 9;
    }
    return 0;
}

/*
 * ta_test_20e400  0x8c20e400
 * area name: sits between ta functions (same compilation unit); behaviour name: returns the result of a comparison
 * called by: kamui_calls_test_20e030
 */
u32 ta_test_20e400(int a0, int a1, int *a2) {
    int iVar1;

    iVar1 = *(int *)(a1 * 4 + a0);
    if (((g_8c275798 == 1) && (*(int *)(iVar1 + 4) == 0)) && (*(int *)(iVar1 + 0x20) == 0)) {
        *a2 = a1 + 1;
        return 10;
    }
    return 0;
}

/*
 * ta_test_20e428  0x8c20e428
 * area name: sits between ta functions (same compilation unit); behaviour name: returns the result of a comparison
 * called by: kamui_calls_test_20e030
 */
u32 ta_test_20e428(int a0, int a1, int *a2) {
    if (((g_8c275798 == 2) || (g_8c275798 == 3)) && (*(int *)(*(int *)(a1 * 4 + a0) + 0xbc) == 1)) {
        *a2 = a1 + 1;
        return 0xb;
    }
    return 0;
}

/*
 * ta_calc_20e480  0x8c20e480
 * area name: sits between ta functions (same compilation unit); behaviour name: integer arithmetic on its arguments
 * called by: kamui_calls_test_20e030
 */
u32 ta_calc_20e480(int a0, int a1, int *a2) {
    u32 uVar1;
    int iVar2;
    int iVar3;
    int *piVar4;
    int iVar5;

    piVar4 = (int *)(a1 * 4 + a0);
    iVar2 = piVar4[1];
    iVar3 = *piVar4;
    iVar5 = piVar4[2];
    if ((g_8c275798 == 2) || (g_8c275798 == 3)) {
        if (((*(int *)(iVar3 + 8) == 0) &&
             (((((*(int *)(iVar3 + 0x20) == 2 || (*(int *)(iVar3 + 0x20) == 3)) && (*(int *)(iVar3 + 0x54) == 1)) &&
                ((*(int *)(iVar3 + 0x2c) == 10 && (*(int *)(iVar3 + 0x30) == 0xb)))) &&
               (*(int *)(iVar3 + 0x34) == 0)))) &&
            (*(int *)(iVar3 + 0x38) == 0)) {
            if (iVar2 != 0) {
                if (((*(int *)(iVar2 + 8) != 2) || ((*(int *)(iVar2 + 0x20) != 2 && (*(int *)(iVar2 + 0x20) != 3)))) ||
                    ((*(int *)(iVar2 + 0x54) != 3 ||
                      ((((*(int *)(iVar2 + 0x2c) != 10 || (*(int *)(iVar2 + 0x30) != 10)) ||
                         (*(int *)(iVar2 + 0x34) != 0)) ||
                        (*(int *)(iVar2 + 0x38) != 0))))))
                    goto LAB_8c20e580;
                goto LAB_8c20e514;
            }
        LAB_8c20e5bc:
            *a2 = a1 + 2;
        } else {
        LAB_8c20e514:
            if ((((*(int *)(iVar3 + 8) != 2) || ((*(int *)(iVar3 + 0x20) != 2 && (*(int *)(iVar3 + 0x20) != 3)))) ||
                 (*(int *)(iVar3 + 0x54) != 1)) ||
                (((*(int *)(iVar3 + 0x2c) != 10 || (*(int *)(iVar3 + 0x30) != 0xb)) ||
                  ((*(int *)(iVar3 + 0x34) != 0 || (*(int *)(iVar3 + 0x38) != 1))))))
                goto LAB_8c20e600;
            if (iVar2 == 0)
                goto LAB_8c20e5bc;
            if (((*(int *)(iVar2 + 8) != 2) ||
                 (((*(int *)(iVar2 + 0x20) != 2 && (*(int *)(iVar2 + 0x20) != 3)) || (*(int *)(iVar2 + 0x54) != 3)))) ||
                (((*(int *)(iVar2 + 0x2c) != 10 || (*(int *)(iVar2 + 0x30) != 10)) ||
                  ((*(int *)(iVar2 + 0x34) != 0 || (*(int *)(iVar2 + 0x38) != 1)))))) {
            LAB_8c20e580:
                *a2 = a1 + 2;
                return 0xc;
            }
            if (iVar5 != 0) {
                if (((*(int *)(iVar5 + 8) != 2) || ((*(int *)(iVar5 + 0x20) != 2 && (*(int *)(iVar5 + 0x20) != 3)))) ||
                    ((*(int *)(iVar5 + 0x54) != 3 ||
                      ((*(int *)(iVar5 + 0x34) != 1 || (*(int *)(iVar5 + 0x38) != 0)))))) {
                    *a2 = a1 + 3;
                    return 0xc;
                }
                goto LAB_8c20e600;
            }
            *a2 = a1 + 3;
        }
        uVar1 = 1;
    } else {
    LAB_8c20e600:
        uVar1 = 0;
    }
    return uVar1;
}

/*
 * kamui_test_20e608  0x8c20e608
 * area name: in the kamui library code range; behaviour name: returns the result of a comparison
 * called by: kamui_calls_test_20e030
 */
u32 kamui_test_20e608(int a0, int a1, int *a2) {
    int iVar1;

    iVar1 = *(int *)(a1 * 4 + a0);
    if (((g_8c275798 == 2) || (g_8c275798 == 3)) && (*(int *)(iVar1 + 4) == 2)) {
        if ((((*(int *)(iVar1 + 0x20) != 0) && (*(int *)(iVar1 + 0x20) != 2)) ||
             ((*(int *)(iVar1 + 0x20) == 2 && ((*(int *)(iVar1 + 0xc) != 0 || (*(int *)(iVar1 + 0x10) != 1)))))) ||
            ((*(int *)(iVar1 + 0x20) == 0 && (*(int *)(iVar1 + 0xc) != 0)))) {
            *a2 = a1 + 1;
            return 0xd;
        }
    }
    return 0;
}

/*
 * kamui_test_20e664  0x8c20e664
 * area name: in the kamui library code range; behaviour name: returns the result of a comparison
 * called by: kamui_calls_test_20e030
 */
u32 kamui_test_20e664(int a0, int a1, int *a2) {
    int iVar1;

    iVar1 = *(int *)(a1 * 4 + a0);
    if ((*(int *)(iVar1 + 8) == 0) && ((*(int *)(iVar1 + 0x2c) != 10 || (*(int *)(iVar1 + 0x30) != 0xb)))) {
        *a2 = a1 + 1;
        return 0xe;
    }
    return 0;
}

/*
 * kamui_test_20e6c0  0x8c20e6c0
 * area name: in the kamui library code range; behaviour name: returns the result of a comparison
 * called by: kamui_calls_test_20e030
 */
u32 kamui_test_20e6c0(int a0, int a1, int *a2) {
    int iVar1;

    iVar1 = *(int *)(a1 * 4 + a0);
    if ((((*(int *)(iVar1 + 4) == 1) && (iVar1 = *(int *)(0xa0 + iVar1), iVar1 != 0)) && (iVar1 != 0)) &&
        (((iVar1 != 0 && (iVar1 != 0x20000000)) && (iVar1 != 0x40000000)))) {
        *a2 = a1 + 1;
        return 0xf;
    }
    return 0;
}

/*
 * kamui_calc_20e720  0x8c20e720
 * area name: in the kamui library code range; behaviour name: integer arithmetic on its arguments
 * called by: ta_uses_libgcc_movstr_i4_20df7a
 */
u32 kamui_calc_20e720(int a0) {
    u32 uVar1;

    uVar1 = 1;
    if ((((*(int *)(a0 + 8) == 0) &&
          (((*(int *)(a0 + 0x20) == 2 || (*(int *)(a0 + 0x20) == 3)) && (*(int *)(a0 + 0x54) == 1)))) &&
         (((*(int *)(a0 + 0x2c) == 10 && (*(int *)(a0 + 0x30) == 0xb)) && (*(int *)(a0 + 0x34) == 0)))) &&
        (*(int *)(a0 + 0x38) == 0)) {
        uVar1 = 2;
    }
    if ((((*(int *)(a0 + 8) == 2) && ((*(int *)(a0 + 0x20) == 2 || (*(int *)(a0 + 0x20) == 3)))) &&
         (*(int *)(a0 + 0x54) == 1)) &&
        ((((*(int *)(a0 + 0x2c) == 10 && (*(int *)(a0 + 0x30) == 0xb)) && (*(int *)(a0 + 0x34) == 0)) &&
          (*(int *)(a0 + 0x38) == 1)))) {
        uVar1 = 3;
    }
    return uVar1;
}

/*
 * kamui_update_fields_20e78e  0x8c20e78e
 * area name: in the kamui library code range; behaviour name: conditionally writes members
 * called by: ta_uses_libgcc_movstr_i4_20df7a
 */
int kamui_update_fields_20e78e(int *a0) {
    int iVar1;
    int iVar2;
    int iVar3;
    int iVar4;

    iVar3 = *a0;
    iVar4 = a0[1];
    iVar2 = a0[2];
    if ((((*(int *)(iVar3 + 8) == 0) &&
          (((*(int *)(iVar3 + 0x20) == 2 || (*(int *)(iVar3 + 0x20) == 3)) && (*(int *)(iVar3 + 0x54) == 1)))) &&
         (((*(int *)(iVar3 + 0x2c) == 10 && (*(int *)(iVar3 + 0x30) == 0xb)) && (*(int *)(iVar3 + 0x34) == 0)))) &&
        (*(int *)(iVar3 + 0x38) == 0)) {
        *(u32 *)(iVar4 + 8) = 2;
        *(u32 *)(iVar4 + 0x54) = 3;
        *(u32 *)(iVar4 + 0x2c) = 10;
        *(u32 *)(iVar4 + 0x30) = 10;
        *(u32 *)(iVar4 + 0x34) = 0;
        *(u32 *)(iVar4 + 0x38) = 0;
    }
    iVar1 = *(int *)(iVar3 + 8);
    if ((((iVar1 == 2) && ((*(int *)(iVar3 + 0x20) == 2 || (iVar1 = *(int *)(iVar3 + 0x20), iVar1 == 3)))) &&
         (iVar1 = *(int *)(iVar3 + 0x54), iVar1 == 1)) &&
        ((((iVar1 = *(int *)(iVar3 + 0x2c), iVar1 == 10 && (iVar1 = *(int *)(iVar3 + 0x30), iVar1 == 0xb)) &&
           (*(int *)(iVar3 + 0x34) == 0)) &&
          (iVar1 = *(int *)(iVar3 + 0x38), iVar1 == 1)))) {
        *(u32 *)(iVar4 + 8) = 2;
        iVar1 = 0x54;
        *(u32 *)(iVar4 + 0x54) = 3;
        *(u32 *)(iVar4 + 0x2c) = 10;
        *(u32 *)(iVar4 + 0x30) = 10;
        *(u32 *)(iVar4 + 0x34) = 0;
        *(u32 *)(iVar4 + 0x38) = 1;
        *(u32 *)(iVar2 + 8) = 2;
        *(u32 *)(iVar2 + 0x54) = 3;
        *(u32 *)(iVar2 + 0x2c) = 8;
        *(u32 *)(iVar2 + 0x30) = 6;
        *(u32 *)(iVar2 + 0x34) = 1;
        *(u32 *)(iVar2 + 0x38) = 0;
    }
    return iVar1;
}

/*
 * kamui_test_20e838  0x8c20e838
 * area name: in the kamui library code range; behaviour name: returns the result of a comparison
 * called by: alt_entry_20e8dc, kamui_draw_20e8c6
 */
u32 kamui_test_20e838(int a0, int a1) {
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
    if (a0 != 8) {
        if (a0 == 0x10) {
            return 4;
        }
        if (a0 == 0x20) {
            return 5;
        }
        if (a0 == 0x40) {
            return 6;
        }
        if (a0 == 0x80) {
            return 7;
        }
        if (a0 == 0x100) {
            return 8;
        }
        if (a0 == 0x200) {
            return 9;
        }
        if (a0 == 0x400) {
            return 10;
        }
    }
    return 3;
}

/*
 * kamui_draw_20e8c6  0x8c20e8c6
 * area name: in the kamui library code range; behaviour name: mostly calls draw functions
 * called by: ta_fifo_20dd80
 */
u32 kamui_draw_20e8c6(int a0, u32 a1, int a2, int a3, u32 s0) {
    int iVar1;
    u32 uVar2;
    u32 unaff_r8;
    u32 unaff_r9;
    u32 unaff_r10;
    u32 unaff_r11;
    u32 unaff_r12;
    u32 unaff_r13;
    int *piVar3;
    u32 unaff_r14;
    u32 in_PR;

    iVar1 = kamui_test_20e838(a3, a3);
    if (a2 != 0) {
        ta_fifo_20e9ae(a1, a3, a3, s0, in_PR, unaff_r8, unaff_r9, unaff_r10, unaff_r11, unaff_r12, unaff_r13,
                       unaff_r14);
    }
    ta_fill_loop_20ed60(*(int *)(&g_8c26d63c + iVar1 * 4) + a0, a1, a3, s0);
    piVar3 = (int *)(&g_8c26d63c + (iVar1 + -1) * 4);
    do {
        uVar2 = ta_fifo_20f25a(a1, a3, a3);
        a3 = a3 >> 1;
        if (a2 != 0) {
            uVar2 = ta_fifo_20e9ae(a1, a3, a3, s0, in_PR, unaff_r8, unaff_r9, unaff_r10, unaff_r11, unaff_r12,
                                   unaff_r13, unaff_r14);
        }
        uVar2 = ta_fill_loop_20ed60(*piVar3 + a0, a1, a3, s0);
        piVar3 = piVar3 + -1;
    } while ((u8 *)0x8c26d63b < piVar3);
    return uVar2;
}

/*
 * alt_entry_20e8dc  0x8c20e8dc
 * probably an entry 22 bytes into 8c20e8c6: it reads registers that code sets before it
 */
u32 alt_entry_20e8dc(u32 unused_a0, u32 a1, u32 unused_a2, u32 a3, u32 s0, u32 s4, u32 s8, u32 s12, u32 s16, u32 s20,
                     u32 s24) {
    int iVar1;
    u32 uVar2;
    int unaff_r9;
    int unaff_r10;
    u32 unaff_r12;
    int *piVar3;
    int unaff_r14;

    iVar1 = kamui_test_20e838(a3, a1);
    if (unaff_r10 != 0) {
        ta_fifo_20e9ae(unaff_r12, unaff_r14, unaff_r14, s24);
    }
    ta_fill_loop_20ed60(*(int *)(&g_8c26d63c + iVar1 * 4) + unaff_r9, unaff_r12, unaff_r14, s24);
    piVar3 = (int *)(&g_8c26d63c + (iVar1 + -1) * 4);
    do {
        ta_fifo_20f25a(unaff_r12, unaff_r14, unaff_r14);
        unaff_r14 = unaff_r14 >> 1;
        if (unaff_r10 != 0) {
            ta_fifo_20e9ae(unaff_r12, unaff_r14, unaff_r14, s24);
        }
        uVar2 = ta_fill_loop_20ed60(*piVar3 + unaff_r9, unaff_r12, unaff_r14, s24);
        piVar3 = piVar3 + -1;
    } while ((u8 *)0x8c26d63b < piVar3);
    return uVar2;
}

/*
 * ta_fifo_20e9ae  0x8c20e9ae
 * called by: alt_entry_20e8dc, kamui_draw_20e8c6, ta_fifo_20dd80
 */
u32 ta_fifo_20e9ae(u8 *a0, int a1, u32 a2, int a3, u32 s0, u32 s4, u32 s8, u32 s12, u32 s16, u32 s20, u32 s24,
                   u32 s28) {
    u8 bVar1;
    u8 bVar2;
    int iVar3;
    int iVar4;
    u32 uVar5;
    int iVar6;
    u32 uVar7;
    int *piVar8;
    u32 uVar9;
    u32 uVar10;
    u32 uVar11;
    int iVar12;
    u32 *puVar13;

    iVar3 = (int)(int)0xffffbfa8;
    if (a1 == 1) {
        a2 = 1;
    } else if (a2 != 1) {
        puVar13 = (u32 *)((int)&s28 + iVar3);
        *(u32 **)((int)&s12 + iVar3) = puVar13;
        for (iVar12 = a1; iVar12 != 0; iVar12 = iVar12 + -1) {
            *puVar13 = 0;
            puVar13[1] = 0;
            puVar13[2] = 0;
            puVar13[3] = 0;
            puVar13 = puVar13 + 4;
        }
        puVar13 = (u32 *)(&stack0xffffffe4 + 0x4048 + iVar3);
        *(u32 **)((int)&s0 + iVar3) = puVar13;
        *puVar13 = 0;
        *(u32 **)((int)&s8 + iVar3) = puVar13 + 1;
        puVar13[1] = 0;
        *(u32 **)(&stack0xffffffec + iVar3) = puVar13 + 2;
        puVar13[2] = 0;
        *(u32 **)((int)&s16 + iVar3) = puVar13 + 3;
        puVar13[3] = 0;
        puVar13 = (u32 *)(&stack0xffffffe4 + 0x4038 + iVar3);
        *(u32 **)(&stack0xfffffff4 + iVar3) = puVar13;
        *puVar13 = 0;
        *(u32 **)(&stack0xfffffff8 + iVar3) = puVar13 + 1;
        puVar13[1] = 0;
        *(u32 **)(&stack0xfffffffc + iVar3) = puVar13 + 2;
        puVar13[2] = 0;
        *(u32 **)((int)&s4 + iVar3) = puVar13 + 3;
        puVar13[3] = 0;
        *(u32 *)(&stack0xffffffe8 + iVar3) = a2;
        while (*(int *)(&stack0xffffffe8 + iVar3) != 0) {
            piVar8 = *(int **)((int)&s12 + iVar3);
            *(int *)(&stack0xfffffff0 + iVar3) = a1;
            while (*(int *)(&stack0xfffffff0 + iVar3) != 0) {
                bVar1 = a0[3];
                iVar6 = *piVar8;
                bVar2 = a0[2];
                iVar12 = **(int **)((int)&s0 + iVar3);
                *(int **)((int)&s20 + iVar3) = piVar8 + 1;
                iVar4 = piVar8[1];
                uVar7 = iVar6 + (u32)bVar1 + iVar12;
                bVar1 = a0[1];
                iVar12 = **(int **)((int)&s8 + iVar3);
                *(int **)((int)&s24 + iVar3) = piVar8 + 2;
                uVar5 = iVar4 + (u32)bVar2 + iVar12;
                uVar11 = piVar8[2] + (u32)bVar1 + **(int **)(&stack0xffffffec + iVar3);
                uVar9 = (u32)*a0;
                if ((int)uVar7 < 0) {
                    uVar7 = 0;
                } else if ((int)0xff < (int)uVar7) {
                    uVar7 = (int)0xff;
                }
                if ((int)uVar5 < 0) {
                    uVar5 = 0;
                } else if ((int)0xff < (int)uVar5) {
                    uVar5 = (int)0xff;
                }
                if ((int)uVar11 < 0) {
                    uVar11 = 0;
                } else if ((int)0xff < (int)uVar11) {
                    uVar11 = (int)0xff;
                }
                if ((int)uVar9 < 0) {
                    uVar9 = 0;
                } else if ((int)0xff < (int)uVar9) {
                    uVar9 = (int)0xff;
                }
                a0[3] = (u8)uVar7;
                iVar12 = 0x8000000;
                a0[2] = (u8)uVar5;
                uVar10 = (u32)0xf8;
                a0[1] = (u8)uVar11;
                *a0 = (u8)uVar9;
                if (a3 == iVar12) {
                    a2 = (int)0xfc & uVar5 | 2;
                    uVar5 = uVar5 - a2;
                    uVar11 = uVar11 - (uVar10 & uVar11 | 4);
                    uVar9 = 0;
                    uVar7 = uVar7 - (uVar7 & uVar10 | 4);
                } else if (a3 == 0x10000000) {
                    uVar10 = (u32)0xf0;
                    uVar5 = uVar5 - ((int)uVar5 >> 4 & 8U | uVar5 & uVar10 | 4);
                    uVar11 = uVar11 - ((int)uVar11 >> 4 & 8U | uVar11 & uVar10 | 4);
                    a2 = (int)uVar9 >> 4 & 8U | uVar10 & uVar9 | 4;
                    uVar9 = uVar9 - a2;
                    *(u32 *)(&stack0xffffffe4 + iVar3) = uVar9;
                    uVar7 = uVar7 - ((int)uVar7 >> 4 & 8U | uVar7 & uVar10 | 4);
                } else {
                    a2 = uVar11;
                    if (a3 == 0) {
                        uVar5 = uVar5 - (uVar5 & uVar10 | 4);
                        a2 = uVar7 - (uVar7 & uVar10 | 4);
                        uVar11 = uVar11 - (uVar10 & uVar11 | 4);
                        *(u32 *)(&stack0xffffffe4 + iVar3) = uVar11;
                        uVar7 = a2;
                    }
                }
                iVar12 = (int)(uVar7 * 3 + 4) >> 3;
                **(int **)((int)&s0 + iVar3) = iVar12;
                *piVar8 = **(int **)(&stack0xfffffff4 + iVar3) + iVar12;
                **(int **)(&stack0xfffffff4 + iVar3) = uVar7 + iVar12 * -2;
                iVar12 = (int)(uVar5 * 3 + 4) >> 3;
                **(int **)((int)&s8 + iVar3) = iVar12;
                **(int **)((int)&s20 + iVar3) = **(int **)(&stack0xfffffff8 + iVar3) + iVar12;
                **(int **)(&stack0xfffffff8 + iVar3) = uVar5 + iVar12 * -2;
                iVar12 = (int)(uVar11 * 3 + 4) >> 3;
                **(int **)(&stack0xffffffec + iVar3) = iVar12;
                **(int **)((int)&s24 + iVar3) = **(int **)(&stack0xfffffffc + iVar3) + iVar12;
                **(int **)(&stack0xfffffffc + iVar3) = uVar11 + iVar12 * -2;
                **(int **)((int)&s16 + iVar3) = iVar12;
                piVar8[3] = **(int **)((int)&s4 + iVar3) + iVar12;
                **(int **)((int)&s4 + iVar3) = uVar9 + iVar12 * -2;
                a0 = a0 + 4;
                piVar8 = piVar8 + 4;
                *(int *)(&stack0xfffffff0 + iVar3) = *(int *)(&stack0xfffffff0 + iVar3) + -1;
            }
            *(int *)(&stack0xffffffe8 + iVar3) = *(int *)(&stack0xffffffe8 + iVar3) + -1;
        }
    }
    return a2;
}

/*
 * ta_fill_loop_20ed60  0x8c20ed60
 * name hint from a string it uses: UUUU t; area name: sits between ta functions (same compilation unit); behaviour
 * name: a loop that writes memory called by: alt_entry_20e8dc, kamui_draw_20e8c6, ta_fifo_20dd80 strings: "UUUU\t";
 * "UUUU\t"; "UUUU\t"; "UUUU\t" ...
 */
int ta_fill_loop_20ed60(int a0, u8 *a1, int a2, int a3) {
    u8 bVar1;
    u32 uVar2;
    int in_r0;
    u8 *pbVar3;
    int iVar4;
    u32 uVar5;
    int iVar6;
    u32 uVar7;
    u32 uVar8;
    u32 uVar9;
    u32 unaff_r14;
    u32 uVar10;

    uVar8 = (u32)0xf0;
    uVar5 = 0;
    uVar9 = uVar8 + 8;
    iVar4 = a2;
    uVar2 = 0xaaaaaaaa;
    do {
        if (iVar4 == 0) {
            0xaaaaaaaa = uVar2;
            uVar2 = (u32) "UUUU\t"._0_4_ >> 0x10;
            uVar5 = (u32) "UUUU\t"._0_4_ >> 0x18;
            "UUUU\t"[0] = (char)"UUUU\t"._0_4_;
            "UUUU\t"[1] = (char)((u32) "UUUU\t"._0_4_ >> 8);
            "UUUU\t"[2] = (char)uVar2;
            "UUUU\t"[3] = (char)uVar5;
            return in_r0;
        }
        uVar7 = 0;
        pbVar3 = a1;
        for (iVar6 = a2; iVar6 != 0; iVar6 = iVar6 + -1) {
            if (a3 == 0x8000000) {
                uVar10 = (pbVar3[3] & uVar9) << 8 | (pbVar3[2] & 0xfc) << 3;
                bVar1 = pbVar3[1] >> 3;
            LAB_8c20ede2:
                unaff_r14 = uVar10 | bVar1;
            } else {
                if (a3 == 0x10000000) {
                    uVar10 = (*pbVar3 & uVar8) << 8 | (pbVar3[3] & uVar8) << 4 | pbVar3[2] & uVar8;
                    bVar1 = pbVar3[1] >> 4;
                    goto LAB_8c20ede2;
                }
                if (a3 == 0) {
                    unaff_r14 = ((int)0x80 & (u32)*pbVar3) << 8 | (pbVar3[3] & uVar9) << 7 | (pbVar3[2] & uVar9) << 2 |
                                (u32)(pbVar3[1] >> 3);
                }
            }
            uVar10 = 0x55555556 + uVar7;
            in_r0 = (uVar7 | uVar5) * 2;
            0xaaaaaaaa = uVar2;
            *(short *)(in_r0 + a0) = (short)unaff_r14;
            pbVar3 = pbVar3 + 4;
            uVar7 = uVar2 & uVar10;
            uVar2 = 0xaaaaaaaa;
        }
        iVar4 = iVar4 + -1;
        a1 = a1 + a2 * 4;
        uVar5 = "UUUU\t"._0_4_ & 0xaaaaaaab + uVar5;
    } while (true);
}

/*
 * ta_fill_loop_20eec0  0x8c20eec0
 * area name: sits between ta functions (same compilation unit); behaviour name: a loop that writes memory
 * called by: ta_fifo_20f25a
 */
int ta_fill_loop_20eec0(u8 *a0, u8 *a1, u8 *a2, u8 *a3, u8 *s0, int s4) {
    int iVar1;
    int iVar2;
    int iVar3;
    int iVar4;
    int iVar5;
    int iVar6;
    int iVar7;
    int iVar8;
    int iVar9;
    int iVar10;
    int iVar11;
    int iVar12;
    int iVar13;
    int iVar14;
    int iVar15;
    int iVar16;
    u8 *pbVar17;
    u8 *pbVar18;
    int iVar19;
    u8 *pbVar20;
    u8 *pbVar21;

    iVar19 = (s4 * 2 + -1) * 4;
    pbVar18 = a0 + iVar19;
    pbVar17 = a1 + iVar19;
    pbVar20 = a2 + iVar19;
    pbVar21 = a3 + iVar19;
    iVar10 = (u32)pbVar18[3] + (u32)pbVar17[3] * 2 + (u32)pbVar20[3] * 2 + (u32)pbVar21[3];
    iVar11 = (u32)pbVar18[2] + (u32)pbVar17[2] * 2 + (u32)pbVar20[2] * 2 + (u32)pbVar21[2];
    iVar12 = (u32)pbVar18[1] + (u32)pbVar17[1] * 2 + (u32)pbVar20[1] * 2 + (u32)pbVar21[1];
    iVar1 = (u32)*pbVar18 + (u32)*pbVar17 * 2 + (u32)*pbVar20 * 2 + (u32)*pbVar21;
    iVar13 = (u32)a0[3] + (u32)a1[3] * 2 + (u32)a2[3] * 2 + (u32)a3[3];
    iVar14 = (u32)a0[2] + (u32)a1[2] * 2 + (u32)a2[2] * 2 + (u32)a3[2];
    iVar15 = (u32)a0[1] + (u32)a1[1] * 2 + (u32)a2[1] * 2 + (u32)a3[1];
    iVar2 = (u32)*a0 + (u32)*a1 * 2 + (u32)*a2 * 2 + (u32)*a3;
    iVar19 = iVar10;
    iVar5 = iVar11;
    iVar7 = iVar12;
    iVar9 = iVar1;
    iVar4 = iVar13;
    iVar6 = iVar14;
    iVar8 = iVar15;
    iVar16 = iVar2;
    while (s4 = s4 + -1, s4 != 0) {
        iVar3 = iVar4 * 2 + iVar19;
        iVar19 = (u32)a0[7] + (u32)a1[7] * 2 + (u32)a2[7] * 2 + (u32)a3[7];
        pbVar17 = a2 + 8;
        pbVar18 = a3 + 8;
        iVar4 = (u32)a0[0xb] + (u32)a1[0xb] * 2 + (u32)a2[0xb] * 2 + (u32)a3[0xb];
        s0[3] = (char)((iVar3 + iVar19 * 2 + iVar4) * 0x39 >> 0xb);
        iVar3 = iVar6 * 2 + iVar5;
        iVar5 = (u32)a0[6] + (u32)a1[6] * 2 + (u32)a2[6] * 2 + (u32)a3[6];
        iVar6 = (u32)a0[10] + (u32)a1[10] * 2 + (u32)a2[10] * 2 + (u32)a3[10];
        s0[2] = (char)((iVar3 + iVar5 * 2 + iVar6) * 0x39 >> 0xb);
        iVar3 = iVar8 * 2 + iVar7;
        iVar7 = (u32)a0[5] + (u32)a1[5] * 2 + (u32)a2[5] * 2 + (u32)a3[5];
        iVar8 = (u32)a0[9] + (u32)a1[9] * 2 + (u32)a2[9] * 2 + (u32)a3[9];
        s0[1] = (char)((iVar3 + iVar7 * 2 + iVar8) * 0x39 >> 0xb);
        iVar3 = iVar16 * 2 + iVar9;
        iVar9 = (u32)a0[4] + (u32)a1[4] * 2 + (u32)a2[4] * 2 + (u32)a3[4];
        a3 = a3 + 8;
        a2 = a2 + 8;
        iVar16 = (u32)a0[8] + (u32)a1[8] * 2 + (u32)*pbVar17 * 2 + (u32)*pbVar18;
        a1 = a1 + 8;
        a0 = a0 + 8;
        *s0 = (char)((iVar3 + iVar9 * 2 + iVar16) * 0x39 >> 0xb);
        s0 = s0 + 4;
    }
    s0[3] = (char)((iVar4 * 2 + iVar19 + iVar10 * 2 + iVar13) * 0x39 >> 0xb);
    s0[2] = (char)((iVar6 * 2 + iVar5 + iVar11 * 2 + iVar14) * 0x39 >> 0xb);
    iVar19 = (iVar8 * 2 + iVar7 + iVar12 * 2 + iVar15) * 0x39 >> 0xb;
    s0[1] = (char)iVar19;
    *s0 = (char)((iVar16 * 2 + iVar9 + iVar1 * 2 + iVar2) * 0x39 >> 0xb);
    return iVar19;
}

/*
 * ta_fifo_20f25a  0x8c20f25a
 * called by: alt_entry_20e8dc, kamui_draw_20e8c6
 */
u32 ta_fifo_20f25a(u8 *a0, int a1, int a2) {
    u8 *puVar1;
    int iVar2;
    u32 uVar3;
    int iVar4;
    u8 *puVar5;
    int iVar6;
    int iVar7;
    int iVar8;
    u8 *puVar9;
    int aiStack_28[3];

    iVar2 = (int)(int)0xffffeff4;
    iVar6 = (int)(a1 + (u32)(a1 < 0)) >> 1;
    *(int *)((int)aiStack_28 + iVar2 + 8) = (int)(a2 + (u32)(a2 < 0)) >> 1;
    puVar9 = &stack0xffffffec + iVar2;
    puVar5 = a0;
    for (iVar4 = a1; iVar4 != 0; iVar4 = iVar4 + -1) {
        *puVar9 = *puVar5;
        puVar9[1] = puVar5[1];
        puVar9[2] = puVar5[2];
        puVar1 = puVar5 + 3;
        puVar5 = puVar5 + 4;
        puVar9[3] = *puVar1;
        puVar9 = puVar9 + 4;
    }
    iVar4 = *(int *)((int)aiStack_28 + iVar2 + 8);
    *(int *)(&stack0xffffffe4 + iVar2) = a1 << 2;
    *(int *)((int)aiStack_28 + iVar2 + 8) = a1 << 3;
    *(int *)(&stack0xffffffe8 + iVar2) = iVar6 << 2;
    puVar9 = a0 + (a2 + -1) * a1 * 2;
    puVar5 = a0;
    while (iVar4 = iVar4 + -1, iVar4 != 0) {
        iVar7 = *(int *)((int)aiStack_28 + iVar2 + 8);
        iVar8 = *(int *)(&stack0xffffffe4 + iVar2);
        *(int *)((int)aiStack_28 + iVar2 + 4) = iVar6;
        *(u8 **)((int)aiStack_28 + iVar2) = a0;
        ta_fill_loop_20eec0(puVar9, puVar5, puVar5 + iVar8, puVar5 + iVar7);
        a0 = a0 + *(int *)(&stack0xffffffe8 + iVar2);
        puVar9 = puVar5 + iVar8;
        puVar5 = puVar5 + iVar7;
    }
    iVar4 = *(int *)(&stack0xffffffe4 + iVar2);
    *(int *)((int)aiStack_28 + iVar2 + 4) = iVar6;
    *(u8 **)((int)aiStack_28 + iVar2) = a0;
    uVar3 = ta_fill_loop_20eec0(puVar9, puVar5, puVar5 + iVar4, &stack0xffffffec + iVar2);
    return uVar3;
}

/*
 * tex_size_code  0x8c20f340
 * texture side 8..1024 to the PVR size code 0..7
 * called by: ta_fifo_20f640
 */
int tex_size_code(int a0, u32 a1, u32 a2, u32 a3) {
    if (a0 == 8) {
        a0 = 0;
    } else if (a0 == 0x10) {
        a0 = 1;
    } else if (a0 == 0x20) {
        a0 = 2;
    } else if (a0 == 0x40) {
        a0 = 3;
    } else if (a0 == 0x80) {
        a0 = 4;
    } else if (a0 == 0x100) {
        a0 = 5;
    } else if (a0 == 0x200) {
        a0 = 6;
    } else if (a0 == 0x400) {
        a0 = 7;
    }
    return a0;
}

/*
 * ta_fifo_20f640  0x8c20f640
 * called by: alt_entry_235eba, alt_entry_235eea, alt_entry_235f1a, alt_entry_25927e, alt_entry_259362,
 * alt_entry_2593b4, alt_entry_259560, alt_entry_2599ca (+19 more)
 */
u32 ta_fifo_20f640(u32 *a0, u32 a1, u32 a2, u32 a3) {
    int iVar1;
    u32 uVar2;
    u32 uVar3;
    u32 a5;
    u32 a6;
    u32 uVar4;
    u32 a7;
    u32 uVar5;
    u32 uVar6;
    u32 uVar7;
    u32 uVar8;
    u32 uVar9;
    u32 uStack_3c;
    int aiStack_30[5];

    uVar7 = a0[0x25];
    uVar9 = a0[0x26];
    uStack_3c = a0[0x27];
    uVar6 = a0[0x24];
    aiStack_30[0] = g_8c26d698;
    aiStack_30[1] = g_8c26d69c;
    aiStack_30[2] = g_8c26d6a0;
    aiStack_30[3] = g_8c26d6a4;
    uVar8 = *a0;
    if ((uVar8 & 1) != 0) {
        uVar7 = uVar7 & 0x1fffffff | a0[5] << 0x1d;
    }
    if ((uVar8 & 2) != 0) {
        uVar7 = uVar7 & 0xe7ffffff | a0[6] << 0x1b;
    }
    a7 = 0x4000000;
    if ((uVar8 & 0x20) != 0) {
        if (a0[10] == 0) {
            uVar7 = uVar7 & 0xfbffffff;
        } else {
            uVar7 = uVar7 | 0x4000000;
        }
    }
    uVar5 = uVar8 & 8;
    if (uVar5 != 0) {
        uVar7 = uVar7 & 0xfdffffff | (a0[8] >> 1) << 0x19;
    }
    if ((uVar8 & 0x200) != 0) {
        uVar7 = uVar7 & 0xfeffffff | a0[0x10] << 0x18;
    }
    if (uVar5 != 0) {
        uVar7 = uVar7 & 0xff7fffff | (a0[8] & 1) << 0x17;
    }
    if ((uVar8 & 0x800000) != 0) {
        uVar7 = uVar7 & 0xffbfffff | a0[4] << 0x16;
    }
    if ((uVar8 & 0x4000000) != 0) {
        if (a0[0x2d] == 0) {
            uVar7 = uVar7 & 0xffefffff;
        } else {
            uVar7 = uVar7 | 0x100000;
        }
    }
    uVar2 = uVar9 & 0x1fffffff;
    if ((uVar8 & 0x40) == 0)
        goto LAB_8c20f862;
    switch (a0[0xb]) {
    case 0:
        uVar9 = 0x10000000;
        uVar2 = uVar2 | 0xa0000000;
        goto code_r0x8c20f7da;
    case 1:
        uVar9 = 0x14000000;
        uVar2 = uVar2 | 0x80000000;
    code_r0x8c20f7da:
        uVar9 = uVar2 & 0xe3ffffff | uVar9;
        goto LAB_8c20f862;
    case 2:
        uVar9 = 0xc0000000;
        break;
    case 3:
        uVar9 = 0x40000000;
        break;
    case 4:
        uVar9 = 0xe0000000;
        break;
    case 5:
        uVar9 = 0x60000000;
        break;
    case 6:
        uVar9 = 0xa0000000;
        break;
    default:
        goto LAB_8c20f862;
    case 8:
        uVar9 = 0x80000000;
        break;
    case 10:
        uVar9 = 0x20000000;
        break;
    case 0xb:
        uVar9 = uVar2;
        goto LAB_8c20f862;
    }
    uVar9 = uVar9 | uVar2;
LAB_8c20f862:
    if ((uVar8 & 0x80) == 0)
        goto LAB_8c20f8ea;
    uVar2 = uVar9 & 0xe3ffffff;
    switch (a0[0xc]) {
    case 0:
        uVar2 = 0x10000000;
        uVar9 = uVar9 & 0x1fffffff | 0xa0000000;
        goto code_r0x8c20f8ba;
    case 1:
        uVar2 = 0x14000000;
        uVar9 = uVar9 & 0x1fffffff | 0x80000000;
    code_r0x8c20f8ba:
        uVar9 = uVar9 & 0xe3ffffff | uVar2;
        goto LAB_8c20f8ea;
    case 2:
        uVar9 = 0x18000000;
        break;
    default:
        goto LAB_8c20f8ea;
    case 4:
        uVar9 = 0x1c000000;
        break;
    case 6:
        uVar9 = 0x14000000;
        break;
    case 7:
        uVar9 = 0xc000000;
        break;
    case 8:
        uVar9 = 0x10000000;
        break;
    case 9:
        uVar9 = 0x8000000;
        break;
    case 10:
        uVar9 = uVar2 | 0x4000000;
        goto LAB_8c20f8ea;
    case 0xb:
        uVar9 = uVar2;
        goto LAB_8c20f8ea;
    }
    uVar9 = uVar9 | uVar2;
LAB_8c20f8ea:
    if ((uVar8 & 0x1000000) != 0) {
        if (a0[0xd] == 0) {
            uVar9 = uVar9 & 0xfdffffff;
        } else {
            uVar9 = uVar9 | 0x2000000;
        }
    }
    if ((uVar8 & 0x2000000) != 0) {
        if (a0[0xe] == 0) {
            uVar9 = uVar9 & 0xfeffffff;
        } else {
            uVar9 = uVar9 | 0x1000000;
        }
    }
    a5 = 3;
    if ((uVar8 & 0x100) != 0) {
        uVar9 = uVar9 & 0xff3fffff | (a0[0xf] & 3) << 0x16;
    }
    if ((uVar8 & 0x40000) != 0) {
        if (a0[0x19] == 0) {
            uVar9 = uVar9 & 0xffdfffff;
        } else {
            uVar9 = uVar9 | 0x200000;
        }
    }
    if ((uVar8 & 0x400) != 0) {
        if (a0[0x11] == 0) {
            uVar9 = uVar9 & 0xffefffff;
        } else {
            uVar9 = uVar9 | 0x100000;
        }
    }
    if ((uVar8 & 0x800) != 0) {
        if (a0[0x12] == 0) {
            uVar9 = uVar9 & 0xfff7ffff;
        } else {
            uVar9 = uVar9 | 0x80000;
        }
    }
    a6 = 0x1000;
    if ((uVar8 & 0x1000) != 0) {
        uVar9 = uVar9 & 0xfffe7fff | a0[0x13] << 0xf;
    }
    if ((uVar8 & 0x2000) != 0) {
        uVar9 = uVar9 & 0xfff9ffff | a0[0x14] << 0x11;
    }
    if ((uVar8 & 0x4000) != 0) {
        uVar9 = uVar9 & 0xffff9fff | aiStack_30[a0[0x15]] << 0xd;
    }
    if ((uVar8 & 0x8000) != 0) {
        if (a0[0x16] == 0) {
            uVar9 = uVar9 & 0xffffefff;
        } else {
            uVar9 = uVar9 | 0x1000;
        }
    }
    if ((uVar8 & 0x10000) != 0) {
        uVar2 = a0[0x17] & 0xf;
        if (uVar2 == 0) {
            uVar2 = 4;
        }
        uVar9 = uVar9 & 0xfffff0ff | uVar2 << 8;
    }
    if ((uVar8 & 0x20000) != 0) {
        uVar9 = uVar9 & 0xffffff3f | (a0[0x18] & 3) << 6;
    }
    if (((int)a0[8] >> 1 == 1) && (a0[0x1b] != 0)) {
        iVar1 = tex_size_code(*(u32 *)(a0[0x1b] + 0xc), 3, 0x1000, 0x4000000);
        uVar2 = tex_size_code(*(u32 *)(a0[0x1b] + 0x10), a5, a6, a7);
        uVar9 = uVar9 & 0xffffffc0 | iVar1 << 3 | uVar2;
    }
    if (((int)a0[8] >> 1 == 1) && (a0[0x1b] != 0)) {
        uVar3 = *(u32 *)(a0[0x1b] + 0x18);
        uVar2 = (u32)((uVar3 & 1) != 0) << 0x1f;
        uVar4 = (uVar3 & 8) << 0x1b;
        uVar3 = *(u32 *)(a0[0x1b] + 8) & 0x38000000;
        if ((uVar3 == 0x28000000) || (uVar3 == 0x30000000)) {
            uVar2 = uVar2 | uVar4 | uVar3 | (a0[0x1a] & 0x3f) << 0x15;
        } else {
            uVar2 = uStack_3c & 0x1ffffff | uVar2 | uVar4 | uVar3 | (~(*(u32 *)(a0[0x1b] + 0x18) & 4) & 4) << 0x18 |
                    (*(u32 *)(a0[0x1b] + 0x18) & 0x10) << 0x15;
        }
        uStack_3c = uVar2 & 0xffe00000 | *(u32 *)(a0[0x1b] + 0x1c) >> 3;
    }
    if ((uVar8 & 0x100000) != 0) {
        uVar2 = a0[1];
        if (uVar2 == 0) {
            uVar6 = uVar6 & 0x1fffffff | 0x80000000;
        }
        if (uVar2 == 1) {
            uVar6 = uVar6 & 0x1fffffff | 0x80000000;
        }
        if (uVar2 == 2) {
            uVar6 = uVar6 & 0x1fffffff | 0xa0000000;
        }
    }
    if ((uVar8 & 0x200000) != 0) {
        uVar6 = uVar6 & 0xf8ffffff | a0[2] << 0x18;
    }
    uVar2 = g_8c4a9d88;
    if ((uVar8 & 0x8000000) != 0) {
        uVar2 = a0[0x2e];
    }
    uVar3 = uVar2 << 0x12 | uVar6 & 0xfff3ffff | 0x800000;
    if ((uVar8 & 0x10000000) != 0) {
        uVar3 = uVar2 << 0x12 | uVar6 & 0xfff0ffff | 0x800000 | a0[0x2f] << 0x10;
    }
    uVar3 = uVar3 & 0xffffff3f;
    if (((a0[0x28] & 0x60000000) != 0) && ((a0[2] & 1) != 0)) {
        uVar3 = uVar3 | 0x40;
    }
    if (((uVar8 & 0x10) != 0) && ((a0[9] & 1) != 0)) {
        uVar3 = uVar3 & 0xffffffbf | a0[9] << 7 | g_8c2757a0 << 6;
    }
    if ((uVar8 & 0x400000) != 0) {
        uVar3 = uVar3 & 0xffffffcf | a0[3] << 4;
    }
    uVar6 = uVar3;
    if (uVar5 != 0) {
        uVar2 = (a0[8] >> 1) << 3;
        uVar6 = uVar3 & 0xfffffff7 | uVar2;
        if (uVar5 != 0) {
            uVar6 = uVar3 & 0xfffffff5 | uVar2 | (a0[8] & 1) << 1;
        }
    }
    if ((uVar8 & 0x200) != 0) {
        if (a0[0x10] == 0) {
            uVar6 = uVar6 & 0xfffffffb;
        } else {
            uVar6 = uVar6 | 4;
        }
    }
    if ((uVar8 & 0x800000) != 0) {
        uVar6 = a0[4] | uVar6 & 0xfffffffe;
    }
    a0[0x25] = uVar7 & 0xffd00000;
    a0[0x26] = uVar9;
    a0[0x27] = uStack_3c;
    a0[0x24] = uVar6 & 0xe78f00ff;
    return 0;
}

/*
 * ta_load_texture_params  0x8c20fe00
 * copies a texture/material block (+0x70..+0xa0) into the TA polygon globals
 * called by: alt_entry_235eba, alt_entry_235eea, alt_entry_235f1a, alt_entry_25927e, alt_entry_259362,
 * alt_entry_2593b4, alt_entry_259560, alt_entry_2599ca (+22 more)
 */
u32 ta_load_texture_params(int a0) {
    u32 *puVar1;
    u32 *puVar2;

    g_8c2757a8 = *(u32 *)(a0 + 0x90);
    g_8c2757ac = *(u32 *)(a0 + 0x94);
    g_8c4aa13c = *(u32 *)(a0 + 0x98);
    if ((g_8c2757a8 >> 0x18 & 7) == 0) {
        g_8c4aa13c = g_8c4aa13c & 0x3ffffff | 0x20000000;
    }
    g_8c4aa140 = *(u32 *)(a0 + 0x9c);
    g_8c4aa148 = *(float *)(a0 + 0x70);
    g_8c4aa14c = *(float *)(a0 + 0x74);
    g_8c4aa150 = *(float *)(a0 + 0x78);
    g_8c4aa154 = *(float *)(a0 + 0x7c);
    g_8c4aa158 = *(float *)(a0 + 0x80);
    g_8c4aa15c = *(float *)(a0 + 0x84);
    g_8c4aa160 = *(float *)(a0 + 0x88);
    g_8c4aa164 = *(float *)(a0 + 0x8c);
    g_8c4aa168 = *(u32 *)(a0 + 0xa0);
    g_8c4aa198 = *(int *)(&g_8c2757e8 + ((g_8c2757a8 & 0x20000000) >> 0x18 | (g_8c2757a8 & 0x1000000) >> 0x14 |
                                         (g_8c2757a8 & 0x40) >> 3 | (g_8c2757a8 & 0x20) >> 3 |
                                         (g_8c2757a8 & 0x10) >> 3 | (g_8c2757a8 & 4) >> 2) *
                                            4);
    g_8c4aa27c = (g_8c2757a8 & 0x7000000) >> 0x18;
    g_8c4aa128 = g_8c2757a8;
    g_8c4aa138 = g_8c2757ac;
    if ((g_8c4aa27c & 1) != 0) {
        puVar2 = &g_8c2757c8;
        g_8c2757ac = g_8c4aa168;
        goto LAB_8c2100aa;
    }
    g_8c2757b0 = g_8c4aa13c;
    puVar2 = &g_8c2757b8;
    g_8c2757b4 = g_8c4aa140;
    if (g_8c4aa198 == 0) {
        puVar2 = &g_8c2757c8;
        goto LAB_8c2100aa;
    }
    if (g_8c4aa198 == 1) {
        puVar2 = &g_8c2757c0;
        puVar1 = (u32 *)&g_8c4aa154;
        g_8c2757b8 = g_8c4aa148;
        g_8c2757bc = g_8c4aa14c;
        g_8c2757c0 = g_8c4aa150;
    LAB_8c20ffb2:
        puVar2 = puVar2 + 1;
        *puVar2 = *puVar1;
    } else {
        if (g_8c4aa198 == 2) {
            puVar2 = &g_8c2757e0;
            puVar1 = (u32 *)&g_8c4aa164;
            g_8c2757c8 = g_8c4aa148;
            g_8c2757cc = g_8c4aa14c;
            g_8c2757d0 = g_8c4aa150;
            g_8c2757d4 = g_8c4aa154;
            g_8c2757d8 = g_8c4aa158;
            g_8c2757dc = g_8c4aa15c;
            g_8c2757e0 = g_8c4aa160;
            goto LAB_8c20ffb2;
        }
        if (g_8c4aa198 == 3) {
            g_8c2757b8 = g_8c4aa16c;
            g_8c2757bc = g_8c4aa170;
            puVar2 = &g_8c2757c8;
            goto LAB_8c2100aa;
        }
        if (g_8c4aa198 != 4) {
            if (g_8c4aa198 == 0x10) {
                g_8c2757b8 = (float)((int)(g_8c4aa148 * 255.0) << 0x18 | (int)(g_8c4aa14c * 255.0) << 0x10 |
                                     (int)(g_8c4aa150 * 255.0) << 8 | (int)(g_8c4aa154 * 255.0));
                g_8c2757bc = (float)((int)(g_8c4aa158 * 255.0) << 0x18 | (int)(g_8c4aa15c * 255.0) << 0x10 |
                                     (int)(g_8c4aa160 * 255.0) << 8 | (int)(g_8c4aa164 * 255.0));
                puVar2 = &g_8c2757c8;
            }
            goto LAB_8c2100aa;
        }
        g_8c2757b8 = g_8c4aa16c;
        g_8c2757bc = g_8c4aa170;
        g_8c2757d8 = g_8c4aa178;
        g_8c2757dc = g_8c4aa17c;
        g_8c2757e0 = g_8c4aa180;
        puVar2 = &g_8c2757e4;
        g_8c2757e4 = g_8c4aa184;
        g_8c2757c8 = g_8c4aa148;
        g_8c2757cc = g_8c4aa14c;
        g_8c2757d0 = g_8c4aa150;
        g_8c2757d4 = g_8c4aa154;
    }
    puVar2 = puVar2 + 1;
LAB_8c2100aa:
    g_8c4aa208 = g_8c4aa27c;
    g_8c4aa20c = puVar2 + 0x1cf62a16;
    return 0;
}
