#include "../decls.h"
undefined4 FUN_8c115ac8_def(int ar4,uint *ar5,undefined4 ar6,undefined4 ar7)

{
  undefined2 uVar1;
  undefined *puVar2;
  undefined2 uVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  int ar5_00;
  int iVar10;
  uint uStack_38;
  int iStack_34;
  ushort *puStack_30;
  ushort *puStack_24;
  
  uVar8 = *ar5;
  puStack_24 = (ushort *)(uint)ar5[2];
  puStack_30 = (ushort *)(uint)ar5[3];
  uVar9 = ar5[1];
  *(undefined2 *)(ar4 + 0x50) = 0;
  iVar4 = (int)0x12c;
  *(undefined4 *)(iVar4 + ar4) = 0xffffffff;
  *(undefined2 *)(iVar4 + 0x6e + ar4) = 0;
  *(undefined4 *)(iVar4 + 0x80 + ar4) = 0;
  *(uint *)(iVar4 + 0x88 + ar4) = uVar9;
  if (uVar9 == 0) {
    *(undefined4 *)(0x1b8 + ar4) = 0;
  }
  else {
    *(uint *)(0x1b8 + ar4) = (uint)*puStack_30;
  }
  uVar5 = FUN_8c1133f6(ar4,ar5,ar6,ar7);
  if ((uVar5 & 0xff) == 0) {
    piVar6 = (int *)FUN_8c113354(ar4,ar5,ar6,ar7);
    puVar2 = (&FUN_8c112d00);
    piVar6[1] = 0;
    piVar6[4] = 0;
    *piVar6 = 0;
    uVar5 = (*(code *)puVar2)(ar4,ar5,ar6,ar7);
    uVar1 = 0x77ff;
    if ((uVar5 & 0xff) == 0) {
      ar5_00 = 0;
      iStack_34 = 0;
      iVar10 = *(int *)(ar4 + 0x54);
      uStack_38 = 0;
      iVar4 = ar5_00;
      if (uVar9 != 0) {
        do {
          ar5_00 = iVar10;
          *(uint *)(ar5_00 + 0xc) = (uint)puStack_30[uStack_38];
          if (iVar4 != 0) {
            *(int *)(iVar4 + 0x10) = ar5_00;
          }
          uVar3 = uVar1;
          if (uStack_38 == 0) {
            uVar3 = 0;
          }
          *(undefined2 *)(ar5_00 + 2) = uVar3;
          *(int **)(ar5_00 + 8) = piVar6;
          *(int **)(ar5_00 + 4) = piVar6;
          if (*(int *)(ar5_00 + 0x18) == 0) {
            iVar10 = FUN_8c112b6e(ar4,ar5_00,ar6,ar7);
          }
          else {
            iVar10 = *(int *)(ar5_00 + 0x18);
          }
          iStack_34 = iStack_34 + 1;
          uStack_38 = uStack_38 + 1;
          iVar4 = ar5_00;
        } while (uStack_38 < uVar9);
      }
      uStack_38 = 0;
      iVar4 = ar5_00;
      if (uVar8 != 0) {
        do {
          ar5_00 = iVar10;
          *(uint *)(ar5_00 + 0xc) = (uint)*puStack_24;
          if (iVar4 != 0) {
            *(int *)(iVar4 + 0x10) = ar5_00;
          }
          *(undefined2 *)(ar5_00 + 2) = uVar1;
          *(int **)(ar5_00 + 8) = piVar6;
          *(int **)(ar5_00 + 4) = piVar6;
          if (*(int *)(ar5_00 + 0x18) == 0) {
            iVar10 = FUN_8c112b6e(ar4,ar5_00,ar6,ar7);
          }
          else {
            iVar10 = *(int *)(ar5_00 + 0x18);
          }
          iStack_34 = iStack_34 + 1;
          uStack_38 = uStack_38 + 1;
          iVar4 = ar5_00;
          puStack_24 = puStack_24 + 1;
        } while (uStack_38 < uVar8);
      }
      uStack_38 = 0;
      iVar4 = ar5_00;
      iVar7 = iVar10;
      if (uVar9 != 0) {
        do {
          ar5_00 = iVar7;
          *(uint *)(ar5_00 + 0xc) = (uint)*puStack_30;
          if (iVar4 != 0) {
            *(int *)(iVar4 + 0x10) = ar5_00;
          }
          *(undefined2 *)(ar5_00 + 2) = uVar1;
          *(int **)(ar5_00 + 8) = piVar6;
          *(int **)(ar5_00 + 4) = piVar6;
          if (*(int *)(ar5_00 + 0x18) == 0) {
            iVar7 = FUN_8c112b6e(ar4,ar5_00,ar6,ar7);
          }
          else {
            iVar7 = *(int *)(ar5_00 + 0x18);
          }
          iStack_34 = iStack_34 + 1;
          uStack_38 = uStack_38 + 1;
          iVar4 = ar5_00;
          puStack_30 = puStack_30 + 1;
        } while (uStack_38 < uVar9);
      }
      if (uVar9 < 2) {
        *(int *)(ar5_00 + 0x10) = ar5_00;
      }
      else {
        *(int *)(ar5_00 + 0x10) = iVar10;
      }
      if (uVar9 == 0) {
        *(undefined2 *)(*(int *)(ar4 + 0x54) + 2) = 0;
      }
      *piVar6 = iStack_34;
      *(int *)(ar4 + 0x60) = ar5_00;
      *(short *)(ar4 + 0x50) = (short)iStack_34;
      *(undefined1 *)(0x1d8 + ar4) = 0;
      return 0;
    }
  }
  return 1;
}

__asm__(".globl _FUN_8c115ac8\n.set _FUN_8c115ac8, _FUN_8c115ac8_def\n");
