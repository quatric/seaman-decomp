#include "../decls.h"
undefined4 FUN_8c2593b4_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int in_r0;
  undefined4 uVar1;
  int ar5_00;
  int *unaff_r14;
  
  *(undefined4 *)*unaff_r14 = ar6;
  ar5_00 = *unaff_r14;
  if (in_r0 == 0) {
    *(undefined4 *)(ar5_00 + 0x18) = 0;
  }
  else if (in_r0 == 1) {
    *(undefined4 *)(ar5_00 + 0x18) = 1;
  }
  else if (in_r0 == 2) {
    *(undefined4 *)(ar5_00 + 0x18) = ar6;
  }
  else if (in_r0 == 3) {
    *(undefined4 *)(ar5_00 + 0x18) = 3;
  }
  FUN_8c20f640(*unaff_r14,ar5_00,ar6,ar7);
  uVar1 = FUN_8c20fe00(*unaff_r14);
  return uVar1;
}

__asm__(".globl _FUN_8c2593b4\n.set _FUN_8c2593b4, _FUN_8c2593b4_def\n");
