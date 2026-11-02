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
undefined * FUN_8c0d26f0_def(float *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0d26f0";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  float *ar4_00;
  float fVar2;
  double dVar3;
  undefined8 in_xd0 = 0;
  char cVar4;
  char cVar5;
  
  cVar5 = '\0';
  cVar4 = '\0';
  ar4_00 = ar4;
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), rand(ar4,ar5,ar6,ar7));
  if (cVar5 == '\0') {
    dVar3 = CONCAT44D(0x47000000,(float)iVar1);
  }
  else {
    dVar3 = 4294968432.0;
  }
  if (cVar4 == '\0') {
    fVar2 = F32LO(dVar3) / F32HI(dVar3);
  }
  else {
    fVar2 = SUB84(dVar3 / dVar3,0);
  }
  if (cVar5 == '\0') {
    dVar3 = CONCAT44D(0x41f00000,fVar2);
  }
  else {
    dVar3 = 1.1916598991585905e+22;
  }
  if (cVar4 == '\0') {
    fVar2 = F32LO(dVar3) * F32HI(dVar3);
  }
  else {
    fVar2 = SUB84(dVar3 * dVar3,0);
  }
  if (cVar5 == '\0') {
    dVar3 = CONCAT44D(0x44843000,fVar2);
  }
  else {
    dVar3 = 6473925613858816.0;
  }
  if (cVar4 == '\0') {
    fVar2 = F32LO(dVar3) + F32HI(dVar3);
  }
  else {
    fVar2 = SUB84(dVar3 + dVar3,0);
  }
  if (cVar5 == '\0') {
    *ar4 = fVar2;
    ar4[1] = 183.0;
  }
  else {
    *(undefined8 *)(unsigned)ar4 = in_xd0;
    ar4[1] = 183.0;
    ar4[2] = 711.0;
  }
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), rand(ar4_00,ar5,ar6,ar7));
  if (cVar5 == '\0') {
    dVar3 = CONCAT44D(0x47000000,(float)iVar1);
  }
  else {
    dVar3 = 4294968432.0;
  }
  if (cVar4 == '\0') {
    fVar2 = F32LO(dVar3) / F32HI(dVar3);
  }
  else {
    fVar2 = SUB84(dVar3 / dVar3,0);
  }
  if (cVar5 == '\0') {
    dVar3 = CONCAT44D(0x41f00000,fVar2);
  }
  else {
    dVar3 = 1.1916598991585905e+22;
  }
  if (cVar4 == '\0') {
    fVar2 = F32LO(dVar3) * F32HI(dVar3);
  }
  else {
    fVar2 = SUB84(dVar3 * dVar3,0);
  }
  if (cVar5 == '\0') {
    dVar3 = CONCAT44D(0x4431c000,fVar2);
  }
  else {
    dVar3 = -1.5729774353164037e+308;
  }
  if (cVar4 == '\0') {
    fVar2 = F32LO(dVar3) + F32HI(dVar3);
  }
  else {
    fVar2 = SUB84(dVar3 + dVar3,0);
  }
  if (cVar5 == '\0') {
    ar4[2] = fVar2;
  }
  else {
    *(undefined8 *)(unsigned)(ar4 + 2) = in_xd0;
  }
  return ((undefined1 *)(unsigned)0x8c0d2768);
}

__asm__(".globl _FUN_8c0d26f0\n.set _FUN_8c0d26f0, _FUN_8c0d26f0_def\n");
