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
undefined4 FUN_8c0add00_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0add00";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 44; for (int i_ = 0; i_ < 44; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  int iVar2;
  undefined4 ar5_00;
  undefined4 uVar3;
  int iVar4;
  float fVar5;
  double dVar6;
  float fVar7;
  int ar7_00;
  int ar6_00;
  int ar5_01;
  char cVar8;
  char cVar9;
  
  cVar9 = '\0';
  cVar8 = '\0';
  iVar4 = *(int *)(unsigned)(ar4 + 0x328);
  (vsp = ((unsigned long)(fr0_ - 44)), FUN_8c01538c(iVar4 + 0x78,ar5,ar6,ar7));
  ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x2c))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 44)); FUN_8c256328(0,ar5,ar6,ar7); });
  if (cVar9 == '\0') {
    dVar6 = CONCAT44D(0x47800000,*(undefined4 *)(unsigned)(ar4 + 0x58));
  }
  else {
    dVar6 = 1.4411521878487204e+18;
  }
  if (cVar8 == '\0') {
    fVar5 = F32LO(dVar6) * F32HI(dVar6);
  }
  else {
    fVar5 = SUB84(dVar6 * dVar6,0);
  }
  if (cVar9 == '\0') {
    dVar6 = CONCAT44D(0x43b40000,fVar5);
  }
  else {
    dVar6 = 21990236992512.0;
  }
  if (cVar8 == '\0') {
    ar7_00 = (int)(F32LO(dVar6) / F32HI(dVar6));
  }
  else {
    ar7_00 = (int)(dVar6 / dVar6);
  }
  if (cVar9 == '\0') {
    dVar6 = CONCAT44D(0x47800000,*(undefined4 *)(unsigned)(ar4 + 0x54));
  }
  else {
    dVar6 = 1.4411521878487204e+18;
  }
  if (cVar8 == '\0') {
    fVar5 = F32LO(dVar6) * F32HI(dVar6);
  }
  else {
    fVar5 = SUB84(dVar6 * dVar6,0);
  }
  if (cVar9 == '\0') {
    dVar6 = CONCAT44D(0x43b40000,fVar5);
  }
  else {
    dVar6 = 21990236992512.0;
  }
  if (cVar8 == '\0') {
    ar6_00 = (int)(F32LO(dVar6) / F32HI(dVar6));
  }
  else {
    ar6_00 = (int)(dVar6 / dVar6);
  }
  if (cVar9 == '\0') {
    dVar6 = CONCAT44D(0x42b40000,*(undefined4 *)(unsigned)(ar4 + 0x50));
  }
  else {
    dVar6 = -3.739346291369057e-250;
  }
  if (cVar8 == '\0') {
    fVar5 = F32LO(dVar6) + F32HI(dVar6);
  }
  else {
    fVar5 = SUB84(dVar6 + dVar6,0);
  }
  if (cVar9 == '\0') {
    dVar6 = CONCAT44D(0x47800000,fVar5);
  }
  else {
    dVar6 = 1.4411521878487204e+18;
  }
  if (cVar8 == '\0') {
    fVar5 = F32LO(dVar6) * F32HI(dVar6);
  }
  else {
    fVar5 = SUB84(dVar6 * dVar6,0);
  }
  if (cVar9 == '\0') {
    dVar6 = CONCAT44D(0x43b40000,fVar5);
  }
  else {
    dVar6 = 21990236992512.0;
  }
  if (cVar8 == '\0') {
    fVar7 = F32HI(dVar6);
    fVar5 = F32LO(dVar6) / fVar7;
    dVar6 = CONCAT44D(fVar7,fVar5);
    ar5_01 = (int)fVar5;
  }
  else {
    dVar6 = dVar6 / dVar6;
    ar5_01 = (int)dVar6;
  }
  (*(undefined4 *)(fr0_ - 0x20)) = (undefined4)(D2U(dVar6) >> 0x20);
  ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x2c))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 44)); FUN_8c256b0c(0,ar5_01,ar6_00,ar7_00); });
  uVar1 = (vsp = ((unsigned long)(fr0_ - 44)), FUN_8c015bb8(iVar4 + 0x70,ar5_01,ar6_00,ar7_00));
  iVar2 = (vsp = ((unsigned long)(fr0_ - 44)), FUN_8c026db0(*(undefined4 *)(unsigned)(ar4 + 0x30c),ar5_01,ar6_00,ar7_00));
  ar5_00 = (vsp = ((unsigned long)(fr0_ - 44)), deref_u32(*(int *)(unsigned)(iVar4 + 0xa0) + iVar2 * 4,ar5_01,ar6_00,ar7_00));
  iVar2 = (vsp = ((unsigned long)(fr0_ - 44)), FUN_8c026db0(*(undefined4 *)(unsigned)(ar4 + 0x30c),ar5_01,ar6_00,ar7_00));
  uVar3 = (vsp = ((unsigned long)(fr0_ - 44)), FUN_8c026d74(*(int *)(unsigned)(iVar4 + 0xa8) + iVar2 * 4,ar5_01,ar6_00,ar7_00));
  (vsp = ((unsigned long)(fr0_ - 44)), FUN_8c026d7c(*(undefined4 *)(unsigned)(ar4 + 0x30c),ar5_01,ar6_00,ar7_00));
  if (cVar9 == '\0') {
    (*(undefined4 *)(fr0_ - 0x20)) = uVar3;
  }
  ({ unsigned long ri0_ = (unsigned long)(iVar2); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 44)); FUN_8c21bbb0(uVar1,ar5_00,(*(undefined4 *)(fr0_ - 0x20)),ar7_00); });
  if ((*(int *)(unsigned)(ar4 + 0x88c) != 0) && (*(int *)(unsigned)(ar4 + 0x890) != 0)) {
    (vsp = ((unsigned long)(fr0_ - 44)), FUN_8c25b3ec(*(undefined4 *)(unsigned)(ar4 + 0x890),ar5_00,(*(undefined4 *)(fr0_ - 0x20)),ar7_00));
    ({ unsigned long ri0_ = (unsigned long)(iVar2); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 44)); FUN_8c25b5d0(0,ar5_00,(*(undefined4 *)(fr0_ - 0x20)),ar7_00); });
    (vsp = ((unsigned long)(fr0_ - 44)), FUN_8c219a9a(*(undefined4 *)(unsigned)(ar4 + 0x88c),ar5_00,(*(undefined4 *)(fr0_ - 0x20)),ar7_00));
  }
  uVar1 = (vsp = ((unsigned long)(fr0_ - 44)), FUN_8c256210(1,ar5_00,(*(undefined4 *)(fr0_ - 0x20)),ar7_00));
  return uVar1;
}

__asm__(".globl _FUN_8c0add00\n.set _FUN_8c0add00, _FUN_8c0add00_def\n");
