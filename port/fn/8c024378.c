#include "../decls.h"
undefined4 FUN_8c024378_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = FUN_8c013fb4(*(undefined4 *)0x8c27d1ec * 0x40 + 0x8c27c1ec,ar4,0x40,ar7);
  return uVar1;
}

__asm__(".globl _FUN_8c024378\n.set _FUN_8c024378, _FUN_8c024378_def\n");
