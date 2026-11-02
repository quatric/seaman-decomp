#include "../decls.h"
int FUN_8c013e4c_def(undefined4 ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  *(undefined4 *)0x8c2787b0 = ar5;
  iVar1 = *(undefined4 *)0x8c2787b0;
  if (iVar1 == 0) {
    iVar1 = 1;
  }
  return iVar1;
}

__asm__(".globl _FUN_8c013e4c\n.set _FUN_8c013e4c, _FUN_8c013e4c_def\n");
