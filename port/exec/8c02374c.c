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
undefined4 FUN_8c02374c_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c02374c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 132; for (int i_ = 0; i_ < 132; i_++) z_[i_] = 0; }
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 ar7_00;
  float fVar3;
  undefined4 uVar4;
  double in_dr0 = 0;
  ulonglong uVar5;
  double dVar6;
  float fVar7;
  undefined4 in_fr4 = 0;
  undefined4 in_fr15 = 0;
  double dVar8;
  int iVar9;
  int ar5_00;
  char cVar10;
  char cVar11;
  
  cVar11 = '\0';
  cVar10 = '\0';
  (vsp = ((unsigned long)(fr0_ - 132)), FUN_8c0231c8(ar4,ar5,ar6,ar7));
  uVar4 = (undefined4)((ulonglong)in_dr0 >> 0x20);
  if (cVar11 == '\0') {
    in_fr15 = uVar4;
    uVar4 = ((undefined4 *)(fr0_ - 0x78))[0];
  }
  ((undefined4 *)(fr0_ - 0x78))[0] = uVar4;
  (vsp = ((unsigned long)(fr0_ - 132)), FUN_8c02327c(ar4,ar5,ar6,ar7));
  (*(undefined4 *)(fr0_ - 0x80)) = SUB84(in_dr0,0);
  (*(undefined4 *)(fr0_ - 0x5c)) = (*(undefined4 *)(fr0_ - 0x80));
  dVar8 = in_dr0;
  if (cVar11 == '\0') {
    (*(undefined4 *)(fr0_ - 0x5c)) = 0;
    dVar8 = CONCAT44D((int)((ulonglong)in_dr0 >> 0x20),in_fr15);
  }
  uVar5 = (ulonglong)in_dr0 & 0xffffffff;
  if (cVar11 == '\0') {
    (*(undefined4 *)(fr0_ - 0x58)) = 0;
  }
  else {
    (*(undefined4 *)(fr0_ - 0x54)) = 0;
    (*(undefined4 *)(fr0_ - 0x58)) = (*(undefined4 *)(fr0_ - 0x80));
  }
  (vsp = ((unsigned long)(fr0_ - 132)), Vec3_length_sq(ar4,ar5,ar6,ar7));
  uVar4 = (undefined4)(uVar5 >> 0x20);
  (*(undefined4 *)(fr0_ - 0x54)) = uVar4;
  if (cVar11 != '\0') {
    (*(undefined4 *)(fr0_ - 0x54)) = (undefined4)uVar5;
    ((undefined4 *)(fr0_ - 0x50))[0] = uVar4;
  }
  ({ unsigned long ri0_ = (unsigned long)(in_fr4); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 132)); FUN_8c25cddc(((undefined4 *)(fr0_ - 0x50)),ar5,ar6,ar7); });
  if (cVar11 == '\0') {
    dVar6 = CONCAT44D(0x47800000,in_fr4);
  }
  else {
    dVar6 = 1.4411521878487204e+18;
  }
  if (cVar10 == '\0') {
    fVar3 = F32LO(dVar6) * F32HI(dVar6);
  }
  else {
    fVar3 = SUB84(dVar6 * dVar6,0);
  }
  if (cVar11 == '\0') {
    dVar6 = CONCAT44D(0x43b40000,fVar3);
  }
  else {
    dVar6 = -3.7389520302648205e-250;
  }
  if (cVar10 == '\0') {
    fVar7 = F32HI(dVar6);
    fVar3 = F32LO(dVar6) / fVar7;
    dVar6 = CONCAT44D(fVar7,fVar3);
    iVar9 = (int)fVar3;
  }
  else {
    dVar6 = dVar6 / dVar6;
    iVar9 = (int)dVar6;
  }
  uVar4 = SUB84(dVar6,0);
  ({ unsigned long ri0_ = (unsigned long)(in_fr4); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 132)); FUN_8c256a78(((undefined4 *)(fr0_ - 0x50)),iVar9,ar6,ar7); });
  puVar2 = &(*(undefined4 *)(fr0_ - 0x68));
  puVar1 = &(*(undefined4 *)(fr0_ - 0x5c));
  ({ unsigned long ri0_ = (unsigned long)(in_fr4); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 132)); FUN_8c21279c(((undefined4 *)(fr0_ - 0x50)),puVar1,puVar2,ar7); });
  (*(undefined4 *)(fr0_ - 0x5c)) = (*(undefined4 *)(fr0_ - 0x68));
  (*(undefined4 *)(fr0_ - 0x58)) = (*(undefined4 *)(fr0_ - 0x64));
  (*(undefined4 *)(fr0_ - 0x54)) = (*(undefined4 *)(fr0_ - 0x60));
  ({ unsigned long ri0_ = (unsigned long)(in_fr4); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 132)); FUN_8c25cddc(((undefined4 *)(fr0_ - 0x50)),puVar1,puVar2,ar7); });
  ar7_00 = 0;
  if (cVar11 == '\0') {
    dVar6 = CONCAT44D(0x47800000,uVar4);
  }
  else {
    dVar6 = 1.4411521878487204e+18;
  }
  if (cVar10 == '\0') {
    dVar8 = CONCAT44D(F32HI(dVar8) * F32HI(dVar6),
                             SUB84(dVar8,0));
  }
  else {
    dVar8 = dVar8 * dVar6;
  }
  if (cVar11 == '\0') {
    dVar6 = CONCAT44D(0x43b40000,SUB84(dVar6,0));
  }
  else {
    dVar6 = -3.7389520302648205e-250;
  }
  if (cVar10 == '\0') {
    fVar3 = F32HI(dVar8) / F32HI(dVar6);
    dVar8 = CONCAT44D(fVar3,SUB84(dVar8,0));
    iVar9 = (int)fVar3;
  }
  else {
    dVar8 = dVar8 / dVar6;
    fVar3 = F32HI(dVar8);
    iVar9 = (int)dVar8;
  }
  if (cVar11 == '\0') {
    dVar6 = CONCAT44D(0x47800000,SUB84(dVar6,0));
  }
  else {
    dVar6 = 1.4411521878487204e+18;
  }
  if (cVar10 == '\0') {
    dVar8 = CONCAT44D(fVar3,F32LO(dVar8) * F32HI(dVar6));
  }
  else {
    dVar8 = dVar8 * dVar6;
  }
  if (cVar11 == '\0') {
    dVar6 = CONCAT44D(0x43b40000,SUB84(dVar6,0));
  }
  else {
    dVar6 = -3.7389520302648205e-250;
  }
  if (cVar10 == '\0') {
    ar5_00 = (int)(F32LO(dVar8) / F32HI(dVar6));
  }
  else {
    ar5_00 = (int)(dVar8 / dVar6);
  }
  ({ unsigned long ri0_ = (unsigned long)(in_fr4); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 132)); FUN_8c256b0c(((undefined4 *)(fr0_ - 0x50)),ar5_00,iVar9,0); });
  puVar2 = &(*(undefined4 *)(fr0_ - 0x68));
  puVar1 = &(*(undefined4 *)(fr0_ - 0x5c));
  ({ unsigned long ri0_ = (unsigned long)(in_fr4); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 132)); FUN_8c21279c(((undefined4 *)(fr0_ - 0x50)),puVar1,puVar2,ar7_00); });
  (vsp = ((unsigned long)(fr0_ - 132)), Vec3_ctor_zero(((undefined4 *)(fr0_ - 0x78)),puVar1,puVar2,ar7_00));
  if (cVar11 != '\0') {
    (*(undefined4 *)(fr0_ - 0x6c)) = (*(undefined4 *)(fr0_ - 0x5c));
  }
  (vsp = ((unsigned long)(fr0_ - 132)), Vec3_ctor_copy((*(undefined4 *)(fr0_ + 0x00000000)),((undefined4 *)(fr0_ - 0x78)),puVar2,ar7_00));
  (vsp = ((unsigned long)(fr0_ - 132)), Vec3_dtor(((undefined4 *)(fr0_ - 0x78)),0xffffffff,puVar2,ar7_00));
  return 0;
}

__asm__(".globl _FUN_8c02374c\n.set _FUN_8c02374c, _FUN_8c02374c_def\n");
