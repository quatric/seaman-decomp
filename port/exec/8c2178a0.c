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
int FUN_8c2178a0_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c2178a0";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  float fVar1;
  bool bVar2;
  int iVar3;
  float *pfVar4;
  float *pfVar5;
  float *pfVar6;
  int iVar7;
  int iVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined8 in_xd0 = 0;
  undefined8 in_xd2 = 0;
  undefined8 in_xd4 = 0;
  float in_xf7 = 0;
  undefined8 in_xd8 = 0;
  float in_xf11 = 0;
  float in_xf12 = 0;
  float in_xf13 = 0;
  float in_xf15 = 0;
  
  iVar3 = *(int *)(unsigned)(ar4 + 0x14);
  pfVar5 = ((float *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x18));
  iVar8 = *(int *)(unsigned)(ar4 + 0x1c);
  pfVar4 = ((float *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x20));
  fVar10 = *(float *)(unsigned)(ar4 + 0x24);
  fVar9 = *(float *)(unsigned)(ar4 + 0x28);
  fVar12 = *(float *)(unsigned)(ar4 + 0x2c);
  fVar11 = *(float *)(unsigned)(ar4 + 0x30);
  bVar2 = false;
  iVar7 = 0;
  do {
    fVar14 = *pfVar5;
    fVar13 = pfVar5[1];
    fVar15 = pfVar5[2];
    pfVar6 = pfVar5 + 3;
                    
    fVar1 = F32HI(in_xd2) * fVar13 + in_xf7 * fVar14 + in_xf11 * 1.0 +
            in_xf15 * fVar15;
    pfVar5 = pfVar5 + 4;
    fVar16 = 1.0 / fVar1;
    pfVar4[3] = (float)(int)(short)((uint)*pfVar6 >> 0x10) * 3.0517576e-05;
    if (fVar1 <= 1.0) {
      iVar7 = iVar7 + 1;
    }
    pfVar4[2] = fVar16;
    bVar2 = (bool)(bVar2 ^ 1);
    pfVar4[1] = ((float)in_xd0 * fVar13 + (float)in_xd4 * fVar14 + (float)in_xd8 * 1.0 +
                in_xf12 * fVar15) * fVar9 * fVar16 + fVar11;
    *pfVar4 = (F32HI(in_xd0) * fVar13 +
               F32HI(in_xd4) * fVar14 +
               F32HI(in_xd8) * 1.0 + in_xf13 * fVar15) * fVar10 * fVar16 +
              fVar12;
    if (!bVar2) {
      CacheBlockInvalidate(iVar8);
      iVar8 = iVar8 + 0x20;
    }
    iVar3 = iVar3 + -1;
    pfVar4 = pfVar4 + 4;
  } while (iVar3 != 0);
  if (bVar2) {
    CacheBlockInvalidate(iVar8);
  }
  return iVar7;
}

__asm__(".globl _FUN_8c2178a0\n.set _FUN_8c2178a0, _FUN_8c2178a0_def\n");
