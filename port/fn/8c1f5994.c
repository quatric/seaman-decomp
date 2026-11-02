#include "../decls.h"
undefined4 thunk_FUN_8c1f4ec6_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = FUN_8c1f4ec6(ar4,ar5,ar6,ar7);
  return uVar1;
}

__asm__(".globl _thunk_FUN_8c1f4ec6\n.set _thunk_FUN_8c1f4ec6, _thunk_FUN_8c1f4ec6_def\n");
