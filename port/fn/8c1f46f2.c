#include "../decls.h"
int FUN_8c1f46f2_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = 0x8c4727b4;
  iVar2 = (int)0x10e0;
  *(undefined4 *)(iVar2 + *(undefined4 *)0x8c4727b4) = ar4;
  iVar2 = iVar2 + 4;
  *(undefined4 *)(iVar2 + *piVar1) = ar4;
  return iVar2;
}

__asm__(".globl _FUN_8c1f46f2\n.set _FUN_8c1f46f2, _FUN_8c1f46f2_def\n");
