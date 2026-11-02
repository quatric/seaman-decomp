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
undefined4 FUN_8c21c1b0_def(int ar4,int ar5,undefined4 ar6,double *ar7)

{
  ring[rp++ & 255] = "FUN_8c21c1b0";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 36; for (int i_ = 0; i_ < 36; i_++) z_[i_] = 0; }
  double *pdVar1;
  double *pdVar2;
  double *pdVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  double in_dr0 = 0;
  double dVar7;
  float fVar8;
  float fVar9;
  double dVar10;
  ulonglong uVar11;
  undefined4 uVar12;
  undefined4 in_fr5 = 0;
  uint uVar13;
  undefined4 in_fr7 = 0;
  float fVar14;
  undefined4 in_fr9 = 0;
  double in_xd0 = 0;
  double in_xd2 = 0;
  double dVar15;
  double in_xd4 = 0;
  bool bVar16;
  undefined4 in_PR = 0;
  char cVar17;
  char cVar18;
  
  cVar18 = '\0';
  cVar17 = '\0';
  (*(undefined4 *)(fr0_ - 0xc)) = in_PR;
  (vsp = ((unsigned long)(fr0_ - 36)), FUN_8c010794(8,((undefined1 *)(fr0_ - 0x14)),((undefined1 *)(unsigned)0x8c26d780),vr7));
  piVar6 = (int *)(unsigned)(ar5 * 0x14 + ar4);
  iVar4 = (vsp = ((unsigned long)(fr0_ - 36)), libgcc_divide_helper_0106dc(ar5 + 1,ar6,vr6,vr7));
  piVar5 = (int *)(unsigned)(ar4 + iVar4 * 0x14);
  fVar8 = (float)(*piVar5 - *piVar6);
  dVar10 = (double)(ulonglong)(uint)fVar8;
  dVar7 = in_xd2;
  if (cVar18 == '\0') {
    dVar7 = CONCAT44D(fVar8,in_fr5);
  }
  uVar13 = (uint)(D2U(dVar7) >> 0x20);
  dVar15 = dVar7;
  if (cVar17 != '\0' || 0.0 <= fVar8) {
    if (cVar18 == '\0') {
      dVar10 = (double)(ulonglong)uVar13;
      dVar15 = in_xd2;
    }
  }
  else {
    if (cVar18 == '\0') {
      dVar10 = (double)(ulonglong)uVar13;
      in_dr0 = CONCAT44D((int)((ulonglong)in_dr0 >> 0x20),0x4f800000);
      dVar15 = in_xd2;
    }
    else {
      in_xd0 = -1.8629950226301174e-249;
    }
    if (cVar17 == '\0') {
      dVar10 = (double)(ulonglong)(uint)(F32LO(dVar10) + F32LO(in_dr0));
    }
    else {
      dVar10 = dVar10 + in_dr0;
    }
  }
  if (cVar18 == '\0') {
    (*(undefined4 *)(fr0_ + (int)0xfffffff0)) = CONCAT44D((*(undefined4 *)(fr0_ - 0xc)),SUB84(dVar10,0));
  }
  else {
    (*(undefined4 *)(fr0_ + (int)0xfffffff0)) = dVar15;
  }
  iVar4 = *piVar6;
  fVar8 = (float)iVar4;
  dVar10 = CONCAT44D((int)(D2U(dVar10) >> 0x20),fVar8);
  if (iVar4 < 0) {
    if (cVar17 == '\0') {
      dVar10 = CONCAT44D(0x4f800000,fVar8 + 4.2949673e+09);
    }
    else {
      dVar10 = CONCAT44D(0x4f800000,fVar8) + CONCAT44D(0x4f800000,fVar8);
    }
  }
  if (cVar18 == '\0') {
    in_dr0 = CONCAT44D((int)((ulonglong)in_dr0 >> 0x20),(*(undefined4 *)(unsigned)(unsigned)0x8c4aad54));
  }
  else {
    in_xd0 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4aad58),(*(undefined4 *)(unsigned)(unsigned)0x8c4aad54));
  }
  if (cVar17 == '\0') {
    fVar8 = F32LO(in_dr0) - F32LO(dVar10);
  }
  else {
    fVar8 = SUB84(in_dr0 - dVar10,0);
  }
  if (cVar18 == '\0') {
    dVar10 = CONCAT44D(piVar6[1],SUB84(dVar10,0));
  }
  else {
    dVar10 = *(double *)(unsigned)(piVar6 + 1);
  }
  iVar4 = (uint)(0 < *piVar5 - iVar4) * 4;
  if (cVar18 == '\0') {
    dVar10 = CONCAT44D((int)(D2U(dVar10) >> 0x20),*(undefined4 *)(unsigned)(((undefined1 *)(fr0_ - 0x14)) + iVar4));
    in_xd0 = CONCAT44D(fVar8,SUB84(dVar7,0));
  }
  else {
    dVar15 = *(double *)(unsigned)(((undefined1 *)(fr0_ - 0x14)) + iVar4);
  }
  if (cVar17 == '\0') {
    in_xd0 = CONCAT44D(F32HI(in_xd0) / F32LO(dVar10),SUB84(in_xd0,0));
  }
  else {
    in_xd0 = in_xd0 / dVar10;
  }
  if (cVar18 == '\0') {
    dVar7 = CONCAT44D(piVar5[2],fVar8);
    dVar10 = CONCAT44D((int)(D2U(dVar10) >> 0x20),piVar6[2]);
    in_xd0 = CONCAT44D((int)((ulonglong)in_xd0 >> 0x20),0x3f800000);
  }
  else {
    dVar7 = *(double *)(unsigned)(piVar5 + 2);
    dVar15 = *(double *)(unsigned)(piVar6 + 2);
    in_xd4 = CONCAT44D(0x3f800000,in_fr9);
  }
  if (cVar17 == '\0') {
    dVar10 = CONCAT44D((int)(D2U(dVar10) >> 0x20),
                              F32LO(dVar10) * F32HI(dVar7));
  }
  else {
    dVar10 = dVar10 * dVar7;
  }
  if (cVar18 == '\0') {
    fVar8 = (float)(uint)piVar5[1];
  }
  else {
    fVar8 = (float)((ulonglong)*(undefined8 *)(unsigned)(piVar5 + 1) >> 0x20);
  }
  if (cVar17 == '\0') {
    dVar10 = (double)(ulonglong)(uint)(fVar8 * F32HI(dVar10) + F32LO(dVar10))
    ;
  }
  if (cVar18 == '\0') {
    uVar11 = CONCAT44(piVar6[3],SUB84(dVar10,0));
    fVar8 = (float)(uint)piVar5[3];
  }
  else {
    uVar11 = *(ulonglong *)(unsigned)(piVar6 + 3);
    fVar8 = (float)((ulonglong)*(undefined8 *)(unsigned)(piVar5 + 3) >> 0x20);
  }
  if (cVar17 == '\0') {
    uVar11 = (ulonglong)(uint)(fVar8 * (float)(uVar11 >> 0x20) + (float)uVar11);
  }
  if (cVar18 == '\0') {
    fVar8 = (float)(uint)piVar5[4];
    uVar11 = CONCAT44(piVar6[4],(int)uVar11);
  }
  else {
    fVar8 = (float)((ulonglong)*(undefined8 *)(unsigned)(piVar5 + 4) >> 0x20);
    uVar11 = *(ulonglong *)(unsigned)(piVar6 + 4);
  }
  if (cVar17 == '\0') {
    fVar14 = (float)(uVar11 >> 0x20);
    uVar11 = CONCAT44(fVar14,fVar8 * fVar14 + (float)uVar11);
  }
  dVar10 = dVar15;
  if (cVar18 == '\0') {
    dVar10 = CONCAT44D((int)uVar11,in_fr7);
  }
  if (cVar17 == '\0') {
    bVar16 = F32HI(dVar10) < 0.0;
    fVar8 = F32HI(in_xd0);
    in_xd0 = CONCAT44D(fVar8,F32LO(in_xd0) - fVar8);
  }
  else {
    bVar16 = dVar10 < (double)(uVar11 & 0xffffffff00000000);
    in_xd0 = in_xd0 - in_xd0;
  }
  if (bVar16) {
    if (cVar17 == '\0') {
      in_xd0 = CONCAT44D(F32HI(in_xd0) * -1.0,SUB84(in_xd0,0));
    }
    else {
      in_xd0 = in_xd0 * -0.0078125;
    }
  }
  if (cVar18 == '\0') {
    dVar7 = CONCAT44D(piVar6[1],piVar5[1]);
    dVar10 = (double)((longlong)in_xd0 << 0x20);
  }
  else {
    dVar15 = *(double *)(unsigned)(piVar5 + 1);
    dVar7 = *(double *)(unsigned)(piVar6 + 1);
    dVar10 = in_xd4;
  }
  fVar14 = F32HI(in_xd0);
  fVar8 = F32HI(dVar10);
  if (cVar17 == '\0') {
    fVar9 = fVar8 * F32HI(dVar7) + F32LO(dVar7) * fVar14;
  }
  else {
    fVar9 = SUB84(dVar7 * in_xd0,0);
  }
  pdVar3 = (double *)(unsigned)((int)ar7 + 4);
  pdVar2 = ar7 + 1;
  pdVar1 = (double *)(unsigned)((int)ar7 + 0xc);
  if (cVar18 == '\0') {
    *(float *)(unsigned)ar7 = fVar9;
    dVar10 = CONCAT44D(piVar6[2],piVar5[2]);
  }
  else {
    *ar7 = dVar15;
    dVar15 = *(double *)(unsigned)(piVar5 + 2);
    dVar10 = *(double *)(unsigned)(piVar6 + 2);
  }
  if (cVar17 == '\0') {
    fVar9 = fVar8 * F32HI(dVar10) + F32LO(dVar10) * fVar14;
  }
  else {
    fVar9 = SUB84(dVar10 * in_xd0,0);
  }
  if (cVar18 == '\0') {
    *(float *)(unsigned)pdVar3 = fVar9;
    dVar10 = CONCAT44D(piVar6[3],piVar5[3]);
  }
  else {
    *pdVar3 = dVar15;
    dVar15 = *(double *)(unsigned)(piVar5 + 3);
    dVar10 = *(double *)(unsigned)(piVar6 + 3);
  }
  if (cVar17 == '\0') {
    fVar9 = fVar8 * F32HI(dVar10) + F32LO(dVar10) * fVar14;
  }
  else {
    fVar9 = SUB84(dVar10 * in_xd0,0);
  }
  if (cVar18 == '\0') {
    *(float *)(unsigned)pdVar2 = fVar9;
    dVar10 = CONCAT44D(piVar6[4],piVar5[4]);
  }
  else {
    *pdVar2 = dVar15;
    dVar15 = *(double *)(unsigned)(piVar5 + 4);
    dVar10 = *(double *)(unsigned)(piVar6 + 4);
  }
  if (cVar17 == '\0') {
    fVar9 = F32HI(dVar10);
    dVar10 = CONCAT44D(fVar9,fVar8 * fVar9 + F32LO(dVar10) * fVar14);
  }
  else {
    dVar10 = dVar10 * in_xd0;
  }
  if (cVar18 == '\0') {
    *(int *)(unsigned)pdVar1 = SUB84(dVar10,0);
    fVar14 = *(float *)(unsigned)pdVar3;
    fVar8 = *(float *)(unsigned)pdVar2;
    dVar10 = CONCAT44D((int)(D2U(dVar10) >> 0x20),fVar8);
    fVar9 = fVar14;
    dVar7 = *pdVar3;
  }
  else {
    *pdVar1 = dVar15;
    fVar14 = (float)((ulonglong)*pdVar3 >> 0x20);
    dVar15 = *pdVar2;
    fVar9 = F32LO(dVar15);
    fVar8 = F32HI(dVar15);
    dVar7 = dVar15;
  }
  if (cVar17 == '\0') {
    fVar8 = F32LO(dVar10) * fVar8;
  }
  else {
    fVar8 = SUB84(dVar10 * dVar7,0);
  }
  if (cVar18 == '\0') {
    dVar10 = CONCAT44D(*(undefined4 *)(unsigned)pdVar1,*(undefined4 *)(unsigned)ar7);
  }
  else {
    dVar10 = *pdVar1;
    in_xd4 = *ar7;
  }
  if (cVar17 == '\0') {
    fVar8 = fVar14 * fVar9 + fVar8;
  }
  fVar9 = F32HI(dVar10);
  fVar14 = F32LO(dVar10);
  dVar7 = in_xd4;
  if (cVar18 == '\0') {
    dVar10 = (double)((ulonglong)(uint)fVar9 << 0x20);
    dVar7 = CONCAT44D(fVar14,fVar8);
  }
  if (cVar17 == '\0') {
    dVar7 = CONCAT44D((int)(D2U(dVar7) >> 0x20),
                             F32HI(dVar10) * fVar9 + F32LO(dVar7));
  }
  fVar8 = fVar14;
  if (cVar18 != '\0') {
    fVar8 = F32HI(in_xd4);
  }
  if (cVar17 == '\0') {
    dVar7 = CONCAT44D((int)(D2U(dVar7) >> 0x20),fVar8 * fVar14 + F32LO(dVar7));
  }
  dVar10 = dVar15;
  if (cVar18 == '\0') {
    dVar10 = CONCAT44D(SUB84(dVar7,0),fVar14);
  }
  if (cVar17 == '\0') {
    dVar10 = CONCAT44D(SQRT(F32HI(dVar10)),SUB84(dVar10,0));
  }
  else {
    dVar10 = SQRT(dVar10);
  }
  if (cVar18 == '\0') {
    dVar7 = CONCAT44D((int)(D2U(dVar7) >> 0x20),(int)(D2U(dVar10) >> 0x20));
    in_fr9 = SUB84(dVar10,0);
    dVar10 = dVar15;
  }
  if (cVar17 == '\0') {
    fVar8 = 1.0 / F32LO(dVar7);
    dVar15 = CONCAT44D(fVar8,in_fr9);
    dVar7 = CONCAT44D(F32HI(dVar7) * fVar8,SUB84(dVar7,0));
  }
  else {
    dVar15 = CONCAT44D(0x3f800000,in_fr9) / dVar7;
    fVar8 = F32HI(dVar15);
    dVar7 = dVar7 * dVar15;
  }
  uVar12 = (undefined4)(D2U(dVar7) >> 0x20);
  if (cVar18 == '\0') {
    *(undefined4 *)(unsigned)ar7 = uVar12;
    dVar7 = CONCAT44D(uVar12,*(float *)(unsigned)pdVar3);
  }
  else {
    *ar7 = dVar7;
    dVar10 = *pdVar3;
  }
  if (cVar17 == '\0') {
    fVar14 = F32LO(dVar7) * fVar8;
  }
  else {
    fVar14 = SUB84(dVar7 * dVar15,0);
  }
  if (cVar18 == '\0') {
    *(float *)(unsigned)pdVar3 = fVar14;
    dVar7 = CONCAT44D(*(float *)(unsigned)pdVar2,fVar14);
  }
  else {
    *pdVar3 = dVar10;
    dVar7 = *pdVar2;
  }
  if (cVar17 == '\0') {
    dVar7 = CONCAT44D(F32HI(dVar7) * fVar8,SUB84(dVar7,0));
  }
  else {
    dVar7 = dVar7 * dVar15;
  }
  fVar14 = F32HI(dVar7);
  if (cVar18 == '\0') {
    *(float *)(unsigned)pdVar2 = fVar14;
    dVar7 = CONCAT44D(fVar14,*(undefined4 *)(unsigned)pdVar1);
  }
  else {
    *pdVar2 = dVar7;
    dVar10 = *pdVar1;
  }
  if (cVar17 == '\0') {
    fVar8 = F32LO(dVar7) * fVar8;
  }
  else {
    fVar8 = SUB84(dVar7 * dVar15,0);
  }
  if (cVar18 == '\0') {
    *(float *)(unsigned)pdVar1 = fVar8;
  }
  else {
    *pdVar1 = dVar10;
  }
  return 0x10;
}

__asm__(".globl _FUN_8c21c1b0\n.set _FUN_8c21c1b0, _FUN_8c21c1b0_def\n");
