#include "../decls.h"
undefined4 FUN_8c01f6dc_def(int ar4,undefined4 ar5,int ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int ar6_00;
  
  uVar1 = 3;
  if (ar6 < 3) {
    ar6_00 = ar6;
    strcpy(ar4 + ar6 * 0x16034 + 0x38,ar5,ar6,ar7,ar5);
    uVar1 = FUN_8c1f3078(ar4 + ar6 * 0x16034 + 0x5c,0x800,ar6_00,ar7);
    *(undefined4 *)(ar4 + ar6 * 0x16034 + 0x58) = uVar1;
    uVar1 = FUN_8c1f3926(ar4 + ar6 * 0x16034 + 0x38,*(undefined4 *)(ar4 + ar6 * 0x16034 + 0x58),
                         ar6_00,ar7);
  }
  return uVar1;
}

__asm__(".globl _FUN_8c01f6dc\n.set _FUN_8c01f6dc, _FUN_8c01f6dc_def\n");
