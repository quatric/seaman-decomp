#include "../decls.h"
undefined4 FUN_8c035e84_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  *(undefined1 *)(ar4 + 0x3a) = (undefined1)ar5;
  return 0x3a;
}

__asm__(".globl _FUN_8c035e84\n.set _FUN_8c035e84, _FUN_8c035e84_def\n");
