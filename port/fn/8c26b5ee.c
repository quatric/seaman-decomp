#include "../decls.h"
undefined4 FUN_8c26b5ee_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  
  *(undefined4 *)(ar4 + 0xc) = 0;
  *(undefined4 *)(ar4 + 0x10) = *(undefined4 *)(ar4 + 0x20);
  *(undefined4 *)(ar4 + 0x14) = 0;
  *(undefined4 *)(ar4 + 0x18) = 0;
  return in_r0;
}

__asm__(".globl _FUN_8c26b5ee\n.set _FUN_8c26b5ee, _FUN_8c26b5ee_def\n");
