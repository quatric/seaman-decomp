#include "../decls.h"
undefined4 FUN_8c20cf88_def(uint *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  if ((*ar4 & 0xffff) == 3) {
    uVar1 = FUN_8c203cd0(ar4);
  }
  else {
    uVar1 = FUN_8c203bda(ar4[7]);
  }
  return uVar1;
}

__asm__(".globl _FUN_8c20cf88\n.set _FUN_8c20cf88, _FUN_8c20cf88_def\n");
