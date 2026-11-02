#include "../decls.h"
undefined4 FUN_8c1197d8_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  short sVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  short sVar7;
  short *psVar8;
  int ar6_00;
  int ar7_00;
  int *piVar9;
  uint uVar10;
  short *psVar11;
  int *piVar12;
  uint uStack_30;
  
  sVar7 = 0x77ff;
  ar6_00 = (int)0x77ff;
  psVar11 = (short *)0x0;
  ar7_00 = (int)0x7fff;
  psVar8 = *(short **)(ar4 + 0x54);
  sVar1 = *(short *)(0x19a + ar4);
  iVar2 = 0x19a + 0x12;
  *(int *)(iVar2 + ar4) = *(int *)(iVar2 + ar4) + (int)sVar1;
  uVar6 = (uint)*(ushort *)(ar4 + 0x50);
  uVar10 = 0;
  if (uVar6 != 0) {
    do {
      iVar2 = (int)psVar8[1];
      if (iVar2 < ar6_00) {
        iVar2 = iVar2 - sVar1;
        *psVar8 = (short)iVar2;
        iVar2 = iVar2 + *(short *)(ar5 + *(int *)(psVar8 + 6) * 2);
        psVar8[1] = (short)iVar2;
      }
      else {
        *psVar8 = sVar7;
      }
      if (iVar2 < (short)ar7_00) {
        ar7_00 = iVar2;
      }
      **(int **)(psVar8 + 4) = **(int **)(psVar8 + 4) + 1;
      uVar10 = uVar10 + 1;
      *(undefined4 *)(psVar8 + 2) = *(undefined4 *)(psVar8 + 4);
      psVar8 = *(short **)(psVar8 + 0xc);
    } while (uVar10 < uVar6);
  }
  *(short *)(0x19a + ar4) = (short)ar7_00;
  uVar10 = *(uint *)(0x1b4 + ar4);
  uStack_30 = 0;
  psVar8 = *(short **)(ar4 + 0x54);
  if (uVar6 != 0) {
    do {
      psVar11 = psVar8;
      iVar2 = *(int *)(psVar11 + 8);
      sVar1 = *psVar11;
      sVar7 = *(short *)(ar5 + *(int *)(iVar2 + 0xc) * 2) + sVar1;
      piVar12 = *(int **)(psVar11 + 2);
      piVar9 = piVar12;
      if (sVar7 < *(short *)(iVar2 + 2)) {
        *(short *)(iVar2 + 2) = sVar7;
        piVar9 = *(int **)(0x114 + ar4);
        if (piVar9[1] == 0) {
          uVar3 = FUN_8c112fd8(ar4,piVar9,ar6_00,ar7_00);
          *(undefined4 *)(0x114 + ar4) = uVar3;
        }
        else {
          *(int *)(0x114 + ar4) = piVar9[1];
        }
        iVar4 = (int)0x12c;
        piVar9[1] = (int)piVar12;
        *piVar12 = *piVar12 + 1;
        piVar9[4] = *(int *)(psVar11 + 6);
        *piVar9 = 0;
        iVar5 = (int)0x1ac;
        piVar9[5] = *(int *)(iVar4 + ar4);
        piVar9[3] = (int)sVar1 + *(int *)(iVar5 + ar4);
        piVar12 = *(int **)(iVar2 + 8);
        if (piVar12 != piVar9) {
          *(int **)(iVar2 + 8) = piVar9;
          *piVar9 = *piVar9 + 1;
          iVar2 = *piVar12;
          *piVar12 = iVar2 + -1;
          if (iVar2 + -1 < 1) {
            FUN_8c115ed8(ar4,piVar12,ar6_00,ar7_00);
          }
        }
      }
      if ((1 < uVar10) && (uVar10 - 1 == uStack_30)) {
        iVar2 = *(int *)(ar4 + 0x54);
        sVar7 = *(short *)(ar5 + *(int *)(iVar2 + 0xc) * 2) + sVar1;
        if (sVar7 < *(short *)(iVar2 + 2)) {
          *(short *)(iVar2 + 2) = sVar7;
          piVar12 = piVar9;
          if (piVar9 == *(int **)(psVar11 + 2)) {
            piVar12 = *(int **)(0x114 + ar4);
            if (piVar12[1] == 0) {
              uVar3 = FUN_8c112fd8(ar4,piVar12,ar6_00,ar7_00);
              *(undefined4 *)(0x114 + ar4) = uVar3;
            }
            else {
              *(int *)(0x114 + ar4) = piVar12[1];
            }
            iVar4 = (int)0x12c;
            piVar12[1] = (int)piVar9;
            *piVar9 = *piVar9 + 1;
            piVar12[4] = *(int *)(psVar11 + 6);
            *piVar12 = 0;
            iVar5 = (int)0x1ac;
            piVar12[5] = *(int *)(iVar4 + ar4);
            piVar12[3] = (int)sVar1 + *(int *)(iVar5 + ar4);
          }
          piVar9 = *(int **)(iVar2 + 8);
          if (piVar9 != piVar12) {
            *(int **)(iVar2 + 8) = piVar12;
            *piVar12 = *piVar12 + 1;
            iVar2 = *piVar9;
            *piVar9 = iVar2 + -1;
            if (iVar2 + -1 < 1) {
              FUN_8c115ed8(ar4,piVar9,ar6_00,ar7_00);
            }
          }
        }
      }
      iVar2 = **(int **)(psVar11 + 2) + -1;
      **(int **)(psVar11 + 2) = iVar2;
      if (iVar2 < 1) {
        FUN_8c115ed8(ar4,*(undefined4 *)(psVar11 + 2),ar6_00,ar7_00);
      }
      uStack_30 = uStack_30 + 1;
      psVar8 = *(short **)(psVar11 + 0xc);
    } while (uStack_30 < uVar6);
  }
  *(short *)(0x1b0 + ar4) = psVar11[1];
  return 0;
}

__asm__(".globl _FUN_8c1197d8\n.set _FUN_8c1197d8, _FUN_8c1197d8_def\n");
