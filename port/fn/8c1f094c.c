#include "../decls.h"
undefined4 FUN_8c1f094c_def(char *ar4,char *ar5,int ar6,undefined4 ar7)

{
  char cVar1;
  char cVar2;
  bool bVar3;
  
  do {
    bVar3 = ar6 < 1;
    ar6 = ar6 + -1;
    if (bVar3) {
      return 1;
    }
    cVar1 = *ar5;
    ar5 = ar5 + 1;
    cVar2 = *ar4;
    ar4 = ar4 + 1;
  } while (cVar2 == cVar1);
  return 0;
}

__asm__(".globl _FUN_8c1f094c\n.set _FUN_8c1f094c, _FUN_8c1f094c_def\n");
