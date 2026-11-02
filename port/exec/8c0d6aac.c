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
undefined4 FUN_8c0d6aac_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0d6aac";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 in_fr1 = 0;
  double dVar1;
  double dVar2;
  double dVar3;
  undefined8 in_dr4 = 0;
  float in_fr6 = 0;
  float in_fr15 = 0;
  undefined4 in_fr14 = 0;
  double in_xd14 = 0;
  bool bVar4;
  char cVar5;
  char cVar6;
  
  cVar6 = '\0';
  cVar5 = '\0';
  *(int *)(unsigned)(ar4 + 0x30) = (int)((ulonglong)in_dr4 >> 0x20);
  *(int *)(unsigned)(ar4 + 0x34) = (int)in_dr4;
  *(float *)(unsigned)(ar4 + 0x38) = in_fr6;
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(ar4 + 0xa8) + 0xc))))((int *)(unsigned)(ar4 + 0xa8),ar5,ar6,ar7));
  if (cVar6 == '\0') {
    dVar1 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 0x30),in_fr1);
    in_fr15 = in_fr6;
  }
  else {
    in_xd14 = CONCAT44D(in_fr6,in_fr1);
    dVar1 = *(double *)(unsigned)(ar4 + 0x30);
  }
  if (cVar5 == '\0') {
    bVar4 = in_fr15 < F32HI(dVar1);
  }
  else {
    bVar4 = CONCAT44D(in_fr14,in_fr15) < dVar1;
  }
  if (bVar4) {
    if (cVar6 == '\0') {
      *(float *)(unsigned)(ar4 + 0x30) = in_fr15;
    }
    else {
      *(double *)(unsigned)(ar4 + 0x30) = in_xd14;
    }
  }
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(ar4 + 200) + 0xc))))((int *)(unsigned)(ar4 + 200),ar5,ar6,ar7));
  if (cVar6 == '\0') {
    dVar2 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 0x30),SUB84(dVar1,0));
    in_fr15 = F32HI(dVar1);
    dVar1 = in_xd14;
  }
  else {
    dVar2 = *(double *)(unsigned)(ar4 + 0x30);
  }
  if (cVar5 == '\0') {
    bVar4 = F32HI(dVar2) < in_fr15;
  }
  else {
    bVar4 = dVar2 < CONCAT44D(in_fr14,in_fr15);
  }
  if (bVar4) {
    if (cVar6 == '\0') {
      *(float *)(unsigned)(ar4 + 0x30) = in_fr15;
    }
    else {
      *(double *)(unsigned)(ar4 + 0x30) = dVar1;
    }
  }
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(ar4 + 0x68) + 0xc))))((int *)(unsigned)(ar4 + 0x68),ar5,ar6,ar7));
  if (cVar6 == '\0') {
    dVar3 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 0x34),SUB84(dVar2,0));
    in_fr15 = F32HI(dVar2);
    dVar2 = dVar1;
  }
  else {
    dVar3 = *(double *)(unsigned)(ar4 + 0x34);
  }
  if (cVar5 == '\0') {
    bVar4 = in_fr15 < F32HI(dVar3);
  }
  else {
    bVar4 = CONCAT44D(in_fr14,in_fr15) < dVar3;
  }
  if (bVar4) {
    if (cVar6 == '\0') {
      *(float *)(unsigned)(ar4 + 0x34) = in_fr15;
    }
    else {
      *(double *)(unsigned)(ar4 + 0x34) = dVar2;
    }
  }
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(ar4 + 0x88) + 0xc))))((int *)(unsigned)(ar4 + 0x88),ar5,ar6,ar7));
  if (cVar6 == '\0') {
    dVar1 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 0x34),SUB84(dVar3,0));
    in_fr15 = F32HI(dVar3);
    dVar3 = dVar2;
  }
  else {
    dVar1 = *(double *)(unsigned)(ar4 + 0x34);
  }
  if (cVar5 == '\0') {
    bVar4 = F32HI(dVar1) < in_fr15;
  }
  else {
    bVar4 = dVar1 < CONCAT44D(in_fr14,in_fr15);
  }
  if (bVar4) {
    if (cVar6 == '\0') {
      *(float *)(unsigned)(ar4 + 0x34) = in_fr15;
    }
    else {
      *(double *)(unsigned)(ar4 + 0x34) = dVar3;
    }
  }
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(ar4 + 0xe8) + 8))))((int *)(unsigned)(ar4 + 0xe8),ar5,ar6,ar7));
  if (cVar6 == '\0') {
    dVar2 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 0x34),SUB84(dVar1,0));
    in_fr15 = F32HI(dVar1);
    dVar1 = dVar3;
  }
  else {
    dVar2 = *(double *)(unsigned)(ar4 + 0x34);
  }
  if (cVar5 == '\0') {
    bVar4 = F32HI(dVar2) < in_fr15;
  }
  else {
    bVar4 = dVar2 < CONCAT44D(in_fr14,in_fr15);
  }
  if (bVar4) {
    if (cVar6 == '\0') {
      *(float *)(unsigned)(ar4 + 0x34) = in_fr15;
      *(float *)(unsigned)(ar4 + 0x24) = in_fr15;
    }
    else {
      *(double *)(unsigned)(ar4 + 0x34) = dVar1;
      *(double *)(unsigned)(ar4 + 0x24) = dVar1;
    }
  }
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0d66d8(ar4,ar5,ar6,ar7));
  if (cVar6 == '\0') {
    *(undefined4 *)(unsigned)(ar4 + 0x24) = *(undefined4 *)(unsigned)(ar4 + 0x34);
  }
  else {
    *(undefined8 *)(unsigned)(ar4 + 0x24) = *(undefined8 *)(unsigned)(ar4 + 0x34);
  }
  *(undefined4 *)(unsigned)(ar4 + 0x60) = 0;
  *(undefined4 *)(unsigned)(ar4 + 100) = 5;
  return 100;
}

__asm__(".globl _FUN_8c0d6aac\n.set _FUN_8c0d6aac, _FUN_8c0d6aac_def\n");
