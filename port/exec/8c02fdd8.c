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
double * FUN_8c02fdd8_def(int ar4,int *ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c02fdd8";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 28; for (int i_ = 0; i_ < 28; i_++) z_[i_] = 0; }
  double *pdVar1;
  undefined1 *a5;
  float *a6;
  float *a7;
  float fVar2;
  double dVar3;
  float fVar4;
  undefined4 in_fr3 = 0;
  undefined4 uVar5;
  double dVar6;
  bool bVar7;
  char cVar8;
  char cVar9;
  
  cVar9 = '\0';
  cVar8 = '\0';
  a7 = &(*(float *)(fr0_ - 0x18));
  a6 = &(*(float *)(fr0_ - 0x14));
  a5 = ((undefined1 *)(fr0_ - 0x10));
  (vsp = ((unsigned long)(fr0_ - 28)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*ar5 + 0x120))))(ar5,a5,a6,a7));
  if (cVar9 == '\0') {
    dVar6 = CONCAT44D((*(float *)(fr0_ - 0x18)),in_fr3);
    dVar3 = CONCAT44D(0x3dcccccd,(*(float *)(fr0_ - 0x14)));
  }
  else {
    dVar6 = CONCAT44D((*(float *)(fr0_ - 0x14)),(*(float *)(fr0_ - 0x18)));
    dVar3 = 8.15358646777176e-312;
  }
  if (cVar8 == '\0') {
    fVar4 = F32HI(dVar3);
    fVar2 = F32LO(dVar3) * fVar4;
    dVar3 = CONCAT44D(fVar4,fVar2);
    dVar6 = CONCAT44D(F32HI(dVar6) - fVar2,SUB84(dVar6,0));
  }
  else {
    dVar3 = dVar3 * dVar3;
    dVar6 = dVar6 - dVar3;
  }
  fVar2 = F32HI(dVar6);
  (*(float *)(fr0_ - 0x18)) = fVar2;
  if (cVar9 != '\0') {
    (*(float *)(fr0_ - 0x18)) = SUB84(dVar6,0);
    (*(float *)(fr0_ - 0x14)) = fVar2;
  }
  (vsp = ((unsigned long)(fr0_ - 28)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*ar5 + 0x180))))(ar5,a5,a6,a7));
  uVar5 = SUB84(dVar6,0);
  fVar2 = F32HI(dVar3);
  if (cVar9 == '\0') {
    dVar3 = 4.14452302922905e-317;
    (*(float *)(fr0_ - 0x1c)) = fVar2;
  }
  else {
    (*(float *)(fr0_ - 0x1c)) = SUB84(dVar3,0);
    (*(float *)(fr0_ - 0x18)) = fVar2;
  }
  pdVar1 = (double *)(unsigned)0x8;
  fVar2 = (*(float *)(fr0_ - 0x1c));
  fVar4 = (*(float *)(fr0_ - 0x18));
  if (cVar9 == '\0') {
    fVar2 = F32LO(dVar3);
    fVar4 = (*(float *)(fr0_ - 0x1c));
  }
  if (fVar2 != fVar4) {
    (vsp = ((unsigned long)(fr0_ - 28)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*ar5 + 0x180))))(ar5,a5,a6,a7));
    if (cVar9 == '\0') {
      dVar6 = CONCAT44D((*(float *)(fr0_ - 0x18)),uVar5);
      dVar3 = CONCAT44D(0x42c80000,fVar4);
    }
    else {
      dVar6 = CONCAT44D((*(float *)(fr0_ - 0x14)),(*(float *)(fr0_ - 0x18)));
      dVar3 = 2.0000004975590855;
    }
    if (cVar8 == '\0') {
      dVar6 = CONCAT44D(F32HI(dVar6) *
                               (F32LO(dVar3) / F32HI(dVar3)),SUB84(dVar6,0));
    }
    else {
      dVar6 = dVar6 * (dVar3 / dVar3);
    }
    if (cVar9 == '\0') {
      dVar3 = CONCAT44D(0x40000000,(*(float *)(fr0_ - 0x14)));
    }
    else {
      dVar3 = 1.6514225348597613e-308;
    }
    if (cVar8 == '\0') {
      fVar2 = F32LO(dVar3) / F32HI(dVar3);
      dVar6 = CONCAT44D(F32HI(dVar6) - fVar2,SUB84(dVar6,0));
    }
    else {
      fVar2 = SUB84(dVar3 / dVar3,0);
      dVar6 = dVar6 - dVar3 / dVar3;
    }
    pdVar1 = (double *)(unsigned)(ar4 + 0x2c);
    if (cVar9 == '\0') {
      dVar3 = CONCAT44D(*(undefined4 *)(unsigned)pdVar1,fVar2);
    }
    else {
      dVar3 = *pdVar1;
    }
    if (cVar8 == '\0') {
      bVar7 = F32HI(dVar3) < F32HI(dVar6);
    }
    else {
      bVar7 = dVar3 < dVar6;
    }
    if (!bVar7) {
      (vsp = ((unsigned long)(fr0_ - 28)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*ar5 + 0x180))))(ar5,a5,a6,a7));
      if (cVar9 == '\0') {
        dVar6 = CONCAT44D((*(float *)(fr0_ - 0x18)),SUB84(dVar6,0));
        dVar3 = CONCAT44D(0x42c80000,(int)(D2U(dVar3) >> 0x20));
      }
      else {
        dVar6 = CONCAT44D((*(float *)(fr0_ - 0x14)),(*(float *)(fr0_ - 0x18)));
        dVar3 = 2.0000004975590855;
      }
      if (cVar8 == '\0') {
        fVar4 = F32HI(dVar3);
        fVar2 = F32LO(dVar3) / fVar4;
        dVar3 = CONCAT44D(fVar4,fVar2);
        dVar6 = CONCAT44D(F32HI(dVar6) * fVar2,SUB84(dVar6,0));
      }
      else {
        dVar3 = dVar3 / dVar3;
        dVar6 = dVar6 * dVar3;
      }
      fVar2 = F32LO(dVar3);
      if (cVar9 == '\0') {
        fVar2 = (*(float *)(fr0_ - 0x14));
      }
      pdVar1 = (double *)(unsigned)((undefined4 *)(unsigned)0x8c02febc);
      if (cVar9 == '\0') {
        dVar3 = CONCAT44D(0x40000000,fVar2);
      }
      else {
        dVar3 = 1.6514225348597613e-308;
      }
      if (cVar8 == '\0') {
        dVar6 = CONCAT44D(F32HI(dVar6) -
                                 F32LO(dVar3) / F32HI(dVar3),SUB84(dVar6,0));
      }
      else {
        dVar6 = dVar6 - dVar3 / dVar3;
      }
      if (cVar9 == '\0') {
        *(int *)(unsigned)(ar4 + 0x2c) = (int)(D2U(dVar6) >> 0x20);
      }
      else {
        *(double *)(unsigned)(ar4 + 0x2c) = dVar6;
      }
    }
  }
  return pdVar1;
}

__asm__(".globl _FUN_8c02fdd8\n.set _FUN_8c02fdd8, _FUN_8c02fdd8_def\n");
