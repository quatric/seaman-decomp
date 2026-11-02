#include "../decls.h"
undefined4 thunk_FUN_8c25ecdc_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)0x8c25ecdc)();
  return uVar1;
}

__asm__(".globl _thunk_FUN_8c25ecdc\n.set _thunk_FUN_8c25ecdc, _thunk_FUN_8c25ecdc_def\n");
