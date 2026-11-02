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
undefined4 FUN_8c023484_def(undefined8 *ar4,undefined4 *ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c023484";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;
  undefined4 s0 = *(undefined4 *)(vsp + 0);

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 232; for (int i_ = 0; i_ < 232; i_++) z_[i_] = 0; }
  undefined4 *ar5_00;
  undefined1 *ar6_00;
  float fVar1;
  double dVar2;
  int ar7_00;
  int ar6_01;
  int ar5_01;
  char cVar3;
  char cVar4;
  
  cVar4 = '\0';
  cVar3 = '\0';
  ar5_00 = ar5;
  (vsp = ((unsigned long)(fr0_ - 232)), Vec3_ctor_zero((fr0_ + (int)0xffffff8c),ar5,ar6,ar7));
  if (cVar4 == '\0') {
    (*(undefined4 *)(fr0_ - 0x58)) = *(undefined4 *)(unsigned)ar4;
    (*(undefined4 *)(fr0_ - 0x54)) = *(undefined4 *)(unsigned)((int)ar4 + 4);
    (*(undefined4 *)(fr0_ - 0x50)) = *(undefined4 *)(unsigned)(ar4 + 1);
  }
  else {
    (*(undefined4 *)(fr0_ - 0x58)) = (undefined4)*ar4;
    (*(undefined4 *)(fr0_ - 0x54)) = (undefined4)*(undefined8 *)(unsigned)((int)ar4 + 4);
    (*(undefined4 *)(fr0_ - 0x50)) = (undefined4)ar4[1];
    ((undefined4 *)(fr0_ - 0x4c))[0] = (undefined4)((ulonglong)ar4[1] >> 0x20);
  }
  ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x74))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 232)); FUN_8c25cddc(((undefined4 *)(fr0_ - 0x4c)),ar5_00,ar6,ar7); });
  if (cVar4 == '\0') {
    dVar2 = CONCAT44D(0x47800000,ar5[2]);
  }
  else {
    dVar2 = 1.4411521878487204e+18;
  }
  if (cVar3 == '\0') {
    fVar1 = F32LO(dVar2) * F32HI(dVar2);
  }
  else {
    fVar1 = SUB84(dVar2 * dVar2,0);
  }
  if (cVar4 == '\0') {
    dVar2 = CONCAT44D(0x43b40000,fVar1);
  }
  else {
    dVar2 = -3.739346301775294e-250;
  }
  if (cVar3 == '\0') {
    ar7_00 = (int)(F32LO(dVar2) / F32HI(dVar2));
  }
  else {
    ar7_00 = (int)(dVar2 / dVar2);
  }
  if (cVar4 == '\0') {
    dVar2 = CONCAT44D(0x47800000,ar5[1]);
  }
  else {
    dVar2 = 1.4411521878487204e+18;
  }
  if (cVar3 == '\0') {
    fVar1 = F32LO(dVar2) * F32HI(dVar2);
  }
  else {
    fVar1 = SUB84(dVar2 * dVar2,0);
  }
  if (cVar4 == '\0') {
    dVar2 = CONCAT44D(0x43b40000,fVar1);
  }
  else {
    dVar2 = -3.739346301775294e-250;
  }
  if (cVar3 == '\0') {
    ar6_01 = (int)(F32LO(dVar2) / F32HI(dVar2));
  }
  else {
    ar6_01 = (int)(dVar2 / dVar2);
  }
  if (cVar4 == '\0') {
    dVar2 = CONCAT44D(0x47800000,*ar5);
  }
  else {
    dVar2 = 1.4411521878487204e+18;
  }
  if (cVar3 == '\0') {
    fVar1 = F32LO(dVar2) * F32HI(dVar2);
  }
  else {
    fVar1 = SUB84(dVar2 * dVar2,0);
  }
  if (cVar4 == '\0') {
    dVar2 = CONCAT44D(0x43b40000,fVar1);
  }
  else {
    dVar2 = -3.739346301775294e-250;
  }
  if (cVar3 == '\0') {
    ar5_01 = (int)(F32LO(dVar2) / F32HI(dVar2));
  }
  else {
    ar5_01 = (int)(dVar2 / dVar2);
  }
  ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x74))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 232)); FUN_8c256b0c(((undefined4 *)(fr0_ - 0x4c)),ar5_01,ar6_01,ar7_00); });
  ar6_00 = ((undefined1 *)(fr0_ - 0x64));
  ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x74))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 232)); FUN_8c21279c(((undefined4 *)(fr0_ - 0x4c)),&(*(undefined4 *)(fr0_ - 0x58)),ar6_00,ar7_00); });
  (vsp = ((unsigned long)(fr0_ - 232)), Vec3_ctor_copy(s0,(fr0_ + (int)0xffffff8c),ar6_00,ar7_00));
  (vsp = ((unsigned long)(fr0_ - 232)), Vec3_dtor((fr0_ + (int)0xffffff8c),0xffffffff,ar6_00,ar7_00));
  return 0;
}

__asm__(".globl _FUN_8c023484\n.set _FUN_8c023484, _FUN_8c023484_def\n");
