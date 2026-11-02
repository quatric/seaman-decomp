#include "../decls.h"
undefined4 FUN_8c201f8a_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = thunk_FUN_8c1f461c(ar4,ar5,ar6,ar7);
  if (iVar1 == 0) {
    return 0;
  }
  return 1;
}

__asm__(".globl _FUN_8c201f8a\n.set _FUN_8c201f8a, _FUN_8c201f8a_def\n");
