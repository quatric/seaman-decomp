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
undefined4 FUN_8c0a9578_def(int ar4,undefined4 ar5,double *ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0a9578";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 116; for (int i_ = 0; i_ < 116; i_++) z_[i_] = 0; }
  int iVar1;
  int ar5_00;
  undefined4 uVar2;
  double *ar6_00;
  undefined4 ar7_00;
  undefined4 uVar3;
  uint uVar4;
  float fVar5;
  ulonglong in_dr0 = 0;
  double dVar6;
  double dVar7;
  double in_xd0 = 0;
  char cVar8;
  char cVar9;
  
  cVar9 = '\0';
  cVar8 = '\0';
  uVar3 = 1;
  ar6_00 = ar6;
  ar7_00 = ar7;
  (vsp = ((unsigned long)(fr0_ - 116)), Vec3_ctor_zero(((undefined1 *)(fr0_ - 0x28)),ar5,ar6,ar7));
  uVar4 = (uint)in_dr0;
  iVar1 = *(int *)(unsigned)(ar4 + 300);
  if (iVar1 == 0) {
    (vsp = ((unsigned long)(fr0_ - 116)), Vec3_assign(ar4 + 0x2174,ar4 + 0x80,ar6_00,ar7_00));
    dVar7 = (double)(ulonglong)uVar4;
    if (cVar9 == '\0') {
      *(undefined4 *)(unsigned)(ar4 + 0x2194) = 0;
    }
    else {
      *(double *)(unsigned)(ar4 + 0x2194) = dVar7;
    }
    (vsp = ((unsigned long)(fr0_ - 116)), Vec3_assign(ar4 + 0x54,ar5,ar6_00,ar7_00));
    ar5_00 = ar4 + 0x14;
    (vsp = ((unsigned long)(fr0_ - 116)), Vec3_assign(ar4 + 0x80,ar5_00,ar6_00,ar7_00));
    (vsp = ((unsigned long)(fr0_ - 116)), FUN_8c023d7c(ar4 + 0x21a8,ar5_00,ar6_00,ar7_00));
    (vsp = ((unsigned long)(fr0_ - 116)), FUN_8c023d7c(ar7,ar5_00,ar6_00,ar7_00));
    iVar1 = *(int *)(unsigned)(ar4 + 0x2198);
    if (iVar1 == 1) {
      if (cVar9 == '\0') {
        dVar7 = CONCAT44D(0x42c80000,*(undefined4 *)(unsigned)(ar6 + 1));
      }
      else {
        in_xd0 = ar6[1];
        dVar7 = 1.82072774393391e-310;
      }
      if (cVar8 == '\0') {
        fVar5 = F32HI(dVar7);
        dVar7 = CONCAT44D(fVar5,F32LO(dVar7) - fVar5);
      }
      else {
        dVar7 = dVar7 - dVar7;
      }
      if (cVar9 == '\0') {
        *(int *)(unsigned)(ar4 + 0x5c) = SUB84(dVar7,0);
      }
      else {
        *(double *)(unsigned)(ar4 + 0x5c) = in_xd0;
      }
      (vsp = ((unsigned long)(fr0_ - 116)), FUN_8c022d04(ar4 + 0x2184,ar5_00,ar6_00,ar7_00));
    }
    else if (iVar1 == 2) {
      if (cVar9 == '\0') {
        dVar7 = CONCAT44D(0x42c80000,SUB84(dVar7,0));
        *(undefined4 *)(unsigned)(ar4 + 0x5c) = 0x42c80000;
      }
      else {
        dVar7 = 1.82072774393391e-310;
        *(undefined8 *)(unsigned)(ar4 + 0x5c) = 0x218442c80000;
      }
      (vsp = ((unsigned long)(fr0_ - 116)), FUN_8c022d04(ar4 + 0x2184,ar5_00,ar6_00,ar7_00));
    }
    else if (iVar1 == 3) {
      if (cVar9 == '\0') {
        dVar7 = CONCAT44D(0x42c80000,*(undefined4 *)(unsigned)ar6);
      }
      else {
        in_xd0 = *ar6;
        dVar7 = 1.82072774393391e-310;
      }
      if (cVar8 == '\0') {
        fVar5 = F32HI(dVar7);
        dVar7 = CONCAT44D(fVar5,F32LO(dVar7) - fVar5);
      }
      else {
        dVar7 = dVar7 - dVar7;
      }
      if (cVar9 == '\0') {
        *(int *)(unsigned)(ar4 + 0x54) = SUB84(dVar7,0);
      }
      else {
        *(double *)(unsigned)(ar4 + 0x54) = in_xd0;
      }
      (vsp = ((unsigned long)(fr0_ - 116)), FUN_8c022d04(ar4 + 0x2184,ar5_00,ar6_00,ar7_00));
    }
    else if (iVar1 == 4) {
      if (cVar9 == '\0') {
        dVar7 = CONCAT44D(0x42c80000,SUB84(dVar7,0));
        *(undefined4 *)(unsigned)(ar4 + 0x54) = 0x42c80000;
      }
      else {
        dVar7 = 1.82072774393391e-310;
        *(undefined8 *)(unsigned)(ar4 + 0x54) = 0x218442c80000;
      }
      (vsp = ((unsigned long)(fr0_ - 116)), FUN_8c022d04(ar4 + 0x2184,ar5_00,ar6_00,ar7_00));
    }
    (vsp = ((unsigned long)(fr0_ - 116)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*((int *)(unsigned long)*(unsigned *)(fr0_ + 0x00000000)) + 0x128))))(((int *)(unsigned long)*(unsigned *)(fr0_ + 0x00000000)),ar4 + 0x54,ar6_00,ar7_00));
    uVar2 = (undefined4)(D2U(dVar7) >> 0x20);
    if (cVar9 == '\0') {
      *(undefined4 *)(unsigned)(ar4 + 0x58) = uVar2;
    }
    else {
      *(double *)(unsigned)(ar4 + 0x58) = dVar7;
      (*(undefined4 *)(fr0_ - 0x70)) = uVar2;
    }
    (vsp = ((unsigned long)(fr0_ - 116)), FUN_8c022fc0(ar5,ar4 + 0x54,ar6_00,ar7_00));
    if (cVar9 == '\0') {
      dVar6 = CONCAT44D(0x40a00000,(int)(D2U(dVar7) >> 0x20));
    }
    else {
      dVar6 = -7.956827002088933e-251;
      in_xd0 = dVar7;
    }
    if (cVar8 == '\0') {
      fVar5 = F32LO(dVar6) / F32HI(dVar6);
    }
    else {
      fVar5 = SUB84(dVar6 / dVar6,0);
    }
    if (cVar9 == '\0') {
      *(float *)(unsigned)(ar4 + 0x28) = fVar5;
    }
    else {
      *(double *)(unsigned)(ar4 + 0x28) = in_xd0;
    }
    ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x38))); *(unsigned *)((((unsigned long)(fr0_ - 116)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 116)) - 8); Vec3_sub(ar4 + 0x54,ar5,ar6_00,ar7_00); });
    (vsp = ((unsigned long)(fr0_ - 116)), Vec3_assign(ar4 + 0x14,((undefined1 *)(fr0_ - 0x38)),ar6_00,ar7_00));
    uVar2 = 0xffffffff;
    (vsp = ((unsigned long)(fr0_ - 116)), Vec3_dtor(((undefined1 *)(fr0_ - 0x38)),0xffffffff,ar6_00,ar7_00));
    (vsp = ((unsigned long)(fr0_ - 116)), Vec3_length(ar4 + 0x14,uVar2,ar6_00,ar7_00));
    *(int *)(unsigned)(ar4 + 300) = *(int *)(unsigned)(ar4 + 300) + 1;
  }
  else if (iVar1 != 1) {
    if (iVar1 == 2) {
      if (cVar9 == '\0') {
        *(undefined4 *)(unsigned)(ar4 + 0x28) = 0;
      }
      else {
        *(ulonglong *)(unsigned)(ar4 + 0x28) = in_dr0 & 0xffffffff;
      }
      if (cVar9 == '\0') {
        *(undefined4 *)(unsigned)(ar4 + 0x2194) = 0;
      }
      else {
        *(ulonglong *)(unsigned)(ar4 + 0x2194) = in_dr0 & 0xffffffff;
      }
      uVar3 = 0;
      (vsp = ((unsigned long)(fr0_ - 116)), Vec3_assign(ar4 + 0x14,ar4 + 0x80,ar6_00,ar7_00));
      *(undefined4 *)(unsigned)(ar4 + 0x2198) = 0;
      *(undefined4 *)(unsigned)(ar4 + 300) = 0;
    }
    goto LAB_8c0a984a;
  }
  if (cVar9 == '\0') {
    dVar7 = CONCAT44D(0x3e4ccccd,*(undefined4 *)(unsigned)(ar4 + 0x2194));
  }
  else {
    in_xd0 = *(double *)(unsigned)(ar4 + 0x2194);
    dVar7 = -7.957972460180408e-251;
  }
  if (cVar8 == '\0') {
    fVar5 = F32LO(dVar7) + F32HI(dVar7);
  }
  else {
    fVar5 = SUB84(dVar7 + dVar7,0);
  }
  if (cVar9 == '\0') {
    *(float *)(unsigned)(ar4 + 0x2194) = fVar5;
    fVar5 = *(float *)(unsigned)(ar4 + 0x2194);
  }
  else {
    *(double *)(unsigned)(ar4 + 0x2194) = in_xd0;
  }
  if (cVar8 != '\0' || 1.0 <= fVar5) {
    *(int *)(unsigned)(ar4 + 300) = *(int *)(unsigned)(ar4 + 300) + 1;
    if (cVar9 == '\0') {
      *(undefined4 *)(unsigned)(ar4 + 0x2194) = 0x3f800000;
    }
    else {
      *(undefined8 *)(unsigned)(ar4 + 0x2194) = CONCAT44(0x3f800000,fVar5);
    }
  }
  if (cVar9 == '\0') {
    fVar5 = *(float *)(unsigned)(ar4 + 0x2194);
  }
  if (cVar8 == '\0') {
    dVar7 = CONCAT44D(1.0 - fVar5,fVar5);
  }
  else {
    dVar7 = CONCAT44D(0x3f800000,fVar5) - CONCAT44D(0x3f800000,fVar5);
  }
  uVar2 = (undefined4)(D2U(dVar7) >> 0x20);
  (*(undefined4 *)(fr0_ - 0x70)) = uVar2;
  if (cVar9 != '\0') {
    (*(undefined4 *)(fr0_ - 0x70)) = SUB84(dVar7,0);
    (*(undefined4 *)(fr0_ - 0x6c)) = uVar2;
  }
  ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x48))); *(unsigned *)((((unsigned long)(fr0_ - 116)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 116)) - 8); Vec3_scale(ar4 + 0x80,&(*(undefined4 *)(fr0_ - 0x70)),ar6_00,ar7_00); });
  ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x58))); *(unsigned *)((((unsigned long)(fr0_ - 116)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 116)) - 8); Vec3_scale(ar4 + 0x2184,ar4 + 0x2194,ar6_00,ar7_00); });
  ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x68))); *(unsigned *)((((unsigned long)(fr0_ - 116)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 116)) - 8); Vec3_add(((undefined1 *)(fr0_ - 0x48)),((undefined1 *)(fr0_ - 0x58)),ar6_00,ar7_00); });
  (vsp = ((unsigned long)(fr0_ - 116)), Vec3_assign(ar4 + 0x80,((undefined1 *)(fr0_ - 0x68)),ar6_00,ar7_00));
  (vsp = ((unsigned long)(fr0_ - 116)), Vec3_dtor(((undefined1 *)(fr0_ - 0x68)),0xffffffff,ar6_00,ar7_00));
  (vsp = ((unsigned long)(fr0_ - 116)), Vec3_dtor(((undefined1 *)(fr0_ - 0x58)),0xffffffff,ar6_00,ar7_00));
  (vsp = ((unsigned long)(fr0_ - 116)), Vec3_dtor(((undefined1 *)(fr0_ - 0x48)),0xffffffff,ar6_00,ar7_00));
  (vsp = ((unsigned long)(fr0_ - 116)), FUN_8c031ab4(ar4,ar7,ar6_00,ar7_00));
LAB_8c0a984a:
  (*(undefined4 *)(fr0_ - 0x6c)) = uVar3;
  (vsp = ((unsigned long)(fr0_ - 116)), Vec3_dtor(((undefined1 *)(fr0_ - 0x28)),0xffffffff,ar6_00,ar7_00));
  return (*(undefined4 *)(fr0_ - 0x6c));
}

__asm__(".globl _FUN_8c0a9578\n.set _FUN_8c0a9578, _FUN_8c0a9578_def\n");
