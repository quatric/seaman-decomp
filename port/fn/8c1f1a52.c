#include "../decls.h"
undefined4 FUN_8c1f1a52_def(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  
  if ((ar4 != (int *)0x0) && (1 < *ar4)) {
    ar4[0xf] = ar4[4];
  }
  return in_r0;
}

__asm__(".globl _FUN_8c1f1a52\n.set _FUN_8c1f1a52, _FUN_8c1f1a52_def\n");
