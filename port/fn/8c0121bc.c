#include "../decls.h"
undefined4 FUN_8c0121bc_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7,undefined4 ain0)

{
  uint ar4_00;
  uint ar4_01;
  undefined4 ar5_00;
  uint ar5_01;
  undefined4 ar6_00;
  undefined4 ar7_00;
  float fVar1;
  float fVar2;
  longlong in_dr4;
  
  fVar2 = (float)in_dr4;
  ar6_00 = 8;
  ar7_00 = 1;
  ar5_00 = 4;
  ar4_00 = 0;
  if ((int)fVar2 < 0) {
    ar4_00 = 8;
  }
  if (fVar2 == 0.0) {
    ar4_00 = ar4_00 | 4;
  }
  else if (ABS(fVar2) == INFINITY) {
    ar4_00 = ar4_00 | 2;
  }
  if ((float)((ulonglong)in_dr4 >> 0x20) == 0.0) {
    ain0 = 0xc;
    if ((ar4_00 & 0xc) != 0) {
      ain0 = 0xc;
    }
  }
  else if ((ar4_00 & 4) == 0) {
    if (in_dr4 < 0) {
      ar5_01 = (uint)fVar2 & 0x80000000;
      ar4_01 = (uint)fVar2 & 0x7f800000;
      fVar1 = fVar2;
      if (ar4_01 < 0x4b000000) {
        fVar1 = (float)(int)fVar2;
      }
      fVar1 = (float)((uint)fVar1 | ar5_01);
      if ((fVar2 == fVar1) && ((ar4_00 & 2) == 0)) {
        FUN_8c012090(ar4_01,ar5_01,8,1);
        FUN_8c011f18(ar4_01,ar5_01,ar6_00,ar7_00);
        ain0 = FUN_8c011d50(0xffffffff,ar5_01,ar6_00,ar7_00,fVar1);
      }
    }
    else {
      FUN_8c012090(ar4_00,4,8,1);
      ain0 = FUN_8c011f18(ar4_00,ar5_00,ar6_00,ar7_00);
    }
  }
  return ain0;
}

__asm__(".globl _FUN_8c0121bc\n.set _FUN_8c0121bc, _FUN_8c0121bc_def\n");
