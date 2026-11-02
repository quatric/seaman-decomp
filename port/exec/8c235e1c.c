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
undefined4 FUN_8c235e1c_def(int *ar4,int ar5,undefined4 *ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c235e1c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 4; for (int i_ = 0; i_ < 4; i_++) z_[i_] = 0; }
  float fVar1;
  undefined4 uVar2;
  float *pfVar3;
  undefined4 *puVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float in_fr5 = 0;
  float in_fr4 = 0;
  float in_fr7 = 0;
  float in_fr6 = 0;
  undefined4 uVar9;
  undefined8 in_xd0 = 0;
  float in_xf2 = 0;
  float in_xf3 = 0;
  float in_xf4 = 0;
  float in_xf5 = 0;
  float in_xf6 = 0;
  float in_xf7 = 0;
  undefined8 in_xd8 = 0;
  undefined8 in_xd10 = 0;
  float in_xf12 = 0;
  float in_xf13 = 0;
  float in_xf14 = 0;
  float in_xf15 = 0;
  bool bVar10;
  
  pfVar3 = (float *)(unsigned)*ar4;
  puVar4 = (undefined4 *)(unsigned)(uint)ar4[1];
  uVar2 = 0;
  do {
    fVar6 = *pfVar3;
    fVar5 = pfVar3[1];
    fVar8 = pfVar3[2];
    pfVar3 = pfVar3 + 3;
                    
    fVar1 = in_xf3 * fVar5 + in_xf7 * fVar6 + F32HI(in_xd10) * 1.0 +
            in_xf15 * fVar8;
    uVar9 = 0xffffffff;
    if (puVar4 != (undefined4 *)(unsigned)0x0) {
      uVar9 = *puVar4;
      puVar4 = puVar4 + 1;
    }
    fVar7 = (in_xf2 * fVar5 + in_xf6 * fVar6 + (float)in_xd10 * 1.0 + in_xf14 * fVar8) / fVar1;
    if ((*(undefined4 *)(unsigned)(unsigned)0x8c4aa4d8) < fVar1) {
      return 0xffffffff;
    }
    bVar10 = fVar1 <= (*(undefined4 *)(unsigned)(unsigned)0x8c4aa4d4);
    ar6[3] = (F32HI(in_xd0) * fVar5 + in_xf5 * fVar6 +
              F32HI(in_xd8) * 1.0 + in_xf13 * fVar8) * in_fr4 * fVar7 + in_fr6;
    ar6[2] = ((float)in_xd0 * fVar5 + in_xf4 * fVar6 + (float)in_xd8 * 1.0 + in_xf12 * fVar8) *
             in_fr5 * fVar7 + in_fr7;
    ar6[1] = fVar7;
    *ar6 = uVar9;
    if (bVar10) {
      uVar2 = 1;
    }
    ar5 = ar5 + -1;
    ar6 = ar6 + 4;
  } while (ar5 != 0);
  return uVar2;
}

__asm__(".globl _FUN_8c235e1c\n.set _FUN_8c235e1c, _FUN_8c235e1c_def\n");
