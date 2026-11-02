#include "../decls.h"
double * FUN_8c22c838_def(short *ar4,float ar5,uint ar6,double *ar7)

{
  bool bVar1;
  short *psVar2;
  double *pdVar3;
  double *pdVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  double *ar6_00;
  short *psVar9;
  double *ar5_00;
  float fVar10;
  double in_dr0;
  double dVar11;
  undefined4 uVar12;
  double in_dr4;
  float fVar14;
  double dVar13;
  undefined4 uVar15;
  undefined4 uVar16;
  double in_dr6;
  float fVar17;
  undefined4 uVar18;
  double in_dr8;
  double dVar19;
  undefined4 uVar21;
  double in_dr12;
  float fVar22;
  double in_dr14;
  double in_xd0;
  double in_xd2;
  double in_xd4;
  double in_xd6;
  double dVar23;
  double in_xd12;
  bool bVar24;
  char cVar25;
  char cVar26;
  short *psStack_4c;
  float fStack_44;
  float fStack_40;
  uint uStack_3c;
  float fStack_34;
  undefined4 uVar20;
  
  cVar26 = '\0';
  cVar25 = '\0';
  fVar14 = (float)((ulonglong)in_dr4 >> 0x20);
  uStack_3c = ar6 & 0x3fff;
  iVar6 = 0;
  fStack_34 = 1.0;
  iVar7 = 0;
  psStack_4c = ar4;
  fStack_40 = ar5;
  if ((_DAT_8c4aa4f0 & 0x80000000) != 0) {
    fStack_34 = -1.0;
  }
  do {
    fVar22 = SUB84(in_dr14,0);
    iVar8 = (int)*psStack_4c;
    pdVar3 = (double *)(psStack_4c[1] * 0x20 + (int)fStack_40);
    if (cVar26 == '\0') {
      fVar22 = fStack_34;
    }
    if (iVar8 < 0) {
      fVar22 = -fVar22;
      iVar8 = -iVar8;
    }
    iVar7 = iVar7 + iVar8;
    iVar8 = iVar8 + -2;
    if (cVar26 == '\0') {
      in_dr6 = (double)CONCAT44(fVar14,SUB84(in_dr6,0));
    }
    else {
      in_dr6 = (double)CONCAT44(fStack_44,fVar14);
    }
    iVar5 = 0;
    dVar13 = in_xd2;
    if (cVar26 == '\0') {
      dVar13 = (double)CONCAT44((float)(int)psStack_4c[2],SUB84(in_dr4,0));
    }
    psVar9 = psStack_4c + 5;
    fVar17 = (float)((ulonglong)in_dr6 >> 0x20);
    if (cVar25 == '\0') {
      dVar13 = (double)CONCAT44((float)((ulonglong)dVar13 >> 0x20) * fVar17,SUB84(dVar13,0));
    }
    else {
      dVar13 = dVar13 * in_dr6;
    }
    dVar19 = in_xd2;
    if (cVar26 == '\0') {
      dVar13 = (double)CONCAT44((int)((ulonglong)dVar13 >> 0x20),(float)(int)psStack_4c[3]);
      dVar19 = in_xd4;
    }
    in_xd4 = dVar19;
    if (cVar25 == '\0') {
      in_dr4 = (double)CONCAT44((int)((ulonglong)dVar13 >> 0x20),SUB84(dVar13,0) * fVar17);
    }
    else {
      in_dr4 = dVar13 * in_dr6;
    }
    ar5_00 = (double *)(psStack_4c[4] * 0x20 + (int)fStack_40);
    psVar2 = psStack_4c + 6;
    psStack_4c = psStack_4c + 7;
    dVar13 = in_xd2;
    if (cVar26 == '\0') {
      dVar13 = (double)CONCAT44((float)(int)*psVar9,fVar22);
    }
    if (cVar25 == '\0') {
      in_dr14 = (double)CONCAT44((float)((ulonglong)dVar13 >> 0x20) * fVar17,SUB84(dVar13,0));
    }
    else {
      in_dr14 = dVar13 * in_dr6;
    }
    dVar13 = in_xd2;
    if (cVar26 == '\0') {
      in_dr12 = (double)CONCAT44((int)((ulonglong)in_dr12 >> 0x20),(float)(int)*psVar2);
      dVar13 = in_xd12;
    }
    dVar19 = in_xd0;
    if (cVar25 == '\0') {
      in_dr12 = (double)(ulonglong)(uint)(SUB84(in_dr12,0) * fVar17);
    }
    else {
      in_dr12 = in_dr12 * in_dr6;
    }
    do {
      ar6_00 = (double *)(*psStack_4c * 0x20 + (int)fStack_40);
      if (cVar26 == '\0') {
        fStack_44 = fVar14;
      }
      dVar11 = (double)CONCAT44(fStack_44,(float)(int)psStack_4c[1]);
      if (cVar25 == '\0') {
        dVar11 = (double)CONCAT44(fStack_44,(float)(int)psStack_4c[1] * fStack_44);
      }
      else {
        dVar11 = dVar11 * dVar11;
      }
      if (cVar26 == '\0') {
        fStack_44 = SUB84(dVar11,0);
      }
      else {
        fStack_44 = SUB84(in_xd2,0);
        fStack_40 = (float)((ulonglong)in_xd2 >> 0x20);
      }
      fVar22 = (float)((ulonglong)dVar11 >> 0x20);
      uVar12 = (undefined4)((ulonglong)in_dr0 >> 0x20);
      in_dr0 = (double)CONCAT44(uVar12,(float)(int)psStack_4c[2]);
      dVar11 = dVar19;
      if (cVar26 == '\0') {
        dVar11 = (double)CONCAT44((float)(int)psStack_4c[2],SUB84(in_dr12,0));
      }
      if (cVar25 == '\0') {
        in_dr12 = (double)CONCAT44((float)((ulonglong)dVar11 >> 0x20) * fVar22,SUB84(dVar11,0));
      }
      else {
        in_dr12 = dVar11 * (double)CONCAT44(fVar22,0x3f800000);
      }
      if (cVar26 == '\0') {
        dVar11 = (double)CONCAT44(*(undefined4 *)pdVar3,0x3f800000);
      }
      else {
        dVar11 = *pdVar3;
      }
      bVar1 = false;
      if (cVar25 != '\0' || (float)((ulonglong)dVar11 >> 0x20) <= SUB84(dVar11,0)) {
LAB_8c22c982:
        bVar1 = true;
        in_dr6 = (double)CONCAT44(0x3f800000,SUB84(in_dr6,0));
        in_xd0 = dVar19;
      }
      else {
        if (cVar26 == '\0') {
          dVar11 = (double)CONCAT44(*(undefined4 *)ar5_00,SUB84(dVar11,0));
        }
        else {
          dVar11 = *ar5_00;
        }
        if (cVar25 != '\0' || (float)((ulonglong)dVar11 >> 0x20) <= SUB84(dVar11,0))
        goto LAB_8c22c982;
        if (cVar26 == '\0') {
          fVar22 = *(float *)ar6_00;
        }
        else {
          fVar22 = (float)((ulonglong)*ar6_00 >> 0x20);
        }
        dVar11 = (double)CONCAT44(fVar22,0x3f800000);
        if (cVar25 != '\0' || fVar22 <= 1.0) goto LAB_8c22c982;
        if (cVar26 == '\0') {
          fVar22 = *(float *)((int)ar5_00 + 4);
          dVar11 = (double)CONCAT44(fVar22,*(undefined4 *)((int)pdVar3 + 4));
          in_dr8 = (double)CONCAT44(fVar22,SUB84(in_dr8,0));
        }
        else {
          dVar11 = *(double *)((int)ar5_00 + 4);
          in_xd2 = *(double *)((int)pdVar3 + 4);
          fVar22 = (float)((ulonglong)dVar11 >> 0x20);
          in_dr8 = dVar11;
        }
        if (cVar25 == '\0') {
          dVar11 = (double)CONCAT44((float)((ulonglong)dVar11 >> 0x20) - SUB84(dVar11,0),
                                    SUB84(dVar11,0));
        }
        else {
          dVar11 = dVar11 - dVar11;
        }
        if (cVar26 == '\0') {
          dVar11 = (double)CONCAT44((int)((ulonglong)dVar11 >> 0x20),*(undefined4 *)(ar6_00 + 1));
          in_dr6 = (double)CONCAT44((int)((ulonglong)in_dr6 >> 0x20),*(undefined4 *)(ar5_00 + 1));
        }
        else {
          in_xd2 = ar6_00[1];
          in_xd6 = ar5_00[1];
        }
        fVar17 = SUB84(in_dr6,0);
        if (cVar25 == '\0') {
          dVar11 = (double)CONCAT44((int)((ulonglong)dVar11 >> 0x20),SUB84(dVar11,0) - fVar17);
        }
        else {
          dVar11 = dVar11 - in_dr6;
        }
        in_xd0 = in_xd6;
        if (cVar26 == '\0') {
          in_dr0 = (double)CONCAT44(uVar12,fVar17);
          in_xd0 = dVar19;
        }
        if (cVar25 == '\0') {
          dVar11 = (double)CONCAT44((float)((ulonglong)dVar11 >> 0x20) * SUB84(dVar11,0),
                                    SUB84(dVar11,0));
        }
        else {
          dVar11 = dVar11 * dVar11;
        }
        if (cVar26 == '\0') {
          dVar11 = (double)CONCAT44((int)((ulonglong)dVar11 >> 0x20),*(undefined4 *)(pdVar3 + 1));
        }
        else {
          in_xd2 = pdVar3[1];
        }
        if (cVar25 == '\0') {
          dVar19 = (double)CONCAT44((int)((ulonglong)in_dr0 >> 0x20),
                                    SUB84(in_dr0,0) - SUB84(dVar11,0));
        }
        else {
          dVar19 = in_dr0 - dVar11;
        }
        if (cVar26 == '\0') {
          dVar11 = (double)CONCAT44((int)((ulonglong)dVar11 >> 0x20),
                                    *(undefined4 *)((int)ar6_00 + 4));
        }
        else {
          in_xd2 = *(double *)((int)ar6_00 + 4);
        }
        if (cVar25 == '\0') {
          fVar22 = SUB84(dVar11,0) - fVar22;
          fVar10 = SUB84(dVar19,0) * fVar22;
          in_dr0 = (double)CONCAT44((int)((ulonglong)dVar19 >> 0x20),fVar10);
          dVar11 = (double)CONCAT44((float)((ulonglong)dVar11 >> 0x20) - fVar10,fVar22);
        }
        else {
          in_dr0 = dVar19 * (dVar11 - in_dr8);
          dVar11 = (dVar11 - in_dr8) - in_dr0;
        }
        dVar19 = dVar11;
        if (cVar26 == '\0') {
          dVar19 = (double)CONCAT44((int)((ulonglong)dVar11 >> 0x20),fVar17);
        }
        if (cVar25 == '\0') {
          in_dr6 = (double)CONCAT44((float)((ulonglong)dVar19 >> 0x20) * SUB84(in_dr14,0),
                                    SUB84(dVar19,0));
        }
        else {
          in_dr6 = dVar19 * in_dr14;
        }
      }
      if (cVar25 == '\0') {
        bVar24 = (float)((ulonglong)in_dr6 >> 0x20) < 0.0;
      }
      else {
        bVar24 = in_dr6 < (double)((ulonglong)dVar11 & 0xffffffff00000000);
      }
      uVar16 = (undefined4)((ulonglong)in_dr14 >> 0x20);
      uVar12 = SUB84(in_dr12,0);
      if (bVar24) {
        if (iVar5 == 0) {
          if (cVar26 == '\0') {
            uVar21 = *(undefined4 *)((int)pdVar3 + 4);
            uVar18 = *(undefined4 *)(pdVar3 + 1);
            uVar20 = *(undefined4 *)((int)pdVar3 + 0xc);
            uVar15 = *(undefined4 *)(pdVar3 + 2);
            *(undefined4 *)((int)ar7 + 0x1c) = *(undefined4 *)((int)pdVar3 + 0x14);
            *(undefined4 *)(ar7 + 3) = uVar15;
            *(int *)((int)ar7 + 0x14) = SUB84(in_dr4,0);
            *(int *)(ar7 + 2) = (int)((ulonglong)in_dr4 >> 0x20);
            *(undefined4 *)((int)ar7 + 0xc) = uVar20;
            *(undefined4 *)(ar7 + 1) = uVar18;
            pdVar4 = (double *)((int)ar7 + 4);
            *(undefined4 *)pdVar4 = uVar21;
          }
          else {
            dVar11 = *(double *)((int)pdVar3 + 4);
            dVar23 = *(double *)((int)pdVar3 + 0xc);
            dVar19 = *(double *)((int)pdVar3 + 0x14);
            in_xd6 = *(double *)((int)pdVar3 + 0x1c);
            ar7[3] = *(double *)((int)pdVar3 + 0x24);
            ar7[2] = in_xd6;
            ar7[1] = in_xd4;
            *ar7 = in_dr4;
            ar7[-1] = dVar19;
            ar7[-2] = dVar23;
            pdVar4 = ar7 + -3;
            *pdVar4 = dVar11;
          }
          *(undefined4 *)((int)pdVar4 + -4) = 0xe0000000;
          iVar5 = 1;
          ar7 = (double *)((int)pdVar4 + 0x1c);
        }
        if (cVar26 == '\0') {
          uVar18 = *(undefined4 *)((int)ar5_00 + 4);
          uVar21 = *(undefined4 *)(ar5_00 + 1);
          uVar15 = *(undefined4 *)((int)ar5_00 + 0xc);
          uVar20 = *(undefined4 *)(ar5_00 + 2);
          in_dr8 = (double)CONCAT44(uVar20,uVar18);
          in_dr6 = (double)CONCAT44(*(undefined4 *)((int)ar5_00 + 0x14),uVar15);
          *(undefined4 *)((int)ar7 + 0x1c) = *(undefined4 *)((int)ar5_00 + 0x14);
          *(undefined4 *)(ar7 + 3) = uVar20;
          *(undefined4 *)((int)ar7 + 0x14) = uVar12;
          *(undefined4 *)(ar7 + 2) = uVar16;
          *(undefined4 *)((int)ar7 + 0xc) = uVar15;
          *(undefined4 *)(ar7 + 1) = uVar21;
          pdVar4 = (double *)((int)ar7 + 4);
          *(undefined4 *)pdVar4 = uVar18;
        }
        else {
          dVar11 = *(double *)((int)ar5_00 + 4);
          dVar19 = *(double *)((int)ar5_00 + 0xc);
          in_xd6 = *(double *)((int)ar5_00 + 0x14);
          in_dr8 = *(double *)((int)ar5_00 + 0x1c);
          in_dr6 = *(double *)((int)ar5_00 + 0x24);
          ar7[3] = in_dr6;
          ar7[2] = in_dr8;
          ar7[1] = dVar13;
          *ar7 = in_dr14;
          ar7[-1] = in_xd6;
          ar7[-2] = dVar19;
          pdVar4 = ar7 + -3;
          *pdVar4 = dVar11;
        }
        *(undefined4 *)((int)pdVar4 + -4) = 0xe0000000;
        ar7 = (double *)((int)pdVar4 + 0x1c);
        iVar5 = iVar5 + 1;
      }
      else if (iVar5 != 0) {
        if (cVar26 == '\0') {
          uVar18 = *(undefined4 *)((int)ar5_00 + 4);
          uVar21 = *(undefined4 *)(ar5_00 + 1);
          uVar20 = *(undefined4 *)((int)ar5_00 + 0xc);
          in_dr8 = (double)CONCAT44(uVar20,uVar18);
          uVar15 = *(undefined4 *)(ar5_00 + 2);
          in_dr6 = ar5_00[2];
          *(undefined4 *)((int)ar7 + 0x1c) = *(undefined4 *)((int)ar5_00 + 0x14);
          *(undefined4 *)(ar7 + 3) = uVar15;
          *(undefined4 *)((int)ar7 + 0x14) = uVar12;
          *(undefined4 *)(ar7 + 2) = uVar16;
          *(undefined4 *)((int)ar7 + 0xc) = uVar20;
          *(undefined4 *)(ar7 + 1) = uVar21;
          pdVar4 = (double *)((int)ar7 + 4);
          *(undefined4 *)pdVar4 = uVar18;
        }
        else {
          dVar11 = *(double *)((int)ar5_00 + 4);
          dVar19 = *(double *)((int)ar5_00 + 0xc);
          in_dr8 = *(double *)((int)ar5_00 + 0x14);
          in_xd6 = *(double *)((int)ar5_00 + 0x1c);
          in_dr6 = *(double *)((int)ar5_00 + 0x24);
          ar7[3] = in_dr6;
          ar7[2] = in_xd6;
          ar7[1] = dVar13;
          *ar7 = in_dr14;
          ar7[-1] = in_dr8;
          ar7[-2] = dVar19;
          pdVar4 = ar7 + -3;
          *pdVar4 = dVar11;
        }
        *(undefined4 *)((int)pdVar4 + -4) = 0xf0000000;
        iVar6 = iVar6 + iVar5 + 1;
        iVar5 = 0;
        ar7 = (double *)((int)pdVar4 + 0x1c);
      }
      if (bVar1) {
        if (cVar26 == '\0') {
          fVar22 = *(float *)pdVar3;
        }
        else {
          fVar22 = (float)((ulonglong)*pdVar3 >> 0x20);
        }
        if (cVar25 != '\0' || fVar22 <= 1.0) {
          if (cVar26 == '\0') {
            dVar19 = (double)CONCAT44(*(undefined4 *)ar5_00,0x3f800000);
          }
          else {
            dVar19 = *ar5_00;
          }
          if (cVar25 != '\0' || (float)((ulonglong)dVar19 >> 0x20) <= SUB84(dVar19,0)) {
            if (cVar26 == '\0') {
              fVar22 = *(float *)ar6_00;
            }
            else {
              fVar22 = (float)((ulonglong)*ar6_00 >> 0x20);
            }
            if (cVar25 != '\0' || fVar22 <= 1.0) goto LAB_8c22ca7a;
          }
        }
        if (cVar26 == '\0') {
          in_dr8 = (double)((ulonglong)in_dr12 >> 0x20);
          in_dr6 = (double)CONCAT44(uVar16,uVar12);
        }
        else {
          in_dr8 = (double)CONCAT44(fStack_40,fStack_44);
          in_dr6 = in_dr14;
          in_xd6 = dVar13;
        }
        ar7 = (double *)FUN_8c22ed60(pdVar3,ar5_00,ar6_00,ar7);
      }
LAB_8c22ca7a:
      psStack_4c = psStack_4c + (ar6 >> 0xe & 3) + 3;
      dVar19 = in_dr14;
      fVar22 = fStack_44;
      fVar17 = fStack_40;
      if (cVar26 == '\0') {
        dVar19 = (double)CONCAT44((int)((ulonglong)in_dr14 >> 0x20),SUB84(in_dr4,0));
        fVar22 = SUB84(in_dr14,0);
        fVar17 = fStack_44;
      }
      iVar8 = iVar8 + -1;
      in_dr14 = (double)CONCAT44(fVar17,-fVar22);
      in_xd12 = in_dr12;
      in_dr4 = dVar19;
      if (cVar26 == '\0') {
        uVar12 = SUB84(in_dr12,0);
        uVar16 = (undefined4)((ulonglong)in_dr12 >> 0x20);
        in_dr12 = (double)CONCAT44(uVar16,uVar16);
        in_xd12 = dVar13;
        in_dr4 = (double)CONCAT44((int)((ulonglong)dVar19 >> 0x20),uVar12);
        dVar13 = in_xd4;
      }
      in_xd4 = dVar13;
      pdVar3 = ar5_00;
      ar5_00 = ar6_00;
      dVar19 = in_xd0;
      dVar13 = in_xd12;
    } while (iVar8 != 0);
    if (iVar5 != 0) {
      if (cVar26 == '\0') {
        uVar15 = *(undefined4 *)((int)ar6_00 + 4);
        uVar12 = *(undefined4 *)(ar6_00 + 1);
        uVar16 = *(undefined4 *)((int)ar6_00 + 0xc);
        in_dr6 = (double)CONCAT44(uVar15,uVar16);
        uVar18 = *(undefined4 *)(ar6_00 + 2);
        in_dr8 = (double)CONCAT44(uVar18,SUB84(in_dr8,0));
        in_dr4 = (double)CONCAT44(*(undefined4 *)((int)ar6_00 + 0x14),uVar12);
        *(undefined4 *)((int)ar7 + 0x1c) = *(undefined4 *)((int)ar6_00 + 0x14);
        *(undefined4 *)(ar7 + 3) = uVar18;
        *(int *)((int)ar7 + 0x14) = (int)((ulonglong)in_dr12 >> 0x20);
        *(float *)(ar7 + 2) = fStack_44;
        *(undefined4 *)((int)ar7 + 0xc) = uVar16;
        *(undefined4 *)(ar7 + 1) = uVar12;
        pdVar3 = (double *)((int)ar7 + 4);
        *(undefined4 *)pdVar3 = uVar15;
      }
      else {
        in_dr6 = *(double *)((int)ar6_00 + 4);
        in_xd4 = *(double *)((int)ar6_00 + 0xc);
        in_xd6 = *(double *)((int)ar6_00 + 0x14);
        in_dr8 = *(double *)((int)ar6_00 + 0x1c);
        in_dr4 = *(double *)((int)ar6_00 + 0x24);
        ar7[3] = in_dr4;
        ar7[2] = in_dr8;
        ar7[1] = in_dr12;
        in_xd2 = (double)CONCAT44(fStack_40,fStack_44);
        *ar7 = in_xd2;
        ar7[-1] = in_xd6;
        ar7[-2] = in_xd4;
        pdVar3 = ar7 + -3;
        *pdVar3 = in_dr6;
      }
      *(undefined4 *)((int)pdVar3 + -4) = 0xf0000000;
      iVar6 = iVar6 + iVar5 + 1;
      ar7 = (double *)((int)pdVar3 + 0x1c);
    }
    uStack_3c = uStack_3c - 1;
    if (uStack_3c == 0) {
      _DAT_8c4aa520 = _DAT_8c4aa520 + iVar6;
      _DAT_8c4aa51c = _DAT_8c4aa51c + iVar7;
      return ar7;
    }
  } while( true );
}

__asm__(".globl _FUN_8c22c838\n.set _FUN_8c22c838, _FUN_8c22c838_def\n");
