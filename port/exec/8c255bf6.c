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
int FUN_8c255bf6_def(int ar4,int ar5,undefined4 ar6,int *ar7)

{
  ring[rp++ & 255] = "FUN_8c255bf6";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 28; for (int i_ = 0; i_ < 28; i_++) z_[i_] = 0; }
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  int *piVar8;
  double in_dr0 = 0;
  float fVar9;
  float fVar10;
  double dVar11;
  undefined4 in_fr5 = 0;
  undefined8 uVar12;
  double in_xd0 = 0;
  undefined8 in_xd2 = 0;
  undefined8 uVar13;
  undefined8 in_xd4 = 0;
  undefined4 in_PR = 0;
  char cVar14;
  char cVar15;
  
  fVar9 = F32HI(in_xd4);
  cVar15 = '\0';
  cVar14 = '\0';
  (*(uint*)((uchar*)&(*(undefined8 *)(fr0_ - 0x18))+4)) = in_PR;
  (vsp = ((unsigned long)(fr0_ - 28)), FUN_8c010794(8,&(*(undefined4 *)(fr0_ - 0x1c)),((undefined1 *)(unsigned)0x8c271da0),vr7));
  piVar8 = (int *)(unsigned)(ar5 * 0x10 + ar4);
  iVar1 = (vsp = ((unsigned long)(fr0_ - 28)), libgcc_divide_helper_0106dc(ar5 + 1,ar6,vr6,vr7));
  piVar6 = (int *)(unsigned)(iVar1 * 0x10 + ar4);
  fVar10 = (float)(*piVar6 - *piVar8);
  dVar11 = (double)(ulonglong)(uint)fVar10;
  uVar12 = in_xd2;
  if (cVar15 == '\0') {
    uVar12 = CONCAT44(fVar10,in_fr5);
  }
  uVar2 = (uint)((ulonglong)uVar12 >> 0x20);
  uVar13 = uVar12;
  if (cVar14 != '\0' || 0.0 <= fVar10) {
    if (cVar15 == '\0') {
      dVar11 = (double)(ulonglong)uVar2;
      uVar13 = in_xd2;
    }
  }
  else {
    if (cVar15 == '\0') {
      dVar11 = (double)(ulonglong)uVar2;
      in_dr0 = CONCAT44D((int)((ulonglong)in_dr0 >> 0x20),0x4f800000);
      uVar13 = in_xd2;
    }
    else {
      in_xd0 = -3.511233917769577e+154;
    }
    if (cVar14 == '\0') {
      dVar11 = (double)(ulonglong)(uint)(F32LO(dVar11) + F32LO(in_dr0));
    }
    else {
      dVar11 = dVar11 + in_dr0;
    }
  }
  if (cVar15 == '\0') {
    (*(undefined8 *)(fr0_ - 0x18)) = CONCAT44((*(uint*)((uchar*)&(*(undefined8 *)(fr0_ - 0x18))+4)),SUB84(dVar11,0));
  }
  else {
    (*(undefined8 *)(fr0_ - 0x18)) = uVar13;
  }
  iVar1 = *piVar8;
  fVar10 = (float)iVar1;
  dVar11 = CONCAT44D((int)(D2U(dVar11) >> 0x20),fVar10);
  if (iVar1 < 0) {
    if (cVar14 == '\0') {
      dVar11 = CONCAT44D(0x4f800000,fVar10 + 4.2949673e+09);
    }
    else {
      dVar11 = CONCAT44D(0x4f800000,fVar10) + CONCAT44D(0x4f800000,fVar10);
    }
  }
  if (cVar15 == '\0') {
    in_dr0 = CONCAT44D((int)((ulonglong)in_dr0 >> 0x20),(*(undefined4 *)(unsigned)(unsigned)0x8c4aad54));
  }
  else {
    in_xd0 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4aad58),(*(undefined4 *)(unsigned)(unsigned)0x8c4aad54));
  }
  if (cVar14 == '\0') {
    fVar10 = F32LO(in_dr0) - F32LO(dVar11);
  }
  else {
    fVar10 = SUB84(in_dr0 - dVar11,0);
  }
  uVar2 = (uint)(0 < *piVar6 - iVar1);
  if (cVar15 == '\0') {
    dVar11 = CONCAT44D((int)(D2U(dVar11) >> 0x20),(&(*(undefined4 *)(fr0_ - 0x1c)))[uVar2]);
  }
  iVar1 = piVar6[1] - piVar8[1];
  if (cVar15 == '\0') {
    in_xd0 = CONCAT44D(fVar10,(int)uVar12);
  }
  if (cVar14 == '\0') {
    fVar10 = F32HI(in_xd0) / F32LO(dVar11);
  }
  else {
    fVar10 = (float)((ulonglong)(in_xd0 / dVar11) >> 0x20);
  }
  if (cVar14 == '\0') {
    dVar11 = CONCAT44D(fVar10,1.0 - fVar10);
  }
  else {
    dVar11 = CONCAT44D(fVar10,0x3f800000) - CONCAT44D(fVar10,0x3f800000);
  }
  if (iVar1 < 0x8001) {
    if (iVar1 < -0x8000) {
      iVar1 = iVar1 + 0x10000;
    }
  }
  else {
    iVar1 = iVar1 + -0x10000;
  }
  iVar5 = piVar6[2] - piVar8[2];
  if (iVar5 < 0x8001) {
    if (iVar5 < -0x8000) {
      iVar5 = iVar5 + 0x10000;
    }
  }
  else {
    iVar5 = iVar5 + -0x10000;
  }
  iVar3 = piVar8[2];
  iVar7 = piVar6[3] - piVar8[3];
  if (iVar7 < 0x8001) {
    if (iVar7 < -0x8000) {
      iVar7 = iVar7 + 0x10000;
    }
  }
  else {
    iVar7 = iVar7 + -0x10000;
  }
  if (cVar15 == '\0') {
    fVar9 = F32LO(dVar11);
  }
  iVar4 = piVar8[3];
  fVar10 = F32HI(dVar11);
  if (cVar14 == '\0') {
    iVar1 = (int)(fVar9 * (float)(uint)piVar8[1] + (float)(iVar1 + piVar8[1]) * fVar10);
  }
  else {
    iVar1 = (int)((double)(iVar1 + piVar8[1]) * dVar11);
  }
  *ar7 = iVar1;
  if (cVar14 == '\0') {
    iVar1 = (int)(fVar9 * (float)(uint)piVar8[2] + (float)(iVar5 + iVar3) * fVar10);
  }
  else {
    iVar1 = (int)((double)(iVar5 + iVar3) * dVar11);
  }
  ar7[1] = iVar1;
  if (cVar14 == '\0') {
    iVar1 = (int)(fVar9 * (float)(uint)piVar8[3] + (float)(iVar7 + iVar4) * fVar10);
  }
  else {
    iVar1 = (int)((double)(iVar7 + iVar4) * dVar11);
  }
  ar7[2] = iVar1;
  return uVar2 * 4;
}

__asm__(".globl _FUN_8c255bf6\n.set _FUN_8c255bf6, _FUN_8c255bf6_def\n");
