#include "../decls.h"
undefined4
FUN_8c0208ec_def(undefined4 ar4,int ar5,undefined4 *ar6,undefined4 ar7,undefined4 s0,undefined4 s4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 ar7_00;
  
  ar7_00 = ar7;
  iVar1 = FUN_8c02051c(ar4,ar5,*ar6,ar7);
  uVar2 = 0;
  if (iVar1 != 0) {
    if (((ar5 == 0xc) || (ar5 == 0xd)) || (ar5 == 0xe)) {
      FUN_8c020600(ar4,ar5,ar6,ar7);
    }
    else {
      iVar1 = FUN_8c020714(ar4,iVar1,s4,ar7_00);
      if (iVar1 == 1) {
        return 1;
      }
      iVar1 = FUN_8c020600(ar4,ar5,ar6,ar7);
      if (*(int *)(iVar1 + 8) != 0) {
        FUN_8c1fb57c(*(undefined4 *)(iVar1 + 8),ar5,ar6,ar7);
      }
    }
    uVar2 = FUN_8c1fb57c(iVar1,ar5,ar6,ar7);
  }
  return uVar2;
}

__asm__(".globl _FUN_8c0208ec\n.set _FUN_8c0208ec, _FUN_8c0208ec_def\n");
