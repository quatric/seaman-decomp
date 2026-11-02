#include "../decls.h"
undefined4 syscall_1f98c4_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
                    
                    
  uVar1 = (*(code *)*(undefined4 *)0x8c0000b8)(0x1);
  return uVar1;
}

__asm__(".globl _syscall_1f98c4\n.set _syscall_1f98c4, _syscall_1f98c4_def\n");
