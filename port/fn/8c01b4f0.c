#include "../decls.h"
int FUN_8c01b4f0_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int iVar2;
  int ar4_00;
  undefined4 ar5_00;
  undefined4 ar7_00;
  
  ar7_00 = ar7;
  iVar1 = FUN_8c01ab78(ar4,4,ar5,ar7);
  if (iVar1 < 0) {
    iVar1 = -1;
  }
  else {
    ar5_00 = ar7;
    iVar2 = FUN_8c01b5dc(ar4,ar7,ar5,ar7_00);
    ar4_00 = malloc_thunk(iVar2 << 9,ar5_00,ar5,ar7_00);
    if (ar4_00 == 0) {
      iVar1 = -1;
    }
    else {
      memmove(ar4_00,ar6,ar7,ar7_00);
      *(int *)(0x246c + iVar1 * 0x28 + ar4) = iVar2;
      *(int *)(0x2470 + iVar1 * 0x28 + ar4) = ar4_00;
    }
  }
  return iVar1;
}

__asm__(".globl _FUN_8c01b4f0\n.set _FUN_8c01b4f0, _FUN_8c01b4f0_def\n");
