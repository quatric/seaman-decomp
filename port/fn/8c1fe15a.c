#include "../decls.h"
int FUN_8c1fe15a_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = ar4 * 0x148 + 0x8c4783e0;
  iVar1 = *(int *)(iVar3 + 0x1c);
  iVar2 = *(int *)(iVar1 + 8) - *(int *)(iVar1 + 0x10);
  iVar1 = FUN_8c1fe1e4(ar4,(int)(short)ar5,iVar2 - *(int *)(iVar1 + 0x18),iVar2 + -1);
  if ((iVar1 < 1) &&
     (iVar2 = *(int *)(iVar3 + 0x1c), iVar1 = *(int *)(iVar2 + 0x1c),
     iVar1 = FUN_8c1fe1e4(ar4,(int)(short)ar5,iVar1,iVar1 + *(int *)(iVar2 + 0x20) + -1), iVar1 < 1)
     ) {
    iVar1 = -1;
  }
  return iVar1;
}

__asm__(".globl _FUN_8c1fe15a\n.set _FUN_8c1fe15a, _FUN_8c1fe15a_def\n");
