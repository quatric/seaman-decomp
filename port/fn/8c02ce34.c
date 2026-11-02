#include "../decls.h"
int FUN_8c02ce34_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = 0x13c;
  *(undefined4 *)(0x13c + ar4) = ar5;
  return iVar1;
}

__asm__(".globl _FUN_8c02ce34\n.set _FUN_8c02ce34, _FUN_8c02ce34_def\n");
