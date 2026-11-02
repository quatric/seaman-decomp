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
uint FUN_8c24df18_def(ushort *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c24df18";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 116; for (int i_ = 0; i_ < 116; i_++) z_[i_] = 0; }
  ushort uVar1;
  uint uVar2;
  int iVar3;
  double *pdVar4;
  int iVar5;
  code *pcVar6;
  double *pdVar7;
  uint uVar8;
  int iVar9;
  undefined1 *puVar10;
  ushort *puVar11;
  undefined1 *puVar12;
  uint *ar4_00;
  undefined4 *puVar13;
  double *pdVar14;
  int iVar15;
  double *pdVar16;
  undefined1 *puVar17;
  short *psVar18;
  uint uVar19;
  double *unaff_r8 = 0;
  double *pdVar20;
  double *pdVar21;
  uint uVar22;
  uint *ar6_00;
  ushort *puVar23;
  ushort *puVar24;
  short *psVar25;
  short *psVar26;
  double in_dr0 = 0;
  float fVar27;
  float fVar28;
  float fVar29;
  double in_dr2 = 0;
  double dVar30;
  double dVar31;
  undefined4 uVar32;
  double in_dr4 = 0;
  double dVar33;
  undefined4 uVar34;
  double in_dr6 = 0;
  double dVar35;
  double dVar36;
  double in_dr8 = 0;
  double in_dr12 = 0;
  double dVar38;
  undefined4 uVar39;
  undefined4 uVar40;
  undefined8 in_dr14 = 0;
  double dVar41;
  double in_xd0 = 0;
  double in_xd2 = 0;
  double in_xd4 = 0;
  double in_xd6 = 0;
  double dVar42;
  double in_xd8 = 0;
  double in_xd14 = 0;
  bool bVar43;
  undefined4 in_PR = 0;
  char cVar44;
  char cVar45;
  undefined4 uVar37;
  
  cVar45 = '\0';
  cVar44 = '\0';
  (*(undefined4 *)(fr0_ - 0x1c)) = (undefined4)in_dr14;
  (*(undefined4 *)(fr0_ - 0x20)) = (undefined4)((ulonglong)in_dr14 >> 0x20);
  (*(undefined4 *)(fr0_ - 0x24)) = SUB84(in_dr12,0);
  (*(undefined4 *)(fr0_ - 0x28)) = (undefined4)((ulonglong)in_dr12 >> 0x20);
  dVar41 = 3.0517584889366844e-05;
  uVar1 = *ar4;
  uVar2 = uVar1 & 0xc000;
  psVar25 = ((short *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 10));
  puVar23 = ((ushort *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 2));
  (*(undefined4 *)(fr0_ - 0x2c)) = in_PR;
  if ((uVar1 & 0xc000) == 0) {
    (*(undefined4 *)(unsigned)(unsigned)0x8c4aa51c) = (*(undefined4 *)(unsigned)(unsigned)0x8c4aa51c) + (uint)ar4[1] * 3;
    (*(int *)(fr0_ - 0x68)) = 0;
    while( true ) {
      uVar2 = (uint)ar4[1];
      if ((int)uVar2 <= (*(int *)(fr0_ - 0x68))) break;
      puVar11 = puVar23 + 1;
      pdVar4 = (double *)(unsigned)((uint)*puVar23 * 0x40 + (*(undefined4 *)(unsigned)(unsigned)0x8c4aa510));
      puVar24 = puVar23 + 2;
      puVar23 = puVar23 + 3;
      pdVar20 = (double *)(unsigned)((uint)*puVar24 * 0x40 + (*(undefined4 *)(unsigned)(unsigned)0x8c4aa510));
      pdVar7 = (double *)(unsigned)((uint)*puVar11 * 0x40 + (*(undefined4 *)(unsigned)(unsigned)0x8c4aa510));
      if ((*(uint *)(unsigned)pdVar4 & *(uint *)(unsigned)pdVar7 & *(uint *)(unsigned)pdVar20 & 0x3f) == 0) {
        if (cVar45 == '\0') {
          in_dr12 = CONCAT44D((int)((ulonglong)in_dr12 >> 0x20),0x3eaaaa3b);
        }
        if (((*(uint *)(unsigned)pdVar4 | *(uint *)(unsigned)pdVar7 | *(uint *)(unsigned)pdVar20) & 1) == 0) {
          if (cVar45 == '\0') {
            uVar37 = *(undefined4 *)(unsigned)((int)pdVar7 + 4);
            dVar31 = CONCAT44D(uVar37,*(undefined4 *)(unsigned)((int)pdVar4 + 4));
            dVar42 = CONCAT44D(uVar37,SUB84(in_dr4,0));
          }
          else {
            dVar31 = *(double *)(unsigned)((int)pdVar7 + 4);
            in_xd2 = *(double *)(unsigned)((int)pdVar4 + 4);
            uVar37 = (undefined4)(D2U(dVar31) >> 0x20);
            dVar42 = dVar31;
          }
          if (cVar44 == '\0') {
            dVar31 = CONCAT44D(F32HI(dVar31) - F32LO(dVar31),
                                      SUB84(dVar31,0));
          }
          else {
            dVar31 = dVar31 - dVar31;
          }
          if (cVar45 == '\0') {
            dVar31 = CONCAT44D((int)(D2U(dVar31) >> 0x20),*(undefined4 *)(unsigned)(pdVar20 + 1))
            ;
            dVar42 = CONCAT44D(uVar37,*(undefined4 *)(unsigned)(pdVar7 + 1));
          }
          else {
            in_xd2 = pdVar20[1];
            in_xd4 = pdVar7[1];
          }
          fVar28 = F32LO(dVar42);
          if (cVar44 == '\0') {
            dVar31 = CONCAT44D((int)(D2U(dVar31) >> 0x20),F32LO(dVar31) - fVar28);
          }
          else {
            dVar31 = dVar31 - dVar42;
          }
          dVar36 = in_xd4;
          if (cVar45 == '\0') {
            in_dr0 = CONCAT44D((int)((ulonglong)in_dr0 >> 0x20),fVar28);
            dVar36 = in_xd0;
          }
          in_xd0 = dVar36;
          if (cVar44 == '\0') {
            dVar31 = CONCAT44D(F32HI(dVar31) * F32LO(dVar31),
                                      SUB84(dVar31,0));
          }
          else {
            dVar31 = dVar31 * dVar31;
          }
          if (cVar45 == '\0') {
            dVar31 = CONCAT44D((int)(D2U(dVar31) >> 0x20),*(undefined4 *)(unsigned)(pdVar4 + 1));
          }
          else {
            in_xd2 = pdVar4[1];
          }
          if (cVar44 == '\0') {
            dVar36 = CONCAT44D((int)((ulonglong)in_dr0 >> 0x20),
                                      F32LO(in_dr0) - F32LO(dVar31));
          }
          else {
            dVar36 = in_dr0 - dVar31;
          }
          if (cVar45 == '\0') {
            dVar31 = CONCAT44D((int)(D2U(dVar31) >> 0x20),
                                      *(undefined4 *)(unsigned)((int)pdVar20 + 4));
          }
          else {
            in_xd2 = *(double *)(unsigned)((int)pdVar20 + 4);
          }
          if (cVar44 == '\0') {
            dVar31 = CONCAT44D((int)(D2U(dVar31) >> 0x20),
                                      F32LO(dVar31) - F32HI(dVar42));
          }
          else {
            dVar31 = dVar31 - dVar42;
          }
          uVar2 = (uint)(D2U(dVar31) >> 0x20);
          dVar42 = dVar31;
          if (cVar45 == '\0') {
            dVar42 = CONCAT44D(uVar2,fVar28);
          }
          if (cVar44 == '\0') {
            in_dr0 = CONCAT44D((int)(D2U(dVar36) >> 0x20),
                                      F32LO(dVar36) * F32LO(dVar31));
          }
          else {
            in_dr0 = dVar36 * dVar31;
          }
          in_dr2 = (double)((ulonglong)uVar2 << 0x20);
          if (cVar44 == '\0') {
            fVar28 = F32HI(dVar42) - F32LO(in_dr0);
            in_dr4 = CONCAT44D(fVar28,SUB84(dVar42,0));
            bVar43 = 0.0 < fVar28;
          }
          else {
            in_dr4 = dVar42 - in_dr0;
            bVar43 = in_dr2 < in_dr4;
          }
          (*(int *)(fr0_ - 0x64)) = 0;
          if (bVar43) {
            if (((*(undefined4 *)(unsigned)(unsigned)0x8c4ab308) & 0x800000) == 0) goto LAB_8c24e3a2;
            (*(int *)(fr0_ - 0x64)) = 0x8000;
          }
          pdVar21 = pdVar7 + 2;
          puVar10 = ((undefined1 *)(fr0_ - 0x44));
          pdVar14 = pdVar20 + 2;
          (vsp = ((unsigned long)(fr0_ - 116)), FUN_8c2361a8(pdVar4 + 2,pdVar21,pdVar14,puVar10));
          uVar37 = SUB84(in_dr0,0);
          ({ unsigned long ri0_ = (unsigned long)(pdVar4); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 116)); FUN_8c25ce48(((undefined1 *)(fr0_ - 0x44)),pdVar21,pdVar14,puVar10); });
          if (cVar45 == '\0') {
            dVar42 = CONCAT44D(*(undefined4 *)(unsigned)(pdVar4 + 2),*(undefined4 *)(unsigned)(pdVar7 + 2));
          }
          else {
            in_xd2 = pdVar7[2];
            dVar42 = pdVar4[2];
          }
          if (cVar44 == '\0') {
            dVar42 = CONCAT44D(F32HI(dVar42) + F32LO(dVar42),
                                      SUB84(dVar42,0));
          }
          else {
            dVar42 = dVar42 + dVar42;
          }
          if (cVar45 == '\0') {
            dVar42 = CONCAT44D((int)(D2U(dVar42) >> 0x20),*(undefined4 *)(unsigned)(pdVar20 + 2))
            ;
          }
          else {
            in_xd2 = pdVar20[2];
          }
          fVar28 = F32LO(in_dr12);
          if (cVar44 == '\0') {
            dVar42 = CONCAT44D((F32HI(dVar42) + F32LO(dVar42)) *
                                      fVar28,SUB84(dVar42,0));
          }
          else {
            dVar42 = (dVar42 + dVar42) * in_dr12;
          }
          if (cVar45 == '\0') {
            (*(undefined4 *)(fr0_ - 0x38)) = (undefined4)(D2U(dVar42) >> 0x20);
            dVar42 = CONCAT44D(*(undefined4 *)(unsigned)((int)pdVar4 + 0x14),
                                      *(undefined4 *)(unsigned)((int)pdVar7 + 0x14));
          }
          else {
            (*(undefined4 *)(fr0_ - 0x38)) = SUB84(dVar42,0);
            in_xd2 = *(double *)(unsigned)((int)pdVar7 + 0x14);
            dVar42 = *(double *)(unsigned)((int)pdVar4 + 0x14);
          }
          if (cVar44 == '\0') {
            dVar42 = CONCAT44D(F32HI(dVar42) + F32LO(dVar42),
                                      SUB84(dVar42,0));
          }
          else {
            dVar42 = dVar42 + dVar42;
          }
          if (cVar45 == '\0') {
            dVar42 = CONCAT44D((int)(D2U(dVar42) >> 0x20),
                                      *(undefined4 *)(unsigned)((int)pdVar20 + 0x14));
          }
          else {
            in_xd2 = *(double *)(unsigned)((int)pdVar20 + 0x14);
          }
          if (cVar44 == '\0') {
            dVar42 = CONCAT44D((F32HI(dVar42) + F32LO(dVar42)) *
                                      fVar28,SUB84(dVar42,0));
          }
          else {
            dVar42 = (dVar42 + dVar42) * in_dr12;
          }
          if (cVar45 == '\0') {
            (*(undefined4 *)(fr0_ - 0x34)) = (undefined4)(D2U(dVar42) >> 0x20);
            dVar42 = CONCAT44D(*(undefined4 *)(unsigned)(pdVar4 + 3),*(undefined4 *)(unsigned)(pdVar7 + 3));
          }
          else {
            (*(undefined4 *)(fr0_ - 0x34)) = SUB84(dVar42,0);
            in_xd2 = pdVar7[3];
            dVar42 = pdVar4[3];
          }
          if (cVar44 == '\0') {
            dVar42 = CONCAT44D(F32HI(dVar42) + F32LO(dVar42),
                                      SUB84(dVar42,0));
          }
          else {
            dVar42 = dVar42 + dVar42;
          }
          if (cVar45 == '\0') {
            dVar42 = CONCAT44D((int)(D2U(dVar42) >> 0x20),*(undefined4 *)(unsigned)(pdVar20 + 3))
            ;
          }
          else {
            in_xd2 = pdVar20[3];
          }
          if (cVar44 == '\0') {
            dVar42 = CONCAT44D((F32HI(dVar42) + F32LO(dVar42)) *
                                      fVar28,SUB84(dVar42,0));
          }
          else {
            dVar42 = (dVar42 + dVar42) * in_dr12;
          }
          uVar34 = (undefined4)(D2U(dVar42) >> 0x20);
          (*(undefined4 *)(fr0_ - 0x30)) = uVar34;
          if (cVar45 != '\0') {
            (*(undefined4 *)(fr0_ - 0x30)) = SUB84(dVar42,0);
            (*(undefined4 *)(fr0_ - 0x2c)) = uVar34;
          }
          puVar10 = ((undefined1 *)(unsigned)0x8c4c2620);
          puVar12 = ((undefined1 *)(fr0_ - 0x44));
          puVar13 = &(*(undefined4 *)(fr0_ - 0x38));
          (vsp = ((unsigned long)(fr0_ - 116)), FUN_8c23bae2(((undefined1 *)(unsigned)0x8c4c2620),puVar13,puVar12,(*(int *)(fr0_ - 0x64))));
          uVar34 = (undefined4)(D2U(dVar42) >> 0x20);
          dVar42 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c2624);
          if (cVar45 == '\0') {
            dVar42 = in_xd4;
          }
          (*(undefined4 *)(fr0_ - 0x4c)) = (vsp = ((unsigned long)(fr0_ - 116)), float_to_color_u8(puVar10,puVar13,puVar12,(*(int *)(fr0_ - 0x64))));
          uVar32 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c2634);
          in_xd4 = dVar42;
          if (cVar45 != '\0') {
            uVar32 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c2630);
            in_xd4 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4c2638),(*(undefined4 *)(unsigned)(unsigned)0x8c4c2634));
          }
          (*(undefined4 *)(fr0_ - 0x48)) = (vsp = ((unsigned long)(fr0_ - 116)), float_to_color_u8(puVar10,puVar13,puVar12,(*(int *)(fr0_ - 0x64))));
          uVar39 = SUB84(dVar41,0);
          dVar42 = in_xd14;
          if (cVar45 == '\0') {
            dVar42 = CONCAT44D(uVar39,uVar32);
          }
          *(undefined4 *)(unsigned)pdVar4 = 0xe0000000;
          fVar28 = F32HI(dVar42);
          if (cVar44 == '\0') {
            dVar31 = CONCAT44D(uVar34,(float)(int)*psVar25 * fVar28);
          }
          else {
            dVar31 = CONCAT44D(uVar34,(float)(int)*psVar25) * dVar42;
          }
          if (cVar45 == '\0') {
            *(int *)(unsigned)(pdVar4 + 4) = SUB84(dVar31,0);
          }
          else {
            pdVar4[4] = in_xd2;
          }
          if (cVar44 == '\0') {
            fVar28 = (float)(int)psVar25[1] * fVar28;
          }
          else {
            fVar28 = SUB84(CONCAT44D((int)(D2U(dVar31) >> 0x20),(float)(int)psVar25[1])
                           * dVar42,0);
          }
          if (cVar45 == '\0') {
            *(float *)(unsigned)((int)pdVar4 + 0x24) = fVar28;
            dVar31 = CONCAT44D(*(undefined4 *)(unsigned)pdVar4,uVar37);
            dVar36 = CONCAT44D(*(undefined4 *)(unsigned)((int)pdVar4 + 4),fVar28);
            pdVar4 = pdVar4 + 1;
          }
          else {
            *(double *)(unsigned)((int)pdVar4 + 0x24) = in_xd2;
            dVar31 = *pdVar4;
            dVar36 = pdVar4[1];
            pdVar4 = pdVar4 + 2;
          }
          uVar37 = (undefined4)(D2U(dVar36) >> 0x20);
          if (cVar45 == '\0') {
            uVar34 = *(undefined4 *)(unsigned)(pdVar4 + 2);
            *(undefined4 *)(unsigned)((int)unaff_r8 + 0x1c) = *(undefined4 *)(unsigned)((int)pdVar4 + 0x14);
            *(undefined4 *)(unsigned)(unaff_r8 + 3) = uVar34;
            *(undefined4 *)(unsigned)((int)unaff_r8 + 0x14) = uVar37;
            unaff_r8 = unaff_r8 + 2;
            *(int *)(unsigned)unaff_r8 = (int)(D2U(dVar31) >> 0x20);
            dVar42 = CONCAT44D(uVar39,SUB84(dVar42,0));
          }
          else {
            dVar42 = pdVar4[2];
            unaff_r8[3] = pdVar4[3];
            unaff_r8[2] = dVar42;
            unaff_r8[1] = dVar36;
            *unaff_r8 = dVar31;
            dVar42 = in_xd14;
          }
          *(undefined4 *)(unsigned)pdVar7 = 0xe0000000;
          fVar28 = F32HI(dVar42);
          if (cVar44 == '\0') {
            dVar36 = CONCAT44D(uVar37,(float)(int)psVar25[2] * fVar28);
          }
          else {
            dVar36 = CONCAT44D(uVar37,(float)(int)psVar25[2]) * dVar42;
          }
          if (cVar45 == '\0') {
            *(int *)(unsigned)(pdVar7 + 4) = SUB84(dVar36,0);
          }
          else {
            pdVar7[4] = in_xd2;
          }
          if (cVar44 == '\0') {
            fVar28 = (float)(int)psVar25[3] * fVar28;
          }
          else {
            fVar28 = SUB84(CONCAT44D((int)(D2U(dVar36) >> 0x20),(float)(int)psVar25[3])
                           * dVar42,0);
          }
          if (cVar45 == '\0') {
            *(float *)(unsigned)((int)pdVar7 + 0x24) = fVar28;
            dVar31 = CONCAT44D(*(undefined4 *)(unsigned)pdVar7,SUB84(dVar31,0));
            dVar36 = CONCAT44D(*(undefined4 *)(unsigned)((int)pdVar7 + 4),fVar28);
            pdVar7 = pdVar7 + 1;
          }
          else {
            *(double *)(unsigned)((int)pdVar7 + 0x24) = in_xd2;
            dVar31 = *pdVar7;
            dVar36 = pdVar7[1];
            pdVar7 = pdVar7 + 2;
          }
          uVar37 = (undefined4)(D2U(dVar36) >> 0x20);
          if (cVar45 == '\0') {
            uVar34 = *(undefined4 *)(unsigned)(pdVar7 + 2);
            dVar42 = CONCAT44D(uVar34,SUB84(dVar42,0));
            *(undefined4 *)(unsigned)((int)unaff_r8 + 0x3c) = *(undefined4 *)(unsigned)((int)pdVar7 + 0x14);
            *(undefined4 *)(unsigned)(unaff_r8 + 7) = uVar34;
            *(undefined4 *)(unsigned)((int)unaff_r8 + 0x34) = uVar37;
            pdVar4 = unaff_r8 + 6;
            *(int *)(unsigned)pdVar4 = (int)(D2U(dVar31) >> 0x20);
          }
          else {
            dVar42 = pdVar7[2];
            unaff_r8[7] = pdVar7[3];
            unaff_r8[6] = dVar42;
            unaff_r8[5] = dVar36;
            pdVar4 = unaff_r8 + 4;
            *pdVar4 = dVar31;
          }
          dVar36 = in_xd14;
          if (cVar45 == '\0') {
            dVar36 = CONCAT44D(uVar39,SUB84(dVar42,0));
          }
          *(undefined4 *)(unsigned)pdVar20 = 0xf0000000;
          *(undefined4 *)(unsigned)(pdVar20 + 5) = (*(undefined4 *)(fr0_ - 0x4c));
          *(undefined4 *)(unsigned)((int)pdVar20 + 0x2c) = (*(undefined4 *)(fr0_ - 0x48));
          fVar28 = F32HI(dVar36);
          if (cVar44 == '\0') {
            dVar42 = CONCAT44D(uVar37,(float)(int)psVar25[4] * fVar28);
          }
          else {
            dVar42 = CONCAT44D(uVar37,(float)(int)psVar25[4]) * dVar36;
          }
          if (cVar45 == '\0') {
            *(int *)(unsigned)(pdVar20 + 4) = SUB84(dVar42,0);
          }
          else {
            pdVar20[4] = in_xd2;
          }
          if (cVar44 == '\0') {
            fVar28 = (float)(int)psVar25[5] * fVar28;
          }
          else {
            fVar28 = SUB84(CONCAT44D((int)(D2U(dVar42) >> 0x20),(float)(int)psVar25[5])
                           * dVar36,0);
          }
          if (cVar45 == '\0') {
            *(float *)(unsigned)((int)pdVar20 + 0x24) = fVar28;
            in_dr0 = CONCAT44D(*(undefined4 *)(unsigned)pdVar20,SUB84(dVar31,0));
            in_dr2 = CONCAT44D(*(undefined4 *)(unsigned)((int)pdVar20 + 4),fVar28);
            pdVar20 = pdVar20 + 1;
          }
          else {
            *(double *)(unsigned)((int)pdVar20 + 0x24) = in_xd2;
            in_dr0 = *pdVar20;
            in_dr2 = pdVar20[1];
            pdVar20 = pdVar20 + 2;
          }
          if (cVar45 == '\0') {
            uVar37 = *(undefined4 *)(unsigned)(pdVar20 + 2);
            in_dr4 = CONCAT44D(uVar37,SUB84(dVar36,0));
            *(undefined4 *)(unsigned)((int)pdVar4 + 0x3c) = *(undefined4 *)(unsigned)((int)pdVar20 + 0x14);
            *(undefined4 *)(unsigned)(pdVar4 + 7) = uVar37;
            *(int *)(unsigned)((int)pdVar4 + 0x34) = (int)((ulonglong)in_dr2 >> 0x20);
            pdVar4 = pdVar4 + 6;
            *(int *)(unsigned)pdVar4 = (int)((ulonglong)in_dr0 >> 0x20);
          }
          else {
            in_dr4 = pdVar20[2];
            pdVar4[7] = pdVar20[3];
            pdVar4[6] = in_dr4;
            pdVar4[5] = in_dr2;
            pdVar4 = pdVar4 + 4;
            *pdVar4 = in_dr0;
          }
          unaff_r8 = pdVar4 + 4;
          (*(undefined4 *)(unsigned)(unsigned)0x8c4aa520) = (*(undefined4 *)(unsigned)(unsigned)0x8c4aa520) + 3;
        }
        else {
          if (cVar45 == '\0') {
            uVar37 = *(undefined4 *)(unsigned)(pdVar7 + 3);
            uVar34 = *(undefined4 *)(unsigned)((int)pdVar7 + 0x14);
            pdVar21 = (double *)(unsigned)((int)pdVar4 + 0x14);
            in_dr2 = CONCAT44D((int)((ulonglong)in_dr2 >> 0x20),uVar34);
            dVar36 = CONCAT44D(uVar37,SUB84(in_dr0,0));
            dVar42 = in_xd2;
            dVar31 = CONCAT44D(uVar34,uVar37);
          }
          else {
            dVar36 = pdVar7[3];
            dVar42 = *(double *)(unsigned)((int)pdVar7 + 0x14);
            in_xd4 = *(double *)(unsigned)((int)pdVar4 + 0x14);
            pdVar21 = pdVar4 + 3;
            uVar34 = (undefined4)(D2U(dVar42) >> 0x20);
            uVar37 = SUB84(dVar42,0);
            dVar31 = dVar42;
            in_xd8 = dVar36;
          }
          dVar33 = *pdVar21;
          fVar29 = F32HI(dVar33);
          fVar28 = F32LO(dVar33);
          if (cVar44 == '\0') {
            fVar27 = F32LO(in_dr2) * fVar29;
            dVar36 = CONCAT44D(F32HI(dVar36) * fVar28,SUB84(dVar36,0));
          }
          else {
            fVar27 = SUB84(in_dr2 * dVar33,0);
            dVar36 = dVar36 * dVar33;
          }
          if (cVar45 == '\0') {
            dVar35 = CONCAT44D(*(undefined4 *)(unsigned)(pdVar7 + 2),*(undefined4 *)(unsigned)(pdVar4 + 2));
            dVar30 = CONCAT44D(uVar37,fVar27);
          }
          else {
            dVar35 = pdVar7[2];
            dVar30 = in_xd8;
          }
          if (cVar44 == '\0') {
            dVar30 = CONCAT44D(F32HI(dVar30) * F32LO(dVar35),
                                      SUB84(dVar30,0));
          }
          else {
            dVar30 = dVar30 * dVar35;
          }
          uVar37 = (undefined4)(D2U(dVar35) >> 0x20);
          dVar38 = dVar35;
          if (cVar45 == '\0') {
            dVar38 = CONCAT44D(uVar37,SUB84(in_dr12,0));
          }
          if (cVar44 == '\0') {
            dVar36 = CONCAT44D(F32HI(dVar36) - F32LO(dVar30),
                                      SUB84(dVar36,0));
          }
          else {
            dVar36 = dVar36 - dVar30;
          }
          in_xd2 = dVar35;
          if (cVar45 == '\0') {
            dVar30 = CONCAT44D((int)(D2U(dVar30) >> 0x20),uVar37);
            in_xd2 = dVar42;
          }
          if (cVar44 == '\0') {
            dVar30 = CONCAT44D((int)(D2U(dVar30) >> 0x20),F32LO(dVar30) * fVar29);
          }
          else {
            dVar30 = dVar30 * dVar33;
          }
          if (cVar45 == '\0') {
            dVar36 = CONCAT44D((int)(D2U(dVar36) >> 0x20),uVar34);
            dVar31 = in_xd0;
          }
          in_xd0 = dVar31;
          if (cVar44 == '\0') {
            dVar36 = CONCAT44D((int)(D2U(dVar36) >> 0x20),
                                      F32LO(dVar36) * F32LO(dVar35));
            in_dr12 = CONCAT44D(F32HI(dVar38) * fVar28,SUB84(dVar38,0));
            fVar29 = F32LO(dVar30) - F32HI(dVar30);
          }
          else {
            dVar36 = dVar36 * dVar35;
            in_dr12 = dVar38 * dVar33;
            fVar29 = SUB84(dVar30 - dVar30,0);
          }
          if (cVar45 == '\0') {
            dVar42 = CONCAT44D(*(undefined4 *)(unsigned)((int)pdVar20 + 0x14),fVar29);
          }
          else {
            dVar42 = *(double *)(unsigned)((int)pdVar20 + 0x14);
          }
          if (cVar44 == '\0') {
            dVar36 = CONCAT44D((int)(D2U(dVar36) >> 0x20),
                                      F32LO(dVar36) - F32HI(in_dr12));
            dVar42 = CONCAT44D(F32HI(dVar42) * F32LO(dVar42),
                                      SUB84(dVar42,0));
          }
          else {
            dVar36 = dVar36 - in_dr12;
            dVar42 = dVar42 * dVar42;
          }
          if (cVar45 == '\0') {
            dVar42 = CONCAT44D((int)(D2U(dVar42) >> 0x20),*(undefined4 *)(unsigned)(pdVar20 + 2))
            ;
          }
          else {
            in_xd2 = pdVar20[2];
          }
          if (cVar44 == '\0') {
            dVar42 = CONCAT44D(F32HI(dVar36) * F32LO(dVar42) +
                                      F32HI(dVar42),SUB84(dVar42,0));
          }
          if (cVar45 == '\0') {
            dVar42 = CONCAT44D((int)(D2U(dVar42) >> 0x20),*(undefined4 *)(unsigned)(pdVar20 + 3))
            ;
            in_dr0 = CONCAT44D(SUB84(dVar36,0),SUB84(dVar36,0));
          }
          else {
            in_xd2 = pdVar20[3];
            in_dr0 = in_xd0;
          }
          if (cVar44 == '\0') {
            dVar42 = (double)((ulonglong)
                              (uint)(F32HI(in_dr0) * F32LO(dVar42) +
                                    F32HI(dVar42)) << 0x20);
          }
          in_dr2 = (double)(D2U(dVar42) & 0xffffffff00000000);
          in_dr4 = in_dr2;
          if (cVar45 == '\0') {
            in_dr4 = CONCAT44D((int)(D2U(dVar42) >> 0x20),fVar28);
          }
          if (cVar44 == '\0') {
            bVar43 = 0.0 < F32HI(in_dr4);
          }
          else {
            bVar43 = in_dr2 < in_dr4;
          }
          (*(int *)(fr0_ - 0x64)) = 0;
          if (bVar43) {
            if (((*(undefined4 *)(unsigned)(unsigned)0x8c4ab308) & 0x800000) == 0) goto LAB_8c24e3a2;
            (*(int *)(fr0_ - 0x64)) = 0x8000;
          }
          pdVar21 = pdVar7 + 2;
          puVar10 = ((undefined1 *)(fr0_ - 0x44));
          pdVar14 = pdVar20 + 2;
          (vsp = ((unsigned long)(fr0_ - 116)), FUN_8c2361a8(pdVar4 + 2,pdVar21,pdVar14,puVar10));
          ({ unsigned long ri0_ = (unsigned long)(pdVar4); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 116)); FUN_8c25ce48(((undefined1 *)(fr0_ - 0x44)),pdVar21,pdVar14,puVar10); });
          if (cVar45 == '\0') {
            dVar42 = CONCAT44D(*(undefined4 *)(unsigned)(pdVar4 + 2),*(undefined4 *)(unsigned)(pdVar7 + 2));
          }
          else {
            in_xd2 = pdVar7[2];
            dVar42 = pdVar4[2];
          }
          if (cVar44 == '\0') {
            dVar42 = CONCAT44D(F32HI(dVar42) + F32LO(dVar42),
                                      SUB84(dVar42,0));
          }
          else {
            dVar42 = dVar42 + dVar42;
          }
          if (cVar45 == '\0') {
            dVar42 = CONCAT44D((int)(D2U(dVar42) >> 0x20),*(undefined4 *)(unsigned)(pdVar20 + 2))
            ;
          }
          else {
            in_xd2 = pdVar20[2];
          }
          fVar28 = F32LO(in_dr12);
          if (cVar44 == '\0') {
            dVar42 = CONCAT44D((F32HI(dVar42) + F32LO(dVar42)) *
                                      fVar28,SUB84(dVar42,0));
          }
          else {
            dVar42 = (dVar42 + dVar42) * in_dr12;
          }
          if (cVar45 == '\0') {
            (*(undefined4 *)(fr0_ - 0x38)) = (undefined4)(D2U(dVar42) >> 0x20);
            dVar42 = CONCAT44D(*(undefined4 *)(unsigned)((int)pdVar4 + 0x14),
                                      *(undefined4 *)(unsigned)((int)pdVar7 + 0x14));
          }
          else {
            (*(undefined4 *)(fr0_ - 0x38)) = SUB84(dVar42,0);
            in_xd2 = *(double *)(unsigned)((int)pdVar7 + 0x14);
            dVar42 = *(double *)(unsigned)((int)pdVar4 + 0x14);
          }
          if (cVar44 == '\0') {
            dVar42 = CONCAT44D(F32HI(dVar42) + F32LO(dVar42),
                                      SUB84(dVar42,0));
          }
          else {
            dVar42 = dVar42 + dVar42;
          }
          if (cVar45 == '\0') {
            dVar42 = CONCAT44D((int)(D2U(dVar42) >> 0x20),
                                      *(undefined4 *)(unsigned)((int)pdVar20 + 0x14));
          }
          else {
            in_xd2 = *(double *)(unsigned)((int)pdVar20 + 0x14);
          }
          if (cVar44 == '\0') {
            dVar42 = CONCAT44D((F32HI(dVar42) + F32LO(dVar42)) *
                                      fVar28,SUB84(dVar42,0));
          }
          else {
            dVar42 = (dVar42 + dVar42) * in_dr12;
          }
          if (cVar45 == '\0') {
            (*(undefined4 *)(fr0_ - 0x34)) = (undefined4)(D2U(dVar42) >> 0x20);
            dVar42 = CONCAT44D(*(undefined4 *)(unsigned)(pdVar4 + 3),*(undefined4 *)(unsigned)(pdVar7 + 3));
          }
          else {
            (*(undefined4 *)(fr0_ - 0x34)) = SUB84(dVar42,0);
            in_xd2 = pdVar7[3];
            dVar42 = pdVar4[3];
          }
          if (cVar44 == '\0') {
            dVar42 = CONCAT44D(F32HI(dVar42) + F32LO(dVar42),
                                      SUB84(dVar42,0));
          }
          else {
            dVar42 = dVar42 + dVar42;
          }
          if (cVar45 == '\0') {
            dVar42 = CONCAT44D((int)(D2U(dVar42) >> 0x20),*(undefined4 *)(unsigned)(pdVar20 + 3))
            ;
          }
          else {
            in_xd2 = pdVar20[3];
          }
          if (cVar44 == '\0') {
            dVar42 = CONCAT44D((F32HI(dVar42) + F32LO(dVar42)) *
                                      fVar28,SUB84(dVar42,0));
          }
          else {
            dVar42 = (dVar42 + dVar42) * in_dr12;
          }
          uVar37 = (undefined4)(D2U(dVar42) >> 0x20);
          (*(undefined4 *)(fr0_ - 0x30)) = uVar37;
          if (cVar45 != '\0') {
            (*(undefined4 *)(fr0_ - 0x30)) = SUB84(dVar42,0);
            (*(undefined4 *)(fr0_ - 0x2c)) = uVar37;
          }
          puVar10 = ((undefined1 *)(unsigned)0x8c4c2620);
          puVar12 = ((undefined1 *)(fr0_ - 0x44));
          puVar13 = &(*(undefined4 *)(fr0_ - 0x38));
          (vsp = ((unsigned long)(fr0_ - 116)), FUN_8c23bae2(((undefined1 *)(unsigned)0x8c4c2620),puVar13,puVar12,(*(int *)(fr0_ - 0x64))));
          uVar37 = (undefined4)(D2U(dVar42) >> 0x20);
          dVar42 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c2624);
          if (cVar45 == '\0') {
            dVar42 = in_xd4;
          }
          (*(undefined4 *)(fr0_ - 0x4c)) = (vsp = ((unsigned long)(fr0_ - 116)), float_to_color_u8(puVar10,puVar13,puVar12,(*(int *)(fr0_ - 0x64))));
          uVar34 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c2634);
          in_xd4 = dVar42;
          if (cVar45 != '\0') {
            uVar34 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c2630);
            in_xd4 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4c2638),(*(undefined4 *)(unsigned)(unsigned)0x8c4c2634));
          }
          (*(undefined4 *)(fr0_ - 0x48)) = (vsp = ((unsigned long)(fr0_ - 116)), float_to_color_u8(puVar10,puVar13,puVar12,(*(int *)(fr0_ - 0x64))));
          in_dr4 = in_xd14;
          if (cVar45 == '\0') {
            in_dr4 = CONCAT44D(SUB84(dVar41,0),uVar34);
          }
          fVar28 = F32HI(in_dr4);
          if (cVar44 == '\0') {
            dVar42 = CONCAT44D(uVar37,(float)(int)*psVar25 * fVar28);
          }
          else {
            dVar42 = CONCAT44D(uVar37,(float)(int)*psVar25) * in_dr4;
          }
          if (cVar45 == '\0') {
            *(int *)(unsigned)(pdVar4 + 4) = SUB84(dVar42,0);
          }
          else {
            pdVar4[4] = in_xd2;
          }
          uVar37 = (undefined4)(D2U(dVar42) >> 0x20);
          if (cVar44 == '\0') {
            dVar42 = CONCAT44D(uVar37,(float)(int)psVar25[1] * fVar28);
          }
          else {
            dVar42 = CONCAT44D(uVar37,(float)(int)psVar25[1]) * in_dr4;
          }
          if (cVar45 == '\0') {
            *(int *)(unsigned)((int)pdVar4 + 0x24) = SUB84(dVar42,0);
          }
          else {
            *(double *)(unsigned)((int)pdVar4 + 0x24) = in_xd2;
          }
          uVar37 = (undefined4)(D2U(dVar42) >> 0x20);
          if (cVar44 == '\0') {
            dVar42 = CONCAT44D(uVar37,(float)(int)psVar25[2] * fVar28);
          }
          else {
            dVar42 = CONCAT44D(uVar37,(float)(int)psVar25[2]) * in_dr4;
          }
          if (cVar45 == '\0') {
            *(int *)(unsigned)(pdVar7 + 4) = SUB84(dVar42,0);
          }
          else {
            pdVar7[4] = in_xd2;
          }
          uVar37 = (undefined4)(D2U(dVar42) >> 0x20);
          if (cVar44 == '\0') {
            dVar42 = CONCAT44D(uVar37,(float)(int)psVar25[3] * fVar28);
          }
          else {
            dVar42 = CONCAT44D(uVar37,(float)(int)psVar25[3]) * in_dr4;
          }
          if (cVar45 == '\0') {
            *(int *)(unsigned)((int)pdVar7 + 0x24) = SUB84(dVar42,0);
          }
          else {
            *(double *)(unsigned)((int)pdVar7 + 0x24) = in_xd2;
          }
          uVar37 = (undefined4)(D2U(dVar42) >> 0x20);
          if (cVar44 == '\0') {
            dVar42 = CONCAT44D(uVar37,(float)(int)psVar25[4] * fVar28);
          }
          else {
            dVar42 = CONCAT44D(uVar37,(float)(int)psVar25[4]) * in_dr4;
          }
          if (cVar45 == '\0') {
            *(int *)(unsigned)(pdVar20 + 4) = SUB84(dVar42,0);
          }
          else {
            pdVar20[4] = in_xd2;
          }
          uVar37 = (undefined4)(D2U(dVar42) >> 0x20);
          if (cVar44 == '\0') {
            in_dr2 = CONCAT44D(uVar37,(float)(int)psVar25[5] * fVar28);
          }
          else {
            in_dr2 = CONCAT44D(uVar37,(float)(int)psVar25[5]) * in_dr4;
          }
          if (cVar45 == '\0') {
            *(int *)(unsigned)((int)pdVar20 + 0x24) = SUB84(in_dr2,0);
          }
          else {
            *(double *)(unsigned)((int)pdVar20 + 0x24) = in_xd2;
          }
          (vsp = ((unsigned long)(fr0_ - 116)), FUN_8c247898(pdVar4,pdVar7,pdVar20,&(*(undefined4 *)(fr0_ - 0x4c))));
        }
      }
