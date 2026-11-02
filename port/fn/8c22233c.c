#include "../decls.h"
double * FUN_8c22233c_def(short *ar4,int ar5,uint ar6,double *ar7)

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
  double *a6;
  undefined4 uVar12;
  double in_dr0;
  float fVar13;
  float fVar16;
  double dVar14;
  double dVar15;
  float fVar17;
  float fVar18;
  double in_dr4;
  undefined4 uVar20;
  double dVar19;
  float fVar21;
  undefined4 uVar22;
  double in_dr6;
  float fVar24;
  double dVar23;
  float fVar25;
  double in_dr8;
  float fVar27;
  double dVar26;
  double in_dr10;
  float fVar28;
  undefined4 uVar29;
  float fVar30;
  undefined4 uVar31;
  undefined4 in_fr15;
  double dVar32;
  double in_xd0;
  double dVar33;
  double in_xd4;
  double in_xd6;
  double in_xd8;
  double in_xd12;
  bool bVar34;
  char cVar35;
  char cVar36;
  short *psStack_5c;
  uint uStack_38;
  
  cVar36 = '\0';
  cVar35 = '\0';
  uVar20 = (undefined4)((ulonglong)in_dr4 >> 0x20);
  fVar17 = SUB84(in_dr4,0);
  fVar24 = (float)((ulonglong)in_dr6 >> 0x20);
  fVar21 = SUB84(in_dr6,0);
  fVar27 = (float)((ulonglong)in_dr8 >> 0x20);
  fVar25 = SUB84(in_dr8,0);
  fVar28 = (float)((ulonglong)in_dr10 >> 0x20);
  uStack_38 = ar6 & 0x3fff;
  if ((_DAT_8c4aa4f0 & 0x20000) == 0) {
    fVar30 = 0.5;
    dVar32 = (double)CONCAT44(0x3f000000,in_fr15);
  }
  else {
    fVar30 = DAT_8c277af8 + 0.5;
    dVar32 = (double)CONCAT44(DAT_8c277afc + 0.5,in_fr15);
  }
  iVar8 = 0;
  iVar9 = 0;
  uVar31 = 0x3f800000;
  dVar19 = in_dr4;
  dVar23 = in_dr6;
  dVar26 = in_dr8;
  psStack_5c = ar4;
  if ((_DAT_8c4aa4f0 & 0x80000000) != 0) {
    uVar31 = 0xbf800000;
  }
  do {
    psVar10 = psStack_5c + 1;
    iVar11 = (int)*psStack_5c;
    psVar2 = psStack_5c + 2;
    if (cVar36 == '\0') {
      dVar32 = (double)CONCAT44((int)((ulonglong)dVar32 >> 0x20),uVar31);
    }
    if (iVar11 < 0) {
      dVar32 = (double)CONCAT44((int)((ulonglong)dVar32 >> 0x20),-SUB84(dVar32,0));
      iVar11 = -iVar11;
    }
    iVar9 = iVar9 + iVar11;
    iVar7 = 0;
    psStack_5c = psStack_5c + 3;
    iVar11 = iVar11 + -2;
    pdVar3 = (double *)(*psVar10 * 0x40 + ar5);
    pdVar4 = (double *)(*psVar2 * 0x40 + ar5);
    dVar15 = in_xd0;
    do {
      uVar22 = SUB84(in_dr10,0);
      a6 = (double *)(*psStack_5c * 0x40 + ar5);
      if (cVar36 == '\0') {
        fVar16 = *(float *)pdVar3;
      }
      else {
        fVar16 = (float)((ulonglong)*pdVar3 >> 0x20);
      }
      dVar14 = (double)CONCAT44(fVar16,0x3f800000);
      bVar1 = false;
      fVar18 = SUB84(dVar19,0);
      if (cVar35 != '\0' || fVar16 <= 1.0) {
LAB_8c22243c:
        bVar1 = true;
        dVar19 = (double)CONCAT44(0x3f800000,fVar18);
        in_xd0 = dVar15;
      }
      else {
        if (cVar36 == '\0') {
          dVar14 = (double)CONCAT44(*(undefined4 *)pdVar4,0x3f800000);
        }
        else {
          dVar14 = *pdVar4;
        }
        if (cVar35 != '\0' || (float)((ulonglong)dVar14 >> 0x20) <= SUB84(dVar14,0))
        goto LAB_8c22243c;
        if (cVar36 == '\0') {
          fVar16 = *(float *)a6;
        }
        else {
          fVar16 = (float)((ulonglong)*a6 >> 0x20);
        }
        dVar14 = (double)CONCAT44(fVar16,0x3f800000);
        if (cVar35 != '\0' || fVar16 <= 1.0) goto LAB_8c22243c;
        if (cVar36 == '\0') {
          fVar18 = *(float *)((int)pdVar4 + 4);
          dVar19 = (double)CONCAT44((int)((ulonglong)dVar19 >> 0x20),fVar18);
          dVar14 = (double)CONCAT44(fVar18,*(undefined4 *)((int)pdVar3 + 4));
        }
        else {
          dVar14 = *(double *)((int)pdVar4 + 4);
          in_xd4 = dVar14;
        }
        if (cVar35 == '\0') {
          dVar14 = (double)CONCAT44((float)((ulonglong)dVar14 >> 0x20) - SUB84(dVar14,0),
                                    SUB84(dVar14,0));
        }
        else {
          dVar14 = dVar14 - dVar14;
        }
        if (cVar36 == '\0') {
          dVar14 = (double)CONCAT44((int)((ulonglong)dVar14 >> 0x20),*(undefined4 *)(a6 + 1));
          dVar23 = (double)CONCAT44(*(undefined4 *)(pdVar4 + 1),SUB84(dVar23,0));
        }
        else {
          dVar23 = pdVar4[1];
        }
        fVar16 = (float)((ulonglong)dVar23 >> 0x20);
        if (cVar35 == '\0') {
          dVar14 = (double)CONCAT44((int)((ulonglong)dVar14 >> 0x20),SUB84(dVar14,0) - fVar16);
        }
        else {
          dVar14 = dVar14 - dVar23;
        }
        in_xd0 = dVar23;
        if (cVar36 == '\0') {
          in_dr0 = (double)CONCAT44((int)((ulonglong)in_dr0 >> 0x20),fVar16);
          in_xd0 = dVar15;
        }
        if (cVar35 == '\0') {
          dVar14 = (double)CONCAT44((float)((ulonglong)dVar14 >> 0x20) * SUB84(dVar14,0),
                                    SUB84(dVar14,0));
        }
        else {
          dVar14 = dVar14 * dVar14;
        }
        if (cVar36 == '\0') {
          dVar14 = (double)CONCAT44((int)((ulonglong)dVar14 >> 0x20),*(undefined4 *)(pdVar3 + 1));
        }
        if (cVar35 == '\0') {
          dVar15 = (double)CONCAT44((int)((ulonglong)in_dr0 >> 0x20),
                                    SUB84(in_dr0,0) - SUB84(dVar14,0));
        }
        else {
          dVar15 = in_dr0 - dVar14;
        }
        if (cVar36 == '\0') {
          dVar14 = (double)CONCAT44((int)((ulonglong)dVar14 >> 0x20),*(undefined4 *)((int)a6 + 4));
        }
        if (cVar35 == '\0') {
          fVar13 = SUB84(dVar14,0) - fVar18;
          fVar16 = SUB84(dVar15,0) * fVar13;
          in_dr0 = (double)CONCAT44((int)((ulonglong)dVar15 >> 0x20),fVar16);
          dVar14 = (double)CONCAT44((float)((ulonglong)dVar14 >> 0x20) - fVar16,fVar13);
        }
        else {
          in_dr0 = dVar15 * (dVar14 - dVar19);
          dVar14 = (dVar14 - dVar19) - in_dr0;
        }
        dVar19 = dVar14;
        if (cVar36 == '\0') {
          dVar19 = (double)CONCAT44((int)((ulonglong)dVar14 >> 0x20),fVar18);
        }
        if (cVar35 == '\0') {
          dVar19 = (double)CONCAT44((float)((ulonglong)dVar19 >> 0x20) * SUB84(dVar32,0),
                                    SUB84(dVar19,0));
        }
        else {
          dVar19 = dVar19 * dVar32;
        }
      }
      if (cVar35 == '\0') {
        bVar34 = (float)((ulonglong)dVar19 >> 0x20) < 0.0;
      }
      else {
        bVar34 = dVar19 < (double)((ulonglong)dVar14 & 0xffffffff00000000);
      }
      uVar12 = (undefined4)((ulonglong)dVar32 >> 0x20);
      fVar16 = SUB84(in_dr0,0);
      if (bVar34) {
        if (iVar7 == 0) {
          if (cVar36 == '\0') {
            dVar19 = (double)CONCAT44(*(undefined4 *)((int)pdVar3 + 4),SUB84(dVar26,0));
            pdVar6 = pdVar3 + 1;
            fVar18 = 0.5;
            pdVar5 = pdVar3 + 2;
            dVar23 = (double)CONCAT44(uVar12,fVar30);
          }
          else {
            dVar19 = *(double *)((int)pdVar3 + 4);
            fVar16 = 0.5;
            fVar18 = -3.689349e+19;
            in_xd6 = *(double *)((int)pdVar3 + 0xc);
            pdVar6 = (double *)((int)pdVar3 + 0x14);
            pdVar5 = (double *)((int)pdVar3 + 0x1c);
            dVar23 = dVar32;
            in_xd4 = in_xd12;
          }
          dVar15 = *pdVar6;
          if (cVar36 == '\0') {
            dVar26 = (double)((ulonglong)*(uint *)(pdVar5 + 3) << 0x20);
            pdVar5 = (double *)((int)pdVar5 + 0x1c);
            fVar16 = *(float *)pdVar5;
          }
          else {
            dVar26 = pdVar5[3];
            pdVar5 = pdVar5 + 4;
            in_xd0 = *pdVar5;
          }
          if (cVar35 == '\0') {
            dVar23 = (double)CONCAT44(fVar18 * fVar16 + (float)((ulonglong)dVar23 >> 0x20),
                                      fVar18 * (float)((ulonglong)dVar26 >> 0x20) + SUB84(dVar23,0))
            ;
          }
          if (cVar36 == '\0') {
            *(int *)((int)ar7 + 0x14) = (int)((ulonglong)dVar23 >> 0x20);
            *(int *)(ar7 + 2) = SUB84(dVar23,0);
            *(int *)((int)ar7 + 0xc) = (int)((ulonglong)dVar15 >> 0x20);
            *(int *)(ar7 + 1) = SUB84(dVar15,0);
            pdVar6 = (double *)((int)ar7 + 4);
            *(int *)pdVar6 = (int)((ulonglong)dVar19 >> 0x20);
          }
          else {
            ar7[2] = dVar23;
            ar7[1] = in_xd4;
            *ar7 = dVar15;
            ar7[-1] = in_xd6;
            pdVar6 = ar7 + -2;
            *pdVar6 = dVar19;
          }
          *(undefined4 *)((int)pdVar6 + -4) = 0xe0000000;
          if (cVar36 == '\0') {
            dVar19 = (double)CONCAT44(*(undefined4 *)((int)pdVar5 + -0x1c),SUB84(dVar26,0));
            pdVar5 = pdVar5 + -3;
            dVar26 = (double)CONCAT44(fVar27,uVar20);
          }
          else {
            in_xd8 = (double)CONCAT44(fVar17,uVar20);
            dVar19 = *(double *)((int)pdVar5 + -0x1c);
            pdVar5 = (double *)((int)pdVar5 + -0x14);
            dVar26 = (double)CONCAT44(fVar24,fVar27);
          }
          if (cVar35 == '\0') {
            dVar26 = (double)CONCAT44((int)((ulonglong)dVar26 >> 0x20),
                                      SUB84(dVar26,0) * (float)((ulonglong)dVar19 >> 0x20));
          }
          else {
            dVar26 = dVar26 * dVar19;
          }
          if (cVar36 == '\0') {
            dVar19 = (double)CONCAT44(*(undefined4 *)pdVar5,fVar16);
            pdVar5 = (double *)((int)pdVar5 + 4);
            dVar15 = (double)((ulonglong)in_dr8 & 0xffffffff);
            fVar16 = fVar17;
          }
          else {
            dVar19 = *pdVar5;
            pdVar5 = pdVar5 + 1;
            in_xd6 = (double)CONCAT44(fVar21,fVar25);
            fVar16 = fVar27;
          }
          if (cVar35 == '\0') {
            dVar26 = (double)CONCAT44((float)((ulonglong)dVar19 >> 0x20) * fVar16 +
                                      (float)((ulonglong)dVar26 >> 0x20),SUB84(dVar26,0));
          }
          if (cVar36 == '\0') {
            dVar19 = (double)CONCAT44(*(undefined4 *)pdVar5,SUB84(dVar19,0));
            pdVar5 = (double *)((int)pdVar5 + 4);
            dVar15 = (double)CONCAT44(fVar28,SUB84(dVar15,0));
            fVar16 = fVar24;
          }
          else {
            dVar19 = *pdVar5;
            pdVar5 = pdVar5 + 1;
            dVar15 = (double)CONCAT44(ar5,fVar28);
            fVar16 = fVar25;
          }
          if (cVar35 == '\0') {
            dVar15 = (double)CONCAT44((int)((ulonglong)dVar15 >> 0x20),
                                      (float)((ulonglong)dVar19 >> 0x20) * fVar16 + SUB84(dVar15,0))
            ;
          }
          if (cVar36 == '\0') {
            in_dr0 = (double)CONCAT44(*(undefined4 *)pdVar5,SUB84(dVar19,0));
            pdVar5 = (double *)((int)pdVar5 + 4);
            fVar16 = fVar21;
          }
          else {
            in_dr0 = *pdVar5;
            pdVar5 = pdVar5 + 1;
            fVar16 = fVar28;
          }
          if (cVar36 == '\0') {
            dVar23 = (double)(ulonglong)*(uint *)((int)pdVar5 + 0x14);
            pdVar5 = pdVar5 + 3;
          }
          else {
            in_xd4 = *(double *)((int)pdVar5 + 0x14);
            pdVar5 = (double *)((int)pdVar5 + 0x1c);
          }
          if (cVar35 == '\0') {
            dVar15 = (double)CONCAT44((float)((ulonglong)in_dr0 >> 0x20) * fVar16 +
                                      (float)((ulonglong)dVar15 >> 0x20),SUB84(dVar15,0));
          }
          if (cVar36 == '\0') {
            uVar29 = *(undefined4 *)pdVar5;
            dVar19 = (double)CONCAT44(uVar29,uVar22);
            *(undefined4 *)(pdVar6 + 7) = *(undefined4 *)((int)pdVar5 + 4);
            *(undefined4 *)((int)pdVar6 + 0x34) = uVar29;
            *(int *)(pdVar6 + 6) = SUB84(dVar23,0);
            *(int *)(pdVar6 + 5) = (int)((ulonglong)dVar15 >> 0x20);
            *(int *)((int)pdVar6 + 0x24) = SUB84(dVar15,0);
            *(int *)(pdVar6 + 4) = (int)((ulonglong)dVar26 >> 0x20);
            pdVar6 = (double *)((int)pdVar6 + 0x1c);
            *(int *)pdVar6 = SUB84(dVar26,0);
          }
          else {
            dVar19 = *pdVar5;
            *(double *)((int)pdVar6 + 0x34) = pdVar5[1];
            *(double *)((int)pdVar6 + 0x2c) = dVar19;
            *(double *)((int)pdVar6 + 0x24) = in_xd4;
            pdVar6[3] = dVar15;
            pdVar6[2] = in_xd6;
            pdVar6[1] = dVar26;
            *pdVar6 = in_xd8;
          }
          uVar22 = SUB84(dVar19,0);
          iVar7 = 1;
          ar7 = pdVar6 + 4;
        }
        if (cVar36 == '\0') {
          uVar29 = SUB84(in_dr0,0);
          fVar16 = 0.5;
          dVar23 = (double)CONCAT44(*(undefined4 *)((int)pdVar4 + 4),*(undefined4 *)(pdVar4 + 1));
          pdVar5 = pdVar4 + 2;
          dVar15 = (double)CONCAT44(*(undefined4 *)((int)pdVar4 + 0xc),fVar30);
          dVar19 = (double)CONCAT44(uVar12,SUB84(dVar26,0));
        }
        else {
          dVar23 = *(double *)((int)pdVar4 + 4);
          uVar29 = 0x3f000000;
          fVar16 = -3.689349e+19;
          in_xd4 = *(double *)((int)pdVar4 + 0xc);
          dVar15 = *(double *)((int)pdVar4 + 0x14);
          pdVar5 = (double *)((int)pdVar4 + 0x1c);
          in_xd6 = in_xd12;
          dVar19 = dVar32;
        }
        if (cVar36 == '\0') {
          pdVar6 = (double *)((int)pdVar5 + 0x1c);
          pdVar5 = pdVar5 + 3;
        }
        else {
          pdVar6 = pdVar5 + 4;
          pdVar5 = pdVar6;
        }
        dVar26 = *pdVar5;
        fVar18 = (float)((ulonglong)dVar26 >> 0x20);
        if (cVar35 == '\0') {
          dVar15 = (double)CONCAT44((int)((ulonglong)dVar15 >> 0x20),
                                    fVar16 * SUB84(dVar26,0) + SUB84(dVar15,0));
          dVar19 = (double)CONCAT44(fVar16 * fVar18 + (float)((ulonglong)dVar19 >> 0x20),
                                    SUB84(dVar19,0));
        }
        uVar12 = (undefined4)((ulonglong)dVar23 >> 0x20);
        if (cVar36 == '\0') {
          *(int *)((int)ar7 + 0x14) = (int)((ulonglong)dVar19 >> 0x20);
          *(int *)(ar7 + 2) = SUB84(dVar15,0);
          *(int *)((int)ar7 + 0xc) = (int)((ulonglong)dVar15 >> 0x20);
          *(int *)(ar7 + 1) = SUB84(dVar23,0);
          pdVar5 = (double *)((int)ar7 + 4);
          *(undefined4 *)pdVar5 = uVar12;
        }
        else {
          ar7[2] = dVar19;
          ar7[1] = in_xd6;
          *ar7 = dVar15;
          ar7[-1] = in_xd4;
          pdVar5 = ar7 + -2;
          *pdVar5 = dVar23;
        }
        *(undefined4 *)((int)pdVar5 + -4) = 0xe0000000;
        if (cVar36 == '\0') {
          dVar23 = (double)CONCAT44(uVar12,uVar20);
          dVar26 = (double)CONCAT44(fVar18,*(undefined4 *)((int)pdVar6 + -0x1c));
          pdVar6 = pdVar6 + -3;
          in_dr10 = (double)CONCAT44(fVar27,uVar22);
        }
        else {
          in_xd4 = (double)CONCAT44(fVar17,uVar20);
          pdVar6 = (double *)((int)pdVar6 + -0x14);
          in_dr10 = (double)CONCAT44(fVar24,fVar27);
        }
        if (cVar35 == '\0') {
          fVar16 = SUB84(dVar23,0) * SUB84(dVar26,0);
        }
        else {
          fVar16 = SUB84(dVar23 * dVar26,0);
        }
        if (cVar36 == '\0') {
          dVar26 = (double)((ulonglong)in_dr4 & 0xffffffff);
          dVar23 = (double)CONCAT44(*(undefined4 *)pdVar6,uVar29);
          pdVar6 = (double *)((int)pdVar6 + 4);
          dVar19 = (double)((ulonglong)in_dr8 & 0xffffffff);
        }
        else {
          dVar23 = *pdVar6;
          pdVar6 = pdVar6 + 1;
          in_xd8 = (double)CONCAT44(fVar21,fVar25);
        }
        fVar18 = SUB84(dVar26,0);
        if (cVar35 == '\0') {
          in_dr10 = (double)CONCAT44((float)((ulonglong)dVar23 >> 0x20) * fVar18 +
                                     (float)((ulonglong)in_dr10 >> 0x20),SUB84(in_dr10,0));
        }
        if (cVar36 == '\0') {
          dVar23 = (double)CONCAT44(*(undefined4 *)pdVar6,SUB84(dVar23,0));
          pdVar6 = (double *)((int)pdVar6 + 4);
          dVar26 = (double)CONCAT44(fVar28,SUB84(dVar19,0));
          fVar18 = fVar24;
        }
        else {
          dVar23 = *pdVar6;
          pdVar6 = pdVar6 + 1;
          dVar26 = (double)CONCAT44(ar5,fVar28);
        }
        if (cVar35 == '\0') {
          dVar26 = (double)CONCAT44((int)((ulonglong)dVar26 >> 0x20),
                                    (float)((ulonglong)dVar23 >> 0x20) * fVar18 + SUB84(dVar26,0));
        }
        if (cVar36 == '\0') {
          in_dr0 = (double)CONCAT44(*(undefined4 *)pdVar6,SUB84(dVar23,0));
          pdVar6 = (double *)((int)pdVar6 + 4);
          fVar18 = fVar21;
        }
        else {
          in_dr0 = *pdVar6;
          pdVar6 = pdVar6 + 1;
        }
        if (cVar36 == '\0') {
          dVar15 = (double)(ulonglong)*(uint *)((int)pdVar6 + 0x14);
          pdVar6 = pdVar6 + 3;
        }
        else {
          in_xd6 = *(double *)((int)pdVar6 + 0x14);
          pdVar6 = (double *)((int)pdVar6 + 0x1c);
        }
        if (cVar35 == '\0') {
          dVar26 = (double)CONCAT44((float)((ulonglong)in_dr0 >> 0x20) * fVar18 +
                                    (float)((ulonglong)dVar26 >> 0x20),SUB84(dVar26,0));
        }
        if (cVar36 == '\0') {
          uVar22 = *(undefined4 *)pdVar6;
          dVar23 = (double)CONCAT44(uVar22,SUB84(dVar15,0));
          dVar19 = (double)CONCAT44(*(undefined4 *)((int)pdVar6 + 4),fVar16);
          *(undefined4 *)(pdVar5 + 7) = *(undefined4 *)((int)pdVar6 + 4);
          *(undefined4 *)((int)pdVar5 + 0x34) = uVar22;
          *(int *)(pdVar5 + 6) = SUB84(dVar15,0);
          *(int *)(pdVar5 + 5) = (int)((ulonglong)dVar26 >> 0x20);
          *(int *)((int)pdVar5 + 0x24) = SUB84(dVar26,0);
          *(int *)(pdVar5 + 4) = (int)((ulonglong)in_dr10 >> 0x20);
          pdVar5 = (double *)((int)pdVar5 + 0x1c);
          *(float *)pdVar5 = fVar16;
        }
        else {
          dVar23 = *pdVar6;
          dVar19 = pdVar6[1];
          *(double *)((int)pdVar5 + 0x34) = dVar19;
          *(double *)((int)pdVar5 + 0x2c) = dVar23;
          *(double *)((int)pdVar5 + 0x24) = in_xd6;
          pdVar5[3] = dVar26;
          pdVar5[2] = in_xd8;
          pdVar5[1] = in_dr10;
          *pdVar5 = in_xd4;
        }
        ar7 = pdVar5 + 4;
        iVar7 = iVar7 + 1;
      }
      else if (iVar7 != 0) {
        if (cVar36 == '\0') {
          fVar18 = 0.5;
          dVar26 = (double)CONCAT44(*(undefined4 *)(pdVar4 + 1),SUB84(dVar26,0));
          dVar19 = (double)CONCAT44(*(undefined4 *)((int)pdVar4 + 4),uVar12);
          pdVar5 = pdVar4 + 2;
          dVar23 = (double)CONCAT44(*(undefined4 *)((int)pdVar4 + 0xc),fVar30);
        }
        else {
          dVar19 = *(double *)((int)pdVar4 + 4);
          fVar16 = 0.5;
          fVar18 = -3.689349e+19;
          dVar26 = *(double *)((int)pdVar4 + 0xc);
          dVar23 = *(double *)((int)pdVar4 + 0x14);
          pdVar5 = (double *)((int)pdVar4 + 0x1c);
          in_xd6 = in_xd12;
          in_xd4 = dVar32;
        }
        if (cVar36 == '\0') {
          dVar15 = (double)((ulonglong)*(uint *)(pdVar5 + 3) << 0x20);
          pdVar5 = (double *)((int)pdVar5 + 0x1c);
          fVar16 = *(float *)pdVar5;
        }
        else {
          dVar15 = pdVar5[3];
          pdVar5 = pdVar5 + 4;
          in_xd0 = *pdVar5;
        }
        if (cVar35 == '\0') {
          dVar23 = (double)CONCAT44((int)((ulonglong)dVar23 >> 0x20),
                                    fVar18 * (float)((ulonglong)dVar15 >> 0x20) + SUB84(dVar23,0));
          dVar19 = (double)CONCAT44((int)((ulonglong)dVar19 >> 0x20),
                                    fVar18 * fVar16 + SUB84(dVar19,0));
        }
        uVar12 = (undefined4)((ulonglong)dVar19 >> 0x20);
        if (cVar36 == '\0') {
          *(int *)((int)ar7 + 0x14) = SUB84(dVar19,0);
          *(int *)(ar7 + 2) = SUB84(dVar23,0);
          *(int *)((int)ar7 + 0xc) = (int)((ulonglong)dVar23 >> 0x20);
          *(int *)(ar7 + 1) = (int)((ulonglong)dVar26 >> 0x20);
          pdVar6 = (double *)((int)ar7 + 4);
          *(undefined4 *)pdVar6 = uVar12;
        }
        else {
          ar7[2] = in_xd4;
          ar7[1] = in_xd6;
          *ar7 = dVar23;
          ar7[-1] = dVar26;
          pdVar6 = ar7 + -2;
          *pdVar6 = dVar19;
        }
        *(undefined4 *)((int)pdVar6 + -4) = 0xf0000000;
        if (cVar36 == '\0') {
          dVar19 = (double)CONCAT44(uVar12,uVar20);
          dVar15 = (double)CONCAT44(*(undefined4 *)((int)pdVar5 + -0x1c),SUB84(dVar15,0));
          pdVar5 = pdVar5 + -3;
          dVar23 = (double)CONCAT44(fVar27,SUB84(dVar23,0));
        }
        else {
          in_xd4 = (double)CONCAT44(fVar17,uVar20);
          dVar15 = *(double *)((int)pdVar5 + -0x1c);
          pdVar5 = (double *)((int)pdVar5 + -0x14);
          dVar23 = (double)CONCAT44(fVar24,fVar27);
        }
        if (cVar35 == '\0') {
          fVar18 = SUB84(dVar19,0) * (float)((ulonglong)dVar15 >> 0x20);
        }
        else {
          fVar18 = SUB84(dVar19 * dVar15,0);
        }
        if (cVar36 == '\0') {
          dVar19 = (double)CONCAT44(*(undefined4 *)pdVar5,fVar16);
          pdVar5 = (double *)((int)pdVar5 + 4);
          in_dr10 = (double)CONCAT44(fVar25,uVar22);
          fVar16 = fVar17;
        }
        else {
          dVar19 = *pdVar5;
          pdVar5 = pdVar5 + 1;
          in_dr10 = (double)CONCAT44(fVar21,fVar25);
          fVar16 = fVar27;
        }
        if (cVar35 == '\0') {
          dVar23 = (double)CONCAT44((float)((ulonglong)dVar19 >> 0x20) * fVar16 +
                                    (float)((ulonglong)dVar23 >> 0x20),SUB84(dVar23,0));
        }
        if (cVar36 == '\0') {
          dVar19 = (double)CONCAT44(*(undefined4 *)pdVar5,SUB84(dVar19,0));
          pdVar5 = (double *)((int)pdVar5 + 4);
          dVar26 = (double)(ulonglong)(uint)fVar28;
          fVar16 = fVar24;
        }
        else {
          dVar19 = *pdVar5;
          pdVar5 = pdVar5 + 1;
          in_xd8 = (double)CONCAT44(ar5,fVar28);
          fVar16 = fVar25;
        }
        if (cVar35 == '\0') {
          in_dr10 = (double)CONCAT44((float)((ulonglong)dVar19 >> 0x20) * fVar16 +
                                     (float)((ulonglong)in_dr10 >> 0x20),SUB84(in_dr10,0));
        }
        if (cVar36 == '\0') {
          in_dr0 = (double)CONCAT44(*(undefined4 *)pdVar5,SUB84(dVar19,0));
          pdVar5 = (double *)((int)pdVar5 + 4);
          fVar16 = fVar21;
        }
        else {
          in_dr0 = *pdVar5;
          pdVar5 = pdVar5 + 1;
          fVar16 = fVar28;
        }
        if (cVar36 == '\0') {
          dVar26 = (double)CONCAT44(*(undefined4 *)((int)pdVar5 + 0x14),SUB84(dVar26,0));
          pdVar5 = pdVar5 + 3;
        }
        else {
          dVar26 = *(double *)((int)pdVar5 + 0x14);
          pdVar5 = (double *)((int)pdVar5 + 0x1c);
        }
        if (cVar35 == '\0') {
          dVar26 = (double)CONCAT44((int)((ulonglong)dVar26 >> 0x20),
                                    (float)((ulonglong)in_dr0 >> 0x20) * fVar16 + SUB84(dVar26,0));
        }
        if (cVar36 == '\0') {
          uVar12 = (undefined4)((ulonglong)dVar23 >> 0x20);
          uVar22 = *(undefined4 *)pdVar5;
          dVar23 = (double)CONCAT44(uVar12,uVar22);
          dVar19 = (double)CONCAT44(*(undefined4 *)((int)pdVar5 + 4),fVar18);
          *(undefined4 *)(pdVar6 + 7) = *(undefined4 *)((int)pdVar5 + 4);
          *(undefined4 *)((int)pdVar6 + 0x34) = uVar22;
          *(int *)(pdVar6 + 6) = (int)((ulonglong)dVar26 >> 0x20);
          *(int *)(pdVar6 + 5) = SUB84(dVar26,0);
          *(int *)((int)pdVar6 + 0x24) = (int)((ulonglong)in_dr10 >> 0x20);
          *(undefined4 *)(pdVar6 + 4) = uVar12;
          pdVar6 = (double *)((int)pdVar6 + 0x1c);
          *(float *)pdVar6 = fVar18;
        }
        else {
          in_xd6 = *pdVar5;
          dVar19 = pdVar5[1];
          *(double *)((int)pdVar6 + 0x34) = dVar19;
          *(double *)((int)pdVar6 + 0x2c) = in_xd6;
          *(double *)((int)pdVar6 + 0x24) = dVar26;
          pdVar6[3] = in_xd8;
          pdVar6[2] = in_dr10;
          pdVar6[1] = dVar23;
          *pdVar6 = in_xd4;
        }
        iVar8 = iVar8 + iVar7 + 1;
        iVar7 = 0;
        ar7 = pdVar6 + 4;
      }
      if (bVar1) {
        if (cVar36 == '\0') {
          fVar16 = *(float *)pdVar3;
        }
        else {
          fVar16 = (float)((ulonglong)*pdVar3 >> 0x20);
        }
        dVar15 = (double)CONCAT44(fVar16,0x3f800000);
        if (cVar35 == '\0' && fVar16 < 1.0) {
          if (cVar36 == '\0') {
            dVar15 = (double)CONCAT44(*(undefined4 *)pdVar4,0x3f800000);
          }
          else {
            dVar15 = *pdVar4;
          }
          if (cVar35 == '\0' && (float)((ulonglong)dVar15 >> 0x20) < SUB84(dVar15,0)) {
            if (cVar36 == '\0') {
              fVar16 = *(float *)a6;
            }
            else {
              fVar16 = (float)((ulonglong)*a6 >> 0x20);
            }
            dVar15 = (double)CONCAT44(fVar16,0x3f800000);
            if (cVar35 == '\0' && fVar16 < 1.0) goto LAB_8c22269a;
          }
        }
        if (cVar36 == '\0') {
          uVar22 = *(undefined4 *)((int)pdVar4 + 0x24);
          dVar23 = (double)CONCAT44(uVar22,SUB84(dVar23,0));
          dVar19 = (double)CONCAT44(*(undefined4 *)pdVar3,*(undefined4 *)pdVar4);
          dVar26 = (double)CONCAT44((int)((ulonglong)dVar26 >> 0x20),
                                    *(undefined4 *)((int)pdVar3 + 0x24));
          dVar15 = (double)CONCAT44((int)((ulonglong)dVar15 >> 0x20),uVar22);
        }
        else {
          in_xd4 = *pdVar4;
          dVar23 = *(double *)((int)pdVar4 + 0x24);
          dVar19 = *pdVar3;
          in_xd8 = *(double *)((int)pdVar3 + 0x24);
          uVar22 = (undefined4)((ulonglong)dVar23 >> 0x20);
        }
        fVar16 = (float)((ulonglong)dVar19 >> 0x20);
        if (cVar35 == '\0') {
          fVar18 = SUB84(dVar15,0) * fVar16;
        }
        else {
          fVar18 = SUB84(dVar15 * dVar19,0);
        }
        dVar15 = in_xd4;
        if (cVar36 == '\0') {
          dVar15 = (double)CONCAT44(SUB84(dVar19,0),SUB84(in_dr0,0));
        }
        if (cVar35 == '\0') {
          dVar15 = (double)CONCAT44((float)((ulonglong)dVar15 >> 0x20) * SUB84(dVar26,0),
                                    SUB84(dVar15,0));
        }
        else {
          dVar15 = dVar15 * dVar26;
        }
        if (cVar36 == '\0') {
          dVar26 = (double)CONCAT44(*(undefined4 *)(pdVar4 + 4),SUB84(dVar26,0));
          dVar23 = (double)CONCAT44(uVar22,*(undefined4 *)(pdVar3 + 4));
          dVar14 = (double)CONCAT44(SUB84(dVar19,0),fVar18);
        }
        else {
          dVar26 = pdVar4[4];
          in_xd6 = pdVar3[4];
          dVar14 = in_xd4;
        }
        if (cVar35 == '\0') {
          dVar15 = (double)CONCAT44((float)((ulonglong)dVar15 >> 0x20) - SUB84(dVar14,0),
                                    SUB84(dVar15,0));
        }
        else {
          dVar15 = dVar15 - dVar14;
        }
        uVar22 = (undefined4)((ulonglong)dVar26 >> 0x20);
        if (cVar36 == '\0') {
          dVar14 = (double)CONCAT44((int)((ulonglong)dVar14 >> 0x20),uVar22);
        }
        if (cVar35 == '\0') {
          dVar14 = (double)CONCAT44((float)((ulonglong)dVar14 >> 0x20) * SUB84(dVar23,0),
                                    SUB84(dVar14,0));
        }
        else {
          dVar14 = dVar14 * dVar23;
        }
        dVar33 = dVar23;
        if (cVar36 == '\0') {
          dVar15 = (double)CONCAT44((int)((ulonglong)dVar15 >> 0x20),
                                    (int)((ulonglong)dVar23 >> 0x20));
          dVar33 = in_xd0;
        }
        if (cVar35 == '\0') {
          dVar15 = (double)CONCAT44((int)((ulonglong)dVar15 >> 0x20),
                                    SUB84(dVar15,0) * SUB84(dVar23,0));
          fVar16 = SUB84(dVar14,0) * fVar16 - (float)((ulonglong)dVar14 >> 0x20);
        }
        else {
          dVar15 = dVar15 * dVar23;
          fVar16 = SUB84(dVar14 * dVar19 - dVar14 * dVar19,0);
        }
        if (cVar36 == '\0') {
          dVar14 = (double)CONCAT44(*(undefined4 *)((int)a6 + 0x24),fVar16);
        }
        else {
          dVar14 = *(double *)((int)a6 + 0x24);
        }
        if (cVar35 == '\0') {
          dVar14 = (double)CONCAT44((float)((ulonglong)dVar14 >> 0x20) * SUB84(dVar14,0),
                                    SUB84(dVar14,0));
        }
        else {
          dVar14 = dVar14 * dVar14;
        }
        if (cVar36 == '\0') {
          dVar14 = (double)CONCAT44((int)((ulonglong)dVar14 >> 0x20),*(undefined4 *)(a6 + 4));
        }
        if (cVar35 == '\0') {
          dVar14 = (double)CONCAT44((float)((ulonglong)dVar15 >> 0x20) * SUB84(dVar14,0) +
                                    (float)((ulonglong)dVar14 >> 0x20),SUB84(dVar14,0));
        }
        if (cVar36 == '\0') {
          dVar14 = (double)CONCAT44((int)((ulonglong)dVar14 >> 0x20),uVar22);
        }
        if (cVar35 == '\0') {
          fVar16 = SUB84(dVar14,0) * SUB84(dVar26,0);
          dVar14 = (double)CONCAT44((int)((ulonglong)dVar14 >> 0x20),fVar16);
          fVar16 = SUB84(dVar15,0) - fVar16;
        }
        else {
          dVar14 = dVar14 * dVar26;
          fVar16 = SUB84(dVar15 - dVar14,0);
        }
        if (cVar36 == '\0') {
          in_dr0 = (double)CONCAT44(fVar16,*(undefined4 *)a6);
          in_xd0 = dVar33;
        }
        else {
          in_xd0 = *a6;
          in_dr0 = dVar33;
        }
        if (cVar35 == '\0') {
          fVar16 = ((float)((ulonglong)in_dr0 >> 0x20) * SUB84(in_dr0,0) +
                   (float)((ulonglong)dVar14 >> 0x20)) * SUB84(dVar32,0);
        }
        else {
          fVar16 = (float)((ulonglong)(dVar14 * dVar32) >> 0x20);
        }
        if (cVar35 == '\0' && fVar16 < 0.0) {
          if (cVar36 == '\0') {
            in_dr10 = (double)((ulonglong)in_dr10 & 0xffffffff);
            dVar23 = (double)((ulonglong)in_dr6 & 0xffffffff);
            dVar19 = in_dr4;
            dVar26 = in_dr8;
          }
          else {
            in_dr10 = (double)CONCAT44(ar5,fVar28);
            in_xd8 = (double)CONCAT44(fVar21,fVar25);
            dVar26 = (double)CONCAT44(fVar24,fVar27);
            in_xd6 = (double)CONCAT44(fVar28,fVar21);
            dVar23 = (double)CONCAT44(fVar25,fVar24);
            in_xd4 = (double)CONCAT44(fVar27,fVar17);
            dVar19 = (double)CONCAT44(fVar17,uVar20);
          }
          ar7 = (double *)FUN_8c224b00(pdVar3,pdVar4,a6,ar7);
        }
      }
LAB_8c22269a:
      psStack_5c = psStack_5c + (ar6 >> 0xe & 3) + 1;
      iVar11 = iVar11 + -1;
      uVar22 = (undefined4)((ulonglong)dVar32 >> 0x20);
      dVar32 = (double)CONCAT44(uVar22,-SUB84(dVar32,0));
      pdVar3 = pdVar4;
      pdVar4 = a6;
      dVar15 = in_xd0;
    } while (iVar11 != 0);
    if (iVar7 != 0) {
      pdVar3 = (double *)((int)a6 + 4);
      if (cVar36 == '\0') {
        uVar12 = SUB84(in_dr0,0);
        fVar16 = 0.5;
        pdVar4 = a6 + 2;
        dVar23 = (double)CONCAT44(*(undefined4 *)((int)a6 + 0xc),fVar30);
        dVar19 = (double)CONCAT44(uVar22,SUB84(dVar26,0));
      }
      else {
        in_xd4 = *pdVar3;
        pdVar3 = (double *)((int)a6 + 0xc);
        uVar12 = 0x3f000000;
        fVar16 = -3.689349e+19;
        dVar23 = *(double *)((int)a6 + 0x14);
        pdVar4 = (double *)((int)a6 + 0x1c);
        in_xd6 = in_xd12;
        dVar19 = dVar32;
      }
      dVar26 = *pdVar3;
      if (cVar36 == '\0') {
        pdVar3 = (double *)((int)pdVar4 + 0x1c);
        pdVar4 = pdVar4 + 3;
      }
      else {
        pdVar3 = pdVar4 + 4;
        pdVar4 = pdVar3;
      }
      dVar15 = *pdVar4;
      fVar18 = (float)((ulonglong)dVar15 >> 0x20);
      if (cVar35 == '\0') {
        dVar23 = (double)CONCAT44((int)((ulonglong)dVar23 >> 0x20),
                                  fVar16 * SUB84(dVar15,0) + SUB84(dVar23,0));
        dVar19 = (double)CONCAT44(fVar16 * fVar18 + (float)((ulonglong)dVar19 >> 0x20),
                                  SUB84(dVar19,0));
      }
      uVar22 = (undefined4)((ulonglong)dVar26 >> 0x20);
      if (cVar36 == '\0') {
        *(int *)((int)ar7 + 0x14) = (int)((ulonglong)dVar19 >> 0x20);
        *(int *)(ar7 + 2) = SUB84(dVar23,0);
        *(int *)((int)ar7 + 0xc) = (int)((ulonglong)dVar23 >> 0x20);
        *(undefined4 *)(ar7 + 1) = uVar22;
        pdVar4 = (double *)((int)ar7 + 4);
        *(int *)pdVar4 = SUB84(dVar26,0);
      }
      else {
        ar7[2] = dVar19;
        ar7[1] = in_xd6;
        *ar7 = dVar23;
        ar7[-1] = dVar26;
        pdVar4 = ar7 + -2;
        *pdVar4 = in_xd4;
      }
      *(undefined4 *)((int)pdVar4 + -4) = 0xf0000000;
      if (cVar36 == '\0') {
        dVar26 = (double)CONCAT44(uVar22,uVar20);
        dVar15 = (double)CONCAT44(fVar18,*(undefined4 *)((int)pdVar3 + -0x1c));
        pdVar3 = pdVar3 + -3;
        dVar19 = (double)(ulonglong)(uint)fVar27;
      }
      else {
        in_xd4 = (double)CONCAT44(fVar17,uVar20);
        pdVar3 = (double *)((int)pdVar3 + -0x14);
        in_xd8 = (double)CONCAT44(fVar24,fVar27);
      }
      fVar16 = SUB84(dVar15,0);
      if (cVar35 == '\0') {
        fVar18 = SUB84(dVar26,0) * fVar16;
      }
      else {
        fVar18 = SUB84(dVar26 * dVar15,0);
      }
      if (cVar36 == '\0') {
        dVar15 = (double)CONCAT44(*(undefined4 *)pdVar3,uVar12);
        pdVar3 = (double *)((int)pdVar3 + 4);
        dVar26 = (double)CONCAT44(fVar25,SUB84(dVar19,0));
        fVar16 = fVar17;
      }
      else {
        dVar15 = *pdVar3;
        pdVar3 = pdVar3 + 1;
        dVar26 = (double)CONCAT44(fVar21,fVar25);
      }
      if (cVar35 == '\0') {
        dVar26 = (double)CONCAT44((int)((ulonglong)dVar26 >> 0x20),
                                  (float)((ulonglong)dVar15 >> 0x20) * fVar16 + SUB84(dVar26,0));
      }
      if (cVar36 == '\0') {
        dVar19 = (double)CONCAT44(*(undefined4 *)pdVar3,SUB84(dVar15,0));
        pdVar3 = (double *)((int)pdVar3 + 4);
        dVar23 = (double)(ulonglong)(uint)fVar28;
        fVar16 = fVar24;
      }
      else {
        dVar19 = *pdVar3;
        pdVar3 = pdVar3 + 1;
        in_xd6 = (double)CONCAT44(ar5,fVar28);
      }
      if (cVar35 == '\0') {
        dVar26 = (double)CONCAT44((float)((ulonglong)dVar19 >> 0x20) * fVar16 +
                                  (float)((ulonglong)dVar26 >> 0x20),SUB84(dVar26,0));
      }
      if (cVar36 == '\0') {
        in_dr0 = (double)CONCAT44(*(undefined4 *)pdVar3,SUB84(dVar19,0));
        pdVar3 = (double *)((int)pdVar3 + 4);
        fVar16 = fVar21;
      }
      else {
        in_dr0 = *pdVar3;
        pdVar3 = pdVar3 + 1;
      }
      if (cVar36 == '\0') {
        dVar23 = (double)CONCAT44(*(undefined4 *)((int)pdVar3 + 0x14),SUB84(dVar23,0));
        pdVar3 = pdVar3 + 3;
      }
      else {
        dVar23 = *(double *)((int)pdVar3 + 0x14);
        pdVar3 = (double *)((int)pdVar3 + 0x1c);
      }
      if (cVar35 == '\0') {
        dVar23 = (double)CONCAT44((int)((ulonglong)dVar23 >> 0x20),
                                  (float)((ulonglong)in_dr0 >> 0x20) * fVar16 + SUB84(dVar23,0));
      }
      if (cVar36 == '\0') {
        uVar22 = *(undefined4 *)pdVar3;
        in_dr10 = (double)CONCAT44(uVar22,SUB84(in_dr10,0));
        dVar19 = (double)CONCAT44(*(undefined4 *)((int)pdVar3 + 4),fVar18);
        *(undefined4 *)(pdVar4 + 7) = *(undefined4 *)((int)pdVar3 + 4);
        *(undefined4 *)((int)pdVar4 + 0x34) = uVar22;
        *(int *)(pdVar4 + 6) = (int)((ulonglong)dVar23 >> 0x20);
        *(int *)(pdVar4 + 5) = SUB84(dVar23,0);
        *(int *)((int)pdVar4 + 0x24) = (int)((ulonglong)dVar26 >> 0x20);
        *(int *)(pdVar4 + 4) = SUB84(dVar26,0);
        pdVar4 = (double *)((int)pdVar4 + 0x1c);
        *(float *)pdVar4 = fVar18;
      }
      else {
        in_dr10 = *pdVar3;
        dVar19 = pdVar3[1];
        *(double *)((int)pdVar4 + 0x34) = dVar19;
        *(double *)((int)pdVar4 + 0x2c) = in_dr10;
        *(double *)((int)pdVar4 + 0x24) = dVar23;
        pdVar4[3] = in_xd6;
        pdVar4[2] = dVar26;
        pdVar4[1] = in_xd8;
        *pdVar4 = in_xd4;
      }
      iVar8 = iVar8 + iVar7 + 1;
      ar7 = pdVar4 + 4;
    }
    uStack_38 = uStack_38 - 1;
    if (uStack_38 == 0) {
      _DAT_8c4aa520 = _DAT_8c4aa520 + iVar8;
      _DAT_8c4aa51c = _DAT_8c4aa51c + iVar9;
      return ar7;
    }
  } while( true );
}

__asm__(".globl _FUN_8c22233c\n.set _FUN_8c22233c, _FUN_8c22233c_def\n");
