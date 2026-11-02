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
undefined4 Vec3_normalize_def(double *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "Vec3_normalize";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 32; for (int i_ = 0; i_ < 32; i_++) z_[i_] = 0; }
  undefined8 in_dr0 = 0;
  float fVar3;
  double dVar1;
  double dVar2;
  undefined4 uVar4;
  float in_fr15 = 0;
  undefined4 in_fr14 = 0;
  char cVar5;
  char cVar6;
  
  cVar6 = '\0';
  cVar5 = '\0';
  (vsp = ((unsigned long)(fr0_ - 32)), Vec3_ctor_zero(&(*(float *)(fr0_ - 0x1c)),ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 32)), Vec3_length_sq(ar4,ar5,ar6,ar7));
  fVar3 = F32HI(in_dr0);
  if (cVar6 == '\0') {
    in_fr15 = fVar3;
    fVar3 = (*(float *)(fr0_ - 0x1c));
  }
  (*(float *)(fr0_ - 0x1c)) = fVar3;
  if (in_fr15 == 0.0) {
    (vsp = ((unsigned long)(fr0_ - 32)), Vec3_assign(&(*(float *)(fr0_ - 0x1c)),ar4,ar6,ar7));
  }
  else {
    if (cVar6 == '\0') {
      dVar1 = CONCAT44D(*(undefined4 *)(unsigned)ar4,(int)in_dr0);
    }
    else {
      dVar1 = *ar4;
    }
    if (cVar5 == '\0') {
      dVar1 = CONCAT44D(F32HI(dVar1) / in_fr15,SUB84(dVar1,0));
    }
    else {
      dVar1 = dVar1 / CONCAT44D(in_fr14,in_fr15);
    }
    (*(float *)(fr0_ - 0x1c)) = SUB84(dVar1,0);
    if (cVar6 == '\0') {
      dVar2 = CONCAT44D(*(undefined4 *)(unsigned)((int)ar4 + 4),(*(float *)(fr0_ - 0x1c)));
      (*(float *)(fr0_ - 0x1c)) = F32HI(dVar1);
    }
    else {
      dVar2 = *(double *)(unsigned)((int)ar4 + 4);
    }
    if (cVar5 == '\0') {
      dVar2 = CONCAT44D(F32HI(dVar2) / in_fr15,SUB84(dVar2,0));
    }
    else {
      dVar2 = dVar2 / CONCAT44D(in_fr14,in_fr15);
    }
    (*(undefined4 *)(fr0_ - 0x18)) = SUB84(dVar2,0);
    if (cVar6 == '\0') {
      dVar1 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 1),(*(undefined4 *)(fr0_ - 0x18)));
      (*(undefined4 *)(fr0_ - 0x18)) = (int)(D2U(dVar2) >> 0x20);
    }
    else {
      dVar1 = ar4[1];
    }
    if (cVar5 == '\0') {
      dVar1 = CONCAT44D(F32HI(dVar1) / in_fr15,SUB84(dVar1,0));
    }
    else {
      dVar1 = dVar1 / CONCAT44D(in_fr14,in_fr15);
    }
    uVar4 = (undefined4)(D2U(dVar1) >> 0x20);
    (*(undefined4 *)(fr0_ - 0x14)) = uVar4;
    if (cVar6 != '\0') {
      (*(undefined4 *)(fr0_ - 0x14)) = SUB84(dVar1,0);
      (*(undefined4 *)(fr0_ - 0x10)) = uVar4;
    }
  }
  (vsp = ((unsigned long)(fr0_ - 32)), Vec3_ctor_copy((*(undefined4 *)(fr0_ + 0x00000000)),&(*(float *)(fr0_ - 0x1c)),ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 32)), Vec3_dtor(&(*(float *)(fr0_ - 0x1c)),0xffffffff,ar6,ar7));
  return 0;
}

__asm__(".globl _Vec3_normalize\n.set _Vec3_normalize, _Vec3_normalize_def\n");
