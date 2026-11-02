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
undefined4 * FUN_8c032be0_def(undefined4 ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c032be0";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 40; for (int i_ = 0; i_ < 40; i_++) z_[i_] = 0; }
  undefined4 *puVar1;
  int ar5_00;
  float in_fr1 = 0;
  float fVar3;
  float fVar4;
  double dVar2;
  float fVar5;
  undefined8 in_dr4 = 0;
  float fVar6;
  double dVar7;
  undefined4 in_fr15 = 0;
  double dVar8;
  undefined8 in_xd0 = 0;
  bool bVar9;
  undefined4 in_PR = 0;
  char cVar10;
  char cVar11;
  
  cVar11 = '\0';
  cVar10 = '\0';
  fVar6 = F32HI(in_dr4);
  dVar8 = CONCAT44D(fVar6,in_fr15);
  fVar5 = (float)in_dr4;
  fVar3 = fVar5 - fVar6;
  puVar1 = (undefined4 *)(unsigned)0xc;
  if (fVar6 != fVar5) {
    ar5_00 = ar5;
    fVar4 = fVar3;
    (vsp = ((unsigned long)(fr0_ - 40)), FUN_8c032ab0(ar4,ar5,ar6,ar7));
    (*(float *)(fr0_ - 0x28)) = fVar4;
    (*(float *)(fr0_ - 0x20)) = in_fr1;
    fVar6 = fVar4;
    if (cVar11 == '\0') {
      (*(float *)(fr0_ - 0x28)) = fVar3;
      (*(float *)(fr0_ - 0x20)) = fVar4;
      fVar6 = (*(float *)(fr0_ - 0x1c));
    }
    (*(float *)(fr0_ - 0x1c)) = fVar6;
    (vsp = ((unsigned long)(fr0_ - 40)), FUN_8c032ab0(ar4,ar5_00,ar6,ar7));
    if (cVar11 == '\0') {
      dVar7 = CONCAT44D((*(float *)(fr0_ - 0x20)),fVar5);
      (*(float *)(fr0_ - 0x24)) = fVar4;
    }
    else {
      dVar7 = CONCAT44D((*(float *)(fr0_ - 0x1c)),fVar4);
      (*(float *)(fr0_ - 0x24)) = in_fr1;
    }
    if (cVar10 == '\0') {
      dVar7 = CONCAT44D(F32HI(dVar7) + fVar4,SUB84(dVar7,0));
    }
    else {
      dVar7 = dVar7 + CONCAT44D(fVar4,in_fr1);
    }
    if (cVar11 == '\0') {
      dVar2 = CONCAT44D(0x40000000,in_fr1);
    }
    else {
      dVar2 = 5.377642816887133e-19;
    }
    if (cVar10 == '\0') {
      dVar7 = CONCAT44D(F32HI(dVar7) / F32HI(dVar2)
                               ,SUB84(dVar7,0));
    }
    else {
      dVar7 = dVar7 / dVar2;
    }
    if (cVar11 == '\0') {
      dVar2 = CONCAT44D(0x3c23d70a,(float)(ar5 + -0x32));
    }
    else {
      dVar2 = 2.9939311649880902e-78;
    }
    if (cVar10 == '\0') {
      fVar3 = F32LO(dVar2) * F32HI(dVar2);
    }
    else {
      fVar3 = SUB84(dVar2 * dVar2,0);
    }
    if (cVar11 == '\0') {
      dVar2 = CONCAT44D((*(float *)(fr0_ - 0x28)),fVar3);
    }
    else {
      dVar2 = CONCAT44D((*(float *)(fr0_ - 0x24)),(*(float *)(fr0_ - 0x28)));
    }
    if (cVar10 == '\0') {
      fVar3 = F32LO(dVar2) * F32HI(dVar2);
    }
    else {
      fVar3 = SUB84(dVar2 * dVar2,0);
    }
    (*(float *)(fr0_ - 0x1c)) = fVar3;
    (*(undefined4 *)(fr0_ - 0x18)) = in_PR;
    if (cVar11 != '\0') {
      (*(float *)(fr0_ - 0x1c)) = (float)in_xd0;
      (*(undefined4 *)(fr0_ - 0x18)) = (undefined4)((ulonglong)in_xd0 >> 0x20);
    }
    puVar1 = (undefined4 *)(unsigned)0x18;
    if (cVar11 == '\0') {
      dVar2 = CONCAT44D((*(float *)(fr0_ - 0x1c)),fVar3);
    }
    else {
      dVar2 = CONCAT44D((*(undefined4 *)(fr0_ - 0x18)),(*(float *)(fr0_ - 0x1c)));
    }
    if (cVar10 == '\0') {
      dVar7 = CONCAT44D(F32HI(dVar7) + F32HI(dVar2)
                               ,SUB84(dVar7,0));
    }
    else {
      dVar7 = dVar7 + dVar2;
    }
    fVar3 = F32HI(dVar7);
    if (cVar10 != '\0' || fVar3 <= SUB84(dVar7,0)) {
      if (cVar10 == '\0') {
        bVar9 = fVar3 < F32HI(dVar8);
      }
      else {
        bVar9 = dVar7 < dVar8;
      }
      if (bVar9) {
        puVar1 = ((undefined4 *)(unsigned)0x8c032cb0);
      }
    }
    else {
      puVar1 = ((undefined4 *)(unsigned)0x8c032cb0);
    }
  }
  return puVar1;
}

__asm__(".globl _FUN_8c032be0\n.set _FUN_8c032be0, _FUN_8c032be0_def\n");
