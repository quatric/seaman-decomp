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
uint FUN_8c250144_def(ushort *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c250144";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 100; for (int i_ = 0; i_ < 100; i_++) z_[i_] = 0; }
  ushort uVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  code *pcVar9;
  double *pdVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  undefined4 *puVar13;
  double *pdVar14;
  double *ar6_00;
  undefined1 *ar6_01;
  double *unaff_r8 = 0;
  double *pdVar15;
  double *pdVar16;
  double *pdVar17;
  ushort *puVar18;
  ushort *puVar19;
  ushort *puVar20;
  double in_dr0 = 0;
  double dVar21;
  double dVar22;
  double dVar23;
  ulonglong uVar24;
  uint uVar25;
  double in_dr4 = 0;
  double dVar26;
  float fVar29;
  double dVar27;
  undefined4 uVar30;
  undefined4 uVar31;
  float fVar32;
  undefined8 in_dr14 = 0;
  double dVar33;
  double in_xd2 = 0;
  double dVar34;
  double in_xd4 = 0;
  double in_xd14 = 0;
  bool bVar35;
  float in_PR = 0;
  char cVar36;
  char cVar37;
  undefined8 *ain0;
  undefined4 uVar28;
  
  cVar37 = '\0';
  cVar36 = '\0';
  (*(undefined4 *)(fr0_ - 0x1c)) = (undefined4)in_dr14;
  (*(undefined4 *)(fr0_ - 0x20)) = (undefined4)((ulonglong)in_dr14 >> 0x20);
  uVar1 = *ar4;
  puVar18 = ((ushort *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 2));
  dVar33 = CONCAT44D((*(undefined4 *)(fr0_ - 0x20)),0x3f000000);
  uVar2 = uVar1 & 0xc000;
  (*(float *)(fr0_ - 0x24)) = in_PR;
  if ((uVar1 & 0xc000) == 0) {
    (*(undefined4 *)(unsigned)(unsigned)0x8c4aa51c) = (*(undefined4 *)(unsigned)(unsigned)0x8c4aa51c) + (uint)ar4[1] * 3;
    (*(int *)(fr0_ - 0x5c)) = 0;
    dVar33 = 7.946779287948402e-07;
    ain0 = (undefined8 *)(unsigned)((undefined1 *)(unsigned)0x8c4c2630);
    while( true ) {
      uVar28 = SUB84(in_dr4,0);
      uVar2 = (uint)ar4[1];
      if ((int)uVar2 <= (*(int *)(fr0_ - 0x5c))) break;
      uVar1 = *puVar18;
      puVar20 = puVar18 + 1;
      puVar19 = puVar18 + 2;
      puVar18 = puVar18 + 3;
      pdVar10 = (double *)(unsigned)((uint)*puVar20 * 0x40 + (*(undefined4 *)(unsigned)(unsigned)0x8c4aa510));
      if (cVar37 == '\0') {
        uVar28 = *(undefined4 *)(unsigned)((int)pdVar10 + 4);
      }
      else {
        in_xd4 = *(double *)(unsigned)((int)pdVar10 + 4);
      }
      pdVar15 = (double *)(unsigned)((uint)uVar1 * 0x40 + (*(undefined4 *)(unsigned)(unsigned)0x8c4aa510));
      if (cVar37 == '\0') {
        dVar23 = CONCAT44D(uVar28,*(undefined4 *)(unsigned)((int)pdVar15 + 4));
      }
      else {
        in_xd2 = *(double *)(unsigned)((int)pdVar15 + 4);
        dVar23 = in_xd4;
      }
      if (cVar36 == '\0') {
        dVar23 = CONCAT44D(F32HI(dVar23) - F32LO(dVar23),
                                  SUB84(dVar23,0));
      }
      else {
        dVar23 = dVar23 - dVar23;
      }
      pdVar16 = (double *)(unsigned)((uint)*puVar19 * 0x40 + (*(undefined4 *)(unsigned)(unsigned)0x8c4aa510));
      if (cVar37 == '\0') {
        fVar29 = *(float *)(unsigned)(pdVar10 + 1);
        dVar26 = CONCAT44D(fVar29,uVar28);
        dVar23 = CONCAT44D((int)(D2U(dVar23) >> 0x20),*(undefined4 *)(unsigned)(pdVar16 + 1));
        in_dr0 = CONCAT44D((int)((ulonglong)in_dr0 >> 0x20),fVar29);
      }
      else {
        dVar26 = pdVar10[1];
        in_xd2 = pdVar16[1];
        fVar29 = F32HI(dVar26);
      }
      if (cVar36 == '\0') {
        fVar29 = F32LO(dVar23) - fVar29;
        dVar23 = CONCAT44D(F32HI(dVar23) * fVar29,fVar29);
      }
      else {
        dVar23 = (dVar23 - dVar26) * (dVar23 - dVar26);
      }
      if (cVar37 == '\0') {
        dVar23 = CONCAT44D((int)(D2U(dVar23) >> 0x20),*(undefined4 *)(unsigned)(pdVar15 + 1));
      }
      else {
        in_xd2 = pdVar15[1];
      }
      if (cVar36 == '\0') {
        dVar21 = CONCAT44D((int)((ulonglong)in_dr0 >> 0x20),F32LO(in_dr0) - F32LO(dVar23)
                                 );
      }
      else {
        dVar21 = in_dr0 - dVar23;
      }
      uVar28 = (undefined4)(D2U(dVar23) >> 0x20);
      if (cVar37 == '\0') {
        dVar23 = CONCAT44D(uVar28,*(undefined4 *)(unsigned)((int)pdVar16 + 4));
        dVar26 = CONCAT44D(uVar28,SUB84(dVar26,0));
      }
      else {
        in_xd2 = *(double *)(unsigned)((int)pdVar16 + 4);
        dVar26 = dVar23;
      }
      (*(int *)(fr0_ - 0x54)) = 0;
      if (cVar36 == '\0') {
        fVar29 = F32LO(dVar23) - F32LO(dVar26);
        dVar23 = CONCAT44D((int)(D2U(dVar23) >> 0x20),fVar29);
        in_dr0 = CONCAT44D((int)(D2U(dVar21) >> 0x20),F32LO(dVar21) * fVar29);
      }
      else {
        dVar23 = dVar23 - dVar26;
        in_dr0 = dVar21 * dVar23;
      }
      if (cVar36 == '\0') {
        fVar29 = F32HI(dVar26) - F32LO(in_dr0);
        in_dr4 = CONCAT44D(fVar29,SUB84(dVar26,0));
        bVar35 = 0.0 < fVar29;
      }
      else {
        in_dr4 = dVar26 - in_dr0;
        bVar35 = (double)(D2U(dVar23) & 0xffffffff00000000) < in_dr4;
      }
      if (bVar35) {
        if (((*(undefined4 *)(unsigned)(unsigned)0x8c4ab308) & 0x800000) != 0) {
          (*(int *)(fr0_ - 0x54)) = 0x8000;
          goto LAB_8c250264;
        }
      }
      else {
LAB_8c250264:
        pdVar17 = pdVar10 + 2;
        puVar11 = ((undefined1 *)(fr0_ - 0x3c));
        pdVar14 = pdVar16 + 2;
        (vsp = ((unsigned long)(fr0_ - 100)), FUN_8c2361a8(pdVar15 + 2,pdVar17,pdVar14,puVar11));
        uVar28 = SUB84(in_dr0,0);
        ({ unsigned long ri0_ = (unsigned long)(ain0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 100)); FUN_8c25ce48(((undefined1 *)(fr0_ - 0x3c)),pdVar17,pdVar14,puVar11); });
        if (cVar37 == '\0') {
          dVar23 = CONCAT44D(*(undefined4 *)(unsigned)(pdVar15 + 2),*(undefined4 *)(unsigned)(pdVar10 + 2));
        }
        else {
          dVar23 = pdVar15[2];
          in_xd2 = pdVar10[2];
        }
        puVar12 = ((undefined1 *)(fr0_ - 0x3c));
        puVar11 = ((undefined1 *)(unsigned)0x8c4c2620);
        if (cVar36 == '\0') {
          dVar23 = CONCAT44D(F32HI(dVar23) + F32LO(dVar23),
                                    SUB84(dVar23,0));
        }
        else {
          dVar23 = dVar23 + dVar23;
        }
        if (cVar37 == '\0') {
          dVar23 = CONCAT44D((int)(D2U(dVar23) >> 0x20),*(undefined4 *)(unsigned)(pdVar16 + 2));
        }
        else {
          in_xd2 = pdVar16[2];
        }
        fVar29 = F32HI(dVar33);
        if (cVar36 == '\0') {
          dVar23 = CONCAT44D((F32HI(dVar23) + F32LO(dVar23)) * fVar29,
                                    SUB84(dVar23,0));
        }
        else {
          dVar23 = (dVar23 + dVar23) * dVar33;
        }
        if (cVar37 == '\0') {
          (*(undefined4 *)(fr0_ - 0x30)) = (undefined4)(D2U(dVar23) >> 0x20);
          dVar23 = CONCAT44D(*(undefined4 *)(unsigned)((int)pdVar15 + 0x14),
                                    *(undefined4 *)(unsigned)((int)pdVar10 + 0x14));
        }
        else {
          (*(undefined4 *)(fr0_ - 0x30)) = SUB84(dVar23,0);
          dVar23 = *(double *)(unsigned)((int)pdVar15 + 0x14);
          in_xd2 = *(double *)(unsigned)((int)pdVar10 + 0x14);
        }
        if (cVar36 == '\0') {
          dVar23 = CONCAT44D(F32HI(dVar23) + F32LO(dVar23),
                                    SUB84(dVar23,0));
        }
        else {
          dVar23 = dVar23 + dVar23;
        }
        if (cVar37 == '\0') {
          dVar23 = CONCAT44D((int)(D2U(dVar23) >> 0x20),
                                    *(undefined4 *)(unsigned)((int)pdVar16 + 0x14));
        }
        else {
          in_xd2 = *(double *)(unsigned)((int)pdVar16 + 0x14);
        }
        if (cVar36 == '\0') {
          dVar23 = CONCAT44D((F32HI(dVar23) + F32LO(dVar23)) * fVar29,
                                    SUB84(dVar23,0));
        }
        else {
          dVar23 = (dVar23 + dVar23) * dVar33;
        }
        if (cVar37 == '\0') {
          (*(undefined4 *)(fr0_ - 0x2c)) = (undefined4)(D2U(dVar23) >> 0x20);
          dVar23 = CONCAT44D(*(undefined4 *)(unsigned)(pdVar15 + 3),*(undefined4 *)(unsigned)(pdVar10 + 3));
        }
        else {
          (*(undefined4 *)(fr0_ - 0x2c)) = SUB84(dVar23,0);
          dVar23 = pdVar15[3];
          in_xd2 = pdVar10[3];
        }
        if (cVar36 == '\0') {
          dVar23 = CONCAT44D(F32HI(dVar23) + F32LO(dVar23),
                                    SUB84(dVar23,0));
        }
        else {
          dVar23 = dVar23 + dVar23;
        }
        if (cVar37 == '\0') {
          dVar23 = CONCAT44D((int)(D2U(dVar23) >> 0x20),*(undefined4 *)(unsigned)(pdVar16 + 3));
        }
        else {
          in_xd2 = pdVar16[3];
        }
        if (cVar36 == '\0') {
          dVar23 = CONCAT44D((F32HI(dVar23) + F32LO(dVar23)) * fVar29,
                                    SUB84(dVar23,0));
        }
        else {
          dVar23 = (dVar23 + dVar23) * dVar33;
        }
        fVar29 = F32HI(dVar23);
        (*(float *)(fr0_ - 0x28)) = fVar29;
        if (cVar37 != '\0') {
          (*(float *)(fr0_ - 0x28)) = SUB84(dVar23,0);
          (*(float *)(fr0_ - 0x24)) = fVar29;
        }
        puVar13 = &(*(undefined4 *)(fr0_ - 0x30));
        (vsp = ((unsigned long)(fr0_ - 100)), FUN_8c23bae2(((undefined1 *)(unsigned)0x8c4c2620),puVar13,puVar12,(*(int *)(fr0_ - 0x54))));
        uVar30 = SUB84(dVar23,0);
        dVar23 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c2624);
        if (cVar37 == '\0') {
          dVar23 = in_xd4;
        }
        uVar7 = (vsp = ((unsigned long)(fr0_ - 100)), float_to_color_u8(puVar11,puVar13,puVar12,(*(int *)(fr0_ - 0x54))));
        if (cVar37 == '\0') {
          uVar3 = *(undefined4 *)(unsigned)((int)ain0 + 4);
          in_xd4 = dVar23;
        }
        else {
          in_xd4 = *(double *)(unsigned)((int)ain0 + 4);
          uVar3 = (undefined4)*ain0;
        }
        uVar4 = (vsp = ((unsigned long)(fr0_ - 100)), float_to_color_u8(puVar11,puVar13,puVar12,(*(int *)(fr0_ - 0x54))));
        uVar31 = SUB84(dVar33,0);
        dVar23 = in_xd14;
        dVar26 = in_xd14;
        if (cVar37 == '\0') {
          dVar23 = in_xd2;
          uVar30 = uVar31;
          dVar26 = CONCAT44D(uVar31,uVar28);
        }
        *(undefined4 *)(unsigned)pdVar15 = 0xe0000000;
        if (cVar37 == '\0') {
          dVar21 = CONCAT44D(*(undefined4 *)(unsigned)(pdVar15 + 6),uVar30);
        }
        else {
          dVar21 = pdVar15[6];
        }
        if (cVar36 == '\0') {
          dVar21 = (double)(ulonglong)
                           (uint)(F32HI(dVar26) *
                                  F32HI(dVar21) + F32LO(dVar21));
        }
        if (cVar37 == '\0') {
          *(int *)(unsigned)(pdVar15 + 4) = SUB84(dVar21,0);
          uVar24 = CONCAT44(*(undefined4 *)(unsigned)((int)pdVar15 + 0x34),uVar31);
          dVar26 = CONCAT44D(uVar31,SUB84(dVar26,0));
        }
        else {
          pdVar15[4] = dVar23;
          uVar24 = *(ulonglong *)(unsigned)((int)pdVar15 + 0x34);
          dVar23 = in_xd14;
          dVar26 = in_xd14;
        }
        if (cVar36 == '\0') {
          uVar24 = (ulonglong)
                   (uint)(F32HI(dVar26) * (float)(uVar24 >> 0x20) +
                         (float)uVar24);
        }
        if (cVar37 == '\0') {
          *(int *)(unsigned)((int)pdVar15 + 0x24) = (int)uVar24;
          dVar26 = CONCAT44D(*(undefined4 *)(unsigned)pdVar15,SUB84(dVar26,0));
          dVar21 = CONCAT44D(*(undefined4 *)(unsigned)((int)pdVar15 + 4),(int)uVar24);
          pdVar15 = pdVar15 + 1;
        }
        else {
          *(double *)(unsigned)((int)pdVar15 + 0x24) = dVar23;
          dVar26 = *pdVar15;
          dVar21 = pdVar15[1];
          pdVar15 = pdVar15 + 2;
        }
        if (cVar37 == '\0') {
          uVar28 = *(undefined4 *)(unsigned)(pdVar15 + 2);
          dVar27 = CONCAT44D(uVar28,uVar3);
          *(undefined4 *)(unsigned)((int)unaff_r8 + 0x1c) = *(undefined4 *)(unsigned)((int)pdVar15 + 0x14);
          *(undefined4 *)(unsigned)(unaff_r8 + 3) = uVar28;
          *(int *)(unsigned)((int)unaff_r8 + 0x14) = (int)(D2U(dVar21) >> 0x20);
          unaff_r8 = unaff_r8 + 2;
          *(int *)(unsigned)unaff_r8 = (int)(D2U(dVar26) >> 0x20);
          dVar21 = (double)(D2U(dVar33) & 0xffffffff);
          dVar26 = CONCAT44D(uVar31,SUB84(dVar26,0));
        }
        else {
          dVar27 = pdVar15[2];
          unaff_r8[3] = pdVar15[3];
          unaff_r8[2] = dVar27;
          unaff_r8[1] = dVar21;
          *unaff_r8 = dVar26;
          dVar23 = in_xd14;
          dVar26 = in_xd14;
        }
        *(undefined4 *)(unsigned)pdVar10 = 0xe0000000;
        if (cVar37 == '\0') {
          dVar21 = CONCAT44D(*(undefined4 *)(unsigned)(pdVar10 + 6),SUB84(dVar21,0));
        }
        else {
          dVar21 = pdVar10[6];
        }
        if (cVar36 == '\0') {
          dVar21 = (double)(ulonglong)
                           (uint)(F32HI(dVar26) *
                                  F32HI(dVar21) + F32LO(dVar21));
        }
        if (cVar37 == '\0') {
          *(int *)(unsigned)(pdVar10 + 4) = SUB84(dVar21,0);
          uVar24 = CONCAT44(*(undefined4 *)(unsigned)((int)pdVar10 + 0x34),uVar31);
          dVar26 = CONCAT44D(uVar31,SUB84(dVar26,0));
        }
        else {
          pdVar10[4] = dVar23;
          uVar24 = *(ulonglong *)(unsigned)((int)pdVar10 + 0x34);
          dVar23 = in_xd14;
          dVar26 = in_xd14;
        }
        if (cVar36 == '\0') {
          uVar24 = (ulonglong)
                   (uint)(F32HI(dVar26) * (float)(uVar24 >> 0x20) +
                         (float)uVar24);
        }
        if (cVar37 == '\0') {
          *(int *)(unsigned)((int)pdVar10 + 0x24) = (int)uVar24;
          dVar26 = CONCAT44D(*(undefined4 *)(unsigned)pdVar10,SUB84(dVar26,0));
          dVar21 = CONCAT44D(*(undefined4 *)(unsigned)((int)pdVar10 + 4),(int)uVar24);
          pdVar10 = pdVar10 + 1;
        }
        else {
          *(double *)(unsigned)((int)pdVar10 + 0x24) = dVar23;
          dVar26 = *pdVar10;
          dVar21 = pdVar10[1];
          pdVar10 = pdVar10 + 2;
        }
        if (cVar37 == '\0') {
          uVar28 = *(undefined4 *)(unsigned)(pdVar10 + 2);
          dVar27 = CONCAT44D(uVar28,SUB84(dVar27,0));
          *(undefined4 *)(unsigned)((int)unaff_r8 + 0x3c) = *(undefined4 *)(unsigned)((int)pdVar10 + 0x14);
          *(undefined4 *)(unsigned)(unaff_r8 + 7) = uVar28;
          *(int *)(unsigned)((int)unaff_r8 + 0x34) = (int)(D2U(dVar21) >> 0x20);
          pdVar10 = unaff_r8 + 6;
          *(int *)(unsigned)pdVar10 = (int)(D2U(dVar26) >> 0x20);
          dVar21 = (double)(D2U(dVar33) & 0xffffffff);
          dVar26 = CONCAT44D(uVar31,SUB84(dVar26,0));
        }
        else {
          dVar27 = pdVar10[2];
          unaff_r8[7] = pdVar10[3];
          unaff_r8[6] = dVar27;
          unaff_r8[5] = dVar21;
          pdVar10 = unaff_r8 + 4;
          *pdVar10 = dVar26;
          dVar26 = in_xd14;
          dVar23 = in_xd14;
        }
        *(undefined4 *)(unsigned)pdVar16 = 0xf0000000;
        *(undefined4 *)(unsigned)(pdVar16 + 5) = uVar7;
        *(undefined4 *)(unsigned)((int)pdVar16 + 0x2c) = uVar4;
        if (cVar37 == '\0') {
          dVar21 = CONCAT44D(*(undefined4 *)(unsigned)(pdVar16 + 6),SUB84(dVar21,0));
        }
        else {
          dVar21 = pdVar16[6];
        }
        if (cVar36 == '\0') {
          dVar21 = (double)(ulonglong)
                           (uint)(F32HI(dVar26) *
                                  F32HI(dVar21) + F32LO(dVar21));
        }
        if (cVar37 == '\0') {
          *(int *)(unsigned)(pdVar16 + 4) = SUB84(dVar21,0);
          uVar24 = CONCAT44(*(undefined4 *)(unsigned)((int)pdVar16 + 0x34),uVar31);
          in_xd2 = dVar23;
          dVar23 = CONCAT44D(uVar31,SUB84(dVar26,0));
        }
        else {
          pdVar16[4] = dVar23;
          uVar24 = *(ulonglong *)(unsigned)((int)pdVar16 + 0x34);
          in_xd2 = in_xd14;
          dVar23 = in_xd14;
        }
        if (cVar36 == '\0') {
          uVar24 = (ulonglong)
                   (uint)(F32HI(dVar23) * (float)(uVar24 >> 0x20) +
                         (float)uVar24);
        }
        if (cVar37 == '\0') {
          *(int *)(unsigned)((int)pdVar16 + 0x24) = (int)uVar24;
          in_dr0 = CONCAT44D(*(undefined4 *)(unsigned)pdVar16,SUB84(dVar23,0));
          dVar23 = CONCAT44D(*(undefined4 *)(unsigned)((int)pdVar16 + 4),(int)uVar24);
          pdVar16 = pdVar16 + 1;
        }
        else {
          *(double *)(unsigned)((int)pdVar16 + 0x24) = in_xd2;
          in_dr0 = *pdVar16;
          dVar23 = pdVar16[1];
          pdVar16 = pdVar16 + 2;
        }
        if (cVar37 == '\0') {
          uVar28 = *(undefined4 *)(unsigned)(pdVar16 + 2);
          in_dr4 = CONCAT44D(uVar28,SUB84(dVar27,0));
          *(undefined4 *)(unsigned)((int)pdVar10 + 0x3c) = *(undefined4 *)(unsigned)((int)pdVar16 + 0x14);
          *(undefined4 *)(unsigned)(pdVar10 + 7) = uVar28;
          *(int *)(unsigned)((int)pdVar10 + 0x34) = (int)(D2U(dVar23) >> 0x20);
          pdVar10 = pdVar10 + 6;
          *(int *)(unsigned)pdVar10 = (int)((ulonglong)in_dr0 >> 0x20);
        }
        else {
          in_dr4 = pdVar16[2];
          pdVar10[7] = pdVar16[3];
          pdVar10[6] = in_dr4;
          pdVar10[5] = dVar23;
          pdVar10 = pdVar10 + 4;
          *pdVar10 = in_dr0;
        }
        unaff_r8 = pdVar10 + 4;
        (*(undefined4 *)(unsigned)(unsigned)0x8c4aa520) = (*(undefined4 *)(unsigned)(unsigned)0x8c4aa520) + 3;
      }
      (*(int *)(fr0_ - 0x5c)) = (*(int *)(fr0_ - 0x5c)) + 1;
    }
  }
  else if (uVar2 == 0x4000) {
    (*(undefined4 *)(unsigned)(unsigned)0x8c4aa51c) = (*(undefined4 *)(unsigned)(unsigned)0x8c4aa51c) + (uint)ar4[1] * 4;
    for ((*(int *)(fr0_ - 0x54)) = 0; uVar2 = (uint)ar4[1], (*(int *)(fr0_ - 0x54)) < (int)uVar2; (*(int *)(fr0_ - 0x54)) = (*(int *)(fr0_ - 0x54)) + 1) {
      puVar20 = puVar18 + 3;
      pdVar17 = (double *)(unsigned)((uint)puVar18[2] * 0x40 + (*(undefined4 *)(unsigned)(unsigned)0x8c4aa510));
      pdVar15 = (double *)(unsigned)((uint)*puVar18 * 0x40 + (*(undefined4 *)(unsigned)(unsigned)0x8c4aa510));
      pdVar16 = (double *)(unsigned)((uint)puVar18[1] * 0x40 + (*(undefined4 *)(unsigned)(unsigned)0x8c4aa510));
      puVar18 = puVar18 + 4;
      pdVar10 = (double *)(unsigned)((uint)*puVar20 * 0x40 + (*(undefined4 *)(unsigned)(unsigned)0x8c4aa510));
      if (cVar37 == '\0') {
        uVar28 = *(undefined4 *)(unsigned)((int)pdVar16 + 4);
        dVar26 = CONCAT44D(uVar28,*(undefined4 *)(unsigned)((int)pdVar15 + 4));
        dVar23 = CONCAT44D(uVar28,SUB84(in_dr4,0));
      }
      else {
        dVar26 = *(double *)(unsigned)((int)pdVar16 + 4);
        in_xd2 = *(double *)(unsigned)((int)pdVar15 + 4);
        uVar28 = (undefined4)(D2U(dVar26) >> 0x20);
        dVar23 = dVar26;
      }
      if (cVar36 == '\0') {
        dVar26 = CONCAT44D(F32HI(dVar26) - F32LO(dVar26),
                                  SUB84(dVar26,0));
      }
      else {
        dVar26 = dVar26 - dVar26;
      }
      if (cVar37 == '\0') {
        dVar26 = CONCAT44D((int)(D2U(dVar26) >> 0x20),*(undefined4 *)(unsigned)(pdVar17 + 1));
        dVar23 = CONCAT44D(uVar28,*(undefined4 *)(unsigned)(pdVar16 + 1));
      }
      else {
        in_xd2 = pdVar17[1];
      }
      fVar29 = F32LO(dVar23);
      if (cVar36 == '\0') {
        dVar26 = CONCAT44D((int)(D2U(dVar26) >> 0x20),F32LO(dVar26) - fVar29);
      }
      else {
        dVar26 = dVar26 - dVar23;
      }
      if (cVar37 == '\0') {
        in_dr0 = CONCAT44D((int)((ulonglong)in_dr0 >> 0x20),fVar29);
      }
      if (cVar36 == '\0') {
        dVar26 = CONCAT44D(F32HI(dVar26) * F32LO(dVar26),
                                  SUB84(dVar26,0));
      }
      else {
        dVar26 = dVar26 * dVar26;
      }
      if (cVar37 == '\0') {
        dVar26 = CONCAT44D((int)(D2U(dVar26) >> 0x20),*(undefined4 *)(unsigned)(pdVar15 + 1));
      }
      else {
        in_xd2 = pdVar15[1];
      }
      if (cVar36 == '\0') {
        dVar21 = CONCAT44D((int)((ulonglong)in_dr0 >> 0x20),F32LO(in_dr0) - F32LO(dVar26)
                                 );
      }
      else {
        dVar21 = in_dr0 - dVar26;
      }
      if (cVar37 == '\0') {
        dVar26 = CONCAT44D((int)(D2U(dVar26) >> 0x20),*(undefined4 *)(unsigned)((int)pdVar17 + 4)
                                 );
      }
      else {
        in_xd2 = *(double *)(unsigned)((int)pdVar17 + 4);
      }
      (*(undefined4 *)(fr0_ - 0x4c)) = 0;
      if (cVar36 == '\0') {
        dVar26 = CONCAT44D((int)(D2U(dVar26) >> 0x20),
                                  F32LO(dVar26) - F32HI(dVar23));
      }
      else {
        dVar26 = dVar26 - dVar23;
      }
      uVar2 = (uint)(D2U(dVar26) >> 0x20);
      dVar23 = dVar26;
      if (cVar37 == '\0') {
        dVar23 = CONCAT44D(uVar2,fVar29);
      }
      if (cVar36 == '\0') {
        in_dr0 = CONCAT44D((int)(D2U(dVar21) >> 0x20),F32LO(dVar21) * F32LO(dVar26)
                                 );
      }
      else {
        in_dr0 = dVar21 * dVar26;
      }
      if (cVar36 == '\0') {
        fVar29 = F32HI(dVar23) - F32LO(in_dr0);
        in_dr4 = CONCAT44D(fVar29,SUB84(dVar23,0));
        bVar35 = 0.0 < fVar29;
      }
      else {
        in_dr4 = dVar23 - in_dr0;
        bVar35 = (double)((ulonglong)uVar2 << 0x20) < in_dr4;
      }
      if (bVar35) {
        if (((*(undefined4 *)(unsigned)(unsigned)0x8c4ab308) & 0x800000) != 0) {
          (*(undefined4 *)(fr0_ - 0x4c)) = 0x8000;
          goto LAB_8c2504bc;
        }
      }
      else {
LAB_8c2504bc:
        pdVar14 = pdVar16 + 2;
        puVar11 = ((undefined1 *)(fr0_ - 0x3c));
        ar6_00 = pdVar17 + 2;
        (vsp = ((unsigned long)(fr0_ - 100)), FUN_8c2361a8(pdVar15 + 2,pdVar14,ar6_00,puVar11));
        uVar28 = SUB84(in_dr0,0);
        ({ unsigned long ri0_ = (unsigned long)(pdVar10); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 100)); FUN_8c25ce48(((undefined1 *)(fr0_ - 0x3c)),pdVar14,ar6_00,puVar11); });
        if (cVar37 == '\0') {
          dVar23 = CONCAT44D(*(undefined4 *)(unsigned)(pdVar16 + 2),*(undefined4 *)(unsigned)(pdVar17 + 2));
        }
        else {
          dVar23 = pdVar16[2];
          in_xd2 = pdVar17[2];
        }
        puVar11 = ((undefined1 *)(unsigned)0x8c4c2620);
        puVar12 = ((undefined1 *)(fr0_ - 0x3c));
        fVar29 = F32LO(dVar33);
        if (cVar36 == '\0') {
          dVar23 = CONCAT44D((F32HI(dVar23) + F32LO(dVar23)) * fVar29,
                                    SUB84(dVar23,0));
        }
        else {
          dVar23 = (dVar23 + dVar23) * dVar33;
        }
        if (cVar37 == '\0') {
          (*(undefined4 *)(fr0_ - 0x30)) = (undefined4)(D2U(dVar23) >> 0x20);
          dVar23 = CONCAT44D(*(undefined4 *)(unsigned)((int)pdVar16 + 0x14),
                                    *(undefined4 *)(unsigned)((int)pdVar17 + 0x14));
        }
        else {
          (*(undefined4 *)(fr0_ - 0x30)) = SUB84(dVar23,0);
          dVar23 = *(double *)(unsigned)((int)pdVar16 + 0x14);
          in_xd2 = *(double *)(unsigned)((int)pdVar17 + 0x14);
        }
        if (cVar36 == '\0') {
          dVar23 = CONCAT44D((F32HI(dVar23) + F32LO(dVar23)) * fVar29,
                                    SUB84(dVar23,0));
        }
        else {
          dVar23 = (dVar23 + dVar23) * dVar33;
        }
        if (cVar37 == '\0') {
          (*(undefined4 *)(fr0_ - 0x2c)) = (undefined4)(D2U(dVar23) >> 0x20);
          dVar23 = CONCAT44D(*(undefined4 *)(unsigned)(pdVar16 + 3),*(undefined4 *)(unsigned)(pdVar17 + 3));
        }
        else {
          (*(undefined4 *)(fr0_ - 0x2c)) = SUB84(dVar23,0);
          dVar23 = pdVar16[3];
          in_xd2 = pdVar17[3];
        }
        if (cVar36 == '\0') {
          dVar23 = CONCAT44D((F32HI(dVar23) + F32LO(dVar23)) * fVar29,
                                    SUB84(dVar23,0));
        }
        else {
          dVar23 = (dVar23 + dVar23) * dVar33;
        }
        fVar29 = F32HI(dVar23);
        (*(float *)(fr0_ - 0x28)) = fVar29;
        if (cVar37 != '\0') {
          (*(float *)(fr0_ - 0x28)) = SUB84(dVar23,0);
          (*(float *)(fr0_ - 0x24)) = fVar29;
        }
        puVar13 = &(*(undefined4 *)(fr0_ - 0x30));
        (vsp = ((unsigned long)(fr0_ - 100)), FUN_8c23bae2(((undefined1 *)(unsigned)0x8c4c2620),puVar13,puVar12,(*(undefined4 *)(fr0_ - 0x4c))));
        uVar30 = SUB84(dVar23,0);
        uVar3 = (vsp = ((unsigned long)(fr0_ - 100)), float_to_color_u8(puVar11,puVar13,puVar12,(*(undefined4 *)(fr0_ - 0x4c))));
        uVar7 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c2630);
        if (cVar37 == '\0') {
          uVar7 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c2634);
        }
        uVar4 = (vsp = ((unsigned long)(fr0_ - 100)), float_to_color_u8(puVar11,puVar13,puVar12,(*(undefined4 *)(fr0_ - 0x4c))));
        uVar31 = SUB84(dVar33,0);
        dVar23 = in_xd14;
        dVar26 = in_xd14;
        if (cVar37 == '\0') {
          dVar23 = in_xd2;
          uVar30 = uVar31;
          dVar26 = CONCAT44D(uVar31,uVar28);
        }
        *(undefined4 *)(unsigned)pdVar15 = 0xe0000000;
        if (cVar37 == '\0') {
          dVar21 = CONCAT44D(*(undefined4 *)(unsigned)(pdVar15 + 6),uVar30);
        }
        else {
          dVar21 = pdVar15[6];
        }
        if (cVar36 == '\0') {
          dVar21 = (double)(ulonglong)
                           (uint)(F32HI(dVar26) *
                                  F32HI(dVar21) + F32LO(dVar21));
        }
        if (cVar37 == '\0') {
          *(int *)(unsigned)(pdVar15 + 4) = SUB84(dVar21,0);
          uVar24 = CONCAT44(*(undefined4 *)(unsigned)((int)pdVar15 + 0x34),uVar31);
          dVar26 = CONCAT44D(uVar31,SUB84(dVar26,0));
        }
        else {
          pdVar15[4] = dVar23;
          uVar24 = *(ulonglong *)(unsigned)((int)pdVar15 + 0x34);
          dVar23 = in_xd14;
          dVar26 = in_xd14;
        }
        if (cVar36 == '\0') {
          uVar24 = (ulonglong)
                   (uint)(F32HI(dVar26) * (float)(uVar24 >> 0x20) +
                         (float)uVar24);
        }
        if (cVar37 == '\0') {
          *(int *)(unsigned)((int)pdVar15 + 0x24) = (int)uVar24;
          dVar26 = CONCAT44D(*(undefined4 *)(unsigned)pdVar15,SUB84(dVar26,0));
          dVar21 = CONCAT44D(*(undefined4 *)(unsigned)((int)pdVar15 + 4),(int)uVar24);
          pdVar15 = pdVar15 + 1;
        }
        else {
          *(double *)(unsigned)((int)pdVar15 + 0x24) = dVar23;
          dVar26 = *pdVar15;
          dVar21 = pdVar15[1];
          pdVar15 = pdVar15 + 2;
        }
        if (cVar37 == '\0') {
          uVar28 = *(undefined4 *)(unsigned)(pdVar15 + 2);
          dVar27 = CONCAT44D(uVar28,uVar7);
          *(undefined4 *)(unsigned)((int)unaff_r8 + 0x1c) = *(undefined4 *)(unsigned)((int)pdVar15 + 0x14);
          *(undefined4 *)(unsigned)(unaff_r8 + 3) = uVar28;
          *(int *)(unsigned)((int)unaff_r8 + 0x14) = (int)(D2U(dVar21) >> 0x20);
          unaff_r8 = unaff_r8 + 2;
          *(int *)(unsigned)unaff_r8 = (int)(D2U(dVar26) >> 0x20);
          dVar21 = (double)(D2U(dVar33) & 0xffffffff);
          dVar26 = CONCAT44D(uVar31,SUB84(dVar26,0));
        }
        else {
          dVar27 = pdVar15[2];
          unaff_r8[3] = pdVar15[3];
          unaff_r8[2] = dVar27;
          unaff_r8[1] = dVar21;
          *unaff_r8 = dVar26;
          dVar23 = in_xd14;
          dVar26 = in_xd14;
        }
        *(undefined4 *)(unsigned)pdVar16 = 0xe0000000;
        if (cVar37 == '\0') {
          dVar21 = CONCAT44D(*(undefined4 *)(unsigned)(pdVar16 + 6),SUB84(dVar21,0));
        }
        else {
          dVar21 = pdVar16[6];
        }
        if (cVar36 == '\0') {
          dVar21 = (double)(ulonglong)
                           (uint)(F32HI(dVar26) *
                                  F32HI(dVar21) + F32LO(dVar21));
        }
        if (cVar37 == '\0') {
          *(int *)(unsigned)(pdVar16 + 4) = SUB84(dVar21,0);
          uVar24 = CONCAT44(*(undefined4 *)(unsigned)((int)pdVar16 + 0x34),uVar31);
          dVar26 = CONCAT44D(uVar31,SUB84(dVar26,0));
        }
        else {
          pdVar16[4] = dVar23;
          uVar24 = *(ulonglong *)(unsigned)((int)pdVar16 + 0x34);
          dVar23 = in_xd14;
          dVar26 = in_xd14;
        }
        if (cVar36 == '\0') {
          uVar24 = (ulonglong)
                   (uint)(F32HI(dVar26) * (float)(uVar24 >> 0x20) +
                         (float)uVar24);
        }
        if (cVar37 == '\0') {
          *(int *)(unsigned)((int)pdVar16 + 0x24) = (int)uVar24;
          dVar26 = CONCAT44D(*(undefined4 *)(unsigned)pdVar16,SUB84(dVar26,0));
          dVar21 = CONCAT44D(*(undefined4 *)(unsigned)((int)pdVar16 + 4),(int)uVar24);
          pdVar16 = pdVar16 + 1;
        }
        else {
          *(double *)(unsigned)((int)pdVar16 + 0x24) = dVar23;
          dVar26 = *pdVar16;
          dVar21 = pdVar16[1];
          pdVar16 = pdVar16 + 2;
        }
        if (cVar37 == '\0') {
          uVar28 = *(undefined4 *)(unsigned)(pdVar16 + 2);
          dVar27 = CONCAT44D(uVar28,SUB84(dVar27,0));
          *(undefined4 *)(unsigned)((int)unaff_r8 + 0x3c) = *(undefined4 *)(unsigned)((int)pdVar16 + 0x14);
          *(undefined4 *)(unsigned)(unaff_r8 + 7) = uVar28;
          *(int *)(unsigned)((int)unaff_r8 + 0x34) = (int)(D2U(dVar21) >> 0x20);
          pdVar15 = unaff_r8 + 6;
          *(int *)(unsigned)pdVar15 = (int)(D2U(dVar26) >> 0x20);
          dVar21 = (double)(D2U(dVar33) & 0xffffffff);
          dVar26 = CONCAT44D(uVar31,SUB84(dVar26,0));
        }
        else {
          dVar27 = pdVar16[2];
          unaff_r8[7] = pdVar16[3];
          unaff_r8[6] = dVar27;
          unaff_r8[5] = dVar21;
          pdVar15 = unaff_r8 + 4;
          *pdVar15 = dVar26;
          dVar26 = in_xd14;
          dVar23 = in_xd14;
        }
        *(undefined4 *)(unsigned)pdVar17 = 0xe0000000;
        *(undefined4 *)(unsigned)(pdVar17 + 5) = uVar3;
        *(undefined4 *)(unsigned)((int)pdVar17 + 0x2c) = uVar4;
        if (cVar37 == '\0') {
          dVar21 = CONCAT44D(*(undefined4 *)(unsigned)(pdVar17 + 6),SUB84(dVar21,0));
        }
        else {
          dVar21 = pdVar17[6];
        }
        if (cVar36 == '\0') {
          dVar21 = (double)(ulonglong)
                           (uint)(F32HI(dVar26) *
                                  F32HI(dVar21) + F32LO(dVar21));
        }
        if (cVar37 == '\0') {
          *(int *)(unsigned)(pdVar17 + 4) = SUB84(dVar21,0);
          uVar24 = CONCAT44(*(undefined4 *)(unsigned)((int)pdVar17 + 0x34),uVar31);
          dVar26 = CONCAT44D(uVar31,SUB84(dVar26,0));
        }
        else {
          pdVar17[4] = dVar23;
          uVar24 = *(ulonglong *)(unsigned)((int)pdVar17 + 0x34);
          dVar23 = in_xd14;
          dVar26 = in_xd14;
        }
        if (cVar36 == '\0') {
          uVar24 = (ulonglong)
                   (uint)(F32HI(dVar26) * (float)(uVar24 >> 0x20) +
                         (float)uVar24);
        }
        if (cVar37 == '\0') {
          *(int *)(unsigned)((int)pdVar17 + 0x24) = (int)uVar24;
          dVar26 = CONCAT44D(*(undefined4 *)(unsigned)pdVar17,SUB84(dVar26,0));
          dVar21 = CONCAT44D(*(undefined4 *)(unsigned)((int)pdVar17 + 4),(int)uVar24);
          pdVar17 = pdVar17 + 1;
        }
        else {
          *(double *)(unsigned)((int)pdVar17 + 0x24) = dVar23;
          dVar26 = *pdVar17;
          dVar21 = pdVar17[1];
          pdVar17 = pdVar17 + 2;
        }
        if (cVar37 == '\0') {
          uVar28 = *(undefined4 *)(unsigned)(pdVar17 + 2);
          dVar27 = CONCAT44D(uVar28,SUB84(dVar27,0));
          *(undefined4 *)(unsigned)((int)pdVar15 + 0x3c) = *(undefined4 *)(unsigned)((int)pdVar17 + 0x14);
          *(undefined4 *)(unsigned)(pdVar15 + 7) = uVar28;
          *(int *)(unsigned)((int)pdVar15 + 0x34) = (int)(D2U(dVar21) >> 0x20);
          pdVar15 = pdVar15 + 6;
          *(int *)(unsigned)pdVar15 = (int)(D2U(dVar26) >> 0x20);
          dVar21 = (double)(D2U(dVar33) & 0xffffffff);
        }
        else {
          dVar27 = pdVar17[2];
          pdVar15[7] = pdVar17[3];
          pdVar15[6] = dVar27;
          pdVar15[5] = dVar21;
          pdVar15 = pdVar15 + 4;
          *pdVar15 = dVar26;
          dVar23 = in_xd14;
        }
        *(undefined4 *)(unsigned)pdVar10 = 0xf0000000;
        dVar22 = in_xd14;
        if (cVar37 == '\0') {
          dVar22 = CONCAT44D(uVar31,SUB84(dVar26,0));
        }
        *(undefined4 *)(unsigned)(pdVar10 + 5) = uVar3;
        *(undefined4 *)(unsigned)((int)pdVar10 + 0x2c) = uVar4;
        if (cVar37 == '\0') {
          dVar26 = CONCAT44D(*(undefined4 *)(unsigned)(pdVar10 + 6),SUB84(dVar21,0));
        }
        else {
          dVar26 = pdVar10[6];
        }
        if (cVar36 == '\0') {
          dVar26 = (double)(ulonglong)
                           (uint)(F32HI(dVar22) *
                                  F32HI(dVar26) + F32LO(dVar26));
        }
        if (cVar37 == '\0') {
          *(int *)(unsigned)(pdVar10 + 4) = SUB84(dVar26,0);
          uVar24 = CONCAT44(*(undefined4 *)(unsigned)((int)pdVar10 + 0x34),uVar31);
          in_xd2 = dVar23;
          dVar23 = CONCAT44D(uVar31,SUB84(dVar22,0));
        }
        else {
          pdVar10[4] = dVar23;
          uVar24 = *(ulonglong *)(unsigned)((int)pdVar10 + 0x34);
          in_xd2 = in_xd14;
          dVar23 = in_xd14;
        }
        if (cVar36 == '\0') {
          uVar24 = (ulonglong)
                   (uint)(F32HI(dVar23) * (float)(uVar24 >> 0x20) +
                         (float)uVar24);
        }
        if (cVar37 == '\0') {
          *(int *)(unsigned)((int)pdVar10 + 0x24) = (int)uVar24;
          in_dr0 = CONCAT44D(*(undefined4 *)(unsigned)pdVar10,SUB84(dVar23,0));
          dVar23 = CONCAT44D(*(undefined4 *)(unsigned)((int)pdVar10 + 4),(int)uVar24);
          pdVar10 = pdVar10 + 1;
        }
        else {
          *(double *)(unsigned)((int)pdVar10 + 0x24) = in_xd2;
          in_dr0 = *pdVar10;
          dVar23 = pdVar10[1];
          pdVar10 = pdVar10 + 2;
        }
        if (cVar37 == '\0') {
          uVar28 = *(undefined4 *)(unsigned)(pdVar10 + 2);
          in_dr4 = CONCAT44D(uVar28,SUB84(dVar27,0));
          *(undefined4 *)(unsigned)((int)pdVar15 + 0x3c) = *(undefined4 *)(unsigned)((int)pdVar10 + 0x14);
          *(undefined4 *)(unsigned)(pdVar15 + 7) = uVar28;
          *(int *)(unsigned)((int)pdVar15 + 0x34) = (int)(D2U(dVar23) >> 0x20);
          pdVar15 = pdVar15 + 6;
          *(int *)(unsigned)pdVar15 = (int)((ulonglong)in_dr0 >> 0x20);
        }
        else {
          in_dr4 = pdVar10[2];
          pdVar15[7] = pdVar10[3];
          pdVar15[6] = in_dr4;
          pdVar15[5] = dVar23;
          pdVar15 = pdVar15 + 4;
          *pdVar15 = in_dr0;
        }
        unaff_r8 = pdVar15 + 4;
        (*(undefined4 *)(unsigned)(unsigned)0x8c4aa520) = (*(undefined4 *)(unsigned)(unsigned)0x8c4aa520) + 4;
      }
    }
  }
  else if (uVar2 == 0x8000) {
    puVar11 = ((undefined1 *)(unsigned)0x8c4c2620);
    for ((*(int *)(fr0_ - 0x58)) = 0; uVar2 = (uint)ar4[1], (*(int *)(fr0_ - 0x58)) < (int)uVar2; (*(int *)(fr0_ - 0x58)) = (*(int *)(fr0_ - 0x58)) + 1) {
      puVar20 = puVar18 + 1;
      uVar2 = (uint)*puVar18;
      (*(undefined4 *)(unsigned)(unsigned)0x8c4aa51c) = (*(undefined4 *)(unsigned)(unsigned)0x8c4aa51c) + uVar2;
      iVar8 = (uint)*puVar20 * 0x40 + (*(undefined4 *)(unsigned)(unsigned)0x8c4aa510);
      iVar5 = (uint)puVar18[2] * 0x40 + (*(undefined4 *)(unsigned)(unsigned)0x8c4aa510);
      iVar6 = (uint)puVar18[3] * 0x40 + (*(undefined4 *)(unsigned)(unsigned)0x8c4aa510);
      if (cVar37 == '\0') {
        uVar28 = *(undefined4 *)(unsigned)(iVar5 + 4);
        dVar23 = CONCAT44D(uVar28,*(undefined4 *)(unsigned)(iVar8 + 4));
        dVar26 = CONCAT44D(uVar28,SUB84(in_dr4,0));
      }
      else {
        dVar23 = *(double *)(unsigned)(iVar5 + 4);
        in_xd2 = *(double *)(unsigned)(iVar8 + 4);
        uVar28 = (undefined4)(D2U(dVar23) >> 0x20);
        dVar26 = dVar23;
      }
      if (cVar36 == '\0') {
        dVar23 = CONCAT44D(F32HI(dVar23) - F32LO(dVar23),
                                  SUB84(dVar23,0));
      }
      else {
        dVar23 = dVar23 - dVar23;
      }
      if (cVar37 == '\0') {
        dVar23 = CONCAT44D((int)(D2U(dVar23) >> 0x20),*(undefined4 *)(unsigned)(iVar6 + 8));
        dVar26 = CONCAT44D(uVar28,*(undefined4 *)(unsigned)(iVar5 + 8));
      }
      else {
        in_xd2 = *(double *)(unsigned)(iVar6 + 8);
      }
      fVar29 = F32LO(dVar26);
      if (cVar36 == '\0') {
        dVar23 = CONCAT44D((int)(D2U(dVar23) >> 0x20),F32LO(dVar23) - fVar29);
      }
      else {
        dVar23 = dVar23 - dVar26;
      }
      if (cVar37 == '\0') {
        in_dr0 = CONCAT44D((int)((ulonglong)in_dr0 >> 0x20),fVar29);
      }
      if (cVar36 == '\0') {
        dVar23 = CONCAT44D(F32HI(dVar23) * F32LO(dVar23),
                                  SUB84(dVar23,0));
      }
      else {
        dVar23 = dVar23 * dVar23;
      }
      if (cVar37 == '\0') {
        dVar23 = CONCAT44D((int)(D2U(dVar23) >> 0x20),*(undefined4 *)(unsigned)(iVar8 + 8));
      }
      else {
        in_xd2 = *(double *)(unsigned)(iVar8 + 8);
      }
      if (cVar36 == '\0') {
        dVar21 = CONCAT44D((int)((ulonglong)in_dr0 >> 0x20),F32LO(in_dr0) - F32LO(dVar23)
                                 );
      }
      else {
        dVar21 = in_dr0 - dVar23;
      }
      if (cVar37 == '\0') {
        dVar23 = CONCAT44D((int)(D2U(dVar23) >> 0x20),*(undefined4 *)(unsigned)(iVar6 + 4));
      }
      else {
        in_xd2 = *(double *)(unsigned)(iVar6 + 4);
      }
      (*(undefined4 *)(fr0_ - 0x48)) = 0;
      if (cVar36 == '\0') {
        dVar23 = CONCAT44D((int)(D2U(dVar23) >> 0x20),
                                  F32LO(dVar23) - F32HI(dVar26));
      }
      else {
        dVar23 = dVar23 - dVar26;
      }
      uVar25 = (uint)(D2U(dVar23) >> 0x20);
      dVar26 = dVar23;
      if (cVar37 == '\0') {
        dVar26 = CONCAT44D(uVar25,fVar29);
      }
      if (cVar36 == '\0') {
        in_dr0 = CONCAT44D((int)(D2U(dVar21) >> 0x20),F32LO(dVar21) * F32LO(dVar23)
                                 );
      }
      else {
        in_dr0 = dVar21 * dVar23;
      }
      if (cVar36 == '\0') {
        fVar29 = F32HI(dVar26) - F32LO(in_dr0);
        in_dr4 = CONCAT44D(fVar29,SUB84(dVar26,0));
        bVar35 = 0.0 < fVar29;
      }
      else {
        in_dr4 = dVar26 - in_dr0;
        bVar35 = (double)((ulonglong)uVar25 << 0x20) < in_dr4;
      }
      if (bVar35) {
        if (((*(undefined4 *)(unsigned)(unsigned)0x8c4ab308) & 0x800000) != 0) {
          (*(undefined4 *)(fr0_ - 0x48)) = 0x8000;
          goto LAB_8c250778;
        }
        puVar18 = puVar20 + uVar2;
      }
      else {
LAB_8c250778:
        puVar12 = ((undefined1 *)(fr0_ - 0x3c));
        (*(undefined4 *)(unsigned)(unsigned)0x8c4aa520) = (*(undefined4 *)(unsigned)(unsigned)0x8c4aa520) + uVar2;
        iVar6 = iVar6 + 0x10;
        iVar5 = iVar5 + 0x10;
        (vsp = ((unsigned long)(fr0_ - 100)), FUN_8c2361a8(iVar8 + 0x10,iVar5,iVar6,puVar12));
        uVar28 = SUB84(in_dr0,0);
        ({ unsigned long ri0_ = (unsigned long)(puVar11); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 100)); FUN_8c25ce48(((undefined1 *)(fr0_ - 0x3c)),iVar5,iVar6,puVar12); });
        iVar5 = (uint)puVar20[((int)uVar2 >> 1) + -1] * 0x40 + (*(undefined4 *)(unsigned)(unsigned)0x8c4aa510);
        if (cVar37 == '\0') {
          (*(undefined4 *)(fr0_ - 0x30)) = *(undefined4 *)(unsigned)(iVar5 + 0x10);
          (*(undefined4 *)(fr0_ - 0x2c)) = *(undefined4 *)(unsigned)(iVar5 + 0x14);
          (*(float *)(fr0_ - 0x28)) = *(float *)(unsigned)(iVar5 + 0x18);
        }
        else {
          (*(undefined4 *)(fr0_ - 0x30)) = (undefined4)*(undefined8 *)(unsigned)(iVar5 + 0x10);
          (*(undefined4 *)(fr0_ - 0x2c)) = (undefined4)*(undefined8 *)(unsigned)(iVar5 + 0x14);
          in_xd2 = *(double *)(unsigned)(iVar5 + 0x18);
          (*(float *)(fr0_ - 0x28)) = SUB84(in_xd2,0);
          (*(float *)(fr0_ - 0x24)) = F32HI(in_xd2);
        }
        iVar5 = (uint)puVar20[(int)uVar2 >> 1] * 0x40 + (*(undefined4 *)(unsigned)(unsigned)0x8c4aa510);
        if (cVar37 == '\0') {
          dVar23 = CONCAT44D((*(undefined4 *)(fr0_ - 0x30)),*(undefined4 *)(unsigned)(iVar5 + 0x10));
        }
        else {
          in_xd2 = *(double *)(unsigned)(iVar5 + 0x10);
          dVar23 = CONCAT44D((*(undefined4 *)(fr0_ - 0x2c)),(*(undefined4 *)(fr0_ - 0x30)));
        }
        if (cVar36 == '\0') {
          dVar23 = CONCAT44D(F32HI(dVar23) + F32LO(dVar23),
                                    SUB84(dVar23,0));
        }
        else {
          dVar23 = dVar23 + dVar23;
        }
        uVar30 = (undefined4)(D2U(dVar23) >> 0x20);
        if (cVar37 == '\0') {
          dVar23 = CONCAT44D((*(undefined4 *)(fr0_ - 0x2c)),*(undefined4 *)(unsigned)(iVar5 + 0x14));
          (*(undefined4 *)(fr0_ - 0x30)) = uVar30;
        }
        else {
          (*(undefined4 *)(fr0_ - 0x30)) = SUB84(dVar23,0);
          in_xd2 = *(double *)(unsigned)(iVar5 + 0x14);
          dVar23 = CONCAT44D((*(float *)(fr0_ - 0x28)),uVar30);
        }
        if (cVar36 == '\0') {
          dVar23 = CONCAT44D(F32HI(dVar23) + F32LO(dVar23),
                                    SUB84(dVar23,0));
        }
        else {
          dVar23 = dVar23 + dVar23;
        }
        uVar30 = (undefined4)(D2U(dVar23) >> 0x20);
        if (cVar37 == '\0') {
          dVar23 = CONCAT44D((*(float *)(fr0_ - 0x28)),*(undefined4 *)(unsigned)(iVar5 + 0x18));
          (*(undefined4 *)(fr0_ - 0x2c)) = uVar30;
        }
        else {
          (*(undefined4 *)(fr0_ - 0x2c)) = SUB84(dVar23,0);
          in_xd2 = *(double *)(unsigned)(iVar5 + 0x18);
          dVar23 = CONCAT44D((*(float *)(fr0_ - 0x24)),uVar30);
        }
        if (cVar36 == '\0') {
          dVar23 = CONCAT44D(F32HI(dVar23) + F32LO(dVar23),
                                    SUB84(dVar23,0));
        }
        else {
          dVar23 = dVar23 + dVar23;
        }
        fVar29 = F32HI(dVar23);
        if (cVar37 == '\0') {
          dVar23 = CONCAT44D(fVar29,(*(undefined4 *)(fr0_ - 0x30)));
          (*(float *)(fr0_ - 0x28)) = fVar29;
        }
        else {
          (*(float *)(fr0_ - 0x28)) = SUB84(dVar23,0);
          in_xd2 = CONCAT44D((*(undefined4 *)(fr0_ - 0x2c)),(*(undefined4 *)(fr0_ - 0x30)));
          (*(float *)(fr0_ - 0x24)) = fVar29;
        }
        fVar29 = F32LO(dVar33);
        if (cVar36 == '\0') {
          dVar23 = CONCAT44D((int)(D2U(dVar23) >> 0x20),F32LO(dVar23) * fVar29);
        }
        else {
          dVar23 = dVar23 * dVar33;
        }
        if (cVar37 == '\0') {
          (*(undefined4 *)(fr0_ - 0x30)) = SUB84(dVar23,0);
          dVar23 = CONCAT44D((int)(D2U(dVar23) >> 0x20),(*(undefined4 *)(fr0_ - 0x2c)));
        }
        else {
          (*(undefined4 *)(fr0_ - 0x30)) = SUB84(in_xd2,0);
          (*(undefined4 *)(fr0_ - 0x2c)) = (undefined4)((ulonglong)in_xd2 >> 0x20);
          in_xd2 = CONCAT44D((*(float *)(fr0_ - 0x28)),(*(undefined4 *)(fr0_ - 0x2c)));
        }
        if (cVar36 == '\0') {
          dVar23 = CONCAT44D((int)(D2U(dVar23) >> 0x20),F32LO(dVar23) * fVar29);
        }
        else {
          dVar23 = dVar23 * dVar33;
        }
        puVar12 = ((undefined1 *)(unsigned)0x8c4c2620);
        ar6_01 = ((undefined1 *)(fr0_ - 0x3c));
        if (cVar37 == '\0') {
          (*(undefined4 *)(fr0_ - 0x2c)) = SUB84(dVar23,0);
          dVar23 = CONCAT44D((int)(D2U(dVar23) >> 0x20),(*(float *)(fr0_ - 0x28)));
        }
        else {
          (*(undefined4 *)(fr0_ - 0x2c)) = SUB84(in_xd2,0);
          (*(float *)(fr0_ - 0x28)) = F32HI(in_xd2);
          in_xd2 = CONCAT44D((*(float *)(fr0_ - 0x24)),(*(float *)(fr0_ - 0x28)));
        }
        if (cVar36 == '\0') {
          fVar29 = F32LO(dVar23) * fVar29;
        }
        else {
          fVar29 = SUB84(dVar23 * dVar33,0);
        }
        (*(float *)(fr0_ - 0x28)) = fVar29;
        if (cVar37 != '\0') {
          (*(float *)(fr0_ - 0x28)) = SUB84(in_xd2,0);
          (*(float *)(fr0_ - 0x24)) = F32HI(in_xd2);
        }
        puVar13 = &(*(undefined4 *)(fr0_ - 0x30));
        (vsp = ((unsigned long)(fr0_ - 100)), FUN_8c23bae2(((undefined1 *)(unsigned)0x8c4c2620),puVar13,ar6_01,(*(undefined4 *)(fr0_ - 0x48))));
        uVar7 = (vsp = ((unsigned long)(fr0_ - 100)), float_to_color_u8(puVar12,puVar13,ar6_01,(*(undefined4 *)(fr0_ - 0x48))));
        uVar30 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c2630);
        if (cVar37 == '\0') {
          uVar30 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c2634);
        }
        uVar3 = (vsp = ((unsigned long)(fr0_ - 100)), float_to_color_u8(puVar12,puVar13,ar6_01,(*(undefined4 *)(fr0_ - 0x48))));
        fVar32 = F32LO(dVar33);
        dVar23 = in_xd14;
        if (cVar37 == '\0') {
          dVar23 = CONCAT44D(fVar32,uVar28);
        }
        dVar26 = in_xd14;
        if (cVar37 == '\0') {
          dVar26 = in_xd2;
          fVar29 = fVar32;
        }
        pdVar10 = (double *)(unsigned)((uint)*puVar20 * 0x40 + (*(undefined4 *)(unsigned)(unsigned)0x8c4aa510));
        *(undefined4 *)(unsigned)pdVar10 = 0xe0000000;
        if (cVar37 == '\0') {
          dVar21 = CONCAT44D(*(undefined4 *)(unsigned)(pdVar10 + 6),fVar29);
        }
        else {
          dVar21 = pdVar10[6];
        }
        if (cVar36 == '\0') {
          dVar21 = (double)(ulonglong)
                           (uint)(F32HI(dVar23) *
                                  F32HI(dVar21) + F32LO(dVar21));
        }
        if (cVar37 == '\0') {
          *(int *)(unsigned)(pdVar10 + 4) = SUB84(dVar21,0);
          uVar24 = CONCAT44(*(undefined4 *)(unsigned)((int)pdVar10 + 0x34),fVar32);
          dVar23 = CONCAT44D(fVar32,SUB84(dVar23,0));
        }
        else {
          pdVar10[4] = dVar26;
          uVar24 = *(ulonglong *)(unsigned)((int)pdVar10 + 0x34);
          dVar26 = in_xd14;
          dVar23 = in_xd14;
        }
        if (cVar36 == '\0') {
          uVar24 = (ulonglong)
                   (uint)(F32HI(dVar23) * (float)(uVar24 >> 0x20) +
                         (float)uVar24);
        }
        if (cVar37 == '\0') {
          *(int *)(unsigned)((int)pdVar10 + 0x24) = (int)uVar24;
          dVar23 = CONCAT44D(*(undefined4 *)(unsigned)pdVar10,SUB84(dVar23,0));
          dVar21 = CONCAT44D(*(undefined4 *)(unsigned)((int)pdVar10 + 4),(int)uVar24);
          pdVar10 = pdVar10 + 1;
        }
        else {
          *(double *)(unsigned)((int)pdVar10 + 0x24) = dVar26;
          dVar23 = *pdVar10;
          dVar21 = pdVar10[1];
          pdVar10 = pdVar10 + 2;
        }
        if (cVar37 == '\0') {
          uVar28 = *(undefined4 *)(unsigned)(pdVar10 + 2);
          dVar27 = CONCAT44D(uVar28,uVar30);
          *(undefined4 *)(unsigned)((int)unaff_r8 + 0x1c) = *(undefined4 *)(unsigned)((int)pdVar10 + 0x14);
          *(undefined4 *)(unsigned)(unaff_r8 + 3) = uVar28;
          *(int *)(unsigned)((int)unaff_r8 + 0x14) = (int)(D2U(dVar21) >> 0x20);
          unaff_r8 = unaff_r8 + 2;
          *(int *)(unsigned)unaff_r8 = (int)(D2U(dVar23) >> 0x20);
        }
        else {
          dVar27 = pdVar10[2];
          unaff_r8[3] = pdVar10[3];
          unaff_r8[2] = dVar27;
          unaff_r8[1] = dVar21;
          *unaff_r8 = dVar23;
        }
        puVar20 = puVar18 + 3;
        dVar34 = in_xd14;
        dVar22 = in_xd14;
        if (cVar37 == '\0') {
          dVar21 = (double)(D2U(dVar33) & 0xffffffff);
          dVar34 = dVar26;
          dVar22 = CONCAT44D(fVar32,SUB84(dVar23,0));
        }
        pdVar10 = (double *)(unsigned)((uint)puVar18[2] * 0x40 + (*(undefined4 *)(unsigned)(unsigned)0x8c4aa510));
        *(undefined4 *)(unsigned)pdVar10 = 0xe0000000;
        if (cVar37 == '\0') {
          dVar23 = CONCAT44D(*(undefined4 *)(unsigned)(pdVar10 + 6),SUB84(dVar21,0));
        }
        else {
          dVar23 = pdVar10[6];
        }
        if (cVar36 == '\0') {
          dVar23 = (double)(ulonglong)
                           (uint)(F32HI(dVar22) *
                                  F32HI(dVar23) + F32LO(dVar23));
        }
        if (cVar37 == '\0') {
          *(int *)(unsigned)(pdVar10 + 4) = SUB84(dVar23,0);
          uVar24 = CONCAT44(*(undefined4 *)(unsigned)((int)pdVar10 + 0x34),fVar32);
          dVar23 = CONCAT44D(fVar32,SUB84(dVar22,0));
        }
        else {
          pdVar10[4] = dVar34;
          uVar24 = *(ulonglong *)(unsigned)((int)pdVar10 + 0x34);
          dVar34 = in_xd14;
          dVar23 = in_xd14;
        }
        if (cVar36 == '\0') {
          uVar24 = (ulonglong)
                   (uint)(F32HI(dVar23) * (float)(uVar24 >> 0x20) +
                         (float)uVar24);
        }
        if (cVar37 == '\0') {
          *(int *)(unsigned)((int)pdVar10 + 0x24) = (int)uVar24;
          dVar23 = CONCAT44D(*(undefined4 *)(unsigned)pdVar10,SUB84(dVar23,0));
          dVar26 = CONCAT44D(*(undefined4 *)(unsigned)((int)pdVar10 + 4),(int)uVar24);
          pdVar10 = pdVar10 + 1;
        }
        else {
          *(double *)(unsigned)((int)pdVar10 + 0x24) = dVar34;
          dVar23 = *pdVar10;
          dVar26 = pdVar10[1];
          pdVar10 = pdVar10 + 2;
        }
        if (cVar37 == '\0') {
          uVar28 = *(undefined4 *)(unsigned)(pdVar10 + 2);
          dVar21 = CONCAT44D(uVar28,SUB84(dVar27,0));
          *(undefined4 *)(unsigned)((int)unaff_r8 + 0x3c) = *(undefined4 *)(unsigned)((int)pdVar10 + 0x14);
          *(undefined4 *)(unsigned)(unaff_r8 + 7) = uVar28;
          *(int *)(unsigned)((int)unaff_r8 + 0x34) = (int)(D2U(dVar26) >> 0x20);
          pdVar10 = unaff_r8 + 6;
          *(int *)(unsigned)pdVar10 = (int)(D2U(dVar23) >> 0x20);
        }
        else {
          dVar21 = pdVar10[2];
          unaff_r8[7] = pdVar10[3];
          unaff_r8[6] = dVar21;
          unaff_r8[5] = dVar26;
          pdVar10 = unaff_r8 + 4;
          *pdVar10 = dVar23;
        }
        uVar28 = SUB84(dVar21,0);
        pdVar10 = pdVar10 + 4;
        (*(int *)(fr0_ - 0x60)) = 2;
        if (2 < (int)(uVar2 - 1)) {
          do {
            fVar29 = F32LO(dVar26);
            uVar1 = *puVar20;
            puVar20 = puVar20 + 1;
            dVar27 = in_xd14;
            dVar26 = in_xd14;
            if (cVar37 == '\0') {
              dVar27 = dVar34;
              fVar29 = fVar32;
              dVar26 = CONCAT44D(fVar32,SUB84(dVar23,0));
            }
            pdVar15 = (double *)(unsigned)((uint)uVar1 * 0x40 + (*(undefined4 *)(unsigned)(unsigned)0x8c4aa510));
            *(undefined4 *)(unsigned)pdVar15 = 0xe0000000;
            *(undefined4 *)(unsigned)(pdVar15 + 5) = uVar7;
            *(undefined4 *)(unsigned)((int)pdVar15 + 0x2c) = uVar3;
            if (cVar37 == '\0') {
              dVar23 = CONCAT44D(*(undefined4 *)(unsigned)(pdVar15 + 6),fVar29);
            }
            else {
              dVar23 = pdVar15[6];
            }
            if (cVar36 == '\0') {
              dVar23 = (double)(ulonglong)
                               (uint)(F32HI(dVar26) *
                                      F32HI(dVar23) + F32LO(dVar23));
            }
            if (cVar37 == '\0') {
              *(int *)(unsigned)(pdVar15 + 4) = SUB84(dVar23,0);
              uVar24 = CONCAT44(*(undefined4 *)(unsigned)((int)pdVar15 + 0x34),fVar32);
              dVar34 = dVar27;
              dVar23 = CONCAT44D(fVar32,SUB84(dVar26,0));
            }
            else {
              pdVar15[4] = dVar27;
              uVar24 = *(ulonglong *)(unsigned)((int)pdVar15 + 0x34);
              dVar34 = in_xd14;
              dVar23 = in_xd14;
            }
            if (cVar36 == '\0') {
              uVar24 = (ulonglong)
                       (uint)(F32HI(dVar23) * (float)(uVar24 >> 0x20) +
                             (float)uVar24);
            }
            if (cVar37 == '\0') {
              *(int *)(unsigned)((int)pdVar15 + 0x24) = (int)uVar24;
              dVar23 = CONCAT44D(*(undefined4 *)(unsigned)pdVar15,SUB84(dVar23,0));
              dVar26 = CONCAT44D(*(undefined4 *)(unsigned)((int)pdVar15 + 4),(int)uVar24);
              pdVar15 = pdVar15 + 1;
            }
            else {
              *(double *)(unsigned)((int)pdVar15 + 0x24) = dVar34;
              dVar23 = *pdVar15;
              dVar26 = pdVar15[1];
              pdVar15 = pdVar15 + 2;
            }
            if (cVar37 == '\0') {
              uVar28 = *(undefined4 *)(unsigned)(pdVar15 + 2);
              dVar21 = CONCAT44D(uVar28,SUB84(dVar21,0));
              *(undefined4 *)(unsigned)((int)pdVar10 + 0x1c) = *(undefined4 *)(unsigned)((int)pdVar15 + 0x14);
              *(undefined4 *)(unsigned)(pdVar10 + 3) = uVar28;
              *(int *)(unsigned)((int)pdVar10 + 0x14) = (int)(D2U(dVar26) >> 0x20);
              pdVar10 = pdVar10 + 2;
              *(int *)(unsigned)pdVar10 = (int)(D2U(dVar23) >> 0x20);
            }
            else {
              dVar21 = pdVar15[2];
              pdVar10[3] = pdVar15[3];
              pdVar10[2] = dVar21;
              pdVar10[1] = dVar26;
              *pdVar10 = dVar23;
            }
            uVar28 = SUB84(dVar21,0);
            pdVar10 = pdVar10 + 4;
            (*(int *)(fr0_ - 0x60)) = (*(int *)(fr0_ - 0x60)) + 1;
          } while ((*(int *)(fr0_ - 0x60)) < (int)(uVar2 - 1));
        }
        fVar29 = F32LO(dVar26);
        puVar18 = puVar20 + 1;
        in_xd2 = in_xd14;
        dVar26 = in_xd14;
        if (cVar37 == '\0') {
          in_xd2 = dVar34;
          fVar29 = fVar32;
          dVar26 = CONCAT44D(fVar32,SUB84(dVar23,0));
        }
        pdVar15 = (double *)(unsigned)((uint)*puVar20 * 0x40 + (*(undefined4 *)(unsigned)(unsigned)0x8c4aa510));
        *(undefined4 *)(unsigned)pdVar15 = 0xf0000000;
        *(undefined4 *)(unsigned)(pdVar15 + 5) = uVar7;
        *(undefined4 *)(unsigned)((int)pdVar15 + 0x2c) = uVar3;
        if (cVar37 == '\0') {
          dVar23 = CONCAT44D(*(undefined4 *)(unsigned)(pdVar15 + 6),fVar29);
        }
        else {
          dVar23 = pdVar15[6];
        }
        if (cVar36 == '\0') {
          dVar23 = (double)(ulonglong)
                           (uint)(F32HI(dVar26) *
                                  F32HI(dVar23) + F32LO(dVar23));
        }
        if (cVar37 == '\0') {
          *(int *)(unsigned)(pdVar15 + 4) = SUB84(dVar23,0);
          uVar24 = CONCAT44(*(undefined4 *)(unsigned)((int)pdVar15 + 0x34),fVar32);
          dVar23 = CONCAT44D(fVar32,SUB84(dVar26,0));
        }
        else {
          pdVar15[4] = in_xd2;
          uVar24 = *(ulonglong *)(unsigned)((int)pdVar15 + 0x34);
          in_xd2 = in_xd14;
          dVar23 = in_xd14;
        }
        if (cVar36 == '\0') {
          uVar24 = (ulonglong)
                   (uint)(F32HI(dVar23) * (float)(uVar24 >> 0x20) +
                         (float)uVar24);
        }
        if (cVar37 == '\0') {
          *(int *)(unsigned)((int)pdVar15 + 0x24) = (int)uVar24;
          in_dr0 = CONCAT44D(*(undefined4 *)(unsigned)pdVar15,SUB84(dVar23,0));
          dVar23 = CONCAT44D(*(undefined4 *)(unsigned)((int)pdVar15 + 4),(int)uVar24);
          pdVar15 = pdVar15 + 1;
        }
        else {
          *(double *)(unsigned)((int)pdVar15 + 0x24) = in_xd2;
          in_dr0 = *pdVar15;
          dVar23 = pdVar15[1];
          pdVar15 = pdVar15 + 2;
        }
        if (cVar37 == '\0') {
          uVar30 = *(undefined4 *)(unsigned)(pdVar15 + 2);
          in_dr4 = CONCAT44D(uVar30,uVar28);
          *(undefined4 *)(unsigned)((int)pdVar10 + 0x1c) = *(undefined4 *)(unsigned)((int)pdVar15 + 0x14);
          *(undefined4 *)(unsigned)(pdVar10 + 3) = uVar30;
          *(int *)(unsigned)((int)pdVar10 + 0x14) = (int)(D2U(dVar23) >> 0x20);
          pdVar10 = pdVar10 + 2;
          *(int *)(unsigned)pdVar10 = (int)((ulonglong)in_dr0 >> 0x20);
        }
        else {
          in_dr4 = pdVar15[2];
          pdVar10[3] = pdVar15[3];
          pdVar10[2] = in_dr4;
          pdVar10[1] = dVar23;
          *pdVar10 = in_dr0;
        }
        unaff_r8 = pdVar10 + 4;
      }
    }
  }
  else if (uVar2 == 0xc000) {
    if (((*(undefined4 *)(unsigned)(unsigned)0x8c4ab308) & 0x800000) == 0) {
      pcVar9 = ((void *)0x8c241722);
    }
    else {
      pcVar9 = ((void *)0x8c24149e);
    }
    uVar2 = (vsp = ((unsigned long)(fr0_ - 100)), (*(code *)xlat((unsigned long)pcVar9))(ar4,uVar1 & 0x3fff,ar6,ar7));
  }
  return uVar2;
}

__asm__(".globl _FUN_8c250144\n.set _FUN_8c250144, _FUN_8c250144_def\n");
