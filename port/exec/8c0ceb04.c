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
undefined4 FUN_8c0ceb04_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0ceb04";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 48; for (int i_ = 0; i_ < 48; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 uVar2;
  float *a5;
  undefined4 in_fr1 = 0;
  float fVar3;
  double dVar4;
  float fVar5;
  float fVar6;
  undefined8 in_dr14 = 0;
  uint uVar8;
  double dVar7;
  undefined8 in_xd0 = 0;
  char cVar9;
  char cVar10;
  
  uVar8 = (uint)((ulonglong)in_dr14 >> 0x20);
  cVar10 = '\0';
  cVar9 = '\0';
  ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x2c))); *(unsigned *)((((unsigned long)(fr0_ - 48)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 48)) - 8); FUN_8c02f670(ar5,ar5,ar6,ar7); });
  (vsp = ((unsigned long)(fr0_ - 48)), Vec3_ctor_copy(&(*(float *)(fr0_ - 0x1c)),((undefined1 *)(fr0_ - 0x2c)),ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 48)), Vec3_dtor(((undefined1 *)(fr0_ - 0x2c)),0xffffffff,ar6,ar7));
  dVar7 = (double)((ulonglong)uVar8 << 0x20);
  a5 = &(*(float *)(fr0_ - 0x1c));
  iVar1 = (vsp = ((unsigned long)(fr0_ - 48)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 8)) + 0x130))))(((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 8)),a5,ar6,ar7));
  if (iVar1 == 2) {
    if (cVar10 == '\0') {
      dVar4 = CONCAT44D((*(float *)(fr0_ - 0x1c)),in_fr1);
      dVar7 = CONCAT44D((int)(D2U(dVar7) >> 0x20),0x451a6000);
    }
    else {
      dVar4 = CONCAT44D((*(float *)(fr0_ - 0x18)),(*(float *)(fr0_ - 0x1c)));
    }
    if (cVar9 == '\0') {
      dVar7 = CONCAT44D((int)(D2U(dVar7) >> 0x20),
                               F32LO(dVar7) - F32HI(dVar4));
    }
    else {
      dVar7 = dVar7 - dVar4;
    }
    if (cVar10 == '\0') {
      dVar4 = CONCAT44D(0x3f000000,SUB84(dVar4,0));
    }
    else {
      dVar4 = 2251800342167552.0;
    }
    if (cVar9 == '\0') {
      dVar7 = CONCAT44D((int)(D2U(dVar7) >> 0x20),
                               F32LO(dVar7) * F32HI(dVar4));
    }
    else {
      dVar7 = dVar7 * dVar4;
    }
    if (cVar10 == '\0') {
      dVar4 = CONCAT44D((*(float *)(fr0_ - 0x1c)),SUB84(dVar4,0));
    }
    else {
      dVar4 = CONCAT44D((*(float *)(fr0_ - 0x18)),(*(float *)(fr0_ - 0x1c)));
    }
    if (cVar9 == '\0') {
      dVar4 = CONCAT44D(F32HI(dVar4) + F32LO(dVar7),SUB84(dVar4,0));
    }
    else {
      dVar4 = dVar4 + dVar7;
    }
    fVar5 = F32HI(dVar4);
    if (cVar10 == '\0') {
      fVar6 = 160.0;
      fVar3 = (*(float *)(fr0_ - 0x18));
      (*(float *)(fr0_ - 0x1c)) = fVar5;
    }
    else {
      (*(float *)(fr0_ - 0x1c)) = SUB84(dVar4,0);
      in_xd0 = CONCAT44((*(undefined4 *)(fr0_ - 0x14)),fVar5);
      fVar3 = 160.0;
      fVar6 = 0.8;
      (*(float *)(fr0_ - 0x18)) = fVar5;
    }
    if (cVar9 != '\0' || fVar6 <= fVar3) {
      if (cVar10 == '\0') {
        dVar7 = CONCAT44D(0x3f4ccccd,(*(float *)(fr0_ - 0x18)));
      }
      else {
        in_xd0 = CONCAT44((*(undefined4 *)(fr0_ - 0x14)),(*(float *)(fr0_ - 0x18)));
        dVar7 = -8.472843126934268e-251;
      }
      if (cVar9 == '\0') {
        (*(float *)(fr0_ - 0x18)) = F32LO(dVar7) * F32HI(dVar7);
      }
      else {
        (*(float *)(fr0_ - 0x18)) = SUB84(dVar7 * dVar7,0);
      }
      if (cVar10 != '\0') {
        (*(float *)(fr0_ - 0x18)) = (float)in_xd0;
        (*(undefined4 *)(fr0_ - 0x14)) = (undefined4)((ulonglong)in_xd0 >> 0x20);
      }
    }
    (vsp = ((unsigned long)(fr0_ - 48)), FUN_8c036988(ar5,a5,ar6,ar7));
    uVar2 = (vsp = ((unsigned long)(fr0_ - 48)), Vec3_dtor(&(*(float *)(fr0_ - 0x1c)),0xffffffff,ar6,ar7));
  }
  else {
    uVar2 = (vsp = ((unsigned long)(fr0_ - 48)), Vec3_dtor(&(*(float *)(fr0_ - 0x1c)),0xffffffff,ar6,ar7));
  }
  return uVar2;
}

__asm__(".globl _FUN_8c0ceb04\n.set _FUN_8c0ceb04, _FUN_8c0ceb04_def\n");
