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
undefined4 FUN_8c245cc8_def(int ar4,uint ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c245cc8";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 84; for (int i_ = 0; i_ < 84; i_++) z_[i_] = 0; }
  ushort uVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined1 *puVar5;
  double *pdVar6;
  double *pdVar7;
  double *pdVar8;
  uint uVar9;
  uint ar7_00;
  double *unaff_r8 = 0;
  double *pdVar10;
  double *ar5_00;
  double *pdVar11;
  ushort *puVar12;
  ushort *puVar13;
  ushort *puVar14;
  float fVar15;
  double in_dr0 = 0;
  double dVar16;
  double in_dr2 = 0;
  float fVar20;
  double dVar18;
  ulonglong uVar19;
  double in_dr4 = 0;
  double dVar21;
  float fVar22;
  undefined4 uVar23;
  uint uVar24;
  double in_dr6 = 0;
  double dVar25;
  float fVar26;
  double dVar27;
  double in_dr10 = 0;
  float fVar28;
  undefined4 in_fr13 = 0;
  double dVar29;
  double dVar30;
  undefined8 uVar31;
  double in_xd2 = 0;
  double in_xd12 = 0;
  bool bVar32;
  char cVar33;
  char cVar34;
  float fVar17;
  
  cVar34 = '\0';
  cVar33 = '\0';
  dVar29 = CONCAT44D(0x3f000000,in_fr13);
  ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x50))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 84)); noop_23d694(ar4,ar5,ar6,ar7); });
  iVar2 = (*(undefined4 *)(unsigned)(unsigned)0x8c4aa510);
  if (((*(undefined4 *)(unsigned)(unsigned)0x8c4ab308) & 0x800000) == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = 0x8000;
  }
  puVar12 = ((ushort *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 4));
  (*(uint *)(fr0_ - 0x30)) = (uint)*(ushort *)(unsigned)(ar4 + 2);
  (*(int *)(fr0_ - 0x38)) = 0;
  do {
    puVar13 = puVar12 + 1;
    (*(uint *)(fr0_ - 0x44)) = (uint)*puVar12;
    uVar3 = 0x3f800000;
    if ((*puVar12 & 0x8000) != 0) {
      (*(uint *)(fr0_ - 0x44)) = (*(uint *)(fr0_ - 0x44)) & 0x7fff;
      uVar3 = 0xbf800000;
    }
    (*(int *)(fr0_ - 0x38)) = (*(int *)(fr0_ - 0x38)) + (*(uint *)(fr0_ - 0x44));
    (*(uint *)(fr0_ - 0x44)) = (*(uint *)(fr0_ - 0x44)) - 2;
    puVar14 = puVar12 + 2;
    puVar12 = puVar12 + 3;
    ar5_00 = (double *)(unsigned)((uint)*puVar14 * 0x40 + iVar2);
    pdVar10 = (double *)(unsigned)((uint)*puVar13 * 0x40 + iVar2);
    pdVar7 = unaff_r8;
    if (cVar34 == '\0') {
      dVar30 = CONCAT44D(*(undefined4 *)(unsigned)((int)ar5_00 + 4),uVar3);
      in_dr6 = CONCAT44D(*(undefined4 *)(unsigned)((int)pdVar10 + 4),SUB84(in_dr6,0));
      dVar29 = CONCAT44D((int)(D2U(dVar29) >> 0x20),*(undefined4 *)(unsigned)(ar5_00 + 1));
      in_dr4 = (double)(ulonglong)*(uint *)(unsigned)(pdVar10 + 1);
    }
    else {
      dVar30 = *(double *)(unsigned)((int)ar5_00 + 4);
      in_dr6 = *(double *)(unsigned)((int)pdVar10 + 4);
      in_xd12 = ar5_00[1];
    }
    do {
      uVar1 = *puVar12;
      puVar12 = puVar12 + 1;
      pdVar11 = (double *)(unsigned)((uint)uVar1 * 0x40 + iVar2);
      (*(uint *)(fr0_ - 0x34)) = 0;
      (*(uint *)(fr0_ - 0x4c)) = 0;
      fVar20 = F32LO(in_dr4);
      in_dr4 = CONCAT44D(0x3f800000,fVar20);
      if ((*(uint *)(unsigned)pdVar10 & *(uint *)(unsigned)ar5_00 & *(uint *)(unsigned)pdVar11 & 0x3f) == 0) {
        if (((*(uint *)(unsigned)pdVar10 | *(uint *)(unsigned)ar5_00 | *(uint *)(unsigned)pdVar11) & 1) == 0) {
          fVar15 = F32HI(dVar30);
          if (cVar34 == '\0') {
            dVar25 = CONCAT44D(*(undefined4 *)(unsigned)(pdVar11 + 1),fVar15);
          }
          else {
            dVar25 = pdVar11[1];
            in_xd2 = dVar30;
          }
          if (cVar33 == '\0') {
            dVar25 = CONCAT44D(F32HI(dVar25) - F32LO(dVar29),
                                      F32LO(dVar25) - F32HI(in_dr6));
          }
          else {
            dVar25 = (dVar25 - in_dr6) - dVar29;
          }
          if (cVar34 == '\0') {
            in_dr0 = CONCAT44D((int)((ulonglong)in_dr0 >> 0x20),
                                      *(undefined4 *)(unsigned)((int)pdVar11 + 4));
          }
          if (cVar33 == '\0') {
            in_dr0 = CONCAT44D((int)((ulonglong)in_dr0 >> 0x20),F32LO(in_dr0) - fVar15);
            fVar15 = F32LO(dVar25) * F32HI(dVar25);
          }
          else {
            in_dr0 = in_dr0 - dVar30;
            fVar15 = SUB84(dVar25 * dVar25,0);
          }
          dVar25 = in_xd12;
          if (cVar34 == '\0') {
            dVar25 = CONCAT44D(SUB84(dVar29,0),fVar15);
          }
          if (cVar33 == '\0') {
            fVar15 = (F32HI(dVar25) - fVar20) * F32LO(in_dr0);
            in_dr2 = CONCAT44D(fVar15,F32LO(dVar25) - fVar15);
          }
          else {
            in_dr2 = (dVar25 - in_dr4) * in_dr0;
            in_dr2 = in_dr2 - in_dr2;
          }
          in_dr4 = in_xd2;
          if (cVar34 == '\0') {
            in_dr4 = CONCAT44D(SUB84(in_dr2,0),fVar20);
          }
          if (cVar33 == '\0') {
            in_dr4 = CONCAT44D(F32HI(in_dr4) * F32LO(dVar30),
                                      SUB84(in_dr4,0));
          }
          else {
            in_dr4 = in_dr4 * dVar30;
          }
          in_dr2 = (double)((ulonglong)in_dr2 & 0xffffffff00000000);
          if (cVar33 == '\0') {
            bVar32 = 0.0 < F32HI(in_dr4);
          }
          else {
            bVar32 = in_dr2 < in_dr4;
          }
          if ((bVar32) && (uVar4 != 0)) {
            if (cVar33 == '\0') {
              in_dr4 = CONCAT44D(0xbf800000,SUB84(in_dr4,0));
              (*(uint *)(fr0_ - 0x4c)) = uVar4;
            }
            else {
              in_dr4 = -CONCAT44D(0x3f800000,SUB84(in_dr4,0));
              (*(uint *)(fr0_ - 0x4c)) = uVar4;
            }
          }
        }
        else {
          if (cVar34 == '\0') {
            fVar17 = *(float *)(unsigned)(ar5_00 + 2);
            fVar15 = *(float *)(unsigned)((int)ar5_00 + 0x14);
            dVar16 = CONCAT44D(fVar17,fVar15);
            fVar20 = *(float *)(unsigned)(ar5_00 + 3);
            dVar21 = CONCAT44D(*(undefined4 *)(unsigned)(pdVar10 + 2),
                                      *(undefined4 *)(unsigned)((int)pdVar10 + 0x14));
            dVar25 = CONCAT44D(*(undefined4 *)(unsigned)(pdVar10 + 3),SUB84(in_dr6,0));
            in_dr10 = CONCAT44D(fVar20,SUB84(in_dr10,0));
            dVar18 = CONCAT44D(fVar20,SUB84(in_dr2,0));
          }
          else {
            dVar16 = ar5_00[2];
            in_dr10 = ar5_00[4];
            dVar21 = pdVar10[2];
            dVar25 = pdVar10[4];
            fVar17 = F32HI(dVar16);
            fVar15 = F32LO(dVar16);
            fVar20 = F32HI(in_dr10);
            dVar18 = in_dr10;
          }
          fVar26 = F32HI(dVar25);
          fVar22 = F32HI(dVar21);
          if (cVar33 == '\0') {
            fVar28 = F32HI(in_dr10) * fVar22;
            in_dr10 = CONCAT44D(fVar28,SUB84(in_dr10,0));
            dVar18 = (double)((ulonglong)(uint)(fVar20 * F32LO(dVar21) - F32LO(dVar16) * fVar26)
                             << 0x20);
            dVar27 = CONCAT44D(fVar17 * fVar26 - fVar28,
                                      fVar15 * fVar22 -
                                      F32HI(dVar16) * F32LO(dVar21));
          }
          else {
            in_dr10 = in_dr10 * dVar21;
            dVar27 = dVar16 * dVar25 * dVar21;
            dVar18 = dVar18 * dVar21 - dVar27;
            dVar27 = (dVar16 * dVar25 * dVar21 - in_dr10) - dVar27;
          }
          if (cVar34 == '\0') {
            in_dr6 = CONCAT44D(*(undefined4 *)(unsigned)(pdVar11 + 2),SUB84(dVar25,0));
            dVar25 = CONCAT44D(*(undefined4 *)(unsigned)((int)pdVar11 + 0x14),
                                      *(undefined4 *)(unsigned)(pdVar11 + 3));
          }
          else {
            in_dr6 = pdVar11[2];
            dVar25 = pdVar11[3];
          }
          uVar19 = D2U(dVar18) & 0xffffffff00000000;
                    
          if (cVar33 == '\0') {
            fVar20 = F32LO(dVar27) * F32LO(dVar25) +
                     F32HI(dVar27) * F32HI(dVar25) +
                     F32LO(in_dr6) * 0.0 +
                     (float)(uVar19 >> 0x20) * F32HI(in_dr6);
          }
          in_dr4 = in_xd2;
          in_dr0 = in_xd2;
          if (cVar34 == '\0') {
            in_dr4 = CONCAT44D((int)uVar19,SUB84(dVar25,0));
            in_dr0 = CONCAT44D((int)uVar19,SUB84(dVar27,0));
          }
          if (cVar33 == '\0') {
            in_dr4 = CONCAT44D(F32HI(in_dr4) * F32LO(dVar30),
                                      SUB84(in_dr4,0));
          }
          else {
            in_dr4 = in_dr4 * dVar30;
          }
          in_dr2 = (double)(uVar19 & 0xffffffff00000000);
          if (cVar33 == '\0') {
            bVar32 = 0.0 < F32HI(in_dr4);
          }
          else {
            bVar32 = in_dr2 < in_dr4;
          }
          if (bVar32) {
            if (uVar4 != 0) {
              (*(uint *)(fr0_ - 0x4c)) = uVar4;
              (*(uint *)(fr0_ - 0x34)) = uVar4;
            }
          }
          else {
            (*(uint *)(fr0_ - 0x34)) = 1;
            in_dr4 = CONCAT44D(0x3f800000,SUB84(in_dr4,0));
          }
        }
      }
      uVar24 = SUB84(in_dr6,0);
      uVar9 = (uint)((ulonglong)in_dr2 >> 0x20);
      fVar20 = F32HI(in_dr4);
      if (pdVar7 < unaff_r8) {
        if (cVar33 == '\0') {
          bVar32 = fVar20 < 0.0;
        }
        else {
          bVar32 = in_dr4 < (double)((ulonglong)uVar9 << 0x20);
        }
        if (bVar32) {
          *(undefined4 *)(unsigned)ar5_00 = 0xe0000000;
          CacheBlockWriteBack(ar5_00);
          if (*(uint *)(unsigned)((int)ar5_00 + 0x3c) != (ar5 | (*(uint *)(fr0_ - 0x4c)))) {
            pdVar6 = ar5_00 + 2;
            *(uint *)(unsigned)((int)ar5_00 + 0x3c) = ar5 | (*(uint *)(fr0_ - 0x4c));
            pdVar8 = ar5_00 + 6;
            puVar5 = ((undefined1 *)(unsigned)0x8c4c2620);
            uVar9 = (*(uint *)(fr0_ - 0x4c));
            (vsp = ((unsigned long)(fr0_ - 84)), FUN_8c23bae2(((undefined1 *)(unsigned)0x8c4c2620),pdVar6,pdVar8,(*(uint *)(fr0_ - 0x4c))));
            uVar3 = (vsp = ((unsigned long)(fr0_ - 84)), float_to_color_u8(puVar5,pdVar6,pdVar8,uVar9));
            *(undefined4 *)(unsigned)(ar5_00 + 5) = uVar3;
            if (cVar34 == '\0') {
              in_dr4 = (double)(ulonglong)(*(undefined4 *)(unsigned)(unsigned)0x8c4c2634);
              uVar24 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c263c);
            }
            else {
              in_dr4 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4c2634),(*(undefined4 *)(unsigned)(unsigned)0x8c4c2630));
              uVar24 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c2638);
            }
            uVar3 = (vsp = ((unsigned long)(fr0_ - 84)), float_to_color_u8(puVar5,pdVar6,pdVar8,uVar9));
            *(undefined4 *)(unsigned)((int)ar5_00 + 0x2c) = uVar3;
          }
          uVar3 = (undefined4)(D2U(dVar29) >> 0x20);
          if (cVar34 == '\0') {
            pdVar6 = (double *)(unsigned)((int)ar5_00 + 0x34);
            dVar25 = CONCAT44D(*(undefined4 *)(unsigned)(ar5_00 + 6),uVar3);
            dVar21 = CONCAT44D(uVar3,SUB84(in_dr0,0));
          }
          else {
            dVar25 = ar5_00[6];
            pdVar6 = ar5_00 + 7;
            dVar21 = dVar29;
            in_xd2 = dVar29;
          }
          if (cVar33 == '\0') {
            fVar20 = F32HI(dVar25);
            dVar25 = CONCAT44D(fVar20,F32HI(dVar21) * fVar20 +
                                             SUB84(dVar25,0));
          }
          if (cVar34 == '\0') {
            *(int *)(unsigned)(ar5_00 + 4) = SUB84(dVar25,0);
            dVar18 = CONCAT44D(*(undefined4 *)(unsigned)pdVar6,uVar3);
            dVar25 = CONCAT44D(uVar3,SUB84(dVar21,0));
            dVar21 = CONCAT44D(uVar3,SUB84(in_dr4,0));
          }
          else {
            ar5_00[4] = in_xd2;
            dVar18 = *pdVar6;
            in_xd2 = dVar29;
            dVar25 = dVar29;
            dVar21 = dVar29;
          }
          uVar3 = SUB84(dVar21,0);
          pdVar6 = (double *)(unsigned)((int)ar5_00 + 0x24);
          if (cVar33 == '\0') {
            fVar20 = F32HI(dVar18);
            dVar18 = CONCAT44D(fVar20,F32HI(dVar25) * fVar20 +
                                             SUB84(dVar18,0));
          }
          uVar23 = SUB84(dVar18,0);
          if (cVar34 == '\0') {
            *(undefined4 *)(unsigned)pdVar6 = uVar23;
          }
          else {
            *pdVar6 = in_xd2;
          }
          CacheBlockWriteBack(pdVar6);
          goto LAB_8c24611c;
        }
        *(undefined4 *)(unsigned)ar5_00 = 0xf0000000;
        CacheBlockWriteBack(ar5_00);
        if (*(uint *)(unsigned)((int)ar5_00 + 0x3c) != (ar5 | (*(uint *)(fr0_ - 0x4c)))) {
          pdVar7 = ar5_00 + 2;
          *(uint *)(unsigned)((int)ar5_00 + 0x3c) = ar5 | (*(uint *)(fr0_ - 0x4c));
          pdVar6 = ar5_00 + 6;
          puVar5 = ((undefined1 *)(unsigned)0x8c4c2620);
          uVar9 = (*(uint *)(fr0_ - 0x4c));
          (vsp = ((unsigned long)(fr0_ - 84)), FUN_8c23bae2(((undefined1 *)(unsigned)0x8c4c2620),pdVar7,pdVar6,(*(uint *)(fr0_ - 0x4c))));
          uVar3 = (vsp = ((unsigned long)(fr0_ - 84)), float_to_color_u8(puVar5,pdVar7,pdVar6,uVar9));
          *(undefined4 *)(unsigned)(ar5_00 + 5) = uVar3;
          if (cVar34 == '\0') {
            in_dr4 = (double)(ulonglong)(*(undefined4 *)(unsigned)(unsigned)0x8c4c2634);
            uVar24 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c263c);
          }
          else {
            in_dr4 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4c2634),(*(undefined4 *)(unsigned)(unsigned)0x8c4c2630));
            uVar24 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c2638);
          }
          uVar3 = (vsp = ((unsigned long)(fr0_ - 84)), float_to_color_u8(puVar5,pdVar7,pdVar6,uVar9));
          *(undefined4 *)(unsigned)((int)ar5_00 + 0x2c) = uVar3;
        }
        uVar3 = (undefined4)(D2U(dVar29) >> 0x20);
        if (cVar34 == '\0') {
          pdVar7 = (double *)(unsigned)((int)ar5_00 + 0x34);
          dVar25 = CONCAT44D(*(undefined4 *)(unsigned)(ar5_00 + 6),uVar3);
          dVar21 = CONCAT44D(uVar3,SUB84(in_dr0,0));
        }
        else {
          dVar25 = ar5_00[6];
          pdVar7 = ar5_00 + 7;
          dVar21 = dVar29;
          in_xd2 = dVar29;
        }
        if (cVar33 == '\0') {
          fVar20 = F32HI(dVar25);
          dVar25 = CONCAT44D(fVar20,F32HI(dVar21) * fVar20 +
                                           SUB84(dVar25,0));
        }
        if (cVar34 == '\0') {
          *(int *)(unsigned)(ar5_00 + 4) = SUB84(dVar25,0);
          dVar18 = CONCAT44D(*(undefined4 *)(unsigned)pdVar7,uVar3);
          dVar25 = CONCAT44D(uVar3,SUB84(dVar21,0));
          dVar21 = CONCAT44D(uVar3,SUB84(in_dr4,0));
        }
        else {
          ar5_00[4] = in_xd2;
          dVar18 = *pdVar7;
          in_xd2 = dVar29;
          dVar25 = dVar29;
          dVar21 = dVar29;
        }
        pdVar7 = (double *)(unsigned)((int)ar5_00 + 0x24);
        if (cVar33 == '\0') {
          fVar20 = F32HI(dVar18);
          dVar18 = CONCAT44D(fVar20,F32HI(dVar25) * fVar20 +
                                           SUB84(dVar18,0));
        }
        if (cVar34 == '\0') {
          *(int *)(unsigned)pdVar7 = SUB84(dVar18,0);
        }
        else {
          *pdVar7 = in_xd2;
        }
        CacheBlockWriteBack(pdVar7);
        if (cVar34 == '\0') {
          in_dr0 = CONCAT44D(*(undefined4 *)(unsigned)ar5_00,SUB84(dVar25,0));
          in_dr2 = CONCAT44D(*(undefined4 *)(unsigned)((int)ar5_00 + 4),SUB84(dVar18,0));
          pdVar7 = ar5_00 + 1;
        }
        else {
          in_dr0 = *ar5_00;
          in_dr2 = ar5_00[1];
          pdVar7 = ar5_00 + 2;
        }
        if (cVar34 == '\0') {
          uVar3 = *(undefined4 *)(unsigned)(pdVar7 + 2);
          in_dr4 = CONCAT44D(uVar3,SUB84(dVar21,0));
          dVar25 = CONCAT44D(*(undefined4 *)(unsigned)((int)pdVar7 + 0x14),uVar24);
          *(undefined4 *)(unsigned)((int)unaff_r8 + 0x1c) = *(undefined4 *)(unsigned)((int)pdVar7 + 0x14);
          *(undefined4 *)(unsigned)(unaff_r8 + 3) = uVar3;
          *(int *)(unsigned)((int)unaff_r8 + 0x14) = (int)((ulonglong)in_dr2 >> 0x20);
          unaff_r8 = unaff_r8 + 2;
          *(int *)(unsigned)unaff_r8 = (int)((ulonglong)in_dr0 >> 0x20);
        }
        else {
          in_dr4 = pdVar7[2];
          dVar25 = pdVar7[3];
          unaff_r8[3] = dVar25;
          unaff_r8[2] = in_dr4;
          unaff_r8[1] = in_dr2;
          *unaff_r8 = in_dr0;
        }
        uVar24 = SUB84(dVar25,0);
        unaff_r8 = unaff_r8 + 4;
        pdVar7 = unaff_r8;
      }
      else {
        in_dr2 = (double)((ulonglong)uVar9 << 0x20);
        if (cVar33 == '\0') {
          bVar32 = fVar20 < 0.0;
        }
        else {
          bVar32 = in_dr4 < in_dr2;
        }
        if (bVar32) {
          *(undefined4 *)(unsigned)pdVar10 = 0xe0000000;
          CacheBlockWriteBack(pdVar10);
          if (*(uint *)(unsigned)((int)pdVar10 + 0x3c) != (ar5 | (*(uint *)(fr0_ - 0x4c)))) {
            pdVar6 = pdVar10 + 2;
            *(uint *)(unsigned)((int)pdVar10 + 0x3c) = ar5 | (*(uint *)(fr0_ - 0x4c));
            pdVar8 = pdVar10 + 6;
            puVar5 = ((undefined1 *)(unsigned)0x8c4c2620);
            uVar9 = (*(uint *)(fr0_ - 0x4c));
            (vsp = ((unsigned long)(fr0_ - 84)), FUN_8c23bae2(((undefined1 *)(unsigned)0x8c4c2620),pdVar6,pdVar8,(*(uint *)(fr0_ - 0x4c))));
            uVar3 = (vsp = ((unsigned long)(fr0_ - 84)), float_to_color_u8(puVar5,pdVar6,pdVar8,uVar9));
            *(undefined4 *)(unsigned)(pdVar10 + 5) = uVar3;
            if (cVar34 == '\0') {
              in_dr4 = (double)(ulonglong)(*(undefined4 *)(unsigned)(unsigned)0x8c4c2634);
              uVar24 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c263c);
            }
            else {
              in_dr4 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4c2634),(*(undefined4 *)(unsigned)(unsigned)0x8c4c2630));
              uVar24 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c2638);
            }
            uVar3 = (vsp = ((unsigned long)(fr0_ - 84)), float_to_color_u8(puVar5,pdVar6,pdVar8,uVar9));
            *(undefined4 *)(unsigned)((int)pdVar10 + 0x2c) = uVar3;
          }
          uVar3 = (undefined4)(D2U(dVar29) >> 0x20);
          if (cVar34 == '\0') {
            pdVar6 = (double *)(unsigned)((int)pdVar10 + 0x34);
            dVar25 = CONCAT44D(*(undefined4 *)(unsigned)(pdVar10 + 6),uVar3);
            dVar21 = CONCAT44D(uVar3,SUB84(in_dr0,0));
          }
          else {
            dVar25 = pdVar10[6];
            pdVar6 = pdVar10 + 7;
            dVar21 = dVar29;
            in_xd2 = dVar29;
          }
          if (cVar33 == '\0') {
            fVar20 = F32HI(dVar25);
            dVar25 = CONCAT44D(fVar20,F32HI(dVar21) * fVar20 +
                                             SUB84(dVar25,0));
          }
          if (cVar34 == '\0') {
            *(int *)(unsigned)(pdVar10 + 4) = SUB84(dVar25,0);
            dVar18 = CONCAT44D(*(undefined4 *)(unsigned)pdVar6,uVar3);
            dVar25 = CONCAT44D(uVar3,SUB84(dVar21,0));
            dVar21 = CONCAT44D(uVar3,SUB84(in_dr4,0));
          }
          else {
            pdVar10[4] = in_xd2;
            dVar18 = *pdVar6;
            in_xd2 = dVar29;
            dVar25 = dVar29;
            dVar21 = dVar29;
          }
          pdVar6 = (double *)(unsigned)((int)pdVar10 + 0x24);
          if (cVar33 == '\0') {
            fVar20 = F32HI(dVar18);
            dVar18 = CONCAT44D(fVar20,F32HI(dVar25) * fVar20 +
                                             SUB84(dVar18,0));
          }
          if (cVar34 == '\0') {
            *(int *)(unsigned)pdVar6 = SUB84(dVar18,0);
          }
          else {
            *pdVar6 = in_xd2;
          }
          CacheBlockWriteBack(pdVar6);
          if (cVar34 == '\0') {
            dVar25 = CONCAT44D(*(undefined4 *)(unsigned)pdVar10,SUB84(dVar25,0));
            dVar18 = CONCAT44D(*(undefined4 *)(unsigned)((int)pdVar10 + 4),SUB84(dVar18,0));
            pdVar6 = pdVar10 + 1;
          }
          else {
            dVar25 = *pdVar10;
            dVar18 = pdVar10[1];
            pdVar6 = pdVar10 + 2;
          }
          if (cVar34 == '\0') {
            uVar3 = *(undefined4 *)(unsigned)(pdVar6 + 2);
            dVar16 = CONCAT44D(uVar3,SUB84(dVar21,0));
            dVar21 = CONCAT44D(*(undefined4 *)(unsigned)((int)pdVar6 + 0x14),uVar24);
            *(undefined4 *)(unsigned)((int)unaff_r8 + 0x1c) = *(undefined4 *)(unsigned)((int)pdVar6 + 0x14);
            *(undefined4 *)(unsigned)(unaff_r8 + 3) = uVar3;
            *(int *)(unsigned)((int)unaff_r8 + 0x14) = (int)(D2U(dVar18) >> 0x20);
            unaff_r8 = unaff_r8 + 2;
            *(int *)(unsigned)unaff_r8 = (int)(D2U(dVar25) >> 0x20);
          }
          else {
            dVar16 = pdVar6[2];
            dVar21 = pdVar6[3];
            unaff_r8[3] = dVar21;
            unaff_r8[2] = dVar16;
            unaff_r8[1] = dVar18;
            *unaff_r8 = dVar25;
          }
          uVar24 = SUB84(dVar21,0);
          uVar9 = SUB84(dVar16,0);
          unaff_r8 = unaff_r8 + 4;
          *(undefined4 *)(unsigned)ar5_00 = 0xe0000000;
          CacheBlockWriteBack(ar5_00);
          if (*(uint *)(unsigned)((int)ar5_00 + 0x3c) != (ar5 | (*(uint *)(fr0_ - 0x4c)))) {
            pdVar6 = ar5_00 + 2;
            *(uint *)(unsigned)((int)ar5_00 + 0x3c) = ar5 | (*(uint *)(fr0_ - 0x4c));
            pdVar8 = ar5_00 + 6;
            puVar5 = ((undefined1 *)(unsigned)0x8c4c2620);
            ar7_00 = (*(uint *)(fr0_ - 0x4c));
            (vsp = ((unsigned long)(fr0_ - 84)), FUN_8c23bae2(((undefined1 *)(unsigned)0x8c4c2620),pdVar6,pdVar8,(*(uint *)(fr0_ - 0x4c))));
            uVar3 = (vsp = ((unsigned long)(fr0_ - 84)), float_to_color_u8(puVar5,pdVar6,pdVar8,ar7_00));
            *(undefined4 *)(unsigned)(ar5_00 + 5) = uVar3;
            uVar9 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c2630);
            uVar24 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c2638);
            if (cVar34 == '\0') {
              uVar9 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c2634);
              uVar24 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c263c);
            }
            uVar3 = (vsp = ((unsigned long)(fr0_ - 84)), float_to_color_u8(puVar5,pdVar6,pdVar8,ar7_00));
            *(undefined4 *)(unsigned)((int)ar5_00 + 0x2c) = uVar3;
          }
          uVar3 = (undefined4)(D2U(dVar29) >> 0x20);
          if (cVar34 == '\0') {
            pdVar6 = (double *)(unsigned)((int)ar5_00 + 0x34);
            dVar21 = CONCAT44D(*(undefined4 *)(unsigned)(ar5_00 + 6),uVar3);
            dVar25 = CONCAT44D(uVar3,SUB84(dVar25,0));
          }
          else {
            dVar21 = ar5_00[6];
            pdVar6 = ar5_00 + 7;
            dVar25 = dVar29;
            in_xd2 = dVar29;
          }
          if (cVar33 == '\0') {
            fVar20 = F32HI(dVar21);
            dVar21 = CONCAT44D(fVar20,F32HI(dVar25) * fVar20 +
                                             SUB84(dVar21,0));
          }
          if (cVar34 == '\0') {
            *(int *)(unsigned)(ar5_00 + 4) = SUB84(dVar21,0);
            dVar18 = CONCAT44D(*(undefined4 *)(unsigned)pdVar6,uVar3);
            dVar25 = CONCAT44D(uVar3,SUB84(dVar25,0));
            dVar21 = CONCAT44D(uVar3,uVar9);
          }
          else {
            ar5_00[4] = in_xd2;
            dVar18 = *pdVar6;
            in_xd2 = dVar29;
            dVar25 = dVar29;
            dVar21 = dVar29;
          }
          uVar3 = SUB84(dVar21,0);
          pdVar6 = (double *)(unsigned)((int)ar5_00 + 0x24);
          if (cVar33 == '\0') {
            fVar20 = F32HI(dVar18);
            dVar18 = CONCAT44D(fVar20,F32HI(dVar25) * fVar20 +
                                             SUB84(dVar18,0));
          }
          uVar23 = SUB84(dVar18,0);
          if (cVar34 == '\0') {
            *(undefined4 *)(unsigned)pdVar6 = uVar23;
          }
          else {
            *pdVar6 = in_xd2;
          }
          CacheBlockWriteBack(pdVar6);
