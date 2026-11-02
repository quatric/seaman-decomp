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
undefined4 FUN_8c240a66_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c240a66";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 80; for (int i_ = 0; i_ < 80; i_++) z_[i_] = 0; }
  short sVar1;
  ushort uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined1 *puVar5;
  double *pdVar6;
  double *ar6_00;
  undefined4 ar7_00;
  double *unaff_r8 = 0;
  double *pdVar7;
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
  double dVar17;
  float fVar18;
  uint uVar19;
  double in_dr4 = 0;
  double dVar20;
  double dVar21;
  undefined4 uVar22;
  undefined4 in_fr13 = 0;
  double dVar23;
  double in_dr14 = 0;
  double dVar24;
  double in_xd2 = 0;
  double in_xd12 = 0;
  bool bVar25;
  char cVar26;
  char cVar27;
  
  cVar27 = '\0';
  cVar26 = '\0';
  dVar23 = CONCAT44D(0x3b800000,in_fr13);
  ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x50))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 80)); noop_23d694(ar4,ar5,ar6,ar7); });
  iVar3 = (*(undefined4 *)(unsigned)(unsigned)0x8c4aa510);
  psVar14 = ((short *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x14));
  puVar11 = ((ushort *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 4));
  (*(uint *)(fr0_ - 0x30)) = (uint)*(ushort *)(unsigned)(ar4 + 2);
  (*(uint *)(fr0_ - 0x3c)) = 0;
  (*(int *)(fr0_ - 0x34)) = 0;
  do {
    uVar22 = SUB84(in_dr14,0);
    puVar12 = puVar11 + 1;
    (*(uint *)(fr0_ - 0x4c)) = (uint)*puVar11;
    if (cVar27 == '\0') {
      uVar22 = 0x3f800000;
    }
    if ((*puVar11 & 0x8000) != 0) {
      (*(uint *)(fr0_ - 0x4c)) = (*(uint *)(fr0_ - 0x4c)) & 0x7fff;
      if (cVar26 == '\0') {
        uVar4 = 0xbf800000;
      }
      else {
        uVar4 = (undefined4)((ulonglong)-CONCAT44D(0x3f800000,SUB84(in_dr4,0)) >> 0x20);
      }
      if (cVar27 == '\0') {
        uVar22 = uVar4;
      }
    }
    (*(int *)(fr0_ - 0x34)) = (*(int *)(fr0_ - 0x34)) + (*(uint *)(fr0_ - 0x4c));
    (*(uint *)(fr0_ - 0x4c)) = (*(uint *)(fr0_ - 0x4c)) - 2;
    puVar13 = puVar11 + 2;
    puVar11 = puVar11 + 3;
    pdVar8 = (double *)(unsigned)((uint)*puVar13 * 0x40 + iVar3);
    pdVar7 = (double *)(unsigned)((uint)*puVar12 * 0x40 + iVar3);
    pdVar9 = unaff_r8;
    if (cVar27 == '\0') {
      dVar23 = CONCAT44D((int)(D2U(dVar23) >> 0x20),*(undefined4 *)(unsigned)((int)pdVar8 + 4));
      in_dr14 = CONCAT44D(*(undefined4 *)(unsigned)(pdVar8 + 1),uVar22);
      in_dr4 = CONCAT44D(*(undefined4 *)(unsigned)((int)pdVar7 + 4),*(undefined4 *)(unsigned)(pdVar7 + 1));
      dVar24 = in_xd12;
    }
    else {
      in_dr4 = *(double *)(unsigned)((int)pdVar7 + 4);
      in_dr14 = pdVar8[1];
      dVar24 = *(double *)(unsigned)((int)pdVar8 + 4);
    }
    do {
      uVar2 = *puVar11;
      puVar11 = puVar11 + 1;
      pdVar10 = (double *)(unsigned)((uint)uVar2 * 0x40 + iVar3);
      if (cVar27 == '\0') {
        dVar17 = CONCAT44D(*(undefined4 *)(unsigned)(pdVar10 + 1),SUB84(dVar23,0));
      }
      else {
        dVar17 = pdVar10[1];
        in_xd2 = dVar24;
      }
      fVar18 = F32HI(in_dr14);
      if (cVar26 == '\0') {
        dVar17 = CONCAT44D(F32HI(dVar17) - fVar18,
                                  F32LO(dVar17) - F32HI(in_dr4));
      }
      else {
        dVar17 = (dVar17 - in_dr4) - in_dr14;
      }
      if (cVar27 == '\0') {
        in_dr0 = CONCAT44D((int)((ulonglong)in_dr0 >> 0x20),*(undefined4 *)(unsigned)((int)pdVar10 + 4)
                                 );
      }
      if (cVar26 == '\0') {
        in_dr0 = CONCAT44D((int)((ulonglong)in_dr0 >> 0x20),F32LO(in_dr0) - F32LO(dVar23)
                                 );
        fVar16 = F32LO(dVar17) * F32HI(dVar17);
      }
      else {
        in_dr0 = in_dr0 - dVar23;
        fVar16 = SUB84(dVar17 * dVar17,0);
      }
      dVar17 = in_dr14;
      if (cVar27 == '\0') {
        dVar17 = CONCAT44D(fVar18,fVar16);
      }
      if (cVar26 == '\0') {
        fVar18 = (F32HI(dVar17) - F32LO(in_dr4)) * F32LO(in_dr0);
        dVar17 = CONCAT44D(fVar18,F32LO(dVar17) - fVar18);
      }
      else {
        dVar17 = (dVar17 - in_dr4) * in_dr0;
        dVar17 = dVar17 - dVar17;
      }
      dVar20 = in_xd2;
      if (cVar27 == '\0') {
        dVar20 = CONCAT44D(SUB84(dVar17,0),SUB84(in_dr4,0));
      }
      if (cVar26 == '\0') {
        dVar20 = CONCAT44D(F32HI(dVar20) * F32LO(in_dr14),
                                  SUB84(dVar20,0));
      }
      else {
        dVar20 = dVar20 * in_dr14;
      }
      uVar19 = (uint)(D2U(dVar17) >> 0x20);
      fVar18 = F32HI(dVar20);
      if (pdVar9 < unaff_r8) {
        dVar17 = (double)((ulonglong)uVar19 << 0x20);
        if (cVar26 == '\0') {
          bVar25 = fVar18 < 0.0;
        }
        else {
          bVar25 = dVar20 < dVar17;
        }
        if (bVar25) {
          *(undefined4 *)(unsigned)pdVar8 = 0xe0000000;
          CacheBlockWriteBack(pdVar8);
          if (*(int *)(unsigned)((int)pdVar8 + 0x3c) != ar5) {
            *(int *)(unsigned)((int)pdVar8 + 0x3c) = ar5;
            puVar5 = ((undefined1 *)(unsigned)0x8c4c2620);
            uVar4 = 0;
            pdVar6 = pdVar8 + 6;
            pdVar7 = pdVar8 + 2;
            (vsp = ((unsigned long)(fr0_ - 80)), FUN_8c23bae2(((undefined1 *)(unsigned)0x8c4c2620),pdVar7,pdVar6,0));
            uVar22 = (vsp = ((unsigned long)(fr0_ - 80)), float_to_color_u8(puVar5,pdVar7,pdVar6,uVar4));
            *(undefined4 *)(unsigned)(pdVar8 + 5) = uVar22;
            if (cVar27 == '\0') {
              dVar20 = (double)(ulonglong)(*(undefined4 *)(unsigned)(unsigned)0x8c4c2634);
            }
            else {
              dVar20 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4c2634),(*(undefined4 *)(unsigned)(unsigned)0x8c4c2630));
            }
            uVar22 = (vsp = ((unsigned long)(fr0_ - 80)), float_to_color_u8(puVar5,pdVar7,pdVar6,uVar4));
            *(undefined4 *)(unsigned)((int)pdVar8 + 0x2c) = uVar22;
          }
          uVar22 = SUB84(in_dr0,0);
          dVar21 = dVar23;
          if (cVar27 == '\0') {
            dVar21 = CONCAT44D((int)(D2U(dVar23) >> 0x20),SUB84(dVar20,0));
          }
          uVar4 = (undefined4)(D2U(dVar17) >> 0x20);
          if (cVar26 == '\0') {
            dVar17 = CONCAT44D(uVar4,(float)(int)*psVar14 *
                                            F32HI(dVar21));
          }
          else {
            dVar17 = CONCAT44D(uVar4,(float)(int)*psVar14) * dVar21;
          }
          if (cVar27 == '\0') {
            *(int *)(unsigned)(pdVar8 + 4) = SUB84(dVar17,0);
          }
          else {
            pdVar8[4] = in_xd2;
          }
          sVar1 = psVar14[1];
          goto LAB_8c240e08;
        }
        *(undefined4 *)(unsigned)pdVar8 = 0xf0000000;
        CacheBlockWriteBack(pdVar8);
        if (*(int *)(unsigned)((int)pdVar8 + 0x3c) != ar5) {
          *(int *)(unsigned)((int)pdVar8 + 0x3c) = ar5;
          puVar5 = ((undefined1 *)(unsigned)0x8c4c2620);
          uVar4 = 0;
          pdVar6 = pdVar8 + 6;
          pdVar7 = pdVar8 + 2;
          (vsp = ((unsigned long)(fr0_ - 80)), FUN_8c23bae2(((undefined1 *)(unsigned)0x8c4c2620),pdVar7,pdVar6,0));
          uVar22 = (vsp = ((unsigned long)(fr0_ - 80)), float_to_color_u8(puVar5,pdVar7,pdVar6,uVar4));
          *(undefined4 *)(unsigned)(pdVar8 + 5) = uVar22;
          if (cVar27 == '\0') {
            dVar20 = (double)(ulonglong)(*(undefined4 *)(unsigned)(unsigned)0x8c4c2634);
          }
          else {
            dVar20 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4c2634),(*(undefined4 *)(unsigned)(unsigned)0x8c4c2630));
          }
          uVar22 = (vsp = ((unsigned long)(fr0_ - 80)), float_to_color_u8(puVar5,pdVar7,pdVar6,uVar4));
          *(undefined4 *)(unsigned)((int)pdVar8 + 0x2c) = uVar22;
        }
        dVar21 = dVar23;
        if (cVar27 == '\0') {
          dVar21 = CONCAT44D((int)(D2U(dVar23) >> 0x20),SUB84(dVar20,0));
        }
        uVar22 = (undefined4)(D2U(dVar17) >> 0x20);
        fVar18 = F32HI(dVar21);
        if (cVar26 == '\0') {
          dVar17 = CONCAT44D(uVar22,(float)(int)*psVar14 * fVar18);
        }
        else {
          dVar17 = CONCAT44D(uVar22,(float)(int)*psVar14) * dVar21;
        }
        if (cVar27 == '\0') {
          *(int *)(unsigned)(pdVar8 + 4) = SUB84(dVar17,0);
        }
        else {
          pdVar8[4] = in_xd2;
        }
        if (cVar26 == '\0') {
          fVar18 = (float)(int)psVar14[1] * fVar18;
        }
        else {
          fVar18 = SUB84(CONCAT44D((int)(D2U(dVar17) >> 0x20),(float)(int)psVar14[1]) *
                         dVar21,0);
        }
        if (cVar27 == '\0') {
          *(float *)(unsigned)((int)pdVar8 + 0x24) = fVar18;
        }
        else {
          *(double *)(unsigned)((int)pdVar8 + 0x24) = in_xd2;
        }
        CacheBlockWriteBack(pdVar8 + 4);
        if (cVar27 == '\0') {
          in_dr0 = CONCAT44D(*(undefined4 *)(unsigned)pdVar8,SUB84(in_dr0,0));
          dVar17 = CONCAT44D(*(undefined4 *)(unsigned)((int)pdVar8 + 4),fVar18);
          pdVar7 = pdVar8 + 1;
        }
        else {
          in_dr0 = *pdVar8;
          dVar17 = pdVar8[1];
          pdVar7 = pdVar8 + 2;
        }
        if (cVar27 == '\0') {
          uVar22 = *(undefined4 *)(unsigned)(pdVar7 + 2);
          dVar20 = CONCAT44D(uVar22,SUB84(dVar21,0));
          *(undefined4 *)(unsigned)((int)unaff_r8 + 0x1c) = *(undefined4 *)(unsigned)((int)pdVar7 + 0x14);
          *(undefined4 *)(unsigned)(unaff_r8 + 3) = uVar22;
          *(int *)(unsigned)((int)unaff_r8 + 0x14) = (int)(D2U(dVar17) >> 0x20);
          unaff_r8 = unaff_r8 + 2;
          *(int *)(unsigned)unaff_r8 = (int)((ulonglong)in_dr0 >> 0x20);
        }
        else {
          dVar20 = pdVar7[2];
          unaff_r8[3] = pdVar7[3];
          unaff_r8[2] = dVar20;
          unaff_r8[1] = dVar17;
          *unaff_r8 = in_dr0;
        }
        unaff_r8 = unaff_r8 + 4;
        (*(uint *)(fr0_ - 0x3c)) = (int)unaff_r8 + (*(uint *)(fr0_ - 0x3c)) + (0x20 - (int)pdVar9);
        pdVar9 = unaff_r8;
        psVar15 = psVar14;
      }
      else {
        dVar17 = (double)((ulonglong)uVar19 << 0x20);
        if (cVar26 == '\0') {
          bVar25 = fVar18 < 0.0;
        }
        else {
          bVar25 = dVar20 < dVar17;
        }
        psVar15 = psVar14 + 2;
        if (bVar25) {
          *(undefined4 *)(unsigned)pdVar7 = 0xe0000000;
          CacheBlockWriteBack(pdVar7);
          if (*(int *)(unsigned)((int)pdVar7 + 0x3c) != ar5) {
            *(int *)(unsigned)((int)pdVar7 + 0x3c) = ar5;
            puVar5 = ((undefined1 *)(unsigned)0x8c4c2620);
            uVar4 = 0;
            ar6_00 = pdVar7 + 6;
            pdVar6 = pdVar7 + 2;
            (vsp = ((unsigned long)(fr0_ - 80)), FUN_8c23bae2(((undefined1 *)(unsigned)0x8c4c2620),pdVar6,ar6_00,0));
            uVar22 = (vsp = ((unsigned long)(fr0_ - 80)), float_to_color_u8(puVar5,pdVar6,ar6_00,uVar4));
            *(undefined4 *)(unsigned)(pdVar7 + 5) = uVar22;
            if (cVar27 == '\0') {
              dVar20 = (double)(ulonglong)(*(undefined4 *)(unsigned)(unsigned)0x8c4c2634);
            }
            else {
              dVar20 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4c2634),(*(undefined4 *)(unsigned)(unsigned)0x8c4c2630));
            }
            uVar22 = (vsp = ((unsigned long)(fr0_ - 80)), float_to_color_u8(puVar5,pdVar6,ar6_00,uVar4));
            *(undefined4 *)(unsigned)((int)pdVar7 + 0x2c) = uVar22;
          }
          dVar21 = dVar23;
          if (cVar27 == '\0') {
            dVar21 = CONCAT44D((int)(D2U(dVar23) >> 0x20),SUB84(dVar20,0));
          }
          uVar22 = (undefined4)(D2U(dVar17) >> 0x20);
          fVar18 = F32HI(dVar21);
          if (cVar26 == '\0') {
            dVar17 = CONCAT44D(uVar22,(float)(int)*psVar14 * fVar18);
          }
          else {
            dVar17 = CONCAT44D(uVar22,(float)(int)*psVar14) * dVar21;
          }
          if (cVar27 == '\0') {
            *(int *)(unsigned)(pdVar7 + 4) = SUB84(dVar17,0);
          }
          else {
            pdVar7[4] = in_xd2;
          }
          if (cVar26 == '\0') {
            fVar18 = (float)(int)psVar14[1] * fVar18;
          }
          else {
            fVar18 = SUB84(CONCAT44D((int)(D2U(dVar17) >> 0x20),(float)(int)psVar14[1])
                           * dVar21,0);
          }
          if (cVar27 == '\0') {
            *(float *)(unsigned)((int)pdVar7 + 0x24) = fVar18;
          }
          else {
            *(double *)(unsigned)((int)pdVar7 + 0x24) = in_xd2;
          }
          CacheBlockWriteBack(pdVar7 + 4);
          if (cVar27 == '\0') {
            dVar17 = CONCAT44D(*(undefined4 *)(unsigned)pdVar7,SUB84(in_dr0,0));
            dVar20 = CONCAT44D(*(undefined4 *)(unsigned)((int)pdVar7 + 4),fVar18);
            pdVar7 = pdVar7 + 1;
          }
          else {
            dVar17 = *pdVar7;
            dVar20 = pdVar7[1];
            pdVar7 = pdVar7 + 2;
          }
          if (cVar27 == '\0') {
            uVar22 = *(undefined4 *)(unsigned)(pdVar7 + 2);
            dVar21 = CONCAT44D(uVar22,SUB84(dVar21,0));
            *(undefined4 *)(unsigned)((int)unaff_r8 + 0x1c) = *(undefined4 *)(unsigned)((int)pdVar7 + 0x14);
            *(undefined4 *)(unsigned)(unaff_r8 + 3) = uVar22;
            *(int *)(unsigned)((int)unaff_r8 + 0x14) = (int)(D2U(dVar20) >> 0x20);
            unaff_r8 = unaff_r8 + 2;
            *(int *)(unsigned)unaff_r8 = (int)(D2U(dVar17) >> 0x20);
          }
          else {
            dVar21 = pdVar7[2];
            unaff_r8[3] = pdVar7[3];
            unaff_r8[2] = dVar21;
            unaff_r8[1] = dVar20;
            *unaff_r8 = dVar17;
          }
          uVar19 = SUB84(dVar21,0);
          unaff_r8 = unaff_r8 + 4;
          *(undefined4 *)(unsigned)pdVar8 = 0xe0000000;
          CacheBlockWriteBack(pdVar8);
          if (*(int *)(unsigned)((int)pdVar8 + 0x3c) != ar5) {
            *(int *)(unsigned)((int)pdVar8 + 0x3c) = ar5;
            puVar5 = ((undefined1 *)(unsigned)0x8c4c2620);
            uVar4 = 0;
            pdVar6 = pdVar8 + 6;
            pdVar7 = pdVar8 + 2;
            (vsp = ((unsigned long)(fr0_ - 80)), FUN_8c23bae2(((undefined1 *)(unsigned)0x8c4c2620),pdVar7,pdVar6,0));
            uVar22 = (vsp = ((unsigned long)(fr0_ - 80)), float_to_color_u8(puVar5,pdVar7,pdVar6,uVar4));
            *(undefined4 *)(unsigned)(pdVar8 + 5) = uVar22;
            uVar19 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c2630);
            if (cVar27 == '\0') {
              uVar19 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c2634);
            }
            uVar22 = (vsp = ((unsigned long)(fr0_ - 80)), float_to_color_u8(puVar5,pdVar7,pdVar6,uVar4));
            *(undefined4 *)(unsigned)((int)pdVar8 + 0x2c) = uVar22;
          }
          uVar22 = SUB84(dVar17,0);
          dVar21 = dVar23;
          if (cVar27 == '\0') {
            dVar21 = CONCAT44D((int)(D2U(dVar23) >> 0x20),uVar19);
          }
          uVar4 = (undefined4)(D2U(dVar20) >> 0x20);
          fVar18 = (float)(int)psVar14[2];
          if (cVar26 == '\0') {
            dVar17 = CONCAT44D(uVar4,fVar18 * F32HI(dVar21));
          }
          else {
            dVar17 = CONCAT44D(uVar4,fVar18) * dVar21;
          }
          if (cVar27 == '\0') {
            *(int *)(unsigned)(pdVar8 + 4) = SUB84(dVar17,0);
          }
          else {
            pdVar8[4] = in_xd2;
          }
          sVar1 = psVar14[3];
          psVar14 = psVar14 + 2;
