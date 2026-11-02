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
uint FUN_8c24b154_def(ushort *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c24b154";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 72; for (int i_ = 0; i_ < 72; i_++) z_[i_] = 0; }
  ushort uVar1;
  double dVar2;
  ushort uVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  code *UNRECOVERED_JUMPTABLE;
  double *pdVar8;
  uint uVar9;
  uint *ar6_00;
  undefined1 *puVar10;
  ushort *puVar11;
  int iVar12;
  uint *ar4_00;
  double *pdVar13;
  ushort uVar14;
  double *ar6_01;
  int iVar15;
  uint uVar16;
  int iVar17;
  double *unaff_r8 = 0;
  double *pdVar18;
  double *pdVar19;
  ushort *puVar20;
  ushort *puVar21;
  double *pdVar22;
  uint uVar23;
  uint *ar5_00;
  double in_dr0 = 0;
  float fVar24;
  float fVar25;
  float fVar26;
  double in_dr2 = 0;
  double dVar27;
  undefined4 uVar28;
  double in_dr4 = 0;
  double dVar29;
  double in_dr6 = 0;
  double dVar30;
  undefined4 uVar31;
  double in_dr8 = 0;
  double dVar32;
  double in_dr12 = 0;
  double in_xd0 = 0;
  double in_xd2 = 0;
  double in_xd4 = 0;
  double dVar33;
  double in_xd6 = 0;
  double in_xd8 = 0;
  double dVar34;
  double in_xd14 = 0;
  bool bVar35;
  char cVar36;
  char cVar37;
  
  cVar37 = '\0';
  cVar36 = '\0';
  uVar7 = 0x3f000000;
  uVar14 = *ar4;
  uVar3 = uVar14 & 0x3fff;
  uVar4 = uVar14 & 0xc000;
  puVar20 = ((ushort *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 2));
  if ((uVar14 & 0xc000) == 0) {
    (*(undefined4 *)(unsigned)(unsigned)0x8c4aa51c) = (*(undefined4 *)(unsigned)(unsigned)0x8c4aa51c) + (uint)ar4[1] * 3;
    (*(uint *)(fr0_ - 0x38)) = 0;
    while( true ) {
      uVar28 = SUB84(in_dr6,0);
      uVar31 = SUB84(in_dr4,0);
      uVar4 = (uint)ar4[1];
      if ((int)uVar4 <= (int)(*(uint *)(fr0_ - 0x38))) break;
      uVar14 = *puVar20;
      puVar11 = puVar20 + 1;
      puVar21 = puVar20 + 2;
      puVar20 = puVar20 + 3;
      pdVar19 = (double *)(unsigned)((uint)*puVar21 * 0x40 + (*(undefined4 *)(unsigned)(unsigned)0x8c4aa510));
      pdVar8 = (double *)(unsigned)((uint)uVar14 * 0x40 + (*(undefined4 *)(unsigned)(unsigned)0x8c4aa510));
      pdVar18 = (double *)(unsigned)((uint)*puVar11 * 0x40 + (*(undefined4 *)(unsigned)(unsigned)0x8c4aa510));
      if ((*(uint *)(unsigned)pdVar8 & *(uint *)(unsigned)pdVar18 & *(uint *)(unsigned)pdVar19 & 0x3f) == 0) {
        if (((*(uint *)(unsigned)pdVar8 | *(uint *)(unsigned)pdVar18 | *(uint *)(unsigned)pdVar19) & 1) == 0) {
          if (cVar37 == '\0') {
            uVar31 = *(undefined4 *)(unsigned)((int)pdVar18 + 4);
            dVar33 = CONCAT44D(uVar31,*(undefined4 *)(unsigned)((int)pdVar8 + 4));
          }
          else {
            dVar33 = *(double *)(unsigned)((int)pdVar18 + 4);
            in_xd2 = *(double *)(unsigned)((int)pdVar8 + 4);
          }
          if (cVar36 == '\0') {
            dVar33 = CONCAT44D(F32HI(dVar33) - F32LO(dVar33),
                                      SUB84(dVar33,0));
          }
          else {
            dVar33 = dVar33 - dVar33;
          }
          if (cVar37 == '\0') {
            dVar33 = CONCAT44D((int)(D2U(dVar33) >> 0x20),*(undefined4 *)(unsigned)(pdVar19 + 1))
            ;
            dVar29 = CONCAT44D(*(undefined4 *)(unsigned)(pdVar18 + 1),uVar31);
          }
          else {
            in_xd2 = pdVar19[1];
            dVar29 = pdVar18[1];
          }
          fVar26 = F32HI(dVar29);
          if (cVar36 == '\0') {
            dVar33 = CONCAT44D((int)(D2U(dVar33) >> 0x20),F32LO(dVar33) - fVar26);
          }
          else {
            dVar33 = dVar33 - dVar29;
          }
          dVar32 = dVar29;
          if (cVar37 == '\0') {
            in_dr0 = CONCAT44D((int)((ulonglong)in_dr0 >> 0x20),fVar26);
            dVar32 = in_xd0;
          }
          in_xd0 = dVar32;
          if (cVar36 == '\0') {
            dVar33 = CONCAT44D(F32HI(dVar33) * F32LO(dVar33),
                                      SUB84(dVar33,0));
          }
          else {
            dVar33 = dVar33 * dVar33;
          }
          if (cVar37 == '\0') {
            dVar33 = CONCAT44D((int)(D2U(dVar33) >> 0x20),*(undefined4 *)(unsigned)(pdVar8 + 1));
          }
          else {
            in_xd2 = pdVar8[1];
          }
          if (cVar36 == '\0') {
            dVar32 = CONCAT44D((int)((ulonglong)in_dr0 >> 0x20),
                                      F32LO(in_dr0) - F32LO(dVar33));
          }
          else {
            dVar32 = in_dr0 - dVar33;
          }
          if (cVar37 == '\0') {
            dVar33 = CONCAT44D((int)(D2U(dVar33) >> 0x20),
                                      *(undefined4 *)(unsigned)((int)pdVar19 + 4));
          }
          else {
            in_xd2 = *(double *)(unsigned)((int)pdVar19 + 4);
          }
          if (cVar36 == '\0') {
            dVar33 = CONCAT44D((int)(D2U(dVar33) >> 0x20),
                                      F32LO(dVar33) - F32LO(dVar29));
          }
          else {
            dVar33 = dVar33 - dVar29;
          }
          uVar4 = (uint)(D2U(dVar33) >> 0x20);
          dVar34 = dVar33;
          if (cVar37 == '\0') {
            dVar34 = CONCAT44D(uVar4,SUB84(dVar29,0));
          }
          if (cVar36 == '\0') {
            in_dr0 = CONCAT44D((int)(D2U(dVar32) >> 0x20),
                                      F32LO(dVar32) * F32LO(dVar33));
          }
          else {
            in_dr0 = dVar32 * dVar33;
          }
          in_dr2 = (double)((ulonglong)uVar4 << 0x20);
          if (cVar36 == '\0') {
            fVar26 = F32HI(dVar34) - F32LO(in_dr0);
            in_dr4 = CONCAT44D(fVar26,SUB84(dVar34,0));
            bVar35 = 0.0 < fVar26;
          }
          else {
            in_dr4 = dVar34 - in_dr0;
            bVar35 = in_dr2 < in_dr4;
          }
          uVar31 = SUB84(in_dr4,0);
          (*(uint *)(fr0_ - 0x3c)) = 0;
          if (bVar35) {
            if (((*(undefined4 *)(unsigned)(unsigned)0x8c4ab308) & 0x800000) == 0) goto LAB_8c24b51a;
            (*(uint *)(fr0_ - 0x3c)) = 0x8000;
          }
          *(undefined4 *)(unsigned)pdVar8 = 0xe0000000;
          CacheBlockWriteBack(pdVar8);
          if (*(uint *)(unsigned)((int)pdVar8 + 0x3c) != ((*(uint *)(fr0_ - 0x3c)) | uVar3)) {
            *(uint *)(unsigned)((int)pdVar8 + 0x3c) = (*(uint *)(fr0_ - 0x3c)) | uVar3;
            pdVar13 = pdVar8 + 6;
            puVar10 = ((undefined1 *)(unsigned)0x8c4c2620);
            pdVar22 = pdVar8 + 2;
            uVar4 = (*(uint *)(fr0_ - 0x3c));
            (vsp = ((unsigned long)(fr0_ - 72)), FUN_8c23bae2(((undefined1 *)(unsigned)0x8c4c2620),pdVar22,pdVar13,(*(uint *)(fr0_ - 0x3c))));
            if (cVar37 != '\0') {
              in_xd6 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4c2630),(*(undefined4 *)(unsigned)(unsigned)0x8c4c262c));
            }
            uVar31 = (vsp = ((unsigned long)(fr0_ - 72)), float_to_color_u8(puVar10,pdVar22,pdVar13,uVar4));
            *(undefined4 *)(unsigned)(pdVar8 + 5) = uVar31;
            uVar28 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c263c);
            uVar31 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c2634);
            if (cVar37 != '\0') {
              in_xd6 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4c2640),(*(undefined4 *)(unsigned)(unsigned)0x8c4c263c));
              uVar28 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c2638);
              uVar31 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c2630);
            }
            uVar5 = (vsp = ((unsigned long)(fr0_ - 72)), float_to_color_u8(puVar10,pdVar22,pdVar13,uVar4));
            *(undefined4 *)(unsigned)((int)pdVar8 + 0x2c) = uVar5;
          }
          if (cVar37 == '\0') {
            pdVar22 = (double *)(unsigned)((int)pdVar8 + 0x34);
            dVar33 = CONCAT44D(*(undefined4 *)(unsigned)(pdVar8 + 6),uVar7);
            dVar29 = CONCAT44D(uVar7,SUB84(in_dr0,0));
          }
          else {
            dVar33 = pdVar8[6];
            pdVar22 = pdVar8 + 7;
            dVar29 = in_xd14;
            in_xd2 = in_xd14;
          }
          if (cVar36 == '\0') {
            dVar33 = (double)(ulonglong)
                             (uint)(F32HI(dVar29) *
                                    F32HI(dVar33) + F32LO(dVar33));
          }
          if (cVar37 == '\0') {
            *(int *)(unsigned)(pdVar8 + 4) = SUB84(dVar33,0);
            dVar32 = CONCAT44D(*(undefined4 *)(unsigned)pdVar22,uVar7);
            dVar33 = CONCAT44D(uVar7,SUB84(dVar29,0));
            dVar29 = CONCAT44D(uVar7,uVar31);
          }
          else {
            pdVar8[4] = in_xd2;
            dVar32 = *pdVar22;
            in_xd2 = in_xd14;
            dVar33 = in_xd14;
            dVar29 = in_xd14;
          }
          pdVar22 = (double *)(unsigned)((int)pdVar8 + 0x24);
          if (cVar36 == '\0') {
            dVar32 = (double)(ulonglong)
                             (uint)(F32HI(dVar33) *
                                    F32HI(dVar32) + F32LO(dVar32));
          }
          if (cVar37 == '\0') {
            *(int *)(unsigned)pdVar22 = SUB84(dVar32,0);
          }
          else {
            *pdVar22 = in_xd2;
          }
          CacheBlockWriteBack(pdVar22);
          if (cVar37 == '\0') {
            dVar33 = CONCAT44D(*(undefined4 *)(unsigned)pdVar8,SUB84(dVar33,0));
            dVar32 = CONCAT44D(*(undefined4 *)(unsigned)((int)pdVar8 + 4),SUB84(dVar32,0));
            pdVar8 = pdVar8 + 1;
          }
          else {
            dVar33 = *pdVar8;
            dVar32 = pdVar8[1];
            pdVar8 = pdVar8 + 2;
          }
          if (cVar37 == '\0') {
            uVar31 = *(undefined4 *)(unsigned)(pdVar8 + 2);
            dVar34 = CONCAT44D(uVar31,SUB84(dVar29,0));
            dVar29 = CONCAT44D(*(undefined4 *)(unsigned)((int)pdVar8 + 0x14),uVar28);
            *(undefined4 *)(unsigned)((int)unaff_r8 + 0x1c) = *(undefined4 *)(unsigned)((int)pdVar8 + 0x14);
            *(undefined4 *)(unsigned)(unaff_r8 + 3) = uVar31;
            *(int *)(unsigned)((int)unaff_r8 + 0x14) = (int)(D2U(dVar32) >> 0x20);
            unaff_r8 = unaff_r8 + 2;
            *(int *)(unsigned)unaff_r8 = (int)(D2U(dVar33) >> 0x20);
          }
          else {
            dVar34 = pdVar8[2];
            dVar29 = pdVar8[3];
            unaff_r8[3] = dVar29;
            unaff_r8[2] = dVar34;
            unaff_r8[1] = dVar32;
            *unaff_r8 = dVar33;
          }
          uVar31 = SUB84(dVar29,0);
          uVar28 = SUB84(dVar34,0);
          *(undefined4 *)(unsigned)pdVar18 = 0xe0000000;
          CacheBlockWriteBack(pdVar18);
          if (*(uint *)(unsigned)((int)pdVar18 + 0x3c) != ((*(uint *)(fr0_ - 0x3c)) | uVar3)) {
            *(uint *)(unsigned)((int)pdVar18 + 0x3c) = (*(uint *)(fr0_ - 0x3c)) | uVar3;
            pdVar22 = pdVar18 + 6;
            puVar10 = ((undefined1 *)(unsigned)0x8c4c2620);
            pdVar8 = pdVar18 + 2;
            uVar4 = (*(uint *)(fr0_ - 0x3c));
            (vsp = ((unsigned long)(fr0_ - 72)), FUN_8c23bae2(((undefined1 *)(unsigned)0x8c4c2620),pdVar8,pdVar22,(*(uint *)(fr0_ - 0x3c))));
            if (cVar37 != '\0') {
              in_xd6 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4c2630),(*(undefined4 *)(unsigned)(unsigned)0x8c4c262c));
            }
            uVar31 = (vsp = ((unsigned long)(fr0_ - 72)), float_to_color_u8(puVar10,pdVar8,pdVar22,uVar4));
            *(undefined4 *)(unsigned)(pdVar18 + 5) = uVar31;
            uVar28 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c2634);
            uVar31 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c263c);
            if (cVar37 != '\0') {
              in_xd6 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4c2640),(*(undefined4 *)(unsigned)(unsigned)0x8c4c263c));
              uVar28 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c2630);
              uVar31 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c2638);
            }
            uVar5 = (vsp = ((unsigned long)(fr0_ - 72)), float_to_color_u8(puVar10,pdVar8,pdVar22,uVar4));
            *(undefined4 *)(unsigned)((int)pdVar18 + 0x2c) = uVar5;
          }
          if (cVar37 == '\0') {
            pdVar8 = (double *)(unsigned)((int)pdVar18 + 0x34);
            dVar29 = CONCAT44D(*(undefined4 *)(unsigned)(pdVar18 + 6),uVar7);
            dVar33 = CONCAT44D(uVar7,SUB84(dVar33,0));
          }
          else {
            dVar29 = pdVar18[6];
            pdVar8 = pdVar18 + 7;
            dVar33 = in_xd14;
            in_xd2 = in_xd14;
          }
          if (cVar36 == '\0') {
            dVar29 = (double)(ulonglong)
                             (uint)(F32HI(dVar33) *
                                    F32HI(dVar29) + F32LO(dVar29));
          }
          if (cVar37 == '\0') {
            *(int *)(unsigned)(pdVar18 + 4) = SUB84(dVar29,0);
            dVar32 = CONCAT44D(*(undefined4 *)(unsigned)pdVar8,uVar7);
            dVar33 = CONCAT44D(uVar7,SUB84(dVar33,0));
            dVar29 = CONCAT44D(uVar7,uVar28);
          }
          else {
            pdVar18[4] = in_xd2;
            dVar32 = *pdVar8;
            in_xd2 = in_xd14;
            dVar33 = in_xd14;
            dVar29 = in_xd14;
          }
          pdVar8 = (double *)(unsigned)((int)pdVar18 + 0x24);
          if (cVar36 == '\0') {
            dVar32 = (double)(ulonglong)
                             (uint)(F32HI(dVar33) *
                                    F32HI(dVar32) + F32LO(dVar32));
          }
          if (cVar37 == '\0') {
            *(int *)(unsigned)pdVar8 = SUB84(dVar32,0);
          }
          else {
            *pdVar8 = in_xd2;
          }
          CacheBlockWriteBack(pdVar8);
          if (cVar37 == '\0') {
            dVar33 = CONCAT44D(*(undefined4 *)(unsigned)pdVar18,SUB84(dVar33,0));
            dVar32 = CONCAT44D(*(undefined4 *)(unsigned)((int)pdVar18 + 4),SUB84(dVar32,0));
            pdVar18 = pdVar18 + 1;
          }
          else {
            dVar33 = *pdVar18;
            dVar32 = pdVar18[1];
            pdVar18 = pdVar18 + 2;
          }
          if (cVar37 == '\0') {
            uVar28 = *(undefined4 *)(unsigned)(pdVar18 + 2);
            dVar34 = CONCAT44D(uVar28,SUB84(dVar29,0));
            dVar29 = CONCAT44D(*(undefined4 *)(unsigned)((int)pdVar18 + 0x14),uVar31);
            *(undefined4 *)(unsigned)((int)unaff_r8 + 0x3c) = *(undefined4 *)(unsigned)((int)pdVar18 + 0x14);
            *(undefined4 *)(unsigned)(unaff_r8 + 7) = uVar28;
            *(int *)(unsigned)((int)unaff_r8 + 0x34) = (int)(D2U(dVar32) >> 0x20);
            pdVar8 = unaff_r8 + 6;
            *(int *)(unsigned)pdVar8 = (int)(D2U(dVar33) >> 0x20);
          }
          else {
            dVar34 = pdVar18[2];
            dVar29 = pdVar18[3];
            unaff_r8[7] = dVar29;
            unaff_r8[6] = dVar34;
            unaff_r8[5] = dVar32;
            pdVar8 = unaff_r8 + 4;
            *pdVar8 = dVar33;
          }
          uVar31 = SUB84(dVar29,0);
          uVar28 = SUB84(dVar34,0);
          *(undefined4 *)(unsigned)pdVar19 = 0xf0000000;
          CacheBlockWriteBack(pdVar19);
          if (*(uint *)(unsigned)((int)pdVar19 + 0x3c) != ((*(uint *)(fr0_ - 0x3c)) | uVar3)) {
            *(uint *)(unsigned)((int)pdVar19 + 0x3c) = (*(uint *)(fr0_ - 0x3c)) | uVar3;
            pdVar22 = pdVar19 + 6;
            puVar10 = ((undefined1 *)(unsigned)0x8c4c2620);
            pdVar18 = pdVar19 + 2;
            (vsp = ((unsigned long)(fr0_ - 72)), FUN_8c23bae2(((undefined1 *)(unsigned)0x8c4c2620),pdVar18,pdVar22,(*(uint *)(fr0_ - 0x3c))));
            if (cVar37 != '\0') {
              in_xd6 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4c2630),(*(undefined4 *)(unsigned)(unsigned)0x8c4c262c));
            }
            uVar31 = (vsp = ((unsigned long)(fr0_ - 72)), float_to_color_u8(puVar10,pdVar18,pdVar22,(*(uint *)(fr0_ - 0x3c))));
            *(undefined4 *)(unsigned)(pdVar19 + 5) = uVar31;
            uVar28 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c2634);
            uVar31 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c263c);
            if (cVar37 != '\0') {
              in_xd6 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4c2640),(*(undefined4 *)(unsigned)(unsigned)0x8c4c263c));
              uVar28 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c2630);
              uVar31 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c2638);
            }
            uVar5 = (vsp = ((unsigned long)(fr0_ - 72)), float_to_color_u8(puVar10,pdVar18,pdVar22,(*(uint *)(fr0_ - 0x3c))));
            *(undefined4 *)(unsigned)((int)pdVar19 + 0x2c) = uVar5;
          }
          if (cVar37 == '\0') {
            pdVar18 = (double *)(unsigned)((int)pdVar19 + 0x34);
            dVar29 = CONCAT44D(*(undefined4 *)(unsigned)(pdVar19 + 6),uVar7);
            dVar33 = CONCAT44D(uVar7,SUB84(dVar33,0));
          }
          else {
            dVar29 = pdVar19[6];
            pdVar18 = pdVar19 + 7;
            dVar33 = in_xd14;
            in_xd2 = in_xd14;
          }
          if (cVar36 == '\0') {
            dVar29 = (double)(ulonglong)
                             (uint)(F32HI(dVar33) *
                                    F32HI(dVar29) + F32LO(dVar29));
          }
          if (cVar37 == '\0') {
            *(int *)(unsigned)(pdVar19 + 4) = SUB84(dVar29,0);
            dVar32 = CONCAT44D(*(undefined4 *)(unsigned)pdVar18,uVar7);
            dVar33 = CONCAT44D(uVar7,SUB84(dVar33,0));
            dVar29 = CONCAT44D(uVar7,uVar28);
          }
          else {
            pdVar19[4] = in_xd2;
            dVar32 = *pdVar18;
            in_xd2 = in_xd14;
            dVar33 = in_xd14;
            dVar29 = in_xd14;
          }
          pdVar18 = (double *)(unsigned)((int)pdVar19 + 0x24);
          if (cVar36 == '\0') {
            dVar32 = (double)(ulonglong)
                             (uint)(F32HI(dVar33) *
                                    F32HI(dVar32) + F32LO(dVar32));
          }
          if (cVar37 == '\0') {
            *(int *)(unsigned)pdVar18 = SUB84(dVar32,0);
          }
          else {
            *pdVar18 = in_xd2;
          }
          CacheBlockWriteBack(pdVar18);
          if (cVar37 == '\0') {
            in_dr0 = CONCAT44D(*(undefined4 *)(unsigned)pdVar19,SUB84(dVar33,0));
            in_dr2 = CONCAT44D(*(undefined4 *)(unsigned)((int)pdVar19 + 4),SUB84(dVar32,0));
            pdVar19 = pdVar19 + 1;
          }
          else {
            in_dr0 = *pdVar19;
            in_dr2 = pdVar19[1];
            pdVar19 = pdVar19 + 2;
          }
          if (cVar37 == '\0') {
            uVar28 = *(undefined4 *)(unsigned)(pdVar19 + 2);
            in_dr4 = CONCAT44D(uVar28,SUB84(dVar29,0));
            in_dr6 = CONCAT44D(*(undefined4 *)(unsigned)((int)pdVar19 + 0x14),uVar31);
            *(undefined4 *)(unsigned)((int)pdVar8 + 0x3c) = *(undefined4 *)(unsigned)((int)pdVar19 + 0x14);
            *(undefined4 *)(unsigned)(pdVar8 + 7) = uVar28;
            *(int *)(unsigned)((int)pdVar8 + 0x34) = (int)((ulonglong)in_dr2 >> 0x20);
            pdVar8 = pdVar8 + 6;
            *(int *)(unsigned)pdVar8 = (int)((ulonglong)in_dr0 >> 0x20);
          }
          else {
            in_dr4 = pdVar19[2];
            in_dr6 = pdVar19[3];
            pdVar8[7] = in_dr6;
            pdVar8[6] = in_dr4;
            pdVar8[5] = in_dr2;
            pdVar8 = pdVar8 + 4;
            *pdVar8 = in_dr0;
          }
          unaff_r8 = pdVar8 + 4;
          (*(undefined4 *)(unsigned)(unsigned)0x8c4aa520) = (*(undefined4 *)(unsigned)(unsigned)0x8c4aa520) + 3;
        }
        else {
          if (cVar37 == '\0') {
            uVar28 = *(undefined4 *)(unsigned)(pdVar18 + 3);
            uVar31 = *(undefined4 *)(unsigned)((int)pdVar18 + 0x14);
            pdVar22 = (double *)(unsigned)((int)pdVar8 + 0x14);
            in_dr2 = CONCAT44D((int)((ulonglong)in_dr2 >> 0x20),uVar31);
            dVar29 = CONCAT44D(uVar28,SUB84(in_dr0,0));
            dVar33 = in_xd2;
            in_dr8 = CONCAT44D(uVar31,SUB84(in_dr8,0));
          }
          else {
            dVar29 = pdVar18[3];
            dVar33 = *(double *)(unsigned)((int)pdVar18 + 0x14);
            pdVar22 = pdVar8 + 3;
            uVar31 = (undefined4)(D2U(dVar33) >> 0x20);
            in_dr8 = dVar33;
            in_xd6 = dVar29;
          }
          dVar32 = *pdVar22;
          fVar24 = F32HI(dVar32);
          fVar26 = F32LO(dVar32);
          if (cVar36 == '\0') {
            fVar25 = F32LO(in_dr2) * fVar24;
            dVar29 = CONCAT44D(F32HI(dVar29) * fVar26,SUB84(dVar29,0));
          }
          else {
            fVar25 = SUB84(in_dr2 * dVar32,0);
            dVar29 = dVar29 * dVar32;
          }
          if (cVar37 == '\0') {
            in_dr6 = CONCAT44D(*(undefined4 *)(unsigned)(pdVar18 + 2),uVar28);
            in_dr8 = CONCAT44D(uVar31,*(undefined4 *)(unsigned)(pdVar8 + 2));
            dVar34 = CONCAT44D(uVar28,fVar25);
          }
          else {
            in_dr6 = pdVar18[2];
            dVar34 = in_xd6;
          }
          if (cVar36 == '\0') {
            dVar34 = CONCAT44D(F32HI(dVar34) * F32LO(in_dr8),
                                      SUB84(dVar34,0));
          }
          else {
            dVar34 = dVar34 * in_dr8;
          }
          dVar30 = in_dr8;
          if (cVar37 == '\0') {
            dVar29 = CONCAT44D((int)(D2U(dVar29) >> 0x20),
                                      (int)((ulonglong)in_dr8 >> 0x20));
            dVar30 = in_xd0;
          }
          in_xd0 = dVar30;
          if (cVar36 == '\0') {
            dVar29 = CONCAT44D(F32HI(dVar29) - F32LO(dVar34),
                                      SUB84(dVar29,0));
          }
          else {
            dVar29 = dVar29 - dVar34;
          }
          uVar31 = (undefined4)((ulonglong)in_dr6 >> 0x20);
          in_xd2 = in_dr6;
          if (cVar37 == '\0') {
            dVar34 = CONCAT44D((int)(D2U(dVar34) >> 0x20),uVar31);
            in_xd2 = dVar33;
          }
          if (cVar36 == '\0') {
            dVar34 = CONCAT44D((int)(D2U(dVar34) >> 0x20),F32LO(dVar34) * fVar24);
          }
          else {
            dVar34 = dVar34 * dVar32;
          }
          dVar33 = in_dr6;
          if (cVar37 == '\0') {
            dVar33 = CONCAT44D(uVar31,SUB84(in_dr12,0));
          }
          if (cVar36 == '\0') {
            in_dr12 = CONCAT44D(F32HI(dVar33) * fVar26,SUB84(dVar33,0));
            dVar29 = CONCAT44D((int)(D2U(dVar29) >> 0x20),
                                      F32LO(dVar29) * F32LO(in_dr8));
            fVar24 = F32LO(dVar34) - F32HI(dVar34);
          }
          else {
            in_dr12 = dVar33 * dVar32;
            dVar29 = dVar29 * in_dr8;
            fVar24 = SUB84(dVar34 - dVar34,0);
          }
          if (cVar37 == '\0') {
            dVar33 = CONCAT44D(*(undefined4 *)(unsigned)((int)pdVar19 + 0x14),fVar24);
          }
          else {
            dVar33 = *(double *)(unsigned)((int)pdVar19 + 0x14);
          }
          if (cVar36 == '\0') {
            dVar29 = CONCAT44D((int)(D2U(dVar29) >> 0x20),
                                      F32LO(dVar29) - F32HI(in_dr12));
            dVar33 = CONCAT44D(F32HI(dVar33) * F32LO(dVar33),
                                      SUB84(dVar33,0));
          }
          else {
            dVar29 = dVar29 - in_dr12;
            dVar33 = dVar33 * dVar33;
          }
          if (cVar37 == '\0') {
            dVar33 = CONCAT44D((int)(D2U(dVar33) >> 0x20),*(undefined4 *)(unsigned)(pdVar19 + 2))
            ;
          }
          else {
            in_xd2 = pdVar19[2];
          }
          if (cVar36 == '\0') {
            dVar33 = CONCAT44D(F32HI(dVar29) * F32LO(dVar33) +
                                      F32HI(dVar33),SUB84(dVar33,0));
          }
          if (cVar37 == '\0') {
            dVar33 = CONCAT44D((int)(D2U(dVar33) >> 0x20),*(undefined4 *)(unsigned)(pdVar19 + 3))
            ;
            in_dr0 = CONCAT44D(SUB84(dVar29,0),SUB84(dVar29,0));
          }
          else {
            in_xd2 = pdVar19[3];
            in_dr0 = in_xd0;
          }
          if (cVar36 == '\0') {
            dVar33 = (double)((ulonglong)
                              (uint)(F32HI(in_dr0) * F32LO(dVar33) +
                                    F32HI(dVar33)) << 0x20);
          }
          in_dr2 = (double)(D2U(dVar33) & 0xffffffff00000000);
          in_dr4 = in_dr2;
          if (cVar37 == '\0') {
            in_dr4 = CONCAT44D((int)(D2U(dVar33) >> 0x20),fVar26);
          }
          if (cVar36 == '\0') {
            bVar35 = 0.0 < F32HI(in_dr4);
          }
          else {
            bVar35 = in_dr2 < in_dr4;
          }
          (*(uint *)(fr0_ - 0x3c)) = 0;
          if (bVar35) {
            if (((*(undefined4 *)(unsigned)(unsigned)0x8c4ab308) & 0x800000) == 0) goto LAB_8c24b51a;
            (*(uint *)(fr0_ - 0x3c)) = 0x8000;
          }
          (vsp = ((unsigned long)(fr0_ - 72)), FUN_8c23dc42(pdVar8,pdVar18,pdVar19,(*(uint *)(fr0_ - 0x3c)) | (int)(short)uVar3));
        }
      }
