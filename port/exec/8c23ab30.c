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
undefined4 FUN_8c23ab30_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c23ab30";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 in_r0 = (undefined4)(unsigned long)vin0;
  float fVar1;
  float fVar2;
  float in_fr11 = 0;
  float fVar3;
  
  if (*(float *)(unsigned)(ar4 + 0x60) != 0.0) {
    in_r0 = 4;
                    
    fVar2 = *(float *)(unsigned)(ar4 + 0x10c);
    fVar1 = *(float *)(unsigned)(ar4 + 0x110);
    if (0.0 < in_fr11) {
      fVar3 = in_fr11 * *(float *)(unsigned)(ar4 + 0x60);
      *(float *)(unsigned)(ar5 + 4) = fVar3 * *(float *)(unsigned)(ar4 + 0x108) + *(float *)(unsigned)(ar5 + 4);
      *(float *)(unsigned)(ar5 + 8) = fVar3 * fVar2 + *(float *)(unsigned)(ar5 + 8);
      *(float *)(unsigned)(ar5 + 0xc) = fVar3 * fVar1 + *(float *)(unsigned)(ar5 + 0xc);
    }
  }
  return in_r0 = 0;
}

__asm__(".globl _FUN_8c23ab30\n.set _FUN_8c23ab30, _FUN_8c23ab30_def\n");
