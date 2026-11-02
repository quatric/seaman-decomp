#include "../decls.h"
undefined4
FUN_8c1f4570_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7,undefined4 s0,undefined4 s4
            )

{
  undefined4 uVar1;
  
  uVar1 = 0x10c8;
  if ((*(int *)(_DAT_8c4727b4 + 0x10c8) != 0) &&
     (uVar1 = vsprintf_like(0x8c4715b8,s0,&s4,ar7), DAT_8c2739f8 != (code *)0x0)) {
    uVar1 = (*DAT_8c2739f8)(0x8c4715b8);
  }
  return uVar1;
}

__asm__(".globl _FUN_8c1f4570\n.set _FUN_8c1f4570, _FUN_8c1f4570_def\n");
