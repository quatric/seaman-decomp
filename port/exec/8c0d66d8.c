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
undefined4 FUN_8c0d66d8_def(double *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0d66d8";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 32; for (int i_ = 0; i_ < 32; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  float fVar2;
  float fVar6;
  double dVar3;
  double dVar4;
  double dVar5;
  float in_fr15 = 0;
  undefined4 in_fr14 = 0;
  double in_xd0 = 0;
  double in_xd14 = 0;
  bool bVar7;
  char cVar8;
  char cVar9;
  
  cVar9 = '\0';
  cVar8 = '\0';
  fVar2 = *(float *)(unsigned)(ar4 + 1);
  fVar6 = *(float *)(unsigned)((int)ar4 + 0x54);
  if (fVar6 < fVar2) {
    fVar6 = *(float *)(unsigned)((int)ar4 + 0x54);
    *(float *)(unsigned)(ar4 + 1) = fVar6;
  }
  if (*(float *)(unsigned)((int)ar4 + 100) == 4.2039e-45) {
    if (360.0 <= *(float *)(unsigned)ar4) {
      if (2140.0 < *(float *)(unsigned)ar4) {
        *(float *)(unsigned)ar4 = 2140.0;
      }
    }
    else {
      *(float *)(unsigned)ar4 = 360.0;
    }
    fVar2 = *(float *)(unsigned)(ar4 + 1);
    if (240.0 <= fVar2) {
      fVar2 = *(float *)(unsigned)(ar4 + 1);
      fVar6 = 1300.0;
      if (1300.0 < fVar2) {
        fVar6 = 1300.0;
        *(float *)(unsigned)(ar4 + 1) = 1300.0;
      }
    }
    else {
      fVar6 = 240.0;
      *(float *)(unsigned)(ar4 + 1) = 240.0;
    }
  }
  (vsp = ((unsigned long)(fr0_ - 32)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)(((int)*(float *)(unsigned)(ar4 + 0x15) + 0xc))))(ar4 + 0x15,ar5,ar6,ar7));
  if (cVar9 == '\0') {
    dVar3 = CONCAT44D(*(float *)(unsigned)ar4,fVar2);
    in_fr15 = fVar6;
  }
  else {
    in_xd14 = CONCAT44D(fVar6,fVar2);
    dVar3 = *ar4;
    ((float *)(fr0_ - 0x1c))[0] = fVar6;
  }
  if (cVar8 == '\0') {
    bVar7 = in_fr15 < F32HI(dVar3);
  }
  else {
    bVar7 = CONCAT44D(in_fr14,in_fr15) < dVar3;
  }
  if (bVar7) {
    if (cVar9 == '\0') {
      *(float *)(unsigned)ar4 = in_fr15;
    }
    else {
      *ar4 = in_xd14;
    }
  }
  (vsp = ((unsigned long)(fr0_ - 32)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)(((int)*(float *)(unsigned)(ar4 + 0x19) + 0xc))))(ar4 + 0x19,ar5,ar6,ar7));
  if (cVar9 == '\0') {
    dVar4 = CONCAT44D(*(float *)(unsigned)ar4,SUB84(dVar3,0));
    in_fr15 = F32HI(dVar3);
    dVar3 = in_xd14;
  }
  else {
    dVar4 = *ar4;
  }
  if (cVar8 == '\0') {
    bVar7 = F32HI(dVar4) < in_fr15;
  }
  else {
    bVar7 = dVar4 < CONCAT44D(in_fr14,in_fr15);
  }
  if (bVar7) {
    if (cVar9 == '\0') {
      *(float *)(unsigned)ar4 = in_fr15;
    }
    else {
      *ar4 = dVar3;
    }
  }
  if (((*(float *)(unsigned)((int)ar4 + 100) == 0.0) || (*(float *)(unsigned)((int)ar4 + 100) == 1.4013e-45)) ||
     (dVar5 = dVar4, *(float *)(unsigned)((int)ar4 + 100) == 2.8026e-45)) {
    (vsp = ((unsigned long)(fr0_ - 32)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)(((int)*(float *)(unsigned)(ar4 + 0xd) + 0xc))))(ar4 + 0xd,ar5,ar6,ar7));
    if (cVar9 == '\0') {
      dVar5 = CONCAT44D(*(float *)(unsigned)((int)ar4 + 4),SUB84(dVar4,0));
      in_fr15 = F32HI(dVar4);
    }
    else {
      dVar5 = *(double *)(unsigned)((int)ar4 + 4);
      dVar3 = dVar4;
    }
    if (cVar8 == '\0') {
      bVar7 = in_fr15 < F32HI(dVar5);
    }
    else {
      bVar7 = CONCAT44D(in_fr14,in_fr15) < dVar5;
    }
    if (bVar7) {
      if (cVar9 == '\0') {
        *(float *)(unsigned)((int)ar4 + 4) = in_fr15;
      }
      else {
        *(double *)(unsigned)((int)ar4 + 4) = dVar3;
      }
    }
  }
  (vsp = ((unsigned long)(fr0_ - 32)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)(((int)*(float *)(unsigned)(ar4 + 0x11) + 0xc))))(ar4 + 0x11,ar5,ar6,ar7));
  if (cVar9 == '\0') {
    dVar4 = CONCAT44D(*(float *)(unsigned)((int)ar4 + 4),SUB84(dVar5,0));
    in_fr15 = F32HI(dVar5);
    dVar5 = dVar3;
  }
  else {
    dVar4 = *(double *)(unsigned)((int)ar4 + 4);
  }
  if (cVar8 == '\0') {
    bVar7 = F32HI(dVar4) < in_fr15;
  }
  else {
    bVar7 = dVar4 < CONCAT44D(in_fr14,in_fr15);
  }
  if (bVar7) {
    if (cVar9 == '\0') {
      *(float *)(unsigned)((int)ar4 + 4) = in_fr15;
    }
    else {
      *(double *)(unsigned)((int)ar4 + 4) = dVar5;
    }
  }
  (vsp = ((unsigned long)(fr0_ - 32)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)(((int)*(float *)(unsigned)(ar4 + 0x1d) + 8))))(ar4 + 0x1d,ar5,ar6,ar7));
  if (cVar9 == '\0') {
    dVar3 = CONCAT44D(*(float *)(unsigned)((int)ar4 + 4),SUB84(dVar4,0));
    in_fr15 = F32HI(dVar4);
    dVar4 = dVar5;
  }
  else {
    dVar3 = *(double *)(unsigned)((int)ar4 + 4);
  }
  if (cVar8 == '\0') {
    bVar7 = F32HI(dVar3) < in_fr15;
  }
  else {
    bVar7 = dVar3 < CONCAT44D(in_fr14,in_fr15);
  }
  if (bVar7) {
    if (cVar9 == '\0') {
      *(float *)(unsigned)((int)ar4 + 4) = in_fr15;
    }
    else {
      *(double *)(unsigned)((int)ar4 + 4) = dVar4;
    }
  }
  fVar2 = *(float *)(unsigned)((int)ar4 + 100);
  if (fVar2 == 0.0) {
    (vsp = ((unsigned long)(fr0_ - 32)), Vec3_assign(ar4 + 4,ar4,ar6,ar7));
    fVar2 = F32LO(dVar3);
    if (cVar9 == '\0') {
      fVar2 = *(float *)(unsigned)(ar4 + 5);
    }
    else {
      in_xd0 = ar4[5];
    }
    if (cVar8 == '\0') {
      fVar2 = fVar2 - 1.0;
    }
    else {
      fVar2 = SUB84(CONCAT44D(0x3f800000,fVar2) - CONCAT44D(0x3f800000,fVar2),0);
    }
    if (cVar9 == '\0') {
      *(float *)(unsigned)(ar4 + 5) = fVar2;
    }
    else {
      ar4[5] = in_xd0;
    }
    goto LAB_8c0d68ba;
  }
  if (fVar2 != 2.8026e-45) {
    if (fVar2 == 4.2039e-45) {
      if (cVar9 == '\0') {
        *(float *)(unsigned)(ar4 + 4) = *(float *)(unsigned)ar4;
        dVar3 = (double)(ulonglong)(uint)*(float *)(unsigned)(ar4 + 1);
      }
      else {
        dVar3 = *ar4;
        ar4[4] = dVar3;
        in_xd0 = ar4[1];
      }
      dVar4 = CONCAT44D(0x3f800000,SUB84(dVar3,0));
      if (cVar8 == '\0') {
        fVar2 = F32LO(dVar3) - 1.0;
      }
      else {
        fVar2 = SUB84(dVar4 - dVar4,0);
      }
      if (cVar9 == '\0') {
        *(float *)(unsigned)(ar4 + 5) = fVar2;
      }
      else {
        ar4[5] = in_xd0;
      }
      goto LAB_8c0d68ba;
    }
    if (fVar2 != 7.00649e-45) goto LAB_8c0d68ba;
  }
  (vsp = ((unsigned long)(fr0_ - 32)), Vec3_assign(ar4 + 4,ar4,ar6,ar7));
  fVar2 = F32LO(dVar3);
  if (cVar9 == '\0') {
    fVar2 = *(float *)(unsigned)(ar4 + 5);
  }
  else {
    in_xd0 = ar4[5];
  }
  if (cVar8 == '\0') {
    fVar2 = fVar2 - 1.0;
  }
  else {
    fVar2 = SUB84(CONCAT44D(0x3f800000,fVar2) - CONCAT44D(0x3f800000,fVar2),0);
  }
  if (cVar9 == '\0') {
    *(float *)(unsigned)(ar4 + 5) = fVar2;
  }
  else {
    ar4[5] = in_xd0;
  }
LAB_8c0d68ba:
  ({ unsigned long t0_ = (unsigned long)(((float *)(fr0_ - 0x1c))); *(unsigned *)((((unsigned long)(fr0_ - 32)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 32)) - 8); Vec3_sub(ar4 + 4,ar4,ar6,ar7); });
  (vsp = ((unsigned long)(fr0_ - 32)), Vec3_assign(ar4 + 2,((float *)(fr0_ - 0x1c)),ar6,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 32)), Vec3_dtor(((float *)(fr0_ - 0x1c)),0xffffffff,ar6,ar7));
  return uVar1;
}

__asm__(".globl _FUN_8c0d66d8\n.set _FUN_8c0d66d8, _FUN_8c0d66d8_def\n");
