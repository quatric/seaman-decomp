#include "../decls.h"
undefined4 FUN_8c12025e_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  uint uVar1;
  
  uVar1 = FUN_8c11ffa8(ar4,ar5,ar6,ar7);
  if ((uVar1 & 0xff) != 0) {
    return 1;
  }
  return 0;
}

__asm__(".globl _FUN_8c12025e\n.set _FUN_8c12025e, _FUN_8c12025e_def\n");
