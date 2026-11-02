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
undefined4 FUN_8c06abb8_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c06abb8";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 36; for (int i_ = 0; i_ < 36; i_++) z_[i_] = 0; }
  int *piVar1;
  int *piVar2;
  float fVar3;
  float fVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  undefined4 in_fr3 = 0;
  double dVar8;
  undefined4 in_fr4 = 0;
  undefined8 in_dr14 = 0;
  undefined8 in_xd0 = 0;
  double in_xd14 = 0;
  bool bVar9;
  float in_PR = 0;
  char cVar10;
  char cVar11;
  
  cVar11 = '\0';
  cVar10 = '\0';
  dVar6 = CONCAT44D((int)((ulonglong)in_dr14 >> 0x20),in_fr4);
  (*(float *)(fr0_ - 0x14)) = in_PR;
  (vsp = ((unsigned long)(fr0_ - 36)), Vec3_set_zero(&(*(float *)(fr0_ - 0x20)),ar5,ar6,ar7));
  piVar1 = (int *)(unsigned)(vsp = ((unsigned long)(fr0_ - 36)), deref_u32(0x8c280954,ar5,ar6,ar7));
  piVar1 = ((int *)(unsigned long)*(unsigned *)(unsigned)(*piVar1 + 4));
  while( true ) {
    fVar3 = (float)*piVar1;
    dVar5 = (double)(ulonglong)(uint)fVar3;
    if (cVar10 == '\0' && fVar3 < 0.0) {
      if (cVar11 == '\0') {
        dVar5 = CONCAT44D(0x4f800000,fVar3);
      }
      else {
        dVar5 = 1.4411522222084588e+18;
      }
      if (cVar10 == '\0') {
        fVar3 = F32HI(dVar5);
        dVar5 = CONCAT44D(fVar3,F32LO(dVar5) + fVar3);
      }
      else {
        dVar5 = dVar5 + dVar5;
      }
    }
    fVar3 = F32LO(dVar6);
    if (cVar10 == '\0') {
      bVar9 = SUB84(dVar5,0) < fVar3;
    }
    else {
      bVar9 = dVar5 < dVar6;
    }
    if (!bVar9) break;
    piVar1 = piVar1 + 4;
  }
  fVar4 = (float)*piVar1;
  if (cVar10 == '\0' && fVar4 < 0.0) {
    if (cVar11 == '\0') {
      dVar5 = CONCAT44D(0x4f800000,fVar4);
    }
    else {
      dVar5 = 1.4411522222084588e+18;
    }
    if (cVar10 == '\0') {
      fVar4 = F32LO(dVar5) + F32HI(dVar5);
    }
    else {
      fVar4 = SUB84(dVar5 + dVar5,0);
    }
  }
  if (fVar4 == fVar3) {
    if (cVar11 == '\0') {
      dVar6 = CONCAT44D(0x43b40000,(float)(uint)piVar1[1]);
    }
    else {
      dVar6 = 2.6584566620691055e+36;
    }
    if (cVar10 == '\0') {
      fVar3 = F32LO(dVar6) * F32HI(dVar6);
    }
    else {
      fVar3 = SUB84(dVar6 * dVar6,0);
    }
    if (cVar11 == '\0') {
      dVar6 = CONCAT44D(0x47800000,fVar3);
    }
    else {
      dVar6 = -8.166723480339562e-251;
    }
    if (cVar10 == '\0') {
      fVar3 = F32LO(dVar6) / F32HI(dVar6);
    }
    else {
      fVar3 = SUB84(dVar6 / dVar6,0);
    }
    (*(float *)(fr0_ - 0x20)) = (float)in_xd0;
    fVar4 = (*(float *)(fr0_ - 0x20));
    if (cVar11 == '\0') {
      (*(float *)(fr0_ - 0x20)) = fVar3;
    }
    if (cVar11 == '\0') {
      dVar6 = CONCAT44D(0x43b40000,(float)(uint)piVar1[2]);
    }
    else {
      dVar6 = 2.6584566620691055e+36;
    }
    if (cVar10 == '\0') {
      fVar3 = F32LO(dVar6) * F32HI(dVar6);
    }
    else {
      fVar3 = SUB84(dVar6 * dVar6,0);
    }
    if (cVar11 == '\0') {
      dVar6 = CONCAT44D(0x47800000,fVar3);
    }
    else {
      dVar6 = -8.166723480339562e-251;
    }
    if (cVar10 == '\0') {
      fVar3 = F32LO(dVar6) / F32HI(dVar6);
    }
    else {
      fVar3 = SUB84(dVar6 / dVar6,0);
    }
    (*(float *)(fr0_ - 0x1c)) = fVar4;
    if (cVar11 == '\0') {
      (*(float *)(fr0_ - 0x1c)) = fVar3;
    }
    if (cVar11 == '\0') {
      dVar6 = CONCAT44D(0x43b40000,(float)(uint)piVar1[3]);
    }
    else {
      dVar6 = 2.6584566620691055e+36;
    }
    if (cVar10 == '\0') {
      fVar3 = F32LO(dVar6) * F32HI(dVar6);
    }
    else {
      fVar3 = SUB84(dVar6 * dVar6,0);
    }
    if (cVar11 == '\0') {
      dVar6 = CONCAT44D(0x47800000,fVar3);
    }
    else {
      dVar6 = -8.166723480339562e-251;
    }
    if (cVar10 == '\0') {
      (*(float *)(fr0_ - 0x18)) = F32LO(dVar6) / F32HI(dVar6);
    }
    else {
      (*(float *)(fr0_ - 0x18)) = SUB84(dVar6 / dVar6,0);
    }
    if (cVar11 != '\0') {
      (*(float *)(fr0_ - 0x14)) = F32HI(in_xd0);
      (*(float *)(fr0_ - 0x18)) = fVar4;
    }
  }
  else {
    piVar2 = piVar1 + -4;
    if (cVar10 == '\0') {
      dVar5 = CONCAT44D((float)(piVar1[1] - piVar1[-3]),in_fr3);
    }
    else {
      dVar5 = (double)(piVar1[1] - piVar1[-3]);
    }
    if (cVar11 == '\0') {
      dVar7 = CONCAT44D(0x43b40000,fVar4);
    }
    else {
      dVar7 = 2.6584566620691055e+36;
    }
    if (cVar10 == '\0') {
      dVar5 = CONCAT44D(F32HI(dVar5) * F32HI(dVar7)
                               ,SUB84(dVar5,0));
    }
    else {
      dVar5 = dVar5 * dVar7;
    }
    if (cVar11 == '\0') {
      dVar7 = CONCAT44D(0x47800000,SUB84(dVar7,0));
    }
    else {
      dVar7 = -8.166723480339562e-251;
    }
    if (cVar10 == '\0') {
      dVar5 = CONCAT44D(F32HI(dVar5) / F32HI(dVar7)
                               ,SUB84(dVar5,0));
    }
    else {
      dVar5 = dVar5 / dVar7;
    }
    fVar4 = (float)(*piVar1 - *piVar2);
    dVar7 = (double)(ulonglong)(uint)fVar4;
    if (cVar10 == '\0' && fVar4 < 0.0) {
      if (cVar11 == '\0') {
        dVar7 = CONCAT44D(0x4f800000,fVar4);
      }
      else {
        dVar7 = 1.4411522222084588e+18;
      }
      if (cVar10 == '\0') {
        fVar4 = F32HI(dVar7);
        dVar7 = CONCAT44D(fVar4,F32LO(dVar7) + fVar4);
      }
      else {
        dVar7 = dVar7 + dVar7;
      }
    }
    if (cVar10 == '\0') {
      dVar5 = CONCAT44D(F32HI(dVar5) / F32LO(dVar7),SUB84(dVar5,0));
    }
    else {
      dVar5 = dVar5 / dVar7;
    }
    (*(float *)(fr0_ - 0x20)) = SUB84(dVar5,0);
    if (cVar11 == '\0') {
      (*(float *)(fr0_ - 0x20)) = F32HI(dVar5);
    }
    if (cVar10 == '\0') {
      dVar5 = CONCAT44D((float)(piVar1[2] - piVar1[-2]),SUB84(dVar5,0));
    }
    else {
      dVar5 = (double)(piVar1[2] - piVar1[-2]);
    }
    if (cVar11 == '\0') {
      dVar7 = CONCAT44D(0x43b40000,SUB84(dVar7,0));
    }
    else {
      dVar7 = 2.6584566620691055e+36;
    }
    if (cVar10 == '\0') {
      dVar5 = CONCAT44D(F32HI(dVar5) * F32HI(dVar7)
                               ,SUB84(dVar5,0));
    }
    else {
      dVar5 = dVar5 * dVar7;
    }
    if (cVar11 == '\0') {
      dVar7 = CONCAT44D(0x47800000,SUB84(dVar7,0));
    }
    else {
      dVar7 = -8.166723480339562e-251;
    }
    if (cVar10 == '\0') {
      dVar5 = CONCAT44D(F32HI(dVar5) / F32HI(dVar7)
                               ,SUB84(dVar5,0));
    }
    else {
      dVar5 = dVar5 / dVar7;
    }
    fVar4 = (float)(*piVar1 - *piVar2);
    dVar7 = (double)(ulonglong)(uint)fVar4;
    if (cVar10 == '\0' && fVar4 < 0.0) {
      if (cVar11 == '\0') {
        dVar7 = CONCAT44D(0x4f800000,fVar4);
      }
      else {
        dVar7 = 1.4411522222084588e+18;
      }
      if (cVar10 == '\0') {
        fVar4 = F32HI(dVar7);
        dVar7 = CONCAT44D(fVar4,F32LO(dVar7) + fVar4);
      }
      else {
        dVar7 = dVar7 + dVar7;
      }
    }
    if (cVar10 == '\0') {
      dVar5 = CONCAT44D(F32HI(dVar5) / F32LO(dVar7),SUB84(dVar5,0));
    }
    else {
      dVar5 = dVar5 / dVar7;
    }
    (*(float *)(fr0_ - 0x1c)) = SUB84(dVar5,0);
    if (cVar11 == '\0') {
      (*(float *)(fr0_ - 0x1c)) = F32HI(dVar5);
    }
    if (cVar10 == '\0') {
      dVar5 = CONCAT44D((float)(piVar1[3] - piVar1[-1]),SUB84(dVar5,0));
    }
    else {
      dVar5 = (double)(piVar1[3] - piVar1[-1]);
    }
    if (cVar11 == '\0') {
      dVar7 = CONCAT44D(0x43b40000,SUB84(dVar7,0));
    }
    else {
      dVar7 = 2.6584566620691055e+36;
    }
    if (cVar10 == '\0') {
      dVar5 = CONCAT44D(F32HI(dVar5) * F32HI(dVar7)
                               ,SUB84(dVar5,0));
    }
    else {
      dVar5 = dVar5 * dVar7;
    }
    if (cVar11 == '\0') {
      dVar7 = CONCAT44D(0x47800000,SUB84(dVar7,0));
    }
    else {
      dVar7 = -8.166723480339562e-251;
    }
    if (cVar10 == '\0') {
      dVar5 = CONCAT44D(F32HI(dVar5) / F32HI(dVar7)
                               ,SUB84(dVar5,0));
    }
    else {
      dVar5 = dVar5 / dVar7;
    }
    fVar4 = (float)(*piVar1 - *piVar2);
    dVar7 = (double)(ulonglong)(uint)fVar4;
    if (cVar10 == '\0' && fVar4 < 0.0) {
      if (cVar11 == '\0') {
        dVar7 = CONCAT44D(0x4f800000,fVar4);
      }
      else {
        dVar7 = 1.4411522222084588e+18;
      }
      if (cVar10 == '\0') {
        fVar4 = F32HI(dVar7);
        dVar7 = CONCAT44D(fVar4,F32LO(dVar7) + fVar4);
      }
      else {
        dVar7 = dVar7 + dVar7;
      }
    }
    if (cVar10 == '\0') {
      dVar5 = CONCAT44D(F32HI(dVar5) / F32LO(dVar7),SUB84(dVar5,0));
    }
    else {
      dVar5 = dVar5 / dVar7;
    }
    fVar4 = F32HI(dVar5);
    (*(float *)(fr0_ - 0x18)) = SUB84(dVar5,0);
    if (cVar11 == '\0') {
      (*(float *)(fr0_ - 0x18)) = fVar4;
      fVar4 = (*(float *)(fr0_ - 0x14));
    }
    (*(float *)(fr0_ - 0x14)) = fVar4;
    fVar4 = (float)*piVar2;
    dVar7 = (double)(ulonglong)(uint)fVar4;
    if (cVar10 == '\0' && fVar4 < 0.0) {
      if (cVar11 == '\0') {
        dVar7 = CONCAT44D(0x4f800000,fVar4);
      }
      else {
        dVar7 = 1.4411522222084588e+18;
      }
      if (cVar10 == '\0') {
        fVar4 = F32HI(dVar7);
        dVar7 = CONCAT44D(fVar4,F32LO(dVar7) + fVar4);
      }
      else {
        dVar7 = dVar7 + dVar7;
      }
    }
    dVar8 = in_xd14;
    if (cVar11 == '\0') {
      dVar8 = CONCAT44D(fVar3,SUB84(dVar5,0));
    }
    if (cVar10 == '\0') {
      dVar8 = CONCAT44D(F32HI(dVar8) - F32LO(dVar7),SUB84(dVar8,0));
    }
    else {
      dVar8 = dVar8 - dVar7;
    }
    if (cVar11 == '\0') {
      dVar5 = CONCAT44D((*(float *)(fr0_ - 0x20)),SUB84(dVar7,0));
    }
    else {
      dVar5 = CONCAT44D((*(float *)(fr0_ - 0x1c)),(*(float *)(fr0_ - 0x20)));
    }
    if (cVar10 == '\0') {
      dVar8 = CONCAT44D(F32HI(dVar8) * F32HI(dVar5)
                               ,SUB84(dVar8,0));
    }
    else {
      dVar8 = dVar8 * dVar5;
    }
    if (cVar11 == '\0') {
      dVar5 = CONCAT44D(0x43b40000,(float)(uint)piVar1[-3]);
    }
    else {
      dVar5 = 2.6584566620691055e+36;
    }
    if (cVar10 == '\0') {
      fVar4 = F32LO(dVar5) * F32HI(dVar5);
    }
    else {
      fVar4 = SUB84(dVar5 * dVar5,0);
    }
    if (cVar11 == '\0') {
      dVar5 = CONCAT44D(0x47800000,fVar4);
    }
    else {
      dVar5 = -8.166723480339562e-251;
    }
    if (cVar10 == '\0') {
      dVar8 = CONCAT44D(F32HI(dVar8) +
                               F32LO(dVar5) / F32HI(dVar5),SUB84(dVar8,0));
    }
    else {
      dVar8 = dVar8 + dVar5 / dVar5;
    }
    fVar4 = F32HI(dVar8);
    (*(float *)(fr0_ - 0x20)) = SUB84(dVar8,0);
    if (cVar11 == '\0') {
      (*(float *)(fr0_ - 0x20)) = fVar4;
      fVar4 = (*(float *)(fr0_ - 0x1c));
    }
    (*(float *)(fr0_ - 0x1c)) = fVar4;
    fVar4 = (float)*piVar2;
    dVar5 = (double)(ulonglong)(uint)fVar4;
    if (cVar10 == '\0' && fVar4 < 0.0) {
      if (cVar11 == '\0') {
        dVar5 = CONCAT44D(0x4f800000,fVar4);
      }
      else {
        dVar5 = 1.4411522222084588e+18;
      }
      if (cVar10 == '\0') {
        fVar4 = F32HI(dVar5);
        dVar5 = CONCAT44D(fVar4,F32LO(dVar5) + fVar4);
      }
      else {
        dVar5 = dVar5 + dVar5;
      }
    }
    dVar7 = in_xd14;
    if (cVar11 == '\0') {
      dVar7 = CONCAT44D(fVar3,SUB84(dVar8,0));
    }
    if (cVar10 == '\0') {
      dVar7 = CONCAT44D(F32HI(dVar7) - F32LO(dVar5),SUB84(dVar7,0));
    }
    else {
      dVar7 = dVar7 - dVar5;
    }
    if (cVar11 == '\0') {
      dVar5 = CONCAT44D((*(float *)(fr0_ - 0x1c)),SUB84(dVar5,0));
    }
    else {
      dVar5 = CONCAT44D((*(float *)(fr0_ - 0x18)),(*(float *)(fr0_ - 0x1c)));
    }
    if (cVar10 == '\0') {
      dVar7 = CONCAT44D(F32HI(dVar7) * F32HI(dVar5)
                               ,SUB84(dVar7,0));
    }
    else {
      dVar7 = dVar7 * dVar5;
    }
    if (cVar11 == '\0') {
      dVar5 = CONCAT44D(0x43b40000,(float)(uint)piVar1[-2]);
    }
    else {
      dVar5 = 2.6584566620691055e+36;
    }
    if (cVar10 == '\0') {
      fVar4 = F32LO(dVar5) * F32HI(dVar5);
    }
    else {
      fVar4 = SUB84(dVar5 * dVar5,0);
    }
    if (cVar11 == '\0') {
      dVar5 = CONCAT44D(0x47800000,fVar4);
    }
    else {
      dVar5 = -8.166723480339562e-251;
    }
    if (cVar10 == '\0') {
      dVar7 = CONCAT44D(F32HI(dVar7) +
                               F32LO(dVar5) / F32HI(dVar5),SUB84(dVar7,0));
    }
    else {
      dVar7 = dVar7 + dVar5 / dVar5;
    }
    fVar4 = F32HI(dVar7);
    (*(float *)(fr0_ - 0x1c)) = fVar4;
    if (cVar11 != '\0') {
      (*(float *)(fr0_ - 0x1c)) = SUB84(dVar7,0);
      (*(float *)(fr0_ - 0x18)) = fVar4;
    }
    fVar4 = (float)*piVar2;
    dVar5 = (double)(ulonglong)(uint)fVar4;
    if (cVar10 == '\0' && fVar4 < 0.0) {
      if (cVar11 == '\0') {
        dVar5 = CONCAT44D(0x4f800000,fVar4);
      }
      else {
        dVar5 = 1.4411522222084588e+18;
      }
      if (cVar10 == '\0') {
        fVar4 = F32HI(dVar5);
        dVar5 = CONCAT44D(fVar4,F32LO(dVar5) + fVar4);
      }
      else {
        dVar5 = dVar5 + dVar5;
      }
    }
    if (cVar10 == '\0') {
      dVar6 = CONCAT44D((int)(D2U(dVar6) >> 0x20),fVar3 - F32LO(dVar5));
    }
    else {
      dVar6 = dVar6 - dVar5;
    }
    if (cVar11 == '\0') {
      dVar5 = CONCAT44D((*(float *)(fr0_ - 0x18)),SUB84(dVar5,0));
    }
    else {
      dVar5 = CONCAT44D((*(float *)(fr0_ - 0x14)),(*(float *)(fr0_ - 0x18)));
    }
    if (cVar10 == '\0') {
      dVar6 = CONCAT44D((int)(D2U(dVar6) >> 0x20),
                               F32LO(dVar6) * F32HI(dVar5));
    }
    else {
      dVar6 = dVar6 * dVar5;
    }
    if (cVar11 == '\0') {
      dVar5 = CONCAT44D(0x43b40000,(float)(uint)piVar1[-1]);
    }
    else {
      dVar5 = 2.6584566620691055e+36;
    }
    if (cVar10 == '\0') {
      fVar3 = F32LO(dVar5) * F32HI(dVar5);
    }
    else {
      fVar3 = SUB84(dVar5 * dVar5,0);
    }
    if (cVar11 == '\0') {
      dVar5 = CONCAT44D(0x47800000,fVar3);
    }
    else {
      dVar5 = -8.166723480339562e-251;
    }
    if (cVar10 == '\0') {
      (*(float *)(fr0_ - 0x18)) = F32LO(dVar6) + F32LO(dVar5) / F32HI(dVar5);
    }
    else {
      (*(float *)(fr0_ - 0x18)) = SUB84(dVar6 + dVar5 / dVar5,0);
    }
    if (cVar11 != '\0') {
      (*(float *)(fr0_ - 0x18)) = SUB84(in_xd14,0);
      (*(float *)(fr0_ - 0x14)) = F32HI(in_xd14);
    }
  }
  (vsp = ((unsigned long)(fr0_ - 36)), vec3_copy_8c02b5fc((*(undefined4 *)(fr0_ + 0x00000000)),&(*(float *)(fr0_ - 0x20)),ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 36)), object_dtor_delete(&(*(float *)(fr0_ - 0x20)),0xffffffff,ar6,ar7));
  return 0;
}

__asm__(".globl _FUN_8c06abb8\n.set _FUN_8c06abb8, _FUN_8c06abb8_def\n");
