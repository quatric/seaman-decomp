#include "../decls.h"
undefined4 FUN_8c05ee64_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  
  *(undefined4 *)(ar4 + 0x18) = ar5;
  return in_r0;
}

__asm__(".globl _FUN_8c05ee64\n.set _FUN_8c05ee64, _FUN_8c05ee64_def\n");
