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
double * FUN_8c22b7a8_def(short *ar4,int ar5,uint ar6,double *ar7)

{
  ring[rp++ & 255] = "FUN_8c22b7a8";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 52; for (int i_ = 0; i_ < 52; i_++) z_[i_] = 0; }
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
  double in_dr0 = 0;
  undefined4 uVar18;
  undefined4 uVar19;
  float fVar20;
  float fVar21;
  undefined8 in_dr2 = 0;
  double dVar22;
  ulonglong uVar23;
  float fVar25;
  double dVar24;
  ulonglong in_dr4 = 0;
  double dVar26;
  double in_dr6 = 0;
  double in_dr8 = 0;
  double in_dr10 = 0;
  double dVar27;
  undefined8 in_dr12 = 0;
  double dVar28;
  undefined8 in_dr14 = 0;
  undefined4 uVar29;
  undefined8 in_xd0 = 0;
  double in_xd2 = 0;
  double in_xd4 = 0;
  double in_xd6 = 0;
  undefined8 in_xd8 = 0;
  double in_xd10 = 0;
  double dVar30;
  undefined8 in_xd12 = 0;
  double in_xd14 = 0;
  bool bVar31;
  undefined4 in_PR = 0;
  char in_FPSCR_PR = 0;
  char in_FPSCR_SZ = 0;
  double dVar17;
  
  uVar3 = (undefined4)in_dr12;
  if (in_FPSCR_SZ == '\0') {
    (*(undefined8 *)(fr0_ - 0x20)) = CONCAT44D((int)in_dr14,(undefined4)(*(undefined8 *)(fr0_ - 0x20)));
                    
    (*(uint*)((uchar*)&(*(undefined8 *)(fr0_ - 0x20))+0)) = uVar3;
    puVar15 = (undefined1 *)(unsigned)((int)&(*(undefined8 *)(fr0_ - 0x28)) + 4);
    (*(undefined8 *)(fr0_ - 0x28)) = CONCAT44((int)((ulonglong)in_dr12 >> 0x20),(undefined4)(*(undefined8 *)(fr0_ - 0x28)));
  }
  else {
    puVar15 = ((undefined1 *)(fr0_ - 0x30));
    (*(undefined8 *)(fr0_ - 0x20)) = in_xd14;
    (*(undefined8 *)(fr0_ - 0x28)) = in_xd12;
  }
  *(undefined4 *)(unsigned)(puVar15 + -4) = in_PR;
  uVar18 = (undefined4)in_dr4;
  uVar19 = (undefined4)((ulonglong)in_dr0 >> 0x20);
  uVar29 = (undefined4)((ulonglong)in_dr14 >> 0x20);
  if (in_FPSCR_SZ == '\0') {
    *(int *)(unsigned)(puVar15 + -0x60) = (int)in_dr14;
    *(undefined4 *)(unsigned)(puVar15 + -100) = uVar29;
    *(undefined4 *)(unsigned)(puVar15 + -0x68) = uVar3;
    *(undefined4 *)(unsigned)(puVar15 + -0x6c) = uVar18;
    *(int *)(unsigned)(puVar15 + -0x70) = SUB84(in_dr10,0);
    *(int *)(unsigned)(puVar15 + -0x74) = (int)((ulonglong)in_dr10 >> 0x20);
    *(int *)(unsigned)(puVar15 + -0x78) = SUB84(in_dr8,0);
    *(int *)(unsigned)(puVar15 + -0x7c) = (int)((ulonglong)in_dr8 >> 0x20);
    *(int *)(unsigned)(puVar15 + -0x80) = SUB84(in_dr6,0);
    *(int *)(unsigned)(puVar15 + -0x84) = (int)((ulonglong)in_dr6 >> 0x20);
    *(undefined4 *)(unsigned)(puVar15 + -0x88) = uVar18;
    *(int *)(unsigned)(puVar15 + -0x8c) = (int)(in_dr4 >> 0x20);
    *(int *)(unsigned)(puVar15 + -0x90) = (int)in_dr2;
    *(int *)(unsigned)(puVar15 + -0x94) = (int)((ulonglong)in_dr2 >> 0x20);
    *(int *)(unsigned)(puVar15 + -0x98) = SUB84(in_dr0,0);
    *(undefined4 *)(unsigned)(puVar15 + -0x9c) = uVar19;
    dVar28 = CONCAT44D(uVar18,uVar3);
  }
  else {
    *(double *)(unsigned)(puVar15 + -100) = in_xd14;
    *(undefined8 *)(unsigned)(puVar15 + -0x6c) = in_dr14;
    *(undefined8 *)(unsigned)(puVar15 + -0x74) = in_xd12;
    *(double *)(unsigned)(puVar15 + -0x7c) = in_xd4;
    *(double *)(unsigned)(puVar15 + -0x84) = in_xd10;
    *(double *)(unsigned)(puVar15 + -0x8c) = in_dr10;
    *(undefined8 *)(unsigned)(puVar15 + -0x94) = in_xd8;
    *(double *)(unsigned)(puVar15 + -0x9c) = in_dr8;
    *(double *)(unsigned)(puVar15 + -0xa4) = in_xd6;
    *(double *)(unsigned)(puVar15 + -0xac) = in_dr6;
    *(double *)(unsigned)(puVar15 + -0xb4) = in_xd4;
    *(ulonglong *)(unsigned)(puVar15 + -0xbc) = in_dr4;
    *(double *)(unsigned)(puVar15 + -0xc4) = in_xd2;
    *(undefined8 *)(unsigned)(puVar15 + -0xcc) = in_dr2;
    *(undefined8 *)(unsigned)(puVar15 + -0xd4) = in_xd0;
    *(double *)(unsigned)(puVar15 + -0xdc) = in_dr0;
    dVar28 = in_xd4;
  }
  pdVar5 = (double *)(unsigned)(puVar15 + -0x1c);
  ar7_00 = ((undefined1 *)(unsigned)0x8c4ab208);
  ar6_00 = ((undefined1 *)(unsigned)0x8c4ab204);
  *(unsigned *)(unsigned)(puVar15 + -0xc0) = pdVar5;
  if (in_FPSCR_SZ == '\0') {
    dVar22 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4ab1f8),(*(undefined4 *)(unsigned)(unsigned)0x8c4ab208));
    in_dr0 = CONCAT44D(uVar19,(*(undefined4 *)(unsigned)(unsigned)0x8c4ab1fc));
  }
  else {
    dVar22 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4ab1fc),(*(undefined4 *)(unsigned)(unsigned)0x8c4ab1f8));
    in_xd2 = CONCAT44D((*(uint *)(unsigned)0x8c4ab20c),(*(undefined4 *)(unsigned)(unsigned)0x8c4ab208));
  }
  pdVar2 = (double *)(unsigned)(puVar15 + -0x18);
  pdVar1 = (double *)(unsigned)(puVar15 + -0x14);
  if (in_FPSCR_PR == '\0') {
    dVar22 = CONCAT44D(F32HI(dVar22) * F32LO(dVar22),SUB84(dVar22,0));
  }
  else {
    dVar22 = dVar22 * dVar22;
  }
  if (in_FPSCR_SZ == '\0') {
    dVar22 = CONCAT44D((int)(D2U(dVar22) >> 0x20),(*(undefined4 *)(unsigned)(unsigned)0x8c4ab204));
  }
  else {
    in_xd2 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4ab208),(*(undefined4 *)(unsigned)(unsigned)0x8c4ab204));
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
  *(unsigned *)(unsigned)(puVar15 + -0xb4) = pdVar2;
  if (in_FPSCR_SZ == '\0') {
    dVar22 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4ab1fc),(*(undefined4 *)(unsigned)(unsigned)0x8c4ab200));
    dVar17 = CONCAT44D((int)(D2U(dVar17) >> 0x20),(*(undefined4 *)(unsigned)(unsigned)0x8c4ab208));
  }
  else {
    dVar22 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4ab200),(*(undefined4 *)(unsigned)(unsigned)0x8c4ab1fc));
    in_xd2 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4ab204),(*(undefined4 *)(unsigned)(unsigned)0x8c4ab200));
  }
  if (in_FPSCR_PR == '\0') {
    dVar22 = CONCAT44D(F32HI(dVar22) * F32LO(dVar22),SUB84(dVar22,0));
  }
  else {
    dVar22 = dVar22 * dVar22;
  }
  if (in_FPSCR_SZ == '\0') {
    dVar22 = CONCAT44D((int)(D2U(dVar22) >> 0x20),(*(undefined4 *)(unsigned)(unsigned)0x8c4ab1f4));
  }
  else {
    in_xd2 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4ab1f8),(*(undefined4 *)(unsigned)(unsigned)0x8c4ab1f4));
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
    *(int *)(unsigned)pdVar2 = (int)(D2U(dVar22) >> 0x20);
  }
  else {
    *pdVar2 = dVar22;
  }
  *(unsigned *)(unsigned)(puVar15 + -0xb8) = pdVar1;
  if (in_FPSCR_SZ == '\0') {
    dVar22 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4ab204),(*(undefined4 *)(unsigned)(unsigned)0x8c4ab1f4));
  }
  else {
    in_xd2 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4ab1f8),(*(undefined4 *)(unsigned)(unsigned)0x8c4ab1f4));
    dVar22 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4ab208),(*(undefined4 *)(unsigned)(unsigned)0x8c4ab204));
  }
  if (in_FPSCR_PR == '\0') {
    dVar22 = CONCAT44D(F32HI(dVar22) * F32LO(dVar22),SUB84(dVar22,0));
  }
  else {
    dVar22 = dVar22 * dVar22;
  }
  if (in_FPSCR_SZ == '\0') {
    dVar17 = CONCAT44D((int)(D2U(dVar17) >> 0x20),(*(undefined4 *)(unsigned)(unsigned)0x8c4ab1f8));
    dVar22 = CONCAT44D((int)(D2U(dVar22) >> 0x20),(*(undefined4 *)(unsigned)(unsigned)0x8c4ab200));
  }
  else {
    in_xd2 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4ab204),(*(undefined4 *)(unsigned)(unsigned)0x8c4ab200));
  }
  pdVar5 = (double *)(unsigned)(puVar15 + -0x5c);
  dVar26 = (double)(in_dr4 & 0xffffffff);
  if (in_FPSCR_PR == '\0') {
    fVar16 = F32LO(dVar17) * F32LO(dVar22);
    dVar17 = (double)(ulonglong)(uint)fVar16;
    dVar22 = CONCAT44D(F32HI(dVar22) - fVar16,SUB84(dVar22,0));
  }
  else {
    dVar17 = dVar17 * dVar22;
    dVar22 = dVar22 - dVar17;
  }
  uVar3 = SUB84(dVar17,0);
  uVar19 = (undefined4)(D2U(dVar22) >> 0x20);
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)(unsigned)pdVar1 = uVar19;
  }
  else {
    *pdVar1 = dVar22;
  }
  *(unsigned *)(unsigned)(puVar15 + -0xbc) = pdVar5;
  if (in_FPSCR_SZ == '\0') {
    uVar18 = *(undefined4 *)(unsigned)((double *)(unsigned long)*(unsigned *)(unsigned)(puVar15 + -0xc0));
    dVar22 = CONCAT44D(uVar19,uVar18);
    *(undefined4 *)(unsigned)pdVar5 = uVar18;
  }
  else {
    in_xd2 = *((double *)(unsigned long)*(unsigned *)(unsigned)(puVar15 + -0xc0));
    *pdVar5 = in_xd2;
  }
  pdVar5 = (double *)(unsigned)(puVar15 + -0x58);
  *(unsigned *)(unsigned)(puVar15 + -0xc0) = pdVar5;
  if (in_FPSCR_SZ == '\0') {
    uVar19 = *(undefined4 *)(unsigned)((double *)(unsigned long)*(unsigned *)(unsigned)(puVar15 + -0xb4));
    dVar22 = CONCAT44D((int)(D2U(dVar22) >> 0x20),uVar19);
    *(undefined4 *)(unsigned)pdVar5 = uVar19;
  }
  else {
    in_xd2 = *((double *)(unsigned long)*(unsigned *)(unsigned)(puVar15 + -0xb4));
    *pdVar5 = in_xd2;
  }
  pdVar5 = (double *)(unsigned)(puVar15 + -0x54);
  *(unsigned *)(unsigned)(puVar15 + -0xb4) = pdVar5;
  if (in_FPSCR_SZ == '\0') {
    uVar19 = *(undefined4 *)(unsigned)((double *)(unsigned long)*(unsigned *)(unsigned)(puVar15 + -0xb8));
    dVar22 = CONCAT44D((int)(D2U(dVar22) >> 0x20),uVar19);
    *(undefined4 *)(unsigned)pdVar5 = uVar19;
    *(undefined4 *)(unsigned)(puVar15 + -0x50) = 0;
  }
  else {
    in_xd2 = *((double *)(unsigned long)*(unsigned *)(unsigned)(puVar15 + -0xb8));
    *pdVar5 = in_xd2;
    *(double *)(unsigned)(puVar15 + -0x50) = dVar26;
  }
  pdVar5 = (double *)(unsigned)(puVar15 + -0x4c);
  *(unsigned *)(unsigned)(puVar15 + -0xa0) = pdVar5;
  if (in_FPSCR_SZ == '\0') {
    dVar22 = CONCAT44D((int)(D2U(dVar22) >> 0x20),(*(undefined4 *)(unsigned)(unsigned)0x8c4ab1f4));
  }
  else {
    in_xd2 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4ab1f8),(*(undefined4 *)(unsigned)(unsigned)0x8c4ab1f4));
  }
  if (in_FPSCR_SZ == '\0') {
    *(float *)(unsigned)pdVar5 = -SUB84(dVar22,0);
  }
  else {
    *pdVar5 = in_xd2;
  }
  pdVar5 = (double *)(unsigned)(puVar15 + -0x48);
  *(unsigned *)(unsigned)(puVar15 + -0xa4) = pdVar5;
  fVar16 = (*(undefined4 *)(unsigned)(unsigned)0x8c4ab1f8);
  if (in_FPSCR_SZ != '\0') {
    in_xd2 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4ab1fc),(*(undefined4 *)(unsigned)(unsigned)0x8c4ab1f8));
    fVar16 = -SUB84(dVar22,0);
  }
  if (in_FPSCR_SZ == '\0') {
    *(float *)(unsigned)pdVar5 = -fVar16;
  }
  else {
    *pdVar5 = in_xd2;
  }
  pdVar5 = (double *)(unsigned)(puVar15 + -0x44);
  *(unsigned *)(unsigned)(puVar15 + -0xb8) = pdVar5;
  fVar20 = (*(undefined4 *)(unsigned)(unsigned)0x8c4ab1fc);
  if (in_FPSCR_SZ != '\0') {
    in_xd2 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4ab200),(*(undefined4 *)(unsigned)(unsigned)0x8c4ab1fc));
    fVar20 = -fVar16;
  }
  fVar20 = -fVar20;
  if (in_FPSCR_SZ == '\0') {
    *(float *)(unsigned)pdVar5 = fVar20;
    *(undefined4 *)(unsigned)(puVar15 + -0x40) = 0;
  }
  else {
    *pdVar5 = in_xd2;
    *(double *)(unsigned)(puVar15 + -0x40) = dVar26;
  }
  pdVar5 = (double *)(unsigned)(puVar15 + -0x3c);
  *(unsigned *)(unsigned)(puVar15 + -0xac) = pdVar5;
  if (in_FPSCR_SZ == '\0') {
    *(float *)(unsigned)pdVar5 = (*(undefined4 *)(unsigned)(unsigned)0x8c4ab200);
    fVar20 = (*(undefined4 *)(unsigned)(unsigned)0x8c4ab200);
  }
  else {
    in_xd2 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4ab204),(*(undefined4 *)(unsigned)(unsigned)0x8c4ab200));
    *pdVar5 = in_xd2;
  }
  pdVar5 = (double *)(unsigned)(puVar15 + -0x38);
  *(unsigned *)(unsigned)(puVar15 + -0xa8) = pdVar5;
  if (in_FPSCR_SZ == '\0') {
    *(float *)(unsigned)pdVar5 = (*(undefined4 *)(unsigned)(unsigned)0x8c4ab204);
    fVar20 = (*(undefined4 *)(unsigned)(unsigned)0x8c4ab204);
  }
  else {
    in_xd2 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4ab208),(*(undefined4 *)(unsigned)(unsigned)0x8c4ab204));
    *pdVar5 = in_xd2;
  }
  pdVar5 = (double *)(unsigned)(puVar15 + -0x34);
  *(unsigned *)(unsigned)(puVar15 + -0xb0) = pdVar5;
  if (in_FPSCR_SZ == '\0') {
    *(float *)(unsigned)pdVar5 = (*(undefined4 *)(unsigned)(unsigned)0x8c4ab208);
    *(undefined4 *)(unsigned)(puVar15 + -0x30) = 0;
    *(undefined4 *)(unsigned)(puVar15 + -0x2c) = 0;
    fVar20 = (*(undefined4 *)(unsigned)(unsigned)0x8c4ab208);
  }
  else {
    in_xd2 = CONCAT44D((*(uint *)(unsigned)0x8c4ab20c),(*(undefined4 *)(unsigned)(unsigned)0x8c4ab208));
    *pdVar5 = in_xd2;
    *(double *)(unsigned)(puVar15 + -0x30) = dVar26;
    *(double *)(unsigned)(puVar15 + -0x2c) = dVar26;
  }
  dVar22 = CONCAT44D((int)(D2U(dVar22) >> 0x20),fVar20);
  ar5_00 = puVar15 + -0x9c;
  dVar17 = CONCAT44D(uVar29,0x3f800000);
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)(unsigned)(puVar15 + -0x28) = 0;
    *(undefined4 *)(unsigned)(puVar15 + -0x24) = 0;
    *(undefined4 *)(unsigned)(puVar15 + -0x20) = 0x3f800000;
  }
  else {
    *(double *)(unsigned)(puVar15 + -0x28) = dVar26;
    *(double *)(unsigned)(puVar15 + -0x24) = dVar26;
    *(double *)(unsigned)(puVar15 + -0x20) = in_xd14;
  }
  ({ unsigned long ri0_ = (unsigned long)(*(undefined4 *)(unsigned)(puVar15 + -0xc0)); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 52)); FUN_8c255d6c(puVar15 + -0x5c,ar5_00,((undefined1 *)(unsigned)0x8c4ab204),((undefined1 *)(unsigned)0x8c4ab208)); });
  if (in_FPSCR_SZ == '\0') {
    dVar27 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4ab19c),uVar3);
    dVar22 = CONCAT44D((int)(D2U(dVar22) >> 0x20),
                              *(undefined4 *)(unsigned)((double *)(unsigned long)*(unsigned *)(unsigned)(puVar15 + -0xc0)));
  }
  else {
    dVar27 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4ab1a0),(*(undefined4 *)(unsigned)(unsigned)0x8c4ab19c));
    in_xd2 = *((double *)(unsigned long)*(unsigned *)(unsigned)(puVar15 + -0xc0));
  }
  if (in_FPSCR_PR == '\0') {
    fVar16 = F32LO(dVar22) * F32HI(dVar27);
  }
  else {
    fVar16 = SUB84(dVar22 * dVar27,0);
  }
  if (in_FPSCR_SZ == '\0') {
    uVar23 = CONCAT44((int)*((ulonglong *)(unsigned long)*(unsigned *)(unsigned)(puVar15 + -0xbc)),fVar16);
    fVar16 = F32LO(dVar27);
    fVar20 = (*(undefined4 *)(unsigned)(unsigned)0x8c4ab198);
  }
  else {
    uVar23 = *((ulonglong *)(unsigned long)*(unsigned *)(unsigned)(puVar15 + -0xbc));
    fVar16 = (*(undefined4 *)(unsigned)(unsigned)0x8c4ab198);
    fVar20 = (*(undefined4 *)(unsigned)(unsigned)0x8c4ab19c);
  }
  if (in_FPSCR_PR == '\0') {
    uVar23 = (ulonglong)(uint)(fVar20 * (float)(uVar23 >> 0x20) + (float)uVar23);
  }
  if (in_FPSCR_SZ == '\0') {
    dVar22 = CONCAT44D(*(undefined4 *)(unsigned)((double *)(unsigned long)*(unsigned *)(unsigned)(puVar15 + -0xb4)),(int)uVar23);
    fVar20 = (*(undefined4 *)(unsigned)(unsigned)0x8c4ab1a0);
  }
  else {
    dVar22 = *((double *)(unsigned long)*(unsigned *)(unsigned)(puVar15 + -0xb4));
    fVar16 = (*(undefined4 *)(unsigned)(unsigned)0x8c4ab1a0);
    fVar20 = (*(undefined4 *)(unsigned)(unsigned)0x8c4ab1a4);
  }
  pdVar5 = (double *)(unsigned)(puVar15 + -0x10);
  if (in_FPSCR_PR == '\0') {
    fVar25 = F32HI(dVar22);
    dVar22 = CONCAT44D(fVar25,fVar20 * fVar25 + F32LO(dVar22));
  }
  if (in_FPSCR_SZ == '\0') {
    *(int *)(unsigned)pdVar5 = SUB84(dVar22,0);
  }
  else {
    *pdVar5 = in_xd2;
  }
  if (in_FPSCR_SZ == '\0') {
    dVar27 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4ab19c),fVar16);
    dVar22 = CONCAT44D((int)(D2U(dVar22) >> 0x20),
                              *(undefined4 *)(unsigned)((double *)(unsigned long)*(unsigned *)(unsigned)(puVar15 + -0xa4)));
  }
  else {
    dVar27 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4ab1a0),(*(undefined4 *)(unsigned)(unsigned)0x8c4ab19c));
    in_xd2 = *((double *)(unsigned long)*(unsigned *)(unsigned)(puVar15 + -0xa4));
  }
  if (in_FPSCR_PR == '\0') {
    fVar16 = F32LO(dVar22) * F32HI(dVar27);
  }
  else {
    fVar16 = SUB84(dVar22 * dVar27,0);
  }
  if (in_FPSCR_SZ == '\0') {
    uVar23 = CONCAT44((int)*((ulonglong *)(unsigned long)*(unsigned *)(unsigned)(puVar15 + -0xa0)),fVar16);
    fVar16 = F32LO(dVar27);
    fVar20 = (*(undefined4 *)(unsigned)(unsigned)0x8c4ab198);
  }
  else {
    uVar23 = *((ulonglong *)(unsigned long)*(unsigned *)(unsigned)(puVar15 + -0xa0));
    fVar16 = (*(undefined4 *)(unsigned)(unsigned)0x8c4ab198);
    fVar20 = (*(undefined4 *)(unsigned)(unsigned)0x8c4ab19c);
  }
  if (in_FPSCR_PR == '\0') {
    uVar23 = (ulonglong)(uint)(fVar20 * (float)(uVar23 >> 0x20) + (float)uVar23);
  }
  if (in_FPSCR_SZ == '\0') {
    dVar22 = CONCAT44D(*(undefined4 *)(unsigned)((double *)(unsigned long)*(unsigned *)(unsigned)(puVar15 + -0xb8)),(int)uVar23);
    fVar20 = (*(undefined4 *)(unsigned)(unsigned)0x8c4ab1a0);
  }
  else {
    dVar22 = *((double *)(unsigned long)*(unsigned *)(unsigned)(puVar15 + -0xb8));
    fVar16 = (*(undefined4 *)(unsigned)(unsigned)0x8c4ab1a0);
    fVar20 = (*(undefined4 *)(unsigned)(unsigned)0x8c4ab1a4);
  }
  if (in_FPSCR_PR == '\0') {
    fVar25 = F32HI(dVar22);
    dVar22 = CONCAT44D(fVar25,fVar20 * fVar25 + F32LO(dVar22));
  }
  if (in_FPSCR_SZ == '\0') {
    *(int *)(unsigned)(puVar15 + -0xc) = SUB84(dVar22,0);
  }
  else {
    *(double *)(unsigned)(puVar15 + -0xc) = in_xd2;
  }
  if (in_FPSCR_SZ == '\0') {
    dVar27 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4ab19c),fVar16);
    dVar22 = CONCAT44D((int)(D2U(dVar22) >> 0x20),
                              *(undefined4 *)(unsigned)((double *)(unsigned long)*(unsigned *)(unsigned)(puVar15 + -0xa8)));
  }
  else {
    dVar27 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4ab1a0),(*(undefined4 *)(unsigned)(unsigned)0x8c4ab19c));
    in_xd2 = *((double *)(unsigned long)*(unsigned *)(unsigned)(puVar15 + -0xa8));
  }
  if (in_FPSCR_PR == '\0') {
    fVar16 = F32LO(dVar22) * F32HI(dVar27);
  }
  else {
    fVar16 = SUB84(dVar22 * dVar27,0);
  }
  if (in_FPSCR_SZ == '\0') {
    uVar23 = CONCAT44((int)*((ulonglong *)(unsigned long)*(unsigned *)(unsigned)(puVar15 + -0xac)),fVar16);
    fVar16 = F32LO(dVar27);
    fVar20 = (*(undefined4 *)(unsigned)(unsigned)0x8c4ab198);
  }
  else {
    uVar23 = *((ulonglong *)(unsigned long)*(unsigned *)(unsigned)(puVar15 + -0xac));
    fVar16 = (*(undefined4 *)(unsigned)(unsigned)0x8c4ab198);
    fVar20 = (*(undefined4 *)(unsigned)(unsigned)0x8c4ab19c);
  }
  if (in_FPSCR_PR == '\0') {
    uVar23 = (ulonglong)(uint)(fVar20 * (float)(uVar23 >> 0x20) + (float)uVar23);
  }
  if (in_FPSCR_SZ == '\0') {
    uVar23 = CONCAT44((int)*((ulonglong *)(unsigned long)*(unsigned *)(unsigned)(puVar15 + -0xb0)),(int)uVar23);
    dVar22 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4ab1a0),fVar16);
  }
  else {
    uVar23 = *((ulonglong *)(unsigned long)*(unsigned *)(unsigned)(puVar15 + -0xb0));
    dVar22 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4ab1a4),(*(undefined4 *)(unsigned)(unsigned)0x8c4ab1a0));
  }
  if (in_FPSCR_PR == '\0') {
    uVar23 = (ulonglong)
             (uint)(F32HI(dVar22) * (float)(uVar23 >> 0x20) + (float)uVar23);
  }
  if (in_FPSCR_SZ == '\0') {
    *(int *)(unsigned)(puVar15 + -8) = (int)uVar23;
  }
  else {
    *(double *)(unsigned)(puVar15 + -8) = in_xd2;
  }
  ({ unsigned long ri0_ = (unsigned long)(*(undefined4 *)(unsigned)(puVar15 + -0xc0)); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 52)); FUN_8c25ce48(pdVar5,ar5_00,ar6_00,ar7_00); });
  *(undefined4 *)(unsigned)(puVar15 + -0xc0) = 0xff000000;
  uVar3 = (vsp = ((unsigned long)(fr0_ - 52)), FUN_8c221778(pdVar5,ar5_00,ar6_00,ar7_00));
  *(undefined4 *)(unsigned)(puVar15 + -0xbc) = uVar3;
  iVar13 = 0;
  uVar10 = ar6 & 0x3fff;
  iVar7 = 0;
  if (in_FPSCR_SZ == '\0') {
    dVar28 = CONCAT44D((int)(D2U(dVar28) >> 0x20),SUB84(dVar17,0));
  }
  if (((*(undefined4 *)(unsigned)(unsigned)0x8c4aa4f0) & 0x80000000) != 0) {
    dVar28 = CONCAT44D((int)(D2U(dVar28) >> 0x20),0xbf800000);
  }
  *(uint *)(unsigned)(puVar15 + -0xb8) = (ar6 >> 0xe & 3) << 1;
  do {
    iVar14 = (int)*ar4;
    iVar6 = ar4[1] * 0x20 + ar5;
    if (in_FPSCR_SZ == '\0') {
      in_dr8 = CONCAT44D((int)((ulonglong)in_dr8 >> 0x20),SUB84(dVar28,0));
    }
    if (iVar14 < 0) {
      in_dr8 = CONCAT44D((int)((ulonglong)in_dr8 >> 0x20),-SUB84(in_dr8,0));
      iVar14 = -iVar14;
    }
    iVar7 = iVar7 + iVar14;
    iVar14 = iVar14 + -2;
    iVar4 = 0;
    psVar11 = ar4 + 5;
    dVar27 = in_xd2;
    if (in_FPSCR_SZ == '\0') {
      dVar27 = CONCAT44D((float)(int)ar4[2],SUB84(in_dr6,0));
    }
    fVar16 = F32HI(dVar28);
    if (in_FPSCR_PR == '\0') {
      in_dr6 = CONCAT44D(F32HI(dVar27) * fVar16,SUB84(dVar27,0));
    }
    else {
      in_dr6 = dVar27 * dVar28;
    }
    iVar8 = ar4[4] * 0x20 + ar5;
    dVar27 = in_xd2;
    if (in_FPSCR_SZ == '\0') {
      dVar26 = CONCAT44D((int)(D2U(dVar26) >> 0x20),(float)(int)ar4[3]);
      dVar27 = in_xd4;
    }
    in_xd4 = dVar27;
    if (in_FPSCR_PR == '\0') {
      dVar26 = (double)(ulonglong)(uint)(F32LO(dVar26) * fVar16);
    }
    else {
      dVar26 = dVar26 * dVar28;
    }
    psVar12 = ar4 + 6;
    ar4 = ar4 + 7;
    dVar27 = in_xd2;
    if (in_FPSCR_SZ == '\0') {
      dVar27 = CONCAT44D((float)(int)*psVar11,SUB84(in_dr10,0));
    }
    if (in_FPSCR_PR == '\0') {
      dVar27 = CONCAT44D(F32HI(dVar27) * fVar16,SUB84(dVar27,0));
    }
    else {
      dVar27 = dVar27 * dVar28;
    }
    dVar30 = in_xd2;
    if (in_FPSCR_SZ == '\0') {
      dVar27 = CONCAT44D((int)(D2U(dVar27) >> 0x20),(float)(int)*psVar12);
      dVar30 = in_xd10;
    }
    dVar24 = in_xd14;
    if (in_FPSCR_PR == '\0') {
      in_dr10 = CONCAT44D((int)(D2U(dVar27) >> 0x20),F32LO(dVar27) * fVar16);
    }
    else {
      in_dr10 = dVar27 * dVar28;
    }
    do {
      iVar9 = *ar4 * 0x20 + ar5;
      if (in_FPSCR_SZ == '\0') {
        dVar27 = CONCAT44D(*(undefined4 *)(unsigned)(iVar8 + 8),SUB84(dVar26,0));
      }
      else {
        dVar27 = *(double *)(unsigned)(iVar8 + 8);
      }
      in_xd14 = in_xd2;
      if (in_FPSCR_SZ == '\0') {
        dVar17 = CONCAT44D((int)(D2U(dVar17) >> 0x20),(float)(int)ar4[1]);
        in_xd14 = dVar24;
      }
      if (in_FPSCR_PR == '\0') {
        dVar17 = CONCAT44D((int)(D2U(dVar17) >> 0x20),F32LO(dVar17) * fVar16);
      }
      else {
        dVar17 = dVar17 * dVar28;
      }
      if (in_FPSCR_SZ == '\0') {
        in_dr6 = CONCAT44D((int)((ulonglong)in_dr6 >> 0x20),*(undefined4 *)(unsigned)(iVar8 + 4));
        dVar24 = CONCAT44D(*(undefined4 *)(unsigned)(iVar9 + 4),*(undefined4 *)(unsigned)(iVar6 + 8));
        dVar26 = in_xd2;
        dVar22 = CONCAT44D((float)(int)ar4[2],SUB84(dVar22,0));
      }
      else {
        in_xd6 = *(double *)(unsigned)(iVar8 + 4);
        dVar24 = *(double *)(unsigned)(iVar9 + 4);
        dVar26 = *(double *)(unsigned)(iVar6 + 8);
        dVar22 = in_xd2;
      }
      in_xd2 = dVar26;
      fVar20 = F32HI(dVar27);
      fVar25 = F32LO(in_dr6);
      if (in_FPSCR_PR == '\0') {
        fVar21 = (F32LO(dVar24) - fVar20) * (F32HI(dVar24) - fVar25);
      }
      else {
        dVar26 = (dVar24 - dVar27) - in_dr6;
        fVar21 = SUB84(dVar26 * dVar26,0);
      }
      if (in_FPSCR_SZ == '\0') {
        dVar26 = CONCAT44D(*(undefined4 *)(unsigned)(iVar6 + 4),fVar21);
        dVar22 = CONCAT44D((int)(D2U(dVar22) >> 0x20),*(undefined4 *)(unsigned)(iVar9 + 8));
      }
      else {
        dVar26 = *(double *)(unsigned)(iVar6 + 4);
      }
      if (in_FPSCR_PR == '\0') {
        fVar20 = F32LO(dVar22) - fVar20;
        dVar22 = CONCAT44D((int)(D2U(dVar22) >> 0x20),fVar20);
        fVar21 = (F32HI(dVar26) - fVar25) * fVar20;
        dVar24 = CONCAT44D(fVar21,F32LO(dVar26) - fVar21);
      }
      else {
        dVar22 = dVar22 - dVar27;
        fVar20 = F32LO(dVar22);
        dVar24 = (dVar26 - in_dr6) * dVar22;
        dVar24 = dVar24 - dVar24;
      }
      dVar26 = in_xd2;
      if (in_FPSCR_SZ == '\0') {
        dVar26 = CONCAT44D(SUB84(dVar24,0),SUB84(dVar27,0));
      }
      if (in_FPSCR_PR == '\0') {
        dVar26 = CONCAT44D(F32HI(dVar26) * F32LO(in_dr8),
                                  SUB84(dVar26,0));
      }
      else {
        dVar26 = dVar26 * in_dr8;
      }
      if (in_FPSCR_PR == '\0') {
        bVar31 = F32HI(dVar26) < 0.0;
        dVar22 = CONCAT44D(F32HI(dVar22) * fVar16,fVar20);
      }
      else {
        bVar31 = dVar26 < (double)(D2U(dVar24) & 0xffffffff00000000);
        dVar22 = dVar22 * dVar28;
      }
      uVar3 = SUB84(in_dr10,0);
      uVar19 = (undefined4)((ulonglong)in_dr10 >> 0x20);
      if (bVar31) {
        if (iVar4 == 0) {
          if (in_FPSCR_SZ == '\0') {
            in_dr6 = CONCAT44D((int)((ulonglong)in_dr6 >> 0x20),*(undefined4 *)(unsigned)(iVar6 + 4));
            in_dr8 = CONCAT44D(*(undefined4 *)(unsigned)(iVar6 + 8),SUB84(in_dr8,0));
            dVar26 = CONCAT44D(*(undefined4 *)(unsigned)(iVar6 + 0xc),SUB84(dVar26,0));
          }
          else {
            in_xd6 = *(double *)(unsigned)(iVar6 + 4);
            in_dr8 = *(double *)(unsigned)(iVar6 + 0xc);
            dVar26 = *(double *)(unsigned)(iVar6 + 0x14);
          }
          *(undefined4 *)(unsigned)((int)ar7 + 0x1c) = *(undefined4 *)(unsigned)(puVar15 + -0xbc);
          *(undefined4 *)(unsigned)(ar7 + 3) = *(undefined4 *)(unsigned)(puVar15 + -0xc0);
          if (in_FPSCR_SZ == '\0') {
            *(int *)(unsigned)((int)ar7 + 0x14) = SUB84(dVar26,0);
            *(int *)(unsigned)(ar7 + 2) = (int)((ulonglong)in_dr6 >> 0x20);
            *(int *)(unsigned)((int)ar7 + 0xc) = (int)(D2U(dVar26) >> 0x20);
            *(int *)(unsigned)(ar7 + 1) = (int)((ulonglong)in_dr8 >> 0x20);
            pdVar5 = (double *)(unsigned)((int)ar7 + 4);
            *(int *)(unsigned)pdVar5 = SUB84(in_dr6,0);
          }
          else {
            ar7[2] = in_xd4;
            ar7[1] = in_dr6;
            *ar7 = dVar26;
            ar7[-1] = in_dr8;
            pdVar5 = ar7 + -2;
            *pdVar5 = in_xd6;
          }
          *(undefined4 *)(unsigned)((int)pdVar5 + -4) = 0xe0000000;
          iVar4 = 1;
          ar7 = (double *)(unsigned)((int)pdVar5 + 0x1c);
        }
        if (in_FPSCR_SZ == '\0') {
          in_dr6 = CONCAT44D(*(undefined4 *)(unsigned)(iVar8 + 8),SUB84(in_dr6,0));
          dVar26 = CONCAT44D(*(undefined4 *)(unsigned)(iVar8 + 0xc),*(undefined4 *)(unsigned)(iVar8 + 4));
        }
        else {
          in_xd4 = *(double *)(unsigned)(iVar8 + 4);
          in_dr6 = *(double *)(unsigned)(iVar8 + 0xc);
          dVar26 = *(double *)(unsigned)(iVar8 + 0x14);
        }
        *(undefined4 *)(unsigned)((int)ar7 + 0x1c) = *(undefined4 *)(unsigned)(puVar15 + -0xbc);
        *(undefined4 *)(unsigned)(ar7 + 3) = *(undefined4 *)(unsigned)(puVar15 + -0xc0);
        if (in_FPSCR_SZ == '\0') {
          *(undefined4 *)(unsigned)((int)ar7 + 0x14) = uVar3;
          *(undefined4 *)(unsigned)(ar7 + 2) = uVar19;
          *(int *)(unsigned)((int)ar7 + 0xc) = (int)(D2U(dVar26) >> 0x20);
          *(int *)(unsigned)(ar7 + 1) = (int)((ulonglong)in_dr6 >> 0x20);
          pdVar5 = (double *)(unsigned)((int)ar7 + 4);
          *(int *)(unsigned)pdVar5 = SUB84(dVar26,0);
        }
        else {
          ar7[2] = dVar30;
          ar7[1] = in_dr10;
          *ar7 = dVar26;
          ar7[-1] = in_dr6;
          pdVar5 = ar7 + -2;
          *pdVar5 = in_xd4;
        }
        *(undefined4 *)(unsigned)((int)pdVar5 + -4) = 0xe0000000;
        ar7 = (double *)(unsigned)((int)pdVar5 + 0x1c);
        iVar4 = iVar4 + 1;
        dVar27 = in_xd4;
      }
      else {
        dVar27 = in_xd4;
        if (iVar4 != 0) {
          if (in_FPSCR_SZ == '\0') {
            in_dr6 = CONCAT44D(*(undefined4 *)(unsigned)(iVar8 + 8),fVar25);
            dVar26 = CONCAT44D(*(undefined4 *)(unsigned)(iVar8 + 0xc),*(undefined4 *)(unsigned)(iVar8 + 4));
          }
          else {
            dVar27 = *(double *)(unsigned)(iVar8 + 4);
            in_dr6 = *(double *)(unsigned)(iVar8 + 0xc);
            dVar26 = *(double *)(unsigned)(iVar8 + 0x14);
          }
          *(undefined4 *)(unsigned)((int)ar7 + 0x1c) = *(undefined4 *)(unsigned)(puVar15 + -0xbc);
          *(undefined4 *)(unsigned)(ar7 + 3) = *(undefined4 *)(unsigned)(puVar15 + -0xc0);
          if (in_FPSCR_SZ == '\0') {
            *(undefined4 *)(unsigned)((int)ar7 + 0x14) = uVar3;
            *(undefined4 *)(unsigned)(ar7 + 2) = uVar19;
            *(int *)(unsigned)((int)ar7 + 0xc) = (int)(D2U(dVar26) >> 0x20);
            *(int *)(unsigned)(ar7 + 1) = (int)((ulonglong)in_dr6 >> 0x20);
            pdVar5 = (double *)(unsigned)((int)ar7 + 4);
            *(int *)(unsigned)pdVar5 = SUB84(dVar26,0);
          }
          else {
            ar7[2] = dVar30;
            ar7[1] = in_dr10;
            *ar7 = dVar26;
            ar7[-1] = in_dr6;
            pdVar5 = ar7 + -2;
            *pdVar5 = dVar27;
          }
          *(undefined4 *)(unsigned)((int)pdVar5 + -4) = 0xf0000000;
          iVar13 = iVar13 + iVar4 + 1;
          iVar4 = 0;
          ar7 = (double *)(unsigned)((int)pdVar5 + 0x1c);
        }
      }
      ar4 = (short *)(unsigned)((int)ar4 + *(int *)(unsigned)(puVar15 + -0xb8) + 6);
      dVar24 = in_xd14;
      if (in_FPSCR_SZ == '\0') {
        dVar24 = CONCAT44D(SUB84(dVar17,0),uVar3);
        in_dr10 = CONCAT44D(uVar19,SUB84(in_dr6,0));
      }
      in_dr6 = in_dr10;
      in_dr10 = dVar24;
      iVar14 = iVar14 + -1;
      in_xd4 = dVar30;
      if (in_FPSCR_SZ == '\0') {
        dVar26 = CONCAT44D((int)(D2U(dVar26) >> 0x20),SUB84(in_dr10,0));
        in_xd4 = dVar27;
      }
      in_dr8 = CONCAT44D((int)((ulonglong)in_dr8 >> 0x20),-SUB84(in_dr8,0));
      uVar3 = (undefined4)(D2U(dVar22) >> 0x20);
      in_xd10 = dVar22;
      if (in_FPSCR_SZ == '\0') {
        in_dr10 = CONCAT44D((int)((ulonglong)in_dr10 >> 0x20),uVar3);
        in_xd10 = dVar30;
      }
      iVar6 = iVar8;
      iVar8 = iVar9;
      dVar30 = in_xd10;
      dVar24 = in_xd14;
    } while (iVar14 != 0);
    if (iVar4 != 0) {
      if (in_FPSCR_SZ == '\0') {
        in_dr6 = CONCAT44D(*(undefined4 *)(unsigned)(iVar9 + 8),SUB84(in_dr6,0));
        dVar26 = CONCAT44D(*(undefined4 *)(unsigned)(iVar9 + 0xc),*(undefined4 *)(unsigned)(iVar9 + 4));
      }
      else {
        in_xd4 = *(double *)(unsigned)(iVar9 + 4);
        in_dr6 = *(double *)(unsigned)(iVar9 + 0xc);
        dVar26 = *(double *)(unsigned)(iVar9 + 0x14);
      }
      *(undefined4 *)(unsigned)((int)ar7 + 0x1c) = *(undefined4 *)(unsigned)(puVar15 + -0xbc);
      *(undefined4 *)(unsigned)(ar7 + 3) = *(undefined4 *)(unsigned)(puVar15 + -0xc0);
      if (in_FPSCR_SZ == '\0') {
        *(undefined4 *)(unsigned)((int)ar7 + 0x14) = uVar3;
        *(int *)(unsigned)(ar7 + 2) = SUB84(dVar17,0);
        *(int *)(unsigned)((int)ar7 + 0xc) = (int)(D2U(dVar26) >> 0x20);
        *(int *)(unsigned)(ar7 + 1) = (int)((ulonglong)in_dr6 >> 0x20);
        pdVar5 = (double *)(unsigned)((int)ar7 + 4);
        *(int *)(unsigned)pdVar5 = SUB84(dVar26,0);
      }
      else {
        ar7[2] = dVar22;
        ar7[1] = in_xd14;
        *ar7 = dVar26;
        ar7[-1] = in_dr6;
        pdVar5 = ar7 + -2;
        *pdVar5 = in_xd4;
      }
      *(undefined4 *)(unsigned)((int)pdVar5 + -4) = 0xf0000000;
      iVar13 = iVar13 + iVar4 + 1;
      ar7 = (double *)(unsigned)((int)pdVar5 + 0x1c);
    }
    uVar10 = uVar10 - 1;
  } while (uVar10 != 0);
  (*(undefined4 *)(unsigned)(unsigned)0x8c4aa520) = (*(undefined4 *)(unsigned)(unsigned)0x8c4aa520) + iVar13;
  (*(undefined4 *)(unsigned)(unsigned)0x8c4aa51c) = (*(undefined4 *)(unsigned)(unsigned)0x8c4aa51c) + iVar7;
  return ar7;
}

__asm__(".globl _FUN_8c22b7a8\n.set _FUN_8c22b7a8, _FUN_8c22b7a8_def\n");
