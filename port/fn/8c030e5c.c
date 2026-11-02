#include "../decls.h"
undefined4 * FUN_8c030e5c_def(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  *ar4 = 0;
  ar4[1] = 0;
  ar4[2] = 0;
  ar4[6] = 0;
  ar4[3] = 0;
  ar4[4] = 3;
  ar4[5] = 0;
  ar4[7] = 0;
  ar4[8] = 0;
  ar4[9] = 0x3f800000;
  *(undefined1 *)(ar4 + 10) = 1;
  return ar4;
}

__asm__(".globl _FUN_8c030e5c\n.set _FUN_8c030e5c, _FUN_8c030e5c_def\n");