LAB_8c240e08:
          if (cVar26 == '\0') {
            fVar18 = (float)(int)sVar1 * F32HI(dVar21);
          }
          else {
            fVar18 = SUB84(CONCAT44D((int)(D2U(dVar17) >> 0x20),(float)(int)sVar1) *
                           dVar21,0);
          }
          if (cVar27 == '\0') {
            *(float *)(unsigned)((int)pdVar8 + 0x24) = fVar18;
          }
          else {
            *(double *)(unsigned)((int)pdVar8 + 0x24) = in_xd2;
          }
          CacheBlockWriteBack(pdVar8 + 4);
          if (cVar27 == '\0') {
            in_dr0 = CONCAT44D(*(undefined4 *)(unsigned)pdVar8,uVar22);
            dVar17 = CONCAT44D(*(undefined4 *)(unsigned)((int)pdVar8 + 4),fVar18);
            pdVar7 = pdVar8 + 1;
          }
          else {
            in_dr0 = *pdVar8;
            dVar17 = pdVar8[1];
            pdVar7 = pdVar8 + 2;
          }
          if (cVar27 == '\0') {
            uVar22 = *(undefined4 *)(unsigned)(pdVar7 + 2);
            dVar20 = CONCAT44D(uVar22,SUB84(dVar21,0));
            *(undefined4 *)(unsigned)((int)unaff_r8 + 0x1c) = *(undefined4 *)(unsigned)((int)pdVar7 + 0x14);
            *(undefined4 *)(unsigned)(unaff_r8 + 3) = uVar22;
            *(int *)(unsigned)((int)unaff_r8 + 0x14) = (int)(D2U(dVar17) >> 0x20);
            unaff_r8 = unaff_r8 + 2;
            *(int *)(unsigned)unaff_r8 = (int)((ulonglong)in_dr0 >> 0x20);
          }
          else {
            dVar20 = pdVar7[2];
            unaff_r8[3] = pdVar7[3];
            unaff_r8[2] = dVar20;
            unaff_r8[1] = dVar17;
            *unaff_r8 = in_dr0;
          }
          unaff_r8 = unaff_r8 + 4;
          psVar15 = psVar14 + 2;
        }
      }
      uVar22 = (undefined4)(D2U(dVar17) >> 0x20);
      if (cVar27 == '\0') {
        uVar4 = SUB84(dVar23,0);
        dVar23 = CONCAT44D((int)(D2U(dVar23) >> 0x20),*(undefined4 *)(unsigned)((int)pdVar10 + 4)
                                 );
        in_xd12 = dVar24;
        in_dr4 = CONCAT44D(uVar4,SUB84(dVar20,0));
      }
      else {
        in_xd12 = *(double *)(unsigned)((int)pdVar10 + 4);
        in_dr4 = dVar24;
      }
      uVar4 = 8;
      if (cVar27 == '\0') {
        in_dr4 = CONCAT44D((int)((ulonglong)in_dr4 >> 0x20),(int)((ulonglong)in_dr14 >> 0x20)
                                 );
        dVar24 = CONCAT44D(*(undefined4 *)(unsigned)(pdVar10 + 1),SUB84(in_dr14,0));
      }
      else {
        dVar24 = pdVar10[1];
      }
      (*(uint *)(fr0_ - 0x4c)) = (*(uint *)(fr0_ - 0x4c)) + -1;
      in_dr14 = CONCAT44D((int)(D2U(dVar24) >> 0x20),-SUB84(dVar24,0));
      pdVar7 = pdVar8;
      pdVar8 = pdVar10;
      psVar14 = psVar15;
      dVar24 = in_xd12;
    } while ((*(uint *)(fr0_ - 0x4c)) != 0);
    psVar14 = psVar15 + 4;
    if (pdVar9 < unaff_r8) {
      *(undefined4 *)(unsigned)pdVar10 = 0xf0000000;
      CacheBlockWriteBack(pdVar10);
      if (*(int *)(unsigned)((int)pdVar10 + 0x3c) != ar5) {
        *(int *)(unsigned)((int)pdVar10 + 0x3c) = ar5;
        puVar5 = ((undefined1 *)(unsigned)0x8c4c2620);
        ar7_00 = 0;
        pdVar8 = pdVar10 + 6;
        pdVar7 = pdVar10 + 2;
        (vsp = ((unsigned long)(fr0_ - 80)), FUN_8c23bae2(((undefined1 *)(unsigned)0x8c4c2620),pdVar7,pdVar8,0));
        uVar4 = (vsp = ((unsigned long)(fr0_ - 80)), float_to_color_u8(puVar5,pdVar7,pdVar8,ar7_00));
        *(undefined4 *)(unsigned)(pdVar10 + 5) = uVar4;
        if (cVar27 == '\0') {
          in_dr4 = (double)(ulonglong)(*(undefined4 *)(unsigned)(unsigned)0x8c4c2634);
        }
        else {
          in_dr4 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4c2634),(*(undefined4 *)(unsigned)(unsigned)0x8c4c2630));
        }
        uVar4 = (vsp = ((unsigned long)(fr0_ - 80)), float_to_color_u8(puVar5,pdVar7,pdVar8,ar7_00));
        *(undefined4 *)(unsigned)((int)pdVar10 + 0x2c) = uVar4;
      }
      dVar24 = dVar23;
      if (cVar27 == '\0') {
        dVar24 = CONCAT44D((int)(D2U(dVar23) >> 0x20),SUB84(in_dr4,0));
      }
      psVar14 = psVar15 + 2;
      fVar18 = F32HI(dVar24);
      if (cVar26 == '\0') {
        dVar17 = CONCAT44D(uVar22,(float)(int)*psVar15 * fVar18);
      }
      else {
        dVar17 = CONCAT44D(uVar22,(float)(int)*psVar15) * dVar24;
      }
      if (cVar27 == '\0') {
        *(int *)(unsigned)(pdVar10 + 4) = SUB84(dVar17,0);
      }
      else {
        pdVar10[4] = in_xd2;
      }
      if (cVar26 == '\0') {
        fVar18 = (float)(int)psVar15[1] * fVar18;
      }
      else {
        fVar18 = SUB84(CONCAT44D((int)(D2U(dVar17) >> 0x20),(float)(int)psVar15[1]) *
                       dVar24,0);
      }
      if (cVar27 == '\0') {
        *(float *)(unsigned)((int)pdVar10 + 0x24) = fVar18;
      }
      else {
        *(double *)(unsigned)((int)pdVar10 + 0x24) = in_xd2;
      }
      CacheBlockWriteBack(pdVar10 + 4);
      if (cVar27 == '\0') {
        in_dr0 = CONCAT44D(*(undefined4 *)(unsigned)pdVar10,SUB84(in_dr0,0));
        dVar17 = CONCAT44D(*(undefined4 *)(unsigned)((int)pdVar10 + 4),fVar18);
        pdVar10 = pdVar10 + 1;
      }
      else {
        in_dr0 = *pdVar10;
        dVar17 = pdVar10[1];
        pdVar10 = pdVar10 + 2;
      }
      if (cVar27 == '\0') {
        uVar22 = *(undefined4 *)(unsigned)(pdVar10 + 2);
        in_dr4 = CONCAT44D(uVar22,SUB84(dVar24,0));
        *(undefined4 *)(unsigned)((int)unaff_r8 + 0x1c) = *(undefined4 *)(unsigned)((int)pdVar10 + 0x14);
        *(undefined4 *)(unsigned)(unaff_r8 + 3) = uVar22;
        *(int *)(unsigned)((int)unaff_r8 + 0x14) = (int)(D2U(dVar17) >> 0x20);
        unaff_r8 = unaff_r8 + 2;
        *(int *)(unsigned)unaff_r8 = (int)((ulonglong)in_dr0 >> 0x20);
      }
      else {
        in_dr4 = pdVar10[2];
        unaff_r8[3] = pdVar10[3];
        unaff_r8[2] = in_dr4;
        unaff_r8[1] = dVar17;
        *unaff_r8 = in_dr0;
      }
      unaff_r8 = unaff_r8 + 4;
      (*(uint *)(fr0_ - 0x3c)) = (int)unaff_r8 + (*(uint *)(fr0_ - 0x3c)) + (0x20 - (int)pdVar9);
    }
    (*(uint *)(fr0_ - 0x30)) = (*(uint *)(fr0_ - 0x30)) - 1;
    if ((*(uint *)(fr0_ - 0x30)) == 0) {
      (*(undefined4 *)(unsigned)(unsigned)0x8c4aa520) = (*(undefined4 *)(unsigned)(unsigned)0x8c4aa520) + ((*(uint *)(fr0_ - 0x3c)) >> 5);
      (*(undefined4 *)(unsigned)(unsigned)0x8c4aa51c) = (*(undefined4 *)(unsigned)(unsigned)0x8c4aa51c) + (*(int *)(fr0_ - 0x34));
      return uVar4;
    }
  } while( true );
}

__asm__(".globl _FUN_8c240a66\n.set _FUN_8c240a66, _FUN_8c240a66_def\n");
