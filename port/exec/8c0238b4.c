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
undefined4 FUN_8c0238b4_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0238b4";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 128; for (int i_ = 0; i_ < 128; i_++) z_[i_] = 0; }
  undefined4 *ar5_00;
  undefined1 *ar6_00;
  float fVar1;
  undefined8 in_dr0 = 0;
  undefined4 uVar3;
  undefined4 uVar4;
  double dVar2;
  undefined4 in_fr4 = 0;
  int ar7_00;
  int ar6_01;
  int iVar5;
  char cVar6;
  char cVar7;
  
  cVar7 = '\0';
  cVar6 = '\0';
  (vsp = ((unsigned long)(fr0_ - 128)), Vec3_set_zero(&(*(undefined4 *)(fr0_ - 0x14)),ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 128)), FUN_8c0231c8(ar4,ar5,ar6,ar7));
  (*(undefined4 *)(fr0_ - 0x14)) = (undefined4)in_dr0;
  uVar3 = (undefined4)((ulonglong)in_dr0 >> 0x20);
  uVar4 = uVar3;
  if (cVar7 == '\0') {
    uVar4 = ((undefined4 *)(fr0_ - 0x7c))[0];
    (*(undefined4 *)(fr0_ - 0x14)) = uVar3;
    uVar3 = (*(undefined4 *)(fr0_ - 0x10));
  }
  (*(undefined4 *)(fr0_ - 0x10)) = uVar3;
  ((undefined4 *)(fr0_ - 0x7c))[0] = uVar4;
  (vsp = ((unsigned long)(fr0_ - 128)), FUN_8c02327c(ar4,ar5,ar6,ar7));
  uVar4 = (undefined4)((ulonglong)in_dr0 >> 0x20);
  (*(undefined4 *)(fr0_ - 0x10)) = (undefined4)in_dr0;
  if (cVar7 == '\0') {
    (*(undefined4 *)(fr0_ - 0x60)) = 0;
    (*(undefined4 *)(fr0_ - 0x58)) = 0x3f800000;
    (*(undefined4 *)(fr0_ - 0x10)) = uVar4;
  }
  else {
    ((undefined4 *)(fr0_ - 0x54))[0] = 0x3f800000;
    (*(undefined4 *)(fr0_ - 0x58)) = (*(undefined4 *)(fr0_ - 0x10));
    (*(undefined4 *)(fr0_ - 0x60)) = (*(undefined4 *)(fr0_ - 0x10));
    (*(undefined4 *)(fr0_ - 0xc)) = uVar4;
  }
  (*(undefined4 *)(fr0_ - 0x5c)) = (*(undefined4 *)(fr0_ - 0x60));
  ({ unsigned long ri0_ = (unsigned long)(in_fr4); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 128)); FUN_8c25cddc(((undefined4 *)(fr0_ - 0x54)),ar5,ar6,ar7); });
  if (cVar7 == '\0') {
    dVar2 = CONCAT44D(0x47800000,(*(undefined4 *)(fr0_ - 0xc)));
  }
  else {
    dVar2 = 1.4411521878487204e+18;
  }
  if (cVar6 == '\0') {
    fVar1 = F32LO(dVar2) * F32HI(dVar2);
  }
  else {
    fVar1 = SUB84(dVar2 * dVar2,0);
  }
  if (cVar7 == '\0') {
    dVar2 = CONCAT44D(0x43b40000,fVar1);
  }
  else {
    dVar2 = -3.739346301775294e-250;
  }
  if (cVar6 == '\0') {
    ar7_00 = (int)(F32LO(dVar2) / F32HI(dVar2));
  }
  else {
    ar7_00 = (int)(dVar2 / dVar2);
  }
  if (cVar7 == '\0') {
    dVar2 = CONCAT44D(0x47800000,(*(undefined4 *)(fr0_ - 0x10)));
  }
  else {
    dVar2 = 1.4411521878487204e+18;
  }
  if (cVar6 == '\0') {
    fVar1 = F32LO(dVar2) * F32HI(dVar2);
  }
  else {
    fVar1 = SUB84(dVar2 * dVar2,0);
  }
  if (cVar7 == '\0') {
    dVar2 = CONCAT44D(0x43b40000,fVar1);
  }
  else {
    dVar2 = -3.739346301775294e-250;
  }
  if (cVar6 == '\0') {
    ar6_01 = (int)(F32LO(dVar2) / F32HI(dVar2));
  }
  else {
    ar6_01 = (int)(dVar2 / dVar2);
  }
  if (cVar7 == '\0') {
    dVar2 = CONCAT44D(0x47800000,(*(undefined4 *)(fr0_ - 0x14)));
  }
  else {
    dVar2 = 1.4411521878487204e+18;
  }
  if (cVar6 == '\0') {
    fVar1 = F32LO(dVar2) * F32HI(dVar2);
  }
  else {
    fVar1 = SUB84(dVar2 * dVar2,0);
  }
  if (cVar7 == '\0') {
    dVar2 = CONCAT44D(0x43b40000,fVar1);
  }
  else {
    dVar2 = -3.739346301775294e-250;
  }
  if (cVar6 == '\0') {
    iVar5 = (int)(F32LO(dVar2) / F32HI(dVar2));
  }
  else {
    iVar5 = (int)(dVar2 / dVar2);
  }
  ({ unsigned long ri0_ = (unsigned long)(in_fr4); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 128)); FUN_8c256b0c(((undefined4 *)(fr0_ - 0x54)),iVar5,ar6_01,ar7_00); });
  if (cVar7 == '\0') {
    dVar2 = CONCAT44D(0x47800000,in_fr4);
  }
  else {
    dVar2 = 1.4411521878487204e+18;
  }
  if (cVar6 == '\0') {
    fVar1 = F32LO(dVar2) * F32HI(dVar2);
  }
  else {
    fVar1 = SUB84(dVar2 * dVar2,0);
  }
  if (cVar7 == '\0') {
    dVar2 = CONCAT44D(0x43b40000,fVar1);
  }
  else {
    dVar2 = -3.739346301775294e-250;
  }
  if (cVar6 == '\0') {
    iVar5 = (int)(F32LO(dVar2) / F32HI(dVar2));
  }
  else {
    iVar5 = (int)(dVar2 / dVar2);
  }
  ({ unsigned long ri0_ = (unsigned long)(in_fr4); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 128)); FUN_8c256ce0(((undefined4 *)(fr0_ - 0x54)),iVar5,ar6_01,ar7_00); });
  ar6_00 = ((undefined1 *)(fr0_ - 0x6c));
  ar5_00 = &(*(undefined4 *)(fr0_ - 0x60));
  ({ unsigned long ri0_ = (unsigned long)(in_fr4); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 128)); FUN_8c21279c(((undefined4 *)(fr0_ - 0x54)),ar5_00,ar6_00,ar7_00); });
  (vsp = ((unsigned long)(fr0_ - 128)), Vec3_ctor_zero(((undefined4 *)(fr0_ - 0x7c)),ar5_00,ar6_00,ar7_00));
  if (cVar7 != '\0') {
    (*(undefined4 *)(fr0_ - 0x70)) = (*(undefined4 *)(fr0_ - 0x60));
  }
  (vsp = ((unsigned long)(fr0_ - 128)), Vec3_ctor_copy((*(undefined4 *)(fr0_ + 0x00000000)),((undefined4 *)(fr0_ - 0x7c)),ar6_00,ar7_00));
  (vsp = ((unsigned long)(fr0_ - 128)), Vec3_dtor(((undefined4 *)(fr0_ - 0x7c)),0xffffffff,ar6_00,ar7_00));
  (vsp = ((unsigned long)(fr0_ - 128)), object_dtor_delete(&(*(undefined4 *)(fr0_ - 0x14)),0xffffffff,ar6_00,ar7_00));
  return 0;
}

__asm__(".globl _FUN_8c0238b4\n.set _FUN_8c0238b4, _FUN_8c0238b4_def\n");