LAB_8c24b51a:
      (*(uint *)(fr0_ - 0x38)) = (*(uint *)(fr0_ - 0x38)) + 1;
    }
  }
  else if (uVar4 == 0x4000) {
    (*(undefined4 *)(unsigned)(unsigned)0x8c4aa51c) = (*(undefined4 *)(unsigned)(unsigned)0x8c4aa51c) + (uint)ar4[1] * 4;
    (*(int *)(fr0_ - 0x2c)) = 0;
    while( true ) {
      uVar31 = SUB84(in_dr4,0);
      uVar4 = (uint)ar4[1];
      if ((int)uVar4 <= (*(int *)(fr0_ - 0x2c))) break;
      puVar11 = puVar20 + 3;
      pdVar22 = (double *)(unsigned)((uint)puVar20[2] * 0x40 + (*(undefined4 *)(unsigned)(unsigned)0x8c4aa510));
      pdVar18 = (double *)(unsigned)((uint)*puVar20 * 0x40 + (*(undefined4 *)(unsigned)(unsigned)0x8c4aa510));
      pdVar19 = (double *)(unsigned)((uint)puVar20[1] * 0x40 + (*(undefined4 *)(unsigned)(unsigned)0x8c4aa510));
      puVar20 = puVar20 + 4;
      pdVar8 = (double *)(unsigned)((uint)*puVar11 * 0x40 + (*(undefined4 *)(unsigned)(unsigned)0x8c4aa510));
      if ((*(uint *)(unsigned)pdVar18 & *(uint *)(unsigned)pdVar19 & *(uint *)(unsigned)pdVar22 & *(uint *)(unsigned)pdVar8 & 0x3f) == 0) {
        if (((*(uint *)(unsigned)pdVar18 | *(uint *)(unsigned)pdVar19 | *(uint *)(unsigned)pdVar22 | *(uint *)(unsigned)pdVar8) & 1) == 0) {
          if (cVar37 == '\0') {
            uVar31 = *(undefined4 *)(unsigned)((int)pdVar19 + 4);
            dVar33 = CONCAT44D(uVar31,*(undefined4 *)(unsigned)((int)pdVar18 + 4));
          }
          else {
            dVar33 = *(double *)(unsigned)((int)pdVar19 + 4);
            in_xd2 = *(double *)(unsigned)((int)pdVar18 + 4);
            in_xd4 = dVar33;
          }
          if (cVar36 == '\0') {
            dVar33 = CONCAT44D(F32HI(dVar33) - F32LO(dVar33),
                                      SUB84(dVar33,0));
          }
          else {
            dVar33 = dVar33 - dVar33;
          }
          if (cVar37 == '\0') {
            dVar33 = CONCAT44D((int)(D2U(dVar33) >> 0x20),*(undefined4 *)(unsigned)(pdVar22 + 1))
            ;
            dVar29 = CONCAT44D(*(undefined4 *)(unsigned)(pdVar19 + 1),uVar31);
          }
          else {
            in_xd2 = pdVar22[1];
            dVar29 = pdVar19[1];
          }
          fVar26 = F32HI(dVar29);
          if (cVar36 == '\0') {
            dVar33 = CONCAT44D((int)(D2U(dVar33) >> 0x20),F32LO(dVar33) - fVar26);
          }
          else {
            dVar33 = dVar33 - dVar29;
          }
          dVar32 = dVar29;
          if (cVar37 == '\0') {
            in_dr0 = CONCAT44D((int)((ulonglong)in_dr0 >> 0x20),fVar26);
            dVar32 = in_xd0;
          }
          in_xd0 = dVar32;
          if (cVar36 == '\0') {
            dVar33 = CONCAT44D(F32HI(dVar33) * F32LO(dVar33),
                                      SUB84(dVar33,0));
          }
          else {
            dVar33 = dVar33 * dVar33;
          }
          if (cVar37 == '\0') {
            dVar33 = CONCAT44D((int)(D2U(dVar33) >> 0x20),*(undefined4 *)(unsigned)(pdVar18 + 1))
            ;
          }
          else {
            in_xd2 = pdVar18[1];
          }
          if (cVar36 == '\0') {
            dVar32 = CONCAT44D((int)((ulonglong)in_dr0 >> 0x20),
                                      F32LO(in_dr0) - F32LO(dVar33));
          }
          else {
            dVar32 = in_dr0 - dVar33;
          }
          if (cVar37 == '\0') {
            dVar33 = CONCAT44D((int)(D2U(dVar33) >> 0x20),
                                      *(undefined4 *)(unsigned)((int)pdVar22 + 4));
          }
          else {
            in_xd2 = *(double *)(unsigned)((int)pdVar22 + 4);
          }
          if (cVar36 == '\0') {
            dVar33 = CONCAT44D((int)(D2U(dVar33) >> 0x20),
                                      F32LO(dVar33) - F32LO(dVar29));
          }
          else {
            dVar33 = dVar33 - dVar29;
          }
          uVar4 = (uint)(D2U(dVar33) >> 0x20);
          dVar34 = dVar33;
          if (cVar37 == '\0') {
            dVar34 = CONCAT44D(uVar4,SUB84(dVar29,0));
          }
          if (cVar36 == '\0') {
            in_dr0 = CONCAT44D((int)(D2U(dVar32) >> 0x20),
                                      F32LO(dVar32) * F32LO(dVar33));
          }
          else {
            in_dr0 = dVar32 * dVar33;
          }
          in_dr2 = (double)((ulonglong)uVar4 << 0x20);
          if (cVar36 == '\0') {
            fVar26 = F32HI(dVar34) - F32LO(in_dr0);
            in_dr4 = CONCAT44D(fVar26,SUB84(dVar34,0));
            bVar35 = 0.0 < fVar26;
          }
          else {
            in_dr4 = dVar34 - in_dr0;
            bVar35 = in_dr2 < in_dr4;
          }
          uVar31 = SUB84(in_dr4,0);
          (*(uint *)(fr0_ - 0x38)) = 0;
          if (bVar35) {
            if (((*(undefined4 *)(unsigned)(unsigned)0x8c4ab308) & 0x800000) == 0) goto LAB_8c24b9a2;
            (*(uint *)(fr0_ - 0x38)) = 0x8000;
          }
          *(undefined4 *)(unsigned)pdVar18 = 0xe0000000;
          CacheBlockWriteBack(pdVar18);
          if (*(uint *)(unsigned)((int)pdVar18 + 0x3c) != ((*(uint *)(fr0_ - 0x38)) | uVar3)) {
            *(uint *)(unsigned)((int)pdVar18 + 0x3c) = (*(uint *)(fr0_ - 0x38)) | uVar3;
            ar6_01 = pdVar18 + 6;
            puVar10 = ((undefined1 *)(unsigned)0x8c4c2620);
            pdVar13 = pdVar18 + 2;
            uVar4 = (*(uint *)(fr0_ - 0x38));
            (vsp = ((unsigned long)(fr0_ - 72)), FUN_8c23bae2(((undefined1 *)(unsigned)0x8c4c2620),pdVar13,ar6_01,(*(uint *)(fr0_ - 0x38))));
            if (cVar37 != '\0') {
              in_xd6 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4c2630),(*(undefined4 *)(unsigned)(unsigned)0x8c4c262c));
              in_xd4 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4c2628),(*(undefined4 *)(unsigned)(unsigned)0x8c4c2624));
            }
            uVar31 = (vsp = ((unsigned long)(fr0_ - 72)), float_to_color_u8(puVar10,pdVar13,ar6_01,uVar4));
            *(undefined4 *)(unsigned)(pdVar18 + 5) = uVar31;
            uVar31 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c2634);
            if (cVar37 != '\0') {
              in_xd6 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4c2640),(*(undefined4 *)(unsigned)(unsigned)0x8c4c263c));
              in_xd4 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4c2638),(*(undefined4 *)(unsigned)(unsigned)0x8c4c2634));
              uVar31 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c2630);
            }
            uVar28 = (vsp = ((unsigned long)(fr0_ - 72)), float_to_color_u8(puVar10,pdVar13,ar6_01,uVar4));
            *(undefined4 *)(unsigned)((int)pdVar18 + 0x2c) = uVar28;
          }
          if (cVar37 == '\0') {
            pdVar13 = (double *)(unsigned)((int)pdVar18 + 0x34);
            dVar33 = CONCAT44D(*(undefined4 *)(unsigned)(pdVar18 + 6),uVar7);
            dVar29 = CONCAT44D(uVar7,SUB84(in_dr0,0));
          }
          else {
            dVar33 = pdVar18[6];
            pdVar13 = pdVar18 + 7;
            dVar29 = in_xd14;
            in_xd2 = in_xd14;
          }
          if (cVar36 == '\0') {
            dVar33 = (double)(ulonglong)
                             (uint)(F32HI(dVar29) *
                                    F32HI(dVar33) + F32LO(dVar33));
          }
          if (cVar37 == '\0') {
            *(int *)(unsigned)(pdVar18 + 4) = SUB84(dVar33,0);
            dVar32 = CONCAT44D(*(undefined4 *)(unsigned)pdVar13,uVar7);
            dVar33 = CONCAT44D(uVar7,SUB84(dVar29,0));
            dVar29 = CONCAT44D(uVar7,uVar31);
          }
          else {
            pdVar18[4] = in_xd2;
            dVar32 = *pdVar13;
            in_xd2 = in_xd14;
            dVar33 = in_xd14;
            dVar29 = in_xd14;
          }
          pdVar13 = (double *)(unsigned)((int)pdVar18 + 0x24);
          if (cVar36 == '\0') {
            dVar32 = (double)(ulonglong)
                             (uint)(F32HI(dVar33) *
                                    F32HI(dVar32) + F32LO(dVar32));
          }
          if (cVar37 == '\0') {
            *(int *)(unsigned)pdVar13 = SUB84(dVar32,0);
          }
          else {
            *pdVar13 = in_xd2;
          }
          CacheBlockWriteBack(pdVar13);
          if (cVar37 == '\0') {
            dVar33 = CONCAT44D(*(undefined4 *)(unsigned)pdVar18,SUB84(dVar33,0));
            dVar32 = CONCAT44D(*(undefined4 *)(unsigned)((int)pdVar18 + 4),SUB84(dVar32,0));
            pdVar18 = pdVar18 + 1;
          }
          else {
            dVar33 = *pdVar18;
            dVar32 = pdVar18[1];
            pdVar18 = pdVar18 + 2;
          }
          if (cVar37 == '\0') {
            uVar31 = *(undefined4 *)(unsigned)(pdVar18 + 2);
            dVar29 = CONCAT44D(uVar31,SUB84(dVar29,0));
            *(undefined4 *)(unsigned)((int)unaff_r8 + 0x1c) = *(undefined4 *)(unsigned)((int)pdVar18 + 0x14);
            *(undefined4 *)(unsigned)(unaff_r8 + 3) = uVar31;
            *(int *)(unsigned)((int)unaff_r8 + 0x14) = (int)(D2U(dVar32) >> 0x20);
            unaff_r8 = unaff_r8 + 2;
            *(int *)(unsigned)unaff_r8 = (int)(D2U(dVar33) >> 0x20);
          }
          else {
            dVar29 = pdVar18[2];
            unaff_r8[3] = pdVar18[3];
            unaff_r8[2] = dVar29;
            unaff_r8[1] = dVar32;
            *unaff_r8 = dVar33;
          }
          uVar31 = SUB84(dVar29,0);
          *(undefined4 *)(unsigned)pdVar19 = 0xe0000000;
          CacheBlockWriteBack(pdVar19);
          if (*(uint *)(unsigned)((int)pdVar19 + 0x3c) != ((*(uint *)(fr0_ - 0x38)) | uVar3)) {
            *(uint *)(unsigned)((int)pdVar19 + 0x3c) = (*(uint *)(fr0_ - 0x38)) | uVar3;
            pdVar13 = pdVar19 + 6;
            puVar10 = ((undefined1 *)(unsigned)0x8c4c2620);
            pdVar18 = pdVar19 + 2;
            uVar4 = (*(uint *)(fr0_ - 0x38));
            (vsp = ((unsigned long)(fr0_ - 72)), FUN_8c23bae2(((undefined1 *)(unsigned)0x8c4c2620),pdVar18,pdVar13,(*(uint *)(fr0_ - 0x38))));
            if (cVar37 != '\0') {
              in_xd6 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4c2630),(*(undefined4 *)(unsigned)(unsigned)0x8c4c262c));
              in_xd4 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4c2628),(*(undefined4 *)(unsigned)(unsigned)0x8c4c2624));
            }
            uVar31 = (vsp = ((unsigned long)(fr0_ - 72)), float_to_color_u8(puVar10,pdVar18,pdVar13,uVar4));
            *(undefined4 *)(unsigned)(pdVar19 + 5) = uVar31;
            uVar31 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c2634);
            if (cVar37 != '\0') {
              in_xd6 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4c2640),(*(undefined4 *)(unsigned)(unsigned)0x8c4c263c));
              in_xd4 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4c2638),(*(undefined4 *)(unsigned)(unsigned)0x8c4c2634));
              uVar31 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c2630);
            }
            uVar28 = (vsp = ((unsigned long)(fr0_ - 72)), float_to_color_u8(puVar10,pdVar18,pdVar13,uVar4));
            *(undefined4 *)(unsigned)((int)pdVar19 + 0x2c) = uVar28;
          }
          if (cVar37 == '\0') {
            pdVar18 = (double *)(unsigned)((int)pdVar19 + 0x34);
            dVar29 = CONCAT44D(*(undefined4 *)(unsigned)(pdVar19 + 6),uVar7);
            dVar33 = CONCAT44D(uVar7,SUB84(dVar33,0));
          }
          else {
            dVar29 = pdVar19[6];
            pdVar18 = pdVar19 + 7;
            dVar33 = in_xd14;
            in_xd2 = in_xd14;
          }
          if (cVar36 == '\0') {
            dVar29 = (double)(ulonglong)
                             (uint)(F32HI(dVar33) *
                                    F32HI(dVar29) + F32LO(dVar29));
          }
          if (cVar37 == '\0') {
            *(int *)(unsigned)(pdVar19 + 4) = SUB84(dVar29,0);
            dVar32 = CONCAT44D(*(undefined4 *)(unsigned)pdVar18,uVar7);
            dVar33 = CONCAT44D(uVar7,SUB84(dVar33,0));
            dVar29 = CONCAT44D(uVar7,uVar31);
          }
          else {
            pdVar19[4] = in_xd2;
            dVar32 = *pdVar18;
            in_xd2 = in_xd14;
            dVar33 = in_xd14;
            dVar29 = in_xd14;
          }
          pdVar18 = (double *)(unsigned)((int)pdVar19 + 0x24);
          if (cVar36 == '\0') {
            dVar32 = (double)(ulonglong)
                             (uint)(F32HI(dVar33) *
                                    F32HI(dVar32) + F32LO(dVar32));
          }
          if (cVar37 == '\0') {
            *(int *)(unsigned)pdVar18 = SUB84(dVar32,0);
          }
          else {
            *pdVar18 = in_xd2;
          }
          CacheBlockWriteBack(pdVar18);
          if (cVar37 == '\0') {
            dVar33 = CONCAT44D(*(undefined4 *)(unsigned)pdVar19,SUB84(dVar33,0));
            dVar32 = CONCAT44D(*(undefined4 *)(unsigned)((int)pdVar19 + 4),SUB84(dVar32,0));
            pdVar19 = pdVar19 + 1;
          }
          else {
            dVar33 = *pdVar19;
            dVar32 = pdVar19[1];
            pdVar19 = pdVar19 + 2;
          }
          if (cVar37 == '\0') {
            uVar31 = *(undefined4 *)(unsigned)(pdVar19 + 2);
            dVar29 = CONCAT44D(uVar31,SUB84(dVar29,0));
            *(undefined4 *)(unsigned)((int)unaff_r8 + 0x3c) = *(undefined4 *)(unsigned)((int)pdVar19 + 0x14);
            *(undefined4 *)(unsigned)(unaff_r8 + 7) = uVar31;
            *(int *)(unsigned)((int)unaff_r8 + 0x34) = (int)(D2U(dVar32) >> 0x20);
            pdVar18 = unaff_r8 + 6;
            *(int *)(unsigned)pdVar18 = (int)(D2U(dVar33) >> 0x20);
          }
          else {
            dVar29 = pdVar19[2];
            unaff_r8[7] = pdVar19[3];
            unaff_r8[6] = dVar29;
            unaff_r8[5] = dVar32;
            pdVar18 = unaff_r8 + 4;
            *pdVar18 = dVar33;
          }
          uVar31 = SUB84(dVar29,0);
          *(undefined4 *)(unsigned)pdVar22 = 0xe0000000;
          CacheBlockWriteBack(pdVar22);
          if (*(uint *)(unsigned)((int)pdVar22 + 0x3c) != ((*(uint *)(fr0_ - 0x38)) | uVar3)) {
            *(uint *)(unsigned)((int)pdVar22 + 0x3c) = (*(uint *)(fr0_ - 0x38)) | uVar3;
            pdVar13 = pdVar22 + 6;
            puVar10 = ((undefined1 *)(unsigned)0x8c4c2620);
            pdVar19 = pdVar22 + 2;
            uVar4 = (*(uint *)(fr0_ - 0x38));
            (vsp = ((unsigned long)(fr0_ - 72)), FUN_8c23bae2(((undefined1 *)(unsigned)0x8c4c2620),pdVar19,pdVar13,(*(uint *)(fr0_ - 0x38))));
            if (cVar37 != '\0') {
              in_xd6 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4c2630),(*(undefined4 *)(unsigned)(unsigned)0x8c4c262c));
              in_xd4 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4c2628),(*(undefined4 *)(unsigned)(unsigned)0x8c4c2624));
            }
            uVar31 = (vsp = ((unsigned long)(fr0_ - 72)), float_to_color_u8(puVar10,pdVar19,pdVar13,uVar4));
            *(undefined4 *)(unsigned)(pdVar22 + 5) = uVar31;
            uVar31 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c2634);
            if (cVar37 != '\0') {
              in_xd6 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4c2640),(*(undefined4 *)(unsigned)(unsigned)0x8c4c263c));
              in_xd4 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4c2638),(*(undefined4 *)(unsigned)(unsigned)0x8c4c2634));
              uVar31 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c2630);
            }
            uVar28 = (vsp = ((unsigned long)(fr0_ - 72)), float_to_color_u8(puVar10,pdVar19,pdVar13,uVar4));
            *(undefined4 *)(unsigned)((int)pdVar22 + 0x2c) = uVar28;
          }
          if (cVar37 == '\0') {
            pdVar19 = (double *)(unsigned)((int)pdVar22 + 0x34);
            dVar29 = CONCAT44D(*(undefined4 *)(unsigned)(pdVar22 + 6),uVar7);
            dVar33 = CONCAT44D(uVar7,SUB84(dVar33,0));
          }
          else {
            dVar29 = pdVar22[6];
            pdVar19 = pdVar22 + 7;
            dVar33 = in_xd14;
            in_xd2 = in_xd14;
          }
          if (cVar36 == '\0') {
            dVar29 = (double)(ulonglong)
                             (uint)(F32HI(dVar33) *
                                    F32HI(dVar29) + F32LO(dVar29));
          }
          if (cVar37 == '\0') {
            *(int *)(unsigned)(pdVar22 + 4) = SUB84(dVar29,0);
            dVar32 = CONCAT44D(*(undefined4 *)(unsigned)pdVar19,uVar7);
            dVar33 = CONCAT44D(uVar7,SUB84(dVar33,0));
            dVar29 = CONCAT44D(uVar7,uVar31);
          }
          else {
            pdVar22[4] = in_xd2;
            dVar32 = *pdVar19;
            in_xd2 = in_xd14;
            dVar33 = in_xd14;
            dVar29 = in_xd14;
          }
          pdVar19 = (double *)(unsigned)((int)pdVar22 + 0x24);
          if (cVar36 == '\0') {
            dVar32 = (double)(ulonglong)
                             (uint)(F32HI(dVar33) *
                                    F32HI(dVar32) + F32LO(dVar32));
          }
          if (cVar37 == '\0') {
            *(int *)(unsigned)pdVar19 = SUB84(dVar32,0);
          }
          else {
            *pdVar19 = in_xd2;
          }
          CacheBlockWriteBack(pdVar19);
          if (cVar37 == '\0') {
            dVar33 = CONCAT44D(*(undefined4 *)(unsigned)pdVar22,SUB84(dVar33,0));
            dVar32 = CONCAT44D(*(undefined4 *)(unsigned)((int)pdVar22 + 4),SUB84(dVar32,0));
            pdVar22 = pdVar22 + 1;
          }
          else {
            dVar33 = *pdVar22;
            dVar32 = pdVar22[1];
            pdVar22 = pdVar22 + 2;
          }
          if (cVar37 == '\0') {
            uVar31 = *(undefined4 *)(unsigned)(pdVar22 + 2);
            dVar29 = CONCAT44D(uVar31,SUB84(dVar29,0));
            *(undefined4 *)(unsigned)((int)pdVar18 + 0x3c) = *(undefined4 *)(unsigned)((int)pdVar22 + 0x14);
            *(undefined4 *)(unsigned)(pdVar18 + 7) = uVar31;
            *(int *)(unsigned)((int)pdVar18 + 0x34) = (int)(D2U(dVar32) >> 0x20);
            pdVar18 = pdVar18 + 6;
            *(int *)(unsigned)pdVar18 = (int)(D2U(dVar33) >> 0x20);
          }
          else {
            dVar29 = pdVar22[2];
            pdVar18[7] = pdVar22[3];
            pdVar18[6] = dVar29;
            pdVar18[5] = dVar32;
            pdVar18 = pdVar18 + 4;
            *pdVar18 = dVar33;
          }
          uVar31 = SUB84(dVar29,0);
          *(undefined4 *)(unsigned)pdVar8 = 0xf0000000;
          CacheBlockWriteBack(pdVar8);
          if (*(uint *)(unsigned)((int)pdVar8 + 0x3c) != ((*(uint *)(fr0_ - 0x38)) | uVar3)) {
            *(uint *)(unsigned)((int)pdVar8 + 0x3c) = (*(uint *)(fr0_ - 0x38)) | uVar3;
            puVar10 = ((undefined1 *)(unsigned)0x8c4c2620);
            pdVar22 = pdVar8 + 6;
            pdVar19 = pdVar8 + 2;
            (vsp = ((unsigned long)(fr0_ - 72)), FUN_8c23bae2(((undefined1 *)(unsigned)0x8c4c2620),pdVar19,pdVar22,(*(uint *)(fr0_ - 0x38))));
            if (cVar37 != '\0') {
              in_xd6 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4c2630),(*(undefined4 *)(unsigned)(unsigned)0x8c4c262c));
              in_xd4 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4c2628),(*(undefined4 *)(unsigned)(unsigned)0x8c4c2624));
            }
            uVar31 = (vsp = ((unsigned long)(fr0_ - 72)), float_to_color_u8(puVar10,pdVar19,pdVar22,(*(uint *)(fr0_ - 0x38))));
            *(undefined4 *)(unsigned)(pdVar8 + 5) = uVar31;
            uVar31 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c2634);
            if (cVar37 != '\0') {
              in_xd6 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4c2640),(*(undefined4 *)(unsigned)(unsigned)0x8c4c263c));
              in_xd4 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4c2638),(*(undefined4 *)(unsigned)(unsigned)0x8c4c2634));
              uVar31 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c2630);
            }
            uVar28 = (vsp = ((unsigned long)(fr0_ - 72)), float_to_color_u8(puVar10,pdVar19,pdVar22,(*(uint *)(fr0_ - 0x38))));
            *(undefined4 *)(unsigned)((int)pdVar8 + 0x2c) = uVar28;
          }
          if (cVar37 == '\0') {
            dVar29 = CONCAT44D(*(undefined4 *)(unsigned)(pdVar8 + 6),uVar7);
            pdVar19 = (double *)(unsigned)((int)pdVar8 + 0x34);
            dVar33 = CONCAT44D(uVar7,SUB84(dVar33,0));
          }
          else {
            dVar29 = pdVar8[6];
            pdVar19 = pdVar8 + 7;
            dVar33 = in_xd14;
            in_xd2 = in_xd14;
          }
          if (cVar36 == '\0') {
            dVar29 = (double)(ulonglong)
                             (uint)(F32HI(dVar33) *
                                    F32HI(dVar29) + F32LO(dVar29));
          }
          if (cVar37 == '\0') {
            *(int *)(unsigned)(pdVar8 + 4) = SUB84(dVar29,0);
            dVar32 = CONCAT44D(*(undefined4 *)(unsigned)pdVar19,uVar7);
            dVar33 = CONCAT44D(uVar7,SUB84(dVar33,0));
            dVar29 = CONCAT44D(uVar7,uVar31);
          }
          else {
            pdVar8[4] = in_xd2;
            dVar32 = *pdVar19;
            in_xd2 = in_xd14;
            dVar33 = in_xd14;
            dVar29 = in_xd14;
          }
          pdVar19 = (double *)(unsigned)((int)pdVar8 + 0x24);
          if (cVar36 == '\0') {
            dVar32 = (double)(ulonglong)
                             (uint)(F32HI(dVar33) *
                                    F32HI(dVar32) + F32LO(dVar32));
          }
          if (cVar37 == '\0') {
            *(int *)(unsigned)pdVar19 = SUB84(dVar32,0);
          }
          else {
            *pdVar19 = in_xd2;
          }
          CacheBlockWriteBack(pdVar19);
          if (cVar37 == '\0') {
            in_dr0 = CONCAT44D(*(undefined4 *)(unsigned)pdVar8,SUB84(dVar33,0));
            in_dr2 = CONCAT44D(*(undefined4 *)(unsigned)((int)pdVar8 + 4),SUB84(dVar32,0));
            pdVar8 = pdVar8 + 1;
          }
          else {
            in_dr0 = *pdVar8;
            in_dr2 = pdVar8[1];
            pdVar8 = pdVar8 + 2;
          }
          if (cVar37 == '\0') {
            uVar31 = *(undefined4 *)(unsigned)(pdVar8 + 2);
            in_dr4 = CONCAT44D(uVar31,SUB84(dVar29,0));
            *(undefined4 *)(unsigned)((int)pdVar18 + 0x3c) = *(undefined4 *)(unsigned)((int)pdVar8 + 0x14);
            *(undefined4 *)(unsigned)(pdVar18 + 7) = uVar31;
            *(int *)(unsigned)((int)pdVar18 + 0x34) = (int)((ulonglong)in_dr2 >> 0x20);
            pdVar18 = pdVar18 + 6;
            *(int *)(unsigned)pdVar18 = (int)((ulonglong)in_dr0 >> 0x20);
          }
          else {
            in_dr4 = pdVar8[2];
            pdVar18[7] = pdVar8[3];
            pdVar18[6] = in_dr4;
            pdVar18[5] = in_dr2;
            pdVar18 = pdVar18 + 4;
            *pdVar18 = in_dr0;
          }
          unaff_r8 = pdVar18 + 4;
          (*(undefined4 *)(unsigned)(unsigned)0x8c4aa520) = (*(undefined4 *)(unsigned)(unsigned)0x8c4aa520) + 4;
        }
        else {
          if (cVar37 == '\0') {
            uVar31 = *(undefined4 *)(unsigned)(pdVar19 + 3);
            uVar28 = *(undefined4 *)(unsigned)((int)pdVar19 + 0x14);
            dVar32 = CONCAT44D(*(undefined4 *)(unsigned)((int)pdVar18 + 0x14),uVar31);
            dVar29 = CONCAT44D(*(undefined4 *)(unsigned)(pdVar18 + 3),uVar28);
            in_dr2 = CONCAT44D((int)((ulonglong)in_dr2 >> 0x20),uVar28);
            dVar34 = CONCAT44D(uVar31,SUB84(in_dr0,0));
            dVar33 = in_xd2;
          }
          else {
            dVar34 = pdVar19[3];
            dVar33 = *(double *)(unsigned)((int)pdVar19 + 0x14);
            dVar32 = *(double *)(unsigned)((int)pdVar18 + 0x14);
            dVar29 = pdVar18[3];
            uVar28 = SUB84(dVar29,0);
            uVar31 = SUB84(dVar32,0);
            in_xd4 = dVar33;
            in_xd8 = dVar34;
          }
          fVar26 = F32HI(dVar29);
          fVar24 = F32HI(dVar32);
          if (cVar36 == '\0') {
            fVar25 = F32LO(in_dr2) * fVar26;
            dVar34 = CONCAT44D(F32HI(dVar34) * fVar24,SUB84(dVar34,0));
          }
          else {
            fVar25 = SUB84(in_dr2 * dVar29,0);
            dVar34 = dVar34 * dVar32;
          }
          if (cVar37 == '\0') {
            dVar30 = CONCAT44D(*(undefined4 *)(unsigned)(pdVar18 + 2),*(undefined4 *)(unsigned)(pdVar19 + 2));
            dVar27 = CONCAT44D(uVar31,fVar25);
          }
          else {
            in_xd6 = pdVar19[2];
            dVar30 = pdVar18[2];
            dVar27 = in_xd8;
          }
          fVar25 = F32HI(dVar30);
          if (cVar36 == '\0') {
            dVar27 = CONCAT44D(F32HI(dVar27) * fVar25,SUB84(dVar27,0));
          }
          else {
            dVar27 = dVar27 * dVar30;
          }
          dVar2 = in_xd4;
          if (cVar37 == '\0') {
            dVar34 = CONCAT44D((int)(D2U(dVar34) >> 0x20),uVar28);
            dVar2 = in_xd0;
          }
          in_xd0 = dVar2;
          if (cVar36 == '\0') {
            dVar34 = CONCAT44D(F32HI(dVar34) - F32LO(dVar27),
                                      SUB84(dVar34,0));
          }
          else {
            dVar34 = dVar34 - dVar27;
          }
          in_xd2 = in_xd6;
          if (cVar37 == '\0') {
            dVar27 = CONCAT44D((int)(D2U(dVar27) >> 0x20),SUB84(dVar30,0));
            in_xd2 = dVar33;
          }
          if (cVar36 == '\0') {
            dVar27 = CONCAT44D((int)(D2U(dVar27) >> 0x20),F32LO(dVar27) * fVar26);
          }
          else {
            dVar27 = dVar27 * dVar29;
          }
          dVar33 = in_xd6;
          if (cVar37 == '\0') {
            dVar33 = CONCAT44D(SUB84(dVar30,0),SUB84(in_dr12,0));
          }
          if (cVar36 == '\0') {
            in_dr12 = CONCAT44D(F32HI(dVar33) * fVar24,SUB84(dVar33,0));
            dVar34 = CONCAT44D((int)(D2U(dVar34) >> 0x20),F32LO(dVar34) * fVar25);
            fVar26 = F32LO(dVar27) - F32HI(dVar27);
          }
          else {
            in_dr12 = dVar33 * dVar32;
            dVar34 = dVar34 * dVar30;
            fVar26 = SUB84(dVar27 - dVar27,0);
          }
          if (cVar37 == '\0') {
            dVar33 = CONCAT44D(*(undefined4 *)(unsigned)((int)pdVar22 + 0x14),fVar26);
          }
          else {
            dVar33 = *(double *)(unsigned)((int)pdVar22 + 0x14);
          }
          if (cVar36 == '\0') {
            dVar34 = CONCAT44D((int)(D2U(dVar34) >> 0x20),
                                      F32LO(dVar34) - F32HI(in_dr12));
            dVar33 = CONCAT44D(F32HI(dVar33) * F32LO(dVar33),
                                      SUB84(dVar33,0));
          }
          else {
            dVar34 = dVar34 - in_dr12;
            dVar33 = dVar33 * dVar33;
          }
          if (cVar37 == '\0') {
            dVar33 = CONCAT44D((int)(D2U(dVar33) >> 0x20),*(undefined4 *)(unsigned)(pdVar22 + 2))
            ;
          }
          else {
            in_xd2 = pdVar22[2];
          }
          if (cVar36 == '\0') {
            dVar33 = CONCAT44D(F32HI(dVar34) * F32LO(dVar33) +
                                      F32HI(dVar33),SUB84(dVar33,0));
          }
          if (cVar37 == '\0') {
            dVar33 = CONCAT44D((int)(D2U(dVar33) >> 0x20),*(undefined4 *)(unsigned)(pdVar22 + 3))
            ;
            in_dr0 = CONCAT44D(SUB84(dVar34,0),SUB84(dVar34,0));
          }
          else {
            in_xd2 = pdVar22[3];
            in_dr0 = in_xd0;
          }
          if (cVar36 == '\0') {
            dVar33 = (double)((ulonglong)
                              (uint)(F32HI(in_dr0) * F32LO(dVar33) +
                                    F32HI(dVar33)) << 0x20);
          }
          in_dr2 = (double)(D2U(dVar33) & 0xffffffff00000000);
          in_dr4 = in_dr2;
          if (cVar37 == '\0') {
            in_dr4 = CONCAT44D((int)(D2U(dVar33) >> 0x20),uVar28);
          }
          if (cVar36 == '\0') {
            bVar35 = 0.0 < F32HI(in_dr4);
          }
          else {
            bVar35 = in_dr2 < in_dr4;
          }
          (*(uint *)(fr0_ - 0x38)) = 0;
          if (bVar35) {
            if (((*(undefined4 *)(unsigned)(unsigned)0x8c4ab308) & 0x800000) == 0) goto LAB_8c24b9a2;
            (*(uint *)(fr0_ - 0x38)) = 0x8000;
          }
          if ((*(uint *)(unsigned)pdVar18 & *(uint *)(unsigned)pdVar19 & *(uint *)(unsigned)pdVar22 & 1) == 0) {
            (vsp = ((unsigned long)(fr0_ - 72)), FUN_8c23dc42(pdVar18,pdVar19,pdVar22,(*(uint *)(fr0_ - 0x38)) | (int)(short)uVar3));
          }
          if ((*(uint *)(unsigned)pdVar19 & *(uint *)(unsigned)pdVar22 & *(uint *)(unsigned)pdVar8 & 1) == 0) {
            (vsp = ((unsigned long)(fr0_ - 72)), FUN_8c23dc42(pdVar19,pdVar22,pdVar8,(*(uint *)(fr0_ - 0x38)) | (int)(short)uVar3));
          }
        }
      }
