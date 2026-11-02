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
uint FUN_8c23b0f8_def(int ar4,float *ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c23b0f8";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  uint uVar1;
  float in_fr3 = 0;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float in_fr11 = 0;
  float fVar7;
  float fVar8;
  
                    
                    
  uVar1 = (uint)(in_fr11 < *(float *)(unsigned)(ar4 + 0x6c)) << 1 | (uint)(0.0 < in_fr3);
  if (uVar1 == 3) {
    fVar7 = 1.0 / SQRT(in_fr11);
    uVar1 = 4;
    fVar8 = 1.0;
    if (*(float *)(unsigned)(ar4 + 0x68) < in_fr11) {
      fVar8 = fVar7 * fVar7 * *(float *)(unsigned)(ar4 + 0x68);
    }
    fVar6 = *(float *)(unsigned)(ar4 + 0x70);
    fVar5 = *(float *)(unsigned)(ar4 + 0x74);
    fVar7 = in_fr3 * fVar7;
    fVar3 = *(float *)(unsigned)(ar4 + 0x10c);
    fVar2 = *(float *)(unsigned)(ar4 + 0x110);
    fVar4 = fVar7 * fVar7;
    ar5[1] = fVar7 * *(float *)(unsigned)(ar4 + 0x108) + ar5[1];
    ar5[2] = fVar7 * fVar3 + ar5[2];
    ar5[3] = fVar7 * fVar2 + ar5[3];
    if (fVar5 < fVar4) {
      if (fVar4 < fVar6) {
        if ((int)(fVar4 * 256.0) < 0x100) {
          fVar8 = *(float *)(unsigned)(((undefined1 *)(unsigned)0x8c26d970) +
                            (*(int *)(unsigned)(ar4 + 0x88) * 0x100 + (int)(fVar4 * 256.0)) * 4) *
                  *(float *)(unsigned)(ar4 + 0x80) * fVar8;
        }
      }
      uVar1 = 4;
      fVar3 = *(float *)(unsigned)(ar4 + 0x114);
      fVar2 = *(float *)(unsigned)(ar4 + 0x11c);
      fVar7 = *(float *)(unsigned)(ar4 + 0x120);
      ar5[5] = fVar8 * *(float *)(unsigned)(ar4 + 0x118) + ar5[5];
      ar5[6] = fVar8 * fVar2 + ar5[6];
      ar5[7] = fVar8 * fVar7 + ar5[7];
      *ar5 = fVar8 * fVar3 + *ar5;
    }
  }
  return uVar1;
}

__asm__(".globl _FUN_8c23b0f8\n.set _FUN_8c23b0f8, _FUN_8c23b0f8_def\n");
