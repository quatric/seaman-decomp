#include "../decls.h"
undefined4 FUN_8c036050_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  *(short *)(ar4 + 4) = (short)ar5;
  return ar5;
}

__asm__(".globl _FUN_8c036050\n.set _FUN_8c036050, _FUN_8c036050_def\n");
