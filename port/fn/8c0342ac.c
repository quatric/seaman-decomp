#include "../decls.h"
int FUN_8c0342ac_def(undefined4 ar4,undefined4 *ar5,int ar6,undefined4 ar7)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)*ar5;
  for (iVar2 = 0; iVar2 < ar6; iVar2 = iVar2 + 1) {
    piVar1 = piVar1 + 6;
  }
  iVar2 = *piVar1;
  if (iVar2 == 0) {
    iVar2 = 0;
  }
  return iVar2;
}

__asm__(".globl _FUN_8c0342ac\n.set _FUN_8c0342ac, _FUN_8c0342ac_def\n");
