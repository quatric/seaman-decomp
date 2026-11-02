#include "../decls.h"
undefined4 FUN_8c263534_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = *(int *)(ar4 + 0x14) + (int)0x7ff;
  if (iVar1 < 0) {
    iVar1 = iVar1 + 0x7ff;
  }
  iVar1 = iVar1 >> 0xb;
  if (ar5 <= iVar1) {
    iVar1 = ar5;
  }
  uVar2 = 0;
  iVar1 = *(int *)(ar4 + 0x10) + iVar1;
  FUN_8c1f3122(*(undefined4 *)(ar4 + 8),iVar1,0,ar7);
  uVar2 = FUN_8c2634dc(ar4,iVar1,uVar2,ar7);
  return uVar2;
}

__asm__(".globl _FUN_8c263534\n.set _FUN_8c263534, _FUN_8c263534_def\n");
