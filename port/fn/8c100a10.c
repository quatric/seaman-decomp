#include "../decls.h"
undefined4 FUN_8c100a10_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  if (0.3 <= *(float *)(ar4 + 0x14c)) {
    return 1;
  }
  return 0;
}

__asm__(".globl _FUN_8c100a10\n.set _FUN_8c100a10, _FUN_8c100a10_def\n");
