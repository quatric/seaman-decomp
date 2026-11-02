#include "../decls.h"
undefined4 FUN_8c023cd4_def(float *ar4,float *ar5,undefined4 ar6,undefined4 ar7)

{
  if (((*ar4 == *ar5) && (ar4[1] == ar5[1])) && (ar4[2] == ar5[2])) {
    return 1;
  }
  return 0;
}

__asm__(".globl _FUN_8c023cd4\n.set _FUN_8c023cd4, _FUN_8c023cd4_def\n");
