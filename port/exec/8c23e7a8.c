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
int FUN_8c23e7a8_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c23e7a8";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 64; for (int i_ = 0; i_ < 64; i_++) z_[i_] = 0; }
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined8 *unaff_r8 = 0;
  undefined8 *puVar7;
  int iVar8;
  int *piVar9;
  int iVar10;
  int *piVar11;
  double in_dr0 = 0;
  double dVar12;
  undefined4 uVar13;
  float fVar14;
  uint uVar15;
  double in_dr2 = 0;
  double dVar16;
  double dVar17;
  undefined4 uVar19;
  undefined8 uVar18;
  float fVar20;
  double in_dr4 = 0;
  double dVar21;
  double in_dr6 = 0;
  double in_xd2 = 0;
  double in_xd4 = 0;
  char cVar22;
  char cVar23;
  
  cVar23 = '\0';
  cVar22 = '\0';
  iVar8 = 0;
  ((int *)(fr0_ - 0x28))[0] = ar4;
  ((int *)(fr0_ - 0x28))[1] = ar5;
  ((int *)(fr0_ - 0x28))[2] = ar6;
  (*(double * *)(fr0_ - 0x40)) = (double *)(unsigned)((undefined1 *)(unsigned)0x8c4c2620);
  (*(double * *)(fr0_ - 0x38)) = (double *)(unsigned)((undefined1 *)(unsigned)0x8c4c2620);
  piVar11 = ((int *)(fr0_ - 0x28));
  do {
    uVar13 = SUB84(in_dr2,0);
    if (*(uint *)(unsigned)(((int *)(fr0_ - 0x28))[iVar8] + 0x3c) == (uint)(ushort)ar7) {
      if (cVar23 == '\0') {
        uVar15 = *(uint *)(unsigned)(*piVar11 + 0x20);
        in_dr2 = (double)(ulonglong)uVar15;
        *(uint *)(unsigned)(*(double * *)(fr0_ - 0x40)) = uVar15;
      }
      else {
        in_xd2 = *(double *)(unsigned)(*piVar11 + 0x20);
        *(*(double * *)(fr0_ - 0x40)) = in_xd2;
      }
      if (cVar23 == '\0') {
        uVar15 = *(uint *)(unsigned)(*piVar11 + 0x24);
        in_dr2 = (double)(ulonglong)uVar15;
        *(uint *)(unsigned)((int)(*(double * *)(fr0_ - 0x40)) + 4) = uVar15;
      }
      else {
        in_xd2 = *(double *)(unsigned)(*piVar11 + 0x24);
        *(double *)(unsigned)((int)(*(double * *)(fr0_ - 0x40)) + 4) = in_xd2;
      }
      if (cVar23 == '\0') {
        uVar15 = *(uint *)(unsigned)(*piVar11 + 0x28);
        in_dr2 = (double)(ulonglong)uVar15;
        *(uint *)(unsigned)((*(double * *)(fr0_ - 0x40)) + 1) = uVar15;
      }
      else {
        in_xd2 = *(double *)(unsigned)(*piVar11 + 0x28);
        (*(double * *)(fr0_ - 0x40))[1] = in_xd2;
      }
      if (cVar23 == '\0') {
        uVar15 = *(uint *)(unsigned)(*piVar11 + 0x2c);
        in_dr2 = (double)(ulonglong)uVar15;
        *(uint *)(unsigned)((int)(*(double * *)(fr0_ - 0x40)) + 0xc) = uVar15;
      }
      else {
        in_xd2 = *(double *)(unsigned)(*piVar11 + 0x2c);
        *(double *)(unsigned)((int)(*(double * *)(fr0_ - 0x40)) + 0xc) = in_xd2;
      }
    }
    else {
      piVar9 = ((int *)(fr0_ - 0x28)) + iVar8;
      (vsp = ((unsigned long)(fr0_ - 64)), FUN_8c23bae2((*(double * *)(fr0_ - 0x38)),*piVar9 + 0x10,*piVar9 + 0x30,(ushort)ar7 & 0x8000));
      *(uint *)(unsigned)(*piVar9 + 0x3c) = (uint)(ushort)ar7;
      if (cVar23 == '\0') {
        uVar13 = *(undefined4 *)(unsigned)(*(double * *)(fr0_ - 0x38));
      }
      else {
        in_xd2 = *(*(double * *)(fr0_ - 0x38));
      }
      if (cVar23 == '\0') {
        *(undefined4 *)(unsigned)(*piVar9 + 0x20) = uVar13;
        dVar16 = CONCAT44D(*(undefined4 *)(unsigned)((int)(*(double * *)(fr0_ - 0x38)) + 4),
                                  *(undefined4 *)(unsigned)((int)(*(double * *)(fr0_ - 0x38)) + 0x14));
      }
      else {
        *(double *)(unsigned)(*piVar9 + 0x20) = in_xd2;
        in_xd2 = *(double *)(unsigned)((int)(*(double * *)(fr0_ - 0x38)) + 0x14);
        dVar16 = *(double *)(unsigned)((int)(*(double * *)(fr0_ - 0x38)) + 4);
      }
      iVar4 = *piVar9;
      if (cVar22 == '\0') {
        dVar16 = CONCAT44D(F32HI(dVar16) + F32LO(dVar16),
                                  SUB84(dVar16,0));
      }
      else {
        dVar16 = dVar16 + dVar16;
      }
      uVar13 = (undefined4)(D2U(dVar16) >> 0x20);
      if (cVar23 == '\0') {
        *(undefined4 *)(unsigned)((int)(*(double * *)(fr0_ - 0x38)) + 4) = uVar13;
        *(undefined4 *)(unsigned)(iVar4 + 0x24) = uVar13;
        dVar16 = CONCAT44D(*(undefined4 *)(unsigned)((*(double * *)(fr0_ - 0x38)) + 1),*(undefined4 *)(unsigned)((*(double * *)(fr0_ - 0x38)) + 3));
      }
      else {
        *(double *)(unsigned)((int)(*(double * *)(fr0_ - 0x38)) + 4) = dVar16;
        *(double *)(unsigned)(iVar4 + 0x24) = dVar16;
        dVar16 = (*(double * *)(fr0_ - 0x38))[1];
        in_xd2 = (*(double * *)(fr0_ - 0x38))[3];
      }
      iVar4 = *piVar9;
      if (cVar22 == '\0') {
        dVar16 = CONCAT44D(F32HI(dVar16) + F32LO(dVar16),
                                  SUB84(dVar16,0));
      }
      else {
        dVar16 = dVar16 + dVar16;
      }
      uVar13 = (undefined4)(D2U(dVar16) >> 0x20);
      if (cVar23 == '\0') {
        *(undefined4 *)(unsigned)((*(double * *)(fr0_ - 0x38)) + 1) = uVar13;
        *(undefined4 *)(unsigned)(iVar4 + 0x28) = uVar13;
      }
      else {
        (*(double * *)(fr0_ - 0x38))[1] = dVar16;
        *(double *)(unsigned)(iVar4 + 0x28) = dVar16;
      }
      iVar4 = *piVar9;
      if (cVar23 == '\0') {
        dVar16 = CONCAT44D(*(undefined4 *)(unsigned)((int)(*(double * *)(fr0_ - 0x38)) + 0xc),
                                  *(undefined4 *)(unsigned)((int)(*(double * *)(fr0_ - 0x38)) + 0x1c));
      }
      else {
        dVar16 = *(double *)(unsigned)((int)(*(double * *)(fr0_ - 0x38)) + 0xc);
        in_xd2 = *(double *)(unsigned)((int)(*(double * *)(fr0_ - 0x38)) + 0x1c);
      }
      if (cVar22 == '\0') {
        in_dr2 = CONCAT44D(F32HI(dVar16) + F32LO(dVar16),
                                  SUB84(dVar16,0));
      }
      else {
        in_dr2 = dVar16 + dVar16;
      }
      uVar13 = (undefined4)((ulonglong)in_dr2 >> 0x20);
      if (cVar23 == '\0') {
        *(undefined4 *)(unsigned)((int)(*(double * *)(fr0_ - 0x38)) + 0xc) = uVar13;
        *(undefined4 *)(unsigned)(iVar4 + 0x2c) = uVar13;
      }
      else {
        *(double *)(unsigned)((int)(*(double * *)(fr0_ - 0x38)) + 0xc) = in_dr2;
        *(double *)(unsigned)(iVar4 + 0x2c) = in_dr2;
      }
    }
    iVar8 = iVar8 + 1;
    (*(double * *)(fr0_ - 0x40)) = (*(double * *)(fr0_ - 0x40)) + 4;
    piVar11 = piVar11 + 1;
    (*(double * *)(fr0_ - 0x38)) = (*(double * *)(fr0_ - 0x38)) + 4;
  } while (iVar8 < 3);
  iVar8 = 0;
  iVar4 = 0;
  iVar10 = 2;
  do {
    iVar6 = iVar8;
    piVar11 = ((int *)(fr0_ - 0x28)) + iVar6;
    iVar8 = iVar6 * 0x20;
    piVar9 = ((int *)(fr0_ - 0x28)) + iVar10;
    if ((*(uint *)(unsigned)*piVar9 & 1 ^ *(uint *)(unsigned)*piVar11 & 1) == 1) {
      iVar5 = *piVar9;
      iVar3 = *piVar11;
      if (cVar23 == '\0') {
        dVar21 = CONCAT44D(*(undefined4 *)(unsigned)(iVar5 + 0x18),SUB84(in_dr4,0));
        dVar17 = CONCAT44D(*(undefined4 *)(unsigned)(iVar3 + 0x18),(*(undefined4 *)(unsigned)(unsigned)0x8c4aa4d4));
        dVar16 = in_xd2;
      }
      else {
        dVar21 = *(double *)(unsigned)(iVar5 + 0x18);
        dVar16 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4aa4d8),(*(undefined4 *)(unsigned)(unsigned)0x8c4aa4d4));
        dVar17 = *(double *)(unsigned)(iVar3 + 0x18);
      }
      fVar20 = F32HI(dVar21);
      if (cVar22 == '\0') {
        dVar21 = CONCAT44D(F32HI(dVar17) - fVar20,
                                  F32LO(dVar17) - fVar20);
      }
      else {
        dVar21 = (dVar17 - dVar21) - dVar21;
      }
      if (cVar23 == '\0') {
        uVar13 = SUB84(dVar21,0);
        dVar21 = CONCAT44D((int)(D2U(dVar21) >> 0x20),*(undefined4 *)(unsigned)(iVar3 + 0x10));
        in_xd2 = dVar16;
        dVar16 = CONCAT44D(uVar13,*(undefined4 *)(unsigned)(iVar5 + 0x10));
      }
      else {
        in_xd4 = *(double *)(unsigned)(iVar5 + 0x10);
        in_xd2 = *(double *)(unsigned)(iVar3 + 0x10);
      }
      if (cVar22 == '\0') {
        dVar16 = CONCAT44D(F32HI(dVar16) /
                                  F32HI(dVar21),SUB84(dVar16,0));
      }
      else {
        dVar16 = dVar16 / dVar21;
      }
      fVar20 = F32LO(dVar16);
      dVar17 = in_xd4;
      if (cVar23 == '\0') {
        dVar17 = CONCAT44D(fVar20,SUB84(in_dr6,0));
      }
      in_dr6 = dVar17;
      if (cVar22 == '\0') {
        fVar14 = F32LO(dVar21) - fVar20;
      }
      else {
        fVar14 = SUB84(dVar21 - dVar16,0);
      }
      uVar13 = (undefined4)(D2U(dVar16) >> 0x20);
      if (cVar23 == '\0') {
        fVar20 = *(float *)(unsigned)(iVar5 + 0x14);
        dVar21 = CONCAT44D(fVar20,fVar14);
        dVar16 = CONCAT44D(uVar13,SUB84(in_dr0,0));
        in_dr0 = CONCAT44D(uVar13,fVar20);
      }
      else {
        dVar21 = *(double *)(unsigned)(iVar5 + 0x14);
        in_dr0 = dVar16;
        in_xd4 = dVar21;
      }
      fVar14 = F32HI(dVar16);
      if (cVar22 == '\0') {
        in_dr6 = CONCAT44D(fVar14 * F32LO(dVar21) + F32HI(in_dr6),
                                  SUB84(in_dr6,0));
      }
      if (cVar23 == '\0') {
        dVar21 = CONCAT44D((int)(D2U(dVar21) >> 0x20),*(undefined4 *)(unsigned)(iVar3 + 0x14));
      }
      else {
        in_xd2 = *(double *)(unsigned)(iVar3 + 0x14);
      }
      if (cVar22 == '\0') {
        fVar20 = F32LO(dVar21) - fVar20;
        dVar21 = CONCAT44D(fVar14 * fVar20 + F32HI(dVar21),fVar20);
      }
      else {
        dVar21 = dVar21 - in_dr0;
      }
      uVar19 = (undefined4)(D2U(dVar21) >> 0x20);
      dVar17 = dVar21;
      if (cVar23 == '\0') {
        in_dr0 = CONCAT44D(uVar13,uVar19);
        dVar17 = in_xd4;
      }
      iVar3 = iVar4 * 0x20;
      if (cVar23 == '\0') {
        dVar21 = CONCAT44D(uVar19,(*(undefined4 *)(unsigned)(unsigned)0x8c4ab31c));
        dVar16 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4ab320),SUB84(dVar16,0));
      }
      else {
        in_xd2 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4ab320),(*(undefined4 *)(unsigned)(unsigned)0x8c4ab31c));
        dVar16 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4ab324),(*(undefined4 *)(unsigned)(unsigned)0x8c4ab320));
      }
      if (cVar22 == '\0') {
        fVar20 = F32LO(dVar21) * F32HI(dVar16);
      }
      else {
        fVar20 = SUB84(dVar21 * dVar16,0);
      }
      if (cVar23 == '\0') {
        uVar18 = CONCAT44((*(undefined4 *)(unsigned)(unsigned)0x8c4aa4b4),fVar20);
        dVar16 = CONCAT44D((int)((ulonglong)in_dr6 >> 0x20),SUB84(dVar16,0));
      }
      else {
        uVar18 = CONCAT44((*(undefined4 *)(unsigned)(unsigned)0x8c4aa4b8),(*(undefined4 *)(unsigned)(unsigned)0x8c4aa4b4));
        dVar16 = in_dr6;
      }
      iVar10 = iVar10 * 0x20;
      if (cVar22 == '\0') {
        uVar18 = CONCAT44(F32HI(dVar16) * (float)uVar18 +
                          F32HI(uVar18),(float)uVar18);
      }
      if (cVar23 == '\0') {
        *(int *)(unsigned)(((undefined1 *)(unsigned)0x8c4c2524) + iVar3) = (int)((ulonglong)uVar18 >> 0x20);
        dVar16 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4ab324),SUB84(dVar16,0));
        dVar21 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4aa4b8),(*(undefined4 *)(unsigned)(unsigned)0x8c4ab31c));
      }
      else {
        *(undefined8 *)(unsigned)(((undefined1 *)(unsigned)0x8c4c2524) + iVar3) = uVar18;
        in_xd2 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4ab320),(*(undefined4 *)(unsigned)(unsigned)0x8c4ab31c));
        dVar16 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4ab328),(*(undefined4 *)(unsigned)(unsigned)0x8c4ab324));
        dVar21 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4aa4bc),(*(undefined4 *)(unsigned)(unsigned)0x8c4aa4b8));
      }
      if (cVar22 == '\0') {
        dVar21 = CONCAT44D((int)(D2U(dVar21) >> 0x20),
                                  F32LO(dVar21) * F32HI(dVar16));
      }
      else {
        dVar21 = dVar21 * dVar16;
      }
      fVar20 = F32LO(in_dr0);
      dVar12 = dVar17;
      if (cVar23 == '\0') {
        dVar12 = CONCAT44D(fVar20,SUB84(dVar16,0));
      }
      if (cVar22 == '\0') {
        dVar21 = CONCAT44D(F32HI(dVar12) * F32LO(dVar21) +
                                  F32HI(dVar21),SUB84(dVar21,0));
      }
      uVar13 = (undefined4)((ulonglong)in_dr0 >> 0x20);
      if (cVar23 == '\0') {
        *(int *)(unsigned)(((undefined1 *)(unsigned)0x8c4c2528) + iVar3) = (int)(D2U(dVar21) >> 0x20);
        *(undefined4 *)(unsigned)(((undefined1 *)(unsigned)0x8c4c252c) + iVar3) = (*(undefined4 *)(unsigned)(unsigned)0x8c4ab31c);
        fVar20 = *(float *)(unsigned)(((undefined1 *)(unsigned)0x8c4c2620) + iVar10);
        dVar16 = CONCAT44D(fVar20,*(undefined4 *)(unsigned)(((undefined1 *)(unsigned)0x8c4c2620) + iVar8));
        in_dr0 = CONCAT44D(uVar13,SUB84(dVar12,0));
        in_dr4 = CONCAT44D(uVar13,fVar20);
        in_xd4 = dVar17;
      }
      else {
        *(double *)(unsigned)(((undefined1 *)(unsigned)0x8c4c2528) + iVar3) = dVar21;
        *(ulonglong *)(unsigned)(((undefined1 *)(unsigned)0x8c4c252c) + iVar3) = CONCAT44((*(undefined4 *)(unsigned)(unsigned)0x8c4ab320),(*(undefined4 *)(unsigned)(unsigned)0x8c4ab31c));
        dVar16 = *(double *)(unsigned)(((undefined1 *)(unsigned)0x8c4c2620) + iVar10);
        in_xd2 = *(double *)(unsigned)(((undefined1 *)(unsigned)0x8c4c2620) + iVar8);
        in_dr4 = in_dr0;
        in_xd4 = dVar16;
      }
      fVar14 = F32HI(in_dr0);
      if (cVar22 == '\0') {
        fVar20 = F32LO(dVar16) - fVar20;
        dVar16 = CONCAT44D(fVar14 * fVar20 + F32HI(dVar16),fVar20);
      }
      else {
        dVar16 = dVar16 - in_dr4;
      }
      uVar19 = (undefined4)(D2U(dVar16) >> 0x20);
      if (cVar23 == '\0') {
        *(undefined4 *)(unsigned)(((undefined1 *)(unsigned)0x8c4c2530) + iVar3) = uVar19;
        dVar16 = CONCAT44D(uVar19,*(undefined4 *)(unsigned)(((undefined1 *)(unsigned)0x8c4c2624) + iVar8));
        in_dr4 = CONCAT44D(uVar13,*(undefined4 *)(unsigned)(((undefined1 *)(unsigned)0x8c4c2624) + iVar10));
      }
      else {
        *(double *)(unsigned)(((undefined1 *)(unsigned)0x8c4c2530) + iVar3) = dVar16;
        in_xd2 = *(double *)(unsigned)(((undefined1 *)(unsigned)0x8c4c2624) + iVar8);
        in_xd4 = *(double *)(unsigned)(((undefined1 *)(unsigned)0x8c4c2624) + iVar10);
      }
      if (cVar22 == '\0') {
        fVar20 = F32LO(dVar16) - F32LO(in_dr4);
      }
      else {
        fVar20 = SUB84(dVar16 - in_dr4,0);
      }
      dVar16 = in_xd4;
      if (cVar23 == '\0') {
        dVar16 = CONCAT44D(SUB84(in_dr4,0),fVar20);
      }
      if (cVar22 == '\0') {
        dVar16 = CONCAT44D(fVar14 * F32LO(dVar16) + F32HI(dVar16),
                                  SUB84(dVar16,0));
      }
      uVar13 = (undefined4)(D2U(dVar16) >> 0x20);
      if (cVar23 == '\0') {
        *(undefined4 *)(unsigned)(iVar3 + -0x73b3dacc) = uVar13;
        dVar16 = CONCAT44D(uVar13,*(undefined4 *)(unsigned)(((undefined1 *)(unsigned)0x8c4c2628) + iVar8));
        in_dr4 = CONCAT44D((int)((ulonglong)in_dr4 >> 0x20),
                                  *(undefined4 *)(unsigned)(((undefined1 *)(unsigned)0x8c4c2628) + iVar10));
      }
      else {
        *(double *)(unsigned)(iVar3 + -0x73b3dacc) = dVar16;
        in_xd2 = *(double *)(unsigned)(((undefined1 *)(unsigned)0x8c4c2628) + iVar8);
        in_xd4 = *(double *)(unsigned)(((undefined1 *)(unsigned)0x8c4c2628) + iVar10);
      }
      if (cVar22 == '\0') {
        fVar20 = F32LO(dVar16) - F32LO(in_dr4);
      }
      else {
        fVar20 = SUB84(dVar16 - in_dr4,0);
      }
      dVar16 = in_xd4;
      if (cVar23 == '\0') {
        dVar16 = CONCAT44D(SUB84(in_dr4,0),fVar20);
      }
      if (cVar22 == '\0') {
        dVar16 = CONCAT44D(fVar14 * F32LO(dVar16) + F32HI(dVar16),
                                  SUB84(dVar16,0));
      }
      uVar13 = (undefined4)(D2U(dVar16) >> 0x20);
      if (cVar23 == '\0') {
        *(undefined4 *)(unsigned)(&(*(uint *)(unsigned)0x8c4c2538) + iVar4 * 4) = uVar13;
        dVar16 = CONCAT44D(uVar13,*(undefined4 *)(unsigned)(((undefined1 *)(unsigned)0x8c4c262c) + iVar8));
        in_dr4 = CONCAT44D((int)((ulonglong)in_dr4 >> 0x20),
                                  *(undefined4 *)(unsigned)(((undefined1 *)(unsigned)0x8c4c262c) + iVar10));
      }
      else {
        (&(*(uint *)(unsigned)0x8c4c2538))[iVar4 * 4] = dVar16;
        in_xd2 = *(double *)(unsigned)(((undefined1 *)(unsigned)0x8c4c262c) + iVar8);
        in_xd4 = *(double *)(unsigned)(((undefined1 *)(unsigned)0x8c4c262c) + iVar10);
      }
      if (cVar22 == '\0') {
        fVar20 = F32LO(dVar16) - F32LO(in_dr4);
      }
      else {
        fVar20 = SUB84(dVar16 - in_dr4,0);
      }
      in_dr2 = in_xd4;
      if (cVar23 == '\0') {
        in_dr2 = CONCAT44D(SUB84(in_dr4,0),fVar20);
      }
      if (cVar22 == '\0') {
        in_dr2 = CONCAT44D(fVar14 * F32LO(in_dr2) + F32HI(in_dr2),
                                  SUB84(in_dr2,0));
      }
      iVar4 = iVar4 + 1;
      if (cVar23 == '\0') {
        *(int *)(unsigned)((int)&(*(uint *)(unsigned)0x8c4c2538) + iVar3 + 4) = (int)((ulonglong)in_dr2 >> 0x20);
      }
      else {
        *(double *)(unsigned)((int)&(*(uint *)(unsigned)0x8c4c2538) + iVar3 + 4) = in_dr2;
      }
    }
    piVar11 = ((int *)(fr0_ - 0x28)) + iVar6;
    iVar3 = iVar4;
    if ((*(uint *)(unsigned)*piVar11 & 1) == 0) {
      if (cVar23 == '\0') {
        in_dr2 = (double)(ulonglong)*(uint *)(unsigned)(*piVar11 + 4);
      }
      else {
        in_xd2 = *(double *)(unsigned)(*piVar11 + 4);
      }
      iVar10 = iVar4 * 0x20;
      if (cVar23 == '\0') {
        *(int *)(unsigned)(((undefined1 *)(unsigned)0x8c4c2524) + iVar10) = SUB84(in_dr2,0);
      }
      else {
        *(double *)(unsigned)(((undefined1 *)(unsigned)0x8c4c2524) + iVar10) = in_xd2;
      }
      if (cVar23 == '\0') {
        uVar15 = *(uint *)(unsigned)(*piVar11 + 8);
        in_dr2 = (double)(ulonglong)uVar15;
        *(uint *)(unsigned)(((undefined1 *)(unsigned)0x8c4c2528) + iVar10) = uVar15;
      }
      else {
        in_xd2 = *(double *)(unsigned)(*piVar11 + 8);
        *(double *)(unsigned)(((undefined1 *)(unsigned)0x8c4c2528) + iVar10) = in_xd2;
      }
      iVar3 = iVar4 + 1;
      if (cVar23 == '\0') {
        *(undefined4 *)(unsigned)(((undefined1 *)(unsigned)0x8c4c252c) + iVar10) = *(undefined4 *)(unsigned)(*piVar11 + 0xc);
        *(undefined4 *)(unsigned)(((undefined1 *)(unsigned)0x8c4c2530) + iVar10) = *(undefined4 *)(unsigned)(((undefined1 *)(unsigned)0x8c4c2620) + iVar8);
        *(undefined4 *)(unsigned)(iVar10 + -0x73b3dacc) = *(undefined4 *)(unsigned)(((undefined1 *)(unsigned)0x8c4c2624) + iVar8);
        *(undefined4 *)(unsigned)(&(*(uint *)(unsigned)0x8c4c2538) + iVar4 * 4) = *(undefined4 *)(unsigned)(((undefined1 *)(unsigned)0x8c4c2628) + iVar8);
        in_dr2 = (double)(ulonglong)*(uint *)(unsigned)(((undefined1 *)(unsigned)0x8c4c262c) + iVar8);
        *(uint *)(unsigned)((int)&(*(uint *)(unsigned)0x8c4c2538) + iVar10 + 4) = *(uint *)(unsigned)(((undefined1 *)(unsigned)0x8c4c262c) + iVar8);
        iVar3 = iVar4 + 1;
      }
      else {
        *(undefined8 *)(unsigned)(((undefined1 *)(unsigned)0x8c4c252c) + iVar10) = *(undefined8 *)(unsigned)(*piVar11 + 0xc);
        *(undefined8 *)(unsigned)(((undefined1 *)(unsigned)0x8c4c2530) + iVar10) = *(undefined8 *)(unsigned)(((undefined1 *)(unsigned)0x8c4c2620) + iVar8);
        *(undefined8 *)(unsigned)(iVar10 + -0x73b3dacc) = *(undefined8 *)(unsigned)(((undefined1 *)(unsigned)0x8c4c2624) + iVar8);
        (&(*(uint *)(unsigned)0x8c4c2538))[iVar4 * 4] = *(undefined8 *)(unsigned)(((undefined1 *)(unsigned)0x8c4c2628) + iVar8);
        in_xd2 = *(double *)(unsigned)(((undefined1 *)(unsigned)0x8c4c262c) + iVar8);
        *(double *)(unsigned)((int)&(*(uint *)(unsigned)0x8c4c2538) + iVar10 + 4) = in_xd2;
      }
    }
    uVar18 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c2530);
    uVar19 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c2528);
    uVar13 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c2524);
    iVar8 = iVar6 + 1;
    iVar4 = iVar3;
    iVar10 = iVar6;
  } while (iVar6 + 1 < 3);
  if (iVar3 == 3) {
    (*(undefined4 *)(unsigned)(unsigned)0x8c4c2520) = 0xe0000000;
    if (cVar23 == '\0') {
      *(undefined4 *)(unsigned)((int)unaff_r8 + 0x1c) = (*(undefined4 *)(unsigned)(unsigned)0x8c4c252c);
      *(undefined4 *)(unsigned)(unaff_r8 + 3) = uVar19;
      *(undefined4 *)(unsigned)((int)unaff_r8 + 0x14) = uVar13;
      unaff_r8 = unaff_r8 + 2;
      *(undefined4 *)(unsigned)unaff_r8 = 0xe0000000;
    }
    else {
      uVar1 = CONCAT44((*(undefined4 *)(unsigned)(unsigned)0x8c4c2524),0xe0000000);
      uVar2 = CONCAT44((*(undefined4 *)(unsigned)(unsigned)0x8c4c252c),(*(undefined4 *)(unsigned)(unsigned)0x8c4c2528));
      unaff_r8[3] = (*(uint *)(unsigned)0x8c4c2538);
      unaff_r8[2] = uVar18;
      unaff_r8[1] = uVar2;
      *unaff_r8 = uVar1;
    }
    uVar18 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c2550);
    uVar19 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c2548);
    uVar13 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c2544);
    (*(undefined4 *)(unsigned)(unsigned)0x8c4c2540) = 0xe0000000;
    if (cVar23 == '\0') {
      *(undefined4 *)(unsigned)((int)unaff_r8 + 0x3c) = (*(undefined4 *)(unsigned)(unsigned)0x8c4c254c);
      *(undefined4 *)(unsigned)(unaff_r8 + 7) = uVar19;
      *(undefined4 *)(unsigned)((int)unaff_r8 + 0x34) = uVar13;
      puVar7 = unaff_r8 + 6;
      *(undefined4 *)(unsigned)puVar7 = 0xe0000000;
    }
    else {
      uVar1 = CONCAT44((*(undefined4 *)(unsigned)(unsigned)0x8c4c2544),0xe0000000);
      uVar2 = CONCAT44((*(undefined4 *)(unsigned)(unsigned)0x8c4c254c),(*(undefined4 *)(unsigned)(unsigned)0x8c4c2548));
      unaff_r8[7] = (*(uint *)(unsigned)0x8c4c2558);
      unaff_r8[6] = uVar18;
      unaff_r8[5] = uVar2;
      puVar7 = unaff_r8 + 4;
      *puVar7 = uVar1;
    }
    uVar18 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c2570);
    uVar19 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c2568);
    uVar13 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c2564);
    (*(undefined4 *)(unsigned)(unsigned)0x8c4c2560) = 0xf0000000;
    if (cVar23 == '\0') {
      *(undefined4 *)(unsigned)((int)puVar7 + 0x3c) = (*(undefined4 *)(unsigned)(unsigned)0x8c4c256c);
      *(undefined4 *)(unsigned)(puVar7 + 7) = uVar19;
      *(undefined4 *)(unsigned)((int)puVar7 + 0x34) = uVar13;
      *(undefined4 *)(unsigned)(puVar7 + 6) = 0xf0000000;
    }
    else {
      uVar1 = CONCAT44((*(undefined4 *)(unsigned)(unsigned)0x8c4c2564),0xf0000000);
      uVar2 = CONCAT44((*(undefined4 *)(unsigned)(unsigned)0x8c4c256c),(*(undefined4 *)(unsigned)(unsigned)0x8c4c2568));
      puVar7[7] = (*(uint *)(unsigned)0x8c4c2578);
      puVar7[6] = uVar18;
      puVar7[5] = uVar2;
      puVar7[4] = uVar1;
    }
    (*(undefined4 *)(unsigned)(unsigned)0x8c4aa520) = (*(undefined4 *)(unsigned)(unsigned)0x8c4aa520) + 3;
  }
  else {
    (*(undefined4 *)(unsigned)(unsigned)0x8c4c2520) = 0xe0000000;
    if (cVar23 == '\0') {
      *(undefined4 *)(unsigned)((int)unaff_r8 + 0x1c) = (*(undefined4 *)(unsigned)(unsigned)0x8c4c252c);
      *(undefined4 *)(unsigned)(unaff_r8 + 3) = uVar19;
      *(undefined4 *)(unsigned)((int)unaff_r8 + 0x14) = uVar13;
      unaff_r8 = unaff_r8 + 2;
      *(undefined4 *)(unsigned)unaff_r8 = 0xe0000000;
    }
    else {
      uVar1 = CONCAT44((*(undefined4 *)(unsigned)(unsigned)0x8c4c2524),0xe0000000);
      uVar2 = CONCAT44((*(undefined4 *)(unsigned)(unsigned)0x8c4c252c),(*(undefined4 *)(unsigned)(unsigned)0x8c4c2528));
      unaff_r8[3] = (*(uint *)(unsigned)0x8c4c2538);
      unaff_r8[2] = uVar18;
      unaff_r8[1] = uVar2;
      *unaff_r8 = uVar1;
    }
    uVar18 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c2550);
    uVar19 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c2548);
    uVar13 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c2544);
    (*(undefined4 *)(unsigned)(unsigned)0x8c4c2540) = 0xe0000000;
    if (cVar23 == '\0') {
      *(undefined4 *)(unsigned)((int)unaff_r8 + 0x3c) = (*(undefined4 *)(unsigned)(unsigned)0x8c4c254c);
      *(undefined4 *)(unsigned)(unaff_r8 + 7) = uVar19;
      *(undefined4 *)(unsigned)((int)unaff_r8 + 0x34) = uVar13;
      puVar7 = unaff_r8 + 6;
      *(undefined4 *)(unsigned)puVar7 = 0xe0000000;
    }
    else {
      uVar1 = CONCAT44((*(undefined4 *)(unsigned)(unsigned)0x8c4c2544),0xe0000000);
      uVar2 = CONCAT44((*(undefined4 *)(unsigned)(unsigned)0x8c4c254c),(*(undefined4 *)(unsigned)(unsigned)0x8c4c2548));
      unaff_r8[7] = (*(uint *)(unsigned)0x8c4c2558);
      unaff_r8[6] = uVar18;
      unaff_r8[5] = uVar2;
      puVar7 = unaff_r8 + 4;
      *puVar7 = uVar1;
    }
    uVar18 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c2590);
    uVar19 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c2588);
    uVar13 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c2584);
    (*(undefined4 *)(unsigned)(unsigned)0x8c4c2580) = 0xe0000000;
    if (cVar23 == '\0') {
      *(undefined4 *)(unsigned)((int)puVar7 + 0x3c) = (*(undefined4 *)(unsigned)(unsigned)0x8c4c258c);
      *(undefined4 *)(unsigned)(puVar7 + 7) = uVar19;
      *(undefined4 *)(unsigned)((int)puVar7 + 0x34) = uVar13;
      puVar7 = puVar7 + 6;
      *(undefined4 *)(unsigned)puVar7 = 0xe0000000;
    }
    else {
      uVar1 = CONCAT44((*(undefined4 *)(unsigned)(unsigned)0x8c4c2584),0xe0000000);
      uVar2 = CONCAT44((*(undefined4 *)(unsigned)(unsigned)0x8c4c258c),(*(undefined4 *)(unsigned)(unsigned)0x8c4c2588));
      puVar7[7] = (*(uint *)(unsigned)0x8c4c2598);
      puVar7[6] = uVar18;
      puVar7[5] = uVar2;
      puVar7 = puVar7 + 4;
      *puVar7 = uVar1;
    }
    uVar18 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c2570);
    uVar19 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c2568);
    uVar13 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c2564);
    (*(undefined4 *)(unsigned)(unsigned)0x8c4c2560) = 0xf0000000;
    if (cVar23 == '\0') {
      *(undefined4 *)(unsigned)((int)puVar7 + 0x3c) = (*(undefined4 *)(unsigned)(unsigned)0x8c4c256c);
      *(undefined4 *)(unsigned)(puVar7 + 7) = uVar19;
      *(undefined4 *)(unsigned)((int)puVar7 + 0x34) = uVar13;
      *(undefined4 *)(unsigned)(puVar7 + 6) = 0xf0000000;
    }
    else {
      uVar1 = CONCAT44((*(undefined4 *)(unsigned)(unsigned)0x8c4c2564),0xf0000000);
      uVar2 = CONCAT44((*(undefined4 *)(unsigned)(unsigned)0x8c4c256c),(*(undefined4 *)(unsigned)(unsigned)0x8c4c2568));
      puVar7[7] = (*(uint *)(unsigned)0x8c4c2578);
      puVar7[6] = uVar18;
      puVar7[5] = uVar2;
      puVar7[4] = uVar1;
    }
    (*(undefined4 *)(unsigned)(unsigned)0x8c4aa520) = (*(undefined4 *)(unsigned)(unsigned)0x8c4aa520) + 4;
  }
  return iVar3;
}

__asm__(".globl _FUN_8c23e7a8\n.set _FUN_8c23e7a8, _FUN_8c23e7a8_def\n");
