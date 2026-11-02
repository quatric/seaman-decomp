#include "../decls.h"
undefined4 FUN_8c02cbbc_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = *(int *)(ar4 + 0xc) - ar5;
  if (iVar1 < 1) {
    *(undefined4 *)(ar4 + 4) = *(undefined4 *)(ar4 + 0xc);
    return *(undefined4 *)(ar4 + 0xc);
  }
  *(int *)(ar4 + 4) = ar5;
  return iVar1;
}

__asm__(".globl _FUN_8c02cbbc\n.set _FUN_8c02cbbc, _FUN_8c02cbbc_def\n");
