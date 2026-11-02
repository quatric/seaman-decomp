#include "../decls.h"
undefined4 FUN_8c25acc2_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  uint in_r3;
  int unaff_r14;
  
  if (((in_r3 & *(uint *)(unaff_r14 + 0x18)) == 0) &&
     ((*(uint *)(unaff_r14 + 0x18) & 0x11000000) == 0)) {
    iVar1 = FUN_8c20cc56(unaff_r14 + 0x18,ar5,ar6,ar7);
  }
  else {
    DAT_8c277cd4 = *(int *)(unaff_r14 + 0x34) + -4;
    iVar1 = FUN_8c20cc56(&DAT_8c277cb8,ar5,ar6,ar7);
  }
  if (iVar1 == 0) {
    return 1;
  }
  _DAT_8c4aa6b4 = 8;
  return 0xffffffff;
}

__asm__(".globl _FUN_8c25acc2\n.set _FUN_8c25acc2, _FUN_8c25acc2_def\n");