LAB_8c24b9a2:
      (*(int *)(fr0_ - 0x2c)) = (*(int *)(fr0_ - 0x2c)) + 1;
    }
  }
  else if (uVar4 == 0x8000) {
    (*(int *)(fr0_ - 0x40)) = 0;
    while( true ) {
      uVar31 = SUB84(in_dr6,0);
      uVar28 = SUB84(in_dr4,0);
      uVar4 = (uint)ar4[1];
      if ((int)uVar4 <= (*(int *)(fr0_ - 0x40))) break;
      iVar15 = 0;
      puVar21 = puVar20 + 1;
      uVar16 = 0;
      uVar23 = 0xffffffff;
      uVar4 = (uint)*puVar20;
      (*(undefined4 *)(unsigned)(unsigned)0x8c4aa51c) = (*(undefined4 *)(unsigned)(unsigned)0x8c4aa51c) + uVar4;
      puVar11 = puVar21;
      if (uVar4 != 0) {
        do {
          uVar14 = *puVar11;
          puVar11 = puVar11 + 1;
          iVar15 = iVar15 + 1;
          uVar9 = *(uint *)(unsigned)((uint)uVar14 * 0x40 + (*(undefined4 *)(unsigned)(unsigned)0x8c4aa510));
          uVar23 = uVar23 & uVar9;
          uVar16 = uVar16 | uVar9;
        } while (iVar15 < (int)uVar4);
      }
      if ((uVar23 & 0x3f) == 0) {
        if ((uVar16 & 1) == 0) {
          iVar15 = (uint)puVar20[2] * 0x40 + (*(undefined4 *)(unsigned)(unsigned)0x8c4aa510);
          if (cVar37 == '\0') {
            uVar28 = *(undefined4 *)(unsigned)(iVar15 + 4);
          }
          else {
            in_xd4 = *(double *)(unsigned)(iVar15 + 4);
          }
          iVar12 = (uint)*puVar21 * 0x40 + (*(undefined4 *)(unsigned)(unsigned)0x8c4aa510);
          if (cVar37 == '\0') {
            dVar33 = CONCAT44D(uVar28,*(undefined4 *)(unsigned)(iVar12 + 4));
          }
          else {
            in_xd2 = *(double *)(unsigned)(iVar12 + 4);
            dVar33 = in_xd4;
          }
          if (cVar36 == '\0') {
            dVar33 = CONCAT44D(F32HI(dVar33) - F32LO(dVar33),
                                      SUB84(dVar33,0));
          }
          else {
            dVar33 = dVar33 - dVar33;
          }
          iVar17 = (uint)puVar20[3] * 0x40 + (*(undefined4 *)(unsigned)(unsigned)0x8c4aa510);
          if (cVar37 == '\0') {
            fVar26 = *(float *)(unsigned)(iVar15 + 8);
            dVar33 = CONCAT44D((int)(D2U(dVar33) >> 0x20),*(undefined4 *)(unsigned)(iVar17 + 8));
            in_dr0 = CONCAT44D((int)((ulonglong)in_dr0 >> 0x20),fVar26);
            dVar29 = CONCAT44D(fVar26,uVar28);
          }
          else {
            in_xd0 = *(double *)(unsigned)(iVar15 + 8);
            in_xd2 = *(double *)(unsigned)(iVar17 + 8);
            fVar26 = F32HI(in_xd0);
            dVar29 = in_xd0;
          }
          if (cVar36 == '\0') {
            fVar26 = F32LO(dVar33) - fVar26;
            dVar33 = CONCAT44D(F32HI(dVar33) * fVar26,fVar26);
          }
          else {
            dVar33 = (dVar33 - dVar29) * (dVar33 - dVar29);
          }
          if (cVar37 == '\0') {
            dVar33 = CONCAT44D((int)(D2U(dVar33) >> 0x20),*(undefined4 *)(unsigned)(iVar12 + 8));
          }
          else {
            in_xd2 = *(double *)(unsigned)(iVar12 + 8);
          }
          if (cVar36 == '\0') {
            dVar32 = CONCAT44D((int)((ulonglong)in_dr0 >> 0x20),
                                      F32LO(in_dr0) - F32LO(dVar33));
          }
          else {
            dVar32 = in_dr0 - dVar33;
          }
          uVar28 = (undefined4)(D2U(dVar33) >> 0x20);
          if (cVar37 == '\0') {
            dVar33 = CONCAT44D(uVar28,*(undefined4 *)(unsigned)(iVar17 + 4));
            dVar29 = CONCAT44D(uVar28,SUB84(dVar29,0));
          }
          else {
            in_xd2 = *(double *)(unsigned)(iVar17 + 4);
            dVar29 = dVar33;
          }
          if (cVar36 == '\0') {
            fVar26 = F32LO(dVar33) - F32LO(dVar29);
            dVar33 = CONCAT44D((int)(D2U(dVar33) >> 0x20),fVar26);
            in_dr0 = CONCAT44D((int)(D2U(dVar32) >> 0x20),F32LO(dVar32) * fVar26);
          }
          else {
            dVar33 = dVar33 - dVar29;
            in_dr0 = dVar32 * dVar33;
          }
          in_dr2 = (double)(D2U(dVar33) & 0xffffffff00000000);
          if (cVar36 == '\0') {
            fVar26 = F32HI(dVar29) - F32LO(in_dr0);
            in_dr4 = CONCAT44D(fVar26,SUB84(dVar29,0));
            bVar35 = 0.0 < fVar26;
          }
          else {
            in_dr4 = dVar29 - in_dr0;
            bVar35 = in_dr2 < in_dr4;
          }
          uVar28 = SUB84(in_dr4,0);
          (*(uint *)(fr0_ - 0x44)) = 0;
          if (bVar35) {
            if (((*(undefined4 *)(unsigned)(unsigned)0x8c4ab308) & 0x800000) == 0) goto LAB_8c24bcd6;
            (*(uint *)(fr0_ - 0x44)) = 0x8000;
          }
          (*(undefined4 *)(unsigned)(unsigned)0x8c4aa520) = (*(undefined4 *)(unsigned)(unsigned)0x8c4aa520) + uVar4;
          (*(uint *)(fr0_ - 0x38)) = 0;
          if (0 < (int)(uVar4 - 1)) {
            do {
              uVar31 = SUB84(in_dr6,0);
              uVar28 = SUB84(in_dr4,0);
              uVar5 = SUB84(in_dr0,0);
              uVar14 = *puVar21;
              puVar21 = puVar21 + 1;
              pdVar8 = (double *)(unsigned)((uint)uVar14 * 0x40 + (*(undefined4 *)(unsigned)(unsigned)0x8c4aa510));
              *(undefined4 *)(unsigned)pdVar8 = 0xe0000000;
              CacheBlockWriteBack(pdVar8);
              if (*(uint *)(unsigned)((int)pdVar8 + 0x3c) != (uVar3 | (*(uint *)(fr0_ - 0x44)))) {
                puVar10 = ((undefined1 *)(unsigned)0x8c4c2620);
                pdVar19 = pdVar8 + 6;
                *(uint *)(unsigned)((int)pdVar8 + 0x3c) = uVar3 | (*(uint *)(fr0_ - 0x44));
                pdVar18 = pdVar8 + 2;
                uVar16 = (*(uint *)(fr0_ - 0x44));
                (vsp = ((unsigned long)(fr0_ - 72)), FUN_8c23bae2(((undefined1 *)(unsigned)0x8c4c2620),pdVar18,pdVar19,(*(uint *)(fr0_ - 0x44))));
                if (cVar37 != '\0') {
                  in_xd6 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4c2630),(*(undefined4 *)(unsigned)(unsigned)0x8c4c262c));
                  in_xd4 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4c2628),(*(undefined4 *)(unsigned)(unsigned)0x8c4c2624));
                }
                uVar31 = (vsp = ((unsigned long)(fr0_ - 72)), float_to_color_u8(puVar10,pdVar18,pdVar19,uVar16));
                *(undefined4 *)(unsigned)(pdVar8 + 5) = uVar31;
                uVar28 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c2634);
                uVar31 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c263c);
                if (cVar37 != '\0') {
                  in_xd6 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4c2640),(*(undefined4 *)(unsigned)(unsigned)0x8c4c263c));
                  in_xd4 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4c2638),(*(undefined4 *)(unsigned)(unsigned)0x8c4c2634));
                  uVar28 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c2630);
                  uVar31 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c2638);
                }
                uVar6 = (vsp = ((unsigned long)(fr0_ - 72)), float_to_color_u8(puVar10,pdVar18,pdVar19,uVar16));
                *(undefined4 *)(unsigned)((int)pdVar8 + 0x2c) = uVar6;
              }
              if (cVar37 == '\0') {
                pdVar18 = (double *)(unsigned)((int)pdVar8 + 0x34);
                dVar33 = CONCAT44D(*(undefined4 *)(unsigned)(pdVar8 + 6),uVar7);
                dVar29 = CONCAT44D(uVar7,uVar5);
              }
              else {
                dVar33 = pdVar8[6];
                pdVar18 = pdVar8 + 7;
                dVar29 = in_xd14;
                in_xd2 = in_xd14;
              }
              if (cVar36 == '\0') {
                dVar33 = (double)(ulonglong)
                                 (uint)(F32HI(dVar29) *
                                        F32HI(dVar33) + F32LO(dVar33));
              }
              if (cVar37 == '\0') {
                *(int *)(unsigned)(pdVar8 + 4) = SUB84(dVar33,0);
                dVar32 = CONCAT44D(*(undefined4 *)(unsigned)pdVar18,uVar7);
                dVar33 = CONCAT44D(uVar7,SUB84(dVar29,0));
                dVar29 = CONCAT44D(uVar7,uVar28);
              }
              else {
                pdVar8[4] = in_xd2;
                dVar32 = *pdVar18;
                in_xd2 = in_xd14;
                dVar33 = in_xd14;
                dVar29 = in_xd14;
              }
              pdVar18 = (double *)(unsigned)((int)pdVar8 + 0x24);
              if (cVar36 == '\0') {
                dVar32 = (double)(ulonglong)
                                 (uint)(F32HI(dVar33) *
                                        F32HI(dVar32) + F32LO(dVar32));
              }
              if (cVar37 == '\0') {
                *(int *)(unsigned)pdVar18 = SUB84(dVar32,0);
              }
              else {
                *pdVar18 = in_xd2;
              }
              CacheBlockWriteBack(pdVar18);
              if (cVar37 == '\0') {
                in_dr0 = CONCAT44D(*(undefined4 *)(unsigned)pdVar8,SUB84(dVar33,0));
                dVar33 = CONCAT44D(*(undefined4 *)(unsigned)((int)pdVar8 + 4),SUB84(dVar32,0));
                pdVar8 = pdVar8 + 1;
              }
              else {
                in_dr0 = *pdVar8;
                dVar33 = pdVar8[1];
                pdVar8 = pdVar8 + 2;
              }
              if (cVar37 == '\0') {
                uVar28 = *(undefined4 *)(unsigned)(pdVar8 + 2);
                in_dr4 = CONCAT44D(uVar28,SUB84(dVar29,0));
                in_dr6 = CONCAT44D(*(undefined4 *)(unsigned)((int)pdVar8 + 0x14),uVar31);
                *(undefined4 *)(unsigned)((int)unaff_r8 + 0x1c) = *(undefined4 *)(unsigned)((int)pdVar8 + 0x14);
                *(undefined4 *)(unsigned)(unaff_r8 + 3) = uVar28;
                *(int *)(unsigned)((int)unaff_r8 + 0x14) = (int)(D2U(dVar33) >> 0x20);
                unaff_r8 = unaff_r8 + 2;
                *(int *)(unsigned)unaff_r8 = (int)((ulonglong)in_dr0 >> 0x20);
              }
              else {
                in_dr4 = pdVar8[2];
                in_dr6 = pdVar8[3];
                unaff_r8[3] = in_dr6;
                unaff_r8[2] = in_dr4;
                unaff_r8[1] = dVar33;
                *unaff_r8 = in_dr0;
              }
              uVar31 = SUB84(in_dr6,0);
              uVar28 = SUB84(in_dr4,0);
              unaff_r8 = unaff_r8 + 4;
              (*(uint *)(fr0_ - 0x38)) = (*(uint *)(fr0_ - 0x38)) + 1;
            } while ((int)(*(uint *)(fr0_ - 0x38)) < (int)(uVar4 - 1));
          }
          uVar5 = SUB84(in_dr0,0);
          puVar20 = puVar21 + 1;
          pdVar8 = (double *)(unsigned)((uint)*puVar21 * 0x40 + (*(undefined4 *)(unsigned)(unsigned)0x8c4aa510));
          *(undefined4 *)(unsigned)pdVar8 = 0xf0000000;
          CacheBlockWriteBack(pdVar8);
          if (*(uint *)(unsigned)((int)pdVar8 + 0x3c) != ((*(uint *)(fr0_ - 0x44)) | uVar3)) {
            *(uint *)(unsigned)((int)pdVar8 + 0x3c) = (*(uint *)(fr0_ - 0x44)) | uVar3;
            pdVar19 = pdVar8 + 6;
            puVar10 = ((undefined1 *)(unsigned)0x8c4c2620);
            pdVar18 = pdVar8 + 2;
            (vsp = ((unsigned long)(fr0_ - 72)), FUN_8c23bae2(((undefined1 *)(unsigned)0x8c4c2620),pdVar18,pdVar19,(*(uint *)(fr0_ - 0x44))));
            if (cVar37 != '\0') {
              in_xd6 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4c2630),(*(undefined4 *)(unsigned)(unsigned)0x8c4c262c));
              in_xd4 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4c2628),(*(undefined4 *)(unsigned)(unsigned)0x8c4c2624));
            }
            uVar31 = (vsp = ((unsigned long)(fr0_ - 72)), float_to_color_u8(puVar10,pdVar18,pdVar19,(*(uint *)(fr0_ - 0x44))));
            *(undefined4 *)(unsigned)(pdVar8 + 5) = uVar31;
            uVar28 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c2634);
            uVar31 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c263c);
            if (cVar37 != '\0') {
              in_xd6 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4c2640),(*(undefined4 *)(unsigned)(unsigned)0x8c4c263c));
              in_xd4 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4c2638),(*(undefined4 *)(unsigned)(unsigned)0x8c4c2634));
              uVar28 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c2630);
              uVar31 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c2638);
            }
            uVar6 = (vsp = ((unsigned long)(fr0_ - 72)), float_to_color_u8(puVar10,pdVar18,pdVar19,(*(uint *)(fr0_ - 0x44))));
            *(undefined4 *)(unsigned)((int)pdVar8 + 0x2c) = uVar6;
          }
          if (cVar37 == '\0') {
            pdVar18 = (double *)(unsigned)((int)pdVar8 + 0x34);
            dVar33 = CONCAT44D(*(undefined4 *)(unsigned)(pdVar8 + 6),uVar7);
            dVar29 = CONCAT44D(uVar7,uVar5);
          }
          else {
            dVar33 = pdVar8[6];
            pdVar18 = pdVar8 + 7;
            dVar29 = in_xd14;
            in_xd2 = in_xd14;
          }
          if (cVar36 == '\0') {
            dVar33 = (double)(ulonglong)
                             (uint)(F32HI(dVar29) *
                                    F32HI(dVar33) + F32LO(dVar33));
          }
          if (cVar37 == '\0') {
            *(int *)(unsigned)(pdVar8 + 4) = SUB84(dVar33,0);
            dVar32 = CONCAT44D(*(undefined4 *)(unsigned)pdVar18,uVar7);
            dVar33 = CONCAT44D(uVar7,SUB84(dVar29,0));
            dVar29 = CONCAT44D(uVar7,uVar28);
          }
          else {
            pdVar8[4] = in_xd2;
            dVar32 = *pdVar18;
            in_xd2 = in_xd14;
            dVar33 = in_xd14;
            dVar29 = in_xd14;
          }
          pdVar18 = (double *)(unsigned)((int)pdVar8 + 0x24);
          if (cVar36 == '\0') {
            dVar32 = (double)(ulonglong)
                             (uint)(F32HI(dVar33) *
                                    F32HI(dVar32) + F32LO(dVar32));
          }
          if (cVar37 == '\0') {
            *(int *)(unsigned)pdVar18 = SUB84(dVar32,0);
          }
          else {
            *pdVar18 = in_xd2;
          }
          CacheBlockWriteBack(pdVar18);
          if (cVar37 == '\0') {
            in_dr0 = CONCAT44D(*(undefined4 *)(unsigned)pdVar8,SUB84(dVar33,0));
            in_dr2 = CONCAT44D(*(undefined4 *)(unsigned)((int)pdVar8 + 4),SUB84(dVar32,0));
            pdVar8 = pdVar8 + 1;
          }
          else {
            in_dr0 = *pdVar8;
            in_dr2 = pdVar8[1];
            pdVar8 = pdVar8 + 2;
          }
          if (cVar37 == '\0') {
            uVar28 = *(undefined4 *)(unsigned)(pdVar8 + 2);
            in_dr4 = CONCAT44D(uVar28,SUB84(dVar29,0));
            in_dr6 = CONCAT44D(*(undefined4 *)(unsigned)((int)pdVar8 + 0x14),uVar31);
            *(undefined4 *)(unsigned)((int)unaff_r8 + 0x1c) = *(undefined4 *)(unsigned)((int)pdVar8 + 0x14);
            *(undefined4 *)(unsigned)(unaff_r8 + 3) = uVar28;
            *(int *)(unsigned)((int)unaff_r8 + 0x14) = (int)((ulonglong)in_dr2 >> 0x20);
            unaff_r8 = unaff_r8 + 2;
            *(int *)(unsigned)unaff_r8 = (int)((ulonglong)in_dr0 >> 0x20);
          }
          else {
            in_dr4 = pdVar8[2];
            in_dr6 = pdVar8[3];
            unaff_r8[3] = in_dr6;
            unaff_r8[2] = in_dr4;
            unaff_r8[1] = in_dr2;
            *unaff_r8 = in_dr0;
          }
          unaff_r8 = unaff_r8 + 4;
        }
        else {
          iVar15 = (uint)puVar20[2] * 0x40 + (*(undefined4 *)(unsigned)(unsigned)0x8c4aa510);
          if (cVar37 == '\0') {
            in_dr8 = CONCAT44D(*(undefined4 *)(unsigned)(iVar15 + 0x18),SUB84(in_dr8,0));
          }
          else {
            in_dr8 = *(double *)(unsigned)(iVar15 + 0x18);
          }
          iVar12 = (uint)*puVar21 * 0x40 + (*(undefined4 *)(unsigned)(unsigned)0x8c4aa510);
          uVar5 = (undefined4)((ulonglong)in_dr8 >> 0x20);
          if (cVar37 == '\0') {
            dVar29 = CONCAT44D(*(undefined4 *)(unsigned)(iVar12 + 0x14),uVar28);
            dVar33 = CONCAT44D(uVar5,SUB84(in_dr0,0));
          }
          else {
            dVar29 = *(double *)(unsigned)(iVar12 + 0x14);
            dVar33 = in_dr8;
          }
          if (cVar37 == '\0') {
            uVar31 = *(undefined4 *)(unsigned)(iVar15 + 0x14);
            in_dr8 = CONCAT44D(uVar5,*(undefined4 *)(unsigned)(iVar12 + 0x18));
          }
          else {
            in_xd6 = *(double *)(unsigned)(iVar15 + 0x14);
          }
          fVar26 = F32HI(dVar29);
          if (cVar36 == '\0') {
            dVar33 = CONCAT44D(F32HI(dVar33) * fVar26,SUB84(dVar33,0));
          }
          else {
            dVar33 = dVar33 * dVar29;
          }
          dVar32 = in_xd6;
          if (cVar37 == '\0') {
            in_dr2 = CONCAT44D((int)((ulonglong)in_dr2 >> 0x20),uVar31);
            dVar32 = in_xd2;
          }
          if (cVar36 == '\0') {
            dVar34 = CONCAT44D((int)((ulonglong)in_dr2 >> 0x20),
                                      F32LO(in_dr2) * F32LO(in_dr8));
          }
          else {
            dVar34 = in_dr2 * in_dr8;
          }
          iVar17 = (uint)puVar20[3] * 0x40 + (*(undefined4 *)(unsigned)(unsigned)0x8c4aa510);
          if (cVar36 == '\0') {
            dVar33 = CONCAT44D(F32HI(dVar33) - F32LO(dVar34),
                                      SUB84(dVar33,0));
          }
          else {
            dVar33 = dVar33 - dVar34;
          }
          if (cVar37 == '\0') {
            uVar28 = *(undefined4 *)(unsigned)(iVar15 + 0x10);
            dVar29 = CONCAT44D(fVar26,uVar28);
            in_dr6 = CONCAT44D(*(undefined4 *)(unsigned)(iVar12 + 0x10),uVar31);
            dVar34 = CONCAT44D((int)((ulonglong)in_dr8 >> 0x20),uVar28);
          }
          else {
            dVar32 = *(double *)(unsigned)(iVar15 + 0x10);
            in_dr6 = *(double *)(unsigned)(iVar12 + 0x10);
            uVar28 = SUB84(dVar29,0);
            dVar34 = in_dr8;
            in_xd4 = dVar32;
          }
          fVar26 = F32HI(in_dr6);
          if (cVar36 == '\0') {
            dVar34 = CONCAT44D(F32HI(dVar34) * fVar26,
                                      F32LO(dVar34) * F32LO(in_dr8));
          }
          else {
            dVar34 = dVar34 * in_dr6 * in_dr8;
          }
          dVar30 = in_xd4;
          dVar27 = in_xd6;
          if (cVar37 == '\0') {
            dVar33 = CONCAT44D((int)(D2U(dVar33) >> 0x20),SUB84(in_dr6,0));
            dVar30 = CONCAT44D(uVar28,SUB84(in_dr12,0));
            dVar27 = in_xd0;
          }
          in_xd0 = dVar27;
          if (cVar36 == '\0') {
            dVar33 = CONCAT44D((int)(D2U(dVar33) >> 0x20),F32LO(dVar33) * fVar26);
            in_dr12 = CONCAT44D(F32HI(dVar30) *
                                       F32HI(dVar29),SUB84(dVar30,0));
            fVar26 = F32LO(dVar34) - F32HI(dVar34);
          }
          else {
            dVar33 = dVar33 * in_dr6;
            in_dr12 = dVar30 * dVar29;
            fVar26 = SUB84(dVar34 - dVar34,0);
          }
          if (cVar37 == '\0') {
            dVar29 = CONCAT44D(*(undefined4 *)(unsigned)(iVar17 + 0x14),fVar26);
          }
          else {
            dVar29 = *(double *)(unsigned)(iVar17 + 0x14);
          }
          if (cVar36 == '\0') {
            dVar33 = CONCAT44D((int)(D2U(dVar33) >> 0x20),
                                      F32LO(dVar33) - F32HI(in_dr12));
            dVar29 = CONCAT44D(F32HI(dVar29) * F32LO(dVar29),
                                      SUB84(dVar29,0));
          }
          else {
            dVar33 = dVar33 - in_dr12;
            dVar29 = dVar29 * dVar29;
          }
          if (cVar37 == '\0') {
            dVar29 = CONCAT44D((int)(D2U(dVar29) >> 0x20),
                                      *(undefined4 *)(unsigned)(iVar17 + 0x10));
          }
          else {
            dVar32 = *(double *)(unsigned)(iVar17 + 0x10);
          }
          if (cVar36 == '\0') {
            dVar29 = CONCAT44D(F32HI(dVar33) * F32LO(dVar29) +
                                      F32HI(dVar29),SUB84(dVar29,0));
          }
          if (cVar37 == '\0') {
            dVar29 = CONCAT44D((int)(D2U(dVar29) >> 0x20),
                                      *(undefined4 *)(unsigned)(iVar17 + 0x18));
            in_dr0 = CONCAT44D(SUB84(dVar33,0),SUB84(dVar33,0));
            in_xd2 = dVar32;
          }
          else {
            in_xd2 = *(double *)(unsigned)(iVar17 + 0x18);
            in_dr0 = in_xd0;
          }
          if (cVar36 == '\0') {
            dVar29 = (double)((ulonglong)
                              (uint)(F32HI(in_dr0) * F32LO(dVar29) +
                                    F32HI(dVar29)) << 0x20);
          }
          in_dr2 = (double)(D2U(dVar29) & 0xffffffff00000000);
          in_dr4 = in_dr2;
          if (cVar37 == '\0') {
            in_dr4 = CONCAT44D((int)(D2U(dVar29) >> 0x20),uVar28);
          }
          if (cVar36 == '\0') {
            bVar35 = 0.0 < F32HI(in_dr4);
          }
          else {
            bVar35 = in_dr2 < in_dr4;
          }
          uVar14 = 0;
          if (bVar35) {
            if (((*(undefined4 *)(unsigned)(unsigned)0x8c4ab308) & 0x800000) == 0) goto LAB_8c24bcd6;
            uVar14 = 0x8000;
          }
          puVar11 = puVar20 + 2;
          puVar20 = puVar20 + 3;
          (*(uint *)(fr0_ - 0x3c)) = 0;
          ar4_00 = (uint *)(unsigned)((uint)*puVar21 * 0x40 + (*(undefined4 *)(unsigned)(unsigned)0x8c4aa510));
          ar5_00 = (uint *)(unsigned)((uint)*puVar11 * 0x40 + (*(undefined4 *)(unsigned)(unsigned)0x8c4aa510));
          if (0 < (int)(uVar4 - 2)) {
            do {
              uVar1 = *puVar20;
              puVar20 = puVar20 + 1;
              ar6_00 = (uint *)(unsigned)((uint)uVar1 * 0x40 + (*(undefined4 *)(unsigned)(unsigned)0x8c4aa510));
              if ((*ar4_00 & *ar5_00 & *ar6_00 & 1) == 0) {
                (vsp = ((unsigned long)(fr0_ - 72)), FUN_8c23dc42(ar4_00,ar5_00,ar6_00,(int)(short)(uVar3 | uVar14)));
              }
              (*(uint *)(fr0_ - 0x3c)) = (*(uint *)(fr0_ - 0x3c)) + 1;
              ar4_00 = ar5_00;
              ar5_00 = ar6_00;
            } while ((int)(*(uint *)(fr0_ - 0x3c)) < (int)(uVar4 - 2));
          }
        }
      }
      else {
LAB_8c24bcd6:
        puVar20 = puVar21 + uVar4;
      }
      (*(int *)(fr0_ - 0x40)) = (*(int *)(fr0_ - 0x40)) + 1;
    }
  }
  else if (uVar4 == 0xc000) {
    if (((*(undefined4 *)(unsigned)(unsigned)0x8c4ab318) & 1) == 0) {
      UNRECOVERED_JUMPTABLE = ((void *)0x8c243d60);
    }
    else {
      UNRECOVERED_JUMPTABLE = ((void *)0x8c2437d6);
    }
                    
                    
    uVar7 = (vsp = ((unsigned long)(fr0_ - 72)), (*(code *)xlat((unsigned long)UNRECOVERED_JUMPTABLE))(ar4,uVar3,vr6,vr7));
    return uVar7;
  }
  return uVar4;
}

__asm__(".globl _FUN_8c24b154\n.set _FUN_8c24b154, _FUN_8c24b154_def\n");
