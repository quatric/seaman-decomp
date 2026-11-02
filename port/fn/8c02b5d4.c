#include "../decls.h"
undefined4 FUN_8c02b5d4_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7,undefined4 s0)

{
  undefined4 uVar1;
  
  uVar1 = vec3_copy_8c02b5fc(s0,ar4 + 0x338,ar6,ar7);
  return uVar1;
}

__asm__(".globl _FUN_8c02b5d4\n.set _FUN_8c02b5d4, _FUN_8c02b5d4_def\n");
