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
undefined4 FUN_8c244ac2_def(int ar4,uint ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c244ac2";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 84; for (int i_ = 0; i_ < 84; i_++) z_[i_] = 0; }
  ushort uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  double *pdVar7;
  double *pdVar8;
  double *pdVar9;
  undefined1 *puVar10;
  uint uVar11;
  double *pdVar12;
  double *unaff_r8 = 0;
  double *pdVar13;
  double *pdVar14;
  double *pdVar15;
  short *psVar16;
  short *psVar17;
  ushort *puVar18;
  ushort *puVar19;
  ushort *puVar20;
  float fVar21;
  double in_dr0 = 0;
  double dVar22;
  double in_dr2 = 0;
  double dVar24;
  float fVar26;
  ulonglong uVar25;
  float fVar27;
  double dVar28;
  double in_dr6 = 0;
  double dVar29;
  float fVar30;
  double dVar31;
  double in_dr10 = 0;
  float fVar32;
  undefined4 in_fr13 = 0;
  undefined4 uVar33;
  double dVar34;
  double in_dr14 = 0;
  undefined8 uVar35;
  double in_xd2 = 0;
  double in_xd12 = 0;
  bool bVar36;
  char cVar37;
  char cVar38;
  float fVar23;
  
  cVar38 = '\0';
  cVar37 = '\0';
  dVar34 = CONCAT44D(0x3f800000,in_fr13);
  ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x54))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 84)); noop_23d694(ar4,ar5,ar6,ar7); });
  iVar2 = (*(undefined4 *)(unsigned)(unsigned)0x8c4aa510);
  if (((*(undefined4 *)(unsigned)(unsigned)0x8c4ab308) & 0x800000) == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = 0x8000;
  }
  puVar18 = ((ushort *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 4));
  psVar16 = ((short *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x14));
  (*(uint *)(fr0_ - 0x30)) = (uint)*(ushort *)(unsigned)(ar4 + 2);
  (*(int *)(fr0_ - 0x38)) = 0;
  do {
    uVar4 = SUB84(in_dr14,0);
    puVar19 = puVar18 + 1;
    (*(uint *)(fr0_ - 0x48)) = (uint)*puVar18;
    uVar3 = (undefined4)(D2U(dVar34) >> 0x20);
    if (cVar38 == '\0') {
      uVar4 = uVar3;
    }
    if ((*puVar18 & 0x8000) != 0) {
      (*(uint *)(fr0_ - 0x48)) = (*(uint *)(fr0_ - 0x48)) & 0x7fff;
      uVar4 = 0xbf800000;
    }
    (*(int *)(fr0_ - 0x38)) = (*(int *)(fr0_ - 0x38)) + (*(uint *)(fr0_ - 0x48));
    (*(uint *)(fr0_ - 0x48)) = (*(uint *)(fr0_ - 0x48)) - 2;
    puVar20 = puVar18 + 2;
    puVar18 = puVar18 + 3;
    pdVar14 = (double *)(unsigned)((uint)*puVar19 * 0x40 + iVar2);
    pdVar15 = (double *)(unsigned)((uint)*puVar20 * 0x40 + iVar2);
    if (cVar38 == '\0') {
      pdVar7 = (double *)(unsigned)((int)pdVar14 + 4);
      in_dr14 = CONCAT44D(*(undefined4 *)(unsigned)((int)pdVar15 + 4),uVar4);
      dVar34 = CONCAT44D(uVar3,*(undefined4 *)(unsigned)(pdVar15 + 1));
      in_dr6 = CONCAT44D(0x3b800000,SUB84(in_dr6,0));
    }
    else {
      in_dr14 = *(double *)(unsigned)((int)pdVar15 + 4);
      pdVar7 = pdVar14 + 1;
      in_xd12 = pdVar15[1];
      in_dr6 = -2.584224838040973e+250;
    }
    dVar29 = *pdVar7;
    uVar4 = (undefined4)((ulonglong)in_dr2 >> 0x20);
    fVar27 = F32HI(in_dr6);
    if (cVar37 == '\0') {
      dVar24 = CONCAT44D(uVar4,(float)(int)*psVar16 * fVar27);
    }
    else {
      dVar24 = CONCAT44D(uVar4,(float)(int)*psVar16) * in_dr6;
    }
    if (cVar38 == '\0') {
      *(int *)(unsigned)(pdVar14 + 4) = SUB84(dVar24,0);
    }
    else {
      pdVar14[4] = in_xd2;
    }
    uVar4 = (undefined4)(D2U(dVar24) >> 0x20);
    if (cVar37 == '\0') {
      dVar24 = CONCAT44D(uVar4,(float)(int)psVar16[1] * fVar27);
    }
    else {
      dVar24 = CONCAT44D(uVar4,(float)(int)psVar16[1]) * in_dr6;
    }
    if (cVar38 == '\0') {
      *(int *)(unsigned)((int)pdVar14 + 0x24) = SUB84(dVar24,0);
    }
    else {
      *(double *)(unsigned)((int)pdVar14 + 0x24) = in_xd2;
    }
    uVar4 = (undefined4)(D2U(dVar24) >> 0x20);
    if (cVar37 == '\0') {
      dVar24 = CONCAT44D(uVar4,(float)(int)psVar16[2] * fVar27);
    }
    else {
      dVar24 = CONCAT44D(uVar4,(float)(int)psVar16[2]) * in_dr6;
    }
    if (cVar38 == '\0') {
      *(int *)(unsigned)(pdVar15 + 4) = SUB84(dVar24,0);
    }
    else {
      pdVar15[4] = in_xd2;
    }
    uVar4 = (undefined4)(D2U(dVar24) >> 0x20);
    if (cVar37 == '\0') {
      in_dr2 = CONCAT44D(uVar4,(float)(int)psVar16[3] * fVar27);
    }
    else {
      in_dr2 = CONCAT44D(uVar4,(float)(int)psVar16[3]) * in_dr6;
    }
    pdVar7 = unaff_r8;
    psVar17 = psVar16 + 4;
    if (cVar38 == '\0') {
      *(int *)(unsigned)((int)pdVar15 + 0x24) = SUB84(in_dr2,0);
    }
    else {
      *(double *)(unsigned)((int)pdVar15 + 0x24) = in_xd2;
    }
    do {
      uVar4 = SUB84(in_dr6,0);
      uVar1 = *puVar18;
      puVar18 = puVar18 + 1;
      pdVar13 = (double *)(unsigned)((uint)uVar1 * 0x40 + iVar2);
      (*(uint *)(fr0_ - 0x34)) = 0;
      (*(uint *)(fr0_ - 0x50)) = 0;
      uVar6 = *(uint *)(unsigned)pdVar15;
      psVar16 = psVar17 + 2;
      uVar11 = *(uint *)(unsigned)pdVar14;
      if (cVar38 == '\0') {
        uVar4 = 0x3b800000;
      }
      uVar3 = (undefined4)(D2U(dVar34) >> 0x20);
      in_dr6 = dVar34;
      if (cVar38 == '\0') {
        in_dr6 = CONCAT44D(uVar3,uVar4);
      }
      uVar4 = (undefined4)((ulonglong)in_dr2 >> 0x20);
      fVar27 = F32LO(in_dr6);
      if (cVar37 == '\0') {
        dVar24 = CONCAT44D(uVar4,(float)(int)*psVar17 * fVar27);
      }
      else {
        dVar24 = CONCAT44D(uVar4,(float)(int)*psVar17) * in_dr6;
      }
      if (cVar38 == '\0') {
        *(int *)(unsigned)(pdVar13 + 4) = SUB84(dVar24,0);
      }
      else {
        pdVar13[4] = in_xd2;
      }
      uVar4 = (undefined4)(D2U(dVar24) >> 0x20);
      if (cVar37 == '\0') {
        dVar24 = CONCAT44D(uVar4,(float)(int)psVar17[1] * fVar27);
      }
      else {
        dVar24 = CONCAT44D(uVar4,(float)(int)psVar17[1]) * in_dr6;
      }
      if (cVar38 == '\0') {
        *(int *)(unsigned)((int)pdVar13 + 0x24) = SUB84(dVar24,0);
      }
      else {
        *(double *)(unsigned)((int)pdVar13 + 0x24) = in_xd2;
      }
      if ((uVar11 & uVar6 & *(uint *)(unsigned)pdVar13 & 0x3f) == 0) {
        if (((*(uint *)(unsigned)pdVar14 | *(uint *)(unsigned)pdVar15 | *(uint *)(unsigned)pdVar13) & 1) == 0) {
          fVar26 = F32HI(in_dr14);
          if (cVar38 == '\0') {
            dVar24 = CONCAT44D(*(undefined4 *)(unsigned)(pdVar13 + 1),fVar26);
          }
          else {
            dVar24 = pdVar13[1];
            in_xd2 = in_dr14;
          }
          if (cVar37 == '\0') {
            dVar24 = CONCAT44D(F32HI(dVar24) - F32LO(dVar34),
                                      F32LO(dVar24) - F32LO(dVar29));
          }
          else {
            dVar24 = (dVar24 - dVar29) - dVar34;
          }
          if (cVar38 == '\0') {
            in_dr0 = CONCAT44D((int)((ulonglong)in_dr0 >> 0x20),
                                      *(undefined4 *)(unsigned)((int)pdVar13 + 4));
          }
          if (cVar37 == '\0') {
            in_dr0 = CONCAT44D((int)((ulonglong)in_dr0 >> 0x20),F32LO(in_dr0) - fVar26);
            fVar26 = F32LO(dVar24) * F32HI(dVar24);
          }
          else {
            in_dr0 = in_dr0 - in_dr14;
            fVar26 = SUB84(dVar24 * dVar24,0);
          }
          dVar24 = in_xd12;
          if (cVar38 == '\0') {
            dVar24 = CONCAT44D(SUB84(dVar34,0),fVar26);
          }
          if (cVar37 == '\0') {
            fVar26 = (F32HI(dVar24) - F32HI(dVar29)) *
                     SUB84(in_dr0,0);
            dVar24 = CONCAT44D(fVar26,F32LO(dVar24) - fVar26);
          }
          else {
            dVar24 = (dVar24 - dVar29) * in_dr0;
            dVar24 = dVar24 - dVar24;
          }
          in_dr6 = in_xd2;
          if (cVar38 == '\0') {
            in_dr6 = CONCAT44D(SUB84(dVar24,0),fVar27);
          }
          if (cVar37 == '\0') {
            in_dr6 = CONCAT44D(F32HI(in_dr6) * F32LO(in_dr14),
                                      SUB84(in_dr6,0));
          }
          else {
            in_dr6 = in_dr6 * in_dr14;
          }
          dVar24 = (double)(D2U(dVar24) & 0xffffffff00000000);
          if (cVar37 == '\0') {
            bVar36 = 0.0 < F32HI(in_dr6);
          }
          else {
            bVar36 = dVar24 < in_dr6;
          }
          if ((bVar36) && (uVar5 != 0)) {
            if (cVar37 == '\0') {
              in_dr6 = CONCAT44D(0xbf800000,SUB84(in_dr6,0));
              (*(uint *)(fr0_ - 0x50)) = uVar5;
            }
            else {
              in_dr6 = -CONCAT44D(0x3f800000,SUB84(in_dr6,0));
              (*(uint *)(fr0_ - 0x50)) = uVar5;
            }
          }
        }
        else {
          if (cVar38 == '\0') {
            fVar23 = *(float *)(unsigned)(pdVar15 + 2);
            fVar21 = *(float *)(unsigned)((int)pdVar15 + 0x14);
            dVar22 = CONCAT44D(fVar23,fVar21);
            fVar26 = *(float *)(unsigned)(pdVar15 + 3);
            dVar28 = CONCAT44D(*(undefined4 *)(unsigned)(pdVar14 + 2),
                                      *(undefined4 *)(unsigned)((int)pdVar14 + 0x14));
            dVar29 = CONCAT44D(*(undefined4 *)(unsigned)(pdVar14 + 3),fVar27);
            in_dr10 = CONCAT44D(fVar26,SUB84(in_dr10,0));
            dVar24 = CONCAT44D(fVar26,SUB84(dVar24,0));
          }
          else {
            dVar22 = pdVar15[2];
            in_dr10 = pdVar15[4];
            dVar28 = pdVar14[2];
            dVar29 = pdVar14[4];
            fVar23 = F32HI(dVar22);
            fVar21 = F32LO(dVar22);
            fVar26 = F32HI(in_dr10);
            dVar24 = in_dr10;
          }
          fVar30 = F32HI(dVar29);
          fVar27 = F32HI(dVar28);
          if (cVar37 == '\0') {
            fVar32 = F32HI(in_dr10) * fVar27;
            in_dr10 = CONCAT44D(fVar32,SUB84(in_dr10,0));
            dVar24 = (double)((ulonglong)(uint)(fVar26 * F32LO(dVar28) - F32LO(dVar22) * fVar30)
                             << 0x20);
            dVar31 = CONCAT44D(fVar23 * fVar30 - fVar32,
                                      fVar21 * fVar27 -
                                      F32HI(dVar22) * F32LO(dVar28));
          }
          else {
            in_dr10 = in_dr10 * dVar28;
            dVar31 = dVar22 * dVar29 * dVar28;
            dVar24 = dVar24 * dVar28 - dVar31;
            dVar31 = (dVar22 * dVar29 * dVar28 - in_dr10) - dVar31;
          }
          if (cVar38 == '\0') {
            dVar28 = CONCAT44D(*(undefined4 *)(unsigned)(pdVar13 + 2),SUB84(dVar29,0));
            dVar29 = CONCAT44D(*(undefined4 *)(unsigned)((int)pdVar13 + 0x14),
                                      *(undefined4 *)(unsigned)(pdVar13 + 3));
          }
          else {
            dVar28 = pdVar13[2];
            dVar29 = pdVar13[3];
          }
          uVar25 = D2U(dVar24) & 0xffffffff00000000;
                    
          if (cVar37 == '\0') {
            fVar27 = F32LO(dVar31) * F32LO(dVar29) +
                     F32HI(dVar31) * F32HI(dVar29) +
                     F32LO(dVar28) * 0.0 +
                     (float)(uVar25 >> 0x20) * F32HI(dVar28);
          }
          dVar22 = in_xd2;
          in_dr0 = in_xd2;
          if (cVar38 == '\0') {
            dVar22 = CONCAT44D((int)uVar25,SUB84(dVar28,0));
            in_dr0 = CONCAT44D((int)uVar25,SUB84(dVar31,0));
          }
          if (cVar37 == '\0') {
            dVar22 = CONCAT44D(F32HI(dVar22) * F32LO(in_dr14),
                                      SUB84(dVar22,0));
          }
          else {
            dVar22 = dVar22 * in_dr14;
          }
          dVar24 = (double)(uVar25 & 0xffffffff00000000);
          if (cVar37 == '\0') {
            bVar36 = 0.0 < F32HI(dVar22);
          }
          else {
            bVar36 = dVar24 < dVar22;
          }
          if (bVar36) {
            in_dr6 = dVar22;
            if (uVar5 != 0) {
              (*(uint *)(fr0_ - 0x50)) = uVar5;
              (*(uint *)(fr0_ - 0x34)) = uVar5;
            }
          }
          else {
            (*(uint *)(fr0_ - 0x34)) = 1;
            in_dr6 = dVar34;
            if (cVar38 == '\0') {
              in_dr6 = CONCAT44D(uVar3,SUB84(dVar22,0));
            }
          }
        }
      }
      uVar4 = SUB84(dVar29,0);
      pdVar9 = pdVar15 + 4;
      uVar6 = (uint)(D2U(dVar24) >> 0x20);
      fVar27 = F32HI(in_dr6);
      if (pdVar7 < unaff_r8) {
        dVar29 = (double)((ulonglong)uVar6 << 0x20);
        if (cVar37 == '\0') {
          bVar36 = fVar27 < 0.0;
        }
        else {
          bVar36 = in_dr6 < dVar29;
        }
        if (bVar36) {
          *(undefined4 *)(unsigned)pdVar15 = 0xe0000000;
          CacheBlockWriteBack(pdVar15);
          if (*(uint *)(unsigned)((int)pdVar15 + 0x3c) != (ar5 | (*(uint *)(fr0_ - 0x50)))) {
            *(uint *)(unsigned)((int)pdVar15 + 0x3c) = ar5 | (*(uint *)(fr0_ - 0x50));
            pdVar12 = pdVar15 + 6;
            puVar10 = ((undefined1 *)(unsigned)0x8c4c2620);
            pdVar8 = pdVar15 + 2;
            uVar6 = (*(uint *)(fr0_ - 0x50));
            (vsp = ((unsigned long)(fr0_ - 84)), FUN_8c23bae2(((undefined1 *)(unsigned)0x8c4c2620),pdVar8,pdVar12,(*(uint *)(fr0_ - 0x50))));
            uVar4 = (vsp = ((unsigned long)(fr0_ - 84)), float_to_color_u8(puVar10,pdVar8,pdVar12,uVar6));
            *(undefined4 *)(unsigned)(pdVar15 + 5) = uVar4;
            if (cVar38 == '\0') {
              in_dr6 = (double)(ulonglong)(*(undefined4 *)(unsigned)(unsigned)0x8c4c263c);
              uVar4 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c2634);
            }
            else {
              in_dr6 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4c263c),(*(undefined4 *)(unsigned)(unsigned)0x8c4c2638));
              uVar4 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c2630);
            }
            uVar3 = (vsp = ((unsigned long)(fr0_ - 84)), float_to_color_u8(puVar10,pdVar8,pdVar12,uVar6));
            *(undefined4 *)(unsigned)((int)pdVar15 + 0x2c) = uVar3;
            CacheBlockWriteBack(pdVar9);
          }
          goto LAB_8c244f02;
        }
        *(undefined4 *)(unsigned)pdVar15 = 0xf0000000;
        CacheBlockWriteBack(pdVar15);
        if (*(uint *)(unsigned)((int)pdVar15 + 0x3c) != (ar5 | (*(uint *)(fr0_ - 0x50)))) {
          *(uint *)(unsigned)((int)pdVar15 + 0x3c) = ar5 | (*(uint *)(fr0_ - 0x50));
          pdVar8 = pdVar15 + 6;
          puVar10 = ((undefined1 *)(unsigned)0x8c4c2620);
          pdVar7 = pdVar15 + 2;
          uVar6 = (*(uint *)(fr0_ - 0x50));
          (vsp = ((unsigned long)(fr0_ - 84)), FUN_8c23bae2(((undefined1 *)(unsigned)0x8c4c2620),pdVar7,pdVar8,(*(uint *)(fr0_ - 0x50))));
          uVar4 = (vsp = ((unsigned long)(fr0_ - 84)), float_to_color_u8(puVar10,pdVar7,pdVar8,uVar6));
          *(undefined4 *)(unsigned)(pdVar15 + 5) = uVar4;
          if (cVar38 == '\0') {
            in_dr6 = (double)(ulonglong)(*(undefined4 *)(unsigned)(unsigned)0x8c4c263c);
            uVar4 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c2634);
          }
          else {
            in_dr6 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4c263c),(*(undefined4 *)(unsigned)(unsigned)0x8c4c2638));
            uVar4 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c2630);
          }
          uVar3 = (vsp = ((unsigned long)(fr0_ - 84)), float_to_color_u8(puVar10,pdVar7,pdVar8,uVar6));
          *(undefined4 *)(unsigned)((int)pdVar15 + 0x2c) = uVar3;
          CacheBlockWriteBack(pdVar9);
        }
        if (cVar38 == '\0') {
          in_dr0 = CONCAT44D(*(undefined4 *)(unsigned)pdVar15,SUB84(in_dr0,0));
          in_dr2 = CONCAT44D(*(undefined4 *)(unsigned)((int)pdVar15 + 4),SUB84(dVar29,0));
          pdVar7 = pdVar15 + 1;
        }
        else {
          in_dr0 = *pdVar15;
          in_dr2 = pdVar15[1];
          pdVar7 = pdVar15 + 2;
        }
        if (cVar38 == '\0') {
          uVar3 = *(undefined4 *)(unsigned)(pdVar7 + 2);
          dVar29 = CONCAT44D(uVar3,uVar4);
          in_dr6 = CONCAT44D(*(undefined4 *)(unsigned)((int)pdVar7 + 0x14),SUB84(in_dr6,0));
          *(undefined4 *)(unsigned)((int)unaff_r8 + 0x1c) = *(undefined4 *)(unsigned)((int)pdVar7 + 0x14);
          *(undefined4 *)(unsigned)(unaff_r8 + 3) = uVar3;
          *(int *)(unsigned)((int)unaff_r8 + 0x14) = (int)((ulonglong)in_dr2 >> 0x20);
          unaff_r8 = unaff_r8 + 2;
          *(int *)(unsigned)unaff_r8 = (int)((ulonglong)in_dr0 >> 0x20);
        }
        else {
          dVar29 = pdVar7[2];
          in_dr6 = pdVar7[3];
          unaff_r8[3] = in_dr6;
          unaff_r8[2] = dVar29;
          unaff_r8[1] = in_dr2;
          *unaff_r8 = in_dr0;
        }
        uVar4 = SUB84(dVar29,0);
        unaff_r8 = unaff_r8 + 4;
        pdVar7 = unaff_r8;
      }
      else {
        in_dr2 = (double)((ulonglong)uVar6 << 0x20);
        if (cVar37 == '\0') {
          bVar36 = fVar27 < 0.0;
        }
        else {
          bVar36 = in_dr6 < in_dr2;
        }
        if (bVar36) {
          *(undefined4 *)(unsigned)pdVar14 = 0xe0000000;
          CacheBlockWriteBack(pdVar14);
          if (*(uint *)(unsigned)((int)pdVar14 + 0x3c) != (ar5 | (*(uint *)(fr0_ - 0x50)))) {
            *(uint *)(unsigned)((int)pdVar14 + 0x3c) = ar5 | (*(uint *)(fr0_ - 0x50));
            pdVar12 = pdVar14 + 6;
            puVar10 = ((undefined1 *)(unsigned)0x8c4c2620);
            pdVar8 = pdVar14 + 2;
            uVar6 = (*(uint *)(fr0_ - 0x50));
            (vsp = ((unsigned long)(fr0_ - 84)), FUN_8c23bae2(((undefined1 *)(unsigned)0x8c4c2620),pdVar8,pdVar12,(*(uint *)(fr0_ - 0x50))));
            uVar4 = (vsp = ((unsigned long)(fr0_ - 84)), float_to_color_u8(puVar10,pdVar8,pdVar12,uVar6));
            *(undefined4 *)(unsigned)(pdVar14 + 5) = uVar4;
            if (cVar38 == '\0') {
              in_dr6 = (double)(ulonglong)(*(undefined4 *)(unsigned)(unsigned)0x8c4c263c);
              uVar4 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c2634);
            }
            else {
              in_dr6 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4c263c),(*(undefined4 *)(unsigned)(unsigned)0x8c4c2638));
              uVar4 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c2630);
            }
            uVar3 = (vsp = ((unsigned long)(fr0_ - 84)), float_to_color_u8(puVar10,pdVar8,pdVar12,uVar6));
            *(undefined4 *)(unsigned)((int)pdVar14 + 0x2c) = uVar3;
            CacheBlockWriteBack(pdVar14 + 4);
          }
          if (cVar38 == '\0') {
            in_dr0 = CONCAT44D(*(undefined4 *)(unsigned)pdVar14,SUB84(in_dr0,0));
            dVar29 = CONCAT44D(*(undefined4 *)(unsigned)((int)pdVar14 + 4),SUB84(in_dr2,0));
            pdVar8 = pdVar14 + 1;
          }
          else {
            in_dr0 = *pdVar14;
            dVar29 = pdVar14[1];
            pdVar8 = pdVar14 + 2;
          }
          if (cVar38 == '\0') {
            uVar3 = *(undefined4 *)(unsigned)(pdVar8 + 2);
            dVar24 = CONCAT44D(uVar3,uVar4);
            in_dr6 = CONCAT44D(*(undefined4 *)(unsigned)((int)pdVar8 + 0x14),SUB84(in_dr6,0));
            *(undefined4 *)(unsigned)((int)unaff_r8 + 0x1c) = *(undefined4 *)(unsigned)((int)pdVar8 + 0x14);
            *(undefined4 *)(unsigned)(unaff_r8 + 3) = uVar3;
            *(int *)(unsigned)((int)unaff_r8 + 0x14) = (int)(D2U(dVar29) >> 0x20);
            unaff_r8 = unaff_r8 + 2;
            *(int *)(unsigned)unaff_r8 = (int)((ulonglong)in_dr0 >> 0x20);
          }
          else {
            dVar24 = pdVar8[2];
            in_dr6 = pdVar8[3];
            unaff_r8[3] = in_dr6;
            unaff_r8[2] = dVar24;
            unaff_r8[1] = dVar29;
            *unaff_r8 = in_dr0;
          }
          uVar4 = SUB84(dVar24,0);
          unaff_r8 = unaff_r8 + 4;
          *(undefined4 *)(unsigned)pdVar15 = 0xe0000000;
          CacheBlockWriteBack(pdVar15);
          if (*(uint *)(unsigned)((int)pdVar15 + 0x3c) != (ar5 | (*(uint *)(fr0_ - 0x50)))) {
            *(uint *)(unsigned)((int)pdVar15 + 0x3c) = ar5 | (*(uint *)(fr0_ - 0x50));
            pdVar12 = pdVar15 + 6;
            puVar10 = ((undefined1 *)(unsigned)0x8c4c2620);
            pdVar8 = pdVar15 + 2;
            uVar6 = (*(uint *)(fr0_ - 0x50));
            (vsp = ((unsigned long)(fr0_ - 84)), FUN_8c23bae2(((undefined1 *)(unsigned)0x8c4c2620),pdVar8,pdVar12,(*(uint *)(fr0_ - 0x50))));
            uVar4 = (vsp = ((unsigned long)(fr0_ - 84)), float_to_color_u8(puVar10,pdVar8,pdVar12,uVar6));
            *(undefined4 *)(unsigned)(pdVar15 + 5) = uVar4;
            if (cVar38 == '\0') {
              in_dr6 = (double)(ulonglong)(*(undefined4 *)(unsigned)(unsigned)0x8c4c263c);
              uVar4 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c2634);
            }
            else {
              in_dr6 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4c263c),(*(undefined4 *)(unsigned)(unsigned)0x8c4c2638));
              uVar4 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c2630);
            }
            uVar3 = (vsp = ((unsigned long)(fr0_ - 84)), float_to_color_u8(puVar10,pdVar8,pdVar12,uVar6));
            *(undefined4 *)(unsigned)((int)pdVar15 + 0x2c) = uVar3;
            CacheBlockWriteBack(pdVar9);
          }
