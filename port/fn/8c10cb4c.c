#include "../decls.h"
undefined4 FUN_8c10cb4c_def(int *ar4,uint ar5,int ar6,undefined4 ar7)

{
  uint uVar1;
  
  uVar1 = 0;
  if (ar5 != 0) {
    do {
      if (*ar4 == ar6) {
        return 1;
      }
      uVar1 = uVar1 + 1;
      ar4 = ar4 + 1;
    } while (uVar1 < ar5);
  }
  return 0;
}

__asm__(".globl _FUN_8c10cb4c\n.set _FUN_8c10cb4c, _FUN_8c10cb4c_def\n");
