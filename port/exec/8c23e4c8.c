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
int FUN_8c23e4c8_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c23e4c8";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 40; for (int i_ = 0; i_ < 40; i_++) z_[i_] = 0; }
  undefined8 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined8 *unaff_r8 = 0;
  undefined8 *puVar9;
  int *piVar10;
  double in_dr0 = 0;
  double dVar11;
  undefined4 uVar12;
  float fVar13;
  float fVar14;
  uint uVar15;
  double in_dr2 = 0;
  ulonglong uVar16;
  double dVar17;
  undefined8 uVar18;
  double dVar19;
  double dVar20;
  undefined4 uVar21;
  double dVar22;
  double in_xd2 = 0;
  double in_xd4 = 0;
  char cVar23;
  char cVar24;
  
  cVar24 = '\0';
  cVar23 = '\0';
  dVar22 = (double)(ulonglong)(*(undefined4 *)(unsigned)(unsigned)0x8c4c11bc);
  uVar12 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c11b4);
  ((int *)(fr0_ - 0x28))[0] = ar4;
  ((int *)(fr0_ - 0x28))[1] = ar5;
  ((int *)(fr0_ - 0x28))[2] = ar6;
  uVar3 = (vsp = ((unsigned long)(fr0_ - 40)), float_to_color_u8(ar4,ar5,ar6,ar7));
  piVar5 = ((int *)(fr0_ - 0x28));
  if (cVar24 == '\0') {
    dVar19 = CONCAT44D(0x3f000000,uVar12);
  }
  else {
    dVar19 = -2.198282791852599e+155;
  }
  while (piVar5 < ((int *)(fr0_ - 0x28)) + 3) {
    iVar4 = *piVar5;
    uVar12 = (undefined4)(D2U(dVar19) >> 0x20);
    if (cVar24 == '\0') {
      uVar16 = CONCAT44(*(undefined4 *)(unsigned)(iVar4 + 0x30),uVar12);
      dVar20 = CONCAT44D(uVar12,SUB84(in_dr0,0));
    }
    else {
      uVar16 = *(ulonglong *)(unsigned)(iVar4 + 0x30);
      in_xd2 = dVar19;
      dVar20 = dVar19;
    }
    if (cVar23 == '\0') {
      uVar16 = (ulonglong)
               (uint)(F32HI(dVar20) * (float)(uVar16 >> 0x20) + (float)uVar16);
    }
    if (cVar24 == '\0') {
      *(int *)(unsigned)(iVar4 + 0x20) = (int)uVar16;
      in_dr0 = CONCAT44D(uVar12,SUB84(dVar20,0));
    }
    else {
      *(double *)(unsigned)(iVar4 + 0x20) = in_xd2;
      in_dr0 = dVar19;
    }
    iVar4 = *piVar5;
    if (cVar24 == '\0') {
      in_dr2 = CONCAT44D(*(undefined4 *)(unsigned)(iVar4 + 0x34),uVar12);
    }
    else {
      in_dr2 = *(double *)(unsigned)(iVar4 + 0x34);
      in_xd2 = dVar19;
    }
    if (cVar23 == '\0') {
      in_dr2 = (double)(ulonglong)
                       (uint)(F32HI(in_dr0) *
                              F32HI(in_dr2) + F32LO(in_dr2));
    }
    if (cVar24 == '\0') {
      *(int *)(unsigned)(iVar4 + 0x24) = SUB84(in_dr2,0);
      piVar5 = piVar5 + 1;
    }
    else {
      *(double *)(unsigned)(iVar4 + 0x24) = in_xd2;
      piVar5 = piVar5 + 1;
    }
  }
  iVar8 = 0;
  iVar4 = 0;
  iVar7 = 2;
  do {
    iVar6 = iVar4;
    piVar10 = ((int *)(fr0_ - 0x28)) + iVar6;
    piVar5 = ((int *)(fr0_ - 0x28)) + iVar7;
    if ((*(uint *)(unsigned)*piVar5 & 1 ^ *(uint *)(unsigned)*piVar10 & 1) == 1) {
      iVar7 = *piVar5;
      iVar4 = *piVar10;
      if (cVar24 == '\0') {
        dVar20 = CONCAT44D(*(undefined4 *)(unsigned)(iVar7 + 0x18),SUB84(dVar19,0));
        dVar17 = CONCAT44D(*(undefined4 *)(unsigned)(iVar4 + 0x18),(*(undefined4 *)(unsigned)(unsigned)0x8c4aa4d4));
        dVar19 = in_xd2;
      }
      else {
        dVar20 = *(double *)(unsigned)(iVar7 + 0x18);
        dVar19 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4aa4d8),(*(undefined4 *)(unsigned)(unsigned)0x8c4aa4d4));
        dVar17 = *(double *)(unsigned)(iVar4 + 0x18);
      }
      fVar13 = F32HI(dVar20);
      if (cVar23 == '\0') {
        dVar20 = CONCAT44D(F32HI(dVar17) - fVar13,
                                  F32LO(dVar17) - fVar13);
      }
      else {
        dVar20 = (dVar17 - dVar20) - dVar20;
      }
      if (cVar24 == '\0') {
        uVar12 = SUB84(dVar20,0);
        dVar20 = CONCAT44D((int)(D2U(dVar20) >> 0x20),*(undefined4 *)(unsigned)(iVar4 + 0x10));
        in_xd2 = dVar19;
        dVar19 = CONCAT44D(uVar12,*(undefined4 *)(unsigned)(iVar7 + 0x10));
      }
      else {
        in_xd4 = *(double *)(unsigned)(iVar7 + 0x10);
        in_xd2 = *(double *)(unsigned)(iVar4 + 0x10);
      }
      if (cVar23 == '\0') {
        dVar19 = CONCAT44D(F32HI(dVar19) /
                                  F32HI(dVar20),SUB84(dVar19,0));
      }
      else {
        dVar19 = dVar19 / dVar20;
      }
      dVar17 = in_xd4;
      if (cVar24 == '\0') {
        dVar17 = CONCAT44D(SUB84(dVar19,0),SUB84(dVar20,0));
      }
      if (cVar23 == '\0') {
        dVar17 = CONCAT44D((int)(D2U(dVar17) >> 0x20),F32LO(dVar17) - F32LO(dVar19)
                                 );
      }
      else {
        dVar17 = dVar17 - dVar19;
      }
      if (cVar24 == '\0') {
        dVar22 = CONCAT44D(*(undefined4 *)(unsigned)(iVar7 + 0x14),SUB84(dVar22,0));
      }
      else {
        dVar22 = *(double *)(unsigned)(iVar7 + 0x14);
      }
      iVar7 = iVar8 * 0x40;
      uVar12 = (undefined4)(D2U(dVar19) >> 0x20);
      dVar20 = dVar19;
      if (cVar24 == '\0') {
        dVar20 = CONCAT44D(uVar12,SUB84(in_dr0,0));
      }
      fVar13 = F32HI(dVar20);
      if (cVar23 == '\0') {
        dVar17 = CONCAT44D(fVar13 * F32LO(dVar17) + F32HI(dVar17),
                                  SUB84(dVar17,0));
      }
      if (cVar24 == '\0') {
        dVar17 = CONCAT44D((int)(D2U(dVar17) >> 0x20),*(undefined4 *)(unsigned)(iVar4 + 0x14));
      }
      else {
        in_xd2 = *(double *)(unsigned)(iVar4 + 0x14);
      }
      fVar14 = F32HI(dVar22);
      if (cVar23 == '\0') {
        dVar17 = CONCAT44D((int)(D2U(dVar17) >> 0x20),F32LO(dVar17) - fVar14);
      }
      else {
        dVar17 = dVar17 - dVar22;
      }
      dVar11 = dVar22;
      if (cVar24 == '\0') {
        dVar19 = CONCAT44D(uVar12,(int)(D2U(dVar17) >> 0x20));
        dVar11 = CONCAT44D(fVar14,SUB84(dVar17,0));
        dVar17 = in_xd4;
      }
      in_xd4 = dVar17;
      if (cVar23 == '\0') {
        dVar11 = CONCAT44D(fVar13 * F32LO(dVar11) + F32HI(dVar11),
                                  SUB84(dVar11,0));
      }
      uVar12 = (undefined4)(D2U(dVar11) >> 0x20);
      if (cVar24 == '\0') {
        dVar11 = CONCAT44D(uVar12,(*(undefined4 *)(unsigned)(unsigned)0x8c4ab31c));
        dVar20 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4ab320),SUB84(dVar20,0));
        dVar22 = CONCAT44D(uVar12,SUB84(dVar22,0));
      }
      else {
        in_xd2 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4ab320),(*(undefined4 *)(unsigned)(unsigned)0x8c4ab31c));
        dVar20 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4ab324),(*(undefined4 *)(unsigned)(unsigned)0x8c4ab320));
        dVar22 = dVar11;
      }
      if (cVar23 == '\0') {
        fVar13 = F32LO(dVar11) * F32HI(dVar20);
      }
      else {
        fVar13 = SUB84(dVar11 * dVar20,0);
      }
      if (cVar24 == '\0') {
        uVar18 = CONCAT44((*(undefined4 *)(unsigned)(unsigned)0x8c4aa4b4),fVar13);
        dVar20 = CONCAT44D(SUB84(dVar19,0),SUB84(dVar20,0));
      }
      else {
        uVar18 = CONCAT44((*(undefined4 *)(unsigned)(unsigned)0x8c4aa4b8),(*(undefined4 *)(unsigned)(unsigned)0x8c4aa4b4));
        dVar20 = in_xd4;
      }
      if (cVar23 == '\0') {
        uVar18 = CONCAT44(F32HI(dVar20) * (float)uVar18 +
                          F32HI(uVar18),(float)uVar18);
      }
      if (cVar24 == '\0') {
        *(int *)(unsigned)(((undefined1 *)(unsigned)0x8c4c2424) + iVar7) = (int)((ulonglong)uVar18 >> 0x20);
        dVar20 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4ab324),SUB84(dVar20,0));
        dVar17 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4aa4b8),(*(undefined4 *)(unsigned)(unsigned)0x8c4ab31c));
      }
      else {
        *(undefined8 *)(unsigned)(((undefined1 *)(unsigned)0x8c4c2424) + iVar7) = uVar18;
        in_xd2 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4ab320),(*(undefined4 *)(unsigned)(unsigned)0x8c4ab31c));
        dVar20 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4ab328),(*(undefined4 *)(unsigned)(unsigned)0x8c4ab324));
        dVar17 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4aa4bc),(*(undefined4 *)(unsigned)(unsigned)0x8c4aa4b8));
      }
      if (cVar23 == '\0') {
        dVar17 = CONCAT44D((int)(D2U(dVar17) >> 0x20),
                                  F32LO(dVar17) * F32HI(dVar20));
      }
      else {
        dVar17 = dVar17 * dVar20;
      }
      dVar11 = dVar22;
      if (cVar24 == '\0') {
        dVar11 = CONCAT44D((int)(D2U(dVar22) >> 0x20),SUB84(dVar20,0));
      }
      if (cVar23 == '\0') {
        dVar17 = CONCAT44D(F32HI(dVar11) * F32LO(dVar17) +
                                  F32HI(dVar17),SUB84(dVar17,0));
      }
      uVar21 = (undefined4)(D2U(dVar19) >> 0x20);
      uVar12 = (undefined4)(D2U(dVar17) >> 0x20);
      if (cVar24 == '\0') {
        *(undefined4 *)(unsigned)(((undefined1 *)(unsigned)0x8c4c2428) + iVar7) = uVar12;
        dVar17 = CONCAT44D(uVar12,(*(undefined4 *)(unsigned)(unsigned)0x8c4ab31c));
        *(undefined4 *)(unsigned)(((undefined1 *)(unsigned)0x8c4c242c) + iVar7) = (*(undefined4 *)(unsigned)(unsigned)0x8c4ab31c);
        in_dr0 = CONCAT44D(uVar21,SUB84(dVar11,0));
      }
      else {
        *(double *)(unsigned)(((undefined1 *)(unsigned)0x8c4c2428) + iVar7) = dVar17;
        in_xd2 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4ab320),(*(undefined4 *)(unsigned)(unsigned)0x8c4ab31c));
        *(double *)(unsigned)(((undefined1 *)(unsigned)0x8c4c242c) + iVar7) = in_xd2;
        in_dr0 = dVar19;
      }
      if (cVar24 == '\0') {
        dVar19 = CONCAT44D(uVar21,*(undefined4 *)(unsigned)(*piVar5 + 0x20));
      }
      else {
        in_xd4 = *(double *)(unsigned)(*piVar5 + 0x20);
      }
      if (cVar24 == '\0') {
        dVar17 = CONCAT44D((int)(D2U(dVar17) >> 0x20),*(undefined4 *)(unsigned)(*piVar10 + 0x20))
        ;
      }
      else {
        in_xd2 = *(double *)(unsigned)(*piVar10 + 0x20);
      }
      if (cVar23 == '\0') {
        fVar13 = F32LO(dVar17) - F32LO(dVar19);
      }
      else {
        fVar13 = SUB84(dVar17 - dVar19,0);
      }
      dVar20 = in_xd4;
      if (cVar24 == '\0') {
        dVar20 = CONCAT44D(SUB84(dVar19,0),fVar13);
      }
      fVar13 = F32HI(in_dr0);
      if (cVar23 == '\0') {
        dVar20 = CONCAT44D(fVar13 * F32LO(dVar20) + F32HI(dVar20),
                                  SUB84(dVar20,0));
      }
      iVar8 = iVar8 + 1;
      if (cVar24 == '\0') {
        *(int *)(unsigned)(((undefined1 *)(unsigned)0x8c4c2430) + iVar7) = (int)(D2U(dVar20) >> 0x20);
      }
      else {
        *(double *)(unsigned)(((undefined1 *)(unsigned)0x8c4c2430) + iVar7) = dVar20;
      }
      if (cVar24 == '\0') {
        dVar19 = CONCAT44D((int)(D2U(dVar19) >> 0x20),*(undefined4 *)(unsigned)(*piVar5 + 0x24));
      }
      else {
        in_xd4 = *(double *)(unsigned)(*piVar5 + 0x24);
      }
      if (cVar24 == '\0') {
        in_dr2 = CONCAT44D(SUB84(dVar19,0),*(undefined4 *)(unsigned)(*piVar10 + 0x24));
      }
      else {
        in_xd2 = *(double *)(unsigned)(*piVar10 + 0x24);
        in_dr2 = in_xd4;
      }
      if (cVar23 == '\0') {
        fVar14 = F32LO(in_dr2) - F32LO(dVar19);
        in_dr2 = CONCAT44D(fVar13 * fVar14 + F32HI(in_dr2),fVar14);
      }
      else {
        in_dr2 = in_dr2 - dVar19;
      }
      if (cVar24 == '\0') {
        *(int *)(unsigned)(iVar7 + -0x73b3dbcc) = (int)((ulonglong)in_dr2 >> 0x20);
      }
      else {
        *(double *)(unsigned)(iVar7 + -0x73b3dbcc) = in_dr2;
      }
      *(undefined4 *)(unsigned)(((undefined1 *)(unsigned)0x8c4c2438) + iVar7) = uVar3;
    }
    piVar5 = ((int *)(fr0_ - 0x28)) + iVar6;
    if ((*(uint *)(unsigned)*piVar5 & 1) == 0) {
      if (cVar24 == '\0') {
        in_dr2 = (double)(ulonglong)*(uint *)(unsigned)(*piVar5 + 4);
      }
      else {
        in_xd2 = *(double *)(unsigned)(*piVar5 + 4);
      }
      iVar4 = iVar8 * 0x40;
      if (cVar24 == '\0') {
        *(int *)(unsigned)(((undefined1 *)(unsigned)0x8c4c2424) + iVar4) = SUB84(in_dr2,0);
      }
      else {
        *(double *)(unsigned)(((undefined1 *)(unsigned)0x8c4c2424) + iVar4) = in_xd2;
      }
      iVar8 = iVar8 + 1;
      if (cVar24 == '\0') {
        uVar15 = *(uint *)(unsigned)(*piVar5 + 8);
        in_dr2 = (double)(ulonglong)uVar15;
        *(uint *)(unsigned)(((undefined1 *)(unsigned)0x8c4c2428) + iVar4) = uVar15;
      }
      else {
        in_xd2 = *(double *)(unsigned)(*piVar5 + 8);
        *(double *)(unsigned)(((undefined1 *)(unsigned)0x8c4c2428) + iVar4) = in_xd2;
      }
      if (cVar24 == '\0') {
        uVar15 = *(uint *)(unsigned)(*piVar5 + 0xc);
        in_dr2 = (double)(ulonglong)uVar15;
        *(uint *)(unsigned)(((undefined1 *)(unsigned)0x8c4c242c) + iVar4) = uVar15;
      }
      else {
        in_xd2 = *(double *)(unsigned)(*piVar5 + 0xc);
        *(double *)(unsigned)(((undefined1 *)(unsigned)0x8c4c242c) + iVar4) = in_xd2;
      }
      if (cVar24 == '\0') {
        uVar15 = *(uint *)(unsigned)(*piVar5 + 0x20);
        in_dr2 = (double)(ulonglong)uVar15;
        *(uint *)(unsigned)(((undefined1 *)(unsigned)0x8c4c2430) + iVar4) = uVar15;
      }
      else {
        in_xd2 = *(double *)(unsigned)(*piVar5 + 0x20);
        *(double *)(unsigned)(((undefined1 *)(unsigned)0x8c4c2430) + iVar4) = in_xd2;
      }
      if (cVar24 == '\0') {
        uVar15 = *(uint *)(unsigned)(*piVar5 + 0x24);
        in_dr2 = (double)(ulonglong)uVar15;
        *(uint *)(unsigned)(iVar4 + -0x73b3dbcc) = uVar15;
      }
      else {
        in_xd2 = *(double *)(unsigned)(*piVar5 + 0x24);
        *(double *)(unsigned)(iVar4 + -0x73b3dbcc) = in_xd2;
      }
      *(undefined4 *)(unsigned)(((undefined1 *)(unsigned)0x8c4c2438) + iVar4) = uVar3;
    }
    uVar18 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c2430);
    uVar21 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c2428);
    uVar12 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c2424);
    iVar4 = iVar6 + 1;
    iVar7 = iVar6;
  } while (iVar6 + 1 < 3);
  if (iVar8 == 3) {
    (*(undefined4 *)(unsigned)(unsigned)0x8c4c2420) = 0xe0000000;
    if (cVar24 == '\0') {
      *(undefined4 *)(unsigned)((int)unaff_r8 + 0x1c) = (*(undefined4 *)(unsigned)(unsigned)0x8c4c242c);
      *(undefined4 *)(unsigned)(unaff_r8 + 3) = uVar21;
      *(undefined4 *)(unsigned)((int)unaff_r8 + 0x14) = uVar12;
      unaff_r8 = unaff_r8 + 2;
      *(undefined4 *)(unsigned)unaff_r8 = 0xe0000000;
    }
    else {
      uVar1 = CONCAT44((*(undefined4 *)(unsigned)(unsigned)0x8c4c2424),0xe0000000);
      uVar2 = CONCAT44((*(undefined4 *)(unsigned)(unsigned)0x8c4c242c),(*(undefined4 *)(unsigned)(unsigned)0x8c4c2428));
      unaff_r8[3] = (*(undefined4 *)(unsigned)(unsigned)0x8c4c2438);
      unaff_r8[2] = uVar18;
      unaff_r8[1] = uVar2;
      *unaff_r8 = uVar1;
    }
    uVar18 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c2470);
    uVar3 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c2468);
    uVar12 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c2464);
    (*(undefined4 *)(unsigned)(unsigned)0x8c4c2460) = 0xe0000000;
    if (cVar24 == '\0') {
      *(undefined4 *)(unsigned)((int)unaff_r8 + 0x3c) = (*(undefined4 *)(unsigned)(unsigned)0x8c4c246c);
      *(undefined4 *)(unsigned)(unaff_r8 + 7) = uVar3;
      *(undefined4 *)(unsigned)((int)unaff_r8 + 0x34) = uVar12;
      puVar9 = unaff_r8 + 6;
      *(undefined4 *)(unsigned)puVar9 = 0xe0000000;
    }
    else {
      uVar1 = CONCAT44((*(undefined4 *)(unsigned)(unsigned)0x8c4c2464),0xe0000000);
      uVar2 = CONCAT44((*(undefined4 *)(unsigned)(unsigned)0x8c4c246c),(*(undefined4 *)(unsigned)(unsigned)0x8c4c2468));
      unaff_r8[7] = (*(undefined4 *)(unsigned)(unsigned)0x8c4c2478);
      unaff_r8[6] = uVar18;
      unaff_r8[5] = uVar2;
      puVar9 = unaff_r8 + 4;
      *puVar9 = uVar1;
    }
    uVar18 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c24b0);
    uVar3 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c24a8);
    uVar12 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c24a4);
    (*(undefined4 *)(unsigned)(unsigned)0x8c4c24a0) = 0xf0000000;
    if (cVar24 == '\0') {
      *(undefined4 *)(unsigned)((int)puVar9 + 0x3c) = (*(undefined4 *)(unsigned)(unsigned)0x8c4c24ac);
      *(undefined4 *)(unsigned)(puVar9 + 7) = uVar3;
      *(undefined4 *)(unsigned)((int)puVar9 + 0x34) = uVar12;
      *(undefined4 *)(unsigned)(puVar9 + 6) = 0xf0000000;
    }
    else {
      uVar1 = CONCAT44((*(undefined4 *)(unsigned)(unsigned)0x8c4c24a4),0xf0000000);
      uVar2 = CONCAT44((*(undefined4 *)(unsigned)(unsigned)0x8c4c24ac),(*(undefined4 *)(unsigned)(unsigned)0x8c4c24a8));
      puVar9[7] = (*(undefined4 *)(unsigned)(unsigned)0x8c4c24b8);
      puVar9[6] = uVar18;
      puVar9[5] = uVar2;
      puVar9[4] = uVar1;
    }
    (*(undefined4 *)(unsigned)(unsigned)0x8c4aa520) = (*(undefined4 *)(unsigned)(unsigned)0x8c4aa520) + 3;
  }
  else {
    (*(undefined4 *)(unsigned)(unsigned)0x8c4c2420) = 0xe0000000;
    if (cVar24 == '\0') {
      *(undefined4 *)(unsigned)((int)unaff_r8 + 0x1c) = (*(undefined4 *)(unsigned)(unsigned)0x8c4c242c);
      *(undefined4 *)(unsigned)(unaff_r8 + 3) = uVar21;
      *(undefined4 *)(unsigned)((int)unaff_r8 + 0x14) = uVar12;
      unaff_r8 = unaff_r8 + 2;
      *(undefined4 *)(unsigned)unaff_r8 = 0xe0000000;
    }
    else {
      uVar1 = CONCAT44((*(undefined4 *)(unsigned)(unsigned)0x8c4c2424),0xe0000000);
      uVar2 = CONCAT44((*(undefined4 *)(unsigned)(unsigned)0x8c4c242c),(*(undefined4 *)(unsigned)(unsigned)0x8c4c2428));
      unaff_r8[3] = (*(undefined4 *)(unsigned)(unsigned)0x8c4c2438);
      unaff_r8[2] = uVar18;
      unaff_r8[1] = uVar2;
      *unaff_r8 = uVar1;
    }
    uVar18 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c2470);
    uVar3 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c2468);
    uVar12 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c2464);
    (*(undefined4 *)(unsigned)(unsigned)0x8c4c2460) = 0xe0000000;
    if (cVar24 == '\0') {
      *(undefined4 *)(unsigned)((int)unaff_r8 + 0x3c) = (*(undefined4 *)(unsigned)(unsigned)0x8c4c246c);
      *(undefined4 *)(unsigned)(unaff_r8 + 7) = uVar3;
      *(undefined4 *)(unsigned)((int)unaff_r8 + 0x34) = uVar12;
      puVar9 = unaff_r8 + 6;
      *(undefined4 *)(unsigned)puVar9 = 0xe0000000;
    }
    else {
      uVar1 = CONCAT44((*(undefined4 *)(unsigned)(unsigned)0x8c4c2464),0xe0000000);
      uVar2 = CONCAT44((*(undefined4 *)(unsigned)(unsigned)0x8c4c246c),(*(undefined4 *)(unsigned)(unsigned)0x8c4c2468));
      unaff_r8[7] = (*(undefined4 *)(unsigned)(unsigned)0x8c4c2478);
      unaff_r8[6] = uVar18;
      unaff_r8[5] = uVar2;
      puVar9 = unaff_r8 + 4;
      *puVar9 = uVar1;
    }
    uVar18 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c24f0);
    uVar3 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c24e8);
    uVar12 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c24e4);
    (*(undefined4 *)(unsigned)(unsigned)0x8c4c24e0) = 0xe0000000;
    if (cVar24 == '\0') {
      *(undefined4 *)(unsigned)((int)puVar9 + 0x3c) = (*(undefined4 *)(unsigned)(unsigned)0x8c4c24ec);
      *(undefined4 *)(unsigned)(puVar9 + 7) = uVar3;
      *(undefined4 *)(unsigned)((int)puVar9 + 0x34) = uVar12;
      puVar9 = puVar9 + 6;
      *(undefined4 *)(unsigned)puVar9 = 0xe0000000;
    }
    else {
      uVar1 = CONCAT44((*(undefined4 *)(unsigned)(unsigned)0x8c4c24e4),0xe0000000);
      uVar2 = CONCAT44((*(undefined4 *)(unsigned)(unsigned)0x8c4c24ec),(*(undefined4 *)(unsigned)(unsigned)0x8c4c24e8));
      puVar9[7] = (*(undefined4 *)(unsigned)(unsigned)0x8c4c24f8);
      puVar9[6] = uVar18;
      puVar9[5] = uVar2;
      puVar9 = puVar9 + 4;
      *puVar9 = uVar1;
    }
    uVar18 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c24b0);
    uVar3 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c24a8);
    uVar12 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c24a4);
    (*(undefined4 *)(unsigned)(unsigned)0x8c4c24a0) = 0xf0000000;
    if (cVar24 == '\0') {
      *(undefined4 *)(unsigned)((int)puVar9 + 0x3c) = (*(undefined4 *)(unsigned)(unsigned)0x8c4c24ac);
      *(undefined4 *)(unsigned)(puVar9 + 7) = uVar3;
      *(undefined4 *)(unsigned)((int)puVar9 + 0x34) = uVar12;
      *(undefined4 *)(unsigned)(puVar9 + 6) = 0xf0000000;
    }
    else {
      uVar1 = CONCAT44((*(undefined4 *)(unsigned)(unsigned)0x8c4c24a4),0xf0000000);
      uVar2 = CONCAT44((*(undefined4 *)(unsigned)(unsigned)0x8c4c24ac),(*(undefined4 *)(unsigned)(unsigned)0x8c4c24a8));
      puVar9[7] = (*(undefined4 *)(unsigned)(unsigned)0x8c4c24b8);
      puVar9[6] = uVar18;
      puVar9[5] = uVar2;
      puVar9[4] = uVar1;
    }
    (*(undefined4 *)(unsigned)(unsigned)0x8c4aa520) = (*(undefined4 *)(unsigned)(unsigned)0x8c4aa520) + 4;
  }
  return iVar8;
}

__asm__(".globl _FUN_8c23e4c8\n.set _FUN_8c23e4c8, _FUN_8c23e4c8_def\n");
