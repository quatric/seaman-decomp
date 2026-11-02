#include "../decls.h"
double * FUN_8c230f70_def(short *ar4,int ar5,uint ar6,double *ar7)

{
  uint uVar1;
  double *pdVar2;
  short *psVar3;
  double *pdVar4;
  double *pdVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  double *pdVar10;
  int iVar11;
  double *pdVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  uint *puVar16;
  uint *puVar17;
  uint *puVar19;
  double in_dr0;
  float fVar20;
  float fVar21;
  double in_dr2;
  float fVar25;
  double dVar22;
  ulonglong uVar23;
  float fVar26;
  double dVar24;
  float fVar27;
  double in_dr4;
  uint uVar30;
  double dVar28;
  double dVar29;
  double in_dr6;
  undefined8 uVar31;
  double dVar32;
  undefined4 uVar34;
  double dVar33;
  undefined4 uVar36;
  ulonglong in_dr8;
  double dVar37;
  double in_dr10;
  undefined4 uVar39;
  double dVar38;
  double in_dr12;
  double in_dr14;
  double in_xd2;
  double in_xd4;
  double dVar40;
  double in_xd6;
  double in_xd8;
  undefined8 in_xd10;
  double in_xd12;
  double in_xd14;
  bool bVar41;
  undefined4 in_PR;
  char cVar42;
  char cVar43;
  double *pdStack_58;
  short *psStack_50;
  uint uStack_44;
  undefined4 uStack_40;
  uint uStack_3c;
  int iStack_38;
  uint uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  double *pdVar18;
  undefined4 uVar35;
  
  cVar43 = '\0';
  cVar42 = '\0';
  uStack_20 = SUB84(in_dr14,0);
  uVar36 = (undefined4)((ulonglong)in_dr14 >> 0x20);
  uStack_28 = SUB84(in_dr12,0);
  uVar35 = (undefined4)((ulonglong)in_dr12 >> 0x20);
  uVar30 = (uint)((ulonglong)in_dr4 >> 0x20);
  if ((_DAT_8c4aa4f0 & 0x20000) == 0) {
    uStack_24 = uStack_28;
    uStack_28 = uVar36;
    uStack_2c = SUB84(in_dr14,0);
    puVar19 = &uStack_34;
    uStack_34 = _DAT_8c4aa4f0;
    uVar1 = ar6 & 0x3fff;
    iVar14 = 0;
    iVar15 = 0;
    iVar9 = (ar6 >> 0xe & 3) << 1;
    dVar22 = (double)CONCAT44(uVar30,0x3f000000);
    uStack_20 = uVar35;
    do {
      iVar7 = (int)*ar4;
      fVar25 = 1.0;
      if ((*puVar19 & 0x80000000) != 0) {
        fVar25 = -1.0;
      }
      pdVar2 = (double *)(ar4[1] * 0x20 + ar5);
      if (iVar7 < 0) {
        iVar7 = -iVar7;
        fVar25 = -fVar25;
      }
      iVar15 = iVar15 + iVar7;
      iVar7 = iVar7 + -2;
      iVar13 = 0;
      iVar6 = 0;
      pdVar12 = (double *)(ar4[4] * 0x20 + ar5);
      if (cVar43 == '\0') {
        dVar38 = (double)CONCAT44(*(undefined4 *)(pdVar2 + 3),SUB84(in_dr10,0));
      }
      else {
        dVar38 = pdVar2[3];
      }
      fVar20 = SUB84(dVar22,0);
      if (cVar42 == '\0') {
        dVar38 = (double)CONCAT44((float)((ulonglong)dVar38 >> 0x20) * fVar20 + fVar20,
                                  SUB84(dVar38,0) * fVar20 + fVar20);
      }
      else {
        dVar38 = dVar38 * dVar22 * dVar22 + dVar22 + dVar22;
      }
      ar4 = ar4 + 7;
      if (cVar43 == '\0') {
        dVar32 = (double)CONCAT44(*(undefined4 *)(pdVar12 + 3),SUB84(in_dr12,0));
      }
      else {
        dVar32 = pdVar12[3];
      }
      if (cVar42 == '\0') {
        dVar32 = (double)CONCAT44((float)((ulonglong)dVar32 >> 0x20) * fVar20 + fVar20,
                                  SUB84(dVar32,0) * fVar20 + fVar20);
      }
      else {
        dVar32 = dVar32 * dVar22 * dVar22 + dVar22 + dVar22;
      }
      do {
        if (cVar43 == '\0') {
          dVar40 = (double)CONCAT44(*(undefined4 *)((int)pdVar2 + 4),SUB84(in_dr0,0));
          dVar29 = (double)CONCAT44(*(undefined4 *)(pdVar2 + 1),SUB84(in_dr6,0));
          iVar8 = (int)pdVar2 + 0xc;
        }
        else {
          dVar40 = *(double *)((int)pdVar2 + 4);
          dVar29 = *(double *)((int)pdVar2 + 0xc);
          iVar8 = (int)pdVar2 + 0x14;
        }
        if (cVar43 == '\0') {
          dVar40 = (double)CONCAT44((int)((ulonglong)dVar40 >> 0x20),
                                    *(undefined4 *)((int)pdVar12 + 4));
          pdVar12 = pdVar12 + 1;
        }
        else {
          pdVar12 = (double *)((int)pdVar12 + 0xc);
        }
        iVar11 = *ar4 * 0x20 + ar5;
        if (cVar43 == '\0') {
          dVar29 = (double)CONCAT44((int)((ulonglong)dVar29 >> 0x20),*(undefined4 *)pdVar12);
          pdVar10 = (double *)((int)pdVar12 + 4);
        }
        else {
          pdVar10 = pdVar12 + 1;
        }
        pdVar4 = (double *)(iVar8 + -0xc);
        if (cVar42 == '\0') {
          dVar40 = (double)CONCAT44((float)((ulonglong)dVar40 >> 0x20) - SUB84(dVar40,0),
                                    SUB84(dVar40,0));
          dVar29 = (double)CONCAT44((float)((ulonglong)dVar29 >> 0x20) - SUB84(dVar29,0),
                                    SUB84(dVar29,0));
        }
        else {
          dVar40 = dVar40 - dVar40;
          dVar29 = dVar29 - dVar29;
        }
        pdVar2 = (double *)((int)pdVar10 + -0xc);
        if (cVar43 == '\0') {
          dVar28 = (double)CONCAT44(*(undefined4 *)(iVar11 + 4),SUB84(in_dr2,0));
          dVar37 = (double)CONCAT44(*(undefined4 *)(iVar11 + 8),fVar25);
          iVar11 = iVar11 + 0xc;
        }
        else {
          dVar28 = *(double *)(iVar11 + 4);
          dVar37 = *(double *)(iVar11 + 0xc);
          iVar11 = iVar11 + 0x14;
        }
        if (cVar42 == '\0') {
          fVar25 = (float)((ulonglong)dVar28 >> 0x20) - SUB84(dVar40,0);
        }
        else {
          fVar25 = (float)((ulonglong)(dVar28 - dVar40) >> 0x20);
        }
        psVar3 = ar4 + 3;
        if (cVar43 == '\0') {
          dVar28 = (double)CONCAT44(*(undefined4 *)(iVar11 + 0xc),SUB84(in_dr14,0));
        }
        else {
          dVar28 = *(double *)(iVar11 + 0xc);
        }
        pdVar12 = (double *)(iVar11 + -0xc);
        if (cVar42 == '\0') {
          dVar37 = (double)CONCAT44((float)((ulonglong)dVar37 >> 0x20) - SUB84(dVar29,0),
                                    SUB84(dVar37,0));
        }
        else {
          dVar37 = dVar37 - dVar29;
        }
        dVar24 = (double)CONCAT44(fVar25,0x3f800000);
        if (cVar42 == '\0') {
          dVar37 = (double)CONCAT44((float)((ulonglong)dVar37 >> 0x20) *
                                    (float)((ulonglong)dVar40 >> 0x20),SUB84(dVar37,0));
        }
        else {
          dVar37 = dVar37 * dVar40;
        }
        if (cVar43 == '\0') {
          dVar40 = (double)CONCAT44(*(undefined4 *)pdVar4,SUB84(dVar40,0));
        }
        else {
          dVar40 = *pdVar4;
        }
        if (cVar42 == '\0') {
          in_dr6 = (double)CONCAT44((float)((ulonglong)dVar29 >> 0x20) * fVar25,SUB84(dVar29,0));
          bVar41 = (float)((ulonglong)dVar40 >> 0x20) < 1.0;
        }
        else {
          in_dr6 = dVar29 * dVar24;
          bVar41 = dVar40 < dVar24;
        }
        if (cVar43 == '\0') {
          dVar40 = (double)CONCAT44(*(undefined4 *)pdVar2,SUB84(dVar40,0));
        }
        else {
          dVar40 = *pdVar2;
        }
        fVar25 = (float)((ulonglong)dVar22 >> 0x20);
        uVar36 = (undefined4)((ulonglong)dVar32 >> 0x20);
        uVar35 = (undefined4)((ulonglong)dVar38 >> 0x20);
        if (bVar41) {
LAB_8c23179c:
          if (iVar6 == 0) {
            if (iVar13 != 0) {
              if (cVar43 == '\0') {
                dVar40 = (double)CONCAT44(*(undefined4 *)pdVar2,SUB84(dVar40,0));
                dVar24 = (double)CONCAT44(*(undefined4 *)(pdVar10 + -1),0x3f800000);
                dVar29 = (double)CONCAT44(*(undefined4 *)((int)pdVar10 + -4),SUB84(in_dr6,0));
              }
              else {
                dVar40 = *pdVar2;
                dVar24 = *(double *)((int)pdVar10 + -4);
                dVar29 = *(double *)((int)pdVar10 + 4);
                pdVar10 = (double *)((int)pdVar10 + 0xc);
              }
              pdVar2 = pdVar10 + -3;
              if (cVar43 == '\0') {
                pdVar10 = (double *)((int)ar7 + 0x14);
                *(undefined4 *)pdVar10 = uVar36;
              }
              else {
                pdVar10 = ar7 + 2;
                *pdVar10 = dVar32;
              }
              if (cVar42 == '\0') {
                dVar29 = (double)CONCAT44((float)((ulonglong)dVar29 >> 0x20) + fVar25,
                                          SUB84(dVar29,0));
              }
              else {
                dVar29 = dVar29 + dVar22;
              }
              if (cVar43 == '\0') {
                pdVar10 = (double *)((int)pdVar10 + -4);
                *(int *)pdVar10 = (int)((ulonglong)dVar24 >> 0x20);
              }
              else {
                pdVar10 = pdVar10 + -1;
                *pdVar10 = dVar24;
              }
              if (cVar42 == '\0') {
                bVar41 = (float)((ulonglong)dVar29 >> 0x20) < fVar25;
              }
              else {
                bVar41 = dVar29 < dVar22;
              }
              if (cVar43 == '\0') {
                pdVar10 = (double *)((int)pdVar10 + -4);
                *(int *)pdVar10 = (int)((ulonglong)dVar40 >> 0x20);
              }
              else {
                pdVar10 = pdVar10 + -1;
                *pdVar10 = dVar40;
              }
              in_dr6 = dVar29;
              if ((bVar41) && (in_dr6 = dVar22, cVar43 == '\0')) {
                in_dr6 = (double)CONCAT44(fVar25,SUB84(dVar29,0));
              }
              iVar14 = iVar14 + iVar13 + 1;
              *(undefined4 *)pdVar10 = 0xf0000000;
              iVar13 = 0;
              if (cVar43 == '\0') {
                *(int *)(pdVar10 + 3) = (int)((ulonglong)in_dr6 >> 0x20);
              }
              else {
                pdVar10[3] = in_dr6;
              }
              ar7 = pdVar10 + 4;
            }
          }
          else {
            if (cVar43 == '\0') {
              dVar40 = (double)CONCAT44(*(undefined4 *)pdVar2,SUB84(dVar40,0));
              dVar24 = (double)CONCAT44(*(undefined4 *)(pdVar10 + -1),0x3f800000);
              dVar29 = (double)CONCAT44(*(undefined4 *)((int)pdVar10 + -4),SUB84(in_dr6,0));
            }
            else {
              dVar40 = *pdVar2;
              dVar24 = *(double *)((int)pdVar10 + -4);
              dVar29 = *(double *)((int)pdVar10 + 4);
              pdVar10 = (double *)((int)pdVar10 + 0xc);
            }
            pdVar2 = pdVar10 + -3;
            if (cVar42 == '\0') {
              dVar29 = (double)CONCAT44(-(float)((ulonglong)dVar29 >> 0x20),SUB84(dVar29,0));
            }
            else {
              dVar29 = -dVar29;
            }
            if (cVar43 == '\0') {
              pdVar10 = (double *)((int)ar7 + 0x14);
              *(undefined4 *)pdVar10 = uVar36;
            }
            else {
              pdVar10 = ar7 + 2;
              *pdVar10 = dVar32;
            }
            if (cVar42 == '\0') {
              dVar29 = (double)CONCAT44((float)((ulonglong)dVar29 >> 0x20) + fVar25,SUB84(dVar29,0))
              ;
            }
            else {
              dVar29 = dVar29 + dVar22;
            }
            if (cVar43 == '\0') {
              pdVar10 = (double *)((int)pdVar10 + -4);
              *(int *)pdVar10 = (int)((ulonglong)dVar24 >> 0x20);
            }
            else {
              pdVar10 = pdVar10 + -1;
              *pdVar10 = dVar24;
            }
            if (cVar42 == '\0') {
              bVar41 = (float)((ulonglong)dVar29 >> 0x20) < fVar25;
            }
            else {
              bVar41 = dVar29 < dVar22;
            }
            if (cVar43 == '\0') {
              pdVar10 = (double *)((int)pdVar10 + -4);
              *(int *)pdVar10 = (int)((ulonglong)dVar40 >> 0x20);
            }
            else {
              pdVar10 = pdVar10 + -1;
              *pdVar10 = dVar40;
            }
            dVar33 = dVar29;
            if ((bVar41) && (dVar33 = dVar22, cVar43 == '\0')) {
              dVar33 = (double)CONCAT44(fVar25,SUB84(dVar29,0));
            }
            uVar36 = (undefined4)((ulonglong)dVar33 >> 0x20);
            in_dr6 = (double)CONCAT44(uVar36,-SUB84(dVar33,0));
            iVar14 = iVar14 + iVar6 + 1;
            *(undefined4 *)pdVar10 = 0xf0000000;
            iVar6 = 0;
            if (cVar43 == '\0') {
              *(undefined4 *)(pdVar10 + 3) = uVar36;
            }
            else {
              pdVar10[3] = in_dr6;
            }
            ar7 = pdVar10 + 4;
          }
          if (cVar43 == '\0') {
            dVar40 = (double)CONCAT44(*(undefined4 *)pdVar4,SUB84(dVar40,0));
          }
          else {
            dVar40 = *pdVar4;
          }
          in_dr2 = (double)CONCAT44(0x3f800000,SUB84(dVar24,0));
          if (cVar42 == '\0') {
            bVar41 = 1.0 < (float)((ulonglong)dVar40 >> 0x20);
          }
          else {
            bVar41 = in_dr2 < dVar40;
          }
          if (cVar43 == '\0') {
            in_dr0 = (double)CONCAT44(*(undefined4 *)pdVar2,SUB84(dVar40,0));
          }
          else {
            in_dr0 = *pdVar2;
          }
          if (!bVar41) {
            if (cVar42 == '\0') {
              bVar41 = 1.0 < (float)((ulonglong)in_dr0 >> 0x20);
            }
            else {
              bVar41 = in_dr2 < in_dr0;
            }
            if (cVar43 == '\0') {
              in_dr0 = (double)CONCAT44(*(undefined4 *)pdVar12,SUB84(in_dr0,0));
            }
            else {
              in_dr0 = *pdVar12;
            }
            if (!bVar41) {
              if (cVar42 == '\0') {
                bVar41 = (float)((ulonglong)in_dr0 >> 0x20) < 1.0;
              }
              else {
                bVar41 = in_dr0 < in_dr2;
              }
              if (bVar41) goto LAB_8c2318f0;
            }
          }
          *(uint *)((int)puVar19 + -4) = uVar1;
          *(int *)((int)puVar19 + -8) = iVar14;
          *(int *)((int)puVar19 + -0xc) = iVar15;
          *(short **)((int)puVar19 + -0x10) = psVar3;
          *(int *)((int)puVar19 + -0x14) = ar5;
          *(int *)((int)puVar19 + -0x18) = iVar9;
          if (cVar43 == '\0') {
            *(float *)((int)puVar19 + -0x1c) = fVar25;
            *(int *)((int)puVar19 + -0x20) = SUB84(dVar22,0);
            *(float *)((int)puVar19 + -0x24) = SUB84(dVar37,0);
            *(undefined4 *)((int)puVar19 + -0x28) = uVar35;
            puVar16 = (uint *)((int)puVar19 + -0x2c);
            *(int *)((int)puVar19 + -0x2c) = SUB84(dVar38,0);
          }
          else {
            *(double *)((int)puVar19 + -0x20) = dVar22;
            *(double *)((int)puVar19 + -0x28) = in_xd4;
            *(double *)((int)puVar19 + -0x30) = in_xd8;
            *(double *)((int)puVar19 + -0x38) = dVar38;
            puVar16 = (uint *)((int)puVar19 + -0x40);
            *(undefined8 *)((int)puVar19 + -0x40) = in_xd10;
            in_xd4 = in_xd8;
          }
          ar7 = (double *)FUN_8c2319cc(pdVar4,pdVar2,pdVar12,ar7);
          if (cVar43 == '\0') {
            dVar38 = (double)(ulonglong)*puVar16;
            dVar37 = (double)(ulonglong)puVar16[2];
            pdVar18 = (double *)(puVar16 + 3);
            puVar17 = puVar16 + 5;
          }
          else {
            in_xd10 = *(undefined8 *)puVar16;
            dVar38 = *(double *)(puVar16 + 2);
            in_xd8 = *(double *)(puVar16 + 4);
            in_xd4 = *(double *)(puVar16 + 6);
            pdVar18 = (double *)(puVar16 + 8);
            puVar17 = puVar16 + 10;
          }
          dVar22 = *pdVar18;
          iVar9 = *puVar17;
          ar5 = puVar17[1];
          psVar3 = (short *)puVar17[2];
          iVar15 = puVar17[3];
          iVar14 = puVar17[4];
          uVar1 = puVar17[5];
          puVar19 = puVar17 + 6;
          if (cVar42 == '\0') {
            puVar19 = puVar17 + 6;
          }
        }
        else {
          if (cVar42 == '\0') {
            bVar41 = (float)((ulonglong)dVar40 >> 0x20) < 1.0;
          }
          else {
            bVar41 = dVar40 < dVar24;
          }
          if (cVar43 == '\0') {
            dVar40 = (double)CONCAT44(*(undefined4 *)pdVar12,SUB84(dVar40,0));
          }
          else {
            dVar40 = *pdVar12;
          }
          if (bVar41) goto LAB_8c23179c;
          if (cVar42 == '\0') {
            bVar41 = (float)((ulonglong)dVar40 >> 0x20) < 1.0;
            fVar20 = (float)((ulonglong)in_dr6 >> 0x20) - (float)((ulonglong)dVar37 >> 0x20);
          }
          else {
            bVar41 = dVar40 < dVar24;
            fVar20 = (float)((ulonglong)(in_dr6 - dVar37) >> 0x20);
          }
          if (cVar42 == '\0') {
            in_dr6 = (double)((ulonglong)(uint)(fVar20 * SUB84(dVar37,0)) << 0x20);
          }
          else {
            in_dr6 = (double)((ulonglong)(uint)fVar20 << 0x20) * dVar37;
          }
          if (bVar41) goto LAB_8c23179c;
          fVar20 = SUB84(in_dr6,0);
          if (cVar42 != '\0' || fVar20 <= (float)((ulonglong)in_dr6 >> 0x20)) {
            if (iVar13 != 0) {
              if (cVar43 == '\0') {
                dVar40 = (double)CONCAT44(*(undefined4 *)pdVar2,SUB84(dVar40,0));
                dVar24 = (double)CONCAT44(*(undefined4 *)(pdVar10 + -1),0x3f800000);
                dVar29 = (double)CONCAT44(*(undefined4 *)((int)pdVar10 + -4),fVar20);
              }
              else {
                dVar40 = *pdVar2;
                dVar24 = *(double *)((int)pdVar10 + -4);
                dVar29 = *(double *)((int)pdVar10 + 4);
                pdVar10 = (double *)((int)pdVar10 + 0xc);
              }
              pdVar2 = pdVar10 + -3;
              if (cVar43 == '\0') {
                pdVar10 = (double *)((int)ar7 + 0x14);
                *(undefined4 *)pdVar10 = uVar36;
              }
              else {
                pdVar10 = ar7 + 2;
                *pdVar10 = dVar32;
              }
              if (cVar42 == '\0') {
                dVar29 = (double)CONCAT44((float)((ulonglong)dVar29 >> 0x20) + fVar25,
                                          SUB84(dVar29,0));
              }
              else {
                dVar29 = dVar29 + dVar22;
              }
              if (cVar43 == '\0') {
                pdVar10 = (double *)((int)pdVar10 + -4);
                *(int *)pdVar10 = (int)((ulonglong)dVar24 >> 0x20);
              }
              else {
                pdVar10 = pdVar10 + -1;
                *pdVar10 = dVar24;
              }
              if (cVar42 == '\0') {
                bVar41 = (float)((ulonglong)dVar29 >> 0x20) < fVar25;
              }
              else {
                bVar41 = dVar29 < dVar22;
              }
              if (cVar43 == '\0') {
                pdVar10 = (double *)((int)pdVar10 + -4);
                *(int *)pdVar10 = (int)((ulonglong)dVar40 >> 0x20);
              }
              else {
                pdVar10 = pdVar10 + -1;
                *pdVar10 = dVar40;
              }
              in_dr6 = dVar29;
              if ((bVar41) && (in_dr6 = dVar22, cVar43 == '\0')) {
                in_dr6 = (double)CONCAT44(fVar25,SUB84(dVar29,0));
              }
              iVar14 = iVar14 + iVar13 + 1;
              *(undefined4 *)pdVar10 = 0xf0000000;
              iVar13 = 0;
              if (cVar43 == '\0') {
                *(int *)(pdVar10 + 3) = (int)((ulonglong)in_dr6 >> 0x20);
              }
              else {
                pdVar10[3] = in_dr6;
              }
              ar7 = pdVar10 + 4;
            }
            if (iVar6 == 0) {
              if (cVar43 == '\0') {
                dVar40 = (double)CONCAT44(*(undefined4 *)pdVar4,SUB84(dVar40,0));
                dVar24 = (double)CONCAT44(*(undefined4 *)(iVar8 + -8),SUB84(dVar24,0));
                dVar29 = (double)CONCAT44(*(undefined4 *)(iVar8 + -4),SUB84(in_dr6,0));
              }
              else {
                dVar40 = *pdVar4;
                dVar24 = *(double *)(iVar8 + -4);
                dVar29 = *(double *)(iVar8 + 4);
              }
              iVar6 = 1;
              if (cVar42 == '\0') {
                dVar29 = (double)CONCAT44(-(float)((ulonglong)dVar29 >> 0x20),SUB84(dVar29,0));
              }
              else {
                dVar29 = -dVar29;
              }
              if (cVar43 == '\0') {
                pdVar10 = (double *)((int)ar7 + 0x14);
                *(undefined4 *)pdVar10 = uVar35;
              }
              else {
                pdVar10 = ar7 + 2;
                *pdVar10 = dVar38;
              }
              if (cVar42 == '\0') {
                dVar29 = (double)CONCAT44((float)((ulonglong)dVar29 >> 0x20) + fVar25,
                                          SUB84(dVar29,0));
              }
              else {
                dVar29 = dVar29 + dVar22;
              }
              if (cVar43 == '\0') {
                pdVar10 = (double *)((int)pdVar10 + -4);
                *(int *)pdVar10 = (int)((ulonglong)dVar24 >> 0x20);
              }
              else {
                pdVar10 = pdVar10 + -1;
                *pdVar10 = dVar24;
              }
              if (cVar42 == '\0') {
                bVar41 = (float)((ulonglong)dVar29 >> 0x20) < fVar25;
              }
              else {
                bVar41 = dVar29 < dVar22;
              }
              if (cVar43 == '\0') {
                pdVar10 = (double *)((int)pdVar10 + -4);
                *(int *)pdVar10 = (int)((ulonglong)dVar40 >> 0x20);
              }
              else {
                pdVar10 = pdVar10 + -1;
                *pdVar10 = dVar40;
              }
              dVar33 = dVar29;
              if ((bVar41) && (dVar33 = dVar22, cVar43 == '\0')) {
                dVar33 = (double)CONCAT44(fVar25,SUB84(dVar29,0));
              }
              uVar35 = (undefined4)((ulonglong)dVar33 >> 0x20);
              in_dr6 = (double)CONCAT44(uVar35,-SUB84(dVar33,0));
              *(undefined4 *)pdVar10 = 0xe0000000;
              if (cVar43 == '\0') {
                *(undefined4 *)(pdVar10 + 3) = uVar35;
              }
              else {
                pdVar10[3] = in_dr6;
              }
              ar7 = pdVar10 + 4;
            }
            if (cVar43 == '\0') {
              in_dr0 = (double)CONCAT44(*(undefined4 *)pdVar2,SUB84(dVar40,0));
              in_dr2 = (double)CONCAT44(*(undefined4 *)((int)pdVar2 + 4),SUB84(dVar24,0));
              dVar40 = (double)CONCAT44(*(undefined4 *)(pdVar2 + 1),SUB84(in_dr6,0));
              pdVar2 = (double *)((int)pdVar2 + 0xc);
            }
            else {
              in_dr0 = *pdVar2;
              in_dr2 = pdVar2[1];
              dVar40 = pdVar2[2];
              pdVar2 = pdVar2 + 3;
            }
            iVar6 = iVar6 + 1;
            pdVar2 = pdVar2 + -3;
            if (cVar42 == '\0') {
              dVar40 = (double)CONCAT44(-(float)((ulonglong)dVar40 >> 0x20),SUB84(dVar40,0));
            }
            else {
              dVar40 = -dVar40;
            }
            if (cVar43 == '\0') {
              pdVar10 = (double *)((int)ar7 + 0x14);
              *(undefined4 *)pdVar10 = uVar36;
            }
            else {
              pdVar10 = ar7 + 2;
              *pdVar10 = dVar32;
            }
            if (cVar42 == '\0') {
              dVar40 = (double)CONCAT44((float)((ulonglong)dVar40 >> 0x20) + fVar25,SUB84(dVar40,0))
              ;
            }
            else {
              dVar40 = dVar40 + dVar22;
            }
            if (cVar43 == '\0') {
              pdVar10 = (double *)((int)pdVar10 + -4);
              *(int *)pdVar10 = (int)((ulonglong)in_dr2 >> 0x20);
            }
            else {
              pdVar10 = pdVar10 + -1;
              *pdVar10 = in_dr2;
            }
            if (cVar42 == '\0') {
              bVar41 = (float)((ulonglong)dVar40 >> 0x20) < fVar25;
            }
            else {
              bVar41 = dVar40 < dVar22;
            }
            if (cVar43 == '\0') {
              pdVar10 = (double *)((int)pdVar10 + -4);
              *(int *)pdVar10 = (int)((ulonglong)in_dr0 >> 0x20);
            }
            else {
              pdVar10 = pdVar10 + -1;
              *pdVar10 = in_dr0;
            }
            dVar29 = dVar40;
            if ((bVar41) && (dVar29 = dVar22, cVar43 == '\0')) {
              dVar29 = (double)CONCAT44(fVar25,SUB84(dVar40,0));
            }
            uVar35 = (undefined4)((ulonglong)dVar29 >> 0x20);
            in_dr6 = (double)CONCAT44(uVar35,-SUB84(dVar29,0));
            *(undefined4 *)pdVar10 = 0xe0000000;
            if (cVar43 == '\0') {
              *(undefined4 *)(pdVar10 + 3) = uVar35;
            }
            else {
              pdVar10[3] = in_dr6;
            }
            ar7 = pdVar10 + 4;
          }
          else {
            if (iVar6 != 0) {
              if (cVar43 == '\0') {
                dVar40 = (double)CONCAT44(*(undefined4 *)pdVar2,SUB84(dVar40,0));
                dVar24 = (double)CONCAT44(*(undefined4 *)(pdVar10 + -1),0x3f800000);
                dVar29 = (double)CONCAT44(*(undefined4 *)((int)pdVar10 + -4),fVar20);
              }
              else {
                dVar40 = *pdVar2;
                dVar24 = *(double *)((int)pdVar10 + -4);
                dVar29 = *(double *)((int)pdVar10 + 4);
                pdVar10 = (double *)((int)pdVar10 + 0xc);
              }
              pdVar2 = pdVar10 + -3;
              if (cVar42 == '\0') {
                dVar29 = (double)CONCAT44(-(float)((ulonglong)dVar29 >> 0x20),SUB84(dVar29,0));
              }
              else {
                dVar29 = -dVar29;
              }
              if (cVar43 == '\0') {
                pdVar10 = (double *)((int)ar7 + 0x14);
                *(undefined4 *)pdVar10 = uVar36;
              }
              else {
                pdVar10 = ar7 + 2;
                *pdVar10 = dVar32;
              }
              if (cVar42 == '\0') {
                dVar29 = (double)CONCAT44((float)((ulonglong)dVar29 >> 0x20) + fVar25,
                                          SUB84(dVar29,0));
              }
              else {
                dVar29 = dVar29 + dVar22;
              }
              if (cVar43 == '\0') {
                pdVar10 = (double *)((int)pdVar10 + -4);
                *(int *)pdVar10 = (int)((ulonglong)dVar24 >> 0x20);
              }
              else {
                pdVar10 = pdVar10 + -1;
                *pdVar10 = dVar24;
              }
              if (cVar42 == '\0') {
                bVar41 = (float)((ulonglong)dVar29 >> 0x20) < fVar25;
              }
              else {
                bVar41 = dVar29 < dVar22;
              }
              if (cVar43 == '\0') {
                pdVar10 = (double *)((int)pdVar10 + -4);
                *(int *)pdVar10 = (int)((ulonglong)dVar40 >> 0x20);
              }
              else {
                pdVar10 = pdVar10 + -1;
                *pdVar10 = dVar40;
              }
              dVar33 = dVar29;
              if ((bVar41) && (dVar33 = dVar22, cVar43 == '\0')) {
                dVar33 = (double)CONCAT44(fVar25,SUB84(dVar29,0));
              }
              uVar34 = (undefined4)((ulonglong)dVar33 >> 0x20);
              in_dr6 = (double)CONCAT44(uVar34,-SUB84(dVar33,0));
              iVar14 = iVar14 + iVar6 + 1;
              *(undefined4 *)pdVar10 = 0xf0000000;
              iVar6 = 0;
              if (cVar43 == '\0') {
                *(undefined4 *)(pdVar10 + 3) = uVar34;
              }
              else {
                pdVar10[3] = in_dr6;
              }
              ar7 = pdVar10 + 4;
            }
            if (iVar13 == 0) {
              if (cVar43 == '\0') {
                dVar40 = (double)CONCAT44(*(undefined4 *)pdVar4,SUB84(dVar40,0));
                dVar24 = (double)CONCAT44(*(undefined4 *)(iVar8 + -8),SUB84(dVar24,0));
                dVar29 = (double)CONCAT44(*(undefined4 *)(iVar8 + -4),SUB84(in_dr6,0));
                pdVar10 = (double *)((int)ar7 + 0x14);
                *(undefined4 *)pdVar10 = uVar35;
              }
              else {
                dVar40 = *pdVar4;
                dVar24 = *(double *)(iVar8 + -4);
                dVar29 = *(double *)(iVar8 + 4);
                pdVar10 = ar7 + 2;
                *pdVar10 = dVar38;
              }
              iVar13 = 1;
              if (cVar42 == '\0') {
                dVar29 = (double)CONCAT44((float)((ulonglong)dVar29 >> 0x20) + fVar25,
                                          SUB84(dVar29,0));
              }
              else {
                dVar29 = dVar29 + dVar22;
              }
              if (cVar43 == '\0') {
                pdVar10 = (double *)((int)pdVar10 + -4);
                *(int *)pdVar10 = (int)((ulonglong)dVar24 >> 0x20);
              }
              else {
                pdVar10 = pdVar10 + -1;
                *pdVar10 = dVar24;
              }
              if (cVar42 == '\0') {
                bVar41 = (float)((ulonglong)dVar29 >> 0x20) < fVar25;
              }
              else {
                bVar41 = dVar29 < dVar22;
              }
              if (cVar43 == '\0') {
                pdVar10 = (double *)((int)pdVar10 + -4);
                *(int *)pdVar10 = (int)((ulonglong)dVar40 >> 0x20);
              }
              else {
                pdVar10 = pdVar10 + -1;
                *pdVar10 = dVar40;
              }
              in_dr6 = dVar29;
              if ((bVar41) && (in_dr6 = dVar22, cVar43 == '\0')) {
                in_dr6 = (double)CONCAT44(fVar25,SUB84(dVar29,0));
              }
              *(undefined4 *)pdVar10 = 0xe0000000;
              if (cVar43 == '\0') {
                *(int *)(pdVar10 + 3) = (int)((ulonglong)in_dr6 >> 0x20);
              }
              else {
                pdVar10[3] = in_dr6;
              }
              ar7 = pdVar10 + 4;
            }
            if (cVar43 == '\0') {
              in_dr0 = (double)CONCAT44(*(undefined4 *)pdVar2,SUB84(dVar40,0));
              in_dr2 = (double)CONCAT44(*(undefined4 *)((int)pdVar2 + 4),SUB84(dVar24,0));
              dVar40 = (double)CONCAT44(*(undefined4 *)(pdVar2 + 1),SUB84(in_dr6,0));
              pdVar2 = (double *)((int)pdVar2 + 0xc);
            }
            else {
              in_dr0 = *pdVar2;
              in_dr2 = pdVar2[1];
              dVar40 = pdVar2[2];
              pdVar2 = pdVar2 + 3;
            }
            iVar13 = iVar13 + 1;
            pdVar2 = pdVar2 + -3;
            if (cVar43 == '\0') {
              pdVar10 = (double *)((int)ar7 + 0x14);
              *(undefined4 *)pdVar10 = uVar36;
            }
            else {
              pdVar10 = ar7 + 2;
              *pdVar10 = dVar32;
            }
            if (cVar42 == '\0') {
              dVar40 = (double)CONCAT44((float)((ulonglong)dVar40 >> 0x20) + fVar25,SUB84(dVar40,0))
              ;
            }
            else {
              dVar40 = dVar40 + dVar22;
            }
            if (cVar43 == '\0') {
              pdVar10 = (double *)((int)pdVar10 + -4);
              *(int *)pdVar10 = (int)((ulonglong)in_dr2 >> 0x20);
            }
            else {
              pdVar10 = pdVar10 + -1;
              *pdVar10 = in_dr2;
            }
            if (cVar42 == '\0') {
              bVar41 = (float)((ulonglong)dVar40 >> 0x20) < fVar25;
            }
            else {
              bVar41 = dVar40 < dVar22;
            }
            if (cVar43 == '\0') {
              pdVar10 = (double *)((int)pdVar10 + -4);
              *(int *)pdVar10 = (int)((ulonglong)in_dr0 >> 0x20);
            }
            else {
              pdVar10 = pdVar10 + -1;
              *pdVar10 = in_dr0;
            }
            in_dr6 = dVar40;
            if ((bVar41) && (in_dr6 = dVar22, cVar43 == '\0')) {
              in_dr6 = (double)CONCAT44(fVar25,SUB84(dVar40,0));
            }
            *(undefined4 *)pdVar10 = 0xe0000000;
            if (cVar43 == '\0') {
              *(int *)(pdVar10 + 3) = (int)((ulonglong)in_dr6 >> 0x20);
            }
            else {
              pdVar10[3] = in_dr6;
            }
            ar7 = pdVar10 + 4;
          }
        }
LAB_8c2318f0:
        fVar25 = SUB84(dVar22,0);
        if (cVar42 == '\0') {
          dVar28 = (double)CONCAT44((float)((ulonglong)dVar28 >> 0x20) * fVar25,SUB84(dVar28,0));
        }
        else {
          dVar28 = dVar28 * dVar22;
        }
        ar4 = (short *)((int)psVar3 + iVar9);
        if (cVar42 == '\0') {
          dVar40 = (double)CONCAT44((float)((ulonglong)dVar28 >> 0x20) + fVar25,
                                    SUB84(dVar28,0) * fVar25);
        }
        else {
          dVar40 = dVar28 * dVar22 + dVar22;
        }
        iVar7 = iVar7 + -1;
        if (cVar42 == '\0') {
          in_dr14 = (double)CONCAT44((int)((ulonglong)dVar40 >> 0x20),SUB84(dVar40,0) + fVar25);
        }
        else {
          in_dr14 = dVar40 + dVar22;
        }
        in_dr10 = dVar32;
        if (cVar43 == '\0') {
          in_dr10 = (double)CONCAT44((int)((ulonglong)dVar32 >> 0x20),SUB84(dVar38,0));
        }
        fVar25 = -SUB84(dVar37,0);
        uVar35 = (undefined4)((ulonglong)in_dr14 >> 0x20);
        in_dr12 = in_dr14;
        if (cVar43 == '\0') {
          in_dr12 = (double)CONCAT44(uVar35,SUB84(dVar32,0));
        }
        dVar38 = in_dr10;
        dVar32 = in_dr12;
      } while (iVar7 != 0);
      fVar25 = (float)((ulonglong)dVar22 >> 0x20);
      if (iVar13 == 0) {
        if (iVar6 != 0) {
          if (cVar43 == '\0') {
            in_dr0 = (double)CONCAT44(*(undefined4 *)pdVar12,SUB84(in_dr0,0));
            pdVar2 = (double *)(iVar11 + -8);
          }
          else {
            in_dr0 = *pdVar12;
            pdVar2 = (double *)(iVar11 + -4);
          }
          if (cVar43 == '\0') {
            in_dr2 = (double)CONCAT44(*(undefined4 *)pdVar2,SUB84(in_dr2,0));
            dVar38 = (double)CONCAT44(*(undefined4 *)((int)pdVar2 + 4),SUB84(in_dr6,0));
          }
          else {
            in_dr2 = *pdVar2;
            dVar38 = pdVar2[1];
          }
          if (cVar42 == '\0') {
            dVar38 = (double)CONCAT44(-(float)((ulonglong)dVar38 >> 0x20),SUB84(dVar38,0));
          }
          else {
            dVar38 = -dVar38;
          }
          if (cVar43 == '\0') {
            pdVar2 = (double *)((int)ar7 + 0x14);
            *(undefined4 *)pdVar2 = uVar35;
          }
          else {
            pdVar2 = ar7 + 2;
            *pdVar2 = in_dr14;
          }
          if (cVar42 == '\0') {
            dVar38 = (double)CONCAT44((float)((ulonglong)dVar38 >> 0x20) + fVar25,SUB84(dVar38,0));
          }
          else {
            dVar38 = dVar38 + dVar22;
          }
          if (cVar43 == '\0') {
            pdVar2 = (double *)((int)pdVar2 + -4);
            *(int *)pdVar2 = (int)((ulonglong)in_dr2 >> 0x20);
          }
          else {
            pdVar2 = pdVar2 + -1;
            *pdVar2 = in_dr2;
          }
          if (cVar42 == '\0') {
            bVar41 = (float)((ulonglong)dVar38 >> 0x20) < fVar25;
          }
          else {
            bVar41 = dVar38 < dVar22;
          }
          if (cVar43 == '\0') {
            pdVar2 = (double *)((int)pdVar2 + -4);
            *(int *)pdVar2 = (int)((ulonglong)in_dr0 >> 0x20);
          }
          else {
            pdVar2 = pdVar2 + -1;
            *pdVar2 = in_dr0;
          }
          dVar32 = dVar38;
          if ((bVar41) && (dVar32 = dVar22, cVar43 == '\0')) {
            dVar32 = (double)CONCAT44(fVar25,SUB84(dVar38,0));
          }
          uVar35 = (undefined4)((ulonglong)dVar32 >> 0x20);
          in_dr6 = (double)CONCAT44(uVar35,-SUB84(dVar32,0));
          iVar14 = iVar14 + iVar6 + 1;
          *(undefined4 *)pdVar2 = 0xf0000000;
          if (cVar43 == '\0') {
            *(undefined4 *)(pdVar2 + 3) = uVar35;
          }
          else {
            pdVar2[3] = in_dr6;
          }
          ar7 = pdVar2 + 4;
        }
      }
      else {
        if (cVar43 == '\0') {
          in_dr0 = (double)CONCAT44(*(undefined4 *)pdVar12,SUB84(in_dr0,0));
          pdVar2 = (double *)(iVar11 + -8);
        }
        else {
          in_dr0 = *pdVar12;
          pdVar2 = (double *)(iVar11 + -4);
        }
        if (cVar43 == '\0') {
          in_dr2 = (double)CONCAT44(*(undefined4 *)pdVar2,SUB84(in_dr2,0));
          dVar38 = (double)CONCAT44(*(undefined4 *)((int)pdVar2 + 4),SUB84(in_dr6,0));
          pdVar2 = (double *)((int)ar7 + 0x14);
          *(undefined4 *)pdVar2 = uVar35;
        }
        else {
          in_dr2 = *pdVar2;
          dVar38 = pdVar2[1];
          pdVar2 = ar7 + 2;
          *pdVar2 = in_dr14;
        }
        if (cVar42 == '\0') {
          dVar38 = (double)CONCAT44((float)((ulonglong)dVar38 >> 0x20) + fVar25,SUB84(dVar38,0));
        }
        else {
          dVar38 = dVar38 + dVar22;
        }
        if (cVar43 == '\0') {
          pdVar2 = (double *)((int)pdVar2 + -4);
          *(int *)pdVar2 = (int)((ulonglong)in_dr2 >> 0x20);
        }
        else {
          pdVar2 = pdVar2 + -1;
          *pdVar2 = in_dr2;
        }
        if (cVar42 == '\0') {
          bVar41 = (float)((ulonglong)dVar38 >> 0x20) < fVar25;
        }
        else {
          bVar41 = dVar38 < dVar22;
        }
        if (cVar43 == '\0') {
          pdVar2 = (double *)((int)pdVar2 + -4);
          *(int *)pdVar2 = (int)((ulonglong)in_dr0 >> 0x20);
        }
        else {
          pdVar2 = pdVar2 + -1;
          *pdVar2 = in_dr0;
        }
        in_dr6 = dVar38;
        if ((bVar41) && (in_dr6 = dVar22, cVar43 == '\0')) {
          in_dr6 = (double)CONCAT44(fVar25,SUB84(dVar38,0));
        }
        iVar14 = iVar14 + iVar13 + 1;
        *(undefined4 *)pdVar2 = 0xf0000000;
        if (cVar43 == '\0') {
          *(int *)(pdVar2 + 3) = (int)((ulonglong)in_dr6 >> 0x20);
        }
        else {
          pdVar2[3] = in_dr6;
        }
        ar7 = pdVar2 + 4;
      }
      uVar1 = uVar1 - 1;
      if (uVar1 == 0) {
        _DAT_8c4aa520 = _DAT_8c4aa520 + iVar14;
        _DAT_8c4aa51c = _DAT_8c4aa51c + iVar15;
        return ar7;
      }
    } while( true );
  }
  fVar25 = DAT_8c277af8 + 0.5;
  dVar38 = (double)CONCAT44(DAT_8c277afc + 0.5,uStack_28);
  iVar14 = 0;
  iVar15 = 0;
  uStack_44 = ar6 & 0x3fff;
  dVar22 = (double)CONCAT44(fVar25,0x3f800000);
  uStack_34 = 0x3f800000;
  if ((_DAT_8c4aa4f0 & 0x80000000) != 0) {
    dVar22 = 1.58735232019473e-314;
    uStack_34 = 0xbf800000;
  }
  iStack_38 = (ar6 >> 0xe & 3) << 1;
  pdStack_58 = ar7;
  psStack_50 = ar4;
  uStack_30 = in_PR;
  uStack_2c = uVar35;
  uStack_24 = uVar36;
  do {
    fVar20 = SUB84(dVar22,0);
    iVar9 = (int)*psStack_50;
    pdVar2 = (double *)(psStack_50[1] * 0x20 + ar5);
    if (cVar43 == '\0') {
      dVar38 = (double)CONCAT44((int)((ulonglong)dVar38 >> 0x20),uStack_34);
    }
    else {
      in_xd12 = (double)CONCAT44(uStack_30,uStack_34);
    }
    if (iVar9 < 0) {
      dVar38 = (double)CONCAT44((int)((ulonglong)dVar38 >> 0x20),-SUB84(dVar38,0));
      iVar9 = -iVar9;
    }
    uVar1 = (uint)((ulonglong)dVar38 >> 0x20);
    dVar22 = dVar38;
    if (cVar43 == '\0') {
      in_dr8 = (ulonglong)uVar1;
      dVar22 = in_xd8;
    }
    in_xd8 = dVar22;
    iVar15 = iVar15 + iVar9;
    iVar7 = 0;
    if (cVar43 == '\0') {
      in_dr10 = (double)CONCAT44(fVar25,SUB84(in_dr10,0));
      in_dr0 = (double)CONCAT44(0x3f000000,SUB84(in_dr0,0));
      fVar20 = *(float *)(pdVar2 + 3);
    }
    else {
      in_dr10 = (double)CONCAT44(uStack_44,fVar25);
      in_dr0 = 2.9297889377462193e+173;
      in_xd2 = pdVar2[3];
    }
    iVar6 = 0;
    iVar9 = iVar9 + -2;
    fVar26 = (float)((ulonglong)in_dr0 >> 0x20);
    if (cVar42 == '\0') {
      in_dr10 = (double)CONCAT44(fVar26 * fVar20 + (float)((ulonglong)in_dr10 >> 0x20),
                                 SUB84(in_dr10,0));
    }
    if (cVar43 == '\0') {
      fVar20 = *(float *)((int)pdVar2 + 0x1c);
    }
    else {
      in_xd2 = *(double *)((int)pdVar2 + 0x1c);
    }
    if (cVar42 == '\0') {
      in_dr8 = (ulonglong)(uint)(fVar26 * fVar20 + (float)in_dr8);
    }
    pdVar12 = (double *)(psStack_50[4] * 0x20 + ar5);
    if (cVar43 == '\0') {
      fVar20 = *(float *)(pdVar12 + 3);
      dVar32 = (double)CONCAT44(uVar1,fVar25);
    }
    else {
      in_xd14 = (double)CONCAT44(uStack_44,fVar25);
      in_xd2 = pdVar12[3];
      dVar32 = dVar38;
    }
    psStack_50 = psStack_50 + 7;
    if (cVar42 == '\0') {
      dVar32 = (double)CONCAT44((int)((ulonglong)dVar32 >> 0x20),fVar26 * fVar20 + SUB84(dVar32,0));
    }
    if (cVar43 == '\0') {
      fVar20 = *(float *)((int)pdVar12 + 0x1c);
    }
    else {
      in_xd2 = *(double *)((int)pdVar12 + 0x1c);
    }
    dVar40 = in_xd14;
    if (cVar42 == '\0') {
      dVar32 = (double)CONCAT44(fVar26 * fVar20 + (float)((ulonglong)dVar32 >> 0x20),SUB84(dVar32,0)
                               );
    }
    do {
      pdVar10 = (double *)(*psStack_50 * 0x20 + ar5);
      psStack_50 = psStack_50 + 3;
      if (cVar43 == '\0') {
        in_dr0 = (double)CONCAT44(0x3f000000,SUB84(in_dr0,0));
        dVar22 = (double)CONCAT44(*(undefined4 *)(pdVar10 + 3),fVar25);
      }
      else {
        in_xd2 = (double)CONCAT44(uStack_44,fVar25);
        in_dr0 = 2.9297889377462193e+173;
        dVar22 = pdVar10[3];
      }
      fVar20 = (float)((ulonglong)in_dr0 >> 0x20);
      if (cVar42 == '\0') {
        dVar22 = (double)(ulonglong)
                         (uint)(fVar20 * (float)((ulonglong)dVar22 >> 0x20) + SUB84(dVar22,0));
      }
      uStack_3c = SUB84(dVar22,0);
      if (cVar43 == '\0') {
        uVar23 = CONCAT44(*(undefined4 *)((int)pdVar10 + 0x1c),(int)((ulonglong)dVar38 >> 0x20));
      }
      else {
        uStack_3c = SUB84(in_xd2,0);
        iStack_38 = (int)((ulonglong)in_xd2 >> 0x20);
        uVar23 = *(ulonglong *)((int)pdVar10 + 0x1c);
        in_xd2 = dVar38;
      }
      if (cVar42 == '\0') {
        uVar23 = (ulonglong)(uint)(fVar20 * (float)(uVar23 >> 0x20) + (float)uVar23);
      }
      if (cVar43 == '\0') {
        uStack_40 = (undefined4)uVar23;
        fVar26 = *(float *)pdVar2;
      }
      else {
        uStack_40 = SUB84(in_xd2,0);
        uStack_3c = (uint)((ulonglong)in_xd2 >> 0x20);
        fVar26 = (float)((ulonglong)*pdVar2 >> 0x20);
      }
      dVar22 = (double)CONCAT44(fVar26,0x3f800000);
      uVar36 = SUB84(dVar32,0);
      uVar34 = (undefined4)((ulonglong)dVar32 >> 0x20);
      uVar35 = (undefined4)in_dr8;
      if (cVar42 != '\0' || 1.0 <= fVar26) {
        if (cVar43 == '\0') {
          dVar22 = (double)CONCAT44(*(undefined4 *)pdVar12,0x3f800000);
        }
        else {
          dVar22 = *pdVar12;
        }
        if (cVar42 == '\0' && (float)((ulonglong)dVar22 >> 0x20) < SUB84(dVar22,0))
        goto LAB_8c231400;
        if (cVar43 == '\0') {
          fVar26 = *(float *)pdVar10;
        }
        else {
          fVar26 = (float)((ulonglong)*pdVar10 >> 0x20);
        }
        dVar22 = (double)CONCAT44(fVar26,0x3f800000);
        if (cVar42 == '\0' && fVar26 < 1.0) goto LAB_8c231400;
        if (cVar43 == '\0') {
          dVar22 = (double)CONCAT44(*(undefined4 *)((int)pdVar10 + 4),*(undefined4 *)(pdVar2 + 1));
          dVar29 = *(double *)((int)pdVar12 + 4);
        }
        else {
          in_xd2 = pdVar2[1];
          dVar29 = pdVar12[1];
          dVar22 = *(double *)((int)pdVar10 + 4);
          in_xd4 = *(double *)((int)pdVar12 + 4);
        }
        fVar26 = (float)((ulonglong)dVar29 >> 0x20);
        fVar27 = SUB84(dVar29,0);
        if (cVar42 == '\0') {
          fVar21 = (SUB84(dVar22,0) - fVar26) * ((float)((ulonglong)dVar22 >> 0x20) - fVar27);
        }
        else {
          dVar22 = (dVar22 - dVar29) - dVar29;
          fVar21 = SUB84(dVar22 * dVar22,0);
        }
        if (cVar43 == '\0') {
          dVar22 = (double)CONCAT44(*(undefined4 *)((int)pdVar2 + 4),fVar21);
          in_dr0 = (double)CONCAT44(fVar20,*(undefined4 *)(pdVar10 + 1));
        }
        else {
          dVar22 = *(double *)((int)pdVar2 + 4);
        }
        if (cVar42 == '\0') {
          fVar26 = SUB84(in_dr0,0) - fVar26;
          in_dr0 = (double)(ulonglong)(uint)fVar26;
          fVar26 = ((float)((ulonglong)dVar22 >> 0x20) - fVar27) * fVar26;
          dVar22 = (double)CONCAT44(fVar26,SUB84(dVar22,0) - fVar26);
        }
        else {
          in_dr0 = in_dr0 - dVar29;
          dVar22 = (dVar22 - dVar29) * in_dr0;
          dVar22 = dVar22 - dVar22;
        }
        dVar29 = in_xd2;
        if (cVar43 == '\0') {
          dVar29 = (double)CONCAT44(SUB84(dVar22,0),fVar27);
        }
        if (cVar42 == '\0') {
          dVar29 = (double)CONCAT44((float)((ulonglong)dVar29 >> 0x20) * SUB84(dVar38,0),
                                    SUB84(dVar29,0));
        }
        else {
          dVar29 = dVar29 * dVar38;
        }
        dVar22 = (double)((ulonglong)dVar22 & 0xffffffff00000000);
        fVar20 = (float)((ulonglong)dVar29 >> 0x20);
        if (cVar42 == '\0') {
          bVar41 = fVar20 < 0.0;
        }
        else {
          bVar41 = dVar29 < dVar22;
        }
        uVar39 = (undefined4)((ulonglong)in_dr10 >> 0x20);
        if (bVar41) {
          if (iVar6 != 0) {
            if (cVar43 == '\0') {
              dVar29 = (double)CONCAT44(fVar20,uVar30);
              uVar31 = CONCAT44(*(undefined4 *)((int)pdVar12 + 4),*(undefined4 *)(pdVar12 + 1));
              in_dr8 = CONCAT44(*(undefined4 *)((int)pdVar12 + 0xc),uVar35);
              dVar22 = (double)((ulonglong)*(uint *)(pdVar12 + 2) << 0x20);
              pdVar4 = (double *)((int)pdVar12 + 0x14);
              dVar28 = in_xd4;
            }
            else {
              uVar31 = *(undefined8 *)((int)pdVar12 + 4);
              dVar28 = (double)CONCAT44(psStack_50,uVar30);
              in_xd6 = *(double *)((int)pdVar12 + 0xc);
              in_dr8 = *(ulonglong *)((int)pdVar12 + 0x14);
              dVar22 = *(double *)((int)pdVar12 + 0x1c);
              pdVar4 = (double *)((int)pdVar12 + 0x24);
            }
            if (cVar42 == '\0') {
              fVar20 = SUB84(dVar29,0) - (float)((ulonglong)dVar22 >> 0x20);
            }
            else {
              fVar20 = SUB84(dVar29 - dVar22,0);
            }
            if (cVar43 == '\0') {
              dVar22 = (double)CONCAT44(uVar30,SUB84(dVar22,0));
              dVar29 = (double)CONCAT44(*(undefined4 *)pdVar4,fVar20);
            }
            else {
              dVar22 = (double)CONCAT44(psStack_50,uVar30);
              dVar29 = *pdVar4;
            }
            fVar20 = (float)((ulonglong)dVar22 >> 0x20);
            if (cVar42 == '\0') {
              bVar41 = SUB84(dVar29,0) < fVar20;
              dVar29 = (double)CONCAT44(-(float)((ulonglong)dVar29 >> 0x20),SUB84(dVar29,0));
            }
            else {
              bVar41 = dVar29 < dVar22;
              dVar29 = -dVar29;
            }
            in_xd4 = dVar28;
            if ((bVar41) && (in_xd4 = dVar22, cVar43 == '\0')) {
              dVar29 = (double)CONCAT44((int)((ulonglong)dVar29 >> 0x20),fVar20);
              in_xd4 = dVar28;
            }
            if (cVar43 == '\0') {
              *(int *)((int)pdStack_58 + 0x1c) = (int)((ulonglong)dVar29 >> 0x20);
              *(int *)(pdStack_58 + 3) = SUB84(dVar29,0);
              *(undefined4 *)((int)pdStack_58 + 0x14) = uVar34;
              *(undefined4 *)(pdStack_58 + 2) = uVar36;
              *(int *)((int)pdStack_58 + 0xc) = (int)(in_dr8 >> 0x20);
              *(int *)(pdStack_58 + 1) = (int)uVar31;
              *(int *)((int)pdStack_58 + 4) = (int)((ulonglong)uVar31 >> 0x20);
            }
            else {
              *(double *)((int)pdStack_58 + 0x1c) = dVar29;
              pdStack_58[3] = in_xd4;
              *(double *)((int)pdStack_58 + 0x14) = dVar32;
              pdStack_58[2] = dVar40;
              *(ulonglong *)((int)pdStack_58 + 0xc) = in_dr8;
              pdStack_58[1] = in_xd6;
              *(undefined8 *)((int)pdStack_58 + 4) = uVar31;
            }
            *(undefined4 *)pdStack_58 = 0xf0000000;
            iVar14 = iVar14 + iVar6 + 1;
            pdStack_58 = pdStack_58 + 4;
            iVar6 = 0;
          }
          if (iVar7 == 0) {
            pdVar4 = (double *)((int)pdVar2 + 4);
            if (cVar43 == '\0') {
              dVar22 = (double)CONCAT44((int)((ulonglong)dVar22 >> 0x20),uVar30);
              in_dr8 = CONCAT44(*(undefined4 *)((int)pdVar2 + 0xc),(int)in_dr8);
              dVar29 = (double)CONCAT44((int)((ulonglong)dVar29 >> 0x20),*(undefined4 *)(pdVar2 + 2)
                                       );
              pdVar2 = (double *)((int)pdVar2 + 0x14);
            }
            else {
              in_xd6 = *pdVar4;
              pdVar4 = (double *)((int)pdVar2 + 0xc);
              in_xd2 = (double)CONCAT44(psStack_50,uVar30);
              in_dr8 = *(ulonglong *)((int)pdVar2 + 0x14);
              in_xd4 = *(double *)((int)pdVar2 + 0x1c);
              pdVar2 = (double *)((int)pdVar2 + 0x24);
            }
            dVar28 = *pdVar4;
            if (cVar42 == '\0') {
              fVar20 = SUB84(dVar29,0) + SUB84(dVar22,0);
              bVar41 = fVar20 < SUB84(dVar22,0);
            }
            else {
              fVar20 = SUB84(dVar29 + dVar22,0);
              bVar41 = dVar29 + dVar22 < dVar22;
            }
            if (cVar43 == '\0') {
              dVar29 = (double)CONCAT44(*(undefined4 *)pdVar2,fVar20);
            }
            else {
              dVar29 = *pdVar2;
            }
            if (bVar41) {
              if (cVar43 == '\0') {
                dVar29 = (double)CONCAT44((int)((ulonglong)dVar29 >> 0x20),uVar30);
              }
              else {
                in_xd4 = (double)CONCAT44(psStack_50,uVar30);
              }
            }
            if (cVar43 == '\0') {
              *(int *)((int)pdStack_58 + 0x1c) = (int)((ulonglong)dVar29 >> 0x20);
              *(int *)(pdStack_58 + 3) = SUB84(dVar29,0);
              *(int *)((int)pdStack_58 + 0x14) = (int)in_dr8;
              *(undefined4 *)(pdStack_58 + 2) = uVar39;
              *(int *)((int)pdStack_58 + 0xc) = (int)(in_dr8 >> 0x20);
              *(int *)(pdStack_58 + 1) = (int)((ulonglong)dVar28 >> 0x20);
              *(int *)((int)pdStack_58 + 4) = SUB84(dVar28,0);
            }
            else {
              *(double *)((int)pdStack_58 + 0x1c) = dVar29;
              pdStack_58[3] = in_xd4;
              *(double *)((int)pdStack_58 + 0x14) = in_xd8;
              pdStack_58[2] = in_dr10;
              *(ulonglong *)((int)pdStack_58 + 0xc) = in_dr8;
              pdStack_58[1] = dVar28;
              *(double *)((int)pdStack_58 + 4) = in_xd6;
            }
            *(undefined4 *)pdStack_58 = 0xe0000000;
            pdStack_58 = pdStack_58 + 4;
            iVar7 = 1;
          }
          if (cVar43 == '\0') {
            in_dr8 = CONCAT44(*(undefined4 *)((int)pdVar12 + 4),(int)in_dr8);
            dVar22 = (double)CONCAT44((int)((ulonglong)dVar22 >> 0x20),uVar30);
            dVar28 = (double)CONCAT44(*(undefined4 *)(pdVar12 + 1),
                                      *(undefined4 *)((int)pdVar12 + 0xc));
            dVar29 = (double)CONCAT44((int)((ulonglong)dVar29 >> 0x20),*(undefined4 *)(pdVar12 + 2))
            ;
            pdVar2 = (double *)((int)pdVar12 + 0x14);
          }
          else {
            in_dr8 = *(ulonglong *)((int)pdVar12 + 4);
            in_xd2 = (double)CONCAT44(psStack_50,uVar30);
            dVar28 = *(double *)((int)pdVar12 + 0xc);
            in_xd6 = *(double *)((int)pdVar12 + 0x14);
            in_xd4 = *(double *)((int)pdVar12 + 0x1c);
            pdVar2 = (double *)((int)pdVar12 + 0x24);
          }
          if (cVar42 == '\0') {
            fVar20 = SUB84(dVar29,0) + SUB84(dVar22,0);
            bVar41 = fVar20 < SUB84(dVar22,0);
          }
          else {
            fVar20 = SUB84(dVar29 + dVar22,0);
            bVar41 = dVar29 + dVar22 < dVar22;
          }
          if (cVar43 == '\0') {
            in_dr4 = (double)CONCAT44(*(undefined4 *)pdVar2,fVar20);
          }
          else {
            in_dr4 = *pdVar2;
          }
          if (bVar41) {
            if (cVar43 == '\0') {
              in_dr4 = (double)CONCAT44((int)((ulonglong)in_dr4 >> 0x20),uVar30);
            }
            else {
              in_xd4 = (double)CONCAT44(psStack_50,uVar30);
            }
          }
          if (cVar43 == '\0') {
            *(int *)((int)pdStack_58 + 0x1c) = (int)((ulonglong)in_dr4 >> 0x20);
            *(int *)(pdStack_58 + 3) = SUB84(in_dr4,0);
            *(undefined4 *)((int)pdStack_58 + 0x14) = uVar34;
            *(undefined4 *)(pdStack_58 + 2) = uVar36;
            *(int *)((int)pdStack_58 + 0xc) = SUB84(dVar28,0);
            *(int *)(pdStack_58 + 1) = (int)((ulonglong)dVar28 >> 0x20);
            *(int *)((int)pdStack_58 + 4) = (int)(in_dr8 >> 0x20);
          }
          else {
            *(double *)((int)pdStack_58 + 0x1c) = in_dr4;
            pdStack_58[3] = in_xd4;
            *(double *)((int)pdStack_58 + 0x14) = dVar32;
            pdStack_58[2] = dVar40;
            *(double *)((int)pdStack_58 + 0xc) = in_xd6;
            pdStack_58[1] = dVar28;
            *(ulonglong *)((int)pdStack_58 + 4) = in_dr8;
          }
          *(undefined4 *)pdStack_58 = 0xe0000000;
          pdStack_58 = pdStack_58 + 4;
          iVar7 = iVar7 + 1;
        }
        else {
          if (iVar7 != 0) {
            if (cVar43 == '\0') {
              dVar22 = (double)((ulonglong)uVar30 << 0x20);
              uVar31 = CONCAT44(*(undefined4 *)((int)pdVar12 + 4),*(undefined4 *)(pdVar12 + 1));
              in_dr8 = CONCAT44(*(undefined4 *)((int)pdVar12 + 0xc),uVar35);
              dVar29 = (double)CONCAT44(fVar20,*(undefined4 *)(pdVar12 + 2));
              pdVar4 = (double *)((int)pdVar12 + 0x14);
            }
            else {
              uVar31 = *(undefined8 *)((int)pdVar12 + 4);
              dVar22 = (double)CONCAT44(psStack_50,uVar30);
              in_xd6 = *(double *)((int)pdVar12 + 0xc);
              in_dr8 = *(ulonglong *)((int)pdVar12 + 0x14);
              in_xd4 = *(double *)((int)pdVar12 + 0x1c);
              pdVar4 = (double *)((int)pdVar12 + 0x24);
            }
            fVar20 = (float)((ulonglong)dVar22 >> 0x20);
            if (cVar42 == '\0') {
              fVar26 = SUB84(dVar29,0) + fVar20;
              bVar41 = fVar26 < fVar20;
            }
            else {
              fVar26 = SUB84(dVar29 + dVar22,0);
              bVar41 = dVar29 + dVar22 < dVar22;
            }
            if (cVar43 == '\0') {
              dVar29 = (double)CONCAT44(*(undefined4 *)pdVar4,fVar26);
            }
            else {
              dVar29 = *pdVar4;
            }
            if (bVar41) {
              if (cVar43 == '\0') {
                dVar29 = (double)CONCAT44((int)((ulonglong)dVar29 >> 0x20),uVar30);
              }
              else {
                in_xd4 = (double)CONCAT44(psStack_50,uVar30);
              }
            }
            if (cVar43 == '\0') {
              *(int *)((int)pdStack_58 + 0x1c) = (int)((ulonglong)dVar29 >> 0x20);
              *(int *)(pdStack_58 + 3) = SUB84(dVar29,0);
              *(undefined4 *)((int)pdStack_58 + 0x14) = uVar34;
              *(undefined4 *)(pdStack_58 + 2) = uVar36;
              *(int *)((int)pdStack_58 + 0xc) = (int)(in_dr8 >> 0x20);
              *(int *)(pdStack_58 + 1) = (int)uVar31;
              *(int *)((int)pdStack_58 + 4) = (int)((ulonglong)uVar31 >> 0x20);
            }
            else {
              *(double *)((int)pdStack_58 + 0x1c) = dVar29;
              pdStack_58[3] = in_xd4;
              *(double *)((int)pdStack_58 + 0x14) = dVar32;
              pdStack_58[2] = dVar40;
              *(ulonglong *)((int)pdStack_58 + 0xc) = in_dr8;
              pdStack_58[1] = in_xd6;
              *(undefined8 *)((int)pdStack_58 + 4) = uVar31;
            }
            *(undefined4 *)pdStack_58 = 0xf0000000;
            iVar14 = iVar14 + iVar7 + 1;
            pdStack_58 = pdStack_58 + 4;
            iVar7 = 0;
          }
          if (iVar6 == 0) {
            if (cVar43 == '\0') {
              dVar29 = (double)CONCAT44((int)((ulonglong)dVar29 >> 0x20),uVar30);
              uVar31 = CONCAT44(*(undefined4 *)((int)pdVar2 + 4),*(undefined4 *)(pdVar2 + 1));
              in_dr8 = CONCAT44(*(undefined4 *)((int)pdVar2 + 0xc),(int)in_dr8);
              dVar22 = (double)CONCAT44((int)((ulonglong)dVar22 >> 0x20),*(undefined4 *)(pdVar2 + 2)
                                       );
              pdVar2 = (double *)((int)pdVar2 + 0x14);
              dVar28 = in_xd4;
            }
            else {
              uVar31 = *(undefined8 *)((int)pdVar2 + 4);
              dVar28 = (double)CONCAT44(psStack_50,uVar30);
              in_xd6 = *(double *)((int)pdVar2 + 0xc);
              in_dr8 = *(ulonglong *)((int)pdVar2 + 0x14);
              in_xd2 = *(double *)((int)pdVar2 + 0x1c);
              pdVar2 = (double *)((int)pdVar2 + 0x24);
            }
            if (cVar42 == '\0') {
              fVar20 = SUB84(dVar29,0) - SUB84(dVar22,0);
            }
            else {
              fVar20 = SUB84(dVar29 - dVar22,0);
            }
            if (cVar43 == '\0') {
              dVar22 = (double)CONCAT44((int)((ulonglong)dVar22 >> 0x20),uVar30);
              dVar29 = (double)CONCAT44(*(undefined4 *)pdVar2,fVar20);
            }
            else {
              in_xd2 = (double)CONCAT44(psStack_50,uVar30);
              dVar29 = *pdVar2;
            }
            if (cVar42 == '\0') {
              bVar41 = SUB84(dVar29,0) < SUB84(dVar22,0);
              dVar29 = (double)CONCAT44(-(float)((ulonglong)dVar29 >> 0x20),SUB84(dVar29,0));
            }
            else {
              bVar41 = dVar29 < dVar22;
              dVar29 = -dVar29;
            }
            in_xd4 = dVar28;
            if ((bVar41) && (in_xd4 = in_xd2, cVar43 == '\0')) {
              dVar29 = (double)CONCAT44((int)((ulonglong)dVar29 >> 0x20),SUB84(dVar22,0));
              in_xd4 = dVar28;
            }
            if (cVar43 == '\0') {
              *(int *)((int)pdStack_58 + 0x1c) = (int)((ulonglong)dVar29 >> 0x20);
              *(int *)(pdStack_58 + 3) = SUB84(dVar29,0);
              *(int *)((int)pdStack_58 + 0x14) = (int)in_dr8;
              *(undefined4 *)(pdStack_58 + 2) = uVar39;
              *(int *)((int)pdStack_58 + 0xc) = (int)(in_dr8 >> 0x20);
              *(int *)(pdStack_58 + 1) = (int)uVar31;
              *(int *)((int)pdStack_58 + 4) = (int)((ulonglong)uVar31 >> 0x20);
            }
            else {
              *(double *)((int)pdStack_58 + 0x1c) = dVar29;
              pdStack_58[3] = in_xd4;
              *(double *)((int)pdStack_58 + 0x14) = in_xd8;
              pdStack_58[2] = in_dr10;
              *(ulonglong *)((int)pdStack_58 + 0xc) = in_dr8;
              pdStack_58[1] = in_xd6;
              *(undefined8 *)((int)pdStack_58 + 4) = uVar31;
            }
            *(undefined4 *)pdStack_58 = 0xe0000000;
            pdStack_58 = pdStack_58 + 4;
            iVar6 = 1;
          }
          if (cVar43 == '\0') {
            in_dr8 = CONCAT44(*(undefined4 *)((int)pdVar12 + 4),(int)in_dr8);
            pdVar4 = pdVar12 + 1;
            dVar29 = (double)CONCAT44((int)((ulonglong)dVar29 >> 0x20),uVar30);
            dVar22 = (double)CONCAT44((int)((ulonglong)dVar22 >> 0x20),*(undefined4 *)(pdVar12 + 2))
            ;
            pdVar2 = (double *)((int)pdVar12 + 0x14);
            dVar28 = in_xd4;
          }
          else {
            in_dr8 = *(ulonglong *)((int)pdVar12 + 4);
            dVar28 = (double)CONCAT44(psStack_50,uVar30);
            in_xd6 = *(double *)((int)pdVar12 + 0xc);
            pdVar4 = (double *)((int)pdVar12 + 0x14);
            in_xd2 = *(double *)((int)pdVar12 + 0x1c);
            pdVar2 = (double *)((int)pdVar12 + 0x24);
          }
          dVar37 = *pdVar4;
          if (cVar42 == '\0') {
            fVar20 = SUB84(dVar29,0) - SUB84(dVar22,0);
          }
          else {
            fVar20 = SUB84(dVar29 - dVar22,0);
          }
          if (cVar43 == '\0') {
            dVar22 = (double)CONCAT44((int)((ulonglong)dVar22 >> 0x20),uVar30);
            dVar29 = (double)CONCAT44(*(undefined4 *)pdVar2,fVar20);
          }
          else {
            in_xd2 = (double)CONCAT44(psStack_50,uVar30);
            dVar29 = *pdVar2;
          }
          if (cVar42 == '\0') {
            bVar41 = SUB84(dVar29,0) < SUB84(dVar22,0);
            in_dr4 = (double)CONCAT44(-(float)((ulonglong)dVar29 >> 0x20),SUB84(dVar29,0));
          }
          else {
            bVar41 = dVar29 < dVar22;
            in_dr4 = -dVar29;
          }
          in_xd4 = dVar28;
          if ((bVar41) && (in_xd4 = in_xd2, cVar43 == '\0')) {
            in_dr4 = (double)CONCAT44((int)((ulonglong)in_dr4 >> 0x20),SUB84(dVar22,0));
            in_xd4 = dVar28;
          }
          if (cVar43 == '\0') {
            *(int *)((int)pdStack_58 + 0x1c) = (int)((ulonglong)in_dr4 >> 0x20);
            *(int *)(pdStack_58 + 3) = SUB84(in_dr4,0);
            *(undefined4 *)((int)pdStack_58 + 0x14) = uVar34;
            *(undefined4 *)(pdStack_58 + 2) = uVar36;
            *(int *)((int)pdStack_58 + 0xc) = (int)((ulonglong)dVar37 >> 0x20);
            *(int *)(pdStack_58 + 1) = SUB84(dVar37,0);
            *(int *)((int)pdStack_58 + 4) = (int)(in_dr8 >> 0x20);
          }
          else {
            *(double *)((int)pdStack_58 + 0x1c) = in_dr4;
            pdStack_58[3] = in_xd4;
            *(double *)((int)pdStack_58 + 0x14) = dVar32;
            pdStack_58[2] = dVar40;
            *(double *)((int)pdStack_58 + 0xc) = dVar37;
            pdStack_58[1] = in_xd6;
            *(ulonglong *)((int)pdStack_58 + 4) = in_dr8;
          }
          *(undefined4 *)pdStack_58 = 0xe0000000;
          pdStack_58 = pdStack_58 + 4;
          iVar6 = iVar6 + 1;
        }
      }
      else {
LAB_8c231400:
        if (iVar6 != 0) {
          if (cVar43 == '\0') {
            in_dr4 = (double)CONCAT44((int)((ulonglong)in_dr4 >> 0x20),uVar30);
            uVar31 = CONCAT44(*(undefined4 *)((int)pdVar12 + 4),*(undefined4 *)(pdVar12 + 1));
            in_dr8 = CONCAT44(*(undefined4 *)((int)pdVar12 + 0xc),uVar35);
            dVar22 = (double)CONCAT44((int)((ulonglong)dVar22 >> 0x20),*(undefined4 *)(pdVar12 + 2))
            ;
            pdVar4 = (double *)((int)pdVar12 + 0x14);
            dVar29 = in_xd4;
          }
          else {
            uVar31 = *(undefined8 *)((int)pdVar12 + 4);
            dVar29 = (double)CONCAT44(psStack_50,uVar30);
            in_xd6 = *(double *)((int)pdVar12 + 0xc);
            in_dr8 = *(ulonglong *)((int)pdVar12 + 0x14);
            in_xd2 = *(double *)((int)pdVar12 + 0x1c);
            pdVar4 = (double *)((int)pdVar12 + 0x24);
          }
          if (cVar42 == '\0') {
            fVar20 = SUB84(in_dr4,0) - SUB84(dVar22,0);
          }
          else {
            fVar20 = SUB84(in_dr4 - dVar22,0);
          }
          if (cVar43 == '\0') {
            dVar22 = (double)CONCAT44((int)((ulonglong)dVar22 >> 0x20),uVar30);
            dVar28 = (double)CONCAT44(*(undefined4 *)pdVar4,fVar20);
          }
          else {
            in_xd2 = (double)CONCAT44(psStack_50,uVar30);
            dVar28 = *pdVar4;
          }
          if (cVar42 == '\0') {
            bVar41 = SUB84(dVar28,0) < SUB84(dVar22,0);
            in_dr4 = (double)CONCAT44(-(float)((ulonglong)dVar28 >> 0x20),SUB84(dVar28,0));
          }
          else {
            bVar41 = dVar28 < dVar22;
            in_dr4 = -dVar28;
          }
          in_xd4 = dVar29;
          if ((bVar41) && (in_xd4 = in_xd2, cVar43 == '\0')) {
            in_dr4 = (double)CONCAT44((int)((ulonglong)in_dr4 >> 0x20),SUB84(dVar22,0));
            in_xd4 = dVar29;
          }
          if (cVar43 == '\0') {
            *(int *)((int)pdStack_58 + 0x1c) = (int)((ulonglong)in_dr4 >> 0x20);
            *(int *)(pdStack_58 + 3) = SUB84(in_dr4,0);
            *(undefined4 *)((int)pdStack_58 + 0x14) = uVar34;
            *(undefined4 *)(pdStack_58 + 2) = uVar36;
            *(int *)((int)pdStack_58 + 0xc) = (int)(in_dr8 >> 0x20);
            *(int *)(pdStack_58 + 1) = (int)uVar31;
            *(int *)((int)pdStack_58 + 4) = (int)((ulonglong)uVar31 >> 0x20);
          }
          else {
            *(double *)((int)pdStack_58 + 0x1c) = in_dr4;
            pdStack_58[3] = in_xd4;
            *(double *)((int)pdStack_58 + 0x14) = dVar32;
            pdStack_58[2] = dVar40;
            *(ulonglong *)((int)pdStack_58 + 0xc) = in_dr8;
            pdStack_58[1] = in_xd6;
            *(undefined8 *)((int)pdStack_58 + 4) = uVar31;
          }
          *(undefined4 *)pdStack_58 = 0xf0000000;
          iVar14 = iVar14 + iVar6 + 1;
          pdStack_58 = pdStack_58 + 4;
          iVar6 = 0;
        }
        if (iVar7 != 0) {
          pdVar4 = (double *)((int)pdVar12 + 4);
          if (cVar43 == '\0') {
            dVar22 = (double)CONCAT44((int)((ulonglong)dVar22 >> 0x20),uVar30);
            in_dr8 = CONCAT44(*(undefined4 *)((int)pdVar12 + 0xc),(int)in_dr8);
            in_dr4 = (double)CONCAT44((int)((ulonglong)in_dr4 >> 0x20),*(undefined4 *)(pdVar12 + 2))
            ;
            pdVar5 = (double *)((int)pdVar12 + 0x14);
          }
          else {
            in_xd6 = *pdVar4;
            pdVar4 = (double *)((int)pdVar12 + 0xc);
            in_xd2 = (double)CONCAT44(psStack_50,uVar30);
            in_dr8 = *(ulonglong *)((int)pdVar12 + 0x14);
            in_xd4 = *(double *)((int)pdVar12 + 0x1c);
            pdVar5 = (double *)((int)pdVar12 + 0x24);
          }
          dVar29 = *pdVar4;
          if (cVar42 == '\0') {
            fVar20 = SUB84(in_dr4,0) + SUB84(dVar22,0);
            bVar41 = fVar20 < SUB84(dVar22,0);
          }
          else {
            fVar20 = SUB84(in_dr4 + dVar22,0);
            bVar41 = in_dr4 + dVar22 < dVar22;
          }
          if (cVar43 == '\0') {
            in_dr4 = (double)CONCAT44(*(undefined4 *)pdVar5,fVar20);
          }
          else {
            in_dr4 = *pdVar5;
          }
          if (bVar41) {
            if (cVar43 == '\0') {
              in_dr4 = (double)CONCAT44((int)((ulonglong)in_dr4 >> 0x20),uVar30);
            }
            else {
              in_xd4 = (double)CONCAT44(psStack_50,uVar30);
            }
          }
          if (cVar43 == '\0') {
            *(int *)((int)pdStack_58 + 0x1c) = (int)((ulonglong)in_dr4 >> 0x20);
            *(int *)(pdStack_58 + 3) = SUB84(in_dr4,0);
            *(undefined4 *)((int)pdStack_58 + 0x14) = uVar34;
            *(undefined4 *)(pdStack_58 + 2) = uVar36;
            *(int *)((int)pdStack_58 + 0xc) = (int)(in_dr8 >> 0x20);
            *(int *)(pdStack_58 + 1) = (int)((ulonglong)dVar29 >> 0x20);
            *(int *)((int)pdStack_58 + 4) = SUB84(dVar29,0);
          }
          else {
            *(double *)((int)pdStack_58 + 0x1c) = in_dr4;
            pdStack_58[3] = in_xd4;
            *(double *)((int)pdStack_58 + 0x14) = dVar32;
            pdStack_58[2] = dVar40;
            *(ulonglong *)((int)pdStack_58 + 0xc) = in_dr8;
            pdStack_58[1] = dVar29;
            *(double *)((int)pdStack_58 + 4) = in_xd6;
          }
          *(undefined4 *)pdStack_58 = 0xf0000000;
          iVar14 = iVar14 + iVar7 + 1;
          pdStack_58 = pdStack_58 + 4;
          iVar7 = 0;
        }
        if (cVar43 == '\0') {
          fVar20 = *(float *)pdVar2;
        }
        else {
          fVar20 = (float)((ulonglong)*pdVar2 >> 0x20);
        }
        dVar22 = (double)CONCAT44(fVar20,0x3f800000);
        if (cVar42 != '\0' || fVar20 <= 1.0) {
          if (cVar43 == '\0') {
            dVar22 = (double)CONCAT44(*(undefined4 *)pdVar12,0x3f800000);
          }
          else {
            dVar22 = *pdVar12;
          }
          if (cVar42 != '\0' || (float)((ulonglong)dVar22 >> 0x20) <= SUB84(dVar22,0)) {
            if (cVar43 == '\0') {
              fVar20 = *(float *)pdVar10;
            }
            else {
              fVar20 = (float)((ulonglong)*pdVar10 >> 0x20);
            }
            dVar22 = (double)CONCAT44(fVar20,0x3f800000);
            if (cVar42 != '\0' || fVar20 <= 1.0) goto LAB_8c231518;
          }
        }
        if (cVar43 == '\0') {
          in_dr4 = (double)CONCAT44(uVar30,SUB84(dVar38,0));
        }
        else {
          in_dr4 = (double)CONCAT44(psStack_50,uVar30);
          in_xd4 = in_xd12;
        }
        pdStack_58 = (double *)FUN_8c2319cc(pdVar2,pdVar12,pdVar10,pdStack_58);
      }
LAB_8c231518:
      psStack_50 = (short *)((int)psStack_50 + iStack_38);
      if (cVar43 == '\0') {
        dVar29 = (double)CONCAT44((int)((ulonglong)dVar32 >> 0x20),uStack_3c);
        in_xd14 = dVar40;
        in_dr10 = (double)CONCAT44(SUB84(dVar32,0),SUB84(in_dr10,0));
      }
      else {
        in_xd14 = (double)CONCAT44(iStack_38,uStack_3c);
        dVar29 = dVar32;
        in_dr10 = dVar40;
      }
      iVar9 = iVar9 + -1;
      dVar38 = (double)CONCAT44((int)((ulonglong)dVar38 >> 0x20),-SUB84(dVar38,0));
      if (cVar43 == '\0') {
        in_dr8 = (ulonglong)dVar29 >> 0x20;
        dVar32 = (double)CONCAT44(uStack_40,SUB84(dVar29,0));
      }
      else {
        dVar32 = (double)CONCAT44(uStack_3c,uStack_40);
        in_xd8 = dVar29;
      }
      pdVar2 = pdVar12;
      pdVar12 = pdVar10;
      dVar40 = in_xd14;
    } while (iVar9 != 0);
    if ((iVar7 != 0) || (iVar6 != 0)) {
      if (cVar43 == '\0') {
        in_dr8 = CONCAT44(*(undefined4 *)((int)pdVar10 + 4),(int)in_dr8);
        pdVar10 = pdVar10 + 1;
      }
      else {
        in_dr8 = *(ulonglong *)((int)pdVar10 + 4);
        pdVar10 = (double *)((int)pdVar10 + 0xc);
      }
      if (cVar43 == '\0') {
        dVar32 = (double)CONCAT44(*(undefined4 *)pdVar10,*(undefined4 *)((int)pdVar10 + 4));
        pdVar10 = pdVar10 + 1;
      }
      else {
        dVar32 = *pdVar10;
        in_xd6 = pdVar10[1];
        pdVar10 = pdVar10 + 2;
      }
      uVar35 = (undefined4)((ulonglong)dVar22 >> 0x20);
      dVar40 = in_xd4;
      if (iVar7 == 0) {
        if (cVar43 == '\0') {
          dVar22 = (double)CONCAT44(uVar35,*(undefined4 *)pdVar10);
          dVar29 = (double)CONCAT44(*(undefined4 *)((int)pdVar10 + 4),uVar30);
        }
        else {
          in_xd2 = *pdVar10;
          dVar40 = (double)CONCAT44(psStack_50,uVar30);
          dVar29 = pdVar10[1];
        }
        iVar14 = iVar14 + iVar6 + 1;
        if (cVar42 == '\0') {
          in_dr4 = (double)CONCAT44(-(float)((ulonglong)dVar29 >> 0x20),
                                    SUB84(dVar29,0) - SUB84(dVar22,0));
        }
        else {
          in_dr4 = -(dVar29 - dVar22);
        }
      }
      else {
        if (cVar43 == '\0') {
          dVar22 = (double)CONCAT44(uVar35,uVar30);
        }
        else {
          dVar40 = *pdVar10;
          pdVar10 = pdVar10 + 1;
          in_xd2 = (double)CONCAT44(psStack_50,uVar30);
        }
        dVar29 = *pdVar10;
        if (cVar42 == '\0') {
          in_dr4 = (double)CONCAT44((int)((ulonglong)dVar29 >> 0x20),
                                    SUB84(dVar29,0) + SUB84(dVar22,0));
        }
        else {
          in_dr4 = dVar29 + dVar22;
        }
        iVar14 = iVar14 + iVar7 + 1;
      }
      if (cVar43 == '\0') {
        dVar22 = (double)CONCAT44((int)((ulonglong)dVar22 >> 0x20),uVar30);
      }
      else {
        in_xd2 = (double)CONCAT44(psStack_50,uVar30);
      }
      if (cVar42 == '\0') {
        bVar41 = SUB84(in_dr4,0) < SUB84(dVar22,0);
      }
      else {
        bVar41 = in_dr4 < dVar22;
      }
      in_xd4 = dVar40;
      if ((bVar41) && (in_xd4 = in_xd2, cVar43 == '\0')) {
        in_dr4 = (double)CONCAT44((int)((ulonglong)in_dr4 >> 0x20),SUB84(dVar22,0));
        in_xd4 = dVar40;
      }
      if (cVar43 == '\0') {
        *(int *)((int)pdStack_58 + 0x1c) = (int)((ulonglong)in_dr4 >> 0x20);
        *(int *)(pdStack_58 + 3) = SUB84(in_dr4,0);
        *(undefined4 *)((int)pdStack_58 + 0x14) = uStack_40;
        dVar22 = (double)(ulonglong)uStack_3c;
        *(uint *)(pdStack_58 + 2) = uStack_3c;
        *(int *)((int)pdStack_58 + 0xc) = SUB84(dVar32,0);
        *(int *)(pdStack_58 + 1) = (int)((ulonglong)dVar32 >> 0x20);
        *(int *)((int)pdStack_58 + 4) = (int)(in_dr8 >> 0x20);
      }
      else {
        *(double *)((int)pdStack_58 + 0x1c) = in_dr4;
        pdStack_58[3] = in_xd4;
        *(ulonglong *)((int)pdStack_58 + 0x14) = CONCAT44(uStack_3c,uStack_40);
        in_xd2 = (double)CONCAT44(iStack_38,uStack_3c);
        pdStack_58[2] = in_xd2;
        *(double *)((int)pdStack_58 + 0xc) = in_xd6;
        pdStack_58[1] = dVar32;
        *(ulonglong *)((int)pdStack_58 + 4) = in_dr8;
      }
      *(undefined4 *)pdStack_58 = 0xf0000000;
      pdStack_58 = pdStack_58 + 4;
    }
    uStack_44 = uStack_44 - 1;
    if (uStack_44 == 0) {
      _DAT_8c4aa520 = _DAT_8c4aa520 + iVar14;
      _DAT_8c4aa51c = _DAT_8c4aa51c + iVar15;
      return pdStack_58;
    }
  } while( true );
}

__asm__(".globl _FUN_8c230f70\n.set _FUN_8c230f70, _FUN_8c230f70_def\n");
