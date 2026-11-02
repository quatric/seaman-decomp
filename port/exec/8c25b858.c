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
undefined4 * FUN_8c25b858_def(undefined4 *ar4,undefined4 *ar5,undefined4 *ar6,undefined8 *ar7)

{
  ring[rp++ & 255] = "FUN_8c25b858";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 228; for (int i_ = 0; i_ < 228; i_++) z_[i_] = 0; }
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  uint *puVar5;
  uint uVar6;
  uint uVar7;
  undefined4 *puVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  undefined8 *puVar12;
  double *pdVar13;
  undefined1 *puVar14;
  undefined1 *puVar15;
  double in_dr0 = 0;
  double dVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  undefined4 in_fr5 = 0;
  double dVar25;
  undefined4 in_fr9 = 0;
  float fVar27;
  double dVar28;
  undefined4 in_fr11 = 0;
  double dVar29;
  double in_dr12 = 0;
  double dVar31;
  float fVar32;
  double in_dr14 = 0;
  undefined8 in_xd0 = 0;
  double in_xd2 = 0;
  double dVar33;
  double dVar34;
  double in_xd4 = 0;
  double dVar35;
  double in_xd6 = 0;
  double in_xd8 = 0;
  double in_xd10 = 0;
  double in_xd12 = 0;
  double in_xd14 = 0;
  double dVar36;
  bool bVar37;
  bool bVar38;
  int iVar39;
  int iVar40;
  char in_FPSCR_PR = 0;
  char in_FPSCR_SZ = 0;
  float fVar24;
  undefined4 uVar26;
  float fVar30;
  
  uVar3 = 0xe0000000;
  if (in_FPSCR_SZ == '\0') {
    *(ulonglong *)(unsigned)((undefined1 *)(fr0_ - 0x20)) = CONCAT44(SUB84(in_dr14,0),((undefined1 *)(fr0_ - 0x20)));
    puVar14 = ((undefined1 *)(fr0_ - 0x20));
  }
  else {
    puVar14 = ((undefined1 *)(fr0_ - 0x28));
  }
  iVar4 = (int)(int)0xffffff44;
  if (in_FPSCR_SZ == '\0') {
    *(int *)(unsigned)(puVar14 + -4) = SUB84(in_dr12,0);
    puVar15 = puVar14 + -8;
    *(int *)(unsigned)(puVar14 + -8) = (int)((ulonglong)in_dr12 >> 0x20);
  }
  else {
    *(double *)(unsigned)(puVar14 + -8) = in_xd12;
    puVar15 = puVar14 + -0x10;
    *(double *)(unsigned)(puVar14 + -0x10) = in_dr12;
  }
  iVar2 = iVar4 + 0x4c;
  if (in_FPSCR_SZ == '\0') {
    uVar26 = *(undefined4 *)(unsigned)0x8c4aa4a8;
    dVar20 = CONCAT44D(*(undefined4 *)(unsigned)0x8c4aa4e0,*(undefined4 *)(unsigned)0x8c4aa4dc);
    dVar25 = CONCAT44D(uVar26,*(undefined4 *)(unsigned)((unsigned)0x8c4aa4a8 + 0xc));
    in_fr9 = *(undefined4 *)(unsigned)(0x8c4aa4a8 + 2);
    dVar28 = CONCAT44D(uVar26,in_fr5);
  }
  else {
    dVar25 = *(undefined4 *)(unsigned)0x8c4aa4a8;
    in_xd6 = *(double *)(unsigned)((unsigned)0x8c4aa4a8 + 0xc);
    dVar20 = *(undefined4 *)(unsigned)0x8c4aa4e0;
    in_xd2 = *(undefined4 *)(unsigned)0x8c4aa4dc;
    uVar26 = (undefined4)(D2U(dVar25) >> 0x20);
    in_xd8 = ((undefined1 *)(unsigned)2)[0x8c4aa4a8];
    dVar28 = dVar25;
  }
  if (in_FPSCR_PR == '\0') {
    dVar25 = CONCAT44D(F32HI(dVar25) * F32LO(dVar20),SUB84(dVar25,0));
  }
  else {
    dVar25 = dVar25 * dVar20;
  }
  if (in_FPSCR_SZ == '\0') {
    dVar28 = CONCAT44D(uVar26,in_fr9);
  }
  if (in_FPSCR_PR == '\0') {
    dVar28 = CONCAT44D(F32HI(dVar28) *
                              F32HI(dVar20),SUB84(dVar28,0));
  }
  else {
    dVar28 = dVar28 * dVar20;
  }
  dVar29 = CONCAT44D(0x3f800000,in_fr11);
  dVar33 = dVar29;
  dVar35 = dVar29;
  dVar21 = dVar29;
  if (in_FPSCR_SZ == '\0') {
    dVar33 = 0.007812501848093234;
    dVar35 = in_xd4;
    dVar21 = CONCAT44D(0x3f800000,SUB84(dVar20,0));
  }
  fVar32 = F32HI(dVar25);
  fVar24 = F32HI(dVar28);
  if (in_FPSCR_PR == '\0') {
    dVar20 = CONCAT44D(F32HI(dVar33) / fVar32,F32LO(dVar33) / fVar24);
  }
  else {
    dVar20 = (dVar33 / dVar25) / dVar28;
  }
  *(undefined4 *)(unsigned)(puVar15 + iVar4 + 100) = *ar4;
  if (in_FPSCR_SZ == '\0') {
    dVar21 = CONCAT44D((int)(D2U(dVar21) >> 0x20),ar4[1]);
  }
  else {
    in_xd2 = *(double *)(unsigned)(ar4 + 1);
  }
  if (in_FPSCR_PR == '\0') {
    dVar21 = CONCAT44D(F32HI(dVar21) / F32LO(dVar21),SUB84(dVar21,0));
  }
  else {
    dVar21 = dVar21 / dVar21;
  }
  if (in_FPSCR_SZ == '\0') {
    pdVar13 = (double *)(unsigned)(puVar15 + iVar4 + 0x60);
    *(int *)(unsigned)pdVar13 = (int)(D2U(dVar21) >> 0x20);
    dVar21 = CONCAT44D(*(undefined4 *)(unsigned)(puVar15 + iVar4 + 0x60),ar4[2]);
  }
  else {
    pdVar13 = (double *)(unsigned)(puVar15 + iVar4 + 0x5c);
    *pdVar13 = dVar21;
    in_xd2 = *(double *)(unsigned)(ar4 + 2);
    dVar21 = *(double *)(unsigned)(puVar15 + iVar4 + 0x60);
  }
  fVar27 = F32LO(dVar28);
  fVar30 = F32LO(dVar20);
  if (in_FPSCR_PR == '\0') {
    fVar17 = (F32LO(dVar21) - fVar27) * F32HI(dVar21) * fVar30;
  }
  else {
    fVar17 = SUB84((dVar21 - dVar28) * (dVar21 - dVar28) * dVar20,0);
  }
  if (in_FPSCR_SZ == '\0') {
    pdVar13 = (double *)(unsigned)((int)pdVar13 + -4);
    *(float *)(unsigned)pdVar13 = fVar17;
    dVar21 = CONCAT44D(*(undefined4 *)(unsigned)(puVar15 + iVar4 + 0x60),ar4[3]);
  }
  else {
    pdVar13 = pdVar13 + -1;
    *pdVar13 = in_xd2;
    in_xd2 = *(double *)(unsigned)(ar4 + 3);
    dVar21 = *(double *)(unsigned)(puVar15 + iVar4 + 0x60);
  }
  fVar17 = F32LO(dVar25);
  if (in_FPSCR_PR == '\0') {
    fVar18 = (F32LO(dVar21) - fVar17) * F32HI(dVar21);
  }
  else {
    fVar18 = SUB84((dVar21 - dVar25) * (dVar21 - dVar25),0);
  }
  dVar21 = dVar29;
  if (in_FPSCR_SZ == '\0') {
    dVar21 = CONCAT44D(0x3f800000,fVar18);
  }
  fVar18 = F32HI(dVar20);
  if (in_FPSCR_PR == '\0') {
    dVar21 = CONCAT44D((int)(D2U(dVar21) >> 0x20),F32LO(dVar21) * fVar18);
  }
  else {
    dVar21 = dVar21 * dVar20;
  }
  if (in_FPSCR_SZ == '\0') {
    *(int *)(unsigned)((int)pdVar13 + -4) = SUB84(dVar21,0);
    *(undefined4 *)(unsigned)(pdVar13 + -1) = ar4[1];
    *(undefined4 *)(unsigned)((int)pdVar13 + -0xc) = ar4[2];
    dVar21 = CONCAT44D((int)(D2U(dVar21) >> 0x20),ar4[3]);
    pdVar13 = pdVar13 + -2;
    *(undefined4 *)(unsigned)pdVar13 = ar4[3];
  }
  else {
    pdVar13[-1] = in_xd2;
    pdVar13[-2] = *(double *)(unsigned)(ar4 + 1);
    pdVar13[-3] = *(double *)(unsigned)(ar4 + 2);
    in_xd2 = *(double *)(unsigned)(ar4 + 3);
    pdVar13 = pdVar13 + -4;
    *pdVar13 = in_xd2;
  }
  *(undefined4 *)(unsigned)((int)pdVar13 + 0x34) = *ar5;
  if (in_FPSCR_SZ == '\0') {
    dVar21 = CONCAT44D((int)(D2U(dVar21) >> 0x20),ar5[1]);
  }
  else {
    in_xd2 = *(double *)(unsigned)(ar5 + 1);
  }
  if (in_FPSCR_PR == '\0') {
    dVar21 = CONCAT44D(F32HI(dVar21) / F32LO(dVar21),SUB84(dVar21,0));
  }
  else {
    dVar21 = dVar21 / dVar21;
  }
  uVar26 = (undefined4)(D2U(dVar21) >> 0x20);
  if (in_FPSCR_SZ == '\0') {
    pdVar13 = pdVar13 + 6;
    *(undefined4 *)(unsigned)pdVar13 = uVar26;
    dVar21 = CONCAT44D(uVar26,ar5[2]);
  }
  else {
    pdVar13 = (double *)(unsigned)((int)pdVar13 + 0x2c);
    *pdVar13 = dVar21;
    in_xd2 = *(double *)(unsigned)(ar5 + 2);
  }
  if (in_FPSCR_PR == '\0') {
    fVar19 = F32LO(dVar21) - fVar27;
  }
  else {
    fVar19 = SUB84(dVar21 - dVar28,0);
  }
  if (in_FPSCR_SZ == '\0') {
    dVar21 = CONCAT44D(*(undefined4 *)(unsigned)(puVar15 + iVar4 + 0x7c),fVar19);
  }
  else {
    dVar21 = *(double *)(unsigned)(puVar15 + iVar4 + 0x7c);
  }
  if (in_FPSCR_PR == '\0') {
    fVar19 = F32LO(dVar21) * F32HI(dVar21) * fVar30;
  }
  else {
    fVar19 = SUB84(dVar21 * dVar21 * dVar20,0);
  }
  if (in_FPSCR_SZ == '\0') {
    pdVar13 = (double *)(unsigned)((int)pdVar13 + -4);
    *(float *)(unsigned)pdVar13 = fVar19;
    dVar21 = CONCAT44D(*(undefined4 *)(unsigned)(puVar15 + iVar4 + 0x7c),ar5[3]);
  }
  else {
    pdVar13 = pdVar13 + -1;
    *pdVar13 = in_xd2;
    in_xd2 = *(double *)(unsigned)(ar5 + 3);
    dVar21 = *(double *)(unsigned)(puVar15 + iVar4 + 0x7c);
  }
  if (in_FPSCR_PR == '\0') {
    fVar19 = (F32LO(dVar21) - fVar17) * F32HI(dVar21) * fVar18;
  }
  else {
    fVar19 = SUB84((dVar21 - dVar25) * (dVar21 - dVar25) * dVar20,0);
  }
  if (in_FPSCR_SZ == '\0') {
    *(float *)(unsigned)((int)pdVar13 + -4) = fVar19;
    *(undefined4 *)(unsigned)(pdVar13 + -1) = ar5[1];
    *(undefined4 *)(unsigned)((int)pdVar13 + -0xc) = ar5[2];
    pdVar13 = pdVar13 + -2;
    *(undefined4 *)(unsigned)pdVar13 = ar5[3];
  }
  else {
    pdVar13[-1] = in_xd2;
    pdVar13[-2] = *(double *)(unsigned)(ar5 + 1);
    pdVar13[-3] = *(double *)(unsigned)(ar5 + 2);
    in_xd2 = *(double *)(unsigned)(ar5 + 3);
    pdVar13 = pdVar13 + -4;
    *pdVar13 = in_xd2;
  }
  *(undefined4 *)(unsigned)((int)pdVar13 + 0x34) = *ar6;
  if (in_FPSCR_SZ == '\0') {
    dVar21 = CONCAT44D(0x3f800000,ar6[1]);
  }
  else {
    in_xd2 = *(double *)(unsigned)(ar6 + 1);
    dVar21 = dVar29;
  }
  if (in_FPSCR_PR == '\0') {
    dVar21 = CONCAT44D(F32HI(dVar21) / F32LO(dVar21),SUB84(dVar21,0));
  }
  else {
    dVar21 = dVar21 / dVar21;
  }
  iVar9 = 0;
  if (in_FPSCR_SZ == '\0') {
    pdVar13 = pdVar13 + 6;
    *(int *)(unsigned)pdVar13 = (int)(D2U(dVar21) >> 0x20);
    dVar21 = CONCAT44D(*(undefined4 *)(unsigned)(puVar15 + iVar4 + 0x98),ar6[2]);
  }
  else {
    pdVar13 = (double *)(unsigned)((int)pdVar13 + 0x2c);
    *pdVar13 = dVar21;
    in_xd2 = *(double *)(unsigned)(ar6 + 2);
    dVar21 = *(double *)(unsigned)(puVar15 + iVar4 + 0x98);
  }
  if (in_FPSCR_PR == '\0') {
    fVar19 = (F32LO(dVar21) - fVar27) * F32HI(dVar21) * fVar30;
  }
  else {
    fVar19 = SUB84((dVar21 - dVar28) * (dVar21 - dVar28) * dVar20,0);
  }
  if (in_FPSCR_SZ == '\0') {
    pdVar13 = (double *)(unsigned)((int)pdVar13 + -4);
    *(float *)(unsigned)pdVar13 = fVar19;
    dVar21 = CONCAT44D(*(undefined4 *)(unsigned)(puVar15 + iVar4 + 0x98),ar6[3]);
  }
  else {
    pdVar13 = pdVar13 + -1;
    *pdVar13 = in_xd2;
    in_xd2 = *(double *)(unsigned)(ar6 + 3);
    dVar21 = *(double *)(unsigned)(puVar15 + iVar4 + 0x98);
  }
  if (in_FPSCR_PR == '\0') {
    dVar21 = CONCAT44D((int)(D2U(dVar21) >> 0x20),F32LO(dVar21) - fVar17);
  }
  else {
    dVar21 = dVar21 - dVar25;
  }
  if (in_FPSCR_PR == '\0') {
    fVar19 = F32HI(dVar21);
    dVar20 = CONCAT44D(fVar19,F32LO(dVar21) * fVar19 * fVar18);
  }
  else {
    dVar20 = dVar21 * dVar21 * dVar20;
  }
  if (in_FPSCR_SZ == '\0') {
    *(int *)(unsigned)((int)pdVar13 + -4) = SUB84(dVar20,0);
    *(undefined4 *)(unsigned)(pdVar13 + -1) = ar6[1];
    *(undefined4 *)(unsigned)((int)pdVar13 + -0xc) = ar6[2];
    dVar20 = CONCAT44D((int)(D2U(dVar20) >> 0x20),ar6[3]);
    *(undefined4 *)(unsigned)(pdVar13 + -2) = ar6[3];
    dVar21 = CONCAT44D(*(undefined4 *)(unsigned)0x8c4aa4d4,fVar30);
  }
  else {
    pdVar13[-1] = in_xd2;
    pdVar13[-2] = *(double *)(unsigned)(ar6 + 1);
    pdVar13[-3] = *(double *)(unsigned)(ar6 + 2);
    in_xd2 = *(double *)(unsigned)(ar6 + 3);
    pdVar13[-4] = in_xd2;
    dVar21 = *(undefined4 *)(unsigned)0x8c4aa4d4;
  }
  puVar1 = (undefined4 *)(unsigned)(puVar15 + iVar4 + 0x1c);
  dVar33 = dVar21;
  if (in_FPSCR_SZ == '\0') {
    dVar20 = CONCAT44D((int)(D2U(dVar20) >> 0x20),(int)(D2U(dVar21) >> 0x20));
    dVar33 = in_xd2;
  }
  iVar39 = 2;
  iVar10 = 0;
  if (in_FPSCR_PR == '\0') {
    fVar30 = 1.0 / F32LO(dVar20);
    dVar29 = CONCAT44D(fVar30,in_fr11);
    dVar28 = CONCAT44D(fVar24 * fVar30,fVar27);
    dVar25 = CONCAT44D(fVar32 * fVar30,fVar17);
  }
  else {
    dVar29 = dVar29 / dVar20;
    dVar28 = dVar28 * dVar29;
    dVar25 = dVar25 * dVar29;
  }
  do {
    iVar39 = iVar39 * 0x1c + iVar2;
    if (in_FPSCR_SZ == '\0') {
      dVar20 = CONCAT44D((int)(D2U(dVar20) >> 0x20),
                                *(undefined4 *)(unsigned)(puVar15 + iVar39 + 0x14));
    }
    else {
      dVar33 = *(double *)(unsigned)(puVar15 + iVar39 + 0x14);
    }
    fVar32 = F32HI(dVar21);
    if (in_FPSCR_PR == '\0') {
      bVar37 = fVar32 < SUB84(dVar20,0);
    }
    else {
      bVar37 = dVar21 < dVar20;
    }
    iVar11 = iVar10 * 0x1c + iVar2;
    if (in_FPSCR_SZ == '\0') {
      dVar20 = CONCAT44D((int)(D2U(dVar20) >> 0x20),
                                *(undefined4 *)(unsigned)(puVar15 + iVar11 + 0x14));
    }
    else {
      dVar33 = *(double *)(unsigned)(puVar15 + iVar11 + 0x14);
    }
    if (in_FPSCR_PR == '\0') {
      bVar38 = fVar32 < SUB84(dVar20,0);
    }
    else {
      bVar38 = dVar21 < dVar20;
    }
    if ((bVar37 ^ 1) != -(bVar38 - 1)) {
      if (in_FPSCR_SZ == '\0') {
        dVar21 = CONCAT44D(fVar32,*(undefined4 *)(unsigned)(puVar15 + iVar39 + 0x14));
        dVar20 = CONCAT44D(*(undefined4 *)(unsigned)(puVar15 + iVar11 + 0x14),fVar32);
      }
      else {
        dVar35 = *(double *)(unsigned)(puVar15 + iVar39 + 0x14);
        dVar20 = *(double *)(unsigned)(puVar15 + iVar11 + 0x14);
        dVar33 = dVar21;
      }
      if (in_FPSCR_PR == '\0') {
        dVar20 = CONCAT44D(F32HI(dVar20) - F32LO(dVar21),
                                  F32LO(dVar20) - F32LO(dVar21));
      }
      else {
        dVar20 = (dVar20 - dVar21) - dVar21;
      }
      if (in_FPSCR_SZ == '\0') {
        dVar21 = CONCAT44D((int)(D2U(dVar21) >> 0x20),
                                  *(undefined4 *)(unsigned)(puVar15 + iVar39 + 0xc));
      }
      else {
        dVar35 = *(double *)(unsigned)(puVar15 + iVar39 + 0xc);
      }
      puVar5 = puVar1 + iVar9 * 4;
      dVar36 = dVar33;
      if (in_FPSCR_SZ == '\0') {
        in_dr14 = CONCAT44D((int)((ulonglong)in_dr14 >> 0x20),SUB84(dVar20,0));
        dVar36 = in_xd14;
      }
      if (in_FPSCR_PR == '\0') {
        fVar32 = F32LO(in_dr14) / F32HI(dVar20);
      }
      else {
        fVar32 = SUB84(in_dr14 / dVar20,0);
      }
      if (in_FPSCR_SZ == '\0') {
        dVar20 = CONCAT44D(SUB84(dVar21,0),*(undefined4 *)(unsigned)(puVar15 + iVar11 + 0xc));
      }
      else {
        dVar33 = *(double *)(unsigned)(puVar15 + iVar11 + 0xc);
        dVar20 = dVar35;
      }
      if (in_FPSCR_PR == '\0') {
        dVar20 = CONCAT44D((int)(D2U(dVar20) >> 0x20),F32LO(dVar20) - F32LO(dVar21)
                                 );
      }
      else {
        dVar20 = dVar20 - dVar21;
      }
      if (in_FPSCR_SZ == '\0') {
        dVar29 = CONCAT44D((int)(D2U(dVar29) >> 0x20),
                                  *(undefined4 *)(unsigned)(puVar15 + iVar39 + 0x10));
        dVar16 = CONCAT44D(fVar32,SUB84(in_dr0,0));
      }
      else {
        in_xd10 = *(double *)(unsigned)(puVar15 + iVar39 + 0x10);
        dVar16 = dVar36;
      }
      fVar24 = F32HI(dVar16);
      if (in_FPSCR_PR == '\0') {
        dVar20 = CONCAT44D(fVar24 * F32LO(dVar20) + F32HI(dVar20),
                                  SUB84(dVar20,0));
      }
      if (in_FPSCR_SZ == '\0') {
        dVar20 = CONCAT44D((int)(D2U(dVar20) >> 0x20),
                                  *(undefined4 *)(unsigned)(puVar15 + iVar11 + 0x10));
      }
      else {
        dVar33 = *(double *)(unsigned)(puVar15 + iVar11 + 0x10);
      }
      if (in_FPSCR_PR == '\0') {
        dVar20 = CONCAT44D((int)(D2U(dVar20) >> 0x20),F32LO(dVar20) - F32LO(dVar29)
                                 );
      }
      else {
        dVar20 = dVar20 - dVar29;
      }
      dVar31 = in_xd10;
      if (in_FPSCR_SZ == '\0') {
        dVar21 = CONCAT44D((int)(D2U(dVar21) >> 0x20),(int)(D2U(dVar20) >> 0x20))
        ;
        dVar31 = CONCAT44D(SUB84(dVar29,0),SUB84(dVar20,0));
        dVar20 = dVar35;
      }
      if (in_FPSCR_PR == '\0') {
        dVar31 = CONCAT44D(fVar24 * F32LO(dVar31) + F32HI(dVar31),
                                  SUB84(dVar31,0));
      }
      dVar34 = in_xd6;
      dVar35 = dVar20;
      if (in_FPSCR_SZ == '\0') {
        dVar31 = CONCAT44D((int)(D2U(dVar31) >> 0x20),SUB84(dVar25,0));
        dVar34 = dVar33;
        dVar35 = CONCAT44D(SUB84(dVar21,0),SUB84(dVar16,0));
      }
      if (in_FPSCR_PR == '\0') {
        dVar31 = CONCAT44D((int)(D2U(dVar31) >> 0x20),
                                  F32HI(dVar35) *
                                  F32HI(dVar25) + F32LO(dVar31));
      }
      if (in_FPSCR_SZ == '\0') {
        uVar26 = (undefined4)(D2U(dVar31) >> 0x20);
        dVar29 = CONCAT44D((int)(D2U(dVar29) >> 0x20),uVar26);
        puVar5[3] = SUB84(dVar31,0);
        dVar31 = (double)(D2U(dVar28) & 0xffffffff);
        dVar33 = CONCAT44D(uVar26,SUB84(dVar35,0));
      }
      else {
        *(double *)(unsigned)(puVar5 + 3) = dVar34;
        dVar34 = in_xd8;
        dVar33 = dVar31;
        in_xd10 = dVar31;
      }
      fVar30 = F32LO(dVar31);
      fVar24 = F32HI(dVar33);
      if (in_FPSCR_PR == '\0') {
        fVar30 = fVar24 * F32HI(dVar28) + fVar30;
      }
      uVar7 = (uint)(D2U(dVar29) >> 0x20);
      if (in_FPSCR_SZ == '\0') {
        puVar5[2] = (uint)fVar30;
        puVar5[1] = uVar7;
      }
      else {
        *(double *)(unsigned)(puVar5 + 2) = dVar34;
        *(double *)(unsigned)(puVar5 + 1) = dVar29;
      }
      uVar6 = *(uint *)(unsigned)(puVar15 + iVar39 + 0x18);
      fVar30 = (float)(uVar6 >> 0x18);
      dVar35 = dVar34;
      if (in_FPSCR_SZ == '\0') {
        dVar21 = CONCAT44D((int)(D2U(dVar21) >> 0x20),fVar30);
        dVar35 = dVar20;
      }
      if (in_FPSCR_PR == '\0' && fVar30 < 0.0) {
        fVar27 = (*(undefined1 *)(unsigned)0x8c25bb00);
        if (in_FPSCR_SZ != '\0') {
          dVar34 = CONCAT44D((*(uint *)(unsigned)0x8c25bb04),(*(undefined1 *)(unsigned)0x8c25bb00));
          fVar27 = fVar30;
        }
        if (in_FPSCR_PR == '\0') {
          dVar21 = CONCAT44D((int)(D2U(dVar21) >> 0x20),F32LO(dVar21) + fVar27);
        }
        else {
          dVar21 = dVar21 + (double)(ulonglong)(uint)fVar27;
        }
      }
      fVar30 = (float)(uVar6 >> 0x10 & 0xff);
      dVar20 = dVar34;
      if (in_FPSCR_SZ == '\0') {
        dVar29 = CONCAT44D(uVar7,fVar30);
        dVar20 = in_xd10;
      }
      if (in_FPSCR_PR == '\0' && fVar30 < 0.0) {
        fVar27 = (*(undefined1 *)(unsigned)0x8c25bb00);
        if (in_FPSCR_SZ != '\0') {
          dVar34 = CONCAT44D((*(uint *)(unsigned)0x8c25bb04),(*(undefined1 *)(unsigned)0x8c25bb00));
          fVar27 = fVar30;
        }
        if (in_FPSCR_PR == '\0') {
          dVar29 = CONCAT44D((int)(D2U(dVar29) >> 0x20),F32LO(dVar29) + fVar27);
        }
        else {
          dVar29 = dVar29 + (double)(ulonglong)(uint)fVar27;
        }
      }
      fVar30 = (float)(uVar6 >> 8 & 0xff);
      in_dr14 = dVar34;
      if (in_FPSCR_SZ == '\0') {
        in_dr14 = CONCAT44D(fVar30,fVar32);
      }
      if (in_FPSCR_PR == '\0' && fVar30 < 0.0) {
        fVar32 = (*(undefined1 *)(unsigned)0x8c25bb00);
        if (in_FPSCR_SZ != '\0') {
          dVar34 = CONCAT44D((*(uint *)(unsigned)0x8c25bb04),(*(undefined1 *)(unsigned)0x8c25bb00));
          fVar32 = fVar30;
        }
        if (in_FPSCR_PR == '\0') {
          in_dr14 = CONCAT44D(F32HI(in_dr14) + fVar32,SUB84(in_dr14,0));
        }
        else {
          in_dr14 = in_dr14 + (double)(ulonglong)(uint)fVar32;
        }
      }
      fVar32 = (float)(uVar6 & 0xff);
      dVar16 = dVar34;
      if (in_FPSCR_SZ == '\0') {
        in_dr12 = CONCAT44D((int)((ulonglong)in_dr12 >> 0x20),fVar32);
        dVar16 = in_xd12;
      }
      if (in_FPSCR_PR == '\0' && fVar32 < 0.0) {
        fVar30 = (*(undefined1 *)(unsigned)0x8c25bb00);
        if (in_FPSCR_SZ != '\0') {
          dVar34 = CONCAT44D((*(uint *)(unsigned)0x8c25bb04),(*(undefined1 *)(unsigned)0x8c25bb00));
          fVar30 = fVar32;
        }
        if (in_FPSCR_PR == '\0') {
          in_dr12 = (double)(ulonglong)(uint)(F32LO(in_dr12) + fVar30);
        }
        else {
          in_dr12 = in_dr12 + (double)(ulonglong)(uint)fVar30;
        }
      }
      uVar7 = *(uint *)(unsigned)(puVar15 + iVar11 + 0x18);
      fVar32 = (float)(uVar7 >> 0x18);
      dVar31 = dVar34;
      if (in_FPSCR_SZ == '\0') {
        dVar31 = CONCAT44D(fVar32,SUB84(in_dr12,0));
      }
      if (in_FPSCR_PR == '\0' && fVar32 < 0.0) {
        fVar30 = (*(undefined1 *)(unsigned)0x8c25bb00);
        if (in_FPSCR_SZ != '\0') {
          dVar34 = CONCAT44D((*(uint *)(unsigned)0x8c25bb04),(*(undefined1 *)(unsigned)0x8c25bb00));
          fVar30 = fVar32;
        }
        if (in_FPSCR_PR == '\0') {
          dVar31 = CONCAT44D(F32HI(dVar31) + fVar30,SUB84(dVar31,0));
        }
        else {
          dVar31 = dVar31 + (double)(ulonglong)(uint)fVar30;
        }
      }
      fVar32 = (float)(uVar7 >> 0x10 & 0xff);
      if (in_FPSCR_SZ == '\0') {
        *(float *)(unsigned)(puVar15 + iVar4 + 8) = fVar32;
      }
      else {
        *(double *)(unsigned)(puVar15 + iVar4 + 8) = dVar34;
      }
      if (in_FPSCR_PR != '\0' || 0.0 <= fVar32) {
        if (in_FPSCR_SZ == '\0') {
          fVar32 = *(float *)(unsigned)(puVar15 + iVar4 + 8);
        }
        else {
          dVar34 = *(double *)(unsigned)(puVar15 + iVar4 + 8);
        }
      }
      else {
        if (in_FPSCR_SZ == '\0') {
          dVar33 = CONCAT44D(fVar24,(*(undefined1 *)(unsigned)0x8c25bb00));
          fVar32 = *(float *)(unsigned)(puVar15 + iVar4 + 8);
        }
        else {
          in_xd0 = CONCAT44((*(uint *)(unsigned)0x8c25bb04),(*(undefined1 *)(unsigned)0x8c25bb00));
          dVar34 = *(double *)(unsigned)(puVar15 + iVar4 + 8);
        }
        if (in_FPSCR_PR == '\0') {
          fVar32 = fVar32 + F32LO(dVar33);
        }
        else {
          fVar32 = SUB84((double)(ulonglong)(uint)fVar32 + dVar33,0);
        }
      }
      uVar6 = uVar7 >> 8 & 0xff;
      dVar33 = (double)(D2U(dVar33) & 0xffffffff00000000);
      if (in_FPSCR_SZ == '\0') {
        *(float *)(unsigned)(puVar15 + iVar4 + 0x18) = fVar32;
      }
      else {
        *(double *)(unsigned)(puVar15 + iVar4 + 0x18) = dVar34;
      }
      if (in_FPSCR_PR == '\0') {
        fVar24 = (float)uVar6;
        dVar22 = CONCAT44D(fVar24,fVar32);
        bVar37 = fVar24 < 0.0;
      }
      else {
        dVar22 = (double)uVar6;
        fVar24 = F32HI(dVar22);
        bVar37 = dVar22 < dVar33;
      }
      if (in_FPSCR_SZ == '\0') {
        *(float *)(unsigned)(puVar15 + iVar4 + 4) = fVar24;
      }
      else {
        *(double *)(unsigned)(puVar15 + iVar4 + 4) = dVar22;
      }
      if (bVar37) {
        if (in_FPSCR_SZ == '\0') {
          dVar33 = (double)((ulonglong)(uint)(*(undefined1 *)(unsigned)0x8c25bb00) << 0x20);
          dVar22 = CONCAT44D(*(undefined4 *)(unsigned)(puVar15 + iVar4 + 4),SUB84(dVar22,0));
        }
        else {
          dVar33 = CONCAT44D((*(uint *)(unsigned)0x8c25bb04),(*(undefined1 *)(unsigned)0x8c25bb00));
          dVar22 = *(double *)(unsigned)(puVar15 + iVar4 + 4);
        }
        if (in_FPSCR_PR == '\0') {
          fVar32 = F32HI(dVar22) + F32HI(dVar33);
        }
        else {
          fVar32 = (float)((ulonglong)(dVar22 + dVar33) >> 0x20);
        }
      }
      else if (in_FPSCR_SZ == '\0') {
        fVar32 = *(float *)(unsigned)(puVar15 + iVar4 + 4);
      }
      else {
        fVar32 = (float)((ulonglong)*(undefined8 *)(unsigned)(puVar15 + iVar4 + 4) >> 0x20);
      }
      dVar22 = (double)((ulonglong)(uint)fVar32 << 0x20);
      if (in_FPSCR_SZ == '\0') {
        *(float *)(unsigned)(puVar15 + iVar4 + 0x14) = fVar32;
      }
      else {
        *(double *)(unsigned)(puVar15 + iVar4 + 0x14) = dVar22;
      }
      uVar26 = (undefined4)(D2U(dVar33) >> 0x20);
      fVar24 = (float)(uVar7 & 0xff);
      dVar33 = CONCAT44D(uVar26,fVar24);
      if (in_FPSCR_PR == '\0') {
        bVar37 = fVar24 < 0.0;
      }
      else {
        bVar37 = dVar33 < dVar22;
      }
      if (in_FPSCR_SZ == '\0') {
        *(float *)(unsigned)(puVar15 + iVar4) = fVar24;
      }
      else {
        *(undefined8 *)(unsigned)(puVar15 + iVar4) = in_xd0;
      }
      if (bVar37) {
        if (in_FPSCR_SZ == '\0') {
          dVar22 = CONCAT44D(fVar32,*(undefined4 *)(unsigned)(puVar15 + iVar4));
          dVar33 = CONCAT44D(uVar26,(*(undefined1 *)(unsigned)0x8c25bb00));
        }
        else {
          dVar34 = *(double *)(unsigned)(puVar15 + iVar4);
          in_xd0 = CONCAT44((*(uint *)(unsigned)0x8c25bb04),(*(undefined1 *)(unsigned)0x8c25bb00));
        }
        if (in_FPSCR_PR == '\0') {
          dVar22 = (double)(ulonglong)(uint)(F32LO(dVar22) + F32LO(dVar33));
        }
        else {
          dVar22 = dVar22 + dVar33;
        }
      }
      else if (in_FPSCR_SZ == '\0') {
        dVar22 = (double)(ulonglong)*(uint *)(unsigned)(puVar15 + iVar4);
      }
      else {
        dVar34 = *(double *)(unsigned)(puVar15 + iVar4);
      }
      if (in_FPSCR_PR == '\0') {
        dVar31 = CONCAT44D(F32HI(dVar31) - F32LO(dVar21),
                                  SUB84(dVar31,0));
      }
      else {
        dVar31 = dVar31 - dVar21;
      }
      if (in_FPSCR_SZ == '\0') {
        fVar32 = F32LO(dVar22);
        *(float *)(unsigned)(puVar15 + iVar4 + 0xc) = fVar32;
        dVar22 = CONCAT44D(SUB84(in_dr14,0),SUB84(dVar33,0));
        dVar23 = CONCAT44D(SUB84(dVar21,0),fVar32);
      }
      else {
        fVar32 = F32LO(dVar35);
        *(double *)(unsigned)(puVar15 + iVar4 + 0xc) = dVar34;
        dVar22 = dVar36;
        dVar23 = dVar35;
      }
      fVar24 = F32LO(dVar31);
      fVar30 = F32HI(dVar22);
      if (in_FPSCR_PR == '\0') {
        dVar23 = CONCAT44D(fVar30 * F32HI(dVar31) +
                                  F32HI(dVar23),fVar32 - fVar24);
      }
      else {
        dVar23 = dVar23 - dVar31;
      }
      if (in_FPSCR_SZ == '\0') {
        dVar21 = CONCAT44D((int)(D2U(dVar21) >> 0x20),fVar24);
        in_dr12 = CONCAT44D(SUB84(dVar29,0),fVar24);
      }
      else {
        fVar24 = F32LO(dVar20);
        dVar35 = dVar16;
        in_dr12 = dVar20;
      }
      if (in_FPSCR_PR == '\0') {
        dVar21 = CONCAT44D((int)(D2U(dVar21) >> 0x20),
                                  fVar30 * F32LO(dVar23) + F32LO(dVar21));
      }
      uVar26 = (undefined4)(D2U(dVar23) >> 0x20);
      if (in_FPSCR_SZ == '\0') {
        *(undefined4 *)(unsigned)(puVar15 + iVar4 + 0x10) = uVar26;
        dVar22 = CONCAT44D(fVar30,*(undefined4 *)(unsigned)(puVar15 + iVar4 + 0x18));
        dVar23 = CONCAT44D(uVar26,uVar26);
        dVar33 = dVar34;
      }
      else {
        *(double *)(unsigned)(puVar15 + iVar4 + 0x10) = dVar23;
        in_xd0 = *(undefined8 *)(unsigned)(puVar15 + iVar4 + 0x18);
        dVar33 = dVar23;
      }
      if (in_FPSCR_PR == '\0') {
        dVar22 = CONCAT44D((int)(D2U(dVar22) >> 0x20),F32LO(dVar22) - F32LO(dVar29)
                                 );
      }
      else {
        dVar22 = dVar22 - dVar29;
      }
      fVar32 = F32HI(in_dr14);
      in_xd10 = in_dr14;
      if (in_FPSCR_SZ == '\0') {
        dVar29 = CONCAT44D((int)(D2U(dVar29) >> 0x20),fVar32);
        in_xd10 = dVar20;
      }
      fVar30 = F32HI(dVar22);
      if (in_FPSCR_PR == '\0') {
        in_dr12 = CONCAT44D(fVar30 * F32LO(dVar22) + F32HI(in_dr12),
                                   fVar24);
      }
      if (in_FPSCR_SZ == '\0') {
        dVar22 = CONCAT44D(fVar30,*(undefined4 *)(unsigned)(puVar15 + iVar4 + 0x14));
      }
      else {
        in_xd0 = *(undefined8 *)(unsigned)(puVar15 + iVar4 + 0x14);
      }
      if (in_FPSCR_PR == '\0') {
        fVar24 = F32HI(dVar22);
        dVar29 = CONCAT44D((int)(D2U(dVar29) >> 0x20),
                                  fVar24 * (F32LO(dVar22) - fVar32) + F32LO(dVar29));
      }
      else {
        fVar24 = (float)((ulonglong)(dVar22 - in_dr14) >> 0x20);
      }
      in_dr0 = CONCAT44D(fVar24,0x4f000000);
      if (in_FPSCR_PR == '\0') {
        bVar37 = SUB84(dVar23,0) < 0x4f000000;
      }
      else {
        bVar37 = dVar23 < in_dr0;
      }
      if (!bVar37) {
        if (in_FPSCR_PR == '\0') {
          in_dr0 = CONCAT44D(fVar24,0x4f000000 + 0x4f000000);
          dVar23 = CONCAT44D((int)(D2U(dVar23) >> 0x20),
                                    F32LO(dVar23) - (0x4f000000 + 0x4f000000));
        }
        else {
          in_dr0 = in_dr0 + in_dr0;
          dVar23 = dVar23 - in_dr0;
        }
      }
      if (in_FPSCR_PR == '\0') {
        iVar39 = (int)SUB84(dVar23,0);
      }
      else {
        iVar39 = (int)dVar23;
      }
      uVar26 = (undefined4)(D2U(dVar23) >> 0x20);
      dVar20 = CONCAT44D(uVar26,0x4f000000);
      fVar32 = F32HI(in_dr12);
      if (in_FPSCR_PR == '\0') {
        bVar37 = fVar32 < 0x4f000000;
      }
      else {
        bVar37 = in_dr12 < dVar20;
      }
      if (!bVar37) {
        if (in_FPSCR_PR == '\0') {
          dVar20 = CONCAT44D(uVar26,0x4f000000 + 0x4f000000);
          in_dr12 = CONCAT44D(fVar32 - (0x4f000000 + 0x4f000000),SUB84(in_dr12,0));
        }
        else {
          dVar20 = dVar20 + dVar20;
          in_dr12 = in_dr12 - dVar20;
        }
      }
      if (in_FPSCR_PR == '\0') {
        iVar11 = (int)F32HI(in_dr12);
      }
      else {
        iVar11 = (int)in_dr12;
      }
      uVar26 = (undefined4)(D2U(dVar20) >> 0x20);
      dVar20 = CONCAT44D(uVar26,0x4f000000);
      if (in_FPSCR_PR == '\0') {
        bVar37 = SUB84(dVar29,0) < 0x4f000000;
      }
      else {
        bVar37 = dVar29 < dVar20;
      }
      if (!bVar37) {
        if (in_FPSCR_PR == '\0') {
          dVar20 = CONCAT44D(uVar26,0x4f000000 + 0x4f000000);
          dVar29 = CONCAT44D((int)(D2U(dVar29) >> 0x20),
                                    F32LO(dVar29) - (0x4f000000 + 0x4f000000));
        }
        else {
          dVar20 = dVar20 + dVar20;
          dVar29 = dVar29 - dVar20;
        }
      }
      if (in_FPSCR_PR == '\0') {
        iVar40 = (int)SUB84(dVar29,0);
      }
      else {
        iVar40 = (int)dVar29;
      }
      uVar26 = (undefined4)(D2U(dVar20) >> 0x20);
      dVar20 = CONCAT44D(uVar26,0x4f000000);
      if (in_FPSCR_PR == '\0') {
        bVar37 = SUB84(dVar21,0) < 0x4f000000;
      }
      else {
        bVar37 = dVar21 < dVar20;
      }
      if (!bVar37) {
        if (in_FPSCR_PR == '\0') {
          dVar20 = CONCAT44D(uVar26,0x4f000000 + 0x4f000000);
          dVar21 = CONCAT44D((int)(D2U(dVar21) >> 0x20),
                                    F32LO(dVar21) - (0x4f000000 + 0x4f000000));
        }
        else {
          dVar20 = dVar20 + dVar20;
          dVar21 = dVar21 - dVar20;
        }
      }
      if (in_FPSCR_PR == '\0') {
        uVar7 = (uint)SUB84(dVar21,0);
      }
      else {
        uVar7 = (uint)dVar21;
      }
      iVar9 = iVar9 + 1;
      *puVar5 = iVar39 << 0x18 | iVar11 << 0x10 | iVar40 << 8 | uVar7;
      in_xd12 = dVar16;
      in_xd14 = dVar36;
    }
    pdVar13 = (double *)(unsigned)(puVar15 + iVar10 * 0x1c + iVar2);
    if (in_FPSCR_SZ == '\0') {
      dVar20 = CONCAT44D((int)(D2U(dVar20) >> 0x20),
                                *(undefined4 *)(unsigned)((int)pdVar13 + 0x14));
    }
    else {
      dVar33 = *(double *)(unsigned)((int)pdVar13 + 0x14);
    }
    if (in_FPSCR_PR == '\0') {
      bVar37 = F32HI(dVar21) < SUB84(dVar20,0);
    }
    else {
      bVar37 = dVar21 < dVar20;
    }
    if (bVar37) {
      if (in_FPSCR_SZ == '\0') {
        dVar20 = CONCAT44D((int)(D2U(dVar20) >> 0x20),*(undefined4 *)(unsigned)pdVar13);
      }
      else {
        dVar33 = *pdVar13;
      }
      puVar8 = puVar1 + iVar9 * 4;
      if (in_FPSCR_SZ == '\0') {
        puVar8[3] = SUB84(dVar20,0);
        puVar8[2] = *(undefined4 *)(unsigned)((int)pdVar13 + 4);
        dVar20 = CONCAT44D((int)(D2U(dVar20) >> 0x20),*(undefined4 *)(unsigned)(pdVar13 + 1));
        puVar8[1] = *(undefined4 *)(unsigned)(pdVar13 + 1);
      }
      else {
        *(double *)(unsigned)(puVar8 + 3) = dVar33;
        *(undefined8 *)(unsigned)(puVar8 + 2) = *(undefined8 *)(unsigned)((int)pdVar13 + 4);
        dVar33 = pdVar13[1];
        *(double *)(unsigned)(puVar8 + 1) = dVar33;
      }
      iVar9 = iVar9 + 1;
      *puVar8 = *(undefined4 *)(unsigned)(pdVar13 + 3);
    }
    iVar11 = iVar10 + 1;
    iVar39 = iVar10;
    iVar10 = iVar11;
  } while (iVar11 < 3);
  *(undefined4 *)(unsigned)(ar7 + 3) = *puVar1;
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)(unsigned)((int)ar7 + 0xc) = *(undefined4 *)(unsigned)(puVar15 + iVar4 + 0x20);
    *(undefined4 *)(unsigned)(ar7 + 1) = *(undefined4 *)(unsigned)(puVar15 + iVar4 + 0x24);
    puVar12 = (undefined8 *)(unsigned)((int)ar7 + 4);
    *(undefined4 *)(unsigned)puVar12 = *(undefined4 *)(unsigned)(puVar15 + iVar4 + 0x28);
  }
  else {
    ar7[1] = *(undefined8 *)(unsigned)(puVar15 + iVar4 + 0x20);
    *ar7 = *(undefined8 *)(unsigned)(puVar15 + iVar4 + 0x24);
    puVar12 = ar7 + -1;
    *puVar12 = *(undefined8 *)(unsigned)(puVar15 + iVar4 + 0x28);
  }
  *(undefined4 *)(unsigned)((int)puVar12 + -4) = uVar3;
  *(undefined4 *)(unsigned)((int)puVar12 + 0x34) = *(undefined4 *)(unsigned)(puVar15 + iVar4 + 0x2c);
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)(unsigned)(puVar12 + 5) = *(undefined4 *)(unsigned)(puVar15 + iVar4 + 0x30);
    *(undefined4 *)(unsigned)((int)puVar12 + 0x24) = *(undefined4 *)(unsigned)(puVar15 + iVar4 + 0x34);
    puVar12 = puVar12 + 4;
    *(undefined4 *)(unsigned)puVar12 = *(undefined4 *)(unsigned)(puVar15 + iVar4 + 0x38);
  }
  else {
    *(undefined8 *)(unsigned)((int)puVar12 + 0x24) = *(undefined8 *)(unsigned)(puVar15 + iVar4 + 0x30);
    *(undefined8 *)(unsigned)((int)puVar12 + 0x1c) = *(undefined8 *)(unsigned)(puVar15 + iVar4 + 0x34);
    puVar12 = (undefined8 *)(unsigned)((int)puVar12 + 0x14);
    *puVar12 = *(undefined8 *)(unsigned)(puVar15 + iVar4 + 0x38);
  }
  *(undefined4 *)(unsigned)((int)puVar12 + -4) = uVar3;
  if (iVar9 != 3) {
    *(undefined4 *)(unsigned)((int)puVar12 + 0x34) = *(undefined4 *)(unsigned)(puVar15 + iVar4 + 0x4c);
    if (in_FPSCR_SZ == '\0') {
      *(undefined4 *)(unsigned)(puVar12 + 5) = *(undefined4 *)(unsigned)(puVar15 + iVar4 + 0x50);
      *(undefined4 *)(unsigned)((int)puVar12 + 0x24) = *(undefined4 *)(unsigned)(puVar15 + iVar4 + 0x54);
      puVar12 = puVar12 + 4;
      *(undefined4 *)(unsigned)puVar12 = *(undefined4 *)(unsigned)(puVar15 + iVar4 + 0x58);
    }
    else {
      *(undefined8 *)(unsigned)((int)puVar12 + 0x24) = *(undefined8 *)(unsigned)(puVar15 + iVar4 + 0x50);
      *(undefined8 *)(unsigned)((int)puVar12 + 0x1c) = *(undefined8 *)(unsigned)(puVar15 + iVar4 + 0x54);
      puVar12 = (undefined8 *)(unsigned)((int)puVar12 + 0x14);
      *puVar12 = *(undefined8 *)(unsigned)(puVar15 + iVar4 + 0x58);
    }
    *(undefined4 *)(unsigned)((int)puVar12 + -4) = uVar3;
  }
  *(undefined4 *)(unsigned)((int)puVar12 + 0x34) = *(undefined4 *)(unsigned)(puVar15 + iVar4 + 0x3c);
  uVar3 = 0xf0000000;
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)(unsigned)(puVar12 + 5) = *(undefined4 *)(unsigned)(puVar15 + iVar4 + 0x40);
    *(undefined4 *)(unsigned)((int)puVar12 + 0x24) = *(undefined4 *)(unsigned)(puVar15 + iVar4 + 0x44);
    puVar12 = puVar12 + 4;
    *(undefined4 *)(unsigned)puVar12 = *(undefined4 *)(unsigned)(puVar15 + iVar4 + 0x48);
  }
  else {
    *(undefined8 *)(unsigned)((int)puVar12 + 0x24) = *(undefined8 *)(unsigned)(puVar15 + iVar4 + 0x40);
    *(undefined8 *)(unsigned)((int)puVar12 + 0x1c) = *(undefined8 *)(unsigned)(puVar15 + iVar4 + 0x44);
    puVar12 = (undefined8 *)(unsigned)((int)puVar12 + 0x14);
    *puVar12 = *(undefined8 *)(unsigned)(puVar15 + iVar4 + 0x48);
  }
  *(undefined4 *)(unsigned)((int)puVar12 + -4) = uVar3;
  return (undefined4 *)(unsigned)((int)puVar12 + 0x1c);
}

__asm__(".globl _FUN_8c25b858\n.set _FUN_8c25b858, _FUN_8c25b858_def\n");
