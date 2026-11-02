#include "../decls.h"
int FUN_8c10da96_def(int ar4,int ar5,int ar6,undefined4 ar7)

{
  int iVar1;
  undefined2 uVar2;
  int iVar3;
  ushort *puVar4;
  int *piVar5;
  uint uVar6;
  uint uVar7;
  ushort *puVar8;
  int iVar9;
  uint uVar10;
  int *piVar11;
  int *piVar12;
  int iVar13;
  uint uStack_44;
  ushort *puStack_40;
  short *psStack_2c;
  
  piVar11 = (int *)(ar4 + 0x34);
  iVar3 = *(int *)(0xac + ar4);
  iVar1 = (int)0x88;
  psStack_2c = *(short **)(iVar1 + 0x28 + ar4);
  uStack_44 = (uint)*(ushort *)(iVar1 + 0x14 + ar4);
  uVar10 = (uint)**(ushort **)(ar4 + 0x28);
  iVar13 = *(short *)(iVar1 + 0x18 + ar4) * ar6;
  piVar12 = piVar11 + ar6 + -1;
  iVar1 = **(int **)(iVar1 + ar4) + iVar13 * 2;
  if (uVar10 == *(ushort *)(0x9a + ar4)) {
    puVar4 = (ushort *)(uVar10 * 2 + ar5);
    puVar8 = (ushort *)(ar6 * uVar10 * 2 + iVar1 + -2);
    while (puVar4 = puVar4 + -1, (ushort *)(uStack_44 * 2 + ar5) <= puVar4) {
      *puVar4 = (ushort)*(byte *)(*piVar12 + (uint)(*puVar8 >> 1)) << ((*puVar8 & 1) << 2) & 0xf0;
      for (piVar5 = piVar11 + ar6 + -2; puVar8 = puVar8 + -1, piVar11 <= piVar5;
          piVar5 = piVar5 + -1) {
        *puVar4 = ((ushort)*(byte *)(*piVar5 + (uint)(*puVar8 >> 1)) << ((*puVar8 & 1) << 2) & 0xf0)
                  + *puVar4;
      }
    }
    (*(code *)(&memset))
              (*(int *)(ar4 + 0x2c) + (uint)*(ushort *)(0x9c + ar4),0,
               uVar10 - *(ushort *)(0x9c + ar4),puVar8);
  }
  else {
    uStack_44 = uStack_44 + 1;
    puStack_40 = (ushort *)(uStack_44 * 2 + *(int *)(ar4 + 0x28));
    if (uStack_44 <= uVar10) {
      do {
        uVar6 = (uint)*puStack_40;
        puVar4 = (ushort *)(ar6 * uVar6 * 2 + iVar1);
        puVar8 = (ushort *)(uVar6 * 2 + ar5);
        *puVar8 = (ushort)*(byte *)((uint)(*puVar4 >> 1) + *piVar11) << ((*puVar4 & 1) << 2) & 0xf0;
        for (piVar5 = (int *)(ar4 + 0x38); piVar5 <= piVar12; piVar5 = piVar5 + 1) {
          puVar4 = puVar4 + 1;
          *puVar8 = ((ushort)*(byte *)((uint)(*puVar4 >> 1) + *piVar5) << ((*puVar4 & 1) << 2) &
                    0xf0) + *puVar8;
        }
        *(undefined1 *)(*(int *)(ar4 + 0x2c) + uVar6) = 0;
        uStack_44 = uStack_44 + 1;
        puStack_40 = puStack_40 + 1;
      } while ((int)uStack_44 <= (int)uVar10);
    }
  }
  uVar10 = (uint)0xf0;
  uStack_44 = 0;
  puVar4 = *(ushort **)(0xa4 + ar4) + **(ushort **)(0xa4 + ar4);
  if (*(short *)((uVar10 - 0x58) + ar4) != 0) {
    do {
      uVar6 = ar6 * 0xff;
      while (puVar4 < (ushort *)
                      ((uint)*(ushort *)(uStack_44 * 2 + *(int *)(0xa4 + ar4) + 2) * 2 +
                      *(int *)(0xa4 + ar4))) {
        if (*puVar4 == *(ushort *)(0xe8 + ar4)) {
          uVar7 = (uint)(ushort)ar7;
        }
        else {
          puVar8 = (ushort *)((uint)*puVar4 * ar6 * 2 + iVar1 + iVar13 * -2);
          uVar7 = (uint)*(byte *)(*piVar11 + (uint)(*puVar8 >> 1)) << ((*puVar8 & 1) << 2) & uVar10;
          for (piVar5 = (int *)(ar4 + 0x38); piVar5 <= piVar12; piVar5 = piVar5 + 1) {
            puVar8 = puVar8 + 1;
            uVar7 = uVar7 + ((uint)*(byte *)(*piVar5 + (uint)(*puVar8 >> 1)) << ((*puVar8 & 1) << 2)
                            & uVar10);
          }
        }
        puVar4 = puVar4 + 1;
        if (uVar7 < uVar6) {
          uVar6 = uVar7;
        }
      }
      *(short *)(iVar3 + uStack_44 * 2) = (short)uVar6;
      uStack_44 = uStack_44 + 1;
    } while ((int)uStack_44 < (int)(uint)*(ushort *)(0x98 + ar4));
  }
  puVar4 = *(ushort **)(0xa8 + ar4);
  iVar1 = 0xa8 + -0xc;
  puVar4 = puVar4 + *puVar4;
  iVar13 = 0;
  if (*(short *)(iVar1 + ar4) != 0) {
    do {
      iVar1 = (uint)*(ushort *)(iVar3 + (uint)*puVar4 * 2) + (int)*psStack_2c;
      while( true ) {
        puVar4 = puVar4 + 1;
        psStack_2c = psStack_2c + 1;
        if ((ushort *)
            ((uint)*(ushort *)(iVar13 * 2 + *(int *)(0xa8 + ar4) + 2) * 2 +
            *(int *)(0xa8 + ar4)) <= puVar4) break;
        iVar9 = (uint)*(ushort *)(iVar3 + (uint)*puVar4 * 2) + (int)*psStack_2c;
        if (iVar9 < iVar1) {
          iVar1 = iVar9;
        }
      }
      if (iVar1 < 1) {
        uVar2 = 0;
      }
      else {
        uVar2 = (undefined2)iVar1;
      }
      *(undefined2 *)(ar5 + iVar13 * 2) = uVar2;
      iVar13 = iVar13 + 1;
      iVar1 = (int)0x9c;
    } while (iVar13 < (int)(uint)*(ushort *)(iVar1 + ar4));
  }
  return iVar1;
}

__asm__(".globl _FUN_8c10da96\n.set _FUN_8c10da96, _FUN_8c10da96_def\n");
