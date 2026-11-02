#include "../decls.h"
int FUN_8c01b70c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = FUN_8c01ab78(ar4,0,ar5,ar7);
  if (iVar1 < 0) {
    iVar1 = -1;
  }
  else {
    iVar2 = FUN_8c01b5ac(ar4,ar6,ar5,ar7);
    iVar3 = malloc_thunk(iVar2 << 9,ar6,ar5,ar7);
    if (iVar3 == 0) {
      iVar1 = -1;
    }
    else {
      *(int *)(0x246c + iVar1 * 0x28 + ar4) = iVar2;
      *(int *)(0x2470 + iVar1 * 0x28 + ar4) = iVar3;
    }
  }
  return iVar1;
}

__asm__(".globl _FUN_8c01b70c\n.set _FUN_8c01b70c, _FUN_8c01b70c_def\n");
