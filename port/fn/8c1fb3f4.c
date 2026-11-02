#include "../decls.h"
undefined4 FUN_8c1fb3f4_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int *piVar1;
  undefined4 uVar2;
  uint *in_r1;
  undefined4 *in_r2;
  undefined4 *in_r3;
  int iVar3;
  uint unaff_r14;
  
  *in_r3 = ar4;
  *in_r2 = ar4;
  piVar1 = 0x8c475f04;
  iVar3 = 0x8c475ee4;
  *in_r1 = unaff_r14;
  *piVar1 = iVar3;
  *(int *)iVar3 = iVar3;
  *(undefined4 *)(iVar3 + 4) = 0;
  FUN_8c1fb426(0,ar5,ar6,ar7);
  iVar3 = *(undefined4 *)0x8c475f08;
  *(uint *)(iVar3 + 4) = unaff_r14 >> 5;
  uVar2 = FUN_8c1fb586(iVar3 + 0x20,ar5,ar6,ar7);
  return uVar2;
}

__asm__(".globl _FUN_8c1fb3f4\n.set _FUN_8c1fb3f4, _FUN_8c1fb3f4_def\n");
