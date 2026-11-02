#include "../decls.h"
undefined4 FUN_8c1f2f9c_def(uint ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined *puVar1;
  undefined *puVar2;
  uint uVar3;
  undefined4 a4;
  int a4_00;
  int iVar4;
  int *unaff_r14;
  
  puVar1 = (&sh4_tmu_1f88e6);
  iVar4 = unaff_r14[6];
  a4 = sh4_tmu_1f88e6(ar4,ar5,ar6,ar7);
  uVar3 = 0xee6b28;
  puVar2 = (&FUN_8c1f88f0);
  do {
    (**(code **)(*(int *)(*unaff_r14 + 0x3c) + 0x48))(ar4,ar5,ar6,ar7);
    a4_00 = FUN_8c1f364c(unaff_r14,ar5,ar6,ar7);
    if (a4_00 == 0) {
      return 0xffffffe0;
    }
    if (a4_00 == 1) {
      return 0;
    }
    if (((a4_00 != 2) && (a4_00 != 3)) && (a4_00 != 4)) {
      if ((a4_00 != 5) && (a4_00 != 0x40)) {
        return 0xffffffe7;
      }
      return (int)*(short *)((int)unaff_r14 + 0x52);
    }
    if (iVar4 != unaff_r14[6]) {
      a4 = (*(code *)puVar1)(a4_00,ar5,ar6,ar7);
      iVar4 = unaff_r14[6];
    }
    ar5 = (*(code *)puVar1)(a4_00,ar5,ar6,ar7);
    ar4 = (*(code *)puVar2)(a4,ar5,ar6,ar7);
  } while (ar4 <= uVar3);
  return 0xffffffeb;
}

__asm__(".globl _FUN_8c1f2f9c\n.set _FUN_8c1f2f9c, _FUN_8c1f2f9c_def\n");
