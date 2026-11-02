#include "../decls.h"
undefined4 FUN_8c2578ac_def(double *ar4,int ar5,uint ar6,undefined4 ar7)

{
  short sVar1;
  short sVar2;
  short sVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  int in_r2;
  byte bVar7;
  short *psVar8;
  double *pdVar9;
  undefined4 unaff_r8;
  double *pdVar10;
  undefined4 unaff_r9;
  undefined8 *puVar11;
  undefined1 *puVar12;
  undefined4 in_fr1;
  float fVar13;
  double dVar15;
  float fVar18;
  float fVar19;
  double dVar16;
  float fVar20;
  double dVar17;
  float fVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  double dVar24;
  float fVar27;
  double dVar25;
  double dVar26;
  undefined4 in_fr5;
  float fVar28;
  float fVar29;
  double dVar30;
  float fVar31;
  undefined4 uVar32;
  undefined4 uVar33;
  double in_dr6;
  float fVar34;
  double dVar35;
  float fVar36;
  float fVar37;
  double in_dr10;
  undefined4 uVar38;
  float fVar39;
  float fVar40;
  undefined8 in_dr12;
  double dVar41;
  undefined8 in_dr14;
  double dVar42;
  undefined4 uVar43;
  double in_xd0;
  double in_xd2;
  undefined8 uVar44;
  double dVar45;
  double in_xd4;
  double dVar46;
  double in_xd6;
  double in_xd8;
  double dVar47;
  double in_xd10;
  float fVar48;
  double in_xd12;
  double dVar49;
  double in_xd14;
  double dVar50;
  float fVar51;
  bool bVar52;
  bool bVar53;
  bool bVar54;
  bool bVar55;
  bool bVar56;
  bool bVar57;
  bool bVar58;
  bool bVar59;
  bool bVar60;
  bool bVar61;
  bool bVar62;
  bool bVar63;
  bool bVar64;
  bool bVar65;
  bool bVar66;
  bool bVar67;
  undefined4 in_PR;
  char in_FPSCR_PR = 0;
  char in_FPSCR_SZ = 0;
  undefined1 auStack_20 [16];
  undefined8 uStack_10;
  undefined8 uStack_8;
  float fVar14;
  
  uVar4 = 0xf0000000;
  uVar6 = 0xe0000000;
  if (in_FPSCR_SZ == '\0') {
    uStack_8 = (double)CONCAT44((int)in_dr14,(undefined4)uStack_8);
                    
    (*(uint*)((uchar*)&uStack_8+0)) = (int)((ulonglong)in_dr14 >> 0x20);
    puVar11 = &uStack_10;
    uStack_10 = CONCAT44((int)in_dr12,(int)((ulonglong)in_dr12 >> 0x20));
  }
  else {
    puVar11 = (undefined8 *)auStack_20;
    uStack_8 = in_xd14;
    uStack_10 = in_dr14;
  }
  *(undefined4 *)((int)puVar11 + -4) = unaff_r9;
  *(undefined4 *)((int)puVar11 + -8) = unaff_r8;
  psVar8 = (short *)(ar5 * 0x14 + *(int *)((int)ar4 + 0x1c));
  if (in_FPSCR_SZ == '\0') {
    dVar45 = (double)CONCAT44(DAT_8c257990,in_fr5);
  }
  else {
    dVar45 = (double)CONCAT44((*(uint *)0x8c257994),DAT_8c257990);
  }
  if (in_FPSCR_PR == '\0') {
    dVar15 = (double)CONCAT44((float)(int)psVar8[4],in_fr1);
  }
  else {
    dVar15 = (double)(int)psVar8[4];
  }
  fVar19 = (float)((ulonglong)dVar45 >> 0x20);
  if (in_FPSCR_PR == '\0') {
    fVar18 = (float)((ulonglong)dVar15 >> 0x20) * fVar19;
  }
  else {
    fVar18 = (float)((ulonglong)(dVar15 * dVar45) >> 0x20);
  }
  if (in_FPSCR_PR == '\0') {
    dVar15 = (double)CONCAT44(fVar18,(float)(int)psVar8[5] * fVar19);
  }
  else {
    dVar15 = (double)CONCAT44(fVar18,(float)(int)psVar8[5]) * dVar45;
  }
  if (in_FPSCR_PR == '\0') {
    fVar18 = (float)(int)psVar8[6] * fVar19;
  }
  else {
    fVar18 = (float)((ulonglong)((double)(int)psVar8[6] * dVar45) >> 0x20);
  }
  if (in_FPSCR_PR == '\0') {
    dVar24 = (double)CONCAT44(fVar18,(float)(int)psVar8[7] * fVar19);
  }
  else {
    dVar24 = (double)CONCAT44(fVar18,(float)(int)psVar8[7]) * dVar45;
  }
  dVar16 = dVar15;
  dVar50 = dVar24;
  dVar30 = dVar45;
  if (((ar6 & 4) != 0) && (dVar16 = dVar24, dVar50 = dVar15, dVar30 = dVar15, in_FPSCR_SZ == '\0'))
  {
    uVar23 = (undefined4)((ulonglong)dVar15 >> 0x20);
    dVar16 = (double)CONCAT44((int)((ulonglong)dVar24 >> 0x20),SUB84(dVar15,0));
    dVar50 = (double)CONCAT44(uVar23,SUB84(dVar24,0));
    dVar30 = (double)CONCAT44(uVar23,SUB84(dVar45,0));
  }
  dVar24 = dVar30;
  dVar45 = in_xd0;
  dVar15 = in_xd2;
  if (((ar6 & 8) != 0) && (dVar24 = in_xd0, dVar45 = in_xd2, dVar15 = in_xd0, in_FPSCR_SZ == '\0'))
  {
    uVar23 = SUB84(dVar16,0);
    dVar16 = (double)CONCAT44((int)((ulonglong)dVar16 >> 0x20),SUB84(dVar50,0));
    dVar50 = (double)CONCAT44((int)((ulonglong)dVar50 >> 0x20),uVar23);
    dVar24 = (double)CONCAT44(uVar23,SUB84(dVar30,0));
    dVar45 = in_xd0;
    dVar15 = in_xd2;
  }
  sVar1 = *psVar8;
  sVar2 = psVar8[1];
  sVar3 = psVar8[3];
  iVar5 = -(int)psVar8[2];
  uVar23 = (undefined4)((ulonglong)dVar16 >> 0x20);
  if (in_FPSCR_SZ == '\0') {
    pdVar10 = (double *)((int)puVar11 + -0xc);
    *(undefined4 *)pdVar10 = uVar23;
  }
  else {
    pdVar10 = (double *)((int)puVar11 + -0x10);
    *pdVar10 = dVar16;
  }
  if (in_FPSCR_SZ == '\0') {
    pdVar10 = (double *)((int)pdVar10 + -4);
    *(int *)pdVar10 = SUB84(dVar16,0);
  }
  else {
    pdVar10 = pdVar10 + -1;
    *pdVar10 = dVar45;
  }
  if (in_FPSCR_SZ == '\0') {
    pdVar10 = (double *)((int)pdVar10 + -4);
    *(undefined4 *)pdVar10 = uVar23;
  }
  else {
    pdVar10 = pdVar10 + -1;
    *pdVar10 = dVar16;
  }
  uVar23 = (undefined4)((ulonglong)dVar50 >> 0x20);
  if (in_FPSCR_SZ == '\0') {
    *(int *)((int)pdVar10 + -4) = SUB84(dVar50,0);
    *(undefined4 *)(pdVar10 + -1) = uVar23;
    pdVar10 = (double *)((int)pdVar10 + -0xc);
    *(int *)pdVar10 = SUB84(dVar16,0);
  }
  else {
    pdVar10[-1] = dVar15;
    pdVar10[-2] = dVar50;
    pdVar10 = pdVar10 + -3;
    *pdVar10 = dVar45;
  }
  if (in_FPSCR_PR == '\0') {
    fVar19 = (float)iVar5;
  }
  else {
    fVar19 = (float)((ulonglong)(double)iVar5 >> 0x20);
  }
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)((int)pdVar10 + -4) = uVar23;
    pdVar10 = pdVar10 + -1;
    *(int *)pdVar10 = SUB84(dVar50,0);
  }
  else {
    pdVar10[-1] = dVar50;
    pdVar10 = pdVar10 + -2;
    *pdVar10 = dVar15;
  }
  fVar18 = (float)-(int)sVar3;
  if (in_FPSCR_SZ == '\0') {
    dVar24 = (double)CONCAT44(*(undefined4 *)((int)ar4 + 0xc),SUB84(dVar24,0));
  }
  else {
    dVar24 = *(double *)((int)ar4 + 0xc);
  }
  if (in_FPSCR_PR == '\0') {
    fVar27 = (float)(sVar1 + iVar5);
  }
  else {
    fVar27 = (float)((ulonglong)(double)(sVar1 + iVar5) >> 0x20);
  }
  if (in_FPSCR_SZ == '\0') {
    dVar24 = (double)CONCAT44((int)((ulonglong)dVar24 >> 0x20),*(undefined4 *)(ar4 + 2));
  }
  else {
    in_xd4 = ar4[2];
  }
  fVar21 = (float)((int)sVar2 + -(int)sVar3);
  fVar28 = (float)((ulonglong)dVar24 >> 0x20);
  fVar37 = SUB84(dVar24,0);
  if (in_FPSCR_PR == '\0') {
    dVar16 = (double)CONCAT44(fVar19 * fVar28,fVar18 * fVar37);
    dVar24 = (double)CONCAT44(fVar27 * fVar28,fVar21 * fVar37);
  }
  else {
    dVar16 = (double)CONCAT44(fVar19,fVar18) * dVar24 * dVar24;
    dVar24 = (double)CONCAT44(fVar27,fVar21) * dVar24 * dVar24;
  }
  uVar23 = (undefined4)((ulonglong)dVar16 >> 0x20);
  fVar19 = SUB84(dVar24,0);
  uVar33 = (undefined4)((ulonglong)dVar24 >> 0x20);
  dVar50 = in_xd14;
  if ((ar6 & 1) == 0) {
    dVar30 = dVar16;
    dVar42 = dVar24;
    dVar41 = dVar24;
    dVar46 = dVar15;
    dVar47 = dVar45;
    dVar49 = dVar15;
    if (in_FPSCR_SZ == '\0') {
      dVar30 = (double)CONCAT44(uVar23,fVar19);
      dVar42 = (double)CONCAT44(uVar33,SUB84(dVar16,0));
      dVar46 = in_xd4;
      dVar47 = in_xd8;
      dVar49 = in_xd12;
    }
  }
  else {
    if (in_FPSCR_PR == '\0') {
      fVar18 = ((float)(*(uint *)((int)ar4 + 0x14) & 0xffff) * 6.2831855) / 65536.0;
      fVar27 = (float)sin(fVar18);
      fVar18 = (float)cos(fVar18);
      in_dr10 = (double)CONCAT44((float)fVar27,(float)fVar18);
    }
    dVar50 = dVar24;
    dVar47 = dVar24;
    dVar30 = dVar16;
    if (in_FPSCR_SZ == '\0') {
      in_dr6 = (double)CONCAT44((int)((ulonglong)in_dr6 >> 0x20),SUB84(dVar16,0));
      dVar16 = (double)CONCAT44(uVar23,uVar23);
      dVar50 = (double)CONCAT44(uVar33,uVar33);
      dVar47 = in_xd8;
      dVar30 = dVar45;
      dVar45 = in_xd6;
    }
    in_xd6 = dVar45;
    dVar45 = dVar30;
    fVar18 = SUB84(in_dr10,0);
    fVar27 = (float)((ulonglong)in_dr10 >> 0x20);
    if (in_FPSCR_PR == '\0') {
      dVar16 = (double)CONCAT44((float)((ulonglong)dVar16 >> 0x20) * fVar18,SUB84(dVar16,0) * fVar27
                               );
      dVar35 = (double)CONCAT44((float)((ulonglong)dVar50 >> 0x20) * fVar18,SUB84(dVar50,0) * fVar27
                               );
    }
    else {
      dVar16 = dVar16 * in_dr10 * in_dr10;
      dVar35 = dVar50 * in_dr10 * in_dr10;
    }
    dVar30 = in_xd6;
    dVar50 = dVar15;
    if (in_FPSCR_SZ == '\0') {
      dVar30 = (double)CONCAT44(SUB84(in_dr6,0),fVar19);
      dVar50 = in_xd14;
    }
    if (in_FPSCR_PR == '\0') {
      in_dr6 = (double)CONCAT44((int)((ulonglong)in_dr6 >> 0x20),SUB84(in_dr6,0) * fVar27);
      dVar24 = (double)CONCAT44(uVar33,fVar19 * fVar27);
      dVar42 = (double)CONCAT44((float)((ulonglong)dVar30 >> 0x20) * fVar18,SUB84(dVar30,0) * fVar18
                               );
    }
    else {
      in_dr6 = in_dr6 * in_dr10;
      dVar24 = dVar24 * in_dr10;
      dVar42 = dVar30 * in_dr10 * in_dr10;
    }
    fVar19 = (float)((ulonglong)dVar16 >> 0x20);
    dVar30 = dVar16;
    if (in_FPSCR_SZ == '\0') {
      dVar30 = (double)CONCAT44(fVar19,fVar37);
    }
    if (in_FPSCR_PR == '\0') {
      dVar30 = (double)CONCAT44((float)((ulonglong)dVar30 >> 0x20) - SUB84(dVar24,0),SUB84(dVar30,0)
                               );
    }
    else {
      dVar30 = dVar30 - dVar24;
    }
    dVar46 = dVar45;
    if (in_FPSCR_SZ == '\0') {
      dVar30 = (double)CONCAT44((int)((ulonglong)dVar30 >> 0x20),SUB84(dVar16,0));
      dVar46 = in_xd4;
    }
    fVar18 = (float)((ulonglong)dVar42 >> 0x20);
    if (in_FPSCR_PR == '\0') {
      dVar30 = (double)CONCAT44((int)((ulonglong)dVar30 >> 0x20),SUB84(dVar30,0) + SUB84(dVar42,0));
      dVar16 = (double)CONCAT44(fVar19 - SUB84(in_dr6,0),SUB84(dVar16,0) + fVar18);
    }
    else {
      dVar30 = dVar30 + dVar42;
      dVar16 = (dVar16 - in_dr6) + dVar42;
    }
    fVar19 = (float)((ulonglong)dVar35 >> 0x20);
    dVar41 = dVar35;
    if (in_FPSCR_SZ == '\0') {
      dVar41 = (double)CONCAT44(fVar19,(int)in_dr12);
    }
    if (in_FPSCR_PR == '\0') {
      dVar41 = (double)CONCAT44((float)((ulonglong)dVar41 >> 0x20) - SUB84(dVar24,0),SUB84(dVar41,0)
                               );
    }
    else {
      dVar41 = dVar41 - dVar24;
    }
    dVar49 = dVar47;
    if (in_FPSCR_SZ == '\0') {
      dVar41 = (double)CONCAT44((int)((ulonglong)dVar41 >> 0x20),SUB84(dVar35,0));
      dVar49 = in_xd12;
    }
    if (in_FPSCR_PR == '\0') {
      dVar41 = (double)CONCAT44((int)((ulonglong)dVar41 >> 0x20),SUB84(dVar41,0) + SUB84(dVar42,0));
      dVar42 = (double)CONCAT44(fVar19 - SUB84(in_dr6,0),SUB84(dVar35,0) + fVar18);
    }
    else {
      dVar41 = dVar41 + dVar42;
      dVar42 = (dVar35 - in_dr6) + dVar42;
    }
  }
  if (in_FPSCR_SZ == '\0') {
    dVar24 = (double)CONCAT44((int)((ulonglong)dVar24 >> 0x20),*(undefined4 *)ar4);
    in_dr6 = (double)CONCAT44((int)((ulonglong)in_dr6 >> 0x20),*(undefined4 *)((int)ar4 + 4));
    pdVar9 = ar4 + 1;
  }
  else {
    dVar15 = *ar4;
    in_xd6 = ar4[1];
    pdVar9 = ar4 + 2;
  }
  fVar19 = SUB84(in_dr6,0);
  if (in_FPSCR_PR == '\0') {
    dVar16 = (double)CONCAT44((float)((ulonglong)dVar16 >> 0x20) + SUB84(dVar24,0),
                              SUB84(dVar16,0) + fVar19);
  }
  else {
    dVar16 = dVar16 + dVar24 + in_dr6;
  }
  if (in_FPSCR_SZ == '\0') {
    dVar24 = (double)CONCAT44(*(undefined4 *)pdVar9,SUB84(dVar24,0));
  }
  else {
    dVar24 = *pdVar9;
  }
  fVar18 = SUB84(dVar24,0);
  if (in_FPSCR_PR == '\0') {
    dVar30 = (double)CONCAT44((float)((ulonglong)dVar30 >> 0x20) + fVar18,SUB84(dVar30,0) + fVar19);
  }
  else {
    dVar30 = dVar30 + dVar24 + in_dr6;
  }
  fVar27 = (float)((ulonglong)dVar24 >> 0x20);
  dVar35 = dVar24;
  if (in_FPSCR_SZ == '\0') {
    dVar35 = (double)CONCAT44(fVar27,fVar19);
  }
  if (in_FPSCR_PR == '\0') {
    dVar42 = (double)CONCAT44((float)((ulonglong)dVar42 >> 0x20) + fVar18,
                              SUB84(dVar42,0) + SUB84(dVar35,0));
  }
  else {
    dVar42 = dVar42 + dVar24 + dVar35;
  }
  dVar17 = dVar24;
  if (in_FPSCR_SZ == '\0') {
    dVar17 = (double)CONCAT44(fVar27,SUB84(in_dr10,0));
  }
  if (in_FPSCR_PR == '\0') {
    dVar41 = (double)CONCAT44((float)((ulonglong)dVar41 >> 0x20) + fVar18,
                              SUB84(dVar41,0) + SUB84(dVar35,0));
  }
  else {
    dVar41 = dVar41 + dVar24 + dVar35;
  }
  if (in_FPSCR_SZ == '\0') {
    dVar17 = (double)CONCAT44((int)((ulonglong)dVar17 >> 0x20),*(undefined4 *)0x8c4aa4d8);
    dVar24 = (double)CONCAT44(fVar27,*(undefined4 *)0x8c4aa4d4);
  }
  else {
    in_xd10 = *(undefined4 *)0x8c4aa4d8;
    dVar50 = *(undefined4 *)0x8c4aa4d4;
  }
                    
  fVar21 = SUB84(dVar45,0);
  fVar37 = (float)((ulonglong)dVar45 >> 0x20);
  fVar28 = (float)((ulonglong)dVar15 >> 0x20);
  fVar29 = SUB84(dVar46,0);
  fVar31 = (float)((ulonglong)dVar46 >> 0x20);
  fVar34 = (float)((ulonglong)in_xd6 >> 0x20);
  fVar36 = SUB84(dVar47,0);
  fVar40 = (float)((ulonglong)dVar47 >> 0x20);
  fVar48 = (float)((ulonglong)in_xd10 >> 0x20);
  fVar19 = SUB84(dVar49,0);
  fVar18 = (float)((ulonglong)dVar49 >> 0x20);
  fVar51 = (float)((ulonglong)dVar50 >> 0x20);
  if (in_FPSCR_PR == '\0') {
    fVar14 = SUB84(dVar16,0);
    fVar20 = (float)((ulonglong)dVar16 >> 0x20);
    fVar13 = fVar19 * fVar27;
    fVar39 = fVar18 * fVar27;
    fVar27 = fVar28 * fVar14 + fVar34 * fVar20 + fVar48 * 1.0 + fVar51 * fVar27;
    fVar13 = fVar21 * fVar14 + fVar29 * fVar20 + fVar36 * 1.0 + fVar13;
    fVar13 = fVar37 * fVar14 + fVar31 * fVar20 + fVar40 * 1.0 + fVar39;
  }
  if (in_FPSCR_PR == '\0') {
    dVar25 = (double)CONCAT44(fVar27,1.0 / fVar27);
    bVar52 = SUB84(dVar17,0) < fVar27;
    bVar53 = fVar27 < SUB84(dVar24,0);
  }
  else {
    dVar25 = (double)CONCAT44(fVar27,0x3f800000) / (double)CONCAT44(fVar27,0x3f800000);
    bVar52 = dVar17 < dVar25;
    bVar53 = dVar25 < dVar24;
  }
  dVar26 = dVar15;
  if (in_FPSCR_SZ == '\0') {
    dVar26 = (double)CONCAT44(SUB84(dVar25,0),SUB84(dVar25,0));
  }
  fVar27 = (float)((ulonglong)dVar35 >> 0x20);
                    
  if (in_FPSCR_PR == '\0') {
    fVar14 = SUB84(dVar30,0);
    fVar20 = (float)((ulonglong)dVar30 >> 0x20);
    fVar13 = fVar19 * fVar27;
    fVar39 = fVar18 * fVar27;
    fVar27 = fVar28 * fVar14 + fVar34 * fVar20 + fVar48 * 1.0 + fVar51 * fVar27;
    fVar28 = fVar21 * fVar14 + fVar29 * fVar20 + fVar36 * 1.0 + fVar13;
    fVar28 = fVar37 * fVar14 + fVar31 * fVar20 + fVar40 * 1.0 + fVar39;
  }
  if (in_FPSCR_PR == '\0') {
    dVar35 = (double)CONCAT44(fVar27,1.0 / fVar27);
    bVar54 = SUB84(dVar17,0) < fVar27;
  }
  else {
    dVar35 = (double)CONCAT44(fVar27,0x3f800000) / (double)CONCAT44(fVar27,0x3f800000);
    fVar27 = (float)((ulonglong)dVar35 >> 0x20);
    bVar54 = dVar17 < dVar35;
  }
  if (in_FPSCR_PR == '\0') {
    bVar55 = fVar27 < SUB84(dVar24,0);
  }
  else {
    bVar55 = dVar35 < dVar24;
  }
  if (in_FPSCR_SZ == '\0') {
    dVar26 = (double)CONCAT44((int)((ulonglong)dVar26 >> 0x20),*(undefined4 *)0x8c4aa4d8);
    dVar35 = (double)CONCAT44(SUB84(dVar35,0),*(undefined4 *)0x8c4aa4d4);
    dVar25 = in_xd6;
  }
  else {
    dVar15 = *(undefined4 *)0x8c4aa4d8;
    dVar25 = *(undefined4 *)0x8c4aa4d4;
    dVar35 = in_xd6;
  }
  fVar27 = (float)((ulonglong)dVar17 >> 0x20);
                    
  fVar28 = (float)((ulonglong)dVar15 >> 0x20);
  fVar34 = (float)((ulonglong)dVar25 >> 0x20);
  if (in_FPSCR_PR == '\0') {
    fVar14 = SUB84(dVar42,0);
    fVar20 = (float)((ulonglong)dVar42 >> 0x20);
    fVar13 = fVar19 * fVar27;
    fVar39 = fVar18 * fVar27;
    fVar27 = fVar28 * fVar14 + fVar34 * fVar20 + fVar48 * 1.0 + fVar51 * fVar27;
    fVar13 = fVar21 * fVar14 + fVar29 * fVar20 + fVar36 * 1.0 + fVar13;
    fVar13 = fVar37 * fVar14 + fVar31 * fVar20 + fVar40 * 1.0 + fVar39;
  }
  fVar13 = SUB84(dVar26,0);
  if (in_FPSCR_PR == '\0') {
    dVar15 = (double)CONCAT44(fVar27,1.0 / fVar27);
    bVar56 = fVar13 < fVar27;
  }
  else {
    dVar15 = (double)CONCAT44(fVar27,0x3f800000) / (double)CONCAT44(fVar27,0x3f800000);
    fVar27 = (float)((ulonglong)dVar15 >> 0x20);
    bVar56 = dVar26 < dVar15;
  }
  if (in_FPSCR_PR == '\0') {
    bVar57 = fVar27 < SUB84(dVar35,0);
  }
  else {
    bVar57 = dVar15 < dVar35;
  }
  if (in_FPSCR_SZ == '\0') {
    in_xd10 = (double)CONCAT44(SUB84(dVar15,0),SUB84(dVar15,0));
  }
  fVar27 = (float)((ulonglong)dVar24 >> 0x20);
                    
  if (in_FPSCR_PR == '\0') {
    fVar39 = SUB84(dVar41,0);
    fVar14 = (float)((ulonglong)dVar41 >> 0x20);
    fVar19 = fVar19 * fVar27;
    fVar18 = fVar18 * fVar27;
    fVar27 = fVar28 * fVar39 + fVar34 * fVar14 + fVar48 * 1.0 + fVar51 * fVar27;
    fVar19 = fVar21 * fVar39 + fVar29 * fVar14 + fVar36 * 1.0 + fVar19;
    fVar19 = fVar37 * fVar39 + fVar31 * fVar14 + fVar40 * 1.0 + fVar18;
  }
  if (in_FPSCR_PR == '\0') {
    dVar15 = (double)CONCAT44(fVar27,1.0 / fVar27);
    bVar58 = fVar13 < fVar27;
  }
  else {
    dVar15 = (double)CONCAT44(fVar27,0x3f800000) / (double)CONCAT44(fVar27,0x3f800000);
    fVar27 = (float)((ulonglong)dVar15 >> 0x20);
    bVar58 = dVar26 < dVar15;
  }
  if (in_FPSCR_PR == '\0') {
    bVar59 = fVar27 < SUB84(dVar35,0);
  }
  else {
    bVar59 = dVar15 < dVar35;
  }
  bVar7 = ((bVar53 << 1 | bVar55) << 1 | bVar57) << 1 | bVar59;
  dVar24 = dVar50;
  if (in_FPSCR_SZ == '\0') {
    dVar24 = (double)CONCAT44(SUB84(dVar15,0),SUB84(dVar15,0));
  }
  if (((byte)(((bVar52 << 1 | bVar54) << 1 | bVar56) << 1 | bVar58) == 0xf) || (bVar7 == 0xf)) {
    uVar6 = 0;
  }
  else {
    if (in_FPSCR_SZ == '\0') {
      fVar13 = *(undefined4 *)0x8c4aa4a8;
      dVar26 = (double)CONCAT44((int)((ulonglong)dVar26 >> 0x20),fVar13);
      dVar35 = (double)CONCAT44((int)((ulonglong)dVar35 >> 0x20),fVar13);
      in_xd10 = (double)CONCAT44((int)((ulonglong)in_xd10 >> 0x20),*(undefined4 *)0x8c4aa4dc);
      dVar24 = (double)CONCAT44((int)((ulonglong)dVar24 >> 0x20),*(undefined4 *)0x8c4aa4e0);
    }
    else {
      dVar50 = *(undefined4 *)0x8c4aa4e0;
    }
    if (in_FPSCR_PR == '\0') {
      dVar26 = (double)CONCAT44((int)((ulonglong)dVar26 >> 0x20),fVar13 * SUB84(in_xd10,0));
      dVar35 = (double)CONCAT44((int)((ulonglong)dVar35 >> 0x20),SUB84(dVar35,0) * SUB84(dVar24,0));
    }
    else {
      dVar26 = dVar26 * in_xd10;
      dVar35 = dVar35 * dVar24;
    }
    if (in_FPSCR_SZ == '\0') {
      in_xd10 = (double)CONCAT44((int)((ulonglong)in_xd10 >> 0x20),((undefined1 *)3)[0x8c4aa4a8]);
      dVar24 = (double)CONCAT44((int)((ulonglong)dVar24 >> 0x20),((undefined1 *)4)[0x8c4aa4a8]);
    }
    else {
      dVar50 = *(double *)(0x8c4aa4a8 + 5);
    }
    fVar18 = (float)((ulonglong)dVar26 >> 0x20);
    fVar19 = SUB84(dVar26,0);
    fVar27 = SUB84(dVar35,0);
    fVar21 = (float)((ulonglong)dVar35 >> 0x20);
    fVar37 = SUB84(in_xd10,0);
    fVar29 = SUB84(dVar24,0);
    fVar28 = (float)((ulonglong)in_xd10 >> 0x20);
    fVar31 = (float)((ulonglong)dVar24 >> 0x20);
    if (in_FPSCR_PR == '\0') {
      dVar17 = (double)CONCAT44((float)((ulonglong)dVar16 >> 0x20) * fVar18 * fVar19 + fVar37,
                                SUB84(dVar16,0) * fVar18 * fVar27 + fVar29);
      dVar16 = (double)CONCAT44((float)((ulonglong)dVar30 >> 0x20) * fVar21 * fVar19 + fVar37,
                                SUB84(dVar30,0) * fVar21 * fVar27 + fVar29);
      dVar15 = (double)CONCAT44((float)((ulonglong)dVar42 >> 0x20) * fVar28 * fVar19 + fVar37,
                                SUB84(dVar42,0) * fVar28 * fVar27 + fVar29);
      dVar30 = (double)CONCAT44((float)((ulonglong)dVar41 >> 0x20) * fVar31 * fVar19 + fVar37,
                                SUB84(dVar41,0) * fVar31 * fVar27 + fVar29);
    }
    else {
      dVar17 = dVar16 * dVar26 * dVar26 * dVar26 * dVar35 + in_xd10 + dVar24;
      dVar16 = dVar30 * dVar35 * dVar35 * dVar26 * dVar35 + in_xd10 + dVar24;
      dVar15 = dVar42 * in_xd10 * in_xd10 * dVar26 * dVar35 + in_xd10 + dVar24;
      dVar30 = dVar41 * dVar24 * dVar24 * dVar26 * dVar35 + in_xd10 + dVar24;
    }
    if (in_FPSCR_SZ == '\0') {
      dVar24 = (double)CONCAT44(fVar31,*(undefined4 *)0x8c4aa4c4);
      dVar35 = (double)CONCAT44(fVar21,*(undefined4 *)((int)0x8c4aa4c4 + 4));
      in_xd10 = (double)CONCAT44(fVar28,*(undefined4 *)(0x8c4aa4c4 + 1));
      dVar26 = (double)CONCAT44(fVar18,*(undefined4 *)((int)0x8c4aa4c4 + 0xc));
    }
    else {
      dVar50 = *(undefined4 *)0x8c4aa4c4;
    }
    fVar19 = SUB84(dVar17,0);
    fVar18 = SUB84(dVar26,0);
    if (in_FPSCR_PR == '\0') {
      bVar52 = fVar18 < fVar19;
    }
    else {
      bVar52 = dVar26 < dVar17;
    }
    fVar27 = SUB84(dVar35,0);
    if (in_FPSCR_PR == '\0') {
      bVar53 = fVar19 < fVar27;
    }
    else {
      bVar53 = dVar17 < dVar35;
    }
    fVar21 = (float)((ulonglong)dVar17 >> 0x20);
    fVar37 = SUB84(in_xd10,0);
    if (in_FPSCR_PR == '\0') {
      bVar54 = fVar37 < fVar21;
    }
    else {
      bVar54 = in_xd10 < dVar17;
    }
    fVar28 = SUB84(dVar24,0);
    if (in_FPSCR_PR == '\0') {
      bVar55 = fVar21 < fVar28;
    }
    else {
      bVar55 = dVar17 < dVar24;
    }
    fVar29 = SUB84(dVar16,0);
    if (in_FPSCR_PR == '\0') {
      bVar56 = fVar18 < fVar29;
    }
    else {
      bVar56 = dVar26 < dVar16;
    }
    if (in_FPSCR_PR == '\0') {
      bVar57 = fVar29 < fVar27;
    }
    else {
      bVar57 = dVar16 < dVar35;
    }
    fVar31 = (float)((ulonglong)dVar16 >> 0x20);
    if (in_FPSCR_PR == '\0') {
      bVar58 = fVar37 < fVar31;
    }
    else {
      bVar58 = in_xd10 < dVar16;
    }
    if (in_FPSCR_PR == '\0') {
      bVar59 = fVar31 < fVar28;
    }
    else {
      bVar59 = dVar16 < dVar24;
    }
    fVar34 = SUB84(dVar15,0);
    if (in_FPSCR_PR == '\0') {
      bVar60 = fVar18 < fVar34;
    }
    else {
      bVar60 = dVar26 < dVar15;
    }
    if (in_FPSCR_PR == '\0') {
      bVar61 = fVar34 < fVar27;
    }
    else {
      bVar61 = dVar15 < dVar35;
    }
    fVar36 = (float)((ulonglong)dVar15 >> 0x20);
    if (in_FPSCR_PR == '\0') {
      bVar62 = fVar37 < fVar36;
    }
    else {
      bVar62 = in_xd10 < dVar15;
    }
    if (in_FPSCR_PR == '\0') {
      bVar63 = fVar36 < fVar28;
    }
    else {
      bVar63 = dVar15 < dVar24;
    }
    fVar40 = SUB84(dVar30,0);
    if (in_FPSCR_PR == '\0') {
      bVar64 = fVar18 < fVar40;
    }
    else {
      bVar64 = dVar26 < dVar30;
    }
    if (in_FPSCR_PR == '\0') {
      bVar65 = fVar40 < fVar27;
    }
    else {
      bVar65 = dVar30 < dVar35;
    }
    fVar18 = (float)((ulonglong)dVar30 >> 0x20);
    if (in_FPSCR_PR == '\0') {
      bVar66 = fVar37 < fVar18;
    }
    else {
      bVar66 = in_xd10 < dVar30;
    }
    if (in_FPSCR_PR == '\0') {
      bVar67 = fVar18 < fVar28;
    }
    else {
      bVar67 = dVar30 < dVar24;
    }
    if ((0xffffffff &
         ((((0x0 << 1 | (uint)bVar52) << 1 | (uint)bVar53) << 1 | (uint)bVar54) << 1 |
         (uint)bVar55) &
         ((((0x0 << 1 | (uint)bVar56) << 1 | (uint)bVar57) << 1 | (uint)bVar58) << 1 |
         (uint)bVar59) &
         ((((0x0 << 1 | (uint)bVar60) << 1 | (uint)bVar61) << 1 | (uint)bVar62) << 1 |
         (uint)bVar63) &
        ((((0x0 << 1 | (uint)bVar64) << 1 | (uint)bVar65) << 1 | (uint)bVar66) << 1 |
        (uint)bVar67)) == 0) {
      uVar23 = (undefined4)((ulonglong)dVar26 >> 0x20);
      uVar33 = (undefined4)((ulonglong)dVar35 >> 0x20);
      uVar38 = (undefined4)((ulonglong)in_xd10 >> 0x20);
      uVar43 = (undefined4)((ulonglong)dVar24 >> 0x20);
      if (bVar7 == 0) {
        if (in_FPSCR_SZ == '\0') {
          uVar22 = *(undefined4 *)((int)pdVar10 + 0x1c);
          uVar32 = *(undefined4 *)(pdVar10 + 3);
          dVar35 = (double)CONCAT44(uVar33,uVar32);
          *(undefined4 *)(in_r2 + 0x18) = 0x3f800000;
          *(undefined4 *)(in_r2 + 0x14) = uVar32;
          *(undefined4 *)(in_r2 + 0x10) = uVar22;
          *(undefined4 *)(in_r2 + 0xc) = uVar23;
          *(float *)(in_r2 + 8) = fVar19;
          pdVar9 = (double *)(in_r2 + 4);
          *(float *)pdVar9 = fVar21;
        }
        else {
          uVar44 = *(undefined8 *)((int)pdVar10 + 0x1c);
          dVar24 = pdVar10[3];
          *(double *)(in_r2 + 0x14) = dVar50;
          *(double *)(in_r2 + 0xc) = dVar24;
          *(undefined8 *)(in_r2 + 4) = uVar44;
          *(double *)(in_r2 + -4) = dVar26;
          *(double *)(in_r2 + -0xc) = dVar45;
          pdVar9 = (double *)(in_r2 + -0x14);
          *pdVar9 = dVar17;
        }
        *(undefined4 *)((int)pdVar9 + -4) = uVar6;
        if (in_FPSCR_SZ == '\0') {
          uVar23 = *(undefined4 *)((int)pdVar10 + 0x14);
          uVar33 = *(undefined4 *)(pdVar10 + 2);
          *(undefined4 *)((int)pdVar9 + 0x34) = 0x3f800000;
          *(undefined4 *)(pdVar9 + 6) = uVar33;
          *(undefined4 *)((int)pdVar9 + 0x2c) = uVar23;
          *(int *)(pdVar9 + 5) = (int)((ulonglong)dVar35 >> 0x20);
          *(float *)((int)pdVar9 + 0x24) = fVar29;
          pdVar9 = pdVar9 + 4;
          *(float *)pdVar9 = fVar31;
        }
        else {
          dVar45 = *(double *)((int)pdVar10 + 0x14);
          dVar24 = pdVar10[2];
          pdVar9[6] = dVar50;
          pdVar9[5] = dVar24;
          pdVar9[4] = dVar45;
          pdVar9[3] = dVar35;
          pdVar9[2] = dVar46;
          pdVar9 = pdVar9 + 1;
          *pdVar9 = dVar16;
        }
        *(undefined4 *)((int)pdVar9 + -4) = uVar6;
        if (in_FPSCR_SZ == '\0') {
          uVar23 = *(undefined4 *)((int)pdVar10 + 0xc);
          uVar33 = *(undefined4 *)(pdVar10 + 1);
          *(undefined4 *)((int)pdVar9 + 0x34) = 0x3f800000;
          *(undefined4 *)(pdVar9 + 6) = uVar33;
          *(undefined4 *)((int)pdVar9 + 0x2c) = uVar23;
          *(undefined4 *)(pdVar9 + 5) = uVar38;
          *(float *)((int)pdVar9 + 0x24) = fVar34;
          pdVar9 = pdVar9 + 4;
          *(float *)pdVar9 = fVar36;
        }
        else {
          dVar45 = *(double *)((int)pdVar10 + 0xc);
          dVar24 = pdVar10[1];
          pdVar9[6] = dVar50;
          pdVar9[5] = dVar24;
          pdVar9[4] = dVar45;
          pdVar9[3] = in_xd10;
          pdVar9[2] = dVar47;
          pdVar9 = pdVar9 + 1;
          *pdVar9 = dVar15;
        }
        *(undefined4 *)((int)pdVar9 + -4) = uVar6;
        if (in_FPSCR_SZ == '\0') {
          uVar6 = *(undefined4 *)((int)pdVar10 + 4);
          uVar23 = *(undefined4 *)pdVar10;
          *(undefined4 *)((int)pdVar9 + 0x34) = 0x3f800000;
          *(undefined4 *)(pdVar9 + 6) = uVar23;
          *(undefined4 *)((int)pdVar9 + 0x2c) = uVar6;
          *(undefined4 *)(pdVar9 + 5) = uVar43;
          *(float *)((int)pdVar9 + 0x24) = fVar40;
          pdVar9 = pdVar9 + 4;
          *(float *)pdVar9 = fVar18;
        }
        else {
          dVar45 = *(double *)((int)pdVar10 + 4);
          dVar15 = *pdVar10;
          pdVar9[6] = dVar50;
          pdVar9[5] = dVar15;
          pdVar9[4] = dVar45;
          pdVar9[3] = (double)CONCAT44(uVar43,0x3f800000);
          pdVar9[2] = dVar49;
          pdVar9 = pdVar9 + 1;
          *pdVar9 = dVar30;
        }
        *(undefined4 *)((int)pdVar9 + -4) = uVar4;
        uVar6 = 1;
      }
      else {
        if (in_FPSCR_SZ == '\0') {
          uVar6 = *(undefined4 *)((int)pdVar10 + 4);
          *(undefined4 *)((int)puVar11 + -0x34) = *(undefined4 *)pdVar10;
          *(undefined4 *)((int)puVar11 + -0x38) = uVar6;
          *(undefined4 *)((int)puVar11 + -0x3c) = uVar43;
          *(float *)((int)puVar11 + -0x40) = fVar40;
          *(float *)((int)puVar11 + -0x44) = fVar18;
          uVar6 = *(undefined4 *)((int)pdVar10 + 0xc);
          *(undefined4 *)((int)puVar11 + -0x54) = *(undefined4 *)(pdVar10 + 1);
          *(undefined4 *)((int)puVar11 + -0x58) = uVar6;
          *(undefined4 *)((int)puVar11 + -0x5c) = uVar38;
          *(float *)((int)puVar11 + -0x60) = fVar34;
          *(float *)((int)puVar11 + -100) = fVar36;
          uVar6 = *(undefined4 *)((int)pdVar10 + 0x14);
          *(undefined4 *)((int)puVar11 + -0x74) = *(undefined4 *)(pdVar10 + 2);
          *(undefined4 *)((int)puVar11 + -0x78) = uVar6;
          *(undefined4 *)((int)puVar11 + -0x7c) = uVar33;
          *(float *)((int)puVar11 + -0x80) = fVar29;
          *(float *)((int)puVar11 + -0x84) = fVar31;
          uVar6 = *(undefined4 *)((int)pdVar10 + 0x1c);
          *(undefined4 *)((int)puVar11 + -0x94) = *(undefined4 *)(pdVar10 + 3);
          *(undefined4 *)((int)puVar11 + -0x98) = uVar6;
          *(undefined4 *)((int)puVar11 + -0x9c) = uVar23;
          *(float *)((int)puVar11 + -0xa0) = fVar19;
          puVar12 = (undefined1 *)((int)puVar11 + -0xa4);
          *(float *)((int)puVar11 + -0xa4) = fVar21;
        }
        else {
          dVar50 = pdVar10[1];
          *(double *)((int)puVar11 + -0x38) = *pdVar10;
          *(double *)((int)puVar11 + -0x40) = dVar50;
          *(double *)((int)puVar11 + -0x48) = dVar24;
          *(double *)((int)puVar11 + -0x50) = dVar49;
          *(double *)((int)puVar11 + -0x58) = dVar30;
          dVar24 = pdVar10[3];
          *(double *)((int)puVar11 + -0x6c) = pdVar10[2];
          *(double *)((int)puVar11 + -0x74) = dVar24;
          *(double *)((int)puVar11 + -0x7c) = in_xd10;
          *(double *)((int)puVar11 + -0x84) = dVar47;
          *(double *)((int)puVar11 + -0x8c) = dVar15;
          dVar15 = pdVar10[5];
          *(double *)((int)puVar11 + -0xa0) = pdVar10[4];
          *(double *)((int)puVar11 + -0xa8) = dVar15;
          *(double *)((int)puVar11 + -0xb0) = dVar35;
          *(double *)((int)puVar11 + -0xb8) = dVar46;
          *(double *)((int)puVar11 + -0xc0) = dVar16;
          dVar15 = pdVar10[7];
          *(double *)((int)puVar11 + -0xd4) = pdVar10[6];
          *(double *)((int)puVar11 + -0xdc) = dVar15;
          *(double *)((int)puVar11 + -0xe4) = dVar26;
          *(double *)((int)puVar11 + -0xec) = dVar45;
          puVar12 = (undefined1 *)((int)puVar11 + -0xf4);
          *(double *)((int)puVar11 + -0xf4) = dVar17;
        }
        *(undefined4 *)(puVar12 + -8) = in_PR;
        FUN_8c257be8(bVar7,puVar12 + -4);
        uVar6 = 1;
      }
    }
    else {
      uVar6 = 0;
    }
  }
  return uVar6;
}

__asm__(".globl _FUN_8c2578ac\n.set _FUN_8c2578ac, _FUN_8c2578ac_def\n");
