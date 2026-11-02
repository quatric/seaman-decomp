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
int FUN_8c217618_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c217618";
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
  float in_fr5 = 0;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined8 in_dr6 = 0;
  float fVar15;
  float fVar16;
  undefined8 in_xd0 = 0;
  undefined8 in_xd2 = 0;
  float in_xf4 = 0;
  float in_xf5 = 0;
  float in_xf6 = 0;
  float in_xf7 = 0;
  float in_xf8 = 0;
  float in_xf9 = 0;
  float in_xf10 = 0;
  float in_xf11 = 0;
  float in_xf12 = 0;
  float in_xf13 = 0;
  float in_xf14 = 0;
  float in_xf15 = 0;
  
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
    fVar12 = *pfVar5;
    fVar13 = (float)in_dr6;
    fVar15 = pfVar5[1];
    in_dr6 = CONCAT44(fVar15,fVar13);
    pfVar5 = pfVar5 + 2;
                    
    fVar1 = F32HI(in_xd0) * in_fr5;
    fVar14 = (float)in_xd2 * in_fr5 + in_xf6 * fVar12 + in_xf10 * fVar13 + in_xf14 * fVar15;
    fVar14 = F32HI(in_xd2) * in_fr5 + in_xf7 * fVar12 + in_xf11 * fVar13 +
             in_xf15 * fVar15;
    fVar14 = F32HI(in_dr6);
    fVar16 = 1.0 / fVar14;
    pfVar4[3] = 1.0;
    if (fVar14 <= 1.0) {
      iVar6 = iVar6 + 1;
    }
    pfVar4[2] = fVar16;
    in_fr5 = ((float)in_xd0 * in_fr5 + in_xf4 * fVar12 + in_xf8 * fVar13 + in_xf12 * fVar15) * fVar8
             * fVar16 + fVar10;
    bVar2 = (bool)(bVar2 ^ 1);
    pfVar4[1] = in_fr5;
    *pfVar4 = (fVar1 + in_xf5 * fVar12 + in_xf9 * fVar13 + in_xf13 * fVar15) * fVar9 * fVar16 +
              fVar11;
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

__asm__(".globl _FUN_8c217618\n.set _FUN_8c217618, _FUN_8c217618_def\n");
