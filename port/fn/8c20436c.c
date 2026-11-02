#include "../decls.h"
undefined4 FUN_8c20436c_def(undefined4 ar4,int ar5,int ar6,undefined4 ar7)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = (&DAT_8c275408)[(short)ar4 * 5];
  iVar2 = 0;
  while (iVar1 = iVar3, iVar1 != 0) {
    iVar3 = *(int *)(iVar1 + 0xc);
    if ((((ar5 < iVar3) || (*(int *)(iVar1 + 0x10) + iVar3 <= ar5)) || (ar5 + ar6 < iVar3)) ||
       (*(int *)(iVar1 + 0x10) + iVar3 < ar5 + ar6)) {
      iVar3 = *(int *)(iVar1 + 8);
    }
    else {
      iVar3 = 0;
      iVar2 = iVar1;
    }
  }
  if (iVar2 != 0) {
    return 0;
  }
  return 3;
}

__asm__(".globl _FUN_8c20436c\n.set _FUN_8c20436c, _FUN_8c20436c_def\n");
