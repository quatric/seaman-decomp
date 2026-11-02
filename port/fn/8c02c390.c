#include "../decls.h"
undefined4 FUN_8c02c390_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  *(undefined1 *)(ar4 + 0x4c) = (undefined1)ar5;
  return 0x4c;
}

__asm__(".globl _FUN_8c02c390\n.set _FUN_8c02c390, _FUN_8c02c390_def\n");
