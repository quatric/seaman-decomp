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
undefined4 FUN_8c0d64a0_def(undefined8 *ar4,undefined4 ar5,undefined8 *ar6,undefined8 *ar7)

{
  ring[rp++ & 255] = "FUN_8c0d64a0";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 64; for (int i_ = 0; i_ < 64; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  int iVar2;
  undefined8 *a5;
  double in_dr0 = 0;
  undefined8 uVar3;
  float fVar6;
  double dVar4;
  double dVar5;
  undefined8 in_dr14 = 0;
  uint uVar8;
  double dVar7;
  undefined8 in_xd0 = 0;
  double in_xd14 = 0;
  char cVar9;
  char cVar10;
  
  uVar8 = (uint)((ulonglong)in_dr14 >> 0x20);
  cVar10 = '\0';
  cVar9 = '\0';
  (vsp = ((unsigned long)(fr0_ - 64)), Vec3_ctor_zero(&(*(undefined4 *)(fr0_ - 0x1c)),ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 64)), Vec3_ctor_zero(&(*(undefined4 *)(fr0_ - 0x2c)),ar5,ar6,ar7));
  dVar7 = (double)((ulonglong)uVar8 << 0x20);
  iVar2 = *(int *)(unsigned)((int)ar4 + 100);
  if ((iVar2 < 7) && (-1 < iVar2)) {
                    
    switch(iVar2) {
    case 0:
      if (cVar10 == '\0') {
        uVar3 = CONCAT44(*(undefined4 *)(unsigned)(ar4 + 0xb),*(undefined4 *)(unsigned)(ar4 + 1));
      }
      else {
        uVar3 = ar4[0xb];
      }
      if (cVar9 == '\0' && (float)uVar3 < F32HI(uVar3)) {
        if (cVar10 == '\0') {
          *(undefined4 *)(unsigned)(ar4 + 1) = *(undefined4 *)(unsigned)(ar4 + 0xb);
        }
        else {
          ar4[1] = ar4[0xb];
        }
      }
      break;
    case 2:
      if (*(int *)(unsigned)(ar4 + 0xc) != 0) {
        (vsp = ((unsigned long)(fr0_ - 64)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0xc) + 8) + 0x80))))(*(int *)(unsigned)(ar4 + 0xc),ar5,ar6,ar7));
        ar7 = ar4 + 7;
        ar6 = (undefined8 *)(unsigned)((int)ar4 + 0x34);
        a5 = ar4 + 6;
        (vsp = ((unsigned long)(fr0_ - 64)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0xc) + 8) + 0x134))))(*(int *)(unsigned)(ar4 + 0xc),a5,ar6,ar7));
        (vsp = ((unsigned long)(fr0_ - 64)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0xc) + 8) + 0x130))))(*(int *)(unsigned)(ar4 + 0xc),a5,ar6,ar7));
        uVar1 = (undefined4)((ulonglong)in_dr0 >> 0x20);
        if (cVar10 == '\0') {
          in_dr0 = CONCAT44D(uVar1,*(undefined4 *)(unsigned)(ar4 + 7));
        }
        else {
          in_xd0 = ar4[7];
          ((undefined4 *)(fr0_ - 0x3c))[0] = uVar1;
        }
        if (cVar9 == '\0') {
          fVar6 = F32HI(in_dr0);
          in_dr0 = CONCAT44D(fVar6,F32LO(in_dr0) + fVar6);
        }
        else {
          in_dr0 = in_dr0 + in_dr0;
        }
        if (cVar10 == '\0') {
          *(int *)(unsigned)(ar4 + 7) = SUB84(in_dr0,0);
        }
        else {
          ar4[7] = in_xd0;
        }
      }
      ({ unsigned long t0_ = (unsigned long)(((undefined4 *)(fr0_ - 0x3c))); *(unsigned *)((((unsigned long)(fr0_ - 64)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 64)) - 8); Vec3_sub(ar4 + 6,ar4,ar6,ar7); });
      (vsp = ((unsigned long)(fr0_ - 64)), Vec3_assign(&(*(undefined4 *)(fr0_ - 0x1c)),((undefined4 *)(fr0_ - 0x3c)),ar6,ar7));
      uVar1 = 0xffffffff;
      (vsp = ((unsigned long)(fr0_ - 64)), Vec3_dtor(((undefined4 *)(fr0_ - 0x3c)),0xffffffff,ar6,ar7));
      (vsp = ((unsigned long)(fr0_ - 64)), Vec3_length_sq(&(*(undefined4 *)(fr0_ - 0x1c)),uVar1,ar6,ar7));
      (vsp = ((unsigned long)(fr0_ - 64)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)((int)ar4 + 0x11c) + 8))))((int *)(unsigned)((int)ar4 + 0x11c),uVar1,ar6,ar7));
      if (cVar10 == '\0') {
        dVar7 = CONCAT44D((int)(D2U(dVar7) >> 0x20),(int)((ulonglong)in_dr0 >> 0x20));
        in_dr0 = in_xd14;
      }
      (vsp = ((unsigned long)(fr0_ - 64)), Vec3_length(&(*(undefined4 *)(fr0_ - 0x1c)),uVar1,ar6,ar7));
      (*(float *)(fr0_ - 0x24)) = SUB84(dVar7,0);
      dVar4 = in_dr0;
      if (cVar10 == '\0') {
        dVar4 = CONCAT44D((*(float *)(fr0_ - 0x24)),(*(undefined4 *)(fr0_ - 0x1c)));
      }
      if (cVar9 == '\0') {
        dVar4 = CONCAT44D(F32HI(dVar4) * F32LO(dVar4),SUB84(dVar4,0));
      }
      else {
        dVar4 = dVar4 * dVar4;
      }
      if (cVar10 == '\0') {
        (*(undefined4 *)(fr0_ - 0x2c)) = (undefined4)(D2U(dVar4) >> 0x20);
        dVar4 = CONCAT44D((*(float *)(fr0_ - 0x24)),(*(undefined4 *)(fr0_ - 0x18)));
      }
      else {
        (*(undefined4 *)(fr0_ - 0x2c)) = SUB84(dVar4,0);
        dVar4 = in_dr0;
      }
      if (cVar9 == '\0') {
        dVar4 = CONCAT44D(F32HI(dVar4) * F32LO(dVar4),SUB84(dVar4,0));
      }
      else {
        dVar4 = dVar4 * dVar4;
      }
      (*(undefined4 *)(fr0_ - 0x28)) = SUB84(dVar4,0);
      if (cVar10 == '\0') {
        dVar5 = CONCAT44D((*(undefined4 *)(fr0_ - 0x14)),(*(undefined4 *)(fr0_ - 0x28)));
        (*(undefined4 *)(fr0_ - 0x28)) = (int)(D2U(dVar4) >> 0x20);
      }
      else {
        dVar5 = CONCAT44D((*(undefined4 *)(fr0_ - 0x10)),(*(undefined4 *)(fr0_ - 0x14)));
      }
      if (cVar9 == '\0') {
        (*(float *)(fr0_ - 0x24)) = (*(float *)(fr0_ - 0x24)) * F32HI(dVar5);
      }
      else {
        (*(float *)(fr0_ - 0x24)) = SUB84(dVar7 * dVar5,0);
      }
      if (cVar10 != '\0') {
        (*(float *)(fr0_ - 0x24)) = SUB84(in_dr0,0);
        (*(undefined4 *)(fr0_ - 0x20)) = (undefined4)((ulonglong)in_dr0 >> 0x20);
      }
      (vsp = ((unsigned long)(fr0_ - 64)), FUN_8c023aa0(ar4,&(*(undefined4 *)(fr0_ - 0x2c)),ar6,ar7));
      break;
    case 4:
      ar6 = ar4 + 6;
      iVar2 = (vsp = ((unsigned long)(fr0_ - 64)), FUN_8c0d6d58(ar4,ar4,ar6,ar7));
      if (iVar2 == 4) {
        *(undefined4 *)(unsigned)((int)ar4 + 100) = 3;
      }
      if (cVar10 == '\0') {
        *(undefined4 *)(unsigned)(ar4 + 4) = *(undefined4 *)(unsigned)ar4;
      }
      else {
        ar4[4] = *ar4;
      }
      break;
    case 5:
      ar6 = ar4 + 6;
      iVar2 = (vsp = ((unsigned long)(fr0_ - 64)), FUN_8c0d6d58(ar4,ar4,ar6,ar7));
      if (iVar2 == 4) {
        *(undefined4 *)(unsigned)((int)ar4 + 100) = 0;
      }
      break;
    case 6:
      ar6 = ar4 + 6;
      iVar2 = (vsp = ((unsigned long)(fr0_ - 64)), FUN_8c0d6d58(ar4,ar4,ar6,ar7));
      if (iVar2 == 4) {
        *(undefined4 *)(unsigned)((int)ar4 + 100) = 0;
      }
      if (cVar10 == '\0') {
        *(undefined4 *)(unsigned)(ar4 + 4) = *(undefined4 *)(unsigned)ar4;
      }
      else {
        ar4[4] = *ar4;
      }
    }
  }
  (vsp = ((unsigned long)(fr0_ - 64)), Vec3_dtor(&(*(undefined4 *)(fr0_ - 0x2c)),0xffffffff,ar6,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 64)), Vec3_dtor(&(*(undefined4 *)(fr0_ - 0x1c)),0xffffffff,ar6,ar7));
  return uVar1;
}

__asm__(".globl _FUN_8c0d64a0\n.set _FUN_8c0d64a0, _FUN_8c0d64a0_def\n");
