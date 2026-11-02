#include "../decls.h"
undefined4 FUN_8c10c2aa_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 unaff_r13;
  undefined4 *unaff_r14;
  
  iVar1 = FUN_8c11dda2(*unaff_r14,ar5,ar6,ar7);
  if (iVar1 != 0) {
    unaff_r13 = FUN_8c11cd44(*(undefined4 *)unaff_r14[1],*unaff_r14,ar6,ar7);
  }
  return unaff_r13;
}

__asm__(".globl _FUN_8c10c2aa\n.set _FUN_8c10c2aa, _FUN_8c10c2aa_def\n");
