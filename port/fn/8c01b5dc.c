#include "../decls.h"
uint FUN_8c01b5dc_def(undefined4 ar4,uint ar5,undefined4 ar6,undefined4 ar7)

{
  uint uVar1;
  
  uVar1 = ar5 >> 9;
  if ((ar5 & 0x1ff) != 0) {
    uVar1 = uVar1 + 1;
  }
  return uVar1;
}

__asm__(".globl _FUN_8c01b5dc\n.set _FUN_8c01b5dc, _FUN_8c01b5dc_def\n");
