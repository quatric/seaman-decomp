#include "../decls.h"
undefined4 FUN_8c1f0958_def(undefined4 *ar4,undefined4 *ar5,int ar6,undefined4 ar7)

{
  undefined4 in_r0;
  undefined4 uVar1;
  int iVar2;
  bool bVar3;
  
  if (ar6 < 0) {
    ar6 = ar6 + 3;
  }
  iVar2 = ar6 >> 2;
  while (bVar3 = 0 < iVar2, iVar2 = iVar2 + -1, bVar3) {
    uVar1 = *ar4;
    ar4 = ar4 + 1;
    *ar5 = uVar1;
    ar5 = ar5 + 1;
  }
  return in_r0;
}

__asm__(".globl _FUN_8c1f0958\n.set _FUN_8c1f0958, _FUN_8c1f0958_def\n");
