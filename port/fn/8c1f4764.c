#include "../decls.h"
int FUN_8c1f4764_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = (int)0xfbc;
  *(undefined4 *)(iVar1 + *(undefined4 *)0x8c4727b4) = ar4;
  return iVar1;
}

__asm__(".globl _FUN_8c1f4764\n.set _FUN_8c1f4764, _FUN_8c1f4764_def\n");
