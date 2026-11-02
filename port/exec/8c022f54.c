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
double * Vec3_length_def(double *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "Vec3_length";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  float fVar1;
  undefined8 in_dr0 = 0;
  double dVar2;
  float in_fr15 = 0;
  undefined4 in_fr14 = 0;
  char cVar3;
  char cVar4;
  
  cVar4 = '\0';
  cVar3 = '\0';
  (vsp = ((unsigned long)(fr0_ - 0)), Vec3_length_sq(ar4,ar5,ar6,ar7));
  if (cVar4 == '\0') {
    in_fr15 = F32HI(in_dr0);
    fVar1 = in_fr15;
  }
  else {
    fVar1 = (float)in_dr0;
  }
  if (fVar1 != 0.0) {
    if (cVar4 == '\0') {
      dVar2 = CONCAT44D(*(undefined4 *)(unsigned)ar4,fVar1);
    }
    else {
      dVar2 = *ar4;
    }
    if (cVar3 == '\0') {
      dVar2 = CONCAT44D(F32HI(dVar2) / in_fr15,SUB84(dVar2,0));
    }
    else {
      dVar2 = dVar2 / CONCAT44D(in_fr14,in_fr15);
    }
    if (cVar4 == '\0') {
      *(int *)(unsigned)ar4 = (int)(D2U(dVar2) >> 0x20);
      dVar2 = CONCAT44D(*(undefined4 *)(unsigned)((int)ar4 + 4),SUB84(dVar2,0));
    }
    else {
      *ar4 = dVar2;
      dVar2 = *(double *)(unsigned)((int)ar4 + 4);
    }
    if (cVar3 == '\0') {
      dVar2 = CONCAT44D(F32HI(dVar2) / in_fr15,SUB84(dVar2,0));
    }
    else {
      dVar2 = dVar2 / CONCAT44D(in_fr14,in_fr15);
    }
    if (cVar4 == '\0') {
      *(int *)(unsigned)((int)ar4 + 4) = (int)(D2U(dVar2) >> 0x20);
      dVar2 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 1),SUB84(dVar2,0));
    }
    else {
      *(double *)(unsigned)((int)ar4 + 4) = dVar2;
      dVar2 = ar4[1];
    }
    if (cVar3 == '\0') {
      dVar2 = CONCAT44D(F32HI(dVar2) / in_fr15,SUB84(dVar2,0));
    }
    else {
      dVar2 = dVar2 / CONCAT44D(in_fr14,in_fr15);
    }
    if (cVar4 == '\0') {
      *(int *)(unsigned)(ar4 + 1) = (int)(D2U(dVar2) >> 0x20);
    }
    else {
      ar4[1] = dVar2;
    }
  }
  return ar4;
}

__asm__(".globl _Vec3_length\n.set _Vec3_length, _Vec3_length_def\n");
