#include "../decls.h"
undefined4 FUN_8c219954_def(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined1 *ain0;
  int iVar1;
  undefined4 uVar2;
  int ar4_00;
  
  uVar2 = _DAT_8c4aa510;
  ain0 = &DAT_8c4aa4f0;
  ar4_00 = *ar4;
  if ((((_DAT_8c4aa4f0 & 0x100) == 0) || (ain0 = (undefined1 *)0x14, (float)ar4[5] <= 0.0)) ||
     (iVar1 = FUN_8c217e18(ar4,ar5,ar6,ar7), ain0 = (undefined1 *)0x0, iVar1 == 0)) {
    if (ar4_00 != 0) {
      FUN_8c21982e(ar4_00,uVar2,ar6,ar7,ain0);
    }
    if (ar4[1] != 0) {
      FUN_8c21908e(ar4[1],_DAT_8c4c0fa0,uVar2,ar7);
    }
    uVar2 = 0;
  }
  else {
    uVar2 = 0xffffffff;
  }
  return uVar2;
}

__asm__(".globl _FUN_8c219954\n.set _FUN_8c219954, _FUN_8c219954_def\n");
