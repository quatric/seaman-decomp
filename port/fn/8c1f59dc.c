#include "../decls.h"
int FUN_8c1f59dc_def(undefined4 *ar4,undefined4 ar5,int ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = 0;
  if (0 < ar6) {
    do {
      iVar1 = iVar1 + 1;
      *ar4 = ar5;
      ar4 = ar4 + 1;
    } while (iVar1 < ar6);
  }
  return ar6;
}

__asm__(".globl _FUN_8c1f59dc\n.set _FUN_8c1f59dc, _FUN_8c1f59dc_def\n");
