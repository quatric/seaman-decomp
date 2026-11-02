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
uint FUN_8c23b3d8_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c23b3d8";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  uint uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float in_fr11 = 0;
  
  *(float *)(unsigned)(ar5 + 4) = *(float *)(unsigned)(ar5 + 4) + *(float *)(unsigned)(ar4 + 0xf8);
  fVar2 = *(float *)(unsigned)(ar4 + 0xfc);
  *(float *)(unsigned)(ar5 + 8) = *(float *)(unsigned)(ar5 + 8) + fVar2;
  *(float *)(unsigned)(ar5 + 0xc) = *(float *)(unsigned)(ar5 + 0xc) + *(float *)(unsigned)(ar4 + 0x100);
                    
                    
  uVar1 = (uint)(in_fr11 < *(float *)(unsigned)(ar4 + 0x6c)) << 1 | (uint)(0.0 < fVar2);
  if (uVar1 == 3) {
    uVar1 = 4;
    if (*(float *)(unsigned)(ar4 + 0x68) < in_fr11) {
      fVar2 = (fVar2 / in_fr11) * *(float *)(unsigned)(ar4 + 0x68);
    }
    fVar2 = fVar2 * (1.0 / SQRT(in_fr11));
    fVar4 = *(float *)(unsigned)(ar4 + 0x10c);
    fVar3 = *(float *)(unsigned)(ar4 + 0x110);
    *(float *)(unsigned)(ar5 + 4) = fVar2 * *(float *)(unsigned)(ar4 + 0x108) + *(float *)(unsigned)(ar5 + 4);
    *(float *)(unsigned)(ar5 + 8) = fVar2 * fVar4 + *(float *)(unsigned)(ar5 + 8);
    *(float *)(unsigned)(ar5 + 0xc) = fVar2 * fVar3 + *(float *)(unsigned)(ar5 + 0xc);
  }
  return uVar1;
}

__asm__(".globl _FUN_8c23b3d8\n.set _FUN_8c23b3d8, _FUN_8c23b3d8_def\n");
