#include "../decls.h"
int FUN_8c200ba0_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int iVar2;
  undefined4 d;
  
  d = 10;
  iVar1 = libgcc_divide_helper_01051c(ar4,10);
  iVar2 = libgcc_divide_helper_0106dc(ar4,d);
  return iVar1 * 0x10 + iVar2;
}

__asm__(".globl _FUN_8c200ba0\n.set _FUN_8c200ba0, _FUN_8c200ba0_def\n");
