#include "../decls.h"
undefined4 * FUN_8c227d94_def(double *ar4,double *ar5,double *ar6,undefined4 *ar7)

{
  int iVar1;
  undefined8 *puVar2;
  double *pdVar3;
  uint uVar4;
  undefined8 *puVar5;
  int iVar6;
  int iVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined4 *puVar10;
  undefined1 *puVar11;
  undefined4 uVar12;
  double in_dr0;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  double dVar17;
  double dVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  double dVar21;
  undefined4 in_fr5;
  double dVar22;
  undefined4 in_fr7;
  float fVar24;
  double dVar25;
  float fVar26;
  undefined4 in_fr9;
  float fVar27;
  double in_dr10;
  double in_dr12;
  double in_dr14;
  double in_xd0;
  double in_xd2;
  double dVar28;
  double in_xd4;
  double dVar29;
  double in_xd6;
  double in_xd8;
  double in_xd10;
  double dVar30;
  undefined8 in_xd12;
  double in_xd14;
  double dVar31;
  bool bVar32;
  int iVar33;
  int iVar34;
  int iVar35;
  char in_FPSCR_PR = 0;
  char in_FPSCR_SZ = 0;
  undefined1 auStack_20 [4];
  undefined4 uStack_1c;
  undefined4 uVar23;
  
  if (in_FPSCR_SZ == '\0') {
    puVar10 = &uStack_1c;
    *(ulonglong *)auStack_20 = CONCAT44(SUB84(in_dr14,0),auStack_20);
  }
  else {
    puVar10 = (undefined4 *)auStack_20;
  }
  iVar1 = (int)(int)0xffffff30;
  if (in_FPSCR_SZ == '\0') {
    *(int *)((int)puVar10 + -4) = (int)((ulonglong)in_dr14 >> 0x20);
    puVar11 = (undefined1 *)((int)puVar10 + -8);
    *(int *)((int)puVar10 + -8) = SUB84(in_dr12,0);
  }
  else {
    *(double *)((int)puVar10 + -8) = in_dr14;
    puVar11 = (undefined1 *)((int)puVar10 + -0x10);
    *(undefined8 *)((int)puVar10 + -0x10) = in_xd12;
  }
  if ((*(undefined4 *)0x8c4aa4f0 & 0x10000) == 0) {
    puVar8 = (undefined8 *)(puVar11 + iVar1 + 0x7c);
    if (in_FPSCR_SZ == '\0') {
      uVar23 = *(undefined4 *)0x8c4aa4a8;
      dVar17 = (double)CONCAT44(*(undefined4 *)0x8c4aa4e0,*(undefined4 *)0x8c4aa4dc);
      dVar22 = (double)CONCAT44(uVar23,in_fr9);
      dVar25 = (double)CONCAT44(uVar23,in_fr5);
    }
    else {
      dVar22 = *(undefined4 *)0x8c4aa4a8;
      dVar17 = *(undefined4 *)0x8c4aa4e0;
      in_xd2 = *(undefined4 *)0x8c4aa4dc;
      uVar23 = (undefined4)((ulonglong)dVar22 >> 0x20);
      dVar25 = dVar22;
    }
    if (in_FPSCR_PR == '\0') {
      dVar22 = (double)CONCAT44((float)((ulonglong)dVar22 >> 0x20) *
                                (float)((ulonglong)dVar17 >> 0x20),SUB84(dVar22,0));
    }
    else {
      dVar22 = dVar22 * dVar17;
    }
    if (in_FPSCR_SZ == '\0') {
      dVar25 = (double)CONCAT44(uVar23,in_fr7);
    }
    if (in_FPSCR_PR == '\0') {
      dVar25 = (double)CONCAT44((float)((ulonglong)dVar25 >> 0x20) * SUB84(dVar17,0),SUB84(dVar25,0)
                               );
    }
    else {
      dVar25 = dVar25 * dVar17;
    }
    if (in_FPSCR_SZ == '\0') {
      dVar25 = (double)CONCAT44((int)((ulonglong)dVar25 >> 0x20),
                                *(undefined4 *)((int)0x8c4aa4a8 + 0xc));
    }
    else {
      in_xd6 = *(double *)((int)0x8c4aa4a8 + 0xc);
    }
    fVar15 = (float)((ulonglong)dVar22 >> 0x20);
    fVar26 = (float)((ulonglong)dVar25 >> 0x20);
    if (in_FPSCR_PR == '\0') {
      dVar17 = (double)CONCAT44(1.0 / fVar26,1.0 / fVar15);
    }
    else {
      dVar17 = (0.007812501848093234 / dVar22) / dVar25;
    }
    if (in_FPSCR_SZ == '\0') {
      dVar22 = (double)CONCAT44(fVar15,*(undefined4 *)(0x8c4aa4a8 + 2));
      *(undefined4 *)puVar8 = *(undefined4 *)((int)ar4 + 4);
      *(undefined4 *)(puVar11 + iVar1 + 0x80) = *(undefined4 *)(ar4 + 1);
      *(undefined4 *)(puVar11 + iVar1 + 0x84) = *(undefined4 *)((int)ar4 + 0xc);
      *(undefined4 *)(puVar11 + iVar1 + 0x90) = *(undefined4 *)ar4;
      dVar18 = (double)CONCAT44(*(undefined4 *)ar4,*(undefined4 *)((int)ar4 + 4));
    }
    else {
      in_xd8 = ((undefined1 *)2)[0x8c4aa4a8];
      *puVar8 = *(undefined8 *)((int)ar4 + 4);
      *(double *)(puVar11 + iVar1 + 0x80) = ar4[1];
      *(undefined8 *)(puVar11 + iVar1 + 0x84) = *(undefined8 *)((int)ar4 + 0xc);
      *(double *)(puVar11 + iVar1 + 0x90) = *ar4;
      in_xd2 = *(double *)((int)ar4 + 4);
      dVar18 = *ar4;
    }
    fVar24 = SUB84(dVar25,0);
    fVar15 = (float)((ulonglong)dVar17 >> 0x20);
    if (in_FPSCR_PR == '\0') {
      fVar13 = (SUB84(dVar18,0) - fVar24) * (float)((ulonglong)dVar18 >> 0x20) * fVar15;
    }
    else {
      fVar13 = SUB84((dVar18 - dVar25) * (dVar18 - dVar25) * dVar17,0);
    }
    if (in_FPSCR_SZ == '\0') {
      *(float *)(puVar11 + iVar1 + 0x88) = fVar13;
      dVar18 = (double)CONCAT44(*(undefined4 *)ar4,*(undefined4 *)(ar4 + 1));
    }
    else {
      *(double *)(puVar11 + iVar1 + 0x88) = in_xd2;
      in_xd2 = ar4[1];
      dVar18 = *ar4;
    }
    fVar27 = SUB84(dVar22,0);
    fVar13 = SUB84(dVar17,0);
    if (in_FPSCR_PR == '\0') {
      fVar14 = (SUB84(dVar18,0) - fVar27) * (float)((ulonglong)dVar18 >> 0x20) * fVar13;
    }
    else {
      fVar14 = SUB84((dVar18 - dVar22) * (dVar18 - dVar22) * dVar17,0);
    }
    if (in_FPSCR_SZ == '\0') {
      *(float *)(puVar11 + iVar1 + 0x8c) = fVar14;
      *(undefined4 *)(puVar11 + iVar1 + 0x94) = *(undefined4 *)(ar4 + 2);
      *(undefined4 *)(puVar11 + iVar1 + 0x98) = *(undefined4 *)((int)ar5 + 4);
      *(undefined4 *)(puVar11 + iVar1 + 0x9c) = *(undefined4 *)(ar5 + 1);
      *(undefined4 *)(puVar11 + iVar1 + 0xa0) = *(undefined4 *)((int)ar5 + 0xc);
      *(undefined4 *)(puVar11 + iVar1 + 0xac) = *(undefined4 *)ar5;
      dVar18 = (double)CONCAT44(*(undefined4 *)ar5,*(undefined4 *)((int)ar5 + 4));
    }
    else {
      *(double *)(puVar11 + iVar1 + 0x8c) = in_xd2;
      *(double *)(puVar11 + iVar1 + 0x94) = ar4[2];
      *(undefined8 *)(puVar11 + iVar1 + 0x98) = *(undefined8 *)((int)ar5 + 4);
      *(double *)(puVar11 + iVar1 + 0x9c) = ar5[1];
      *(undefined8 *)(puVar11 + iVar1 + 0xa0) = *(undefined8 *)((int)ar5 + 0xc);
      *(double *)(puVar11 + iVar1 + 0xac) = *ar5;
      in_xd2 = *(double *)((int)ar5 + 4);
      dVar18 = *ar5;
    }
    if (in_FPSCR_PR == '\0') {
      fVar14 = (SUB84(dVar18,0) - fVar24) * (float)((ulonglong)dVar18 >> 0x20) * fVar15;
    }
    else {
      fVar14 = SUB84((dVar18 - dVar25) * (dVar18 - dVar25) * dVar17,0);
    }
    if (in_FPSCR_SZ == '\0') {
      *(float *)(puVar11 + iVar1 + 0xa4) = fVar14;
      dVar18 = (double)CONCAT44(*(undefined4 *)ar5,*(undefined4 *)(ar5 + 1));
    }
    else {
      *(double *)(puVar11 + iVar1 + 0xa4) = in_xd2;
      in_xd2 = ar5[1];
      dVar18 = *ar5;
    }
    if (in_FPSCR_PR == '\0') {
      fVar14 = (SUB84(dVar18,0) - fVar27) * (float)((ulonglong)dVar18 >> 0x20) * fVar13;
    }
    else {
      fVar14 = SUB84((dVar18 - dVar22) * (dVar18 - dVar22) * dVar17,0);
    }
    if (in_FPSCR_SZ == '\0') {
      *(float *)(puVar11 + iVar1 + 0xa8) = fVar14;
      *(undefined4 *)(puVar11 + iVar1 + 0xb0) = *(undefined4 *)(ar5 + 2);
      *(undefined4 *)(puVar11 + iVar1 + 0xb4) = *(undefined4 *)((int)ar6 + 4);
      *(undefined4 *)(puVar11 + iVar1 + 0xb8) = *(undefined4 *)(ar6 + 1);
      fVar14 = *(float *)((int)ar6 + 0xc);
    }
    else {
      *(double *)(puVar11 + iVar1 + 0xa8) = in_xd2;
      *(double *)(puVar11 + iVar1 + 0xb0) = ar5[2];
      *(undefined8 *)(puVar11 + iVar1 + 0xb4) = *(undefined8 *)((int)ar6 + 4);
      *(double *)(puVar11 + iVar1 + 0xb8) = ar6[1];
      in_xd2 = *(double *)((int)ar6 + 0xc);
    }
    iVar6 = 0;
    if (in_FPSCR_SZ == '\0') {
      *(float *)(puVar11 + iVar1 + 0xbc) = fVar14;
      *(undefined4 *)(puVar11 + iVar1 + 200) = *(undefined4 *)ar6;
      dVar18 = (double)CONCAT44(*(undefined4 *)ar6,*(undefined4 *)((int)ar6 + 4));
    }
    else {
      *(double *)(puVar11 + iVar1 + 0xbc) = in_xd2;
      *(double *)(puVar11 + iVar1 + 200) = *ar6;
      in_xd2 = *(double *)((int)ar6 + 4);
      dVar18 = *ar6;
    }
    if (in_FPSCR_PR == '\0') {
      fVar15 = (SUB84(dVar18,0) - fVar24) * (float)((ulonglong)dVar18 >> 0x20) * fVar15;
    }
    else {
      fVar15 = SUB84((dVar18 - dVar25) * (dVar18 - dVar25) * dVar17,0);
    }
    if (in_FPSCR_SZ == '\0') {
      *(float *)(puVar11 + iVar1 + 0xc0) = fVar15;
      dVar25 = (double)CONCAT44(*(undefined4 *)ar6,*(undefined4 *)(ar6 + 1));
    }
    else {
      *(double *)(puVar11 + iVar1 + 0xc0) = in_xd2;
      in_xd2 = ar6[1];
      dVar25 = *ar6;
    }
    if (in_FPSCR_PR == '\0') {
      fVar13 = (SUB84(dVar25,0) - fVar27) * (float)((ulonglong)dVar25 >> 0x20) * fVar13;
    }
    else {
      fVar13 = SUB84((dVar25 - dVar22) * (dVar25 - dVar22) * dVar17,0);
    }
    if (in_FPSCR_SZ == '\0') {
      *(float *)(puVar11 + iVar1 + 0xc4) = fVar13;
      fVar13 = *(float *)(ar6 + 2);
    }
    else {
      *(double *)(puVar11 + iVar1 + 0xc4) = in_xd2;
      in_xd2 = ar6[2];
    }
    if (in_FPSCR_SZ == '\0') {
      *(float *)(puVar11 + iVar1 + 0xcc) = fVar13;
    }
    else {
      *(double *)(puVar11 + iVar1 + 0xcc) = in_xd2;
    }
    puVar9 = (undefined8 *)(puVar11 + iVar1 + 0xc);
    iVar33 = 2;
    for (iVar7 = 0; iVar7 < 3; iVar7 = iVar7 + 1) {
      if (in_FPSCR_SZ == '\0') {
        uVar19 = CONCAT44(*(undefined4 *)((int)puVar8 + iVar33 * 0x1c + 0x14),0x3f800000);
      }
      else {
        uVar19 = *(undefined8 *)((int)puVar8 + iVar33 * 0x1c + 0x14);
      }
      puVar2 = (undefined8 *)((int)puVar8 + iVar7 * 0x1c + 0x14);
      if (in_FPSCR_SZ == '\0') {
        uVar20 = CONCAT44(*(undefined4 *)puVar2,(float)uVar19);
      }
      else {
        uVar20 = *puVar2;
      }
      fVar15 = (float)uVar20;
      if (((in_FPSCR_PR == '\0' && (float)uVar19 < (float)((ulonglong)uVar19 >> 0x20)) ^ 1) !=
          -((in_FPSCR_PR == '\0' && fVar15 < (float)((ulonglong)uVar20 >> 0x20)) - 1)) {
        if (in_FPSCR_SZ == '\0') {
          fVar15 = *(float *)((int)puVar8 + iVar33 * 0x1c + 0x14);
          in_dr0 = (double)CONCAT44((int)((ulonglong)in_dr0 >> 0x20),
                                    *(undefined4 *)((int)puVar8 + iVar7 * 0x1c + 0x14));
          fVar13 = fVar15;
          dVar17 = (double)CONCAT44(fVar15,SUB84(dVar17,0));
        }
        else {
          in_xd2 = *(double *)((int)puVar8 + iVar33 * 0x1c + 0x14);
          in_xd0 = *(double *)((int)puVar8 + iVar7 * 0x1c + 0x14);
          fVar13 = (float)((ulonglong)in_xd2 >> 0x20);
          dVar17 = in_xd2;
        }
        dVar25 = (double)CONCAT44(0x3f800000,-fVar15);
        if (in_FPSCR_PR == '\0') {
          dVar25 = (double)CONCAT44(0x3f800000,-fVar15 + 1.0);
          dVar18 = (double)CONCAT44((int)((ulonglong)in_dr0 >> 0x20),SUB84(in_dr0,0) - fVar13);
        }
        else {
          dVar25 = dVar25 + dVar25;
          dVar18 = in_dr0 - dVar17;
        }
        if (in_FPSCR_SZ == '\0') {
          dVar17 = (double)CONCAT44(*(undefined4 *)((int)puVar8 + iVar33 * 0x1c + 0xc),
                                    SUB84(dVar17,0));
        }
        else {
          dVar17 = *(double *)((int)puVar8 + iVar33 * 0x1c + 0xc);
        }
        dVar21 = in_xd2;
        if (in_FPSCR_SZ == '\0') {
          dVar21 = (double)CONCAT44(SUB84(dVar25,0),SUB84(in_dr10,0));
        }
        if (in_FPSCR_PR == '\0') {
          in_dr10 = (double)CONCAT44((float)((ulonglong)dVar21 >> 0x20) / SUB84(dVar18,0),
                                     SUB84(dVar21,0));
        }
        else {
          in_dr10 = dVar21 / dVar18;
        }
        fVar15 = (float)((ulonglong)dVar17 >> 0x20);
        if (in_FPSCR_SZ == '\0') {
          dVar25 = (double)CONCAT44((int)((ulonglong)dVar25 >> 0x20),
                                    *(undefined4 *)((int)puVar8 + iVar7 * 0x1c + 0xc));
          dVar18 = (double)(ulonglong)(uint)fVar15;
        }
        else {
          in_xd2 = *(double *)((int)puVar8 + iVar7 * 0x1c + 0xc);
          in_xd0 = dVar17;
        }
        if (in_FPSCR_PR == '\0') {
          dVar25 = (double)CONCAT44((int)((ulonglong)dVar25 >> 0x20),SUB84(dVar25,0) - fVar15);
        }
        else {
          dVar25 = dVar25 - dVar17;
        }
        if (in_FPSCR_SZ == '\0') {
          dVar17 = (double)CONCAT44(fVar15,*(undefined4 *)((int)puVar8 + iVar33 * 0x1c + 0x10));
        }
        else {
          in_xd4 = *(double *)((int)puVar8 + iVar33 * 0x1c + 0x10);
        }
        pdVar3 = (double *)(iVar6 * 0x1c + (int)puVar9);
        uVar23 = (undefined4)((ulonglong)in_dr10 >> 0x20);
        dVar21 = in_dr10;
        if (in_FPSCR_SZ == '\0') {
          dVar21 = (double)CONCAT44(uVar23,SUB84(dVar18,0));
        }
        if (in_FPSCR_PR == '\0') {
          fVar15 = (float)((ulonglong)dVar21 >> 0x20);
          dVar21 = (double)CONCAT44(fVar15,fVar15 * SUB84(dVar25,0) + SUB84(dVar21,0));
        }
        if (in_FPSCR_SZ == '\0') {
          dVar25 = (double)CONCAT44((int)((ulonglong)dVar25 >> 0x20),
                                    *(undefined4 *)((int)puVar8 + iVar7 * 0x1c + 0x10));
        }
        else {
          in_xd2 = *(double *)((int)puVar8 + iVar7 * 0x1c + 0x10);
        }
        fVar15 = SUB84(dVar17,0);
        if (in_FPSCR_PR == '\0') {
          dVar25 = (double)CONCAT44((int)((ulonglong)dVar25 >> 0x20),SUB84(dVar25,0) - fVar15);
        }
        else {
          dVar25 = dVar25 - dVar17;
        }
        dVar17 = in_xd4;
        if (in_FPSCR_SZ == '\0') {
          uVar12 = SUB84(dVar21,0);
          dVar21 = (double)CONCAT44((int)((ulonglong)dVar21 >> 0x20),fVar15);
          dVar17 = in_xd0;
          in_xd0 = (double)CONCAT44(uVar12,fVar15);
        }
        if (in_FPSCR_PR == '\0') {
          dVar21 = (double)(ulonglong)
                           (uint)((float)((ulonglong)dVar21 >> 0x20) * SUB84(dVar25,0) +
                                 SUB84(dVar21,0));
        }
        dVar28 = in_xd6;
        dVar18 = in_xd0;
        if (in_FPSCR_SZ == '\0') {
          dVar25 = (double)CONCAT44((int)((ulonglong)dVar25 >> 0x20),fVar24);
          dVar28 = in_xd2;
          dVar18 = (double)CONCAT44((int)((ulonglong)in_xd0 >> 0x20),SUB84(dVar21,0));
        }
        if (in_FPSCR_PR == '\0') {
          dVar25 = (double)CONCAT44((int)((ulonglong)dVar25 >> 0x20),
                                    (float)((ulonglong)dVar18 >> 0x20) * fVar26 + SUB84(dVar25,0));
        }
        if (in_FPSCR_SZ == '\0') {
          uVar12 = SUB84(dVar18,0);
          *(int *)pdVar3 = SUB84(dVar25,0);
          dVar18 = (double)CONCAT44(uVar12,fVar27);
          dVar21 = dVar17;
          dVar17 = in_xd4;
        }
        else {
          *pdVar3 = dVar28;
          uVar12 = SUB84(in_xd0,0);
          dVar18 = dVar17;
          dVar21 = in_xd8;
        }
        if (in_FPSCR_PR == '\0') {
          fVar15 = (float)((ulonglong)dVar18 >> 0x20);
          dVar18 = (double)CONCAT44(fVar15,fVar15 * (float)((ulonglong)dVar22 >> 0x20) +
                                           SUB84(dVar18,0));
        }
        if (in_FPSCR_SZ == '\0') {
          *(int *)((int)pdVar3 + 4) = SUB84(dVar18,0);
          *(int *)(pdVar3 + 1) = (int)((ulonglong)dVar25 >> 0x20);
        }
        else {
          *(double *)((int)pdVar3 + 4) = dVar21;
          pdVar3[1] = dVar25;
        }
        uVar4 = *(uint *)((int)puVar8 + iVar33 * 0x1c + 0x18);
        fVar15 = (float)(uVar4 >> 0x18);
        dVar25 = dVar28;
        if (in_FPSCR_SZ == '\0') {
          dVar25 = (double)CONCAT44(fVar15,uVar12);
        }
        if (in_FPSCR_PR == '\0' && fVar15 < 0.0) {
          fVar13 = DAT_8c228020;
          if (in_FPSCR_SZ != '\0') {
            dVar28 = (double)CONCAT44((*(uint *)0x8c228024),DAT_8c228020);
            fVar13 = fVar15;
          }
          if (in_FPSCR_PR == '\0') {
            dVar25 = (double)CONCAT44((float)((ulonglong)dVar25 >> 0x20) + fVar13,SUB84(dVar25,0));
          }
          else {
            dVar25 = dVar25 + (double)(ulonglong)(uint)fVar13;
          }
        }
        fVar15 = (float)(uVar4 >> 0x10 & 0xff);
        dVar29 = dVar28;
        if (in_FPSCR_SZ == '\0') {
          dVar25 = (double)CONCAT44((int)((ulonglong)dVar25 >> 0x20),fVar15);
          dVar29 = dVar17;
        }
        if (in_FPSCR_PR == '\0' && fVar15 < 0.0) {
          fVar13 = DAT_8c228020;
          if (in_FPSCR_SZ != '\0') {
            dVar28 = (double)CONCAT44((*(uint *)0x8c228024),DAT_8c228020);
            fVar13 = fVar15;
          }
          if (in_FPSCR_PR == '\0') {
            dVar25 = (double)CONCAT44((int)((ulonglong)dVar25 >> 0x20),SUB84(dVar25,0) + fVar13);
          }
          else {
            dVar25 = dVar25 + (double)(ulonglong)(uint)fVar13;
          }
        }
        fVar15 = (float)(uVar4 >> 8 & 0xff);
        dVar30 = dVar28;
        if (in_FPSCR_SZ == '\0') {
          in_dr10 = (double)CONCAT44(uVar23,fVar15);
          dVar30 = in_xd10;
        }
        if (in_FPSCR_PR == '\0' && fVar15 < 0.0) {
          fVar13 = DAT_8c228020;
          if (in_FPSCR_SZ != '\0') {
            dVar28 = (double)CONCAT44((*(uint *)0x8c228024),DAT_8c228020);
            fVar13 = fVar15;
          }
          if (in_FPSCR_PR == '\0') {
            in_dr10 = (double)CONCAT44((int)((ulonglong)in_dr10 >> 0x20),SUB84(in_dr10,0) + fVar13);
          }
          else {
            in_dr10 = in_dr10 + (double)(ulonglong)(uint)fVar13;
          }
        }
        fVar15 = (float)(uVar4 & 0xff);
        dVar31 = dVar28;
        if (in_FPSCR_SZ == '\0') {
          in_dr14 = (double)CONCAT44((int)((ulonglong)in_dr14 >> 0x20),fVar15);
          dVar31 = in_xd14;
        }
        if (in_FPSCR_PR == '\0' && fVar15 < 0.0) {
          fVar13 = DAT_8c228020;
          if (in_FPSCR_SZ != '\0') {
            dVar28 = (double)CONCAT44((*(uint *)0x8c228024),DAT_8c228020);
            fVar13 = fVar15;
          }
          if (in_FPSCR_PR == '\0') {
            in_dr14 = (double)(ulonglong)(uint)(SUB84(in_dr14,0) + fVar13);
          }
          else {
            in_dr14 = in_dr14 + (double)(ulonglong)(uint)fVar13;
          }
        }
        uVar4 = *(uint *)((int)puVar8 + iVar7 * 0x1c + 0x18);
        fVar15 = (float)(uVar4 >> 0x18);
        dVar17 = dVar28;
        if (in_FPSCR_SZ == '\0') {
          dVar17 = (double)CONCAT44(fVar15,SUB84(in_dr14,0));
        }
        if (in_FPSCR_PR == '\0' && fVar15 < 0.0) {
          fVar13 = DAT_8c228020;
          if (in_FPSCR_SZ != '\0') {
            dVar28 = (double)CONCAT44((*(uint *)0x8c228024),DAT_8c228020);
            fVar13 = fVar15;
          }
          if (in_FPSCR_PR == '\0') {
            dVar17 = (double)CONCAT44((float)((ulonglong)dVar17 >> 0x20) + fVar13,SUB84(dVar17,0));
          }
          else {
            dVar17 = dVar17 + (double)(ulonglong)(uint)fVar13;
          }
        }
        fVar15 = (float)(uVar4 >> 0x10 & 0xff);
        if (in_FPSCR_SZ == '\0') {
          in_dr12 = (double)CONCAT44((int)((ulonglong)in_dr12 >> 0x20),fVar15);
        }
        if (in_FPSCR_PR == '\0' && fVar15 < 0.0) {
          fVar13 = DAT_8c228020;
          if (in_FPSCR_SZ != '\0') {
            dVar28 = (double)CONCAT44((*(uint *)0x8c228024),DAT_8c228020);
            fVar13 = fVar15;
          }
          if (in_FPSCR_PR == '\0') {
            in_dr12 = (double)CONCAT44((int)((ulonglong)in_dr12 >> 0x20),SUB84(in_dr12,0) + fVar13);
          }
          else {
            in_dr12 = in_dr12 + (double)(ulonglong)(uint)fVar13;
          }
        }
        fVar15 = (float)(uVar4 >> 8 & 0xff);
        in_xd0 = dVar28;
        if (in_FPSCR_SZ == '\0') {
          dVar18 = (double)CONCAT44((int)((ulonglong)dVar18 >> 0x20),fVar15);
          in_xd0 = dVar21;
        }
        if (in_FPSCR_PR == '\0' && fVar15 < 0.0) {
          fVar13 = DAT_8c228020;
          if (in_FPSCR_SZ != '\0') {
            dVar28 = (double)CONCAT44((*(uint *)0x8c228024),DAT_8c228020);
            fVar13 = fVar15;
          }
          if (in_FPSCR_PR == '\0') {
            dVar18 = (double)CONCAT44((int)((ulonglong)dVar18 >> 0x20),SUB84(dVar18,0) + fVar13);
          }
          else {
            dVar18 = dVar18 + (double)(ulonglong)(uint)fVar13;
          }
        }
        if (in_FPSCR_PR == '\0') {
          dVar21 = (double)((ulonglong)(uint)(float)(uVar4 & 0xff) << 0x20);
        }
        else {
          dVar21 = (double)(uVar4 & 0xff);
        }
        fVar15 = (float)((ulonglong)dVar21 >> 0x20);
        if (in_FPSCR_SZ == '\0') {
          *(float *)(puVar11 + iVar1) = fVar15;
        }
        else {
          *(double *)(puVar11 + iVar1) = dVar21;
        }
        if (in_FPSCR_PR != '\0' || SUB84(dVar21,0) <= fVar15) {
          if (in_FPSCR_SZ == '\0') {
            dVar21 = (double)CONCAT44(fVar15,*(undefined4 *)(puVar11 + iVar1));
          }
          else {
            dVar28 = *(double *)(puVar11 + iVar1);
          }
        }
        else {
          if (in_FPSCR_SZ == '\0') {
            dVar21 = (double)CONCAT44(DAT_8c228020,*(undefined4 *)(puVar11 + iVar1));
          }
          else {
            dVar28 = *(double *)(puVar11 + iVar1);
            dVar21 = (double)CONCAT44((*(uint *)0x8c228024),DAT_8c228020);
          }
          if (in_FPSCR_PR == '\0') {
            fVar15 = (float)((ulonglong)dVar21 >> 0x20);
            dVar21 = (double)CONCAT44(fVar15,SUB84(dVar21,0) + fVar15);
          }
          else {
            dVar21 = dVar21 + dVar21;
          }
        }
        fVar15 = (float)((ulonglong)dVar25 >> 0x20);
        if (in_FPSCR_PR == '\0') {
          dVar17 = (double)CONCAT44((float)((ulonglong)dVar17 >> 0x20) - fVar15,SUB84(dVar17,0));
        }
        else {
          dVar17 = dVar17 - dVar25;
        }
        if (in_FPSCR_SZ == '\0') {
          *(float *)(puVar11 + iVar1 + 4) = SUB84(dVar21,0);
        }
        else {
          *(double *)(puVar11 + iVar1 + 4) = dVar28;
        }
        fVar13 = SUB84(dVar17,0);
        if (in_FPSCR_PR == '\0') {
          fVar14 = SUB84(dVar18,0) - SUB84(in_dr10,0);
          fVar16 = SUB84(dVar21,0) - fVar13;
        }
        else {
          fVar14 = SUB84(dVar18 - in_dr10,0);
          fVar16 = SUB84(dVar21 - dVar17,0);
        }
        dVar18 = in_dr10;
        if (in_FPSCR_SZ == '\0') {
          dVar18 = (double)CONCAT44((int)((ulonglong)in_dr10 >> 0x20),fVar14);
        }
        fVar14 = SUB84(dVar25,0);
        if (in_FPSCR_PR == '\0') {
          in_dr12 = (double)CONCAT44((int)((ulonglong)in_dr12 >> 0x20),SUB84(in_dr12,0) - fVar14);
        }
        else {
          in_dr12 = in_dr12 - dVar25;
        }
        if (in_FPSCR_SZ == '\0') {
          dVar25 = (double)CONCAT44(fVar15,fVar16);
        }
        fVar15 = (float)((ulonglong)dVar18 >> 0x20);
        if (in_FPSCR_PR == '\0') {
          dVar25 = (double)CONCAT44(fVar15 * (float)((ulonglong)dVar17 >> 0x20) +
                                    (float)((ulonglong)dVar25 >> 0x20),SUB84(dVar25,0));
        }
        if (in_FPSCR_SZ == '\0') {
          dVar17 = (double)CONCAT44(fVar13,fVar14);
          in_dr14 = (double)CONCAT44(fVar14,fVar13);
        }
        else {
          fVar13 = SUB84(dVar29,0);
          dVar17 = dVar31;
          in_dr14 = dVar29;
        }
        if (in_FPSCR_PR == '\0') {
          dVar17 = (double)CONCAT44(fVar15 * SUB84(dVar25,0) + (float)((ulonglong)dVar17 >> 0x20),
                                    SUB84(dVar17,0));
        }
        in_xd4 = dVar30;
        if (in_FPSCR_SZ == '\0') {
          dVar17 = (double)CONCAT44((int)((ulonglong)dVar17 >> 0x20),SUB84(in_dr10,0));
          in_xd4 = dVar29;
        }
        if (in_FPSCR_PR == '\0') {
          dVar17 = (double)CONCAT44((int)((ulonglong)dVar17 >> 0x20),
                                    fVar15 * SUB84(dVar18,0) + SUB84(dVar17,0));
        }
        in_dr0 = (double)CONCAT44(fVar15,0x4f000000);
        in_xd2 = dVar25;
        if (in_FPSCR_SZ == '\0') {
          uVar23 = (undefined4)((ulonglong)dVar25 >> 0x20);
          dVar25 = (double)CONCAT44(uVar23,uVar23);
          in_xd2 = dVar28;
        }
        if (in_FPSCR_PR == '\0') {
          bVar32 = SUB84(dVar25,0) < 0x4f000000;
        }
        else {
          bVar32 = dVar25 < in_dr0;
        }
        uVar23 = (undefined4)((ulonglong)dVar25 >> 0x20);
        if (in_FPSCR_SZ == '\0') {
          *(undefined4 *)(puVar11 + iVar1 + 8) = uVar23;
        }
        else {
          *(double *)(puVar11 + iVar1 + 8) = dVar25;
        }
        if (in_FPSCR_PR == '\0') {
          in_dr14 = (double)CONCAT44(fVar15 * SUB84(in_dr12,0) + (float)((ulonglong)in_dr14 >> 0x20)
                                     ,fVar13);
        }
        if (!bVar32) {
          if (in_FPSCR_PR == '\0') {
            in_dr0 = (double)CONCAT44(fVar15,0x4f000000 + 0x4f000000);
            dVar25 = (double)CONCAT44(uVar23,SUB84(dVar25,0) - (0x4f000000 + 0x4f000000));
          }
          else {
            in_dr0 = in_dr0 + in_dr0;
            dVar25 = dVar25 - in_dr0;
          }
        }
        if (in_FPSCR_PR == '\0') {
          iVar33 = (int)SUB84(dVar25,0);
        }
        else {
          iVar33 = (int)dVar25;
        }
        uVar23 = (undefined4)((ulonglong)dVar25 >> 0x20);
        dVar25 = (double)CONCAT44(uVar23,0x4f000000);
        fVar15 = (float)((ulonglong)in_dr14 >> 0x20);
        if (in_FPSCR_PR == '\0') {
          bVar32 = fVar15 < 0x4f000000;
        }
        else {
          bVar32 = in_dr14 < dVar25;
        }
        if (!bVar32) {
          if (in_FPSCR_PR == '\0') {
            dVar25 = (double)CONCAT44(uVar23,0x4f000000 + 0x4f000000);
            in_dr14 = (double)CONCAT44(fVar15 - (0x4f000000 + 0x4f000000),SUB84(in_dr14,0));
          }
          else {
            dVar25 = dVar25 + dVar25;
            in_dr14 = in_dr14 - dVar25;
          }
        }
        if (in_FPSCR_PR == '\0') {
          iVar34 = (int)(float)((ulonglong)in_dr14 >> 0x20);
        }
        else {
          iVar34 = (int)in_dr14;
        }
        uVar23 = (undefined4)((ulonglong)dVar25 >> 0x20);
        dVar25 = (double)CONCAT44(uVar23,0x4f000000);
        if (in_FPSCR_PR == '\0') {
          bVar32 = SUB84(dVar17,0) < 0x4f000000;
        }
        else {
          bVar32 = dVar17 < dVar25;
        }
        if (!bVar32) {
          if (in_FPSCR_PR == '\0') {
            dVar25 = (double)CONCAT44(uVar23,0x4f000000 + 0x4f000000);
            dVar17 = (double)CONCAT44((int)((ulonglong)dVar17 >> 0x20),
                                      SUB84(dVar17,0) - (0x4f000000 + 0x4f000000));
          }
          else {
            dVar25 = dVar25 + dVar25;
            dVar17 = dVar17 - dVar25;
          }
        }
        if (in_FPSCR_PR == '\0') {
          iVar35 = (int)SUB84(dVar17,0);
        }
        else {
          iVar35 = (int)dVar17;
        }
        dVar25 = (double)CONCAT44((int)((ulonglong)dVar25 >> 0x20),0x4f000000);
        fVar15 = (float)((ulonglong)dVar17 >> 0x20);
        if (in_FPSCR_PR == '\0') {
          bVar32 = fVar15 < 0x4f000000;
        }
        else {
          bVar32 = dVar17 < dVar25;
        }
        if (!bVar32) {
          if (in_FPSCR_PR == '\0') {
            dVar17 = (double)CONCAT44(fVar15 - (0x4f000000 + 0x4f000000),SUB84(dVar17,0));
          }
          else {
            dVar17 = dVar17 - (dVar25 + dVar25);
          }
        }
        if (in_FPSCR_PR == '\0') {
          uVar4 = (uint)(float)((ulonglong)dVar17 >> 0x20);
        }
        else {
          uVar4 = (uint)dVar17;
        }
        iVar6 = iVar6 + 1;
        *(uint *)(pdVar3 + 3) = iVar33 << 0x18 | iVar34 << 0x10 | iVar35 << 8 | uVar4;
        in_xd10 = dVar30;
        in_xd14 = dVar31;
      }
      puVar2 = (undefined8 *)(iVar7 * 0x1c + (int)puVar8);
      if (in_FPSCR_SZ == '\0') {
        uVar19 = CONCAT44(*(undefined4 *)((int)puVar2 + 0x14),0x3f800000);
      }
      else {
        uVar19 = *(undefined8 *)((int)puVar2 + 0x14);
      }
      if (in_FPSCR_PR == '\0' && (float)uVar19 < (float)((ulonglong)uVar19 >> 0x20)) {
        iVar33 = iVar6 * 0x1c;
        if (in_FPSCR_SZ == '\0') {
          uVar19 = CONCAT44(*(undefined4 *)puVar2,(float)uVar19);
        }
        else {
          uVar19 = *puVar2;
        }
        iVar6 = iVar6 + 1;
        puVar5 = (undefined8 *)(iVar33 + (int)puVar9);
        if (in_FPSCR_SZ == '\0') {
          *(int *)puVar5 = (int)((ulonglong)uVar19 >> 0x20);
          in_dr0 = (double)CONCAT44((int)((ulonglong)in_dr0 >> 0x20),
                                    *(undefined4 *)((int)puVar2 + 4));
          *(undefined4 *)((int)puVar5 + 4) = *(undefined4 *)((int)puVar2 + 4);
          *(undefined4 *)(puVar5 + 1) = *(undefined4 *)(puVar2 + 1);
          *(undefined4 *)(puVar5 + 3) = *(undefined4 *)(puVar2 + 3);
        }
        else {
          *puVar5 = uVar19;
          in_xd0 = *(double *)((int)puVar2 + 4);
          *(double *)((int)puVar5 + 4) = in_xd0;
          puVar5[1] = puVar2[1];
          puVar5[3] = puVar2[3];
        }
      }
      iVar33 = iVar7;
    }
    if (in_FPSCR_SZ == '\0') {
      ar7[6] = *(undefined4 *)(puVar11 + iVar1 + 0x24);
      ar7[3] = *(undefined4 *)(puVar11 + iVar1 + 0x14);
      ar7[2] = *(undefined4 *)(puVar11 + iVar1 + 0x10);
      uVar23 = 0xe0000000;
      puVar8 = (undefined8 *)(ar7 + 1);
      *(undefined4 *)puVar8 = *(undefined4 *)puVar9;
    }
    else {
      *(undefined8 *)(ar7 + 5) = *(undefined8 *)(puVar11 + iVar1 + 0x24);
      *(undefined8 *)(ar7 + 1) = *(undefined8 *)(puVar11 + iVar1 + 0x14);
      *(undefined8 *)(ar7 + -1) = *(undefined8 *)(puVar11 + iVar1 + 0x10);
      uVar23 = 0xe0000000;
      puVar8 = (undefined8 *)(ar7 + -3);
      *puVar8 = *puVar9;
    }
    *(undefined4 *)((int)puVar8 + -4) = uVar23;
    if (in_FPSCR_SZ == '\0') {
      *(undefined4 *)((int)puVar8 + 0x34) = *(undefined4 *)(puVar11 + iVar1 + 0x40);
      *(undefined4 *)(puVar8 + 5) = *(undefined4 *)(puVar11 + iVar1 + 0x30);
      *(undefined4 *)((int)puVar8 + 0x24) = *(undefined4 *)(puVar11 + iVar1 + 0x2c);
      puVar8 = puVar8 + 4;
      *(undefined4 *)puVar8 = *(undefined4 *)(puVar11 + iVar1 + 0x28);
    }
    else {
      puVar8[6] = *(undefined8 *)(puVar11 + iVar1 + 0x40);
      puVar8[4] = *(undefined8 *)(puVar11 + iVar1 + 0x30);
      puVar8[3] = *(undefined8 *)(puVar11 + iVar1 + 0x2c);
      puVar8 = puVar8 + 2;
      *puVar8 = *(undefined8 *)(puVar11 + iVar1 + 0x28);
    }
    *(undefined4 *)((int)puVar8 + -4) = uVar23;
    if (iVar6 != 3) {
      if (in_FPSCR_SZ == '\0') {
        *(undefined4 *)((int)puVar8 + 0x34) = *(undefined4 *)(puVar11 + iVar1 + 0x78);
        *(undefined4 *)(puVar8 + 5) = *(undefined4 *)(puVar11 + iVar1 + 0x68);
        *(undefined4 *)((int)puVar8 + 0x24) = *(undefined4 *)(puVar11 + iVar1 + 100);
        puVar8 = puVar8 + 4;
        *(undefined4 *)puVar8 = *(undefined4 *)(puVar11 + iVar1 + 0x60);
      }
      else {
        puVar8[6] = *(undefined8 *)(puVar11 + iVar1 + 0x78);
        puVar8[4] = *(undefined8 *)(puVar11 + iVar1 + 0x68);
        puVar8[3] = *(undefined8 *)(puVar11 + iVar1 + 100);
        puVar8 = puVar8 + 2;
        *puVar8 = *(undefined8 *)(puVar11 + iVar1 + 0x60);
      }
      *(undefined4 *)((int)puVar8 + -4) = uVar23;
    }
    uVar23 = 0xf0000000;
    if (in_FPSCR_SZ == '\0') {
      *(undefined4 *)((int)puVar8 + 0x34) = *(undefined4 *)(puVar11 + iVar1 + 0x5c);
      *(undefined4 *)(puVar8 + 5) = *(undefined4 *)(puVar11 + iVar1 + 0x4c);
      *(undefined4 *)((int)puVar8 + 0x24) = *(undefined4 *)(puVar11 + iVar1 + 0x48);
      puVar8 = puVar8 + 4;
      *(undefined4 *)puVar8 = *(undefined4 *)(puVar11 + iVar1 + 0x44);
    }
    else {
      puVar8[6] = *(undefined8 *)(puVar11 + iVar1 + 0x5c);
      puVar8[4] = *(undefined8 *)(puVar11 + iVar1 + 0x4c);
      puVar8[3] = *(undefined8 *)(puVar11 + iVar1 + 0x48);
      puVar8 = puVar8 + 2;
      *puVar8 = *(undefined8 *)(puVar11 + iVar1 + 0x44);
    }
    *(undefined4 *)((int)puVar8 + -4) = uVar23;
    ar7 = (undefined4 *)((int)puVar8 + 0x1c);
    *(undefined4 *)0x8c4aa520 = *(undefined4 *)0x8c4aa520 + iVar6;
  }
  return ar7;
}

__asm__(".globl _FUN_8c227d94\n.set _FUN_8c227d94, _FUN_8c227d94_def\n");
