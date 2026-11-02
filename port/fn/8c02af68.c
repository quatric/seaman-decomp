#include "../decls.h"
int FUN_8c02af68_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = *(int *)(0x47c + ar4);
  if (iVar1 != ar5) {
    *(undefined4 *)(0x474 + ar4) = 1;
    *(undefined4 *)(0x470 + ar4) = 0;
    iVar1 = 0x47c;
    *(int *)(0x47c + ar4) = ar5;
  }
  return iVar1;
}

__asm__(".globl _FUN_8c02af68\n.set _FUN_8c02af68, _FUN_8c02af68_def\n");
