#include "../decls.h"
undefined4 FUN_8c1f0988_def(undefined1 *ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  
  for (; 0 < ar5; ar5 = ar5 + -1) {
    *ar4 = 0xff;
    ar4 = ar4 + 1;
  }
  return in_r0;
}

__asm__(".globl _FUN_8c1f0988\n.set _FUN_8c1f0988, _FUN_8c1f0988_def\n");
