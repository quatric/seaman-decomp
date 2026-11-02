#include "../decls.h"
undefined4 * FUN_8c0d7688_def(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  FUN_8c0d761c(ar4 + 3,ar5,ar6,ar7);
  *ar4 = 0;
  ar4[1] = 0;
  ar4[9] = 0;
  ar4[2] = 0;
  return ar4;
}

__asm__(".globl _FUN_8c0d7688\n.set _FUN_8c0d7688, _FUN_8c0d7688_def\n");
