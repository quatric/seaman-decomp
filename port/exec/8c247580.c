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
uint float_to_color_u8_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "float_to_color_u8";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 4; for (int i_ = 0; i_ < 4; i_++) z_[i_] = 0; }
  ulonglong in_dr4 = 0;
  float fVar1;
  uint uVar2;
  ulonglong in_dr6 = 0;
  
  fVar1 = (float)(in_dr4 >> 0x20);
  if (0.0 <= fVar1) {
    if (1.0 < fVar1) {
      in_dr4 = CONCAT44(0x3f800000,(int)in_dr4);
    }
  }
  else {
    in_dr4 = in_dr4 & 0xffffffff;
  }
  uVar2 = (uint)(in_dr4 >> 0x20);
  if (0.0 <= (float)in_dr4) {
    if (1.0 < (float)in_dr4) {
      in_dr4 = CONCAT44(uVar2,0x3f800000);
    }
  }
  else {
    in_dr4 = (ulonglong)uVar2 << 0x20;
  }
  fVar1 = (float)(in_dr6 >> 0x20);
  if (0.0 <= fVar1) {
    if (1.0 < fVar1) {
      in_dr6 = CONCAT44(0x3f800000,(int)in_dr6);
    }
  }
  else {
    in_dr6 = in_dr6 & 0xffffffff;
  }
  uVar2 = (uint)(in_dr6 >> 0x20);
  if (0.0 <= (float)in_dr6) {
    if (1.0 < (float)in_dr6) {
      in_dr6 = CONCAT44(uVar2,0x3f800000);
    }
  }
  else {
    in_dr6 = (ulonglong)uVar2 << 0x20;
  }
  return (int)((float)(in_dr4 >> 0x20) * 255.0) << 0x18 | (int)((float)in_dr4 * 255.0) << 0x10 |
         (int)((float)(in_dr6 >> 0x20) * 255.0) << 8 | (int)((float)in_dr6 * 255.0);
}

__asm__(".globl _float_to_color_u8\n.set _float_to_color_u8, _float_to_color_u8_def\n");
