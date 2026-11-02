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
undefined4 CAnimal_m7_0f49b8_def(int ar4,int *ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "CAnimal_m7_0f49b8";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 60; for (int i_ = 0; i_ < 60; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 uVar2;
  int *ar5_00;
  undefined4 *a6;
  float fVar3;
  double in_dr0 = 0;
  double dVar4;
  double dVar5;
  float fVar6;
  double in_dr12 = 0;
  undefined4 in_fr15 = 0;
  double dVar7;
  double in_xd12 = 0;
  bool bVar8;
  char cVar9;
  char cVar10;
  
  cVar10 = '\0';
  cVar9 = '\0';
  ar5_00 = ar5;
  (vsp = ((unsigned long)(fr0_ - 60)), Vec3_ctor_zero(&(*(undefined4 *)(fr0_ - 0x28)),ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 60)), Vec3_ctor_zero(&(*(undefined4 *)(fr0_ - 0x38)),ar5_00,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 60)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(ar4 + 8) + 0x170))))(ar4,ar5_00,ar6,ar7));
  uVar2 = (undefined4)((ulonglong)in_dr0 >> 0x20);
  if (cVar10 == '\0') {
    in_fr15 = uVar2;
    uVar2 = (*(undefined4 *)(fr0_ - 0x38));
  }
  (*(undefined4 *)(fr0_ - 0x38)) = uVar2;
  (vsp = ((unsigned long)(fr0_ - 60)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(ar4 + 8) + 0x174))))(ar4,ar5_00,ar6,ar7));
  dVar7 = in_dr0;
  if (cVar10 == '\0') {
    dVar7 = CONCAT44D((int)((ulonglong)in_dr0 >> 0x20),in_fr15);
  }
  iVar1 = (vsp = ((unsigned long)(fr0_ - 60)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(ar4 + 8) + 0xb4))))(ar4,ar5_00,ar6,ar7));
  if (iVar1 == 0) {
    dVar7 = CONCAT44D(0x3f800000,SUB84(dVar7,0));
  }
  a6 = &(*(undefined4 *)(fr0_ - 0x38));
  (vsp = ((unsigned long)(fr0_ - 60)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*ar5 + 0x124))))(ar5,&(*(undefined4 *)(fr0_ - 0x28)),a6,ar7));
  if (cVar10 == '\0') {
    in_dr0 = CONCAT44D((int)((ulonglong)in_dr0 >> 0x20),*(undefined4 *)(unsigned)(ar4 + 0x30));
  }
  fVar6 = F32LO(dVar7);
  if (cVar9 == '\0') {
    fVar3 = F32LO(in_dr0) - fVar6;
  }
  else {
    fVar3 = SUB84(in_dr0 - dVar7,0);
  }
  if (cVar10 == '\0') {
    dVar4 = CONCAT44D((*(undefined4 *)(fr0_ - 0x28)),fVar3);
  }
  else {
    dVar4 = CONCAT44D((*(undefined4 *)(fr0_ - 0x24)),(*(undefined4 *)(fr0_ - 0x28)));
  }
  fVar3 = F32HI(dVar4);
  if (cVar9 == '\0' && fVar3 < SUB84(dVar4,0)) {
    if (cVar10 == '\0') {
      dVar4 = CONCAT44D(fVar3,*(undefined4 *)(unsigned)(ar4 + 0x30));
    }
    if (cVar9 == '\0') {
      fVar3 = F32LO(dVar4) + fVar6;
    }
    else {
      fVar3 = SUB84(dVar4 + dVar7,0);
    }
    if (cVar10 == '\0') {
      dVar4 = CONCAT44D((*(undefined4 *)(fr0_ - 0x38)),fVar3);
    }
    else {
      dVar4 = CONCAT44D((*(float *)(fr0_ - 0x34)),(*(undefined4 *)(fr0_ - 0x38)));
    }
    if (cVar9 != '\0' || F32HI(dVar4) <= SUB84(dVar4,0)) {
      if (cVar10 == '\0') {
        dVar4 = CONCAT44D((*(undefined4 *)(fr0_ - 0x38)),SUB84(dVar4,0));
      }
      else {
        dVar4 = CONCAT44D((*(float *)(fr0_ - 0x34)),(*(undefined4 *)(fr0_ - 0x38)));
      }
      if (cVar9 == '\0') {
        dVar4 = CONCAT44D(F32HI(dVar4) - fVar6,SUB84(dVar4,0));
      }
      else {
        dVar4 = dVar4 - dVar7;
      }
      if (cVar10 == '\0') {
        *(int *)(unsigned)(ar4 + 0x30) = (int)(D2U(dVar4) >> 0x20);
      }
      else {
        *(double *)(unsigned)(ar4 + 0x30) = dVar4;
      }
    }
  }
  else {
    if (cVar10 == '\0') {
      dVar4 = CONCAT44D((*(undefined4 *)(fr0_ - 0x28)),SUB84(dVar4,0));
    }
    else {
      dVar4 = CONCAT44D((*(undefined4 *)(fr0_ - 0x24)),(*(undefined4 *)(fr0_ - 0x28)));
    }
    if (cVar9 == '\0') {
      dVar4 = CONCAT44D(F32HI(dVar4) + fVar6,SUB84(dVar4,0));
    }
    else {
      dVar4 = dVar4 + dVar7;
    }
    if (cVar10 == '\0') {
      *(int *)(unsigned)(ar4 + 0x30) = (int)(D2U(dVar4) >> 0x20);
    }
    else {
      *(double *)(unsigned)(ar4 + 0x30) = dVar4;
    }
  }
  if (cVar10 == '\0') {
    dVar4 = CONCAT44D((int)(D2U(dVar4) >> 0x20),*(undefined4 *)(unsigned)(ar4 + 0x38));
  }
  if (cVar9 == '\0') {
    fVar3 = F32LO(dVar4) - fVar6;
  }
  else {
    fVar3 = SUB84(dVar4 - dVar7,0);
  }
  if (cVar10 == '\0') {
    dVar4 = CONCAT44D((*(undefined4 *)(fr0_ - 0x20)),fVar3);
  }
  else {
    dVar4 = CONCAT44D((*(undefined4 *)(fr0_ - 0x1c)),(*(undefined4 *)(fr0_ - 0x20)));
  }
  fVar3 = F32HI(dVar4);
  if (cVar9 == '\0' && fVar3 < SUB84(dVar4,0)) {
    if (cVar10 == '\0') {
      dVar4 = CONCAT44D(fVar3,*(undefined4 *)(unsigned)(ar4 + 0x38));
    }
    if (cVar9 == '\0') {
      fVar3 = F32LO(dVar4) + fVar6;
    }
    else {
      fVar3 = SUB84(dVar4 + dVar7,0);
    }
    if (cVar10 == '\0') {
      dVar4 = CONCAT44D((*(float *)(fr0_ - 0x30)),fVar3);
    }
    else {
      dVar4 = CONCAT44D((*(undefined4 *)(fr0_ - 0x2c)),(*(float *)(fr0_ - 0x30)));
    }
    if (cVar9 != '\0' || F32HI(dVar4) <= SUB84(dVar4,0)) {
      if (cVar10 == '\0') {
        dVar4 = CONCAT44D((*(float *)(fr0_ - 0x30)),SUB84(dVar4,0));
      }
      else {
        dVar4 = CONCAT44D((*(undefined4 *)(fr0_ - 0x2c)),(*(float *)(fr0_ - 0x30)));
      }
      if (cVar9 == '\0') {
        dVar4 = CONCAT44D(F32HI(dVar4) - fVar6,SUB84(dVar4,0));
      }
      else {
        dVar4 = dVar4 - dVar7;
      }
      if (cVar10 == '\0') {
        *(int *)(unsigned)(ar4 + 0x38) = (int)(D2U(dVar4) >> 0x20);
      }
      else {
        *(double *)(unsigned)(ar4 + 0x38) = dVar4;
      }
    }
  }
  else {
    if (cVar10 == '\0') {
      dVar4 = CONCAT44D((*(undefined4 *)(fr0_ - 0x20)),SUB84(dVar4,0));
    }
    else {
      dVar4 = CONCAT44D((*(undefined4 *)(fr0_ - 0x1c)),(*(undefined4 *)(fr0_ - 0x20)));
    }
    if (cVar9 == '\0') {
      dVar4 = CONCAT44D(F32HI(dVar4) + fVar6,SUB84(dVar4,0));
    }
    else {
      dVar4 = dVar4 + dVar7;
    }
    if (cVar10 == '\0') {
      *(int *)(unsigned)(ar4 + 0x38) = (int)(D2U(dVar4) >> 0x20);
    }
    else {
      *(double *)(unsigned)(ar4 + 0x38) = dVar4;
    }
  }
  (vsp = ((unsigned long)(fr0_ - 60)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*ar5 + 0x128))))(ar5,ar4 + 0x30,a6,ar7));
  if (cVar10 == '\0') {
    in_dr12 = CONCAT44D((int)((ulonglong)in_dr12 >> 0x20),(int)(D2U(dVar4) >> 0x20));
    dVar5 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 0x34),SUB84(dVar4,0));
    dVar4 = in_xd12;
  }
  else {
    dVar5 = *(double *)(unsigned)(ar4 + 0x34);
  }
  fVar6 = F32HI(dVar7);
  if (cVar9 == '\0') {
    bVar8 = SUB84(in_dr12,0) < F32HI(dVar5) - fVar6;
  }
  else {
    bVar8 = in_dr12 < dVar5 - dVar7;
  }
  if (bVar8) {
    fVar6 = (*(float *)(fr0_ - 0x34));
    fVar3 = (*(float *)(fr0_ - 0x30));
    if (cVar10 == '\0') {
      fVar6 = *(float *)(unsigned)(ar4 + 0x34);
      fVar3 = (*(float *)(fr0_ - 0x34));
    }
    if (cVar9 != '\0' || fVar3 <= fVar6) {
      if (cVar10 == '\0') {
        *(float *)(unsigned)(ar4 + 0x34) = (*(float *)(fr0_ - 0x34));
      }
      else {
        *(ulonglong *)(unsigned)(ar4 + 0x34) = CONCAT44((*(float *)(fr0_ - 0x30)),(*(float *)(fr0_ - 0x34)));
      }
    }
  }
  else {
    if (cVar9 == '\0') {
      fVar6 = F32LO(in_dr12) + fVar6;
    }
    else {
      fVar6 = SUB84(in_dr12 + dVar7,0);
    }
    if (cVar10 == '\0') {
      *(float *)(unsigned)(ar4 + 0x34) = fVar6;
    }
    else {
      *(double *)(unsigned)(ar4 + 0x34) = dVar4;
    }
  }
  (vsp = ((unsigned long)(fr0_ - 60)), Vec3_dtor(&(*(undefined4 *)(fr0_ - 0x38)),0xffffffff,a6,ar7));
  uVar2 = (vsp = ((unsigned long)(fr0_ - 60)), Vec3_dtor(&(*(undefined4 *)(fr0_ - 0x28)),0xffffffff,a6,ar7));
  return uVar2;
}

__asm__(".globl _CAnimal_m7_0f49b8\n.set _CAnimal_m7_0f49b8, _CAnimal_m7_0f49b8_def\n");
