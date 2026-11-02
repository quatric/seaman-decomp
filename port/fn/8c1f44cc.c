#include "../decls.h"
undefined4 FUN_8c1f44cc_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined *puVar1;
  undefined *puVar2;
  int *piVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 a4;
  int iVar6;
  
  puVar1 = (&sh4_tmu_1f88e6);
  uVar4 = sh4_tmu_1f88e6(ar4,ar5,ar6,ar7);
  piVar3 = 0x8c4727b4;
  puVar2 = (&FUN_8c1f88f0);
  iVar5 = 0x186a0;
  do {
    if ((*(uint *)(*(int *)((int)0x10f4 + *piVar3) + 0x18) & 1) == 0) break;
    ar5 = (*(code *)puVar1)(ar4,ar5,ar6,ar7);
    ar4 = uVar4;
    iVar6 = (*(code *)puVar2)(uVar4,ar5,ar6,ar7);
  } while (iVar6 <= iVar5);
  iVar5 = (int)0x10f4;
  uVar4 = 0;
  *(undefined4 *)(*(int *)(iVar5 + *piVar3) + 0x18) = 0;
  *(undefined4 *)(*(int *)(iVar5 + *piVar3) + 0x14) = 0;
  *(undefined4 *)(*(int *)(iVar5 + *piVar3) + 0x10) = 0;
  *(undefined4 *)((int)0x8c + *(int *)(iVar5 + *piVar3)) = 0x6155404f;
  *(undefined4 *)((int)0x80 + *(int *)((int)0x10f4 + *piVar3)) = 0xc3500000;
  *(undefined4 *)(*(int *)((int)0x10f4 + *piVar3) + 4) = 0xcff0000;
  a4 = (*(code *)puVar1)(0,ar5,ar6,ar7);
  iVar5 = (int)0x4268;
  do {
    if ((*(uint *)(*(int *)((int)0x10f4 + *piVar3) + 0x18) & 1) == 0) {
      return 0;
    }
    ar5 = (*(code *)puVar1)(uVar4,ar5,ar6,ar7);
    uVar4 = a4;
    iVar6 = (*(code *)puVar2)(a4,ar5,ar6,ar7);
  } while (iVar6 <= iVar5);
  return 0;
}

__asm__(".globl _FUN_8c1f44cc\n.set _FUN_8c1f44cc, _FUN_8c1f44cc_def\n");
