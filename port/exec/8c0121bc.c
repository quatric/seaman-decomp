#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c0121bc_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0121bc";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;
  undefined4 ain0 = (undefined4)(unsigned long)vin0;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 4; for (int i_ = 0; i_ < 4; i_++) z_[i_] = 0; }
  uint ar4_00;
  uint ar4_01;
  undefined4 ar5_00;
  uint ar5_01;
  undefined4 ar6_00;
  undefined4 ar7_00;
  float fVar1;
  float fVar2;
  longlong in_dr4 = 0;
  
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
  if (F32HI(in_dr4) == 0.0) {
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
        (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c012090(ar4_01,ar5_01,8,1));
        (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c011f18(ar4_01,ar5_01,ar6_00,ar7_00));
        ain0 = ({ unsigned long ri0_ = (unsigned long)(fVar1); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 4)); FUN_8c011d50(0xffffffff,ar5_01,ar6_00,ar7_00); });
      }
    }
    else {
      (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c012090(ar4_00,4,8,1));
      ain0 = (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c011f18(ar4_00,ar5_00,ar6_00,ar7_00));
    }
  }
  return ain0;
}

__asm__(".globl _FUN_8c0121bc\n.set _FUN_8c0121bc, _FUN_8c0121bc_def\n");
