#include "../decls.h"
undefined4 thunk_FUN_8c013cd8_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)0x8c013cd8)();
  return uVar1;
}

__asm__(".globl _thunk_FUN_8c013cd8\n.set _thunk_FUN_8c013cd8, _thunk_FUN_8c013cd8_def\n");
