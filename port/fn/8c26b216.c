#include "../decls.h"
undefined4 FUN_8c26b216_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  int *unaff_r14;
  
  if (*unaff_r14 == 0) {
    in_r0 = memset(0x8c4bf038,0,(int)0x480,ar7);
  }
  *unaff_r14 = *unaff_r14 + 1;
  return in_r0;
}

__asm__(".globl _FUN_8c26b216\n.set _FUN_8c26b216, _FUN_8c26b216_def\n");
