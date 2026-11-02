#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
double * FUN_8c2166e8_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,double *ar7)

{
  ring[rp++ & 255] = "FUN_8c2166e8";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 268; for (int i_ = 0; i_ < 268; i_++) z_[i_] = 0; }
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
  double in_dr0 = 0;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  float fVar21;
  undefined8 in_dr2 = 0;
  double dVar22;
  ulonglong uVar23;
  double dVar24;
  ulonglong in_dr4 = 0;
  undefined4 uVar26;
  double dVar25;
  double in_dr6 = 0;
  double dVar27;
  double in_dr8 = 0;
  undefined4 in_fr11 = 0;
  undefined4 in_fr10 = 0;
  double in_dr12 = 0;
  float fVar28;
  double in_dr14 = 0;
  undefined8 in_xd0 = 0;
  double in_xd2 = 0;
  double in_xd4 = 0;
  double in_xd6 = 0;
  undefined8 in_xd8 = 0;
  undefined8 in_xd10 = 0;
  double in_xd12 = 0;
  double in_xd14 = 0;
  bool bVar29;
  undefined4 in_PR = 0;
  char in_FPSCR_PR = 0;
  char in_FPSCR_SZ = 0;
  double dVar17;
  
  uVar19 = (undefined4)((ulonglong)in_dr14 >> 0x20);
  uVar20 = (undefined4)((ulonglong)in_dr12 >> 0x20);
  if (in_FPSCR_SZ == '\0') {
    (*(undefined8 *)(fr0_ - 0x24)) = CONCAT44D(SUB84(in_dr14,0),(undefined4)(*(undefined8 *)(fr0_ - 0x24)));
                    
    (*(uint*)((uchar*)&(*(undefined8 *)(fr0_ - 0x24))+0)) = uVar19;
    pdVar15 = &(*(double *)(fr0_ - 0x2c));
    (*(double *)(fr0_ - 0x2c)) = CONCAT44D(SUB84(in_dr12,0),uVar20);
  }
  else {
    pdVar15 = (double *)(unsigned)((undefined1 *)(fr0_ - 0x3c));
    (*(undefined8 *)(fr0_ - 0x24)) = in_xd14;
    (*(double *)(fr0_ - 0x2c)) = in_dr14;
  }
  *(undefined4 *)(unsigned)((int)pdVar15 + -4) = in_PR;
  *(undefined4 *)(unsigned)((int)pdVar15 + -0xd0) = ar4;
  *(undefined4 *)(unsigned)((int)pdVar15 + -200) = ar5;
  *(undefined4 *)(unsigned)((int)pdVar15 + -0xc0) = ar6;
  uVar26 = (undefined4)(in_dr4 >> 0x20);
  uVar18 = (undefined4)((ulonglong)in_dr0 >> 0x20);
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)(unsigned)((int)pdVar15 + -0xcc) = uVar26;
    *(int *)(unsigned)((int)pdVar15 + -0x60) = SUB84(in_dr14,0);
    *(undefined4 *)(unsigned)((int)pdVar15 + -100) = uVar19;
    *(int *)(unsigned)((int)pdVar15 + -0x68) = SUB84(in_dr12,0);
    *(undefined4 *)(unsigned)((int)pdVar15 + -0x6c) = uVar20;
    *(undefined4 *)(unsigned)((int)pdVar15 + -0x70) = in_fr11;
    *(undefined4 *)(unsigned)((int)pdVar15 + -0x74) = in_fr10;
    *(int *)(unsigned)((int)pdVar15 + -0x78) = SUB84(in_dr8,0);
    *(int *)(unsigned)((int)pdVar15 + -0x7c) = (int)((ulonglong)in_dr8 >> 0x20);
    *(int *)(unsigned)((int)pdVar15 + -0x80) = SUB84(in_dr6,0);
    *(int *)(unsigned)((int)pdVar15 + -0x84) = (int)((ulonglong)in_dr6 >> 0x20);
    *(int *)(unsigned)((int)pdVar15 + -0x88) = (int)in_dr4;
    *(undefined4 *)(unsigned)((int)pdVar15 + -0x8c) = uVar26;
    *(int *)(unsigned)((int)pdVar15 + -0x90) = (int)in_dr2;
    *(int *)(unsigned)((int)pdVar15 + -0x94) = (int)((ulonglong)in_dr2 >> 0x20);
    *(int *)(unsigned)((int)pdVar15 + -0x98) = SUB84(in_dr0,0);
    *(undefined4 *)(unsigned)((int)pdVar15 + -0x9c) = uVar18;
  }
  else {
    *(ulonglong *)(unsigned)((int)pdVar15 + -0xcc) = in_dr4;
    *(double *)(unsigned)((int)pdVar15 + -100) = in_xd14;
    *(double *)(unsigned)((int)pdVar15 + -0x6c) = in_dr14;
    *(double *)(unsigned)((int)pdVar15 + -0x74) = in_xd12;
    *(double *)(unsigned)((int)pdVar15 + -0x7c) = in_dr12;
    *(undefined8 *)(unsigned)((int)pdVar15 + -0x84) = in_xd10;
    *(ulonglong *)(unsigned)((int)pdVar15 + -0x8c) = CONCAT44(in_fr10,in_fr11);
    *(undefined8 *)(unsigned)((int)pdVar15 + -0x94) = in_xd8;
    *(double *)(unsigned)((int)pdVar15 + -0x9c) = in_dr8;
    *(double *)(unsigned)((int)pdVar15 + -0xa4) = in_xd6;
    *(double *)(unsigned)((int)pdVar15 + -0xac) = in_dr6;
    *(double *)(unsigned)((int)pdVar15 + -0xb4) = in_xd4;
    *(ulonglong *)(unsigned)((int)pdVar15 + -0xbc) = in_dr4;
    *(double *)(unsigned)((int)pdVar15 + -0xc4) = in_xd2;
    *(undefined8 *)(unsigned)((int)pdVar15 + -0xcc) = in_dr2;
    *(undefined8 *)(unsigned)((int)pdVar15 + -0xd4) = in_xd0;
    *(double *)(unsigned)((int)pdVar15 + -0xdc) = in_dr0;
  }
  pdVar5 = (double *)(unsigned)((int)pdVar15 + -0x1c);
  ar6_00 = ((undefined1 *)(unsigned)0x8c4ab1f0);
  ar7_00 = ((undefined1 *)(unsigned)0x8c4ab1ec);
  pdVar11 = (double *)(unsigned)((int)pdVar15 + -0x14);
  *(unsigned *)(unsigned)((int)pdVar15 + -0xbc) = pdVar5;
  if (in_FPSCR_SZ == '\0') {
    dVar22 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4ab1e0),(*(undefined4 *)(unsigned)(unsigned)0x8c4ab1f0));
    in_dr0 = CONCAT44D(uVar18,(*(undefined4 *)(unsigned)(unsigned)0x8c4ab1e4));
  }
  else {
    in_xd2 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4ab1f4),(*(undefined4 *)(unsigned)(unsigned)0x8c4ab1f0));
    dVar22 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4ab1e4),(*(undefined4 *)(unsigned)(unsigned)0x8c4ab1e0));
  }
  pdVar14 = (double *)(unsigned)((int)pdVar15 + -0x18);
  if (in_FPSCR_PR == '\0') {
    dVar22 = CONCAT44D(F32HI(dVar22) * F32LO(dVar22),SUB84(dVar22,0));
  }
  else {
    dVar22 = dVar22 * dVar22;
  }
  if (in_FPSCR_SZ == '\0') {
    dVar22 = CONCAT44D((int)(D2U(dVar22) >> 0x20),(*(undefined4 *)(unsigned)(unsigned)0x8c4ab1ec));
  }
  else {
    in_xd2 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4ab1f0),(*(undefined4 *)(unsigned)(unsigned)0x8c4ab1ec));
  }
  if (in_FPSCR_PR == '\0') {
    fVar16 = F32LO(in_dr0) * F32LO(dVar22);
    dVar17 = CONCAT44D((int)((ulonglong)in_dr0 >> 0x20),fVar16);
    dVar22 = CONCAT44D(F32HI(dVar22) - fVar16,SUB84(dVar22,0));
  }
  else {
    dVar17 = in_dr0 * dVar22;
    dVar22 = dVar22 - dVar17;
  }
  if (in_FPSCR_SZ == '\0') {
    *(int *)(unsigned)pdVar5 = (int)(D2U(dVar22) >> 0x20);
  }
  else {
    *pdVar5 = dVar22;
  }
  *(unsigned *)(unsigned)((int)pdVar15 + -0xb8) = pdVar14;
  if (in_FPSCR_SZ == '\0') {
    dVar22 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4ab1e4),(*(undefined4 *)(unsigned)(unsigned)0x8c4ab1e8));
    dVar17 = CONCAT44D((int)(D2U(dVar17) >> 0x20),(*(undefined4 *)(unsigned)(unsigned)0x8c4ab1f0));
  }
  else {
    in_xd2 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4ab1ec),(*(undefined4 *)(unsigned)(unsigned)0x8c4ab1e8));
    dVar22 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4ab1e8),(*(undefined4 *)(unsigned)(unsigned)0x8c4ab1e4));
  }
  if (in_FPSCR_PR == '\0') {
    dVar22 = CONCAT44D(F32HI(dVar22) * F32LO(dVar22),SUB84(dVar22,0));
  }
  else {
    dVar22 = dVar22 * dVar22;
  }
  if (in_FPSCR_SZ == '\0') {
    dVar22 = CONCAT44D((int)(D2U(dVar22) >> 0x20),(*(undefined4 *)(unsigned)(unsigned)0x8c4ab1dc));
  }
  else {
    in_xd2 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4ab1e0),(*(undefined4 *)(unsigned)(unsigned)0x8c4ab1dc));
  }
  if (in_FPSCR_PR == '\0') {
    fVar16 = F32LO(dVar17) * F32LO(dVar22);
    dVar17 = CONCAT44D((int)(D2U(dVar17) >> 0x20),fVar16);
    dVar22 = CONCAT44D(F32HI(dVar22) - fVar16,SUB84(dVar22,0));
  }
  else {
    dVar17 = dVar17 * dVar22;
    dVar22 = dVar22 - dVar17;
  }
  if (in_FPSCR_SZ == '\0') {
    *(int *)(unsigned)pdVar14 = (int)(D2U(dVar22) >> 0x20);
  }
  else {
    *pdVar14 = dVar22;
  }
  *(unsigned *)(unsigned)((int)pdVar15 + -0xb4) = pdVar11;
  if (in_FPSCR_SZ == '\0') {
    dVar22 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4ab1ec),(*(undefined4 *)(unsigned)(unsigned)0x8c4ab1dc));
    dVar17 = CONCAT44D((int)(D2U(dVar17) >> 0x20),(*(undefined4 *)(unsigned)(unsigned)0x8c4ab1e0));
  }
  else {
    in_xd2 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4ab1e0),(*(undefined4 *)(unsigned)(unsigned)0x8c4ab1dc));
    dVar22 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4ab1f0),(*(undefined4 *)(unsigned)(unsigned)0x8c4ab1ec));
  }
  pdVar5 = (double *)(unsigned)((int)pdVar15 + -0x5c);
  if (in_FPSCR_PR == '\0') {
    dVar22 = CONCAT44D(F32HI(dVar22) * F32LO(dVar22),SUB84(dVar22,0));
  }
  else {
    dVar22 = dVar22 * dVar22;
  }
  if (in_FPSCR_SZ == '\0') {
    dVar22 = CONCAT44D((int)(D2U(dVar22) >> 0x20),(*(undefined4 *)(unsigned)(unsigned)0x8c4ab1e8));
  }
  else {
    in_xd2 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4ab1ec),(*(undefined4 *)(unsigned)(unsigned)0x8c4ab1e8));
  }
  if (in_FPSCR_PR == '\0') {
    dVar17 = CONCAT44D((int)(D2U(dVar17) >> 0x20),F32LO(dVar17) * F32LO(dVar22));
  }
  else {
    dVar17 = dVar17 * dVar22;
  }
  dVar25 = (double)(in_dr4 & 0xffffffff);
  if (in_FPSCR_PR == '\0') {
    dVar22 = CONCAT44D(F32HI(dVar22) - F32LO(dVar17),SUB84(dVar22,0));
  }
  else {
    dVar22 = dVar22 - dVar17;
  }
  uVar20 = (undefined4)(D2U(dVar22) >> 0x20);
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)(unsigned)pdVar11 = uVar20;
  }
  else {
    *pdVar11 = dVar22;
  }
  *(unsigned *)(unsigned)((int)pdVar15 + -0xc4) = pdVar5;
  if (in_FPSCR_SZ == '\0') {
    uVar19 = *(undefined4 *)(unsigned)((double *)(unsigned long)*(unsigned *)(unsigned)((int)pdVar15 + -0xbc));
    dVar22 = CONCAT44D(uVar20,uVar19);
    *(undefined4 *)(unsigned)pdVar5 = uVar19;
  }
  else {
    in_xd2 = *((double *)(unsigned long)*(unsigned *)(unsigned)((int)pdVar15 + -0xbc));
    *pdVar5 = in_xd2;
  }
  pdVar5 = (double *)(unsigned)((int)pdVar15 + -0x58);
  *(unsigned *)(unsigned)((int)pdVar15 + -0xbc) = pdVar5;
  if (in_FPSCR_SZ == '\0') {
    uVar20 = *(undefined4 *)(unsigned)((double *)(unsigned long)*(unsigned *)(unsigned)((int)pdVar15 + -0xb8));
    dVar22 = CONCAT44D((int)(D2U(dVar22) >> 0x20),uVar20);
    *(undefined4 *)(unsigned)pdVar5 = uVar20;
  }
  else {
    in_xd2 = *((double *)(unsigned long)*(unsigned *)(unsigned)((int)pdVar15 + -0xb8));
    *pdVar5 = in_xd2;
  }
  pdVar5 = (double *)(unsigned)((int)pdVar15 + -0x54);
  *(unsigned *)(unsigned)((int)pdVar15 + -0xb8) = pdVar5;
  if (in_FPSCR_SZ == '\0') {
    uVar20 = *(undefined4 *)(unsigned)((double *)(unsigned long)*(unsigned *)(unsigned)((int)pdVar15 + -0xb4));
    dVar22 = CONCAT44D((int)(D2U(dVar22) >> 0x20),uVar20);
    *(undefined4 *)(unsigned)pdVar5 = uVar20;
    *(undefined4 *)(unsigned)((int)pdVar15 + -0x50) = 0;
  }
  else {
    in_xd2 = *((double *)(unsigned long)*(unsigned *)(unsigned)((int)pdVar15 + -0xb4));
    *pdVar5 = in_xd2;
    *(double *)(unsigned)((int)pdVar15 + -0x50) = dVar25;
  }
  pdVar5 = (double *)(unsigned)((int)pdVar15 + -0x4c);
  *(unsigned *)(unsigned)((int)pdVar15 + -0xb4) = pdVar5;
  if (in_FPSCR_SZ == '\0') {
    dVar22 = CONCAT44D((int)(D2U(dVar22) >> 0x20),(*(undefined4 *)(unsigned)(unsigned)0x8c4ab1dc));
  }
  else {
    in_xd2 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4ab1e0),(*(undefined4 *)(unsigned)(unsigned)0x8c4ab1dc));
  }
  if (in_FPSCR_SZ == '\0') {
    *(float *)(unsigned)pdVar5 = -SUB84(dVar22,0);
  }
  else {
    *pdVar5 = in_xd2;
  }
  pdVar5 = (double *)(unsigned)((int)pdVar15 + -0x48);
  *(unsigned *)(unsigned)((int)pdVar15 + -0xa0) = pdVar5;
  fVar16 = (*(undefined4 *)(unsigned)(unsigned)0x8c4ab1e0);
  if (in_FPSCR_SZ != '\0') {
    in_xd2 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4ab1e4),(*(undefined4 *)(unsigned)(unsigned)0x8c4ab1e0));
    fVar16 = -SUB84(dVar22,0);
  }
  if (in_FPSCR_SZ == '\0') {
    *(float *)(unsigned)pdVar5 = -fVar16;
  }
  else {
    *pdVar5 = in_xd2;
  }
  pdVar5 = (double *)(unsigned)((int)pdVar15 + -0x44);
  *(unsigned *)(unsigned)((int)pdVar15 + -0xa4) = pdVar5;
  fVar28 = (*(undefined4 *)(unsigned)(unsigned)0x8c4ab1e4);
  if (in_FPSCR_SZ != '\0') {
    in_xd2 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4ab1e8),(*(undefined4 *)(unsigned)(unsigned)0x8c4ab1e4));
    fVar28 = -fVar16;
  }
  if (in_FPSCR_SZ == '\0') {
    *(float *)(unsigned)pdVar5 = -fVar28;
    *(undefined4 *)(unsigned)((int)pdVar15 + -0x40) = 0;
  }
  else {
    *pdVar5 = in_xd2;
    *(double *)(unsigned)((int)pdVar15 + -0x40) = dVar25;
  }
  pdVar5 = (double *)(unsigned)((int)pdVar15 + -0x3c);
  *(unsigned *)(unsigned)((int)pdVar15 + -0xac) = pdVar5;
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)(unsigned)pdVar5 = (*(undefined4 *)(unsigned)(unsigned)0x8c4ab1e8);
  }
  else {
    in_xd2 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4ab1ec),(*(undefined4 *)(unsigned)(unsigned)0x8c4ab1e8));
    *pdVar5 = in_xd2;
  }
  pdVar5 = (double *)(unsigned)((int)pdVar15 + -0x38);
  *(unsigned *)(unsigned)((int)pdVar15 + -0xa8) = pdVar5;
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)(unsigned)pdVar5 = (*(undefined4 *)(unsigned)(unsigned)0x8c4ab1ec);
  }
  else {
    in_xd2 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4ab1f0),(*(undefined4 *)(unsigned)(unsigned)0x8c4ab1ec));
    *pdVar5 = in_xd2;
  }
  pdVar5 = (double *)(unsigned)((int)pdVar15 + -0x34);
  *(unsigned *)(unsigned)((int)pdVar15 + -0xb0) = pdVar5;
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)(unsigned)pdVar5 = (*(undefined4 *)(unsigned)(unsigned)0x8c4ab1f0);
    *(undefined4 *)(unsigned)((int)pdVar15 + -0x30) = 0;
    *(undefined4 *)(unsigned)((int)pdVar15 + -0x2c) = 0;
  }
  else {
    in_xd2 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4ab1f4),(*(undefined4 *)(unsigned)(unsigned)0x8c4ab1f0));
    *pdVar5 = in_xd2;
    *(double *)(unsigned)((int)pdVar15 + -0x30) = dVar25;
    *(double *)(unsigned)((int)pdVar15 + -0x2c) = dVar25;
  }
  ar5_00 = (undefined1 *)(unsigned)((int)pdVar15 + -0x9c);
  dVar22 = CONCAT44D((int)(D2U(dVar22) >> 0x20),0x3f800000);
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)(unsigned)((int)pdVar15 + -0x28) = 0;
    *(undefined4 *)(unsigned)((int)pdVar15 + -0x24) = 0;
    *(undefined4 *)(unsigned)((int)pdVar15 + -0x20) = 0x3f800000;
  }
  else {
    *(double *)(unsigned)((int)pdVar15 + -0x28) = dVar25;
    *(double *)(unsigned)((int)pdVar15 + -0x24) = dVar25;
    *(double *)(unsigned)((int)pdVar15 + -0x20) = in_xd2;
  }
  ({ unsigned long ri0_ = (unsigned long)(
               *(undefined4 *)(unsigned)((int)pdVar15 + -0xd0)); vin0 = (unsigned)ri0_; vsp = (pdVar15 ? (unsigned long)pdVar15 - 220 : (unsigned long)(fr0_ - 268)); FUN_8c255d6c((undefined1 *)(unsigned)((int)pdVar15 + -0x5c),ar5_00,((undefined1 *)(unsigned)0x8c4ab1f0),((undefined1 *)(unsigned)0x8c4ab1ec)); });
  if (in_FPSCR_SZ == '\0') {
    dVar17 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4ab15c),SUB84(dVar17,0));
    dVar22 = CONCAT44D((int)(D2U(dVar22) >> 0x20),
                              *(undefined4 *)(unsigned)((double *)(unsigned long)*(unsigned *)(unsigned)((int)pdVar15 + -0xbc)));
  }
  else {
    dVar17 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4ab160),(*(undefined4 *)(unsigned)(unsigned)0x8c4ab15c));
    in_xd2 = *((double *)(unsigned long)*(unsigned *)(unsigned)((int)pdVar15 + -0xbc));
  }
  if (in_FPSCR_PR == '\0') {
    fVar16 = F32LO(dVar22) * F32HI(dVar17);
  }
  else {
    fVar16 = SUB84(dVar22 * dVar17,0);
  }
  if (in_FPSCR_SZ == '\0') {
    uVar23 = CONCAT44((int)*((ulonglong *)(unsigned long)*(unsigned *)(unsigned)((int)pdVar15 + -0xc4)),fVar16);
    fVar16 = F32LO(dVar17);
    fVar28 = (*(undefined4 *)(unsigned)(unsigned)0x8c4ab158);
  }
  else {
    uVar23 = *((ulonglong *)(unsigned long)*(unsigned *)(unsigned)((int)pdVar15 + -0xc4));
    fVar16 = (*(undefined4 *)(unsigned)(unsigned)0x8c4ab158);
    fVar28 = (*(undefined4 *)(unsigned)(unsigned)0x8c4ab15c);
  }
  if (in_FPSCR_PR == '\0') {
    uVar23 = (ulonglong)(uint)(fVar28 * (float)(uVar23 >> 0x20) + (float)uVar23);
  }
  if (in_FPSCR_SZ == '\0') {
    dVar22 = CONCAT44D(*(undefined4 *)(unsigned)((double *)(unsigned long)*(unsigned *)(unsigned)((int)pdVar15 + -0xb8)),(int)uVar23);
    fVar28 = (*(undefined4 *)(unsigned)(unsigned)0x8c4ab160);
  }
  else {
    dVar22 = *((double *)(unsigned long)*(unsigned *)(unsigned)((int)pdVar15 + -0xb8));
    fVar16 = (*(undefined4 *)(unsigned)(unsigned)0x8c4ab160);
    fVar28 = (*(undefined4 *)(unsigned)(unsigned)0x8c4ab164);
  }
  pdVar5 = (double *)(unsigned)((int)pdVar15 + -0x10);
  if (in_FPSCR_PR == '\0') {
    fVar21 = F32HI(dVar22);
    dVar22 = CONCAT44D(fVar21,fVar28 * fVar21 + F32LO(dVar22));
  }
  if (in_FPSCR_SZ == '\0') {
    *(int *)(unsigned)pdVar5 = SUB84(dVar22,0);
  }
  else {
    *pdVar5 = in_xd2;
  }
  if (in_FPSCR_SZ == '\0') {
    dVar17 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4ab15c),fVar16);
    dVar22 = CONCAT44D((int)(D2U(dVar22) >> 0x20),
                              *(undefined4 *)(unsigned)((double *)(unsigned long)*(unsigned *)(unsigned)((int)pdVar15 + -0xa0)));
  }
  else {
    dVar17 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4ab160),(*(undefined4 *)(unsigned)(unsigned)0x8c4ab15c));
    in_xd2 = *((double *)(unsigned long)*(unsigned *)(unsigned)((int)pdVar15 + -0xa0));
  }
  if (in_FPSCR_PR == '\0') {
    fVar16 = F32LO(dVar22) * F32HI(dVar17);
  }
  else {
    fVar16 = SUB84(dVar22 * dVar17,0);
  }
  if (in_FPSCR_SZ == '\0') {
    uVar23 = CONCAT44((int)*((ulonglong *)(unsigned long)*(unsigned *)(unsigned)((int)pdVar15 + -0xb4)),fVar16);
    fVar16 = F32LO(dVar17);
    fVar28 = (*(undefined4 *)(unsigned)(unsigned)0x8c4ab158);
  }
  else {
    uVar23 = *((ulonglong *)(unsigned long)*(unsigned *)(unsigned)((int)pdVar15 + -0xb4));
    fVar16 = (*(undefined4 *)(unsigned)(unsigned)0x8c4ab158);
    fVar28 = (*(undefined4 *)(unsigned)(unsigned)0x8c4ab15c);
  }
  if (in_FPSCR_PR == '\0') {
    uVar23 = (ulonglong)(uint)(fVar28 * (float)(uVar23 >> 0x20) + (float)uVar23);
  }
  if (in_FPSCR_SZ == '\0') {
    dVar22 = CONCAT44D(*(undefined4 *)(unsigned)((double *)(unsigned long)*(unsigned *)(unsigned)((int)pdVar15 + -0xa4)),(int)uVar23);
    fVar28 = (*(undefined4 *)(unsigned)(unsigned)0x8c4ab160);
  }
  else {
    dVar22 = *((double *)(unsigned long)*(unsigned *)(unsigned)((int)pdVar15 + -0xa4));
    fVar16 = (*(undefined4 *)(unsigned)(unsigned)0x8c4ab160);
    fVar28 = (*(undefined4 *)(unsigned)(unsigned)0x8c4ab164);
  }
  if (in_FPSCR_PR == '\0') {
    fVar21 = F32HI(dVar22);
    dVar22 = CONCAT44D(fVar21,fVar28 * fVar21 + F32LO(dVar22));
  }
  if (in_FPSCR_SZ == '\0') {
    *(int *)(unsigned)((int)pdVar15 + -0xc) = SUB84(dVar22,0);
  }
  else {
    *(double *)(unsigned)((int)pdVar15 + -0xc) = in_xd2;
  }
  if (in_FPSCR_SZ == '\0') {
    dVar17 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4ab15c),fVar16);
    dVar22 = CONCAT44D((int)(D2U(dVar22) >> 0x20),
                              *(undefined4 *)(unsigned)((double *)(unsigned long)*(unsigned *)(unsigned)((int)pdVar15 + -0xa8)));
  }
  else {
    dVar17 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4ab160),(*(undefined4 *)(unsigned)(unsigned)0x8c4ab15c));
    in_xd2 = *((double *)(unsigned long)*(unsigned *)(unsigned)((int)pdVar15 + -0xa8));
  }
  if (in_FPSCR_PR == '\0') {
    fVar16 = F32LO(dVar22) * F32HI(dVar17);
  }
  else {
    fVar16 = SUB84(dVar22 * dVar17,0);
  }
  if (in_FPSCR_SZ == '\0') {
    uVar23 = CONCAT44((int)*((ulonglong *)(unsigned long)*(unsigned *)(unsigned)((int)pdVar15 + -0xac)),fVar16);
    fVar16 = F32LO(dVar17);
    fVar28 = (*(undefined4 *)(unsigned)(unsigned)0x8c4ab158);
  }
  else {
    uVar23 = *((ulonglong *)(unsigned long)*(unsigned *)(unsigned)((int)pdVar15 + -0xac));
    fVar16 = (*(undefined4 *)(unsigned)(unsigned)0x8c4ab158);
    fVar28 = (*(undefined4 *)(unsigned)(unsigned)0x8c4ab15c);
  }
  if (in_FPSCR_PR == '\0') {
    uVar23 = (ulonglong)(uint)(fVar28 * (float)(uVar23 >> 0x20) + (float)uVar23);
  }
  if (in_FPSCR_SZ == '\0') {
    uVar23 = CONCAT44((int)*((ulonglong *)(unsigned long)*(unsigned *)(unsigned)((int)pdVar15 + -0xb0)),(int)uVar23);
    dVar22 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4ab160),fVar16);
  }
  else {
    uVar23 = *((ulonglong *)(unsigned long)*(unsigned *)(unsigned)((int)pdVar15 + -0xb0));
    dVar22 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4ab164),(*(undefined4 *)(unsigned)(unsigned)0x8c4ab160));
  }
  if (in_FPSCR_PR == '\0') {
    uVar23 = (ulonglong)
             (uint)(F32HI(dVar22) * (float)(uVar23 >> 0x20) + (float)uVar23);
  }
  if (in_FPSCR_SZ == '\0') {
    *(int *)(unsigned)((int)pdVar15 + -8) = (int)uVar23;
  }
  else {
    *(double *)(unsigned)((int)pdVar15 + -8) = in_xd2;
  }
  ({ unsigned long ri0_ = (unsigned long)(*(undefined4 *)(unsigned)((int)pdVar15 + -0xd0)); vin0 = (unsigned)ri0_; vsp = (pdVar15 ? (unsigned long)pdVar15 - 220 : (unsigned long)(fr0_ - 268)); FUN_8c25ce48(pdVar5,ar5_00,ar6_00,ar7_00); });
  (*(undefined4 *)(unsigned)(unsigned)0x8c4aa2a4) = 0xff000000;
  (*(undefined4 *)(unsigned)(unsigned)0x8c4aa2a0) = (vsp = (pdVar15 ? (unsigned long)pdVar15 - 220 : (unsigned long)(fr0_ - 268)), FUN_8c213f28(pdVar5,ar5_00,ar6_00,ar7_00));
  uVar4 = *(uint *)(unsigned)((int)pdVar15 + -0xc0);
  iVar9 = 0;
  iVar10 = 0;
  *(uint *)(unsigned)((int)pdVar15 + -0xc0) = *(uint *)(unsigned)((int)pdVar15 + -0xc0) & 0x3fff;
  *(uint *)(unsigned)((int)pdVar15 + -0xc4) = (uVar4 >> 0xe & 3) << 1;
  do {
    psVar12 = ((short *)(unsigned long)*(unsigned *)(unsigned)((int)pdVar15 + -0xd0));
    *(unsigned *)(unsigned)((int)pdVar15 + -0xd0) = psVar12 + 1;
    psVar6 = ((short *)(unsigned long)*(unsigned *)(unsigned)((int)pdVar15 + -0xd0));
    iVar13 = (int)*psVar12;
    *(unsigned *)(unsigned)((int)pdVar15 + -0xd0) = psVar6 + 1;
    pdVar5 = (double *)(unsigned)(*psVar6 * 0x10 + *(int *)(unsigned)((int)pdVar15 + -200));
    if (iVar13 < 0) {
      iVar13 = -iVar13;
    }
    psVar6 = ((short *)(unsigned long)*(unsigned *)(unsigned)((int)pdVar15 + -0xd0));
    iVar10 = iVar10 + iVar13;
    *(unsigned *)(unsigned)((int)pdVar15 + -0xd0) = psVar6 + 1;
    sVar1 = *psVar6;
    iVar8 = 0;
    if (in_FPSCR_SZ == '\0') {
      in_dr6 = CONCAT44D(*(undefined4 *)(unsigned)((int)pdVar15 + -0xcc),SUB84(in_dr6,0));
    }
    else {
      in_dr6 = *(double *)(unsigned)((int)pdVar15 + -0xcc);
    }
    iVar13 = iVar13 + -2;
    psVar6 = ((short *)(unsigned long)*(unsigned *)(unsigned)((int)pdVar15 + -0xd0));
    *(unsigned *)(unsigned)((int)pdVar15 + -0xd0) = psVar6 + 1;
    sVar2 = *psVar6;
    psVar6 = ((short *)(unsigned long)*(unsigned *)(unsigned)((int)pdVar15 + -0xd0));
    dVar17 = in_xd2;
    if (in_FPSCR_SZ == '\0') {
      dVar17 = CONCAT44D((float)(int)sVar1,SUB84(dVar25,0));
    }
    *(unsigned *)(unsigned)((int)pdVar15 + -0xd0) = psVar6 + 1;
    fVar16 = F32HI(in_dr6);
    if (in_FPSCR_PR == '\0') {
      dVar17 = CONCAT44D(F32HI(dVar17) * fVar16,SUB84(dVar17,0));
    }
    else {
      dVar17 = dVar17 * in_dr6;
    }
    pdVar11 = (double *)(unsigned)(*psVar6 * 0x10 + *(int *)(unsigned)((int)pdVar15 + -200));
    dVar25 = in_xd2;
    if (in_FPSCR_SZ == '\0') {
      dVar17 = CONCAT44D((int)(D2U(dVar17) >> 0x20),(float)(int)sVar2);
      dVar25 = in_xd4;
    }
    in_xd4 = dVar25;
    if (in_FPSCR_PR == '\0') {
      dVar25 = CONCAT44D((int)(D2U(dVar17) >> 0x20),F32LO(dVar17) * fVar16);
    }
    else {
      dVar25 = dVar17 * in_dr6;
    }
    psVar6 = ((short *)(unsigned long)*(unsigned *)(unsigned)((int)pdVar15 + -0xd0));
    *(unsigned *)(unsigned)((int)pdVar15 + -0xd0) = psVar6 + 1;
    sVar1 = *psVar6;
    psVar6 = ((short *)(unsigned long)*(unsigned *)(unsigned)((int)pdVar15 + -0xd0));
    *(unsigned *)(unsigned)((int)pdVar15 + -0xd0) = psVar6 + 1;
    dVar17 = in_xd2;
    if (in_FPSCR_SZ == '\0') {
      in_dr14 = CONCAT44D((int)((ulonglong)in_dr14 >> 0x20),(float)(int)sVar1);
      dVar17 = in_xd14;
    }
    if (in_FPSCR_PR == '\0') {
      fVar28 = F32LO(in_dr14) * fVar16;
    }
    else {
      fVar28 = SUB84(in_dr14 * in_dr6,0);
    }
    dVar24 = in_xd2;
    if (in_FPSCR_SZ == '\0') {
      dVar24 = CONCAT44D((float)(int)*psVar6,fVar28);
    }
    if (in_FPSCR_PR == '\0') {
      in_dr14 = CONCAT44D(F32HI(dVar24) * fVar16,SUB84(dVar24,0));
    }
    else {
      in_dr14 = dVar24 * in_dr6;
    }
    do {
      psVar6 = ((short *)(unsigned long)*(unsigned *)(unsigned)((int)pdVar15 + -0xd0));
      *(unsigned *)(unsigned)((int)pdVar15 + -0xd0) = psVar6 + 1;
      pdVar14 = (double *)(unsigned)(*psVar6 * 0x10 + *(int *)(unsigned)((int)pdVar15 + -200));
      psVar6 = ((short *)(unsigned long)*(unsigned *)(unsigned)((int)pdVar15 + -0xd0));
      *(unsigned *)(unsigned)((int)pdVar15 + -0xd0) = psVar6 + 1;
      if (in_FPSCR_SZ == '\0') {
        fVar16 = *(float *)(unsigned)((int)pdVar15 + -0xcc);
      }
      else {
        fVar16 = (float)((ulonglong)*(undefined8 *)(unsigned)((int)pdVar15 + -0xcc) >> 0x20);
      }
      psVar12 = ((short *)(unsigned long)*(unsigned *)(unsigned)((int)pdVar15 + -0xd0));
      fVar28 = (float)(int)*psVar6;
      *(unsigned *)(unsigned)((int)pdVar15 + -0xd0) = psVar12 + 1;
      if (in_FPSCR_SZ == '\0') {
        in_dr6 = CONCAT44D(*(undefined4 *)(unsigned)(pdVar5 + 1),SUB84(in_dr6,0));
        in_dr12 = CONCAT44D((int)((ulonglong)in_dr12 >> 0x20),fVar28);
      }
      else {
        in_dr6 = pdVar5[1];
        in_xd12 = in_xd2;
      }
      if (in_FPSCR_PR == '\0') {
        fVar28 = F32LO(in_dr12) * fVar16;
      }
      else {
        fVar28 = SUB84(in_dr12 * CONCAT44D(fVar16,fVar28),0);
      }
      fVar21 = (float)(int)*psVar12;
      dVar24 = in_xd2;
      if (in_FPSCR_SZ == '\0') {
        dVar24 = CONCAT44D(fVar21,fVar28);
      }
      if (in_FPSCR_PR == '\0') {
        in_dr12 = CONCAT44D(F32HI(dVar24) * fVar16,SUB84(dVar24,0));
      }
      else {
        in_dr12 = dVar24 * CONCAT44D(fVar16,fVar21);
      }
      dVar24 = (double)((ulonglong)(uint)fVar16 << 0x20);
      fVar16 = F32HI(in_dr6);
      if (in_FPSCR_PR == '\0') {
        bVar29 = 0.0 < fVar16;
      }
      else {
        bVar29 = dVar24 < in_dr6;
      }
      bVar3 = false;
      if (bVar29) {
        if (in_FPSCR_SZ == '\0') {
          dVar24 = (double)((ulonglong)*(uint *)(unsigned)(pdVar11 + 1) << 0x20);
        }
        else {
          dVar24 = pdVar11[1];
        }
        if (in_FPSCR_PR != '\0' || F32HI(dVar24) <= SUB84(dVar24,0))
        goto LAB_8c2169e6;
        if (in_FPSCR_SZ == '\0') {
          fVar28 = *(float *)(unsigned)(pdVar14 + 1);
        }
        else {
          fVar28 = (float)((ulonglong)pdVar14[1] >> 0x20);
        }
        dVar24 = (double)((ulonglong)(uint)fVar28 << 0x20);
        if (in_FPSCR_PR != '\0' || fVar28 <= 0.0) goto LAB_8c2169e6;
        dVar24 = CONCAT44D(fVar28,0x3f800000);
        if (in_FPSCR_PR == '\0') {
          bVar29 = fVar16 < 1.0;
        }
        else {
          bVar29 = in_dr6 < dVar24;
        }
        if (!bVar29) goto LAB_8c2169e6;
        if (in_FPSCR_SZ == '\0') {
          fVar16 = *(float *)(unsigned)(pdVar11 + 1);
        }
        else {
          fVar16 = (float)((ulonglong)pdVar11[1] >> 0x20);
        }
        dVar24 = CONCAT44D(fVar16,0x3f800000);
        if (in_FPSCR_PR != '\0' || 1.0 <= fVar16) goto LAB_8c2169e6;
        if (in_FPSCR_SZ == '\0') {
          fVar16 = *(float *)(unsigned)(pdVar14 + 1);
        }
        else {
          fVar16 = (float)((ulonglong)pdVar14[1] >> 0x20);
        }
        dVar24 = CONCAT44D(fVar16,0x3f800000);
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
            in_dr8 = CONCAT44D(*(undefined4 *)(unsigned)pdVar11,SUB84(in_dr8,0));
            pdVar7 = (double *)(unsigned)((int)pdVar11 + 4);
          }
          else {
            in_dr8 = *pdVar11;
            in_xd6 = pdVar11[1];
            pdVar7 = pdVar11 + 2;
          }
          in_dr6 = *pdVar7;
          *(undefined4 *)(unsigned)((int)ar7 + 0x1c) = (*(undefined4 *)(unsigned)(unsigned)0x8c4aa2a0);
          *(undefined4 *)(unsigned)(ar7 + 3) = (*(undefined4 *)(unsigned)(unsigned)0x8c4aa2a4);
          if (in_FPSCR_SZ == '\0') {
            *(uint *)(unsigned)((int)ar7 + 0x14) = uVar4;
            *(int *)(unsigned)(ar7 + 2) = SUB84(in_dr14,0);
            *(int *)(unsigned)((int)ar7 + 0xc) = (int)((ulonglong)in_dr6 >> 0x20);
            *(int *)(unsigned)(ar7 + 1) = SUB84(in_dr6,0);
            pdVar7 = (double *)(unsigned)((int)ar7 + 4);
            *(int *)(unsigned)pdVar7 = (int)((ulonglong)in_dr8 >> 0x20);
          }
          else {
            ar7[2] = in_dr14;
            ar7[1] = dVar17;
            *ar7 = in_dr6;
            ar7[-1] = in_xd6;
            pdVar7 = ar7 + -2;
            *pdVar7 = in_dr8;
          }
          *(undefined4 *)(unsigned)((int)pdVar7 + -4) = 0xf0000000;
          iVar9 = iVar9 + iVar8 + 1;
          iVar8 = 0;
          ar7 = (double *)(unsigned)((int)pdVar7 + 0x1c);
        }
      }
      else {
        if (iVar8 == 0) {
          if (in_FPSCR_SZ == '\0') {
            in_dr8 = CONCAT44D(*(undefined4 *)(unsigned)pdVar5,SUB84(in_dr8,0));
            pdVar7 = (double *)(unsigned)((int)pdVar5 + 4);
          }
          else {
            in_dr8 = *pdVar5;
            in_xd6 = pdVar5[1];
            pdVar7 = pdVar5 + 2;
          }
          dVar27 = *pdVar7;
          *(undefined4 *)(unsigned)((int)ar7 + 0x1c) = (*(undefined4 *)(unsigned)(unsigned)0x8c4aa2a0);
          *(undefined4 *)(unsigned)(ar7 + 3) = (*(undefined4 *)(unsigned)(unsigned)0x8c4aa2a4);
          if (in_FPSCR_SZ == '\0') {
            *(int *)(unsigned)((int)ar7 + 0x14) = SUB84(dVar25,0);
            *(int *)(unsigned)(ar7 + 2) = (int)(D2U(dVar25) >> 0x20);
            *(int *)(unsigned)((int)ar7 + 0xc) = (int)(D2U(dVar27) >> 0x20);
            *(int *)(unsigned)(ar7 + 1) = SUB84(dVar27,0);
            pdVar7 = (double *)(unsigned)((int)ar7 + 4);
            *(int *)(unsigned)pdVar7 = (int)((ulonglong)in_dr8 >> 0x20);
          }
          else {
            ar7[2] = in_xd4;
            ar7[1] = dVar25;
            *ar7 = dVar27;
            ar7[-1] = in_xd6;
            pdVar7 = ar7 + -2;
            *pdVar7 = in_dr8;
          }
          *(undefined4 *)(unsigned)((int)pdVar7 + -4) = 0xe0000000;
          iVar8 = 1;
          ar7 = (double *)(unsigned)((int)pdVar7 + 0x1c);
        }
        if (in_FPSCR_SZ == '\0') {
          in_dr8 = CONCAT44D(*(undefined4 *)(unsigned)((int)pdVar11 + 4),SUB84(in_dr8,0));
          in_dr6 = CONCAT44D(*(undefined4 *)(unsigned)(pdVar11 + 1),*(undefined4 *)(unsigned)pdVar11);
        }
        else {
          in_xd6 = *pdVar11;
          in_dr8 = pdVar11[1];
          in_dr6 = pdVar11[2];
        }
        *(undefined4 *)(unsigned)((int)ar7 + 0x1c) = (*(undefined4 *)(unsigned)(unsigned)0x8c4aa2a0);
        *(undefined4 *)(unsigned)(ar7 + 3) = (*(undefined4 *)(unsigned)(unsigned)0x8c4aa2a4);
        if (in_FPSCR_SZ == '\0') {
          *(uint *)(unsigned)((int)ar7 + 0x14) = uVar4;
          *(int *)(unsigned)(ar7 + 2) = SUB84(in_dr14,0);
          *(int *)(unsigned)((int)ar7 + 0xc) = (int)((ulonglong)in_dr6 >> 0x20);
          *(int *)(unsigned)(ar7 + 1) = (int)((ulonglong)in_dr8 >> 0x20);
          pdVar7 = (double *)(unsigned)((int)ar7 + 4);
          *(int *)(unsigned)pdVar7 = SUB84(in_dr6,0);
        }
        else {
          ar7[2] = in_dr14;
          ar7[1] = dVar17;
          *ar7 = in_dr6;
          ar7[-1] = in_dr8;
          pdVar7 = ar7 + -2;
          *pdVar7 = in_xd6;
        }
        *(undefined4 *)(unsigned)((int)pdVar7 + -4) = 0xe0000000;
        ar7 = (double *)(unsigned)((int)pdVar7 + 0x1c);
        iVar8 = iVar8 + 1;
      }
      if (bVar3) {
        if (in_FPSCR_SZ == '\0') {
          in_dr6 = CONCAT44D(*(undefined4 *)(unsigned)(pdVar5 + 1),SUB84(in_dr6,0));
        }
        else {
          in_dr6 = pdVar5[1];
        }
        fVar16 = F32HI(in_dr6);
        if (in_FPSCR_PR == '\0') {
          bVar29 = 0.0 < fVar16;
        }
        else {
          bVar29 = (double)(D2U(dVar24) & 0xffffffff00000000) < in_dr6;
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
          ar7 = (double *)(unsigned)(vsp = (pdVar15 ? (unsigned long)pdVar15 - 220 : (unsigned long)(fr0_ - 268)), FUN_8c216b84(pdVar5,pdVar11,pdVar14,ar7));
        }
        else {
LAB_8c216aa8:
          if (in_FPSCR_SZ == '\0') {
            fVar16 = *(float *)(unsigned)(pdVar11 + 1);
          }
          else {
            fVar16 = (float)((ulonglong)pdVar11[1] >> 0x20);
          }
          if (in_FPSCR_PR == '\0' && 0.0 < fVar16) {
            if (in_FPSCR_SZ == '\0') {
              dVar22 = CONCAT44D((int)(D2U(dVar22) >> 0x20),
                                        *(undefined4 *)(unsigned)(pdVar11 + 1));
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
            fVar16 = *(float *)(unsigned)(pdVar14 + 1);
          }
          else {
            fVar16 = (float)((ulonglong)pdVar14[1] >> 0x20);
          }
          if (in_FPSCR_PR == '\0' && 0.0 < fVar16) {
            if (in_FPSCR_SZ == '\0') {
              dVar22 = CONCAT44D((int)(D2U(dVar22) >> 0x20),
                                        *(undefined4 *)(unsigned)(pdVar14 + 1));
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
      *(int *)(unsigned)((int)pdVar15 + -0xd0) =
           *(int *)(unsigned)((int)pdVar15 + -0xd0) + *(int *)(unsigned)((int)pdVar15 + -0xc4);
      dVar24 = in_dr14;
      in_xd14 = in_xd12;
      if (in_FPSCR_SZ == '\0') {
        dVar24 = CONCAT44D((int)((ulonglong)in_dr14 >> 0x20),SUB84(in_dr12,0));
        in_xd14 = dVar17;
        dVar17 = CONCAT44D(SUB84(in_dr14,0),SUB84(dVar25,0));
      }
      iVar13 = iVar13 + -1;
      uVar20 = (undefined4)((ulonglong)in_dr12 >> 0x20);
      in_dr14 = in_dr12;
      dVar25 = dVar17;
      if (in_FPSCR_SZ == '\0') {
        in_dr14 = CONCAT44D(uVar20,SUB84(dVar24,0));
        dVar25 = CONCAT44D((int)(D2U(dVar17) >> 0x20),(int)(D2U(dVar24) >> 0x20))
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
        in_dr6 = CONCAT44D(*(undefined4 *)(unsigned)((int)pdVar14 + 4),SUB84(in_dr6,0));
        dVar25 = CONCAT44D(*(undefined4 *)(unsigned)(pdVar14 + 1),*(undefined4 *)(unsigned)pdVar14);
      }
      else {
        in_xd4 = *pdVar14;
        in_dr6 = pdVar14[1];
        dVar25 = pdVar14[2];
      }
      *(undefined4 *)(unsigned)((int)ar7 + 0x1c) = (*(undefined4 *)(unsigned)(unsigned)0x8c4aa2a0);
      *(undefined4 *)(unsigned)(ar7 + 3) = (*(undefined4 *)(unsigned)(unsigned)0x8c4aa2a4);
      if (in_FPSCR_SZ == '\0') {
        *(undefined4 *)(unsigned)((int)ar7 + 0x14) = uVar20;
        *(int *)(unsigned)(ar7 + 2) = SUB84(in_dr12,0);
        *(int *)(unsigned)((int)ar7 + 0xc) = (int)(D2U(dVar25) >> 0x20);
        *(int *)(unsigned)(ar7 + 1) = (int)((ulonglong)in_dr6 >> 0x20);
        pdVar5 = (double *)(unsigned)((int)ar7 + 4);
        *(int *)(unsigned)pdVar5 = SUB84(dVar25,0);
      }
      else {
        ar7[2] = in_dr12;
        ar7[1] = in_xd12;
        *ar7 = dVar25;
        ar7[-1] = in_dr6;
        pdVar5 = ar7 + -2;
        *pdVar5 = in_xd4;
      }
      *(undefined4 *)(unsigned)((int)pdVar5 + -4) = 0xf0000000;
      iVar9 = iVar9 + iVar8 + 1;
      ar7 = (double *)(unsigned)((int)pdVar5 + 0x1c);
    }
    iVar13 = *(int *)(unsigned)((int)pdVar15 + -0xc0);
    *(int *)(unsigned)((int)pdVar15 + -0xc0) = iVar13 + -1;
    if (iVar13 + -1 == 0) {
      (*(undefined4 *)(unsigned)(unsigned)0x8c4aa520) = (*(undefined4 *)(unsigned)(unsigned)0x8c4aa520) + iVar9;
      (*(undefined4 *)(unsigned)(unsigned)0x8c4aa51c) = (*(undefined4 *)(unsigned)(unsigned)0x8c4aa51c) + iVar10;
      return ar7;
    }
  } while( true );
}

__asm__(".globl _FUN_8c2166e8\n.set _FUN_8c2166e8, _FUN_8c2166e8_def\n");
