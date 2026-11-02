#include "../decls.h"
undefined4 FUN_8c25927e_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int in_r0;
  undefined4 uVar1;
  undefined4 in_r2;
  int ar5_00;
  int *unaff_r14;
  char in_T;
  
  *(undefined4 *)*unaff_r14 = in_r2;
  ar5_00 = *unaff_r14;
  if (in_T == '\x01') {
    *(undefined4 *)(ar5_00 + 0x54) = 0;
  }
  else if (in_r0 == 1) {
    *(undefined4 *)(ar5_00 + 0x54) = 2;
  }
  else if (in_r0 == 2) {
    *(undefined4 *)(ar5_00 + 0x54) = 1;
  }
  FUN_8c20f640(*unaff_r14,ar5_00,ar6,ar7);
  uVar1 = FUN_8c20fe00(*unaff_r14);
  return uVar1;
}

__asm__(".globl _FUN_8c25927e\n.set _FUN_8c25927e, _FUN_8c25927e_def\n");
