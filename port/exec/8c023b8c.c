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
undefined4 Vec3_scale_def(undefined8 *ar4,double *ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "Vec3_scale";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;
  undefined4 s0 = *(undefined4 *)(vsp + 0);

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 32; for (int i_ = 0; i_ < 32; i_++) z_[i_] = 0; }
  double dVar1;
  undefined8 in_xd0 = 0;
  char cVar2;
  char cVar3;
  
  cVar3 = '\0';
  cVar2 = '\0';
  (vsp = ((unsigned long)(fr0_ - 32)), Vec3_ctor_zero(&(*(float *)(fr0_ - 0x1c)),ar5,ar6,ar7));
  if (cVar3 == '\0') {
    dVar1 = CONCAT44D(*(undefined4 *)(unsigned)ar5,*(undefined4 *)(unsigned)ar4);
  }
  else {
    in_xd0 = *ar4;
    dVar1 = *ar5;
  }
  if (cVar2 == '\0') {
    (*(float *)(fr0_ - 0x1c)) = F32LO(dVar1) * F32HI(dVar1);
  }
  else {
    (*(float *)(fr0_ - 0x1c)) = SUB84(dVar1 * dVar1,0);
  }
  if (cVar3 == '\0') {
    dVar1 = CONCAT44D(*(undefined4 *)(unsigned)ar5,*(undefined4 *)(unsigned)((int)ar4 + 4));
  }
  else {
    (*(float *)(fr0_ - 0x1c)) = (float)in_xd0;
    in_xd0 = *(undefined8 *)(unsigned)((int)ar4 + 4);
    dVar1 = *ar5;
  }
  if (cVar2 == '\0') {
    (*(float *)(fr0_ - 0x18)) = F32LO(dVar1) * F32HI(dVar1);
  }
  else {
    (*(float *)(fr0_ - 0x18)) = SUB84(dVar1 * dVar1,0);
  }
  if (cVar3 == '\0') {
    dVar1 = CONCAT44D(*(undefined4 *)(unsigned)ar5,*(undefined4 *)(unsigned)(ar4 + 1));
  }
  else {
    (*(float *)(fr0_ - 0x18)) = (float)in_xd0;
    in_xd0 = ar4[1];
    dVar1 = *ar5;
  }
  if (cVar2 == '\0') {
    (*(float *)(fr0_ - 0x14)) = F32LO(dVar1) * F32HI(dVar1);
  }
  else {
    (*(float *)(fr0_ - 0x14)) = SUB84(dVar1 * dVar1,0);
  }
  if (cVar3 != '\0') {
    (*(float *)(fr0_ - 0x14)) = (float)in_xd0;
    (*(undefined4 *)(fr0_ - 0x10)) = (undefined4)((ulonglong)in_xd0 >> 0x20);
  }
  (vsp = ((unsigned long)(fr0_ - 32)), Vec3_ctor_copy(s0,&(*(float *)(fr0_ - 0x1c)),ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 32)), Vec3_dtor(&(*(float *)(fr0_ - 0x1c)),0xffffffff,ar6,ar7));
  return 0;
}

__asm__(".globl _Vec3_scale\n.set _Vec3_scale, _Vec3_scale_def\n");
