#include "../decls.h"
undefined4 FUN_8c20e664_def(int ar4,int ar5,int *ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = *(int *)(ar5 * 4 + ar4);
  if ((*(int *)(iVar1 + 8) == 0) &&
     ((*(int *)(iVar1 + 0x2c) != 10 || (*(int *)(iVar1 + 0x30) != 0xb)))) {
    *ar6 = ar5 + 1;
    return 0xe;
  }
  return 0;
}

__asm__(".globl _FUN_8c20e664\n.set _FUN_8c20e664, _FUN_8c20e664_def\n");
