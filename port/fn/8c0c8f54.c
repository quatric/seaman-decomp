#include "../decls.h"
undefined4 * FUN_8c0c8f54_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_fr5;
  undefined4 in_fr4;
  
  *(undefined4 *)(ar4 + 0x78) = in_fr4;
  *(undefined4 *)(ar4 + 0x7c) = in_fr5;
  return (undefined4 *)(ar4 + 0x78);
}

__asm__(".globl _FUN_8c0c8f54\n.set _FUN_8c0c8f54, _FUN_8c0c8f54_def\n");
