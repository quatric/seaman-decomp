#include "../decls.h"
undefined4 FUN_8c20e428_def(int ar4,int ar5,int *ar6,undefined4 ar7)

{
  if (((DAT_8c275798 == 2) || (DAT_8c275798 == 3)) &&
     (*(int *)(*(int *)(ar5 * 4 + ar4) + 0xbc) == 1)) {
    *ar6 = ar5 + 1;
    return 0xb;
  }
  return 0;
}

__asm__(".globl _FUN_8c20e428\n.set _FUN_8c20e428, _FUN_8c20e428_def\n");
