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
undefined4 FUN_8c02ae38_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c02ae38";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 24; for (int i_ = 0; i_ < 24; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  int iVar2;
  float fVar3;
  undefined8 uVar4;
  double dVar5;
  undefined8 in_xd0 = 0;
  char cVar6;
  char cVar7;
  
  cVar7 = '\0';
  cVar6 = '\0';
  uVar1 = (vsp = ((unsigned long)(fr0_ - 24)), FUN_8c02bef8(ar4 + 0x174,ar5,ar6,ar7));
  iVar2 = *(int *)(unsigned)(ar4 + 0x328) + (short)uVar1 * 0x124;
  if (cVar7 == '\0') {
    uVar4 = CONCAT44(*(undefined4 *)(unsigned)(ar4 + 0x5c),*(undefined4 *)(unsigned)(ar4 + 0x170));
  }
  else {
    in_xd0 = *(undefined8 *)(unsigned)(ar4 + 0x170);
    uVar4 = *(undefined8 *)(unsigned)(ar4 + 0x5c);
  }
  if (cVar6 != '\0' || (float)uVar4 <= F32HI(uVar4)) {
    if (cVar7 == '\0') {
      uVar4 = CONCAT44(*(undefined4 *)(unsigned)(ar4 + 0x5c),*(undefined4 *)(unsigned)(ar4 + 0x170));
    }
    else {
      in_xd0 = *(undefined8 *)(unsigned)(ar4 + 0x170);
      uVar4 = *(undefined8 *)(unsigned)(ar4 + 0x5c);
    }
    if (cVar6 == '\0' && (float)uVar4 < F32HI(uVar4)) {
      if (cVar7 == '\0') {
        uVar1 = *(undefined4 *)(unsigned)(ar4 + 0x170);
        *(undefined4 *)(unsigned)(ar4 + 100) = uVar1;
        *(undefined4 *)(unsigned)(ar4 + 0x60) = uVar1;
        *(undefined4 *)(unsigned)(ar4 + 0x5c) = uVar1;
      }
      else {
        uVar4 = *(undefined8 *)(unsigned)(ar4 + 0x170);
        *(undefined8 *)(unsigned)(ar4 + 100) = uVar4;
        *(undefined8 *)(unsigned)(ar4 + 0x60) = uVar4;
        *(undefined8 *)(unsigned)(ar4 + 0x5c) = uVar4;
      }
    }
  }
  else {
    if (cVar7 == '\0') {
      dVar5 = CONCAT44D(*(undefined4 *)(unsigned)(iVar2 + 0xc0),*(undefined4 *)(unsigned)(ar4 + 100));
    }
    else {
      in_xd0 = *(undefined8 *)(unsigned)(ar4 + 100);
      dVar5 = *(double *)(unsigned)(iVar2 + 0xc0);
    }
    if (cVar6 == '\0') {
      (*(float *)(fr0_ - 0x18)) = F32LO(dVar5) + F32HI(dVar5);
    }
    else {
      (*(float *)(fr0_ - 0x18)) = SUB84(dVar5 + dVar5,0);
    }
    (*(int *)(fr0_ - 0x14)) = ar4;
    if (cVar7 != '\0') {
      (*(float *)(fr0_ - 0x18)) = (float)in_xd0;
      (*(int *)(fr0_ - 0x14)) = (int)((ulonglong)in_xd0 >> 0x20);
    }
    if (cVar7 == '\0') {
      *(float *)(unsigned)((*(int *)(fr0_ - 0x14)) + 100) = (*(float *)(fr0_ - 0x18));
      *(float *)(unsigned)(ar4 + 0x60) = (*(float *)(fr0_ - 0x18));
      *(float *)(unsigned)(ar4 + 0x5c) = (*(float *)(fr0_ - 0x18));
    }
    else {
      *(ulonglong *)(unsigned)((*(int *)(fr0_ - 0x14)) + 100) = CONCAT44((*(int *)(fr0_ - 0x14)),(*(float *)(fr0_ - 0x18)));
      *(ulonglong *)(unsigned)(ar4 + 0x60) = CONCAT44((*(int *)(fr0_ - 0x14)),(*(float *)(fr0_ - 0x18)));
      *(ulonglong *)(unsigned)(ar4 + 0x5c) = CONCAT44((*(int *)(fr0_ - 0x14)),(*(float *)(fr0_ - 0x18)));
    }
  }
  if (cVar7 == '\0') {
    dVar5 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 0x60),*(undefined4 *)(unsigned)(iVar2 + 0xe8));
  }
  else {
    in_xd0 = *(undefined8 *)(unsigned)(iVar2 + 0xe8);
    dVar5 = *(double *)(unsigned)(ar4 + 0x60);
  }
  if (cVar6 == '\0') {
    fVar3 = F32LO(dVar5) * F32HI(dVar5);
  }
  else {
    fVar3 = SUB84(dVar5 * dVar5,0);
  }
  if (cVar7 == '\0') {
    *(float *)(unsigned)(ar4 + 0x408) = fVar3;
  }
  else {
    *(undefined8 *)(unsigned)(ar4 + 0x408) = in_xd0;
  }
  if (cVar7 == '\0') {
    dVar5 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 0x5c),*(undefined4 *)(unsigned)(iVar2 + 0xec));
  }
  else {
    in_xd0 = *(undefined8 *)(unsigned)(iVar2 + 0xec);
    dVar5 = *(double *)(unsigned)(ar4 + 0x5c);
  }
  if (cVar6 == '\0') {
    fVar3 = F32LO(dVar5) * F32HI(dVar5);
  }
  else {
    fVar3 = SUB84(dVar5 * dVar5,0);
  }
  if (cVar7 == '\0') {
    *(float *)(unsigned)(ar4 + 0x40c) = fVar3;
  }
  else {
    *(undefined8 *)(unsigned)(ar4 + 0x40c) = in_xd0;
  }
  return 0xec;
}

__asm__(".globl _FUN_8c02ae38\n.set _FUN_8c02ae38, _FUN_8c02ae38_def\n");
