#include "../decls.h"
undefined4 FUN_8c0c5330_def(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  *ar4 = 0;
  ar4[1] = 3;
  ar4[2] = 0xffffffff;
  return 0xffffffff;
}

__asm__(".globl _FUN_8c0c5330\n.set _FUN_8c0c5330, _FUN_8c0c5330_def\n");
