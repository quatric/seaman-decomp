#include "../decls.h"
undefined4 FUN_8c100808_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  if (-0.5 <= *(float *)(ar4 + 0x140)) {
    return 0;
  }
  return 1;
}

__asm__(".globl _FUN_8c100808\n.set _FUN_8c100808, _FUN_8c100808_def\n");
