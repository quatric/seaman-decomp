#include "../decls.h"
undefined4 FUN_8c100850_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  if (*(float *)(ar4 + 0x13c) <= 0.5) {
    return 0;
  }
  return 1;
}

__asm__(".globl _FUN_8c100850\n.set _FUN_8c100850, _FUN_8c100850_def\n");
