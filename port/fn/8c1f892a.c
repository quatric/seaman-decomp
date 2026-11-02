#include "../decls.h"
int FUN_8c1f892a_def(uint ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return ((ar4 & 0x7f) * 100 >> 7) + (ar4 >> 7) * 100;
}

__asm__(".globl _FUN_8c1f892a\n.set _FUN_8c1f892a, _FUN_8c1f892a_def\n");
