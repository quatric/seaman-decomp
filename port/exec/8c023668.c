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
undefined4 FUN_8c023668_def(undefined8 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c023668";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;
  undefined4 s0 = *(undefined4 *)(vsp + 0);

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 96; for (int i_ = 0; i_ < 96; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  undefined4 *ar6_00;
  float fVar2;
  double dVar3;
  undefined4 in_fr5 = 0;
  undefined4 in_fr4 = 0;
  undefined4 in_fr6 = 0;
  int ar7_00;
  int ar6_01;
  int ar5_00;
  char cVar4;
  char cVar5;
  
  cVar5 = '\0';
  cVar4 = '\0';
  (*(undefined4 *)(fr0_ - 0x54)) = *(undefined4 *)(unsigned)ar4;
  (*(undefined4 *)(fr0_ - 0x50)) = *(undefined4 *)(unsigned)((int)ar4 + 4);
  (*(undefined4 *)(fr0_ - 0x4c)) = *(undefined4 *)(unsigned)(ar4 + 1);
  ({ unsigned long ri0_ = (unsigned long)(in_fr4); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 96)); FUN_8c25cddc(((undefined1 *)(fr0_ - 0x48)),ar5,ar6,ar7); });
  if (cVar5 == '\0') {
    dVar3 = CONCAT44D(0x47800000,in_fr6);
  }
  else {
    dVar3 = 1.4411521878487204e+18;
  }
  if (cVar4 == '\0') {
    fVar2 = F32LO(dVar3) * F32HI(dVar3);
  }
  else {
    fVar2 = SUB84(dVar3 * dVar3,0);
  }
  if (cVar5 == '\0') {
    dVar3 = CONCAT44D(0x43b40000,fVar2);
  }
  else {
    dVar3 = -3.739346301775294e-250;
  }
  if (cVar4 == '\0') {
    ar7_00 = (int)(F32LO(dVar3) / F32HI(dVar3));
  }
  else {
    ar7_00 = (int)(dVar3 / dVar3);
  }
  if (cVar5 == '\0') {
    dVar3 = CONCAT44D(0x47800000,in_fr5);
  }
  else {
    dVar3 = 1.4411521878487204e+18;
  }
  if (cVar4 == '\0') {
    fVar2 = F32LO(dVar3) * F32HI(dVar3);
  }
  else {
    fVar2 = SUB84(dVar3 * dVar3,0);
  }
  if (cVar5 == '\0') {
    dVar3 = CONCAT44D(0x43b40000,fVar2);
  }
  else {
    dVar3 = -3.739346301775294e-250;
  }
  if (cVar4 == '\0') {
    ar6_01 = (int)(F32LO(dVar3) / F32HI(dVar3));
  }
  else {
    ar6_01 = (int)(dVar3 / dVar3);
  }
  if (cVar5 == '\0') {
    dVar3 = CONCAT44D(0x47800000,in_fr4);
  }
  else {
    dVar3 = 1.4411521878487204e+18;
  }
  if (cVar4 == '\0') {
    fVar2 = F32LO(dVar3) * F32HI(dVar3);
  }
  else {
    fVar2 = SUB84(dVar3 * dVar3,0);
  }
  if (cVar5 == '\0') {
    dVar3 = CONCAT44D(0x43b40000,fVar2);
  }
  else {
    dVar3 = -3.739346301775294e-250;
  }
  if (cVar4 == '\0') {
    ar5_00 = (int)(F32LO(dVar3) / F32HI(dVar3));
  }
  else {
    ar5_00 = (int)(dVar3 / dVar3);
  }
  ({ unsigned long ri0_ = (unsigned long)(in_fr4); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 96)); FUN_8c256b0c(((undefined1 *)(fr0_ - 0x48)),ar5_00,ar6_01,ar7_00); });
  ar6_00 = &(*(undefined4 *)(fr0_ - 0x60));
  ({ unsigned long ri0_ = (unsigned long)(in_fr4); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 96)); FUN_8c21279c(((undefined1 *)(fr0_ - 0x48)),&(*(undefined4 *)(fr0_ - 0x54)),ar6_00,ar7_00); });
  if (cVar5 == '\0') {
    *(undefined4 *)(unsigned)ar4 = (*(undefined4 *)(fr0_ - 0x60));
    *(undefined4 *)(unsigned)((int)ar4 + 4) = (*(undefined4 *)(fr0_ - 0x5c));
    *(undefined4 *)(unsigned)(ar4 + 1) = (*(undefined4 *)(fr0_ - 0x58));
  }
  else {
    *ar4 = CONCAT44((*(undefined4 *)(fr0_ - 0x5c)),(*(undefined4 *)(fr0_ - 0x60)));
    *(ulonglong *)(unsigned)((int)ar4 + 4) = CONCAT44((*(undefined4 *)(fr0_ - 0x58)),(*(undefined4 *)(fr0_ - 0x5c)));
    ar4[1] = CONCAT44((*(undefined4 *)(fr0_ - 0x54)),(*(undefined4 *)(fr0_ - 0x58)));
  }
  uVar1 = (vsp = ((unsigned long)(fr0_ - 96)), Vec3_ctor_copy(s0,ar4,ar6_00,ar7_00));
  return uVar1;
}

__asm__(".globl _FUN_8c023668\n.set _FUN_8c023668, _FUN_8c023668_def\n");
