#include "../decls.h"
undefined4 FUN_8c0d7ca0_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  *(undefined4 *)(ar4 + 0x2c) = 1;
  return 1;
}

__asm__(".globl _FUN_8c0d7ca0\n.set _FUN_8c0d7ca0, _FUN_8c0d7ca0_def\n");