LAB_8c244f02:
          if (cVar38 == '\0') {
            in_dr0 = CONCAT44D(*(undefined4 *)(unsigned)pdVar15,SUB84(in_dr0,0));
            in_dr2 = CONCAT44D(*(undefined4 *)(unsigned)((int)pdVar15 + 4),SUB84(dVar29,0));
            pdVar9 = pdVar15 + 1;
          }
          else {
            in_dr0 = *pdVar15;
            in_dr2 = pdVar15[1];
            pdVar9 = pdVar15 + 2;
          }
          if (cVar38 == '\0') {
            uVar3 = *(undefined4 *)(unsigned)(pdVar9 + 2);
            dVar29 = CONCAT44D(uVar3,uVar4);
            in_dr6 = CONCAT44D(*(undefined4 *)(unsigned)((int)pdVar9 + 0x14),SUB84(in_dr6,0));
            *(undefined4 *)(unsigned)((int)unaff_r8 + 0x1c) = *(undefined4 *)(unsigned)((int)pdVar9 + 0x14);
            *(undefined4 *)(unsigned)(unaff_r8 + 3) = uVar3;
            *(int *)(unsigned)((int)unaff_r8 + 0x14) = (int)((ulonglong)in_dr2 >> 0x20);
            unaff_r8 = unaff_r8 + 2;
            *(int *)(unsigned)unaff_r8 = (int)((ulonglong)in_dr0 >> 0x20);
          }
          else {
            dVar29 = pdVar9[2];
            in_dr6 = pdVar9[3];
            unaff_r8[3] = in_dr6;
            unaff_r8[2] = dVar29;
            unaff_r8[1] = in_dr2;
            *unaff_r8 = in_dr0;
          }
          uVar4 = SUB84(dVar29,0);
          unaff_r8 = unaff_r8 + 4;
        }
      }
      dVar29 = in_xd12;
      if ((*(uint *)(fr0_ - 0x34)) != 0) {
        (vsp = ((unsigned long)(fr0_ - 84)), FUN_8c23d698(pdVar14,pdVar15,pdVar13,ar5 | (*(uint *)(fr0_ - 0x50))));
        pdVar7 = unaff_r8;
        dVar29 = in_xd12;
      }
      uVar6 = SUB84(in_dr6,0);
      if (cVar38 == '\0') {
        uVar4 = (undefined4)((ulonglong)in_dr14 >> 0x20);
        uVar35 = CONCAT44(*(undefined4 *)(unsigned)((int)pdVar13 + 4),SUB84(in_dr14,0));
      }
      else {
        uVar35 = *(undefined8 *)(unsigned)((int)pdVar13 + 4);
      }
      uVar3 = 8;
      if (cVar38 == '\0') {
        uVar33 = SUB84(dVar34,0);
        dVar34 = CONCAT44D((int)(D2U(dVar34) >> 0x20),*(undefined4 *)(unsigned)(pdVar13 + 1));
        in_xd12 = dVar29;
        dVar29 = CONCAT44D(uVar33,uVar4);
      }
      else {
        in_xd12 = pdVar13[1];
      }
      (*(uint *)(fr0_ - 0x48)) = (*(uint *)(fr0_ - 0x48)) + -1;
      in_dr14 = CONCAT44D((int)((ulonglong)uVar35 >> 0x20),-(float)uVar35);
      pdVar14 = pdVar15;
      pdVar15 = pdVar13;
      psVar17 = psVar16;
    } while ((*(uint *)(fr0_ - 0x48)) != 0);
    if (pdVar7 < unaff_r8) {
      *(undefined4 *)(unsigned)pdVar13 = 0xf0000000;
      CacheBlockWriteBack(pdVar13);
      if (*(uint *)(unsigned)((int)pdVar13 + 0x3c) != (ar5 | (*(uint *)(fr0_ - 0x50)))) {
        *(uint *)(unsigned)((int)pdVar13 + 0x3c) = ar5 | (*(uint *)(fr0_ - 0x50));
        pdVar15 = pdVar13 + 6;
        puVar10 = ((undefined1 *)(unsigned)0x8c4c2620);
        pdVar14 = pdVar13 + 2;
        (vsp = ((unsigned long)(fr0_ - 84)), FUN_8c23bae2(((undefined1 *)(unsigned)0x8c4c2620),pdVar14,pdVar15,(*(uint *)(fr0_ - 0x50))));
        uVar4 = (vsp = ((unsigned long)(fr0_ - 84)), float_to_color_u8(puVar10,pdVar14,pdVar15,(*(uint *)(fr0_ - 0x50))));
        *(undefined4 *)(unsigned)(pdVar13 + 5) = uVar4;
        uVar6 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c2638);
        if (cVar38 == '\0') {
          uVar6 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c263c);
        }
        uVar3 = (vsp = ((unsigned long)(fr0_ - 84)), float_to_color_u8(puVar10,pdVar14,pdVar15,(*(uint *)(fr0_ - 0x50))));
        *(undefined4 *)(unsigned)((int)pdVar13 + 0x2c) = uVar3;
        CacheBlockWriteBack(pdVar13 + 4);
      }
      if (cVar38 == '\0') {
        in_dr0 = CONCAT44D(*(undefined4 *)(unsigned)pdVar13,SUB84(in_dr0,0));
        in_dr2 = CONCAT44D(*(undefined4 *)(unsigned)((int)pdVar13 + 4),SUB84(in_dr2,0));
        pdVar13 = pdVar13 + 1;
      }
      else {
        in_dr0 = *pdVar13;
        in_dr2 = pdVar13[1];
        pdVar13 = pdVar13 + 2;
      }
      if (cVar38 == '\0') {
        uVar4 = *(undefined4 *)(unsigned)(pdVar13 + 2);
        in_dr6 = CONCAT44D(*(undefined4 *)(unsigned)((int)pdVar13 + 0x14),uVar6);
        *(undefined4 *)(unsigned)((int)unaff_r8 + 0x1c) = *(undefined4 *)(unsigned)((int)pdVar13 + 0x14);
        *(undefined4 *)(unsigned)(unaff_r8 + 3) = uVar4;
        *(int *)(unsigned)((int)unaff_r8 + 0x14) = (int)((ulonglong)in_dr2 >> 0x20);
        unaff_r8 = unaff_r8 + 2;
        *(int *)(unsigned)unaff_r8 = (int)((ulonglong)in_dr0 >> 0x20);
      }
      else {
        dVar29 = pdVar13[2];
        in_dr6 = pdVar13[3];
        unaff_r8[3] = in_dr6;
        unaff_r8[2] = dVar29;
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

__asm__(".globl _FUN_8c244ac2\n.set _FUN_8c244ac2, _FUN_8c244ac2_def\n");