LAB_8c24611c:
          if (cVar34 == '\0') {
            in_dr0 = CONCAT44D(*(undefined4 *)(unsigned)ar5_00,SUB84(dVar25,0));
            in_dr2 = CONCAT44D(*(undefined4 *)(unsigned)((int)ar5_00 + 4),uVar23);
            pdVar6 = ar5_00 + 1;
          }
          else {
            in_dr0 = *ar5_00;
            in_dr2 = ar5_00[1];
            pdVar6 = ar5_00 + 2;
          }
          if (cVar34 == '\0') {
            uVar23 = *(undefined4 *)(unsigned)(pdVar6 + 2);
            in_dr4 = CONCAT44D(uVar23,uVar3);
            dVar25 = CONCAT44D(*(undefined4 *)(unsigned)((int)pdVar6 + 0x14),uVar24);
            *(undefined4 *)(unsigned)((int)unaff_r8 + 0x1c) = *(undefined4 *)(unsigned)((int)pdVar6 + 0x14);
            *(undefined4 *)(unsigned)(unaff_r8 + 3) = uVar23;
            *(int *)(unsigned)((int)unaff_r8 + 0x14) = (int)((ulonglong)in_dr2 >> 0x20);
            unaff_r8 = unaff_r8 + 2;
            *(int *)(unsigned)unaff_r8 = (int)((ulonglong)in_dr0 >> 0x20);
          }
          else {
            in_dr4 = pdVar6[2];
            dVar25 = pdVar6[3];
            unaff_r8[3] = dVar25;
            unaff_r8[2] = in_dr4;
            unaff_r8[1] = in_dr2;
            *unaff_r8 = in_dr0;
          }
          uVar24 = SUB84(dVar25,0);
          unaff_r8 = unaff_r8 + 4;
        }
      }
      if ((*(uint *)(fr0_ - 0x34)) != 0) {
        (vsp = ((unsigned long)(fr0_ - 84)), FUN_8c23dc42(pdVar10,ar5_00,pdVar11,ar5 | (*(uint *)(fr0_ - 0x4c))));
        pdVar7 = unaff_r8;
      }
      if (cVar34 == '\0') {
        uVar31 = CONCAT44(*(undefined4 *)(unsigned)((int)pdVar11 + 4),SUB84(dVar30,0));
        in_dr6 = CONCAT44D((int)(D2U(dVar30) >> 0x20),uVar24);
      }
      else {
        uVar31 = *(undefined8 *)(unsigned)((int)pdVar11 + 4);
        in_dr6 = dVar30;
      }
      uVar3 = 8;
      if (cVar34 == '\0') {
        in_dr4 = (double)(D2U(dVar29) & 0xffffffff);
        dVar29 = CONCAT44D((int)(D2U(dVar29) >> 0x20),*(undefined4 *)(unsigned)(pdVar11 + 1));
      }
      else {
        in_xd12 = pdVar11[1];
      }
      uVar24 = SUB84(in_dr4,0);
      (*(uint *)(fr0_ - 0x44)) = (*(uint *)(fr0_ - 0x44)) + -1;
      dVar30 = CONCAT44D((int)((ulonglong)uVar31 >> 0x20),-(float)uVar31);
      pdVar10 = ar5_00;
      ar5_00 = pdVar11;
    } while ((*(uint *)(fr0_ - 0x44)) != 0);
    if (pdVar7 < unaff_r8) {
      *(undefined4 *)(unsigned)pdVar11 = 0xf0000000;
      CacheBlockWriteBack(pdVar11);
      if (*(uint *)(unsigned)((int)pdVar11 + 0x3c) != (ar5 | (*(uint *)(fr0_ - 0x4c)))) {
        pdVar7 = pdVar11 + 2;
        *(uint *)(unsigned)((int)pdVar11 + 0x3c) = ar5 | (*(uint *)(fr0_ - 0x4c));
        pdVar10 = pdVar11 + 6;
        puVar5 = ((undefined1 *)(unsigned)0x8c4c2620);
        (vsp = ((unsigned long)(fr0_ - 84)), FUN_8c23bae2(((undefined1 *)(unsigned)0x8c4c2620),pdVar7,pdVar10,(*(uint *)(fr0_ - 0x4c))));
        uVar3 = (vsp = ((unsigned long)(fr0_ - 84)), float_to_color_u8(puVar5,pdVar7,pdVar10,(*(uint *)(fr0_ - 0x4c))));
        *(undefined4 *)(unsigned)(pdVar11 + 5) = uVar3;
        if (cVar34 == '\0') {
          in_dr6 = (double)(ulonglong)(*(undefined4 *)(unsigned)(unsigned)0x8c4c263c);
          uVar24 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c2634);
        }
        else {
          in_dr6 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4c263c),(*(undefined4 *)(unsigned)(unsigned)0x8c4c2638));
          uVar24 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c2630);
        }
        uVar3 = (vsp = ((unsigned long)(fr0_ - 84)), float_to_color_u8(puVar5,pdVar7,pdVar10,(*(uint *)(fr0_ - 0x4c))));
        *(undefined4 *)(unsigned)((int)pdVar11 + 0x2c) = uVar3;
      }
      uVar23 = (undefined4)(D2U(dVar29) >> 0x20);
      if (cVar34 == '\0') {
        pdVar7 = (double *)(unsigned)((int)pdVar11 + 0x34);
        dVar30 = CONCAT44D(*(undefined4 *)(unsigned)(pdVar11 + 6),uVar23);
        dVar25 = CONCAT44D(uVar23,SUB84(in_dr0,0));
      }
      else {
        dVar30 = pdVar11[6];
        pdVar7 = pdVar11 + 7;
        dVar25 = dVar29;
        in_xd2 = dVar29;
      }
      if (cVar33 == '\0') {
        fVar20 = F32HI(dVar30);
        dVar30 = CONCAT44D(fVar20,F32HI(dVar25) * fVar20 +
                                         SUB84(dVar30,0));
      }
      if (cVar34 == '\0') {
        *(int *)(unsigned)(pdVar11 + 4) = SUB84(dVar30,0);
        dVar21 = CONCAT44D(*(undefined4 *)(unsigned)pdVar7,uVar23);
        dVar30 = CONCAT44D(uVar23,SUB84(dVar25,0));
        dVar25 = CONCAT44D(uVar23,uVar24);
      }
      else {
        pdVar11[4] = in_xd2;
        dVar21 = *pdVar7;
        in_xd2 = dVar29;
        dVar30 = dVar29;
        dVar25 = dVar29;
      }
      pdVar7 = (double *)(unsigned)((int)pdVar11 + 0x24);
      if (cVar33 == '\0') {
        fVar20 = F32HI(dVar21);
        dVar21 = CONCAT44D(fVar20,F32HI(dVar30) * fVar20 +
                                         SUB84(dVar21,0));
      }
      if (cVar34 == '\0') {
        *(int *)(unsigned)pdVar7 = SUB84(dVar21,0);
      }
      else {
        *pdVar7 = in_xd2;
      }
      CacheBlockWriteBack(pdVar7);
      if (cVar34 == '\0') {
        in_dr0 = CONCAT44D(*(undefined4 *)(unsigned)pdVar11,SUB84(dVar30,0));
        in_dr2 = CONCAT44D(*(undefined4 *)(unsigned)((int)pdVar11 + 4),SUB84(dVar21,0));
        pdVar11 = pdVar11 + 1;
      }
      else {
        in_dr0 = *pdVar11;
        in_dr2 = pdVar11[1];
        pdVar11 = pdVar11 + 2;
      }
      if (cVar34 == '\0') {
        uVar23 = *(undefined4 *)(unsigned)(pdVar11 + 2);
        in_dr4 = CONCAT44D(uVar23,SUB84(dVar25,0));
        in_dr6 = CONCAT44D(*(undefined4 *)(unsigned)((int)pdVar11 + 0x14),SUB84(in_dr6,0));
        *(undefined4 *)(unsigned)((int)unaff_r8 + 0x1c) = *(undefined4 *)(unsigned)((int)pdVar11 + 0x14);
        *(undefined4 *)(unsigned)(unaff_r8 + 3) = uVar23;
        *(int *)(unsigned)((int)unaff_r8 + 0x14) = (int)((ulonglong)in_dr2 >> 0x20);
        unaff_r8 = unaff_r8 + 2;
        *(int *)(unsigned)unaff_r8 = (int)((ulonglong)in_dr0 >> 0x20);
      }
      else {
        in_dr4 = pdVar11[2];
        in_dr6 = pdVar11[3];
        unaff_r8[3] = in_dr6;
        unaff_r8[2] = in_dr4;
        unaff_r8[1] = in_dr2;
        *unaff_r8 = in_dr0;
      }
      unaff_r8 = unaff_r8 + 4;
    }
    (*(uint *)(fr0_ - 0x30)) = (*(uint *)(fr0_ - 0x30)) - 1;
    if ((*(uint *)(fr0_ - 0x30)) == 0) {
      (*(undefined4 *)(unsigned)(unsigned)0x8c4aa51c) = (*(undefined4 *)(unsigned)(unsigned)0x8c4aa51c) + (*(int *)(fr0_ - 0x38));
      (*(undefined4 *)(unsigned)(unsigned)0x8c4aa520) = (*(undefined4 *)(unsigned)(unsigned)0x8c4aa520) + (*(int *)(fr0_ - 0x38));
      return uVar3;
    }
  } while( true );
}

__asm__(".globl _FUN_8c245cc8\n.set _FUN_8c245cc8, _FUN_8c245cc8_def\n");
