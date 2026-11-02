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
undefined4 Class_129808_m2_0148d8_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "Class_129808_m2_0148d8";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 32; for (int i_ = 0; i_ < 32; i_++) z_[i_] = 0; }
  undefined4 *ar5_00;
  undefined1 *ar6_00;
  undefined4 uVar1;
  
  ar5_00 = &(*(undefined4 *)(fr0_ - 0x20));
  (*(undefined4 *)(fr0_ - 0x20)) = *(undefined4 *)(unsigned)(ar4 + 4);
  (*(undefined4 *)(fr0_ - 0x1c)) = *(undefined4 *)(unsigned)(ar4 + 8);
  (*(undefined4 *)(fr0_ - 0x18)) = *(undefined4 *)(unsigned)(ar4 + 0xc);
  (*(float *)(fr0_ - 0x14)) = *(float *)(unsigned)(ar4 + 4) - *(float *)(unsigned)(ar4 + 0x14) * 3.0;
  (*(float *)(fr0_ - 0x10)) = *(float *)(unsigned)(ar4 + 8) - *(float *)(unsigned)(ar4 + 0x18) * 3.0;
  (*(float *)(fr0_ - 0xc)) = *(float *)(unsigned)(ar4 + 0xc) - *(float *)(unsigned)(ar4 + 0x1c) * 3.0;
  uVar1 = 2;
  ar6_00 = ((undefined1 *)(unsigned)0x8c27882c);
  (vsp = ((unsigned long)(fr0_ - 32)), FUN_8c016464(*(undefined4 *)(unsigned)(ar4 + 0x28),&(*(undefined4 *)(fr0_ - 0x20)),((undefined1 *)(unsigned)0x8c27882c),2));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 32)), FUN_8c016504(*(undefined4 *)(unsigned)(ar4 + 0x28),ar5_00,ar6_00,uVar1));
  return uVar1;
}

__asm__(".globl _Class_129808_m2_0148d8\n.set _Class_129808_m2_0148d8, _Class_129808_m2_0148d8_def\n");
