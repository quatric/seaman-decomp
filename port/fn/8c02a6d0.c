#include "../decls.h"
undefined4 FUN_8c02a6d0_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7,undefined4 s0)

{
  undefined4 uVar1;
  
  uVar1 = Vec3_ctor_copy(s0,ar4 + 0x200,ar6,ar7);
  return uVar1;
}

__asm__(".globl _FUN_8c02a6d0\n.set _FUN_8c02a6d0, _FUN_8c02a6d0_def\n");
