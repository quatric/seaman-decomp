#include "../decls.h"
undefined4 FUN_8c1f2acc_def(char *ar4,char *ar5,undefined4 ar6,undefined4 ar7)

{
  char cVar1;
  char cVar2;
  
  do {
    if (*ar4 == '\0') {
      if (*ar5 != '\0') {
        return 0;
      }
      return 1;
    }
    cVar1 = *ar5;
    ar5 = ar5 + 1;
    cVar2 = *ar4;
    ar4 = ar4 + 1;
  } while (cVar2 == cVar1);
  return 0;
}

__asm__(".globl _FUN_8c1f2acc\n.set _FUN_8c1f2acc, _FUN_8c1f2acc_def\n");
