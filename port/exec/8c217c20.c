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
int FUN_8c217c20_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c217c20";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  float fVar1;
  bool bVar2;
  int iVar3;
  float *pfVar4;
  float *pfVar5;
  int iVar6;
  int iVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined8 in_xd0 = 0;
  undefined8 in_xd2 = 0;
  undefined8 in_xd4 = 0;
  float in_xf7 = 0;
  float in_xf8 = 0;
  float in_xf9 = 0;
  undefined8 in_xd10 = 0;
  undefined8 in_xd12 = 0;
  undefined8 in_xd14 = 0;
  
                    
                    
                    
  fVar17 = *(float *)(unsigned)(ar4 + 0x10);
  iVar3 = *(int *)(unsigned)(ar4 + 0x14);
  pfVar5 = ((float *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x18));
  iVar7 = *(int *)(unsigned)(ar4 + 0x1c);
  pfVar4 = ((float *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x20));
  fVar9 = *(float *)(unsigned)(ar4 + 0x24);
  fVar8 = *(float *)(unsigned)(ar4 + 0x28);
  fVar11 = *(float *)(unsigned)(ar4 + 0x2c);
  fVar10 = *(float *)(unsigned)(ar4 + 0x30);
  bVar2 = false;
  iVar6 = 0;
  do {
    fVar13 = *pfVar5;
    fVar12 = pfVar5[1];
    fVar15 = pfVar5[2];
                    
    fVar1 = F32HI(in_xd2) * fVar12 + in_xf7 * fVar13 +
            F32HI(in_xd10) * 1.0 + F32HI(in_xd14) * fVar15
    ;
    pfVar5 = pfVar5 + 4;
    fVar14 = 1.0 / fVar1;
                    
    fVar16 = 1.0;
    if (1.0 <= fVar17) {
      fVar16 = fVar17;
    }
    pfVar4[3] = fVar16;
    if (fVar1 <= 1.0) {
      iVar6 = iVar6 + 1;
    }
    pfVar4[2] = fVar14;
    bVar2 = (bool)(bVar2 ^ 1);
    pfVar4[1] = ((float)in_xd0 * fVar12 + (float)in_xd4 * fVar13 + in_xf8 * 1.0 +
                (float)in_xd12 * fVar15) * fVar8 * fVar14 + fVar10;
    *pfVar4 = (F32HI(in_xd0) * fVar12 +
               F32HI(in_xd4) * fVar13 + in_xf9 * 1.0 +
              F32HI(in_xd12) * fVar15) * fVar9 * fVar14 + fVar11;
    if (!bVar2) {
      CacheBlockInvalidate(iVar7);
      iVar7 = iVar7 + 0x20;
    }
    iVar3 = iVar3 + -1;
    pfVar4 = pfVar4 + 4;
  } while (iVar3 != 0);
  if (bVar2) {
    CacheBlockInvalidate(iVar7);
  }
  return iVar6;
}

__asm__(".globl _FUN_8c217c20\n.set _FUN_8c217c20, _FUN_8c217c20_def\n");
