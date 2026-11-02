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
undefined4 FUN_8c2548a8_def(int ar4,int ar5,undefined4 ar6,undefined8 *ar7)

{
  ring[rp++ & 255] = "FUN_8c2548a8";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 36; for (int i_ = 0; i_ < 36; i_++) z_[i_] = 0; }
  int iVar1;
  int *piVar2;
  int *piVar3;
  double in_dr0 = 0;
  float fVar4;
  float fVar5;
  float fVar6;
  double dVar7;
  undefined4 in_fr5 = 0;
  uint uVar8;
  double in_xd0 = 0;
  undefined8 in_xd2 = 0;
  undefined8 uVar9;
  undefined8 in_xd4 = 0;
  undefined4 in_PR = 0;
  char cVar10;
  char cVar11;
  
  fVar6 = F32HI(in_xd4);
  cVar11 = '\0';
  cVar10 = '\0';
  (*(undefined4 *)(fr0_ - 0xc)) = in_PR;
  (vsp = ((unsigned long)(fr0_ - 36)), FUN_8c010794(8,((undefined1 *)(fr0_ - 0x14)),((undefined1 *)(unsigned)0x8c271d70),vr7));
  piVar3 = (int *)(unsigned)(ar5 * 0x10 + ar4);
  iVar1 = (vsp = ((unsigned long)(fr0_ - 36)), libgcc_divide_helper_0106dc(ar5 + 1,ar6,vr6,vr7));
  piVar2 = (int *)(unsigned)(ar4 + iVar1 * 0x10);
  fVar4 = (float)(*piVar2 - *piVar3);
  dVar7 = (double)(ulonglong)(uint)fVar4;
  uVar9 = in_xd2;
  if (cVar11 == '\0') {
    uVar9 = CONCAT44(fVar4,in_fr5);
  }
  uVar8 = (uint)((ulonglong)uVar9 >> 0x20);
  if (cVar10 != '\0' || 0.0 <= fVar4) {
    if (cVar11 == '\0') {
      dVar7 = (double)(ulonglong)uVar8;
      uVar9 = in_xd2;
    }
  }
  else {
    if (cVar11 == '\0') {
      dVar7 = (double)(ulonglong)uVar8;
      in_dr0 = CONCAT44D((int)((ulonglong)in_dr0 >> 0x20),0x4f800000);
      uVar9 = in_xd2;
    }
    else {
      in_xd0 = -1.8629950226301174e-249;
    }
    if (cVar10 == '\0') {
      dVar7 = (double)(ulonglong)(uint)(F32LO(dVar7) + F32LO(in_dr0));
    }
    else {
      dVar7 = dVar7 + in_dr0;
    }
  }
  if (cVar11 == '\0') {
    (*(undefined4 *)(fr0_ + (int)0xfffffff0)) = CONCAT44((*(undefined4 *)(fr0_ - 0xc)),SUB84(dVar7,0));
  }
  else {
    (*(undefined4 *)(fr0_ + (int)0xfffffff0)) = uVar9;
  }
  iVar1 = *piVar3;
  fVar4 = (float)iVar1;
  dVar7 = CONCAT44D((int)(D2U(dVar7) >> 0x20),fVar4);
  if (iVar1 < 0) {
    if (cVar10 == '\0') {
      dVar7 = CONCAT44D(0x4f800000,fVar4 + 4.2949673e+09);
    }
    else {
      dVar7 = CONCAT44D(0x4f800000,fVar4) + CONCAT44D(0x4f800000,fVar4);
    }
  }
  if (cVar11 == '\0') {
    in_dr0 = CONCAT44D((int)((ulonglong)in_dr0 >> 0x20),(*(undefined4 *)(unsigned)(unsigned)0x8c4aad54));
  }
  else {
    in_xd0 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4aad58),(*(undefined4 *)(unsigned)(unsigned)0x8c4aad54));
  }
  if (cVar10 == '\0') {
    fVar4 = F32LO(in_dr0) - F32LO(dVar7);
  }
  else {
    fVar4 = SUB84(in_dr0 - dVar7,0);
  }
  iVar1 = (uint)(0 < *piVar2 - iVar1) * 4;
  if (cVar11 == '\0') {
    dVar7 = CONCAT44D((int)(D2U(dVar7) >> 0x20),*(undefined4 *)(unsigned)(((undefined1 *)(fr0_ - 0x14)) + iVar1));
    in_xd0 = CONCAT44D(fVar4,0x3f800000);
  }
  else {
    uVar9 = *(undefined8 *)(unsigned)(((undefined1 *)(fr0_ - 0x14)) + iVar1);
  }
  if (cVar10 == '\0') {
    in_xd0 = CONCAT44D(F32HI(in_xd0) / F32LO(dVar7),SUB84(in_xd0,0));
  }
  else {
    in_xd0 = in_xd0 / dVar7;
  }
  if (cVar11 == '\0') {
    dVar7 = CONCAT44D(piVar3[1],piVar2[1]);
  }
  else {
    uVar9 = *(undefined8 *)(unsigned)(piVar2 + 1);
    dVar7 = *(double *)(unsigned)(piVar3 + 1);
  }
  if (cVar10 == '\0') {
    fVar4 = F32HI(in_xd0);
    in_xd0 = CONCAT44D(fVar4,F32LO(in_xd0) - fVar4);
    dVar7 = CONCAT44D((int)(D2U(dVar7) >> 0x20),F32LO(dVar7) * fVar4);
  }
  else {
    in_xd0 = in_xd0 - in_xd0;
    fVar4 = F32HI(in_xd0);
    dVar7 = dVar7 * in_xd0;
  }
  if (cVar11 == '\0') {
    fVar6 = F32LO(in_xd0);
  }
  if (cVar10 == '\0') {
    dVar7 = (double)(ulonglong)(uint)(fVar6 * F32HI(dVar7) + F32LO(dVar7));
  }
  if (cVar11 == '\0') {
    *(int *)(unsigned)ar7 = SUB84(dVar7,0);
    dVar7 = CONCAT44D(piVar3[2],piVar2[2]);
  }
  else {
    *ar7 = uVar9;
    uVar9 = *(undefined8 *)(unsigned)(piVar2 + 2);
    dVar7 = *(double *)(unsigned)(piVar3 + 2);
  }
  if (cVar10 == '\0') {
    fVar5 = fVar6 * F32HI(dVar7) + F32LO(dVar7) * fVar4;
  }
  else {
    fVar5 = SUB84(dVar7 * in_xd0,0);
  }
  if (cVar11 == '\0') {
    *(float *)(unsigned)((int)ar7 + 4) = fVar5;
    dVar7 = CONCAT44D(piVar3[3],piVar2[3]);
  }
  else {
    *(undefined8 *)(unsigned)((int)ar7 + 4) = uVar9;
    uVar9 = *(undefined8 *)(unsigned)(piVar2 + 3);
    dVar7 = *(double *)(unsigned)(piVar3 + 3);
  }
  if (cVar10 == '\0') {
    fVar6 = fVar6 * F32HI(dVar7) + F32LO(dVar7) * fVar4;
  }
  else {
    fVar6 = SUB84(dVar7 * in_xd0,0);
  }
  if (cVar11 == '\0') {
    *(float *)(unsigned)(ar7 + 1) = fVar6;
  }
  else {
    ar7[1] = uVar9;
  }
  return 8;
}

__asm__(".globl _FUN_8c2548a8\n.set _FUN_8c2548a8, _FUN_8c2548a8_def\n");
