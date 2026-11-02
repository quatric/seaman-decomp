#include "../decls.h"
undefined4 FUN_8c235f1a_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 in_r2;
  int *unaff_r14;
  
  *(undefined4 *)*unaff_r14 = in_r2;
  *(undefined4 *)(*unaff_r14 + 0x3c) = 0;
  FUN_8c20f640(*unaff_r14,ar5,ar6,ar7);
  uVar1 = FUN_8c20fe00(*unaff_r14);
  return uVar1;
}

__asm__(".globl _FUN_8c235f1a\n.set _FUN_8c235f1a, _FUN_8c235f1a_def\n");
