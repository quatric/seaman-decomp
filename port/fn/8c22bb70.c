#include "../decls.h"
double * FUN_8c22bb70_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,double *ar7)

{
  short sVar1;
  short sVar2;
  bool bVar3;
  uint uVar4;
  double *pdVar5;
  short *psVar6;
  undefined1 *ar5_00;
  double *pdVar7;
  undefined1 *ar6_00;
  undefined1 *ar7_00;
  int iVar8;
  int iVar9;
  int iVar10;
  double *pdVar11;
  short *psVar12;
  int iVar13;
  double *pdVar14;
  double *pdVar15;
  float fVar16;
  float fVar17;
  double in_dr0;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  float fVar22;
  undefined8 in_dr2;
  double dVar23;
  double dVar24;
  ulonglong uVar25;
  undefined8 uVar26;
  double dVar27;
  ulonglong in_dr4;
  undefined4 uVar28;
  double in_dr6;
  double dVar29;
  double in_dr8;
  undefined8 in_dr10;
  double in_dr12;
  double in_dr14;
  double in_xd0;
  double in_xd2;
  double in_xd4;
  double in_xd6;
  undefined8 in_xd8;
  undefined8 in_xd10;
  double in_xd12;
  undefined8 in_xd14;
  bool bVar30;
  undefined4 in_PR;
  char in_FPSCR_PR = 0;
  char in_FPSCR_SZ = 0;
  undefined1 auStack_3c [16];
  double dStack_2c;
  undefined8 uStack_24;
  double dVar18;
  
  uVar21 = (undefined4)((ulonglong)in_dr14 >> 0x20);
  uVar19 = (undefined4)((ulonglong)in_dr12 >> 0x20);
  if (in_FPSCR_SZ == '\0') {
    uStack_24 = CONCAT44(SUB84(in_dr14,0),(undefined4)uStack_24);
                    
    (*(uint*)((uchar*)&uStack_24+0)) = uVar21;
    pdVar15 = &dStack_2c;
    dStack_2c = (double)CONCAT44(SUB84(in_dr12,0),uVar19);
  }
  else {
    pdVar15 = (double *)auStack_3c;
    uStack_24 = in_xd14;
    dStack_2c = in_dr14;
  }
  *(undefined4 *)((int)pdVar15 + -4) = in_PR;
  *(undefined4 *)((int)pdVar15 + -0xdc) = ar4;
  *(undefined4 *)((int)pdVar15 + -0xd0) = ar5;
  *(undefined4 *)((int)pdVar15 + -200) = ar6;
  uVar28 = (undefined4)(in_dr4 >> 0x20);
  uVar20 = (undefined4)((ulonglong)in_dr0 >> 0x20);
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)((int)pdVar15 + -0xc4) = uVar28;
    *(int *)((int)pdVar15 + -0xd8) = (int)in_dr4;
    *(int *)((int)pdVar15 + -0x60) = SUB84(in_dr14,0);
    *(undefined4 *)((int)pdVar15 + -100) = uVar21;
    *(int *)((int)pdVar15 + -0x68) = SUB84(in_dr12,0);
    *(undefined4 *)((int)pdVar15 + -0x6c) = uVar19;
    *(int *)((int)pdVar15 + -0x70) = (int)in_dr10;
    *(int *)((int)pdVar15 + -0x74) = (int)((ulonglong)in_dr10 >> 0x20);
    *(int *)((int)pdVar15 + -0x78) = SUB84(in_dr8,0);
    *(int *)((int)pdVar15 + -0x7c) = (int)((ulonglong)in_dr8 >> 0x20);
    *(int *)((int)pdVar15 + -0x80) = SUB84(in_dr6,0);
    *(int *)((int)pdVar15 + -0x84) = (int)((ulonglong)in_dr6 >> 0x20);
    *(int *)((int)pdVar15 + -0x88) = (int)in_dr4;
    *(undefined4 *)((int)pdVar15 + -0x8c) = uVar28;
    *(int *)((int)pdVar15 + -0x90) = (int)in_dr2;
    *(int *)((int)pdVar15 + -0x94) = (int)((ulonglong)in_dr2 >> 0x20);
    *(int *)((int)pdVar15 + -0x98) = SUB84(in_dr0,0);
    *(undefined4 *)((int)pdVar15 + -0x9c) = uVar20;
  }
  else {
    *(ulonglong *)((int)pdVar15 + -0xc4) = in_dr4;
    *(double *)((int)pdVar15 + -0xd8) = in_xd4;
    *(undefined8 *)((int)pdVar15 + -100) = in_xd14;
    *(double *)((int)pdVar15 + -0x6c) = in_dr14;
    *(double *)((int)pdVar15 + -0x74) = in_xd12;
    *(double *)((int)pdVar15 + -0x7c) = in_dr12;
    *(undefined8 *)((int)pdVar15 + -0x84) = in_xd10;
    *(undefined8 *)((int)pdVar15 + -0x8c) = in_dr10;
    *(undefined8 *)((int)pdVar15 + -0x94) = in_xd8;
    *(double *)((int)pdVar15 + -0x9c) = in_dr8;
    *(double *)((int)pdVar15 + -0xa4) = in_xd6;
    *(double *)((int)pdVar15 + -0xac) = in_dr6;
    *(double *)((int)pdVar15 + -0xb4) = in_xd4;
    *(ulonglong *)((int)pdVar15 + -0xbc) = in_dr4;
    *(double *)((int)pdVar15 + -0xc4) = in_xd2;
    *(undefined8 *)((int)pdVar15 + -0xcc) = in_dr2;
    *(double *)((int)pdVar15 + -0xd4) = in_xd0;
    *(double *)((int)pdVar15 + -0xdc) = in_dr0;
  }
  ar6_00 = &DAT_8c4ab208;
  ar7_00 = &DAT_8c4ab204;
  pdVar11 = (double *)((int)pdVar15 + -0x1c);
  pdVar5 = (double *)((int)pdVar15 + -0x18);
  *(double **)((int)pdVar15 + -0xbc) = pdVar11;
  if (in_FPSCR_SZ == '\0') {
    dVar23 = (double)CONCAT44(_DAT_8c4ab1f8,_DAT_8c4ab208);
    in_dr0 = (double)CONCAT44(uVar20,_DAT_8c4ab1fc);
  }
  else {
    in_xd2 = (double)CONCAT44((*(uint *)0x8c4ab20c),_DAT_8c4ab208);
    dVar23 = (double)CONCAT44(_DAT_8c4ab1fc,_DAT_8c4ab1f8);
    in_xd0 = (double)CONCAT44(_DAT_8c4ab200,_DAT_8c4ab1fc);
  }
  pdVar14 = (double *)((int)pdVar15 + -0x14);
  if (in_FPSCR_PR == '\0') {
    dVar23 = (double)CONCAT44((float)((ulonglong)dVar23 >> 0x20) * SUB84(dVar23,0),SUB84(dVar23,0));
  }
  else {
    dVar23 = dVar23 * dVar23;
  }
  if (in_FPSCR_SZ == '\0') {
    dVar23 = (double)CONCAT44((int)((ulonglong)dVar23 >> 0x20),_DAT_8c4ab204);
  }
  else {
    in_xd2 = (double)CONCAT44(_DAT_8c4ab208,_DAT_8c4ab204);
  }
  if (in_FPSCR_PR == '\0') {
    fVar16 = SUB84(in_dr0,0) * SUB84(dVar23,0);
    dVar18 = (double)CONCAT44((int)((ulonglong)in_dr0 >> 0x20),fVar16);
    dVar23 = (double)CONCAT44((float)((ulonglong)dVar23 >> 0x20) - fVar16,SUB84(dVar23,0));
  }
  else {
    dVar18 = in_dr0 * dVar23;
    dVar23 = dVar23 - dVar18;
  }
  if (in_FPSCR_SZ == '\0') {
    *(int *)pdVar11 = (int)((ulonglong)dVar23 >> 0x20);
  }
  else {
    *pdVar11 = dVar23;
  }
  *(double **)((int)pdVar15 + -0xc0) = pdVar5;
  if (in_FPSCR_SZ == '\0') {
    dVar23 = (double)CONCAT44(_DAT_8c4ab1fc,_DAT_8c4ab200);
    dVar18 = (double)CONCAT44((int)((ulonglong)dVar18 >> 0x20),_DAT_8c4ab208);
  }
  else {
    dVar23 = (double)CONCAT44(_DAT_8c4ab200,_DAT_8c4ab1fc);
    in_xd2 = (double)CONCAT44(_DAT_8c4ab204,_DAT_8c4ab200);
    in_xd0 = (double)CONCAT44((*(uint *)0x8c4ab20c),_DAT_8c4ab208);
  }
  if (in_FPSCR_PR == '\0') {
    dVar23 = (double)CONCAT44((float)((ulonglong)dVar23 >> 0x20) * SUB84(dVar23,0),SUB84(dVar23,0));
  }
  else {
    dVar23 = dVar23 * dVar23;
  }
  if (in_FPSCR_SZ == '\0') {
    dVar23 = (double)CONCAT44((int)((ulonglong)dVar23 >> 0x20),_DAT_8c4ab1f4);
  }
  else {
    in_xd2 = (double)CONCAT44(_DAT_8c4ab1f8,_DAT_8c4ab1f4);
  }
  if (in_FPSCR_PR == '\0') {
    fVar16 = SUB84(dVar18,0) * SUB84(dVar23,0);
    dVar18 = (double)CONCAT44((int)((ulonglong)dVar18 >> 0x20),fVar16);
    dVar23 = (double)CONCAT44((float)((ulonglong)dVar23 >> 0x20) - fVar16,SUB84(dVar23,0));
  }
  else {
    dVar18 = dVar18 * dVar23;
    dVar23 = dVar23 - dVar18;
  }
  if (in_FPSCR_SZ == '\0') {
    *(int *)pdVar5 = (int)((ulonglong)dVar23 >> 0x20);
  }
  else {
    *pdVar5 = dVar23;
  }
  pdVar5 = (double *)((int)pdVar15 + -0x5c);
  dVar23 = (double)(in_dr4 & 0xffffffff);
  *(double **)((int)pdVar15 + -0xb8) = pdVar14;
  if (in_FPSCR_SZ == '\0') {
    dVar24 = (double)CONCAT44(_DAT_8c4ab204,_DAT_8c4ab1f4);
    dVar18 = (double)CONCAT44((int)((ulonglong)dVar18 >> 0x20),_DAT_8c4ab1f8);
  }
  else {
    dVar24 = (double)CONCAT44(_DAT_8c4ab208,_DAT_8c4ab204);
    in_xd2 = (double)CONCAT44(_DAT_8c4ab1f8,_DAT_8c4ab1f4);
    in_xd0 = (double)CONCAT44(_DAT_8c4ab1fc,_DAT_8c4ab1f8);
  }
  if (in_FPSCR_PR == '\0') {
    dVar24 = (double)CONCAT44((float)((ulonglong)dVar24 >> 0x20) * SUB84(dVar24,0),SUB84(dVar24,0));
  }
  else {
    dVar24 = dVar24 * dVar24;
  }
  if (in_FPSCR_SZ == '\0') {
    dVar24 = (double)CONCAT44((int)((ulonglong)dVar24 >> 0x20),_DAT_8c4ab200);
  }
  else {
    in_xd2 = (double)CONCAT44(_DAT_8c4ab204,_DAT_8c4ab200);
  }
  if (in_FPSCR_PR == '\0') {
    fVar16 = SUB84(dVar18,0) * SUB84(dVar24,0);
    dVar18 = (double)(ulonglong)(uint)fVar16;
    dVar24 = (double)CONCAT44((float)((ulonglong)dVar24 >> 0x20) - fVar16,SUB84(dVar24,0));
  }
  else {
    dVar18 = dVar18 * dVar24;
    dVar24 = dVar24 - dVar18;
  }
  uVar19 = SUB84(dVar18,0);
  uVar21 = (undefined4)((ulonglong)dVar24 >> 0x20);
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)pdVar14 = uVar21;
  }
  else {
    *pdVar14 = dVar24;
  }
  *(double **)((int)pdVar15 + -0xcc) = pdVar5;
  if (in_FPSCR_SZ == '\0') {
    uVar20 = *(undefined4 *)*(double **)((int)pdVar15 + -0xbc);
    dVar24 = (double)CONCAT44(uVar21,uVar20);
    *(undefined4 *)pdVar5 = uVar20;
  }
  else {
    in_xd2 = **(double **)((int)pdVar15 + -0xbc);
    *pdVar5 = in_xd2;
  }
  pdVar5 = (double *)((int)pdVar15 + -0x58);
  *(double **)((int)pdVar15 + -0xbc) = pdVar5;
  if (in_FPSCR_SZ == '\0') {
    uVar21 = *(undefined4 *)*(double **)((int)pdVar15 + -0xc0);
    dVar24 = (double)CONCAT44((int)((ulonglong)dVar24 >> 0x20),uVar21);
    *(undefined4 *)pdVar5 = uVar21;
  }
  else {
    in_xd2 = **(double **)((int)pdVar15 + -0xc0);
    *pdVar5 = in_xd2;
  }
  pdVar5 = (double *)((int)pdVar15 + -0x54);
  *(double **)((int)pdVar15 + -0xc0) = pdVar5;
  if (in_FPSCR_SZ == '\0') {
    uVar21 = *(undefined4 *)*(double **)((int)pdVar15 + -0xb8);
    dVar24 = (double)CONCAT44((int)((ulonglong)dVar24 >> 0x20),uVar21);
    *(undefined4 *)pdVar5 = uVar21;
    *(undefined4 *)((int)pdVar15 + -0x50) = 0;
  }
  else {
    in_xd2 = **(double **)((int)pdVar15 + -0xb8);
    *pdVar5 = in_xd2;
    *(double *)((int)pdVar15 + -0x50) = dVar23;
  }
  pdVar5 = (double *)((int)pdVar15 + -0x4c);
  *(double **)((int)pdVar15 + -0xb8) = pdVar5;
  if (in_FPSCR_SZ == '\0') {
    dVar24 = (double)CONCAT44((int)((ulonglong)dVar24 >> 0x20),_DAT_8c4ab1f4);
  }
  else {
    in_xd2 = (double)CONCAT44(_DAT_8c4ab1f8,_DAT_8c4ab1f4);
  }
  if (in_FPSCR_SZ == '\0') {
    *(float *)pdVar5 = -SUB84(dVar24,0);
  }
  else {
    *pdVar5 = in_xd2;
  }
  pdVar5 = (double *)((int)pdVar15 + -0x48);
  *(double **)((int)pdVar15 + -0xa4) = pdVar5;
  fVar16 = _DAT_8c4ab1f8;
  if (in_FPSCR_SZ != '\0') {
    in_xd2 = (double)CONCAT44(_DAT_8c4ab1fc,_DAT_8c4ab1f8);
    fVar16 = -SUB84(dVar24,0);
  }
  if (in_FPSCR_SZ == '\0') {
    *(float *)pdVar5 = -fVar16;
  }
  else {
    *pdVar5 = in_xd2;
  }
  pdVar5 = (double *)((int)pdVar15 + -0x44);
  *(double **)((int)pdVar15 + -0xa8) = pdVar5;
  fVar22 = _DAT_8c4ab1fc;
  if (in_FPSCR_SZ != '\0') {
    in_xd2 = (double)CONCAT44(_DAT_8c4ab200,_DAT_8c4ab1fc);
    fVar22 = -fVar16;
  }
  if (in_FPSCR_SZ == '\0') {
    *(float *)pdVar5 = -fVar22;
    *(undefined4 *)((int)pdVar15 + -0x40) = 0;
  }
  else {
    *pdVar5 = in_xd2;
    *(double *)((int)pdVar15 + -0x40) = dVar23;
  }
  pdVar5 = (double *)((int)pdVar15 + -0x3c);
  *(double **)((int)pdVar15 + -0xa0) = pdVar5;
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)pdVar5 = _DAT_8c4ab200;
  }
  else {
    in_xd2 = (double)CONCAT44(_DAT_8c4ab204,_DAT_8c4ab200);
    *pdVar5 = in_xd2;
  }
  pdVar5 = (double *)((int)pdVar15 + -0x38);
  *(double **)((int)pdVar15 + -0xac) = pdVar5;
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)pdVar5 = _DAT_8c4ab204;
  }
  else {
    in_xd2 = (double)CONCAT44(_DAT_8c4ab208,_DAT_8c4ab204);
    *pdVar5 = in_xd2;
  }
  pdVar5 = (double *)((int)pdVar15 + -0x34);
  *(double **)((int)pdVar15 + -0xb0) = pdVar5;
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)pdVar5 = _DAT_8c4ab208;
    *(undefined4 *)((int)pdVar15 + -0x30) = 0;
    *(undefined4 *)((int)pdVar15 + -0x2c) = 0;
  }
  else {
    in_xd2 = (double)CONCAT44((*(uint *)0x8c4ab20c),_DAT_8c4ab208);
    *pdVar5 = in_xd2;
    *(double *)((int)pdVar15 + -0x30) = dVar23;
    *(double *)((int)pdVar15 + -0x2c) = dVar23;
  }
  ar5_00 = (undefined1 *)((int)pdVar15 + -0x9c);
  dVar18 = (double)CONCAT44((int)((ulonglong)dVar24 >> 0x20),0x3f800000);
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)((int)pdVar15 + -0x28) = 0;
    *(undefined4 *)((int)pdVar15 + -0x24) = 0;
    *(undefined4 *)((int)pdVar15 + -0x20) = 0x3f800000;
  }
  else {
    *(double *)((int)pdVar15 + -0x28) = dVar23;
    *(double *)((int)pdVar15 + -0x24) = dVar23;
    *(double *)((int)pdVar15 + -0x20) = in_xd2;
  }
  FUN_8c255d6c((undefined1 *)((int)pdVar15 + -0x5c),ar5_00,&DAT_8c4ab208,&DAT_8c4ab204,
               *(undefined4 *)((int)pdVar15 + -0xdc));
  if (in_FPSCR_SZ == '\0') {
    dVar24 = (double)CONCAT44(_DAT_8c4ab19c,uVar19);
    dVar18 = (double)CONCAT44((int)((ulonglong)dVar18 >> 0x20),
                              *(undefined4 *)*(double **)((int)pdVar15 + -0xbc));
  }
  else {
    dVar24 = (double)CONCAT44(_DAT_8c4ab1a0,_DAT_8c4ab19c);
    in_xd2 = **(double **)((int)pdVar15 + -0xbc);
  }
  if (in_FPSCR_PR == '\0') {
    fVar16 = SUB84(dVar18,0) * (float)((ulonglong)dVar24 >> 0x20);
  }
  else {
    fVar16 = SUB84(dVar18 * dVar24,0);
  }
  if (in_FPSCR_SZ == '\0') {
    uVar25 = CONCAT44((int)**(ulonglong **)((int)pdVar15 + -0xcc),fVar16);
    fVar16 = SUB84(dVar24,0);
    fVar22 = _DAT_8c4ab198;
  }
  else {
    uVar25 = **(ulonglong **)((int)pdVar15 + -0xcc);
    fVar16 = _DAT_8c4ab198;
    fVar22 = _DAT_8c4ab19c;
  }
  if (in_FPSCR_PR == '\0') {
    uVar25 = (ulonglong)(uint)(fVar22 * (float)(uVar25 >> 0x20) + (float)uVar25);
  }
  if (in_FPSCR_SZ == '\0') {
    dVar18 = (double)CONCAT44(*(undefined4 *)*(double **)((int)pdVar15 + -0xc0),(int)uVar25);
    fVar22 = _DAT_8c4ab1a0;
  }
  else {
    dVar18 = **(double **)((int)pdVar15 + -0xc0);
    fVar16 = _DAT_8c4ab1a0;
    fVar22 = _DAT_8c4ab1a4;
  }
  pdVar5 = (double *)((int)pdVar15 + -0x10);
  if (in_FPSCR_PR == '\0') {
    fVar17 = (float)((ulonglong)dVar18 >> 0x20);
    dVar18 = (double)CONCAT44(fVar17,fVar22 * fVar17 + SUB84(dVar18,0));
  }
  if (in_FPSCR_SZ == '\0') {
    *(int *)pdVar5 = SUB84(dVar18,0);
  }
  else {
    *pdVar5 = in_xd2;
  }
  if (in_FPSCR_SZ == '\0') {
    dVar24 = (double)CONCAT44(_DAT_8c4ab19c,fVar16);
    dVar18 = (double)CONCAT44((int)((ulonglong)dVar18 >> 0x20),
                              *(undefined4 *)*(double **)((int)pdVar15 + -0xa4));
  }
  else {
    dVar24 = (double)CONCAT44(_DAT_8c4ab1a0,_DAT_8c4ab19c);
    in_xd2 = **(double **)((int)pdVar15 + -0xa4);
  }
  if (in_FPSCR_PR == '\0') {
    fVar16 = SUB84(dVar18,0) * (float)((ulonglong)dVar24 >> 0x20);
  }
  else {
    fVar16 = SUB84(dVar18 * dVar24,0);
  }
  if (in_FPSCR_SZ == '\0') {
    uVar25 = CONCAT44((int)**(ulonglong **)((int)pdVar15 + -0xb8),fVar16);
    fVar16 = SUB84(dVar24,0);
    fVar22 = _DAT_8c4ab198;
  }
  else {
    uVar25 = **(ulonglong **)((int)pdVar15 + -0xb8);
    fVar16 = _DAT_8c4ab198;
    fVar22 = _DAT_8c4ab19c;
  }
  if (in_FPSCR_PR == '\0') {
    uVar25 = (ulonglong)(uint)(fVar22 * (float)(uVar25 >> 0x20) + (float)uVar25);
  }
  if (in_FPSCR_SZ == '\0') {
    dVar18 = (double)CONCAT44(*(undefined4 *)*(double **)((int)pdVar15 + -0xa8),(int)uVar25);
    fVar22 = _DAT_8c4ab1a0;
  }
  else {
    dVar18 = **(double **)((int)pdVar15 + -0xa8);
    fVar16 = _DAT_8c4ab1a0;
    fVar22 = _DAT_8c4ab1a4;
  }
  if (in_FPSCR_PR == '\0') {
    fVar17 = (float)((ulonglong)dVar18 >> 0x20);
    dVar18 = (double)CONCAT44(fVar17,fVar22 * fVar17 + SUB84(dVar18,0));
  }
  if (in_FPSCR_SZ == '\0') {
    *(int *)((int)pdVar15 + -0xc) = SUB84(dVar18,0);
  }
  else {
    *(double *)((int)pdVar15 + -0xc) = in_xd2;
  }
  if (in_FPSCR_SZ == '\0') {
    dVar24 = (double)CONCAT44(_DAT_8c4ab19c,fVar16);
    dVar18 = (double)CONCAT44((int)((ulonglong)dVar18 >> 0x20),
                              *(undefined4 *)*(double **)((int)pdVar15 + -0xac));
  }
  else {
    dVar24 = (double)CONCAT44(_DAT_8c4ab1a0,_DAT_8c4ab19c);
    in_xd2 = **(double **)((int)pdVar15 + -0xac);
  }
  if (in_FPSCR_PR == '\0') {
    fVar16 = SUB84(dVar18,0) * (float)((ulonglong)dVar24 >> 0x20);
  }
  else {
    fVar16 = SUB84(dVar18 * dVar24,0);
  }
  if (in_FPSCR_SZ == '\0') {
    uVar25 = CONCAT44((int)**(ulonglong **)((int)pdVar15 + -0xa0),fVar16);
    fVar16 = _DAT_8c4ab198;
  }
  else {
    uVar25 = **(ulonglong **)((int)pdVar15 + -0xa0);
    fVar16 = _DAT_8c4ab19c;
  }
  if (in_FPSCR_PR == '\0') {
    uVar25 = (ulonglong)(uint)(fVar16 * (float)(uVar25 >> 0x20) + (float)uVar25);
  }
  if (in_FPSCR_SZ == '\0') {
    dVar18 = (double)((ulonglong)(uint)_DAT_8c4ab1a0 << 0x20);
    uVar26 = CONCAT44(*(undefined4 *)*(undefined8 **)((int)pdVar15 + -0xb0),(int)uVar25);
  }
  else {
    dVar18 = (double)CONCAT44(_DAT_8c4ab1a4,_DAT_8c4ab1a0);
    uVar26 = **(undefined8 **)((int)pdVar15 + -0xb0);
  }
  if (in_FPSCR_PR == '\0') {
    fVar16 = (float)((ulonglong)uVar26 >> 0x20);
    uVar26 = CONCAT44(fVar16,(float)((ulonglong)dVar18 >> 0x20) * fVar16 + (float)uVar26);
  }
  if (in_FPSCR_SZ == '\0') {
    *(int *)((int)pdVar15 + -8) = (int)uVar26;
  }
  else {
    *(double *)((int)pdVar15 + -8) = in_xd2;
  }
  FUN_8c25ce48(pdVar5,ar5_00,ar6_00,ar7_00,*(undefined4 *)((int)pdVar15 + -0xdc));
  _DAT_8c4aa38c = 0xff000000;
  _DAT_8c4aa388 = FUN_8c221778(pdVar5,ar5_00,ar6_00,ar7_00);
  uVar4 = *(uint *)((int)pdVar15 + -200);
  *(uint *)((int)pdVar15 + -200) = *(uint *)((int)pdVar15 + -200) & 0x3fff;
  iVar9 = 0;
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)((int)pdVar15 + -0xb4) = 0x3f800000;
  }
  else {
    *(double *)((int)pdVar15 + -0xb4) = in_xd2;
  }
  iVar10 = 0;
  if ((_DAT_8c4aa4f0 & 0x80000000) != 0) {
    if (in_FPSCR_SZ == '\0') {
      *(undefined4 *)((int)pdVar15 + -0xb4) = 0xbf800000;
    }
    else {
      *(double *)((int)pdVar15 + -0xb4) = in_xd2;
    }
  }
  *(uint *)((int)pdVar15 + -0xcc) = (uVar4 >> 0xe & 3) << 1;
  do {
    fVar16 = SUB84(in_dr14,0);
    psVar12 = *(short **)((int)pdVar15 + -0xdc);
    *(short **)((int)pdVar15 + -0xdc) = psVar12 + 1;
    psVar6 = *(short **)((int)pdVar15 + -0xdc);
    iVar13 = (int)*psVar12;
    *(short **)((int)pdVar15 + -0xdc) = psVar6 + 1;
    pdVar5 = (double *)(*psVar6 * 0x20 + *(int *)((int)pdVar15 + -0xd0));
    if (in_FPSCR_SZ == '\0') {
      fVar16 = *(float *)((int)pdVar15 + -0xb4);
    }
    if (iVar13 < 0) {
      fVar16 = -fVar16;
      iVar13 = -iVar13;
    }
    psVar6 = *(short **)((int)pdVar15 + -0xdc);
    iVar10 = iVar10 + iVar13;
    *(short **)((int)pdVar15 + -0xdc) = psVar6 + 1;
    sVar1 = *psVar6;
    iVar13 = iVar13 + -2;
    if (in_FPSCR_SZ == '\0') {
      in_dr6 = (double)CONCAT44(*(undefined4 *)((int)pdVar15 + -0xd8),SUB84(in_dr6,0));
    }
    else {
      in_dr6 = *(double *)((int)pdVar15 + -0xd8);
    }
    iVar8 = 0;
    psVar6 = *(short **)((int)pdVar15 + -0xdc);
    *(short **)((int)pdVar15 + -0xdc) = psVar6 + 1;
    sVar2 = *psVar6;
    psVar6 = *(short **)((int)pdVar15 + -0xdc);
    dVar24 = in_xd2;
    if (in_FPSCR_SZ == '\0') {
      dVar24 = (double)CONCAT44((float)(int)sVar1,SUB84(dVar23,0));
    }
    *(short **)((int)pdVar15 + -0xdc) = psVar6 + 1;
    fVar22 = (float)((ulonglong)in_dr6 >> 0x20);
    if (in_FPSCR_PR == '\0') {
      dVar24 = (double)CONCAT44((float)((ulonglong)dVar24 >> 0x20) * fVar22,SUB84(dVar24,0));
    }
    else {
      dVar24 = dVar24 * in_dr6;
    }
    dVar23 = in_xd2;
    if (in_FPSCR_SZ == '\0') {
      dVar24 = (double)CONCAT44((int)((ulonglong)dVar24 >> 0x20),(float)(int)sVar2);
      dVar23 = in_xd4;
    }
    in_xd4 = dVar23;
    if (in_FPSCR_PR == '\0') {
      dVar23 = (double)CONCAT44((int)((ulonglong)dVar24 >> 0x20),SUB84(dVar24,0) * fVar22);
    }
    else {
      dVar23 = dVar24 * in_dr6;
    }
    pdVar11 = (double *)(*psVar6 * 0x20 + *(int *)((int)pdVar15 + -0xd0));
    psVar6 = *(short **)((int)pdVar15 + -0xdc);
    *(short **)((int)pdVar15 + -0xdc) = psVar6 + 1;
    sVar1 = *psVar6;
    psVar6 = *(short **)((int)pdVar15 + -0xdc);
    *(short **)((int)pdVar15 + -0xdc) = psVar6 + 1;
    dVar24 = in_xd2;
    if (in_FPSCR_SZ == '\0') {
      in_dr12 = (double)CONCAT44((int)((ulonglong)in_dr12 >> 0x20),(float)(int)sVar1);
      dVar24 = in_xd12;
    }
    if (in_FPSCR_PR == '\0') {
      in_dr12 = (double)(ulonglong)(uint)(SUB84(in_dr12,0) * fVar22);
    }
    else {
      in_dr12 = in_dr12 * in_dr6;
    }
    dVar27 = in_xd2;
    if (in_FPSCR_SZ == '\0') {
      dVar27 = (double)CONCAT44((float)(int)*psVar6,fVar16);
    }
    dVar29 = in_xd0;
    if (in_FPSCR_PR == '\0') {
      in_dr14 = (double)CONCAT44((float)((ulonglong)dVar27 >> 0x20) * fVar22,SUB84(dVar27,0));
    }
    else {
      in_dr14 = dVar27 * in_dr6;
    }
    do {
      psVar6 = *(short **)((int)pdVar15 + -0xdc);
      *(short **)((int)pdVar15 + -0xdc) = psVar6 + 1;
      pdVar14 = (double *)(*psVar6 * 0x20 + *(int *)((int)pdVar15 + -0xd0));
      psVar6 = *(short **)((int)pdVar15 + -0xdc);
      *(short **)((int)pdVar15 + -0xdc) = psVar6 + 1;
      if (in_FPSCR_SZ == '\0') {
        fVar16 = *(float *)((int)pdVar15 + -0xd8);
      }
      else {
        fVar16 = (float)((ulonglong)*(undefined8 *)((int)pdVar15 + -0xd8) >> 0x20);
      }
      fVar22 = (float)(int)*psVar6;
      dVar27 = (double)CONCAT44(fVar16,fVar22);
      if (in_FPSCR_PR == '\0') {
        dVar27 = (double)CONCAT44(fVar16,fVar22 * fVar16);
      }
      else {
        dVar27 = dVar27 * dVar27;
      }
      if (in_FPSCR_SZ == '\0') {
        *(int *)((int)pdVar15 + -0xd4) = SUB84(dVar27,0);
      }
      else {
        *(double *)((int)pdVar15 + -0xd4) = in_xd2;
      }
      psVar6 = *(short **)((int)pdVar15 + -0xdc);
      fVar22 = (float)((ulonglong)dVar27 >> 0x20);
      *(short **)((int)pdVar15 + -0xdc) = psVar6 + 1;
      uVar19 = (undefined4)((ulonglong)dVar18 >> 0x20);
      fVar16 = (float)(int)*psVar6;
      dVar18 = (double)CONCAT44(uVar19,fVar16);
      dVar27 = dVar29;
      if (in_FPSCR_SZ == '\0') {
        dVar27 = (double)CONCAT44(fVar16,SUB84(in_dr12,0));
      }
      if (in_FPSCR_PR == '\0') {
        in_dr12 = (double)CONCAT44((float)((ulonglong)dVar27 >> 0x20) * fVar22,SUB84(dVar27,0));
      }
      else {
        in_dr12 = dVar27 * (double)CONCAT44(fVar22,0x3f800000);
      }
      if (in_FPSCR_SZ == '\0') {
        dVar27 = (double)CONCAT44(*(undefined4 *)pdVar5,0x3f800000);
      }
      else {
        dVar27 = *pdVar5;
      }
      bVar3 = false;
      if (in_FPSCR_PR != '\0' || (float)((ulonglong)dVar27 >> 0x20) <= SUB84(dVar27,0)) {
LAB_8c22be86:
        bVar3 = true;
        in_dr6 = (double)CONCAT44(0x3f800000,SUB84(in_dr6,0));
        in_xd0 = dVar29;
      }
      else {
        if (in_FPSCR_SZ == '\0') {
          dVar27 = (double)CONCAT44(*(undefined4 *)pdVar11,SUB84(dVar27,0));
        }
        else {
          dVar27 = *pdVar11;
        }
        if (in_FPSCR_PR != '\0' || (float)((ulonglong)dVar27 >> 0x20) <= SUB84(dVar27,0))
        goto LAB_8c22be86;
        if (in_FPSCR_SZ == '\0') {
          fVar16 = *(float *)pdVar14;
        }
        else {
          fVar16 = (float)((ulonglong)*pdVar14 >> 0x20);
        }
        dVar27 = (double)CONCAT44(fVar16,0x3f800000);
        if (in_FPSCR_PR != '\0' || fVar16 <= 1.0) goto LAB_8c22be86;
        if (in_FPSCR_SZ == '\0') {
          fVar16 = *(float *)((int)pdVar11 + 4);
          dVar27 = (double)CONCAT44(fVar16,*(undefined4 *)((int)pdVar5 + 4));
          in_dr8 = (double)CONCAT44(fVar16,SUB84(in_dr8,0));
        }
        else {
          dVar27 = *(double *)((int)pdVar11 + 4);
          in_xd2 = *(double *)((int)pdVar5 + 4);
          fVar16 = (float)((ulonglong)dVar27 >> 0x20);
          in_dr8 = dVar27;
        }
        if (in_FPSCR_PR == '\0') {
          dVar27 = (double)CONCAT44((float)((ulonglong)dVar27 >> 0x20) - SUB84(dVar27,0),
                                    SUB84(dVar27,0));
        }
        else {
          dVar27 = dVar27 - dVar27;
        }
        if (in_FPSCR_SZ == '\0') {
          dVar27 = (double)CONCAT44((int)((ulonglong)dVar27 >> 0x20),*(undefined4 *)(pdVar14 + 1));
          in_dr6 = (double)CONCAT44((int)((ulonglong)in_dr6 >> 0x20),*(undefined4 *)(pdVar11 + 1));
        }
        else {
          in_xd2 = pdVar14[1];
          in_xd6 = pdVar11[1];
        }
        fVar22 = SUB84(in_dr6,0);
        if (in_FPSCR_PR == '\0') {
          dVar27 = (double)CONCAT44((int)((ulonglong)dVar27 >> 0x20),SUB84(dVar27,0) - fVar22);
        }
        else {
          dVar27 = dVar27 - in_dr6;
        }
        in_xd0 = in_xd6;
        if (in_FPSCR_SZ == '\0') {
          dVar18 = (double)CONCAT44(uVar19,fVar22);
          in_xd0 = dVar29;
        }
        if (in_FPSCR_PR == '\0') {
          dVar27 = (double)CONCAT44((float)((ulonglong)dVar27 >> 0x20) * SUB84(dVar27,0),
                                    SUB84(dVar27,0));
        }
        else {
          dVar27 = dVar27 * dVar27;
        }
        if (in_FPSCR_SZ == '\0') {
          dVar27 = (double)CONCAT44((int)((ulonglong)dVar27 >> 0x20),*(undefined4 *)(pdVar5 + 1));
        }
        else {
          in_xd2 = pdVar5[1];
        }
        if (in_FPSCR_PR == '\0') {
          dVar18 = (double)CONCAT44((int)((ulonglong)dVar18 >> 0x20),
                                    SUB84(dVar18,0) - SUB84(dVar27,0));
        }
        else {
          dVar18 = dVar18 - dVar27;
        }
        if (in_FPSCR_SZ == '\0') {
          dVar27 = (double)CONCAT44((int)((ulonglong)dVar27 >> 0x20),
                                    *(undefined4 *)((int)pdVar14 + 4));
        }
        else {
          in_xd2 = *(double *)((int)pdVar14 + 4);
        }
        if (in_FPSCR_PR == '\0') {
          fVar16 = SUB84(dVar27,0) - fVar16;
          fVar17 = SUB84(dVar18,0) * fVar16;
          dVar18 = (double)CONCAT44((int)((ulonglong)dVar18 >> 0x20),fVar17);
          dVar27 = (double)CONCAT44((float)((ulonglong)dVar27 >> 0x20) - fVar17,fVar16);
        }
        else {
          dVar18 = dVar18 * (dVar27 - in_dr8);
          dVar27 = (dVar27 - in_dr8) - dVar18;
        }
        dVar29 = dVar27;
        if (in_FPSCR_SZ == '\0') {
          dVar29 = (double)CONCAT44((int)((ulonglong)dVar27 >> 0x20),fVar22);
        }
        if (in_FPSCR_PR == '\0') {
          in_dr6 = (double)CONCAT44((float)((ulonglong)dVar29 >> 0x20) * SUB84(in_dr14,0),
                                    SUB84(dVar29,0));
        }
        else {
          in_dr6 = dVar29 * in_dr14;
        }
      }
      if (in_FPSCR_PR == '\0') {
        bVar30 = (float)((ulonglong)in_dr6 >> 0x20) < 0.0;
      }
      else {
        bVar30 = in_dr6 < (double)((ulonglong)dVar27 & 0xffffffff00000000);
      }
      uVar21 = (undefined4)((ulonglong)in_dr14 >> 0x20);
      uVar19 = SUB84(in_dr12,0);
      if (bVar30) {
        if (iVar8 == 0) {
          if (in_FPSCR_SZ == '\0') {
            in_dr8 = (double)CONCAT44(*(undefined4 *)((int)pdVar5 + 4),SUB84(in_dr8,0));
            pdVar7 = pdVar5 + 1;
          }
          else {
            in_dr8 = *(double *)((int)pdVar5 + 4);
            in_xd6 = *(double *)((int)pdVar5 + 0xc);
            pdVar7 = (double *)((int)pdVar5 + 0x14);
          }
          dVar27 = *pdVar7;
          *(undefined4 *)((int)ar7 + 0x1c) = _DAT_8c4aa388;
          *(undefined4 *)(ar7 + 3) = _DAT_8c4aa38c;
          if (in_FPSCR_SZ == '\0') {
            *(int *)((int)ar7 + 0x14) = SUB84(dVar23,0);
            *(int *)(ar7 + 2) = (int)((ulonglong)dVar23 >> 0x20);
            *(int *)((int)ar7 + 0xc) = (int)((ulonglong)dVar27 >> 0x20);
            *(int *)(ar7 + 1) = SUB84(dVar27,0);
            pdVar7 = (double *)((int)ar7 + 4);
            *(int *)pdVar7 = (int)((ulonglong)in_dr8 >> 0x20);
          }
          else {
            ar7[2] = in_xd4;
            ar7[1] = dVar23;
            *ar7 = dVar27;
            ar7[-1] = in_xd6;
            pdVar7 = ar7 + -2;
            *pdVar7 = in_dr8;
          }
          *(undefined4 *)((int)pdVar7 + -4) = 0xe0000000;
          iVar8 = 1;
          ar7 = (double *)((int)pdVar7 + 0x1c);
        }
        if (in_FPSCR_SZ == '\0') {
          in_dr8 = (double)CONCAT44(*(undefined4 *)((int)pdVar11 + 4),SUB84(in_dr8,0));
          pdVar7 = pdVar11 + 1;
        }
        else {
          in_dr8 = *(double *)((int)pdVar11 + 4);
          in_xd6 = *(double *)((int)pdVar11 + 0xc);
          pdVar7 = (double *)((int)pdVar11 + 0x14);
        }
        in_dr6 = *pdVar7;
        *(undefined4 *)((int)ar7 + 0x1c) = _DAT_8c4aa388;
        *(undefined4 *)(ar7 + 3) = _DAT_8c4aa38c;
        if (in_FPSCR_SZ == '\0') {
          *(undefined4 *)((int)ar7 + 0x14) = uVar21;
          *(undefined4 *)(ar7 + 2) = uVar19;
          *(int *)((int)ar7 + 0xc) = (int)((ulonglong)in_dr6 >> 0x20);
          *(int *)(ar7 + 1) = SUB84(in_dr6,0);
          pdVar7 = (double *)((int)ar7 + 4);
          *(int *)pdVar7 = (int)((ulonglong)in_dr8 >> 0x20);
        }
        else {
          ar7[2] = in_dr14;
          ar7[1] = dVar24;
          *ar7 = in_dr6;
          ar7[-1] = in_xd6;
          pdVar7 = ar7 + -2;
          *pdVar7 = in_dr8;
        }
        *(undefined4 *)((int)pdVar7 + -4) = 0xe0000000;
        ar7 = (double *)((int)pdVar7 + 0x1c);
        iVar8 = iVar8 + 1;
      }
      else if (iVar8 != 0) {
        if (in_FPSCR_SZ == '\0') {
          in_dr8 = (double)CONCAT44(*(undefined4 *)((int)pdVar11 + 4),SUB84(in_dr8,0));
          pdVar7 = pdVar11 + 1;
        }
        else {
          in_dr8 = *(double *)((int)pdVar11 + 4);
          in_xd6 = *(double *)((int)pdVar11 + 0xc);
          pdVar7 = (double *)((int)pdVar11 + 0x14);
        }
        in_dr6 = *pdVar7;
        *(undefined4 *)((int)ar7 + 0x1c) = _DAT_8c4aa388;
        *(undefined4 *)(ar7 + 3) = _DAT_8c4aa38c;
        if (in_FPSCR_SZ == '\0') {
          *(undefined4 *)((int)ar7 + 0x14) = uVar21;
          *(undefined4 *)(ar7 + 2) = uVar19;
          *(int *)((int)ar7 + 0xc) = (int)((ulonglong)in_dr6 >> 0x20);
          *(int *)(ar7 + 1) = SUB84(in_dr6,0);
          pdVar7 = (double *)((int)ar7 + 4);
          *(int *)pdVar7 = (int)((ulonglong)in_dr8 >> 0x20);
        }
        else {
          ar7[2] = in_dr14;
          ar7[1] = dVar24;
          *ar7 = in_dr6;
          ar7[-1] = in_xd6;
          pdVar7 = ar7 + -2;
          *pdVar7 = in_dr8;
        }
        *(undefined4 *)((int)pdVar7 + -4) = 0xf0000000;
        iVar9 = iVar9 + iVar8 + 1;
        iVar8 = 0;
        ar7 = (double *)((int)pdVar7 + 0x1c);
      }
      if (bVar3) {
        if (in_FPSCR_SZ == '\0') {
          fVar16 = *(float *)pdVar5;
        }
        else {
          fVar16 = (float)((ulonglong)*pdVar5 >> 0x20);
        }
        if (in_FPSCR_PR != '\0' || fVar16 <= 1.0) {
          if (in_FPSCR_SZ == '\0') {
            dVar27 = (double)CONCAT44(*(undefined4 *)pdVar11,0x3f800000);
          }
          else {
            dVar27 = *pdVar11;
          }
          if (in_FPSCR_PR != '\0' || (float)((ulonglong)dVar27 >> 0x20) <= SUB84(dVar27,0)) {
            if (in_FPSCR_SZ == '\0') {
              fVar16 = *(float *)pdVar14;
            }
            else {
              fVar16 = (float)((ulonglong)*pdVar14 >> 0x20);
            }
            if (in_FPSCR_PR != '\0' || fVar16 <= 1.0) goto LAB_8c22bfa8;
          }
        }
        if (in_FPSCR_SZ == '\0') {
          in_dr8 = (double)((ulonglong)in_dr12 >> 0x20);
          in_dr6 = (double)CONCAT44(uVar19,uVar21);
        }
        else {
          in_dr8 = *(double *)((int)pdVar15 + -0xd4);
          in_dr6 = dVar24;
          in_xd6 = in_dr14;
        }
        ar7 = (double *)FUN_8c22c058(pdVar5,pdVar11,pdVar14,ar7);
      }
LAB_8c22bfa8:
      *(int *)((int)pdVar15 + -0xdc) =
           *(int *)((int)pdVar15 + -0xdc) + *(int *)((int)pdVar15 + -0xcc);
      if (in_FPSCR_SZ == '\0') {
        uVar19 = SUB84(in_dr12,0);
        in_dr12 = (double)CONCAT44((int)((ulonglong)in_dr12 >> 0x20),
                                   *(undefined4 *)((int)pdVar15 + -0xd4));
        in_xd12 = dVar24;
        dVar24 = (double)CONCAT44(uVar19,SUB84(dVar23,0));
      }
      else {
        in_xd12 = *(double *)((int)pdVar15 + -0xd4);
      }
      iVar13 = iVar13 + -1;
      fVar16 = SUB84(in_dr14,0);
      uVar21 = (undefined4)((ulonglong)in_dr14 >> 0x20);
      uVar19 = (undefined4)((ulonglong)in_dr12 >> 0x20);
      in_dr14 = in_dr12;
      dVar23 = dVar24;
      dVar27 = (double)CONCAT44(uVar21,-fVar16);
      if (in_FPSCR_SZ == '\0') {
        in_dr14 = (double)CONCAT44(uVar19,-fVar16);
        dVar23 = (double)CONCAT44((int)((ulonglong)dVar24 >> 0x20),uVar21);
        dVar27 = in_xd4;
      }
      in_xd4 = dVar27;
      pdVar5 = pdVar11;
      pdVar11 = pdVar14;
      dVar29 = in_xd0;
      dVar24 = in_xd12;
    } while (iVar13 != 0);
    if (iVar8 != 0) {
      if (in_FPSCR_SZ == '\0') {
        in_dr6 = (double)CONCAT44(*(undefined4 *)(pdVar14 + 1),SUB84(in_dr6,0));
        dVar23 = (double)CONCAT44(*(undefined4 *)((int)pdVar14 + 0xc),
                                  *(undefined4 *)((int)pdVar14 + 4));
      }
      else {
        in_xd4 = *(double *)((int)pdVar14 + 4);
        in_dr6 = *(double *)((int)pdVar14 + 0xc);
        dVar23 = *(double *)((int)pdVar14 + 0x14);
      }
      *(undefined4 *)((int)ar7 + 0x1c) = _DAT_8c4aa388;
      *(undefined4 *)(ar7 + 3) = _DAT_8c4aa38c;
      if (in_FPSCR_SZ == '\0') {
        *(undefined4 *)((int)ar7 + 0x14) = uVar19;
        *(undefined4 *)(ar7 + 2) = *(undefined4 *)((int)pdVar15 + -0xd4);
        *(int *)((int)ar7 + 0xc) = (int)((ulonglong)dVar23 >> 0x20);
        *(int *)(ar7 + 1) = (int)((ulonglong)in_dr6 >> 0x20);
        pdVar5 = (double *)((int)ar7 + 4);
        *(int *)pdVar5 = SUB84(dVar23,0);
      }
      else {
        ar7[2] = in_dr12;
        in_xd2 = *(double *)((int)pdVar15 + -0xd4);
        ar7[1] = in_xd2;
        *ar7 = dVar23;
        ar7[-1] = in_dr6;
        pdVar5 = ar7 + -2;
        *pdVar5 = in_xd4;
      }
      *(undefined4 *)((int)pdVar5 + -4) = 0xf0000000;
      iVar9 = iVar9 + iVar8 + 1;
      ar7 = (double *)((int)pdVar5 + 0x1c);
    }
    iVar13 = *(int *)((int)pdVar15 + -200);
    *(int *)((int)pdVar15 + -200) = iVar13 + -1;
    if (iVar13 + -1 == 0) {
      _DAT_8c4aa520 = _DAT_8c4aa520 + iVar9;
      _DAT_8c4aa51c = _DAT_8c4aa51c + iVar10;
      return ar7;
    }
  } while( true );
}

__asm__(".globl _FUN_8c22bb70\n.set _FUN_8c22bb70, _FUN_8c22bb70_def\n");
