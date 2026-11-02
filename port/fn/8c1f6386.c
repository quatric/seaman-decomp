#include "../decls.h"
undefined4 FUN_8c1f6386_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  int unaff_r14;
  
  if (unaff_r14 != 0) {
    FUN_8c1f026a(8,unaff_r14,ar6,ar7);
    in_r0 = FUN_8c1f026a(9,0xffffffff,ar6,ar7);
    *(undefined4 *)0x8c4727c0 = unaff_r14;
  }
  return in_r0;
}

__asm__(".globl _FUN_8c1f6386\n.set _FUN_8c1f6386, _FUN_8c1f6386_def\n");
