#include "../decls.h"
int * FUN_8c239170_def(int *ar4,int *ar5,int ar6,int ar7)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = 0;
  piVar1 = ar5;
  if (0 < ar7) {
    do {
      iVar2 = iVar2 + 1;
      *piVar1 = ar6;
      ar6 = ar6 + 0x1c;
      piVar1 = piVar1 + 3;
    } while (iVar2 < ar7);
  }
  *ar4 = (int)ar5;
  return piVar1;
}

__asm__(".globl _FUN_8c239170\n.set _FUN_8c239170, _FUN_8c239170_def\n");
