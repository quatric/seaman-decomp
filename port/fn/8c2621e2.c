#include "../decls.h"
int FUN_8c2621e2_def(undefined4 ar4,char *ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int unaff_r12;
  char *pcVar2;
  char *a4;
  char *pcVar3;
  
  pcVar2 = ar5 + unaff_r12;
  a4 = ar5;
  pcVar3 = ar5;
  do {
    iVar1 = (int)*pcVar3;
    if (iVar1 == 1) {
      iVar1 = FUN_8c262168(a4,ar5,ar6,ar7);
    }
    pcVar3 = pcVar3 + 0x30;
    a4 = a4 + 0x30;
  } while (pcVar3 < pcVar2);
  return iVar1;
}

__asm__(".globl _FUN_8c2621e2\n.set _FUN_8c2621e2, _FUN_8c2621e2_def\n");
