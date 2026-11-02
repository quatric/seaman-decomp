#include "../decls.h"
int FUN_8c25a122_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  if (ar5 == 1) {
    iVar1 = DAT_8c277ca0 + ar4;
  }
  else {
    iVar1 = ar4;
    if ((ar5 != 0) && (iVar1 = DAT_8c277ca0, ar5 == 2)) {
      iVar1 = DAT_8c277c9c - ar4;
    }
  }
  DAT_8c277ca0 = iVar1;
  return ar5;
}

__asm__(".globl _FUN_8c25a122\n.set _FUN_8c25a122, _FUN_8c25a122_def\n");
