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
undefined4 FUN_8c06add8_def(int ar4,int *ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c06add8";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 68; for (int i_ = 0; i_ < 68; i_++) z_[i_] = 0; }
  float fVar1;
  undefined8 in_dr0 = 0;
  float fVar3;
  double dVar2;
  float in_fr15 = 0;
  undefined4 in_fr14 = 0;
  bool bVar4;
  char cVar5;
  char cVar6;
  
  cVar6 = '\0';
  cVar5 = '\0';
  (vsp = ((unsigned long)(fr0_ - 68)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*ar5 + 0x184))))(ar5,ar5,ar6,ar7));
  fVar1 = (float)in_dr0;
  if (cVar6 == '\0') {
    in_fr15 = F32HI(in_dr0);
  }
  *(uint *)(unsigned)(ar4 + 0x74) = *(uint *)(unsigned)(ar4 + 0x74) & 0xffffffbf;
  *(uint *)(unsigned)(ar4 + 0x74) = *(uint *)(unsigned)(ar4 + 0x74) & 0xffffffef;
  *(uint *)(unsigned)(ar4 + 0x74) = *(uint *)(unsigned)(ar4 + 0x74) & 0xffffffdf;
  if (cVar6 == '\0') {
    fVar3 = 1.1754944e-38;
  }
  else {
    fVar1 = 1.1754944e-38;
    fVar3 = -NAN;
  }
  if (in_fr15 == fVar3) {
    (vsp = ((unsigned long)(fr0_ - 68)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*ar5 + 0x128))))(ar5,ar4 + 0x30,ar6,ar7));
    if (cVar6 == '\0') {
      fVar1 = *(float *)(unsigned)(ar4 + 0x34);
    }
    if (cVar5 != '\0' || fVar1 <= fVar3) {
      *(uint *)(unsigned)(ar4 + 0x74) = *(uint *)(unsigned)(ar4 + 0x74) | 0x20;
    }
    else {
      *(uint *)(unsigned)(ar4 + 0x74) = *(uint *)(unsigned)(ar4 + 0x74) | 0x40;
    }
  }
  else {
    (vsp = ((unsigned long)(fr0_ - 68)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*ar5 + 0x128))))(ar5,ar4 + 0x30,ar6,ar7));
    if (cVar6 == '\0') {
      fVar1 = *(float *)(unsigned)(ar4 + 0x34);
    }
    if (cVar5 != '\0' || fVar1 <= fVar3) {
      *(uint *)(unsigned)(ar4 + 0x74) = *(uint *)(unsigned)(ar4 + 0x74) | 0x20;
    }
    else {
      if (cVar6 == '\0') {
        dVar2 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 0x34),fVar1);
      }
      else {
        dVar2 = *(double *)(unsigned)(ar4 + 0x34);
      }
      if (cVar5 == '\0') {
        bVar4 = in_fr15 < F32HI(dVar2);
      }
      else {
        bVar4 = CONCAT44D(in_fr14,in_fr15) < dVar2;
      }
      if (bVar4) {
        *(uint *)(unsigned)(ar4 + 0x74) = *(uint *)(unsigned)(ar4 + 0x74) | 0x40;
      }
      else {
        *(uint *)(unsigned)(ar4 + 0x74) = *(uint *)(unsigned)(ar4 + 0x74) | 0x10;
      }
    }
  }
  return 0x74;
}

__asm__(".globl _FUN_8c06add8\n.set _FUN_8c06add8, _FUN_8c06add8_def\n");
