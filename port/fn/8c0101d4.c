#include "../decls.h"
undefined4 strcpy_def(char *ar4,char *ar5,undefined4 ar6,undefined4 ar7)

{
  char cVar1;
  undefined4 in_r0;
  
  do {
    cVar1 = *ar5;
    ar5 = ar5 + 1;
    *ar4 = cVar1;
    ar4 = ar4 + 1;
  } while (cVar1 != '\0');
  return in_r0;
}

__asm__(".globl _strcpy\n.set _strcpy, _strcpy_def\n");
