#include "../decls.h"
undefined4 FUN_8c20731e_def(undefined4 *ar4,undefined4 *ar5,uint ar6,undefined4 ar7)

{
  undefined4 uVar1;
  uint uVar2;
  
  uVar2 = ar6 >> 2;
  do {
    uVar1 = *ar5;
    ar5 = ar5 + 1;
    uVar2 = uVar2 - 1;
    *ar4 = uVar1;
    ar4 = ar4 + 1;
  } while (uVar2 != 0);
  return uVar1;
}

__asm__(".globl _FUN_8c20731e\n.set _FUN_8c20731e, _FUN_8c20731e_def\n");
