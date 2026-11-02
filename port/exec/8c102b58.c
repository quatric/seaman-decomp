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
int Class_12c394_m1_102b58_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "Class_12c394_m1_102b58";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  undefined8 in_dr4 = 0;
  
  if (*(float *)(unsigned)(ar4 + 0x1c) <= F32HI(in_dr4)) {
    iVar1 = ar4 + 0x18;
  }
  else {
    (vsp = ((unsigned long)(fr0_ - 0)), Class_12c3a4_m0_1029d0(ar4,ar5,ar6,ar7));
    iVar1 = 0;
  }
  return iVar1;
}

__asm__(".globl _Class_12c394_m1_102b58\n.set _Class_12c394_m1_102b58, _Class_12c394_m1_102b58_def\n");
