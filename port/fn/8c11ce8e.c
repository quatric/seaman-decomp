#include "../decls.h"
undefined4 FUN_8c11ce8e_def(int ar4,undefined4 *ar5,undefined4 ar6,undefined4 ar7)

{
  undefined *puVar1;
  undefined *s8;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined1 *puVar6;
  int iVar7;
  undefined4 *ar6_00;
  int iVar8;
  undefined *a7;
  undefined4 extraout_fr3;
  undefined8 in_xd2;
  byte in_FPSCR_DN;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  byte in_FPSCR_PR;
  byte bVar12;
  byte bVar13;
  byte in_FPSCR_SZ;
  char cVar14;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_c;
  
  uStack_c = 0;
  uStack_28 = *(undefined4 *)(&DATA_8c127c28);
  uStack_24 = *(undefined4 *)((&DATA_8c127c28) + 4);
  uStack_20 = *(undefined4 *)((&DATA_8c127c28) + 8);
  uStack_1c = *(undefined4 *)((&DATA_8c127c28) + 0xc);
  uStack_18 = *(undefined4 *)((&DATA_8c127c28) + 0x10);
  uStack_14 = *(undefined4 *)((&DATA_8c127c28) + 0x14);
  uStack_34 = *(undefined4 *)(&DATA_8c127c40);
  uStack_30 = *(undefined4 *)((&DATA_8c127c40) + 4);
  uStack_2c = *(undefined4 *)((&DATA_8c127c40) + 8);
  uVar4 = ar6;
  iVar2 = FUN_8c11c9d2(ar4,ar5,ar6,ar7);
  if (iVar2 == 0) {
    if (ar5 == (undefined4 *)0x0) {
      FUN_8c11cd02(ar4,0x13,uVar4,ar7);
    }
    else {
      iVar7 = (int)0x2b4;
      iVar8 = ar4 + 8;
      bVar9 = 0;
      bVar11 = 0;
      bVar13 = (byte)((((uint)in_FPSCR_DN << 0x12 | (uint)in_FPSCR_PR << 0x13 |
                       (uint)in_FPSCR_SZ << 0x14) & 0xffe7ffff & 0x100000) >> 0x14);
      iVar2 = FUN_8c11c914(ar4,1,iVar7,iVar8);
      if (iVar2 == 0) {
        FUN_8c11cd02(ar4,2,iVar7,iVar8);
      }
      else {
        iVar7 = (int)0xc4;
        *(int *)(iVar2 + 0x48) = iVar2;
        puVar5 = (undefined4 *)(iVar7 + iVar2);
        *(undefined1 *)(iVar2 + 0x4c) = 0;
        *puVar5 = *ar5;
        puVar5[1] = ar5[1];
        puVar5[2] = ar5[2];
        puVar5[3] = ar5[3];
        puVar5[4] = ar5[4];
        puVar5[5] = ar5[5];
        puVar1 = (&DATA_8c1274a4);
        *(undefined4 *)(0xf4 + iVar2) = *(undefined4 *)(ar4 + 8);
        s8 = (&DATA_8c127aba);
        *(int *)(0xfc + iVar2) = ar4;
        ar6_00 = &uStack_34;
        puVar5 = &uStack_28;
        bVar10 = 0;
        bVar12 = 0;
        bVar9 = (byte)((((uint)bVar9 << 0x12 | (uint)bVar11 << 0x13 | (uint)bVar13 << 0x14) &
                        0xffe7ffff & 0x100000) >> 0x14);
        a7 = (&DATA_8c1278b0);
        uVar3 = (*(code *)(&FUN_8c1201e6))
                          (iVar2,puVar5,ar6_00,(&DATA_8c1278b0),(&DATA_8c12799c),(&DATA_8c127a74),s8
                           ,puVar1,0,0);
        if ((uVar3 & 0xff) == 0) {
          bVar11 = 0;
          bVar13 = 0;
          bVar9 = (byte)((((uint)bVar10 << 0x12 | (uint)bVar12 << 0x13 | (uint)bVar9 << 0x14) &
                          0xffe7ffff & 0x100000) >> 0x14);
          uVar4 = (**(code **)(ar4 + 0x1c))(ar4 + 8,puVar5,ar6_00,a7);
          *(undefined4 *)(0xe8 + iVar2) = uVar4;
          bVar10 = 0;
          bVar12 = 0;
          bVar9 = (byte)((((uint)bVar11 << 0x12 | (uint)bVar13 << 0x13 | (uint)bVar9 << 0x14) &
                          0xffe7ffff & 0x100000) >> 0x14);
          uVar4 = (**(code **)(ar4 + 0x20))(ar4 + 8,puVar5,ar6_00,a7);
          *(undefined4 *)(0xec + iVar2) = uVar4;
          *(undefined4 *)(iVar2 + 0x60) = 0;
          *(undefined4 *)(iVar2 + 100) = **(undefined4 **)(iVar2 + 0x5c);
          *(undefined4 *)(iVar2 + 0x6c) = *(undefined4 *)(*(int *)(iVar2 + 0x5c) + 4);
          *(undefined4 *)(iVar2 + 0x70) = **(undefined4 **)(iVar2 + 0x54);
          puVar1 = (&DATA_8c11c8be);
          *(undefined4 *)(iVar2 + 0x74) = *(undefined4 *)(*(int *)(iVar2 + 0x54) + 4);
          iVar7 = (int)0x100;
          *(undefined4 *)(iVar7 + iVar2) = 0;
          *(undefined4 *)(iVar7 + 4 + iVar2) = 0;
          *(undefined1 *)(0x234 + iVar2) = 0;
          uVar3 = 0xffe7ffff;
          iVar7 = (int)0xe0;
          *(undefined **)(iVar7 + iVar2) = puVar1;
          *(undefined2 *)(iVar7 + 100 + iVar2) = 0;
          *(undefined4 *)(iVar7 + 0x68 + iVar2) = 4;
          cVar14 = (char)((((uint)bVar10 << 0x12 | (uint)bVar12 << 0x13 | (uint)bVar9 << 0x14) &
                           uVar3 & 0x100000) >> 0x14);
          uVar4 = (**(code **)(ar4 + 0x14))(0x28,ar4 + 8,ar6_00,a7);
          *(undefined4 *)(0x2b0 + iVar2) = uVar4;
          if (*(int *)(0x2b0 + iVar2) == 0) {
            FUN_8c11cd02(ar4,2,ar6_00,a7);
          }
          else {
            iVar7 = (int)0x22c;
            **(undefined4 **)(0x2b0 + iVar2) = 0;
            puVar1 = (&FUN_8c120348);
            a7 = (undefined *)0x0;
            uVar4 = _DAT_8c11d120;
            if (cVar14 != '\0') {
              in_xd2 = CONCAT44((&FUN_8c120348),_DAT_8c11d120);
              uVar4 = extraout_fr3;
            }
            ar6_00 = (undefined4 *)(iVar7 + iVar2);
            if (cVar14 == '\0') {
              *(undefined4 *)(0x2a0 + iVar2) = uVar4;
            }
            else {
              *(undefined8 *)(0x2a0 + iVar2) = in_xd2;
            }
            uVar3 = (*(code *)puVar1)(iVar2 + 0x48,4,ar6_00,0);
            if ((uVar3 & 0xff) == 0) {
              a7 = (undefined *)0x0;
              ar6_00 = (undefined4 *)(0x230 + iVar2);
              uVar4 = 0x29;
              uVar3 = FUN_8c120348(iVar2 + 0x48,0x29,ar6_00,0);
              if (((uVar3 & 0xff) == 0) &&
                 (uVar3 = FUN_8c11d8fc(iVar2,uVar4,ar6_00,a7), uVar4 = 0x218df4f5,
                 (uVar3 & 0xff) == 0)) {
                iVar7 = (int)0xf8;
                iVar8 = (int)0xe4;
                uVar3 = 0;
                *(undefined4 *)(iVar7 + iVar2) = ar6;
                puVar6 = (undefined1 *)(iVar8 + iVar2);
                *(undefined4 *)(iVar7 + -8 + iVar2) = uVar4;
                do {
                  *puVar6 = 1;
                  puVar6[1] = 1;
                  uVar3 = uVar3 + 3;
                  puVar6[2] = 1;
                  puVar6 = puVar6 + 3;
                } while (uVar3 < 3);
                return iVar2;
              }
            }
          }
        }
        else {
          FUN_8c11cd02(*(undefined4 *)(0xfc + iVar2),*(undefined4 *)(iVar2 + 0x40),ar6_00,a7
                      );
        }
        (**(code **)(ar4 + 0x18))(iVar2,ar4 + 8,ar6_00,a7);
      }
    }
  }
  return 0;
}

__asm__(".globl _FUN_8c11ce8e\n.set _FUN_8c11ce8e, _FUN_8c11ce8e_def\n");
