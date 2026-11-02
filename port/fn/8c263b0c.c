#include "../decls.h"
int FUN_8c263b0c_def(char *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int unaff_r12;
  char *pcVar2;
  undefined4 in_PR;
  
  pcVar2 = ar4 + unaff_r12;
  do {
    iVar1 = (int)*ar4;
    if (iVar1 == 1) {
      iVar1 = FUN_8c2639fa(ar4,ar5,ar6,ar7,in_PR);
    }
    ar4 = ar4 + 0x94;
  } while (ar4 < pcVar2);
  return iVar1;
}

__asm__(".globl _FUN_8c263b0c\n.set _FUN_8c263b0c, _FUN_8c263b0c_def\n");
