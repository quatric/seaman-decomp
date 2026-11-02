#include "../decls.h"
uint FUN_8c20d4aa_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  uint uVar1;
  uint *unaff_r14;
  
  if ((*unaff_r14 & 0xffff) == 3) {
    uVar1 = FUN_8c20d63c(unaff_r14,ar5,ar6,ar7);
  }
  else if ((unaff_r14[6] & 8) == 0) {
    if ((unaff_r14[6] & 0x20) == 0) {
      uVar1 = FUN_8c20d500(unaff_r14,ar5,ar6,ar7);
    }
    else {
      uVar1 = FUN_8c20d5b2(unaff_r14,ar5,ar6,ar7);
    }
  }
  else {
    uVar1 = FUN_8c20d554(unaff_r14,ar5,ar6,ar7);
  }
  unaff_r14[5] = uVar1;
  return uVar1;
}

__asm__(".globl _FUN_8c20d4aa\n.set _FUN_8c20d4aa, _FUN_8c20d4aa_def\n");
