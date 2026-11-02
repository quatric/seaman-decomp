#include "../decls.h"
int FUN_8c0146b4_def(uint ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  if (((&DATA_8c125470)[ar4 & 0xff] & 2) != 0) {
    return ar4 - 0x20;
  }
  return ar4;
}

__asm__(".globl _FUN_8c0146b4\n.set _FUN_8c0146b4, _FUN_8c0146b4_def\n");
