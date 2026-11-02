#include "../decls.h"
double * FUN_8c2166e8_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,double *ar7)

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
  double in_dr0;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  float fVar21;
  undefined8 in_dr2;
  double dVar22;
  ulonglong uVar23;
  double dVar24;
  ulonglong in_dr4;
  undefined4 uVar26;
  double dVar25;
  double in_dr6;
  double dVar27;
  double in_dr8;
  undefined4 in_fr11;
  undefined4 in_fr10;
  double in_dr12;
  float fVar28;
  double in_dr14;
  undefined8 in_xd0;
  double in_xd2;
  double in_xd4;
  double in_xd6;
  undefined8 in_xd8;
  undefined8 in_xd10;
  double in_xd12;
  double in_xd14;
  bool bVar29;
  undefined4 in_PR;
  char in_FPSCR_PR = 0;
  char in_FPSCR_SZ = 0;
  undefined1 auStack_3c [16];
  double dStack_2c;
  undefined8 uStack_24;
  double dVar17;
  
  uVar19 = (undefined4)((ulonglong)in_dr14 >> 0x20);
  uVar20 = (undefined4)((ulonglong)in_dr12 >> 0x20);
  if (in_FPSCR_SZ == '\0') {
    uStack_24 = (double)CONCAT44(SUB84(in_dr14,0),(undefined4)uStack_24);
                    
    (*(uint*)((uchar*)&uStack_24+0)) = uVar19;
    pdVar15 = &dStack_2c;
    dStack_2c = (double)CONCAT44(SUB84(in_dr12,0),uVar20);
  }
  else {
    pdVar15 = (double *)auStack_3c;
    uStack_24 = in_xd14;
    dStack_2c = in_dr14;
  }
  *(undefined4 *)((int)pdVar15 + -4) = in_PR;
  *(undefined4 *)((int)pdVar15 + -0xd0) = ar4;
  *(undefined4 *)((int)pdVar15 + -200) = ar5;
  *(undefined4 *)((int)pdVar15 + -0xc0) = ar6;
  uVar26 = (undefined4)(in_dr4 >> 0x20);
  uVar18 = (undefined4)((ulonglong)in_dr0 >> 0x20);
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)((int)pdVar15 + -0xcc) = uVar26;
    *(int *)((int)pdVar15 + -0x60) = SUB84(in_dr14,0);
    *(undefined4 *)((int)pdVar15 + -100) = uVar19;
    *(int *)((int)pdVar15 + -0x68) = SUB84(in_dr12,0);
    *(undefined4 *)((int)pdVar15 + -0x6c) = uVar20;
    *(undefined4 *)((int)pdVar15 + -0x70) = in_fr11;
    *(undefined4 *)((int)pdVar15 + -0x74) = in_fr10;
    *(int *)((int)pdVar15 + -0x78) = SUB84(in_dr8,0);
    *(int *)((int)pdVar15 + -0x7c) = (int)((ulonglong)in_dr8 >> 0x20);
    *(int *)((int)pdVar15 + -0x80) = SUB84(in_dr6,0);
    *(int *)((int)pdVar15 + -0x84) = (int)((ulonglong)in_dr6 >> 0x20);
    *(int *)((int)pdVar15 + -0x88) = (int)in_dr4;
    *(undefined4 *)((int)pdVar15 + -0x8c) = uVar26;
    *(int *)((int)pdVar15 + -0x90) = (int)in_dr2;
    *(int *)((int)pdVar15 + -0x94) = (int)((ulonglong)in_dr2 >> 0x20);
    *(int *)((int)pdVar15 + -0x98) = SUB84(in_dr0,0);
    *(undefined4 *)((int)pdVar15 + -0x9c) = uVar18;
  }
  else {
    *(ulonglong *)((int)pdVar15 + -0xcc) = in_dr4;
    *(double *)((int)pdVar15 + -100) = in_xd14;
    *(double *)((int)pdVar15 + -0x6c) = in_dr14;
    *(double *)((int)pdVar15 + -0x74) = in_xd12;
    *(double *)((int)pdVar15 + -0x7c) = in_dr12;
    *(undefined8 *)((int)pdVar15 + -0x84) = in_xd10;
    *(ulonglong *)((int)pdVar15 + -0x8c) = CONCAT44(in_fr10,in_fr11);
    *(undefined8 *)((int)pdVar15 + -0x94) = in_xd8;
    *(double *)((int)pdVar15 + -0x9c) = in_dr8;
    *(double *)((int)pdVar15 + -0xa4) = in_xd6;
    *(double *)((int)pdVar15 + -0xac) = in_dr6;
    *(double *)((int)pdVar15 + -0xb4) = in_xd4;
    *(ulonglong *)((int)pdVar15 + -0xbc) = in_dr4;
    *(double *)((int)pdVar15 + -0xc4) = in_xd2;
    *(undefined8 *)((int)pdVar15 + -0xcc) = in_dr2;
    *(undefined8 *)((int)pdVar15 + -0xd4) = in_xd0;
    *(double *)((int)pdVar15 + -0xdc) = in_dr0;
  }
  pdVar5 = (double *)((int)pdVar15 + -0x1c);
  ar6_00 = &DAT_8c4ab1f0;
  ar7_00 = &DAT_8c4ab1ec;
  pdVar11 = (double *)((int)pdVar15 + -0x14);
  *(double **)((int)pdVar15 + -0xbc) = pdVar5;
  if (in_FPSCR_SZ == '\0') {
    dVar22 = (double)CONCAT44(_DAT_8c4ab1e0,_DAT_8c4ab1f0);
    in_dr0 = (double)CONCAT44(uVar18,_DAT_8c4ab1e4);
  }
  else {
    in_xd2 = (double)CONCAT44(_DAT_8c4ab1f4,_DAT_8c4ab1f0);
    dVar22 = (double)CONCAT44(_DAT_8c4ab1e4,_DAT_8c4ab1e0);
  }
  pdVar14 = (double *)((int)pdVar15 + -0x18);
  if (in_FPSCR_PR == '\0') {
    dVar22 = (double)CONCAT44((float)((ulonglong)dVar22 >> 0x20) * SUB84(dVar22,0),SUB84(dVar22,0));
  }
  else {
    dVar22 = dVar22 * dVar22;
  }
  if (in_FPSCR_SZ == '\0') {
    dVar22 = (double)CONCAT44((int)((ulonglong)dVar22 >> 0x20),_DAT_8c4ab1ec);
  }
  else {
    in_xd2 = (double)CONCAT44(_DAT_8c4ab1f0,_DAT_8c4ab1ec);
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
  *(double **)((int)pdVar15 + -0xb8) = pdVar14;
  if (in_FPSCR_SZ == '\0') {
    dVar22 = (double)CONCAT44(_DAT_8c4ab1e4,_DAT_8c4ab1e8);
    dVar17 = (double)CONCAT44((int)((ulonglong)dVar17 >> 0x20),_DAT_8c4ab1f0);
  }
  else {
    in_xd2 = (double)CONCAT44(_DAT_8c4ab1ec,_DAT_8c4ab1e8);
    dVar22 = (double)CONCAT44(_DAT_8c4ab1e8,_DAT_8c4ab1e4);
  }
  if (in_FPSCR_PR == '\0') {
    dVar22 = (double)CONCAT44((float)((ulonglong)dVar22 >> 0x20) * SUB84(dVar22,0),SUB84(dVar22,0));
  }
  else {
    dVar22 = dVar22 * dVar22;
  }
  if (in_FPSCR_SZ == '\0') {
    dVar22 = (double)CONCAT44((int)((ulonglong)dVar22 >> 0x20),_DAT_8c4ab1dc);
  }
  else {
    in_xd2 = (double)CONCAT44(_DAT_8c4ab1e0,_DAT_8c4ab1dc);
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
    *(int *)pdVar14 = (int)((ulonglong)dVar22 >> 0x20);
  }
  else {
    *pdVar14 = dVar22;
  }
  *(double **)((int)pdVar15 + -0xb4) = pdVar11;
  if (in_FPSCR_SZ == '\0') {
    dVar22 = (double)CONCAT44(_DAT_8c4ab1ec,_DAT_8c4ab1dc);
    dVar17 = (double)CONCAT44((int)((ulonglong)dVar17 >> 0x20),_DAT_8c4ab1e0);
  }
  else {
    in_xd2 = (double)CONCAT44(_DAT_8c4ab1e0,_DAT_8c4ab1dc);
    dVar22 = (double)CONCAT44(_DAT_8c4ab1f0,_DAT_8c4ab1ec);
  }
  pdVar5 = (double *)((int)pdVar15 + -0x5c);
  if (in_FPSCR_PR == '\0') {
    dVar22 = (double)CONCAT44((float)((ulonglong)dVar22 >> 0x20) * SUB84(dVar22,0),SUB84(dVar22,0));
  }
  else {
    dVar22 = dVar22 * dVar22;
  }
  if (in_FPSCR_SZ == '\0') {
    dVar22 = (double)CONCAT44((int)((ulonglong)dVar22 >> 0x20),_DAT_8c4ab1e8);
  }
  else {
    in_xd2 = (double)CONCAT44(_DAT_8c4ab1ec,_DAT_8c4ab1e8);
  }
  if (in_FPSCR_PR == '\0') {
    dVar17 = (double)CONCAT44((int)((ulonglong)dVar17 >> 0x20),SUB84(dVar17,0) * SUB84(dVar22,0));
  }
  else {
    dVar17 = dVar17 * dVar22;
  }
  dVar25 = (double)(in_dr4 & 0xffffffff);
  if (in_FPSCR_PR == '\0') {
    dVar22 = (double)CONCAT44((float)((ulonglong)dVar22 >> 0x20) - SUB84(dVar17,0),SUB84(dVar22,0));
  }
  else {
    dVar22 = dVar22 - dVar17;
  }
  uVar20 = (undefined4)((ulonglong)dVar22 >> 0x20);
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)pdVar11 = uVar20;
  }
  else {
    *pdVar11 = dVar22;
  }
  *(double **)((int)pdVar15 + -0xc4) = pdVar5;
  if (in_FPSCR_SZ == '\0') {
    uVar19 = *(undefined4 *)*(double **)((int)pdVar15 + -0xbc);
    dVar22 = (double)CONCAT44(uVar20,uVar19);
    *(undefined4 *)pdVar5 = uVar19;
  }
  else {
    in_xd2 = **(double **)((int)pdVar15 + -0xbc);
    *pdVar5 = in_xd2;
  }
  pdVar5 = (double *)((int)pdVar15 + -0x58);
  *(double **)((int)pdVar15 + -0xbc) = pdVar5;
  if (in_FPSCR_SZ == '\0') {
    uVar20 = *(undefined4 *)*(double **)((int)pdVar15 + -0xb8);
    dVar22 = (double)CONCAT44((int)((ulonglong)dVar22 >> 0x20),uVar20);
    *(undefined4 *)pdVar5 = uVar20;
  }
  else {
    in_xd2 = **(double **)((int)pdVar15 + -0xb8);
    *pdVar5 = in_xd2;
  }
  pdVar5 = (double *)((int)pdVar15 + -0x54);
  *(double **)((int)pdVar15 + -0xb8) = pdVar5;
  if (in_FPSCR_SZ == '\0') {
    uVar20 = *(undefined4 *)*(double **)((int)pdVar15 + -0xb4);
    dVar22 = (double)CONCAT44((int)((ulonglong)dVar22 >> 0x20),uVar20);
    *(undefined4 *)pdVar5 = uVar20;
    *(undefined4 *)((int)pdVar15 + -0x50) = 0;
  }
  else {
    in_xd2 = **(double **)((int)pdVar15 + -0xb4);
    *pdVar5 = in_xd2;
    *(double *)((int)pdVar15 + -0x50) = dVar25;
  }
  pdVar5 = (double *)((int)pdVar15 + -0x4c);
  *(double **)((int)pdVar15 + -0xb4) = pdVar5;
  if (in_FPSCR_SZ == '\0') {
    dVar22 = (double)CONCAT44((int)((ulonglong)dVar22 >> 0x20),_DAT_8c4ab1dc);
  }
  else {
    in_xd2 = (double)CONCAT44(_DAT_8c4ab1e0,_DAT_8c4ab1dc);
  }
  if (in_FPSCR_SZ == '\0') {
    *(float *)pdVar5 = -SUB84(dVar22,0);
  }
  else {
    *pdVar5 = in_xd2;
  }
  pdVar5 = (double *)((int)pdVar15 + -0x48);
  *(double **)((int)pdVar15 + -0xa0) = pdVar5;
  fVar16 = _DAT_8c4ab1e0;
  if (in_FPSCR_SZ != '\0') {
    in_xd2 = (double)CONCAT44(_DAT_8c4ab1e4,_DAT_8c4ab1e0);
    fVar16 = -SUB84(dVar22,0);
  }
  if (in_FPSCR_SZ == '\0') {
    *(float *)pdVar5 = -fVar16;
  }
  else {
    *pdVar5 = in_xd2;
  }
  pdVar5 = (double *)((int)pdVar15 + -0x44);
  *(double **)((int)pdVar15 + -0xa4) = pdVar5;
  fVar28 = _DAT_8c4ab1e4;
  if (in_FPSCR_SZ != '\0') {
    in_xd2 = (double)CONCAT44(_DAT_8c4ab1e8,_DAT_8c4ab1e4);
    fVar28 = -fVar16;
  }
  if (in_FPSCR_SZ == '\0') {
    *(float *)pdVar5 = -fVar28;
    *(undefined4 *)((int)pdVar15 + -0x40) = 0;
  }
  else {
    *pdVar5 = in_xd2;
    *(double *)((int)pdVar15 + -0x40) = dVar25;
  }
  pdVar5 = (double *)((int)pdVar15 + -0x3c);
  *(double **)((int)pdVar15 + -0xac) = pdVar5;
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)pdVar5 = _DAT_8c4ab1e8;
  }
  else {
    in_xd2 = (double)CONCAT44(_DAT_8c4ab1ec,_DAT_8c4ab1e8);
    *pdVar5 = in_xd2;
  }
  pdVar5 = (double *)((int)pdVar15 + -0x38);
  *(double **)((int)pdVar15 + -0xa8) = pdVar5;
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)pdVar5 = _DAT_8c4ab1ec;
  }
  else {
    in_xd2 = (double)CONCAT44(_DAT_8c4ab1f0,_DAT_8c4ab1ec);
    *pdVar5 = in_xd2;
  }
  pdVar5 = (double *)((int)pdVar15 + -0x34);
  *(double **)((int)pdVar15 + -0xb0) = pdVar5;
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)pdVar5 = _DAT_8c4ab1f0;
    *(undefined4 *)((int)pdVar15 + -0x30) = 0;
    *(undefined4 *)((int)pdVar15 + -0x2c) = 0;
  }
  else {
    in_xd2 = (double)CONCAT44(_DAT_8c4ab1f4,_DAT_8c4ab1f0);
    *pdVar5 = in_xd2;
    *(double *)((int)pdVar15 + -0x30) = dVar25;
    *(double *)((int)pdVar15 + -0x2c) = dVar25;
  }
  ar5_00 = (undefined1 *)((int)pdVar15 + -0x9c);
  dVar22 = (double)CONCAT44((int)((ulonglong)dVar22 >> 0x20),0x3f800000);
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)((int)pdVar15 + -0x28) = 0;
    *(undefined4 *)((int)pdVar15 + -0x24) = 0;
    *(undefined4 *)((int)pdVar15 + -0x20) = 0x3f800000;
  }
  else {
    *(double *)((int)pdVar15 + -0x28) = dVar25;
    *(double *)((int)pdVar15 + -0x24) = dVar25;
    *(double *)((int)pdVar15 + -0x20) = in_xd2;
  }
  FUN_8c255d6c((undefined1 *)((int)pdVar15 + -0x5c),ar5_00,&DAT_8c4ab1f0,&DAT_8c4ab1ec,
               *(undefined4 *)((int)pdVar15 + -0xd0));
  if (in_FPSCR_SZ == '\0') {
    dVar17 = (double)CONCAT44(_DAT_8c4ab15c,SUB84(dVar17,0));
    dVar22 = (double)CONCAT44((int)((ulonglong)dVar22 >> 0x20),
                              *(undefined4 *)*(double **)((int)pdVar15 + -0xbc));
  }
  else {
    dVar17 = (double)CONCAT44(_DAT_8c4ab160,_DAT_8c4ab15c);
    in_xd2 = **(double **)((int)pdVar15 + -0xbc);
  }
  if (in_FPSCR_PR == '\0') {
    fVar16 = SUB84(dVar22,0) * (float)((ulonglong)dVar17 >> 0x20);
  }
  else {
    fVar16 = SUB84(dVar22 * dVar17,0);
  }
  if (in_FPSCR_SZ == '\0') {
    uVar23 = CONCAT44((int)**(ulonglong **)((int)pdVar15 + -0xc4),fVar16);
    fVar16 = SUB84(dVar17,0);
    fVar28 = _DAT_8c4ab158;
  }
  else {
    uVar23 = **(ulonglong **)((int)pdVar15 + -0xc4);
    fVar16 = _DAT_8c4ab158;
    fVar28 = _DAT_8c4ab15c;
  }
  if (in_FPSCR_PR == '\0') {
    uVar23 = (ulonglong)(uint)(fVar28 * (float)(uVar23 >> 0x20) + (float)uVar23);
  }
  if (in_FPSCR_SZ == '\0') {
    dVar22 = (double)CONCAT44(*(undefined4 *)*(double **)((int)pdVar15 + -0xb8),(int)uVar23);
    fVar28 = _DAT_8c4ab160;
  }
  else {
    dVar22 = **(double **)((int)pdVar15 + -0xb8);
    fVar16 = _DAT_8c4ab160;
    fVar28 = _DAT_8c4ab164;
  }
  pdVar5 = (double *)((int)pdVar15 + -0x10);
  if (in_FPSCR_PR == '\0') {
    fVar21 = (float)((ulonglong)dVar22 >> 0x20);
    dVar22 = (double)CONCAT44(fVar21,fVar28 * fVar21 + SUB84(dVar22,0));
  }
  if (in_FPSCR_SZ == '\0') {
    *(int *)pdVar5 = SUB84(dVar22,0);
  }
  else {
    *pdVar5 = in_xd2;
  }
  if (in_FPSCR_SZ == '\0') {
    dVar17 = (double)CONCAT44(_DAT_8c4ab15c,fVar16);
    dVar22 = (double)CONCAT44((int)((ulonglong)dVar22 >> 0x20),
                              *(undefined4 *)*(double **)((int)pdVar15 + -0xa0));
  }
  else {
    dVar17 = (double)CONCAT44(_DAT_8c4ab160,_DAT_8c4ab15c);
    in_xd2 = **(double **)((int)pdVar15 + -0xa0);
  }
  if (in_FPSCR_PR == '\0') {
    fVar16 = SUB84(dVar22,0) * (float)((ulonglong)dVar17 >> 0x20);
  }
  else {
    fVar16 = SUB84(dVar22 * dVar17,0);
  }
  if (in_FPSCR_SZ == '\0') {
    uVar23 = CONCAT44((int)**(ulonglong **)((int)pdVar15 + -0xb4),fVar16);
    fVar16 = SUB84(dVar17,0);
    fVar28 = _DAT_8c4ab158;
  }
  else {
    uVar23 = **(ulonglong **)((int)pdVar15 + -0xb4);
    fVar16 = _DAT_8c4ab158;
    fVar28 = _DAT_8c4ab15c;
  }
  if (in_FPSCR_PR == '\0') {
    uVar23 = (ulonglong)(uint)(fVar28 * (float)(uVar23 >> 0x20) + (float)uVar23);
  }
  if (in_FPSCR_SZ == '\0') {
    dVar22 = (double)CONCAT44(*(undefined4 *)*(double **)((int)pdVar15 + -0xa4),(int)uVar23);
    fVar28 = _DAT_8c4ab160;
  }
  else {
    dVar22 = **(double **)((int)pdVar15 + -0xa4);
    fVar16 = _DAT_8c4ab160;
    fVar28 = _DAT_8c4ab164;
  }
  if (in_FPSCR_PR == '\0') {
    fVar21 = (float)((ulonglong)dVar22 >> 0x20);
    dVar22 = (double)CONCAT44(fVar21,fVar28 * fVar21 + SUB84(dVar22,0));
  }
  if (in_FPSCR_SZ == '\0') {
    *(int *)((int)pdVar15 + -0xc) = SUB84(dVar22,0);
  }
  else {
    *(double *)((int)pdVar15 + -0xc) = in_xd2;
  }
  if (in_FPSCR_SZ == '\0') {
    dVar17 = (double)CONCAT44(_DAT_8c4ab15c,fVar16);
    dVar22 = (double)CONCAT44((int)((ulonglong)dVar22 >> 0x20),
                              *(undefined4 *)*(double **)((int)pdVar15 + -0xa8));
  }
  else {
    dVar17 = (double)CONCAT44(_DAT_8c4ab160,_DAT_8c4ab15c);
    in_xd2 = **(double **)((int)pdVar15 + -0xa8);
  }
  if (in_FPSCR_PR == '\0') {
    fVar16 = SUB84(dVar22,0) * (float)((ulonglong)dVar17 >> 0x20);
  }
  else {
    fVar16 = SUB84(dVar22 * dVar17,0);
  }
  if (in_FPSCR_SZ == '\0') {
    uVar23 = CONCAT44((int)**(ulonglong **)((int)pdVar15 + -0xac),fVar16);
    fVar16 = SUB84(dVar17,0);
    fVar28 = _DAT_8c4ab158;
  }
  else {
    uVar23 = **(ulonglong **)((int)pdVar15 + -0xac);
    fVar16 = _DAT_8c4ab158;
    fVar28 = _DAT_8c4ab15c;
  }
  if (in_FPSCR_PR == '\0') {
    uVar23 = (ulonglong)(uint)(fVar28 * (float)(uVar23 >> 0x20) + (float)uVar23);
  }
  if (in_FPSCR_SZ == '\0') {
    uVar23 = CONCAT44((int)**(ulonglong **)((int)pdVar15 + -0xb0),(int)uVar23);
    dVar22 = (double)CONCAT44(_DAT_8c4ab160,fVar16);
  }
  else {
    uVar23 = **(ulonglong **)((int)pdVar15 + -0xb0);
    dVar22 = (double)CONCAT44(_DAT_8c4ab164,_DAT_8c4ab160);
  }
  if (in_FPSCR_PR == '\0') {
    uVar23 = (ulonglong)
             (uint)((float)((ulonglong)dVar22 >> 0x20) * (float)(uVar23 >> 0x20) + (float)uVar23);
  }
  if (in_FPSCR_SZ == '\0') {
    *(int *)((int)pdVar15 + -8) = (int)uVar23;
  }
  else {
    *(double *)((int)pdVar15 + -8) = in_xd2;
  }
  FUN_8c25ce48(pdVar5,ar5_00,ar6_00,ar7_00,*(undefined4 *)((int)pdVar15 + -0xd0));
  _DAT_8c4aa2a4 = 0xff000000;
  _DAT_8c4aa2a0 = FUN_8c213f28(pdVar5,ar5_00,ar6_00,ar7_00);
  uVar4 = *(uint *)((int)pdVar15 + -0xc0);
  iVar9 = 0;
  iVar10 = 0;
  *(uint *)((int)pdVar15 + -0xc0) = *(uint *)((int)pdVar15 + -0xc0) & 0x3fff;
  *(uint *)((int)pdVar15 + -0xc4) = (uVar4 >> 0xe & 3) << 1;
  do {
    psVar12 = *(short **)((int)pdVar15 + -0xd0);
    *(short **)((int)pdVar15 + -0xd0) = psVar12 + 1;
    psVar6 = *(short **)((int)pdVar15 + -0xd0);
    iVar13 = (int)*psVar12;
    *(short **)((int)pdVar15 + -0xd0) = psVar6 + 1;
    pdVar5 = (double *)(*psVar6 * 0x10 + *(int *)((int)pdVar15 + -200));
    if (iVar13 < 0) {
      iVar13 = -iVar13;
    }
    psVar6 = *(short **)((int)pdVar15 + -0xd0);
    iVar10 = iVar10 + iVar13;
    *(short **)((int)pdVar15 + -0xd0) = psVar6 + 1;
    sVar1 = *psVar6;
    iVar8 = 0;
    if (in_FPSCR_SZ == '\0') {
      in_dr6 = (double)CONCAT44(*(undefined4 *)((int)pdVar15 + -0xcc),SUB84(in_dr6,0));
    }
    else {
      in_dr6 = *(double *)((int)pdVar15 + -0xcc);
    }
    iVar13 = iVar13 + -2;
    psVar6 = *(short **)((int)pdVar15 + -0xd0);
    *(short **)((int)pdVar15 + -0xd0) = psVar6 + 1;
    sVar2 = *psVar6;
    psVar6 = *(short **)((int)pdVar15 + -0xd0);
    dVar17 = in_xd2;
    if (in_FPSCR_SZ == '\0') {
      dVar17 = (double)CONCAT44((float)(int)sVar1,SUB84(dVar25,0));
    }
    *(short **)((int)pdVar15 + -0xd0) = psVar6 + 1;
    fVar16 = (float)((ulonglong)in_dr6 >> 0x20);
    if (in_FPSCR_PR == '\0') {
      dVar17 = (double)CONCAT44((float)((ulonglong)dVar17 >> 0x20) * fVar16,SUB84(dVar17,0));
    }
    else {
      dVar17 = dVar17 * in_dr6;
    }
    pdVar11 = (double *)(*psVar6 * 0x10 + *(int *)((int)pdVar15 + -200));
    dVar25 = in_xd2;
    if (in_FPSCR_SZ == '\0') {
      dVar17 = (double)CONCAT44((int)((ulonglong)dVar17 >> 0x20),(float)(int)sVar2);
      dVar25 = in_xd4;
    }
    in_xd4 = dVar25;
    if (in_FPSCR_PR == '\0') {
      dVar25 = (double)CONCAT44((int)((ulonglong)dVar17 >> 0x20),SUB84(dVar17,0) * fVar16);
    }
    else {
      dVar25 = dVar17 * in_dr6;
    }
    psVar6 = *(short **)((int)pdVar15 + -0xd0);
    *(short **)((int)pdVar15 + -0xd0) = psVar6 + 1;
    sVar1 = *psVar6;
    psVar6 = *(short **)((int)pdVar15 + -0xd0);
    *(short **)((int)pdVar15 + -0xd0) = psVar6 + 1;
    dVar17 = in_xd2;
    if (in_FPSCR_SZ == '\0') {
      in_dr14 = (double)CONCAT44((int)((ulonglong)in_dr14 >> 0x20),(float)(int)sVar1);
      dVar17 = in_xd14;
    }
    if (in_FPSCR_PR == '\0') {
      fVar28 = SUB84(in_dr14,0) * fVar16;
    }
    else {
      fVar28 = SUB84(in_dr14 * in_dr6,0);
    }
    dVar24 = in_xd2;
    if (in_FPSCR_SZ == '\0') {
      dVar24 = (double)CONCAT44((float)(int)*psVar6,fVar28);
    }
    if (in_FPSCR_PR == '\0') {
      in_dr14 = (double)CONCAT44((float)((ulonglong)dVar24 >> 0x20) * fVar16,SUB84(dVar24,0));
    }
    else {
      in_dr14 = dVar24 * in_dr6;
    }
    do {
      psVar6 = *(short **)((int)pdVar15 + -0xd0);
      *(short **)((int)pdVar15 + -0xd0) = psVar6 + 1;
      pdVar14 = (double *)(*psVar6 * 0x10 + *(int *)((int)pdVar15 + -200));
      psVar6 = *(short **)((int)pdVar15 + -0xd0);
      *(short **)((int)pdVar15 + -0xd0) = psVar6 + 1;
      if (in_FPSCR_SZ == '\0') {
        fVar16 = *(float *)((int)pdVar15 + -0xcc);
      }
      else {
        fVar16 = (float)((ulonglong)*(undefined8 *)((int)pdVar15 + -0xcc) >> 0x20);
      }
      psVar12 = *(short **)((int)pdVar15 + -0xd0);
      fVar28 = (float)(int)*psVar6;
      *(short **)((int)pdVar15 + -0xd0) = psVar12 + 1;
      if (in_FPSCR_SZ == '\0') {
        in_dr6 = (double)CONCAT44(*(undefined4 *)(pdVar5 + 1),SUB84(in_dr6,0));
        in_dr12 = (double)CONCAT44((int)((ulonglong)in_dr12 >> 0x20),fVar28);
      }
      else {
        in_dr6 = pdVar5[1];
        in_xd12 = in_xd2;
      }
      if (in_FPSCR_PR == '\0') {
        fVar28 = SUB84(in_dr12,0) * fVar16;
      }
      else {
        fVar28 = SUB84(in_dr12 * (double)CONCAT44(fVar16,fVar28),0);
      }
      fVar21 = (float)(int)*psVar12;
      dVar24 = in_xd2;
      if (in_FPSCR_SZ == '\0') {
        dVar24 = (double)CONCAT44(fVar21,fVar28);
      }
      if (in_FPSCR_PR == '\0') {
        in_dr12 = (double)CONCAT44((float)((ulonglong)dVar24 >> 0x20) * fVar16,SUB84(dVar24,0));
      }
      else {
        in_dr12 = dVar24 * (double)CONCAT44(fVar16,fVar21);
      }
      dVar24 = (double)((ulonglong)(uint)fVar16 << 0x20);
      fVar16 = (float)((ulonglong)in_dr6 >> 0x20);
      if (in_FPSCR_PR == '\0') {
        bVar29 = 0.0 < fVar16;
      }
      else {
        bVar29 = dVar24 < in_dr6;
      }
      bVar3 = false;
      if (bVar29) {
        if (in_FPSCR_SZ == '\0') {
          dVar24 = (double)((ulonglong)*(uint *)(pdVar11 + 1) << 0x20);
        }
        else {
          dVar24 = pdVar11[1];
        }
        if (in_FPSCR_PR != '\0' || (float)((ulonglong)dVar24 >> 0x20) <= SUB84(dVar24,0))
        goto LAB_8c2169e6;
        if (in_FPSCR_SZ == '\0') {
          fVar28 = *(float *)(pdVar14 + 1);
        }
        else {
          fVar28 = (float)((ulonglong)pdVar14[1] >> 0x20);
        }
        dVar24 = (double)((ulonglong)(uint)fVar28 << 0x20);
        if (in_FPSCR_PR != '\0' || fVar28 <= 0.0) goto LAB_8c2169e6;
        dVar24 = (double)CONCAT44(fVar28,0x3f800000);
        if (in_FPSCR_PR == '\0') {
          bVar29 = fVar16 < 1.0;
        }
        else {
          bVar29 = in_dr6 < dVar24;
        }
        if (!bVar29) goto LAB_8c2169e6;
        if (in_FPSCR_SZ == '\0') {
          fVar16 = *(float *)(pdVar11 + 1);
        }
        else {
          fVar16 = (float)((ulonglong)pdVar11[1] >> 0x20);
        }
        dVar24 = (double)CONCAT44(fVar16,0x3f800000);
        if (in_FPSCR_PR != '\0' || 1.0 <= fVar16) goto LAB_8c2169e6;
        if (in_FPSCR_SZ == '\0') {
          fVar16 = *(float *)(pdVar14 + 1);
        }
        else {
          fVar16 = (float)((ulonglong)pdVar14[1] >> 0x20);
        }
        dVar24 = (double)CONCAT44(fVar16,0x3f800000);
        if (in_FPSCR_PR != '\0' || 1.0 <= fVar16) goto LAB_8c2169e6;
      }
      else {
LAB_8c2169e6:
        bVar3 = true;
      }
      uVar4 = (uint)((ulonglong)in_dr14 >> 0x20);
      if (bVar3) {
        if (iVar8 != 0) {
          if (in_FPSCR_SZ == '\0') {
            in_dr8 = (double)CONCAT44(*(undefined4 *)pdVar11,SUB84(in_dr8,0));
            pdVar7 = (double *)((int)pdVar11 + 4);
          }
          else {
            in_dr8 = *pdVar11;
            in_xd6 = pdVar11[1];
            pdVar7 = pdVar11 + 2;
          }
          in_dr6 = *pdVar7;
          *(undefined4 *)((int)ar7 + 0x1c) = _DAT_8c4aa2a0;
          *(undefined4 *)(ar7 + 3) = _DAT_8c4aa2a4;
          if (in_FPSCR_SZ == '\0') {
            *(uint *)((int)ar7 + 0x14) = uVar4;
            *(int *)(ar7 + 2) = SUB84(in_dr14,0);
            *(int *)((int)ar7 + 0xc) = (int)((ulonglong)in_dr6 >> 0x20);
            *(int *)(ar7 + 1) = SUB84(in_dr6,0);
            pdVar7 = (double *)((int)ar7 + 4);
            *(int *)pdVar7 = (int)((ulonglong)in_dr8 >> 0x20);
          }
          else {
            ar7[2] = in_dr14;
            ar7[1] = dVar17;
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
      }
      else {
        if (iVar8 == 0) {
          if (in_FPSCR_SZ == '\0') {
            in_dr8 = (double)CONCAT44(*(undefined4 *)pdVar5,SUB84(in_dr8,0));
            pdVar7 = (double *)((int)pdVar5 + 4);
          }
          else {
            in_dr8 = *pdVar5;
            in_xd6 = pdVar5[1];
            pdVar7 = pdVar5 + 2;
          }
          dVar27 = *pdVar7;
          *(undefined4 *)((int)ar7 + 0x1c) = _DAT_8c4aa2a0;
          *(undefined4 *)(ar7 + 3) = _DAT_8c4aa2a4;
          if (in_FPSCR_SZ == '\0') {
            *(int *)((int)ar7 + 0x14) = SUB84(dVar25,0);
            *(int *)(ar7 + 2) = (int)((ulonglong)dVar25 >> 0x20);
            *(int *)((int)ar7 + 0xc) = (int)((ulonglong)dVar27 >> 0x20);
            *(int *)(ar7 + 1) = SUB84(dVar27,0);
            pdVar7 = (double *)((int)ar7 + 4);
            *(int *)pdVar7 = (int)((ulonglong)in_dr8 >> 0x20);
          }
          else {
            ar7[2] = in_xd4;
            ar7[1] = dVar25;
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
          in_dr6 = (double)CONCAT44(*(undefined4 *)(pdVar11 + 1),*(undefined4 *)pdVar11);
        }
        else {
          in_xd6 = *pdVar11;
          in_dr8 = pdVar11[1];
          in_dr6 = pdVar11[2];
        }
        *(undefined4 *)((int)ar7 + 0x1c) = _DAT_8c4aa2a0;
        *(undefined4 *)(ar7 + 3) = _DAT_8c4aa2a4;
        if (in_FPSCR_SZ == '\0') {
          *(uint *)((int)ar7 + 0x14) = uVar4;
          *(int *)(ar7 + 2) = SUB84(in_dr14,0);
          *(int *)((int)ar7 + 0xc) = (int)((ulonglong)in_dr6 >> 0x20);
          *(int *)(ar7 + 1) = (int)((ulonglong)in_dr8 >> 0x20);
          pdVar7 = (double *)((int)ar7 + 4);
          *(int *)pdVar7 = SUB84(in_dr6,0);
        }
        else {
          ar7[2] = in_dr14;
          ar7[1] = dVar17;
          *ar7 = in_dr6;
          ar7[-1] = in_dr8;
          pdVar7 = ar7 + -2;
          *pdVar7 = in_xd6;
        }
        *(undefined4 *)((int)pdVar7 + -4) = 0xe0000000;
        ar7 = (double *)((int)pdVar7 + 0x1c);
        iVar8 = iVar8 + 1;
      }
      if (bVar3) {
        if (in_FPSCR_SZ == '\0') {
          in_dr6 = (double)CONCAT44(*(undefined4 *)(pdVar5 + 1),SUB84(in_dr6,0));
        }
        else {
          in_dr6 = pdVar5[1];
        }
        fVar16 = (float)((ulonglong)in_dr6 >> 0x20);
        if (in_FPSCR_PR == '\0') {
          bVar29 = 0.0 < fVar16;
        }
        else {
          bVar29 = (double)((ulonglong)dVar24 & 0xffffffff00000000) < in_dr6;
        }
        if (bVar29) {
          if (in_FPSCR_PR == '\0') {
            bVar29 = fVar16 < 1.0;
          }
          else {
            bVar29 = in_dr6 < 0.0078125;
          }
          if (!bVar29) goto LAB_8c216aa8;
LAB_8c216ac8:
          in_dr6 = dVar17;
          dVar24 = in_dr14;
          in_dr8 = in_xd12;
          if (in_FPSCR_SZ == '\0') {
            in_dr6 = (double)(ulonglong)uVar4;
            dVar24 = in_xd6;
            in_dr8 = (double)((ulonglong)in_dr12 >> 0x20);
          }
          in_xd6 = dVar24;
          ar7 = (double *)FUN_8c216b84(pdVar5,pdVar11,pdVar14,ar7);
        }
        else {
LAB_8c216aa8:
          if (in_FPSCR_SZ == '\0') {
            fVar16 = *(float *)(pdVar11 + 1);
          }
          else {
            fVar16 = (float)((ulonglong)pdVar11[1] >> 0x20);
          }
          if (in_FPSCR_PR == '\0' && 0.0 < fVar16) {
            if (in_FPSCR_SZ == '\0') {
              dVar22 = (double)CONCAT44((int)((ulonglong)dVar22 >> 0x20),
                                        *(undefined4 *)(pdVar11 + 1));
            }
            if (in_FPSCR_PR == '\0') {
              bVar29 = SUB84(dVar22,0) < 1.0;
            }
            else {
              bVar29 = dVar22 < 0.0078125;
            }
            if (bVar29) goto LAB_8c216ac8;
          }
          if (in_FPSCR_SZ == '\0') {
            fVar16 = *(float *)(pdVar14 + 1);
          }
          else {
            fVar16 = (float)((ulonglong)pdVar14[1] >> 0x20);
          }
          if (in_FPSCR_PR == '\0' && 0.0 < fVar16) {
            if (in_FPSCR_SZ == '\0') {
              dVar22 = (double)CONCAT44((int)((ulonglong)dVar22 >> 0x20),
                                        *(undefined4 *)(pdVar14 + 1));
            }
            if (in_FPSCR_PR == '\0') {
              bVar29 = SUB84(dVar22,0) < 1.0;
            }
            else {
              bVar29 = dVar22 < 0.0078125;
            }
            if (bVar29) goto LAB_8c216ac8;
          }
        }
      }
      *(int *)((int)pdVar15 + -0xd0) =
           *(int *)((int)pdVar15 + -0xd0) + *(int *)((int)pdVar15 + -0xc4);
      dVar24 = in_dr14;
      in_xd14 = in_xd12;
      if (in_FPSCR_SZ == '\0') {
        dVar24 = (double)CONCAT44((int)((ulonglong)in_dr14 >> 0x20),SUB84(in_dr12,0));
        in_xd14 = dVar17;
        dVar17 = (double)CONCAT44(SUB84(in_dr14,0),SUB84(dVar25,0));
      }
      iVar13 = iVar13 + -1;
      uVar20 = (undefined4)((ulonglong)in_dr12 >> 0x20);
      in_dr14 = in_dr12;
      dVar25 = dVar17;
      if (in_FPSCR_SZ == '\0') {
        in_dr14 = (double)CONCAT44(uVar20,SUB84(dVar24,0));
        dVar25 = (double)CONCAT44((int)((ulonglong)dVar17 >> 0x20),(int)((ulonglong)dVar24 >> 0x20))
        ;
        dVar24 = in_xd4;
      }
      in_xd4 = dVar24;
      pdVar5 = pdVar11;
      pdVar11 = pdVar14;
      dVar17 = in_xd14;
    } while (iVar13 != 0);
    if (iVar8 != 0) {
      if (in_FPSCR_SZ == '\0') {
        in_dr6 = (double)CONCAT44(*(undefined4 *)((int)pdVar14 + 4),SUB84(in_dr6,0));
        dVar25 = (double)CONCAT44(*(undefined4 *)(pdVar14 + 1),*(undefined4 *)pdVar14);
      }
      else {
        in_xd4 = *pdVar14;
        in_dr6 = pdVar14[1];
        dVar25 = pdVar14[2];
      }
      *(undefined4 *)((int)ar7 + 0x1c) = _DAT_8c4aa2a0;
      *(undefined4 *)(ar7 + 3) = _DAT_8c4aa2a4;
      if (in_FPSCR_SZ == '\0') {
        *(undefined4 *)((int)ar7 + 0x14) = uVar20;
        *(int *)(ar7 + 2) = SUB84(in_dr12,0);
        *(int *)((int)ar7 + 0xc) = (int)((ulonglong)dVar25 >> 0x20);
        *(int *)(ar7 + 1) = (int)((ulonglong)in_dr6 >> 0x20);
        pdVar5 = (double *)((int)ar7 + 4);
        *(int *)pdVar5 = SUB84(dVar25,0);
      }
      else {
        ar7[2] = in_dr12;
        ar7[1] = in_xd12;
        *ar7 = dVar25;
        ar7[-1] = in_dr6;
        pdVar5 = ar7 + -2;
        *pdVar5 = in_xd4;
      }
      *(undefined4 *)((int)pdVar5 + -4) = 0xf0000000;
      iVar9 = iVar9 + iVar8 + 1;
      ar7 = (double *)((int)pdVar5 + 0x1c);
    }
    iVar13 = *(int *)((int)pdVar15 + -0xc0);
    *(int *)((int)pdVar15 + -0xc0) = iVar13 + -1;
    if (iVar13 + -1 == 0) {
      _DAT_8c4aa520 = _DAT_8c4aa520 + iVar9;
      _DAT_8c4aa51c = _DAT_8c4aa51c + iVar10;
      return ar7;
    }
  } while( true );
}

__asm__(".globl _FUN_8c2166e8\n.set _FUN_8c2166e8, _FUN_8c2166e8_def\n");
