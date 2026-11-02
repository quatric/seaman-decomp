#include "../decls.h"
undefined4 malloc_thunk_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
                    
                    
  uVar1 = (**(code **)*(undefined4 *)0x8c475ee0)();
  return uVar1;
}

__asm__(".globl _malloc_thunk\n.set _malloc_thunk, _malloc_thunk_def\n");
