#include "../decls.h"
int FUN_8c1f4656_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = (int)0x10c0;
  *(int *)(iVar1 + *(undefined4 *)0x8c4727b4) = ar4 << 0x10;
  return iVar1;
}

__asm__(".globl _FUN_8c1f4656\n.set _FUN_8c1f4656, _FUN_8c1f4656_def\n");
