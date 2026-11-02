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
undefined4 Class_12aeec_m7_0a5af4_def(int ar4,int *ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "Class_12aeec_m7_0a5af4";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 56; for (int i_ = 0; i_ < 56; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  int *ar5_00;
  undefined4 *a6;
  float fVar2;
  double in_dr0 = 0;
  double dVar3;
  undefined4 uVar5;
  double dVar4;
  float fVar6;
  undefined8 in_dr14 = 0;
  bool bVar7;
  char cVar8;
  char cVar9;
  
  uVar1 = (undefined4)((ulonglong)in_dr14 >> 0x20);
  cVar9 = '\0';
  cVar8 = '\0';
  ar5_00 = ar5;
  (vsp = ((unsigned long)(fr0_ - 56)), Vec3_ctor_zero(&(*(undefined4 *)(fr0_ - 0x24)),ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 56)), Vec3_ctor_zero(&(*(undefined4 *)(fr0_ - 0x34)),ar5_00,ar6,ar7));
  dVar4 = CONCAT44D(uVar1,0x3f800000);
  a6 = &(*(undefined4 *)(fr0_ - 0x34));
  (vsp = ((unsigned long)(fr0_ - 56)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*ar5 + 0x124))))(ar5,&(*(undefined4 *)(fr0_ - 0x24)),a6,ar7));
  if (cVar9 == '\0') {
    in_dr0 = CONCAT44D((int)((ulonglong)in_dr0 >> 0x20),*(undefined4 *)(unsigned)(ar4 + 0x30));
  }
  fVar6 = F32LO(dVar4);
  if (cVar8 == '\0') {
    fVar2 = F32LO(in_dr0) - fVar6;
  }
  else {
    fVar2 = SUB84(in_dr0 - dVar4,0);
  }
  if (cVar9 == '\0') {
    dVar3 = CONCAT44D((*(undefined4 *)(fr0_ - 0x24)),fVar2);
  }
  else {
    dVar3 = CONCAT44D((*(undefined4 *)(fr0_ - 0x20)),(*(undefined4 *)(fr0_ - 0x24)));
  }
  fVar2 = F32HI(dVar3);
  if (cVar8 == '\0' && fVar2 < SUB84(dVar3,0)) {
    if (cVar9 == '\0') {
      dVar3 = CONCAT44D(fVar2,*(undefined4 *)(unsigned)(ar4 + 0x30));
    }
    if (cVar8 == '\0') {
      fVar2 = F32LO(dVar3) + fVar6;
    }
    else {
      fVar2 = SUB84(dVar3 + dVar4,0);
    }
    if (cVar9 == '\0') {
      dVar3 = CONCAT44D((*(undefined4 *)(fr0_ - 0x34)),fVar2);
    }
    else {
      dVar3 = CONCAT44D((*(float *)(fr0_ - 0x30)),(*(undefined4 *)(fr0_ - 0x34)));
    }
    if (cVar8 != '\0' || F32HI(dVar3) <= SUB84(dVar3,0)) {
      if (cVar9 == '\0') {
        dVar3 = CONCAT44D((*(undefined4 *)(fr0_ - 0x34)),SUB84(dVar3,0));
      }
      else {
        dVar3 = CONCAT44D((*(float *)(fr0_ - 0x30)),(*(undefined4 *)(fr0_ - 0x34)));
      }
      if (cVar8 == '\0') {
        dVar3 = CONCAT44D(F32HI(dVar3) - fVar6,SUB84(dVar3,0));
      }
      else {
        dVar3 = dVar3 - dVar4;
      }
      if (cVar9 == '\0') {
        *(int *)(unsigned)(ar4 + 0x30) = (int)(D2U(dVar3) >> 0x20);
      }
      else {
        *(double *)(unsigned)(ar4 + 0x30) = dVar3;
      }
    }
  }
  else {
    if (cVar9 == '\0') {
      dVar3 = CONCAT44D((*(undefined4 *)(fr0_ - 0x24)),SUB84(dVar3,0));
    }
    else {
      dVar3 = CONCAT44D((*(undefined4 *)(fr0_ - 0x20)),(*(undefined4 *)(fr0_ - 0x24)));
    }
    if (cVar8 == '\0') {
      dVar3 = CONCAT44D(F32HI(dVar3) + fVar6,SUB84(dVar3,0));
    }
    else {
      dVar3 = dVar3 + dVar4;
    }
    if (cVar9 == '\0') {
      *(int *)(unsigned)(ar4 + 0x30) = (int)(D2U(dVar3) >> 0x20);
    }
    else {
      *(double *)(unsigned)(ar4 + 0x30) = dVar3;
    }
  }
  if (cVar9 == '\0') {
    dVar3 = CONCAT44D((int)(D2U(dVar3) >> 0x20),*(undefined4 *)(unsigned)(ar4 + 0x38));
  }
  if (cVar8 == '\0') {
    fVar2 = F32LO(dVar3) - fVar6;
  }
  else {
    fVar2 = SUB84(dVar3 - dVar4,0);
  }
  if (cVar9 == '\0') {
    dVar3 = CONCAT44D((*(undefined4 *)(fr0_ - 0x1c)),fVar2);
  }
  else {
    dVar3 = CONCAT44D((*(undefined4 *)(fr0_ - 0x18)),(*(undefined4 *)(fr0_ - 0x1c)));
  }
  fVar2 = F32HI(dVar3);
  if (cVar8 == '\0' && fVar2 < SUB84(dVar3,0)) {
    if (cVar9 == '\0') {
      dVar3 = CONCAT44D(fVar2,*(undefined4 *)(unsigned)(ar4 + 0x38));
    }
    if (cVar8 == '\0') {
      fVar2 = F32LO(dVar3) + fVar6;
    }
    else {
      fVar2 = SUB84(dVar3 + dVar4,0);
    }
    if (cVar9 == '\0') {
      dVar3 = CONCAT44D((*(float *)(fr0_ - 0x2c)),fVar2);
    }
    else {
      dVar3 = CONCAT44D((*(undefined4 *)(fr0_ - 0x28)),(*(float *)(fr0_ - 0x2c)));
    }
    if (cVar8 != '\0' || F32HI(dVar3) <= SUB84(dVar3,0)) {
      if (cVar9 == '\0') {
        dVar3 = CONCAT44D((*(float *)(fr0_ - 0x2c)),SUB84(dVar3,0));
      }
      else {
        dVar3 = CONCAT44D((*(undefined4 *)(fr0_ - 0x28)),(*(float *)(fr0_ - 0x2c)));
      }
      if (cVar8 == '\0') {
        dVar3 = CONCAT44D(F32HI(dVar3) - fVar6,SUB84(dVar3,0));
      }
      else {
        dVar3 = dVar3 - dVar4;
      }
      if (cVar9 == '\0') {
        *(int *)(unsigned)(ar4 + 0x38) = (int)(D2U(dVar3) >> 0x20);
      }
      else {
        *(double *)(unsigned)(ar4 + 0x38) = dVar3;
      }
    }
  }
  else {
    if (cVar9 == '\0') {
      dVar3 = CONCAT44D((*(undefined4 *)(fr0_ - 0x1c)),SUB84(dVar3,0));
    }
    else {
      dVar3 = CONCAT44D((*(undefined4 *)(fr0_ - 0x18)),(*(undefined4 *)(fr0_ - 0x1c)));
    }
    if (cVar8 == '\0') {
      dVar3 = CONCAT44D(F32HI(dVar3) + fVar6,SUB84(dVar3,0));
    }
    else {
      dVar3 = dVar3 + dVar4;
    }
    if (cVar9 == '\0') {
      *(int *)(unsigned)(ar4 + 0x38) = (int)(D2U(dVar3) >> 0x20);
    }
    else {
      *(double *)(unsigned)(ar4 + 0x38) = dVar3;
    }
  }
  (vsp = ((unsigned long)(fr0_ - 56)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*ar5 + 0x128))))(ar5,ar4 + 0x30,a6,ar7));
  uVar1 = SUB84(dVar3,0);
  uVar5 = (undefined4)(D2U(dVar3) >> 0x20);
  if (cVar9 == '\0') {
    dVar3 = CONCAT44D(uVar5,SUB84(dVar4,0));
    dVar4 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 0x34),uVar1);
  }
  else {
    dVar4 = *(double *)(unsigned)(ar4 + 0x34);
    (*(undefined4 *)(fr0_ - 0x34)) = uVar5;
  }
  fVar6 = F32HI(dVar3);
  if (cVar8 == '\0') {
    bVar7 = fVar6 < F32HI(dVar4);
  }
  else {
    bVar7 = dVar3 < dVar4;
  }
  if (bVar7) {
    fVar6 = (*(float *)(fr0_ - 0x30));
    fVar2 = (*(float *)(fr0_ - 0x2c));
    if (cVar9 == '\0') {
      fVar6 = *(float *)(unsigned)(ar4 + 0x34);
      fVar2 = (*(float *)(fr0_ - 0x30));
    }
    if (cVar8 != '\0' || fVar2 <= fVar6) {
      if (cVar9 == '\0') {
        *(float *)(unsigned)(ar4 + 0x34) = (*(float *)(fr0_ - 0x30));
      }
      else {
        *(ulonglong *)(unsigned)(ar4 + 0x34) = CONCAT44((*(float *)(fr0_ - 0x2c)),(*(float *)(fr0_ - 0x30)));
      }
    }
  }
  else if (cVar9 == '\0') {
    *(float *)(unsigned)(ar4 + 0x34) = fVar6;
  }
  else {
    *(double *)(unsigned)(ar4 + 0x34) = dVar3;
  }
  (vsp = ((unsigned long)(fr0_ - 56)), Vec3_dtor(&(*(undefined4 *)(fr0_ - 0x34)),0xffffffff,a6,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 56)), Vec3_dtor(&(*(undefined4 *)(fr0_ - 0x24)),0xffffffff,a6,ar7));
  return uVar1;
}

__asm__(".globl _Class_12aeec_m7_0a5af4\n.set _Class_12aeec_m7_0a5af4, _Class_12aeec_m7_0a5af4_def\n");
