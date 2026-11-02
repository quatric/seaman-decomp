#include "../decls.h"
double * FUN_8c214d6c_def(double *ar4,double *ar5,double *ar6,double *ar7)

{
  undefined4 *puVar1;
  int iVar2;
  double *pdVar3;
  int iVar4;
  double *pdVar5;
  undefined8 *puVar6;
  int iVar7;
  int *piVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  int *piVar11;
  int iVar12;
  undefined1 *puVar13;
  float fVar14;
  double in_dr0;
  double dVar15;
  undefined4 in_fr3;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  double dVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  double dVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  double in_dr4;
  undefined4 uVar27;
  undefined4 uVar28;
  double in_dr6;
  double dVar29;
  undefined4 uVar30;
  undefined8 in_dr8;
  double in_dr10;
  float in_fr13;
  double dVar31;
  double in_xd0;
  double in_xd2;
  double dVar32;
  double in_xd4;
  undefined8 in_xd6;
  undefined8 uVar33;
  undefined8 in_xd8;
  double in_xd10;
  char in_FPSCR_PR = 0;
  char in_FPSCR_SZ = 0;
  int aiStack_68 [3];
  float afStack_5c [12];
  undefined1 auStack_2c [8];
  undefined1 auStack_24 [8];
  
  if (in_FPSCR_SZ == '\0') {
    puVar13 = auStack_24;
  }
  else {
    puVar13 = auStack_2c;
  }
  if ((_DAT_8c4aa4f0 & 0x10000) == 0) {
    if (in_FPSCR_SZ == '\0') {
      in_dr0 = (double)CONCAT44((int)((ulonglong)in_dr0 >> 0x20),_DAT_8c4aa4a8);
      dVar15 = (double)CONCAT44(_DAT_8c4aa4e0,in_fr3);
      fVar14 = _DAT_8c4aa4a8;
      in_fr13 = _DAT_8c4aa4a8;
    }
    else {
      in_xd0 = (double)CONCAT44(_DAT_8c4aa4ac,_DAT_8c4aa4a8);
      dVar15 = (double)CONCAT44(_DAT_8c4aa4e4,_DAT_8c4aa4e0);
      fVar14 = SUB84(in_dr0,0);
    }
    fVar20 = (float)((ulonglong)dVar15 >> 0x20);
    if (in_FPSCR_PR == '\0') {
      fVar14 = fVar14 * fVar20;
    }
    else {
      fVar14 = SUB84(in_dr0 * dVar15,0);
    }
    if (in_FPSCR_SZ == '\0') {
      dVar15 = (double)CONCAT44(fVar20,_DAT_8c4aa4dc);
      *(float *)(puVar13 + -0xe4) = fVar14;
      dVar31 = (double)CONCAT44(_DAT_8c4aa4b4,in_fr13);
    }
    else {
      in_xd2 = (double)CONCAT44(_DAT_8c4aa4e0,_DAT_8c4aa4dc);
      *(double *)(puVar13 + -0xe4) = in_xd0;
      dVar31 = (double)CONCAT44(_DAT_8c4aa4b8,_DAT_8c4aa4b4);
    }
    if (in_FPSCR_PR == '\0') {
      dVar31 = (double)CONCAT44((int)((ulonglong)dVar31 >> 0x20),SUB84(dVar31,0) * SUB84(dVar15,0));
    }
    else {
      dVar31 = dVar31 * dVar15;
    }
    if (in_FPSCR_SZ == '\0') {
      *(undefined4 *)(puVar13 + -0xe8) = _DAT_8c4aa4b8;
      dVar15 = (double)CONCAT44((int)((ulonglong)dVar15 >> 0x20),*(undefined4 *)(puVar13 + -0xe4));
    }
    else {
      *(ulonglong *)(puVar13 + -0xe8) = CONCAT44(_DAT_8c4aa4bc,_DAT_8c4aa4b8);
      in_xd2 = *(double *)(puVar13 + -0xe4);
    }
    puVar1 = (undefined4 *)(puVar13 + -0x3c);
    if (in_FPSCR_PR == '\0') {
      dVar15 = (double)CONCAT44(1.0 / SUB84(dVar15,0),1.0 / SUB84(dVar31,0));
    }
    else {
      dVar15 = (0.007812501848093234 / dVar31) / dVar15;
    }
    *puVar1 = ar4;
    if (in_FPSCR_SZ == '\0') {
      dVar21 = (double)CONCAT44(*(undefined4 *)ar4,*(undefined4 *)((int)ar4 + 4));
    }
    else {
      in_xd2 = *(double *)((int)ar4 + 4);
      dVar21 = *ar4;
    }
    fVar20 = (float)((ulonglong)dVar31 >> 0x20);
    fVar14 = SUB84(dVar15,0);
    if (in_FPSCR_PR == '\0') {
      fVar16 = (SUB84(dVar21,0) - fVar20) * (float)((ulonglong)dVar21 >> 0x20) * fVar14;
    }
    else {
      fVar16 = SUB84((dVar21 - dVar31) * (dVar21 - dVar31) * dVar15,0);
    }
    if (in_FPSCR_SZ == '\0') {
      *(float *)(puVar13 + -0x38) = fVar16;
      dVar21 = (double)CONCAT44(*(undefined4 *)(ar4 + 1),*(undefined4 *)(puVar13 + -0xe8));
    }
    else {
      *(double *)(puVar13 + -0x38) = in_xd2;
      dVar21 = ar4[1];
      in_xd2 = *(double *)(puVar13 + -0xe8);
    }
    if (in_FPSCR_PR == '\0') {
      dVar21 = (double)CONCAT44((float)((ulonglong)dVar21 >> 0x20) - SUB84(dVar21,0),SUB84(dVar21,0)
                               );
    }
    else {
      dVar21 = dVar21 - dVar21;
    }
    if (in_FPSCR_SZ == '\0') {
      dVar21 = (double)CONCAT44((int)((ulonglong)dVar21 >> 0x20),*(undefined4 *)ar4);
    }
    else {
      in_xd2 = *ar4;
    }
    fVar16 = (float)((ulonglong)dVar15 >> 0x20);
    if (in_FPSCR_PR == '\0') {
      dVar21 = (double)CONCAT44((float)((ulonglong)dVar21 >> 0x20) * SUB84(dVar21,0) * fVar16,
                                SUB84(dVar21,0));
    }
    else {
      dVar21 = dVar21 * dVar21 * dVar15;
    }
    if (in_FPSCR_SZ == '\0') {
      *(int *)(puVar13 + -0x34) = (int)((ulonglong)dVar21 >> 0x20);
      *(int *)(puVar13 + -0x30) = (int)((ulonglong)in_dr4 >> 0x20);
      *(int *)(puVar13 + -0x2c) = SUB84(in_dr4,0);
    }
    else {
      *(double *)(puVar13 + -0x34) = dVar21;
      *(double *)(puVar13 + -0x30) = in_dr4;
      *(double *)(puVar13 + -0x2c) = in_xd4;
    }
    *(double **)(puVar13 + -0x28) = ar5;
    if (in_FPSCR_SZ == '\0') {
      dVar21 = (double)CONCAT44(*(undefined4 *)ar5,*(undefined4 *)((int)ar5 + 4));
    }
    else {
      in_xd2 = *(double *)((int)ar5 + 4);
      dVar21 = *ar5;
    }
    if (in_FPSCR_PR == '\0') {
      fVar17 = (SUB84(dVar21,0) - fVar20) * (float)((ulonglong)dVar21 >> 0x20) * fVar14;
    }
    else {
      fVar17 = SUB84((dVar21 - dVar31) * (dVar21 - dVar31) * dVar15,0);
    }
    if (in_FPSCR_SZ == '\0') {
      *(float *)(puVar13 + -0x24) = fVar17;
      dVar21 = (double)CONCAT44(*(undefined4 *)(ar5 + 1),*(undefined4 *)(puVar13 + -0xe8));
    }
    else {
      *(double *)(puVar13 + -0x24) = in_xd2;
      dVar21 = ar5[1];
      in_xd2 = *(double *)(puVar13 + -0xe8);
    }
    if (in_FPSCR_PR == '\0') {
      dVar21 = (double)CONCAT44((float)((ulonglong)dVar21 >> 0x20) - SUB84(dVar21,0),SUB84(dVar21,0)
                               );
    }
    else {
      dVar21 = dVar21 - dVar21;
    }
    if (in_FPSCR_SZ == '\0') {
      dVar21 = (double)CONCAT44((int)((ulonglong)dVar21 >> 0x20),*(undefined4 *)ar5);
    }
    else {
      in_xd2 = *ar5;
    }
    if (in_FPSCR_PR == '\0') {
      dVar21 = (double)CONCAT44((float)((ulonglong)dVar21 >> 0x20) * SUB84(dVar21,0) * fVar16,
                                SUB84(dVar21,0));
    }
    else {
      dVar21 = dVar21 * dVar21 * dVar15;
    }
    if (in_FPSCR_SZ == '\0') {
      *(int *)(puVar13 + -0x20) = (int)((ulonglong)dVar21 >> 0x20);
      *(int *)(puVar13 + -0x1c) = (int)((ulonglong)in_dr6 >> 0x20);
      *(int *)(puVar13 + -0x18) = SUB84(in_dr6,0);
    }
    else {
      *(double *)(puVar13 + -0x20) = dVar21;
      *(double *)(puVar13 + -0x1c) = in_dr6;
      *(undefined8 *)(puVar13 + -0x18) = in_xd6;
    }
    *(double **)(puVar13 + -0x14) = ar6;
    if (in_FPSCR_SZ == '\0') {
      dVar21 = (double)CONCAT44(*(undefined4 *)ar6,*(undefined4 *)((int)ar6 + 4));
    }
    else {
      in_xd2 = *(double *)((int)ar6 + 4);
      dVar21 = *ar6;
    }
    pdVar5 = (double *)(puVar13 + -0xcc);
    if (in_FPSCR_PR == '\0') {
      fVar14 = (SUB84(dVar21,0) - fVar20) * (float)((ulonglong)dVar21 >> 0x20) * fVar14;
    }
    else {
      fVar14 = SUB84((dVar21 - dVar31) * (dVar21 - dVar31) * dVar15,0);
    }
    if (in_FPSCR_SZ == '\0') {
      *(float *)(puVar13 + -0x10) = fVar14;
      dVar21 = (double)CONCAT44(*(undefined4 *)(ar6 + 1),*(undefined4 *)(puVar13 + -0xe8));
    }
    else {
      *(double *)(puVar13 + -0x10) = in_xd2;
      dVar21 = ar6[1];
      in_xd2 = *(double *)(puVar13 + -0xe8);
    }
    if (in_FPSCR_PR == '\0') {
      dVar21 = (double)CONCAT44((float)((ulonglong)dVar21 >> 0x20) - SUB84(dVar21,0),SUB84(dVar21,0)
                               );
    }
    else {
      dVar21 = dVar21 - dVar21;
    }
    if (in_FPSCR_SZ == '\0') {
      dVar21 = (double)CONCAT44((int)((ulonglong)dVar21 >> 0x20),*(undefined4 *)ar6);
    }
    else {
      in_xd2 = *ar6;
    }
    iVar12 = 0;
    if (in_FPSCR_PR == '\0') {
      dVar21 = (double)CONCAT44((float)((ulonglong)dVar21 >> 0x20) * SUB84(dVar21,0) * fVar16,
                                SUB84(dVar21,0));
    }
    else {
      dVar21 = dVar21 * dVar21 * dVar15;
    }
    if (in_FPSCR_SZ == '\0') {
      *(int *)(puVar13 + -0xc) = (int)((ulonglong)dVar21 >> 0x20);
      *(int *)(puVar13 + -8) = (int)((ulonglong)in_dr8 >> 0x20);
      *(int *)(puVar13 + -4) = (int)in_dr8;
    }
    else {
      *(double *)(puVar13 + -0xc) = dVar21;
      *(undefined8 *)(puVar13 + -8) = in_dr8;
      *(undefined8 *)(puVar13 + -4) = in_xd8;
    }
    iVar2 = 0;
    iVar7 = 2;
    while( true ) {
      iVar4 = iVar2;
      fVar14 = SUB84(in_dr10,0);
      fVar16 = (float)((ulonglong)in_dr10 >> 0x20);
      if (2 < iVar4) break;
      puVar10 = puVar1 + iVar7 * 5;
      if (in_FPSCR_SZ == '\0') {
        uVar22 = CONCAT44(*(undefined4 *)*puVar10,0x3f800000);
      }
      else {
        uVar22 = *(undefined8 *)*puVar10;
      }
      puVar9 = puVar1 + iVar4 * 5;
      if (in_FPSCR_SZ == '\0') {
        uVar23 = CONCAT44(*(undefined4 *)*puVar9,(float)uVar22);
      }
      else {
        uVar23 = *(undefined8 *)*puVar9;
      }
      fVar17 = (float)uVar23;
      if (((in_FPSCR_PR == '\0' && (float)uVar22 < (float)((ulonglong)uVar22 >> 0x20)) ^ 1) !=
          -((in_FPSCR_PR == '\0' && fVar17 < (float)((ulonglong)uVar23 >> 0x20)) - 1)) {
        pdVar3 = (double *)*puVar10;
        *(double **)(puVar13 + -0xd0) = pdVar3;
        if (in_FPSCR_SZ == '\0') {
          dVar21 = (double)CONCAT44(*(undefined4 *)pdVar3,SUB84(in_dr4,0));
        }
        else {
          dVar21 = *pdVar3;
        }
        fVar18 = (float)((ulonglong)dVar21 >> 0x20);
        if (in_FPSCR_SZ == '\0') {
          dVar15 = (double)CONCAT44((int)((ulonglong)dVar15 >> 0x20),*(undefined4 *)*puVar9);
          dVar32 = in_xd2;
          fVar17 = fVar18;
        }
        else {
          in_xd0 = *(double *)*puVar9;
          dVar32 = dVar21;
        }
        dVar24 = (double)CONCAT44(0x3f800000,-fVar17);
        if (in_FPSCR_PR == '\0') {
          dVar24 = (double)CONCAT44(0x3f800000,-fVar17 + 1.0);
          dVar15 = (double)CONCAT44((int)((ulonglong)dVar15 >> 0x20),SUB84(dVar15,0) - fVar18);
        }
        else {
          dVar24 = dVar24 + dVar24;
          dVar15 = dVar15 - dVar21;
        }
        if (in_FPSCR_SZ == '\0') {
          dVar21 = (double)CONCAT44(SUB84(dVar24,0),puVar10[1]);
        }
        else {
          in_xd4 = *(double *)(puVar10 + 1);
          dVar21 = dVar32;
        }
        if (in_FPSCR_PR == '\0') {
          in_dr4 = (double)CONCAT44((float)((ulonglong)dVar21 >> 0x20) / SUB84(dVar15,0),
                                    SUB84(dVar21,0));
        }
        else {
          in_dr4 = dVar21 / dVar15;
        }
        if (in_FPSCR_SZ == '\0') {
          dVar24 = (double)CONCAT44((int)((ulonglong)dVar24 >> 0x20),puVar9[1]);
          dVar15 = (double)((ulonglong)in_dr4 & 0xffffffff);
          dVar21 = in_xd0;
        }
        else {
          dVar32 = *(double *)(puVar9 + 1);
          dVar21 = in_xd4;
        }
        if (in_FPSCR_PR == '\0') {
          dVar24 = (double)CONCAT44((int)((ulonglong)dVar24 >> 0x20),
                                    SUB84(dVar24,0) - SUB84(in_dr4,0));
        }
        else {
          dVar24 = dVar24 - in_dr4;
        }
        uVar25 = (undefined4)((ulonglong)in_dr4 >> 0x20);
        if (in_FPSCR_SZ == '\0') {
          dVar29 = (double)CONCAT44(puVar10[2],SUB84(in_dr6,0));
          dVar15 = (double)CONCAT44(uVar25,SUB84(dVar15,0));
        }
        else {
          dVar29 = *(double *)(puVar10 + 2);
          dVar15 = in_dr4;
        }
        if (in_FPSCR_PR == '\0') {
          fVar17 = (float)((ulonglong)dVar15 >> 0x20);
          dVar15 = (double)CONCAT44(fVar17,fVar17 * SUB84(dVar24,0) + SUB84(dVar15,0));
        }
        if (in_FPSCR_SZ == '\0') {
          dVar24 = (double)CONCAT44((int)((ulonglong)dVar24 >> 0x20),puVar9[2]);
        }
        else {
          dVar32 = *(double *)(puVar9 + 2);
        }
        fVar17 = (float)((ulonglong)dVar29 >> 0x20);
        if (in_FPSCR_PR == '\0') {
          dVar24 = (double)CONCAT44((int)((ulonglong)dVar24 >> 0x20),SUB84(dVar24,0) - fVar17);
        }
        else {
          dVar24 = dVar24 - dVar29;
        }
        in_xd0 = dVar29;
        if (in_FPSCR_SZ == '\0') {
          in_dr4 = (double)CONCAT44(uVar25,SUB84(dVar15,0));
          dVar15 = (double)CONCAT44((int)((ulonglong)dVar15 >> 0x20),fVar17);
          in_xd0 = dVar21;
          dVar21 = in_xd4;
        }
        if (in_FPSCR_PR == '\0') {
          dVar15 = (double)(ulonglong)
                           (uint)((float)((ulonglong)dVar15 >> 0x20) * SUB84(dVar24,0) +
                                 SUB84(dVar15,0));
        }
        in_xd2 = dVar31;
        in_dr6 = in_xd0;
        if (in_FPSCR_SZ == '\0') {
          dVar24 = (double)CONCAT44((int)((ulonglong)dVar24 >> 0x20),fVar20);
          in_xd2 = dVar32;
          in_dr6 = (double)CONCAT44(SUB84(dVar15,0),SUB84(dVar29,0));
        }
        fVar17 = SUB84(in_dr4,0);
        dVar32 = dVar21;
        if (in_FPSCR_SZ == '\0') {
          dVar32 = (double)CONCAT44(fVar17,SUB84(dVar15,0));
        }
        if (in_FPSCR_PR == '\0') {
          dVar24 = (double)CONCAT44((int)((ulonglong)dVar24 >> 0x20),
                                    (float)((ulonglong)dVar32 >> 0x20) * SUB84(dVar31,0) +
                                    SUB84(dVar24,0));
        }
        pdVar3 = (double *)(iVar12 * 0x24 + (int)pdVar5);
        if (in_FPSCR_SZ == '\0') {
          *(int *)pdVar3 = SUB84(dVar24,0);
          dVar24 = (double)CONCAT44((int)((ulonglong)dVar24 >> 0x20),
                                    *(undefined4 *)(puVar13 + -0xe8));
          dVar15 = (double)CONCAT44((int)((ulonglong)in_dr6 >> 0x20),
                                    *(undefined4 *)(puVar13 + -0xe4));
        }
        else {
          *pdVar3 = in_xd2;
          in_xd2 = *(double *)(puVar13 + -0xe8);
          in_xd0 = *(double *)(puVar13 + -0xe4);
          dVar15 = in_dr6;
        }
        if (in_FPSCR_PR == '\0') {
          dVar24 = (double)CONCAT44((int)((ulonglong)dVar24 >> 0x20),
                                    (float)((ulonglong)dVar15 >> 0x20) * SUB84(dVar15,0) +
                                    SUB84(dVar24,0));
        }
        uVar25 = (undefined4)((ulonglong)in_dr4 >> 0x20);
        if (in_FPSCR_SZ == '\0') {
          *(int *)((int)pdVar3 + 4) = SUB84(dVar24,0);
          *(int *)(pdVar3 + 1) = (int)((ulonglong)dVar24 >> 0x20);
          fVar17 = (float)(uint)puVar10[3];
          in_dr4 = (double)CONCAT44(uVar25,fVar17);
          dVar24 = (double)CONCAT44(fVar17,puVar9[3]);
          dVar32 = (double)CONCAT44(uVar25,SUB84(dVar15,0));
        }
        else {
          *(double *)((int)pdVar3 + 4) = in_xd2;
          pdVar3[1] = dVar24;
          dVar24 = *(double *)(puVar10 + 3);
          in_xd2 = *(double *)(puVar9 + 3);
          dVar21 = dVar24;
          dVar32 = in_dr4;
        }
        fVar18 = (float)((ulonglong)dVar32 >> 0x20);
        if (in_FPSCR_PR == '\0') {
          fVar17 = SUB84(dVar24,0) - fVar17;
          dVar24 = (double)CONCAT44(fVar18 * fVar17 + (float)((ulonglong)dVar24 >> 0x20),fVar17);
        }
        else {
          dVar24 = dVar24 - in_dr4;
        }
        if (in_FPSCR_SZ == '\0') {
          *(int *)((int)pdVar3 + 0xc) = (int)((ulonglong)dVar24 >> 0x20);
          fVar17 = (float)(uint)puVar10[4];
          in_dr4 = (double)CONCAT44((int)((ulonglong)in_dr4 >> 0x20),fVar17);
          dVar15 = (double)CONCAT44(fVar17,puVar9[4]);
          in_xd4 = dVar21;
        }
        else {
          *(double *)((int)pdVar3 + 0xc) = dVar24;
          dVar15 = *(double *)(puVar10 + 4);
          in_xd2 = *(double *)(puVar9 + 4);
          fVar17 = SUB84(in_dr4,0);
          in_xd4 = dVar15;
        }
        if (in_FPSCR_PR == '\0') {
          fVar17 = SUB84(dVar15,0) - fVar17;
          dVar15 = (double)CONCAT44(fVar18 * fVar17 + (float)((ulonglong)dVar15 >> 0x20),fVar17);
        }
        else {
          dVar15 = dVar15 - in_dr4;
        }
        if (in_FPSCR_SZ == '\0') {
          *(int *)(pdVar3 + 2) = (int)((ulonglong)dVar15 >> 0x20);
        }
        else {
          pdVar3[2] = dVar15;
        }
        dVar15 = dVar32;
        if (DAT_8c277acc == 0) {
          piVar8 = puVar1 + iVar7 * 5;
          uVar25 = (undefined4)((ulonglong)in_dr4 >> 0x20);
          dVar15 = in_dr4;
          if (in_FPSCR_SZ == '\0') {
            dVar15 = (double)CONCAT44(uVar25,SUB84(dVar32,0));
          }
          iVar2 = *piVar8;
          *(int *)(puVar13 + -0xd4) = iVar2;
          piVar11 = puVar1 + iVar4 * 5;
          if (in_FPSCR_SZ == '\0') {
            in_dr4 = (double)CONCAT44(uVar25,*(undefined4 *)(iVar2 + 0x14));
          }
          else {
            in_xd4 = *(double *)(iVar2 + 0x14);
          }
          if (in_FPSCR_SZ == '\0') {
            dVar21 = (double)CONCAT44(SUB84(in_dr4,0),*(undefined4 *)(*piVar11 + 0x14));
          }
          else {
            in_xd2 = *(double *)(*piVar11 + 0x14);
            dVar21 = in_xd4;
          }
          fVar17 = (float)((ulonglong)dVar15 >> 0x20);
          if (in_FPSCR_PR == '\0') {
            fVar18 = SUB84(dVar21,0) - SUB84(in_dr4,0);
            dVar21 = (double)CONCAT44(fVar17 * fVar18 + (float)((ulonglong)dVar21 >> 0x20) + fVar14,
                                      fVar18);
          }
          else {
            dVar21 = (dVar21 - in_dr4) + in_dr10;
          }
          uVar25 = (undefined4)((ulonglong)dVar21 >> 0x20);
          if (in_FPSCR_SZ == '\0') {
            *(undefined4 *)((int)pdVar3 + 0x14) = uVar25;
          }
          else {
            *(double *)((int)pdVar3 + 0x14) = dVar21;
          }
          iVar2 = *piVar8;
          *(int *)(puVar13 + -0xd8) = iVar2;
          if (in_FPSCR_SZ == '\0') {
            in_dr4 = (double)CONCAT44((int)((ulonglong)in_dr4 >> 0x20),*(undefined4 *)(iVar2 + 0x18)
                                     );
            dVar21 = (double)CONCAT44(uVar25,*(undefined4 *)(*piVar11 + 0x18));
          }
          else {
            in_xd4 = *(double *)(iVar2 + 0x18);
            in_xd2 = *(double *)(*piVar11 + 0x18);
          }
          fVar18 = SUB84(in_dr4,0);
          if (in_FPSCR_PR == '\0') {
            fVar19 = SUB84(dVar21,0) - fVar18;
          }
          else {
            fVar19 = SUB84(dVar21 - in_dr4,0);
          }
          dVar21 = in_xd4;
          if (in_FPSCR_SZ == '\0') {
            dVar21 = (double)CONCAT44(fVar18,fVar19);
          }
          if (in_FPSCR_PR == '\0') {
            dVar21 = (double)CONCAT44(fVar17 * SUB84(dVar21,0) + (float)((ulonglong)dVar21 >> 0x20),
                                      SUB84(dVar21,0));
          }
          if (in_FPSCR_SZ == '\0') {
            dVar21 = (double)CONCAT44((int)((ulonglong)dVar21 >> 0x20),
                                      *(undefined4 *)(puVar13 + 0x24));
          }
          else {
            in_xd2 = *(double *)(puVar13 + 0x24);
          }
          if (in_FPSCR_PR == '\0') {
            dVar21 = (double)CONCAT44((float)((ulonglong)dVar21 >> 0x20) + SUB84(dVar21,0),
                                      SUB84(dVar21,0));
          }
          else {
            dVar21 = dVar21 + dVar21;
          }
          if (in_FPSCR_SZ == '\0') {
            *(int *)(pdVar3 + 3) = (int)((ulonglong)dVar21 >> 0x20);
          }
          else {
            pdVar3[3] = dVar21;
          }
          iVar2 = *piVar8;
          *(int *)(puVar13 + -0xdc) = iVar2;
          if (in_FPSCR_SZ == '\0') {
            fVar18 = *(float *)(iVar2 + 0x1c);
            in_dr4 = (double)CONCAT44((int)((ulonglong)in_dr4 >> 0x20),fVar18);
            dVar21 = (double)CONCAT44(fVar18,*(undefined4 *)(*piVar11 + 0x1c));
          }
          else {
            dVar21 = *(double *)(iVar2 + 0x1c);
            in_xd2 = *(double *)(*piVar11 + 0x1c);
            in_xd4 = dVar21;
          }
          if (in_FPSCR_PR == '\0') {
            fVar18 = SUB84(dVar21,0) - fVar18;
            dVar21 = (double)CONCAT44(fVar17 * fVar18 + (float)((ulonglong)dVar21 >> 0x20),fVar18);
          }
          else {
            dVar21 = dVar21 - in_dr4;
          }
          if (in_FPSCR_SZ == '\0') {
            dVar21 = (double)CONCAT44((int)((ulonglong)dVar21 >> 0x20),
                                      *(undefined4 *)(puVar13 + 0x28));
          }
          else {
            in_xd2 = *(double *)(puVar13 + 0x28);
          }
          if (in_FPSCR_PR == '\0') {
            dVar21 = (double)CONCAT44((float)((ulonglong)dVar21 >> 0x20) + SUB84(dVar21,0),
                                      SUB84(dVar21,0));
          }
          else {
            dVar21 = dVar21 + dVar21;
          }
          if (in_FPSCR_SZ == '\0') {
            *(int *)((int)pdVar3 + 0x1c) = (int)((ulonglong)dVar21 >> 0x20);
          }
          else {
            *(double *)((int)pdVar3 + 0x1c) = dVar21;
          }
          iVar2 = *piVar8;
          *(int *)(puVar13 + -0xe0) = iVar2;
          if (in_FPSCR_SZ == '\0') {
            fVar18 = *(float *)(iVar2 + 0x10);
            in_dr4 = (double)CONCAT44((int)((ulonglong)in_dr4 >> 0x20),fVar18);
            dVar21 = (double)CONCAT44(fVar18,*(undefined4 *)(*piVar11 + 0x10));
          }
          else {
            dVar21 = *(double *)(iVar2 + 0x10);
            in_xd2 = *(double *)(*piVar11 + 0x10);
            fVar18 = SUB84(in_dr4,0);
            in_xd4 = dVar21;
          }
          if (in_FPSCR_PR == '\0') {
            fVar18 = SUB84(dVar21,0) - fVar18;
            dVar21 = (double)CONCAT44((fVar17 * fVar18 + (float)((ulonglong)dVar21 >> 0x20)) *
                                      fVar16,fVar18);
          }
          else {
            dVar21 = (dVar21 - in_dr4) * in_dr10;
          }
          if (in_FPSCR_SZ == '\0') {
            *(int *)(pdVar3 + 4) = (int)((ulonglong)dVar21 >> 0x20);
          }
          else {
            pdVar3[4] = dVar21;
          }
        }
        iVar12 = iVar12 + 1;
      }
      piVar8 = puVar1 + iVar4 * 5;
      if (in_FPSCR_SZ == '\0') {
        dVar21 = (double)CONCAT44(*(undefined4 *)*piVar8,0x3f800000);
      }
      else {
        dVar21 = *(double *)*piVar8;
      }
      if (in_FPSCR_PR == '\0' && SUB84(dVar21,0) < (float)((ulonglong)dVar21 >> 0x20)) {
        if (in_FPSCR_SZ == '\0') {
          uVar22 = CONCAT44(*(undefined4 *)(*piVar8 + 4),SUB84(dVar21,0));
        }
        else {
          uVar22 = *(undefined8 *)(*piVar8 + 4);
        }
        puVar6 = (undefined8 *)(iVar12 * 0x24 + (int)pdVar5);
        if (in_FPSCR_SZ == '\0') {
          *(int *)puVar6 = (int)((ulonglong)uVar22 >> 0x20);
        }
        else {
          *puVar6 = uVar22;
        }
        if (in_FPSCR_SZ == '\0') {
          uVar25 = *(undefined4 *)(*piVar8 + 8);
          uVar22 = CONCAT44(uVar25,(int)uVar22);
          *(undefined4 *)((int)puVar6 + 4) = uVar25;
        }
        else {
          uVar22 = *(undefined8 *)(*piVar8 + 8);
          *(undefined8 *)((int)puVar6 + 4) = uVar22;
        }
        if (in_FPSCR_SZ == '\0') {
          *(undefined4 *)(puVar6 + 1) = *(undefined4 *)(*piVar8 + 0xc);
          *(int *)((int)puVar6 + 0xc) = piVar8[3];
          dVar21 = (double)CONCAT44(piVar8[4],(int)uVar22);
          *(int *)(puVar6 + 2) = piVar8[4];
        }
        else {
          puVar6[1] = *(undefined8 *)(*piVar8 + 0xc);
          *(undefined8 *)((int)puVar6 + 0xc) = *(undefined8 *)(piVar8 + 3);
          dVar21 = *(double *)(piVar8 + 4);
          puVar6[2] = dVar21;
        }
        if (DAT_8c277acc == 0) {
          piVar8 = puVar1 + iVar4 * 5;
          if (in_FPSCR_SZ == '\0') {
            dVar21 = (double)CONCAT44(*(undefined4 *)(*piVar8 + 0x14),SUB84(dVar21,0));
          }
          else {
            dVar21 = *(double *)(*piVar8 + 0x14);
          }
          if (in_FPSCR_PR == '\0') {
            dVar21 = (double)CONCAT44((float)((ulonglong)dVar21 >> 0x20) + fVar14,SUB84(dVar21,0));
          }
          else {
            dVar21 = dVar21 + in_dr10;
          }
          if (in_FPSCR_SZ == '\0') {
            *(int *)((int)puVar6 + 0x14) = (int)((ulonglong)dVar21 >> 0x20);
            dVar21 = (double)CONCAT44(*(undefined4 *)(puVar13 + 0x24),SUB84(dVar21,0));
          }
          else {
            *(double *)((int)puVar6 + 0x14) = dVar21;
            dVar21 = *(double *)(puVar13 + 0x24);
          }
          if (in_FPSCR_SZ == '\0') {
            dVar15 = (double)CONCAT44((int)((ulonglong)dVar15 >> 0x20),
                                      *(undefined4 *)(*piVar8 + 0x18));
          }
          else {
            in_xd0 = *(double *)(*piVar8 + 0x18);
          }
          if (in_FPSCR_PR == '\0') {
            dVar15 = (double)CONCAT44((int)((ulonglong)dVar15 >> 0x20),
                                      SUB84(dVar15,0) + (float)((ulonglong)dVar21 >> 0x20));
          }
          else {
            dVar15 = dVar15 + dVar21;
          }
          if (in_FPSCR_SZ == '\0') {
            *(int *)(puVar6 + 3) = SUB84(dVar15,0);
          }
          else {
            puVar6[3] = in_xd0;
          }
          if (in_FPSCR_SZ == '\0') {
            dVar21 = (double)CONCAT44(*(undefined4 *)(puVar13 + 0x28),SUB84(dVar21,0));
            dVar15 = (double)CONCAT44((int)((ulonglong)dVar15 >> 0x20),
                                      *(undefined4 *)(*piVar8 + 0x1c));
          }
          else {
            dVar21 = *(double *)(puVar13 + 0x28);
            in_xd0 = *(double *)(*piVar8 + 0x1c);
          }
          if (in_FPSCR_PR == '\0') {
            dVar15 = (double)CONCAT44((int)((ulonglong)dVar15 >> 0x20),
                                      SUB84(dVar15,0) + (float)((ulonglong)dVar21 >> 0x20));
          }
          else {
            dVar15 = dVar15 + dVar21;
          }
          if (in_FPSCR_SZ == '\0') {
            *(int *)((int)puVar6 + 0x1c) = SUB84(dVar15,0);
          }
          else {
            *(double *)((int)puVar6 + 0x1c) = in_xd0;
          }
          if (in_FPSCR_SZ == '\0') {
            dVar21 = (double)CONCAT44(*(undefined4 *)(*piVar8 + 0x10),SUB84(dVar21,0));
          }
          else {
            dVar21 = *(double *)(*piVar8 + 0x10);
          }
          if (in_FPSCR_PR == '\0') {
            dVar21 = (double)CONCAT44((float)((ulonglong)dVar21 >> 0x20) * fVar16,SUB84(dVar21,0));
          }
          else {
            dVar21 = dVar21 * in_dr10;
          }
          if (in_FPSCR_SZ == '\0') {
            *(int *)(puVar6 + 4) = (int)((ulonglong)dVar21 >> 0x20);
          }
          else {
            puVar6[4] = dVar21;
          }
        }
        iVar12 = iVar12 + 1;
      }
      iVar2 = iVar4 + 1;
      iVar7 = iVar4;
    }
    if (DAT_8c277acc != 0) {
      piVar8 = (int *)(puVar13 + -0x14);
      if (in_FPSCR_SZ == '\0') {
        dVar21 = (double)CONCAT44((int)((ulonglong)dVar21 >> 0x20),*(undefined4 *)(*piVar8 + 0x14));
      }
      else {
        in_xd2 = *(double *)(*piVar8 + 0x14);
      }
      if (in_FPSCR_PR == '\0') {
        fVar20 = SUB84(dVar21,0) + fVar14;
      }
      else {
        fVar20 = SUB84(dVar21 + in_dr10,0);
      }
      if (in_FPSCR_SZ == '\0') {
        *(float *)(puVar13 + -0x70) = fVar20;
        fVar20 = *(float *)(puVar13 + 0x24);
      }
      else {
        *(double *)(puVar13 + -0x70) = in_xd2;
        in_xd2 = *(double *)(puVar13 + 0x24);
      }
      if (in_FPSCR_SZ == '\0') {
        dVar15 = (double)CONCAT44(*(undefined4 *)(*piVar8 + 0x18),fVar20);
      }
      else {
        dVar15 = *(double *)(*piVar8 + 0x18);
      }
      if (in_FPSCR_PR == '\0') {
        dVar15 = (double)CONCAT44((float)((ulonglong)dVar15 >> 0x20) + SUB84(dVar15,0),
                                  SUB84(dVar15,0));
      }
      else {
        dVar15 = dVar15 + dVar15;
      }
      if (in_FPSCR_SZ == '\0') {
        *(int *)(puVar13 + -0x6c) = (int)((ulonglong)dVar15 >> 0x20);
        dVar15 = (double)(ulonglong)*(uint *)(puVar13 + 0x28);
      }
      else {
        *(double *)(puVar13 + -0x6c) = dVar15;
        in_xd2 = *(double *)(puVar13 + 0x28);
      }
      if (in_FPSCR_SZ == '\0') {
        dVar21 = (double)CONCAT44(*(undefined4 *)(*piVar8 + 0x1c),SUB84(dVar15,0));
      }
      else {
        dVar21 = *(double *)(*piVar8 + 0x1c);
      }
      if (in_FPSCR_PR == '\0') {
        dVar21 = (double)CONCAT44((float)((ulonglong)dVar21 >> 0x20) + SUB84(dVar21,0),
                                  SUB84(dVar21,0));
      }
      else {
        dVar21 = dVar21 + dVar21;
      }
      uVar25 = (undefined4)((ulonglong)dVar21 >> 0x20);
      if (in_FPSCR_SZ == '\0') {
        *(undefined4 *)(puVar13 + -0x68) = uVar25;
      }
      else {
        *(double *)(puVar13 + -0x68) = dVar21;
      }
      if (in_FPSCR_SZ == '\0') {
        dVar21 = (double)CONCAT44(uVar25,*(undefined4 *)(*piVar8 + 0x10));
      }
      else {
        in_xd2 = *(double *)(*piVar8 + 0x10);
      }
      if (in_FPSCR_PR == '\0') {
        dVar21 = (double)CONCAT44((int)((ulonglong)dVar21 >> 0x20),SUB84(dVar21,0) * fVar16);
      }
      else {
        dVar21 = dVar21 * in_dr10;
      }
      if (in_FPSCR_SZ == '\0') {
        *(int *)(puVar13 + -100) = SUB84(dVar21,0);
      }
      else {
        *(double *)(puVar13 + -100) = in_xd2;
      }
      if (iVar12 != 3) {
        piVar8 = (int *)(puVar13 + -0x14);
        if (in_FPSCR_SZ == '\0') {
          dVar21 = (double)CONCAT44((int)((ulonglong)dVar21 >> 0x20),*(undefined4 *)(*piVar8 + 0x14)
                                   );
        }
        else {
          in_xd2 = *(double *)(*piVar8 + 0x14);
        }
        if (in_FPSCR_PR == '\0') {
          fVar14 = SUB84(dVar21,0) + fVar14;
        }
        else {
          fVar14 = SUB84(dVar21 + in_dr10,0);
        }
        if (in_FPSCR_SZ == '\0') {
          *(float *)(puVar13 + -0x4c) = fVar14;
          fVar14 = *(float *)(puVar13 + 0x24);
        }
        else {
          *(double *)(puVar13 + -0x4c) = in_xd2;
          in_xd2 = *(double *)(puVar13 + 0x24);
        }
        if (in_FPSCR_SZ == '\0') {
          dVar15 = (double)CONCAT44(*(undefined4 *)(*piVar8 + 0x18),fVar14);
        }
        else {
          dVar15 = *(double *)(*piVar8 + 0x18);
        }
        if (in_FPSCR_PR == '\0') {
          dVar15 = (double)CONCAT44((float)((ulonglong)dVar15 >> 0x20) + SUB84(dVar15,0),
                                    SUB84(dVar15,0));
        }
        else {
          dVar15 = dVar15 + dVar15;
        }
        if (in_FPSCR_SZ == '\0') {
          *(int *)(puVar13 + -0x48) = (int)((ulonglong)dVar15 >> 0x20);
        }
        else {
          *(double *)(puVar13 + -0x48) = dVar15;
        }
        if (in_FPSCR_SZ == '\0') {
          dVar21 = (double)CONCAT44(*(undefined4 *)(*piVar8 + 0x1c),*(undefined4 *)(puVar13 + 0x28))
          ;
        }
        else {
          in_xd2 = *(double *)(puVar13 + 0x28);
          dVar21 = *(double *)(*piVar8 + 0x1c);
        }
        if (in_FPSCR_PR == '\0') {
          dVar21 = (double)CONCAT44((float)((ulonglong)dVar21 >> 0x20) + SUB84(dVar21,0),
                                    SUB84(dVar21,0));
        }
        else {
          dVar21 = dVar21 + dVar21;
        }
        uVar25 = (undefined4)((ulonglong)dVar21 >> 0x20);
        if (in_FPSCR_SZ == '\0') {
          *(undefined4 *)(puVar13 + -0x44) = uVar25;
        }
        else {
          *(double *)(puVar13 + -0x44) = dVar21;
        }
        if (in_FPSCR_SZ == '\0') {
          dVar21 = (double)CONCAT44(uVar25,*(undefined4 *)(*piVar8 + 0x10));
        }
        else {
          in_xd2 = *(double *)(*piVar8 + 0x10);
        }
        if (in_FPSCR_PR == '\0') {
          dVar21 = (double)CONCAT44((int)((ulonglong)dVar21 >> 0x20),SUB84(dVar21,0) * fVar16);
        }
        else {
          dVar21 = dVar21 * in_dr10;
        }
        if (in_FPSCR_SZ == '\0') {
          *(int *)(puVar13 + -0x40) = SUB84(dVar21,0);
        }
        else {
          *(double *)(puVar13 + -0x40) = in_xd2;
        }
      }
    }
    if (in_FPSCR_SZ == '\0') {
      uVar27 = *(undefined4 *)pdVar5;
      uVar26 = *(undefined4 *)(puVar13 + -200);
      dVar15 = (double)CONCAT44(uVar27,uVar26);
      uVar30 = *(undefined4 *)(puVar13 + -0xc4);
      uVar28 = *(undefined4 *)(puVar13 + -0xc0);
      uVar25 = *(undefined4 *)(puVar13 + -0xbc);
      pdVar5 = (double *)(puVar13 + -0xb8);
      *(undefined4 *)((int)ar7 + 0x14) = uVar25;
      *(undefined4 *)(ar7 + 2) = uVar28;
      *(undefined4 *)((int)ar7 + 0xc) = uVar30;
      *(undefined4 *)(ar7 + 1) = uVar26;
      pdVar3 = (double *)((int)ar7 + 4);
      *(undefined4 *)pdVar3 = uVar27;
    }
    else {
      dVar15 = *pdVar5;
      in_xd4 = *(double *)(puVar13 + -0xc4);
      dVar31 = *(double *)(puVar13 + -0xbc);
      dVar32 = *(double *)(puVar13 + -0xb4);
      pdVar5 = (double *)(puVar13 + -0xa4);
      uVar25 = (undefined4)((ulonglong)*(double *)(puVar13 + -0xac) >> 0x20);
      ar7[2] = *(double *)(puVar13 + -0xac);
      ar7[1] = dVar32;
      *ar7 = dVar31;
      ar7[-1] = in_xd4;
      pdVar3 = ar7 + -2;
      *pdVar3 = dVar15;
    }
    uVar26 = SUB84(dVar15,0);
    *(undefined4 *)((int)pdVar3 + -4) = 0xe0000000;
    if (in_FPSCR_SZ == '\0') {
      in_dr10 = (double)(ulonglong)*(uint *)pdVar5;
      uVar26 = *(undefined4 *)((int)pdVar5 + 4);
      pdVar5 = pdVar5 + 1;
    }
    else {
      in_xd10 = *pdVar5;
      in_xd4 = pdVar5[1];
      pdVar5 = pdVar5 + 2;
    }
    dVar15 = (double)CONCAT44(uVar25,0xbf800000);
    if (in_FPSCR_SZ == '\0') {
      uVar25 = *(undefined4 *)pdVar5;
      pdVar5 = (double *)((int)pdVar5 + 4);
      dVar21 = (double)CONCAT44((int)((ulonglong)dVar21 >> 0x20),uVar25);
      dVar31 = (double)CONCAT44(uVar25,uVar26);
    }
    else {
      in_xd2 = *pdVar5;
      pdVar5 = pdVar5 + 1;
      uVar25 = (undefined4)((ulonglong)in_xd2 >> 0x20);
      dVar31 = in_xd2;
    }
    if (in_FPSCR_PR == '\0') {
      dVar21 = (double)CONCAT44((int)((ulonglong)dVar21 >> 0x20),SUB84(dVar21,0) + -1.0);
    }
    else {
      dVar21 = dVar21 + dVar15;
    }
    if (in_FPSCR_SZ == '\0') {
      dVar32 = (double)CONCAT44(*(undefined4 *)pdVar5,SUB84(in_dr10,0));
      pdVar3 = pdVar3 + 7;
      *(int *)pdVar3 = SUB84(dVar21,0);
      dVar21 = (double)CONCAT44((int)((ulonglong)dVar21 >> 0x20),SUB84(dVar31,0));
    }
    else {
      dVar32 = *pdVar5;
      pdVar3 = (double *)((int)pdVar3 + 0x34);
      *pdVar3 = in_xd2;
      in_xd2 = in_xd4;
    }
    if (in_FPSCR_PR == '\0') {
      dVar21 = (double)CONCAT44((int)((ulonglong)dVar21 >> 0x20),SUB84(dVar21,0) + -1.0);
    }
    else {
      dVar21 = dVar21 + dVar15;
    }
    if (in_FPSCR_SZ == '\0') {
      pdVar3 = (double *)((int)pdVar3 + -4);
      *(int *)pdVar3 = SUB84(dVar21,0);
      dVar21 = (double)CONCAT44((int)((ulonglong)dVar21 >> 0x20),SUB84(dVar32,0));
    }
    else {
      pdVar3 = pdVar3 + -1;
      *pdVar3 = in_xd2;
      in_xd2 = in_xd10;
    }
    if (in_FPSCR_PR == '\0') {
      dVar21 = (double)CONCAT44((int)((ulonglong)dVar21 >> 0x20),SUB84(dVar21,0) + -1.0);
    }
    else {
      dVar21 = dVar21 + dVar15;
    }
    if (in_FPSCR_SZ == '\0') {
      *(int *)((int)pdVar3 + -4) = SUB84(dVar21,0);
      *(undefined4 *)((int)pdVar3 + -0xc) = uVar25;
      *(int *)(pdVar3 + -2) = SUB84(dVar31,0);
      *(int *)((int)pdVar3 + -0x14) = SUB84(dVar32,0);
      *(int *)(pdVar3 + -3) = (int)((ulonglong)dVar32 >> 0x20);
      uVar26 = *(undefined4 *)(puVar13 + -0xa8);
      uVar25 = *(undefined4 *)(puVar13 + -0xa4);
      uVar28 = *(undefined4 *)(puVar13 + -0xa0);
      uVar27 = *(undefined4 *)(puVar13 + -0x9c);
      dVar15 = (double)CONCAT44(*(undefined4 *)(puVar13 + -0x98),0xbf800000);
      pdVar5 = (double *)(puVar13 + -0x94);
      *(undefined4 *)((int)pdVar3 + 0x1c) = *(undefined4 *)(puVar13 + -0x98);
      *(undefined4 *)(pdVar3 + 3) = uVar27;
      *(undefined4 *)((int)pdVar3 + 0x14) = uVar28;
      *(undefined4 *)(pdVar3 + 2) = uVar25;
      puVar6 = (undefined8 *)((int)pdVar3 + 0xc);
      *(undefined4 *)puVar6 = uVar26;
    }
    else {
      pdVar3[-1] = in_xd2;
      *(double *)((int)pdVar3 + -0x14) = dVar31;
      *(double *)((int)pdVar3 + -0x1c) = in_xd4;
      *(double *)((int)pdVar3 + -0x24) = in_xd10;
      *(double *)((int)pdVar3 + -0x2c) = dVar32;
      uVar22 = *(undefined8 *)(puVar13 + -0xa8);
      in_xd4 = *(double *)(puVar13 + -0xa0);
      uVar23 = *(undefined8 *)(puVar13 + -0x98);
      uVar33 = *(undefined8 *)(puVar13 + -0x90);
      dVar15 = *(double *)(puVar13 + -0x88);
      pdVar5 = (double *)(puVar13 + -0x80);
      *(double *)((int)pdVar3 + 4) = dVar15;
      *(undefined8 *)((int)pdVar3 + -4) = uVar33;
      *(undefined8 *)((int)pdVar3 + -0xc) = uVar23;
      *(double *)((int)pdVar3 + -0x14) = in_xd4;
      puVar6 = (undefined8 *)((int)pdVar3 + -0x1c);
      *puVar6 = uVar22;
    }
    *(undefined4 *)((int)puVar6 + -4) = 0xe0000000;
    if (in_FPSCR_SZ == '\0') {
      dVar32 = (double)(ulonglong)*(uint *)pdVar5;
      uVar25 = *(undefined4 *)(pdVar5 + 1);
      dVar31 = (double)CONCAT44(*(undefined4 *)((int)pdVar5 + 4),uVar25);
      pdVar5 = (double *)((int)pdVar5 + 0xc);
      dVar21 = (double)CONCAT44((int)((ulonglong)dVar21 >> 0x20),uVar25);
    }
    else {
      in_xd10 = *pdVar5;
      dVar31 = pdVar5[1];
      in_xd2 = pdVar5[2];
      pdVar5 = pdVar5 + 3;
      uVar25 = SUB84(dVar31,0);
      in_xd4 = in_xd2;
    }
    fVar14 = SUB84(dVar15,0);
    if (in_FPSCR_PR == '\0') {
      dVar21 = (double)CONCAT44((int)((ulonglong)dVar21 >> 0x20),SUB84(dVar21,0) + fVar14);
    }
    else {
      dVar21 = dVar21 + dVar15;
    }
    uVar26 = (undefined4)((ulonglong)dVar31 >> 0x20);
    if (in_FPSCR_SZ == '\0') {
      dVar32 = (double)CONCAT44(*(undefined4 *)pdVar5,SUB84(dVar32,0));
      pdVar5 = (double *)(puVar6 + 7);
      *(int *)pdVar5 = SUB84(dVar21,0);
      dVar21 = (double)CONCAT44((int)((ulonglong)dVar21 >> 0x20),uVar26);
    }
    else {
      dVar32 = *pdVar5;
      pdVar5 = (double *)((int)puVar6 + 0x34);
      *pdVar5 = in_xd2;
      in_xd2 = dVar31;
    }
    if (in_FPSCR_PR == '\0') {
      dVar21 = (double)CONCAT44((int)((ulonglong)dVar21 >> 0x20),SUB84(dVar21,0) + fVar14);
    }
    else {
      dVar21 = dVar21 + dVar15;
    }
    if (in_FPSCR_SZ == '\0') {
      pdVar5 = (double *)((int)pdVar5 + -4);
      *(int *)pdVar5 = SUB84(dVar21,0);
      dVar21 = (double)CONCAT44((int)((ulonglong)dVar21 >> 0x20),SUB84(dVar32,0));
    }
    else {
      pdVar5 = pdVar5 + -1;
      *pdVar5 = in_xd2;
      in_xd2 = in_xd10;
    }
    if (in_FPSCR_PR == '\0') {
      dVar21 = (double)CONCAT44((int)((ulonglong)dVar21 >> 0x20),SUB84(dVar21,0) + fVar14);
    }
    else {
      dVar21 = dVar21 + dVar15;
    }
    if (in_FPSCR_SZ == '\0') {
      *(int *)((int)pdVar5 + -4) = SUB84(dVar21,0);
      *(undefined4 *)((int)pdVar5 + -0xc) = uVar25;
      *(undefined4 *)(pdVar5 + -2) = uVar26;
      *(int *)((int)pdVar5 + -0x14) = SUB84(dVar32,0);
      pdVar5 = pdVar5 + -3;
      *(int *)pdVar5 = (int)((ulonglong)dVar32 >> 0x20);
    }
    else {
      pdVar5[-1] = in_xd2;
      *(double *)((int)pdVar5 + -0x14) = in_xd4;
      *(double *)((int)pdVar5 + -0x1c) = dVar31;
      *(double *)((int)pdVar5 + -0x24) = in_xd10;
      pdVar5 = (double *)((int)pdVar5 + -0x2c);
      *pdVar5 = dVar32;
    }
    if (iVar12 != 3) {
      if (in_FPSCR_SZ == '\0') {
        uVar25 = *(undefined4 *)(puVar13 + -0x60);
        uVar27 = *(undefined4 *)(puVar13 + -0x5c);
        uVar26 = *(undefined4 *)(puVar13 + -0x58);
        uVar28 = *(undefined4 *)(puVar13 + -0x54);
        dVar15 = (double)CONCAT44(uVar28,fVar14);
        pdVar3 = (double *)(puVar13 + -0x4c);
        *(undefined4 *)((int)pdVar5 + 0x34) = *(undefined4 *)(puVar13 + -0x50);
        *(undefined4 *)(pdVar5 + 6) = uVar28;
        *(undefined4 *)((int)pdVar5 + 0x2c) = uVar26;
        *(undefined4 *)(pdVar5 + 5) = uVar27;
        pdVar5 = (double *)((int)pdVar5 + 0x24);
        *(undefined4 *)pdVar5 = uVar25;
      }
      else {
        dVar31 = *(double *)(puVar13 + -0x60);
        dVar24 = *(double *)(puVar13 + -0x58);
        dVar29 = *(double *)(puVar13 + -0x50);
        dVar15 = *(double *)(puVar13 + -0x48);
        in_xd4 = *(double *)(puVar13 + -0x40);
        pdVar3 = (double *)(puVar13 + -0x38);
        pdVar5[6] = in_xd4;
        pdVar5[5] = dVar15;
        pdVar5[4] = dVar29;
        pdVar5[3] = dVar24;
        pdVar5 = pdVar5 + 2;
        *pdVar5 = dVar31;
      }
      *(undefined4 *)((int)pdVar5 + -4) = 0xe0000000;
      if (in_FPSCR_SZ == '\0') {
        dVar32 = (double)(ulonglong)*(uint *)pdVar3;
        uVar25 = *(undefined4 *)(pdVar3 + 1);
        dVar31 = (double)CONCAT44(*(undefined4 *)((int)pdVar3 + 4),uVar25);
        pdVar3 = (double *)((int)pdVar3 + 0xc);
        dVar21 = (double)CONCAT44((int)((ulonglong)dVar21 >> 0x20),uVar25);
      }
      else {
        in_xd10 = *pdVar3;
        dVar31 = pdVar3[1];
        in_xd2 = pdVar3[2];
        pdVar3 = pdVar3 + 3;
        uVar25 = SUB84(dVar31,0);
        in_xd4 = in_xd2;
      }
      fVar14 = SUB84(dVar15,0);
      if (in_FPSCR_PR == '\0') {
        dVar21 = (double)CONCAT44((int)((ulonglong)dVar21 >> 0x20),SUB84(dVar21,0) + fVar14);
      }
      else {
        dVar21 = dVar21 + dVar15;
      }
      uVar26 = (undefined4)((ulonglong)dVar31 >> 0x20);
      if (in_FPSCR_SZ == '\0') {
        dVar32 = (double)CONCAT44(*(undefined4 *)pdVar3,SUB84(dVar32,0));
        pdVar5 = pdVar5 + 7;
        *(int *)pdVar5 = SUB84(dVar21,0);
        dVar21 = (double)CONCAT44((int)((ulonglong)dVar21 >> 0x20),uVar26);
      }
      else {
        dVar32 = *pdVar3;
        pdVar5 = (double *)((int)pdVar5 + 0x34);
        *pdVar5 = in_xd2;
        in_xd2 = dVar31;
      }
      if (in_FPSCR_PR == '\0') {
        dVar21 = (double)CONCAT44((int)((ulonglong)dVar21 >> 0x20),SUB84(dVar21,0) + fVar14);
      }
      else {
        dVar21 = dVar21 + dVar15;
      }
      if (in_FPSCR_SZ == '\0') {
        pdVar5 = (double *)((int)pdVar5 + -4);
        *(int *)pdVar5 = SUB84(dVar21,0);
        dVar21 = (double)CONCAT44((int)((ulonglong)dVar21 >> 0x20),SUB84(dVar32,0));
      }
      else {
        pdVar5 = pdVar5 + -1;
        *pdVar5 = in_xd2;
        in_xd2 = in_xd10;
      }
      if (in_FPSCR_PR == '\0') {
        dVar21 = (double)CONCAT44((int)((ulonglong)dVar21 >> 0x20),SUB84(dVar21,0) + fVar14);
      }
      else {
        dVar21 = dVar21 + dVar15;
      }
      if (in_FPSCR_SZ == '\0') {
        *(int *)((int)pdVar5 + -4) = SUB84(dVar21,0);
        *(undefined4 *)((int)pdVar5 + -0xc) = uVar25;
        *(undefined4 *)(pdVar5 + -2) = uVar26;
        *(int *)((int)pdVar5 + -0x14) = SUB84(dVar32,0);
        pdVar5 = pdVar5 + -3;
        *(int *)pdVar5 = (int)((ulonglong)dVar32 >> 0x20);
      }
      else {
        pdVar5[-1] = in_xd2;
        *(double *)((int)pdVar5 + -0x14) = in_xd4;
        *(double *)((int)pdVar5 + -0x1c) = dVar31;
        *(double *)((int)pdVar5 + -0x24) = in_xd10;
        pdVar5 = (double *)((int)pdVar5 + -0x2c);
        *pdVar5 = dVar32;
      }
    }
    uVar25 = SUB84(dVar32,0);
    if (in_FPSCR_SZ == '\0') {
      uVar30 = *(undefined4 *)(puVar13 + -0x84);
      dVar15 = (double)CONCAT44(uVar30,SUB84(dVar15,0));
      uVar27 = *(undefined4 *)(puVar13 + -0x80);
      uVar26 = *(undefined4 *)(puVar13 + -0x7c);
      uVar28 = *(undefined4 *)(puVar13 + -0x78);
      pdVar3 = (double *)(puVar13 + -0x70);
      *(undefined4 *)((int)pdVar5 + 0x34) = *(undefined4 *)(puVar13 + -0x74);
      *(undefined4 *)(pdVar5 + 6) = uVar28;
      *(undefined4 *)((int)pdVar5 + 0x2c) = uVar26;
      *(undefined4 *)(pdVar5 + 5) = uVar27;
      pdVar5 = (double *)((int)pdVar5 + 0x24);
      *(undefined4 *)pdVar5 = uVar30;
    }
    else {
      dVar15 = *(double *)(puVar13 + -0x84);
      dVar31 = *(double *)(puVar13 + -0x7c);
      in_xd4 = *(double *)(puVar13 + -0x74);
      dVar32 = *(double *)(puVar13 + -0x6c);
      pdVar3 = (double *)(puVar13 + -0x5c);
      pdVar5[6] = *(double *)(puVar13 + -100);
      pdVar5[5] = dVar32;
      pdVar5[4] = in_xd4;
      pdVar5[3] = dVar31;
      pdVar5 = pdVar5 + 2;
      *pdVar5 = dVar15;
    }
    *(undefined4 *)((int)pdVar5 + -4) = 0xf0000000;
    if (in_FPSCR_SZ == '\0') {
      uVar25 = *(undefined4 *)pdVar3;
      uVar26 = *(undefined4 *)(pdVar3 + 1);
      dVar31 = (double)CONCAT44(*(undefined4 *)((int)pdVar3 + 4),uVar26);
      pdVar3 = (double *)((int)pdVar3 + 0xc);
      dVar21 = (double)CONCAT44((int)((ulonglong)dVar21 >> 0x20),uVar26);
    }
    else {
      in_xd10 = *pdVar3;
      dVar31 = pdVar3[1];
      in_xd2 = pdVar3[2];
      pdVar3 = pdVar3 + 3;
      uVar26 = SUB84(dVar31,0);
      in_xd4 = in_xd2;
    }
    fVar14 = SUB84(dVar15,0);
    if (in_FPSCR_PR == '\0') {
      dVar21 = (double)CONCAT44((int)((ulonglong)dVar21 >> 0x20),SUB84(dVar21,0) + fVar14);
    }
    else {
      dVar21 = dVar21 + dVar15;
    }
    uVar27 = (undefined4)((ulonglong)dVar31 >> 0x20);
    if (in_FPSCR_SZ == '\0') {
      dVar32 = (double)CONCAT44(*(undefined4 *)pdVar3,uVar25);
      pdVar5 = pdVar5 + 7;
      *(int *)pdVar5 = SUB84(dVar21,0);
      dVar21 = (double)CONCAT44((int)((ulonglong)dVar21 >> 0x20),uVar27);
    }
    else {
      dVar32 = *pdVar3;
      pdVar5 = (double *)((int)pdVar5 + 0x34);
      *pdVar5 = in_xd2;
      in_xd2 = dVar31;
    }
    if (in_FPSCR_PR == '\0') {
      dVar21 = (double)CONCAT44((int)((ulonglong)dVar21 >> 0x20),SUB84(dVar21,0) + fVar14);
    }
    else {
      dVar21 = dVar21 + dVar15;
    }
    if (in_FPSCR_SZ == '\0') {
      pdVar5 = (double *)((int)pdVar5 + -4);
      *(int *)pdVar5 = SUB84(dVar21,0);
      dVar21 = (double)CONCAT44((int)((ulonglong)dVar21 >> 0x20),SUB84(dVar32,0));
    }
    else {
      pdVar5 = pdVar5 + -1;
      *pdVar5 = in_xd2;
      in_xd2 = in_xd10;
    }
    if (in_FPSCR_PR == '\0') {
      fVar14 = SUB84(dVar21,0) + fVar14;
    }
    else {
      fVar14 = SUB84(dVar21 + dVar15,0);
    }
    if (in_FPSCR_SZ == '\0') {
      *(float *)((int)pdVar5 + -4) = fVar14;
      *(undefined4 *)((int)pdVar5 + -0xc) = uVar26;
      *(undefined4 *)(pdVar5 + -2) = uVar27;
      *(int *)((int)pdVar5 + -0x14) = SUB84(dVar32,0);
      pdVar5 = pdVar5 + -3;
      *(int *)pdVar5 = (int)((ulonglong)dVar32 >> 0x20);
    }
    else {
      pdVar5[-1] = in_xd2;
      *(double *)((int)pdVar5 + -0x14) = in_xd4;
      *(double *)((int)pdVar5 + -0x1c) = dVar31;
      *(double *)((int)pdVar5 + -0x24) = in_xd10;
      pdVar5 = (double *)((int)pdVar5 + -0x2c);
      *pdVar5 = dVar32;
    }
    ar7 = pdVar5 + 4;
    _DAT_8c4aa520 = _DAT_8c4aa520 + iVar12;
  }
  return ar7;
}

__asm__(".globl _FUN_8c214d6c\n.set _FUN_8c214d6c, _FUN_8c214d6c_def\n");