LAB_8c24e3a2:
      psVar25 = psVar25 + 6;
      (*(int *)(fr0_ - 0x68)) = (*(int *)(fr0_ - 0x68)) + 1;
    }
  }
  else if (uVar2 == 0x4000) {
    (*(undefined4 *)(unsigned)(unsigned)0x8c4aa51c) = (*(undefined4 *)(unsigned)(unsigned)0x8c4aa51c) + (uint)ar4[1] * 4;
    for ((*(int *)(fr0_ - 0x64)) = 0; uVar2 = (uint)ar4[1], (*(int *)(fr0_ - 0x64)) < (int)uVar2; (*(int *)(fr0_ - 0x64)) = (*(int *)(fr0_ - 0x64)) + 1) {
      pdVar7 = (double *)(unsigned)((uint)*puVar23 * 0x40 + (*(undefined4 *)(unsigned)(unsigned)0x8c4aa510));
      puVar11 = puVar23 + 3;
      pdVar20 = (double *)(unsigned)((uint)puVar23[1] * 0x40 + (*(undefined4 *)(unsigned)(unsigned)0x8c4aa510));
      pdVar21 = (double *)(unsigned)((uint)puVar23[2] * 0x40 + (*(undefined4 *)(unsigned)(unsigned)0x8c4aa510));
      puVar23 = puVar23 + 4;
      pdVar4 = (double *)(unsigned)((uint)*puVar11 * 0x40 + (*(undefined4 *)(unsigned)(unsigned)0x8c4aa510));
      if ((*(uint *)(unsigned)pdVar7 & *(uint *)(unsigned)pdVar20 & *(uint *)(unsigned)pdVar21 & *(uint *)(unsigned)pdVar4 & 0x3f) == 0) {
        if (((*(uint *)(unsigned)pdVar7 | *(uint *)(unsigned)pdVar20 | *(uint *)(unsigned)pdVar21 | *(uint *)(unsigned)pdVar4) & 1) == 0) {
          if (cVar45 == '\0') {
            uVar37 = *(undefined4 *)(unsigned)((int)pdVar20 + 4);
            dVar42 = CONCAT44D(uVar37,*(undefined4 *)(unsigned)((int)pdVar7 + 4));
          }
          else {
            dVar42 = *(double *)(unsigned)((int)pdVar20 + 4);
            in_xd2 = *(double *)(unsigned)((int)pdVar7 + 4);
            uVar37 = SUB84(in_dr4,0);
          }
          if (cVar44 == '\0') {
            dVar42 = CONCAT44D(F32HI(dVar42) - F32LO(dVar42),
                                      SUB84(dVar42,0));
          }
          else {
            dVar42 = dVar42 - dVar42;
          }
          if (cVar45 == '\0') {
            dVar42 = CONCAT44D((int)(D2U(dVar42) >> 0x20),*(undefined4 *)(unsigned)(pdVar21 + 1))
            ;
            dVar31 = CONCAT44D(*(undefined4 *)(unsigned)(pdVar20 + 1),uVar37);
          }
          else {
            in_xd2 = pdVar21[1];
            dVar31 = pdVar20[1];
          }
          fVar28 = F32HI(dVar31);
          if (cVar44 == '\0') {
            dVar42 = CONCAT44D((int)(D2U(dVar42) >> 0x20),F32LO(dVar42) - fVar28);
          }
          else {
            dVar42 = dVar42 - dVar31;
          }
          dVar36 = dVar31;
          if (cVar45 == '\0') {
            in_dr0 = CONCAT44D((int)((ulonglong)in_dr0 >> 0x20),fVar28);
            dVar36 = in_xd0;
          }
          in_xd0 = dVar36;
          if (cVar44 == '\0') {
            dVar42 = CONCAT44D(F32HI(dVar42) * F32LO(dVar42),
                                      SUB84(dVar42,0));
          }
          else {
            dVar42 = dVar42 * dVar42;
          }
          if (cVar45 == '\0') {
            dVar42 = CONCAT44D((int)(D2U(dVar42) >> 0x20),*(undefined4 *)(unsigned)(pdVar7 + 1));
          }
          else {
            in_xd2 = pdVar7[1];
          }
          if (cVar44 == '\0') {
            dVar36 = CONCAT44D((int)((ulonglong)in_dr0 >> 0x20),
                                      F32LO(in_dr0) - F32LO(dVar42));
          }
          else {
            dVar36 = in_dr0 - dVar42;
          }
          if (cVar45 == '\0') {
            dVar42 = CONCAT44D((int)(D2U(dVar42) >> 0x20),
                                      *(undefined4 *)(unsigned)((int)pdVar21 + 4));
          }
          else {
            in_xd2 = *(double *)(unsigned)((int)pdVar21 + 4);
          }
          if (cVar44 == '\0') {
            dVar42 = CONCAT44D((int)(D2U(dVar42) >> 0x20),
                                      F32LO(dVar42) - F32LO(dVar31));
          }
          else {
            dVar42 = dVar42 - dVar31;
          }
          uVar2 = (uint)(D2U(dVar42) >> 0x20);
          dVar33 = dVar42;
          if (cVar45 == '\0') {
            dVar33 = CONCAT44D(uVar2,SUB84(dVar31,0));
          }
          if (cVar44 == '\0') {
            in_dr0 = CONCAT44D((int)(D2U(dVar36) >> 0x20),
                                      F32LO(dVar36) * F32LO(dVar42));
          }
          else {
            in_dr0 = dVar36 * dVar42;
          }
          in_dr2 = (double)((ulonglong)uVar2 << 0x20);
          if (cVar44 == '\0') {
            fVar28 = F32HI(dVar33) - F32LO(in_dr0);
            in_dr4 = CONCAT44D(fVar28,SUB84(dVar33,0));
            bVar43 = 0.0 < fVar28;
          }
          else {
            in_dr4 = dVar33 - in_dr0;
            bVar43 = in_dr2 < in_dr4;
          }
          (*(undefined4 *)(fr0_ - 0x60)) = 0;
          if (bVar43) {
            if (((*(undefined4 *)(unsigned)(unsigned)0x8c4ab308) & 0x800000) == 0) goto LAB_8c24e86e;
            (*(undefined4 *)(fr0_ - 0x60)) = 0x8000;
          }
          pdVar14 = pdVar20 + 2;
          puVar10 = ((undefined1 *)(fr0_ - 0x44));
          pdVar16 = pdVar21 + 2;
          (vsp = ((unsigned long)(fr0_ - 116)), FUN_8c2361a8(pdVar7 + 2,pdVar14,pdVar16,puVar10));
          uVar37 = SUB84(in_dr0,0);
          ({ unsigned long ri0_ = (unsigned long)(pdVar7); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 116)); FUN_8c25ce48(((undefined1 *)(fr0_ - 0x44)),pdVar14,pdVar16,puVar10); });
          if (cVar45 == '\0') {
            dVar42 = CONCAT44D(*(undefined4 *)(unsigned)(pdVar20 + 2),*(undefined4 *)(unsigned)(pdVar21 + 2));
          }
          else {
            dVar42 = pdVar20[2];
            in_xd2 = pdVar21[2];
          }
          puVar10 = ((undefined1 *)(unsigned)0x8c4c2620);
          puVar12 = ((undefined1 *)(fr0_ - 0x44));
          fVar28 = F32HI(dVar41);
          if (cVar44 == '\0') {
            dVar42 = CONCAT44D((F32HI(dVar42) + F32LO(dVar42)) *
                                      fVar28,SUB84(dVar42,0));
          }
          else {
            dVar42 = (dVar42 + dVar42) * dVar41;
          }
          if (cVar45 == '\0') {
            (*(undefined4 *)(fr0_ - 0x38)) = (undefined4)(D2U(dVar42) >> 0x20);
            dVar42 = CONCAT44D(*(undefined4 *)(unsigned)((int)pdVar20 + 0x14),
                                      *(undefined4 *)(unsigned)((int)pdVar21 + 0x14));
          }
          else {
            (*(undefined4 *)(fr0_ - 0x38)) = SUB84(dVar42,0);
            dVar42 = *(double *)(unsigned)((int)pdVar20 + 0x14);
            in_xd2 = *(double *)(unsigned)((int)pdVar21 + 0x14);
          }
          if (cVar44 == '\0') {
            dVar42 = CONCAT44D((F32HI(dVar42) + F32LO(dVar42)) *
                                      fVar28,SUB84(dVar42,0));
          }
          else {
            dVar42 = (dVar42 + dVar42) * dVar41;
          }
          if (cVar45 == '\0') {
            (*(undefined4 *)(fr0_ - 0x34)) = (undefined4)(D2U(dVar42) >> 0x20);
            dVar42 = CONCAT44D(*(undefined4 *)(unsigned)(pdVar20 + 3),*(undefined4 *)(unsigned)(pdVar21 + 3));
          }
          else {
            (*(undefined4 *)(fr0_ - 0x34)) = SUB84(dVar42,0);
            dVar42 = pdVar20[3];
            in_xd2 = pdVar21[3];
          }
          if (cVar44 == '\0') {
            dVar42 = CONCAT44D((F32HI(dVar42) + F32LO(dVar42)) *
                                      fVar28,SUB84(dVar42,0));
          }
          else {
            dVar42 = (dVar42 + dVar42) * dVar41;
          }
          uVar34 = (undefined4)(D2U(dVar42) >> 0x20);
          (*(undefined4 *)(fr0_ - 0x30)) = uVar34;
          if (cVar45 != '\0') {
            (*(undefined4 *)(fr0_ - 0x30)) = SUB84(dVar42,0);
            (*(undefined4 *)(fr0_ - 0x2c)) = uVar34;
          }
          puVar13 = &(*(undefined4 *)(fr0_ - 0x38));
          (vsp = ((unsigned long)(fr0_ - 116)), FUN_8c23bae2(((undefined1 *)(unsigned)0x8c4c2620),puVar13,puVar12,(*(undefined4 *)(fr0_ - 0x60))));
          uVar34 = (undefined4)(D2U(dVar42) >> 0x20);
          if (cVar45 != '\0') {
            in_xd6 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4c2630),(*(undefined4 *)(unsigned)(unsigned)0x8c4c262c));
          }
          (*(undefined4 *)(fr0_ - 0x4c)) = (vsp = ((unsigned long)(fr0_ - 116)), float_to_color_u8(puVar10,puVar13,puVar12,(*(undefined4 *)(fr0_ - 0x60))));
          uVar32 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c2634);
          if (cVar45 != '\0') {
            in_xd6 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4c2640),(*(undefined4 *)(unsigned)(unsigned)0x8c4c263c));
            uVar32 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c2630);
          }
          (*(undefined4 *)(fr0_ - 0x48)) = (vsp = ((unsigned long)(fr0_ - 116)), float_to_color_u8(puVar10,puVar13,puVar12,(*(undefined4 *)(fr0_ - 0x60))));
          uVar39 = SUB84(dVar41,0);
          dVar42 = in_xd14;
          if (cVar45 == '\0') {
            dVar42 = CONCAT44D(uVar39,uVar32);
          }
          *(undefined4 *)(unsigned)pdVar7 = 0xe0000000;
          fVar28 = F32HI(dVar42);
          if (cVar44 == '\0') {
            dVar31 = CONCAT44D(uVar34,(float)(int)*psVar25 * fVar28);
          }
          else {
            dVar31 = CONCAT44D(uVar34,(float)(int)*psVar25) * dVar42;
          }
          if (cVar45 == '\0') {
            *(int *)(unsigned)(pdVar7 + 4) = SUB84(dVar31,0);
          }
          else {
            pdVar7[4] = in_xd2;
          }
          if (cVar44 == '\0') {
            fVar28 = (float)(int)psVar25[1] * fVar28;
          }
          else {
            fVar28 = SUB84(CONCAT44D((int)(D2U(dVar31) >> 0x20),(float)(int)psVar25[1])
                           * dVar42,0);
          }
          if (cVar45 == '\0') {
            *(float *)(unsigned)((int)pdVar7 + 0x24) = fVar28;
            dVar31 = CONCAT44D(*(undefined4 *)(unsigned)pdVar7,uVar37);
            dVar36 = CONCAT44D(*(undefined4 *)(unsigned)((int)pdVar7 + 4),fVar28);
            pdVar7 = pdVar7 + 1;
          }
          else {
            *(double *)(unsigned)((int)pdVar7 + 0x24) = in_xd2;
            dVar31 = *pdVar7;
            dVar36 = pdVar7[1];
            pdVar7 = pdVar7 + 2;
          }
          uVar37 = (undefined4)(D2U(dVar36) >> 0x20);
          if (cVar45 == '\0') {
            uVar34 = *(undefined4 *)(unsigned)(pdVar7 + 2);
            *(undefined4 *)(unsigned)((int)unaff_r8 + 0x1c) = *(undefined4 *)(unsigned)((int)pdVar7 + 0x14);
            *(undefined4 *)(unsigned)(unaff_r8 + 3) = uVar34;
            *(undefined4 *)(unsigned)((int)unaff_r8 + 0x14) = uVar37;
            unaff_r8 = unaff_r8 + 2;
            *(int *)(unsigned)unaff_r8 = (int)(D2U(dVar31) >> 0x20);
            dVar42 = CONCAT44D(uVar39,SUB84(dVar42,0));
          }
          else {
            dVar42 = pdVar7[2];
            unaff_r8[3] = pdVar7[3];
            unaff_r8[2] = dVar42;
            unaff_r8[1] = dVar36;
            *unaff_r8 = dVar31;
            dVar42 = in_xd14;
          }
          *(undefined4 *)(unsigned)pdVar20 = 0xe0000000;
          fVar28 = F32HI(dVar42);
          if (cVar44 == '\0') {
            dVar36 = CONCAT44D(uVar37,(float)(int)psVar25[2] * fVar28);
          }
          else {
            dVar36 = CONCAT44D(uVar37,(float)(int)psVar25[2]) * dVar42;
          }
          if (cVar45 == '\0') {
            *(int *)(unsigned)(pdVar20 + 4) = SUB84(dVar36,0);
          }
          else {
            pdVar20[4] = in_xd2;
          }
          if (cVar44 == '\0') {
            fVar28 = (float)(int)psVar25[3] * fVar28;
          }
          else {
            fVar28 = SUB84(CONCAT44D((int)(D2U(dVar36) >> 0x20),(float)(int)psVar25[3])
                           * dVar42,0);
          }
          if (cVar45 == '\0') {
            *(float *)(unsigned)((int)pdVar20 + 0x24) = fVar28;
            dVar31 = CONCAT44D(*(undefined4 *)(unsigned)pdVar20,SUB84(dVar31,0));
            dVar36 = CONCAT44D(*(undefined4 *)(unsigned)((int)pdVar20 + 4),fVar28);
            pdVar20 = pdVar20 + 1;
          }
          else {
            *(double *)(unsigned)((int)pdVar20 + 0x24) = in_xd2;
            dVar31 = *pdVar20;
            dVar36 = pdVar20[1];
            pdVar20 = pdVar20 + 2;
          }
          uVar37 = (undefined4)(D2U(dVar36) >> 0x20);
          if (cVar45 == '\0') {
            uVar34 = *(undefined4 *)(unsigned)(pdVar20 + 2);
            dVar42 = CONCAT44D(uVar34,SUB84(dVar42,0));
            *(undefined4 *)(unsigned)((int)unaff_r8 + 0x3c) = *(undefined4 *)(unsigned)((int)pdVar20 + 0x14);
            *(undefined4 *)(unsigned)(unaff_r8 + 7) = uVar34;
            *(undefined4 *)(unsigned)((int)unaff_r8 + 0x34) = uVar37;
            pdVar7 = unaff_r8 + 6;
            *(int *)(unsigned)pdVar7 = (int)(D2U(dVar31) >> 0x20);
          }
          else {
            dVar42 = pdVar20[2];
            unaff_r8[7] = pdVar20[3];
            unaff_r8[6] = dVar42;
            unaff_r8[5] = dVar36;
            pdVar7 = unaff_r8 + 4;
            *pdVar7 = dVar31;
          }
          dVar36 = in_xd14;
          if (cVar45 == '\0') {
            dVar36 = CONCAT44D(uVar39,SUB84(dVar42,0));
          }
          *(undefined4 *)(unsigned)pdVar21 = 0xe0000000;
          *(undefined4 *)(unsigned)(pdVar21 + 5) = (*(undefined4 *)(fr0_ - 0x4c));
          *(undefined4 *)(unsigned)((int)pdVar21 + 0x2c) = (*(undefined4 *)(fr0_ - 0x48));
          fVar28 = F32HI(dVar36);
          if (cVar44 == '\0') {
            dVar42 = CONCAT44D(uVar37,(float)(int)psVar25[4] * fVar28);
          }
          else {
            dVar42 = CONCAT44D(uVar37,(float)(int)psVar25[4]) * dVar36;
          }
          if (cVar45 == '\0') {
            *(int *)(unsigned)(pdVar21 + 4) = SUB84(dVar42,0);
          }
          else {
            pdVar21[4] = in_xd2;
          }
          if (cVar44 == '\0') {
            fVar28 = (float)(int)psVar25[5] * fVar28;
          }
          else {
            fVar28 = SUB84(CONCAT44D((int)(D2U(dVar42) >> 0x20),(float)(int)psVar25[5])
                           * dVar36,0);
          }
          if (cVar45 == '\0') {
            *(float *)(unsigned)((int)pdVar21 + 0x24) = fVar28;
            dVar42 = CONCAT44D(*(undefined4 *)(unsigned)pdVar21,SUB84(dVar31,0));
            dVar31 = CONCAT44D(*(undefined4 *)(unsigned)((int)pdVar21 + 4),fVar28);
            pdVar21 = pdVar21 + 1;
          }
          else {
            *(double *)(unsigned)((int)pdVar21 + 0x24) = in_xd2;
            dVar42 = *pdVar21;
            dVar31 = pdVar21[1];
            pdVar21 = pdVar21 + 2;
          }
          uVar37 = (undefined4)(D2U(dVar31) >> 0x20);
          if (cVar45 == '\0') {
            uVar34 = *(undefined4 *)(unsigned)(pdVar21 + 2);
            *(undefined4 *)(unsigned)((int)pdVar7 + 0x3c) = *(undefined4 *)(unsigned)((int)pdVar21 + 0x14);
            *(undefined4 *)(unsigned)(pdVar7 + 7) = uVar34;
            *(undefined4 *)(unsigned)((int)pdVar7 + 0x34) = uVar37;
            pdVar7 = pdVar7 + 6;
            *(int *)(unsigned)pdVar7 = (int)(D2U(dVar42) >> 0x20);
            dVar31 = CONCAT44D(uVar39,SUB84(dVar36,0));
          }
          else {
            dVar36 = pdVar21[2];
            pdVar7[7] = pdVar21[3];
            pdVar7[6] = dVar36;
            pdVar7[5] = dVar31;
            pdVar7 = pdVar7 + 4;
            *pdVar7 = dVar42;
            dVar31 = in_xd14;
          }
          *(undefined4 *)(unsigned)pdVar4 = 0xf0000000;
          *(undefined4 *)(unsigned)(pdVar4 + 5) = (*(undefined4 *)(fr0_ - 0x4c));
          *(undefined4 *)(unsigned)((int)pdVar4 + 0x2c) = (*(undefined4 *)(fr0_ - 0x48));
          fVar28 = F32HI(dVar31);
          if (cVar44 == '\0') {
            dVar36 = CONCAT44D(uVar37,(float)(int)psVar25[6] * fVar28);
          }
          else {
            dVar36 = CONCAT44D(uVar37,(float)(int)psVar25[6]) * dVar31;
          }
          if (cVar45 == '\0') {
            *(int *)(unsigned)(pdVar4 + 4) = SUB84(dVar36,0);
          }
          else {
            pdVar4[4] = in_xd2;
          }
          if (cVar44 == '\0') {
            fVar28 = (float)(int)psVar25[7] * fVar28;
          }
          else {
            fVar28 = SUB84(CONCAT44D((int)(D2U(dVar36) >> 0x20),(float)(int)psVar25[7])
                           * dVar31,0);
          }
          if (cVar45 == '\0') {
            *(float *)(unsigned)((int)pdVar4 + 0x24) = fVar28;
            in_dr0 = CONCAT44D(*(undefined4 *)(unsigned)pdVar4,SUB84(dVar42,0));
            in_dr2 = CONCAT44D(*(undefined4 *)(unsigned)((int)pdVar4 + 4),fVar28);
            pdVar4 = pdVar4 + 1;
          }
          else {
            *(double *)(unsigned)((int)pdVar4 + 0x24) = in_xd2;
            in_dr0 = *pdVar4;
            in_dr2 = pdVar4[1];
            pdVar4 = pdVar4 + 2;
          }
          if (cVar45 == '\0') {
            uVar37 = *(undefined4 *)(unsigned)(pdVar4 + 2);
            in_dr4 = CONCAT44D(uVar37,SUB84(dVar31,0));
            *(undefined4 *)(unsigned)((int)pdVar7 + 0x3c) = *(undefined4 *)(unsigned)((int)pdVar4 + 0x14);
            *(undefined4 *)(unsigned)(pdVar7 + 7) = uVar37;
            *(int *)(unsigned)((int)pdVar7 + 0x34) = (int)((ulonglong)in_dr2 >> 0x20);
            pdVar7 = pdVar7 + 6;
            *(int *)(unsigned)pdVar7 = (int)((ulonglong)in_dr0 >> 0x20);
          }
          else {
            in_dr4 = pdVar4[2];
            pdVar7[7] = pdVar4[3];
            pdVar7[6] = in_dr4;
            pdVar7[5] = in_dr2;
            pdVar7 = pdVar7 + 4;
            *pdVar7 = in_dr0;
          }
          unaff_r8 = pdVar7 + 4;
          (*(undefined4 *)(unsigned)(unsigned)0x8c4aa520) = (*(undefined4 *)(unsigned)(unsigned)0x8c4aa520) + 4;
        }
        else {
          if (cVar45 == '\0') {
            uVar37 = *(undefined4 *)(unsigned)(pdVar20 + 3);
            uVar34 = *(undefined4 *)(unsigned)((int)pdVar20 + 0x14);
            in_dr8 = CONCAT44D((int)((ulonglong)in_dr8 >> 0x20),
                                      *(undefined4 *)(unsigned)((int)pdVar7 + 0x14));
            in_dr4 = CONCAT44D((int)((ulonglong)in_dr4 >> 0x20),*(undefined4 *)(unsigned)(pdVar7 + 3));
            in_dr2 = CONCAT44D((int)((ulonglong)in_dr2 >> 0x20),uVar34);
            dVar36 = CONCAT44D(uVar37,SUB84(in_dr0,0));
            dVar42 = in_xd2;
            dVar31 = *(double *)(unsigned)((int)pdVar20 + 0x14);
          }
          else {
            dVar36 = pdVar20[3];
            dVar42 = *(double *)(unsigned)((int)pdVar20 + 0x14);
            uVar34 = SUB84(dVar36,0);
            uVar37 = (undefined4)(D2U(dVar36) >> 0x20);
            dVar31 = dVar36;
            in_xd6 = dVar42;
          }
          if (cVar44 == '\0') {
            fVar28 = F32LO(in_dr2) * F32LO(in_dr4);
            dVar36 = CONCAT44D(F32HI(dVar36) * F32LO(in_dr8),
                                      SUB84(dVar36,0));
          }
          else {
            fVar28 = SUB84(in_dr2 * in_dr4,0);
            dVar36 = dVar36 * in_dr8;
          }
          if (cVar45 == '\0') {
            dVar33 = CONCAT44D(*(undefined4 *)(unsigned)(pdVar20 + 2),SUB84(in_dr4,0));
            in_dr8 = CONCAT44D(*(undefined4 *)(unsigned)(pdVar7 + 2),SUB84(in_dr8,0));
            dVar31 = CONCAT44D(uVar37,fVar28);
          }
          else {
            dVar33 = pdVar20[2];
            in_dr8 = pdVar7[2];
          }
          fVar28 = F32HI(in_dr8);
          if (cVar44 == '\0') {
            dVar31 = CONCAT44D(F32HI(dVar31) * fVar28,SUB84(dVar31,0));
          }
          else {
            dVar31 = dVar31 * in_dr8;
          }
          uVar37 = (undefined4)(D2U(dVar33) >> 0x20);
          dVar35 = dVar33;
          if (cVar45 == '\0') {
            dVar35 = CONCAT44D(uVar37,SUB84(in_dr12,0));
          }
          if (cVar44 == '\0') {
            dVar36 = CONCAT44D(F32HI(dVar36) - F32LO(dVar31),
                                      SUB84(dVar36,0));
          }
          else {
            dVar36 = dVar36 - dVar31;
          }
          in_xd2 = dVar33;
          if (cVar45 == '\0') {
            dVar31 = CONCAT44D((int)(D2U(dVar31) >> 0x20),uVar37);
            in_xd2 = dVar42;
          }
          if (cVar44 == '\0') {
            dVar31 = CONCAT44D((int)(D2U(dVar31) >> 0x20),
                                      F32LO(dVar31) * F32LO(dVar33));
          }
          else {
            dVar31 = dVar31 * dVar33;
          }
          dVar42 = in_xd6;
          if (cVar45 == '\0') {
            dVar36 = CONCAT44D((int)(D2U(dVar36) >> 0x20),uVar34);
            dVar42 = in_xd0;
          }
          in_xd0 = dVar42;
          if (cVar44 == '\0') {
            dVar36 = CONCAT44D((int)(D2U(dVar36) >> 0x20),F32LO(dVar36) * fVar28);
            in_dr12 = CONCAT44D(F32HI(dVar35) * F32LO(in_dr8),
                                       SUB84(dVar35,0));
            fVar28 = F32LO(dVar31) - F32HI(dVar31);
          }
          else {
            dVar36 = dVar36 * in_dr8;
            in_dr12 = dVar35 * in_dr8;
            fVar28 = SUB84(dVar31 - dVar31,0);
          }
          if (cVar45 == '\0') {
            dVar42 = CONCAT44D(*(undefined4 *)(unsigned)((int)pdVar21 + 0x14),fVar28);
          }
          else {
            dVar42 = *(double *)(unsigned)((int)pdVar21 + 0x14);
          }
          if (cVar44 == '\0') {
            dVar36 = CONCAT44D((int)(D2U(dVar36) >> 0x20),
                                      F32LO(dVar36) - F32HI(in_dr12));
            dVar42 = CONCAT44D(F32HI(dVar42) * F32LO(dVar42),
                                      SUB84(dVar42,0));
          }
          else {
            dVar36 = dVar36 - in_dr12;
            dVar42 = dVar42 * dVar42;
          }
          if (cVar45 == '\0') {
            dVar42 = CONCAT44D((int)(D2U(dVar42) >> 0x20),*(undefined4 *)(unsigned)(pdVar21 + 2))
            ;
          }
          else {
            in_xd2 = pdVar21[2];
          }
          if (cVar44 == '\0') {
            dVar42 = CONCAT44D(F32HI(dVar36) * F32LO(dVar42) +
                                      F32HI(dVar42),SUB84(dVar42,0));
          }
          if (cVar45 == '\0') {
            dVar42 = CONCAT44D((int)(D2U(dVar42) >> 0x20),*(undefined4 *)(unsigned)(pdVar21 + 3))
            ;
            in_dr0 = CONCAT44D(SUB84(dVar36,0),SUB84(dVar36,0));
          }
          else {
            in_xd2 = pdVar21[3];
            in_dr0 = in_xd0;
          }
          if (cVar44 == '\0') {
            dVar42 = (double)((ulonglong)
                              (uint)(F32HI(in_dr0) * F32LO(dVar42) +
                                    F32HI(dVar42)) << 0x20);
          }
          in_dr2 = (double)(D2U(dVar42) & 0xffffffff00000000);
          in_dr4 = in_dr2;
          if (cVar45 == '\0') {
            in_dr4 = CONCAT44D((int)(D2U(dVar42) >> 0x20),SUB84(dVar33,0));
          }
          if (cVar44 == '\0') {
            bVar43 = 0.0 < F32HI(in_dr4);
          }
          else {
            bVar43 = in_dr2 < in_dr4;
          }
          (*(undefined4 *)(fr0_ - 0x60)) = 0;
          if (bVar43) {
            if (((*(undefined4 *)(unsigned)(unsigned)0x8c4ab308) & 0x800000) == 0) goto LAB_8c24e86e;
            (*(undefined4 *)(fr0_ - 0x60)) = 0x8000;
          }
          pdVar14 = pdVar20 + 2;
          puVar10 = ((undefined1 *)(fr0_ - 0x44));
          pdVar16 = pdVar21 + 2;
          (vsp = ((unsigned long)(fr0_ - 116)), FUN_8c2361a8(pdVar7 + 2,pdVar14,pdVar16,puVar10));
          ({ unsigned long ri0_ = (unsigned long)(pdVar7); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 116)); FUN_8c25ce48(((undefined1 *)(fr0_ - 0x44)),pdVar14,pdVar16,puVar10); });
          if (cVar45 == '\0') {
            dVar42 = CONCAT44D(*(undefined4 *)(unsigned)(pdVar20 + 2),*(undefined4 *)(unsigned)(pdVar21 + 2));
          }
          else {
            dVar42 = pdVar20[2];
            in_xd2 = pdVar21[2];
          }
          puVar10 = ((undefined1 *)(unsigned)0x8c4c2620);
          puVar12 = ((undefined1 *)(fr0_ - 0x44));
          fVar28 = F32HI(dVar41);
          if (cVar44 == '\0') {
            dVar42 = CONCAT44D((F32HI(dVar42) + F32LO(dVar42)) *
                                      fVar28,SUB84(dVar42,0));
          }
          else {
            dVar42 = (dVar42 + dVar42) * dVar41;
          }
          if (cVar45 == '\0') {
            (*(undefined4 *)(fr0_ - 0x38)) = (undefined4)(D2U(dVar42) >> 0x20);
            dVar42 = CONCAT44D(*(undefined4 *)(unsigned)((int)pdVar20 + 0x14),
                                      *(undefined4 *)(unsigned)((int)pdVar21 + 0x14));
          }
          else {
            (*(undefined4 *)(fr0_ - 0x38)) = SUB84(dVar42,0);
            dVar42 = *(double *)(unsigned)((int)pdVar20 + 0x14);
            in_xd2 = *(double *)(unsigned)((int)pdVar21 + 0x14);
          }
          if (cVar44 == '\0') {
            dVar42 = CONCAT44D((F32HI(dVar42) + F32LO(dVar42)) *
                                      fVar28,SUB84(dVar42,0));
          }
          else {
            dVar42 = (dVar42 + dVar42) * dVar41;
          }
          if (cVar45 == '\0') {
            (*(undefined4 *)(fr0_ - 0x34)) = (undefined4)(D2U(dVar42) >> 0x20);
            dVar42 = CONCAT44D(*(undefined4 *)(unsigned)(pdVar20 + 3),*(undefined4 *)(unsigned)(pdVar21 + 3));
          }
          else {
            (*(undefined4 *)(fr0_ - 0x34)) = SUB84(dVar42,0);
            dVar42 = pdVar20[3];
            in_xd2 = pdVar21[3];
          }
          if (cVar44 == '\0') {
            dVar42 = CONCAT44D((F32HI(dVar42) + F32LO(dVar42)) *
                                      fVar28,SUB84(dVar42,0));
          }
          else {
            dVar42 = (dVar42 + dVar42) * dVar41;
          }
          uVar37 = (undefined4)(D2U(dVar42) >> 0x20);
          (*(undefined4 *)(fr0_ - 0x30)) = uVar37;
          if (cVar45 != '\0') {
            (*(undefined4 *)(fr0_ - 0x30)) = SUB84(dVar42,0);
            (*(undefined4 *)(fr0_ - 0x2c)) = uVar37;
          }
          puVar13 = &(*(undefined4 *)(fr0_ - 0x38));
          (vsp = ((unsigned long)(fr0_ - 116)), FUN_8c23bae2(((undefined1 *)(unsigned)0x8c4c2620),puVar13,puVar12,(*(undefined4 *)(fr0_ - 0x60))));
          uVar37 = (undefined4)(D2U(dVar42) >> 0x20);
          if (cVar45 != '\0') {
            in_xd6 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4c2630),(*(undefined4 *)(unsigned)(unsigned)0x8c4c262c));
          }
          (*(undefined4 *)(fr0_ - 0x4c)) = (vsp = ((unsigned long)(fr0_ - 116)), float_to_color_u8(puVar10,puVar13,puVar12,(*(undefined4 *)(fr0_ - 0x60))));
          uVar34 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c2634);
          if (cVar45 != '\0') {
            in_xd6 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4c2640),(*(undefined4 *)(unsigned)(unsigned)0x8c4c263c));
            uVar34 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c2630);
          }
          (*(undefined4 *)(fr0_ - 0x48)) = (vsp = ((unsigned long)(fr0_ - 116)), float_to_color_u8(puVar10,puVar13,puVar12,(*(undefined4 *)(fr0_ - 0x60))));
          in_dr4 = in_xd14;
          if (cVar45 == '\0') {
            in_dr4 = CONCAT44D(SUB84(dVar41,0),uVar34);
          }
          fVar28 = F32HI(in_dr4);
          if (cVar44 == '\0') {
            dVar42 = CONCAT44D(uVar37,(float)(int)*psVar25 * fVar28);
          }
          else {
            dVar42 = CONCAT44D(uVar37,(float)(int)*psVar25) * in_dr4;
          }
          if (cVar45 == '\0') {
            *(int *)(unsigned)(pdVar7 + 4) = SUB84(dVar42,0);
          }
          else {
            pdVar7[4] = in_xd2;
          }
          uVar37 = (undefined4)(D2U(dVar42) >> 0x20);
          if (cVar44 == '\0') {
            dVar42 = CONCAT44D(uVar37,(float)(int)psVar25[1] * fVar28);
          }
          else {
            dVar42 = CONCAT44D(uVar37,(float)(int)psVar25[1]) * in_dr4;
          }
          if (cVar45 == '\0') {
            *(int *)(unsigned)((int)pdVar7 + 0x24) = SUB84(dVar42,0);
          }
          else {
            *(double *)(unsigned)((int)pdVar7 + 0x24) = in_xd2;
          }
          uVar37 = (undefined4)(D2U(dVar42) >> 0x20);
          if (cVar44 == '\0') {
            dVar42 = CONCAT44D(uVar37,(float)(int)psVar25[2] * fVar28);
          }
          else {
            dVar42 = CONCAT44D(uVar37,(float)(int)psVar25[2]) * in_dr4;
          }
          if (cVar45 == '\0') {
            *(int *)(unsigned)(pdVar20 + 4) = SUB84(dVar42,0);
          }
          else {
            pdVar20[4] = in_xd2;
          }
          uVar37 = (undefined4)(D2U(dVar42) >> 0x20);
          if (cVar44 == '\0') {
            dVar42 = CONCAT44D(uVar37,(float)(int)psVar25[3] * fVar28);
          }
          else {
            dVar42 = CONCAT44D(uVar37,(float)(int)psVar25[3]) * in_dr4;
          }
          if (cVar45 == '\0') {
            *(int *)(unsigned)((int)pdVar20 + 0x24) = SUB84(dVar42,0);
          }
          else {
            *(double *)(unsigned)((int)pdVar20 + 0x24) = in_xd2;
          }
          uVar37 = (undefined4)(D2U(dVar42) >> 0x20);
          if (cVar44 == '\0') {
            dVar42 = CONCAT44D(uVar37,(float)(int)psVar25[4] * fVar28);
          }
          else {
            dVar42 = CONCAT44D(uVar37,(float)(int)psVar25[4]) * in_dr4;
          }
          if (cVar45 == '\0') {
            *(int *)(unsigned)(pdVar21 + 4) = SUB84(dVar42,0);
          }
          else {
            pdVar21[4] = in_xd2;
          }
          uVar37 = (undefined4)(D2U(dVar42) >> 0x20);
          if (cVar44 == '\0') {
            dVar42 = CONCAT44D(uVar37,(float)(int)psVar25[5] * fVar28);
          }
          else {
            dVar42 = CONCAT44D(uVar37,(float)(int)psVar25[5]) * in_dr4;
          }
          if (cVar45 == '\0') {
            *(int *)(unsigned)((int)pdVar21 + 0x24) = SUB84(dVar42,0);
          }
          else {
            *(double *)(unsigned)((int)pdVar21 + 0x24) = in_xd2;
          }
          uVar37 = (undefined4)(D2U(dVar42) >> 0x20);
          if (cVar44 == '\0') {
            dVar42 = CONCAT44D(uVar37,(float)(int)psVar25[6] * fVar28);
          }
          else {
            dVar42 = CONCAT44D(uVar37,(float)(int)psVar25[6]) * in_dr4;
          }
          if (cVar45 == '\0') {
            *(int *)(unsigned)(pdVar4 + 4) = SUB84(dVar42,0);
          }
          else {
            pdVar4[4] = in_xd2;
          }
          uVar37 = (undefined4)(D2U(dVar42) >> 0x20);
          if (cVar44 == '\0') {
            in_dr2 = CONCAT44D(uVar37,(float)(int)psVar25[7] * fVar28);
          }
          else {
            in_dr2 = CONCAT44D(uVar37,(float)(int)psVar25[7]) * in_dr4;
          }
          if (cVar45 == '\0') {
            *(int *)(unsigned)((int)pdVar4 + 0x24) = SUB84(in_dr2,0);
          }
          else {
            *(double *)(unsigned)((int)pdVar4 + 0x24) = in_xd2;
          }
          if ((*(uint *)(unsigned)pdVar7 & *(uint *)(unsigned)pdVar20 & *(uint *)(unsigned)pdVar21 & 1) == 0) {
            (vsp = ((unsigned long)(fr0_ - 116)), FUN_8c247898(pdVar7,pdVar20,pdVar21,&(*(undefined4 *)(fr0_ - 0x4c))));
          }
          if ((*(uint *)(unsigned)pdVar20 & *(uint *)(unsigned)pdVar21 & *(uint *)(unsigned)pdVar4 & 1) == 0) {
            (vsp = ((unsigned long)(fr0_ - 116)), FUN_8c247898(pdVar20,pdVar21,pdVar4,&(*(undefined4 *)(fr0_ - 0x4c))));
          }
        }
      }
