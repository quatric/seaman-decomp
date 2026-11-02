#include "../decls.h"
int FUN_8c2650be_def(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int unaff_r13;
  int *piVar2;
  
  piVar2 = (int *)(unaff_r13 + (int)ar4);
  do {
    iVar1 = *ar4;
    if (iVar1 == 1) {
      iVar1 = FUN_8c26501c(ar4,ar5,ar6,ar7);
    }
    ar4 = ar4 + 0xd;
  } while (ar4 < piVar2);
  return iVar1;
}

__asm__(".globl _FUN_8c2650be\n.set _FUN_8c2650be, _FUN_8c2650be_def\n");
