#include "../decls.h"
undefined4 FUN_8c1f2ae2_def(char *ar4,char *ar5,undefined4 ar6,undefined4 ar7)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char *pcVar4;
  
  pcVar4 = ar5;
  do {
    if (*ar4 == '\0') {
      if (*pcVar4 != '\0') {
        return 0;
      }
      return 1;
    }
    cVar1 = *ar4;
    ar4 = ar4 + 1;
    uVar2 = FUN_8c1f2a48((int)cVar1,ar5,ar6,ar7);
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    uVar3 = FUN_8c1f2a48((int)cVar1,ar5,ar6,ar7);
  } while ((char)uVar2 == (char)uVar3);
  return 0;
}

__asm__(".globl _FUN_8c1f2ae2\n.set _FUN_8c1f2ae2, _FUN_8c1f2ae2_def\n");
