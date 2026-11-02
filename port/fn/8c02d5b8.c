#include "../decls.h"
undefined4 * FUN_8c02d5b8_def(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  *ar4 = 0xffffffff;
  ar4[1] = 0x13;
  ar4[2] = 0x1b;
  ar4[3] = 2;
  ar4[4] = 0;
  ar4[5] = 0;
  ar4[6] = 0;
  *(undefined2 *)(ar4 + 7) = 0;
  *(undefined2 *)((int)ar4 + 0x1e) = 0;
  ar4[8] = 0;
  return ar4;
}

__asm__(".globl _FUN_8c02d5b8\n.set _FUN_8c02d5b8, _FUN_8c02d5b8_def\n");
