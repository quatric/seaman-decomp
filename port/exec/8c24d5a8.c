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
uint FUN_8c24d5a8_def(ushort *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c24d5a8";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 96; for (int i_ = 0; i_ < 96; i_++) z_[i_] = 0; }
  ushort uVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  double *pdVar7;
  double *pdVar8;
  code *pcVar9;
  double *pdVar10;
  int iVar11;
  undefined1 *puVar12;
  undefined1 *puVar13;
  undefined4 *puVar14;
  double *pdVar15;
  double *ar6_00;
  undefined1 *ar6_01;
  double *unaff_r8 = 0;
  double *pdVar16;
  ushort *puVar17;
  ushort *puVar18;
  short *psVar19;
  short *psVar20;
  double in_dr0 = 0;
  double dVar21;
  double in_dr2 = 0;
  undefined4 uVar22;
  uint uVar23;
  undefined4 uVar24;
  double in_dr4 = 0;
  double dVar25;
  float fVar27;
  undefined4 uVar28;
  double dVar26;
  undefined4 uVar29;
  undefined8 in_dr14 = 0;
  double dVar30;
  double in_xd2 = 0;
  double dVar31;
  double in_xd14 = 0;
  bool bVar32;
  undefined4 in_PR = 0;
  char cVar33;
  char cVar34;
  
  cVar34 = '\0';
  cVar33 = '\0';
  (*(undefined4 *)(fr0_ - 0x1c)) = (undefined4)in_dr14;
  (*(undefined4 *)(fr0_ - 0x20)) = (undefined4)((ulonglong)in_dr14 >> 0x20);
  uVar1 = *ar4;
  dVar30 = 3.0517584889366844e-05;
  uVar2 = uVar1 & 0xc000;
  puVar17 = ((ushort *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 2));
  psVar19 = ((short *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 10));
  (*(undefined4 *)(fr0_ - 0x24)) = in_PR;
  if ((uVar1 & 0xc000) == 0) {
    (*(undefined4 *)(unsigned)(unsigned)0x8c4aa51c) = (*(undefined4 *)(unsigned)(unsigned)0x8c4aa51c) + (uint)ar4[1] * 3;
    (*(int *)(fr0_ - 0x58)) = 0;
    dVar30 = 7.946779225775913e-07;
    while( true ) {
      uVar24 = SUB84(in_dr2,0);
      uVar2 = (uint)ar4[1];
      if ((int)uVar2 <= (*(int *)(fr0_ - 0x58))) break;
      pdVar8 = (double *)(unsigned)((uint)*puVar17 * 0x40 + (*(undefined4 *)(unsigned)(unsigned)0x8c4aa510));
      puVar18 = puVar17 + 2;
      pdVar7 = (double *)(unsigned)((uint)puVar17[1] * 0x40 + (*(undefined4 *)(unsigned)(unsigned)0x8c4aa510));
      if (cVar34 == '\0') {
        dVar31 = CONCAT44D(*(undefined4 *)(unsigned)((int)pdVar7 + 4),SUB84(in_dr4,0));
      }
      else {
        dVar31 = *(double *)(unsigned)((int)pdVar7 + 4);
      }
      puVar17 = puVar17 + 3;
      if (cVar34 == '\0') {
        uVar24 = *(undefined4 *)(unsigned)((int)pdVar8 + 4);
      }
      else {
        in_xd2 = *(double *)(unsigned)((int)pdVar8 + 4);
      }
      uVar28 = (undefined4)(D2U(dVar31) >> 0x20);
      dVar25 = dVar31;
      if (cVar34 == '\0') {
        dVar25 = CONCAT44D(uVar28,uVar24);
      }
      if (cVar33 == '\0') {
        dVar25 = CONCAT44D(F32HI(dVar25) - F32LO(dVar25),
                                  SUB84(dVar25,0));
      }
      else {
        dVar25 = dVar25 - dVar25;
      }
      pdVar10 = (double *)(unsigned)((uint)*puVar18 * 0x40 + (*(undefined4 *)(unsigned)(unsigned)0x8c4aa510));
      if (cVar34 == '\0') {
        dVar25 = CONCAT44D((int)(D2U(dVar25) >> 0x20),*(undefined4 *)(unsigned)(pdVar10 + 1));
        dVar31 = CONCAT44D(uVar28,*(undefined4 *)(unsigned)(pdVar7 + 1));
      }
      else {
        in_xd2 = pdVar10[1];
      }
      fVar27 = F32LO(dVar31);
      if (cVar33 == '\0') {
        dVar25 = CONCAT44D((int)(D2U(dVar25) >> 0x20),F32LO(dVar25) - fVar27);
      }
      else {
        dVar25 = dVar25 - dVar31;
      }
      if (cVar34 == '\0') {
        in_dr0 = CONCAT44D((int)((ulonglong)in_dr0 >> 0x20),fVar27);
      }
      if (cVar33 == '\0') {
        dVar25 = CONCAT44D(F32HI(dVar25) * F32LO(dVar25),
                                  SUB84(dVar25,0));
      }
      else {
        dVar25 = dVar25 * dVar25;
      }
      if (cVar34 == '\0') {
        dVar25 = CONCAT44D((int)(D2U(dVar25) >> 0x20),*(undefined4 *)(unsigned)(pdVar8 + 1));
      }
      else {
        in_xd2 = pdVar8[1];
      }
      if (cVar33 == '\0') {
        dVar21 = CONCAT44D((int)((ulonglong)in_dr0 >> 0x20),F32LO(in_dr0) - F32LO(dVar25)
                                 );
      }
      else {
        dVar21 = in_dr0 - dVar25;
      }
      if (cVar34 == '\0') {
        dVar25 = CONCAT44D((int)(D2U(dVar25) >> 0x20),*(undefined4 *)(unsigned)((int)pdVar10 + 4)
                                 );
      }
      else {
        in_xd2 = *(double *)(unsigned)((int)pdVar10 + 4);
      }
      if (cVar33 == '\0') {
        dVar25 = CONCAT44D((int)(D2U(dVar25) >> 0x20),
                                  F32LO(dVar25) - F32HI(dVar31));
      }
      else {
        dVar25 = dVar25 - dVar31;
      }
      uVar2 = (uint)(D2U(dVar25) >> 0x20);
      dVar31 = dVar25;
      if (cVar34 == '\0') {
        dVar31 = CONCAT44D(uVar2,fVar27);
      }
      (*(int *)(fr0_ - 0x50)) = 0;
      if (cVar33 == '\0') {
        in_dr0 = CONCAT44D((int)(D2U(dVar21) >> 0x20),F32LO(dVar21) * F32LO(dVar25)
                                 );
      }
      else {
        in_dr0 = dVar21 * dVar25;
      }
      in_dr2 = (double)((ulonglong)uVar2 << 0x20);
      if (cVar33 == '\0') {
        fVar27 = F32HI(dVar31) - F32LO(in_dr0);
        in_dr4 = CONCAT44D(fVar27,SUB84(dVar31,0));
        bVar32 = 0.0 < fVar27;
      }
      else {
        in_dr4 = dVar31 - in_dr0;
        bVar32 = in_dr2 < in_dr4;
      }
      if (bVar32) {
        if (((*(undefined4 *)(unsigned)(unsigned)0x8c4ab308) & 0x800000) != 0) {
          (*(int *)(fr0_ - 0x50)) = 0x8000;
          goto LAB_8c24d6e8;
        }
      }
      else {
LAB_8c24d6e8:
        pdVar16 = pdVar7 + 2;
        puVar12 = ((undefined1 *)(fr0_ - 0x3c));
        pdVar15 = pdVar10 + 2;
        (vsp = ((unsigned long)(fr0_ - 96)), FUN_8c2361a8(pdVar8 + 2,pdVar16,pdVar15,puVar12));
        uVar24 = SUB84(in_dr0,0);
        ({ unsigned long ri0_ = (unsigned long)(pdVar8); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 96)); FUN_8c25ce48(((undefined1 *)(fr0_ - 0x3c)),pdVar16,pdVar15,puVar12); });
        if (cVar34 == '\0') {
          dVar31 = CONCAT44D(*(undefined4 *)(unsigned)(pdVar8 + 2),*(undefined4 *)(unsigned)(pdVar7 + 2));
        }
        else {
          in_xd2 = pdVar7[2];
          dVar31 = pdVar8[2];
        }
        if (cVar33 == '\0') {
          dVar31 = CONCAT44D(F32HI(dVar31) + F32LO(dVar31),
                                    SUB84(dVar31,0));
        }
        else {
          dVar31 = dVar31 + dVar31;
        }
        if (cVar34 == '\0') {
          dVar31 = CONCAT44D((int)(D2U(dVar31) >> 0x20),*(undefined4 *)(unsigned)(pdVar10 + 2));
        }
        else {
          in_xd2 = pdVar10[2];
        }
        fVar27 = F32HI(dVar30);
        if (cVar33 == '\0') {
          dVar31 = CONCAT44D((F32HI(dVar31) + F32LO(dVar31)) * fVar27,
                                    SUB84(dVar31,0));
        }
        else {
          dVar31 = (dVar31 + dVar31) * dVar30;
        }
        if (cVar34 == '\0') {
          (*(undefined4 *)(fr0_ - 0x30)) = (undefined4)(D2U(dVar31) >> 0x20);
          dVar31 = CONCAT44D(*(undefined4 *)(unsigned)((int)pdVar8 + 0x14),
                                    *(undefined4 *)(unsigned)((int)pdVar7 + 0x14));
        }
        else {
          (*(undefined4 *)(fr0_ - 0x30)) = SUB84(dVar31,0);
          in_xd2 = *(double *)(unsigned)((int)pdVar7 + 0x14);
          dVar31 = *(double *)(unsigned)((int)pdVar8 + 0x14);
        }
        if (cVar33 == '\0') {
          dVar31 = CONCAT44D(F32HI(dVar31) + F32LO(dVar31),
                                    SUB84(dVar31,0));
        }
        else {
          dVar31 = dVar31 + dVar31;
        }
        if (cVar34 == '\0') {
          dVar31 = CONCAT44D((int)(D2U(dVar31) >> 0x20),
                                    *(undefined4 *)(unsigned)((int)pdVar10 + 0x14));
        }
        else {
          in_xd2 = *(double *)(unsigned)((int)pdVar10 + 0x14);
        }
        if (cVar33 == '\0') {
          dVar31 = CONCAT44D((F32HI(dVar31) + F32LO(dVar31)) * fVar27,
                                    SUB84(dVar31,0));
        }
        else {
          dVar31 = (dVar31 + dVar31) * dVar30;
        }
        if (cVar34 == '\0') {
          (*(undefined4 *)(fr0_ - 0x2c)) = (undefined4)(D2U(dVar31) >> 0x20);
          dVar31 = CONCAT44D(*(undefined4 *)(unsigned)(pdVar8 + 3),*(undefined4 *)(unsigned)(pdVar7 + 3));
        }
        else {
          (*(undefined4 *)(fr0_ - 0x2c)) = SUB84(dVar31,0);
          in_xd2 = pdVar7[3];
          dVar31 = pdVar8[3];
        }
        if (cVar33 == '\0') {
          dVar31 = CONCAT44D(F32HI(dVar31) + F32LO(dVar31),
                                    SUB84(dVar31,0));
        }
        else {
          dVar31 = dVar31 + dVar31;
        }
        if (cVar34 == '\0') {
          dVar31 = CONCAT44D((int)(D2U(dVar31) >> 0x20),*(undefined4 *)(unsigned)(pdVar10 + 3));
        }
        else {
          in_xd2 = pdVar10[3];
        }
        if (cVar33 == '\0') {
          dVar31 = CONCAT44D((F32HI(dVar31) + F32LO(dVar31)) * fVar27,
                                    SUB84(dVar31,0));
        }
        else {
          dVar31 = (dVar31 + dVar31) * dVar30;
        }
        puVar12 = ((undefined1 *)(unsigned)0x8c4c2620);
        uVar28 = (undefined4)(D2U(dVar31) >> 0x20);
        (*(undefined4 *)(fr0_ - 0x28)) = uVar28;
        if (cVar34 != '\0') {
          (*(undefined4 *)(fr0_ - 0x28)) = SUB84(dVar31,0);
          (*(undefined4 *)(fr0_ - 0x24)) = uVar28;
        }
        puVar13 = ((undefined1 *)(fr0_ - 0x3c));
        puVar14 = &(*(undefined4 *)(fr0_ - 0x30));
        (vsp = ((unsigned long)(fr0_ - 96)), FUN_8c23bae2(((undefined1 *)(unsigned)0x8c4c2620),puVar14,puVar13,(*(int *)(fr0_ - 0x50))));
        uVar22 = (undefined4)(D2U(dVar31) >> 0x20);
        uVar3 = (vsp = ((unsigned long)(fr0_ - 96)), float_to_color_u8(puVar12,puVar14,puVar13,(*(int *)(fr0_ - 0x50))));
        uVar28 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c2630);
        if (cVar34 == '\0') {
          uVar28 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c2634);
        }
        uVar4 = (vsp = ((unsigned long)(fr0_ - 96)), float_to_color_u8(puVar12,puVar14,puVar13,(*(int *)(fr0_ - 0x50))));
        uVar29 = SUB84(dVar30,0);
        dVar31 = in_xd14;
        if (cVar34 == '\0') {
          dVar31 = CONCAT44D(uVar29,uVar28);
        }
        *(undefined4 *)(unsigned)pdVar8 = 0xe0000000;
        fVar27 = F32HI(dVar31);
        if (cVar33 == '\0') {
          dVar25 = CONCAT44D(uVar22,(float)(int)*psVar19 * fVar27);
        }
        else {
          dVar25 = CONCAT44D(uVar22,(float)(int)*psVar19) * dVar31;
        }
        if (cVar34 == '\0') {
          *(int *)(unsigned)(pdVar8 + 4) = SUB84(dVar25,0);
        }
        else {
          pdVar8[4] = in_xd2;
        }
        if (cVar33 == '\0') {
          fVar27 = (float)(int)psVar19[1] * fVar27;
        }
        else {
          fVar27 = SUB84(CONCAT44D((int)(D2U(dVar25) >> 0x20),(float)(int)psVar19[1]) *
                         dVar31,0);
        }
        if (cVar34 == '\0') {
          *(float *)(unsigned)((int)pdVar8 + 0x24) = fVar27;
          dVar25 = CONCAT44D(*(undefined4 *)(unsigned)pdVar8,uVar24);
          dVar21 = CONCAT44D(*(undefined4 *)(unsigned)((int)pdVar8 + 4),fVar27);
          pdVar8 = pdVar8 + 1;
        }
        else {
          *(double *)(unsigned)((int)pdVar8 + 0x24) = in_xd2;
          dVar25 = *pdVar8;
          dVar21 = pdVar8[1];
          pdVar8 = pdVar8 + 2;
        }
        uVar24 = (undefined4)(D2U(dVar21) >> 0x20);
        if (cVar34 == '\0') {
          uVar28 = *(undefined4 *)(unsigned)(pdVar8 + 2);
          *(undefined4 *)(unsigned)((int)unaff_r8 + 0x1c) = *(undefined4 *)(unsigned)((int)pdVar8 + 0x14);
          *(undefined4 *)(unsigned)(unaff_r8 + 3) = uVar28;
          *(undefined4 *)(unsigned)((int)unaff_r8 + 0x14) = uVar24;
          unaff_r8 = unaff_r8 + 2;
          *(int *)(unsigned)unaff_r8 = (int)(D2U(dVar25) >> 0x20);
          dVar31 = CONCAT44D(uVar29,SUB84(dVar31,0));
        }
        else {
          dVar31 = pdVar8[2];
          unaff_r8[3] = pdVar8[3];
          unaff_r8[2] = dVar31;
          unaff_r8[1] = dVar21;
          *unaff_r8 = dVar25;
          dVar31 = in_xd14;
        }
        *(undefined4 *)(unsigned)pdVar7 = 0xe0000000;
        fVar27 = F32HI(dVar31);
        if (cVar33 == '\0') {
          dVar21 = CONCAT44D(uVar24,(float)(int)psVar19[2] * fVar27);
        }
        else {
          dVar21 = CONCAT44D(uVar24,(float)(int)psVar19[2]) * dVar31;
        }
        if (cVar34 == '\0') {
          *(int *)(unsigned)(pdVar7 + 4) = SUB84(dVar21,0);
        }
        else {
          pdVar7[4] = in_xd2;
        }
        if (cVar33 == '\0') {
          fVar27 = (float)(int)psVar19[3] * fVar27;
        }
        else {
          fVar27 = SUB84(CONCAT44D((int)(D2U(dVar21) >> 0x20),(float)(int)psVar19[3]) *
                         dVar31,0);
        }
        if (cVar34 == '\0') {
          *(float *)(unsigned)((int)pdVar7 + 0x24) = fVar27;
          dVar25 = CONCAT44D(*(undefined4 *)(unsigned)pdVar7,SUB84(dVar25,0));
          dVar21 = CONCAT44D(*(undefined4 *)(unsigned)((int)pdVar7 + 4),fVar27);
          pdVar7 = pdVar7 + 1;
        }
        else {
          *(double *)(unsigned)((int)pdVar7 + 0x24) = in_xd2;
          dVar25 = *pdVar7;
          dVar21 = pdVar7[1];
          pdVar7 = pdVar7 + 2;
        }
        uVar24 = (undefined4)(D2U(dVar21) >> 0x20);
        if (cVar34 == '\0') {
          uVar28 = *(undefined4 *)(unsigned)(pdVar7 + 2);
          dVar31 = CONCAT44D(uVar28,SUB84(dVar31,0));
          *(undefined4 *)(unsigned)((int)unaff_r8 + 0x3c) = *(undefined4 *)(unsigned)((int)pdVar7 + 0x14);
          *(undefined4 *)(unsigned)(unaff_r8 + 7) = uVar28;
          *(undefined4 *)(unsigned)((int)unaff_r8 + 0x34) = uVar24;
          pdVar7 = unaff_r8 + 6;
          *(int *)(unsigned)pdVar7 = (int)(D2U(dVar25) >> 0x20);
        }
        else {
          dVar31 = pdVar7[2];
          unaff_r8[7] = pdVar7[3];
          unaff_r8[6] = dVar31;
          unaff_r8[5] = dVar21;
          pdVar7 = unaff_r8 + 4;
          *pdVar7 = dVar25;
        }
        dVar21 = in_xd14;
        if (cVar34 == '\0') {
          dVar21 = CONCAT44D(uVar29,SUB84(dVar31,0));
        }
        *(undefined4 *)(unsigned)pdVar10 = 0xf0000000;
        *(undefined4 *)(unsigned)(pdVar10 + 5) = uVar3;
        *(undefined4 *)(unsigned)((int)pdVar10 + 0x2c) = uVar4;
        fVar27 = F32HI(dVar21);
        if (cVar33 == '\0') {
          dVar31 = CONCAT44D(uVar24,(float)(int)psVar19[4] * fVar27);
        }
        else {
          dVar31 = CONCAT44D(uVar24,(float)(int)psVar19[4]) * dVar21;
        }
        if (cVar34 == '\0') {
          *(int *)(unsigned)(pdVar10 + 4) = SUB84(dVar31,0);
        }
        else {
          pdVar10[4] = in_xd2;
        }
        if (cVar33 == '\0') {
          fVar27 = (float)(int)psVar19[5] * fVar27;
        }
        else {
          fVar27 = SUB84(CONCAT44D((int)(D2U(dVar31) >> 0x20),(float)(int)psVar19[5]) *
                         dVar21,0);
        }
        if (cVar34 == '\0') {
          *(float *)(unsigned)((int)pdVar10 + 0x24) = fVar27;
          in_dr0 = CONCAT44D(*(undefined4 *)(unsigned)pdVar10,SUB84(dVar25,0));
          in_dr2 = CONCAT44D(*(undefined4 *)(unsigned)((int)pdVar10 + 4),fVar27);
          pdVar10 = pdVar10 + 1;
        }
        else {
          *(double *)(unsigned)((int)pdVar10 + 0x24) = in_xd2;
          in_dr0 = *pdVar10;
          in_dr2 = pdVar10[1];
          pdVar10 = pdVar10 + 2;
        }
        if (cVar34 == '\0') {
          uVar24 = *(undefined4 *)(unsigned)(pdVar10 + 2);
          in_dr4 = CONCAT44D(uVar24,SUB84(dVar21,0));
          *(undefined4 *)(unsigned)((int)pdVar7 + 0x3c) = *(undefined4 *)(unsigned)((int)pdVar10 + 0x14);
          *(undefined4 *)(unsigned)(pdVar7 + 7) = uVar24;
          *(int *)(unsigned)((int)pdVar7 + 0x34) = (int)((ulonglong)in_dr2 >> 0x20);
          pdVar7 = pdVar7 + 6;
          *(int *)(unsigned)pdVar7 = (int)((ulonglong)in_dr0 >> 0x20);
        }
        else {
          in_dr4 = pdVar10[2];
          pdVar7[7] = pdVar10[3];
          pdVar7[6] = in_dr4;
          pdVar7[5] = in_dr2;
          pdVar7 = pdVar7 + 4;
          *pdVar7 = in_dr0;
        }
        unaff_r8 = pdVar7 + 4;
        (*(undefined4 *)(unsigned)(unsigned)0x8c4aa520) = (*(undefined4 *)(unsigned)(unsigned)0x8c4aa520) + 3;
      }
      psVar19 = psVar19 + 6;
      (*(int *)(fr0_ - 0x58)) = (*(int *)(fr0_ - 0x58)) + 1;
    }
  }
  else if (uVar2 == 0x4000) {
    (*(undefined4 *)(unsigned)(unsigned)0x8c4aa51c) = (*(undefined4 *)(unsigned)(unsigned)0x8c4aa51c) + (uint)ar4[1] * 4;
    (*(int *)(fr0_ - 0x50)) = 0;
    while( true ) {
      uVar24 = SUB84(in_dr4,0);
      uVar2 = (uint)ar4[1];
      if ((int)uVar2 <= (*(int *)(fr0_ - 0x50))) break;
      pdVar10 = (double *)(unsigned)((uint)*puVar17 * 0x40 + (*(undefined4 *)(unsigned)(unsigned)0x8c4aa510));
      pdVar8 = (double *)(unsigned)((uint)puVar17[1] * 0x40 + (*(undefined4 *)(unsigned)(unsigned)0x8c4aa510));
      puVar18 = puVar17 + 3;
      pdVar16 = (double *)(unsigned)((uint)puVar17[2] * 0x40 + (*(undefined4 *)(unsigned)(unsigned)0x8c4aa510));
      puVar17 = puVar17 + 4;
      pdVar7 = (double *)(unsigned)((uint)*puVar18 * 0x40 + (*(undefined4 *)(unsigned)(unsigned)0x8c4aa510));
      if (cVar34 == '\0') {
        uVar24 = *(undefined4 *)(unsigned)((int)pdVar8 + 4);
        dVar31 = CONCAT44D(uVar24,*(undefined4 *)(unsigned)((int)pdVar10 + 4));
      }
      else {
        dVar31 = *(double *)(unsigned)((int)pdVar8 + 4);
        in_xd2 = *(double *)(unsigned)((int)pdVar10 + 4);
      }
      if (cVar33 == '\0') {
        dVar31 = CONCAT44D(F32HI(dVar31) - F32LO(dVar31),
                                  SUB84(dVar31,0));
      }
      else {
        dVar31 = dVar31 - dVar31;
      }
      if (cVar34 == '\0') {
        dVar31 = CONCAT44D((int)(D2U(dVar31) >> 0x20),*(undefined4 *)(unsigned)(pdVar16 + 1));
        dVar25 = CONCAT44D(*(undefined4 *)(unsigned)(pdVar8 + 1),uVar24);
      }
      else {
        in_xd2 = pdVar16[1];
        dVar25 = pdVar8[1];
      }
      fVar27 = F32HI(dVar25);
      if (cVar33 == '\0') {
        dVar31 = CONCAT44D((int)(D2U(dVar31) >> 0x20),F32LO(dVar31) - fVar27);
      }
      else {
        dVar31 = dVar31 - dVar25;
      }
      if (cVar34 == '\0') {
        in_dr0 = CONCAT44D((int)((ulonglong)in_dr0 >> 0x20),fVar27);
      }
      if (cVar33 == '\0') {
        dVar31 = CONCAT44D(F32HI(dVar31) * F32LO(dVar31),
                                  SUB84(dVar31,0));
      }
      else {
        dVar31 = dVar31 * dVar31;
      }
      if (cVar34 == '\0') {
        dVar31 = CONCAT44D((int)(D2U(dVar31) >> 0x20),*(undefined4 *)(unsigned)(pdVar10 + 1));
      }
      else {
        in_xd2 = pdVar10[1];
      }
      if (cVar33 == '\0') {
        dVar21 = CONCAT44D((int)((ulonglong)in_dr0 >> 0x20),F32LO(in_dr0) - F32LO(dVar31)
                                 );
      }
      else {
        dVar21 = in_dr0 - dVar31;
      }
      if (cVar34 == '\0') {
        dVar31 = CONCAT44D((int)(D2U(dVar31) >> 0x20),*(undefined4 *)(unsigned)((int)pdVar16 + 4)
                                 );
      }
      else {
        in_xd2 = *(double *)(unsigned)((int)pdVar16 + 4);
      }
      if (cVar33 == '\0') {
        dVar31 = CONCAT44D((int)(D2U(dVar31) >> 0x20),F32LO(dVar31) - F32LO(dVar25)
                                 );
      }
      else {
        dVar31 = dVar31 - dVar25;
      }
      uVar2 = (uint)(D2U(dVar31) >> 0x20);
      dVar26 = dVar31;
      if (cVar34 == '\0') {
        dVar26 = CONCAT44D(uVar2,SUB84(dVar25,0));
      }
      (*(undefined4 *)(fr0_ - 0x48)) = 0;
      if (cVar33 == '\0') {
        in_dr0 = CONCAT44D((int)(D2U(dVar21) >> 0x20),F32LO(dVar21) * F32LO(dVar31)
                                 );
      }
      else {
        in_dr0 = dVar21 * dVar31;
      }
      if (cVar33 == '\0') {
        fVar27 = F32HI(dVar26) - F32LO(in_dr0);
        in_dr4 = CONCAT44D(fVar27,SUB84(dVar26,0));
        bVar32 = 0.0 < fVar27;
      }
      else {
        in_dr4 = dVar26 - in_dr0;
        bVar32 = (double)((ulonglong)uVar2 << 0x20) < in_dr4;
      }
      if (bVar32) {
        if (((*(undefined4 *)(unsigned)(unsigned)0x8c4ab308) & 0x800000) != 0) {
          (*(undefined4 *)(fr0_ - 0x48)) = 0x8000;
          goto LAB_8c24d96c;
        }
      }
      else {
LAB_8c24d96c:
        pdVar15 = pdVar8 + 2;
        puVar12 = ((undefined1 *)(fr0_ - 0x3c));
        ar6_00 = pdVar16 + 2;
        (vsp = ((unsigned long)(fr0_ - 96)), FUN_8c2361a8(pdVar10 + 2,pdVar15,ar6_00,puVar12));
        uVar24 = SUB84(in_dr0,0);
        ({ unsigned long ri0_ = (unsigned long)(pdVar8); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 96)); FUN_8c25ce48(((undefined1 *)(fr0_ - 0x3c)),pdVar15,ar6_00,puVar12); });
        if (cVar34 == '\0') {
          dVar31 = CONCAT44D(*(undefined4 *)(unsigned)(pdVar8 + 2),*(undefined4 *)(unsigned)(pdVar16 + 2));
        }
        else {
          in_xd2 = pdVar16[2];
          dVar31 = pdVar8[2];
        }
        puVar12 = ((undefined1 *)(unsigned)0x8c4c2620);
        puVar13 = ((undefined1 *)(fr0_ - 0x3c));
        fVar27 = F32HI(dVar30);
        if (cVar33 == '\0') {
          dVar31 = CONCAT44D((F32HI(dVar31) + F32LO(dVar31)) * fVar27,
                                    SUB84(dVar31,0));
        }
        else {
          dVar31 = (dVar31 + dVar31) * dVar30;
        }
        if (cVar34 == '\0') {
          (*(undefined4 *)(fr0_ - 0x30)) = (undefined4)(D2U(dVar31) >> 0x20);
          dVar31 = CONCAT44D(*(undefined4 *)(unsigned)((int)pdVar8 + 0x14),
                                    *(undefined4 *)(unsigned)((int)pdVar16 + 0x14));
        }
        else {
          (*(undefined4 *)(fr0_ - 0x30)) = SUB84(dVar31,0);
          in_xd2 = *(double *)(unsigned)((int)pdVar16 + 0x14);
          dVar31 = *(double *)(unsigned)((int)pdVar8 + 0x14);
        }
        if (cVar33 == '\0') {
          dVar31 = CONCAT44D((F32HI(dVar31) + F32LO(dVar31)) * fVar27,
                                    SUB84(dVar31,0));
        }
        else {
          dVar31 = (dVar31 + dVar31) * dVar30;
        }
        if (cVar34 == '\0') {
          (*(undefined4 *)(fr0_ - 0x2c)) = (undefined4)(D2U(dVar31) >> 0x20);
          dVar31 = CONCAT44D(*(undefined4 *)(unsigned)(pdVar8 + 3),*(undefined4 *)(unsigned)(pdVar16 + 3));
        }
        else {
          (*(undefined4 *)(fr0_ - 0x2c)) = SUB84(dVar31,0);
          in_xd2 = pdVar16[3];
          dVar31 = pdVar8[3];
        }
        if (cVar33 == '\0') {
          dVar31 = CONCAT44D((F32HI(dVar31) + F32LO(dVar31)) * fVar27,
                                    SUB84(dVar31,0));
        }
        else {
          dVar31 = (dVar31 + dVar31) * dVar30;
        }
        uVar28 = (undefined4)(D2U(dVar31) >> 0x20);
        (*(undefined4 *)(fr0_ - 0x28)) = uVar28;
        if (cVar34 != '\0') {
          (*(undefined4 *)(fr0_ - 0x28)) = SUB84(dVar31,0);
          (*(undefined4 *)(fr0_ - 0x24)) = uVar28;
        }
        puVar14 = &(*(undefined4 *)(fr0_ - 0x30));
        (vsp = ((unsigned long)(fr0_ - 96)), FUN_8c23bae2(((undefined1 *)(unsigned)0x8c4c2620),puVar14,puVar13,(*(undefined4 *)(fr0_ - 0x48))));
        uVar22 = (undefined4)(D2U(dVar31) >> 0x20);
        uVar3 = (vsp = ((unsigned long)(fr0_ - 96)), float_to_color_u8(puVar12,puVar14,puVar13,(*(undefined4 *)(fr0_ - 0x48))));
        uVar28 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c2630);
        if (cVar34 == '\0') {
          uVar28 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c2634);
        }
        uVar4 = (vsp = ((unsigned long)(fr0_ - 96)), float_to_color_u8(puVar12,puVar14,puVar13,(*(undefined4 *)(fr0_ - 0x48))));
        uVar29 = SUB84(dVar30,0);
        dVar31 = in_xd14;
        if (cVar34 == '\0') {
          dVar31 = CONCAT44D(uVar29,uVar28);
        }
        *(undefined4 *)(unsigned)pdVar10 = 0xe0000000;
        fVar27 = F32HI(dVar31);
        if (cVar33 == '\0') {
          dVar25 = CONCAT44D(uVar22,(float)(int)*psVar19 * fVar27);
        }
        else {
          dVar25 = CONCAT44D(uVar22,(float)(int)*psVar19) * dVar31;
        }
        if (cVar34 == '\0') {
          *(int *)(unsigned)(pdVar10 + 4) = SUB84(dVar25,0);
        }
        else {
          pdVar10[4] = in_xd2;
        }
        if (cVar33 == '\0') {
          fVar27 = (float)(int)psVar19[1] * fVar27;
        }
        else {
          fVar27 = SUB84(CONCAT44D((int)(D2U(dVar25) >> 0x20),(float)(int)psVar19[1]) *
                         dVar31,0);
        }
        if (cVar34 == '\0') {
          *(float *)(unsigned)((int)pdVar10 + 0x24) = fVar27;
          dVar25 = CONCAT44D(*(undefined4 *)(unsigned)pdVar10,uVar24);
          dVar21 = CONCAT44D(*(undefined4 *)(unsigned)((int)pdVar10 + 4),fVar27);
          pdVar10 = pdVar10 + 1;
        }
        else {
          *(double *)(unsigned)((int)pdVar10 + 0x24) = in_xd2;
          dVar25 = *pdVar10;
          dVar21 = pdVar10[1];
          pdVar10 = pdVar10 + 2;
        }
        uVar24 = (undefined4)(D2U(dVar21) >> 0x20);
        if (cVar34 == '\0') {
          uVar28 = *(undefined4 *)(unsigned)(pdVar10 + 2);
          *(undefined4 *)(unsigned)((int)unaff_r8 + 0x1c) = *(undefined4 *)(unsigned)((int)pdVar10 + 0x14);
          *(undefined4 *)(unsigned)(unaff_r8 + 3) = uVar28;
          *(undefined4 *)(unsigned)((int)unaff_r8 + 0x14) = uVar24;
          unaff_r8 = unaff_r8 + 2;
          *(int *)(unsigned)unaff_r8 = (int)(D2U(dVar25) >> 0x20);
          dVar31 = CONCAT44D(uVar29,SUB84(dVar31,0));
        }
        else {
          dVar31 = pdVar10[2];
          unaff_r8[3] = pdVar10[3];
          unaff_r8[2] = dVar31;
          unaff_r8[1] = dVar21;
          *unaff_r8 = dVar25;
          dVar31 = in_xd14;
        }
        *(undefined4 *)(unsigned)pdVar8 = 0xe0000000;
        fVar27 = F32HI(dVar31);
        if (cVar33 == '\0') {
          dVar21 = CONCAT44D(uVar24,(float)(int)psVar19[2] * fVar27);
        }
        else {
          dVar21 = CONCAT44D(uVar24,(float)(int)psVar19[2]) * dVar31;
        }
        if (cVar34 == '\0') {
          *(int *)(unsigned)(pdVar8 + 4) = SUB84(dVar21,0);
        }
        else {
          pdVar8[4] = in_xd2;
        }
        if (cVar33 == '\0') {
          fVar27 = (float)(int)psVar19[3] * fVar27;
        }
        else {
          fVar27 = SUB84(CONCAT44D((int)(D2U(dVar21) >> 0x20),(float)(int)psVar19[3]) *
                         dVar31,0);
        }
        if (cVar34 == '\0') {
          *(float *)(unsigned)((int)pdVar8 + 0x24) = fVar27;
          dVar25 = CONCAT44D(*(undefined4 *)(unsigned)pdVar8,SUB84(dVar25,0));
          dVar21 = CONCAT44D(*(undefined4 *)(unsigned)((int)pdVar8 + 4),fVar27);
          pdVar8 = pdVar8 + 1;
        }
        else {
          *(double *)(unsigned)((int)pdVar8 + 0x24) = in_xd2;
          dVar25 = *pdVar8;
          dVar21 = pdVar8[1];
          pdVar8 = pdVar8 + 2;
        }
        uVar24 = (undefined4)(D2U(dVar21) >> 0x20);
        if (cVar34 == '\0') {
          uVar28 = *(undefined4 *)(unsigned)(pdVar8 + 2);
          dVar31 = CONCAT44D(uVar28,SUB84(dVar31,0));
          *(undefined4 *)(unsigned)((int)unaff_r8 + 0x3c) = *(undefined4 *)(unsigned)((int)pdVar8 + 0x14);
          *(undefined4 *)(unsigned)(unaff_r8 + 7) = uVar28;
          *(undefined4 *)(unsigned)((int)unaff_r8 + 0x34) = uVar24;
          pdVar8 = unaff_r8 + 6;
          *(int *)(unsigned)pdVar8 = (int)(D2U(dVar25) >> 0x20);
        }
        else {
          dVar31 = pdVar8[2];
          unaff_r8[7] = pdVar8[3];
          unaff_r8[6] = dVar31;
          unaff_r8[5] = dVar21;
          pdVar8 = unaff_r8 + 4;
          *pdVar8 = dVar25;
        }
        dVar21 = in_xd14;
        if (cVar34 == '\0') {
          dVar21 = CONCAT44D(uVar29,SUB84(dVar31,0));
        }
        *(undefined4 *)(unsigned)pdVar16 = 0xe0000000;
        *(undefined4 *)(unsigned)(pdVar16 + 5) = uVar3;
        *(undefined4 *)(unsigned)((int)pdVar16 + 0x2c) = uVar4;
        fVar27 = F32HI(dVar21);
        if (cVar33 == '\0') {
          dVar31 = CONCAT44D(uVar24,(float)(int)psVar19[4] * fVar27);
        }
        else {
          dVar31 = CONCAT44D(uVar24,(float)(int)psVar19[4]) * dVar21;
        }
        if (cVar34 == '\0') {
          *(int *)(unsigned)(pdVar16 + 4) = SUB84(dVar31,0);
        }
        else {
          pdVar16[4] = in_xd2;
        }
        if (cVar33 == '\0') {
          fVar27 = (float)(int)psVar19[5] * fVar27;
        }
        else {
          fVar27 = SUB84(CONCAT44D((int)(D2U(dVar31) >> 0x20),(float)(int)psVar19[5]) *
                         dVar21,0);
        }
        if (cVar34 == '\0') {
          *(float *)(unsigned)((int)pdVar16 + 0x24) = fVar27;
          dVar31 = CONCAT44D(*(undefined4 *)(unsigned)pdVar16,SUB84(dVar25,0));
          dVar25 = CONCAT44D(*(undefined4 *)(unsigned)((int)pdVar16 + 4),fVar27);
          pdVar16 = pdVar16 + 1;
        }
        else {
          *(double *)(unsigned)((int)pdVar16 + 0x24) = in_xd2;
          dVar31 = *pdVar16;
          dVar25 = pdVar16[1];
          pdVar16 = pdVar16 + 2;
        }
        uVar24 = (undefined4)(D2U(dVar25) >> 0x20);
        if (cVar34 == '\0') {
          uVar28 = *(undefined4 *)(unsigned)(pdVar16 + 2);
          *(undefined4 *)(unsigned)((int)pdVar8 + 0x3c) = *(undefined4 *)(unsigned)((int)pdVar16 + 0x14);
          *(undefined4 *)(unsigned)(pdVar8 + 7) = uVar28;
          *(undefined4 *)(unsigned)((int)pdVar8 + 0x34) = uVar24;
          pdVar8 = pdVar8 + 6;
          *(int *)(unsigned)pdVar8 = (int)(D2U(dVar31) >> 0x20);
          dVar25 = CONCAT44D(uVar29,SUB84(dVar21,0));
        }
        else {
          dVar21 = pdVar16[2];
          pdVar8[7] = pdVar16[3];
          pdVar8[6] = dVar21;
          pdVar8[5] = dVar25;
          pdVar8 = pdVar8 + 4;
          *pdVar8 = dVar31;
          dVar25 = in_xd14;
        }
        *(undefined4 *)(unsigned)pdVar7 = 0xf0000000;
        *(undefined4 *)(unsigned)(pdVar7 + 5) = uVar3;
        *(undefined4 *)(unsigned)((int)pdVar7 + 0x2c) = uVar4;
        fVar27 = F32HI(dVar25);
        if (cVar33 == '\0') {
          dVar21 = CONCAT44D(uVar24,(float)(int)psVar19[6] * fVar27);
        }
        else {
          dVar21 = CONCAT44D(uVar24,(float)(int)psVar19[6]) * dVar25;
        }
        if (cVar34 == '\0') {
          *(int *)(unsigned)(pdVar7 + 4) = SUB84(dVar21,0);
        }
        else {
          pdVar7[4] = in_xd2;
        }
        if (cVar33 == '\0') {
          fVar27 = (float)(int)psVar19[7] * fVar27;
        }
        else {
          fVar27 = SUB84(CONCAT44D((int)(D2U(dVar21) >> 0x20),(float)(int)psVar19[7]) *
                         dVar25,0);
        }
        if (cVar34 == '\0') {
          *(float *)(unsigned)((int)pdVar7 + 0x24) = fVar27;
          in_dr0 = CONCAT44D(*(undefined4 *)(unsigned)pdVar7,SUB84(dVar31,0));
          dVar31 = CONCAT44D(*(undefined4 *)(unsigned)((int)pdVar7 + 4),fVar27);
          pdVar7 = pdVar7 + 1;
        }
        else {
          *(double *)(unsigned)((int)pdVar7 + 0x24) = in_xd2;
          in_dr0 = *pdVar7;
          dVar31 = pdVar7[1];
          pdVar7 = pdVar7 + 2;
        }
        if (cVar34 == '\0') {
          uVar24 = *(undefined4 *)(unsigned)(pdVar7 + 2);
          in_dr4 = CONCAT44D(uVar24,SUB84(dVar25,0));
          *(undefined4 *)(unsigned)((int)pdVar8 + 0x3c) = *(undefined4 *)(unsigned)((int)pdVar7 + 0x14);
          *(undefined4 *)(unsigned)(pdVar8 + 7) = uVar24;
          *(int *)(unsigned)((int)pdVar8 + 0x34) = (int)(D2U(dVar31) >> 0x20);
          pdVar8 = pdVar8 + 6;
          *(int *)(unsigned)pdVar8 = (int)((ulonglong)in_dr0 >> 0x20);
        }
        else {
          in_dr4 = pdVar7[2];
          pdVar8[7] = pdVar7[3];
          pdVar8[6] = in_dr4;
          pdVar8[5] = dVar31;
          pdVar8 = pdVar8 + 4;
          *pdVar8 = in_dr0;
        }
        unaff_r8 = pdVar8 + 4;
        (*(undefined4 *)(unsigned)(unsigned)0x8c4aa520) = (*(undefined4 *)(unsigned)(unsigned)0x8c4aa520) + 4;
      }
      psVar19 = psVar19 + 8;
      (*(int *)(fr0_ - 0x50)) = (*(int *)(fr0_ - 0x50)) + 1;
    }
  }
  else if (uVar2 == 0x8000) {
    puVar12 = ((undefined1 *)(unsigned)0x8c4c2620);
    for ((*(int *)(fr0_ - 0x54)) = 0; uVar2 = (uint)ar4[1], (*(int *)(fr0_ - 0x54)) < (int)uVar2; (*(int *)(fr0_ - 0x54)) = (*(int *)(fr0_ - 0x54)) + 1) {
      puVar18 = puVar17 + 1;
      uVar2 = (uint)*puVar17;
      (*(undefined4 *)(unsigned)(unsigned)0x8c4aa51c) = (*(undefined4 *)(unsigned)(unsigned)0x8c4aa51c) + uVar2;
      iVar11 = (uint)*puVar18 * 0x40 + (*(undefined4 *)(unsigned)(unsigned)0x8c4aa510);
      iVar5 = (uint)puVar17[2] * 0x40 + (*(undefined4 *)(unsigned)(unsigned)0x8c4aa510);
      iVar6 = (uint)puVar17[3] * 0x40 + (*(undefined4 *)(unsigned)(unsigned)0x8c4aa510);
      if (cVar34 == '\0') {
        uVar24 = *(undefined4 *)(unsigned)(iVar5 + 4);
        dVar31 = CONCAT44D(uVar24,*(undefined4 *)(unsigned)(iVar11 + 4));
        dVar25 = CONCAT44D(uVar24,SUB84(in_dr4,0));
      }
      else {
        dVar31 = *(double *)(unsigned)(iVar5 + 4);
        in_xd2 = *(double *)(unsigned)(iVar11 + 4);
        uVar24 = (undefined4)(D2U(dVar31) >> 0x20);
        dVar25 = dVar31;
      }
      if (cVar33 == '\0') {
        dVar31 = CONCAT44D(F32HI(dVar31) - F32LO(dVar31),
                                  SUB84(dVar31,0));
      }
      else {
        dVar31 = dVar31 - dVar31;
      }
      if (cVar34 == '\0') {
        dVar31 = CONCAT44D((int)(D2U(dVar31) >> 0x20),*(undefined4 *)(unsigned)(iVar6 + 8));
        dVar25 = CONCAT44D(uVar24,*(undefined4 *)(unsigned)(iVar5 + 8));
      }
      else {
        in_xd2 = *(double *)(unsigned)(iVar6 + 8);
      }
      fVar27 = F32LO(dVar25);
      if (cVar33 == '\0') {
        dVar31 = CONCAT44D((int)(D2U(dVar31) >> 0x20),F32LO(dVar31) - fVar27);
      }
      else {
        dVar31 = dVar31 - dVar25;
      }
      if (cVar34 == '\0') {
        in_dr0 = CONCAT44D((int)((ulonglong)in_dr0 >> 0x20),fVar27);
      }
      if (cVar33 == '\0') {
        dVar31 = CONCAT44D(F32HI(dVar31) * F32LO(dVar31),
                                  SUB84(dVar31,0));
      }
      else {
        dVar31 = dVar31 * dVar31;
      }
      if (cVar34 == '\0') {
        dVar31 = CONCAT44D((int)(D2U(dVar31) >> 0x20),*(undefined4 *)(unsigned)(iVar11 + 8));
      }
      else {
        in_xd2 = *(double *)(unsigned)(iVar11 + 8);
      }
      if (cVar33 == '\0') {
        dVar21 = CONCAT44D((int)((ulonglong)in_dr0 >> 0x20),F32LO(in_dr0) - F32LO(dVar31)
                                 );
      }
      else {
        dVar21 = in_dr0 - dVar31;
      }
      if (cVar34 == '\0') {
        dVar31 = CONCAT44D((int)(D2U(dVar31) >> 0x20),*(undefined4 *)(unsigned)(iVar6 + 4));
      }
      else {
        in_xd2 = *(double *)(unsigned)(iVar6 + 4);
      }
      (*(undefined4 *)(fr0_ - 0x48)) = 0;
      if (cVar33 == '\0') {
        dVar31 = CONCAT44D((int)(D2U(dVar31) >> 0x20),
                                  F32LO(dVar31) - F32HI(dVar25));
      }
      else {
        dVar31 = dVar31 - dVar25;
      }
      uVar23 = (uint)(D2U(dVar31) >> 0x20);
      dVar25 = dVar31;
      if (cVar34 == '\0') {
        dVar25 = CONCAT44D(uVar23,fVar27);
      }
      if (cVar33 == '\0') {
        in_dr0 = CONCAT44D((int)(D2U(dVar21) >> 0x20),F32LO(dVar21) * F32LO(dVar31)
                                 );
      }
      else {
        in_dr0 = dVar21 * dVar31;
      }
      if (cVar33 == '\0') {
        fVar27 = F32HI(dVar25) - F32LO(in_dr0);
        in_dr4 = CONCAT44D(fVar27,SUB84(dVar25,0));
        bVar32 = 0.0 < fVar27;
      }
      else {
        in_dr4 = dVar25 - in_dr0;
        bVar32 = (double)((ulonglong)uVar23 << 0x20) < in_dr4;
      }
      if (bVar32) {
        if (((*(undefined4 *)(unsigned)(unsigned)0x8c4ab308) & 0x800000) != 0) {
          (*(undefined4 *)(fr0_ - 0x48)) = 0x8000;
          goto LAB_8c24dc38;
        }
        puVar17 = puVar18 + uVar2;
        psVar19 = psVar19 + uVar2 * 2;
      }
      else {
LAB_8c24dc38:
        puVar13 = ((undefined1 *)(fr0_ - 0x3c));
        (*(undefined4 *)(unsigned)(unsigned)0x8c4aa520) = (*(undefined4 *)(unsigned)(unsigned)0x8c4aa520) + uVar2;
        iVar6 = iVar6 + 0x10;
        iVar5 = iVar5 + 0x10;
        (vsp = ((unsigned long)(fr0_ - 96)), FUN_8c2361a8(iVar11 + 0x10,iVar5,iVar6,puVar13));
        uVar24 = SUB84(in_dr0,0);
        ({ unsigned long ri0_ = (unsigned long)(puVar12); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 96)); FUN_8c25ce48(((undefined1 *)(fr0_ - 0x3c)),iVar5,iVar6,puVar13); });
        iVar5 = (uint)puVar18[((int)uVar2 >> 1) + -1] * 0x40 + (*(undefined4 *)(unsigned)(unsigned)0x8c4aa510);
        if (cVar34 == '\0') {
          (*(undefined4 *)(fr0_ - 0x30)) = *(undefined4 *)(unsigned)(iVar5 + 0x10);
          (*(undefined4 *)(fr0_ - 0x2c)) = *(undefined4 *)(unsigned)(iVar5 + 0x14);
          (*(undefined4 *)(fr0_ - 0x28)) = *(undefined4 *)(unsigned)(iVar5 + 0x18);
        }
        else {
          (*(undefined4 *)(fr0_ - 0x30)) = (undefined4)*(undefined8 *)(unsigned)(iVar5 + 0x10);
          (*(undefined4 *)(fr0_ - 0x2c)) = (undefined4)*(undefined8 *)(unsigned)(iVar5 + 0x14);
          in_xd2 = *(double *)(unsigned)(iVar5 + 0x18);
          (*(undefined4 *)(fr0_ - 0x28)) = SUB84(in_xd2,0);
          (*(undefined4 *)(fr0_ - 0x24)) = (undefined4)((ulonglong)in_xd2 >> 0x20);
        }
        iVar5 = (uint)puVar18[(int)uVar2 >> 1] * 0x40 + (*(undefined4 *)(unsigned)(unsigned)0x8c4aa510);
        if (cVar34 == '\0') {
          dVar31 = CONCAT44D((*(undefined4 *)(fr0_ - 0x30)),*(undefined4 *)(unsigned)(iVar5 + 0x10));
        }
        else {
          in_xd2 = *(double *)(unsigned)(iVar5 + 0x10);
          dVar31 = CONCAT44D((*(undefined4 *)(fr0_ - 0x2c)),(*(undefined4 *)(fr0_ - 0x30)));
        }
        if (cVar33 == '\0') {
          dVar31 = CONCAT44D(F32HI(dVar31) + F32LO(dVar31),
                                    SUB84(dVar31,0));
        }
        else {
          dVar31 = dVar31 + dVar31;
        }
        uVar28 = (undefined4)(D2U(dVar31) >> 0x20);
        if (cVar34 == '\0') {
          dVar31 = CONCAT44D((*(undefined4 *)(fr0_ - 0x2c)),*(undefined4 *)(unsigned)(iVar5 + 0x14));
          (*(undefined4 *)(fr0_ - 0x30)) = uVar28;
        }
        else {
          (*(undefined4 *)(fr0_ - 0x30)) = SUB84(dVar31,0);
          in_xd2 = *(double *)(unsigned)(iVar5 + 0x14);
          dVar31 = CONCAT44D((*(undefined4 *)(fr0_ - 0x28)),uVar28);
        }
        if (cVar33 == '\0') {
          dVar31 = CONCAT44D(F32HI(dVar31) + F32LO(dVar31),
                                    SUB84(dVar31,0));
        }
        else {
          dVar31 = dVar31 + dVar31;
        }
        uVar28 = (undefined4)(D2U(dVar31) >> 0x20);
        if (cVar34 == '\0') {
          dVar31 = CONCAT44D((*(undefined4 *)(fr0_ - 0x28)),*(undefined4 *)(unsigned)(iVar5 + 0x18));
          (*(undefined4 *)(fr0_ - 0x2c)) = uVar28;
        }
        else {
          (*(undefined4 *)(fr0_ - 0x2c)) = SUB84(dVar31,0);
          in_xd2 = *(double *)(unsigned)(iVar5 + 0x18);
          dVar31 = CONCAT44D((*(undefined4 *)(fr0_ - 0x24)),uVar28);
        }
        if (cVar33 == '\0') {
          dVar31 = CONCAT44D(F32HI(dVar31) + F32LO(dVar31),
                                    SUB84(dVar31,0));
        }
        else {
          dVar31 = dVar31 + dVar31;
        }
        uVar28 = (undefined4)(D2U(dVar31) >> 0x20);
        if (cVar34 == '\0') {
          dVar31 = CONCAT44D(uVar28,(*(undefined4 *)(fr0_ - 0x30)));
          (*(undefined4 *)(fr0_ - 0x28)) = uVar28;
        }
        else {
          (*(undefined4 *)(fr0_ - 0x28)) = SUB84(dVar31,0);
          in_xd2 = CONCAT44D((*(undefined4 *)(fr0_ - 0x2c)),(*(undefined4 *)(fr0_ - 0x30)));
          (*(undefined4 *)(fr0_ - 0x24)) = uVar28;
        }
        fVar27 = F32HI(dVar30);
        if (cVar33 == '\0') {
          dVar31 = CONCAT44D((int)(D2U(dVar31) >> 0x20),F32LO(dVar31) * fVar27);
        }
        else {
          dVar31 = dVar31 * dVar30;
        }
        if (cVar34 == '\0') {
          (*(undefined4 *)(fr0_ - 0x30)) = SUB84(dVar31,0);
          dVar31 = CONCAT44D((int)(D2U(dVar31) >> 0x20),(*(undefined4 *)(fr0_ - 0x2c)));
        }
        else {
          (*(undefined4 *)(fr0_ - 0x30)) = SUB84(in_xd2,0);
          (*(undefined4 *)(fr0_ - 0x2c)) = (undefined4)((ulonglong)in_xd2 >> 0x20);
          in_xd2 = CONCAT44D((*(undefined4 *)(fr0_ - 0x28)),(*(undefined4 *)(fr0_ - 0x2c)));
        }
        if (cVar33 == '\0') {
          dVar31 = CONCAT44D((int)(D2U(dVar31) >> 0x20),F32LO(dVar31) * fVar27);
        }
        else {
          dVar31 = dVar31 * dVar30;
        }
        puVar13 = ((undefined1 *)(unsigned)0x8c4c2620);
        ar6_01 = ((undefined1 *)(fr0_ - 0x3c));
        if (cVar34 == '\0') {
          (*(undefined4 *)(fr0_ - 0x2c)) = SUB84(dVar31,0);
          dVar31 = CONCAT44D((int)(D2U(dVar31) >> 0x20),(*(undefined4 *)(fr0_ - 0x28)));
        }
        else {
          (*(undefined4 *)(fr0_ - 0x2c)) = SUB84(in_xd2,0);
          (*(undefined4 *)(fr0_ - 0x28)) = (undefined4)((ulonglong)in_xd2 >> 0x20);
          in_xd2 = CONCAT44D((*(undefined4 *)(fr0_ - 0x24)),(*(undefined4 *)(fr0_ - 0x28)));
        }
        if (cVar33 == '\0') {
          dVar31 = CONCAT44D((int)(D2U(dVar31) >> 0x20),F32LO(dVar31) * fVar27);
        }
        else {
          dVar31 = dVar31 * dVar30;
        }
        if (cVar34 == '\0') {
          (*(undefined4 *)(fr0_ - 0x28)) = SUB84(dVar31,0);
        }
        else {
          (*(undefined4 *)(fr0_ - 0x28)) = SUB84(in_xd2,0);
          (*(undefined4 *)(fr0_ - 0x24)) = (undefined4)((ulonglong)in_xd2 >> 0x20);
        }
        puVar14 = &(*(undefined4 *)(fr0_ - 0x30));
        (vsp = ((unsigned long)(fr0_ - 96)), FUN_8c23bae2(((undefined1 *)(unsigned)0x8c4c2620),puVar14,ar6_01,(*(undefined4 *)(fr0_ - 0x48))));
        uVar22 = (undefined4)(D2U(dVar31) >> 0x20);
        uVar3 = (vsp = ((unsigned long)(fr0_ - 96)), float_to_color_u8(puVar13,puVar14,ar6_01,(*(undefined4 *)(fr0_ - 0x48))));
        uVar28 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c2630);
        if (cVar34 == '\0') {
          uVar28 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c2634);
        }
        uVar4 = (vsp = ((unsigned long)(fr0_ - 96)), float_to_color_u8(puVar13,puVar14,ar6_01,(*(undefined4 *)(fr0_ - 0x48))));
        uVar29 = SUB84(dVar30,0);
        dVar31 = in_xd14;
        if (cVar34 == '\0') {
          dVar31 = CONCAT44D(uVar29,uVar28);
        }
        pdVar7 = (double *)(unsigned)((uint)*puVar18 * 0x40 + (*(undefined4 *)(unsigned)(unsigned)0x8c4aa510));
        *(undefined4 *)(unsigned)pdVar7 = 0xe0000000;
        fVar27 = F32HI(dVar31);
        if (cVar33 == '\0') {
          dVar25 = CONCAT44D(uVar22,(float)(int)*psVar19 * fVar27);
        }
        else {
          dVar25 = CONCAT44D(uVar22,(float)(int)*psVar19) * dVar31;
        }
        if (cVar34 == '\0') {
          *(int *)(unsigned)(pdVar7 + 4) = SUB84(dVar25,0);
        }
        else {
          pdVar7[4] = in_xd2;
        }
        if (cVar33 == '\0') {
          fVar27 = (float)(int)psVar19[1] * fVar27;
        }
        else {
          fVar27 = SUB84(CONCAT44D((int)(D2U(dVar25) >> 0x20),(float)(int)psVar19[1]) *
                         dVar31,0);
        }
        if (cVar34 == '\0') {
          *(float *)(unsigned)((int)pdVar7 + 0x24) = fVar27;
          dVar25 = CONCAT44D(*(undefined4 *)(unsigned)pdVar7,uVar24);
          dVar21 = CONCAT44D(*(undefined4 *)(unsigned)((int)pdVar7 + 4),fVar27);
          pdVar7 = pdVar7 + 1;
        }
        else {
          *(double *)(unsigned)((int)pdVar7 + 0x24) = in_xd2;
          dVar25 = *pdVar7;
          dVar21 = pdVar7[1];
          pdVar7 = pdVar7 + 2;
        }
        uVar24 = (undefined4)(D2U(dVar21) >> 0x20);
        if (cVar34 == '\0') {
          uVar28 = *(undefined4 *)(unsigned)(pdVar7 + 2);
          dVar31 = CONCAT44D(uVar28,SUB84(dVar31,0));
          *(undefined4 *)(unsigned)((int)unaff_r8 + 0x1c) = *(undefined4 *)(unsigned)((int)pdVar7 + 0x14);
          *(undefined4 *)(unsigned)(unaff_r8 + 3) = uVar28;
          *(undefined4 *)(unsigned)((int)unaff_r8 + 0x14) = uVar24;
          unaff_r8 = unaff_r8 + 2;
          *(int *)(unsigned)unaff_r8 = (int)(D2U(dVar25) >> 0x20);
        }
        else {
          dVar31 = pdVar7[2];
          unaff_r8[3] = pdVar7[3];
          unaff_r8[2] = dVar31;
          unaff_r8[1] = dVar21;
          *unaff_r8 = dVar25;
        }
        puVar18 = puVar17 + 3;
        dVar21 = in_xd14;
        if (cVar34 == '\0') {
          dVar21 = CONCAT44D(uVar29,SUB84(dVar31,0));
        }
        pdVar7 = (double *)(unsigned)((uint)puVar17[2] * 0x40 + (*(undefined4 *)(unsigned)(unsigned)0x8c4aa510));
        *(undefined4 *)(unsigned)pdVar7 = 0xe0000000;
        fVar27 = F32HI(dVar21);
        if (cVar33 == '\0') {
          dVar31 = CONCAT44D(uVar24,(float)(int)psVar19[2] * fVar27);
        }
        else {
          dVar31 = CONCAT44D(uVar24,(float)(int)psVar19[2]) * dVar21;
        }
        if (cVar34 == '\0') {
          *(int *)(unsigned)(pdVar7 + 4) = SUB84(dVar31,0);
        }
        else {
          pdVar7[4] = in_xd2;
        }
        psVar20 = psVar19 + 4;
        if (cVar33 == '\0') {
          fVar27 = (float)(int)psVar19[3] * fVar27;
        }
        else {
          fVar27 = SUB84(CONCAT44D((int)(D2U(dVar31) >> 0x20),(float)(int)psVar19[3]) *
                         dVar21,0);
        }
        if (cVar34 == '\0') {
          *(float *)(unsigned)((int)pdVar7 + 0x24) = fVar27;
          dVar31 = CONCAT44D(*(undefined4 *)(unsigned)pdVar7,SUB84(dVar25,0));
          dVar25 = CONCAT44D(*(undefined4 *)(unsigned)((int)pdVar7 + 4),fVar27);
          pdVar7 = pdVar7 + 1;
        }
        else {
          *(double *)(unsigned)((int)pdVar7 + 0x24) = in_xd2;
          dVar31 = *pdVar7;
          dVar25 = pdVar7[1];
          pdVar7 = pdVar7 + 2;
        }
        if (cVar34 == '\0') {
          uVar24 = *(undefined4 *)(unsigned)(pdVar7 + 2);
          dVar21 = CONCAT44D(uVar24,SUB84(dVar21,0));
          *(undefined4 *)(unsigned)((int)unaff_r8 + 0x3c) = *(undefined4 *)(unsigned)((int)pdVar7 + 0x14);
          *(undefined4 *)(unsigned)(unaff_r8 + 7) = uVar24;
          *(int *)(unsigned)((int)unaff_r8 + 0x34) = (int)(D2U(dVar25) >> 0x20);
          pdVar7 = unaff_r8 + 6;
          *(int *)(unsigned)pdVar7 = (int)(D2U(dVar31) >> 0x20);
        }
        else {
          dVar21 = pdVar7[2];
          unaff_r8[7] = pdVar7[3];
          unaff_r8[6] = dVar21;
          unaff_r8[5] = dVar25;
          pdVar7 = unaff_r8 + 4;
          *pdVar7 = dVar31;
        }
        uVar24 = SUB84(dVar21,0);
        pdVar7 = pdVar7 + 4;
        (*(int *)(fr0_ - 0x60)) = 2;
        if (2 < (int)(uVar2 - 1)) {
          do {
            uVar1 = *puVar18;
            puVar18 = puVar18 + 1;
            dVar26 = in_xd14;
            if (cVar34 == '\0') {
              dVar26 = CONCAT44D(uVar29,SUB84(dVar21,0));
            }
            pdVar8 = (double *)(unsigned)((uint)uVar1 * 0x40 + (*(undefined4 *)(unsigned)(unsigned)0x8c4aa510));
            *(undefined4 *)(unsigned)pdVar8 = 0xe0000000;
            *(undefined4 *)(unsigned)(pdVar8 + 5) = uVar3;
            *(undefined4 *)(unsigned)((int)pdVar8 + 0x2c) = uVar4;
            uVar24 = (undefined4)(D2U(dVar25) >> 0x20);
            fVar27 = F32HI(dVar26);
            if (cVar33 == '\0') {
              dVar25 = CONCAT44D(uVar24,(float)(int)*psVar20 * fVar27);
            }
            else {
              dVar25 = CONCAT44D(uVar24,(float)(int)*psVar20) * dVar26;
            }
            if (cVar34 == '\0') {
              *(int *)(unsigned)(pdVar8 + 4) = SUB84(dVar25,0);
            }
            else {
              pdVar8[4] = in_xd2;
            }
            if (cVar33 == '\0') {
              fVar27 = (float)(int)psVar20[1] * fVar27;
            }
            else {
              fVar27 = SUB84(CONCAT44D((int)(D2U(dVar25) >> 0x20),
                                              (float)(int)psVar20[1]) * dVar26,0);
            }
            if (cVar34 == '\0') {
              *(float *)(unsigned)((int)pdVar8 + 0x24) = fVar27;
            }
            else {
              *(double *)(unsigned)((int)pdVar8 + 0x24) = in_xd2;
            }
            psVar20 = psVar20 + 2;
            if (cVar34 == '\0') {
              dVar31 = CONCAT44D(*(undefined4 *)(unsigned)pdVar8,SUB84(dVar31,0));
              dVar25 = CONCAT44D(*(undefined4 *)(unsigned)((int)pdVar8 + 4),fVar27);
              pdVar8 = pdVar8 + 1;
            }
            else {
              dVar31 = *pdVar8;
              dVar25 = pdVar8[1];
              pdVar8 = pdVar8 + 2;
            }
            if (cVar34 == '\0') {
              uVar24 = *(undefined4 *)(unsigned)(pdVar8 + 2);
              dVar21 = CONCAT44D(uVar24,SUB84(dVar26,0));
              *(undefined4 *)(unsigned)((int)pdVar7 + 0x1c) = *(undefined4 *)(unsigned)((int)pdVar8 + 0x14);
              *(undefined4 *)(unsigned)(pdVar7 + 3) = uVar24;
              *(int *)(unsigned)((int)pdVar7 + 0x14) = (int)(D2U(dVar25) >> 0x20);
              pdVar7 = pdVar7 + 2;
              *(int *)(unsigned)pdVar7 = (int)(D2U(dVar31) >> 0x20);
            }
            else {
              dVar21 = pdVar8[2];
              pdVar7[3] = pdVar8[3];
              pdVar7[2] = dVar21;
              pdVar7[1] = dVar25;
              *pdVar7 = dVar31;
            }
            uVar24 = SUB84(dVar21,0);
            pdVar7 = pdVar7 + 4;
            (*(int *)(fr0_ - 0x60)) = (*(int *)(fr0_ - 0x60)) + 1;
          } while ((*(int *)(fr0_ - 0x60)) < (int)(uVar2 - 1));
        }
        puVar17 = puVar18 + 1;
        dVar21 = in_xd14;
        if (cVar34 == '\0') {
          dVar21 = CONCAT44D(uVar29,uVar24);
        }
        pdVar8 = (double *)(unsigned)((uint)*puVar18 * 0x40 + (*(undefined4 *)(unsigned)(unsigned)0x8c4aa510));
        *(undefined4 *)(unsigned)pdVar8 = 0xf0000000;
        *(undefined4 *)(unsigned)(pdVar8 + 5) = uVar3;
        *(undefined4 *)(unsigned)((int)pdVar8 + 0x2c) = uVar4;
        uVar24 = (undefined4)(D2U(dVar25) >> 0x20);
        fVar27 = F32HI(dVar21);
        if (cVar33 == '\0') {
          dVar25 = CONCAT44D(uVar24,(float)(int)*psVar20 * fVar27);
        }
        else {
          dVar25 = CONCAT44D(uVar24,(float)(int)*psVar20) * dVar21;
        }
        if (cVar34 == '\0') {
          *(int *)(unsigned)(pdVar8 + 4) = SUB84(dVar25,0);
        }
        else {
          pdVar8[4] = in_xd2;
        }
        if (cVar33 == '\0') {
          fVar27 = (float)(int)psVar20[1] * fVar27;
        }
        else {
          fVar27 = SUB84(CONCAT44D((int)(D2U(dVar25) >> 0x20),(float)(int)psVar20[1]) *
                         dVar21,0);
        }
        psVar19 = psVar20 + 2;
        if (cVar34 == '\0') {
          *(float *)(unsigned)((int)pdVar8 + 0x24) = fVar27;
          in_dr0 = CONCAT44D(*(undefined4 *)(unsigned)pdVar8,SUB84(dVar31,0));
          dVar31 = CONCAT44D(*(undefined4 *)(unsigned)((int)pdVar8 + 4),fVar27);
          pdVar8 = pdVar8 + 1;
        }
        else {
          *(double *)(unsigned)((int)pdVar8 + 0x24) = in_xd2;
          in_dr0 = *pdVar8;
          dVar31 = pdVar8[1];
          pdVar8 = pdVar8 + 2;
        }
        if (cVar34 == '\0') {
          uVar24 = *(undefined4 *)(unsigned)(pdVar8 + 2);
          in_dr4 = CONCAT44D(uVar24,SUB84(dVar21,0));
          *(undefined4 *)(unsigned)((int)pdVar7 + 0x1c) = *(undefined4 *)(unsigned)((int)pdVar8 + 0x14);
          *(undefined4 *)(unsigned)(pdVar7 + 3) = uVar24;
          *(int *)(unsigned)((int)pdVar7 + 0x14) = (int)(D2U(dVar31) >> 0x20);
          pdVar7 = pdVar7 + 2;
          *(int *)(unsigned)pdVar7 = (int)((ulonglong)in_dr0 >> 0x20);
        }
        else {
          in_dr4 = pdVar8[2];
          pdVar7[3] = pdVar8[3];
          pdVar7[2] = in_dr4;
          pdVar7[1] = dVar31;
          *pdVar7 = in_dr0;
        }
        unaff_r8 = pdVar7 + 4;
      }
    }
  }
  else if (uVar2 == 0xc000) {
    if (((*(undefined4 *)(unsigned)(unsigned)0x8c4ab308) & 0x800000) == 0) {
      pcVar9 = ((void *)0x8c240a66);
    }
    else {
      pcVar9 = ((void *)0x8c2407e2);
    }
    uVar2 = (vsp = ((unsigned long)(fr0_ - 96)), (*(code *)xlat((unsigned long)pcVar9))(ar4,uVar1 & 0x3fff,ar4,ar7));
  }
  return uVar2;
}

__asm__(".globl _FUN_8c24d5a8\n.set _FUN_8c24d5a8, _FUN_8c24d5a8_def\n");
