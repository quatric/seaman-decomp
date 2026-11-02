#include "../decls.h"
undefined4 * FUN_8c102800_def(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  *ar4 = 0x3f800000;
  ar4[1] = 0x3f800000;
  ar4[2] = 0x3f800000;
  ar4[3] = 0x3f800000;
  return ar4;
}

__asm__(".globl _FUN_8c102800\n.set _FUN_8c102800, _FUN_8c102800_def\n");
