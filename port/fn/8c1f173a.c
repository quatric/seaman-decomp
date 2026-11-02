#include "../decls.h"
undefined4 FUN_8c1f173a_def(char *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  
  pcVar3 = &DAT_8c26c528;
  iVar2 = 0;
  do {
    ar4 = ar4 + 1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
    if (cVar1 != *ar4) {
      return 0;
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 5);
  return 1;
}

__asm__(".globl _FUN_8c1f173a\n.set _FUN_8c1f173a, _FUN_8c1f173a_def\n");
