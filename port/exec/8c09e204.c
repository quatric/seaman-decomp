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
undefined4 FUN_8c09e204_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c09e204";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 40; for (int i_ = 0; i_ < 40; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  int iVar2;
  float fVar3;
  double dVar4;
  int ar6_00;
  int ar5_00;
  char cVar5;
  char cVar6;
  
  cVar6 = '\0';
  cVar5 = '\0';
  iVar2 = ar4 + 0x5c;
  (vsp = ((unsigned long)(fr0_ - 40)), FUN_8c023e24((fr0_ + (int)0xffffffec),iVar2,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 40)), FUN_8c08a9b8(ar4 + 0x5c,iVar2,ar6,ar7));
  ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x14))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 40)); FUN_8c256328(0,iVar2,ar6,ar7); });
  if (cVar6 == '\0') {
    dVar4 = CONCAT44D(0x47800000,*(undefined4 *)(unsigned)(ar4 + 0x58));
  }
  else {
    dVar4 = 1.4411521878487204e+18;
  }
  if (cVar5 == '\0') {
    fVar3 = F32LO(dVar4) * F32HI(dVar4);
  }
  else {
    fVar3 = SUB84(dVar4 * dVar4,0);
  }
  if (cVar6 == '\0') {
    dVar4 = CONCAT44D(0x43b40000,fVar3);
  }
  else {
    dVar4 = -3.739346301775294e-250;
  }
  if (cVar5 == '\0') {
    iVar2 = (int)(F32LO(dVar4) / F32HI(dVar4));
  }
  else {
    iVar2 = (int)(dVar4 / dVar4);
  }
  if (cVar6 == '\0') {
    dVar4 = CONCAT44D(0x47800000,*(undefined4 *)(unsigned)(ar4 + 0x54));
  }
  else {
    dVar4 = 1.4411521878487204e+18;
  }
  if (cVar5 == '\0') {
    fVar3 = F32LO(dVar4) * F32HI(dVar4);
  }
  else {
    fVar3 = SUB84(dVar4 * dVar4,0);
  }
  if (cVar6 == '\0') {
    dVar4 = CONCAT44D(0x43b40000,fVar3);
  }
  else {
    dVar4 = -3.739346301775294e-250;
  }
  if (cVar5 == '\0') {
    ar6_00 = (int)(F32LO(dVar4) / F32HI(dVar4));
  }
  else {
    ar6_00 = (int)(dVar4 / dVar4);
  }
  if (cVar6 == '\0') {
    dVar4 = CONCAT44D(0x47800000,*(undefined4 *)(unsigned)(ar4 + 0x50));
  }
  else {
    dVar4 = 1.4411521878487204e+18;
  }
  if (cVar5 == '\0') {
    fVar3 = F32LO(dVar4) * F32HI(dVar4);
  }
  else {
    fVar3 = SUB84(dVar4 * dVar4,0);
  }
  if (cVar6 == '\0') {
    dVar4 = CONCAT44D(0x43b40000,fVar3);
  }
  else {
    dVar4 = -3.739346301775294e-250;
  }
  if (cVar5 == '\0') {
    ar5_00 = (int)(F32LO(dVar4) / F32HI(dVar4));
  }
  else {
    ar5_00 = (int)(dVar4 / dVar4);
  }
  ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x14))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 40)); FUN_8c256b0c(0,ar5_00,ar6_00,iVar2); });
  ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x14))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 40)); FUN_8c256fec(0,ar5_00,ar6_00,iVar2); });
  (vsp = ((unsigned long)(fr0_ - 40)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(ar4 + 8) + 0x3c))))(ar4,ar5_00,ar6_00,iVar2));
  (vsp = ((unsigned long)(fr0_ - 40)), FUN_8c256210(1,ar5_00,ar6_00,iVar2));
  (vsp = ((unsigned long)(fr0_ - 40)), FUN_8c023e04(ar4 + 0x5c,(fr0_ + (int)0xffffffec),ar6_00,iVar2));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 40)), free_if_nonnull_wrap_016ac4((fr0_ + (int)0xffffffec),0xffffffff,ar6_00,iVar2));
  return uVar1;
}

__asm__(".globl _FUN_8c09e204\n.set _FUN_8c09e204, _FUN_8c09e204_def\n");
