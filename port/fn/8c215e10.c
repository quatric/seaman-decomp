#include "../decls.h"
undefined4 * FUN_8c215e10_def(double *ar4,double *ar5,double *ar6,undefined4 *ar7)

{
  undefined8 *puVar1;
  uint uVar2;
  undefined8 *puVar3;
  int iVar4;
  int iVar5;
  double *pdVar6;
  undefined8 *puVar7;
  double *pdVar8;
  int iVar9;
  undefined4 *puVar10;
  undefined4 uVar11;
  float fVar12;
  double in_dr0;
  double dVar13;
  double dVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  double in_dr2;
  double dVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  double dVar23;
  undefined4 in_fr5;
  undefined4 uVar24;
  double dVar25;
  float fVar26;
  double dVar27;
  float fVar28;
  undefined4 in_fr9;
  double dVar29;
  float fVar30;
  double in_dr10;
  double dVar31;
  double in_dr12;
  double in_dr14;
  double in_xd0;
  double in_xd2;
  double dVar32;
  double in_xd4;
  double dVar33;
  double in_xd6;
  double in_xd8;
  double in_xd10;
  double in_xd14;
  bool bVar34;
  int iVar35;
  int iVar36;
  char in_FPSCR_PR = 0;
  char in_FPSCR_SZ = 0;
  undefined1 auStack_34 [12];
  undefined4 auStack_28 [3];
  
  if (in_FPSCR_SZ == '\0') {
    puVar10 = auStack_28;
    stack0xffffffd4 = CONCAT44((int)((ulonglong)in_dr12 >> 0x20),(*(uint*)((uchar*)&auStack_34+8)));
  }
  else {
    puVar10 = (undefined4 *)auStack_34;
  }
  if ((_DAT_8c4aa4f0 & 0x10000) == 0) {
    if (in_FPSCR_SZ == '\0') {
      in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),_DAT_8c4aa4dc);
      dVar27 = (double)CONCAT44(_DAT_8c4aa4a8,_DAT_8c4aa4b4);
      uVar11 = _DAT_8c4aa4a8;
      in_fr9 = _DAT_8c4aa4b8;
      dVar29 = (double)CONCAT44(_DAT_8c4aa4a8,in_fr5);
    }
    else {
      in_xd6 = (double)CONCAT44(_DAT_8c4aa4b8,_DAT_8c4aa4b4);
      dVar27 = (double)CONCAT44(_DAT_8c4aa4ac,_DAT_8c4aa4a8);
      in_xd2 = (double)CONCAT44(_DAT_8c4aa4e0,_DAT_8c4aa4dc);
      in_xd8 = (double)CONCAT44(_DAT_8c4aa4bc,_DAT_8c4aa4b8);
      uVar11 = _DAT_8c4aa4ac;
      dVar29 = dVar27;
    }
    if (in_FPSCR_PR == '\0') {
      dVar27 = (double)CONCAT44((float)((ulonglong)dVar27 >> 0x20) * SUB84(in_dr2,0),SUB84(dVar27,0)
                               );
    }
    else {
      dVar27 = dVar27 * in_dr2;
    }
    if (in_FPSCR_SZ == '\0') {
      dVar20 = (double)CONCAT44(_DAT_8c4aa4e0,SUB84(in_dr2,0));
      dVar29 = (double)CONCAT44(uVar11,in_fr9);
    }
    else {
      dVar20 = (double)CONCAT44(_DAT_8c4aa4e4,_DAT_8c4aa4e0);
    }
    if (in_FPSCR_PR == '\0') {
      dVar29 = (double)CONCAT44((float)((ulonglong)dVar29 >> 0x20) *
                                (float)((ulonglong)dVar20 >> 0x20),SUB84(dVar29,0));
    }
    else {
      dVar29 = dVar29 * dVar20;
    }
    if (in_FPSCR_SZ == '\0') {
      dVar20 = (double)(ulonglong)*(uint *)(ar4 + 1);
    }
    else {
      in_xd2 = ar4[1];
    }
    fVar17 = SUB84(dVar20,0);
    fVar28 = (float)((ulonglong)dVar27 >> 0x20);
    fVar30 = (float)((ulonglong)dVar29 >> 0x20);
    if (in_FPSCR_PR == '\0') {
      dVar20 = (double)CONCAT44(1.0 / fVar17,fVar17);
      dVar25 = (double)CONCAT44(1.0 / fVar28,1.0 / fVar30);
    }
    else {
      dVar20 = (double)CONCAT44(0x3f800000,fVar17) / (double)CONCAT44(0x3f800000,fVar17);
      dVar25 = (0.007812501848093234 / dVar27) / dVar29;
    }
    pdVar6 = (double *)((int)puVar10 + -0x54);
    if (in_FPSCR_SZ == '\0') {
      *(int *)((int)puVar10 + -0x40) = (int)((ulonglong)dVar20 >> 0x20);
      *(undefined4 *)pdVar6 = *(undefined4 *)ar4;
      *(undefined4 *)((int)puVar10 + -0x50) = *(undefined4 *)((int)ar4 + 4);
      *(undefined4 *)((int)puVar10 + -0x4c) = *(undefined4 *)(ar4 + 1);
      *(undefined4 *)((int)puVar10 + -0x3c) = *(undefined4 *)((int)ar4 + 0xc);
      dVar20 = (double)CONCAT44(*(undefined4 *)((int)puVar10 + -0x40),*(undefined4 *)ar4);
    }
    else {
      *(double *)((int)puVar10 + -0x40) = dVar20;
      *pdVar6 = *ar4;
      *(undefined8 *)((int)puVar10 + -0x50) = *(undefined8 *)((int)ar4 + 4);
      *(double *)((int)puVar10 + -0x4c) = ar4[1];
      *(undefined8 *)((int)puVar10 + -0x3c) = *(undefined8 *)((int)ar4 + 0xc);
      in_xd2 = *ar4;
      dVar20 = *(double *)((int)puVar10 + -0x40);
    }
    fVar26 = SUB84(dVar27,0);
    fVar17 = (float)((ulonglong)dVar25 >> 0x20);
    if (in_FPSCR_PR == '\0') {
      fVar15 = (SUB84(dVar20,0) - fVar26) * (float)((ulonglong)dVar20 >> 0x20) * fVar17;
    }
    else {
      fVar15 = SUB84((dVar20 - dVar27) * (dVar20 - dVar27) * dVar25,0);
    }
    if (in_FPSCR_SZ == '\0') {
      *(float *)((int)puVar10 + -0x48) = fVar15;
      dVar20 = (double)CONCAT44(*(undefined4 *)((int)puVar10 + -0x40),*(undefined4 *)((int)ar4 + 4))
      ;
    }
    else {
      *(double *)((int)puVar10 + -0x48) = in_xd2;
      in_xd2 = *(double *)((int)ar4 + 4);
      dVar20 = *(double *)((int)puVar10 + -0x40);
    }
    fVar15 = SUB84(dVar29,0);
    if (in_FPSCR_PR == '\0') {
      fVar16 = (SUB84(dVar20,0) - fVar15) * (float)((ulonglong)dVar20 >> 0x20);
    }
    else {
      fVar16 = SUB84((dVar20 - dVar29) * (dVar20 - dVar29),0);
    }
    fVar18 = SUB84(dVar25,0);
    if (in_FPSCR_PR == '\0') {
      dVar20 = (double)CONCAT44(0x3f800000,fVar16 * fVar18);
    }
    else {
      dVar20 = (double)CONCAT44(0x3f800000,fVar16) * dVar25;
    }
    if (in_FPSCR_SZ == '\0') {
      *(int *)((int)puVar10 + -0x44) = SUB84(dVar20,0);
      dVar20 = (double)CONCAT44((int)((ulonglong)dVar20 >> 0x20),*(undefined4 *)(ar5 + 1));
    }
    else {
      *(double *)((int)puVar10 + -0x44) = in_xd2;
      in_xd2 = ar5[1];
    }
    if (in_FPSCR_PR == '\0') {
      dVar20 = (double)CONCAT44((float)((ulonglong)dVar20 >> 0x20) / SUB84(dVar20,0),SUB84(dVar20,0)
                               );
    }
    else {
      dVar20 = dVar20 / dVar20;
    }
    if (in_FPSCR_SZ == '\0') {
      *(int *)((int)puVar10 + -0x24) = (int)((ulonglong)dVar20 >> 0x20);
      *(undefined4 *)((int)puVar10 + -0x38) = *(undefined4 *)ar5;
      *(undefined4 *)((int)puVar10 + -0x34) = *(undefined4 *)((int)ar5 + 4);
      *(undefined4 *)((int)puVar10 + -0x30) = *(undefined4 *)(ar5 + 1);
      *(undefined4 *)((int)puVar10 + -0x20) = *(undefined4 *)((int)ar5 + 0xc);
      dVar20 = (double)CONCAT44(*(undefined4 *)((int)puVar10 + -0x24),*(undefined4 *)ar5);
    }
    else {
      *(double *)((int)puVar10 + -0x24) = dVar20;
      *(double *)((int)puVar10 + -0x38) = *ar5;
      *(undefined8 *)((int)puVar10 + -0x34) = *(undefined8 *)((int)ar5 + 4);
      *(double *)((int)puVar10 + -0x30) = ar5[1];
      *(undefined8 *)((int)puVar10 + -0x20) = *(undefined8 *)((int)ar5 + 0xc);
      in_xd2 = *ar5;
      dVar20 = *(double *)((int)puVar10 + -0x24);
    }
    if (in_FPSCR_PR == '\0') {
      fVar16 = (SUB84(dVar20,0) - fVar26) * (float)((ulonglong)dVar20 >> 0x20) * fVar17;
    }
    else {
      fVar16 = SUB84((dVar20 - dVar27) * (dVar20 - dVar27) * dVar25,0);
    }
    if (in_FPSCR_SZ == '\0') {
      *(float *)((int)puVar10 + -0x2c) = fVar16;
      dVar20 = (double)CONCAT44(*(undefined4 *)((int)puVar10 + -0x24),*(undefined4 *)((int)ar5 + 4))
      ;
    }
    else {
      *(double *)((int)puVar10 + -0x2c) = in_xd2;
      in_xd2 = *(double *)((int)ar5 + 4);
      dVar20 = *(double *)((int)puVar10 + -0x24);
    }
    if (in_FPSCR_PR == '\0') {
      fVar16 = (SUB84(dVar20,0) - fVar15) * (float)((ulonglong)dVar20 >> 0x20) * fVar18;
    }
    else {
      fVar16 = SUB84((dVar20 - dVar29) * (dVar20 - dVar29) * dVar25,0);
    }
    if (in_FPSCR_SZ == '\0') {
      *(float *)((int)puVar10 + -0x28) = fVar16;
      fVar16 = *(float *)(ar6 + 1);
    }
    else {
      *(double *)((int)puVar10 + -0x28) = in_xd2;
      in_xd2 = ar6[1];
    }
    if (in_FPSCR_PR == '\0') {
      dVar20 = (double)CONCAT44(1.0 / fVar16,fVar16);
    }
    else {
      dVar20 = (double)CONCAT44(0x3f800000,fVar16) / (double)CONCAT44(0x3f800000,fVar16);
    }
    if (in_FPSCR_SZ == '\0') {
      *(int *)((int)puVar10 + -8) = (int)((ulonglong)dVar20 >> 0x20);
      *(undefined4 *)((int)puVar10 + -0x1c) = *(undefined4 *)ar6;
      *(undefined4 *)((int)puVar10 + -0x18) = *(undefined4 *)((int)ar6 + 4);
      *(undefined4 *)((int)puVar10 + -0x14) = *(undefined4 *)(ar6 + 1);
      *(undefined4 *)((int)puVar10 + -4) = *(undefined4 *)((int)ar6 + 0xc);
      dVar20 = (double)CONCAT44(*(undefined4 *)((int)puVar10 + -8),*(undefined4 *)ar6);
    }
    else {
      *(double *)((int)puVar10 + -8) = dVar20;
      *(double *)((int)puVar10 + -0x1c) = *ar6;
      *(undefined8 *)((int)puVar10 + -0x18) = *(undefined8 *)((int)ar6 + 4);
      *(double *)((int)puVar10 + -0x14) = ar6[1];
      *(undefined8 *)((int)puVar10 + -4) = *(undefined8 *)((int)ar6 + 0xc);
      in_xd2 = *ar6;
      dVar20 = *(double *)((int)puVar10 + -8);
    }
    if (in_FPSCR_PR == '\0') {
      fVar17 = (SUB84(dVar20,0) - fVar26) * (float)((ulonglong)dVar20 >> 0x20) * fVar17;
    }
    else {
      fVar17 = SUB84((dVar20 - dVar27) * (dVar20 - dVar27) * dVar25,0);
    }
    if (in_FPSCR_SZ == '\0') {
      *(float *)((int)puVar10 + -0x10) = fVar17;
      dVar27 = (double)CONCAT44(*(undefined4 *)((int)puVar10 + -8),*(undefined4 *)((int)ar6 + 4));
    }
    else {
      *(double *)((int)puVar10 + -0x10) = in_xd2;
      in_xd2 = *(double *)((int)ar6 + 4);
      dVar27 = *(double *)((int)puVar10 + -8);
    }
    if (in_FPSCR_PR == '\0') {
      fVar18 = (SUB84(dVar27,0) - fVar15) * (float)((ulonglong)dVar27 >> 0x20) * fVar18;
    }
    else {
      fVar18 = SUB84((dVar27 - dVar29) * (dVar27 - dVar29) * dVar25,0);
    }
    iVar4 = 0;
    if (in_FPSCR_SZ == '\0') {
      *(float *)((int)puVar10 + -0xc) = fVar18;
    }
    else {
      *(double *)((int)puVar10 + -0xc) = in_xd2;
    }
    puVar7 = (undefined8 *)((int)puVar10 + -0xc4);
    iVar9 = 2;
    for (iVar5 = 0; iVar5 < 3; iVar5 = iVar5 + 1) {
      if (in_FPSCR_SZ == '\0') {
        uVar21 = CONCAT44(*(undefined4 *)((int)pdVar6 + iVar9 * 0x1c + 0x14),0x3f800000);
      }
      else {
        uVar21 = *(undefined8 *)((int)pdVar6 + iVar9 * 0x1c + 0x14);
      }
      puVar1 = (undefined8 *)((int)pdVar6 + iVar5 * 0x1c + 0x14);
      if (in_FPSCR_SZ == '\0') {
        uVar22 = CONCAT44(*(undefined4 *)puVar1,(float)uVar21);
      }
      else {
        uVar22 = *puVar1;
      }
      fVar17 = (float)uVar22;
      if (((in_FPSCR_PR == '\0' && (float)uVar21 < (float)((ulonglong)uVar21 >> 0x20)) ^ 1) !=
          -((in_FPSCR_PR == '\0' && fVar17 < (float)((ulonglong)uVar22 >> 0x20)) - 1)) {
        if (in_FPSCR_SZ == '\0') {
          fVar17 = *(float *)((int)pdVar6 + iVar9 * 0x1c + 0x14);
          in_dr0 = (double)CONCAT44((int)((ulonglong)in_dr0 >> 0x20),
                                    *(undefined4 *)((int)pdVar6 + iVar5 * 0x1c + 0x14));
          fVar16 = fVar17;
          dVar29 = (double)CONCAT44(fVar17,SUB84(dVar25,0));
        }
        else {
          in_xd2 = *(double *)((int)pdVar6 + iVar9 * 0x1c + 0x14);
          in_xd0 = *(double *)((int)pdVar6 + iVar5 * 0x1c + 0x14);
          fVar16 = (float)((ulonglong)in_xd2 >> 0x20);
          dVar29 = in_xd2;
        }
        dVar27 = (double)CONCAT44(0x3f800000,-fVar17);
        if (in_FPSCR_PR == '\0') {
          dVar27 = (double)CONCAT44(0x3f800000,-fVar17 + 1.0);
          dVar20 = (double)CONCAT44((int)((ulonglong)in_dr0 >> 0x20),SUB84(in_dr0,0) - fVar16);
        }
        else {
          dVar27 = dVar27 + dVar27;
          dVar20 = in_dr0 - dVar29;
        }
        if (in_FPSCR_SZ == '\0') {
          dVar29 = (double)CONCAT44(*(undefined4 *)((int)pdVar6 + iVar9 * 0x1c + 0xc),
                                    SUB84(dVar29,0));
        }
        else {
          dVar29 = *(double *)((int)pdVar6 + iVar9 * 0x1c + 0xc);
        }
        dVar33 = in_xd2;
        if (in_FPSCR_SZ == '\0') {
          dVar29 = (double)CONCAT44((int)((ulonglong)dVar29 >> 0x20),SUB84(dVar27,0));
          dVar33 = in_xd4;
        }
        if (in_FPSCR_PR == '\0') {
          dVar29 = (double)CONCAT44((int)((ulonglong)dVar29 >> 0x20),
                                    SUB84(dVar29,0) / SUB84(dVar20,0));
        }
        else {
          dVar29 = dVar29 / dVar20;
        }
        fVar17 = (float)((ulonglong)dVar29 >> 0x20);
        if (in_FPSCR_SZ == '\0') {
          dVar27 = (double)CONCAT44((int)((ulonglong)dVar27 >> 0x20),
                                    *(undefined4 *)((int)pdVar6 + iVar5 * 0x1c + 0xc));
          dVar20 = (double)(ulonglong)(uint)fVar17;
          dVar25 = in_xd0;
          dVar32 = in_xd2;
        }
        else {
          dVar32 = *(double *)((int)pdVar6 + iVar5 * 0x1c + 0xc);
          dVar25 = dVar29;
        }
        if (in_FPSCR_PR == '\0') {
          dVar27 = (double)CONCAT44((int)((ulonglong)dVar27 >> 0x20),SUB84(dVar27,0) - fVar17);
        }
        else {
          dVar27 = dVar27 - dVar29;
        }
        if (in_FPSCR_SZ == '\0') {
          dVar31 = (double)CONCAT44(*(undefined4 *)((int)pdVar6 + iVar9 * 0x1c + 0x10),
                                    SUB84(in_dr10,0));
        }
        else {
          dVar31 = *(double *)((int)pdVar6 + iVar9 * 0x1c + 0x10);
        }
        pdVar8 = (double *)(iVar4 * 0x1c + (int)puVar7);
        dVar13 = dVar33;
        if (in_FPSCR_SZ == '\0') {
          dVar13 = (double)CONCAT44(SUB84(dVar29,0),SUB84(dVar20,0));
        }
        if (in_FPSCR_PR == '\0') {
          fVar17 = (float)((ulonglong)dVar13 >> 0x20);
          dVar13 = (double)CONCAT44(fVar17,fVar17 * SUB84(dVar27,0) + SUB84(dVar13,0));
        }
        if (in_FPSCR_SZ == '\0') {
          dVar27 = (double)CONCAT44((int)((ulonglong)dVar27 >> 0x20),
                                    *(undefined4 *)((int)pdVar6 + iVar5 * 0x1c + 0x10));
        }
        else {
          dVar32 = *(double *)((int)pdVar6 + iVar5 * 0x1c + 0x10);
        }
        fVar17 = (float)((ulonglong)dVar31 >> 0x20);
        if (in_FPSCR_PR == '\0') {
          dVar27 = (double)CONCAT44((int)((ulonglong)dVar27 >> 0x20),SUB84(dVar27,0) - fVar17);
        }
        else {
          dVar27 = dVar27 - dVar31;
        }
        in_dr10 = dVar31;
        if (in_FPSCR_SZ == '\0') {
          uVar11 = SUB84(dVar13,0);
          dVar13 = (double)CONCAT44((int)((ulonglong)dVar13 >> 0x20),fVar17);
          in_dr10 = dVar25;
          dVar25 = (double)CONCAT44(uVar11,SUB84(dVar29,0));
        }
        if (in_FPSCR_PR == '\0') {
          dVar13 = (double)(ulonglong)
                           (uint)((float)((ulonglong)dVar13 >> 0x20) * SUB84(dVar27,0) +
                                 SUB84(dVar13,0));
        }
        in_xd2 = in_xd6;
        dVar29 = dVar25;
        if (in_FPSCR_SZ == '\0') {
          dVar27 = (double)CONCAT44((int)((ulonglong)dVar27 >> 0x20),fVar26);
          in_xd2 = dVar32;
          dVar29 = (double)CONCAT44((int)((ulonglong)dVar25 >> 0x20),SUB84(dVar13,0));
        }
        if (in_FPSCR_PR == '\0') {
          dVar27 = (double)CONCAT44((int)((ulonglong)dVar27 >> 0x20),
                                    (float)((ulonglong)dVar29 >> 0x20) * fVar28 + SUB84(dVar27,0));
        }
        if (in_FPSCR_SZ == '\0') {
          *(int *)pdVar8 = SUB84(dVar27,0);
          in_dr0 = (double)CONCAT44(SUB84(dVar29,0),fVar15);
          in_xd0 = in_dr10;
          in_dr10 = (double)CONCAT44(SUB84(dVar29,0),SUB84(dVar31,0));
        }
        else {
          *pdVar8 = in_xd2;
          in_dr0 = in_dr10;
          in_xd0 = in_xd8;
        }
        if (in_FPSCR_PR == '\0') {
          fVar17 = (float)((ulonglong)in_dr0 >> 0x20);
          in_dr0 = (double)CONCAT44(fVar17,fVar17 * fVar30 + SUB84(in_dr0,0));
        }
        uVar11 = SUB84(in_dr0,0);
        if (in_FPSCR_SZ == '\0') {
          *(undefined4 *)((int)pdVar8 + 4) = uVar11;
          *(int *)(pdVar8 + 1) = (int)((ulonglong)dVar27 >> 0x20);
        }
        else {
          *(double *)((int)pdVar8 + 4) = in_xd0;
          pdVar8[1] = dVar27;
        }
        if (DAT_8c277acc == 0) {
          iVar9 = iVar9 * 0x1c + (int)pdVar6;
          uVar24 = SUB84(dVar25,0);
          if (_DAT_8c4ab1d8 == 0x23) {
            uVar2 = *(uint *)(iVar9 + 0x18);
            fVar17 = (float)(uVar2 >> 0x18);
            dVar27 = (double)(ulonglong)(uint)fVar17;
            dVar29 = in_xd2;
            if (in_FPSCR_SZ == '\0') {
              dVar29 = (double)CONCAT44(fVar17,uVar24);
            }
            dVar20 = in_xd2;
            if (in_FPSCR_PR == '\0' && fVar17 < 0.0) {
              if (in_FPSCR_SZ == '\0') {
                dVar27 = 6.58979161647419e-315;
              }
              else {
                in_xd2 = -5.33928519214582e+285;
              }
              dVar20 = in_xd2;
              if (in_FPSCR_PR == '\0') {
                dVar29 = (double)CONCAT44((float)((ulonglong)dVar29 >> 0x20) + SUB84(dVar27,0),
                                          SUB84(dVar29,0));
              }
              else {
                dVar29 = dVar29 + dVar27;
              }
            }
            fVar17 = (float)(uVar2 >> 0x10 & 0xff);
            dVar25 = (double)(ulonglong)(uint)fVar17;
            dVar27 = dVar20;
            if (in_FPSCR_SZ == '\0') {
              dVar27 = (double)CONCAT44(fVar17,SUB84(in_dr10,0));
            }
            if (in_FPSCR_PR == '\0' && fVar17 < 0.0) {
              if (in_FPSCR_SZ == '\0') {
                dVar25 = 6.58979161647419e-315;
              }
              else {
                dVar20 = -5.33928519214582e+285;
              }
              if (in_FPSCR_PR == '\0') {
                dVar27 = (double)CONCAT44((float)((ulonglong)dVar27 >> 0x20) + SUB84(dVar25,0),
                                          SUB84(dVar27,0));
              }
              else {
                dVar27 = dVar27 + dVar25;
              }
            }
            fVar17 = (float)(uVar2 >> 8 & 0xff);
            dVar32 = (double)(ulonglong)(uint)fVar17;
            dVar25 = dVar20;
            if (in_FPSCR_SZ == '\0') {
              dVar27 = (double)CONCAT44((int)((ulonglong)dVar27 >> 0x20),fVar17);
              dVar25 = in_xd10;
            }
            dVar31 = dVar25;
            if (in_FPSCR_PR != '\0' || 0.0 <= fVar17) {
              if (in_FPSCR_SZ == '\0') {
                in_dr14 = (double)((ulonglong)dVar27 & 0xffffffff);
                dVar31 = in_xd14;
              }
            }
            else {
              if (in_FPSCR_SZ == '\0') {
                in_dr14 = (double)CONCAT44((int)((ulonglong)in_dr14 >> 0x20),SUB84(dVar27,0));
                dVar32 = 6.58979161647419e-315;
                dVar31 = in_xd14;
              }
              else {
                dVar20 = -5.33928519214582e+285;
              }
              if (in_FPSCR_PR == '\0') {
                in_dr14 = (double)(ulonglong)(uint)(SUB84(in_dr14,0) + SUB84(dVar32,0));
              }
              else {
                in_dr14 = in_dr14 + dVar32;
              }
            }
            fVar17 = (float)(uVar2 & 0xff);
            dVar13 = (double)(ulonglong)(uint)fVar17;
            dVar32 = dVar20;
            if (in_FPSCR_SZ == '\0') {
              dVar27 = (double)CONCAT44((int)((ulonglong)dVar27 >> 0x20),fVar17);
              dVar32 = dVar25;
            }
            uVar11 = SUB84(in_dr14,0);
            if (in_FPSCR_PR != '\0' || 0.0 <= fVar17) {
              in_dr14 = dVar32;
              if (in_FPSCR_SZ == '\0') {
                in_dr14 = (double)CONCAT44(SUB84(dVar27,0),uVar11);
              }
            }
            else {
              if (in_FPSCR_SZ == '\0') {
                dVar13 = 6.58979161647419e-315;
                dVar25 = (double)CONCAT44(SUB84(dVar27,0),uVar11);
              }
              else {
                dVar20 = -5.33928519214582e+285;
                dVar25 = dVar32;
              }
              if (in_FPSCR_PR == '\0') {
                in_dr14 = (double)CONCAT44((float)((ulonglong)dVar25 >> 0x20) + SUB84(dVar13,0),
                                           SUB84(dVar25,0));
              }
              else {
                in_dr14 = dVar25 + dVar13;
              }
            }
            uVar2 = *(uint *)((int)pdVar6 + iVar5 * 0x1c + 0x18);
            fVar17 = (float)(uVar2 >> 0x18);
            dVar25 = (double)(ulonglong)(uint)fVar17;
            dVar13 = dVar20;
            if (in_FPSCR_SZ == '\0') {
              dVar27 = (double)CONCAT44((int)((ulonglong)dVar27 >> 0x20),fVar17);
              dVar13 = dVar32;
            }
            if (in_FPSCR_PR == '\0' && fVar17 < 0.0) {
              if (in_FPSCR_SZ == '\0') {
                dVar25 = 6.58979161647419e-315;
              }
              else {
                dVar20 = -5.33928519214582e+285;
              }
              if (in_FPSCR_PR == '\0') {
                dVar27 = (double)CONCAT44((int)((ulonglong)dVar27 >> 0x20),
                                          SUB84(dVar27,0) + SUB84(dVar25,0));
              }
              else {
                dVar27 = dVar27 + dVar25;
              }
            }
            fVar17 = (float)(uVar2 >> 0x10 & 0xff);
            dVar25 = (double)(ulonglong)(uint)fVar17;
            dVar32 = dVar20;
            if (in_FPSCR_SZ == '\0') {
              in_dr0 = (double)CONCAT44((int)((ulonglong)in_dr0 >> 0x20),fVar17);
              dVar32 = in_xd0;
            }
            if (in_FPSCR_PR == '\0' && fVar17 < 0.0) {
              if (in_FPSCR_SZ == '\0') {
                dVar25 = 6.58979161647419e-315;
              }
              else {
                dVar20 = -5.33928519214582e+285;
              }
              if (in_FPSCR_PR == '\0') {
                in_dr0 = (double)CONCAT44((int)((ulonglong)in_dr0 >> 0x20),
                                          SUB84(in_dr0,0) + SUB84(dVar25,0));
              }
              else {
                in_dr0 = in_dr0 + dVar25;
              }
            }
            fVar17 = (float)(uVar2 >> 8 & 0xff);
            dVar23 = (double)(ulonglong)(uint)fVar17;
            dVar25 = dVar20;
            if (in_FPSCR_SZ == '\0') {
              dVar25 = (double)CONCAT44(fVar17,SUB84(in_dr12,0));
            }
            if (in_FPSCR_PR == '\0' && fVar17 < 0.0) {
              if (in_FPSCR_SZ == '\0') {
                dVar23 = 6.58979161647419e-315;
              }
              else {
                dVar20 = -5.33928519214582e+285;
              }
              if (in_FPSCR_PR == '\0') {
                dVar25 = (double)CONCAT44((float)((ulonglong)dVar25 >> 0x20) + SUB84(dVar23,0),
                                          SUB84(dVar25,0));
              }
              else {
                dVar25 = dVar25 + dVar23;
              }
            }
            if (in_FPSCR_PR == '\0') {
              dVar23 = (double)((ulonglong)(uint)(float)(uVar2 & 0xff) << 0x20);
            }
            else {
              dVar23 = (double)(uVar2 & 0xff);
            }
            fVar17 = (float)((ulonglong)dVar23 >> 0x20);
            if (in_FPSCR_SZ == '\0') {
              *(float *)((int)puVar10 + -0xd4) = fVar17;
            }
            else {
              *(double *)((int)puVar10 + -0xd4) = dVar23;
            }
            if (in_FPSCR_PR != '\0' || SUB84(dVar23,0) <= fVar17) {
              if (in_FPSCR_SZ == '\0') {
                dVar23 = (double)CONCAT44(fVar17,*(undefined4 *)((int)puVar10 + -0xd4));
              }
              else {
                dVar20 = *(double *)((int)puVar10 + -0xd4);
              }
            }
            else {
              if (in_FPSCR_SZ == '\0') {
                dVar23 = (double)CONCAT44(0x4f800000,*(undefined4 *)((int)puVar10 + -0xd4));
              }
              else {
                dVar20 = *(double *)((int)puVar10 + -0xd4);
                dVar23 = -5.33928519214582e+285;
              }
              if (in_FPSCR_PR == '\0') {
                fVar17 = (float)((ulonglong)dVar23 >> 0x20);
                dVar23 = (double)CONCAT44(fVar17,SUB84(dVar23,0) + fVar17);
              }
              else {
                dVar23 = dVar23 + dVar23;
              }
            }
            fVar17 = (float)((ulonglong)dVar29 >> 0x20);
            if (in_FPSCR_PR == '\0') {
              dVar27 = (double)CONCAT44((int)((ulonglong)dVar27 >> 0x20),SUB84(dVar27,0) - fVar17);
            }
            else {
              dVar27 = dVar27 - dVar29;
            }
            if (in_FPSCR_SZ == '\0') {
              *(float *)((int)puVar10 + -0xcc) = SUB84(dVar23,0);
            }
            else {
              *(double *)((int)puVar10 + -0xcc) = dVar20;
            }
            fVar18 = (float)((ulonglong)in_dr14 >> 0x20);
            fVar16 = (float)((ulonglong)dVar27 >> 0x20);
            if (in_FPSCR_PR == '\0') {
              fVar19 = SUB84(dVar23,0) - fVar18;
              fVar12 = SUB84(in_dr0,0) - fVar16;
            }
            else {
              fVar19 = SUB84(dVar23 - in_dr14,0);
              fVar12 = SUB84(in_dr0 - dVar27,0);
            }
            dVar23 = dVar29;
            if (in_FPSCR_SZ == '\0') {
              dVar23 = (double)CONCAT44(fVar17,fVar19);
            }
            if (in_FPSCR_PR == '\0') {
              in_dr12 = (double)CONCAT44((float)((ulonglong)dVar25 >> 0x20) - SUB84(in_dr14,0),
                                         SUB84(dVar25,0));
            }
            else {
              in_dr12 = dVar25 - in_dr14;
            }
            dVar14 = dVar33;
            if (in_FPSCR_SZ == '\0') {
              dVar14 = (double)CONCAT44(SUB84(dVar29,0),fVar12);
            }
            fVar17 = (float)((ulonglong)dVar14 >> 0x20);
            if (in_FPSCR_PR == '\0') {
              dVar23 = (double)CONCAT44(fVar17 * SUB84(dVar27,0) +
                                        (float)((ulonglong)dVar23 >> 0x20),SUB84(dVar23,0));
            }
            dVar25 = in_dr14;
            if (in_FPSCR_SZ == '\0') {
              dVar25 = (double)CONCAT44(fVar18,SUB84(dVar29,0));
            }
            if (in_FPSCR_PR == '\0') {
              dVar25 = (double)CONCAT44(fVar17 * SUB84(dVar23,0) +
                                        (float)((ulonglong)dVar25 >> 0x20),SUB84(dVar25,0));
            }
            in_xd10 = dVar27;
            if (in_FPSCR_SZ == '\0') {
              dVar27 = (double)(ulonglong)(uint)fVar16;
              in_xd10 = dVar13;
            }
            fVar16 = SUB84(dVar27,0);
            if (in_FPSCR_PR == '\0') {
              fVar16 = fVar17 * SUB84(dVar14,0) + fVar16;
            }
            in_xd2 = dVar23;
            if (in_FPSCR_SZ == '\0') {
              uVar11 = (undefined4)((ulonglong)dVar23 >> 0x20);
              dVar23 = (double)CONCAT44(uVar11,uVar11);
              in_xd2 = dVar20;
            }
            in_dr0 = (double)CONCAT44(fVar17,0x4f000000);
            if (in_FPSCR_PR == '\0') {
              bVar34 = SUB84(dVar23,0) < 2.1474836e+09;
            }
            else {
              bVar34 = dVar23 < in_dr0;
            }
            uVar11 = (undefined4)((ulonglong)dVar23 >> 0x20);
            if (in_FPSCR_SZ == '\0') {
              *(undefined4 *)((int)puVar10 + -200) = uVar11;
              in_dr10 = (double)CONCAT44(SUB84(in_dr14,0),fVar16);
            }
            else {
              *(double *)((int)puVar10 + -200) = dVar23;
              in_dr10 = dVar31;
            }
            if (in_FPSCR_PR == '\0') {
              in_dr10 = (double)CONCAT44(fVar17 * (float)((ulonglong)in_dr12 >> 0x20) +
                                         (float)((ulonglong)in_dr10 >> 0x20),SUB84(in_dr10,0));
            }
            if (!bVar34) {
              if (in_FPSCR_PR == '\0') {
                in_dr0 = (double)CONCAT44(fVar17,0x4f800000);
                dVar23 = (double)CONCAT44(uVar11,SUB84(dVar23,0) - 4.2949673e+09);
              }
              else {
                in_dr0 = in_dr0 + in_dr0;
                dVar23 = dVar23 - in_dr0;
              }
            }
            if (in_FPSCR_PR == '\0') {
              iVar9 = (int)SUB84(dVar23,0);
            }
            else {
              iVar9 = (int)dVar23;
            }
            uVar11 = (undefined4)((ulonglong)dVar23 >> 0x20);
            dVar29 = (double)CONCAT44(uVar11,0x4f000000);
            if (in_FPSCR_PR == '\0') {
              bVar34 = SUB84(in_dr10,0) < 2.1474836e+09;
            }
            else {
              bVar34 = in_dr10 < dVar29;
            }
            if (!bVar34) {
              if (in_FPSCR_PR == '\0') {
                dVar29 = (double)CONCAT44(uVar11,0x4f800000);
                in_dr10 = (double)CONCAT44((int)((ulonglong)in_dr10 >> 0x20),
                                           SUB84(in_dr10,0) - 4.2949673e+09);
              }
              else {
                dVar29 = dVar29 + dVar29;
                in_dr10 = in_dr10 - dVar29;
              }
            }
            if (in_FPSCR_PR == '\0') {
              iVar35 = (int)SUB84(in_dr10,0);
            }
            else {
              iVar35 = (int)in_dr10;
            }
            uVar11 = (undefined4)((ulonglong)dVar29 >> 0x20);
            dVar29 = (double)CONCAT44(uVar11,0x4f000000);
            fVar17 = (float)((ulonglong)in_dr10 >> 0x20);
            if (in_FPSCR_PR == '\0') {
              bVar34 = fVar17 < 2.1474836e+09;
            }
            else {
              bVar34 = in_dr10 < dVar29;
            }
            if (!bVar34) {
              if (in_FPSCR_PR == '\0') {
                dVar29 = (double)CONCAT44(uVar11,0x4f800000);
                in_dr10 = (double)CONCAT44(fVar17 - 4.2949673e+09,SUB84(in_dr10,0));
              }
              else {
                dVar29 = dVar29 + dVar29;
                in_dr10 = in_dr10 - dVar29;
              }
            }
            if (in_FPSCR_PR == '\0') {
              iVar36 = (int)(float)((ulonglong)in_dr10 >> 0x20);
            }
            else {
              iVar36 = (int)in_dr10;
            }
            dVar29 = (double)CONCAT44((int)((ulonglong)dVar29 >> 0x20),0x4f000000);
            fVar17 = (float)((ulonglong)dVar25 >> 0x20);
            if (in_FPSCR_PR == '\0') {
              bVar34 = fVar17 < 2.1474836e+09;
            }
            else {
              bVar34 = dVar25 < dVar29;
            }
            if (!bVar34) {
              if (in_FPSCR_PR == '\0') {
                dVar25 = (double)CONCAT44(fVar17 - 4.2949673e+09,SUB84(dVar25,0));
              }
              else {
                dVar25 = dVar25 - (dVar29 + dVar29);
              }
            }
            if (in_FPSCR_PR == '\0') {
              uVar2 = (uint)(float)((ulonglong)dVar25 >> 0x20);
            }
            else {
              uVar2 = (uint)dVar25;
            }
            *(uint *)((int)puVar7 + iVar4 * 0x1c + 0x18) =
                 iVar9 << 0x18 | iVar35 << 0x10 | iVar36 << 8 | uVar2;
            in_xd0 = dVar32;
            in_xd14 = dVar31;
          }
          else {
            in_dr0 = dVar33;
            if (in_FPSCR_SZ == '\0') {
              in_dr0 = (double)CONCAT44(uVar24,uVar11);
            }
            *(int *)((int)puVar10 + -0xd0) = iVar9;
            if (in_FPSCR_SZ == '\0') {
              fVar17 = *(float *)(iVar9 + 0x18);
              dVar29 = (double)CONCAT44(fVar17,*(undefined4 *)((int)pdVar6 + iVar5 * 0x1c + 0x18));
              dVar25 = (double)CONCAT44(fVar17,uVar24);
            }
            else {
              dVar29 = *(double *)(iVar9 + 0x18);
              fVar17 = (float)((ulonglong)dVar29 >> 0x20);
              in_xd2 = *(double *)((int)pdVar6 + iVar5 * 0x1c + 0x18);
              dVar25 = dVar29;
            }
            if (in_FPSCR_PR == '\0') {
              fVar17 = SUB84(dVar29,0) - fVar17;
              dVar29 = (double)CONCAT44((float)((ulonglong)in_dr0 >> 0x20) * fVar17 +
                                        (float)((ulonglong)dVar29 >> 0x20),fVar17);
            }
            else {
              dVar29 = dVar29 - dVar25;
            }
            if (in_FPSCR_SZ == '\0') {
              *(int *)((int)puVar7 + iVar4 * 0x1c + 0x18) = (int)((ulonglong)dVar29 >> 0x20);
            }
            else {
              *(double *)((int)puVar7 + iVar4 * 0x1c + 0x18) = dVar29;
            }
          }
        }
        iVar4 = iVar4 + 1;
        in_xd4 = dVar33;
      }
      puVar1 = (undefined8 *)(iVar5 * 0x1c + (int)pdVar6);
      if (in_FPSCR_SZ == '\0') {
        uVar21 = CONCAT44(*(undefined4 *)((int)puVar1 + 0x14),0x3f800000);
      }
      else {
        uVar21 = *(undefined8 *)((int)puVar1 + 0x14);
      }
      if (in_FPSCR_PR == '\0' && (float)uVar21 < (float)((ulonglong)uVar21 >> 0x20)) {
        if (in_FPSCR_SZ == '\0') {
          uVar21 = CONCAT44(*(undefined4 *)puVar1,(float)uVar21);
        }
        else {
          uVar21 = *puVar1;
        }
        puVar3 = (undefined8 *)(iVar4 * 0x1c + (int)puVar7);
        if (in_FPSCR_SZ == '\0') {
          *(int *)puVar3 = (int)((ulonglong)uVar21 >> 0x20);
          in_dr0 = (double)CONCAT44((int)((ulonglong)in_dr0 >> 0x20),
                                    *(undefined4 *)((int)puVar1 + 4));
          *(undefined4 *)((int)puVar3 + 4) = *(undefined4 *)((int)puVar1 + 4);
          *(undefined4 *)(puVar3 + 1) = *(undefined4 *)(puVar1 + 1);
        }
        else {
          *puVar3 = uVar21;
          in_xd0 = *(double *)((int)puVar1 + 4);
          *(double *)((int)puVar3 + 4) = in_xd0;
          puVar3[1] = puVar1[1];
        }
        if (DAT_8c277acc == 0) {
          if (in_FPSCR_SZ == '\0') {
            *(undefined4 *)((int)puVar7 + iVar4 * 0x1c + 0x18) =
                 *(undefined4 *)((int)pdVar6 + iVar5 * 0x1c + 0x18);
          }
          else {
            *(undefined8 *)((int)puVar7 + iVar4 * 0x1c + 0x18) =
                 *(undefined8 *)((int)pdVar6 + iVar5 * 0x1c + 0x18);
          }
        }
        iVar4 = iVar4 + 1;
      }
      iVar9 = iVar5;
    }
    if (DAT_8c277acc != 0) {
      if (in_FPSCR_SZ == '\0') {
        *(undefined4 *)((int)puVar10 + -0x74) = *(undefined4 *)((int)puVar10 + -4);
        *(undefined4 *)((int)puVar10 + -0x58) = *(undefined4 *)((int)puVar10 + -4);
      }
      else {
        *(undefined8 *)((int)puVar10 + -0x74) = *(undefined8 *)((int)puVar10 + -4);
        *(undefined8 *)((int)puVar10 + -0x58) = *(undefined8 *)((int)puVar10 + -4);
      }
    }
    if (in_FPSCR_SZ == '\0') {
      ar7[6] = *(undefined4 *)((int)puVar10 + -0xac);
      ar7[3] = *(undefined4 *)((int)puVar10 + -0xbc);
      ar7[2] = *(undefined4 *)((int)puVar10 + -0xc0);
      puVar1 = (undefined8 *)(ar7 + 1);
      *(undefined4 *)puVar1 = *(undefined4 *)puVar7;
    }
    else {
      *(undefined8 *)(ar7 + 5) = *(undefined8 *)((int)puVar10 + -0xac);
      *(undefined8 *)(ar7 + 1) = *(undefined8 *)((int)puVar10 + -0xbc);
      *(undefined8 *)(ar7 + -1) = *(undefined8 *)((int)puVar10 + -0xc0);
      puVar1 = (undefined8 *)(ar7 + -3);
      *puVar1 = *puVar7;
    }
    *(undefined4 *)((int)puVar1 + -4) = 0xe0000000;
    if (in_FPSCR_SZ == '\0') {
      *(undefined4 *)((int)puVar1 + 0x34) = *(undefined4 *)((int)puVar10 + -0x90);
      *(undefined4 *)(puVar1 + 5) = *(undefined4 *)((int)puVar10 + -0xa0);
      *(undefined4 *)((int)puVar1 + 0x24) = *(undefined4 *)((int)puVar10 + -0xa4);
      puVar1 = puVar1 + 4;
      *(undefined4 *)puVar1 = *(undefined4 *)((int)puVar10 + -0xa8);
    }
    else {
      puVar1[6] = *(undefined8 *)((int)puVar10 + -0x90);
      puVar1[4] = *(undefined8 *)((int)puVar10 + -0xa0);
      puVar1[3] = *(undefined8 *)((int)puVar10 + -0xa4);
      puVar1 = puVar1 + 2;
      *puVar1 = *(undefined8 *)((int)puVar10 + -0xa8);
    }
    *(undefined4 *)((int)puVar1 + -4) = 0xe0000000;
    if (iVar4 != 3) {
      if (in_FPSCR_SZ == '\0') {
        *(undefined4 *)((int)puVar1 + 0x34) = *(undefined4 *)((int)puVar10 + -0x58);
        *(undefined4 *)(puVar1 + 5) = *(undefined4 *)((int)puVar10 + -0x68);
        *(undefined4 *)((int)puVar1 + 0x24) = *(undefined4 *)((int)puVar10 + -0x6c);
        puVar1 = puVar1 + 4;
        *(undefined4 *)puVar1 = *(undefined4 *)((int)puVar10 + -0x70);
      }
      else {
        puVar1[6] = *(undefined8 *)((int)puVar10 + -0x58);
        puVar1[4] = *(undefined8 *)((int)puVar10 + -0x68);
        puVar1[3] = *(undefined8 *)((int)puVar10 + -0x6c);
        puVar1 = puVar1 + 2;
        *puVar1 = *(undefined8 *)((int)puVar10 + -0x70);
      }
      *(undefined4 *)((int)puVar1 + -4) = 0xe0000000;
    }
    if (in_FPSCR_SZ == '\0') {
      *(undefined4 *)((int)puVar1 + 0x34) = *(undefined4 *)((int)puVar10 + -0x74);
      *(undefined4 *)(puVar1 + 5) = *(undefined4 *)((int)puVar10 + -0x84);
      *(undefined4 *)((int)puVar1 + 0x24) = *(undefined4 *)((int)puVar10 + -0x88);
      puVar1 = puVar1 + 4;
      *(undefined4 *)puVar1 = *(undefined4 *)((int)puVar10 + -0x8c);
    }
    else {
      puVar1[6] = *(undefined8 *)((int)puVar10 + -0x74);
      puVar1[4] = *(undefined8 *)((int)puVar10 + -0x84);
      puVar1[3] = *(undefined8 *)((int)puVar10 + -0x88);
      puVar1 = puVar1 + 2;
      *puVar1 = *(undefined8 *)((int)puVar10 + -0x8c);
    }
    *(undefined4 *)((int)puVar1 + -4) = 0xf0000000;
    ar7 = (undefined4 *)((int)puVar1 + 0x1c);
    _DAT_8c4aa520 = _DAT_8c4aa520 + iVar4;
  }
  return ar7;
}

__asm__(".globl _FUN_8c215e10\n.set _FUN_8c215e10, _FUN_8c215e10_def\n");
