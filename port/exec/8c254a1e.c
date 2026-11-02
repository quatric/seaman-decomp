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
undefined4 FUN_8c254a1e_def(int ar4,int ar5,int ar6,double *ar7)

{
  ring[rp++ & 255] = "FUN_8c254a1e";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 52; for (int i_ = 0; i_ < 52; i_++) z_[i_] = 0; }
  double dVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  double in_dr0 = 0;
  double dVar7;
  float fVar8;
  float fVar9;
  undefined4 uVar10;
  double dVar11;
  double dVar12;
  ulonglong uVar13;
  undefined4 in_fr5 = 0;
  uint uVar15;
  float fVar16;
  double dVar14;
  float fVar17;
  double in_dr6 = 0;
  undefined4 in_fr9 = 0;
  double dVar18;
  double dVar19;
  undefined4 in_fr11 = 0;
  double dVar20;
  float fVar21;
  double in_xd0 = 0;
  double in_xd2 = 0;
  double dVar22;
  double in_xd4 = 0;
  double in_xd6 = 0;
  double in_xd8 = 0;
  double in_xd10 = 0;
  undefined4 in_PR = 0;
  char in_FPSCR_PR = 0;
  char in_FPSCR_SZ = 0;
  
  (*(undefined4 *)(fr0_ - 0x14)) = in_PR;
  (vsp = ((unsigned long)(fr0_ - 52)), FUN_8c010794(8,((undefined1 *)(fr0_ - 0x1c)),((undefined1 *)(unsigned)0x8c271d80),vr7));
  iVar2 = (vsp = ((unsigned long)(fr0_ - 52)), libgcc_divide_helper_0106dc(ar5 + ar6 + -1,ar6,vr6,vr7));
  iVar4 = iVar2 * 0x10 + ar4;
  piVar5 = (int *)(unsigned)(ar5 * 0x10 + ar4);
  iVar2 = (vsp = ((unsigned long)(fr0_ - 52)), libgcc_divide_helper_0106dc(ar5 + 1,ar6,vr6,vr7));
  piVar6 = (int *)(unsigned)(iVar2 * 0x10 + ar4);
  iVar2 = (vsp = ((unsigned long)(fr0_ - 52)), libgcc_divide_helper_0106dc(ar5 + 2,ar6,vr6,vr7));
  iVar2 = ar4 + iVar2 * 0x10;
  fVar8 = (float)(*piVar6 - *piVar5);
  dVar11 = (double)(ulonglong)(uint)fVar8;
  dVar20 = in_xd2;
  if (in_FPSCR_SZ == '\0') {
    dVar20 = CONCAT44D(fVar8,in_fr5);
  }
  uVar15 = (uint)(D2U(dVar20) >> 0x20);
  dVar22 = dVar20;
  if (in_FPSCR_PR != '\0' || 0.0 <= fVar8) {
    if (in_FPSCR_SZ == '\0') {
      dVar11 = (double)(ulonglong)uVar15;
      dVar22 = in_xd2;
    }
  }
  else {
    if (in_FPSCR_SZ == '\0') {
      dVar11 = (double)(ulonglong)uVar15;
      in_dr0 = CONCAT44D((int)((ulonglong)in_dr0 >> 0x20),0x4f800000);
      dVar22 = in_xd2;
    }
    else {
      in_xd0 = -1.8629950226301174e-249;
    }
    if (in_FPSCR_PR == '\0') {
      dVar11 = (double)(ulonglong)(uint)(F32LO(dVar11) + F32LO(in_dr0));
    }
    else {
      dVar11 = dVar11 + in_dr0;
    }
  }
  if (in_FPSCR_SZ == '\0') {
    (*(undefined4 *)(fr0_ + (int)0xffffffe8)) = CONCAT44D((*(undefined4 *)(fr0_ - 0x14)),SUB84(dVar11,0));
  }
  else {
    (*(undefined4 *)(fr0_ + (int)0xffffffe8)) = dVar22;
  }
  iVar3 = *piVar5;
  fVar8 = (float)iVar3;
  dVar11 = CONCAT44D((int)(D2U(dVar11) >> 0x20),fVar8);
  if (iVar3 < 0) {
    if (in_FPSCR_PR == '\0') {
      dVar11 = CONCAT44D(0x4f800000,fVar8 + 4.2949673e+09);
    }
    else {
      dVar11 = CONCAT44D(0x4f800000,fVar8) + CONCAT44D(0x4f800000,fVar8);
    }
  }
  if (in_FPSCR_SZ == '\0') {
    in_dr0 = CONCAT44D((int)((ulonglong)in_dr0 >> 0x20),(*(undefined4 *)(unsigned)(unsigned)0x8c4aad54));
  }
  else {
    in_xd0 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4aad58),(*(undefined4 *)(unsigned)(unsigned)0x8c4aad54));
  }
  if (in_FPSCR_PR == '\0') {
    fVar8 = F32LO(in_dr0) - F32LO(dVar11);
  }
  else {
    fVar8 = SUB84(in_dr0 - dVar11,0);
  }
  iVar3 = (uint)(0 < *piVar6 - iVar3) * 4;
  if (in_FPSCR_SZ == '\0') {
    dVar11 = CONCAT44D((int)(D2U(dVar11) >> 0x20),*(undefined4 *)(unsigned)(((undefined1 *)(fr0_ - 0x1c)) + iVar3));
    in_xd0 = CONCAT44D(fVar8,SUB84(dVar20,0));
  }
  else {
    dVar22 = *(double *)(unsigned)(((undefined1 *)(fr0_ - 0x1c)) + iVar3);
  }
  if (in_FPSCR_PR == '\0') {
    in_xd0 = CONCAT44D(F32HI(in_xd0) / F32LO(dVar11),SUB84(in_xd0,0));
  }
  else {
    in_xd0 = in_xd0 / dVar11;
  }
  uVar10 = (undefined4)(D2U(dVar11) >> 0x20);
  dVar11 = CONCAT44D(uVar10,0x3f800000);
  if (in_FPSCR_PR == '\0') {
    dVar11 = CONCAT44D(uVar10,0x40000000);
  }
  else {
    dVar11 = dVar11 + dVar11;
  }
  if (in_FPSCR_SZ == '\0') {
    dVar20 = CONCAT44D(0x3f000000,in_fr11);
    uVar10 = (undefined4)((ulonglong)in_xd0 >> 0x20);
    in_xd0 = CONCAT44D(uVar10,uVar10);
  }
  else {
    dVar20 = 0.1250000293366611;
    in_xd4 = in_xd0;
  }
  if (in_FPSCR_PR == '\0') {
    fVar16 = F32HI(in_xd0);
    in_xd0 = CONCAT44D(fVar16,F32LO(in_xd0) * fVar16);
  }
  else {
    in_xd0 = in_xd0 * in_xd0;
  }
  fVar9 = F32HI(in_xd0);
  fVar16 = F32LO(in_xd0);
  dVar18 = in_xd4;
  dVar14 = in_xd0;
  if (in_FPSCR_SZ == '\0') {
    in_dr6 = CONCAT44D((int)((ulonglong)in_dr6 >> 0x20),fVar9);
    dVar18 = CONCAT44D(fVar16,in_fr9);
    dVar14 = in_xd6;
  }
  if (in_FPSCR_PR == '\0') {
    dVar18 = CONCAT44D(F32HI(dVar18) * F32LO(dVar11),SUB84(dVar18,0));
    in_dr6 = CONCAT44D((int)((ulonglong)in_dr6 >> 0x20),F32LO(in_dr6) * fVar16);
  }
  else {
    dVar18 = dVar18 * dVar11;
    in_dr6 = in_dr6 * in_xd0;
  }
  uVar10 = (undefined4)(D2U(dVar18) >> 0x20);
  dVar12 = dVar18;
  if (in_FPSCR_SZ == '\0') {
    dVar12 = CONCAT44D(uVar10,SUB84(dVar11,0));
  }
  if (in_FPSCR_PR == '\0') {
    dVar12 = CONCAT44D(F32HI(dVar12) - fVar9,SUB84(dVar12,0));
  }
  else {
    dVar12 = dVar12 - in_xd0;
  }
  fVar17 = F32LO(in_dr6);
  dVar11 = dVar14;
  if (in_FPSCR_SZ == '\0') {
    dVar20 = CONCAT44D((int)(D2U(dVar20) >> 0x20),fVar17);
    dVar11 = in_xd10;
  }
  if (in_FPSCR_PR == '\0') {
    dVar12 = CONCAT44D(F32HI(dVar12) - fVar17,SUB84(dVar12,0));
  }
  else {
    dVar12 = dVar12 - in_dr6;
  }
  dVar7 = dVar12;
  if (in_FPSCR_SZ == '\0') {
    dVar18 = CONCAT44D(uVar10,(int)(D2U(dVar12) >> 0x20));
    dVar7 = in_xd8;
  }
  fVar21 = F32HI(dVar20);
  if (in_FPSCR_PR == '\0') {
    dVar18 = CONCAT44D((int)(D2U(dVar18) >> 0x20),F32LO(dVar18) * fVar21);
  }
  else {
    dVar18 = dVar18 * dVar20;
  }
  if (in_FPSCR_SZ == '\0') {
    dVar12 = CONCAT44D(0x3fc00000,SUB84(dVar12,0));
    fVar8 = 2.5;
  }
  else {
    dVar12 = 8.000001899898052;
  }
  if (in_FPSCR_PR == '\0') {
    dVar20 = CONCAT44D(fVar21,F32LO(dVar20) * F32HI(dVar12));
  }
  else {
    dVar20 = dVar20 * dVar12;
  }
  if (in_FPSCR_SZ == '\0') {
    in_xd4 = CONCAT44D(fVar16,fVar8);
  }
  fVar8 = F32HI(dVar20);
  if (in_FPSCR_PR == '\0') {
    in_xd4 = CONCAT44D(F32HI(in_xd4) * F32LO(in_xd4),SUB84(in_xd4,0));
    in_xd0 = CONCAT44D(fVar9 * fVar8,fVar16);
  }
  else {
    in_xd4 = in_xd4 * in_xd4;
    in_xd0 = in_xd0 * dVar20;
  }
  if (in_FPSCR_SZ == '\0') {
    dVar12 = (double)(D2U(dVar20) & 0xffffffff);
    dVar11 = dVar22;
  }
  if (in_FPSCR_PR == '\0') {
    fVar17 = fVar17 - F32LO(in_xd0);
  }
  else {
    fVar17 = SUB84(in_dr6 - in_xd0,0);
  }
  if (in_FPSCR_SZ == '\0') {
    dVar22 = CONCAT44D(*(undefined4 *)(unsigned)(iVar4 + 4),SUB84(dVar12,0));
  }
  else {
    dVar22 = *(double *)(unsigned)(iVar4 + 4);
  }
  if (in_FPSCR_PR == '\0') {
    dVar22 = CONCAT44D((int)(D2U(dVar22) >> 0x20),
                              F32LO(dVar22) - F32HI(in_xd4));
  }
  else {
    dVar22 = dVar22 - in_xd4;
  }
  if (in_FPSCR_PR == '\0') {
    in_xd0 = CONCAT44D(F32HI(in_xd0) - F32LO(dVar20),SUB84(in_xd0,0));
  }
  else {
    in_xd0 = in_xd0 - dVar20;
  }
  dVar12 = dVar11;
  if (in_FPSCR_SZ == '\0') {
    dVar12 = CONCAT44D(SUB84(dVar22,0),fVar17);
  }
  if (in_FPSCR_PR == '\0') {
    dVar12 = CONCAT44D(F32HI(dVar12) + 1.0,SUB84(dVar12,0));
  }
  else {
    dVar12 = dVar12 + CONCAT44D(0x3f800000,SUB84(in_xd4,0));
  }
  dVar19 = in_xd0;
  if (in_FPSCR_SZ == '\0') {
    dVar22 = CONCAT44D((int)(D2U(dVar22) >> 0x20),(int)(D2U(dVar18) >> 0x20));
    dVar19 = CONCAT44D((int)((ulonglong)in_xd0 >> 0x20),SUB84(dVar18,0));
    dVar18 = dVar11;
  }
  if (in_FPSCR_PR == '\0') {
    dVar19 = CONCAT44D(F32HI(dVar19) + F32LO(dVar22),SUB84(dVar19,0));
  }
  else {
    dVar19 = dVar19 + dVar22;
  }
  fVar16 = F32HI(dVar12);
  if (in_FPSCR_SZ == '\0') {
    dVar11 = CONCAT44D(piVar5[1],SUB84(in_xd4,0));
    dVar22 = CONCAT44D((int)(D2U(dVar22) >> 0x20),fVar16);
  }
  else {
    dVar11 = *(double *)(unsigned)(piVar5 + 1);
    dVar18 = dVar12;
  }
  if (in_FPSCR_PR == '\0') {
    dVar22 = CONCAT44D((int)(D2U(dVar22) >> 0x20),
                              F32LO(dVar22) * F32HI(dVar11));
  }
  else {
    dVar22 = dVar22 * dVar11;
  }
  dVar1 = dVar7;
  if (in_FPSCR_SZ == '\0') {
    dVar14 = CONCAT44D(SUB84(dVar12,0),SUB84(in_xd0,0));
    dVar1 = CONCAT44D(SUB84(dVar19,0),SUB84(dVar11,0));
  }
  if (in_FPSCR_PR == '\0') {
    dVar14 = CONCAT44D(F32HI(dVar14) * fVar8,SUB84(dVar14,0));
    dVar22 = (double)(ulonglong)
                     (uint)(F32HI(dVar1) * F32HI(dVar22) +
                           SUB84(dVar22,0));
  }
  else {
    dVar14 = dVar14 * dVar20;
  }
  uVar15 = (uint)(D2U(dVar19) >> 0x20);
  if (in_FPSCR_SZ == '\0') {
    uVar13 = CONCAT44(piVar6[1],SUB84(dVar22,0));
    dVar11 = CONCAT44D(uVar15,SUB84(dVar1,0));
  }
  else {
    uVar13 = *(ulonglong *)(unsigned)(piVar6 + 1);
    dVar11 = dVar19;
  }
  if (in_FPSCR_PR == '\0') {
    uVar13 = (ulonglong)
             (uint)(F32HI(dVar11) * (float)(uVar13 >> 0x20) + (float)uVar13);
  }
  fVar8 = F32HI(dVar14);
  if (in_FPSCR_SZ == '\0') {
    dVar20 = CONCAT44D(*(undefined4 *)(unsigned)(iVar2 + 4),(int)uVar13);
    dVar11 = CONCAT44D(fVar8,SUB84(dVar11,0));
  }
  else {
    dVar20 = *(double *)(unsigned)(iVar2 + 4);
    dVar11 = dVar14;
  }
  if (in_FPSCR_PR == '\0') {
    fVar9 = F32HI(dVar20);
    dVar20 = CONCAT44D(fVar9,F32HI(dVar11) * fVar9 + F32LO(dVar20));
  }
  if (in_FPSCR_SZ == '\0') {
    *(int *)(unsigned)ar7 = SUB84(dVar20,0);
    dVar11 = CONCAT44D(piVar5[2],SUB84(dVar11,0));
    dVar20 = CONCAT44D((int)(D2U(dVar20) >> 0x20),fVar16);
  }
  else {
    *ar7 = dVar18;
    dVar11 = *(double *)(unsigned)(piVar5 + 2);
    dVar18 = dVar12;
  }
  if (in_FPSCR_PR == '\0') {
    fVar9 = F32LO(dVar20) * F32HI(dVar11);
  }
  else {
    fVar9 = SUB84(dVar20 * dVar11,0);
  }
  if (in_FPSCR_SZ == '\0') {
    uVar13 = CONCAT44(*(undefined4 *)(unsigned)(iVar4 + 8),fVar9);
    dVar11 = CONCAT44D(SUB84(dVar19,0),SUB84(dVar11,0));
  }
  else {
    uVar13 = *(ulonglong *)(unsigned)(iVar4 + 8);
    dVar11 = dVar7;
  }
  if (in_FPSCR_PR == '\0') {
    uVar13 = (ulonglong)
             (uint)(F32HI(dVar11) * (float)(uVar13 >> 0x20) + (float)uVar13);
  }
  if (in_FPSCR_SZ == '\0') {
    uVar13 = CONCAT44(piVar6[2],(int)uVar13);
    dVar11 = CONCAT44D(uVar15,SUB84(dVar11,0));
  }
  else {
    uVar13 = *(ulonglong *)(unsigned)(piVar6 + 2);
    dVar11 = dVar19;
  }
  if (in_FPSCR_PR == '\0') {
    uVar13 = (ulonglong)
             (uint)(F32HI(dVar11) * (float)(uVar13 >> 0x20) + (float)uVar13);
  }
  if (in_FPSCR_SZ == '\0') {
    uVar13 = CONCAT44(*(undefined4 *)(unsigned)(iVar2 + 8),(int)uVar13);
    dVar14 = CONCAT44D(fVar8,SUB84(dVar11,0));
  }
  else {
    uVar13 = *(ulonglong *)(unsigned)(iVar2 + 8);
  }
  if (in_FPSCR_PR == '\0') {
    uVar13 = (ulonglong)
             (uint)(F32HI(dVar14) * (float)(uVar13 >> 0x20) + (float)uVar13);
  }
  uVar10 = (undefined4)uVar13;
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)(unsigned)((int)ar7 + 4) = uVar10;
    dVar11 = CONCAT44D(piVar5[3],SUB84(dVar14,0));
    uVar10 = *(undefined4 *)(unsigned)(iVar4 + 0xc);
  }
  else {
    *(double *)(unsigned)((int)ar7 + 4) = dVar18;
    dVar11 = *(double *)(unsigned)(piVar5 + 3);
    dVar18 = *(double *)(unsigned)(iVar4 + 0xc);
  }
  if (in_FPSCR_PR == '\0') {
    dVar12 = CONCAT44D(fVar16 * F32HI(dVar11),SUB84(dVar12,0));
  }
  else {
    dVar12 = dVar12 * dVar11;
  }
  if (in_FPSCR_SZ == '\0') {
    dVar7 = (double)((longlong)dVar19 << 0x20);
    uVar13 = CONCAT44(piVar6[3],uVar10);
  }
  else {
    uVar13 = *(ulonglong *)(unsigned)(piVar6 + 3);
  }
  if (in_FPSCR_PR == '\0') {
    dVar12 = CONCAT44D(F32HI(dVar7) * (float)uVar13 +
                              F32HI(dVar12),SUB84(dVar12,0));
  }
  if (in_FPSCR_SZ == '\0') {
    dVar19 = (double)((ulonglong)uVar15 << 0x20);
    uVar13 = CONCAT44((int)(uVar13 >> 0x20),(int)(D2U(dVar12) >> 0x20));
    dVar12 = dVar18;
  }
  if (in_FPSCR_PR == '\0') {
    uVar13 = (ulonglong)
             (uint)(F32HI(dVar19) * (float)(uVar13 >> 0x20) + (float)uVar13);
  }
  if (in_FPSCR_SZ == '\0') {
    uVar13 = CONCAT44(*(undefined4 *)(unsigned)(iVar2 + 0xc),(int)uVar13);
  }
  else {
    uVar13 = *(ulonglong *)(unsigned)(iVar2 + 0xc);
  }
  if (in_FPSCR_PR == '\0') {
    uVar13 = (ulonglong)(uint)(fVar8 * (float)(uVar13 >> 0x20) + (float)uVar13);
  }
  if (in_FPSCR_SZ == '\0') {
    *(int *)(unsigned)(ar7 + 1) = (int)uVar13;
  }
  else {
    ar7[1] = dVar12;
  }
  return 8;
}

__asm__(".globl _FUN_8c254a1e\n.set _FUN_8c254a1e, _FUN_8c254a1e_def\n");
