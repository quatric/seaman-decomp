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
double * FUN_8c2163d4_def(short *ar4,int ar5,uint ar6,double *ar7)

{
  ring[rp++ & 255] = "FUN_8c2163d4";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 36; for (int i_ = 0; i_ < 36; i_++) z_[i_] = 0; }
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
  double in_dr0 = 0;
  undefined4 uVar14;
  undefined4 uVar15;
  float fVar16;
  undefined8 in_dr2 = 0;
  double dVar17;
  ulonglong uVar18;
  float fVar19;
  ulonglong in_dr4 = 0;
  double dVar20;
  double dVar21;
  double in_dr6 = 0;
  double in_dr8 = 0;
  undefined4 in_fr11 = 0;
  undefined4 in_fr10 = 0;
  undefined4 in_fr13 = 0;
  undefined4 in_fr12 = 0;
  float in_fr15 = 0;
  undefined4 in_fr14 = 0;
  undefined8 in_xd0 = 0;
  double in_xd2 = 0;
  double in_xd4 = 0;
  double in_xd6 = 0;
  undefined8 in_xd8 = 0;
  undefined8 in_xd10 = 0;
  undefined8 in_xd12 = 0;
  undefined4 in_PR = 0;
  char in_FPSCR_PR = 0;
  char in_FPSCR_SZ = 0;
  double dVar13;
  
  if (in_FPSCR_SZ == '\0') {
    puVar11 = ((undefined1 *)(fr0_ - 0x1c));
  }
  else {
    puVar11 = ((undefined1 *)(fr0_ - 0x20));
  }
  *(undefined4 *)(unsigned)(puVar11 + -4) = in_PR;
  fVar12 = (float)(in_dr4 >> 0x20);
  uVar1 = (undefined4)((ulonglong)in_dr0 >> 0x20);
  if (in_FPSCR_SZ == '\0') {
    *(float *)(unsigned)(puVar11 + -0x60) = fVar12;
    *(undefined4 *)(unsigned)(puVar11 + -100) = in_fr14;
    *(undefined4 *)(unsigned)(puVar11 + -0x68) = in_fr13;
    *(undefined4 *)(unsigned)(puVar11 + -0x6c) = in_fr12;
    *(undefined4 *)(unsigned)(puVar11 + -0x70) = in_fr11;
    *(undefined4 *)(unsigned)(puVar11 + -0x74) = in_fr10;
    *(int *)(unsigned)(puVar11 + -0x78) = SUB84(in_dr8,0);
    *(int *)(unsigned)(puVar11 + -0x7c) = (int)((ulonglong)in_dr8 >> 0x20);
    *(int *)(unsigned)(puVar11 + -0x80) = SUB84(in_dr6,0);
    *(int *)(unsigned)(puVar11 + -0x84) = (int)((ulonglong)in_dr6 >> 0x20);
    *(int *)(unsigned)(puVar11 + -0x88) = (int)in_dr4;
    *(float *)(unsigned)(puVar11 + -0x8c) = fVar12;
    *(int *)(unsigned)(puVar11 + -0x90) = (int)in_dr2;
    *(int *)(unsigned)(puVar11 + -0x94) = (int)((ulonglong)in_dr2 >> 0x20);
    *(int *)(unsigned)(puVar11 + -0x98) = SUB84(in_dr0,0);
    *(undefined4 *)(unsigned)(puVar11 + -0x9c) = uVar1;
    in_fr15 = fVar12;
  }
  else {
    *(ulonglong *)(unsigned)(puVar11 + -100) = in_dr4;
    *(ulonglong *)(unsigned)(puVar11 + -0x6c) = CONCAT44(in_fr14,in_fr15);
    *(undefined8 *)(unsigned)(puVar11 + -0x74) = in_xd12;
    *(ulonglong *)(unsigned)(puVar11 + -0x7c) = CONCAT44(in_fr12,in_fr13);
    *(undefined8 *)(unsigned)(puVar11 + -0x84) = in_xd10;
    *(ulonglong *)(unsigned)(puVar11 + -0x8c) = CONCAT44(in_fr10,in_fr11);
    *(undefined8 *)(unsigned)(puVar11 + -0x94) = in_xd8;
    *(double *)(unsigned)(puVar11 + -0x9c) = in_dr8;
    *(double *)(unsigned)(puVar11 + -0xa4) = in_xd6;
    *(double *)(unsigned)(puVar11 + -0xac) = in_dr6;
    *(double *)(unsigned)(puVar11 + -0xb4) = in_xd4;
    *(ulonglong *)(unsigned)(puVar11 + -0xbc) = in_dr4;
    *(double *)(unsigned)(puVar11 + -0xc4) = in_xd2;
    *(undefined8 *)(unsigned)(puVar11 + -0xcc) = in_dr2;
    *(undefined8 *)(unsigned)(puVar11 + -0xd4) = in_xd0;
    *(double *)(unsigned)(puVar11 + -0xdc) = in_dr0;
  }
  pdVar2 = (double *)(unsigned)(puVar11 + -0x1c);
  ar6_00 = ((undefined1 *)(unsigned)0x8c4ab1f0);
  ar7_00 = ((undefined1 *)(unsigned)0x8c4ab1ec);
  *(unsigned *)(unsigned)(puVar11 + -0xbc) = pdVar2;
  if (in_FPSCR_SZ == '\0') {
    dVar17 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4ab1e0),(*(undefined4 *)(unsigned)(unsigned)0x8c4ab1f0));
    in_dr0 = CONCAT44D(uVar1,(*(undefined4 *)(unsigned)(unsigned)0x8c4ab1e4));
  }
  else {
    dVar17 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4ab1e4),(*(undefined4 *)(unsigned)(unsigned)0x8c4ab1e0));
    in_xd2 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4ab1f4),(*(undefined4 *)(unsigned)(unsigned)0x8c4ab1f0));
  }
  pdVar10 = (double *)(unsigned)(puVar11 + -0x18);
  pdVar9 = (double *)(unsigned)(puVar11 + -0x14);
  if (in_FPSCR_PR == '\0') {
    dVar17 = CONCAT44D(F32HI(dVar17) * F32LO(dVar17),SUB84(dVar17,0));
  }
  else {
    dVar17 = dVar17 * dVar17;
  }
  if (in_FPSCR_SZ == '\0') {
    dVar17 = CONCAT44D((int)(D2U(dVar17) >> 0x20),(*(undefined4 *)(unsigned)(unsigned)0x8c4ab1ec));
  }
  else {
    in_xd2 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4ab1f0),(*(undefined4 *)(unsigned)(unsigned)0x8c4ab1ec));
  }
  if (in_FPSCR_PR == '\0') {
    fVar12 = F32LO(in_dr0) * F32LO(dVar17);
    dVar13 = CONCAT44D((int)((ulonglong)in_dr0 >> 0x20),fVar12);
    dVar17 = CONCAT44D(F32HI(dVar17) - fVar12,SUB84(dVar17,0));
  }
  else {
    dVar13 = in_dr0 * dVar17;
    dVar17 = dVar17 - dVar13;
  }
  if (in_FPSCR_SZ == '\0') {
    *(int *)(unsigned)pdVar2 = (int)(D2U(dVar17) >> 0x20);
  }
  else {
    *pdVar2 = dVar17;
  }
  *(unsigned *)(unsigned)(puVar11 + -0xb8) = pdVar10;
  if (in_FPSCR_SZ == '\0') {
    dVar17 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4ab1e4),(*(undefined4 *)(unsigned)(unsigned)0x8c4ab1e8));
    dVar13 = CONCAT44D((int)(D2U(dVar13) >> 0x20),(*(undefined4 *)(unsigned)(unsigned)0x8c4ab1f0));
  }
  else {
    dVar17 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4ab1e8),(*(undefined4 *)(unsigned)(unsigned)0x8c4ab1e4));
    in_xd2 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4ab1ec),(*(undefined4 *)(unsigned)(unsigned)0x8c4ab1e8));
  }
  if (in_FPSCR_PR == '\0') {
    dVar17 = CONCAT44D(F32HI(dVar17) * F32LO(dVar17),SUB84(dVar17,0));
  }
  else {
    dVar17 = dVar17 * dVar17;
  }
  if (in_FPSCR_SZ == '\0') {
    dVar17 = CONCAT44D((int)(D2U(dVar17) >> 0x20),(*(undefined4 *)(unsigned)(unsigned)0x8c4ab1dc));
  }
  else {
    in_xd2 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4ab1e0),(*(undefined4 *)(unsigned)(unsigned)0x8c4ab1dc));
  }
  if (in_FPSCR_PR == '\0') {
    fVar12 = F32LO(dVar13) * F32LO(dVar17);
    dVar13 = CONCAT44D((int)(D2U(dVar13) >> 0x20),fVar12);
    dVar17 = CONCAT44D(F32HI(dVar17) - fVar12,SUB84(dVar17,0));
  }
  else {
    dVar13 = dVar13 * dVar17;
    dVar17 = dVar17 - dVar13;
  }
  if (in_FPSCR_SZ == '\0') {
    *(int *)(unsigned)pdVar10 = (int)(D2U(dVar17) >> 0x20);
  }
  else {
    *pdVar10 = dVar17;
  }
  *(unsigned *)(unsigned)(puVar11 + -0xb4) = pdVar9;
  if (in_FPSCR_SZ == '\0') {
    dVar17 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4ab1ec),(*(undefined4 *)(unsigned)(unsigned)0x8c4ab1dc));
  }
  else {
    in_xd2 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4ab1e0),(*(undefined4 *)(unsigned)(unsigned)0x8c4ab1dc));
    dVar17 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4ab1f0),(*(undefined4 *)(unsigned)(unsigned)0x8c4ab1ec));
  }
  if (in_FPSCR_PR == '\0') {
    dVar17 = CONCAT44D(F32HI(dVar17) * F32LO(dVar17),SUB84(dVar17,0));
  }
  else {
    dVar17 = dVar17 * dVar17;
  }
  if (in_FPSCR_SZ == '\0') {
    dVar13 = CONCAT44D((int)(D2U(dVar13) >> 0x20),(*(undefined4 *)(unsigned)(unsigned)0x8c4ab1e0));
    dVar17 = CONCAT44D((int)(D2U(dVar17) >> 0x20),(*(undefined4 *)(unsigned)(unsigned)0x8c4ab1e8));
  }
  else {
    in_xd2 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4ab1ec),(*(undefined4 *)(unsigned)(unsigned)0x8c4ab1e8));
  }
  pdVar2 = (double *)(unsigned)(puVar11 + -0x5c);
  dVar21 = (double)(in_dr4 & 0xffffffff);
  if (in_FPSCR_PR == '\0') {
    fVar12 = F32LO(dVar13) * F32LO(dVar17);
    dVar13 = (double)(ulonglong)(uint)fVar12;
    dVar17 = CONCAT44D(F32HI(dVar17) - fVar12,SUB84(dVar17,0));
  }
  else {
    dVar13 = dVar13 * dVar17;
    dVar17 = dVar17 - dVar13;
  }
  uVar1 = SUB84(dVar13,0);
  uVar15 = (undefined4)(D2U(dVar17) >> 0x20);
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)(unsigned)pdVar9 = uVar15;
  }
  else {
    *pdVar9 = dVar17;
  }
  *(unsigned *)(unsigned)(puVar11 + -0xc0) = pdVar2;
  if (in_FPSCR_SZ == '\0') {
    uVar14 = *(undefined4 *)(unsigned)((double *)(unsigned long)*(unsigned *)(unsigned)(puVar11 + -0xbc));
    dVar17 = CONCAT44D(uVar15,uVar14);
    *(undefined4 *)(unsigned)pdVar2 = uVar14;
  }
  else {
    in_xd2 = *((double *)(unsigned long)*(unsigned *)(unsigned)(puVar11 + -0xbc));
    *pdVar2 = in_xd2;
  }
  pdVar2 = (double *)(unsigned)(puVar11 + -0x58);
  *(unsigned *)(unsigned)(puVar11 + -0xbc) = pdVar2;
  if (in_FPSCR_SZ == '\0') {
    uVar15 = *(undefined4 *)(unsigned)((double *)(unsigned long)*(unsigned *)(unsigned)(puVar11 + -0xb8));
    dVar17 = CONCAT44D((int)(D2U(dVar17) >> 0x20),uVar15);
    *(undefined4 *)(unsigned)pdVar2 = uVar15;
  }
  else {
    in_xd2 = *((double *)(unsigned long)*(unsigned *)(unsigned)(puVar11 + -0xb8));
    *pdVar2 = in_xd2;
  }
  pdVar2 = (double *)(unsigned)(puVar11 + -0x54);
  *(unsigned *)(unsigned)(puVar11 + -0xb8) = pdVar2;
  if (in_FPSCR_SZ == '\0') {
    uVar15 = *(undefined4 *)(unsigned)((double *)(unsigned long)*(unsigned *)(unsigned)(puVar11 + -0xb4));
    dVar17 = CONCAT44D((int)(D2U(dVar17) >> 0x20),uVar15);
    *(undefined4 *)(unsigned)pdVar2 = uVar15;
    *(undefined4 *)(unsigned)(puVar11 + -0x50) = 0;
  }
  else {
    in_xd2 = *((double *)(unsigned long)*(unsigned *)(unsigned)(puVar11 + -0xb4));
    *pdVar2 = in_xd2;
    *(double *)(unsigned)(puVar11 + -0x50) = dVar21;
  }
  pdVar2 = (double *)(unsigned)(puVar11 + -0x4c);
  *(unsigned *)(unsigned)(puVar11 + -0xb4) = pdVar2;
  if (in_FPSCR_SZ == '\0') {
    dVar17 = CONCAT44D((int)(D2U(dVar17) >> 0x20),(*(undefined4 *)(unsigned)(unsigned)0x8c4ab1dc));
  }
  else {
    in_xd2 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4ab1e0),(*(undefined4 *)(unsigned)(unsigned)0x8c4ab1dc));
  }
  if (in_FPSCR_SZ == '\0') {
    *(float *)(unsigned)pdVar2 = -SUB84(dVar17,0);
  }
  else {
    *pdVar2 = in_xd2;
  }
  pdVar2 = (double *)(unsigned)(puVar11 + -0x48);
  *(unsigned *)(unsigned)(puVar11 + -0xa4) = pdVar2;
  fVar12 = (*(undefined4 *)(unsigned)(unsigned)0x8c4ab1e0);
  if (in_FPSCR_SZ != '\0') {
    in_xd2 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4ab1e4),(*(undefined4 *)(unsigned)(unsigned)0x8c4ab1e0));
    fVar12 = -SUB84(dVar17,0);
  }
  if (in_FPSCR_SZ == '\0') {
    *(float *)(unsigned)pdVar2 = -fVar12;
  }
  else {
    *pdVar2 = in_xd2;
  }
  pdVar2 = (double *)(unsigned)(puVar11 + -0x44);
  *(unsigned *)(unsigned)(puVar11 + -0xa8) = pdVar2;
  fVar16 = (*(undefined4 *)(unsigned)(unsigned)0x8c4ab1e4);
  if (in_FPSCR_SZ != '\0') {
    in_xd2 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4ab1e8),(*(undefined4 *)(unsigned)(unsigned)0x8c4ab1e4));
    fVar16 = -fVar12;
  }
  if (in_FPSCR_SZ == '\0') {
    *(float *)(unsigned)pdVar2 = -fVar16;
    *(undefined4 *)(unsigned)(puVar11 + -0x40) = 0;
  }
  else {
    *pdVar2 = in_xd2;
    *(double *)(unsigned)(puVar11 + -0x40) = dVar21;
  }
  pdVar2 = (double *)(unsigned)(puVar11 + -0x3c);
  *(unsigned *)(unsigned)(puVar11 + -0xac) = pdVar2;
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)(unsigned)pdVar2 = (*(undefined4 *)(unsigned)(unsigned)0x8c4ab1e8);
  }
  else {
    in_xd2 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4ab1ec),(*(undefined4 *)(unsigned)(unsigned)0x8c4ab1e8));
    *pdVar2 = in_xd2;
  }
  pdVar2 = (double *)(unsigned)(puVar11 + -0x38);
  *(unsigned *)(unsigned)(puVar11 + -0xa0) = pdVar2;
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)(unsigned)pdVar2 = (*(undefined4 *)(unsigned)(unsigned)0x8c4ab1ec);
  }
  else {
    in_xd2 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4ab1f0),(*(undefined4 *)(unsigned)(unsigned)0x8c4ab1ec));
    *pdVar2 = in_xd2;
  }
  pdVar2 = (double *)(unsigned)(puVar11 + -0x34);
  *(unsigned *)(unsigned)(puVar11 + -0xb0) = pdVar2;
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)(unsigned)pdVar2 = (*(undefined4 *)(unsigned)(unsigned)0x8c4ab1f0);
    *(undefined4 *)(unsigned)(puVar11 + -0x30) = 0;
    *(undefined4 *)(unsigned)(puVar11 + -0x2c) = 0;
  }
  else {
    in_xd2 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4ab1f4),(*(undefined4 *)(unsigned)(unsigned)0x8c4ab1f0));
    *pdVar2 = in_xd2;
    *(double *)(unsigned)(puVar11 + -0x30) = dVar21;
    *(double *)(unsigned)(puVar11 + -0x2c) = dVar21;
  }
  ar5_00 = puVar11 + -0x9c;
  dVar17 = CONCAT44D((int)(D2U(dVar17) >> 0x20),0x3f800000);
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)(unsigned)(puVar11 + -0x28) = 0;
    *(undefined4 *)(unsigned)(puVar11 + -0x24) = 0;
    *(undefined4 *)(unsigned)(puVar11 + -0x20) = 0x3f800000;
  }
  else {
    *(double *)(unsigned)(puVar11 + -0x28) = dVar21;
    *(double *)(unsigned)(puVar11 + -0x24) = dVar21;
    *(double *)(unsigned)(puVar11 + -0x20) = in_xd2;
  }
  ({ unsigned long ri0_ = (unsigned long)(*(undefined4 *)(unsigned)(puVar11 + -0xc0)); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 36)); FUN_8c255d6c(puVar11 + -0x5c,ar5_00,((undefined1 *)(unsigned)0x8c4ab1f0),((undefined1 *)(unsigned)0x8c4ab1ec)); });
  if (in_FPSCR_SZ == '\0') {
    dVar13 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4ab15c),uVar1);
    dVar17 = CONCAT44D((int)(D2U(dVar17) >> 0x20),
                              *(undefined4 *)(unsigned)((double *)(unsigned long)*(unsigned *)(unsigned)(puVar11 + -0xbc)));
  }
  else {
    dVar13 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4ab160),(*(undefined4 *)(unsigned)(unsigned)0x8c4ab15c));
    in_xd2 = *((double *)(unsigned long)*(unsigned *)(unsigned)(puVar11 + -0xbc));
  }
  if (in_FPSCR_PR == '\0') {
    fVar12 = F32LO(dVar17) * F32HI(dVar13);
  }
  else {
    fVar12 = SUB84(dVar17 * dVar13,0);
  }
  if (in_FPSCR_SZ == '\0') {
    uVar18 = CONCAT44((int)*((ulonglong *)(unsigned long)*(unsigned *)(unsigned)(puVar11 + -0xc0)),fVar12);
    fVar12 = F32LO(dVar13);
    fVar16 = (*(undefined4 *)(unsigned)(unsigned)0x8c4ab158);
  }
  else {
    uVar18 = *((ulonglong *)(unsigned long)*(unsigned *)(unsigned)(puVar11 + -0xc0));
    fVar12 = (*(undefined4 *)(unsigned)(unsigned)0x8c4ab158);
    fVar16 = (*(undefined4 *)(unsigned)(unsigned)0x8c4ab15c);
  }
  if (in_FPSCR_PR == '\0') {
    uVar18 = (ulonglong)(uint)(fVar16 * (float)(uVar18 >> 0x20) + (float)uVar18);
  }
  if (in_FPSCR_SZ == '\0') {
    dVar17 = CONCAT44D(*(undefined4 *)(unsigned)((double *)(unsigned long)*(unsigned *)(unsigned)(puVar11 + -0xb8)),(int)uVar18);
    fVar16 = (*(undefined4 *)(unsigned)(unsigned)0x8c4ab160);
  }
  else {
    dVar17 = *((double *)(unsigned long)*(unsigned *)(unsigned)(puVar11 + -0xb8));
    fVar12 = (*(undefined4 *)(unsigned)(unsigned)0x8c4ab160);
    fVar16 = (*(undefined4 *)(unsigned)(unsigned)0x8c4ab164);
  }
  pdVar2 = (double *)(unsigned)(puVar11 + -0x10);
  if (in_FPSCR_PR == '\0') {
    fVar19 = F32HI(dVar17);
    dVar17 = CONCAT44D(fVar19,fVar16 * fVar19 + F32LO(dVar17));
  }
  if (in_FPSCR_SZ == '\0') {
    *(int *)(unsigned)pdVar2 = SUB84(dVar17,0);
  }
  else {
    *pdVar2 = in_xd2;
  }
  if (in_FPSCR_SZ == '\0') {
    dVar13 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4ab15c),fVar12);
    dVar17 = CONCAT44D((int)(D2U(dVar17) >> 0x20),
                              *(undefined4 *)(unsigned)((double *)(unsigned long)*(unsigned *)(unsigned)(puVar11 + -0xa4)));
  }
  else {
    dVar13 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4ab160),(*(undefined4 *)(unsigned)(unsigned)0x8c4ab15c));
    in_xd2 = *((double *)(unsigned long)*(unsigned *)(unsigned)(puVar11 + -0xa4));
  }
  if (in_FPSCR_PR == '\0') {
    fVar12 = F32LO(dVar17) * F32HI(dVar13);
  }
  else {
    fVar12 = SUB84(dVar17 * dVar13,0);
  }
  if (in_FPSCR_SZ == '\0') {
    uVar18 = CONCAT44((int)*((ulonglong *)(unsigned long)*(unsigned *)(unsigned)(puVar11 + -0xb4)),fVar12);
    fVar12 = F32LO(dVar13);
    fVar16 = (*(undefined4 *)(unsigned)(unsigned)0x8c4ab158);
  }
  else {
    uVar18 = *((ulonglong *)(unsigned long)*(unsigned *)(unsigned)(puVar11 + -0xb4));
    fVar12 = (*(undefined4 *)(unsigned)(unsigned)0x8c4ab158);
    fVar16 = (*(undefined4 *)(unsigned)(unsigned)0x8c4ab15c);
  }
  if (in_FPSCR_PR == '\0') {
    uVar18 = (ulonglong)(uint)(fVar16 * (float)(uVar18 >> 0x20) + (float)uVar18);
  }
  if (in_FPSCR_SZ == '\0') {
    dVar17 = CONCAT44D(*(undefined4 *)(unsigned)((double *)(unsigned long)*(unsigned *)(unsigned)(puVar11 + -0xa8)),(int)uVar18);
    fVar16 = (*(undefined4 *)(unsigned)(unsigned)0x8c4ab160);
  }
  else {
    dVar17 = *((double *)(unsigned long)*(unsigned *)(unsigned)(puVar11 + -0xa8));
    fVar12 = (*(undefined4 *)(unsigned)(unsigned)0x8c4ab160);
    fVar16 = (*(undefined4 *)(unsigned)(unsigned)0x8c4ab164);
  }
  if (in_FPSCR_PR == '\0') {
    fVar19 = F32HI(dVar17);
    dVar17 = CONCAT44D(fVar19,fVar16 * fVar19 + F32LO(dVar17));
  }
  if (in_FPSCR_SZ == '\0') {
    *(int *)(unsigned)(puVar11 + -0xc) = SUB84(dVar17,0);
  }
  else {
    *(double *)(unsigned)(puVar11 + -0xc) = in_xd2;
  }
  if (in_FPSCR_SZ == '\0') {
    dVar13 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4ab15c),fVar12);
    dVar17 = CONCAT44D((int)(D2U(dVar17) >> 0x20),
                              *(undefined4 *)(unsigned)((double *)(unsigned long)*(unsigned *)(unsigned)(puVar11 + -0xa0)));
  }
  else {
    dVar13 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4ab160),(*(undefined4 *)(unsigned)(unsigned)0x8c4ab15c));
    in_xd2 = *((double *)(unsigned long)*(unsigned *)(unsigned)(puVar11 + -0xa0));
  }
  if (in_FPSCR_PR == '\0') {
    fVar12 = F32LO(dVar17) * F32HI(dVar13);
  }
  else {
    fVar12 = SUB84(dVar17 * dVar13,0);
  }
  if (in_FPSCR_SZ == '\0') {
    uVar18 = CONCAT44((int)*((ulonglong *)(unsigned long)*(unsigned *)(unsigned)(puVar11 + -0xac)),fVar12);
    fVar12 = (*(undefined4 *)(unsigned)(unsigned)0x8c4ab158);
  }
  else {
    uVar18 = *((ulonglong *)(unsigned long)*(unsigned *)(unsigned)(puVar11 + -0xac));
    fVar12 = (*(undefined4 *)(unsigned)(unsigned)0x8c4ab15c);
  }
  if (in_FPSCR_PR == '\0') {
    uVar18 = (ulonglong)(uint)(fVar12 * (float)(uVar18 >> 0x20) + (float)uVar18);
  }
  if (in_FPSCR_SZ == '\0') {
    uVar18 = CONCAT44((int)*((ulonglong *)(unsigned long)*(unsigned *)(unsigned)(puVar11 + -0xb0)),(int)uVar18);
    fVar12 = (*(undefined4 *)(unsigned)(unsigned)0x8c4ab160);
  }
  else {
    uVar18 = *((ulonglong *)(unsigned long)*(unsigned *)(unsigned)(puVar11 + -0xb0));
    fVar12 = (*(undefined4 *)(unsigned)(unsigned)0x8c4ab164);
  }
  if (in_FPSCR_PR == '\0') {
    uVar18 = (ulonglong)(uint)(fVar12 * (float)(uVar18 >> 0x20) + (float)uVar18);
  }
  if (in_FPSCR_SZ == '\0') {
    *(int *)(unsigned)(puVar11 + -8) = (int)uVar18;
  }
  else {
    *(double *)(unsigned)(puVar11 + -8) = in_xd2;
  }
  ({ unsigned long ri0_ = (unsigned long)(*(undefined4 *)(unsigned)(puVar11 + -0xc0)); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 36)); FUN_8c25ce48(pdVar2,ar5_00,ar6_00,ar7_00); });
  uVar1 = (vsp = ((unsigned long)(fr0_ - 36)), FUN_8c213f28(pdVar2,ar5_00,ar6_00,ar7_00));
  *(uint *)(unsigned)(puVar11 + -0xc0) = (ar6 >> 0xe & 3) << 1;
  uVar6 = ar6 & 0x3fff;
  iVar4 = 0;
  iVar3 = 0;
  do {
    uVar15 = SUB84(dVar21,0);
    iVar5 = (int)*ar4;
    pdVar2 = (double *)(unsigned)(ar4[1] * 0x10 + ar5);
    if (iVar5 < 0) {
      iVar5 = -iVar5;
    }
    dVar17 = in_xd2;
    if (in_FPSCR_SZ == '\0') {
      in_dr6 = CONCAT44D((int)((ulonglong)in_dr6 >> 0x20),(float)(int)ar4[2]);
      dVar17 = in_xd6;
    }
    in_xd6 = dVar17;
    if (in_FPSCR_PR == '\0') {
      fVar12 = F32LO(in_dr6) * in_fr15;
    }
    else {
      fVar12 = SUB84(in_dr6 * CONCAT44D(in_fr14,in_fr15),0);
    }
    dVar17 = in_xd2;
    if (in_FPSCR_SZ == '\0') {
      dVar17 = CONCAT44D((float)(int)ar4[3],SUB84(in_dr8,0));
    }
    if (in_FPSCR_PR == '\0') {
      dVar17 = CONCAT44D(F32HI(dVar17) * in_fr15,SUB84(dVar17,0));
    }
    else {
      dVar17 = dVar17 * CONCAT44D(in_fr14,in_fr15);
    }
    if (in_FPSCR_SZ == '\0') {
      uVar15 = *(undefined4 *)(unsigned)pdVar2;
      pdVar2 = (double *)(unsigned)((int)pdVar2 + 4);
    }
    else {
      in_xd4 = *pdVar2;
      pdVar2 = pdVar2 + 1;
    }
    iVar4 = iVar4 + iVar5;
    iVar3 = iVar3 + iVar5;
    if (in_FPSCR_SZ == '\0') {
      dVar13 = CONCAT44D(*(undefined4 *)(unsigned)pdVar2,fVar12);
      dVar20 = CONCAT44D(*(undefined4 *)(unsigned)((int)pdVar2 + 4),uVar15);
    }
    else {
      dVar13 = *pdVar2;
      dVar20 = pdVar2[1];
    }
    iVar5 = iVar5 + -2;
    psVar7 = ar4 + 5;
    pdVar2 = (double *)(unsigned)(ar4[4] * 0x10 + ar5);
    *(undefined4 *)(unsigned)((int)ar7 + 0x1c) = uVar1;
    *(undefined4 *)(unsigned)(ar7 + 3) = 0xff000000;
    if (in_FPSCR_SZ == '\0') {
      *(int *)(unsigned)((int)ar7 + 0x14) = (int)(D2U(dVar17) >> 0x20);
      *(int *)(unsigned)(ar7 + 2) = SUB84(dVar13,0);
      *(int *)(unsigned)((int)ar7 + 0xc) = (int)(D2U(dVar20) >> 0x20);
      *(int *)(unsigned)(ar7 + 1) = (int)(D2U(dVar13) >> 0x20);
      pdVar9 = (double *)(unsigned)((int)ar7 + 4);
      *(int *)(unsigned)pdVar9 = SUB84(dVar20,0);
    }
    else {
      ar7[2] = dVar17;
      ar7[1] = in_xd6;
      *ar7 = dVar20;
      ar7[-1] = dVar13;
      pdVar9 = ar7 + -2;
      *pdVar9 = in_xd4;
    }
    *(undefined4 *)(unsigned)((int)pdVar9 + -4) = 0xe0000000;
    psVar8 = ar4 + 6;
    pdVar9 = (double *)(unsigned)((int)pdVar9 + 0x1c);
    ar4 = ar4 + 7;
    dVar21 = in_xd2;
    if (in_FPSCR_SZ == '\0') {
      dVar21 = CONCAT44D((float)(int)*psVar7,SUB84(dVar20,0));
    }
    if (in_FPSCR_PR == '\0') {
      dVar21 = CONCAT44D(F32HI(dVar21) * in_fr15,SUB84(dVar21,0));
    }
    else {
      dVar21 = dVar21 * CONCAT44D(in_fr14,in_fr15);
    }
    dVar20 = in_xd2;
    if (in_FPSCR_SZ == '\0') {
      dVar20 = CONCAT44D((float)(int)*psVar8,SUB84(dVar13,0));
    }
    if (in_FPSCR_PR == '\0') {
      in_dr6 = CONCAT44D(F32HI(dVar20) * in_fr15,SUB84(dVar20,0));
    }
    else {
      in_dr6 = dVar20 * CONCAT44D(in_fr14,in_fr15);
    }
    if (in_FPSCR_SZ == '\0') {
      in_dr8 = CONCAT44D(*(undefined4 *)(unsigned)pdVar2,SUB84(dVar17,0));
      dVar21 = CONCAT44D((int)(D2U(dVar21) >> 0x20),*(undefined4 *)(unsigned)((int)pdVar2 + 4));
      in_dr6 = CONCAT44D((int)((ulonglong)in_dr6 >> 0x20),*(undefined4 *)(unsigned)(pdVar2 + 1));
    }
    else {
      in_dr8 = *pdVar2;
      in_xd4 = pdVar2[1];
      in_xd6 = pdVar2[2];
    }
    do {
      psVar7 = ar4 + 1;
      pdVar2 = (double *)(unsigned)(*ar4 * 0x10 + ar5);
      *(undefined4 *)(unsigned)((int)pdVar9 + 0x1c) = uVar1;
      *(undefined4 *)(unsigned)(pdVar9 + 3) = 0xff000000;
      if (in_FPSCR_SZ == '\0') {
        *(int *)(unsigned)((int)pdVar9 + 0x14) = (int)((ulonglong)in_dr6 >> 0x20);
        *(int *)(unsigned)(pdVar9 + 2) = (int)(D2U(dVar21) >> 0x20);
        *(int *)(unsigned)((int)pdVar9 + 0xc) = SUB84(in_dr6,0);
        *(int *)(unsigned)(pdVar9 + 1) = SUB84(dVar21,0);
        pdVar10 = (double *)(unsigned)((int)pdVar9 + 4);
        *(int *)(unsigned)pdVar10 = (int)((ulonglong)in_dr8 >> 0x20);
      }
      else {
        pdVar9[2] = in_dr6;
        pdVar9[1] = dVar21;
        *pdVar9 = in_xd6;
        pdVar9[-1] = in_xd4;
        pdVar10 = pdVar9 + -2;
        *pdVar10 = in_dr8;
      }
      *(undefined4 *)(unsigned)((int)pdVar10 + -4) = 0xe0000000;
      psVar8 = ar4 + 2;
      pdVar9 = (double *)(unsigned)((int)pdVar10 + 0x1c);
      ar4 = (short *)(unsigned)((int)ar4 + *(int *)(unsigned)(puVar11 + -0xc0) + 6);
      dVar17 = in_xd2;
      if (in_FPSCR_SZ == '\0') {
        dVar17 = CONCAT44D((float)(int)*psVar7,SUB84(dVar21,0));
      }
      if (in_FPSCR_PR == '\0') {
        dVar21 = CONCAT44D(F32HI(dVar17) * in_fr15,SUB84(dVar17,0));
      }
      else {
        dVar21 = dVar17 * CONCAT44D(in_fr14,in_fr15);
      }
      dVar17 = in_xd2;
      if (in_FPSCR_SZ == '\0') {
        dVar17 = CONCAT44D((float)(int)*psVar8,SUB84(in_dr6,0));
      }
      if (in_FPSCR_PR == '\0') {
        in_dr6 = CONCAT44D(F32HI(dVar17) * in_fr15,SUB84(dVar17,0));
      }
      else {
        in_dr6 = dVar17 * CONCAT44D(in_fr14,in_fr15);
      }
      if (in_FPSCR_SZ == '\0') {
        in_dr8 = CONCAT44D(*(undefined4 *)(unsigned)pdVar2,SUB84(in_dr8,0));
        pdVar2 = (double *)(unsigned)((int)pdVar2 + 4);
      }
      else {
        in_dr8 = *pdVar2;
        pdVar2 = pdVar2 + 1;
      }
      iVar5 = iVar5 + -1;
      if (in_FPSCR_SZ == '\0') {
        dVar21 = CONCAT44D((int)(D2U(dVar21) >> 0x20),*(undefined4 *)(unsigned)pdVar2);
        in_dr6 = CONCAT44D((int)((ulonglong)in_dr6 >> 0x20),*(undefined4 *)(unsigned)((int)pdVar2 + 4))
        ;
      }
      else {
        in_xd4 = *pdVar2;
        in_xd6 = pdVar2[1];
      }
    } while (iVar5 != 0);
    *(undefined4 *)(unsigned)(pdVar10 + 7) = uVar1;
    *(undefined4 *)(unsigned)((int)pdVar10 + 0x34) = 0xff000000;
    if (in_FPSCR_SZ == '\0') {
      *(int *)(unsigned)(pdVar10 + 6) = (int)((ulonglong)in_dr6 >> 0x20);
      *(int *)(unsigned)((int)pdVar10 + 0x2c) = (int)(D2U(dVar21) >> 0x20);
      *(int *)(unsigned)(pdVar10 + 5) = SUB84(in_dr6,0);
      *(int *)(unsigned)((int)pdVar10 + 0x24) = SUB84(dVar21,0);
      pdVar10 = pdVar10 + 4;
      *(int *)(unsigned)pdVar10 = (int)((ulonglong)in_dr8 >> 0x20);
    }
    else {
      *(double *)(unsigned)((int)pdVar10 + 0x2c) = in_dr6;
      *(double *)(unsigned)((int)pdVar10 + 0x24) = dVar21;
      *(double *)(unsigned)((int)pdVar10 + 0x1c) = in_xd6;
      *(double *)(unsigned)((int)pdVar10 + 0x14) = in_xd4;
      pdVar10 = (double *)(unsigned)((int)pdVar10 + 0xc);
      *pdVar10 = in_dr8;
    }
    *(undefined4 *)(unsigned)((int)pdVar10 + -4) = 0xf0000000;
    uVar6 = uVar6 - 1;
    ar7 = (double *)(unsigned)((int)pdVar10 + 0x1c);
  } while (uVar6 != 0);
  (*(undefined4 *)(unsigned)(unsigned)0x8c4aa520) = (*(undefined4 *)(unsigned)(unsigned)0x8c4aa520) + iVar4;
  (*(undefined4 *)(unsigned)(unsigned)0x8c4aa51c) = (*(undefined4 *)(unsigned)(unsigned)0x8c4aa51c) + iVar3;
  return ar7;
}

__asm__(".globl _FUN_8c2163d4\n.set _FUN_8c2163d4, _FUN_8c2163d4_def\n");
