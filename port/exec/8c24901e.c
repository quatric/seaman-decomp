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
uint FUN_8c24901e_def(ushort *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c24901e";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 64; for (int i_ = 0; i_ < 64; i_++) z_[i_] = 0; }
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
  short *psVar14;
  double *a6;
  int iVar15;
  uint uVar16;
  double *unaff_r8 = 0;
  ushort *puVar17;
  ushort *puVar18;
  ushort *puVar19;
  double in_dr0 = 0;
  double dVar20;
  float fVar21;
  double in_dr2 = 0;
  undefined4 uVar22;
  undefined4 uVar23;
  double in_dr4 = 0;
  double dVar24;
  float fVar26;
  double dVar25;
  double in_xd2 = 0;
  double in_xd4 = 0;
  double dVar27;
  double in_xd14 = 0;
  bool bVar28;
  char cVar29;
  char cVar30;
  
  cVar30 = '\0';
  cVar29 = '\0';
  uVar1 = *ar4;
  (*(unsigned *)(fr0_ - 0x34) = (unsigned)(unsigned long)(((short *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 10))));
  uVar6 = 0x3b800000;
  uVar2 = (uint)(uVar1 & 0x3fff);
  puVar17 = ((ushort *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 2));
  uVar3 = uVar1 & 0xc000;
  if ((uVar1 & 0xc000) == 0) {
    (*(undefined4 *)(unsigned)(unsigned)0x8c4aa51c) = (*(undefined4 *)(unsigned)(unsigned)0x8c4aa51c) + (uint)ar4[1] * 3;
    (*(uint *)(fr0_ - 0x30)) = 0;
    while( true ) {
      uVar23 = SUB84(in_dr4,0);
      uVar4 = SUB84(in_dr2,0);
      uVar3 = (uint)ar4[1];
      if ((int)uVar3 <= (int)(*(uint *)(fr0_ - 0x30))) break;
      puVar19 = puVar17 + 1;
      pdVar7 = (double *)(unsigned)((uint)*puVar17 * 0x40 + (*(undefined4 *)(unsigned)(unsigned)0x8c4aa510));
      puVar18 = puVar17 + 2;
      puVar17 = puVar17 + 3;
      if (cVar30 == '\0') {
        uVar4 = *(undefined4 *)(unsigned)((int)pdVar7 + 4);
      }
      else {
        in_xd2 = *(double *)(unsigned)((int)pdVar7 + 4);
      }
      pdVar8 = (double *)(unsigned)((uint)*puVar19 * 0x40 + (*(undefined4 *)(unsigned)(unsigned)0x8c4aa510));
      if (cVar30 == '\0') {
        uVar23 = *(undefined4 *)(unsigned)((int)pdVar8 + 4);
        dVar27 = CONCAT44D(uVar23,uVar4);
      }
      else {
        dVar27 = *(double *)(unsigned)((int)pdVar8 + 4);
      }
      if (cVar29 == '\0') {
        dVar27 = CONCAT44D(F32HI(dVar27) - F32LO(dVar27),
                                  SUB84(dVar27,0));
      }
      else {
        dVar27 = dVar27 - dVar27;
      }
      pdVar9 = (double *)(unsigned)((uint)*puVar18 * 0x40 + (*(undefined4 *)(unsigned)(unsigned)0x8c4aa510));
      if (cVar30 == '\0') {
        dVar24 = CONCAT44D(*(undefined4 *)(unsigned)(pdVar8 + 1),uVar23);
        dVar27 = CONCAT44D((int)(D2U(dVar27) >> 0x20),*(undefined4 *)(unsigned)(pdVar9 + 1));
      }
      else {
        dVar24 = pdVar8[1];
        in_xd2 = pdVar9[1];
      }
      fVar26 = F32HI(dVar24);
      if (cVar29 == '\0') {
        fVar21 = F32LO(dVar27) - fVar26;
        dVar27 = CONCAT44D(F32HI(dVar27) * fVar21,fVar21);
      }
      else {
        dVar27 = (dVar27 - dVar24) * (dVar27 - dVar24);
      }
      if (cVar30 == '\0') {
        dVar27 = CONCAT44D((int)(D2U(dVar27) >> 0x20),*(undefined4 *)(unsigned)(pdVar7 + 1));
        in_dr0 = CONCAT44D((int)((ulonglong)in_dr0 >> 0x20),fVar26);
      }
      else {
        in_xd2 = pdVar7[1];
      }
      if (cVar29 == '\0') {
        dVar20 = CONCAT44D((int)((ulonglong)in_dr0 >> 0x20),F32LO(in_dr0) - F32LO(dVar27)
                                 );
      }
      else {
        dVar20 = in_dr0 - dVar27;
      }
      uVar23 = (undefined4)(D2U(dVar27) >> 0x20);
      if (cVar30 == '\0') {
        dVar27 = CONCAT44D(uVar23,SUB84(dVar24,0));
        dVar24 = CONCAT44D(uVar23,*(undefined4 *)(unsigned)((int)pdVar9 + 4));
      }
      else {
        in_xd2 = *(double *)(unsigned)((int)pdVar9 + 4);
        dVar24 = dVar27;
      }
      if (cVar29 == '\0') {
        dVar24 = CONCAT44D(uVar23,F32LO(dVar24) - F32LO(dVar27));
      }
      else {
        dVar24 = dVar24 - dVar27;
      }
      (*(uint *)(fr0_ - 0x38)) = 0;
      if (cVar29 == '\0') {
        in_dr0 = CONCAT44D((int)(D2U(dVar20) >> 0x20),F32LO(dVar20) * F32LO(dVar24)
                                 );
      }
      else {
        in_dr0 = dVar20 * dVar24;
      }
      in_dr2 = (double)(D2U(dVar24) & 0xffffffff00000000);
      if (cVar29 == '\0') {
        fVar26 = F32HI(dVar27) - F32LO(in_dr0);
        in_dr4 = CONCAT44D(fVar26,SUB84(dVar27,0));
        bVar28 = 0.0 < fVar26;
      }
      else {
        in_dr4 = dVar27 - in_dr0;
        bVar28 = in_dr2 < in_dr4;
      }
      uVar23 = SUB84(in_dr4,0);
      if (bVar28) {
        if (((*(undefined4 *)(unsigned)(unsigned)0x8c4ab308) & 0x800000) != 0) {
          (*(uint *)(fr0_ - 0x38)) = 0x8000;
          goto LAB_8c249142;
        }
      }
      else {
LAB_8c249142:
        *(undefined4 *)(unsigned)pdVar7 = 0xe0000000;
        CacheBlockWriteBack(pdVar7);
        if (*(uint *)(unsigned)((int)pdVar7 + 0x3c) != (uVar2 | (*(uint *)(fr0_ - 0x38)))) {
          *(uint *)(unsigned)((int)pdVar7 + 0x3c) = uVar2 | (*(uint *)(fr0_ - 0x38));
          pdVar12 = pdVar7 + 6;
          pdVar10 = pdVar7 + 2;
          puVar11 = ((undefined1 *)(unsigned)0x8c4c2620);
          uVar3 = (*(uint *)(fr0_ - 0x38));
          (vsp = ((unsigned long)(fr0_ - 64)), FUN_8c23bae2(((undefined1 *)(unsigned)0x8c4c2620),pdVar10,pdVar12,(*(uint *)(fr0_ - 0x38))));
          uVar23 = (vsp = ((unsigned long)(fr0_ - 64)), float_to_color_u8(puVar11,pdVar10,pdVar12,uVar3));
          *(undefined4 *)(unsigned)(pdVar7 + 5) = uVar23;
          uVar23 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c2630);
          if (cVar30 == '\0') {
            uVar23 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c2634);
          }
          uVar4 = (vsp = ((unsigned long)(fr0_ - 64)), float_to_color_u8(puVar11,pdVar10,pdVar12,uVar3));
          *(undefined4 *)(unsigned)((int)pdVar7 + 0x2c) = uVar4;
        }
        dVar27 = in_xd14;
        if (cVar30 == '\0') {
          dVar27 = CONCAT44D(uVar6,uVar23);
        }
        uVar23 = (undefined4)((ulonglong)in_dr2 >> 0x20);
        fVar26 = F32HI(dVar27);
        if (cVar29 == '\0') {
          dVar24 = CONCAT44D(uVar23,(float)(int)*((short *)(unsigned long)*(unsigned *)(fr0_ - 0x34)) * fVar26);
        }
        else {
          dVar24 = CONCAT44D(uVar23,(float)(int)*((short *)(unsigned long)*(unsigned *)(fr0_ - 0x34))) * dVar27;
        }
        if (cVar30 == '\0') {
          *(int *)(unsigned)(pdVar7 + 4) = SUB84(dVar24,0);
        }
        else {
          pdVar7[4] = in_xd2;
        }
        if (cVar29 == '\0') {
          fVar26 = (float)(int)((short *)(unsigned long)*(unsigned *)(fr0_ - 0x34))[1] * fVar26;
        }
        else {
          fVar26 = SUB84(CONCAT44D((int)(D2U(dVar24) >> 0x20),(float)(int)((short *)(unsigned long)*(unsigned *)(fr0_ - 0x34))[1]
                                         ) * dVar27,0);
        }
        if (cVar30 == '\0') {
          *(float *)(unsigned)((int)pdVar7 + 0x24) = fVar26;
        }
        else {
          *(double *)(unsigned)((int)pdVar7 + 0x24) = in_xd2;
        }
        CacheBlockWriteBack(pdVar7 + 4);
        if (cVar30 == '\0') {
          dVar24 = CONCAT44D(*(undefined4 *)(unsigned)pdVar7,SUB84(in_dr0,0));
          dVar20 = CONCAT44D(*(undefined4 *)(unsigned)((int)pdVar7 + 4),fVar26);
          pdVar7 = pdVar7 + 1;
        }
        else {
          dVar24 = *pdVar7;
          dVar20 = pdVar7[1];
          pdVar7 = pdVar7 + 2;
        }
        if (cVar30 == '\0') {
          uVar23 = *(undefined4 *)(unsigned)(pdVar7 + 2);
          dVar27 = CONCAT44D(uVar23,SUB84(dVar27,0));
          *(undefined4 *)(unsigned)((int)unaff_r8 + 0x1c) = *(undefined4 *)(unsigned)((int)pdVar7 + 0x14);
          *(undefined4 *)(unsigned)(unaff_r8 + 3) = uVar23;
          *(int *)(unsigned)((int)unaff_r8 + 0x14) = (int)(D2U(dVar20) >> 0x20);
          unaff_r8 = unaff_r8 + 2;
          *(int *)(unsigned)unaff_r8 = (int)(D2U(dVar24) >> 0x20);
        }
        else {
          dVar27 = pdVar7[2];
          unaff_r8[3] = pdVar7[3];
          unaff_r8[2] = dVar27;
          unaff_r8[1] = dVar20;
          *unaff_r8 = dVar24;
        }
        uVar23 = SUB84(dVar27,0);
        *(undefined4 *)(unsigned)pdVar8 = 0xe0000000;
        CacheBlockWriteBack(pdVar8);
        if (*(uint *)(unsigned)((int)pdVar8 + 0x3c) != (uVar2 | (*(uint *)(fr0_ - 0x38)))) {
          pdVar7 = pdVar8 + 2;
          *(uint *)(unsigned)((int)pdVar8 + 0x3c) = uVar2 | (*(uint *)(fr0_ - 0x38));
          pdVar10 = pdVar8 + 6;
          puVar11 = ((undefined1 *)(unsigned)0x8c4c2620);
          uVar3 = (*(uint *)(fr0_ - 0x38));
          (vsp = ((unsigned long)(fr0_ - 64)), FUN_8c23bae2(((undefined1 *)(unsigned)0x8c4c2620),pdVar7,pdVar10,(*(uint *)(fr0_ - 0x38))));
          uVar23 = (vsp = ((unsigned long)(fr0_ - 64)), float_to_color_u8(puVar11,pdVar7,pdVar10,uVar3));
          *(undefined4 *)(unsigned)(pdVar8 + 5) = uVar23;
          uVar23 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c2630);
          if (cVar30 == '\0') {
            uVar23 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c2634);
          }
          uVar4 = (vsp = ((unsigned long)(fr0_ - 64)), float_to_color_u8(puVar11,pdVar7,pdVar10,uVar3));
          *(undefined4 *)(unsigned)((int)pdVar8 + 0x2c) = uVar4;
        }
        dVar27 = in_xd14;
        if (cVar30 == '\0') {
          dVar27 = CONCAT44D(uVar6,uVar23);
        }
        uVar23 = (undefined4)(D2U(dVar20) >> 0x20);
        fVar26 = F32HI(dVar27);
        if (cVar29 == '\0') {
          dVar20 = CONCAT44D(uVar23,(float)(int)((short *)(unsigned long)*(unsigned *)(fr0_ - 0x34))[2] * fVar26);
        }
        else {
          dVar20 = CONCAT44D(uVar23,(float)(int)((short *)(unsigned long)*(unsigned *)(fr0_ - 0x34))[2]) * dVar27;
        }
        if (cVar30 == '\0') {
          *(int *)(unsigned)(pdVar8 + 4) = SUB84(dVar20,0);
        }
        else {
          pdVar8[4] = in_xd2;
        }
        if (cVar29 == '\0') {
          fVar26 = (float)(int)((short *)(unsigned long)*(unsigned *)(fr0_ - 0x34))[3] * fVar26;
        }
        else {
          fVar26 = SUB84(CONCAT44D((int)(D2U(dVar20) >> 0x20),(float)(int)((short *)(unsigned long)*(unsigned *)(fr0_ - 0x34))[3]
                                         ) * dVar27,0);
        }
        if (cVar30 == '\0') {
          *(float *)(unsigned)((int)pdVar8 + 0x24) = fVar26;
        }
        else {
          *(double *)(unsigned)((int)pdVar8 + 0x24) = in_xd2;
        }
        CacheBlockWriteBack(pdVar8 + 4);
        if (cVar30 == '\0') {
          dVar24 = CONCAT44D(*(undefined4 *)(unsigned)pdVar8,SUB84(dVar24,0));
          dVar20 = CONCAT44D(*(undefined4 *)(unsigned)((int)pdVar8 + 4),fVar26);
          pdVar8 = pdVar8 + 1;
        }
        else {
          dVar24 = *pdVar8;
          dVar20 = pdVar8[1];
          pdVar8 = pdVar8 + 2;
        }
        if (cVar30 == '\0') {
          uVar23 = *(undefined4 *)(unsigned)(pdVar8 + 2);
          dVar27 = CONCAT44D(uVar23,SUB84(dVar27,0));
          *(undefined4 *)(unsigned)((int)unaff_r8 + 0x3c) = *(undefined4 *)(unsigned)((int)pdVar8 + 0x14);
          *(undefined4 *)(unsigned)(unaff_r8 + 7) = uVar23;
          *(int *)(unsigned)((int)unaff_r8 + 0x34) = (int)(D2U(dVar20) >> 0x20);
          pdVar7 = unaff_r8 + 6;
          *(int *)(unsigned)pdVar7 = (int)(D2U(dVar24) >> 0x20);
        }
        else {
          dVar27 = pdVar8[2];
          unaff_r8[7] = pdVar8[3];
          unaff_r8[6] = dVar27;
          unaff_r8[5] = dVar20;
          pdVar7 = unaff_r8 + 4;
          *pdVar7 = dVar24;
        }
        uVar23 = SUB84(dVar27,0);
        *(undefined4 *)(unsigned)pdVar9 = 0xf0000000;
        CacheBlockWriteBack(pdVar9);
        if (*(uint *)(unsigned)((int)pdVar9 + 0x3c) != (uVar2 | (*(uint *)(fr0_ - 0x38)))) {
          pdVar8 = pdVar9 + 2;
          *(uint *)(unsigned)((int)pdVar9 + 0x3c) = uVar2 | (*(uint *)(fr0_ - 0x38));
          pdVar10 = pdVar9 + 6;
          puVar11 = ((undefined1 *)(unsigned)0x8c4c2620);
          (vsp = ((unsigned long)(fr0_ - 64)), FUN_8c23bae2(((undefined1 *)(unsigned)0x8c4c2620),pdVar8,pdVar10,(*(uint *)(fr0_ - 0x38))));
          uVar23 = (vsp = ((unsigned long)(fr0_ - 64)), float_to_color_u8(puVar11,pdVar8,pdVar10,(*(uint *)(fr0_ - 0x38))));
          *(undefined4 *)(unsigned)(pdVar9 + 5) = uVar23;
          uVar23 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c2630);
          if (cVar30 == '\0') {
            uVar23 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c2634);
          }
          uVar4 = (vsp = ((unsigned long)(fr0_ - 64)), float_to_color_u8(puVar11,pdVar8,pdVar10,(*(uint *)(fr0_ - 0x38))));
          *(undefined4 *)(unsigned)((int)pdVar9 + 0x2c) = uVar4;
        }
        dVar27 = in_xd14;
        if (cVar30 == '\0') {
          dVar27 = CONCAT44D(uVar6,uVar23);
        }
        uVar23 = (undefined4)(D2U(dVar20) >> 0x20);
        fVar26 = F32HI(dVar27);
        if (cVar29 == '\0') {
          dVar20 = CONCAT44D(uVar23,(float)(int)((short *)(unsigned long)*(unsigned *)(fr0_ - 0x34))[4] * fVar26);
        }
        else {
          dVar20 = CONCAT44D(uVar23,(float)(int)((short *)(unsigned long)*(unsigned *)(fr0_ - 0x34))[4]) * dVar27;
        }
        if (cVar30 == '\0') {
          *(int *)(unsigned)(pdVar9 + 4) = SUB84(dVar20,0);
        }
        else {
          pdVar9[4] = in_xd2;
        }
        if (cVar29 == '\0') {
          fVar26 = (float)(int)((short *)(unsigned long)*(unsigned *)(fr0_ - 0x34))[5] * fVar26;
        }
        else {
          fVar26 = SUB84(CONCAT44D((int)(D2U(dVar20) >> 0x20),(float)(int)((short *)(unsigned long)*(unsigned *)(fr0_ - 0x34))[5]
                                         ) * dVar27,0);
        }
        if (cVar30 == '\0') {
          *(float *)(unsigned)((int)pdVar9 + 0x24) = fVar26;
        }
        else {
          *(double *)(unsigned)((int)pdVar9 + 0x24) = in_xd2;
        }
        CacheBlockWriteBack(pdVar9 + 4);
        if (cVar30 == '\0') {
          in_dr0 = CONCAT44D(*(undefined4 *)(unsigned)pdVar9,SUB84(dVar24,0));
          in_dr2 = CONCAT44D(*(undefined4 *)(unsigned)((int)pdVar9 + 4),fVar26);
          pdVar9 = pdVar9 + 1;
        }
        else {
          in_dr0 = *pdVar9;
          in_dr2 = pdVar9[1];
          pdVar9 = pdVar9 + 2;
        }
        if (cVar30 == '\0') {
          uVar23 = *(undefined4 *)(unsigned)(pdVar9 + 2);
          in_dr4 = CONCAT44D(uVar23,SUB84(dVar27,0));
          *(undefined4 *)(unsigned)((int)pdVar7 + 0x3c) = *(undefined4 *)(unsigned)((int)pdVar9 + 0x14);
          *(undefined4 *)(unsigned)(pdVar7 + 7) = uVar23;
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
      (*(unsigned *)(fr0_ - 0x34) = (unsigned)(unsigned long)(((short *)(unsigned long)*(unsigned *)(fr0_ - 0x34)) + 6));
      (*(uint *)(fr0_ - 0x30)) = (*(uint *)(fr0_ - 0x30)) + 1;
    }
  }
  else if (uVar3 == 0x4000) {
    (*(undefined4 *)(unsigned)(unsigned)0x8c4aa51c) = (*(undefined4 *)(unsigned)(unsigned)0x8c4aa51c) + (uint)ar4[1] * 4;
    (*(int *)(fr0_ - 0x24)) = 0;
    while( true ) {
      uVar23 = SUB84(in_dr4,0);
      uVar3 = (uint)ar4[1];
      if ((int)uVar3 <= (*(int *)(fr0_ - 0x24))) break;
      pdVar9 = (double *)(unsigned)((uint)*puVar17 * 0x40 + (*(undefined4 *)(unsigned)(unsigned)0x8c4aa510));
      pdVar8 = (double *)(unsigned)((uint)puVar17[1] * 0x40 + (*(undefined4 *)(unsigned)(unsigned)0x8c4aa510));
      puVar19 = puVar17 + 3;
      pdVar7 = (double *)(unsigned)((uint)puVar17[2] * 0x40 + (*(undefined4 *)(unsigned)(unsigned)0x8c4aa510));
      puVar17 = puVar17 + 4;
      pdVar10 = (double *)(unsigned)((uint)*puVar19 * 0x40 + (*(undefined4 *)(unsigned)(unsigned)0x8c4aa510));
      if (cVar30 == '\0') {
        uVar23 = *(undefined4 *)(unsigned)((int)pdVar8 + 4);
        dVar27 = CONCAT44D(uVar23,*(undefined4 *)(unsigned)((int)pdVar9 + 4));
      }
      else {
        dVar27 = *(double *)(unsigned)((int)pdVar8 + 4);
        in_xd2 = *(double *)(unsigned)((int)pdVar9 + 4);
      }
      if (cVar29 == '\0') {
        dVar27 = CONCAT44D(F32HI(dVar27) - F32LO(dVar27),
                                  SUB84(dVar27,0));
      }
      else {
        dVar27 = dVar27 - dVar27;
      }
      if (cVar30 == '\0') {
        dVar27 = CONCAT44D((int)(D2U(dVar27) >> 0x20),*(undefined4 *)(unsigned)(pdVar7 + 1));
        dVar24 = CONCAT44D(*(undefined4 *)(unsigned)(pdVar8 + 1),uVar23);
      }
      else {
        in_xd2 = pdVar7[1];
        dVar24 = pdVar8[1];
      }
      fVar26 = F32HI(dVar24);
      if (cVar29 == '\0') {
        dVar27 = CONCAT44D((int)(D2U(dVar27) >> 0x20),F32LO(dVar27) - fVar26);
      }
      else {
        dVar27 = dVar27 - dVar24;
      }
      if (cVar30 == '\0') {
        in_dr0 = CONCAT44D((int)((ulonglong)in_dr0 >> 0x20),fVar26);
      }
      if (cVar29 == '\0') {
        dVar27 = CONCAT44D(F32HI(dVar27) * F32LO(dVar27),
                                  SUB84(dVar27,0));
      }
      else {
        dVar27 = dVar27 * dVar27;
      }
      if (cVar30 == '\0') {
        dVar27 = CONCAT44D((int)(D2U(dVar27) >> 0x20),*(undefined4 *)(unsigned)(pdVar9 + 1));
      }
      else {
        in_xd2 = pdVar9[1];
      }
      if (cVar29 == '\0') {
        dVar20 = CONCAT44D((int)((ulonglong)in_dr0 >> 0x20),F32LO(in_dr0) - F32LO(dVar27)
                                 );
      }
      else {
        dVar20 = in_dr0 - dVar27;
      }
      uVar23 = (undefined4)(D2U(dVar27) >> 0x20);
      if (cVar30 == '\0') {
        dVar27 = CONCAT44D(uVar23,SUB84(dVar24,0));
        dVar24 = CONCAT44D(uVar23,*(undefined4 *)(unsigned)((int)pdVar7 + 4));
      }
      else {
        in_xd2 = *(double *)(unsigned)((int)pdVar7 + 4);
        dVar24 = dVar27;
      }
      if (cVar29 == '\0') {
        dVar24 = CONCAT44D(uVar23,F32LO(dVar24) - F32LO(dVar27));
      }
      else {
        dVar24 = dVar24 - dVar27;
      }
      (*(uint *)(fr0_ - 0x30)) = 0;
      if (cVar29 == '\0') {
        in_dr0 = CONCAT44D((int)(D2U(dVar20) >> 0x20),F32LO(dVar20) * F32LO(dVar24)
                                 );
      }
      else {
        in_dr0 = dVar20 * dVar24;
      }
      dVar24 = (double)(D2U(dVar24) & 0xffffffff00000000);
      if (cVar29 == '\0') {
        fVar26 = F32HI(dVar27) - F32LO(in_dr0);
        in_dr4 = CONCAT44D(fVar26,SUB84(dVar27,0));
        bVar28 = 0.0 < fVar26;
      }
      else {
        in_dr4 = dVar27 - in_dr0;
        bVar28 = dVar24 < in_dr4;
      }
      uVar23 = SUB84(in_dr4,0);
      if (bVar28) {
        if (((*(undefined4 *)(unsigned)(unsigned)0x8c4ab308) & 0x800000) != 0) {
          (*(uint *)(fr0_ - 0x30)) = 0x8000;
          goto LAB_8c249460;
        }
      }
      else {
LAB_8c249460:
        *(undefined4 *)(unsigned)pdVar9 = 0xe0000000;
        CacheBlockWriteBack(pdVar9);
        if (*(uint *)(unsigned)((int)pdVar9 + 0x3c) != (uVar2 | (*(uint *)(fr0_ - 0x30)))) {
          *(uint *)(unsigned)((int)pdVar9 + 0x3c) = uVar2 | (*(uint *)(fr0_ - 0x30));
          a6 = pdVar9 + 6;
          pdVar12 = pdVar9 + 2;
          puVar11 = ((undefined1 *)(unsigned)0x8c4c2620);
          uVar3 = (*(uint *)(fr0_ - 0x30));
          (vsp = ((unsigned long)(fr0_ - 64)), FUN_8c23bae2(((undefined1 *)(unsigned)0x8c4c2620),pdVar12,a6,(*(uint *)(fr0_ - 0x30))));
          uVar23 = (vsp = ((unsigned long)(fr0_ - 64)), float_to_color_u8(puVar11,pdVar12,a6,uVar3));
          *(undefined4 *)(unsigned)(pdVar9 + 5) = uVar23;
          uVar23 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c2630);
          if (cVar30 == '\0') {
            uVar23 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c2634);
          }
          uVar4 = (vsp = ((unsigned long)(fr0_ - 64)), float_to_color_u8(puVar11,pdVar12,a6,uVar3));
          *(undefined4 *)(unsigned)((int)pdVar9 + 0x2c) = uVar4;
        }
        dVar27 = in_xd14;
        if (cVar30 == '\0') {
          dVar27 = CONCAT44D(uVar6,uVar23);
        }
        uVar23 = (undefined4)(D2U(dVar24) >> 0x20);
        fVar26 = F32HI(dVar27);
        if (cVar29 == '\0') {
          dVar24 = CONCAT44D(uVar23,(float)(int)*((short *)(unsigned long)*(unsigned *)(fr0_ - 0x34)) * fVar26);
        }
        else {
          dVar24 = CONCAT44D(uVar23,(float)(int)*((short *)(unsigned long)*(unsigned *)(fr0_ - 0x34))) * dVar27;
        }
        if (cVar30 == '\0') {
          *(int *)(unsigned)(pdVar9 + 4) = SUB84(dVar24,0);
        }
        else {
          pdVar9[4] = in_xd2;
        }
        if (cVar29 == '\0') {
          fVar26 = (float)(int)((short *)(unsigned long)*(unsigned *)(fr0_ - 0x34))[1] * fVar26;
        }
        else {
          fVar26 = SUB84(CONCAT44D((int)(D2U(dVar24) >> 0x20),(float)(int)((short *)(unsigned long)*(unsigned *)(fr0_ - 0x34))[1]
                                         ) * dVar27,0);
        }
        if (cVar30 == '\0') {
          *(float *)(unsigned)((int)pdVar9 + 0x24) = fVar26;
        }
        else {
          *(double *)(unsigned)((int)pdVar9 + 0x24) = in_xd2;
        }
        CacheBlockWriteBack(pdVar9 + 4);
        if (cVar30 == '\0') {
          dVar24 = CONCAT44D(*(undefined4 *)(unsigned)pdVar9,SUB84(in_dr0,0));
          dVar20 = CONCAT44D(*(undefined4 *)(unsigned)((int)pdVar9 + 4),fVar26);
          pdVar9 = pdVar9 + 1;
        }
        else {
          dVar24 = *pdVar9;
          dVar20 = pdVar9[1];
          pdVar9 = pdVar9 + 2;
        }
        if (cVar30 == '\0') {
          uVar23 = *(undefined4 *)(unsigned)(pdVar9 + 2);
          dVar27 = CONCAT44D(uVar23,SUB84(dVar27,0));
          *(undefined4 *)(unsigned)((int)unaff_r8 + 0x1c) = *(undefined4 *)(unsigned)((int)pdVar9 + 0x14);
          *(undefined4 *)(unsigned)(unaff_r8 + 3) = uVar23;
          *(int *)(unsigned)((int)unaff_r8 + 0x14) = (int)(D2U(dVar20) >> 0x20);
          unaff_r8 = unaff_r8 + 2;
          *(int *)(unsigned)unaff_r8 = (int)(D2U(dVar24) >> 0x20);
        }
        else {
          dVar27 = pdVar9[2];
          unaff_r8[3] = pdVar9[3];
          unaff_r8[2] = dVar27;
          unaff_r8[1] = dVar20;
          *unaff_r8 = dVar24;
        }
        uVar23 = SUB84(dVar27,0);
        *(undefined4 *)(unsigned)pdVar8 = 0xe0000000;
        CacheBlockWriteBack(pdVar8);
        if (*(uint *)(unsigned)((int)pdVar8 + 0x3c) != (uVar2 | (*(uint *)(fr0_ - 0x30)))) {
          *(uint *)(unsigned)((int)pdVar8 + 0x3c) = uVar2 | (*(uint *)(fr0_ - 0x30));
          pdVar12 = pdVar8 + 6;
          pdVar9 = pdVar8 + 2;
          puVar11 = ((undefined1 *)(unsigned)0x8c4c2620);
          uVar3 = (*(uint *)(fr0_ - 0x30));
          (vsp = ((unsigned long)(fr0_ - 64)), FUN_8c23bae2(((undefined1 *)(unsigned)0x8c4c2620),pdVar9,pdVar12,(*(uint *)(fr0_ - 0x30))));
          uVar23 = (vsp = ((unsigned long)(fr0_ - 64)), float_to_color_u8(puVar11,pdVar9,pdVar12,uVar3));
          *(undefined4 *)(unsigned)(pdVar8 + 5) = uVar23;
          uVar23 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c2630);
          if (cVar30 == '\0') {
            uVar23 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c2634);
          }
          uVar4 = (vsp = ((unsigned long)(fr0_ - 64)), float_to_color_u8(puVar11,pdVar9,pdVar12,uVar3));
          *(undefined4 *)(unsigned)((int)pdVar8 + 0x2c) = uVar4;
        }
        dVar27 = in_xd14;
        if (cVar30 == '\0') {
          dVar27 = CONCAT44D(uVar6,uVar23);
        }
        uVar23 = (undefined4)(D2U(dVar20) >> 0x20);
        fVar26 = F32HI(dVar27);
        if (cVar29 == '\0') {
          dVar20 = CONCAT44D(uVar23,(float)(int)((short *)(unsigned long)*(unsigned *)(fr0_ - 0x34))[2] * fVar26);
        }
        else {
          dVar20 = CONCAT44D(uVar23,(float)(int)((short *)(unsigned long)*(unsigned *)(fr0_ - 0x34))[2]) * dVar27;
        }
        if (cVar30 == '\0') {
          *(int *)(unsigned)(pdVar8 + 4) = SUB84(dVar20,0);
        }
        else {
          pdVar8[4] = in_xd2;
        }
        if (cVar29 == '\0') {
          fVar26 = (float)(int)((short *)(unsigned long)*(unsigned *)(fr0_ - 0x34))[3] * fVar26;
        }
        else {
          fVar26 = SUB84(CONCAT44D((int)(D2U(dVar20) >> 0x20),(float)(int)((short *)(unsigned long)*(unsigned *)(fr0_ - 0x34))[3]
                                         ) * dVar27,0);
        }
        if (cVar30 == '\0') {
          *(float *)(unsigned)((int)pdVar8 + 0x24) = fVar26;
        }
        else {
          *(double *)(unsigned)((int)pdVar8 + 0x24) = in_xd2;
        }
        CacheBlockWriteBack(pdVar8 + 4);
        if (cVar30 == '\0') {
          dVar24 = CONCAT44D(*(undefined4 *)(unsigned)pdVar8,SUB84(dVar24,0));
          dVar20 = CONCAT44D(*(undefined4 *)(unsigned)((int)pdVar8 + 4),fVar26);
          pdVar8 = pdVar8 + 1;
        }
        else {
          dVar24 = *pdVar8;
          dVar20 = pdVar8[1];
          pdVar8 = pdVar8 + 2;
        }
        if (cVar30 == '\0') {
          uVar23 = *(undefined4 *)(unsigned)(pdVar8 + 2);
          dVar27 = CONCAT44D(uVar23,SUB84(dVar27,0));
          *(undefined4 *)(unsigned)((int)unaff_r8 + 0x3c) = *(undefined4 *)(unsigned)((int)pdVar8 + 0x14);
          *(undefined4 *)(unsigned)(unaff_r8 + 7) = uVar23;
          *(int *)(unsigned)((int)unaff_r8 + 0x34) = (int)(D2U(dVar20) >> 0x20);
          pdVar8 = unaff_r8 + 6;
          *(int *)(unsigned)pdVar8 = (int)(D2U(dVar24) >> 0x20);
        }
        else {
          dVar27 = pdVar8[2];
          unaff_r8[7] = pdVar8[3];
          unaff_r8[6] = dVar27;
          unaff_r8[5] = dVar20;
          pdVar8 = unaff_r8 + 4;
          *pdVar8 = dVar24;
        }
        uVar23 = SUB84(dVar27,0);
        *(undefined4 *)(unsigned)pdVar7 = 0xe0000000;
        CacheBlockWriteBack(pdVar7);
        if (*(uint *)(unsigned)((int)pdVar7 + 0x3c) != (uVar2 | (*(uint *)(fr0_ - 0x30)))) {
          *(uint *)(unsigned)((int)pdVar7 + 0x3c) = uVar2 | (*(uint *)(fr0_ - 0x30));
          pdVar12 = pdVar7 + 6;
          pdVar9 = pdVar7 + 2;
          puVar11 = ((undefined1 *)(unsigned)0x8c4c2620);
          uVar3 = (*(uint *)(fr0_ - 0x30));
          (vsp = ((unsigned long)(fr0_ - 64)), FUN_8c23bae2(((undefined1 *)(unsigned)0x8c4c2620),pdVar9,pdVar12,(*(uint *)(fr0_ - 0x30))));
          uVar23 = (vsp = ((unsigned long)(fr0_ - 64)), float_to_color_u8(puVar11,pdVar9,pdVar12,uVar3));
          *(undefined4 *)(unsigned)(pdVar7 + 5) = uVar23;
          uVar23 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c2630);
          if (cVar30 == '\0') {
            uVar23 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c2634);
          }
          uVar4 = (vsp = ((unsigned long)(fr0_ - 64)), float_to_color_u8(puVar11,pdVar9,pdVar12,uVar3));
          *(undefined4 *)(unsigned)((int)pdVar7 + 0x2c) = uVar4;
        }
        dVar27 = in_xd14;
        if (cVar30 == '\0') {
          dVar27 = CONCAT44D(uVar6,uVar23);
        }
        uVar23 = (undefined4)(D2U(dVar20) >> 0x20);
        fVar26 = F32HI(dVar27);
        if (cVar29 == '\0') {
          dVar20 = CONCAT44D(uVar23,(float)(int)((short *)(unsigned long)*(unsigned *)(fr0_ - 0x34))[4] * fVar26);
        }
        else {
          dVar20 = CONCAT44D(uVar23,(float)(int)((short *)(unsigned long)*(unsigned *)(fr0_ - 0x34))[4]) * dVar27;
        }
        if (cVar30 == '\0') {
          *(int *)(unsigned)(pdVar7 + 4) = SUB84(dVar20,0);
        }
        else {
          pdVar7[4] = in_xd2;
        }
        if (cVar29 == '\0') {
          fVar26 = (float)(int)((short *)(unsigned long)*(unsigned *)(fr0_ - 0x34))[5] * fVar26;
        }
        else {
          fVar26 = SUB84(CONCAT44D((int)(D2U(dVar20) >> 0x20),(float)(int)((short *)(unsigned long)*(unsigned *)(fr0_ - 0x34))[5]
                                         ) * dVar27,0);
        }
        if (cVar30 == '\0') {
          *(float *)(unsigned)((int)pdVar7 + 0x24) = fVar26;
        }
        else {
          *(double *)(unsigned)((int)pdVar7 + 0x24) = in_xd2;
        }
        CacheBlockWriteBack(pdVar7 + 4);
        if (cVar30 == '\0') {
          dVar24 = CONCAT44D(*(undefined4 *)(unsigned)pdVar7,SUB84(dVar24,0));
          dVar20 = CONCAT44D(*(undefined4 *)(unsigned)((int)pdVar7 + 4),fVar26);
          pdVar7 = pdVar7 + 1;
        }
        else {
          dVar24 = *pdVar7;
          dVar20 = pdVar7[1];
          pdVar7 = pdVar7 + 2;
        }
        if (cVar30 == '\0') {
          uVar23 = *(undefined4 *)(unsigned)(pdVar7 + 2);
          dVar27 = CONCAT44D(uVar23,SUB84(dVar27,0));
          *(undefined4 *)(unsigned)((int)pdVar8 + 0x3c) = *(undefined4 *)(unsigned)((int)pdVar7 + 0x14);
          *(undefined4 *)(unsigned)(pdVar8 + 7) = uVar23;
          *(int *)(unsigned)((int)pdVar8 + 0x34) = (int)(D2U(dVar20) >> 0x20);
          pdVar8 = pdVar8 + 6;
          *(int *)(unsigned)pdVar8 = (int)(D2U(dVar24) >> 0x20);
        }
        else {
          dVar27 = pdVar7[2];
          pdVar8[7] = pdVar7[3];
          pdVar8[6] = dVar27;
          pdVar8[5] = dVar20;
          pdVar8 = pdVar8 + 4;
          *pdVar8 = dVar24;
        }
        uVar23 = SUB84(dVar27,0);
        *(undefined4 *)(unsigned)pdVar10 = 0xf0000000;
        CacheBlockWriteBack(pdVar10);
        if (*(uint *)(unsigned)((int)pdVar10 + 0x3c) != (uVar2 | (*(uint *)(fr0_ - 0x30)))) {
          *(uint *)(unsigned)((int)pdVar10 + 0x3c) = uVar2 | (*(uint *)(fr0_ - 0x30));
          pdVar9 = pdVar10 + 6;
          pdVar7 = pdVar10 + 2;
          puVar11 = ((undefined1 *)(unsigned)0x8c4c2620);
          (vsp = ((unsigned long)(fr0_ - 64)), FUN_8c23bae2(((undefined1 *)(unsigned)0x8c4c2620),pdVar7,pdVar9,(*(uint *)(fr0_ - 0x30))));
          uVar23 = (vsp = ((unsigned long)(fr0_ - 64)), float_to_color_u8(puVar11,pdVar7,pdVar9,(*(uint *)(fr0_ - 0x30))));
          *(undefined4 *)(unsigned)(pdVar10 + 5) = uVar23;
          uVar23 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c2630);
          if (cVar30 == '\0') {
            uVar23 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c2634);
          }
          uVar4 = (vsp = ((unsigned long)(fr0_ - 64)), float_to_color_u8(puVar11,pdVar7,pdVar9,(*(uint *)(fr0_ - 0x30))));
          *(undefined4 *)(unsigned)((int)pdVar10 + 0x2c) = uVar4;
        }
        dVar27 = in_xd14;
        if (cVar30 == '\0') {
          dVar27 = CONCAT44D(uVar6,uVar23);
        }
        uVar23 = (undefined4)(D2U(dVar20) >> 0x20);
        fVar26 = F32HI(dVar27);
        if (cVar29 == '\0') {
          dVar20 = CONCAT44D(uVar23,(float)(int)((short *)(unsigned long)*(unsigned *)(fr0_ - 0x34))[6] * fVar26);
        }
        else {
          dVar20 = CONCAT44D(uVar23,(float)(int)((short *)(unsigned long)*(unsigned *)(fr0_ - 0x34))[6]) * dVar27;
        }
        if (cVar30 == '\0') {
          *(int *)(unsigned)(pdVar10 + 4) = SUB84(dVar20,0);
        }
        else {
          pdVar10[4] = in_xd2;
        }
        if (cVar29 == '\0') {
          fVar26 = (float)(int)((short *)(unsigned long)*(unsigned *)(fr0_ - 0x34))[7] * fVar26;
        }
        else {
          fVar26 = SUB84(CONCAT44D((int)(D2U(dVar20) >> 0x20),(float)(int)((short *)(unsigned long)*(unsigned *)(fr0_ - 0x34))[7]
                                         ) * dVar27,0);
        }
        if (cVar30 == '\0') {
          *(float *)(unsigned)((int)pdVar10 + 0x24) = fVar26;
        }
        else {
          *(double *)(unsigned)((int)pdVar10 + 0x24) = in_xd2;
        }
        CacheBlockWriteBack(pdVar10 + 4);
        if (cVar30 == '\0') {
          in_dr0 = CONCAT44D(*(undefined4 *)(unsigned)pdVar10,SUB84(dVar24,0));
          dVar24 = CONCAT44D(*(undefined4 *)(unsigned)((int)pdVar10 + 4),fVar26);
          pdVar10 = pdVar10 + 1;
        }
        else {
          in_dr0 = *pdVar10;
          dVar24 = pdVar10[1];
          pdVar10 = pdVar10 + 2;
        }
        if (cVar30 == '\0') {
          uVar23 = *(undefined4 *)(unsigned)(pdVar10 + 2);
          in_dr4 = CONCAT44D(uVar23,SUB84(dVar27,0));
          *(undefined4 *)(unsigned)((int)pdVar8 + 0x3c) = *(undefined4 *)(unsigned)((int)pdVar10 + 0x14);
          *(undefined4 *)(unsigned)(pdVar8 + 7) = uVar23;
          *(int *)(unsigned)((int)pdVar8 + 0x34) = (int)(D2U(dVar24) >> 0x20);
          pdVar8 = pdVar8 + 6;
          *(int *)(unsigned)pdVar8 = (int)((ulonglong)in_dr0 >> 0x20);
        }
        else {
          in_dr4 = pdVar10[2];
          pdVar8[7] = pdVar10[3];
          pdVar8[6] = in_dr4;
          pdVar8[5] = dVar24;
          pdVar8 = pdVar8 + 4;
          *pdVar8 = in_dr0;
        }
        unaff_r8 = pdVar8 + 4;
        (*(undefined4 *)(unsigned)(unsigned)0x8c4aa520) = (*(undefined4 *)(unsigned)(unsigned)0x8c4aa520) + 4;
      }
      (*(unsigned *)(fr0_ - 0x34) = (unsigned)(unsigned long)(((short *)(unsigned long)*(unsigned *)(fr0_ - 0x34)) + 8));
      (*(int *)(fr0_ - 0x24)) = (*(int *)(fr0_ - 0x24)) + 1;
    }
  }
  else if (uVar3 == 0x8000) {
    (*(uint *)(fr0_ - 0x38)) = 0;
    while( true ) {
      uVar23 = SUB84(in_dr4,0);
      uVar3 = (uint)ar4[1];
      if ((int)uVar3 <= (int)(*(uint *)(fr0_ - 0x38))) break;
      puVar19 = puVar17 + 1;
      uVar3 = (uint)*puVar17;
      (*(undefined4 *)(unsigned)(unsigned)0x8c4aa51c) = (*(undefined4 *)(unsigned)(unsigned)0x8c4aa51c) + uVar3;
      iVar13 = (uint)puVar17[2] * 0x40 + (*(undefined4 *)(unsigned)(unsigned)0x8c4aa510);
      if (cVar30 == '\0') {
        uVar23 = *(undefined4 *)(unsigned)(iVar13 + 4);
      }
      else {
        in_xd4 = *(double *)(unsigned)(iVar13 + 4);
      }
      iVar15 = (uint)*puVar19 * 0x40 + (*(undefined4 *)(unsigned)(unsigned)0x8c4aa510);
      if (cVar30 == '\0') {
        dVar27 = CONCAT44D(uVar23,*(undefined4 *)(unsigned)(iVar15 + 4));
      }
      else {
        in_xd2 = *(double *)(unsigned)(iVar15 + 4);
        dVar27 = in_xd4;
      }
      if (cVar29 == '\0') {
        dVar27 = CONCAT44D(F32HI(dVar27) - F32LO(dVar27),
                                  SUB84(dVar27,0));
      }
      else {
        dVar27 = dVar27 - dVar27;
      }
      if (cVar30 == '\0') {
        dVar24 = CONCAT44D(*(undefined4 *)(unsigned)(iVar13 + 8),uVar23);
      }
      else {
        dVar24 = *(double *)(unsigned)(iVar13 + 8);
      }
      iVar13 = (uint)puVar17[3] * 0x40 + (*(undefined4 *)(unsigned)(unsigned)0x8c4aa510);
      fVar26 = F32HI(dVar24);
      if (cVar30 == '\0') {
        dVar27 = CONCAT44D((int)(D2U(dVar27) >> 0x20),*(undefined4 *)(unsigned)(iVar13 + 8));
        in_dr0 = CONCAT44D((int)((ulonglong)in_dr0 >> 0x20),fVar26);
      }
      else {
        in_xd2 = *(double *)(unsigned)(iVar13 + 8);
      }
      if (cVar29 == '\0') {
        fVar26 = F32LO(dVar27) - fVar26;
        dVar27 = CONCAT44D(F32HI(dVar27) * fVar26,fVar26);
      }
      else {
        dVar27 = (dVar27 - dVar24) * (dVar27 - dVar24);
      }
      if (cVar30 == '\0') {
        dVar27 = CONCAT44D((int)(D2U(dVar27) >> 0x20),*(undefined4 *)(unsigned)(iVar15 + 8));
      }
      else {
        in_xd2 = *(double *)(unsigned)(iVar15 + 8);
      }
      if (cVar29 == '\0') {
        dVar20 = CONCAT44D((int)((ulonglong)in_dr0 >> 0x20),F32LO(in_dr0) - F32LO(dVar27)
                                 );
      }
      else {
        dVar20 = in_dr0 - dVar27;
      }
      if (cVar30 == '\0') {
        dVar27 = CONCAT44D((int)(D2U(dVar27) >> 0x20),*(undefined4 *)(unsigned)(iVar13 + 4));
      }
      else {
        in_xd2 = *(double *)(unsigned)(iVar13 + 4);
      }
      (*(uint *)(fr0_ - 0x40)) = 0;
      if (cVar29 == '\0') {
        dVar27 = CONCAT44D((int)(D2U(dVar27) >> 0x20),F32LO(dVar27) - F32LO(dVar24)
                                 );
      }
      else {
        dVar27 = dVar27 - dVar24;
      }
      uVar16 = (uint)(D2U(dVar27) >> 0x20);
      dVar25 = dVar27;
      if (cVar30 == '\0') {
        dVar25 = CONCAT44D(uVar16,SUB84(dVar24,0));
      }
      if (cVar29 == '\0') {
        in_dr0 = CONCAT44D((int)(D2U(dVar20) >> 0x20),F32LO(dVar20) * F32LO(dVar27)
                                 );
      }
      else {
        in_dr0 = dVar20 * dVar27;
      }
      dVar27 = (double)((ulonglong)uVar16 << 0x20);
      if (cVar29 == '\0') {
        fVar26 = F32HI(dVar25) - F32LO(in_dr0);
        in_dr4 = CONCAT44D(fVar26,SUB84(dVar25,0));
        bVar28 = 0.0 < fVar26;
      }
      else {
        in_dr4 = dVar25 - in_dr0;
        bVar28 = dVar27 < in_dr4;
      }
      uVar23 = SUB84(in_dr4,0);
      if (bVar28) {
        if (((*(undefined4 *)(unsigned)(unsigned)0x8c4ab308) & 0x800000) != 0) {
          (*(uint *)(fr0_ - 0x40)) = 0x8000;
          goto LAB_8c2497d0;
        }
        (*(unsigned *)(fr0_ - 0x34) = (unsigned)(unsigned long)(((short *)(unsigned long)*(unsigned *)(fr0_ - 0x34)) + uVar3 * 2));
        puVar17 = puVar19 + uVar3;
      }
      else {
LAB_8c2497d0:
        (*(undefined4 *)(unsigned)(unsigned)0x8c4aa520) = (*(undefined4 *)(unsigned)(unsigned)0x8c4aa520) + uVar3;
        (*(uint *)(fr0_ - 0x30)) = 0;
        if (0 < (int)(uVar3 - 1)) {
          do {
            uVar4 = SUB84(in_dr0,0);
            uVar22 = (undefined4)(D2U(dVar27) >> 0x20);
            uVar23 = SUB84(in_dr4,0);
            uVar1 = *puVar19;
            puVar19 = puVar19 + 1;
            pdVar7 = (double *)(unsigned)((uint)uVar1 * 0x40 + (*(undefined4 *)(unsigned)(unsigned)0x8c4aa510));
            *(undefined4 *)(unsigned)pdVar7 = 0xe0000000;
            CacheBlockWriteBack(pdVar7);
            if (*(uint *)(unsigned)((int)pdVar7 + 0x3c) != (uVar2 | (*(uint *)(fr0_ - 0x40)))) {
              pdVar8 = pdVar7 + 2;
              *(uint *)(unsigned)((int)pdVar7 + 0x3c) = uVar2 | (*(uint *)(fr0_ - 0x40));
              pdVar9 = pdVar7 + 6;
              puVar11 = ((undefined1 *)(unsigned)0x8c4c2620);
              uVar16 = (*(uint *)(fr0_ - 0x40));
              (vsp = ((unsigned long)(fr0_ - 64)), FUN_8c23bae2(((undefined1 *)(unsigned)0x8c4c2620),pdVar8,pdVar9,(*(uint *)(fr0_ - 0x40))));
              if (cVar30 != '\0') {
                in_xd4 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4c2628),(*(undefined4 *)(unsigned)(unsigned)0x8c4c2624));
              }
              uVar23 = (vsp = ((unsigned long)(fr0_ - 64)), float_to_color_u8(puVar11,pdVar8,pdVar9,uVar16));
              *(undefined4 *)(unsigned)(pdVar7 + 5) = uVar23;
              uVar23 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c2634);
              if (cVar30 != '\0') {
                in_xd4 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4c2638),(*(undefined4 *)(unsigned)(unsigned)0x8c4c2634));
                uVar23 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c2630);
              }
              uVar5 = (vsp = ((unsigned long)(fr0_ - 64)), float_to_color_u8(puVar11,pdVar8,pdVar9,uVar16));
              *(undefined4 *)(unsigned)((int)pdVar7 + 0x2c) = uVar5;
            }
            dVar24 = in_xd14;
            if (cVar30 == '\0') {
              dVar24 = CONCAT44D(uVar6,uVar23);
            }
            psVar14 = ((short *)(unsigned long)*(unsigned *)(fr0_ - 0x34)) + 2;
            fVar26 = F32HI(dVar24);
            if (cVar29 == '\0') {
              dVar27 = CONCAT44D(uVar22,(float)(int)*((short *)(unsigned long)*(unsigned *)(fr0_ - 0x34)) * fVar26);
            }
            else {
              dVar27 = CONCAT44D(uVar22,(float)(int)*((short *)(unsigned long)*(unsigned *)(fr0_ - 0x34))) * dVar24;
            }
            if (cVar30 == '\0') {
              *(int *)(unsigned)(pdVar7 + 4) = SUB84(dVar27,0);
            }
            else {
              pdVar7[4] = in_xd2;
            }
            if (cVar29 == '\0') {
              fVar26 = (float)(int)((short *)(unsigned long)*(unsigned *)(fr0_ - 0x34))[1] * fVar26;
            }
            else {
              fVar26 = SUB84(CONCAT44D((int)(D2U(dVar27) >> 0x20),
                                              (float)(int)((short *)(unsigned long)*(unsigned *)(fr0_ - 0x34))[1]) * dVar24,0);
            }
            if (cVar30 == '\0') {
              *(float *)(unsigned)((int)pdVar7 + 0x24) = fVar26;
            }
            else {
              *(double *)(unsigned)((int)pdVar7 + 0x24) = in_xd2;
            }
            CacheBlockWriteBack(pdVar7 + 4);
            if (cVar30 == '\0') {
              in_dr0 = CONCAT44D(*(undefined4 *)(unsigned)pdVar7,uVar4);
              dVar27 = CONCAT44D(*(undefined4 *)(unsigned)((int)pdVar7 + 4),fVar26);
              pdVar7 = pdVar7 + 1;
            }
            else {
              in_dr0 = *pdVar7;
              dVar27 = pdVar7[1];
              pdVar7 = pdVar7 + 2;
            }
            if (cVar30 == '\0') {
              uVar23 = *(undefined4 *)(unsigned)(pdVar7 + 2);
              in_dr4 = CONCAT44D(uVar23,SUB84(dVar24,0));
              *(undefined4 *)(unsigned)((int)unaff_r8 + 0x1c) = *(undefined4 *)(unsigned)((int)pdVar7 + 0x14);
              *(undefined4 *)(unsigned)(unaff_r8 + 3) = uVar23;
              *(int *)(unsigned)((int)unaff_r8 + 0x14) = (int)(D2U(dVar27) >> 0x20);
              unaff_r8 = unaff_r8 + 2;
              *(int *)(unsigned)unaff_r8 = (int)((ulonglong)in_dr0 >> 0x20);
            }
            else {
              in_dr4 = pdVar7[2];
              unaff_r8[3] = pdVar7[3];
              unaff_r8[2] = in_dr4;
              unaff_r8[1] = dVar27;
              *unaff_r8 = in_dr0;
            }
            uVar23 = SUB84(in_dr4,0);
            unaff_r8 = unaff_r8 + 4;
            (*(uint *)(fr0_ - 0x30)) = (*(uint *)(fr0_ - 0x30)) + 1;
            (*(unsigned *)(fr0_ - 0x34) = (unsigned)(unsigned long)(psVar14));
          } while ((int)(*(uint *)(fr0_ - 0x30)) < (int)(uVar3 - 1));
        }
        uVar4 = SUB84(in_dr0,0);
        uVar22 = (undefined4)(D2U(dVar27) >> 0x20);
        puVar17 = puVar19 + 1;
        pdVar7 = (double *)(unsigned)((uint)*puVar19 * 0x40 + (*(undefined4 *)(unsigned)(unsigned)0x8c4aa510));
        *(undefined4 *)(unsigned)pdVar7 = 0xf0000000;
        CacheBlockWriteBack(pdVar7);
        if (*(uint *)(unsigned)((int)pdVar7 + 0x3c) != (uVar2 | (*(uint *)(fr0_ - 0x40)))) {
          pdVar8 = pdVar7 + 2;
          *(uint *)(unsigned)((int)pdVar7 + 0x3c) = uVar2 | (*(uint *)(fr0_ - 0x40));
          pdVar9 = pdVar7 + 6;
          puVar11 = ((undefined1 *)(unsigned)0x8c4c2620);
          (vsp = ((unsigned long)(fr0_ - 64)), FUN_8c23bae2(((undefined1 *)(unsigned)0x8c4c2620),pdVar8,pdVar9,(*(uint *)(fr0_ - 0x40))));
          if (cVar30 != '\0') {
            in_xd4 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4c2628),(*(undefined4 *)(unsigned)(unsigned)0x8c4c2624));
          }
          uVar23 = (vsp = ((unsigned long)(fr0_ - 64)), float_to_color_u8(puVar11,pdVar8,pdVar9,(*(uint *)(fr0_ - 0x40))));
          *(undefined4 *)(unsigned)(pdVar7 + 5) = uVar23;
          uVar23 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c2634);
          if (cVar30 != '\0') {
            in_xd4 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4c2638),(*(undefined4 *)(unsigned)(unsigned)0x8c4c2634));
            uVar23 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c2630);
          }
          uVar5 = (vsp = ((unsigned long)(fr0_ - 64)), float_to_color_u8(puVar11,pdVar8,pdVar9,(*(uint *)(fr0_ - 0x40))));
          *(undefined4 *)(unsigned)((int)pdVar7 + 0x2c) = uVar5;
        }
        dVar27 = in_xd14;
        if (cVar30 == '\0') {
          dVar27 = CONCAT44D(uVar6,uVar23);
        }
        fVar26 = F32HI(dVar27);
        if (cVar29 == '\0') {
          dVar24 = CONCAT44D(uVar22,(float)(int)*((short *)(unsigned long)*(unsigned *)(fr0_ - 0x34)) * fVar26);
        }
        else {
          dVar24 = CONCAT44D(uVar22,(float)(int)*((short *)(unsigned long)*(unsigned *)(fr0_ - 0x34))) * dVar27;
        }
        if (cVar30 == '\0') {
          *(int *)(unsigned)(pdVar7 + 4) = SUB84(dVar24,0);
        }
        else {
          pdVar7[4] = in_xd2;
        }
        if (cVar29 == '\0') {
          fVar26 = (float)(int)((short *)(unsigned long)*(unsigned *)(fr0_ - 0x34))[1] * fVar26;
        }
        else {
          fVar26 = SUB84(CONCAT44D((int)(D2U(dVar24) >> 0x20),(float)(int)((short *)(unsigned long)*(unsigned *)(fr0_ - 0x34))[1]
                                         ) * dVar27,0);
        }
        if (cVar30 == '\0') {
          *(float *)(unsigned)((int)pdVar7 + 0x24) = fVar26;
        }
        else {
          *(double *)(unsigned)((int)pdVar7 + 0x24) = in_xd2;
        }
        CacheBlockWriteBack(pdVar7 + 4);
        if (cVar30 == '\0') {
          in_dr0 = CONCAT44D(*(undefined4 *)(unsigned)pdVar7,uVar4);
          dVar24 = CONCAT44D(*(undefined4 *)(unsigned)((int)pdVar7 + 4),fVar26);
          pdVar7 = pdVar7 + 1;
        }
        else {
          in_dr0 = *pdVar7;
          dVar24 = pdVar7[1];
          pdVar7 = pdVar7 + 2;
        }
        if (cVar30 == '\0') {
          uVar23 = *(undefined4 *)(unsigned)(pdVar7 + 2);
          in_dr4 = CONCAT44D(uVar23,SUB84(dVar27,0));
          *(undefined4 *)(unsigned)((int)unaff_r8 + 0x1c) = *(undefined4 *)(unsigned)((int)pdVar7 + 0x14);
          *(undefined4 *)(unsigned)(unaff_r8 + 3) = uVar23;
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
        (*(unsigned *)(fr0_ - 0x34) = (unsigned)(unsigned long)(((short *)(unsigned long)*(unsigned *)(fr0_ - 0x34)) + 2));
      }
      (*(uint *)(fr0_ - 0x38)) = (*(uint *)(fr0_ - 0x38)) + 1;
    }
  }
  else if (uVar3 == 0xc000) {
    if (((*(undefined4 *)(unsigned)(unsigned)0x8c4ab308) & 0x800000) == 0) {
      UNRECOVERED_JUMPTABLE = ((void *)0x8c23f5e2);
    }
    else {
      UNRECOVERED_JUMPTABLE = ((void *)0x8c23f35a);
    }
                    
                    
    uVar6 = (vsp = ((unsigned long)(fr0_ - 64)), (*(code *)xlat((unsigned long)UNRECOVERED_JUMPTABLE))(ar4,uVar2,vr6,vr7));
    return uVar6;
  }
  return uVar3;
}

__asm__(".globl _FUN_8c24901e\n.set _FUN_8c24901e, _FUN_8c24901e_def\n");
