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
undefined4 Class_12a0c4_m2_0677dc_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "Class_12a0c4_m2_0677dc";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  float fVar1;
  double dVar2;
  undefined8 in_xd0 = 0;
  char cVar3;
  char cVar4;
  
  cVar4 = '\0';
  cVar3 = '\0';
  if (*(int *)(unsigned)(ar4 + 0x220) == 0) {
    (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0679cc(ar4,ar5,ar7,ar7));
    if (cVar4 == '\0') {
      dVar2 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 0x244),(undefined4)(*(undefined1 *)(unsigned)0x8c136f3c));
    }
    else {
      in_xd0 = CONCAT44((*(uint*)((uchar*)((undefined1 *)(unsigned)0x8c136f3c)+4)),(undefined4)(*(undefined1 *)(unsigned)0x8c136f3c));
      dVar2 = *(double *)(unsigned)(ar4 + 0x244);
    }
    if (cVar3 == '\0') {
      fVar1 = F32LO(dVar2) * F32HI(dVar2);
    }
    else {
      fVar1 = SUB84(dVar2 * dVar2,0);
    }
    if (cVar4 == '\0') {
      *(float *)(unsigned)(ar4 + 0x254) = fVar1;
      dVar2 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 0x244),(*(uint*)((uchar*)((undefined1 *)(unsigned)0x8c136f3c)+4)));
    }
    else {
      *(undefined8 *)(unsigned)(ar4 + 0x254) = in_xd0;
      in_xd0 = CONCAT44((*(undefined4 *)(unsigned)(unsigned)0x8c136f44),(*(uint*)((uchar*)((undefined1 *)(unsigned)0x8c136f3c)+4)));
      dVar2 = *(double *)(unsigned)(ar4 + 0x244);
    }
    if (cVar3 == '\0') {
      fVar1 = F32LO(dVar2) * F32HI(dVar2);
    }
    else {
      fVar1 = SUB84(dVar2 * dVar2,0);
    }
    if (cVar4 == '\0') {
      *(float *)(unsigned)(ar4 + 600) = fVar1;
      dVar2 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 0x244),(*(undefined4 *)(unsigned)(unsigned)0x8c136f44));
    }
    else {
      *(undefined8 *)(unsigned)(ar4 + 600) = in_xd0;
      in_xd0 = CONCAT44((*(undefined4 *)(unsigned)(unsigned)0x8c136f48),(*(undefined4 *)(unsigned)(unsigned)0x8c136f44));
      dVar2 = *(double *)(unsigned)(ar4 + 0x244);
    }
    if (cVar3 == '\0') {
      fVar1 = F32LO(dVar2) * F32HI(dVar2);
    }
    else {
      fVar1 = SUB84(dVar2 * dVar2,0);
    }
    if (cVar4 == '\0') {
      *(float *)(unsigned)(ar4 + 0x25c) = fVar1;
      dVar2 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 0x244),(*(undefined4 *)(unsigned)(unsigned)0x8c136f48));
    }
    else {
      *(undefined8 *)(unsigned)(ar4 + 0x25c) = in_xd0;
      in_xd0 = CONCAT44((*(undefined4 *)(unsigned)(unsigned)0x8c136f4c),(*(undefined4 *)(unsigned)(unsigned)0x8c136f48));
      dVar2 = *(double *)(unsigned)(ar4 + 0x244);
    }
    if (cVar3 == '\0') {
      fVar1 = F32LO(dVar2) * F32HI(dVar2);
    }
    else {
      fVar1 = SUB84(dVar2 * dVar2,0);
    }
    if (cVar4 == '\0') {
      *(float *)(unsigned)(ar4 + 0x260) = fVar1;
    }
    else {
      *(undefined8 *)(unsigned)(ar4 + 0x260) = in_xd0;
    }
  }
  else if (*(int *)(unsigned)(ar4 + 0x220) == 1) {
    if (*(int *)(unsigned)(ar4 + 0x210) < 4) {
      (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c068e64(ar4,ar5,ar7,ar7));
    }
    else {
      (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c068a4c(ar4,ar5,ar7,ar7));
    }
    if (cVar4 == '\0') {
      dVar2 = CONCAT44D(0xc3160000,*(undefined4 *)(unsigned)(ar4 + 0x244));
    }
    else {
      in_xd0 = *(undefined8 *)(unsigned)(ar4 + 0x244);
      dVar2 = 1.4411529281182106e+17;
    }
    if (cVar3 == '\0') {
      fVar1 = F32LO(dVar2) * F32HI(dVar2);
    }
    else {
      fVar1 = SUB84(dVar2 * dVar2,0);
    }
    if (cVar4 == '\0') {
      dVar2 = CONCAT44D(0x43800000,fVar1);
    }
    else {
      dVar2 = -633318839156736.0;
    }
    if (cVar3 == '\0') {
      fVar1 = F32LO(dVar2) / F32HI(dVar2);
    }
    else {
      fVar1 = SUB84(dVar2 / dVar2,0);
    }
    if (cVar4 == '\0') {
      *(float *)(unsigned)(ar4 + 600) = fVar1;
      dVar2 = CONCAT44D(0xc3020000,*(undefined4 *)(unsigned)(ar4 + 0x244));
    }
    else {
      *(undefined8 *)(unsigned)(ar4 + 600) = in_xd0;
      in_xd0 = *(undefined8 *)(unsigned)(ar4 + 0x244);
      dVar2 = -52776583693312.0;
    }
    if (cVar3 == '\0') {
      fVar1 = F32LO(dVar2) * F32HI(dVar2);
    }
    else {
      fVar1 = SUB84(dVar2 * dVar2,0);
    }
    if (cVar4 == '\0') {
      dVar2 = CONCAT44D(0x43800000,fVar1);
    }
    else {
      dVar2 = -633318839156736.0;
    }
    if (cVar3 == '\0') {
      fVar1 = F32LO(dVar2) / F32HI(dVar2);
    }
    else {
      fVar1 = SUB84(dVar2 / dVar2,0);
    }
    if (cVar4 == '\0') {
      *(float *)(unsigned)(ar4 + 0x25c) = fVar1;
      dVar2 = CONCAT44D(0xc2c80000,*(undefined4 *)(unsigned)(ar4 + 0x244));
    }
    else {
      *(undefined8 *)(unsigned)(ar4 + 0x25c) = in_xd0;
      in_xd0 = *(undefined8 *)(unsigned)(ar4 + 0x244);
      dVar2 = -4.193431188391697e-250;
    }
    if (cVar3 == '\0') {
      fVar1 = F32LO(dVar2) * F32HI(dVar2);
    }
    else {
      fVar1 = SUB84(dVar2 * dVar2,0);
    }
    if (cVar4 == '\0') {
      dVar2 = CONCAT44D(0x43800000,fVar1);
    }
    else {
      dVar2 = -633318839156736.0;
    }
    if (cVar3 == '\0') {
      fVar1 = F32LO(dVar2) / F32HI(dVar2);
    }
    else {
      fVar1 = SUB84(dVar2 / dVar2,0);
    }
    if (cVar4 == '\0') {
      *(float *)(unsigned)(ar4 + 0x260) = fVar1;
    }
    else {
      *(undefined8 *)(unsigned)(ar4 + 0x260) = in_xd0;
    }
  }
  (*(undefined4 *)(unsigned)(unsigned)0x8c2804e0) = 1;
  return 1;
}

__asm__(".globl _Class_12a0c4_m2_0677dc\n.set _Class_12a0c4_m2_0677dc, _Class_12a0c4_m2_0677dc_def\n");
