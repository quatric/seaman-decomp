#include "../decls.h"
undefined4 FUN_8c1f38ca_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int in_r2;
  undefined4 in_r3;
  undefined4 *unaff_r14;
  
  *unaff_r14 = in_r3;
  uVar1 = (**(code **)(in_r2 + 0xc))(ar4,ar5,ar6,ar7,in_r2);
  return uVar1;
}

__asm__(".globl _FUN_8c1f38ca\n.set _FUN_8c1f38ca, _FUN_8c1f38ca_def\n");
