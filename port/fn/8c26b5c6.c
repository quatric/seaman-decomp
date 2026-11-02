#include "../decls.h"
undefined4 FUN_8c26b5c6_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  
  if (ar4 != 0) {
    in_r0 = memset(ar4,0,0x30,ar7);
    *(undefined4 *)(ar4 + 4) = 0;
  }
  return in_r0;
}

__asm__(".globl _FUN_8c26b5c6\n.set _FUN_8c26b5c6, _FUN_8c26b5c6_def\n");
