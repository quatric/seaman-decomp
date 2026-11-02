#include "../decls.h"
undefined4 FUN_8c027264_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  
  *(undefined4 *)(ar4 + 0x14) = ar5;
  *(undefined4 *)(ar4 + 0x10) = ar6;
  *(undefined4 *)(ar4 + 0x18) = ar7;
  return in_r0;
}

__asm__(".globl _FUN_8c027264\n.set _FUN_8c027264, _FUN_8c027264_def\n");
