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
int FUN_8c217b18_def(int ar4,uint ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c217b18";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  float fVar1;
  float fVar2;
  uint uVar3;
  int iVar4;
  float *pfVar5;
  float *pfVar6;
  float *pfVar7;
  int iVar8;
  int iVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined8 in_xd0 = 0;
  float in_xf3 = 0;
  undefined8 in_xd4 = 0;
  float in_xf7 = 0;
  undefined8 in_xd8 = 0;
  undefined8 in_xd10 = 0;
  undefined8 in_xd12 = 0;
  undefined8 in_xd14 = 0;
  
                    
                    
                    
  fVar18 = *(float *)(unsigned)(ar4 + 0x10);
  iVar4 = *(int *)(unsigned)(ar4 + 0x14);
  pfVar5 = ((float *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x18));
  iVar9 = *(int *)(unsigned)(ar4 + 0x1c);
  fVar15 = *(float *)(unsigned)(ar4 + 0x24);
  fVar14 = *(float *)(unsigned)(ar4 + 0x28);
  fVar17 = *(float *)(unsigned)(ar4 + 0x2c);
  fVar16 = *(float *)(unsigned)(ar4 + 0x30);
  uVar3 = ar5 >> 8 & 0xff;
  iVar8 = 0;
  do {
    fVar12 = *pfVar5;
    fVar11 = pfVar5[1];
    fVar13 = pfVar5[2];
                    
    fVar1 = (float)in_xd0 * fVar11 + (float)in_xd4 * fVar12 + (float)in_xd8 * 1.0 +
            (float)in_xd12 * fVar13;
    fVar2 = F32HI(in_xd0) * fVar11 +
            F32HI(in_xd4) * fVar12 + F32HI(in_xd8) * 1.0 +
            F32HI(in_xd12) * fVar13;
    fVar11 = in_xf3 * fVar11 + in_xf7 * fVar12 + F32HI(in_xd10) * 1.0 +
             F32HI(in_xd14) * fVar13;
    pfVar6 = pfVar5 + 6;
                    
    pfVar5 = pfVar5 + 7;
    pfVar7 = (float *)(unsigned)(SUB42(*pfVar6,0) * 0x10 + iVar9);
    fVar12 = (float)((uint)*pfVar6 >> 0x10) * 0.0039215684;
    if (uVar3 == 0) {
      pfVar7[3] = fVar12 * 0.0;
      pfVar7[2] = fVar11 * fVar12;
      pfVar7[1] = fVar1 * fVar12;
      *pfVar7 = fVar2 * fVar12;
    }
    else if (uVar3 == 1) {
      fVar15 = fVar12 * fVar11 + pfVar7[2];
      fVar14 = fVar12 * 0.0 + pfVar7[3];
      pfVar7[3] = fVar14;
      pfVar7[2] = fVar15;
      pfVar7[1] = fVar12 * fVar1 + pfVar7[1];
      *pfVar7 = fVar12 * fVar2 + *pfVar7;
    }
    else {
      fVar10 = fVar12 * fVar11 + pfVar7[2];
      fVar11 = fVar12 * 0.0 + pfVar7[3] + fVar18;
      fVar13 = 1.0 / fVar10;
      if (fVar11 <= fVar18) {
        fVar11 = fVar18;
      }
      pfVar7[3] = fVar11;
      if (fVar10 <= 1.0) {
        iVar8 = iVar8 + 1;
      }
      pfVar7[2] = fVar13;
      pfVar7[1] = (fVar12 * fVar1 + pfVar7[1]) * fVar14 * fVar13 + fVar16;
      *pfVar7 = (fVar12 * fVar2 + *pfVar7) * fVar15 * fVar13 + fVar17;
    }
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  return iVar8;
}

__asm__(".globl _FUN_8c217b18\n.set _FUN_8c217b18, _FUN_8c217b18_def\n");
