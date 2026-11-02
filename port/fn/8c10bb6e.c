#include "../decls.h"
undefined4 FUN_8c10bb6e_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 *unaff_r13;
  undefined4 unaff_r14;
  
  iVar1 = FUN_8c11e146(*unaff_r13,ar5,ar6,ar7);
  if (iVar1 != 0) {
    unaff_r14 = FUN_8c11cd44(*(undefined4 *)unaff_r13[1],*unaff_r13,ar6,ar7);
  }
  return unaff_r14;
}

__asm__(".globl _FUN_8c10bb6e\n.set _FUN_8c10bb6e, _FUN_8c10bb6e_def\n");
