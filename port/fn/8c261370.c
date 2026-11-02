#include "../decls.h"
undefined4 FUN_8c261370_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  int *unaff_r14;
  
  if (*unaff_r14 == 0) {
    in_r0 = memset(0x8c4b39a0,0,(int)0x180,ar7);
  }
  *unaff_r14 = *unaff_r14 + 1;
  return in_r0;
}

__asm__(".globl _FUN_8c261370\n.set _FUN_8c261370, _FUN_8c261370_def\n");
