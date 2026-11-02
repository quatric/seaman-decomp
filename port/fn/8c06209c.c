#include "../decls.h"
undefined4 FUN_8c06209c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  *(char *)(ar4 + 4) = (char)ar5;
  return ar5;
}

__asm__(".globl _FUN_8c06209c\n.set _FUN_8c06209c, _FUN_8c06209c_def\n");
