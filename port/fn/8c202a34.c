#include "../decls.h"
uint FUN_8c202a34_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 in_r1;
  
  iVar1 = libgcc_divide_helper_010468(in_r1,6);
  iVar1 = FUN_8c1efd34(iVar1 * 6,ar5,ar6,ar7);
  return (uint)((*(byte *)(iVar1 + 2) & 0x1f) != 0);
}

__asm__(".globl _FUN_8c202a34\n.set _FUN_8c202a34, _FUN_8c202a34_def\n");
