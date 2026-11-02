#include "../decls.h"
undefined4 * FUN_8c02145c_def(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  *ar4 = 0;
  ar4[1] = 0xffffffff;
  ar4[2] = 0;
  ar4[3] = 0;
  ar4[4] = 0;
  ar4[5] = 0;
  return ar4;
}

__asm__(".globl _FUN_8c02145c\n.set _FUN_8c02145c, _FUN_8c02145c_def\n");
