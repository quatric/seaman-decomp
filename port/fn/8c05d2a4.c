#include "../decls.h"
undefined4 FUN_8c05d2a4_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  if (0 < *(int *)(0x31c + ar4)) {
    return 1;
  }
  return 0;
}

__asm__(".globl _FUN_8c05d2a4\n.set _FUN_8c05d2a4, _FUN_8c05d2a4_def\n");
