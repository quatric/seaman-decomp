#include "../decls.h"
undefined4 FUN_8c11372e_def(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined2 uVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int *piVar10;
  int iVar11;
  uint uStack_2c;
  uint uStack_28;
  
  iVar9 = 0;
  *(undefined4 *)((int)0x1ac + (int)ar4) = 0;
  *(undefined2 *)(ar4 + 0x14) = 0;
  *(undefined2 *)(ar4 + 0xd) = 0;
  iVar2 = (int)0x150;
  *(undefined4 *)(iVar2 + (int)ar4) = 0;
  *(undefined4 *)(iVar2 + -0x24 + (int)ar4) = 0xffffffff;
  iVar2 = (int)0x1c4;
  *(undefined2 *)(iVar2 + (int)ar4) = 0;
  *(undefined2 *)(iVar2 + -0x2a + (int)ar4) = 0;
  ar4[0xc] = 1;
  *(undefined4 *)(iVar2 + -0x28 + (int)ar4) = 0;
  if (*(char *)(iVar2 + -0x70 + (int)ar4) != '\0') {
    *(undefined1 *)((int)0x154 + (int)ar4) = 0;
    uVar3 = FUN_8c1133f6(ar4,ar5,ar6,ar7);
    if ((uVar3 & 0xff) != 0) {
      return 1;
    }
  }
  piVar4 = (int *)FUN_8c113354(ar4,ar5,ar6,ar7);
  piVar4[1] = 0;
  uVar3 = FUN_8c112d00(ar4,ar5,ar6,ar7);
  if ((uVar3 & 0xff) == 0) {
    if (*(undefined **)((int)0x134 + (int)ar4) == (&FUN_8c11617a)) {
      FUN_8c1157c0(ar4,ar5,ar6,ar7);
    }
    if (*(undefined **)((int)0x134 + (int)ar4) == (&FUN_8c117bac)) {
      FUN_8c115778(ar4,ar5,ar6,ar7);
    }
    iVar2 = 0;
    if (*(undefined **)((int)0x134 + (int)ar4) == (&FUN_8c11617a)) {
      iVar11 = ar4[0x15];
      uStack_2c = 0;
      if (*(int *)((int)0x144 + (int)ar4) != 0) {
        do {
          uVar7 = *(uint *)(*(int *)((int)0x148 + (int)ar4) + uStack_2c * 4);
          uVar3 = -(uVar7 & 7);
          if ((int)uVar3 < 0) {
            uVar3 = (int)0x80 >> (~uVar3 & 0x1f) + 1;
          }
          else {
            uVar3 = (int)0x80 << (uVar3 & 0x1f);
          }
          if ((*(byte *)(*(int *)((int)0x94 + (int)ar4) + (uVar7 >> 3)) & uVar3) != 0) {
            piVar5 = *(int **)((uVar7 + 1) * 4 + ar4[0x11]);
            for (piVar10 = *(int **)(uVar7 * 4 + ar4[0x11]); piVar10 < piVar5; piVar10 = piVar10 + 1
                ) {
              *(int *)(iVar11 + 0xc) = *piVar10 * 2 + ar4[0x12];
              *(undefined2 *)(iVar11 + 2) = 0;
              *(int **)(iVar11 + 8) = piVar4;
              *(undefined4 *)(iVar11 + 0x10) = 0;
              iVar9 = (int)0xac;
              *(int *)(iVar11 + 0x14) = *(int *)((int)0xa4 + (int)ar4) + -4;
              *(uint *)(iVar11 + 0x1c) = *(int *)(iVar9 + (int)ar4) + uStack_2c * 4;
              if (*(int *)(iVar11 + 0x18) == 0) {
                iVar8 = FUN_8c112b6e(ar4,iVar11,ar6,ar7);
              }
              else {
                iVar8 = *(int *)(iVar11 + 0x18);
              }
              iVar2 = iVar2 + 1;
              iVar9 = iVar11;
              iVar11 = iVar8;
            }
          }
          uStack_2c = uStack_2c + 1;
        } while (uStack_2c < *(uint *)((int)0x144 + (int)ar4));
      }
    }
    else if (*(undefined **)((int)0x134 + (int)ar4) == (&FUN_8c119320)) {
      iVar6 = *(int *)((int)0x1b4 + (int)ar4);
      iVar8 = ar4[0x10];
      uVar3 = 0;
      iVar11 = ar4[0x15];
      if (ar4[0x10] != 0) {
        do {
          iVar9 = iVar11;
          *(uint *)(iVar9 + 0xc) = uVar3 * 2 + ar4[0x12];
          *(undefined4 *)(iVar9 + 0x10) = 0;
          uVar1 = 0x77ff;
          if (uVar3 == iVar8 - iVar6) {
            uVar1 = 0;
          }
          *(undefined2 *)(iVar9 + 2) = uVar1;
          *(int **)(iVar9 + 8) = piVar4;
          *(int **)(iVar9 + 4) = piVar4;
          *(undefined4 *)(iVar9 + 0x14) = 0;
          if (*(int *)(iVar9 + 0x18) == 0) {
            iVar11 = FUN_8c112b6e(ar4,iVar9,ar6,ar7);
          }
          else {
            iVar11 = *(int *)(iVar9 + 0x18);
          }
          uVar3 = uVar3 + 1;
          iVar2 = iVar2 + 1;
        } while (uVar3 < (uint)ar4[0x10]);
      }
      *piVar4 = iVar2;
    }
    else {
      iVar11 = ar4[0x15];
      if (ar4[0x13] == 0) {
        iVar8 = (**(code **)(*ar4 + 0x10))(*ar4,ar4[0x10] << 2,ar6,ar7);
        ar4[0x13] = iVar8;
        if (ar4[0x13] == 0) {
          FUN_8c1204c4(ar4,2,ar6,ar7);
          return 1;
        }
      }
      iVar8 = ar4[0x10] << 2;
      memset(ar4[0x13],0,iVar8,ar7);
      uStack_28 = 0;
      if (*(int *)((int)0x144 + (int)ar4) != 0) {
        do {
          uVar7 = *(uint *)(*(int *)((int)0x148 + (int)ar4) + uStack_28 * 4);
          uVar3 = -(uVar7 & 7);
          if ((int)uVar3 < 0) {
            uVar3 = (int)0x80 >> (~uVar3 & 0x1f) + 1;
          }
          else {
            uVar3 = (int)0x80 << (uVar3 & 0x1f);
          }
          if ((*(byte *)(*(int *)((int)0x94 + (int)ar4) + (uVar7 >> 3)) & uVar3) != 0) {
            piVar5 = *(int **)((uVar7 + 1) * 4 + ar4[0x11]);
            for (piVar10 = *(int **)(uVar7 * 4 + ar4[0x11]); piVar10 < piVar5; piVar10 = piVar10 + 1
                ) {
              *(int *)(iVar11 + 0xc) = *piVar10 * 2 + ar4[0x12];
              *(undefined4 *)(iVar11 + 0x10) = 0;
              *(undefined2 *)(iVar11 + 2) = 0;
              *(int **)(iVar11 + 8) = piVar4;
              *(undefined4 *)(iVar11 + 0x14) = 0;
              *(int *)(ar4[0x13] + *piVar10 * 4) = iVar11;
              if (*(int *)(iVar11 + 0x18) == 0) {
                iVar6 = FUN_8c112b6e(ar4,iVar11,iVar8,ar7);
              }
              else {
                iVar6 = *(int *)(iVar11 + 0x18);
              }
              iVar2 = iVar2 + 1;
              iVar9 = iVar11;
              iVar11 = iVar6;
            }
          }
          uStack_28 = uStack_28 + 1;
        } while (uStack_28 < *(uint *)((int)0x144 + (int)ar4));
      }
    }
    iVar11 = 0;
    iVar8 = 0;
    *piVar4 = *piVar4 + iVar2;
    ar4[0x18] = iVar9;
    *(short *)(ar4 + 0x14) = (short)iVar2;
    iVar9 = (int)0x160;
    *(undefined2 *)(iVar9 + -2 + (int)ar4) = *(undefined2 *)(iVar9 + (int)ar4);
    *(undefined1 *)(iVar9 + -4 + (int)ar4) = 0;
    do {
      iVar9 = (int)0x184;
      iVar8 = iVar8 + 1;
      *(undefined4 *)((int)ar4 + iVar11 + 0x170) = 0;
      *(undefined4 *)((int)ar4 + iVar11 + iVar9) = 0;
      iVar11 = iVar11 + 4;
    } while (iVar8 < 5);
    *(undefined1 *)((int)0x198 + (int)ar4) = 0;
    return 0;
  }
  return 1;
}

__asm__(".globl _FUN_8c11372e\n.set _FUN_8c11372e, _FUN_8c11372e_def\n");
