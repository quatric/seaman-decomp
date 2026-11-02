#include "../decls.h"
uint FUN_8c01d0cc_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 ar5_00;
  
  if (-1 < *(int *)(0x5630 + ar4)) {
    iVar1 = *(int *)(0x5638 + *(int *)(0x5630 + ar4) * 0x50 + ar4);
    if ((iVar1 == 0) || (iVar1 == 1)) {
      FUN_8c01d3f4(ar4,ar5,ar6,ar7);
    }
    else if (iVar1 == 2) {
      FUN_8c01d338(ar4,ar5,ar6,ar7);
    }
  }
  ar5_00 = *(undefined4 *)(ar4 + 4);
  iVar1 = FUN_8c01cbc8(ar4,ar5_00,ar6,ar7);
  if (iVar1 != 0) {
    FUN_8c01d15c(ar4,ar5_00,ar6,ar7);
  }
  return (uint)(iVar1 != 0);
}

__asm__(".globl _FUN_8c01d0cc\n.set _FUN_8c01d0cc, _FUN_8c01d0cc_def\n");
