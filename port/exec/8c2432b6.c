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
undefined4 FUN_8c2432b6_def(int ar4,uint ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c2432b6";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 80; for (int i_ = 0; i_ < 80; i_++) z_[i_] = 0; }
  ushort uVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined1 *puVar5;
  double *pdVar6;
  double *pdVar7;
  double *ar6_00;
  uint ar7_00;
  double *unaff_r8 = 0;
  double *pdVar8;
  double *pdVar9;
  double *pdVar10;
  ushort *puVar11;
  ushort *puVar12;
  ushort *puVar13;
  short *psVar14;
  short *psVar15;
  double in_dr0 = 0;
  float fVar16;
  float fVar17;
  double in_dr2 = 0;
  double dVar18;
  float fVar21;
  uint uVar22;
  double dVar19;
  double dVar20;
  uint uVar23;
  double in_dr4 = 0;
  double dVar24;
  undefined4 uVar25;
  double in_dr6 = 0;
  undefined4 in_fr13 = 0;
  double dVar26;
  double dVar27;
  double dVar28;
  double in_xd2 = 0;
  double in_xd12 = 0;
  bool bVar29;
  char cVar30;
  char cVar31;
  uint uVar32;
  
  cVar31 = '\0';
  cVar30 = '\0';
  dVar26 = CONCAT44D(0x3b800000,in_fr13);
  ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x50))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 80)); noop_23d694(ar4,ar5,ar6,ar7); });
  iVar2 = (*(undefined4 *)(unsigned)(unsigned)0x8c4aa510);
  if (((*(undefined4 *)(unsigned)(unsigned)0x8c4ab308) & 0x800000) == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = 0x8000;
  }
  puVar11 = ((ushort *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 4));
  psVar14 = ((short *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x14));
  (*(uint *)(fr0_ - 0x30)) = (uint)*(ushort *)(unsigned)(ar4 + 2);
  (*(int *)(fr0_ - 0x3c)) = 0;
  do {
    puVar12 = puVar11 + 1;
    (*(uint *)(fr0_ - 0x48)) = (uint)*puVar11;
    uVar25 = 0x3f800000;
    if ((*puVar11 & 0x8000) != 0) {
      (*(uint *)(fr0_ - 0x48)) = (*(uint *)(fr0_ - 0x48)) & 0x7fff;
      uVar25 = 0xbf800000;
    }
    (*(int *)(fr0_ - 0x3c)) = (*(int *)(fr0_ - 0x3c)) + (*(uint *)(fr0_ - 0x48));
    (*(uint *)(fr0_ - 0x48)) = (*(uint *)(fr0_ - 0x48)) - 2;
    puVar13 = puVar11 + 2;
    puVar11 = puVar11 + 3;
    pdVar9 = (double *)(unsigned)((uint)*puVar13 * 0x40 + iVar2);
    pdVar8 = (double *)(unsigned)((uint)*puVar12 * 0x40 + iVar2);
    pdVar7 = unaff_r8;
    if (cVar31 == '\0') {
      dVar26 = CONCAT44D((int)(D2U(dVar26) >> 0x20),*(undefined4 *)(unsigned)((int)pdVar9 + 4));
      in_dr6 = CONCAT44D(*(undefined4 *)(unsigned)((int)pdVar8 + 4),SUB84(in_dr6,0));
      dVar27 = CONCAT44D(*(undefined4 *)(unsigned)(pdVar9 + 1),uVar25);
      in_dr4 = (double)(ulonglong)*(uint *)(unsigned)(pdVar8 + 1);
      dVar28 = in_xd12;
    }
    else {
      in_dr6 = *(double *)(unsigned)((int)pdVar8 + 4);
      dVar27 = pdVar9[1];
      dVar28 = *(double *)(unsigned)((int)pdVar9 + 4);
    }
    do {
      uVar1 = *puVar11;
      puVar11 = puVar11 + 1;
      pdVar10 = (double *)(unsigned)((uint)uVar1 * 0x40 + iVar2);
      uVar32 = 0;
      fVar17 = F32LO(in_dr4);
      in_dr4 = CONCAT44D(0x3f800000,fVar17);
      if ((*(uint *)(unsigned)pdVar8 & *(uint *)(unsigned)pdVar9 & *(uint *)(unsigned)pdVar10 & 0x3f) == 0) {
        if (cVar31 == '\0') {
          dVar18 = CONCAT44D(*(undefined4 *)(unsigned)(pdVar10 + 1),SUB84(dVar26,0));
        }
        else {
          dVar18 = pdVar10[1];
          in_xd2 = dVar28;
        }
        fVar21 = F32HI(dVar27);
        if (cVar30 == '\0') {
          dVar18 = CONCAT44D(F32HI(dVar18) - fVar21,
                                    F32LO(dVar18) - F32HI(in_dr6));
        }
        else {
          dVar18 = (dVar18 - in_dr6) - dVar27;
        }
        if (cVar31 == '\0') {
          in_dr0 = CONCAT44D((int)((ulonglong)in_dr0 >> 0x20),
                                    *(undefined4 *)(unsigned)((int)pdVar10 + 4));
        }
        if (cVar30 == '\0') {
          in_dr0 = CONCAT44D((int)((ulonglong)in_dr0 >> 0x20),
                                    F32LO(in_dr0) - F32LO(dVar26));
          fVar16 = F32LO(dVar18) * F32HI(dVar18);
        }
        else {
          in_dr0 = in_dr0 - dVar26;
          fVar16 = SUB84(dVar18 * dVar18,0);
        }
        dVar18 = dVar27;
        if (cVar31 == '\0') {
          dVar18 = CONCAT44D(fVar21,fVar16);
        }
        if (cVar30 == '\0') {
          fVar21 = (F32HI(dVar18) - fVar17) * F32LO(in_dr0);
          in_dr2 = CONCAT44D(fVar21,F32LO(dVar18) - fVar21);
        }
        else {
          in_dr2 = (dVar18 - in_dr4) * in_dr0;
          in_dr2 = in_dr2 - in_dr2;
        }
        in_dr4 = in_xd2;
        if (cVar31 == '\0') {
          in_dr4 = CONCAT44D(SUB84(in_dr2,0),fVar17);
        }
        if (cVar30 == '\0') {
          in_dr4 = CONCAT44D(F32HI(in_dr4) * F32LO(dVar27),
                                    SUB84(in_dr4,0));
        }
        else {
          in_dr4 = in_dr4 * dVar27;
        }
        in_dr2 = (double)((ulonglong)in_dr2 & 0xffffffff00000000);
        if (cVar30 == '\0') {
          bVar29 = 0.0 < F32HI(in_dr4);
        }
        else {
          bVar29 = in_dr2 < in_dr4;
        }
        if ((bVar29) && (uVar4 != 0)) {
          uVar32 = uVar4;
          if (cVar30 == '\0') {
            in_dr4 = CONCAT44D(0xbf800000,SUB84(in_dr4,0));
          }
          else {
            in_dr4 = -CONCAT44D(0x3f800000,SUB84(in_dr4,0));
          }
        }
      }
      uVar22 = (uint)((ulonglong)in_dr2 >> 0x20);
      fVar17 = F32HI(in_dr4);
      if (pdVar7 < unaff_r8) {
        dVar18 = (double)((ulonglong)uVar22 << 0x20);
        if (cVar30 == '\0') {
          bVar29 = fVar17 < 0.0;
        }
        else {
          bVar29 = in_dr4 < dVar18;
        }
        if (bVar29) {
          *(undefined4 *)(unsigned)pdVar9 = 0xe0000000;
          CacheBlockWriteBack(pdVar9);
          uVar22 = uVar32;
          if (*(uint *)(unsigned)((int)pdVar9 + 0x3c) != (ar5 | uVar32)) {
            *(uint *)(unsigned)((int)pdVar9 + 0x3c) = ar5 | uVar32;
            pdVar6 = pdVar9 + 6;
            puVar5 = ((undefined1 *)(unsigned)0x8c4c2620);
            pdVar8 = pdVar9 + 2;
            (vsp = ((unsigned long)(fr0_ - 80)), FUN_8c23bae2(((undefined1 *)(unsigned)0x8c4c2620),pdVar8,pdVar6,uVar32));
            uVar25 = (vsp = ((unsigned long)(fr0_ - 80)), float_to_color_u8(puVar5,pdVar8,pdVar6,uVar32));
            *(undefined4 *)(unsigned)(pdVar9 + 5) = uVar25;
            if (cVar31 == '\0') {
              in_dr6 = (double)(ulonglong)(*(undefined4 *)(unsigned)(unsigned)0x8c4c263c);
              in_dr4 = (double)(ulonglong)(*(undefined4 *)(unsigned)(unsigned)0x8c4c2634);
            }
            else {
              in_dr6 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4c263c),(*(undefined4 *)(unsigned)(unsigned)0x8c4c2638));
              in_dr4 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4c2634),(*(undefined4 *)(unsigned)(unsigned)0x8c4c2630));
            }
            uVar25 = (vsp = ((unsigned long)(fr0_ - 80)), float_to_color_u8(puVar5,pdVar8,pdVar6,uVar32));
            *(undefined4 *)(unsigned)((int)pdVar9 + 0x2c) = uVar25;
          }
          uVar32 = SUB84(in_dr6,0);
          uVar25 = SUB84(in_dr0,0);
          dVar19 = dVar26;
          if (cVar31 == '\0') {
            dVar19 = CONCAT44D((int)(D2U(dVar26) >> 0x20),SUB84(in_dr4,0));
          }
          psVar15 = psVar14 + 2;
          uVar3 = (undefined4)(D2U(dVar18) >> 0x20);
          fVar17 = F32HI(dVar19);
          if (cVar30 == '\0') {
            dVar18 = CONCAT44D(uVar3,(float)(int)*psVar14 * fVar17);
          }
          else {
            dVar18 = CONCAT44D(uVar3,(float)(int)*psVar14) * dVar19;
          }
          if (cVar31 == '\0') {
            *(int *)(unsigned)(pdVar9 + 4) = SUB84(dVar18,0);
          }
          else {
            pdVar9[4] = in_xd2;
          }
          if (cVar30 == '\0') {
            fVar17 = (float)(int)psVar14[1] * fVar17;
          }
          else {
            fVar17 = SUB84(CONCAT44D((int)(D2U(dVar18) >> 0x20),(float)(int)psVar14[1])
                           * dVar19,0);
          }
          if (cVar31 == '\0') {
            *(float *)(unsigned)((int)pdVar9 + 0x24) = fVar17;
          }
          else {
            *(double *)(unsigned)((int)pdVar9 + 0x24) = in_xd2;
          }
          goto LAB_8c2436aa;
        }
        *(undefined4 *)(unsigned)pdVar9 = 0xf0000000;
        CacheBlockWriteBack(pdVar9);
        uVar22 = uVar32;
        if (*(uint *)(unsigned)((int)pdVar9 + 0x3c) != (ar5 | uVar32)) {
          *(uint *)(unsigned)((int)pdVar9 + 0x3c) = ar5 | uVar32;
          pdVar7 = pdVar9 + 6;
          puVar5 = ((undefined1 *)(unsigned)0x8c4c2620);
          pdVar8 = pdVar9 + 2;
          (vsp = ((unsigned long)(fr0_ - 80)), FUN_8c23bae2(((undefined1 *)(unsigned)0x8c4c2620),pdVar8,pdVar7,uVar32));
          uVar25 = (vsp = ((unsigned long)(fr0_ - 80)), float_to_color_u8(puVar5,pdVar8,pdVar7,uVar32));
          *(undefined4 *)(unsigned)(pdVar9 + 5) = uVar25;
          if (cVar31 == '\0') {
            in_dr6 = (double)(ulonglong)(*(undefined4 *)(unsigned)(unsigned)0x8c4c263c);
            in_dr4 = (double)(ulonglong)(*(undefined4 *)(unsigned)(unsigned)0x8c4c2634);
          }
          else {
            in_dr6 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4c263c),(*(undefined4 *)(unsigned)(unsigned)0x8c4c2638));
            in_dr4 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4c2634),(*(undefined4 *)(unsigned)(unsigned)0x8c4c2630));
          }
          uVar25 = (vsp = ((unsigned long)(fr0_ - 80)), float_to_color_u8(puVar5,pdVar8,pdVar7,uVar32));
          *(undefined4 *)(unsigned)((int)pdVar9 + 0x2c) = uVar25;
        }
        dVar19 = dVar26;
        if (cVar31 == '\0') {
          dVar19 = CONCAT44D((int)(D2U(dVar26) >> 0x20),SUB84(in_dr4,0));
        }
        uVar25 = (undefined4)(D2U(dVar18) >> 0x20);
        fVar17 = F32HI(dVar19);
        if (cVar30 == '\0') {
          dVar18 = CONCAT44D(uVar25,(float)(int)*psVar14 * fVar17);
        }
        else {
          dVar18 = CONCAT44D(uVar25,(float)(int)*psVar14) * dVar19;
        }
        if (cVar31 == '\0') {
          *(int *)(unsigned)(pdVar9 + 4) = SUB84(dVar18,0);
        }
        else {
          pdVar9[4] = in_xd2;
        }
        if (cVar30 == '\0') {
          fVar17 = (float)(int)psVar14[1] * fVar17;
        }
        else {
          fVar17 = SUB84(CONCAT44D((int)(D2U(dVar18) >> 0x20),(float)(int)psVar14[1]) *
                         dVar19,0);
        }
        if (cVar31 == '\0') {
          *(float *)(unsigned)((int)pdVar9 + 0x24) = fVar17;
        }
        else {
          *(double *)(unsigned)((int)pdVar9 + 0x24) = in_xd2;
        }
        CacheBlockWriteBack(pdVar9 + 4);
        if (cVar31 == '\0') {
          in_dr0 = CONCAT44D(*(undefined4 *)(unsigned)pdVar9,SUB84(in_dr0,0));
          in_dr2 = CONCAT44D(*(undefined4 *)(unsigned)((int)pdVar9 + 4),fVar17);
          pdVar8 = pdVar9 + 1;
        }
        else {
          in_dr0 = *pdVar9;
          in_dr2 = pdVar9[1];
          pdVar8 = pdVar9 + 2;
        }
        if (cVar31 == '\0') {
          uVar25 = *(undefined4 *)(unsigned)(pdVar8 + 2);
          in_dr4 = CONCAT44D(uVar25,SUB84(dVar19,0));
          in_dr6 = CONCAT44D(*(undefined4 *)(unsigned)((int)pdVar8 + 0x14),SUB84(in_dr6,0));
          *(undefined4 *)(unsigned)((int)unaff_r8 + 0x1c) = *(undefined4 *)(unsigned)((int)pdVar8 + 0x14);
          *(undefined4 *)(unsigned)(unaff_r8 + 3) = uVar25;
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
        pdVar7 = unaff_r8;
        psVar15 = psVar14;
        uVar32 = uVar22;
      }
      else {
        in_dr2 = (double)((ulonglong)uVar22 << 0x20);
        if (cVar30 == '\0') {
          bVar29 = fVar17 < 0.0;
        }
        else {
          bVar29 = in_dr4 < in_dr2;
        }
        psVar15 = psVar14 + 2;
        if (bVar29) {
          *(undefined4 *)(unsigned)pdVar8 = 0xe0000000;
          CacheBlockWriteBack(pdVar8);
          ar7_00 = uVar32;
          if (*(uint *)(unsigned)((int)pdVar8 + 0x3c) != (ar5 | uVar32)) {
            *(uint *)(unsigned)((int)pdVar8 + 0x3c) = ar5 | uVar32;
            ar6_00 = pdVar8 + 6;
            puVar5 = ((undefined1 *)(unsigned)0x8c4c2620);
            pdVar6 = pdVar8 + 2;
            (vsp = ((unsigned long)(fr0_ - 80)), FUN_8c23bae2(((undefined1 *)(unsigned)0x8c4c2620),pdVar6,ar6_00,uVar32));
            uVar25 = (vsp = ((unsigned long)(fr0_ - 80)), float_to_color_u8(puVar5,pdVar6,ar6_00,uVar32));
            *(undefined4 *)(unsigned)(pdVar8 + 5) = uVar25;
            if (cVar31 == '\0') {
              in_dr6 = (double)(ulonglong)(*(undefined4 *)(unsigned)(unsigned)0x8c4c263c);
              in_dr4 = (double)(ulonglong)(*(undefined4 *)(unsigned)(unsigned)0x8c4c2634);
            }
            else {
              in_dr6 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4c263c),(*(undefined4 *)(unsigned)(unsigned)0x8c4c2638));
              in_dr4 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4c2634),(*(undefined4 *)(unsigned)(unsigned)0x8c4c2630));
            }
            uVar25 = (vsp = ((unsigned long)(fr0_ - 80)), float_to_color_u8(puVar5,pdVar6,ar6_00,uVar32));
            *(undefined4 *)(unsigned)((int)pdVar8 + 0x2c) = uVar25;
          }
          dVar18 = dVar26;
          if (cVar31 == '\0') {
            dVar18 = CONCAT44D((int)(D2U(dVar26) >> 0x20),SUB84(in_dr4,0));
          }
          uVar25 = (undefined4)((ulonglong)in_dr2 >> 0x20);
          fVar17 = F32HI(dVar18);
          if (cVar30 == '\0') {
            dVar19 = CONCAT44D(uVar25,(float)(int)*psVar14 * fVar17);
          }
          else {
            dVar19 = CONCAT44D(uVar25,(float)(int)*psVar14) * dVar18;
          }
          if (cVar31 == '\0') {
            *(int *)(unsigned)(pdVar8 + 4) = SUB84(dVar19,0);
          }
          else {
            pdVar8[4] = in_xd2;
          }
          if (cVar30 == '\0') {
            fVar17 = (float)(int)psVar14[1] * fVar17;
          }
          else {
            fVar17 = SUB84(CONCAT44D((int)(D2U(dVar19) >> 0x20),(float)(int)psVar14[1])
                           * dVar18,0);
          }
          if (cVar31 == '\0') {
            *(float *)(unsigned)((int)pdVar8 + 0x24) = fVar17;
          }
          else {
            *(double *)(unsigned)((int)pdVar8 + 0x24) = in_xd2;
          }
          CacheBlockWriteBack(pdVar8 + 4);
          if (cVar31 == '\0') {
            dVar19 = CONCAT44D(*(undefined4 *)(unsigned)pdVar8,SUB84(in_dr0,0));
            dVar20 = CONCAT44D(*(undefined4 *)(unsigned)((int)pdVar8 + 4),fVar17);
            pdVar8 = pdVar8 + 1;
          }
          else {
            dVar19 = *pdVar8;
            dVar20 = pdVar8[1];
            pdVar8 = pdVar8 + 2;
          }
          if (cVar31 == '\0') {
            uVar25 = *(undefined4 *)(unsigned)(pdVar8 + 2);
            dVar24 = CONCAT44D(uVar25,SUB84(dVar18,0));
            dVar18 = CONCAT44D(*(undefined4 *)(unsigned)((int)pdVar8 + 0x14),SUB84(in_dr6,0));
            *(undefined4 *)(unsigned)((int)unaff_r8 + 0x1c) = *(undefined4 *)(unsigned)((int)pdVar8 + 0x14);
            *(undefined4 *)(unsigned)(unaff_r8 + 3) = uVar25;
            *(int *)(unsigned)((int)unaff_r8 + 0x14) = (int)(D2U(dVar20) >> 0x20);
            unaff_r8 = unaff_r8 + 2;
            *(int *)(unsigned)unaff_r8 = (int)(D2U(dVar19) >> 0x20);
          }
          else {
            dVar24 = pdVar8[2];
            dVar18 = pdVar8[3];
            unaff_r8[3] = dVar18;
            unaff_r8[2] = dVar24;
            unaff_r8[1] = dVar20;
            *unaff_r8 = dVar19;
          }
          uVar23 = SUB84(dVar24,0);
          uVar32 = SUB84(dVar18,0);
          unaff_r8 = unaff_r8 + 4;
          *(undefined4 *)(unsigned)pdVar9 = 0xe0000000;
          CacheBlockWriteBack(pdVar9);
          uVar22 = ar7_00;
          if (*(uint *)(unsigned)((int)pdVar9 + 0x3c) != (ar5 | ar7_00)) {
            *(uint *)(unsigned)((int)pdVar9 + 0x3c) = ar5 | ar7_00;
            pdVar6 = pdVar9 + 6;
            puVar5 = ((undefined1 *)(unsigned)0x8c4c2620);
            pdVar8 = pdVar9 + 2;
            (vsp = ((unsigned long)(fr0_ - 80)), FUN_8c23bae2(((undefined1 *)(unsigned)0x8c4c2620),pdVar8,pdVar6,ar7_00));
            uVar25 = (vsp = ((unsigned long)(fr0_ - 80)), float_to_color_u8(puVar5,pdVar8,pdVar6,ar7_00));
            *(undefined4 *)(unsigned)(pdVar9 + 5) = uVar25;
            uVar32 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c2638);
            uVar23 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c2630);
            if (cVar31 == '\0') {
              uVar32 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c263c);
              uVar23 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c2634);
            }
            uVar25 = (vsp = ((unsigned long)(fr0_ - 80)), float_to_color_u8(puVar5,pdVar8,pdVar6,ar7_00));
            *(undefined4 *)(unsigned)((int)pdVar9 + 0x2c) = uVar25;
          }
          uVar25 = SUB84(dVar19,0);
          dVar19 = dVar26;
          if (cVar31 == '\0') {
            dVar19 = CONCAT44D((int)(D2U(dVar26) >> 0x20),uVar23);
          }
          psVar15 = psVar14 + 4;
          uVar3 = (undefined4)(D2U(dVar20) >> 0x20);
          fVar17 = F32HI(dVar19);
          if (cVar30 == '\0') {
            dVar18 = CONCAT44D(uVar3,(float)(int)psVar14[2] * fVar17);
          }
          else {
            dVar18 = CONCAT44D(uVar3,(float)(int)psVar14[2]) * dVar19;
          }
          if (cVar31 == '\0') {
            *(int *)(unsigned)(pdVar9 + 4) = SUB84(dVar18,0);
          }
          else {
            pdVar9[4] = in_xd2;
          }
          if (cVar30 == '\0') {
            fVar17 = (float)(int)psVar14[3] * fVar17;
          }
          else {
            fVar17 = SUB84(CONCAT44D((int)(D2U(dVar18) >> 0x20),(float)(int)psVar14[3])
                           * dVar19,0);
          }
          if (cVar31 == '\0') {
            *(float *)(unsigned)((int)pdVar9 + 0x24) = fVar17;
          }
          else {
            *(double *)(unsigned)((int)pdVar9 + 0x24) = in_xd2;
          }
