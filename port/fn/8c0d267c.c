#include "../decls.h"
uint FUN_8c0d267c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  uint uVar1;
  
  uVar1 = *(uint *)(ar4 + 0x28) | 2;
  *(uint *)(ar4 + 0x28) = uVar1;
  return uVar1;
}

__asm__(".globl _FUN_8c0d267c\n.set _FUN_8c0d267c, _FUN_8c0d267c_def\n");
