#include "../decls.h"
int FUN_8c1041d8_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = 0xcc;
  *(undefined4 *)(0xcc + ar4) = ar5;
  return iVar1;
}

__asm__(".globl _FUN_8c1041d8\n.set _FUN_8c1041d8, _FUN_8c1041d8_def\n");
