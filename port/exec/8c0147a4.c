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
undefined4
Class_129808_m0_0147a4_def
          (int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "Class_129808_m0_0147a4";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;
  undefined4 s0 = *(undefined4 *)(vsp + 0);
  undefined4 s4 = *(undefined4 *)(vsp + 4);

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 28; for (int i_ = 0; i_ < 28; i_++) z_[i_] = 0; }
  int iVar1;
  int iVar2;
  float fVar3;
  double dVar4;
  undefined4 in_fr3 = 0;
  double dVar5;
  undefined4 in_fr5 = 0;
  undefined4 in_fr4 = 0;
  undefined4 in_fr7 = 0;
  undefined4 in_fr6 = 0;
  undefined4 in_fr9 = 0;
  undefined4 in_fr8 = 0;
  undefined4 in_fr11 = 0;
  undefined4 in_fr10 = 0;
  undefined8 in_xd0 = 0;
  char cVar6;
  char cVar7;
  
  cVar7 = '\0';
  cVar6 = '\0';
  iVar2 = ar4;
  iVar1 = (vsp = ((unsigned long)(fr0_ - 28)), rand(ar4,ar5,ar6,ar7));
  if (cVar7 == '\0') {
    dVar5 = CONCAT44D(in_fr5,in_fr3);
  }
  else {
    dVar5 = CONCAT44D(in_fr6,in_fr5);
  }
  if (cVar7 == '\0') {
    dVar4 = CONCAT44D(0x47000000,(float)iVar1);
  }
  else {
    dVar4 = 1.6066918754608114e+73;
  }
  if (cVar6 == '\0') {
    fVar3 = F32LO(dVar4) / F32HI(dVar4);
    dVar5 = CONCAT44D(F32HI(dVar5) * fVar3,SUB84(dVar5,0));
  }
  else {
    fVar3 = SUB84(dVar4 / dVar4,0);
    dVar5 = dVar5 * (dVar4 / dVar4);
  }
  if (cVar7 == '\0') {
    dVar4 = CONCAT44D(in_fr4,fVar3);
  }
  else {
    dVar4 = CONCAT44D(in_fr5,in_fr4);
  }
  if (cVar6 == '\0') {
    dVar5 = CONCAT44D(F32HI(dVar5) + F32HI(dVar4),
                             SUB84(dVar5,0));
  }
  else {
    dVar5 = dVar5 + dVar4;
  }
  if (cVar7 == '\0') {
    *(int *)(unsigned)(ar4 + 4) = (int)(D2U(dVar5) >> 0x20);
  }
  else {
    *(double *)(unsigned)(ar4 + 4) = dVar5;
  }
  iVar1 = (vsp = ((unsigned long)(fr0_ - 28)), rand(iVar2,ar5,ar6,ar7));
  if (cVar7 == '\0') {
    dVar5 = CONCAT44D(in_fr7,SUB84(dVar5,0));
  }
  else {
    dVar5 = CONCAT44D(in_fr8,in_fr7);
  }
  if (cVar7 == '\0') {
    dVar4 = CONCAT44D(0x47000000,(float)iVar1);
  }
  else {
    dVar4 = 1.6066918754608114e+73;
  }
  if (cVar6 == '\0') {
    fVar3 = F32LO(dVar4) / F32HI(dVar4);
    dVar5 = CONCAT44D(F32HI(dVar5) * fVar3,SUB84(dVar5,0));
  }
  else {
    fVar3 = SUB84(dVar4 / dVar4,0);
    dVar5 = dVar5 * (dVar4 / dVar4);
  }
  if (cVar7 == '\0') {
    dVar4 = CONCAT44D(in_fr6,fVar3);
  }
  else {
    dVar4 = CONCAT44D(in_fr7,in_fr6);
  }
  if (cVar6 == '\0') {
    dVar5 = CONCAT44D(F32HI(dVar5) + F32HI(dVar4),
                             SUB84(dVar5,0));
  }
  else {
    dVar5 = dVar5 + dVar4;
  }
  if (cVar7 == '\0') {
    *(int *)(unsigned)(ar4 + 8) = (int)(D2U(dVar5) >> 0x20);
  }
  else {
    *(double *)(unsigned)(ar4 + 8) = dVar5;
  }
  iVar1 = (vsp = ((unsigned long)(fr0_ - 28)), rand(iVar2,ar5,ar6,ar7));
  if (cVar7 == '\0') {
    dVar5 = CONCAT44D(in_fr9,SUB84(dVar5,0));
  }
  else {
    dVar5 = CONCAT44D(in_fr10,in_fr9);
  }
  if (cVar7 == '\0') {
    dVar4 = CONCAT44D(0x47000000,(float)iVar1);
  }
  else {
    dVar4 = 1.6066918754608114e+73;
  }
  if (cVar6 == '\0') {
    fVar3 = F32LO(dVar4) / F32HI(dVar4);
    dVar5 = CONCAT44D(F32HI(dVar5) * fVar3,SUB84(dVar5,0));
  }
  else {
    fVar3 = SUB84(dVar4 / dVar4,0);
    dVar5 = dVar5 * (dVar4 / dVar4);
  }
  if (cVar7 == '\0') {
    dVar4 = CONCAT44D(in_fr8,fVar3);
  }
  else {
    dVar4 = CONCAT44D(in_fr9,in_fr8);
  }
  if (cVar6 == '\0') {
    dVar5 = CONCAT44D(F32HI(dVar5) + F32HI(dVar4),
                             SUB84(dVar5,0));
  }
  else {
    dVar5 = dVar5 + dVar4;
  }
  if (cVar7 == '\0') {
    *(int *)(unsigned)(ar4 + 0xc) = (int)(D2U(dVar5) >> 0x20);
  }
  else {
    *(double *)(unsigned)(ar4 + 0xc) = dVar5;
  }
  iVar2 = (vsp = ((unsigned long)(fr0_ - 28)), rand(iVar2,ar5,ar6,ar7));
  if (cVar7 == '\0') {
    dVar5 = CONCAT44D(in_fr11,SUB84(dVar5,0));
  }
  else {
    dVar5 = CONCAT44D((*(undefined4 *)(fr0_ - 0x1c)),in_fr11);
  }
  if (cVar7 == '\0') {
    dVar4 = CONCAT44D(0x47000000,(float)iVar2);
  }
  else {
    dVar4 = 1.6066918754608114e+73;
  }
  if (cVar6 == '\0') {
    fVar3 = F32LO(dVar4) / F32HI(dVar4);
    dVar5 = CONCAT44D(F32HI(dVar5) * fVar3,SUB84(dVar5,0));
  }
  else {
    fVar3 = SUB84(dVar4 / dVar4,0);
    dVar5 = dVar5 * (dVar4 / dVar4);
  }
  if (cVar7 == '\0') {
    dVar4 = CONCAT44D(in_fr10,fVar3);
  }
  else {
    dVar4 = CONCAT44D(in_fr11,in_fr10);
  }
  if (cVar6 == '\0') {
    dVar5 = CONCAT44D(F32HI(dVar5) + F32HI(dVar4),
                             SUB84(dVar5,0));
  }
  else {
    dVar5 = dVar5 + dVar4;
  }
  if (cVar7 == '\0') {
    *(int *)(unsigned)(ar4 + 0x24) = (int)(D2U(dVar5) >> 0x20);
    dVar5 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 0x24),*(undefined4 *)(unsigned)(ar4 + 0x18));
  }
  else {
    *(double *)(unsigned)(ar4 + 0x24) = dVar5;
    in_xd0 = *(undefined8 *)(unsigned)(ar4 + 0x18);
    dVar5 = *(double *)(unsigned)(ar4 + 0x24);
  }
  if (cVar6 == '\0') {
    fVar3 = F32LO(dVar5) * F32HI(dVar5);
  }
  else {
    fVar3 = SUB84(dVar5 * dVar5,0);
  }
  if (cVar7 == '\0') {
    *(float *)(unsigned)(ar4 + 0x18) = fVar3;
  }
  else {
    *(undefined8 *)(unsigned)(ar4 + 0x18) = in_xd0;
  }
  if (cVar7 == '\0') {
    *(undefined4 *)(unsigned)(ar4 + 0x14) = s0;
  }
  else {
    *(undefined8 *)(unsigned)(ar4 + 0x14) = CONCAT44(s4,s0);
  }
  return 0x3c;
}

__asm__(".globl _Class_129808_m0_0147a4\n.set _Class_129808_m0_0147a4, _Class_129808_m0_0147a4_def\n");
