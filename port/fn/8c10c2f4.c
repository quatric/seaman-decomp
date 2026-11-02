#include "../decls.h"
undefined4 FUN_8c10c2f4_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 *unaff_r13;
  undefined4 uVar2;
  
  uVar2 = 0;
  iVar1 = FUN_8c11daa4(*unaff_r13,ar5,ar6,ar7);
  if (iVar1 != 0) {
    uVar2 = FUN_8c11cd44(*(undefined4 *)unaff_r13[1],*unaff_r13,ar6,ar7);
  }
  return uVar2;
}

__asm__(".globl _FUN_8c10c2f4\n.set _FUN_8c10c2f4, _FUN_8c10c2f4_def\n");
