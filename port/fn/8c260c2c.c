#include "../decls.h"
undefined4 FUN_8c260c2c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = FUN_8c013ec0(ar4,&DAT_8c272050,4,ar7);
  if ((iVar1 == 0) && (iVar1 = FUN_8c013ec0(ar4 + 8,&DAT_8c272060,4,ar7), iVar1 == 0)) {
    return 1;
  }
  return 0;
}

__asm__(".globl _FUN_8c260c2c\n.set _FUN_8c260c2c, _FUN_8c260c2c_def\n");
