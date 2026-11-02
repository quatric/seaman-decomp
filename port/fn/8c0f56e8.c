#include "../decls.h"
undefined4 FUN_8c0f56e8_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  *(float *)(ar4 + 0x34) = *(float *)(ar4 + 0x34) - 0.1;
  if (*(float *)(ar4 + 0x34) <= -100.0) {
    *(uint *)(ar4 + 0x74) = *(uint *)(ar4 + 0x74) & 0x7fffffff;
  }
  return 1;
}

__asm__(".globl _FUN_8c0f56e8\n.set _FUN_8c0f56e8, _FUN_8c0f56e8_def\n");
