#include "../decls.h"
int FUN_8c113ac8_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int *piVar6;
  uint *puVar7;
  uint uVar8;
  uint *puVar9;
  uint *puVar10;
  uint *puVar11;
  uint uVar12;
  
  iVar1 = (int)0x9c;
  uVar8 = 0;
  uVar5 = (uint)0x80;
  puVar11 = *(uint **)(iVar1 + ar4);
  piVar6 = *(int **)(iVar1 + -4 + ar4);
  iVar1 = iVar1 + -0xc;
  puVar9 = *(uint **)(iVar1 + ar4);
  puVar10 = puVar9;
  if (*(int *)(ar4 + 0x38) != 0) {
    do {
      *piVar6 = (int)puVar11;
      piVar6 = piVar6 + 1;
      uVar4 = *puVar10;
      puVar10 = puVar10 + 1;
      uVar12 = *puVar10;
      puVar7 = puVar9 + uVar4;
joined_r0x8c113afe:
      if (uVar4 < uVar12) {
        uVar3 = *puVar7;
        puVar7 = puVar7 + 1;
        iVar1 = *(int *)(0xc0 + ar4);
        uVar4 = uVar4 + 1;
        if ((*(ushort *)(iVar1 + uVar3 * 2) & uVar5) != 0) goto code_r0x8c113b16;
        goto LAB_8c113b32;
      }
      uVar8 = uVar8 + 1;
    } while (uVar8 < *(uint *)(ar4 + 0x38));
  }
  *piVar6 = (int)puVar11;
  return iVar1;
code_r0x8c113b16:
  iVar1 = *(int *)(0x94 + ar4);
  uVar2 = -(uVar3 & 7);
  if ((int)uVar2 < 0) {
    uVar2 = (int)uVar5 >> (~uVar2 & 0x1f) + 1;
  }
  else {
    uVar2 = uVar5 << (uVar2 & 0x1f);
  }
  if ((*(byte *)(iVar1 + (uVar3 >> 3)) & uVar2) != 0) {
LAB_8c113b32:
    *puVar11 = uVar3;
    puVar11 = puVar11 + 1;
  }
  goto joined_r0x8c113afe;
}

__asm__(".globl _FUN_8c113ac8\n.set _FUN_8c113ac8, _FUN_8c113ac8_def\n");
