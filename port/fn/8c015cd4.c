#include "../decls.h"
undefined4 FUN_8c015cd4_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  
  *(undefined4 *)(ar4 + 0x20) = ar5;
  return in_r0;
}

__asm__(".globl _FUN_8c015cd4\n.set _FUN_8c015cd4, _FUN_8c015cd4_def\n");
