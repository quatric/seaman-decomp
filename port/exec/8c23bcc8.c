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
undefined4 FUN_8c23bcc8_def(uint *ar4,undefined4 ar5,float *ar6,int ar7)

{
  ring[rp++ & 255] = "FUN_8c23bcc8";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 56; for (int i_ = 0; i_ < 56; i_++) z_[i_] = 0; }
  double *ar4_00;
  undefined4 ar5_00;
  int ar7_00;
  float in_fr3 = 0;
  float fVar1;
  double dVar2;
  undefined4 in_fr5 = 0;
  double dVar3;
  float fVar4;
  undefined8 in_xd2 = 0;
  undefined4 in_PR = 0;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  char cVar9;
  char cVar10;
  
  cVar10 = '\0';
  cVar9 = '\0';
  *(unsigned *)0x8c4ab278 = (unsigned)(unsigned long)(((double *)(fr0_ - 0x38)));
  ar5_00 = ar5;
  ar7_00 = ar7;
  (*(undefined4 *)(unsigned)(unsigned)0x8c4ab27c) = ar5;
  *(unsigned *)0x8c4ab280 = (unsigned)(unsigned long)(ar6);
  (*(undefined4 *)(fr0_ - 0xc)) = in_PR;
  (vsp = ((unsigned long)(fr0_ - 56)), FUN_8c23ba30(((undefined4 *)(unsigned long)*(unsigned *)0x8c4ab278),ar5,ar6,ar7));
  ar4_00 = ((undefined4 *)(unsigned long)*(unsigned *)0x8c4ab278) + 2;
  (vsp = ((unsigned long)(fr0_ - 56)), FUN_8c23ba30(ar4_00,ar5_00,ar6,ar7_00));
  if (ar7 != 0) {
    if (cVar10 == '\0') {
      in_fr3 = *((undefined4 *)(unsigned long)*(unsigned *)0x8c4ab280);
    }
    else {
      in_xd2 = *(undefined8 *)(unsigned)((undefined4 *)(unsigned long)*(unsigned *)0x8c4ab280);
    }
    if (cVar10 == '\0') {
      fVar4 = ((undefined4 *)(unsigned long)*(unsigned *)0x8c4ab280)[1];
      (*(float *)(fr0_ - 0x18)) = -in_fr3;
    }
    else {
      (*(float *)(fr0_ - 0x18)) = (float)in_xd2;
      in_xd2 = *(undefined8 *)(unsigned)(((undefined4 *)(unsigned long)*(unsigned *)0x8c4ab280) + 1);
      fVar4 = -in_fr3;
    }
    if (cVar10 == '\0') {
      (*(float *)(fr0_ - 0x10)) = ((undefined4 *)(unsigned long)*(unsigned *)0x8c4ab280)[2];
      (*(float *)(fr0_ - 0x14)) = -fVar4;
    }
    else {
      (*(float *)(fr0_ - 0x14)) = (float)in_xd2;
      in_xd2 = *(undefined8 *)(unsigned)(((undefined4 *)(unsigned long)*(unsigned *)0x8c4ab280) + 2);
      (*(float *)(fr0_ - 0x10)) = -fVar4;
    }
    *(unsigned *)0x8c4ab280 = (unsigned)(unsigned long)(&(*(float *)(fr0_ - 0x18)));
    (*(float *)(fr0_ - 0x10)) = -(*(float *)(fr0_ - 0x10));
    if (cVar10 != '\0') {
      (*(float *)(fr0_ - 0x10)) = (float)in_xd2;
      (*(undefined4 *)(fr0_ - 0xc)) = (undefined4)((ulonglong)in_xd2 >> 0x20);
    }
  }
  (vsp = ((unsigned long)(fr0_ - 56)), FUN_8c23ba42(ar4_00,ar5_00,ar6,ar7_00));
  if (cVar10 == '\0') {
    dVar2 = CONCAT44D(*(undefined4 *)(unsigned)((undefined4 *)(unsigned long)*(unsigned *)0x8c4ab278),(*(undefined4 *)(unsigned)(unsigned)0x8c4c11b0));
  }
  else {
    dVar2 = *((undefined4 *)(unsigned long)*(unsigned *)0x8c4ab278);
  }
  if (cVar9 == '\0') {
    dVar2 = CONCAT44D(F32HI(dVar2) + F32LO(dVar2),SUB84(dVar2,0));
  }
  else {
    dVar2 = dVar2 + dVar2;
  }
  if (cVar10 == '\0') {
    *(int *)(unsigned)*(unsigned *)0x8c4ab278 = (unsigned)(unsigned long)((int)(D2U(dVar2) >> 0x20));
  }
  else {
    *(unsigned *)(unsigned long)*(unsigned *)0x8c4ab278 = (unsigned)(dVar2);
  }
  ({ unsigned long ri0_ = (unsigned long)(ar4); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 56)); FUN_8c23ba9c(ar5,ar5_00,ar6,ar7_00); });
  if (cVar10 == '\0') {
    dVar3 = CONCAT44D(0x437f0000,in_fr5);
    dVar2 = CONCAT44D((int)(D2U(dVar2) >> 0x20),*(undefined4 *)(unsigned)((undefined4 *)(unsigned long)*(unsigned *)0x8c4ab278));
  }
  else {
    dVar3 = -5.486125448238677e+303;
  }
  fVar4 = F32HI(dVar3);
  if (cVar9 == '\0') {
    fVar1 = F32LO(dVar2) * fVar4;
    dVar2 = CONCAT44D((int)(D2U(dVar2) >> 0x20),fVar1);
    uVar5 = (uint)fVar1;
  }
  else {
    dVar2 = dVar2 * dVar3;
    uVar5 = (uint)dVar2;
  }
  if (cVar10 == '\0') {
    dVar2 = CONCAT44D((int)(D2U(dVar2) >> 0x20),*(undefined4 *)(unsigned)((int)((undefined4 *)(unsigned long)*(unsigned *)0x8c4ab278) + 4)
                            );
  }
  if (cVar9 == '\0') {
    fVar1 = F32LO(dVar2) * fVar4;
    dVar2 = CONCAT44D((int)(D2U(dVar2) >> 0x20),fVar1);
    uVar6 = (uint)fVar1;
  }
  else {
    dVar2 = dVar2 * dVar3;
    uVar6 = (uint)dVar2;
  }
  if (cVar10 == '\0') {
    dVar2 = CONCAT44D((int)(D2U(dVar2) >> 0x20),*(undefined4 *)(unsigned)(((undefined4 *)(unsigned long)*(unsigned *)0x8c4ab278) + 1));
  }
  if (cVar9 == '\0') {
    fVar1 = F32LO(dVar2) * fVar4;
    dVar2 = CONCAT44D((int)(D2U(dVar2) >> 0x20),fVar1);
    uVar7 = (uint)fVar1;
  }
  else {
    dVar2 = dVar2 * dVar3;
    uVar7 = (uint)dVar2;
  }
  if (cVar10 == '\0') {
    dVar2 = CONCAT44D((int)(D2U(dVar2) >> 0x20),
                             *(undefined4 *)(unsigned)((int)((undefined4 *)(unsigned long)*(unsigned *)0x8c4ab278) + 0xc));
  }
  if (cVar9 == '\0') {
    fVar1 = F32LO(dVar2) * fVar4;
    dVar2 = CONCAT44D((int)(D2U(dVar2) >> 0x20),fVar1);
    uVar8 = (uint)fVar1;
  }
  else {
    dVar2 = dVar2 * dVar3;
    uVar8 = (uint)dVar2;
  }
  if (0xff < uVar5) {
    uVar5 = 0xff;
  }
  if (0xff < uVar6) {
    uVar6 = 0xff;
  }
  if (0xff < uVar7) {
    uVar7 = 0xff;
  }
  if (0xff < uVar8) {
    uVar8 = 0xff;
  }
  *ar4 = uVar5 << 0x18 | uVar6 << 0x10 | uVar7 << 8 | uVar8;
  if (cVar10 == '\0') {
    dVar2 = CONCAT44D((int)(D2U(dVar2) >> 0x20),
                             *(undefined4 *)(unsigned)((int)((undefined4 *)(unsigned long)*(unsigned *)0x8c4ab278) + 0x14));
  }
  if (cVar9 == '\0') {
    fVar1 = F32LO(dVar2) * fVar4;
    dVar2 = CONCAT44D((int)(D2U(dVar2) >> 0x20),fVar1);
    uVar5 = (uint)fVar1;
  }
  else {
    dVar2 = dVar2 * dVar3;
    uVar5 = (uint)dVar2;
  }
  if (cVar10 == '\0') {
    dVar2 = CONCAT44D((int)(D2U(dVar2) >> 0x20),*(undefined4 *)(unsigned)(((undefined4 *)(unsigned long)*(unsigned *)0x8c4ab278) + 3));
  }
  if (cVar9 == '\0') {
    fVar1 = F32LO(dVar2) * fVar4;
    dVar2 = CONCAT44D((int)(D2U(dVar2) >> 0x20),fVar1);
    uVar6 = (uint)fVar1;
  }
  else {
    dVar2 = dVar2 * dVar3;
    uVar6 = (uint)dVar2;
  }
  if (cVar10 == '\0') {
    dVar2 = CONCAT44D((int)(D2U(dVar2) >> 0x20),
                             *(undefined4 *)(unsigned)((int)((undefined4 *)(unsigned long)*(unsigned *)0x8c4ab278) + 0x1c));
  }
  if (cVar9 == '\0') {
    uVar7 = (uint)(F32LO(dVar2) * fVar4);
  }
  else {
    uVar7 = (uint)(dVar2 * dVar3);
  }
  if (0xff < uVar5) {
    uVar5 = 0xff;
  }
  if (0xff < uVar6) {
    uVar6 = 0xff;
  }
  if (0xff < uVar7) {
    uVar7 = 0xff;
  }
  ar4[1] = uVar5 << 0x10 | uVar6 << 8 | uVar7 | 0xff000000;
  return 0xc;
}

__asm__(".globl _FUN_8c23bcc8\n.set _FUN_8c23bcc8, _FUN_8c23bcc8_def\n");
