#include "../decls.h"
uint FUN_8c21caa0_def(int ar4,int ar5,int ar6,int ar7)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  int *piVar8;
  float fVar9;
  double in_dr0;
  float fVar10;
  float fVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  float fVar14;
  undefined4 uVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  float fVar19;
  float fVar20;
  undefined4 in_fr5;
  float fVar21;
  double dVar22;
  float fVar23;
  undefined4 in_fr7;
  double dVar24;
  undefined4 in_fr9;
  double dVar25;
  double dVar26;
  double dVar27;
  undefined4 in_fr13;
  double dVar28;
  undefined4 in_fr15;
  float fVar29;
  double dVar30;
  double dVar31;
  float fVar32;
  double in_xd0;
  double in_xd2;
  double in_xd4;
  double in_xd6;
  double dVar33;
  double in_xd8;
  double in_xd10;
  double in_xd12;
  double dVar34;
  double in_xd14;
  bool bVar35;
  undefined4 in_PR;
  char cVar36;
  char cVar37;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  cVar37 = '\0';
  cVar36 = '\0';
  iVar1 = libgcc_divide_helper_0106dc(ar5 + ar6 + -1,ar6);
  piVar6 = (int *)(iVar1 * 0x10 + ar4);
  piVar8 = (int *)(ar5 * 0x10 + ar4);
  iVar1 = libgcc_divide_helper_0106dc(ar5 + 1,ar6);
  piVar7 = (int *)(iVar1 * 0x10 + ar4);
  iVar1 = libgcc_divide_helper_0106dc(ar5 + 2,ar6);
  piVar5 = (int *)(iVar1 * 0x10 + ar4);
  fVar10 = (float)*piVar7;
  if (*piVar7 < 0) {
    if (cVar36 == '\0') {
      fVar10 = fVar10 + 4.2949673e+09;
    }
    else {
      fVar10 = SUB84((double)CONCAT44(0x4f800000,fVar10) + (double)CONCAT44(0x4f800000,fVar10),0);
    }
  }
  iVar1 = *piVar8;
  if (cVar36 == '\0') {
    dVar16 = (double)CONCAT44((float)iVar1,fVar10);
  }
  else {
    dVar16 = (double)iVar1;
  }
  if (iVar1 < 0) {
    if (cVar37 == '\0') {
      in_dr0 = (double)CONCAT44((int)((ulonglong)in_dr0 >> 0x20),0x4f800000);
    }
    else {
      in_xd0 = -1.8629950226301174e-249;
    }
    if (cVar36 == '\0') {
      dVar16 = (double)CONCAT44((float)((ulonglong)dVar16 >> 0x20) + SUB84(in_dr0,0),SUB84(dVar16,0)
                               );
    }
    else {
      dVar16 = dVar16 + in_dr0;
    }
  }
  dVar22 = in_xd2;
  if (cVar37 == '\0') {
    dVar22 = (double)CONCAT44(SUB84(dVar16,0),in_fr5);
  }
  fVar10 = (float)((ulonglong)dVar16 >> 0x20);
  if (cVar36 == '\0') {
    dVar22 = (double)CONCAT44((float)((ulonglong)dVar22 >> 0x20) - fVar10,SUB84(dVar22,0));
  }
  else {
    dVar22 = dVar22 - dVar16;
  }
  if (cVar36 == '\0') {
    bVar35 = 0.0 < (float)((ulonglong)dVar22 >> 0x20);
  }
  else {
    bVar35 = (double)((ulonglong)(uint)fVar10 << 0x20) < dVar22;
  }
  dVar16 = dVar22;
  if ((!bVar35) && (dVar16 = in_xd10, cVar37 == '\0')) {
    dVar16 = (double)CONCAT44(0x3f800000,SUB84(dVar22,0));
  }
  fVar10 = (float)*piVar5;
  if (*piVar5 < 0) {
    if (cVar36 == '\0') {
      fVar10 = fVar10 + 4.2949673e+09;
    }
    else {
      fVar10 = SUB84((double)CONCAT44(0x4f800000,fVar10) + (double)CONCAT44(0x4f800000,fVar10),0);
    }
  }
  iVar1 = *piVar7;
  if (cVar36 == '\0') {
    dVar22 = (double)CONCAT44((float)iVar1,fVar10);
  }
  else {
    dVar22 = (double)iVar1;
  }
  if (iVar1 < 0) {
    if (cVar37 == '\0') {
      in_dr0 = (double)CONCAT44((int)((ulonglong)in_dr0 >> 0x20),0x4f800000);
    }
    else {
      in_xd0 = -1.8629950226301174e-249;
    }
    if (cVar36 == '\0') {
      dVar22 = (double)CONCAT44((float)((ulonglong)dVar22 >> 0x20) + SUB84(in_dr0,0),SUB84(dVar22,0)
                               );
    }
    else {
      dVar22 = dVar22 + in_dr0;
    }
  }
  dVar24 = in_xd2;
  if (cVar37 == '\0') {
    dVar24 = (double)CONCAT44(SUB84(dVar22,0),in_fr7);
  }
  fVar10 = (float)((ulonglong)dVar22 >> 0x20);
  if (cVar36 == '\0') {
    dVar24 = (double)CONCAT44((float)((ulonglong)dVar24 >> 0x20) - fVar10,SUB84(dVar24,0));
  }
  else {
    dVar24 = dVar24 - dVar22;
  }
  if (cVar36 == '\0') {
    bVar35 = 0.0 < (float)((ulonglong)dVar24 >> 0x20);
  }
  else {
    bVar35 = (double)((ulonglong)(uint)fVar10 << 0x20) < dVar24;
  }
  dVar22 = dVar24;
  if ((!bVar35) && (dVar22 = in_xd10, cVar37 == '\0')) {
    dVar22 = (double)CONCAT44(0x3f800000,SUB84(dVar24,0));
  }
  fVar10 = (float)*piVar8;
  if (*piVar8 < 0) {
    if (cVar36 == '\0') {
      fVar10 = fVar10 + 4.2949673e+09;
    }
    else {
      fVar10 = SUB84((double)CONCAT44(0x4f800000,fVar10) + (double)CONCAT44(0x4f800000,fVar10),0);
    }
  }
  iVar1 = *piVar6;
  if (cVar36 == '\0') {
    dVar24 = (double)CONCAT44((float)iVar1,fVar10);
  }
  else {
    dVar24 = (double)iVar1;
  }
  if (iVar1 < 0) {
    if (cVar37 == '\0') {
      in_dr0 = (double)CONCAT44((int)((ulonglong)in_dr0 >> 0x20),0x4f800000);
    }
    else {
      in_xd0 = -1.8629950226301174e-249;
    }
    if (cVar36 == '\0') {
      dVar24 = (double)CONCAT44((float)((ulonglong)dVar24 >> 0x20) + SUB84(in_dr0,0),SUB84(dVar24,0)
                               );
    }
    else {
      dVar24 = dVar24 + in_dr0;
    }
  }
  dVar17 = in_xd2;
  if (cVar37 == '\0') {
    dVar22 = (double)CONCAT44((int)((ulonglong)dVar22 >> 0x20),SUB84(dVar24,0));
    dVar17 = in_xd6;
  }
  fVar10 = (float)((ulonglong)dVar24 >> 0x20);
  if (cVar36 == '\0') {
    dVar22 = (double)CONCAT44((int)((ulonglong)dVar22 >> 0x20),SUB84(dVar22,0) - fVar10);
  }
  else {
    dVar22 = dVar22 - dVar24;
  }
  if (cVar36 == '\0') {
    bVar35 = 0.0 < SUB84(dVar22,0);
  }
  else {
    bVar35 = (double)((ulonglong)(uint)fVar10 << 0x20) < dVar22;
  }
  dVar24 = dVar17;
  if ((!bVar35) && (dVar24 = in_xd10, cVar37 == '\0')) {
    dVar22 = (double)CONCAT44((int)((ulonglong)dVar22 >> 0x20),0x3f800000);
    dVar24 = dVar17;
  }
  fVar10 = (float)*piVar8;
  if (*piVar8 < 0) {
    if (cVar36 == '\0') {
      fVar10 = fVar10 + 4.2949673e+09;
    }
    else {
      fVar10 = SUB84((double)CONCAT44(0x4f800000,fVar10) + (double)CONCAT44(0x4f800000,fVar10),0);
    }
  }
  fVar19 = (float)((ulonglong)dVar22 >> 0x20);
  dVar17 = dVar22;
  if (cVar37 == '\0') {
    dVar17 = (double)CONCAT44(fVar19,fVar10);
  }
  fVar10 = (float)((ulonglong)dVar16 >> 0x20);
  if (cVar36 == '\0') {
    dVar17 = (double)CONCAT44((float)((ulonglong)dVar17 >> 0x20) + fVar10,SUB84(dVar17,0));
  }
  else {
    dVar17 = dVar17 + dVar16;
  }
  if (cVar37 == '\0') {
    in_dr0 = (double)CONCAT44((int)((ulonglong)in_dr0 >> 0x20),_DAT_8c4aad54);
    dVar28 = (double)CONCAT44(0x3f800000,in_fr13);
  }
  else {
    in_xd0 = (double)CONCAT44(_DAT_8c4aad58,_DAT_8c4aad54);
    dVar28 = in_xd10;
  }
  if (cVar36 == '\0') {
    in_dr0 = (double)CONCAT44((int)((ulonglong)in_dr0 >> 0x20),SUB84(in_dr0,0) - SUB84(dVar17,0));
  }
  else {
    in_dr0 = in_dr0 - dVar17;
  }
  dVar26 = dVar16;
  dVar25 = dVar16;
  if (cVar37 == '\0') {
    dVar26 = (double)CONCAT44(fVar10,0x3f800000);
    dVar25 = (double)CONCAT44(fVar10,in_fr9);
  }
  fVar11 = (float)((ulonglong)dVar17 >> 0x20);
  if (cVar36 == '\0') {
    dVar26 = (double)CONCAT44((float)((ulonglong)dVar26 >> 0x20) / fVar11,SUB84(dVar26,0));
  }
  else {
    dVar26 = dVar26 / dVar17;
  }
  if (cVar37 == '\0') {
    dVar17 = (double)CONCAT44(fVar11,0x3eaaaa3b);
    dVar16 = (double)CONCAT44(fVar10,fVar10);
    dVar30 = (double)CONCAT44(SUB84(in_dr0,0),in_fr15);
  }
  else {
    in_xd2 = 32.00000747044802;
    dVar30 = in_xd0;
    in_xd4 = dVar16;
  }
  fVar10 = (float)((ulonglong)dVar16 >> 0x20);
  if (cVar36 == '\0') {
    dVar30 = (double)CONCAT44((float)((ulonglong)dVar30 >> 0x20) / fVar10,SUB84(dVar30,0));
  }
  else {
    dVar30 = dVar30 / dVar16;
  }
  dVar27 = dVar24;
  if (cVar37 == '\0') {
    in_dr0 = (double)CONCAT44((int)((ulonglong)in_dr0 >> 0x20),SUB84(dVar22,0));
    dVar27 = in_xd0;
  }
  fVar11 = (float)((ulonglong)dVar30 >> 0x20);
  if (cVar36 == '\0') {
    fVar9 = SUB84(in_dr0,0) + fVar10;
    in_dr0 = (double)CONCAT44((int)((ulonglong)in_dr0 >> 0x20),fVar9);
    dVar16 = (double)CONCAT44(fVar10,SUB84(dVar16,0) * SUB84(dVar17,0));
    dVar25 = (double)CONCAT44((float)((ulonglong)dVar25 >> 0x20) / fVar9,SUB84(dVar25,0));
    dVar28 = (double)CONCAT44((float)((ulonglong)dVar28 >> 0x20) - fVar11,SUB84(dVar28,0));
  }
  else {
    in_dr0 = in_dr0 + dVar16;
    dVar16 = dVar16 * dVar17;
    dVar25 = dVar25 / in_dr0;
    dVar28 = dVar28 - dVar30;
  }
  dVar18 = dVar30;
  if (cVar37 == '\0') {
    dVar18 = (double)CONCAT44(fVar11,SUB84(dVar17,0));
  }
  if (cVar36 == '\0') {
    dVar18 = (double)CONCAT44((float)((ulonglong)dVar18 >> 0x20) * fVar11,SUB84(dVar18,0));
  }
  else {
    dVar18 = dVar18 * dVar30;
  }
  dVar34 = dVar28;
  dVar17 = dVar30;
  if (cVar37 == '\0') {
    dVar30 = (double)CONCAT44(fVar11,fVar11);
    uVar12 = (undefined4)((ulonglong)dVar28 >> 0x20);
    dVar28 = (double)CONCAT44(uVar12,uVar12);
    dVar34 = in_xd12;
    dVar17 = in_xd14;
  }
  fVar10 = (float)((ulonglong)dVar17 >> 0x20);
  if (cVar36 == '\0') {
    fVar11 = (float)((ulonglong)dVar28 >> 0x20);
    dVar28 = (double)CONCAT44(fVar11,SUB84(dVar28,0) * fVar11);
  }
  else {
    dVar28 = dVar28 * dVar28;
  }
  uVar12 = (undefined4)((ulonglong)dVar28 >> 0x20);
  dVar17 = dVar28;
  if (cVar37 == '\0') {
    dVar25 = (double)CONCAT44((int)((ulonglong)dVar25 >> 0x20),uVar12);
    dVar17 = in_xd8;
  }
  fVar11 = (float)((ulonglong)dVar18 >> 0x20);
  if (cVar36 == '\0') {
    dVar30 = (double)CONCAT44((int)((ulonglong)dVar30 >> 0x20),SUB84(dVar30,0) * fVar11);
  }
  else {
    dVar30 = dVar30 * dVar18;
  }
  fStack_48 = SUB84(dVar18,0);
  if (cVar37 == '\0') {
    dVar18 = (double)CONCAT44(0x40400000,fStack_48);
    fStack_48 = fVar11;
  }
  else {
    dVar18 = 1.659535550397677e+182;
    fStack_44 = fVar11;
  }
  if (cVar36 == '\0') {
    dVar25 = (double)CONCAT44((int)((ulonglong)dVar25 >> 0x20),SUB84(dVar25,0) * SUB84(dVar28,0));
    dVar30 = (double)CONCAT44((float)((ulonglong)dVar30 >> 0x20) * SUB84(dVar28,0),SUB84(dVar30,0));
  }
  else {
    dVar25 = dVar25 * dVar28;
    dVar30 = dVar30 * dVar28;
  }
  if (cVar37 == '\0') {
    dVar28 = (double)CONCAT44(uVar12,(int)((ulonglong)dVar30 >> 0x20));
    in_dr0 = (double)CONCAT44((int)((ulonglong)in_dr0 >> 0x20),fStack_48);
  }
  else {
    dVar27 = (double)CONCAT44(fStack_44,fStack_48);
    dVar34 = dVar30;
  }
  fVar11 = (float)((ulonglong)dVar18 >> 0x20);
  if (cVar36 == '\0') {
    fVar9 = (float)((ulonglong)dVar28 >> 0x20);
    dVar28 = (double)CONCAT44(fVar9,SUB84(dVar28,0) * fVar11);
    in_dr0 = (double)CONCAT44((int)((ulonglong)in_dr0 >> 0x20),SUB84(in_dr0,0) * fVar9);
  }
  else {
    dVar28 = dVar28 * dVar18;
    in_dr0 = in_dr0 * dVar28;
  }
  uVar3 = 0;
  dVar31 = dVar27;
  if (cVar37 == '\0') {
    dVar31 = (double)CONCAT44(SUB84(in_dr0,0),SUB84(dVar30,0));
  }
  if (cVar36 == '\0') {
    dVar31 = (double)CONCAT44((float)((ulonglong)dVar31 >> 0x20) * fVar11,SUB84(dVar31,0));
  }
  else {
    dVar31 = dVar31 * dVar18;
  }
  fVar11 = SUB84(dVar26,0);
  dVar30 = in_xd10;
  if (cVar37 == '\0') {
    dVar30 = (double)CONCAT44(fVar11,SUB84(dVar18,0));
  }
  fVar9 = (float)((ulonglong)dVar25 >> 0x20);
  if (cVar36 == '\0') {
    dVar30 = (double)CONCAT44((float)((ulonglong)dVar30 >> 0x20) - fVar9,SUB84(dVar30,0));
  }
  else {
    dVar30 = dVar30 - dVar25;
  }
  fVar20 = (float)((ulonglong)dVar30 >> 0x20);
  fVar21 = fVar20;
  if (cVar37 == '\0') {
    fVar21 = fStack_50;
  }
  fStack_50 = fVar21;
  fVar21 = SUB84(dVar16,0);
  fVar23 = (float)((ulonglong)dVar16 >> 0x20);
  fVar29 = SUB84(dVar31,0);
  fVar32 = (float)((ulonglong)dVar31 >> 0x20);
  fStack_54 = SUB84(dVar30,0);
  if (ar5 == ar6 + -2) {
    dVar24 = dVar25;
    if (cVar37 == '\0') {
      dVar24 = (double)CONCAT44(fVar9,fStack_54);
      fStack_54 = fVar20;
      fVar20 = fStack_50;
    }
    fStack_50 = fVar20;
    if (cVar36 == '\0') {
      dVar24 = (double)CONCAT44((float)((ulonglong)dVar24 >> 0x20) + fVar11,SUB84(dVar24,0));
    }
    else {
      dVar24 = dVar24 + dVar26;
    }
    uVar12 = (undefined4)((ulonglong)dVar24 >> 0x20);
    fStack_44 = (float)uVar12;
    if (cVar37 != '\0') {
      fStack_44 = SUB84(dVar24,0);
      fStack_40 = (float)uVar12;
    }
    do {
      uVar2 = uVar3;
      fVar19 = fStack_50;
      if (cVar37 == '\0') {
        fVar19 = fStack_54;
      }
      iVar4 = *(int *)((int)piVar7 + uVar2 + 4);
      iVar1 = *(int *)((int)piVar8 + uVar2 + 4);
      fVar11 = (float)(iVar4 - iVar1);
      dVar24 = in_xd2;
      if (cVar37 == '\0') {
        dVar24 = (double)CONCAT44(fVar11,SUB84(dVar22,0));
      }
      fVar20 = (float)((ulonglong)dVar24 >> 0x20);
      if (cVar36 == '\0') {
        fVar19 = fVar19 * fVar20;
      }
      else {
        fVar19 = (float)((ulonglong)((double)CONCAT44(fVar19,fVar11) * dVar24) >> 0x20);
      }
      fVar11 = (float)(iVar1 - *(int *)((int)piVar6 + uVar2 + 4));
      if (cVar36 == '\0') {
        dVar30 = (double)CONCAT44(fVar19 / fVar23,fVar11);
      }
      else {
        dVar30 = (double)CONCAT44(fVar19,fVar11) / dVar16;
      }
      dVar27 = dVar25;
      if (cVar37 == '\0') {
        uVar12 = SUB84(dVar30,0);
        dVar30 = (double)CONCAT44((int)((ulonglong)dVar30 >> 0x20),fVar9);
        dVar27 = in_xd2;
        in_xd2 = (double)CONCAT44(uVar12,SUB84(dVar26,0));
      }
      fVar19 = (float)((ulonglong)in_xd2 >> 0x20);
      if (cVar36 == '\0') {
        dVar30 = (double)CONCAT44((int)((ulonglong)dVar30 >> 0x20),SUB84(dVar30,0) * fVar19);
      }
      else {
        dVar30 = dVar30 * in_xd2;
      }
      uVar12 = SUB84(dVar30,0);
      dVar26 = dVar27;
      if (cVar37 == '\0') {
        in_xd2 = (double)CONCAT44(fVar19,uVar12);
        dVar26 = in_xd10;
      }
      if (cVar36 == '\0') {
        fVar19 = SUB84(in_xd2,0) / SUB84(dVar24,0);
      }
      else {
        fVar19 = SUB84(in_xd2 / dVar24,0);
      }
      if (cVar37 == '\0') {
        dVar30 = (double)CONCAT44((int)((ulonglong)dVar30 >> 0x20),fVar19);
      }
      if (cVar36 == '\0') {
        dVar30 = (double)CONCAT44((float)((ulonglong)dVar30 >> 0x20) + SUB84(dVar30,0),
                                  SUB84(dVar30,0));
      }
      else {
        dVar30 = dVar30 + dVar30;
      }
      if (cVar37 == '\0') {
        dVar18 = (double)CONCAT44(fStack_44,uVar12);
      }
      else {
        dVar18 = (double)CONCAT44(fStack_40,fStack_44);
      }
      if (cVar36 == '\0') {
        dVar18 = (double)CONCAT44((float)((ulonglong)dVar18 >> 0x20) * fVar20,SUB84(dVar18,0));
      }
      else {
        dVar18 = dVar18 * dVar24;
      }
      uVar3 = (uint)((ulonglong)dVar30 >> 0x20);
      dVar31 = dVar30;
      dVar22 = dVar26;
      if (cVar37 == '\0') {
        dVar18 = (double)CONCAT44((int)((ulonglong)dVar18 >> 0x20),SUB84(dVar30,0));
        dVar31 = (double)((ulonglong)uVar3 << 0x20);
        dVar22 = dVar27;
      }
      if (cVar36 == '\0') {
        dVar18 = (double)CONCAT44((float)((ulonglong)dVar18 >> 0x20) / fVar23,SUB84(dVar18,0));
      }
      else {
        dVar18 = dVar18 / dVar16;
      }
      dVar27 = dVar18;
      if (cVar37 == '\0') {
        dVar30 = (double)CONCAT44(uVar3,(int)((ulonglong)dVar18 >> 0x20));
        dVar27 = dVar26;
      }
      if (cVar36 == '\0') {
        dVar26 = (double)CONCAT44((float)iVar1,SUB84(dVar18,0));
        fVar19 = SUB84(dVar30,0) - SUB84(dVar18,0);
      }
      else {
        dVar26 = (double)iVar1;
        fVar19 = SUB84(dVar30 - dVar26,0);
      }
      fVar20 = (float)((ulonglong)dVar26 >> 0x20);
      fVar11 = (float)iVar4;
      dVar30 = (double)CONCAT44(fVar20,fVar11);
      dVar18 = dVar30;
      if (cVar37 == '\0') {
        dVar18 = (double)CONCAT44(fVar20,SUB84(dVar28,0));
      }
      if (cVar36 == '\0') {
        dVar30 = (double)CONCAT44((float)((ulonglong)dVar31 >> 0x20) * fVar21 + fVar20,fVar11);
      }
      dVar31 = in_xd4;
      dVar28 = dVar17;
      if (cVar37 == '\0') {
        dVar31 = (double)CONCAT44(fVar21,SUB84(dVar30,0));
        dVar30 = (double)CONCAT44((int)((ulonglong)dVar30 >> 0x20),fVar19);
        dVar28 = (double)((longlong)dVar25 << 0x20);
      }
      if (cVar36 == '\0') {
        dVar31 = (double)CONCAT44((float)((ulonglong)dVar31 >> 0x20) * SUB84(dVar30,0),
                                  SUB84(dVar31,0));
      }
      else {
        dVar31 = dVar31 * dVar30;
      }
      uVar12 = SUB84(dVar31,0);
      in_xd2 = dVar34;
      in_xd10 = dVar22;
      if (cVar37 == '\0') {
        dVar30 = (double)CONCAT44((int)((ulonglong)dVar30 >> 0x20),uVar12);
        dVar31 = (double)CONCAT44((int)((ulonglong)dVar31 >> 0x20),SUB84(dVar18,0));
        in_xd2 = dVar22;
        dVar22 = (double)CONCAT44(uVar12,SUB84(dVar24,0));
        in_xd10 = dVar27;
      }
      if (cVar36 == '\0') {
        fVar19 = (float)((ulonglong)dVar31 >> 0x20);
        dVar26 = (double)(ulonglong)(uint)(SUB84(dVar30,0) - fVar19);
        dVar31 = (double)CONCAT44(fVar19,(float)((ulonglong)dVar28 >> 0x20) *
                                         (float)((ulonglong)dVar18 >> 0x20) +
                                         SUB84(dVar31,0) * (float)((ulonglong)dVar30 >> 0x20));
      }
      else {
        dVar31 = dVar31 * dVar30;
        dVar26 = dVar30 - dVar31;
      }
      if (cVar37 == '\0') {
        fVar19 = SUB84(dVar26,0);
      }
      else {
        fVar19 = (float)((ulonglong)in_xd10 >> 0x20);
      }
      if (cVar36 == '\0') {
        dVar31 = (double)CONCAT44((int)((ulonglong)dVar31 >> 0x20),fVar19 * fVar32 + SUB84(dVar31,0)
                                 );
      }
      fVar19 = fVar10;
      if (cVar37 == '\0') {
        fVar19 = fVar29;
      }
      if (cVar36 == '\0') {
        iVar1 = (int)(fVar19 * (float)((ulonglong)dVar22 >> 0x20) + SUB84(dVar31,0));
      }
      else {
        iVar1 = (int)dVar31;
      }
      *(int *)(uVar2 + ar7) = iVar1;
      uVar3 = uVar2 + 4;
      dVar28 = dVar18;
    } while (uVar2 + 4 < 0xc);
  }
  else {
    dVar30 = in_xd10;
    if (cVar37 == '\0') {
      dVar30 = (double)CONCAT44(fVar11,SUB84(dVar28,0));
    }
    fVar14 = (float)((ulonglong)dVar26 >> 0x20);
    if (cVar36 == '\0') {
      dVar30 = (double)CONCAT44((float)((ulonglong)dVar30 >> 0x20) - fVar14,SUB84(dVar30,0));
    }
    else {
      dVar30 = dVar30 - dVar26;
    }
    uVar12 = (undefined4)((ulonglong)dVar30 >> 0x20);
    if (ar5 == 0) {
      dVar28 = dVar26;
      if (cVar37 == '\0') {
        in_dr0 = (double)CONCAT44((int)((ulonglong)in_dr0 >> 0x20),fVar14);
        dVar28 = dVar27;
      }
      if (cVar36 == '\0') {
        fStack_50 = SUB84(in_dr0,0) + fVar11;
      }
      else {
        fStack_50 = SUB84(in_dr0 + dVar26,0);
      }
      if (cVar37 != '\0') {
        fStack_50 = SUB84(dVar28,0);
        fStack_4c = (float)((ulonglong)dVar28 >> 0x20);
      }
      do {
        uVar2 = uVar3;
        iVar1 = *(int *)((int)piVar7 + uVar2 + 4);
        iVar4 = *(int *)((int)piVar8 + uVar2 + 4);
        fVar19 = fStack_4c;
        if (cVar37 == '\0') {
          fVar19 = fStack_50;
        }
        fVar11 = (float)(iVar1 - iVar4);
        dVar28 = in_xd2;
        if (cVar37 == '\0') {
          dVar22 = (double)CONCAT44((int)((ulonglong)dVar22 >> 0x20),fVar11);
          dVar28 = dVar24;
        }
        if (cVar36 == '\0') {
          fVar19 = fVar19 * SUB84(dVar22,0);
        }
        else {
          fVar19 = (float)((ulonglong)((double)CONCAT44(fVar19,fVar11) * dVar22) >> 0x20);
        }
        fVar11 = (float)(*(int *)((int)piVar5 + uVar2 + 4) - iVar1);
        if (cVar36 == '\0') {
          dVar24 = (double)CONCAT44(fVar19 / fVar23,fVar11);
        }
        else {
          dVar24 = (double)CONCAT44(fVar19,fVar11) / dVar16;
        }
        uVar15 = (undefined4)((ulonglong)dVar26 >> 0x20);
        dVar27 = dVar26;
        if (cVar37 == '\0') {
          uVar13 = SUB84(dVar24,0);
          dVar24 = (double)CONCAT44((int)((ulonglong)dVar24 >> 0x20),uVar15);
          dVar26 = in_xd2;
          dVar27 = (double)CONCAT44(uVar15,uVar13);
          in_xd2 = in_xd10;
        }
        if (cVar36 == '\0') {
          dVar24 = (double)CONCAT44((int)((ulonglong)dVar24 >> 0x20),
                                    SUB84(dVar24,0) * SUB84(dVar27,0));
        }
        else {
          dVar24 = dVar24 * dVar27;
        }
        dVar18 = dVar26;
        if (cVar37 == '\0') {
          dVar18 = (double)CONCAT44(SUB84(dVar24,0),SUB84(dVar25,0));
        }
        fVar19 = (float)((ulonglong)dVar22 >> 0x20);
        if (cVar36 == '\0') {
          dVar18 = (double)CONCAT44((float)((ulonglong)dVar18 >> 0x20) / fVar19,SUB84(dVar18,0));
        }
        else {
          dVar18 = dVar18 / dVar22;
        }
        fVar11 = (float)((ulonglong)dVar24 >> 0x20);
        dVar25 = dVar30;
        if (cVar37 == '\0') {
          dVar27 = (double)CONCAT44(uVar15,fVar11);
          fVar11 = (float)((ulonglong)in_xd2 >> 0x20);
          dVar25 = (double)CONCAT44(uVar12,SUB84(dVar24,0));
          dVar24 = in_xd2;
        }
        fVar9 = (float)((ulonglong)dVar18 >> 0x20);
        if (cVar36 == '\0') {
          dVar27 = (double)CONCAT44((int)((ulonglong)dVar27 >> 0x20),SUB84(dVar27,0) - fVar9);
          fVar20 = (float)((ulonglong)dVar25 >> 0x20) * SUB84(dVar22,0);
        }
        else {
          dVar27 = dVar27 - dVar18;
          fVar20 = (float)((ulonglong)(dVar25 * dVar22) >> 0x20);
        }
        if (cVar37 == '\0') {
          fVar11 = SUB84(dVar27,0);
        }
        fVar14 = (float)iVar4;
        if (cVar36 == '\0') {
          dVar31 = (double)CONCAT44(fVar20 / fVar23,fVar14);
        }
        else {
          dVar31 = (double)CONCAT44(fVar20,fVar14) / dVar16;
        }
        dVar33 = dVar31;
        if (cVar37 == '\0') {
          dVar22 = (double)CONCAT44(fVar19,(int)((ulonglong)dVar31 >> 0x20));
          dVar33 = dVar28;
        }
        if (cVar36 == '\0') {
          dVar22 = (double)CONCAT44((int)((ulonglong)dVar22 >> 0x20),SUB84(dVar22,0) + fVar9);
        }
        else {
          dVar22 = dVar22 + dVar18;
        }
        dVar25 = dVar26;
        if (cVar37 == '\0') {
          dVar25 = (double)CONCAT44(SUB84(dVar31,0),SUB84(dVar18,0));
        }
        if (cVar36 == '\0') {
          dVar28 = (double)CONCAT44((float)iVar1,fVar11 * fVar21 + SUB84(dVar31,0));
        }
        else {
          dVar28 = (double)iVar1;
        }
        dVar31 = in_xd4;
        in_xd10 = dVar26;
        dVar18 = dVar17;
        if (cVar37 == '\0') {
          uVar15 = SUB84(dVar28,0);
          dVar28 = (double)CONCAT44((int)((ulonglong)dVar28 >> 0x20),fVar21);
          dVar31 = dVar26;
          dVar27 = (double)CONCAT44((int)((ulonglong)dVar27 >> 0x20),uVar15);
          in_xd10 = dVar24;
          dVar18 = (double)((longlong)dVar25 << 0x20);
        }
        dVar26 = dVar27;
        if (cVar36 == '\0') {
          dVar28 = (double)CONCAT44((int)((ulonglong)dVar28 >> 0x20),
                                    SUB84(dVar28,0) * SUB84(dVar22,0));
        }
        else {
          dVar28 = dVar28 * dVar22;
        }
        uVar15 = (undefined4)((ulonglong)dVar28 >> 0x20);
        dVar24 = dVar28;
        if (cVar37 == '\0') {
          dVar22 = (double)CONCAT44((int)((ulonglong)dVar22 >> 0x20),uVar15);
          dVar24 = dVar33;
        }
        if (cVar36 == '\0') {
          dVar22 = (double)CONCAT44((int)((ulonglong)dVar22 >> 0x20),
                                    SUB84(dVar22,0) - SUB84(dVar28,0));
        }
        else {
          dVar22 = dVar22 - dVar28;
        }
        in_xd2 = dVar34;
        if (cVar37 == '\0') {
          dVar28 = (double)CONCAT44(uVar15,SUB84(dVar30,0));
          in_xd2 = dVar31;
        }
        if (cVar36 == '\0') {
          dVar28 = (double)CONCAT44((int)((ulonglong)dVar28 >> 0x20),
                                    SUB84(dVar28,0) * SUB84(dVar26,0));
        }
        else {
          dVar28 = dVar28 * dVar26;
        }
        if (cVar36 == '\0') {
          dVar28 = (double)CONCAT44((int)((ulonglong)dVar28 >> 0x20),
                                    (float)((ulonglong)dVar18 >> 0x20) *
                                    (float)((ulonglong)dVar25 >> 0x20) + SUB84(dVar28,0));
        }
        if (cVar37 == '\0') {
          fVar19 = SUB84(dVar22,0);
        }
        else {
          fVar19 = (float)((ulonglong)dVar24 >> 0x20);
        }
        if (cVar36 == '\0') {
          dVar28 = (double)CONCAT44((int)((ulonglong)dVar28 >> 0x20),
                                    fVar19 * fVar32 + SUB84(dVar28,0));
        }
        fVar19 = fVar10;
        if (cVar37 == '\0') {
          fVar19 = fVar29;
        }
        if (cVar36 == '\0') {
          iVar1 = (int)(fVar19 * (float)((ulonglong)dVar28 >> 0x20) + SUB84(dVar28,0));
        }
        else {
          iVar1 = (int)dVar28;
        }
        *(int *)(uVar2 + ar7) = iVar1;
        uVar3 = uVar2 + 4;
      } while (uVar2 + 4 < 0xc);
    }
    else {
      uStack_24 = in_PR;
      if (cVar37 == '\0') {
        fStack_54 = fVar20;
        fVar20 = fStack_50;
      }
      do {
        fStack_50 = fVar20;
        uVar2 = uVar3;
        fVar11 = fStack_38;
        iVar1 = *(int *)((int)piVar7 + uVar2 + 4);
        iVar4 = *(int *)((int)piVar8 + uVar2 + 4);
        if (cVar37 == '\0') {
          dVar26 = (double)CONCAT44((int)((ulonglong)dVar26 >> 0x20),(float)(iVar1 - iVar4));
        }
        fStack_3c = SUB84(in_xd2,0);
        fStack_40 = fStack_3c;
        fStack_38 = (float)((ulonglong)in_xd2 >> 0x20);
        fVar20 = fStack_38;
        if (cVar37 == '\0') {
          fStack_3c = (float)(iVar4 - *(int *)((int)piVar6 + uVar2 + 4));
          fStack_38 = fVar11;
        }
        fVar11 = (float)(*(int *)((int)piVar5 + uVar2 + 4) - iVar1);
        if (cVar37 == '\0') {
          dVar24 = (double)CONCAT44(fStack_54,fVar11);
          dVar28 = (double)CONCAT44(fVar9,fStack_3c);
          fStack_40 = fVar11;
        }
        else {
          dVar24 = (double)CONCAT44(fStack_50,fStack_54);
          dVar27 = (double)CONCAT44(fStack_38,fVar20);
          dVar28 = dVar25;
          fStack_3c = fVar20;
        }
        fVar11 = (float)((ulonglong)dVar27 >> 0x20);
        if (cVar36 == '\0') {
          dVar24 = (double)CONCAT44((float)((ulonglong)dVar24 >> 0x20) * SUB84(dVar26,0),
                                    SUB84(dVar24,0));
          dVar28 = (double)CONCAT44((float)((ulonglong)dVar28 >> 0x20) * SUB84(dVar28,0),
                                    SUB84(dVar28,0));
        }
        else {
          dVar24 = dVar24 * dVar26;
          dVar28 = dVar28 * dVar28;
        }
        dVar18 = dVar30;
        if (cVar37 == '\0') {
          dVar24 = (double)CONCAT44((int)((ulonglong)dVar24 >> 0x20),uVar12);
          dVar18 = in_xd2;
        }
        if (cVar36 == '\0') {
          dVar24 = (double)CONCAT44((float)((ulonglong)dVar24 >> 0x20) / fVar23 +
                                    (float)((ulonglong)dVar28 >> 0x20) / SUB84(dVar22,0),
                                    (SUB84(dVar24,0) * SUB84(dVar26,0)) / fVar23);
        }
        else {
          dVar24 = ((dVar24 * dVar26) / dVar16) / dVar16 + dVar28 / dVar22;
        }
        uVar15 = (undefined4)((ulonglong)dVar26 >> 0x20);
        fStack_38 = SUB84(dVar24,0);
        dVar28 = dVar26;
        if (cVar37 == '\0') {
          dVar28 = (double)CONCAT44(uVar15,fStack_38);
          fStack_3c = fStack_40;
          fStack_38 = (float)((ulonglong)dVar24 >> 0x20);
        }
        if (cVar36 == '\0') {
          dVar24 = (double)CONCAT44((float)iVar4,
                                    SUB84(dVar28,0) +
                                    ((float)((ulonglong)dVar28 >> 0x20) * fStack_3c) / fVar19);
        }
        else {
          dVar24 = (double)iVar4;
        }
        fVar20 = (float)((ulonglong)dVar24 >> 0x20);
        fStack_2c = SUB84(dVar24,0);
        if (cVar37 == '\0') {
          dVar24 = (double)CONCAT44(fVar20,fVar20);
          fVar14 = fStack_38;
          fStack_34 = fStack_2c;
          fStack_2c = fVar20;
        }
        else {
          fStack_34 = SUB84(dVar18,0);
          fStack_30 = (float)((ulonglong)dVar18 >> 0x20);
          dVar18 = dVar24;
          fVar14 = fStack_34;
        }
        if (cVar36 == '\0') {
          dVar24 = (double)CONCAT44((int)((ulonglong)dVar24 >> 0x20),
                                    fVar14 * fVar21 + SUB84(dVar24,0));
        }
        if (cVar37 == '\0') {
          uStack_28 = SUB84(dVar24,0);
          dVar24 = (double)CONCAT44((int)((ulonglong)dVar24 >> 0x20),fVar21);
        }
        else {
          uStack_28 = SUB84(dVar18,0);
          uStack_24 = (undefined4)((ulonglong)dVar18 >> 0x20);
          dVar18 = in_xd4;
          fStack_34 = fStack_30;
        }
        fVar20 = (float)iVar1;
        if (cVar36 == '\0') {
          dVar24 = (double)CONCAT44((int)((ulonglong)dVar24 >> 0x20),SUB84(dVar24,0) * fStack_34);
        }
        else {
          dVar24 = dVar24 * (double)CONCAT44(fStack_34,fVar20);
        }
        if (cVar37 == '\0') {
          dVar26 = (double)CONCAT44(uVar15,fVar20);
        }
        if (cVar36 == '\0') {
          fVar20 = fVar20 - SUB84(dVar24,0);
        }
        else {
          fVar20 = SUB84((double)CONCAT44(fStack_34,fVar20) - dVar24,0);
        }
        if (cVar37 == '\0') {
          dVar24 = (double)CONCAT44((int)((ulonglong)dVar24 >> 0x20),SUB84(dVar30,0));
          dVar28 = (double)CONCAT44(uStack_28,fVar20);
          in_xd2 = dVar18;
        }
        else {
          dVar28 = (double)CONCAT44(uStack_24,uStack_28);
          in_xd2 = dVar34;
        }
        if (cVar36 == '\0') {
          fVar20 = SUB84(dVar24,0) * (float)((ulonglong)dVar28 >> 0x20);
        }
        else {
          fVar20 = SUB84(dVar24 * dVar28,0);
        }
        if (cVar37 == '\0') {
          dVar24 = (double)CONCAT44(fStack_2c,fVar20);
          dVar28 = (double)CONCAT44(SUB84(dVar25,0),SUB84(dVar28,0));
        }
        else {
          dVar24 = (double)CONCAT44(uStack_28,fStack_2c);
          dVar28 = dVar17;
        }
        if (cVar36 == '\0') {
          fVar20 = (float)((ulonglong)dVar24 >> 0x20);
          dVar24 = (double)CONCAT44(fVar20,(float)((ulonglong)dVar28 >> 0x20) * fVar20 +
                                           SUB84(dVar24,0));
        }
        if (cVar37 == '\0') {
          fVar11 = SUB84(dVar28,0);
        }
        if (cVar36 == '\0') {
          dVar24 = (double)CONCAT44((int)((ulonglong)dVar24 >> 0x20),
                                    fVar11 * fVar32 + SUB84(dVar24,0));
        }
        fVar11 = fVar10;
        if (cVar37 == '\0') {
          fVar11 = fVar29;
        }
        if (cVar36 == '\0') {
          iVar1 = (int)(fVar11 * SUB84(dVar26,0) + SUB84(dVar24,0));
        }
        else {
          iVar1 = (int)dVar24;
        }
        *(int *)(uVar2 + ar7) = iVar1;
        uVar3 = uVar2 + 4;
        fVar20 = fStack_50;
      } while (uVar2 + 4 < 0xc);
    }
  }
  return uVar2;
}

__asm__(".globl _FUN_8c21caa0\n.set _FUN_8c21caa0, _FUN_8c21caa0_def\n");
