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
uint FUN_8c250a54_def(ushort *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c250a54";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 108; for (int i_ = 0; i_ < 108; i_++) z_[i_] = 0; }
  ushort uVar1;
  double dVar2;
  uint uVar3;
  int iVar4;
  code *pcVar5;
  int iVar6;
  double *pdVar7;
  uint uVar8;
  int iVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  ushort *puVar12;
  uint *ar4_00;
  undefined4 *puVar13;
  double *pdVar14;
  undefined4 *puVar15;
  undefined1 *puVar16;
  double *pdVar17;
  int iVar18;
  uint uVar19;
  double *unaff_r8 = 0;
  double *pdVar20;
  double *pdVar21;
  double *pdVar22;
  uint uVar23;
  uint *ar6_00;
  ushort *puVar24;
  ushort *puVar25;
  double in_dr0 = 0;
  float fVar26;
  float fVar27;
  double in_dr2 = 0;
  ulonglong uVar28;
  double dVar29;
  double in_dr4 = 0;
  double dVar30;
  float fVar34;
  double dVar31;
  double dVar32;
  double dVar33;
  undefined4 uVar36;
  undefined4 uVar37;
  double in_dr6 = 0;
  double in_dr8 = 0;
  double in_dr12 = 0;
  undefined8 in_dr14 = 0;
  double dVar38;
  double in_xd0 = 0;
  double in_xd2 = 0;
  double dVar39;
  double in_xd4 = 0;
  double in_xd6 = 0;
  double dVar40;
  double in_xd8 = 0;
  double in_xd14 = 0;
  bool bVar41;
  float in_PR = 0;
  char cVar42;
  char cVar43;
  undefined4 *puVar44;
  undefined4 uVar35;
  
  cVar43 = '\0';
  cVar42 = '\0';
  (*(undefined4 *)(fr0_ - 0x1c)) = (undefined4)in_dr14;
  (*(undefined4 *)(fr0_ - 0x20)) = (undefined4)((ulonglong)in_dr14 >> 0x20);
  (*(undefined4 *)(fr0_ - 0x24)) = (undefined4)((ulonglong)in_dr12 >> 0x20);
  dVar38 = CONCAT44D((*(undefined4 *)(fr0_ - 0x20)),0x3f000000);
  uVar1 = *ar4;
  puVar24 = ((ushort *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 2));
  uVar3 = uVar1 & 0xc000;
  (*(float *)(fr0_ - 0x28)) = in_PR;
  if ((uVar1 & 0xc000) == 0) {
    (*(undefined4 *)(unsigned)(unsigned)0x8c4aa51c) = (*(undefined4 *)(unsigned)(unsigned)0x8c4aa51c) + (uint)ar4[1] * 3;
    puVar11 = ((undefined1 *)(unsigned)0x8c4c2620);
    dVar38 = 7.946779287948402e-07;
    for ((*(int *)(fr0_ - 0x64)) = 0; uVar3 = (uint)ar4[1], (*(int *)(fr0_ - 0x64)) < (int)uVar3; (*(int *)(fr0_ - 0x64)) = (*(int *)(fr0_ - 0x64)) + 1) {
      uVar1 = *puVar24;
      puVar12 = puVar24 + 1;
      puVar25 = puVar24 + 2;
      puVar24 = puVar24 + 3;
      pdVar21 = (double *)(unsigned)((uint)*puVar25 * 0x40 + (*(undefined4 *)(unsigned)(unsigned)0x8c4aa510));
      pdVar7 = (double *)(unsigned)((uint)uVar1 * 0x40 + (*(undefined4 *)(unsigned)(unsigned)0x8c4aa510));
      pdVar20 = (double *)(unsigned)((uint)*puVar12 * 0x40 + (*(undefined4 *)(unsigned)(unsigned)0x8c4aa510));
      if ((*(uint *)(unsigned)pdVar7 & *(uint *)(unsigned)pdVar20 & *(uint *)(unsigned)pdVar21 & 0x3f) == 0) {
        if (((*(uint *)(unsigned)pdVar7 | *(uint *)(unsigned)pdVar20 | *(uint *)(unsigned)pdVar21) & 1) == 0) {
          if (cVar43 == '\0') {
            uVar35 = *(undefined4 *)(unsigned)((int)pdVar20 + 4);
            dVar32 = CONCAT44D(uVar35,*(undefined4 *)(unsigned)((int)pdVar7 + 4));
          }
          else {
            dVar32 = *(double *)(unsigned)((int)pdVar20 + 4);
            in_xd2 = *(double *)(unsigned)((int)pdVar7 + 4);
            uVar35 = SUB84(in_dr4,0);
          }
          if (cVar42 == '\0') {
            dVar32 = CONCAT44D(F32HI(dVar32) - F32LO(dVar32),
                                      SUB84(dVar32,0));
          }
          else {
            dVar32 = dVar32 - dVar32;
          }
          if (cVar43 == '\0') {
            dVar32 = CONCAT44D((int)(D2U(dVar32) >> 0x20),*(undefined4 *)(unsigned)(pdVar21 + 1))
            ;
            dVar30 = CONCAT44D(*(undefined4 *)(unsigned)(pdVar20 + 1),uVar35);
          }
          else {
            in_xd2 = pdVar21[1];
            dVar30 = pdVar20[1];
          }
          fVar34 = F32HI(dVar30);
          if (cVar42 == '\0') {
            dVar32 = CONCAT44D((int)(D2U(dVar32) >> 0x20),F32LO(dVar32) - fVar34);
          }
          else {
            dVar32 = dVar32 - dVar30;
          }
          dVar40 = dVar30;
          if (cVar43 == '\0') {
            in_dr0 = CONCAT44D((int)((ulonglong)in_dr0 >> 0x20),fVar34);
            dVar40 = in_xd0;
          }
          in_xd0 = dVar40;
          if (cVar42 == '\0') {
            dVar32 = CONCAT44D(F32HI(dVar32) * F32LO(dVar32),
                                      SUB84(dVar32,0));
          }
          else {
            dVar32 = dVar32 * dVar32;
          }
          if (cVar43 == '\0') {
            dVar32 = CONCAT44D((int)(D2U(dVar32) >> 0x20),*(undefined4 *)(unsigned)(pdVar7 + 1));
          }
          else {
            in_xd2 = pdVar7[1];
          }
          if (cVar42 == '\0') {
            dVar40 = CONCAT44D((int)((ulonglong)in_dr0 >> 0x20),
                                      F32LO(in_dr0) - F32LO(dVar32));
          }
          else {
            dVar40 = in_dr0 - dVar32;
          }
          if (cVar43 == '\0') {
            dVar32 = CONCAT44D((int)(D2U(dVar32) >> 0x20),
                                      *(undefined4 *)(unsigned)((int)pdVar21 + 4));
          }
          else {
            in_xd2 = *(double *)(unsigned)((int)pdVar21 + 4);
          }
          if (cVar42 == '\0') {
            dVar32 = CONCAT44D((int)(D2U(dVar32) >> 0x20),
                                      F32LO(dVar32) - F32LO(dVar30));
          }
          else {
            dVar32 = dVar32 - dVar30;
          }
          uVar3 = (uint)(D2U(dVar32) >> 0x20);
          dVar29 = dVar32;
          if (cVar43 == '\0') {
            dVar29 = CONCAT44D(uVar3,SUB84(dVar30,0));
          }
          if (cVar42 == '\0') {
            in_dr0 = CONCAT44D((int)(D2U(dVar40) >> 0x20),
                                      F32LO(dVar40) * F32LO(dVar32));
          }
          else {
            in_dr0 = dVar40 * dVar32;
          }
          in_dr2 = (double)((ulonglong)uVar3 << 0x20);
          if (cVar42 == '\0') {
            fVar34 = F32HI(dVar29) - F32LO(in_dr0);
            in_dr4 = CONCAT44D(fVar34,SUB84(dVar29,0));
            bVar41 = 0.0 < fVar34;
          }
          else {
            in_dr4 = dVar29 - in_dr0;
            bVar41 = in_dr2 < in_dr4;
          }
          (*(int *)(fr0_ - 0x5c)) = 0;
          if (bVar41) {
            if (((*(undefined4 *)(unsigned)(unsigned)0x8c4ab308) & 0x800000) == 0) goto LAB_8c250e3e;
            (*(int *)(fr0_ - 0x5c)) = 0x8000;
          }
          pdVar22 = pdVar20 + 2;
          puVar10 = ((undefined1 *)(fr0_ - 0x40));
          pdVar14 = pdVar21 + 2;
          (vsp = ((unsigned long)(fr0_ - 108)), FUN_8c2361a8(pdVar7 + 2,pdVar22,pdVar14,puVar10));
          uVar35 = SUB84(in_dr0,0);
          ({ unsigned long ri0_ = (unsigned long)(puVar11); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 108)); FUN_8c25ce48(((undefined1 *)(fr0_ - 0x40)),pdVar22,pdVar14,puVar10); });
          if (cVar43 == '\0') {
            dVar32 = CONCAT44D(*(undefined4 *)(unsigned)(pdVar7 + 2),*(undefined4 *)(unsigned)(pdVar20 + 2));
          }
          else {
            dVar32 = pdVar7[2];
            in_xd2 = pdVar20[2];
          }
          puVar16 = ((undefined1 *)(fr0_ - 0x40));
          puVar10 = ((undefined1 *)(unsigned)0x8c4c2620);
          if (cVar42 == '\0') {
            dVar32 = CONCAT44D(F32HI(dVar32) + F32LO(dVar32),
                                      SUB84(dVar32,0));
          }
          else {
            dVar32 = dVar32 + dVar32;
          }
          if (cVar43 == '\0') {
            dVar32 = CONCAT44D((int)(D2U(dVar32) >> 0x20),*(undefined4 *)(unsigned)(pdVar21 + 2))
            ;
          }
          else {
            in_xd2 = pdVar21[2];
          }
          fVar34 = F32HI(dVar38);
          if (cVar42 == '\0') {
            dVar32 = CONCAT44D((F32HI(dVar32) + F32LO(dVar32)) *
                                      fVar34,SUB84(dVar32,0));
          }
          else {
            dVar32 = (dVar32 + dVar32) * dVar38;
          }
          if (cVar43 == '\0') {
            (*(undefined4 *)(fr0_ - 0x34)) = (undefined4)(D2U(dVar32) >> 0x20);
            dVar32 = CONCAT44D(*(undefined4 *)(unsigned)((int)pdVar7 + 0x14),
                                      *(undefined4 *)(unsigned)((int)pdVar20 + 0x14));
          }
          else {
            (*(undefined4 *)(fr0_ - 0x34)) = SUB84(dVar32,0);
            dVar32 = *(double *)(unsigned)((int)pdVar7 + 0x14);
            in_xd2 = *(double *)(unsigned)((int)pdVar20 + 0x14);
          }
          if (cVar42 == '\0') {
            dVar32 = CONCAT44D(F32HI(dVar32) + F32LO(dVar32),
                                      SUB84(dVar32,0));
          }
          else {
            dVar32 = dVar32 + dVar32;
          }
          if (cVar43 == '\0') {
            dVar32 = CONCAT44D((int)(D2U(dVar32) >> 0x20),
                                      *(undefined4 *)(unsigned)((int)pdVar21 + 0x14));
          }
          else {
            in_xd2 = *(double *)(unsigned)((int)pdVar21 + 0x14);
          }
          if (cVar42 == '\0') {
            dVar32 = CONCAT44D((F32HI(dVar32) + F32LO(dVar32)) *
                                      fVar34,SUB84(dVar32,0));
          }
          else {
            dVar32 = (dVar32 + dVar32) * dVar38;
          }
          if (cVar43 == '\0') {
            (*(undefined4 *)(fr0_ - 0x30)) = (undefined4)(D2U(dVar32) >> 0x20);
            dVar32 = CONCAT44D(*(undefined4 *)(unsigned)(pdVar7 + 3),*(undefined4 *)(unsigned)(pdVar20 + 3));
          }
          else {
            (*(undefined4 *)(fr0_ - 0x30)) = SUB84(dVar32,0);
            dVar32 = pdVar7[3];
            in_xd2 = pdVar20[3];
          }
          if (cVar42 == '\0') {
            dVar32 = CONCAT44D(F32HI(dVar32) + F32LO(dVar32),
                                      SUB84(dVar32,0));
          }
          else {
            dVar32 = dVar32 + dVar32;
          }
          if (cVar43 == '\0') {
            dVar32 = CONCAT44D((int)(D2U(dVar32) >> 0x20),*(undefined4 *)(unsigned)(pdVar21 + 3))
            ;
          }
          else {
            in_xd2 = pdVar21[3];
          }
          if (cVar42 == '\0') {
            dVar32 = CONCAT44D((F32HI(dVar32) + F32LO(dVar32)) *
                                      fVar34,SUB84(dVar32,0));
          }
          else {
            dVar32 = (dVar32 + dVar32) * dVar38;
          }
          fVar34 = F32HI(dVar32);
          (*(float *)(fr0_ - 0x2c)) = fVar34;
          if (cVar43 != '\0') {
            (*(float *)(fr0_ - 0x2c)) = SUB84(dVar32,0);
            (*(float *)(fr0_ - 0x28)) = fVar34;
          }
          puVar13 = &(*(undefined4 *)(fr0_ - 0x34));
          (vsp = ((unsigned long)(fr0_ - 108)), FUN_8c23bae2(((undefined1 *)(unsigned)0x8c4c2620),puVar13,puVar16,(*(int *)(fr0_ - 0x5c))));
          uVar37 = SUB84(dVar32,0);
          if (cVar43 != '\0') {
            in_xd6 = *(double *)(unsigned)(puVar11 + 0xc);
          }
          (*(undefined4 *)(fr0_ - 0x48)) = (vsp = ((unsigned long)(fr0_ - 108)), float_to_color_u8(puVar10,puVar13,puVar16,(*(int *)(fr0_ - 0x5c))));
          uVar3 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c2634);
          if (cVar43 != '\0') {
            in_xd6 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4c2640),(*(undefined4 *)(unsigned)(unsigned)0x8c4c263c));
            uVar3 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c2630);
          }
          (*(undefined4 *)(fr0_ - 0x44)) = (vsp = ((unsigned long)(fr0_ - 108)), float_to_color_u8(puVar10,puVar13,puVar16,(*(int *)(fr0_ - 0x5c))));
          uVar36 = SUB84(dVar38,0);
          dVar32 = in_xd14;
          dVar30 = in_xd14;
          if (cVar43 == '\0') {
            dVar32 = in_xd2;
            uVar37 = uVar36;
            dVar30 = CONCAT44D(uVar36,uVar35);
          }
          *(undefined4 *)(unsigned)pdVar7 = 0xe0000000;
          if (cVar43 == '\0') {
            dVar40 = CONCAT44D(*(undefined4 *)(unsigned)(pdVar7 + 6),uVar37);
          }
          else {
            dVar40 = pdVar7[6];
          }
          if (cVar42 == '\0') {
            dVar40 = (double)(ulonglong)
                             (uint)(F32HI(dVar30) *
                                    F32HI(dVar40) + F32LO(dVar40));
          }
          if (cVar43 == '\0') {
            *(int *)(unsigned)(pdVar7 + 4) = SUB84(dVar40,0);
            uVar28 = CONCAT44(*(undefined4 *)(unsigned)((int)pdVar7 + 0x34),uVar36);
            dVar30 = CONCAT44D(uVar36,SUB84(dVar30,0));
          }
          else {
            pdVar7[4] = dVar32;
            uVar28 = *(ulonglong *)(unsigned)((int)pdVar7 + 0x34);
            dVar32 = in_xd14;
            dVar30 = in_xd14;
          }
          if (cVar42 == '\0') {
            uVar28 = (ulonglong)
                     (uint)(F32HI(dVar30) * (float)(uVar28 >> 0x20) +
                           (float)uVar28);
          }
          if (cVar43 == '\0') {
            *(int *)(unsigned)((int)pdVar7 + 0x24) = (int)uVar28;
            dVar30 = CONCAT44D(*(undefined4 *)(unsigned)pdVar7,SUB84(dVar30,0));
            dVar40 = CONCAT44D(*(undefined4 *)(unsigned)((int)pdVar7 + 4),(int)uVar28);
            pdVar7 = pdVar7 + 1;
          }
          else {
            *(double *)(unsigned)((int)pdVar7 + 0x24) = dVar32;
            dVar30 = *pdVar7;
            dVar40 = pdVar7[1];
            pdVar7 = pdVar7 + 2;
          }
          if (cVar43 == '\0') {
            uVar35 = *(undefined4 *)(unsigned)(pdVar7 + 2);
            dVar29 = CONCAT44D(uVar35,uVar3);
            *(undefined4 *)(unsigned)((int)unaff_r8 + 0x1c) = *(undefined4 *)(unsigned)((int)pdVar7 + 0x14);
            *(undefined4 *)(unsigned)(unaff_r8 + 3) = uVar35;
            *(int *)(unsigned)((int)unaff_r8 + 0x14) = (int)(D2U(dVar40) >> 0x20);
            unaff_r8 = unaff_r8 + 2;
            *(int *)(unsigned)unaff_r8 = (int)(D2U(dVar30) >> 0x20);
            dVar40 = (double)(D2U(dVar38) & 0xffffffff);
            dVar30 = CONCAT44D(uVar36,SUB84(dVar30,0));
          }
          else {
            dVar29 = pdVar7[2];
            unaff_r8[3] = pdVar7[3];
            unaff_r8[2] = dVar29;
            unaff_r8[1] = dVar40;
            *unaff_r8 = dVar30;
            dVar32 = in_xd14;
            dVar30 = in_xd14;
          }
          *(undefined4 *)(unsigned)pdVar20 = 0xe0000000;
          if (cVar43 == '\0') {
            dVar40 = CONCAT44D(*(undefined4 *)(unsigned)(pdVar20 + 6),SUB84(dVar40,0));
          }
          else {
            dVar40 = pdVar20[6];
          }
          if (cVar42 == '\0') {
            dVar40 = (double)(ulonglong)
                             (uint)(F32HI(dVar30) *
                                    F32HI(dVar40) + F32LO(dVar40));
          }
          if (cVar43 == '\0') {
            *(int *)(unsigned)(pdVar20 + 4) = SUB84(dVar40,0);
            uVar28 = CONCAT44(*(undefined4 *)(unsigned)((int)pdVar20 + 0x34),uVar36);
            dVar30 = CONCAT44D(uVar36,SUB84(dVar30,0));
          }
          else {
            pdVar20[4] = dVar32;
            uVar28 = *(ulonglong *)(unsigned)((int)pdVar20 + 0x34);
            dVar32 = in_xd14;
            dVar30 = in_xd14;
          }
          if (cVar42 == '\0') {
            uVar28 = (ulonglong)
                     (uint)(F32HI(dVar30) * (float)(uVar28 >> 0x20) +
                           (float)uVar28);
          }
          if (cVar43 == '\0') {
            *(int *)(unsigned)((int)pdVar20 + 0x24) = (int)uVar28;
            dVar30 = CONCAT44D(*(undefined4 *)(unsigned)pdVar20,SUB84(dVar30,0));
            dVar40 = CONCAT44D(*(undefined4 *)(unsigned)((int)pdVar20 + 4),(int)uVar28);
            pdVar20 = pdVar20 + 1;
          }
          else {
            *(double *)(unsigned)((int)pdVar20 + 0x24) = dVar32;
            dVar30 = *pdVar20;
            dVar40 = pdVar20[1];
            pdVar20 = pdVar20 + 2;
          }
          if (cVar43 == '\0') {
            uVar35 = *(undefined4 *)(unsigned)(pdVar20 + 2);
            dVar29 = CONCAT44D(uVar35,SUB84(dVar29,0));
            *(undefined4 *)(unsigned)((int)unaff_r8 + 0x3c) = *(undefined4 *)(unsigned)((int)pdVar20 + 0x14);
            *(undefined4 *)(unsigned)(unaff_r8 + 7) = uVar35;
            *(int *)(unsigned)((int)unaff_r8 + 0x34) = (int)(D2U(dVar40) >> 0x20);
            pdVar7 = unaff_r8 + 6;
            *(int *)(unsigned)pdVar7 = (int)(D2U(dVar30) >> 0x20);
            dVar40 = (double)(D2U(dVar38) & 0xffffffff);
            dVar30 = CONCAT44D(uVar36,SUB84(dVar30,0));
          }
          else {
            dVar29 = pdVar20[2];
            unaff_r8[7] = pdVar20[3];
            unaff_r8[6] = dVar29;
            unaff_r8[5] = dVar40;
            pdVar7 = unaff_r8 + 4;
            *pdVar7 = dVar30;
            dVar30 = in_xd14;
            dVar32 = in_xd14;
          }
          *(undefined4 *)(unsigned)pdVar21 = 0xf0000000;
          *(undefined4 *)(unsigned)(pdVar21 + 5) = (*(undefined4 *)(fr0_ - 0x48));
          *(undefined4 *)(unsigned)((int)pdVar21 + 0x2c) = (*(undefined4 *)(fr0_ - 0x44));
          if (cVar43 == '\0') {
            dVar40 = CONCAT44D(*(undefined4 *)(unsigned)(pdVar21 + 6),SUB84(dVar40,0));
          }
          else {
            dVar40 = pdVar21[6];
          }
          if (cVar42 == '\0') {
            dVar40 = (double)(ulonglong)
                             (uint)(F32HI(dVar30) *
                                    F32HI(dVar40) + F32LO(dVar40));
          }
          if (cVar43 == '\0') {
            *(int *)(unsigned)(pdVar21 + 4) = SUB84(dVar40,0);
            uVar28 = CONCAT44(*(undefined4 *)(unsigned)((int)pdVar21 + 0x34),uVar36);
            in_xd2 = dVar32;
            dVar32 = CONCAT44D(uVar36,SUB84(dVar30,0));
          }
          else {
            pdVar21[4] = dVar32;
            uVar28 = *(ulonglong *)(unsigned)((int)pdVar21 + 0x34);
            in_xd2 = in_xd14;
            dVar32 = in_xd14;
          }
          if (cVar42 == '\0') {
            uVar28 = (ulonglong)
                     (uint)(F32HI(dVar32) * (float)(uVar28 >> 0x20) +
                           (float)uVar28);
          }
          if (cVar43 == '\0') {
            *(int *)(unsigned)((int)pdVar21 + 0x24) = (int)uVar28;
            in_dr0 = CONCAT44D(*(undefined4 *)(unsigned)pdVar21,SUB84(dVar32,0));
            in_dr2 = CONCAT44D(*(undefined4 *)(unsigned)((int)pdVar21 + 4),(int)uVar28);
            pdVar21 = pdVar21 + 1;
          }
          else {
            *(double *)(unsigned)((int)pdVar21 + 0x24) = in_xd2;
            in_dr0 = *pdVar21;
            in_dr2 = pdVar21[1];
            pdVar21 = pdVar21 + 2;
          }
          if (cVar43 == '\0') {
            uVar35 = *(undefined4 *)(unsigned)(pdVar21 + 2);
            in_dr4 = CONCAT44D(uVar35,SUB84(dVar29,0));
            *(undefined4 *)(unsigned)((int)pdVar7 + 0x3c) = *(undefined4 *)(unsigned)((int)pdVar21 + 0x14);
            *(undefined4 *)(unsigned)(pdVar7 + 7) = uVar35;
            *(int *)(unsigned)((int)pdVar7 + 0x34) = (int)((ulonglong)in_dr2 >> 0x20);
            pdVar7 = pdVar7 + 6;
            *(int *)(unsigned)pdVar7 = (int)((ulonglong)in_dr0 >> 0x20);
          }
          else {
            in_dr4 = pdVar21[2];
            pdVar7[7] = pdVar21[3];
            pdVar7[6] = in_dr4;
            pdVar7[5] = in_dr2;
            pdVar7 = pdVar7 + 4;
            *pdVar7 = in_dr0;
          }
          unaff_r8 = pdVar7 + 4;
          (*(undefined4 *)(unsigned)(unsigned)0x8c4aa520) = (*(undefined4 *)(unsigned)(unsigned)0x8c4aa520) + 3;
        }
        else {
          if (cVar43 == '\0') {
            uVar35 = *(undefined4 *)(unsigned)(pdVar20 + 3);
            uVar37 = *(undefined4 *)(unsigned)((int)pdVar20 + 0x14);
            in_dr8 = CONCAT44D(*(undefined4 *)(unsigned)((int)pdVar7 + 0x14),SUB84(in_dr8,0));
            in_dr4 = CONCAT44D((int)((ulonglong)in_dr4 >> 0x20),*(undefined4 *)(unsigned)(pdVar7 + 3));
            in_dr2 = CONCAT44D((int)((ulonglong)in_dr2 >> 0x20),uVar37);
            dVar40 = CONCAT44D(uVar35,SUB84(in_dr0,0));
            dVar32 = in_xd2;
            dVar30 = CONCAT44D(uVar37,uVar35);
          }
          else {
            dVar40 = pdVar20[3];
            dVar32 = *(double *)(unsigned)((int)pdVar20 + 0x14);
            in_dr8 = *(double *)(unsigned)((int)pdVar7 + 0x14);
            uVar37 = (undefined4)(D2U(dVar32) >> 0x20);
            uVar35 = SUB84(dVar32,0);
            dVar30 = dVar32;
            in_xd6 = dVar40;
          }
          fVar34 = F32HI(in_dr8);
          if (cVar42 == '\0') {
            fVar26 = F32LO(in_dr2) * F32LO(in_dr4);
            dVar40 = CONCAT44D(F32HI(dVar40) * fVar34,SUB84(dVar40,0));
          }
          else {
            fVar26 = SUB84(in_dr2 * in_dr4,0);
            dVar40 = dVar40 * in_dr8;
          }
          if (cVar43 == '\0') {
            in_dr8 = CONCAT44D(fVar34,*(undefined4 *)(unsigned)(pdVar20 + 2));
            dVar29 = CONCAT44D(*(undefined4 *)(unsigned)(pdVar7 + 2),SUB84(in_dr4,0));
            dVar31 = CONCAT44D(uVar35,fVar26);
          }
          else {
            in_xd8 = pdVar20[2];
            dVar29 = pdVar7[2];
            dVar31 = in_xd6;
          }
          fVar34 = F32HI(dVar29);
          if (cVar42 == '\0') {
            dVar31 = CONCAT44D(F32HI(dVar31) * fVar34,SUB84(dVar31,0));
          }
          else {
            dVar31 = dVar31 * dVar29;
          }
          if (cVar43 == '\0') {
            dVar40 = CONCAT44D((int)(D2U(dVar40) >> 0x20),uVar37);
            dVar30 = in_xd0;
          }
          in_xd0 = dVar30;
          if (cVar42 == '\0') {
            dVar40 = CONCAT44D(F32HI(dVar40) - F32LO(dVar31),
                                      SUB84(dVar40,0));
          }
          else {
            dVar40 = dVar40 - dVar31;
          }
          in_xd2 = in_xd8;
          if (cVar43 == '\0') {
            dVar31 = CONCAT44D((int)(D2U(dVar31) >> 0x20),SUB84(in_dr8,0));
            in_xd2 = dVar32;
          }
          if (cVar42 == '\0') {
            dVar31 = CONCAT44D((int)(D2U(dVar31) >> 0x20),
                                      F32LO(dVar31) * F32LO(dVar29));
          }
          else {
            dVar31 = dVar31 * dVar29;
          }
          dVar32 = in_xd8;
          if (cVar43 == '\0') {
            dVar32 = CONCAT44D(SUB84(in_dr8,0),SUB84(in_dr12,0));
          }
          if (cVar42 == '\0') {
            in_dr12 = CONCAT44D(F32HI(dVar32) *
                                       F32HI(in_dr8),SUB84(dVar32,0));
            dVar40 = CONCAT44D((int)(D2U(dVar40) >> 0x20),F32LO(dVar40) * fVar34);
            fVar34 = F32LO(dVar31) - F32HI(dVar31);
          }
          else {
            in_dr12 = dVar32 * in_dr8;
            dVar40 = dVar40 * dVar29;
            fVar34 = SUB84(dVar31 - dVar31,0);
          }
          if (cVar43 == '\0') {
            dVar32 = CONCAT44D(*(undefined4 *)(unsigned)((int)pdVar21 + 0x14),fVar34);
          }
          else {
            dVar32 = *(double *)(unsigned)((int)pdVar21 + 0x14);
          }
          if (cVar42 == '\0') {
            dVar40 = CONCAT44D((int)(D2U(dVar40) >> 0x20),
                                      F32LO(dVar40) - F32HI(in_dr12));
            dVar32 = CONCAT44D(F32HI(dVar32) * F32LO(dVar32),
                                      SUB84(dVar32,0));
          }
          else {
            dVar40 = dVar40 - in_dr12;
            dVar32 = dVar32 * dVar32;
          }
          if (cVar43 == '\0') {
            dVar32 = CONCAT44D((int)(D2U(dVar32) >> 0x20),*(undefined4 *)(unsigned)(pdVar21 + 2))
            ;
          }
          else {
            in_xd2 = pdVar21[2];
          }
          if (cVar42 == '\0') {
            dVar32 = CONCAT44D(F32HI(dVar40) * F32LO(dVar32) +
                                      F32HI(dVar32),SUB84(dVar32,0));
          }
          if (cVar43 == '\0') {
            dVar32 = CONCAT44D((int)(D2U(dVar32) >> 0x20),*(undefined4 *)(unsigned)(pdVar21 + 3))
            ;
            in_dr0 = CONCAT44D(SUB84(dVar40,0),SUB84(dVar40,0));
          }
          else {
            in_xd2 = pdVar21[3];
            in_dr0 = in_xd0;
          }
          if (cVar42 == '\0') {
            dVar32 = (double)((ulonglong)
                              (uint)(F32HI(in_dr0) * F32LO(dVar32) +
                                    F32HI(dVar32)) << 0x20);
          }
          in_dr2 = (double)(D2U(dVar32) & 0xffffffff00000000);
          in_dr4 = in_dr2;
          if (cVar43 == '\0') {
            in_dr4 = CONCAT44D((int)(D2U(dVar32) >> 0x20),SUB84(dVar29,0));
          }
          if (cVar42 == '\0') {
            bVar41 = 0.0 < F32HI(in_dr4);
          }
          else {
            bVar41 = in_dr2 < in_dr4;
          }
          (*(int *)(fr0_ - 0x5c)) = 0;
          if (bVar41) {
            if (((*(undefined4 *)(unsigned)(unsigned)0x8c4ab308) & 0x800000) == 0) goto LAB_8c250e3e;
            (*(int *)(fr0_ - 0x5c)) = 0x8000;
          }
          pdVar22 = pdVar20 + 2;
          puVar10 = ((undefined1 *)(fr0_ - 0x40));
          pdVar14 = pdVar21 + 2;
          (vsp = ((unsigned long)(fr0_ - 108)), FUN_8c2361a8(pdVar7 + 2,pdVar22,pdVar14,puVar10));
          ({ unsigned long ri0_ = (unsigned long)(puVar11); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 108)); FUN_8c25ce48(((undefined1 *)(fr0_ - 0x40)),pdVar22,pdVar14,puVar10); });
          if (cVar43 == '\0') {
            dVar32 = CONCAT44D(*(undefined4 *)(unsigned)(pdVar7 + 2),*(undefined4 *)(unsigned)(pdVar20 + 2));
          }
          else {
            dVar32 = pdVar7[2];
            in_xd2 = pdVar20[2];
          }
          puVar16 = ((undefined1 *)(fr0_ - 0x40));
          puVar10 = ((undefined1 *)(unsigned)0x8c4c2620);
          if (cVar42 == '\0') {
            dVar32 = CONCAT44D(F32HI(dVar32) + F32LO(dVar32),
                                      SUB84(dVar32,0));
          }
          else {
            dVar32 = dVar32 + dVar32;
          }
          if (cVar43 == '\0') {
            dVar32 = CONCAT44D((int)(D2U(dVar32) >> 0x20),*(undefined4 *)(unsigned)(pdVar21 + 2))
            ;
          }
          else {
            in_xd2 = pdVar21[2];
          }
          fVar34 = F32HI(dVar38);
          if (cVar42 == '\0') {
            dVar32 = CONCAT44D((F32HI(dVar32) + F32LO(dVar32)) *
                                      fVar34,SUB84(dVar32,0));
          }
          else {
            dVar32 = (dVar32 + dVar32) * dVar38;
          }
          if (cVar43 == '\0') {
            (*(undefined4 *)(fr0_ - 0x34)) = (undefined4)(D2U(dVar32) >> 0x20);
            dVar32 = CONCAT44D(*(undefined4 *)(unsigned)((int)pdVar7 + 0x14),
                                      *(undefined4 *)(unsigned)((int)pdVar20 + 0x14));
          }
          else {
            (*(undefined4 *)(fr0_ - 0x34)) = SUB84(dVar32,0);
            dVar32 = *(double *)(unsigned)((int)pdVar7 + 0x14);
            in_xd2 = *(double *)(unsigned)((int)pdVar20 + 0x14);
          }
          if (cVar42 == '\0') {
            dVar32 = CONCAT44D(F32HI(dVar32) + F32LO(dVar32),
                                      SUB84(dVar32,0));
          }
          else {
            dVar32 = dVar32 + dVar32;
          }
          if (cVar43 == '\0') {
            dVar32 = CONCAT44D((int)(D2U(dVar32) >> 0x20),
                                      *(undefined4 *)(unsigned)((int)pdVar21 + 0x14));
          }
          else {
            in_xd2 = *(double *)(unsigned)((int)pdVar21 + 0x14);
          }
          if (cVar42 == '\0') {
            dVar32 = CONCAT44D((F32HI(dVar32) + F32LO(dVar32)) *
                                      fVar34,SUB84(dVar32,0));
          }
          else {
            dVar32 = (dVar32 + dVar32) * dVar38;
          }
          if (cVar43 == '\0') {
            (*(undefined4 *)(fr0_ - 0x30)) = (undefined4)(D2U(dVar32) >> 0x20);
            dVar32 = CONCAT44D(*(undefined4 *)(unsigned)(pdVar7 + 3),*(undefined4 *)(unsigned)(pdVar20 + 3));
          }
          else {
            (*(undefined4 *)(fr0_ - 0x30)) = SUB84(dVar32,0);
            dVar32 = pdVar7[3];
            in_xd2 = pdVar20[3];
          }
          if (cVar42 == '\0') {
            dVar32 = CONCAT44D(F32HI(dVar32) + F32LO(dVar32),
                                      SUB84(dVar32,0));
          }
          else {
            dVar32 = dVar32 + dVar32;
          }
          if (cVar43 == '\0') {
            dVar32 = CONCAT44D((int)(D2U(dVar32) >> 0x20),*(undefined4 *)(unsigned)(pdVar21 + 3))
            ;
          }
          else {
            in_xd2 = pdVar21[3];
          }
          if (cVar42 == '\0') {
            in_dr2 = CONCAT44D((F32HI(dVar32) + F32LO(dVar32)) *
                                      fVar34,SUB84(dVar32,0));
          }
          else {
            in_dr2 = (dVar32 + dVar32) * dVar38;
          }
          fVar34 = F32HI(in_dr2);
          (*(float *)(fr0_ - 0x2c)) = fVar34;
          if (cVar43 != '\0') {
            (*(float *)(fr0_ - 0x2c)) = SUB84(in_dr2,0);
            (*(float *)(fr0_ - 0x28)) = fVar34;
          }
          puVar13 = &(*(undefined4 *)(fr0_ - 0x34));
          (vsp = ((unsigned long)(fr0_ - 108)), FUN_8c23bae2(((undefined1 *)(unsigned)0x8c4c2620),puVar13,puVar16,(*(int *)(fr0_ - 0x5c))));
          if (cVar43 != '\0') {
            in_xd6 = *(double *)(unsigned)(puVar11 + 0xc);
          }
          (*(undefined4 *)(fr0_ - 0x48)) = (vsp = ((unsigned long)(fr0_ - 108)), float_to_color_u8(puVar10,puVar13,puVar16,(*(int *)(fr0_ - 0x5c))));
          if (cVar43 == '\0') {
            in_dr4 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4c2630),(*(undefined4 *)(unsigned)(unsigned)0x8c4c2634));
          }
          else {
            in_xd6 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4c2640),(*(undefined4 *)(unsigned)(unsigned)0x8c4c263c));
            in_dr4 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4c2634),(*(undefined4 *)(unsigned)(unsigned)0x8c4c2630));
          }
          (*(undefined4 *)(fr0_ - 0x44)) = (vsp = ((unsigned long)(fr0_ - 108)), float_to_color_u8(puVar10,puVar13,puVar16,(*(int *)(fr0_ - 0x5c))));
          (vsp = ((unsigned long)(fr0_ - 108)), FUN_8c247b20(pdVar7,pdVar20,pdVar21,&(*(undefined4 *)(fr0_ - 0x48))));
        }
      }
