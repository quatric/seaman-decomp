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
double * CAnimal_m8_0f511c_def(int ar4,int *ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "CAnimal_m8_0f511c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 68; for (int i_ = 0; i_ < 68; i_++) z_[i_] = 0; }
  double *pdVar1;
  int a5;
  undefined4 uVar2;
  double in_dr0 = 0;
  float fVar4;
  double dVar3;
  float in_fr13 = 0;
  undefined4 in_fr12 = 0;
  undefined4 in_fr15 = 0;
  float fVar5;
  float fVar6;
  bool bVar7;
  char cVar8;
  char cVar9;
  
  cVar9 = '\0';
  cVar8 = '\0';
  (vsp = ((unsigned long)(fr0_ - 68)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*ar5 + 0x184))))(ar5,ar5,ar6,ar7));
  if (cVar9 == '\0') {
    in_fr13 = F32HI(in_dr0);
  }
  a5 = ar4 + 0x30;
  (vsp = ((unsigned long)(fr0_ - 68)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*ar5 + 0x128))))(ar5,a5,ar6,ar7));
  if (cVar9 == '\0') {
    in_fr15 = (int)((ulonglong)in_dr0 >> 0x20);
  }
  (vsp = ((unsigned long)(fr0_ - 68)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(ar4 + 8) + 0x174))))(ar4,a5,ar6,ar7));
  uVar2 = SUB84(in_dr0,0);
  if (cVar9 == '\0') {
    in_dr0 = CONCAT44D((int)((ulonglong)in_dr0 >> 0x20),in_fr15);
  }
  *(uint *)(unsigned)(ar4 + 0x74) = *(uint *)(unsigned)(ar4 + 0x74) & 0xffffffbf;
  *(uint *)(unsigned)(ar4 + 0x74) = *(uint *)(unsigned)(ar4 + 0x74) & 0xffffffef;
  *(uint *)(unsigned)(ar4 + 0x74) = *(uint *)(unsigned)(ar4 + 0x74) & 0xffffffdf;
  if (cVar9 == '\0') {
    fVar4 = 1.1754944e-38;
  }
  else {
    uVar2 = 0x800000;
    fVar4 = -NAN;
  }
  fVar5 = F32LO(in_dr0);
  fVar6 = F32HI(in_dr0);
  if (in_fr13 == fVar4) {
    if (cVar8 == '\0') {
      in_dr0 = CONCAT44D(fVar6,fVar5 + fVar6);
    }
    else {
      in_dr0 = in_dr0 + in_dr0;
    }
    if (cVar9 == '\0') {
      dVar3 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 0x34),uVar2);
    }
    else {
      dVar3 = *(double *)(unsigned)(ar4 + 0x34);
    }
    if (cVar8 == '\0') {
      bVar7 = SUB84(in_dr0,0) < F32HI(dVar3);
    }
    else {
      bVar7 = in_dr0 < dVar3;
    }
    if (bVar7) {
      pdVar1 = (double *)(unsigned)0x74;
      *(uint *)(unsigned)(ar4 + 0x74) = *(uint *)(unsigned)(ar4 + 0x74) | 0x40;
    }
    else {
      pdVar1 = (double *)(unsigned)0x74;
      *(uint *)(unsigned)(ar4 + 0x74) = *(uint *)(unsigned)(ar4 + 0x74) | 0x20;
    }
  }
  else {
    if (cVar9 == '\0') {
      dVar3 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 0x34),uVar2);
    }
    else {
      dVar3 = *(double *)(unsigned)(ar4 + 0x34);
    }
    if (cVar8 == '\0') {
      bVar7 = in_fr13 < F32HI(dVar3);
    }
    else {
      bVar7 = CONCAT44D(in_fr12,in_fr13) < dVar3;
    }
    if (bVar7) {
      if (cVar8 == '\0') {
        in_dr0 = CONCAT44D(fVar6,fVar5 + fVar6);
      }
      else {
        in_dr0 = in_dr0 + in_dr0;
      }
      if (cVar9 == '\0') {
        dVar3 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 0x34),SUB84(dVar3,0));
      }
      else {
        dVar3 = *(double *)(unsigned)(ar4 + 0x34);
      }
      if (cVar8 == '\0') {
        bVar7 = SUB84(in_dr0,0) < F32HI(dVar3);
      }
      else {
        bVar7 = in_dr0 < dVar3;
      }
      if (bVar7) {
        pdVar1 = (double *)(unsigned)0x74;
        *(uint *)(unsigned)(ar4 + 0x74) = *(uint *)(unsigned)(ar4 + 0x74) | 0x40;
      }
      else {
        pdVar1 = (double *)(unsigned)0x74;
        *(uint *)(unsigned)(ar4 + 0x74) = *(uint *)(unsigned)(ar4 + 0x74) | 0x20;
      }
    }
    else {
      *(uint *)(unsigned)(ar4 + 0x74) = *(uint *)(unsigned)(ar4 + 0x74) | 0x10;
      if (cVar8 == '\0') {
        in_dr0 = CONCAT44D(fVar6,fVar5 + fVar6);
      }
      else {
        in_dr0 = in_dr0 + in_dr0;
      }
      pdVar1 = (double *)(unsigned)(ar4 + 0x34);
      if (cVar9 == '\0') {
        dVar3 = CONCAT44D(*(undefined4 *)(unsigned)pdVar1,SUB84(dVar3,0));
      }
      else {
        dVar3 = *pdVar1;
      }
      if (cVar8 == '\0') {
        bVar7 = SUB84(in_dr0,0) < F32HI(dVar3);
      }
      else {
        bVar7 = in_dr0 < dVar3;
      }
      if (!bVar7) {
        pdVar1 = (double *)(unsigned)0x74;
        *(uint *)(unsigned)(ar4 + 0x74) = *(uint *)(unsigned)(ar4 + 0x74) | 0x20;
      }
    }
  }
  return pdVar1;
}

__asm__(".globl _CAnimal_m8_0f511c\n.set _CAnimal_m8_0f511c, _CAnimal_m8_0f511c_def\n");
