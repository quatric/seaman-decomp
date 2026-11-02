#include "../decls.h"
undefined4 FUN_8c20cf8c_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  uint *unaff_r14;
  
  if ((*unaff_r14 & 0xffff) == 3) {
    uVar1 = FUN_8c203cd0(unaff_r14,ar5,ar6,ar7);
  }
  else {
    uVar1 = FUN_8c203bda(unaff_r14[7],ar5,ar6,ar7);
  }
  return uVar1;
}

__asm__(".globl _FUN_8c20cf8c\n.set _FUN_8c20cf8c, _FUN_8c20cf8c_def\n");
