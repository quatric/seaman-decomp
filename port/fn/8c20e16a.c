#include "../decls.h"
undefined4 FUN_8c20e16a_def(int ar4,int ar5,int *ar6,undefined4 ar7)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(ar5 * 4 + ar4);
  if (((((DAT_8c275798 != 2) && (DAT_8c275798 != 3)) || (iVar1 = *(int *)(iVar2 + 4), iVar1 == 0))
      || ((iVar1 == 1 || (iVar1 == 2)))) &&
     ((DAT_8c275798 != 1 || ((iVar2 = *(int *)(iVar2 + 4), iVar2 == 0 || (iVar2 == 1)))))) {
    return 0;
  }
  *ar6 = ar5 + 1;
  return 3;
}

__asm__(".globl _FUN_8c20e16a\n.set _FUN_8c20e16a, _FUN_8c20e16a_def\n");
