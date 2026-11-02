#include "../decls.h"
undefined4 FUN_8c221734_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 *in_r1;
  int in_r3;
  int *unaff_r13;
  int iVar2;
  
  iVar2 = *unaff_r13;
  unaff_r13[1] = iVar2;
  unaff_r13[2] = iVar2 + 0xc;
  unaff_r13[5] = in_r3;
  uVar1 = (*(code *)*in_r1)(ar4,ar5,ar6,ar7);
  *unaff_r13 = iVar2 + 0x18;
  return uVar1;
}

__asm__(".globl _FUN_8c221734\n.set _FUN_8c221734, _FUN_8c221734_def\n");
