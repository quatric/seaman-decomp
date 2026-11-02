#include "../decls.h"
undefined4 FUN_8c013ec0_def(char *ar4,char *ar5,uint ar6,undefined4 ar7)

{
  char cVar1;
  char cVar2;
  uint uVar3;
  
  if (ar6 == 0) {
    return 0;
  }
  uVar3 = 0;
  if (ar6 != 0) {
    do {
      cVar1 = *ar5;
      ar5 = ar5 + 1;
      cVar2 = *ar4;
      ar4 = ar4 + 1;
      if (cVar2 != cVar1) break;
      uVar3 = uVar3 + 1;
    } while (uVar3 < ar6);
  }
  return (uint)(byte)ar4[-1] - (uint)(byte)ar5[-1];
}

__asm__(".globl _FUN_8c013ec0\n.set _FUN_8c013ec0, _FUN_8c013ec0_def\n");
