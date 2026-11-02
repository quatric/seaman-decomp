#include "../decls.h"
undefined4 FUN_8c1f5bb4_def(int ar4,int *ar5,undefined4 ar6,undefined4 ar7)

{
  int *piVar1;
  int iVar2;
  undefined1 auStack_14 [4];
  int iStack_10;
  undefined1 auStack_c [8];
  
  iStack_10 = ar4;
  FUN_8c1f5a30(auStack_14,ar5,ar6,ar7);
  piVar1 = (int *)FUN_8c1f5a5e(auStack_c,ar5,ar6,ar7);
  iVar2 = FUN_8c1f5ac6(iStack_10 + 0x10,ar5,ar6,ar7);
  if (iVar2 < 0) {
    iVar2 = *piVar1;
    piVar1[iVar2 * 2 + 2] = iStack_10;
    ar5 = piVar1 + iVar2 * 2 + 2;
    ar5[1] = 0;
    *piVar1 = *piVar1 + 1;
  }
  FUN_8c1f5a48(auStack_14,ar5,ar6,ar7);
  return 0;
}

__asm__(".globl _FUN_8c1f5bb4\n.set _FUN_8c1f5bb4, _FUN_8c1f5bb4_def\n");
