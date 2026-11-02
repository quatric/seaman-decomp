#include "../decls.h"
undefined4 syscall_1f1100_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
                    
                    
  uVar1 = (*(code *)*(undefined4 *)0x8c0000bc)(0,0x2);
  return uVar1;
}

__asm__(".globl _syscall_1f1100\n.set _syscall_1f1100, _syscall_1f1100_def\n");
