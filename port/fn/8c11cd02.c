#include "../decls.h"
undefined4 FUN_8c11cd02_def(int *ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  (*(code *)(uint)ar4[0xb])(ar4[4],ar4 + 2,ar6,ar7);
  if (*ar4 == 0) {
    *ar4 = ar5;
  }
  (*(code *)(uint)ar4[0xc])(ar4[4],ar4 + 2,ar6,ar7);
  return 1;
}

__asm__(".globl _FUN_8c11cd02\n.set _FUN_8c11cd02, _FUN_8c11cd02_def\n");
