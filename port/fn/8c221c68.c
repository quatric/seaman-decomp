#include "../decls.h"
double * FUN_8c221c68_def(short *ar4,int ar5,uint ar6,double *ar7)

{
  bool bVar1;
  short *psVar2;
  double *pdVar3;
  undefined8 *puVar4;
  double *pdVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  short *psVar9;
  int iVar10;
  double *a6;
  double *a5;
  float fVar11;
  double in_dr0;
  undefined8 uVar12;
  double dVar13;
  float fVar14;
  float fVar15;
  double in_dr2;
  double dVar16;
  double dVar17;
  float fVar18;
  float fVar19;
  double in_dr4;
  undefined4 uVar21;
  double dVar20;
  undefined4 uVar22;
  undefined4 uVar23;
  double in_dr6;
  float fVar25;
  double dVar24;
  float fVar26;
  undefined8 in_dr8;
  float fVar27;
  undefined4 uVar28;
  double in_dr10;
  double dVar29;
  undefined4 in_fr15;
  double dVar30;
  double in_xd0;
  double dVar31;
  double in_xd4;
  double in_xd6;
  double in_xd8;
  double in_xd12;
  bool bVar32;
  char cVar33;
  char cVar34;
  short *psStack_58;
  uint uStack_38;
  
  cVar34 = '\0';
  cVar33 = '\0';
  uVar21 = (undefined4)((ulonglong)in_dr4 >> 0x20);
  fVar18 = SUB84(in_dr4,0);
  fVar25 = (float)((ulonglong)in_dr6 >> 0x20);
  uVar22 = SUB84(in_dr6,0);
  fVar27 = (float)((ulonglong)in_dr8 >> 0x20);
  fVar26 = (float)in_dr8;
  uStack_38 = ar6 & 0x3fff;
  iVar7 = 0;
  iVar8 = 0;
  dVar29 = (double)CONCAT44((int)((ulonglong)in_dr10 >> 0x20),0x3f800000);
  dVar30 = (double)CONCAT44(0x3f800000,in_fr15);
  dVar20 = in_dr4;
  dVar24 = in_dr6;
  psStack_58 = ar4;
  if ((_DAT_8c4aa4f0 & 0x80000000) != 0) {
    dVar30 = (double)CONCAT44(0xbf800000,in_fr15);
  }
  do {
    psVar9 = psStack_58 + 1;
    iVar10 = (int)*psStack_58;
    psVar2 = psStack_58 + 2;
    if (cVar34 == '\0') {
      uVar23 = (undefined4)((ulonglong)dVar30 >> 0x20);
      dVar30 = (double)CONCAT44(uVar23,uVar23);
    }
    if (iVar10 < 0) {
      dVar30 = (double)CONCAT44((int)((ulonglong)dVar30 >> 0x20),-SUB84(dVar30,0));
      iVar10 = -iVar10;
    }
    iVar8 = iVar8 + iVar10;
    iVar6 = 0;
    psStack_58 = psStack_58 + 3;
    iVar10 = iVar10 + -2;
    pdVar5 = (double *)(*psVar9 * 0x40 + ar5);
    a5 = (double *)(*psVar2 * 0x40 + ar5);
    do {
      a6 = (double *)(*psStack_58 * 0x40 + ar5);
      if (cVar34 == '\0') {
        in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),*(undefined4 *)pdVar5);
      }
      fVar15 = SUB84(dVar29,0);
      if (cVar33 == '\0') {
        bVar32 = fVar15 < SUB84(in_dr2,0);
      }
      else {
        bVar32 = dVar29 < in_dr2;
      }
      bVar1 = false;
      fVar19 = SUB84(dVar20,0);
      if (bVar32) {
        if (cVar34 == '\0') {
          in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),*(undefined4 *)a5);
        }
        if (cVar33 == '\0') {
          bVar32 = fVar15 < SUB84(in_dr2,0);
        }
        else {
          bVar32 = dVar29 < in_dr2;
        }
        if (!bVar32) goto LAB_8c221d44;
        if (cVar34 == '\0') {
          in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),*(undefined4 *)a6);
        }
        if (cVar33 == '\0') {
          bVar32 = fVar15 < SUB84(in_dr2,0);
        }
        else {
          bVar32 = dVar29 < in_dr2;
        }
        if (!bVar32) goto LAB_8c221d44;
        if (cVar34 == '\0') {
          fVar19 = *(float *)((int)a5 + 4);
          dVar20 = (double)CONCAT44((int)((ulonglong)dVar20 >> 0x20),fVar19);
          dVar16 = (double)CONCAT44(fVar19,*(undefined4 *)((int)pdVar5 + 4));
        }
        else {
          dVar16 = *(double *)((int)a5 + 4);
          in_xd4 = dVar16;
        }
        if (cVar33 == '\0') {
          dVar16 = (double)CONCAT44((float)((ulonglong)dVar16 >> 0x20) - SUB84(dVar16,0),
                                    SUB84(dVar16,0));
        }
        else {
          dVar16 = dVar16 - dVar16;
        }
        if (cVar34 == '\0') {
          dVar16 = (double)CONCAT44((int)((ulonglong)dVar16 >> 0x20),*(undefined4 *)(a6 + 1));
          dVar24 = (double)CONCAT44(*(undefined4 *)(a5 + 1),SUB84(dVar24,0));
        }
        else {
          dVar24 = a5[1];
        }
        fVar11 = (float)((ulonglong)dVar24 >> 0x20);
        if (cVar33 == '\0') {
          dVar16 = (double)CONCAT44((int)((ulonglong)dVar16 >> 0x20),SUB84(dVar16,0) - fVar11);
        }
        else {
          dVar16 = dVar16 - dVar24;
        }
        dVar13 = dVar24;
        if (cVar34 == '\0') {
          in_dr0 = (double)CONCAT44((int)((ulonglong)in_dr0 >> 0x20),fVar11);
          dVar13 = in_xd0;
        }
        if (cVar33 == '\0') {
          dVar16 = (double)CONCAT44((float)((ulonglong)dVar16 >> 0x20) * SUB84(dVar16,0),
                                    SUB84(dVar16,0));
        }
        else {
          dVar16 = dVar16 * dVar16;
        }
        if (cVar34 == '\0') {
          dVar16 = (double)CONCAT44((int)((ulonglong)dVar16 >> 0x20),*(undefined4 *)(pdVar5 + 1));
        }
        if (cVar33 == '\0') {
          dVar17 = (double)CONCAT44((int)((ulonglong)in_dr0 >> 0x20),
                                    SUB84(in_dr0,0) - SUB84(dVar16,0));
        }
        else {
          dVar17 = in_dr0 - dVar16;
        }
        if (cVar34 == '\0') {
          dVar16 = (double)CONCAT44((int)((ulonglong)dVar16 >> 0x20),*(undefined4 *)((int)a6 + 4));
        }
        if (cVar33 == '\0') {
          fVar14 = SUB84(dVar16,0) - fVar19;
          fVar11 = SUB84(dVar17,0) * fVar14;
          in_dr0 = (double)CONCAT44((int)((ulonglong)dVar17 >> 0x20),fVar11);
          in_dr2 = (double)CONCAT44((float)((ulonglong)dVar16 >> 0x20) - fVar11,fVar14);
        }
        else {
          in_dr0 = dVar17 * (dVar16 - dVar20);
          in_dr2 = (dVar16 - dVar20) - in_dr0;
        }
        dVar20 = in_dr2;
        if (cVar34 == '\0') {
          dVar20 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),fVar19);
        }
        in_xd0 = dVar13;
        if (cVar33 == '\0') {
          dVar20 = (double)CONCAT44((float)((ulonglong)dVar20 >> 0x20) * SUB84(dVar30,0),
                                    SUB84(dVar20,0));
        }
        else {
          dVar20 = dVar20 * dVar30;
        }
      }
      else {
LAB_8c221d44:
        bVar1 = true;
        dVar20 = in_xd12;
        if (cVar34 == '\0') {
          dVar20 = (double)CONCAT44(fVar15,fVar19);
        }
      }
      uVar23 = SUB84(dVar24,0);
      in_dr2 = (double)((ulonglong)in_dr2 & 0xffffffff00000000);
      if (cVar33 == '\0') {
        bVar32 = (float)((ulonglong)dVar20 >> 0x20) < 0.0;
      }
      else {
        bVar32 = dVar20 < in_dr2;
      }
      uVar28 = (undefined4)((ulonglong)dVar29 >> 0x20);
      if (bVar32) {
        if (iVar6 == 0) {
          if (cVar34 == '\0') {
            in_dr10 = (double)CONCAT44(*(undefined4 *)((int)pdVar5 + 4),SUB84(in_dr10,0));
            pdVar3 = pdVar5 + 1;
            dVar24 = (double)CONCAT44(fVar27,uVar21);
            dVar16 = (double)((ulonglong)*(uint *)(pdVar5 + 2) << 0x20);
            puVar4 = (undefined8 *)((int)pdVar5 + 0x14);
            dVar20 = (double)CONCAT44(uVar28,SUB84(dVar20,0));
          }
          else {
            in_dr10 = *(double *)((int)pdVar5 + 4);
            in_xd6 = (double)CONCAT44(fVar18,uVar21);
            in_xd8 = *(double *)((int)pdVar5 + 0xc);
            pdVar3 = (double *)((int)pdVar5 + 0x14);
            dVar24 = (double)CONCAT44(fVar25,fVar27);
            dVar16 = *(double *)((int)pdVar5 + 0x1c);
            puVar4 = (undefined8 *)((int)pdVar5 + 0x24);
            dVar20 = dVar29;
          }
          dVar13 = *pdVar3;
          if (cVar33 == '\0') {
            dVar24 = (double)CONCAT44((int)((ulonglong)dVar24 >> 0x20),
                                      SUB84(dVar24,0) * (float)((ulonglong)dVar16 >> 0x20));
          }
          else {
            dVar24 = dVar24 * dVar16;
          }
          if (cVar34 == '\0') {
            uVar12 = CONCAT44(*(undefined4 *)puVar4,SUB84(in_dr0,0));
            puVar4 = (undefined8 *)((int)puVar4 + 4);
            dVar20 = (double)CONCAT44((int)((ulonglong)dVar20 >> 0x20),fVar26);
            fVar19 = SUB84(dVar16,0);
            fVar11 = fVar18;
          }
          else {
            uVar12 = *puVar4;
            puVar4 = puVar4 + 1;
            in_xd4 = (double)CONCAT44(uVar22,fVar26);
            fVar19 = fVar18;
            fVar11 = fVar27;
          }
          if (cVar33 == '\0') {
            dVar24 = (double)CONCAT44((float)((ulonglong)uVar12 >> 0x20) * fVar11 +
                                      (float)((ulonglong)dVar24 >> 0x20),SUB84(dVar24,0));
          }
          if (cVar34 == '\0') {
            uVar12 = CONCAT44(*(undefined4 *)puVar4,(int)uVar12);
            pdVar3 = (double *)((int)puVar4 + 4);
            fVar11 = fVar25;
          }
          else {
            uVar12 = *puVar4;
            pdVar3 = (double *)(puVar4 + 1);
            fVar19 = fVar25;
            fVar11 = fVar26;
          }
          if (cVar33 == '\0') {
            dVar20 = (double)CONCAT44((int)((ulonglong)dVar20 >> 0x20),
                                      (float)((ulonglong)uVar12 >> 0x20) * fVar11 + SUB84(dVar20,0))
            ;
          }
          if (cVar34 == '\0') {
            in_dr2 = (double)CONCAT44(*(undefined4 *)pdVar3,fVar19);
            in_dr0 = (double)CONCAT44(uVar22,(int)uVar12);
          }
          else {
            in_dr2 = *pdVar3;
            in_dr0 = (double)CONCAT44(ar5,uVar22);
          }
          if (cVar33 == '\0') {
            dVar20 = (double)CONCAT44((float)((ulonglong)in_dr0 >> 0x20) *
                                      (float)((ulonglong)in_dr2 >> 0x20) +
                                      (float)((ulonglong)dVar20 >> 0x20),SUB84(dVar20,0));
          }
          if (cVar34 == '\0') {
            *(int *)((int)ar7 + 0x1c) = (int)((ulonglong)dVar20 >> 0x20);
            *(int *)(ar7 + 3) = SUB84(dVar20,0);
            *(int *)((int)ar7 + 0x14) = (int)((ulonglong)dVar24 >> 0x20);
            *(int *)(ar7 + 2) = SUB84(dVar24,0);
            *(int *)((int)ar7 + 0xc) = (int)((ulonglong)dVar13 >> 0x20);
            *(int *)(ar7 + 1) = SUB84(dVar13,0);
            pdVar3 = (double *)((int)ar7 + 4);
            *(int *)pdVar3 = (int)((ulonglong)in_dr10 >> 0x20);
          }
          else {
            ar7[3] = dVar20;
            ar7[2] = in_xd4;
            ar7[1] = dVar24;
            *ar7 = in_xd6;
            ar7[-1] = dVar13;
            ar7[-2] = in_xd8;
            pdVar3 = ar7 + -3;
            *pdVar3 = in_dr10;
          }
          *(undefined4 *)((int)pdVar3 + -4) = 0xe0000000;
          iVar6 = 1;
          ar7 = (double *)((int)pdVar3 + 0x1c);
        }
        if (cVar34 == '\0') {
          dVar16 = (double)CONCAT44(*(undefined4 *)((int)a5 + 4),*(undefined4 *)(a5 + 1));
          dVar24 = (double)CONCAT44(uVar21,fVar27);
          in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),*(undefined4 *)(a5 + 2));
          puVar4 = (undefined8 *)((int)a5 + 0x14);
          dVar20 = (double)CONCAT44(uVar28,*(undefined4 *)((int)a5 + 0xc));
        }
        else {
          dVar16 = *(double *)((int)a5 + 4);
          dVar24 = (double)CONCAT44(fVar18,uVar21);
          in_xd8 = *(double *)((int)a5 + 0xc);
          in_xd6 = (double)CONCAT44(fVar25,fVar27);
          in_xd4 = *(double *)((int)a5 + 0x14);
          puVar4 = (undefined8 *)((int)a5 + 0x24);
          dVar20 = dVar29;
        }
        if (cVar33 == '\0') {
          dVar24 = (double)CONCAT44((float)((ulonglong)dVar24 >> 0x20) * SUB84(in_dr2,0),
                                    SUB84(dVar24,0));
        }
        else {
          dVar24 = dVar24 * in_dr2;
        }
        if (cVar34 == '\0') {
          in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),fVar18);
          uVar12 = CONCAT44(*(undefined4 *)puVar4,SUB84(in_dr0,0));
          puVar4 = (undefined8 *)((int)puVar4 + 4);
          in_dr10 = (double)CONCAT44(fVar26,SUB84(in_dr10,0));
        }
        else {
          uVar12 = *puVar4;
          puVar4 = puVar4 + 1;
          in_dr10 = (double)CONCAT44(uVar22,fVar26);
        }
        if (cVar33 == '\0') {
          dVar24 = (double)CONCAT44((int)((ulonglong)dVar24 >> 0x20),
                                    (float)((ulonglong)uVar12 >> 0x20) * SUB84(in_dr2,0) +
                                    SUB84(dVar24,0));
        }
        if (cVar34 == '\0') {
          in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),fVar25);
          uVar12 = CONCAT44(*(undefined4 *)puVar4,(int)uVar12);
          puVar4 = (undefined8 *)((int)puVar4 + 4);
        }
        else {
          uVar12 = *puVar4;
          puVar4 = puVar4 + 1;
        }
        if (cVar33 == '\0') {
          in_dr10 = (double)CONCAT44((float)((ulonglong)uVar12 >> 0x20) * SUB84(in_dr2,0) +
                                     (float)((ulonglong)in_dr10 >> 0x20),SUB84(in_dr10,0));
        }
        if (cVar34 == '\0') {
          in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),*(undefined4 *)puVar4);
          in_dr0 = (double)CONCAT44(uVar22,(int)uVar12);
        }
        else {
          in_dr0 = (double)CONCAT44(ar5,uVar22);
        }
        if (cVar33 == '\0') {
          dVar20 = (double)CONCAT44((float)((ulonglong)in_dr0 >> 0x20) * SUB84(in_dr2,0) +
                                    (float)((ulonglong)dVar20 >> 0x20),SUB84(dVar20,0));
        }
        if (cVar34 == '\0') {
          *(int *)((int)ar7 + 0x1c) = (int)((ulonglong)dVar20 >> 0x20);
          *(int *)(ar7 + 3) = (int)((ulonglong)in_dr10 >> 0x20);
          *(int *)((int)ar7 + 0x14) = SUB84(dVar24,0);
          *(int *)(ar7 + 2) = (int)((ulonglong)dVar24 >> 0x20);
          *(int *)((int)ar7 + 0xc) = SUB84(dVar20,0);
          *(int *)(ar7 + 1) = SUB84(dVar16,0);
          pdVar3 = (double *)((int)ar7 + 4);
          *(int *)pdVar3 = (int)((ulonglong)dVar16 >> 0x20);
        }
        else {
          ar7[3] = dVar20;
          ar7[2] = in_dr10;
          ar7[1] = in_xd6;
          *ar7 = dVar24;
          ar7[-1] = in_xd4;
          ar7[-2] = in_xd8;
          pdVar3 = ar7 + -3;
          *pdVar3 = dVar16;
        }
        *(undefined4 *)((int)pdVar3 + -4) = 0xe0000000;
        ar7 = (double *)((int)pdVar3 + 0x1c);
        iVar6 = iVar6 + 1;
      }
      else if (iVar6 != 0) {
        if (cVar34 == '\0') {
          uVar23 = *(undefined4 *)((int)a5 + 4);
          dVar16 = (double)CONCAT44(uVar21,*(undefined4 *)(a5 + 1));
          in_dr10 = (double)CONCAT44(fVar27,SUB84(in_dr10,0));
          dVar13 = (double)((ulonglong)*(uint *)(a5 + 2) << 0x20);
          puVar4 = (undefined8 *)((int)a5 + 0x14);
          dVar20 = (double)CONCAT44(uVar28,*(undefined4 *)((int)a5 + 0xc));
        }
        else {
          in_xd6 = *(double *)((int)a5 + 4);
          dVar16 = (double)CONCAT44(fVar18,uVar21);
          in_xd8 = *(double *)((int)a5 + 0xc);
          in_dr10 = (double)CONCAT44(fVar25,fVar27);
          in_xd4 = *(double *)((int)a5 + 0x14);
          dVar13 = *(double *)((int)a5 + 0x1c);
          puVar4 = (undefined8 *)((int)a5 + 0x24);
          dVar20 = dVar29;
        }
        if (cVar33 == '\0') {
          dVar16 = (double)CONCAT44((float)((ulonglong)dVar16 >> 0x20) *
                                    (float)((ulonglong)dVar13 >> 0x20),SUB84(dVar16,0));
        }
        else {
          dVar16 = dVar16 * dVar13;
        }
        if (cVar34 == '\0') {
          uVar12 = CONCAT44(*(undefined4 *)puVar4,SUB84(in_dr0,0));
          puVar4 = (undefined8 *)((int)puVar4 + 4);
          dVar24 = (double)CONCAT44(fVar26,uVar23);
          fVar19 = SUB84(dVar13,0);
          fVar11 = fVar18;
        }
        else {
          uVar12 = *puVar4;
          puVar4 = puVar4 + 1;
          dVar24 = (double)CONCAT44(uVar22,fVar26);
          fVar19 = fVar18;
          fVar11 = fVar27;
        }
        if (cVar33 == '\0') {
          in_dr10 = (double)CONCAT44((float)((ulonglong)uVar12 >> 0x20) * fVar11 +
                                     (float)((ulonglong)in_dr10 >> 0x20),SUB84(in_dr10,0));
        }
        if (cVar34 == '\0') {
          uVar12 = CONCAT44(*(undefined4 *)puVar4,(int)uVar12);
          pdVar3 = (double *)((int)puVar4 + 4);
          fVar11 = fVar25;
        }
        else {
          uVar12 = *puVar4;
          pdVar3 = (double *)(puVar4 + 1);
          fVar19 = fVar25;
          fVar11 = fVar26;
        }
        if (cVar33 == '\0') {
          dVar24 = (double)CONCAT44((float)((ulonglong)uVar12 >> 0x20) * fVar11 +
                                    (float)((ulonglong)dVar24 >> 0x20),SUB84(dVar24,0));
        }
        if (cVar34 == '\0') {
          in_dr2 = (double)CONCAT44(*(undefined4 *)pdVar3,fVar19);
          in_dr0 = (double)CONCAT44(uVar22,(int)uVar12);
        }
        else {
          in_dr2 = *pdVar3;
          in_dr0 = (double)CONCAT44(ar5,uVar22);
        }
        if (cVar33 == '\0') {
          dVar20 = (double)CONCAT44((float)((ulonglong)in_dr0 >> 0x20) *
                                    (float)((ulonglong)in_dr2 >> 0x20) +
                                    (float)((ulonglong)dVar20 >> 0x20),SUB84(dVar20,0));
        }
        if (cVar34 == '\0') {
          *(int *)((int)ar7 + 0x1c) = (int)((ulonglong)dVar20 >> 0x20);
          *(int *)(ar7 + 3) = (int)((ulonglong)dVar24 >> 0x20);
          *(int *)((int)ar7 + 0x14) = (int)((ulonglong)in_dr10 >> 0x20);
          *(int *)(ar7 + 2) = (int)((ulonglong)dVar16 >> 0x20);
          *(int *)((int)ar7 + 0xc) = SUB84(dVar20,0);
          *(int *)(ar7 + 1) = SUB84(dVar16,0);
          pdVar3 = (double *)((int)ar7 + 4);
          *(int *)pdVar3 = SUB84(dVar24,0);
        }
        else {
          ar7[3] = dVar20;
          ar7[2] = dVar24;
          ar7[1] = in_dr10;
          *ar7 = dVar16;
          ar7[-1] = in_xd4;
          ar7[-2] = in_xd8;
          pdVar3 = ar7 + -3;
          *pdVar3 = in_xd6;
        }
        *(undefined4 *)((int)pdVar3 + -4) = 0xf0000000;
        iVar7 = iVar7 + iVar6 + 1;
        iVar6 = 0;
        ar7 = (double *)((int)pdVar3 + 0x1c);
      }
      uVar23 = SUB84(dVar24,0);
      if (bVar1) {
        if (cVar34 == '\0') {
          in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),*(undefined4 *)pdVar5);
        }
        if (cVar33 == '\0') {
          bVar32 = SUB84(in_dr2,0) < fVar15;
        }
        else {
          bVar32 = in_dr2 < dVar29;
        }
        if (bVar32) {
          if (cVar34 == '\0') {
            in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),*(undefined4 *)a5);
          }
          if (cVar33 == '\0') {
            bVar32 = SUB84(in_dr2,0) < fVar15;
          }
          else {
            bVar32 = in_dr2 < dVar29;
          }
          if (bVar32) {
            if (cVar34 == '\0') {
              in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),*(undefined4 *)a6);
            }
            if (cVar33 == '\0') {
              bVar32 = SUB84(in_dr2,0) < fVar15;
            }
            else {
              bVar32 = in_dr2 < dVar29;
            }
            if (bVar32) goto LAB_8c221efe;
          }
        }
        if (cVar34 == '\0') {
          uVar23 = *(undefined4 *)a5;
          uVar28 = *(undefined4 *)((int)a5 + 0x24);
          dVar16 = (double)CONCAT44(uVar28,*(undefined4 *)pdVar5);
          dVar20 = (double)CONCAT44(*(undefined4 *)((int)pdVar5 + 0x24),SUB84(dVar20,0));
          in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),uVar28);
        }
        else {
          in_xd6 = *a5;
          dVar16 = *(double *)((int)a5 + 0x24);
          in_xd8 = *pdVar5;
          dVar20 = *(double *)((int)pdVar5 + 0x24);
          uVar28 = (undefined4)((ulonglong)dVar16 >> 0x20);
        }
        if (cVar33 == '\0') {
          fVar15 = SUB84(in_dr2,0) * SUB84(dVar16,0);
        }
        else {
          fVar15 = SUB84(in_dr2 * dVar16,0);
        }
        dVar13 = in_xd6;
        if (cVar34 == '\0') {
          dVar13 = (double)CONCAT44(uVar23,SUB84(in_dr0,0));
        }
        fVar19 = (float)((ulonglong)dVar20 >> 0x20);
        if (cVar33 == '\0') {
          dVar13 = (double)CONCAT44((float)((ulonglong)dVar13 >> 0x20) * fVar19,SUB84(dVar13,0));
        }
        else {
          dVar13 = dVar13 * dVar20;
        }
        if (cVar34 == '\0') {
          dVar20 = (double)CONCAT44(fVar19,*(undefined4 *)(a5 + 4));
          dVar24 = (double)CONCAT44(*(undefined4 *)(pdVar5 + 4),uVar23);
          dVar17 = (double)CONCAT44(uVar23,fVar15);
        }
        else {
          in_xd4 = a5[4];
          dVar24 = pdVar5[4];
          dVar17 = in_xd6;
        }
        if (cVar33 == '\0') {
          dVar13 = (double)CONCAT44((float)((ulonglong)dVar13 >> 0x20) - SUB84(dVar17,0),
                                    SUB84(dVar13,0));
        }
        else {
          dVar13 = dVar13 - dVar17;
        }
        if (cVar34 == '\0') {
          dVar17 = (double)CONCAT44((int)((ulonglong)dVar17 >> 0x20),SUB84(dVar20,0));
        }
        fVar15 = (float)((ulonglong)dVar24 >> 0x20);
        if (cVar33 == '\0') {
          dVar17 = (double)CONCAT44((float)((ulonglong)dVar17 >> 0x20) * fVar15,SUB84(dVar17,0));
        }
        else {
          dVar17 = dVar17 * dVar24;
        }
        dVar31 = dVar16;
        if (cVar34 == '\0') {
          dVar13 = (double)CONCAT44((int)((ulonglong)dVar13 >> 0x20),uVar28);
          dVar31 = in_xd0;
        }
        if (cVar33 == '\0') {
          dVar13 = (double)CONCAT44((int)((ulonglong)dVar13 >> 0x20),SUB84(dVar13,0) * fVar15);
          fVar15 = SUB84(dVar17,0) * SUB84(dVar16,0) - (float)((ulonglong)dVar17 >> 0x20);
        }
        else {
          dVar13 = dVar13 * dVar24;
          fVar15 = SUB84(dVar17 * dVar16 - dVar17 * dVar16,0);
        }
        if (cVar34 == '\0') {
          dVar16 = (double)CONCAT44(*(undefined4 *)((int)a6 + 0x24),fVar15);
        }
        else {
          dVar16 = *(double *)((int)a6 + 0x24);
        }
        if (cVar33 == '\0') {
          dVar16 = (double)CONCAT44((float)((ulonglong)dVar16 >> 0x20) * SUB84(dVar16,0),
                                    SUB84(dVar16,0));
        }
        else {
          dVar16 = dVar16 * dVar16;
        }
        if (cVar34 == '\0') {
          dVar16 = (double)CONCAT44((int)((ulonglong)dVar16 >> 0x20),*(undefined4 *)(a6 + 4));
        }
        if (cVar33 == '\0') {
          dVar16 = (double)CONCAT44((float)((ulonglong)dVar13 >> 0x20) * SUB84(dVar16,0) +
                                    (float)((ulonglong)dVar16 >> 0x20),SUB84(dVar16,0));
        }
        if (cVar34 == '\0') {
          dVar16 = (double)CONCAT44((int)((ulonglong)dVar16 >> 0x20),SUB84(dVar20,0));
        }
        if (cVar33 == '\0') {
          fVar15 = SUB84(dVar16,0) * (float)((ulonglong)dVar20 >> 0x20);
          dVar16 = (double)CONCAT44((int)((ulonglong)dVar16 >> 0x20),fVar15);
          fVar15 = SUB84(dVar13,0) - fVar15;
        }
        else {
          dVar16 = dVar16 * dVar20;
          fVar15 = SUB84(dVar13 - dVar16,0);
        }
        if (cVar34 == '\0') {
          in_dr0 = (double)CONCAT44(fVar15,*(undefined4 *)a6);
          in_xd0 = dVar31;
        }
        else {
          in_xd0 = *a6;
          in_dr0 = dVar31;
        }
        if (cVar33 == '\0') {
          fVar15 = ((float)((ulonglong)in_dr0 >> 0x20) * SUB84(in_dr0,0) +
                   (float)((ulonglong)dVar16 >> 0x20)) * SUB84(dVar30,0);
        }
        else {
          fVar15 = (float)((ulonglong)(dVar16 * dVar30) >> 0x20);
        }
        in_dr2 = (double)((ulonglong)(uint)fVar15 << 0x20);
        if (cVar33 == '\0' && fVar15 < 0.0) {
          if (cVar34 == '\0') {
            dVar24 = (double)((ulonglong)in_dr6 & 0xffffffff);
            in_dr10 = (double)((ulonglong)in_dr10 & 0xffffffff);
            dVar20 = in_dr4;
          }
          else {
            in_xd8 = (double)CONCAT44(uVar22,fVar26);
            in_xd6 = (double)CONCAT44(ar5,uVar22);
            dVar24 = (double)CONCAT44(fVar26,fVar25);
            in_xd4 = (double)CONCAT44(fVar27,fVar18);
            dVar20 = (double)CONCAT44(fVar18,uVar21);
            in_dr10 = dVar29;
          }
          ar7 = (double *)FUN_8c2230f0(pdVar5,a5,a6,ar7);
        }
      }
