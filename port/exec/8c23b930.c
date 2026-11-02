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
undefined4 FUN_8c23b930_def(int ar4,float *ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c23b930";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float in_fr11 = 0;
  float fVar7;
  
  ar5[1] = ar5[1] + *(float *)(unsigned)(ar4 + 0xf8);
  ar5[2] = ar5[2] + *(float *)(unsigned)(ar4 + 0xfc);
  uVar1 = 0xc;
  ar5[3] = ar5[3] + *(float *)(unsigned)(ar4 + 0x100);
  fVar2 = *(float *)(unsigned)(ar4 + 0x60);
  if (fVar2 != 0.0) {
                    
    uVar1 = 4;
    if (0.0 < in_fr11) {
      fVar7 = in_fr11 * in_fr11;
      fVar6 = *(float *)(unsigned)(ar4 + 0x70);
      fVar5 = *(float *)(unsigned)(ar4 + 0x74);
      fVar4 = *(float *)(unsigned)(ar4 + 0x10c);
      fVar3 = *(float *)(unsigned)(ar4 + 0x110);
      ar5[1] = in_fr11 * *(float *)(unsigned)(ar4 + 0x108) + ar5[1];
      ar5[2] = in_fr11 * fVar4 + ar5[2];
      ar5[3] = in_fr11 * fVar3 + ar5[3];
      if (fVar5 < fVar7) {
        if (fVar7 < fVar6) {
          uVar1 = 0x100;
          if ((int)(fVar7 * 256.0) < 0x100) {
            fVar2 = *(float *)(unsigned)(((undefined1 *)(unsigned)0x8c26d970) +
                              (*(int *)(unsigned)(ar4 + 0x88) * 0x100 + (int)(fVar7 * 256.0)) * 4) *
                    *(float *)(unsigned)(ar4 + 0x80) * fVar2;
          }
        }
        fVar5 = *(float *)(unsigned)(ar4 + 0x114);
        fVar4 = *(float *)(unsigned)(ar4 + 0x11c);
        fVar3 = *(float *)(unsigned)(ar4 + 0x120);
        ar5[5] = fVar2 * *(float *)(unsigned)(ar4 + 0x118) + ar5[5];
        ar5[6] = fVar2 * fVar4 + ar5[6];
        ar5[7] = fVar2 * fVar3 + ar5[7];
        *ar5 = fVar2 * fVar5 + *ar5;
      }
    }
  }
  return uVar1;
}

__asm__(".globl _FUN_8c23b930\n.set _FUN_8c23b930, _FUN_8c23b930_def\n");
