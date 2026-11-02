#include "../decls.h"
undefined4 FUN_8c241114_def(int ar4,double *ar5,undefined4 ar6,undefined4 ar7)

{
  ushort uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  double *ar5_00;
  double *unaff_r8;
  double *pdVar6;
  double *ar4_00;
  double *pdVar7;
  double *pdVar8;
  ushort *puVar9;
  ushort *puVar10;
  ushort *puVar11;
  short *psVar12;
  short *psVar13;
  undefined4 uVar14;
  double in_dr0;
  float fVar15;
  double dVar16;
  float fVar18;
  double dVar17;
  double in_dr4;
  double dVar19;
  undefined4 uVar20;
  undefined4 in_fr13;
  double dVar21;
  double in_dr14;
  double dVar22;
  double in_xd2;
  double in_xd12;
  bool bVar23;
  char cVar24;
  char cVar25;
  undefined4 in_stack_ffffffbc;
  uint uStack_3c;
  int iStack_34;
  uint uStack_30;
  
  cVar25 = '\0';
  cVar24 = '\0';
  dVar21 = (double)CONCAT44(0x3b800000,in_fr13);
  noop_23d694(ar4,ar5,ar6,ar7,in_stack_ffffffbc);
  iVar2 = _DAT_8c4aa510;
  psVar12 = *(short **)(ar4 + 0x14);
  puVar9 = *(ushort **)(ar4 + 4);
  uStack_30 = (uint)*(ushort *)(ar4 + 2);
  uStack_3c = 0;
  iStack_34 = 0;
  do {
    uVar20 = SUB84(in_dr14,0);
    puVar10 = puVar9 + 1;
    uVar5 = (uint)*puVar9;
    if (cVar25 == '\0') {
      uVar20 = 0x3f800000;
    }
    if ((*puVar9 & 0x8000) != 0) {
      uVar5 = uVar5 & 0x7fff;
      if (cVar24 == '\0') {
        uVar3 = 0xbf800000;
      }
      else {
        uVar3 = (undefined4)((ulonglong)-(double)CONCAT44(0x3f800000,SUB84(in_dr4,0)) >> 0x20);
      }
      if (cVar25 == '\0') {
        uVar20 = uVar3;
      }
    }
    iStack_34 = iStack_34 + uVar5;
    iVar4 = uVar5 - 2;
    puVar11 = puVar9 + 2;
    puVar9 = puVar9 + 3;
    ar4_00 = (double *)((uint)*puVar11 * 0x40 + iVar2);
    pdVar6 = (double *)((uint)*puVar10 * 0x40 + iVar2);
    pdVar7 = unaff_r8;
    if (cVar25 == '\0') {
      dVar21 = (double)CONCAT44((int)((ulonglong)dVar21 >> 0x20),*(undefined4 *)((int)ar4_00 + 4));
      in_dr14 = (double)CONCAT44(*(undefined4 *)(ar4_00 + 1),uVar20);
      in_dr4 = (double)CONCAT44(*(undefined4 *)((int)pdVar6 + 4),*(undefined4 *)(pdVar6 + 1));
      dVar22 = in_xd12;
    }
    else {
      in_dr4 = *(double *)((int)pdVar6 + 4);
      in_dr14 = ar4_00[1];
      dVar22 = *(double *)((int)ar4_00 + 4);
    }
    do {
      uVar1 = *puVar9;
      puVar9 = puVar9 + 1;
      pdVar8 = (double *)((uint)uVar1 * 0x40 + iVar2);
      if (cVar25 == '\0') {
        dVar16 = (double)CONCAT44(*(undefined4 *)(pdVar8 + 1),SUB84(dVar21,0));
      }
      else {
        dVar16 = pdVar8[1];
        in_xd2 = dVar22;
      }
      fVar18 = (float)((ulonglong)in_dr14 >> 0x20);
      if (cVar24 == '\0') {
        dVar16 = (double)CONCAT44((float)((ulonglong)dVar16 >> 0x20) - fVar18,
                                  SUB84(dVar16,0) - (float)((ulonglong)in_dr4 >> 0x20));
      }
      else {
        dVar16 = (dVar16 - in_dr4) - in_dr14;
      }
      if (cVar25 == '\0') {
        in_dr0 = (double)CONCAT44((int)((ulonglong)in_dr0 >> 0x20),*(undefined4 *)((int)pdVar8 + 4))
        ;
      }
      if (cVar24 == '\0') {
        in_dr0 = (double)CONCAT44((int)((ulonglong)in_dr0 >> 0x20),SUB84(in_dr0,0) - SUB84(dVar21,0)
                                 );
        fVar15 = SUB84(dVar16,0) * (float)((ulonglong)dVar16 >> 0x20);
      }
      else {
        in_dr0 = in_dr0 - dVar21;
        fVar15 = SUB84(dVar16 * dVar16,0);
      }
      dVar16 = in_dr14;
      if (cVar25 == '\0') {
        dVar16 = (double)CONCAT44(fVar18,fVar15);
      }
      if (cVar24 == '\0') {
        fVar18 = ((float)((ulonglong)dVar16 >> 0x20) - SUB84(in_dr4,0)) * SUB84(in_dr0,0);
        dVar16 = (double)CONCAT44(fVar18,SUB84(dVar16,0) - fVar18);
      }
      else {
        dVar16 = (dVar16 - in_dr4) * in_dr0;
        dVar16 = dVar16 - dVar16;
      }
      dVar19 = in_xd2;
      if (cVar25 == '\0') {
        dVar19 = (double)CONCAT44(SUB84(dVar16,0),SUB84(in_dr4,0));
      }
      if (cVar24 == '\0') {
        dVar19 = (double)CONCAT44((float)((ulonglong)dVar19 >> 0x20) * SUB84(in_dr14,0),
                                  SUB84(dVar19,0));
      }
      else {
        dVar19 = dVar19 * in_dr14;
      }
      uVar5 = (uint)((ulonglong)dVar16 >> 0x20);
      fVar18 = (float)((ulonglong)dVar19 >> 0x20);
      if (pdVar7 < unaff_r8) {
        dVar16 = (double)((ulonglong)uVar5 << 0x20);
        if (cVar24 == '\0') {
          bVar23 = fVar18 < 0.0;
        }
        else {
          bVar23 = dVar19 < dVar16;
        }
        if (bVar23) {
          *(undefined4 *)ar4_00 = 0xe0000000;
          CacheBlockWriteBack(ar4_00);
          uVar20 = _DAT_8c4c11b0;
          if (cVar25 == '\0') {
            uVar20 = _DAT_8c4c11b4;
          }
          uVar3 = float_to_color_u8(ar4_00,ar5,ar6,ar7);
          uVar14 = SUB84(in_dr0,0);
          dVar19 = dVar21;
          if (cVar25 == '\0') {
            dVar19 = (double)CONCAT44((int)((ulonglong)dVar21 >> 0x20),uVar20);
          }
          psVar13 = psVar12 + 2;
          *(undefined4 *)(ar4_00 + 5) = uVar3;
          ar5 = (double *)(psVar12 + 1);
          uVar20 = (undefined4)((ulonglong)dVar16 >> 0x20);
          fVar18 = (float)((ulonglong)dVar19 >> 0x20);
          if (cVar24 == '\0') {
            dVar16 = (double)CONCAT44(uVar20,(float)(int)*psVar12 * fVar18);
          }
          else {
            dVar16 = (double)CONCAT44(uVar20,(float)(int)*psVar12) * dVar19;
          }
          if (cVar25 == '\0') {
            *(int *)(ar4_00 + 4) = SUB84(dVar16,0);
          }
          else {
            ar4_00[4] = in_xd2;
          }
          if (cVar24 == '\0') {
            fVar18 = (float)(int)*(short *)ar5 * fVar18;
          }
          else {
            fVar18 = SUB84((double)CONCAT44((int)((ulonglong)dVar16 >> 0x20),
                                            (float)(int)*(short *)ar5) * dVar19,0);
          }
          if (cVar25 == '\0') {
            *(float *)((int)ar4_00 + 0x24) = fVar18;
          }
          else {
            *(double *)((int)ar4_00 + 0x24) = in_xd2;
          }
          goto LAB_8c24139c;
        }
        *(undefined4 *)ar4_00 = 0xf0000000;
        CacheBlockWriteBack(ar4_00);
        uVar20 = _DAT_8c4c11b0;
        if (cVar25 == '\0') {
          uVar20 = _DAT_8c4c11b4;
        }
        uVar3 = float_to_color_u8(ar4_00,ar5,ar6,ar7);
        dVar19 = dVar21;
        if (cVar25 == '\0') {
          dVar19 = (double)CONCAT44((int)((ulonglong)dVar21 >> 0x20),uVar20);
        }
        *(undefined4 *)(ar4_00 + 5) = uVar3;
        ar5 = (double *)(psVar12 + 1);
        uVar20 = (undefined4)((ulonglong)dVar16 >> 0x20);
        fVar18 = (float)((ulonglong)dVar19 >> 0x20);
        if (cVar24 == '\0') {
          dVar16 = (double)CONCAT44(uVar20,(float)(int)*psVar12 * fVar18);
        }
        else {
          dVar16 = (double)CONCAT44(uVar20,(float)(int)*psVar12) * dVar19;
        }
        if (cVar25 == '\0') {
          *(int *)(ar4_00 + 4) = SUB84(dVar16,0);
        }
        else {
          ar4_00[4] = in_xd2;
        }
        if (cVar24 == '\0') {
          fVar18 = (float)(int)*(short *)ar5 * fVar18;
        }
        else {
          fVar18 = SUB84((double)CONCAT44((int)((ulonglong)dVar16 >> 0x20),(float)(int)*(short *)ar5
                                         ) * dVar19,0);
        }
        if (cVar25 == '\0') {
          *(float *)((int)ar4_00 + 0x24) = fVar18;
        }
        else {
          *(double *)((int)ar4_00 + 0x24) = in_xd2;
        }
        CacheBlockWriteBack(ar4_00 + 4);
        if (cVar25 == '\0') {
          in_dr0 = (double)CONCAT44(*(undefined4 *)ar4_00,SUB84(in_dr0,0));
          dVar16 = (double)CONCAT44(*(undefined4 *)((int)ar4_00 + 4),fVar18);
          pdVar6 = ar4_00 + 1;
        }
        else {
          in_dr0 = *ar4_00;
          dVar16 = ar4_00[1];
          pdVar6 = ar4_00 + 2;
        }
        if (cVar25 == '\0') {
          uVar20 = *(undefined4 *)(pdVar6 + 2);
          dVar19 = (double)CONCAT44(uVar20,SUB84(dVar19,0));
          *(undefined4 *)((int)unaff_r8 + 0x1c) = *(undefined4 *)((int)pdVar6 + 0x14);
          *(undefined4 *)(unaff_r8 + 3) = uVar20;
          *(int *)((int)unaff_r8 + 0x14) = (int)((ulonglong)dVar16 >> 0x20);
          unaff_r8 = unaff_r8 + 2;
          *(int *)unaff_r8 = (int)((ulonglong)in_dr0 >> 0x20);
        }
        else {
          dVar19 = pdVar6[2];
          unaff_r8[3] = pdVar6[3];
          unaff_r8[2] = dVar19;
          unaff_r8[1] = dVar16;
          *unaff_r8 = in_dr0;
        }
        unaff_r8 = unaff_r8 + 4;
        uStack_3c = (int)unaff_r8 + uStack_3c + (0x20 - (int)pdVar7);
        pdVar7 = unaff_r8;
        psVar13 = psVar12;
      }
      else {
        dVar16 = (double)((ulonglong)uVar5 << 0x20);
        if (cVar24 == '\0') {
          bVar23 = fVar18 < 0.0;
        }
        else {
          bVar23 = dVar19 < dVar16;
        }
        psVar13 = psVar12 + 2;
        if (bVar23) {
          *(undefined4 *)pdVar6 = 0xe0000000;
          CacheBlockWriteBack(pdVar6);
          uVar20 = _DAT_8c4c11b0;
          if (cVar25 == '\0') {
            uVar20 = _DAT_8c4c11b4;
          }
          uVar3 = float_to_color_u8(pdVar6,ar5,ar6,ar7);
          dVar19 = dVar21;
          if (cVar25 == '\0') {
            dVar19 = (double)CONCAT44((int)((ulonglong)dVar21 >> 0x20),uVar20);
          }
          *(undefined4 *)(pdVar6 + 5) = uVar3;
          uVar20 = (undefined4)((ulonglong)dVar16 >> 0x20);
          fVar18 = (float)((ulonglong)dVar19 >> 0x20);
          if (cVar24 == '\0') {
            dVar16 = (double)CONCAT44(uVar20,(float)(int)*psVar12 * fVar18);
          }
          else {
            dVar16 = (double)CONCAT44(uVar20,(float)(int)*psVar12) * dVar19;
          }
          if (cVar25 == '\0') {
            *(int *)(pdVar6 + 4) = SUB84(dVar16,0);
          }
          else {
            pdVar6[4] = in_xd2;
          }
          ar5_00 = (double *)((int)pdVar6 + 0x24);
          if (cVar24 == '\0') {
            fVar18 = (float)(int)psVar12[1] * fVar18;
          }
          else {
            fVar18 = SUB84((double)CONCAT44((int)((ulonglong)dVar16 >> 0x20),(float)(int)psVar12[1])
                           * dVar19,0);
          }
          if (cVar25 == '\0') {
            *(float *)ar5_00 = fVar18;
          }
          else {
            *ar5_00 = in_xd2;
          }
          CacheBlockWriteBack(pdVar6 + 4);
          if (cVar25 == '\0') {
            dVar16 = (double)CONCAT44(*(undefined4 *)pdVar6,SUB84(in_dr0,0));
            dVar17 = (double)CONCAT44(*(undefined4 *)((int)pdVar6 + 4),fVar18);
            pdVar6 = pdVar6 + 1;
          }
          else {
            dVar16 = *pdVar6;
            dVar17 = pdVar6[1];
            pdVar6 = pdVar6 + 2;
          }
          if (cVar25 == '\0') {
            uVar20 = *(undefined4 *)(pdVar6 + 2);
            *(undefined4 *)((int)unaff_r8 + 0x1c) = *(undefined4 *)((int)pdVar6 + 0x14);
            *(undefined4 *)(unaff_r8 + 3) = uVar20;
            *(int *)((int)unaff_r8 + 0x14) = (int)((ulonglong)dVar17 >> 0x20);
            unaff_r8 = unaff_r8 + 2;
            *(int *)unaff_r8 = (int)((ulonglong)dVar16 >> 0x20);
          }
          else {
            dVar19 = pdVar6[2];
            unaff_r8[3] = pdVar6[3];
            unaff_r8[2] = dVar19;
            unaff_r8[1] = dVar17;
            *unaff_r8 = dVar16;
          }
          unaff_r8 = unaff_r8 + 4;
          *(undefined4 *)ar4_00 = 0xe0000000;
          CacheBlockWriteBack(ar4_00);
          uVar20 = _DAT_8c4c11b0;
          if (cVar25 == '\0') {
            uVar20 = _DAT_8c4c11b4;
          }
          uVar3 = float_to_color_u8(ar4_00,ar5_00,ar6,ar7);
          uVar14 = SUB84(dVar16,0);
          dVar19 = dVar21;
          if (cVar25 == '\0') {
            dVar19 = (double)CONCAT44((int)((ulonglong)dVar21 >> 0x20),uVar20);
          }
          psVar13 = psVar12 + 4;
          *(undefined4 *)(ar4_00 + 5) = uVar3;
          uVar20 = (undefined4)((ulonglong)dVar17 >> 0x20);
          fVar18 = (float)((ulonglong)dVar19 >> 0x20);
          if (cVar24 == '\0') {
            dVar16 = (double)CONCAT44(uVar20,(float)(int)psVar12[2] * fVar18);
          }
          else {
            dVar16 = (double)CONCAT44(uVar20,(float)(int)psVar12[2]) * dVar19;
          }
          if (cVar25 == '\0') {
            *(int *)(ar4_00 + 4) = SUB84(dVar16,0);
          }
          else {
            ar4_00[4] = in_xd2;
          }
          ar5 = (double *)((int)ar4_00 + 0x24);
          if (cVar24 == '\0') {
            fVar18 = (float)(int)psVar12[3] * fVar18;
          }
          else {
            fVar18 = SUB84((double)CONCAT44((int)((ulonglong)dVar16 >> 0x20),(float)(int)psVar12[3])
                           * dVar19,0);
          }
          if (cVar25 == '\0') {
            *(float *)ar5 = fVar18;
          }
          else {
            *ar5 = in_xd2;
          }
LAB_8c24139c:
          CacheBlockWriteBack(ar4_00 + 4);
          if (cVar25 == '\0') {
            in_dr0 = (double)CONCAT44(*(undefined4 *)ar4_00,uVar14);
            dVar16 = (double)CONCAT44(*(undefined4 *)((int)ar4_00 + 4),fVar18);
            pdVar6 = ar4_00 + 1;
          }
          else {
            in_dr0 = *ar4_00;
            dVar16 = ar4_00[1];
            pdVar6 = ar4_00 + 2;
          }
          if (cVar25 == '\0') {
            uVar20 = *(undefined4 *)(pdVar6 + 2);
            dVar19 = (double)CONCAT44(uVar20,SUB84(dVar19,0));
            *(undefined4 *)((int)unaff_r8 + 0x1c) = *(undefined4 *)((int)pdVar6 + 0x14);
            *(undefined4 *)(unaff_r8 + 3) = uVar20;
            *(int *)((int)unaff_r8 + 0x14) = (int)((ulonglong)dVar16 >> 0x20);
            unaff_r8 = unaff_r8 + 2;
            *(int *)unaff_r8 = (int)((ulonglong)in_dr0 >> 0x20);
          }
          else {
            dVar19 = pdVar6[2];
            unaff_r8[3] = pdVar6[3];
            unaff_r8[2] = dVar19;
            unaff_r8[1] = dVar16;
            *unaff_r8 = in_dr0;
          }
          unaff_r8 = unaff_r8 + 4;
        }
      }
      uVar20 = (undefined4)((ulonglong)dVar16 >> 0x20);
      if (cVar25 == '\0') {
        uVar3 = SUB84(dVar21,0);
        dVar21 = (double)CONCAT44((int)((ulonglong)dVar21 >> 0x20),*(undefined4 *)((int)pdVar8 + 4))
        ;
        in_xd12 = dVar22;
        in_dr4 = (double)CONCAT44(uVar3,SUB84(dVar19,0));
      }
      else {
        in_xd12 = *(double *)((int)pdVar8 + 4);
        in_dr4 = dVar22;
      }
      uVar3 = 8;
      if (cVar25 == '\0') {
        in_dr4 = (double)CONCAT44((int)((ulonglong)in_dr4 >> 0x20),(int)((ulonglong)in_dr14 >> 0x20)
                                 );
        dVar22 = (double)CONCAT44(*(undefined4 *)(pdVar8 + 1),SUB84(in_dr14,0));
      }
      else {
        dVar22 = pdVar8[1];
      }
      iVar4 = iVar4 + -1;
      in_dr14 = (double)CONCAT44((int)((ulonglong)dVar22 >> 0x20),-SUB84(dVar22,0));
      pdVar6 = ar4_00;
      ar4_00 = pdVar8;
      psVar12 = psVar13;
      dVar22 = in_xd12;
    } while (iVar4 != 0);
    psVar12 = psVar13 + 4;
    if (pdVar7 < unaff_r8) {
      *(undefined4 *)pdVar8 = 0xf0000000;
      CacheBlockWriteBack(pdVar8);
      uVar14 = _DAT_8c4c11b0;
      if (cVar25 == '\0') {
        uVar14 = _DAT_8c4c11b4;
      }
      uVar3 = float_to_color_u8(pdVar8,ar5,ar6,ar7);
      dVar22 = dVar21;
      if (cVar25 == '\0') {
        dVar22 = (double)CONCAT44((int)((ulonglong)dVar21 >> 0x20),uVar14);
      }
      *(undefined4 *)(pdVar8 + 5) = uVar3;
      ar5 = (double *)(psVar13 + 1);
      psVar12 = psVar13 + 2;
      fVar18 = (float)((ulonglong)dVar22 >> 0x20);
      if (cVar24 == '\0') {
        dVar16 = (double)CONCAT44(uVar20,(float)(int)*psVar13 * fVar18);
      }
      else {
        dVar16 = (double)CONCAT44(uVar20,(float)(int)*psVar13) * dVar22;
      }
      if (cVar25 == '\0') {
        *(int *)(pdVar8 + 4) = SUB84(dVar16,0);
      }
      else {
        pdVar8[4] = in_xd2;
      }
      if (cVar24 == '\0') {
        fVar18 = (float)(int)*(short *)ar5 * fVar18;
      }
      else {
        fVar18 = SUB84((double)CONCAT44((int)((ulonglong)dVar16 >> 0x20),(float)(int)*(short *)ar5)
                       * dVar22,0);
      }
      if (cVar25 == '\0') {
        *(float *)((int)pdVar8 + 0x24) = fVar18;
      }
      else {
        *(double *)((int)pdVar8 + 0x24) = in_xd2;
      }
      CacheBlockWriteBack(pdVar8 + 4);
      if (cVar25 == '\0') {
        in_dr0 = (double)CONCAT44(*(undefined4 *)pdVar8,SUB84(in_dr0,0));
        dVar16 = (double)CONCAT44(*(undefined4 *)((int)pdVar8 + 4),fVar18);
        pdVar8 = pdVar8 + 1;
      }
      else {
        in_dr0 = *pdVar8;
        dVar16 = pdVar8[1];
        pdVar8 = pdVar8 + 2;
      }
      if (cVar25 == '\0') {
        uVar20 = *(undefined4 *)(pdVar8 + 2);
        in_dr4 = (double)CONCAT44(uVar20,SUB84(dVar22,0));
        *(undefined4 *)((int)unaff_r8 + 0x1c) = *(undefined4 *)((int)pdVar8 + 0x14);
        *(undefined4 *)(unaff_r8 + 3) = uVar20;
        *(int *)((int)unaff_r8 + 0x14) = (int)((ulonglong)dVar16 >> 0x20);
        unaff_r8 = unaff_r8 + 2;
        *(int *)unaff_r8 = (int)((ulonglong)in_dr0 >> 0x20);
      }
      else {
        in_dr4 = pdVar8[2];
        unaff_r8[3] = pdVar8[3];
        unaff_r8[2] = in_dr4;
        unaff_r8[1] = dVar16;
        *unaff_r8 = in_dr0;
      }
      unaff_r8 = unaff_r8 + 4;
      uStack_3c = (int)unaff_r8 + uStack_3c + (0x20 - (int)pdVar7);
    }
    uStack_30 = uStack_30 - 1;
    if (uStack_30 == 0) {
      _DAT_8c4aa520 = _DAT_8c4aa520 + (uStack_3c >> 5);
      _DAT_8c4aa51c = _DAT_8c4aa51c + iStack_34;
      return uVar3;
    }
  } while( true );
}

__asm__(".globl _FUN_8c241114\n.set _FUN_8c241114, _FUN_8c241114_def\n");
