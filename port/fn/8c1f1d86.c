#include "../decls.h"
undefined4 thunk_FUN_8c1f38c0_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)0x8c1f38c0)();
  return uVar1;
}

__asm__(".globl _thunk_FUN_8c1f38c0\n.set _thunk_FUN_8c1f38c0, _thunk_FUN_8c1f38c0_def\n");
