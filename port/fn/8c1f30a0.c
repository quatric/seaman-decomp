#include "../decls.h"
undefined4 FUN_8c1f30a0_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  short sVar1;
  undefined4 in_r0;
  int unaff_r14;
  
  if ((unaff_r14 != 0) && (in_r0 = 0x4c, *(short *)(unaff_r14 + 0x4c) != 0)) {
    sVar1 = *(short *)(unaff_r14 + 0x50);
    if ((sVar1 == 2) || ((sVar1 == 3 || (sVar1 == 4)))) {
      FUN_8c1f367a(unaff_r14,ar5,ar6,ar7);
    }
    in_r0 = 0x4c;
    *(undefined2 *)(unaff_r14 + 0x4c) = 0;
  }
  return in_r0;
}

__asm__(".globl _FUN_8c1f30a0\n.set _FUN_8c1f30a0, _FUN_8c1f30a0_def\n");
