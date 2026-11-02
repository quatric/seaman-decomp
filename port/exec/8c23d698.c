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
undefined4 FUN_8c23d698_def(int ar4,undefined4 ar5,int ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c23d698";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 68; for (int i_ = 0; i_ < 68; i_++) z_[i_] = 0; }
  undefined8 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined1 *puVar8;
  int iVar9;
  int *piVar10;
  undefined8 *unaff_r8 = 0;
  undefined8 *puVar11;
  int *piVar12;
  int *piVar13;
  int iVar14;
  double in_dr0 = 0;
  double dVar15;
  undefined4 uVar16;
  float fVar17;
  float fVar18;
  uint uVar19;
  double in_dr2 = 0;
  double dVar20;
  undefined4 uVar22;
  undefined8 uVar21;
  float fVar23;
  double in_dr4 = 0;
  double dVar24;
  double in_dr6 = 0;
  double in_xd2 = 0;
  double in_xd4 = 0;
  char cVar25;
  char cVar26;
  
  cVar26 = '\0';
  cVar25 = '\0';
  iVar14 = 0;
  ((int *)(fr0_ - 0x28))[0] = ar4;
  ((int *)(fr0_ - 0x28))[1] = ar5;
  ((int *)(fr0_ - 0x28))[2] = ar6;
  (*(undefined1 * *)(fr0_ - 0x44)) = ((undefined1 *)(unsigned)0x8c4c2620);
  (*(undefined1 * *)(fr0_ - 0x40)) = ((undefined1 *)(unsigned)0x8c4c2620);
  piVar10 = ((int *)(fr0_ - 0x28));
  piVar13 = ((int *)(fr0_ - 0x28));
  do {
    if (*(uint *)(unsigned)(((int *)(fr0_ - 0x28))[iVar14] + 0x3c) == (uint)(ushort)ar7) {
      (vsp = ((unsigned long)(fr0_ - 68)), FUN_8c2475f2(*(undefined4 *)(unsigned)(*piVar13 + 0x28),(*(undefined1 * *)(fr0_ - 0x44)),ar6,piVar10));
      puVar8 = ((undefined1 *)(unsigned long)*(unsigned *)(unsigned)(*piVar13 + 0x2c));
      (vsp = ((unsigned long)(fr0_ - 68)), FUN_8c2475f2(puVar8,(*(undefined1 * *)(fr0_ - 0x44)) + 0x10,ar6,piVar10));
    }
    else {
      piVar12 = ((int *)(fr0_ - 0x28)) + iVar14;
      ar6 = *piVar12 + 0x30;
      iVar9 = *piVar12 + 0x10;
      puVar8 = (*(undefined1 * *)(fr0_ - 0x40));
      piVar10 = (int *)(unsigned)((ushort)ar7 & 0x8000);
      (vsp = ((unsigned long)(fr0_ - 68)), FUN_8c23bae2((*(undefined1 * *)(fr0_ - 0x40)),iVar9,ar6,(int *)(unsigned)((ushort)ar7 & 0x8000)));
      iVar6 = *piVar12;
      if (cVar26 != '\0') {
        in_xd4 = *(double *)(unsigned)((*(undefined1 * *)(fr0_ - 0x40)) + 4);
      }
      uVar3 = (vsp = ((unsigned long)(fr0_ - 68)), float_to_color_u8(puVar8,iVar9,ar6,piVar10));
      *(undefined4 *)(unsigned)(iVar6 + 0x28) = uVar3;
      iVar6 = *piVar12;
      if (cVar26 == '\0') {
        in_dr6 = (double)(ulonglong)*(uint *)(unsigned)((*(undefined1 * *)(fr0_ - 0x40)) + 0x1c);
        in_dr4 = (double)(ulonglong)*(uint *)(unsigned)((*(undefined1 * *)(fr0_ - 0x40)) + 0x14);
      }
      else {
        in_dr6 = *(double *)(unsigned)((*(undefined1 * *)(fr0_ - 0x40)) + 0x18);
        in_xd4 = *(double *)(unsigned)((*(undefined1 * *)(fr0_ - 0x40)) + 0x14);
        in_dr4 = *(double *)(unsigned)((*(undefined1 * *)(fr0_ - 0x40)) + 0x10);
      }
      uVar3 = (vsp = ((unsigned long)(fr0_ - 68)), float_to_color_u8(puVar8,iVar9,ar6,piVar10));
      *(undefined4 *)(unsigned)(iVar6 + 0x2c) = uVar3;
      *(uint *)(unsigned)(*piVar12 + 0x3c) = (uint)(ushort)ar7;
    }
    iVar14 = iVar14 + 1;
    (*(undefined1 * *)(fr0_ - 0x44)) = (*(undefined1 * *)(fr0_ - 0x44)) + 0x20;
    (*(undefined1 * *)(fr0_ - 0x40)) = (*(undefined1 * *)(fr0_ - 0x40)) + 0x20;
    piVar13 = piVar13 + 1;
  } while (iVar14 < 3);
  uVar3 = 1;
  (*(undefined1 * *)(fr0_ - 0x44)) = (undefined1 *)(unsigned)0x2;
  iVar14 = 0;
  iVar6 = 0;
  do {
    iVar9 = iVar14;
    iVar14 = iVar9 * 0x20;
    piVar10 = ((int *)(fr0_ - 0x28)) + iVar9;
    piVar13 = ((int *)(fr0_ - 0x28)) + (int)(*(undefined1 * *)(fr0_ - 0x44));
    if ((*(uint *)(unsigned)*piVar13 & 1 ^ *(uint *)(unsigned)*piVar10 & 1) == 1) {
      iVar7 = *piVar13;
      iVar5 = *piVar10;
      if (cVar26 == '\0') {
        dVar24 = CONCAT44D(*(undefined4 *)(unsigned)(iVar7 + 0x18),SUB84(in_dr4,0));
        dVar20 = CONCAT44D(*(undefined4 *)(unsigned)(iVar5 + 0x18),(*(undefined4 *)(unsigned)(unsigned)0x8c4aa4d4));
        in_dr4 = in_xd2;
      }
      else {
        dVar24 = *(double *)(unsigned)(iVar7 + 0x18);
        in_dr4 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4aa4d8),(*(undefined4 *)(unsigned)(unsigned)0x8c4aa4d4));
        dVar20 = *(double *)(unsigned)(iVar5 + 0x18);
      }
      fVar23 = F32HI(dVar24);
      if (cVar25 == '\0') {
        dVar24 = CONCAT44D(F32HI(dVar20) - fVar23,
                                  F32LO(dVar20) - fVar23);
      }
      else {
        dVar24 = (dVar20 - dVar24) - dVar24;
      }
      if (cVar26 == '\0') {
        uVar16 = SUB84(dVar24,0);
        dVar24 = CONCAT44D((int)(D2U(dVar24) >> 0x20),*(undefined4 *)(unsigned)(iVar5 + 0x10));
        in_xd2 = in_dr4;
        in_dr4 = CONCAT44D(uVar16,*(undefined4 *)(unsigned)(iVar7 + 0x10));
      }
      else {
        in_xd4 = *(double *)(unsigned)(iVar7 + 0x10);
        in_xd2 = *(double *)(unsigned)(iVar5 + 0x10);
      }
      if (cVar25 == '\0') {
        in_dr4 = CONCAT44D(F32HI(in_dr4) /
                                  F32HI(dVar24),SUB84(in_dr4,0));
      }
      else {
        in_dr4 = in_dr4 / dVar24;
      }
      fVar23 = F32LO(in_dr4);
      dVar20 = in_xd4;
      if (cVar26 == '\0') {
        dVar20 = CONCAT44D(fVar23,SUB84(in_dr6,0));
      }
      in_dr6 = dVar20;
      if (cVar25 == '\0') {
        fVar17 = F32LO(dVar24) - fVar23;
      }
      else {
        fVar17 = SUB84(dVar24 - in_dr4,0);
      }
      if (cVar26 == '\0') {
        fVar23 = *(float *)(unsigned)(iVar7 + 0x14);
        in_dr4 = CONCAT44D((int)((ulonglong)in_dr4 >> 0x20),fVar23);
        dVar24 = CONCAT44D(fVar23,fVar17);
      }
      else {
        dVar24 = *(double *)(unsigned)(iVar7 + 0x14);
        in_xd4 = dVar24;
      }
      iVar7 = iVar6 * 0x40;
      puVar8 = ((undefined1 *)(unsigned)0x8c4c2420) + iVar7;
      uVar16 = (undefined4)((ulonglong)in_dr4 >> 0x20);
      dVar20 = in_dr4;
      if (cVar26 == '\0') {
        dVar20 = CONCAT44D(uVar16,SUB84(in_dr0,0));
      }
      fVar17 = F32HI(dVar20);
      if (cVar25 == '\0') {
        in_dr6 = CONCAT44D(fVar17 * F32LO(dVar24) + F32HI(in_dr6),
                                  SUB84(in_dr6,0));
      }
      if (cVar26 == '\0') {
        dVar24 = CONCAT44D((int)(D2U(dVar24) >> 0x20),*(undefined4 *)(unsigned)(iVar5 + 0x14));
      }
      else {
        in_xd2 = *(double *)(unsigned)(iVar5 + 0x14);
      }
      if (cVar25 == '\0') {
        fVar23 = F32LO(dVar24) - fVar23;
        dVar24 = CONCAT44D(fVar17 * fVar23 + F32HI(dVar24),fVar23);
      }
      else {
        dVar24 = dVar24 - in_dr4;
      }
      uVar22 = (undefined4)(D2U(dVar24) >> 0x20);
      if (cVar26 == '\0') {
        in_dr4 = CONCAT44D(uVar16,uVar22);
        dVar24 = CONCAT44D(uVar22,(*(undefined4 *)(unsigned)(unsigned)0x8c4ab31c));
        dVar20 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4ab320),SUB84(dVar20,0));
      }
      else {
        in_xd2 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4ab320),(*(undefined4 *)(unsigned)(unsigned)0x8c4ab31c));
        dVar20 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4ab324),(*(undefined4 *)(unsigned)(unsigned)0x8c4ab320));
        in_xd4 = dVar24;
      }
      if (cVar25 == '\0') {
        fVar23 = F32LO(dVar24) * F32HI(dVar20);
      }
      else {
        fVar23 = SUB84(dVar24 * dVar20,0);
      }
      if (cVar26 == '\0') {
        uVar21 = CONCAT44((*(undefined4 *)(unsigned)(unsigned)0x8c4aa4b4),fVar23);
        dVar24 = CONCAT44D((int)((ulonglong)in_dr6 >> 0x20),SUB84(dVar20,0));
      }
      else {
        uVar21 = CONCAT44((*(undefined4 *)(unsigned)(unsigned)0x8c4aa4b8),(*(undefined4 *)(unsigned)(unsigned)0x8c4aa4b4));
        dVar24 = in_dr6;
      }
      if (cVar25 == '\0') {
        uVar21 = CONCAT44(F32HI(dVar24) * (float)uVar21 +
                          F32HI(uVar21),(float)uVar21);
      }
      if (cVar26 == '\0') {
        *(int *)(unsigned)(((undefined1 *)(unsigned)0x8c4c2424) + iVar7) = (int)((ulonglong)uVar21 >> 0x20);
        dVar24 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4ab324),SUB84(dVar24,0));
        dVar20 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4aa4b8),(*(undefined4 *)(unsigned)(unsigned)0x8c4ab31c));
      }
      else {
        *(undefined8 *)(unsigned)(((undefined1 *)(unsigned)0x8c4c2424) + iVar7) = uVar21;
        dVar24 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4ab328),(*(undefined4 *)(unsigned)(unsigned)0x8c4ab324));
        in_xd2 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4ab320),(*(undefined4 *)(unsigned)(unsigned)0x8c4ab31c));
        dVar20 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4aa4bc),(*(undefined4 *)(unsigned)(unsigned)0x8c4aa4b8));
      }
      if (cVar25 == '\0') {
        dVar20 = CONCAT44D((int)(D2U(dVar20) >> 0x20),
                                  F32LO(dVar20) * F32HI(dVar24));
      }
      else {
        dVar20 = dVar20 * dVar24;
      }
      dVar15 = in_xd4;
      if (cVar26 == '\0') {
        dVar15 = CONCAT44D(SUB84(in_dr4,0),SUB84(dVar24,0));
      }
      if (cVar25 == '\0') {
        dVar20 = CONCAT44D(F32HI(dVar15) * F32LO(dVar20) +
                                  F32HI(dVar20),SUB84(dVar20,0));
      }
      uVar16 = (undefined4)((ulonglong)in_dr4 >> 0x20);
      if (cVar26 == '\0') {
        *(int *)(unsigned)(((undefined1 *)(unsigned)0x8c4c2428) + iVar7) = (int)(D2U(dVar20) >> 0x20);
        *(undefined4 *)(unsigned)(((undefined1 *)(unsigned)0x8c4c242c) + iVar7) = (*(undefined4 *)(unsigned)(unsigned)0x8c4ab31c);
        in_dr0 = CONCAT44D(uVar16,SUB84(dVar15,0));
      }
      else {
        *(double *)(unsigned)(((undefined1 *)(unsigned)0x8c4c2428) + iVar7) = dVar20;
        in_xd2 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4ab320),(*(undefined4 *)(unsigned)(unsigned)0x8c4ab31c));
        *(double *)(unsigned)(((undefined1 *)(unsigned)0x8c4c242c) + iVar7) = in_xd2;
        in_dr0 = in_dr4;
      }
      if (cVar26 == '\0') {
        in_dr4 = CONCAT44D(uVar16,*(undefined4 *)(unsigned)(*piVar13 + 0x20));
      }
      else {
        in_xd4 = *(double *)(unsigned)(*piVar13 + 0x20);
      }
      if (cVar26 == '\0') {
        dVar24 = CONCAT44D(SUB84(in_dr4,0),*(undefined4 *)(unsigned)(*piVar10 + 0x20));
      }
      else {
        in_xd2 = *(double *)(unsigned)(*piVar10 + 0x20);
        dVar24 = in_xd4;
      }
      fVar23 = F32HI(in_dr0);
      if (cVar25 == '\0') {
        fVar17 = F32LO(dVar24) - F32LO(in_dr4);
        dVar24 = CONCAT44D(fVar23 * fVar17 + F32HI(dVar24),fVar17);
      }
      else {
        dVar24 = dVar24 - in_dr4;
      }
      if (cVar26 == '\0') {
        *(int *)(unsigned)(((undefined1 *)(unsigned)0x8c4c2430) + iVar7) = (int)(D2U(dVar24) >> 0x20);
      }
      else {
        *(double *)(unsigned)(((undefined1 *)(unsigned)0x8c4c2430) + iVar7) = dVar24;
      }
      if (cVar26 == '\0') {
        in_dr4 = CONCAT44D((int)((ulonglong)in_dr4 >> 0x20),*(undefined4 *)(unsigned)(*piVar13 + 0x24))
        ;
      }
      else {
        in_xd4 = *(double *)(unsigned)(*piVar13 + 0x24);
      }
      if (cVar26 == '\0') {
        dVar24 = CONCAT44D(SUB84(in_dr4,0),*(undefined4 *)(unsigned)(*piVar10 + 0x24));
      }
      else {
        in_xd2 = *(double *)(unsigned)(*piVar10 + 0x24);
        dVar24 = in_xd4;
      }
      if (cVar25 == '\0') {
        fVar17 = F32LO(dVar24) - F32LO(in_dr4);
        dVar24 = CONCAT44D(fVar23 * fVar17 + F32HI(dVar24),fVar17);
      }
      else {
        dVar24 = dVar24 - in_dr4;
      }
      uVar16 = (undefined4)(D2U(dVar24) >> 0x20);
      if (cVar26 == '\0') {
        *(undefined4 *)(unsigned)(iVar7 + -0x73b3dbcc) = uVar16;
      }
      else {
        *(double *)(unsigned)(iVar7 + -0x73b3dbcc) = dVar24;
      }
      iVar5 = (int)(*(undefined1 * *)(fr0_ - 0x44)) * 0x20;
      if (cVar26 == '\0') {
        dVar24 = CONCAT44D(uVar16,*(undefined4 *)(unsigned)(((undefined1 *)(unsigned)0x8c4c2620) + iVar14));
        in_dr4 = CONCAT44D((int)((ulonglong)in_dr4 >> 0x20),
                                  *(undefined4 *)(unsigned)(((undefined1 *)(unsigned)0x8c4c2620) + iVar5));
      }
      else {
        in_xd2 = *(double *)(unsigned)(((undefined1 *)(unsigned)0x8c4c2620) + iVar14);
        in_xd4 = *(double *)(unsigned)(((undefined1 *)(unsigned)0x8c4c2620) + iVar5);
      }
      if (cVar25 == '\0') {
        fVar17 = F32LO(dVar24) - F32LO(in_dr4);
      }
      else {
        fVar17 = SUB84(dVar24 - in_dr4,0);
      }
      dVar24 = in_xd4;
      if (cVar26 == '\0') {
        dVar24 = CONCAT44D(SUB84(in_dr4,0),fVar17);
      }
      if (cVar25 == '\0') {
        dVar24 = CONCAT44D(fVar23 * F32LO(dVar24) + F32HI(dVar24),
                                  SUB84(dVar24,0));
      }
      uVar16 = (undefined4)(D2U(dVar24) >> 0x20);
      if (cVar26 == '\0') {
        *(undefined4 *)(unsigned)(((undefined1 *)(unsigned)0x8c4c2440) + iVar7) = uVar16;
        dVar24 = CONCAT44D(uVar16,*(undefined4 *)(unsigned)(((undefined1 *)(unsigned)0x8c4c2624) + iVar14));
        in_dr4 = CONCAT44D((int)((ulonglong)in_dr4 >> 0x20),
                                  *(undefined4 *)(unsigned)(((undefined1 *)(unsigned)0x8c4c2624) + iVar5));
      }
      else {
        *(double *)(unsigned)(((undefined1 *)(unsigned)0x8c4c2440) + iVar7) = dVar24;
        in_xd2 = *(double *)(unsigned)(((undefined1 *)(unsigned)0x8c4c2624) + iVar14);
        in_xd4 = *(double *)(unsigned)(((undefined1 *)(unsigned)0x8c4c2624) + iVar5);
      }
      if (cVar25 == '\0') {
        fVar17 = F32LO(dVar24) - F32LO(in_dr4);
      }
      else {
        fVar17 = SUB84(dVar24 - in_dr4,0);
      }
      dVar24 = in_xd4;
      if (cVar26 == '\0') {
        dVar24 = CONCAT44D(SUB84(in_dr4,0),fVar17);
      }
      if (cVar25 == '\0') {
        dVar24 = CONCAT44D(fVar23 * F32LO(dVar24) + F32HI(dVar24),
                                  SUB84(dVar24,0));
      }
      uVar16 = (undefined4)(D2U(dVar24) >> 0x20);
      if (cVar26 == '\0') {
        *(undefined4 *)(unsigned)(((undefined1 *)(unsigned)0x8c4c2444) + iVar7) = uVar16;
        dVar24 = CONCAT44D(uVar16,*(undefined4 *)(unsigned)(((undefined1 *)(unsigned)0x8c4c2628) + iVar14));
        in_dr4 = CONCAT44D((int)((ulonglong)in_dr4 >> 0x20),
                                  *(undefined4 *)(unsigned)(((undefined1 *)(unsigned)0x8c4c2628) + iVar5));
      }
      else {
        *(double *)(unsigned)(((undefined1 *)(unsigned)0x8c4c2444) + iVar7) = dVar24;
        in_xd2 = *(double *)(unsigned)(((undefined1 *)(unsigned)0x8c4c2628) + iVar14);
        in_xd4 = *(double *)(unsigned)(((undefined1 *)(unsigned)0x8c4c2628) + iVar5);
      }
      if (cVar25 == '\0') {
        fVar17 = F32LO(dVar24) - F32LO(in_dr4);
      }
      else {
        fVar17 = SUB84(dVar24 - in_dr4,0);
      }
      dVar24 = in_xd4;
      if (cVar26 == '\0') {
        dVar24 = CONCAT44D(SUB84(in_dr4,0),fVar17);
      }
      if (cVar25 == '\0') {
        dVar24 = CONCAT44D(fVar23 * F32LO(dVar24) + F32HI(dVar24),
                                  SUB84(dVar24,0));
      }
      uVar16 = (undefined4)(D2U(dVar24) >> 0x20);
      if (cVar26 == '\0') {
        *(undefined4 *)(unsigned)(((undefined1 *)(unsigned)0x8c4c2448) + iVar7) = uVar16;
        dVar24 = CONCAT44D(uVar16,*(undefined4 *)(unsigned)(((undefined1 *)(unsigned)0x8c4c262c) + iVar14));
        in_dr4 = CONCAT44D((int)((ulonglong)in_dr4 >> 0x20),
                                  *(undefined4 *)(unsigned)(((undefined1 *)(unsigned)0x8c4c262c) + iVar5));
      }
      else {
        *(double *)(unsigned)(((undefined1 *)(unsigned)0x8c4c2448) + iVar7) = dVar24;
        in_xd2 = *(double *)(unsigned)(((undefined1 *)(unsigned)0x8c4c262c) + iVar14);
        in_xd4 = *(double *)(unsigned)(((undefined1 *)(unsigned)0x8c4c262c) + iVar5);
      }
      fVar17 = F32LO(in_dr4);
      if (cVar25 == '\0') {
        fVar18 = F32LO(dVar24) - fVar17;
      }
      else {
        fVar18 = SUB84(dVar24 - in_dr4,0);
      }
      dVar24 = in_xd4;
      if (cVar26 == '\0') {
        dVar24 = CONCAT44D(fVar17,fVar18);
      }
      if (cVar25 == '\0') {
        dVar24 = CONCAT44D(fVar23 * F32LO(dVar24) + F32HI(dVar24),
                                  SUB84(dVar24,0));
      }
      if (cVar26 == '\0') {
        *(int *)(unsigned)(((undefined1 *)(unsigned)0x8c4c244c) + iVar7) = (int)(D2U(dVar24) >> 0x20);
        fVar17 = *(float *)(unsigned)(((undefined1 *)(unsigned)0x8c4c2630) + iVar5);
        in_dr4 = CONCAT44D((int)((ulonglong)in_dr4 >> 0x20),fVar17);
        dVar24 = CONCAT44D(fVar17,*(undefined4 *)(unsigned)(((undefined1 *)(unsigned)0x8c4c2630) + iVar14));
      }
      else {
        *(double *)(unsigned)(((undefined1 *)(unsigned)0x8c4c244c) + iVar7) = dVar24;
        dVar24 = *(double *)(unsigned)(((undefined1 *)(unsigned)0x8c4c2630) + iVar5);
        in_xd2 = *(double *)(unsigned)(((undefined1 *)(unsigned)0x8c4c2630) + iVar14);
        in_xd4 = dVar24;
      }
      if (cVar25 == '\0') {
        fVar18 = F32LO(dVar24) - fVar17;
        dVar24 = CONCAT44D(fVar23 * fVar18 + F32HI(dVar24),fVar18);
      }
      else {
        dVar24 = dVar24 - in_dr4;
      }
      if (cVar26 == '\0') {
        *(int *)(unsigned)(((undefined1 *)(unsigned)0x8c4c2450) + iVar7) = (int)(D2U(dVar24) >> 0x20);
        fVar17 = *(float *)(unsigned)(((undefined1 *)(unsigned)0x8c4c2634) + iVar5);
        in_dr4 = CONCAT44D((int)((ulonglong)in_dr4 >> 0x20),fVar17);
        dVar24 = CONCAT44D(fVar17,*(undefined4 *)(unsigned)(((undefined1 *)(unsigned)0x8c4c2634) + iVar14));
      }
      else {
        *(double *)(unsigned)(((undefined1 *)(unsigned)0x8c4c2450) + iVar7) = dVar24;
        dVar24 = *(double *)(unsigned)(((undefined1 *)(unsigned)0x8c4c2634) + iVar5);
        in_xd2 = *(double *)(unsigned)(((undefined1 *)(unsigned)0x8c4c2634) + iVar14);
        in_xd4 = dVar24;
      }
      if (cVar25 == '\0') {
        fVar17 = F32LO(dVar24) - fVar17;
        dVar24 = CONCAT44D(fVar23 * fVar17 + F32HI(dVar24),fVar17);
      }
      else {
        dVar24 = dVar24 - in_dr4;
      }
      if (cVar26 == '\0') {
        *(int *)(unsigned)(((undefined1 *)(unsigned)0x8c4c2454) + iVar7) = (int)(D2U(dVar24) >> 0x20);
        fVar17 = *(float *)(unsigned)(((undefined1 *)(unsigned)0x8c4c2638) + iVar5);
        in_dr4 = CONCAT44D((int)((ulonglong)in_dr4 >> 0x20),fVar17);
        dVar24 = CONCAT44D(fVar17,*(undefined4 *)(unsigned)(((undefined1 *)(unsigned)0x8c4c2638) + iVar14));
      }
      else {
        *(double *)(unsigned)(((undefined1 *)(unsigned)0x8c4c2454) + iVar7) = dVar24;
        dVar24 = *(double *)(unsigned)(((undefined1 *)(unsigned)0x8c4c2638) + iVar5);
        in_xd2 = *(double *)(unsigned)(((undefined1 *)(unsigned)0x8c4c2638) + iVar14);
        fVar17 = F32LO(in_dr4);
        in_xd4 = dVar24;
      }
      if (cVar25 == '\0') {
        fVar17 = F32LO(dVar24) - fVar17;
        dVar24 = CONCAT44D(fVar23 * fVar17 + F32HI(dVar24),fVar17);
      }
      else {
        dVar24 = dVar24 - in_dr4;
      }
      if (cVar26 == '\0') {
        *(int *)(unsigned)(((undefined1 *)(unsigned)0x8c4c2458) + iVar7) = (int)(D2U(dVar24) >> 0x20);
        fVar17 = *(float *)(unsigned)(((undefined1 *)(unsigned)0x8c4c263c) + iVar5);
        in_dr4 = CONCAT44D((int)((ulonglong)in_dr4 >> 0x20),fVar17);
        in_dr2 = CONCAT44D(fVar17,*(undefined4 *)(unsigned)(((undefined1 *)(unsigned)0x8c4c263c) + iVar14));
      }
      else {
        *(double *)(unsigned)(((undefined1 *)(unsigned)0x8c4c2458) + iVar7) = dVar24;
        in_dr2 = *(double *)(unsigned)(((undefined1 *)(unsigned)0x8c4c263c) + iVar5);
        in_xd2 = *(double *)(unsigned)(((undefined1 *)(unsigned)0x8c4c263c) + iVar14);
        fVar17 = F32LO(in_dr4);
        in_xd4 = in_dr2;
      }
      if (cVar25 == '\0') {
        fVar17 = F32LO(in_dr2) - fVar17;
        in_dr2 = CONCAT44D(fVar23 * fVar17 + F32HI(in_dr2),fVar17);
      }
      else {
        in_dr2 = in_dr2 - in_dr4;
      }
      iVar6 = iVar6 + 1;
      if (cVar26 == '\0') {
        *(int *)(unsigned)(((undefined1 *)(unsigned)0x8c4c245c) + iVar7) = (int)((ulonglong)in_dr2 >> 0x20);
      }
      else {
        *(double *)(unsigned)(((undefined1 *)(unsigned)0x8c4c245c) + iVar7) = in_dr2;
      }
    }
    piVar10 = ((int *)(fr0_ - 0x28)) + iVar9;
    iVar5 = iVar6;
    if ((*(uint *)(unsigned)*piVar10 & 1) == 0) {
      if (cVar26 == '\0') {
        in_dr2 = (double)(ulonglong)*(uint *)(unsigned)(*piVar10 + 4);
      }
      else {
        in_xd2 = *(double *)(unsigned)(*piVar10 + 4);
      }
      iVar7 = iVar6 * 0x40;
      puVar8 = ((undefined1 *)(unsigned)0x8c4c2420) + iVar7;
      if (cVar26 == '\0') {
        *(int *)(unsigned)(((undefined1 *)(unsigned)0x8c4c2424) + iVar7) = SUB84(in_dr2,0);
      }
      else {
        *(double *)(unsigned)(((undefined1 *)(unsigned)0x8c4c2424) + iVar7) = in_xd2;
      }
      if (cVar26 == '\0') {
        uVar19 = *(uint *)(unsigned)(*piVar10 + 8);
        in_dr2 = (double)(ulonglong)uVar19;
        *(uint *)(unsigned)(((undefined1 *)(unsigned)0x8c4c2428) + iVar7) = uVar19;
      }
      else {
        in_xd2 = *(double *)(unsigned)(*piVar10 + 8);
        *(double *)(unsigned)(((undefined1 *)(unsigned)0x8c4c2428) + iVar7) = in_xd2;
      }
      if (cVar26 == '\0') {
        uVar19 = *(uint *)(unsigned)(*piVar10 + 0xc);
        in_dr2 = (double)(ulonglong)uVar19;
        *(uint *)(unsigned)(((undefined1 *)(unsigned)0x8c4c242c) + iVar7) = uVar19;
      }
      else {
        in_xd2 = *(double *)(unsigned)(*piVar10 + 0xc);
        *(double *)(unsigned)(((undefined1 *)(unsigned)0x8c4c242c) + iVar7) = in_xd2;
      }
      if (cVar26 == '\0') {
        uVar19 = *(uint *)(unsigned)(*piVar10 + 0x20);
        in_dr2 = (double)(ulonglong)uVar19;
        *(uint *)(unsigned)(((undefined1 *)(unsigned)0x8c4c2430) + iVar7) = uVar19;
      }
      else {
        in_xd2 = *(double *)(unsigned)(*piVar10 + 0x20);
        *(double *)(unsigned)(((undefined1 *)(unsigned)0x8c4c2430) + iVar7) = in_xd2;
      }
      iVar5 = iVar6 + 1;
      if (cVar26 == '\0') {
        *(undefined4 *)(unsigned)(iVar7 + -0x73b3dbcc) = *(undefined4 *)(unsigned)(*piVar10 + 0x24);
        *(undefined4 *)(unsigned)(((undefined1 *)(unsigned)0x8c4c2440) + iVar7) = *(undefined4 *)(unsigned)(((undefined1 *)(unsigned)0x8c4c2620) + iVar14);
        *(undefined4 *)(unsigned)(((undefined1 *)(unsigned)0x8c4c2444) + iVar7) = *(undefined4 *)(unsigned)(((undefined1 *)(unsigned)0x8c4c2624) + iVar14);
        *(undefined4 *)(unsigned)(((undefined1 *)(unsigned)0x8c4c2448) + iVar7) = *(undefined4 *)(unsigned)(((undefined1 *)(unsigned)0x8c4c2628) + iVar14);
        *(undefined4 *)(unsigned)(((undefined1 *)(unsigned)0x8c4c244c) + iVar7) = *(undefined4 *)(unsigned)(((undefined1 *)(unsigned)0x8c4c262c) + iVar14);
        *(undefined4 *)(unsigned)(((undefined1 *)(unsigned)0x8c4c2450) + iVar7) = *(undefined4 *)(unsigned)(((undefined1 *)(unsigned)0x8c4c2630) + iVar14);
        *(undefined4 *)(unsigned)(((undefined1 *)(unsigned)0x8c4c2454) + iVar7) = *(undefined4 *)(unsigned)(((undefined1 *)(unsigned)0x8c4c2634) + iVar14);
        *(undefined4 *)(unsigned)(((undefined1 *)(unsigned)0x8c4c2458) + iVar7) = *(undefined4 *)(unsigned)(((undefined1 *)(unsigned)0x8c4c2638) + iVar14);
        in_dr2 = (double)(ulonglong)*(uint *)(unsigned)(((undefined1 *)(unsigned)0x8c4c263c) + iVar14);
        *(uint *)(unsigned)(((undefined1 *)(unsigned)0x8c4c245c) + iVar7) = *(uint *)(unsigned)(((undefined1 *)(unsigned)0x8c4c263c) + iVar14);
        iVar5 = iVar6 + 1;
      }
      else {
        *(undefined8 *)(unsigned)(iVar7 + -0x73b3dbcc) = *(undefined8 *)(unsigned)(*piVar10 + 0x24);
        *(undefined8 *)(unsigned)(((undefined1 *)(unsigned)0x8c4c2440) + iVar7) = *(undefined8 *)(unsigned)(((undefined1 *)(unsigned)0x8c4c2620) + iVar14);
        *(undefined8 *)(unsigned)(((undefined1 *)(unsigned)0x8c4c2444) + iVar7) = *(undefined8 *)(unsigned)(((undefined1 *)(unsigned)0x8c4c2624) + iVar14);
        *(undefined8 *)(unsigned)(((undefined1 *)(unsigned)0x8c4c2448) + iVar7) = *(undefined8 *)(unsigned)(((undefined1 *)(unsigned)0x8c4c2628) + iVar14);
        *(undefined8 *)(unsigned)(((undefined1 *)(unsigned)0x8c4c244c) + iVar7) = *(undefined8 *)(unsigned)(((undefined1 *)(unsigned)0x8c4c262c) + iVar14);
        *(undefined8 *)(unsigned)(((undefined1 *)(unsigned)0x8c4c2450) + iVar7) = *(undefined8 *)(unsigned)(((undefined1 *)(unsigned)0x8c4c2630) + iVar14);
        *(undefined8 *)(unsigned)(((undefined1 *)(unsigned)0x8c4c2454) + iVar7) = *(undefined8 *)(unsigned)(((undefined1 *)(unsigned)0x8c4c2634) + iVar14);
        *(undefined8 *)(unsigned)(((undefined1 *)(unsigned)0x8c4c2458) + iVar7) = *(undefined8 *)(unsigned)(((undefined1 *)(unsigned)0x8c4c2638) + iVar14);
        in_xd2 = *(double *)(unsigned)(((undefined1 *)(unsigned)0x8c4c263c) + iVar14);
        *(double *)(unsigned)(((undefined1 *)(unsigned)0x8c4c245c) + iVar7) = in_xd2;
      }
    }
    iVar14 = iVar9 + 1;
    iVar6 = iVar5;
    (*(undefined1 * *)(fr0_ - 0x44)) = (undefined1 *)(unsigned)iVar9;
  } while (iVar14 < 3);
  if (iVar5 == 3) {
    (*(undefined4 *)(unsigned)(unsigned)0x8c4c2420) = 0xe0000000;
    (*(undefined4 *)(unsigned)(unsigned)0x8c4c2438) = (vsp = ((unsigned long)(fr0_ - 68)), float_to_color_u8(puVar8,iVar14,1,3));
    (*(undefined4 *)(unsigned)(unsigned)0x8c4c243c) = (vsp = ((unsigned long)(fr0_ - 68)), float_to_color_u8(puVar8,iVar14,uVar3,iVar5));
    uVar21 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c2430);
    uVar4 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c2428);
    uVar22 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c2424);
    uVar16 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c2420);
    if (cVar26 == '\0') {
      puVar8 = ((undefined1 *)(unsigned)0x8c4c2430);
      *(undefined4 *)(unsigned)((int)unaff_r8 + 0x1c) = (*(undefined4 *)(unsigned)(unsigned)0x8c4c242c);
      *(undefined4 *)(unsigned)(unaff_r8 + 3) = uVar4;
      *(undefined4 *)(unsigned)((int)unaff_r8 + 0x14) = uVar22;
      unaff_r8 = unaff_r8 + 2;
      *(undefined4 *)(unsigned)unaff_r8 = uVar16;
    }
    else {
      uVar1 = CONCAT44((*(undefined4 *)(unsigned)(unsigned)0x8c4c2424),(*(undefined4 *)(unsigned)(unsigned)0x8c4c2420));
      uVar2 = CONCAT44((*(undefined4 *)(unsigned)(unsigned)0x8c4c242c),(*(undefined4 *)(unsigned)(unsigned)0x8c4c2428));
      puVar8 = ((undefined1 *)(unsigned)0x8c4c2440);
      unaff_r8[3] = CONCAT44((*(undefined4 *)(unsigned)(unsigned)0x8c4c243c),(*(undefined4 *)(unsigned)(unsigned)0x8c4c2438));
      unaff_r8[2] = uVar21;
      unaff_r8[1] = uVar2;
      *unaff_r8 = uVar1;
    }
    (*(undefined4 *)(unsigned)(unsigned)0x8c4c2460) = 0xe0000000;
    (*(undefined4 *)(unsigned)(unsigned)0x8c4c2478) = (vsp = ((unsigned long)(fr0_ - 68)), float_to_color_u8(puVar8,iVar14,uVar3,iVar5));
    (*(undefined4 *)(unsigned)(unsigned)0x8c4c247c) = (vsp = ((unsigned long)(fr0_ - 68)), float_to_color_u8(puVar8,iVar14,uVar3,iVar5));
    uVar21 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c2470);
    uVar4 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c2468);
    uVar22 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c2464);
    uVar16 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c2460);
    if (cVar26 == '\0') {
      puVar8 = ((undefined1 *)(unsigned)0x8c4c2470);
      *(undefined4 *)(unsigned)((int)unaff_r8 + 0x3c) = (*(undefined4 *)(unsigned)(unsigned)0x8c4c246c);
      *(undefined4 *)(unsigned)(unaff_r8 + 7) = uVar4;
      *(undefined4 *)(unsigned)((int)unaff_r8 + 0x34) = uVar22;
      puVar11 = unaff_r8 + 6;
      *(undefined4 *)(unsigned)puVar11 = uVar16;
    }
    else {
      uVar1 = CONCAT44((*(undefined4 *)(unsigned)(unsigned)0x8c4c2464),(*(undefined4 *)(unsigned)(unsigned)0x8c4c2460));
      uVar2 = CONCAT44((*(undefined4 *)(unsigned)(unsigned)0x8c4c246c),(*(undefined4 *)(unsigned)(unsigned)0x8c4c2468));
      puVar8 = ((undefined1 *)(unsigned)0x8c4c2480);
      unaff_r8[7] = CONCAT44((*(undefined4 *)(unsigned)(unsigned)0x8c4c247c),(*(undefined4 *)(unsigned)(unsigned)0x8c4c2478));
      unaff_r8[6] = uVar21;
      unaff_r8[5] = uVar2;
      puVar11 = unaff_r8 + 4;
      *puVar11 = uVar1;
    }
    (*(undefined4 *)(unsigned)(unsigned)0x8c4c24a0) = 0xf0000000;
    (*(undefined4 *)(unsigned)(unsigned)0x8c4c24b8) = (vsp = ((unsigned long)(fr0_ - 68)), float_to_color_u8(puVar8,iVar14,uVar3,iVar5));
    uVar4 = (vsp = ((unsigned long)(fr0_ - 68)), float_to_color_u8(puVar8,iVar14,uVar3,iVar5));
    uVar21 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c24b0);
    uVar22 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c24a8);
    uVar16 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c24a4);
    uVar3 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c24a0);
    (*(undefined4 *)(unsigned)(unsigned)0x8c4c24bc) = uVar4;
    if (cVar26 == '\0') {
      *(undefined4 *)(unsigned)((int)puVar11 + 0x3c) = (*(undefined4 *)(unsigned)(unsigned)0x8c4c24ac);
      *(undefined4 *)(unsigned)(puVar11 + 7) = uVar22;
      *(undefined4 *)(unsigned)((int)puVar11 + 0x34) = uVar16;
      *(undefined4 *)(unsigned)(puVar11 + 6) = uVar3;
    }
    else {
      uVar1 = CONCAT44((*(undefined4 *)(unsigned)(unsigned)0x8c4c24a4),(*(undefined4 *)(unsigned)(unsigned)0x8c4c24a0));
      uVar2 = CONCAT44((*(undefined4 *)(unsigned)(unsigned)0x8c4c24ac),(*(undefined4 *)(unsigned)(unsigned)0x8c4c24a8));
      puVar11[7] = CONCAT44(uVar4,(*(undefined4 *)(unsigned)(unsigned)0x8c4c24b8));
      puVar11[6] = uVar21;
      puVar11[5] = uVar2;
      puVar11[4] = uVar1;
    }
    (*(undefined4 *)(unsigned)(unsigned)0x8c4aa520) = (*(undefined4 *)(unsigned)(unsigned)0x8c4aa520) + 3;
  }
  else {
    (*(undefined4 *)(unsigned)(unsigned)0x8c4c2420) = 0xe0000000;
    (*(undefined4 *)(unsigned)(unsigned)0x8c4c2438) = (vsp = ((unsigned long)(fr0_ - 68)), float_to_color_u8(puVar8,iVar14,1,iVar5));
    (*(undefined4 *)(unsigned)(unsigned)0x8c4c243c) = (vsp = ((unsigned long)(fr0_ - 68)), float_to_color_u8(puVar8,iVar14,uVar3,iVar5));
    uVar21 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c2430);
    uVar4 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c2428);
    uVar22 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c2424);
    uVar16 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c2420);
    if (cVar26 == '\0') {
      puVar8 = ((undefined1 *)(unsigned)0x8c4c2430);
      *(undefined4 *)(unsigned)((int)unaff_r8 + 0x1c) = (*(undefined4 *)(unsigned)(unsigned)0x8c4c242c);
      *(undefined4 *)(unsigned)(unaff_r8 + 3) = uVar4;
      *(undefined4 *)(unsigned)((int)unaff_r8 + 0x14) = uVar22;
      unaff_r8 = unaff_r8 + 2;
      *(undefined4 *)(unsigned)unaff_r8 = uVar16;
    }
    else {
      uVar1 = CONCAT44((*(undefined4 *)(unsigned)(unsigned)0x8c4c2424),(*(undefined4 *)(unsigned)(unsigned)0x8c4c2420));
      uVar2 = CONCAT44((*(undefined4 *)(unsigned)(unsigned)0x8c4c242c),(*(undefined4 *)(unsigned)(unsigned)0x8c4c2428));
      puVar8 = ((undefined1 *)(unsigned)0x8c4c2440);
      unaff_r8[3] = CONCAT44((*(undefined4 *)(unsigned)(unsigned)0x8c4c243c),(*(undefined4 *)(unsigned)(unsigned)0x8c4c2438));
      unaff_r8[2] = uVar21;
      unaff_r8[1] = uVar2;
      *unaff_r8 = uVar1;
    }
    (*(undefined4 *)(unsigned)(unsigned)0x8c4c2460) = 0xe0000000;
    (*(undefined4 *)(unsigned)(unsigned)0x8c4c2478) = (vsp = ((unsigned long)(fr0_ - 68)), float_to_color_u8(puVar8,iVar14,uVar3,iVar5));
    (*(undefined4 *)(unsigned)(unsigned)0x8c4c247c) = (vsp = ((unsigned long)(fr0_ - 68)), float_to_color_u8(puVar8,iVar14,uVar3,iVar5));
    uVar21 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c2470);
    uVar4 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c2468);
    uVar22 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c2464);
    uVar16 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c2460);
    if (cVar26 == '\0') {
      puVar8 = ((undefined1 *)(unsigned)0x8c4c2470);
      *(undefined4 *)(unsigned)((int)unaff_r8 + 0x3c) = (*(undefined4 *)(unsigned)(unsigned)0x8c4c246c);
      *(undefined4 *)(unsigned)(unaff_r8 + 7) = uVar4;
      *(undefined4 *)(unsigned)((int)unaff_r8 + 0x34) = uVar22;
      puVar11 = unaff_r8 + 6;
      *(undefined4 *)(unsigned)puVar11 = uVar16;
    }
    else {
      uVar1 = CONCAT44((*(undefined4 *)(unsigned)(unsigned)0x8c4c2464),(*(undefined4 *)(unsigned)(unsigned)0x8c4c2460));
      uVar2 = CONCAT44((*(undefined4 *)(unsigned)(unsigned)0x8c4c246c),(*(undefined4 *)(unsigned)(unsigned)0x8c4c2468));
      puVar8 = ((undefined1 *)(unsigned)0x8c4c2480);
      unaff_r8[7] = CONCAT44((*(undefined4 *)(unsigned)(unsigned)0x8c4c247c),(*(undefined4 *)(unsigned)(unsigned)0x8c4c2478));
      unaff_r8[6] = uVar21;
      unaff_r8[5] = uVar2;
      puVar11 = unaff_r8 + 4;
      *puVar11 = uVar1;
    }
    (*(undefined4 *)(unsigned)(unsigned)0x8c4c24e0) = 0xe0000000;
    (*(undefined4 *)(unsigned)(unsigned)0x8c4c24f8) = (vsp = ((unsigned long)(fr0_ - 68)), float_to_color_u8(puVar8,iVar14,uVar3,iVar5));
    (*(undefined4 *)(unsigned)(unsigned)0x8c4c24fc) = (vsp = ((unsigned long)(fr0_ - 68)), float_to_color_u8(puVar8,iVar14,uVar3,iVar5));
    uVar21 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c24f0);
    uVar4 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c24e8);
    uVar22 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c24e4);
    uVar16 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c24e0);
    if (cVar26 == '\0') {
      puVar8 = ((undefined1 *)(unsigned)0x8c4c24f0);
      *(undefined4 *)(unsigned)((int)puVar11 + 0x3c) = (*(undefined4 *)(unsigned)(unsigned)0x8c4c24ec);
      *(undefined4 *)(unsigned)(puVar11 + 7) = uVar4;
      *(undefined4 *)(unsigned)((int)puVar11 + 0x34) = uVar22;
      puVar11 = puVar11 + 6;
      *(undefined4 *)(unsigned)puVar11 = uVar16;
    }
    else {
      uVar1 = CONCAT44((*(undefined4 *)(unsigned)(unsigned)0x8c4c24e4),(*(undefined4 *)(unsigned)(unsigned)0x8c4c24e0));
      uVar2 = CONCAT44((*(undefined4 *)(unsigned)(unsigned)0x8c4c24ec),(*(undefined4 *)(unsigned)(unsigned)0x8c4c24e8));
      puVar8 = ((undefined1 *)(unsigned)0x8c4c2500);
      puVar11[7] = CONCAT44((*(undefined4 *)(unsigned)(unsigned)0x8c4c24fc),(*(undefined4 *)(unsigned)(unsigned)0x8c4c24f8));
      puVar11[6] = uVar21;
      puVar11[5] = uVar2;
      puVar11 = puVar11 + 4;
      *puVar11 = uVar1;
    }
    (*(undefined4 *)(unsigned)(unsigned)0x8c4c24a0) = 0xf0000000;
    (*(undefined4 *)(unsigned)(unsigned)0x8c4c24b8) = (vsp = ((unsigned long)(fr0_ - 68)), float_to_color_u8(puVar8,iVar14,uVar3,iVar5));
    uVar4 = (vsp = ((unsigned long)(fr0_ - 68)), float_to_color_u8(puVar8,iVar14,uVar3,iVar5));
    uVar21 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c24b0);
    uVar22 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c24a8);
    uVar16 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c24a4);
    uVar3 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c24a0);
    (*(undefined4 *)(unsigned)(unsigned)0x8c4c24bc) = uVar4;
    if (cVar26 == '\0') {
      *(undefined4 *)(unsigned)((int)puVar11 + 0x3c) = (*(undefined4 *)(unsigned)(unsigned)0x8c4c24ac);
      *(undefined4 *)(unsigned)(puVar11 + 7) = uVar22;
      *(undefined4 *)(unsigned)((int)puVar11 + 0x34) = uVar16;
      *(undefined4 *)(unsigned)(puVar11 + 6) = uVar3;
    }
    else {
      uVar1 = CONCAT44((*(undefined4 *)(unsigned)(unsigned)0x8c4c24a4),(*(undefined4 *)(unsigned)(unsigned)0x8c4c24a0));
      uVar2 = CONCAT44((*(undefined4 *)(unsigned)(unsigned)0x8c4c24ac),(*(undefined4 *)(unsigned)(unsigned)0x8c4c24a8));
      puVar11[7] = CONCAT44(uVar4,(*(undefined4 *)(unsigned)(unsigned)0x8c4c24b8));
      puVar11[6] = uVar21;
      puVar11[5] = uVar2;
      puVar11[4] = uVar1;
    }
    (*(undefined4 *)(unsigned)(unsigned)0x8c4aa520) = (*(undefined4 *)(unsigned)(unsigned)0x8c4aa520) + 4;
  }
  return uVar4;
}

__asm__(".globl _FUN_8c23d698\n.set _FUN_8c23d698, _FUN_8c23d698_def\n");
