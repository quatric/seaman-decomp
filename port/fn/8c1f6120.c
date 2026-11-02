#include "../decls.h"
uint FUN_8c1f6120_def(uint ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  uint uVar1;
  
  uVar1 = ar4 >> 10 & 0x3fff00;
  if ((0x20000 & ar4) != 0) {
    uVar1 = uVar1 | (int)0xf0;
  }
  if ((ar4 & 0x10000) != 0) {
    uVar1 = uVar1 | 0xf;
  }
  return uVar1;
}

__asm__(".globl _FUN_8c1f6120\n.set _FUN_8c1f6120, _FUN_8c1f6120_def\n");
