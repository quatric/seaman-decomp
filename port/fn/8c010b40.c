#include "../decls.h"
undefined4 FUN_8c010b40_def(char *ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = 0;
  if (0 < ar5) {
    do {
      if (*ar4 != '\0') {
        return 0;
      }
      iVar1 = iVar1 + 1;
      ar4 = ar4 + 1;
    } while (iVar1 < ar5);
  }
  return 1;
}

__asm__(".globl _FUN_8c010b40\n.set _FUN_8c010b40, _FUN_8c010b40_def\n");
