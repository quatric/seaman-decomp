#include "../decls.h"
undefined4 FUN_8c20e6c0_def(int ar4,int ar5,int *ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = *(int *)(ar5 * 4 + ar4);
  if ((((*(int *)(iVar1 + 4) == 1) && (iVar1 = *(int *)(0xa0 + iVar1), iVar1 != 0)) &&
      (iVar1 != 0)) && (((iVar1 != 0 && (iVar1 != 0x20000000)) && (iVar1 != 0x40000000)))) {
    *ar6 = ar5 + 1;
    return 0xf;
  }
  return 0;
}

__asm__(".globl _FUN_8c20e6c0\n.set _FUN_8c20e6c0, _FUN_8c20e6c0_def\n");
