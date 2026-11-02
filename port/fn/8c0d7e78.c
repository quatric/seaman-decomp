#include "../decls.h"
undefined4 FUN_8c0d7e78_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  
  *(undefined4 *)(ar4 + 0xc) = ar5;
  *(undefined4 *)(ar4 + 0x10) = ar6;
  return in_r0;
}

__asm__(".globl _FUN_8c0d7e78\n.set _FUN_8c0d7e78, _FUN_8c0d7e78_def\n");