LAB_8c221efe:
      uVar23 = SUB84(dVar24,0);
      psStack_58 = psStack_58 + (ar6 >> 0xe & 3) + 1;
      iVar10 = iVar10 + -1;
      dVar30 = (double)CONCAT44((int)((ulonglong)dVar30 >> 0x20),-SUB84(dVar30,0));
      pdVar5 = a5;
      a5 = a6;
    } while (iVar10 != 0);
    if (iVar6 != 0) {
      if (cVar34 == '\0') {
        uVar23 = *(undefined4 *)(a6 + 1);
        in_dr10 = (double)CONCAT44(fVar27,SUB84(in_dr10,0));
        dVar16 = (double)CONCAT44(*(undefined4 *)((int)a6 + 0xc),uVar21);
        in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),*(undefined4 *)(a6 + 2));
        puVar4 = (undefined8 *)((int)a6 + 0x14);
        dVar20 = (double)CONCAT44((int)((ulonglong)dVar29 >> 0x20),*(undefined4 *)((int)a6 + 4));
      }
      else {
        in_xd4 = *(double *)((int)a6 + 4);
        in_xd8 = (double)CONCAT44(fVar18,uVar21);
        in_xd6 = *(double *)((int)a6 + 0xc);
        in_dr10 = (double)CONCAT44(fVar25,fVar27);
        dVar16 = *(double *)((int)a6 + 0x14);
        puVar4 = (undefined8 *)((int)a6 + 0x24);
        dVar20 = dVar29;
      }
      if (cVar33 == '\0') {
        dVar16 = (double)CONCAT44((int)((ulonglong)dVar16 >> 0x20),SUB84(dVar16,0) * SUB84(in_dr2,0)
                                 );
      }
      else {
        dVar16 = dVar16 * in_dr2;
      }
      if (cVar34 == '\0') {
        in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),fVar18);
        uVar12 = CONCAT44(*(undefined4 *)puVar4,SUB84(in_dr0,0));
        puVar4 = (undefined8 *)((int)puVar4 + 4);
        dVar24 = (double)CONCAT44(fVar26,uVar23);
      }
      else {
        uVar12 = *puVar4;
        puVar4 = puVar4 + 1;
        dVar24 = (double)CONCAT44(uVar22,fVar26);
      }
      if (cVar33 == '\0') {
        in_dr10 = (double)CONCAT44((float)((ulonglong)uVar12 >> 0x20) * SUB84(in_dr2,0) +
                                   (float)((ulonglong)in_dr10 >> 0x20),SUB84(in_dr10,0));
      }
      if (cVar34 == '\0') {
        in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),fVar25);
        uVar12 = CONCAT44(*(undefined4 *)puVar4,(int)uVar12);
        puVar4 = (undefined8 *)((int)puVar4 + 4);
      }
      else {
        uVar12 = *puVar4;
        puVar4 = puVar4 + 1;
      }
      if (cVar33 == '\0') {
        dVar24 = (double)CONCAT44((float)((ulonglong)uVar12 >> 0x20) * SUB84(in_dr2,0) +
                                  (float)((ulonglong)dVar24 >> 0x20),SUB84(dVar24,0));
      }
      if (cVar34 == '\0') {
        in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),*(undefined4 *)puVar4);
        in_dr0 = (double)CONCAT44(uVar22,(int)uVar12);
      }
      else {
        in_dr0 = (double)CONCAT44(ar5,uVar22);
      }
      if (cVar33 == '\0') {
        dVar20 = (double)CONCAT44((float)((ulonglong)in_dr0 >> 0x20) * SUB84(in_dr2,0) +
                                  (float)((ulonglong)dVar20 >> 0x20),SUB84(dVar20,0));
      }
      if (cVar34 == '\0') {
        *(int *)((int)ar7 + 0x1c) = (int)((ulonglong)dVar20 >> 0x20);
        *(int *)(ar7 + 3) = (int)((ulonglong)dVar24 >> 0x20);
        *(int *)((int)ar7 + 0x14) = (int)((ulonglong)in_dr10 >> 0x20);
        *(int *)(ar7 + 2) = SUB84(dVar16,0);
        *(int *)((int)ar7 + 0xc) = (int)((ulonglong)dVar16 >> 0x20);
        *(int *)(ar7 + 1) = SUB84(dVar24,0);
        pdVar5 = (double *)((int)ar7 + 4);
        *(int *)pdVar5 = SUB84(dVar20,0);
      }
      else {
        ar7[3] = dVar20;
        ar7[2] = dVar24;
        ar7[1] = in_dr10;
        *ar7 = in_xd8;
        ar7[-1] = dVar16;
        ar7[-2] = in_xd6;
        pdVar5 = ar7 + -3;
        *pdVar5 = in_xd4;
      }
      *(undefined4 *)((int)pdVar5 + -4) = 0xf0000000;
      iVar7 = iVar7 + iVar6 + 1;
      ar7 = (double *)((int)pdVar5 + 0x1c);
    }
    uStack_38 = uStack_38 - 1;
    if (uStack_38 == 0) {
      _DAT_8c4aa520 = _DAT_8c4aa520 + iVar7;
      _DAT_8c4aa51c = _DAT_8c4aa51c + iVar8;
      return ar7;
    }
  } while( true );
}

__asm__(".globl _FUN_8c221c68\n.set _FUN_8c221c68, _FUN_8c221c68_def\n");
