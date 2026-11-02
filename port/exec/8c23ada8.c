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
undefined4 FUN_8c23ada8_def(int ar4,float *ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c23ada8";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 in_r0 = (undefined4)(unsigned long)vin0;
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float in_fr11 = 0;
  
  if (*(float *)(unsigned)(ar4 + 0x60) != 0.0) {
                    
    in_r0 = 4;
    fVar1 = *(float *)(unsigned)(ar4 + 0x60) * in_fr11 * in_fr11;
    if (0.0 < in_fr11) {
      if (*(float *)(unsigned)(ar4 + 0x70) < *(float *)(unsigned)(ar4 + 100)) {
        fVar4 = *(float *)(unsigned)(ar4 + 0x114);
        fVar3 = *(float *)(unsigned)(ar4 + 0x11c);
        fVar2 = *(float *)(unsigned)(ar4 + 0x120);
        ar5[5] = fVar1 * *(float *)(unsigned)(ar4 + 0x118) + ar5[5];
        ar5[6] = fVar1 * fVar3 + ar5[6];
        ar5[7] = fVar1 * fVar2 + ar5[7];
        *ar5 = fVar1 * fVar4 + *ar5;
      }
      fVar3 = *(float *)(unsigned)(ar4 + 0x10c);
      fVar2 = *(float *)(unsigned)(ar4 + 0x110);
      ar5[1] = fVar1 * *(float *)(unsigned)(ar4 + 0x108) + ar5[1];
      ar5[2] = fVar1 * fVar3 + ar5[2];
      ar5[3] = fVar1 * fVar2 + ar5[3];
    }
  }
  return in_r0 = 0;
}

__asm__(".globl _FUN_8c23ada8\n.set _FUN_8c23ada8, _FUN_8c23ada8_def\n");
