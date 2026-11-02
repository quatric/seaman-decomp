#include "../decls.h"
undefined4 FUN_8c1f13f0_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = syscall_1f1128(ar4,ar5,ar6,ar7);
  if (iVar1 == 1) {
    return 0;
  }
  return 1;
}

__asm__(".globl _FUN_8c1f13f0\n.set _FUN_8c1f13f0, _FUN_8c1f13f0_def\n");
