#include "../decls.h"
int FUN_8c114d30_def(int ar4,uint ar5,uint ar6,undefined4 ar7)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  int *piVar7;
  int *piVar8;
  int iVar9;
  ushort *puVar10;
  uint uVar11;
  int *piVar12;
  ushort *puVar13;
  int iStack_28;
  int *piStack_24;
  uint uStack_20;
  
  piVar7 = *(int **)(0x104 + ar4);
  iVar2 = (int)0xc8;
  piStack_24 = (int *)(*(int *)(ar4 + 0x38) * 4 + *(int *)(ar4 + 0x44) + 4);
  iVar3 = iVar2 + 0x20;
  iVar9 = *(int *)(iVar3 + ar4);
  piVar12 = (int *)(*(int *)(iVar2 + ar4) * 4 + *(int *)(iVar2 + 8 + ar4));
  uStack_20 = 0;
  piVar8 = piVar12 + 2;
  if (ar5 != 0) {
    do {
      piVar12 = piVar12 + 1;
      iStack_28 = 0;
      puVar13 = (ushort *)(*piVar12 * 2 + *(int *)(0xcc + ar4));
      iVar2 = *(int *)(0xcc + ar4) + *piVar8 * 2;
      puVar10 = (ushort *)(iVar2 + -2);
      *(undefined2 *)((int)piVar7 + 6) =
           *(undefined2 *)(*(int *)((uint)*puVar13 * 4 + iVar9) * 2 + iVar9);
      *(undefined2 *)(piVar7 + 2) =
           *(undefined2 *)((*(int *)((uint)*puVar10 * 4 + iVar9) + 1) * 2 + iVar9);
      iVar3 = 0;
      if (2 < (uint)((int)((iVar2 - (int)puVar13) + (uint)(iVar2 - (int)puVar13 < 0)) >> 1)) {
        uVar1 = *puVar13;
        puVar13 = puVar13 + 1;
        puVar10 = (ushort *)(iVar2 + -4);
        piVar4 = (int *)((uint)uVar1 * 4 + iVar9);
        iStack_28 = (piVar4[1] - *piVar4) + -2;
      }
      piVar4 = piStack_24 + 1;
      *piVar7 = *piStack_24 + iStack_28;
      for (; puVar13 <= puVar10; puVar13 = puVar13 + 1) {
        piVar5 = (int *)((uint)*puVar13 * 4 + iVar9);
        iVar3 = iVar3 + (piVar5[1] - *piVar5) + -2;
      }
      *(short *)(piVar7 + 1) = (short)iVar3;
      piVar8 = piVar8 + 1;
      piVar7 = piVar7 + 3;
      uStack_20 = uStack_20 + 1;
      piStack_24 = piVar4;
    } while (uStack_20 < ar5);
  }
  iVar2 = 0xfffe;
  uVar11 = 0;
  iVar9 = *piStack_24;
  if (ar6 != 0) {
    do {
      piStack_24 = piStack_24 + 1;
      iVar3 = (int)0xe6;
      iVar6 = *piStack_24;
      *piVar7 = iVar9;
      *(undefined2 *)(piVar7 + 2) = *(undefined2 *)(iVar3 + ar4);
      *(undefined2 *)((int)piVar7 + 6) = *(undefined2 *)(0xe6 + ar4);
      uVar11 = uVar11 + 1;
      iVar3 = (iVar6 - iVar9) + iVar2;
      *(short *)(piVar7 + 1) = (short)iVar3;
      piVar7 = piVar7 + 3;
      iVar9 = iVar6;
    } while (uVar11 < ar6);
  }
  return iVar3;
}

__asm__(".globl _FUN_8c114d30\n.set _FUN_8c114d30, _FUN_8c114d30_def\n");
