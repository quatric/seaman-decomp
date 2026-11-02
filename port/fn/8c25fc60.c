#include "../decls.h"
undefined4 FUN_8c25fc60_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7,undefined4 ain0)

{
  undefined2 *unaff_r14;
  undefined4 in_PR;
  
  if (unaff_r14 != (undefined2 *)0x0) {
    FUN_8c264f6a(*(undefined4 *)(unaff_r14 + 4),ar5,ar6,ar7,in_PR);
    ain0 = memset(unaff_r14,0,0xac,ar7);
    *unaff_r14 = 0;
  }
  return ain0;
}

__asm__(".globl _FUN_8c25fc60\n.set _FUN_8c25fc60, _FUN_8c25fc60_def\n");
