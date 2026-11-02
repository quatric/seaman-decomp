#include "../decls.h"
int FUN_8c25c9d8_def(uint *ar4,uint *ar5,int ar6,undefined4 ar7)

{
  double *pdVar1;
  undefined8 *puVar2;
  double *pdVar3;
  undefined8 *puVar4;
  undefined4 in_fr1;
  float fVar5;
  double in_dr2;
  double dVar6;
  uint uVar9;
  double dVar7;
  float fVar10;
  double dVar8;
  undefined4 uVar11;
  undefined4 in_fr5;
  undefined4 uVar14;
  float fVar15;
  double dVar12;
  float fVar16;
  double dVar13;
  float fVar17;
  double dVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  undefined8 in_dr8;
  double dVar22;
  double dVar23;
  undefined8 in_dr10;
  double dVar24;
  float fVar25;
  double in_dr12;
  double dVar26;
  undefined4 in_fr15;
  double dVar27;
  double in_xd2;
  double dVar28;
  double dVar29;
  double in_xd4;
  double in_xd6;
  double dVar30;
  double in_xd8;
  double in_xd10;
  double in_xd12;
  double in_xd14;
  bool bVar31;
  int iVar32;
  int iVar33;
  int iVar34;
  char in_FPSCR_PR = 0;
  char in_FPSCR_SZ = 0;
  undefined1 auStack_20 [16];
  undefined8 auStack_10 [2];
  
  uVar11 = (undefined4)((ulonglong)in_dr12 >> 0x20);
  if (in_FPSCR_SZ == '\0') {
    puVar4 = auStack_10;
    auStack_10[0] = CONCAT44(SUB84(in_dr12,0),uVar11);
  }
  else {
    puVar4 = (undefined8 *)auStack_20;
  }
  if (in_FPSCR_SZ == '\0') {
    uVar14 = *(undefined4 *)0x8c4aa4a8;
    in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),*(undefined4 *)0x8c4aa4dc);
    in_dr12 = (double)CONCAT44(uVar11,uVar14);
    dVar18 = (double)CONCAT44(*(undefined4 *)((int)0x8c4aa4a8 + 0xc),
                              *(undefined4 *)(0x8c4aa4a8 + 2));
    dVar24 = (double)CONCAT44(uVar14,in_fr5);
  }
  else {
    in_xd12 = *(undefined4 *)0x8c4aa4a8;
    dVar18 = *(double *)((int)0x8c4aa4a8 + 0xc);
    in_xd2 = *(undefined4 *)0x8c4aa4dc;
    uVar14 = (undefined4)((ulonglong)in_xd12 >> 0x20);
    in_xd6 = ((undefined1 *)2)[0x8c4aa4a8];
    dVar24 = in_xd12;
  }
  if (in_FPSCR_PR == '\0') {
    dVar26 = (double)CONCAT44((int)((ulonglong)in_dr12 >> 0x20),SUB84(in_dr12,0) * SUB84(in_dr2,0));
  }
  else {
    dVar26 = in_dr12 * in_dr2;
  }
  if (in_FPSCR_SZ == '\0') {
    dVar6 = (double)CONCAT44(*(undefined4 *)0x8c4aa4e0,ar4[3]);
    dVar27 = (double)CONCAT44(uVar14,in_fr15);
  }
  else {
    dVar6 = *(undefined4 *)0x8c4aa4e0;
    in_xd2 = *(double *)(ar4 + 3);
    dVar27 = dVar24;
  }
  fVar10 = (float)((ulonglong)dVar6 >> 0x20);
  if (in_FPSCR_PR == '\0') {
    dVar27 = (double)CONCAT44((float)((ulonglong)dVar27 >> 0x20) * fVar10,SUB84(dVar27,0));
    fVar15 = 1.0 / SUB84(dVar6,0);
  }
  else {
    dVar27 = dVar27 * dVar6;
    fVar15 = (float)((ulonglong)((double)CONCAT44(0x3f800000,SUB84(dVar24,0)) / dVar6) >> 0x20);
  }
  uVar11 = (undefined4)((ulonglong)in_dr10 >> 0x20);
  fVar25 = SUB84(dVar26,0);
  fVar16 = (float)((ulonglong)dVar27 >> 0x20);
  if (in_FPSCR_PR == '\0') {
    fVar20 = 1.0 / fVar25;
    dVar24 = (double)CONCAT44(uVar11,1.0 / fVar16);
  }
  else {
    fVar20 = SUB84((double)CONCAT44((int)((ulonglong)in_dr8 >> 0x20),0x3f800000) / dVar26,0);
    dVar24 = (double)CONCAT44(uVar11,0x3f800000) / dVar27;
  }
  if (in_FPSCR_SZ == '\0') {
    dVar6 = (double)CONCAT44(fVar10,ar5[3]);
    dVar22 = (double)CONCAT44(*(undefined4 *)0x8c4aa4d4,fVar20);
  }
  else {
    in_xd2 = *(double *)(ar5 + 3);
    dVar22 = *(undefined4 *)0x8c4aa4d4;
  }
  fVar10 = (float)((ulonglong)dVar22 >> 0x20);
  if (in_FPSCR_PR == '\0') {
    bVar31 = fVar15 < fVar10;
    dVar12 = (double)CONCAT44(fVar15,1.0 / SUB84(dVar6,0));
  }
  else {
    bVar31 = (double)CONCAT44(fVar15,0x3f800000) < dVar22;
    dVar12 = (double)CONCAT44(fVar15,0x3f800000) / dVar6;
  }
  fVar21 = SUB84(dVar22,0);
  uVar11 = (undefined4)((ulonglong)dVar6 >> 0x20);
  fVar17 = SUB84(dVar18,0);
  fVar19 = (float)((ulonglong)dVar18 >> 0x20);
  fVar20 = SUB84(dVar12,0);
  fVar15 = SUB84(in_xd10,0);
  if (bVar31) {
    if (in_FPSCR_SZ == '\0') {
      dVar6 = (double)CONCAT44(uVar11,ar4[3]);
    }
    else {
      in_xd2 = *(double *)(ar4 + 3);
    }
    if (in_FPSCR_PR == '\0') {
      dVar12 = (double)CONCAT44(1.0 / SUB84(dVar6,0),fVar20);
    }
    else {
      dVar12 = (double)CONCAT44(0x3f800000,fVar20) / dVar6;
    }
    pdVar3 = (double *)*ar4;
    if (in_FPSCR_SZ == '\0') {
      *(float *)((int)puVar4 + -0x14) = SUB84(dVar6,0);
      dVar6 = (double)CONCAT44((int)((ulonglong)dVar6 >> 0x20),ar4[4]);
      dVar12 = (double)CONCAT44((int)((ulonglong)dVar12 >> 0x20),ar4[5]);
    }
    else {
      *(double *)((int)puVar4 + -0x14) = in_xd2;
      in_xd2 = *(double *)(ar4 + 4);
      in_xd4 = *(double *)(ar4 + 5);
    }
    if (in_FPSCR_PR == '\0') {
      fVar20 = SUB84(dVar6,0) - fVar17;
    }
    else {
      fVar20 = SUB84(dVar6 - dVar18,0);
    }
    if (in_FPSCR_SZ == '\0') {
      uVar9 = ar4[1];
      dVar26 = (double)CONCAT44(uVar9,fVar20);
      *(uint *)((int)puVar4 + -0x34) = uVar9;
    }
    else {
      dVar26 = *(double *)(ar4 + 1);
      uVar9 = (uint)((ulonglong)dVar26 >> 0x20);
      *(double *)((int)puVar4 + -0x34) = dVar26;
    }
    fVar20 = (float)((ulonglong)dVar12 >> 0x20);
    if (in_FPSCR_PR == '\0') {
      dVar26 = (double)CONCAT44(uVar9,SUB84(dVar26,0) * fVar20);
    }
    else {
      dVar26 = dVar26 * dVar12;
    }
    dVar6 = in_xd2;
    if (in_FPSCR_SZ == '\0') {
      dVar6 = (double)CONCAT44(SUB84(dVar26,0),SUB84(dVar24,0));
    }
    if (in_FPSCR_PR == '\0') {
      dVar6 = (double)CONCAT44((float)((ulonglong)dVar6 >> 0x20) * SUB84(dVar6,0),SUB84(dVar6,0));
    }
    else {
      dVar6 = dVar6 * dVar6;
    }
    dVar28 = in_xd4;
    if (in_FPSCR_SZ == '\0') {
      dVar26 = (double)CONCAT44((int)((ulonglong)dVar26 >> 0x20),SUB84(dVar12,0));
      dVar28 = in_xd2;
    }
    if (in_FPSCR_PR == '\0') {
      dVar12 = (double)CONCAT44((int)((ulonglong)dVar26 >> 0x20),(SUB84(dVar26,0) - fVar19) * fVar20
                               );
    }
    else {
      dVar12 = (dVar26 - dVar18) * dVar12;
    }
    dVar30 = dVar28;
    if (in_FPSCR_SZ == '\0') {
      dVar27 = (double)CONCAT44(fVar16,SUB84(dVar12,0));
      dVar30 = in_xd14;
    }
    if (in_FPSCR_PR == '\0') {
      dVar27 = (double)CONCAT44((int)((ulonglong)dVar27 >> 0x20),SUB84(dVar27,0) * fVar21);
    }
    else {
      dVar27 = dVar27 * dVar22;
    }
    if (in_FPSCR_SZ == '\0') {
      *(uint *)((int)puVar4 + -0x30) = ar4[2];
      dVar12 = (double)CONCAT44((int)((ulonglong)dVar12 >> 0x20),ar5[3]);
    }
    else {
      *(undefined8 *)((int)puVar4 + -0x30) = *(undefined8 *)(ar4 + 2);
      dVar28 = *(double *)(ar5 + 3);
    }
    pdVar1 = (double *)*ar5;
    if (in_FPSCR_SZ == '\0') {
      *(float *)((int)puVar4 + -0x10) = SUB84(dVar12,0);
    }
    else {
      *(double *)((int)puVar4 + -0x10) = dVar28;
    }
    if (in_FPSCR_PR == '\0') {
      dVar12 = (double)CONCAT44(fVar20,1.0 / SUB84(dVar12,0));
    }
    else {
      dVar12 = (double)CONCAT44(fVar20,0x3f800000) / dVar12;
    }
    if (in_FPSCR_SZ == '\0') {
      fVar15 = (float)ar5[4];
      *(float *)((int)puVar4 + -4) = fVar15;
      dVar7 = (double)CONCAT44(SUB84(dVar6,0),fVar15);
    }
    else {
      dVar28 = *(double *)(ar5 + 4);
      *(double *)((int)puVar4 + -4) = dVar28;
      dVar7 = in_xd10;
    }
    if (in_FPSCR_PR == '\0') {
      dVar7 = (double)CONCAT44((int)((ulonglong)dVar7 >> 0x20),fVar15 - fVar17);
    }
    else {
      dVar7 = dVar7 - dVar18;
    }
    if (in_FPSCR_SZ == '\0') {
      dVar26 = (double)CONCAT44(ar5[5],fVar25);
    }
    else {
      dVar26 = *(double *)(ar5 + 5);
    }
    if (in_FPSCR_PR == '\0') {
      dVar7 = (double)CONCAT44((int)((ulonglong)dVar7 >> 0x20),SUB84(dVar7,0) * SUB84(dVar12,0));
    }
    else {
      dVar7 = dVar7 * dVar12;
    }
    dVar29 = dVar28;
    if (in_FPSCR_SZ == '\0') {
      dVar6 = (double)CONCAT44((int)((ulonglong)dVar6 >> 0x20),SUB84(dVar7,0));
      dVar29 = in_xd10;
    }
    fVar15 = (float)((ulonglong)dVar7 >> 0x20);
    if (in_FPSCR_PR == '\0') {
      dVar24 = (double)CONCAT44((int)((ulonglong)dVar6 >> 0x20),SUB84(dVar6,0) * fVar15);
    }
    else {
      dVar24 = dVar6 * dVar7;
    }
    uVar11 = (undefined4)((ulonglong)dVar26 >> 0x20);
    in_xd2 = dVar26;
    if (in_FPSCR_SZ == '\0') {
      dVar7 = (double)CONCAT44(fVar15,uVar11);
      in_xd2 = dVar28;
    }
    if (in_FPSCR_PR == '\0') {
      fVar15 = SUB84(dVar7,0) - fVar19;
    }
    else {
      fVar15 = SUB84(dVar7 - dVar18,0);
    }
    dVar6 = in_xd8;
    if (in_FPSCR_SZ == '\0') {
      dVar6 = (double)CONCAT44(fVar21,fVar15);
    }
    if (in_FPSCR_PR == '\0') {
      dVar6 = (double)CONCAT44((int)((ulonglong)dVar6 >> 0x20),SUB84(dVar6,0) * SUB84(dVar12,0));
    }
    else {
      dVar6 = dVar6 * dVar12;
    }
    dVar28 = in_xd2;
    if (in_FPSCR_SZ == '\0') {
      dVar22 = (double)CONCAT44(fVar10,SUB84(dVar6,0));
      dVar28 = in_xd8;
    }
    fVar10 = (float)((ulonglong)dVar6 >> 0x20);
    if (in_FPSCR_PR == '\0') {
      dVar22 = (double)CONCAT44((int)((ulonglong)dVar22 >> 0x20),SUB84(dVar22,0) * fVar10);
    }
    else {
      dVar22 = dVar22 * dVar6;
    }
    if (in_FPSCR_SZ == '\0') {
      *(uint *)((int)puVar4 + -0x20) = ar5[1];
      *(uint *)((int)puVar4 + -0x24) = ar5[2];
      *(undefined4 *)((int)puVar4 + -0x1c) = *(undefined4 *)((int)puVar4 + -0x10);
      dVar6 = (double)CONCAT44(fVar10,*(undefined4 *)((int)puVar4 + -4));
      *(undefined4 *)((int)puVar4 + -0x28) = *(undefined4 *)((int)puVar4 + -4);
      *(undefined4 *)((int)puVar4 + -0x2c) = uVar11;
    }
    else {
      *(undefined8 *)((int)puVar4 + -0x20) = *(undefined8 *)(ar5 + 1);
      *(undefined8 *)((int)puVar4 + -0x24) = *(undefined8 *)(ar5 + 2);
      *(undefined8 *)((int)puVar4 + -0x1c) = *(undefined8 *)((int)puVar4 + -0x10);
      in_xd2 = *(double *)((int)puVar4 + -4);
      *(double *)((int)puVar4 + -0x28) = in_xd2;
      *(double *)((int)puVar4 + -0x2c) = dVar26;
    }
  }
  else {
    if (in_FPSCR_PR == '\0') {
      bVar31 = fVar20 < fVar10;
    }
    else {
      bVar31 = dVar12 < dVar22;
    }
    pdVar1 = 0x8c4aa4d4;
    pdVar3 = 0x8c4aa4a8;
    dVar28 = in_xd8;
    dVar29 = in_xd10;
    dVar30 = in_xd14;
    if (bVar31) {
      if (in_FPSCR_SZ == '\0') {
        fVar20 = (float)ar5[3];
      }
      else {
        in_xd4 = *(double *)(ar5 + 3);
      }
      if (in_FPSCR_SZ == '\0') {
        dVar6 = (double)CONCAT44(uVar11,ar5[4]);
      }
      else {
        in_xd2 = *(double *)(ar5 + 4);
      }
      if (in_FPSCR_PR == '\0') {
        dVar26 = (double)CONCAT44(1.0 / fVar20,fVar20);
      }
      else {
        dVar26 = (double)CONCAT44(0x3f800000,fVar20) / (double)CONCAT44(0x3f800000,fVar20);
      }
      pdVar3 = (double *)*ar5;
      if (in_FPSCR_SZ == '\0') {
        *(float *)((int)puVar4 + -0x18) = SUB84(dVar6,0);
      }
      else {
        *(double *)((int)puVar4 + -0x18) = in_xd2;
      }
      fVar20 = (float)((ulonglong)dVar26 >> 0x20);
      if (in_FPSCR_PR == '\0') {
        fVar5 = (SUB84(dVar6,0) - fVar17) * fVar20;
      }
      else {
        fVar5 = SUB84((dVar6 - dVar18) * dVar26,0);
      }
      dVar6 = in_xd2;
      if (in_FPSCR_SZ == '\0') {
        dVar6 = (double)CONCAT44(fVar5,SUB84(dVar24,0));
      }
      if (in_FPSCR_PR == '\0') {
        dVar6 = (double)CONCAT44((float)((ulonglong)dVar6 >> 0x20) * SUB84(dVar6,0),SUB84(dVar6,0));
      }
      else {
        dVar6 = dVar6 * dVar6;
      }
      if (in_FPSCR_SZ == '\0') {
        dVar12 = (double)CONCAT44(ar5[1],ar5[5]);
      }
      else {
        in_xd2 = *(double *)(ar5 + 5);
        dVar12 = *(double *)(ar5 + 1);
      }
      if (in_FPSCR_PR == '\0') {
        dVar12 = (double)CONCAT44((int)((ulonglong)dVar12 >> 0x20),SUB84(dVar12,0) - fVar19);
      }
      else {
        dVar12 = dVar12 - dVar18;
      }
      uVar11 = (undefined4)((ulonglong)dVar12 >> 0x20);
      if (in_FPSCR_SZ == '\0') {
        *(undefined4 *)((int)puVar4 + -0x34) = uVar11;
      }
      else {
        *(double *)((int)puVar4 + -0x34) = dVar12;
      }
      if (in_FPSCR_PR == '\0') {
        dVar12 = (double)CONCAT44(uVar11,SUB84(dVar12,0) * fVar20);
      }
      else {
        dVar12 = dVar12 * dVar26;
      }
      dVar30 = in_xd2;
      if (in_FPSCR_SZ == '\0') {
        dVar27 = (double)CONCAT44(fVar16,SUB84(dVar12,0));
        dVar30 = in_xd14;
      }
      if (in_FPSCR_PR == '\0') {
        dVar27 = (double)CONCAT44((int)((ulonglong)dVar27 >> 0x20),SUB84(dVar27,0) * fVar21);
      }
      else {
        dVar27 = dVar27 * dVar22;
      }
      if (in_FPSCR_SZ == '\0') {
        *(uint *)((int)puVar4 + -0x30) = ar5[2];
        dVar12 = (double)CONCAT44((int)((ulonglong)dVar12 >> 0x20),ar4[3]);
      }
      else {
        *(undefined8 *)((int)puVar4 + -0x30) = *(undefined8 *)(ar5 + 2);
        in_xd2 = *(double *)(ar4 + 3);
      }
      pdVar1 = (double *)*ar4;
      if (in_FPSCR_SZ == '\0') {
        *(float *)((int)puVar4 + -0xc) = SUB84(dVar12,0);
      }
      else {
        *(double *)((int)puVar4 + -0xc) = in_xd2;
      }
      if (in_FPSCR_PR == '\0') {
        dVar12 = (double)CONCAT44(fVar20,1.0 / SUB84(dVar12,0));
      }
      else {
        dVar12 = (double)CONCAT44(fVar20,0x3f800000) / dVar12;
      }
      if (in_FPSCR_SZ == '\0') {
        fVar15 = (float)ar4[4];
        *(float *)((int)puVar4 + -8) = fVar15;
        dVar28 = (double)CONCAT44(SUB84(dVar6,0),fVar15);
        dVar7 = in_xd2;
      }
      else {
        dVar7 = *(double *)(ar4 + 4);
        *(double *)((int)puVar4 + -8) = dVar7;
        dVar28 = in_xd10;
      }
      if (in_FPSCR_PR == '\0') {
        dVar28 = (double)CONCAT44((int)((ulonglong)dVar28 >> 0x20),fVar15 - fVar17);
      }
      else {
        dVar28 = dVar28 - dVar18;
      }
      if (in_FPSCR_SZ == '\0') {
        dVar26 = (double)CONCAT44(ar4[5],fVar25);
      }
      else {
        dVar26 = *(double *)(ar4 + 5);
      }
      if (in_FPSCR_PR == '\0') {
        dVar28 = (double)CONCAT44((int)((ulonglong)dVar28 >> 0x20),SUB84(dVar28,0) * SUB84(dVar12,0)
                                 );
      }
      else {
        dVar28 = dVar28 * dVar12;
      }
      dVar29 = dVar7;
      if (in_FPSCR_SZ == '\0') {
        dVar6 = (double)CONCAT44((int)((ulonglong)dVar6 >> 0x20),SUB84(dVar28,0));
        dVar29 = in_xd10;
      }
      fVar15 = (float)((ulonglong)dVar28 >> 0x20);
      if (in_FPSCR_PR == '\0') {
        dVar24 = (double)CONCAT44((int)((ulonglong)dVar6 >> 0x20),SUB84(dVar6,0) * fVar15);
      }
      else {
        dVar24 = dVar6 * dVar28;
      }
      uVar11 = (undefined4)((ulonglong)dVar26 >> 0x20);
      in_xd2 = dVar26;
      if (in_FPSCR_SZ == '\0') {
        dVar28 = (double)CONCAT44(fVar15,uVar11);
        in_xd2 = dVar7;
      }
      if (in_FPSCR_PR == '\0') {
        fVar15 = SUB84(dVar28,0) - fVar19;
      }
      else {
        fVar15 = SUB84(dVar28 - dVar18,0);
      }
      dVar6 = in_xd8;
      if (in_FPSCR_SZ == '\0') {
        dVar6 = (double)CONCAT44(fVar21,fVar15);
      }
      if (in_FPSCR_PR == '\0') {
        dVar6 = (double)CONCAT44((int)((ulonglong)dVar6 >> 0x20),SUB84(dVar6,0) * SUB84(dVar12,0));
      }
      else {
        dVar6 = dVar6 * dVar12;
      }
      dVar28 = in_xd2;
      if (in_FPSCR_SZ == '\0') {
        dVar22 = (double)CONCAT44(fVar10,SUB84(dVar6,0));
        dVar28 = in_xd8;
      }
      fVar10 = (float)((ulonglong)dVar6 >> 0x20);
      if (in_FPSCR_PR == '\0') {
        dVar22 = (double)CONCAT44((int)((ulonglong)dVar22 >> 0x20),SUB84(dVar22,0) * fVar10);
      }
      else {
        dVar22 = dVar22 * dVar6;
      }
      if (in_FPSCR_SZ == '\0') {
        *(uint *)((int)puVar4 + -0x20) = ar4[1];
        *(uint *)((int)puVar4 + -0x24) = ar4[2];
        *(undefined4 *)((int)puVar4 + -0x1c) = *(undefined4 *)((int)puVar4 + -0xc);
        dVar6 = (double)CONCAT44(fVar10,*(undefined4 *)((int)puVar4 + -8));
        *(undefined4 *)((int)puVar4 + -0x28) = *(undefined4 *)((int)puVar4 + -8);
        *(undefined4 *)((int)puVar4 + -0x2c) = uVar11;
      }
      else {
        *(undefined8 *)((int)puVar4 + -0x20) = *(undefined8 *)(ar4 + 1);
        *(undefined8 *)((int)puVar4 + -0x24) = *(undefined8 *)(ar4 + 2);
        *(undefined8 *)((int)puVar4 + -0x1c) = *(undefined8 *)((int)puVar4 + -0xc);
        in_xd2 = *(double *)((int)puVar4 + -8);
        *(double *)((int)puVar4 + -0x28) = in_xd2;
        *(double *)((int)puVar4 + -0x2c) = dVar26;
      }
    }
  }
  uVar11 = (undefined4)((ulonglong)dVar22 >> 0x20);
  dVar7 = dVar22;
  if (in_FPSCR_SZ == '\0') {
    dVar6 = (double)CONCAT44((int)((ulonglong)dVar6 >> 0x20),uVar11);
    dVar7 = in_xd2;
  }
  if (in_FPSCR_PR == '\0') {
    fVar10 = (float)((ulonglong)dVar12 >> 0x20);
    dVar12 = (double)CONCAT44(fVar10,SUB84(dVar12,0) - fVar10);
    dVar6 = (double)CONCAT44((int)((ulonglong)dVar6 >> 0x20),SUB84(dVar6,0) - fVar10);
    fVar10 = (float)((ulonglong)dVar24 >> 0x20);
    dVar24 = (double)CONCAT44(fVar10,SUB84(dVar24,0) - fVar10);
  }
  else {
    dVar12 = dVar12 - dVar12;
    dVar6 = dVar6 - dVar12;
    dVar24 = dVar24 - dVar24;
  }
  dVar23 = dVar24;
  if (in_FPSCR_SZ == '\0') {
    dVar23 = (double)CONCAT44((int)((ulonglong)dVar24 >> 0x20),SUB84(dVar12,0));
  }
  fVar10 = SUB84(dVar27,0);
  if (in_FPSCR_PR == '\0') {
    dVar22 = (double)CONCAT44(uVar11,SUB84(dVar22,0) - fVar10);
    fVar15 = SUB84(dVar6,0) / SUB84(dVar23,0);
  }
  else {
    dVar22 = dVar22 - dVar27;
    fVar15 = SUB84(dVar6 / dVar23,0);
  }
  if (in_FPSCR_SZ == '\0') {
    dVar23 = (double)CONCAT44((int)((ulonglong)dVar23 >> 0x20),fVar10);
    *(float *)((int)puVar4 + -0x38) = fVar15;
    dVar6 = (double)CONCAT44(*(undefined4 *)((int)puVar4 + -0x34),in_fr1);
    dVar12 = (double)CONCAT44(*(undefined4 *)((int)puVar4 + -0x20),fVar15);
    dVar30 = in_xd4;
  }
  else {
    *(double *)((int)puVar4 + -0x38) = dVar7;
    dVar6 = *(double *)((int)puVar4 + -0x34);
    dVar12 = *(double *)((int)puVar4 + -0x20);
  }
  fVar15 = (float)((ulonglong)dVar6 >> 0x20);
  if (in_FPSCR_PR == '\0') {
    dVar12 = (double)CONCAT44((float)((ulonglong)dVar12 >> 0x20) - fVar15,SUB84(dVar12,0));
  }
  else {
    dVar12 = dVar12 - dVar6;
  }
  if (in_FPSCR_SZ == '\0') {
    uVar11 = SUB84(dVar12,0);
    dVar6 = (double)CONCAT44(fVar15,uVar11);
    dVar12 = (double)CONCAT44(uVar11,(int)((ulonglong)dVar12 >> 0x20));
  }
  else {
    uVar11 = SUB84(dVar6,0);
    dVar12 = dVar7;
  }
  if (in_FPSCR_PR == '\0') {
    dVar6 = (double)CONCAT44((float)((ulonglong)dVar12 >> 0x20) * SUB84(dVar12,0) +
                             (float)((ulonglong)dVar6 >> 0x20),uVar11);
  }
  if (in_FPSCR_SZ == '\0') {
    *(int *)((int)puVar4 + -0x34) = (int)((ulonglong)dVar6 >> 0x20);
    dVar12 = (double)CONCAT44(*(undefined4 *)((int)puVar4 + -0x30),SUB84(dVar12,0));
    dVar6 = (double)CONCAT44(*(undefined4 *)((int)puVar4 + -0x24),SUB84(dVar6,0));
  }
  else {
    *(double *)((int)puVar4 + -0x34) = dVar6;
    dVar12 = *(double *)((int)puVar4 + -0x30);
    dVar6 = *(double *)((int)puVar4 + -0x24);
  }
  fVar15 = (float)((ulonglong)dVar12 >> 0x20);
  if (in_FPSCR_PR == '\0') {
    dVar6 = (double)CONCAT44((float)((ulonglong)dVar6 >> 0x20) - fVar15,SUB84(dVar6,0));
  }
  else {
    dVar6 = dVar6 - dVar12;
  }
  if (in_FPSCR_SZ == '\0') {
    uVar11 = SUB84(dVar6,0);
    dVar12 = (double)CONCAT44(fVar15,uVar11);
    dVar6 = (double)CONCAT44(uVar11,(int)((ulonglong)dVar6 >> 0x20));
  }
  else {
    uVar11 = SUB84(dVar12,0);
    dVar6 = dVar7;
  }
  fVar15 = (float)((ulonglong)dVar6 >> 0x20);
  if (in_FPSCR_PR == '\0') {
    dVar12 = (double)CONCAT44(fVar15 * SUB84(dVar6,0) + (float)((ulonglong)dVar12 >> 0x20),uVar11);
    dVar23 = (double)CONCAT44(fVar15 * SUB84(dVar24,0) + (float)((ulonglong)dVar23 >> 0x20),
                              SUB84(dVar23,0));
  }
  if (in_FPSCR_SZ == '\0') {
    *(int *)((int)puVar4 + -0x30) = (int)((ulonglong)dVar12 >> 0x20);
  }
  else {
    *(double *)((int)puVar4 + -0x30) = dVar12;
  }
  fVar25 = (float)((ulonglong)dVar22 >> 0x20);
  if (in_FPSCR_PR == '\0') {
    dVar26 = (double)CONCAT44(1.0 / fVar25,SUB84(dVar26,0));
  }
  else {
    dVar26 = (double)CONCAT44(0x3f800000,SUB84(dVar26,0)) / dVar22;
  }
  if (in_FPSCR_PR == '\0') {
    fVar16 = (float)((ulonglong)dVar23 >> 0x20);
    dVar23 = (double)CONCAT44(fVar16,fVar15 * SUB84(dVar22,0) + SUB84(dVar23,0));
    dVar27 = (double)CONCAT44((float)((ulonglong)dVar27 >> 0x20) * fVar16,fVar10);
  }
  else {
    dVar27 = dVar27 * dVar23;
  }
  if (in_FPSCR_PR == '\0') {
    dVar26 = (double)CONCAT44((int)((ulonglong)dVar26 >> 0x20),SUB84(dVar26,0) * SUB84(dVar23,0));
    fVar10 = (float)((uint)pdVar3 >> 0x18);
    dVar6 = (double)CONCAT44(fVar10,SUB84(dVar12,0));
    bVar31 = fVar10 < 0.0;
  }
  else {
    dVar26 = dVar26 * dVar23;
    dVar6 = (double)((uint)pdVar3 >> 0x18);
    fVar10 = (float)((ulonglong)dVar6 >> 0x20);
    bVar31 = dVar6 < (double)((ulonglong)(uint)fVar15 << 0x20);
  }
  uVar9 = (uint)((ulonglong)dVar26 >> 0x20);
  dVar12 = dVar26;
  if (in_FPSCR_SZ == '\0') {
    dVar12 = (double)((ulonglong)uVar9 << 0x20);
  }
  fVar15 = (float)((ulonglong)dVar12 >> 0x20);
  if (in_FPSCR_PR == '\0') {
    dVar18 = (double)CONCAT44(fVar15 * SUB84(dVar26,0) + fVar19,
                              fVar15 * (float)((ulonglong)dVar27 >> 0x20) + fVar17);
  }
  uVar11 = SUB84(dVar18,0);
  dVar13 = dVar6;
  dVar12 = in_xd6;
  if (in_FPSCR_SZ == '\0') {
    dVar26 = (double)CONCAT44(uVar9,(int)((ulonglong)dVar18 >> 0x20));
    dVar13 = (double)CONCAT44(fVar10,SUB84(dVar23,0));
    dVar18 = in_xd12;
    dVar12 = (double)CONCAT44(uVar11,SUB84(dVar27,0));
  }
  if (bVar31) {
    if (in_FPSCR_SZ == '\0') {
      dVar27 = (double)CONCAT44(DAT_8c25cdc8,SUB84(dVar6,0));
    }
    else {
      dVar27 = (double)CONCAT44(0x4f000000,DAT_8c25cdc8);
    }
    if (in_FPSCR_PR == '\0') {
      dVar13 = (double)CONCAT44((float)((ulonglong)dVar13 >> 0x20) +
                                (float)((ulonglong)dVar27 >> 0x20),SUB84(dVar13,0));
    }
    else {
      dVar13 = dVar13 + dVar27;
    }
  }
  fVar10 = (float)((uint)pdVar3 >> 0x10 & 0xff);
  dVar27 = dVar7;
  if (in_FPSCR_SZ == '\0') {
    dVar13 = (double)CONCAT44((int)((ulonglong)dVar13 >> 0x20),fVar10);
    dVar27 = dVar30;
  }
  if (in_FPSCR_PR == '\0' && fVar10 < 0.0) {
    fVar15 = DAT_8c25cdc8;
    if (in_FPSCR_SZ != '\0') {
      dVar7 = (double)CONCAT44(0x4f000000,DAT_8c25cdc8);
      fVar15 = fVar10;
    }
    if (in_FPSCR_PR == '\0') {
      dVar13 = (double)CONCAT44((int)((ulonglong)dVar13 >> 0x20),SUB84(dVar13,0) + fVar15);
    }
    else {
      dVar13 = dVar13 + (double)(ulonglong)(uint)fVar15;
    }
  }
  fVar10 = (float)((uint)pdVar3 >> 8 & 0xff);
  dVar6 = dVar7;
  if (in_FPSCR_SZ == '\0') {
    dVar6 = (double)CONCAT44(fVar10,uVar11);
  }
  uVar9 = (uint)((ulonglong)dVar6 >> 0x20);
  dVar30 = dVar6;
  if (in_FPSCR_PR != '\0' || 0.0 <= fVar10) {
    if (in_FPSCR_SZ == '\0') {
      dVar6 = (double)(ulonglong)uVar9;
      dVar30 = in_xd6;
    }
  }
  else {
    if (in_FPSCR_SZ == '\0') {
      dVar6 = (double)CONCAT44(uVar9,uVar9);
      dVar30 = in_xd6;
      fVar10 = DAT_8c25cdc8;
    }
    else {
      dVar7 = (double)CONCAT44(0x4f000000,DAT_8c25cdc8);
    }
    if (in_FPSCR_PR == '\0') {
      dVar6 = (double)(ulonglong)(uint)(SUB84(dVar6,0) + fVar10);
    }
    else {
      dVar6 = dVar6 + (double)(ulonglong)(uint)fVar10;
    }
  }
  fVar10 = (float)((uint)pdVar3 & 0xff);
  dVar23 = dVar7;
  if (in_FPSCR_SZ == '\0') {
    dVar23 = (double)CONCAT44(fVar10,SUB84(dVar6,0));
  }
  uVar9 = (uint)((ulonglong)dVar23 >> 0x20);
  dVar6 = dVar23;
  if (in_FPSCR_PR != '\0' || 0.0 <= fVar10) {
    if (in_FPSCR_SZ == '\0') {
      dVar22 = (double)(ulonglong)uVar9;
      dVar6 = dVar28;
    }
  }
  else {
    if (in_FPSCR_SZ == '\0') {
      dVar22 = (double)CONCAT44(fVar25,uVar9);
      dVar6 = dVar28;
      fVar10 = DAT_8c25cdc8;
    }
    else {
      dVar7 = (double)CONCAT44(0x4f000000,DAT_8c25cdc8);
    }
    if (in_FPSCR_PR == '\0') {
      dVar22 = (double)(ulonglong)(uint)(SUB84(dVar22,0) + fVar10);
    }
    else {
      dVar22 = dVar22 + (double)(ulonglong)(uint)fVar10;
    }
  }
  fVar10 = (float)((uint)pdVar1 >> 0x18);
  dVar28 = dVar7;
  if (in_FPSCR_SZ == '\0') {
    dVar28 = (double)CONCAT44(fVar10,SUB84(dVar23,0));
  }
  if (in_FPSCR_PR == '\0' && fVar10 < 0.0) {
    fVar15 = DAT_8c25cdc8;
    if (in_FPSCR_SZ != '\0') {
      dVar7 = (double)CONCAT44(0x4f000000,DAT_8c25cdc8);
      fVar15 = fVar10;
    }
    if (in_FPSCR_PR == '\0') {
      dVar28 = (double)CONCAT44((float)((ulonglong)dVar28 >> 0x20) + fVar15,SUB84(dVar28,0));
    }
    else {
      dVar28 = dVar28 + (double)(ulonglong)(uint)fVar15;
    }
  }
  fVar10 = (float)((uint)pdVar1 >> 0x10 & 0xff);
  dVar23 = dVar7;
  if (in_FPSCR_SZ == '\0') {
    dVar23 = (double)CONCAT44(fVar10,SUB84(dVar22,0));
  }
  if (in_FPSCR_PR == '\0' && fVar10 < 0.0) {
    fVar15 = DAT_8c25cdc8;
    if (in_FPSCR_SZ != '\0') {
      dVar7 = (double)CONCAT44(0x4f000000,DAT_8c25cdc8);
      fVar15 = fVar10;
    }
    if (in_FPSCR_PR == '\0') {
      dVar23 = (double)CONCAT44((float)((ulonglong)dVar23 >> 0x20) + fVar15,SUB84(dVar23,0));
    }
    else {
      dVar23 = dVar23 + (double)(ulonglong)(uint)fVar15;
    }
  }
  fVar10 = (float)((uint)pdVar1 >> 8 & 0xff);
  dVar22 = dVar7;
  if (in_FPSCR_SZ == '\0') {
    dVar22 = (double)CONCAT44(fVar10,SUB84(dVar24,0));
  }
  if (in_FPSCR_PR == '\0' && fVar10 < 0.0) {
    fVar15 = DAT_8c25cdc8;
    if (in_FPSCR_SZ != '\0') {
      dVar7 = (double)CONCAT44(0x4f000000,DAT_8c25cdc8);
      fVar15 = fVar10;
    }
    if (in_FPSCR_PR == '\0') {
      dVar22 = (double)CONCAT44((float)((ulonglong)dVar22 >> 0x20) + fVar15,SUB84(dVar22,0));
    }
    else {
      dVar22 = dVar22 + (double)(ulonglong)(uint)fVar15;
    }
  }
  fVar10 = (float)((uint)pdVar1 & 0xff);
  dVar8 = (double)(ulonglong)(uint)fVar10;
  dVar24 = dVar7;
  if (in_FPSCR_SZ == '\0') {
    dVar22 = (double)CONCAT44((int)((ulonglong)dVar22 >> 0x20),fVar10);
    dVar24 = dVar29;
  }
  uVar11 = SUB84(dVar22,0);
  uVar14 = (undefined4)((ulonglong)dVar12 >> 0x20);
  if (in_FPSCR_PR != '\0' || 0.0 <= fVar10) {
    if (in_FPSCR_SZ == '\0') {
      dVar12 = (double)CONCAT44(uVar14,uVar11);
    }
  }
  else {
    if (in_FPSCR_SZ == '\0') {
      dVar12 = (double)CONCAT44(uVar14,uVar11);
      dVar8 = (double)(ulonglong)(uint)DAT_8c25cdc8;
    }
    else {
      dVar7 = (double)CONCAT44(0x4f000000,DAT_8c25cdc8);
    }
    if (in_FPSCR_PR == '\0') {
      dVar12 = (double)CONCAT44((int)((ulonglong)dVar12 >> 0x20),SUB84(dVar12,0) + SUB84(dVar8,0));
    }
    else {
      dVar12 = dVar12 + dVar8;
    }
  }
  fVar10 = (float)((ulonglong)dVar13 >> 0x20);
  if (in_FPSCR_PR == '\0') {
    dVar28 = (double)CONCAT44((float)((ulonglong)dVar28 >> 0x20) - fVar10,SUB84(dVar28,0));
  }
  else {
    dVar28 = dVar28 - dVar13;
  }
  if (in_FPSCR_SZ == '\0') {
    fVar15 = *(float *)((int)puVar4 + -0x38);
  }
  else {
    fVar15 = (float)((ulonglong)*(undefined8 *)((int)puVar4 + -0x38) >> 0x20);
  }
  fVar25 = SUB84(dVar28,0);
  if (in_FPSCR_PR == '\0') {
    dVar22 = (double)CONCAT44((float)((ulonglong)dVar22 >> 0x20) - fVar25,uVar11);
  }
  else {
    dVar22 = dVar22 - dVar28;
  }
  dVar29 = dVar13;
  if (in_FPSCR_SZ == '\0') {
    dVar22 = (double)CONCAT44((int)((ulonglong)dVar22 >> 0x20),fVar10);
    dVar29 = dVar24;
  }
  fVar10 = SUB84(dVar13,0);
  if (in_FPSCR_PR == '\0') {
    fVar16 = SUB84(dVar23,0);
    dVar23 = (double)CONCAT44((float)((ulonglong)dVar23 >> 0x20) - fVar10,fVar16);
    dVar12 = (double)CONCAT44((int)((ulonglong)dVar12 >> 0x20),SUB84(dVar12,0) - fVar16);
    dVar22 = (double)CONCAT44((int)((ulonglong)dVar22 >> 0x20),
                              fVar15 * (float)((ulonglong)dVar28 >> 0x20) + SUB84(dVar22,0));
  }
  else {
    dVar23 = dVar23 - dVar13;
    fVar16 = SUB84(dVar23,0);
    dVar12 = dVar12 - dVar23;
  }
  if (in_FPSCR_SZ == '\0') {
    dVar13 = (double)((ulonglong)dVar28 & 0xffffffff);
    dVar24 = dVar27;
    dVar27 = (double)CONCAT44(fVar10,fVar25);
  }
  else {
    fVar25 = SUB84(dVar27,0);
    dVar24 = dVar30;
  }
  fVar10 = SUB84(dVar13,0);
  fVar20 = SUB84(dVar8,0);
  if (in_FPSCR_PR == '\0') {
    fVar10 = fVar15 * (float)((ulonglong)dVar22 >> 0x20) + fVar10;
    dVar27 = (double)CONCAT44(fVar15 * (float)((ulonglong)dVar23 >> 0x20) +
                              (float)((ulonglong)dVar27 >> 0x20),fVar25);
  }
  if (in_FPSCR_SZ == '\0') {
    dVar6 = (double)CONCAT44(fVar16,fVar10);
    fVar20 = SUB84(dVar22,0);
    dVar29 = dVar7;
  }
  dVar22 = (double)CONCAT44(0x4f000000,fVar20);
  if (in_FPSCR_PR == '\0') {
    dVar6 = (double)CONCAT44(fVar15 * SUB84(dVar12,0) + (float)((ulonglong)dVar6 >> 0x20),
                             SUB84(dVar6,0));
  }
  if (in_FPSCR_PR != '\0' || 0x4f000000 <= fVar20) {
    if (in_FPSCR_PR == '\0') {
      dVar22 = (double)CONCAT44(0x4f000000 + 0x4f000000,
                                fVar20 - (0x4f000000 + 0x4f000000));
    }
    else {
      dVar22 = (dVar22 + dVar22) - (dVar22 + dVar22);
    }
  }
  if (in_FPSCR_PR == '\0') {
    iVar32 = (int)SUB84(dVar22,0);
  }
  else {
    iVar32 = (int)dVar22;
  }
  uVar11 = (undefined4)((ulonglong)dVar22 >> 0x20);
  dVar22 = (double)CONCAT44(uVar11,0x4f000000);
  fVar10 = (float)((ulonglong)dVar27 >> 0x20);
  if (in_FPSCR_PR == '\0') {
    bVar31 = fVar10 < 0x4f000000;
  }
  else {
    bVar31 = dVar27 < dVar22;
  }
  if (!bVar31) {
    if (in_FPSCR_PR == '\0') {
      dVar22 = (double)CONCAT44(uVar11,0x4f000000 + 0x4f000000);
      dVar27 = (double)CONCAT44(fVar10 - (0x4f000000 + 0x4f000000),SUB84(dVar27,0));
    }
    else {
      dVar22 = dVar22 + dVar22;
      dVar27 = dVar27 - dVar22;
    }
  }
  if (in_FPSCR_PR == '\0') {
    iVar33 = (int)(float)((ulonglong)dVar27 >> 0x20);
  }
  else {
    iVar33 = (int)dVar27;
  }
  uVar11 = (undefined4)((ulonglong)dVar22 >> 0x20);
  dVar22 = (double)CONCAT44(uVar11,0x4f000000);
  if (in_FPSCR_PR == '\0') {
    bVar31 = SUB84(dVar6,0) < 0x4f000000;
  }
  else {
    bVar31 = dVar6 < dVar22;
  }
  if (!bVar31) {
    if (in_FPSCR_PR == '\0') {
      dVar22 = (double)CONCAT44(uVar11,0x4f000000 + 0x4f000000);
      dVar6 = (double)CONCAT44((int)((ulonglong)dVar6 >> 0x20),
                               SUB84(dVar6,0) - (0x4f000000 + 0x4f000000));
    }
    else {
      dVar22 = dVar22 + dVar22;
      dVar6 = dVar6 - dVar22;
    }
  }
  if (in_FPSCR_PR == '\0') {
    iVar34 = (int)SUB84(dVar6,0);
  }
  else {
    iVar34 = (int)dVar6;
  }
  dVar22 = (double)CONCAT44((int)((ulonglong)dVar22 >> 0x20),0x4f000000);
  fVar10 = (float)((ulonglong)dVar6 >> 0x20);
  if (in_FPSCR_PR == '\0') {
    bVar31 = fVar10 < 0x4f000000;
  }
  else {
    bVar31 = dVar6 < dVar22;
  }
  if (!bVar31) {
    if (in_FPSCR_PR == '\0') {
      dVar6 = (double)CONCAT44(fVar10 - (0x4f000000 + 0x4f000000),SUB84(dVar6,0));
    }
    else {
      dVar6 = dVar6 - (dVar22 + dVar22);
    }
  }
  fVar10 = (float)((ulonglong)dVar12 >> 0x20);
  if (in_FPSCR_SZ == '\0') {
    dVar6 = (double)CONCAT44((int)((ulonglong)dVar6 >> 0x20),fVar10);
    pdVar3 = (double *)((int)puVar4 + -0x2c);
  }
  else {
    dVar29 = *(double *)((int)puVar4 + -0x2c);
    pdVar3 = (double *)((int)puVar4 + -0x28);
    dVar24 = dVar12;
  }
  dVar22 = *pdVar3;
  if (in_FPSCR_PR == '\0') {
    uVar9 = (uint)(float)((ulonglong)dVar6 >> 0x20);
  }
  else {
    uVar9 = (uint)dVar6;
  }
  fVar15 = SUB84(dVar26,0);
  dVar28 = dVar18;
  if (in_FPSCR_SZ == '\0') {
    dVar28 = (double)CONCAT44(fVar15,SUB84(dVar6,0));
  }
  fVar25 = (float)((ulonglong)dVar22 >> 0x20);
  if (in_FPSCR_PR == '\0') {
    dVar6 = (double)CONCAT44((float)((ulonglong)dVar28 >> 0x20) - SUB84(dVar22,0),
                             SUB84(dVar28,0) - fVar25);
  }
  else {
    dVar6 = (dVar28 - dVar22) - dVar22;
  }
  fVar16 = DAT_8c25cdd0;
  if (in_FPSCR_SZ != '\0') {
    dVar30 = (double)CONCAT44(0xe0000000,DAT_8c25cdd0);
    fVar16 = SUB84(dVar27,0);
  }
  fVar17 = (float)((ulonglong)dVar6 >> 0x20);
  fVar20 = SUB84(dVar6,0);
  if (in_FPSCR_PR == '\0') {
    dVar27 = (double)CONCAT44(fVar17,fVar17 * fVar17 + fVar20 * fVar20);
  }
  else {
    dVar27 = dVar6 * dVar6;
  }
  uVar9 = iVar32 << 0x18 | iVar33 << 0x10 | iVar34 << 8 | uVar9;
  *(uint *)(ar6 + 0x18) = uVar9;
  uVar11 = 0xe0000000;
  if (in_FPSCR_PR == '\0') {
    fVar19 = 1.0 / SQRT(SUB84(dVar27,0));
    dVar27 = (double)CONCAT44(fVar19,fVar16);
    dVar6 = (double)CONCAT44(-(fVar17 * fVar19 * fVar16),fVar20 * fVar19 * fVar16);
  }
  else {
    dVar27 = (double)CONCAT44(0x3f800000,fVar16) / SQRT(dVar27);
    fVar19 = (float)((ulonglong)dVar27 >> 0x20);
    dVar6 = -(dVar6 * dVar27 * dVar27 * dVar27 * dVar27);
  }
  fVar16 = SUB84(dVar6,0);
  if (in_FPSCR_SZ == '\0') {
    dVar27 = (double)CONCAT44(fVar19,fVar16);
    dVar24 = dVar30;
  }
  if (in_FPSCR_PR == '\0') {
    fVar20 = SUB84(dVar27,0) + fVar16;
  }
  else {
    fVar20 = SUB84(dVar27 + dVar6,0);
  }
  fVar17 = (float)((ulonglong)dVar6 >> 0x20);
  dVar27 = dVar6;
  if (in_FPSCR_SZ == '\0') {
    dVar27 = (double)CONCAT44(fVar17,fVar20);
  }
  if (in_FPSCR_PR == '\0') {
    dVar27 = (double)CONCAT44((float)((ulonglong)dVar27 >> 0x20) + fVar17,SUB84(dVar27,0));
  }
  else {
    dVar27 = dVar27 + dVar6;
  }
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)(ar6 + 0x14) = *(undefined4 *)((int)puVar4 + -0x34);
    puVar2 = (undefined8 *)(ar6 + 0x10);
    *(undefined4 *)puVar2 = *(undefined4 *)((int)puVar4 + -0x30);
    dVar22 = (double)CONCAT44(fVar25,fVar10);
  }
  else {
    *(undefined8 *)(ar6 + 0x10) = *(undefined8 *)((int)puVar4 + -0x34);
    puVar2 = (undefined8 *)(ar6 + 8);
    *puVar2 = *(undefined8 *)((int)puVar4 + -0x30);
    dVar29 = dVar12;
  }
  if (in_FPSCR_PR == '\0') {
    dVar22 = (double)CONCAT44((int)((ulonglong)dVar22 >> 0x20),SUB84(dVar22,0) - fVar17);
  }
  else {
    dVar22 = dVar22 - dVar6;
  }
  uVar14 = (undefined4)((ulonglong)dVar26 >> 0x20);
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)((int)puVar2 + -4) = uVar14;
    pdVar3 = (double *)(puVar2 + -1);
    *(int *)pdVar3 = SUB84(dVar22,0);
    dVar22 = (double)CONCAT44((int)((ulonglong)dVar22 >> 0x20),fVar15);
    dVar18 = dVar29;
  }
  else {
    puVar2[-1] = dVar26;
    pdVar3 = (double *)(puVar2 + -2);
    *pdVar3 = dVar29;
  }
  if (in_FPSCR_PR == '\0') {
    dVar22 = (double)CONCAT44((int)((ulonglong)dVar22 >> 0x20),SUB84(dVar22,0) - fVar16);
  }
  else {
    dVar22 = dVar22 - dVar6;
  }
  if (in_FPSCR_SZ == '\0') {
    pdVar3 = (double *)((int)pdVar3 + -4);
    *(int *)pdVar3 = SUB84(dVar22,0);
  }
  else {
    pdVar3 = pdVar3 + -1;
    *pdVar3 = dVar18;
  }
  *(undefined4 *)((int)pdVar3 + -4) = uVar11;
  *(double **)((int)pdVar3 + 0x34) = pdVar1;
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)(pdVar3 + 6) = *(undefined4 *)((int)puVar4 + -0x20);
    *(undefined4 *)((int)pdVar3 + 0x2c) = *(undefined4 *)((int)puVar4 + -0x24);
    pdVar3 = pdVar3 + 5;
    *(undefined4 *)pdVar3 = *(undefined4 *)((int)puVar4 + -0x1c);
    dVar22 = (double)CONCAT44((int)((ulonglong)dVar22 >> 0x20),*(undefined4 *)((int)puVar4 + -0x28))
    ;
  }
  else {
    *(undefined8 *)((int)pdVar3 + 0x2c) = *(undefined8 *)((int)puVar4 + -0x20);
    *(undefined8 *)((int)pdVar3 + 0x24) = *(undefined8 *)((int)puVar4 + -0x24);
    pdVar3 = (double *)((int)pdVar3 + 0x1c);
    *pdVar3 = *(double *)((int)puVar4 + -0x1c);
    dVar18 = *(double *)((int)puVar4 + -0x28);
  }
  if (in_FPSCR_PR == '\0') {
    dVar22 = (double)CONCAT44((int)((ulonglong)dVar22 >> 0x20),SUB84(dVar22,0) - fVar17);
  }
  else {
    dVar22 = dVar22 - dVar6;
  }
  if (in_FPSCR_SZ == '\0') {
    pdVar3 = (double *)((int)pdVar3 + -4);
    *(int *)pdVar3 = SUB84(dVar22,0);
    dVar22 = (double)CONCAT44((int)((ulonglong)dVar22 >> 0x20),*(undefined4 *)((int)puVar4 + -0x2c))
    ;
  }
  else {
    pdVar3 = pdVar3 + -1;
    *pdVar3 = dVar18;
    dVar18 = *(double *)((int)puVar4 + -0x2c);
  }
  if (in_FPSCR_PR == '\0') {
    dVar22 = (double)CONCAT44((int)((ulonglong)dVar22 >> 0x20),SUB84(dVar22,0) - fVar16);
  }
  else {
    dVar22 = dVar22 - dVar6;
  }
  if (in_FPSCR_SZ == '\0') {
    pdVar3 = (double *)((int)pdVar3 + -4);
    *(int *)pdVar3 = SUB84(dVar22,0);
  }
  else {
    pdVar3 = pdVar3 + -1;
    *pdVar3 = dVar18;
  }
  *(undefined4 *)((int)pdVar3 + -4) = uVar11;
  *(uint *)((int)pdVar3 + 0x34) = uVar9;
  fVar25 = (float)((ulonglong)dVar27 >> 0x20);
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)(pdVar3 + 6) = *(undefined4 *)((int)puVar4 + -0x34);
    puVar2 = (undefined8 *)((int)pdVar3 + 0x2c);
    *(undefined4 *)puVar2 = *(undefined4 *)((int)puVar4 + -0x30);
    dVar22 = (double)CONCAT44((int)((ulonglong)dVar22 >> 0x20),fVar25);
  }
  else {
    *(undefined8 *)((int)pdVar3 + 0x2c) = *(undefined8 *)((int)puVar4 + -0x34);
    puVar2 = (undefined8 *)((int)pdVar3 + 0x24);
    *puVar2 = *(undefined8 *)((int)puVar4 + -0x30);
    dVar18 = dVar27;
  }
  if (in_FPSCR_PR == '\0') {
    dVar22 = (double)CONCAT44((int)((ulonglong)dVar22 >> 0x20),SUB84(dVar22,0) + fVar10);
  }
  else {
    dVar22 = dVar22 + dVar12;
  }
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)((int)puVar2 + -4) = uVar14;
    pdVar3 = (double *)(puVar2 + -1);
    *(int *)pdVar3 = SUB84(dVar22,0);
    dVar22 = (double)CONCAT44((int)((ulonglong)dVar22 >> 0x20),SUB84(dVar27,0));
  }
  else {
    puVar2[-1] = dVar26;
    pdVar3 = (double *)(puVar2 + -2);
    *pdVar3 = dVar18;
    dVar18 = dVar24;
  }
  if (in_FPSCR_PR == '\0') {
    dVar22 = (double)CONCAT44((int)((ulonglong)dVar22 >> 0x20),SUB84(dVar22,0) + fVar15);
  }
  else {
    dVar22 = dVar22 + dVar26;
  }
  if (in_FPSCR_SZ == '\0') {
    pdVar3 = (double *)((int)pdVar3 + -4);
    *(int *)pdVar3 = SUB84(dVar22,0);
  }
  else {
    pdVar3 = pdVar3 + -1;
    *pdVar3 = dVar18;
  }
  *(undefined4 *)((int)pdVar3 + -4) = uVar11;
  uVar11 = 0xf0000000;
  *(double **)((int)pdVar3 + 0x34) = pdVar1;
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)(pdVar3 + 6) = *(undefined4 *)((int)puVar4 + -0x20);
    *(undefined4 *)((int)pdVar3 + 0x2c) = *(undefined4 *)((int)puVar4 + -0x24);
    pdVar3 = pdVar3 + 5;
    *(undefined4 *)pdVar3 = *(undefined4 *)((int)puVar4 + -0x1c);
    dVar22 = (double)CONCAT44((int)((ulonglong)dVar22 >> 0x20),*(undefined4 *)((int)puVar4 + -0x28))
    ;
  }
  else {
    *(undefined8 *)((int)pdVar3 + 0x2c) = *(undefined8 *)((int)puVar4 + -0x20);
    *(undefined8 *)((int)pdVar3 + 0x24) = *(undefined8 *)((int)puVar4 + -0x24);
    pdVar3 = (double *)((int)pdVar3 + 0x1c);
    *pdVar3 = *(double *)((int)puVar4 + -0x1c);
  }
  if (in_FPSCR_PR == '\0') {
    dVar27 = (double)CONCAT44(fVar25 + SUB84(dVar22,0),SUB84(dVar27,0));
  }
  else {
    dVar27 = dVar27 + dVar22;
  }
  if (in_FPSCR_SZ == '\0') {
    pdVar3 = (double *)((int)pdVar3 + -4);
    *(int *)pdVar3 = (int)((ulonglong)dVar27 >> 0x20);
    dVar22 = (double)CONCAT44((int)((ulonglong)dVar22 >> 0x20),*(undefined4 *)((int)puVar4 + -0x2c))
    ;
  }
  else {
    pdVar3 = pdVar3 + -1;
    *pdVar3 = dVar27;
  }
  if (in_FPSCR_PR == '\0') {
    fVar10 = SUB84(dVar27,0) + SUB84(dVar22,0);
  }
  else {
    fVar10 = SUB84(dVar27 + dVar22,0);
  }
  if (in_FPSCR_SZ == '\0') {
    pdVar3 = (double *)((int)pdVar3 + -4);
    *(float *)pdVar3 = fVar10;
  }
  else {
    pdVar3 = pdVar3 + -1;
    *pdVar3 = dVar24;
  }
  *(undefined4 *)((int)pdVar3 + -4) = uVar11;
  return (int)pdVar3 + 0x1c;
}

__asm__(".globl _FUN_8c25c9d8\n.set _FUN_8c25c9d8, _FUN_8c25c9d8_def\n");
