#include "../decls.h"
undefined4 FUN_8c021720_def(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (*ar4 != 0) {
    uVar1 = FUN_8c02257c(ar4 + 1,0,ar5,ar7);
  }
  return uVar1;
}

__asm__(".globl _FUN_8c021720\n.set _FUN_8c021720, _FUN_8c021720_def\n");
