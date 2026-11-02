#include "../decls.h"
undefined4 FUN_8c25f01e_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = FUN_8c013ec0(ar4,&DAT_8c272028,4,ar7);
  if ((iVar1 == 0) && (iVar1 = FUN_8c013ec0(ar4 + 8,&DAT_8c272030,4,ar7), iVar1 == 0)) {
    return 1;
  }
  return 0;
}

__asm__(".globl _FUN_8c25f01e\n.set _FUN_8c25f01e, _FUN_8c25f01e_def\n");
