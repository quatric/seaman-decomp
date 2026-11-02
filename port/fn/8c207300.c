#include "../decls.h"
uint FUN_8c207300_def(undefined4 *ar4,undefined4 *ar5,uint ar6,undefined4 ar7)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  
  uVar1 = (uint)ar4 | (uint)ar5 | ar6;
  if ((uVar1 & 7) != 0) {
    uVar1 = ar6 >> 2;
    do {
      uVar3 = *ar5;
      ar5 = ar5 + 1;
      uVar1 = uVar1 - 1;
      *ar4 = uVar3;
      ar4 = ar4 + 1;
    } while (uVar1 != 0);
    return uVar3;
  }
  uVar2 = ar6 >> 3;
  do {
    uVar3 = *ar5;
    ar5 = ar5 + 1;
    uVar2 = uVar2 - 1;
    *ar4 = uVar3;
    ar4 = ar4 + 2;
  } while (uVar2 != 0);
  return uVar1;
}

__asm__(".globl _FUN_8c207300\n.set _FUN_8c207300, _FUN_8c207300_def\n");
