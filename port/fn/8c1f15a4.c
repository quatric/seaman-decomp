#include "../decls.h"
int FUN_8c1f15a4_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return (((int)0xf0 & (int)(char)ar4) >> 4) * 10 + ((int)(char)ar4 & 0xfU);
}

__asm__(".globl _FUN_8c1f15a4\n.set _FUN_8c1f15a4, _FUN_8c1f15a4_def\n");
