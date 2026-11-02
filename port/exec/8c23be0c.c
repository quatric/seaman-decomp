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
undefined4 FUN_8c23be0c_def(uint *ar4,undefined4 ar5,float *ar6,int ar7)

{
  ring[rp++ & 255] = "FUN_8c23be0c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 64; for (int i_ = 0; i_ < 64; i_++) z_[i_] = 0; }
  double *ar4_00;
  uint uVar1;
  int ar7_00;
  double in_dr0 = 0;
  float in_fr3 = 0;
  float fVar2;
  double dVar3;
  undefined4 uVar4;
  undefined8 in_xd2 = 0;
  undefined4 in_PR = 0;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  char cVar8;
  char cVar9;
  
  cVar9 = '\0';
  cVar8 = '\0';
  *(unsigned *)0x8c4ab278 = (unsigned)(unsigned long)(((double *)(fr0_ - 0x40)));
  ar7_00 = ar7;
  (*(undefined4 *)(unsigned)(unsigned)0x8c4ab27c) = ar5;
  *(unsigned *)0x8c4ab280 = (unsigned)(unsigned long)(ar6);
  uVar4 = ar5;
  (*(undefined4 *)(fr0_ - 0x14)) = in_PR;
  (vsp = ((unsigned long)(fr0_ - 64)), FUN_8c23ba30(((undefined4 *)(unsigned long)*(unsigned *)0x8c4ab278),ar5,ar6,ar7));
  ar4_00 = ((undefined4 *)(unsigned long)*(unsigned *)0x8c4ab278) + 2;
  (vsp = ((unsigned long)(fr0_ - 64)), FUN_8c23ba30(ar4_00,ar5,ar6,ar7_00));
  if (ar7 != 0) {
    if (cVar9 == '\0') {
      in_fr3 = *((undefined4 *)(unsigned long)*(unsigned *)0x8c4ab280);
    }
    else {
      in_xd2 = *(undefined8 *)(unsigned)((undefined4 *)(unsigned long)*(unsigned *)0x8c4ab280);
    }
    if (cVar9 == '\0') {
      fVar2 = ((undefined4 *)(unsigned long)*(unsigned *)0x8c4ab280)[1];
      (*(float *)(fr0_ - 0x20)) = -in_fr3;
    }
    else {
      (*(float *)(fr0_ - 0x20)) = (float)in_xd2;
      in_xd2 = *(undefined8 *)(unsigned)(((undefined4 *)(unsigned long)*(unsigned *)0x8c4ab280) + 1);
      fVar2 = -in_fr3;
    }
    if (cVar9 == '\0') {
      (*(float *)(fr0_ - 0x18)) = ((undefined4 *)(unsigned long)*(unsigned *)0x8c4ab280)[2];
      (*(float *)(fr0_ - 0x1c)) = -fVar2;
    }
    else {
      (*(float *)(fr0_ - 0x1c)) = (float)in_xd2;
      in_xd2 = *(undefined8 *)(unsigned)(((undefined4 *)(unsigned long)*(unsigned *)0x8c4ab280) + 2);
      (*(float *)(fr0_ - 0x18)) = -fVar2;
    }
    *(unsigned *)0x8c4ab280 = (unsigned)(unsigned long)(&(*(float *)(fr0_ - 0x20)));
    (*(float *)(fr0_ - 0x18)) = -(*(float *)(fr0_ - 0x18));
    if (cVar9 != '\0') {
      (*(float *)(fr0_ - 0x18)) = (float)in_xd2;
      (*(undefined4 *)(fr0_ - 0x14)) = (undefined4)((ulonglong)in_xd2 >> 0x20);
    }
  }
  (vsp = ((unsigned long)(fr0_ - 64)), FUN_8c23ba42(ar4_00,ar5,ar6,ar7_00));
  if (cVar9 == '\0') {
    dVar3 = CONCAT44D(*(undefined4 *)(unsigned)((undefined4 *)(unsigned long)*(unsigned *)0x8c4ab278),(*(undefined4 *)(unsigned)(unsigned)0x8c4c11b0));
  }
  else {
    dVar3 = *((undefined4 *)(unsigned long)*(unsigned *)0x8c4ab278);
  }
  if (cVar8 == '\0') {
    dVar3 = CONCAT44D(F32HI(dVar3) + F32LO(dVar3),SUB84(dVar3,0));
  }
  else {
    dVar3 = dVar3 + dVar3;
  }
  if (cVar9 == '\0') {
    *(int *)(unsigned)*(unsigned *)0x8c4ab278 = (unsigned)(unsigned long)((int)(D2U(dVar3) >> 0x20));
  }
  else {
    *(unsigned *)(unsigned long)*(unsigned *)0x8c4ab278 = (unsigned)(dVar3);
  }
  ({ unsigned long ri0_ = (unsigned long)(uVar4); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 64)); FUN_8c23ba9c(uVar4,ar5,ar6,ar7_00); });
  uVar1 = *ar4;
  uVar4 = (undefined4)(D2U(dVar3) >> 0x20);
  if (cVar9 == '\0') {
    in_dr0 = CONCAT44D((int)((ulonglong)in_dr0 >> 0x20),*(undefined4 *)(unsigned)((undefined4 *)(unsigned long)*(unsigned *)0x8c4ab278));
  }
  if (cVar8 == '\0') {
    in_dr0 = CONCAT44D((int)((ulonglong)in_dr0 >> 0x20),
                              F32LO(in_dr0) * (float)(uVar1 >> 0x18));
  }
  else {
    in_dr0 = in_dr0 * CONCAT44D(uVar4,(float)(uVar1 >> 0x18));
  }
  if (cVar8 == '\0') {
    uVar5 = (uint)SUB84(in_dr0,0);
  }
  else {
    uVar5 = (uint)in_dr0;
  }
  fVar2 = (float)(uVar1 >> 0x10 & 0xff);
  if (cVar9 == '\0') {
    in_dr0 = CONCAT44D((int)((ulonglong)in_dr0 >> 0x20),
                              *(undefined4 *)(unsigned)((int)((undefined4 *)(unsigned long)*(unsigned *)0x8c4ab278) + 4));
  }
  if (cVar8 == '\0') {
    fVar2 = F32LO(in_dr0) * fVar2;
    in_dr0 = CONCAT44D((int)((ulonglong)in_dr0 >> 0x20),fVar2);
    uVar6 = (uint)fVar2;
  }
  else {
    in_dr0 = in_dr0 * CONCAT44D(uVar4,fVar2);
    uVar6 = (uint)in_dr0;
  }
  fVar2 = (float)(uVar1 >> 8 & 0xff);
  if (cVar9 == '\0') {
    in_dr0 = CONCAT44D((int)((ulonglong)in_dr0 >> 0x20),*(undefined4 *)(unsigned)(((undefined4 *)(unsigned long)*(unsigned *)0x8c4ab278) + 1));
  }
  if (cVar8 == '\0') {
    fVar2 = F32LO(in_dr0) * fVar2;
    in_dr0 = CONCAT44D((int)((ulonglong)in_dr0 >> 0x20),fVar2);
    uVar7 = (uint)fVar2;
  }
  else {
    in_dr0 = in_dr0 * CONCAT44D(uVar4,fVar2);
    uVar7 = (uint)in_dr0;
  }
  if (cVar9 == '\0') {
    in_dr0 = CONCAT44D((int)((ulonglong)in_dr0 >> 0x20),
                              *(undefined4 *)(unsigned)((int)((undefined4 *)(unsigned long)*(unsigned *)0x8c4ab278) + 0xc));
  }
  if (cVar8 == '\0') {
    fVar2 = F32LO(in_dr0) * (float)(uVar1 & 0xff);
    in_dr0 = CONCAT44D((int)((ulonglong)in_dr0 >> 0x20),fVar2);
    uVar1 = (uint)fVar2;
  }
  else {
    in_dr0 = in_dr0 * CONCAT44D(uVar4,(float)(uVar1 & 0xff));
    uVar1 = (uint)in_dr0;
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
  if (0xff < uVar1) {
    uVar1 = 0xff;
  }
  *ar4 = uVar5 << 0x18 | uVar6 << 0x10 | uVar7 << 8 | uVar1;
  uVar1 = ar4[1];
  fVar2 = (float)(uVar1 >> 0x10 & 0xff);
  if (cVar9 == '\0') {
    in_dr0 = CONCAT44D((int)((ulonglong)in_dr0 >> 0x20),
                              *(undefined4 *)(unsigned)((int)((undefined4 *)(unsigned long)*(unsigned *)0x8c4ab278) + 0x14));
  }
  if (cVar8 == '\0') {
    fVar2 = F32LO(in_dr0) * fVar2;
    in_dr0 = CONCAT44D((int)((ulonglong)in_dr0 >> 0x20),fVar2);
    uVar5 = (uint)fVar2;
  }
  else {
    in_dr0 = in_dr0 * CONCAT44D(uVar4,fVar2);
    uVar5 = (uint)in_dr0;
  }
  fVar2 = (float)(uVar1 >> 8 & 0xff);
  if (cVar9 == '\0') {
    in_dr0 = CONCAT44D((int)((ulonglong)in_dr0 >> 0x20),*(undefined4 *)(unsigned)(((undefined4 *)(unsigned long)*(unsigned *)0x8c4ab278) + 3));
  }
  if (cVar8 == '\0') {
    fVar2 = F32LO(in_dr0) * fVar2;
    in_dr0 = CONCAT44D((int)((ulonglong)in_dr0 >> 0x20),fVar2);
    uVar6 = (uint)fVar2;
  }
  else {
    in_dr0 = in_dr0 * CONCAT44D(uVar4,fVar2);
    uVar6 = (uint)in_dr0;
  }
  if (cVar9 == '\0') {
    in_dr0 = CONCAT44D((int)((ulonglong)in_dr0 >> 0x20),
                              *(undefined4 *)(unsigned)((int)((undefined4 *)(unsigned long)*(unsigned *)0x8c4ab278) + 0x1c));
  }
  if (cVar8 == '\0') {
    uVar1 = (uint)(F32LO(in_dr0) * (float)(uVar1 & 0xff));
  }
  else {
    uVar1 = (uint)(in_dr0 * CONCAT44D(uVar4,(float)(uVar1 & 0xff)));
  }
  if (0xff < uVar5) {
    uVar5 = 0xff;
  }
  if (0xff < uVar6) {
    uVar6 = 0xff;
  }
  if (0xff < uVar1) {
    uVar1 = 0xff;
  }
  ar4[1] = uVar5 << 0x10 | uVar6 << 8 | uVar1 | 0xff000000;
  return 0xc;
}

__asm__(".globl _FUN_8c23be0c\n.set _FUN_8c23be0c, _FUN_8c23be0c_def\n");