LAB_8c250e3e:
    }
  }
  else if (uVar3 == 0x4000) {
    (*(undefined4 *)(unsigned)(unsigned)0x8c4aa51c) = (*(undefined4 *)(unsigned)(unsigned)0x8c4aa51c) + (uint)ar4[1] * 4;
    (*(int *)(fr0_ - 0x5c)) = 0;
    while( true ) {
      uVar37 = SUB84(in_dr6,0);
      uVar35 = SUB84(in_dr4,0);
      uVar3 = (uint)ar4[1];
      if ((int)uVar3 <= (*(int *)(fr0_ - 0x5c))) break;
      puVar12 = puVar24 + 3;
      pdVar22 = (double *)(unsigned)((uint)puVar24[2] * 0x40 + (*(undefined4 *)(unsigned)(unsigned)0x8c4aa510));
      pdVar20 = (double *)(unsigned)((uint)*puVar24 * 0x40 + (*(undefined4 *)(unsigned)(unsigned)0x8c4aa510));
      pdVar21 = (double *)(unsigned)((uint)puVar24[1] * 0x40 + (*(undefined4 *)(unsigned)(unsigned)0x8c4aa510));
      puVar24 = puVar24 + 4;
      pdVar7 = (double *)(unsigned)((uint)*puVar12 * 0x40 + (*(undefined4 *)(unsigned)(unsigned)0x8c4aa510));
      if ((*(uint *)(unsigned)pdVar20 & *(uint *)(unsigned)pdVar21 & *(uint *)(unsigned)pdVar22 & *(uint *)(unsigned)pdVar7 & 0x3f) == 0) {
        if (((*(uint *)(unsigned)pdVar20 | *(uint *)(unsigned)pdVar21 | *(uint *)(unsigned)pdVar22 | *(uint *)(unsigned)pdVar7) & 1) == 0) {
          if (cVar43 == '\0') {
            uVar35 = *(undefined4 *)(unsigned)((int)pdVar21 + 4);
            dVar32 = CONCAT44D(uVar35,*(undefined4 *)(unsigned)((int)pdVar20 + 4));
          }
          else {
            dVar32 = *(double *)(unsigned)((int)pdVar21 + 4);
            in_xd2 = *(double *)(unsigned)((int)pdVar20 + 4);
          }
          if (cVar42 == '\0') {
            dVar32 = CONCAT44D(F32HI(dVar32) - F32LO(dVar32),
                                      SUB84(dVar32,0));
          }
          else {
            dVar32 = dVar32 - dVar32;
          }
          if (cVar43 == '\0') {
            dVar32 = CONCAT44D((int)(D2U(dVar32) >> 0x20),*(undefined4 *)(unsigned)(pdVar22 + 1))
            ;
            dVar30 = CONCAT44D(*(undefined4 *)(unsigned)(pdVar21 + 1),uVar35);
          }
          else {
            in_xd2 = pdVar22[1];
            dVar30 = pdVar21[1];
          }
          fVar34 = F32HI(dVar30);
          if (cVar42 == '\0') {
            dVar32 = CONCAT44D((int)(D2U(dVar32) >> 0x20),F32LO(dVar32) - fVar34);
          }
          else {
            dVar32 = dVar32 - dVar30;
          }
          dVar40 = dVar30;
          if (cVar43 == '\0') {
            in_dr0 = CONCAT44D((int)((ulonglong)in_dr0 >> 0x20),fVar34);
            dVar40 = in_xd0;
          }
          in_xd0 = dVar40;
          if (cVar42 == '\0') {
            dVar32 = CONCAT44D(F32HI(dVar32) * F32LO(dVar32),
                                      SUB84(dVar32,0));
          }
          else {
            dVar32 = dVar32 * dVar32;
          }
          if (cVar43 == '\0') {
            dVar32 = CONCAT44D((int)(D2U(dVar32) >> 0x20),*(undefined4 *)(unsigned)(pdVar20 + 1))
            ;
          }
          else {
            in_xd2 = pdVar20[1];
          }
          if (cVar42 == '\0') {
            dVar40 = CONCAT44D((int)((ulonglong)in_dr0 >> 0x20),
                                      F32LO(in_dr0) - F32LO(dVar32));
          }
          else {
            dVar40 = in_dr0 - dVar32;
          }
          if (cVar43 == '\0') {
            dVar32 = CONCAT44D((int)(D2U(dVar32) >> 0x20),
                                      *(undefined4 *)(unsigned)((int)pdVar22 + 4));
          }
          else {
            in_xd2 = *(double *)(unsigned)((int)pdVar22 + 4);
          }
          if (cVar42 == '\0') {
            dVar32 = CONCAT44D((int)(D2U(dVar32) >> 0x20),
                                      F32LO(dVar32) - F32LO(dVar30));
          }
          else {
            dVar32 = dVar32 - dVar30;
          }
          uVar3 = (uint)(D2U(dVar32) >> 0x20);
          dVar29 = dVar32;
          if (cVar43 == '\0') {
            dVar29 = CONCAT44D(uVar3,SUB84(dVar30,0));
          }
          if (cVar42 == '\0') {
            in_dr0 = CONCAT44D((int)(D2U(dVar40) >> 0x20),
                                      F32LO(dVar40) * F32LO(dVar32));
          }
          else {
            in_dr0 = dVar40 * dVar32;
          }
          in_dr2 = (double)((ulonglong)uVar3 << 0x20);
          if (cVar42 == '\0') {
            fVar34 = F32HI(dVar29) - F32LO(in_dr0);
            in_dr4 = CONCAT44D(fVar34,SUB84(dVar29,0));
            bVar41 = 0.0 < fVar34;
          }
          else {
            in_dr4 = dVar29 - in_dr0;
            bVar41 = in_dr2 < in_dr4;
          }
          (*(undefined4 *)(fr0_ - 0x58)) = 0;
          if (bVar41) {
            if (((*(undefined4 *)(unsigned)(unsigned)0x8c4ab308) & 0x800000) == 0) goto LAB_8c25127e;
            (*(undefined4 *)(fr0_ - 0x58)) = 0x8000;
          }
          pdVar14 = pdVar21 + 2;
          puVar11 = ((undefined1 *)(fr0_ - 0x40));
          pdVar17 = pdVar22 + 2;
          (vsp = ((unsigned long)(fr0_ - 108)), FUN_8c2361a8(pdVar20 + 2,pdVar14,pdVar17,puVar11));
          uVar35 = SUB84(in_dr0,0);
          ({ unsigned long ri0_ = (unsigned long)(pdVar7); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 108)); FUN_8c25ce48(((undefined1 *)(fr0_ - 0x40)),pdVar14,pdVar17,puVar11); });
          if (cVar43 == '\0') {
            dVar32 = CONCAT44D(*(undefined4 *)(unsigned)(pdVar21 + 2),*(undefined4 *)(unsigned)(pdVar22 + 2));
          }
          else {
            dVar32 = pdVar21[2];
            in_xd2 = pdVar22[2];
          }
          puVar11 = ((undefined1 *)(unsigned)0x8c4c2620);
          puVar10 = ((undefined1 *)(fr0_ - 0x40));
          fVar34 = F32LO(dVar38);
          if (cVar42 == '\0') {
            dVar32 = CONCAT44D((F32HI(dVar32) + F32LO(dVar32)) *
                                      fVar34,SUB84(dVar32,0));
          }
          else {
            dVar32 = (dVar32 + dVar32) * dVar38;
          }
          if (cVar43 == '\0') {
            (*(undefined4 *)(fr0_ - 0x34)) = (undefined4)(D2U(dVar32) >> 0x20);
            dVar32 = CONCAT44D(*(undefined4 *)(unsigned)((int)pdVar21 + 0x14),
                                      *(undefined4 *)(unsigned)((int)pdVar22 + 0x14));
          }
          else {
            (*(undefined4 *)(fr0_ - 0x34)) = SUB84(dVar32,0);
            dVar32 = *(double *)(unsigned)((int)pdVar21 + 0x14);
            in_xd2 = *(double *)(unsigned)((int)pdVar22 + 0x14);
          }
          if (cVar42 == '\0') {
            dVar32 = CONCAT44D((F32HI(dVar32) + F32LO(dVar32)) *
                                      fVar34,SUB84(dVar32,0));
          }
          else {
            dVar32 = (dVar32 + dVar32) * dVar38;
          }
          if (cVar43 == '\0') {
            (*(undefined4 *)(fr0_ - 0x30)) = (undefined4)(D2U(dVar32) >> 0x20);
            dVar32 = CONCAT44D(*(undefined4 *)(unsigned)(pdVar21 + 3),*(undefined4 *)(unsigned)(pdVar22 + 3));
          }
          else {
            (*(undefined4 *)(fr0_ - 0x30)) = SUB84(dVar32,0);
            dVar32 = pdVar21[3];
            in_xd2 = pdVar22[3];
          }
          if (cVar42 == '\0') {
            dVar32 = CONCAT44D((F32HI(dVar32) + F32LO(dVar32)) *
                                      fVar34,SUB84(dVar32,0));
          }
          else {
            dVar32 = (dVar32 + dVar32) * dVar38;
          }
          fVar34 = F32HI(dVar32);
          (*(float *)(fr0_ - 0x2c)) = fVar34;
          if (cVar43 != '\0') {
            (*(float *)(fr0_ - 0x2c)) = SUB84(dVar32,0);
            (*(float *)(fr0_ - 0x28)) = fVar34;
          }
          puVar13 = &(*(undefined4 *)(fr0_ - 0x34));
          (vsp = ((unsigned long)(fr0_ - 108)), FUN_8c23bae2(((undefined1 *)(unsigned)0x8c4c2620),puVar13,puVar10,(*(undefined4 *)(fr0_ - 0x58))));
          uVar37 = SUB84(dVar32,0);
          if (cVar43 != '\0') {
            in_xd6 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4c2630),(*(undefined4 *)(unsigned)(unsigned)0x8c4c262c));
          }
          (*(undefined4 *)(fr0_ - 0x48)) = (vsp = ((unsigned long)(fr0_ - 108)), float_to_color_u8(puVar11,puVar13,puVar10,(*(undefined4 *)(fr0_ - 0x58))));
          uVar19 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c2634);
          uVar3 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c263c);
          if (cVar43 != '\0') {
            in_xd6 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4c2640),(*(undefined4 *)(unsigned)(unsigned)0x8c4c263c));
            uVar19 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c2630);
            uVar3 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c2638);
          }
          (*(undefined4 *)(fr0_ - 0x44)) = (vsp = ((unsigned long)(fr0_ - 108)), float_to_color_u8(puVar11,puVar13,puVar10,(*(undefined4 *)(fr0_ - 0x58))));
          uVar36 = SUB84(dVar38,0);
          dVar32 = in_xd14;
          dVar30 = in_xd14;
          if (cVar43 == '\0') {
            dVar32 = in_xd2;
            uVar37 = uVar36;
            dVar30 = CONCAT44D(uVar36,uVar35);
          }
          *(undefined4 *)(unsigned)pdVar20 = 0xe0000000;
          if (cVar43 == '\0') {
            dVar40 = CONCAT44D(*(undefined4 *)(unsigned)(pdVar20 + 6),uVar37);
          }
          else {
            dVar40 = pdVar20[6];
          }
          if (cVar42 == '\0') {
            dVar40 = (double)(ulonglong)
                             (uint)(F32HI(dVar30) *
                                    F32HI(dVar40) + F32LO(dVar40));
          }
          if (cVar43 == '\0') {
            *(int *)(unsigned)(pdVar20 + 4) = SUB84(dVar40,0);
            uVar28 = CONCAT44(*(undefined4 *)(unsigned)((int)pdVar20 + 0x34),uVar36);
            dVar30 = CONCAT44D(uVar36,SUB84(dVar30,0));
          }
          else {
            pdVar20[4] = dVar32;
            uVar28 = *(ulonglong *)(unsigned)((int)pdVar20 + 0x34);
            dVar32 = in_xd14;
            dVar30 = in_xd14;
          }
          if (cVar42 == '\0') {
            uVar28 = (ulonglong)
                     (uint)(F32HI(dVar30) * (float)(uVar28 >> 0x20) +
                           (float)uVar28);
          }
          if (cVar43 == '\0') {
            *(int *)(unsigned)((int)pdVar20 + 0x24) = (int)uVar28;
            dVar30 = CONCAT44D(*(undefined4 *)(unsigned)pdVar20,SUB84(dVar30,0));
            dVar40 = CONCAT44D(*(undefined4 *)(unsigned)((int)pdVar20 + 4),(int)uVar28);
            pdVar20 = pdVar20 + 1;
          }
          else {
            *(double *)(unsigned)((int)pdVar20 + 0x24) = dVar32;
            dVar30 = *pdVar20;
            dVar40 = pdVar20[1];
            pdVar20 = pdVar20 + 2;
          }
          if (cVar43 == '\0') {
            uVar35 = *(undefined4 *)(unsigned)(pdVar20 + 2);
            dVar31 = CONCAT44D(uVar35,uVar19);
            dVar29 = CONCAT44D(*(undefined4 *)(unsigned)((int)pdVar20 + 0x14),uVar3);
            *(undefined4 *)(unsigned)((int)unaff_r8 + 0x1c) = *(undefined4 *)(unsigned)((int)pdVar20 + 0x14);
            *(undefined4 *)(unsigned)(unaff_r8 + 3) = uVar35;
            *(int *)(unsigned)((int)unaff_r8 + 0x14) = (int)(D2U(dVar40) >> 0x20);
            unaff_r8 = unaff_r8 + 2;
            *(int *)(unsigned)unaff_r8 = (int)(D2U(dVar30) >> 0x20);
            dVar40 = (double)(D2U(dVar38) & 0xffffffff);
            dVar30 = CONCAT44D(uVar36,SUB84(dVar30,0));
          }
          else {
            dVar31 = pdVar20[2];
            dVar29 = pdVar20[3];
            unaff_r8[3] = dVar29;
            unaff_r8[2] = dVar31;
            unaff_r8[1] = dVar40;
            *unaff_r8 = dVar30;
            dVar32 = in_xd14;
            dVar30 = in_xd14;
          }
          *(undefined4 *)(unsigned)pdVar21 = 0xe0000000;
          if (cVar43 == '\0') {
            dVar40 = CONCAT44D(*(undefined4 *)(unsigned)(pdVar21 + 6),SUB84(dVar40,0));
          }
          else {
            dVar40 = pdVar21[6];
          }
          if (cVar42 == '\0') {
            dVar40 = (double)(ulonglong)
                             (uint)(F32HI(dVar30) *
                                    F32HI(dVar40) + F32LO(dVar40));
          }
          if (cVar43 == '\0') {
            *(int *)(unsigned)(pdVar21 + 4) = SUB84(dVar40,0);
            uVar28 = CONCAT44(*(undefined4 *)(unsigned)((int)pdVar21 + 0x34),uVar36);
            dVar30 = CONCAT44D(uVar36,SUB84(dVar30,0));
          }
          else {
            pdVar21[4] = dVar32;
            uVar28 = *(ulonglong *)(unsigned)((int)pdVar21 + 0x34);
            dVar32 = in_xd14;
            dVar30 = in_xd14;
          }
          if (cVar42 == '\0') {
            uVar28 = (ulonglong)
                     (uint)(F32HI(dVar30) * (float)(uVar28 >> 0x20) +
                           (float)uVar28);
          }
          if (cVar43 == '\0') {
            *(int *)(unsigned)((int)pdVar21 + 0x24) = (int)uVar28;
            dVar30 = CONCAT44D(*(undefined4 *)(unsigned)pdVar21,SUB84(dVar30,0));
            dVar40 = CONCAT44D(*(undefined4 *)(unsigned)((int)pdVar21 + 4),(int)uVar28);
            pdVar21 = pdVar21 + 1;
          }
          else {
            *(double *)(unsigned)((int)pdVar21 + 0x24) = dVar32;
            dVar30 = *pdVar21;
            dVar40 = pdVar21[1];
            pdVar21 = pdVar21 + 2;
          }
          if (cVar43 == '\0') {
            uVar35 = *(undefined4 *)(unsigned)(pdVar21 + 2);
            dVar31 = CONCAT44D(uVar35,SUB84(dVar31,0));
            dVar29 = CONCAT44D(*(undefined4 *)(unsigned)((int)pdVar21 + 0x14),SUB84(dVar29,0));
            *(undefined4 *)(unsigned)((int)unaff_r8 + 0x3c) = *(undefined4 *)(unsigned)((int)pdVar21 + 0x14);
            *(undefined4 *)(unsigned)(unaff_r8 + 7) = uVar35;
            *(int *)(unsigned)((int)unaff_r8 + 0x34) = (int)(D2U(dVar40) >> 0x20);
            pdVar20 = unaff_r8 + 6;
            *(int *)(unsigned)pdVar20 = (int)(D2U(dVar30) >> 0x20);
            dVar40 = (double)(D2U(dVar38) & 0xffffffff);
            dVar30 = CONCAT44D(uVar36,SUB84(dVar30,0));
          }
          else {
            dVar31 = pdVar21[2];
            dVar29 = pdVar21[3];
            unaff_r8[7] = dVar29;
            unaff_r8[6] = dVar31;
            unaff_r8[5] = dVar40;
            pdVar20 = unaff_r8 + 4;
            *pdVar20 = dVar30;
            dVar30 = in_xd14;
            dVar32 = in_xd14;
          }
          *(undefined4 *)(unsigned)pdVar22 = 0xe0000000;
          *(undefined4 *)(unsigned)(pdVar22 + 5) = (*(undefined4 *)(fr0_ - 0x48));
          *(undefined4 *)(unsigned)((int)pdVar22 + 0x2c) = (*(undefined4 *)(fr0_ - 0x44));
          if (cVar43 == '\0') {
            dVar40 = CONCAT44D(*(undefined4 *)(unsigned)(pdVar22 + 6),SUB84(dVar40,0));
          }
          else {
            dVar40 = pdVar22[6];
          }
          if (cVar42 == '\0') {
            dVar40 = (double)(ulonglong)
                             (uint)(F32HI(dVar30) *
                                    F32HI(dVar40) + F32LO(dVar40));
          }
          if (cVar43 == '\0') {
            *(int *)(unsigned)(pdVar22 + 4) = SUB84(dVar40,0);
            uVar28 = CONCAT44(*(undefined4 *)(unsigned)((int)pdVar22 + 0x34),uVar36);
            dVar30 = CONCAT44D(uVar36,SUB84(dVar30,0));
          }
          else {
            pdVar22[4] = dVar32;
            uVar28 = *(ulonglong *)(unsigned)((int)pdVar22 + 0x34);
            dVar32 = in_xd14;
            dVar30 = in_xd14;
          }
          if (cVar42 == '\0') {
            uVar28 = (ulonglong)
                     (uint)(F32HI(dVar30) * (float)(uVar28 >> 0x20) +
                           (float)uVar28);
          }
          if (cVar43 == '\0') {
            *(int *)(unsigned)((int)pdVar22 + 0x24) = (int)uVar28;
            dVar30 = CONCAT44D(*(undefined4 *)(unsigned)pdVar22,SUB84(dVar30,0));
            dVar40 = CONCAT44D(*(undefined4 *)(unsigned)((int)pdVar22 + 4),(int)uVar28);
            pdVar22 = pdVar22 + 1;
          }
          else {
            *(double *)(unsigned)((int)pdVar22 + 0x24) = dVar32;
            dVar30 = *pdVar22;
            dVar40 = pdVar22[1];
            pdVar22 = pdVar22 + 2;
          }
          if (cVar43 == '\0') {
            uVar35 = *(undefined4 *)(unsigned)(pdVar22 + 2);
            dVar31 = CONCAT44D(uVar35,SUB84(dVar31,0));
            dVar29 = CONCAT44D(*(undefined4 *)(unsigned)((int)pdVar22 + 0x14),SUB84(dVar29,0));
            *(undefined4 *)(unsigned)((int)pdVar20 + 0x3c) = *(undefined4 *)(unsigned)((int)pdVar22 + 0x14);
            *(undefined4 *)(unsigned)(pdVar20 + 7) = uVar35;
            *(int *)(unsigned)((int)pdVar20 + 0x34) = (int)(D2U(dVar40) >> 0x20);
            pdVar20 = pdVar20 + 6;
            *(int *)(unsigned)pdVar20 = (int)(D2U(dVar30) >> 0x20);
            dVar40 = (double)(D2U(dVar38) & 0xffffffff);
          }
          else {
            dVar31 = pdVar22[2];
            dVar29 = pdVar22[3];
            pdVar20[7] = dVar29;
            pdVar20[6] = dVar31;
            pdVar20[5] = dVar40;
            pdVar20 = pdVar20 + 4;
            *pdVar20 = dVar30;
            dVar32 = in_xd14;
          }
          *(undefined4 *)(unsigned)pdVar7 = 0xf0000000;
          dVar33 = in_xd14;
          if (cVar43 == '\0') {
            dVar33 = CONCAT44D(uVar36,SUB84(dVar30,0));
          }
          *(undefined4 *)(unsigned)(pdVar7 + 5) = (*(undefined4 *)(fr0_ - 0x48));
          *(undefined4 *)(unsigned)((int)pdVar7 + 0x2c) = (*(undefined4 *)(fr0_ - 0x44));
          if (cVar43 == '\0') {
            dVar30 = CONCAT44D(*(undefined4 *)(unsigned)(pdVar7 + 6),SUB84(dVar40,0));
          }
          else {
            dVar30 = pdVar7[6];
          }
          if (cVar42 == '\0') {
            dVar30 = (double)(ulonglong)
                             (uint)(F32HI(dVar33) *
                                    F32HI(dVar30) + F32LO(dVar30));
          }
          if (cVar43 == '\0') {
            *(int *)(unsigned)(pdVar7 + 4) = SUB84(dVar30,0);
            uVar28 = CONCAT44(*(undefined4 *)(unsigned)((int)pdVar7 + 0x34),uVar36);
            in_xd2 = dVar32;
            dVar32 = CONCAT44D(uVar36,SUB84(dVar33,0));
          }
          else {
            pdVar7[4] = dVar32;
            uVar28 = *(ulonglong *)(unsigned)((int)pdVar7 + 0x34);
            in_xd2 = in_xd14;
            dVar32 = in_xd14;
          }
          if (cVar42 == '\0') {
            uVar28 = (ulonglong)
                     (uint)(F32HI(dVar32) * (float)(uVar28 >> 0x20) +
                           (float)uVar28);
          }
          if (cVar43 == '\0') {
            *(int *)(unsigned)((int)pdVar7 + 0x24) = (int)uVar28;
            in_dr0 = CONCAT44D(*(undefined4 *)(unsigned)pdVar7,SUB84(dVar32,0));
            in_dr2 = CONCAT44D(*(undefined4 *)(unsigned)((int)pdVar7 + 4),(int)uVar28);
            pdVar7 = pdVar7 + 1;
          }
          else {
            *(double *)(unsigned)((int)pdVar7 + 0x24) = in_xd2;
            in_dr0 = *pdVar7;
            in_dr2 = pdVar7[1];
            pdVar7 = pdVar7 + 2;
          }
          if (cVar43 == '\0') {
            uVar35 = *(undefined4 *)(unsigned)(pdVar7 + 2);
            in_dr4 = CONCAT44D(uVar35,SUB84(dVar31,0));
            in_dr6 = CONCAT44D(*(undefined4 *)(unsigned)((int)pdVar7 + 0x14),SUB84(dVar29,0));
            *(undefined4 *)(unsigned)((int)pdVar20 + 0x3c) = *(undefined4 *)(unsigned)((int)pdVar7 + 0x14);
            *(undefined4 *)(unsigned)(pdVar20 + 7) = uVar35;
            *(int *)(unsigned)((int)pdVar20 + 0x34) = (int)((ulonglong)in_dr2 >> 0x20);
            pdVar20 = pdVar20 + 6;
            *(int *)(unsigned)pdVar20 = (int)((ulonglong)in_dr0 >> 0x20);
          }
          else {
            in_dr4 = pdVar7[2];
            in_dr6 = pdVar7[3];
            pdVar20[7] = in_dr6;
            pdVar20[6] = in_dr4;
            pdVar20[5] = in_dr2;
            pdVar20 = pdVar20 + 4;
            *pdVar20 = in_dr0;
          }
          unaff_r8 = pdVar20 + 4;
          (*(undefined4 *)(unsigned)(unsigned)0x8c4aa520) = (*(undefined4 *)(unsigned)(unsigned)0x8c4aa520) + 4;
        }
        else {
          if (cVar43 == '\0') {
            uVar37 = *(undefined4 *)(unsigned)(pdVar21 + 3);
            uVar35 = *(undefined4 *)(unsigned)((int)pdVar21 + 0x14);
            in_dr8 = CONCAT44D((int)((ulonglong)in_dr8 >> 0x20),
                                      *(undefined4 *)(unsigned)((int)pdVar20 + 0x14));
            in_dr2 = CONCAT44D((int)((ulonglong)in_dr2 >> 0x20),uVar35);
            dVar40 = CONCAT44D(uVar37,SUB84(in_dr0,0));
            dVar32 = in_xd2;
            dVar30 = CONCAT44D(uVar35,*(undefined4 *)(unsigned)(pdVar20 + 3));
          }
          else {
            dVar40 = pdVar21[3];
            dVar32 = *(double *)(unsigned)((int)pdVar21 + 0x14);
            uVar35 = (undefined4)(D2U(dVar32) >> 0x20);
            dVar30 = dVar32;
            in_xd6 = dVar40;
          }
          fVar34 = F32LO(dVar30);
          if (cVar42 == '\0') {
            fVar26 = F32LO(in_dr2) * fVar34;
            dVar40 = CONCAT44D(F32HI(dVar40) * F32LO(in_dr8),
                                      SUB84(dVar40,0));
          }
          else {
            fVar26 = SUB84(in_dr2 * dVar30,0);
            dVar40 = dVar40 * in_dr8;
          }
          if (cVar43 == '\0') {
            in_dr8 = CONCAT44D(*(undefined4 *)(unsigned)(pdVar21 + 2),SUB84(in_dr8,0));
            in_dr6 = CONCAT44D(*(undefined4 *)(unsigned)(pdVar20 + 2),uVar37);
            dVar29 = CONCAT44D(uVar37,fVar26);
          }
          else {
            in_dr8 = pdVar21[2];
            in_dr6 = pdVar20[2];
            dVar29 = in_xd6;
          }
          fVar26 = F32HI(in_dr6);
          if (cVar42 == '\0') {
            dVar29 = CONCAT44D(F32HI(dVar29) * fVar26,SUB84(dVar29,0));
          }
          else {
            dVar29 = dVar29 * in_dr6;
          }
          dVar31 = dVar30;
          if (cVar43 == '\0') {
            dVar40 = CONCAT44D((int)(D2U(dVar40) >> 0x20),uVar35);
            dVar31 = in_xd0;
          }
          in_xd0 = dVar31;
          if (cVar42 == '\0') {
            dVar40 = CONCAT44D(F32HI(dVar40) - F32LO(dVar29),
                                      SUB84(dVar40,0));
          }
          else {
            dVar40 = dVar40 - dVar29;
          }
          uVar35 = (undefined4)((ulonglong)in_dr8 >> 0x20);
          in_xd2 = in_dr8;
          if (cVar43 == '\0') {
            dVar29 = CONCAT44D((int)(D2U(dVar29) >> 0x20),uVar35);
            in_xd2 = dVar32;
          }
          if (cVar42 == '\0') {
            dVar29 = CONCAT44D((int)(D2U(dVar29) >> 0x20),F32LO(dVar29) * fVar34);
          }
          else {
            dVar29 = dVar29 * dVar30;
          }
          dVar32 = in_dr8;
          if (cVar43 == '\0') {
            dVar32 = CONCAT44D(uVar35,SUB84(in_dr12,0));
          }
          if (cVar42 == '\0') {
            in_dr12 = CONCAT44D(F32HI(dVar32) * F32LO(in_dr8),
                                       SUB84(dVar32,0));
            dVar40 = CONCAT44D((int)(D2U(dVar40) >> 0x20),F32LO(dVar40) * fVar26);
            fVar26 = F32LO(dVar29) - F32HI(dVar29);
          }
          else {
            in_dr12 = dVar32 * in_dr8;
            dVar40 = dVar40 * in_dr6;
            fVar26 = SUB84(dVar29 - dVar29,0);
          }
          if (cVar43 == '\0') {
            dVar32 = CONCAT44D(*(undefined4 *)(unsigned)((int)pdVar22 + 0x14),fVar26);
          }
          else {
            dVar32 = *(double *)(unsigned)((int)pdVar22 + 0x14);
          }
          if (cVar42 == '\0') {
            dVar40 = CONCAT44D((int)(D2U(dVar40) >> 0x20),
                                      F32LO(dVar40) - F32HI(in_dr12));
            dVar32 = CONCAT44D(F32HI(dVar32) * F32LO(dVar32),
                                      SUB84(dVar32,0));
          }
          else {
            dVar40 = dVar40 - in_dr12;
            dVar32 = dVar32 * dVar32;
          }
          if (cVar43 == '\0') {
            dVar32 = CONCAT44D((int)(D2U(dVar32) >> 0x20),*(undefined4 *)(unsigned)(pdVar22 + 2))
            ;
          }
          else {
            in_xd2 = pdVar22[2];
          }
          if (cVar42 == '\0') {
            dVar32 = CONCAT44D(F32HI(dVar40) * F32LO(dVar32) +
                                      F32HI(dVar32),SUB84(dVar32,0));
          }
          if (cVar43 == '\0') {
            dVar32 = CONCAT44D((int)(D2U(dVar32) >> 0x20),*(undefined4 *)(unsigned)(pdVar22 + 3))
            ;
            in_dr0 = CONCAT44D(SUB84(dVar40,0),SUB84(dVar40,0));
          }
          else {
            in_xd2 = pdVar22[3];
            in_dr0 = in_xd0;
          }
          if (cVar42 == '\0') {
            dVar32 = (double)((ulonglong)
                              (uint)(F32HI(in_dr0) * F32LO(dVar32) +
                                    F32HI(dVar32)) << 0x20);
          }
          in_dr2 = (double)(D2U(dVar32) & 0xffffffff00000000);
          in_dr4 = in_dr2;
          if (cVar43 == '\0') {
            in_dr4 = CONCAT44D((int)(D2U(dVar32) >> 0x20),fVar34);
          }
          if (cVar42 == '\0') {
            bVar41 = 0.0 < F32HI(in_dr4);
          }
          else {
            bVar41 = in_dr2 < in_dr4;
          }
          (*(undefined4 *)(fr0_ - 0x58)) = 0;
          if (bVar41) {
            if (((*(undefined4 *)(unsigned)(unsigned)0x8c4ab308) & 0x800000) == 0) goto LAB_8c25127e;
            (*(undefined4 *)(fr0_ - 0x58)) = 0x8000;
          }
          pdVar14 = pdVar21 + 2;
          puVar11 = ((undefined1 *)(fr0_ - 0x40));
          pdVar17 = pdVar22 + 2;
          (vsp = ((unsigned long)(fr0_ - 108)), FUN_8c2361a8(pdVar20 + 2,pdVar14,pdVar17,puVar11));
          ({ unsigned long ri0_ = (unsigned long)(pdVar7); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 108)); FUN_8c25ce48(((undefined1 *)(fr0_ - 0x40)),pdVar14,pdVar17,puVar11); });
          if (cVar43 == '\0') {
            dVar32 = CONCAT44D(*(undefined4 *)(unsigned)(pdVar21 + 2),*(undefined4 *)(unsigned)(pdVar22 + 2));
          }
          else {
            dVar32 = pdVar21[2];
            in_xd2 = pdVar22[2];
          }
          puVar11 = ((undefined1 *)(unsigned)0x8c4c2620);
          puVar10 = ((undefined1 *)(fr0_ - 0x40));
          fVar34 = F32LO(dVar38);
          if (cVar42 == '\0') {
            dVar32 = CONCAT44D((F32HI(dVar32) + F32LO(dVar32)) *
                                      fVar34,SUB84(dVar32,0));
          }
          else {
            dVar32 = (dVar32 + dVar32) * dVar38;
          }
          if (cVar43 == '\0') {
            (*(undefined4 *)(fr0_ - 0x34)) = (undefined4)(D2U(dVar32) >> 0x20);
            dVar32 = CONCAT44D(*(undefined4 *)(unsigned)((int)pdVar21 + 0x14),
                                      *(undefined4 *)(unsigned)((int)pdVar22 + 0x14));
          }
          else {
            (*(undefined4 *)(fr0_ - 0x34)) = SUB84(dVar32,0);
            dVar32 = *(double *)(unsigned)((int)pdVar21 + 0x14);
            in_xd2 = *(double *)(unsigned)((int)pdVar22 + 0x14);
          }
          if (cVar42 == '\0') {
            dVar32 = CONCAT44D((F32HI(dVar32) + F32LO(dVar32)) *
                                      fVar34,SUB84(dVar32,0));
          }
          else {
            dVar32 = (dVar32 + dVar32) * dVar38;
          }
          if (cVar43 == '\0') {
            (*(undefined4 *)(fr0_ - 0x30)) = (undefined4)(D2U(dVar32) >> 0x20);
            dVar32 = CONCAT44D(*(undefined4 *)(unsigned)(pdVar21 + 3),*(undefined4 *)(unsigned)(pdVar22 + 3));
          }
          else {
            (*(undefined4 *)(fr0_ - 0x30)) = SUB84(dVar32,0);
            dVar32 = pdVar21[3];
            in_xd2 = pdVar22[3];
          }
          if (cVar42 == '\0') {
            in_dr2 = CONCAT44D((F32HI(dVar32) + F32LO(dVar32)) *
                                      fVar34,SUB84(dVar32,0));
          }
          else {
            in_dr2 = (dVar32 + dVar32) * dVar38;
          }
          fVar34 = F32HI(in_dr2);
          (*(float *)(fr0_ - 0x2c)) = fVar34;
          if (cVar43 != '\0') {
            (*(float *)(fr0_ - 0x2c)) = SUB84(in_dr2,0);
            (*(float *)(fr0_ - 0x28)) = fVar34;
          }
          puVar13 = &(*(undefined4 *)(fr0_ - 0x34));
          (vsp = ((unsigned long)(fr0_ - 108)), FUN_8c23bae2(((undefined1 *)(unsigned)0x8c4c2620),puVar13,puVar10,(*(undefined4 *)(fr0_ - 0x58))));
          if (cVar43 != '\0') {
            in_xd6 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4c2630),(*(undefined4 *)(unsigned)(unsigned)0x8c4c262c));
          }
          (*(undefined4 *)(fr0_ - 0x48)) = (vsp = ((unsigned long)(fr0_ - 108)), float_to_color_u8(puVar11,puVar13,puVar10,(*(undefined4 *)(fr0_ - 0x58))));
          if (cVar43 == '\0') {
            in_dr6 = (double)(ulonglong)(*(undefined4 *)(unsigned)(unsigned)0x8c4c263c);
            in_dr4 = (double)(ulonglong)(*(undefined4 *)(unsigned)(unsigned)0x8c4c2634);
          }
          else {
            in_xd6 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4c2640),(*(undefined4 *)(unsigned)(unsigned)0x8c4c263c));
            in_dr6 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4c263c),(*(undefined4 *)(unsigned)(unsigned)0x8c4c2638));
            in_dr4 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4c2634),(*(undefined4 *)(unsigned)(unsigned)0x8c4c2630));
          }
          (*(undefined4 *)(fr0_ - 0x44)) = (vsp = ((unsigned long)(fr0_ - 108)), float_to_color_u8(puVar11,puVar13,puVar10,(*(undefined4 *)(fr0_ - 0x58))));
          if ((*(uint *)(unsigned)pdVar20 & *(uint *)(unsigned)pdVar21 & *(uint *)(unsigned)pdVar22 & 1) == 0) {
            (vsp = ((unsigned long)(fr0_ - 108)), FUN_8c247b20(pdVar20,pdVar21,pdVar22,&(*(undefined4 *)(fr0_ - 0x48))));
          }
          if ((*(uint *)(unsigned)pdVar21 & *(uint *)(unsigned)pdVar22 & *(uint *)(unsigned)pdVar7 & 1) == 0) {
            (vsp = ((unsigned long)(fr0_ - 108)), FUN_8c247b20(pdVar21,pdVar22,pdVar7,&(*(undefined4 *)(fr0_ - 0x48))));
          }
        }
      }
