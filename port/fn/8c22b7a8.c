#include "../decls.h"
double * FUN_8c22b7a8_def(short *ar4,int ar5,uint ar6,double *ar7)

{
  double *pdVar1;
  double *pdVar2;
  undefined4 uVar3;
  int iVar4;
  double *pdVar5;
  int iVar6;
  undefined1 *ar5_00;
  int iVar7;
  undefined1 *ar6_00;
  int iVar8;
  undefined1 *ar7_00;
  int iVar9;
  uint uVar10;
  short *psVar11;
  short *psVar12;
  int iVar13;
  int iVar14;
  undefined1 *puVar15;
  float fVar16;
  double in_dr0;
  undefined4 uVar18;
  undefined4 uVar19;
  float fVar20;
  float fVar21;
  undefined8 in_dr2;
  double dVar22;
  ulonglong uVar23;
  float fVar25;
  double dVar24;
  ulonglong in_dr4;
  double dVar26;
  double in_dr6;
  double in_dr8;
  double in_dr10;
  double dVar27;
  undefined8 in_dr12;
  double dVar28;
  undefined8 in_dr14;
  undefined4 uVar29;
  undefined8 in_xd0;
  double in_xd2;
  double in_xd4;
  double in_xd6;
  undefined8 in_xd8;
  double in_xd10;
  double dVar30;
  undefined8 in_xd12;
  double in_xd14;
  bool bVar31;
  undefined4 in_PR;
  char in_FPSCR_PR = 0;
  char in_FPSCR_SZ = 0;
  undefined1 auStack_30 [8];
  undefined8 uStack_28;
  undefined8 uStack_20;
  double dVar17;
  
  uVar3 = (undefined4)in_dr12;
  if (in_FPSCR_SZ == '\0') {
    uStack_20 = (double)CONCAT44((int)in_dr14,(undefined4)uStack_20);
                    
    (*(uint*)((uchar*)&uStack_20+0)) = uVar3;
    puVar15 = (undefined1 *)((int)&uStack_28 + 4);
    uStack_28 = CONCAT44((int)((ulonglong)in_dr12 >> 0x20),(undefined4)uStack_28);
  }
  else {
    puVar15 = auStack_30;
    uStack_20 = in_xd14;
    uStack_28 = in_xd12;
  }
  *(undefined4 *)(puVar15 + -4) = in_PR;
  uVar18 = (undefined4)in_dr4;
  uVar19 = (undefined4)((ulonglong)in_dr0 >> 0x20);
  uVar29 = (undefined4)((ulonglong)in_dr14 >> 0x20);
  if (in_FPSCR_SZ == '\0') {
    *(int *)(puVar15 + -0x60) = (int)in_dr14;
    *(undefined4 *)(puVar15 + -100) = uVar29;
    *(undefined4 *)(puVar15 + -0x68) = uVar3;
    *(undefined4 *)(puVar15 + -0x6c) = uVar18;
    *(int *)(puVar15 + -0x70) = SUB84(in_dr10,0);
    *(int *)(puVar15 + -0x74) = (int)((ulonglong)in_dr10 >> 0x20);
    *(int *)(puVar15 + -0x78) = SUB84(in_dr8,0);
    *(int *)(puVar15 + -0x7c) = (int)((ulonglong)in_dr8 >> 0x20);
    *(int *)(puVar15 + -0x80) = SUB84(in_dr6,0);
    *(int *)(puVar15 + -0x84) = (int)((ulonglong)in_dr6 >> 0x20);
    *(undefined4 *)(puVar15 + -0x88) = uVar18;
    *(int *)(puVar15 + -0x8c) = (int)(in_dr4 >> 0x20);
    *(int *)(puVar15 + -0x90) = (int)in_dr2;
    *(int *)(puVar15 + -0x94) = (int)((ulonglong)in_dr2 >> 0x20);
    *(int *)(puVar15 + -0x98) = SUB84(in_dr0,0);
    *(undefined4 *)(puVar15 + -0x9c) = uVar19;
    dVar28 = (double)CONCAT44(uVar18,uVar3);
  }
  else {
    *(double *)(puVar15 + -100) = in_xd14;
    *(undefined8 *)(puVar15 + -0x6c) = in_dr14;
    *(undefined8 *)(puVar15 + -0x74) = in_xd12;
    *(double *)(puVar15 + -0x7c) = in_xd4;
    *(double *)(puVar15 + -0x84) = in_xd10;
    *(double *)(puVar15 + -0x8c) = in_dr10;
    *(undefined8 *)(puVar15 + -0x94) = in_xd8;
    *(double *)(puVar15 + -0x9c) = in_dr8;
    *(double *)(puVar15 + -0xa4) = in_xd6;
    *(double *)(puVar15 + -0xac) = in_dr6;
    *(double *)(puVar15 + -0xb4) = in_xd4;
    *(ulonglong *)(puVar15 + -0xbc) = in_dr4;
    *(double *)(puVar15 + -0xc4) = in_xd2;
    *(undefined8 *)(puVar15 + -0xcc) = in_dr2;
    *(undefined8 *)(puVar15 + -0xd4) = in_xd0;
    *(double *)(puVar15 + -0xdc) = in_dr0;
    dVar28 = in_xd4;
  }
  pdVar5 = (double *)(puVar15 + -0x1c);
  ar7_00 = &DAT_8c4ab208;
  ar6_00 = &DAT_8c4ab204;
  *(double **)(puVar15 + -0xc0) = pdVar5;
  if (in_FPSCR_SZ == '\0') {
    dVar22 = (double)CONCAT44(_DAT_8c4ab1f8,_DAT_8c4ab208);
    in_dr0 = (double)CONCAT44(uVar19,_DAT_8c4ab1fc);
  }
  else {
    dVar22 = (double)CONCAT44(_DAT_8c4ab1fc,_DAT_8c4ab1f8);
    in_xd2 = (double)CONCAT44((*(uint *)0x8c4ab20c),_DAT_8c4ab208);
  }
  pdVar2 = (double *)(puVar15 + -0x18);
  pdVar1 = (double *)(puVar15 + -0x14);
  if (in_FPSCR_PR == '\0') {
    dVar22 = (double)CONCAT44((float)((ulonglong)dVar22 >> 0x20) * SUB84(dVar22,0),SUB84(dVar22,0));
  }
  else {
    dVar22 = dVar22 * dVar22;
  }
  if (in_FPSCR_SZ == '\0') {
    dVar22 = (double)CONCAT44((int)((ulonglong)dVar22 >> 0x20),_DAT_8c4ab204);
  }
  else {
    in_xd2 = (double)CONCAT44(_DAT_8c4ab208,_DAT_8c4ab204);
  }
  if (in_FPSCR_PR == '\0') {
    fVar16 = SUB84(in_dr0,0) * SUB84(dVar22,0);
    dVar17 = (double)CONCAT44((int)((ulonglong)in_dr0 >> 0x20),fVar16);
    dVar22 = (double)CONCAT44((float)((ulonglong)dVar22 >> 0x20) - fVar16,SUB84(dVar22,0));
  }
  else {
    dVar17 = in_dr0 * dVar22;
    dVar22 = dVar22 - dVar17;
  }
  if (in_FPSCR_SZ == '\0') {
    *(int *)pdVar5 = (int)((ulonglong)dVar22 >> 0x20);
  }
  else {
    *pdVar5 = dVar22;
  }
  *(double **)(puVar15 + -0xb4) = pdVar2;
  if (in_FPSCR_SZ == '\0') {
    dVar22 = (double)CONCAT44(_DAT_8c4ab1fc,_DAT_8c4ab200);
    dVar17 = (double)CONCAT44((int)((ulonglong)dVar17 >> 0x20),_DAT_8c4ab208);
  }
  else {
    dVar22 = (double)CONCAT44(_DAT_8c4ab200,_DAT_8c4ab1fc);
    in_xd2 = (double)CONCAT44(_DAT_8c4ab204,_DAT_8c4ab200);
  }
  if (in_FPSCR_PR == '\0') {
    dVar22 = (double)CONCAT44((float)((ulonglong)dVar22 >> 0x20) * SUB84(dVar22,0),SUB84(dVar22,0));
  }
  else {
    dVar22 = dVar22 * dVar22;
  }
  if (in_FPSCR_SZ == '\0') {
    dVar22 = (double)CONCAT44((int)((ulonglong)dVar22 >> 0x20),_DAT_8c4ab1f4);
  }
  else {
    in_xd2 = (double)CONCAT44(_DAT_8c4ab1f8,_DAT_8c4ab1f4);
  }
  if (in_FPSCR_PR == '\0') {
    fVar16 = SUB84(dVar17,0) * SUB84(dVar22,0);
    dVar17 = (double)CONCAT44((int)((ulonglong)dVar17 >> 0x20),fVar16);
    dVar22 = (double)CONCAT44((float)((ulonglong)dVar22 >> 0x20) - fVar16,SUB84(dVar22,0));
  }
  else {
    dVar17 = dVar17 * dVar22;
    dVar22 = dVar22 - dVar17;
  }
  if (in_FPSCR_SZ == '\0') {
    *(int *)pdVar2 = (int)((ulonglong)dVar22 >> 0x20);
  }
  else {
    *pdVar2 = dVar22;
  }
  *(double **)(puVar15 + -0xb8) = pdVar1;
  if (in_FPSCR_SZ == '\0') {
    dVar22 = (double)CONCAT44(_DAT_8c4ab204,_DAT_8c4ab1f4);
  }
  else {
    in_xd2 = (double)CONCAT44(_DAT_8c4ab1f8,_DAT_8c4ab1f4);
    dVar22 = (double)CONCAT44(_DAT_8c4ab208,_DAT_8c4ab204);
  }
  if (in_FPSCR_PR == '\0') {
    dVar22 = (double)CONCAT44((float)((ulonglong)dVar22 >> 0x20) * SUB84(dVar22,0),SUB84(dVar22,0));
  }
  else {
    dVar22 = dVar22 * dVar22;
  }
  if (in_FPSCR_SZ == '\0') {
    dVar17 = (double)CONCAT44((int)((ulonglong)dVar17 >> 0x20),_DAT_8c4ab1f8);
    dVar22 = (double)CONCAT44((int)((ulonglong)dVar22 >> 0x20),_DAT_8c4ab200);
  }
  else {
    in_xd2 = (double)CONCAT44(_DAT_8c4ab204,_DAT_8c4ab200);
  }
  pdVar5 = (double *)(puVar15 + -0x5c);
  dVar26 = (double)(in_dr4 & 0xffffffff);
  if (in_FPSCR_PR == '\0') {
    fVar16 = SUB84(dVar17,0) * SUB84(dVar22,0);
    dVar17 = (double)(ulonglong)(uint)fVar16;
    dVar22 = (double)CONCAT44((float)((ulonglong)dVar22 >> 0x20) - fVar16,SUB84(dVar22,0));
  }
  else {
    dVar17 = dVar17 * dVar22;
    dVar22 = dVar22 - dVar17;
  }
  uVar3 = SUB84(dVar17,0);
  uVar19 = (undefined4)((ulonglong)dVar22 >> 0x20);
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)pdVar1 = uVar19;
  }
  else {
    *pdVar1 = dVar22;
  }
  *(double **)(puVar15 + -0xbc) = pdVar5;
  if (in_FPSCR_SZ == '\0') {
    uVar18 = *(undefined4 *)*(double **)(puVar15 + -0xc0);
    dVar22 = (double)CONCAT44(uVar19,uVar18);
    *(undefined4 *)pdVar5 = uVar18;
  }
  else {
    in_xd2 = **(double **)(puVar15 + -0xc0);
    *pdVar5 = in_xd2;
  }
  pdVar5 = (double *)(puVar15 + -0x58);
  *(double **)(puVar15 + -0xc0) = pdVar5;
  if (in_FPSCR_SZ == '\0') {
    uVar19 = *(undefined4 *)*(double **)(puVar15 + -0xb4);
    dVar22 = (double)CONCAT44((int)((ulonglong)dVar22 >> 0x20),uVar19);
    *(undefined4 *)pdVar5 = uVar19;
  }
  else {
    in_xd2 = **(double **)(puVar15 + -0xb4);
    *pdVar5 = in_xd2;
  }
  pdVar5 = (double *)(puVar15 + -0x54);
  *(double **)(puVar15 + -0xb4) = pdVar5;
  if (in_FPSCR_SZ == '\0') {
    uVar19 = *(undefined4 *)*(double **)(puVar15 + -0xb8);
    dVar22 = (double)CONCAT44((int)((ulonglong)dVar22 >> 0x20),uVar19);
    *(undefined4 *)pdVar5 = uVar19;
    *(undefined4 *)(puVar15 + -0x50) = 0;
  }
  else {
    in_xd2 = **(double **)(puVar15 + -0xb8);
    *pdVar5 = in_xd2;
    *(double *)(puVar15 + -0x50) = dVar26;
  }
  pdVar5 = (double *)(puVar15 + -0x4c);
  *(double **)(puVar15 + -0xa0) = pdVar5;
  if (in_FPSCR_SZ == '\0') {
    dVar22 = (double)CONCAT44((int)((ulonglong)dVar22 >> 0x20),_DAT_8c4ab1f4);
  }
  else {
    in_xd2 = (double)CONCAT44(_DAT_8c4ab1f8,_DAT_8c4ab1f4);
  }
  if (in_FPSCR_SZ == '\0') {
    *(float *)pdVar5 = -SUB84(dVar22,0);
  }
  else {
    *pdVar5 = in_xd2;
  }
  pdVar5 = (double *)(puVar15 + -0x48);
  *(double **)(puVar15 + -0xa4) = pdVar5;
  fVar16 = _DAT_8c4ab1f8;
  if (in_FPSCR_SZ != '\0') {
    in_xd2 = (double)CONCAT44(_DAT_8c4ab1fc,_DAT_8c4ab1f8);
    fVar16 = -SUB84(dVar22,0);
  }
  if (in_FPSCR_SZ == '\0') {
    *(float *)pdVar5 = -fVar16;
  }
  else {
    *pdVar5 = in_xd2;
  }
  pdVar5 = (double *)(puVar15 + -0x44);
  *(double **)(puVar15 + -0xb8) = pdVar5;
  fVar20 = _DAT_8c4ab1fc;
  if (in_FPSCR_SZ != '\0') {
    in_xd2 = (double)CONCAT44(_DAT_8c4ab200,_DAT_8c4ab1fc);
    fVar20 = -fVar16;
  }
  fVar20 = -fVar20;
  if (in_FPSCR_SZ == '\0') {
    *(float *)pdVar5 = fVar20;
    *(undefined4 *)(puVar15 + -0x40) = 0;
  }
  else {
    *pdVar5 = in_xd2;
    *(double *)(puVar15 + -0x40) = dVar26;
  }
  pdVar5 = (double *)(puVar15 + -0x3c);
  *(double **)(puVar15 + -0xac) = pdVar5;
  if (in_FPSCR_SZ == '\0') {
    *(float *)pdVar5 = _DAT_8c4ab200;
    fVar20 = _DAT_8c4ab200;
  }
  else {
    in_xd2 = (double)CONCAT44(_DAT_8c4ab204,_DAT_8c4ab200);
    *pdVar5 = in_xd2;
  }
  pdVar5 = (double *)(puVar15 + -0x38);
  *(double **)(puVar15 + -0xa8) = pdVar5;
  if (in_FPSCR_SZ == '\0') {
    *(float *)pdVar5 = _DAT_8c4ab204;
    fVar20 = _DAT_8c4ab204;
  }
  else {
    in_xd2 = (double)CONCAT44(_DAT_8c4ab208,_DAT_8c4ab204);
    *pdVar5 = in_xd2;
  }
  pdVar5 = (double *)(puVar15 + -0x34);
  *(double **)(puVar15 + -0xb0) = pdVar5;
  if (in_FPSCR_SZ == '\0') {
    *(float *)pdVar5 = _DAT_8c4ab208;
    *(undefined4 *)(puVar15 + -0x30) = 0;
    *(undefined4 *)(puVar15 + -0x2c) = 0;
    fVar20 = _DAT_8c4ab208;
  }
  else {
    in_xd2 = (double)CONCAT44((*(uint *)0x8c4ab20c),_DAT_8c4ab208);
    *pdVar5 = in_xd2;
    *(double *)(puVar15 + -0x30) = dVar26;
    *(double *)(puVar15 + -0x2c) = dVar26;
  }
  dVar22 = (double)CONCAT44((int)((ulonglong)dVar22 >> 0x20),fVar20);
  ar5_00 = puVar15 + -0x9c;
  dVar17 = (double)CONCAT44(uVar29,0x3f800000);
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)(puVar15 + -0x28) = 0;
    *(undefined4 *)(puVar15 + -0x24) = 0;
    *(undefined4 *)(puVar15 + -0x20) = 0x3f800000;
  }
  else {
    *(double *)(puVar15 + -0x28) = dVar26;
    *(double *)(puVar15 + -0x24) = dVar26;
    *(double *)(puVar15 + -0x20) = in_xd14;
  }
  FUN_8c255d6c(puVar15 + -0x5c,ar5_00,&DAT_8c4ab204,&DAT_8c4ab208,*(undefined4 *)(puVar15 + -0xc0));
  if (in_FPSCR_SZ == '\0') {
    dVar27 = (double)CONCAT44(_DAT_8c4ab19c,uVar3);
    dVar22 = (double)CONCAT44((int)((ulonglong)dVar22 >> 0x20),
                              *(undefined4 *)*(double **)(puVar15 + -0xc0));
  }
  else {
    dVar27 = (double)CONCAT44(_DAT_8c4ab1a0,_DAT_8c4ab19c);
    in_xd2 = **(double **)(puVar15 + -0xc0);
  }
  if (in_FPSCR_PR == '\0') {
    fVar16 = SUB84(dVar22,0) * (float)((ulonglong)dVar27 >> 0x20);
  }
  else {
    fVar16 = SUB84(dVar22 * dVar27,0);
  }
  if (in_FPSCR_SZ == '\0') {
    uVar23 = CONCAT44((int)**(ulonglong **)(puVar15 + -0xbc),fVar16);
    fVar16 = SUB84(dVar27,0);
    fVar20 = _DAT_8c4ab198;
  }
  else {
    uVar23 = **(ulonglong **)(puVar15 + -0xbc);
    fVar16 = _DAT_8c4ab198;
    fVar20 = _DAT_8c4ab19c;
  }
  if (in_FPSCR_PR == '\0') {
    uVar23 = (ulonglong)(uint)(fVar20 * (float)(uVar23 >> 0x20) + (float)uVar23);
  }
  if (in_FPSCR_SZ == '\0') {
    dVar22 = (double)CONCAT44(*(undefined4 *)*(double **)(puVar15 + -0xb4),(int)uVar23);
    fVar20 = _DAT_8c4ab1a0;
  }
  else {
    dVar22 = **(double **)(puVar15 + -0xb4);
    fVar16 = _DAT_8c4ab1a0;
    fVar20 = _DAT_8c4ab1a4;
  }
  pdVar5 = (double *)(puVar15 + -0x10);
  if (in_FPSCR_PR == '\0') {
    fVar25 = (float)((ulonglong)dVar22 >> 0x20);
    dVar22 = (double)CONCAT44(fVar25,fVar20 * fVar25 + SUB84(dVar22,0));
  }
  if (in_FPSCR_SZ == '\0') {
    *(int *)pdVar5 = SUB84(dVar22,0);
  }
  else {
    *pdVar5 = in_xd2;
  }
  if (in_FPSCR_SZ == '\0') {
    dVar27 = (double)CONCAT44(_DAT_8c4ab19c,fVar16);
    dVar22 = (double)CONCAT44((int)((ulonglong)dVar22 >> 0x20),
                              *(undefined4 *)*(double **)(puVar15 + -0xa4));
  }
  else {
    dVar27 = (double)CONCAT44(_DAT_8c4ab1a0,_DAT_8c4ab19c);
    in_xd2 = **(double **)(puVar15 + -0xa4);
  }
  if (in_FPSCR_PR == '\0') {
    fVar16 = SUB84(dVar22,0) * (float)((ulonglong)dVar27 >> 0x20);
  }
  else {
    fVar16 = SUB84(dVar22 * dVar27,0);
  }
  if (in_FPSCR_SZ == '\0') {
    uVar23 = CONCAT44((int)**(ulonglong **)(puVar15 + -0xa0),fVar16);
    fVar16 = SUB84(dVar27,0);
    fVar20 = _DAT_8c4ab198;
  }
  else {
    uVar23 = **(ulonglong **)(puVar15 + -0xa0);
    fVar16 = _DAT_8c4ab198;
    fVar20 = _DAT_8c4ab19c;
  }
  if (in_FPSCR_PR == '\0') {
    uVar23 = (ulonglong)(uint)(fVar20 * (float)(uVar23 >> 0x20) + (float)uVar23);
  }
  if (in_FPSCR_SZ == '\0') {
    dVar22 = (double)CONCAT44(*(undefined4 *)*(double **)(puVar15 + -0xb8),(int)uVar23);
    fVar20 = _DAT_8c4ab1a0;
  }
  else {
    dVar22 = **(double **)(puVar15 + -0xb8);
    fVar16 = _DAT_8c4ab1a0;
    fVar20 = _DAT_8c4ab1a4;
  }
  if (in_FPSCR_PR == '\0') {
    fVar25 = (float)((ulonglong)dVar22 >> 0x20);
    dVar22 = (double)CONCAT44(fVar25,fVar20 * fVar25 + SUB84(dVar22,0));
  }
  if (in_FPSCR_SZ == '\0') {
    *(int *)(puVar15 + -0xc) = SUB84(dVar22,0);
  }
  else {
    *(double *)(puVar15 + -0xc) = in_xd2;
  }
  if (in_FPSCR_SZ == '\0') {
    dVar27 = (double)CONCAT44(_DAT_8c4ab19c,fVar16);
    dVar22 = (double)CONCAT44((int)((ulonglong)dVar22 >> 0x20),
                              *(undefined4 *)*(double **)(puVar15 + -0xa8));
  }
  else {
    dVar27 = (double)CONCAT44(_DAT_8c4ab1a0,_DAT_8c4ab19c);
    in_xd2 = **(double **)(puVar15 + -0xa8);
  }
  if (in_FPSCR_PR == '\0') {
    fVar16 = SUB84(dVar22,0) * (float)((ulonglong)dVar27 >> 0x20);
  }
  else {
    fVar16 = SUB84(dVar22 * dVar27,0);
  }
  if (in_FPSCR_SZ == '\0') {
    uVar23 = CONCAT44((int)**(ulonglong **)(puVar15 + -0xac),fVar16);
    fVar16 = SUB84(dVar27,0);
    fVar20 = _DAT_8c4ab198;
  }
  else {
    uVar23 = **(ulonglong **)(puVar15 + -0xac);
    fVar16 = _DAT_8c4ab198;
    fVar20 = _DAT_8c4ab19c;
  }
  if (in_FPSCR_PR == '\0') {
    uVar23 = (ulonglong)(uint)(fVar20 * (float)(uVar23 >> 0x20) + (float)uVar23);
  }
  if (in_FPSCR_SZ == '\0') {
    uVar23 = CONCAT44((int)**(ulonglong **)(puVar15 + -0xb0),(int)uVar23);
    dVar22 = (double)CONCAT44(_DAT_8c4ab1a0,fVar16);
  }
  else {
    uVar23 = **(ulonglong **)(puVar15 + -0xb0);
    dVar22 = (double)CONCAT44(_DAT_8c4ab1a4,_DAT_8c4ab1a0);
  }
  if (in_FPSCR_PR == '\0') {
    uVar23 = (ulonglong)
             (uint)((float)((ulonglong)dVar22 >> 0x20) * (float)(uVar23 >> 0x20) + (float)uVar23);
  }
  if (in_FPSCR_SZ == '\0') {
    *(int *)(puVar15 + -8) = (int)uVar23;
  }
  else {
    *(double *)(puVar15 + -8) = in_xd2;
  }
  FUN_8c25ce48(pdVar5,ar5_00,ar6_00,ar7_00,*(undefined4 *)(puVar15 + -0xc0));
  *(undefined4 *)(puVar15 + -0xc0) = 0xff000000;
  uVar3 = FUN_8c221778(pdVar5,ar5_00,ar6_00,ar7_00);
  *(undefined4 *)(puVar15 + -0xbc) = uVar3;
  iVar13 = 0;
  uVar10 = ar6 & 0x3fff;
  iVar7 = 0;
  if (in_FPSCR_SZ == '\0') {
    dVar28 = (double)CONCAT44((int)((ulonglong)dVar28 >> 0x20),SUB84(dVar17,0));
  }
  if ((_DAT_8c4aa4f0 & 0x80000000) != 0) {
    dVar28 = (double)CONCAT44((int)((ulonglong)dVar28 >> 0x20),0xbf800000);
  }
  *(uint *)(puVar15 + -0xb8) = (ar6 >> 0xe & 3) << 1;
  do {
    iVar14 = (int)*ar4;
    iVar6 = ar4[1] * 0x20 + ar5;
    if (in_FPSCR_SZ == '\0') {
      in_dr8 = (double)CONCAT44((int)((ulonglong)in_dr8 >> 0x20),SUB84(dVar28,0));
    }
    if (iVar14 < 0) {
      in_dr8 = (double)CONCAT44((int)((ulonglong)in_dr8 >> 0x20),-SUB84(in_dr8,0));
      iVar14 = -iVar14;
    }
    iVar7 = iVar7 + iVar14;
    iVar14 = iVar14 + -2;
    iVar4 = 0;
    psVar11 = ar4 + 5;
    dVar27 = in_xd2;
    if (in_FPSCR_SZ == '\0') {
      dVar27 = (double)CONCAT44((float)(int)ar4[2],SUB84(in_dr6,0));
    }
    fVar16 = (float)((ulonglong)dVar28 >> 0x20);
    if (in_FPSCR_PR == '\0') {
      in_dr6 = (double)CONCAT44((float)((ulonglong)dVar27 >> 0x20) * fVar16,SUB84(dVar27,0));
    }
    else {
      in_dr6 = dVar27 * dVar28;
    }
    iVar8 = ar4[4] * 0x20 + ar5;
    dVar27 = in_xd2;
    if (in_FPSCR_SZ == '\0') {
      dVar26 = (double)CONCAT44((int)((ulonglong)dVar26 >> 0x20),(float)(int)ar4[3]);
      dVar27 = in_xd4;
    }
    in_xd4 = dVar27;
    if (in_FPSCR_PR == '\0') {
      dVar26 = (double)(ulonglong)(uint)(SUB84(dVar26,0) * fVar16);
    }
    else {
      dVar26 = dVar26 * dVar28;
    }
    psVar12 = ar4 + 6;
    ar4 = ar4 + 7;
    dVar27 = in_xd2;
    if (in_FPSCR_SZ == '\0') {
      dVar27 = (double)CONCAT44((float)(int)*psVar11,SUB84(in_dr10,0));
    }
    if (in_FPSCR_PR == '\0') {
      dVar27 = (double)CONCAT44((float)((ulonglong)dVar27 >> 0x20) * fVar16,SUB84(dVar27,0));
    }
    else {
      dVar27 = dVar27 * dVar28;
    }
    dVar30 = in_xd2;
    if (in_FPSCR_SZ == '\0') {
      dVar27 = (double)CONCAT44((int)((ulonglong)dVar27 >> 0x20),(float)(int)*psVar12);
      dVar30 = in_xd10;
    }
    dVar24 = in_xd14;
    if (in_FPSCR_PR == '\0') {
      in_dr10 = (double)CONCAT44((int)((ulonglong)dVar27 >> 0x20),SUB84(dVar27,0) * fVar16);
    }
    else {
      in_dr10 = dVar27 * dVar28;
    }
    do {
      iVar9 = *ar4 * 0x20 + ar5;
      if (in_FPSCR_SZ == '\0') {
        dVar27 = (double)CONCAT44(*(undefined4 *)(iVar8 + 8),SUB84(dVar26,0));
      }
      else {
        dVar27 = *(double *)(iVar8 + 8);
      }
      in_xd14 = in_xd2;
      if (in_FPSCR_SZ == '\0') {
        dVar17 = (double)CONCAT44((int)((ulonglong)dVar17 >> 0x20),(float)(int)ar4[1]);
        in_xd14 = dVar24;
      }
      if (in_FPSCR_PR == '\0') {
        dVar17 = (double)CONCAT44((int)((ulonglong)dVar17 >> 0x20),SUB84(dVar17,0) * fVar16);
      }
      else {
        dVar17 = dVar17 * dVar28;
      }
      if (in_FPSCR_SZ == '\0') {
        in_dr6 = (double)CONCAT44((int)((ulonglong)in_dr6 >> 0x20),*(undefined4 *)(iVar8 + 4));
        dVar24 = (double)CONCAT44(*(undefined4 *)(iVar9 + 4),*(undefined4 *)(iVar6 + 8));
        dVar26 = in_xd2;
        dVar22 = (double)CONCAT44((float)(int)ar4[2],SUB84(dVar22,0));
      }
      else {
        in_xd6 = *(double *)(iVar8 + 4);
        dVar24 = *(double *)(iVar9 + 4);
        dVar26 = *(double *)(iVar6 + 8);
        dVar22 = in_xd2;
      }
      in_xd2 = dVar26;
      fVar20 = (float)((ulonglong)dVar27 >> 0x20);
      fVar25 = SUB84(in_dr6,0);
      if (in_FPSCR_PR == '\0') {
        fVar21 = (SUB84(dVar24,0) - fVar20) * ((float)((ulonglong)dVar24 >> 0x20) - fVar25);
      }
      else {
        dVar26 = (dVar24 - dVar27) - in_dr6;
        fVar21 = SUB84(dVar26 * dVar26,0);
      }
      if (in_FPSCR_SZ == '\0') {
        dVar26 = (double)CONCAT44(*(undefined4 *)(iVar6 + 4),fVar21);
        dVar22 = (double)CONCAT44((int)((ulonglong)dVar22 >> 0x20),*(undefined4 *)(iVar9 + 8));
      }
      else {
        dVar26 = *(double *)(iVar6 + 4);
      }
      if (in_FPSCR_PR == '\0') {
        fVar20 = SUB84(dVar22,0) - fVar20;
        dVar22 = (double)CONCAT44((int)((ulonglong)dVar22 >> 0x20),fVar20);
        fVar21 = ((float)((ulonglong)dVar26 >> 0x20) - fVar25) * fVar20;
        dVar24 = (double)CONCAT44(fVar21,SUB84(dVar26,0) - fVar21);
      }
      else {
        dVar22 = dVar22 - dVar27;
        fVar20 = SUB84(dVar22,0);
        dVar24 = (dVar26 - in_dr6) * dVar22;
        dVar24 = dVar24 - dVar24;
      }
      dVar26 = in_xd2;
      if (in_FPSCR_SZ == '\0') {
        dVar26 = (double)CONCAT44(SUB84(dVar24,0),SUB84(dVar27,0));
      }
      if (in_FPSCR_PR == '\0') {
        dVar26 = (double)CONCAT44((float)((ulonglong)dVar26 >> 0x20) * SUB84(in_dr8,0),
                                  SUB84(dVar26,0));
      }
      else {
        dVar26 = dVar26 * in_dr8;
      }
      if (in_FPSCR_PR == '\0') {
        bVar31 = (float)((ulonglong)dVar26 >> 0x20) < 0.0;
        dVar22 = (double)CONCAT44((float)((ulonglong)dVar22 >> 0x20) * fVar16,fVar20);
      }
      else {
        bVar31 = dVar26 < (double)((ulonglong)dVar24 & 0xffffffff00000000);
        dVar22 = dVar22 * dVar28;
      }
      uVar3 = SUB84(in_dr10,0);
      uVar19 = (undefined4)((ulonglong)in_dr10 >> 0x20);
      if (bVar31) {
        if (iVar4 == 0) {
          if (in_FPSCR_SZ == '\0') {
            in_dr6 = (double)CONCAT44((int)((ulonglong)in_dr6 >> 0x20),*(undefined4 *)(iVar6 + 4));
            in_dr8 = (double)CONCAT44(*(undefined4 *)(iVar6 + 8),SUB84(in_dr8,0));
            dVar26 = (double)CONCAT44(*(undefined4 *)(iVar6 + 0xc),SUB84(dVar26,0));
          }
          else {
            in_xd6 = *(double *)(iVar6 + 4);
            in_dr8 = *(double *)(iVar6 + 0xc);
            dVar26 = *(double *)(iVar6 + 0x14);
          }
          *(undefined4 *)((int)ar7 + 0x1c) = *(undefined4 *)(puVar15 + -0xbc);
          *(undefined4 *)(ar7 + 3) = *(undefined4 *)(puVar15 + -0xc0);
          if (in_FPSCR_SZ == '\0') {
            *(int *)((int)ar7 + 0x14) = SUB84(dVar26,0);
            *(int *)(ar7 + 2) = (int)((ulonglong)in_dr6 >> 0x20);
            *(int *)((int)ar7 + 0xc) = (int)((ulonglong)dVar26 >> 0x20);
            *(int *)(ar7 + 1) = (int)((ulonglong)in_dr8 >> 0x20);
            pdVar5 = (double *)((int)ar7 + 4);
            *(int *)pdVar5 = SUB84(in_dr6,0);
          }
          else {
            ar7[2] = in_xd4;
            ar7[1] = in_dr6;
            *ar7 = dVar26;
            ar7[-1] = in_dr8;
            pdVar5 = ar7 + -2;
            *pdVar5 = in_xd6;
          }
          *(undefined4 *)((int)pdVar5 + -4) = 0xe0000000;
          iVar4 = 1;
          ar7 = (double *)((int)pdVar5 + 0x1c);
        }
        if (in_FPSCR_SZ == '\0') {
          in_dr6 = (double)CONCAT44(*(undefined4 *)(iVar8 + 8),SUB84(in_dr6,0));
          dVar26 = (double)CONCAT44(*(undefined4 *)(iVar8 + 0xc),*(undefined4 *)(iVar8 + 4));
        }
        else {
          in_xd4 = *(double *)(iVar8 + 4);
          in_dr6 = *(double *)(iVar8 + 0xc);
          dVar26 = *(double *)(iVar8 + 0x14);
        }
        *(undefined4 *)((int)ar7 + 0x1c) = *(undefined4 *)(puVar15 + -0xbc);
        *(undefined4 *)(ar7 + 3) = *(undefined4 *)(puVar15 + -0xc0);
        if (in_FPSCR_SZ == '\0') {
          *(undefined4 *)((int)ar7 + 0x14) = uVar3;
          *(undefined4 *)(ar7 + 2) = uVar19;
          *(int *)((int)ar7 + 0xc) = (int)((ulonglong)dVar26 >> 0x20);
          *(int *)(ar7 + 1) = (int)((ulonglong)in_dr6 >> 0x20);
          pdVar5 = (double *)((int)ar7 + 4);
          *(int *)pdVar5 = SUB84(dVar26,0);
        }
        else {
          ar7[2] = dVar30;
          ar7[1] = in_dr10;
          *ar7 = dVar26;
          ar7[-1] = in_dr6;
          pdVar5 = ar7 + -2;
          *pdVar5 = in_xd4;
        }
        *(undefined4 *)((int)pdVar5 + -4) = 0xe0000000;
        ar7 = (double *)((int)pdVar5 + 0x1c);
        iVar4 = iVar4 + 1;
        dVar27 = in_xd4;
      }
      else {
        dVar27 = in_xd4;
        if (iVar4 != 0) {
          if (in_FPSCR_SZ == '\0') {
            in_dr6 = (double)CONCAT44(*(undefined4 *)(iVar8 + 8),fVar25);
            dVar26 = (double)CONCAT44(*(undefined4 *)(iVar8 + 0xc),*(undefined4 *)(iVar8 + 4));
          }
          else {
            dVar27 = *(double *)(iVar8 + 4);
            in_dr6 = *(double *)(iVar8 + 0xc);
            dVar26 = *(double *)(iVar8 + 0x14);
          }
          *(undefined4 *)((int)ar7 + 0x1c) = *(undefined4 *)(puVar15 + -0xbc);
          *(undefined4 *)(ar7 + 3) = *(undefined4 *)(puVar15 + -0xc0);
          if (in_FPSCR_SZ == '\0') {
            *(undefined4 *)((int)ar7 + 0x14) = uVar3;
            *(undefined4 *)(ar7 + 2) = uVar19;
            *(int *)((int)ar7 + 0xc) = (int)((ulonglong)dVar26 >> 0x20);
            *(int *)(ar7 + 1) = (int)((ulonglong)in_dr6 >> 0x20);
            pdVar5 = (double *)((int)ar7 + 4);
            *(int *)pdVar5 = SUB84(dVar26,0);
          }
          else {
            ar7[2] = dVar30;
            ar7[1] = in_dr10;
            *ar7 = dVar26;
            ar7[-1] = in_dr6;
            pdVar5 = ar7 + -2;
            *pdVar5 = dVar27;
          }
          *(undefined4 *)((int)pdVar5 + -4) = 0xf0000000;
          iVar13 = iVar13 + iVar4 + 1;
          iVar4 = 0;
          ar7 = (double *)((int)pdVar5 + 0x1c);
        }
      }
      ar4 = (short *)((int)ar4 + *(int *)(puVar15 + -0xb8) + 6);
      dVar24 = in_xd14;
      if (in_FPSCR_SZ == '\0') {
        dVar24 = (double)CONCAT44(SUB84(dVar17,0),uVar3);
        in_dr10 = (double)CONCAT44(uVar19,SUB84(in_dr6,0));
      }
      in_dr6 = in_dr10;
      in_dr10 = dVar24;
      iVar14 = iVar14 + -1;
      in_xd4 = dVar30;
      if (in_FPSCR_SZ == '\0') {
        dVar26 = (double)CONCAT44((int)((ulonglong)dVar26 >> 0x20),SUB84(in_dr10,0));
        in_xd4 = dVar27;
      }
      in_dr8 = (double)CONCAT44((int)((ulonglong)in_dr8 >> 0x20),-SUB84(in_dr8,0));
      uVar3 = (undefined4)((ulonglong)dVar22 >> 0x20);
      in_xd10 = dVar22;
      if (in_FPSCR_SZ == '\0') {
        in_dr10 = (double)CONCAT44((int)((ulonglong)in_dr10 >> 0x20),uVar3);
        in_xd10 = dVar30;
      }
      iVar6 = iVar8;
      iVar8 = iVar9;
      dVar30 = in_xd10;
      dVar24 = in_xd14;
    } while (iVar14 != 0);
    if (iVar4 != 0) {
      if (in_FPSCR_SZ == '\0') {
        in_dr6 = (double)CONCAT44(*(undefined4 *)(iVar9 + 8),SUB84(in_dr6,0));
        dVar26 = (double)CONCAT44(*(undefined4 *)(iVar9 + 0xc),*(undefined4 *)(iVar9 + 4));
      }
      else {
        in_xd4 = *(double *)(iVar9 + 4);
        in_dr6 = *(double *)(iVar9 + 0xc);
        dVar26 = *(double *)(iVar9 + 0x14);
      }
      *(undefined4 *)((int)ar7 + 0x1c) = *(undefined4 *)(puVar15 + -0xbc);
      *(undefined4 *)(ar7 + 3) = *(undefined4 *)(puVar15 + -0xc0);
      if (in_FPSCR_SZ == '\0') {
        *(undefined4 *)((int)ar7 + 0x14) = uVar3;
        *(int *)(ar7 + 2) = SUB84(dVar17,0);
        *(int *)((int)ar7 + 0xc) = (int)((ulonglong)dVar26 >> 0x20);
        *(int *)(ar7 + 1) = (int)((ulonglong)in_dr6 >> 0x20);
        pdVar5 = (double *)((int)ar7 + 4);
        *(int *)pdVar5 = SUB84(dVar26,0);
      }
      else {
        ar7[2] = dVar22;
        ar7[1] = in_xd14;
        *ar7 = dVar26;
        ar7[-1] = in_dr6;
        pdVar5 = ar7 + -2;
        *pdVar5 = in_xd4;
      }
      *(undefined4 *)((int)pdVar5 + -4) = 0xf0000000;
      iVar13 = iVar13 + iVar4 + 1;
      ar7 = (double *)((int)pdVar5 + 0x1c);
    }
    uVar10 = uVar10 - 1;
  } while (uVar10 != 0);
  _DAT_8c4aa520 = _DAT_8c4aa520 + iVar13;
  _DAT_8c4aa51c = _DAT_8c4aa51c + iVar7;
  return ar7;
}

__asm__(".globl _FUN_8c22b7a8\n.set _FUN_8c22b7a8, _FUN_8c22b7a8_def\n");
