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
undefined4 FUN_8c0de6d0_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0de6d0";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 108; for (int i_ = 0; i_ < 108; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  float fVar6;
  undefined8 in_dr0 = 0;
  undefined8 uVar7;
  float fVar8;
  char cVar9;
  char cVar10;
  
  cVar10 = '\0';
  cVar9 = '\0';
  if ((*(undefined1 *)(unsigned)0x8c437e18) == '\0') {
    in_dr0 = CONCAT44(0x438d0000,(int)in_dr0);
    (*(undefined4 *)(unsigned)(unsigned)0x8c437e10) = CONCAT44(0x438d0000,(*(undefined4 *)(unsigned)(unsigned)0x8c437e10));
    (*(undefined1 *)(unsigned)0x8c437e18) = '\x01';
  }
  if ((*(undefined1 *)(unsigned)0x8c437e20) == '\0') {
    in_dr0 = CONCAT44(0x43cf8000,(int)in_dr0);
    (*(undefined4 *)(unsigned)(unsigned)0x8c437e1c) = 0x43cf8000;
    (*(undefined1 *)(unsigned)0x8c437e20) = '\x01';
  }
  puVar5 = &(*(undefined4 *)(fr0_ - 0x20));
  (vsp = ((unsigned long)(fr0_ - 108)), FUN_8c0d99b8(puVar5,ar5,ar6,ar7));
  if (*(int *)(unsigned)(ar4 + 0x1024) != 0) {
    (vsp = ((unsigned long)(fr0_ - 108)), FUN_8c0d2028(puVar5,ar5,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 108)), FUN_8c016340(ar4 + 0x1028,ar5,ar6,ar7));
  }
  if (*(int *)(unsigned)(ar4 + 0x1024) == 2) {
    if (*(int *)(unsigned)(ar4 + 0x1020) == 0) {
      ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x68))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 108)); FUN_8c0bf0e8(ar4 + 0x13b24,ar5,ar6,ar7); });
      fVar6 = F32HI(in_dr0);
      if (cVar10 == '\0') {
        fVar6 = (*(float *)(fr0_ - 0x38));
      }
      (*(float *)(fr0_ - 0x38)) = fVar6;
      (vsp = ((unsigned long)(fr0_ - 108)), FUN_8c0d1858(((undefined1 *)(unsigned)0x8c13f3b0),ar5,ar6,ar7));
    }
    else if (*(int *)(unsigned)(ar4 + 0x1020) == 1) {
      ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x68))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 108)); FUN_8c0bf11c(ar4 + 0x13b70,ar5,ar6,ar7); });
      (vsp = ((unsigned long)(fr0_ - 108)), FUN_8c0d1858(((undefined1 *)(unsigned)0x8c13f400),ar5,ar6,ar7));
    }
  }
  uVar2 = (undefined4)in_dr0;
  (vsp = ((unsigned long)(fr0_ - 108)), FUN_8c0dbdf4(ar4,ar5,ar6,ar7));
  iVar3 = ar4 + 0xa68;
  (vsp = ((unsigned long)(fr0_ - 108)), Vec3_ctor_copy(((undefined1 *)(fr0_ - 0x30)),iVar3,ar6,ar7));
  ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x68))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 108)); FUN_8c0bf11c(ar4 + 0x13b70,iVar3,ar6,ar7); });
  (vsp = ((unsigned long)(fr0_ - 108)), FUN_8c0d4e88(ar4 + 0x10ac,((undefined1 *)(fr0_ - 0x30)),ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 108)), Vec3_dtor(((undefined1 *)(fr0_ - 0x30)),0xffffffff,ar6,ar7));
  iVar4 = ar4 + 0x7c;
  iVar3 = ar4 + 0x78;
  (vsp = ((unsigned long)(fr0_ - 108)), FUN_8c0e3ebc(ar4,iVar3,iVar4,ar7));
  if (cVar10 == '\0') {
    (*(undefined4 *)(fr0_ - 0x20)) = *(undefined4 *)(unsigned)(ar4 + 0x78);
    (*(undefined4 *)(fr0_ - 0x1c)) = *(undefined4 *)(unsigned)(ar4 + 0x7c);
    uVar7 = CONCAT44((*(undefined4 *)(fr0_ - 0x1c)),uVar2);
  }
  else {
    (*(undefined4 *)(fr0_ - 0x20)) = (undefined4)*(undefined8 *)(unsigned)(ar4 + 0x78);
    uVar7 = *(undefined8 *)(unsigned)(ar4 + 0x7c);
    (*(undefined4 *)(fr0_ - 0x1c)) = (undefined4)uVar7;
    (*(int *)(fr0_ - 0x18)) = (int)((ulonglong)uVar7 >> 0x20);
  }
  (*(int *)(fr0_ - 0x14)) = ar4 + 0xa68;
  ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x68))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 108)); FUN_8c0bf11c(ar4 + 0x13b70,iVar3,iVar4,ar7); });
  (*(int *)(fr0_ - 0x18)) = (int)uVar7;
  iVar3 = (int)((ulonglong)uVar7 >> 0x20);
  if (cVar10 == '\0') {
    (*(int *)(fr0_ - 0x18)) = iVar3;
    iVar3 = (*(int *)(fr0_ - 0x14));
  }
  (*(int *)(fr0_ - 0x14)) = iVar3;
  puVar5 = &(*(undefined4 *)(fr0_ - 0x20));
  (vsp = ((unsigned long)(fr0_ - 108)), FUN_8c0d3f7c(ar4 + 0x10ac,puVar5,iVar4,ar7));
  (vsp = ((unsigned long)(fr0_ - 108)), FUN_8c0e3f24(ar4,puVar5,iVar4,ar7));
  puVar5 = &(*(undefined4 *)(fr0_ - 0x20));
  iVar3 = ar4 + 0x22d48;
  (vsp = ((unsigned long)(fr0_ - 108)), FUN_8c0d4124(ar4 + 0x10ac,iVar3,puVar5,ar7));
  if (cVar10 == '\0') {
    (*(undefined4 *)(unsigned)(unsigned)0x8c437e10) = CONCAT44((*(undefined4 *)(unsigned)(unsigned)0x8c437e14),(int)((ulonglong)uVar7 >> 0x20));
    uVar7 = (*(undefined4 *)(unsigned)(unsigned)0x8c437e10);
  }
  (*(undefined4 *)(unsigned)(unsigned)0x8c437e10) = uVar7;
  (vsp = ((unsigned long)(fr0_ - 108)), FUN_8c01538c(ar4 + 0x22d40,iVar3,puVar5,ar7));
  for (iVar4 = 0; iVar4 < 3; iVar4 = iVar4 + 1) {
    (vsp = ((unsigned long)(fr0_ - 108)), FUN_8c0d43cc(&(*(float *)(fr0_ - 0x38)),iVar3,puVar5,ar7));
    if (cVar10 == '\0') {
      fVar8 = -150.0;
      fVar6 = (*(float *)(fr0_ - 0x38));
    }
    else {
      fVar6 = -150.0;
      fVar8 = 800.0;
    }
    if (cVar9 != '\0' || fVar8 <= fVar6) {
      if (cVar10 == '\0') {
        fVar8 = 800.0;
        fVar6 = (*(float *)(fr0_ - 0x38));
      }
      else {
        fVar6 = 800.0;
        fVar8 = -100.0;
      }
      if (cVar9 != '\0' || fVar6 <= fVar8) {
        if (cVar10 == '\0') {
          fVar8 = -100.0;
          fVar6 = (*(float *)(fr0_ - 0x34));
        }
        else {
          fVar6 = -100.0;
          fVar8 = 600.0;
        }
        if (cVar9 != '\0' || fVar8 <= fVar6) {
          if (cVar10 == '\0') {
            fVar8 = 600.0;
            fVar6 = (*(float *)(fr0_ - 0x34));
          }
          else {
            fVar6 = 600.0;
            fVar8 = 1.99915e-40;
          }
          if (cVar9 != '\0' || fVar6 <= fVar8) {
            (vsp = ((unsigned long)(fr0_ - 108)), FUN_8c0d7354(ar4 + iVar4 * 0x16c + 0x22d48,iVar3,puVar5,ar7));
          }
        }
      }
    }
  }
  (vsp = ((unsigned long)(fr0_ - 108)), FUN_8c0e14fc(ar4,iVar3,puVar5,ar7));
  (vsp = ((unsigned long)(fr0_ - 108)), FUN_8c0d43cc(&(*(float *)(fr0_ - 0x38)),iVar3,puVar5,ar7));
  if (cVar10 == '\0') {
    fVar8 = -150.0;
    fVar6 = (*(float *)(fr0_ - 0x38));
  }
  else {
    fVar6 = -150.0;
    fVar8 = 800.0;
  }
  if (cVar9 != '\0' || fVar8 <= fVar6) {
    if (cVar10 == '\0') {
      fVar8 = 800.0;
      fVar6 = (*(float *)(fr0_ - 0x38));
    }
    else {
      fVar6 = 800.0;
      fVar8 = -100.0;
    }
    if (cVar9 != '\0' || fVar6 <= fVar8) {
      if (cVar10 == '\0') {
        fVar8 = -100.0;
        fVar6 = (*(float *)(fr0_ - 0x34));
      }
      else {
        fVar6 = -100.0;
        fVar8 = 600.0;
      }
      if (cVar9 != '\0' || fVar8 <= fVar6) {
        if (cVar10 == '\0') {
          fVar6 = 600.0;
        }
        else {
          (*(float *)(fr0_ - 0x34)) = 600.0;
          fVar6 = 1.99915e-40;
        }
        if (cVar9 != '\0' || (*(float *)(fr0_ - 0x34)) <= fVar6) {
          (vsp = ((unsigned long)(fr0_ - 108)), FUN_8c0d0564(ar4 + 0x13b24,iVar3,puVar5,ar7));
        }
      }
    }
  }
  (vsp = ((unsigned long)(fr0_ - 108)), FUN_8c0d43cc(&(*(float *)(fr0_ - 0x38)),iVar3,puVar5,ar7));
  if (cVar10 == '\0') {
    fVar8 = 650.0;
    fVar6 = (*(float *)(fr0_ - 0x38));
  }
  else {
    fVar6 = 650.0;
    fVar8 = 1.9765e-40;
  }
  if (cVar9 != '\0' || fVar6 <= fVar8) {
    iVar3 = ar4 + 0x226f8;
    (vsp = ((unsigned long)(fr0_ - 108)), FUN_8c0e4198(ar4,iVar3,puVar5,ar7));
  }
  (vsp = ((unsigned long)(fr0_ - 108)), FUN_8c0d9720(ar4 + 0x22704,iVar3,puVar5,ar7));
  (vsp = ((unsigned long)(fr0_ - 108)), FUN_8c0d092c(ar4 + 0x13b70,iVar3,puVar5,ar7));
  for (iVar4 = 0; iVar4 < 8; iVar4 = iVar4 + 1) {
    iVar1 = (vsp = ((unsigned long)(fr0_ - 108)), FUN_8c0f6ab0(ar4 + iVar4 * 0x68 + 0xc0c,iVar3,puVar5,ar7));
    if (iVar1 == 1) {
      puVar5 = (undefined4 *)(unsigned)(ar4 + 4);
      iVar3 = ar4 + 0xc;
      (vsp = ((unsigned long)(fr0_ - 108)), FUN_8c0f7118(ar4 + iVar4 * 0x68 + 0xc0c,iVar3,puVar5,ar7));
    }
  }
  (vsp = ((unsigned long)(fr0_ - 108)), FUN_8c0da754(ar4,iVar3,puVar5,ar7));
  uVar2 = (vsp = ((unsigned long)(fr0_ - 108)), free_if_nonnull_wrap_0deb30(&(*(undefined4 *)(fr0_ - 0x20)),0xffffffff,puVar5,ar7));
  return uVar2;
}

__asm__(".globl _FUN_8c0de6d0\n.set _FUN_8c0de6d0, _FUN_8c0de6d0_def\n");
