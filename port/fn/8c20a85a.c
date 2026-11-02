#include "../decls.h"
undefined4 FUN_8c20a85a_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined *puVar1;
  undefined4 in_r0;
  uint unaff_r13;
  uint unaff_r14;
  
  puVar1 = (&FUN_8c20732e);
  for (; unaff_r14 <= unaff_r13; unaff_r14 = unaff_r14 + 0x20) {
    in_r0 = (*(code *)puVar1)(unaff_r14,ar5,ar6,ar7);
  }
  return in_r0;
}

__asm__(".globl _FUN_8c20a85a\n.set _FUN_8c20a85a, _FUN_8c20a85a_def\n");
