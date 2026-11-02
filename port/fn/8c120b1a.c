#include "../decls.h"
uint FUN_8c120b1a_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  uint uVar1;
  
  uVar1 = FUN_8c1113d0(ar5,(int)0xf8,ar4,ar6);
  return (uint)((uVar1 & 0xff) == 0);
}

__asm__(".globl _FUN_8c120b1a\n.set _FUN_8c120b1a, _FUN_8c120b1a_def\n");
