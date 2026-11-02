#include "../decls.h"
uint FUN_8c26b4f4_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  byte in_IMASK;
  byte in_S;
  byte in_T;
  
  return (((uint)in_T | (uint)in_S << 1 | (uint)in_IMASK << 4) & 0xf0) >> 4;
}

__asm__(".globl _FUN_8c26b4f4\n.set _FUN_8c26b4f4, _FUN_8c26b4f4_def\n");
