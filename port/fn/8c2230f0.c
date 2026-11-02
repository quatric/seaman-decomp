#include "../decls.h"
undefined8 * FUN_8c2230f0_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined8 *ar7)

{
  int iVar1;
  double *pdVar2;
  undefined8 *puVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  int *piVar9;
  int iVar10;
  undefined8 *puVar11;
  float fVar12;
  double in_dr0;
  double dVar13;
  longlong lVar14;
  float fVar15;
  undefined4 uVar16;
  float fVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  double dVar20;
  double dVar21;
  undefined4 uVar24;
  double dVar22;
  ulonglong uVar23;
  undefined4 uVar25;
  double in_dr4;
  longlong in_dr6;
  uint uVar26;
  undefined4 uVar27;
  double in_dr8;
  float fVar29;
  undefined8 uVar28;
  double in_dr10;
  double dVar31;
  float fVar33;
  undefined8 uVar32;
  double in_dr12;
  double dVar35;
  undefined4 in_fr15;
  double dVar36;
  double in_xd2;
  longlong in_xd4;
  undefined8 uVar37;
  double in_xd6;
  double in_xd8;
  undefined8 uVar38;
  double in_xd12;
  char in_FPSCR_PR = 0;
  char in_FPSCR_SZ = 0;
  int aiStack_48 [3];
  undefined1 auStack_3c [16];
  undefined8 auStack_2c [2];
  undefined4 uVar30;
  undefined4 uVar34;
  
  if (in_FPSCR_SZ == '\0') {
    puVar11 = auStack_2c;
    auStack_2c[0] = CONCAT44(SUB84(in_dr12,0),(int)((ulonglong)in_dr12 >> 0x20));
  }
  else {
    puVar11 = (undefined8 *)auStack_3c;
  }
  if ((_DAT_8c4aa4f0 & 0x10000) == 0) {
    if (in_FPSCR_SZ == '\0') {
      dVar22 = (double)CONCAT44(_DAT_8c4aa4e0,_DAT_8c4aa4dc);
      in_dr10 = (double)CONCAT44((int)((ulonglong)in_dr10 >> 0x20),_DAT_8c4aa4a8);
      in_fr15 = _DAT_8c4aa4a8;
    }
    else {
      in_xd2 = (double)CONCAT44(_DAT_8c4aa4e0,_DAT_8c4aa4dc);
      dVar22 = (double)CONCAT44(_DAT_8c4aa4e4,_DAT_8c4aa4e0);
    }
    if (in_FPSCR_PR == '\0') {
      dVar31 = (double)CONCAT44((int)((ulonglong)in_dr10 >> 0x20),SUB84(in_dr10,0) * SUB84(dVar22,0)
                               );
    }
    else {
      dVar31 = in_dr10 * dVar22;
    }
    puVar8 = (undefined4 *)((int)puVar11 + -0xc);
    if (in_FPSCR_SZ == '\0') {
      dVar36 = (double)CONCAT44(_DAT_8c4aa4b4,in_fr15);
    }
    else {
      dVar36 = (double)CONCAT44(_DAT_8c4aa4b8,_DAT_8c4aa4b4);
    }
    if (in_FPSCR_PR == '\0') {
      dVar36 = (double)CONCAT44((int)((ulonglong)dVar36 >> 0x20),
                                SUB84(dVar36,0) * (float)((ulonglong)dVar22 >> 0x20));
    }
    else {
      dVar36 = dVar36 * dVar22;
    }
    if (in_FPSCR_SZ == '\0') {
      in_dr12 = (double)(ulonglong)_DAT_8c4aa4b8;
    }
    else {
      in_xd12 = (double)CONCAT44(_DAT_8c4aa4bc,_DAT_8c4aa4b8);
    }
    *puVar8 = ar4;
    *(undefined4 *)(puVar11 + -1) = ar5;
    *(undefined4 *)((int)puVar11 + -4) = ar6;
    iVar10 = 0;
    iVar1 = 0;
    iVar5 = 2;
    while( true ) {
      iVar4 = iVar1;
      uVar26 = (uint)((ulonglong)in_dr6 >> 0x20);
      fVar33 = (float)((ulonglong)dVar31 >> 0x20);
      fVar17 = (float)((ulonglong)in_dr4 >> 0x20);
      uVar25 = SUB84(in_dr8,0);
      fVar29 = (float)((ulonglong)in_dr8 >> 0x20);
      if (2 < iVar4) break;
      puVar3 = (undefined8 *)puVar8[iVar5];
      if (in_FPSCR_SZ == '\0') {
        uVar18 = CONCAT44(*(undefined4 *)puVar3,0x3f800000);
      }
      else {
        uVar18 = *puVar3;
      }
      puVar3 = (undefined8 *)puVar8[iVar4];
      if (in_FPSCR_SZ == '\0') {
        uVar19 = CONCAT44(*(undefined4 *)puVar3,(float)uVar18);
      }
      else {
        uVar19 = *puVar3;
      }
      fVar15 = (float)uVar19;
      if (((in_FPSCR_PR == '\0' && (float)uVar18 < (float)((ulonglong)uVar18 >> 0x20)) ^ 1) !=
          -((in_FPSCR_PR == '\0' && fVar15 < (float)((ulonglong)uVar19 >> 0x20)) - 1)) {
        pdVar2 = (double *)puVar8[iVar5];
        *(double **)(puVar11 + -0x16) = pdVar2;
        if (in_FPSCR_SZ == '\0') {
          dVar22 = (double)CONCAT44(*(undefined4 *)pdVar2,SUB84(in_dr12,0));
        }
        else {
          dVar22 = *pdVar2;
        }
        puVar7 = (undefined4 *)puVar8[iVar4];
        fVar12 = (float)((ulonglong)dVar22 >> 0x20);
        dVar21 = dVar22;
        if (in_FPSCR_SZ == '\0') {
          in_dr0 = (double)CONCAT44((int)((ulonglong)in_dr0 >> 0x20),*puVar7);
          dVar21 = in_xd2;
          fVar15 = fVar12;
        }
        dVar20 = (double)CONCAT44(0x3f800000,-fVar15);
        if (in_FPSCR_PR == '\0') {
          dVar20 = (double)CONCAT44(0x3f800000,-fVar15 + 1.0);
          dVar13 = (double)CONCAT44((int)((ulonglong)in_dr0 >> 0x20),SUB84(in_dr0,0) - fVar12);
        }
        else {
          dVar20 = dVar20 + dVar20;
          dVar13 = in_dr0 - dVar22;
        }
        fVar15 = SUB84(dVar20,0);
        dVar35 = dVar21;
        if (in_FPSCR_SZ == '\0') {
          dVar35 = (double)CONCAT44(fVar15,SUB84(dVar22,0));
        }
        if (in_FPSCR_PR == '\0') {
          in_dr12 = (double)CONCAT44((float)((ulonglong)dVar35 >> 0x20) / SUB84(dVar13,0),
                                     SUB84(dVar35,0));
        }
        else {
          in_dr12 = dVar35 / dVar13;
        }
        if (in_FPSCR_SZ == '\0') {
          fVar15 = *(float *)(pdVar2 + 4);
          dVar20 = (double)CONCAT44((int)((ulonglong)dVar20 >> 0x20),fVar15);
          *(float *)(puVar11 + -0x11) = fVar15;
          dVar22 = (double)CONCAT44(fVar15,puVar7[8]);
        }
        else {
          dVar22 = pdVar2[4];
          puVar11[-0x11] = dVar22;
          dVar21 = dVar22;
        }
        if (in_FPSCR_PR == '\0') {
          fVar12 = SUB84(dVar22,0) - (float)((ulonglong)dVar22 >> 0x20);
        }
        else {
          fVar12 = SUB84(dVar22 - dVar22,0);
        }
        uVar24 = (undefined4)((ulonglong)in_dr12 >> 0x20);
        dVar22 = in_dr12;
        if (in_FPSCR_SZ == '\0') {
          dVar22 = (double)CONCAT44(uVar24,fVar12);
        }
        if (in_FPSCR_PR == '\0') {
          dVar20 = (double)CONCAT44((int)((ulonglong)dVar20 >> 0x20),
                                    (float)((ulonglong)dVar22 >> 0x20) * SUB84(dVar22,0) + fVar15);
        }
        fVar15 = SUB84(dVar20,0);
        if (in_FPSCR_SZ == '\0') {
          *(float *)(puVar11 + -0x10) = fVar15;
        }
        else {
          puVar11[-0x10] = dVar21;
        }
        if (in_FPSCR_SZ == '\0') {
          fVar15 = *(float *)(*(int *)(puVar11 + -0x16) + 0x24);
          dVar20 = (double)CONCAT44((int)((ulonglong)dVar20 >> 0x20),fVar15);
          *(float *)(puVar11 + -0x13) = fVar15;
          dVar22 = (double)CONCAT44(fVar15,puVar7[9]);
        }
        else {
          dVar22 = *(double *)(*(int *)(puVar11 + -0x16) + 0x24);
          puVar11[-0x13] = dVar22;
          dVar21 = dVar22;
        }
        if (in_FPSCR_PR == '\0') {
          fVar12 = SUB84(dVar22,0) - (float)((ulonglong)dVar22 >> 0x20);
        }
        else {
          fVar12 = SUB84(dVar22 - dVar22,0);
        }
        dVar22 = in_dr12;
        if (in_FPSCR_SZ == '\0') {
          dVar22 = (double)CONCAT44(uVar24,fVar12);
        }
        if (in_FPSCR_PR == '\0') {
          dVar20 = (double)CONCAT44((int)((ulonglong)dVar20 >> 0x20),
                                    (float)((ulonglong)dVar22 >> 0x20) * SUB84(dVar22,0) + fVar15);
        }
        pdVar2 = (double *)((int)puVar11 + iVar10 * 0x1c + -0x7c);
        if (in_FPSCR_SZ == '\0') {
          *(int *)((int)puVar11 + -0x84) = SUB84(dVar20,0);
          uVar18 = CONCAT44(*(undefined4 *)(puVar11 + -0x10),SUB84(dVar22,0));
          dVar20 = (double)CONCAT44((int)((ulonglong)dVar20 >> 0x20),
                                    (int)((ulonglong)dVar36 >> 0x20));
        }
        else {
          *(double *)((int)puVar11 + -0x84) = dVar21;
          uVar18 = puVar11[-0x10];
          dVar21 = dVar36;
        }
        if (in_FPSCR_PR == '\0') {
          dVar20 = (double)CONCAT44((int)((ulonglong)dVar20 >> 0x20),
                                    (float)((ulonglong)uVar18 >> 0x20) * SUB84(dVar31,0) +
                                    SUB84(dVar20,0));
        }
        if (in_FPSCR_SZ == '\0') {
          *(int *)pdVar2 = SUB84(dVar20,0);
          in_dr0 = (double)CONCAT44(*(undefined4 *)((int)puVar11 + -0x84),(int)uVar18);
          dVar20 = (double)CONCAT44((int)((ulonglong)dVar20 >> 0x20),SUB84(in_dr12,0));
          in_xd2 = dVar21;
        }
        else {
          *pdVar2 = dVar21;
          in_dr0 = *(double *)((int)puVar11 + -0x84);
          in_xd2 = in_xd12;
        }
        if (in_FPSCR_PR == '\0') {
          dVar20 = (double)CONCAT44((int)((ulonglong)dVar20 >> 0x20),
                                    (float)((ulonglong)in_dr0 >> 0x20) * SUB84(dVar36,0) +
                                    SUB84(dVar20,0));
        }
        uVar16 = SUB84(dVar20,0);
        if (in_FPSCR_SZ == '\0') {
          *(undefined4 *)((int)pdVar2 + 4) = uVar16;
          *(int *)(pdVar2 + 1) = (int)((ulonglong)dVar20 >> 0x20);
        }
        else {
          *(double *)((int)pdVar2 + 4) = in_xd2;
          pdVar2[1] = dVar20;
        }
        if (DAT_8c277acc == 0) {
          piVar9 = puVar8 + iVar5;
          iVar1 = *piVar9;
          piVar6 = puVar8 + iVar4;
          *(int *)(puVar11 + -0x14) = iVar1;
          if (in_FPSCR_SZ == '\0') {
            uVar16 = *(undefined4 *)(iVar1 + 0x14);
            *(undefined4 *)((int)puVar11 + -0x9c) = uVar16;
          }
          else {
            in_xd2 = *(double *)(iVar1 + 0x14);
            *(double *)((int)puVar11 + -0x9c) = in_xd2;
          }
          if (in_FPSCR_SZ == '\0') {
            dVar21 = (double)CONCAT44(*(undefined4 *)(*piVar6 + 0x14),uVar16);
            dVar22 = (double)CONCAT44(uVar16,SUB84(in_dr0,0));
          }
          else {
            dVar21 = *(double *)(*piVar6 + 0x14);
            dVar22 = in_xd2;
          }
          if (in_FPSCR_PR == '\0') {
            dVar21 = (double)CONCAT44((float)((ulonglong)dVar21 >> 0x20) -
                                      (float)((ulonglong)dVar22 >> 0x20),SUB84(dVar21,0));
          }
          else {
            dVar21 = dVar21 - dVar22;
          }
          dVar20 = in_dr12;
          if (in_FPSCR_SZ == '\0') {
            dVar20 = (double)CONCAT44(uVar24,SUB84(dVar22,0));
          }
          if (in_FPSCR_PR == '\0') {
            dVar21 = (double)(ulonglong)
                             (uint)((float)((ulonglong)dVar20 >> 0x20) *
                                    (float)((ulonglong)dVar21 >> 0x20) + SUB84(dVar21,0));
          }
          dVar22 = in_dr8;
          lVar14 = in_xd4;
          if (in_FPSCR_SZ == '\0') {
            dVar22 = (double)CONCAT44(fVar29,SUB84(dVar21,0));
            lVar14 = CONCAT44(SUB84(in_dr4,0),SUB84(dVar20,0));
          }
          if (in_FPSCR_PR == '\0') {
            dVar22 = (double)CONCAT44((float)((ulonglong)lVar14 >> 0x20) * SUB84(dVar22,0) +
                                      (float)((ulonglong)dVar22 >> 0x20),SUB84(dVar22,0));
          }
          if (in_FPSCR_SZ == '\0') {
            *(int *)((int)pdVar2 + 0xc) = (int)((ulonglong)dVar22 >> 0x20);
          }
          else {
            *(double *)((int)pdVar2 + 0xc) = dVar22;
          }
          iVar1 = *piVar9;
          *(int *)((int)puVar11 + -0xa4) = iVar1;
          if (in_FPSCR_SZ == '\0') {
            uVar16 = *(undefined4 *)(iVar1 + 0x18);
            dVar21 = (double)CONCAT44(uVar16,(int)lVar14);
            *(undefined4 *)((int)puVar11 + -0x94) = uVar16;
          }
          else {
            dVar21 = *(double *)(iVar1 + 0x18);
            uVar16 = SUB84(dVar22,0);
            *(double *)((int)puVar11 + -0x94) = dVar21;
            in_xd2 = dVar21;
          }
          if (in_FPSCR_SZ == '\0') {
            dVar22 = (double)CONCAT44(*(undefined4 *)(*piVar6 + 0x18),uVar16);
          }
          else {
            dVar22 = *(double *)(*piVar6 + 0x18);
          }
          if (in_FPSCR_PR == '\0') {
            dVar22 = (double)CONCAT44((float)((ulonglong)dVar22 >> 0x20) -
                                      (float)((ulonglong)dVar21 >> 0x20),SUB84(dVar22,0));
          }
          else {
            dVar22 = dVar22 - dVar21;
          }
          dVar20 = in_dr12;
          if (in_FPSCR_SZ == '\0') {
            dVar20 = (double)CONCAT44(uVar24,SUB84(dVar21,0));
          }
          if (in_FPSCR_PR == '\0') {
            dVar22 = (double)(ulonglong)
                             (uint)((float)((ulonglong)dVar20 >> 0x20) *
                                    (float)((ulonglong)dVar22 >> 0x20) + SUB84(dVar22,0));
          }
          dVar21 = in_xd8;
          lVar14 = in_dr6;
          if (in_FPSCR_SZ == '\0') {
            dVar21 = (double)CONCAT44(uVar25,SUB84(dVar22,0));
            lVar14 = CONCAT44(uVar26,SUB84(dVar20,0));
          }
          if (in_FPSCR_PR == '\0') {
            dVar21 = (double)CONCAT44((float)((ulonglong)lVar14 >> 0x20) * SUB84(dVar21,0) +
                                      (float)((ulonglong)dVar21 >> 0x20),SUB84(dVar21,0));
          }
          if (in_FPSCR_SZ == '\0') {
            *(int *)(pdVar2 + 2) = (int)((ulonglong)dVar21 >> 0x20);
          }
          else {
            pdVar2[2] = dVar21;
          }
          iVar1 = *piVar9;
          *(int *)(puVar11 + -0x15) = iVar1;
          if (in_FPSCR_SZ == '\0') {
            uVar16 = *(undefined4 *)(iVar1 + 0x1c);
            *(undefined4 *)(puVar11 + -0x12) = uVar16;
          }
          else {
            in_xd2 = *(double *)(iVar1 + 0x1c);
            uVar16 = SUB84(dVar21,0);
            puVar11[-0x12] = in_xd2;
          }
          if (in_FPSCR_SZ == '\0') {
            dVar21 = (double)CONCAT44(*(undefined4 *)(*piVar6 + 0x1c),uVar16);
            dVar22 = (double)CONCAT44(uVar16,(int)lVar14);
          }
          else {
            dVar21 = *(double *)(*piVar6 + 0x1c);
            dVar22 = in_xd2;
          }
          if (in_FPSCR_PR == '\0') {
            dVar21 = (double)CONCAT44((float)((ulonglong)dVar21 >> 0x20) -
                                      (float)((ulonglong)dVar22 >> 0x20),SUB84(dVar21,0));
          }
          else {
            dVar21 = dVar21 - dVar22;
          }
          dVar20 = in_dr12;
          if (in_FPSCR_SZ == '\0') {
            dVar20 = (double)CONCAT44(uVar24,SUB84(dVar22,0));
          }
          if (in_FPSCR_PR == '\0') {
            dVar21 = (double)(ulonglong)
                             (uint)((float)((ulonglong)dVar20 >> 0x20) *
                                    (float)((ulonglong)dVar21 >> 0x20) + SUB84(dVar21,0));
          }
          dVar13 = dVar31;
          dVar22 = in_xd6;
          if (in_FPSCR_SZ == '\0') {
            dVar13 = (double)CONCAT44(fVar33,SUB84(dVar21,0));
            dVar22 = (double)CONCAT44((int)in_dr6,SUB84(dVar20,0));
          }
          if (in_FPSCR_PR == '\0') {
            dVar13 = (double)CONCAT44((float)((ulonglong)dVar22 >> 0x20) * SUB84(dVar13,0) +
                                      (float)((ulonglong)dVar13 >> 0x20),SUB84(dVar13,0));
          }
          if (in_FPSCR_SZ == '\0') {
            *(int *)((int)pdVar2 + 0x14) = (int)((ulonglong)dVar13 >> 0x20);
          }
          else {
            *(double *)((int)pdVar2 + 0x14) = dVar13;
          }
          iVar1 = *piVar9;
          *(int *)((int)puVar11 + -0xac) = iVar1;
          if (in_FPSCR_SZ == '\0') {
            uVar16 = *(undefined4 *)(iVar1 + 0x10);
            dVar22 = (double)CONCAT44(uVar16,SUB84(dVar22,0));
            *(undefined4 *)((int)puVar11 + -0x8c) = uVar16;
          }
          else {
            dVar22 = *(double *)(iVar1 + 0x10);
            uVar16 = SUB84(dVar13,0);
            *(double *)((int)puVar11 + -0x8c) = dVar22;
            in_xd2 = dVar22;
          }
          if (in_FPSCR_SZ == '\0') {
            dVar21 = (double)CONCAT44(*(undefined4 *)(*piVar6 + 0x10),uVar16);
          }
          else {
            dVar21 = *(double *)(*piVar6 + 0x10);
          }
          if (in_FPSCR_PR == '\0') {
            dVar21 = (double)CONCAT44((float)((ulonglong)dVar21 >> 0x20) -
                                      (float)((ulonglong)dVar22 >> 0x20),SUB84(dVar21,0));
          }
          else {
            dVar21 = dVar21 - dVar22;
          }
          in_dr0 = in_dr12;
          if (in_FPSCR_SZ == '\0') {
            in_dr0 = (double)CONCAT44(uVar24,SUB84(dVar22,0));
          }
          if (in_FPSCR_PR == '\0') {
            fVar15 = ((float)((ulonglong)in_dr0 >> 0x20) * (float)((ulonglong)dVar21 >> 0x20) +
                     SUB84(dVar21,0)) * fVar17;
          }
          else {
            fVar15 = SUB84(dVar21 * in_dr4,0);
          }
          if (in_FPSCR_SZ == '\0') {
            *(float *)(pdVar2 + 3) = fVar15;
          }
          else {
            pdVar2[3] = in_xd2;
          }
        }
        iVar10 = iVar10 + 1;
      }
      piVar6 = puVar8 + iVar4;
      if (in_FPSCR_SZ == '\0') {
        uVar18 = CONCAT44(*(undefined4 *)*piVar6,0x3f800000);
      }
      else {
        uVar18 = *(undefined8 *)*piVar6;
      }
      if (in_FPSCR_PR == '\0' && (float)uVar18 < (float)((ulonglong)uVar18 >> 0x20)) {
        if (in_FPSCR_SZ == '\0') {
          uVar18 = CONCAT44(*(undefined4 *)(*piVar6 + 4),(float)uVar18);
        }
        else {
          uVar18 = *(undefined8 *)(*piVar6 + 4);
        }
        puVar3 = (undefined8 *)((int)puVar11 + iVar10 * 0x1c + -0x7c);
        if (in_FPSCR_SZ == '\0') {
          *(int *)puVar3 = (int)((ulonglong)uVar18 >> 0x20);
        }
        else {
          *puVar3 = uVar18;
        }
        if (in_FPSCR_SZ == '\0') {
          uVar24 = *(undefined4 *)(*piVar6 + 8);
          uVar18 = CONCAT44(uVar24,(int)uVar18);
          *(undefined4 *)((int)puVar3 + 4) = uVar24;
        }
        else {
          uVar18 = *(undefined8 *)(*piVar6 + 8);
          *(undefined8 *)((int)puVar3 + 4) = uVar18;
        }
        if (in_FPSCR_SZ == '\0') {
          uVar24 = *(undefined4 *)(*piVar6 + 0xc);
          uVar18 = CONCAT44(uVar24,(int)uVar18);
          *(undefined4 *)(puVar3 + 1) = uVar24;
        }
        else {
          uVar18 = *(undefined8 *)(*piVar6 + 0xc);
          puVar3[1] = uVar18;
        }
        if (DAT_8c277acc == 0) {
          piVar6 = puVar8 + iVar4;
          dVar22 = in_dr8;
          if (in_FPSCR_SZ == '\0') {
            dVar22 = (double)CONCAT44(fVar29,(int)uVar18);
          }
          lVar14 = in_xd4;
          if (in_FPSCR_SZ == '\0') {
            lVar14 = CONCAT44(SUB84(in_dr4,0),*(undefined4 *)(*piVar6 + 0x14));
          }
          if (in_FPSCR_PR == '\0') {
            dVar22 = (double)CONCAT44((float)((ulonglong)lVar14 >> 0x20) * (float)lVar14 +
                                      (float)((ulonglong)dVar22 >> 0x20),SUB84(dVar22,0));
          }
          if (in_FPSCR_SZ == '\0') {
            *(int *)((int)puVar3 + 0xc) = (int)((ulonglong)dVar22 >> 0x20);
            lVar14 = CONCAT44(uVar26,(float)lVar14);
          }
          else {
            *(double *)((int)puVar3 + 0xc) = dVar22;
            lVar14 = in_dr6;
          }
          dVar21 = in_xd8;
          if (in_FPSCR_SZ == '\0') {
            lVar14 = CONCAT44((int)((ulonglong)lVar14 >> 0x20),*(undefined4 *)(*piVar6 + 0x18));
            dVar21 = (double)CONCAT44(uVar25,SUB84(dVar22,0));
          }
          if (in_FPSCR_PR == '\0') {
            dVar21 = (double)CONCAT44((float)((ulonglong)lVar14 >> 0x20) * (float)lVar14 +
                                      (float)((ulonglong)dVar21 >> 0x20),SUB84(dVar21,0));
          }
          if (in_FPSCR_SZ == '\0') {
            *(int *)(puVar3 + 2) = (int)((ulonglong)dVar21 >> 0x20);
            in_dr0 = (double)CONCAT44((int)in_dr6,(float)lVar14);
          }
          else {
            puVar3[2] = dVar21;
            in_dr0 = in_xd6;
          }
          dVar22 = dVar31;
          if (in_FPSCR_SZ == '\0') {
            in_dr0 = (double)CONCAT44((int)((ulonglong)in_dr0 >> 0x20),
                                      *(undefined4 *)(*piVar6 + 0x1c));
            dVar22 = (double)CONCAT44(fVar33,SUB84(dVar21,0));
          }
          if (in_FPSCR_PR == '\0') {
            dVar22 = (double)CONCAT44((float)((ulonglong)in_dr0 >> 0x20) * SUB84(in_dr0,0) +
                                      (float)((ulonglong)dVar22 >> 0x20),SUB84(dVar22,0));
          }
          if (in_FPSCR_SZ == '\0') {
            *(int *)((int)puVar3 + 0x14) = (int)((ulonglong)dVar22 >> 0x20);
          }
          else {
            *(double *)((int)puVar3 + 0x14) = dVar22;
          }
          if (in_FPSCR_SZ == '\0') {
            dVar22 = (double)CONCAT44(*(undefined4 *)(*piVar6 + 0x10),SUB84(dVar22,0));
          }
          else {
            dVar22 = *(double *)(*piVar6 + 0x10);
          }
          if (in_FPSCR_PR == '\0') {
            dVar22 = (double)CONCAT44((float)((ulonglong)dVar22 >> 0x20) * fVar17,SUB84(dVar22,0));
          }
          else {
            dVar22 = dVar22 * in_dr4;
          }
          if (in_FPSCR_SZ == '\0') {
            *(int *)(puVar3 + 3) = (int)((ulonglong)dVar22 >> 0x20);
          }
          else {
            puVar3[3] = dVar22;
          }
        }
        iVar10 = iVar10 + 1;
      }
      iVar1 = iVar4 + 1;
      iVar5 = iVar4;
    }
    if (DAT_8c277acc != 0) {
      piVar6 = (int *)((int)puVar11 + -4);
      if (in_FPSCR_SZ == '\0') {
        uVar23 = CONCAT44(*(undefined4 *)(*piVar6 + 0x14),fVar29);
        lVar14 = (longlong)in_dr4 << 0x20;
      }
      else {
        uVar23 = *(ulonglong *)(*piVar6 + 0x14);
        in_xd2 = in_dr8;
        lVar14 = in_xd4;
      }
      if (in_FPSCR_PR == '\0') {
        uVar23 = (ulonglong)
                 (uint)((float)((ulonglong)lVar14 >> 0x20) * (float)(uVar23 >> 0x20) + (float)uVar23
                       );
      }
      if (in_FPSCR_SZ == '\0') {
        *(int *)(puVar11 + -7) = (int)uVar23;
        lVar14 = (ulonglong)uVar26 << 0x20;
      }
      else {
        puVar11[-7] = in_xd2;
        lVar14 = in_dr6;
      }
      if (in_FPSCR_SZ == '\0') {
        uVar23 = CONCAT44(*(undefined4 *)(*piVar6 + 0x18),uVar25);
      }
      else {
        uVar23 = *(ulonglong *)(*piVar6 + 0x18);
        in_xd2 = in_xd8;
      }
      if (in_FPSCR_PR == '\0') {
        uVar23 = (ulonglong)
                 (uint)((float)((ulonglong)lVar14 >> 0x20) * (float)(uVar23 >> 0x20) + (float)uVar23
                       );
      }
      if (in_FPSCR_SZ == '\0') {
        *(int *)((int)puVar11 + -0x34) = (int)uVar23;
        dVar22 = (double)(in_dr6 << 0x20);
      }
      else {
        *(double *)((int)puVar11 + -0x34) = in_xd2;
        dVar22 = in_xd6;
      }
      if (in_FPSCR_SZ == '\0') {
        dVar36 = (double)CONCAT44(*(undefined4 *)(*piVar6 + 0x1c),fVar33);
      }
      else {
        dVar36 = *(double *)(*piVar6 + 0x1c);
        in_xd2 = dVar31;
      }
      if (in_FPSCR_PR == '\0') {
        fVar15 = (float)((ulonglong)dVar36 >> 0x20);
        dVar36 = (double)CONCAT44(fVar15,(float)((ulonglong)dVar22 >> 0x20) * fVar15 +
                                         SUB84(dVar36,0));
      }
      if (in_FPSCR_SZ == '\0') {
        *(int *)(puVar11 + -6) = SUB84(dVar36,0);
      }
      else {
        puVar11[-6] = in_xd2;
      }
      if (in_FPSCR_SZ == '\0') {
        dVar36 = (double)CONCAT44((int)((ulonglong)dVar36 >> 0x20),*(undefined4 *)(*piVar6 + 0x10));
      }
      else {
        in_xd2 = *(double *)(*piVar6 + 0x10);
      }
      if (in_FPSCR_PR == '\0') {
        dVar36 = (double)CONCAT44((int)((ulonglong)dVar36 >> 0x20),SUB84(dVar36,0) * fVar17);
      }
      else {
        dVar36 = dVar36 * in_dr4;
      }
      if (in_FPSCR_SZ == '\0') {
        *(int *)((int)puVar11 + -0x2c) = SUB84(dVar36,0);
      }
      else {
        *(double *)((int)puVar11 + -0x2c) = in_xd2;
      }
      if (iVar10 != 3) {
        piVar6 = (int *)((int)puVar11 + -4);
        if (in_FPSCR_SZ == '\0') {
          in_xd4 = (longlong)in_dr4 << 0x20;
          dVar36 = (double)CONCAT44((int)((ulonglong)dVar36 >> 0x20),*(undefined4 *)(*piVar6 + 0x14)
                                   );
        }
        else {
          in_xd2 = *(double *)(*piVar6 + 0x14);
        }
        if (in_FPSCR_PR == '\0') {
          in_dr8 = (double)CONCAT44((float)((ulonglong)in_xd4 >> 0x20) * SUB84(dVar36,0) + fVar29,
                                    uVar25);
        }
        if (in_FPSCR_SZ == '\0') {
          *(int *)((int)puVar11 + -0x1c) = (int)((ulonglong)in_dr8 >> 0x20);
          lVar14 = (ulonglong)uVar26 << 0x20;
        }
        else {
          *(double *)((int)puVar11 + -0x1c) = in_dr8;
          lVar14 = in_dr6;
        }
        if (in_FPSCR_SZ == '\0') {
          dVar36 = (double)CONCAT44((int)((ulonglong)dVar36 >> 0x20),*(undefined4 *)(*piVar6 + 0x18)
                                   );
        }
        else {
          in_xd2 = *(double *)(*piVar6 + 0x18);
        }
        if (in_FPSCR_PR == '\0') {
          in_dr8 = (double)(ulonglong)
                           (uint)((float)((ulonglong)lVar14 >> 0x20) * SUB84(dVar36,0) +
                                 SUB84(in_dr8,0));
        }
        if (in_FPSCR_SZ == '\0') {
          in_xd6 = (double)(in_dr6 << 0x20);
          *(int *)(puVar11 + -3) = SUB84(in_dr8,0);
        }
        else {
          puVar11[-3] = in_xd8;
        }
        if (in_FPSCR_SZ == '\0') {
          dVar36 = (double)CONCAT44((int)((ulonglong)dVar36 >> 0x20),*(undefined4 *)(*piVar6 + 0x1c)
                                   );
        }
        else {
          in_xd2 = *(double *)(*piVar6 + 0x1c);
        }
        if (in_FPSCR_PR == '\0') {
          dVar31 = (double)CONCAT44((float)((ulonglong)in_xd6 >> 0x20) * SUB84(dVar36,0) + fVar33,
                                    SUB84(dVar31,0));
        }
        if (in_FPSCR_SZ == '\0') {
          *(int *)((int)puVar11 + -0x14) = (int)((ulonglong)dVar31 >> 0x20);
        }
        else {
          *(double *)((int)puVar11 + -0x14) = dVar31;
        }
        if (in_FPSCR_SZ == '\0') {
          dVar36 = (double)CONCAT44((int)((ulonglong)dVar36 >> 0x20),*(undefined4 *)(*piVar6 + 0x10)
                                   );
        }
        else {
          in_xd2 = *(double *)(*piVar6 + 0x10);
        }
        if (in_FPSCR_PR == '\0') {
          fVar17 = SUB84(dVar36,0) * fVar17;
        }
        else {
          fVar17 = SUB84(dVar36 * in_dr4,0);
        }
        if (in_FPSCR_SZ == '\0') {
          *(float *)(puVar11 + -2) = fVar17;
        }
        else {
          puVar11[-2] = in_xd2;
        }
      }
    }
    if (in_FPSCR_SZ == '\0') {
      uVar34 = *(undefined4 *)((int)puVar11 + -0x7c);
      uVar27 = *(undefined4 *)(puVar11 + -0xf);
      uVar30 = *(undefined4 *)((int)puVar11 + -0x74);
      uVar25 = *(undefined4 *)(puVar11 + -0xe);
      uVar16 = *(undefined4 *)((int)puVar11 + -0x6c);
      uVar24 = *(undefined4 *)((int)puVar11 + -100);
      *(undefined4 *)((int)ar7 + 0x1c) = *(undefined4 *)(puVar11 + -0xd);
      *(undefined4 *)(ar7 + 3) = uVar16;
      *(undefined4 *)((int)ar7 + 0x14) = uVar25;
      *(undefined4 *)(ar7 + 2) = uVar24;
      *(undefined4 *)((int)ar7 + 0xc) = uVar30;
      *(undefined4 *)(ar7 + 1) = uVar27;
      puVar3 = (undefined8 *)((int)ar7 + 4);
      *(undefined4 *)puVar3 = uVar34;
    }
    else {
      uVar32 = *(undefined8 *)((int)puVar11 + -0x7c);
      uVar38 = *(undefined8 *)((int)puVar11 + -0x74);
      uVar28 = *(undefined8 *)((int)puVar11 + -0x6c);
      uVar37 = *(undefined8 *)((int)puVar11 + -100);
      uVar19 = *(undefined8 *)((int)puVar11 + -0x5c);
      uVar18 = *(undefined8 *)((int)puVar11 + -0x4c);
      ar7[3] = *(undefined8 *)((int)puVar11 + -0x54);
      ar7[2] = uVar19;
      ar7[1] = uVar37;
      *ar7 = uVar18;
      ar7[-1] = uVar28;
      ar7[-2] = uVar38;
      puVar3 = ar7 + -3;
      *puVar3 = uVar32;
    }
    *(undefined4 *)((int)puVar3 + -4) = 0xe0000000;
    if (in_FPSCR_SZ == '\0') {
      uVar30 = *(undefined4 *)(puVar11 + -0xc);
      uVar27 = *(undefined4 *)((int)puVar11 + -0x5c);
      uVar34 = *(undefined4 *)(puVar11 + -0xb);
      uVar25 = *(undefined4 *)((int)puVar11 + -0x54);
      uVar16 = *(undefined4 *)(puVar11 + -10);
      uVar24 = *(undefined4 *)(puVar11 + -9);
      *(undefined4 *)(puVar3 + 7) = *(undefined4 *)((int)puVar11 + -0x4c);
      *(undefined4 *)((int)puVar3 + 0x34) = uVar16;
      *(undefined4 *)(puVar3 + 6) = uVar25;
      *(undefined4 *)((int)puVar3 + 0x2c) = uVar24;
      *(undefined4 *)(puVar3 + 5) = uVar34;
      *(undefined4 *)((int)puVar3 + 0x24) = uVar27;
      puVar3 = puVar3 + 4;
      *(undefined4 *)puVar3 = uVar30;
    }
    else {
      uVar28 = puVar11[-0xc];
      uVar38 = puVar11[-0xb];
      uVar32 = puVar11[-10];
      uVar37 = puVar11[-9];
      uVar19 = puVar11[-8];
      uVar18 = puVar11[-6];
      *(undefined8 *)((int)puVar3 + 0x34) = puVar11[-7];
      *(undefined8 *)((int)puVar3 + 0x2c) = uVar19;
      *(undefined8 *)((int)puVar3 + 0x24) = uVar37;
      *(undefined8 *)((int)puVar3 + 0x1c) = uVar18;
      *(undefined8 *)((int)puVar3 + 0x14) = uVar32;
      *(undefined8 *)((int)puVar3 + 0xc) = uVar38;
      puVar3 = (undefined8 *)((int)puVar3 + 4);
      *puVar3 = uVar28;
    }
    *(undefined4 *)((int)puVar3 + -4) = 0xe0000000;
    if (iVar10 != 3) {
      if (in_FPSCR_SZ == '\0') {
        uVar34 = *(undefined4 *)(puVar11 + -5);
        uVar30 = *(undefined4 *)((int)puVar11 + -0x24);
        uVar27 = *(undefined4 *)(puVar11 + -4);
        uVar25 = *(undefined4 *)((int)puVar11 + -0x1c);
        uVar16 = *(undefined4 *)(puVar11 + -3);
        uVar24 = *(undefined4 *)(puVar11 + -2);
        *(undefined4 *)(puVar3 + 7) = *(undefined4 *)((int)puVar11 + -0x14);
        *(undefined4 *)((int)puVar3 + 0x34) = uVar16;
        *(undefined4 *)(puVar3 + 6) = uVar25;
        *(undefined4 *)((int)puVar3 + 0x2c) = uVar24;
        *(undefined4 *)(puVar3 + 5) = uVar27;
        *(undefined4 *)((int)puVar3 + 0x24) = uVar30;
        puVar3 = puVar3 + 4;
        *(undefined4 *)puVar3 = uVar34;
      }
      else {
        uVar32 = puVar11[-5];
        uVar28 = puVar11[-4];
        uVar38 = puVar11[-3];
        uVar37 = puVar11[-2];
        uVar19 = puVar11[-1];
        uVar18 = puVar11[1];
        *(undefined8 *)((int)puVar3 + 0x34) = *puVar11;
        *(undefined8 *)((int)puVar3 + 0x2c) = uVar19;
        *(undefined8 *)((int)puVar3 + 0x24) = uVar37;
        *(undefined8 *)((int)puVar3 + 0x1c) = uVar18;
        *(undefined8 *)((int)puVar3 + 0x14) = uVar38;
        *(undefined8 *)((int)puVar3 + 0xc) = uVar28;
        puVar3 = (undefined8 *)((int)puVar3 + 4);
        *puVar3 = uVar32;
      }
      *(undefined4 *)((int)puVar3 + -4) = 0xe0000000;
    }
    if (in_FPSCR_SZ == '\0') {
      uVar30 = *(undefined4 *)((int)puVar11 + -0x44);
      uVar34 = *(undefined4 *)(puVar11 + -8);
      uVar27 = *(undefined4 *)((int)puVar11 + -0x3c);
      uVar25 = *(undefined4 *)(puVar11 + -7);
      uVar16 = *(undefined4 *)((int)puVar11 + -0x34);
      uVar24 = *(undefined4 *)((int)puVar11 + -0x2c);
      *(undefined4 *)(puVar3 + 7) = *(undefined4 *)(puVar11 + -6);
      *(undefined4 *)((int)puVar3 + 0x34) = uVar16;
      *(undefined4 *)(puVar3 + 6) = uVar25;
      *(undefined4 *)((int)puVar3 + 0x2c) = uVar24;
      *(undefined4 *)(puVar3 + 5) = uVar27;
      *(undefined4 *)((int)puVar3 + 0x24) = uVar34;
      puVar3 = puVar3 + 4;
      *(undefined4 *)puVar3 = uVar30;
    }
    else {
      uVar28 = *(undefined8 *)((int)puVar11 + -0x44);
      uVar32 = *(undefined8 *)((int)puVar11 + -0x3c);
      uVar38 = *(undefined8 *)((int)puVar11 + -0x34);
      uVar37 = *(undefined8 *)((int)puVar11 + -0x2c);
      uVar19 = *(undefined8 *)((int)puVar11 + -0x24);
      uVar18 = *(undefined8 *)((int)puVar11 + -0x14);
      *(undefined8 *)((int)puVar3 + 0x34) = *(undefined8 *)((int)puVar11 + -0x1c);
      *(undefined8 *)((int)puVar3 + 0x2c) = uVar19;
      *(undefined8 *)((int)puVar3 + 0x24) = uVar37;
      *(undefined8 *)((int)puVar3 + 0x1c) = uVar18;
      *(undefined8 *)((int)puVar3 + 0x14) = uVar38;
      *(undefined8 *)((int)puVar3 + 0xc) = uVar32;
      puVar3 = (undefined8 *)((int)puVar3 + 4);
      *puVar3 = uVar28;
    }
    *(undefined4 *)((int)puVar3 + -4) = 0xf0000000;
    ar7 = (undefined8 *)((int)puVar3 + 0x1c);
    _DAT_8c4aa520 = _DAT_8c4aa520 + iVar10;
  }
  return ar7;
}

__asm__(".globl _FUN_8c2230f0\n.set _FUN_8c2230f0, _FUN_8c2230f0_def\n");
