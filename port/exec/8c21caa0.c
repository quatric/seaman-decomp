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
uint FUN_8c21caa0_def(int ar4,int ar5,int ar6,int ar7)

{
  ring[rp++ & 255] = "FUN_8c21caa0";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 84; for (int i_ = 0; i_ < 84; i_++) z_[i_] = 0; }
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  int *piVar8;
  float fVar9;
  double in_dr0 = 0;
  float fVar10;
  float fVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  float fVar14;
  undefined4 uVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  float fVar19;
  float fVar20;
  undefined4 in_fr5 = 0;
  float fVar21;
  double dVar22;
  float fVar23;
  undefined4 in_fr7 = 0;
  double dVar24;
  undefined4 in_fr9 = 0;
  double dVar25;
  double dVar26;
  double dVar27;
  undefined4 in_fr13 = 0;
  double dVar28;
  undefined4 in_fr15 = 0;
  float fVar29;
  double dVar30;
  double dVar31;
  float fVar32;
  double in_xd0 = 0;
  double in_xd2 = 0;
  double in_xd4 = 0;
  double in_xd6 = 0;
  double dVar33;
  double in_xd8 = 0;
  double in_xd10 = 0;
  double in_xd12 = 0;
  double dVar34;
  double in_xd14 = 0;
  bool bVar35;
  undefined4 in_PR = 0;
  char cVar36;
  char cVar37;
  
  cVar37 = '\0';
  cVar36 = '\0';
  iVar1 = (vsp = ((unsigned long)(fr0_ - 84)), libgcc_divide_helper_0106dc(ar5 + ar6 + -1,ar6,vr6,vr7));
  piVar6 = (int *)(unsigned)(iVar1 * 0x10 + ar4);
  piVar8 = (int *)(unsigned)(ar5 * 0x10 + ar4);
  iVar1 = (vsp = ((unsigned long)(fr0_ - 84)), libgcc_divide_helper_0106dc(ar5 + 1,ar6,vr6,vr7));
  piVar7 = (int *)(unsigned)(iVar1 * 0x10 + ar4);
  iVar1 = (vsp = ((unsigned long)(fr0_ - 84)), libgcc_divide_helper_0106dc(ar5 + 2,ar6,vr6,vr7));
  piVar5 = (int *)(unsigned)(iVar1 * 0x10 + ar4);
  fVar10 = (float)*piVar7;
  if (*piVar7 < 0) {
    if (cVar36 == '\0') {
      fVar10 = fVar10 + 4.2949673e+09;
    }
    else {
      fVar10 = SUB84(CONCAT44D(0x4f800000,fVar10) + CONCAT44D(0x4f800000,fVar10),0);
    }
  }
  iVar1 = *piVar8;
  if (cVar36 == '\0') {
    dVar16 = CONCAT44D((float)iVar1,fVar10);
  }
  else {
    dVar16 = (double)iVar1;
  }
  if (iVar1 < 0) {
    if (cVar37 == '\0') {
      in_dr0 = CONCAT44D((int)((ulonglong)in_dr0 >> 0x20),0x4f800000);
    }
    else {
      in_xd0 = -1.8629950226301174e-249;
    }
    if (cVar36 == '\0') {
      dVar16 = CONCAT44D(F32HI(dVar16) + F32LO(in_dr0),SUB84(dVar16,0)
                               );
    }
    else {
      dVar16 = dVar16 + in_dr0;
    }
  }
  dVar22 = in_xd2;
  if (cVar37 == '\0') {
    dVar22 = CONCAT44D(SUB84(dVar16,0),in_fr5);
  }
  fVar10 = F32HI(dVar16);
  if (cVar36 == '\0') {
    dVar22 = CONCAT44D(F32HI(dVar22) - fVar10,SUB84(dVar22,0));
  }
  else {
    dVar22 = dVar22 - dVar16;
  }
  if (cVar36 == '\0') {
    bVar35 = 0.0 < F32HI(dVar22);
  }
  else {
    bVar35 = (double)((ulonglong)(uint)fVar10 << 0x20) < dVar22;
  }
  dVar16 = dVar22;
  if ((!bVar35) && (dVar16 = in_xd10, cVar37 == '\0')) {
    dVar16 = CONCAT44D(0x3f800000,SUB84(dVar22,0));
  }
  fVar10 = (float)*piVar5;
  if (*piVar5 < 0) {
    if (cVar36 == '\0') {
      fVar10 = fVar10 + 4.2949673e+09;
    }
    else {
      fVar10 = SUB84(CONCAT44D(0x4f800000,fVar10) + CONCAT44D(0x4f800000,fVar10),0);
    }
  }
  iVar1 = *piVar7;
  if (cVar36 == '\0') {
    dVar22 = CONCAT44D((float)iVar1,fVar10);
  }
  else {
    dVar22 = (double)iVar1;
  }
  if (iVar1 < 0) {
    if (cVar37 == '\0') {
      in_dr0 = CONCAT44D((int)((ulonglong)in_dr0 >> 0x20),0x4f800000);
    }
    else {
      in_xd0 = -1.8629950226301174e-249;
    }
    if (cVar36 == '\0') {
      dVar22 = CONCAT44D(F32HI(dVar22) + F32LO(in_dr0),SUB84(dVar22,0)
                               );
    }
    else {
      dVar22 = dVar22 + in_dr0;
    }
  }
  dVar24 = in_xd2;
  if (cVar37 == '\0') {
    dVar24 = CONCAT44D(SUB84(dVar22,0),in_fr7);
  }
  fVar10 = F32HI(dVar22);
  if (cVar36 == '\0') {
    dVar24 = CONCAT44D(F32HI(dVar24) - fVar10,SUB84(dVar24,0));
  }
  else {
    dVar24 = dVar24 - dVar22;
  }
  if (cVar36 == '\0') {
    bVar35 = 0.0 < F32HI(dVar24);
  }
  else {
    bVar35 = (double)((ulonglong)(uint)fVar10 << 0x20) < dVar24;
  }
  dVar22 = dVar24;
  if ((!bVar35) && (dVar22 = in_xd10, cVar37 == '\0')) {
    dVar22 = CONCAT44D(0x3f800000,SUB84(dVar24,0));
  }
  fVar10 = (float)*piVar8;
  if (*piVar8 < 0) {
    if (cVar36 == '\0') {
      fVar10 = fVar10 + 4.2949673e+09;
    }
    else {
      fVar10 = SUB84(CONCAT44D(0x4f800000,fVar10) + CONCAT44D(0x4f800000,fVar10),0);
    }
  }
  iVar1 = *piVar6;
  if (cVar36 == '\0') {
    dVar24 = CONCAT44D((float)iVar1,fVar10);
  }
  else {
    dVar24 = (double)iVar1;
  }
  if (iVar1 < 0) {
    if (cVar37 == '\0') {
      in_dr0 = CONCAT44D((int)((ulonglong)in_dr0 >> 0x20),0x4f800000);
    }
    else {
      in_xd0 = -1.8629950226301174e-249;
    }
    if (cVar36 == '\0') {
      dVar24 = CONCAT44D(F32HI(dVar24) + F32LO(in_dr0),SUB84(dVar24,0)
                               );
    }
    else {
      dVar24 = dVar24 + in_dr0;
    }
  }
  dVar17 = in_xd2;
  if (cVar37 == '\0') {
    dVar22 = CONCAT44D((int)(D2U(dVar22) >> 0x20),SUB84(dVar24,0));
    dVar17 = in_xd6;
  }
  fVar10 = F32HI(dVar24);
  if (cVar36 == '\0') {
    dVar22 = CONCAT44D((int)(D2U(dVar22) >> 0x20),F32LO(dVar22) - fVar10);
  }
  else {
    dVar22 = dVar22 - dVar24;
  }
  if (cVar36 == '\0') {
    bVar35 = 0.0 < SUB84(dVar22,0);
  }
  else {
    bVar35 = (double)((ulonglong)(uint)fVar10 << 0x20) < dVar22;
  }
  dVar24 = dVar17;
  if ((!bVar35) && (dVar24 = in_xd10, cVar37 == '\0')) {
    dVar22 = CONCAT44D((int)(D2U(dVar22) >> 0x20),0x3f800000);
    dVar24 = dVar17;
  }
  fVar10 = (float)*piVar8;
  if (*piVar8 < 0) {
    if (cVar36 == '\0') {
      fVar10 = fVar10 + 4.2949673e+09;
    }
    else {
      fVar10 = SUB84(CONCAT44D(0x4f800000,fVar10) + CONCAT44D(0x4f800000,fVar10),0);
    }
  }
  fVar19 = F32HI(dVar22);
  dVar17 = dVar22;
  if (cVar37 == '\0') {
    dVar17 = CONCAT44D(fVar19,fVar10);
  }
  fVar10 = F32HI(dVar16);
  if (cVar36 == '\0') {
    dVar17 = CONCAT44D(F32HI(dVar17) + fVar10,SUB84(dVar17,0));
  }
  else {
    dVar17 = dVar17 + dVar16;
  }
  if (cVar37 == '\0') {
    in_dr0 = CONCAT44D((int)((ulonglong)in_dr0 >> 0x20),(*(undefined4 *)(unsigned)(unsigned)0x8c4aad54));
    dVar28 = CONCAT44D(0x3f800000,in_fr13);
  }
  else {
    in_xd0 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4aad58),(*(undefined4 *)(unsigned)(unsigned)0x8c4aad54));
    dVar28 = in_xd10;
  }
  if (cVar36 == '\0') {
    in_dr0 = CONCAT44D((int)((ulonglong)in_dr0 >> 0x20),F32LO(in_dr0) - F32LO(dVar17));
  }
  else {
    in_dr0 = in_dr0 - dVar17;
  }
  dVar26 = dVar16;
  dVar25 = dVar16;
  if (cVar37 == '\0') {
    dVar26 = CONCAT44D(fVar10,0x3f800000);
    dVar25 = CONCAT44D(fVar10,in_fr9);
  }
  fVar11 = F32HI(dVar17);
  if (cVar36 == '\0') {
    dVar26 = CONCAT44D(F32HI(dVar26) / fVar11,SUB84(dVar26,0));
  }
  else {
    dVar26 = dVar26 / dVar17;
  }
  if (cVar37 == '\0') {
    dVar17 = CONCAT44D(fVar11,0x3eaaaa3b);
    dVar16 = CONCAT44D(fVar10,fVar10);
    dVar30 = CONCAT44D(SUB84(in_dr0,0),in_fr15);
  }
  else {
    in_xd2 = 32.00000747044802;
    dVar30 = in_xd0;
    in_xd4 = dVar16;
  }
  fVar10 = F32HI(dVar16);
  if (cVar36 == '\0') {
    dVar30 = CONCAT44D(F32HI(dVar30) / fVar10,SUB84(dVar30,0));
  }
  else {
    dVar30 = dVar30 / dVar16;
  }
  dVar27 = dVar24;
  if (cVar37 == '\0') {
    in_dr0 = CONCAT44D((int)((ulonglong)in_dr0 >> 0x20),SUB84(dVar22,0));
    dVar27 = in_xd0;
  }
  fVar11 = F32HI(dVar30);
  if (cVar36 == '\0') {
    fVar9 = F32LO(in_dr0) + fVar10;
    in_dr0 = CONCAT44D((int)((ulonglong)in_dr0 >> 0x20),fVar9);
    dVar16 = CONCAT44D(fVar10,F32LO(dVar16) * F32LO(dVar17));
    dVar25 = CONCAT44D(F32HI(dVar25) / fVar9,SUB84(dVar25,0));
    dVar28 = CONCAT44D(F32HI(dVar28) - fVar11,SUB84(dVar28,0));
  }
  else {
    in_dr0 = in_dr0 + dVar16;
    dVar16 = dVar16 * dVar17;
    dVar25 = dVar25 / in_dr0;
    dVar28 = dVar28 - dVar30;
  }
  dVar18 = dVar30;
  if (cVar37 == '\0') {
    dVar18 = CONCAT44D(fVar11,SUB84(dVar17,0));
  }
  if (cVar36 == '\0') {
    dVar18 = CONCAT44D(F32HI(dVar18) * fVar11,SUB84(dVar18,0));
  }
  else {
    dVar18 = dVar18 * dVar30;
  }
  dVar34 = dVar28;
  dVar17 = dVar30;
  if (cVar37 == '\0') {
    dVar30 = CONCAT44D(fVar11,fVar11);
    uVar12 = (undefined4)(D2U(dVar28) >> 0x20);
    dVar28 = CONCAT44D(uVar12,uVar12);
    dVar34 = in_xd12;
    dVar17 = in_xd14;
  }
  fVar10 = F32HI(dVar17);
  if (cVar36 == '\0') {
    fVar11 = F32HI(dVar28);
    dVar28 = CONCAT44D(fVar11,F32LO(dVar28) * fVar11);
  }
  else {
    dVar28 = dVar28 * dVar28;
  }
  uVar12 = (undefined4)(D2U(dVar28) >> 0x20);
  dVar17 = dVar28;
  if (cVar37 == '\0') {
    dVar25 = CONCAT44D((int)(D2U(dVar25) >> 0x20),uVar12);
    dVar17 = in_xd8;
  }
  fVar11 = F32HI(dVar18);
  if (cVar36 == '\0') {
    dVar30 = CONCAT44D((int)(D2U(dVar30) >> 0x20),F32LO(dVar30) * fVar11);
  }
  else {
    dVar30 = dVar30 * dVar18;
  }
  (*(float *)(fr0_ - 0x48)) = SUB84(dVar18,0);
  if (cVar37 == '\0') {
    dVar18 = CONCAT44D(0x40400000,(*(float *)(fr0_ - 0x48)));
    (*(float *)(fr0_ - 0x48)) = fVar11;
  }
  else {
    dVar18 = 1.659535550397677e+182;
    (*(float *)(fr0_ - 0x44)) = fVar11;
  }
  if (cVar36 == '\0') {
    dVar25 = CONCAT44D((int)(D2U(dVar25) >> 0x20),F32LO(dVar25) * F32LO(dVar28));
    dVar30 = CONCAT44D(F32HI(dVar30) * F32LO(dVar28),SUB84(dVar30,0));
  }
  else {
    dVar25 = dVar25 * dVar28;
    dVar30 = dVar30 * dVar28;
  }
  if (cVar37 == '\0') {
    dVar28 = CONCAT44D(uVar12,(int)(D2U(dVar30) >> 0x20));
    in_dr0 = CONCAT44D((int)((ulonglong)in_dr0 >> 0x20),(*(float *)(fr0_ - 0x48)));
  }
  else {
    dVar27 = CONCAT44D((*(float *)(fr0_ - 0x44)),(*(float *)(fr0_ - 0x48)));
    dVar34 = dVar30;
  }
  fVar11 = F32HI(dVar18);
  if (cVar36 == '\0') {
    fVar9 = F32HI(dVar28);
    dVar28 = CONCAT44D(fVar9,F32LO(dVar28) * fVar11);
    in_dr0 = CONCAT44D((int)((ulonglong)in_dr0 >> 0x20),F32LO(in_dr0) * fVar9);
  }
  else {
    dVar28 = dVar28 * dVar18;
    in_dr0 = in_dr0 * dVar28;
  }
  uVar3 = 0;
  dVar31 = dVar27;
  if (cVar37 == '\0') {
    dVar31 = CONCAT44D(SUB84(in_dr0,0),SUB84(dVar30,0));
  }
  if (cVar36 == '\0') {
    dVar31 = CONCAT44D(F32HI(dVar31) * fVar11,SUB84(dVar31,0));
  }
  else {
    dVar31 = dVar31 * dVar18;
  }
  fVar11 = F32LO(dVar26);
  dVar30 = in_xd10;
  if (cVar37 == '\0') {
    dVar30 = CONCAT44D(fVar11,SUB84(dVar18,0));
  }
  fVar9 = F32HI(dVar25);
  if (cVar36 == '\0') {
    dVar30 = CONCAT44D(F32HI(dVar30) - fVar9,SUB84(dVar30,0));
  }
  else {
    dVar30 = dVar30 - dVar25;
  }
  fVar20 = F32HI(dVar30);
  fVar21 = fVar20;
  if (cVar37 == '\0') {
    fVar21 = (*(float *)(fr0_ - 0x50));
  }
  (*(float *)(fr0_ - 0x50)) = fVar21;
  fVar21 = F32LO(dVar16);
  fVar23 = F32HI(dVar16);
  fVar29 = F32LO(dVar31);
  fVar32 = F32HI(dVar31);
  (*(float *)(fr0_ - 0x54)) = SUB84(dVar30,0);
  if (ar5 == ar6 + -2) {
    dVar24 = dVar25;
    if (cVar37 == '\0') {
      dVar24 = CONCAT44D(fVar9,(*(float *)(fr0_ - 0x54)));
      (*(float *)(fr0_ - 0x54)) = fVar20;
      fVar20 = (*(float *)(fr0_ - 0x50));
    }
    (*(float *)(fr0_ - 0x50)) = fVar20;
    if (cVar36 == '\0') {
      dVar24 = CONCAT44D(F32HI(dVar24) + fVar11,SUB84(dVar24,0));
    }
    else {
      dVar24 = dVar24 + dVar26;
    }
    uVar12 = (undefined4)(D2U(dVar24) >> 0x20);
    (*(float *)(fr0_ - 0x44)) = (float)uVar12;
    if (cVar37 != '\0') {
      (*(float *)(fr0_ - 0x44)) = SUB84(dVar24,0);
      (*(float *)(fr0_ - 0x40)) = (float)uVar12;
    }
    do {
      uVar2 = uVar3;
      fVar19 = (*(float *)(fr0_ - 0x50));
      if (cVar37 == '\0') {
        fVar19 = (*(float *)(fr0_ - 0x54));
      }
      iVar4 = *(int *)(unsigned)((int)piVar7 + uVar2 + 4);
      iVar1 = *(int *)(unsigned)((int)piVar8 + uVar2 + 4);
      fVar11 = (float)(iVar4 - iVar1);
      dVar24 = in_xd2;
      if (cVar37 == '\0') {
        dVar24 = CONCAT44D(fVar11,SUB84(dVar22,0));
      }
      fVar20 = F32HI(dVar24);
      if (cVar36 == '\0') {
        fVar19 = fVar19 * fVar20;
      }
      else {
        fVar19 = (float)((ulonglong)(CONCAT44D(fVar19,fVar11) * dVar24) >> 0x20);
      }
      fVar11 = (float)(iVar1 - *(int *)(unsigned)((int)piVar6 + uVar2 + 4));
      if (cVar36 == '\0') {
        dVar30 = CONCAT44D(fVar19 / fVar23,fVar11);
      }
      else {
        dVar30 = CONCAT44D(fVar19,fVar11) / dVar16;
      }
      dVar27 = dVar25;
      if (cVar37 == '\0') {
        uVar12 = SUB84(dVar30,0);
        dVar30 = CONCAT44D((int)(D2U(dVar30) >> 0x20),fVar9);
        dVar27 = in_xd2;
        in_xd2 = CONCAT44D(uVar12,SUB84(dVar26,0));
      }
      fVar19 = F32HI(in_xd2);
      if (cVar36 == '\0') {
        dVar30 = CONCAT44D((int)(D2U(dVar30) >> 0x20),F32LO(dVar30) * fVar19);
      }
      else {
        dVar30 = dVar30 * in_xd2;
      }
      uVar12 = SUB84(dVar30,0);
      dVar26 = dVar27;
      if (cVar37 == '\0') {
        in_xd2 = CONCAT44D(fVar19,uVar12);
        dVar26 = in_xd10;
      }
      if (cVar36 == '\0') {
        fVar19 = F32LO(in_xd2) / F32LO(dVar24);
      }
      else {
        fVar19 = SUB84(in_xd2 / dVar24,0);
      }
      if (cVar37 == '\0') {
        dVar30 = CONCAT44D((int)(D2U(dVar30) >> 0x20),fVar19);
      }
      if (cVar36 == '\0') {
        dVar30 = CONCAT44D(F32HI(dVar30) + F32LO(dVar30),
                                  SUB84(dVar30,0));
      }
      else {
        dVar30 = dVar30 + dVar30;
      }
      if (cVar37 == '\0') {
        dVar18 = CONCAT44D((*(float *)(fr0_ - 0x44)),uVar12);
      }
      else {
        dVar18 = CONCAT44D((*(float *)(fr0_ - 0x40)),(*(float *)(fr0_ - 0x44)));
      }
      if (cVar36 == '\0') {
        dVar18 = CONCAT44D(F32HI(dVar18) * fVar20,SUB84(dVar18,0));
      }
      else {
        dVar18 = dVar18 * dVar24;
      }
      uVar3 = (uint)(D2U(dVar30) >> 0x20);
      dVar31 = dVar30;
      dVar22 = dVar26;
      if (cVar37 == '\0') {
        dVar18 = CONCAT44D((int)(D2U(dVar18) >> 0x20),SUB84(dVar30,0));
        dVar31 = (double)((ulonglong)uVar3 << 0x20);
        dVar22 = dVar27;
      }
      if (cVar36 == '\0') {
        dVar18 = CONCAT44D(F32HI(dVar18) / fVar23,SUB84(dVar18,0));
      }
      else {
        dVar18 = dVar18 / dVar16;
      }
      dVar27 = dVar18;
      if (cVar37 == '\0') {
        dVar30 = CONCAT44D(uVar3,(int)(D2U(dVar18) >> 0x20));
        dVar27 = dVar26;
      }
      if (cVar36 == '\0') {
        dVar26 = CONCAT44D((float)iVar1,SUB84(dVar18,0));
        fVar19 = F32LO(dVar30) - F32LO(dVar18);
      }
      else {
        dVar26 = (double)iVar1;
        fVar19 = SUB84(dVar30 - dVar26,0);
      }
      fVar20 = F32HI(dVar26);
      fVar11 = (float)iVar4;
      dVar30 = CONCAT44D(fVar20,fVar11);
      dVar18 = dVar30;
      if (cVar37 == '\0') {
        dVar18 = CONCAT44D(fVar20,SUB84(dVar28,0));
      }
      if (cVar36 == '\0') {
        dVar30 = CONCAT44D(F32HI(dVar31) * fVar21 + fVar20,fVar11);
      }
      dVar31 = in_xd4;
      dVar28 = dVar17;
      if (cVar37 == '\0') {
        dVar31 = CONCAT44D(fVar21,SUB84(dVar30,0));
        dVar30 = CONCAT44D((int)(D2U(dVar30) >> 0x20),fVar19);
        dVar28 = (double)((longlong)dVar25 << 0x20);
      }
      if (cVar36 == '\0') {
        dVar31 = CONCAT44D(F32HI(dVar31) * F32LO(dVar30),
                                  SUB84(dVar31,0));
      }
      else {
        dVar31 = dVar31 * dVar30;
      }
      uVar12 = SUB84(dVar31,0);
      in_xd2 = dVar34;
      in_xd10 = dVar22;
      if (cVar37 == '\0') {
        dVar30 = CONCAT44D((int)(D2U(dVar30) >> 0x20),uVar12);
        dVar31 = CONCAT44D((int)(D2U(dVar31) >> 0x20),SUB84(dVar18,0));
        in_xd2 = dVar22;
        dVar22 = CONCAT44D(uVar12,SUB84(dVar24,0));
        in_xd10 = dVar27;
      }
      if (cVar36 == '\0') {
        fVar19 = F32HI(dVar31);
        dVar26 = (double)(ulonglong)(uint)(F32LO(dVar30) - fVar19);
        dVar31 = CONCAT44D(fVar19,F32HI(dVar28) *
                                         F32HI(dVar18) +
                                         F32LO(dVar31) * F32HI(dVar30));
      }
      else {
        dVar31 = dVar31 * dVar30;
        dVar26 = dVar30 - dVar31;
      }
      if (cVar37 == '\0') {
        fVar19 = F32LO(dVar26);
      }
      else {
        fVar19 = F32HI(in_xd10);
      }
      if (cVar36 == '\0') {
        dVar31 = CONCAT44D((int)(D2U(dVar31) >> 0x20),fVar19 * fVar32 + F32LO(dVar31)
                                 );
      }
      fVar19 = fVar10;
      if (cVar37 == '\0') {
        fVar19 = fVar29;
      }
      if (cVar36 == '\0') {
        iVar1 = (int)(fVar19 * F32HI(dVar22) + F32LO(dVar31));
      }
      else {
        iVar1 = (int)dVar31;
      }
      *(int *)(unsigned)(uVar2 + ar7) = iVar1;
      uVar3 = uVar2 + 4;
      dVar28 = dVar18;
    } while (uVar2 + 4 < 0xc);
  }
  else {
    dVar30 = in_xd10;
    if (cVar37 == '\0') {
      dVar30 = CONCAT44D(fVar11,SUB84(dVar28,0));
    }
    fVar14 = F32HI(dVar26);
    if (cVar36 == '\0') {
      dVar30 = CONCAT44D(F32HI(dVar30) - fVar14,SUB84(dVar30,0));
    }
    else {
      dVar30 = dVar30 - dVar26;
    }
    uVar12 = (undefined4)(D2U(dVar30) >> 0x20);
    if (ar5 == 0) {
      dVar28 = dVar26;
      if (cVar37 == '\0') {
        in_dr0 = CONCAT44D((int)((ulonglong)in_dr0 >> 0x20),fVar14);
        dVar28 = dVar27;
      }
      if (cVar36 == '\0') {
        (*(float *)(fr0_ - 0x50)) = F32LO(in_dr0) + fVar11;
      }
      else {
        (*(float *)(fr0_ - 0x50)) = SUB84(in_dr0 + dVar26,0);
      }
      if (cVar37 != '\0') {
        (*(float *)(fr0_ - 0x50)) = SUB84(dVar28,0);
        (*(float *)(fr0_ - 0x4c)) = F32HI(dVar28);
      }
      do {
        uVar2 = uVar3;
        iVar1 = *(int *)(unsigned)((int)piVar7 + uVar2 + 4);
        iVar4 = *(int *)(unsigned)((int)piVar8 + uVar2 + 4);
        fVar19 = (*(float *)(fr0_ - 0x4c));
        if (cVar37 == '\0') {
          fVar19 = (*(float *)(fr0_ - 0x50));
        }
        fVar11 = (float)(iVar1 - iVar4);
        dVar28 = in_xd2;
        if (cVar37 == '\0') {
          dVar22 = CONCAT44D((int)(D2U(dVar22) >> 0x20),fVar11);
          dVar28 = dVar24;
        }
        if (cVar36 == '\0') {
          fVar19 = fVar19 * F32LO(dVar22);
        }
        else {
          fVar19 = (float)((ulonglong)(CONCAT44D(fVar19,fVar11) * dVar22) >> 0x20);
        }
        fVar11 = (float)(*(int *)(unsigned)((int)piVar5 + uVar2 + 4) - iVar1);
        if (cVar36 == '\0') {
          dVar24 = CONCAT44D(fVar19 / fVar23,fVar11);
        }
        else {
          dVar24 = CONCAT44D(fVar19,fVar11) / dVar16;
        }
        uVar15 = (undefined4)(D2U(dVar26) >> 0x20);
        dVar27 = dVar26;
        if (cVar37 == '\0') {
          uVar13 = SUB84(dVar24,0);
          dVar24 = CONCAT44D((int)(D2U(dVar24) >> 0x20),uVar15);
          dVar26 = in_xd2;
          dVar27 = CONCAT44D(uVar15,uVar13);
          in_xd2 = in_xd10;
        }
        if (cVar36 == '\0') {
          dVar24 = CONCAT44D((int)(D2U(dVar24) >> 0x20),
                                    F32LO(dVar24) * F32LO(dVar27));
        }
        else {
          dVar24 = dVar24 * dVar27;
        }
        dVar18 = dVar26;
        if (cVar37 == '\0') {
          dVar18 = CONCAT44D(SUB84(dVar24,0),SUB84(dVar25,0));
        }
        fVar19 = F32HI(dVar22);
        if (cVar36 == '\0') {
          dVar18 = CONCAT44D(F32HI(dVar18) / fVar19,SUB84(dVar18,0));
        }
        else {
          dVar18 = dVar18 / dVar22;
        }
        fVar11 = F32HI(dVar24);
        dVar25 = dVar30;
        if (cVar37 == '\0') {
          dVar27 = CONCAT44D(uVar15,fVar11);
          fVar11 = F32HI(in_xd2);
          dVar25 = CONCAT44D(uVar12,SUB84(dVar24,0));
          dVar24 = in_xd2;
        }
        fVar9 = F32HI(dVar18);
        if (cVar36 == '\0') {
          dVar27 = CONCAT44D((int)(D2U(dVar27) >> 0x20),F32LO(dVar27) - fVar9);
          fVar20 = F32HI(dVar25) * F32LO(dVar22);
        }
        else {
          dVar27 = dVar27 - dVar18;
          fVar20 = (float)((ulonglong)(dVar25 * dVar22) >> 0x20);
        }
        if (cVar37 == '\0') {
          fVar11 = F32LO(dVar27);
        }
        fVar14 = (float)iVar4;
        if (cVar36 == '\0') {
          dVar31 = CONCAT44D(fVar20 / fVar23,fVar14);
        }
        else {
          dVar31 = CONCAT44D(fVar20,fVar14) / dVar16;
        }
        dVar33 = dVar31;
        if (cVar37 == '\0') {
          dVar22 = CONCAT44D(fVar19,(int)(D2U(dVar31) >> 0x20));
          dVar33 = dVar28;
        }
        if (cVar36 == '\0') {
          dVar22 = CONCAT44D((int)(D2U(dVar22) >> 0x20),F32LO(dVar22) + fVar9);
        }
        else {
          dVar22 = dVar22 + dVar18;
        }
        dVar25 = dVar26;
        if (cVar37 == '\0') {
          dVar25 = CONCAT44D(SUB84(dVar31,0),SUB84(dVar18,0));
        }
        if (cVar36 == '\0') {
          dVar28 = CONCAT44D((float)iVar1,fVar11 * fVar21 + F32LO(dVar31));
        }
        else {
          dVar28 = (double)iVar1;
        }
        dVar31 = in_xd4;
        in_xd10 = dVar26;
        dVar18 = dVar17;
        if (cVar37 == '\0') {
          uVar15 = SUB84(dVar28,0);
          dVar28 = CONCAT44D((int)(D2U(dVar28) >> 0x20),fVar21);
          dVar31 = dVar26;
          dVar27 = CONCAT44D((int)(D2U(dVar27) >> 0x20),uVar15);
          in_xd10 = dVar24;
          dVar18 = (double)((longlong)dVar25 << 0x20);
        }
        dVar26 = dVar27;
        if (cVar36 == '\0') {
          dVar28 = CONCAT44D((int)(D2U(dVar28) >> 0x20),
                                    F32LO(dVar28) * F32LO(dVar22));
        }
        else {
          dVar28 = dVar28 * dVar22;
        }
        uVar15 = (undefined4)(D2U(dVar28) >> 0x20);
        dVar24 = dVar28;
        if (cVar37 == '\0') {
          dVar22 = CONCAT44D((int)(D2U(dVar22) >> 0x20),uVar15);
          dVar24 = dVar33;
        }
        if (cVar36 == '\0') {
          dVar22 = CONCAT44D((int)(D2U(dVar22) >> 0x20),
                                    F32LO(dVar22) - F32LO(dVar28));
        }
        else {
          dVar22 = dVar22 - dVar28;
        }
        in_xd2 = dVar34;
        if (cVar37 == '\0') {
          dVar28 = CONCAT44D(uVar15,SUB84(dVar30,0));
          in_xd2 = dVar31;
        }
        if (cVar36 == '\0') {
          dVar28 = CONCAT44D((int)(D2U(dVar28) >> 0x20),
                                    F32LO(dVar28) * F32LO(dVar26));
        }
        else {
          dVar28 = dVar28 * dVar26;
        }
        if (cVar36 == '\0') {
          dVar28 = CONCAT44D((int)(D2U(dVar28) >> 0x20),
                                    F32HI(dVar18) *
                                    F32HI(dVar25) + F32LO(dVar28));
        }
        if (cVar37 == '\0') {
          fVar19 = F32LO(dVar22);
        }
        else {
          fVar19 = F32HI(dVar24);
        }
        if (cVar36 == '\0') {
          dVar28 = CONCAT44D((int)(D2U(dVar28) >> 0x20),
                                    fVar19 * fVar32 + F32LO(dVar28));
        }
        fVar19 = fVar10;
        if (cVar37 == '\0') {
          fVar19 = fVar29;
        }
        if (cVar36 == '\0') {
          iVar1 = (int)(fVar19 * F32HI(dVar28) + F32LO(dVar28));
        }
        else {
          iVar1 = (int)dVar28;
        }
        *(int *)(unsigned)(uVar2 + ar7) = iVar1;
        uVar3 = uVar2 + 4;
      } while (uVar2 + 4 < 0xc);
    }
    else {
      (*(undefined4 *)(fr0_ - 0x24)) = in_PR;
      if (cVar37 == '\0') {
        (*(float *)(fr0_ - 0x54)) = fVar20;
        fVar20 = (*(float *)(fr0_ - 0x50));
      }
      do {
        (*(float *)(fr0_ - 0x50)) = fVar20;
        uVar2 = uVar3;
        fVar11 = (*(float *)(fr0_ - 0x38));
        iVar1 = *(int *)(unsigned)((int)piVar7 + uVar2 + 4);
        iVar4 = *(int *)(unsigned)((int)piVar8 + uVar2 + 4);
        if (cVar37 == '\0') {
          dVar26 = CONCAT44D((int)(D2U(dVar26) >> 0x20),(float)(iVar1 - iVar4));
        }
        (*(float *)(fr0_ - 0x3c)) = SUB84(in_xd2,0);
        (*(float *)(fr0_ - 0x40)) = (*(float *)(fr0_ - 0x3c));
        (*(float *)(fr0_ - 0x38)) = F32HI(in_xd2);
        fVar20 = (*(float *)(fr0_ - 0x38));
        if (cVar37 == '\0') {
          (*(float *)(fr0_ - 0x3c)) = (float)(iVar4 - *(int *)(unsigned)((int)piVar6 + uVar2 + 4));
          (*(float *)(fr0_ - 0x38)) = fVar11;
        }
        fVar11 = (float)(*(int *)(unsigned)((int)piVar5 + uVar2 + 4) - iVar1);
        if (cVar37 == '\0') {
          dVar24 = CONCAT44D((*(float *)(fr0_ - 0x54)),fVar11);
          dVar28 = CONCAT44D(fVar9,(*(float *)(fr0_ - 0x3c)));
          (*(float *)(fr0_ - 0x40)) = fVar11;
        }
        else {
          dVar24 = CONCAT44D((*(float *)(fr0_ - 0x50)),(*(float *)(fr0_ - 0x54)));
          dVar27 = CONCAT44D((*(float *)(fr0_ - 0x38)),fVar20);
          dVar28 = dVar25;
          (*(float *)(fr0_ - 0x3c)) = fVar20;
        }
        fVar11 = F32HI(dVar27);
        if (cVar36 == '\0') {
          dVar24 = CONCAT44D(F32HI(dVar24) * F32LO(dVar26),
                                    SUB84(dVar24,0));
          dVar28 = CONCAT44D(F32HI(dVar28) * F32LO(dVar28),
                                    SUB84(dVar28,0));
        }
        else {
          dVar24 = dVar24 * dVar26;
          dVar28 = dVar28 * dVar28;
        }
        dVar18 = dVar30;
        if (cVar37 == '\0') {
          dVar24 = CONCAT44D((int)(D2U(dVar24) >> 0x20),uVar12);
          dVar18 = in_xd2;
        }
        if (cVar36 == '\0') {
          dVar24 = CONCAT44D(F32HI(dVar24) / fVar23 +
                                    F32HI(dVar28) / F32LO(dVar22),
                                    (F32LO(dVar24) * F32LO(dVar26)) / fVar23);
        }
        else {
          dVar24 = ((dVar24 * dVar26) / dVar16) / dVar16 + dVar28 / dVar22;
        }
        uVar15 = (undefined4)(D2U(dVar26) >> 0x20);
        (*(float *)(fr0_ - 0x38)) = SUB84(dVar24,0);
        dVar28 = dVar26;
        if (cVar37 == '\0') {
          dVar28 = CONCAT44D(uVar15,(*(float *)(fr0_ - 0x38)));
          (*(float *)(fr0_ - 0x3c)) = (*(float *)(fr0_ - 0x40));
          (*(float *)(fr0_ - 0x38)) = F32HI(dVar24);
        }
        if (cVar36 == '\0') {
          dVar24 = CONCAT44D((float)iVar4,
                                    SUB84(dVar28,0) +
                                    (F32HI(dVar28) * (*(float *)(fr0_ - 0x3c))) / fVar19);
        }
        else {
          dVar24 = (double)iVar4;
        }
        fVar20 = F32HI(dVar24);
        (*(float *)(fr0_ - 0x2c)) = SUB84(dVar24,0);
        if (cVar37 == '\0') {
          dVar24 = CONCAT44D(fVar20,fVar20);
          fVar14 = (*(float *)(fr0_ - 0x38));
          (*(float *)(fr0_ - 0x34)) = (*(float *)(fr0_ - 0x2c));
          (*(float *)(fr0_ - 0x2c)) = fVar20;
        }
        else {
          (*(float *)(fr0_ - 0x34)) = SUB84(dVar18,0);
          (*(float *)(fr0_ - 0x30)) = F32HI(dVar18);
          dVar18 = dVar24;
          fVar14 = (*(float *)(fr0_ - 0x34));
        }
        if (cVar36 == '\0') {
          dVar24 = CONCAT44D((int)(D2U(dVar24) >> 0x20),
                                    fVar14 * fVar21 + F32LO(dVar24));
        }
        if (cVar37 == '\0') {
          (*(undefined4 *)(fr0_ - 0x28)) = SUB84(dVar24,0);
          dVar24 = CONCAT44D((int)(D2U(dVar24) >> 0x20),fVar21);
        }
        else {
          (*(undefined4 *)(fr0_ - 0x28)) = SUB84(dVar18,0);
          (*(undefined4 *)(fr0_ - 0x24)) = (undefined4)(D2U(dVar18) >> 0x20);
          dVar18 = in_xd4;
          (*(float *)(fr0_ - 0x34)) = (*(float *)(fr0_ - 0x30));
        }
        fVar20 = (float)iVar1;
        if (cVar36 == '\0') {
          dVar24 = CONCAT44D((int)(D2U(dVar24) >> 0x20),F32LO(dVar24) * (*(float *)(fr0_ - 0x34)));
        }
        else {
          dVar24 = dVar24 * CONCAT44D((*(float *)(fr0_ - 0x34)),fVar20);
        }
        if (cVar37 == '\0') {
          dVar26 = CONCAT44D(uVar15,fVar20);
        }
        if (cVar36 == '\0') {
          fVar20 = fVar20 - F32LO(dVar24);
        }
        else {
          fVar20 = SUB84(CONCAT44D((*(float *)(fr0_ - 0x34)),fVar20) - dVar24,0);
        }
        if (cVar37 == '\0') {
          dVar24 = CONCAT44D((int)(D2U(dVar24) >> 0x20),SUB84(dVar30,0));
          dVar28 = CONCAT44D((*(undefined4 *)(fr0_ - 0x28)),fVar20);
          in_xd2 = dVar18;
        }
        else {
          dVar28 = CONCAT44D((*(undefined4 *)(fr0_ - 0x24)),(*(undefined4 *)(fr0_ - 0x28)));
          in_xd2 = dVar34;
        }
        if (cVar36 == '\0') {
          fVar20 = F32LO(dVar24) * F32HI(dVar28);
        }
        else {
          fVar20 = SUB84(dVar24 * dVar28,0);
        }
        if (cVar37 == '\0') {
          dVar24 = CONCAT44D((*(float *)(fr0_ - 0x2c)),fVar20);
          dVar28 = CONCAT44D(SUB84(dVar25,0),SUB84(dVar28,0));
        }
        else {
          dVar24 = CONCAT44D((*(undefined4 *)(fr0_ - 0x28)),(*(float *)(fr0_ - 0x2c)));
          dVar28 = dVar17;
        }
        if (cVar36 == '\0') {
          fVar20 = F32HI(dVar24);
          dVar24 = CONCAT44D(fVar20,F32HI(dVar28) * fVar20 +
                                           SUB84(dVar24,0));
        }
        if (cVar37 == '\0') {
          fVar11 = F32LO(dVar28);
        }
        if (cVar36 == '\0') {
          dVar24 = CONCAT44D((int)(D2U(dVar24) >> 0x20),
                                    fVar11 * fVar32 + F32LO(dVar24));
        }
        fVar11 = fVar10;
        if (cVar37 == '\0') {
          fVar11 = fVar29;
        }
        if (cVar36 == '\0') {
          iVar1 = (int)(fVar11 * F32LO(dVar26) + F32LO(dVar24));
        }
        else {
          iVar1 = (int)dVar24;
        }
        *(int *)(unsigned)(uVar2 + ar7) = iVar1;
        uVar3 = uVar2 + 4;
        fVar20 = (*(float *)(fr0_ - 0x50));
      } while (uVar2 + 4 < 0xc);
    }
  }
  return uVar2;
}

__asm__(".globl _FUN_8c21caa0\n.set _FUN_8c21caa0, _FUN_8c21caa0_def\n");
