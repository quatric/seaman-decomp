#include "../decls.h"
int FUN_8c263726_def(char *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int unaff_r13;
  char *pcVar2;
  
  pcVar2 = ar4 + unaff_r13;
  do {
    iVar1 = (int)*ar4;
    if (iVar1 == 1) {
      iVar1 = FUN_8c263702(ar4,ar5,ar6,ar7);
    }
    ar4 = ar4 + 100;
  } while (ar4 < pcVar2);
  return iVar1;
}

__asm__(".globl _FUN_8c263726\n.set _FUN_8c263726, _FUN_8c263726_def\n");
