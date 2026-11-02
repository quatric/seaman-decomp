#include "../decls.h"
int FUN_8c200bc4_def(uint ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return (ar4 >> 4) * 10 + (ar4 & 0xf);
}

__asm__(".globl _FUN_8c200bc4\n.set _FUN_8c200bc4, _FUN_8c200bc4_def\n");
