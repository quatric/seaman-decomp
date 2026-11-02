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
int FUN_8c247b20_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 *ar7)

{
  ring[rp++ & 255] = "FUN_8c247b20";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 60; for (int i_ = 0; i_ < 60; i_++) z_[i_] = 0; }
  double *pdVar1;
  double *pdVar2;
  double *pdVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  int iVar9;
  int iVar10;
  undefined8 *unaff_r8 = 0;
  undefined8 *puVar11;
  int iVar12;
  int *piVar13;
  double in_dr0 = 0;
  double dVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  float fVar17;
  ulonglong uVar18;
  double dVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined4 in_fr5 = 0;
  float fVar23;
  double dVar24;
  double dVar25;
  undefined8 uVar26;
  double in_dr6 = 0;
  double in_xd2 = 0;
  double in_xd4 = 0;
  char in_FPSCR_PR = 0;
  char in_FPSCR_SZ = 0;
  undefined4 uVar22;
  undefined4 uVar27;
  
  ((int *)(fr0_ - 0x24))[0] = ar4;
  ((int *)(fr0_ - 0x24))[1] = ar5;
  ((int *)(fr0_ - 0x24))[2] = ar6;
  piVar5 = ((int *)(fr0_ - 0x24));
  if (in_FPSCR_SZ == '\0') {
    dVar24 = CONCAT44D((*(undefined1 *)(unsigned)0x8c247b54),in_fr5);
  }
  else {
    dVar24 = CONCAT44D((*(uint *)(unsigned)0x8c247b58),(*(undefined1 *)(unsigned)0x8c247b54));
  }
  while (puVar8 = 0x8c4c2420, pdVar1 = 0x8c4ab31c, piVar5 < (fr0_ + (int)0xffffffe8)) {
    iVar4 = *piVar5;
    uVar16 = (undefined4)(D2U(dVar24) >> 0x20);
    if (in_FPSCR_SZ == '\0') {
      uVar18 = CONCAT44(*(undefined4 *)(unsigned)(iVar4 + 0x30),uVar16);
      dVar19 = CONCAT44D(uVar16,SUB84(in_dr0,0));
    }
    else {
      uVar18 = *(ulonglong *)(unsigned)(iVar4 + 0x30);
      in_xd2 = dVar24;
      dVar19 = dVar24;
    }
    if (in_FPSCR_PR == '\0') {
      uVar18 = (ulonglong)
               (uint)(F32HI(dVar19) * (float)(uVar18 >> 0x20) + (float)uVar18);
    }
    if (in_FPSCR_SZ == '\0') {
      *(int *)(unsigned)(iVar4 + 0x20) = (int)uVar18;
      in_dr0 = CONCAT44D(uVar16,SUB84(dVar19,0));
    }
    else {
      *(double *)(unsigned)(iVar4 + 0x20) = in_xd2;
      in_dr0 = dVar24;
    }
    iVar4 = *piVar5;
    if (in_FPSCR_SZ == '\0') {
      uVar18 = CONCAT44(*(undefined4 *)(unsigned)(iVar4 + 0x34),uVar16);
    }
    else {
      uVar18 = *(ulonglong *)(unsigned)(iVar4 + 0x34);
      in_xd2 = dVar24;
    }
    if (in_FPSCR_PR == '\0') {
      uVar18 = (ulonglong)
               (uint)(F32HI(in_dr0) * (float)(uVar18 >> 0x20) + (float)uVar18);
    }
    if (in_FPSCR_SZ == '\0') {
      *(int *)(unsigned)(iVar4 + 0x24) = (int)uVar18;
      piVar5 = piVar5 + 1;
    }
    else {
      *(double *)(unsigned)(iVar4 + 0x24) = in_xd2;
      piVar5 = piVar5 + 1;
    }
  }
  iVar4 = 2;
  iVar9 = 0;
  iVar12 = 0;
  do {
    pdVar3 = 0x8c4aa4b8;
    pdVar2 = 0x8c4ab324;
    piVar5 = ((int *)(fr0_ - 0x24)) + iVar9;
    piVar13 = ((int *)(fr0_ - 0x24)) + iVar4;
    iVar6 = iVar12;
    if ((*(uint *)(unsigned)*piVar13 & 1 ^ *(uint *)(unsigned)*piVar5 & 1) == 1) {
      iVar4 = *piVar13;
      iVar6 = *piVar5;
      if (in_FPSCR_SZ == '\0') {
        dVar24 = CONCAT44D(*(undefined4 *)(unsigned)(iVar4 + 0x18),SUB84(dVar24,0));
        dVar19 = CONCAT44D(*(undefined4 *)(unsigned)(iVar6 + 0x18),*(undefined4 *)(unsigned)0x8c4aa4d4);
      }
      else {
        in_xd2 = *(undefined4 *)(unsigned)0x8c4aa4d4;
        dVar24 = *(double *)(unsigned)(iVar4 + 0x18);
        dVar19 = *(double *)(unsigned)(iVar6 + 0x18);
      }
      fVar23 = F32HI(dVar24);
      if (in_FPSCR_PR == '\0') {
        dVar19 = CONCAT44D((int)(D2U(dVar19) >> 0x20),F32LO(dVar19) - fVar23);
      }
      else {
        dVar19 = dVar19 - dVar24;
      }
      if (in_FPSCR_SZ == '\0') {
        dVar24 = CONCAT44D(fVar23,*(undefined4 *)(unsigned)(iVar4 + 0x10));
      }
      else {
        in_xd4 = *(double *)(unsigned)(iVar4 + 0x10);
      }
      if (in_FPSCR_PR == '\0') {
        dVar19 = CONCAT44D(F32HI(dVar19) -
                                  F32HI(dVar24),SUB84(dVar19,0));
      }
      else {
        dVar19 = dVar19 - dVar24;
      }
      dVar25 = in_xd2;
      dVar14 = in_xd4;
      if (in_FPSCR_SZ == '\0') {
        dVar25 = CONCAT44D(SUB84(dVar19,0),SUB84(dVar24,0));
        dVar14 = CONCAT44D(SUB84(dVar24,0),SUB84(in_dr6,0));
      }
      in_dr6 = dVar14;
      fVar23 = F32HI(dVar19);
      if (in_FPSCR_PR == '\0') {
        dVar25 = CONCAT44D(F32HI(dVar25) / fVar23,SUB84(dVar25,0));
      }
      else {
        dVar25 = dVar25 / dVar19;
      }
      if (in_FPSCR_SZ == '\0') {
        dVar19 = CONCAT44D(fVar23,*(undefined4 *)(unsigned)(iVar6 + 0x10));
      }
      else {
        in_xd2 = *(double *)(unsigned)(iVar6 + 0x10);
      }
      fVar23 = F32LO(dVar25);
      if (in_FPSCR_PR == '\0') {
        fVar17 = F32LO(dVar19) - fVar23;
      }
      else {
        fVar17 = SUB84(dVar19 - dVar25,0);
      }
      uVar16 = (undefined4)(D2U(dVar25) >> 0x20);
      if (in_FPSCR_SZ == '\0') {
        fVar23 = *(float *)(unsigned)(iVar4 + 0x14);
        dVar19 = CONCAT44D(fVar23,fVar17);
        dVar25 = CONCAT44D(uVar16,SUB84(in_dr0,0));
        dVar24 = CONCAT44D(uVar16,fVar23);
      }
      else {
        dVar19 = *(double *)(unsigned)(iVar4 + 0x14);
        dVar24 = dVar25;
        in_xd4 = dVar19;
      }
      fVar17 = F32HI(dVar25);
      if (in_FPSCR_PR == '\0') {
        in_dr6 = CONCAT44D(fVar17 * F32LO(dVar19) + F32HI(in_dr6),
                                  SUB84(in_dr6,0));
      }
      if (in_FPSCR_SZ == '\0') {
        dVar19 = CONCAT44D((int)(D2U(dVar19) >> 0x20),*(undefined4 *)(unsigned)(iVar6 + 0x14));
      }
      else {
        in_xd2 = *(double *)(unsigned)(iVar6 + 0x14);
      }
      if (in_FPSCR_PR == '\0') {
        fVar23 = F32LO(dVar19) - fVar23;
        dVar19 = CONCAT44D(fVar17 * fVar23 + F32HI(dVar19),fVar23);
      }
      else {
        dVar19 = dVar19 - dVar24;
      }
      uVar15 = (undefined4)(D2U(dVar19) >> 0x20);
      if (in_FPSCR_SZ == '\0') {
        dVar24 = CONCAT44D(uVar16,uVar15);
        dVar19 = CONCAT44D(uVar15,*(undefined4 *)(unsigned)pdVar1);
        dVar25 = CONCAT44D(*(undefined4 *)(unsigned)0x8c4ab320,SUB84(dVar25,0));
      }
      else {
        in_xd2 = *pdVar1;
        dVar25 = *(undefined4 *)(unsigned)0x8c4ab320;
        in_xd4 = dVar19;
      }
      if (in_FPSCR_PR == '\0') {
        fVar23 = F32LO(dVar19) * F32HI(dVar25);
      }
      else {
        fVar23 = SUB84(dVar19 * dVar25,0);
      }
      if (in_FPSCR_SZ == '\0') {
        uVar20 = CONCAT44(*(undefined4 *)(unsigned)0x8c4aa4b4,fVar23);
        dVar19 = CONCAT44D((int)((ulonglong)in_dr6 >> 0x20),SUB84(dVar25,0));
      }
      else {
        uVar20 = *(undefined4 *)(unsigned)0x8c4aa4b4;
        dVar19 = in_dr6;
      }
      if (in_FPSCR_PR == '\0') {
        uVar20 = CONCAT44(F32HI(dVar19) * (float)uVar20 +
                          F32HI(uVar20),(float)uVar20);
      }
      if (in_FPSCR_SZ == '\0') {
        *(int *)(unsigned)((int)puVar8 + iVar12 * 0x40 + 4) = (int)((ulonglong)uVar20 >> 0x20);
        dVar19 = CONCAT44D(*(undefined4 *)(unsigned)pdVar2,SUB84(dVar19,0));
        dVar25 = CONCAT44D(*(undefined4 *)(unsigned)pdVar3,*(undefined4 *)(unsigned)pdVar1);
      }
      else {
        *(undefined8 *)(unsigned)((int)puVar8 + iVar12 * 0x40 + 4) = uVar20;
        dVar19 = *pdVar2;
        in_xd2 = *pdVar1;
        dVar25 = *pdVar3;
      }
      if (in_FPSCR_PR == '\0') {
        dVar25 = CONCAT44D((int)(D2U(dVar25) >> 0x20),
                                  F32LO(dVar25) * F32HI(dVar19));
      }
      else {
        dVar25 = dVar25 * dVar19;
      }
      dVar14 = in_xd4;
      if (in_FPSCR_SZ == '\0') {
        dVar14 = CONCAT44D(SUB84(dVar24,0),SUB84(dVar19,0));
      }
      if (in_FPSCR_PR == '\0') {
        dVar25 = CONCAT44D(F32HI(dVar14) * F32LO(dVar25) +
                                  F32HI(dVar25),SUB84(dVar25,0));
      }
      uVar16 = (undefined4)(D2U(dVar24) >> 0x20);
      if (in_FPSCR_SZ == '\0') {
        *(int *)(unsigned)(puVar8 + iVar12 * 8 + 1) = (int)(D2U(dVar25) >> 0x20);
        *(undefined4 *)(unsigned)((int)puVar8 + iVar12 * 0x40 + 0xc) = *(undefined4 *)(unsigned)pdVar1;
        in_dr0 = CONCAT44D(uVar16,SUB84(dVar14,0));
      }
      else {
        puVar8[iVar12 * 8 + 1] = dVar25;
        in_xd2 = *pdVar1;
        *(double *)(unsigned)((int)puVar8 + iVar12 * 0x40 + 0xc) = in_xd2;
        in_dr0 = dVar24;
      }
      if (in_FPSCR_SZ == '\0') {
        dVar24 = CONCAT44D(uVar16,*(undefined4 *)(unsigned)(*piVar13 + 0x20));
      }
      else {
        in_xd4 = *(double *)(unsigned)(*piVar13 + 0x20);
      }
      if (in_FPSCR_SZ == '\0') {
        dVar19 = CONCAT44D(SUB84(dVar24,0),*(undefined4 *)(unsigned)(*piVar5 + 0x20));
      }
      else {
        in_xd2 = *(double *)(unsigned)(*piVar5 + 0x20);
        dVar19 = in_xd4;
      }
      fVar23 = F32HI(in_dr0);
      if (in_FPSCR_PR == '\0') {
        fVar17 = F32LO(dVar19) - F32LO(dVar24);
        dVar19 = CONCAT44D(fVar23 * fVar17 + F32HI(dVar19),fVar17);
      }
      else {
        dVar19 = dVar19 - dVar24;
      }
      if (in_FPSCR_SZ == '\0') {
        *(int *)(unsigned)(puVar8 + iVar12 * 8 + 2) = (int)(D2U(dVar19) >> 0x20);
      }
      else {
        puVar8[iVar12 * 8 + 2] = dVar19;
      }
      iVar6 = iVar12 + 1;
      if (in_FPSCR_SZ == '\0') {
        dVar24 = CONCAT44D((int)(D2U(dVar24) >> 0x20),*(undefined4 *)(unsigned)(*piVar13 + 0x24))
        ;
      }
      else {
        in_xd4 = *(double *)(unsigned)(*piVar13 + 0x24);
      }
      if (in_FPSCR_SZ == '\0') {
        dVar19 = CONCAT44D(SUB84(dVar24,0),*(undefined4 *)(unsigned)(*piVar5 + 0x24));
      }
      else {
        in_xd2 = *(double *)(unsigned)(*piVar5 + 0x24);
        dVar19 = in_xd4;
      }
      if (in_FPSCR_PR == '\0') {
        fVar17 = F32LO(dVar19) - F32LO(dVar24);
        dVar19 = CONCAT44D(fVar23 * fVar17 + F32HI(dVar19),fVar17);
      }
      else {
        dVar19 = dVar19 - dVar24;
      }
      if (in_FPSCR_SZ == '\0') {
        *(int *)(unsigned)((int)puVar8 + iVar12 * 0x40 + 0x14) = (int)(D2U(dVar19) >> 0x20);
      }
      else {
        *(double *)(unsigned)((int)puVar8 + iVar12 * 0x40 + 0x14) = dVar19;
      }
      *(undefined4 *)(unsigned)(puVar8 + iVar12 * 8 + 3) = *ar7;
      *(undefined4 *)(unsigned)((int)puVar8 + iVar12 * 0x40 + 0x1c) = ar7[1];
    }
    piVar5 = ((int *)(fr0_ - 0x24)) + iVar9;
    if ((*(uint *)(unsigned)*piVar5 & 1) == 0) {
      if (in_FPSCR_SZ == '\0') {
        *(undefined4 *)(unsigned)((int)puVar8 + iVar6 * 0x40 + 4) = *(undefined4 *)(unsigned)(*piVar5 + 4);
      }
      else {
        in_xd2 = *(double *)(unsigned)(*piVar5 + 4);
        *(double *)(unsigned)((int)puVar8 + iVar6 * 0x40 + 4) = in_xd2;
      }
      if (in_FPSCR_SZ == '\0') {
        *(undefined4 *)(unsigned)(puVar8 + iVar6 * 8 + 1) = *(undefined4 *)(unsigned)(*piVar5 + 8);
      }
      else {
        in_xd2 = *(double *)(unsigned)(*piVar5 + 8);
        puVar8[iVar6 * 8 + 1] = in_xd2;
      }
      if (in_FPSCR_SZ == '\0') {
        *(undefined4 *)(unsigned)((int)puVar8 + iVar6 * 0x40 + 0xc) = *(undefined4 *)(unsigned)(*piVar5 + 0xc);
      }
      else {
        in_xd2 = *(double *)(unsigned)(*piVar5 + 0xc);
        *(double *)(unsigned)((int)puVar8 + iVar6 * 0x40 + 0xc) = in_xd2;
      }
      if (in_FPSCR_SZ == '\0') {
        *(undefined4 *)(unsigned)(puVar8 + iVar6 * 8 + 2) = *(undefined4 *)(unsigned)(*piVar5 + 0x20);
      }
      else {
        in_xd2 = *(double *)(unsigned)(*piVar5 + 0x20);
        puVar8[iVar6 * 8 + 2] = in_xd2;
      }
      if (in_FPSCR_SZ == '\0') {
        *(undefined4 *)(unsigned)((int)puVar8 + iVar6 * 0x40 + 0x14) = *(undefined4 *)(unsigned)(*piVar5 + 0x24);
      }
      else {
        in_xd2 = *(double *)(unsigned)(*piVar5 + 0x24);
        *(double *)(unsigned)((int)puVar8 + iVar6 * 0x40 + 0x14) = in_xd2;
      }
      *(undefined4 *)(unsigned)(puVar8 + iVar6 * 8 + 3) = *ar7;
      *(undefined4 *)(unsigned)((int)puVar8 + iVar6 * 0x40 + 0x1c) = ar7[1];
      iVar6 = iVar6 + 1;
    }
    uVar16 = 0xe0000000;
    piVar5 = 0x8c4aa520;
    iVar10 = iVar9 + 1;
    iVar4 = iVar9;
    iVar9 = iVar10;
    iVar12 = iVar6;
  } while (iVar10 < 3);
  if (iVar6 == 3) {
    *(undefined4 *)(unsigned)puVar8 = 0xe0000000;
    if (in_FPSCR_SZ == '\0') {
      uVar15 = *(undefined4 *)(unsigned)puVar8;
      uVar22 = *(undefined4 *)(unsigned)((int)puVar8 + 4);
      uVar27 = *(undefined4 *)(unsigned)(puVar8 + 1);
      *(undefined4 *)(unsigned)((int)unaff_r8 + 0x1c) = *(undefined4 *)(unsigned)((int)puVar8 + 0xc);
      *(undefined4 *)(unsigned)(unaff_r8 + 3) = uVar27;
      *(undefined4 *)(unsigned)((int)unaff_r8 + 0x14) = uVar22;
      unaff_r8 = unaff_r8 + 2;
      *(undefined4 *)(unsigned)unaff_r8 = uVar15;
    }
    else {
      uVar20 = *puVar8;
      uVar21 = puVar8[1];
      uVar26 = puVar8[2];
      unaff_r8[3] = puVar8[3];
      unaff_r8[2] = uVar26;
      unaff_r8[1] = uVar21;
      *unaff_r8 = uVar20;
    }
    puVar11 = puVar8 + 8;
    *(undefined4 *)(unsigned)puVar11 = uVar16;
    if (in_FPSCR_SZ == '\0') {
      uVar16 = *(undefined4 *)(unsigned)puVar11;
      uVar15 = *(undefined4 *)(unsigned)((int)puVar8 + 0x44);
      uVar22 = *(undefined4 *)(unsigned)(puVar8 + 9);
      *(undefined4 *)(unsigned)((int)unaff_r8 + 0x3c) = *(undefined4 *)(unsigned)((int)puVar8 + 0x4c);
      *(undefined4 *)(unsigned)(unaff_r8 + 7) = uVar22;
      *(undefined4 *)(unsigned)((int)unaff_r8 + 0x34) = uVar15;
      puVar11 = unaff_r8 + 6;
      *(undefined4 *)(unsigned)puVar11 = uVar16;
    }
    else {
      uVar20 = *puVar11;
      uVar21 = puVar8[9];
      uVar26 = puVar8[10];
      unaff_r8[7] = puVar8[0xb];
      unaff_r8[6] = uVar26;
      unaff_r8[5] = uVar21;
      puVar11 = unaff_r8 + 4;
      *puVar11 = uVar20;
    }
    puVar8 = (undefined8 *)(unsigned)((int)0x80 + (int)puVar8);
    *(undefined4 *)(unsigned)puVar8 = 0xf0000000;
    if (in_FPSCR_SZ == '\0') {
      uVar16 = *(undefined4 *)(unsigned)puVar8;
      uVar15 = *(undefined4 *)(unsigned)((int)puVar8 + 4);
      uVar22 = *(undefined4 *)(unsigned)(puVar8 + 1);
      *(undefined4 *)(unsigned)((int)puVar11 + 0x3c) = *(undefined4 *)(unsigned)((int)puVar8 + 0xc);
      *(undefined4 *)(unsigned)(puVar11 + 7) = uVar22;
      *(undefined4 *)(unsigned)((int)puVar11 + 0x34) = uVar15;
      *(undefined4 *)(unsigned)(puVar11 + 6) = uVar16;
    }
    else {
      uVar20 = *puVar8;
      uVar21 = puVar8[1];
      uVar26 = puVar8[2];
      puVar11[7] = puVar8[3];
      puVar11[6] = uVar26;
      puVar11[5] = uVar21;
      puVar11[4] = uVar20;
    }
    *piVar5 = *piVar5 + 3;
  }
  else {
    *(undefined4 *)(unsigned)puVar8 = 0xe0000000;
    if (in_FPSCR_SZ == '\0') {
      uVar15 = *(undefined4 *)(unsigned)puVar8;
      uVar22 = *(undefined4 *)(unsigned)((int)puVar8 + 4);
      uVar27 = *(undefined4 *)(unsigned)(puVar8 + 1);
      *(undefined4 *)(unsigned)((int)unaff_r8 + 0x1c) = *(undefined4 *)(unsigned)((int)puVar8 + 0xc);
      *(undefined4 *)(unsigned)(unaff_r8 + 3) = uVar27;
      *(undefined4 *)(unsigned)((int)unaff_r8 + 0x14) = uVar22;
      unaff_r8 = unaff_r8 + 2;
      *(undefined4 *)(unsigned)unaff_r8 = uVar15;
    }
    else {
      uVar20 = *puVar8;
      uVar21 = puVar8[1];
      uVar26 = puVar8[2];
      unaff_r8[3] = puVar8[3];
      unaff_r8[2] = uVar26;
      unaff_r8[1] = uVar21;
      *unaff_r8 = uVar20;
    }
    puVar11 = puVar8 + 8;
    *(undefined4 *)(unsigned)puVar11 = uVar16;
    if (in_FPSCR_SZ == '\0') {
      uVar15 = *(undefined4 *)(unsigned)puVar11;
      uVar22 = *(undefined4 *)(unsigned)((int)puVar8 + 0x44);
      uVar27 = *(undefined4 *)(unsigned)(puVar8 + 9);
      *(undefined4 *)(unsigned)((int)unaff_r8 + 0x3c) = *(undefined4 *)(unsigned)((int)puVar8 + 0x4c);
      *(undefined4 *)(unsigned)(unaff_r8 + 7) = uVar27;
      *(undefined4 *)(unsigned)((int)unaff_r8 + 0x34) = uVar22;
      puVar11 = unaff_r8 + 6;
      *(undefined4 *)(unsigned)puVar11 = uVar15;
    }
    else {
      uVar20 = *puVar11;
      uVar21 = puVar8[9];
      uVar26 = puVar8[10];
      unaff_r8[7] = puVar8[0xb];
      unaff_r8[6] = uVar26;
      unaff_r8[5] = uVar21;
      puVar11 = unaff_r8 + 4;
      *puVar11 = uVar20;
    }
    puVar7 = (undefined8 *)(unsigned)((int)0xc0 + (int)puVar8);
    *(undefined4 *)(unsigned)puVar7 = uVar16;
    if (in_FPSCR_SZ == '\0') {
      uVar16 = *(undefined4 *)(unsigned)puVar7;
      uVar15 = *(undefined4 *)(unsigned)((int)puVar7 + 4);
      uVar22 = *(undefined4 *)(unsigned)(puVar7 + 1);
      *(undefined4 *)(unsigned)((int)puVar11 + 0x3c) = *(undefined4 *)(unsigned)((int)puVar7 + 0xc);
      *(undefined4 *)(unsigned)(puVar11 + 7) = uVar22;
      *(undefined4 *)(unsigned)((int)puVar11 + 0x34) = uVar15;
      puVar11 = puVar11 + 6;
      *(undefined4 *)(unsigned)puVar11 = uVar16;
    }
    else {
      uVar20 = *puVar7;
      uVar21 = puVar7[1];
      uVar26 = puVar7[2];
      puVar11[7] = puVar7[3];
      puVar11[6] = uVar26;
      puVar11[5] = uVar21;
      puVar11 = puVar11 + 4;
      *puVar11 = uVar20;
    }
    puVar8 = (undefined8 *)(unsigned)((int)0x80 + (int)puVar8);
    *(undefined4 *)(unsigned)puVar8 = 0xf0000000;
    if (in_FPSCR_SZ == '\0') {
      uVar16 = *(undefined4 *)(unsigned)puVar8;
      uVar15 = *(undefined4 *)(unsigned)((int)puVar8 + 4);
      uVar22 = *(undefined4 *)(unsigned)(puVar8 + 1);
      *(undefined4 *)(unsigned)((int)puVar11 + 0x3c) = *(undefined4 *)(unsigned)((int)puVar8 + 0xc);
      *(undefined4 *)(unsigned)(puVar11 + 7) = uVar22;
      *(undefined4 *)(unsigned)((int)puVar11 + 0x34) = uVar15;
      *(undefined4 *)(unsigned)(puVar11 + 6) = uVar16;
    }
    else {
      uVar20 = *puVar8;
      uVar21 = puVar8[1];
      uVar26 = puVar8[2];
      puVar11[7] = puVar8[3];
      puVar11[6] = uVar26;
      puVar11[5] = uVar21;
      puVar11[4] = uVar20;
    }
    *piVar5 = *piVar5 + 4;
  }
  return iVar6;
}

__asm__(".globl _FUN_8c247b20\n.set _FUN_8c247b20, _FUN_8c247b20_def\n");
