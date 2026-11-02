#include "../decls.h"
int FUN_8c23c814_def(char *ar4,char *ar5,int ar6,undefined4 ar7)

{
  char cVar1;
  
  do {
    cVar1 = *ar5;
    ar5 = ar5 + 1;
    ar6 = ar6 + -1;
    *ar4 = cVar1;
    ar4 = ar4 + 1;
  } while (ar6 != 0);
  return (int)cVar1;
}

__asm__(".globl _FUN_8c23c814\n.set _FUN_8c23c814, _FUN_8c23c814_def\n");
