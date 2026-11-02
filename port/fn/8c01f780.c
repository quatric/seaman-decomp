#include "../decls.h"
undefined4 FUN_8c01f780_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  if (*(int *)(ar4 + 0x20) == 0) {
    return 0;
  }
  return 1;
}

__asm__(".globl _FUN_8c01f780\n.set _FUN_8c01f780, _FUN_8c01f780_def\n");
