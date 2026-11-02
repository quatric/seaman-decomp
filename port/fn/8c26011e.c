#include "../decls.h"
undefined4 FUN_8c26011e_def(undefined2 *ar4,undefined2 *ar5,int ar6,undefined4 ar7)

{
  undefined2 uVar1;
  undefined4 in_r0;
  
  for (; 0 < ar6; ar6 = ar6 + -1) {
    uVar1 = *ar5;
    ar5 = ar5 + 1;
    *ar4 = uVar1;
    ar4 = ar4 + 1;
  }
  return in_r0;
}

__asm__(".globl _FUN_8c26011e\n.set _FUN_8c26011e, _FUN_8c26011e_def\n");
