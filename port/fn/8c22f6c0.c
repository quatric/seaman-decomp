#include "../decls.h"
double * FUN_8c22f6c0_def(short *ar4,int ar5,uint ar6,double *ar7)

{
  double *a4;
  uint uVar1;
  int iVar2;
  int iVar3;
  short *psVar4;
  short *psVar5;
  int iVar6;
  int iVar7;
  double *pdVar8;
  double *pdVar9;
  double *pdVar10;
  double *pdVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  uint *puVar15;
  uint *puVar16;
  uint *puVar18;
  double in_dr0;
  double dVar19;
  double in_dr2;
  double dVar20;
  float fVar21;
  double in_dr4;
  double in_dr6;
  double dVar22;
  undefined4 uVar26;
  undefined4 uVar27;
  double dVar23;
  double dVar24;
  double dVar25;
  float fVar29;
  double dVar30;
  float fVar32;
  double dVar31;
  undefined8 in_dr12;
  undefined8 in_dr14;
  double dVar33;
  undefined8 in_xd4;
  undefined8 in_xd8;
  undefined8 in_xd10;
  undefined8 uVar34;
  undefined8 in_xd14;
  bool bVar35;
  char cVar36;
  char cVar37;
  undefined4 auStack_34 [2];
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  double *pdVar17;
  undefined4 uVar28;
  
  cVar37 = '\0';
  cVar36 = '\0';
  uStack_20 = (int)((ulonglong)in_dr12 >> 0x20);
  uStack_24 = (int)in_dr12;
  uStack_28 = (int)((ulonglong)in_dr14 >> 0x20);
  uStack_2c = (int)in_dr14;
  puVar18 = auStack_34;
  auStack_34[0] = _DAT_8c4aa4f0;
  uVar1 = ar6 & 0x3fff;
  iVar2 = 0;
  iVar3 = 0;
  iVar6 = (ar6 >> 0xe & 3) << 1;
  do {
    iVar7 = (int)*ar4;
    fVar29 = 1.0;
    if ((*puVar18 & 0x80000000) != 0) {
      fVar29 = -1.0;
    }
    pdVar8 = (double *)(ar4[1] * 0x20 + ar5);
    if (iVar7 < 0) {
      iVar7 = -iVar7;
      fVar29 = -fVar29;
    }
    iVar3 = iVar3 + iVar7;
    iVar7 = iVar7 + -2;
    iVar13 = 0;
    iVar14 = 0;
    if (cVar36 == '\0') {
      fVar32 = (float)(int)ar4[2];
    }
    else {
      fVar32 = (float)((ulonglong)(double)(int)ar4[2] >> 0x20);
    }
    psVar5 = ar4 + 5;
    fVar21 = SUB84(in_dr4,0);
    if (cVar36 == '\0') {
      dVar31 = (double)CONCAT44(fVar32 * fVar21,(float)(int)ar4[3]);
    }
    else {
      dVar31 = (double)CONCAT44(fVar32,(float)(int)ar4[3]) * in_dr4;
    }
    pdVar10 = (double *)(ar4[4] * 0x20 + ar5);
    if (cVar36 == '\0') {
      dVar31 = (double)CONCAT44((int)((ulonglong)dVar31 >> 0x20),SUB84(dVar31,0) * fVar21);
    }
    else {
      dVar31 = dVar31 * in_dr4;
    }
    psVar4 = ar4 + 6;
    ar4 = ar4 + 7;
    if (cVar36 == '\0') {
      fVar32 = (float)(int)*psVar5;
    }
    else {
      fVar32 = (float)((ulonglong)(double)(int)*psVar5 >> 0x20);
    }
    if (cVar36 == '\0') {
      dVar25 = (double)CONCAT44(fVar32 * fVar21,(float)(int)*psVar4 * fVar21);
    }
    else {
      dVar25 = (double)CONCAT44(fVar32,(float)(int)*psVar4) * in_dr4 * in_dr4;
    }
    do {
      if (cVar36 == '\0') {
        fVar32 = (float)(int)ar4[1];
      }
      else {
        fVar32 = (float)((ulonglong)(double)(int)ar4[1] >> 0x20);
      }
      if (cVar37 == '\0') {
        dVar19 = (double)CONCAT44(*(undefined4 *)((int)pdVar8 + 4),SUB84(in_dr0,0));
        pdVar8 = pdVar8 + 1;
      }
      else {
        dVar19 = *(double *)((int)pdVar8 + 4);
        pdVar8 = (double *)((int)pdVar8 + 0xc);
      }
      if (cVar37 == '\0') {
        dVar22 = (double)CONCAT44(*(undefined4 *)pdVar8,SUB84(in_dr6,0));
        pdVar9 = (double *)((int)pdVar8 + 4);
      }
      else {
        dVar22 = *pdVar8;
        pdVar9 = pdVar8 + 1;
      }
      if (cVar37 == '\0') {
        dVar19 = (double)CONCAT44((int)((ulonglong)dVar19 >> 0x20),*(undefined4 *)((int)pdVar10 + 4)
                                 );
        pdVar10 = pdVar10 + 1;
      }
      else {
        pdVar10 = (double *)((int)pdVar10 + 0xc);
      }
      iVar12 = *ar4 * 0x20 + ar5;
      if (cVar37 == '\0') {
        dVar22 = (double)CONCAT44((int)((ulonglong)dVar22 >> 0x20),*(undefined4 *)pdVar10);
        pdVar11 = (double *)((int)pdVar10 + 4);
      }
      else {
        pdVar11 = pdVar10 + 1;
      }
      fVar21 = SUB84(in_dr4,0);
      if (cVar36 == '\0') {
        dVar33 = (double)CONCAT44(fVar32 * fVar21,(float)(int)ar4[2] * fVar21);
        dVar19 = (double)CONCAT44((float)((ulonglong)dVar19 >> 0x20) - SUB84(dVar19,0),
                                  SUB84(dVar19,0));
        dVar22 = (double)CONCAT44((float)((ulonglong)dVar22 >> 0x20) - SUB84(dVar22,0),
                                  SUB84(dVar22,0));
      }
      else {
        dVar33 = (double)CONCAT44(fVar32,(float)(int)ar4[2]) * in_dr4 * in_dr4;
        dVar19 = dVar19 - dVar19;
        dVar22 = dVar22 - dVar22;
      }
      a4 = (double *)((int)pdVar9 + -0xc);
      pdVar8 = (double *)((int)pdVar11 + -0xc);
      if (cVar37 == '\0') {
        dVar20 = (double)CONCAT44(*(undefined4 *)(iVar12 + 4),SUB84(in_dr2,0));
        dVar30 = (double)CONCAT44(*(undefined4 *)(iVar12 + 8),fVar29);
        iVar12 = iVar12 + 0xc;
      }
      else {
        dVar20 = *(double *)(iVar12 + 4);
        dVar30 = *(double *)(iVar12 + 0xc);
        iVar12 = iVar12 + 0x14;
      }
      pdVar10 = (double *)(iVar12 + -0xc);
      if (cVar36 == '\0') {
        fVar29 = (float)((ulonglong)dVar20 >> 0x20) - SUB84(dVar19,0);
      }
      else {
        fVar29 = (float)((ulonglong)(dVar20 - dVar19) >> 0x20);
      }
      psVar5 = ar4 + 3;
      if (cVar37 == '\0') {
        dVar19 = (double)CONCAT44((int)((ulonglong)dVar19 >> 0x20),*(undefined4 *)a4);
      }
      if (cVar36 == '\0') {
        dVar30 = (double)CONCAT44((float)((ulonglong)dVar30 >> 0x20) - SUB84(dVar22,0),
                                  SUB84(dVar30,0));
      }
      else {
        dVar30 = dVar30 - dVar22;
      }
      dVar20 = (double)CONCAT44(fVar29,0x3f800000);
      if (cVar36 == '\0') {
        dVar30 = (double)CONCAT44((float)((ulonglong)dVar30 >> 0x20) *
                                  (float)((ulonglong)dVar19 >> 0x20),SUB84(dVar30,0));
        bVar35 = SUB84(dVar19,0) < 1.0;
        in_dr6 = (double)CONCAT44((float)((ulonglong)dVar22 >> 0x20) * fVar29,SUB84(dVar22,0));
      }
      else {
        dVar30 = dVar30 * dVar19;
        bVar35 = dVar19 < dVar20;
        in_dr6 = dVar22 * dVar20;
      }
      fVar29 = (float)((ulonglong)in_dr4 >> 0x20);
      uVar28 = (undefined4)((ulonglong)dVar25 >> 0x20);
      uVar27 = (undefined4)((ulonglong)dVar31 >> 0x20);
      dVar22 = dVar33;
      if (bVar35) {
LAB_8c22f846:
        if (iVar13 == 0) {
          if (iVar14 != 0) {
            if (cVar37 == '\0') {
              dVar19 = (double)CONCAT44(*(undefined4 *)pdVar8,SUB84(dVar19,0));
              pdVar11 = pdVar11 + -1;
            }
            else {
              dVar19 = *pdVar8;
              pdVar11 = (double *)((int)pdVar11 + -4);
            }
            if (cVar37 == '\0') {
              dVar20 = (double)CONCAT44(*(undefined4 *)pdVar11,0x3f800000);
              dVar23 = (double)CONCAT44(*(undefined4 *)((int)pdVar11 + 4),SUB84(in_dr6,0));
              pdVar11 = pdVar11 + 1;
            }
            else {
              dVar20 = *pdVar11;
              dVar23 = pdVar11[1];
              pdVar11 = pdVar11 + 2;
            }
            if (cVar36 == '\0') {
              dVar23 = (double)CONCAT44(-(float)((ulonglong)dVar23 >> 0x20),SUB84(dVar23,0));
            }
            else {
              dVar23 = -dVar23;
            }
            pdVar8 = pdVar11 + -3;
            if (cVar37 == '\0') {
              pdVar9 = (double *)((int)ar7 + 0x14);
              *(undefined4 *)pdVar9 = uVar28;
            }
            else {
              pdVar9 = ar7 + 2;
              *pdVar9 = dVar25;
            }
            if (cVar36 == '\0') {
              dVar23 = (double)CONCAT44((float)((ulonglong)dVar23 >> 0x20) + fVar29,SUB84(dVar23,0))
              ;
            }
            else {
              dVar23 = dVar23 + in_dr4;
            }
            if (cVar37 == '\0') {
              pdVar9 = (double *)((int)pdVar9 + -4);
              *(int *)pdVar9 = (int)((ulonglong)dVar20 >> 0x20);
            }
            else {
              pdVar9 = pdVar9 + -1;
              *pdVar9 = dVar20;
            }
            if (cVar36 == '\0') {
              bVar35 = (float)((ulonglong)dVar23 >> 0x20) < fVar29;
            }
            else {
              bVar35 = dVar23 < in_dr4;
            }
            if (cVar37 == '\0') {
              pdVar9 = (double *)((int)pdVar9 + -4);
              *(int *)pdVar9 = (int)((ulonglong)dVar19 >> 0x20);
            }
            else {
              pdVar9 = pdVar9 + -1;
              *pdVar9 = dVar19;
            }
            dVar24 = dVar23;
            if ((bVar35) && (dVar24 = in_dr4, cVar37 == '\0')) {
              dVar24 = (double)CONCAT44(fVar29,SUB84(dVar23,0));
            }
            uVar28 = (undefined4)((ulonglong)dVar24 >> 0x20);
            in_dr6 = (double)CONCAT44(uVar28,-SUB84(dVar24,0));
            iVar2 = iVar2 + iVar14 + 1;
            *(undefined4 *)pdVar9 = 0xf0000000;
            if (cVar37 == '\0') {
              *(undefined4 *)(pdVar9 + 3) = uVar28;
            }
            else {
              pdVar9[3] = in_dr6;
            }
            ar7 = pdVar9 + 4;
          }
        }
        else {
          if (cVar37 == '\0') {
            dVar19 = (double)CONCAT44(*(undefined4 *)pdVar8,SUB84(dVar19,0));
            pdVar11 = pdVar11 + -1;
          }
          else {
            dVar19 = *pdVar8;
            pdVar11 = (double *)((int)pdVar11 + -4);
          }
          if (cVar37 == '\0') {
            dVar20 = (double)CONCAT44(*(undefined4 *)pdVar11,0x3f800000);
            dVar23 = (double)CONCAT44(*(undefined4 *)((int)pdVar11 + 4),SUB84(in_dr6,0));
            pdVar11 = pdVar11 + 1;
          }
          else {
            dVar20 = *pdVar11;
            dVar23 = pdVar11[1];
            pdVar11 = pdVar11 + 2;
          }
          pdVar8 = pdVar11 + -3;
          if (cVar37 == '\0') {
            pdVar9 = (double *)((int)ar7 + 0x14);
            *(undefined4 *)pdVar9 = uVar28;
          }
          else {
            pdVar9 = ar7 + 2;
            *pdVar9 = dVar25;
          }
          if (cVar36 == '\0') {
            dVar23 = (double)CONCAT44((float)((ulonglong)dVar23 >> 0x20) + fVar29,SUB84(dVar23,0));
          }
          else {
            dVar23 = dVar23 + in_dr4;
          }
          if (cVar37 == '\0') {
            pdVar9 = (double *)((int)pdVar9 + -4);
            *(int *)pdVar9 = (int)((ulonglong)dVar20 >> 0x20);
          }
          else {
            pdVar9 = pdVar9 + -1;
            *pdVar9 = dVar20;
          }
          if (cVar36 == '\0') {
            bVar35 = (float)((ulonglong)dVar23 >> 0x20) < fVar29;
          }
          else {
            bVar35 = dVar23 < in_dr4;
          }
          if (cVar37 == '\0') {
            pdVar9 = (double *)((int)pdVar9 + -4);
            *(int *)pdVar9 = (int)((ulonglong)dVar19 >> 0x20);
          }
          else {
            pdVar9 = pdVar9 + -1;
            *pdVar9 = dVar19;
          }
          in_dr6 = dVar23;
          if ((bVar35) && (in_dr6 = in_dr4, cVar37 == '\0')) {
            in_dr6 = (double)CONCAT44(fVar29,SUB84(dVar23,0));
          }
          iVar2 = iVar2 + iVar13 + 1;
          *(undefined4 *)pdVar9 = 0xf0000000;
          if (cVar37 == '\0') {
            *(int *)(pdVar9 + 3) = (int)((ulonglong)in_dr6 >> 0x20);
          }
          else {
            pdVar9[3] = in_dr6;
          }
          ar7 = pdVar9 + 4;
        }
        iVar13 = 0;
        if (cVar37 == '\0') {
          dVar19 = (double)CONCAT44(*(undefined4 *)a4,SUB84(dVar19,0));
        }
        else {
          dVar19 = *a4;
        }
        iVar14 = 0;
        in_dr2 = (double)CONCAT44((int)((ulonglong)dVar20 >> 0x20),0x3f800000);
        if (cVar36 == '\0') {
          bVar35 = 1.0 < (float)((ulonglong)dVar19 >> 0x20);
        }
        else {
          bVar35 = in_dr2 < dVar19;
        }
        if (cVar37 == '\0') {
          dVar19 = (double)CONCAT44(*(undefined4 *)pdVar8,SUB84(dVar19,0));
        }
        else {
          dVar19 = *pdVar8;
        }
        if (!bVar35) {
          if (cVar36 == '\0') {
            bVar35 = 1.0 < (float)((ulonglong)dVar19 >> 0x20);
          }
          else {
            bVar35 = in_dr2 < dVar19;
          }
          if (cVar37 == '\0') {
            in_dr0 = (double)CONCAT44(*(undefined4 *)pdVar10,SUB84(dVar19,0));
          }
          else {
            in_dr0 = *pdVar10;
          }
          if (!bVar35) {
            if (cVar36 == '\0') {
              bVar35 = (float)((ulonglong)in_dr0 >> 0x20) < 1.0;
            }
            else {
              bVar35 = in_dr0 < in_dr2;
            }
            if (bVar35) goto LAB_8c22f9ac;
          }
        }
        *(uint *)((int)puVar18 + -4) = uVar1;
        *(int *)((int)puVar18 + -8) = iVar2;
        *(int *)((int)puVar18 + -0xc) = iVar3;
        *(short **)((int)puVar18 + -0x10) = psVar5;
        *(int *)((int)puVar18 + -0x14) = ar5;
        *(int *)((int)puVar18 + -0x18) = iVar6;
        if (cVar37 == '\0') {
          *(float *)((int)puVar18 + -0x1c) = fVar29;
          *(float *)((int)puVar18 + -0x20) = fVar21;
          *(float *)((int)puVar18 + -0x24) = SUB84(dVar30,0);
          *(undefined4 *)((int)puVar18 + -0x28) = uVar27;
          puVar15 = (uint *)((int)puVar18 + -0x2c);
          *(int *)((int)puVar18 + -0x2c) = SUB84(dVar31,0);
          uVar34 = in_xd10;
          in_dr6 = (double)((ulonglong)dVar25 & 0xffffffff);
          in_xd10 = in_xd4;
          in_dr0 = (double)((ulonglong)dVar30 & 0xffffffff);
        }
        else {
          *(double *)((int)puVar18 + -0x20) = in_dr4;
          *(undefined8 *)((int)puVar18 + -0x28) = in_xd4;
          *(undefined8 *)((int)puVar18 + -0x30) = in_xd8;
          *(double *)((int)puVar18 + -0x38) = dVar31;
          puVar15 = (uint *)((int)puVar18 + -0x40);
          *(undefined8 *)((int)puVar18 + -0x40) = in_xd10;
          uVar34 = in_xd8;
          in_xd8 = in_xd14;
          in_dr6 = dVar25;
          in_dr0 = in_dr4;
        }
        ar7 = (double *)FUN_8c22fa7c(a4,pdVar8,pdVar10,ar7);
        if (cVar37 == '\0') {
          dVar31 = (double)(ulonglong)*puVar15;
          pdVar17 = (double *)(puVar15 + 3);
          puVar16 = puVar15 + 5;
          in_xd4 = in_xd10;
          dVar30 = (double)(ulonglong)puVar15[2];
          in_xd10 = uVar34;
        }
        else {
          in_xd10 = *(undefined8 *)puVar15;
          dVar31 = *(double *)(puVar15 + 2);
          in_xd8 = *(undefined8 *)(puVar15 + 4);
          in_xd4 = *(undefined8 *)(puVar15 + 6);
          pdVar17 = (double *)(puVar15 + 8);
          puVar16 = puVar15 + 10;
          dVar30 = dVar33;
        }
        in_dr4 = *pdVar17;
        iVar6 = *puVar16;
        ar5 = puVar16[1];
        psVar5 = (short *)puVar16[2];
        iVar3 = puVar16[3];
        iVar2 = puVar16[4];
        uVar1 = puVar16[5];
        puVar18 = puVar16 + 6;
        if (cVar36 == '\0') {
          puVar18 = puVar16 + 6;
        }
      }
      else {
        if (cVar37 == '\0') {
          dVar19 = (double)CONCAT44(*(undefined4 *)pdVar8,SUB84(dVar19,0));
        }
        else {
          dVar19 = *pdVar8;
        }
        if (cVar36 == '\0') {
          fVar32 = (float)((ulonglong)in_dr6 >> 0x20) - (float)((ulonglong)dVar30 >> 0x20);
          bVar35 = (float)((ulonglong)dVar19 >> 0x20) < 1.0;
        }
        else {
          fVar32 = (float)((ulonglong)(in_dr6 - dVar30) >> 0x20);
          bVar35 = dVar19 < dVar20;
        }
        in_dr6 = (double)((ulonglong)(uint)fVar32 << 0x20);
        if (bVar35) goto LAB_8c22f846;
        if (cVar37 == '\0') {
          dVar19 = (double)CONCAT44(*(undefined4 *)pdVar10,SUB84(dVar19,0));
        }
        else {
          dVar19 = *pdVar10;
        }
        if (cVar36 == '\0') {
          in_dr6 = (double)((ulonglong)(uint)(fVar32 * SUB84(dVar30,0)) << 0x20);
          bVar35 = (float)((ulonglong)dVar19 >> 0x20) < 1.0;
        }
        else {
          in_dr6 = in_dr6 * dVar30;
          bVar35 = dVar19 < dVar20;
        }
        if (bVar35) goto LAB_8c22f846;
        fVar32 = SUB84(in_dr6,0);
        if (cVar36 != '\0' || fVar32 <= (float)((ulonglong)in_dr6 >> 0x20)) {
          if (iVar13 != 0) {
            if (cVar37 == '\0') {
              dVar19 = (double)CONCAT44(*(undefined4 *)pdVar8,SUB84(dVar19,0));
              dVar20 = (double)CONCAT44(*(undefined4 *)(pdVar11 + -1),0x3f800000);
              dVar33 = (double)CONCAT44(*(undefined4 *)((int)pdVar11 + -4),fVar32);
            }
            else {
              dVar19 = *pdVar8;
              dVar20 = *(double *)((int)pdVar11 + -4);
              dVar33 = *(double *)((int)pdVar11 + 4);
              pdVar11 = (double *)((int)pdVar11 + 0xc);
            }
            pdVar8 = pdVar11 + -3;
            if (cVar37 == '\0') {
              pdVar11 = (double *)((int)ar7 + 0x14);
              *(undefined4 *)pdVar11 = uVar28;
            }
            else {
              pdVar11 = ar7 + 2;
              *pdVar11 = dVar25;
            }
            if (cVar36 == '\0') {
              dVar33 = (double)CONCAT44((float)((ulonglong)dVar33 >> 0x20) + fVar29,SUB84(dVar33,0))
              ;
            }
            else {
              dVar33 = dVar33 + in_dr4;
            }
            if (cVar37 == '\0') {
              pdVar11 = (double *)((int)pdVar11 + -4);
              *(int *)pdVar11 = (int)((ulonglong)dVar20 >> 0x20);
            }
            else {
              pdVar11 = pdVar11 + -1;
              *pdVar11 = dVar20;
            }
            if (cVar36 == '\0') {
              bVar35 = (float)((ulonglong)dVar33 >> 0x20) < fVar29;
            }
            else {
              bVar35 = dVar33 < in_dr4;
            }
            if (cVar37 == '\0') {
              pdVar11 = (double *)((int)pdVar11 + -4);
              *(int *)pdVar11 = (int)((ulonglong)dVar19 >> 0x20);
            }
            else {
              pdVar11 = pdVar11 + -1;
              *pdVar11 = dVar19;
            }
            in_dr6 = dVar33;
            if ((bVar35) && (in_dr6 = in_dr4, cVar37 == '\0')) {
              in_dr6 = (double)CONCAT44(fVar29,SUB84(dVar33,0));
            }
            iVar2 = iVar2 + iVar13 + 1;
            *(undefined4 *)pdVar11 = 0xf0000000;
            iVar13 = 0;
            if (cVar37 == '\0') {
              *(int *)(pdVar11 + 3) = (int)((ulonglong)in_dr6 >> 0x20);
            }
            else {
              pdVar11[3] = in_dr6;
            }
            ar7 = pdVar11 + 4;
          }
          if (iVar14 == 0) {
            if (cVar37 == '\0') {
              dVar19 = (double)CONCAT44(*(undefined4 *)a4,SUB84(dVar19,0));
              dVar20 = (double)CONCAT44(*(undefined4 *)(pdVar9 + -1),SUB84(dVar20,0));
              dVar33 = (double)CONCAT44(*(undefined4 *)((int)pdVar9 + -4),SUB84(in_dr6,0));
            }
            else {
              dVar19 = *a4;
              dVar20 = *(double *)((int)pdVar9 + -4);
              dVar33 = *(double *)((int)pdVar9 + 4);
            }
            iVar14 = 1;
            if (cVar36 == '\0') {
              dVar33 = (double)CONCAT44(-(float)((ulonglong)dVar33 >> 0x20),SUB84(dVar33,0));
            }
            else {
              dVar33 = -dVar33;
            }
            if (cVar37 == '\0') {
              pdVar9 = (double *)((int)ar7 + 0x14);
              *(undefined4 *)pdVar9 = uVar27;
            }
            else {
              pdVar9 = ar7 + 2;
              *pdVar9 = dVar31;
            }
            if (cVar36 == '\0') {
              dVar33 = (double)CONCAT44((float)((ulonglong)dVar33 >> 0x20) + fVar29,SUB84(dVar33,0))
              ;
            }
            else {
              dVar33 = dVar33 + in_dr4;
            }
            if (cVar37 == '\0') {
              pdVar9 = (double *)((int)pdVar9 + -4);
              *(int *)pdVar9 = (int)((ulonglong)dVar20 >> 0x20);
            }
            else {
              pdVar9 = pdVar9 + -1;
              *pdVar9 = dVar20;
            }
            if (cVar36 == '\0') {
              bVar35 = (float)((ulonglong)dVar33 >> 0x20) < fVar29;
            }
            else {
              bVar35 = dVar33 < in_dr4;
            }
            if (cVar37 == '\0') {
              pdVar9 = (double *)((int)pdVar9 + -4);
              *(int *)pdVar9 = (int)((ulonglong)dVar19 >> 0x20);
            }
            else {
              pdVar9 = pdVar9 + -1;
              *pdVar9 = dVar19;
            }
            dVar23 = dVar33;
            if ((bVar35) && (dVar23 = in_dr4, cVar37 == '\0')) {
              dVar23 = (double)CONCAT44(fVar29,SUB84(dVar33,0));
            }
            uVar27 = (undefined4)((ulonglong)dVar23 >> 0x20);
            in_dr6 = (double)CONCAT44(uVar27,-SUB84(dVar23,0));
            *(undefined4 *)pdVar9 = 0xe0000000;
            if (cVar37 == '\0') {
              *(undefined4 *)(pdVar9 + 3) = uVar27;
            }
            else {
              pdVar9[3] = in_dr6;
            }
            ar7 = pdVar9 + 4;
          }
          if (cVar37 == '\0') {
            in_dr0 = (double)CONCAT44(*(undefined4 *)pdVar8,SUB84(dVar19,0));
            in_dr2 = (double)CONCAT44(*(undefined4 *)((int)pdVar8 + 4),SUB84(dVar20,0));
            dVar19 = (double)CONCAT44(*(undefined4 *)(pdVar8 + 1),SUB84(in_dr6,0));
            pdVar8 = (double *)((int)pdVar8 + 0xc);
          }
          else {
            in_dr0 = *pdVar8;
            in_dr2 = pdVar8[1];
            dVar19 = pdVar8[2];
            pdVar8 = pdVar8 + 3;
          }
          iVar14 = iVar14 + 1;
          pdVar8 = pdVar8 + -3;
          if (cVar36 == '\0') {
            dVar19 = (double)CONCAT44(-(float)((ulonglong)dVar19 >> 0x20),SUB84(dVar19,0));
          }
          else {
            dVar19 = -dVar19;
          }
          if (cVar37 == '\0') {
            pdVar9 = (double *)((int)ar7 + 0x14);
            *(undefined4 *)pdVar9 = uVar28;
          }
          else {
            pdVar9 = ar7 + 2;
            *pdVar9 = dVar25;
          }
          if (cVar36 == '\0') {
            dVar19 = (double)CONCAT44((float)((ulonglong)dVar19 >> 0x20) + fVar29,SUB84(dVar19,0));
          }
          else {
            dVar19 = dVar19 + in_dr4;
          }
          if (cVar37 == '\0') {
            pdVar9 = (double *)((int)pdVar9 + -4);
            *(int *)pdVar9 = (int)((ulonglong)in_dr2 >> 0x20);
          }
          else {
            pdVar9 = pdVar9 + -1;
            *pdVar9 = in_dr2;
          }
          if (cVar36 == '\0') {
            bVar35 = (float)((ulonglong)dVar19 >> 0x20) < fVar29;
          }
          else {
            bVar35 = dVar19 < in_dr4;
          }
          if (cVar37 == '\0') {
            pdVar9 = (double *)((int)pdVar9 + -4);
            *(int *)pdVar9 = (int)((ulonglong)in_dr0 >> 0x20);
          }
          else {
            pdVar9 = pdVar9 + -1;
            *pdVar9 = in_dr0;
          }
          dVar33 = dVar19;
          if ((bVar35) && (dVar33 = in_dr4, cVar37 == '\0')) {
            dVar33 = (double)CONCAT44(fVar29,SUB84(dVar19,0));
          }
          uVar27 = (undefined4)((ulonglong)dVar33 >> 0x20);
          in_dr6 = (double)CONCAT44(uVar27,-SUB84(dVar33,0));
          *(undefined4 *)pdVar9 = 0xe0000000;
          if (cVar37 == '\0') {
            *(undefined4 *)(pdVar9 + 3) = uVar27;
          }
          else {
            pdVar9[3] = in_dr6;
          }
          ar7 = pdVar9 + 4;
        }
        else {
          if (iVar14 != 0) {
            if (cVar37 == '\0') {
              dVar19 = (double)CONCAT44(*(undefined4 *)pdVar8,SUB84(dVar19,0));
              dVar20 = (double)CONCAT44(*(undefined4 *)(pdVar11 + -1),0x3f800000);
              dVar33 = (double)CONCAT44(*(undefined4 *)((int)pdVar11 + -4),fVar32);
            }
            else {
              dVar19 = *pdVar8;
              dVar20 = *(double *)((int)pdVar11 + -4);
              dVar33 = *(double *)((int)pdVar11 + 4);
              pdVar11 = (double *)((int)pdVar11 + 0xc);
            }
            pdVar8 = pdVar11 + -3;
            if (cVar36 == '\0') {
              dVar33 = (double)CONCAT44(-(float)((ulonglong)dVar33 >> 0x20),SUB84(dVar33,0));
            }
            else {
              dVar33 = -dVar33;
            }
            if (cVar37 == '\0') {
              pdVar11 = (double *)((int)ar7 + 0x14);
              *(undefined4 *)pdVar11 = uVar28;
            }
            else {
              pdVar11 = ar7 + 2;
              *pdVar11 = dVar25;
            }
            if (cVar36 == '\0') {
              dVar33 = (double)CONCAT44((float)((ulonglong)dVar33 >> 0x20) + fVar29,SUB84(dVar33,0))
              ;
            }
            else {
              dVar33 = dVar33 + in_dr4;
            }
            if (cVar37 == '\0') {
              pdVar11 = (double *)((int)pdVar11 + -4);
              *(int *)pdVar11 = (int)((ulonglong)dVar20 >> 0x20);
            }
            else {
              pdVar11 = pdVar11 + -1;
              *pdVar11 = dVar20;
            }
            if (cVar36 == '\0') {
              bVar35 = (float)((ulonglong)dVar33 >> 0x20) < fVar29;
            }
            else {
              bVar35 = dVar33 < in_dr4;
            }
            if (cVar37 == '\0') {
              pdVar11 = (double *)((int)pdVar11 + -4);
              *(int *)pdVar11 = (int)((ulonglong)dVar19 >> 0x20);
            }
            else {
              pdVar11 = pdVar11 + -1;
              *pdVar11 = dVar19;
            }
            dVar23 = dVar33;
            if ((bVar35) && (dVar23 = in_dr4, cVar37 == '\0')) {
              dVar23 = (double)CONCAT44(fVar29,SUB84(dVar33,0));
            }
            uVar26 = (undefined4)((ulonglong)dVar23 >> 0x20);
            in_dr6 = (double)CONCAT44(uVar26,-SUB84(dVar23,0));
            iVar2 = iVar2 + iVar14 + 1;
            *(undefined4 *)pdVar11 = 0xf0000000;
            iVar14 = 0;
            if (cVar37 == '\0') {
              *(undefined4 *)(pdVar11 + 3) = uVar26;
            }
            else {
              pdVar11[3] = in_dr6;
            }
            ar7 = pdVar11 + 4;
          }
          if (iVar13 == 0) {
            if (cVar37 == '\0') {
              dVar19 = (double)CONCAT44(*(undefined4 *)a4,SUB84(dVar19,0));
              dVar20 = (double)CONCAT44(*(undefined4 *)(pdVar9 + -1),SUB84(dVar20,0));
              dVar33 = (double)CONCAT44(*(undefined4 *)((int)pdVar9 + -4),SUB84(in_dr6,0));
              pdVar9 = (double *)((int)ar7 + 0x14);
              *(undefined4 *)pdVar9 = uVar27;
            }
            else {
              dVar19 = *a4;
              dVar20 = *(double *)((int)pdVar9 + -4);
              dVar33 = *(double *)((int)pdVar9 + 4);
              pdVar9 = ar7 + 2;
              *pdVar9 = dVar31;
            }
            iVar13 = 1;
            if (cVar36 == '\0') {
              dVar33 = (double)CONCAT44((float)((ulonglong)dVar33 >> 0x20) + fVar29,SUB84(dVar33,0))
              ;
            }
            else {
              dVar33 = dVar33 + in_dr4;
            }
            if (cVar37 == '\0') {
              pdVar9 = (double *)((int)pdVar9 + -4);
              *(int *)pdVar9 = (int)((ulonglong)dVar20 >> 0x20);
            }
            else {
              pdVar9 = pdVar9 + -1;
              *pdVar9 = dVar20;
            }
            if (cVar36 == '\0') {
              bVar35 = (float)((ulonglong)dVar33 >> 0x20) < fVar29;
            }
            else {
              bVar35 = dVar33 < in_dr4;
            }
            if (cVar37 == '\0') {
              pdVar9 = (double *)((int)pdVar9 + -4);
              *(int *)pdVar9 = (int)((ulonglong)dVar19 >> 0x20);
            }
            else {
              pdVar9 = pdVar9 + -1;
              *pdVar9 = dVar19;
            }
            in_dr6 = dVar33;
            if ((bVar35) && (in_dr6 = in_dr4, cVar37 == '\0')) {
              in_dr6 = (double)CONCAT44(fVar29,SUB84(dVar33,0));
            }
            *(undefined4 *)pdVar9 = 0xe0000000;
            if (cVar37 == '\0') {
              *(int *)(pdVar9 + 3) = (int)((ulonglong)in_dr6 >> 0x20);
            }
            else {
              pdVar9[3] = in_dr6;
            }
            ar7 = pdVar9 + 4;
          }
          if (cVar37 == '\0') {
            in_dr0 = (double)CONCAT44(*(undefined4 *)pdVar8,SUB84(dVar19,0));
            in_dr2 = (double)CONCAT44(*(undefined4 *)((int)pdVar8 + 4),SUB84(dVar20,0));
            dVar19 = (double)CONCAT44(*(undefined4 *)(pdVar8 + 1),SUB84(in_dr6,0));
            pdVar8 = (double *)((int)pdVar8 + 0xc);
          }
          else {
            in_dr0 = *pdVar8;
            in_dr2 = pdVar8[1];
            dVar19 = pdVar8[2];
            pdVar8 = pdVar8 + 3;
          }
          iVar13 = iVar13 + 1;
          pdVar8 = pdVar8 + -3;
          if (cVar37 == '\0') {
            pdVar9 = (double *)((int)ar7 + 0x14);
            *(undefined4 *)pdVar9 = uVar28;
          }
          else {
            pdVar9 = ar7 + 2;
            *pdVar9 = dVar25;
          }
          if (cVar36 == '\0') {
            dVar19 = (double)CONCAT44((float)((ulonglong)dVar19 >> 0x20) + fVar29,SUB84(dVar19,0));
          }
          else {
            dVar19 = dVar19 + in_dr4;
          }
          if (cVar37 == '\0') {
            pdVar9 = (double *)((int)pdVar9 + -4);
            *(int *)pdVar9 = (int)((ulonglong)in_dr2 >> 0x20);
          }
          else {
            pdVar9 = pdVar9 + -1;
            *pdVar9 = in_dr2;
          }
          if (cVar36 == '\0') {
            bVar35 = (float)((ulonglong)dVar19 >> 0x20) < fVar29;
          }
          else {
            bVar35 = dVar19 < in_dr4;
          }
          if (cVar37 == '\0') {
            pdVar9 = (double *)((int)pdVar9 + -4);
            *(int *)pdVar9 = (int)((ulonglong)in_dr0 >> 0x20);
          }
          else {
            pdVar9 = pdVar9 + -1;
            *pdVar9 = in_dr0;
          }
          in_dr6 = dVar19;
          if ((bVar35) && (in_dr6 = in_dr4, cVar37 == '\0')) {
            in_dr6 = (double)CONCAT44(fVar29,SUB84(dVar19,0));
          }
          *(undefined4 *)pdVar9 = 0xe0000000;
          if (cVar37 == '\0') {
            *(int *)(pdVar9 + 3) = (int)((ulonglong)in_dr6 >> 0x20);
          }
          else {
            pdVar9[3] = in_dr6;
          }
          ar7 = pdVar9 + 4;
        }
      }
LAB_8c22f9ac:
      ar4 = (short *)((int)psVar5 + iVar6);
      fVar29 = -SUB84(dVar30,0);
      iVar7 = iVar7 + -1;
      uVar27 = (undefined4)((ulonglong)dVar22 >> 0x20);
      dVar19 = dVar22;
      if (cVar37 == '\0') {
        dVar19 = (double)CONCAT44(uVar27,SUB84(dVar25,0));
        dVar25 = (double)CONCAT44((int)((ulonglong)dVar25 >> 0x20),SUB84(dVar31,0));
      }
      dVar31 = dVar25;
      dVar25 = dVar19;
    } while (iVar7 != 0);
    fVar29 = (float)((ulonglong)in_dr4 >> 0x20);
    if (iVar13 == 0) {
      if (iVar14 != 0) {
        if (cVar37 == '\0') {
          in_dr0 = (double)CONCAT44(*(undefined4 *)pdVar10,SUB84(in_dr0,0));
          pdVar8 = (double *)(iVar12 + -8);
        }
        else {
          in_dr0 = *pdVar10;
          pdVar8 = (double *)(iVar12 + -4);
        }
        if (cVar37 == '\0') {
          in_dr2 = (double)CONCAT44(*(undefined4 *)pdVar8,SUB84(in_dr2,0));
          dVar31 = (double)CONCAT44(*(undefined4 *)((int)pdVar8 + 4),SUB84(in_dr6,0));
        }
        else {
          in_dr2 = *pdVar8;
          dVar31 = pdVar8[1];
        }
        if (cVar36 == '\0') {
          dVar31 = (double)CONCAT44(-(float)((ulonglong)dVar31 >> 0x20),SUB84(dVar31,0));
        }
        else {
          dVar31 = -dVar31;
        }
        if (cVar37 == '\0') {
          pdVar8 = (double *)((int)ar7 + 0x14);
          *(undefined4 *)pdVar8 = uVar27;
        }
        else {
          pdVar8 = ar7 + 2;
          *pdVar8 = dVar22;
        }
        if (cVar36 == '\0') {
          dVar31 = (double)CONCAT44((float)((ulonglong)dVar31 >> 0x20) + fVar29,SUB84(dVar31,0));
        }
        else {
          dVar31 = dVar31 + in_dr4;
        }
        if (cVar37 == '\0') {
          pdVar8 = (double *)((int)pdVar8 + -4);
          *(int *)pdVar8 = (int)((ulonglong)in_dr2 >> 0x20);
        }
        else {
          pdVar8 = pdVar8 + -1;
          *pdVar8 = in_dr2;
        }
        if (cVar36 == '\0') {
          bVar35 = (float)((ulonglong)dVar31 >> 0x20) < fVar29;
        }
        else {
          bVar35 = dVar31 < in_dr4;
        }
        if (cVar37 == '\0') {
          pdVar8 = (double *)((int)pdVar8 + -4);
          *(int *)pdVar8 = (int)((ulonglong)in_dr0 >> 0x20);
        }
        else {
          pdVar8 = pdVar8 + -1;
          *pdVar8 = in_dr0;
        }
        dVar25 = dVar31;
        if ((bVar35) && (dVar25 = in_dr4, cVar37 == '\0')) {
          dVar25 = (double)CONCAT44(fVar29,SUB84(dVar31,0));
        }
        uVar27 = (undefined4)((ulonglong)dVar25 >> 0x20);
        in_dr6 = (double)CONCAT44(uVar27,-SUB84(dVar25,0));
        iVar2 = iVar2 + iVar14 + 1;
        *(undefined4 *)pdVar8 = 0xf0000000;
        if (cVar37 == '\0') {
          *(undefined4 *)(pdVar8 + 3) = uVar27;
        }
        else {
          pdVar8[3] = in_dr6;
        }
        ar7 = pdVar8 + 4;
      }
    }
    else {
      if (cVar37 == '\0') {
        in_dr0 = (double)CONCAT44(*(undefined4 *)pdVar10,SUB84(in_dr0,0));
        pdVar8 = (double *)(iVar12 + -8);
      }
      else {
        in_dr0 = *pdVar10;
        pdVar8 = (double *)(iVar12 + -4);
      }
      if (cVar37 == '\0') {
        in_dr2 = (double)CONCAT44(*(undefined4 *)pdVar8,SUB84(in_dr2,0));
        dVar31 = (double)CONCAT44(*(undefined4 *)((int)pdVar8 + 4),SUB84(in_dr6,0));
        pdVar8 = (double *)((int)ar7 + 0x14);
        *(undefined4 *)pdVar8 = uVar27;
      }
      else {
        in_dr2 = *pdVar8;
        dVar31 = pdVar8[1];
        pdVar8 = ar7 + 2;
        *pdVar8 = dVar22;
      }
      if (cVar36 == '\0') {
        dVar31 = (double)CONCAT44((float)((ulonglong)dVar31 >> 0x20) + fVar29,SUB84(dVar31,0));
      }
      else {
        dVar31 = dVar31 + in_dr4;
      }
      if (cVar37 == '\0') {
        pdVar8 = (double *)((int)pdVar8 + -4);
        *(int *)pdVar8 = (int)((ulonglong)in_dr2 >> 0x20);
      }
      else {
        pdVar8 = pdVar8 + -1;
        *pdVar8 = in_dr2;
      }
      if (cVar36 == '\0') {
        bVar35 = (float)((ulonglong)dVar31 >> 0x20) < fVar29;
      }
      else {
        bVar35 = dVar31 < in_dr4;
      }
      if (cVar37 == '\0') {
        pdVar8 = (double *)((int)pdVar8 + -4);
        *(int *)pdVar8 = (int)((ulonglong)in_dr0 >> 0x20);
      }
      else {
        pdVar8 = pdVar8 + -1;
        *pdVar8 = in_dr0;
      }
      in_dr6 = dVar31;
      if ((bVar35) && (in_dr6 = in_dr4, cVar37 == '\0')) {
        in_dr6 = (double)CONCAT44(fVar29,SUB84(dVar31,0));
      }
      iVar2 = iVar2 + iVar13 + 1;
      *(undefined4 *)pdVar8 = 0xf0000000;
      if (cVar37 == '\0') {
        *(int *)(pdVar8 + 3) = (int)((ulonglong)in_dr6 >> 0x20);
      }
      else {
        pdVar8[3] = in_dr6;
      }
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

__asm__(".globl _FUN_8c22f6c0\n.set _FUN_8c22f6c0, _FUN_8c22f6c0_def\n");
