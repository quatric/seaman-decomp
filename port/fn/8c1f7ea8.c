#include "../decls.h"
uint FUN_8c1f7ea8_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  uint uVar1;
  
  uVar1 = FUN_8c1f7eba(ar4,ar5,ar6,ar7);
  return uVar1 >> 8 & 3;
}

__asm__(".globl _FUN_8c1f7ea8\n.set _FUN_8c1f7ea8, _FUN_8c1f7ea8_def\n");
