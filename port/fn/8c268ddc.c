#include "../decls.h"
undefined4 FUN_8c268ddc_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7,int s0)

{
  if (s0 < 1) {
    return 0;
  }
  (**(code **)(**(int **)(ar4 + 0x38) + 0x4c))(*(int **)(ar4 + 0x38),ar5,ar6,ar7);
  *(undefined4 *)(ar4 + 0x5c) = 1;
  return s0;
}

__asm__(".globl _FUN_8c268ddc\n.set _FUN_8c268ddc, _FUN_8c268ddc_def\n");
