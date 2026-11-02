#include "../decls.h"
undefined4 FUN_8c02cb94_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  
  *(undefined4 *)(ar4 + 0x34) = ar5;
  return in_r0;
}

__asm__(".globl _FUN_8c02cb94\n.set _FUN_8c02cb94, _FUN_8c02cb94_def\n");
