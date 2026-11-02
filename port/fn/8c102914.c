#include "../decls.h"
undefined4 FUN_8c102914_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  *(undefined4 *)(ar4 + 4) = ar5;
  return *(undefined4 *)(ar4 + 8);
}

__asm__(".globl _FUN_8c102914\n.set _FUN_8c102914, _FUN_8c102914_def\n");
