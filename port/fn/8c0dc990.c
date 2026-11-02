#include "../decls.h"
int FUN_8c0dc990_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 ar5_00;
  
  ar5_00 = ar5;
  iVar1 = FUN_8c1006d8(ar5,ar5,ar6,ar7);
  if (iVar1 == 1) {
    FUN_8c1004b4(ar5,ar5_00,ar6,ar7);
  }
  else {
    iVar1 = FUN_8c100724(ar5,ar5_00,ar6,ar7);
    if (iVar1 == 1) {
      FUN_8c10052c(ar5,ar5_00,ar6,ar7);
    }
  }
  iVar1 = FUN_8c100770(ar5,ar5_00,ar6,ar7);
  if (iVar1 == 1) {
    iVar1 = FUN_8c1005a4(ar5,ar5_00,ar6,ar7);
  }
  else {
    iVar1 = FUN_8c1007bc(ar5,ar5_00,ar6,ar7);
    if (iVar1 == 1) {
      iVar1 = FUN_8c10061c(ar5,ar5_00,ar6,ar7);
    }
  }
  return iVar1;
}

__asm__(".globl _FUN_8c0dc990\n.set _FUN_8c0dc990, _FUN_8c0dc990_def\n");
