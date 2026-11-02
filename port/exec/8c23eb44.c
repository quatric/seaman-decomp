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
int FUN_8c23eb44_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c23eb44";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 36; for (int i_ = 0; i_ < 36; i_++) z_[i_] = 0; }
  int iVar1;
  double *pdVar2;
  undefined8 *puVar3;
  int iVar4;
  double *pdVar5;
  undefined8 *puVar6;
  int iVar7;
  undefined8 *unaff_r8 = 0;
  undefined8 *puVar8;
  int iVar9;
  int *piVar10;
  int iVar11;
  int iVar12;
  double in_dr0 = 0;
  float fVar14;
  undefined8 uVar13;
  undefined4 uVar16;
  double dVar17;
  undefined8 uVar18;
  double in_dr4 = 0;
  double dVar20;
  float fVar23;
  double dVar21;
  undefined8 uVar22;
  double in_dr6 = 0;
  float fVar25;
  double in_xd2 = 0;
  double in_xd4 = 0;
  double dVar26;
  char in_FPSCR_PR = 0;
  char in_FPSCR_SZ = 0;
  undefined4 uVar15;
  undefined4 uVar19;
  undefined4 uVar24;
  
  iVar4 = 0x8c4c11a0;
  puVar3 = 0x8c4c2520;
  pdVar2 = 0x8c4ab31c;
  iVar1 = 0x8c4aa4a8;
  ((int *)(fr0_ - 0x24))[0] = ar4;
  iVar11 = 0;
  ((int *)(fr0_ - 0x24))[1] = ar5;
  ((int *)(fr0_ - 0x24))[2] = ar6;
  iVar7 = 2;
  iVar12 = 0;
  do {
    pdVar5 = 0x8c4ab324;
    iVar9 = iVar11;
    if ((*(uint *)(unsigned)((int *)(fr0_ - 0x24))[iVar7] & 1 ^ *(uint *)(unsigned)((int *)(fr0_ - 0x24))[iVar12] & 1) == 1) {
      iVar9 = ((int *)(fr0_ - 0x24))[iVar7];
      iVar7 = ((int *)(fr0_ - 0x24))[iVar12];
      if (in_FPSCR_SZ == '\0') {
        dVar20 = CONCAT44D(*(undefined4 *)(unsigned)(iVar9 + 0x18),SUB84(in_dr4,0));
        dVar17 = CONCAT44D(*(undefined4 *)(unsigned)(iVar7 + 0x18),*(undefined4 *)(unsigned)0x8c4aa4d4);
      }
      else {
        dVar20 = *(double *)(unsigned)(iVar9 + 0x18);
        in_xd2 = *(undefined4 *)(unsigned)0x8c4aa4d4;
        dVar17 = *(double *)(unsigned)(iVar7 + 0x18);
      }
      fVar23 = F32HI(dVar20);
      if (in_FPSCR_PR == '\0') {
        dVar17 = CONCAT44D((int)(D2U(dVar17) >> 0x20),F32LO(dVar17) - fVar23);
      }
      else {
        dVar17 = dVar17 - dVar20;
      }
      if (in_FPSCR_SZ == '\0') {
        dVar20 = CONCAT44D(fVar23,*(undefined4 *)(unsigned)(iVar9 + 0x10));
        dVar26 = in_xd4;
      }
      else {
        dVar26 = *(double *)(unsigned)(iVar9 + 0x10);
      }
      if (in_FPSCR_PR == '\0') {
        dVar17 = CONCAT44D(F32HI(dVar17) -
                                  F32HI(dVar20),SUB84(dVar17,0));
      }
      else {
        dVar17 = dVar17 - dVar20;
      }
      dVar21 = in_xd2;
      if (in_FPSCR_SZ == '\0') {
        dVar21 = CONCAT44D(SUB84(dVar17,0),SUB84(dVar20,0));
      }
      if (in_FPSCR_PR == '\0') {
        dVar21 = CONCAT44D(F32HI(dVar21) /
                                  F32HI(dVar17),SUB84(dVar21,0));
      }
      else {
        dVar21 = dVar21 / dVar17;
      }
      fVar23 = F32LO(dVar21);
      if (in_FPSCR_SZ == '\0') {
        dVar20 = CONCAT44D(fVar23,*(undefined4 *)(unsigned)(iVar7 + 0x10));
      }
      else {
        in_xd2 = *(double *)(unsigned)(iVar7 + 0x10);
        dVar20 = dVar26;
      }
      if (in_FPSCR_PR == '\0') {
        dVar20 = CONCAT44D((int)(D2U(dVar20) >> 0x20),F32LO(dVar20) - fVar23);
      }
      else {
        dVar20 = dVar20 - dVar21;
      }
      if (in_FPSCR_SZ == '\0') {
        in_dr6 = CONCAT44D(*(undefined4 *)(unsigned)(iVar9 + 0x14),SUB84(in_dr6,0));
        dVar21 = CONCAT44D((int)(D2U(dVar21) >> 0x20),SUB84(in_dr0,0));
      }
      else {
        in_dr6 = *(double *)(unsigned)(iVar9 + 0x14);
      }
      fVar14 = F32HI(dVar21);
      if (in_FPSCR_PR == '\0') {
        dVar20 = CONCAT44D(fVar14 * F32LO(dVar20) + F32HI(dVar20),
                                  SUB84(dVar20,0));
      }
      fVar25 = F32HI(in_dr6);
      if (in_FPSCR_SZ == '\0') {
        dVar20 = CONCAT44D((int)(D2U(dVar20) >> 0x20),*(undefined4 *)(unsigned)(iVar7 + 0x14));
        in_dr4 = CONCAT44D(fVar25,fVar23);
      }
      else {
        in_xd2 = *(double *)(unsigned)(iVar7 + 0x14);
        in_dr4 = in_dr6;
      }
      if (in_FPSCR_PR == '\0') {
        dVar20 = CONCAT44D((int)(D2U(dVar20) >> 0x20),F32LO(dVar20) - fVar25);
      }
      else {
        dVar20 = dVar20 - in_dr6;
      }
      in_xd4 = dVar20;
      if (in_FPSCR_SZ == '\0') {
        in_dr4 = CONCAT44D((int)((ulonglong)in_dr4 >> 0x20),(int)(D2U(dVar20) >> 0x20))
        ;
        in_xd4 = dVar26;
      }
      if (in_FPSCR_PR == '\0') {
        in_dr4 = CONCAT44D(fVar14 * F32LO(dVar20) + F32HI(in_dr4),
                                  SUB84(in_dr4,0));
      }
      if (in_FPSCR_SZ == '\0') {
        dVar20 = CONCAT44D(*(undefined4 *)(unsigned)0x8c4ab320,SUB84(dVar21,0));
        dVar17 = CONCAT44D(*(undefined4 *)(unsigned)(iVar1 + 0xc),*(undefined4 *)(unsigned)pdVar2);
      }
      else {
        in_xd2 = *pdVar2;
        dVar20 = *(undefined4 *)(unsigned)0x8c4ab320;
        dVar17 = *(double *)(unsigned)(iVar1 + 0xc);
      }
      if (in_FPSCR_PR == '\0') {
        dVar17 = CONCAT44D((int)(D2U(dVar17) >> 0x20),
                                  F32LO(dVar17) * F32HI(dVar20));
      }
      else {
        dVar17 = dVar17 * dVar20;
      }
      dVar26 = in_xd4;
      if (in_FPSCR_SZ == '\0') {
        dVar26 = CONCAT44D(SUB84(in_dr4,0),SUB84(dVar20,0));
      }
      if (in_FPSCR_PR == '\0') {
        dVar17 = CONCAT44D(F32HI(dVar26) * F32LO(dVar17) +
                                  F32HI(dVar17),SUB84(dVar17,0));
      }
      if (in_FPSCR_SZ == '\0') {
        *(int *)(unsigned)((int)puVar3 + iVar11 * 0x20 + 4) = (int)(D2U(dVar17) >> 0x20);
        dVar20 = CONCAT44D(*(undefined4 *)(unsigned)pdVar5,SUB84(dVar26,0));
        dVar17 = CONCAT44D(*(undefined4 *)(unsigned)(iVar1 + 0x10),*(undefined4 *)(unsigned)pdVar2);
      }
      else {
        *(double *)(unsigned)((int)puVar3 + iVar11 * 0x20 + 4) = dVar17;
        in_xd2 = *pdVar2;
        dVar20 = *pdVar5;
        dVar17 = *(double *)(unsigned)(iVar1 + 0x10);
      }
      if (in_FPSCR_PR == '\0') {
        dVar17 = CONCAT44D((int)(D2U(dVar17) >> 0x20),
                                  F32LO(dVar17) * F32HI(dVar20));
      }
      else {
        dVar17 = dVar17 * dVar20;
      }
      in_dr0 = in_dr4;
      if (in_FPSCR_SZ == '\0') {
        in_dr0 = CONCAT44D((int)((ulonglong)in_dr4 >> 0x20),SUB84(dVar20,0));
      }
      if (in_FPSCR_PR == '\0') {
        dVar17 = CONCAT44D(F32HI(in_dr0) * F32LO(dVar17) +
                                  F32HI(dVar17),SUB84(dVar17,0));
      }
      iVar9 = iVar11 + 1;
      if (in_FPSCR_SZ == '\0') {
        *(int *)(unsigned)(puVar3 + iVar11 * 4 + 1) = (int)(D2U(dVar17) >> 0x20);
        *(undefined4 *)(unsigned)((int)puVar3 + iVar11 * 0x20 + 0xc) = *(undefined4 *)(unsigned)pdVar2;
        *(undefined4 *)(unsigned)(puVar3 + iVar11 * 4 + 2) = *(undefined4 *)(unsigned)(iVar4 + 0x10);
        *(undefined4 *)(unsigned)((int)puVar3 + iVar11 * 0x20 + 0x14) = *(undefined4 *)(unsigned)(iVar4 + 0x14);
        *(undefined4 *)(unsigned)(puVar3 + iVar11 * 4 + 3) = *(undefined4 *)(unsigned)(iVar4 + 0x18);
        *(undefined4 *)(unsigned)((int)puVar3 + iVar11 * 0x20 + 0x1c) = *(undefined4 *)(unsigned)(iVar4 + 0x1c);
        iVar9 = iVar11 + 1;
      }
      else {
        puVar3[iVar11 * 4 + 1] = dVar17;
        *(double *)(unsigned)((int)puVar3 + iVar11 * 0x20 + 0xc) = *pdVar2;
        puVar3[iVar11 * 4 + 2] = *(undefined8 *)(unsigned)(iVar4 + 0x10);
        *(undefined8 *)(unsigned)((int)puVar3 + iVar11 * 0x20 + 0x14) = *(undefined8 *)(unsigned)(iVar4 + 0x14);
        puVar3[iVar11 * 4 + 3] = *(undefined8 *)(unsigned)(iVar4 + 0x18);
        in_xd2 = *(double *)(unsigned)(iVar4 + 0x1c);
        *(double *)(unsigned)((int)puVar3 + iVar11 * 0x20 + 0x1c) = in_xd2;
      }
    }
    piVar10 = ((int *)(fr0_ - 0x24)) + iVar12;
    iVar11 = iVar9;
    if ((*(uint *)(unsigned)*piVar10 & 1) == 0) {
      if (in_FPSCR_SZ == '\0') {
        *(undefined4 *)(unsigned)((int)puVar3 + iVar9 * 0x20 + 4) = *(undefined4 *)(unsigned)(*piVar10 + 4);
      }
      else {
        in_xd2 = *(double *)(unsigned)(*piVar10 + 4);
        *(double *)(unsigned)((int)puVar3 + iVar9 * 0x20 + 4) = in_xd2;
      }
      iVar11 = iVar9 + 1;
      if (in_FPSCR_SZ == '\0') {
        *(undefined4 *)(unsigned)(puVar3 + iVar9 * 4 + 1) = *(undefined4 *)(unsigned)(*piVar10 + 8);
      }
      else {
        in_xd2 = *(double *)(unsigned)(*piVar10 + 8);
        puVar3[iVar9 * 4 + 1] = in_xd2;
      }
      if (in_FPSCR_SZ == '\0') {
        *(undefined4 *)(unsigned)((int)puVar3 + iVar9 * 0x20 + 0xc) = *(undefined4 *)(unsigned)(*piVar10 + 0xc);
        *(undefined4 *)(unsigned)(puVar3 + iVar9 * 4 + 2) = *(undefined4 *)(unsigned)(iVar4 + 0x10);
        *(undefined4 *)(unsigned)((int)puVar3 + iVar9 * 0x20 + 0x14) = *(undefined4 *)(unsigned)(iVar4 + 0x14);
        *(undefined4 *)(unsigned)(puVar3 + iVar9 * 4 + 3) = *(undefined4 *)(unsigned)(iVar4 + 0x18);
        *(undefined4 *)(unsigned)((int)puVar3 + iVar9 * 0x20 + 0x1c) = *(undefined4 *)(unsigned)(iVar4 + 0x1c);
      }
      else {
        *(undefined8 *)(unsigned)((int)puVar3 + iVar9 * 0x20 + 0xc) = *(undefined8 *)(unsigned)(*piVar10 + 0xc);
        puVar3[iVar9 * 4 + 2] = *(undefined8 *)(unsigned)(iVar4 + 0x10);
        *(undefined8 *)(unsigned)((int)puVar3 + iVar9 * 0x20 + 0x14) = *(undefined8 *)(unsigned)(iVar4 + 0x14);
        puVar3[iVar9 * 4 + 3] = *(undefined8 *)(unsigned)(iVar4 + 0x18);
        in_xd2 = *(double *)(unsigned)(iVar4 + 0x1c);
        *(double *)(unsigned)((int)puVar3 + iVar9 * 0x20 + 0x1c) = in_xd2;
      }
    }
    uVar16 = 0xe0000000;
    piVar10 = 0x8c4aa520;
    iVar9 = iVar12 + 1;
    iVar7 = iVar12;
    iVar12 = iVar9;
  } while (iVar9 < 3);
  if (iVar11 == 3) {
    *(undefined4 *)(unsigned)puVar3 = 0xe0000000;
    if (in_FPSCR_SZ == '\0') {
      uVar15 = *(undefined4 *)(unsigned)puVar3;
      uVar19 = *(undefined4 *)(unsigned)((int)puVar3 + 4);
      uVar24 = *(undefined4 *)(unsigned)(puVar3 + 1);
      *(undefined4 *)(unsigned)((int)unaff_r8 + 0x1c) = *(undefined4 *)(unsigned)((int)puVar3 + 0xc);
      *(undefined4 *)(unsigned)(unaff_r8 + 3) = uVar24;
      *(undefined4 *)(unsigned)((int)unaff_r8 + 0x14) = uVar19;
      unaff_r8 = unaff_r8 + 2;
      *(undefined4 *)(unsigned)unaff_r8 = uVar15;
    }
    else {
      uVar13 = *puVar3;
      uVar18 = puVar3[1];
      uVar22 = puVar3[2];
      unaff_r8[3] = puVar3[3];
      unaff_r8[2] = uVar22;
      unaff_r8[1] = uVar18;
      *unaff_r8 = uVar13;
    }
    puVar8 = puVar3 + 4;
    *(undefined4 *)(unsigned)puVar8 = uVar16;
    if (in_FPSCR_SZ == '\0') {
      uVar16 = *(undefined4 *)(unsigned)puVar8;
      uVar15 = *(undefined4 *)(unsigned)((int)puVar3 + 0x24);
      uVar19 = *(undefined4 *)(unsigned)(puVar3 + 5);
      *(undefined4 *)(unsigned)((int)unaff_r8 + 0x3c) = *(undefined4 *)(unsigned)((int)puVar3 + 0x2c);
      *(undefined4 *)(unsigned)(unaff_r8 + 7) = uVar19;
      *(undefined4 *)(unsigned)((int)unaff_r8 + 0x34) = uVar15;
      puVar8 = unaff_r8 + 6;
      *(undefined4 *)(unsigned)puVar8 = uVar16;
    }
    else {
      uVar13 = *puVar8;
      uVar18 = puVar3[5];
      uVar22 = puVar3[6];
      unaff_r8[7] = puVar3[7];
      unaff_r8[6] = uVar22;
      unaff_r8[5] = uVar18;
      puVar8 = unaff_r8 + 4;
      *puVar8 = uVar13;
    }
    puVar6 = puVar3 + 8;
    *(undefined4 *)(unsigned)puVar6 = 0xf0000000;
    if (in_FPSCR_SZ == '\0') {
      uVar16 = *(undefined4 *)(unsigned)puVar6;
      uVar15 = *(undefined4 *)(unsigned)((int)puVar3 + 0x44);
      uVar19 = *(undefined4 *)(unsigned)(puVar3 + 9);
      *(undefined4 *)(unsigned)((int)puVar8 + 0x3c) = *(undefined4 *)(unsigned)((int)puVar3 + 0x4c);
      *(undefined4 *)(unsigned)(puVar8 + 7) = uVar19;
      *(undefined4 *)(unsigned)((int)puVar8 + 0x34) = uVar15;
      *(undefined4 *)(unsigned)(puVar8 + 6) = uVar16;
    }
    else {
      uVar13 = *puVar6;
      uVar18 = puVar3[9];
      uVar22 = puVar3[10];
      puVar8[7] = puVar3[0xb];
      puVar8[6] = uVar22;
      puVar8[5] = uVar18;
      puVar8[4] = uVar13;
    }
    *piVar10 = *piVar10 + 3;
  }
  else {
    *(undefined4 *)(unsigned)puVar3 = 0xe0000000;
    if (in_FPSCR_SZ == '\0') {
      uVar15 = *(undefined4 *)(unsigned)puVar3;
      uVar19 = *(undefined4 *)(unsigned)((int)puVar3 + 4);
      uVar24 = *(undefined4 *)(unsigned)(puVar3 + 1);
      *(undefined4 *)(unsigned)((int)unaff_r8 + 0x1c) = *(undefined4 *)(unsigned)((int)puVar3 + 0xc);
      *(undefined4 *)(unsigned)(unaff_r8 + 3) = uVar24;
      *(undefined4 *)(unsigned)((int)unaff_r8 + 0x14) = uVar19;
      unaff_r8 = unaff_r8 + 2;
      *(undefined4 *)(unsigned)unaff_r8 = uVar15;
    }
    else {
      uVar13 = *puVar3;
      uVar18 = puVar3[1];
      uVar22 = puVar3[2];
      unaff_r8[3] = puVar3[3];
      unaff_r8[2] = uVar22;
      unaff_r8[1] = uVar18;
      *unaff_r8 = uVar13;
    }
    puVar8 = puVar3 + 4;
    *(undefined4 *)(unsigned)puVar8 = uVar16;
    if (in_FPSCR_SZ == '\0') {
      uVar15 = *(undefined4 *)(unsigned)puVar8;
      uVar19 = *(undefined4 *)(unsigned)((int)puVar3 + 0x24);
      uVar24 = *(undefined4 *)(unsigned)(puVar3 + 5);
      *(undefined4 *)(unsigned)((int)unaff_r8 + 0x3c) = *(undefined4 *)(unsigned)((int)puVar3 + 0x2c);
      *(undefined4 *)(unsigned)(unaff_r8 + 7) = uVar24;
      *(undefined4 *)(unsigned)((int)unaff_r8 + 0x34) = uVar19;
      puVar8 = unaff_r8 + 6;
      *(undefined4 *)(unsigned)puVar8 = uVar15;
    }
    else {
      uVar13 = *puVar8;
      uVar18 = puVar3[5];
      uVar22 = puVar3[6];
      unaff_r8[7] = puVar3[7];
      unaff_r8[6] = uVar22;
      unaff_r8[5] = uVar18;
      puVar8 = unaff_r8 + 4;
      *puVar8 = uVar13;
    }
    puVar6 = puVar3 + 0xc;
    *(undefined4 *)(unsigned)puVar6 = uVar16;
    if (in_FPSCR_SZ == '\0') {
      uVar16 = *(undefined4 *)(unsigned)puVar6;
      uVar15 = *(undefined4 *)(unsigned)((int)puVar3 + 100);
      uVar19 = *(undefined4 *)(unsigned)(puVar3 + 0xd);
      *(undefined4 *)(unsigned)((int)puVar8 + 0x3c) = *(undefined4 *)(unsigned)((int)puVar3 + 0x6c);
      *(undefined4 *)(unsigned)(puVar8 + 7) = uVar19;
      *(undefined4 *)(unsigned)((int)puVar8 + 0x34) = uVar15;
      puVar8 = puVar8 + 6;
      *(undefined4 *)(unsigned)puVar8 = uVar16;
    }
    else {
      uVar13 = *puVar6;
      uVar18 = puVar3[0xd];
      uVar22 = puVar3[0xe];
      puVar8[7] = puVar3[0xf];
      puVar8[6] = uVar22;
      puVar8[5] = uVar18;
      puVar8 = puVar8 + 4;
      *puVar8 = uVar13;
    }
    puVar6 = puVar3 + 8;
    *(undefined4 *)(unsigned)puVar6 = 0xf0000000;
    if (in_FPSCR_SZ == '\0') {
      uVar16 = *(undefined4 *)(unsigned)puVar6;
      uVar15 = *(undefined4 *)(unsigned)((int)puVar3 + 0x44);
      uVar19 = *(undefined4 *)(unsigned)(puVar3 + 9);
      *(undefined4 *)(unsigned)((int)puVar8 + 0x3c) = *(undefined4 *)(unsigned)((int)puVar3 + 0x4c);
      *(undefined4 *)(unsigned)(puVar8 + 7) = uVar19;
      *(undefined4 *)(unsigned)((int)puVar8 + 0x34) = uVar15;
      *(undefined4 *)(unsigned)(puVar8 + 6) = uVar16;
    }
    else {
      uVar13 = *puVar6;
      uVar18 = puVar3[9];
      uVar22 = puVar3[10];
      puVar8[7] = puVar3[0xb];
      puVar8[6] = uVar22;
      puVar8[5] = uVar18;
      puVar8[4] = uVar13;
    }
    *piVar10 = *piVar10 + 4;
  }
  return iVar11;
}

__asm__(".globl _FUN_8c23eb44\n.set _FUN_8c23eb44, _FUN_8c23eb44_def\n");
