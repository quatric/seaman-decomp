#include "../decls.h"
undefined4 FUN_8c2057e6_def(int *ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  int iVar1;
  
  if (*ar4 == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *ar4;
  }
  *(int *)(ar5 + 4) = iVar1;
  *ar4 = ar5;
  return in_r0;
}

__asm__(".globl _FUN_8c2057e6\n.set _FUN_8c2057e6, _FUN_8c2057e6_def\n");
