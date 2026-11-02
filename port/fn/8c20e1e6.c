#include "../decls.h"
undefined4 FUN_8c20e1e6_def(int ar4,int ar5,int *ar6,undefined4 ar7)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(ar5 * 4 + ar4);
  if (((((DAT_8c275798 != 2) && (DAT_8c275798 != 3)) ||
       ((*(int *)(iVar1 + 4) != 0 && (*(int *)(iVar1 + 4) != 2)))) ||
      (((((DAT_8c275798 != 3 || (iVar2 = *(int *)(iVar1 + 8), iVar2 == 0)) || (iVar2 == 2)) ||
        (iVar2 == 4)) &&
       (((DAT_8c275798 != 2 || (*(int *)(iVar1 + 8) == 0)) || (*(int *)(iVar1 + 8) == 2)))))) &&
     ((((DAT_8c275798 != 1 || (*(int *)(iVar1 + 4) != 0)) ||
       ((*(int *)(iVar1 + 8) == 0 || (*(int *)(iVar1 + 8) == 2)))) &&
      (((*(int *)(iVar1 + 4) != 1 || (*(int *)(iVar1 + 8) == 1)) || (*(int *)(iVar1 + 8) == 3))))))
  {
    return 0;
  }
  *ar6 = ar5 + 1;
  return 4;
}

__asm__(".globl _FUN_8c20e1e6\n.set _FUN_8c20e1e6, _FUN_8c20e1e6_def\n");
