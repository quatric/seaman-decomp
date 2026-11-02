#include "../decls.h"
undefined4 FUN_8c1fcf6e_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = memmove(ar4 * 0x80 + 0x8c475fc0 + 0x6c,8);
  return uVar1;
}

__asm__(".globl _FUN_8c1fcf6e\n.set _FUN_8c1fcf6e, _FUN_8c1fcf6e_def\n");
