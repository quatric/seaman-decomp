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
undefined4 * FUN_8c254b94_def(int ar4,int ar5,int ar6,int *ar7)

{
  ring[rp++ & 255] = "FUN_8c254b94";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 60; for (int i_ = 0; i_ < 60; i_++) z_[i_] = 0; }
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  double in_dr0 = 0;
  double dVar6;
  double dVar7;
  float fVar8;
  double dVar9;
  undefined4 uVar11;
  double dVar10;
  float fVar12;
  undefined4 in_fr5 = 0;
  uint uVar13;
  float fVar14;
  float fVar15;
  double in_dr6 = 0;
  float fVar16;
  undefined4 in_fr9 = 0;
  double dVar17;
  double dVar18;
  undefined4 in_fr11 = 0;
  double dVar19;
  undefined4 uVar20;
  undefined8 in_dr12 = 0;
  float fVar21;
  double in_xd0 = 0;
  double in_xd2 = 0;
  double dVar22;
  double in_xd4 = 0;
  double in_xd6 = 0;
  double in_xd8 = 0;
  double in_xd10 = 0;
  undefined4 in_PR = 0;
  char cVar23;
  char cVar24;
  
  cVar24 = '\0';
  cVar23 = '\0';
  (*(undefined4 *)(fr0_ - 0x14)) = (undefined4)((ulonglong)in_dr12 >> 0x20);
  (*(undefined4 *)(fr0_ - 0x18)) = in_PR;
  (vsp = ((unsigned long)(fr0_ - 60)), FUN_8c010794(8,((undefined1 *)(fr0_ - 0x20)),((undefined1 *)(unsigned)0x8c271d88),vr7));
  uVar20 = (undefined4)in_dr12;
  iVar1 = (vsp = ((unsigned long)(fr0_ - 60)), libgcc_divide_helper_0106dc(ar5 + ar6 + -1,ar6,vr6,vr7));
  iVar3 = iVar1 * 0x10 + ar4;
  piVar4 = (int *)(unsigned)(ar5 * 0x10 + ar4);
  iVar1 = (vsp = ((unsigned long)(fr0_ - 60)), libgcc_divide_helper_0106dc(ar5 + 1,ar6,vr6,vr7));
  piVar5 = (int *)(unsigned)(iVar1 * 0x10 + ar4);
  iVar1 = (vsp = ((unsigned long)(fr0_ - 60)), libgcc_divide_helper_0106dc(ar5 + 2,ar6,vr6,vr7));
  iVar1 = ar4 + iVar1 * 0x10;
  fVar8 = (float)(*piVar5 - *piVar4);
  dVar9 = (double)(ulonglong)(uint)fVar8;
  dVar19 = in_xd2;
  if (cVar24 == '\0') {
    dVar19 = CONCAT44D(fVar8,in_fr5);
  }
  uVar13 = (uint)(D2U(dVar19) >> 0x20);
  dVar22 = dVar19;
  if (cVar23 != '\0' || 0.0 <= fVar8) {
    if (cVar24 == '\0') {
      dVar9 = (double)(ulonglong)uVar13;
      dVar22 = in_xd2;
    }
  }
  else {
    if (cVar24 == '\0') {
      dVar9 = (double)(ulonglong)uVar13;
      in_dr0 = CONCAT44D((int)((ulonglong)in_dr0 >> 0x20),0x4f800000);
      dVar22 = in_xd2;
    }
    else {
      in_xd0 = -1.8629950226301174e-249;
    }
    if (cVar23 == '\0') {
      dVar9 = (double)(ulonglong)(uint)(F32LO(dVar9) + F32LO(in_dr0));
    }
    else {
      dVar9 = dVar9 + in_dr0;
    }
  }
  if (cVar24 == '\0') {
    (*(undefined4 *)(fr0_ + (int)0xffffffe4)) = CONCAT44D((*(undefined4 *)(fr0_ - 0x18)),SUB84(dVar9,0));
  }
  else {
    (*(undefined4 *)(fr0_ + (int)0xffffffe4)) = dVar22;
  }
  iVar2 = *piVar4;
  fVar8 = (float)iVar2;
  dVar9 = CONCAT44D((int)(D2U(dVar9) >> 0x20),fVar8);
  if (iVar2 < 0) {
    if (cVar23 == '\0') {
      dVar9 = CONCAT44D(0x4f800000,fVar8 + 4.2949673e+09);
    }
    else {
      dVar9 = CONCAT44D(0x4f800000,fVar8) + CONCAT44D(0x4f800000,fVar8);
    }
  }
  if (cVar24 == '\0') {
    in_dr0 = CONCAT44D((int)((ulonglong)in_dr0 >> 0x20),(*(undefined4 *)(unsigned)(unsigned)0x8c4aad54));
  }
  else {
    in_xd0 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4aad58),(*(undefined4 *)(unsigned)(unsigned)0x8c4aad54));
  }
  if (cVar23 == '\0') {
    fVar8 = F32LO(in_dr0) - F32LO(dVar9);
  }
  else {
    fVar8 = SUB84(in_dr0 - dVar9,0);
  }
  iVar2 = (uint)(0 < *piVar5 - iVar2) * 4;
  if (cVar24 == '\0') {
    dVar9 = CONCAT44D((int)(D2U(dVar9) >> 0x20),*(undefined4 *)(unsigned)(((undefined1 *)(fr0_ - 0x20)) + iVar2));
    in_xd0 = CONCAT44D(fVar8,SUB84(dVar19,0));
  }
  else {
    dVar22 = *(double *)(unsigned)(((undefined1 *)(fr0_ - 0x20)) + iVar2);
  }
  if (cVar23 == '\0') {
    in_xd0 = CONCAT44D(F32HI(in_xd0) / F32LO(dVar9),SUB84(in_xd0,0));
  }
  else {
    in_xd0 = in_xd0 / dVar9;
  }
  uVar11 = (undefined4)(D2U(dVar9) >> 0x20);
  dVar9 = CONCAT44D(uVar11,0x3f800000);
  if (cVar23 == '\0') {
    dVar9 = CONCAT44D(uVar11,0x40000000);
  }
  else {
    dVar9 = dVar9 + dVar9;
  }
  if (cVar24 == '\0') {
    dVar19 = CONCAT44D(0x3f000000,in_fr11);
    uVar11 = (undefined4)((ulonglong)in_xd0 >> 0x20);
    in_xd0 = CONCAT44D(uVar11,uVar11);
  }
  else {
    dVar19 = 0.1250000293366611;
    in_xd4 = in_xd0;
  }
  if (cVar23 == '\0') {
    fVar14 = F32HI(in_xd0);
    in_xd0 = CONCAT44D(fVar14,F32LO(in_xd0) * fVar14);
  }
  else {
    in_xd0 = in_xd0 * in_xd0;
  }
  fVar16 = F32HI(in_xd0);
  fVar14 = F32LO(in_xd0);
  dVar17 = in_xd4;
  dVar6 = in_xd0;
  if (cVar24 == '\0') {
    in_dr6 = CONCAT44D((int)((ulonglong)in_dr6 >> 0x20),fVar16);
    dVar17 = CONCAT44D(fVar14,in_fr9);
    dVar6 = in_xd6;
  }
  if (cVar23 == '\0') {
    dVar17 = CONCAT44D(F32HI(dVar17) * F32LO(dVar9),SUB84(dVar17,0));
    in_dr6 = CONCAT44D((int)((ulonglong)in_dr6 >> 0x20),F32LO(in_dr6) * fVar14);
  }
  else {
    dVar17 = dVar17 * dVar9;
    in_dr6 = in_dr6 * in_xd0;
  }
  uVar11 = (undefined4)(D2U(dVar17) >> 0x20);
  dVar10 = dVar17;
  if (cVar24 == '\0') {
    dVar10 = CONCAT44D(uVar11,SUB84(dVar9,0));
  }
  if (cVar23 == '\0') {
    dVar10 = CONCAT44D(F32HI(dVar10) - fVar16,SUB84(dVar10,0));
  }
  else {
    dVar10 = dVar10 - in_xd0;
  }
  fVar15 = F32LO(in_dr6);
  dVar9 = dVar6;
  if (cVar24 == '\0') {
    dVar19 = CONCAT44D((int)(D2U(dVar19) >> 0x20),fVar15);
    dVar9 = in_xd10;
  }
  if (cVar23 == '\0') {
    dVar10 = CONCAT44D(F32HI(dVar10) - fVar15,SUB84(dVar10,0));
  }
  else {
    dVar10 = dVar10 - in_dr6;
  }
  dVar7 = dVar10;
  if (cVar24 == '\0') {
    dVar17 = CONCAT44D(uVar11,(int)(D2U(dVar10) >> 0x20));
    dVar7 = in_xd8;
  }
  fVar21 = F32HI(dVar19);
  if (cVar23 == '\0') {
    dVar17 = CONCAT44D((int)(D2U(dVar17) >> 0x20),F32LO(dVar17) * fVar21);
  }
  else {
    dVar17 = dVar17 * dVar19;
  }
  if (cVar24 == '\0') {
    dVar10 = CONCAT44D(0x3fc00000,SUB84(dVar10,0));
  }
  else {
    dVar10 = 8.000001899898052;
  }
  if (cVar24 == '\0') {
    fVar8 = 2.5;
  }
  fVar12 = F32HI(dVar10);
  if (cVar23 == '\0') {
    dVar19 = CONCAT44D(fVar21,F32LO(dVar19) * fVar12);
  }
  else {
    dVar19 = dVar19 * dVar10;
  }
  if (cVar24 == '\0') {
    in_xd4 = CONCAT44D(fVar14,fVar8);
  }
  fVar8 = F32HI(dVar19);
  if (cVar23 == '\0') {
    in_xd4 = CONCAT44D(F32HI(in_xd4) * F32LO(in_xd4),SUB84(in_xd4,0));
    in_xd0 = CONCAT44D(fVar16 * fVar8,fVar14);
  }
  else {
    in_xd4 = in_xd4 * in_xd4;
    in_xd0 = in_xd0 * dVar19;
  }
  if (cVar24 == '\0') {
    dVar10 = CONCAT44D(fVar12,SUB84(dVar19,0));
    dVar9 = dVar22;
  }
  if (cVar23 == '\0') {
    fVar15 = fVar15 - F32LO(in_xd0);
  }
  else {
    fVar15 = SUB84(in_dr6 - in_xd0,0);
  }
  if (cVar23 == '\0') {
    dVar10 = CONCAT44D((int)(D2U(dVar10) >> 0x20),
                              F32LO(dVar10) - F32HI(in_xd4));
    in_xd0 = CONCAT44D(F32HI(in_xd0) - F32LO(dVar19),SUB84(in_xd0,0));
  }
  else {
    dVar10 = dVar10 - in_xd4;
    in_xd0 = in_xd0 - dVar19;
  }
  dVar22 = dVar9;
  if (cVar24 == '\0') {
    dVar22 = CONCAT44D(SUB84(dVar10,0),fVar15);
  }
  if (cVar23 == '\0') {
    dVar22 = CONCAT44D(F32HI(dVar22) + 1.0,SUB84(dVar22,0));
  }
  else {
    dVar22 = dVar22 + CONCAT44D(0x3f800000,SUB84(in_xd4,0));
  }
  fVar14 = F32HI(dVar17);
  dVar18 = in_xd0;
  if (cVar24 == '\0') {
    dVar10 = CONCAT44D((int)(D2U(dVar10) >> 0x20),fVar14);
    fVar14 = F32HI(dVar9);
    dVar18 = CONCAT44D((int)((ulonglong)in_xd0 >> 0x20),SUB84(dVar17,0));
  }
  if (cVar23 == '\0') {
    dVar18 = CONCAT44D(F32HI(dVar18) + F32LO(dVar10),SUB84(dVar18,0));
  }
  else {
    dVar18 = dVar18 + dVar10;
  }
  fVar16 = F32HI(dVar22);
  dVar9 = dVar22;
  if (cVar24 == '\0') {
    dVar9 = CONCAT44D(fVar16,uVar20);
  }
  if (cVar23 == '\0') {
    dVar17 = CONCAT44D((float)(uint)piVar5[1],(float)*(int *)(unsigned)(iVar1 + 4));
  }
  else {
    dVar17 = (double)piVar5[1];
  }
  if (cVar24 == '\0') {
    dVar6 = CONCAT44D(SUB84(dVar22,0),SUB84(in_xd0,0));
  }
  if (cVar23 == '\0') {
    fVar8 = F32HI(dVar6) * fVar8;
  }
  else {
    fVar8 = (float)((ulonglong)(dVar6 * dVar19) >> 0x20);
  }
  if (cVar23 == '\0') {
    fVar15 = (float)(uint)piVar4[1];
    dVar19 = CONCAT44D(fVar15,(float)*(int *)(unsigned)(iVar3 + 4));
    dVar9 = CONCAT44D(F32HI(dVar9) * fVar15,SUB84(dVar9,0));
  }
  else {
    dVar19 = (double)piVar4[1];
    dVar9 = dVar9 * dVar19;
  }
  uVar20 = SUB84(dVar18,0);
  dVar6 = dVar7;
  if (cVar24 == '\0') {
    dVar6 = CONCAT44D(uVar20,SUB84(dVar19,0));
  }
  fVar15 = F32HI(dVar18);
  if (cVar23 == '\0') {
    fVar21 = fVar8 * F32LO(dVar17) +
             fVar15 * F32HI(dVar17) +
             F32HI(dVar6) * F32LO(dVar6) + F32HI(dVar9);
    dVar9 = CONCAT44D(fVar21,SUB84(dVar9,0));
    iVar2 = (int)fVar21;
  }
  else {
    iVar2 = (int)dVar9;
  }
  dVar19 = dVar22;
  if (cVar24 == '\0') {
    dVar19 = CONCAT44D(fVar16,SUB84(dVar9,0));
  }
  *ar7 = iVar2;
  if (cVar23 == '\0') {
    dVar9 = CONCAT44D((float)(uint)piVar5[2],(float)*(int *)(unsigned)(iVar1 + 8));
  }
  else {
    dVar9 = (double)piVar5[2];
  }
  if (cVar23 == '\0') {
    fVar21 = (float)(uint)piVar4[2];
    dVar6 = CONCAT44D(fVar21,(float)*(int *)(unsigned)(iVar3 + 8));
    dVar19 = CONCAT44D(F32HI(dVar19) * fVar21,SUB84(dVar19,0));
  }
  else {
    dVar6 = (double)piVar4[2];
    dVar19 = dVar19 * dVar6;
  }
  dVar17 = dVar7;
  if (cVar24 == '\0') {
    dVar17 = CONCAT44D(uVar20,SUB84(dVar6,0));
  }
  if (cVar23 == '\0') {
    iVar2 = (int)(fVar8 * F32LO(dVar9) +
                 fVar15 * F32HI(dVar9) +
                 F32HI(dVar17) * F32LO(dVar17) +
                 F32HI(dVar19));
  }
  else {
    iVar2 = (int)dVar19;
  }
  ar7[1] = iVar2;
  if (cVar24 == '\0') {
    fVar14 = (float)*(int *)(unsigned)(iVar1 + 0xc);
  }
  if (cVar23 == '\0') {
    dVar9 = CONCAT44D((float)(uint)piVar5[3],(float)*(int *)(unsigned)(iVar1 + 0xc));
  }
  else {
    dVar9 = (double)piVar5[3];
  }
  if (cVar23 == '\0') {
    fVar21 = (float)(uint)piVar4[3];
    dVar19 = CONCAT44D(fVar21,(float)*(int *)(unsigned)(iVar3 + 0xc));
    fVar16 = fVar16 * fVar21;
  }
  else {
    dVar19 = (double)piVar4[3];
    fVar16 = (float)((ulonglong)(dVar22 * dVar19) >> 0x20);
  }
  if (cVar24 == '\0') {
    dVar7 = CONCAT44D(uVar20,SUB84(dVar19,0));
  }
  if (cVar23 == '\0') {
    fVar16 = F32HI(dVar7) * F32LO(dVar7) + fVar16;
  }
  if (cVar24 == '\0') {
    dVar18 = (double)((ulonglong)(uint)fVar15 << 0x20);
    dVar9 = CONCAT44D((int)(D2U(dVar9) >> 0x20),fVar16);
  }
  if (cVar23 == '\0') {
    iVar1 = (int)(fVar8 * fVar14 +
                 F32HI(dVar18) * F32HI(dVar9) +
                 SUB84(dVar9,0));
  }
  else {
    iVar1 = (int)dVar9;
  }
  ar7[2] = iVar1;
  return ((undefined4 *)(unsigned)0x8c254e64);
}

__asm__(".globl _FUN_8c254b94\n.set _FUN_8c254b94, _FUN_8c254b94_def\n");
