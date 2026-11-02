#include "../decls.h"
undefined4 FUN_8c1f2a5c_def(undefined1 *ar4,undefined1 *ar5,int ar6,undefined4 ar7)

{
  undefined1 uVar1;
  undefined4 in_r0;
  
  for (; 0 < ar6; ar6 = ar6 + -1) {
    uVar1 = *ar4;
    ar4 = ar4 + 1;
    *ar5 = uVar1;
    ar5 = ar5 + 1;
  }
  return in_r0;
}

__asm__(".globl _FUN_8c1f2a5c\n.set _FUN_8c1f2a5c, _FUN_8c1f2a5c_def\n");
