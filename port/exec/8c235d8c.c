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
undefined4 FUN_8c235d8c_def(int *ar4,int ar5,undefined4 *ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c235d8c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 4; for (int i_ = 0; i_ < 4; i_++) z_[i_] = 0; }
  float fVar1;
  short sVar2;
  short sVar3;
  undefined4 uVar4;
  float *pfVar5;
  undefined4 *puVar6;
  short *psVar7;
  undefined4 uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float in_fr5 = 0;
  float in_fr4 = 0;
  float in_fr7 = 0;
  float in_fr6 = 0;
  undefined8 in_xd0 = 0;
  float in_xf2 = 0;
  float in_xf3 = 0;
  float in_xf4 = 0;
  float in_xf5 = 0;
  float in_xf6 = 0;
  float in_xf7 = 0;
  float in_xf8 = 0;
  float in_xf9 = 0;
  undefined8 in_xd10 = 0;
  float in_xf12 = 0;
  float in_xf13 = 0;
  float in_xf14 = 0;
  float in_xf15 = 0;
  bool bVar13;
  
  pfVar5 = (float *)(unsigned)*ar4;
  puVar6 = (undefined4 *)(unsigned)(uint)ar4[1];
  psVar7 = (short *)(unsigned)(uint)ar4[2];
  uVar4 = 0;
  do {
    fVar10 = *pfVar5;
    bVar13 = puVar6 == (undefined4 *)(unsigned)0x0;
    fVar9 = pfVar5[1];
    fVar12 = pfVar5[2];
    pfVar5 = pfVar5 + 3;
                    
    fVar1 = in_xf3 * fVar9 + in_xf7 * fVar10 + F32HI(in_xd10) * 1.0 +
            in_xf15 * fVar12;
    uVar8 = *puVar6;
    puVar6 = puVar6 + 1;
    if (bVar13) {
      uVar8 = 0xffffffff;
    }
    fVar11 = (in_xf2 * fVar9 + in_xf6 * fVar10 + (float)in_xd10 * 1.0 + in_xf14 * fVar12) / fVar1;
    sVar2 = *psVar7;
    if ((*(undefined4 *)(unsigned)(unsigned)0x8c4aa4d8) < fVar1) {
      return 0xffffffff;
    }
    bVar13 = fVar1 <= (*(undefined4 *)(unsigned)(unsigned)0x8c4aa4d4);
    sVar3 = psVar7[1];
    psVar7 = psVar7 + 2;
    ar6[5] = (F32HI(in_xd0) * fVar9 + in_xf5 * fVar10 + in_xf9 * 1.0 +
             in_xf13 * fVar12) * in_fr4 * fVar11 + in_fr6;
    ar6[4] = ((float)in_xd0 * fVar9 + in_xf4 * fVar10 + in_xf8 * 1.0 + in_xf12 * fVar12) * in_fr5 *
             fVar11 + in_fr7;
    ar6[3] = fVar11;
    ar6[2] = (float)(int)sVar2 * 0.00390625;
    ar6[1] = (float)(int)sVar3 * 0.00390625;
    *ar6 = uVar8;
    if (bVar13) {
      uVar4 = 1;
    }
    ar5 = ar5 + -1;
    ar6 = ar6 + 6;
  } while (ar5 != 0);
  return uVar4;
}

__asm__(".globl _FUN_8c235d8c\n.set _FUN_8c235d8c, _FUN_8c235d8c_def\n");
