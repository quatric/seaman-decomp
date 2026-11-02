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
undefined4 * FUN_8c21c5ca_def(int ar4,int ar5,int ar6,int *ar7)

{
  ring[rp++ & 255] = "FUN_8c21c5ca";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 36; for (int i_ = 0; i_ < 36; i_++) z_[i_] = 0; }
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  undefined8 *puVar6;
  double in_dr0 = 0;
  double dVar7;
  double dVar8;
  float fVar9;
  double dVar10;
  undefined4 uVar12;
  double dVar11;
  float fVar13;
  undefined4 in_fr5 = 0;
  uint uVar14;
  float fVar15;
  float fVar16;
  double in_dr6 = 0;
  float fVar17;
  undefined4 in_fr9 = 0;
  double dVar18;
  double dVar19;
  undefined4 in_fr11 = 0;
  double dVar20;
  undefined4 uVar21;
  undefined8 in_dr12 = 0;
  float fVar22;
  double in_xd0 = 0;
  double in_xd2 = 0;
  double dVar23;
  double in_xd4 = 0;
  double in_xd6 = 0;
  double in_xd8 = 0;
  double in_xd10 = 0;
  undefined4 in_PR = 0;
  char in_FPSCR_PR = 0;
  char in_FPSCR_SZ = 0;
  
  if (in_FPSCR_SZ == '\0') {
    puVar6 = (undefined8 *)(unsigned)((int)&(*(undefined8 *)(fr0_ - 0x18)) + 4);
    (*(undefined8 *)(fr0_ - 0x18)) = CONCAT44((int)((ulonglong)in_dr12 >> 0x20),(undefined4)(*(undefined8 *)(fr0_ - 0x18)));
  }
  else {
    puVar6 = &(*(undefined8 *)(fr0_ - 0x18));
    (*(undefined8 *)(fr0_ - 0x18)) = in_dr12;
  }
  *(undefined4 *)(unsigned)((int)puVar6 + -4) = in_PR;
  (vsp = ((unsigned long)(fr0_ - 36)), FUN_8c010794(8,(undefined1 *)(unsigned)((int)puVar6 + -0xc),((undefined1 *)(unsigned)0x8c26d7a0),vr7));
  uVar21 = (undefined4)in_dr12;
  iVar1 = (vsp = ((unsigned long)(fr0_ - 36)), libgcc_divide_helper_0106dc(ar5 + ar6 + -1,ar6,vr6,vr7));
  iVar3 = iVar1 * 0x10 + ar4;
  piVar4 = (int *)(unsigned)(ar5 * 0x10 + ar4);
  iVar1 = (vsp = ((unsigned long)(fr0_ - 36)), libgcc_divide_helper_0106dc(ar5 + 1,ar6,vr6,vr7));
  piVar5 = (int *)(unsigned)(iVar1 * 0x10 + ar4);
  iVar1 = (vsp = ((unsigned long)(fr0_ - 36)), libgcc_divide_helper_0106dc(ar5 + 2,ar6,vr6,vr7));
  iVar1 = ar4 + iVar1 * 0x10;
  fVar9 = (float)(*piVar5 - *piVar4);
  dVar10 = (double)(ulonglong)(uint)fVar9;
  dVar20 = in_xd2;
  if (in_FPSCR_SZ == '\0') {
    dVar20 = CONCAT44D(fVar9,in_fr5);
  }
  uVar14 = (uint)(D2U(dVar20) >> 0x20);
  dVar23 = dVar20;
  if (in_FPSCR_PR != '\0' || 0.0 <= fVar9) {
    if (in_FPSCR_SZ == '\0') {
      dVar10 = (double)(ulonglong)uVar14;
      dVar23 = in_xd2;
    }
  }
  else {
    if (in_FPSCR_SZ == '\0') {
      dVar10 = (double)(ulonglong)uVar14;
      in_dr0 = CONCAT44D((int)((ulonglong)in_dr0 >> 0x20),0x4f800000);
      dVar23 = in_xd2;
    }
    else {
      in_xd0 = -1.8629950226301174e-249;
    }
    if (in_FPSCR_PR == '\0') {
      dVar10 = (double)(ulonglong)(uint)(F32LO(dVar10) + F32LO(in_dr0));
    }
    else {
      dVar10 = dVar10 + in_dr0;
    }
  }
  if (in_FPSCR_SZ == '\0') {
    *(int *)(unsigned)((int)puVar6 + -8) = SUB84(dVar10,0);
  }
  else {
    *(double *)(unsigned)((int)puVar6 + -8) = dVar23;
  }
  iVar2 = *piVar4;
  fVar9 = (float)iVar2;
  dVar10 = CONCAT44D((int)(D2U(dVar10) >> 0x20),fVar9);
  if (iVar2 < 0) {
    if (in_FPSCR_PR == '\0') {
      dVar10 = CONCAT44D(0x4f800000,fVar9 + 4.2949673e+09);
    }
    else {
      dVar10 = CONCAT44D(0x4f800000,fVar9) + CONCAT44D(0x4f800000,fVar9);
    }
  }
  if (in_FPSCR_SZ == '\0') {
    in_dr0 = CONCAT44D((int)((ulonglong)in_dr0 >> 0x20),(*(undefined4 *)(unsigned)(unsigned)0x8c4aad54));
  }
  else {
    in_xd0 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4aad58),(*(undefined4 *)(unsigned)(unsigned)0x8c4aad54));
  }
  if (in_FPSCR_PR == '\0') {
    fVar9 = F32LO(in_dr0) - F32LO(dVar10);
  }
  else {
    fVar9 = SUB84(in_dr0 - dVar10,0);
  }
  iVar2 = (uint)(0 < *piVar5 - iVar2) * 4;
  if (in_FPSCR_SZ == '\0') {
    dVar10 = CONCAT44D((int)(D2U(dVar10) >> 0x20),
                              *(undefined4 *)(unsigned)((int)puVar6 + iVar2 + -0xc));
    in_xd0 = CONCAT44D(fVar9,SUB84(dVar20,0));
  }
  else {
    dVar23 = *(double *)(unsigned)((int)puVar6 + iVar2 + -0xc);
  }
  if (in_FPSCR_PR == '\0') {
    in_xd0 = CONCAT44D(F32HI(in_xd0) / F32LO(dVar10),SUB84(in_xd0,0));
  }
  else {
    in_xd0 = in_xd0 / dVar10;
  }
  uVar12 = (undefined4)(D2U(dVar10) >> 0x20);
  dVar10 = CONCAT44D(uVar12,0x3f800000);
  if (in_FPSCR_PR == '\0') {
    dVar10 = CONCAT44D(uVar12,0x40000000);
  }
  else {
    dVar10 = dVar10 + dVar10;
  }
  if (in_FPSCR_SZ == '\0') {
    dVar20 = CONCAT44D(0x3f000000,in_fr11);
    uVar12 = (undefined4)((ulonglong)in_xd0 >> 0x20);
    in_xd0 = CONCAT44D(uVar12,uVar12);
  }
  else {
    dVar20 = 0.1250000293366611;
    in_xd4 = in_xd0;
  }
  if (in_FPSCR_PR == '\0') {
    fVar15 = F32HI(in_xd0);
    in_xd0 = CONCAT44D(fVar15,F32LO(in_xd0) * fVar15);
  }
  else {
    in_xd0 = in_xd0 * in_xd0;
  }
  fVar17 = F32HI(in_xd0);
  fVar15 = F32LO(in_xd0);
  dVar18 = in_xd4;
  dVar7 = in_xd0;
  if (in_FPSCR_SZ == '\0') {
    in_dr6 = CONCAT44D((int)((ulonglong)in_dr6 >> 0x20),fVar17);
    dVar18 = CONCAT44D(fVar15,in_fr9);
    dVar7 = in_xd6;
  }
  if (in_FPSCR_PR == '\0') {
    dVar18 = CONCAT44D(F32HI(dVar18) * F32LO(dVar10),SUB84(dVar18,0));
    in_dr6 = CONCAT44D((int)((ulonglong)in_dr6 >> 0x20),F32LO(in_dr6) * fVar15);
  }
  else {
    dVar18 = dVar18 * dVar10;
    in_dr6 = in_dr6 * in_xd0;
  }
  uVar12 = (undefined4)(D2U(dVar18) >> 0x20);
  dVar11 = dVar18;
  if (in_FPSCR_SZ == '\0') {
    dVar11 = CONCAT44D(uVar12,SUB84(dVar10,0));
  }
  if (in_FPSCR_PR == '\0') {
    dVar11 = CONCAT44D(F32HI(dVar11) - fVar17,SUB84(dVar11,0));
  }
  else {
    dVar11 = dVar11 - in_xd0;
  }
  fVar16 = F32LO(in_dr6);
  dVar10 = dVar7;
  if (in_FPSCR_SZ == '\0') {
    dVar20 = CONCAT44D((int)(D2U(dVar20) >> 0x20),fVar16);
    dVar10 = in_xd10;
  }
  if (in_FPSCR_PR == '\0') {
    dVar11 = CONCAT44D(F32HI(dVar11) - fVar16,SUB84(dVar11,0));
  }
  else {
    dVar11 = dVar11 - in_dr6;
  }
  dVar8 = dVar11;
  if (in_FPSCR_SZ == '\0') {
    dVar18 = CONCAT44D(uVar12,(int)(D2U(dVar11) >> 0x20));
    dVar8 = in_xd8;
  }
  fVar22 = F32HI(dVar20);
  if (in_FPSCR_PR == '\0') {
    dVar18 = CONCAT44D((int)(D2U(dVar18) >> 0x20),F32LO(dVar18) * fVar22);
  }
  else {
    dVar18 = dVar18 * dVar20;
  }
  if (in_FPSCR_SZ == '\0') {
    dVar11 = CONCAT44D(0x3fc00000,SUB84(dVar11,0));
  }
  else {
    dVar11 = 8.000001899898052;
  }
  if (in_FPSCR_SZ == '\0') {
    fVar9 = 2.5;
  }
  fVar13 = F32HI(dVar11);
  if (in_FPSCR_PR == '\0') {
    dVar20 = CONCAT44D(fVar22,F32LO(dVar20) * fVar13);
  }
  else {
    dVar20 = dVar20 * dVar11;
  }
  if (in_FPSCR_SZ == '\0') {
    in_xd4 = CONCAT44D(fVar15,fVar9);
  }
  fVar9 = F32HI(dVar20);
  if (in_FPSCR_PR == '\0') {
    in_xd4 = CONCAT44D(F32HI(in_xd4) * F32LO(in_xd4),SUB84(in_xd4,0));
    in_xd0 = CONCAT44D(fVar17 * fVar9,fVar15);
  }
  else {
    in_xd4 = in_xd4 * in_xd4;
    in_xd0 = in_xd0 * dVar20;
  }
  if (in_FPSCR_SZ == '\0') {
    dVar11 = CONCAT44D(fVar13,SUB84(dVar20,0));
    dVar10 = dVar23;
  }
  if (in_FPSCR_PR == '\0') {
    fVar16 = fVar16 - F32LO(in_xd0);
  }
  else {
    fVar16 = SUB84(in_dr6 - in_xd0,0);
  }
  if (in_FPSCR_PR == '\0') {
    dVar11 = CONCAT44D((int)(D2U(dVar11) >> 0x20),
                              F32LO(dVar11) - F32HI(in_xd4));
    in_xd0 = CONCAT44D(F32HI(in_xd0) - F32LO(dVar20),SUB84(in_xd0,0));
  }
  else {
    dVar11 = dVar11 - in_xd4;
    in_xd0 = in_xd0 - dVar20;
  }
  dVar23 = dVar10;
  if (in_FPSCR_SZ == '\0') {
    dVar23 = CONCAT44D(SUB84(dVar11,0),fVar16);
  }
  if (in_FPSCR_PR == '\0') {
    dVar23 = CONCAT44D(F32HI(dVar23) + 1.0,SUB84(dVar23,0));
  }
  else {
    dVar23 = dVar23 + CONCAT44D(0x3f800000,SUB84(in_xd4,0));
  }
  fVar15 = F32HI(dVar18);
  dVar19 = in_xd0;
  if (in_FPSCR_SZ == '\0') {
    dVar11 = CONCAT44D((int)(D2U(dVar11) >> 0x20),fVar15);
    fVar15 = F32HI(dVar10);
    dVar19 = CONCAT44D((int)((ulonglong)in_xd0 >> 0x20),SUB84(dVar18,0));
  }
  if (in_FPSCR_PR == '\0') {
    dVar19 = CONCAT44D(F32HI(dVar19) + F32LO(dVar11),SUB84(dVar19,0));
  }
  else {
    dVar19 = dVar19 + dVar11;
  }
  fVar17 = F32HI(dVar23);
  dVar10 = dVar23;
  if (in_FPSCR_SZ == '\0') {
    dVar10 = CONCAT44D(fVar17,uVar21);
  }
  if (in_FPSCR_PR == '\0') {
    dVar18 = CONCAT44D((float)(uint)piVar5[1],(float)*(int *)(unsigned)(iVar1 + 4));
  }
  else {
    dVar18 = (double)piVar5[1];
  }
  if (in_FPSCR_SZ == '\0') {
    dVar7 = CONCAT44D(SUB84(dVar23,0),SUB84(in_xd0,0));
  }
  if (in_FPSCR_PR == '\0') {
    fVar9 = F32HI(dVar7) * fVar9;
  }
  else {
    fVar9 = (float)((ulonglong)(dVar7 * dVar20) >> 0x20);
  }
  if (in_FPSCR_PR == '\0') {
    fVar16 = (float)(uint)piVar4[1];
    dVar20 = CONCAT44D(fVar16,(float)*(int *)(unsigned)(iVar3 + 4));
    dVar10 = CONCAT44D(F32HI(dVar10) * fVar16,SUB84(dVar10,0));
  }
  else {
    dVar20 = (double)piVar4[1];
    dVar10 = dVar10 * dVar20;
  }
  uVar21 = SUB84(dVar19,0);
  dVar7 = dVar8;
  if (in_FPSCR_SZ == '\0') {
    dVar7 = CONCAT44D(uVar21,SUB84(dVar20,0));
  }
  fVar16 = F32HI(dVar19);
  if (in_FPSCR_PR == '\0') {
    fVar22 = fVar9 * F32LO(dVar18) +
             fVar16 * F32HI(dVar18) +
             F32HI(dVar7) * F32LO(dVar7) + F32HI(dVar10)
    ;
    dVar10 = CONCAT44D(fVar22,SUB84(dVar10,0));
    iVar2 = (int)fVar22;
  }
  else {
    iVar2 = (int)dVar10;
  }
  dVar20 = dVar23;
  if (in_FPSCR_SZ == '\0') {
    dVar20 = CONCAT44D(fVar17,SUB84(dVar10,0));
  }
  *ar7 = iVar2;
  if (in_FPSCR_PR == '\0') {
    dVar10 = CONCAT44D((float)(uint)piVar5[2],(float)*(int *)(unsigned)(iVar1 + 8));
  }
  else {
    dVar10 = (double)piVar5[2];
  }
  if (in_FPSCR_PR == '\0') {
    fVar22 = (float)(uint)piVar4[2];
    dVar7 = CONCAT44D(fVar22,(float)*(int *)(unsigned)(iVar3 + 8));
    dVar20 = CONCAT44D(F32HI(dVar20) * fVar22,SUB84(dVar20,0));
  }
  else {
    dVar7 = (double)piVar4[2];
    dVar20 = dVar20 * dVar7;
  }
  dVar18 = dVar8;
  if (in_FPSCR_SZ == '\0') {
    dVar18 = CONCAT44D(uVar21,SUB84(dVar7,0));
  }
  if (in_FPSCR_PR == '\0') {
    iVar2 = (int)(fVar9 * F32LO(dVar10) +
                 fVar16 * F32HI(dVar10) +
                 F32HI(dVar18) * F32LO(dVar18) +
                 F32HI(dVar20));
  }
  else {
    iVar2 = (int)dVar20;
  }
  ar7[1] = iVar2;
  if (in_FPSCR_SZ == '\0') {
    fVar15 = (float)*(int *)(unsigned)(iVar1 + 0xc);
  }
  if (in_FPSCR_PR == '\0') {
    dVar10 = CONCAT44D((float)(uint)piVar5[3],(float)*(int *)(unsigned)(iVar1 + 0xc));
  }
  else {
    dVar10 = (double)piVar5[3];
  }
  if (in_FPSCR_PR == '\0') {
    fVar22 = (float)(uint)piVar4[3];
    dVar20 = CONCAT44D(fVar22,(float)*(int *)(unsigned)(iVar3 + 0xc));
    fVar17 = fVar17 * fVar22;
  }
  else {
    dVar20 = (double)piVar4[3];
    fVar17 = (float)((ulonglong)(dVar23 * dVar20) >> 0x20);
  }
  if (in_FPSCR_SZ == '\0') {
    dVar8 = CONCAT44D(uVar21,SUB84(dVar20,0));
  }
  if (in_FPSCR_PR == '\0') {
    fVar17 = F32HI(dVar8) * F32LO(dVar8) + fVar17;
  }
  if (in_FPSCR_SZ == '\0') {
    dVar19 = (double)((ulonglong)(uint)fVar16 << 0x20);
    dVar10 = CONCAT44D((int)(D2U(dVar10) >> 0x20),fVar17);
  }
  if (in_FPSCR_PR == '\0') {
    iVar1 = (int)(fVar9 * fVar15 +
                 F32HI(dVar19) * F32HI(dVar10) +
                 SUB84(dVar10,0));
  }
  else {
    iVar1 = (int)dVar10;
  }
  ar7[2] = iVar1;
  return ((undefined4 *)(unsigned)0x8c21c76c);
}

__asm__(".globl _FUN_8c21c5ca\n.set _FUN_8c21c5ca, _FUN_8c21c5ca_def\n");
