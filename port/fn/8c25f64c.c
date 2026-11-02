#include "../decls.h"
undefined4 FUN_8c25f64c_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = FUN_8c013ec0(ar4,&DAT_8c272038,4,ar7);
  if ((iVar1 != 0) && (iVar1 = FUN_8c013ec0(ar4,&DAT_8c272040,4,ar7), iVar1 != 0)) {
    return 0;
  }
  return 1;
}

__asm__(".globl _FUN_8c25f64c\n.set _FUN_8c25f64c, _FUN_8c25f64c_def\n");
