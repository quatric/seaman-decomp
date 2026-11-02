#include "../decls.h"
undefined4 FUN_8c20ad04_def(int ar4,int ar5,int ar6,int ar7,int s0)

{
  uint uVar1;
  uint ar7_00;
  
  uVar1 = 0;
  if (ar5 == 3) {
    uVar1 = 0x1000000;
  }
  ar7_00 = ar7 - 1U & 0x3f;
  uVar1 = (s0 - 1U & 0x3f) << 8 | ar7_00 | uVar1;
  if (ar6 != 0) {
    uVar1 = 0x10000 | uVar1;
  }
  pvr_20a844((int)0x14c,uVar1,ar6,ar7_00);
  pvr_20a844((int)0x148,*(undefined4 *)(ar4 + 0x1c),ar6,ar7_00);
  return 0;
}

__asm__(".globl _FUN_8c20ad04\n.set _FUN_8c20ad04, _FUN_8c20ad04_def\n");
