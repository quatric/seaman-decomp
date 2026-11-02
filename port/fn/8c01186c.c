#include "../decls.h"
undefined4 FUN_8c01186c_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  uint ar4_00;
  undefined4 *ar5_00;
  undefined4 ar6_00;
  undefined4 ar7_00;
  float ain0;
  ulonglong in_dr4;
  
  uVar1 = 4;
  ain0 = (float)(in_dr4 >> 0x20);
  ar4_00 = 0;
  if ((longlong)in_dr4 < 0) {
    ar4_00 = 8;
  }
  ar7_00 = 4;
  ar6_00 = 1;
  if (ain0 == 0.0) {
    ar4_00 = ar4_00 | 4;
  }
  else if (ABS(ain0) == INFINITY) {
    uVar1 = 2;
    ar4_00 = ar4_00 | 2;
  }
  ar5_00 = &DAT_8c1257f8;
  if ((in_dr4 & 0x8000000000000000) != 0) {
    ain0 = -ain0;
  }
  if (((ain0 <= 1.0) && (ain0 != 1.0)) && ((ar4_00 & 4) == 0)) {
    FUN_8c011960(ar4_00,&DAT_8c1257f8,1,4);
    uVar1 = FUN_8c011d50(1,ar5_00,ar6_00,ar7_00,ain0);
  }
  return uVar1;
}

__asm__(".globl _FUN_8c01186c\n.set _FUN_8c01186c, _FUN_8c01186c_def\n");
