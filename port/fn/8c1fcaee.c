#include "../decls.h"
undefined4 thunk_FUN_8c1fcfbe_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)0x8c1fcfbe)();
  return uVar1;
}

__asm__(".globl _thunk_FUN_8c1fcfbe\n.set _thunk_FUN_8c1fcfbe, _thunk_FUN_8c1fcfbe_def\n");