LAB_8c2436aa:
          CacheBlockWriteBack(pdVar9 + 4);
          if (cVar31 == '\0') {
            in_dr0 = CONCAT44D(*(undefined4 *)(unsigned)pdVar9,uVar25);
            in_dr2 = CONCAT44D(*(undefined4 *)(unsigned)((int)pdVar9 + 4),fVar17);
            pdVar8 = pdVar9 + 1;
          }
          else {
            in_dr0 = *pdVar9;
            in_dr2 = pdVar9[1];
            pdVar8 = pdVar9 + 2;
          }
          if (cVar31 == '\0') {
            uVar25 = *(undefined4 *)(unsigned)(pdVar8 + 2);
            in_dr4 = CONCAT44D(uVar25,SUB84(dVar19,0));
            in_dr6 = CONCAT44D(*(undefined4 *)(unsigned)((int)pdVar8 + 0x14),uVar32);
            *(undefined4 *)(unsigned)((int)unaff_r8 + 0x1c) = *(undefined4 *)(unsigned)((int)pdVar8 + 0x14);
            *(undefined4 *)(unsigned)(unaff_r8 + 3) = uVar25;
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
          uVar32 = uVar22;
        }
      }
      uVar25 = (undefined4)((ulonglong)in_dr2 >> 0x20);
      if (cVar31 == '\0') {
        uVar3 = SUB84(dVar26,0);
        dVar26 = CONCAT44D((int)(D2U(dVar26) >> 0x20),*(undefined4 *)(unsigned)((int)pdVar10 + 4)
                                 );
        in_xd12 = dVar28;
        in_dr6 = CONCAT44D(uVar3,SUB84(in_dr6,0));
      }
      else {
        in_xd12 = *(double *)(unsigned)((int)pdVar10 + 4);
        in_dr6 = dVar28;
      }
      uVar3 = 8;
      if (cVar31 == '\0') {
        in_dr4 = (double)(D2U(dVar27) >> 0x20);
        uVar22 = (uint)(D2U(dVar27) >> 0x20);
        dVar28 = CONCAT44D(*(undefined4 *)(unsigned)(pdVar10 + 1),SUB84(dVar27,0));
      }
      else {
        uVar22 = SUB84(in_dr4,0);
        dVar28 = pdVar10[1];
      }
      (*(uint *)(fr0_ - 0x48)) = (*(uint *)(fr0_ - 0x48)) + -1;
      dVar27 = CONCAT44D((int)(D2U(dVar28) >> 0x20),-SUB84(dVar28,0));
      pdVar8 = pdVar9;
      pdVar9 = pdVar10;
      psVar14 = psVar15;
      dVar28 = in_xd12;
    } while ((*(uint *)(fr0_ - 0x48)) != 0);
    psVar14 = psVar15 + 4;
    if (pdVar7 < unaff_r8) {
      *(undefined4 *)(unsigned)pdVar10 = 0xf0000000;
      CacheBlockWriteBack(pdVar10);
      if (*(uint *)(unsigned)((int)pdVar10 + 0x3c) != (ar5 | uVar32)) {
        *(uint *)(unsigned)((int)pdVar10 + 0x3c) = ar5 | uVar32;
        pdVar7 = pdVar10 + 6;
        puVar5 = ((undefined1 *)(unsigned)0x8c4c2620);
        pdVar8 = pdVar10 + 2;
        (vsp = ((unsigned long)(fr0_ - 80)), FUN_8c23bae2(((undefined1 *)(unsigned)0x8c4c2620),pdVar8,pdVar7,uVar32));
        uVar3 = (vsp = ((unsigned long)(fr0_ - 80)), float_to_color_u8(puVar5,pdVar8,pdVar7,uVar32));
        *(undefined4 *)(unsigned)(pdVar10 + 5) = uVar3;
        if (cVar31 == '\0') {
          in_dr6 = (double)(ulonglong)(*(undefined4 *)(unsigned)(unsigned)0x8c4c263c);
          uVar22 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c2634);
        }
        else {
          in_dr6 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4c263c),(*(undefined4 *)(unsigned)(unsigned)0x8c4c2638));
          uVar22 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c2630);
        }
        uVar3 = (vsp = ((unsigned long)(fr0_ - 80)), float_to_color_u8(puVar5,pdVar8,pdVar7,uVar32));
        *(undefined4 *)(unsigned)((int)pdVar10 + 0x2c) = uVar3;
      }
      dVar28 = dVar26;
      if (cVar31 == '\0') {
        dVar28 = CONCAT44D((int)(D2U(dVar26) >> 0x20),uVar22);
      }
      psVar14 = psVar15 + 2;
      fVar17 = F32HI(dVar28);
      if (cVar30 == '\0') {
        dVar27 = CONCAT44D(uVar25,(float)(int)*psVar15 * fVar17);
      }
      else {
        dVar27 = CONCAT44D(uVar25,(float)(int)*psVar15) * dVar28;
      }
      if (cVar31 == '\0') {
        *(int *)(unsigned)(pdVar10 + 4) = SUB84(dVar27,0);
      }
      else {
        pdVar10[4] = in_xd2;
      }
      if (cVar30 == '\0') {
        fVar17 = (float)(int)psVar15[1] * fVar17;
      }
      else {
        fVar17 = SUB84(CONCAT44D((int)(D2U(dVar27) >> 0x20),(float)(int)psVar15[1]) *
                       dVar28,0);
      }
      if (cVar31 == '\0') {
        *(float *)(unsigned)((int)pdVar10 + 0x24) = fVar17;
      }
      else {
        *(double *)(unsigned)((int)pdVar10 + 0x24) = in_xd2;
      }
      CacheBlockWriteBack(pdVar10 + 4);
      if (cVar31 == '\0') {
        in_dr0 = CONCAT44D(*(undefined4 *)(unsigned)pdVar10,SUB84(in_dr0,0));
        in_dr2 = CONCAT44D(*(undefined4 *)(unsigned)((int)pdVar10 + 4),fVar17);
        pdVar10 = pdVar10 + 1;
      }
      else {
        in_dr0 = *pdVar10;
        in_dr2 = pdVar10[1];
        pdVar10 = pdVar10 + 2;
      }
      if (cVar31 == '\0') {
        uVar25 = *(undefined4 *)(unsigned)(pdVar10 + 2);
        in_dr4 = CONCAT44D(uVar25,SUB84(dVar28,0));
        in_dr6 = CONCAT44D(*(undefined4 *)(unsigned)((int)pdVar10 + 0x14),SUB84(in_dr6,0));
        *(undefined4 *)(unsigned)((int)unaff_r8 + 0x1c) = *(undefined4 *)(unsigned)((int)pdVar10 + 0x14);
        *(undefined4 *)(unsigned)(unaff_r8 + 3) = uVar25;
        *(int *)(unsigned)((int)unaff_r8 + 0x14) = (int)((ulonglong)in_dr2 >> 0x20);
        unaff_r8 = unaff_r8 + 2;
        *(int *)(unsigned)unaff_r8 = (int)((ulonglong)in_dr0 >> 0x20);
      }
      else {
        in_dr4 = pdVar10[2];
        in_dr6 = pdVar10[3];
        unaff_r8[3] = in_dr6;
        unaff_r8[2] = in_dr4;
        unaff_r8[1] = in_dr2;
        *unaff_r8 = in_dr0;
      }
      unaff_r8 = unaff_r8 + 4;
    }
    (*(uint *)(fr0_ - 0x30)) = (*(uint *)(fr0_ - 0x30)) - 1;
    if ((*(uint *)(fr0_ - 0x30)) == 0) {
      (*(undefined4 *)(unsigned)(unsigned)0x8c4aa51c) = (*(undefined4 *)(unsigned)(unsigned)0x8c4aa51c) + (*(int *)(fr0_ - 0x3c));
      (*(undefined4 *)(unsigned)(unsigned)0x8c4aa520) = (*(undefined4 *)(unsigned)(unsigned)0x8c4aa520) + (*(int *)(fr0_ - 0x3c));
      return uVar3;
    }
  } while( true );
}

__asm__(".globl _FUN_8c2432b6\n.set _FUN_8c2432b6, _FUN_8c2432b6_def\n");
