#include "../decls.h"
double * FUN_8c222cec_def(short *ar4,int ar5,uint ar6,double *ar7)

{
  bool bVar1;
  short *psVar2;
  double *pdVar3;
  double *pdVar4;
  double *pdVar5;
  double *pdVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  short *psVar10;
  int iVar11;
  double *pdVar12;
  double in_dr0;
  float fVar13;
  float fVar14;
  float fVar18;
  double dVar15;
  double dVar16;
  double dVar17;
  undefined4 uVar19;
  undefined4 uVar20;
  double in_dr4;
  undefined4 uVar21;
  undefined4 uVar22;
  double in_dr6;
  undefined4 uVar24;
  double dVar23;
  undefined4 uVar25;
  double in_dr8;
  double dVar26;
  undefined4 uVar27;
  double in_dr10;
  undefined8 uVar28;
  undefined4 uVar30;
  float fVar31;
  undefined4 uVar32;
  undefined4 in_fr15;
  double dVar33;
  double in_xd0;
  double in_xd4;
  double in_xd6;
  double in_xd8;
  double in_xd12;
  bool bVar34;
  char cVar35;
  char cVar36;
  short *psStack_50;
  uint uStack_38;
  undefined4 uVar29;
  
  cVar36 = '\0';
  cVar35 = '\0';
  uVar21 = (undefined4)((ulonglong)in_dr4 >> 0x20);
  uVar19 = SUB84(in_dr4,0);
  uVar24 = (undefined4)((ulonglong)in_dr6 >> 0x20);
  uVar22 = SUB84(in_dr6,0);
  uStack_38 = ar6 & 0x3fff;
  if ((_DAT_8c4aa4f0 & 0x20000) == 0) {
    fVar31 = 0.5;
    dVar33 = (double)CONCAT44(0x3f000000,in_fr15);
  }
  else {
    fVar31 = DAT_8c277af8 + 0.5;
    dVar33 = (double)CONCAT44(DAT_8c277afc + 0.5,in_fr15);
  }
  iVar8 = 0;
  iVar9 = 0;
  uVar32 = 0x3f800000;
  dVar26 = in_dr4;
  dVar17 = in_dr6;
  psStack_50 = ar4;
  if ((_DAT_8c4aa4f0 & 0x80000000) != 0) {
    uVar32 = 0xbf800000;
  }
  do {
    psVar10 = psStack_50 + 1;
    iVar11 = (int)*psStack_50;
    psVar2 = psStack_50 + 2;
    if (cVar36 == '\0') {
      dVar33 = (double)CONCAT44((int)((ulonglong)dVar33 >> 0x20),uVar32);
    }
    if (iVar11 < 0) {
      dVar33 = (double)CONCAT44((int)((ulonglong)dVar33 >> 0x20),-SUB84(dVar33,0));
      iVar11 = -iVar11;
    }
    iVar9 = iVar9 + iVar11;
    iVar7 = 0;
    psStack_50 = psStack_50 + 3;
    iVar11 = iVar11 + -2;
    pdVar3 = (double *)(*psVar10 * 0x40 + ar5);
    pdVar6 = (double *)(*psVar2 * 0x40 + ar5);
    dVar16 = in_xd0;
    do {
      uVar20 = SUB84(in_dr10,0);
      uVar25 = SUB84(in_dr8,0);
      pdVar12 = (double *)(*psStack_50 * 0x40 + ar5);
      if (cVar36 == '\0') {
        fVar18 = *(float *)pdVar3;
      }
      else {
        fVar18 = (float)((ulonglong)*pdVar3 >> 0x20);
      }
      dVar15 = (double)CONCAT44(fVar18,0x3f800000);
      bVar1 = false;
      fVar14 = SUB84(dVar26,0);
      if (cVar35 != '\0' || fVar18 <= 1.0) {
LAB_8c222de0:
        bVar1 = true;
        dVar26 = (double)CONCAT44(0x3f800000,fVar14);
        in_xd0 = dVar16;
      }
      else {
        if (cVar36 == '\0') {
          dVar15 = (double)CONCAT44(*(undefined4 *)pdVar6,0x3f800000);
        }
        else {
          dVar15 = *pdVar6;
        }
        if (cVar35 != '\0' || (float)((ulonglong)dVar15 >> 0x20) <= SUB84(dVar15,0))
        goto LAB_8c222de0;
        if (cVar36 == '\0') {
          fVar18 = *(float *)pdVar12;
        }
        else {
          fVar18 = (float)((ulonglong)*pdVar12 >> 0x20);
        }
        dVar15 = (double)CONCAT44(fVar18,0x3f800000);
        if (cVar35 != '\0' || fVar18 <= 1.0) goto LAB_8c222de0;
        if (cVar36 == '\0') {
          fVar14 = *(float *)((int)pdVar6 + 4);
          dVar26 = (double)CONCAT44((int)((ulonglong)dVar26 >> 0x20),fVar14);
          dVar15 = (double)CONCAT44(fVar14,*(undefined4 *)((int)pdVar3 + 4));
        }
        else {
          dVar15 = *(double *)((int)pdVar6 + 4);
          in_xd4 = dVar15;
        }
        if (cVar35 == '\0') {
          dVar15 = (double)CONCAT44((float)((ulonglong)dVar15 >> 0x20) - SUB84(dVar15,0),
                                    SUB84(dVar15,0));
        }
        else {
          dVar15 = dVar15 - dVar15;
        }
        if (cVar36 == '\0') {
          dVar15 = (double)CONCAT44((int)((ulonglong)dVar15 >> 0x20),*(undefined4 *)(pdVar12 + 1));
          dVar17 = (double)CONCAT44(*(undefined4 *)(pdVar6 + 1),SUB84(dVar17,0));
        }
        else {
          dVar17 = pdVar6[1];
        }
        fVar18 = (float)((ulonglong)dVar17 >> 0x20);
        if (cVar35 == '\0') {
          dVar15 = (double)CONCAT44((int)((ulonglong)dVar15 >> 0x20),SUB84(dVar15,0) - fVar18);
        }
        else {
          dVar15 = dVar15 - dVar17;
        }
        in_xd0 = dVar17;
        if (cVar36 == '\0') {
          in_dr0 = (double)CONCAT44((int)((ulonglong)in_dr0 >> 0x20),fVar18);
          in_xd0 = dVar16;
        }
        if (cVar35 == '\0') {
          dVar15 = (double)CONCAT44((float)((ulonglong)dVar15 >> 0x20) * SUB84(dVar15,0),
                                    SUB84(dVar15,0));
        }
        else {
          dVar15 = dVar15 * dVar15;
        }
        if (cVar36 == '\0') {
          dVar15 = (double)CONCAT44((int)((ulonglong)dVar15 >> 0x20),*(undefined4 *)(pdVar3 + 1));
        }
        if (cVar35 == '\0') {
          dVar16 = (double)CONCAT44((int)((ulonglong)in_dr0 >> 0x20),
                                    SUB84(in_dr0,0) - SUB84(dVar15,0));
        }
        else {
          dVar16 = in_dr0 - dVar15;
        }
        if (cVar36 == '\0') {
          dVar15 = (double)CONCAT44((int)((ulonglong)dVar15 >> 0x20),
                                    *(undefined4 *)((int)pdVar12 + 4));
        }
        if (cVar35 == '\0') {
          fVar13 = SUB84(dVar15,0) - fVar14;
          fVar18 = SUB84(dVar16,0) * fVar13;
          in_dr0 = (double)CONCAT44((int)((ulonglong)dVar16 >> 0x20),fVar18);
          dVar15 = (double)CONCAT44((float)((ulonglong)dVar15 >> 0x20) - fVar18,fVar13);
        }
        else {
          in_dr0 = dVar16 * (dVar15 - dVar26);
          dVar15 = (dVar15 - dVar26) - in_dr0;
        }
        dVar26 = dVar15;
        if (cVar36 == '\0') {
          dVar26 = (double)CONCAT44((int)((ulonglong)dVar15 >> 0x20),fVar14);
        }
        if (cVar35 == '\0') {
          dVar26 = (double)CONCAT44((float)((ulonglong)dVar26 >> 0x20) * SUB84(dVar33,0),
                                    SUB84(dVar26,0));
        }
        else {
          dVar26 = dVar26 * dVar33;
        }
      }
      if (cVar35 == '\0') {
        bVar34 = (float)((ulonglong)dVar26 >> 0x20) < 0.0;
      }
      else {
        bVar34 = dVar26 < (double)((ulonglong)dVar15 & 0xffffffff00000000);
      }
      uVar30 = (undefined4)((ulonglong)dVar33 >> 0x20);
      if (bVar34) {
        if (iVar7 == 0) {
          if (cVar36 == '\0') {
            dVar26 = (double)CONCAT44(*(undefined4 *)((int)pdVar3 + 4),uVar25);
            pdVar4 = pdVar3 + 1;
            in_dr0 = (double)CONCAT44(0x3f000000,SUB84(in_dr0,0));
            pdVar5 = pdVar3 + 2;
            dVar17 = (double)CONCAT44(uVar30,fVar31);
          }
          else {
            dVar26 = *(double *)((int)pdVar3 + 4);
            in_dr0 = -2.681562215333027e+154;
            in_xd6 = *(double *)((int)pdVar3 + 0xc);
            pdVar4 = (double *)((int)pdVar3 + 0x14);
            pdVar5 = (double *)((int)pdVar3 + 0x1c);
            dVar17 = dVar33;
            in_xd4 = in_xd12;
          }
          dVar16 = *pdVar4;
          if (cVar36 == '\0') {
            dVar15 = (double)((ulonglong)*(uint *)(pdVar5 + 3) << 0x20);
            pdVar5 = (double *)((int)pdVar5 + 0x1c);
            in_dr0 = (double)CONCAT44((int)((ulonglong)in_dr0 >> 0x20),*(undefined4 *)pdVar5);
          }
          else {
            dVar15 = pdVar5[3];
            pdVar5 = pdVar5 + 4;
            in_xd0 = *pdVar5;
          }
          fVar18 = (float)((ulonglong)in_dr0 >> 0x20);
          if (cVar35 == '\0') {
            dVar17 = (double)CONCAT44(fVar18 * SUB84(in_dr0,0) + (float)((ulonglong)dVar17 >> 0x20),
                                      fVar18 * (float)((ulonglong)dVar15 >> 0x20) + SUB84(dVar17,0))
            ;
          }
          uVar25 = (undefined4)((ulonglong)dVar17 >> 0x20);
          if (cVar36 == '\0') {
            *(undefined4 *)((int)ar7 + 0x14) = uVar25;
            *(int *)(ar7 + 2) = SUB84(dVar17,0);
            *(int *)((int)ar7 + 0xc) = (int)((ulonglong)dVar16 >> 0x20);
            *(int *)(ar7 + 1) = SUB84(dVar16,0);
            pdVar4 = (double *)((int)ar7 + 4);
            *(int *)pdVar4 = (int)((ulonglong)dVar26 >> 0x20);
          }
          else {
            ar7[2] = dVar17;
            ar7[1] = in_xd4;
            *ar7 = dVar16;
            ar7[-1] = in_xd6;
            pdVar4 = ar7 + -2;
            *pdVar4 = dVar26;
          }
          *(undefined4 *)((int)pdVar4 + -4) = 0xe0000000;
          if (cVar36 == '\0') {
            dVar23 = (double)CONCAT44(uVar21,SUB84(dVar16,0));
            dVar16 = (double)CONCAT44(*(undefined4 *)((int)pdVar5 + -0x1c),SUB84(dVar15,0));
            pdVar5 = pdVar5 + -3;
            dVar17 = (double)CONCAT44(uVar25,uVar19);
          }
          else {
            dVar23 = (double)CONCAT44(uVar19,uVar21);
            dVar16 = *(double *)((int)pdVar5 + -0x1c);
            pdVar5 = (double *)((int)pdVar5 + -0x14);
            in_xd4 = (double)CONCAT44(uVar24,uVar19);
          }
          if (cVar35 == '\0') {
            dVar23 = (double)CONCAT44((float)((ulonglong)dVar23 >> 0x20) *
                                      (float)((ulonglong)dVar16 >> 0x20),SUB84(dVar23,0));
          }
          else {
            dVar23 = dVar23 * dVar16;
          }
          if (cVar36 == '\0') {
            dVar16 = (double)CONCAT44(*(undefined4 *)pdVar5,SUB84(dVar16,0));
            pdVar5 = (double *)((int)pdVar5 + 4);
            dVar23 = (double)CONCAT44((int)((ulonglong)dVar23 >> 0x20),uVar24);
          }
          else {
            dVar16 = *pdVar5;
            pdVar5 = pdVar5 + 1;
            in_xd6 = (double)CONCAT44(uVar22,uVar24);
          }
          if (cVar35 == '\0') {
            fVar18 = SUB84(dVar17,0) + (float)((ulonglong)dVar16 >> 0x20);
          }
          else {
            fVar18 = SUB84(dVar17 + dVar16,0);
          }
          if (cVar36 == '\0') {
            dVar17 = (double)CONCAT44(*(undefined4 *)pdVar5,SUB84(dVar16,0));
            pdVar5 = (double *)((int)pdVar5 + 4);
            dVar26 = (double)CONCAT44(uVar22,SUB84(dVar26,0));
          }
          else {
            dVar17 = *pdVar5;
            pdVar5 = pdVar5 + 1;
            dVar26 = (double)CONCAT44(ar5,uVar22);
          }
          if (cVar35 == '\0') {
            dVar23 = (double)CONCAT44((int)((ulonglong)dVar23 >> 0x20),
                                      SUB84(dVar23,0) + (float)((ulonglong)dVar17 >> 0x20));
          }
          else {
            dVar23 = dVar23 + dVar17;
          }
          if (cVar36 == '\0') {
            dVar17 = (double)CONCAT44(*(undefined4 *)pdVar5,SUB84(dVar17,0));
            pdVar5 = (double *)((int)pdVar5 + 4);
          }
          else {
            dVar17 = *pdVar5;
            pdVar5 = pdVar5 + 1;
          }
          if (cVar35 == '\0') {
            dVar26 = (double)CONCAT44((float)((ulonglong)dVar26 >> 0x20) +
                                      (float)((ulonglong)dVar17 >> 0x20),SUB84(dVar26,0));
          }
          else {
            dVar26 = dVar26 + dVar17;
          }
          if (cVar36 == '\0') {
            uVar27 = (undefined4)((ulonglong)dVar26 >> 0x20);
            uVar25 = *(undefined4 *)((int)pdVar5 + 0x14);
            dVar26 = (double)CONCAT44(uVar27,uVar25);
            uVar29 = *(undefined4 *)(pdVar5 + 3);
            uVar28 = CONCAT44(uVar29,uVar20);
            *(undefined4 *)(pdVar4 + 7) = *(undefined4 *)((int)pdVar5 + 0x1c);
            *(undefined4 *)((int)pdVar4 + 0x34) = uVar29;
            *(undefined4 *)(pdVar4 + 6) = uVar25;
            *(undefined4 *)(pdVar4 + 5) = uVar27;
            *(int *)((int)pdVar4 + 0x24) = SUB84(dVar23,0);
            *(float *)(pdVar4 + 4) = fVar18;
            pdVar4 = (double *)((int)pdVar4 + 0x1c);
            *(int *)pdVar4 = (int)((ulonglong)dVar23 >> 0x20);
          }
          else {
            in_xd8 = *(double *)((int)pdVar5 + 0x14);
            uVar28 = *(undefined8 *)((int)pdVar5 + 0x1c);
            *(undefined8 *)((int)pdVar4 + 0x34) = *(undefined8 *)((int)pdVar5 + 0x24);
            *(undefined8 *)((int)pdVar4 + 0x2c) = uVar28;
            *(double *)((int)pdVar4 + 0x24) = in_xd8;
            pdVar4[3] = dVar26;
            pdVar4[2] = in_xd6;
            pdVar4[1] = in_xd4;
            *pdVar4 = dVar23;
          }
          uVar20 = (undefined4)uVar28;
          uVar25 = SUB84(dVar26,0);
          iVar7 = 1;
          ar7 = pdVar4 + 4;
        }
        if (cVar36 == '\0') {
          in_dr0 = (double)CONCAT44(0x3f000000,SUB84(in_dr0,0));
          dVar26 = (double)CONCAT44(*(undefined4 *)((int)pdVar6 + 0xc),uVar25);
          pdVar5 = pdVar6 + 2;
          dVar16 = (double)CONCAT44(*(undefined4 *)((int)pdVar6 + 4),fVar31);
          dVar17 = (double)CONCAT44(uVar30,*(undefined4 *)(pdVar6 + 1));
        }
        else {
          dVar16 = *(double *)((int)pdVar6 + 4);
          in_dr0 = -2.681562215333027e+154;
          in_xd4 = *(double *)((int)pdVar6 + 0xc);
          dVar26 = *(double *)((int)pdVar6 + 0x14);
          pdVar5 = (double *)((int)pdVar6 + 0x1c);
          in_xd6 = in_xd12;
          dVar17 = dVar33;
        }
        if (cVar36 == '\0') {
          pdVar4 = (double *)((int)pdVar5 + 0x1c);
          pdVar5 = pdVar5 + 3;
        }
        else {
          pdVar4 = pdVar5 + 4;
          pdVar5 = pdVar4;
        }
        dVar15 = *pdVar5;
        fVar18 = (float)((ulonglong)in_dr0 >> 0x20);
        fVar14 = (float)((ulonglong)dVar15 >> 0x20);
        if (cVar35 == '\0') {
          dVar16 = (double)CONCAT44((int)((ulonglong)dVar16 >> 0x20),
                                    fVar18 * SUB84(dVar15,0) + SUB84(dVar16,0));
          dVar17 = (double)CONCAT44(fVar18 * fVar14 + (float)((ulonglong)dVar17 >> 0x20),
                                    SUB84(dVar17,0));
        }
        uVar25 = (undefined4)((ulonglong)dVar16 >> 0x20);
        if (cVar36 == '\0') {
          *(int *)((int)ar7 + 0x14) = (int)((ulonglong)dVar17 >> 0x20);
          *(int *)(ar7 + 2) = SUB84(dVar16,0);
          *(int *)((int)ar7 + 0xc) = (int)((ulonglong)dVar26 >> 0x20);
          *(int *)(ar7 + 1) = SUB84(dVar17,0);
          pdVar5 = (double *)((int)ar7 + 4);
          *(undefined4 *)pdVar5 = uVar25;
        }
        else {
          ar7[2] = dVar17;
          ar7[1] = in_xd6;
          *ar7 = dVar26;
          ar7[-1] = in_xd4;
          pdVar5 = ar7 + -2;
          *pdVar5 = dVar16;
        }
        *(undefined4 *)((int)pdVar5 + -4) = 0xe0000000;
        if (cVar36 == '\0') {
          dVar17 = (double)CONCAT44(uVar21,uVar20);
          dVar15 = (double)CONCAT44(fVar14,*(undefined4 *)((int)pdVar4 + -0x1c));
          pdVar4 = pdVar4 + -3;
          dVar26 = (double)((ulonglong)in_dr4 & 0xffffffff);
        }
        else {
          dVar17 = (double)CONCAT44(uVar19,uVar21);
          pdVar4 = (double *)((int)pdVar4 + -0x14);
          in_xd8 = (double)CONCAT44(uVar24,uVar19);
        }
        if (cVar35 == '\0') {
          in_dr10 = (double)CONCAT44((float)((ulonglong)dVar17 >> 0x20) * SUB84(dVar15,0),
                                     SUB84(dVar17,0));
        }
        else {
          in_dr10 = dVar17 * dVar15;
        }
        if (cVar36 == '\0') {
          dVar15 = (double)CONCAT44((int)((ulonglong)dVar15 >> 0x20),*(undefined4 *)pdVar4);
          pdVar4 = (double *)((int)pdVar4 + 4);
          dVar26 = (double)CONCAT44(uVar24,SUB84(dVar26,0));
        }
        else {
          pdVar4 = pdVar4 + 1;
          dVar26 = (double)CONCAT44(uVar22,uVar24);
        }
        if (cVar35 == '\0') {
          dVar26 = (double)CONCAT44((int)((ulonglong)dVar26 >> 0x20),
                                    SUB84(dVar26,0) + SUB84(dVar15,0));
        }
        else {
          dVar26 = dVar26 + dVar15;
        }
        if (cVar36 == '\0') {
          dVar15 = (double)CONCAT44((int)((ulonglong)dVar15 >> 0x20),*(undefined4 *)pdVar4);
          pdVar4 = (double *)((int)pdVar4 + 4);
          dVar16 = (double)CONCAT44(uVar25,uVar22);
        }
        else {
          pdVar4 = pdVar4 + 1;
          in_xd6 = (double)CONCAT44(ar5,uVar22);
        }
        if (cVar35 == '\0') {
          in_dr8 = (double)CONCAT44((float)((ulonglong)dVar26 >> 0x20) + SUB84(dVar15,0),
                                    SUB84(dVar26,0));
        }
        else {
          in_dr8 = dVar26 + dVar15;
        }
        if (cVar36 == '\0') {
          dVar15 = (double)CONCAT44((int)((ulonglong)dVar15 >> 0x20),*(undefined4 *)pdVar4);
          pdVar4 = (double *)((int)pdVar4 + 4);
        }
        else {
          pdVar4 = pdVar4 + 1;
        }
        if (cVar35 == '\0') {
          fVar18 = SUB84(dVar16,0) + SUB84(dVar15,0);
        }
        else {
          fVar18 = SUB84(dVar16 + dVar15,0);
        }
        if (cVar36 == '\0') {
          uVar25 = *(undefined4 *)((int)pdVar4 + 0x14);
          dVar17 = (double)CONCAT44(uVar25,fVar18);
          uVar20 = *(undefined4 *)(pdVar4 + 3);
          dVar26 = pdVar4[3];
          *(undefined4 *)(pdVar5 + 7) = *(undefined4 *)((int)pdVar4 + 0x1c);
          *(undefined4 *)((int)pdVar5 + 0x34) = uVar20;
          *(undefined4 *)(pdVar5 + 6) = uVar25;
          *(float *)(pdVar5 + 5) = fVar18;
          *(int *)((int)pdVar5 + 0x24) = (int)((ulonglong)in_dr8 >> 0x20);
          *(int *)(pdVar5 + 4) = SUB84(in_dr8,0);
          pdVar5 = (double *)((int)pdVar5 + 0x1c);
          *(int *)pdVar5 = (int)((ulonglong)in_dr10 >> 0x20);
        }
        else {
          dVar17 = *(double *)((int)pdVar4 + 0x14);
          in_xd4 = *(double *)((int)pdVar4 + 0x1c);
          dVar26 = *(double *)((int)pdVar4 + 0x24);
          *(double *)((int)pdVar5 + 0x34) = dVar26;
          *(double *)((int)pdVar5 + 0x2c) = in_xd4;
          *(double *)((int)pdVar5 + 0x24) = dVar17;
          pdVar5[3] = in_xd6;
          pdVar5[2] = in_dr8;
          pdVar5[1] = in_xd8;
          *pdVar5 = in_dr10;
        }
        ar7 = pdVar5 + 4;
        iVar7 = iVar7 + 1;
      }
      else if (iVar7 != 0) {
        if (cVar36 == '\0') {
          dVar26 = (double)CONCAT44(*(undefined4 *)((int)pdVar6 + 4),uVar25);
          pdVar4 = pdVar6 + 1;
          in_dr0 = (double)CONCAT44(0x3f000000,SUB84(in_dr0,0));
          pdVar5 = pdVar6 + 2;
          dVar17 = (double)CONCAT44(fVar31,uVar30);
        }
        else {
          dVar26 = *(double *)((int)pdVar6 + 4);
          in_dr0 = -2.681562215333027e+154;
          in_xd6 = *(double *)((int)pdVar6 + 0xc);
          pdVar4 = (double *)((int)pdVar6 + 0x14);
          pdVar5 = (double *)((int)pdVar6 + 0x1c);
          dVar17 = in_xd12;
          in_xd4 = dVar33;
        }
        dVar16 = *pdVar4;
        if (cVar36 == '\0') {
          dVar15 = (double)((ulonglong)*(uint *)(pdVar5 + 3) << 0x20);
          pdVar5 = (double *)((int)pdVar5 + 0x1c);
          in_dr0 = (double)CONCAT44((int)((ulonglong)in_dr0 >> 0x20),*(undefined4 *)pdVar5);
        }
        else {
          dVar15 = pdVar5[3];
          pdVar5 = pdVar5 + 4;
          in_xd0 = *pdVar5;
        }
        fVar18 = (float)((ulonglong)in_dr0 >> 0x20);
        if (cVar35 == '\0') {
          dVar17 = (double)CONCAT44(fVar18 * (float)((ulonglong)dVar15 >> 0x20) +
                                    (float)((ulonglong)dVar17 >> 0x20),
                                    fVar18 * SUB84(in_dr0,0) + SUB84(dVar17,0));
        }
        uVar25 = (undefined4)((ulonglong)dVar17 >> 0x20);
        uVar30 = (undefined4)((ulonglong)dVar16 >> 0x20);
        if (cVar36 == '\0') {
          *(int *)((int)ar7 + 0x14) = SUB84(dVar17,0);
          *(undefined4 *)(ar7 + 2) = uVar25;
          *(undefined4 *)((int)ar7 + 0xc) = uVar30;
          *(int *)(ar7 + 1) = SUB84(dVar16,0);
          pdVar4 = (double *)((int)ar7 + 4);
          *(int *)pdVar4 = (int)((ulonglong)dVar26 >> 0x20);
        }
        else {
          ar7[2] = in_xd4;
          ar7[1] = dVar17;
          *ar7 = dVar16;
          ar7[-1] = in_xd6;
          pdVar4 = ar7 + -2;
          *pdVar4 = dVar26;
        }
        *(undefined4 *)((int)pdVar4 + -4) = 0xf0000000;
        if (cVar36 == '\0') {
          dVar23 = (double)CONCAT44(uVar21,SUB84(dVar26,0));
          dVar26 = (double)CONCAT44(*(undefined4 *)((int)pdVar5 + -0x1c),SUB84(dVar15,0));
          pdVar5 = pdVar5 + -3;
          dVar16 = (double)CONCAT44(uVar30,uVar19);
        }
        else {
          dVar23 = (double)CONCAT44(uVar19,uVar21);
          dVar26 = *(double *)((int)pdVar5 + -0x1c);
          pdVar5 = (double *)((int)pdVar5 + -0x14);
          in_xd6 = (double)CONCAT44(uVar24,uVar19);
        }
        if (cVar35 == '\0') {
          dVar23 = (double)CONCAT44((float)((ulonglong)dVar23 >> 0x20) *
                                    (float)((ulonglong)dVar26 >> 0x20),SUB84(dVar23,0));
        }
        else {
          dVar23 = dVar23 * dVar26;
        }
        if (cVar36 == '\0') {
          dVar26 = (double)CONCAT44(*(undefined4 *)pdVar5,SUB84(dVar26,0));
          pdVar5 = (double *)((int)pdVar5 + 4);
          dVar17 = (double)CONCAT44(uVar25,uVar24);
        }
        else {
          dVar26 = *pdVar5;
          pdVar5 = pdVar5 + 1;
          in_xd4 = (double)CONCAT44(uVar22,uVar24);
        }
        if (cVar35 == '\0') {
          fVar18 = SUB84(dVar16,0) + (float)((ulonglong)dVar26 >> 0x20);
        }
        else {
          fVar18 = SUB84(dVar16 + dVar26,0);
        }
        if (cVar36 == '\0') {
          dVar26 = (double)CONCAT44(*(undefined4 *)pdVar5,SUB84(dVar26,0));
          pdVar5 = (double *)((int)pdVar5 + 4);
          dVar23 = (double)CONCAT44((int)((ulonglong)dVar23 >> 0x20),uVar22);
        }
        else {
          dVar26 = *pdVar5;
          pdVar5 = pdVar5 + 1;
          in_xd8 = (double)CONCAT44(ar5,uVar22);
        }
        if (cVar35 == '\0') {
          fVar14 = SUB84(dVar17,0) + (float)((ulonglong)dVar26 >> 0x20);
        }
        else {
          fVar14 = SUB84(dVar17 + dVar26,0);
        }
        if (cVar36 == '\0') {
          dVar26 = (double)CONCAT44(*(undefined4 *)pdVar5,SUB84(dVar26,0));
          pdVar5 = (double *)((int)pdVar5 + 4);
        }
        else {
          dVar26 = *pdVar5;
          pdVar5 = pdVar5 + 1;
        }
        if (cVar35 == '\0') {
          in_dr8 = (double)CONCAT44((int)((ulonglong)dVar23 >> 0x20),
                                    SUB84(dVar23,0) + (float)((ulonglong)dVar26 >> 0x20));
        }
        else {
          in_dr8 = dVar23 + dVar26;
        }
        if (cVar36 == '\0') {
          uVar25 = *(undefined4 *)((int)pdVar5 + 0x14);
          in_dr10 = (double)CONCAT44(uVar25,uVar20);
          uVar20 = *(undefined4 *)(pdVar5 + 3);
          dVar17 = (double)CONCAT44(uVar20,fVar18);
          dVar26 = (double)CONCAT44(*(undefined4 *)((int)pdVar5 + 0x1c),fVar14);
          *(undefined4 *)(pdVar4 + 7) = *(undefined4 *)((int)pdVar5 + 0x1c);
          *(undefined4 *)((int)pdVar4 + 0x34) = uVar20;
          *(undefined4 *)(pdVar4 + 6) = uVar25;
          *(int *)(pdVar4 + 5) = SUB84(in_dr8,0);
          *(float *)((int)pdVar4 + 0x24) = fVar14;
          *(float *)(pdVar4 + 4) = fVar18;
          pdVar4 = (double *)((int)pdVar4 + 0x1c);
          *(int *)pdVar4 = (int)((ulonglong)in_dr8 >> 0x20);
        }
        else {
          in_dr10 = *(double *)((int)pdVar5 + 0x14);
          dVar17 = *(double *)((int)pdVar5 + 0x1c);
          dVar26 = *(double *)((int)pdVar5 + 0x24);
          *(double *)((int)pdVar4 + 0x34) = dVar26;
          *(double *)((int)pdVar4 + 0x2c) = dVar17;
          *(double *)((int)pdVar4 + 0x24) = in_dr10;
          pdVar4[3] = in_xd8;
          pdVar4[2] = in_xd4;
          pdVar4[1] = in_xd6;
          *pdVar4 = in_dr8;
        }
        iVar8 = iVar8 + iVar7 + 1;
        iVar7 = 0;
        ar7 = pdVar4 + 4;
      }
      if (bVar1) {
        if (cVar36 == '\0') {
          fVar18 = *(float *)pdVar3;
        }
        else {
          fVar18 = (float)((ulonglong)*pdVar3 >> 0x20);
        }
        dVar16 = (double)CONCAT44(fVar18,0x3f800000);
        if (cVar35 == '\0' && fVar18 < 1.0) {
          if (cVar36 == '\0') {
            dVar16 = (double)CONCAT44(*(undefined4 *)pdVar6,0x3f800000);
          }
          else {
            dVar16 = *pdVar6;
          }
          if (cVar35 == '\0' && (float)((ulonglong)dVar16 >> 0x20) < SUB84(dVar16,0)) {
            if (cVar36 == '\0') {
              fVar18 = *(float *)pdVar12;
            }
            else {
              fVar18 = (float)((ulonglong)*pdVar12 >> 0x20);
            }
            dVar16 = (double)CONCAT44(fVar18,0x3f800000);
            if (cVar35 == '\0' && fVar18 < 1.0) goto LAB_8c22300a;
          }
        }
        if (cVar36 == '\0') {
          uVar20 = *(undefined4 *)((int)pdVar6 + 0x24);
          in_dr8 = (double)CONCAT44(uVar20,*(undefined4 *)pdVar6);
          dVar26 = (double)CONCAT44(*(undefined4 *)pdVar3,SUB84(dVar26,0));
          dVar17 = (double)CONCAT44((int)((ulonglong)dVar17 >> 0x20),
                                    *(undefined4 *)((int)pdVar3 + 0x24));
          dVar16 = (double)CONCAT44((int)((ulonglong)dVar16 >> 0x20),uVar20);
        }
        else {
          in_xd8 = *pdVar6;
          in_dr8 = *(double *)((int)pdVar6 + 0x24);
          dVar26 = *pdVar3;
          in_xd6 = *(double *)((int)pdVar3 + 0x24);
          uVar20 = (undefined4)((ulonglong)in_dr8 >> 0x20);
        }
        fVar18 = (float)((ulonglong)dVar26 >> 0x20);
        if (cVar35 == '\0') {
          fVar14 = SUB84(dVar16,0) * fVar18;
        }
        else {
          fVar14 = SUB84(dVar16 * dVar26,0);
        }
        dVar16 = in_xd8;
        if (cVar36 == '\0') {
          dVar16 = (double)CONCAT44(SUB84(in_dr8,0),SUB84(in_dr0,0));
        }
        if (cVar35 == '\0') {
          dVar16 = (double)CONCAT44((float)((ulonglong)dVar16 >> 0x20) * SUB84(dVar17,0),
                                    SUB84(dVar16,0));
        }
        else {
          dVar16 = dVar16 * dVar17;
        }
        if (cVar36 == '\0') {
          dVar17 = (double)CONCAT44(*(undefined4 *)(pdVar6 + 4),SUB84(dVar17,0));
          dVar26 = (double)CONCAT44(fVar18,*(undefined4 *)(pdVar3 + 4));
          dVar15 = (double)CONCAT44(SUB84(in_dr8,0),fVar14);
        }
        else {
          dVar17 = pdVar6[4];
          in_xd4 = pdVar3[4];
          dVar15 = in_xd8;
        }
        if (cVar35 == '\0') {
          dVar16 = (double)CONCAT44((float)((ulonglong)dVar16 >> 0x20) - SUB84(dVar15,0),
                                    SUB84(dVar16,0));
        }
        else {
          dVar16 = dVar16 - dVar15;
        }
        uVar25 = (undefined4)((ulonglong)dVar17 >> 0x20);
        if (cVar36 == '\0') {
          dVar15 = (double)CONCAT44((int)((ulonglong)dVar15 >> 0x20),uVar25);
        }
        if (cVar35 == '\0') {
          dVar15 = (double)CONCAT44((float)((ulonglong)dVar15 >> 0x20) * SUB84(dVar26,0),
                                    SUB84(dVar15,0));
        }
        else {
          dVar15 = dVar15 * dVar26;
        }
        dVar23 = in_dr8;
        if (cVar36 == '\0') {
          dVar16 = (double)CONCAT44((int)((ulonglong)dVar16 >> 0x20),uVar20);
          dVar23 = in_xd0;
        }
        if (cVar35 == '\0') {
          dVar16 = (double)CONCAT44((int)((ulonglong)dVar16 >> 0x20),
                                    SUB84(dVar16,0) * SUB84(dVar26,0));
          fVar18 = SUB84(dVar15,0) * (float)((ulonglong)dVar26 >> 0x20) -
                   (float)((ulonglong)dVar15 >> 0x20);
        }
        else {
          dVar16 = dVar16 * dVar26;
          fVar18 = SUB84(dVar15 * dVar26 - dVar15 * dVar26,0);
        }
        if (cVar36 == '\0') {
          dVar15 = (double)CONCAT44(*(undefined4 *)((int)pdVar12 + 0x24),fVar18);
        }
        else {
          dVar15 = *(double *)((int)pdVar12 + 0x24);
        }
        if (cVar35 == '\0') {
          dVar15 = (double)CONCAT44((float)((ulonglong)dVar15 >> 0x20) * SUB84(dVar15,0),
                                    SUB84(dVar15,0));
        }
        else {
          dVar15 = dVar15 * dVar15;
        }
        if (cVar36 == '\0') {
          dVar15 = (double)CONCAT44((int)((ulonglong)dVar15 >> 0x20),*(undefined4 *)(pdVar12 + 4));
        }
        if (cVar35 == '\0') {
          dVar15 = (double)CONCAT44((float)((ulonglong)dVar16 >> 0x20) * SUB84(dVar15,0) +
                                    (float)((ulonglong)dVar15 >> 0x20),SUB84(dVar15,0));
        }
        if (cVar36 == '\0') {
          dVar15 = (double)CONCAT44((int)((ulonglong)dVar15 >> 0x20),uVar25);
        }
        if (cVar35 == '\0') {
          fVar18 = SUB84(dVar15,0) * SUB84(dVar17,0);
          dVar15 = (double)CONCAT44((int)((ulonglong)dVar15 >> 0x20),fVar18);
          fVar18 = SUB84(dVar16,0) - fVar18;
        }
        else {
          dVar15 = dVar15 * dVar17;
          fVar18 = SUB84(dVar16 - dVar15,0);
        }
        if (cVar36 == '\0') {
          in_dr0 = (double)CONCAT44(fVar18,*(undefined4 *)pdVar12);
          in_xd0 = dVar23;
        }
        else {
          in_xd0 = *pdVar12;
          in_dr0 = dVar23;
        }
        if (cVar35 == '\0') {
          fVar18 = ((float)((ulonglong)in_dr0 >> 0x20) * SUB84(in_dr0,0) +
                   (float)((ulonglong)dVar15 >> 0x20)) * SUB84(dVar33,0);
        }
        else {
          fVar18 = (float)((ulonglong)(dVar15 * dVar33) >> 0x20);
        }
        if (cVar35 == '\0' && fVar18 < 0.0) {
          dVar26 = in_dr4;
          dVar17 = in_dr6;
          if (cVar36 != '\0') {
            in_xd6 = (double)CONCAT44(ar5,uVar22);
            in_xd4 = (double)CONCAT44(uVar24,uVar19);
            dVar26 = (double)CONCAT44(uVar19,uVar21);
            dVar17 = (double)CONCAT44(uVar22,uVar24);
          }
          ar7 = (double *)FUN_8c225f68(pdVar3,pdVar6,pdVar12,ar7);
        }
      }
LAB_8c22300a:
      psStack_50 = psStack_50 + (ar6 >> 0xe & 3) + 1;
      iVar11 = iVar11 + -1;
      uVar20 = (undefined4)((ulonglong)dVar33 >> 0x20);
      dVar33 = (double)CONCAT44(uVar20,-SUB84(dVar33,0));
      pdVar3 = pdVar6;
      pdVar6 = pdVar12;
      dVar16 = in_xd0;
    } while (iVar11 != 0);
    if (iVar7 != 0) {
      if (cVar36 == '\0') {
        in_dr0 = (double)CONCAT44(0x3f000000,SUB84(in_dr0,0));
        dVar16 = (double)CONCAT44(*(undefined4 *)((int)pdVar12 + 4),uVar20);
        dVar26 = (double)CONCAT44(*(undefined4 *)(pdVar12 + 1),*(undefined4 *)((int)pdVar12 + 0xc));
        pdVar12 = pdVar12 + 2;
        dVar17 = (double)CONCAT44(fVar31,SUB84(in_dr8,0));
      }
      else {
        dVar16 = *(double *)((int)pdVar12 + 4);
        in_dr0 = -2.681562215333027e+154;
        dVar26 = *(double *)((int)pdVar12 + 0xc);
        in_xd6 = *(double *)((int)pdVar12 + 0x14);
        pdVar12 = (double *)((int)pdVar12 + 0x1c);
        dVar17 = in_xd12;
        in_xd4 = dVar33;
      }
      if (cVar36 == '\0') {
        pdVar3 = (double *)((int)pdVar12 + 0x1c);
        pdVar6 = pdVar12 + 3;
      }
      else {
        pdVar3 = pdVar12 + 4;
        pdVar6 = pdVar3;
      }
      dVar15 = *pdVar6;
      fVar18 = (float)((ulonglong)in_dr0 >> 0x20);
      fVar14 = (float)((ulonglong)dVar15 >> 0x20);
      if (cVar35 == '\0') {
        dVar17 = (double)CONCAT44(fVar18 * SUB84(dVar15,0) + (float)((ulonglong)dVar17 >> 0x20),
                                  SUB84(dVar17,0));
        dVar16 = (double)CONCAT44((int)((ulonglong)dVar16 >> 0x20),fVar18 * fVar14 + SUB84(dVar16,0)
                                 );
      }
      uVar20 = (undefined4)((ulonglong)dVar16 >> 0x20);
      if (cVar36 == '\0') {
        *(int *)((int)ar7 + 0x14) = SUB84(dVar16,0);
        *(int *)(ar7 + 2) = (int)((ulonglong)dVar17 >> 0x20);
        *(int *)((int)ar7 + 0xc) = SUB84(dVar26,0);
        *(int *)(ar7 + 1) = (int)((ulonglong)dVar26 >> 0x20);
        pdVar6 = (double *)((int)ar7 + 4);
        *(undefined4 *)pdVar6 = uVar20;
      }
      else {
        ar7[2] = in_xd4;
        ar7[1] = dVar17;
        *ar7 = in_xd6;
        ar7[-1] = dVar26;
        pdVar6 = ar7 + -2;
        *pdVar6 = dVar16;
      }
      *(undefined4 *)((int)pdVar6 + -4) = 0xf0000000;
      if (cVar36 == '\0') {
        dVar17 = (double)CONCAT44(uVar21,SUB84(dVar17,0));
        dVar15 = (double)CONCAT44(fVar14,*(undefined4 *)((int)pdVar3 + -0x1c));
        pdVar3 = pdVar3 + -3;
        dVar26 = (double)((ulonglong)in_dr4 & 0xffffffff);
      }
      else {
        dVar17 = (double)CONCAT44(uVar19,uVar21);
        pdVar3 = (double *)((int)pdVar3 + -0x14);
        in_xd6 = (double)CONCAT44(uVar24,uVar19);
      }
      if (cVar35 == '\0') {
        in_dr8 = (double)CONCAT44((float)((ulonglong)dVar17 >> 0x20) * SUB84(dVar15,0),
                                  SUB84(dVar17,0));
      }
      else {
        in_dr8 = dVar17 * dVar15;
      }
      if (cVar36 == '\0') {
        dVar15 = (double)CONCAT44((int)((ulonglong)dVar15 >> 0x20),*(undefined4 *)pdVar3);
        pdVar3 = (double *)((int)pdVar3 + 4);
        dVar17 = (double)CONCAT44(uVar24,SUB84(dVar26,0));
      }
      else {
        pdVar3 = pdVar3 + 1;
        dVar17 = (double)CONCAT44(uVar22,uVar24);
      }
      if (cVar35 == '\0') {
        dVar17 = (double)CONCAT44((int)((ulonglong)dVar17 >> 0x20),SUB84(dVar17,0) + SUB84(dVar15,0)
                                 );
      }
      else {
        dVar17 = dVar17 + dVar15;
      }
      if (cVar36 == '\0') {
        dVar15 = (double)CONCAT44((int)((ulonglong)dVar15 >> 0x20),*(undefined4 *)pdVar3);
        pdVar3 = (double *)((int)pdVar3 + 4);
        dVar16 = (double)CONCAT44(uVar20,uVar22);
      }
      else {
        pdVar3 = pdVar3 + 1;
        in_xd4 = (double)CONCAT44(ar5,uVar22);
      }
      if (cVar35 == '\0') {
        dVar17 = (double)CONCAT44((float)((ulonglong)dVar17 >> 0x20) + SUB84(dVar15,0),
                                  SUB84(dVar17,0));
      }
      else {
        dVar17 = dVar17 + dVar15;
      }
      if (cVar36 == '\0') {
        dVar15 = (double)CONCAT44((int)((ulonglong)dVar15 >> 0x20),*(undefined4 *)pdVar3);
        pdVar3 = (double *)((int)pdVar3 + 4);
      }
      else {
        pdVar3 = pdVar3 + 1;
      }
      if (cVar35 == '\0') {
        fVar18 = SUB84(dVar16,0) + SUB84(dVar15,0);
      }
      else {
        fVar18 = SUB84(dVar16 + dVar15,0);
      }
      if (cVar36 == '\0') {
        uVar25 = (undefined4)((ulonglong)in_dr8 >> 0x20);
        uVar20 = *(undefined4 *)((int)pdVar3 + 0x14);
        in_dr8 = (double)CONCAT44(uVar25,uVar20);
        uVar30 = *(undefined4 *)(pdVar3 + 3);
        in_dr10 = (double)CONCAT44(uVar30,SUB84(in_dr10,0));
        dVar26 = (double)CONCAT44(*(undefined4 *)((int)pdVar3 + 0x1c),fVar18);
        *(undefined4 *)(pdVar6 + 7) = *(undefined4 *)((int)pdVar3 + 0x1c);
        *(undefined4 *)((int)pdVar6 + 0x34) = uVar30;
        *(undefined4 *)(pdVar6 + 6) = uVar20;
        *(float *)(pdVar6 + 5) = fVar18;
        *(int *)((int)pdVar6 + 0x24) = (int)((ulonglong)dVar17 >> 0x20);
        *(int *)(pdVar6 + 4) = SUB84(dVar17,0);
        pdVar6 = (double *)((int)pdVar6 + 0x1c);
        *(undefined4 *)pdVar6 = uVar25;
      }
      else {
        in_xd8 = *(double *)((int)pdVar3 + 0x14);
        in_dr10 = *(double *)((int)pdVar3 + 0x1c);
        dVar26 = *(double *)((int)pdVar3 + 0x24);
        *(double *)((int)pdVar6 + 0x34) = dVar26;
        *(double *)((int)pdVar6 + 0x2c) = in_dr10;
        *(double *)((int)pdVar6 + 0x24) = in_xd8;
        pdVar6[3] = in_xd4;
        pdVar6[2] = dVar17;
        pdVar6[1] = in_xd6;
        *pdVar6 = in_dr8;
      }
      iVar8 = iVar8 + iVar7 + 1;
      ar7 = pdVar6 + 4;
    }
    uStack_38 = uStack_38 - 1;
    if (uStack_38 == 0) {
      _DAT_8c4aa520 = _DAT_8c4aa520 + iVar8;
      _DAT_8c4aa51c = _DAT_8c4aa51c + iVar9;
      return ar7;
    }
  } while( true );
}

__asm__(".globl _FUN_8c222cec\n.set _FUN_8c222cec, _FUN_8c222cec_def\n");
