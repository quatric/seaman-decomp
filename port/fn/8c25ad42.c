#include "../decls.h"
undefined4 FUN_8c25ad42_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = FUN_8c20a7e0(ar4,ar5,ar6,ar7);
  if (iVar1 == 0) {
    return 1;
  }
  return 0xffffffff;
}

__asm__(".globl _FUN_8c25ad42\n.set _FUN_8c25ad42, _FUN_8c25ad42_def\n");
