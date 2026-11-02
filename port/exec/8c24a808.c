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
uint FUN_8c24a808_def(ushort *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c24a808";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 56; for (int i_ = 0; i_ < 56; i_++) z_[i_] = 0; }
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  double *pdVar7;
  double *pdVar8;
  code *UNRECOVERED_JUMPTABLE;
  double *pdVar9;
  double *pdVar10;
  undefined1 *puVar11;
  double *pdVar12;
  int iVar13;
  double *a6;
  int iVar14;
  uint uVar15;
  double *unaff_r8 = 0;
  ushort *puVar16;
  ushort *puVar17;
  ushort *puVar18;
  double in_dr0 = 0;
  double dVar19;
  float fVar20;
  double in_dr2 = 0;
  undefined4 uVar21;
  double in_dr4 = 0;
  double dVar22;
  float fVar23;
  double in_xd2 = 0;
  double dVar24;
  double in_xd14 = 0;
  bool bVar25;
  char cVar26;
  char cVar27;
  
  cVar27 = '\0';
  cVar26 = '\0';
  uVar1 = *ar4;
  uVar6 = 0x3f000000;
  uVar2 = (uint)(uVar1 & 0x3fff);
  puVar16 = ((ushort *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 2));
  uVar3 = uVar1 & 0xc000;
  if ((uVar1 & 0xc000) == 0) {
    (*(undefined4 *)(unsigned)(unsigned)0x8c4aa51c) = (*(undefined4 *)(unsigned)(unsigned)0x8c4aa51c) + (uint)ar4[1] * 3;
    (*(uint *)(fr0_ - 0x30)) = 0;
    while( true ) {
      uVar21 = SUB84(in_dr2,0);
      uVar3 = (uint)ar4[1];
      if ((int)uVar3 <= (int)(*(uint *)(fr0_ - 0x30))) break;
      puVar18 = puVar16 + 1;
      pdVar7 = (double *)(unsigned)((uint)*puVar16 * 0x40 + (*(undefined4 *)(unsigned)(unsigned)0x8c4aa510));
      puVar17 = puVar16 + 2;
      puVar16 = puVar16 + 3;
      if (cVar27 == '\0') {
        uVar21 = *(undefined4 *)(unsigned)((int)pdVar7 + 4);
      }
      else {
        in_xd2 = *(double *)(unsigned)((int)pdVar7 + 4);
      }
      pdVar8 = (double *)(unsigned)((uint)*puVar18 * 0x40 + (*(undefined4 *)(unsigned)(unsigned)0x8c4aa510));
      if (cVar27 == '\0') {
        uVar4 = *(undefined4 *)(unsigned)((int)pdVar8 + 4);
        dVar22 = CONCAT44D(uVar4,uVar21);
        dVar24 = CONCAT44D(uVar4,SUB84(in_dr4,0));
      }
      else {
        dVar22 = *(double *)(unsigned)((int)pdVar8 + 4);
        uVar4 = (undefined4)(D2U(dVar22) >> 0x20);
        dVar24 = dVar22;
      }
      if (cVar26 == '\0') {
        dVar22 = CONCAT44D(F32HI(dVar22) - F32LO(dVar22),
                                  SUB84(dVar22,0));
      }
      else {
        dVar22 = dVar22 - dVar22;
      }
      pdVar9 = (double *)(unsigned)((uint)*puVar17 * 0x40 + (*(undefined4 *)(unsigned)(unsigned)0x8c4aa510));
      if (cVar27 == '\0') {
        dVar24 = CONCAT44D(uVar4,*(undefined4 *)(unsigned)(pdVar8 + 1));
        dVar22 = CONCAT44D((int)(D2U(dVar22) >> 0x20),*(undefined4 *)(unsigned)(pdVar9 + 1));
      }
      else {
        in_xd2 = pdVar9[1];
      }
      fVar23 = F32LO(dVar24);
      if (cVar26 == '\0') {
        fVar20 = F32LO(dVar22) - fVar23;
        dVar22 = CONCAT44D(F32HI(dVar22) * fVar20,fVar20);
      }
      else {
        dVar22 = (dVar22 - dVar24) * (dVar22 - dVar24);
      }
      if (cVar27 == '\0') {
        dVar22 = CONCAT44D((int)(D2U(dVar22) >> 0x20),*(undefined4 *)(unsigned)(pdVar7 + 1));
        in_dr0 = CONCAT44D((int)((ulonglong)in_dr0 >> 0x20),fVar23);
      }
      else {
        in_xd2 = pdVar7[1];
      }
      if (cVar26 == '\0') {
        dVar19 = CONCAT44D((int)((ulonglong)in_dr0 >> 0x20),F32LO(in_dr0) - F32LO(dVar22)
                                 );
      }
      else {
        dVar19 = in_dr0 - dVar22;
      }
      if (cVar27 == '\0') {
        dVar22 = CONCAT44D((int)(D2U(dVar22) >> 0x20),*(undefined4 *)(unsigned)((int)pdVar9 + 4))
        ;
      }
      else {
        in_xd2 = *(double *)(unsigned)((int)pdVar9 + 4);
      }
      if (cVar26 == '\0') {
        dVar22 = CONCAT44D((int)(D2U(dVar22) >> 0x20),
                                  F32LO(dVar22) - F32HI(dVar24));
      }
      else {
        dVar22 = dVar22 - dVar24;
      }
      uVar3 = (uint)(D2U(dVar22) >> 0x20);
      dVar24 = dVar22;
      if (cVar27 == '\0') {
        dVar24 = CONCAT44D(uVar3,fVar23);
      }
      (*(uint *)(fr0_ - 0x34)) = 0;
      if (cVar26 == '\0') {
        in_dr0 = CONCAT44D((int)(D2U(dVar19) >> 0x20),F32LO(dVar19) * F32LO(dVar22)
                                 );
      }
      else {
        in_dr0 = dVar19 * dVar22;
      }
      in_dr2 = (double)((ulonglong)uVar3 << 0x20);
      if (cVar26 == '\0') {
        fVar23 = F32HI(dVar24) - F32LO(in_dr0);
        in_dr4 = CONCAT44D(fVar23,SUB84(dVar24,0));
        bVar25 = 0.0 < fVar23;
      }
      else {
        in_dr4 = dVar24 - in_dr0;
        bVar25 = in_dr2 < in_dr4;
      }
      uVar21 = SUB84(in_dr4,0);
      if (bVar25) {
        if (((*(undefined4 *)(unsigned)(unsigned)0x8c4ab308) & 0x800000) != 0) {
          (*(uint *)(fr0_ - 0x34)) = 0x8000;
          goto LAB_8c24a918;
        }
      }
      else {
LAB_8c24a918:
        *(undefined4 *)(unsigned)pdVar7 = 0xe0000000;
        CacheBlockWriteBack(pdVar7);
        if (*(uint *)(unsigned)((int)pdVar7 + 0x3c) != (uVar2 | (*(uint *)(fr0_ - 0x34)))) {
          *(uint *)(unsigned)((int)pdVar7 + 0x3c) = uVar2 | (*(uint *)(fr0_ - 0x34));
          pdVar12 = pdVar7 + 6;
          pdVar10 = pdVar7 + 2;
          puVar11 = ((undefined1 *)(unsigned)0x8c4c2620);
          uVar3 = (*(uint *)(fr0_ - 0x34));
          (vsp = ((unsigned long)(fr0_ - 56)), FUN_8c23bae2(((undefined1 *)(unsigned)0x8c4c2620),pdVar10,pdVar12,(*(uint *)(fr0_ - 0x34))));
          uVar21 = (vsp = ((unsigned long)(fr0_ - 56)), float_to_color_u8(puVar11,pdVar10,pdVar12,uVar3));
          *(undefined4 *)(unsigned)(pdVar7 + 5) = uVar21;
          uVar21 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c2630);
          if (cVar27 == '\0') {
            uVar21 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c2634);
          }
          uVar4 = (vsp = ((unsigned long)(fr0_ - 56)), float_to_color_u8(puVar11,pdVar10,pdVar12,uVar3));
          *(undefined4 *)(unsigned)((int)pdVar7 + 0x2c) = uVar4;
        }
        if (cVar27 == '\0') {
          dVar22 = CONCAT44D(*(undefined4 *)(unsigned)(pdVar7 + 6),uVar6);
          pdVar10 = (double *)(unsigned)((int)pdVar7 + 0x34);
          dVar24 = CONCAT44D(uVar6,SUB84(in_dr0,0));
        }
        else {
          dVar22 = pdVar7[6];
          pdVar10 = pdVar7 + 7;
          dVar24 = in_xd14;
          in_xd2 = in_xd14;
        }
        if (cVar26 == '\0') {
          dVar22 = (double)(ulonglong)
                           (uint)(F32HI(dVar24) *
                                  F32HI(dVar22) + F32LO(dVar22));
        }
        if (cVar27 == '\0') {
          *(int *)(unsigned)(pdVar7 + 4) = SUB84(dVar22,0);
          dVar19 = CONCAT44D(*(undefined4 *)(unsigned)pdVar10,uVar6);
          dVar24 = CONCAT44D(uVar6,SUB84(dVar24,0));
          dVar22 = CONCAT44D(uVar6,uVar21);
        }
        else {
          pdVar7[4] = in_xd2;
          dVar19 = *pdVar10;
          in_xd2 = in_xd14;
          dVar24 = in_xd14;
          dVar22 = in_xd14;
        }
        pdVar10 = (double *)(unsigned)((int)pdVar7 + 0x24);
        if (cVar26 == '\0') {
          dVar19 = (double)(ulonglong)
                           (uint)(F32HI(dVar24) *
                                  F32HI(dVar19) + F32LO(dVar19));
        }
        if (cVar27 == '\0') {
          *(int *)(unsigned)pdVar10 = SUB84(dVar19,0);
        }
        else {
          *pdVar10 = in_xd2;
        }
        CacheBlockWriteBack(pdVar10);
        if (cVar27 == '\0') {
          dVar24 = CONCAT44D(*(undefined4 *)(unsigned)pdVar7,SUB84(dVar24,0));
          dVar19 = CONCAT44D(*(undefined4 *)(unsigned)((int)pdVar7 + 4),SUB84(dVar19,0));
          pdVar7 = pdVar7 + 1;
        }
        else {
          dVar24 = *pdVar7;
          dVar19 = pdVar7[1];
          pdVar7 = pdVar7 + 2;
        }
        if (cVar27 == '\0') {
          uVar21 = *(undefined4 *)(unsigned)(pdVar7 + 2);
          dVar22 = CONCAT44D(uVar21,SUB84(dVar22,0));
          *(undefined4 *)(unsigned)((int)unaff_r8 + 0x1c) = *(undefined4 *)(unsigned)((int)pdVar7 + 0x14);
          *(undefined4 *)(unsigned)(unaff_r8 + 3) = uVar21;
          *(int *)(unsigned)((int)unaff_r8 + 0x14) = (int)(D2U(dVar19) >> 0x20);
          unaff_r8 = unaff_r8 + 2;
          *(int *)(unsigned)unaff_r8 = (int)(D2U(dVar24) >> 0x20);
        }
        else {
          dVar22 = pdVar7[2];
          unaff_r8[3] = pdVar7[3];
          unaff_r8[2] = dVar22;
          unaff_r8[1] = dVar19;
          *unaff_r8 = dVar24;
        }
        uVar21 = SUB84(dVar22,0);
        *(undefined4 *)(unsigned)pdVar8 = 0xe0000000;
        CacheBlockWriteBack(pdVar8);
        if (*(uint *)(unsigned)((int)pdVar8 + 0x3c) != (uVar2 | (*(uint *)(fr0_ - 0x34)))) {
          pdVar7 = pdVar8 + 2;
          *(uint *)(unsigned)((int)pdVar8 + 0x3c) = uVar2 | (*(uint *)(fr0_ - 0x34));
          pdVar10 = pdVar8 + 6;
          puVar11 = ((undefined1 *)(unsigned)0x8c4c2620);
          uVar3 = (*(uint *)(fr0_ - 0x34));
          (vsp = ((unsigned long)(fr0_ - 56)), FUN_8c23bae2(((undefined1 *)(unsigned)0x8c4c2620),pdVar7,pdVar10,(*(uint *)(fr0_ - 0x34))));
          uVar21 = (vsp = ((unsigned long)(fr0_ - 56)), float_to_color_u8(puVar11,pdVar7,pdVar10,uVar3));
          *(undefined4 *)(unsigned)(pdVar8 + 5) = uVar21;
          uVar21 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c2630);
          if (cVar27 == '\0') {
            uVar21 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c2634);
          }
          uVar4 = (vsp = ((unsigned long)(fr0_ - 56)), float_to_color_u8(puVar11,pdVar7,pdVar10,uVar3));
          *(undefined4 *)(unsigned)((int)pdVar8 + 0x2c) = uVar4;
        }
        if (cVar27 == '\0') {
          pdVar7 = (double *)(unsigned)((int)pdVar8 + 0x34);
          dVar22 = CONCAT44D(*(undefined4 *)(unsigned)(pdVar8 + 6),uVar6);
          dVar24 = CONCAT44D(uVar6,SUB84(dVar24,0));
        }
        else {
          dVar22 = pdVar8[6];
          pdVar7 = pdVar8 + 7;
          dVar24 = in_xd14;
          in_xd2 = in_xd14;
        }
        if (cVar26 == '\0') {
          dVar22 = (double)(ulonglong)
                           (uint)(F32HI(dVar24) *
                                  F32HI(dVar22) + F32LO(dVar22));
        }
        if (cVar27 == '\0') {
          *(int *)(unsigned)(pdVar8 + 4) = SUB84(dVar22,0);
          dVar19 = CONCAT44D(*(undefined4 *)(unsigned)pdVar7,uVar6);
          dVar24 = CONCAT44D(uVar6,SUB84(dVar24,0));
          dVar22 = CONCAT44D(uVar6,uVar21);
        }
        else {
          pdVar8[4] = in_xd2;
          dVar19 = *pdVar7;
          in_xd2 = in_xd14;
          dVar24 = in_xd14;
          dVar22 = in_xd14;
        }
        pdVar7 = (double *)(unsigned)((int)pdVar8 + 0x24);
        if (cVar26 == '\0') {
          dVar19 = (double)(ulonglong)
                           (uint)(F32HI(dVar24) *
                                  F32HI(dVar19) + F32LO(dVar19));
        }
        if (cVar27 == '\0') {
          *(int *)(unsigned)pdVar7 = SUB84(dVar19,0);
        }
        else {
          *pdVar7 = in_xd2;
        }
        CacheBlockWriteBack(pdVar7);
        if (cVar27 == '\0') {
          dVar24 = CONCAT44D(*(undefined4 *)(unsigned)pdVar8,SUB84(dVar24,0));
          dVar19 = CONCAT44D(*(undefined4 *)(unsigned)((int)pdVar8 + 4),SUB84(dVar19,0));
          pdVar8 = pdVar8 + 1;
        }
        else {
          dVar24 = *pdVar8;
          dVar19 = pdVar8[1];
          pdVar8 = pdVar8 + 2;
        }
        if (cVar27 == '\0') {
          uVar21 = *(undefined4 *)(unsigned)(pdVar8 + 2);
          dVar22 = CONCAT44D(uVar21,SUB84(dVar22,0));
          *(undefined4 *)(unsigned)((int)unaff_r8 + 0x3c) = *(undefined4 *)(unsigned)((int)pdVar8 + 0x14);
          *(undefined4 *)(unsigned)(unaff_r8 + 7) = uVar21;
          *(int *)(unsigned)((int)unaff_r8 + 0x34) = (int)(D2U(dVar19) >> 0x20);
          pdVar7 = unaff_r8 + 6;
          *(int *)(unsigned)pdVar7 = (int)(D2U(dVar24) >> 0x20);
        }
        else {
          dVar22 = pdVar8[2];
          unaff_r8[7] = pdVar8[3];
          unaff_r8[6] = dVar22;
          unaff_r8[5] = dVar19;
          pdVar7 = unaff_r8 + 4;
          *pdVar7 = dVar24;
        }
        uVar21 = SUB84(dVar22,0);
        *(undefined4 *)(unsigned)pdVar9 = 0xf0000000;
        CacheBlockWriteBack(pdVar9);
        if (*(uint *)(unsigned)((int)pdVar9 + 0x3c) != (uVar2 | (*(uint *)(fr0_ - 0x34)))) {
          pdVar8 = pdVar9 + 2;
          *(uint *)(unsigned)((int)pdVar9 + 0x3c) = uVar2 | (*(uint *)(fr0_ - 0x34));
          pdVar10 = pdVar9 + 6;
          puVar11 = ((undefined1 *)(unsigned)0x8c4c2620);
          (vsp = ((unsigned long)(fr0_ - 56)), FUN_8c23bae2(((undefined1 *)(unsigned)0x8c4c2620),pdVar8,pdVar10,(*(uint *)(fr0_ - 0x34))));
          uVar21 = (vsp = ((unsigned long)(fr0_ - 56)), float_to_color_u8(puVar11,pdVar8,pdVar10,(*(uint *)(fr0_ - 0x34))));
          *(undefined4 *)(unsigned)(pdVar9 + 5) = uVar21;
          uVar21 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c2630);
          if (cVar27 == '\0') {
            uVar21 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c2634);
          }
          uVar4 = (vsp = ((unsigned long)(fr0_ - 56)), float_to_color_u8(puVar11,pdVar8,pdVar10,(*(uint *)(fr0_ - 0x34))));
          *(undefined4 *)(unsigned)((int)pdVar9 + 0x2c) = uVar4;
        }
        if (cVar27 == '\0') {
          pdVar8 = (double *)(unsigned)((int)pdVar9 + 0x34);
          dVar22 = CONCAT44D(*(undefined4 *)(unsigned)(pdVar9 + 6),uVar6);
          dVar24 = CONCAT44D(uVar6,SUB84(dVar24,0));
        }
        else {
          dVar22 = pdVar9[6];
          pdVar8 = pdVar9 + 7;
          dVar24 = in_xd14;
          in_xd2 = in_xd14;
        }
        if (cVar26 == '\0') {
          dVar22 = (double)(ulonglong)
                           (uint)(F32HI(dVar24) *
                                  F32HI(dVar22) + F32LO(dVar22));
        }
        if (cVar27 == '\0') {
          *(int *)(unsigned)(pdVar9 + 4) = SUB84(dVar22,0);
          dVar19 = CONCAT44D(*(undefined4 *)(unsigned)pdVar8,uVar6);
          dVar24 = CONCAT44D(uVar6,SUB84(dVar24,0));
          dVar22 = CONCAT44D(uVar6,uVar21);
        }
        else {
          pdVar9[4] = in_xd2;
          dVar19 = *pdVar8;
          in_xd2 = in_xd14;
          dVar24 = in_xd14;
          dVar22 = in_xd14;
        }
        pdVar8 = (double *)(unsigned)((int)pdVar9 + 0x24);
        if (cVar26 == '\0') {
          dVar19 = (double)(ulonglong)
                           (uint)(F32HI(dVar24) *
                                  F32HI(dVar19) + F32LO(dVar19));
        }
        if (cVar27 == '\0') {
          *(int *)(unsigned)pdVar8 = SUB84(dVar19,0);
        }
        else {
          *pdVar8 = in_xd2;
        }
        CacheBlockWriteBack(pdVar8);
        if (cVar27 == '\0') {
          in_dr0 = CONCAT44D(*(undefined4 *)(unsigned)pdVar9,SUB84(dVar24,0));
          in_dr2 = CONCAT44D(*(undefined4 *)(unsigned)((int)pdVar9 + 4),SUB84(dVar19,0));
          pdVar9 = pdVar9 + 1;
        }
        else {
          in_dr0 = *pdVar9;
          in_dr2 = pdVar9[1];
          pdVar9 = pdVar9 + 2;
        }
        if (cVar27 == '\0') {
          uVar21 = *(undefined4 *)(unsigned)(pdVar9 + 2);
          in_dr4 = CONCAT44D(uVar21,SUB84(dVar22,0));
          *(undefined4 *)(unsigned)((int)pdVar7 + 0x3c) = *(undefined4 *)(unsigned)((int)pdVar9 + 0x14);
          *(undefined4 *)(unsigned)(pdVar7 + 7) = uVar21;
          *(int *)(unsigned)((int)pdVar7 + 0x34) = (int)((ulonglong)in_dr2 >> 0x20);
          pdVar7 = pdVar7 + 6;
          *(int *)(unsigned)pdVar7 = (int)((ulonglong)in_dr0 >> 0x20);
        }
        else {
          in_dr4 = pdVar9[2];
          pdVar7[7] = pdVar9[3];
          pdVar7[6] = in_dr4;
          pdVar7[5] = in_dr2;
          pdVar7 = pdVar7 + 4;
          *pdVar7 = in_dr0;
        }
        unaff_r8 = pdVar7 + 4;
        (*(undefined4 *)(unsigned)(unsigned)0x8c4aa520) = (*(undefined4 *)(unsigned)(unsigned)0x8c4aa520) + 3;
      }
      (*(uint *)(fr0_ - 0x30)) = (*(uint *)(fr0_ - 0x30)) + 1;
    }
  }
  else if (uVar3 == 0x4000) {
    (*(undefined4 *)(unsigned)(unsigned)0x8c4aa51c) = (*(undefined4 *)(unsigned)(unsigned)0x8c4aa51c) + (uint)ar4[1] * 4;
    (*(int *)(fr0_ - 0x24)) = 0;
    while( true ) {
      uVar21 = SUB84(in_dr4,0);
      uVar3 = (uint)ar4[1];
      if ((int)uVar3 <= (*(int *)(fr0_ - 0x24))) break;
      pdVar9 = (double *)(unsigned)((uint)*puVar16 * 0x40 + (*(undefined4 *)(unsigned)(unsigned)0x8c4aa510));
      pdVar8 = (double *)(unsigned)((uint)puVar16[1] * 0x40 + (*(undefined4 *)(unsigned)(unsigned)0x8c4aa510));
      puVar18 = puVar16 + 3;
      pdVar7 = (double *)(unsigned)((uint)puVar16[2] * 0x40 + (*(undefined4 *)(unsigned)(unsigned)0x8c4aa510));
      puVar16 = puVar16 + 4;
      pdVar10 = (double *)(unsigned)((uint)*puVar18 * 0x40 + (*(undefined4 *)(unsigned)(unsigned)0x8c4aa510));
      if (cVar27 == '\0') {
        uVar21 = *(undefined4 *)(unsigned)((int)pdVar8 + 4);
        dVar24 = CONCAT44D(uVar21,*(undefined4 *)(unsigned)((int)pdVar9 + 4));
      }
      else {
        dVar24 = *(double *)(unsigned)((int)pdVar8 + 4);
        in_xd2 = *(double *)(unsigned)((int)pdVar9 + 4);
      }
      if (cVar26 == '\0') {
        dVar24 = CONCAT44D(F32HI(dVar24) - F32LO(dVar24),
                                  SUB84(dVar24,0));
      }
      else {
        dVar24 = dVar24 - dVar24;
      }
      if (cVar27 == '\0') {
        dVar24 = CONCAT44D((int)(D2U(dVar24) >> 0x20),*(undefined4 *)(unsigned)(pdVar7 + 1));
        dVar22 = CONCAT44D(*(undefined4 *)(unsigned)(pdVar8 + 1),uVar21);
      }
      else {
        in_xd2 = pdVar7[1];
        dVar22 = pdVar8[1];
      }
      fVar23 = F32HI(dVar22);
      if (cVar26 == '\0') {
        dVar24 = CONCAT44D((int)(D2U(dVar24) >> 0x20),F32LO(dVar24) - fVar23);
      }
      else {
        dVar24 = dVar24 - dVar22;
      }
      if (cVar27 == '\0') {
        in_dr0 = CONCAT44D((int)((ulonglong)in_dr0 >> 0x20),fVar23);
      }
      if (cVar26 == '\0') {
        dVar24 = CONCAT44D(F32HI(dVar24) * F32LO(dVar24),
                                  SUB84(dVar24,0));
      }
      else {
        dVar24 = dVar24 * dVar24;
      }
      if (cVar27 == '\0') {
        dVar24 = CONCAT44D((int)(D2U(dVar24) >> 0x20),*(undefined4 *)(unsigned)(pdVar9 + 1));
      }
      else {
        in_xd2 = pdVar9[1];
      }
      if (cVar26 == '\0') {
        dVar19 = CONCAT44D((int)((ulonglong)in_dr0 >> 0x20),F32LO(in_dr0) - F32LO(dVar24)
                                 );
      }
      else {
        dVar19 = in_dr0 - dVar24;
      }
      uVar21 = (undefined4)(D2U(dVar24) >> 0x20);
      if (cVar27 == '\0') {
        dVar24 = CONCAT44D(uVar21,SUB84(dVar22,0));
        dVar22 = CONCAT44D(uVar21,*(undefined4 *)(unsigned)((int)pdVar7 + 4));
      }
      else {
        in_xd2 = *(double *)(unsigned)((int)pdVar7 + 4);
        dVar22 = dVar24;
      }
      if (cVar26 == '\0') {
        dVar22 = CONCAT44D(uVar21,F32LO(dVar22) - F32LO(dVar24));
      }
      else {
        dVar22 = dVar22 - dVar24;
      }
      (*(uint *)(fr0_ - 0x30)) = 0;
      if (cVar26 == '\0') {
        in_dr0 = CONCAT44D((int)(D2U(dVar19) >> 0x20),F32LO(dVar19) * F32LO(dVar22)
                                 );
      }
      else {
        in_dr0 = dVar19 * dVar22;
      }
      if (cVar26 == '\0') {
        fVar23 = F32HI(dVar24) - F32LO(in_dr0);
        in_dr4 = CONCAT44D(fVar23,SUB84(dVar24,0));
        bVar25 = 0.0 < fVar23;
      }
      else {
        in_dr4 = dVar24 - in_dr0;
        bVar25 = (double)(D2U(dVar22) & 0xffffffff00000000) < in_dr4;
      }
      uVar21 = SUB84(in_dr4,0);
      if (bVar25) {
        if (((*(undefined4 *)(unsigned)(unsigned)0x8c4ab308) & 0x800000) != 0) {
          (*(uint *)(fr0_ - 0x30)) = 0x8000;
          goto LAB_8c24ac00;
        }
      }
      else {
LAB_8c24ac00:
        *(undefined4 *)(unsigned)pdVar9 = 0xe0000000;
        CacheBlockWriteBack(pdVar9);
        if (*(uint *)(unsigned)((int)pdVar9 + 0x3c) != (uVar2 | (*(uint *)(fr0_ - 0x30)))) {
          *(uint *)(unsigned)((int)pdVar9 + 0x3c) = uVar2 | (*(uint *)(fr0_ - 0x30));
          a6 = pdVar9 + 6;
          pdVar12 = pdVar9 + 2;
          puVar11 = ((undefined1 *)(unsigned)0x8c4c2620);
          uVar3 = (*(uint *)(fr0_ - 0x30));
          (vsp = ((unsigned long)(fr0_ - 56)), FUN_8c23bae2(((undefined1 *)(unsigned)0x8c4c2620),pdVar12,a6,(*(uint *)(fr0_ - 0x30))));
          uVar21 = (vsp = ((unsigned long)(fr0_ - 56)), float_to_color_u8(puVar11,pdVar12,a6,uVar3));
          *(undefined4 *)(unsigned)(pdVar9 + 5) = uVar21;
          uVar21 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c2630);
          if (cVar27 == '\0') {
            uVar21 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c2634);
          }
          uVar4 = (vsp = ((unsigned long)(fr0_ - 56)), float_to_color_u8(puVar11,pdVar12,a6,uVar3));
          *(undefined4 *)(unsigned)((int)pdVar9 + 0x2c) = uVar4;
        }
        if (cVar27 == '\0') {
          dVar22 = CONCAT44D(*(undefined4 *)(unsigned)(pdVar9 + 6),uVar6);
          pdVar12 = (double *)(unsigned)((int)pdVar9 + 0x34);
          dVar24 = CONCAT44D(uVar6,SUB84(in_dr0,0));
        }
        else {
          dVar22 = pdVar9[6];
          pdVar12 = pdVar9 + 7;
          dVar24 = in_xd14;
          in_xd2 = in_xd14;
        }
        if (cVar26 == '\0') {
          dVar22 = (double)(ulonglong)
                           (uint)(F32HI(dVar24) *
                                  F32HI(dVar22) + F32LO(dVar22));
        }
        if (cVar27 == '\0') {
          *(int *)(unsigned)(pdVar9 + 4) = SUB84(dVar22,0);
          dVar19 = CONCAT44D(*(undefined4 *)(unsigned)pdVar12,uVar6);
          dVar24 = CONCAT44D(uVar6,SUB84(dVar24,0));
          dVar22 = CONCAT44D(uVar6,uVar21);
        }
        else {
          pdVar9[4] = in_xd2;
          dVar19 = *pdVar12;
          in_xd2 = in_xd14;
          dVar24 = in_xd14;
          dVar22 = in_xd14;
        }
        pdVar12 = (double *)(unsigned)((int)pdVar9 + 0x24);
        if (cVar26 == '\0') {
          dVar19 = (double)(ulonglong)
                           (uint)(F32HI(dVar24) *
                                  F32HI(dVar19) + F32LO(dVar19));
        }
        if (cVar27 == '\0') {
          *(int *)(unsigned)pdVar12 = SUB84(dVar19,0);
        }
        else {
          *pdVar12 = in_xd2;
        }
        CacheBlockWriteBack(pdVar12);
        if (cVar27 == '\0') {
          dVar24 = CONCAT44D(*(undefined4 *)(unsigned)pdVar9,SUB84(dVar24,0));
          dVar19 = CONCAT44D(*(undefined4 *)(unsigned)((int)pdVar9 + 4),SUB84(dVar19,0));
          pdVar9 = pdVar9 + 1;
        }
        else {
          dVar24 = *pdVar9;
          dVar19 = pdVar9[1];
          pdVar9 = pdVar9 + 2;
        }
        if (cVar27 == '\0') {
          uVar21 = *(undefined4 *)(unsigned)(pdVar9 + 2);
          dVar22 = CONCAT44D(uVar21,SUB84(dVar22,0));
          *(undefined4 *)(unsigned)((int)unaff_r8 + 0x1c) = *(undefined4 *)(unsigned)((int)pdVar9 + 0x14);
          *(undefined4 *)(unsigned)(unaff_r8 + 3) = uVar21;
          *(int *)(unsigned)((int)unaff_r8 + 0x14) = (int)(D2U(dVar19) >> 0x20);
          unaff_r8 = unaff_r8 + 2;
          *(int *)(unsigned)unaff_r8 = (int)(D2U(dVar24) >> 0x20);
        }
        else {
          dVar22 = pdVar9[2];
          unaff_r8[3] = pdVar9[3];
          unaff_r8[2] = dVar22;
          unaff_r8[1] = dVar19;
          *unaff_r8 = dVar24;
        }
        uVar21 = SUB84(dVar22,0);
        *(undefined4 *)(unsigned)pdVar8 = 0xe0000000;
        CacheBlockWriteBack(pdVar8);
        if (*(uint *)(unsigned)((int)pdVar8 + 0x3c) != (uVar2 | (*(uint *)(fr0_ - 0x30)))) {
          *(uint *)(unsigned)((int)pdVar8 + 0x3c) = uVar2 | (*(uint *)(fr0_ - 0x30));
          pdVar12 = pdVar8 + 6;
          pdVar9 = pdVar8 + 2;
          puVar11 = ((undefined1 *)(unsigned)0x8c4c2620);
          uVar3 = (*(uint *)(fr0_ - 0x30));
          (vsp = ((unsigned long)(fr0_ - 56)), FUN_8c23bae2(((undefined1 *)(unsigned)0x8c4c2620),pdVar9,pdVar12,(*(uint *)(fr0_ - 0x30))));
          uVar21 = (vsp = ((unsigned long)(fr0_ - 56)), float_to_color_u8(puVar11,pdVar9,pdVar12,uVar3));
          *(undefined4 *)(unsigned)(pdVar8 + 5) = uVar21;
          uVar21 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c2630);
          if (cVar27 == '\0') {
            uVar21 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c2634);
          }
          uVar4 = (vsp = ((unsigned long)(fr0_ - 56)), float_to_color_u8(puVar11,pdVar9,pdVar12,uVar3));
          *(undefined4 *)(unsigned)((int)pdVar8 + 0x2c) = uVar4;
        }
        if (cVar27 == '\0') {
          dVar22 = CONCAT44D(*(undefined4 *)(unsigned)(pdVar8 + 6),uVar6);
          pdVar9 = (double *)(unsigned)((int)pdVar8 + 0x34);
          dVar24 = CONCAT44D(uVar6,SUB84(dVar24,0));
        }
        else {
          dVar22 = pdVar8[6];
          pdVar9 = pdVar8 + 7;
          dVar24 = in_xd14;
          in_xd2 = in_xd14;
        }
        if (cVar26 == '\0') {
          dVar22 = (double)(ulonglong)
                           (uint)(F32HI(dVar24) *
                                  F32HI(dVar22) + F32LO(dVar22));
        }
        if (cVar27 == '\0') {
          *(int *)(unsigned)(pdVar8 + 4) = SUB84(dVar22,0);
          dVar19 = CONCAT44D(*(undefined4 *)(unsigned)pdVar9,uVar6);
          dVar24 = CONCAT44D(uVar6,SUB84(dVar24,0));
          dVar22 = CONCAT44D(uVar6,uVar21);
        }
        else {
          pdVar8[4] = in_xd2;
          dVar19 = *pdVar9;
          in_xd2 = in_xd14;
          dVar24 = in_xd14;
          dVar22 = in_xd14;
        }
        pdVar9 = (double *)(unsigned)((int)pdVar8 + 0x24);
        if (cVar26 == '\0') {
          dVar19 = (double)(ulonglong)
                           (uint)(F32HI(dVar24) *
                                  F32HI(dVar19) + F32LO(dVar19));
        }
        if (cVar27 == '\0') {
          *(int *)(unsigned)pdVar9 = SUB84(dVar19,0);
        }
        else {
          *pdVar9 = in_xd2;
        }
        CacheBlockWriteBack(pdVar9);
        if (cVar27 == '\0') {
          dVar24 = CONCAT44D(*(undefined4 *)(unsigned)pdVar8,SUB84(dVar24,0));
          dVar19 = CONCAT44D(*(undefined4 *)(unsigned)((int)pdVar8 + 4),SUB84(dVar19,0));
          pdVar8 = pdVar8 + 1;
        }
        else {
          dVar24 = *pdVar8;
          dVar19 = pdVar8[1];
          pdVar8 = pdVar8 + 2;
        }
        if (cVar27 == '\0') {
          uVar21 = *(undefined4 *)(unsigned)(pdVar8 + 2);
          dVar22 = CONCAT44D(uVar21,SUB84(dVar22,0));
          *(undefined4 *)(unsigned)((int)unaff_r8 + 0x3c) = *(undefined4 *)(unsigned)((int)pdVar8 + 0x14);
          *(undefined4 *)(unsigned)(unaff_r8 + 7) = uVar21;
          *(int *)(unsigned)((int)unaff_r8 + 0x34) = (int)(D2U(dVar19) >> 0x20);
          pdVar8 = unaff_r8 + 6;
          *(int *)(unsigned)pdVar8 = (int)(D2U(dVar24) >> 0x20);
        }
        else {
          dVar22 = pdVar8[2];
          unaff_r8[7] = pdVar8[3];
          unaff_r8[6] = dVar22;
          unaff_r8[5] = dVar19;
          pdVar8 = unaff_r8 + 4;
          *pdVar8 = dVar24;
        }
        uVar21 = SUB84(dVar22,0);
        *(undefined4 *)(unsigned)pdVar7 = 0xe0000000;
        CacheBlockWriteBack(pdVar7);
        if (*(uint *)(unsigned)((int)pdVar7 + 0x3c) != (uVar2 | (*(uint *)(fr0_ - 0x30)))) {
          *(uint *)(unsigned)((int)pdVar7 + 0x3c) = uVar2 | (*(uint *)(fr0_ - 0x30));
          pdVar12 = pdVar7 + 6;
          pdVar9 = pdVar7 + 2;
          puVar11 = ((undefined1 *)(unsigned)0x8c4c2620);
          uVar3 = (*(uint *)(fr0_ - 0x30));
          (vsp = ((unsigned long)(fr0_ - 56)), FUN_8c23bae2(((undefined1 *)(unsigned)0x8c4c2620),pdVar9,pdVar12,(*(uint *)(fr0_ - 0x30))));
          uVar21 = (vsp = ((unsigned long)(fr0_ - 56)), float_to_color_u8(puVar11,pdVar9,pdVar12,uVar3));
          *(undefined4 *)(unsigned)(pdVar7 + 5) = uVar21;
          uVar21 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c2630);
          if (cVar27 == '\0') {
            uVar21 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c2634);
          }
          uVar4 = (vsp = ((unsigned long)(fr0_ - 56)), float_to_color_u8(puVar11,pdVar9,pdVar12,uVar3));
          *(undefined4 *)(unsigned)((int)pdVar7 + 0x2c) = uVar4;
        }
        if (cVar27 == '\0') {
          dVar22 = CONCAT44D(*(undefined4 *)(unsigned)(pdVar7 + 6),uVar6);
          pdVar9 = (double *)(unsigned)((int)pdVar7 + 0x34);
          dVar24 = CONCAT44D(uVar6,SUB84(dVar24,0));
        }
        else {
          dVar22 = pdVar7[6];
          pdVar9 = pdVar7 + 7;
          dVar24 = in_xd14;
          in_xd2 = in_xd14;
        }
        if (cVar26 == '\0') {
          dVar22 = (double)(ulonglong)
                           (uint)(F32HI(dVar24) *
                                  F32HI(dVar22) + F32LO(dVar22));
        }
        if (cVar27 == '\0') {
          *(int *)(unsigned)(pdVar7 + 4) = SUB84(dVar22,0);
          dVar19 = CONCAT44D(*(undefined4 *)(unsigned)pdVar9,uVar6);
          dVar24 = CONCAT44D(uVar6,SUB84(dVar24,0));
          dVar22 = CONCAT44D(uVar6,uVar21);
        }
        else {
          pdVar7[4] = in_xd2;
          dVar19 = *pdVar9;
          in_xd2 = in_xd14;
          dVar24 = in_xd14;
          dVar22 = in_xd14;
        }
        pdVar9 = (double *)(unsigned)((int)pdVar7 + 0x24);
        if (cVar26 == '\0') {
          dVar19 = (double)(ulonglong)
                           (uint)(F32HI(dVar24) *
                                  F32HI(dVar19) + F32LO(dVar19));
        }
        if (cVar27 == '\0') {
          *(int *)(unsigned)pdVar9 = SUB84(dVar19,0);
        }
        else {
          *pdVar9 = in_xd2;
        }
        CacheBlockWriteBack(pdVar9);
        if (cVar27 == '\0') {
          dVar24 = CONCAT44D(*(undefined4 *)(unsigned)pdVar7,SUB84(dVar24,0));
          dVar19 = CONCAT44D(*(undefined4 *)(unsigned)((int)pdVar7 + 4),SUB84(dVar19,0));
          pdVar7 = pdVar7 + 1;
        }
        else {
          dVar24 = *pdVar7;
          dVar19 = pdVar7[1];
          pdVar7 = pdVar7 + 2;
        }
        if (cVar27 == '\0') {
          uVar21 = *(undefined4 *)(unsigned)(pdVar7 + 2);
          dVar22 = CONCAT44D(uVar21,SUB84(dVar22,0));
          *(undefined4 *)(unsigned)((int)pdVar8 + 0x3c) = *(undefined4 *)(unsigned)((int)pdVar7 + 0x14);
          *(undefined4 *)(unsigned)(pdVar8 + 7) = uVar21;
          *(int *)(unsigned)((int)pdVar8 + 0x34) = (int)(D2U(dVar19) >> 0x20);
          pdVar8 = pdVar8 + 6;
          *(int *)(unsigned)pdVar8 = (int)(D2U(dVar24) >> 0x20);
        }
        else {
          dVar22 = pdVar7[2];
          pdVar8[7] = pdVar7[3];
          pdVar8[6] = dVar22;
          pdVar8[5] = dVar19;
          pdVar8 = pdVar8 + 4;
          *pdVar8 = dVar24;
        }
        uVar21 = SUB84(dVar22,0);
        *(undefined4 *)(unsigned)pdVar10 = 0xf0000000;
        CacheBlockWriteBack(pdVar10);
        if (*(uint *)(unsigned)((int)pdVar10 + 0x3c) != (uVar2 | (*(uint *)(fr0_ - 0x30)))) {
          *(uint *)(unsigned)((int)pdVar10 + 0x3c) = uVar2 | (*(uint *)(fr0_ - 0x30));
          pdVar9 = pdVar10 + 6;
          pdVar7 = pdVar10 + 2;
          puVar11 = ((undefined1 *)(unsigned)0x8c4c2620);
          (vsp = ((unsigned long)(fr0_ - 56)), FUN_8c23bae2(((undefined1 *)(unsigned)0x8c4c2620),pdVar7,pdVar9,(*(uint *)(fr0_ - 0x30))));
          uVar21 = (vsp = ((unsigned long)(fr0_ - 56)), float_to_color_u8(puVar11,pdVar7,pdVar9,(*(uint *)(fr0_ - 0x30))));
          *(undefined4 *)(unsigned)(pdVar10 + 5) = uVar21;
          uVar21 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c2630);
          if (cVar27 == '\0') {
            uVar21 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c2634);
          }
          uVar4 = (vsp = ((unsigned long)(fr0_ - 56)), float_to_color_u8(puVar11,pdVar7,pdVar9,(*(uint *)(fr0_ - 0x30))));
          *(undefined4 *)(unsigned)((int)pdVar10 + 0x2c) = uVar4;
        }
        if (cVar27 == '\0') {
          dVar22 = CONCAT44D(*(undefined4 *)(unsigned)(pdVar10 + 6),uVar6);
          pdVar7 = (double *)(unsigned)((int)pdVar10 + 0x34);
          dVar24 = CONCAT44D(uVar6,SUB84(dVar24,0));
        }
        else {
          dVar22 = pdVar10[6];
          pdVar7 = pdVar10 + 7;
          in_xd2 = in_xd14;
          dVar24 = in_xd14;
        }
        if (cVar26 == '\0') {
          dVar22 = (double)(ulonglong)
                           (uint)(F32HI(dVar24) *
                                  F32HI(dVar22) + F32LO(dVar22));
        }
        if (cVar27 == '\0') {
          *(int *)(unsigned)(pdVar10 + 4) = SUB84(dVar22,0);
          dVar22 = CONCAT44D(*(undefined4 *)(unsigned)pdVar7,uVar6);
          dVar19 = CONCAT44D(uVar6,SUB84(dVar24,0));
          dVar24 = CONCAT44D(uVar6,uVar21);
        }
        else {
          pdVar10[4] = in_xd2;
          dVar22 = *pdVar7;
          dVar19 = in_xd14;
          in_xd2 = in_xd14;
          dVar24 = in_xd14;
        }
        pdVar7 = (double *)(unsigned)((int)pdVar10 + 0x24);
        if (cVar26 == '\0') {
          dVar22 = (double)(ulonglong)
                           (uint)(F32HI(dVar19) *
                                  F32HI(dVar22) + F32LO(dVar22));
        }
        if (cVar27 == '\0') {
          *(int *)(unsigned)pdVar7 = SUB84(dVar22,0);
        }
        else {
          *pdVar7 = in_xd2;
        }
        CacheBlockWriteBack(pdVar7);
        if (cVar27 == '\0') {
          in_dr0 = CONCAT44D(*(undefined4 *)(unsigned)pdVar10,SUB84(dVar19,0));
          dVar22 = CONCAT44D(*(undefined4 *)(unsigned)((int)pdVar10 + 4),SUB84(dVar22,0));
          pdVar10 = pdVar10 + 1;
        }
        else {
          in_dr0 = *pdVar10;
          dVar22 = pdVar10[1];
          pdVar10 = pdVar10 + 2;
        }
        if (cVar27 == '\0') {
          uVar21 = *(undefined4 *)(unsigned)(pdVar10 + 2);
          in_dr4 = CONCAT44D(uVar21,SUB84(dVar24,0));
          *(undefined4 *)(unsigned)((int)pdVar8 + 0x3c) = *(undefined4 *)(unsigned)((int)pdVar10 + 0x14);
          *(undefined4 *)(unsigned)(pdVar8 + 7) = uVar21;
          *(int *)(unsigned)((int)pdVar8 + 0x34) = (int)(D2U(dVar22) >> 0x20);
          pdVar8 = pdVar8 + 6;
          *(int *)(unsigned)pdVar8 = (int)((ulonglong)in_dr0 >> 0x20);
        }
        else {
          in_dr4 = pdVar10[2];
          pdVar8[7] = pdVar10[3];
          pdVar8[6] = in_dr4;
          pdVar8[5] = dVar22;
          pdVar8 = pdVar8 + 4;
          *pdVar8 = in_dr0;
        }
        unaff_r8 = pdVar8 + 4;
        (*(undefined4 *)(unsigned)(unsigned)0x8c4aa520) = (*(undefined4 *)(unsigned)(unsigned)0x8c4aa520) + 4;
      }
      (*(int *)(fr0_ - 0x24)) = (*(int *)(fr0_ - 0x24)) + 1;
    }
  }
  else if (uVar3 == 0x8000) {
    for ((*(uint *)(fr0_ - 0x34)) = 0; uVar3 = (uint)ar4[1], (int)(*(uint *)(fr0_ - 0x34)) < (int)uVar3; (*(uint *)(fr0_ - 0x34)) = (*(uint *)(fr0_ - 0x34)) + 1
        ) {
      puVar18 = puVar16 + 1;
      uVar3 = (uint)*puVar16;
      (*(undefined4 *)(unsigned)(unsigned)0x8c4aa51c) = (*(undefined4 *)(unsigned)(unsigned)0x8c4aa51c) + uVar3;
      iVar13 = (uint)puVar16[2] * 0x40 + (*(undefined4 *)(unsigned)(unsigned)0x8c4aa510);
      if (cVar27 == '\0') {
        dVar24 = CONCAT44D(*(undefined4 *)(unsigned)(iVar13 + 4),SUB84(in_dr4,0));
      }
      else {
        dVar24 = *(double *)(unsigned)(iVar13 + 4);
      }
      iVar14 = (uint)*puVar18 * 0x40 + (*(undefined4 *)(unsigned)(unsigned)0x8c4aa510);
      uVar21 = (undefined4)(D2U(dVar24) >> 0x20);
      if (cVar27 == '\0') {
        dVar22 = CONCAT44D(uVar21,*(undefined4 *)(unsigned)(iVar14 + 4));
      }
      else {
        in_xd2 = *(double *)(unsigned)(iVar14 + 4);
        dVar22 = dVar24;
      }
      if (cVar26 == '\0') {
        dVar22 = CONCAT44D(F32HI(dVar22) - F32LO(dVar22),
                                  SUB84(dVar22,0));
      }
      else {
        dVar22 = dVar22 - dVar22;
      }
      if (cVar27 == '\0') {
        dVar24 = CONCAT44D(uVar21,*(undefined4 *)(unsigned)(iVar13 + 8));
      }
      iVar13 = (uint)puVar16[3] * 0x40 + (*(undefined4 *)(unsigned)(unsigned)0x8c4aa510);
      fVar23 = F32LO(dVar24);
      if (cVar27 == '\0') {
        dVar22 = CONCAT44D((int)(D2U(dVar22) >> 0x20),*(undefined4 *)(unsigned)(iVar13 + 8));
        in_dr0 = CONCAT44D((int)((ulonglong)in_dr0 >> 0x20),fVar23);
      }
      else {
        in_xd2 = *(double *)(unsigned)(iVar13 + 8);
      }
      if (cVar26 == '\0') {
        fVar20 = F32LO(dVar22) - fVar23;
        dVar22 = CONCAT44D(F32HI(dVar22) * fVar20,fVar20);
      }
      else {
        dVar22 = (dVar22 - dVar24) * (dVar22 - dVar24);
      }
      if (cVar27 == '\0') {
        dVar22 = CONCAT44D((int)(D2U(dVar22) >> 0x20),*(undefined4 *)(unsigned)(iVar14 + 8));
      }
      else {
        in_xd2 = *(double *)(unsigned)(iVar14 + 8);
      }
      if (cVar26 == '\0') {
        dVar19 = CONCAT44D((int)((ulonglong)in_dr0 >> 0x20),F32LO(in_dr0) - F32LO(dVar22)
                                 );
      }
      else {
        dVar19 = in_dr0 - dVar22;
      }
      if (cVar27 == '\0') {
        dVar22 = CONCAT44D((int)(D2U(dVar22) >> 0x20),*(undefined4 *)(unsigned)(iVar13 + 4));
      }
      else {
        in_xd2 = *(double *)(unsigned)(iVar13 + 4);
      }
      (*(uint *)(fr0_ - 0x38)) = 0;
      if (cVar26 == '\0') {
        dVar22 = CONCAT44D((int)(D2U(dVar22) >> 0x20),
                                  F32LO(dVar22) - F32HI(dVar24));
      }
      else {
        dVar22 = dVar22 - dVar24;
      }
      uVar15 = (uint)(D2U(dVar22) >> 0x20);
      dVar24 = dVar22;
      if (cVar27 == '\0') {
        dVar24 = CONCAT44D(uVar15,fVar23);
      }
      if (cVar26 == '\0') {
        in_dr0 = CONCAT44D((int)(D2U(dVar19) >> 0x20),F32LO(dVar19) * F32LO(dVar22)
                                 );
      }
      else {
        in_dr0 = dVar19 * dVar22;
      }
      if (cVar26 == '\0') {
        fVar23 = F32HI(dVar24) - F32LO(in_dr0);
        in_dr4 = CONCAT44D(fVar23,SUB84(dVar24,0));
        bVar25 = 0.0 < fVar23;
      }
      else {
        in_dr4 = dVar24 - in_dr0;
        bVar25 = (double)((ulonglong)uVar15 << 0x20) < in_dr4;
      }
      uVar21 = SUB84(in_dr4,0);
      if (bVar25) {
        if (((*(undefined4 *)(unsigned)(unsigned)0x8c4ab308) & 0x800000) != 0) {
          (*(uint *)(fr0_ - 0x38)) = 0x8000;
          goto LAB_8c24af4e;
        }
        puVar16 = puVar18 + uVar3;
      }
      else {
LAB_8c24af4e:
        (*(undefined4 *)(unsigned)(unsigned)0x8c4aa520) = (*(undefined4 *)(unsigned)(unsigned)0x8c4aa520) + uVar3;
        (*(uint *)(fr0_ - 0x30)) = 0;
        if (0 < (int)(uVar3 - 1)) {
          do {
            uVar21 = SUB84(in_dr4,0);
            uVar4 = SUB84(in_dr0,0);
            uVar1 = *puVar18;
            puVar18 = puVar18 + 1;
            pdVar7 = (double *)(unsigned)((uint)uVar1 * 0x40 + (*(undefined4 *)(unsigned)(unsigned)0x8c4aa510));
            *(undefined4 *)(unsigned)pdVar7 = 0xe0000000;
            CacheBlockWriteBack(pdVar7);
            if (*(uint *)(unsigned)((int)pdVar7 + 0x3c) != (uVar2 | (*(uint *)(fr0_ - 0x38)))) {
              pdVar8 = pdVar7 + 2;
              *(uint *)(unsigned)((int)pdVar7 + 0x3c) = uVar2 | (*(uint *)(fr0_ - 0x38));
              pdVar9 = pdVar7 + 6;
              puVar11 = ((undefined1 *)(unsigned)0x8c4c2620);
              uVar15 = (*(uint *)(fr0_ - 0x38));
              (vsp = ((unsigned long)(fr0_ - 56)), FUN_8c23bae2(((undefined1 *)(unsigned)0x8c4c2620),pdVar8,pdVar9,(*(uint *)(fr0_ - 0x38))));
              uVar21 = (vsp = ((unsigned long)(fr0_ - 56)), float_to_color_u8(puVar11,pdVar8,pdVar9,uVar15));
              *(undefined4 *)(unsigned)(pdVar7 + 5) = uVar21;
              uVar21 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c2630);
              if (cVar27 == '\0') {
                uVar21 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c2634);
              }
              uVar5 = (vsp = ((unsigned long)(fr0_ - 56)), float_to_color_u8(puVar11,pdVar8,pdVar9,uVar15));
              *(undefined4 *)(unsigned)((int)pdVar7 + 0x2c) = uVar5;
            }
            if (cVar27 == '\0') {
              pdVar8 = (double *)(unsigned)((int)pdVar7 + 0x34);
              dVar24 = CONCAT44D(*(undefined4 *)(unsigned)(pdVar7 + 6),uVar6);
              dVar22 = CONCAT44D(uVar6,uVar4);
            }
            else {
              dVar24 = pdVar7[6];
              pdVar8 = pdVar7 + 7;
              dVar22 = in_xd14;
              in_xd2 = in_xd14;
            }
            if (cVar26 == '\0') {
              dVar24 = (double)(ulonglong)
                               (uint)(F32HI(dVar22) *
                                      F32HI(dVar24) + F32LO(dVar24));
            }
            if (cVar27 == '\0') {
              *(int *)(unsigned)(pdVar7 + 4) = SUB84(dVar24,0);
              dVar19 = CONCAT44D(*(undefined4 *)(unsigned)pdVar8,uVar6);
              dVar24 = CONCAT44D(uVar6,SUB84(dVar22,0));
              dVar22 = CONCAT44D(uVar6,uVar21);
            }
            else {
              pdVar7[4] = in_xd2;
              dVar19 = *pdVar8;
              in_xd2 = in_xd14;
              dVar24 = in_xd14;
              dVar22 = in_xd14;
            }
            pdVar8 = (double *)(unsigned)((int)pdVar7 + 0x24);
            if (cVar26 == '\0') {
              dVar19 = (double)(ulonglong)
                               (uint)(F32HI(dVar24) *
                                      F32HI(dVar19) + F32LO(dVar19));
            }
            if (cVar27 == '\0') {
              *(int *)(unsigned)pdVar8 = SUB84(dVar19,0);
            }
            else {
              *pdVar8 = in_xd2;
            }
            CacheBlockWriteBack(pdVar8);
            if (cVar27 == '\0') {
              in_dr0 = CONCAT44D(*(undefined4 *)(unsigned)pdVar7,SUB84(dVar24,0));
              dVar24 = CONCAT44D(*(undefined4 *)(unsigned)((int)pdVar7 + 4),SUB84(dVar19,0));
              pdVar7 = pdVar7 + 1;
            }
            else {
              in_dr0 = *pdVar7;
              dVar24 = pdVar7[1];
              pdVar7 = pdVar7 + 2;
            }
            if (cVar27 == '\0') {
              uVar21 = *(undefined4 *)(unsigned)(pdVar7 + 2);
              in_dr4 = CONCAT44D(uVar21,SUB84(dVar22,0));
              *(undefined4 *)(unsigned)((int)unaff_r8 + 0x1c) = *(undefined4 *)(unsigned)((int)pdVar7 + 0x14);
              *(undefined4 *)(unsigned)(unaff_r8 + 3) = uVar21;
              *(int *)(unsigned)((int)unaff_r8 + 0x14) = (int)(D2U(dVar24) >> 0x20);
              unaff_r8 = unaff_r8 + 2;
              *(int *)(unsigned)unaff_r8 = (int)((ulonglong)in_dr0 >> 0x20);
            }
            else {
              in_dr4 = pdVar7[2];
              unaff_r8[3] = pdVar7[3];
              unaff_r8[2] = in_dr4;
              unaff_r8[1] = dVar24;
              *unaff_r8 = in_dr0;
            }
            uVar21 = SUB84(in_dr4,0);
            unaff_r8 = unaff_r8 + 4;
            (*(uint *)(fr0_ - 0x30)) = (*(uint *)(fr0_ - 0x30)) + 1;
          } while ((int)(*(uint *)(fr0_ - 0x30)) < (int)(uVar3 - 1));
        }
        uVar4 = SUB84(in_dr0,0);
        puVar16 = puVar18 + 1;
        pdVar7 = (double *)(unsigned)((uint)*puVar18 * 0x40 + (*(undefined4 *)(unsigned)(unsigned)0x8c4aa510));
        *(undefined4 *)(unsigned)pdVar7 = 0xf0000000;
        CacheBlockWriteBack(pdVar7);
        if (*(uint *)(unsigned)((int)pdVar7 + 0x3c) != (uVar2 | (*(uint *)(fr0_ - 0x38)))) {
          pdVar8 = pdVar7 + 2;
          *(uint *)(unsigned)((int)pdVar7 + 0x3c) = uVar2 | (*(uint *)(fr0_ - 0x38));
          pdVar9 = pdVar7 + 6;
          puVar11 = ((undefined1 *)(unsigned)0x8c4c2620);
          (vsp = ((unsigned long)(fr0_ - 56)), FUN_8c23bae2(((undefined1 *)(unsigned)0x8c4c2620),pdVar8,pdVar9,(*(uint *)(fr0_ - 0x38))));
          uVar21 = (vsp = ((unsigned long)(fr0_ - 56)), float_to_color_u8(puVar11,pdVar8,pdVar9,(*(uint *)(fr0_ - 0x38))));
          *(undefined4 *)(unsigned)(pdVar7 + 5) = uVar21;
          uVar21 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c2630);
          if (cVar27 == '\0') {
            uVar21 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c2634);
          }
          uVar5 = (vsp = ((unsigned long)(fr0_ - 56)), float_to_color_u8(puVar11,pdVar8,pdVar9,(*(uint *)(fr0_ - 0x38))));
          *(undefined4 *)(unsigned)((int)pdVar7 + 0x2c) = uVar5;
        }
        if (cVar27 == '\0') {
          pdVar8 = (double *)(unsigned)((int)pdVar7 + 0x34);
          dVar24 = CONCAT44D(*(undefined4 *)(unsigned)(pdVar7 + 6),uVar6);
          dVar22 = CONCAT44D(uVar6,uVar4);
        }
        else {
          dVar24 = pdVar7[6];
          pdVar8 = pdVar7 + 7;
          dVar22 = in_xd14;
          in_xd2 = in_xd14;
        }
        if (cVar26 == '\0') {
          dVar24 = (double)(ulonglong)
                           (uint)(F32HI(dVar22) *
                                  F32HI(dVar24) + F32LO(dVar24));
        }
        if (cVar27 == '\0') {
          *(int *)(unsigned)(pdVar7 + 4) = SUB84(dVar24,0);
          dVar19 = CONCAT44D(*(undefined4 *)(unsigned)pdVar8,uVar6);
          dVar24 = CONCAT44D(uVar6,SUB84(dVar22,0));
          dVar22 = CONCAT44D(uVar6,uVar21);
        }
        else {
          pdVar7[4] = in_xd2;
          dVar19 = *pdVar8;
          in_xd2 = in_xd14;
          dVar24 = in_xd14;
          dVar22 = in_xd14;
        }
        pdVar8 = (double *)(unsigned)((int)pdVar7 + 0x24);
        if (cVar26 == '\0') {
          dVar19 = (double)(ulonglong)
                           (uint)(F32HI(dVar24) *
                                  F32HI(dVar19) + F32LO(dVar19));
        }
        if (cVar27 == '\0') {
          *(int *)(unsigned)pdVar8 = SUB84(dVar19,0);
        }
        else {
          *pdVar8 = in_xd2;
        }
        CacheBlockWriteBack(pdVar8);
        if (cVar27 == '\0') {
          in_dr0 = CONCAT44D(*(undefined4 *)(unsigned)pdVar7,SUB84(dVar24,0));
          dVar24 = CONCAT44D(*(undefined4 *)(unsigned)((int)pdVar7 + 4),SUB84(dVar19,0));
          pdVar7 = pdVar7 + 1;
        }
        else {
          in_dr0 = *pdVar7;
          dVar24 = pdVar7[1];
          pdVar7 = pdVar7 + 2;
        }
        if (cVar27 == '\0') {
          uVar21 = *(undefined4 *)(unsigned)(pdVar7 + 2);
          in_dr4 = CONCAT44D(uVar21,SUB84(dVar22,0));
          *(undefined4 *)(unsigned)((int)unaff_r8 + 0x1c) = *(undefined4 *)(unsigned)((int)pdVar7 + 0x14);
          *(undefined4 *)(unsigned)(unaff_r8 + 3) = uVar21;
          *(int *)(unsigned)((int)unaff_r8 + 0x14) = (int)(D2U(dVar24) >> 0x20);
          unaff_r8 = unaff_r8 + 2;
          *(int *)(unsigned)unaff_r8 = (int)((ulonglong)in_dr0 >> 0x20);
        }
        else {
          in_dr4 = pdVar7[2];
          unaff_r8[3] = pdVar7[3];
          unaff_r8[2] = in_dr4;
          unaff_r8[1] = dVar24;
          *unaff_r8 = in_dr0;
        }
        unaff_r8 = unaff_r8 + 4;
      }
    }
  }
  else if (uVar3 == 0xc000) {
    if (((*(undefined4 *)(unsigned)(unsigned)0x8c4ab308) & 0x800000) == 0) {
      UNRECOVERED_JUMPTABLE = ((void *)0x8c23fd56);
    }
    else {
      UNRECOVERED_JUMPTABLE = ((void *)0x8c23fac8);
    }
                    
                    
    uVar6 = (vsp = ((unsigned long)(fr0_ - 56)), (*(code *)xlat((unsigned long)UNRECOVERED_JUMPTABLE))(ar4,uVar2,vr6,vr7));
    return uVar6;
  }
  return uVar3;
}

__asm__(".globl _FUN_8c24a808\n.set _FUN_8c24a808, _FUN_8c24a808_def\n");
