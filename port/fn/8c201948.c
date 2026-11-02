#include "../decls.h"
uint FUN_8c201948_def(char *ar4,uint ar5,undefined4 ar6,undefined4 ar7)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  
  uVar2 = 0;
  for (uVar5 = 0; uVar5 < ar5; uVar5 = uVar5 + 1) {
    cVar1 = *ar4;
    ar4 = ar4 + 1;
    iVar4 = 8;
    uVar3 = uVar2 ^ (int)cVar1 << 8;
    do {
      uVar2 = uVar3 << 1;
      if ((uVar3 & 0x8000) != 0) {
        uVar2 = uVar2 ^ (int)0x1021;
      }
      iVar4 = iVar4 + -1;
      uVar3 = uVar2;
    } while (iVar4 != 0);
  }
  return uVar2;
}

__asm__(".globl _FUN_8c201948\n.set _FUN_8c201948, _FUN_8c201948_def\n");
