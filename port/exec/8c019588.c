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
undefined4 Class_1299f8_m4_019588_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "Class_1299f8_m4_019588";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 364; for (int i_ = 0; i_ < 364; i_++) z_[i_] = 0; }
  undefined4 *puVar1;
  undefined1 *ar6_00;
  float fVar2;
  float fVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  undefined8 in_dr4 = 0;
  undefined4 uVar8;
  undefined8 in_dr6 = 0;
  undefined4 in_fr13 = 0;
  float fVar9;
  undefined4 uVar10;
  double in_xd0 = 0;
  int iVar11;
  char cVar12;
  char cVar13;
  
  cVar13 = '\0';
  cVar12 = '\0';
  uVar8 = (undefined4)((ulonglong)in_dr4 >> 0x20);
  dVar4 = CONCAT44D((int)in_dr4,in_fr13);
  uVar10 = (undefined4)((ulonglong)in_dr6 >> 0x20);
  (vsp = ((unsigned long)(fr0_ - 364)), Vec3_ctor_zero(((undefined1 *)(fr0_ - 0x28)),ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 364)), FUN_8c0241e8(&(*(undefined4 *)(fr0_ - 0x48)),ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 364)), FUN_8c024088(&(*(undefined4 *)(fr0_ - 0x68)),ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 364)), FUN_8c023e44(((undefined1 *)(fr0_ - 0xa8)),ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 364)), Vec3_ctor_xyz(((undefined1 *)(fr0_ - 0xb8)),ar5,ar6,ar7));
  if (cVar13 == '\0') {
    (*(undefined4 *)(fr0_ - 0x144)) = *(undefined4 *)(unsigned)(ar4 + 0x50);
    (*(undefined4 *)(fr0_ - 0x140)) = *(undefined4 *)(unsigned)(ar4 + 0x54);
    (*(undefined4 *)(fr0_ - 0x13c)) = *(undefined4 *)(unsigned)(ar4 + 0x58);
  }
  else {
    (*(undefined4 *)(fr0_ - 0x144)) = (undefined4)*(undefined8 *)(unsigned)(ar4 + 0x50);
    (*(undefined4 *)(fr0_ - 0x140)) = (undefined4)*(undefined8 *)(unsigned)(ar4 + 0x54);
    (*(undefined4 *)(fr0_ - 0x13c)) = (undefined4)*(undefined8 *)(unsigned)(ar4 + 0x58);
    ((undefined4 *)(fr0_ - 0x138))[0] = (undefined4)((ulonglong)*(undefined8 *)(unsigned)(ar4 + 0x58) >> 0x20);
  }
  (vsp = ((unsigned long)(fr0_ - 364)), FUN_8c023e7c(((undefined1 *)(fr0_ - 0xa8)),ar5,ar6,ar7));
  ({ unsigned long ri0_ = (unsigned long)(uVar8); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 364)); FUN_8c25cddc(((undefined1 *)(fr0_ - 0xf8)),ar5,ar6,ar7); });
  puVar1 = ((undefined4 *)(fr0_ - 0x138));
  ({ unsigned long ri0_ = (unsigned long)(uVar8); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 364)); FUN_8c25cddc(puVar1,ar5,ar6,ar7); });
  if (cVar13 == '\0') {
    dVar7 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4aa4b4),uVar8);
  }
  else {
    in_xd0 = CONCAT44D((*(undefined4 *)(fr0_ - 0x168)),uVar8);
    dVar7 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4aa4b8),(*(undefined4 *)(unsigned)(unsigned)0x8c4aa4b4));
  }
  if (cVar12 == '\0') {
    fVar2 = F32LO(dVar7) - F32HI(dVar7);
  }
  else {
    fVar2 = SUB84(dVar7 - dVar7,0);
  }
  if (cVar13 == '\0') {
    dVar7 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4aa4b8),fVar2);
  }
  else {
    fVar2 = F32LO(in_xd0);
    dVar7 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4aa4bc),(*(undefined4 *)(unsigned)(unsigned)0x8c4aa4b8));
  }
  if (cVar12 == '\0') {
    fVar9 = F32HI(dVar4) - F32HI(dVar7);
  }
  else {
    fVar9 = (float)((ulonglong)(dVar4 - dVar7) >> 0x20);
  }
  (vsp = ((unsigned long)(fr0_ - 364)), FUN_8c013b8c(puVar1,ar5,ar6,ar7));
  uVar8 = (undefined4)(D2U(dVar7) >> 0x20);
  if (cVar13 == '\0') {
    dVar4 = CONCAT44D(0x47800000,uVar8);
    dVar7 = in_xd0;
  }
  else {
    dVar4 = 12831.689682006836;
    ((undefined4 *)(fr0_ - 0x160))[0] = uVar8;
  }
  if (cVar12 == '\0') {
    fVar3 = F32LO(dVar4) * F32HI(dVar4);
  }
  else {
    fVar3 = SUB84(dVar4 * dVar4,0);
  }
  if (cVar13 == '\0') {
    dVar4 = CONCAT44D(0x40c90fd8,fVar3);
  }
  else {
    dVar4 = 1.4411521590097244e+18;
  }
  if (cVar12 == '\0') {
    fVar3 = F32LO(dVar4) / F32HI(dVar4);
    dVar4 = CONCAT44D((float)(int)fVar3,uVar10);
  }
  else {
    fVar3 = SUB84(dVar4 / dVar4,0);
    dVar4 = (double)(int)(dVar4 / dVar4);
  }
  if (cVar13 == '\0') {
    dVar5 = CONCAT44D(0x43b40000,fVar3);
  }
  else {
    dVar5 = -3.740593052227333e-250;
  }
  if (cVar12 == '\0') {
    dVar4 = CONCAT44D(F32HI(dVar4) * F32HI(dVar5),
                             SUB84(dVar4,0));
  }
  else {
    dVar4 = dVar4 * dVar5;
  }
  if (cVar13 == '\0') {
    dVar5 = CONCAT44D(0x47800000,SUB84(dVar5,0));
  }
  else {
    dVar5 = 12831.689682006836;
  }
  if (cVar12 == '\0') {
    dVar4 = CONCAT44D(F32HI(dVar4) / F32HI(dVar5),
                             SUB84(dVar4,0));
  }
  else {
    dVar4 = dVar4 / dVar5;
  }
  (vsp = ((unsigned long)(fr0_ - 364)), FUN_8c013b8c(puVar1,ar5,ar6,ar7));
  if (cVar13 == '\0') {
    dVar6 = CONCAT44D(0x47800000,(int)(D2U(dVar5) >> 0x20));
    dVar5 = dVar7;
  }
  else {
    dVar6 = 12831.689682006836;
  }
  if (cVar12 == '\0') {
    fVar3 = F32LO(dVar6) * F32HI(dVar6);
  }
  else {
    fVar3 = SUB84(dVar6 * dVar6,0);
  }
  if (cVar13 == '\0') {
    dVar7 = CONCAT44D(0x40c90fd8,fVar3);
  }
  else {
    dVar7 = 1.4411521590097244e+18;
  }
  if (cVar12 == '\0') {
    fVar3 = F32LO(dVar7) / F32HI(dVar7);
    iVar11 = (int)fVar3;
  }
  else {
    fVar3 = SUB84(dVar7 / dVar7,0);
    iVar11 = (int)(dVar7 / dVar7);
  }
  if (cVar13 == '\0') {
    dVar7 = CONCAT44D(0x43b40000,fVar3);
  }
  else {
    dVar7 = -3.740593052227333e-250;
  }
  if (cVar12 == '\0') {
    dVar6 = CONCAT44D(fVar9,(float)iVar11 * F32HI(dVar7));
  }
  else {
    dVar6 = CONCAT44D(fVar9,(float)iVar11) * dVar7;
  }
  if (cVar13 == '\0') {
    dVar7 = CONCAT44D(0x47800000,SUB84(dVar7,0));
  }
  else {
    dVar7 = 12831.689682006836;
  }
  if (cVar12 == '\0') {
    dVar6 = CONCAT44D((int)(D2U(dVar6) >> 0x20),
                             F32LO(dVar6) / F32HI(dVar7));
  }
  else {
    dVar6 = dVar6 / dVar7;
  }
  uVar8 = (undefined4)(D2U(dVar6) >> 0x20);
  if (cVar13 == '\0') {
    dVar7 = CONCAT44D(0x47800000,SUB84(dVar7,0));
  }
  else {
    dVar7 = 12831.689682006836;
  }
  if (cVar12 == '\0') {
    dVar6 = CONCAT44D(uVar8,-F32LO(dVar6) * F32HI(dVar7));
  }
  else {
    dVar6 = CONCAT44D(uVar8,-SUB84(dVar6,0)) * dVar7;
  }
  if (cVar13 == '\0') {
    dVar7 = CONCAT44D(0x43b40000,SUB84(dVar7,0));
  }
  else {
    dVar7 = -3.740593052227333e-250;
  }
  if (cVar12 == '\0') {
    iVar11 = (int)(F32LO(dVar6) / F32HI(dVar7));
  }
  else {
    iVar11 = (int)(dVar6 / dVar7);
  }
  ({ unsigned long ri0_ = (unsigned long)(fVar2); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 364)); FUN_8c256ce0(((undefined1 *)(fr0_ - 0xf8)),iVar11,ar6,ar7); });
  if (cVar12 == '\0') {
    dVar4 = CONCAT44D(-F32HI(dVar4),SUB84(dVar4,0));
  }
  else {
    dVar4 = -dVar4;
  }
  if (cVar13 == '\0') {
    dVar7 = CONCAT44D(0x47800000,SUB84(dVar7,0));
  }
  else {
    dVar7 = 12831.689682006836;
  }
  if (cVar12 == '\0') {
    dVar4 = CONCAT44D(F32HI(dVar4) * F32HI(dVar7),
                             SUB84(dVar4,0));
  }
  else {
    dVar4 = dVar4 * dVar7;
  }
  if (cVar13 == '\0') {
    dVar7 = CONCAT44D(0x43b40000,SUB84(dVar7,0));
  }
  else {
    dVar7 = -3.740593052227333e-250;
  }
  if (cVar12 == '\0') {
    fVar9 = F32HI(dVar4) / F32HI(dVar7);
    dVar4 = CONCAT44D(fVar9,SUB84(dVar4,0));
    iVar11 = (int)fVar9;
  }
  else {
    dVar4 = dVar4 / dVar7;
    iVar11 = (int)dVar4;
  }
  ({ unsigned long ri0_ = (unsigned long)(fVar2); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 364)); FUN_8c256a78(((undefined4 *)(fr0_ - 0x138)),iVar11,ar6,ar7); });
  ({ unsigned long ri0_ = (unsigned long)(fVar2); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 364)); FUN_8c255d6c(((undefined1 *)(fr0_ - 0xf8)),((undefined4 *)(fr0_ - 0x138)),ar6,ar7); });
  ar6_00 = ((undefined1 *)(fr0_ - 0x150));
  puVar1 = &(*(undefined4 *)(fr0_ - 0x144));
  ({ unsigned long ri0_ = (unsigned long)(fVar2); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 364)); FUN_8c21279c(((undefined1 *)(fr0_ - 0xf8)),puVar1,ar6_00,ar7); });
  (vsp = ((unsigned long)(fr0_ - 364)), FUN_8c022d04(((undefined1 *)(fr0_ - 0x58)),puVar1,ar6_00,ar7));
  (vsp = ((unsigned long)(fr0_ - 364)), Vec3_length(((undefined1 *)(fr0_ - 0x58)),puVar1,ar6_00,ar7));
  if (cVar13 == '\0') {
    (*(undefined4 *)(fr0_ - 0x68)) = *(undefined4 *)(unsigned)(ar4 + 0x44);
    (*(undefined4 *)(fr0_ - 0x64)) = *(undefined4 *)(unsigned)(ar4 + 0x48);
    (*(undefined4 *)(fr0_ - 0x60)) = *(undefined4 *)(unsigned)(ar4 + 0x4c);
    dVar7 = CONCAT44D((*(undefined4 *)(fr0_ - 0x60)),*(undefined4 *)(unsigned)(ar4 + 0x50));
  }
  else {
    (*(undefined4 *)(fr0_ - 0x68)) = (undefined4)*(undefined8 *)(unsigned)(ar4 + 0x44);
    (*(undefined4 *)(fr0_ - 0x64)) = (undefined4)*(undefined8 *)(unsigned)(ar4 + 0x48);
    dVar7 = *(double *)(unsigned)(ar4 + 0x4c);
    (*(undefined4 *)(fr0_ - 0x60)) = SUB84(dVar7,0);
    (*(undefined4 *)(fr0_ - 0x5c)) = (undefined4)(D2U(dVar7) >> 0x20);
    dVar5 = *(double *)(unsigned)(ar4 + 0x50);
  }
  fVar2 = F32LO(dVar4);
  if (cVar12 == '\0') {
    fVar9 = F32LO(dVar7) * fVar2;
  }
  else {
    fVar9 = SUB84(dVar7 * dVar4,0);
  }
  if (cVar13 == '\0') {
    dVar7 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 0x44),fVar9);
  }
  else {
    dVar7 = *(double *)(unsigned)(ar4 + 0x44);
  }
  if (cVar12 == '\0') {
    fVar9 = F32HI(dVar7);
    dVar7 = CONCAT44D(fVar9,F32LO(dVar7) + fVar9);
  }
  else {
    dVar7 = dVar7 + dVar7;
  }
  if (cVar13 == '\0') {
    (*(undefined4 *)(fr0_ - 0x48)) = SUB84(dVar7,0);
    dVar7 = CONCAT44D((int)(D2U(dVar7) >> 0x20),*(undefined4 *)(unsigned)(ar4 + 0x54));
  }
  else {
    (*(undefined4 *)(fr0_ - 0x48)) = SUB84(dVar5,0);
    dVar5 = *(double *)(unsigned)(ar4 + 0x54);
  }
  if (cVar12 == '\0') {
    fVar9 = F32LO(dVar7) * fVar2;
  }
  else {
    fVar9 = SUB84(dVar7 * dVar4,0);
  }
  if (cVar13 == '\0') {
    dVar7 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 0x48),fVar9);
  }
  else {
    dVar7 = *(double *)(unsigned)(ar4 + 0x48);
  }
  if (cVar12 == '\0') {
    fVar9 = F32HI(dVar7);
    dVar7 = CONCAT44D(fVar9,F32LO(dVar7) + fVar9);
  }
  else {
    dVar7 = dVar7 + dVar7;
  }
  if (cVar13 == '\0') {
    (*(undefined4 *)(fr0_ - 0x44)) = SUB84(dVar7,0);
    dVar7 = CONCAT44D((int)(D2U(dVar7) >> 0x20),*(undefined4 *)(unsigned)(ar4 + 0x58));
  }
  else {
    (*(undefined4 *)(fr0_ - 0x44)) = SUB84(dVar5,0);
    dVar5 = *(double *)(unsigned)(ar4 + 0x58);
  }
  if (cVar12 == '\0') {
    fVar2 = F32LO(dVar7) * fVar2;
  }
  else {
    fVar2 = SUB84(dVar7 * dVar4,0);
  }
  if (cVar13 == '\0') {
    dVar4 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 0x4c),fVar2);
  }
  else {
    dVar4 = *(double *)(unsigned)(ar4 + 0x4c);
  }
  if (cVar12 == '\0') {
    (*(float *)(fr0_ - 0x40)) = F32LO(dVar4) + F32HI(dVar4);
  }
  else {
    (*(float *)(fr0_ - 0x40)) = SUB84(dVar4 + dVar4,0);
  }
  if (cVar13 == '\0') {
    (*(undefined4 *)(fr0_ - 0x38)) = *(undefined4 *)(unsigned)(ar4 + 0x50);
    (*(undefined4 *)(fr0_ - 0x34)) = *(undefined4 *)(unsigned)(ar4 + 0x54);
    (*(undefined4 *)(fr0_ - 0x30)) = *(undefined4 *)(unsigned)(ar4 + 0x58);
  }
  else {
    (*(float *)(fr0_ - 0x40)) = SUB84(dVar5,0);
    (*(undefined4 *)(fr0_ - 0x3c)) = (undefined4)(D2U(dVar5) >> 0x20);
    (*(undefined4 *)(fr0_ - 0x38)) = (undefined4)*(undefined8 *)(unsigned)(ar4 + 0x50);
    (*(undefined4 *)(fr0_ - 0x34)) = (undefined4)*(undefined8 *)(unsigned)(ar4 + 0x54);
    (*(undefined4 *)(fr0_ - 0x30)) = (undefined4)*(undefined8 *)(unsigned)(ar4 + 0x58);
    (*(undefined4 *)(fr0_ - 0x2c)) = (undefined4)((ulonglong)*(undefined8 *)(unsigned)(ar4 + 0x58) >> 0x20);
  }
  puVar1 = &(*(undefined4 *)(fr0_ - 0x48));
  (vsp = ((unsigned long)(fr0_ - 364)), FUN_8c0240bc(&(*(undefined4 *)(fr0_ - 0x68)),&(*(undefined4 *)(fr0_ - 0x38)),puVar1,ar7));
  (vsp = ((unsigned long)(fr0_ - 364)), Vec3_assign(((undefined1 *)(fr0_ - 0x28)),((undefined4 *)(fr0_ - 0x160)),puVar1,ar7));
  (vsp = ((unsigned long)(fr0_ - 364)), Vec3_dtor(((undefined4 *)(fr0_ - 0x160)),0xffffffff,puVar1,ar7));
  (vsp = ((unsigned long)(fr0_ - 364)), Vec3_ctor_copy((*(undefined4 *)(fr0_ + 0x00000000)),((undefined1 *)(fr0_ - 0x28)),puVar1,ar7));
  (vsp = ((unsigned long)(fr0_ - 364)), Vec3_dtor(((undefined1 *)(fr0_ - 0xb8)),0xffffffff,puVar1,ar7));
  (vsp = ((unsigned long)(fr0_ - 364)), free_if_nonnull_wrap_023e4c(((undefined1 *)(fr0_ - 0xa8)),0xffffffff,puVar1,ar7));
  (vsp = ((unsigned long)(fr0_ - 364)), FUN_8c0198dc(&(*(undefined4 *)(fr0_ - 0x68)),0xffffffff,puVar1,ar7));
  (vsp = ((unsigned long)(fr0_ - 364)), FUN_8c019928(&(*(undefined4 *)(fr0_ - 0x48)),0xffffffff,puVar1,ar7));
  (vsp = ((unsigned long)(fr0_ - 364)), Vec3_dtor(((undefined1 *)(fr0_ - 0x28)),0xffffffff,puVar1,ar7));
  return 0;
}

__asm__(".globl _Class_1299f8_m4_019588\n.set _Class_1299f8_m4_019588, _Class_1299f8_m4_019588_def\n");
