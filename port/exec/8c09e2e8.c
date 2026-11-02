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
int FUN_8c09e2e8_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c09e2e8";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 72; for (int i_ = 0; i_ < 72; i_++) z_[i_] = 0; }
  int *piVar1;
  int iVar2;
  undefined4 ar5_00;
  undefined4 uVar3;
  undefined4 uVar4;
  float fVar5;
  double dVar6;
  float fVar7;
  int iVar8;
  int ar6_00;
  int ar5_01;
  char cVar9;
  char cVar10;
  
  cVar10 = '\0';
  cVar9 = '\0';
  (*(undefined4 *)(unsigned)(unsigned)0x8c284fb8) = (vsp = ((unsigned long)(fr0_ - 72)), get_field_24c_09e1f8(ar4 + 0xcc4,ar5,ar6,ar7));
  piVar1 = (int *)(unsigned)(vsp = ((unsigned long)(fr0_ - 72)), get_field_4_0253e4(*(int *)(unsigned)(ar4 + 0x328) + 0x78,ar5,ar6,ar7));
  uVar4 = *(undefined4 *)(unsigned)(*piVar1 + 8);
  *(undefined4 *)(unsigned)(*piVar1 + 8) = *(undefined4 *)(unsigned)((*(undefined4 *)(unsigned)(unsigned)0x8c284fb8) * 0xc + *piVar1 + 8);
  *(undefined4 *)(unsigned)((*(undefined4 *)(unsigned)(unsigned)0x8c284fb8) * 0xc + *piVar1 + 8) = uVar4;
  (vsp = ((unsigned long)(fr0_ - 72)), FUN_8c01538c(*(int *)(unsigned)(ar4 + 0x328) + 0x78,ar5,ar6,ar7));
  ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x48))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 72)); FUN_8c256328(0,ar5,ar6,ar7); });
  ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x48))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 72)); FUN_8c25b5d0(0,ar5,ar6,ar7); });
  if (cVar10 == '\0') {
    dVar6 = CONCAT44D(0x47800000,*(undefined4 *)(unsigned)(ar4 + 0x58));
  }
  else {
    dVar6 = 1.4411521878487204e+18;
  }
  if (cVar9 == '\0') {
    fVar5 = F32LO(dVar6) * F32HI(dVar6);
  }
  else {
    fVar5 = SUB84(dVar6 * dVar6,0);
  }
  if (cVar10 == '\0') {
    dVar6 = CONCAT44D(0x43b40000,fVar5);
  }
  else {
    dVar6 = -3.739346301775294e-250;
  }
  if (cVar9 == '\0') {
    iVar8 = (int)(F32LO(dVar6) / F32HI(dVar6));
  }
  else {
    iVar8 = (int)(dVar6 / dVar6);
  }
  if (cVar10 == '\0') {
    dVar6 = CONCAT44D(0x47800000,*(undefined4 *)(unsigned)(ar4 + 0x54));
  }
  else {
    dVar6 = 1.4411521878487204e+18;
  }
  if (cVar9 == '\0') {
    fVar5 = F32LO(dVar6) * F32HI(dVar6);
  }
  else {
    fVar5 = SUB84(dVar6 * dVar6,0);
  }
  if (cVar10 == '\0') {
    dVar6 = CONCAT44D(0x43b40000,fVar5);
  }
  else {
    dVar6 = -3.739346301775294e-250;
  }
  if (cVar9 == '\0') {
    ar6_00 = (int)(F32LO(dVar6) / F32HI(dVar6));
  }
  else {
    ar6_00 = (int)(dVar6 / dVar6);
  }
  if (cVar10 == '\0') {
    dVar6 = CONCAT44D(0x47800000,*(undefined4 *)(unsigned)(ar4 + 0x50));
  }
  else {
    dVar6 = 1.4411521878487204e+18;
  }
  if (cVar9 == '\0') {
    fVar5 = F32LO(dVar6) * F32HI(dVar6);
  }
  else {
    fVar5 = SUB84(dVar6 * dVar6,0);
  }
  if (cVar10 == '\0') {
    dVar6 = CONCAT44D(0x43b40000,fVar5);
  }
  else {
    dVar6 = -3.739346301775294e-250;
  }
  if (cVar9 == '\0') {
    fVar7 = F32HI(dVar6);
    fVar5 = F32LO(dVar6) / fVar7;
    dVar6 = CONCAT44D(fVar7,fVar5);
    ar5_01 = (int)fVar5;
  }
  else {
    dVar6 = dVar6 / dVar6;
    ar5_01 = (int)dVar6;
  }
  (*(undefined4 *)(fr0_ - 0x2c)) = (undefined4)(D2U(dVar6) >> 0x20);
  ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x48))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 72)); FUN_8c256b0c(0,ar5_01,ar6_00,iVar8); });
  ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x48))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 72)); FUN_8c256fec(0,ar5_01,ar6_00,iVar8); });
  uVar4 = (vsp = ((unsigned long)(fr0_ - 72)), FUN_8c015bb8(*(int *)(unsigned)(ar4 + 0x328) + 0x70,ar5_01,ar6_00,iVar8));
  iVar2 = (vsp = ((unsigned long)(fr0_ - 72)), FUN_8c026db0(*(undefined4 *)(unsigned)(ar4 + 0x30c),ar5_01,ar6_00,iVar8));
  ar5_00 = (vsp = ((unsigned long)(fr0_ - 72)), deref_u32(*(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0x328) + 0xa0) + iVar2 * 4,ar5_01,ar6_00,iVar8));
  iVar2 = (vsp = ((unsigned long)(fr0_ - 72)), FUN_8c026db0(*(undefined4 *)(unsigned)(ar4 + 0x30c),ar5_01,ar6_00,iVar8));
  uVar3 = (vsp = ((unsigned long)(fr0_ - 72)), FUN_8c026d74(*(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0x328) + 0xa8) + iVar2 * 4,ar5_01,ar6_00,iVar8));
  (vsp = ((unsigned long)(fr0_ - 72)), FUN_8c026d7c(*(undefined4 *)(unsigned)(ar4 + 0x30c),ar5_01,ar6_00,iVar8));
  if (cVar10 == '\0') {
    (*(undefined4 *)(fr0_ - 0x2c)) = uVar3;
  }
  ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x48))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 72)); FUN_8c21bbb0(uVar4,ar5_00,(*(undefined4 *)(fr0_ - 0x2c)),iVar8); });
  (vsp = ((unsigned long)(fr0_ - 72)), FUN_8c256210(1,ar5_00,(*(undefined4 *)(fr0_ - 0x2c)),iVar8));
  uVar4 = *(undefined4 *)(unsigned)((*(undefined4 *)(unsigned)(unsigned)0x8c284fb8) * 0xc + *piVar1 + 8);
  *(undefined4 *)(unsigned)((*(undefined4 *)(unsigned)(unsigned)0x8c284fb8) * 0xc + *piVar1 + 8) = *(undefined4 *)(unsigned)(*piVar1 + 8);
  iVar8 = *piVar1;
  *(undefined4 *)(unsigned)(iVar8 + 8) = uVar4;
  return iVar8;
}

__asm__(".globl _FUN_8c09e2e8\n.set _FUN_8c09e2e8, _FUN_8c09e2e8_def\n");
