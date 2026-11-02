#include "../decls.h"
double * FUN_8c2163d4_def(short *ar4,int ar5,uint ar6,double *ar7)

{
  undefined4 uVar1;
  double *pdVar2;
  undefined1 *ar5_00;
  int iVar3;
  undefined1 *ar6_00;
  int iVar4;
  undefined1 *ar7_00;
  int iVar5;
  uint uVar6;
  short *psVar7;
  short *psVar8;
  double *pdVar9;
  double *pdVar10;
  undefined1 *puVar11;
  float fVar12;
  double in_dr0;
  undefined4 uVar14;
  undefined4 uVar15;
  float fVar16;
  undefined8 in_dr2;
  double dVar17;
  ulonglong uVar18;
  float fVar19;
  ulonglong in_dr4;
  double dVar20;
  double dVar21;
  double in_dr6;
  double in_dr8;
  undefined4 in_fr11;
  undefined4 in_fr10;
  undefined4 in_fr13;
  undefined4 in_fr12;
  float in_fr15;
  undefined4 in_fr14;
  undefined8 in_xd0;
  double in_xd2;
  double in_xd4;
  double in_xd6;
  undefined8 in_xd8;
  undefined8 in_xd10;
  undefined8 in_xd12;
  undefined4 in_PR;
  char in_FPSCR_PR = 0;
  char in_FPSCR_SZ = 0;
  undefined1 auStack_20 [4];
  undefined1 auStack_1c [4];
  double dVar13;
  
  if (in_FPSCR_SZ == '\0') {
    puVar11 = auStack_1c;
  }
  else {
    puVar11 = auStack_20;
  }
  *(undefined4 *)(puVar11 + -4) = in_PR;
  fVar12 = (float)(in_dr4 >> 0x20);
  uVar1 = (undefined4)((ulonglong)in_dr0 >> 0x20);
  if (in_FPSCR_SZ == '\0') {
    *(float *)(puVar11 + -0x60) = fVar12;
    *(undefined4 *)(puVar11 + -100) = in_fr14;
    *(undefined4 *)(puVar11 + -0x68) = in_fr13;
    *(undefined4 *)(puVar11 + -0x6c) = in_fr12;
    *(undefined4 *)(puVar11 + -0x70) = in_fr11;
    *(undefined4 *)(puVar11 + -0x74) = in_fr10;
    *(int *)(puVar11 + -0x78) = SUB84(in_dr8,0);
    *(int *)(puVar11 + -0x7c) = (int)((ulonglong)in_dr8 >> 0x20);
    *(int *)(puVar11 + -0x80) = SUB84(in_dr6,0);
    *(int *)(puVar11 + -0x84) = (int)((ulonglong)in_dr6 >> 0x20);
    *(int *)(puVar11 + -0x88) = (int)in_dr4;
    *(float *)(puVar11 + -0x8c) = fVar12;
    *(int *)(puVar11 + -0x90) = (int)in_dr2;
    *(int *)(puVar11 + -0x94) = (int)((ulonglong)in_dr2 >> 0x20);
    *(int *)(puVar11 + -0x98) = SUB84(in_dr0,0);
    *(undefined4 *)(puVar11 + -0x9c) = uVar1;
    in_fr15 = fVar12;
  }
  else {
    *(ulonglong *)(puVar11 + -100) = in_dr4;
    *(ulonglong *)(puVar11 + -0x6c) = CONCAT44(in_fr14,in_fr15);
    *(undefined8 *)(puVar11 + -0x74) = in_xd12;
    *(ulonglong *)(puVar11 + -0x7c) = CONCAT44(in_fr12,in_fr13);
    *(undefined8 *)(puVar11 + -0x84) = in_xd10;
    *(ulonglong *)(puVar11 + -0x8c) = CONCAT44(in_fr10,in_fr11);
    *(undefined8 *)(puVar11 + -0x94) = in_xd8;
    *(double *)(puVar11 + -0x9c) = in_dr8;
    *(double *)(puVar11 + -0xa4) = in_xd6;
    *(double *)(puVar11 + -0xac) = in_dr6;
    *(double *)(puVar11 + -0xb4) = in_xd4;
    *(ulonglong *)(puVar11 + -0xbc) = in_dr4;
    *(double *)(puVar11 + -0xc4) = in_xd2;
    *(undefined8 *)(puVar11 + -0xcc) = in_dr2;
    *(undefined8 *)(puVar11 + -0xd4) = in_xd0;
    *(double *)(puVar11 + -0xdc) = in_dr0;
  }
  pdVar2 = (double *)(puVar11 + -0x1c);
  ar6_00 = &DAT_8c4ab1f0;
  ar7_00 = &DAT_8c4ab1ec;
  *(double **)(puVar11 + -0xbc) = pdVar2;
  if (in_FPSCR_SZ == '\0') {
    dVar17 = (double)CONCAT44(_DAT_8c4ab1e0,_DAT_8c4ab1f0);
    in_dr0 = (double)CONCAT44(uVar1,_DAT_8c4ab1e4);
  }
  else {
    dVar17 = (double)CONCAT44(_DAT_8c4ab1e4,_DAT_8c4ab1e0);
    in_xd2 = (double)CONCAT44(_DAT_8c4ab1f4,_DAT_8c4ab1f0);
  }
  pdVar10 = (double *)(puVar11 + -0x18);
  pdVar9 = (double *)(puVar11 + -0x14);
  if (in_FPSCR_PR == '\0') {
    dVar17 = (double)CONCAT44((float)((ulonglong)dVar17 >> 0x20) * SUB84(dVar17,0),SUB84(dVar17,0));
  }
  else {
    dVar17 = dVar17 * dVar17;
  }
  if (in_FPSCR_SZ == '\0') {
    dVar17 = (double)CONCAT44((int)((ulonglong)dVar17 >> 0x20),_DAT_8c4ab1ec);
  }
  else {
    in_xd2 = (double)CONCAT44(_DAT_8c4ab1f0,_DAT_8c4ab1ec);
  }
  if (in_FPSCR_PR == '\0') {
    fVar12 = SUB84(in_dr0,0) * SUB84(dVar17,0);
    dVar13 = (double)CONCAT44((int)((ulonglong)in_dr0 >> 0x20),fVar12);
    dVar17 = (double)CONCAT44((float)((ulonglong)dVar17 >> 0x20) - fVar12,SUB84(dVar17,0));
  }
  else {
    dVar13 = in_dr0 * dVar17;
    dVar17 = dVar17 - dVar13;
  }
  if (in_FPSCR_SZ == '\0') {
    *(int *)pdVar2 = (int)((ulonglong)dVar17 >> 0x20);
  }
  else {
    *pdVar2 = dVar17;
  }
  *(double **)(puVar11 + -0xb8) = pdVar10;
  if (in_FPSCR_SZ == '\0') {
    dVar17 = (double)CONCAT44(_DAT_8c4ab1e4,_DAT_8c4ab1e8);
    dVar13 = (double)CONCAT44((int)((ulonglong)dVar13 >> 0x20),_DAT_8c4ab1f0);
  }
  else {
    dVar17 = (double)CONCAT44(_DAT_8c4ab1e8,_DAT_8c4ab1e4);
    in_xd2 = (double)CONCAT44(_DAT_8c4ab1ec,_DAT_8c4ab1e8);
  }
  if (in_FPSCR_PR == '\0') {
    dVar17 = (double)CONCAT44((float)((ulonglong)dVar17 >> 0x20) * SUB84(dVar17,0),SUB84(dVar17,0));
  }
  else {
    dVar17 = dVar17 * dVar17;
  }
  if (in_FPSCR_SZ == '\0') {
    dVar17 = (double)CONCAT44((int)((ulonglong)dVar17 >> 0x20),_DAT_8c4ab1dc);
  }
  else {
    in_xd2 = (double)CONCAT44(_DAT_8c4ab1e0,_DAT_8c4ab1dc);
  }
  if (in_FPSCR_PR == '\0') {
    fVar12 = SUB84(dVar13,0) * SUB84(dVar17,0);
    dVar13 = (double)CONCAT44((int)((ulonglong)dVar13 >> 0x20),fVar12);
    dVar17 = (double)CONCAT44((float)((ulonglong)dVar17 >> 0x20) - fVar12,SUB84(dVar17,0));
  }
  else {
    dVar13 = dVar13 * dVar17;
    dVar17 = dVar17 - dVar13;
  }
  if (in_FPSCR_SZ == '\0') {
    *(int *)pdVar10 = (int)((ulonglong)dVar17 >> 0x20);
  }
  else {
    *pdVar10 = dVar17;
  }
  *(double **)(puVar11 + -0xb4) = pdVar9;
  if (in_FPSCR_SZ == '\0') {
    dVar17 = (double)CONCAT44(_DAT_8c4ab1ec,_DAT_8c4ab1dc);
  }
  else {
    in_xd2 = (double)CONCAT44(_DAT_8c4ab1e0,_DAT_8c4ab1dc);
    dVar17 = (double)CONCAT44(_DAT_8c4ab1f0,_DAT_8c4ab1ec);
  }
  if (in_FPSCR_PR == '\0') {
    dVar17 = (double)CONCAT44((float)((ulonglong)dVar17 >> 0x20) * SUB84(dVar17,0),SUB84(dVar17,0));
  }
  else {
    dVar17 = dVar17 * dVar17;
  }
  if (in_FPSCR_SZ == '\0') {
    dVar13 = (double)CONCAT44((int)((ulonglong)dVar13 >> 0x20),_DAT_8c4ab1e0);
    dVar17 = (double)CONCAT44((int)((ulonglong)dVar17 >> 0x20),_DAT_8c4ab1e8);
  }
  else {
    in_xd2 = (double)CONCAT44(_DAT_8c4ab1ec,_DAT_8c4ab1e8);
  }
  pdVar2 = (double *)(puVar11 + -0x5c);
  dVar21 = (double)(in_dr4 & 0xffffffff);
  if (in_FPSCR_PR == '\0') {
    fVar12 = SUB84(dVar13,0) * SUB84(dVar17,0);
    dVar13 = (double)(ulonglong)(uint)fVar12;
    dVar17 = (double)CONCAT44((float)((ulonglong)dVar17 >> 0x20) - fVar12,SUB84(dVar17,0));
  }
  else {
    dVar13 = dVar13 * dVar17;
    dVar17 = dVar17 - dVar13;
  }
  uVar1 = SUB84(dVar13,0);
  uVar15 = (undefined4)((ulonglong)dVar17 >> 0x20);
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)pdVar9 = uVar15;
  }
  else {
    *pdVar9 = dVar17;
  }
  *(double **)(puVar11 + -0xc0) = pdVar2;
  if (in_FPSCR_SZ == '\0') {
    uVar14 = *(undefined4 *)*(double **)(puVar11 + -0xbc);
    dVar17 = (double)CONCAT44(uVar15,uVar14);
    *(undefined4 *)pdVar2 = uVar14;
  }
  else {
    in_xd2 = **(double **)(puVar11 + -0xbc);
    *pdVar2 = in_xd2;
  }
  pdVar2 = (double *)(puVar11 + -0x58);
  *(double **)(puVar11 + -0xbc) = pdVar2;
  if (in_FPSCR_SZ == '\0') {
    uVar15 = *(undefined4 *)*(double **)(puVar11 + -0xb8);
    dVar17 = (double)CONCAT44((int)((ulonglong)dVar17 >> 0x20),uVar15);
    *(undefined4 *)pdVar2 = uVar15;
  }
  else {
    in_xd2 = **(double **)(puVar11 + -0xb8);
    *pdVar2 = in_xd2;
  }
  pdVar2 = (double *)(puVar11 + -0x54);
  *(double **)(puVar11 + -0xb8) = pdVar2;
  if (in_FPSCR_SZ == '\0') {
    uVar15 = *(undefined4 *)*(double **)(puVar11 + -0xb4);
    dVar17 = (double)CONCAT44((int)((ulonglong)dVar17 >> 0x20),uVar15);
    *(undefined4 *)pdVar2 = uVar15;
    *(undefined4 *)(puVar11 + -0x50) = 0;
  }
  else {
    in_xd2 = **(double **)(puVar11 + -0xb4);
    *pdVar2 = in_xd2;
    *(double *)(puVar11 + -0x50) = dVar21;
  }
  pdVar2 = (double *)(puVar11 + -0x4c);
  *(double **)(puVar11 + -0xb4) = pdVar2;
  if (in_FPSCR_SZ == '\0') {
    dVar17 = (double)CONCAT44((int)((ulonglong)dVar17 >> 0x20),_DAT_8c4ab1dc);
  }
  else {
    in_xd2 = (double)CONCAT44(_DAT_8c4ab1e0,_DAT_8c4ab1dc);
  }
  if (in_FPSCR_SZ == '\0') {
    *(float *)pdVar2 = -SUB84(dVar17,0);
  }
  else {
    *pdVar2 = in_xd2;
  }
  pdVar2 = (double *)(puVar11 + -0x48);
  *(double **)(puVar11 + -0xa4) = pdVar2;
  fVar12 = _DAT_8c4ab1e0;
  if (in_FPSCR_SZ != '\0') {
    in_xd2 = (double)CONCAT44(_DAT_8c4ab1e4,_DAT_8c4ab1e0);
    fVar12 = -SUB84(dVar17,0);
  }
  if (in_FPSCR_SZ == '\0') {
    *(float *)pdVar2 = -fVar12;
  }
  else {
    *pdVar2 = in_xd2;
  }
  pdVar2 = (double *)(puVar11 + -0x44);
  *(double **)(puVar11 + -0xa8) = pdVar2;
  fVar16 = _DAT_8c4ab1e4;
  if (in_FPSCR_SZ != '\0') {
    in_xd2 = (double)CONCAT44(_DAT_8c4ab1e8,_DAT_8c4ab1e4);
    fVar16 = -fVar12;
  }
  if (in_FPSCR_SZ == '\0') {
    *(float *)pdVar2 = -fVar16;
    *(undefined4 *)(puVar11 + -0x40) = 0;
  }
  else {
    *pdVar2 = in_xd2;
    *(double *)(puVar11 + -0x40) = dVar21;
  }
  pdVar2 = (double *)(puVar11 + -0x3c);
  *(double **)(puVar11 + -0xac) = pdVar2;
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)pdVar2 = _DAT_8c4ab1e8;
  }
  else {
    in_xd2 = (double)CONCAT44(_DAT_8c4ab1ec,_DAT_8c4ab1e8);
    *pdVar2 = in_xd2;
  }
  pdVar2 = (double *)(puVar11 + -0x38);
  *(double **)(puVar11 + -0xa0) = pdVar2;
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)pdVar2 = _DAT_8c4ab1ec;
  }
  else {
    in_xd2 = (double)CONCAT44(_DAT_8c4ab1f0,_DAT_8c4ab1ec);
    *pdVar2 = in_xd2;
  }
  pdVar2 = (double *)(puVar11 + -0x34);
  *(double **)(puVar11 + -0xb0) = pdVar2;
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)pdVar2 = _DAT_8c4ab1f0;
    *(undefined4 *)(puVar11 + -0x30) = 0;
    *(undefined4 *)(puVar11 + -0x2c) = 0;
  }
  else {
    in_xd2 = (double)CONCAT44(_DAT_8c4ab1f4,_DAT_8c4ab1f0);
    *pdVar2 = in_xd2;
    *(double *)(puVar11 + -0x30) = dVar21;
    *(double *)(puVar11 + -0x2c) = dVar21;
  }
  ar5_00 = puVar11 + -0x9c;
  dVar17 = (double)CONCAT44((int)((ulonglong)dVar17 >> 0x20),0x3f800000);
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)(puVar11 + -0x28) = 0;
    *(undefined4 *)(puVar11 + -0x24) = 0;
    *(undefined4 *)(puVar11 + -0x20) = 0x3f800000;
  }
  else {
    *(double *)(puVar11 + -0x28) = dVar21;
    *(double *)(puVar11 + -0x24) = dVar21;
    *(double *)(puVar11 + -0x20) = in_xd2;
  }
  FUN_8c255d6c(puVar11 + -0x5c,ar5_00,&DAT_8c4ab1f0,&DAT_8c4ab1ec,*(undefined4 *)(puVar11 + -0xc0));
  if (in_FPSCR_SZ == '\0') {
    dVar13 = (double)CONCAT44(_DAT_8c4ab15c,uVar1);
    dVar17 = (double)CONCAT44((int)((ulonglong)dVar17 >> 0x20),
                              *(undefined4 *)*(double **)(puVar11 + -0xbc));
  }
  else {
    dVar13 = (double)CONCAT44(_DAT_8c4ab160,_DAT_8c4ab15c);
    in_xd2 = **(double **)(puVar11 + -0xbc);
  }
  if (in_FPSCR_PR == '\0') {
    fVar12 = SUB84(dVar17,0) * (float)((ulonglong)dVar13 >> 0x20);
  }
  else {
    fVar12 = SUB84(dVar17 * dVar13,0);
  }
  if (in_FPSCR_SZ == '\0') {
    uVar18 = CONCAT44((int)**(ulonglong **)(puVar11 + -0xc0),fVar12);
    fVar12 = SUB84(dVar13,0);
    fVar16 = _DAT_8c4ab158;
  }
  else {
    uVar18 = **(ulonglong **)(puVar11 + -0xc0);
    fVar12 = _DAT_8c4ab158;
    fVar16 = _DAT_8c4ab15c;
  }
  if (in_FPSCR_PR == '\0') {
    uVar18 = (ulonglong)(uint)(fVar16 * (float)(uVar18 >> 0x20) + (float)uVar18);
  }
  if (in_FPSCR_SZ == '\0') {
    dVar17 = (double)CONCAT44(*(undefined4 *)*(double **)(puVar11 + -0xb8),(int)uVar18);
    fVar16 = _DAT_8c4ab160;
  }
  else {
    dVar17 = **(double **)(puVar11 + -0xb8);
    fVar12 = _DAT_8c4ab160;
    fVar16 = _DAT_8c4ab164;
  }
  pdVar2 = (double *)(puVar11 + -0x10);
  if (in_FPSCR_PR == '\0') {
    fVar19 = (float)((ulonglong)dVar17 >> 0x20);
    dVar17 = (double)CONCAT44(fVar19,fVar16 * fVar19 + SUB84(dVar17,0));
  }
  if (in_FPSCR_SZ == '\0') {
    *(int *)pdVar2 = SUB84(dVar17,0);
  }
  else {
    *pdVar2 = in_xd2;
  }
  if (in_FPSCR_SZ == '\0') {
    dVar13 = (double)CONCAT44(_DAT_8c4ab15c,fVar12);
    dVar17 = (double)CONCAT44((int)((ulonglong)dVar17 >> 0x20),
                              *(undefined4 *)*(double **)(puVar11 + -0xa4));
  }
  else {
    dVar13 = (double)CONCAT44(_DAT_8c4ab160,_DAT_8c4ab15c);
    in_xd2 = **(double **)(puVar11 + -0xa4);
  }
  if (in_FPSCR_PR == '\0') {
    fVar12 = SUB84(dVar17,0) * (float)((ulonglong)dVar13 >> 0x20);
  }
  else {
    fVar12 = SUB84(dVar17 * dVar13,0);
  }
  if (in_FPSCR_SZ == '\0') {
    uVar18 = CONCAT44((int)**(ulonglong **)(puVar11 + -0xb4),fVar12);
    fVar12 = SUB84(dVar13,0);
    fVar16 = _DAT_8c4ab158;
  }
  else {
    uVar18 = **(ulonglong **)(puVar11 + -0xb4);
    fVar12 = _DAT_8c4ab158;
    fVar16 = _DAT_8c4ab15c;
  }
  if (in_FPSCR_PR == '\0') {
    uVar18 = (ulonglong)(uint)(fVar16 * (float)(uVar18 >> 0x20) + (float)uVar18);
  }
  if (in_FPSCR_SZ == '\0') {
    dVar17 = (double)CONCAT44(*(undefined4 *)*(double **)(puVar11 + -0xa8),(int)uVar18);
    fVar16 = _DAT_8c4ab160;
  }
  else {
    dVar17 = **(double **)(puVar11 + -0xa8);
    fVar12 = _DAT_8c4ab160;
    fVar16 = _DAT_8c4ab164;
  }
  if (in_FPSCR_PR == '\0') {
    fVar19 = (float)((ulonglong)dVar17 >> 0x20);
    dVar17 = (double)CONCAT44(fVar19,fVar16 * fVar19 + SUB84(dVar17,0));
  }
  if (in_FPSCR_SZ == '\0') {
    *(int *)(puVar11 + -0xc) = SUB84(dVar17,0);
  }
  else {
    *(double *)(puVar11 + -0xc) = in_xd2;
  }
  if (in_FPSCR_SZ == '\0') {
    dVar13 = (double)CONCAT44(_DAT_8c4ab15c,fVar12);
    dVar17 = (double)CONCAT44((int)((ulonglong)dVar17 >> 0x20),
                              *(undefined4 *)*(double **)(puVar11 + -0xa0));
  }
  else {
    dVar13 = (double)CONCAT44(_DAT_8c4ab160,_DAT_8c4ab15c);
    in_xd2 = **(double **)(puVar11 + -0xa0);
  }
  if (in_FPSCR_PR == '\0') {
    fVar12 = SUB84(dVar17,0) * (float)((ulonglong)dVar13 >> 0x20);
  }
  else {
    fVar12 = SUB84(dVar17 * dVar13,0);
  }
  if (in_FPSCR_SZ == '\0') {
    uVar18 = CONCAT44((int)**(ulonglong **)(puVar11 + -0xac),fVar12);
    fVar12 = _DAT_8c4ab158;
  }
  else {
    uVar18 = **(ulonglong **)(puVar11 + -0xac);
    fVar12 = _DAT_8c4ab15c;
  }
  if (in_FPSCR_PR == '\0') {
    uVar18 = (ulonglong)(uint)(fVar12 * (float)(uVar18 >> 0x20) + (float)uVar18);
  }
  if (in_FPSCR_SZ == '\0') {
    uVar18 = CONCAT44((int)**(ulonglong **)(puVar11 + -0xb0),(int)uVar18);
    fVar12 = _DAT_8c4ab160;
  }
  else {
    uVar18 = **(ulonglong **)(puVar11 + -0xb0);
    fVar12 = _DAT_8c4ab164;
  }
  if (in_FPSCR_PR == '\0') {
    uVar18 = (ulonglong)(uint)(fVar12 * (float)(uVar18 >> 0x20) + (float)uVar18);
  }
  if (in_FPSCR_SZ == '\0') {
    *(int *)(puVar11 + -8) = (int)uVar18;
  }
  else {
    *(double *)(puVar11 + -8) = in_xd2;
  }
  FUN_8c25ce48(pdVar2,ar5_00,ar6_00,ar7_00,*(undefined4 *)(puVar11 + -0xc0));
  uVar1 = FUN_8c213f28(pdVar2,ar5_00,ar6_00,ar7_00);
  *(uint *)(puVar11 + -0xc0) = (ar6 >> 0xe & 3) << 1;
  uVar6 = ar6 & 0x3fff;
  iVar4 = 0;
  iVar3 = 0;
  do {
    uVar15 = SUB84(dVar21,0);
    iVar5 = (int)*ar4;
    pdVar2 = (double *)(ar4[1] * 0x10 + ar5);
    if (iVar5 < 0) {
      iVar5 = -iVar5;
    }
    dVar17 = in_xd2;
    if (in_FPSCR_SZ == '\0') {
      in_dr6 = (double)CONCAT44((int)((ulonglong)in_dr6 >> 0x20),(float)(int)ar4[2]);
      dVar17 = in_xd6;
    }
    in_xd6 = dVar17;
    if (in_FPSCR_PR == '\0') {
      fVar12 = SUB84(in_dr6,0) * in_fr15;
    }
    else {
      fVar12 = SUB84(in_dr6 * (double)CONCAT44(in_fr14,in_fr15),0);
    }
    dVar17 = in_xd2;
    if (in_FPSCR_SZ == '\0') {
      dVar17 = (double)CONCAT44((float)(int)ar4[3],SUB84(in_dr8,0));
    }
    if (in_FPSCR_PR == '\0') {
      dVar17 = (double)CONCAT44((float)((ulonglong)dVar17 >> 0x20) * in_fr15,SUB84(dVar17,0));
    }
    else {
      dVar17 = dVar17 * (double)CONCAT44(in_fr14,in_fr15);
    }
    if (in_FPSCR_SZ == '\0') {
      uVar15 = *(undefined4 *)pdVar2;
      pdVar2 = (double *)((int)pdVar2 + 4);
    }
    else {
      in_xd4 = *pdVar2;
      pdVar2 = pdVar2 + 1;
    }
    iVar4 = iVar4 + iVar5;
    iVar3 = iVar3 + iVar5;
    if (in_FPSCR_SZ == '\0') {
      dVar13 = (double)CONCAT44(*(undefined4 *)pdVar2,fVar12);
      dVar20 = (double)CONCAT44(*(undefined4 *)((int)pdVar2 + 4),uVar15);
    }
    else {
      dVar13 = *pdVar2;
      dVar20 = pdVar2[1];
    }
    iVar5 = iVar5 + -2;
    psVar7 = ar4 + 5;
    pdVar2 = (double *)(ar4[4] * 0x10 + ar5);
    *(undefined4 *)((int)ar7 + 0x1c) = uVar1;
    *(undefined4 *)(ar7 + 3) = 0xff000000;
    if (in_FPSCR_SZ == '\0') {
      *(int *)((int)ar7 + 0x14) = (int)((ulonglong)dVar17 >> 0x20);
      *(int *)(ar7 + 2) = SUB84(dVar13,0);
      *(int *)((int)ar7 + 0xc) = (int)((ulonglong)dVar20 >> 0x20);
      *(int *)(ar7 + 1) = (int)((ulonglong)dVar13 >> 0x20);
      pdVar9 = (double *)((int)ar7 + 4);
      *(int *)pdVar9 = SUB84(dVar20,0);
    }
    else {
      ar7[2] = dVar17;
      ar7[1] = in_xd6;
      *ar7 = dVar20;
      ar7[-1] = dVar13;
      pdVar9 = ar7 + -2;
      *pdVar9 = in_xd4;
    }
    *(undefined4 *)((int)pdVar9 + -4) = 0xe0000000;
    psVar8 = ar4 + 6;
    pdVar9 = (double *)((int)pdVar9 + 0x1c);
    ar4 = ar4 + 7;
    dVar21 = in_xd2;
    if (in_FPSCR_SZ == '\0') {
      dVar21 = (double)CONCAT44((float)(int)*psVar7,SUB84(dVar20,0));
    }
    if (in_FPSCR_PR == '\0') {
      dVar21 = (double)CONCAT44((float)((ulonglong)dVar21 >> 0x20) * in_fr15,SUB84(dVar21,0));
    }
    else {
      dVar21 = dVar21 * (double)CONCAT44(in_fr14,in_fr15);
    }
    dVar20 = in_xd2;
    if (in_FPSCR_SZ == '\0') {
      dVar20 = (double)CONCAT44((float)(int)*psVar8,SUB84(dVar13,0));
    }
    if (in_FPSCR_PR == '\0') {
      in_dr6 = (double)CONCAT44((float)((ulonglong)dVar20 >> 0x20) * in_fr15,SUB84(dVar20,0));
    }
    else {
      in_dr6 = dVar20 * (double)CONCAT44(in_fr14,in_fr15);
    }
    if (in_FPSCR_SZ == '\0') {
      in_dr8 = (double)CONCAT44(*(undefined4 *)pdVar2,SUB84(dVar17,0));
      dVar21 = (double)CONCAT44((int)((ulonglong)dVar21 >> 0x20),*(undefined4 *)((int)pdVar2 + 4));
      in_dr6 = (double)CONCAT44((int)((ulonglong)in_dr6 >> 0x20),*(undefined4 *)(pdVar2 + 1));
    }
    else {
      in_dr8 = *pdVar2;
      in_xd4 = pdVar2[1];
      in_xd6 = pdVar2[2];
    }
    do {
      psVar7 = ar4 + 1;
      pdVar2 = (double *)(*ar4 * 0x10 + ar5);
      *(undefined4 *)((int)pdVar9 + 0x1c) = uVar1;
      *(undefined4 *)(pdVar9 + 3) = 0xff000000;
      if (in_FPSCR_SZ == '\0') {
        *(int *)((int)pdVar9 + 0x14) = (int)((ulonglong)in_dr6 >> 0x20);
        *(int *)(pdVar9 + 2) = (int)((ulonglong)dVar21 >> 0x20);
        *(int *)((int)pdVar9 + 0xc) = SUB84(in_dr6,0);
        *(int *)(pdVar9 + 1) = SUB84(dVar21,0);
        pdVar10 = (double *)((int)pdVar9 + 4);
        *(int *)pdVar10 = (int)((ulonglong)in_dr8 >> 0x20);
      }
      else {
        pdVar9[2] = in_dr6;
        pdVar9[1] = dVar21;
        *pdVar9 = in_xd6;
        pdVar9[-1] = in_xd4;
        pdVar10 = pdVar9 + -2;
        *pdVar10 = in_dr8;
      }
      *(undefined4 *)((int)pdVar10 + -4) = 0xe0000000;
      psVar8 = ar4 + 2;
      pdVar9 = (double *)((int)pdVar10 + 0x1c);
      ar4 = (short *)((int)ar4 + *(int *)(puVar11 + -0xc0) + 6);
      dVar17 = in_xd2;
      if (in_FPSCR_SZ == '\0') {
        dVar17 = (double)CONCAT44((float)(int)*psVar7,SUB84(dVar21,0));
      }
      if (in_FPSCR_PR == '\0') {
        dVar21 = (double)CONCAT44((float)((ulonglong)dVar17 >> 0x20) * in_fr15,SUB84(dVar17,0));
      }
      else {
        dVar21 = dVar17 * (double)CONCAT44(in_fr14,in_fr15);
      }
      dVar17 = in_xd2;
      if (in_FPSCR_SZ == '\0') {
        dVar17 = (double)CONCAT44((float)(int)*psVar8,SUB84(in_dr6,0));
      }
      if (in_FPSCR_PR == '\0') {
        in_dr6 = (double)CONCAT44((float)((ulonglong)dVar17 >> 0x20) * in_fr15,SUB84(dVar17,0));
      }
      else {
        in_dr6 = dVar17 * (double)CONCAT44(in_fr14,in_fr15);
      }
      if (in_FPSCR_SZ == '\0') {
        in_dr8 = (double)CONCAT44(*(undefined4 *)pdVar2,SUB84(in_dr8,0));
        pdVar2 = (double *)((int)pdVar2 + 4);
      }
      else {
        in_dr8 = *pdVar2;
        pdVar2 = pdVar2 + 1;
      }
      iVar5 = iVar5 + -1;
      if (in_FPSCR_SZ == '\0') {
        dVar21 = (double)CONCAT44((int)((ulonglong)dVar21 >> 0x20),*(undefined4 *)pdVar2);
        in_dr6 = (double)CONCAT44((int)((ulonglong)in_dr6 >> 0x20),*(undefined4 *)((int)pdVar2 + 4))
        ;
      }
      else {
        in_xd4 = *pdVar2;
        in_xd6 = pdVar2[1];
      }
    } while (iVar5 != 0);
    *(undefined4 *)(pdVar10 + 7) = uVar1;
    *(undefined4 *)((int)pdVar10 + 0x34) = 0xff000000;
    if (in_FPSCR_SZ == '\0') {
      *(int *)(pdVar10 + 6) = (int)((ulonglong)in_dr6 >> 0x20);
      *(int *)((int)pdVar10 + 0x2c) = (int)((ulonglong)dVar21 >> 0x20);
      *(int *)(pdVar10 + 5) = SUB84(in_dr6,0);
      *(int *)((int)pdVar10 + 0x24) = SUB84(dVar21,0);
      pdVar10 = pdVar10 + 4;
      *(int *)pdVar10 = (int)((ulonglong)in_dr8 >> 0x20);
    }
    else {
      *(double *)((int)pdVar10 + 0x2c) = in_dr6;
      *(double *)((int)pdVar10 + 0x24) = dVar21;
      *(double *)((int)pdVar10 + 0x1c) = in_xd6;
      *(double *)((int)pdVar10 + 0x14) = in_xd4;
      pdVar10 = (double *)((int)pdVar10 + 0xc);
      *pdVar10 = in_dr8;
    }
    *(undefined4 *)((int)pdVar10 + -4) = 0xf0000000;
    uVar6 = uVar6 - 1;
    ar7 = (double *)((int)pdVar10 + 0x1c);
  } while (uVar6 != 0);
  _DAT_8c4aa520 = _DAT_8c4aa520 + iVar4;
  _DAT_8c4aa51c = _DAT_8c4aa51c + iVar3;
  return ar7;
}

__asm__(".globl _FUN_8c2163d4\n.set _FUN_8c2163d4, _FUN_8c2163d4_def\n");
