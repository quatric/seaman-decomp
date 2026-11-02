#include "../decls.h"
undefined4 FUN_8c204ed2_def(undefined4 *ar4,undefined4 *ar5,int ar6,undefined4 ar7)

{
  undefined4 in_r0;
  int iVar1;
  
  iVar1 = *(int *)(ar6 + 8);
  if (*(int *)(ar6 + 4) == 0) {
    *ar4 = *(undefined4 *)(ar6 + 8);
  }
  else {
    *(undefined4 *)(*(int *)(ar6 + 4) + 8) = *(undefined4 *)(ar6 + 8);
  }
  if (*(int *)(ar6 + 8) == 0) {
    *ar5 = *(undefined4 *)(ar6 + 4);
  }
  else {
    *(undefined4 *)(iVar1 + 4) = *(undefined4 *)(ar6 + 4);
  }
  return in_r0;
}

__asm__(".globl _FUN_8c204ed2\n.set _FUN_8c204ed2, _FUN_8c204ed2_def\n");
