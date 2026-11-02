#include "../decls.h"
int FUN_8c02743c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = 0x21c;
  *(undefined4 *)(0x21c + ar4) = ar5;
  return iVar1;
}

__asm__(".globl _FUN_8c02743c\n.set _FUN_8c02743c, _FUN_8c02743c_def\n");
