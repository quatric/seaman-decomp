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
int FUN_8c026968_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c026968";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 220; for (int i_ = 0; i_ < 220; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined1 *puVar5;
  undefined4 uVar6;
  int iVar7;
  float fVar8;
  double dVar9;
  float fVar10;
  int iVar11;
  int iVar12;
  char cVar13;
  char cVar14;
  undefined2 uVar15;
  
  uVar15 = (undefined2)((uint)(*(undefined4 *)(fr0_ - 0xdc)) >> 0x10);
  cVar14 = '\0';
  cVar13 = '\0';
  (vsp = ((unsigned long)(fr0_ - 220)), FUN_8c233dac(ar4 + 0x438,ar5,ar6,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 220)), FUN_8c02bef8(ar4 + 0x174,ar5,ar6,ar7));
  uVar6 = CONCAT22(uVar15,(short)uVar1);
  iVar7 = *(int *)(unsigned)(ar4 + 0x328) + (short)uVar1 * 0x124;
  ({ unsigned long ri0_ = (unsigned long)(uVar6); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 220)); FUN_8c25cddc(((undefined1 *)(fr0_ - 0x4c)),ar5,ar6,ar7); });
  ({ unsigned long ri0_ = (unsigned long)(uVar6); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 220)); FUN_8c25cddc(((undefined1 *)(fr0_ - 0x8c)),ar5,ar6,ar7); });
  (vsp = ((unsigned long)(fr0_ - 220)), FUN_8c01538c(*(undefined4 *)(unsigned)(ar4 + 0x42c),ar5,ar6,ar7));
  uVar1 = 0x40;
  iVar4 = (*(undefined4 *)(unsigned)(unsigned)0x8c27d1ec) * 0x40 + -0x73d83e14;
  (vsp = ((unsigned long)(fr0_ - 220)), FUN_8c013fb4(((*(undefined4 *)(unsigned)(unsigned)0x8c27d1ec) + 1) * 0x40 + -0x73d83e14,iVar4,0x40,ar7));
  (*(undefined4 *)(unsigned)(unsigned)0x8c27d1ec) = (*(undefined4 *)(unsigned)(unsigned)0x8c27d1ec) + 1;
  ({ unsigned long ri0_ = (unsigned long)(uVar6); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 220)); FUN_8c25b5d0(((undefined1 *)(fr0_ - 0x8c)),iVar4,uVar1,ar7); });
  puVar5 = ((undefined1 *)(fr0_ - 0x8c));
  ({ unsigned long ri0_ = (unsigned long)(uVar6); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 220)); FUN_8c255d6c(((undefined1 *)(fr0_ - 0x4c)),puVar5,uVar1,ar7); });
  ({ unsigned long ri0_ = (unsigned long)(uVar6); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 220)); FUN_8c25cddc(((undefined1 *)(fr0_ - 0x8c)),puVar5,uVar1,ar7); });
  if (cVar14 == '\0') {
    dVar9 = CONCAT44D(0x47800000,*(undefined4 *)(unsigned)(ar4 + 0x58));
  }
  else {
    dVar9 = 1.4411521878487204e+18;
  }
  if (cVar13 == '\0') {
    fVar8 = F32LO(dVar9) * F32HI(dVar9);
  }
  else {
    fVar8 = SUB84(dVar9 * dVar9,0);
  }
  if (cVar14 == '\0') {
    dVar9 = CONCAT44D(0x43b40000,fVar8);
  }
  else {
    dVar9 = -3.739346301775294e-250;
  }
  if (cVar13 == '\0') {
    iVar4 = (int)(F32LO(dVar9) / F32HI(dVar9));
  }
  else {
    iVar4 = (int)(dVar9 / dVar9);
  }
  if (cVar14 == '\0') {
    dVar9 = CONCAT44D(0x47800000,*(undefined4 *)(unsigned)(ar4 + 0x54));
  }
  else {
    dVar9 = 1.4411521878487204e+18;
  }
  if (cVar13 == '\0') {
    fVar8 = F32LO(dVar9) * F32HI(dVar9);
  }
  else {
    fVar8 = SUB84(dVar9 * dVar9,0);
  }
  if (cVar14 == '\0') {
    dVar9 = CONCAT44D(0x43b40000,fVar8);
  }
  else {
    dVar9 = -3.739346301775294e-250;
  }
  if (cVar13 == '\0') {
    iVar11 = (int)(F32LO(dVar9) / F32HI(dVar9));
  }
  else {
    iVar11 = (int)(dVar9 / dVar9);
  }
  if (cVar14 == '\0') {
    dVar9 = CONCAT44D(0x47800000,*(undefined4 *)(unsigned)(ar4 + 0x50));
  }
  else {
    dVar9 = 1.4411521878487204e+18;
  }
  if (cVar13 == '\0') {
    fVar8 = F32LO(dVar9) * F32HI(dVar9);
  }
  else {
    fVar8 = SUB84(dVar9 * dVar9,0);
  }
  if (cVar14 == '\0') {
    dVar9 = CONCAT44D(0x43b40000,fVar8);
  }
  else {
    dVar9 = -3.739346301775294e-250;
  }
  if (cVar13 == '\0') {
    iVar12 = (int)(F32LO(dVar9) / F32HI(dVar9));
  }
  else {
    iVar12 = (int)(dVar9 / dVar9);
  }
  ({ unsigned long ri0_ = (unsigned long)(uVar6); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 220)); FUN_8c256b0c(((undefined1 *)(fr0_ - 0x8c)),iVar12,iVar11,iVar4); });
  puVar5 = ((undefined1 *)(fr0_ - 0x8c));
  ({ unsigned long ri0_ = (unsigned long)(uVar6); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 220)); FUN_8c255d6c(((undefined1 *)(fr0_ - 0x4c)),puVar5,iVar11,iVar4); });
  ({ unsigned long ri0_ = (unsigned long)(uVar6); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 220)); FUN_8c25cddc(((undefined1 *)(fr0_ - 0x8c)),puVar5,iVar11,iVar4); });
  ({ unsigned long ri0_ = (unsigned long)(uVar6); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 220)); FUN_8c256fec(((undefined1 *)(fr0_ - 0x8c)),puVar5,iVar11,iVar4); });
  puVar5 = ((undefined1 *)(fr0_ - 0x8c));
  ({ unsigned long ri0_ = (unsigned long)(uVar6); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 220)); FUN_8c255d6c(((undefined1 *)(fr0_ - 0x4c)),puVar5,iVar11,iVar4); });
  ({ unsigned long ri0_ = (unsigned long)(uVar6); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 220)); FUN_8c25cddc(((undefined1 *)(fr0_ - 0x8c)),puVar5,iVar11,iVar4); });
  ({ unsigned long ri0_ = (unsigned long)(uVar6); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 220)); FUN_8c256fec(((undefined1 *)(fr0_ - 0x8c)),puVar5,iVar11,iVar4); });
  puVar5 = ((undefined1 *)(fr0_ - 0x8c));
  ({ unsigned long ri0_ = (unsigned long)(uVar6); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 220)); FUN_8c255d6c(((undefined1 *)(fr0_ - 0x4c)),puVar5,iVar11,iVar4); });
  (vsp = ((unsigned long)(fr0_ - 220)), FUN_8c024378(((undefined1 *)(fr0_ - 0x4c)),puVar5,iVar11,iVar4));
  ({ unsigned long ri0_ = (unsigned long)(uVar6); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 220)); FUN_8c256328(0,puVar5,iVar11,iVar4); });
  ({ unsigned long ri0_ = (unsigned long)(uVar6); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 220)); FUN_8c25b5d0(0,puVar5,iVar11,iVar4); });
  if (cVar14 == '\0') {
    dVar9 = CONCAT44D(0x47800000,*(undefined4 *)(unsigned)(ar4 + 0x58));
  }
  else {
    dVar9 = 1.4411521878487204e+18;
  }
  if (cVar13 == '\0') {
    fVar8 = F32LO(dVar9) * F32HI(dVar9);
  }
  else {
    fVar8 = SUB84(dVar9 * dVar9,0);
  }
  if (cVar14 == '\0') {
    dVar9 = CONCAT44D(0x43b40000,fVar8);
  }
  else {
    dVar9 = -3.739346301775294e-250;
  }
  if (cVar13 == '\0') {
    iVar4 = (int)(F32LO(dVar9) / F32HI(dVar9));
  }
  else {
    iVar4 = (int)(dVar9 / dVar9);
  }
  if (cVar14 == '\0') {
    dVar9 = CONCAT44D(0x47800000,*(undefined4 *)(unsigned)(ar4 + 0x54));
  }
  else {
    dVar9 = 1.4411521878487204e+18;
  }
  if (cVar13 == '\0') {
    fVar8 = F32LO(dVar9) * F32HI(dVar9);
  }
  else {
    fVar8 = SUB84(dVar9 * dVar9,0);
  }
  if (cVar14 == '\0') {
    dVar9 = CONCAT44D(0x43b40000,fVar8);
  }
  else {
    dVar9 = -3.739346301775294e-250;
  }
  if (cVar13 == '\0') {
    iVar11 = (int)(F32LO(dVar9) / F32HI(dVar9));
  }
  else {
    iVar11 = (int)(dVar9 / dVar9);
  }
  if (cVar14 == '\0') {
    dVar9 = CONCAT44D(0x47800000,*(undefined4 *)(unsigned)(ar4 + 0x50));
  }
  else {
    dVar9 = 1.4411521878487204e+18;
  }
  if (cVar13 == '\0') {
    fVar8 = F32LO(dVar9) * F32HI(dVar9);
  }
  else {
    fVar8 = SUB84(dVar9 * dVar9,0);
  }
  if (cVar14 == '\0') {
    dVar9 = CONCAT44D(0x43b40000,fVar8);
  }
  else {
    dVar9 = -3.739346301775294e-250;
  }
  if (cVar13 == '\0') {
    fVar10 = F32HI(dVar9);
    fVar8 = F32LO(dVar9) / fVar10;
    dVar9 = CONCAT44D(fVar10,fVar8);
    iVar12 = (int)fVar8;
  }
  else {
    dVar9 = dVar9 / dVar9;
    iVar12 = (int)dVar9;
  }
  (*(undefined4 *)(fr0_ - 0xb0)) = (undefined4)(D2U(dVar9) >> 0x20);
  ({ unsigned long ri0_ = (unsigned long)(uVar6); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 220)); FUN_8c256b0c(0,iVar12,iVar11,iVar4); });
  ({ unsigned long ri0_ = (unsigned long)(uVar6); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 220)); FUN_8c256fec(0,iVar12,iVar11,iVar4); });
  iVar2 = (vsp = ((unsigned long)(fr0_ - 220)), FUN_8c026db0(*(undefined4 *)(unsigned)(ar4 + 0x30c),iVar12,iVar11,iVar4));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 220)), deref_u32(*(int *)(unsigned)(iVar7 + 0xa0) + iVar2 * 4,iVar12,iVar11,iVar4));
  (vsp = ((unsigned long)(fr0_ - 220)), FUN_8c026d7c(*(undefined4 *)(unsigned)(ar4 + 0x30c),iVar12,iVar11,iVar4));
  (*(undefined4 *)(fr0_ - 0x94)) = (*(undefined4 *)(fr0_ - 0xb0));
  if (cVar14 == '\0') {
    (*(undefined4 *)(fr0_ - 0x94)) = uVar1;
  }
  ({ unsigned long ri0_ = (unsigned long)(uVar6); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 220)); FUN_8c2540a0((*(undefined4 *)(fr0_ - 0x94)),iVar12,iVar11,iVar4); });
  iVar2 = (vsp = ((unsigned long)(fr0_ - 220)), FUN_8c026db0(*(undefined4 *)(unsigned)(ar4 + 0x30c),iVar12,iVar11,iVar4));
  puVar3 = (undefined4 *)(unsigned)(vsp = ((unsigned long)(fr0_ - 220)), deref_u32(*(int *)(unsigned)(iVar7 + 0xa0) + iVar2 * 4,iVar12,iVar11,iVar4));
  *(undefined4 *)(unsigned)(ar4 + 0x434) = *puVar3;
  iVar2 = (vsp = ((unsigned long)(fr0_ - 220)), FUN_8c026db0(*(undefined4 *)(unsigned)(ar4 + 0x30c),iVar12,iVar11,iVar4));
  iVar2 = (vsp = ((unsigned long)(fr0_ - 220)), FUN_8c026d74(*(int *)(unsigned)(iVar7 + 0xa8) + iVar2 * 4,iVar12,iVar11,iVar4));
  if (iVar2 == 0) {
    uVar1 = (vsp = ((unsigned long)(fr0_ - 220)), FUN_8c015bb8(iVar7 + 0x70,iVar12,iVar11,iVar4));
    uVar6 = 0;
    (vsp = ((unsigned long)(fr0_ - 220)), FUN_8c029510(ar4,uVar1,0,iVar4));
  }
  else {
    iVar2 = (vsp = ((unsigned long)(fr0_ - 220)), FUN_8c026db0(*(undefined4 *)(unsigned)(ar4 + 0x30c),iVar12,iVar11,iVar4));
    uVar1 = (vsp = ((unsigned long)(fr0_ - 220)), FUN_8c026d74(*(int *)(unsigned)(iVar7 + 0xa8) + iVar2 * 4,iVar12,iVar11,iVar4));
    (vsp = ((unsigned long)(fr0_ - 220)), FUN_8c026d7c(*(undefined4 *)(unsigned)(ar4 + 0x30c),iVar12,iVar11,iVar4));
    if (cVar14 == '\0') {
      (*(undefined4 *)(fr0_ - 0xb0)) = uVar1;
    }
    uVar1 = 0x29;
    ({ unsigned long ri0_ = (unsigned long)(uVar6); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 220)); FUN_8c21f200((*(undefined4 *)(fr0_ - 0xb0)),0x29,iVar11,iVar4); });
    uVar1 = (vsp = ((unsigned long)(fr0_ - 220)), FUN_8c015bb8(iVar7 + 0x70,uVar1,iVar11,iVar4));
    uVar6 = 0;
    (vsp = ((unsigned long)(fr0_ - 220)), FUN_8c0297b8(ar4,uVar1,0,iVar4));
  }
  (vsp = ((unsigned long)(fr0_ - 220)), FUN_8c256210(1,uVar1,uVar6,iVar4));
  (*(undefined4 *)(unsigned)(unsigned)0x8c27d1ec) = (*(undefined4 *)(unsigned)(unsigned)0x8c27d1ec) + -1;
  (vsp = ((unsigned long)(fr0_ - 220)), FUN_8c233dac(((undefined1 *)(unsigned)0x8c12fd7c),uVar1,uVar6,iVar4));
  iVar7 = *(int *)(unsigned)(ar4 + 0x474);
  if (iVar7 == 1) {
    iVar7 = (vsp = ((unsigned long)(fr0_ - 220)), FUN_8c02b058(ar4,uVar1,uVar6,iVar4));
  }
  return iVar7;
}

__asm__(".globl _FUN_8c026968\n.set _FUN_8c026968, _FUN_8c026968_def\n");
