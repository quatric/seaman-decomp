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
undefined4 FUN_8c212740_def(int ar4,float *ar5,float *ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c212740";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;
  undefined4 ain0 = (undefined4)(unsigned long)vin0;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  float fVar1;
  float fVar2;
  float fVar3;
  undefined8 in_xd0 = 0;
  float in_xf3 = 0;
  undefined8 in_xd4 = 0;
  undefined8 in_xd6 = 0;
  undefined8 in_xd8 = 0;
  undefined8 in_xd10 = 0;
  float in_xf12 = 0;
  float in_xf13 = 0;
  float in_xf15 = 0;
  
  fVar2 = *ar5;
  fVar1 = ar5[1];
  fVar3 = ar5[2];
  if (ar4 != 0) {
                    
    fVar2 = *(float *)(unsigned)(ar4 + 0x34);
    *ar6 = *(float *)(unsigned)(ar4 + 0x30);
                    
    fVar1 = *(float *)(unsigned)(ar4 + 0x38);
    ar6[1] = fVar2;
                    
    ar6[2] = fVar1;
    return 0x38;
  }
                    
  ar6[2] = in_xf3 * fVar1 + F32HI(in_xd6) * fVar2 +
           F32HI(in_xd10) * 1.0 + in_xf15 * fVar3;
  ar6[1] = (float)in_xd0 * fVar1 + (float)in_xd4 * fVar2 + (float)in_xd8 * 1.0 + in_xf12 * fVar3;
  *ar6 = F32HI(in_xd0) * fVar1 + F32HI(in_xd4) * fVar2 +
         F32HI(in_xd8) * 1.0 + in_xf13 * fVar3;
  return ain0;
}

__asm__(".globl _FUN_8c212740\n.set _FUN_8c212740, _FUN_8c212740_def\n");
