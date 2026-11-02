#include "../decls.h"
int FUN_8c2630d6_def(char *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int unaff_r12;
  char *pcVar2;
  int iVar3;
  
  iVar3 = (int)0x9c;
  pcVar2 = ar4 + unaff_r12;
  do {
    iVar1 = (int)*ar4;
    if (iVar1 == 1) {
      iVar1 = FUN_8c26307e(ar4,ar5,ar6,ar7);
    }
    ar4 = ar4 + iVar3;
  } while (ar4 < pcVar2);
  return iVar1;
}

__asm__(".globl _FUN_8c2630d6\n.set _FUN_8c2630d6, _FUN_8c2630d6_def\n");