LAB_8c25127e:
      (*(int *)(fr0_ - 0x5c)) = (*(int *)(fr0_ - 0x5c)) + 1;
    }
  }
  else if (uVar3 == 0x8000) {
    (*(int *)(fr0_ - 0x60)) = 0;
    puVar13 = &(*(undefined4 *)(fr0_ - 0x48));
    while( true ) {
      uVar35 = SUB84(in_dr4,0);
      uVar3 = (uint)ar4[1];
      if ((int)uVar3 <= (*(int *)(fr0_ - 0x60))) break;
      iVar18 = 0;
      puVar25 = puVar24 + 1;
      uVar19 = 0xffffffff;
      uVar23 = (uint)*puVar24;
      uVar3 = 0;
      (*(undefined4 *)(unsigned)(unsigned)0x8c4aa51c) = (*(undefined4 *)(unsigned)(unsigned)0x8c4aa51c) + uVar23;
      puVar12 = puVar25;
      if (uVar23 != 0) {
        do {
          uVar1 = *puVar12;
          puVar12 = puVar12 + 1;
          iVar18 = iVar18 + 1;
          uVar8 = *(uint *)(unsigned)((uint)uVar1 * 0x40 + (*(undefined4 *)(unsigned)(unsigned)0x8c4aa510));
          uVar19 = uVar19 & uVar8;
          uVar3 = uVar3 | uVar8;
        } while (iVar18 < (int)uVar23);
      }
      dVar32 = in_xd0;
      if ((uVar19 & 0x3f) == 0) {
        iVar18 = (int)uVar23 >> 1;
        if ((uVar3 & 1) == 0) {
          iVar4 = (uint)*puVar25 * 0x40 + (*(undefined4 *)(unsigned)(unsigned)0x8c4aa510);
          iVar9 = (uint)puVar24[2] * 0x40 + (*(undefined4 *)(unsigned)(unsigned)0x8c4aa510);
          iVar6 = (uint)puVar24[3] * 0x40 + (*(undefined4 *)(unsigned)(unsigned)0x8c4aa510);
          if (cVar43 == '\0') {
            uVar35 = *(undefined4 *)(unsigned)(iVar9 + 4);
            dVar30 = CONCAT44D(uVar35,*(undefined4 *)(unsigned)(iVar4 + 4));
          }
          else {
            dVar30 = *(double *)(unsigned)(iVar9 + 4);
            in_xd2 = *(double *)(unsigned)(iVar4 + 4);
            in_xd4 = dVar30;
          }
          if (cVar42 == '\0') {
            dVar30 = CONCAT44D(F32HI(dVar30) - F32LO(dVar30),
                                      SUB84(dVar30,0));
          }
          else {
            dVar30 = dVar30 - dVar30;
          }
          if (cVar43 == '\0') {
            dVar30 = CONCAT44D((int)(D2U(dVar30) >> 0x20),*(undefined4 *)(unsigned)(iVar6 + 8));
            dVar40 = CONCAT44D(*(undefined4 *)(unsigned)(iVar9 + 8),uVar35);
          }
          else {
            in_xd2 = *(double *)(unsigned)(iVar6 + 8);
            dVar40 = *(double *)(unsigned)(iVar9 + 8);
          }
          fVar34 = F32HI(dVar40);
          if (cVar42 == '\0') {
            dVar30 = CONCAT44D((int)(D2U(dVar30) >> 0x20),F32LO(dVar30) - fVar34);
          }
          else {
            dVar30 = dVar30 - dVar40;
          }
          dVar32 = dVar40;
          if (cVar43 == '\0') {
            in_dr0 = CONCAT44D((int)((ulonglong)in_dr0 >> 0x20),fVar34);
            dVar32 = in_xd0;
          }
          if (cVar42 == '\0') {
            dVar30 = CONCAT44D(F32HI(dVar30) * F32LO(dVar30),
                                      SUB84(dVar30,0));
          }
          else {
            dVar30 = dVar30 * dVar30;
          }
          if (cVar43 == '\0') {
            dVar30 = CONCAT44D((int)(D2U(dVar30) >> 0x20),*(undefined4 *)(unsigned)(iVar4 + 8));
          }
          else {
            in_xd2 = *(double *)(unsigned)(iVar4 + 8);
          }
          if (cVar42 == '\0') {
            dVar29 = CONCAT44D((int)((ulonglong)in_dr0 >> 0x20),
                                      F32LO(in_dr0) - F32LO(dVar30));
          }
          else {
            dVar29 = in_dr0 - dVar30;
          }
          if (cVar43 == '\0') {
            dVar30 = CONCAT44D((int)(D2U(dVar30) >> 0x20),*(undefined4 *)(unsigned)(iVar6 + 4));
          }
          else {
            in_xd2 = *(double *)(unsigned)(iVar6 + 4);
          }
          if (cVar42 == '\0') {
            dVar30 = CONCAT44D((int)(D2U(dVar30) >> 0x20),
                                      F32LO(dVar30) - F32LO(dVar40));
          }
          else {
            dVar30 = dVar30 - dVar40;
          }
          uVar3 = (uint)(D2U(dVar30) >> 0x20);
          dVar31 = dVar30;
          if (cVar43 == '\0') {
            dVar31 = CONCAT44D(uVar3,SUB84(dVar40,0));
          }
          if (cVar42 == '\0') {
            in_dr0 = CONCAT44D((int)(D2U(dVar29) >> 0x20),
                                      F32LO(dVar29) * F32LO(dVar30));
          }
          else {
            in_dr0 = dVar29 * dVar30;
          }
          in_dr2 = (double)((ulonglong)uVar3 << 0x20);
          if (cVar42 == '\0') {
            fVar34 = F32HI(dVar31) - F32LO(in_dr0);
            in_dr4 = CONCAT44D(fVar34,SUB84(dVar31,0));
            bVar41 = 0.0 < fVar34;
          }
          else {
            in_dr4 = dVar31 - in_dr0;
            bVar41 = in_dr2 < in_dr4;
          }
          (*(undefined4 *)(fr0_ - 0x50)) = 0;
          if (bVar41) {
            if (((*(undefined4 *)(unsigned)(unsigned)0x8c4ab308) & 0x800000) == 0) goto LAB_8c2516e6;
            (*(undefined4 *)(fr0_ - 0x50)) = 0x8000;
          }
          puVar11 = ((undefined1 *)(fr0_ - 0x40));
          (*(undefined4 *)(unsigned)(unsigned)0x8c4aa520) = (*(undefined4 *)(unsigned)(unsigned)0x8c4aa520) + uVar23;
          iVar6 = iVar6 + 0x10;
          iVar9 = iVar9 + 0x10;
          (vsp = ((unsigned long)(fr0_ - 108)), FUN_8c2361a8(iVar4 + 0x10,iVar9,iVar6,puVar11));
          uVar35 = SUB84(in_dr0,0);
          ({ unsigned long ri0_ = (unsigned long)(puVar13); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 108)); FUN_8c25ce48(((undefined1 *)(fr0_ - 0x40)),iVar9,iVar6,puVar11); });
          iVar4 = (uint)puVar25[iVar18 + -1] * 0x40 + (*(undefined4 *)(unsigned)(unsigned)0x8c4aa510);
          if (cVar43 == '\0') {
            (*(undefined4 *)(fr0_ - 0x34)) = *(undefined4 *)(unsigned)(iVar4 + 0x10);
            (*(undefined4 *)(fr0_ - 0x30)) = *(undefined4 *)(unsigned)(iVar4 + 0x14);
            (*(float *)(fr0_ - 0x2c)) = *(float *)(unsigned)(iVar4 + 0x18);
          }
          else {
            (*(undefined4 *)(fr0_ - 0x34)) = (undefined4)*(undefined8 *)(unsigned)(iVar4 + 0x10);
            (*(undefined4 *)(fr0_ - 0x30)) = (undefined4)*(undefined8 *)(unsigned)(iVar4 + 0x14);
            in_xd2 = *(double *)(unsigned)(iVar4 + 0x18);
            (*(float *)(fr0_ - 0x2c)) = SUB84(in_xd2,0);
            (*(float *)(fr0_ - 0x28)) = F32HI(in_xd2);
          }
          iVar18 = (uint)puVar25[iVar18] * 0x40 + (*(undefined4 *)(unsigned)(unsigned)0x8c4aa510);
          if (cVar43 == '\0') {
            dVar30 = CONCAT44D((*(undefined4 *)(fr0_ - 0x34)),*(undefined4 *)(unsigned)(iVar18 + 0x10));
          }
          else {
            in_xd2 = *(double *)(unsigned)(iVar18 + 0x10);
            dVar30 = CONCAT44D((*(undefined4 *)(fr0_ - 0x30)),(*(undefined4 *)(fr0_ - 0x34)));
          }
          if (cVar42 == '\0') {
            dVar30 = CONCAT44D(F32HI(dVar30) + F32LO(dVar30),
                                      SUB84(dVar30,0));
          }
          else {
            dVar30 = dVar30 + dVar30;
          }
          uVar37 = (undefined4)(D2U(dVar30) >> 0x20);
          if (cVar43 == '\0') {
            dVar30 = CONCAT44D((*(undefined4 *)(fr0_ - 0x30)),*(undefined4 *)(unsigned)(iVar18 + 0x14));
            (*(undefined4 *)(fr0_ - 0x34)) = uVar37;
          }
          else {
            (*(undefined4 *)(fr0_ - 0x34)) = SUB84(dVar30,0);
            in_xd2 = *(double *)(unsigned)(iVar18 + 0x14);
            dVar30 = CONCAT44D((*(float *)(fr0_ - 0x2c)),uVar37);
          }
          if (cVar42 == '\0') {
            dVar30 = CONCAT44D(F32HI(dVar30) + F32LO(dVar30),
                                      SUB84(dVar30,0));
          }
          else {
            dVar30 = dVar30 + dVar30;
          }
          uVar37 = (undefined4)(D2U(dVar30) >> 0x20);
          if (cVar43 == '\0') {
            dVar30 = CONCAT44D((*(float *)(fr0_ - 0x2c)),*(undefined4 *)(unsigned)(iVar18 + 0x18));
            (*(undefined4 *)(fr0_ - 0x30)) = uVar37;
          }
          else {
            (*(undefined4 *)(fr0_ - 0x30)) = SUB84(dVar30,0);
            in_xd2 = *(double *)(unsigned)(iVar18 + 0x18);
            dVar30 = CONCAT44D((*(float *)(fr0_ - 0x28)),uVar37);
          }
          if (cVar42 == '\0') {
            dVar30 = CONCAT44D(F32HI(dVar30) + F32LO(dVar30),
                                      SUB84(dVar30,0));
          }
          else {
            dVar30 = dVar30 + dVar30;
          }
          fVar34 = F32HI(dVar30);
          if (cVar43 == '\0') {
            dVar30 = CONCAT44D(fVar34,(*(undefined4 *)(fr0_ - 0x34)));
            (*(float *)(fr0_ - 0x2c)) = fVar34;
          }
          else {
            (*(float *)(fr0_ - 0x2c)) = SUB84(dVar30,0);
            in_xd2 = CONCAT44D((*(undefined4 *)(fr0_ - 0x30)),(*(undefined4 *)(fr0_ - 0x34)));
            (*(float *)(fr0_ - 0x28)) = fVar34;
          }
          fVar34 = F32LO(dVar38);
          if (cVar42 == '\0') {
            dVar30 = CONCAT44D((int)(D2U(dVar30) >> 0x20),F32LO(dVar30) * fVar34);
          }
          else {
            dVar30 = dVar30 * dVar38;
          }
          if (cVar43 == '\0') {
            (*(undefined4 *)(fr0_ - 0x34)) = SUB84(dVar30,0);
            dVar30 = CONCAT44D((int)(D2U(dVar30) >> 0x20),(*(undefined4 *)(fr0_ - 0x30)));
          }
          else {
            (*(undefined4 *)(fr0_ - 0x34)) = SUB84(in_xd2,0);
            (*(undefined4 *)(fr0_ - 0x30)) = (undefined4)((ulonglong)in_xd2 >> 0x20);
            in_xd2 = CONCAT44D((*(float *)(fr0_ - 0x2c)),(*(undefined4 *)(fr0_ - 0x30)));
          }
          if (cVar42 == '\0') {
            dVar30 = CONCAT44D((int)(D2U(dVar30) >> 0x20),F32LO(dVar30) * fVar34);
          }
          else {
            dVar30 = dVar30 * dVar38;
          }
          if (cVar43 == '\0') {
            (*(undefined4 *)(fr0_ - 0x30)) = SUB84(dVar30,0);
            dVar30 = CONCAT44D((int)(D2U(dVar30) >> 0x20),(*(float *)(fr0_ - 0x2c)));
          }
          else {
            (*(undefined4 *)(fr0_ - 0x30)) = SUB84(in_xd2,0);
            (*(float *)(fr0_ - 0x2c)) = F32HI(in_xd2);
            in_xd2 = CONCAT44D((*(float *)(fr0_ - 0x28)),(*(float *)(fr0_ - 0x2c)));
          }
          if (cVar42 == '\0') {
            fVar34 = F32LO(dVar30) * fVar34;
          }
          else {
            fVar34 = SUB84(dVar30 * dVar38,0);
          }
          puVar11 = ((undefined1 *)(unsigned)0x8c4c2620);
          puVar10 = ((undefined1 *)(fr0_ - 0x40));
          (*(float *)(fr0_ - 0x2c)) = fVar34;
          if (cVar43 != '\0') {
            (*(float *)(fr0_ - 0x2c)) = SUB84(in_xd2,0);
            (*(float *)(fr0_ - 0x28)) = F32HI(in_xd2);
          }
          puVar15 = &(*(undefined4 *)(fr0_ - 0x34));
          (vsp = ((unsigned long)(fr0_ - 108)), FUN_8c23bae2(((undefined1 *)(unsigned)0x8c4c2620),puVar15,puVar10,(*(undefined4 *)(fr0_ - 0x50))));
          if (cVar43 != '\0') {
            in_xd4 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4c2628),(*(undefined4 *)(unsigned)(unsigned)0x8c4c2624));
          }
          puVar44 = puVar13;
          uVar37 = (vsp = ((unsigned long)(fr0_ - 108)), float_to_color_u8(puVar11,puVar15,puVar10,(*(undefined4 *)(fr0_ - 0x50))));
          *puVar13 = uVar37;
          uVar19 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c2634);
          uVar3 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c263c);
          if (cVar43 != '\0') {
            in_xd4 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4c2638),(*(undefined4 *)(unsigned)(unsigned)0x8c4c2634));
            uVar19 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c2630);
            uVar3 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c2638);
          }
          (*(undefined4 *)(fr0_ - 0x44)) = (vsp = ((unsigned long)(fr0_ - 108)), float_to_color_u8(puVar11,puVar15,puVar10,(*(undefined4 *)(fr0_ - 0x50))));
          fVar26 = F32LO(dVar38);
          dVar30 = in_xd14;
          if (cVar43 == '\0') {
            dVar30 = CONCAT44D(fVar26,uVar35);
          }
          dVar40 = in_xd14;
          if (cVar43 == '\0') {
            dVar40 = in_xd2;
            fVar34 = fVar26;
          }
          pdVar7 = (double *)(unsigned)((uint)*puVar25 * 0x40 + (*(undefined4 *)(unsigned)(unsigned)0x8c4aa510));
          *(undefined4 *)(unsigned)pdVar7 = 0xe0000000;
          if (cVar43 == '\0') {
            dVar29 = CONCAT44D(*(undefined4 *)(unsigned)(pdVar7 + 6),fVar34);
          }
          else {
            dVar29 = pdVar7[6];
          }
          if (cVar42 == '\0') {
            dVar29 = (double)(ulonglong)
                             (uint)(F32HI(dVar30) *
                                    F32HI(dVar29) + F32LO(dVar29));
          }
          if (cVar43 == '\0') {
            *(int *)(unsigned)(pdVar7 + 4) = SUB84(dVar29,0);
            uVar28 = CONCAT44(*(undefined4 *)(unsigned)((int)pdVar7 + 0x34),fVar26);
            dVar30 = CONCAT44D(fVar26,SUB84(dVar30,0));
          }
          else {
            pdVar7[4] = dVar40;
            uVar28 = *(ulonglong *)(unsigned)((int)pdVar7 + 0x34);
            dVar40 = in_xd14;
            dVar30 = in_xd14;
          }
          if (cVar42 == '\0') {
            uVar28 = (ulonglong)
                     (uint)(F32HI(dVar30) * (float)(uVar28 >> 0x20) +
                           (float)uVar28);
          }
          if (cVar43 == '\0') {
            *(int *)(unsigned)((int)pdVar7 + 0x24) = (int)uVar28;
            dVar30 = CONCAT44D(*(undefined4 *)(unsigned)pdVar7,SUB84(dVar30,0));
            dVar29 = CONCAT44D(*(undefined4 *)(unsigned)((int)pdVar7 + 4),(int)uVar28);
            pdVar7 = pdVar7 + 1;
          }
          else {
            *(double *)(unsigned)((int)pdVar7 + 0x24) = dVar40;
            dVar30 = *pdVar7;
            dVar29 = pdVar7[1];
            pdVar7 = pdVar7 + 2;
          }
          if (cVar43 == '\0') {
            uVar35 = *(undefined4 *)(unsigned)(pdVar7 + 2);
            dVar33 = CONCAT44D(uVar35,uVar19);
            dVar31 = CONCAT44D(*(undefined4 *)(unsigned)((int)pdVar7 + 0x14),uVar3);
            *(undefined4 *)(unsigned)((int)unaff_r8 + 0x1c) = *(undefined4 *)(unsigned)((int)pdVar7 + 0x14);
            *(undefined4 *)(unsigned)(unaff_r8 + 3) = uVar35;
            *(int *)(unsigned)((int)unaff_r8 + 0x14) = (int)(D2U(dVar29) >> 0x20);
            unaff_r8 = unaff_r8 + 2;
            *(int *)(unsigned)unaff_r8 = (int)(D2U(dVar30) >> 0x20);
          }
          else {
            dVar33 = pdVar7[2];
            dVar31 = pdVar7[3];
            unaff_r8[3] = dVar31;
            unaff_r8[2] = dVar33;
            unaff_r8[1] = dVar29;
            *unaff_r8 = dVar30;
          }
          puVar12 = puVar24 + 3;
          dVar39 = in_xd14;
          dVar2 = in_xd14;
          if (cVar43 == '\0') {
            dVar29 = (double)(D2U(dVar38) & 0xffffffff);
            dVar39 = dVar40;
            dVar2 = CONCAT44D(fVar26,SUB84(dVar30,0));
          }
          pdVar7 = (double *)(unsigned)((uint)puVar24[2] * 0x40 + (*(undefined4 *)(unsigned)(unsigned)0x8c4aa510));
          *(undefined4 *)(unsigned)pdVar7 = 0xe0000000;
          if (cVar43 == '\0') {
            dVar30 = CONCAT44D(*(undefined4 *)(unsigned)(pdVar7 + 6),SUB84(dVar29,0));
          }
          else {
            dVar30 = pdVar7[6];
          }
          if (cVar42 == '\0') {
            dVar30 = (double)(ulonglong)
                             (uint)(F32HI(dVar2) *
                                    F32HI(dVar30) + F32LO(dVar30));
          }
          if (cVar43 == '\0') {
            *(int *)(unsigned)(pdVar7 + 4) = SUB84(dVar30,0);
            uVar28 = CONCAT44(*(undefined4 *)(unsigned)((int)pdVar7 + 0x34),fVar26);
            dVar30 = CONCAT44D(fVar26,SUB84(dVar2,0));
          }
          else {
            pdVar7[4] = dVar39;
            uVar28 = *(ulonglong *)(unsigned)((int)pdVar7 + 0x34);
            dVar39 = in_xd14;
            dVar30 = in_xd14;
          }
          if (cVar42 == '\0') {
            uVar28 = (ulonglong)
                     (uint)(F32HI(dVar30) * (float)(uVar28 >> 0x20) +
                           (float)uVar28);
          }
          if (cVar43 == '\0') {
            *(int *)(unsigned)((int)pdVar7 + 0x24) = (int)uVar28;
            dVar30 = CONCAT44D(*(undefined4 *)(unsigned)pdVar7,SUB84(dVar30,0));
            dVar40 = CONCAT44D(*(undefined4 *)(unsigned)((int)pdVar7 + 4),(int)uVar28);
            pdVar7 = pdVar7 + 1;
          }
          else {
            *(double *)(unsigned)((int)pdVar7 + 0x24) = dVar39;
            dVar30 = *pdVar7;
            dVar40 = pdVar7[1];
            pdVar7 = pdVar7 + 2;
          }
          if (cVar43 == '\0') {
            uVar35 = *(undefined4 *)(unsigned)(pdVar7 + 2);
            dVar33 = CONCAT44D(uVar35,SUB84(dVar33,0));
            dVar29 = CONCAT44D(*(undefined4 *)(unsigned)((int)pdVar7 + 0x14),SUB84(dVar31,0));
            *(undefined4 *)(unsigned)((int)unaff_r8 + 0x3c) = *(undefined4 *)(unsigned)((int)pdVar7 + 0x14);
            *(undefined4 *)(unsigned)(unaff_r8 + 7) = uVar35;
            *(int *)(unsigned)((int)unaff_r8 + 0x34) = (int)(D2U(dVar40) >> 0x20);
            pdVar7 = unaff_r8 + 6;
            *(int *)(unsigned)pdVar7 = (int)(D2U(dVar30) >> 0x20);
          }
          else {
            dVar33 = pdVar7[2];
            dVar29 = pdVar7[3];
            unaff_r8[7] = dVar29;
            unaff_r8[6] = dVar33;
            unaff_r8[5] = dVar40;
            pdVar7 = unaff_r8 + 4;
            *pdVar7 = dVar30;
          }
          uVar35 = SUB84(dVar29,0);
          uVar37 = SUB84(dVar33,0);
          pdVar7 = pdVar7 + 4;
          (*(unsigned *)(fr0_ - 0x68) = (unsigned)(unsigned long)((uint *)(unsigned)0x2));
          if (2 < (int)(uVar23 - 1)) {
            do {
              fVar34 = F32LO(dVar40);
              uVar1 = *puVar12;
              puVar12 = puVar12 + 1;
              dVar31 = in_xd14;
              dVar40 = in_xd14;
              if (cVar43 == '\0') {
                dVar31 = dVar39;
                fVar34 = fVar26;
                dVar40 = CONCAT44D(fVar26,SUB84(dVar30,0));
              }
              pdVar20 = (double *)(unsigned)((uint)uVar1 * 0x40 + (*(undefined4 *)(unsigned)(unsigned)0x8c4aa510));
              *(undefined4 *)(unsigned)pdVar20 = 0xe0000000;
              *(undefined4 *)(unsigned)(pdVar20 + 5) = *puVar44;
              *(undefined4 *)(unsigned)((int)pdVar20 + 0x2c) = (*(undefined4 *)(fr0_ - 0x44));
              if (cVar43 == '\0') {
                dVar30 = CONCAT44D(*(undefined4 *)(unsigned)(pdVar20 + 6),fVar34);
              }
              else {
                dVar30 = pdVar20[6];
              }
              if (cVar42 == '\0') {
                dVar30 = (double)(ulonglong)
                                 (uint)(F32HI(dVar40) *
                                        F32HI(dVar30) + F32LO(dVar30));
              }
              if (cVar43 == '\0') {
                *(int *)(unsigned)(pdVar20 + 4) = SUB84(dVar30,0);
                uVar28 = CONCAT44(*(undefined4 *)(unsigned)((int)pdVar20 + 0x34),fVar26);
                dVar39 = dVar31;
                dVar30 = CONCAT44D(fVar26,SUB84(dVar40,0));
              }
              else {
                pdVar20[4] = dVar31;
                uVar28 = *(ulonglong *)(unsigned)((int)pdVar20 + 0x34);
                dVar39 = in_xd14;
                dVar30 = in_xd14;
              }
              if (cVar42 == '\0') {
                uVar28 = (ulonglong)
                         (uint)(F32HI(dVar30) * (float)(uVar28 >> 0x20) +
                               (float)uVar28);
              }
              if (cVar43 == '\0') {
                *(int *)(unsigned)((int)pdVar20 + 0x24) = (int)uVar28;
                dVar30 = CONCAT44D(*(undefined4 *)(unsigned)pdVar20,SUB84(dVar30,0));
                dVar40 = CONCAT44D(*(undefined4 *)(unsigned)((int)pdVar20 + 4),(int)uVar28);
                pdVar20 = pdVar20 + 1;
              }
              else {
                *(double *)(unsigned)((int)pdVar20 + 0x24) = dVar39;
                dVar30 = *pdVar20;
                dVar40 = pdVar20[1];
                pdVar20 = pdVar20 + 2;
              }
              if (cVar43 == '\0') {
                uVar35 = *(undefined4 *)(unsigned)(pdVar20 + 2);
                dVar33 = CONCAT44D(uVar35,SUB84(dVar33,0));
                dVar29 = CONCAT44D(*(undefined4 *)(unsigned)((int)pdVar20 + 0x14),SUB84(dVar29,0));
                *(undefined4 *)(unsigned)((int)pdVar7 + 0x1c) = *(undefined4 *)(unsigned)((int)pdVar20 + 0x14);
                *(undefined4 *)(unsigned)(pdVar7 + 3) = uVar35;
                *(int *)(unsigned)((int)pdVar7 + 0x14) = (int)(D2U(dVar40) >> 0x20);
                pdVar7 = pdVar7 + 2;
                *(int *)(unsigned)pdVar7 = (int)(D2U(dVar30) >> 0x20);
              }
              else {
                dVar33 = pdVar20[2];
                dVar29 = pdVar20[3];
                pdVar7[3] = dVar29;
                pdVar7[2] = dVar33;
                pdVar7[1] = dVar40;
                *pdVar7 = dVar30;
              }
              uVar35 = SUB84(dVar29,0);
              uVar37 = SUB84(dVar33,0);
              pdVar7 = pdVar7 + 4;
              (*(unsigned *)(fr0_ - 0x68) = (unsigned)(unsigned long)((uint *)(unsigned)((int)((uint *)(unsigned long)*(unsigned *)(fr0_ - 0x68)) + 1)));
            } while ((int)((uint *)(unsigned long)*(unsigned *)(fr0_ - 0x68)) < (int)(uVar23 - 1));
          }
          fVar34 = F32LO(dVar40);
          puVar24 = puVar12 + 1;
          pdVar20 = (double *)(unsigned)((uint)*puVar12 * 0x40 + (*(undefined4 *)(unsigned)(unsigned)0x8c4aa510));
          *(undefined4 *)(unsigned)pdVar20 = 0xf0000000;
          dVar40 = in_xd14;
          in_xd2 = in_xd14;
          if (cVar43 == '\0') {
            dVar40 = CONCAT44D(fVar26,SUB84(dVar30,0));
            in_xd2 = dVar39;
            fVar34 = fVar26;
          }
          *(undefined4 *)(unsigned)(pdVar20 + 5) = *puVar44;
          *(undefined4 *)(unsigned)((int)pdVar20 + 0x2c) = (*(undefined4 *)(fr0_ - 0x44));
          if (cVar43 == '\0') {
            dVar30 = CONCAT44D(*(undefined4 *)(unsigned)(pdVar20 + 6),fVar34);
          }
          else {
            dVar30 = pdVar20[6];
          }
          if (cVar42 == '\0') {
            dVar30 = (double)(ulonglong)
                             (uint)(F32HI(dVar40) *
                                    F32HI(dVar30) + F32LO(dVar30));
          }
          if (cVar43 == '\0') {
            *(int *)(unsigned)(pdVar20 + 4) = SUB84(dVar30,0);
            uVar28 = CONCAT44(*(undefined4 *)(unsigned)((int)pdVar20 + 0x34),fVar26);
            dVar30 = CONCAT44D(fVar26,SUB84(dVar40,0));
          }
          else {
            pdVar20[4] = in_xd2;
            uVar28 = *(ulonglong *)(unsigned)((int)pdVar20 + 0x34);
            in_xd2 = in_xd14;
            dVar30 = in_xd14;
          }
          if (cVar42 == '\0') {
            uVar28 = (ulonglong)
                     (uint)(F32HI(dVar30) * (float)(uVar28 >> 0x20) +
                           (float)uVar28);
          }
          if (cVar43 == '\0') {
            *(int *)(unsigned)((int)pdVar20 + 0x24) = (int)uVar28;
            in_dr0 = CONCAT44D(*(undefined4 *)(unsigned)pdVar20,SUB84(dVar30,0));
            in_dr2 = CONCAT44D(*(undefined4 *)(unsigned)((int)pdVar20 + 4),(int)uVar28);
            pdVar20 = pdVar20 + 1;
          }
          else {
            *(double *)(unsigned)((int)pdVar20 + 0x24) = in_xd2;
            in_dr0 = *pdVar20;
            in_dr2 = pdVar20[1];
            pdVar20 = pdVar20 + 2;
          }
          if (cVar43 == '\0') {
            uVar36 = *(undefined4 *)(unsigned)(pdVar20 + 2);
            in_dr4 = CONCAT44D(uVar36,uVar37);
            in_dr6 = CONCAT44D(*(undefined4 *)(unsigned)((int)pdVar20 + 0x14),uVar35);
            *(undefined4 *)(unsigned)((int)pdVar7 + 0x1c) = *(undefined4 *)(unsigned)((int)pdVar20 + 0x14);
            *(undefined4 *)(unsigned)(pdVar7 + 3) = uVar36;
            *(int *)(unsigned)((int)pdVar7 + 0x14) = (int)((ulonglong)in_dr2 >> 0x20);
            pdVar7 = pdVar7 + 2;
            *(int *)(unsigned)pdVar7 = (int)((ulonglong)in_dr0 >> 0x20);
          }
          else {
            in_dr4 = pdVar20[2];
            in_dr6 = pdVar20[3];
            pdVar7[3] = in_dr6;
            pdVar7[2] = in_dr4;
            pdVar7[1] = in_dr2;
            *pdVar7 = in_dr0;
          }
          unaff_r8 = pdVar7 + 4;
        }
        else {
          iVar4 = (uint)*puVar25 * 0x40 + (*(undefined4 *)(unsigned)(unsigned)0x8c4aa510);
          iVar9 = (uint)puVar24[2] * 0x40 + (*(undefined4 *)(unsigned)(unsigned)0x8c4aa510);
          iVar6 = (uint)puVar24[3] * 0x40 + (*(undefined4 *)(unsigned)(unsigned)0x8c4aa510);
          if (cVar43 == '\0') {
            in_dr6 = CONCAT44D(*(undefined4 *)(unsigned)(iVar4 + 0x14),SUB84(in_dr6,0));
            dVar30 = CONCAT44D(*(undefined4 *)(unsigned)(iVar9 + 0x18),SUB84(in_dr0,0));
            dVar32 = CONCAT44D(*(undefined4 *)(unsigned)(iVar9 + 0x14),*(undefined4 *)(unsigned)(iVar9 + 0x18));
            dVar40 = CONCAT44D(*(undefined4 *)(unsigned)(iVar4 + 0x18),uVar35);
          }
          else {
            dVar30 = *(double *)(unsigned)(iVar9 + 0x18);
            in_dr6 = *(double *)(unsigned)(iVar4 + 0x14);
            dVar32 = *(double *)(unsigned)(iVar9 + 0x14);
            dVar40 = *(double *)(unsigned)(iVar4 + 0x18);
            in_xd8 = dVar30;
          }
          fVar34 = F32HI(in_dr6);
          if (cVar42 == '\0') {
            dVar30 = CONCAT44D(F32HI(dVar30) * fVar34,SUB84(dVar30,0));
          }
          else {
            dVar30 = dVar30 * in_dr6;
          }
          uVar35 = (undefined4)(D2U(dVar32) >> 0x20);
          dVar29 = dVar32;
          if (cVar43 == '\0') {
            in_dr2 = CONCAT44D((int)((ulonglong)in_dr2 >> 0x20),uVar35);
            dVar29 = in_xd2;
          }
          fVar26 = F32HI(dVar40);
          if (cVar42 == '\0') {
            fVar27 = F32LO(in_dr2) * fVar26;
          }
          else {
            fVar27 = SUB84(in_dr2 * dVar40,0);
          }
          if (cVar43 == '\0') {
            dVar40 = CONCAT44D(fVar26,*(undefined4 *)(unsigned)(iVar9 + 0x10));
            in_dr6 = CONCAT44D(fVar34,*(undefined4 *)(unsigned)(iVar4 + 0x10));
            dVar31 = CONCAT44D(SUB84(dVar32,0),fVar27);
          }
          else {
            in_xd4 = *(double *)(unsigned)(iVar9 + 0x10);
            dVar31 = in_xd8;
          }
          if (cVar42 == '\0') {
            dVar31 = CONCAT44D(F32HI(dVar31) * F32LO(in_dr6),
                                      SUB84(dVar31,0));
          }
          else {
            dVar31 = dVar31 * in_dr6;
          }
          if (cVar43 == '\0') {
            dVar30 = CONCAT44D((int)(D2U(dVar30) >> 0x20),uVar35);
            dVar32 = in_xd0;
          }
          if (cVar42 == '\0') {
            dVar30 = CONCAT44D(F32HI(dVar30) - F32LO(dVar31),
                                      SUB84(dVar30,0));
          }
          else {
            dVar30 = dVar30 - dVar31;
          }
          uVar35 = SUB84(dVar40,0);
          in_xd2 = in_xd4;
          if (cVar43 == '\0') {
            dVar31 = CONCAT44D((int)(D2U(dVar31) >> 0x20),uVar35);
            in_xd2 = dVar29;
          }
          if (cVar42 == '\0') {
            dVar31 = CONCAT44D((int)(D2U(dVar31) >> 0x20),
                                      F32LO(dVar31) * F32HI(dVar40));
          }
          else {
            dVar31 = dVar31 * dVar40;
          }
          dVar40 = in_xd4;
          if (cVar43 == '\0') {
            dVar40 = CONCAT44D(uVar35,SUB84(in_dr12,0));
          }
          if (cVar42 == '\0') {
            dVar30 = CONCAT44D((int)(D2U(dVar30) >> 0x20),
                                      F32LO(dVar30) * F32LO(in_dr6));
            in_dr12 = CONCAT44D(F32HI(dVar40) *
                                       F32HI(in_dr6),SUB84(dVar40,0));
            fVar34 = F32LO(dVar31) - F32HI(dVar31);
          }
          else {
            dVar30 = dVar30 * in_dr6;
            in_dr12 = dVar40 * in_dr6;
            fVar34 = SUB84(dVar31 - dVar31,0);
          }
          if (cVar43 == '\0') {
            dVar40 = CONCAT44D(*(undefined4 *)(unsigned)(iVar6 + 0x14),fVar34);
          }
          else {
            dVar40 = *(double *)(unsigned)(iVar6 + 0x14);
          }
          if (cVar42 == '\0') {
            dVar30 = CONCAT44D((int)(D2U(dVar30) >> 0x20),
                                      F32LO(dVar30) - F32HI(in_dr12));
            dVar40 = CONCAT44D(F32HI(dVar40) * F32LO(dVar40),
                                      SUB84(dVar40,0));
          }
          else {
            dVar30 = dVar30 - in_dr12;
            dVar40 = dVar40 * dVar40;
          }
          if (cVar43 == '\0') {
            dVar40 = CONCAT44D((int)(D2U(dVar40) >> 0x20),*(undefined4 *)(unsigned)(iVar6 + 0x10)
                                     );
          }
          else {
            in_xd2 = *(double *)(unsigned)(iVar6 + 0x10);
          }
          if (cVar42 == '\0') {
            dVar40 = CONCAT44D(F32HI(dVar30) * F32LO(dVar40) +
                                      F32HI(dVar40),SUB84(dVar40,0));
          }
          if (cVar43 == '\0') {
            dVar40 = CONCAT44D((int)(D2U(dVar40) >> 0x20),*(undefined4 *)(unsigned)(iVar6 + 0x18)
                                     );
            in_dr0 = CONCAT44D(SUB84(dVar30,0),SUB84(dVar30,0));
          }
          else {
            in_xd2 = *(double *)(unsigned)(iVar6 + 0x18);
            in_dr0 = dVar32;
          }
          if (cVar42 == '\0') {
            dVar40 = (double)((ulonglong)
                              (uint)(F32HI(in_dr0) * F32LO(dVar40) +
                                    F32HI(dVar40)) << 0x20);
          }
          in_dr2 = (double)(D2U(dVar40) & 0xffffffff00000000);
          in_dr4 = in_dr2;
          if (cVar43 == '\0') {
            in_dr4 = CONCAT44D((int)(D2U(dVar40) >> 0x20),uVar35);
          }
          if (cVar42 == '\0') {
            bVar41 = 0.0 < F32HI(in_dr4);
          }
          else {
            bVar41 = in_dr2 < in_dr4;
          }
          (*(undefined4 *)(fr0_ - 0x50)) = 0;
          if (bVar41) {
            if (((*(undefined4 *)(unsigned)(unsigned)0x8c4ab308) & 0x800000) == 0) goto LAB_8c2516e6;
            (*(undefined4 *)(fr0_ - 0x50)) = 0x8000;
          }
          puVar11 = ((undefined1 *)(fr0_ - 0x40));
          iVar6 = iVar6 + 0x10;
          iVar9 = iVar9 + 0x10;
          (vsp = ((unsigned long)(fr0_ - 108)), FUN_8c2361a8(iVar4 + 0x10,iVar9,iVar6,puVar11));
          ({ unsigned long ri0_ = (unsigned long)(puVar13); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 108)); FUN_8c25ce48(((undefined1 *)(fr0_ - 0x40)),iVar9,iVar6,puVar11); });
          iVar4 = (uint)puVar25[iVar18 + -1] * 0x40 + (*(undefined4 *)(unsigned)(unsigned)0x8c4aa510);
          if (cVar43 == '\0') {
            (*(undefined4 *)(fr0_ - 0x34)) = *(undefined4 *)(unsigned)(iVar4 + 0x10);
            (*(undefined4 *)(fr0_ - 0x30)) = *(undefined4 *)(unsigned)(iVar4 + 0x14);
            (*(float *)(fr0_ - 0x2c)) = *(float *)(unsigned)(iVar4 + 0x18);
          }
          else {
            (*(undefined4 *)(fr0_ - 0x34)) = (undefined4)*(undefined8 *)(unsigned)(iVar4 + 0x10);
            (*(undefined4 *)(fr0_ - 0x30)) = (undefined4)*(undefined8 *)(unsigned)(iVar4 + 0x14);
            in_xd2 = *(double *)(unsigned)(iVar4 + 0x18);
            (*(float *)(fr0_ - 0x2c)) = SUB84(in_xd2,0);
            (*(float *)(fr0_ - 0x28)) = F32HI(in_xd2);
          }
          iVar18 = (uint)puVar25[iVar18] * 0x40 + (*(undefined4 *)(unsigned)(unsigned)0x8c4aa510);
          if (cVar43 == '\0') {
            dVar30 = CONCAT44D((*(undefined4 *)(fr0_ - 0x34)),*(undefined4 *)(unsigned)(iVar18 + 0x10));
          }
          else {
            in_xd2 = *(double *)(unsigned)(iVar18 + 0x10);
            dVar30 = CONCAT44D((*(undefined4 *)(fr0_ - 0x30)),(*(undefined4 *)(fr0_ - 0x34)));
          }
          if (cVar42 == '\0') {
            dVar30 = CONCAT44D(F32HI(dVar30) + F32LO(dVar30),
                                      SUB84(dVar30,0));
          }
          else {
            dVar30 = dVar30 + dVar30;
          }
          uVar35 = (undefined4)(D2U(dVar30) >> 0x20);
          if (cVar43 == '\0') {
            dVar30 = CONCAT44D((*(undefined4 *)(fr0_ - 0x30)),*(undefined4 *)(unsigned)(iVar18 + 0x14));
            (*(undefined4 *)(fr0_ - 0x34)) = uVar35;
          }
          else {
            (*(undefined4 *)(fr0_ - 0x34)) = SUB84(dVar30,0);
            in_xd2 = *(double *)(unsigned)(iVar18 + 0x14);
            dVar30 = CONCAT44D((*(float *)(fr0_ - 0x2c)),uVar35);
          }
          if (cVar42 == '\0') {
            dVar30 = CONCAT44D(F32HI(dVar30) + F32LO(dVar30),
                                      SUB84(dVar30,0));
          }
          else {
            dVar30 = dVar30 + dVar30;
          }
          uVar35 = (undefined4)(D2U(dVar30) >> 0x20);
          if (cVar43 == '\0') {
            dVar30 = CONCAT44D((*(float *)(fr0_ - 0x2c)),*(undefined4 *)(unsigned)(iVar18 + 0x18));
            (*(undefined4 *)(fr0_ - 0x30)) = uVar35;
          }
          else {
            (*(undefined4 *)(fr0_ - 0x30)) = SUB84(dVar30,0);
            in_xd2 = *(double *)(unsigned)(iVar18 + 0x18);
            dVar30 = CONCAT44D((*(float *)(fr0_ - 0x28)),uVar35);
          }
          if (cVar42 == '\0') {
            dVar30 = CONCAT44D(F32HI(dVar30) + F32LO(dVar30),
                                      SUB84(dVar30,0));
          }
          else {
            dVar30 = dVar30 + dVar30;
          }
          fVar34 = F32HI(dVar30);
          if (cVar43 == '\0') {
            dVar30 = CONCAT44D(fVar34,(*(undefined4 *)(fr0_ - 0x34)));
            (*(float *)(fr0_ - 0x2c)) = fVar34;
          }
          else {
            (*(float *)(fr0_ - 0x2c)) = SUB84(dVar30,0);
            in_xd2 = CONCAT44D((*(undefined4 *)(fr0_ - 0x30)),(*(undefined4 *)(fr0_ - 0x34)));
            (*(float *)(fr0_ - 0x28)) = fVar34;
          }
          fVar34 = F32LO(dVar38);
          if (cVar42 == '\0') {
            dVar30 = CONCAT44D((int)(D2U(dVar30) >> 0x20),F32LO(dVar30) * fVar34);
          }
          else {
            dVar30 = dVar30 * dVar38;
          }
          if (cVar43 == '\0') {
            (*(undefined4 *)(fr0_ - 0x34)) = SUB84(dVar30,0);
            dVar30 = CONCAT44D((int)(D2U(dVar30) >> 0x20),(*(undefined4 *)(fr0_ - 0x30)));
          }
          else {
            (*(undefined4 *)(fr0_ - 0x34)) = SUB84(in_xd2,0);
            (*(undefined4 *)(fr0_ - 0x30)) = (undefined4)((ulonglong)in_xd2 >> 0x20);
            in_xd2 = CONCAT44D((*(float *)(fr0_ - 0x2c)),(*(undefined4 *)(fr0_ - 0x30)));
          }
          if (cVar42 == '\0') {
            dVar30 = CONCAT44D((int)(D2U(dVar30) >> 0x20),F32LO(dVar30) * fVar34);
          }
          else {
            dVar30 = dVar30 * dVar38;
          }
          if (cVar43 == '\0') {
            (*(undefined4 *)(fr0_ - 0x30)) = SUB84(dVar30,0);
            dVar30 = CONCAT44D((int)(D2U(dVar30) >> 0x20),(*(float *)(fr0_ - 0x2c)));
          }
          else {
            (*(undefined4 *)(fr0_ - 0x30)) = SUB84(in_xd2,0);
            (*(float *)(fr0_ - 0x2c)) = F32HI(in_xd2);
            in_xd2 = CONCAT44D((*(float *)(fr0_ - 0x28)),(*(float *)(fr0_ - 0x2c)));
          }
          if (cVar42 == '\0') {
            in_dr2 = CONCAT44D((int)(D2U(dVar30) >> 0x20),F32LO(dVar30) * fVar34);
          }
          else {
            in_dr2 = dVar30 * dVar38;
          }
          puVar11 = ((undefined1 *)(unsigned)0x8c4c2620);
          puVar10 = ((undefined1 *)(fr0_ - 0x40));
          if (cVar43 == '\0') {
            (*(float *)(fr0_ - 0x2c)) = SUB84(in_dr2,0);
          }
          else {
            (*(float *)(fr0_ - 0x2c)) = SUB84(in_xd2,0);
            (*(float *)(fr0_ - 0x28)) = F32HI(in_xd2);
          }
          puVar15 = &(*(undefined4 *)(fr0_ - 0x34));
          (vsp = ((unsigned long)(fr0_ - 108)), FUN_8c23bae2(((undefined1 *)(unsigned)0x8c4c2620),puVar15,puVar10,(*(undefined4 *)(fr0_ - 0x50))));
          if (cVar43 != '\0') {
            in_xd4 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4c2628),(*(undefined4 *)(unsigned)(unsigned)0x8c4c2624));
          }
          puVar44 = puVar13;
          uVar35 = (vsp = ((unsigned long)(fr0_ - 108)), float_to_color_u8(puVar11,puVar15,puVar10,(*(undefined4 *)(fr0_ - 0x50))));
          *puVar13 = uVar35;
          if (cVar43 == '\0') {
            in_dr6 = (double)(ulonglong)(*(undefined4 *)(unsigned)(unsigned)0x8c4c263c);
            in_dr4 = (double)(ulonglong)(*(undefined4 *)(unsigned)(unsigned)0x8c4c2634);
          }
          else {
            in_dr6 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4c263c),(*(undefined4 *)(unsigned)(unsigned)0x8c4c2638));
            in_xd4 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4c2638),(*(undefined4 *)(unsigned)(unsigned)0x8c4c2634));
            in_dr4 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4c2634),(*(undefined4 *)(unsigned)(unsigned)0x8c4c2630));
          }
          (*(undefined4 *)(fr0_ - 0x44)) = (vsp = ((unsigned long)(fr0_ - 108)), float_to_color_u8(puVar11,puVar15,puVar10,(*(undefined4 *)(fr0_ - 0x50))));
          puVar12 = puVar24 + 2;
          puVar24 = puVar24 + 3;
          (*(int *)(fr0_ - 0x64)) = 0;
          ar4_00 = (uint *)(unsigned)((uint)*puVar25 * 0x40 + (*(undefined4 *)(unsigned)(unsigned)0x8c4aa510));
          (*(unsigned *)(fr0_ - 0x68) = (unsigned)(unsigned long)((uint *)(unsigned)((uint)*puVar12 * 0x40 + (*(undefined4 *)(unsigned)(unsigned)0x8c4aa510))));
          if (0 < (int)(uVar23 - 2)) {
            do {
              uVar1 = *puVar24;
              puVar24 = puVar24 + 1;
              ar6_00 = (uint *)(unsigned)((uint)uVar1 * 0x40 + (*(undefined4 *)(unsigned)(unsigned)0x8c4aa510));
              if ((*ar4_00 & *((uint *)(unsigned long)*(unsigned *)(fr0_ - 0x68)) & *ar6_00 & 1) == 0) {
                (vsp = ((unsigned long)(fr0_ - 108)), FUN_8c247b20(ar4_00,((uint *)(unsigned long)*(unsigned *)(fr0_ - 0x68)),ar6_00,&(*(undefined4 *)(fr0_ - 0x48))));
              }
              (*(int *)(fr0_ - 0x64)) = (*(int *)(fr0_ - 0x64)) + 1;
              ar4_00 = ((uint *)(unsigned long)*(unsigned *)(fr0_ - 0x68));
              (*(unsigned *)(fr0_ - 0x68) = (unsigned)(unsigned long)(ar6_00));
            } while ((*(int *)(fr0_ - 0x64)) < (int)(uVar23 - 2));
          }
        }
      }
      else {
LAB_8c2516e6:
        puVar24 = puVar25 + uVar23;
        puVar44 = puVar13;
      }
      (*(int *)(fr0_ - 0x60)) = (*(int *)(fr0_ - 0x60)) + 1;
      in_xd0 = dVar32;
      puVar13 = puVar44;
    }
  }
  else if (uVar3 == 0xc000) {
    if (((*(undefined4 *)(unsigned)(unsigned)0x8c4ab318) & 1) == 0) {
      pcVar5 = ((void *)0x8c246254);
    }
    else {
      pcVar5 = ((void *)0x8c245cc8);
    }
    uVar3 = (vsp = ((unsigned long)(fr0_ - 108)), (*(code *)xlat((unsigned long)pcVar5))(ar4,uVar1 & 0x3fff,ar6,ar7));
  }
  return uVar3;
}

__asm__(".globl _FUN_8c250a54\n.set _FUN_8c250a54, _FUN_8c250a54_def\n");
