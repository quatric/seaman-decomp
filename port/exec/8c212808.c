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
uint FUN_8c212808_def(float *ar4,float *ar5,float *ar6,float *ar7)

{
  ring[rp++ & 255] = "FUN_8c212808";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
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
  float fVar18;
  
  fVar1 = *ar6;
  fVar4 = *ar4;
  fVar10 = *ar5;
  fVar13 = fVar1;
  if (fVar4 < fVar1) {
    fVar13 = fVar4;
  }
  fVar7 = *ar7;
  fVar16 = fVar7;
  if (fVar7 < fVar10) {
    fVar16 = fVar10;
  }
  fVar5 = ar4[1];
  fVar2 = ar6[1];
  fVar11 = ar5[1];
  fVar17 = fVar2;
  if (fVar5 < fVar2) {
    fVar17 = fVar5;
  }
  fVar8 = ar7[1];
  fVar14 = fVar8;
  if (fVar8 < fVar11) {
    fVar14 = fVar11;
  }
  fVar6 = ar4[2];
  fVar9 = ar6[2];
  fVar12 = ar5[2];
  fVar15 = fVar9;
  if (fVar6 < fVar9) {
    fVar15 = fVar6;
  }
  fVar3 = ar7[2];
  fVar18 = fVar3;
  if (fVar3 < fVar12) {
    fVar18 = fVar12;
  }
  return (uint)((fVar16 - fVar13 < ((fVar10 - fVar4) + fVar7) - fVar1 &&
                fVar14 - fVar17 < ((fVar11 - fVar5) + fVar8) - fVar2) &&
               fVar18 - fVar15 < ((fVar12 - fVar6) + fVar3) - fVar9);
}

__asm__(".globl _FUN_8c212808\n.set _FUN_8c212808, _FUN_8c212808_def\n");
