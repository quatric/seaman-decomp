#include "../decls.h"
undefined4 FUN_8c1f8094_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = syscall_1f3b1c(0,ar5,ar6,ar7);
  if (iVar1 != 0) {
    return 0;
  }
  uVar2 = syscall_1f3b44();
  return uVar2;
}

__asm__(".globl _FUN_8c1f8094\n.set _FUN_8c1f8094, _FUN_8c1f8094_def\n");
