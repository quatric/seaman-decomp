#include "../decls.h"
int FUN_8c120e12_def(int ar4,int ar5,int ar6,undefined4 ar7)

{
  uint uVar1;
  int iVar2;
  short *psVar3;
  ushort *puVar4;
  int iVar5;
  ushort *puVar6;
  int iVar7;
  int iVar8;
  byte *pbVar9;
  uint uVar10;
  uint uVar11;
  int *piVar12;
  ushort uStack_28;
  
  piVar12 = *(int **)(0x284 + ar4);
  uVar11 = (uint)*(ushort *)(0x284 + 4 + ar4);
  uVar1 = (**(code **)(*(int *)(0x108 + ar4) + 8))(*(int *)(0x108 + ar4),ar5,ar6,ar7);
  uStack_28 = 0;
  iVar2 = *(int *)(0x2b0 + ar4);
  puVar4 = *(ushort **)(iVar2 + (ar6 * 3 + ar5) * 4);
  for (; piVar12 != (int *)0x0; piVar12 = (int *)piVar12[4]) {
    iVar5 = *piVar12;
    uVar10 = 0;
    iVar7 = 0;
    iVar2 = piVar12[2];
    iVar8 = *puVar4 - 1;
    pbVar9 = (byte *)(*(int *)(0x118 + ar4 + ar5 * 4) + (uVar1 & 0xffff) * iVar8 +
                     (uint)uStack_28);
    puVar6 = puVar4;
    if (uVar11 != 0) {
      do {
        puVar6 = puVar6 + 1;
        if ((int)(uint)*puVar6 <= iVar8) {
          do {
            iVar8 = iVar8 + -1;
            psVar3 = (short *)(*pbVar9 * uVar11 * 2 + iVar7 + iVar5);
            *psVar3 = *psVar3 + 0x32;
            *(short *)(iVar2 + iVar7) = *(short *)(iVar2 + iVar7) + 0x32;
            pbVar9 = pbVar9 + -(uVar1 & 0xffff);
          } while ((int)(uint)*puVar6 <= iVar8);
        }
        uVar10 = uVar10 + 1;
        iVar7 = iVar7 + 2;
      } while (uVar10 < uVar11);
    }
    iVar2 = (short)uStack_28 + 1;
    uStack_28 = (ushort)iVar2;
  }
  return iVar2;
}

__asm__(".globl _FUN_8c120e12\n.set _FUN_8c120e12, _FUN_8c120e12_def\n");
