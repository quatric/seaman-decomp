#include "../decls.h"
int FUN_8c236454_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int *piVar1;
  undefined4 *puVar2;
  int *piVar3;
  uint *puVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  
  puVar4 = 0x8c4aa4f0;
  puVar2 = 0x8c4ab238;
  piVar1 = 0x8c4aabbc;
  iVar5 = (int)0x90;
  *(undefined4 *)0x8c4ab238 = *(undefined4 *)(iVar5 + *(undefined4 *)0x8c4aabbc);
  puVar2[1] = *(undefined4 *)(iVar5 + 4 + *piVar1);
  iVar6 = iVar5 + 0xc;
  puVar2[2] = *(undefined4 *)(iVar5 + 8 + *piVar1);
  piVar3 = 0x8c4aabdc;
  puVar2[3] = *(undefined4 *)(iVar6 + *piVar1);
  puVar2[4] = *(undefined4 *)*piVar3;
  puVar2[7] = *(undefined4 *)(*piVar3 + 4);
  uVar7 = (uint)0x4000;
  puVar2[8] = *(undefined4 *)(*piVar3 + 0xc);
  if ((*puVar4 & uVar7) == 0) {
    iVar6 = *(int *)(*piVar3 + 8);
    puVar2[5] = iVar6;
    puVar2[6] = *(undefined4 *)(*piVar3 + 0x10);
  }
  else {
    puVar2[5] = *(undefined4 *)(*piVar3 + 0x10);
    puVar2[6] = *(undefined4 *)(*piVar3 + 8);
  }
  return iVar6;
}

__asm__(".globl _FUN_8c236454\n.set _FUN_8c236454, _FUN_8c236454_def\n");
