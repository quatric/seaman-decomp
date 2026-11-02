#include "../decls.h"
undefined4 FUN_8c20e368_def(int ar4,int ar5,int *ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = *(int *)(ar5 * 4 + ar4);
  if ((((DAT_8c275798 == 1) && (*(int *)(iVar1 + 4) == 0)) &&
      ((*(int *)(iVar1 + 0x20) == 2 || (*(int *)(iVar1 + 0x20) == 3)))) &&
     (*(int *)(iVar1 + 0x60) == 0)) {
    *ar6 = ar5 + 1;
    return 8;
  }
  return 0;
}

__asm__(".globl _FUN_8c20e368\n.set _FUN_8c20e368, _FUN_8c20e368_def\n");
