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
int FUN_8c25c4d2_def(uint *ar4,uint *ar5,int ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c25c4d2";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 92; for (int i_ = 0; i_ < 92; i_++) z_[i_] = 0; }
  undefined8 *puVar1;
  double *pdVar2;
  uint unaff_r12 = 0;
  double *pdVar3;
  undefined4 *puVar4;
  double in_dr0 = 0;
  double dVar5;
  float fVar6;
  double in_dr2 = 0;
  double dVar7;
  undefined4 uVar10;
  double dVar8;
  double dVar9;
  undefined4 in_fr5 = 0;
  float fVar11;
  float fVar12;
  float fVar13;
  double dVar14;
  float fVar17;
  double dVar15;
  double dVar18;
  undefined4 in_fr9 = 0;
  float fVar19;
  float fVar20;
  double dVar21;
  undefined4 in_fr11 = 0;
  double dVar22;
  double in_dr12 = 0;
  undefined4 uVar23;
  float fVar24;
  uint uVar25;
  float fVar26;
  undefined8 in_dr14 = 0;
  double dVar27;
  undefined8 in_xd0 = 0;
  double in_xd2 = 0;
  double dVar28;
  double in_xd4 = 0;
  double dVar29;
  double in_xd6 = 0;
  double in_xd8 = 0;
  double in_xd10 = 0;
  double in_xd12 = 0;
  double in_xd14 = 0;
  double dVar30;
  bool bVar31;
  bool bVar32;
  int iVar33;
  int iVar34;
  int iVar35;
  char in_FPSCR_PR = 0;
  char in_FPSCR_SZ = 0;
  undefined4 uVar16;
  
  uVar10 = (undefined4)((ulonglong)in_dr14 >> 0x20);
  if (in_FPSCR_SZ == '\0') {
    puVar4 = ((undefined4 *)(fr0_ - 0x18));
    (*(undefined4 *)(fr0_ + (int)0xffffffe4)) = CONCAT44(SUB84(in_dr12,0),(*(uint*)((uchar*)((undefined1 *)(fr0_ - 0x24))+8)));
  }
  else {
    puVar4 = (undefined4 *)(unsigned)((undefined1 *)(fr0_ - 0x24));
  }
  bVar32 = false;
  if (in_FPSCR_SZ == '\0') {
    uVar16 = *(undefined4 *)(unsigned)0x8c4aa4a8;
    in_dr2 = CONCAT44D((int)((ulonglong)in_dr2 >> 0x20),*(undefined4 *)(unsigned)0x8c4aa4dc);
    in_fr9 = *(undefined4 *)(unsigned)(0x8c4aa4a8 + 2);
    dVar14 = CONCAT44D(uVar16,*(undefined4 *)(unsigned)((unsigned)0x8c4aa4a8 + 0xc));
    dVar7 = CONCAT44D(uVar16,in_fr5);
  }
  else {
    in_xd6 = *(double *)(unsigned)((unsigned)0x8c4aa4a8 + 0xc);
    dVar14 = *(undefined4 *)(unsigned)0x8c4aa4a8;
    in_xd2 = *(undefined4 *)(unsigned)0x8c4aa4dc;
    in_xd8 = ((undefined1 *)(unsigned)2)[0x8c4aa4a8];
    uVar16 = (undefined4)(D2U(dVar14) >> 0x20);
    dVar7 = dVar14;
  }
  if (in_FPSCR_PR == '\0') {
    dVar14 = CONCAT44D(F32HI(dVar14) * F32LO(in_dr2),SUB84(dVar14,0));
  }
  else {
    dVar14 = dVar14 * in_dr2;
  }
  if (in_FPSCR_SZ == '\0') {
    in_dr2 = CONCAT44D((int)((ulonglong)in_dr2 >> 0x20),ar4[1]);
  }
  else {
    in_xd2 = *(double *)(unsigned)(ar4 + 1);
  }
  if (in_FPSCR_PR == '\0') {
    dVar22 = CONCAT44D(1.0 / F32LO(in_dr2),in_fr11);
  }
  else {
    dVar22 = CONCAT44D(0x3f800000,in_fr11) / in_dr2;
  }
  if (in_FPSCR_SZ == '\0') {
    in_dr2 = CONCAT44D((int)((ulonglong)in_dr2 >> 0x20),ar5[1]);
    dVar21 = CONCAT44D(uVar16,in_fr9);
  }
  else {
    in_xd2 = *(double *)(unsigned)(ar5 + 1);
    dVar21 = dVar7;
  }
  if (in_FPSCR_PR == '\0') {
    dVar27 = CONCAT44D(uVar10,1.0 / F32LO(in_dr2));
  }
  else {
    dVar27 = CONCAT44D(uVar10,0x3f800000) / in_dr2;
  }
  fVar20 = F32HI(dVar14);
  if (in_FPSCR_PR == '\0') {
    fVar17 = 1.0 / fVar20;
  }
  else {
    fVar17 = (float)((ulonglong)(CONCAT44D(0x3f800000,SUB84(dVar7,0)) / dVar14) >> 0x20);
  }
  if (in_FPSCR_SZ == '\0') {
    dVar7 = CONCAT44D(*(undefined4 *)(unsigned)0x8c4aa4e0,*(undefined4 *)(unsigned)0x8c4aa4d4);
  }
  else {
    dVar7 = *(undefined4 *)(unsigned)0x8c4aa4e0;
    in_xd2 = *(undefined4 *)(unsigned)0x8c4aa4d4;
  }
  fVar26 = F32HI(dVar7);
  if (in_FPSCR_PR == '\0') {
    dVar21 = CONCAT44D(F32HI(dVar21) * fVar26,SUB84(dVar21,0));
  }
  else {
    dVar21 = dVar21 * dVar7;
  }
  fVar12 = F32HI(dVar21);
  if (in_FPSCR_PR == '\0') {
    bVar31 = F32HI(dVar22) < SUB84(dVar7,0);
    dVar15 = CONCAT44D(fVar17,1.0 / fVar12);
  }
  else {
    bVar31 = dVar22 < dVar7;
    dVar15 = CONCAT44D(fVar17,0x3f800000) / dVar21;
  }
  uVar23 = (undefined4)((ulonglong)in_dr12 >> 0x20);
  fVar6 = F32LO(dVar14);
  uVar16 = SUB84(dVar22,0);
  fVar19 = F32LO(dVar21);
  uVar10 = (undefined4)((ulonglong)in_dr0 >> 0x20);
  fVar11 = F32LO(dVar15);
  fVar13 = F32HI(dVar15);
  fVar24 = F32LO(dVar27);
  fVar17 = F32LO(in_xd4);
  if (bVar31) {
    if (in_FPSCR_SZ == '\0') {
      in_dr0 = CONCAT44D(uVar10,ar4[1]);
    }
    else {
      in_xd0 = *(undefined8 *)(unsigned)(ar4 + 1);
    }
    if (in_FPSCR_PR == '\0') {
      dVar22 = CONCAT44D(1.0 / F32LO(in_dr0),uVar16);
    }
    else {
      dVar22 = CONCAT44D(0x3f800000,uVar16) / in_dr0;
    }
    if (in_FPSCR_SZ == '\0') {
      dVar27 = CONCAT44D(ar4[2],fVar24);
    }
    else {
      dVar27 = *(double *)(unsigned)(ar4 + 2);
    }
    pdVar3 = (double *)(unsigned)*ar4;
    uVar10 = (undefined4)(D2U(dVar27) >> 0x20);
    dVar18 = dVar27;
    if (in_FPSCR_SZ == '\0') {
      dVar7 = CONCAT44D(fVar26,uVar10);
      dVar18 = in_xd2;
    }
    if (in_FPSCR_PR == '\0') {
      dVar7 = CONCAT44D((int)(D2U(dVar7) >> 0x20),F32LO(dVar7) - fVar19);
    }
    else {
      dVar7 = dVar7 - dVar21;
    }
    if (in_FPSCR_SZ == '\0') {
      uVar25 = ar4[3];
      *(float *)(unsigned)((int)puVar4 + -0x28) = SUB84(in_dr0,0);
      *(undefined4 *)(unsigned)((int)puVar4 + -0x1c) = uVar10;
      *(uint *)(unsigned)((int)puVar4 + -0x18) = uVar25;
    }
    else {
      in_xd14 = *(double *)(unsigned)(ar4 + 3);
      *(undefined8 *)(unsigned)((int)puVar4 + -0x28) = in_xd0;
      *(double *)(unsigned)((int)puVar4 + -0x1c) = dVar27;
      uVar25 = SUB84(dVar27,0);
      *(double *)(unsigned)((int)puVar4 + -0x18) = in_xd14;
    }
    unaff_r12 = *ar5;
    fVar26 = F32HI(dVar22);
    if (in_FPSCR_PR == '\0') {
      dVar7 = CONCAT44D((int)(D2U(dVar7) >> 0x20),F32LO(dVar7) * fVar26);
    }
    else {
      dVar7 = dVar7 * dVar22;
    }
    dVar8 = dVar18;
    if (in_FPSCR_SZ == '\0') {
      dVar22 = CONCAT44D(fVar26,SUB84(dVar7,0));
      dVar8 = in_xd10;
    }
    if (in_FPSCR_PR == '\0') {
      dVar22 = CONCAT44D((int)(D2U(dVar22) >> 0x20),F32LO(dVar22) * fVar11);
    }
    else {
      dVar22 = dVar22 * dVar15;
    }
    dVar28 = in_xd14;
    if (in_FPSCR_SZ == '\0') {
      dVar7 = CONCAT44D((int)(D2U(dVar7) >> 0x20),uVar25);
      dVar28 = dVar18;
    }
    if (in_FPSCR_PR == '\0') {
      dVar7 = CONCAT44D((int)(D2U(dVar7) >> 0x20),F32LO(dVar7) - fVar6);
    }
    else {
      dVar7 = dVar7 - dVar14;
    }
    if (in_FPSCR_PR == '\0') {
      dVar7 = CONCAT44D((int)(D2U(dVar7) >> 0x20),
                               F32LO(dVar7) * F32HI(dVar22));
    }
    else {
      dVar7 = dVar7 * dVar22;
    }
    dVar18 = dVar28;
    if (in_FPSCR_SZ == '\0') {
      in_dr12 = CONCAT44D(uVar23,SUB84(dVar7,0));
      dVar18 = in_xd12;
    }
    if (in_FPSCR_PR == '\0') {
      in_dr12 = CONCAT44D((int)((ulonglong)in_dr12 >> 0x20),F32LO(in_dr12) * fVar13);
    }
    else {
      in_dr12 = in_dr12 * dVar15;
    }
    if (in_FPSCR_SZ == '\0') {
      dVar7 = CONCAT44D((int)(D2U(dVar7) >> 0x20),ar5[1]);
    }
    else {
      dVar28 = *(double *)(unsigned)(ar5 + 1);
    }
    if (in_FPSCR_PR == '\0') {
      fVar26 = 1.0 / F32LO(dVar7);
    }
    else {
      fVar26 = SUB84(CONCAT44D(uVar10,0x3f800000) / dVar7,0);
    }
    if (in_FPSCR_SZ == '\0') {
      *(float *)(unsigned)((int)puVar4 + -0x10) = SUB84(dVar7,0);
      fVar17 = (float)ar5[2];
      *(float *)(unsigned)((int)puVar4 + -4) = fVar17;
      dVar7 = CONCAT44D(fVar11,fVar17);
    }
    else {
      *(double *)(unsigned)((int)puVar4 + -0x10) = dVar28;
      dVar28 = *(double *)(unsigned)(ar5 + 2);
      *(double *)(unsigned)((int)puVar4 + -4) = dVar28;
      dVar7 = in_xd4;
    }
    if (in_FPSCR_PR == '\0') {
      dVar7 = CONCAT44D((int)(D2U(dVar7) >> 0x20),fVar17 - fVar19);
    }
    else {
      dVar7 = dVar7 - dVar21;
    }
    if (in_FPSCR_SZ == '\0') {
      dVar27 = CONCAT44D(ar5[3],fVar26);
    }
    else {
      dVar27 = *(double *)(unsigned)(ar5 + 3);
    }
    if (in_FPSCR_PR == '\0') {
      dVar7 = CONCAT44D((int)(D2U(dVar7) >> 0x20),F32LO(dVar7) * F32LO(dVar27));
    }
    else {
      dVar7 = dVar7 * dVar27;
    }
    dVar29 = dVar28;
    if (in_FPSCR_SZ == '\0') {
      dVar15 = CONCAT44D(fVar13,SUB84(dVar7,0));
      dVar29 = in_xd4;
    }
    fVar17 = F32HI(dVar7);
    if (in_FPSCR_PR == '\0') {
      dVar15 = CONCAT44D((int)(D2U(dVar15) >> 0x20),F32LO(dVar15) * fVar17);
    }
    else {
      dVar15 = dVar15 * dVar7;
    }
    in_xd2 = dVar27;
    if (in_FPSCR_SZ == '\0') {
      dVar7 = CONCAT44D(fVar17,(int)(D2U(dVar27) >> 0x20));
      in_xd2 = dVar28;
    }
    if (in_FPSCR_PR == '\0') {
      fVar17 = F32LO(dVar7) - fVar6;
    }
    else {
      fVar17 = SUB84(dVar7 - dVar14,0);
    }
    if (in_FPSCR_SZ == '\0') {
      uVar10 = *(undefined4 *)(unsigned)((int)puVar4 + -0x10);
      dVar7 = CONCAT44D(uVar10,fVar17);
      *(undefined4 *)(unsigned)((int)puVar4 + -0x14) = uVar10;
    }
    else {
      dVar7 = *(double *)(unsigned)((int)puVar4 + -0x10);
      uVar10 = (undefined4)(D2U(dVar7) >> 0x20);
      *(double *)(unsigned)((int)puVar4 + -0x14) = dVar7;
    }
    if (in_FPSCR_PR == '\0') {
      dVar7 = CONCAT44D(uVar10,F32LO(dVar7) * F32LO(dVar27));
    }
    else {
      dVar7 = dVar7 * dVar27;
    }
    if (in_FPSCR_SZ == '\0') {
      in_dr0 = CONCAT44D((int)((ulonglong)in_dr0 >> 0x20),SUB84(dVar7,0));
    }
    if (in_FPSCR_PR == '\0') {
      in_dr0 = CONCAT44D((int)((ulonglong)in_dr0 >> 0x20),
                                F32LO(in_dr0) * F32HI(dVar15));
    }
    else {
      in_dr0 = in_dr0 * dVar15;
    }
    if (in_FPSCR_SZ == '\0') {
      dVar7 = CONCAT44D((int)(D2U(dVar7) >> 0x20),*(undefined4 *)(unsigned)((int)puVar4 + -4));
    }
    else {
      in_xd2 = *(double *)(unsigned)((int)puVar4 + -4);
    }
  }
  else {
    if (in_FPSCR_PR == '\0') {
      bVar31 = fVar24 < SUB84(dVar7,0);
    }
    else {
      bVar31 = dVar27 < dVar7;
    }
    pdVar3 = 0x8c4aa4a8;
    if (!bVar31) goto LAB_8c25c5fc;
    if (in_FPSCR_SZ == '\0') {
      in_dr0 = CONCAT44D(uVar10,ar5[1]);
    }
    else {
      in_xd0 = *(undefined8 *)(unsigned)(ar5 + 1);
    }
    if (in_FPSCR_PR == '\0') {
      dVar22 = CONCAT44D(1.0 / F32LO(in_dr0),uVar16);
    }
    else {
      dVar22 = CONCAT44D(0x3f800000,uVar16) / in_dr0;
    }
    if (in_FPSCR_SZ == '\0') {
      dVar27 = CONCAT44D(ar5[2],fVar24);
    }
    else {
      dVar27 = *(double *)(unsigned)(ar5 + 2);
    }
    pdVar3 = (double *)(unsigned)*ar5;
    uVar10 = (undefined4)(D2U(dVar27) >> 0x20);
    dVar18 = dVar27;
    if (in_FPSCR_SZ == '\0') {
      dVar7 = CONCAT44D(fVar26,uVar10);
      dVar18 = in_xd2;
    }
    if (in_FPSCR_PR == '\0') {
      dVar7 = CONCAT44D((int)(D2U(dVar7) >> 0x20),F32LO(dVar7) - fVar19);
    }
    else {
      dVar7 = dVar7 - dVar21;
    }
    if (in_FPSCR_SZ == '\0') {
      uVar25 = ar5[3];
      *(float *)(unsigned)((int)puVar4 + -0x28) = SUB84(in_dr0,0);
      *(undefined4 *)(unsigned)((int)puVar4 + -0x1c) = uVar10;
      *(uint *)(unsigned)((int)puVar4 + -0x18) = uVar25;
    }
    else {
      in_xd14 = *(double *)(unsigned)(ar5 + 3);
      *(undefined8 *)(unsigned)((int)puVar4 + -0x28) = in_xd0;
      *(double *)(unsigned)((int)puVar4 + -0x1c) = dVar27;
      uVar25 = SUB84(dVar27,0);
      *(double *)(unsigned)((int)puVar4 + -0x18) = in_xd14;
    }
    unaff_r12 = *ar4;
    fVar26 = F32HI(dVar22);
    if (in_FPSCR_PR == '\0') {
      dVar7 = CONCAT44D((int)(D2U(dVar7) >> 0x20),F32LO(dVar7) * fVar26);
    }
    else {
      dVar7 = dVar7 * dVar22;
    }
    dVar8 = dVar18;
    if (in_FPSCR_SZ == '\0') {
      dVar22 = CONCAT44D(fVar26,SUB84(dVar7,0));
      dVar8 = in_xd10;
    }
    if (in_FPSCR_PR == '\0') {
      dVar22 = CONCAT44D((int)(D2U(dVar22) >> 0x20),F32LO(dVar22) * fVar11);
    }
    else {
      dVar22 = dVar22 * dVar15;
    }
    dVar28 = in_xd14;
    if (in_FPSCR_SZ == '\0') {
      dVar7 = CONCAT44D((int)(D2U(dVar7) >> 0x20),uVar25);
      dVar28 = dVar18;
    }
    if (in_FPSCR_PR == '\0') {
      dVar7 = CONCAT44D((int)(D2U(dVar7) >> 0x20),F32LO(dVar7) - fVar6);
    }
    else {
      dVar7 = dVar7 - dVar14;
    }
    if (in_FPSCR_PR == '\0') {
      dVar7 = CONCAT44D((int)(D2U(dVar7) >> 0x20),
                               F32LO(dVar7) * F32HI(dVar22));
    }
    else {
      dVar7 = dVar7 * dVar22;
    }
    dVar18 = dVar28;
    if (in_FPSCR_SZ == '\0') {
      in_dr12 = CONCAT44D(uVar23,SUB84(dVar7,0));
      dVar18 = in_xd12;
    }
    if (in_FPSCR_PR == '\0') {
      in_dr12 = CONCAT44D((int)((ulonglong)in_dr12 >> 0x20),F32LO(in_dr12) * fVar13);
    }
    else {
      in_dr12 = in_dr12 * dVar15;
    }
    if (in_FPSCR_SZ == '\0') {
      dVar7 = CONCAT44D((int)(D2U(dVar7) >> 0x20),ar4[1]);
    }
    else {
      dVar28 = *(double *)(unsigned)(ar4 + 1);
    }
    if (in_FPSCR_PR == '\0') {
      fVar26 = 1.0 / F32LO(dVar7);
    }
    else {
      fVar26 = SUB84(CONCAT44D(uVar10,0x3f800000) / dVar7,0);
    }
    if (in_FPSCR_SZ == '\0') {
      *(float *)(unsigned)((int)puVar4 + -0xc) = SUB84(dVar7,0);
      fVar17 = (float)ar4[2];
      *(float *)(unsigned)((int)puVar4 + -8) = fVar17;
      dVar7 = CONCAT44D(fVar11,fVar17);
    }
    else {
      *(double *)(unsigned)((int)puVar4 + -0xc) = dVar28;
      dVar28 = *(double *)(unsigned)(ar4 + 2);
      *(double *)(unsigned)((int)puVar4 + -8) = dVar28;
      dVar7 = in_xd4;
    }
    if (in_FPSCR_PR == '\0') {
      dVar7 = CONCAT44D((int)(D2U(dVar7) >> 0x20),fVar17 - fVar19);
    }
    else {
      dVar7 = dVar7 - dVar21;
    }
    if (in_FPSCR_SZ == '\0') {
      dVar27 = CONCAT44D(ar4[3],fVar26);
    }
    else {
      dVar27 = *(double *)(unsigned)(ar4 + 3);
    }
    if (in_FPSCR_PR == '\0') {
      dVar7 = CONCAT44D((int)(D2U(dVar7) >> 0x20),F32LO(dVar7) * F32LO(dVar27));
    }
    else {
      dVar7 = dVar7 * dVar27;
    }
    dVar29 = dVar28;
    if (in_FPSCR_SZ == '\0') {
      dVar15 = CONCAT44D(fVar13,SUB84(dVar7,0));
      dVar29 = in_xd4;
    }
    fVar17 = F32HI(dVar7);
    if (in_FPSCR_PR == '\0') {
      dVar15 = CONCAT44D((int)(D2U(dVar15) >> 0x20),F32LO(dVar15) * fVar17);
    }
    else {
      dVar15 = dVar15 * dVar7;
    }
    in_xd2 = dVar27;
    if (in_FPSCR_SZ == '\0') {
      dVar7 = CONCAT44D(fVar17,(int)(D2U(dVar27) >> 0x20));
      in_xd2 = dVar28;
    }
    if (in_FPSCR_PR == '\0') {
      fVar17 = F32LO(dVar7) - fVar6;
    }
    else {
      fVar17 = SUB84(dVar7 - dVar14,0);
    }
    if (in_FPSCR_SZ == '\0') {
      uVar10 = *(undefined4 *)(unsigned)((int)puVar4 + -0xc);
      dVar7 = CONCAT44D(uVar10,fVar17);
      *(undefined4 *)(unsigned)((int)puVar4 + -0x14) = uVar10;
    }
    else {
      dVar7 = *(double *)(unsigned)((int)puVar4 + -0xc);
      uVar10 = (undefined4)(D2U(dVar7) >> 0x20);
      *(double *)(unsigned)((int)puVar4 + -0x14) = dVar7;
    }
    if (in_FPSCR_PR == '\0') {
      dVar7 = CONCAT44D(uVar10,F32LO(dVar7) * F32LO(dVar27));
    }
    else {
      dVar7 = dVar7 * dVar27;
    }
    if (in_FPSCR_SZ == '\0') {
      in_dr0 = CONCAT44D((int)((ulonglong)in_dr0 >> 0x20),SUB84(dVar7,0));
    }
    if (in_FPSCR_PR == '\0') {
      in_dr0 = CONCAT44D((int)((ulonglong)in_dr0 >> 0x20),
                                F32LO(in_dr0) * F32HI(dVar15));
    }
    else {
      in_dr0 = in_dr0 * dVar15;
    }
    if (in_FPSCR_SZ == '\0') {
      dVar7 = CONCAT44D((int)(D2U(dVar7) >> 0x20),*(undefined4 *)(unsigned)((int)puVar4 + -8));
    }
    else {
      in_xd2 = *(double *)(unsigned)((int)puVar4 + -8);
    }
  }
  if (in_FPSCR_SZ == '\0') {
    *(int *)(unsigned)((int)puVar4 + -0x20) = SUB84(dVar7,0);
  }
  else {
    *(double *)(unsigned)((int)puVar4 + -0x20) = in_xd2;
  }
  bVar32 = true;
  in_xd10 = dVar8;
  in_xd4 = dVar29;
  in_xd12 = dVar18;
  if (in_FPSCR_SZ == '\0') {
    *(int *)(unsigned)((int)puVar4 + -0x24) = (int)(D2U(dVar27) >> 0x20);
  }
  else {
    *(double *)(unsigned)((int)puVar4 + -0x24) = dVar27;
  }
LAB_8c25c5fc:
  if (bVar32) {
    if (in_FPSCR_SZ == '\0') {
      dVar7 = (double)(ulonglong)*(uint *)(unsigned)0x8c4aa4d4;
      dVar18 = in_xd2;
    }
    else {
      dVar18 = *(undefined4 *)(unsigned)0x8c4aa4d4;
    }
    fVar17 = F32HI(dVar22);
    if (in_FPSCR_PR == '\0') {
      dVar27 = CONCAT44D((int)(D2U(dVar27) >> 0x20),F32LO(dVar27) - fVar17);
    }
    else {
      dVar27 = dVar27 - dVar22;
    }
    fVar26 = F32LO(dVar22);
    if (in_FPSCR_PR == '\0') {
      fVar11 = F32LO(dVar15) - fVar26;
      dVar22 = CONCAT44D(0x3f800000,F32LO(dVar7) - fVar17);
    }
    else {
      fVar11 = SUB84(dVar15 - dVar22,0);
      dVar22 = CONCAT44D(0x3f800000,SUB84(dVar7,0)) - dVar22;
    }
    dVar7 = in_xd10;
    if (in_FPSCR_SZ == '\0') {
      dVar7 = CONCAT44D(fVar26,fVar11);
    }
    if (in_FPSCR_PR == '\0') {
      fVar17 = F32LO(in_dr0) - F32LO(in_dr12);
    }
    else {
      fVar17 = SUB84(in_dr0 - in_dr12,0);
    }
    dVar15 = dVar18;
    if (in_FPSCR_SZ == '\0') {
      dVar15 = CONCAT44D(SUB84(dVar22,0),fVar26);
    }
    if (in_FPSCR_PR == '\0') {
      dVar15 = CONCAT44D(F32HI(dVar15) / F32LO(dVar27),SUB84(dVar15,0)
                               );
    }
    else {
      dVar15 = dVar15 / dVar27;
    }
    if (in_FPSCR_SZ == '\0') {
      dVar22 = CONCAT44D((int)(D2U(dVar22) >> 0x20),*(undefined4 *)(unsigned)0x8c4aa4d4);
    }
    else {
      dVar18 = *(undefined4 *)(unsigned)0x8c4aa4d4;
    }
    if (in_FPSCR_PR == '\0') {
      fVar26 = F32HI(dVar22) / F32LO(dVar22);
    }
    else {
      fVar26 = (float)((ulonglong)(dVar22 / dVar22) >> 0x20);
    }
    fVar11 = (float)((uint)pdVar3 >> 0x18);
    dVar8 = CONCAT44D(fVar26,fVar11);
    uVar10 = (undefined4)(D2U(dVar15) >> 0x20);
    dVar22 = dVar15;
    if (in_FPSCR_SZ == '\0') {
      dVar22 = CONCAT44D(uVar10,fVar17);
    }
    fVar17 = F32HI(dVar22);
    if (in_FPSCR_PR == '\0') {
      dVar7 = CONCAT44D(fVar17 * F32LO(dVar7) + F32HI(dVar7),
                               SUB84(dVar7,0));
    }
    if (in_FPSCR_SZ == '\0') {
      dVar7 = CONCAT44D((int)(D2U(dVar7) >> 0x20),SUB84(in_dr12,0));
      in_xd12 = in_xd4;
    }
    if (in_FPSCR_PR == '\0') {
      dVar7 = CONCAT44D((int)(D2U(dVar7) >> 0x20),
                               fVar17 * F32LO(dVar22) + F32LO(dVar7));
    }
    dVar22 = dVar8;
    if (in_FPSCR_SZ == '\0') {
      dVar22 = (double)((ulonglong)(uint)fVar26 << 0x20);
    }
    if (in_FPSCR_PR == '\0') {
      dVar21 = CONCAT44D(fVar12 * F32HI(dVar7),fVar19);
    }
    else {
      dVar21 = dVar21 * dVar7;
    }
    if (in_FPSCR_SZ == '\0') {
      *(float *)(unsigned)((int)puVar4 + -0x28) = fVar26;
    }
    else {
      *(double *)(unsigned)((int)puVar4 + -0x28) = dVar8;
    }
    fVar17 = F32HI(dVar22);
    if (in_FPSCR_PR == '\0') {
      fVar12 = F32HI(dVar21);
      dVar21 = CONCAT44D(fVar12,fVar17 * fVar12 + F32LO(dVar21));
      fVar6 = fVar17 * fVar20 * F32LO(dVar7) + fVar6;
    }
    else {
      fVar6 = SUB84(dVar14 * dVar7,0);
    }
    if (in_FPSCR_SZ == '\0') {
      *(int *)(unsigned)((int)puVar4 + -0x1c) = SUB84(dVar21,0);
      *(float *)(unsigned)((int)puVar4 + -0x18) = fVar6;
    }
    else {
      *(double *)(unsigned)((int)puVar4 + -0x1c) = in_xd8;
      *(double *)(unsigned)((int)puVar4 + -0x18) = in_xd6;
    }
    if (in_FPSCR_PR == '\0') {
      bVar32 = fVar11 < SUB84(dVar22,0);
    }
    else {
      bVar32 = dVar8 < dVar22;
    }
    dVar22 = dVar18;
    if (in_FPSCR_SZ == '\0') {
      dVar22 = CONCAT44D(fVar11,SUB84(dVar7,0));
    }
    if (bVar32) {
      if (in_FPSCR_SZ == '\0') {
        dVar8 = CONCAT44D(fVar26,(*(undefined1 *)(unsigned)0x8c25c6a0));
      }
      else {
        dVar18 = CONCAT44D((*(uint *)(unsigned)0x8c25c6a4),(*(undefined1 *)(unsigned)0x8c25c6a0));
      }
      if (in_FPSCR_PR == '\0') {
        dVar22 = CONCAT44D(F32HI(dVar22) + F32LO(dVar8),
                                  SUB84(dVar22,0));
      }
      else {
        dVar22 = dVar22 + dVar8;
      }
    }
    fVar20 = (float)((uint)pdVar3 >> 0x10 & 0xff);
    dVar14 = dVar18;
    if (in_FPSCR_SZ == '\0') {
      dVar22 = CONCAT44D((int)(D2U(dVar22) >> 0x20),fVar20);
      dVar14 = in_xd12;
    }
    if (in_FPSCR_PR == '\0' && fVar20 < 0.0) {
      fVar17 = (*(undefined1 *)(unsigned)0x8c25c6a0);
      if (in_FPSCR_SZ != '\0') {
        dVar18 = CONCAT44D((*(uint *)(unsigned)0x8c25c6a4),(*(undefined1 *)(unsigned)0x8c25c6a0));
        fVar17 = fVar20;
      }
      if (in_FPSCR_PR == '\0') {
        dVar22 = CONCAT44D((int)(D2U(dVar22) >> 0x20),F32LO(dVar22) + fVar17);
      }
      else {
        dVar22 = dVar22 + (double)(ulonglong)(uint)fVar17;
      }
    }
    fVar20 = (float)((uint)pdVar3 >> 8 & 0xff);
    dVar7 = dVar18;
    if (in_FPSCR_SZ == '\0') {
      dVar7 = CONCAT44D(fVar20,fVar6);
    }
    uVar25 = (uint)(D2U(dVar7) >> 0x20);
    dVar8 = dVar7;
    if (in_FPSCR_PR != '\0' || 0.0 <= fVar20) {
      if (in_FPSCR_SZ == '\0') {
        dVar7 = (double)(ulonglong)uVar25;
        dVar8 = in_xd6;
      }
    }
    else {
      if (in_FPSCR_SZ == '\0') {
        dVar7 = CONCAT44D(uVar25,uVar25);
        dVar8 = in_xd6;
        fVar20 = (*(undefined1 *)(unsigned)0x8c25c6a0);
      }
      else {
        dVar18 = CONCAT44D((*(uint *)(unsigned)0x8c25c6a4),(*(undefined1 *)(unsigned)0x8c25c6a0));
      }
      if (in_FPSCR_PR == '\0') {
        dVar7 = (double)(ulonglong)(uint)(F32LO(dVar7) + fVar20);
      }
      else {
        dVar7 = dVar7 + (double)(ulonglong)(uint)fVar20;
      }
    }
    fVar20 = (float)((uint)pdVar3 & 0xff);
    dVar28 = dVar18;
    if (in_FPSCR_SZ == '\0') {
      dVar28 = CONCAT44D(fVar20,SUB84(dVar7,0));
    }
    uVar25 = (uint)(D2U(dVar28) >> 0x20);
    dVar29 = dVar28;
    if (in_FPSCR_PR != '\0' || 0.0 <= fVar20) {
      if (in_FPSCR_SZ == '\0') {
        dVar21 = (double)(ulonglong)uVar25;
        dVar29 = in_xd8;
      }
    }
    else {
      if (in_FPSCR_SZ == '\0') {
        dVar21 = CONCAT44D((int)(D2U(dVar21) >> 0x20),uVar25);
        dVar29 = in_xd8;
        fVar20 = (*(undefined1 *)(unsigned)0x8c25c854);
      }
      else {
        dVar18 = CONCAT44D(0x4f000000,(*(undefined1 *)(unsigned)0x8c25c854));
      }
      if (in_FPSCR_PR == '\0') {
        dVar21 = (double)(ulonglong)(uint)(F32LO(dVar21) + fVar20);
      }
      else {
        dVar21 = dVar21 + (double)(ulonglong)(uint)fVar20;
      }
    }
    fVar20 = (float)(unaff_r12 >> 0x18);
    dVar7 = dVar18;
    if (in_FPSCR_SZ == '\0') {
      dVar7 = CONCAT44D(fVar20,SUB84(dVar28,0));
    }
    if (in_FPSCR_PR == '\0' && fVar20 < 0.0) {
      fVar17 = (*(undefined1 *)(unsigned)0x8c25c854);
      if (in_FPSCR_SZ != '\0') {
        dVar18 = CONCAT44D(0x4f000000,(*(undefined1 *)(unsigned)0x8c25c854));
        fVar17 = fVar20;
      }
      if (in_FPSCR_PR == '\0') {
        dVar7 = CONCAT44D(F32HI(dVar7) + fVar17,SUB84(dVar7,0));
      }
      else {
        dVar7 = dVar7 + (double)(ulonglong)(uint)fVar17;
      }
    }
    fVar20 = (float)(unaff_r12 >> 0x10 & 0xff);
    dVar28 = dVar18;
    if (in_FPSCR_SZ == '\0') {
      dVar28 = CONCAT44D(fVar20,SUB84(dVar21,0));
    }
    if (in_FPSCR_PR == '\0' && fVar20 < 0.0) {
      fVar17 = (*(undefined1 *)(unsigned)0x8c25c854);
      if (in_FPSCR_SZ != '\0') {
        dVar18 = CONCAT44D(0x4f000000,(*(undefined1 *)(unsigned)0x8c25c854));
        fVar17 = fVar20;
      }
      if (in_FPSCR_PR == '\0') {
        dVar28 = CONCAT44D(F32HI(dVar28) + fVar17,SUB84(dVar28,0));
      }
      else {
        dVar28 = dVar28 + (double)(ulonglong)(uint)fVar17;
      }
    }
    fVar20 = (float)(unaff_r12 >> 8 & 0xff);
    dVar21 = dVar18;
    if (in_FPSCR_SZ == '\0') {
      dVar15 = CONCAT44D(uVar10,fVar20);
      dVar21 = in_xd10;
    }
    if (in_FPSCR_PR == '\0' && fVar20 < 0.0) {
      fVar17 = (*(undefined1 *)(unsigned)0x8c25c854);
      if (in_FPSCR_SZ != '\0') {
        dVar18 = CONCAT44D(0x4f000000,(*(undefined1 *)(unsigned)0x8c25c854));
        fVar17 = fVar20;
      }
      if (in_FPSCR_PR == '\0') {
        dVar15 = CONCAT44D((int)(D2U(dVar15) >> 0x20),F32LO(dVar15) + fVar17);
      }
      else {
        dVar15 = dVar15 + (double)(ulonglong)(uint)fVar17;
      }
    }
    dVar9 = (double)(ulonglong)(uint)(float)(unaff_r12 & 0xff);
    dVar30 = dVar18;
    if (in_FPSCR_SZ == '\0') {
      dVar27 = dVar9;
      dVar30 = in_xd14;
    }
    uVar10 = SUB84(dVar27,0);
    if (in_FPSCR_PR != '\0' || 0.0 <= (float)(unaff_r12 & 0xff)) {
      dVar27 = dVar30;
      if (in_FPSCR_SZ == '\0') {
        dVar27 = CONCAT44D(uVar10,uVar10);
      }
    }
    else {
      if (in_FPSCR_SZ == '\0') {
        dVar9 = (double)(ulonglong)(uint)(*(undefined1 *)(unsigned)0x8c25c854);
        dVar27 = CONCAT44D(uVar10,uVar10);
      }
      else {
        dVar18 = CONCAT44D(0x4f000000,(*(undefined1 *)(unsigned)0x8c25c854));
        dVar27 = dVar30;
      }
      if (in_FPSCR_PR == '\0') {
        dVar27 = CONCAT44D(F32HI(dVar27) + F32LO(dVar9),
                                  SUB84(dVar27,0));
      }
      else {
        dVar27 = dVar27 + dVar9;
      }
    }
    fVar20 = F32HI(dVar22);
    if (in_FPSCR_PR == '\0') {
      dVar7 = CONCAT44D(F32HI(dVar7) - fVar20,SUB84(dVar7,0));
    }
    else {
      dVar7 = dVar7 - dVar22;
    }
    dVar5 = dVar15;
    if (in_FPSCR_SZ == '\0') {
      dVar5 = (double)(D2U(dVar15) & 0xffffffff00000000);
    }
    fVar17 = F32LO(dVar7);
    if (in_FPSCR_PR == '\0') {
      fVar26 = F32LO(dVar15) - fVar17;
    }
    else {
      fVar26 = SUB84(dVar15 - dVar7,0);
    }
    in_xd2 = dVar22;
    if (in_FPSCR_SZ == '\0') {
      dVar27 = CONCAT44D((int)(D2U(dVar27) >> 0x20),fVar20);
      in_xd2 = dVar30;
    }
    fVar12 = F32LO(dVar22);
    fVar20 = F32HI(dVar5);
    if (in_FPSCR_PR == '\0') {
      fVar11 = F32LO(dVar28);
      dVar28 = CONCAT44D(F32HI(dVar28) - fVar12,fVar11);
      dVar27 = CONCAT44D(F32HI(dVar27) - fVar11,
                                fVar20 * F32HI(dVar7) + F32LO(dVar27));
    }
    else {
      dVar28 = dVar28 - dVar22;
      fVar11 = F32LO(dVar28);
      dVar27 = dVar27 - dVar28;
    }
    if (in_FPSCR_SZ == '\0') {
      dVar22 = (double)(D2U(dVar7) & 0xffffffff);
      in_xd4 = dVar14;
      dVar14 = CONCAT44D(fVar12,fVar17);
    }
    else {
      fVar17 = F32LO(dVar14);
      in_xd4 = dVar8;
    }
    fVar12 = F32LO(dVar22);
    fVar13 = F32LO(dVar9);
    if (in_FPSCR_PR == '\0') {
      fVar12 = fVar20 * fVar26 + fVar12;
      dVar14 = CONCAT44D(fVar20 * F32HI(dVar28) +
                                F32HI(dVar14),fVar17);
    }
    dVar15 = dVar29;
    if (in_FPSCR_SZ == '\0') {
      fVar13 = F32LO(dVar27);
      in_xd2 = dVar18;
      dVar15 = CONCAT44D(fVar11,fVar12);
    }
    dVar7 = CONCAT44D(0x4f000000,fVar13);
    if (in_FPSCR_PR == '\0') {
      dVar15 = CONCAT44D(fVar20 * F32HI(dVar27) +
                                F32HI(dVar15),SUB84(dVar15,0));
    }
    if (in_FPSCR_PR != '\0' || 0x4f000000 <= fVar13) {
      if (in_FPSCR_PR == '\0') {
        dVar7 = CONCAT44D(0x4f000000 + 0x4f000000,
                                 fVar13 - (0x4f000000 + 0x4f000000));
      }
      else {
        dVar7 = (dVar7 + dVar7) - (dVar7 + dVar7);
      }
    }
    if (in_FPSCR_PR == '\0') {
      iVar33 = (int)SUB84(dVar7,0);
    }
    else {
      iVar33 = (int)dVar7;
    }
    uVar10 = (undefined4)(D2U(dVar7) >> 0x20);
    dVar7 = CONCAT44D(uVar10,0x4f000000);
    fVar20 = F32HI(dVar14);
    if (in_FPSCR_PR == '\0') {
      bVar32 = fVar20 < 0x4f000000;
    }
    else {
      bVar32 = dVar14 < dVar7;
    }
    if (!bVar32) {
      if (in_FPSCR_PR == '\0') {
        dVar7 = CONCAT44D(uVar10,0x4f000000 + 0x4f000000);
        dVar14 = CONCAT44D(fVar20 - (0x4f000000 + 0x4f000000),SUB84(dVar14,0));
      }
      else {
        dVar7 = dVar7 + dVar7;
        dVar14 = dVar14 - dVar7;
      }
    }
    if (in_FPSCR_PR == '\0') {
      iVar34 = (int)F32HI(dVar14);
    }
    else {
      iVar34 = (int)dVar14;
    }
    uVar10 = (undefined4)(D2U(dVar7) >> 0x20);
    dVar7 = CONCAT44D(uVar10,0x4f000000);
    if (in_FPSCR_PR == '\0') {
      bVar32 = SUB84(dVar15,0) < 0x4f000000;
    }
    else {
      bVar32 = dVar15 < dVar7;
    }
    if (!bVar32) {
      if (in_FPSCR_PR == '\0') {
        dVar7 = CONCAT44D(uVar10,0x4f000000 + 0x4f000000);
        dVar15 = CONCAT44D((int)(D2U(dVar15) >> 0x20),
                                  F32LO(dVar15) - (0x4f000000 + 0x4f000000));
      }
      else {
        dVar7 = dVar7 + dVar7;
        dVar15 = dVar15 - dVar7;
      }
    }
    if (in_FPSCR_PR == '\0') {
      iVar35 = (int)SUB84(dVar15,0);
    }
    else {
      iVar35 = (int)dVar15;
    }
    uVar10 = (undefined4)(D2U(dVar7) >> 0x20);
    dVar7 = CONCAT44D(uVar10,0x4f000000);
    fVar20 = F32HI(dVar15);
    if (in_FPSCR_PR == '\0') {
      bVar32 = fVar20 < 0x4f000000;
    }
    else {
      bVar32 = dVar15 < dVar7;
    }
    if (!bVar32) {
      if (in_FPSCR_PR == '\0') {
        dVar7 = CONCAT44D(uVar10,0x4f000000 + 0x4f000000);
        dVar15 = CONCAT44D(fVar20 - (0x4f000000 + 0x4f000000),SUB84(dVar15,0));
      }
      else {
        dVar7 = dVar7 + dVar7;
        dVar15 = dVar15 - dVar7;
      }
    }
    if (in_FPSCR_PR == '\0') {
      uVar25 = (uint)F32HI(dVar15);
    }
    else {
      uVar25 = (uint)dVar15;
    }
    pdVar3 = (double *)(unsigned)(iVar33 << 0x18 | iVar34 << 0x10 | iVar35 << 8 | uVar25);
    in_xd6 = dVar8;
    in_xd8 = dVar29;
    in_xd10 = dVar21;
  }
  if (in_FPSCR_SZ == '\0') {
    dVar21 = CONCAT44D(*(undefined4 *)(unsigned)((int)puVar4 + -0x24),
                              *(undefined4 *)(unsigned)((int)puVar4 + -0x18));
    fVar20 = *(float *)(unsigned)((int)puVar4 + -0x1c);
    dVar22 = CONCAT44D(*(undefined4 *)(unsigned)((int)puVar4 + -0x20),fVar20);
    dVar27 = CONCAT44D(fVar20,SUB84(dVar15,0));
  }
  else {
    in_xd10 = *(double *)(unsigned)((int)puVar4 + -0x18);
    dVar21 = *(double *)(unsigned)((int)puVar4 + -0x24);
    dVar27 = *(double *)(unsigned)((int)puVar4 + -0x1c);
    dVar22 = *(double *)(unsigned)((int)puVar4 + -0x20);
    fVar20 = F32LO(dVar22);
    in_xd8 = dVar27;
  }
  fVar17 = F32HI(dVar22);
  if (in_FPSCR_PR == '\0') {
    dVar27 = CONCAT44D(F32HI(dVar27) - fVar17,SUB84(dVar27,0));
  }
  else {
    dVar27 = dVar27 - dVar22;
  }
  fVar26 = F32LO(dVar21);
  dVar15 = in_xd10;
  if (in_FPSCR_SZ == '\0') {
    dVar27 = CONCAT44D((int)(D2U(dVar27) >> 0x20),fVar26);
    dVar15 = in_xd4;
  }
  fVar12 = F32HI(dVar21);
  if (in_FPSCR_PR == '\0') {
    dVar27 = CONCAT44D((int)(D2U(dVar27) >> 0x20),F32LO(dVar27) - fVar12);
  }
  else {
    dVar27 = dVar27 - dVar21;
  }
  fVar11 = (*(undefined1 *)(unsigned)0x8c25c85c);
  if (in_FPSCR_SZ != '\0') {
    in_xd6 = CONCAT44D(0xe0000000,(*(undefined1 *)(unsigned)0x8c25c85c));
    fVar11 = F32LO(dVar14);
  }
  *(unsigned *)(unsigned)(ar6 + 0x18) = pdVar3;
  uVar10 = 0xe0000000;
  fVar13 = F32HI(dVar27);
  dVar14 = dVar27;
  if (in_FPSCR_SZ == '\0') {
    dVar7 = CONCAT44D((int)(D2U(dVar7) >> 0x20),fVar13);
    dVar14 = in_xd2;
  }
  if (in_FPSCR_PR == '\0') {
    dVar7 = CONCAT44D((int)(D2U(dVar7) >> 0x20),F32LO(dVar7) * fVar13);
  }
  else {
    dVar7 = dVar7 * dVar27;
  }
  fVar19 = F32LO(dVar27);
  fVar6 = fVar19;
  if (in_FPSCR_SZ != '\0') {
    fVar6 = F32HI(dVar15);
  }
  if (in_FPSCR_PR == '\0') {
    fVar6 = SQRT(fVar6 * fVar19 + F32LO(dVar7));
    dVar7 = CONCAT44D((int)(D2U(dVar7) >> 0x20),fVar6);
    fVar6 = 1.0 / fVar6;
    dVar18 = CONCAT44D(fVar13 * fVar6 * fVar11,fVar19 * fVar6 * fVar11);
  }
  else {
    dVar7 = SQRT(dVar7);
    dVar18 = CONCAT44D(0x3f800000,fVar11) / dVar7;
    fVar11 = F32LO(dVar18);
    dVar18 = dVar27 * dVar18 * dVar18 * dVar18 * dVar18;
  }
  fVar6 = F32HI(dVar18);
  fVar13 = -SUB84(dVar18,0);
  dVar27 = CONCAT44D(fVar6,fVar13);
  if (in_FPSCR_SZ == '\0') {
    dVar15 = CONCAT44D(fVar13,fVar11);
  }
  if (in_FPSCR_PR == '\0') {
    dVar15 = CONCAT44D(F32HI(dVar15) + fVar13,SUB84(dVar15,0));
  }
  else {
    dVar15 = dVar15 + dVar27;
  }
  dVar18 = dVar27;
  if (in_FPSCR_SZ == '\0') {
    dVar15 = CONCAT44D((int)(D2U(dVar15) >> 0x20),fVar6);
    dVar18 = in_xd6;
  }
  if (in_FPSCR_PR == '\0') {
    dVar15 = CONCAT44D((int)(D2U(dVar15) >> 0x20),F32LO(dVar15) + fVar6);
  }
  else {
    dVar15 = dVar15 + dVar27;
  }
  if (in_FPSCR_SZ == '\0') {
    puVar1 = (undefined8 *)(unsigned)(ar6 + 0xc);
    *(undefined4 *)(unsigned)puVar1 = *(undefined4 *)(unsigned)((int)puVar4 + -0x28);
    dVar7 = CONCAT44D((int)(D2U(dVar7) >> 0x20),fVar20);
    in_xd8 = dVar14;
  }
  else {
    puVar1 = (undefined8 *)(unsigned)(ar6 + 8);
    *puVar1 = *(undefined8 *)(unsigned)((int)puVar4 + -0x28);
  }
  if (in_FPSCR_PR == '\0') {
    dVar7 = CONCAT44D((int)(D2U(dVar7) >> 0x20),F32LO(dVar7) - fVar13);
  }
  else {
    dVar7 = dVar7 - dVar27;
  }
  if (in_FPSCR_SZ == '\0') {
    pdVar2 = (double *)(unsigned)((int)puVar1 + -4);
    *(int *)(unsigned)pdVar2 = SUB84(dVar7,0);
    dVar7 = CONCAT44D((int)(D2U(dVar7) >> 0x20),fVar26);
    in_xd10 = in_xd8;
  }
  else {
    pdVar2 = (double *)(unsigned)(puVar1 + -1);
    *pdVar2 = in_xd8;
  }
  if (in_FPSCR_PR == '\0') {
    dVar7 = CONCAT44D((int)(D2U(dVar7) >> 0x20),F32LO(dVar7) - fVar6);
  }
  else {
    dVar7 = dVar7 - dVar27;
  }
  if (in_FPSCR_SZ == '\0') {
    pdVar2 = (double *)(unsigned)((int)pdVar2 + -4);
    *(int *)(unsigned)pdVar2 = SUB84(dVar7,0);
  }
  else {
    pdVar2 = pdVar2 + -1;
    *pdVar2 = in_xd10;
  }
  *(undefined4 *)(unsigned)((int)pdVar2 + -4) = uVar10;
  *(uint *)(unsigned)((int)pdVar2 + 0x34) = unaff_r12;
  if (in_FPSCR_SZ == '\0') {
    pdVar2 = pdVar2 + 5;
    *(undefined4 *)(unsigned)pdVar2 = *(undefined4 *)(unsigned)((int)puVar4 + -0x14);
    dVar7 = CONCAT44D((int)(D2U(dVar7) >> 0x20),fVar17);
  }
  else {
    pdVar2 = (double *)(unsigned)((int)pdVar2 + 0x24);
    *pdVar2 = *(double *)(unsigned)((int)puVar4 + -0x14);
    in_xd10 = dVar22;
  }
  if (in_FPSCR_PR == '\0') {
    dVar7 = CONCAT44D((int)(D2U(dVar7) >> 0x20),F32LO(dVar7) - fVar13);
  }
  else {
    dVar7 = dVar7 - dVar27;
  }
  if (in_FPSCR_SZ == '\0') {
    pdVar2 = (double *)(unsigned)((int)pdVar2 + -4);
    *(int *)(unsigned)pdVar2 = SUB84(dVar7,0);
    dVar7 = CONCAT44D((int)(D2U(dVar7) >> 0x20),fVar12);
  }
  else {
    pdVar2 = pdVar2 + -1;
    *pdVar2 = in_xd10;
    in_xd10 = dVar21;
  }
  if (in_FPSCR_PR == '\0') {
    dVar7 = CONCAT44D((int)(D2U(dVar7) >> 0x20),F32LO(dVar7) - fVar6);
  }
  else {
    dVar7 = dVar7 - dVar27;
  }
  if (in_FPSCR_SZ == '\0') {
    pdVar2 = (double *)(unsigned)((int)pdVar2 + -4);
    *(int *)(unsigned)pdVar2 = SUB84(dVar7,0);
  }
  else {
    pdVar2 = pdVar2 + -1;
    *pdVar2 = in_xd10;
  }
  *(undefined4 *)(unsigned)((int)pdVar2 + -4) = uVar10;
  *(unsigned *)(unsigned)((int)pdVar2 + 0x34) = pdVar3;
  fVar11 = F32HI(dVar15);
  if (in_FPSCR_SZ == '\0') {
    pdVar2 = pdVar2 + 5;
    *(undefined4 *)(unsigned)pdVar2 = *(undefined4 *)(unsigned)((int)puVar4 + -0x28);
    dVar7 = CONCAT44D((int)(D2U(dVar7) >> 0x20),fVar11);
  }
  else {
    pdVar2 = (double *)(unsigned)((int)pdVar2 + 0x24);
    *pdVar2 = *(double *)(unsigned)((int)puVar4 + -0x28);
    in_xd10 = dVar15;
  }
  if (in_FPSCR_PR == '\0') {
    dVar7 = CONCAT44D((int)(D2U(dVar7) >> 0x20),F32LO(dVar7) + fVar20);
  }
  else {
    dVar7 = dVar7 + dVar22;
  }
  if (in_FPSCR_SZ == '\0') {
    pdVar2 = (double *)(unsigned)((int)pdVar2 + -4);
    *(int *)(unsigned)pdVar2 = SUB84(dVar7,0);
    dVar7 = CONCAT44D((int)(D2U(dVar7) >> 0x20),SUB84(dVar15,0));
  }
  else {
    pdVar2 = pdVar2 + -1;
    *pdVar2 = in_xd10;
    in_xd10 = dVar18;
  }
  if (in_FPSCR_PR == '\0') {
    fVar26 = F32LO(dVar7) + fVar26;
  }
  else {
    fVar26 = SUB84(dVar7 + dVar21,0);
  }
  if (in_FPSCR_SZ == '\0') {
    pdVar2 = (double *)(unsigned)((int)pdVar2 + -4);
    *(float *)(unsigned)pdVar2 = fVar26;
  }
  else {
    pdVar2 = pdVar2 + -1;
    *pdVar2 = in_xd10;
  }
  *(undefined4 *)(unsigned)((int)pdVar2 + -4) = uVar10;
  if (in_FPSCR_PR == '\0') {
    dVar21 = CONCAT44D(fVar11 + fVar17,F32LO(dVar15) + fVar12);
  }
  else {
    dVar21 = dVar15 + dVar22 + dVar21;
  }
  *(uint *)(unsigned)((int)pdVar2 + 0x34) = unaff_r12;
  uVar10 = 0xf0000000;
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)(unsigned)(pdVar2 + 5) = *(undefined4 *)(unsigned)((int)puVar4 + -0x14);
    *(int *)(unsigned)((int)pdVar2 + 0x24) = (int)(D2U(dVar21) >> 0x20);
    pdVar2 = pdVar2 + 4;
    *(int *)(unsigned)pdVar2 = SUB84(dVar21,0);
  }
  else {
    *(undefined8 *)(unsigned)((int)pdVar2 + 0x24) = *(undefined8 *)(unsigned)((int)puVar4 + -0x14);
    *(double *)(unsigned)((int)pdVar2 + 0x1c) = dVar21;
    pdVar2 = (double *)(unsigned)((int)pdVar2 + 0x14);
    *pdVar2 = dVar18;
  }
  *(undefined4 *)(unsigned)((int)pdVar2 + -4) = uVar10;
  return (int)pdVar2 + 0x1c;
}

__asm__(".globl _FUN_8c25c4d2\n.set _FUN_8c25c4d2, _FUN_8c25c4d2_def\n");
