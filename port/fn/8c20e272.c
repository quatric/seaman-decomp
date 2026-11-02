#include "../decls.h"
undefined4 FUN_8c20e272_def(int ar4,int ar5,int *ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = *(int *)(ar5 * 4 + ar4);
  if (((((DAT_8c275798 != 2) && (DAT_8c275798 != 3)) ||
       ((*(int *)(iVar1 + 4) != 0 && (*(int *)(iVar1 + 4) != 2)))) ||
      (((*(int *)(iVar1 + 0x20) != 2 && (*(int *)(iVar1 + 0x20) != 3)) ||
       (*(int *)(iVar1 + 0x5c) != 0)))) &&
     ((((DAT_8c275798 != 1 || (*(int *)(iVar1 + 4) != 0)) ||
       ((*(int *)(iVar1 + 0x20) != 2 && (*(int *)(iVar1 + 0x20) != 3)))) ||
      (*(int *)(iVar1 + 0x5c) != 0)))) {
    return 0;
  }
  *ar6 = ar5 + 1;
  return 5;
}

__asm__(".globl _FUN_8c20e272\n.set _FUN_8c20e272, _FUN_8c20e272_def\n");
