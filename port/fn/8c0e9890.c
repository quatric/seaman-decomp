#include "../decls.h"
undefined4 FUN_8c0e9890_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  *(undefined1 *)(ar4 + 0x39) = (undefined1)ar5;
  return 0x39;
}

__asm__(".globl _FUN_8c0e9890\n.set _FUN_8c0e9890, _FUN_8c0e9890_def\n");
