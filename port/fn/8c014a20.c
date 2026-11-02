#include "../decls.h"
uint FUN_8c014a20_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  uint uVar1;
  
  uVar1 = *(uint *)(ar4 + 0x28) | 0x10;
  *(uint *)(ar4 + 0x28) = uVar1;
  return uVar1;
}

__asm__(".globl _FUN_8c014a20\n.set _FUN_8c014a20, _FUN_8c014a20_def\n");
