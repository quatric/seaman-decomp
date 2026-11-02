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
int FUN_8c09dec8_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c09dec8";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 116; for (int i_ = 0; i_ < 116; i_++) z_[i_] = 0; }
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  float fVar7;
  double dVar8;
  float fVar9;
  int iVar10;
  int ar5_00;
  char cVar11;
  char cVar12;
  
  cVar12 = '\0';
  cVar11 = '\0';
  iVar1 = (vsp = ((unsigned long)(fr0_ - 116)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(ar4 + 8) + 0xb4))))(ar4,ar5,ar6,ar7));
  if (iVar1 == 0) {
    (vsp = ((unsigned long)(fr0_ - 116)), FUN_8c233dac(ar4 + 0x438,ar5,ar6,ar7));
  }
  (*(undefined4 *)(unsigned)(unsigned)0x8c284fb4) = (vsp = ((unsigned long)(fr0_ - 116)), get_field_24c_09e1f8(ar4 + 0xcc4,ar5,ar6,ar7));
  piVar2 = (int *)(unsigned)(vsp = ((unsigned long)(fr0_ - 116)), get_field_4_0253e4(*(int *)(unsigned)(ar4 + 0x328) + 0x78,ar5,ar6,ar7));
  uVar6 = *(undefined4 *)(unsigned)(*piVar2 + 8);
  *(undefined4 *)(unsigned)(*piVar2 + 8) = *(undefined4 *)(unsigned)((*(undefined4 *)(unsigned)(unsigned)0x8c284fb4) * 0xc + *piVar2 + 8);
  *(undefined4 *)(unsigned)((*(undefined4 *)(unsigned)(unsigned)0x8c284fb4) * 0xc + *piVar2 + 8) = uVar6;
  (vsp = ((unsigned long)(fr0_ - 116)), FUN_8c01538c(*(int *)(unsigned)(ar4 + 0x328) + 0x78,ar5,ar6,ar7));
  ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x74))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 116)); FUN_8c256328(0,ar5,ar6,ar7); });
  ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x74))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 116)); FUN_8c25b5d0(0,ar5,ar6,ar7); });
  if (cVar12 == '\0') {
    dVar8 = CONCAT44D(0x47800000,*(undefined4 *)(unsigned)(ar4 + 0x58));
  }
  else {
    dVar8 = 1.4411521878487204e+18;
  }
  if (cVar11 == '\0') {
    fVar7 = F32LO(dVar8) * F32HI(dVar8);
  }
  else {
    fVar7 = SUB84(dVar8 * dVar8,0);
  }
  if (cVar12 == '\0') {
    dVar8 = CONCAT44D(0x43b40000,fVar7);
  }
  else {
    dVar8 = -3.739346301775294e-250;
  }
  if (cVar11 == '\0') {
    iVar1 = (int)(F32LO(dVar8) / F32HI(dVar8));
  }
  else {
    iVar1 = (int)(dVar8 / dVar8);
  }
  if (cVar12 == '\0') {
    dVar8 = CONCAT44D(0x47800000,*(undefined4 *)(unsigned)(ar4 + 0x54));
  }
  else {
    dVar8 = 1.4411521878487204e+18;
  }
  if (cVar11 == '\0') {
    fVar7 = F32LO(dVar8) * F32HI(dVar8);
  }
  else {
    fVar7 = SUB84(dVar8 * dVar8,0);
  }
  if (cVar12 == '\0') {
    dVar8 = CONCAT44D(0x43b40000,fVar7);
  }
  else {
    dVar8 = -3.739346301775294e-250;
  }
  if (cVar11 == '\0') {
    iVar10 = (int)(F32LO(dVar8) / F32HI(dVar8));
  }
  else {
    iVar10 = (int)(dVar8 / dVar8);
  }
  if (cVar12 == '\0') {
    dVar8 = CONCAT44D(0x47800000,*(undefined4 *)(unsigned)(ar4 + 0x50));
  }
  else {
    dVar8 = 1.4411521878487204e+18;
  }
  if (cVar11 == '\0') {
    fVar7 = F32LO(dVar8) * F32HI(dVar8);
  }
  else {
    fVar7 = SUB84(dVar8 * dVar8,0);
  }
  if (cVar12 == '\0') {
    dVar8 = CONCAT44D(0x43b40000,fVar7);
  }
  else {
    dVar8 = -3.739346301775294e-250;
  }
  if (cVar11 == '\0') {
    fVar9 = F32HI(dVar8);
    fVar7 = F32LO(dVar8) / fVar9;
    dVar8 = CONCAT44D(fVar9,fVar7);
    ar5_00 = (int)fVar7;
  }
  else {
    dVar8 = dVar8 / dVar8;
    ar5_00 = (int)dVar8;
  }
  (*(undefined4 *)(fr0_ - 0x4c)) = (undefined4)(D2U(dVar8) >> 0x20);
  ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x74))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 116)); FUN_8c256b0c(0,ar5_00,iVar10,iVar1); });
  ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x74))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 116)); FUN_8c256fec(0,ar5_00,iVar10,iVar1); });
  iVar3 = (vsp = ((unsigned long)(fr0_ - 116)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(ar4 + 8) + 0xb4))))(ar4,ar5_00,iVar10,iVar1));
  if (iVar3 == 0) {
    (*(undefined4 *)(fr0_ - 0x34)) = (*(undefined4 *)(fr0_ - 0x4c));
    uVar4 = (vsp = ((unsigned long)(fr0_ - 116)), FUN_8c015bb8(*(int *)(unsigned)(ar4 + 0x328) + 0x70,ar5_00,iVar10,iVar1));
    iVar3 = (vsp = ((unsigned long)(fr0_ - 116)), FUN_8c026db0(*(undefined4 *)(unsigned)(ar4 + 0x30c),ar5_00,iVar10,iVar1));
    uVar6 = (vsp = ((unsigned long)(fr0_ - 116)), deref_u32(*(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0x328) + 0xa0) + iVar3 * 4,ar5_00,iVar10,iVar1));
    iVar3 = (vsp = ((unsigned long)(fr0_ - 116)), FUN_8c026db0(*(undefined4 *)(unsigned)(ar4 + 0x30c),ar5_00,iVar10,iVar1));
    uVar5 = (vsp = ((unsigned long)(fr0_ - 116)), FUN_8c026d74(*(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0x328) + 0xa8) + iVar3 * 4,ar5_00,iVar10,iVar1));
    (vsp = ((unsigned long)(fr0_ - 116)), FUN_8c026d7c(*(undefined4 *)(unsigned)(ar4 + 0x30c),ar5_00,iVar10,iVar1));
    if (cVar12 == '\0') {
      (*(undefined4 *)(fr0_ - 0x34)) = uVar5;
    }
    ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x74))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 116)); FUN_8c21bbb0(uVar4,uVar6,(*(undefined4 *)(fr0_ - 0x34)),iVar1); });
  }
  else {
    uVar4 = (vsp = ((unsigned long)(fr0_ - 116)), FUN_8c015bb8(*(int *)(unsigned)(ar4 + 0x328) + 0x70,ar5_00,iVar10,iVar1));
    iVar3 = (vsp = ((unsigned long)(fr0_ - 116)), FUN_8c026db0(*(undefined4 *)(unsigned)(ar4 + 0x30c),ar5_00,iVar10,iVar1));
    uVar6 = (vsp = ((unsigned long)(fr0_ - 116)), deref_u32(*(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0x328) + 0xa0) + iVar3 * 4,ar5_00,iVar10,iVar1));
    iVar3 = (vsp = ((unsigned long)(fr0_ - 116)), FUN_8c026db0(*(undefined4 *)(unsigned)(ar4 + 0x30c),ar5_00,iVar10,iVar1));
    uVar5 = (vsp = ((unsigned long)(fr0_ - 116)), FUN_8c026d74(*(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0x328) + 0xa8) + iVar3 * 4,ar5_00,iVar10,iVar1));
    (vsp = ((unsigned long)(fr0_ - 116)), FUN_8c026d7c(*(undefined4 *)(unsigned)(ar4 + 0x30c),ar5_00,iVar10,iVar1));
    if (cVar12 == '\0') {
      (*(undefined4 *)(fr0_ - 0x4c)) = uVar5;
    }
    (vsp = ((unsigned long)(fr0_ - 116)), FUN_8c21af26(uVar4,uVar6,(*(undefined4 *)(fr0_ - 0x4c)),iVar1));
    (*(undefined4 *)(fr0_ - 0x34)) = (*(undefined4 *)(fr0_ - 0x4c));
  }
  (vsp = ((unsigned long)(fr0_ - 116)), FUN_8c256210(1,uVar6,(*(undefined4 *)(fr0_ - 0x34)),iVar1));
  uVar4 = *(undefined4 *)(unsigned)((*(undefined4 *)(unsigned)(unsigned)0x8c284fb4) * 0xc + *piVar2 + 8);
  *(undefined4 *)(unsigned)((*(undefined4 *)(unsigned)(unsigned)0x8c284fb4) * 0xc + *piVar2 + 8) = *(undefined4 *)(unsigned)(*piVar2 + 8);
  *(undefined4 *)(unsigned)(*piVar2 + 8) = uVar4;
  iVar10 = (vsp = ((unsigned long)(fr0_ - 116)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(ar4 + 8) + 0xb4))))(ar4,uVar6,(*(undefined4 *)(fr0_ - 0x34)),iVar1));
  if (iVar10 == 0) {
    iVar10 = (vsp = ((unsigned long)(fr0_ - 116)), FUN_8c233dac(((undefined1 *)(unsigned)0x8c13aad4),uVar6,(*(undefined4 *)(fr0_ - 0x34)),iVar1));
  }
  return iVar10;
}

__asm__(".globl _FUN_8c09dec8\n.set _FUN_8c09dec8, _FUN_8c09dec8_def\n");
