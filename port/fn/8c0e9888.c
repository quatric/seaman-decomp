#include "../decls.h"
undefined4 FUN_8c0e9888_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  *(undefined1 *)(ar4 + 0x3c) = (undefined1)ar5;
  return 0x3c;
}

__asm__(".globl _FUN_8c0e9888\n.set _FUN_8c0e9888, _FUN_8c0e9888_def\n");
