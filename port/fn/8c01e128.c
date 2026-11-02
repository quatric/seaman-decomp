#include "../decls.h"
undefined4 FUN_8c01e128_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = malloc_thunk(ar4,ar5,ar6,ar7);
  return uVar1;
}

__asm__(".globl _FUN_8c01e128\n.set _FUN_8c01e128, _FUN_8c01e128_def\n");
