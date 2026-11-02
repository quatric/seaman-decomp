#include "../decls.h"
undefined4 FUN_8c263768_def(int ar4,int *ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = FUN_8c2634dc(ar4,ar5,ar6,ar7);
  *ar5 = iVar1 - *(int *)(ar4 + 0xc);
  return 1;
}

__asm__(".globl _FUN_8c263768\n.set _FUN_8c263768, _FUN_8c263768_def\n");
