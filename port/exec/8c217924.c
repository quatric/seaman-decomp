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
int FUN_8c217924_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c217924";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  float fVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  float *pfVar5;
  int iVar6;
  int iVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined8 in_xd0 = 0;
  undefined8 in_xd2 = 0;
  undefined8 in_xd4 = 0;
  float in_xf7 = 0;
  undefined8 in_xd8 = 0;
  undefined8 in_xd10 = 0;
  undefined8 in_xd12 = 0;
  undefined8 in_xd14 = 0;
  
                    
                    
                    
  iVar3 = *(int *)(unsigned)(ar4 + 0x14);
  pfVar5 = ((float *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x18));
  iVar7 = *(int *)(unsigned)(ar4 + 0x1c);
  iVar4 = *(int *)(unsigned)(ar4 + 0x20);
  fVar12 = *(float *)(unsigned)(ar4 + 0x24);
  fVar13 = *(float *)(unsigned)(ar4 + 0x2c);
  bVar2 = false;
  iVar6 = 0;
  do {
    fVar10 = *pfVar5;
    fVar9 = pfVar5[1];
    fVar11 = pfVar5[2];
                    
    fVar1 = F32HI(in_xd2) * fVar9 + in_xf7 * fVar10 +
            F32HI(in_xd10) * 1.0 + F32HI(in_xd14) * fVar11
    ;
    pfVar5 = pfVar5 + 6;
                    
    fVar8 = 1.0 / fVar1;
    if (fVar1 <= 1.0) {
      iVar6 = iVar6 + 1;
    }
    bVar2 = (bool)(bVar2 ^ 1);
    *(float *)(unsigned)(iVar4 + 0xc) = fVar8;
    *(float *)(unsigned)(iVar4 + 8) =
         fVar8 * (F32HI(in_xd0) * fVar9 +
                  F32HI(in_xd4) * fVar10 +
                  F32HI(in_xd8) * 1.0 +
                 F32HI(in_xd12) * fVar11) * fVar12 + fVar13;
    if (!bVar2) {
      CacheBlockInvalidate(iVar7);
      iVar7 = iVar7 + 0x20;
    }
    iVar3 = iVar3 + -1;
    iVar4 = iVar4 + 0x18;
  } while (iVar3 != 0);
  if (bVar2) {
    CacheBlockInvalidate(iVar7);
  }
  return iVar6;
}

__asm__(".globl _FUN_8c217924\n.set _FUN_8c217924, _FUN_8c217924_def\n");
