#include "../decls.h"
int FUN_8c10d7f4_def(int ar4,int ar5,int ar6,undefined4 ar7)

{
  int iVar1;
  undefined2 uVar2;
  uint uVar3;
  ushort *puVar4;
  int *piVar5;
  uint uVar6;
  uint uVar7;
  ushort *puVar8;
  ushort *ar7_00;
  int iVar9;
  int iVar10;
  int *piVar11;
  int *piVar12;
  int iVar13;
  int iStack_3c;
  ushort *puStack_38;
  short *psStack_30;
  
  iVar9 = *(int *)(0xac + ar4);
  piVar11 = (int *)(ar4 + 0x34);
  iVar1 = (int)0x9c;
  piVar12 = piVar11 + ar6 + -1;
  uVar3 = (uint)**(ushort **)(ar4 + 0x28);
  psStack_30 = *(short **)(iVar1 + 0x14 + ar4);
  iVar13 = ar6 * *(short *)(iVar1 + 4 + ar4);
  iVar10 = **(int **)(0xac + -0x24 + ar4) + iVar13 * 2;
  if (uVar3 == *(ushort *)(0x9a + ar4)) {
    puVar4 = (ushort *)(uVar3 * 2 + ar5);
    ar7_00 = (ushort *)((uint)*(ushort *)(iVar1 + ar4) * 2 + ar5);
    puVar8 = (ushort *)(ar6 * uVar3 * 2 + iVar10 + -2);
    while (puVar4 = puVar4 + -1, ar7_00 <= puVar4) {
      *puVar4 = (ushort)*(byte *)(*piVar12 + (uint)*puVar8);
      for (piVar5 = piVar11 + ar6 + -2; puVar8 = puVar8 + -1, piVar11 <= piVar5;
          piVar5 = piVar5 + -1) {
        *puVar4 = (ushort)*(byte *)(*piVar5 + (uint)*puVar8) + *puVar4;
      }
    }
    (*(code *)(&memset))
              (*(int *)(ar4 + 0x2c) + (uint)*(ushort *)(0x9c + ar4),0,
               uVar3 - *(ushort *)(0x9c + ar4),ar7_00);
  }
  else {
    uVar7 = *(ushort *)(iVar1 + ar4) + 1;
    puVar4 = (ushort *)(uVar7 * 2 + *(int *)(ar4 + 0x28));
    if (uVar7 <= uVar3) {
      do {
        uVar6 = (uint)*puVar4;
        puStack_38 = (ushort *)(ar6 * uVar6 * 2 + iVar10);
        puVar8 = (ushort *)(uVar6 * 2 + ar5);
        *puVar8 = (ushort)*(byte *)(*piVar11 + (uint)*puStack_38);
        for (piVar5 = (int *)(ar4 + 0x38); piVar5 <= piVar12; piVar5 = piVar5 + 1) {
          puStack_38 = puStack_38 + 1;
          *puVar8 = (ushort)*(byte *)(*piVar5 + (uint)*puStack_38) + *puVar8;
        }
        uVar7 = uVar7 + 1;
        *(undefined1 *)(*(int *)(ar4 + 0x2c) + uVar6) = 0;
        puVar4 = puVar4 + 1;
      } while ((int)uVar7 <= (int)uVar3);
    }
  }
  iStack_3c = 0;
  puVar4 = *(ushort **)(0xa4 + ar4) + **(ushort **)(0xa4 + ar4);
  if (*(short *)(0x98 + ar4) != 0) {
    do {
      uVar3 = ar6 * 0xff;
      while (puVar4 < (ushort *)
                      ((uint)*(ushort *)(iStack_3c * 2 + *(int *)(0xa4 + ar4) + 2) * 2 +
                      *(int *)(0xa4 + ar4))) {
        if (*puVar4 == *(ushort *)(0xe8 + ar4)) {
          uVar7 = (uint)(ushort)ar7;
        }
        else {
          puVar8 = (ushort *)((uint)*puVar4 * ar6 * 2 + iVar10 + iVar13 * -2);
          uVar7 = (uint)*(byte *)(*piVar11 + (uint)*puVar8);
          for (piVar5 = (int *)(ar4 + 0x38); piVar5 <= piVar12; piVar5 = piVar5 + 1) {
            puVar8 = puVar8 + 1;
            uVar7 = uVar7 + *(byte *)(*piVar5 + (uint)*puVar8);
          }
        }
        puVar4 = puVar4 + 1;
        if (uVar7 < uVar3) {
          uVar3 = uVar7;
        }
      }
      *(short *)(iStack_3c * 2 + iVar9) = (short)uVar3;
      iStack_3c = iStack_3c + 1;
    } while (iStack_3c < (int)(uint)*(ushort *)(0x98 + ar4));
  }
  puVar4 = *(ushort **)(0xa8 + ar4);
  iVar1 = 0xa8 + -0xc;
  puVar4 = puVar4 + *puVar4;
  iVar10 = 0;
  if (*(short *)(iVar1 + ar4) != 0) {
    do {
      iVar1 = (uint)*(ushort *)((uint)*puVar4 * 2 + iVar9) + (int)*psStack_30;
      while( true ) {
        puVar4 = puVar4 + 1;
        psStack_30 = psStack_30 + 1;
        if ((ushort *)
            ((uint)*(ushort *)(iVar10 * 2 + *(int *)(0xa8 + ar4) + 2) * 2 +
            *(int *)(0xa8 + ar4)) <= puVar4) break;
        iVar13 = (uint)*(ushort *)((uint)*puVar4 * 2 + iVar9) + (int)*psStack_30;
        if (iVar13 < iVar1) {
          iVar1 = iVar13;
        }
      }
      if (iVar1 < 1) {
        uVar2 = 0;
      }
      else {
        uVar2 = (undefined2)iVar1;
      }
      *(undefined2 *)(ar5 + iVar10 * 2) = uVar2;
      iVar10 = iVar10 + 1;
      iVar1 = (int)0x9c;
    } while (iVar10 < (int)(uint)*(ushort *)(iVar1 + ar4));
  }
  return iVar1;
}

__asm__(".globl _FUN_8c10d7f4\n.set _FUN_8c10d7f4, _FUN_8c10d7f4_def\n");
