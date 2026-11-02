#include "../decls.h"
undefined4 * FUN_8c0f3df8_def(undefined4 *ar4,undefined4 *ar5,undefined4 ar6,undefined4 ar7)

{
  *ar4 = *ar5;
  ar4[1] = ar5[1];
  ar4[2] = ar5[2];
  ar4[3] = ar5[3];
  ar4[4] = ar5[4];
  return ar4;
}

__asm__(".globl _FUN_8c0f3df8\n.set _FUN_8c0f3df8, _FUN_8c0f3df8_def\n");
