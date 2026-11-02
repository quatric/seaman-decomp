#include "../decls.h"
undefined4 FUN_8c11f14a_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  int in_r0;
  uint uVar4;
  undefined4 uVar5;
  int unaff_r12;
  int unaff_r14;
  
  puVar1 = (&FUN_8c120348);
  *(undefined4 *)(in_r0 + unaff_r14) = ar5;
  puVar3 = (&DATA_8c127c1d);
  puVar2 = (&DATA_8c127c18);
  if (unaff_r12 == 0) {
    *(undefined4 *)(unaff_r14 + 0x60) = *(undefined4 *)(unaff_r14 + 100);
    *(undefined4 *)(0x114 + unaff_r14) = 0;
    if ((*(int *)(0x88 + unaff_r14) == 0) || (*(char *)(0x234 + unaff_r14) != '\0'))
    {
      uVar4 = (*(code *)puVar1)(unaff_r14 + 0x48,0x34,0,0);
    }
    else {
      uVar4 = (*(code *)puVar1)(unaff_r14 + 0x48,0x33,0,0);
    }
  }
  else if (unaff_r12 == 1) {
    *(undefined4 *)(unaff_r14 + 0x60) = *(undefined4 *)(unaff_r14 + 0x68);
    *(undefined **)(0x114 + unaff_r14) = puVar2;
    uVar4 = (*(code *)puVar1)(unaff_r14 + 0x48,0x2b,0,0);
  }
  else {
    if (unaff_r12 != 2) {
      return 0x18;
    }
    *(undefined4 *)(unaff_r14 + 0x60) = *(undefined4 *)(unaff_r14 + 0x6c);
    *(undefined **)(0x114 + unaff_r14) = puVar3;
    uVar4 = (*(code *)puVar1)(unaff_r14 + 0x48,0x2c,0,0);
  }
  if (((uVar4 & 0xff) == 0) &&
     (((*(int *)(0x88 + unaff_r14) == 0 || (unaff_r12 == 0)) ||
      (uVar4 = (*(code *)puVar1)(unaff_r14 + 0x48,2,0,0), (uVar4 & 0xff) == 0)))) {
    *(uint *)(0x110 + unaff_r14) = (uint)*(ushort *)(*(int *)(unaff_r14 + 0x60) + 0xc);
    uVar5 = 0;
  }
  else {
    uVar5 = 1;
  }
  return uVar5;
}

__asm__(".globl _FUN_8c11f14a\n.set _FUN_8c11f14a, _FUN_8c11f14a_def\n");
