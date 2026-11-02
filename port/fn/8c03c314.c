#include "../decls.h"
undefined4 FUN_8c03c314_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_fr4;
  
  *(undefined4 *)(ar4 + 0xa4) = 1;
  *(undefined4 *)(ar4 + 0x94) = in_fr4;
  return 0x94;
}

__asm__(".globl _FUN_8c03c314\n.set _FUN_8c03c314, _FUN_8c03c314_def\n");
