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
int FUN_8c24763c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined8 *ar7)

{
  ring[rp++ & 255] = "FUN_8c24763c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 32; for (int i_ = 0; i_ < 32; i_++) z_[i_] = 0; }
  double *pdVar1;
  undefined8 *puVar2;
  double *pdVar3;
  double *pdVar4;
  int iVar5;
  int iVar6;
  undefined8 *puVar7;
  int iVar8;
  int iVar9;
  undefined8 *unaff_r8 = 0;
  undefined8 *puVar10;
  int *piVar11;
  int iVar12;
  double in_dr0 = 0;
  float fVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  float fVar16;
  double dVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  double in_dr4 = 0;
  double dVar21;
  double dVar22;
  undefined8 uVar23;
  double in_dr6 = 0;
  float fVar25;
  double in_xd2 = 0;
  double in_xd4 = 0;
  double dVar26;
  char in_FPSCR_PR = 0;
  char in_FPSCR_SZ = 0;
  undefined4 uVar20;
  undefined4 uVar24;
  
  puVar2 = 0x8c4c2520;
  pdVar1 = 0x8c4ab31c;
  ((int *)(fr0_ - 0x20))[0] = ar4;
  ((int *)(fr0_ - 0x20))[1] = ar5;
  ((int *)(fr0_ - 0x20))[2] = ar6;
  iVar5 = 2;
  iVar8 = 0;
  iVar12 = 0;
  do {
    pdVar4 = 0x8c4aa4b8;
    pdVar3 = 0x8c4ab324;
    iVar6 = iVar12;
    if ((*(uint *)(unsigned)((int *)(fr0_ - 0x20))[iVar5] & 1 ^ *(uint *)(unsigned)((int *)(fr0_ - 0x20))[iVar8] & 1) == 1) {
      iVar6 = ((int *)(fr0_ - 0x20))[iVar5];
      iVar5 = ((int *)(fr0_ - 0x20))[iVar8];
      if (in_FPSCR_SZ == '\0') {
        dVar21 = CONCAT44D(*(undefined4 *)(unsigned)(iVar6 + 0x18),SUB84(in_dr4,0));
        dVar17 = CONCAT44D(*(undefined4 *)(unsigned)(iVar5 + 0x18),*(undefined4 *)(unsigned)0x8c4aa4d4);
      }
      else {
        in_xd2 = *(undefined4 *)(unsigned)0x8c4aa4d4;
        dVar21 = *(double *)(unsigned)(iVar6 + 0x18);
        dVar17 = *(double *)(unsigned)(iVar5 + 0x18);
      }
      fVar16 = F32HI(dVar21);
      if (in_FPSCR_PR == '\0') {
        dVar17 = CONCAT44D((int)(D2U(dVar17) >> 0x20),F32LO(dVar17) - fVar16);
      }
      else {
        dVar17 = dVar17 - dVar21;
      }
      if (in_FPSCR_SZ == '\0') {
        dVar21 = CONCAT44D(fVar16,*(undefined4 *)(unsigned)(iVar6 + 0x10));
        dVar26 = in_xd4;
      }
      else {
        dVar26 = *(double *)(unsigned)(iVar6 + 0x10);
      }
      if (in_FPSCR_PR == '\0') {
        dVar17 = CONCAT44D(F32HI(dVar17) -
                                  F32HI(dVar21),SUB84(dVar17,0));
      }
      else {
        dVar17 = dVar17 - dVar21;
      }
      dVar22 = in_xd2;
      if (in_FPSCR_SZ == '\0') {
        dVar22 = CONCAT44D(SUB84(dVar17,0),SUB84(dVar21,0));
      }
      if (in_FPSCR_PR == '\0') {
        dVar22 = CONCAT44D(F32HI(dVar22) /
                                  F32HI(dVar17),SUB84(dVar22,0));
      }
      else {
        dVar22 = dVar22 / dVar17;
      }
      fVar16 = F32LO(dVar22);
      if (in_FPSCR_SZ == '\0') {
        dVar21 = CONCAT44D(fVar16,*(undefined4 *)(unsigned)(iVar5 + 0x10));
      }
      else {
        in_xd2 = *(double *)(unsigned)(iVar5 + 0x10);
        dVar21 = dVar26;
      }
      if (in_FPSCR_PR == '\0') {
        dVar21 = CONCAT44D((int)(D2U(dVar21) >> 0x20),F32LO(dVar21) - fVar16);
      }
      else {
        dVar21 = dVar21 - dVar22;
      }
      if (in_FPSCR_SZ == '\0') {
        in_dr6 = CONCAT44D(*(undefined4 *)(unsigned)(iVar6 + 0x14),SUB84(in_dr6,0));
        dVar22 = CONCAT44D((int)(D2U(dVar22) >> 0x20),SUB84(in_dr0,0));
      }
      else {
        in_dr6 = *(double *)(unsigned)(iVar6 + 0x14);
      }
      fVar13 = F32HI(dVar22);
      if (in_FPSCR_PR == '\0') {
        dVar21 = CONCAT44D(fVar13 * F32LO(dVar21) + F32HI(dVar21),
                                  SUB84(dVar21,0));
      }
      fVar25 = F32HI(in_dr6);
      if (in_FPSCR_SZ == '\0') {
        dVar21 = CONCAT44D((int)(D2U(dVar21) >> 0x20),*(undefined4 *)(unsigned)(iVar5 + 0x14));
        in_dr4 = CONCAT44D(fVar25,fVar16);
      }
      else {
        in_xd2 = *(double *)(unsigned)(iVar5 + 0x14);
        in_dr4 = in_dr6;
      }
      if (in_FPSCR_PR == '\0') {
        dVar21 = CONCAT44D((int)(D2U(dVar21) >> 0x20),F32LO(dVar21) - fVar25);
      }
      else {
        dVar21 = dVar21 - in_dr6;
      }
      uVar15 = (undefined4)(D2U(dVar21) >> 0x20);
      in_xd4 = dVar21;
      if (in_FPSCR_SZ == '\0') {
        in_dr4 = CONCAT44D((int)((ulonglong)in_dr4 >> 0x20),uVar15);
        in_xd4 = dVar26;
      }
      if (in_FPSCR_PR == '\0') {
        in_dr4 = CONCAT44D(fVar13 * F32LO(dVar21) + F32HI(in_dr4),
                                  SUB84(in_dr4,0));
      }
      if (in_FPSCR_SZ == '\0') {
        dVar21 = CONCAT44D(uVar15,*(undefined4 *)(unsigned)pdVar1);
        dVar17 = CONCAT44D(*(undefined4 *)(unsigned)0x8c4ab320,SUB84(dVar22,0));
      }
      else {
        in_xd2 = *pdVar1;
        dVar17 = *(undefined4 *)(unsigned)0x8c4ab320;
      }
      if (in_FPSCR_PR == '\0') {
        fVar16 = F32LO(dVar21) * F32HI(dVar17);
      }
      else {
        fVar16 = SUB84(dVar21 * dVar17,0);
      }
      if (in_FPSCR_SZ == '\0') {
        uVar18 = CONCAT44(*(undefined4 *)(unsigned)0x8c4aa4b4,fVar16);
        dVar21 = CONCAT44D(SUB84(in_dr4,0),SUB84(dVar17,0));
      }
      else {
        uVar18 = *(undefined4 *)(unsigned)0x8c4aa4b4;
        dVar21 = in_xd4;
      }
      if (in_FPSCR_PR == '\0') {
        uVar18 = CONCAT44(F32HI(dVar21) * (float)uVar18 +
                          F32HI(uVar18),(float)uVar18);
      }
      if (in_FPSCR_SZ == '\0') {
        *(int *)(unsigned)((int)puVar2 + iVar12 * 0x20 + 4) = (int)((ulonglong)uVar18 >> 0x20);
        dVar21 = CONCAT44D(*(undefined4 *)(unsigned)pdVar3,SUB84(dVar21,0));
        dVar17 = CONCAT44D(*(undefined4 *)(unsigned)pdVar4,*(undefined4 *)(unsigned)pdVar1);
      }
      else {
        *(undefined8 *)(unsigned)((int)puVar2 + iVar12 * 0x20 + 4) = uVar18;
        dVar21 = *pdVar3;
        in_xd2 = *pdVar1;
        dVar17 = *pdVar4;
      }
      if (in_FPSCR_PR == '\0') {
        dVar17 = CONCAT44D((int)(D2U(dVar17) >> 0x20),
                                  F32LO(dVar17) * F32HI(dVar21));
      }
      else {
        dVar17 = dVar17 * dVar21;
      }
      in_dr0 = in_dr4;
      if (in_FPSCR_SZ == '\0') {
        in_dr0 = CONCAT44D((int)((ulonglong)in_dr4 >> 0x20),SUB84(dVar21,0));
      }
      if (in_FPSCR_PR == '\0') {
        dVar17 = CONCAT44D(F32HI(in_dr0) * F32LO(dVar17) +
                                  F32HI(dVar17),SUB84(dVar17,0));
      }
      iVar6 = iVar12 + 1;
      if (in_FPSCR_SZ == '\0') {
        *(int *)(unsigned)(puVar2 + iVar12 * 4 + 1) = (int)(D2U(dVar17) >> 0x20);
        *(undefined4 *)(unsigned)((int)puVar2 + iVar12 * 0x20 + 0xc) = *(undefined4 *)(unsigned)pdVar1;
        *(undefined4 *)(unsigned)(puVar2 + iVar12 * 4 + 2) = *(undefined4 *)(unsigned)ar7;
        *(undefined4 *)(unsigned)((int)puVar2 + iVar12 * 0x20 + 0x14) = *(undefined4 *)(unsigned)((int)ar7 + 4);
        *(undefined4 *)(unsigned)(puVar2 + iVar12 * 4 + 3) = *(undefined4 *)(unsigned)(ar7 + 1);
        *(undefined4 *)(unsigned)((int)puVar2 + iVar12 * 0x20 + 0x1c) = *(undefined4 *)(unsigned)((int)ar7 + 0xc);
        iVar6 = iVar12 + 1;
      }
      else {
        puVar2[iVar12 * 4 + 1] = dVar17;
        *(double *)(unsigned)((int)puVar2 + iVar12 * 0x20 + 0xc) = *pdVar1;
        puVar2[iVar12 * 4 + 2] = *ar7;
        *(undefined8 *)(unsigned)((int)puVar2 + iVar12 * 0x20 + 0x14) = *(undefined8 *)(unsigned)((int)ar7 + 4);
        puVar2[iVar12 * 4 + 3] = ar7[1];
        in_xd2 = *(double *)(unsigned)((int)ar7 + 0xc);
        *(double *)(unsigned)((int)puVar2 + iVar12 * 0x20 + 0x1c) = in_xd2;
      }
    }
    piVar11 = ((int *)(fr0_ - 0x20)) + iVar8;
    if ((*(uint *)(unsigned)*piVar11 & 1) == 0) {
      if (in_FPSCR_SZ == '\0') {
        *(undefined4 *)(unsigned)((int)puVar2 + iVar6 * 0x20 + 4) = *(undefined4 *)(unsigned)(*piVar11 + 4);
      }
      else {
        in_xd2 = *(double *)(unsigned)(*piVar11 + 4);
        *(double *)(unsigned)((int)puVar2 + iVar6 * 0x20 + 4) = in_xd2;
      }
      if (in_FPSCR_SZ == '\0') {
        *(undefined4 *)(unsigned)(puVar2 + iVar6 * 4 + 1) = *(undefined4 *)(unsigned)(*piVar11 + 8);
      }
      else {
        in_xd2 = *(double *)(unsigned)(*piVar11 + 8);
        puVar2[iVar6 * 4 + 1] = in_xd2;
      }
      if (in_FPSCR_SZ == '\0') {
        *(undefined4 *)(unsigned)((int)puVar2 + iVar6 * 0x20 + 0xc) = *(undefined4 *)(unsigned)(*piVar11 + 0xc);
        *(undefined4 *)(unsigned)(puVar2 + iVar6 * 4 + 2) = *(undefined4 *)(unsigned)ar7;
        *(undefined4 *)(unsigned)((int)puVar2 + iVar6 * 0x20 + 0x14) = *(undefined4 *)(unsigned)((int)ar7 + 4);
        *(undefined4 *)(unsigned)(puVar2 + iVar6 * 4 + 3) = *(undefined4 *)(unsigned)(ar7 + 1);
        *(undefined4 *)(unsigned)((int)puVar2 + iVar6 * 0x20 + 0x1c) = *(undefined4 *)(unsigned)((int)ar7 + 0xc);
      }
      else {
        *(undefined8 *)(unsigned)((int)puVar2 + iVar6 * 0x20 + 0xc) = *(undefined8 *)(unsigned)(*piVar11 + 0xc);
        puVar2[iVar6 * 4 + 2] = *ar7;
        *(undefined8 *)(unsigned)((int)puVar2 + iVar6 * 0x20 + 0x14) = *(undefined8 *)(unsigned)((int)ar7 + 4);
        puVar2[iVar6 * 4 + 3] = ar7[1];
        in_xd2 = *(double *)(unsigned)((int)ar7 + 0xc);
        *(double *)(unsigned)((int)puVar2 + iVar6 * 0x20 + 0x1c) = in_xd2;
      }
      iVar6 = iVar6 + 1;
    }
    uVar15 = 0xe0000000;
    piVar11 = 0x8c4aa520;
    iVar9 = iVar8 + 1;
    iVar5 = iVar8;
    iVar8 = iVar9;
    iVar12 = iVar6;
  } while (iVar9 < 3);
  if (iVar6 == 3) {
    *(undefined4 *)(unsigned)puVar2 = 0xe0000000;
    if (in_FPSCR_SZ == '\0') {
      uVar14 = *(undefined4 *)(unsigned)puVar2;
      uVar20 = *(undefined4 *)(unsigned)((int)puVar2 + 4);
      uVar24 = *(undefined4 *)(unsigned)(puVar2 + 1);
      *(undefined4 *)(unsigned)((int)unaff_r8 + 0x1c) = *(undefined4 *)(unsigned)((int)puVar2 + 0xc);
      *(undefined4 *)(unsigned)(unaff_r8 + 3) = uVar24;
      *(undefined4 *)(unsigned)((int)unaff_r8 + 0x14) = uVar20;
      unaff_r8 = unaff_r8 + 2;
      *(undefined4 *)(unsigned)unaff_r8 = uVar14;
    }
    else {
      uVar18 = *puVar2;
      uVar19 = puVar2[1];
      uVar23 = puVar2[2];
      unaff_r8[3] = puVar2[3];
      unaff_r8[2] = uVar23;
      unaff_r8[1] = uVar19;
      *unaff_r8 = uVar18;
    }
    puVar10 = puVar2 + 4;
    *(undefined4 *)(unsigned)puVar10 = uVar15;
    if (in_FPSCR_SZ == '\0') {
      uVar15 = *(undefined4 *)(unsigned)puVar10;
      uVar14 = *(undefined4 *)(unsigned)((int)puVar2 + 0x24);
      uVar20 = *(undefined4 *)(unsigned)(puVar2 + 5);
      *(undefined4 *)(unsigned)((int)unaff_r8 + 0x3c) = *(undefined4 *)(unsigned)((int)puVar2 + 0x2c);
      *(undefined4 *)(unsigned)(unaff_r8 + 7) = uVar20;
      *(undefined4 *)(unsigned)((int)unaff_r8 + 0x34) = uVar14;
      puVar10 = unaff_r8 + 6;
      *(undefined4 *)(unsigned)puVar10 = uVar15;
    }
    else {
      uVar18 = *puVar10;
      uVar19 = puVar2[5];
      uVar23 = puVar2[6];
      unaff_r8[7] = puVar2[7];
      unaff_r8[6] = uVar23;
      unaff_r8[5] = uVar19;
      puVar10 = unaff_r8 + 4;
      *puVar10 = uVar18;
    }
    puVar7 = puVar2 + 8;
    *(undefined4 *)(unsigned)puVar7 = 0xf0000000;
    if (in_FPSCR_SZ == '\0') {
      uVar15 = *(undefined4 *)(unsigned)puVar7;
      uVar14 = *(undefined4 *)(unsigned)((int)puVar2 + 0x44);
      uVar20 = *(undefined4 *)(unsigned)(puVar2 + 9);
      *(undefined4 *)(unsigned)((int)puVar10 + 0x3c) = *(undefined4 *)(unsigned)((int)puVar2 + 0x4c);
      *(undefined4 *)(unsigned)(puVar10 + 7) = uVar20;
      *(undefined4 *)(unsigned)((int)puVar10 + 0x34) = uVar14;
      *(undefined4 *)(unsigned)(puVar10 + 6) = uVar15;
    }
    else {
      uVar18 = *puVar7;
      uVar19 = puVar2[9];
      uVar23 = puVar2[10];
      puVar10[7] = puVar2[0xb];
      puVar10[6] = uVar23;
      puVar10[5] = uVar19;
      puVar10[4] = uVar18;
    }
    *piVar11 = *piVar11 + 3;
  }
  else {
    *(undefined4 *)(unsigned)puVar2 = 0xe0000000;
    if (in_FPSCR_SZ == '\0') {
      uVar14 = *(undefined4 *)(unsigned)puVar2;
      uVar20 = *(undefined4 *)(unsigned)((int)puVar2 + 4);
      uVar24 = *(undefined4 *)(unsigned)(puVar2 + 1);
      *(undefined4 *)(unsigned)((int)unaff_r8 + 0x1c) = *(undefined4 *)(unsigned)((int)puVar2 + 0xc);
      *(undefined4 *)(unsigned)(unaff_r8 + 3) = uVar24;
      *(undefined4 *)(unsigned)((int)unaff_r8 + 0x14) = uVar20;
      unaff_r8 = unaff_r8 + 2;
      *(undefined4 *)(unsigned)unaff_r8 = uVar14;
    }
    else {
      uVar18 = *puVar2;
      uVar19 = puVar2[1];
      uVar23 = puVar2[2];
      unaff_r8[3] = puVar2[3];
      unaff_r8[2] = uVar23;
      unaff_r8[1] = uVar19;
      *unaff_r8 = uVar18;
    }
    puVar10 = puVar2 + 4;
    *(undefined4 *)(unsigned)puVar10 = uVar15;
    if (in_FPSCR_SZ == '\0') {
      uVar14 = *(undefined4 *)(unsigned)puVar10;
      uVar20 = *(undefined4 *)(unsigned)((int)puVar2 + 0x24);
      uVar24 = *(undefined4 *)(unsigned)(puVar2 + 5);
      *(undefined4 *)(unsigned)((int)unaff_r8 + 0x3c) = *(undefined4 *)(unsigned)((int)puVar2 + 0x2c);
      *(undefined4 *)(unsigned)(unaff_r8 + 7) = uVar24;
      *(undefined4 *)(unsigned)((int)unaff_r8 + 0x34) = uVar20;
      puVar10 = unaff_r8 + 6;
      *(undefined4 *)(unsigned)puVar10 = uVar14;
    }
    else {
      uVar18 = *puVar10;
      uVar19 = puVar2[5];
      uVar23 = puVar2[6];
      unaff_r8[7] = puVar2[7];
      unaff_r8[6] = uVar23;
      unaff_r8[5] = uVar19;
      puVar10 = unaff_r8 + 4;
      *puVar10 = uVar18;
    }
    puVar7 = puVar2 + 0xc;
    *(undefined4 *)(unsigned)puVar7 = uVar15;
    if (in_FPSCR_SZ == '\0') {
      uVar15 = *(undefined4 *)(unsigned)puVar7;
      uVar14 = *(undefined4 *)(unsigned)((int)puVar2 + 100);
      uVar20 = *(undefined4 *)(unsigned)(puVar2 + 0xd);
      *(undefined4 *)(unsigned)((int)puVar10 + 0x3c) = *(undefined4 *)(unsigned)((int)puVar2 + 0x6c);
      *(undefined4 *)(unsigned)(puVar10 + 7) = uVar20;
      *(undefined4 *)(unsigned)((int)puVar10 + 0x34) = uVar14;
      puVar10 = puVar10 + 6;
      *(undefined4 *)(unsigned)puVar10 = uVar15;
    }
    else {
      uVar18 = *puVar7;
      uVar19 = puVar2[0xd];
      uVar23 = puVar2[0xe];
      puVar10[7] = puVar2[0xf];
      puVar10[6] = uVar23;
      puVar10[5] = uVar19;
      puVar10 = puVar10 + 4;
      *puVar10 = uVar18;
    }
    puVar7 = puVar2 + 8;
    *(undefined4 *)(unsigned)puVar7 = 0xf0000000;
    if (in_FPSCR_SZ == '\0') {
      uVar15 = *(undefined4 *)(unsigned)puVar7;
      uVar14 = *(undefined4 *)(unsigned)((int)puVar2 + 0x44);
      uVar20 = *(undefined4 *)(unsigned)(puVar2 + 9);
      *(undefined4 *)(unsigned)((int)puVar10 + 0x3c) = *(undefined4 *)(unsigned)((int)puVar2 + 0x4c);
      *(undefined4 *)(unsigned)(puVar10 + 7) = uVar20;
      *(undefined4 *)(unsigned)((int)puVar10 + 0x34) = uVar14;
      *(undefined4 *)(unsigned)(puVar10 + 6) = uVar15;
    }
    else {
      uVar18 = *puVar7;
      uVar19 = puVar2[9];
      uVar23 = puVar2[10];
      puVar10[7] = puVar2[0xb];
      puVar10[6] = uVar23;
      puVar10[5] = uVar19;
      puVar10[4] = uVar18;
    }
    *piVar11 = *piVar11 + 4;
  }
  return iVar6;
}

__asm__(".globl _FUN_8c24763c\n.set _FUN_8c24763c, _FUN_8c24763c_def\n");
