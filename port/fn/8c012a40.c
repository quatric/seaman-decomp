#include "../decls.h"
char * FUN_8c012a40_def(char *ar4,ushort *ar5,undefined4 ar6,undefined4 ar7)

{
  char *pcVar1;
  uint uVar2;
  char cVar3;
  int iVar4;
  
  pcVar1 = ar4 + 2;
  iVar4 = 8;
  do {
    uVar2 = -iVar4;
    if ((int)uVar2 < 0) {
      cVar3 = (char)(*ar5 >> (~uVar2 & 0x1f) + 1);
    }
    else {
      cVar3 = (char)*ar5 << (uVar2 & 0x1f);
    }
    *ar4 = cVar3;
    ar4 = ar4 + 1;
    iVar4 = iVar4 + -8;
  } while (ar4 < pcVar1);
  return pcVar1;
}

__asm__(".globl _FUN_8c012a40\n.set _FUN_8c012a40, _FUN_8c012a40_def\n");
