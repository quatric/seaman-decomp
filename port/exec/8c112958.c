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
undefined4 FUN_8c112958_def(uint *ar4,int ar5,int ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c112958";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  float *pfVar1;
  uint uVar2;
  float *pfVar3;
  uint uVar4;
  float *pfVar5;
  float *pfVar6;
  float *pfVar7;
  float *pfVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  bool bVar12;
  
  pfVar8 = (float *)(unsigned)(uint)ar4[3];
  pfVar5 = ((float *)(unsigned long)*(unsigned *)(unsigned)(ar5 + 0xc));
  uVar4 = 0;
  pfVar3 = ((float *)(unsigned long)*(unsigned *)(unsigned)(ar6 + 0xc));
  while (bVar12 = uVar4 < ar4[1], uVar4 = uVar4 + 1, bVar12) {
    fVar11 = *pfVar3;
    pfVar7 = pfVar3 + 1;
    pfVar8 = pfVar8 + uVar4;
    pfVar1 = pfVar7;
    uVar2 = uVar4;
    pfVar6 = pfVar8;
    if (uVar4 < *ar4) {
      do {
        uVar2 = uVar2 + 1;
        fVar9 = *pfVar6;
        pfVar6 = pfVar6 + 1;
        fVar10 = *pfVar1;
        pfVar1 = pfVar1 + 1;
        fVar11 = fVar9 * fVar10 + fVar11;
      } while (uVar2 < *ar4);
    }
    fVar9 = *pfVar5;
    pfVar5 = pfVar5 + 1;
    *pfVar3 = *pfVar3 - fVar11 * fVar9;
    uVar2 = uVar4;
    pfVar3 = pfVar7;
    if (uVar4 < *ar4) {
      do {
        uVar2 = uVar2 + 1;
        fVar10 = *pfVar8;
        pfVar8 = pfVar8 + 1;
        *pfVar7 = *pfVar7 - fVar11 * fVar9 * fVar10;
        pfVar7 = pfVar7 + 1;
      } while (uVar2 < *ar4);
    }
  }
  return 0;
}

__asm__(".globl _FUN_8c112958\n.set _FUN_8c112958, _FUN_8c112958_def\n");
