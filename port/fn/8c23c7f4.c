#include "../decls.h"
undefined4 FUN_8c23c7f4_def(undefined4 *ar4,undefined4 *ar5,int ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  do {
    uVar1 = *ar5;
    ar5 = ar5 + 1;
    ar6 = ar6 + -1;
    *ar4 = uVar1;
    ar4 = ar4 + 1;
  } while (ar6 != 0);
  return uVar1;
}

__asm__(".globl _FUN_8c23c7f4\n.set _FUN_8c23c7f4, _FUN_8c23c7f4_def\n");
