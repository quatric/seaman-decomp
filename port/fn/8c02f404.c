#include "../decls.h"
undefined4 FUN_8c02f404_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  
  *(undefined4 *)(ar4 + 0x38) = ar5;
  return in_r0;
}

__asm__(".globl _FUN_8c02f404\n.set _FUN_8c02f404, _FUN_8c02f404_def\n");
