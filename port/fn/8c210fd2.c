#include "../decls.h"
int FUN_8c210fd2_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = FUN_8c203ca0(_DAT_8c4aa280,_DAT_8c4aa284,ar6,ar7);
  if (iVar1 != 0) {
    return iVar1;
  }
  for (puVar2 = (undefined4 *)&DAT_8c4aa288; puVar2 < (undefined4 *)0x8c4aa29c; puVar2 = puVar2 + 1)
  {
    *puVar2 = 0;
  }
  return 0;
}

__asm__(".globl _FUN_8c210fd2\n.set _FUN_8c210fd2, _FUN_8c210fd2_def\n");
