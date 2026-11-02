#include "../decls.h"
undefined4 FUN_8c26b2da_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  
  *(undefined4 *)(ar4 + 0xc) = *(undefined4 *)(ar4 + 0x18);
  *(undefined4 *)(ar4 + 0x10) = 0;
  return in_r0;
}

__asm__(".globl _FUN_8c26b2da\n.set _FUN_8c26b2da, _FUN_8c26b2da_def\n");
