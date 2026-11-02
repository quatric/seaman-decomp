#include "../decls.h"
int FUN_8c0e9690_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int iVar2;
  
  iVar1 = 0xbe;
  iVar2 = (int)*(char *)(0xbe + ar4);
  if (0 < *(char *)(0xbe + ar4)) {
    *(char *)(0xbe + ar4) = *(char *)(0xbe + ar4) + -1;
    iVar2 = iVar1;
  }
  return iVar2;
}

__asm__(".globl _FUN_8c0e9690\n.set _FUN_8c0e9690, _FUN_8c0e9690_def\n");
