#include "../decls.h"
undefined4 FUN_8c0205e8_def(undefined4 ar4,int *ar5,int ar6,undefined4 ar7)

{
  int iVar1;
  
  if (*ar5 == 0) {
    *ar5 = ar6;
    return 0;
  }
  iVar1 = *ar5;
  *(int *)(ar6 + 4) = iVar1;
  *ar5 = ar6;
  return iVar1;
}

__asm__(".globl _FUN_8c0205e8\n.set _FUN_8c0205e8, _FUN_8c0205e8_def\n");
