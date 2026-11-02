#include "../decls.h"
undefined4 FUN_8c26be30_def(undefined4 ar4,int ar5,int *ar6,int *ar7)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = FUN_8c010794(8,ar6,ar4);
  ar7[1] = ar6[1];
  if (ar5 < ar6[1]) {
    ar6[1] = ar5;
  }
  iVar2 = ar7[1];
  iVar3 = ar6[1];
  ar7[1] = iVar2 - iVar3;
  if (iVar2 - iVar3 == 0) {
    *ar7 = 0;
  }
  else {
    *ar7 = *ar6 + ar6[1];
  }
  return uVar1;
}

__asm__(".globl _FUN_8c26be30\n.set _FUN_8c26be30, _FUN_8c26be30_def\n");
