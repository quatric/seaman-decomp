#include "../decls.h"
int FUN_8c02ce40_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = 0x138;
  *(undefined4 *)(0x138 + ar4) = ar5;
  return iVar1;
}

__asm__(".globl _FUN_8c02ce40\n.set _FUN_8c02ce40, _FUN_8c02ce40_def\n");
