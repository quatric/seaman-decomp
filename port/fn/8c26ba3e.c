#include "../decls.h"
undefined4 FUN_8c26ba3e_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  int unaff_r14;
  
  if (unaff_r14 != 0) {
    memset(unaff_r14,0,0x30,ar7);
    in_r0 = 0;
    *(undefined1 *)(unaff_r14 + 4) = 0;
  }
  return in_r0;
}

__asm__(".globl _FUN_8c26ba3e\n.set _FUN_8c26ba3e, _FUN_8c26ba3e_def\n");
