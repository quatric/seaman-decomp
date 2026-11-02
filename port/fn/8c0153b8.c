#include "../decls.h"
undefined4 * FUN_8c0153b8_def(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  FUN_8c015224(ar4,ar5,ar6,ar7);
  *ar4 = (&DATA_8c129908);
  ar4[1] = ar4 + 2;
  return ar4;
}

__asm__(".globl _FUN_8c0153b8\n.set _FUN_8c0153b8, _FUN_8c0153b8_def\n");
