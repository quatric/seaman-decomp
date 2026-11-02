#include "../decls.h"
undefined4 FUN_8c2017a8_def(uint ar4,uint ar5,int ar6,undefined4 ar7)

{
  uint uVar1;
  
  if (((ar4 != 0) && (ar4 < 4)) && (ar5 < 4)) {
    uVar1 = *(int *)(&DAT_8c273bb8 + ar4 * 4) + *(int *)(&DAT_8c273bc8 + ar5 * 4) + ar6 + 0x80;
    return (uint)((uVar1 & 0x1ff) != 0) + (uVar1 >> 9);
  }
  return 0xffffff00;
}

__asm__(".globl _FUN_8c2017a8\n.set _FUN_8c2017a8, _FUN_8c2017a8_def\n");
