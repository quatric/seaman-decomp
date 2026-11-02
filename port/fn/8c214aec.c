#include "../decls.h"
double * FUN_8c214aec_def(short *ar4,int ar5,uint ar6,double *ar7)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  short *psVar4;
  short *psVar5;
  int iVar6;
  double *pdVar7;
  int iVar8;
  double *pdVar9;
  double *pdVar10;
  double *pdVar11;
  int iVar12;
  int *piVar13;
  undefined1 *puVar14;
  undefined1 *puVar15;
  undefined1 *puVar16;
  undefined1 *puVar17;
  double *pdVar18;
  double *pdVar19;
  int *piVar20;
  double in_dr0;
  double dVar21;
  double dVar22;
  undefined4 uVar25;
  double dVar23;
  double in_dr2;
  double dVar27;
  undefined4 uVar28;
  float fVar29;
  undefined8 in_dr4;
  float fVar31;
  double dVar30;
  float fVar32;
  undefined8 in_dr6;
  float fVar34;
  double dVar33;
  undefined8 in_dr8;
  double dVar35;
  float fVar36;
  float fVar37;
  float fVar39;
  double dVar38;
  undefined8 in_dr12;
  undefined8 in_dr14;
  double dVar40;
  double in_xd4;
  undefined8 in_xd6;
  double in_xd10;
  undefined8 in_xd12;
  bool bVar41;
  char cVar42;
  char cVar43;
  undefined1 auStack_30 [4];
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uVar24;
  undefined4 uVar26;
  
  cVar43 = '\0';
  cVar42 = '\0';
  uStack_20 = (undefined4)((ulonglong)in_dr12 >> 0x20);
  uStack_24 = (undefined4)in_dr12;
  uStack_28 = (undefined4)((ulonglong)in_dr14 >> 0x20);
  uStack_2c = (undefined4)in_dr14;
  piVar13 = (int *)auStack_30;
  uVar1 = ar6 & 0x3fff;
  iVar2 = 0;
  dVar35 = (double)CONCAT44((int)((ulonglong)in_dr8 >> 0x20),0x3f800000);
  iVar3 = 0;
  iVar6 = (ar6 >> 0xe & 3) << 1;
  dVar30 = (double)CONCAT44((int)((ulonglong)in_dr4 >> 0x20),(float)in_dr4 - 1.0);
  dVar33 = (double)CONCAT44((float)((ulonglong)in_dr6 >> 0x20) - 1.0,(float)in_dr6 - 1.0);
  do {
    iVar8 = (int)*ar4;
    pdVar9 = (double *)(ar4[1] * 0x20 + ar5);
    if (iVar8 < 0) {
      iVar8 = -iVar8;
    }
    iVar3 = iVar3 + iVar8;
    iVar8 = iVar8 + -2;
    iVar12 = 0;
    if (cVar42 == '\0') {
      fVar39 = (float)(int)ar4[2];
    }
    else {
      fVar39 = (float)((ulonglong)(double)(int)ar4[2] >> 0x20);
    }
    psVar5 = ar4 + 5;
    fVar36 = (float)((ulonglong)dVar35 >> 0x20);
    if (cVar42 == '\0') {
      dVar38 = (double)CONCAT44(fVar39 * fVar36,(float)(int)ar4[3]);
    }
    else {
      dVar38 = (double)CONCAT44(fVar39,(float)(int)ar4[3]) * dVar35;
    }
    pdVar10 = (double *)(ar4[4] * 0x20 + ar5);
    if (cVar42 == '\0') {
      dVar38 = (double)CONCAT44((int)((ulonglong)dVar38 >> 0x20),SUB84(dVar38,0) * fVar36);
    }
    else {
      dVar38 = dVar38 * dVar35;
    }
    psVar4 = ar4 + 6;
    ar4 = ar4 + 7;
    if (cVar42 == '\0') {
      fVar39 = (float)(int)*psVar5;
    }
    else {
      fVar39 = (float)((ulonglong)(double)(int)*psVar5 >> 0x20);
    }
    if (cVar42 == '\0') {
      dVar23 = (double)CONCAT44(fVar39 * fVar36,(float)(int)*psVar4 * fVar36);
    }
    else {
      dVar23 = (double)CONCAT44(fVar39,(float)(int)*psVar4) * dVar35 * dVar35;
    }
    do {
      pdVar11 = (double *)(*ar4 * 0x20 + ar5);
      if (cVar43 == '\0') {
        dVar21 = (double)CONCAT44(*(undefined4 *)pdVar9,SUB84(in_dr0,0));
      }
      else {
        dVar21 = *pdVar9;
      }
      psVar5 = ar4 + 3;
      if (cVar42 == '\0') {
        fVar39 = (float)(int)ar4[1];
      }
      else {
        fVar39 = (float)((ulonglong)(double)(int)ar4[1] >> 0x20);
      }
      fVar37 = (float)((ulonglong)dVar35 >> 0x20);
      fVar36 = SUB84(dVar35,0);
      if (cVar42 == '\0') {
        dVar40 = (double)CONCAT44(fVar39 * fVar37,(float)(int)ar4[2] * fVar37);
        bVar41 = (float)((ulonglong)dVar21 >> 0x20) < fVar36;
      }
      else {
        dVar40 = (double)CONCAT44(fVar39,(float)(int)ar4[2]) * dVar35 * dVar35;
        bVar41 = dVar21 < dVar35;
      }
      if (cVar43 == '\0') {
        dVar27 = (double)CONCAT44(*(undefined4 *)pdVar10,SUB84(in_dr2,0));
      }
      else {
        dVar27 = *pdVar10;
      }
      uVar25 = (undefined4)((ulonglong)dVar38 >> 0x20);
      uVar26 = (undefined4)((ulonglong)dVar23 >> 0x20);
      fVar39 = SUB84(dVar30,0);
      fVar31 = (float)((ulonglong)dVar30 >> 0x20);
      fVar32 = SUB84(dVar33,0);
      fVar34 = (float)((ulonglong)dVar33 >> 0x20);
      if (bVar41) {
LAB_8c214c0c:
        if (iVar12 != 0) {
          if (cVar43 == '\0') {
            uVar24 = *(undefined4 *)pdVar10;
            dVar22 = (double)CONCAT44(uVar24,SUB84(dVar21,0));
            uVar28 = *(undefined4 *)((int)pdVar10 + 4);
            dVar21 = (double)CONCAT44(uVar28,SUB84(dVar27,0));
            pdVar10 = pdVar10 + 1;
            *(undefined4 *)((int)ar7 + 0x14) = uVar26;
            *(undefined4 *)(ar7 + 2) = uVar28;
            ar7 = (double *)((int)ar7 + 0xc);
            *(undefined4 *)ar7 = uVar24;
          }
          else {
            dVar22 = *pdVar10;
            dVar21 = pdVar10[1];
            pdVar10 = pdVar10 + 2;
            ar7[2] = dVar23;
            ar7[1] = dVar21;
            *ar7 = dVar22;
          }
          *(undefined4 *)ar7 = 0xf0000000;
          if (cVar43 == '\0') {
            dVar27 = (double)CONCAT44(*(undefined4 *)pdVar10,SUB84(dVar22,0));
            dVar22 = (double)CONCAT44(*(undefined4 *)((int)pdVar10 + 4),SUB84(dVar21,0));
            pdVar10 = pdVar10 + 1;
          }
          else {
            dVar27 = *pdVar10;
            dVar22 = pdVar10[1];
            pdVar10 = pdVar10 + 2;
          }
          if (cVar42 == '\0') {
            dVar21 = (double)CONCAT44((float)((ulonglong)dVar27 >> 0x20) * fVar31,
                                      SUB84(dVar27,0) + fVar39);
            dVar27 = (double)CONCAT44((float)((ulonglong)dVar22 >> 0x20) + fVar34,
                                      SUB84(dVar22,0) + fVar32);
          }
          else {
            dVar21 = dVar27 * dVar30 + dVar30;
            dVar27 = dVar22 + dVar33 + dVar33;
          }
          pdVar10 = pdVar10 + -4;
          fVar29 = (float)((ulonglong)dVar27 >> 0x20);
          uVar26 = (undefined4)((ulonglong)dVar21 >> 0x20);
          if (cVar43 == '\0') {
            *(float *)((int)ar7 + 0x3c) = fVar29;
            pdVar7 = ar7 + 7;
            *(undefined4 *)pdVar7 = uVar26;
          }
          else {
            ar7[7] = dVar27;
            pdVar7 = ar7 + 6;
            *pdVar7 = dVar21;
          }
          if (cVar42 == '\0') {
            dVar21 = (double)CONCAT44(uVar26,SUB84(dVar21,0) + fVar36);
            dVar27 = (double)CONCAT44(fVar29 + fVar36,SUB84(dVar27,0));
          }
          else {
            dVar21 = dVar21 + dVar35;
            dVar27 = dVar27 + dVar35;
          }
          iVar2 = iVar2 + iVar12 + 1;
          if (cVar42 == '\0') {
            dVar27 = (double)CONCAT44((int)((ulonglong)dVar27 >> 0x20),SUB84(dVar27,0) + fVar36);
          }
          else {
            dVar27 = dVar27 + dVar35;
          }
          if (cVar43 == '\0') {
            pdVar7 = (double *)((int)pdVar7 + -4);
            *(int *)pdVar7 = (int)((ulonglong)dVar27 >> 0x20);
          }
          else {
            pdVar7 = pdVar7 + -1;
            *pdVar7 = dVar27;
          }
          iVar12 = 0;
          if (cVar43 == '\0') {
            pdVar7 = (double *)((int)pdVar7 + -4);
            *(int *)pdVar7 = (int)((ulonglong)dVar21 >> 0x20);
          }
          else {
            pdVar7 = pdVar7 + -1;
            *pdVar7 = dVar21;
          }
          ar7 = pdVar7 + 4;
        }
        if (cVar43 == '\0') {
          in_dr0 = (double)CONCAT44(*(undefined4 *)pdVar9,SUB84(dVar21,0));
        }
        else {
          in_dr0 = *pdVar9;
        }
        if (cVar42 == '\0') {
          bVar41 = (float)((ulonglong)in_dr0 >> 0x20) < fVar36;
        }
        else {
          bVar41 = in_dr0 < dVar35;
        }
        if (cVar43 == '\0') {
          in_dr2 = (double)CONCAT44(*(undefined4 *)pdVar10,SUB84(dVar27,0));
        }
        else {
          in_dr2 = *pdVar10;
        }
        if (bVar41) {
          if (cVar42 == '\0') {
            bVar41 = (float)((ulonglong)in_dr2 >> 0x20) < fVar36;
          }
          else {
            bVar41 = in_dr2 < dVar35;
          }
          if (cVar43 == '\0') {
            in_dr0 = (double)CONCAT44(*(undefined4 *)pdVar11,SUB84(in_dr0,0));
          }
          else {
            in_dr0 = *pdVar11;
          }
          if (bVar41) {
            if (cVar42 == '\0') {
              bVar41 = (float)((ulonglong)in_dr0 >> 0x20) < fVar36;
            }
            else {
              bVar41 = in_dr0 < dVar35;
            }
            if (bVar41) goto LAB_8c214c5c;
          }
        }
        *(uint *)((int)piVar13 + -4) = uVar1;
        *(int *)((int)piVar13 + -8) = iVar2;
        *(int *)((int)piVar13 + -0xc) = iVar3;
        *(short **)((int)piVar13 + -0x10) = psVar5;
        *(int *)((int)piVar13 + -0x14) = ar5;
        *(int *)((int)piVar13 + -0x18) = iVar6;
        if (cVar43 == '\0') {
          *(float *)((int)piVar13 + -0x1c) = fVar31;
          *(float *)((int)piVar13 + -0x20) = fVar39;
          *(float *)((int)piVar13 + -0x24) = fVar34;
          *(float *)((int)piVar13 + -0x28) = fVar32;
          puVar14 = (undefined1 *)((int)piVar13 + -0x2c);
          *(float *)((int)piVar13 + -0x2c) = fVar37;
        }
        else {
          *(double *)((int)piVar13 + -0x20) = dVar30;
          *(double *)((int)piVar13 + -0x28) = in_xd4;
          *(double *)((int)piVar13 + -0x30) = dVar33;
          *(undefined8 *)((int)piVar13 + -0x38) = in_xd6;
          puVar14 = (undefined1 *)((int)piVar13 + -0x40);
          *(double *)((int)piVar13 + -0x40) = dVar35;
        }
        if (cVar42 == '\0') {
          dVar30 = (double)((ulonglong)(uint)fVar31 << 0x20);
        }
        else {
          dVar30 = dVar30 + dVar35;
        }
        if (cVar43 == '\0') {
          puVar15 = puVar14 + -4;
          *(undefined4 *)(puVar14 + -4) = uVar25;
        }
        else {
          puVar15 = puVar14 + -8;
          *(double *)(puVar14 + -8) = dVar38;
        }
        if (cVar42 == '\0') {
          dVar33 = (double)CONCAT44(fVar34 + fVar36,fVar32);
        }
        else {
          dVar33 = dVar33 + dVar35;
        }
        if (cVar43 == '\0') {
          puVar16 = puVar15 + -4;
          *(int *)(puVar15 + -4) = SUB84(dVar38,0);
        }
        else {
          puVar16 = puVar15 + -8;
          *(double *)(puVar15 + -8) = in_xd10;
        }
        if (cVar42 == '\0') {
          dVar33 = (double)CONCAT44((int)((ulonglong)dVar33 >> 0x20),SUB84(dVar33,0) + fVar36);
        }
        else {
          dVar33 = dVar33 + dVar35;
        }
        if (cVar43 == '\0') {
          in_dr0 = (double)((ulonglong)dVar30 >> 0x20);
          *(int *)(puVar16 + -4) = SUB84(dVar33,0);
          puVar17 = puVar16 + -8;
          *(int *)(puVar16 + -8) = (int)((ulonglong)dVar33 >> 0x20);
          dVar33 = in_xd10;
          in_xd10 = in_xd4;
          in_dr2 = (double)((ulonglong)in_dr2 & 0xffffffff);
        }
        else {
          *(undefined8 *)(puVar16 + -8) = in_xd6;
          puVar17 = puVar16 + -0x10;
          *(double *)(puVar16 + -0x10) = dVar33;
          dVar33 = in_xd4;
          in_xd6 = in_xd12;
          in_dr2 = in_xd4;
        }
        ar7 = (double *)FUN_8c214d6c(pdVar9,pdVar10,pdVar11,ar7);
        if (cVar43 == '\0') {
          dVar38 = (double)(ulonglong)*(uint *)(puVar17 + 8);
          uVar25 = *(undefined4 *)(puVar17 + 0x10);
          pdVar18 = (double *)(puVar17 + 0x14);
          pdVar19 = (double *)(puVar17 + 0x1c);
          piVar20 = (int *)(puVar17 + 0x24);
          in_xd4 = in_xd10;
          in_xd10 = dVar33;
        }
        else {
          in_xd10 = *(double *)(puVar17 + 8);
          dVar38 = *(double *)(puVar17 + 0x10);
          uVar25 = (undefined4)((ulonglong)*(undefined8 *)(puVar17 + 0x18) >> 0x20);
          in_xd6 = *(undefined8 *)(puVar17 + 0x20);
          pdVar18 = (double *)(puVar17 + 0x28);
          in_xd4 = *(double *)(puVar17 + 0x30);
          pdVar19 = (double *)(puVar17 + 0x38);
          piVar20 = (int *)(puVar17 + 0x40);
        }
        dVar33 = *pdVar18;
        dVar30 = *pdVar19;
        iVar6 = *piVar20;
        ar5 = piVar20[1];
        psVar5 = (short *)piVar20[2];
        iVar3 = piVar20[3];
        iVar2 = piVar20[4];
        uVar1 = piVar20[5];
        piVar13 = piVar20 + 6;
        dVar35 = (double)CONCAT44(uVar25,0x3f800000);
      }
      else {
        if (cVar42 == '\0') {
          bVar41 = (float)((ulonglong)dVar27 >> 0x20) < fVar36;
        }
        else {
          bVar41 = dVar27 < dVar35;
        }
        if (cVar43 == '\0') {
          dVar21 = (double)CONCAT44(*(undefined4 *)pdVar11,SUB84(dVar21,0));
        }
        else {
          dVar21 = *pdVar11;
        }
        if (bVar41) goto LAB_8c214c0c;
        if (cVar42 == '\0') {
          bVar41 = (float)((ulonglong)dVar21 >> 0x20) < fVar36;
        }
        else {
          bVar41 = dVar21 < dVar35;
        }
        if (bVar41) goto LAB_8c214c0c;
        if (iVar12 == 0) {
          if (cVar43 == '\0') {
            uVar24 = *(undefined4 *)pdVar9;
            dVar22 = (double)CONCAT44(uVar24,SUB84(dVar21,0));
            uVar28 = *(undefined4 *)((int)pdVar9 + 4);
            dVar21 = (double)CONCAT44(uVar28,SUB84(dVar27,0));
            pdVar9 = pdVar9 + 1;
            *(undefined4 *)((int)ar7 + 0x14) = uVar25;
            *(undefined4 *)(ar7 + 2) = uVar28;
            ar7 = (double *)((int)ar7 + 0xc);
            *(undefined4 *)ar7 = uVar24;
          }
          else {
            dVar22 = *pdVar9;
            dVar21 = pdVar9[1];
            pdVar9 = pdVar9 + 2;
            ar7[2] = dVar38;
            ar7[1] = dVar21;
            *ar7 = dVar22;
          }
          *(undefined4 *)ar7 = 0xe0000000;
          if (cVar43 == '\0') {
            dVar27 = (double)CONCAT44(*(undefined4 *)pdVar9,SUB84(dVar22,0));
            dVar22 = (double)CONCAT44(*(undefined4 *)((int)pdVar9 + 4),SUB84(dVar21,0));
          }
          else {
            dVar27 = *pdVar9;
            dVar22 = pdVar9[1];
          }
          if (cVar42 == '\0') {
            dVar21 = (double)CONCAT44((float)((ulonglong)dVar27 >> 0x20) * fVar31,
                                      SUB84(dVar27,0) + fVar39);
            dVar27 = (double)CONCAT44((float)((ulonglong)dVar22 >> 0x20) + fVar34,
                                      SUB84(dVar22,0) + fVar32);
          }
          else {
            dVar21 = dVar27 * dVar30 + dVar30;
            dVar27 = dVar22 + dVar33 + dVar33;
          }
          fVar37 = (float)((ulonglong)dVar27 >> 0x20);
          uVar25 = (undefined4)((ulonglong)dVar21 >> 0x20);
          if (cVar43 == '\0') {
            *(float *)((int)ar7 + 0x3c) = fVar37;
            pdVar9 = ar7 + 7;
            *(undefined4 *)pdVar9 = uVar25;
          }
          else {
            ar7[7] = dVar27;
            pdVar9 = ar7 + 6;
            *pdVar9 = dVar21;
          }
          if (cVar42 == '\0') {
            dVar21 = (double)CONCAT44(uVar25,SUB84(dVar21,0) + fVar36);
            dVar27 = (double)CONCAT44(fVar37 + fVar36,SUB84(dVar27,0) + fVar36);
          }
          else {
            dVar21 = dVar21 + dVar35;
            dVar27 = dVar27 + dVar35 + dVar35;
          }
          if (cVar43 == '\0') {
            *(int *)((int)pdVar9 + -4) = (int)((ulonglong)dVar27 >> 0x20);
            pdVar9 = pdVar9 + -1;
            *(int *)pdVar9 = (int)((ulonglong)dVar21 >> 0x20);
          }
          else {
            pdVar9[-1] = dVar27;
            pdVar9 = pdVar9 + -2;
            *pdVar9 = dVar21;
          }
          iVar12 = 1;
          ar7 = pdVar9 + 4;
        }
        if (cVar43 == '\0') {
          uVar25 = *(undefined4 *)pdVar10;
          dVar22 = (double)CONCAT44(uVar25,SUB84(dVar21,0));
          uVar24 = *(undefined4 *)((int)pdVar10 + 4);
          dVar21 = (double)CONCAT44(uVar24,SUB84(dVar27,0));
          pdVar10 = pdVar10 + 1;
          *(undefined4 *)((int)ar7 + 0x14) = uVar26;
          *(undefined4 *)(ar7 + 2) = uVar24;
          ar7 = (double *)((int)ar7 + 0xc);
          *(undefined4 *)ar7 = uVar25;
        }
        else {
          dVar22 = *pdVar10;
          dVar21 = pdVar10[1];
          pdVar10 = pdVar10 + 2;
          ar7[2] = dVar23;
          ar7[1] = dVar21;
          *ar7 = dVar22;
        }
        *(undefined4 *)ar7 = 0xe0000000;
        if (cVar43 == '\0') {
          dVar27 = (double)CONCAT44(*(undefined4 *)pdVar10,SUB84(dVar22,0));
          dVar21 = (double)CONCAT44(*(undefined4 *)((int)pdVar10 + 4),SUB84(dVar21,0));
          pdVar10 = pdVar10 + 1;
        }
        else {
          dVar27 = *pdVar10;
          dVar21 = pdVar10[1];
          pdVar10 = pdVar10 + 2;
        }
        if (cVar42 == '\0') {
          dVar27 = (double)CONCAT44((float)((ulonglong)dVar27 >> 0x20) * fVar31,
                                    SUB84(dVar27,0) + fVar39);
          dVar21 = (double)CONCAT44((float)((ulonglong)dVar21 >> 0x20) + fVar34,
                                    SUB84(dVar21,0) + fVar32);
        }
        else {
          dVar27 = dVar27 * dVar30 + dVar30;
          dVar21 = dVar21 + dVar33 + dVar33;
        }
        fVar39 = (float)((ulonglong)dVar21 >> 0x20);
        uVar25 = (undefined4)((ulonglong)dVar27 >> 0x20);
        if (cVar43 == '\0') {
          *(float *)((int)ar7 + 0x3c) = fVar39;
          pdVar9 = ar7 + 7;
          *(undefined4 *)pdVar9 = uVar25;
        }
        else {
          ar7[7] = dVar21;
          pdVar9 = ar7 + 6;
          *pdVar9 = dVar27;
        }
        if (cVar42 == '\0') {
          in_dr0 = (double)CONCAT44(uVar25,SUB84(dVar27,0) + fVar36);
          in_dr2 = (double)CONCAT44(fVar39 + fVar36,SUB84(dVar21,0) + fVar36);
        }
        else {
          in_dr0 = dVar27 + dVar35;
          in_dr2 = dVar21 + dVar35 + dVar35;
        }
        if (cVar43 == '\0') {
          *(int *)((int)pdVar9 + -4) = (int)((ulonglong)in_dr2 >> 0x20);
          pdVar9 = pdVar9 + -1;
          *(int *)pdVar9 = (int)((ulonglong)in_dr0 >> 0x20);
        }
        else {
          pdVar9[-1] = in_dr2;
          pdVar9 = pdVar9 + -2;
          *pdVar9 = in_dr0;
        }
        iVar12 = iVar12 + 1;
        ar7 = pdVar9 + 4;
        pdVar10 = pdVar10 + -4;
      }
LAB_8c214c5c:
      pdVar9 = pdVar10;
      ar4 = (short *)((int)psVar5 + iVar6);
      iVar8 = iVar8 + -1;
      uVar25 = (undefined4)((ulonglong)dVar40 >> 0x20);
      dVar21 = dVar40;
      if (cVar43 == '\0') {
        dVar21 = (double)CONCAT44(uVar25,SUB84(dVar23,0));
        dVar23 = (double)CONCAT44((int)((ulonglong)dVar23 >> 0x20),SUB84(dVar38,0));
      }
      dVar38 = dVar23;
      pdVar10 = pdVar11;
      dVar23 = dVar21;
    } while (iVar8 != 0);
    if (iVar12 != 0) {
      if (cVar43 == '\0') {
        uVar26 = *(undefined4 *)pdVar11;
        dVar23 = (double)CONCAT44(uVar26,SUB84(in_dr0,0));
        uVar24 = *(undefined4 *)((int)pdVar11 + 4);
        dVar38 = (double)CONCAT44(uVar24,SUB84(in_dr2,0));
        pdVar11 = pdVar11 + 1;
        *(undefined4 *)((int)ar7 + 0x14) = uVar25;
        *(undefined4 *)(ar7 + 2) = uVar24;
        ar7 = (double *)((int)ar7 + 0xc);
        *(undefined4 *)ar7 = uVar26;
      }
      else {
        dVar23 = *pdVar11;
        dVar38 = pdVar11[1];
        pdVar11 = pdVar11 + 2;
        ar7[2] = dVar40;
        ar7[1] = dVar38;
        *ar7 = dVar23;
      }
      *(undefined4 *)ar7 = 0xf0000000;
      if (cVar43 == '\0') {
        dVar23 = (double)CONCAT44(*(undefined4 *)pdVar11,SUB84(dVar23,0));
        dVar38 = (double)CONCAT44(*(undefined4 *)((int)pdVar11 + 4),SUB84(dVar38,0));
      }
      else {
        dVar23 = *pdVar11;
        dVar38 = pdVar11[1];
      }
      if (cVar42 == '\0') {
        dVar23 = (double)CONCAT44((float)((ulonglong)dVar23 >> 0x20) *
                                  (float)((ulonglong)dVar30 >> 0x20),
                                  SUB84(dVar23,0) + SUB84(dVar30,0));
        dVar38 = (double)CONCAT44((float)((ulonglong)dVar38 >> 0x20) +
                                  (float)((ulonglong)dVar33 >> 0x20),
                                  SUB84(dVar38,0) + SUB84(dVar33,0));
      }
      else {
        dVar23 = dVar23 * dVar30 + dVar30;
        dVar38 = dVar38 + dVar33 + dVar33;
      }
      fVar39 = (float)((ulonglong)dVar38 >> 0x20);
      uVar25 = (undefined4)((ulonglong)dVar23 >> 0x20);
      if (cVar43 == '\0') {
        *(float *)((int)ar7 + 0x3c) = fVar39;
        pdVar9 = ar7 + 7;
        *(undefined4 *)pdVar9 = uVar25;
      }
      else {
        ar7[7] = dVar38;
        pdVar9 = ar7 + 6;
        *pdVar9 = dVar23;
      }
      fVar36 = SUB84(dVar35,0);
      if (cVar42 == '\0') {
        in_dr0 = (double)CONCAT44(uVar25,SUB84(dVar23,0) + fVar36);
      }
      else {
        in_dr0 = dVar23 + dVar35;
      }
      if (cVar42 == '\0') {
        in_dr2 = (double)CONCAT44(fVar39 + fVar36,SUB84(dVar38,0) + fVar36);
      }
      else {
        in_dr2 = dVar38 + dVar35 + dVar35;
      }
      if (cVar43 == '\0') {
        *(int *)((int)pdVar9 + -4) = (int)((ulonglong)in_dr2 >> 0x20);
        pdVar9 = pdVar9 + -1;
        *(int *)pdVar9 = (int)((ulonglong)in_dr0 >> 0x20);
      }
      else {
        pdVar9[-1] = in_dr2;
        pdVar9 = pdVar9 + -2;
        *pdVar9 = in_dr0;
      }
      iVar2 = iVar2 + iVar12 + 1;
      ar7 = pdVar9 + 4;
    }
    uVar1 = uVar1 - 1;
    if (uVar1 == 0) {
      _DAT_8c4aa520 = _DAT_8c4aa520 + iVar2;
      _DAT_8c4aa51c = _DAT_8c4aa51c + iVar3;
      return ar7;
    }
  } while( true );
}

__asm__(".globl _FUN_8c214aec\n.set _FUN_8c214aec, _FUN_8c214aec_def\n");
