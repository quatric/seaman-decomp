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
int FUN_8c23e228_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c23e228";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 40; for (int i_ = 0; i_ < 40; i_++) z_[i_] = 0; }
  undefined8 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined8 *unaff_r8 = 0;
  undefined8 *puVar10;
  int *piVar11;
  int *piVar12;
  double in_dr0 = 0;
  double dVar13;
  float fVar14;
  uint uVar15;
  double in_dr2 = 0;
  double dVar16;
  double dVar17;
  double dVar18;
  float fVar20;
  double dVar19;
  undefined4 uVar21;
  double in_xd2 = 0;
  double in_xd4 = 0;
  double dVar22;
  char cVar23;
  char cVar24;
  
  cVar24 = '\0';
  cVar23 = '\0';
  dVar17 = (double)(ulonglong)(*(undefined4 *)(unsigned)(unsigned)0x8c4c11bc);
  dVar19 = (double)(ulonglong)(*(undefined4 *)(unsigned)(unsigned)0x8c4c11b4);
  ((int *)(fr0_ - 0x28))[0] = ar4;
  ((int *)(fr0_ - 0x28))[1] = ar5;
  ((int *)(fr0_ - 0x28))[2] = ar6;
  uVar5 = (vsp = ((unsigned long)(fr0_ - 40)), float_to_color_u8(ar4,ar5,ar6,ar7));
  iVar9 = 0;
  iVar6 = 0;
  iVar8 = 2;
  do {
    iVar7 = iVar6;
    piVar12 = ((int *)(fr0_ - 0x28)) + iVar7;
    piVar11 = ((int *)(fr0_ - 0x28)) + iVar8;
    if ((*(uint *)(unsigned)*piVar11 & 1 ^ *(uint *)(unsigned)*piVar12 & 1) == 1) {
      iVar6 = *piVar11;
      iVar8 = *piVar12;
      if (cVar24 == '\0') {
        dVar18 = CONCAT44D(*(undefined4 *)(unsigned)(iVar6 + 0x18),SUB84(dVar19,0));
        dVar16 = CONCAT44D(*(undefined4 *)(unsigned)(iVar8 + 0x18),(*(undefined4 *)(unsigned)(unsigned)0x8c4aa4d4));
      }
      else {
        in_xd2 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4aa4d8),(*(undefined4 *)(unsigned)(unsigned)0x8c4aa4d4));
        dVar18 = *(double *)(unsigned)(iVar6 + 0x18);
        dVar16 = *(double *)(unsigned)(iVar8 + 0x18);
      }
      fVar20 = F32HI(dVar18);
      if (cVar23 == '\0') {
        dVar16 = CONCAT44D((int)(D2U(dVar16) >> 0x20),F32LO(dVar16) - fVar20);
      }
      else {
        dVar16 = dVar16 - dVar18;
      }
      if (cVar24 == '\0') {
        dVar18 = CONCAT44D(fVar20,*(undefined4 *)(unsigned)(iVar6 + 0x10));
        dVar22 = in_xd4;
      }
      else {
        dVar22 = *(double *)(unsigned)(iVar6 + 0x10);
      }
      if (cVar23 == '\0') {
        dVar16 = CONCAT44D(F32HI(dVar16) -
                                  F32HI(dVar18),SUB84(dVar16,0));
      }
      else {
        dVar16 = dVar16 - dVar18;
      }
      dVar19 = in_xd2;
      if (cVar24 == '\0') {
        dVar19 = CONCAT44D(SUB84(dVar16,0),SUB84(dVar18,0));
      }
      if (cVar23 == '\0') {
        dVar19 = CONCAT44D(F32HI(dVar19) /
                                  F32HI(dVar16),SUB84(dVar19,0));
      }
      else {
        dVar19 = dVar19 / dVar16;
      }
      if (cVar24 == '\0') {
        dVar18 = CONCAT44D(SUB84(dVar19,0),*(undefined4 *)(unsigned)(iVar8 + 0x10));
      }
      else {
        in_xd2 = *(double *)(unsigned)(iVar8 + 0x10);
        dVar18 = dVar22;
      }
      if (cVar23 == '\0') {
        dVar18 = CONCAT44D((int)(D2U(dVar18) >> 0x20),F32LO(dVar18) - F32LO(dVar19)
                                 );
      }
      else {
        dVar18 = dVar18 - dVar19;
      }
      uVar21 = (undefined4)(D2U(dVar19) >> 0x20);
      if (cVar24 == '\0') {
        dVar16 = CONCAT44D(*(undefined4 *)(unsigned)(iVar6 + 0x14),SUB84(dVar17,0));
        dVar13 = CONCAT44D(uVar21,SUB84(in_dr0,0));
      }
      else {
        dVar16 = *(double *)(unsigned)(iVar6 + 0x14);
        dVar13 = dVar19;
      }
      fVar20 = F32HI(dVar13);
      if (cVar23 == '\0') {
        dVar18 = CONCAT44D(fVar20 * F32LO(dVar18) + F32HI(dVar18),
                                  SUB84(dVar18,0));
      }
      if (cVar24 == '\0') {
        dVar18 = CONCAT44D((int)(D2U(dVar18) >> 0x20),*(undefined4 *)(unsigned)(iVar8 + 0x14));
      }
      else {
        in_xd2 = *(double *)(unsigned)(iVar8 + 0x14);
      }
      fVar14 = F32HI(dVar16);
      if (cVar23 == '\0') {
        dVar18 = CONCAT44D((int)(D2U(dVar18) >> 0x20),F32LO(dVar18) - fVar14);
      }
      else {
        dVar18 = dVar18 - dVar16;
      }
      in_xd4 = dVar18;
      if (cVar24 == '\0') {
        dVar19 = CONCAT44D(uVar21,(int)(D2U(dVar18) >> 0x20));
        in_xd4 = dVar22;
      }
      iVar6 = iVar9 * 0x40;
      dVar17 = dVar16;
      if (cVar24 == '\0') {
        dVar17 = CONCAT44D(fVar14,SUB84(dVar18,0));
      }
      if (cVar23 == '\0') {
        dVar17 = CONCAT44D(fVar20 * F32LO(dVar17) + F32HI(dVar17),
                                  SUB84(dVar17,0));
      }
      if (cVar24 == '\0') {
        dVar17 = CONCAT44D((int)(D2U(dVar17) >> 0x20),SUB84(dVar16,0));
        dVar18 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4ab320),SUB84(dVar13,0));
        dVar16 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4aa4b4),(*(undefined4 *)(unsigned)(unsigned)0x8c4ab31c));
      }
      else {
        in_xd2 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4ab320),(*(undefined4 *)(unsigned)(unsigned)0x8c4ab31c));
        dVar18 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4ab324),(*(undefined4 *)(unsigned)(unsigned)0x8c4ab320));
        dVar16 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4aa4b8),(*(undefined4 *)(unsigned)(unsigned)0x8c4aa4b4));
      }
      if (cVar23 == '\0') {
        dVar16 = CONCAT44D((int)(D2U(dVar16) >> 0x20),
                                  F32LO(dVar16) * F32HI(dVar18));
      }
      else {
        dVar16 = dVar16 * dVar18;
      }
      dVar22 = in_xd4;
      if (cVar24 == '\0') {
        dVar22 = CONCAT44D(SUB84(dVar19,0),SUB84(dVar18,0));
      }
      if (cVar23 == '\0') {
        dVar16 = CONCAT44D(F32HI(dVar22) * F32LO(dVar16) +
                                  F32HI(dVar16),SUB84(dVar16,0));
      }
      if (cVar24 == '\0') {
        *(int *)(unsigned)(((undefined1 *)(unsigned)0x8c4c2424) + iVar6) = (int)(D2U(dVar16) >> 0x20);
        dVar18 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4ab324),SUB84(dVar22,0));
        dVar16 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4aa4b8),(*(undefined4 *)(unsigned)(unsigned)0x8c4ab31c));
      }
      else {
        *(double *)(unsigned)(((undefined1 *)(unsigned)0x8c4c2424) + iVar6) = dVar16;
        dVar18 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4ab328),(*(undefined4 *)(unsigned)(unsigned)0x8c4ab324));
        in_xd2 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4ab320),(*(undefined4 *)(unsigned)(unsigned)0x8c4ab31c));
        dVar16 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4aa4bc),(*(undefined4 *)(unsigned)(unsigned)0x8c4aa4b8));
      }
      if (cVar23 == '\0') {
        dVar16 = CONCAT44D((int)(D2U(dVar16) >> 0x20),
                                  F32LO(dVar16) * F32HI(dVar18));
      }
      else {
        dVar16 = dVar16 * dVar18;
      }
      dVar22 = dVar17;
      if (cVar24 == '\0') {
        dVar22 = CONCAT44D((int)(D2U(dVar17) >> 0x20),SUB84(dVar18,0));
      }
      if (cVar23 == '\0') {
        dVar16 = CONCAT44D(F32HI(dVar22) * F32LO(dVar16) +
                                  F32HI(dVar16),SUB84(dVar16,0));
      }
      uVar21 = (undefined4)(D2U(dVar19) >> 0x20);
      if (cVar24 == '\0') {
        *(int *)(unsigned)(((undefined1 *)(unsigned)0x8c4c2428) + iVar6) = (int)(D2U(dVar16) >> 0x20);
        *(undefined4 *)(unsigned)(((undefined1 *)(unsigned)0x8c4c242c) + iVar6) = (*(undefined4 *)(unsigned)(unsigned)0x8c4ab31c);
        in_dr0 = CONCAT44D(uVar21,SUB84(dVar22,0));
      }
      else {
        *(double *)(unsigned)(((undefined1 *)(unsigned)0x8c4c2428) + iVar6) = dVar16;
        in_xd2 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4ab320),(*(undefined4 *)(unsigned)(unsigned)0x8c4ab31c));
        *(double *)(unsigned)(((undefined1 *)(unsigned)0x8c4c242c) + iVar6) = in_xd2;
        in_dr0 = dVar19;
      }
      if (cVar24 == '\0') {
        dVar19 = CONCAT44D(uVar21,*(undefined4 *)(unsigned)(*piVar11 + 0x20));
      }
      else {
        in_xd4 = *(double *)(unsigned)(*piVar11 + 0x20);
      }
      if (cVar24 == '\0') {
        dVar18 = CONCAT44D(SUB84(dVar19,0),*(undefined4 *)(unsigned)(*piVar12 + 0x20));
      }
      else {
        in_xd2 = *(double *)(unsigned)(*piVar12 + 0x20);
        dVar18 = in_xd4;
      }
      fVar20 = F32HI(in_dr0);
      if (cVar23 == '\0') {
        fVar14 = F32LO(dVar18) - F32LO(dVar19);
        dVar18 = CONCAT44D(fVar20 * fVar14 + F32HI(dVar18),fVar14);
      }
      else {
        dVar18 = dVar18 - dVar19;
      }
      iVar9 = iVar9 + 1;
      if (cVar24 == '\0') {
        *(int *)(unsigned)(((undefined1 *)(unsigned)0x8c4c2430) + iVar6) = (int)(D2U(dVar18) >> 0x20);
      }
      else {
        *(double *)(unsigned)(((undefined1 *)(unsigned)0x8c4c2430) + iVar6) = dVar18;
      }
      if (cVar24 == '\0') {
        dVar19 = CONCAT44D((int)(D2U(dVar19) >> 0x20),*(undefined4 *)(unsigned)(*piVar11 + 0x24))
        ;
      }
      else {
        in_xd4 = *(double *)(unsigned)(*piVar11 + 0x24);
      }
      if (cVar24 == '\0') {
        in_dr2 = CONCAT44D(SUB84(dVar19,0),*(undefined4 *)(unsigned)(*piVar12 + 0x24));
      }
      else {
        in_xd2 = *(double *)(unsigned)(*piVar12 + 0x24);
        in_dr2 = in_xd4;
      }
      if (cVar23 == '\0') {
        fVar14 = F32LO(in_dr2) - F32LO(dVar19);
        in_dr2 = CONCAT44D(fVar20 * fVar14 + F32HI(in_dr2),fVar14);
      }
      else {
        in_dr2 = in_dr2 - dVar19;
      }
      if (cVar24 == '\0') {
        *(int *)(unsigned)(iVar6 + -0x73b3dbcc) = (int)((ulonglong)in_dr2 >> 0x20);
      }
      else {
        *(double *)(unsigned)(iVar6 + -0x73b3dbcc) = in_dr2;
      }
      *(undefined4 *)(unsigned)(((undefined1 *)(unsigned)0x8c4c2438) + iVar6) = uVar5;
    }
    piVar11 = ((int *)(fr0_ - 0x28)) + iVar7;
    if ((*(uint *)(unsigned)*piVar11 & 1) == 0) {
      if (cVar24 == '\0') {
        in_dr2 = (double)(ulonglong)*(uint *)(unsigned)(*piVar11 + 4);
      }
      else {
        in_xd2 = *(double *)(unsigned)(*piVar11 + 4);
      }
      iVar6 = iVar9 * 0x40;
      if (cVar24 == '\0') {
        *(int *)(unsigned)(((undefined1 *)(unsigned)0x8c4c2424) + iVar6) = SUB84(in_dr2,0);
      }
      else {
        *(double *)(unsigned)(((undefined1 *)(unsigned)0x8c4c2424) + iVar6) = in_xd2;
      }
      iVar9 = iVar9 + 1;
      if (cVar24 == '\0') {
        uVar15 = *(uint *)(unsigned)(*piVar11 + 8);
        in_dr2 = (double)(ulonglong)uVar15;
        *(uint *)(unsigned)(((undefined1 *)(unsigned)0x8c4c2428) + iVar6) = uVar15;
      }
      else {
        in_xd2 = *(double *)(unsigned)(*piVar11 + 8);
        *(double *)(unsigned)(((undefined1 *)(unsigned)0x8c4c2428) + iVar6) = in_xd2;
      }
      if (cVar24 == '\0') {
        uVar15 = *(uint *)(unsigned)(*piVar11 + 0xc);
        in_dr2 = (double)(ulonglong)uVar15;
        *(uint *)(unsigned)(((undefined1 *)(unsigned)0x8c4c242c) + iVar6) = uVar15;
      }
      else {
        in_xd2 = *(double *)(unsigned)(*piVar11 + 0xc);
        *(double *)(unsigned)(((undefined1 *)(unsigned)0x8c4c242c) + iVar6) = in_xd2;
      }
      if (cVar24 == '\0') {
        uVar15 = *(uint *)(unsigned)(*piVar11 + 0x20);
        in_dr2 = (double)(ulonglong)uVar15;
        *(uint *)(unsigned)(((undefined1 *)(unsigned)0x8c4c2430) + iVar6) = uVar15;
      }
      else {
        in_xd2 = *(double *)(unsigned)(*piVar11 + 0x20);
        *(double *)(unsigned)(((undefined1 *)(unsigned)0x8c4c2430) + iVar6) = in_xd2;
      }
      if (cVar24 == '\0') {
        uVar15 = *(uint *)(unsigned)(*piVar11 + 0x24);
        in_dr2 = (double)(ulonglong)uVar15;
        *(uint *)(unsigned)(iVar6 + -0x73b3dbcc) = uVar15;
      }
      else {
        in_xd2 = *(double *)(unsigned)(*piVar11 + 0x24);
        *(double *)(unsigned)(iVar6 + -0x73b3dbcc) = in_xd2;
      }
      *(undefined4 *)(unsigned)(((undefined1 *)(unsigned)0x8c4c2438) + iVar6) = uVar5;
    }
    uVar4 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c2430);
    uVar3 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c2428);
    uVar21 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c2424);
    iVar6 = iVar7 + 1;
    iVar8 = iVar7;
  } while (iVar7 + 1 < 3);
  if (iVar9 == 3) {
    (*(undefined4 *)(unsigned)(unsigned)0x8c4c2420) = 0xe0000000;
    if (cVar24 == '\0') {
      *(undefined4 *)(unsigned)((int)unaff_r8 + 0x1c) = (*(undefined4 *)(unsigned)(unsigned)0x8c4c242c);
      *(undefined4 *)(unsigned)(unaff_r8 + 3) = uVar3;
      *(undefined4 *)(unsigned)((int)unaff_r8 + 0x14) = uVar21;
      unaff_r8 = unaff_r8 + 2;
      *(undefined4 *)(unsigned)unaff_r8 = 0xe0000000;
    }
    else {
      uVar1 = CONCAT44((*(undefined4 *)(unsigned)(unsigned)0x8c4c2424),0xe0000000);
      uVar2 = CONCAT44((*(undefined4 *)(unsigned)(unsigned)0x8c4c242c),(*(undefined4 *)(unsigned)(unsigned)0x8c4c2428));
      unaff_r8[3] = (*(undefined4 *)(unsigned)(unsigned)0x8c4c2438);
      unaff_r8[2] = uVar4;
      unaff_r8[1] = uVar2;
      *unaff_r8 = uVar1;
    }
    uVar4 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c2470);
    uVar21 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c2468);
    uVar5 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c2464);
    (*(undefined4 *)(unsigned)(unsigned)0x8c4c2460) = 0xe0000000;
    if (cVar24 == '\0') {
      *(undefined4 *)(unsigned)((int)unaff_r8 + 0x3c) = (*(undefined4 *)(unsigned)(unsigned)0x8c4c246c);
      *(undefined4 *)(unsigned)(unaff_r8 + 7) = uVar21;
      *(undefined4 *)(unsigned)((int)unaff_r8 + 0x34) = uVar5;
      puVar10 = unaff_r8 + 6;
      *(undefined4 *)(unsigned)puVar10 = 0xe0000000;
    }
    else {
      uVar1 = CONCAT44((*(undefined4 *)(unsigned)(unsigned)0x8c4c2464),0xe0000000);
      uVar2 = CONCAT44((*(undefined4 *)(unsigned)(unsigned)0x8c4c246c),(*(undefined4 *)(unsigned)(unsigned)0x8c4c2468));
      unaff_r8[7] = (*(undefined4 *)(unsigned)(unsigned)0x8c4c2478);
      unaff_r8[6] = uVar4;
      unaff_r8[5] = uVar2;
      puVar10 = unaff_r8 + 4;
      *puVar10 = uVar1;
    }
    uVar4 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c24b0);
    uVar21 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c24a8);
    uVar5 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c24a4);
    (*(undefined4 *)(unsigned)(unsigned)0x8c4c24a0) = 0xf0000000;
    if (cVar24 == '\0') {
      *(undefined4 *)(unsigned)((int)puVar10 + 0x3c) = (*(undefined4 *)(unsigned)(unsigned)0x8c4c24ac);
      *(undefined4 *)(unsigned)(puVar10 + 7) = uVar21;
      *(undefined4 *)(unsigned)((int)puVar10 + 0x34) = uVar5;
      *(undefined4 *)(unsigned)(puVar10 + 6) = 0xf0000000;
    }
    else {
      uVar1 = CONCAT44((*(undefined4 *)(unsigned)(unsigned)0x8c4c24a4),0xf0000000);
      uVar2 = CONCAT44((*(undefined4 *)(unsigned)(unsigned)0x8c4c24ac),(*(undefined4 *)(unsigned)(unsigned)0x8c4c24a8));
      puVar10[7] = (*(undefined4 *)(unsigned)(unsigned)0x8c4c24b8);
      puVar10[6] = uVar4;
      puVar10[5] = uVar2;
      puVar10[4] = uVar1;
    }
    (*(undefined4 *)(unsigned)(unsigned)0x8c4aa520) = (*(undefined4 *)(unsigned)(unsigned)0x8c4aa520) + 3;
  }
  else {
    (*(undefined4 *)(unsigned)(unsigned)0x8c4c2420) = 0xe0000000;
    if (cVar24 == '\0') {
      *(undefined4 *)(unsigned)((int)unaff_r8 + 0x1c) = (*(undefined4 *)(unsigned)(unsigned)0x8c4c242c);
      *(undefined4 *)(unsigned)(unaff_r8 + 3) = uVar3;
      *(undefined4 *)(unsigned)((int)unaff_r8 + 0x14) = uVar21;
      unaff_r8 = unaff_r8 + 2;
      *(undefined4 *)(unsigned)unaff_r8 = 0xe0000000;
    }
    else {
      uVar1 = CONCAT44((*(undefined4 *)(unsigned)(unsigned)0x8c4c2424),0xe0000000);
      uVar2 = CONCAT44((*(undefined4 *)(unsigned)(unsigned)0x8c4c242c),(*(undefined4 *)(unsigned)(unsigned)0x8c4c2428));
      unaff_r8[3] = (*(undefined4 *)(unsigned)(unsigned)0x8c4c2438);
      unaff_r8[2] = uVar4;
      unaff_r8[1] = uVar2;
      *unaff_r8 = uVar1;
    }
    uVar4 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c2470);
    uVar21 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c2468);
    uVar5 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c2464);
    (*(undefined4 *)(unsigned)(unsigned)0x8c4c2460) = 0xe0000000;
    if (cVar24 == '\0') {
      *(undefined4 *)(unsigned)((int)unaff_r8 + 0x3c) = (*(undefined4 *)(unsigned)(unsigned)0x8c4c246c);
      *(undefined4 *)(unsigned)(unaff_r8 + 7) = uVar21;
      *(undefined4 *)(unsigned)((int)unaff_r8 + 0x34) = uVar5;
      puVar10 = unaff_r8 + 6;
      *(undefined4 *)(unsigned)puVar10 = 0xe0000000;
    }
    else {
      uVar1 = CONCAT44((*(undefined4 *)(unsigned)(unsigned)0x8c4c2464),0xe0000000);
      uVar2 = CONCAT44((*(undefined4 *)(unsigned)(unsigned)0x8c4c246c),(*(undefined4 *)(unsigned)(unsigned)0x8c4c2468));
      unaff_r8[7] = (*(undefined4 *)(unsigned)(unsigned)0x8c4c2478);
      unaff_r8[6] = uVar4;
      unaff_r8[5] = uVar2;
      puVar10 = unaff_r8 + 4;
      *puVar10 = uVar1;
    }
    uVar4 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c24f0);
    uVar21 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c24e8);
    uVar5 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c24e4);
    (*(undefined4 *)(unsigned)(unsigned)0x8c4c24e0) = 0xe0000000;
    if (cVar24 == '\0') {
      *(undefined4 *)(unsigned)((int)puVar10 + 0x3c) = (*(undefined4 *)(unsigned)(unsigned)0x8c4c24ec);
      *(undefined4 *)(unsigned)(puVar10 + 7) = uVar21;
      *(undefined4 *)(unsigned)((int)puVar10 + 0x34) = uVar5;
      puVar10 = puVar10 + 6;
      *(undefined4 *)(unsigned)puVar10 = 0xe0000000;
    }
    else {
      uVar1 = CONCAT44((*(undefined4 *)(unsigned)(unsigned)0x8c4c24e4),0xe0000000);
      uVar2 = CONCAT44((*(undefined4 *)(unsigned)(unsigned)0x8c4c24ec),(*(undefined4 *)(unsigned)(unsigned)0x8c4c24e8));
      puVar10[7] = (*(undefined4 *)(unsigned)(unsigned)0x8c4c24f8);
      puVar10[6] = uVar4;
      puVar10[5] = uVar2;
      puVar10 = puVar10 + 4;
      *puVar10 = uVar1;
    }
    uVar4 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c24b0);
    uVar21 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c24a8);
    uVar5 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c24a4);
    (*(undefined4 *)(unsigned)(unsigned)0x8c4c24a0) = 0xf0000000;
    if (cVar24 == '\0') {
      *(undefined4 *)(unsigned)((int)puVar10 + 0x3c) = (*(undefined4 *)(unsigned)(unsigned)0x8c4c24ac);
      *(undefined4 *)(unsigned)(puVar10 + 7) = uVar21;
      *(undefined4 *)(unsigned)((int)puVar10 + 0x34) = uVar5;
      *(undefined4 *)(unsigned)(puVar10 + 6) = 0xf0000000;
    }
    else {
      uVar1 = CONCAT44((*(undefined4 *)(unsigned)(unsigned)0x8c4c24a4),0xf0000000);
      uVar2 = CONCAT44((*(undefined4 *)(unsigned)(unsigned)0x8c4c24ac),(*(undefined4 *)(unsigned)(unsigned)0x8c4c24a8));
      puVar10[7] = (*(undefined4 *)(unsigned)(unsigned)0x8c4c24b8);
      puVar10[6] = uVar4;
      puVar10[5] = uVar2;
      puVar10[4] = uVar1;
    }
    (*(undefined4 *)(unsigned)(unsigned)0x8c4aa520) = (*(undefined4 *)(unsigned)(unsigned)0x8c4aa520) + 4;
  }
  return iVar9;
}

__asm__(".globl _FUN_8c23e228\n.set _FUN_8c23e228, _FUN_8c23e228_def\n");
