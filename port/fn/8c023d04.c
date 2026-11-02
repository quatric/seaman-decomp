#include "../decls.h"
undefined4 FUN_8c023d04_def(float *ar4,float *ar5,undefined4 ar6,undefined4 ar7)

{
  if (((*ar4 == *ar5) && (ar4[1] == ar5[1])) && (ar4[2] == ar5[2])) {
    return 0;
  }
  return 1;
}

__asm__(".globl _FUN_8c023d04\n.set _FUN_8c023d04, _FUN_8c023d04_def\n");
