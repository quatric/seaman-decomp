#include "../decls.h"
undefined4 * FUN_8c0d2f04_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_fr5;
  undefined4 in_fr4;
  
  *(undefined4 *)(ar4 + 0x10) = in_fr4;
  *(undefined4 *)(ar4 + 0x14) = in_fr5;
  return (undefined4 *)(ar4 + 0x10);
}

__asm__(".globl _FUN_8c0d2f04\n.set _FUN_8c0d2f04, _FUN_8c0d2f04_def\n");
