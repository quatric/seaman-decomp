#include "../decls.h"
int FUN_8c06b25c_def(int ar4,uint ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = 0x214;
  *(uint *)(0x214 + ar4) = *(uint *)(0x214 + ar4) | ar5;
  return iVar1;
}

__asm__(".globl _FUN_8c06b25c\n.set _FUN_8c06b25c, _FUN_8c06b25c_def\n");
