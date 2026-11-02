#include "../decls.h"
undefined4 FUN_8c20e400_def(int ar4,int ar5,int *ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = *(int *)(ar5 * 4 + ar4);
  if (((DAT_8c275798 == 1) && (*(int *)(iVar1 + 4) == 0)) && (*(int *)(iVar1 + 0x20) == 0)) {
    *ar6 = ar5 + 1;
    return 10;
  }
  return 0;
}

__asm__(".globl _FUN_8c20e400\n.set _FUN_8c20e400, _FUN_8c20e400_def\n");
