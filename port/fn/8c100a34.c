#include "../decls.h"
undefined4 FUN_8c100a34_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  if (*(float *)(ar4 + 0x14c) <= -0.3) {
    return 1;
  }
  return 0;
}

__asm__(".globl _FUN_8c100a34\n.set _FUN_8c100a34, _FUN_8c100a34_def\n");
