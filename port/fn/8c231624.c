#include "../decls.h"
double * FUN_8c231624_def(short *ar4,int ar5,uint ar6,double *ar7)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  short *psVar4;
  int iVar5;
  int iVar6;
  double *pdVar7;
  int iVar8;
  double *ar4_00;
  double *pdVar9;
  double *pdVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  uint *puVar14;
  uint *puVar15;
  uint *puVar17;
  double in_dr0;
  double dVar18;
  double in_dr2;
  double dVar19;
  double dVar20;
  undefined8 in_dr4;
  double dVar21;
  double in_dr6;
  double dVar22;
  float fVar24;
  undefined4 uVar25;
  double dVar23;
  undefined4 uVar27;
  float fVar28;
  double dVar29;
  double in_dr10;
  double dVar30;
  double in_dr12;
  double dVar31;
  double in_dr14;
  undefined8 in_xd4;
  undefined8 in_xd8;
  undefined8 in_xd10;
  bool bVar32;
  char cVar33;
  char cVar34;
  undefined4 auStack_34 [2];
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  double *pdVar16;
  undefined4 uVar26;
  
  cVar34 = '\0';
  cVar33 = '\0';
  uStack_20 = (int)((ulonglong)in_dr12 >> 0x20);
  uStack_24 = SUB84(in_dr12,0);
  uStack_28 = (int)((ulonglong)in_dr14 >> 0x20);
  uStack_2c = SUB84(in_dr14,0);
  puVar17 = auStack_34;
  auStack_34[0] = _DAT_8c4aa4f0;
  uVar1 = ar6 & 0x3fff;
  iVar2 = 0;
  iVar3 = 0;
  iVar5 = (ar6 >> 0xe & 3) << 1;
  dVar21 = (double)CONCAT44((int)((ulonglong)in_dr4 >> 0x20),0x3f000000);
  do {
    iVar6 = (int)*ar4;
    fVar28 = 1.0;
    if ((*puVar17 & 0x80000000) != 0) {
      fVar28 = -1.0;
    }
    pdVar7 = (double *)(ar4[1] * 0x20 + ar5);
    if (iVar6 < 0) {
      iVar6 = -iVar6;
      fVar28 = -fVar28;
    }
    iVar3 = iVar3 + iVar6;
    iVar6 = iVar6 + -2;
    iVar12 = 0;
    iVar13 = 0;
    pdVar9 = (double *)(ar4[4] * 0x20 + ar5);
    if (cVar34 == '\0') {
      dVar30 = (double)CONCAT44(*(undefined4 *)(pdVar7 + 3),SUB84(in_dr10,0));
    }
    else {
      dVar30 = pdVar7[3];
    }
    fVar24 = SUB84(dVar21,0);
    if (cVar33 == '\0') {
      dVar30 = (double)CONCAT44((float)((ulonglong)dVar30 >> 0x20) * fVar24 + fVar24,
                                SUB84(dVar30,0) * fVar24 + fVar24);
    }
    else {
      dVar30 = dVar30 * dVar21 * dVar21 + dVar21 + dVar21;
    }
    ar4 = ar4 + 7;
    if (cVar34 == '\0') {
      dVar31 = (double)CONCAT44(*(undefined4 *)(pdVar9 + 3),SUB84(in_dr12,0));
    }
    else {
      dVar31 = pdVar9[3];
    }
    if (cVar33 == '\0') {
      dVar31 = (double)CONCAT44((float)((ulonglong)dVar31 >> 0x20) * fVar24 + fVar24,
                                SUB84(dVar31,0) * fVar24 + fVar24);
    }
    else {
      dVar31 = dVar31 * dVar21 * dVar21 + dVar21 + dVar21;
    }
    do {
      if (cVar34 == '\0') {
        dVar18 = (double)CONCAT44(*(undefined4 *)((int)pdVar7 + 4),SUB84(in_dr0,0));
        dVar22 = (double)CONCAT44(*(undefined4 *)(pdVar7 + 1),SUB84(in_dr6,0));
        iVar8 = (int)pdVar7 + 0xc;
      }
      else {
        dVar18 = *(double *)((int)pdVar7 + 4);
        dVar22 = *(double *)((int)pdVar7 + 0xc);
        iVar8 = (int)pdVar7 + 0x14;
      }
      if (cVar34 == '\0') {
        dVar18 = (double)CONCAT44((int)((ulonglong)dVar18 >> 0x20),*(undefined4 *)((int)pdVar9 + 4))
        ;
        pdVar9 = pdVar9 + 1;
      }
      else {
        pdVar9 = (double *)((int)pdVar9 + 0xc);
      }
      iVar11 = *ar4 * 0x20 + ar5;
      if (cVar34 == '\0') {
        dVar22 = (double)CONCAT44((int)((ulonglong)dVar22 >> 0x20),*(undefined4 *)pdVar9);
        pdVar10 = (double *)((int)pdVar9 + 4);
      }
      else {
        pdVar10 = pdVar9 + 1;
      }
      ar4_00 = (double *)(iVar8 + -0xc);
      if (cVar33 == '\0') {
        dVar18 = (double)CONCAT44((float)((ulonglong)dVar18 >> 0x20) - SUB84(dVar18,0),
                                  SUB84(dVar18,0));
        dVar22 = (double)CONCAT44((float)((ulonglong)dVar22 >> 0x20) - SUB84(dVar22,0),
                                  SUB84(dVar22,0));
      }
      else {
        dVar18 = dVar18 - dVar18;
        dVar22 = dVar22 - dVar22;
      }
      pdVar7 = (double *)((int)pdVar10 + -0xc);
      if (cVar34 == '\0') {
        dVar19 = (double)CONCAT44(*(undefined4 *)(iVar11 + 4),SUB84(in_dr2,0));
        dVar29 = (double)CONCAT44(*(undefined4 *)(iVar11 + 8),fVar28);
        iVar11 = iVar11 + 0xc;
      }
      else {
        dVar19 = *(double *)(iVar11 + 4);
        dVar29 = *(double *)(iVar11 + 0xc);
        iVar11 = iVar11 + 0x14;
      }
      if (cVar33 == '\0') {
        fVar28 = (float)((ulonglong)dVar19 >> 0x20) - SUB84(dVar18,0);
      }
      else {
        fVar28 = (float)((ulonglong)(dVar19 - dVar18) >> 0x20);
      }
      psVar4 = ar4 + 3;
      if (cVar34 == '\0') {
        dVar19 = (double)CONCAT44(*(undefined4 *)(iVar11 + 0xc),SUB84(in_dr14,0));
      }
      else {
        dVar19 = *(double *)(iVar11 + 0xc);
      }
      pdVar9 = (double *)(iVar11 + -0xc);
      if (cVar33 == '\0') {
        dVar29 = (double)CONCAT44((float)((ulonglong)dVar29 >> 0x20) - SUB84(dVar22,0),
                                  SUB84(dVar29,0));
      }
      else {
        dVar29 = dVar29 - dVar22;
      }
      dVar20 = (double)CONCAT44(fVar28,0x3f800000);
      if (cVar33 == '\0') {
        dVar29 = (double)CONCAT44((float)((ulonglong)dVar29 >> 0x20) *
                                  (float)((ulonglong)dVar18 >> 0x20),SUB84(dVar29,0));
      }
      else {
        dVar29 = dVar29 * dVar18;
      }
      if (cVar34 == '\0') {
        dVar18 = (double)CONCAT44(*(undefined4 *)ar4_00,SUB84(dVar18,0));
      }
      else {
        dVar18 = *ar4_00;
      }
      if (cVar33 == '\0') {
        in_dr6 = (double)CONCAT44((float)((ulonglong)dVar22 >> 0x20) * fVar28,SUB84(dVar22,0));
        bVar32 = (float)((ulonglong)dVar18 >> 0x20) < 1.0;
      }
      else {
        in_dr6 = dVar22 * dVar20;
        bVar32 = dVar18 < dVar20;
      }
      if (cVar34 == '\0') {
        dVar18 = (double)CONCAT44(*(undefined4 *)pdVar7,SUB84(dVar18,0));
      }
      else {
        dVar18 = *pdVar7;
      }
      fVar28 = (float)((ulonglong)dVar21 >> 0x20);
      uVar27 = (undefined4)((ulonglong)dVar31 >> 0x20);
      uVar26 = (undefined4)((ulonglong)dVar30 >> 0x20);
      if (bVar32) {
LAB_8c23179c:
        if (iVar13 == 0) {
          if (iVar12 != 0) {
            if (cVar34 == '\0') {
              dVar18 = (double)CONCAT44(*(undefined4 *)pdVar7,SUB84(dVar18,0));
              dVar20 = (double)CONCAT44(*(undefined4 *)(pdVar10 + -1),0x3f800000);
              dVar22 = (double)CONCAT44(*(undefined4 *)((int)pdVar10 + -4),SUB84(in_dr6,0));
            }
            else {
              dVar18 = *pdVar7;
              dVar20 = *(double *)((int)pdVar10 + -4);
              dVar22 = *(double *)((int)pdVar10 + 4);
              pdVar10 = (double *)((int)pdVar10 + 0xc);
            }
            pdVar7 = pdVar10 + -3;
            if (cVar34 == '\0') {
              pdVar10 = (double *)((int)ar7 + 0x14);
              *(undefined4 *)pdVar10 = uVar27;
            }
            else {
              pdVar10 = ar7 + 2;
              *pdVar10 = dVar31;
            }
            if (cVar33 == '\0') {
              dVar22 = (double)CONCAT44((float)((ulonglong)dVar22 >> 0x20) + fVar28,SUB84(dVar22,0))
              ;
            }
            else {
              dVar22 = dVar22 + dVar21;
            }
            if (cVar34 == '\0') {
              pdVar10 = (double *)((int)pdVar10 + -4);
              *(int *)pdVar10 = (int)((ulonglong)dVar20 >> 0x20);
            }
            else {
              pdVar10 = pdVar10 + -1;
              *pdVar10 = dVar20;
            }
            if (cVar33 == '\0') {
              bVar32 = (float)((ulonglong)dVar22 >> 0x20) < fVar28;
            }
            else {
              bVar32 = dVar22 < dVar21;
            }
            if (cVar34 == '\0') {
              pdVar10 = (double *)((int)pdVar10 + -4);
              *(int *)pdVar10 = (int)((ulonglong)dVar18 >> 0x20);
            }
            else {
              pdVar10 = pdVar10 + -1;
              *pdVar10 = dVar18;
            }
            in_dr6 = dVar22;
            if ((bVar32) && (in_dr6 = dVar21, cVar34 == '\0')) {
              in_dr6 = (double)CONCAT44(fVar28,SUB84(dVar22,0));
            }
            iVar2 = iVar2 + iVar12 + 1;
            *(undefined4 *)pdVar10 = 0xf0000000;
            iVar12 = 0;
            if (cVar34 == '\0') {
              *(int *)(pdVar10 + 3) = (int)((ulonglong)in_dr6 >> 0x20);
            }
            else {
              pdVar10[3] = in_dr6;
            }
            ar7 = pdVar10 + 4;
          }
        }
        else {
          if (cVar34 == '\0') {
            dVar18 = (double)CONCAT44(*(undefined4 *)pdVar7,SUB84(dVar18,0));
            dVar20 = (double)CONCAT44(*(undefined4 *)(pdVar10 + -1),0x3f800000);
            dVar22 = (double)CONCAT44(*(undefined4 *)((int)pdVar10 + -4),SUB84(in_dr6,0));
          }
          else {
            dVar18 = *pdVar7;
            dVar20 = *(double *)((int)pdVar10 + -4);
            dVar22 = *(double *)((int)pdVar10 + 4);
            pdVar10 = (double *)((int)pdVar10 + 0xc);
          }
          pdVar7 = pdVar10 + -3;
          if (cVar33 == '\0') {
            dVar22 = (double)CONCAT44(-(float)((ulonglong)dVar22 >> 0x20),SUB84(dVar22,0));
          }
          else {
            dVar22 = -dVar22;
          }
          if (cVar34 == '\0') {
            pdVar10 = (double *)((int)ar7 + 0x14);
            *(undefined4 *)pdVar10 = uVar27;
          }
          else {
            pdVar10 = ar7 + 2;
            *pdVar10 = dVar31;
          }
          if (cVar33 == '\0') {
            dVar22 = (double)CONCAT44((float)((ulonglong)dVar22 >> 0x20) + fVar28,SUB84(dVar22,0));
          }
          else {
            dVar22 = dVar22 + dVar21;
          }
          if (cVar34 == '\0') {
            pdVar10 = (double *)((int)pdVar10 + -4);
            *(int *)pdVar10 = (int)((ulonglong)dVar20 >> 0x20);
          }
          else {
            pdVar10 = pdVar10 + -1;
            *pdVar10 = dVar20;
          }
          if (cVar33 == '\0') {
            bVar32 = (float)((ulonglong)dVar22 >> 0x20) < fVar28;
          }
          else {
            bVar32 = dVar22 < dVar21;
          }
          if (cVar34 == '\0') {
            pdVar10 = (double *)((int)pdVar10 + -4);
            *(int *)pdVar10 = (int)((ulonglong)dVar18 >> 0x20);
          }
          else {
            pdVar10 = pdVar10 + -1;
            *pdVar10 = dVar18;
          }
          dVar23 = dVar22;
          if ((bVar32) && (dVar23 = dVar21, cVar34 == '\0')) {
            dVar23 = (double)CONCAT44(fVar28,SUB84(dVar22,0));
          }
          uVar27 = (undefined4)((ulonglong)dVar23 >> 0x20);
          in_dr6 = (double)CONCAT44(uVar27,-SUB84(dVar23,0));
          iVar2 = iVar2 + iVar13 + 1;
          *(undefined4 *)pdVar10 = 0xf0000000;
          iVar13 = 0;
          if (cVar34 == '\0') {
            *(undefined4 *)(pdVar10 + 3) = uVar27;
          }
          else {
            pdVar10[3] = in_dr6;
          }
          ar7 = pdVar10 + 4;
        }
        if (cVar34 == '\0') {
          dVar18 = (double)CONCAT44(*(undefined4 *)ar4_00,SUB84(dVar18,0));
        }
        else {
          dVar18 = *ar4_00;
        }
        in_dr2 = (double)CONCAT44(0x3f800000,SUB84(dVar20,0));
        if (cVar33 == '\0') {
          bVar32 = 1.0 < (float)((ulonglong)dVar18 >> 0x20);
        }
        else {
          bVar32 = in_dr2 < dVar18;
        }
        if (cVar34 == '\0') {
          in_dr0 = (double)CONCAT44(*(undefined4 *)pdVar7,SUB84(dVar18,0));
        }
        else {
          in_dr0 = *pdVar7;
        }
        if (!bVar32) {
          if (cVar33 == '\0') {
            bVar32 = 1.0 < (float)((ulonglong)in_dr0 >> 0x20);
          }
          else {
            bVar32 = in_dr2 < in_dr0;
          }
          if (cVar34 == '\0') {
            in_dr0 = (double)CONCAT44(*(undefined4 *)pdVar9,SUB84(in_dr0,0));
          }
          else {
            in_dr0 = *pdVar9;
          }
          if (!bVar32) {
            if (cVar33 == '\0') {
              bVar32 = (float)((ulonglong)in_dr0 >> 0x20) < 1.0;
            }
            else {
              bVar32 = in_dr0 < in_dr2;
            }
            if (bVar32) goto LAB_8c2318f0;
          }
        }
        *(uint *)((int)puVar17 + -4) = uVar1;
        *(int *)((int)puVar17 + -8) = iVar2;
        *(int *)((int)puVar17 + -0xc) = iVar3;
        *(short **)((int)puVar17 + -0x10) = psVar4;
        *(int *)((int)puVar17 + -0x14) = ar5;
        *(int *)((int)puVar17 + -0x18) = iVar5;
        if (cVar34 == '\0') {
          *(float *)((int)puVar17 + -0x1c) = fVar28;
          *(int *)((int)puVar17 + -0x20) = SUB84(dVar21,0);
          *(float *)((int)puVar17 + -0x24) = SUB84(dVar29,0);
          *(undefined4 *)((int)puVar17 + -0x28) = uVar26;
          puVar14 = (uint *)((int)puVar17 + -0x2c);
          *(int *)((int)puVar17 + -0x2c) = SUB84(dVar30,0);
        }
        else {
          *(double *)((int)puVar17 + -0x20) = dVar21;
          *(undefined8 *)((int)puVar17 + -0x28) = in_xd4;
          *(undefined8 *)((int)puVar17 + -0x30) = in_xd8;
          *(double *)((int)puVar17 + -0x38) = dVar30;
          puVar14 = (uint *)((int)puVar17 + -0x40);
          *(undefined8 *)((int)puVar17 + -0x40) = in_xd10;
          in_xd4 = in_xd8;
        }
        ar7 = (double *)FUN_8c2319cc(ar4_00,pdVar7,pdVar9,ar7);
        if (cVar34 == '\0') {
          dVar30 = (double)(ulonglong)*puVar14;
          dVar29 = (double)(ulonglong)puVar14[2];
          pdVar16 = (double *)(puVar14 + 3);
          puVar15 = puVar14 + 5;
        }
        else {
          in_xd10 = *(undefined8 *)puVar14;
          dVar30 = *(double *)(puVar14 + 2);
          in_xd8 = *(undefined8 *)(puVar14 + 4);
          in_xd4 = *(undefined8 *)(puVar14 + 6);
          pdVar16 = (double *)(puVar14 + 8);
          puVar15 = puVar14 + 10;
        }
        dVar21 = *pdVar16;
        iVar5 = *puVar15;
        ar5 = puVar15[1];
        psVar4 = (short *)puVar15[2];
        iVar3 = puVar15[3];
        iVar2 = puVar15[4];
        uVar1 = puVar15[5];
        puVar17 = puVar15 + 6;
        if (cVar33 == '\0') {
          puVar17 = puVar15 + 6;
        }
      }
      else {
        if (cVar33 == '\0') {
          bVar32 = (float)((ulonglong)dVar18 >> 0x20) < 1.0;
        }
        else {
          bVar32 = dVar18 < dVar20;
        }
        if (cVar34 == '\0') {
          dVar18 = (double)CONCAT44(*(undefined4 *)pdVar9,SUB84(dVar18,0));
        }
        else {
          dVar18 = *pdVar9;
        }
        if (bVar32) goto LAB_8c23179c;
        if (cVar33 == '\0') {
          bVar32 = (float)((ulonglong)dVar18 >> 0x20) < 1.0;
          fVar24 = (float)((ulonglong)in_dr6 >> 0x20) - (float)((ulonglong)dVar29 >> 0x20);
        }
        else {
          bVar32 = dVar18 < dVar20;
          fVar24 = (float)((ulonglong)(in_dr6 - dVar29) >> 0x20);
        }
        if (cVar33 == '\0') {
          in_dr6 = (double)((ulonglong)(uint)(fVar24 * SUB84(dVar29,0)) << 0x20);
        }
        else {
          in_dr6 = (double)((ulonglong)(uint)fVar24 << 0x20) * dVar29;
        }
        if (bVar32) goto LAB_8c23179c;
        fVar24 = SUB84(in_dr6,0);
        if (cVar33 != '\0' || fVar24 <= (float)((ulonglong)in_dr6 >> 0x20)) {
          if (iVar12 != 0) {
            if (cVar34 == '\0') {
              dVar18 = (double)CONCAT44(*(undefined4 *)pdVar7,SUB84(dVar18,0));
              dVar20 = (double)CONCAT44(*(undefined4 *)(pdVar10 + -1),0x3f800000);
              dVar22 = (double)CONCAT44(*(undefined4 *)((int)pdVar10 + -4),fVar24);
            }
            else {
              dVar18 = *pdVar7;
              dVar20 = *(double *)((int)pdVar10 + -4);
              dVar22 = *(double *)((int)pdVar10 + 4);
              pdVar10 = (double *)((int)pdVar10 + 0xc);
            }
            pdVar7 = pdVar10 + -3;
            if (cVar34 == '\0') {
              pdVar10 = (double *)((int)ar7 + 0x14);
              *(undefined4 *)pdVar10 = uVar27;
            }
            else {
              pdVar10 = ar7 + 2;
              *pdVar10 = dVar31;
            }
            if (cVar33 == '\0') {
              dVar22 = (double)CONCAT44((float)((ulonglong)dVar22 >> 0x20) + fVar28,SUB84(dVar22,0))
              ;
            }
            else {
              dVar22 = dVar22 + dVar21;
            }
            if (cVar34 == '\0') {
              pdVar10 = (double *)((int)pdVar10 + -4);
              *(int *)pdVar10 = (int)((ulonglong)dVar20 >> 0x20);
            }
            else {
              pdVar10 = pdVar10 + -1;
              *pdVar10 = dVar20;
            }
            if (cVar33 == '\0') {
              bVar32 = (float)((ulonglong)dVar22 >> 0x20) < fVar28;
            }
            else {
              bVar32 = dVar22 < dVar21;
            }
            if (cVar34 == '\0') {
              pdVar10 = (double *)((int)pdVar10 + -4);
              *(int *)pdVar10 = (int)((ulonglong)dVar18 >> 0x20);
            }
            else {
              pdVar10 = pdVar10 + -1;
              *pdVar10 = dVar18;
            }
            in_dr6 = dVar22;
            if ((bVar32) && (in_dr6 = dVar21, cVar34 == '\0')) {
              in_dr6 = (double)CONCAT44(fVar28,SUB84(dVar22,0));
            }
            iVar2 = iVar2 + iVar12 + 1;
            *(undefined4 *)pdVar10 = 0xf0000000;
            iVar12 = 0;
            if (cVar34 == '\0') {
              *(int *)(pdVar10 + 3) = (int)((ulonglong)in_dr6 >> 0x20);
            }
            else {
              pdVar10[3] = in_dr6;
            }
            ar7 = pdVar10 + 4;
          }
          if (iVar13 == 0) {
            if (cVar34 == '\0') {
              dVar18 = (double)CONCAT44(*(undefined4 *)ar4_00,SUB84(dVar18,0));
              dVar20 = (double)CONCAT44(*(undefined4 *)(iVar8 + -8),SUB84(dVar20,0));
              dVar22 = (double)CONCAT44(*(undefined4 *)(iVar8 + -4),SUB84(in_dr6,0));
            }
            else {
              dVar18 = *ar4_00;
              dVar20 = *(double *)(iVar8 + -4);
              dVar22 = *(double *)(iVar8 + 4);
            }
            iVar13 = 1;
            if (cVar33 == '\0') {
              dVar22 = (double)CONCAT44(-(float)((ulonglong)dVar22 >> 0x20),SUB84(dVar22,0));
            }
            else {
              dVar22 = -dVar22;
            }
            if (cVar34 == '\0') {
              pdVar10 = (double *)((int)ar7 + 0x14);
              *(undefined4 *)pdVar10 = uVar26;
            }
            else {
              pdVar10 = ar7 + 2;
              *pdVar10 = dVar30;
            }
            if (cVar33 == '\0') {
              dVar22 = (double)CONCAT44((float)((ulonglong)dVar22 >> 0x20) + fVar28,SUB84(dVar22,0))
              ;
            }
            else {
              dVar22 = dVar22 + dVar21;
            }
            if (cVar34 == '\0') {
              pdVar10 = (double *)((int)pdVar10 + -4);
              *(int *)pdVar10 = (int)((ulonglong)dVar20 >> 0x20);
            }
            else {
              pdVar10 = pdVar10 + -1;
              *pdVar10 = dVar20;
            }
            if (cVar33 == '\0') {
              bVar32 = (float)((ulonglong)dVar22 >> 0x20) < fVar28;
            }
            else {
              bVar32 = dVar22 < dVar21;
            }
            if (cVar34 == '\0') {
              pdVar10 = (double *)((int)pdVar10 + -4);
              *(int *)pdVar10 = (int)((ulonglong)dVar18 >> 0x20);
            }
            else {
              pdVar10 = pdVar10 + -1;
              *pdVar10 = dVar18;
            }
            dVar23 = dVar22;
            if ((bVar32) && (dVar23 = dVar21, cVar34 == '\0')) {
              dVar23 = (double)CONCAT44(fVar28,SUB84(dVar22,0));
            }
            uVar26 = (undefined4)((ulonglong)dVar23 >> 0x20);
            in_dr6 = (double)CONCAT44(uVar26,-SUB84(dVar23,0));
            *(undefined4 *)pdVar10 = 0xe0000000;
            if (cVar34 == '\0') {
              *(undefined4 *)(pdVar10 + 3) = uVar26;
            }
            else {
              pdVar10[3] = in_dr6;
            }
            ar7 = pdVar10 + 4;
          }
          if (cVar34 == '\0') {
            in_dr0 = (double)CONCAT44(*(undefined4 *)pdVar7,SUB84(dVar18,0));
            in_dr2 = (double)CONCAT44(*(undefined4 *)((int)pdVar7 + 4),SUB84(dVar20,0));
            dVar18 = (double)CONCAT44(*(undefined4 *)(pdVar7 + 1),SUB84(in_dr6,0));
            pdVar7 = (double *)((int)pdVar7 + 0xc);
          }
          else {
            in_dr0 = *pdVar7;
            in_dr2 = pdVar7[1];
            dVar18 = pdVar7[2];
            pdVar7 = pdVar7 + 3;
          }
          iVar13 = iVar13 + 1;
          pdVar7 = pdVar7 + -3;
          if (cVar33 == '\0') {
            dVar18 = (double)CONCAT44(-(float)((ulonglong)dVar18 >> 0x20),SUB84(dVar18,0));
          }
          else {
            dVar18 = -dVar18;
          }
          if (cVar34 == '\0') {
            pdVar10 = (double *)((int)ar7 + 0x14);
            *(undefined4 *)pdVar10 = uVar27;
          }
          else {
            pdVar10 = ar7 + 2;
            *pdVar10 = dVar31;
          }
          if (cVar33 == '\0') {
            dVar18 = (double)CONCAT44((float)((ulonglong)dVar18 >> 0x20) + fVar28,SUB84(dVar18,0));
          }
          else {
            dVar18 = dVar18 + dVar21;
          }
          if (cVar34 == '\0') {
            pdVar10 = (double *)((int)pdVar10 + -4);
            *(int *)pdVar10 = (int)((ulonglong)in_dr2 >> 0x20);
          }
          else {
            pdVar10 = pdVar10 + -1;
            *pdVar10 = in_dr2;
          }
          if (cVar33 == '\0') {
            bVar32 = (float)((ulonglong)dVar18 >> 0x20) < fVar28;
          }
          else {
            bVar32 = dVar18 < dVar21;
          }
          if (cVar34 == '\0') {
            pdVar10 = (double *)((int)pdVar10 + -4);
            *(int *)pdVar10 = (int)((ulonglong)in_dr0 >> 0x20);
          }
          else {
            pdVar10 = pdVar10 + -1;
            *pdVar10 = in_dr0;
          }
          dVar22 = dVar18;
          if ((bVar32) && (dVar22 = dVar21, cVar34 == '\0')) {
            dVar22 = (double)CONCAT44(fVar28,SUB84(dVar18,0));
          }
          uVar26 = (undefined4)((ulonglong)dVar22 >> 0x20);
          in_dr6 = (double)CONCAT44(uVar26,-SUB84(dVar22,0));
          *(undefined4 *)pdVar10 = 0xe0000000;
          if (cVar34 == '\0') {
            *(undefined4 *)(pdVar10 + 3) = uVar26;
          }
          else {
            pdVar10[3] = in_dr6;
          }
          ar7 = pdVar10 + 4;
        }
        else {
          if (iVar13 != 0) {
            if (cVar34 == '\0') {
              dVar18 = (double)CONCAT44(*(undefined4 *)pdVar7,SUB84(dVar18,0));
              dVar20 = (double)CONCAT44(*(undefined4 *)(pdVar10 + -1),0x3f800000);
              dVar22 = (double)CONCAT44(*(undefined4 *)((int)pdVar10 + -4),fVar24);
            }
            else {
              dVar18 = *pdVar7;
              dVar20 = *(double *)((int)pdVar10 + -4);
              dVar22 = *(double *)((int)pdVar10 + 4);
              pdVar10 = (double *)((int)pdVar10 + 0xc);
            }
            pdVar7 = pdVar10 + -3;
            if (cVar33 == '\0') {
              dVar22 = (double)CONCAT44(-(float)((ulonglong)dVar22 >> 0x20),SUB84(dVar22,0));
            }
            else {
              dVar22 = -dVar22;
            }
            if (cVar34 == '\0') {
              pdVar10 = (double *)((int)ar7 + 0x14);
              *(undefined4 *)pdVar10 = uVar27;
            }
            else {
              pdVar10 = ar7 + 2;
              *pdVar10 = dVar31;
            }
            if (cVar33 == '\0') {
              dVar22 = (double)CONCAT44((float)((ulonglong)dVar22 >> 0x20) + fVar28,SUB84(dVar22,0))
              ;
            }
            else {
              dVar22 = dVar22 + dVar21;
            }
            if (cVar34 == '\0') {
              pdVar10 = (double *)((int)pdVar10 + -4);
              *(int *)pdVar10 = (int)((ulonglong)dVar20 >> 0x20);
            }
            else {
              pdVar10 = pdVar10 + -1;
              *pdVar10 = dVar20;
            }
            if (cVar33 == '\0') {
              bVar32 = (float)((ulonglong)dVar22 >> 0x20) < fVar28;
            }
            else {
              bVar32 = dVar22 < dVar21;
            }
            if (cVar34 == '\0') {
              pdVar10 = (double *)((int)pdVar10 + -4);
              *(int *)pdVar10 = (int)((ulonglong)dVar18 >> 0x20);
            }
            else {
              pdVar10 = pdVar10 + -1;
              *pdVar10 = dVar18;
            }
            dVar23 = dVar22;
            if ((bVar32) && (dVar23 = dVar21, cVar34 == '\0')) {
              dVar23 = (double)CONCAT44(fVar28,SUB84(dVar22,0));
            }
            uVar25 = (undefined4)((ulonglong)dVar23 >> 0x20);
            in_dr6 = (double)CONCAT44(uVar25,-SUB84(dVar23,0));
            iVar2 = iVar2 + iVar13 + 1;
            *(undefined4 *)pdVar10 = 0xf0000000;
            iVar13 = 0;
            if (cVar34 == '\0') {
              *(undefined4 *)(pdVar10 + 3) = uVar25;
            }
            else {
              pdVar10[3] = in_dr6;
            }
            ar7 = pdVar10 + 4;
          }
          if (iVar12 == 0) {
            if (cVar34 == '\0') {
              dVar18 = (double)CONCAT44(*(undefined4 *)ar4_00,SUB84(dVar18,0));
              dVar20 = (double)CONCAT44(*(undefined4 *)(iVar8 + -8),SUB84(dVar20,0));
              dVar22 = (double)CONCAT44(*(undefined4 *)(iVar8 + -4),SUB84(in_dr6,0));
              pdVar10 = (double *)((int)ar7 + 0x14);
              *(undefined4 *)pdVar10 = uVar26;
            }
            else {
              dVar18 = *ar4_00;
              dVar20 = *(double *)(iVar8 + -4);
              dVar22 = *(double *)(iVar8 + 4);
              pdVar10 = ar7 + 2;
              *pdVar10 = dVar30;
            }
            iVar12 = 1;
            if (cVar33 == '\0') {
              dVar22 = (double)CONCAT44((float)((ulonglong)dVar22 >> 0x20) + fVar28,SUB84(dVar22,0))
              ;
            }
            else {
              dVar22 = dVar22 + dVar21;
            }
            if (cVar34 == '\0') {
              pdVar10 = (double *)((int)pdVar10 + -4);
              *(int *)pdVar10 = (int)((ulonglong)dVar20 >> 0x20);
            }
            else {
              pdVar10 = pdVar10 + -1;
              *pdVar10 = dVar20;
            }
            if (cVar33 == '\0') {
              bVar32 = (float)((ulonglong)dVar22 >> 0x20) < fVar28;
            }
            else {
              bVar32 = dVar22 < dVar21;
            }
            if (cVar34 == '\0') {
              pdVar10 = (double *)((int)pdVar10 + -4);
              *(int *)pdVar10 = (int)((ulonglong)dVar18 >> 0x20);
            }
            else {
              pdVar10 = pdVar10 + -1;
              *pdVar10 = dVar18;
            }
            in_dr6 = dVar22;
            if ((bVar32) && (in_dr6 = dVar21, cVar34 == '\0')) {
              in_dr6 = (double)CONCAT44(fVar28,SUB84(dVar22,0));
            }
            *(undefined4 *)pdVar10 = 0xe0000000;
            if (cVar34 == '\0') {
              *(int *)(pdVar10 + 3) = (int)((ulonglong)in_dr6 >> 0x20);
            }
            else {
              pdVar10[3] = in_dr6;
            }
            ar7 = pdVar10 + 4;
          }
          if (cVar34 == '\0') {
            in_dr0 = (double)CONCAT44(*(undefined4 *)pdVar7,SUB84(dVar18,0));
            in_dr2 = (double)CONCAT44(*(undefined4 *)((int)pdVar7 + 4),SUB84(dVar20,0));
            dVar18 = (double)CONCAT44(*(undefined4 *)(pdVar7 + 1),SUB84(in_dr6,0));
            pdVar7 = (double *)((int)pdVar7 + 0xc);
          }
          else {
            in_dr0 = *pdVar7;
            in_dr2 = pdVar7[1];
            dVar18 = pdVar7[2];
            pdVar7 = pdVar7 + 3;
          }
          iVar12 = iVar12 + 1;
          pdVar7 = pdVar7 + -3;
          if (cVar34 == '\0') {
            pdVar10 = (double *)((int)ar7 + 0x14);
            *(undefined4 *)pdVar10 = uVar27;
          }
          else {
            pdVar10 = ar7 + 2;
            *pdVar10 = dVar31;
          }
          if (cVar33 == '\0') {
            dVar18 = (double)CONCAT44((float)((ulonglong)dVar18 >> 0x20) + fVar28,SUB84(dVar18,0));
          }
          else {
            dVar18 = dVar18 + dVar21;
          }
          if (cVar34 == '\0') {
            pdVar10 = (double *)((int)pdVar10 + -4);
            *(int *)pdVar10 = (int)((ulonglong)in_dr2 >> 0x20);
          }
          else {
            pdVar10 = pdVar10 + -1;
            *pdVar10 = in_dr2;
          }
          if (cVar33 == '\0') {
            bVar32 = (float)((ulonglong)dVar18 >> 0x20) < fVar28;
          }
          else {
            bVar32 = dVar18 < dVar21;
          }
          if (cVar34 == '\0') {
            pdVar10 = (double *)((int)pdVar10 + -4);
            *(int *)pdVar10 = (int)((ulonglong)in_dr0 >> 0x20);
          }
          else {
            pdVar10 = pdVar10 + -1;
            *pdVar10 = in_dr0;
          }
          in_dr6 = dVar18;
          if ((bVar32) && (in_dr6 = dVar21, cVar34 == '\0')) {
            in_dr6 = (double)CONCAT44(fVar28,SUB84(dVar18,0));
          }
          *(undefined4 *)pdVar10 = 0xe0000000;
          if (cVar34 == '\0') {
            *(int *)(pdVar10 + 3) = (int)((ulonglong)in_dr6 >> 0x20);
          }
          else {
            pdVar10[3] = in_dr6;
          }
          ar7 = pdVar10 + 4;
        }
      }
LAB_8c2318f0:
      fVar28 = SUB84(dVar21,0);
      if (cVar33 == '\0') {
        dVar19 = (double)CONCAT44((float)((ulonglong)dVar19 >> 0x20) * fVar28,SUB84(dVar19,0));
      }
      else {
        dVar19 = dVar19 * dVar21;
      }
      ar4 = (short *)((int)psVar4 + iVar5);
      if (cVar33 == '\0') {
        dVar18 = (double)CONCAT44((float)((ulonglong)dVar19 >> 0x20) + fVar28,
                                  SUB84(dVar19,0) * fVar28);
      }
      else {
        dVar18 = dVar19 * dVar21 + dVar21;
      }
      iVar6 = iVar6 + -1;
      if (cVar33 == '\0') {
        in_dr14 = (double)CONCAT44((int)((ulonglong)dVar18 >> 0x20),SUB84(dVar18,0) + fVar28);
      }
      else {
        in_dr14 = dVar18 + dVar21;
      }
      in_dr10 = dVar31;
      if (cVar34 == '\0') {
        in_dr10 = (double)CONCAT44((int)((ulonglong)dVar31 >> 0x20),SUB84(dVar30,0));
      }
      fVar28 = -SUB84(dVar29,0);
      uVar26 = (undefined4)((ulonglong)in_dr14 >> 0x20);
      in_dr12 = in_dr14;
      if (cVar34 == '\0') {
        in_dr12 = (double)CONCAT44(uVar26,SUB84(dVar31,0));
      }
      dVar30 = in_dr10;
      dVar31 = in_dr12;
    } while (iVar6 != 0);
    fVar28 = (float)((ulonglong)dVar21 >> 0x20);
    if (iVar12 == 0) {
      if (iVar13 != 0) {
        if (cVar34 == '\0') {
          in_dr0 = (double)CONCAT44(*(undefined4 *)pdVar9,SUB84(in_dr0,0));
          pdVar7 = (double *)(iVar11 + -8);
        }
        else {
          in_dr0 = *pdVar9;
          pdVar7 = (double *)(iVar11 + -4);
        }
        if (cVar34 == '\0') {
          in_dr2 = (double)CONCAT44(*(undefined4 *)pdVar7,SUB84(in_dr2,0));
          dVar30 = (double)CONCAT44(*(undefined4 *)((int)pdVar7 + 4),SUB84(in_dr6,0));
        }
        else {
          in_dr2 = *pdVar7;
          dVar30 = pdVar7[1];
        }
        if (cVar33 == '\0') {
          dVar30 = (double)CONCAT44(-(float)((ulonglong)dVar30 >> 0x20),SUB84(dVar30,0));
        }
        else {
          dVar30 = -dVar30;
        }
        if (cVar34 == '\0') {
          pdVar7 = (double *)((int)ar7 + 0x14);
          *(undefined4 *)pdVar7 = uVar26;
        }
        else {
          pdVar7 = ar7 + 2;
          *pdVar7 = in_dr14;
        }
        if (cVar33 == '\0') {
          dVar30 = (double)CONCAT44((float)((ulonglong)dVar30 >> 0x20) + fVar28,SUB84(dVar30,0));
        }
        else {
          dVar30 = dVar30 + dVar21;
        }
        if (cVar34 == '\0') {
          pdVar7 = (double *)((int)pdVar7 + -4);
          *(int *)pdVar7 = (int)((ulonglong)in_dr2 >> 0x20);
        }
        else {
          pdVar7 = pdVar7 + -1;
          *pdVar7 = in_dr2;
        }
        if (cVar33 == '\0') {
          bVar32 = (float)((ulonglong)dVar30 >> 0x20) < fVar28;
        }
        else {
          bVar32 = dVar30 < dVar21;
        }
        if (cVar34 == '\0') {
          pdVar7 = (double *)((int)pdVar7 + -4);
          *(int *)pdVar7 = (int)((ulonglong)in_dr0 >> 0x20);
        }
        else {
          pdVar7 = pdVar7 + -1;
          *pdVar7 = in_dr0;
        }
        dVar31 = dVar30;
        if ((bVar32) && (dVar31 = dVar21, cVar34 == '\0')) {
          dVar31 = (double)CONCAT44(fVar28,SUB84(dVar30,0));
        }
        uVar26 = (undefined4)((ulonglong)dVar31 >> 0x20);
        in_dr6 = (double)CONCAT44(uVar26,-SUB84(dVar31,0));
        iVar2 = iVar2 + iVar13 + 1;
        *(undefined4 *)pdVar7 = 0xf0000000;
        if (cVar34 == '\0') {
          *(undefined4 *)(pdVar7 + 3) = uVar26;
        }
        else {
          pdVar7[3] = in_dr6;
        }
        ar7 = pdVar7 + 4;
      }
    }
    else {
      if (cVar34 == '\0') {
        in_dr0 = (double)CONCAT44(*(undefined4 *)pdVar9,SUB84(in_dr0,0));
        pdVar7 = (double *)(iVar11 + -8);
      }
      else {
        in_dr0 = *pdVar9;
        pdVar7 = (double *)(iVar11 + -4);
      }
      if (cVar34 == '\0') {
        in_dr2 = (double)CONCAT44(*(undefined4 *)pdVar7,SUB84(in_dr2,0));
        dVar30 = (double)CONCAT44(*(undefined4 *)((int)pdVar7 + 4),SUB84(in_dr6,0));
        pdVar7 = (double *)((int)ar7 + 0x14);
        *(undefined4 *)pdVar7 = uVar26;
      }
      else {
        in_dr2 = *pdVar7;
        dVar30 = pdVar7[1];
        pdVar7 = ar7 + 2;
        *pdVar7 = in_dr14;
      }
      if (cVar33 == '\0') {
        dVar30 = (double)CONCAT44((float)((ulonglong)dVar30 >> 0x20) + fVar28,SUB84(dVar30,0));
      }
      else {
        dVar30 = dVar30 + dVar21;
      }
      if (cVar34 == '\0') {
        pdVar7 = (double *)((int)pdVar7 + -4);
        *(int *)pdVar7 = (int)((ulonglong)in_dr2 >> 0x20);
      }
      else {
        pdVar7 = pdVar7 + -1;
        *pdVar7 = in_dr2;
      }
      if (cVar33 == '\0') {
        bVar32 = (float)((ulonglong)dVar30 >> 0x20) < fVar28;
      }
      else {
        bVar32 = dVar30 < dVar21;
      }
      if (cVar34 == '\0') {
        pdVar7 = (double *)((int)pdVar7 + -4);
        *(int *)pdVar7 = (int)((ulonglong)in_dr0 >> 0x20);
      }
      else {
        pdVar7 = pdVar7 + -1;
        *pdVar7 = in_dr0;
      }
      in_dr6 = dVar30;
      if ((bVar32) && (in_dr6 = dVar21, cVar34 == '\0')) {
        in_dr6 = (double)CONCAT44(fVar28,SUB84(dVar30,0));
      }
      iVar2 = iVar2 + iVar12 + 1;
      *(undefined4 *)pdVar7 = 0xf0000000;
      if (cVar34 == '\0') {
        *(int *)(pdVar7 + 3) = (int)((ulonglong)in_dr6 >> 0x20);
      }
      else {
        pdVar7[3] = in_dr6;
      }
      ar7 = pdVar7 + 4;
    }
    uVar1 = uVar1 - 1;
    if (uVar1 == 0) {
      _DAT_8c4aa520 = _DAT_8c4aa520 + iVar2;
      _DAT_8c4aa51c = _DAT_8c4aa51c + iVar3;
      return ar7;
    }
  } while( true );
}

__asm__(".globl _FUN_8c231624\n.set _FUN_8c231624, _FUN_8c231624_def\n");
