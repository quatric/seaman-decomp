#include "../decls.h"
int FUN_8c1f88f6_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int extraout_r3;
  undefined4 d;
  
  d = 100;
  iVar1 = libgcc_divide_helper_0106dc(ar4,100);
  libgcc_divide_helper_01051c(iVar1 << 7,d);
  iVar1 = libgcc_divide_helper_01051c(ar4,d);
  return iVar1 * 0x80 + extraout_r3;
}

__asm__(".globl _FUN_8c1f88f6\n.set _FUN_8c1f88f6, _FUN_8c1f88f6_def\n");
