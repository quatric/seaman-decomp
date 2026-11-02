#include "../decls.h"
undefined8 * FUN_8c214554_def(double *ar4,double *ar5,double *ar6,undefined8 *ar7)

{
  int iVar1;
  double *pdVar2;
  undefined8 *puVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  int iVar8;
  undefined8 *puVar9;
  float fVar10;
  double in_dr0;
  longlong lVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  double in_dr2;
  double dVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined4 uVar19;
  ulonglong uVar18;
  float fVar20;
  undefined4 uVar21;
  double in_dr4;
  longlong in_dr6;
  uint uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  double in_dr8;
  undefined8 uVar25;
  undefined8 in_dr10;
  undefined8 uVar27;
  float fVar29;
  undefined8 in_dr12;
  double dVar30;
  undefined4 in_fr15;
  double dVar31;
  double dVar32;
  double in_xd0;
  double in_xd2;
  double dVar33;
  double dVar34;
  longlong in_xd4;
  undefined8 uVar35;
  double in_xd6;
  double in_xd8;
  undefined8 uVar36;
  double in_xd10;
  double in_xd12;
  double in_xd14;
  char in_FPSCR_PR = 0;
  char in_FPSCR_SZ = 0;
  int aiStack_60 [2];
  float afStack_58 [7];
  undefined1 auStack_3c [16];
  undefined8 auStack_2c [2];
  undefined4 uVar26;
  undefined4 uVar28;
  
  if (in_FPSCR_SZ == '\0') {
    puVar9 = auStack_2c;
    auStack_2c[0] = CONCAT44((int)in_dr12,(int)((ulonglong)in_dr12 >> 0x20));
  }
  else {
    puVar9 = (undefined8 *)auStack_3c;
  }
  if ((_DAT_8c4aa4f0 & 0x10000) == 0) {
    if (in_FPSCR_SZ == '\0') {
      in_dr10 = CONCAT44((int)((ulonglong)in_dr10 >> 0x20),_DAT_8c4aa4a8);
      in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),_DAT_8c4aa4dc);
      dVar31 = (double)CONCAT44(_DAT_8c4aa4a8,in_fr15);
      uVar21 = _DAT_8c4aa4a8;
    }
    else {
      dVar31 = (double)CONCAT44(_DAT_8c4aa4ac,_DAT_8c4aa4a8);
      in_xd2 = (double)CONCAT44(_DAT_8c4aa4e0,_DAT_8c4aa4dc);
      uVar21 = (undefined4)in_dr10;
      in_xd10 = dVar31;
    }
    if (in_FPSCR_PR == '\0') {
      dVar31 = (double)CONCAT44((float)((ulonglong)dVar31 >> 0x20) * SUB84(in_dr2,0),SUB84(dVar31,0)
                               );
    }
    else {
      dVar31 = dVar31 * in_dr2;
    }
    if (in_FPSCR_SZ == '\0') {
      dVar30 = (double)CONCAT44(uVar21,_DAT_8c4aa4b4);
    }
    else {
      in_xd12 = (double)CONCAT44(_DAT_8c4aa4b8,_DAT_8c4aa4b4);
      dVar30 = in_xd10;
    }
    uVar21 = (undefined4)((ulonglong)in_dr10 >> 0x20);
    if (in_FPSCR_SZ == '\0') {
      in_dr2 = (double)(ulonglong)_DAT_8c4aa4b8;
    }
    else {
      in_xd2 = (double)CONCAT44(_DAT_8c4aa4bc,_DAT_8c4aa4b8);
    }
    fVar14 = (float)((ulonglong)dVar31 >> 0x20);
    if (in_FPSCR_PR == '\0') {
      dVar31 = (double)CONCAT44(uVar21,1.0 / fVar14);
    }
    else {
      dVar31 = (double)CONCAT44(uVar21,0x3f800000) / dVar31;
    }
    if (in_FPSCR_SZ == '\0') {
      dVar32 = (double)CONCAT44(_DAT_8c4aa4e0,SUB84(in_dr2,0));
      *(int *)((int)puVar9 + -0xb4) = SUB84(in_dr2,0);
    }
    else {
      dVar32 = (double)CONCAT44(_DAT_8c4aa4e4,_DAT_8c4aa4e0);
      *(double *)((int)puVar9 + -0xb4) = in_xd2;
    }
    if (in_FPSCR_PR == '\0') {
      dVar30 = (double)CONCAT44((float)((ulonglong)dVar30 >> 0x20) *
                                (float)((ulonglong)dVar32 >> 0x20),SUB84(dVar30,0));
    }
    else {
      dVar30 = dVar30 * dVar32;
    }
    piVar7 = (int *)((int)puVar9 + -0x24);
    fVar20 = (float)((ulonglong)dVar30 >> 0x20);
    if (in_FPSCR_PR == '\0') {
      dVar32 = (double)CONCAT44(fVar14,1.0 / fVar20);
    }
    else {
      dVar32 = (double)CONCAT44(fVar14,0x3f800000) / dVar30;
    }
    *piVar7 = (int)ar4;
    if (in_FPSCR_SZ == '\0') {
      dVar15 = (double)CONCAT44(*(undefined4 *)ar4,*(undefined4 *)((int)ar4 + 4));
    }
    else {
      in_xd2 = *(double *)((int)ar4 + 4);
      dVar15 = *ar4;
    }
    fVar29 = SUB84(dVar30,0);
    fVar14 = SUB84(dVar31,0);
    if (in_FPSCR_PR == '\0') {
      fVar12 = (SUB84(dVar15,0) - fVar29) * (float)((ulonglong)dVar15 >> 0x20) * fVar14;
    }
    else {
      fVar12 = SUB84((dVar15 - dVar30) * (dVar15 - dVar30) * dVar31,0);
    }
    if (in_FPSCR_SZ == '\0') {
      *(float *)((int)puVar9 + -0x20) = fVar12;
      dVar15 = (double)CONCAT44(*(undefined4 *)(ar4 + 1),*(undefined4 *)((int)puVar9 + -0xb4));
    }
    else {
      *(double *)((int)puVar9 + -0x20) = in_xd2;
      in_xd2 = *(double *)((int)puVar9 + -0xb4);
      dVar15 = ar4[1];
    }
    if (in_FPSCR_PR == '\0') {
      dVar15 = (double)CONCAT44((float)((ulonglong)dVar15 >> 0x20) - SUB84(dVar15,0),SUB84(dVar15,0)
                               );
    }
    else {
      dVar15 = dVar15 - dVar15;
    }
    if (in_FPSCR_SZ == '\0') {
      dVar15 = (double)CONCAT44((int)((ulonglong)dVar15 >> 0x20),*(undefined4 *)ar4);
    }
    else {
      in_xd2 = *ar4;
    }
    fVar12 = SUB84(dVar32,0);
    if (in_FPSCR_PR == '\0') {
      dVar15 = (double)CONCAT44((float)((ulonglong)dVar15 >> 0x20) * SUB84(dVar15,0) * fVar12,
                                SUB84(dVar15,0));
    }
    else {
      dVar15 = dVar15 * dVar15 * dVar32;
    }
    if (in_FPSCR_SZ == '\0') {
      *(int *)((int)puVar9 + -0x1c) = (int)((ulonglong)dVar15 >> 0x20);
    }
    else {
      *(double *)((int)puVar9 + -0x1c) = dVar15;
    }
    *(double **)((int)puVar9 + -0x18) = ar5;
    if (in_FPSCR_SZ == '\0') {
      dVar15 = (double)CONCAT44(*(undefined4 *)ar5,*(undefined4 *)((int)ar5 + 4));
    }
    else {
      in_xd2 = *(double *)((int)ar5 + 4);
      dVar15 = *ar5;
    }
    if (in_FPSCR_PR == '\0') {
      fVar13 = (SUB84(dVar15,0) - fVar29) * (float)((ulonglong)dVar15 >> 0x20) * fVar14;
    }
    else {
      fVar13 = SUB84((dVar15 - dVar30) * (dVar15 - dVar30) * dVar31,0);
    }
    if (in_FPSCR_SZ == '\0') {
      *(float *)((int)puVar9 + -0x14) = fVar13;
      dVar15 = (double)CONCAT44(*(undefined4 *)(ar5 + 1),*(undefined4 *)((int)puVar9 + -0xb4));
    }
    else {
      *(double *)((int)puVar9 + -0x14) = in_xd2;
      dVar15 = ar5[1];
      in_xd2 = *(double *)((int)puVar9 + -0xb4);
    }
    if (in_FPSCR_PR == '\0') {
      dVar15 = (double)CONCAT44((float)((ulonglong)dVar15 >> 0x20) - SUB84(dVar15,0),SUB84(dVar15,0)
                               );
    }
    else {
      dVar15 = dVar15 - dVar15;
    }
    if (in_FPSCR_SZ == '\0') {
      dVar15 = (double)CONCAT44((int)((ulonglong)dVar15 >> 0x20),*(undefined4 *)ar5);
    }
    else {
      in_xd2 = *ar5;
    }
    if (in_FPSCR_PR == '\0') {
      dVar15 = (double)CONCAT44((float)((ulonglong)dVar15 >> 0x20) * SUB84(dVar15,0) * fVar12,
                                SUB84(dVar15,0));
    }
    else {
      dVar15 = dVar15 * dVar15 * dVar32;
    }
    if (in_FPSCR_SZ == '\0') {
      *(int *)((int)puVar9 + -0x10) = (int)((ulonglong)dVar15 >> 0x20);
    }
    else {
      *(double *)((int)puVar9 + -0x10) = dVar15;
    }
    *(double **)((int)puVar9 + -0xc) = ar6;
    if (in_FPSCR_SZ == '\0') {
      dVar15 = (double)CONCAT44(*(undefined4 *)ar6,*(undefined4 *)((int)ar6 + 4));
    }
    else {
      in_xd2 = *(double *)((int)ar6 + 4);
      dVar15 = *ar6;
    }
    if (in_FPSCR_PR == '\0') {
      fVar14 = (SUB84(dVar15,0) - fVar29) * (float)((ulonglong)dVar15 >> 0x20) * fVar14;
    }
    else {
      fVar14 = SUB84((dVar15 - dVar30) * (dVar15 - dVar30) * dVar31,0);
    }
    if (in_FPSCR_SZ == '\0') {
      *(float *)((int)puVar9 + -8) = fVar14;
      dVar30 = (double)CONCAT44(*(undefined4 *)(ar6 + 1),*(undefined4 *)((int)puVar9 + -0xb4));
    }
    else {
      *(double *)((int)puVar9 + -8) = in_xd2;
      dVar30 = ar6[1];
      in_xd2 = *(double *)((int)puVar9 + -0xb4);
    }
    if (in_FPSCR_PR == '\0') {
      dVar30 = (double)CONCAT44((float)((ulonglong)dVar30 >> 0x20) - SUB84(dVar30,0),SUB84(dVar30,0)
                               );
    }
    else {
      dVar30 = dVar30 - dVar30;
    }
    if (in_FPSCR_SZ == '\0') {
      dVar30 = (double)CONCAT44((int)((ulonglong)dVar30 >> 0x20),*(undefined4 *)ar6);
    }
    else {
      in_xd2 = *ar6;
    }
    iVar8 = 0;
    if (in_FPSCR_PR == '\0') {
      dVar30 = (double)CONCAT44((float)((ulonglong)dVar30 >> 0x20) * SUB84(dVar30,0) * fVar12,
                                SUB84(dVar30,0));
    }
    else {
      dVar30 = dVar30 * dVar30 * dVar32;
    }
    if (in_FPSCR_SZ == '\0') {
      *(int *)((int)puVar9 + -4) = (int)((ulonglong)dVar30 >> 0x20);
    }
    else {
      *(double *)((int)puVar9 + -4) = dVar30;
    }
    iVar1 = 2;
    iVar4 = 0;
    while( true ) {
      uVar22 = (uint)((ulonglong)in_dr6 >> 0x20);
      fVar14 = (float)((ulonglong)in_dr4 >> 0x20);
      uVar21 = SUB84(in_dr8,0);
      fVar12 = (float)((ulonglong)in_dr8 >> 0x20);
      fVar13 = (float)((ulonglong)dVar31 >> 0x20);
      if (2 < iVar4) break;
      piVar5 = piVar7 + iVar1 * 3;
      if (in_FPSCR_SZ == '\0') {
        uVar16 = CONCAT44(*(undefined4 *)*piVar5,0x3f800000);
      }
      else {
        uVar16 = *(undefined8 *)*piVar5;
      }
      piVar6 = piVar7 + iVar4 * 3;
      if (in_FPSCR_SZ == '\0') {
        uVar17 = CONCAT44(*(undefined4 *)*piVar6,(float)uVar16);
      }
      else {
        uVar17 = *(undefined8 *)*piVar6;
      }
      fVar10 = (float)uVar17;
      if (((in_FPSCR_PR == '\0' && (float)uVar16 < (float)((ulonglong)uVar16 >> 0x20)) ^ 1) !=
          -((in_FPSCR_PR == '\0' && fVar10 < (float)((ulonglong)uVar17 >> 0x20)) - 1)) {
        pdVar2 = (double *)*piVar5;
        *(double **)((int)puVar9 + -0xa0) = pdVar2;
        if (in_FPSCR_SZ == '\0') {
          dVar31 = (double)CONCAT44(fVar13,*(undefined4 *)pdVar2);
        }
        else {
          in_xd10 = *pdVar2;
        }
        if (in_FPSCR_SZ == '\0') {
          in_dr0 = (double)CONCAT44((int)((ulonglong)in_dr0 >> 0x20),*(undefined4 *)*piVar6);
          fVar10 = SUB84(dVar31,0);
        }
        else {
          in_xd0 = *(double *)*piVar6;
          in_xd2 = in_xd10;
        }
        dVar30 = (double)CONCAT44(0x3f800000,-fVar10);
        if (in_FPSCR_PR == '\0') {
          dVar30 = (double)CONCAT44(0x3f800000,-fVar10 + 1.0);
          dVar15 = (double)CONCAT44((int)((ulonglong)in_dr0 >> 0x20),
                                    SUB84(in_dr0,0) - SUB84(dVar31,0));
        }
        else {
          dVar30 = dVar30 + dVar30;
          dVar15 = in_dr0 - dVar31;
        }
        if (in_FPSCR_SZ == '\0') {
          dVar32 = (double)CONCAT44((int)((ulonglong)dVar32 >> 0x20),piVar5[1]);
          dVar31 = (double)CONCAT44((int)((ulonglong)dVar31 >> 0x20),SUB84(dVar30,0));
        }
        else {
          in_xd14 = *(double *)(piVar5 + 1);
          in_xd10 = in_xd2;
        }
        if (in_FPSCR_PR == '\0') {
          dVar31 = (double)CONCAT44((int)((ulonglong)dVar31 >> 0x20),
                                    SUB84(dVar31,0) / SUB84(dVar15,0));
        }
        else {
          dVar31 = dVar31 / dVar15;
        }
        if (in_FPSCR_SZ == '\0') {
          dVar30 = (double)CONCAT44((int)((ulonglong)dVar30 >> 0x20),piVar6[1]);
          dVar15 = (double)((ulonglong)dVar32 & 0xffffffff);
          dVar34 = in_xd0;
        }
        else {
          in_xd2 = *(double *)(piVar6 + 1);
          dVar34 = in_xd14;
        }
        if (in_FPSCR_PR == '\0') {
          dVar30 = (double)CONCAT44((int)((ulonglong)dVar30 >> 0x20),
                                    SUB84(dVar30,0) - SUB84(dVar32,0));
        }
        else {
          dVar30 = dVar30 - dVar32;
        }
        uVar19 = SUB84(dVar31,0);
        dVar33 = in_xd10;
        if (in_FPSCR_SZ == '\0') {
          dVar33 = (double)CONCAT44(uVar19,SUB84(dVar15,0));
        }
        fVar13 = SUB84(dVar30,0);
        if (in_FPSCR_PR == '\0') {
          dVar33 = (double)(ulonglong)
                           (uint)((float)((ulonglong)dVar33 >> 0x20) * fVar13 + SUB84(dVar33,0));
        }
        if (in_FPSCR_SZ == '\0') {
          fVar13 = (float)(uint)piVar5[2];
          dVar30 = (double)CONCAT44((int)((ulonglong)dVar30 >> 0x20),fVar13);
          *(float *)((int)puVar9 + -0x9c) = fVar13;
          dVar32 = (double)CONCAT44((int)((ulonglong)dVar32 >> 0x20),SUB84(dVar33,0));
          dVar33 = (double)CONCAT44(fVar13,piVar6[2]);
          in_xd0 = dVar34;
          dVar15 = in_xd2;
        }
        else {
          dVar33 = *(double *)(piVar5 + 2);
          *(double *)((int)puVar9 + -0x9c) = dVar33;
          in_xd0 = *(double *)(piVar6 + 2);
          in_xd14 = dVar34;
          dVar15 = dVar33;
        }
        if (in_FPSCR_PR == '\0') {
          fVar10 = SUB84(dVar33,0) - (float)((ulonglong)dVar33 >> 0x20);
        }
        else {
          fVar10 = SUB84(dVar33 - dVar33,0);
        }
        dVar34 = in_xd10;
        if (in_FPSCR_SZ == '\0') {
          dVar34 = (double)CONCAT44(uVar19,fVar10);
        }
        if (in_FPSCR_PR == '\0') {
          dVar30 = (double)CONCAT44((int)((ulonglong)dVar30 >> 0x20),
                                    (float)((ulonglong)dVar34 >> 0x20) * SUB84(dVar34,0) + fVar13);
        }
        if (in_FPSCR_SZ == '\0') {
          *(int *)((int)puVar9 + -0x98) = SUB84(dVar30,0);
        }
        else {
          *(double *)((int)puVar9 + -0x98) = dVar15;
        }
        fVar13 = SUB84(dVar32,0);
        dVar33 = in_xd14;
        in_xd2 = in_xd12;
        if (in_FPSCR_SZ == '\0') {
          dVar30 = (double)CONCAT44((int)((ulonglong)dVar30 >> 0x20),fVar29);
          dVar33 = (double)CONCAT44(fVar13,SUB84(dVar34,0));
          in_xd2 = dVar15;
        }
        fVar10 = (float)((ulonglong)dVar32 >> 0x20);
        if (in_FPSCR_PR == '\0') {
          dVar30 = (double)CONCAT44((int)((ulonglong)dVar30 >> 0x20),
                                    (float)((ulonglong)dVar33 >> 0x20) * fVar10 + SUB84(dVar30,0));
        }
        pdVar2 = (double *)((int)puVar9 + iVar8 * 0x1c + -0x94);
        if (in_FPSCR_SZ == '\0') {
          *(int *)pdVar2 = SUB84(dVar30,0);
          in_dr0 = (double)CONCAT44(*(undefined4 *)((int)puVar9 + -0x98),SUB84(dVar33,0));
          dVar30 = (double)CONCAT44((int)((ulonglong)dVar30 >> 0x20),
                                    *(undefined4 *)((int)puVar9 + -0xb4));
        }
        else {
          *pdVar2 = in_xd2;
          in_dr0 = *(double *)((int)puVar9 + -0x98);
          in_xd2 = *(double *)((int)puVar9 + -0xb4);
        }
        if (in_FPSCR_PR == '\0') {
          dVar30 = (double)CONCAT44((int)((ulonglong)dVar30 >> 0x20),
                                    (float)((ulonglong)in_dr0 >> 0x20) * fVar20 + SUB84(dVar30,0));
        }
        if (in_FPSCR_SZ == '\0') {
          *(int *)((int)pdVar2 + 4) = SUB84(dVar30,0);
          *(int *)(pdVar2 + 1) = (int)((ulonglong)dVar30 >> 0x20);
        }
        else {
          *(double *)((int)pdVar2 + 4) = in_xd2;
          pdVar2[1] = dVar30;
        }
        if (DAT_8c277acc == 0) {
          piVar5 = piVar7 + iVar1 * 3;
          dVar15 = in_xd10;
          if (in_FPSCR_SZ == '\0') {
            dVar15 = (double)CONCAT44(uVar19,SUB84(in_dr0,0));
          }
          iVar1 = *piVar5;
          *(int *)((int)puVar9 + -0xa4) = iVar1;
          if (in_FPSCR_SZ == '\0') {
            fVar13 = *(float *)(iVar1 + 0x14);
            dVar32 = (double)CONCAT44(fVar10,fVar13);
            dVar30 = (double)CONCAT44(fVar13,SUB84(dVar30,0));
          }
          else {
            dVar30 = *(double *)(iVar1 + 0x14);
            in_xd14 = dVar30;
          }
          piVar6 = piVar7 + iVar4 * 3;
          if (in_FPSCR_SZ == '\0') {
            dVar30 = (double)CONCAT44((int)((ulonglong)dVar30 >> 0x20),
                                      *(undefined4 *)(*piVar6 + 0x14));
          }
          else {
            in_xd2 = *(double *)(*piVar6 + 0x14);
          }
          if (in_FPSCR_PR == '\0') {
            fVar13 = SUB84(dVar30,0) - fVar13;
            dVar30 = (double)CONCAT44((float)((ulonglong)dVar15 >> 0x20) * fVar13 +
                                      (float)((ulonglong)dVar30 >> 0x20),fVar13);
          }
          else {
            dVar30 = dVar30 - dVar32;
          }
          dVar34 = in_dr8;
          lVar11 = in_xd4;
          if (in_FPSCR_SZ == '\0') {
            dVar30 = (double)CONCAT44((int)((ulonglong)dVar30 >> 0x20),fVar12);
            dVar34 = in_xd2;
            lVar11 = CONCAT44(SUB84(in_dr4,0),SUB84(dVar15,0));
          }
          if (in_FPSCR_PR == '\0') {
            dVar30 = (double)(ulonglong)
                             (uint)((float)((ulonglong)lVar11 >> 0x20) *
                                    (float)((ulonglong)dVar30 >> 0x20) + SUB84(dVar30,0));
          }
          if (in_FPSCR_SZ == '\0') {
            *(int *)((int)pdVar2 + 0xc) = SUB84(dVar30,0);
          }
          else {
            *(double *)((int)pdVar2 + 0xc) = dVar34;
          }
          iVar1 = *piVar5;
          *(int *)((int)puVar9 + -0xa8) = iVar1;
          if (in_FPSCR_SZ == '\0') {
            dVar32 = (double)CONCAT44((int)((ulonglong)dVar32 >> 0x20),*(undefined4 *)(iVar1 + 0x18)
                                     );
          }
          else {
            in_xd14 = *(double *)(iVar1 + 0x18);
          }
          if (in_FPSCR_SZ == '\0') {
            dVar15 = (double)CONCAT44(uVar19,(int)lVar11);
            dVar30 = (double)CONCAT44(SUB84(dVar32,0),*(undefined4 *)(*piVar6 + 0x18));
          }
          else {
            dVar34 = *(double *)(*piVar6 + 0x18);
            dVar15 = in_xd10;
            dVar30 = in_xd14;
          }
          if (in_FPSCR_PR == '\0') {
            fVar13 = SUB84(dVar30,0) - SUB84(dVar32,0);
            dVar30 = (double)CONCAT44((float)((ulonglong)dVar15 >> 0x20) * fVar13 +
                                      (float)((ulonglong)dVar30 >> 0x20),fVar13);
          }
          else {
            dVar30 = dVar30 - dVar32;
          }
          dVar33 = in_xd8;
          lVar11 = in_dr6;
          if (in_FPSCR_SZ == '\0') {
            dVar30 = (double)CONCAT44((int)((ulonglong)dVar30 >> 0x20),uVar21);
            dVar33 = dVar34;
            lVar11 = CONCAT44(uVar22,SUB84(dVar15,0));
          }
          if (in_FPSCR_PR == '\0') {
            dVar30 = (double)(ulonglong)
                             (uint)((float)((ulonglong)lVar11 >> 0x20) *
                                    (float)((ulonglong)dVar30 >> 0x20) + SUB84(dVar30,0));
          }
          if (in_FPSCR_SZ == '\0') {
            *(int *)(pdVar2 + 2) = SUB84(dVar30,0);
            dVar30 = (double)CONCAT44(uVar19,(int)lVar11);
          }
          else {
            pdVar2[2] = dVar33;
            dVar30 = in_xd10;
          }
          iVar1 = *piVar5;
          *(int *)((int)puVar9 + -0xac) = iVar1;
          if (in_FPSCR_SZ == '\0') {
            dVar32 = (double)CONCAT44((int)((ulonglong)dVar32 >> 0x20),*(undefined4 *)(iVar1 + 0x1c)
                                     );
          }
          else {
            in_xd14 = *(double *)(iVar1 + 0x1c);
          }
          if (in_FPSCR_SZ == '\0') {
            dVar15 = (double)CONCAT44(SUB84(dVar32,0),*(undefined4 *)(*piVar6 + 0x1c));
          }
          else {
            dVar33 = *(double *)(*piVar6 + 0x1c);
            dVar15 = in_xd14;
          }
          if (in_FPSCR_PR == '\0') {
            fVar13 = SUB84(dVar15,0) - SUB84(dVar32,0);
            dVar15 = (double)CONCAT44((float)((ulonglong)dVar30 >> 0x20) * fVar13 +
                                      (float)((ulonglong)dVar15 >> 0x20),fVar13);
          }
          else {
            dVar15 = dVar15 - dVar32;
          }
          in_xd2 = dVar31;
          dVar34 = in_xd6;
          if (in_FPSCR_SZ == '\0') {
            dVar15 = (double)CONCAT44((int)((ulonglong)dVar15 >> 0x20),
                                      (int)((ulonglong)dVar31 >> 0x20));
            in_xd2 = dVar33;
            dVar34 = (double)CONCAT44((int)in_dr6,SUB84(dVar30,0));
          }
          if (in_FPSCR_PR == '\0') {
            fVar13 = (float)((ulonglong)dVar15 >> 0x20);
            dVar15 = (double)CONCAT44(fVar13,(float)((ulonglong)dVar34 >> 0x20) * fVar13 +
                                             SUB84(dVar15,0));
          }
          if (in_FPSCR_SZ == '\0') {
            *(int *)((int)pdVar2 + 0x14) = SUB84(dVar15,0);
          }
          else {
            *(double *)((int)pdVar2 + 0x14) = in_xd2;
          }
          iVar1 = *piVar5;
          *(int *)((int)puVar9 + -0xb0) = iVar1;
          if (in_FPSCR_SZ == '\0') {
            dVar32 = (double)CONCAT44((int)((ulonglong)dVar32 >> 0x20),*(undefined4 *)(iVar1 + 0x10)
                                     );
            dVar15 = (double)CONCAT44((int)((ulonglong)dVar15 >> 0x20),
                                      *(undefined4 *)(*piVar6 + 0x10));
          }
          else {
            in_xd14 = *(double *)(iVar1 + 0x10);
            in_xd2 = *(double *)(*piVar6 + 0x10);
          }
          if (in_FPSCR_PR == '\0') {
            fVar13 = SUB84(dVar15,0) - SUB84(dVar32,0);
          }
          else {
            fVar13 = SUB84(dVar15 - dVar32,0);
          }
          in_dr0 = in_xd10;
          dVar30 = in_xd14;
          if (in_FPSCR_SZ == '\0') {
            in_dr0 = (double)CONCAT44(uVar19,SUB84(dVar34,0));
            dVar30 = (double)CONCAT44(SUB84(dVar32,0),fVar13);
          }
          if (in_FPSCR_PR == '\0') {
            dVar30 = (double)CONCAT44(((float)((ulonglong)in_dr0 >> 0x20) * SUB84(dVar30,0) +
                                      (float)((ulonglong)dVar30 >> 0x20)) * fVar14,SUB84(dVar30,0));
          }
          else {
            dVar30 = dVar30 * in_dr4;
          }
          if (in_FPSCR_SZ == '\0') {
            *(int *)(pdVar2 + 3) = (int)((ulonglong)dVar30 >> 0x20);
          }
          else {
            pdVar2[3] = dVar30;
          }
        }
        iVar8 = iVar8 + 1;
      }
      piVar5 = piVar7 + iVar4 * 3;
      if (in_FPSCR_SZ == '\0') {
        uVar16 = CONCAT44(*(undefined4 *)*piVar5,0x3f800000);
      }
      else {
        uVar16 = *(undefined8 *)*piVar5;
      }
      if (in_FPSCR_PR == '\0' && (float)uVar16 < (float)((ulonglong)uVar16 >> 0x20)) {
        if (in_FPSCR_SZ == '\0') {
          uVar16 = CONCAT44(*(undefined4 *)(*piVar5 + 4),(float)uVar16);
        }
        else {
          uVar16 = *(undefined8 *)(*piVar5 + 4);
        }
        puVar3 = (undefined8 *)((int)puVar9 + iVar8 * 0x1c + -0x94);
        if (in_FPSCR_SZ == '\0') {
          *(int *)puVar3 = (int)((ulonglong)uVar16 >> 0x20);
        }
        else {
          *puVar3 = uVar16;
        }
        if (in_FPSCR_SZ == '\0') {
          uVar19 = *(undefined4 *)(*piVar5 + 8);
          uVar16 = CONCAT44(uVar19,(int)uVar16);
          *(undefined4 *)((int)puVar3 + 4) = uVar19;
        }
        else {
          uVar16 = *(undefined8 *)(*piVar5 + 8);
          *(undefined8 *)((int)puVar3 + 4) = uVar16;
        }
        if (in_FPSCR_SZ == '\0') {
          uVar19 = *(undefined4 *)(*piVar5 + 0xc);
          uVar16 = CONCAT44(uVar19,(int)uVar16);
          *(undefined4 *)(puVar3 + 1) = uVar19;
        }
        else {
          uVar16 = *(undefined8 *)(*piVar5 + 0xc);
          puVar3[1] = uVar16;
        }
        if (DAT_8c277acc == 0) {
          dVar30 = in_dr8;
          if (in_FPSCR_SZ == '\0') {
            dVar30 = (double)CONCAT44(fVar12,(int)uVar16);
          }
          piVar5 = piVar7 + iVar4 * 3;
          lVar11 = in_xd4;
          if (in_FPSCR_SZ == '\0') {
            lVar11 = CONCAT44(SUB84(in_dr4,0),SUB84(in_dr0,0));
          }
          if (in_FPSCR_SZ == '\0') {
            lVar11 = CONCAT44((int)((ulonglong)lVar11 >> 0x20),*(undefined4 *)(*piVar5 + 0x14));
          }
          else {
            in_xd0 = *(double *)(*piVar5 + 0x14);
          }
          if (in_FPSCR_PR == '\0') {
            dVar30 = (double)CONCAT44((float)((ulonglong)lVar11 >> 0x20) * (float)lVar11 +
                                      (float)((ulonglong)dVar30 >> 0x20),SUB84(dVar30,0));
          }
          if (in_FPSCR_SZ == '\0') {
            *(int *)((int)puVar3 + 0xc) = (int)((ulonglong)dVar30 >> 0x20);
            lVar11 = CONCAT44(uVar22,(float)lVar11);
          }
          else {
            *(double *)((int)puVar3 + 0xc) = dVar30;
            lVar11 = in_dr6;
          }
          if (in_FPSCR_SZ == '\0') {
            lVar11 = CONCAT44((int)((ulonglong)lVar11 >> 0x20),*(undefined4 *)(*piVar5 + 0x18));
            dVar30 = (double)CONCAT44(uVar21,SUB84(dVar30,0));
          }
          else {
            in_xd0 = *(double *)(*piVar5 + 0x18);
            dVar30 = in_xd8;
          }
          if (in_FPSCR_PR == '\0') {
            dVar30 = (double)CONCAT44((float)((ulonglong)lVar11 >> 0x20) * (float)lVar11 +
                                      (float)((ulonglong)dVar30 >> 0x20),SUB84(dVar30,0));
          }
          if (in_FPSCR_SZ == '\0') {
            *(int *)(puVar3 + 2) = (int)((ulonglong)dVar30 >> 0x20);
            in_dr0 = (double)CONCAT44((int)in_dr6,(float)lVar11);
          }
          else {
            puVar3[2] = dVar30;
            in_dr0 = in_xd6;
          }
          if (in_FPSCR_SZ == '\0') {
            in_dr0 = (double)CONCAT44((int)((ulonglong)in_dr0 >> 0x20),
                                      *(undefined4 *)(*piVar5 + 0x1c));
            dVar30 = (double)CONCAT44((int)((ulonglong)dVar31 >> 0x20),SUB84(dVar30,0));
          }
          else {
            in_xd0 = *(double *)(*piVar5 + 0x1c);
            dVar30 = dVar31;
          }
          if (in_FPSCR_PR == '\0') {
            dVar30 = (double)CONCAT44((float)((ulonglong)in_dr0 >> 0x20) * SUB84(in_dr0,0) +
                                      (float)((ulonglong)dVar30 >> 0x20),SUB84(dVar30,0));
          }
          if (in_FPSCR_SZ == '\0') {
            *(int *)((int)puVar3 + 0x14) = (int)((ulonglong)dVar30 >> 0x20);
          }
          else {
            *(double *)((int)puVar3 + 0x14) = dVar30;
          }
          if (in_FPSCR_SZ == '\0') {
            dVar30 = (double)CONCAT44(*(undefined4 *)(*piVar5 + 0x10),SUB84(dVar30,0));
          }
          else {
            dVar30 = *(double *)(*piVar5 + 0x10);
          }
          if (in_FPSCR_PR == '\0') {
            dVar30 = (double)CONCAT44((float)((ulonglong)dVar30 >> 0x20) * fVar14,SUB84(dVar30,0));
          }
          else {
            dVar30 = dVar30 * in_dr4;
          }
          if (in_FPSCR_SZ == '\0') {
            *(int *)(puVar3 + 3) = (int)((ulonglong)dVar30 >> 0x20);
          }
          else {
            puVar3[3] = dVar30;
          }
        }
        iVar8 = iVar8 + 1;
      }
      iVar1 = iVar4;
      iVar4 = iVar4 + 1;
    }
    if (DAT_8c277acc != 0) {
      piVar7 = (int *)((int)puVar9 + -0xc);
      if (in_FPSCR_SZ == '\0') {
        uVar18 = CONCAT44(*(undefined4 *)(*piVar7 + 0x14),fVar12);
        lVar11 = (longlong)in_dr4 << 0x20;
      }
      else {
        uVar18 = *(ulonglong *)(*piVar7 + 0x14);
        in_xd2 = in_dr8;
        lVar11 = in_xd4;
      }
      if (in_FPSCR_PR == '\0') {
        uVar18 = (ulonglong)
                 (uint)((float)((ulonglong)lVar11 >> 0x20) * (float)(uVar18 >> 0x20) + (float)uVar18
                       );
      }
      if (in_FPSCR_SZ == '\0') {
        *(int *)((int)puVar9 + -0x50) = (int)uVar18;
        lVar11 = (ulonglong)uVar22 << 0x20;
      }
      else {
        *(double *)((int)puVar9 + -0x50) = in_xd2;
        lVar11 = in_dr6;
      }
      if (in_FPSCR_SZ == '\0') {
        uVar18 = CONCAT44(*(undefined4 *)(*piVar7 + 0x18),uVar21);
      }
      else {
        uVar18 = *(ulonglong *)(*piVar7 + 0x18);
        in_xd2 = in_xd8;
      }
      if (in_FPSCR_PR == '\0') {
        uVar18 = (ulonglong)
                 (uint)((float)((ulonglong)lVar11 >> 0x20) * (float)(uVar18 >> 0x20) + (float)uVar18
                       );
      }
      if (in_FPSCR_SZ == '\0') {
        *(int *)((int)puVar9 + -0x4c) = (int)uVar18;
        dVar30 = (double)(in_dr6 << 0x20);
      }
      else {
        *(double *)((int)puVar9 + -0x4c) = in_xd2;
        dVar30 = in_xd6;
      }
      if (in_FPSCR_SZ == '\0') {
        dVar32 = (double)CONCAT44(*(undefined4 *)(*piVar7 + 0x1c),fVar13);
      }
      else {
        dVar32 = *(double *)(*piVar7 + 0x1c);
        in_xd2 = dVar31;
      }
      if (in_FPSCR_PR == '\0') {
        fVar20 = (float)((ulonglong)dVar32 >> 0x20);
        dVar32 = (double)CONCAT44(fVar20,(float)((ulonglong)dVar30 >> 0x20) * fVar20 +
                                         SUB84(dVar32,0));
      }
      if (in_FPSCR_SZ == '\0') {
        *(int *)((int)puVar9 + -0x48) = SUB84(dVar32,0);
      }
      else {
        *(double *)((int)puVar9 + -0x48) = in_xd2;
      }
      if (in_FPSCR_SZ == '\0') {
        dVar32 = (double)CONCAT44((int)((ulonglong)dVar32 >> 0x20),*(undefined4 *)(*piVar7 + 0x10));
      }
      else {
        in_xd2 = *(double *)(*piVar7 + 0x10);
      }
      if (in_FPSCR_PR == '\0') {
        dVar32 = (double)CONCAT44((int)((ulonglong)dVar32 >> 0x20),SUB84(dVar32,0) * fVar14);
      }
      else {
        dVar32 = dVar32 * in_dr4;
      }
      if (in_FPSCR_SZ == '\0') {
        *(int *)((int)puVar9 + -0x44) = SUB84(dVar32,0);
      }
      else {
        *(double *)((int)puVar9 + -0x44) = in_xd2;
      }
      if (iVar8 != 3) {
        piVar7 = (int *)((int)puVar9 + -0xc);
        if (in_FPSCR_SZ == '\0') {
          in_xd4 = (longlong)in_dr4 << 0x20;
          dVar32 = (double)CONCAT44((int)((ulonglong)dVar32 >> 0x20),*(undefined4 *)(*piVar7 + 0x14)
                                   );
        }
        else {
          in_xd2 = *(double *)(*piVar7 + 0x14);
        }
        if (in_FPSCR_PR == '\0') {
          in_dr8 = (double)CONCAT44((float)((ulonglong)in_xd4 >> 0x20) * SUB84(dVar32,0) + fVar12,
                                    uVar21);
        }
        if (in_FPSCR_SZ == '\0') {
          *(int *)((int)puVar9 + -0x34) = (int)((ulonglong)in_dr8 >> 0x20);
          lVar11 = (ulonglong)uVar22 << 0x20;
        }
        else {
          *(double *)((int)puVar9 + -0x34) = in_dr8;
          lVar11 = in_dr6;
        }
        if (in_FPSCR_SZ == '\0') {
          dVar32 = (double)CONCAT44((int)((ulonglong)dVar32 >> 0x20),*(undefined4 *)(*piVar7 + 0x18)
                                   );
        }
        else {
          in_xd2 = *(double *)(*piVar7 + 0x18);
        }
        if (in_FPSCR_PR == '\0') {
          in_dr8 = (double)(ulonglong)
                           (uint)((float)((ulonglong)lVar11 >> 0x20) * SUB84(dVar32,0) +
                                 SUB84(in_dr8,0));
        }
        if (in_FPSCR_SZ == '\0') {
          in_xd6 = (double)(in_dr6 << 0x20);
          *(int *)((int)puVar9 + -0x30) = SUB84(in_dr8,0);
        }
        else {
          *(double *)((int)puVar9 + -0x30) = in_xd8;
        }
        if (in_FPSCR_SZ == '\0') {
          dVar32 = (double)CONCAT44((int)((ulonglong)dVar32 >> 0x20),*(undefined4 *)(*piVar7 + 0x1c)
                                   );
        }
        else {
          in_xd2 = *(double *)(*piVar7 + 0x1c);
        }
        if (in_FPSCR_PR == '\0') {
          dVar31 = (double)CONCAT44((float)((ulonglong)in_xd6 >> 0x20) * SUB84(dVar32,0) + fVar13,
                                    SUB84(dVar31,0));
        }
        if (in_FPSCR_SZ == '\0') {
          *(int *)((int)puVar9 + -0x2c) = (int)((ulonglong)dVar31 >> 0x20);
        }
        else {
          *(double *)((int)puVar9 + -0x2c) = dVar31;
        }
        if (in_FPSCR_SZ == '\0') {
          dVar32 = (double)CONCAT44((int)((ulonglong)dVar32 >> 0x20),*(undefined4 *)(*piVar7 + 0x10)
                                   );
        }
        else {
          in_xd2 = *(double *)(*piVar7 + 0x10);
        }
        if (in_FPSCR_PR == '\0') {
          fVar14 = SUB84(dVar32,0) * fVar14;
        }
        else {
          fVar14 = SUB84(dVar32 * in_dr4,0);
        }
        if (in_FPSCR_SZ == '\0') {
          *(float *)((int)puVar9 + -0x28) = fVar14;
        }
        else {
          *(double *)((int)puVar9 + -0x28) = in_xd2;
        }
      }
    }
    if (in_FPSCR_SZ == '\0') {
      uVar26 = *(undefined4 *)((int)puVar9 + -0x94);
      uVar24 = *(undefined4 *)((int)puVar9 + -0x90);
      uVar28 = *(undefined4 *)((int)puVar9 + -0x8c);
      uVar21 = *(undefined4 *)((int)puVar9 + -0x88);
      uVar23 = *(undefined4 *)((int)puVar9 + -0x84);
      uVar19 = *(undefined4 *)((int)puVar9 + -0x7c);
      *(undefined4 *)((int)ar7 + 0x1c) = *(undefined4 *)((int)puVar9 + -0x80);
      *(undefined4 *)(ar7 + 3) = uVar23;
      *(undefined4 *)((int)ar7 + 0x14) = uVar21;
      *(undefined4 *)(ar7 + 2) = uVar19;
      *(undefined4 *)((int)ar7 + 0xc) = uVar28;
      *(undefined4 *)(ar7 + 1) = uVar24;
      puVar3 = (undefined8 *)((int)ar7 + 4);
      *(undefined4 *)puVar3 = uVar26;
    }
    else {
      uVar25 = *(undefined8 *)((int)puVar9 + -0x94);
      uVar36 = *(undefined8 *)((int)puVar9 + -0x8c);
      uVar27 = *(undefined8 *)((int)puVar9 + -0x84);
      uVar35 = *(undefined8 *)((int)puVar9 + -0x7c);
      uVar17 = *(undefined8 *)((int)puVar9 + -0x74);
      uVar16 = *(undefined8 *)((int)puVar9 + -100);
      ar7[3] = *(undefined8 *)((int)puVar9 + -0x6c);
      ar7[2] = uVar17;
      ar7[1] = uVar35;
      *ar7 = uVar16;
      ar7[-1] = uVar27;
      ar7[-2] = uVar36;
      puVar3 = ar7 + -3;
      *puVar3 = uVar25;
    }
    *(undefined4 *)((int)puVar3 + -4) = 0xe0000000;
    if (in_FPSCR_SZ == '\0') {
      uVar24 = *(undefined4 *)((int)puVar9 + -0x78);
      uVar26 = *(undefined4 *)((int)puVar9 + -0x74);
      uVar28 = *(undefined4 *)((int)puVar9 + -0x70);
      uVar21 = *(undefined4 *)((int)puVar9 + -0x6c);
      uVar23 = *(undefined4 *)((int)puVar9 + -0x68);
      uVar19 = *(undefined4 *)((int)puVar9 + -0x60);
      *(undefined4 *)(puVar3 + 7) = *(undefined4 *)((int)puVar9 + -100);
      *(undefined4 *)((int)puVar3 + 0x34) = uVar23;
      *(undefined4 *)(puVar3 + 6) = uVar21;
      *(undefined4 *)((int)puVar3 + 0x2c) = uVar19;
      *(undefined4 *)(puVar3 + 5) = uVar28;
      *(undefined4 *)((int)puVar3 + 0x24) = uVar26;
      puVar3 = puVar3 + 4;
      *(undefined4 *)puVar3 = uVar24;
    }
    else {
      uVar36 = *(undefined8 *)((int)puVar9 + -0x78);
      uVar25 = *(undefined8 *)((int)puVar9 + -0x70);
      uVar27 = *(undefined8 *)((int)puVar9 + -0x68);
      uVar35 = *(undefined8 *)((int)puVar9 + -0x60);
      uVar17 = *(undefined8 *)((int)puVar9 + -0x58);
      uVar16 = *(undefined8 *)((int)puVar9 + -0x48);
      *(undefined8 *)((int)puVar3 + 0x34) = *(undefined8 *)((int)puVar9 + -0x50);
      *(undefined8 *)((int)puVar3 + 0x2c) = uVar17;
      *(undefined8 *)((int)puVar3 + 0x24) = uVar35;
      *(undefined8 *)((int)puVar3 + 0x1c) = uVar16;
      *(undefined8 *)((int)puVar3 + 0x14) = uVar27;
      *(undefined8 *)((int)puVar3 + 0xc) = uVar25;
      puVar3 = (undefined8 *)((int)puVar3 + 4);
      *puVar3 = uVar36;
    }
    *(undefined4 *)((int)puVar3 + -4) = 0xe0000000;
    if (iVar8 != 3) {
      if (in_FPSCR_SZ == '\0') {
        uVar28 = *(undefined4 *)((int)puVar9 + -0x40);
        uVar26 = *(undefined4 *)((int)puVar9 + -0x3c);
        uVar24 = *(undefined4 *)((int)puVar9 + -0x38);
        uVar21 = *(undefined4 *)((int)puVar9 + -0x34);
        uVar23 = *(undefined4 *)((int)puVar9 + -0x30);
        uVar19 = *(undefined4 *)((int)puVar9 + -0x28);
        *(undefined4 *)(puVar3 + 7) = *(undefined4 *)((int)puVar9 + -0x2c);
        *(undefined4 *)((int)puVar3 + 0x34) = uVar23;
        *(undefined4 *)(puVar3 + 6) = uVar21;
        *(undefined4 *)((int)puVar3 + 0x2c) = uVar19;
        *(undefined4 *)(puVar3 + 5) = uVar24;
        *(undefined4 *)((int)puVar3 + 0x24) = uVar26;
        puVar3 = puVar3 + 4;
        *(undefined4 *)puVar3 = uVar28;
      }
      else {
        uVar27 = *(undefined8 *)((int)puVar9 + -0x40);
        uVar25 = *(undefined8 *)((int)puVar9 + -0x38);
        uVar36 = *(undefined8 *)((int)puVar9 + -0x30);
        uVar35 = *(undefined8 *)((int)puVar9 + -0x28);
        uVar17 = *(undefined8 *)((int)puVar9 + -0x20);
        uVar16 = *(undefined8 *)((int)puVar9 + -0x10);
        *(undefined8 *)((int)puVar3 + 0x34) = *(undefined8 *)((int)puVar9 + -0x18);
        *(undefined8 *)((int)puVar3 + 0x2c) = uVar17;
        *(undefined8 *)((int)puVar3 + 0x24) = uVar35;
        *(undefined8 *)((int)puVar3 + 0x1c) = uVar16;
        *(undefined8 *)((int)puVar3 + 0x14) = uVar36;
        *(undefined8 *)((int)puVar3 + 0xc) = uVar25;
        puVar3 = (undefined8 *)((int)puVar3 + 4);
        *puVar3 = uVar27;
      }
      *(undefined4 *)((int)puVar3 + -4) = 0xe0000000;
    }
    if (in_FPSCR_SZ == '\0') {
      uVar28 = *(undefined4 *)((int)puVar9 + -0x5c);
      uVar24 = *(undefined4 *)((int)puVar9 + -0x58);
      uVar26 = *(undefined4 *)((int)puVar9 + -0x54);
      uVar21 = *(undefined4 *)((int)puVar9 + -0x50);
      uVar23 = *(undefined4 *)((int)puVar9 + -0x4c);
      uVar19 = *(undefined4 *)((int)puVar9 + -0x44);
      *(undefined4 *)(puVar3 + 7) = *(undefined4 *)((int)puVar9 + -0x48);
      *(undefined4 *)((int)puVar3 + 0x34) = uVar23;
      *(undefined4 *)(puVar3 + 6) = uVar21;
      *(undefined4 *)((int)puVar3 + 0x2c) = uVar19;
      *(undefined4 *)(puVar3 + 5) = uVar26;
      *(undefined4 *)((int)puVar3 + 0x24) = uVar24;
      puVar3 = puVar3 + 4;
      *(undefined4 *)puVar3 = uVar28;
    }
    else {
      uVar27 = *(undefined8 *)((int)puVar9 + -0x5c);
      uVar36 = *(undefined8 *)((int)puVar9 + -0x54);
      uVar25 = *(undefined8 *)((int)puVar9 + -0x4c);
      uVar35 = *(undefined8 *)((int)puVar9 + -0x44);
      uVar17 = *(undefined8 *)((int)puVar9 + -0x3c);
      uVar16 = *(undefined8 *)((int)puVar9 + -0x2c);
      *(undefined8 *)((int)puVar3 + 0x34) = *(undefined8 *)((int)puVar9 + -0x34);
      *(undefined8 *)((int)puVar3 + 0x2c) = uVar17;
      *(undefined8 *)((int)puVar3 + 0x24) = uVar35;
      *(undefined8 *)((int)puVar3 + 0x1c) = uVar16;
      *(undefined8 *)((int)puVar3 + 0x14) = uVar25;
      *(undefined8 *)((int)puVar3 + 0xc) = uVar36;
      puVar3 = (undefined8 *)((int)puVar3 + 4);
      *puVar3 = uVar27;
    }
    *(undefined4 *)((int)puVar3 + -4) = 0xf0000000;
    ar7 = (undefined8 *)((int)puVar3 + 0x1c);
    _DAT_8c4aa520 = _DAT_8c4aa520 + iVar8;
  }
  return ar7;
}

__asm__(".globl _FUN_8c214554\n.set _FUN_8c214554, _FUN_8c214554_def\n");
