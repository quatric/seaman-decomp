#include "../decls.h"
undefined4 FUN_8c0e0bd0_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  if (*(float *)(ar4 + 0x10) <= 0.0) {
    return 0;
  }
  return 1;
}

__asm__(".globl _FUN_8c0e0bd0\n.set _FUN_8c0e0bd0, _FUN_8c0e0bd0_def\n");
