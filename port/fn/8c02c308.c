#include "../decls.h"
undefined4 FUN_8c02c308_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  *(char *)(ar4 + 3) = (char)ar5;
  return ar5;
}

__asm__(".globl _FUN_8c02c308\n.set _FUN_8c02c308, _FUN_8c02c308_def\n");
