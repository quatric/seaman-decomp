#include "../decls.h"
undefined4 * FUN_8c0d25a0_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  *(undefined4 *)(ar4 + 0x1c) = 0x3f800000;
  *(undefined4 *)(ar4 + 0x20) = 0;
  return (undefined4 *)(ar4 + 0x1c);
}

__asm__(".globl _FUN_8c0d25a0\n.set _FUN_8c0d25a0, _FUN_8c0d25a0_def\n");
