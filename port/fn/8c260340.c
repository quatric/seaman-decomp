#include "../decls.h"
int FUN_8c260340_def(short *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int unaff_r12;
  short *psVar2;
  int iVar3;
  
  iVar3 = (int)0xac;
  psVar2 = (short *)(unaff_r12 + (int)ar4);
  do {
    iVar1 = (int)*ar4;
    if (iVar1 == 1) {
      iVar1 = FUN_8c2602f4(ar4,ar5,ar6,ar7);
    }
    ar4 = (short *)((int)ar4 + iVar3);
  } while (ar4 < psVar2);
  return iVar1;
}

__asm__(".globl _FUN_8c260340\n.set _FUN_8c260340, _FUN_8c260340_def\n");
