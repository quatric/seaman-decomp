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
int FUN_8c0d8aa0_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0d8aa0";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 120; for (int i_ = 0; i_ < 120; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 in_fr1 = 0;
  ulonglong uVar2;
  double dVar3;
  float fVar4;
  float fVar5;
  undefined8 in_dr14 = 0;
  undefined4 uVar7;
  double dVar6;
  undefined8 in_xd14 = 0;
  bool bVar8;
  int ar7_00;
  int ar6_00;
  int ar5_00;
  char cVar9;
  char cVar10;
  
  uVar7 = (undefined4)((ulonglong)in_dr14 >> 0x20);
  cVar10 = '\0';
  cVar9 = '\0';
  ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x74))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 120)); FUN_8c25cddc(((undefined4 *)(fr0_ - 0x58)),ar5,ar6,ar7); });
  if (cVar10 == '\0') {
    (*(undefined4 *)(fr0_ - 0x64)) = *(undefined4 *)(unsigned)(ar4 + 8);
    (*(undefined4 *)(fr0_ - 0x60)) = *(undefined4 *)(unsigned)(ar4 + 0xc);
    (*(undefined4 *)(fr0_ - 0x5c)) = *(undefined4 *)(unsigned)(ar4 + 0x10);
    uVar2 = CONCAT44((*(undefined4 *)(fr0_ - 0x5c)),in_fr1);
  }
  else {
    (*(undefined4 *)(fr0_ - 0x64)) = (undefined4)*(undefined8 *)(unsigned)(ar4 + 8);
    (*(undefined4 *)(fr0_ - 0x60)) = (undefined4)*(undefined8 *)(unsigned)(ar4 + 0xc);
    uVar2 = *(ulonglong *)(unsigned)(ar4 + 0x10);
    (*(undefined4 *)(fr0_ - 0x5c)) = (undefined4)uVar2;
    ((undefined4 *)(fr0_ - 0x58))[0] = (undefined4)(uVar2 >> 0x20);
  }
  iVar1 = (vsp = ((unsigned long)(fr0_ - 120)), libgcc_divide_helper_0103d0(ar5,36000,ar6,ar7));
  fVar5 = (float)iVar1;
  dVar6 = CONCAT44D(uVar7,fVar5);
  dVar3 = (double)(uVar2 & 0xffffffff);
  if (cVar9 == '\0') {
    bVar8 = fVar5 < 0.0;
  }
  else {
    bVar8 = dVar6 < dVar3;
  }
  if (bVar8) {
    if (cVar10 == '\0') {
      dVar3 = CONCAT44D(0x4f800000,(int)uVar2);
    }
    else {
      dVar3 = 1.8578690272452215e+34;
    }
    if (cVar9 == '\0') {
      dVar6 = (double)(ulonglong)(uint)(fVar5 + F32HI(dVar3));
    }
    else {
      dVar6 = dVar6 + dVar3;
    }
  }
  if (cVar10 == '\0') {
    uVar2 = CONCAT44(0x470ca000,SUB84(dVar3,0));
  }
  else {
    uVar2 = 0x478ca000470ca000;
  }
  if (cVar9 == '\0') {
    dVar3 = CONCAT44D((float)ar5,F32LO(dVar6) / (float)(uVar2 >> 0x20));
  }
  else {
    dVar3 = (double)ar5;
  }
  dVar6 = (double)(uVar2 & 0xffffffff);
  fVar5 = F32HI(dVar3);
  if (cVar9 == '\0') {
    bVar8 = fVar5 < 0.0;
  }
  else {
    bVar8 = dVar3 < dVar6;
  }
  if (bVar8) {
    if (cVar10 == '\0') {
      dVar6 = CONCAT44D(0x4f800000,(int)uVar2);
    }
    else {
      dVar6 = 1.8578690272452215e+34;
    }
    if (cVar9 == '\0') {
      dVar3 = CONCAT44D(fVar5 + F32HI(dVar6),SUB84(dVar3,0));
    }
    else {
      dVar3 = dVar3 + dVar6;
    }
  }
  if (cVar10 == '\0') {
    dVar6 = CONCAT44D(0x478ca000,SUB84(dVar6,0));
  }
  else {
    dVar6 = 5629500734611456.0;
  }
  if (cVar9 == '\0') {
    dVar3 = CONCAT44D(F32HI(dVar3) / F32HI(dVar6),
                             SUB84(dVar3,0));
  }
  else {
    dVar3 = dVar3 / dVar6;
  }
  if (cVar10 == '\0') {
    dVar6 = CONCAT44D(0x43340000,SUB84(dVar6,0));
  }
  else {
    dVar6 = 2.6584566571173454e+36;
  }
  if (cVar9 == '\0') {
    dVar3 = CONCAT44D((int)(D2U(dVar3) >> 0x20),
                             F32LO(dVar3) * F32HI(dVar6));
  }
  else {
    dVar3 = dVar3 * dVar6;
  }
  dVar6 = CONCAT44D((int)(D2U(dVar3) >> 0x20),-SUB84(dVar3,0));
  if (cVar10 == '\0') {
    *(float *)(unsigned)(ar4 + 0x30) = -SUB84(dVar3,0);
    dVar3 = CONCAT44D(0x47800000,*(undefined4 *)(unsigned)(ar4 + 0x30));
  }
  else {
    *(undefined8 *)(unsigned)(ar4 + 0x30) = in_xd14;
    dVar3 = 1.4411521878487204e+18;
  }
  if (cVar9 == '\0') {
    fVar5 = F32LO(dVar3) * F32HI(dVar3);
  }
  else {
    fVar5 = SUB84(dVar3 * dVar3,0);
  }
  if (cVar10 == '\0') {
    dVar3 = CONCAT44D(0x43b40000,fVar5);
  }
  else {
    dVar3 = -3.739346301775294e-250;
  }
  if (cVar9 == '\0') {
    ar7_00 = (int)(F32LO(dVar3) / F32HI(dVar3));
  }
  else {
    ar7_00 = (int)(dVar3 / dVar3);
  }
  if (cVar10 == '\0') {
    dVar3 = CONCAT44D(0x47800000,*(undefined4 *)(unsigned)(ar4 + 0x2c));
  }
  else {
    dVar3 = 1.4411521878487204e+18;
  }
  if (cVar9 == '\0') {
    fVar5 = F32LO(dVar3) * F32HI(dVar3);
  }
  else {
    fVar5 = SUB84(dVar3 * dVar3,0);
  }
  if (cVar10 == '\0') {
    dVar3 = CONCAT44D(0x43b40000,fVar5);
  }
  else {
    dVar3 = -3.739346301775294e-250;
  }
  if (cVar9 == '\0') {
    ar6_00 = (int)(F32LO(dVar3) / F32HI(dVar3));
  }
  else {
    ar6_00 = (int)(dVar3 / dVar3);
  }
  if (cVar10 == '\0') {
    dVar3 = CONCAT44D(0x47800000,*(undefined4 *)(unsigned)(ar4 + 0x28));
  }
  else {
    dVar3 = 1.4411521878487204e+18;
  }
  if (cVar9 == '\0') {
    fVar5 = F32LO(dVar3) * F32HI(dVar3);
  }
  else {
    fVar5 = SUB84(dVar3 * dVar3,0);
  }
  if (cVar10 == '\0') {
    dVar3 = CONCAT44D(0x43b40000,fVar5);
  }
  else {
    dVar3 = -3.739346301775294e-250;
  }
  if (cVar9 == '\0') {
    fVar4 = F32HI(dVar3);
    fVar5 = F32LO(dVar3) / fVar4;
    dVar3 = CONCAT44D(fVar4,fVar5);
    ar5_00 = (int)fVar5;
  }
  else {
    dVar3 = dVar3 / dVar3;
    ar5_00 = (int)dVar3;
  }
  uVar7 = SUB84(dVar3,0);
  ({ unsigned long ri0_ = (unsigned long)(iVar1); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 120)); FUN_8c256b0c(((undefined4 *)(fr0_ - 0x58)),ar5_00,ar6_00,ar7_00); });
  ({ unsigned long ri0_ = (unsigned long)(iVar1); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 120)); FUN_8c21279c(((undefined4 *)(fr0_ - 0x58)),&(*(undefined4 *)(fr0_ - 0x64)),&(*(undefined4 *)(fr0_ - 0x70)),ar7_00); });
  if (cVar10 == '\0') {
    *(undefined4 *)(unsigned)(ar4 + 0x18) = (*(undefined4 *)(fr0_ - 0x70));
    *(undefined4 *)(unsigned)(ar4 + 0x1c) = (*(undefined4 *)(fr0_ - 0x6c));
    *(undefined4 *)(unsigned)(ar4 + 0x20) = (*(undefined4 *)(fr0_ - 0x68));
    dVar3 = CONCAT44D(0x43b38000,uVar7);
  }
  else {
    *(undefined8 *)(unsigned)(ar4 + 0x18) = CONCAT44((*(undefined4 *)(fr0_ - 0x6c)),(*(undefined4 *)(fr0_ - 0x70)));
    *(ulonglong *)(unsigned)(ar4 + 0x1c) = CONCAT44((*(undefined4 *)(fr0_ - 0x68)),(*(undefined4 *)(fr0_ - 0x6c)));
    *(ulonglong *)(unsigned)(ar4 + 0x20) = CONCAT44((*(undefined4 *)(fr0_ - 0x64)),(*(undefined4 *)(fr0_ - 0x68)));
    dVar3 = 1.606691858090454e+73;
  }
  if (cVar9 == '\0') {
    iVar1 = (int)(F32HI(dVar6) * F32HI(dVar3));
  }
  else {
    iVar1 = (int)(dVar6 * dVar3);
  }
  return iVar1;
}

__asm__(".globl _FUN_8c0d8aa0\n.set _FUN_8c0d8aa0, _FUN_8c0d8aa0_def\n");
