#include "../decls.h"
undefined4 FUN_8c1f4780_def(uint *ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  uint uVar1;
  
  do {
    uVar1 = *ar4;
    ar5 = ar5 + -1;
    *ar4 = ((uVar1 & 0xff) << 8 | (uVar1 & 0xff00) >> 8) << 0x10 | ((uVar1 & 0xff0000) >> 0x10) << 8
           | uVar1 >> 0x18;
    ar4 = ar4 + 1;
  } while (ar5 != 0);
  return 0;
}

__asm__(".globl _FUN_8c1f4780\n.set _FUN_8c1f4780, _FUN_8c1f4780_def\n");
