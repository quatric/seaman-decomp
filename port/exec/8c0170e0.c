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
undefined4 Class_129938_m1_0170e0_def(int ar4,undefined4 ar5,undefined4 ar6,int *ar7)

{
  ring[rp++ & 255] = "Class_129938_m1_0170e0";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 172; for (int i_ = 0; i_ < 172; i_++) z_[i_] = 0; }
  undefined4 ar6_00;
  float fVar1;
  double dVar2;
  int ar7_00;
  int iVar3;
  int ar5_00;
  char cVar4;
  char cVar5;
  
  cVar5 = '\0';
  cVar4 = '\0';
  ar6_00 = ar6;
  (vsp = ((unsigned long)(fr0_ - 172)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*ar7 + 0x38))))(ar7,((undefined1 *)(fr0_ - 0x6c)),ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 172)), Vec3_assign(ar4 + 4,ar5,ar6_00,ar7));
  (vsp = ((unsigned long)(fr0_ - 172)), vec3_copy_8c023d8c(ar4 + 0x14,ar6,ar6_00,ar7));
  ({ unsigned long ri0_ = (unsigned long)(ar5); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 172)); FUN_8c25cddc(((undefined1 *)(fr0_ - 0xac)),ar6,ar6_00,ar7); });
  ({ unsigned long ri0_ = (unsigned long)(ar5); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 172)); FUN_8c25b5d0(((undefined1 *)(fr0_ - 0xac)),ar6,ar6_00,ar7); });
  if (cVar5 == '\0') {
    dVar2 = CONCAT44D(0x47800000,*(undefined4 *)(unsigned)(ar4 + 0x1c));
  }
  else {
    dVar2 = 1.4411521878487204e+18;
  }
  if (cVar4 == '\0') {
    fVar1 = F32LO(dVar2) * F32HI(dVar2);
  }
  else {
    fVar1 = SUB84(dVar2 * dVar2,0);
  }
  if (cVar5 == '\0') {
    dVar2 = CONCAT44D(0x43b40000,fVar1);
  }
  else {
    dVar2 = -3.739346301775294e-250;
  }
  if (cVar4 == '\0') {
    ar7_00 = (int)(F32LO(dVar2) / F32HI(dVar2));
  }
  else {
    ar7_00 = (int)(dVar2 / dVar2);
  }
  if (cVar5 == '\0') {
    dVar2 = CONCAT44D(0x47800000,*(undefined4 *)(unsigned)(ar4 + 0x18));
  }
  else {
    dVar2 = 1.4411521878487204e+18;
  }
  if (cVar4 == '\0') {
    fVar1 = F32LO(dVar2) * F32HI(dVar2);
  }
  else {
    fVar1 = SUB84(dVar2 * dVar2,0);
  }
  if (cVar5 == '\0') {
    dVar2 = CONCAT44D(0x43b40000,fVar1);
  }
  else {
    dVar2 = -3.739346301775294e-250;
  }
  if (cVar4 == '\0') {
    iVar3 = (int)(F32LO(dVar2) / F32HI(dVar2));
  }
  else {
    iVar3 = (int)(dVar2 / dVar2);
  }
  if (cVar5 == '\0') {
    dVar2 = CONCAT44D(0x47800000,*(undefined4 *)(unsigned)(ar4 + 0x14));
  }
  else {
    dVar2 = 1.4411521878487204e+18;
  }
  if (cVar4 == '\0') {
    fVar1 = F32LO(dVar2) * F32HI(dVar2);
  }
  else {
    fVar1 = SUB84(dVar2 * dVar2,0);
  }
  if (cVar5 == '\0') {
    dVar2 = CONCAT44D(0x43b40000,fVar1);
  }
  else {
    dVar2 = -3.739346301775294e-250;
  }
  if (cVar4 == '\0') {
    ar5_00 = (int)(F32LO(dVar2) / F32HI(dVar2));
  }
  else {
    ar5_00 = (int)(dVar2 / dVar2);
  }
  ({ unsigned long ri0_ = (unsigned long)(ar5); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 172)); FUN_8c256b0c(((undefined1 *)(fr0_ - 0xac)),ar5_00,iVar3,ar7_00); });
  for (iVar3 = 0; iVar3 < 8; iVar3 = iVar3 + 1) {
    ({ unsigned long ri0_ = (unsigned long)(ar5); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 172)); FUN_8c212740(((undefined1 *)(fr0_ - 0xac)),((undefined1 *)(fr0_ - 0x6c)) + iVar3 * 0xc,iVar3 * 0xc + ar4 + 0x30,ar7_00); });
  }
  return 8;
}

__asm__(".globl _Class_129938_m1_0170e0\n.set _Class_129938_m1_0170e0, _Class_129938_m1_0170e0_def\n");
