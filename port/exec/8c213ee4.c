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
undefined4 FUN_8c213ee4_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c213ee4";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  float fVar1;
  float fVar2;
  undefined8 in_dr4 = 0;
  
  fVar1 = F32HI(in_dr4);
  if (-1.0 < fVar1) {
    in_dr4 = CONCAT44(0xbf800000,(int)in_dr4);
  }
  fVar2 = (float)in_dr4;
  if (fVar1 < -65535.0) {
    in_dr4 = CONCAT44(0xc77fff00,fVar2);
  }
  fVar1 = (float)in_dr4;
  if (-1.0 < fVar2) {
    in_dr4 = CONCAT44((int)((ulonglong)in_dr4 >> 0x20),0xbf800000);
  }
  fVar2 = (float)in_dr4;
  if (fVar1 < -65535.0) {
    fVar2 = -65535.0;
  }
  (*(undefined4 *)(unsigned)(unsigned)0x8c4aa4d4) = -F32HI(in_dr4);
  (*(undefined4 *)(unsigned)(unsigned)0x8c4aa4d8) = -fVar2;
  return 0x8c213f18;
}

__asm__(".globl _FUN_8c213ee4\n.set _FUN_8c213ee4, _FUN_8c213ee4_def\n");
