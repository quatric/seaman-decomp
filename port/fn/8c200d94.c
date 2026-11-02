#include "../decls.h"
undefined4 FUN_8c200d94_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int ar5_00;
  int iVar2;
  
  iVar2 = ar4 * 0x148;
  *(undefined4 *)(iVar2 + -0x73b87bf0) = 1;
  *(undefined4 *)(iVar2 + -0x73b87bec) =
       *(undefined4 *)(&DAT_8c273ab0 + *(int *)(iVar2 + -0x73b87c1c) * 0x50);
  ar5_00 = 0;
  while( true ) {
    if (**(int **)(&DAT_8c4783fc + iVar2) + 1 <= ar5_00) {
      return 0;
    }
    iVar1 = FUN_8c1fbb6c(ar4,ar5_00,ar5,ar7);
    if (iVar1 < 0) break;
    ar5_00 = ar5_00 + 1;
    ar5 = ar5 + 0x200;
  }
  return iVar1;
}

__asm__(".globl _FUN_8c200d94\n.set _FUN_8c200d94, _FUN_8c200d94_def\n");
