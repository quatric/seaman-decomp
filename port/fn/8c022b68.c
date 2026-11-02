#include "../decls.h"
int FUN_8c022b68_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = (int *)(ar4 + ar5 * 0x208e0 + 0x2d150);
  iVar1 = *piVar2;
  if (iVar1 == 2) {
    iVar1 = FUN_8c263e50(piVar2[1],0,ar6,ar7);
  }
  return iVar1;
}

__asm__(".globl _FUN_8c022b68\n.set _FUN_8c022b68, _FUN_8c022b68_def\n");
