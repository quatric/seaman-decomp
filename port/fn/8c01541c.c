#include "../decls.h"
int FUN_8c01541c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  **(undefined4 **)(ar4 + 4) = ar5;
  iVar1 = *(int *)(ar4 + 4);
  *(undefined4 *)(iVar1 + 4) = ar6;
  return iVar1;
}

__asm__(".globl _FUN_8c01541c\n.set _FUN_8c01541c, _FUN_8c01541c_def\n");
