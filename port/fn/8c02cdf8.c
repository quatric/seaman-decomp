#include "../decls.h"
undefined4 FUN_8c02cdf8_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  *(char *)(ar4 + 9) = (char)ar5;
  return ar5;
}

__asm__(".globl _FUN_8c02cdf8\n.set _FUN_8c02cdf8, _FUN_8c02cdf8_def\n");
