#include "../decls.h"
undefined4 FUN_8c01f398_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  if (*(int *)(0xa540 + ar4) == 0) {
    return 0;
  }
  return 1;
}

__asm__(".globl _FUN_8c01f398\n.set _FUN_8c01f398, _FUN_8c01f398_def\n");
