#include "../decls.h"
undefined4 FUN_8c20e300_def(int ar4,int ar5,int *ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = *(int *)(ar5 * 4 + ar4);
  if (((DAT_8c275798 == 1) && (*(int *)(iVar1 + 4) == 0)) && (*(int *)(iVar1 + 0x3c) == 3)) {
    *ar6 = ar5 + 1;
    return 6;
  }
  return 0;
}

__asm__(".globl _FUN_8c20e300\n.set _FUN_8c20e300, _FUN_8c20e300_def\n");
