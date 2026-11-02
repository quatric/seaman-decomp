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
uint FUN_8c24bdc8_def(ushort *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c24bdc8";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 88; for (int i_ = 0; i_ < 88; i_++) z_[i_] = 0; }
  ushort uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  double *pdVar5;
  code *pcVar6;
  double *pdVar7;
  int ain0;
  undefined1 *puVar8;
  undefined4 *puVar9;
  double *pdVar10;
  undefined1 *puVar11;
  double *ar6_00;
  double *unaff_r8 = 0;
  double *pdVar12;
  double *pdVar13;
  ushort *puVar14;
  ushort *puVar15;
  double in_dr0 = 0;
  double dVar16;
  float fVar17;
  float fVar18;
  uint uVar19;
  double dVar20;
  uint uVar21;
  double in_dr4 = 0;
  double dVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  float fVar25;
  undefined4 in_fr14 = 0;
  double in_xd2 = 0;
  double dVar26;
  bool bVar27;
  float in_PR = 0;
  char cVar28;
  char cVar29;
  
  cVar29 = '\0';
  cVar28 = '\0';
  uVar1 = *ar4;
  puVar14 = ((ushort *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 2));
  fVar25 = 0.5;
  uVar2 = uVar1 & 0xc000;
  (*(float *)(fr0_ - 0x20)) = in_PR;
  if ((uVar1 & 0xc000) == 0) {
    (*(undefined4 *)(unsigned)(unsigned)0x8c4aa51c) = (*(undefined4 *)(unsigned)(unsigned)0x8c4aa51c) + (uint)ar4[1] * 3;
    fVar25 = 0.33333;
    for ((*(int *)(fr0_ - 0x58)) = 0; uVar2 = (uint)ar4[1], (*(int *)(fr0_ - 0x58)) < (int)uVar2; (*(int *)(fr0_ - 0x58)) = (*(int *)(fr0_ - 0x58)) + 1) {
      pdVar7 = (double *)(unsigned)((uint)*puVar14 * 0x40 + (*(undefined4 *)(unsigned)(unsigned)0x8c4aa510));
      puVar15 = puVar14 + 2;
      pdVar5 = (double *)(unsigned)((uint)puVar14[1] * 0x40 + (*(undefined4 *)(unsigned)(unsigned)0x8c4aa510));
      puVar14 = puVar14 + 3;
      if (cVar29 == '\0') {
        dVar26 = CONCAT44D(*(undefined4 *)(unsigned)((int)pdVar5 + 4),SUB84(in_dr4,0));
      }
      else {
        dVar26 = *(double *)(unsigned)((int)pdVar5 + 4);
      }
      uVar23 = (undefined4)(D2U(dVar26) >> 0x20);
      dVar20 = dVar26;
      if (cVar29 == '\0') {
        dVar20 = CONCAT44D(uVar23,*(undefined4 *)(unsigned)((int)pdVar7 + 4));
      }
      if (cVar28 == '\0') {
        dVar20 = CONCAT44D(F32HI(dVar20) - F32LO(dVar20),
                                  SUB84(dVar20,0));
      }
      else {
        dVar20 = dVar20 - dVar20;
      }
      pdVar12 = (double *)(unsigned)((uint)*puVar15 * 0x40 + (*(undefined4 *)(unsigned)(unsigned)0x8c4aa510));
      if (cVar29 == '\0') {
        dVar26 = CONCAT44D(uVar23,*(undefined4 *)(unsigned)(pdVar5 + 1));
        dVar20 = CONCAT44D((int)(D2U(dVar20) >> 0x20),*(undefined4 *)(unsigned)(pdVar12 + 1));
      }
      fVar18 = F32LO(dVar26);
      if (cVar28 == '\0') {
        fVar17 = F32LO(dVar20) - fVar18;
        dVar20 = CONCAT44D(F32HI(dVar20) * fVar17,fVar17);
      }
      else {
        dVar20 = (dVar20 - dVar26) * (dVar20 - dVar26);
      }
      if (cVar29 == '\0') {
        dVar20 = CONCAT44D((int)(D2U(dVar20) >> 0x20),*(undefined4 *)(unsigned)(pdVar7 + 1));
        in_dr0 = CONCAT44D((int)((ulonglong)in_dr0 >> 0x20),fVar18);
      }
      if (cVar28 == '\0') {
        dVar16 = CONCAT44D((int)((ulonglong)in_dr0 >> 0x20),F32LO(in_dr0) - F32LO(dVar20)
                                 );
      }
      else {
        dVar16 = in_dr0 - dVar20;
      }
      if (cVar29 == '\0') {
        dVar20 = CONCAT44D((int)(D2U(dVar20) >> 0x20),*(undefined4 *)(unsigned)((int)pdVar12 + 4)
                                 );
      }
      (*(int *)(fr0_ - 0x4c)) = 0;
      if (cVar28 == '\0') {
        dVar20 = CONCAT44D((int)(D2U(dVar20) >> 0x20),
                                  F32LO(dVar20) - F32HI(dVar26));
      }
      else {
        dVar20 = dVar20 - dVar26;
      }
      uVar2 = (uint)(D2U(dVar20) >> 0x20);
      dVar26 = dVar20;
      if (cVar29 == '\0') {
        dVar26 = CONCAT44D(uVar2,fVar18);
      }
      if (cVar28 == '\0') {
        in_dr0 = CONCAT44D((int)(D2U(dVar16) >> 0x20),F32LO(dVar16) * F32LO(dVar20)
                                 );
      }
      else {
        in_dr0 = dVar16 * dVar20;
      }
      if (cVar28 == '\0') {
        fVar18 = F32HI(dVar26) - F32LO(in_dr0);
        in_dr4 = CONCAT44D(fVar18,SUB84(dVar26,0));
        bVar27 = 0.0 < fVar18;
      }
      else {
        in_dr4 = dVar26 - in_dr0;
        bVar27 = (double)((ulonglong)uVar2 << 0x20) < in_dr4;
      }
      if (bVar27) {
        if (((*(undefined4 *)(unsigned)(unsigned)0x8c4ab308) & 0x800000) != 0) {
          (*(int *)(fr0_ - 0x4c)) = 0x8000;
          goto LAB_8c24bee2;
        }
      }
      else {
LAB_8c24bee2:
        pdVar13 = pdVar5 + 2;
        puVar8 = ((undefined1 *)(fr0_ - 0x38));
        pdVar10 = pdVar12 + 2;
        (vsp = ((unsigned long)(fr0_ - 88)), FUN_8c2361a8(pdVar7 + 2,pdVar13,pdVar10,puVar8));
        uVar23 = SUB84(in_dr0,0);
        ({ unsigned long ri0_ = (unsigned long)(pdVar5); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 88)); FUN_8c25ce48(((undefined1 *)(fr0_ - 0x38)),pdVar13,pdVar10,puVar8); });
        if (cVar29 == '\0') {
          dVar26 = CONCAT44D(*(undefined4 *)(unsigned)(pdVar7 + 2),*(undefined4 *)(unsigned)(pdVar5 + 2));
        }
        else {
          dVar26 = pdVar7[2];
        }
        if (cVar28 == '\0') {
          dVar26 = CONCAT44D(F32HI(dVar26) + F32LO(dVar26),
                                    SUB84(dVar26,0));
        }
        else {
          dVar26 = dVar26 + dVar26;
        }
        if (cVar29 == '\0') {
          dVar26 = CONCAT44D((int)(D2U(dVar26) >> 0x20),*(undefined4 *)(unsigned)(pdVar12 + 2));
        }
        if (cVar28 == '\0') {
          dVar26 = CONCAT44D((F32HI(dVar26) + F32LO(dVar26)) * fVar25,
                                    SUB84(dVar26,0));
        }
        else {
          dVar26 = (dVar26 + dVar26) * CONCAT44D(in_fr14,fVar25);
        }
        if (cVar29 == '\0') {
          (*(undefined4 *)(fr0_ - 0x2c)) = (undefined4)(D2U(dVar26) >> 0x20);
          dVar26 = CONCAT44D(*(undefined4 *)(unsigned)((int)pdVar7 + 0x14),
                                    *(undefined4 *)(unsigned)((int)pdVar5 + 0x14));
        }
        else {
          (*(undefined4 *)(fr0_ - 0x2c)) = SUB84(dVar26,0);
          dVar26 = *(double *)(unsigned)((int)pdVar7 + 0x14);
        }
        if (cVar28 == '\0') {
          dVar26 = CONCAT44D(F32HI(dVar26) + F32LO(dVar26),
                                    SUB84(dVar26,0));
        }
        else {
          dVar26 = dVar26 + dVar26;
        }
        if (cVar29 == '\0') {
          dVar26 = CONCAT44D((int)(D2U(dVar26) >> 0x20),
                                    *(undefined4 *)(unsigned)((int)pdVar12 + 0x14));
        }
        if (cVar28 == '\0') {
          dVar26 = CONCAT44D((F32HI(dVar26) + F32LO(dVar26)) * fVar25,
                                    SUB84(dVar26,0));
        }
        else {
          dVar26 = (dVar26 + dVar26) * CONCAT44D(in_fr14,fVar25);
        }
        if (cVar29 == '\0') {
          (*(undefined4 *)(fr0_ - 0x28)) = (undefined4)(D2U(dVar26) >> 0x20);
          dVar26 = CONCAT44D(*(undefined4 *)(unsigned)(pdVar7 + 3),*(undefined4 *)(unsigned)(pdVar5 + 3));
        }
        else {
          (*(undefined4 *)(fr0_ - 0x28)) = SUB84(dVar26,0);
          dVar26 = pdVar7[3];
        }
        if (cVar28 == '\0') {
          dVar26 = CONCAT44D(F32HI(dVar26) + F32LO(dVar26),
                                    SUB84(dVar26,0));
        }
        else {
          dVar26 = dVar26 + dVar26;
        }
        if (cVar29 == '\0') {
          dVar26 = CONCAT44D((int)(D2U(dVar26) >> 0x20),*(undefined4 *)(unsigned)(pdVar12 + 3));
        }
        if (cVar28 == '\0') {
          dVar26 = CONCAT44D((F32HI(dVar26) + F32LO(dVar26)) * fVar25,
                                    SUB84(dVar26,0));
        }
        else {
          dVar26 = (dVar26 + dVar26) * CONCAT44D(in_fr14,fVar25);
        }
        fVar18 = F32HI(dVar26);
        (*(float *)(fr0_ - 0x24)) = fVar18;
        if (cVar29 != '\0') {
          (*(float *)(fr0_ - 0x24)) = SUB84(dVar26,0);
          (*(float *)(fr0_ - 0x20)) = fVar18;
        }
        puVar8 = ((undefined1 *)(unsigned)0x8c4c2620);
        puVar11 = ((undefined1 *)(fr0_ - 0x38));
        puVar9 = &(*(undefined4 *)(fr0_ - 0x2c));
        (vsp = ((unsigned long)(fr0_ - 88)), FUN_8c23bae2(((undefined1 *)(unsigned)0x8c4c2620),puVar9,puVar11,(*(int *)(fr0_ - 0x4c))));
        (vsp = ((unsigned long)(fr0_ - 88)), float_to_color_u8(puVar8,puVar9,puVar11,(*(int *)(fr0_ - 0x4c))));
        uVar2 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c2630);
        if (cVar29 == '\0') {
          uVar2 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c2634);
        }
        (vsp = ((unsigned long)(fr0_ - 88)), float_to_color_u8(puVar8,puVar9,puVar11,(*(int *)(fr0_ - 0x4c))));
        if (cVar29 == '\0') {
          dVar26 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4c2624),(*(undefined4 *)(unsigned)(unsigned)0x8c4c2634));
        }
        else {
          dVar26 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4c2628),(*(undefined4 *)(unsigned)(unsigned)0x8c4c2624));
        }
        if (cVar28 == '\0') {
          dVar26 = CONCAT44D(F32HI(dVar26) + F32LO(dVar26),
                                    SUB84(dVar26,0));
        }
        else {
          dVar26 = dVar26 + dVar26;
        }
        uVar24 = (undefined4)(D2U(dVar26) >> 0x20);
        if (cVar29 == '\0') {
          dVar26 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4c2628),(*(undefined4 *)(unsigned)(unsigned)0x8c4c2638));
          (*(undefined4 *)(unsigned)(unsigned)0x8c4c2624) = uVar24;
        }
        else {
          (*(undefined4 *)(unsigned)(unsigned)0x8c4c2624) = SUB84(dVar26,0);
          dVar26 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4c262c),uVar24);
        }
        if (cVar28 == '\0') {
          dVar26 = CONCAT44D(F32HI(dVar26) + F32LO(dVar26),
                                    SUB84(dVar26,0));
        }
        else {
          dVar26 = dVar26 + dVar26;
        }
        uVar24 = (undefined4)(D2U(dVar26) >> 0x20);
        if (cVar29 == '\0') {
          dVar26 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4c262c),(*(undefined4 *)(unsigned)(unsigned)0x8c4c263c));
          (*(undefined4 *)(unsigned)(unsigned)0x8c4c2628) = uVar24;
        }
        else {
          (*(undefined4 *)(unsigned)(unsigned)0x8c4c2628) = SUB84(dVar26,0);
          dVar26 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4c2630),uVar24);
        }
        if (cVar28 == '\0') {
          dVar26 = CONCAT44D(F32HI(dVar26) + F32LO(dVar26),
                                    SUB84(dVar26,0));
        }
        else {
          dVar26 = dVar26 + dVar26;
        }
        uVar21 = (uint)(D2U(dVar26) >> 0x20);
        if (cVar29 == '\0') {
          (*(undefined4 *)(unsigned)(unsigned)0x8c4c262c) = uVar21;
          *(uint *)(unsigned)(pdVar7 + 4) = (*(undefined4 *)(unsigned)(unsigned)0x8c4c2620);
          *(undefined4 *)(unsigned)((int)pdVar7 + 0x24) = (*(undefined4 *)(unsigned)(unsigned)0x8c4c2624);
          *(undefined4 *)(unsigned)(pdVar7 + 5) = (*(undefined4 *)(unsigned)(unsigned)0x8c4c2628);
          uVar19 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c262c);
          *(uint *)(unsigned)((int)pdVar7 + 0x2c) = (*(undefined4 *)(unsigned)(unsigned)0x8c4c262c);
        }
        else {
          (*(undefined4 *)(unsigned)(unsigned)0x8c4c262c) = SUB84(dVar26,0);
          uVar19 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c262c);
          (*(undefined4 *)(unsigned)(unsigned)0x8c4c2630) = uVar21;
          pdVar7[4] = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4c2624),(*(undefined4 *)(unsigned)(unsigned)0x8c4c2620));
          *(ulonglong *)(unsigned)((int)pdVar7 + 0x24) = CONCAT44((*(undefined4 *)(unsigned)(unsigned)0x8c4c2628),(*(undefined4 *)(unsigned)(unsigned)0x8c4c2624));
          pdVar7[5] = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4c262c),(*(undefined4 *)(unsigned)(unsigned)0x8c4c2628));
          *(ulonglong *)(unsigned)((int)pdVar7 + 0x2c) = CONCAT44((*(undefined4 *)(unsigned)(unsigned)0x8c4c2630),(*(undefined4 *)(unsigned)(unsigned)0x8c4c262c));
        }
        *(undefined4 *)(unsigned)pdVar7 = 0xe0000000;
        if (cVar29 == '\0') {
          dVar26 = CONCAT44D(*(undefined4 *)(unsigned)pdVar7,uVar23);
          dVar20 = CONCAT44D(*(undefined4 *)(unsigned)((int)pdVar7 + 4),uVar19);
          pdVar7 = pdVar7 + 1;
        }
        else {
          dVar26 = *pdVar7;
          dVar20 = pdVar7[1];
          pdVar7 = pdVar7 + 2;
        }
        if (cVar29 == '\0') {
          uVar23 = *(undefined4 *)(unsigned)(pdVar7 + 2);
          dVar16 = CONCAT44D(uVar23,uVar2);
          *(undefined4 *)(unsigned)((int)unaff_r8 + 0x1c) = *(undefined4 *)(unsigned)((int)pdVar7 + 0x14);
          *(undefined4 *)(unsigned)(unaff_r8 + 3) = uVar23;
          *(int *)(unsigned)((int)unaff_r8 + 0x14) = (int)(D2U(dVar20) >> 0x20);
          unaff_r8 = unaff_r8 + 2;
          *(int *)(unsigned)unaff_r8 = (int)(D2U(dVar26) >> 0x20);
          *(uint *)(unsigned)(pdVar5 + 4) = (*(undefined4 *)(unsigned)(unsigned)0x8c4c2620);
          *(undefined4 *)(unsigned)((int)pdVar5 + 0x24) = (*(undefined4 *)(unsigned)(unsigned)0x8c4c2624);
          *(undefined4 *)(unsigned)(pdVar5 + 5) = (*(undefined4 *)(unsigned)(unsigned)0x8c4c2628);
          uVar2 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c262c);
          *(uint *)(unsigned)((int)pdVar5 + 0x2c) = (*(undefined4 *)(unsigned)(unsigned)0x8c4c262c);
        }
        else {
          dVar16 = pdVar7[2];
          unaff_r8[3] = pdVar7[3];
          unaff_r8[2] = dVar16;
          unaff_r8[1] = dVar20;
          *unaff_r8 = dVar26;
          uVar2 = SUB84(dVar20,0);
          pdVar5[4] = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4c2624),(*(undefined4 *)(unsigned)(unsigned)0x8c4c2620));
          *(ulonglong *)(unsigned)((int)pdVar5 + 0x24) = CONCAT44((*(undefined4 *)(unsigned)(unsigned)0x8c4c2628),(*(undefined4 *)(unsigned)(unsigned)0x8c4c2624));
          pdVar5[5] = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4c262c),(*(undefined4 *)(unsigned)(unsigned)0x8c4c2628));
          *(ulonglong *)(unsigned)((int)pdVar5 + 0x2c) = CONCAT44((*(undefined4 *)(unsigned)(unsigned)0x8c4c2630),(*(undefined4 *)(unsigned)(unsigned)0x8c4c262c));
        }
        *(undefined4 *)(unsigned)pdVar5 = 0xe0000000;
        if (cVar29 == '\0') {
          dVar26 = CONCAT44D(*(undefined4 *)(unsigned)pdVar5,SUB84(dVar26,0));
          dVar20 = CONCAT44D(*(undefined4 *)(unsigned)((int)pdVar5 + 4),uVar2);
          pdVar5 = pdVar5 + 1;
        }
        else {
          dVar26 = *pdVar5;
          dVar20 = pdVar5[1];
          pdVar5 = pdVar5 + 2;
        }
        if (cVar29 == '\0') {
          uVar23 = *(undefined4 *)(unsigned)(pdVar5 + 2);
          dVar16 = CONCAT44D(uVar23,SUB84(dVar16,0));
          *(undefined4 *)(unsigned)((int)unaff_r8 + 0x3c) = *(undefined4 *)(unsigned)((int)pdVar5 + 0x14);
          *(undefined4 *)(unsigned)(unaff_r8 + 7) = uVar23;
          *(int *)(unsigned)((int)unaff_r8 + 0x34) = (int)(D2U(dVar20) >> 0x20);
          pdVar5 = unaff_r8 + 6;
          *(int *)(unsigned)pdVar5 = (int)(D2U(dVar26) >> 0x20);
          *(uint *)(unsigned)(pdVar12 + 4) = (*(undefined4 *)(unsigned)(unsigned)0x8c4c2620);
          *(undefined4 *)(unsigned)((int)pdVar12 + 0x24) = (*(undefined4 *)(unsigned)(unsigned)0x8c4c2624);
          *(undefined4 *)(unsigned)(pdVar12 + 5) = (*(undefined4 *)(unsigned)(unsigned)0x8c4c2628);
          uVar2 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c262c);
          *(uint *)(unsigned)((int)pdVar12 + 0x2c) = (*(undefined4 *)(unsigned)(unsigned)0x8c4c262c);
        }
        else {
          dVar16 = pdVar5[2];
          unaff_r8[7] = pdVar5[3];
          unaff_r8[6] = dVar16;
          unaff_r8[5] = dVar20;
          pdVar5 = unaff_r8 + 4;
          *pdVar5 = dVar26;
          uVar2 = SUB84(dVar20,0);
          pdVar12[4] = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4c2624),(*(undefined4 *)(unsigned)(unsigned)0x8c4c2620));
          *(ulonglong *)(unsigned)((int)pdVar12 + 0x24) = CONCAT44((*(undefined4 *)(unsigned)(unsigned)0x8c4c2628),(*(undefined4 *)(unsigned)(unsigned)0x8c4c2624));
          pdVar12[5] = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4c262c),(*(undefined4 *)(unsigned)(unsigned)0x8c4c2628));
          *(ulonglong *)(unsigned)((int)pdVar12 + 0x2c) = CONCAT44((*(undefined4 *)(unsigned)(unsigned)0x8c4c2630),(*(undefined4 *)(unsigned)(unsigned)0x8c4c262c));
        }
        *(undefined4 *)(unsigned)pdVar12 = 0xf0000000;
        if (cVar29 == '\0') {
          in_dr0 = CONCAT44D(*(undefined4 *)(unsigned)pdVar12,SUB84(dVar26,0));
          dVar26 = CONCAT44D(*(undefined4 *)(unsigned)((int)pdVar12 + 4),uVar2);
          pdVar12 = pdVar12 + 1;
        }
        else {
          in_dr0 = *pdVar12;
          dVar26 = pdVar12[1];
          pdVar12 = pdVar12 + 2;
        }
        if (cVar29 == '\0') {
          uVar23 = *(undefined4 *)(unsigned)(pdVar12 + 2);
          in_dr4 = CONCAT44D(uVar23,SUB84(dVar16,0));
          *(undefined4 *)(unsigned)((int)pdVar5 + 0x3c) = *(undefined4 *)(unsigned)((int)pdVar12 + 0x14);
          *(undefined4 *)(unsigned)(pdVar5 + 7) = uVar23;
          *(int *)(unsigned)((int)pdVar5 + 0x34) = (int)(D2U(dVar26) >> 0x20);
          pdVar5 = pdVar5 + 6;
          *(int *)(unsigned)pdVar5 = (int)((ulonglong)in_dr0 >> 0x20);
        }
        else {
          in_dr4 = pdVar12[2];
          pdVar5[7] = pdVar12[3];
          pdVar5[6] = in_dr4;
          pdVar5[5] = dVar26;
          pdVar5 = pdVar5 + 4;
          *pdVar5 = in_dr0;
        }
        unaff_r8 = pdVar5 + 4;
        (*(undefined4 *)(unsigned)(unsigned)0x8c4aa520) = (*(undefined4 *)(unsigned)(unsigned)0x8c4aa520) + 3;
      }
    }
  }
  else if (uVar2 == 0x4000) {
    (*(undefined4 *)(unsigned)(unsigned)0x8c4aa51c) = (*(undefined4 *)(unsigned)(unsigned)0x8c4aa51c) + (uint)ar4[1] * 4;
    for ((*(int *)(fr0_ - 0x4c)) = 0; uVar2 = (uint)ar4[1], (*(int *)(fr0_ - 0x4c)) < (int)uVar2; (*(int *)(fr0_ - 0x4c)) = (*(int *)(fr0_ - 0x4c)) + 1) {
      pdVar7 = (double *)(unsigned)((uint)*puVar14 * 0x40 + (*(undefined4 *)(unsigned)(unsigned)0x8c4aa510));
      puVar15 = puVar14 + 3;
      pdVar12 = (double *)(unsigned)((uint)puVar14[1] * 0x40 + (*(undefined4 *)(unsigned)(unsigned)0x8c4aa510));
      pdVar13 = (double *)(unsigned)((uint)puVar14[2] * 0x40 + (*(undefined4 *)(unsigned)(unsigned)0x8c4aa510));
      puVar14 = puVar14 + 4;
      pdVar5 = (double *)(unsigned)((uint)*puVar15 * 0x40 + (*(undefined4 *)(unsigned)(unsigned)0x8c4aa510));
      if (cVar29 == '\0') {
        pdVar10 = (double *)(unsigned)((int)pdVar12 + 4);
        dVar26 = CONCAT44D(*(undefined4 *)(unsigned)pdVar10,*(undefined4 *)(unsigned)((int)pdVar7 + 4));
      }
      else {
        dVar26 = *(double *)(unsigned)((int)pdVar12 + 4);
        pdVar10 = pdVar12 + 1;
      }
      dVar20 = *pdVar10;
      if (cVar28 == '\0') {
        dVar26 = CONCAT44D(F32HI(dVar26) - F32LO(dVar26),
                                  SUB84(dVar26,0));
      }
      else {
        dVar26 = dVar26 - dVar26;
      }
      fVar18 = F32HI(dVar20);
      if (cVar29 == '\0') {
        dVar26 = CONCAT44D((int)(D2U(dVar26) >> 0x20),*(undefined4 *)(unsigned)(pdVar13 + 1));
        in_dr0 = CONCAT44D((int)((ulonglong)in_dr0 >> 0x20),fVar18);
      }
      if (cVar28 == '\0') {
        fVar18 = F32LO(dVar26) - fVar18;
        dVar26 = CONCAT44D(F32HI(dVar26) * fVar18,fVar18);
      }
      else {
        dVar26 = (dVar26 - dVar20) * (dVar26 - dVar20);
      }
      if (cVar29 == '\0') {
        dVar26 = CONCAT44D((int)(D2U(dVar26) >> 0x20),*(undefined4 *)(unsigned)(pdVar7 + 1));
      }
      if (cVar28 == '\0') {
        dVar16 = CONCAT44D((int)((ulonglong)in_dr0 >> 0x20),F32LO(in_dr0) - F32LO(dVar26)
                                 );
      }
      else {
        dVar16 = in_dr0 - dVar26;
      }
      if (cVar29 == '\0') {
        dVar26 = CONCAT44D((int)(D2U(dVar26) >> 0x20),*(undefined4 *)(unsigned)((int)pdVar13 + 4)
                                 );
      }
      if (cVar28 == '\0') {
        dVar26 = CONCAT44D((int)(D2U(dVar26) >> 0x20),F32LO(dVar26) - F32LO(dVar20)
                                 );
      }
      else {
        dVar26 = dVar26 - dVar20;
      }
      uVar2 = (uint)(D2U(dVar26) >> 0x20);
      dVar22 = dVar26;
      if (cVar29 == '\0') {
        dVar22 = CONCAT44D(uVar2,SUB84(dVar20,0));
      }
      (*(int *)(fr0_ - 0x50)) = 0;
      if (cVar28 == '\0') {
        in_dr0 = CONCAT44D((int)(D2U(dVar16) >> 0x20),F32LO(dVar16) * F32LO(dVar26)
                                 );
      }
      else {
        in_dr0 = dVar16 * dVar26;
      }
      if (cVar28 == '\0') {
        bVar27 = 0.0 < F32HI(dVar22) - F32LO(in_dr0);
      }
      else {
        bVar27 = (double)((ulonglong)uVar2 << 0x20) < dVar22 - in_dr0;
      }
      if (bVar27) {
        if (((*(undefined4 *)(unsigned)(unsigned)0x8c4ab308) & 0x800000) != 0) {
          (*(int *)(fr0_ - 0x50)) = 0x8000;
          goto LAB_8c24c160;
        }
      }
      else {
LAB_8c24c160:
        pdVar10 = pdVar12 + 2;
        puVar8 = ((undefined1 *)(fr0_ - 0x38));
        ar6_00 = pdVar13 + 2;
        (vsp = ((unsigned long)(fr0_ - 88)), FUN_8c2361a8(pdVar7 + 2,pdVar10,ar6_00,puVar8));
        uVar23 = SUB84(in_dr0,0);
        ({ unsigned long ri0_ = (unsigned long)(pdVar7); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 88)); FUN_8c25ce48(((undefined1 *)(fr0_ - 0x38)),pdVar10,ar6_00,puVar8); });
        if (cVar29 == '\0') {
          dVar26 = CONCAT44D(*(undefined4 *)(unsigned)(pdVar12 + 2),*(undefined4 *)(unsigned)(pdVar13 + 2));
        }
        else {
          dVar26 = pdVar12[2];
        }
        puVar8 = ((undefined1 *)(unsigned)0x8c4c2620);
        puVar11 = ((undefined1 *)(fr0_ - 0x38));
        if (cVar28 == '\0') {
          dVar26 = CONCAT44D((F32HI(dVar26) + F32LO(dVar26)) * fVar25,
                                    SUB84(dVar26,0));
        }
        else {
          dVar26 = (dVar26 + dVar26) * CONCAT44D(in_fr14,fVar25);
        }
        if (cVar29 == '\0') {
          (*(undefined4 *)(fr0_ - 0x2c)) = (undefined4)(D2U(dVar26) >> 0x20);
          dVar26 = CONCAT44D(*(undefined4 *)(unsigned)((int)pdVar12 + 0x14),
                                    *(undefined4 *)(unsigned)((int)pdVar13 + 0x14));
        }
        else {
          (*(undefined4 *)(fr0_ - 0x2c)) = SUB84(dVar26,0);
          dVar26 = *(double *)(unsigned)((int)pdVar12 + 0x14);
        }
        if (cVar28 == '\0') {
          dVar26 = CONCAT44D((F32HI(dVar26) + F32LO(dVar26)) * fVar25,
                                    SUB84(dVar26,0));
        }
        else {
          dVar26 = (dVar26 + dVar26) * CONCAT44D(in_fr14,fVar25);
        }
        if (cVar29 == '\0') {
          (*(undefined4 *)(fr0_ - 0x28)) = (undefined4)(D2U(dVar26) >> 0x20);
          dVar26 = CONCAT44D(*(undefined4 *)(unsigned)(pdVar12 + 3),*(undefined4 *)(unsigned)(pdVar13 + 3));
        }
        else {
          (*(undefined4 *)(fr0_ - 0x28)) = SUB84(dVar26,0);
          dVar26 = pdVar12[3];
        }
        if (cVar28 == '\0') {
          dVar26 = CONCAT44D((F32HI(dVar26) + F32LO(dVar26)) * fVar25,
                                    SUB84(dVar26,0));
        }
        else {
          dVar26 = (dVar26 + dVar26) * CONCAT44D(in_fr14,fVar25);
        }
        fVar18 = F32HI(dVar26);
        (*(float *)(fr0_ - 0x24)) = fVar18;
        if (cVar29 != '\0') {
          (*(float *)(fr0_ - 0x24)) = SUB84(dVar26,0);
          (*(float *)(fr0_ - 0x20)) = fVar18;
        }
        puVar9 = &(*(undefined4 *)(fr0_ - 0x2c));
        (vsp = ((unsigned long)(fr0_ - 88)), FUN_8c23bae2(((undefined1 *)(unsigned)0x8c4c2620),puVar9,puVar11,(*(int *)(fr0_ - 0x50))));
        (vsp = ((unsigned long)(fr0_ - 88)), float_to_color_u8(puVar8,puVar9,puVar11,(*(int *)(fr0_ - 0x50))));
        (vsp = ((unsigned long)(fr0_ - 88)), float_to_color_u8(puVar8,puVar9,puVar11,(*(int *)(fr0_ - 0x50))));
        if (cVar29 == '\0') {
          dVar26 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4c2624),(*(undefined4 *)(unsigned)(unsigned)0x8c4c2634));
        }
        else {
          dVar26 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4c2628),(*(undefined4 *)(unsigned)(unsigned)0x8c4c2624));
        }
        if (cVar28 == '\0') {
          dVar26 = CONCAT44D(F32HI(dVar26) + F32LO(dVar26),
                                    SUB84(dVar26,0));
        }
        else {
          dVar26 = dVar26 + dVar26;
        }
        uVar24 = (undefined4)(D2U(dVar26) >> 0x20);
        if (cVar29 == '\0') {
          dVar26 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4c2628),(*(undefined4 *)(unsigned)(unsigned)0x8c4c2638));
          (*(undefined4 *)(unsigned)(unsigned)0x8c4c2624) = uVar24;
        }
        else {
          (*(undefined4 *)(unsigned)(unsigned)0x8c4c2624) = SUB84(dVar26,0);
          dVar26 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4c262c),uVar24);
        }
        if (cVar28 == '\0') {
          dVar26 = CONCAT44D(F32HI(dVar26) + F32LO(dVar26),
                                    SUB84(dVar26,0));
        }
        else {
          dVar26 = dVar26 + dVar26;
        }
        uVar24 = (undefined4)(D2U(dVar26) >> 0x20);
        if (cVar29 == '\0') {
          dVar26 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4c262c),(*(undefined4 *)(unsigned)(unsigned)0x8c4c263c));
          (*(undefined4 *)(unsigned)(unsigned)0x8c4c2628) = uVar24;
        }
        else {
          (*(undefined4 *)(unsigned)(unsigned)0x8c4c2628) = SUB84(dVar26,0);
          dVar26 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4c2630),uVar24);
        }
        if (cVar28 == '\0') {
          dVar26 = CONCAT44D(F32HI(dVar26) + F32LO(dVar26),
                                    SUB84(dVar26,0));
        }
        else {
          dVar26 = dVar26 + dVar26;
        }
        uVar2 = (uint)(D2U(dVar26) >> 0x20);
        if (cVar29 == '\0') {
          (*(undefined4 *)(unsigned)(unsigned)0x8c4c262c) = uVar2;
          *(uint *)(unsigned)(pdVar7 + 4) = (*(undefined4 *)(unsigned)(unsigned)0x8c4c2620);
          *(undefined4 *)(unsigned)((int)pdVar7 + 0x24) = (*(undefined4 *)(unsigned)(unsigned)0x8c4c2624);
          *(undefined4 *)(unsigned)(pdVar7 + 5) = (*(undefined4 *)(unsigned)(unsigned)0x8c4c2628);
          uVar21 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c262c);
          *(uint *)(unsigned)((int)pdVar7 + 0x2c) = (*(undefined4 *)(unsigned)(unsigned)0x8c4c262c);
        }
        else {
          (*(undefined4 *)(unsigned)(unsigned)0x8c4c262c) = SUB84(dVar26,0);
          uVar21 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c262c);
          (*(undefined4 *)(unsigned)(unsigned)0x8c4c2630) = uVar2;
          pdVar7[4] = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4c2624),(*(undefined4 *)(unsigned)(unsigned)0x8c4c2620));
          *(ulonglong *)(unsigned)((int)pdVar7 + 0x24) = CONCAT44((*(undefined4 *)(unsigned)(unsigned)0x8c4c2628),(*(undefined4 *)(unsigned)(unsigned)0x8c4c2624));
          pdVar7[5] = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4c262c),(*(undefined4 *)(unsigned)(unsigned)0x8c4c2628));
          *(ulonglong *)(unsigned)((int)pdVar7 + 0x2c) = CONCAT44((*(undefined4 *)(unsigned)(unsigned)0x8c4c2630),(*(undefined4 *)(unsigned)(unsigned)0x8c4c262c));
        }
        *(undefined4 *)(unsigned)pdVar7 = 0xe0000000;
        if (cVar29 == '\0') {
          dVar26 = CONCAT44D(*(undefined4 *)(unsigned)pdVar7,uVar23);
          dVar20 = CONCAT44D(*(undefined4 *)(unsigned)((int)pdVar7 + 4),uVar21);
          pdVar7 = pdVar7 + 1;
        }
        else {
          dVar26 = *pdVar7;
          dVar20 = pdVar7[1];
          pdVar7 = pdVar7 + 2;
        }
        if (cVar29 == '\0') {
          uVar23 = *(undefined4 *)(unsigned)(pdVar7 + 2);
          *(undefined4 *)(unsigned)((int)unaff_r8 + 0x1c) = *(undefined4 *)(unsigned)((int)pdVar7 + 0x14);
          *(undefined4 *)(unsigned)(unaff_r8 + 3) = uVar23;
          *(int *)(unsigned)((int)unaff_r8 + 0x14) = (int)(D2U(dVar20) >> 0x20);
          unaff_r8 = unaff_r8 + 2;
          *(int *)(unsigned)unaff_r8 = (int)(D2U(dVar26) >> 0x20);
          *(uint *)(unsigned)(pdVar12 + 4) = (*(undefined4 *)(unsigned)(unsigned)0x8c4c2620);
          *(undefined4 *)(unsigned)((int)pdVar12 + 0x24) = (*(undefined4 *)(unsigned)(unsigned)0x8c4c2624);
          *(undefined4 *)(unsigned)(pdVar12 + 5) = (*(undefined4 *)(unsigned)(unsigned)0x8c4c2628);
          uVar2 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c262c);
          *(uint *)(unsigned)((int)pdVar12 + 0x2c) = (*(undefined4 *)(unsigned)(unsigned)0x8c4c262c);
        }
        else {
          dVar16 = pdVar7[2];
          unaff_r8[3] = pdVar7[3];
          unaff_r8[2] = dVar16;
          unaff_r8[1] = dVar20;
          *unaff_r8 = dVar26;
          uVar2 = SUB84(dVar20,0);
          pdVar12[4] = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4c2624),(*(undefined4 *)(unsigned)(unsigned)0x8c4c2620));
          *(ulonglong *)(unsigned)((int)pdVar12 + 0x24) = CONCAT44((*(undefined4 *)(unsigned)(unsigned)0x8c4c2628),(*(undefined4 *)(unsigned)(unsigned)0x8c4c2624));
          pdVar12[5] = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4c262c),(*(undefined4 *)(unsigned)(unsigned)0x8c4c2628));
          *(ulonglong *)(unsigned)((int)pdVar12 + 0x2c) = CONCAT44((*(undefined4 *)(unsigned)(unsigned)0x8c4c2630),(*(undefined4 *)(unsigned)(unsigned)0x8c4c262c));
        }
        *(undefined4 *)(unsigned)pdVar12 = 0xe0000000;
        if (cVar29 == '\0') {
          dVar26 = CONCAT44D(*(undefined4 *)(unsigned)pdVar12,SUB84(dVar26,0));
          dVar20 = CONCAT44D(*(undefined4 *)(unsigned)((int)pdVar12 + 4),uVar2);
          pdVar12 = pdVar12 + 1;
        }
        else {
          dVar26 = *pdVar12;
          dVar20 = pdVar12[1];
          pdVar12 = pdVar12 + 2;
        }
        if (cVar29 == '\0') {
          uVar23 = *(undefined4 *)(unsigned)(pdVar12 + 2);
          *(undefined4 *)(unsigned)((int)unaff_r8 + 0x3c) = *(undefined4 *)(unsigned)((int)pdVar12 + 0x14);
          *(undefined4 *)(unsigned)(unaff_r8 + 7) = uVar23;
          *(int *)(unsigned)((int)unaff_r8 + 0x34) = (int)(D2U(dVar20) >> 0x20);
          pdVar7 = unaff_r8 + 6;
          *(int *)(unsigned)pdVar7 = (int)(D2U(dVar26) >> 0x20);
          *(uint *)(unsigned)(pdVar13 + 4) = (*(undefined4 *)(unsigned)(unsigned)0x8c4c2620);
          *(undefined4 *)(unsigned)((int)pdVar13 + 0x24) = (*(undefined4 *)(unsigned)(unsigned)0x8c4c2624);
          *(undefined4 *)(unsigned)(pdVar13 + 5) = (*(undefined4 *)(unsigned)(unsigned)0x8c4c2628);
          uVar2 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c262c);
          *(uint *)(unsigned)((int)pdVar13 + 0x2c) = (*(undefined4 *)(unsigned)(unsigned)0x8c4c262c);
        }
        else {
          dVar16 = pdVar12[2];
          unaff_r8[7] = pdVar12[3];
          unaff_r8[6] = dVar16;
          unaff_r8[5] = dVar20;
          pdVar7 = unaff_r8 + 4;
          *pdVar7 = dVar26;
          uVar2 = SUB84(dVar20,0);
          pdVar13[4] = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4c2624),(*(undefined4 *)(unsigned)(unsigned)0x8c4c2620));
          *(ulonglong *)(unsigned)((int)pdVar13 + 0x24) = CONCAT44((*(undefined4 *)(unsigned)(unsigned)0x8c4c2628),(*(undefined4 *)(unsigned)(unsigned)0x8c4c2624));
          pdVar13[5] = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4c262c),(*(undefined4 *)(unsigned)(unsigned)0x8c4c2628));
          *(ulonglong *)(unsigned)((int)pdVar13 + 0x2c) = CONCAT44((*(undefined4 *)(unsigned)(unsigned)0x8c4c2630),(*(undefined4 *)(unsigned)(unsigned)0x8c4c262c));
        }
        *(undefined4 *)(unsigned)pdVar13 = 0xe0000000;
        if (cVar29 == '\0') {
          dVar26 = CONCAT44D(*(undefined4 *)(unsigned)pdVar13,SUB84(dVar26,0));
          dVar20 = CONCAT44D(*(undefined4 *)(unsigned)((int)pdVar13 + 4),uVar2);
          pdVar13 = pdVar13 + 1;
        }
        else {
          dVar26 = *pdVar13;
          dVar20 = pdVar13[1];
          pdVar13 = pdVar13 + 2;
        }
        if (cVar29 == '\0') {
          uVar23 = *(undefined4 *)(unsigned)(pdVar13 + 2);
          *(undefined4 *)(unsigned)((int)pdVar7 + 0x3c) = *(undefined4 *)(unsigned)((int)pdVar13 + 0x14);
          *(undefined4 *)(unsigned)(pdVar7 + 7) = uVar23;
          *(int *)(unsigned)((int)pdVar7 + 0x34) = (int)(D2U(dVar20) >> 0x20);
          pdVar7 = pdVar7 + 6;
          *(int *)(unsigned)pdVar7 = (int)(D2U(dVar26) >> 0x20);
          *(uint *)(unsigned)(pdVar5 + 4) = (*(undefined4 *)(unsigned)(unsigned)0x8c4c2620);
          *(undefined4 *)(unsigned)((int)pdVar5 + 0x24) = (*(undefined4 *)(unsigned)(unsigned)0x8c4c2624);
          *(undefined4 *)(unsigned)(pdVar5 + 5) = (*(undefined4 *)(unsigned)(unsigned)0x8c4c2628);
          uVar2 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c262c);
          *(uint *)(unsigned)((int)pdVar5 + 0x2c) = (*(undefined4 *)(unsigned)(unsigned)0x8c4c262c);
        }
        else {
          dVar16 = pdVar13[2];
          pdVar7[7] = pdVar13[3];
          pdVar7[6] = dVar16;
          pdVar7[5] = dVar20;
          pdVar7 = pdVar7 + 4;
          *pdVar7 = dVar26;
          uVar2 = SUB84(dVar20,0);
          pdVar5[4] = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4c2624),(*(undefined4 *)(unsigned)(unsigned)0x8c4c2620));
          *(ulonglong *)(unsigned)((int)pdVar5 + 0x24) = CONCAT44((*(undefined4 *)(unsigned)(unsigned)0x8c4c2628),(*(undefined4 *)(unsigned)(unsigned)0x8c4c2624));
          pdVar5[5] = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4c262c),(*(undefined4 *)(unsigned)(unsigned)0x8c4c2628));
          *(ulonglong *)(unsigned)((int)pdVar5 + 0x2c) = CONCAT44((*(undefined4 *)(unsigned)(unsigned)0x8c4c2630),(*(undefined4 *)(unsigned)(unsigned)0x8c4c262c));
        }
        *(undefined4 *)(unsigned)pdVar5 = 0xf0000000;
        if (cVar29 == '\0') {
          in_dr0 = CONCAT44D(*(undefined4 *)(unsigned)pdVar5,SUB84(dVar26,0));
          dVar26 = CONCAT44D(*(undefined4 *)(unsigned)((int)pdVar5 + 4),uVar2);
          pdVar5 = pdVar5 + 1;
        }
        else {
          in_dr0 = *pdVar5;
          dVar26 = pdVar5[1];
          pdVar5 = pdVar5 + 2;
        }
        if (cVar29 == '\0') {
          uVar23 = *(undefined4 *)(unsigned)(pdVar5 + 2);
          *(undefined4 *)(unsigned)((int)pdVar7 + 0x3c) = *(undefined4 *)(unsigned)((int)pdVar5 + 0x14);
          *(undefined4 *)(unsigned)(pdVar7 + 7) = uVar23;
          *(int *)(unsigned)((int)pdVar7 + 0x34) = (int)(D2U(dVar26) >> 0x20);
          pdVar7 = pdVar7 + 6;
          *(int *)(unsigned)pdVar7 = (int)((ulonglong)in_dr0 >> 0x20);
        }
        else {
          dVar20 = pdVar5[2];
          pdVar7[7] = pdVar5[3];
          pdVar7[6] = dVar20;
          pdVar7[5] = dVar26;
          pdVar7 = pdVar7 + 4;
          *pdVar7 = in_dr0;
        }
        unaff_r8 = pdVar7 + 4;
        (*(undefined4 *)(unsigned)(unsigned)0x8c4aa520) = (*(undefined4 *)(unsigned)(unsigned)0x8c4aa520) + 4;
      }
    }
  }
  else if (uVar2 == 0x8000) {
    for ((*(int *)(fr0_ - 0x50)) = 0; uVar2 = (uint)ar4[1], (*(int *)(fr0_ - 0x50)) < (int)uVar2; (*(int *)(fr0_ - 0x50)) = (*(int *)(fr0_ - 0x50)) + 1) {
      puVar15 = puVar14 + 1;
      uVar2 = (uint)*puVar14;
      (*(undefined4 *)(unsigned)(unsigned)0x8c4aa51c) = (*(undefined4 *)(unsigned)(unsigned)0x8c4aa51c) + uVar2;
      ain0 = (uint)*puVar15 * 0x40 + (*(undefined4 *)(unsigned)(unsigned)0x8c4aa510);
      iVar3 = (uint)puVar14[2] * 0x40 + (*(undefined4 *)(unsigned)(unsigned)0x8c4aa510);
      iVar4 = (uint)puVar14[3] * 0x40 + (*(undefined4 *)(unsigned)(unsigned)0x8c4aa510);
      if (cVar29 == '\0') {
        uVar23 = *(undefined4 *)(unsigned)(iVar3 + 4);
        dVar26 = CONCAT44D(uVar23,*(undefined4 *)(unsigned)(ain0 + 4));
        dVar20 = CONCAT44D(uVar23,SUB84(in_dr4,0));
      }
      else {
        dVar26 = *(double *)(unsigned)(iVar3 + 4);
        in_xd2 = *(double *)(unsigned)(ain0 + 4);
        uVar23 = (undefined4)(D2U(dVar26) >> 0x20);
        dVar20 = dVar26;
      }
      if (cVar28 == '\0') {
        dVar26 = CONCAT44D(F32HI(dVar26) - F32LO(dVar26),
                                  SUB84(dVar26,0));
      }
      else {
        dVar26 = dVar26 - dVar26;
      }
      if (cVar29 == '\0') {
        dVar26 = CONCAT44D((int)(D2U(dVar26) >> 0x20),*(undefined4 *)(unsigned)(iVar4 + 8));
        dVar20 = CONCAT44D(uVar23,*(undefined4 *)(unsigned)(iVar3 + 8));
      }
      else {
        in_xd2 = *(double *)(unsigned)(iVar4 + 8);
      }
      fVar18 = F32LO(dVar20);
      if (cVar28 == '\0') {
        dVar26 = CONCAT44D((int)(D2U(dVar26) >> 0x20),F32LO(dVar26) - fVar18);
      }
      else {
        dVar26 = dVar26 - dVar20;
      }
      if (cVar29 == '\0') {
        in_dr0 = CONCAT44D((int)((ulonglong)in_dr0 >> 0x20),fVar18);
      }
      if (cVar28 == '\0') {
        dVar26 = CONCAT44D(F32HI(dVar26) * F32LO(dVar26),
                                  SUB84(dVar26,0));
      }
      else {
        dVar26 = dVar26 * dVar26;
      }
      if (cVar29 == '\0') {
        dVar26 = CONCAT44D((int)(D2U(dVar26) >> 0x20),*(undefined4 *)(unsigned)(ain0 + 8));
      }
      else {
        in_xd2 = *(double *)(unsigned)(ain0 + 8);
      }
      if (cVar28 == '\0') {
        dVar16 = CONCAT44D((int)((ulonglong)in_dr0 >> 0x20),F32LO(in_dr0) - F32LO(dVar26)
                                 );
      }
      else {
        dVar16 = in_dr0 - dVar26;
      }
      if (cVar29 == '\0') {
        dVar26 = CONCAT44D((int)(D2U(dVar26) >> 0x20),*(undefined4 *)(unsigned)(iVar4 + 4));
      }
      else {
        in_xd2 = *(double *)(unsigned)(iVar4 + 4);
      }
      (*(int *)(fr0_ - 0x4c)) = 0;
      if (cVar28 == '\0') {
        dVar26 = CONCAT44D((int)(D2U(dVar26) >> 0x20),
                                  F32LO(dVar26) - F32HI(dVar20));
      }
      else {
        dVar26 = dVar26 - dVar20;
      }
      uVar21 = (uint)(D2U(dVar26) >> 0x20);
      dVar20 = dVar26;
      if (cVar29 == '\0') {
        dVar20 = CONCAT44D(uVar21,fVar18);
      }
      if (cVar28 == '\0') {
        in_dr0 = CONCAT44D((int)(D2U(dVar16) >> 0x20),F32LO(dVar16) * F32LO(dVar26)
                                 );
      }
      else {
        in_dr0 = dVar16 * dVar26;
      }
      if (cVar28 == '\0') {
        fVar18 = F32HI(dVar20) - F32LO(in_dr0);
        in_dr4 = CONCAT44D(fVar18,SUB84(dVar20,0));
        bVar27 = 0.0 < fVar18;
      }
      else {
        in_dr4 = dVar20 - in_dr0;
        bVar27 = (double)((ulonglong)uVar21 << 0x20) < in_dr4;
      }
      if (bVar27) {
        if (((*(undefined4 *)(unsigned)(unsigned)0x8c4ab308) & 0x800000) != 0) {
          (*(int *)(fr0_ - 0x4c)) = 0x8000;
          goto LAB_8c24c420;
        }
        puVar14 = puVar15 + uVar2;
      }
      else {
LAB_8c24c420:
        puVar8 = ((undefined1 *)(fr0_ - 0x38));
        (*(undefined4 *)(unsigned)(unsigned)0x8c4aa520) = (*(undefined4 *)(unsigned)(unsigned)0x8c4aa520) + uVar2;
        iVar4 = iVar4 + 0x10;
        iVar3 = iVar3 + 0x10;
        (vsp = ((unsigned long)(fr0_ - 88)), FUN_8c2361a8(ain0 + 0x10,iVar3,iVar4,puVar8));
        uVar23 = SUB84(in_dr0,0);
        ({ unsigned long ri0_ = (unsigned long)(ain0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 88)); FUN_8c25ce48(((undefined1 *)(fr0_ - 0x38)),iVar3,iVar4,puVar8); });
        iVar3 = (uint)puVar15[((int)uVar2 >> 1) + -1] * 0x40 + (*(undefined4 *)(unsigned)(unsigned)0x8c4aa510);
        if (cVar29 == '\0') {
          (*(undefined4 *)(fr0_ - 0x2c)) = *(undefined4 *)(unsigned)(iVar3 + 0x10);
          (*(undefined4 *)(fr0_ - 0x28)) = *(undefined4 *)(unsigned)(iVar3 + 0x14);
          (*(float *)(fr0_ - 0x24)) = *(float *)(unsigned)(iVar3 + 0x18);
        }
        else {
          (*(undefined4 *)(fr0_ - 0x2c)) = (undefined4)*(undefined8 *)(unsigned)(iVar3 + 0x10);
          (*(undefined4 *)(fr0_ - 0x28)) = (undefined4)*(undefined8 *)(unsigned)(iVar3 + 0x14);
          in_xd2 = *(double *)(unsigned)(iVar3 + 0x18);
          (*(float *)(fr0_ - 0x24)) = SUB84(in_xd2,0);
          (*(float *)(fr0_ - 0x20)) = F32HI(in_xd2);
        }
        iVar3 = (uint)puVar15[(int)uVar2 >> 1] * 0x40 + (*(undefined4 *)(unsigned)(unsigned)0x8c4aa510);
        if (cVar29 == '\0') {
          dVar26 = CONCAT44D((*(undefined4 *)(fr0_ - 0x2c)),*(undefined4 *)(unsigned)(iVar3 + 0x10));
        }
        else {
          in_xd2 = *(double *)(unsigned)(iVar3 + 0x10);
          dVar26 = CONCAT44D((*(undefined4 *)(fr0_ - 0x28)),(*(undefined4 *)(fr0_ - 0x2c)));
        }
        if (cVar28 == '\0') {
          dVar26 = CONCAT44D(F32HI(dVar26) + F32LO(dVar26),
                                    SUB84(dVar26,0));
        }
        else {
          dVar26 = dVar26 + dVar26;
        }
        uVar24 = (undefined4)(D2U(dVar26) >> 0x20);
        if (cVar29 == '\0') {
          dVar26 = CONCAT44D((*(undefined4 *)(fr0_ - 0x28)),*(undefined4 *)(unsigned)(iVar3 + 0x14));
          (*(undefined4 *)(fr0_ - 0x2c)) = uVar24;
        }
        else {
          (*(undefined4 *)(fr0_ - 0x2c)) = SUB84(dVar26,0);
          in_xd2 = *(double *)(unsigned)(iVar3 + 0x14);
          dVar26 = CONCAT44D((*(float *)(fr0_ - 0x24)),uVar24);
        }
        if (cVar28 == '\0') {
          dVar26 = CONCAT44D(F32HI(dVar26) + F32LO(dVar26),
                                    SUB84(dVar26,0));
        }
        else {
          dVar26 = dVar26 + dVar26;
        }
        uVar24 = (undefined4)(D2U(dVar26) >> 0x20);
        if (cVar29 == '\0') {
          dVar26 = CONCAT44D((*(float *)(fr0_ - 0x24)),*(undefined4 *)(unsigned)(iVar3 + 0x18));
          (*(undefined4 *)(fr0_ - 0x28)) = uVar24;
        }
        else {
          (*(undefined4 *)(fr0_ - 0x28)) = SUB84(dVar26,0);
          in_xd2 = *(double *)(unsigned)(iVar3 + 0x18);
          dVar26 = CONCAT44D((*(float *)(fr0_ - 0x20)),uVar24);
        }
        if (cVar28 == '\0') {
          dVar26 = CONCAT44D(F32HI(dVar26) + F32LO(dVar26),
                                    SUB84(dVar26,0));
        }
        else {
          dVar26 = dVar26 + dVar26;
        }
        fVar18 = F32HI(dVar26);
        if (cVar29 == '\0') {
          dVar26 = CONCAT44D(fVar18,(*(undefined4 *)(fr0_ - 0x2c)));
          (*(float *)(fr0_ - 0x24)) = fVar18;
        }
        else {
          (*(float *)(fr0_ - 0x24)) = SUB84(dVar26,0);
          in_xd2 = CONCAT44D((*(undefined4 *)(fr0_ - 0x28)),(*(undefined4 *)(fr0_ - 0x2c)));
          (*(float *)(fr0_ - 0x20)) = fVar18;
        }
        if (cVar28 == '\0') {
          dVar26 = CONCAT44D((int)(D2U(dVar26) >> 0x20),F32LO(dVar26) * fVar25);
        }
        else {
          dVar26 = dVar26 * CONCAT44D(in_fr14,fVar25);
        }
        if (cVar29 == '\0') {
          (*(undefined4 *)(fr0_ - 0x2c)) = SUB84(dVar26,0);
          dVar26 = CONCAT44D((int)(D2U(dVar26) >> 0x20),(*(undefined4 *)(fr0_ - 0x28)));
        }
        else {
          (*(undefined4 *)(fr0_ - 0x2c)) = SUB84(in_xd2,0);
          (*(undefined4 *)(fr0_ - 0x28)) = (undefined4)((ulonglong)in_xd2 >> 0x20);
          in_xd2 = CONCAT44D((*(float *)(fr0_ - 0x24)),(*(undefined4 *)(fr0_ - 0x28)));
        }
        if (cVar28 == '\0') {
          dVar26 = CONCAT44D((int)(D2U(dVar26) >> 0x20),F32LO(dVar26) * fVar25);
        }
        else {
          dVar26 = dVar26 * CONCAT44D(in_fr14,fVar25);
        }
        puVar8 = ((undefined1 *)(unsigned)0x8c4c2620);
        puVar11 = ((undefined1 *)(fr0_ - 0x38));
        if (cVar29 == '\0') {
          (*(undefined4 *)(fr0_ - 0x28)) = SUB84(dVar26,0);
          dVar26 = CONCAT44D((int)(D2U(dVar26) >> 0x20),(*(float *)(fr0_ - 0x24)));
        }
        else {
          (*(undefined4 *)(fr0_ - 0x28)) = SUB84(in_xd2,0);
          (*(float *)(fr0_ - 0x24)) = F32HI(in_xd2);
          in_xd2 = CONCAT44D((*(float *)(fr0_ - 0x20)),(*(float *)(fr0_ - 0x24)));
        }
        if (cVar28 == '\0') {
          (*(float *)(fr0_ - 0x24)) = F32LO(dVar26) * fVar25;
        }
        else {
          (*(float *)(fr0_ - 0x24)) = SUB84(dVar26 * CONCAT44D(in_fr14,fVar25),0);
        }
        if (cVar29 != '\0') {
          (*(float *)(fr0_ - 0x24)) = SUB84(in_xd2,0);
          (*(float *)(fr0_ - 0x20)) = F32HI(in_xd2);
        }
        puVar9 = &(*(undefined4 *)(fr0_ - 0x2c));
        (vsp = ((unsigned long)(fr0_ - 88)), FUN_8c23bae2(((undefined1 *)(unsigned)0x8c4c2620),puVar9,puVar11,(*(int *)(fr0_ - 0x4c))));
        (vsp = ((unsigned long)(fr0_ - 88)), float_to_color_u8(puVar8,puVar9,puVar11,(*(int *)(fr0_ - 0x4c))));
        uVar21 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c2630);
        if (cVar29 == '\0') {
          uVar21 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c2634);
        }
        (vsp = ((unsigned long)(fr0_ - 88)), float_to_color_u8(puVar8,puVar9,puVar11,(*(int *)(fr0_ - 0x4c))));
        if (cVar29 == '\0') {
          dVar26 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4c2624),(*(undefined4 *)(unsigned)(unsigned)0x8c4c2634));
        }
        else {
          dVar26 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4c2628),(*(undefined4 *)(unsigned)(unsigned)0x8c4c2624));
          in_xd2 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4c2638),(*(undefined4 *)(unsigned)(unsigned)0x8c4c2634));
        }
        if (cVar28 == '\0') {
          dVar26 = CONCAT44D(F32HI(dVar26) + F32LO(dVar26),
                                    SUB84(dVar26,0));
        }
        else {
          dVar26 = dVar26 + dVar26;
        }
        uVar24 = (undefined4)(D2U(dVar26) >> 0x20);
        if (cVar29 == '\0') {
          dVar26 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4c2628),(*(undefined4 *)(unsigned)(unsigned)0x8c4c2638));
          (*(undefined4 *)(unsigned)(unsigned)0x8c4c2624) = uVar24;
        }
        else {
          (*(undefined4 *)(unsigned)(unsigned)0x8c4c2624) = SUB84(dVar26,0);
          dVar26 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4c262c),uVar24);
          in_xd2 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4c263c),(*(undefined4 *)(unsigned)(unsigned)0x8c4c2638));
        }
        if (cVar28 == '\0') {
          dVar26 = CONCAT44D(F32HI(dVar26) + F32LO(dVar26),
                                    SUB84(dVar26,0));
        }
        else {
          dVar26 = dVar26 + dVar26;
        }
        uVar24 = (undefined4)(D2U(dVar26) >> 0x20);
        if (cVar29 == '\0') {
          dVar26 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4c262c),(*(undefined4 *)(unsigned)(unsigned)0x8c4c263c));
          (*(undefined4 *)(unsigned)(unsigned)0x8c4c2628) = uVar24;
        }
        else {
          (*(undefined4 *)(unsigned)(unsigned)0x8c4c2628) = SUB84(dVar26,0);
          dVar26 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4c2630),uVar24);
          in_xd2 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4c2640),(*(undefined4 *)(unsigned)(unsigned)0x8c4c263c));
        }
        if (cVar28 == '\0') {
          dVar26 = CONCAT44D(F32HI(dVar26) + F32LO(dVar26),
                                    SUB84(dVar26,0));
        }
        else {
          dVar26 = dVar26 + dVar26;
        }
        uVar19 = (uint)(D2U(dVar26) >> 0x20);
        (*(undefined4 *)(unsigned)(unsigned)0x8c4c262c) = uVar19;
        if (cVar29 != '\0') {
          (*(undefined4 *)(unsigned)(unsigned)0x8c4c262c) = SUB84(dVar26,0);
          (*(undefined4 *)(unsigned)(unsigned)0x8c4c2630) = uVar19;
        }
        if (cVar29 == '\0') {
          dVar26 = (double)(ulonglong)(*(undefined4 *)(unsigned)(unsigned)0x8c4c2620);
        }
        else {
          in_xd2 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4c2624),(*(undefined4 *)(unsigned)(unsigned)0x8c4c2620));
        }
        uVar19 = SUB84(dVar26,0);
        pdVar5 = (double *)(unsigned)((uint)*puVar15 * 0x40 + (*(undefined4 *)(unsigned)(unsigned)0x8c4aa510));
        if (cVar29 == '\0') {
          *(uint *)(unsigned)(pdVar5 + 4) = uVar19;
          *(undefined4 *)(unsigned)((int)pdVar5 + 0x24) = (*(undefined4 *)(unsigned)(unsigned)0x8c4c2624);
          *(undefined4 *)(unsigned)(pdVar5 + 5) = (*(undefined4 *)(unsigned)(unsigned)0x8c4c2628);
          uVar19 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c262c);
          *(uint *)(unsigned)((int)pdVar5 + 0x2c) = (*(undefined4 *)(unsigned)(unsigned)0x8c4c262c);
        }
        else {
          pdVar5[4] = in_xd2;
          *(ulonglong *)(unsigned)((int)pdVar5 + 0x24) = CONCAT44((*(undefined4 *)(unsigned)(unsigned)0x8c4c2628),(*(undefined4 *)(unsigned)(unsigned)0x8c4c2624));
          pdVar5[5] = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4c262c),(*(undefined4 *)(unsigned)(unsigned)0x8c4c2628));
          in_xd2 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4c2630),(*(undefined4 *)(unsigned)(unsigned)0x8c4c262c));
          *(double *)(unsigned)((int)pdVar5 + 0x2c) = in_xd2;
        }
        *(undefined4 *)(unsigned)pdVar5 = 0xe0000000;
        if (cVar29 == '\0') {
          dVar26 = CONCAT44D(*(undefined4 *)(unsigned)pdVar5,uVar23);
          dVar20 = CONCAT44D(*(undefined4 *)(unsigned)((int)pdVar5 + 4),uVar19);
          pdVar5 = pdVar5 + 1;
        }
        else {
          dVar26 = *pdVar5;
          dVar20 = pdVar5[1];
          pdVar5 = pdVar5 + 2;
        }
        if (cVar29 == '\0') {
          uVar23 = *(undefined4 *)(unsigned)(pdVar5 + 2);
          dVar16 = CONCAT44D(uVar23,uVar21);
          *(undefined4 *)(unsigned)((int)unaff_r8 + 0x1c) = *(undefined4 *)(unsigned)((int)pdVar5 + 0x14);
          *(undefined4 *)(unsigned)(unaff_r8 + 3) = uVar23;
          *(int *)(unsigned)((int)unaff_r8 + 0x14) = (int)(D2U(dVar20) >> 0x20);
          unaff_r8 = unaff_r8 + 2;
          *(int *)(unsigned)unaff_r8 = (int)(D2U(dVar26) >> 0x20);
        }
        else {
          dVar16 = pdVar5[2];
          unaff_r8[3] = pdVar5[3];
          unaff_r8[2] = dVar16;
          unaff_r8[1] = dVar20;
          *unaff_r8 = dVar26;
        }
        puVar15 = puVar14 + 3;
        if (cVar29 == '\0') {
          dVar20 = (double)(ulonglong)(*(undefined4 *)(unsigned)(unsigned)0x8c4c2620);
        }
        else {
          in_xd2 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4c2624),(*(undefined4 *)(unsigned)(unsigned)0x8c4c2620));
        }
        uVar21 = SUB84(dVar20,0);
        pdVar5 = (double *)(unsigned)((uint)puVar14[2] * 0x40 + (*(undefined4 *)(unsigned)(unsigned)0x8c4aa510));
        if (cVar29 == '\0') {
          *(uint *)(unsigned)(pdVar5 + 4) = uVar21;
          *(undefined4 *)(unsigned)((int)pdVar5 + 0x24) = (*(undefined4 *)(unsigned)(unsigned)0x8c4c2624);
          *(undefined4 *)(unsigned)(pdVar5 + 5) = (*(undefined4 *)(unsigned)(unsigned)0x8c4c2628);
          uVar21 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c262c);
          *(uint *)(unsigned)((int)pdVar5 + 0x2c) = (*(undefined4 *)(unsigned)(unsigned)0x8c4c262c);
        }
        else {
          pdVar5[4] = in_xd2;
          *(ulonglong *)(unsigned)((int)pdVar5 + 0x24) = CONCAT44((*(undefined4 *)(unsigned)(unsigned)0x8c4c2628),(*(undefined4 *)(unsigned)(unsigned)0x8c4c2624));
          pdVar5[5] = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4c262c),(*(undefined4 *)(unsigned)(unsigned)0x8c4c2628));
          in_xd2 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4c2630),(*(undefined4 *)(unsigned)(unsigned)0x8c4c262c));
          *(double *)(unsigned)((int)pdVar5 + 0x2c) = in_xd2;
        }
        *(undefined4 *)(unsigned)pdVar5 = 0xe0000000;
        if (cVar29 == '\0') {
          dVar26 = CONCAT44D(*(undefined4 *)(unsigned)pdVar5,SUB84(dVar26,0));
          dVar20 = CONCAT44D(*(undefined4 *)(unsigned)((int)pdVar5 + 4),uVar21);
          pdVar5 = pdVar5 + 1;
        }
        else {
          dVar26 = *pdVar5;
          dVar20 = pdVar5[1];
          pdVar5 = pdVar5 + 2;
        }
        if (cVar29 == '\0') {
          uVar23 = *(undefined4 *)(unsigned)(pdVar5 + 2);
          dVar16 = CONCAT44D(uVar23,SUB84(dVar16,0));
          *(undefined4 *)(unsigned)((int)unaff_r8 + 0x3c) = *(undefined4 *)(unsigned)((int)pdVar5 + 0x14);
          *(undefined4 *)(unsigned)(unaff_r8 + 7) = uVar23;
          *(int *)(unsigned)((int)unaff_r8 + 0x34) = (int)(D2U(dVar20) >> 0x20);
          pdVar5 = unaff_r8 + 6;
          *(int *)(unsigned)pdVar5 = (int)(D2U(dVar26) >> 0x20);
        }
        else {
          dVar16 = pdVar5[2];
          unaff_r8[7] = pdVar5[3];
          unaff_r8[6] = dVar16;
          unaff_r8[5] = dVar20;
          pdVar5 = unaff_r8 + 4;
          *pdVar5 = dVar26;
        }
        uVar23 = SUB84(dVar16,0);
        pdVar5 = pdVar5 + 4;
        iVar3 = 2;
        if (2 < (int)(uVar2 - 1)) {
          do {
            uVar1 = *puVar15;
            puVar15 = puVar15 + 1;
            uVar21 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c2620);
            if (cVar29 != '\0') {
              in_xd2 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4c2624),(*(undefined4 *)(unsigned)(unsigned)0x8c4c2620));
              uVar21 = SUB84(dVar20,0);
            }
            pdVar7 = (double *)(unsigned)((uint)uVar1 * 0x40 + (*(undefined4 *)(unsigned)(unsigned)0x8c4aa510));
            if (cVar29 == '\0') {
              *(uint *)(unsigned)(pdVar7 + 4) = uVar21;
              *(undefined4 *)(unsigned)((int)pdVar7 + 0x24) = (*(undefined4 *)(unsigned)(unsigned)0x8c4c2624);
              *(undefined4 *)(unsigned)(pdVar7 + 5) = (*(undefined4 *)(unsigned)(unsigned)0x8c4c2628);
              uVar21 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c262c);
              *(uint *)(unsigned)((int)pdVar7 + 0x2c) = (*(undefined4 *)(unsigned)(unsigned)0x8c4c262c);
            }
            else {
              pdVar7[4] = in_xd2;
              *(ulonglong *)(unsigned)((int)pdVar7 + 0x24) = CONCAT44((*(undefined4 *)(unsigned)(unsigned)0x8c4c2628),(*(undefined4 *)(unsigned)(unsigned)0x8c4c2624));
              pdVar7[5] = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4c262c),(*(undefined4 *)(unsigned)(unsigned)0x8c4c2628));
              in_xd2 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4c2630),(*(undefined4 *)(unsigned)(unsigned)0x8c4c262c));
              *(double *)(unsigned)((int)pdVar7 + 0x2c) = in_xd2;
            }
            *(undefined4 *)(unsigned)pdVar7 = 0xe0000000;
            if (cVar29 == '\0') {
              dVar26 = CONCAT44D(*(undefined4 *)(unsigned)pdVar7,SUB84(dVar26,0));
              dVar20 = CONCAT44D(*(undefined4 *)(unsigned)((int)pdVar7 + 4),uVar21);
              pdVar7 = pdVar7 + 1;
            }
            else {
              dVar26 = *pdVar7;
              dVar20 = pdVar7[1];
              pdVar7 = pdVar7 + 2;
            }
            if (cVar29 == '\0') {
              uVar23 = *(undefined4 *)(unsigned)(pdVar7 + 2);
              dVar16 = CONCAT44D(uVar23,SUB84(dVar16,0));
              *(undefined4 *)(unsigned)((int)pdVar5 + 0x1c) = *(undefined4 *)(unsigned)((int)pdVar7 + 0x14);
              *(undefined4 *)(unsigned)(pdVar5 + 3) = uVar23;
              *(int *)(unsigned)((int)pdVar5 + 0x14) = (int)(D2U(dVar20) >> 0x20);
              pdVar5 = pdVar5 + 2;
              *(int *)(unsigned)pdVar5 = (int)(D2U(dVar26) >> 0x20);
            }
            else {
              dVar16 = pdVar7[2];
              pdVar5[3] = pdVar7[3];
              pdVar5[2] = dVar16;
              pdVar5[1] = dVar20;
              *pdVar5 = dVar26;
            }
            uVar23 = SUB84(dVar16,0);
            pdVar5 = pdVar5 + 4;
            iVar3 = iVar3 + 1;
          } while (iVar3 < (int)(uVar2 - 1));
        }
        puVar14 = puVar15 + 1;
        uVar2 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c2620);
        if (cVar29 != '\0') {
          in_xd2 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4c2624),(*(undefined4 *)(unsigned)(unsigned)0x8c4c2620));
          uVar2 = SUB84(dVar20,0);
        }
        pdVar7 = (double *)(unsigned)((uint)*puVar15 * 0x40 + (*(undefined4 *)(unsigned)(unsigned)0x8c4aa510));
        if (cVar29 == '\0') {
          *(uint *)(unsigned)(pdVar7 + 4) = uVar2;
          *(undefined4 *)(unsigned)((int)pdVar7 + 0x24) = (*(undefined4 *)(unsigned)(unsigned)0x8c4c2624);
          *(undefined4 *)(unsigned)(pdVar7 + 5) = (*(undefined4 *)(unsigned)(unsigned)0x8c4c2628);
          uVar2 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c262c);
          *(uint *)(unsigned)((int)pdVar7 + 0x2c) = (*(undefined4 *)(unsigned)(unsigned)0x8c4c262c);
        }
        else {
          pdVar7[4] = in_xd2;
          *(ulonglong *)(unsigned)((int)pdVar7 + 0x24) = CONCAT44((*(undefined4 *)(unsigned)(unsigned)0x8c4c2628),(*(undefined4 *)(unsigned)(unsigned)0x8c4c2624));
          pdVar7[5] = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4c262c),(*(undefined4 *)(unsigned)(unsigned)0x8c4c2628));
          in_xd2 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4c2630),(*(undefined4 *)(unsigned)(unsigned)0x8c4c262c));
          *(double *)(unsigned)((int)pdVar7 + 0x2c) = in_xd2;
        }
        *(undefined4 *)(unsigned)pdVar7 = 0xf0000000;
        if (cVar29 == '\0') {
          in_dr0 = CONCAT44D(*(undefined4 *)(unsigned)pdVar7,SUB84(dVar26,0));
          dVar26 = CONCAT44D(*(undefined4 *)(unsigned)((int)pdVar7 + 4),uVar2);
          pdVar7 = pdVar7 + 1;
        }
        else {
          in_dr0 = *pdVar7;
          dVar26 = pdVar7[1];
          pdVar7 = pdVar7 + 2;
        }
        if (cVar29 == '\0') {
          uVar24 = *(undefined4 *)(unsigned)(pdVar7 + 2);
          in_dr4 = CONCAT44D(uVar24,uVar23);
          *(undefined4 *)(unsigned)((int)pdVar5 + 0x1c) = *(undefined4 *)(unsigned)((int)pdVar7 + 0x14);
          *(undefined4 *)(unsigned)(pdVar5 + 3) = uVar24;
          *(int *)(unsigned)((int)pdVar5 + 0x14) = (int)(D2U(dVar26) >> 0x20);
          pdVar5 = pdVar5 + 2;
          *(int *)(unsigned)pdVar5 = (int)((ulonglong)in_dr0 >> 0x20);
        }
        else {
          in_dr4 = pdVar7[2];
          pdVar5[3] = pdVar7[3];
          pdVar5[2] = in_dr4;
          pdVar5[1] = dVar26;
          *pdVar5 = in_dr0;
        }
        unaff_r8 = pdVar5 + 4;
      }
    }
  }
  else if (uVar2 == 0xc000) {
    if (((*(undefined4 *)(unsigned)(unsigned)0x8c4ab308) & 0x800000) == 0) {
      pcVar6 = ((void *)0x8c240434);
    }
    else {
      pcVar6 = ((void *)0x8c240222);
    }
    uVar2 = (vsp = ((unsigned long)(fr0_ - 88)), (*(code *)xlat((unsigned long)pcVar6))(ar4,uVar1 & 0x3fff,ar6,ar7));
  }
  return uVar2;
}

__asm__(".globl _FUN_8c24bdc8\n.set _FUN_8c24bdc8, _FUN_8c24bdc8_def\n");
