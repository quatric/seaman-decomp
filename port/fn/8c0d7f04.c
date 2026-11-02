#include "../decls.h"
undefined4 FUN_8c0d7f04_def(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  *ar4 = 1;
  ar4[2] = ar5;
  ar4[1] = 0;
  ar4[5] = 0;
  return 0;
}

__asm__(".globl _FUN_8c0d7f04\n.set _FUN_8c0d7f04, _FUN_8c0d7f04_def\n");