LAB_8c24e86e:
      psVar25 = psVar25 + 8;
    }
  }
  else if (uVar2 == 0x8000) {
    (*(int *)(fr0_ - 0x5c)) = 0;
    puVar10 = ((undefined1 *)(unsigned)0x8c4c2620);
    while( true ) {
      uVar37 = SUB84(in_dr4,0);
      uVar2 = (uint)ar4[1];
      if ((int)uVar2 <= (*(int *)(fr0_ - 0x5c))) break;
      iVar15 = 0;
      puVar24 = puVar23 + 1;
      uVar2 = 0;
      uVar19 = 0xffffffff;
      uVar22 = (uint)*puVar23;
      (*(undefined4 *)(unsigned)(unsigned)0x8c4aa51c) = (*(undefined4 *)(unsigned)(unsigned)0x8c4aa51c) + uVar22;
      puVar11 = puVar24;
      if (uVar22 != 0) {
        do {
          uVar1 = *puVar11;
          puVar11 = puVar11 + 1;
          iVar15 = iVar15 + 1;
          uVar8 = *(uint *)(unsigned)((uint)uVar1 * 0x40 + (*(undefined4 *)(unsigned)(unsigned)0x8c4aa510));
          uVar19 = uVar19 & uVar8;
          uVar2 = uVar2 | uVar8;
        } while (iVar15 < (int)uVar22);
      }
      if ((uVar19 & 0x3f) == 0) {
        iVar15 = (int)uVar22 >> 1;
        if ((uVar2 & 1) == 0) {
          iVar3 = (uint)*puVar24 * 0x40 + (*(undefined4 *)(unsigned)(unsigned)0x8c4aa510);
          iVar9 = (uint)puVar23[2] * 0x40 + (*(undefined4 *)(unsigned)(unsigned)0x8c4aa510);
          iVar5 = (uint)puVar23[3] * 0x40 + (*(undefined4 *)(unsigned)(unsigned)0x8c4aa510);
          if (cVar45 == '\0') {
            uVar37 = *(undefined4 *)(unsigned)(iVar9 + 4);
            dVar42 = CONCAT44D(uVar37,*(undefined4 *)(unsigned)(iVar3 + 4));
          }
          else {
            dVar42 = *(double *)(unsigned)(iVar9 + 4);
            in_xd2 = *(double *)(unsigned)(iVar3 + 4);
            in_xd4 = dVar42;
          }
          if (cVar44 == '\0') {
            dVar42 = CONCAT44D(F32HI(dVar42) - F32LO(dVar42),
                                      SUB84(dVar42,0));
          }
          else {
            dVar42 = dVar42 - dVar42;
          }
          if (cVar45 == '\0') {
            dVar31 = CONCAT44D(*(undefined4 *)(unsigned)(iVar9 + 8),uVar37);
            dVar42 = CONCAT44D((int)(D2U(dVar42) >> 0x20),*(undefined4 *)(unsigned)(iVar5 + 8));
          }
          else {
            dVar31 = *(double *)(unsigned)(iVar9 + 8);
            in_xd2 = *(double *)(unsigned)(iVar5 + 8);
          }
          fVar28 = F32HI(dVar31);
          if (cVar44 == '\0') {
            dVar42 = CONCAT44D((int)(D2U(dVar42) >> 0x20),F32LO(dVar42) - fVar28);
          }
          else {
            dVar42 = dVar42 - dVar31;
          }
          dVar36 = dVar31;
          if (cVar45 == '\0') {
            in_dr0 = CONCAT44D((int)((ulonglong)in_dr0 >> 0x20),fVar28);
            dVar36 = in_xd0;
          }
          in_xd0 = dVar36;
          if (cVar44 == '\0') {
            dVar42 = CONCAT44D(F32HI(dVar42) * F32LO(dVar42),
                                      SUB84(dVar42,0));
          }
          else {
            dVar42 = dVar42 * dVar42;
          }
          if (cVar45 == '\0') {
            dVar42 = CONCAT44D((int)(D2U(dVar42) >> 0x20),*(undefined4 *)(unsigned)(iVar3 + 8));
          }
          else {
            in_xd2 = *(double *)(unsigned)(iVar3 + 8);
          }
          if (cVar44 == '\0') {
            dVar36 = CONCAT44D((int)((ulonglong)in_dr0 >> 0x20),
                                      F32LO(in_dr0) - F32LO(dVar42));
          }
          else {
            dVar36 = in_dr0 - dVar42;
          }
          uVar37 = (undefined4)(D2U(dVar42) >> 0x20);
          if (cVar45 == '\0') {
            dVar42 = CONCAT44D(uVar37,SUB84(dVar31,0));
            dVar31 = CONCAT44D(uVar37,*(undefined4 *)(unsigned)(iVar5 + 4));
          }
          else {
            in_xd2 = *(double *)(unsigned)(iVar5 + 4);
            dVar31 = dVar42;
          }
          if (cVar44 == '\0') {
            fVar28 = F32LO(dVar31) - F32LO(dVar42);
            dVar31 = CONCAT44D(uVar37,fVar28);
            in_dr0 = CONCAT44D((int)(D2U(dVar36) >> 0x20),F32LO(dVar36) * fVar28);
          }
          else {
            dVar31 = dVar31 - dVar42;
            in_dr0 = dVar36 * dVar31;
          }
          in_dr2 = (double)(D2U(dVar31) & 0xffffffff00000000);
          if (cVar44 == '\0') {
            fVar28 = F32HI(dVar42) - F32LO(in_dr0);
            in_dr4 = CONCAT44D(fVar28,SUB84(dVar42,0));
            bVar43 = 0.0 < fVar28;
          }
          else {
            in_dr4 = dVar42 - in_dr0;
            bVar43 = in_dr2 < in_dr4;
          }
          (*(undefined4 *)(fr0_ - 0x54)) = 0;
          if (bVar43) {
            if (((*(undefined4 *)(unsigned)(unsigned)0x8c4ab308) & 0x800000) == 0) goto LAB_8c24ecf6;
            (*(undefined4 *)(fr0_ - 0x54)) = 0x8000;
          }
          puVar12 = ((undefined1 *)(fr0_ - 0x44));
          (*(undefined4 *)(unsigned)(unsigned)0x8c4aa520) = (*(undefined4 *)(unsigned)(unsigned)0x8c4aa520) + uVar22;
          iVar5 = iVar5 + 0x10;
          iVar9 = iVar9 + 0x10;
          (vsp = ((unsigned long)(fr0_ - 116)), FUN_8c2361a8(iVar3 + 0x10,iVar9,iVar5,puVar12));
          uVar37 = SUB84(in_dr0,0);
          ({ unsigned long ri0_ = (unsigned long)(puVar10); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 116)); FUN_8c25ce48(((undefined1 *)(fr0_ - 0x44)),iVar9,iVar5,puVar12); });
          iVar3 = (uint)puVar24[iVar15 + -1] * 0x40 + (*(undefined4 *)(unsigned)(unsigned)0x8c4aa510);
          if (cVar45 == '\0') {
            (*(undefined4 *)(fr0_ - 0x38)) = *(undefined4 *)(unsigned)(iVar3 + 0x10);
            (*(undefined4 *)(fr0_ - 0x34)) = *(undefined4 *)(unsigned)(iVar3 + 0x14);
            (*(undefined4 *)(fr0_ - 0x30)) = *(undefined4 *)(unsigned)(iVar3 + 0x18);
          }
          else {
            (*(undefined4 *)(fr0_ - 0x38)) = (undefined4)*(undefined8 *)(unsigned)(iVar3 + 0x10);
            (*(undefined4 *)(fr0_ - 0x34)) = (undefined4)*(undefined8 *)(unsigned)(iVar3 + 0x14);
            in_xd2 = *(double *)(unsigned)(iVar3 + 0x18);
            (*(undefined4 *)(fr0_ - 0x30)) = SUB84(in_xd2,0);
            (*(undefined4 *)(fr0_ - 0x2c)) = (undefined4)((ulonglong)in_xd2 >> 0x20);
          }
          iVar15 = (uint)puVar24[iVar15] * 0x40 + (*(undefined4 *)(unsigned)(unsigned)0x8c4aa510);
          if (cVar45 == '\0') {
            dVar42 = CONCAT44D((*(undefined4 *)(fr0_ - 0x38)),*(undefined4 *)(unsigned)(iVar15 + 0x10));
          }
          else {
            in_xd2 = *(double *)(unsigned)(iVar15 + 0x10);
            dVar42 = CONCAT44D((*(undefined4 *)(fr0_ - 0x34)),(*(undefined4 *)(fr0_ - 0x38)));
          }
          if (cVar44 == '\0') {
            dVar42 = CONCAT44D(F32HI(dVar42) + F32LO(dVar42),
                                      SUB84(dVar42,0));
          }
          else {
            dVar42 = dVar42 + dVar42;
          }
          uVar34 = (undefined4)(D2U(dVar42) >> 0x20);
          if (cVar45 == '\0') {
            dVar42 = CONCAT44D((*(undefined4 *)(fr0_ - 0x34)),*(undefined4 *)(unsigned)(iVar15 + 0x14));
            (*(undefined4 *)(fr0_ - 0x38)) = uVar34;
          }
          else {
            (*(undefined4 *)(fr0_ - 0x38)) = SUB84(dVar42,0);
            in_xd2 = *(double *)(unsigned)(iVar15 + 0x14);
            dVar42 = CONCAT44D((*(undefined4 *)(fr0_ - 0x30)),uVar34);
          }
          if (cVar44 == '\0') {
            dVar42 = CONCAT44D(F32HI(dVar42) + F32LO(dVar42),
                                      SUB84(dVar42,0));
          }
          else {
            dVar42 = dVar42 + dVar42;
          }
          uVar34 = (undefined4)(D2U(dVar42) >> 0x20);
          if (cVar45 == '\0') {
            dVar42 = CONCAT44D((*(undefined4 *)(fr0_ - 0x30)),*(undefined4 *)(unsigned)(iVar15 + 0x18));
            (*(undefined4 *)(fr0_ - 0x34)) = uVar34;
          }
          else {
            (*(undefined4 *)(fr0_ - 0x34)) = SUB84(dVar42,0);
            in_xd2 = *(double *)(unsigned)(iVar15 + 0x18);
            dVar42 = CONCAT44D((*(undefined4 *)(fr0_ - 0x2c)),uVar34);
          }
          if (cVar44 == '\0') {
            dVar42 = CONCAT44D(F32HI(dVar42) + F32LO(dVar42),
                                      SUB84(dVar42,0));
          }
          else {
            dVar42 = dVar42 + dVar42;
          }
          uVar34 = (undefined4)(D2U(dVar42) >> 0x20);
          if (cVar45 == '\0') {
            dVar42 = CONCAT44D(uVar34,(*(undefined4 *)(fr0_ - 0x38)));
            (*(undefined4 *)(fr0_ - 0x30)) = uVar34;
          }
          else {
            (*(undefined4 *)(fr0_ - 0x30)) = SUB84(dVar42,0);
            in_xd2 = CONCAT44D((*(undefined4 *)(fr0_ - 0x34)),(*(undefined4 *)(fr0_ - 0x38)));
            (*(undefined4 *)(fr0_ - 0x2c)) = uVar34;
          }
          fVar28 = F32HI(dVar41);
          if (cVar44 == '\0') {
            dVar42 = CONCAT44D((int)(D2U(dVar42) >> 0x20),F32LO(dVar42) * fVar28);
          }
          else {
            dVar42 = dVar42 * dVar41;
          }
          if (cVar45 == '\0') {
            (*(undefined4 *)(fr0_ - 0x38)) = SUB84(dVar42,0);
            dVar42 = CONCAT44D((int)(D2U(dVar42) >> 0x20),(*(undefined4 *)(fr0_ - 0x34)));
          }
          else {
            (*(undefined4 *)(fr0_ - 0x38)) = SUB84(in_xd2,0);
            (*(undefined4 *)(fr0_ - 0x34)) = (undefined4)((ulonglong)in_xd2 >> 0x20);
            in_xd2 = CONCAT44D((*(undefined4 *)(fr0_ - 0x30)),(*(undefined4 *)(fr0_ - 0x34)));
          }
          if (cVar44 == '\0') {
            dVar42 = CONCAT44D((int)(D2U(dVar42) >> 0x20),F32LO(dVar42) * fVar28);
          }
          else {
            dVar42 = dVar42 * dVar41;
          }
          if (cVar45 == '\0') {
            (*(undefined4 *)(fr0_ - 0x34)) = SUB84(dVar42,0);
            dVar42 = CONCAT44D((int)(D2U(dVar42) >> 0x20),(*(undefined4 *)(fr0_ - 0x30)));
          }
          else {
            (*(undefined4 *)(fr0_ - 0x34)) = SUB84(in_xd2,0);
            (*(undefined4 *)(fr0_ - 0x30)) = (undefined4)((ulonglong)in_xd2 >> 0x20);
            in_xd2 = CONCAT44D((*(undefined4 *)(fr0_ - 0x2c)),(*(undefined4 *)(fr0_ - 0x30)));
          }
          if (cVar44 == '\0') {
            dVar42 = CONCAT44D((int)(D2U(dVar42) >> 0x20),F32LO(dVar42) * fVar28);
          }
          else {
            dVar42 = dVar42 * dVar41;
          }
          puVar12 = ((undefined1 *)(unsigned)0x8c4c2620);
          puVar17 = ((undefined1 *)(fr0_ - 0x44));
          if (cVar45 == '\0') {
            (*(undefined4 *)(fr0_ - 0x30)) = SUB84(dVar42,0);
          }
          else {
            (*(undefined4 *)(fr0_ - 0x30)) = SUB84(in_xd2,0);
            (*(undefined4 *)(fr0_ - 0x2c)) = (undefined4)((ulonglong)in_xd2 >> 0x20);
          }
          puVar13 = &(*(undefined4 *)(fr0_ - 0x38));
          (vsp = ((unsigned long)(fr0_ - 116)), FUN_8c23bae2(((undefined1 *)(unsigned)0x8c4c2620),puVar13,puVar17,(*(undefined4 *)(fr0_ - 0x54))));
          uVar34 = (undefined4)(D2U(dVar42) >> 0x20);
          if (cVar45 != '\0') {
            in_xd4 = *(double *)(unsigned)(puVar10 + 4);
          }
          (*(undefined4 *)(fr0_ - 0x4c)) = (vsp = ((unsigned long)(fr0_ - 116)), float_to_color_u8(puVar12,puVar13,puVar17,(*(undefined4 *)(fr0_ - 0x54))));
          uVar39 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c2634);
          uVar32 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c263c);
          if (cVar45 != '\0') {
            in_xd4 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4c2638),(*(undefined4 *)(unsigned)(unsigned)0x8c4c2634));
            uVar39 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c2630);
            uVar32 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c2638);
          }
          (*(undefined4 *)(fr0_ - 0x48)) = (vsp = ((unsigned long)(fr0_ - 116)), float_to_color_u8(puVar12,puVar13,puVar17,(*(undefined4 *)(fr0_ - 0x54))));
          uVar40 = SUB84(dVar41,0);
          dVar42 = in_xd14;
          if (cVar45 == '\0') {
            dVar42 = CONCAT44D(uVar40,uVar39);
          }
          pdVar4 = (double *)(unsigned)((uint)*puVar24 * 0x40 + (*(undefined4 *)(unsigned)(unsigned)0x8c4aa510));
          *(undefined4 *)(unsigned)pdVar4 = 0xe0000000;
          fVar28 = F32HI(dVar42);
          if (cVar44 == '\0') {
            dVar31 = CONCAT44D(uVar34,(float)(int)*psVar25 * fVar28);
          }
          else {
            dVar31 = CONCAT44D(uVar34,(float)(int)*psVar25) * dVar42;
          }
          if (cVar45 == '\0') {
            *(int *)(unsigned)(pdVar4 + 4) = SUB84(dVar31,0);
          }
          else {
            pdVar4[4] = in_xd2;
          }
          if (cVar44 == '\0') {
            fVar28 = (float)(int)psVar25[1] * fVar28;
          }
          else {
            fVar28 = SUB84(CONCAT44D((int)(D2U(dVar31) >> 0x20),(float)(int)psVar25[1])
                           * dVar42,0);
          }
          if (cVar45 == '\0') {
            *(float *)(unsigned)((int)pdVar4 + 0x24) = fVar28;
            dVar31 = CONCAT44D(*(undefined4 *)(unsigned)pdVar4,uVar37);
            dVar36 = CONCAT44D(*(undefined4 *)(unsigned)((int)pdVar4 + 4),fVar28);
            pdVar4 = pdVar4 + 1;
          }
          else {
            *(double *)(unsigned)((int)pdVar4 + 0x24) = in_xd2;
            dVar31 = *pdVar4;
            dVar36 = pdVar4[1];
            pdVar4 = pdVar4 + 2;
          }
          uVar37 = (undefined4)(D2U(dVar36) >> 0x20);
          if (cVar45 == '\0') {
            uVar34 = *(undefined4 *)(unsigned)(pdVar4 + 2);
            dVar33 = CONCAT44D(uVar34,SUB84(dVar42,0));
            dVar42 = CONCAT44D(*(undefined4 *)(unsigned)((int)pdVar4 + 0x14),uVar32);
            *(undefined4 *)(unsigned)((int)unaff_r8 + 0x1c) = *(undefined4 *)(unsigned)((int)pdVar4 + 0x14);
            *(undefined4 *)(unsigned)(unaff_r8 + 3) = uVar34;
            *(undefined4 *)(unsigned)((int)unaff_r8 + 0x14) = uVar37;
            unaff_r8 = unaff_r8 + 2;
            *(int *)(unsigned)unaff_r8 = (int)(D2U(dVar31) >> 0x20);
          }
          else {
            dVar33 = pdVar4[2];
            dVar42 = pdVar4[3];
            unaff_r8[3] = dVar42;
            unaff_r8[2] = dVar33;
            unaff_r8[1] = dVar36;
            *unaff_r8 = dVar31;
          }
          puVar11 = puVar23 + 3;
          dVar36 = in_xd14;
          if (cVar45 == '\0') {
            dVar36 = CONCAT44D(uVar40,SUB84(dVar33,0));
          }
          pdVar4 = (double *)(unsigned)((uint)puVar23[2] * 0x40 + (*(undefined4 *)(unsigned)(unsigned)0x8c4aa510));
          *(undefined4 *)(unsigned)pdVar4 = 0xe0000000;
          fVar28 = F32HI(dVar36);
          if (cVar44 == '\0') {
            dVar33 = CONCAT44D(uVar37,(float)(int)psVar25[2] * fVar28);
          }
          else {
            dVar33 = CONCAT44D(uVar37,(float)(int)psVar25[2]) * dVar36;
          }
          if (cVar45 == '\0') {
            *(int *)(unsigned)(pdVar4 + 4) = SUB84(dVar33,0);
          }
          else {
            pdVar4[4] = in_xd2;
          }
          psVar26 = psVar25 + 4;
          if (cVar44 == '\0') {
            fVar28 = (float)(int)psVar25[3] * fVar28;
          }
          else {
            fVar28 = SUB84(CONCAT44D((int)(D2U(dVar33) >> 0x20),(float)(int)psVar25[3])
                           * dVar36,0);
          }
          if (cVar45 == '\0') {
            *(float *)(unsigned)((int)pdVar4 + 0x24) = fVar28;
            dVar31 = CONCAT44D(*(undefined4 *)(unsigned)pdVar4,SUB84(dVar31,0));
            dVar33 = CONCAT44D(*(undefined4 *)(unsigned)((int)pdVar4 + 4),fVar28);
            pdVar4 = pdVar4 + 1;
          }
          else {
            *(double *)(unsigned)((int)pdVar4 + 0x24) = in_xd2;
            dVar31 = *pdVar4;
            dVar33 = pdVar4[1];
            pdVar4 = pdVar4 + 2;
          }
          if (cVar45 == '\0') {
            uVar37 = *(undefined4 *)(unsigned)(pdVar4 + 2);
            dVar36 = CONCAT44D(uVar37,SUB84(dVar36,0));
            dVar42 = CONCAT44D(*(undefined4 *)(unsigned)((int)pdVar4 + 0x14),SUB84(dVar42,0));
            *(undefined4 *)(unsigned)((int)unaff_r8 + 0x3c) = *(undefined4 *)(unsigned)((int)pdVar4 + 0x14);
            *(undefined4 *)(unsigned)(unaff_r8 + 7) = uVar37;
            *(int *)(unsigned)((int)unaff_r8 + 0x34) = (int)(D2U(dVar33) >> 0x20);
            pdVar4 = unaff_r8 + 6;
            *(int *)(unsigned)pdVar4 = (int)(D2U(dVar31) >> 0x20);
          }
          else {
            dVar36 = pdVar4[2];
            dVar42 = pdVar4[3];
            unaff_r8[7] = dVar42;
            unaff_r8[6] = dVar36;
            unaff_r8[5] = dVar33;
            pdVar4 = unaff_r8 + 4;
            *pdVar4 = dVar31;
          }
          uVar37 = SUB84(dVar42,0);
          uVar34 = SUB84(dVar36,0);
          pdVar4 = pdVar4 + 4;
          (*(unsigned *)(fr0_ - 0x70) = (unsigned)(unsigned long)((uint *)(unsigned)0x2));
          if (2 < (int)(uVar22 - 1)) {
            do {
              uVar1 = *puVar11;
              puVar11 = puVar11 + 1;
              dVar35 = in_xd14;
              if (cVar45 == '\0') {
                dVar35 = CONCAT44D(uVar40,SUB84(dVar36,0));
              }
              pdVar7 = (double *)(unsigned)((uint)uVar1 * 0x40 + (*(undefined4 *)(unsigned)(unsigned)0x8c4aa510));
              *(undefined4 *)(unsigned)pdVar7 = 0xe0000000;
              *(undefined4 *)(unsigned)(pdVar7 + 5) = (*(undefined4 *)(fr0_ - 0x4c));
              *(undefined4 *)(unsigned)((int)pdVar7 + 0x2c) = (*(undefined4 *)(fr0_ - 0x48));
              uVar37 = (undefined4)(D2U(dVar33) >> 0x20);
              fVar28 = F32HI(dVar35);
              if (cVar44 == '\0') {
                dVar36 = CONCAT44D(uVar37,(float)(int)*psVar26 * fVar28);
              }
              else {
                dVar36 = CONCAT44D(uVar37,(float)(int)*psVar26) * dVar35;
              }
              if (cVar45 == '\0') {
                *(int *)(unsigned)(pdVar7 + 4) = SUB84(dVar36,0);
              }
              else {
                pdVar7[4] = in_xd2;
              }
              if (cVar44 == '\0') {
                fVar28 = (float)(int)psVar26[1] * fVar28;
              }
              else {
                fVar28 = SUB84(CONCAT44D((int)(D2U(dVar36) >> 0x20),
                                                (float)(int)psVar26[1]) * dVar35,0);
              }
              psVar26 = psVar26 + 2;
              if (cVar45 == '\0') {
                *(float *)(unsigned)((int)pdVar7 + 0x24) = fVar28;
                dVar31 = CONCAT44D(*(undefined4 *)(unsigned)pdVar7,SUB84(dVar31,0));
                dVar33 = CONCAT44D(*(undefined4 *)(unsigned)((int)pdVar7 + 4),fVar28);
                pdVar7 = pdVar7 + 1;
              }
              else {
                *(double *)(unsigned)((int)pdVar7 + 0x24) = in_xd2;
                dVar31 = *pdVar7;
                dVar33 = pdVar7[1];
                pdVar7 = pdVar7 + 2;
              }
              if (cVar45 == '\0') {
                uVar37 = *(undefined4 *)(unsigned)(pdVar7 + 2);
                dVar36 = CONCAT44D(uVar37,SUB84(dVar35,0));
                dVar42 = CONCAT44D(*(undefined4 *)(unsigned)((int)pdVar7 + 0x14),SUB84(dVar42,0));
                *(undefined4 *)(unsigned)((int)pdVar4 + 0x1c) = *(undefined4 *)(unsigned)((int)pdVar7 + 0x14);
                *(undefined4 *)(unsigned)(pdVar4 + 3) = uVar37;
                *(int *)(unsigned)((int)pdVar4 + 0x14) = (int)(D2U(dVar33) >> 0x20);
                pdVar4 = pdVar4 + 2;
                *(int *)(unsigned)pdVar4 = (int)(D2U(dVar31) >> 0x20);
              }
              else {
                dVar36 = pdVar7[2];
                dVar42 = pdVar7[3];
                pdVar4[3] = dVar42;
                pdVar4[2] = dVar36;
                pdVar4[1] = dVar33;
                *pdVar4 = dVar31;
              }
              uVar37 = SUB84(dVar42,0);
              uVar34 = SUB84(dVar36,0);
              pdVar4 = pdVar4 + 4;
              (*(unsigned *)(fr0_ - 0x70) = (unsigned)(unsigned long)((uint *)(unsigned)((int)((uint *)(unsigned long)*(unsigned *)(fr0_ - 0x70)) + 1)));
            } while ((int)((uint *)(unsigned long)*(unsigned *)(fr0_ - 0x70)) < (int)(uVar22 - 1));
          }
          puVar23 = puVar11 + 1;
          dVar42 = in_xd14;
          if (cVar45 == '\0') {
            dVar42 = CONCAT44D(uVar40,uVar34);
          }
          pdVar7 = (double *)(unsigned)((uint)*puVar11 * 0x40 + (*(undefined4 *)(unsigned)(unsigned)0x8c4aa510));
          *(undefined4 *)(unsigned)pdVar7 = 0xf0000000;
          *(undefined4 *)(unsigned)(pdVar7 + 5) = (*(undefined4 *)(fr0_ - 0x4c));
          *(undefined4 *)(unsigned)((int)pdVar7 + 0x2c) = (*(undefined4 *)(fr0_ - 0x48));
          uVar34 = (undefined4)(D2U(dVar33) >> 0x20);
          fVar28 = F32HI(dVar42);
          if (cVar44 == '\0') {
            dVar36 = CONCAT44D(uVar34,(float)(int)*psVar26 * fVar28);
          }
          else {
            dVar36 = CONCAT44D(uVar34,(float)(int)*psVar26) * dVar42;
          }
          if (cVar45 == '\0') {
            *(int *)(unsigned)(pdVar7 + 4) = SUB84(dVar36,0);
          }
          else {
            pdVar7[4] = in_xd2;
          }
          if (cVar44 == '\0') {
            fVar28 = (float)(int)psVar26[1] * fVar28;
          }
          else {
            fVar28 = SUB84(CONCAT44D((int)(D2U(dVar36) >> 0x20),(float)(int)psVar26[1])
                           * dVar42,0);
          }
          psVar25 = psVar26 + 2;
          if (cVar45 == '\0') {
            *(float *)(unsigned)((int)pdVar7 + 0x24) = fVar28;
            in_dr0 = CONCAT44D(*(undefined4 *)(unsigned)pdVar7,SUB84(dVar31,0));
            in_dr2 = CONCAT44D(*(undefined4 *)(unsigned)((int)pdVar7 + 4),fVar28);
            pdVar7 = pdVar7 + 1;
          }
          else {
            *(double *)(unsigned)((int)pdVar7 + 0x24) = in_xd2;
            in_dr0 = *pdVar7;
            in_dr2 = pdVar7[1];
            pdVar7 = pdVar7 + 2;
          }
          if (cVar45 == '\0') {
            uVar34 = *(undefined4 *)(unsigned)(pdVar7 + 2);
            in_dr4 = CONCAT44D(uVar34,SUB84(dVar42,0));
            in_dr6 = CONCAT44D(*(undefined4 *)(unsigned)((int)pdVar7 + 0x14),uVar37);
            *(undefined4 *)(unsigned)((int)pdVar4 + 0x1c) = *(undefined4 *)(unsigned)((int)pdVar7 + 0x14);
            *(undefined4 *)(unsigned)(pdVar4 + 3) = uVar34;
            *(int *)(unsigned)((int)pdVar4 + 0x14) = (int)((ulonglong)in_dr2 >> 0x20);
            pdVar4 = pdVar4 + 2;
            *(int *)(unsigned)pdVar4 = (int)((ulonglong)in_dr0 >> 0x20);
          }
          else {
            in_dr4 = pdVar7[2];
            in_dr6 = pdVar7[3];
            pdVar4[3] = in_dr6;
            pdVar4[2] = in_dr4;
            pdVar4[1] = in_dr2;
            *pdVar4 = in_dr0;
          }
          unaff_r8 = pdVar4 + 4;
        }
        else {
          iVar9 = (uint)*puVar24 * 0x40 + (*(undefined4 *)(unsigned)(unsigned)0x8c4aa510);
          iVar5 = (uint)puVar23[2] * 0x40 + (*(undefined4 *)(unsigned)(unsigned)0x8c4aa510);
          iVar3 = (uint)puVar23[3] * 0x40 + (*(undefined4 *)(unsigned)(unsigned)0x8c4aa510);
          if (cVar45 == '\0') {
            uVar37 = *(undefined4 *)(unsigned)(iVar5 + 0x18);
            in_dr8 = CONCAT44D(*(undefined4 *)(unsigned)(iVar9 + 0x14),SUB84(in_dr8,0));
            uVar34 = *(undefined4 *)(unsigned)(iVar5 + 0x14);
            in_dr6 = CONCAT44D((int)((ulonglong)in_dr6 >> 0x20),*(undefined4 *)(unsigned)(iVar9 + 0x18)
                                     );
            in_dr2 = CONCAT44D((int)((ulonglong)in_dr2 >> 0x20),uVar34);
            dVar31 = CONCAT44D(uVar37,SUB84(in_dr0,0));
            dVar42 = *(double *)(unsigned)(iVar5 + 0x14);
          }
          else {
            dVar31 = *(double *)(unsigned)(iVar5 + 0x18);
            in_dr8 = *(double *)(unsigned)(iVar9 + 0x14);
            in_xd2 = *(double *)(unsigned)(iVar5 + 0x14);
            uVar34 = SUB84(dVar31,0);
            uVar37 = (undefined4)(D2U(dVar31) >> 0x20);
            dVar42 = dVar31;
            in_xd4 = in_xd2;
          }
          fVar28 = F32HI(in_dr8);
          if (cVar44 == '\0') {
            fVar29 = F32LO(in_dr2) * F32LO(in_dr6);
            dVar31 = CONCAT44D(F32HI(dVar31) * fVar28,SUB84(dVar31,0));
          }
          else {
            fVar29 = SUB84(in_dr2 * in_dr6,0);
            dVar31 = dVar31 * in_dr8;
          }
          if (cVar45 == '\0') {
            in_dr8 = CONCAT44D(fVar28,*(undefined4 *)(unsigned)(iVar5 + 0x10));
            in_dr6 = CONCAT44D(*(undefined4 *)(unsigned)(iVar9 + 0x10),SUB84(in_dr6,0));
            dVar42 = CONCAT44D(uVar37,fVar29);
          }
          else {
            in_xd8 = *(double *)(unsigned)(iVar5 + 0x10);
            in_dr6 = *(double *)(unsigned)(iVar9 + 0x10);
          }
          fVar28 = F32HI(in_dr6);
          if (cVar44 == '\0') {
            dVar42 = CONCAT44D(F32HI(dVar42) * fVar28,SUB84(dVar42,0));
          }
          else {
            dVar42 = dVar42 * in_dr6;
          }
          dVar36 = in_xd4;
          if (cVar45 == '\0') {
            dVar31 = CONCAT44D((int)(D2U(dVar31) >> 0x20),uVar34);
            dVar36 = in_xd0;
          }
          in_xd0 = dVar36;
          if (cVar44 == '\0') {
            dVar31 = CONCAT44D(F32HI(dVar31) - F32LO(dVar42),
                                      SUB84(dVar31,0));
          }
          else {
            dVar31 = dVar31 - dVar42;
          }
          dVar36 = in_xd8;
          if (cVar45 == '\0') {
            dVar42 = CONCAT44D((int)(D2U(dVar42) >> 0x20),SUB84(in_dr8,0));
            dVar36 = in_xd2;
          }
          if (cVar44 == '\0') {
            dVar42 = CONCAT44D((int)(D2U(dVar42) >> 0x20),
                                      F32LO(dVar42) * F32LO(in_dr6));
          }
          else {
            dVar42 = dVar42 * in_dr6;
          }
          dVar33 = in_xd8;
          if (cVar45 == '\0') {
            dVar33 = CONCAT44D(SUB84(in_dr8,0),SUB84(in_dr12,0));
          }
          if (cVar44 == '\0') {
            dVar31 = CONCAT44D((int)(D2U(dVar31) >> 0x20),F32LO(dVar31) * fVar28);
            in_dr12 = CONCAT44D(F32HI(dVar33) *
                                       F32HI(in_dr8),SUB84(dVar33,0));
            fVar28 = F32LO(dVar42) - F32HI(dVar42);
          }
          else {
            dVar31 = dVar31 * in_dr6;
            in_dr12 = dVar33 * in_dr8;
            fVar28 = SUB84(dVar42 - dVar42,0);
          }
          if (cVar45 == '\0') {
            dVar42 = CONCAT44D(*(undefined4 *)(unsigned)(iVar3 + 0x14),fVar28);
          }
          else {
            dVar42 = *(double *)(unsigned)(iVar3 + 0x14);
          }
          if (cVar44 == '\0') {
            dVar31 = CONCAT44D((int)(D2U(dVar31) >> 0x20),
                                      F32LO(dVar31) - F32HI(in_dr12));
            dVar42 = CONCAT44D(F32HI(dVar42) * F32LO(dVar42),
                                      SUB84(dVar42,0));
          }
          else {
            dVar31 = dVar31 - in_dr12;
            dVar42 = dVar42 * dVar42;
          }
          if (cVar45 == '\0') {
            dVar42 = CONCAT44D((int)(D2U(dVar42) >> 0x20),*(undefined4 *)(unsigned)(iVar3 + 0x10)
                                     );
          }
          else {
            dVar36 = *(double *)(unsigned)(iVar3 + 0x10);
          }
          if (cVar44 == '\0') {
            dVar42 = CONCAT44D(F32HI(dVar31) * F32LO(dVar42) +
                                      F32HI(dVar42),SUB84(dVar42,0));
          }
          if (cVar45 == '\0') {
            dVar42 = CONCAT44D((int)(D2U(dVar42) >> 0x20),*(undefined4 *)(unsigned)(iVar3 + 0x18)
                                     );
            in_dr0 = CONCAT44D(SUB84(dVar31,0),SUB84(dVar31,0));
            in_xd2 = dVar36;
          }
          else {
            in_xd2 = *(double *)(unsigned)(iVar3 + 0x18);
            in_dr0 = in_xd0;
          }
          if (cVar44 == '\0') {
            dVar42 = (double)((ulonglong)
                              (uint)(F32HI(in_dr0) * F32LO(dVar42) +
                                    F32HI(dVar42)) << 0x20);
          }
          in_dr2 = (double)(D2U(dVar42) & 0xffffffff00000000);
          in_dr4 = in_dr2;
          if (cVar45 == '\0') {
            in_dr4 = CONCAT44D((int)(D2U(dVar42) >> 0x20),uVar34);
          }
          if (cVar44 == '\0') {
            bVar43 = 0.0 < F32HI(in_dr4);
          }
          else {
            bVar43 = in_dr2 < in_dr4;
          }
          (*(undefined4 *)(fr0_ - 0x54)) = 0;
          if (bVar43) {
            if (((*(undefined4 *)(unsigned)(unsigned)0x8c4ab308) & 0x800000) == 0) {
LAB_8c24ecf6:
              puVar23 = puVar24 + uVar22;
              psVar25 = psVar25 + uVar22 * 2;
              goto LAB_8c24eeaa;
            }
            (*(undefined4 *)(fr0_ - 0x54)) = 0x8000;
          }
          puVar12 = ((undefined1 *)(fr0_ - 0x44));
          iVar3 = iVar3 + 0x10;
          iVar5 = iVar5 + 0x10;
          (vsp = ((unsigned long)(fr0_ - 116)), FUN_8c2361a8(iVar9 + 0x10,iVar5,iVar3,puVar12));
          ({ unsigned long ri0_ = (unsigned long)(puVar10); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 116)); FUN_8c25ce48(((undefined1 *)(fr0_ - 0x44)),iVar5,iVar3,puVar12); });
          iVar3 = (uint)puVar24[iVar15 + -1] * 0x40 + (*(undefined4 *)(unsigned)(unsigned)0x8c4aa510);
          if (cVar45 == '\0') {
            (*(undefined4 *)(fr0_ - 0x38)) = *(undefined4 *)(unsigned)(iVar3 + 0x10);
            (*(undefined4 *)(fr0_ - 0x34)) = *(undefined4 *)(unsigned)(iVar3 + 0x14);
            (*(undefined4 *)(fr0_ - 0x30)) = *(undefined4 *)(unsigned)(iVar3 + 0x18);
          }
          else {
            (*(undefined4 *)(fr0_ - 0x38)) = (undefined4)*(undefined8 *)(unsigned)(iVar3 + 0x10);
            (*(undefined4 *)(fr0_ - 0x34)) = (undefined4)*(undefined8 *)(unsigned)(iVar3 + 0x14);
            in_xd2 = *(double *)(unsigned)(iVar3 + 0x18);
            (*(undefined4 *)(fr0_ - 0x30)) = SUB84(in_xd2,0);
            (*(undefined4 *)(fr0_ - 0x2c)) = (undefined4)((ulonglong)in_xd2 >> 0x20);
          }
          iVar15 = (uint)puVar24[iVar15] * 0x40 + (*(undefined4 *)(unsigned)(unsigned)0x8c4aa510);
          if (cVar45 == '\0') {
            dVar42 = CONCAT44D((*(undefined4 *)(fr0_ - 0x38)),*(undefined4 *)(unsigned)(iVar15 + 0x10));
          }
          else {
            in_xd2 = *(double *)(unsigned)(iVar15 + 0x10);
            dVar42 = CONCAT44D((*(undefined4 *)(fr0_ - 0x34)),(*(undefined4 *)(fr0_ - 0x38)));
          }
          if (cVar44 == '\0') {
            dVar42 = CONCAT44D(F32HI(dVar42) + F32LO(dVar42),
                                      SUB84(dVar42,0));
          }
          else {
            dVar42 = dVar42 + dVar42;
          }
          uVar37 = (undefined4)(D2U(dVar42) >> 0x20);
          if (cVar45 == '\0') {
            dVar42 = CONCAT44D((*(undefined4 *)(fr0_ - 0x34)),*(undefined4 *)(unsigned)(iVar15 + 0x14));
            (*(undefined4 *)(fr0_ - 0x38)) = uVar37;
          }
          else {
            (*(undefined4 *)(fr0_ - 0x38)) = SUB84(dVar42,0);
            in_xd2 = *(double *)(unsigned)(iVar15 + 0x14);
            dVar42 = CONCAT44D((*(undefined4 *)(fr0_ - 0x30)),uVar37);
          }
          if (cVar44 == '\0') {
            dVar42 = CONCAT44D(F32HI(dVar42) + F32LO(dVar42),
                                      SUB84(dVar42,0));
          }
          else {
            dVar42 = dVar42 + dVar42;
          }
          uVar37 = (undefined4)(D2U(dVar42) >> 0x20);
          if (cVar45 == '\0') {
            dVar42 = CONCAT44D((*(undefined4 *)(fr0_ - 0x30)),*(undefined4 *)(unsigned)(iVar15 + 0x18));
            (*(undefined4 *)(fr0_ - 0x34)) = uVar37;
          }
          else {
            (*(undefined4 *)(fr0_ - 0x34)) = SUB84(dVar42,0);
            in_xd2 = *(double *)(unsigned)(iVar15 + 0x18);
            dVar42 = CONCAT44D((*(undefined4 *)(fr0_ - 0x2c)),uVar37);
          }
          if (cVar44 == '\0') {
            dVar42 = CONCAT44D(F32HI(dVar42) + F32LO(dVar42),
                                      SUB84(dVar42,0));
          }
          else {
            dVar42 = dVar42 + dVar42;
          }
          uVar37 = (undefined4)(D2U(dVar42) >> 0x20);
          if (cVar45 == '\0') {
            dVar42 = CONCAT44D(uVar37,(*(undefined4 *)(fr0_ - 0x38)));
            (*(undefined4 *)(fr0_ - 0x30)) = uVar37;
          }
          else {
            (*(undefined4 *)(fr0_ - 0x30)) = SUB84(dVar42,0);
            in_xd2 = CONCAT44D((*(undefined4 *)(fr0_ - 0x34)),(*(undefined4 *)(fr0_ - 0x38)));
            (*(undefined4 *)(fr0_ - 0x2c)) = uVar37;
          }
          fVar28 = F32HI(dVar41);
          if (cVar44 == '\0') {
            dVar42 = CONCAT44D((int)(D2U(dVar42) >> 0x20),F32LO(dVar42) * fVar28);
          }
          else {
            dVar42 = dVar42 * dVar41;
          }
          if (cVar45 == '\0') {
            (*(undefined4 *)(fr0_ - 0x38)) = SUB84(dVar42,0);
            dVar42 = CONCAT44D((int)(D2U(dVar42) >> 0x20),(*(undefined4 *)(fr0_ - 0x34)));
          }
          else {
            (*(undefined4 *)(fr0_ - 0x38)) = SUB84(in_xd2,0);
            (*(undefined4 *)(fr0_ - 0x34)) = (undefined4)((ulonglong)in_xd2 >> 0x20);
            in_xd2 = CONCAT44D((*(undefined4 *)(fr0_ - 0x30)),(*(undefined4 *)(fr0_ - 0x34)));
          }
          if (cVar44 == '\0') {
            dVar42 = CONCAT44D((int)(D2U(dVar42) >> 0x20),F32LO(dVar42) * fVar28);
          }
          else {
            dVar42 = dVar42 * dVar41;
          }
          if (cVar45 == '\0') {
            (*(undefined4 *)(fr0_ - 0x34)) = SUB84(dVar42,0);
            dVar42 = CONCAT44D((int)(D2U(dVar42) >> 0x20),(*(undefined4 *)(fr0_ - 0x30)));
          }
          else {
            (*(undefined4 *)(fr0_ - 0x34)) = SUB84(in_xd2,0);
            (*(undefined4 *)(fr0_ - 0x30)) = (undefined4)((ulonglong)in_xd2 >> 0x20);
            in_xd2 = CONCAT44D((*(undefined4 *)(fr0_ - 0x2c)),(*(undefined4 *)(fr0_ - 0x30)));
          }
          if (cVar44 == '\0') {
            dVar42 = CONCAT44D((int)(D2U(dVar42) >> 0x20),F32LO(dVar42) * fVar28);
          }
          else {
            dVar42 = dVar42 * dVar41;
          }
          puVar12 = ((undefined1 *)(unsigned)0x8c4c2620);
          puVar17 = ((undefined1 *)(fr0_ - 0x44));
          if (cVar45 == '\0') {
            (*(undefined4 *)(fr0_ - 0x30)) = SUB84(dVar42,0);
          }
          else {
            (*(undefined4 *)(fr0_ - 0x30)) = SUB84(in_xd2,0);
            (*(undefined4 *)(fr0_ - 0x2c)) = (undefined4)((ulonglong)in_xd2 >> 0x20);
          }
          puVar13 = &(*(undefined4 *)(fr0_ - 0x38));
          (vsp = ((unsigned long)(fr0_ - 116)), FUN_8c23bae2(((undefined1 *)(unsigned)0x8c4c2620),puVar13,puVar17,(*(undefined4 *)(fr0_ - 0x54))));
          uVar37 = (undefined4)(D2U(dVar42) >> 0x20);
          if (cVar45 != '\0') {
            in_xd4 = *(double *)(unsigned)(puVar10 + 4);
          }
          (*(undefined4 *)(fr0_ - 0x4c)) = (vsp = ((unsigned long)(fr0_ - 116)), float_to_color_u8(puVar12,puVar13,puVar17,(*(undefined4 *)(fr0_ - 0x54))));
          if (cVar45 == '\0') {
            in_dr6 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4c2638),(*(undefined4 *)(unsigned)(unsigned)0x8c4c263c));
            uVar34 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c2634);
          }
          else {
            in_dr6 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4c263c),(*(undefined4 *)(unsigned)(unsigned)0x8c4c2638));
            in_xd4 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4c2638),(*(undefined4 *)(unsigned)(unsigned)0x8c4c2634));
            uVar34 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c2630);
          }
          (*(undefined4 *)(fr0_ - 0x48)) = (vsp = ((unsigned long)(fr0_ - 116)), float_to_color_u8(puVar12,puVar13,puVar17,(*(undefined4 *)(fr0_ - 0x54))));
          in_dr4 = in_xd14;
          if (cVar45 == '\0') {
            in_dr4 = CONCAT44D(SUB84(dVar41,0),uVar34);
          }
          psVar26 = psVar25 + 2;
          puVar11 = puVar23 + 2;
          ar4_00 = (uint *)(unsigned)((uint)*puVar24 * 0x40 + (*(undefined4 *)(unsigned)(unsigned)0x8c4aa510));
          puVar23 = puVar23 + 3;
          (*(unsigned *)(fr0_ - 0x70) = (unsigned)(unsigned long)((uint *)(unsigned)((uint)*puVar11 * 0x40 + (*(undefined4 *)(unsigned)(unsigned)0x8c4aa510))));
          fVar28 = F32HI(in_dr4);
          if (cVar44 == '\0') {
            dVar42 = CONCAT44D(uVar37,(float)(int)*psVar25 * fVar28);
          }
          else {
            dVar42 = CONCAT44D(uVar37,(float)(int)*psVar25) * in_dr4;
          }
          if (cVar45 == '\0') {
            ar4_00[8] = SUB84(dVar42,0);
          }
          else {
            *(double *)(unsigned)(ar4_00 + 8) = in_xd2;
          }
          uVar37 = (undefined4)(D2U(dVar42) >> 0x20);
          if (cVar44 == '\0') {
            dVar42 = CONCAT44D(uVar37,(float)(int)psVar25[1] * fVar28);
          }
          else {
            dVar42 = CONCAT44D(uVar37,(float)(int)psVar25[1]) * in_dr4;
          }
          if (cVar45 == '\0') {
            ar4_00[9] = SUB84(dVar42,0);
          }
          else {
            *(double *)(unsigned)(ar4_00 + 9) = in_xd2;
          }
          psVar18 = psVar25 + 3;
          psVar25 = psVar25 + 4;
          uVar37 = (undefined4)(D2U(dVar42) >> 0x20);
          if (cVar44 == '\0') {
            dVar42 = CONCAT44D(uVar37,(float)(int)*psVar26 * fVar28);
          }
          else {
            dVar42 = CONCAT44D(uVar37,(float)(int)*psVar26) * in_dr4;
          }
          if (cVar45 == '\0') {
            ((uint *)(unsigned long)*(unsigned *)(fr0_ - 0x70))[8] = SUB84(dVar42,0);
          }
          else {
            *(double *)(unsigned)(((uint *)(unsigned long)*(unsigned *)(fr0_ - 0x70)) + 8) = in_xd2;
          }
          uVar37 = (undefined4)(D2U(dVar42) >> 0x20);
          if (cVar44 == '\0') {
            in_dr2 = CONCAT44D(uVar37,(float)(int)*psVar18 * fVar28);
          }
          else {
            in_dr2 = CONCAT44D(uVar37,(float)(int)*psVar18) * in_dr4;
          }
          if (cVar45 == '\0') {
            ((uint *)(unsigned long)*(unsigned *)(fr0_ - 0x70))[9] = SUB84(in_dr2,0);
          }
          else {
            *(double *)(unsigned)(((uint *)(unsigned long)*(unsigned *)(fr0_ - 0x70)) + 9) = in_xd2;
          }
          (*(int *)(fr0_ - 0x68)) = 0;
          if (0 < (int)(uVar22 - 2)) {
            do {
              uVar1 = *puVar23;
              puVar23 = puVar23 + 1;
              dVar42 = in_xd14;
              if (cVar45 == '\0') {
                dVar42 = CONCAT44D(SUB84(dVar41,0),SUB84(in_dr4,0));
              }
              in_dr4 = dVar42;
              uVar37 = (undefined4)((ulonglong)in_dr2 >> 0x20);
              ar6_00 = (uint *)(unsigned)((uint)uVar1 * 0x40 + (*(undefined4 *)(unsigned)(unsigned)0x8c4aa510));
              fVar28 = F32HI(in_dr4);
              if (cVar44 == '\0') {
                dVar42 = CONCAT44D(uVar37,(float)(int)*psVar25 * fVar28);
              }
              else {
                dVar42 = CONCAT44D(uVar37,(float)(int)*psVar25) * in_dr4;
              }
              if (cVar45 == '\0') {
                ar6_00[8] = SUB84(dVar42,0);
              }
              else {
                *(double *)(unsigned)(ar6_00 + 8) = in_xd2;
              }
              uVar37 = (undefined4)(D2U(dVar42) >> 0x20);
              if (cVar44 == '\0') {
                in_dr2 = CONCAT44D(uVar37,(float)(int)psVar25[1] * fVar28);
              }
              else {
                in_dr2 = CONCAT44D(uVar37,(float)(int)psVar25[1]) * in_dr4;
              }
              if (cVar45 == '\0') {
                ar6_00[9] = SUB84(in_dr2,0);
              }
              else {
                *(double *)(unsigned)(ar6_00 + 9) = in_xd2;
              }
              psVar25 = psVar25 + 2;
              if ((*ar4_00 & *((uint *)(unsigned long)*(unsigned *)(fr0_ - 0x70)) & *ar6_00 & 1) == 0) {
                (vsp = ((unsigned long)(fr0_ - 116)), FUN_8c247898(ar4_00,((uint *)(unsigned long)*(unsigned *)(fr0_ - 0x70)),ar6_00,&(*(undefined4 *)(fr0_ - 0x4c))));
              }
              (*(int *)(fr0_ - 0x68)) = (*(int *)(fr0_ - 0x68)) + 1;
              ar4_00 = ((uint *)(unsigned long)*(unsigned *)(fr0_ - 0x70));
              (*(unsigned *)(fr0_ - 0x70) = (unsigned)(unsigned long)(ar6_00));
            } while ((*(int *)(fr0_ - 0x68)) < (int)(uVar22 - 2));
          }
        }
      }
      else {
        psVar25 = psVar25 + uVar22 * 2;
        puVar23 = puVar24 + uVar22;
      }
LAB_8c24eeaa:
      (*(int *)(fr0_ - 0x5c)) = (*(int *)(fr0_ - 0x5c)) + 1;
    }
  }
  else if (uVar2 == 0xc000) {
    if (((*(undefined4 *)(unsigned)(unsigned)0x8c4ab318) & 1) == 0) {
      pcVar6 = ((void *)0x8c24501e);
    }
    else {
      pcVar6 = ((void *)0x8c244ac2);
    }
    uVar2 = (vsp = ((unsigned long)(fr0_ - 116)), (*(code *)xlat((unsigned long)pcVar6))(ar4,uVar1 & 0x3fff,ar6,ar7));
  }
  return uVar2;
}

__asm__(".globl _FUN_8c24df18\n.set _FUN_8c24df18, _FUN_8c24df18_def\n");
