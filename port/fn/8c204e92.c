#include "../decls.h"
undefined4 FUN_8c204e92_def(int *ar4,int *ar5,int ar6,undefined4 ar7)

{
  undefined4 in_r0;
  int iVar1;
  
  if (*ar4 == 0) {
    *(undefined4 *)(ar6 + 4) = 0;
    *(undefined4 *)(ar6 + 8) = 0;
    *ar4 = ar6;
    *ar5 = ar6;
  }
  else {
    iVar1 = *ar4;
    *(undefined4 *)(ar6 + 4) = *(undefined4 *)(iVar1 + 4);
    *(int *)(ar6 + 8) = *ar4;
    *(int *)(iVar1 + 4) = ar6;
    *ar4 = ar6;
  }
  return in_r0;
}

__asm__(".globl _FUN_8c204e92\n.set _FUN_8c204e92, _FUN_8c204e92_def\n");
