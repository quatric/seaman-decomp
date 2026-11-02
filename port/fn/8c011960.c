#include "../decls.h"
undefined4 FUN_8c011960_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  uint ar5_00;
  int *ar4_00;
  undefined4 ar6_00;
  undefined4 ar7_00;
  float ain0;
  ulonglong in_dr4;
  undefined8 in_dr12;
  undefined8 in_dr14;
  int iStack_24;
  float fStack_20;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  uStack_c = (undefined4)in_dr14;
  uStack_10 = (undefined4)((ulonglong)in_dr14 >> 0x20);
  uStack_14 = (undefined4)in_dr12;
  uStack_18 = (undefined4)((ulonglong)in_dr12 >> 0x20);
  fStack_20 = (float)(in_dr4 >> 0x20);
  ar5_00 = 0;
  if ((longlong)in_dr4 < 0) {
    ar5_00 = 8;
  }
  ar7_00 = 4;
  ar6_00 = 1;
  if (fStack_20 == 0.0) {
    ar5_00 = ar5_00 | 4;
  }
  else if (ABS(fStack_20) == INFINITY) {
    ar5_00 = ar5_00 | 2;
  }
  ain0 = fStack_20;
  if ((in_dr4 & 0x8000000000000000) != 0) {
    ain0 = -fStack_20;
  }
  uVar1 = 0x20;
  if (((((int)((uint)ain0 & 0x7f800000) >> 0x17) + -0x7f < 0x20) && ((ar5_00 & 4) == 0)) &&
     ((ain0 < 1.0 || (ain0 != 1.0)))) {
    ar4_00 = &iStack_24;
    FUN_8c011c5c(ar4_00,ar5_00,1,4,ain0);
    if (iStack_24 != 0) {
      if ((iStack_24 == 1) || (iStack_24 == 2)) {
        ar4_00 = (int *)0xfffffffe;
        FUN_8c011d50(0xfffffffe,ar5_00,ar6_00,ar7_00,ain0);
      }
      else if ((iStack_24 == 3) || (iStack_24 == 4)) {
        ar4_00 = (int *)0xffffffff;
        FUN_8c011d50(0xffffffff,ar5_00,ar6_00,ar7_00,ain0);
      }
      else if ((((iStack_24 != 5) && (iStack_24 != 6)) && (iStack_24 != 7)) && (iStack_24 != 8)) {
        return iStack_24;
      }
    }
    uVar1 = FUN_8c010a90(ar4_00,ar5_00,ar6_00,ar7_00);
  }
  return uVar1;
}

__asm__(".globl _FUN_8c011960\n.set _FUN_8c011960, _FUN_8c011960_def\n");
