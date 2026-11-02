#include "../decls.h"
undefined4 FUN_8c0c4dc8_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  
  *(undefined4 *)(ar4 + 0x2c) = ar5;
  return in_r0;
}

__asm__(".globl _FUN_8c0c4dc8\n.set _FUN_8c0c4dc8, _FUN_8c0c4dc8_def\n");
