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
int FUN_8c21768c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c21768c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  float fVar1;
  float fVar2;
  bool bVar3;
  int iVar4;
  float *pfVar5;
  float *pfVar6;
  int iVar7;
  int iVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float in_fr5 = 0;
  float fVar12;
  float in_fr7 = 0;
  float fVar13;
  float fVar14;
  float fVar16;
  float fVar17;
  float in_fr9 = 0;
  float in_fr11 = 0;
  float fVar18;
  undefined8 uVar19;
  float fVar20;
  undefined8 in_xd0 = 0;
  undefined8 in_xd2 = 0;
  float in_xf4 = 0;
  float in_xf5 = 0;
  float in_xf7 = 0;
  float in_xf8 = 0;
  float in_xf9 = 0;
  undefined8 in_xd10 = 0;
  undefined8 in_xd12 = 0;
  undefined8 in_xd14 = 0;
  undefined8 uVar15;
  
                    
  uVar15 = CONCAT44(in_fr7,in_fr7);
                    
  fVar16 = in_fr5 * *(float *)(unsigned)(ar4 + 4) + in_fr5 * *(float *)(unsigned)ar4 + in_fr7 * 0.0 +
           in_fr7 * *(float *)(unsigned)(ar4 + 8);
  uVar19 = CONCAT44(in_fr11,in_fr11);
                    
  fVar16 = in_fr9 * *(float *)(unsigned)(ar4 + 4) + in_fr9 * *(float *)(unsigned)ar4 + in_fr11 * 0.0 +
           in_fr11 * *(float *)(unsigned)(ar4 + 8);
  fVar20 = *(float *)(unsigned)(ar4 + 0x10);
  iVar4 = *(int *)(unsigned)(ar4 + 0x14);
  pfVar6 = ((float *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x18));
  iVar8 = *(int *)(unsigned)(ar4 + 0x1c);
  pfVar5 = ((float *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x20));
  fVar9 = *(float *)(unsigned)(ar4 + 0x24);
  fVar16 = *(float *)(unsigned)(ar4 + 0x28);
  fVar11 = *(float *)(unsigned)(ar4 + 0x2c);
  fVar10 = *(float *)(unsigned)(ar4 + 0x30);
  bVar3 = false;
  iVar7 = 0;
  do {
    fVar12 = *pfVar6;
    fVar13 = (float)uVar15;
    fVar17 = pfVar6[1];
                    
    fVar1 = F32HI(in_xd0) * in_fr5;
    fVar2 = F32HI(in_xd2) * in_fr5 + in_xf7 * fVar12 +
            F32HI(in_xd10) * fVar13 +
            F32HI(in_xd14) * fVar17;
    pfVar6 = pfVar6 + 4;
                    
    fVar14 = 1.0 / fVar2;
    uVar15 = CONCAT44(fVar2,fVar14);
    fVar18 = (float)uVar19;
    if ((float)uVar19 <= fVar20) {
      fVar18 = fVar20;
    }
    pfVar5[3] = fVar18;
    uVar19 = 0x3f800000;
    if (fVar2 <= 1.0) {
      iVar7 = iVar7 + 1;
    }
    pfVar5[2] = fVar14;
    in_fr5 = ((float)in_xd0 * in_fr5 + in_xf4 * fVar12 + in_xf8 * fVar13 + (float)in_xd12 * fVar17)
             * fVar16 * fVar14 + fVar10;
    bVar3 = (bool)(bVar3 ^ 1);
    pfVar5[1] = in_fr5;
    *pfVar5 = (fVar1 + in_xf5 * fVar12 + in_xf9 * fVar13 +
              F32HI(in_xd12) * fVar17) * fVar9 * fVar14 + fVar11;
    if (!bVar3) {
      CacheBlockInvalidate(iVar8);
      iVar8 = iVar8 + 0x20;
    }
    iVar4 = iVar4 + -1;
    pfVar5 = pfVar5 + 4;
  } while (iVar4 != 0);
  if (bVar3) {
    CacheBlockInvalidate(iVar8);
  }
  return iVar7;
}

__asm__(".globl _FUN_8c21768c\n.set _FUN_8c21768c, _FUN_8c21768c_def\n");
