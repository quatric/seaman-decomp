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
int FUN_8c0d02c8_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0d02c8";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 4; for (int i_ = 0; i_ < 4; i_++) z_[i_] = 0; }
  int iVar1;
  double *pdVar2;
  float fVar3;
  double dVar4;
  float fVar6;
  ulonglong uVar5;
  double in_xd0 = 0;
  char cVar7;
  char cVar8;
  
  cVar8 = '\0';
  cVar7 = '\0';
  if ((*(undefined1 *)(unsigned)0x8c4374b4) == '\0') {
    (*(undefined4 *)(unsigned)(unsigned)0x8c4374b0) = 3.0525032e-05;
    (*(undefined1 *)(unsigned)0x8c4374b4) = '\x01';
  }
  if ((*(undefined1 *)(unsigned)0x8c4374bc) == '\0') {
    (*(undefined4 *)(unsigned)(unsigned)0x8c4374b8) = 0.015873017;
    (*(undefined1 *)(unsigned)0x8c4374bc) = '\x01';
  }
  if (*(int *)(unsigned)(ar4 + 0x14) == 1) {
    *(float *)(unsigned)(ar4 + 0x10) = *(float *)(unsigned)(ar4 + 0x10) + (*(undefined4 *)(unsigned)(unsigned)0x8c4374b0);
    if ((*(undefined4 *)(unsigned)(unsigned)0x8c4374b8) < *(float *)(unsigned)(ar4 + 0x10)) {
      *(float *)(unsigned)(ar4 + 0x10) = (*(undefined4 *)(unsigned)(unsigned)0x8c4374b8);
    }
    fVar3 = *(float *)(unsigned)(ar4 + 0xc) + *(float *)(unsigned)(ar4 + 0x10);
    uVar5 = (ulonglong)(uint)fVar3;
    *(float *)(unsigned)(ar4 + 0xc) = fVar3;
    iVar1 = (vsp = ((unsigned long)(fr0_ - 4)), libgcc_divide_helper_01031c((int)*(short *)(unsigned)(ar4 + 0x18),3,ar6,ar7));
    if (iVar1 == 0) {
      *(char *)(unsigned)(ar4 + 0x1b) = *(char *)(unsigned)(ar4 + 0x1b) + -1;
      *(char *)(unsigned)(ar4 + 0x1a) = *(char *)(unsigned)(ar4 + 0x1a) + -1;
      if (*(byte *)(unsigned)(ar4 + 0x1b) < 0x82) {
        *(undefined1 *)(unsigned)(ar4 + 0x1a) = 0x82;
        *(undefined1 *)(unsigned)(ar4 + 0x1b) = 0x82;
      }
    }
    iVar1 = (vsp = ((unsigned long)(fr0_ - 4)), libgcc_divide_helper_01031c((int)*(short *)(unsigned)(ar4 + 0x18),2,ar6,ar7));
    if (iVar1 == 0) {
      if (cVar8 == '\0') {
        *(undefined4 *)(unsigned)(ar4 + 0x24) = 0x3f800000;
      }
      else {
        *(undefined8 *)(unsigned)(ar4 + 0x24) = CONCAT44(0x3f800000,(int)uVar5);
      }
    }
    else if (cVar8 == '\0') {
      *(undefined4 *)(unsigned)(ar4 + 0x24) = 0;
    }
    else {
      *(ulonglong *)(unsigned)(ar4 + 0x24) = uVar5 & 0xffffffff;
    }
  }
  else {
    if (*(float *)(unsigned)(ar4 + 0x10) <= 0.0) {
      iVar1 = (vsp = ((unsigned long)(fr0_ - 4)), libgcc_divide_helper_01031c((int)*(short *)(unsigned)(ar4 + 0x18),2,ar6,ar7));
      if (iVar1 == 0) {
        if (cVar8 == '\0') {
          *(undefined4 *)(unsigned)(ar4 + 0x10) = 0xb8aec33e;
        }
        else {
          *(undefined8 *)(unsigned)(ar4 + 0x10) = 0xffb8aec33e;
        }
      }
    }
    else {
      *(float *)(unsigned)(ar4 + 0x10) = *(float *)(unsigned)(ar4 + 0x10) - 8.333333e-05;
    }
    pdVar2 = (double *)(unsigned)(ar4 + 0xc);
    if (cVar8 != '\0') {
      in_xd0 = *pdVar2;
      pdVar2 = (double *)(unsigned)(ar4 + 0x10);
    }
    dVar4 = *pdVar2;
    if (cVar7 == '\0') {
      fVar3 = F32LO(dVar4) + F32HI(dVar4);
    }
    else {
      fVar3 = SUB84(dVar4 + dVar4,0);
    }
    if (cVar8 == '\0') {
      *(float *)(unsigned)(ar4 + 0xc) = fVar3;
    }
    else {
      *(double *)(unsigned)(ar4 + 0xc) = in_xd0;
    }
    iVar1 = (vsp = ((unsigned long)(fr0_ - 4)), libgcc_divide_helper_01031c((int)*(short *)(unsigned)(ar4 + 0x18),3,ar6,ar7));
    if ((iVar1 == 0) && (*(char *)(unsigned)(ar4 + 0x1b) != -1)) {
      *(char *)(unsigned)(ar4 + 0x1b) = *(char *)(unsigned)(ar4 + 0x1b) + '\x01';
      *(char *)(unsigned)(ar4 + 0x1a) = *(char *)(unsigned)(ar4 + 0x1a) + '\x01';
    }
  }
  if (cVar8 == '\0') {
    fVar3 = *(float *)(unsigned)(ar4 + 0xc);
    fVar6 = 35.0;
  }
  else {
    fVar3 = 35.0;
    fVar6 = 1.1546207e-19;
  }
  if (cVar7 != '\0' || fVar3 <= fVar6) {
    if (cVar8 == '\0') {
      fVar3 = *(float *)(unsigned)(ar4 + 0xc);
    }
    if (cVar7 == '\0' && fVar3 < 0.0) {
      if (cVar8 == '\0') {
        *(undefined4 *)(unsigned)(ar4 + 0x10) = 0;
      }
      else {
        *(ulonglong *)(unsigned)(ar4 + 0x10) = (ulonglong)(uint)fVar3;
      }
      if (cVar8 == '\0') {
        *(undefined4 *)(unsigned)(ar4 + 0xc) = 0;
      }
      else {
        *(ulonglong *)(unsigned)(ar4 + 0xc) = (ulonglong)(uint)fVar3;
      }
    }
  }
  else {
    if (cVar8 == '\0') {
      uVar5 = CONCAT44(0x420c0000,fVar3);
      *(undefined4 *)(unsigned)(ar4 + 0xc) = 0x420c0000;
    }
    else {
      uVar5 = 0x20085045420c0000;
      *(undefined8 *)(unsigned)(ar4 + 0xc) = 0x20085045420c0000;
    }
    if (cVar8 == '\0') {
      *(undefined4 *)(unsigned)(ar4 + 0x10) = 0;
    }
    else {
      *(ulonglong *)(unsigned)(ar4 + 0x10) = uVar5 & 0xffffffff;
    }
  }
  *((uint *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x20)) =
       (uint)*(byte *)(unsigned)(ar4 + 0x1d) << 0x18 | (uint)*(byte *)(unsigned)(ar4 + 0x1c) << 0x10 |
       (uint)*(byte *)(unsigned)(ar4 + 0x1b) << 8 | (uint)*(byte *)(unsigned)(ar4 + 0x1a);
  iVar1 = *(short *)(unsigned)(ar4 + 0x18) + 1;
  *(short *)(unsigned)(ar4 + 0x18) = (short)iVar1;
  return iVar1;
}

__asm__(".globl _FUN_8c0d02c8\n.set _FUN_8c0d02c8, _FUN_8c0d02c8_def\n");
