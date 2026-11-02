#include "../decls.h"
uint FUN_8c101e1c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  bool bVar1;
  bool bVar2;
  undefined4 uVar3;
  int iVar4;
  int ar6_00;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint auStack_cc [4];
  int iStack_bc;
  int iStack_b8;
  undefined4 uStack_b4;
  int iStack_b0;
  int iStack_ac;
  undefined4 uStack_a8;
  int iStack_a4;
  int iStack_a0;
  undefined4 uStack_9c;
  int iStack_98;
  int iStack_94;
  int iStack_90;
  undefined4 uStack_8c;
  int iStack_88;
  int iStack_84;
  undefined4 uStack_80;
  int iStack_7c;
  int iStack_78;
  int iStack_74;
  undefined4 uStack_70;
  int iStack_6c;
  int iStack_68;
  int iStack_64;
  int iStack_60;
  int iStack_5c;
  undefined4 uStack_58;
  int iStack_54;
  int iStack_50;
  
  uVar3 = sh4_tmu_1f88e6(ar4,(&sh4_tmu_1f88e6),ar6,ar7);
  *(undefined4 *)((int)auStack_cc + 0x9c) = uVar3;
  ar6_00 = *(int *)((int)auStack_cc + 0x9c);
  *(undefined4 *)((int)auStack_cc + 0xa8) = 0;
  bVar1 = false;
  bVar2 = false;
  *(undefined4 *)((int)auStack_cc + 0xa4) = 0;
  if (0x10 < *(uint *)(0xc4 + ar4)) {
    *(undefined4 *)((int)auStack_cc + 0x80) = *(undefined4 *)(ar4 + 100);
    iVar7 = *(undefined4 *)0x8c4413c0;
    iVar5 = *(int *)((&DATA_8c12682c) + *(int *)((int)auStack_cc + 0x80) * 4);
    uVar3 = FUN_8c101de0(ar4,*(undefined4 *)(ar4 + 0x60),ar6_00,ar7);
    *(undefined4 *)((int)auStack_cc + 0x98) = uVar3;
    if ((*(int *)(ar4 + 0x6c) == 0) ||
       ((uint)(iVar7 * iVar5) <= *(uint *)((int)auStack_cc + 0x98))) {
      iStack_50 = *(int *)(ar4 + 100);
      (*(code *)(&FUN_8c0219b8))
                (0x8c2b59d0,*(undefined4 *)(ar4 + 0x68),
                 *(undefined4 *)((&DATA_8c126764) + iStack_50 * 4),ar7);
      if (*(int *)(ar4 + 100) == 0) {
        *(undefined4 *)((int)auStack_cc + 0xa4) = 1;
      }
      iVar5 = *(int *)(ar4 + 100);
      if ((iVar5 == 0) || (*(int *)(ar4 + 100) == 0x1a)) {
        bVar1 = true;
      }
      if ((*(int *)(ar4 + 100) == 0xe) || (*(int *)(ar4 + 100) == 0x28)) {
        bVar2 = true;
      }
      if ((bVar1) || (bVar2)) {
        *(undefined4 *)((int)auStack_cc + 0xa8) = 1;
      }
      *(int *)(ar4 + 0x60) = ar6_00;
      *(int *)(ar4 + 100) = *(int *)(ar4 + 100) + 1;
      iStack_54 = ar4;
      uStack_58 = (*(code *)(&libgcc_divide_helper_0103d0))
                            (*(undefined4 *)(ar4 + 100),0x32,iVar5,ar7);
      *(undefined4 *)(ar4 + 100) = uStack_58;
      *(undefined4 *)(ar4 + 0x6c) = 1;
    }
  }
  iStack_5c = *(int *)(ar4 + 0x54);
  iVar7 = *(undefined4 *)0x8c4413c0;
  iVar5 = *(int *)((&DATA_8c126724) + iStack_5c * 4);
  uVar3 = FUN_8c101de0(ar4,*(undefined4 *)(ar4 + 0x50),ar6_00,ar7);
  *(undefined4 *)((int)auStack_cc + 0x94) = uVar3;
  if (((*(int *)(ar4 + 0x5c) == 0) ||
      ((uint)(iVar7 * iVar5) <= *(uint *)((int)auStack_cc + 0x94))) ||
     (*(int *)((int)auStack_cc + 0xa8) == 1)) {
    if (*(int *)((int)auStack_cc + 0xa8) == 1) {
      *(undefined4 *)(ar4 + 0x54) = 0;
    }
    iStack_60 = *(int *)(ar4 + 0x54);
    (*(code *)(&FUN_8c0219b8))
              (0x8c2b59d0,*(undefined4 *)(ar4 + 0x58),
               *(undefined4 *)((&DATA_8c1266e4) + iStack_60 * 4),ar7);
    *(int *)(ar4 + 0x50) = ar6_00;
    iStack_64 = ar4;
    *(int *)(ar4 + 0x54) = *(int *)(ar4 + 0x54) + 1;
    *(uint *)(ar4 + 0x54) = *(uint *)(ar4 + 0x54) & 0xf;
    *(undefined4 *)(ar4 + 0x5c) = 1;
  }
  if (0x20 < *(uint *)(0xc4 + ar4)) {
    if (*(int *)(ar4 + 0x3c) == 0) {
      if (*(int *)((int)auStack_cc + 0xa4) == 1) {
        iStack_68 = *(int *)(ar4 + 0x34);
        uVar3 = *(undefined4 *)((&DATA_8c1268f4) + iStack_68 * 4);
        FUN_8c0219b8(0x8c2b59d0,*(undefined4 *)(ar4 + 0x38),uVar3,ar7);
        *(int *)(ar4 + 0x30) = ar6_00;
        *(int *)(ar4 + 0x34) = *(int *)(ar4 + 0x34) + 1;
        iStack_6c = ar4;
        uStack_70 = (*(code *)(&libgcc_divide_helper_0103d0))
                              (*(undefined4 *)(ar4 + 0x34),0x19,uVar3,ar7);
        *(undefined4 *)(ar4 + 0x34) = uStack_70;
        *(undefined4 *)(ar4 + 0x3c) = 1;
      }
    }
    else {
      iStack_74 = *(int *)(ar4 + 0x34);
      iVar7 = *(undefined4 *)0x8c4413c0;
      iVar5 = *(int *)((&DATA_8c126958) + iStack_74 * 4);
      uVar3 = FUN_8c101de0(ar4,*(undefined4 *)(ar4 + 0x30),ar6_00,ar7);
      *(undefined4 *)((int)auStack_cc + 0x90) = uVar3;
      if ((((uint)(iVar7 * iVar5) <= *(uint *)((int)auStack_cc + 0x90)) || (bVar1)) ||
         (bVar2)) {
        if ((bVar1) || (bVar2)) {
          *(undefined4 *)(ar4 + 0x34) = 0;
        }
        iStack_78 = *(int *)(ar4 + 0x34);
        uVar3 = *(undefined4 *)((&DATA_8c1268f4) + iStack_78 * 4);
        FUN_8c0219b8(0x8c2b59d0,*(undefined4 *)(ar4 + 0x38),uVar3,ar7);
        *(int *)(ar4 + 0x30) = ar6_00;
        *(int *)(ar4 + 0x34) = *(int *)(ar4 + 0x34) + 1;
        iStack_7c = ar4;
        uStack_80 = (*(code *)(&libgcc_divide_helper_0103d0))
                              (*(undefined4 *)(ar4 + 0x34),0x19,uVar3,ar7);
        *(undefined4 *)(ar4 + 0x34) = uStack_80;
      }
    }
  }
  *(undefined4 *)((int)auStack_cc + 0xa0) = 1;
  if (*(uint *)(0xc4 + ar4) < 0x41) {
    *(undefined4 *)((int)auStack_cc + 0xa0) = 0;
  }
  if (0xa2be8 < *(uint *)(0xbc + ar4)) {
    *(undefined4 *)((int)auStack_cc + 0xa0) = 0;
  }
  if (*(uint *)(0xbc + ar4) < 0x82334) {
    *(undefined4 *)((int)auStack_cc + 0xa0) = 0;
  }
  if (*(int *)((int)auStack_cc + 0xa0) == 0) {
    *(undefined4 *)(ar4 + 0x44) = 0;
  }
  if (*(int *)((int)auStack_cc + 0xa0) == 1) {
    if (*(int *)(ar4 + 0x4c) == 0) {
      if (*(int *)((int)auStack_cc + 0xa4) == 1) {
        iStack_84 = *(int *)(ar4 + 0x44);
        uVar3 = *(undefined4 *)((&DATA_8c1269bc) + iStack_84 * 4);
        FUN_8c0219b8(0x8c2b59d0,*(undefined4 *)(ar4 + 0x48),uVar3,ar7);
        *(int *)(ar4 + 0x40) = ar6_00;
        *(int *)(ar4 + 0x44) = *(int *)(ar4 + 0x44) + 1;
        iStack_88 = ar4;
        uStack_8c = (*(code *)(&libgcc_divide_helper_0103d0))
                              (*(undefined4 *)(ar4 + 0x44),0x1c,uVar3,ar7);
        *(undefined4 *)(ar4 + 0x44) = uStack_8c;
        *(undefined4 *)(ar4 + 0x4c) = 1;
      }
    }
    else {
      iStack_90 = *(int *)(ar4 + 0x44);
      iVar7 = *(undefined4 *)0x8c4413c0;
      iVar5 = *(int *)((&DATA_8c126a2c) + iStack_90 * 4);
      uVar3 = FUN_8c101de0(ar4,*(undefined4 *)(ar4 + 0x40),ar6_00,ar7);
      *(undefined4 *)((int)auStack_cc + 0x8c) = uVar3;
      if ((uint)(iVar7 * iVar5) <= *(uint *)((int)auStack_cc + 0x8c)) {
        if (*(int *)(ar4 + 0x44) == 0) {
          if (bVar1) {
            iStack_94 = *(int *)(ar4 + 0x44);
            uVar3 = *(undefined4 *)((&DATA_8c1269bc) + iStack_94 * 4);
            FUN_8c0219b8(0x8c2b59d0,*(undefined4 *)(ar4 + 0x48),uVar3,ar7);
            *(int *)(ar4 + 0x40) = ar6_00;
            *(int *)(ar4 + 0x44) = *(int *)(ar4 + 0x44) + 1;
            iStack_98 = ar4;
            uStack_9c = (*(code *)(&libgcc_divide_helper_0103d0))
                                  (*(undefined4 *)(ar4 + 0x44),0x1c,uVar3,ar7);
            *(undefined4 *)(ar4 + 0x44) = uStack_9c;
          }
        }
        else if (*(int *)(ar4 + 0x44) == 7) {
          if (bVar2) {
            iStack_a0 = *(int *)(ar4 + 0x44);
            uVar3 = *(undefined4 *)((&DATA_8c1269bc) + iStack_a0 * 4);
            FUN_8c0219b8(0x8c2b59d0,*(undefined4 *)(ar4 + 0x48),uVar3,ar7);
            *(int *)(ar4 + 0x40) = ar6_00;
            *(int *)(ar4 + 0x44) = *(int *)(ar4 + 0x44) + 1;
            iStack_a4 = ar4;
            uStack_a8 = (*(code *)(&libgcc_divide_helper_0103d0))
                                  (*(undefined4 *)(ar4 + 0x44),0x1c,uVar3,ar7);
            *(undefined4 *)(ar4 + 0x44) = uStack_a8;
          }
        }
        else if (*(int *)(ar4 + 0x44) == 0xe) {
          if (bVar1) {
            iStack_ac = *(int *)(ar4 + 0x44);
            uVar3 = *(undefined4 *)((&DATA_8c1269bc) + iStack_ac * 4);
            FUN_8c0219b8(0x8c2b59d0,*(undefined4 *)(ar4 + 0x48),uVar3,ar7);
            *(int *)(ar4 + 0x40) = ar6_00;
            *(int *)(ar4 + 0x44) = *(int *)(ar4 + 0x44) + 1;
            iStack_b0 = ar4;
            uStack_b4 = (*(code *)(&libgcc_divide_helper_0103d0))
                                  (*(undefined4 *)(ar4 + 0x44),0x1c,uVar3,ar7);
            *(undefined4 *)(ar4 + 0x44) = uStack_b4;
          }
        }
        else if (*(int *)(ar4 + 0x44) == 0x15) {
          if (bVar2) {
            iStack_b8 = *(int *)(ar4 + 0x44);
            uVar3 = *(undefined4 *)((&DATA_8c1269bc) + iStack_b8 * 4);
            FUN_8c0219b8(0x8c2b59d0,*(undefined4 *)(ar4 + 0x48),uVar3,ar7);
            *(int *)(ar4 + 0x40) = ar6_00;
            *(int *)(ar4 + 0x44) = *(int *)(ar4 + 0x44) + 1;
            iStack_bc = ar4;
            auStack_cc[3] =
                 (*(code *)(&libgcc_divide_helper_0103d0))
                           (*(undefined4 *)(ar4 + 0x44),0x1c,uVar3,ar7);
            *(uint *)(ar4 + 0x44) = auStack_cc[3];
          }
        }
        else {
          auStack_cc[2] = *(int *)(ar4 + 0x44);
          uVar3 = *(undefined4 *)((&DATA_8c1269bc) + auStack_cc[2] * 4);
          FUN_8c0219b8(0x8c2b59d0,*(undefined4 *)(ar4 + 0x48),uVar3,ar7);
          *(int *)(ar4 + 0x40) = ar6_00;
          *(int *)(ar4 + 0x44) = *(int *)(ar4 + 0x44) + 1;
          auStack_cc[1] = ar4;
          auStack_cc[0] =
               (*(code *)(&libgcc_divide_helper_0103d0))
                         (*(undefined4 *)(ar4 + 0x44),0x1c,uVar3,ar7);
          *(uint *)(ar4 + 0x44) = auStack_cc[0];
        }
      }
    }
  }
  uVar6 = (uint)(0x70 < *(uint *)(0xc4 + ar4));
  if (0xc349c < *(uint *)(0xbc + ar4)) {
    uVar6 = 0;
  }
  if (*(uint *)(0xbc + ar4) < 0x82334) {
    uVar6 = 0;
  }
  if (*(int *)(0x88 + ar4) != -1) {
    uVar6 = 0;
  }
  if (*(int *)(ar4 + 0x44) != 0) {
    uVar6 = 0;
  }
  if (ar6_00 == *(int *)(ar4 + 0x40)) {
    uVar6 = 0;
  }
  if (uVar6 == 1) {
    iVar7 = *(int *)(&DATA_8c126a9c);
    iVar4 = *(undefined4 *)0x8c4413c0;
    iVar5 = ar6_00;
    uVar3 = FUN_8c101de0(ar4,*(undefined4 *)(0x80 + ar4),ar6_00,ar7);
    *(undefined4 *)((int)auStack_cc + 0x88) = uVar3;
    uVar6 = *(uint *)(0x8c + ar4);
    if (((uVar6 == 0) || ((uint)(iVar7 * iVar4) <= *(uint *)((int)auStack_cc + 0x88))) &&
       (uVar6 = *(uint *)((int)auStack_cc + 0xa4), uVar6 == 1)) {
      uVar3 = (*(code *)(&pack_acquire_entry_handle))
                        (0x8c2b59d0,(&DATA_8c142194),iVar5,ar7);
      *(undefined4 *)((int)auStack_cc + 0x84) = uVar3;
      *(undefined4 *)(0x88 + ar4) = *(undefined4 *)((int)auStack_cc + 0x84);
      *(int *)(0x80 + ar4) = ar6_00;
      uVar6 = 0x8c;
      *(undefined4 *)(0x8c + ar4) = 1;
    }
  }
  return uVar6;
}

__asm__(".globl _FUN_8c101e1c\n.set _FUN_8c101e1c, _FUN_8c101e1c_def\n");
