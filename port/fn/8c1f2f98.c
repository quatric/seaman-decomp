#include "../decls.h"
undefined4 FUN_8c1f2f98_def(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined *puVar1;
  undefined *puVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  code *pcVar8;
  
  puVar1 = (&sh4_tmu_1f88e6);
  pcVar8 = FUN_8c1f302a;
  iVar7 = ar4[6];
  uVar4 = sh4_tmu_1f88e6(FUN_8c1f302a);
  uVar3 = 0xee6b28;
  puVar2 = (&FUN_8c1f88f0);
  do {
    (**(code **)(*(int *)(*ar4 + 0x3c) + 0x48))();
    iVar5 = FUN_8c1f364c(ar4,ar5,ar6,ar7);
    if (iVar5 == 0) {
      return 0xffffffe0;
    }
    if (iVar5 == 1) {
      return 0;
    }
    if (((iVar5 != 2) && (iVar5 != 3)) && (iVar5 != 4)) {
      if ((iVar5 != 5) && (iVar5 != 0x40)) {
        return 0xffffffe7;
      }
      return (int)*(short *)((int)ar4 + 0x52);
    }
    if (iVar7 != ar4[6]) {
      uVar4 = (*(code *)puVar1)(iVar5,pcVar8);
      iVar7 = ar4[6];
    }
    ar5 = (*(code *)puVar1)();
    uVar6 = (*(code *)puVar2)(uVar4);
  } while (uVar6 <= uVar3);
  return 0xffffffeb;
}

__asm__(".globl _FUN_8c1f2f98\n.set _FUN_8c1f2f98, _FUN_8c1f2f98_def\n");
