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
undefined4 FUN_8c23dc42_def(int ar4,undefined4 ar5,int ar6,uint ar7)

{
  ring[rp++ & 255] = "FUN_8c23dc42";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 80; for (int i_ = 0; i_ < 80; i_++) z_[i_] = 0; }
  undefined8 uVar1;
  undefined8 uVar2;
  double dVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  undefined8 *unaff_r8 = 0;
  undefined8 *puVar9;
  int *piVar10;
  int iVar11;
  int iVar12;
  undefined1 *puVar13;
  undefined4 uVar14;
  double in_dr0 = 0;
  undefined4 uVar15;
  float fVar16;
  float fVar17;
  uint uVar18;
  double in_dr2 = 0;
  ulonglong uVar19;
  double dVar20;
  undefined8 uVar21;
  float fVar22;
  double in_dr4 = 0;
  double dVar23;
  double dVar24;
  double in_dr6 = 0;
  undefined4 uVar25;
  double in_xd2 = 0;
  double in_xd4 = 0;
  double in_xd14 = 0;
  char cVar26;
  char cVar27;
  
  cVar27 = '\0';
  cVar26 = '\0';
  ((int *)(fr0_ - 0x2c))[0] = ar4;
  iVar11 = 0;
  ((int *)(fr0_ - 0x2c))[1] = ar5;
  ((int *)(fr0_ - 0x2c))[2] = ar6;
  (*(unsigned *)(fr0_ - 0x50) = (unsigned)(unsigned long)(((undefined1 *)(unsigned)0x8c4c2620)));
  uVar25 = 0x3f000000;
  uVar18 = ar7;
  piVar10 = ((int *)(fr0_ - 0x2c));
  (*(unsigned *)(fr0_ - 0x40) = (unsigned)(unsigned long)(((int *)(fr0_ - 0x2c))));
  do {
    uVar15 = SUB84(in_dr2,0);
    uVar14 = SUB84(in_dr0,0);
    if (*(uint *)(unsigned)(((int *)(fr0_ - 0x2c))[iVar11] + 0x3c) == (ar7 & 0xffff)) {
      (vsp = ((unsigned long)(fr0_ - 80)), FUN_8c2475f2(*(undefined4 *)(unsigned)(*piVar10 + 0x28),((undefined1 *)(unsigned long)*(unsigned *)(fr0_ - 0x50)),ar6,uVar18));
      (vsp = ((unsigned long)(fr0_ - 80)), FUN_8c2475f2(*(undefined4 *)(unsigned)(*piVar10 + 0x2c),((undefined1 *)(unsigned long)*(unsigned *)(fr0_ - 0x50)) + 0x10,ar6,uVar18));
    }
    else {
      piVar8 = ((int *)(fr0_ - 0x2c)) + iVar11;
      iVar12 = iVar11 * 0x20;
      puVar13 = ((undefined1 *)(unsigned)0x8c4c2620) + iVar12;
      ar6 = *piVar8 + 0x30;
      iVar7 = *piVar8 + 0x10;
      uVar18 = ar7 & 0x8000;
      (vsp = ((unsigned long)(fr0_ - 80)), FUN_8c23bae2(puVar13,iVar7,ar6,ar7 & 0x8000));
      iVar5 = *piVar8;
      if (cVar27 != '\0') {
        in_xd4 = *(double *)(unsigned)(((undefined1 *)(unsigned)0x8c4c2624) + iVar12);
      }
      uVar4 = (vsp = ((unsigned long)(fr0_ - 80)), float_to_color_u8(puVar13,iVar7,ar6,uVar18));
      *(undefined4 *)(unsigned)(iVar5 + 0x28) = uVar4;
      iVar5 = *piVar8;
      if (cVar27 == '\0') {
        in_dr6 = (double)(ulonglong)*(uint *)(unsigned)(((undefined1 *)(unsigned)0x8c4c263c) + iVar12);
        in_dr4 = (double)(ulonglong)*(uint *)(unsigned)(((undefined1 *)(unsigned)0x8c4c2634) + iVar12);
      }
      else {
        in_dr6 = *(double *)(unsigned)(((undefined1 *)(unsigned)0x8c4c2638) + iVar12);
        in_xd4 = *(double *)(unsigned)(((undefined1 *)(unsigned)0x8c4c2634) + iVar12);
        in_dr4 = *(double *)(unsigned)(((undefined1 *)(unsigned)0x8c4c2630) + iVar12);
      }
      uVar4 = (vsp = ((unsigned long)(fr0_ - 80)), float_to_color_u8(puVar13,iVar7,ar6,uVar18));
      *(undefined4 *)(unsigned)(iVar5 + 0x2c) = uVar4;
      *(uint *)(unsigned)(*piVar8 + 0x3c) = ar7 & 0xffff;
    }
    dVar23 = in_xd14;
    if (cVar27 == '\0') {
      dVar23 = in_xd2;
      uVar15 = uVar25;
    }
    iVar11 = iVar11 + 1;
    iVar5 = *((int *)(unsigned long)*(unsigned *)(fr0_ - 0x40));
    if (cVar27 == '\0') {
      uVar19 = CONCAT44(*(undefined4 *)(unsigned)(iVar5 + 0x30),uVar15);
      dVar20 = CONCAT44D(uVar25,uVar14);
    }
    else {
      uVar19 = *(ulonglong *)(unsigned)(iVar5 + 0x30);
      dVar20 = in_xd14;
    }
    piVar10 = piVar10 + 1;
    if (cVar26 == '\0') {
      uVar19 = (ulonglong)
               (uint)(F32HI(dVar20) * (float)(uVar19 >> 0x20) + (float)uVar19);
    }
    uVar15 = (undefined4)uVar19;
    if (cVar27 == '\0') {
      *(undefined4 *)(unsigned)(iVar5 + 0x20) = uVar15;
      in_xd2 = dVar23;
      uVar15 = uVar25;
      in_dr0 = CONCAT44D(uVar25,SUB84(dVar20,0));
    }
    else {
      *(double *)(unsigned)(iVar5 + 0x20) = dVar23;
      in_xd2 = in_xd14;
      in_dr0 = in_xd14;
    }
    puVar13 = (undefined1 *)(unsigned)*((int *)(unsigned long)*(unsigned *)(fr0_ - 0x40));
    if (cVar27 == '\0') {
      in_dr2 = CONCAT44D(*(undefined4 *)(unsigned)(puVar13 + 0x34),uVar15);
    }
    else {
      in_dr2 = *(double *)(unsigned)(puVar13 + 0x34);
    }
    if (cVar26 == '\0') {
      in_dr2 = (double)(ulonglong)
                       (uint)(F32HI(in_dr0) *
                              F32HI(in_dr2) + F32LO(in_dr2));
    }
    if (cVar27 == '\0') {
      *(int *)(unsigned)(puVar13 + 0x24) = SUB84(in_dr2,0);
    }
    else {
      *(double *)(unsigned)(puVar13 + 0x24) = in_xd2;
    }
    (*(unsigned *)(fr0_ - 0x50) = (unsigned)(unsigned long)(((undefined1 *)(unsigned long)*(unsigned *)(fr0_ - 0x50)) + 0x20));
    (*(unsigned *)(fr0_ - 0x40) = (unsigned)(unsigned long)(((int *)(unsigned long)*(unsigned *)(fr0_ - 0x40)) + 1));
  } while (iVar11 < 3);
  (*(unsigned *)(fr0_ - 0x50) = (unsigned)(unsigned long)((undefined1 *)(unsigned)0x2));
  uVar25 = 1;
  iVar11 = 0;
  iVar5 = 0;
  do {
    iVar7 = iVar11;
    iVar11 = iVar7 * 0x20;
    piVar8 = ((int *)(fr0_ - 0x2c)) + iVar7;
    piVar10 = ((int *)(fr0_ - 0x2c)) + (int)((undefined1 *)(unsigned long)*(unsigned *)(fr0_ - 0x50));
    if ((*(uint *)(unsigned)*piVar10 & 1 ^ *(uint *)(unsigned)*piVar8 & 1) == 1) {
      iVar12 = *piVar10;
      iVar6 = *piVar8;
      if (cVar27 == '\0') {
        dVar23 = CONCAT44D(*(undefined4 *)(unsigned)(iVar12 + 0x18),SUB84(in_dr4,0));
        dVar20 = CONCAT44D(*(undefined4 *)(unsigned)(iVar6 + 0x18),(*(undefined4 *)(unsigned)(unsigned)0x8c4aa4d4));
      }
      else {
        in_xd2 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4aa4d8),(*(undefined4 *)(unsigned)(unsigned)0x8c4aa4d4));
        dVar23 = *(double *)(unsigned)(iVar12 + 0x18);
        dVar20 = *(double *)(unsigned)(iVar6 + 0x18);
      }
      fVar22 = F32HI(dVar23);
      if (cVar26 == '\0') {
        dVar20 = CONCAT44D((int)(D2U(dVar20) >> 0x20),F32LO(dVar20) - fVar22);
      }
      else {
        dVar20 = dVar20 - dVar23;
      }
      if (cVar27 == '\0') {
        dVar23 = CONCAT44D(fVar22,*(undefined4 *)(unsigned)(iVar12 + 0x10));
      }
      else {
        in_xd4 = *(double *)(unsigned)(iVar12 + 0x10);
      }
      if (cVar26 == '\0') {
        dVar20 = CONCAT44D(F32HI(dVar20) -
                                  F32HI(dVar23),SUB84(dVar20,0));
      }
      else {
        dVar20 = dVar20 - dVar23;
      }
      dVar24 = in_xd2;
      dVar3 = in_xd4;
      if (cVar27 == '\0') {
        dVar24 = CONCAT44D(SUB84(dVar20,0),SUB84(dVar23,0));
        dVar3 = CONCAT44D(SUB84(dVar23,0),SUB84(in_dr6,0));
      }
      in_dr6 = dVar3;
      fVar22 = F32HI(dVar20);
      if (cVar26 == '\0') {
        dVar24 = CONCAT44D(F32HI(dVar24) / fVar22,SUB84(dVar24,0));
      }
      else {
        dVar24 = dVar24 / dVar20;
      }
      if (cVar27 == '\0') {
        dVar20 = CONCAT44D(fVar22,*(undefined4 *)(unsigned)(iVar6 + 0x10));
      }
      else {
        in_xd2 = *(double *)(unsigned)(iVar6 + 0x10);
      }
      fVar22 = F32LO(dVar24);
      if (cVar26 == '\0') {
        fVar16 = F32LO(dVar20) - fVar22;
      }
      else {
        fVar16 = SUB84(dVar20 - dVar24,0);
      }
      uVar15 = (undefined4)(D2U(dVar24) >> 0x20);
      if (cVar27 == '\0') {
        fVar22 = *(float *)(unsigned)(iVar12 + 0x14);
        dVar23 = CONCAT44D(fVar22,fVar16);
        dVar24 = CONCAT44D(uVar15,SUB84(in_dr0,0));
        in_dr4 = CONCAT44D(uVar15,fVar22);
      }
      else {
        dVar23 = *(double *)(unsigned)(iVar12 + 0x14);
        in_dr4 = dVar24;
        in_xd4 = dVar23;
      }
      fVar16 = F32HI(dVar24);
      if (cVar26 == '\0') {
        in_dr6 = CONCAT44D(fVar16 * F32LO(dVar23) + F32HI(in_dr6),
                                  SUB84(in_dr6,0));
      }
      if (cVar27 == '\0') {
        dVar23 = CONCAT44D((int)(D2U(dVar23) >> 0x20),*(undefined4 *)(unsigned)(iVar6 + 0x14));
      }
      else {
        in_xd2 = *(double *)(unsigned)(iVar6 + 0x14);
      }
      if (cVar26 == '\0') {
        dVar23 = CONCAT44D((int)(D2U(dVar23) >> 0x20),F32LO(dVar23) - fVar22);
      }
      else {
        dVar23 = dVar23 - in_dr4;
      }
      iVar12 = iVar5 * 0x40;
      puVar13 = ((undefined1 *)(unsigned)0x8c4c2420) + iVar12;
      if (cVar26 == '\0') {
        dVar23 = CONCAT44D(fVar16 * F32LO(dVar23) + F32HI(dVar23),
                                  SUB84(dVar23,0));
      }
      uVar14 = (undefined4)(D2U(dVar23) >> 0x20);
      if (cVar27 == '\0') {
        in_dr4 = CONCAT44D(uVar15,uVar14);
        dVar20 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4ab320),SUB84(dVar24,0));
        dVar23 = CONCAT44D(uVar14,(*(undefined4 *)(unsigned)(unsigned)0x8c4ab31c));
      }
      else {
        dVar20 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4ab324),(*(undefined4 *)(unsigned)(unsigned)0x8c4ab320));
        in_xd2 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4ab320),(*(undefined4 *)(unsigned)(unsigned)0x8c4ab31c));
        in_xd4 = dVar23;
      }
      if (cVar26 == '\0') {
        fVar22 = F32LO(dVar23) * F32HI(dVar20);
      }
      else {
        fVar22 = SUB84(dVar23 * dVar20,0);
      }
      if (cVar27 == '\0') {
        uVar21 = CONCAT44((*(undefined4 *)(unsigned)(unsigned)0x8c4aa4b4),fVar22);
        dVar23 = CONCAT44D((int)((ulonglong)in_dr6 >> 0x20),SUB84(dVar20,0));
      }
      else {
        uVar21 = CONCAT44((*(undefined4 *)(unsigned)(unsigned)0x8c4aa4b8),(*(undefined4 *)(unsigned)(unsigned)0x8c4aa4b4));
        dVar23 = in_dr6;
      }
      if (cVar26 == '\0') {
        uVar21 = CONCAT44(F32HI(dVar23) * (float)uVar21 +
                          F32HI(uVar21),(float)uVar21);
      }
      if (cVar27 == '\0') {
        *(int *)(unsigned)(((undefined1 *)(unsigned)0x8c4c2424) + iVar12) = (int)((ulonglong)uVar21 >> 0x20);
        dVar23 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4ab324),SUB84(dVar23,0));
        dVar20 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4aa4b8),(*(undefined4 *)(unsigned)(unsigned)0x8c4ab31c));
      }
      else {
        *(undefined8 *)(unsigned)(((undefined1 *)(unsigned)0x8c4c2424) + iVar12) = uVar21;
        in_xd2 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4ab320),(*(undefined4 *)(unsigned)(unsigned)0x8c4ab31c));
        dVar23 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4ab328),(*(undefined4 *)(unsigned)(unsigned)0x8c4ab324));
        dVar20 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4aa4bc),(*(undefined4 *)(unsigned)(unsigned)0x8c4aa4b8));
      }
      if (cVar26 == '\0') {
        dVar20 = CONCAT44D((int)(D2U(dVar20) >> 0x20),
                                  F32LO(dVar20) * F32HI(dVar23));
      }
      else {
        dVar20 = dVar20 * dVar23;
      }
      dVar24 = in_xd4;
      if (cVar27 == '\0') {
        dVar24 = CONCAT44D(SUB84(in_dr4,0),SUB84(dVar23,0));
      }
      if (cVar26 == '\0') {
        dVar20 = CONCAT44D(F32HI(dVar24) * F32LO(dVar20) +
                                  F32HI(dVar20),SUB84(dVar20,0));
      }
      uVar14 = (undefined4)((ulonglong)in_dr4 >> 0x20);
      uVar15 = (undefined4)(D2U(dVar20) >> 0x20);
      if (cVar27 == '\0') {
        *(undefined4 *)(unsigned)(((undefined1 *)(unsigned)0x8c4c2428) + iVar12) = uVar15;
        dVar20 = CONCAT44D(uVar15,(*(undefined4 *)(unsigned)(unsigned)0x8c4ab31c));
        *(undefined4 *)(unsigned)(((undefined1 *)(unsigned)0x8c4c242c) + iVar12) = (*(undefined4 *)(unsigned)(unsigned)0x8c4ab31c);
        in_dr0 = CONCAT44D(uVar14,SUB84(dVar24,0));
      }
      else {
        *(double *)(unsigned)(((undefined1 *)(unsigned)0x8c4c2428) + iVar12) = dVar20;
        in_xd2 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4ab320),(*(undefined4 *)(unsigned)(unsigned)0x8c4ab31c));
        *(double *)(unsigned)(((undefined1 *)(unsigned)0x8c4c242c) + iVar12) = in_xd2;
        in_dr0 = in_dr4;
      }
      if (cVar27 == '\0') {
        in_dr4 = CONCAT44D(uVar14,*(undefined4 *)(unsigned)(*piVar10 + 0x20));
      }
      else {
        in_xd4 = *(double *)(unsigned)(*piVar10 + 0x20);
      }
      if (cVar27 == '\0') {
        dVar20 = CONCAT44D((int)(D2U(dVar20) >> 0x20),*(undefined4 *)(unsigned)(*piVar8 + 0x20));
      }
      else {
        in_xd2 = *(double *)(unsigned)(*piVar8 + 0x20);
      }
      if (cVar26 == '\0') {
        fVar22 = F32LO(dVar20) - F32LO(in_dr4);
      }
      else {
        fVar22 = SUB84(dVar20 - in_dr4,0);
      }
      dVar23 = in_xd4;
      if (cVar27 == '\0') {
        dVar23 = CONCAT44D(SUB84(in_dr4,0),fVar22);
      }
      fVar22 = F32HI(in_dr0);
      if (cVar26 == '\0') {
        dVar23 = CONCAT44D(fVar22 * F32LO(dVar23) + F32HI(dVar23),
                                  SUB84(dVar23,0));
      }
      if (cVar27 == '\0') {
        *(int *)(unsigned)(((undefined1 *)(unsigned)0x8c4c2430) + iVar12) = (int)(D2U(dVar23) >> 0x20);
      }
      else {
        *(double *)(unsigned)(((undefined1 *)(unsigned)0x8c4c2430) + iVar12) = dVar23;
      }
      if (cVar27 == '\0') {
        in_dr4 = CONCAT44D((int)((ulonglong)in_dr4 >> 0x20),*(undefined4 *)(unsigned)(*piVar10 + 0x24))
        ;
      }
      else {
        in_xd4 = *(double *)(unsigned)(*piVar10 + 0x24);
      }
      fVar16 = F32LO(in_dr4);
      if (cVar27 == '\0') {
        dVar23 = CONCAT44D(fVar16,*(undefined4 *)(unsigned)(*piVar8 + 0x24));
      }
      else {
        in_xd2 = *(double *)(unsigned)(*piVar8 + 0x24);
        dVar23 = in_xd4;
      }
      if (cVar26 == '\0') {
        fVar17 = F32LO(dVar23) - fVar16;
        dVar23 = CONCAT44D(fVar22 * fVar17 + F32HI(dVar23),fVar17);
      }
      else {
        dVar23 = dVar23 - in_dr4;
      }
      if (cVar27 == '\0') {
        *(int *)(unsigned)(iVar12 + -0x73b3dbcc) = (int)(D2U(dVar23) >> 0x20);
      }
      else {
        *(double *)(unsigned)(iVar12 + -0x73b3dbcc) = dVar23;
      }
      iVar6 = (int)((undefined1 *)(unsigned long)*(unsigned *)(fr0_ - 0x50)) * 0x20;
      if (cVar27 == '\0') {
        fVar16 = *(float *)(unsigned)(((undefined1 *)(unsigned)0x8c4c2620) + iVar6);
        in_dr4 = CONCAT44D((int)((ulonglong)in_dr4 >> 0x20),fVar16);
        dVar23 = CONCAT44D(fVar16,*(undefined4 *)(unsigned)(((undefined1 *)(unsigned)0x8c4c2620) + iVar11));
      }
      else {
        dVar23 = *(double *)(unsigned)(((undefined1 *)(unsigned)0x8c4c2620) + iVar6);
        in_xd2 = *(double *)(unsigned)(((undefined1 *)(unsigned)0x8c4c2620) + iVar11);
        in_xd4 = dVar23;
      }
      if (cVar26 == '\0') {
        fVar16 = F32LO(dVar23) - fVar16;
        dVar23 = CONCAT44D(fVar22 * fVar16 + F32HI(dVar23),fVar16);
      }
      else {
        dVar23 = dVar23 - in_dr4;
      }
      uVar15 = (undefined4)(D2U(dVar23) >> 0x20);
      if (cVar27 == '\0') {
        *(undefined4 *)(unsigned)(((undefined1 *)(unsigned)0x8c4c2440) + iVar12) = uVar15;
        dVar23 = CONCAT44D(uVar15,*(undefined4 *)(unsigned)(((undefined1 *)(unsigned)0x8c4c2624) + iVar11));
        in_dr4 = CONCAT44D((int)((ulonglong)in_dr4 >> 0x20),
                                  *(undefined4 *)(unsigned)(((undefined1 *)(unsigned)0x8c4c2624) + iVar6));
      }
      else {
        *(double *)(unsigned)(((undefined1 *)(unsigned)0x8c4c2440) + iVar12) = dVar23;
        in_xd2 = *(double *)(unsigned)(((undefined1 *)(unsigned)0x8c4c2624) + iVar11);
        in_xd4 = *(double *)(unsigned)(((undefined1 *)(unsigned)0x8c4c2624) + iVar6);
      }
      if (cVar26 == '\0') {
        fVar16 = F32LO(dVar23) - F32LO(in_dr4);
      }
      else {
        fVar16 = SUB84(dVar23 - in_dr4,0);
      }
      dVar23 = in_xd4;
      if (cVar27 == '\0') {
        dVar23 = CONCAT44D(SUB84(in_dr4,0),fVar16);
      }
      if (cVar26 == '\0') {
        dVar23 = CONCAT44D(fVar22 * F32LO(dVar23) + F32HI(dVar23),
                                  SUB84(dVar23,0));
      }
      uVar15 = (undefined4)(D2U(dVar23) >> 0x20);
      if (cVar27 == '\0') {
        *(undefined4 *)(unsigned)(((undefined1 *)(unsigned)0x8c4c2444) + iVar12) = uVar15;
        dVar23 = CONCAT44D(uVar15,*(undefined4 *)(unsigned)(((undefined1 *)(unsigned)0x8c4c2628) + iVar11));
        in_dr4 = CONCAT44D((int)((ulonglong)in_dr4 >> 0x20),
                                  *(undefined4 *)(unsigned)(((undefined1 *)(unsigned)0x8c4c2628) + iVar6));
      }
      else {
        *(double *)(unsigned)(((undefined1 *)(unsigned)0x8c4c2444) + iVar12) = dVar23;
        in_xd2 = *(double *)(unsigned)(((undefined1 *)(unsigned)0x8c4c2628) + iVar11);
        in_xd4 = *(double *)(unsigned)(((undefined1 *)(unsigned)0x8c4c2628) + iVar6);
      }
      if (cVar26 == '\0') {
        fVar16 = F32LO(dVar23) - F32LO(in_dr4);
      }
      else {
        fVar16 = SUB84(dVar23 - in_dr4,0);
      }
      dVar23 = in_xd4;
      if (cVar27 == '\0') {
        dVar23 = CONCAT44D(SUB84(in_dr4,0),fVar16);
      }
      if (cVar26 == '\0') {
        dVar23 = CONCAT44D(fVar22 * F32LO(dVar23) + F32HI(dVar23),
                                  SUB84(dVar23,0));
      }
      uVar15 = (undefined4)(D2U(dVar23) >> 0x20);
      if (cVar27 == '\0') {
        *(undefined4 *)(unsigned)(((undefined1 *)(unsigned)0x8c4c2448) + iVar12) = uVar15;
        dVar23 = CONCAT44D(uVar15,*(undefined4 *)(unsigned)(((undefined1 *)(unsigned)0x8c4c262c) + iVar11));
        in_dr4 = CONCAT44D((int)((ulonglong)in_dr4 >> 0x20),
                                  *(undefined4 *)(unsigned)(((undefined1 *)(unsigned)0x8c4c262c) + iVar6));
      }
      else {
        *(double *)(unsigned)(((undefined1 *)(unsigned)0x8c4c2448) + iVar12) = dVar23;
        in_xd2 = *(double *)(unsigned)(((undefined1 *)(unsigned)0x8c4c262c) + iVar11);
        in_xd4 = *(double *)(unsigned)(((undefined1 *)(unsigned)0x8c4c262c) + iVar6);
      }
      fVar16 = F32LO(in_dr4);
      if (cVar26 == '\0') {
        fVar17 = F32LO(dVar23) - fVar16;
      }
      else {
        fVar17 = SUB84(dVar23 - in_dr4,0);
      }
      dVar23 = in_xd4;
      if (cVar27 == '\0') {
        dVar23 = CONCAT44D(fVar16,fVar17);
      }
      if (cVar26 == '\0') {
        dVar23 = CONCAT44D(fVar22 * F32LO(dVar23) + F32HI(dVar23),
                                  SUB84(dVar23,0));
      }
      if (cVar27 == '\0') {
        *(int *)(unsigned)(((undefined1 *)(unsigned)0x8c4c244c) + iVar12) = (int)(D2U(dVar23) >> 0x20);
        fVar16 = *(float *)(unsigned)(((undefined1 *)(unsigned)0x8c4c2630) + iVar6);
        in_dr4 = CONCAT44D((int)((ulonglong)in_dr4 >> 0x20),fVar16);
        dVar23 = CONCAT44D(fVar16,*(undefined4 *)(unsigned)(((undefined1 *)(unsigned)0x8c4c2630) + iVar11));
      }
      else {
        *(double *)(unsigned)(((undefined1 *)(unsigned)0x8c4c244c) + iVar12) = dVar23;
        dVar23 = *(double *)(unsigned)(((undefined1 *)(unsigned)0x8c4c2630) + iVar6);
        in_xd2 = *(double *)(unsigned)(((undefined1 *)(unsigned)0x8c4c2630) + iVar11);
        in_xd4 = dVar23;
      }
      if (cVar26 == '\0') {
        fVar17 = F32LO(dVar23) - fVar16;
        dVar23 = CONCAT44D(fVar22 * fVar17 + F32HI(dVar23),fVar17);
      }
      else {
        dVar23 = dVar23 - in_dr4;
      }
      if (cVar27 == '\0') {
        *(int *)(unsigned)(((undefined1 *)(unsigned)0x8c4c2450) + iVar12) = (int)(D2U(dVar23) >> 0x20);
        fVar16 = *(float *)(unsigned)(((undefined1 *)(unsigned)0x8c4c2634) + iVar6);
        in_dr4 = CONCAT44D((int)((ulonglong)in_dr4 >> 0x20),fVar16);
        dVar23 = CONCAT44D(fVar16,*(undefined4 *)(unsigned)(((undefined1 *)(unsigned)0x8c4c2634) + iVar11));
      }
      else {
        *(double *)(unsigned)(((undefined1 *)(unsigned)0x8c4c2450) + iVar12) = dVar23;
        dVar23 = *(double *)(unsigned)(((undefined1 *)(unsigned)0x8c4c2634) + iVar6);
        in_xd2 = *(double *)(unsigned)(((undefined1 *)(unsigned)0x8c4c2634) + iVar11);
        in_xd4 = dVar23;
      }
      if (cVar26 == '\0') {
        fVar16 = F32LO(dVar23) - fVar16;
        dVar23 = CONCAT44D(fVar22 * fVar16 + F32HI(dVar23),fVar16);
      }
      else {
        dVar23 = dVar23 - in_dr4;
      }
      if (cVar27 == '\0') {
        *(int *)(unsigned)(((undefined1 *)(unsigned)0x8c4c2454) + iVar12) = (int)(D2U(dVar23) >> 0x20);
        fVar16 = *(float *)(unsigned)(((undefined1 *)(unsigned)0x8c4c2638) + iVar6);
        in_dr4 = CONCAT44D((int)((ulonglong)in_dr4 >> 0x20),fVar16);
        dVar23 = CONCAT44D(fVar16,*(undefined4 *)(unsigned)(((undefined1 *)(unsigned)0x8c4c2638) + iVar11));
      }
      else {
        *(double *)(unsigned)(((undefined1 *)(unsigned)0x8c4c2454) + iVar12) = dVar23;
        dVar23 = *(double *)(unsigned)(((undefined1 *)(unsigned)0x8c4c2638) + iVar6);
        in_xd2 = *(double *)(unsigned)(((undefined1 *)(unsigned)0x8c4c2638) + iVar11);
        fVar16 = F32LO(in_dr4);
        in_xd4 = dVar23;
      }
      if (cVar26 == '\0') {
        fVar16 = F32LO(dVar23) - fVar16;
        dVar23 = CONCAT44D(fVar22 * fVar16 + F32HI(dVar23),fVar16);
      }
      else {
        dVar23 = dVar23 - in_dr4;
      }
      if (cVar27 == '\0') {
        *(int *)(unsigned)(((undefined1 *)(unsigned)0x8c4c2458) + iVar12) = (int)(D2U(dVar23) >> 0x20);
        fVar16 = *(float *)(unsigned)(((undefined1 *)(unsigned)0x8c4c263c) + iVar6);
        in_dr4 = CONCAT44D((int)((ulonglong)in_dr4 >> 0x20),fVar16);
        dVar23 = CONCAT44D(fVar16,*(undefined4 *)(unsigned)(((undefined1 *)(unsigned)0x8c4c263c) + iVar11));
      }
      else {
        *(double *)(unsigned)(((undefined1 *)(unsigned)0x8c4c2458) + iVar12) = dVar23;
        dVar23 = *(double *)(unsigned)(((undefined1 *)(unsigned)0x8c4c263c) + iVar6);
        in_xd2 = *(double *)(unsigned)(((undefined1 *)(unsigned)0x8c4c263c) + iVar11);
        fVar16 = F32LO(in_dr4);
        in_xd4 = dVar23;
      }
      if (cVar26 == '\0') {
        fVar16 = F32LO(dVar23) - fVar16;
        in_dr2 = CONCAT44D(fVar22 * fVar16 + F32HI(dVar23),fVar16);
      }
      else {
        in_dr2 = dVar23 - in_dr4;
      }
      iVar5 = iVar5 + 1;
      if (cVar27 == '\0') {
        *(int *)(unsigned)(((undefined1 *)(unsigned)0x8c4c245c) + iVar12) = (int)((ulonglong)in_dr2 >> 0x20);
      }
      else {
        *(double *)(unsigned)(((undefined1 *)(unsigned)0x8c4c245c) + iVar12) = in_dr2;
      }
    }
    piVar10 = ((int *)(fr0_ - 0x2c)) + iVar7;
    iVar12 = iVar5;
    if ((*(uint *)(unsigned)*piVar10 & 1) == 0) {
      if (cVar27 == '\0') {
        in_dr2 = (double)(ulonglong)*(uint *)(unsigned)(*piVar10 + 4);
      }
      else {
        in_xd2 = *(double *)(unsigned)(*piVar10 + 4);
      }
      iVar6 = iVar5 * 0x40;
      puVar13 = ((undefined1 *)(unsigned)0x8c4c2420) + iVar6;
      if (cVar27 == '\0') {
        *(int *)(unsigned)(((undefined1 *)(unsigned)0x8c4c2424) + iVar6) = SUB84(in_dr2,0);
      }
      else {
        *(double *)(unsigned)(((undefined1 *)(unsigned)0x8c4c2424) + iVar6) = in_xd2;
      }
      if (cVar27 == '\0') {
        uVar18 = *(uint *)(unsigned)(*piVar10 + 8);
        in_dr2 = (double)(ulonglong)uVar18;
        *(uint *)(unsigned)(((undefined1 *)(unsigned)0x8c4c2428) + iVar6) = uVar18;
      }
      else {
        in_xd2 = *(double *)(unsigned)(*piVar10 + 8);
        *(double *)(unsigned)(((undefined1 *)(unsigned)0x8c4c2428) + iVar6) = in_xd2;
      }
      if (cVar27 == '\0') {
        uVar18 = *(uint *)(unsigned)(*piVar10 + 0xc);
        in_dr2 = (double)(ulonglong)uVar18;
        *(uint *)(unsigned)(((undefined1 *)(unsigned)0x8c4c242c) + iVar6) = uVar18;
      }
      else {
        in_xd2 = *(double *)(unsigned)(*piVar10 + 0xc);
        *(double *)(unsigned)(((undefined1 *)(unsigned)0x8c4c242c) + iVar6) = in_xd2;
      }
      if (cVar27 == '\0') {
        uVar18 = *(uint *)(unsigned)(*piVar10 + 0x20);
        in_dr2 = (double)(ulonglong)uVar18;
        *(uint *)(unsigned)(((undefined1 *)(unsigned)0x8c4c2430) + iVar6) = uVar18;
      }
      else {
        in_xd2 = *(double *)(unsigned)(*piVar10 + 0x20);
        *(double *)(unsigned)(((undefined1 *)(unsigned)0x8c4c2430) + iVar6) = in_xd2;
      }
      iVar12 = iVar5 + 1;
      if (cVar27 == '\0') {
        *(undefined4 *)(unsigned)(iVar6 + -0x73b3dbcc) = *(undefined4 *)(unsigned)(*piVar10 + 0x24);
        *(undefined4 *)(unsigned)(((undefined1 *)(unsigned)0x8c4c2440) + iVar6) = *(undefined4 *)(unsigned)(((undefined1 *)(unsigned)0x8c4c2620) + iVar11);
        *(undefined4 *)(unsigned)(((undefined1 *)(unsigned)0x8c4c2444) + iVar6) = *(undefined4 *)(unsigned)(((undefined1 *)(unsigned)0x8c4c2624) + iVar11);
        *(undefined4 *)(unsigned)(((undefined1 *)(unsigned)0x8c4c2448) + iVar6) = *(undefined4 *)(unsigned)(((undefined1 *)(unsigned)0x8c4c2628) + iVar11);
        *(undefined4 *)(unsigned)(((undefined1 *)(unsigned)0x8c4c244c) + iVar6) = *(undefined4 *)(unsigned)(((undefined1 *)(unsigned)0x8c4c262c) + iVar11);
        *(undefined4 *)(unsigned)(((undefined1 *)(unsigned)0x8c4c2450) + iVar6) = *(undefined4 *)(unsigned)(((undefined1 *)(unsigned)0x8c4c2630) + iVar11);
        *(undefined4 *)(unsigned)(((undefined1 *)(unsigned)0x8c4c2454) + iVar6) = *(undefined4 *)(unsigned)(((undefined1 *)(unsigned)0x8c4c2634) + iVar11);
        *(undefined4 *)(unsigned)(((undefined1 *)(unsigned)0x8c4c2458) + iVar6) = *(undefined4 *)(unsigned)(((undefined1 *)(unsigned)0x8c4c2638) + iVar11);
        in_dr2 = (double)(ulonglong)*(uint *)(unsigned)(((undefined1 *)(unsigned)0x8c4c263c) + iVar11);
        *(uint *)(unsigned)(((undefined1 *)(unsigned)0x8c4c245c) + iVar6) = *(uint *)(unsigned)(((undefined1 *)(unsigned)0x8c4c263c) + iVar11);
        iVar12 = iVar5 + 1;
      }
      else {
        *(undefined8 *)(unsigned)(iVar6 + -0x73b3dbcc) = *(undefined8 *)(unsigned)(*piVar10 + 0x24);
        *(undefined8 *)(unsigned)(((undefined1 *)(unsigned)0x8c4c2440) + iVar6) = *(undefined8 *)(unsigned)(((undefined1 *)(unsigned)0x8c4c2620) + iVar11);
        *(undefined8 *)(unsigned)(((undefined1 *)(unsigned)0x8c4c2444) + iVar6) = *(undefined8 *)(unsigned)(((undefined1 *)(unsigned)0x8c4c2624) + iVar11);
        *(undefined8 *)(unsigned)(((undefined1 *)(unsigned)0x8c4c2448) + iVar6) = *(undefined8 *)(unsigned)(((undefined1 *)(unsigned)0x8c4c2628) + iVar11);
        *(undefined8 *)(unsigned)(((undefined1 *)(unsigned)0x8c4c244c) + iVar6) = *(undefined8 *)(unsigned)(((undefined1 *)(unsigned)0x8c4c262c) + iVar11);
        *(undefined8 *)(unsigned)(((undefined1 *)(unsigned)0x8c4c2450) + iVar6) = *(undefined8 *)(unsigned)(((undefined1 *)(unsigned)0x8c4c2630) + iVar11);
        *(undefined8 *)(unsigned)(((undefined1 *)(unsigned)0x8c4c2454) + iVar6) = *(undefined8 *)(unsigned)(((undefined1 *)(unsigned)0x8c4c2634) + iVar11);
        *(undefined8 *)(unsigned)(((undefined1 *)(unsigned)0x8c4c2458) + iVar6) = *(undefined8 *)(unsigned)(((undefined1 *)(unsigned)0x8c4c2638) + iVar11);
        in_xd2 = *(double *)(unsigned)(((undefined1 *)(unsigned)0x8c4c263c) + iVar11);
        *(double *)(unsigned)(((undefined1 *)(unsigned)0x8c4c245c) + iVar6) = in_xd2;
      }
    }
    iVar11 = iVar7 + 1;
    iVar5 = iVar12;
    (*(unsigned *)(fr0_ - 0x50) = (unsigned)(unsigned long)((undefined1 *)(unsigned)iVar7));
  } while (iVar11 < 3);
  if (iVar12 == 3) {
    (*(undefined4 *)(unsigned)(unsigned)0x8c4c2420) = 0xe0000000;
    (*(undefined4 *)(unsigned)(unsigned)0x8c4c2438) = (vsp = ((unsigned long)(fr0_ - 80)), float_to_color_u8(puVar13,iVar11,1,3));
    (*(undefined4 *)(unsigned)(unsigned)0x8c4c243c) = (vsp = ((unsigned long)(fr0_ - 80)), float_to_color_u8(puVar13,iVar11,uVar25,iVar12));
    uVar21 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c2430);
    uVar4 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c2428);
    uVar14 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c2424);
    uVar15 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c2420);
    if (cVar27 == '\0') {
      puVar13 = ((undefined1 *)(unsigned)0x8c4c2430);
      *(undefined4 *)(unsigned)((int)unaff_r8 + 0x1c) = (*(undefined4 *)(unsigned)(unsigned)0x8c4c242c);
      *(undefined4 *)(unsigned)(unaff_r8 + 3) = uVar4;
      *(undefined4 *)(unsigned)((int)unaff_r8 + 0x14) = uVar14;
      unaff_r8 = unaff_r8 + 2;
      *(undefined4 *)(unsigned)unaff_r8 = uVar15;
    }
    else {
      uVar1 = CONCAT44((*(undefined4 *)(unsigned)(unsigned)0x8c4c2424),(*(undefined4 *)(unsigned)(unsigned)0x8c4c2420));
      uVar2 = CONCAT44((*(undefined4 *)(unsigned)(unsigned)0x8c4c242c),(*(undefined4 *)(unsigned)(unsigned)0x8c4c2428));
      puVar13 = ((undefined1 *)(unsigned)0x8c4c2440);
      unaff_r8[3] = CONCAT44((*(undefined4 *)(unsigned)(unsigned)0x8c4c243c),(*(undefined4 *)(unsigned)(unsigned)0x8c4c2438));
      unaff_r8[2] = uVar21;
      unaff_r8[1] = uVar2;
      *unaff_r8 = uVar1;
    }
    (*(undefined4 *)(unsigned)(unsigned)0x8c4c2460) = 0xe0000000;
    (*(undefined4 *)(unsigned)(unsigned)0x8c4c2478) = (vsp = ((unsigned long)(fr0_ - 80)), float_to_color_u8(puVar13,iVar11,uVar25,iVar12));
    (*(undefined4 *)(unsigned)(unsigned)0x8c4c247c) = (vsp = ((unsigned long)(fr0_ - 80)), float_to_color_u8(puVar13,iVar11,uVar25,iVar12));
    uVar21 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c2470);
    uVar4 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c2468);
    uVar14 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c2464);
    uVar15 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c2460);
    if (cVar27 == '\0') {
      puVar13 = ((undefined1 *)(unsigned)0x8c4c2470);
      *(undefined4 *)(unsigned)((int)unaff_r8 + 0x3c) = (*(undefined4 *)(unsigned)(unsigned)0x8c4c246c);
      *(undefined4 *)(unsigned)(unaff_r8 + 7) = uVar4;
      *(undefined4 *)(unsigned)((int)unaff_r8 + 0x34) = uVar14;
      puVar9 = unaff_r8 + 6;
      *(undefined4 *)(unsigned)puVar9 = uVar15;
    }
    else {
      uVar1 = CONCAT44((*(undefined4 *)(unsigned)(unsigned)0x8c4c2464),(*(undefined4 *)(unsigned)(unsigned)0x8c4c2460));
      uVar2 = CONCAT44((*(undefined4 *)(unsigned)(unsigned)0x8c4c246c),(*(undefined4 *)(unsigned)(unsigned)0x8c4c2468));
      puVar13 = ((undefined1 *)(unsigned)0x8c4c2480);
      unaff_r8[7] = CONCAT44((*(undefined4 *)(unsigned)(unsigned)0x8c4c247c),(*(undefined4 *)(unsigned)(unsigned)0x8c4c2478));
      unaff_r8[6] = uVar21;
      unaff_r8[5] = uVar2;
      puVar9 = unaff_r8 + 4;
      *puVar9 = uVar1;
    }
    (*(undefined4 *)(unsigned)(unsigned)0x8c4c24a0) = 0xf0000000;
    (*(undefined4 *)(unsigned)(unsigned)0x8c4c24b8) = (vsp = ((unsigned long)(fr0_ - 80)), float_to_color_u8(puVar13,iVar11,uVar25,iVar12));
    uVar4 = (vsp = ((unsigned long)(fr0_ - 80)), float_to_color_u8(puVar13,iVar11,uVar25,iVar12));
    uVar21 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c24b0);
    uVar14 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c24a8);
    uVar15 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c24a4);
    uVar25 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c24a0);
    (*(undefined4 *)(unsigned)(unsigned)0x8c4c24bc) = uVar4;
    if (cVar27 == '\0') {
      *(undefined4 *)(unsigned)((int)puVar9 + 0x3c) = (*(undefined4 *)(unsigned)(unsigned)0x8c4c24ac);
      *(undefined4 *)(unsigned)(puVar9 + 7) = uVar14;
      *(undefined4 *)(unsigned)((int)puVar9 + 0x34) = uVar15;
      *(undefined4 *)(unsigned)(puVar9 + 6) = uVar25;
    }
    else {
      uVar1 = CONCAT44((*(undefined4 *)(unsigned)(unsigned)0x8c4c24a4),(*(undefined4 *)(unsigned)(unsigned)0x8c4c24a0));
      uVar2 = CONCAT44((*(undefined4 *)(unsigned)(unsigned)0x8c4c24ac),(*(undefined4 *)(unsigned)(unsigned)0x8c4c24a8));
      puVar9[7] = CONCAT44(uVar4,(*(undefined4 *)(unsigned)(unsigned)0x8c4c24b8));
      puVar9[6] = uVar21;
      puVar9[5] = uVar2;
      puVar9[4] = uVar1;
    }
    (*(undefined4 *)(unsigned)(unsigned)0x8c4aa520) = (*(undefined4 *)(unsigned)(unsigned)0x8c4aa520) + 3;
  }
  else {
    (*(undefined4 *)(unsigned)(unsigned)0x8c4c2420) = 0xe0000000;
    (*(undefined4 *)(unsigned)(unsigned)0x8c4c2438) = (vsp = ((unsigned long)(fr0_ - 80)), float_to_color_u8(puVar13,iVar11,1,iVar12));
    (*(undefined4 *)(unsigned)(unsigned)0x8c4c243c) = (vsp = ((unsigned long)(fr0_ - 80)), float_to_color_u8(puVar13,iVar11,uVar25,iVar12));
    uVar21 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c2430);
    uVar4 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c2428);
    uVar14 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c2424);
    uVar15 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c2420);
    if (cVar27 == '\0') {
      puVar13 = ((undefined1 *)(unsigned)0x8c4c2430);
      *(undefined4 *)(unsigned)((int)unaff_r8 + 0x1c) = (*(undefined4 *)(unsigned)(unsigned)0x8c4c242c);
      *(undefined4 *)(unsigned)(unaff_r8 + 3) = uVar4;
      *(undefined4 *)(unsigned)((int)unaff_r8 + 0x14) = uVar14;
      unaff_r8 = unaff_r8 + 2;
      *(undefined4 *)(unsigned)unaff_r8 = uVar15;
    }
    else {
      uVar1 = CONCAT44((*(undefined4 *)(unsigned)(unsigned)0x8c4c2424),(*(undefined4 *)(unsigned)(unsigned)0x8c4c2420));
      uVar2 = CONCAT44((*(undefined4 *)(unsigned)(unsigned)0x8c4c242c),(*(undefined4 *)(unsigned)(unsigned)0x8c4c2428));
      puVar13 = ((undefined1 *)(unsigned)0x8c4c2440);
      unaff_r8[3] = CONCAT44((*(undefined4 *)(unsigned)(unsigned)0x8c4c243c),(*(undefined4 *)(unsigned)(unsigned)0x8c4c2438));
      unaff_r8[2] = uVar21;
      unaff_r8[1] = uVar2;
      *unaff_r8 = uVar1;
    }
    (*(undefined4 *)(unsigned)(unsigned)0x8c4c2460) = 0xe0000000;
    (*(undefined4 *)(unsigned)(unsigned)0x8c4c2478) = (vsp = ((unsigned long)(fr0_ - 80)), float_to_color_u8(puVar13,iVar11,uVar25,iVar12));
    (*(undefined4 *)(unsigned)(unsigned)0x8c4c247c) = (vsp = ((unsigned long)(fr0_ - 80)), float_to_color_u8(puVar13,iVar11,uVar25,iVar12));
    uVar21 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c2470);
    uVar4 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c2468);
    uVar14 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c2464);
    uVar15 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c2460);
    if (cVar27 == '\0') {
      puVar13 = ((undefined1 *)(unsigned)0x8c4c2470);
      *(undefined4 *)(unsigned)((int)unaff_r8 + 0x3c) = (*(undefined4 *)(unsigned)(unsigned)0x8c4c246c);
      *(undefined4 *)(unsigned)(unaff_r8 + 7) = uVar4;
      *(undefined4 *)(unsigned)((int)unaff_r8 + 0x34) = uVar14;
      puVar9 = unaff_r8 + 6;
      *(undefined4 *)(unsigned)puVar9 = uVar15;
    }
    else {
      uVar1 = CONCAT44((*(undefined4 *)(unsigned)(unsigned)0x8c4c2464),(*(undefined4 *)(unsigned)(unsigned)0x8c4c2460));
      uVar2 = CONCAT44((*(undefined4 *)(unsigned)(unsigned)0x8c4c246c),(*(undefined4 *)(unsigned)(unsigned)0x8c4c2468));
      puVar13 = ((undefined1 *)(unsigned)0x8c4c2480);
      unaff_r8[7] = CONCAT44((*(undefined4 *)(unsigned)(unsigned)0x8c4c247c),(*(undefined4 *)(unsigned)(unsigned)0x8c4c2478));
      unaff_r8[6] = uVar21;
      unaff_r8[5] = uVar2;
      puVar9 = unaff_r8 + 4;
      *puVar9 = uVar1;
    }
    (*(undefined4 *)(unsigned)(unsigned)0x8c4c24e0) = 0xe0000000;
    (*(undefined4 *)(unsigned)(unsigned)0x8c4c24f8) = (vsp = ((unsigned long)(fr0_ - 80)), float_to_color_u8(puVar13,iVar11,uVar25,iVar12));
    (*(undefined4 *)(unsigned)(unsigned)0x8c4c24fc) = (vsp = ((unsigned long)(fr0_ - 80)), float_to_color_u8(puVar13,iVar11,uVar25,iVar12));
    uVar21 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c24f0);
    uVar4 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c24e8);
    uVar14 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c24e4);
    uVar15 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c24e0);
    if (cVar27 == '\0') {
      puVar13 = ((undefined1 *)(unsigned)0x8c4c24f0);
      *(undefined4 *)(unsigned)((int)puVar9 + 0x3c) = (*(undefined4 *)(unsigned)(unsigned)0x8c4c24ec);
      *(undefined4 *)(unsigned)(puVar9 + 7) = uVar4;
      *(undefined4 *)(unsigned)((int)puVar9 + 0x34) = uVar14;
      puVar9 = puVar9 + 6;
      *(undefined4 *)(unsigned)puVar9 = uVar15;
    }
    else {
      uVar1 = CONCAT44((*(undefined4 *)(unsigned)(unsigned)0x8c4c24e4),(*(undefined4 *)(unsigned)(unsigned)0x8c4c24e0));
      uVar2 = CONCAT44((*(undefined4 *)(unsigned)(unsigned)0x8c4c24ec),(*(undefined4 *)(unsigned)(unsigned)0x8c4c24e8));
      puVar13 = ((undefined1 *)(unsigned)0x8c4c2500);
      puVar9[7] = CONCAT44((*(undefined4 *)(unsigned)(unsigned)0x8c4c24fc),(*(undefined4 *)(unsigned)(unsigned)0x8c4c24f8));
      puVar9[6] = uVar21;
      puVar9[5] = uVar2;
      puVar9 = puVar9 + 4;
      *puVar9 = uVar1;
    }
    (*(undefined4 *)(unsigned)(unsigned)0x8c4c24a0) = 0xf0000000;
    (*(undefined4 *)(unsigned)(unsigned)0x8c4c24b8) = (vsp = ((unsigned long)(fr0_ - 80)), float_to_color_u8(puVar13,iVar11,uVar25,iVar12));
    uVar4 = (vsp = ((unsigned long)(fr0_ - 80)), float_to_color_u8(puVar13,iVar11,uVar25,iVar12));
    uVar21 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c24b0);
    uVar14 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c24a8);
    uVar15 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c24a4);
    uVar25 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c24a0);
    (*(undefined4 *)(unsigned)(unsigned)0x8c4c24bc) = uVar4;
    if (cVar27 == '\0') {
      *(undefined4 *)(unsigned)((int)puVar9 + 0x3c) = (*(undefined4 *)(unsigned)(unsigned)0x8c4c24ac);
      *(undefined4 *)(unsigned)(puVar9 + 7) = uVar14;
      *(undefined4 *)(unsigned)((int)puVar9 + 0x34) = uVar15;
      *(undefined4 *)(unsigned)(puVar9 + 6) = uVar25;
    }
    else {
      uVar1 = CONCAT44((*(undefined4 *)(unsigned)(unsigned)0x8c4c24a4),(*(undefined4 *)(unsigned)(unsigned)0x8c4c24a0));
      uVar2 = CONCAT44((*(undefined4 *)(unsigned)(unsigned)0x8c4c24ac),(*(undefined4 *)(unsigned)(unsigned)0x8c4c24a8));
      puVar9[7] = CONCAT44(uVar4,(*(undefined4 *)(unsigned)(unsigned)0x8c4c24b8));
      puVar9[6] = uVar21;
      puVar9[5] = uVar2;
      puVar9[4] = uVar1;
    }
    (*(undefined4 *)(unsigned)(unsigned)0x8c4aa520) = (*(undefined4 *)(unsigned)(unsigned)0x8c4aa520) + 4;
  }
  return uVar4;
}

__asm__(".globl _FUN_8c23dc42\n.set _FUN_8c23dc42, _FUN_8c23dc42_def\n");
