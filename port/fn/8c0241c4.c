#include "../decls.h"
undefined4 FUN_8c0241c4_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  vec3_clear(ar4,ar5,ar6,ar7);
  uVar1 = vec3_clear(ar4 + 0x10,ar5,ar6,ar7);
  return uVar1;
}

__asm__(".globl _FUN_8c0241c4\n.set _FUN_8c0241c4, _FUN_8c0241c4_def\n");
