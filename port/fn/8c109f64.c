#include "../decls.h"
int FUN_8c109f64_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = 0x150;
  *(undefined4 *)(0x150 + ar4) = ar5;
  return iVar1;
}

__asm__(".globl _FUN_8c109f64\n.set _FUN_8c109f64, _FUN_8c109f64_def\n");
