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
undefined4 FUN_8c03207c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c03207c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 32; for (int i_ = 0; i_ < 32; i_++) z_[i_] = 0; }
  float fVar1;
  float fVar2;
  float fVar4;
  double dVar3;
  float in_fr5 = 0;
  float in_fr4 = 0;
  undefined4 in_fr7 = 0;
  uint in_fr6 = 0;
  undefined8 in_xd0 = 0;
  int ar4_00;
  char cVar5;
  char cVar6;
  
  cVar6 = '\0';
  cVar5 = '\0';
  fVar1 = *(float *)(unsigned)(ar4 + 0xa8) + in_fr5;
  *(float *)(unsigned)(ar4 + 0xa8) = fVar1;
  fVar2 = (fVar1 * 65536.0) / 6.283184;
  fVar4 = 6.283184;
  ({ unsigned long ri0_ = (unsigned long)(in_fr4); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 32)); FUN_8c25747c((int)fVar2,ar5,ar6,ar7); });
  (*(undefined4 *)(fr0_ - 0xc)) = fVar4;
  fVar1 = in_fr4;
  if (cVar6 != '\0') {
    in_xd0 = CONCAT44(in_fr5,in_fr4);
    (*(undefined4 *)(fr0_ - 0xc)) = fVar2;
    fVar1 = fVar2;
  }
  if (cVar5 == '\0') {
    fVar1 = fVar1 * fVar4;
  }
  else {
    fVar1 = SUB84(CONCAT44D(fVar4,fVar1) * CONCAT44D(fVar4,fVar1),0);
  }
  if (cVar6 == '\0') {
    *(float *)(unsigned)(ar4 + 0x6c) = fVar1;
    dVar3 = CONCAT44D(in_fr7,*(undefined4 *)(unsigned)(ar4 + 0xac));
  }
  else {
    *(undefined8 *)(unsigned)(ar4 + 0x6c) = in_xd0;
    in_xd0 = *(undefined8 *)(unsigned)(ar4 + 0xac);
    dVar3 = CONCAT44D((*(undefined4 *)(fr0_ - 0x20)),in_fr7);
  }
  if (cVar5 == '\0') {
    (*(undefined4 *)(fr0_ - 0x20)) = F32LO(dVar3) + F32HI(dVar3);
  }
  else {
    (*(undefined4 *)(fr0_ - 0x20)) = SUB84(dVar3 + dVar3,0);
  }
  (*(undefined4 *)(fr0_ - 0x1c)) = ar4;
  if (cVar6 != '\0') {
    (*(undefined4 *)(fr0_ - 0x20)) = (float)in_xd0;
    (*(undefined4 *)(fr0_ - 0x1c)) = (int)((ulonglong)in_xd0 >> 0x20);
  }
  if (cVar6 == '\0') {
    *(float *)(unsigned)((*(undefined4 *)(fr0_ - 0x1c)) + 0xac) = (*(undefined4 *)(fr0_ - 0x20));
    dVar3 = CONCAT44D(0x47800000,(*(undefined4 *)(fr0_ - 0x20)));
  }
  else {
    *(ulonglong *)(unsigned)((*(undefined4 *)(fr0_ - 0x1c)) + 0xac) = CONCAT44((*(undefined4 *)(fr0_ - 0x1c)),(*(undefined4 *)(fr0_ - 0x20)));
    in_xd0 = CONCAT44((*(undefined4 *)(fr0_ - 0x1c)),(*(undefined4 *)(fr0_ - 0x20)));
    dVar3 = 12831.689682006836;
  }
  if (cVar5 == '\0') {
    fVar1 = F32LO(dVar3) * F32HI(dVar3);
  }
  else {
    fVar1 = SUB84(dVar3 * dVar3,0);
  }
  if (cVar6 == '\0') {
    dVar3 = CONCAT44D(0x40c90fd8,fVar1);
  }
  else {
    dVar3 = -3.74578248742155e-250;
  }
  if (cVar5 == '\0') {
    fVar2 = F32HI(dVar3);
    fVar1 = F32LO(dVar3) / fVar2;
    dVar3 = CONCAT44D(fVar2,fVar1);
    ar4_00 = (int)fVar1;
  }
  else {
    dVar3 = dVar3 / dVar3;
    ar4_00 = (int)dVar3;
  }
  ({ unsigned long ri0_ = (unsigned long)(in_fr4); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 32)); FUN_8c25747c(ar4_00,ar5,ar6,ar7); });
  fVar1 = F32HI(dVar3);
  if (cVar6 == '\0') {
    dVar3 = (double)(ulonglong)in_fr6;
    (*(undefined4 *)(fr0_ - 0x10)) = fVar1;
  }
  else {
    (*(undefined4 *)(fr0_ - 0x10)) = SUB84(dVar3,0);
    in_xd0 = CONCAT44(in_fr7,in_fr6);
    (*(undefined4 *)(fr0_ - 0xc)) = fVar1;
  }
  if (cVar6 == '\0') {
    dVar3 = CONCAT44D((*(undefined4 *)(fr0_ - 0x10)),SUB84(dVar3,0));
  }
  else {
    dVar3 = CONCAT44D((*(undefined4 *)(fr0_ - 0xc)),(*(undefined4 *)(fr0_ - 0x10)));
  }
  if (cVar5 == '\0') {
    fVar1 = F32LO(dVar3) * F32HI(dVar3);
  }
  else {
    fVar1 = SUB84(dVar3 * dVar3,0);
  }
  if (cVar6 == '\0') {
    *(float *)(unsigned)(ar4 + 0x70) = fVar1;
  }
  else {
    *(undefined8 *)(unsigned)(ar4 + 0x70) = in_xd0;
  }
  return 0x20;
}

__asm__(".globl _FUN_8c03207c\n.set _FUN_8c03207c, _FUN_8c03207c_def\n");
