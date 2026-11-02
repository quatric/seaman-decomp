#include "../decls.h"
double * FUN_8c214358_def(short *ar4,int ar5,uint ar6,double *ar7)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  short *psVar4;
  int iVar5;
  double *pdVar6;
  int iVar7;
  double *pdVar8;
  double *pdVar9;
  double *pdVar10;
  int iVar11;
  int *piVar12;
  undefined8 *puVar13;
  double *pdVar14;
  double *pdVar15;
  double *pdVar16;
  int *piVar17;
  double in_dr0;
  double dVar18;
  double in_dr2;
  double dVar19;
  float fVar20;
  double in_dr4;
  float fVar21;
  float fVar22;
  double in_dr6;
  float fVar23;
  float fVar24;
  double in_dr8;
  float fVar25;
  float fVar26;
  undefined8 in_dr10;
  double dVar27;
  float fVar28;
  undefined4 uVar29;
  double in_dr12;
  double dVar30;
  double in_dr14;
  double dVar31;
  undefined8 in_xd4;
  undefined8 in_xd6;
  undefined8 in_xd8;
  bool bVar32;
  char cVar33;
  char cVar34;
  undefined1 auStack_30 [4];
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  cVar34 = '\0';
  cVar33 = '\0';
  uStack_20 = (undefined4)((ulonglong)in_dr12 >> 0x20);
  uStack_24 = SUB84(in_dr12,0);
  uStack_28 = (undefined4)((ulonglong)in_dr14 >> 0x20);
  uStack_2c = SUB84(in_dr14,0);
  piVar12 = (int *)auStack_30;
  uVar1 = ar6 & 0x3fff;
  iVar2 = 0;
  dVar27 = (double)CONCAT44((int)((ulonglong)in_dr10 >> 0x20),0x3f800000);
  iVar3 = 0;
  iVar5 = (ar6 >> 0xe & 3) << 1;
  do {
    iVar7 = (int)*ar4;
    psVar4 = ar4 + 2;
    pdVar8 = (double *)(ar4[1] * 0x20 + ar5);
    if (iVar7 < 0) {
      iVar7 = -iVar7;
    }
    iVar3 = iVar3 + iVar7;
    iVar7 = iVar7 + -2;
    iVar11 = 0;
    ar4 = ar4 + 3;
    pdVar9 = (double *)(*psVar4 * 0x20 + ar5);
    do {
      psVar4 = ar4 + 1;
      if (cVar34 == '\0') {
        dVar18 = (double)CONCAT44(*(undefined4 *)pdVar8,SUB84(in_dr0,0));
      }
      else {
        dVar18 = *pdVar8;
      }
      pdVar10 = (double *)(*ar4 * 0x20 + ar5);
      fVar26 = SUB84(dVar27,0);
      if (cVar33 == '\0') {
        bVar32 = (float)((ulonglong)dVar18 >> 0x20) < fVar26;
      }
      else {
        bVar32 = dVar18 < dVar27;
      }
      if (cVar34 == '\0') {
        dVar19 = (double)CONCAT44(*(undefined4 *)pdVar9,SUB84(in_dr2,0));
      }
      else {
        dVar19 = *pdVar9;
      }
      fVar28 = (float)((ulonglong)dVar27 >> 0x20);
      fVar20 = SUB84(in_dr4,0);
      fVar21 = (float)((ulonglong)in_dr4 >> 0x20);
      fVar22 = SUB84(in_dr6,0);
      fVar23 = (float)((ulonglong)in_dr6 >> 0x20);
      fVar24 = SUB84(in_dr8,0);
      fVar25 = (float)((ulonglong)in_dr8 >> 0x20);
      if (bVar32) {
LAB_8c214432:
        if (iVar11 != 0) {
          if (cVar34 == '\0') {
            dVar30 = (double)CONCAT44(*(undefined4 *)(pdVar9 + 2),SUB84(in_dr12,0));
            pdVar9 = (double *)((int)pdVar9 + 0x14);
          }
          else {
            dVar30 = pdVar9[2];
            pdVar9 = pdVar9 + 3;
          }
          if (cVar33 == '\0') {
            dVar30 = (double)CONCAT44((float)((ulonglong)dVar30 >> 0x20) * fVar21,SUB84(dVar30,0));
          }
          else {
            dVar30 = dVar30 * in_dr4;
          }
          if (cVar34 == '\0') {
            dVar31 = (double)CONCAT44(*(undefined4 *)pdVar9,SUB84(in_dr14,0));
            pdVar9 = (double *)((int)pdVar9 + 4);
          }
          else {
            dVar31 = *pdVar9;
            pdVar9 = pdVar9 + 1;
          }
          if (cVar33 == '\0') {
            dVar30 = (double)CONCAT44((int)((ulonglong)dVar30 >> 0x20),SUB84(dVar30,0) * fVar20);
            dVar31 = (double)CONCAT44((float)((ulonglong)dVar31 >> 0x20) * fVar23,SUB84(dVar31,0));
          }
          else {
            dVar30 = dVar30 * in_dr4;
            dVar31 = dVar31 * in_dr6;
          }
          if (cVar34 == '\0') {
            dVar18 = (double)CONCAT44(*(undefined4 *)(pdVar9 + -4),SUB84(dVar18,0));
            pdVar9 = (double *)((int)pdVar9 + -0x1c);
          }
          else {
            dVar18 = pdVar9[-4];
            pdVar9 = pdVar9 + -3;
          }
          if (cVar33 == '\0') {
            dVar31 = (double)CONCAT44((int)((ulonglong)dVar31 >> 0x20),SUB84(dVar31,0) * fVar22);
          }
          else {
            dVar31 = dVar31 * in_dr6;
          }
          if (cVar34 == '\0') {
            dVar19 = (double)CONCAT44(*(undefined4 *)pdVar9,SUB84(dVar19,0));
            pdVar9 = (double *)((int)pdVar9 + 4);
          }
          else {
            dVar19 = *pdVar9;
            pdVar9 = pdVar9 + 1;
          }
          if (cVar33 == '\0') {
            in_dr12 = (double)CONCAT44((int)((ulonglong)dVar30 >> 0x20),SUB84(dVar30,0) + fVar25);
            in_dr14 = (double)CONCAT44((float)((ulonglong)dVar31 >> 0x20) + fVar24,
                                       SUB84(dVar31,0) + fVar28);
          }
          else {
            in_dr12 = dVar30 + in_dr8;
            in_dr14 = dVar31 + in_dr8 + dVar27;
          }
          pdVar9 = pdVar9 + -2;
          if (cVar34 == '\0') {
            *(int *)((int)ar7 + 0x1c) = (int)((ulonglong)in_dr14 >> 0x20);
            pdVar6 = ar7 + 3;
            *(int *)pdVar6 = (int)((ulonglong)in_dr12 >> 0x20);
          }
          else {
            ar7[3] = in_dr14;
            pdVar6 = ar7 + 2;
            *pdVar6 = in_dr12;
          }
          iVar2 = iVar2 + iVar11 + 1;
          if (cVar34 == '\0') {
            pdVar6 = (double *)((int)pdVar6 + -4);
            *(int *)pdVar6 = (int)((ulonglong)dVar19 >> 0x20);
          }
          else {
            pdVar6 = pdVar6 + -1;
            *pdVar6 = dVar19;
          }
          iVar11 = 0;
          if (cVar34 == '\0') {
            pdVar6 = (double *)((int)pdVar6 + -4);
            *(int *)pdVar6 = (int)((ulonglong)dVar18 >> 0x20);
          }
          else {
            pdVar6 = pdVar6 + -1;
            *pdVar6 = dVar18;
          }
          *(undefined4 *)pdVar6 = 0xf0000000;
          ar7 = pdVar6 + 4;
        }
        if (cVar34 == '\0') {
          in_dr0 = (double)CONCAT44(*(undefined4 *)pdVar8,SUB84(dVar18,0));
        }
        else {
          in_dr0 = *pdVar8;
        }
        if (cVar33 == '\0') {
          bVar32 = (float)((ulonglong)in_dr0 >> 0x20) < fVar26;
        }
        else {
          bVar32 = in_dr0 < dVar27;
        }
        if (cVar34 == '\0') {
          in_dr2 = (double)CONCAT44(*(undefined4 *)pdVar9,SUB84(dVar19,0));
        }
        else {
          in_dr2 = *pdVar9;
        }
        if (bVar32) {
          if (cVar33 == '\0') {
            bVar32 = (float)((ulonglong)in_dr2 >> 0x20) < fVar26;
          }
          else {
            bVar32 = in_dr2 < dVar27;
          }
          if (cVar34 == '\0') {
            in_dr0 = (double)CONCAT44(*(undefined4 *)pdVar10,SUB84(in_dr0,0));
          }
          else {
            in_dr0 = *pdVar10;
          }
          if (bVar32) {
            if (cVar33 == '\0') {
              bVar32 = (float)((ulonglong)in_dr0 >> 0x20) < fVar26;
            }
            else {
              bVar32 = in_dr0 < dVar27;
            }
            if (bVar32) goto LAB_8c21447a;
          }
        }
        *(uint *)((int)piVar12 + -4) = uVar1;
        *(int *)((int)piVar12 + -8) = iVar2;
        *(int *)((int)piVar12 + -0xc) = iVar3;
        *(short **)((int)piVar12 + -0x10) = psVar4;
        *(int *)((int)piVar12 + -0x14) = ar5;
        *(int *)((int)piVar12 + -0x18) = iVar5;
        if (cVar34 == '\0') {
          *(float *)((int)piVar12 + -0x1c) = fVar21;
          *(float *)((int)piVar12 + -0x20) = fVar20;
          *(float *)((int)piVar12 + -0x24) = fVar23;
          *(float *)((int)piVar12 + -0x28) = fVar22;
          *(float *)((int)piVar12 + -0x2c) = fVar25;
          *(float *)((int)piVar12 + -0x30) = fVar24;
          puVar13 = (undefined8 *)((int)piVar12 + -0x34);
          *(float *)((int)piVar12 + -0x34) = fVar28;
        }
        else {
          *(double *)((int)piVar12 + -0x20) = in_dr4;
          *(undefined8 *)((int)piVar12 + -0x28) = in_xd4;
          *(double *)((int)piVar12 + -0x30) = in_dr6;
          *(undefined8 *)((int)piVar12 + -0x38) = in_xd6;
          *(double *)((int)piVar12 + -0x40) = in_dr8;
          *(undefined8 *)((int)piVar12 + -0x48) = in_xd8;
          puVar13 = (undefined8 *)((int)piVar12 + -0x50);
          *(double *)((int)piVar12 + -0x50) = dVar27;
        }
        ar7 = (double *)FUN_8c214554(pdVar8,pdVar9,pdVar10,ar7);
        if (cVar34 == '\0') {
          uVar29 = *(undefined4 *)puVar13;
          pdVar14 = (double *)((int)puVar13 + 4);
          pdVar15 = (double *)((int)puVar13 + 0xc);
          pdVar16 = (double *)((int)puVar13 + 0x14);
          piVar17 = (int *)((int)puVar13 + 0x1c);
        }
        else {
          uVar29 = (undefined4)((ulonglong)*puVar13 >> 0x20);
          in_xd8 = puVar13[1];
          pdVar14 = (double *)(puVar13 + 2);
          in_xd6 = puVar13[3];
          pdVar15 = (double *)(puVar13 + 4);
          in_xd4 = puVar13[5];
          pdVar16 = (double *)(puVar13 + 6);
          piVar17 = (int *)(puVar13 + 7);
        }
        in_dr8 = *pdVar14;
        in_dr6 = *pdVar15;
        in_dr4 = *pdVar16;
        iVar5 = *piVar17;
        ar5 = piVar17[1];
        psVar4 = (short *)piVar17[2];
        iVar3 = piVar17[3];
        iVar2 = piVar17[4];
        uVar1 = piVar17[5];
        piVar12 = piVar17 + 6;
        dVar27 = (double)CONCAT44(uVar29,0x3f800000);
      }
      else {
        if (cVar33 == '\0') {
          bVar32 = (float)((ulonglong)dVar19 >> 0x20) < fVar26;
        }
        else {
          bVar32 = dVar19 < dVar27;
        }
        if (cVar34 == '\0') {
          in_dr12 = (double)CONCAT44(*(undefined4 *)pdVar10,SUB84(in_dr12,0));
        }
        else {
          in_dr12 = *pdVar10;
        }
        if (bVar32) goto LAB_8c214432;
        if (cVar33 == '\0') {
          bVar32 = (float)((ulonglong)in_dr12 >> 0x20) < fVar26;
        }
        else {
          bVar32 = in_dr12 < dVar27;
        }
        if (bVar32) goto LAB_8c214432;
        if (iVar11 == 0) {
          if (cVar34 == '\0') {
            dVar30 = (double)CONCAT44(*(undefined4 *)(pdVar8 + 2),SUB84(in_dr12,0));
            pdVar8 = (double *)((int)pdVar8 + 0x14);
          }
          else {
            dVar30 = pdVar8[2];
            pdVar8 = pdVar8 + 3;
          }
          if (cVar33 == '\0') {
            dVar30 = (double)CONCAT44((float)((ulonglong)dVar30 >> 0x20) * fVar21,SUB84(dVar30,0));
          }
          else {
            dVar30 = dVar30 * in_dr4;
          }
          if (cVar34 == '\0') {
            dVar31 = (double)CONCAT44(*(undefined4 *)pdVar8,SUB84(in_dr14,0));
            pdVar8 = (double *)((int)pdVar8 + 4);
          }
          else {
            dVar31 = *pdVar8;
            pdVar8 = pdVar8 + 1;
          }
          if (cVar33 == '\0') {
            dVar30 = (double)CONCAT44((int)((ulonglong)dVar30 >> 0x20),SUB84(dVar30,0) * fVar20);
            dVar31 = (double)CONCAT44((float)((ulonglong)dVar31 >> 0x20) * fVar23,SUB84(dVar31,0));
          }
          else {
            dVar30 = dVar30 * in_dr4;
            dVar31 = dVar31 * in_dr6;
          }
          if (cVar34 == '\0') {
            dVar18 = (double)CONCAT44(*(undefined4 *)(pdVar8 + -4),SUB84(dVar18,0));
            pdVar8 = (double *)((int)pdVar8 + -0x1c);
          }
          else {
            dVar18 = pdVar8[-4];
            pdVar8 = pdVar8 + -3;
          }
          if (cVar33 == '\0') {
            dVar31 = (double)CONCAT44((int)((ulonglong)dVar31 >> 0x20),SUB84(dVar31,0) * fVar22);
          }
          else {
            dVar31 = dVar31 * in_dr6;
          }
          if (cVar34 == '\0') {
            dVar19 = (double)CONCAT44(*(undefined4 *)pdVar8,SUB84(dVar19,0));
          }
          else {
            dVar19 = *pdVar8;
          }
          if (cVar33 == '\0') {
            in_dr12 = (double)CONCAT44((int)((ulonglong)dVar30 >> 0x20),SUB84(dVar30,0) + fVar25);
            in_dr14 = (double)CONCAT44((float)((ulonglong)dVar31 >> 0x20) + fVar24,
                                       SUB84(dVar31,0) + fVar28);
          }
          else {
            in_dr12 = dVar30 + in_dr8;
            in_dr14 = dVar31 + in_dr8 + dVar27;
          }
          if (cVar34 == '\0') {
            *(int *)((int)ar7 + 0x1c) = (int)((ulonglong)in_dr14 >> 0x20);
            *(int *)(ar7 + 3) = (int)((ulonglong)in_dr12 >> 0x20);
            *(int *)((int)ar7 + 0x14) = (int)((ulonglong)dVar19 >> 0x20);
            ar7 = ar7 + 2;
            *(int *)ar7 = (int)((ulonglong)dVar18 >> 0x20);
          }
          else {
            ar7[3] = in_dr14;
            ar7[2] = in_dr12;
            ar7[1] = dVar19;
            *ar7 = dVar18;
          }
          iVar11 = 1;
          *(undefined4 *)ar7 = 0xe0000000;
          ar7 = ar7 + 4;
        }
        if (cVar34 == '\0') {
          dVar30 = (double)CONCAT44(*(undefined4 *)(pdVar9 + 2),SUB84(in_dr12,0));
          pdVar9 = (double *)((int)pdVar9 + 0x14);
        }
        else {
          dVar30 = pdVar9[2];
          pdVar9 = pdVar9 + 3;
        }
        if (cVar33 == '\0') {
          dVar30 = (double)CONCAT44((float)((ulonglong)dVar30 >> 0x20) * fVar21,SUB84(dVar30,0));
        }
        else {
          dVar30 = dVar30 * in_dr4;
        }
        if (cVar34 == '\0') {
          dVar31 = (double)CONCAT44(*(undefined4 *)pdVar9,SUB84(in_dr14,0));
          pdVar9 = (double *)((int)pdVar9 + 4);
        }
        else {
          dVar31 = *pdVar9;
          pdVar9 = pdVar9 + 1;
        }
        if (cVar33 == '\0') {
          dVar30 = (double)CONCAT44((int)((ulonglong)dVar30 >> 0x20),SUB84(dVar30,0) * fVar20);
          dVar31 = (double)CONCAT44((float)((ulonglong)dVar31 >> 0x20) * fVar23,SUB84(dVar31,0));
        }
        else {
          dVar30 = dVar30 * in_dr4;
          dVar31 = dVar31 * in_dr6;
        }
        if (cVar34 == '\0') {
          in_dr0 = (double)CONCAT44(*(undefined4 *)(pdVar9 + -4),SUB84(dVar18,0));
          pdVar9 = (double *)((int)pdVar9 + -0x1c);
        }
        else {
          in_dr0 = pdVar9[-4];
          pdVar9 = pdVar9 + -3;
        }
        if (cVar33 == '\0') {
          dVar31 = (double)CONCAT44((int)((ulonglong)dVar31 >> 0x20),SUB84(dVar31,0) * fVar22);
        }
        else {
          dVar31 = dVar31 * in_dr6;
        }
        if (cVar34 == '\0') {
          in_dr2 = (double)CONCAT44(*(undefined4 *)pdVar9,SUB84(dVar19,0));
          pdVar9 = (double *)((int)pdVar9 + 4);
        }
        else {
          in_dr2 = *pdVar9;
          pdVar9 = pdVar9 + 1;
        }
        if (cVar33 == '\0') {
          in_dr12 = (double)CONCAT44((int)((ulonglong)dVar30 >> 0x20),SUB84(dVar30,0) + fVar25);
          in_dr14 = (double)CONCAT44((float)((ulonglong)dVar31 >> 0x20) + fVar24,
                                     SUB84(dVar31,0) + fVar28);
        }
        else {
          in_dr12 = dVar30 + in_dr8;
          in_dr14 = dVar31 + in_dr8 + dVar27;
        }
        if (cVar34 == '\0') {
          *(int *)((int)ar7 + 0x1c) = (int)((ulonglong)in_dr14 >> 0x20);
          *(int *)(ar7 + 3) = (int)((ulonglong)in_dr12 >> 0x20);
          *(int *)((int)ar7 + 0x14) = (int)((ulonglong)in_dr2 >> 0x20);
          ar7 = ar7 + 2;
          *(int *)ar7 = (int)((ulonglong)in_dr0 >> 0x20);
        }
        else {
          ar7[3] = in_dr14;
          ar7[2] = in_dr12;
          ar7[1] = in_dr2;
          *ar7 = in_dr0;
        }
        iVar11 = iVar11 + 1;
        *(undefined4 *)ar7 = 0xe0000000;
        ar7 = ar7 + 4;
        pdVar9 = pdVar9 + -2;
      }
LAB_8c21447a:
      pdVar8 = pdVar9;
      iVar7 = iVar7 + -1;
      ar4 = (short *)((int)psVar4 + iVar5);
      pdVar9 = pdVar10;
    } while (iVar7 != 0);
    if (iVar11 != 0) {
      if (cVar34 == '\0') {
        dVar18 = (double)CONCAT44(*(undefined4 *)(pdVar10 + 2),SUB84(in_dr12,0));
        pdVar10 = (double *)((int)pdVar10 + 0x14);
      }
      else {
        dVar18 = pdVar10[2];
        pdVar10 = pdVar10 + 3;
      }
      if (cVar33 == '\0') {
        dVar18 = (double)CONCAT44((float)((ulonglong)dVar18 >> 0x20) *
                                  (float)((ulonglong)in_dr4 >> 0x20),SUB84(dVar18,0));
      }
      else {
        dVar18 = dVar18 * in_dr4;
      }
      if (cVar34 == '\0') {
        dVar19 = (double)CONCAT44(*(undefined4 *)pdVar10,SUB84(in_dr14,0));
        pdVar10 = (double *)((int)pdVar10 + 4);
      }
      else {
        dVar19 = *pdVar10;
        pdVar10 = pdVar10 + 1;
      }
      if (cVar33 == '\0') {
        dVar18 = (double)CONCAT44((int)((ulonglong)dVar18 >> 0x20),SUB84(dVar18,0) * SUB84(in_dr4,0)
                                 );
        dVar19 = (double)CONCAT44((float)((ulonglong)dVar19 >> 0x20) *
                                  (float)((ulonglong)in_dr6 >> 0x20),SUB84(dVar19,0));
      }
      else {
        dVar18 = dVar18 * in_dr4;
        dVar19 = dVar19 * in_dr6;
      }
      if (cVar34 == '\0') {
        in_dr0 = (double)CONCAT44(*(undefined4 *)(pdVar10 + -4),SUB84(in_dr0,0));
        pdVar10 = (double *)((int)pdVar10 + -0x1c);
      }
      else {
        in_dr0 = pdVar10[-4];
        pdVar10 = pdVar10 + -3;
      }
      if (cVar33 == '\0') {
        dVar19 = (double)CONCAT44((int)((ulonglong)dVar19 >> 0x20),SUB84(dVar19,0) * SUB84(in_dr6,0)
                                 );
      }
      else {
        dVar19 = dVar19 * in_dr6;
      }
      if (cVar34 == '\0') {
        in_dr2 = (double)CONCAT44(*(undefined4 *)pdVar10,SUB84(in_dr2,0));
      }
      else {
        in_dr2 = *pdVar10;
      }
      if (cVar33 == '\0') {
        in_dr12 = (double)CONCAT44((int)((ulonglong)dVar18 >> 0x20),
                                   SUB84(dVar18,0) + (float)((ulonglong)in_dr8 >> 0x20));
        in_dr14 = (double)CONCAT44((float)((ulonglong)dVar19 >> 0x20) + SUB84(in_dr8,0),
                                   SUB84(dVar19,0) + (float)((ulonglong)dVar27 >> 0x20));
      }
      else {
        in_dr12 = dVar18 + in_dr8;
        in_dr14 = dVar19 + in_dr8 + dVar27;
      }
      if (cVar34 == '\0') {
        pdVar8 = (double *)((int)ar7 + 0x1c);
        *(int *)pdVar8 = (int)((ulonglong)in_dr14 >> 0x20);
      }
      else {
        pdVar8 = ar7 + 3;
        *pdVar8 = in_dr14;
      }
      if (cVar34 == '\0') {
        *(int *)((int)pdVar8 + -4) = (int)((ulonglong)in_dr12 >> 0x20);
        *(int *)(pdVar8 + -1) = (int)((ulonglong)in_dr2 >> 0x20);
        pdVar8 = (double *)((int)pdVar8 + -0xc);
        *(int *)pdVar8 = (int)((ulonglong)in_dr0 >> 0x20);
      }
      else {
        pdVar8[-1] = in_dr12;
        pdVar8[-2] = in_dr2;
        pdVar8 = pdVar8 + -3;
        *pdVar8 = in_dr0;
      }
      iVar2 = iVar2 + iVar11 + 1;
      *(undefined4 *)pdVar8 = 0xf0000000;
      ar7 = pdVar8 + 4;
    }
    uVar1 = uVar1 - 1;
    if (uVar1 == 0) {
      _DAT_8c4aa520 = _DAT_8c4aa520 + iVar2;
      _DAT_8c4aa51c = _DAT_8c4aa51c + iVar3;
      return ar7;
    }
  } while( true );
}

__asm__(".globl _FUN_8c214358\n.set _FUN_8c214358, _FUN_8c214358_def\n");
