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
undefined8 * FUN_8c0d21a0_def(int ar4,uint ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0d21a0";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 24; for (int i_ = 0; i_ < 24; i_++) z_[i_] = 0; }
  undefined8 *puVar1;
  double *pdVar2;
  float fVar3;
  double dVar4;
  float fVar5;
  undefined8 in_xd0 = 0;
  char cVar6;
  char cVar7;
  
  cVar7 = '\0';
  cVar6 = '\0';
  if ((ar5 & 1) == 0) {
    *(short *)(unsigned)(ar4 + 0x24) = *(short *)(unsigned)(ar4 + 0x24) + 1;
  }
  if (*(short *)(unsigned)(ar4 + 0x24) == 0x14) {
    (vsp = ((unsigned long)(fr0_ - 24)), FUN_8c0d20bc(ar4,ar5,ar6,ar7));
  }
  if (((*(int *)(unsigned)(ar4 + 0x3c) == 3) ||
      (puVar1 = ((undefined8 *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x3c)), puVar1 == (undefined8 *)(unsigned)0x4)) &&
     (puVar1 = (undefined8 *)(unsigned)0x8, 7 < *(short *)(unsigned)(ar4 + 0x24))) {
    if (cVar7 == '\0') {
      dVar4 = CONCAT44D(0x3c03126f,*(undefined4 *)(unsigned)(ar4 + 0x20));
    }
    else {
      in_xd0 = *(undefined8 *)(unsigned)(ar4 + 0x20);
      dVar4 = 5.238690687974987e-11;
    }
    if (cVar6 == '\0') {
      fVar3 = F32LO(dVar4) + F32HI(dVar4);
    }
    else {
      fVar3 = SUB84(dVar4 + dVar4,0);
    }
    pdVar2 = (double *)(unsigned)(ar4 + 0x20);
    if (cVar7 == '\0') {
      *(float *)(unsigned)(ar4 + 0x20) = fVar3;
      pdVar2 = (double *)(unsigned)(ar4 + 0x1c);
    }
    else {
      *(undefined8 *)(unsigned)(ar4 + 0x20) = in_xd0;
      in_xd0 = *(undefined8 *)(unsigned)(ar4 + 0x1c);
    }
    dVar4 = *pdVar2;
    if (cVar6 == '\0') {
      fVar3 = F32LO(dVar4) - F32HI(dVar4);
    }
    else {
      fVar3 = SUB84(dVar4 - dVar4,0);
    }
    (*(undefined8 *)(fr0_ - 0x18)) = in_xd0;
    if (cVar7 == '\0') {
      (*(undefined8 *)(fr0_ - 0x18)) = CONCAT44(ar4,fVar3);
    }
    if (cVar7 == '\0') {
      *(float *)(unsigned)((*(uint*)((uchar*)&(*(undefined8 *)(fr0_ - 0x18))+4)) + 0x1c) = (float)(*(undefined8 *)(fr0_ - 0x18));
      fVar5 = 0.1;
      fVar3 = (float)(*(undefined8 *)(fr0_ - 0x18));
    }
    else {
      *(undefined8 *)(unsigned)((*(uint*)((uchar*)&(*(undefined8 *)(fr0_ - 0x18))+4)) + 0x1c) = (*(undefined8 *)(fr0_ - 0x18));
      fVar3 = 0.1;
      fVar5 = 3.8960407e-10;
      in_xd0 = (*(undefined8 *)(fr0_ - 0x18));
    }
    if (cVar6 == '\0' && fVar3 < fVar5) {
      if (cVar7 == '\0') {
        *(undefined4 *)(unsigned)(ar4 + 0x1c) = 0x3dcccccd;
      }
      else {
        *(undefined8 *)(unsigned)(ar4 + 0x1c) = 0x2fd62fe63dcccccd;
      }
    }
    puVar1 = (undefined8 *)(unsigned)(ar4 + 0x14);
    if (cVar7 == '\0') {
      dVar4 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 0x1c),*(undefined4 *)(unsigned)puVar1);
    }
    else {
      in_xd0 = *puVar1;
      dVar4 = *(double *)(unsigned)(ar4 + 0x1c);
    }
    if (cVar6 == '\0') {
      fVar3 = F32LO(dVar4) * F32HI(dVar4);
    }
    else {
      fVar3 = SUB84(dVar4 * dVar4,0);
    }
    if (cVar7 == '\0') {
      *(float *)(unsigned)(ar4 + 0x14) = fVar3;
    }
    else {
      *(undefined8 *)(unsigned)(ar4 + 0x14) = in_xd0;
    }
  }
  return puVar1;
}

__asm__(".globl _FUN_8c0d21a0\n.set _FUN_8c0d21a0, _FUN_8c0d21a0_def\n");
