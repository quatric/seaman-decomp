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
undefined4 FUN_8c014be4_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c014be4";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 32; for (int i_ = 0; i_ < 32; i_++) z_[i_] = 0; }
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  float fVar4;
  double dVar5;
  undefined4 in_fr3 = 0;
  double dVar6;
  undefined4 in_fr5 = 0;
  undefined4 in_fr4 = 0;
  undefined4 in_fr7 = 0;
  undefined4 in_fr6 = 0;
  undefined4 in_fr9 = 0;
  undefined4 in_fr8 = 0;
  char cVar7;
  char cVar8;
  
  cVar8 = '\0';
  cVar7 = '\0';
  iVar2 = ar4;
  uVar3 = ar5;
  iVar1 = (vsp = ((unsigned long)(fr0_ - 32)), rand(ar4,ar5,ar6,ar7));
  if (cVar8 == '\0') {
    dVar6 = CONCAT44D(in_fr5,in_fr3);
  }
  else {
    dVar6 = CONCAT44D(in_fr6,in_fr5);
  }
  if (cVar8 == '\0') {
    dVar5 = CONCAT44D(0x47000000,(float)iVar1);
  }
  else {
    dVar5 = -7.554616947321253e-251;
  }
  if (cVar7 == '\0') {
    fVar4 = F32LO(dVar5) / F32HI(dVar5);
    dVar6 = CONCAT44D(F32HI(dVar6) * fVar4,SUB84(dVar6,0));
  }
  else {
    fVar4 = SUB84(dVar5 / dVar5,0);
    dVar6 = dVar6 * (dVar5 / dVar5);
  }
  if (cVar8 == '\0') {
    dVar5 = CONCAT44D(in_fr4,fVar4);
  }
  else {
    dVar5 = CONCAT44D(in_fr5,in_fr4);
  }
  if (cVar7 == '\0') {
    dVar6 = CONCAT44D(F32HI(dVar6) + F32HI(dVar5),
                             SUB84(dVar6,0));
  }
  else {
    dVar6 = dVar6 + dVar5;
  }
  if (cVar8 == '\0') {
    *(int *)(unsigned)(ar4 + 4) = (int)(D2U(dVar6) >> 0x20);
  }
  else {
    *(double *)(unsigned)(ar4 + 4) = dVar6;
  }
  iVar1 = (vsp = ((unsigned long)(fr0_ - 32)), rand(iVar2,uVar3,ar6,ar7));
  if (cVar8 == '\0') {
    dVar6 = CONCAT44D(in_fr7,SUB84(dVar6,0));
  }
  else {
    dVar6 = CONCAT44D(in_fr8,in_fr7);
  }
  if (cVar8 == '\0') {
    dVar5 = CONCAT44D(0x47000000,(float)iVar1);
  }
  else {
    dVar5 = -7.554616947321253e-251;
  }
  if (cVar7 == '\0') {
    fVar4 = F32LO(dVar5) / F32HI(dVar5);
    dVar6 = CONCAT44D(F32HI(dVar6) * fVar4,SUB84(dVar6,0));
  }
  else {
    fVar4 = SUB84(dVar5 / dVar5,0);
    dVar6 = dVar6 * (dVar5 / dVar5);
  }
  if (cVar8 == '\0') {
    dVar5 = CONCAT44D(in_fr6,fVar4);
  }
  else {
    dVar5 = CONCAT44D(in_fr7,in_fr6);
  }
  if (cVar7 == '\0') {
    dVar6 = CONCAT44D(F32HI(dVar6) + F32HI(dVar5),
                             SUB84(dVar6,0));
  }
  else {
    dVar6 = dVar6 + dVar5;
  }
  if (cVar8 == '\0') {
    *(int *)(unsigned)(ar4 + 8) = (int)(D2U(dVar6) >> 0x20);
  }
  else {
    *(double *)(unsigned)(ar4 + 8) = dVar6;
  }
  iVar2 = (vsp = ((unsigned long)(fr0_ - 32)), rand(iVar2,uVar3,ar6,ar7));
  if (cVar8 == '\0') {
    dVar6 = CONCAT44D(in_fr9,SUB84(dVar6,0));
  }
  else {
    dVar6 = CONCAT44D((*(undefined4 *)(fr0_ - 0x20)),in_fr9);
  }
  if (cVar8 == '\0') {
    dVar5 = CONCAT44D(0x47000000,(float)iVar2);
  }
  else {
    dVar5 = -7.554616947321253e-251;
  }
  if (cVar7 == '\0') {
    fVar4 = F32LO(dVar5) / F32HI(dVar5);
    dVar6 = CONCAT44D(F32HI(dVar6) * fVar4,SUB84(dVar6,0));
  }
  else {
    fVar4 = SUB84(dVar5 / dVar5,0);
    dVar6 = dVar6 * (dVar5 / dVar5);
  }
  if (cVar8 == '\0') {
    dVar5 = CONCAT44D(in_fr8,fVar4);
  }
  else {
    dVar5 = CONCAT44D(in_fr9,in_fr8);
  }
  if (cVar7 == '\0') {
    dVar6 = CONCAT44D(F32HI(dVar6) + F32HI(dVar5),
                             SUB84(dVar6,0));
  }
  else {
    dVar6 = dVar6 + dVar5;
  }
  if (cVar8 == '\0') {
    *(int *)(unsigned)(ar4 + 0xc) = (int)(D2U(dVar6) >> 0x20);
  }
  else {
    *(double *)(unsigned)(ar4 + 0xc) = dVar6;
  }
  *(undefined4 *)(unsigned)(ar4 + 0x40) = ar5;
  for (iVar2 = 1; iVar2 < 5; iVar2 = iVar2 + 1) {
    iVar1 = iVar2 * 0xc + ar4;
    uVar3 = *(undefined4 *)(unsigned)(ar4 + 8);
    *(undefined4 *)(unsigned)(iVar1 + 4) = *(undefined4 *)(unsigned)(ar4 + 4);
    *(undefined4 *)(unsigned)(iVar1 + 8) = uVar3;
    *(undefined4 *)(unsigned)(iVar1 + 0xc) = *(undefined4 *)(unsigned)(ar4 + 0xc);
  }
  uVar3 = (vsp = ((unsigned long)(fr0_ - 32)), FUN_8c014ef8(ar4,ar5,ar6,ar7));
  return uVar3;
}

__asm__(".globl _FUN_8c014be4\n.set _FUN_8c014be4, _FUN_8c014be4_def\n");
