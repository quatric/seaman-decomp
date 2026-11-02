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
undefined4 FUN_8c0240bc_def(double *ar4,double *ar5,float *ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0240bc";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 52; for (int i_ = 0; i_ < 52; i_++) z_[i_] = 0; }
  float fVar1;
  float fVar2;
  double dVar3;
  undefined4 in_fr3 = 0;
  double dVar4;
  undefined4 in_fr15 = 0;
  double dVar5;
  undefined4 uVar6;
  double in_xd0 = 0;
  char cVar7;
  char cVar8;
  
  cVar8 = '\0';
  cVar7 = '\0';
  fVar1 = *(float *)(unsigned)(ar5 + 1) * ar6[2];
  dVar5 = CONCAT44D(*(float *)(unsigned)ar5 * *ar6 + *(float *)(unsigned)((int)ar5 + 4) * ar6[1] + fVar1,in_fr15)
  ;
  (vsp = ((unsigned long)(fr0_ - 52)), Vec3_ctor_zero(&(*(undefined4 *)(fr0_ - 0x30)),ar5,ar6,ar7));
  if (cVar8 == '\0') {
    dVar4 = CONCAT44D(*(undefined4 *)(unsigned)ar5,in_fr3);
    dVar3 = CONCAT44D(*(undefined4 *)(unsigned)ar4,fVar1);
  }
  else {
    dVar4 = *ar5;
    dVar3 = *ar4;
  }
  if (cVar7 == '\0') {
    dVar4 = CONCAT44D(F32HI(dVar4) * F32HI(dVar3),
                             SUB84(dVar4,0));
  }
  else {
    dVar4 = dVar4 * dVar3;
  }
  if (cVar8 == '\0') {
    dVar3 = CONCAT44D(*(undefined4 *)(unsigned)((int)ar4 + 4),*(undefined4 *)(unsigned)((int)ar5 + 4));
  }
  else {
    in_xd0 = *(double *)(unsigned)((int)ar5 + 4);
    dVar3 = *(double *)(unsigned)((int)ar4 + 4);
  }
  if (cVar7 == '\0') {
    dVar4 = CONCAT44D(F32HI(dVar4) +
                             F32LO(dVar3) * F32HI(dVar3),SUB84(dVar4,0));
  }
  else {
    dVar4 = dVar4 + dVar3 * dVar3;
  }
  if (cVar8 == '\0') {
    dVar3 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 1),*(undefined4 *)(unsigned)(ar5 + 1));
  }
  else {
    in_xd0 = ar5[1];
    dVar3 = ar4[1];
  }
  if (cVar7 == '\0') {
    fVar1 = F32LO(dVar3) * F32HI(dVar3);
    dVar5 = CONCAT44D(F32HI(dVar5) -
                             (F32HI(dVar4) + fVar1),SUB84(dVar5,0));
  }
  else {
    fVar1 = SUB84(dVar3 * dVar3,0);
    dVar5 = dVar5 - (dVar4 + dVar3 * dVar3);
  }
  uVar6 = (undefined4)(D2U(dVar5) >> 0x20);
  if (cVar8 == '\0') {
    dVar4 = CONCAT44D(*(undefined4 *)(unsigned)ar5,uVar6);
    dVar3 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 2),fVar1);
  }
  else {
    dVar4 = *ar5;
    dVar3 = ar4[2];
  }
  if (cVar7 == '\0') {
    dVar4 = CONCAT44D(F32HI(dVar4) * F32HI(dVar3),
                             SUB84(dVar4,0));
  }
  else {
    dVar4 = dVar4 * dVar3;
  }
  if (cVar8 == '\0') {
    dVar3 = CONCAT44D(*(undefined4 *)(unsigned)((int)ar4 + 0x14),*(undefined4 *)(unsigned)((int)ar5 + 4));
  }
  else {
    in_xd0 = *(double *)(unsigned)((int)ar5 + 4);
    dVar3 = *(double *)(unsigned)((int)ar4 + 0x14);
  }
  if (cVar7 == '\0') {
    dVar4 = CONCAT44D(F32HI(dVar4) +
                             F32LO(dVar3) * F32HI(dVar3),SUB84(dVar4,0));
  }
  else {
    dVar4 = dVar4 + dVar3 * dVar3;
  }
  if (cVar8 == '\0') {
    dVar3 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 3),*(undefined4 *)(unsigned)(ar5 + 1));
  }
  else {
    in_xd0 = ar5[1];
    dVar3 = ar4[3];
  }
  if (cVar7 == '\0') {
    fVar2 = F32HI(dVar3);
    fVar1 = F32LO(dVar3) * fVar2;
    dVar3 = CONCAT44D(fVar2,fVar1);
    fVar1 = F32LO(dVar4) / (F32HI(dVar4) + fVar1);
  }
  else {
    dVar3 = dVar3 * dVar3;
    fVar1 = SUB84((dVar4 + dVar3) / (dVar4 + dVar3),0);
  }
  if (cVar8 == '\0') {
    dVar5 = CONCAT44D(uVar6,fVar1);
    dVar3 = CONCAT44D((int)(D2U(dVar3) >> 0x20),*(undefined4 *)(unsigned)(ar4 + 2));
  }
  else {
    in_xd0 = ar4[2];
  }
  fVar1 = F32LO(dVar5);
  if (cVar7 == '\0') {
    fVar2 = F32LO(dVar3) * fVar1;
  }
  else {
    fVar2 = SUB84(dVar3 * dVar5,0);
  }
  if (cVar8 == '\0') {
    dVar4 = CONCAT44D(*(undefined4 *)(unsigned)ar4,fVar2);
  }
  else {
    dVar4 = *ar4;
  }
  if (cVar7 == '\0') {
    fVar2 = F32HI(dVar4);
    dVar4 = CONCAT44D(fVar2,F32LO(dVar4) + fVar2);
  }
  else {
    dVar4 = dVar4 + dVar4;
  }
  if (cVar8 == '\0') {
    (*(undefined4 *)(fr0_ - 0x30)) = SUB84(dVar4,0);
    dVar4 = CONCAT44D((int)(D2U(dVar4) >> 0x20),*(undefined4 *)(unsigned)((int)ar4 + 0x14));
  }
  else {
    (*(undefined4 *)(fr0_ - 0x30)) = SUB84(in_xd0,0);
    in_xd0 = *(double *)(unsigned)((int)ar4 + 0x14);
  }
  if (cVar7 == '\0') {
    fVar2 = F32LO(dVar4) * fVar1;
  }
  else {
    fVar2 = SUB84(dVar4 * dVar5,0);
  }
  if (cVar8 == '\0') {
    dVar4 = CONCAT44D(*(undefined4 *)(unsigned)((int)ar4 + 4),fVar2);
  }
  else {
    dVar4 = *(double *)(unsigned)((int)ar4 + 4);
  }
  if (cVar7 == '\0') {
    fVar2 = F32HI(dVar4);
    dVar4 = CONCAT44D(fVar2,F32LO(dVar4) + fVar2);
  }
  else {
    dVar4 = dVar4 + dVar4;
  }
  if (cVar8 == '\0') {
    (*(undefined4 *)(fr0_ - 0x2c)) = SUB84(dVar4,0);
    dVar4 = CONCAT44D((int)(D2U(dVar4) >> 0x20),*(undefined4 *)(unsigned)(ar4 + 3));
  }
  else {
    (*(undefined4 *)(fr0_ - 0x2c)) = SUB84(in_xd0,0);
    in_xd0 = ar4[3];
  }
  if (cVar7 == '\0') {
    fVar1 = F32LO(dVar4) * fVar1;
  }
  else {
    fVar1 = SUB84(dVar4 * dVar5,0);
  }
  if (cVar8 == '\0') {
    dVar5 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 1),fVar1);
  }
  else {
    dVar5 = ar4[1];
  }
  if (cVar7 == '\0') {
    (*(float *)(fr0_ - 0x28)) = F32LO(dVar5) + F32HI(dVar5);
  }
  else {
    (*(float *)(fr0_ - 0x28)) = SUB84(dVar5 + dVar5,0);
  }
  if (cVar8 != '\0') {
    (*(float *)(fr0_ - 0x28)) = SUB84(in_xd0,0);
    (*(undefined4 *)(fr0_ - 0x24)) = (undefined4)((ulonglong)in_xd0 >> 0x20);
  }
  (vsp = ((unsigned long)(fr0_ - 52)), Vec3_ctor_copy((*(undefined4 *)(fr0_ + 0x00000000)),&(*(undefined4 *)(fr0_ - 0x30)),ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 52)), Vec3_dtor(&(*(undefined4 *)(fr0_ - 0x30)),0xffffffff,ar6,ar7));
  return 0;
}

__asm__(".globl _FUN_8c0240bc\n.set _FUN_8c0240bc, _FUN_8c0240bc_def\n");
