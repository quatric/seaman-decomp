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
float FUN_8c124d10_def(byte *ar4,float *ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c124d10";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  float *pfVar1;
  int iVar2;
  float fVar3;
  int iVar4;
  float *pfVar5;
  int *piVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined8 uVar10;
  
  fVar7 = 0.0;
  fVar3 = 0.0;
  uVar10 = 0x7f7fffff7f7fffff;
  if (ar4[1] != 0) {
    do {
      iVar2 = 1;
      pfVar1 = (float *)(unsigned)((int)fVar3 * (uint)*ar4 * 4 + *(int *)(unsigned)(ar4 + 8));
      fVar9 = (*ar5 - *pfVar1) * (*ar5 - *pfVar1);
      fVar8 = F32HI(uVar10);
      pfVar5 = ar5;
      if (1 < *ar4) {
        do {
          pfVar5 = pfVar5 + 1;
          pfVar1 = pfVar1 + 1;
          fVar9 = (*pfVar5 - *pfVar1) * (*pfVar5 - *pfVar1) + fVar9;
          if (fVar8 < fVar9) break;
          iVar2 = iVar2 + 1;
        } while (iVar2 < (int)(uint)*ar4);
      }
      if (fVar9 < fVar8) {
        uVar10 = CONCAT44(fVar9,(int)uVar10);
        fVar7 = fVar3;
      }
      fVar3 = (float)((int)fVar3 + 1);
    } while ((int)fVar3 < (int)(uint)ar4[1]);
  }
  fVar3 = (float)uVar10;
  piVar6 = (int *)(unsigned)((uint)ar4[2] * ((uint)fVar7 & 0xff) * 4 + *(int *)(unsigned)(ar4 + 0xc));
  iVar2 = 0;
  if (ar4[2] != 0) {
    do {
      iVar4 = *piVar6;
      piVar6 = piVar6 + 1;
      pfVar5 = (float *)(unsigned)(iVar4 * 4 + *(int *)(unsigned)(ar4 + 0x10));
      iVar4 = 1;
      pfVar1 = pfVar5 + 1;
      fVar9 = *ar5 - *pfVar5;
      fVar9 = fVar9 * fVar9;
      pfVar5 = ar5;
      if (1 < *ar4) {
        do {
          pfVar5 = pfVar5 + 1;
          fVar8 = *pfVar1;
          pfVar1 = pfVar1 + 1;
          fVar9 = (*pfVar5 - fVar8) * (*pfVar5 - fVar8) + fVar9;
          if (fVar3 < fVar9) break;
          iVar4 = iVar4 + 1;
        } while (iVar4 < (int)(uint)*ar4);
      }
      iVar2 = iVar2 + 1;
      if (fVar9 < fVar3) {
        fVar7 = *pfVar1;
        fVar3 = fVar9;
      }
    } while (iVar2 < (int)(uint)ar4[2]);
  }
  return fVar7;
}

__asm__(".globl _FUN_8c124d10\n.set _FUN_8c124d10, _FUN_8c124d10_def\n");
