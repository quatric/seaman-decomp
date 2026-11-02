#include "../decls.h"
undefined4 * FUN_8c03f460_def(undefined4 *ar4,undefined4 *ar5,undefined4 ar6,undefined4 ar7)

{
  *ar4 = *ar5;
  ar4[1] = ar5[1];
  ar4[2] = ar5[2];
  return ar4;
}

__asm__(".globl _FUN_8c03f460\n.set _FUN_8c03f460, _FUN_8c03f460_def\n");
