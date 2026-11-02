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
undefined4 FUN_8c23bbac_def(double *ar4,undefined4 ar5,float *ar6,int ar7)

{
  ring[rp++ & 255] = "FUN_8c23bbac";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 60; for (int i_ = 0; i_ < 60; i_++) z_[i_] = 0; }
  double *ar4_00;
  int ar7_00;
  float in_fr3 = 0;
  float fVar1;
  double dVar2;
  undefined8 in_xd2 = 0;
  undefined4 in_PR = 0;
  char in_FPSCR_PR = 0;
  char in_FPSCR_SZ = 0;
  undefined4 ar4_01;
  
  *(unsigned *)0x8c4ab278 = (unsigned)(unsigned long)(((double *)(fr0_ - 0x3c)));
  ar7_00 = ar7;
  (*(undefined4 *)(unsigned)(unsigned)0x8c4ab27c) = ar5;
  *(unsigned *)0x8c4ab280 = (unsigned)(unsigned long)(ar6);
  ar4_01 = ar5;
  (*(undefined4 *)(fr0_ - 0x10)) = in_PR;
  (vsp = ((unsigned long)(fr0_ - 60)), FUN_8c23ba30(((undefined4 *)(unsigned long)*(unsigned *)0x8c4ab278),ar5,ar6,ar7));
  ar4_00 = ((undefined4 *)(unsigned long)*(unsigned *)0x8c4ab278) + 2;
  (vsp = ((unsigned long)(fr0_ - 60)), FUN_8c23ba30(ar4_00,ar5,ar6,ar7_00));
  if (ar7 != 0) {
    if (in_FPSCR_SZ == '\0') {
      in_fr3 = *((undefined4 *)(unsigned long)*(unsigned *)0x8c4ab280);
    }
    else {
      in_xd2 = *(undefined8 *)(unsigned)((undefined4 *)(unsigned long)*(unsigned *)0x8c4ab280);
    }
    if (in_FPSCR_SZ == '\0') {
      fVar1 = ((undefined4 *)(unsigned long)*(unsigned *)0x8c4ab280)[1];
      (*(float *)(fr0_ - 0x1c)) = -in_fr3;
    }
    else {
      (*(float *)(fr0_ - 0x1c)) = (float)in_xd2;
      in_xd2 = *(undefined8 *)(unsigned)(((undefined4 *)(unsigned long)*(unsigned *)0x8c4ab280) + 1);
      fVar1 = -in_fr3;
    }
    if (in_FPSCR_SZ == '\0') {
      (*(float *)(fr0_ - 0x14)) = ((undefined4 *)(unsigned long)*(unsigned *)0x8c4ab280)[2];
      (*(float *)(fr0_ - 0x18)) = -fVar1;
    }
    else {
      (*(float *)(fr0_ - 0x18)) = (float)in_xd2;
      in_xd2 = *(undefined8 *)(unsigned)(((undefined4 *)(unsigned long)*(unsigned *)0x8c4ab280) + 2);
      (*(float *)(fr0_ - 0x14)) = -fVar1;
    }
    *(unsigned *)0x8c4ab280 = (unsigned)(unsigned long)(&(*(float *)(fr0_ - 0x1c)));
    (*(float *)(fr0_ - 0x14)) = -(*(float *)(fr0_ - 0x14));
    if (in_FPSCR_SZ != '\0') {
      (*(float *)(fr0_ - 0x14)) = (float)in_xd2;
      (*(undefined4 *)(fr0_ - 0x10)) = (undefined4)((ulonglong)in_xd2 >> 0x20);
    }
  }
  (vsp = ((unsigned long)(fr0_ - 60)), FUN_8c23ba42(ar4_00,ar5,ar6,ar7_00));
  if (in_FPSCR_SZ == '\0') {
    dVar2 = CONCAT44D(*(undefined4 *)(unsigned)((undefined4 *)(unsigned long)*(unsigned *)0x8c4ab278),(*(undefined4 *)(unsigned)(unsigned)0x8c4c11b0));
  }
  else {
    dVar2 = *((undefined4 *)(unsigned long)*(unsigned *)0x8c4ab278);
  }
  if (in_FPSCR_PR == '\0') {
    dVar2 = CONCAT44D(F32HI(dVar2) + F32LO(dVar2),SUB84(dVar2,0));
  }
  else {
    dVar2 = dVar2 + dVar2;
  }
  if (in_FPSCR_SZ == '\0') {
    *(int *)(unsigned)*(unsigned *)0x8c4ab278 = (unsigned)(unsigned long)((int)(D2U(dVar2) >> 0x20));
  }
  else {
    *(unsigned *)(unsigned long)*(unsigned *)0x8c4ab278 = (unsigned)(dVar2);
  }
  ({ unsigned long ri0_ = (unsigned long)(ar4_01); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 60)); FUN_8c23ba9c(ar4_01,ar5,ar6,ar7_00); });
  if (in_FPSCR_SZ == '\0') {
    dVar2 = CONCAT44D(*(undefined4 *)(unsigned)ar4,*(undefined4 *)(unsigned)((undefined4 *)(unsigned long)*(unsigned *)0x8c4ab278));
  }
  else {
    dVar2 = *ar4;
  }
  if (in_FPSCR_PR == '\0') {
    dVar2 = CONCAT44D(F32HI(dVar2) * F32LO(dVar2),SUB84(dVar2,0));
  }
  else {
    dVar2 = dVar2 * dVar2;
  }
  if (in_FPSCR_SZ == '\0') {
    *(int *)(unsigned)ar4 = (int)(D2U(dVar2) >> 0x20);
  }
  else {
    *ar4 = dVar2;
  }
  if (in_FPSCR_SZ == '\0') {
    dVar2 = CONCAT44D(*(undefined4 *)(unsigned)((int)ar4 + 4),*(undefined4 *)(unsigned)((int)((undefined4 *)(unsigned long)*(unsigned *)0x8c4ab278) + 4));
  }
  else {
    dVar2 = *(double *)(unsigned)((int)ar4 + 4);
  }
  if (in_FPSCR_PR == '\0') {
    dVar2 = CONCAT44D(F32HI(dVar2) * F32LO(dVar2),SUB84(dVar2,0));
  }
  else {
    dVar2 = dVar2 * dVar2;
  }
  if (in_FPSCR_SZ == '\0') {
    *(int *)(unsigned)((int)ar4 + 4) = (int)(D2U(dVar2) >> 0x20);
  }
  else {
    *(double *)(unsigned)((int)ar4 + 4) = dVar2;
  }
  if (in_FPSCR_SZ == '\0') {
    dVar2 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 1),*(undefined4 *)(unsigned)(((undefined4 *)(unsigned long)*(unsigned *)0x8c4ab278) + 1));
  }
  else {
    dVar2 = ar4[1];
  }
  if (in_FPSCR_PR == '\0') {
    dVar2 = CONCAT44D(F32HI(dVar2) * F32LO(dVar2),SUB84(dVar2,0));
  }
  else {
    dVar2 = dVar2 * dVar2;
  }
  if (in_FPSCR_SZ == '\0') {
    *(int *)(unsigned)(ar4 + 1) = (int)(D2U(dVar2) >> 0x20);
  }
  else {
    ar4[1] = dVar2;
  }
  if (in_FPSCR_SZ == '\0') {
    dVar2 = CONCAT44D(*(undefined4 *)(unsigned)((int)ar4 + 0xc),
                             *(undefined4 *)(unsigned)((int)((undefined4 *)(unsigned long)*(unsigned *)0x8c4ab278) + 0xc));
  }
  else {
    dVar2 = *(double *)(unsigned)((int)ar4 + 0xc);
  }
  if (in_FPSCR_PR == '\0') {
    dVar2 = CONCAT44D(F32HI(dVar2) * F32LO(dVar2),SUB84(dVar2,0));
  }
  else {
    dVar2 = dVar2 * dVar2;
  }
  if (in_FPSCR_SZ == '\0') {
    *(int *)(unsigned)((int)ar4 + 0xc) = (int)(D2U(dVar2) >> 0x20);
  }
  else {
    *(double *)(unsigned)((int)ar4 + 0xc) = dVar2;
  }
  if (in_FPSCR_SZ == '\0') {
    dVar2 = CONCAT44D(*(undefined4 *)(unsigned)((int)ar4 + 0x14),
                             *(undefined4 *)(unsigned)((int)((undefined4 *)(unsigned long)*(unsigned *)0x8c4ab278) + 0x14));
  }
  else {
    dVar2 = *(double *)(unsigned)((int)ar4 + 0x14);
  }
  if (in_FPSCR_PR == '\0') {
    dVar2 = CONCAT44D(F32HI(dVar2) * F32LO(dVar2),SUB84(dVar2,0));
  }
  else {
    dVar2 = dVar2 * dVar2;
  }
  if (in_FPSCR_SZ == '\0') {
    *(int *)(unsigned)((int)ar4 + 0x14) = (int)(D2U(dVar2) >> 0x20);
  }
  else {
    *(double *)(unsigned)((int)ar4 + 0x14) = dVar2;
  }
  if (in_FPSCR_SZ == '\0') {
    dVar2 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 3),*(undefined4 *)(unsigned)(((undefined4 *)(unsigned long)*(unsigned *)0x8c4ab278) + 3));
  }
  else {
    dVar2 = ar4[3];
  }
  if (in_FPSCR_PR == '\0') {
    dVar2 = CONCAT44D(F32HI(dVar2) * F32LO(dVar2),SUB84(dVar2,0));
  }
  else {
    dVar2 = dVar2 * dVar2;
  }
  if (in_FPSCR_SZ == '\0') {
    *(int *)(unsigned)(ar4 + 3) = (int)(D2U(dVar2) >> 0x20);
  }
  else {
    ar4[3] = dVar2;
  }
  if (in_FPSCR_SZ == '\0') {
    dVar2 = CONCAT44D(*(undefined4 *)(unsigned)((int)ar4 + 0x1c),
                             *(undefined4 *)(unsigned)((int)((undefined4 *)(unsigned long)*(unsigned *)0x8c4ab278) + 0x1c));
  }
  else {
    dVar2 = *(double *)(unsigned)((int)ar4 + 0x1c);
  }
  if (in_FPSCR_PR == '\0') {
    dVar2 = CONCAT44D(F32HI(dVar2) * F32LO(dVar2),SUB84(dVar2,0));
  }
  else {
    dVar2 = dVar2 * dVar2;
  }
  if (in_FPSCR_SZ == '\0') {
    *(int *)(unsigned)((int)ar4 + 0x1c) = (int)(D2U(dVar2) >> 0x20);
  }
  else {
    *(double *)(unsigned)((int)ar4 + 0x1c) = dVar2;
  }
  return 0xc;
}

__asm__(".globl _FUN_8c23bbac\n.set _FUN_8c23bbac, _FUN_8c23bbac_def\n");
