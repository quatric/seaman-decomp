#include "../decls.h"
undefined4 FUN_8c0100b6_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  undefined4 *unaff_r13;
  
  if (unaff_r13 != (undefined4 *)0x0) {
    while( true ) {
      in_r0 = 0;
      if ((code *)*unaff_r13 == (code *)0x0) break;
      (*(code *)*unaff_r13)(ar4,ar5,ar6,ar7);
      unaff_r13 = unaff_r13 + 1;
    }
  }
  return in_r0;
}

__asm__(".globl _FUN_8c0100b6\n.set _FUN_8c0100b6, _FUN_8c0100b6_def\n");
