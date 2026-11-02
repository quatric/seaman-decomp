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
int FUN_8c247898_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 *ar7)

{
  ring[rp++ & 255] = "FUN_8c247898";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 36; for (int i_ = 0; i_ < 36; i_++) z_[i_] = 0; }
  double *pdVar1;
  double *pdVar2;
  double *pdVar3;
  int iVar4;
  int iVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  int iVar8;
  undefined8 *unaff_r8 = 0;
  undefined8 *puVar9;
  int iVar10;
  int iVar11;
  int *piVar12;
  int *piVar13;
  double in_dr0 = 0;
  undefined4 uVar14;
  undefined4 uVar15;
  float fVar16;
  double dVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  float fVar21;
  double in_dr4 = 0;
  double dVar22;
  undefined8 uVar23;
  double in_dr6 = 0;
  double in_xd2 = 0;
  double dVar25;
  double in_xd4 = 0;
  char in_FPSCR_PR = 0;
  char in_FPSCR_SZ = 0;
  undefined4 uVar20;
  undefined4 uVar24;
  
  puVar7 = 0x8c4c2420;
  pdVar1 = 0x8c4ab31c;
  ((int *)(fr0_ - 0x24))[0] = ar4;
  ((int *)(fr0_ - 0x24))[1] = ar5;
  ((int *)(fr0_ - 0x24))[2] = ar6;
  iVar4 = 2;
  iVar8 = 0;
  iVar10 = 0;
  do {
    pdVar3 = 0x8c4aa4b8;
    pdVar2 = 0x8c4ab324;
    piVar13 = ((int *)(fr0_ - 0x24)) + iVar10;
    piVar12 = ((int *)(fr0_ - 0x24)) + iVar4;
    iVar5 = iVar8;
    if ((*(uint *)(unsigned)*piVar12 & 1 ^ *(uint *)(unsigned)*piVar13 & 1) == 1) {
      iVar5 = *piVar12;
      iVar4 = *piVar13;
      if (in_FPSCR_SZ == '\0') {
        dVar22 = CONCAT44D(*(undefined4 *)(unsigned)(iVar5 + 0x18),SUB84(in_dr4,0));
        dVar17 = CONCAT44D(*(undefined4 *)(unsigned)(iVar4 + 0x18),*(undefined4 *)(unsigned)0x8c4aa4d4);
        dVar25 = in_xd2;
      }
      else {
        dVar22 = *(double *)(unsigned)(iVar5 + 0x18);
        dVar25 = *(undefined4 *)(unsigned)0x8c4aa4d4;
        dVar17 = *(double *)(unsigned)(iVar4 + 0x18);
      }
      fVar21 = F32HI(dVar22);
      if (in_FPSCR_PR == '\0') {
        dVar22 = CONCAT44D(F32HI(dVar17) - fVar21,
                                  F32LO(dVar17) - fVar21);
      }
      else {
        dVar22 = (dVar17 - dVar22) - dVar22;
      }
      if (in_FPSCR_SZ == '\0') {
        uVar15 = SUB84(dVar22,0);
        dVar22 = CONCAT44D((int)(D2U(dVar22) >> 0x20),*(undefined4 *)(unsigned)(iVar4 + 0x10));
        in_xd2 = dVar25;
        dVar25 = CONCAT44D(uVar15,*(undefined4 *)(unsigned)(iVar5 + 0x10));
      }
      else {
        in_xd4 = *(double *)(unsigned)(iVar5 + 0x10);
        in_xd2 = *(double *)(unsigned)(iVar4 + 0x10);
      }
      if (in_FPSCR_PR == '\0') {
        dVar25 = CONCAT44D(F32HI(dVar25) /
                                  F32HI(dVar22),SUB84(dVar25,0));
      }
      else {
        dVar25 = dVar25 / dVar22;
      }
      fVar21 = F32LO(dVar25);
      dVar17 = in_xd4;
      if (in_FPSCR_SZ == '\0') {
        dVar17 = CONCAT44D(fVar21,SUB84(in_dr6,0));
      }
      in_dr6 = dVar17;
      if (in_FPSCR_PR == '\0') {
        fVar16 = F32LO(dVar22) - fVar21;
      }
      else {
        fVar16 = SUB84(dVar22 - dVar25,0);
      }
      uVar15 = (undefined4)(D2U(dVar25) >> 0x20);
      if (in_FPSCR_SZ == '\0') {
        fVar21 = *(float *)(unsigned)(iVar5 + 0x14);
        dVar22 = CONCAT44D(fVar21,fVar16);
        dVar25 = CONCAT44D(uVar15,SUB84(in_dr0,0));
        in_dr4 = CONCAT44D(uVar15,fVar21);
      }
      else {
        dVar22 = *(double *)(unsigned)(iVar5 + 0x14);
        in_dr4 = dVar25;
        in_xd4 = dVar22;
      }
      fVar16 = F32HI(dVar25);
      if (in_FPSCR_PR == '\0') {
        in_dr6 = CONCAT44D(fVar16 * F32LO(dVar22) + F32HI(in_dr6),
                                  SUB84(in_dr6,0));
      }
      if (in_FPSCR_SZ == '\0') {
        dVar22 = CONCAT44D((int)(D2U(dVar22) >> 0x20),*(undefined4 *)(unsigned)(iVar4 + 0x14));
      }
      else {
        in_xd2 = *(double *)(unsigned)(iVar4 + 0x14);
      }
      if (in_FPSCR_PR == '\0') {
        fVar21 = F32LO(dVar22) - fVar21;
        dVar22 = CONCAT44D(fVar16 * fVar21 + F32HI(dVar22),fVar21);
      }
      else {
        dVar22 = dVar22 - in_dr4;
      }
      uVar14 = (undefined4)(D2U(dVar22) >> 0x20);
      if (in_FPSCR_SZ == '\0') {
        in_dr4 = CONCAT44D(uVar15,uVar14);
        dVar22 = CONCAT44D(uVar14,*(undefined4 *)(unsigned)pdVar1);
        dVar25 = CONCAT44D(*(undefined4 *)(unsigned)0x8c4ab320,SUB84(dVar25,0));
      }
      else {
        in_xd2 = *pdVar1;
        dVar25 = *(undefined4 *)(unsigned)0x8c4ab320;
        in_xd4 = dVar22;
      }
      if (in_FPSCR_PR == '\0') {
        fVar21 = F32LO(dVar22) * F32HI(dVar25);
      }
      else {
        fVar21 = SUB84(dVar22 * dVar25,0);
      }
      if (in_FPSCR_SZ == '\0') {
        uVar18 = CONCAT44(*(undefined4 *)(unsigned)0x8c4aa4b4,fVar21);
        dVar25 = CONCAT44D((int)((ulonglong)in_dr6 >> 0x20),SUB84(dVar25,0));
      }
      else {
        uVar18 = *(undefined4 *)(unsigned)0x8c4aa4b4;
        dVar25 = in_dr6;
      }
      if (in_FPSCR_PR == '\0') {
        uVar18 = CONCAT44(F32HI(dVar25) * (float)uVar18 +
                          F32HI(uVar18),(float)uVar18);
      }
      if (in_FPSCR_SZ == '\0') {
        *(int *)(unsigned)((int)puVar7 + iVar8 * 0x40 + 4) = (int)((ulonglong)uVar18 >> 0x20);
        dVar25 = CONCAT44D(*(undefined4 *)(unsigned)pdVar2,SUB84(dVar25,0));
        dVar22 = CONCAT44D(*(undefined4 *)(unsigned)pdVar3,*(undefined4 *)(unsigned)pdVar1);
      }
      else {
        *(undefined8 *)(unsigned)((int)puVar7 + iVar8 * 0x40 + 4) = uVar18;
        dVar25 = *pdVar2;
        in_xd2 = *pdVar1;
        dVar22 = *pdVar3;
      }
      if (in_FPSCR_PR == '\0') {
        dVar22 = CONCAT44D((int)(D2U(dVar22) >> 0x20),
                                  F32LO(dVar22) * F32HI(dVar25));
      }
      else {
        dVar22 = dVar22 * dVar25;
      }
      dVar17 = in_xd4;
      if (in_FPSCR_SZ == '\0') {
        dVar17 = CONCAT44D(SUB84(in_dr4,0),SUB84(dVar25,0));
      }
      if (in_FPSCR_PR == '\0') {
        dVar22 = CONCAT44D(F32HI(dVar17) * F32LO(dVar22) +
                                  F32HI(dVar22),SUB84(dVar22,0));
      }
      uVar15 = (undefined4)((ulonglong)in_dr4 >> 0x20);
      if (in_FPSCR_SZ == '\0') {
        *(int *)(unsigned)(puVar7 + iVar8 * 8 + 1) = (int)(D2U(dVar22) >> 0x20);
        *(undefined4 *)(unsigned)((int)puVar7 + iVar8 * 0x40 + 0xc) = *(undefined4 *)(unsigned)pdVar1;
        in_dr0 = CONCAT44D(uVar15,SUB84(dVar17,0));
      }
      else {
        puVar7[iVar8 * 8 + 1] = dVar22;
        in_xd2 = *pdVar1;
        *(double *)(unsigned)((int)puVar7 + iVar8 * 0x40 + 0xc) = in_xd2;
        in_dr0 = in_dr4;
      }
      if (in_FPSCR_SZ == '\0') {
        in_dr4 = CONCAT44D(uVar15,*(undefined4 *)(unsigned)(*piVar12 + 0x20));
      }
      else {
        in_xd4 = *(double *)(unsigned)(*piVar12 + 0x20);
      }
      if (in_FPSCR_SZ == '\0') {
        dVar25 = CONCAT44D(SUB84(in_dr4,0),*(undefined4 *)(unsigned)(*piVar13 + 0x20));
      }
      else {
        in_xd2 = *(double *)(unsigned)(*piVar13 + 0x20);
        dVar25 = in_xd4;
      }
      fVar21 = F32HI(in_dr0);
      if (in_FPSCR_PR == '\0') {
        fVar16 = F32LO(dVar25) - F32LO(in_dr4);
        dVar25 = CONCAT44D(fVar21 * fVar16 + F32HI(dVar25),fVar16);
      }
      else {
        dVar25 = dVar25 - in_dr4;
      }
      iVar5 = iVar8 + 1;
      if (in_FPSCR_SZ == '\0') {
        *(int *)(unsigned)(puVar7 + iVar8 * 8 + 2) = (int)(D2U(dVar25) >> 0x20);
      }
      else {
        puVar7[iVar8 * 8 + 2] = dVar25;
      }
      if (in_FPSCR_SZ == '\0') {
        in_dr4 = CONCAT44D((int)((ulonglong)in_dr4 >> 0x20),*(undefined4 *)(unsigned)(*piVar12 + 0x24))
        ;
      }
      else {
        in_xd4 = *(double *)(unsigned)(*piVar12 + 0x24);
      }
      if (in_FPSCR_SZ == '\0') {
        dVar25 = CONCAT44D(SUB84(in_dr4,0),*(undefined4 *)(unsigned)(*piVar13 + 0x24));
      }
      else {
        in_xd2 = *(double *)(unsigned)(*piVar13 + 0x24);
        dVar25 = in_xd4;
      }
      if (in_FPSCR_PR == '\0') {
        fVar16 = F32LO(dVar25) - F32LO(in_dr4);
        dVar25 = CONCAT44D(fVar21 * fVar16 + F32HI(dVar25),fVar16);
      }
      else {
        dVar25 = dVar25 - in_dr4;
      }
      if (in_FPSCR_SZ == '\0') {
        *(int *)(unsigned)((int)puVar7 + iVar8 * 0x40 + 0x14) = (int)(D2U(dVar25) >> 0x20);
      }
      else {
        *(double *)(unsigned)((int)puVar7 + iVar8 * 0x40 + 0x14) = dVar25;
      }
      *(undefined4 *)(unsigned)(puVar7 + iVar8 * 8 + 3) = *ar7;
      *(undefined4 *)(unsigned)((int)puVar7 + iVar8 * 0x40 + 0x1c) = ar7[1];
    }
    piVar12 = ((int *)(fr0_ - 0x24)) + iVar10;
    if ((*(uint *)(unsigned)*piVar12 & 1) == 0) {
      if (in_FPSCR_SZ == '\0') {
        *(undefined4 *)(unsigned)((int)puVar7 + iVar5 * 0x40 + 4) = *(undefined4 *)(unsigned)(*piVar12 + 4);
      }
      else {
        in_xd2 = *(double *)(unsigned)(*piVar12 + 4);
        *(double *)(unsigned)((int)puVar7 + iVar5 * 0x40 + 4) = in_xd2;
      }
      if (in_FPSCR_SZ == '\0') {
        *(undefined4 *)(unsigned)(puVar7 + iVar5 * 8 + 1) = *(undefined4 *)(unsigned)(*piVar12 + 8);
      }
      else {
        in_xd2 = *(double *)(unsigned)(*piVar12 + 8);
        puVar7[iVar5 * 8 + 1] = in_xd2;
      }
      if (in_FPSCR_SZ == '\0') {
        *(undefined4 *)(unsigned)((int)puVar7 + iVar5 * 0x40 + 0xc) = *(undefined4 *)(unsigned)(*piVar12 + 0xc);
      }
      else {
        in_xd2 = *(double *)(unsigned)(*piVar12 + 0xc);
        *(double *)(unsigned)((int)puVar7 + iVar5 * 0x40 + 0xc) = in_xd2;
      }
      if (in_FPSCR_SZ == '\0') {
        *(undefined4 *)(unsigned)(puVar7 + iVar5 * 8 + 2) = *(undefined4 *)(unsigned)(*piVar12 + 0x20);
      }
      else {
        in_xd2 = *(double *)(unsigned)(*piVar12 + 0x20);
        puVar7[iVar5 * 8 + 2] = in_xd2;
      }
      if (in_FPSCR_SZ == '\0') {
        *(undefined4 *)(unsigned)((int)puVar7 + iVar5 * 0x40 + 0x14) = *(undefined4 *)(unsigned)(*piVar12 + 0x24);
      }
      else {
        in_xd2 = *(double *)(unsigned)(*piVar12 + 0x24);
        *(double *)(unsigned)((int)puVar7 + iVar5 * 0x40 + 0x14) = in_xd2;
      }
      *(undefined4 *)(unsigned)(puVar7 + iVar5 * 8 + 3) = *ar7;
      *(undefined4 *)(unsigned)((int)puVar7 + iVar5 * 0x40 + 0x1c) = ar7[1];
      iVar5 = iVar5 + 1;
    }
    uVar15 = 0xe0000000;
    piVar12 = 0x8c4aa520;
    iVar11 = iVar10 + 1;
    iVar4 = iVar10;
    iVar8 = iVar5;
    iVar10 = iVar11;
  } while (iVar11 < 3);
  if (iVar5 == 3) {
    *(undefined4 *)(unsigned)puVar7 = 0xe0000000;
    if (in_FPSCR_SZ == '\0') {
      uVar14 = *(undefined4 *)(unsigned)puVar7;
      uVar20 = *(undefined4 *)(unsigned)((int)puVar7 + 4);
      uVar24 = *(undefined4 *)(unsigned)(puVar7 + 1);
      *(undefined4 *)(unsigned)((int)unaff_r8 + 0x1c) = *(undefined4 *)(unsigned)((int)puVar7 + 0xc);
      *(undefined4 *)(unsigned)(unaff_r8 + 3) = uVar24;
      *(undefined4 *)(unsigned)((int)unaff_r8 + 0x14) = uVar20;
      unaff_r8 = unaff_r8 + 2;
      *(undefined4 *)(unsigned)unaff_r8 = uVar14;
    }
    else {
      uVar18 = *puVar7;
      uVar19 = puVar7[1];
      uVar23 = puVar7[2];
      unaff_r8[3] = puVar7[3];
      unaff_r8[2] = uVar23;
      unaff_r8[1] = uVar19;
      *unaff_r8 = uVar18;
    }
    puVar9 = puVar7 + 8;
    *(undefined4 *)(unsigned)puVar9 = uVar15;
    if (in_FPSCR_SZ == '\0') {
      uVar15 = *(undefined4 *)(unsigned)puVar9;
      uVar14 = *(undefined4 *)(unsigned)((int)puVar7 + 0x44);
      uVar20 = *(undefined4 *)(unsigned)(puVar7 + 9);
      *(undefined4 *)(unsigned)((int)unaff_r8 + 0x3c) = *(undefined4 *)(unsigned)((int)puVar7 + 0x4c);
      *(undefined4 *)(unsigned)(unaff_r8 + 7) = uVar20;
      *(undefined4 *)(unsigned)((int)unaff_r8 + 0x34) = uVar14;
      puVar9 = unaff_r8 + 6;
      *(undefined4 *)(unsigned)puVar9 = uVar15;
    }
    else {
      uVar18 = *puVar9;
      uVar19 = puVar7[9];
      uVar23 = puVar7[10];
      unaff_r8[7] = puVar7[0xb];
      unaff_r8[6] = uVar23;
      unaff_r8[5] = uVar19;
      puVar9 = unaff_r8 + 4;
      *puVar9 = uVar18;
    }
    puVar7 = (undefined8 *)(unsigned)((int)0x80 + (int)puVar7);
    *(undefined4 *)(unsigned)puVar7 = 0xf0000000;
    if (in_FPSCR_SZ == '\0') {
      uVar15 = *(undefined4 *)(unsigned)puVar7;
      uVar14 = *(undefined4 *)(unsigned)((int)puVar7 + 4);
      uVar20 = *(undefined4 *)(unsigned)(puVar7 + 1);
      *(undefined4 *)(unsigned)((int)puVar9 + 0x3c) = *(undefined4 *)(unsigned)((int)puVar7 + 0xc);
      *(undefined4 *)(unsigned)(puVar9 + 7) = uVar20;
      *(undefined4 *)(unsigned)((int)puVar9 + 0x34) = uVar14;
      *(undefined4 *)(unsigned)(puVar9 + 6) = uVar15;
    }
    else {
      uVar18 = *puVar7;
      uVar19 = puVar7[1];
      uVar23 = puVar7[2];
      puVar9[7] = puVar7[3];
      puVar9[6] = uVar23;
      puVar9[5] = uVar19;
      puVar9[4] = uVar18;
    }
    *piVar12 = *piVar12 + 3;
  }
  else {
    *(undefined4 *)(unsigned)puVar7 = 0xe0000000;
    if (in_FPSCR_SZ == '\0') {
      uVar14 = *(undefined4 *)(unsigned)puVar7;
      uVar20 = *(undefined4 *)(unsigned)((int)puVar7 + 4);
      uVar24 = *(undefined4 *)(unsigned)(puVar7 + 1);
      *(undefined4 *)(unsigned)((int)unaff_r8 + 0x1c) = *(undefined4 *)(unsigned)((int)puVar7 + 0xc);
      *(undefined4 *)(unsigned)(unaff_r8 + 3) = uVar24;
      *(undefined4 *)(unsigned)((int)unaff_r8 + 0x14) = uVar20;
      unaff_r8 = unaff_r8 + 2;
      *(undefined4 *)(unsigned)unaff_r8 = uVar14;
    }
    else {
      uVar18 = *puVar7;
      uVar19 = puVar7[1];
      uVar23 = puVar7[2];
      unaff_r8[3] = puVar7[3];
      unaff_r8[2] = uVar23;
      unaff_r8[1] = uVar19;
      *unaff_r8 = uVar18;
    }
    puVar9 = puVar7 + 8;
    *(undefined4 *)(unsigned)puVar9 = uVar15;
    if (in_FPSCR_SZ == '\0') {
      uVar14 = *(undefined4 *)(unsigned)puVar9;
      uVar20 = *(undefined4 *)(unsigned)((int)puVar7 + 0x44);
      uVar24 = *(undefined4 *)(unsigned)(puVar7 + 9);
      *(undefined4 *)(unsigned)((int)unaff_r8 + 0x3c) = *(undefined4 *)(unsigned)((int)puVar7 + 0x4c);
      *(undefined4 *)(unsigned)(unaff_r8 + 7) = uVar24;
      *(undefined4 *)(unsigned)((int)unaff_r8 + 0x34) = uVar20;
      puVar9 = unaff_r8 + 6;
      *(undefined4 *)(unsigned)puVar9 = uVar14;
    }
    else {
      uVar18 = *puVar9;
      uVar19 = puVar7[9];
      uVar23 = puVar7[10];
      unaff_r8[7] = puVar7[0xb];
      unaff_r8[6] = uVar23;
      unaff_r8[5] = uVar19;
      puVar9 = unaff_r8 + 4;
      *puVar9 = uVar18;
    }
    puVar6 = (undefined8 *)(unsigned)((int)0xc0 + (int)puVar7);
    *(undefined4 *)(unsigned)puVar6 = uVar15;
    if (in_FPSCR_SZ == '\0') {
      uVar15 = *(undefined4 *)(unsigned)puVar6;
      uVar14 = *(undefined4 *)(unsigned)((int)puVar6 + 4);
      uVar20 = *(undefined4 *)(unsigned)(puVar6 + 1);
      *(undefined4 *)(unsigned)((int)puVar9 + 0x3c) = *(undefined4 *)(unsigned)((int)puVar6 + 0xc);
      *(undefined4 *)(unsigned)(puVar9 + 7) = uVar20;
      *(undefined4 *)(unsigned)((int)puVar9 + 0x34) = uVar14;
      puVar9 = puVar9 + 6;
      *(undefined4 *)(unsigned)puVar9 = uVar15;
    }
    else {
      uVar18 = *puVar6;
      uVar19 = puVar6[1];
      uVar23 = puVar6[2];
      puVar9[7] = puVar6[3];
      puVar9[6] = uVar23;
      puVar9[5] = uVar19;
      puVar9 = puVar9 + 4;
      *puVar9 = uVar18;
    }
    puVar7 = (undefined8 *)(unsigned)((int)0x80 + (int)puVar7);
    *(undefined4 *)(unsigned)puVar7 = 0xf0000000;
    if (in_FPSCR_SZ == '\0') {
      uVar15 = *(undefined4 *)(unsigned)puVar7;
      uVar14 = *(undefined4 *)(unsigned)((int)puVar7 + 4);
      uVar20 = *(undefined4 *)(unsigned)(puVar7 + 1);
      *(undefined4 *)(unsigned)((int)puVar9 + 0x3c) = *(undefined4 *)(unsigned)((int)puVar7 + 0xc);
      *(undefined4 *)(unsigned)(puVar9 + 7) = uVar20;
      *(undefined4 *)(unsigned)((int)puVar9 + 0x34) = uVar14;
      *(undefined4 *)(unsigned)(puVar9 + 6) = uVar15;
    }
    else {
      uVar18 = *puVar7;
      uVar19 = puVar7[1];
      uVar23 = puVar7[2];
      puVar9[7] = puVar7[3];
      puVar9[6] = uVar23;
      puVar9[5] = uVar19;
      puVar9[4] = uVar18;
    }
    *piVar12 = *piVar12 + 4;
  }
  return iVar5;
}

__asm__(".globl _FUN_8c247898\n.set _FUN_8c247898, _FUN_8c247898_def\n");
