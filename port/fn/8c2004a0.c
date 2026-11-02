#include "../decls.h"
undefined4 FUN_8c2004a0_def(char *ar4,char *ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int iVar2;
  char *a5;
  
  a5 = ar5;
  iVar1 = FUN_8c200472(ar4,ar5,ar6,ar7);
  iVar2 = FUN_8c200472(ar5,a5,ar6,ar7);
  if (iVar1 != iVar2) {
    return 0;
  }
  iVar2 = 0;
  if (0 < iVar1) {
    do {
      if (*ar4 != *ar5) {
        return 0;
      }
      iVar2 = iVar2 + 1;
      ar5 = ar5 + 1;
      ar4 = ar4 + 1;
    } while (iVar2 < iVar1);
  }
  return 1;
}

__asm__(".globl _FUN_8c2004a0\n.set _FUN_8c2004a0, _FUN_8c2004a0_def\n");
