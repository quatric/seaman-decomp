//@unit 8c0d0178
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
undefined4 FUN_8c0d0178_def(int ar4,undefined4 *ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0d0178";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 16; for (int i_ = 0; i_ < 16; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 uVar2;
  
  if (*(undefined4 *)(unsigned)0x8c4374ac == '\0') {
    *(undefined4 *)(unsigned)0x8c4374a8 = 5;
    *(undefined4 *)(unsigned)0x8c4374ac = '\x01';
  }
  iVar1 = *(int *)(unsigned)(ar4 + 0x28);
  if (iVar1 == 0) {
    if (*(int *)(unsigned)(ar4 + 0x14) == 1) {
      ((undefined4 *)(fr0_ - 0xc))[0] = (vsp = ((unsigned long)(fr0_ - 16)), FUN_8c02190c(0x8c2b59d0,ar5,ar6,ar7));
      ar6 = 9;
      (vsp = ((unsigned long)(fr0_ - 16)), FUN_8c021994(0x8c2b59d0,((undefined4 *)(fr0_ - 0xc))[0],9,ar7));
      ar5 = ((undefined4 *)(fr0_ - 0xc));
      (vsp = ((unsigned long)(fr0_ - 16)), FUN_8c021a8c(0x8c2b59d0,ar5,ar6,ar7));
      *(undefined2 *)(unsigned)(ar4 + 0x2c) = 0;
      *(undefined4 *)(unsigned)(ar4 + 0x28) = 1;
    }
  }
  else if (iVar1 == 1) {
    *(short *)(unsigned)(ar4 + 0x2c) = *(short *)(unsigned)(ar4 + 0x2c) + 1;
    if (*(undefined4 *)(unsigned)0x8c4374a8 <= (int)*(short *)(unsigned)(ar4 + 0x2c)) {
      *(undefined2 *)(unsigned)(ar4 + 0x2c) = 0;
      *(undefined4 *)(unsigned)(ar4 + 0x28) = 2;
    }
    if (*(int *)(unsigned)(ar4 + 0x14) == 0) {
      *(undefined4 *)(unsigned)(ar4 + 0x28) = 0;
    }
  }
  else if (iVar1 == 2) {
    if (*(int *)(unsigned)(ar4 + 0x34) == -1) {
      uVar2 = (vsp = ((unsigned long)(fr0_ - 16)), FUN_8c02190c(0x8c2b59d0,ar5,ar6,ar7));
      *(undefined4 *)(unsigned)(ar4 + 0x34) = uVar2;
      ar6 = 10;
      ar5 = ((undefined4 *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x34));
      (vsp = ((unsigned long)(fr0_ - 16)), FUN_8c021994(0x8c2b59d0,ar5,10,ar7));
    }
    if ((*(int *)(unsigned)(ar4 + 0x14) == 0) && (*(int *)(unsigned)(ar4 + 0x34) != -1)) {
      (vsp = ((unsigned long)(fr0_ - 16)), FUN_8c021a60(0x8c2b59d0,*(undefined4 *)(unsigned)(ar4 + 0x34),ar6,ar7));
      ar5 = (undefined4 *)(unsigned)(ar4 + 0x34);
      (vsp = ((unsigned long)(fr0_ - 16)), FUN_8c021a8c(0x8c2b59d0,ar5,ar6,ar7));
      *(undefined4 *)(unsigned)(ar4 + 0x34) = 0xffffffff;
      *(undefined4 *)(unsigned)(ar4 + 0x28) = 3;
    }
  }
  else if (iVar1 == 3) {
    ((undefined4 *)(fr0_ - 0xc))[0] = (vsp = ((unsigned long)(fr0_ - 16)), FUN_8c02190c(0x8c2b59d0,ar5,ar6,ar7));
    ar6 = 0xb;
    (vsp = ((unsigned long)(fr0_ - 16)), FUN_8c021994(0x8c2b59d0,((undefined4 *)(fr0_ - 0xc))[0],0xb,ar7));
    ar5 = ((undefined4 *)(fr0_ - 0xc));
    (vsp = ((unsigned long)(fr0_ - 16)), FUN_8c021a8c(0x8c2b59d0,ar5,ar6,ar7));
    *(undefined4 *)(unsigned)(ar4 + 0x28) = 0;
  }
  uVar2 = (vsp = ((unsigned long)(fr0_ - 16)), FUN_8c0d02c8(ar4,ar5,ar6,ar7));
  return uVar2;
}

__asm__(".globl _FUN_8c0d0178\n.set _FUN_8c0d0178, _FUN_8c0d0178_def\n");
//@unit 8c0d02c8
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
//@unit 8c0d0538
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
int FUN_8c0d0538_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0d0538";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  
  if ((*(int *)(unsigned)(ar4 + 0x14) == 0) && (ar5 == 1)) {
    iVar1 = 0x48;
    *(undefined4 *)(unsigned)(ar4 + 0x48) = 1;
  }
  else {
    iVar1 = *(int *)(unsigned)(ar4 + 0x14);
    if ((iVar1 == 1) && (ar5 == 0)) {
      iVar1 = 0x48;
      *(undefined4 *)(unsigned)(ar4 + 0x48) = 2;
    }
  }
  *(int *)(unsigned)(ar4 + 0x14) = ar5;
  return iVar1;
}

__asm__(".globl _FUN_8c0d0538\n.set _FUN_8c0d0538, _FUN_8c0d0538_def\n");
//@unit 8c0d0564
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
undefined4 FUN_8c0d0564_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0d0564";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  undefined4 in_PR = 0;
  
  uVar1 = 0;
  ({ unsigned long ri0_ = (unsigned long)(in_PR); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); FUN_8c256328(0,ar5,ar6,ar7); });
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c019058(uVar1,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c01538c(ar4,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c015adc(ar4 + 8,ar5,ar6,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c256210(1,ar5,ar6,ar7));
  return uVar1;
}

__asm__(".globl _FUN_8c0d0564\n.set _FUN_8c0d0564, _FUN_8c0d0564_def\n");
//@unit 8c0d05d0
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
undefined4 FUN_8c0d05d0_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0d05d0";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  undefined4 in_PR = 0;
  
  uVar1 = 0;
  ({ unsigned long ri0_ = (unsigned long)(in_PR); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); FUN_8c256328(0,ar5,ar6,ar7); });
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c019058(uVar1,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c01538c(ar4,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c015adc(ar4 + 8,ar5,ar6,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c256210(1,ar5,ar6,ar7));
  return uVar1;
}

__asm__(".globl _FUN_8c0d05d0\n.set _FUN_8c0d05d0, _FUN_8c0d05d0_def\n");
//@unit 8c0d063c
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
undefined4 FUN_8c0d063c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0d063c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  *(undefined4 *)(unsigned)(ar4 + 0x28) = 0;
  *(undefined4 *)(unsigned)(ar4 + 0x48) = 0;
  return 0x48;
}

__asm__(".globl _FUN_8c0d063c\n.set _FUN_8c0d063c, _FUN_8c0d063c_def\n");
//@unit 8c0d064c
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
undefined4 FUN_8c0d064c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0d064c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 4; for (int i_ = 0; i_ < 4; i_++) z_[i_] = 0; }
  if (*(int *)(unsigned)(ar4 + 0x34) != -1) {
    (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c021a60(0x8c2b59d0,*(undefined4 *)(unsigned)(ar4 + 0x34),ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c021a8c(0x8c2b59d0,ar4 + 0x34,ar6,ar7));
    *(undefined4 *)(unsigned)(ar4 + 0x34) = 0xffffffff;
  }
  *(undefined4 *)(unsigned)(ar4 + 0x48) = 0;
  return 0x48;
}

__asm__(".globl _FUN_8c0d064c\n.set _FUN_8c0d064c, _FUN_8c0d064c_def\n");
//@unit 8c0d068c
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
undefined4
s_Failed_to_set_texture_wrap_0d068c_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "s_Failed_to_set_texture_wrap_0d068c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), s_Failed_to_set_texture_s_015252(ar4,ar5,ar6,ar7));
  return uVar1;
}

__asm__(".globl _s_Failed_to_set_texture_wrap_0d068c\n.set _s_Failed_to_set_texture_wrap_0d068c, _s_Failed_to_set_texture_wrap_0d068c_def\n");
//@unit 8c0d06a8
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
undefined4 s_Failed_wrap_0d06a8_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "s_Failed_wrap_0d06a8";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), s_Failed_s_015312(ar4,ar5,ar6,ar7));
  return uVar1;
}

__asm__(".globl _s_Failed_wrap_0d06a8\n.set _s_Failed_wrap_0d06a8, _s_Failed_wrap_0d06a8_def\n");
//@unit 8c0d06c4
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
int FUN_8c0d06c4_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0d06c4";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  
  iVar1 = *(int *)(unsigned)(ar4 + 0x34);
  if (iVar1 != -1) {
    iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c021a60(0x8c2b59d0,*(undefined4 *)(unsigned)(ar4 + 0x34),ar6,ar7));
  }
  return iVar1;
}

__asm__(".globl _FUN_8c0d06c4\n.set _FUN_8c0d06c4, _FUN_8c0d06c4_def\n");
//@unit 8c0d06ec
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
int FUN_8c0d06ec_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0d06ec";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  
  iVar1 = *(int *)(unsigned)(ar4 + 0x34);
  if (iVar1 != -1) {
    iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c021994(0x8c2b59d0,*(undefined4 *)(unsigned)(ar4 + 0x34),10,ar7));
  }
  return iVar1;
}

__asm__(".globl _FUN_8c0d06ec\n.set _FUN_8c0d06ec, _FUN_8c0d06ec_def\n");
//@unit 8c0d0714
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
undefined4 FUN_8c0d0714_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0d0714";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  *(undefined4 *)(unsigned)(ar4 + 0x48) = 0;
  return 0x48;
}

__asm__(".globl _FUN_8c0d0714\n.set _FUN_8c0d0714, _FUN_8c0d0714_def\n");
//@unit 8c0d0720
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
undefined4 FUN_8c0d0720_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0d0720";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  *(undefined4 *)(unsigned)(ar4 + 0xc) = 0;
  *(undefined4 *)(unsigned)(ar4 + 0x10) = 0;
  *(undefined4 *)(unsigned)(ar4 + 0x14) = 0;
  *(undefined2 *)(unsigned)(ar4 + 0x18) = 0;
  *(undefined4 *)(unsigned)(ar4 + 0x28) = 0;
  *(undefined2 *)(unsigned)(ar4 + 0x2c) = 0;
  *(undefined1 *)(unsigned)(ar4 + 0x1d) = 0xff;
  *(undefined1 *)(unsigned)(ar4 + 0x1c) = 0xff;
  *(undefined1 *)(unsigned)(ar4 + 0x1b) = 0xff;
  *(undefined1 *)(unsigned)(ar4 + 0x1a) = 0xff;
  *(undefined4 *)(unsigned)(ar4 + 0x48) = 0;
  return 0x48;
}

__asm__(".globl _FUN_8c0d0720\n.set _FUN_8c0d0720, _FUN_8c0d0720_def\n");
//@unit 8c0d0768
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
undefined4 s_GRAPHICS_ENV_0d076c_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "s_GRAPHICS_ENV_0d076c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c020a70))))
            (ar5,(&(*(undefined1 *)(unsigned)0x8c13d45c)) + 0x10,(&(*(undefined1 *)(unsigned)0x8c13d45c)) + 0x21,ar4));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c020b68))))
                    (ar5,(&(*(undefined1 *)(unsigned)0x8c13d45c)) + 0x10,(&(*(undefined1 *)(unsigned)0x8c13d45c)) + 0x21
                     ,ar4));
  return uVar1;
}

__asm__(".globl _s_GRAPHICS_ENV_0d076c\n.set _s_GRAPHICS_ENV_0d076c, _s_GRAPHICS_ENV_0d076c_def\n");
//@unit 8c0d07b4
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
int FUN_8c0d07b4_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0d07b4";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c015224(ar4,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c015ab8(ar4 + 8,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0d0a84(ar4,ar5,ar6,ar7));
  return ar4;
}

__asm__(".globl _FUN_8c0d07b4\n.set _FUN_8c0d07b4, _FUN_8c0d07b4_def\n");
//@unit 8c0d07ec
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
int s_GRAPHICS_ENV_0d07f2_def(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "s_GRAPHICS_ENV_0d07f2";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int *ar7_00;
  int iVar1;
  undefined **ar5_00;
  uint uVar2;
  
  ({ unsigned long ri0_ = (unsigned long)(ar5); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); FUN_8c015ad4(ar4 + 2,((undefined1 *)(unsigned)0x8c13d9d8),ar6,ar7); });
  ar5_00 = &(*(undefined4 *)(unsigned)(unsigned)0x8c13d570);
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*ar4 + 8))))(ar4,&(*(undefined4 *)(unsigned)(unsigned)0x8c13d570),ar6,ar7));
  ar7_00 = (int *)(unsigned)(vsp = ((unsigned long)(fr0_ - 0)), get_field_4_0253e4(ar4,ar5_00,ar6,ar7));
  for (uVar2 = 0; uVar2 < (uint)ar7_00[1]; uVar2 = uVar2 + 1) {
    iVar1 = uVar2 * 0xc + *ar7_00;
    *(uint *)(unsigned)(iVar1 + 4) = *(uint *)(unsigned)(iVar1 + 4) | 0x80000000;
  }
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c020ef0(ar5,((undefined1 *)(unsigned)0x8c13d4fc),((undefined1 *)(unsigned)0x8c13d47d),ar7_00));
  if (iVar1 == -1) {
    iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), report_error_message(((undefined1 *)(unsigned)0x8c13d505),((undefined1 *)(unsigned)0x8c13d4fb),1,2));
  }
  return iVar1;
}

__asm__(".globl _s_GRAPHICS_ENV_0d07f2\n.set _s_GRAPHICS_ENV_0d07f2, _s_GRAPHICS_ENV_0d07f2_def\n");
//@unit 8c0d08c0
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
undefined * FUN_8c0d08c0_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0d08c0";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined *puVar1;
  float fVar2;
  
  fVar2 = 5e-05;
  puVar1 = (undefined *)(unsigned)0x0;
  if (*(int *)(unsigned)(ar4 + 0x18) != 0) {
    if (*(int *)(unsigned)(ar4 + 0x14) == 1) {
      fVar2 = 0.05;
    }
    *(float *)(unsigned)(ar4 + 0xc) = *(float *)(unsigned)(ar4 + 0xc) + fVar2;
    puVar1 = ((undefined1 *)(unsigned)0x8c0d090c);
    if (100.0 < *(float *)(unsigned)(ar4 + 0xc)) {
      puVar1 = ((undefined1 *)(unsigned)0x8c0d090c);
      *(undefined4 *)(unsigned)(ar4 + 0xc) = 0x42c80000;
    }
  }
  return puVar1;
}

__asm__(".globl _FUN_8c0d08c0\n.set _FUN_8c0d08c0, _FUN_8c0d08c0_def\n");
//@unit 8c0d0910
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
undefined4 FUN_8c0d0910_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0d0910";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0d08c0(ar4,ar5,ar6,ar7));
  return uVar1;
}

__asm__(".globl _FUN_8c0d0910\n.set _FUN_8c0d0910, _FUN_8c0d0910_def\n");
//@unit 8c0d092c
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
undefined4 FUN_8c0d092c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0d092c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  undefined4 in_PR = 0;
  
  uVar1 = 0;
  ({ unsigned long ri0_ = (unsigned long)(in_PR); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); FUN_8c256328(0,ar5,ar6,ar7); });
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c019058(uVar1,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c01538c(ar4,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c015af8(ar4 + 8,ar5,ar6,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c256210(1,ar5,ar6,ar7));
  return uVar1;
}

__asm__(".globl _FUN_8c0d092c\n.set _FUN_8c0d092c, _FUN_8c0d092c_def\n");
//@unit 8c0d0990
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
undefined4 FUN_8c0d0990_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0d0990";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  undefined4 in_PR = 0;
  
  uVar1 = 0;
  ({ unsigned long ri0_ = (unsigned long)(in_PR); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); FUN_8c256328(0,ar5,ar6,ar7); });
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c019058(uVar1,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c01538c(ar4,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c015af8(ar4 + 8,ar5,ar6,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c256210(1,ar5,ar6,ar7));
  return uVar1;
}

__asm__(".globl _FUN_8c0d0990\n.set _FUN_8c0d0990, _FUN_8c0d0990_def\n");
//@unit 8c0d09f4
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
undefined4 noop_0d09f4_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "noop_0d09f4";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 in_r0 = (undefined4)(unsigned long)vin0;
  
  return in_r0 = 0;
}

__asm__(".globl _noop_0d09f4\n.set _noop_0d09f4, _noop_0d09f4_def\n");
//@unit 8c0d09f8
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
undefined4 noop_0d09f8_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "noop_0d09f8";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 in_r0 = (undefined4)(unsigned long)vin0;
  
  return in_r0 = 0;
}

__asm__(".globl _noop_0d09f8\n.set _noop_0d09f8, _noop_0d09f8_def\n");
//@unit 8c0d09fc
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
undefined4
s_Failed_to_set_texture_wrap_0d09fc_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "s_Failed_to_set_texture_wrap_0d09fc";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), s_Failed_to_set_texture_s_015252(ar4,ar5,ar6,ar7));
  return uVar1;
}

__asm__(".globl _s_Failed_to_set_texture_wrap_0d09fc\n.set _s_Failed_to_set_texture_wrap_0d09fc, _s_Failed_to_set_texture_wrap_0d09fc_def\n");
//@unit 8c0d0a18
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
undefined4 s_Failed_wrap_0d0a18_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "s_Failed_wrap_0d0a18";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), s_Failed_s_015312(ar4,ar5,ar6,ar7));
  return uVar1;
}

__asm__(".globl _s_Failed_wrap_0d0a18\n.set _s_Failed_wrap_0d0a18, _s_Failed_wrap_0d0a18_def\n");
//@unit 8c0d0a34
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
undefined4 noop_0d0a34_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "noop_0d0a34";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 in_r0 = (undefined4)(unsigned long)vin0;
  
  return in_r0 = 0;
}

__asm__(".globl _noop_0d0a34\n.set _noop_0d0a34, _noop_0d0a34_def\n");
//@unit 8c0d0a38
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
undefined4 noop_0d0a38_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "noop_0d0a38";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 in_r0 = (undefined4)(unsigned long)vin0;
  
  return in_r0 = 0;
}

__asm__(".globl _noop_0d0a38\n.set _noop_0d0a38, _noop_0d0a38_def\n");
//@unit 8c0d0a3c
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
undefined4 FUN_8c0d0a3c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0d0a3c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 in_r0 = (undefined4)(unsigned long)vin0;
  
  *(undefined4 *)(unsigned)(ar4 + 0x14) = ar5;
  return in_r0 = 0;
}

__asm__(".globl _FUN_8c0d0a3c\n.set _FUN_8c0d0a3c, _FUN_8c0d0a3c_def\n");
//@unit 8c0d0a44
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
int FUN_8c0d0a44_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0d0a44";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined8 in_dr4 = 0;
  float fVar1;
  
  fVar1 = F32HI(in_dr4);
  if (0.00016666666 < fVar1) {
    fVar1 = 0.00016666666;
  }
  *(float *)(unsigned)(ar4 + 0xc) = *(float *)(unsigned)(ar4 + 0xc) - fVar1;
  if (*(float *)(unsigned)(ar4 + 0xc) <= 0.0) {
    *(undefined4 *)(unsigned)(ar4 + 0xc) = 0;
  }
  return ar4 + 0xc;
}

__asm__(".globl _FUN_8c0d0a44\n.set _FUN_8c0d0a44, _FUN_8c0d0a44_def\n");
//@unit 8c0d0a84
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
undefined4 FUN_8c0d0a84_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0d0a84";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  *(undefined4 *)(unsigned)(ar4 + 0xc) = 0;
  *(undefined4 *)(unsigned)(ar4 + 0x14) = 0;
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0d0aac(ar4,ar5,ar6,ar7));
  return uVar1;
}

__asm__(".globl _FUN_8c0d0a84\n.set _FUN_8c0d0a84, _FUN_8c0d0a84_def\n");
//@unit 8c0d0aac
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
undefined4 FUN_8c0d0aac_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0d0aac";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  *(undefined4 *)(unsigned)(ar4 + 0x18) = 1;
  return 1;
}

__asm__(".globl _FUN_8c0d0aac\n.set _FUN_8c0d0aac, _FUN_8c0d0aac_def\n");
//@unit 8c0d0ab4
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
undefined4 FUN_8c0d0ab4_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0d0ab4";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;
  undefined4 ain0 = (undefined4)(unsigned long)vin0;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 in_fr4 = 0;
  
  *(undefined4 *)(unsigned)(ar4 + 0x70) = in_fr4;
  return ain0;
}

__asm__(".globl _FUN_8c0d0ab4\n.set _FUN_8c0d0ab4, _FUN_8c0d0ab4_def\n");
//@unit 8c0d0abc
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
undefined4 * FUN_8c0d0abc_def(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0d0abc";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 16; for (int i_ = 0; i_ < 16; i_++) z_[i_] = 0; }
  undefined4 ar5_00;
  undefined4 ain0;
  
  ain0 = CONCAT22((short)((uint)(*(undefined4 *)(fr0_ - 0xc)) >> 0x10),(undefined2)ar5);
  if (ar4 != (undefined4 *)(unsigned)0x0) {
    *ar4 = 0x8c1297f4;
    ar5_00 = 0xffffffff;
    (vsp = ((unsigned long)(fr0_ - 16)), Vec3_dtor(ar4 + 0x15,0xffffffff,ar6,ar7));
    if (0 < (short)ain0) {
      ({ unsigned long ri0_ = (unsigned long)(ain0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 16)); free_if_nonnull(ar4,ar5_00,ar6,ar7); });
    }
  }
  return ar4;
}

__asm__(".globl _FUN_8c0d0abc\n.set _FUN_8c0d0abc, _FUN_8c0d0abc_def\n");
//@unit 8c0d0b04
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
undefined4 FUN_8c0d0b04_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0d0b04";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c014f74(ar4,ar5,ar6,ar7));
  if (0x3aaaaaa < *(uint *)(unsigned)(ar4 + 0x40)) {
    uVar1 = 0x40;
    *(int *)(unsigned)(ar4 + 0x40) = *(int *)(unsigned)(ar4 + 0x40) - 0x1000000;
  }
  else {
    uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c014d90(ar4,ar5,ar6,ar7));
  }
  return uVar1;
}

__asm__(".globl _FUN_8c0d0b04\n.set _FUN_8c0d0b04, _FUN_8c0d0b04_def\n");
//@unit 8c0d0b58
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
int FUN_8c0d0b58_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0d0b58";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined *ar5_00;
  undefined *ar6_00;
  undefined4 ar7_00;
  
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c015224(ar4,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c015ab8(ar4 + 8,ar5,ar6,ar7));
  ar5_00 = ((void *)(unsigned)0x8c014ab0);
  ar6_00 = ((void *)(unsigned)0x8c0d0abc);
  ar7_00 = 0xac;
  ({ unsigned long t0_ = (unsigned long)(0x15e); *(unsigned *)((((unsigned long)(fr0_ - 0)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 0)) - 8); FUN_8c010120(ar4 + 0xc,((void *)(unsigned)0x8c014ab0),((void *)(unsigned)0x8c0d0abc),0xac); })
  ;
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c02145c(ar4 + 0xeb48,ar5_00,ar6_00,ar7_00));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0d1564(ar4,ar5_00,ar6_00,ar7_00));
  return ar4;
}

__asm__(".globl _FUN_8c0d0b58\n.set _FUN_8c0d0b58, _FUN_8c0d0b58_def\n");
//@unit 8c0d0bcc
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
undefined4 s_GRAPHICS_ENV_0d0bd2_def(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "s_GRAPHICS_ENV_0d0bd2";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int *ar7_00;
  int iVar1;
  undefined **ar5_00;
  char *ar5_01;
  char *ar6_00;
  uint uVar2;
  
  ({ unsigned long ri0_ = (unsigned long)(ar5); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); FUN_8c015ad4(ar4 + 2,((undefined1 *)(unsigned)0x8c13d9d8),ar6,ar7); });
  ar5_00 = &(*(undefined4 *)(unsigned)(unsigned)0x8c13d570);
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*ar4 + 8))))(ar4,&(*(undefined4 *)(unsigned)(unsigned)0x8c13d570),ar6,ar7));
  ar7_00 = (int *)(unsigned)(vsp = ((unsigned long)(fr0_ - 0)), get_field_4_0253e4(ar4,ar5_00,ar6,ar7));
  for (uVar2 = 0; uVar2 < (uint)ar7_00[1]; uVar2 = uVar2 + 1) {
    iVar1 = uVar2 * 0xc + *ar7_00;
    *(uint *)(unsigned)(iVar1 + 4) = *(uint *)(unsigned)(iVar1 + 4) | 0x80000000;
  }
  ar6_00 = ((undefined1 *)(unsigned)0x8c13d47d);
  ar5_01 = ((undefined1 *)(unsigned)0x8c13d528);
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c020ef0(ar5,((undefined1 *)(unsigned)0x8c13d528),((undefined1 *)(unsigned)0x8c13d47d),ar7_00));
  if (iVar1 == -1) {
    ar7_00 = (int *)(unsigned)0x2;
    ar6_00 = (char *)(unsigned)0x1;
    ar5_01 = ((undefined1 *)(unsigned)0x8c13d4fb);
    (vsp = ((unsigned long)(fr0_ - 0)), report_error_message(((undefined1 *)(unsigned)0x8c13d532),((undefined1 *)(unsigned)0x8c13d4fb),1,2));
  }
  for (uVar2 = 0; uVar2 < 0x15e; uVar2 = uVar2 + 1) {
    (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c014cd4(ar4 + uVar2 * 0x2b + 3,ar5_01,ar6_00,ar7_00));
    ar5_01 = (char *)(unsigned)0x1;
    (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0d0d0c(ar4 + uVar2 * 0x2b + 3,1,ar6_00,ar7_00));
    ({ unsigned long ri0_ = (unsigned long)(ar5); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); FUN_8c0d0ab4(ar4 + uVar2 * 0x2b + 3,ar5_01,ar6_00,ar7_00); });
  }
  return 0x15e;
}

__asm__(".globl _s_GRAPHICS_ENV_0d0bd2\n.set _s_GRAPHICS_ENV_0d0bd2, _s_GRAPHICS_ENV_0d0bd2_def\n");
//@unit 8c0d0d0c
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
undefined4 FUN_8c0d0d0c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0d0d0c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  *(undefined4 *)(unsigned)(ar4 + 0x68) = 1;
  *(undefined1 *)(unsigned)(ar4 + 0x78) = (undefined1)ar5;
  return 0x78;
}

__asm__(".globl _FUN_8c0d0d0c\n.set _FUN_8c0d0d0c, _FUN_8c0d0d0c_def\n");
//@unit 8c0d0d1c
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
undefined4 FUN_8c0d0d1c_def(int ar4,code *ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0d0d1c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 88; for (int i_ = 0; i_ < 88; i_++) z_[i_] = 0; }
  ulonglong uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined1 *puVar6;
  int iVar7;
  float fVar8;
  double dVar9;
  float fVar10;
  ulonglong in_xd0 = 0;
  char cVar11;
  char cVar12;
  
  cVar12 = '\0';
  cVar11 = '\0';
  (*(undefined4 *)(fr0_ - 0xc)) = 0;
  if ((*(undefined1 *)(unsigned)0x8c4374c4) == '\0') {
    (*(undefined4 *)(unsigned)(unsigned)0x8c4374c0) = 10;
    (*(undefined1 *)(unsigned)0x8c4374c4) = '\x01';
  }
  if ((*(undefined1 *)(unsigned)0x8c4374d4) == '\0') {
    uVar2 = (vsp = ((unsigned long)(fr0_ - 88)), Vec3_ctor_xyz(0x8c4374d8,ar5,ar6,ar7));
    ar6 = 0x8c4374c8;
    ar5 = ((void *)0x8c022cb0);
    (vsp = ((unsigned long)(fr0_ - 88)), global_list_push(uVar2,((void *)0x8c022cb0),0x8c4374c8,ar7));
    (*(undefined1 *)(unsigned)0x8c4374d4) = '\x01';
  }
  (vsp = ((unsigned long)(fr0_ - 88)), Vec3_ctor_zero(((undefined1 *)(fr0_ - 0x20)),ar5,ar6,ar7));
  (*(ulonglong *)(fr0_ - 0x38)) = (ulonglong)(uint)(*(ulonglong *)(fr0_ - 0x38));
  iVar3 = *(int *)(unsigned)(ar4 + 0xeb60);
  if (iVar3 == 0) {
    if (*(int *)(unsigned)(ar4 + 0xeb44) == 1) {
      *(undefined2 *)(unsigned)(ar4 + 0xeb64) = 0;
      *(undefined4 *)(unsigned)(ar4 + 0xeb60) = 2;
    }
  }
  else if (iVar3 == 2) {
    if (*(int *)(unsigned)(ar4 + 0xeb4c) == -1) {
      uVar2 = (vsp = ((unsigned long)(fr0_ - 88)), FUN_8c02190c(0x8c2b59d0,ar5,ar6,ar7));
      *(undefined4 *)(unsigned)(ar4 + 0xeb4c) = uVar2;
      ar6 = 5;
      ar5 = ((code *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0xeb4c));
      (vsp = ((unsigned long)(fr0_ - 88)), FUN_8c021994(0x8c2b59d0,ar5,5,ar7));
    }
    if ((*(int *)(unsigned)(ar4 + 0xeb44) == 0) && (*(int *)(unsigned)(ar4 + 0xeb4c) != -1)) {
      (vsp = ((unsigned long)(fr0_ - 88)), FUN_8c021a60(0x8c2b59d0,*(undefined4 *)(unsigned)(ar4 + 0xeb4c),ar6,ar7));
      ar5 = (code *)(ar4 + 0xeb4c);
      (vsp = ((unsigned long)(fr0_ - 88)), FUN_8c021a8c(0x8c2b59d0,ar5,ar6,ar7));
      *(undefined4 *)(unsigned)(ar4 + 0xeb4c) = 0xffffffff;
      *(undefined4 *)(unsigned)(ar4 + 0xeb60) = 3;
    }
  }
  else if (iVar3 == 3) {
    *(undefined4 *)(unsigned)(ar4 + 0xeb60) = 0;
  }
  if (*(int *)(unsigned)(ar4 + 0xeb44) == 1) {
    if (cVar12 == '\0') {
      dVar9 = CONCAT44D(0x41800000,*(undefined4 *)(unsigned)(ar4 + 0xeb38));
    }
    else {
      in_xd0 = *(ulonglong *)(unsigned)(ar4 + 0xeb38);
      dVar9 = 1.4411521620789166e+18;
    }
    if (cVar11 == '\0') {
      fVar8 = F32LO(dVar9) + F32HI(dVar9);
    }
    else {
      fVar8 = SUB84(dVar9 + dVar9,0);
    }
    (*(undefined8 *)(fr0_ - 0x54)) = in_xd0;
    if (cVar12 == '\0') {
      (*(undefined8 *)(fr0_ - 0x54)) = CONCAT44(ar4,fVar8);
    }
    if (cVar12 == '\0') {
      *(float *)(unsigned)((*(uint*)((uchar*)&(*(undefined8 *)(fr0_ - 0x54))+4)) + 0xeb38) = (float)(*(undefined8 *)(fr0_ - 0x54));
      fVar10 = 360.0;
      fVar8 = (float)(*(undefined8 *)(fr0_ - 0x54));
    }
    else {
      *(ulonglong *)(unsigned)((*(uint*)((uchar*)&(*(undefined8 *)(fr0_ - 0x54))+4)) + 0xeb38) = (*(undefined8 *)(fr0_ - 0x54));
      fVar8 = 360.0;
      fVar10 = 2.41023e-43;
      in_xd0 = (*(undefined8 *)(fr0_ - 0x54));
    }
    if (cVar11 == '\0' && fVar10 < fVar8) {
      if (cVar12 == '\0') {
        dVar9 = CONCAT44D(0x43b40000,*(undefined4 *)(unsigned)(ar4 + 0xeb38));
      }
      else {
        in_xd0 = *(ulonglong *)(unsigned)(ar4 + 0xeb38);
        dVar9 = 3.65544470367453e-312;
      }
      if (cVar11 == '\0') {
        fVar8 = F32LO(dVar9) - F32HI(dVar9);
      }
      else {
        fVar8 = SUB84(dVar9 - dVar9,0);
      }
      if (cVar12 == '\0') {
        *(float *)(unsigned)(ar4 + 0xeb38) = fVar8;
      }
      else {
        *(ulonglong *)(unsigned)(ar4 + 0xeb38) = in_xd0;
      }
    }
  }
  if (*(int *)(unsigned)(ar4 + 0xeb44) == 1) {
    iVar3 = 0;
    for (iVar7 = 0; iVar7 < 0x15e; iVar7 = iVar7 + 1) {
      iVar4 = (vsp = ((unsigned long)(fr0_ - 88)), get_field_100_0d1058(ar4 + iVar7 * 0xac + 0xc,ar5,ar6,ar7));
      iVar5 = iVar3;
      if (iVar4 != 1) {
        (vsp = ((unsigned long)(fr0_ - 88)), FUN_8c014be4(ar4 + iVar7 * 0xac + 0xc,0x2f999999,ar6,ar7));
        uVar2 = 0x8c4374d8;
        puVar6 = ((undefined1 *)(fr0_ - 0x20));
        (vsp = ((unsigned long)(fr0_ - 88)), Vec3_assign(puVar6,0x8c4374d8,ar6,ar7));
        (vsp = ((unsigned long)(fr0_ - 88)), rand(puVar6,uVar2,ar6,ar7));
        ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x30))); *(unsigned *)((((unsigned long)(fr0_ - 88)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 88)) - 8); FUN_8c023668(((undefined1 *)(fr0_ - 0x20)),uVar2,ar6,ar7); });
        uVar2 = 0xffffffff;
        puVar6 = ((undefined1 *)(fr0_ - 0x30));
        (vsp = ((unsigned long)(fr0_ - 88)), Vec3_dtor(puVar6,0xffffffff,ar6,ar7));
        iVar5 = (vsp = ((unsigned long)(fr0_ - 88)), rand(puVar6,uVar2,ar6,ar7));
        if (cVar12 == '\0') {
          dVar9 = CONCAT44D(0x47000000,(float)iVar5);
        }
        else {
          dVar9 = 134217763.5;
        }
        if (cVar11 == '\0') {
          fVar8 = F32LO(dVar9) / F32HI(dVar9);
        }
        else {
          fVar8 = SUB84(dVar9 / dVar9,0);
        }
        if (cVar12 == '\0') {
          dVar9 = CONCAT44D(0x41300000,fVar8);
        }
        else {
          dVar9 = 67108880.296875;
        }
        if (cVar11 == '\0') {
          fVar8 = F32LO(dVar9) * F32HI(dVar9);
        }
        else {
          fVar8 = SUB84(dVar9 * dVar9,0);
        }
        if (cVar12 == '\0') {
          dVar9 = CONCAT44D(0x41900000,fVar8);
        }
        else {
          dVar9 = -7.9586651841963e-251;
        }
        if (cVar11 == '\0') {
          fVar8 = F32LO(dVar9) + F32HI(dVar9);
        }
        else {
          fVar8 = SUB84(dVar9 + dVar9,0);
        }
        uVar1 = in_xd0;
        if (cVar12 == '\0') {
          (*(ulonglong *)(fr0_ - 0x38)) = CONCAT44((*(uint*)((uchar*)&(*(ulonglong *)(fr0_ - 0x38))+4)),fVar8);
          uVar1 = (*(ulonglong *)(fr0_ - 0x38));
        }
        (*(ulonglong *)(fr0_ - 0x38)) = uVar1;
        ar5 = (code *)&(*(ulonglong *)(fr0_ - 0x38));
        (vsp = ((unsigned long)(fr0_ - 88)), FUN_8c023bf4(((undefined1 *)(fr0_ - 0x20)),ar5,ar6,ar7));
        (vsp = ((unsigned long)(fr0_ - 88)), FUN_8c014e38(ar4 + iVar7 * 0xac + 0xc,ar5,ar6,ar7));
        iVar5 = iVar3 + 1;
        if (7 < iVar3 + 1) break;
      }
      iVar3 = iVar5;
    }
  }
  (vsp = ((unsigned long)(fr0_ - 88)), FUN_8c0d1060(ar4,ar5,ar6,ar7));
  uVar2 = (vsp = ((unsigned long)(fr0_ - 88)), Vec3_dtor(((undefined1 *)(fr0_ - 0x20)),0xffffffff,ar6,ar7));
  return uVar2;
}

__asm__(".globl _FUN_8c0d0d1c\n.set _FUN_8c0d0d1c, _FUN_8c0d0d1c_def\n");
//@unit 8c0d1058
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
undefined4 get_field_100_0d1058_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "get_field_100_0d1058";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return *(undefined4 *)(unsigned)(ar4 + 100);
}

__asm__(".globl _get_field_100_0d1058\n.set _get_field_100_0d1058, _get_field_100_0d1058_def\n");
//@unit 8c0d1060
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
undefined4 FUN_8c0d1060_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0d1060";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  int *a4;
  int iVar2;
  
  if (*(int *)(unsigned)(ar4 + 0xeb44) == 1) {
    *(float *)(unsigned)(ar4 + 0xeb40) = *(float *)(unsigned)(ar4 + 0xeb40) + 0.05;
    if (100.0 < *(float *)(unsigned)(ar4 + 0xeb40)) {
      *(undefined4 *)(unsigned)(ar4 + 0xeb40) = 0x42c80000;
    }
  }
  else {
    *(float *)(unsigned)(ar4 + 0xeb40) = *(float *)(unsigned)(ar4 + 0xeb40) - 0.00027777778;
    if (*(float *)(unsigned)(ar4 + 0xeb40) < 0.0) {
      *(undefined4 *)(unsigned)(ar4 + 0xeb40) = 0;
    }
  }
  for (iVar2 = 0; iVar2 < 0x15e; iVar2 = iVar2 + 1) {
    iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), get_field_100_0d1058(ar4 + iVar2 * 0xac + 0xc,ar5,ar6,ar7));
    if (iVar1 == 1) {
      a4 = (int *)(unsigned)(ar4 + iVar2 * 0xac + 0xc);
      (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*a4 + 8))))(a4,ar5,ar6,ar7));
    }
  }
  *(short *)(unsigned)(ar4 + 0xeb64) = *(short *)(unsigned)(ar4 + 0xeb64) + 1;
  return 0xeb64;
}

__asm__(".globl _FUN_8c0d1060\n.set _FUN_8c0d1060, _FUN_8c0d1060_def\n");
//@unit 8c0d1168
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
undefined4 FUN_8c0d1168_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0d1168";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 212; for (int i_ = 0; i_ < 212; i_++) z_[i_] = 0; }
  undefined8 uVar1;
  int iVar2;
  undefined4 uVar3;
  int *a4;
  undefined4 ar5_00;
  undefined4 ar6_00;
  undefined4 ar7_00;
  int iVar4;
  float fVar5;
  float fVar7;
  double dVar6;
  undefined8 in_xd0 = 0;
  char cVar8;
  char cVar9;
  
  cVar9 = '\0';
  cVar8 = '\0';
  (vsp = ((unsigned long)(fr0_ - 212)), Vec3_ctor_zero(&(*(float *)(fr0_ - 0x1c)),ar5,ar6,ar7));
  (*(undefined8 *)(fr0_ - 0x4c)) = CONCAT44((*(undefined1 *)(unsigned)0x8c13d420),(*(undefined4 *)(unsigned)(unsigned)0x8c13d41c));
  (*(float *)(fr0_ - 0x44)) = (*(undefined1 *)(unsigned)0x8c13d424);
  (*(float *)(fr0_ - 0x40)) = (*(undefined1 *)(unsigned)0x8c13d428);
  (*(undefined4 *)(fr0_ - 0x3c)) = (*(undefined1 *)(unsigned)0x8c13d42c);
  (*(float *)(fr0_ - 0x38)) = (*(undefined1 *)(unsigned)0x8c13d430);
  (*(float *)(fr0_ - 0x34)) = (*(undefined1 *)(unsigned)0x8c13d434);
  (*(undefined4 *)(fr0_ - 0x30)) = (*(undefined1 *)(unsigned)0x8c13d438);
  (*(float *)(fr0_ - 0x2c)) = (*(undefined1 *)(unsigned)0x8c13d43c);
  (*(float *)(fr0_ - 0x28)) = (*(undefined1 *)(unsigned)0x8c13d440);
  (*(undefined4 *)(fr0_ - 0x24)) = (*(undefined1 *)(unsigned)0x8c13d444);
  (*(float *)(fr0_ - 0x20)) = (*(undefined1 *)(unsigned)0x8c13d448);
  (*(undefined4 *)(fr0_ - 0x5c)) = (*(undefined4 *)(unsigned)(unsigned)0x8c13d44c);
  (*(undefined4 *)(fr0_ - 0x58)) = (*(undefined1 *)(unsigned)0x8c13d450);
  (*(undefined4 *)(fr0_ - 0x54)) = (*(undefined1 *)(unsigned)0x8c13d454);
  (*(undefined4 *)(fr0_ - 0x50)) = (*(undefined1 *)(unsigned)0x8c13d458);
  ar7_00 = 4;
  (vsp = ((unsigned long)(fr0_ - 212)), FUN_8c01642c(((undefined1 *)(fr0_ - 0xb0)),&(*(undefined8 *)(fr0_ - 0x4c)),&(*(undefined4 *)(fr0_ - 0x5c)),4));
  (*(undefined2 *)(fr0_ - 0x6c)) = 0;
  (*(undefined2 *)(fr0_ - 0x6a)) = 0;
  (*(undefined2 *)(fr0_ - 0x68)) = 0;
  (*(undefined2 *)(fr0_ - 0x66)) = 0x7f;
  (*(undefined2 *)(fr0_ - 0x64)) = 0x7f;
  (*(undefined2 *)(fr0_ - 0x62)) = 0x7f;
  (*(undefined2 *)(fr0_ - 0x60)) = 0x7f;
  (*(undefined2 *)(fr0_ - 0x5e)) = 0;
  ar6_00 = 4;
  (vsp = ((unsigned long)(fr0_ - 212)), FUN_8c0164c8(((undefined1 *)(fr0_ - 0xb0)),&(*(undefined2 *)(fr0_ - 0x6c)),4,ar7_00));
  ar5_00 = 0x80000060;
  ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0xd0))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 212)); FUN_8c0d1450(((undefined1 *)(fr0_ - 0xb0)),0x80000060,ar6_00,ar7_00); });
  uVar3 = 0;
  ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0xd0))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 212)); FUN_8c256328(0,ar5_00,ar6_00,ar7_00); });
  (vsp = ((unsigned long)(fr0_ - 212)), FUN_8c019058(uVar3,ar5_00,ar6_00,ar7_00));
  (vsp = ((unsigned long)(fr0_ - 212)), FUN_8c01538c(ar4,ar5_00,ar6_00,ar7_00));
  (vsp = ((unsigned long)(fr0_ - 212)), FUN_8c015af8(ar4 + 8,ar5_00,ar6_00,ar7_00));
  (vsp = ((unsigned long)(fr0_ - 212)), FUN_8c256210(1,ar5_00,ar6_00,ar7_00));
  for (iVar4 = 0; iVar4 < 0x15e; iVar4 = iVar4 + 1) {
    iVar2 = (vsp = ((unsigned long)(fr0_ - 212)), get_field_100_0d1058(ar4 + iVar4 * 0xac + 0xc,ar5_00,ar6_00,ar7_00));
    if (iVar2 == 1) {
      a4 = (int *)(unsigned)(ar4 + iVar4 * 0xac + 0xc);
      (vsp = ((unsigned long)(fr0_ - 212)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*a4 + 0x10))))(a4,ar5_00,ar6_00,ar7_00));
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0xc0))); *(unsigned *)((((unsigned long)(fr0_ - 212)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 212)) - 8); FUN_8c014eac(ar4 + iVar4 * 0xac + 0xc,ar5_00,ar6_00,ar7_00); });
      (vsp = ((unsigned long)(fr0_ - 212)), Vec3_assign(&(*(float *)(fr0_ - 0x1c)),((undefined1 *)(fr0_ - 0xc0)),ar6_00,ar7_00));
      ar5_00 = 0xffffffff;
      (vsp = ((unsigned long)(fr0_ - 212)), Vec3_dtor(((undefined1 *)(fr0_ - 0xc0)),0xffffffff,ar6_00,ar7_00));
      if (cVar9 == '\0') {
        fVar7 = 200.0;
        fVar5 = (*(float *)(fr0_ - 0x18));
      }
      else {
        in_xd0 = CONCAT44((*(float *)(fr0_ - 0x14)),(*(float *)(fr0_ - 0x18)));
        fVar5 = 200.0;
        fVar7 = 1500.0;
      }
      if (cVar8 != '\0' || fVar5 <= fVar7) {
        if (cVar9 == '\0') {
          fVar7 = 1500.0;
          fVar5 = (*(float *)(fr0_ - 0x1c));
        }
        else {
          in_xd0 = CONCAT44((*(float *)(fr0_ - 0x18)),(*(float *)(fr0_ - 0x1c)));
          fVar5 = 1500.0;
          fVar7 = 2.63444e-43;
        }
        if (cVar8 == '\0' && fVar7 < fVar5) {
          if (cVar9 == '\0') {
            fVar7 = 800.0;
            fVar5 = (*(float *)(fr0_ - 0x14));
          }
          else {
            in_xd0 = CONCAT44((*(undefined4 *)(fr0_ - 0x10)),(*(float *)(fr0_ - 0x14)));
            fVar5 = 800.0;
            fVar7 = 12.0;
          }
          if (cVar8 == '\0' && fVar7 < fVar5) {
            if (cVar9 == '\0') {
              dVar6 = CONCAT44D(0x41400000,(*(float *)(fr0_ - 0x1c)));
            }
            else {
              in_xd0 = CONCAT44((*(float *)(fr0_ - 0x18)),(*(float *)(fr0_ - 0x1c)));
              dVar6 = 2.97620270990453e-312;
            }
            if (cVar8 == '\0') {
              fVar5 = F32LO(dVar6) - F32HI(dVar6);
            }
            else {
              fVar5 = SUB84(dVar6 - dVar6,0);
            }
            if (cVar9 == '\0') {
              (*(undefined8 *)(fr0_ - 0x4c)) = CONCAT44((*(uint*)((uchar*)&(*(undefined8 *)(fr0_ - 0x4c))+4)),fVar5);
              dVar6 = CONCAT44D(0x41400000,(*(float *)(fr0_ - 0x14)));
              uVar1 = in_xd0;
            }
            else {
              uVar1 = CONCAT44((*(undefined4 *)(fr0_ - 0x10)),(*(float *)(fr0_ - 0x14)));
              dVar6 = 2.97620270990453e-312;
              (*(undefined8 *)(fr0_ - 0x4c)) = in_xd0;
            }
            if (cVar8 == '\0') {
              (*(float *)(fr0_ - 0x44)) = F32LO(dVar6) - F32HI(dVar6);
            }
            else {
              (*(float *)(fr0_ - 0x44)) = SUB84(dVar6 - dVar6,0);
            }
            if (cVar9 == '\0') {
              dVar6 = CONCAT44D(0x41400000,(*(float *)(fr0_ - 0x1c)));
            }
            else {
              (*(float *)(fr0_ - 0x44)) = (float)uVar1;
              uVar1 = CONCAT44((*(float *)(fr0_ - 0x18)),(*(float *)(fr0_ - 0x1c)));
              dVar6 = 2.97620270990453e-312;
            }
            if (cVar8 == '\0') {
              (*(float *)(fr0_ - 0x40)) = F32LO(dVar6) - F32HI(dVar6);
            }
            else {
              (*(float *)(fr0_ - 0x40)) = SUB84(dVar6 - dVar6,0);
            }
            if (cVar9 == '\0') {
              dVar6 = CONCAT44D(0x41400000,(*(float *)(fr0_ - 0x14)));
            }
            else {
              (*(float *)(fr0_ - 0x40)) = (float)uVar1;
              (*(undefined4 *)(fr0_ - 0x3c)) = (undefined4)((ulonglong)uVar1 >> 0x20);
              uVar1 = CONCAT44((*(undefined4 *)(fr0_ - 0x10)),(*(float *)(fr0_ - 0x14)));
              dVar6 = 2.97620270990453e-312;
            }
            if (cVar8 == '\0') {
              (*(float *)(fr0_ - 0x38)) = F32LO(dVar6) + F32HI(dVar6);
            }
            else {
              (*(float *)(fr0_ - 0x38)) = SUB84(dVar6 + dVar6,0);
            }
            if (cVar9 == '\0') {
              dVar6 = CONCAT44D(0x41400000,(*(float *)(fr0_ - 0x1c)));
            }
            else {
              (*(float *)(fr0_ - 0x38)) = (float)uVar1;
              uVar1 = CONCAT44((*(float *)(fr0_ - 0x18)),(*(float *)(fr0_ - 0x1c)));
              dVar6 = 2.97620270990453e-312;
            }
            if (cVar8 == '\0') {
              (*(float *)(fr0_ - 0x34)) = F32LO(dVar6) + F32HI(dVar6);
            }
            else {
              (*(float *)(fr0_ - 0x34)) = SUB84(dVar6 + dVar6,0);
            }
            if (cVar9 == '\0') {
              dVar6 = CONCAT44D(0x41400000,(*(float *)(fr0_ - 0x14)));
            }
            else {
              (*(float *)(fr0_ - 0x34)) = (float)uVar1;
              (*(undefined4 *)(fr0_ - 0x30)) = (undefined4)((ulonglong)uVar1 >> 0x20);
              uVar1 = CONCAT44((*(undefined4 *)(fr0_ - 0x10)),(*(float *)(fr0_ - 0x14)));
              dVar6 = 2.97620270990453e-312;
            }
            if (cVar8 == '\0') {
              (*(float *)(fr0_ - 0x2c)) = F32LO(dVar6) + F32HI(dVar6);
            }
            else {
              (*(float *)(fr0_ - 0x2c)) = SUB84(dVar6 + dVar6,0);
            }
            if (cVar9 == '\0') {
              dVar6 = CONCAT44D(0x41400000,(*(float *)(fr0_ - 0x1c)));
            }
            else {
              (*(float *)(fr0_ - 0x2c)) = (float)uVar1;
              uVar1 = CONCAT44((*(float *)(fr0_ - 0x18)),(*(float *)(fr0_ - 0x1c)));
              dVar6 = 2.97620270990453e-312;
            }
            if (cVar8 == '\0') {
              (*(float *)(fr0_ - 0x28)) = F32LO(dVar6) + F32HI(dVar6);
            }
            else {
              (*(float *)(fr0_ - 0x28)) = SUB84(dVar6 + dVar6,0);
            }
            if (cVar9 == '\0') {
              dVar6 = CONCAT44D(0x41400000,(*(float *)(fr0_ - 0x14)));
              in_xd0 = uVar1;
            }
            else {
              (*(float *)(fr0_ - 0x28)) = (float)uVar1;
              (*(undefined4 *)(fr0_ - 0x24)) = (undefined4)((ulonglong)uVar1 >> 0x20);
              in_xd0 = CONCAT44((*(undefined4 *)(fr0_ - 0x10)),(*(float *)(fr0_ - 0x14)));
              dVar6 = 2.97620270990453e-312;
            }
            if (cVar8 == '\0') {
              (*(float *)(fr0_ - 0x20)) = F32LO(dVar6) - F32HI(dVar6);
            }
            else {
              (*(float *)(fr0_ - 0x20)) = SUB84(dVar6 - dVar6,0);
            }
            if (cVar9 != '\0') {
              (*(float *)(fr0_ - 0x20)) = (float)in_xd0;
              (*(float *)(fr0_ - 0x1c)) = F32HI(in_xd0);
            }
            (vsp = ((unsigned long)(fr0_ - 212)), FUN_8c01538c(ar4,ar5_00,ar6_00,ar7_00));
            ar5_00 = 1;
            (vsp = ((unsigned long)(fr0_ - 212)), FUN_8c014a94(ar4,1,ar6_00,ar7_00));
            (vsp = ((unsigned long)(fr0_ - 212)), FUN_8c016524(((undefined1 *)(fr0_ - 0xb0)),ar5_00,ar6_00,ar7_00));
          }
        }
      }
    }
  }
  uVar3 = (vsp = ((unsigned long)(fr0_ - 212)), Vec3_dtor(&(*(float *)(fr0_ - 0x1c)),0xffffffff,ar6_00,ar7_00));
  return uVar3;
}

__asm__(".globl _FUN_8c0d1168\n.set _FUN_8c0d1168, _FUN_8c0d1168_def\n");
//@unit 8c0d1450
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
undefined4 FUN_8c0d1450_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0d1450";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 in_r0 = (undefined4)(unsigned long)vin0;
  
  *(undefined4 *)(unsigned)(ar4 + 0x14) = ar5;
  return in_r0 = 0;
}

__asm__(".globl _FUN_8c0d1450\n.set _FUN_8c0d1450, _FUN_8c0d1450_def\n");
//@unit 8c0d1458
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
int FUN_8c0d1458_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0d1458";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  
  iVar1 = 0xeb60;
  *(undefined4 *)(unsigned)(0xeb60 + ar4) = 0;
  return iVar1;
}

__asm__(".globl _FUN_8c0d1458\n.set _FUN_8c0d1458, _FUN_8c0d1458_def\n");
//@unit 8c0d1468
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
int FUN_8c0d1468_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0d1468";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 4; for (int i_ = 0; i_ < 4; i_++) z_[i_] = 0; }
  int iVar1;
  
  iVar1 = *(int *)(unsigned)(0xeb4c + ar4);
  if (iVar1 != -1) {
    (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c021a60(0x8c2b59d0,*(undefined4 *)(unsigned)(0xeb4c + ar4),ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c021a8c(0x8c2b59d0,ar4 + 0xeb4c,ar6,ar7));
    iVar1 = 0xeb4c;
    *(undefined4 *)(unsigned)(0xeb4c + ar4) = 0xffffffff;
  }
  return iVar1;
}

__asm__(".globl _FUN_8c0d1468\n.set _FUN_8c0d1468, _FUN_8c0d1468_def\n");
//@unit 8c0d14b0
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
undefined4
s_Failed_to_set_texture_wrap_0d14b0_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "s_Failed_to_set_texture_wrap_0d14b0";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), s_Failed_to_set_texture_s_015252(ar4,ar5,ar6,ar7));
  return uVar1;
}

__asm__(".globl _s_Failed_to_set_texture_wrap_0d14b0\n.set _s_Failed_to_set_texture_wrap_0d14b0, _s_Failed_to_set_texture_wrap_0d14b0_def\n");
//@unit 8c0d14cc
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
undefined4 s_Failed_wrap_0d14cc_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "s_Failed_wrap_0d14cc";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), s_Failed_s_015312(ar4,ar5,ar6,ar7));
  return uVar1;
}

__asm__(".globl _s_Failed_wrap_0d14cc\n.set _s_Failed_wrap_0d14cc, _s_Failed_wrap_0d14cc_def\n");
//@unit 8c0d14e8
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
int FUN_8c0d14e8_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0d14e8";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  
  iVar1 = *(int *)(unsigned)(0xeb4c + ar4);
  if (iVar1 != -1) {
    iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c021a60(0x8c2b59d0,*(undefined4 *)(unsigned)(0xeb4c + ar4),ar6,ar7));
  }
  return iVar1;
}

__asm__(".globl _FUN_8c0d14e8\n.set _FUN_8c0d14e8, _FUN_8c0d14e8_def\n");
//@unit 8c0d1518
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
int FUN_8c0d1518_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0d1518";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  
  iVar1 = *(int *)(unsigned)(0xeb4c + ar4);
  if (iVar1 != -1) {
    iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c021994(0x8c2b59d0,*(undefined4 *)(unsigned)(0xeb4c + ar4),5,ar7));
  }
  return iVar1;
}

__asm__(".globl _FUN_8c0d1518\n.set _FUN_8c0d1518, _FUN_8c0d1518_def\n");
//@unit 8c0d1548
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
undefined4 FUN_8c0d1548_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0d1548";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0d1564(ar4,ar5,ar6,ar7));
  return uVar1;
}

__asm__(".globl _FUN_8c0d1548\n.set _FUN_8c0d1548, _FUN_8c0d1548_def\n");
//@unit 8c0d1564
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
undefined4 FUN_8c0d1564_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0d1564";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  *(undefined4 *)(unsigned)(ar4 + 0xeb40) = 0;
  *(undefined4 *)(unsigned)(ar4 + 0xeb44) = 0;
  *(undefined4 *)(unsigned)(ar4 + 0xeb34) = 0x40a00000;
  *(undefined4 *)(unsigned)(ar4 + 0xeb38) = 0;
  *(undefined4 *)(unsigned)(ar4 + 0xeb3c) = 0;
  *(undefined4 *)(unsigned)(ar4 + 0xeb60) = 0;
  *(undefined2 *)(unsigned)(ar4 + 0xeb64) = 0;
  return 0xeb64;
}

__asm__(".globl _FUN_8c0d1564\n.set _FUN_8c0d1564, _FUN_8c0d1564_def\n");
//@unit 8c0d15c4
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
undefined4 FUN_8c0d15c4_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0d15c4";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  code *pcVar2;
  undefined4 uVar3;
  char cVar4;
  
  cVar4 = '\0';
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_xyz(((undefined1 *)(unsigned)0x8c126430),ar5,ar6,ar7));
  uVar3 = 0x8c437478;
  pcVar2 = ((void *)0x8c022cb0);
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(uVar1,((void *)0x8c022cb0),0x8c437478,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_xyz(((undefined1 *)(unsigned)0x8c126440),pcVar2,uVar3,ar7));
  uVar3 = 0x8c437484;
  pcVar2 = ((void *)0x8c022cb0);
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(uVar1,((void *)0x8c022cb0),0x8c437484,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_xyz(((undefined1 *)(unsigned)0x8c126450),pcVar2,uVar3,ar7));
  uVar3 = 0x8c437490;
  pcVar2 = ((void *)0x8c022cb0);
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(uVar1,((void *)0x8c022cb0),0x8c437490,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_xyz(((undefined1 *)(unsigned)0x8c126460),pcVar2,uVar3,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(uVar1,((void *)0x8c022cb0),0x8c43749c,ar7));
  if (cVar4 == '\0') {
    (*(undefined4 *)(unsigned)(unsigned)0x8c126470) = CONCAT44((*(undefined1 *)(unsigned)0x8c126474),0x800000);
                    
  }
  else {
    (*(undefined4 *)(unsigned)(unsigned)0x8c126470) = 0xffffffff00800000;
  }
  return 0x8c125864;
}

__asm__(".globl _FUN_8c0d15c4\n.set _FUN_8c0d15c4, _FUN_8c0d15c4_def\n");
//@unit 8c0d167c
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
undefined4 FUN_8c0d167c_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0d167c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 140; for (int i_ = 0; i_ < 140; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  undefined1 *ar5_00;
  
  uVar1 = ar5;
  (vsp = ((unsigned long)(fr0_ - 140)), FUN_8c023e44(((undefined1 *)(fr0_ - 0x48)),ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 140)), FUN_8c023e44(((undefined1 *)(fr0_ - 0x88)),uVar1,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 140)), FUN_8c023e7c(((undefined1 *)(fr0_ - 0x48)),uVar1,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 140)), FUN_8c023e7c(((undefined1 *)(fr0_ - 0x88)),uVar1,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 140)), FUN_8c023ef8(((undefined1 *)(fr0_ - 0x48)),uVar1,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 140)), FUN_8c023ebc(((undefined1 *)(fr0_ - 0x88)),uVar1,ar6,ar7));
  ar5_00 = ((undefined1 *)(fr0_ - 0x88));
  (vsp = ((unsigned long)(fr0_ - 140)), FUN_8c023e98(((undefined1 *)(fr0_ - 0x48)),ar5_00,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 140)), FUN_8c023e7c(((undefined1 *)(fr0_ - 0x88)),ar5_00,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 140)), FUN_8c023f34(((undefined1 *)(fr0_ - 0x88)),ar5_00,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 140)), FUN_8c023e98(((undefined1 *)(fr0_ - 0x48)),((undefined1 *)(fr0_ - 0x88)),ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 140)), FUN_8c024010(((undefined1 *)(fr0_ - 0x48)),ar5,ar4,ar7));
  (vsp = ((unsigned long)(fr0_ - 140)), free_if_nonnull_wrap_023e4c(((undefined1 *)(fr0_ - 0x88)),0xffffffff,ar4,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 140)), free_if_nonnull_wrap_023e4c(((undefined1 *)(fr0_ - 0x48)),0xffffffff,ar4,ar7));
  return uVar1;
}

__asm__(".globl _FUN_8c0d167c\n.set _FUN_8c0d167c, _FUN_8c0d167c_def\n");
//@unit 8c0d1754
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
undefined4 FUN_8c0d1754_def(float *ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0d1754";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 40; for (int i_ = 0; i_ < 40; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float in_PR = 0;
  char cVar5;
  char cVar6;
  
  cVar6 = '\0';
  cVar5 = '\0';
  (*(float *)(fr0_ - 0x10)) = in_PR;
  (vsp = ((unsigned long)(fr0_ - 40)), FUN_8c256294(0,ar5,&(*(float *)(fr0_ - 0x20)),ar7));
  (vsp = ((unsigned long)(fr0_ - 40)), FUN_8c256294(0,ar5,&(*(float *)(fr0_ - 0x18)),ar7));
  for (iVar2 = 1; iVar2 < 8; iVar2 = iVar2 + 1) {
    (vsp = ((unsigned long)(fr0_ - 40)), FUN_8c256294(0,iVar2 * 0xc + ar5,&(*(float *)(fr0_ - 0x28)),ar7));
    fVar3 = (*(float *)(fr0_ - 0x20));
    fVar4 = (*(float *)(fr0_ - 0x1c));
    if (cVar6 == '\0') {
      fVar3 = (*(float *)(fr0_ - 0x28));
      fVar4 = (*(float *)(fr0_ - 0x20));
    }
    if (cVar5 != '\0' || fVar4 <= fVar3) {
      fVar3 = (*(float *)(fr0_ - 0x18));
      fVar4 = (*(float *)(fr0_ - 0x14));
      if (cVar6 == '\0') {
        fVar3 = (*(float *)(fr0_ - 0x28));
        fVar4 = (*(float *)(fr0_ - 0x18));
      }
      if (cVar5 == '\0' && fVar4 < fVar3) {
        if (cVar6 == '\0') {
          (*(float *)(fr0_ - 0x18)) = (*(float *)(fr0_ - 0x28));
        }
        else {
          (*(float *)(fr0_ - 0x18)) = (*(float *)(fr0_ - 0x28));
          (*(float *)(fr0_ - 0x14)) = (*(float *)(fr0_ - 0x24));
        }
      }
    }
    else {
      if (cVar6 != '\0') {
        (*(float *)(fr0_ - 0x1c)) = (*(float *)(fr0_ - 0x24));
      }
      (*(float *)(fr0_ - 0x20)) = (*(float *)(fr0_ - 0x28));
    }
    fVar3 = (*(float *)(fr0_ - 0x1c));
    fVar4 = (*(float *)(fr0_ - 0x18));
    if (cVar6 == '\0') {
      fVar3 = (*(float *)(fr0_ - 0x24));
      fVar4 = (*(float *)(fr0_ - 0x1c));
    }
    if (cVar5 != '\0' || fVar4 <= fVar3) {
      fVar3 = (*(float *)(fr0_ - 0x14));
      fVar4 = (*(float *)(fr0_ - 0x10));
      if (cVar6 == '\0') {
        fVar3 = (*(float *)(fr0_ - 0x24));
        fVar4 = (*(float *)(fr0_ - 0x14));
      }
      if (cVar5 == '\0' && fVar4 < fVar3) {
        if (cVar6 == '\0') {
          (*(float *)(fr0_ - 0x14)) = (*(float *)(fr0_ - 0x24));
        }
        else {
          (*(float *)(fr0_ - 0x14)) = (*(float *)(fr0_ - 0x24));
          (*(float *)(fr0_ - 0x10)) = (*(float *)(fr0_ - 0x20));
        }
      }
    }
    else {
      if (cVar6 != '\0') {
        (*(float *)(fr0_ - 0x18)) = (*(float *)(fr0_ - 0x20));
      }
      (*(float *)(fr0_ - 0x1c)) = (*(float *)(fr0_ - 0x24));
    }
  }
  fVar3 = (*(float *)(fr0_ - 0x20));
  fVar4 = (*(float *)(fr0_ - 0x1c));
  if (cVar6 == '\0') {
    fVar3 = *ar4;
    fVar4 = (*(float *)(fr0_ - 0x20));
  }
  if (cVar5 != '\0' || fVar4 <= fVar3) {
    fVar3 = (*(float *)(fr0_ - 0x18));
    fVar4 = (*(float *)(fr0_ - 0x14));
    if (cVar6 == '\0') {
      fVar3 = *ar4;
      fVar4 = (*(float *)(fr0_ - 0x18));
    }
    if (cVar5 != '\0' || fVar3 <= fVar4) {
      fVar3 = (*(float *)(fr0_ - 0x1c));
      if (cVar6 == '\0') {
        fVar3 = ar4[1];
        (*(float *)(fr0_ - 0x18)) = (*(float *)(fr0_ - 0x1c));
      }
      if (cVar5 != '\0' || (*(float *)(fr0_ - 0x18)) <= fVar3) {
        fVar3 = (*(float *)(fr0_ - 0x14));
        if (cVar6 == '\0') {
          fVar3 = ar4[1];
          (*(float *)(fr0_ - 0x10)) = (*(float *)(fr0_ - 0x14));
        }
        if (cVar5 != '\0' || fVar3 <= (*(float *)(fr0_ - 0x10))) {
          uVar1 = 1;
        }
        else {
          uVar1 = 0;
        }
      }
      else {
        uVar1 = 0;
      }
    }
    else {
      uVar1 = 0;
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

__asm__(".globl _FUN_8c0d1754\n.set _FUN_8c0d1754, _FUN_8c0d1754_def\n");
//@unit 8c0d1858
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
undefined4 FUN_8c0d1858_def(double *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0d1858";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 64; for (int i_ = 0; i_ < 64; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  undefined4 unaff_r14 = 0;
  undefined1 *puVar2;
  undefined4 *puVar3;
  undefined4 in_fr1 = 0;
  double dVar4;
  undefined8 in_dr4 = 0;
  float in_fr15 = 0;
  float fVar5;
  undefined4 in_fr14 = 0;
  undefined8 in_xd14 = 0;
  bool bVar6;
  undefined4 in_PR = 0;
  char in_FPSCR_PR = 0;
  char in_FPSCR_SZ = 0;
  
  if (in_FPSCR_SZ == '\0') {
    puVar2 = ((undefined1 *)(fr0_ - 0x4));
  }
  else {
    puVar2 = ((undefined1 *)(fr0_ - 0x8));
  }
  *(undefined4 *)(unsigned)(puVar2 + -4) = unaff_r14;
  *(undefined4 *)(unsigned)(puVar2 + -8) = in_PR;
  if (in_FPSCR_SZ == '\0') {
    in_fr15 = F32HI(in_dr4);
    dVar4 = CONCAT44D(*(undefined4 *)(unsigned)ar4,in_fr1);
    in_dr4 = in_xd14;
  }
  else {
    dVar4 = *ar4;
  }
  if (in_FPSCR_PR == '\0') {
    bVar6 = in_fr15 < F32HI(dVar4);
  }
  else {
    bVar6 = CONCAT44D(in_fr14,in_fr15) < dVar4;
  }
  if (!bVar6) {
    if (in_FPSCR_SZ == '\0') {
      dVar4 = CONCAT44D(*(undefined4 *)(unsigned)((int)ar4 + 4),SUB84(dVar4,0));
    }
    else {
      dVar4 = *(double *)(unsigned)((int)ar4 + 4);
    }
    if (in_FPSCR_PR == '\0') {
      bVar6 = in_fr15 < F32HI(dVar4);
    }
    else {
      bVar6 = CONCAT44D(in_fr14,in_fr15) < dVar4;
    }
    if (bVar6) {
      *(undefined4 *)(unsigned)(puVar2 + -0x2c) = 0xffcccccc;
      ar5 = 0xffcccccc;
      ar6 = 0xffec1111;
      ar7 = 0xffec1111;
      ({ unsigned long t0_ = (unsigned long)(*(undefined4 *)(unsigned)(puVar2 + -0x2c)
                ); *(unsigned *)((((unsigned long)(fr0_ - 64)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 64)) - 8); (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c0ba3b8))))
                (0x8c2b5628,0xffcccccc,0xffec1111,0xffec1111); });
      goto LAB_8c0d1936;
    }
  }
  if (in_FPSCR_SZ == '\0') {
    dVar4 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 1),SUB84(dVar4,0));
  }
  else {
    dVar4 = ar4[1];
  }
  if (in_FPSCR_PR == '\0') {
    bVar6 = in_fr15 < F32HI(dVar4);
  }
  else {
    bVar6 = CONCAT44D(in_fr14,in_fr15) < dVar4;
  }
  if (!bVar6) {
    if (in_FPSCR_SZ == '\0') {
      dVar4 = CONCAT44D(*(undefined4 *)(unsigned)((int)ar4 + 0xc),SUB84(dVar4,0));
    }
    else {
      dVar4 = *(double *)(unsigned)((int)ar4 + 0xc);
    }
    if (in_FPSCR_PR == '\0') {
      bVar6 = in_fr15 < F32HI(dVar4);
    }
    else {
      bVar6 = CONCAT44D(in_fr14,in_fr15) < dVar4;
    }
    if (bVar6) {
      *(undefined4 *)(unsigned)(puVar2 + -0x2c) = 0xffcccccc;
      ar5 = 0xffcccccc;
      ar6 = 0xffc8c800;
      ar7 = 0xffc8c800;
      ({ unsigned long t0_ = (unsigned long)(*(undefined4 *)(unsigned)(puVar2 + -0x2c)
                ); *(unsigned *)((((unsigned long)(fr0_ - 64)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 64)) - 8); (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c0ba3b8))))
                (0x8c2b5628,0xffcccccc,0xffc8c800,0xffc8c800); });
      goto LAB_8c0d1936;
    }
  }
  if (in_FPSCR_SZ == '\0') {
    dVar4 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 2),SUB84(dVar4,0));
  }
  else {
    dVar4 = ar4[2];
  }
  if (in_FPSCR_PR == '\0') {
    bVar6 = in_fr15 < F32HI(dVar4);
  }
  else {
    bVar6 = CONCAT44D(in_fr14,in_fr15) < dVar4;
  }
  if (!bVar6) {
    if (in_FPSCR_SZ == '\0') {
      dVar4 = CONCAT44D(*(undefined4 *)(unsigned)((int)ar4 + 0x14),SUB84(dVar4,0));
    }
    else {
      dVar4 = *(double *)(unsigned)((int)ar4 + 0x14);
    }
    if (in_FPSCR_PR == '\0') {
      bVar6 = in_fr15 < F32HI(dVar4);
    }
    else {
      bVar6 = CONCAT44D(in_fr14,in_fr15) < dVar4;
    }
    if (bVar6) {
      *(undefined4 *)(unsigned)(puVar2 + -0x2c) = 0xffcccccc;
      ar5 = 0xffcccccc;
      ar6 = 0xff00c1de;
      ar7 = 0xff00c1de;
      ({ unsigned long t0_ = (unsigned long)(*(undefined4 *)(unsigned)(puVar2 + -0x2c)
                ); *(unsigned *)((((unsigned long)(fr0_ - 64)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 64)) - 8); (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c0ba3b8))))
                (0x8c2b5628,0xffcccccc,0xff00c1de,0xff00c1de); });
      goto LAB_8c0d1936;
    }
  }
  if (in_FPSCR_SZ == '\0') {
    dVar4 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 3),SUB84(dVar4,0));
  }
  else {
    dVar4 = ar4[3];
  }
  if (in_FPSCR_PR == '\0') {
    bVar6 = in_fr15 < F32HI(dVar4);
  }
  else {
    bVar6 = CONCAT44D(in_fr14,in_fr15) < dVar4;
  }
  if (!bVar6) {
    if (in_FPSCR_SZ == '\0') {
      dVar4 = CONCAT44D(*(undefined4 *)(unsigned)((int)ar4 + 0x1c),SUB84(dVar4,0));
    }
    else {
      dVar4 = *(double *)(unsigned)((int)ar4 + 0x1c);
    }
    if (in_FPSCR_PR == '\0') {
      bVar6 = in_fr15 < F32HI(dVar4);
    }
    else {
      bVar6 = CONCAT44D(in_fr14,in_fr15) < dVar4;
    }
    if (bVar6) {
      *(undefined4 *)(unsigned)(puVar2 + -0x2c) = 0xffcccccc;
      ar5 = 0xffcccccc;
      ar6 = 0xffc8c800;
      ar7 = 0xffc8c800;
      ({ unsigned long t0_ = (unsigned long)(*(undefined4 *)(unsigned)(puVar2 + -0x2c)
                ); *(unsigned *)((((unsigned long)(fr0_ - 64)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 64)) - 8); (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c0ba3b8))))
                (0x8c2b5628,0xffcccccc,0xffc8c800,0xffc8c800); });
      goto LAB_8c0d1936;
    }
  }
  if (in_FPSCR_SZ == '\0') {
    dVar4 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 4),SUB84(dVar4,0));
  }
  else {
    dVar4 = ar4[4];
  }
  if (in_FPSCR_PR == '\0') {
    bVar6 = in_fr15 < F32HI(dVar4);
  }
  else {
    bVar6 = CONCAT44D(in_fr14,in_fr15) < dVar4;
  }
  if (!bVar6) {
    if (in_FPSCR_SZ == '\0') {
      dVar4 = CONCAT44D(*(undefined4 *)(unsigned)((int)ar4 + 0x24),SUB84(dVar4,0));
    }
    else {
      dVar4 = *(double *)(unsigned)((int)ar4 + 0x24);
    }
    if (in_FPSCR_PR == '\0') {
      bVar6 = F32HI(dVar4) < in_fr15;
    }
    else {
      bVar6 = dVar4 < CONCAT44D(in_fr14,in_fr15);
    }
    if (!bVar6) {
      *(undefined4 *)(unsigned)(puVar2 + -0x2c) = 0xffcccccc;
      ar5 = 0xffcccccc;
      ar6 = 0xffec1111;
      ar7 = 0xffec1111;
      ({ unsigned long t0_ = (unsigned long)(*(undefined4 *)(unsigned)(puVar2 + -0x2c)
                ); *(unsigned *)((((unsigned long)(fr0_ - 64)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 64)) - 8); (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c0ba3b8))))
                (0x8c2b5628,0xffcccccc,0xffec1111,0xffec1111); });
    }
  }
LAB_8c0d1936:
  if (in_FPSCR_SZ == '\0') {
    dVar4 = CONCAT44D((*(undefined1 *)(unsigned)0x8c0d19b8),SUB84(dVar4,0));
  }
  else {
    dVar4 = CONCAT44D((*(undefined1 *)(unsigned)0x8c0d19bc),(*(undefined1 *)(unsigned)0x8c0d19b8));
  }
  if (in_FPSCR_PR == '\0') {
    bVar6 = in_fr15 < F32HI(dVar4);
  }
  else {
    bVar6 = CONCAT44D(in_fr14,in_fr15) < dVar4;
  }
  fVar5 = in_fr15;
  if ((!bVar6) && (fVar5 = (*(undefined1 *)(unsigned)0x8c0d19bc), in_FPSCR_SZ != '\0')) {
    in_dr4 = CONCAT44((&(*(undefined1 *)(unsigned)0x8c13f7c0)),(*(undefined1 *)(unsigned)0x8c0d19bc));
    fVar5 = in_fr15;
  }
  if (in_FPSCR_SZ == '\0') {
    puVar3 = (undefined4 *)(unsigned)(puVar2 + -0x2c);
    *(float *)(unsigned)(puVar2 + -0x2c) = fVar5;
  }
  else {
    puVar3 = (undefined4 *)(unsigned)(puVar2 + -0x30);
    *(undefined8 *)(unsigned)(puVar2 + -0x30) = in_dr4;
  }
  puVar3[-1] = (&(*(undefined1 *)(unsigned)0x8c13f7c0)) + 0xf6;
  ({ unsigned long t0_ = (unsigned long)(puVar3[-1]); *(unsigned *)((((unsigned long)(fr0_ - 64)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 64)) - 8); FUN_8c014334(puVar3 + 1,ar5,ar6,ar7); });
  *(undefined1 *)(unsigned)((int)puVar3 + 9) = 0;
  *puVar3 = 0x1c;
  (vsp = ((unsigned long)(fr0_ - 64)), FUN_8c0c4370(0x8c2b5628,puVar3 + 1,0,0xe));
  *puVar3 = 0xffffffff;
  uVar1 = ({ unsigned long t0_ = (unsigned long)(*puVar3); *(unsigned *)((((unsigned long)(fr0_ - 64)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 64)) - 8); FUN_8c0ba3b8(0x8c2b5628,0xffffffff,0xffffffff,0xffffffff); });
  return uVar1;
}

__asm__(".globl _FUN_8c0d1858\n.set _FUN_8c0d1858, _FUN_8c0d1858_def\n");
//@unit 8c0d19dc
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
int FUN_8c0d19dc_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0d19dc";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int a4;
  int a5;
  int a6;
  
  a5 = ar4;
  a6 = ar5;
  a4 = (vsp = ((unsigned long)(fr0_ - 0)), s_Shell_0fef9c(0x8c3eb324,ar4,ar5,ar7));
  if (a4 != 0) {
    if ((ar4 < 0x10) && (-1 < ar4)) {
                    
      switch((uint)ar4) {
      default:
        a6 = 0;
        a5 = -0x73c14ccc;
        (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(a4 + 8) + 0xe0))))(a4,0x8c3eb334,0,ar7));
        break;
      case 3:
        break;
      }
    }
    if ((ar4 == 3) && (ar5 == 2)) {
      a6 = 0;
      a5 = -0x73c14ccc;
      (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(a4 + 8) + 0xe0))))(a4,0x8c3eb334,0,ar7));
    }
    else if ((ar4 == 3) && (ar5 == 3)) {
      a6 = 3;
      a5 = -0x73c14ccc;
      (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(a4 + 8) + 0xe0))))(a4,0x8c3eb334,3,ar7));
    }
    else if ((ar4 == 3) && (ar5 == 4)) {
      a6 = 6;
      a5 = -0x73c14ccc;
      (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(a4 + 8) + 0xe0))))(a4,0x8c3eb334,6,ar7));
    }
    else if ((ar4 == 5) && (ar5 == 6)) {
      a6 = 0;
      a5 = -0x73c14ccc;
      (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(a4 + 8) + 0xe0))))(a4,0x8c3eb334,0,ar7));
    }
    else if ((ar4 == 5) && (ar5 == 7)) {
      a6 = 3;
      a5 = -0x73c14ccc;
      (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(a4 + 8) + 0xe0))))(a4,0x8c3eb334,3,ar7));
    }
    else if ((ar4 == 10) && (ar5 == 0x11)) {
      a6 = 0;
      a5 = -0x73c14ccc;
      (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(a4 + 8) + 0xe0))))(a4,0x8c3eb334,0,ar7));
    }
    else if ((ar4 == 10) && (ar5 == 0x13)) {
      a6 = 3;
      a5 = -0x73c14ccc;
      (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(a4 + 8) + 0xe0))))(a4,0x8c3eb334,3,ar7));
    }
    (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(a4 + 8) + 0x5c))))(a4,a5,a6,ar7));
  }
  return a4;
}

__asm__(".globl _FUN_8c0d19dc\n.set _FUN_8c0d19dc, _FUN_8c0d19dc_def\n");
//@unit 8c0d1b90
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
undefined4 FUN_8c0d1b90_def(int *ar4,int ar5,int ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0d1b90";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  int a5;
  
  uVar1 = 0;
  if (*ar4 != 0) {
    a5 = ar5;
    (vsp = ((unsigned long)(fr0_ - 0)), get_field_24_05c284(*ar4,ar5,ar6,ar7));
    if (ar5 == 1) {
      uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((0x148 + *(int *)(unsigned)(*ar4 + 8)))))(*ar4,a5,ar6,ar7));
      ar6 = (int)(short)uVar1;
      (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((0xec + *(int *)(unsigned)(*ar4 + 8)))))(*ar4,0x8c3eb334,ar6,ar7));
    }
    (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(*ar4 + 8) + 0x58))))(*ar4,0x8c3eb324,ar6,ar7));
    uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0ff500(0x8c3eb324,ar4,ar6,ar7));
  }
  return uVar1;
}

__asm__(".globl _FUN_8c0d1b90\n.set _FUN_8c0d1b90, _FUN_8c0d1b90_def\n");
//@unit 8c0d1c14
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
undefined1 * FUN_8c0d1c14_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0d1c14";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined1 *puVar1;
  
  puVar1 = 0x8c437864;
  *(undefined4 *)(unsigned)0x8c437864 = (undefined1)ar4;
  return puVar1;
}

__asm__(".globl _FUN_8c0d1c14\n.set _FUN_8c0d1c14, _FUN_8c0d1c14_def\n");
//@unit 8c0d1c20
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
undefined1 * FUN_8c0d1c20_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0d1c20";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined1 *puVar1;
  
  *(undefined4 *)(unsigned)0x8c43785c = ar4;
  *(undefined4 *)(unsigned)0x8c437860 = ar5;
  puVar1 = 0x8c437864;
  *(undefined4 *)(unsigned)0x8c437864 = (undefined1)ar6;
  return puVar1;
}

__asm__(".globl _FUN_8c0d1c20\n.set _FUN_8c0d1c20, _FUN_8c0d1c20_def\n");
//@unit 8c0d1c3c
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
undefined4 FUN_8c0d1c3c_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0d1c3c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  *(undefined4 *)(unsigned)0x8c431a50 = 1;
  if ((*(undefined4 *)(unsigned)0x8c437864 == '\0') || (*(undefined4 *)(unsigned)0x8c437864 == '\x01')) {
    (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0d5e2c(ar4,ar5,ar6,ar7));
  }
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), thunk_FUN_8c20a1d0(0x8c43786c,ar5,ar6,ar7));
  return uVar1;
}

__asm__(".globl _FUN_8c0d1c3c\n.set _FUN_8c0d1c3c, _FUN_8c0d1c3c_def\n");
//@unit 8c0d1c84
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
int FUN_8c0d1c84_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0d1c84";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  int *a4;
  uint a5;
  
  if (*(undefined4 *)(unsigned)0x8c437c5c == '\0') {
    *(undefined4 *)(unsigned)0x8c437c58 = 0;
    *(undefined4 *)(unsigned)0x8c437c5c = '\x01';
  }
  iVar1 = 0;
  if ((*(undefined4 *)(unsigned)0x8c43785c != 0) && (iVar1 = 0, *(undefined4 *)(unsigned)0x8c437860 != 0)) {
    (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c016340(0x8c431294,ar5,ar6,ar7));
    do {
    } while (*(undefined4 *)(unsigned)0x8c431a50 != 1);
    if (*(undefined4 *)(unsigned)0x8c437c58 < 1) {
      iVar1 = *(undefined4 *)(unsigned)0x8c437c58 + 1;
      *(undefined4 *)(unsigned)0x8c437c58 = iVar1;
    }
    else {
      a5 = (uint)*(undefined4 *)(unsigned)0x8c437864;
      a4 = (int *)(unsigned)*(undefined4 *)(unsigned)0x8c43785c;
      (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((0x9c + *a4))))(a4,a5,ar6,ar7));
      (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0f7ea0(a4,a5,ar6,ar7));
      (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((0x98 + *(int *)(unsigned)*(undefined4 *)(unsigned)0x8c437860))))
                ((int *)(unsigned)*(undefined4 *)(unsigned)0x8c437860,(uint)*(undefined4 *)(unsigned)0x8c437864,ar6,ar7));
      *(undefined4 *)(unsigned)0x8c43785c = 0;
      *(undefined4 *)(unsigned)0x8c437860 = 0;
      iVar1 = 0;
      *(undefined4 *)(unsigned)0x8c437c58 = 0;
    }
  }
  return iVar1;
}

__asm__(".globl _FUN_8c0d1c84\n.set _FUN_8c0d1c84, _FUN_8c0d1c84_def\n");
//@unit 8c0d1d54
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
undefined4 FUN_8c0d1d54_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0d1d54";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  int iVar2;
  
  *(undefined4 *)(unsigned)(ar4 + 0x1a0) = 0;
  *(undefined4 *)(unsigned)(ar4 + 0x1b0) = 0;
  *(undefined4 *)(unsigned)(ar4 + 0x1a4) = 0;
  *(undefined1 *)(unsigned)(ar4 + 0x1b4) = 1;
  *(undefined4 *)(unsigned)(ar4 + 0x1b8) = 0;
  *(undefined4 *)(unsigned)(ar4 + 0x1a8) = 0;
  *(undefined4 *)(unsigned)(ar4 + 0x1ac) = 0;
  *(undefined4 *)(unsigned)(ar4 + 0x1bc) = 0x446a56b8;
  *(undefined4 *)(unsigned)(ar4 + 0x1c0) = 0x43340000;
  *(undefined4 *)(unsigned)(ar4 + 0x1c4) = 0x43557405;
  *(undefined4 *)(unsigned)(ar4 + 0x1cc) = 0x4475f20c;
  *(undefined4 *)(unsigned)(ar4 + 0x1d0) = 0x43340000;
  *(undefined4 *)(unsigned)(ar4 + 0x1d4) = 0x44390b33;
  *(undefined4 *)(unsigned)(ar4 + 0x1dc) = 0x440a7a8f;
  *(undefined4 *)(unsigned)(ar4 + 0x1e0) = 0x43340000;
  *(undefined4 *)(unsigned)(ar4 + 0x1e4) = 0x44406fa8;
  for (iVar2 = 0; iVar2 < 0x14; iVar2 = iVar2 + 1) {
    ar6 = 0xf0;
    ar5 = 0x8c437b48;
    (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c013fb4(iVar2 * 0xf0 + ar4 + 0x1ec,0x8c437b48,0xf0,ar7));
  }
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), s_Nautilus_0ae6a4(ar4 + 0x1ec,ar5,ar6,ar7));
  return uVar1;
}

__asm__(".globl _FUN_8c0d1d54\n.set _FUN_8c0d1d54, _FUN_8c0d1d54_def\n");
//@unit 8c0d1eb8
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
undefined4 FUN_8c0d1eb8_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0d1eb8";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  
  *(undefined4 *)(unsigned)(ar4 + 0x14bc) = 0;
  *(undefined1 *)(unsigned)(ar4 + 0x14c0) = 0;
  *(undefined4 *)(unsigned)(ar4 + 0x14b4) = 1;
  *(undefined4 *)(unsigned)(ar4 + 0x14b8) = 1;
  for (iVar1 = 0; iVar1 < 0x14; iVar1 = iVar1 + 1) {
    (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c013fb4(iVar1 * 0xf0 + ar4 + 0x14c4,0x8c437b48,0xf0,ar7));
  }
  return 0x14;
}

__asm__(".globl _FUN_8c0d1eb8\n.set _FUN_8c0d1eb8, _FUN_8c0d1eb8_def\n");
//@unit 8c0d1f38
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
undefined4 FUN_8c0d1f38_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0d1f38";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  
  *(undefined1 *)(unsigned)(0x2790 + ar4) = 0;
  *(undefined4 *)(unsigned)(0x278c + ar4) = 0;
  for (iVar1 = 0; iVar1 < 10; iVar1 = iVar1 + 1) {
    (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c013fb4(iVar1 * 0xf0 + ar4 + 0x2794,0x8c437b48,0xf0,ar7));
  }
  return 10;
}

__asm__(".globl _FUN_8c0d1f38\n.set _FUN_8c0d1f38, _FUN_8c0d1f38_def\n");
//@unit 8c0d1fa0
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
int s_GRAPHICS_ENV_0d1fa0_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "s_GRAPHICS_ENV_0d1fa0";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 ar7_00;
  int iVar1;
  undefined **ar5_00;
  
  ar5_00 = &(*(undefined4 *)(unsigned)(unsigned)0x8c13f33c);
  ({ unsigned long ri0_ = (unsigned long)(ar4); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); Class_129920_m0_015248(0x8c4377f4,&(*(undefined4 *)(unsigned)(unsigned)0x8c13f33c),ar6,ar7); });
  ar7_00 = (vsp = ((unsigned long)(fr0_ - 0)), get_field_4_0253e4(0x8c4377f4,ar5_00,ar6,ar7));
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c020ef0(ar4,((undefined1 *)(unsigned)0x8c13f8be),((undefined1 *)(unsigned)0x8c13f8cb),ar7_00));
  if (iVar1 == 0) {
    iVar1 = report_error_message
                      (((undefined1 *)(unsigned)0x8c13f8d8),
                       ((undefined1 *)(unsigned)0x8c13f8fe),0,2);
  }
  return iVar1;
}

__asm__(".globl _s_GRAPHICS_ENV_0d1fa0\n.set _s_GRAPHICS_ENV_0d1fa0, _s_GRAPHICS_ENV_0d1fa0_def\n");
//@unit 8c0d2028
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
undefined4 FUN_8c0d2028_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0d2028";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c01538c(0x8c4377f4,ar5,ar6,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c014a94(0x8c4377f4,0,ar6,ar7));
  return uVar1;
}

__asm__(".globl _FUN_8c0d2028\n.set _FUN_8c0d2028, _FUN_8c0d2028_def\n");
//@unit 8c0d2050
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
int FUN_8c0d2050_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0d2050";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 4; for (int i_ = 0; i_ < 4; i_++) z_[i_] = 0; }
  int iVar1;
  
  (vsp = ((unsigned long)(fr0_ - 4)), Vec3_ctor_zero(ar4,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c023dac(ar4 + 0x10,ar5,ar6,ar7));
  for (iVar1 = 0; iVar1 < 4; iVar1 = iVar1 + 1) {
    *(undefined4 *)(unsigned)(ar4 + iVar1 * 4 + 0x2c) = 0xffffffff;
  }
  *(undefined4 *)(unsigned)(ar4 + 0x3c) = 3;
  (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c0d25a0(ar4,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c0d20bc(ar4,ar5,ar6,ar7));
  return ar4;
}

__asm__(".globl _FUN_8c0d2050\n.set _FUN_8c0d2050, _FUN_8c0d2050_def\n");
//@unit 8c0d20bc
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
undefined4 FUN_8c0d20bc_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0d20bc";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 extraout_fr1 = 0;
  char cVar1;
  
  cVar1 = '\0';
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c08a9b8(ar4 + 0x10,ar5,ar6,ar7));
  if (cVar1 == '\0') {
    *(undefined4 *)(unsigned)(ar4 + 0x1c) = 0x3f800000;
  }
  else {
    *(undefined8 *)(unsigned)(ar4 + 0x1c) = CONCAT44(0x3f800000,extraout_fr1);
  }
  *(undefined2 *)(unsigned)(ar4 + 0x24) = 0;
  *(undefined4 *)(unsigned)(ar4 + 0x28) = 0;
  *(undefined4 *)(unsigned)(ar4 + 0x40) = 0;
  return 0x40;
}

__asm__(".globl _FUN_8c0d20bc\n.set _FUN_8c0d20bc, _FUN_8c0d20bc_def\n");
//@unit 8c0d20f0
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
undefined4 FUN_8c0d20f0_def(int ar4,undefined4 ar5,int ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0d20f0";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 in_fr4 = 0;
  
  *(undefined4 *)(unsigned)(ar4 + 0x18) = in_fr4;
  *(undefined4 *)(unsigned)(ar4 + 0x14) = in_fr4;
  *(undefined4 *)(unsigned)(ar4 + 0x10) = in_fr4;
  if (ar6 == 4) {
    *(float *)(unsigned)(ar4 + 0x10) = *(float *)(unsigned)(ar4 + 0x10) * 1.5;
    *(float *)(unsigned)(ar4 + 0x14) = *(float *)(unsigned)(ar4 + 0x14) * 1.5;
    *(float *)(unsigned)(ar4 + 0x18) = *(float *)(unsigned)(ar4 + 0x18) * 1.5;
  }
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0d25a0(ar4,ar5,ar6,ar7));
  *(undefined2 *)(unsigned)(ar4 + 0x24) = 0;
  *(undefined4 *)(unsigned)(ar4 + 0x28) = ar5;
  *(int *)(unsigned)(ar4 + 0x3c) = ar6;
  return ar5;
}

__asm__(".globl _FUN_8c0d20f0\n.set _FUN_8c0d20f0, _FUN_8c0d20f0_def\n");
//@unit 8c0d21a0
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
//@unit 8c0d2264
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
undefined4 FUN_8c0d2264_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0d2264";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int *piVar1;
  undefined4 uVar2;
  undefined4 ar4_00;
  int ar4_01;
  undefined4 uVar3;
  
  uVar2 = ar6;
  uVar3 = ar5;
  piVar1 = (int *)(unsigned)(vsp = ((unsigned long)(fr0_ - 0)), get_field_4_0253e4(ar5,ar5,ar6,ar7));
  ar4_00 = 0;
  ({ unsigned long ri0_ = (unsigned long)(uVar3); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); FUN_8c256328(0,ar5,uVar2,ar7); });
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c019058(ar4_00,ar5,uVar2,ar7));
  uVar3 = *(undefined4 *)(unsigned)(*piVar1 + 8);
  *(undefined4 *)(unsigned)(*piVar1 + 8) = *(undefined4 *)(unsigned)(*(short *)(unsigned)(ar4 + 0x24) * 0xc + *piVar1 + 8);
  *(undefined4 *)(unsigned)(*(short *)(unsigned)(ar4 + 0x24) * 0xc + *piVar1 + 8) = uVar3;
  uVar3 = *(undefined4 *)(unsigned)(*piVar1 + 0xf8);
  *(undefined4 *)(unsigned)(*piVar1 + 0xf8) =
       *(undefined4 *)(unsigned)((*(short *)(unsigned)(ar4 + 0x24) + 0x14) * 0xc + *piVar1 + 8);
  *(undefined4 *)(unsigned)((*(short *)(unsigned)(ar4 + 0x24) + 0x14) * 0xc + *piVar1 + 8) = uVar3;
  uVar3 = *(undefined4 *)(unsigned)(*piVar1 + 0x1e8);
  ar4_01 = *piVar1;
  *(undefined4 *)(unsigned)(ar4_01 + 0x1e8) =
       *(undefined4 *)(unsigned)((*(short *)(unsigned)(ar4 + 0x24) + 0x28) * 0xc + *piVar1 + 8);
  *(undefined4 *)(unsigned)((*(short *)(unsigned)(ar4 + 0x24) + 0x28) * 0xc + *piVar1 + 8) = uVar3;
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c019198(ar4_01,ar5,uVar2,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c015adc(ar6,ar5,uVar2,ar7));
  uVar3 = *(undefined4 *)(unsigned)(*(short *)(unsigned)(ar4 + 0x24) * 0xc + *piVar1 + 8);
  *(undefined4 *)(unsigned)(*(short *)(unsigned)(ar4 + 0x24) * 0xc + *piVar1 + 8) = *(undefined4 *)(unsigned)(*piVar1 + 8);
  *(undefined4 *)(unsigned)(*piVar1 + 8) = uVar3;
  uVar3 = *(undefined4 *)(unsigned)((*(short *)(unsigned)(ar4 + 0x24) + 0x14) * 0xc + *piVar1 + 8);
  *(undefined4 *)(unsigned)((*(short *)(unsigned)(ar4 + 0x24) + 0x14) * 0xc + *piVar1 + 8) =
       *(undefined4 *)(unsigned)(*piVar1 + 0xf8);
  *(undefined4 *)(unsigned)(*piVar1 + 0xf8) = uVar3;
  uVar3 = *(undefined4 *)(unsigned)((*(short *)(unsigned)(ar4 + 0x24) + 0x28) * 0xc + *piVar1 + 8);
  *(undefined4 *)(unsigned)((*(short *)(unsigned)(ar4 + 0x24) + 0x28) * 0xc + *piVar1 + 8) =
       *(undefined4 *)(unsigned)(*piVar1 + 0x1e8);
  *(undefined4 *)(unsigned)(*piVar1 + 0x1e8) = uVar3;
  uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c256210(1,ar5,uVar2,ar7));
  return uVar2;
}

__asm__(".globl _FUN_8c0d2264\n.set _FUN_8c0d2264, _FUN_8c0d2264_def\n");
//@unit 8c0d2478
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
undefined4 FUN_8c0d2478_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0d2478";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int *piVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int ar6_00;
  undefined4 uVar4;
  undefined4 uVar5;
  
  uVar3 = ar5;
  uVar4 = ar7;
  uVar5 = ar6;
  piVar1 = (int *)(unsigned)(vsp = ((unsigned long)(fr0_ - 0)), get_field_4_0253e4(ar5,ar5,ar6,ar7));
  uVar2 = 0;
  ({ unsigned long ri0_ = (unsigned long)(uVar5); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); FUN_8c256328(0,uVar3,ar6,uVar4); });
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c019058(uVar2,uVar3,ar6,uVar4));
  uVar4 = 4;
  ar6_00 = ar4 + 0x2c;
  uVar3 = ar7;
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c016464(ar7,uVar5,ar6_00,4));
  uVar2 = *(undefined4 *)(unsigned)(*piVar1 + 8);
  *(undefined4 *)(unsigned)(*piVar1 + 8) = *(undefined4 *)(unsigned)(*(short *)(unsigned)(ar4 + 0x24) * 0xc + *piVar1 + 8);
  *(undefined4 *)(unsigned)(*(short *)(unsigned)(ar4 + 0x24) * 0xc + *piVar1 + 8) = uVar2;
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c019198(uVar3,uVar5,ar6_00,uVar4));
  uVar3 = 0;
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c014a94(ar5,0,ar6_00,uVar4));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c016524(ar7,uVar3,ar6_00,uVar4));
  uVar5 = *(undefined4 *)(unsigned)(*(short *)(unsigned)(ar4 + 0x24) * 0xc + *piVar1 + 8);
  *(undefined4 *)(unsigned)(*(short *)(unsigned)(ar4 + 0x24) * 0xc + *piVar1 + 8) = *(undefined4 *)(unsigned)(*piVar1 + 8);
  *(undefined4 *)(unsigned)(*piVar1 + 8) = uVar5;
  uVar3 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c256210(1,uVar3,ar6_00,uVar4));
  return uVar3;
}

__asm__(".globl _FUN_8c0d2478\n.set _FUN_8c0d2478, _FUN_8c0d2478_def\n");
//@unit 8c0d25a0
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
undefined4 * FUN_8c0d25a0_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0d25a0";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  *(undefined4 *)(unsigned)(ar4 + 0x1c) = 0x3f800000;
  *(undefined4 *)(unsigned)(ar4 + 0x20) = 0;
  return (undefined4 *)(unsigned)(ar4 + 0x1c);
}

__asm__(".globl _FUN_8c0d25a0\n.set _FUN_8c0d25a0, _FUN_8c0d25a0_def\n");
//@unit 8c0d25b4
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
int FUN_8c0d25b4_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0d25b4";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_zero(ar4,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_zero(ar4 + 0x18,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_zero(ar4 + 0x28,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c015ff0(ar4 + 0x48,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0d2f14(ar4,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c014a0c(ar4 + 0x48,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c014a20(ar4 + 0x48,ar5,ar6,ar7));
  return ar4;
}

__asm__(".globl _FUN_8c0d25b4\n.set _FUN_8c0d25b4, _FUN_8c0d25b4_def\n");
//@unit 8c0d261c
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
undefined4 FUN_8c0d261c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0d261c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 ar5_00;
  undefined4 uVar1;
  undefined4 ar4_00;
  
  uVar1 = ar6;
  ar4_00 = ar5;
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0d2f14(ar4,ar5,ar6,ar7));
  ar5_00 = (vsp = ((unsigned long)(fr0_ - 0)), get_field_4_0253e4(ar4_00,ar5,uVar1,ar7));
  ({ unsigned long ri0_ = (unsigned long)(ar4_00); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); FUN_8c015ccc(ar4 + 0x48,ar5_00,uVar1,ar7); });
  ({ unsigned long ri0_ = (unsigned long)(ar4_00); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); FUN_8c015cd4(ar4 + 0x48,ar6,uVar1,ar7); });
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0d267c(ar4 + 0x48,ar6,uVar1,ar7));
  return uVar1;
}

__asm__(".globl _FUN_8c0d261c\n.set _FUN_8c0d261c, _FUN_8c0d261c_def\n");
//@unit 8c0d267c
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
uint FUN_8c0d267c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0d267c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  uint uVar1;
  
  uVar1 = *(uint *)(unsigned)(ar4 + 0x28) | 2;
  *(uint *)(unsigned)(ar4 + 0x28) = uVar1;
  return uVar1;
}

__asm__(".globl _FUN_8c0d267c\n.set _FUN_8c0d267c, _FUN_8c0d267c_def\n");
//@unit 8c0d2690
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
undefined4 FUN_8c0d2690_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0d2690";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0d2f14(ar4,ar5,ar6,ar7));
  return uVar1;
}

__asm__(".globl _FUN_8c0d2690\n.set _FUN_8c0d2690, _FUN_8c0d2690_def\n");
//@unit 8c0d26ac
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
undefined4 FUN_8c0d26ac_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0d26ac";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0d26f0(ar4,ar5,ar6,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0d276c(ar4,ar5,ar6,ar7));
  return uVar1;
}

__asm__(".globl _FUN_8c0d26ac\n.set _FUN_8c0d26ac, _FUN_8c0d26ac_def\n");
//@unit 8c0d26f0
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
//@unit 8c0d276c
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
undefined4 FUN_8c0d276c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0d276c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 44; for (int i_ = 0; i_ < 44; i_++) z_[i_] = 0; }
  int iVar1;
  int iVar2;
  undefined4 in_fr1 = 0;
  float fVar3;
  double dVar4;
  float fVar6;
  undefined1 *puVar7;
  double dVar5;
  undefined4 in_fr3 = 0;
  undefined4 uVar8;
  undefined8 in_dr4 = 0;
  undefined8 in_dr6 = 0;
  undefined4 in_fr13 = 0;
  double dVar9;
  undefined4 uVar11;
  double dVar10;
  double in_xd0 = 0;
  double dVar12;
  double in_xd12 = 0;
  double in_xd14 = 0;
  bool bVar13;
  char cVar14;
  char cVar15;
  
  cVar15 = '\0';
  cVar14 = '\0';
  uVar11 = (undefined4)((ulonglong)in_dr4 >> 0x20);
  uVar8 = (undefined4)in_dr4;
  dVar9 = CONCAT44D((int)((ulonglong)in_dr6 >> 0x20),in_fr13);
  iVar2 = ar4;
  iVar1 = (vsp = ((unsigned long)(fr0_ - 44)), rand(ar4,ar5,ar6,ar7));
  if (cVar15 == '\0') {
    dVar4 = CONCAT44D(0x47000000,in_fr1);
  }
  else {
    dVar4 = 0.1250000330619514;
  }
  if (cVar14 == '\0') {
    dVar10 = CONCAT44D(uVar11,(float)iVar1 / F32HI(dVar4));
  }
  else {
    dVar10 = CONCAT44D(uVar11,(float)iVar1) / dVar4;
  }
  if (cVar15 == '\0') {
    dVar4 = CONCAT44D(0x3fc00000,SUB84(dVar4,0));
  }
  else {
    dVar4 = 1.3411048264966308e-08;
  }
  if (cVar14 == '\0') {
    bVar13 = F32HI(dVar10) < F32HI(dVar4);
  }
  else {
    bVar13 = dVar10 < dVar4;
  }
  fVar3 = F32LO(dVar10);
  if (bVar13) {
    if (cVar15 == '\0') {
      *(undefined4 *)(unsigned)(ar4 + 0x84) = 0x3f800000;
      dVar4 = CONCAT44D(0x41033333,fVar3);
    }
    else {
      *(undefined8 *)(unsigned)(ar4 + 0x84) = CONCAT44(0x3f800000,SUB84(dVar4,0));
      dVar4 = 512.000124001503;
      in_xd0 = in_xd14;
    }
    if (cVar14 == '\0') {
      fVar3 = F32LO(dVar4) * F32HI(dVar4);
    }
    else {
      fVar3 = SUB84(dVar4 * dVar4,0);
    }
    if (cVar15 == '\0') {
      dVar4 = CONCAT44D(0x40800000,fVar3);
    }
    else {
      dVar4 = 2.80638087878186e-312;
    }
    if (cVar14 == '\0') {
      fVar3 = F32LO(dVar4) + F32HI(dVar4);
    }
    else {
      fVar3 = SUB84(dVar4 + dVar4,0);
    }
    if (cVar15 == '\0') {
      *(float *)(unsigned)(ar4 + 0x10) = fVar3;
    }
    else {
      *(double *)(unsigned)(ar4 + 0x10) = in_xd0;
    }
  }
  else {
    if (cVar15 == '\0') {
      dVar9 = CONCAT44D((int)(D2U(dVar9) >> 0x20),fVar3);
      fVar6 = 0.2;
    }
    else {
      fVar3 = 0.2;
      fVar6 = 0.3;
      in_xd0 = in_xd14;
      in_xd12 = in_xd14;
    }
    if (cVar14 == '\0' && fVar3 < fVar6) {
      if (cVar15 == '\0') {
        dVar9 = CONCAT44D((int)(D2U(dVar9) >> 0x20),0x3e99999a);
      }
      else {
        in_xd12 = 157286.40556640626;
      }
    }
    if (cVar15 == '\0') {
      dVar4 = CONCAT44D(0x41033333,fVar3);
    }
    else {
      dVar4 = 512.000124001503;
    }
    if (cVar14 == '\0') {
      dVar9 = CONCAT44D((int)(D2U(dVar9) >> 0x20),
                               F32LO(dVar9) * F32HI(dVar4));
    }
    else {
      dVar9 = dVar9 * dVar4;
    }
    if (cVar15 == '\0') {
      dVar4 = CONCAT44D(0x40800000,SUB84(dVar4,0));
    }
    else {
      dVar4 = 2.80638087878186e-312;
    }
    if (cVar14 == '\0') {
      dVar9 = CONCAT44D((int)(D2U(dVar9) >> 0x20),
                               F32LO(dVar9) + F32HI(dVar4));
    }
    else {
      dVar9 = dVar9 + dVar4;
    }
    if (cVar15 == '\0') {
      *(int *)(unsigned)(ar4 + 0x10) = SUB84(dVar9,0);
      *(undefined4 *)(unsigned)(ar4 + 0x84) = 0x40400000;
    }
    else {
      *(double *)(unsigned)(ar4 + 0x10) = in_xd12;
      *(undefined8 *)(unsigned)(ar4 + 0x84) = 0x40b47ae140400000;
    }
  }
  if (cVar15 == '\0') {
    fVar3 = *(float *)(unsigned)(ar4 + 0x10);
    puVar7 = (undefined1 *)(unsigned)0x40b47ae1;
  }
  else {
    in_xd0 = *(double *)(unsigned)(ar4 + 0x10);
    fVar3 = 5.64;
    puVar7 = ((undefined1 *)(unsigned)0x8c437c60);
  }
  if (cVar14 != '\0' || (float)(uint)puVar7 <= fVar3) {
    *(undefined4 *)(unsigned)(ar4 + 0x14) = 1;
  }
  else {
    *(undefined4 *)(unsigned)(ar4 + 0x14) = 0;
  }
  iVar1 = (vsp = ((unsigned long)(fr0_ - 44)), rand(iVar2,ar5,ar6,ar7));
  if (cVar14 == '\0') {
    dVar4 = CONCAT44D((float)iVar1,in_fr3);
  }
  else {
    dVar4 = (double)iVar1;
  }
  if (cVar15 == '\0') {
    dVar5 = CONCAT44D(0x47000000,fVar3);
  }
  else {
    dVar5 = 0.1250000330619514;
  }
  fVar3 = F32HI(dVar5);
  if (cVar14 == '\0') {
    dVar4 = CONCAT44D(F32HI(dVar4) / fVar3,SUB84(dVar4,0));
  }
  else {
    dVar4 = dVar4 / dVar5;
  }
  dVar12 = dVar9;
  if (cVar15 == '\0') {
    dVar5 = CONCAT44D(fVar3,(int)(D2U(dVar9) >> 0x20));
    dVar12 = in_xd0;
  }
  if (cVar14 == '\0') {
    fVar3 = F32LO(dVar5) * F32HI(dVar4);
  }
  else {
    fVar3 = SUB84(dVar5 * dVar4,0);
  }
  if (cVar15 == '\0') {
    dVar4 = CONCAT44D(uVar8,fVar3);
  }
  else {
    dVar4 = CONCAT44D((*(float *)(fr0_ - 0x2c)),uVar8);
  }
  if (cVar14 == '\0') {
    (*(undefined4 *)(unsigned)(unsigned)0x8c437c60) = F32LO(dVar4) + F32HI(dVar4);
  }
  else {
    (*(undefined4 *)(unsigned)(unsigned)0x8c437c60) = SUB84(dVar4 + dVar4,0);
  }
  if (cVar15 != '\0') {
    (*(undefined4 *)(unsigned)(unsigned)0x8c437c60) = SUB84(dVar12,0);
    (*(undefined4 *)(unsigned)(unsigned)0x8c437c64) = (undefined4)(D2U(dVar12) >> 0x20);
  }
  iVar2 = (vsp = ((unsigned long)(fr0_ - 44)), rand(iVar2,ar5,ar6,ar7));
  if (cVar15 == '\0') {
    dVar4 = CONCAT44D(0x47000000,(float)iVar2);
  }
  else {
    dVar4 = 0.1250000330619514;
  }
  if (cVar14 == '\0') {
    fVar3 = F32LO(dVar4) / F32HI(dVar4);
    dVar9 = CONCAT44D(F32HI(dVar9) * fVar3,SUB84(dVar9,0));
  }
  else {
    fVar3 = SUB84(dVar4 / dVar4,0);
    dVar9 = dVar9 * (dVar4 / dVar4);
  }
  if (cVar15 == '\0') {
    dVar4 = CONCAT44D(uVar8,fVar3);
  }
  else {
    dVar4 = CONCAT44D((*(float *)(fr0_ - 0x2c)),uVar8);
  }
  if (cVar14 == '\0') {
    dVar9 = CONCAT44D(F32HI(dVar9) + F32HI(dVar4),
                             SUB84(dVar9,0));
  }
  else {
    dVar9 = dVar9 + dVar4;
  }
  uVar11 = (undefined4)(D2U(dVar9) >> 0x20);
  if (cVar15 == '\0') {
    dVar9 = CONCAT44D(0x3e4ccccd,SUB84(dVar4,0));
    (*(undefined4 *)(unsigned)(unsigned)0x8c437c64) = uVar11;
  }
  else {
    (*(undefined4 *)(unsigned)(unsigned)0x8c437c64) = SUB84(dVar9,0);
    dVar9 = 3.8146987284548574e-07;
    (*(undefined4 *)(unsigned)(unsigned)0x8c437c68) = uVar11;
  }
  if (cVar14 == '\0') {
    bVar13 = SUB84(dVar10,0) < F32HI(dVar9);
  }
  else {
    bVar13 = dVar10 < dVar9;
  }
  if (bVar13) {
    if (cVar15 == '\0') {
      (*(undefined4 *)(unsigned)(unsigned)0x8c437c64) = 0;
      (*(undefined4 *)(unsigned)(unsigned)0x8c437c60) = 0.0;
    }
    else {
      (*(float *)(fr0_ - 0x2c)) = SUB84(dVar9,0);
      (*(undefined4 *)(unsigned)(unsigned)0x8c437c68) = 0;
      (*(undefined4 *)(unsigned)(unsigned)0x8c437c60) = (*(float *)(fr0_ - 0x2c));
      (*(undefined4 *)(unsigned)(unsigned)0x8c437c64) = 0;
    }
  }
  if (cVar15 == '\0') {
    dVar9 = CONCAT44D(0x41f00000,(*(undefined4 *)(unsigned)(unsigned)0x8c437c60));
  }
  else {
    dVar12 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c437c64),(*(undefined4 *)(unsigned)(unsigned)0x8c437c60));
    dVar9 = -7.933197385572896e-251;
  }
  if (cVar14 == '\0') {
    fVar3 = F32LO(dVar9) / F32HI(dVar9);
  }
  else {
    fVar3 = SUB84(dVar9 / dVar9,0);
  }
  if (cVar15 == '\0') {
    *(float *)(unsigned)(ar4 + 0x28) = -fVar3;
  }
  else {
    *(double *)(unsigned)(ar4 + 0x28) = dVar12;
  }
  if (cVar15 == '\0') {
    *(undefined4 *)(unsigned)(ar4 + 0x2c) = 0;
    dVar9 = CONCAT44D(0x41f00000,(*(undefined4 *)(unsigned)(unsigned)0x8c437c64));
  }
  else {
    *(ulonglong *)(unsigned)(ar4 + 0x2c) = (ulonglong)(uint)-fVar3;
    dVar12 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c437c68),(*(undefined4 *)(unsigned)(unsigned)0x8c437c64));
    dVar9 = -7.933197385572896e-251;
  }
  if (cVar14 == '\0') {
    fVar3 = F32LO(dVar9) / F32HI(dVar9);
  }
  else {
    fVar3 = SUB84(dVar9 / dVar9,0);
  }
  if (cVar15 == '\0') {
    *(float *)(unsigned)(ar4 + 0x30) = -fVar3;
  }
  else {
    *(double *)(unsigned)(ar4 + 0x30) = dVar12;
  }
  (vsp = ((unsigned long)(fr0_ - 44)), FUN_8c022d04(ar4 + 0x18,ar5,ar6,ar7));
  if (cVar15 == '\0') {
    dVar9 = CONCAT44D(0x3ee66666,*(undefined4 *)(unsigned)(ar4 + 0x10));
  }
  else {
    dVar12 = *(double *)(unsigned)(ar4 + 0x10);
    dVar9 = 1.1709360719622307e+17;
  }
  if (cVar14 == '\0') {
    fVar3 = F32LO(dVar9) * F32HI(dVar9);
  }
  else {
    fVar3 = SUB84(dVar9 * dVar9,0);
  }
  if (cVar15 == '\0') {
    *(float *)(unsigned)(ar4 + 0x38) = fVar3;
    dVar9 = CONCAT44D(0x437a0000,fVar3);
  }
  else {
    *(double *)(unsigned)(ar4 + 0x38) = dVar12;
    dVar9 = 985162559995904.0;
  }
  if (cVar14 == '\0') {
    fVar3 = F32LO(dVar10) * F32HI(dVar9);
  }
  else {
    fVar3 = SUB84(dVar10 * dVar9,0);
  }
  if (cVar15 == '\0') {
    *(float *)(unsigned)(ar4 + 0x3c) = fVar3;
    dVar9 = CONCAT44D(0x430c0000,*(undefined4 *)(unsigned)(ar4 + 0x10));
  }
  else {
    *(double *)(unsigned)(ar4 + 0x3c) = in_xd14;
    dVar9 = 6.207226637267681e-78;
  }
  if (cVar14 == '\0') {
    dVar9 = CONCAT44D(F32HI(dVar9) / F32LO(dVar9),SUB84(dVar9,0));
  }
  else {
    dVar9 = dVar9 / dVar9;
  }
  if (cVar15 == '\0') {
    *(int *)(unsigned)(ar4 + 0x40) = (int)(D2U(dVar9) >> 0x20);
  }
  else {
    *(double *)(unsigned)(ar4 + 0x40) = dVar9;
  }
  *(undefined4 *)(unsigned)(ar4 + 0x7c) = 0;
  return 0x7c;
}

__asm__(".globl _FUN_8c0d276c\n.set _FUN_8c0d276c, _FUN_8c0d276c_def\n");
//@unit 8c0d294c
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
undefined4 FUN_8c0d294c_def(undefined1 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0d294c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 80; for (int i_ = 0; i_ < 80; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 uVar2;
  undefined1 *ar5_00;
  undefined1 *puVar3;
  float fVar4;
  double in_dr0 = 0;
  code *pcVar6;
  double dVar5;
  undefined8 in_dr4 = 0;
  float fVar7;
  undefined4 in_fr14 = 0;
  undefined8 in_xd14 = 0;
  bool bVar8;
  char cVar9;
  char cVar10;
  
  cVar10 = '\0';
  cVar9 = '\0';
  fVar7 = F32HI(in_dr4);
  (vsp = ((unsigned long)(fr0_ - 80)), Vec3_ctor_zero(&(*(undefined4 *)(fr0_ - 0x1c)),ar5,ar6,ar7));
  ar5_00 = ar4 + 0x18;
  puVar3 = ar4;
  (vsp = ((unsigned long)(fr0_ - 80)), FUN_8c023aa0(ar4,ar5_00,ar6,ar7));
  fVar4 = F32LO(in_dr0);
  iVar1 = *(int *)(unsigned)(ar4 + 0x74);
  if (iVar1 == 0) {
    puVar3 = ar4 + 0x28;
    (vsp = ((unsigned long)(fr0_ - 80)), FUN_8c023aa0(ar4 + 0x18,puVar3,ar6,ar7));
    if (cVar10 == '\0') {
      fVar4 = *(float *)(unsigned)(ar4 + 0x28);
    }
    if (cVar9 != '\0' || 0.0 <= fVar4) {
      if (cVar10 == '\0') {
        fVar4 = *(float *)(unsigned)(ar4 + 0x28);
      }
      if (cVar9 == '\0' && 0.0 < fVar4) {
        if (cVar10 == '\0') {
          fVar4 = *(float *)(unsigned)(ar4 + 0x18);
        }
        if (cVar9 == '\0' && 0.0 < fVar4) {
          if (cVar10 == '\0') {
            *(undefined4 *)(unsigned)(ar4 + 0x18) = 0;
          }
          else {
            *(ulonglong *)(unsigned)(ar4 + 0x18) = (ulonglong)(uint)fVar4;
          }
        }
      }
    }
    else {
      if (cVar10 == '\0') {
        fVar4 = *(float *)(unsigned)(ar4 + 0x18);
      }
      if (cVar9 == '\0' && fVar4 < 0.0) {
        if (cVar10 == '\0') {
          *(undefined4 *)(unsigned)(ar4 + 0x18) = 0;
        }
        else {
          *(ulonglong *)(unsigned)(ar4 + 0x18) = (ulonglong)(uint)fVar4;
        }
      }
    }
    if (cVar10 == '\0') {
      fVar4 = *(float *)(unsigned)(ar4 + 0x30);
    }
    if (cVar9 != '\0' || 0.0 <= fVar4) {
      if (cVar10 == '\0') {
        fVar4 = *(float *)(unsigned)(ar4 + 0x30);
      }
      if (cVar9 == '\0' && 0.0 < fVar4) {
        if (cVar10 == '\0') {
          fVar4 = *(float *)(unsigned)(ar4 + 0x20);
        }
        if (cVar9 == '\0' && 0.0 < fVar4) {
          if (cVar10 == '\0') {
            *(undefined4 *)(unsigned)(ar4 + 0x20) = 0;
          }
          else {
            *(ulonglong *)(unsigned)(ar4 + 0x20) = (ulonglong)(uint)fVar4;
          }
        }
      }
    }
    else {
      if (cVar10 == '\0') {
        fVar4 = *(float *)(unsigned)(ar4 + 0x20);
      }
      if (cVar9 == '\0' && fVar4 < 0.0) {
        if (cVar10 == '\0') {
          *(undefined4 *)(unsigned)(ar4 + 0x20) = 0;
        }
        else {
          *(ulonglong *)(unsigned)(ar4 + 0x20) = (ulonglong)(uint)fVar4;
        }
      }
    }
    if (cVar10 == '\0') {
      fVar4 = *(float *)(unsigned)(ar4 + 0x18);
    }
    in_dr0 = (double)(ulonglong)(uint)fVar4;
    if (fVar4 == 0.0) {
      if (cVar10 == '\0') {
        fVar4 = *(float *)(unsigned)(ar4 + 0x20);
      }
      in_dr0 = (double)(ulonglong)(uint)fVar4;
      if (fVar4 == 0.0) {
        if (cVar10 == '\0') {
          in_dr0 = CONCAT44D(0x41126666,*(undefined4 *)(unsigned)(ar4 + 0x10));
        }
        else {
          in_dr0 = -7.947556305225132e-251;
        }
        if (cVar9 == '\0' && SUB84(in_dr0,0) < F32HI(in_dr0)) {
          if (cVar10 == '\0') {
            *(undefined4 *)(unsigned)(ar4 + 0x18) = *(undefined4 *)(unsigned)(ar4 + 0x38);
            in_dr0 = (double)((ulonglong)in_dr0 & 0xffffffff);
          }
          else {
            *(undefined8 *)(unsigned)(ar4 + 0x18) = *(undefined8 *)(unsigned)(ar4 + 0x38);
            in_dr0 = *(double *)(unsigned)(ar4 + 0x40);
          }
          ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x2c))); *(unsigned *)((((unsigned long)(fr0_ - 80)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 80)) - 8); FUN_8c023570(ar4 + 0x18,puVar3,ar6,ar7); });
          (vsp = ((unsigned long)(fr0_ - 80)), Vec3_assign(ar4 + 0x18,((undefined1 *)(fr0_ - 0x2c)),ar6,ar7));
          (vsp = ((unsigned long)(fr0_ - 80)), Vec3_dtor(((undefined1 *)(fr0_ - 0x2c)),0xffffffff,ar6,ar7));
        }
        *(undefined4 *)(unsigned)(ar4 + 0x74) = 1;
      }
    }
  }
  else if (iVar1 == 1) {
    if (cVar10 == '\0') {
      fVar4 = *(float *)(unsigned)(ar4 + 0x10);
      pcVar6 = (code *)0x41126666;
    }
    else {
      fVar4 = 9.15;
      pcVar6 = ((void *)0x8c023570);
    }
    if (cVar9 == '\0' && fVar4 < (float)(uint)pcVar6) {
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x3c))); *(unsigned *)((((unsigned long)(fr0_ - 80)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 80)) - 8); FUN_8c023570(ar4 + 0x18,ar5_00,ar6,ar7); });
      (vsp = ((unsigned long)(fr0_ - 80)), Vec3_assign(ar4 + 0x18,((undefined1 *)(fr0_ - 0x3c)),ar6,ar7));
      ar5_00 = (undefined1 *)(unsigned)0xffffffff;
      puVar3 = ((undefined1 *)(fr0_ - 0x3c));
      (vsp = ((unsigned long)(fr0_ - 80)), Vec3_dtor(puVar3,0xffffffff,ar6,ar7));
    }
    if (cVar10 == '\0') {
      in_dr0 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 4),fVar4);
    }
    else {
      in_dr0 = *(double *)(unsigned)(ar4 + 4);
    }
    if (cVar9 == '\0') {
      bVar8 = F32HI(in_dr0) < fVar7;
    }
    else {
      bVar8 = in_dr0 < CONCAT44D(in_fr14,fVar7);
    }
    if (!bVar8) {
      *(undefined4 *)(unsigned)(ar4 + 0x7c) = 0;
      iVar1 = (vsp = ((unsigned long)(fr0_ - 80)), rand(puVar3,ar5_00,ar6,ar7));
      if (cVar10 == '\0') {
        dVar5 = CONCAT44D(0x47000000,(float)iVar1);
      }
      else {
        dVar5 = 1099511918592.0;
      }
      if (cVar9 == '\0') {
        fVar4 = F32LO(dVar5) / F32HI(dVar5);
      }
      else {
        fVar4 = SUB84(dVar5 / dVar5,0);
      }
      if (cVar10 == '\0') {
        dVar5 = CONCAT44D(0x42700000,fVar4);
      }
      else {
        dVar5 = 3.966050706335591e+20;
      }
      if (cVar9 == '\0') {
        fVar4 = F32LO(dVar5) * F32HI(dVar5);
        iVar1 = (int)fVar4;
      }
      else {
        fVar4 = SUB84(dVar5 * dVar5,0);
        iVar1 = (int)(dVar5 * dVar5);
      }
      *(int *)(unsigned)(ar4 + 0x78) = iVar1 + 0xf;
      if (cVar10 != '\0') {
        fVar4 = 1072.5;
      }
      (vsp = ((unsigned long)(fr0_ - 80)), FUN_8c022d04(&(*(undefined4 *)(fr0_ - 0x1c)),ar5_00,ar6,ar7));
      uVar2 = (vsp = ((unsigned long)(fr0_ - 80)), Vec3_length(&(*(undefined4 *)(fr0_ - 0x1c)),ar5_00,ar6,ar7));
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x4c))); *(unsigned *)((((unsigned long)(fr0_ - 80)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 80)) - 8); Vec3_scale(uVar2,((undefined1 *)(unsigned)0x8c13f478),ar6,ar7); });
      (vsp = ((unsigned long)(fr0_ - 80)), Vec3_assign(&(*(undefined4 *)(fr0_ - 0x1c)),((undefined1 *)(fr0_ - 0x4c)),ar6,ar7));
      (vsp = ((unsigned long)(fr0_ - 80)), Vec3_dtor(((undefined1 *)(fr0_ - 0x4c)),0xffffffff,ar6,ar7));
      if (cVar10 == '\0') {
        *(undefined4 *)(unsigned)(ar4 + 0x18) = (*(undefined4 *)(fr0_ - 0x1c));
        in_dr0 = CONCAT44D((*(undefined4 *)(fr0_ - 0x14)),fVar4);
        *(undefined4 *)(unsigned)(ar4 + 0x20) = (*(undefined4 *)(fr0_ - 0x14));
      }
      else {
        *(ulonglong *)(unsigned)(ar4 + 0x18) = CONCAT44((*(undefined4 *)(fr0_ - 0x18)),(*(undefined4 *)(fr0_ - 0x1c)));
        in_dr0 = CONCAT44D((*(undefined4 *)(fr0_ - 0x10)),(*(undefined4 *)(fr0_ - 0x14)));
        *(double *)(unsigned)(ar4 + 0x20) = in_dr0;
      }
      *(undefined4 *)(unsigned)(ar4 + 0x74) = 2;
    }
  }
  else if ((iVar1 == 2) && (*(int *)(unsigned)(ar4 + 0x78) < *(int *)(unsigned)(ar4 + 0x7c))) {
    (vsp = ((unsigned long)(fr0_ - 80)), FUN_8c0d2f14(ar4,ar5_00,ar6,ar7));
  }
  uVar2 = SUB84(in_dr0,0);
  *(int *)(unsigned)(ar4 + 0x7c) = *(int *)(unsigned)(ar4 + 0x7c) + 1;
  iVar1 = (vsp = ((unsigned long)(fr0_ - 80)), libgcc_divide_helper_01031c(*(undefined4 *)(unsigned)(ar4 + 0x7c),3,ar6,ar7));
  if ((iVar1 == 0) &&
     (iVar1 = *(int *)(unsigned)(ar4 + 0x80), *(int *)(unsigned)(ar4 + 0x80) = iVar1 + 1, 3 < iVar1 + 1)) {
    *(undefined4 *)(unsigned)(ar4 + 0x80) = 0;
  }
  if (cVar10 == '\0') {
    dVar5 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 4),uVar2);
  }
  else {
    dVar5 = *(double *)(unsigned)(ar4 + 4);
  }
  if (cVar9 == '\0') {
    bVar8 = F32HI(dVar5) < fVar7;
  }
  else {
    bVar8 = dVar5 < CONCAT44D(in_fr14,fVar7);
  }
  if (!bVar8) {
    if (cVar10 == '\0') {
      *(float *)(unsigned)(ar4 + 4) = fVar7;
    }
    else {
      *(undefined8 *)(unsigned)(ar4 + 4) = in_xd14;
    }
  }
  uVar2 = (vsp = ((unsigned long)(fr0_ - 80)), Vec3_dtor(&(*(undefined4 *)(fr0_ - 0x1c)),0xffffffff,ar6,ar7));
  return uVar2;
}

__asm__(".globl _FUN_8c0d294c\n.set _FUN_8c0d294c, _FUN_8c0d294c_def\n");
//@unit 8c0d2c84
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
undefined4 FUN_8c0d2c84_def(float *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0d2c84";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 140; for (int i_ = 0; i_ < 140; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  float fVar2;
  
  (*(float *)(fr0_ - 0x1c)) = *ar4;
  (*(float *)(fr0_ - 0x18)) = ar4[1];
  (*(float *)(fr0_ - 0x14)) = ar4[2];
  (*(undefined4 *)(fr0_ - 0x2c)) = (*(undefined4 *)(unsigned)(unsigned)0x8c13f488);
  (*(undefined4 *)(fr0_ - 0x28)) = (*(undefined1 *)(unsigned)0x8c13f48c);
  (*(undefined4 *)(fr0_ - 0x24)) = (*(undefined1 *)(unsigned)0x8c13f490);
  (*(undefined4 *)(fr0_ - 0x20)) = (*(undefined1 *)(unsigned)0x8c13f494);
  (*(undefined4 *)(fr0_ - 0x38)) = (*(undefined1 *)(unsigned)0x8c13f49c);
  (*(undefined4 *)(fr0_ - 0x34)) = (*(undefined1 *)(unsigned)0x8c13f4a0);
  (*(undefined4 *)(fr0_ - 0x30)) = (*(undefined1 *)(unsigned)0x8c13f4a4);
  (*(unsigned *)(fr0_ - 0x3c) = (unsigned)(unsigned long)(&(*(float *)(fr0_ - 0x1c))));
  (*(float *)(fr0_ - 0x6c)) = (*(undefined4 *)(unsigned)(unsigned)0x8c13f4a8);
  (*(float *)(fr0_ - 0x64)) = (float)(*(undefined1 *)(unsigned)0x8c13f4b0);
  (*(float *)(fr0_ - 0x60)) = (float)(*(undefined1 *)(unsigned)0x8c13f4b4);
  (*(float *)(fr0_ - 0x58)) = (float)(*(undefined1 *)(unsigned)0x8c13f4bc);
  (*(float *)(fr0_ - 0x54)) = (float)(*(undefined1 *)(unsigned)0x8c13f4c0);
  (*(float *)(fr0_ - 0x4c)) = (float)(*(undefined1 *)(unsigned)0x8c13f4c8);
  (*(float *)(fr0_ - 0x48)) = (float)(*(undefined1 *)(unsigned)0x8c13f4cc);
  (*(float *)(fr0_ - 0x40)) = (float)(*(undefined1 *)(unsigned)0x8c13f4d4);
  (*(float *)(fr0_ - 0x68)) = ar4[1] - 1.0;
  (*(float *)(fr0_ - 0x5c)) = ar4[1] - 1.0;
  (*(float *)(fr0_ - 0x50)) = ar4[1] - 1.0;
  (*(float *)(fr0_ - 0x44)) = ar4[1] - 1.0;
  (*(undefined4 *)(fr0_ - 0x88)) = (*(undefined1 *)(unsigned)0x8c13f4dc);
  (*(undefined4 *)(fr0_ - 0x80)) = (*(undefined1 *)(unsigned)0x8c13f4e4);
  (*(unsigned *)(fr0_ - 0x8c) = (unsigned)(unsigned long)(&(*(float *)(fr0_ - 0x6c))));
  (*(unsigned *)(fr0_ - 0x84) = (unsigned)(unsigned long)(&(*(undefined2 *)(fr0_ - 0x7c))));
  if (ar4[5] == 0.0) {
    uVar1 = (vsp = ((unsigned long)(fr0_ - 140)), FUN_8c234fd0(((float * *)(fr0_ - 0x3c)),1,0,ar7));
  }
  else {
    fVar2 = (ar4[4] / 12.2) * ar4[0x21];
    if (ar4[0x1d] == 2.8026e-45) {
      (*(float *)(fr0_ - 0x6c)) = *ar4 - fVar2 * 5.0;
      (*(float *)(fr0_ - 0x64)) = ar4[2] + fVar2 * 5.0;
      (*(float *)(fr0_ - 0x60)) = *ar4 - fVar2 * 5.0;
      (*(float *)(fr0_ - 0x58)) = ar4[2] - fVar2 * 5.0;
      (*(float *)(fr0_ - 0x54)) = *ar4 + fVar2 * 5.0;
      (*(float *)(fr0_ - 0x4c)) = ar4[2] - fVar2 * 5.0;
      (*(float *)(fr0_ - 0x48)) = *ar4 + fVar2 * 5.0;
      (*(float *)(fr0_ - 0x40)) = ar4[2] + fVar2 * 5.0;
      (*(undefined2 *)(fr0_ - 0x7c)) = 0;
      (*(undefined2 *)(fr0_ - 0x7a)) = 0;
      (*(undefined2 *)(fr0_ - 0x78)) = 0;
      (*(undefined2 *)(fr0_ - 0x76)) = 0x7f;
      (*(undefined2 *)(fr0_ - 0x74)) = 0x7f;
      (*(undefined2 *)(fr0_ - 0x72)) = 0x7f;
      (*(undefined2 *)(fr0_ - 0x70)) = 0x7f;
      (*(undefined2 *)(fr0_ - 0x6e)) = 0;
      (vsp = ((unsigned long)(fr0_ - 140)), FUN_8c01538c(ar5,ar5,ar6,ar7));
      (vsp = ((unsigned long)(fr0_ - 140)), FUN_8c014a94(ar5,0,ar6,ar7));
      uVar1 = (vsp = ((unsigned long)(fr0_ - 140)), FUN_8c235bfc(((float * *)(fr0_ - 0x8c)),4,0x80000060,ar7));
    }
    else {
      (vsp = ((unsigned long)(fr0_ - 140)), FUN_8c0d2f04(ar4 + 0x12,ar5,ar6,ar7));
      uVar1 = (vsp = ((unsigned long)(fr0_ - 140)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)(((int)ar4[0x12] + 0x1c))))(ar4 + 0x12,ar4[0x20],ar6,ar7));
    }
  }
  return uVar1;
}

__asm__(".globl _FUN_8c0d2c84\n.set _FUN_8c0d2c84, _FUN_8c0d2c84_def\n");
//@unit 8c0d2f04
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
undefined4 * FUN_8c0d2f04_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0d2f04";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 in_fr5 = 0;
  undefined4 in_fr4 = 0;
  
  *(undefined4 *)(unsigned)(ar4 + 0x10) = in_fr4;
  *(undefined4 *)(unsigned)(ar4 + 0x14) = in_fr5;
  return (undefined4 *)(unsigned)(ar4 + 0x10);
}

__asm__(".globl _FUN_8c0d2f04\n.set _FUN_8c0d2f04, _FUN_8c0d2f04_def\n");
//@unit 8c0d2f14
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
undefined4 FUN_8c0d2f14_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0d2f14";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 in_fr1 = 0;
  uint uVar1;
  undefined8 uVar2;
  char cVar3;
  
  cVar3 = '\0';
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c022d04(ar4,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), vec3_clear(ar4 + 0x18,ar5,ar6,ar7));
  uVar2 = CONCAT44(0x3f800000,in_fr1);
  if (cVar3 == '\0') {
    *(undefined4 *)(unsigned)(ar4 + 0x1c) = 0x3f800000;
  }
  else {
    *(undefined8 *)(unsigned)(ar4 + 0x1c) = uVar2;
  }
  (vsp = ((unsigned long)(fr0_ - 0)), vec3_clear(ar4 + 0x28,ar5,ar6,ar7));
  if (cVar3 == '\0') {
    uVar1 = (uint)uVar2;
    *(undefined4 *)(unsigned)(ar4 + 0x10) = 0x40800000;
  }
  else {
    uVar1 = 0x40800000;
    *(undefined8 *)(unsigned)(ar4 + 0x10) = 0x430c000040800000;
  }
  if (cVar3 == '\0') {
    *(undefined4 *)(unsigned)(ar4 + 0x3c) = 0;
    *(undefined4 *)(unsigned)(ar4 + 0x40) = 0x430c0000;
    *(undefined4 *)(unsigned)(ar4 + 0x38) = 0x3ee66666;
  }
  else {
    *(ulonglong *)(unsigned)(ar4 + 0x3c) = (ulonglong)uVar1;
    *(undefined8 *)(unsigned)(ar4 + 0x40) = 0x3ee66666430c0000;
    uVar1 = 0x3ee66666;
    *(undefined8 *)(unsigned)(ar4 + 0x38) = 0x803ee66666;
  }
  *(undefined4 *)(unsigned)(ar4 + 0x14) = 1;
  *(undefined4 *)(unsigned)(ar4 + 0x44) = 0;
  *(undefined4 *)(unsigned)(ar4 + 0x74) = 0;
  *(undefined4 *)(unsigned)(ar4 + 0x80) = 0;
  if (cVar3 == '\0') {
    *(undefined4 *)(unsigned)(ar4 + 0x84) = 0x3f800000;
  }
  else {
    *(undefined8 *)(unsigned)(ar4 + 0x84) = CONCAT44(0x3f800000,uVar1);
  }
  return 0x84;
}

__asm__(".globl _FUN_8c0d2f14\n.set _FUN_8c0d2f14, _FUN_8c0d2f14_def\n");
//@unit 8c0d2fc0
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
undefined4 * FUN_8c0d2fc0_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0d2fc0";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 *puVar1;
  
  *(undefined4 *)(unsigned)0x8c43784c = ar4;
  ((undefined1 *)(unsigned)1)[0x8c43784c] = ar4;
  ((undefined1 *)(unsigned)2)[0x8c43784c] = ar4;
  puVar1 = 0x8c43784c;
  ((undefined1 *)(unsigned)3)[0x8c43784c] = ar4;
  return puVar1;
}

__asm__(".globl _FUN_8c0d2fc0\n.set _FUN_8c0d2fc0, _FUN_8c0d2fc0_def\n");
//@unit 8c0d2fd8
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
int FUN_8c0d2fd8_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0d2fd8";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 20; for (int i_ = 0; i_ < 20; i_++) z_[i_] = 0; }
  code *pcVar1;
  int iVar2;
  code *pcVar3;
  undefined4 uVar4;
  undefined4 ar7_00;
  uint in_fr1 = 0;
  ulonglong uVar5;
  char cVar6;
  
  cVar6 = '\0';
  (vsp = ((unsigned long)(fr0_ - 20)), FUN_8c015224(ar4 + 8,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 20)), FUN_8c015ab8(ar4 + 0x10,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 20)), FUN_8c015ab8(ar4 + 0x1c,ar5,ar6,ar7));
  uVar4 = 4;
  pcVar3 = ((void *)0x8c016bfc);
  pcVar1 = ((void *)0x8c015ab8);
  ({ unsigned long t0_ = (unsigned long)(3); *(unsigned *)((((unsigned long)(fr0_ - 20)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 20)) - 8); FUN_8c010120(ar4 + 0x20,((void *)0x8c015ab8),((void *)0x8c016bfc),4); });
  (vsp = ((unsigned long)(fr0_ - 20)), FUN_8c0d33bc(ar4 + 0x34,pcVar1,pcVar3,uVar4));
  (vsp = ((unsigned long)(fr0_ - 20)), FUN_8c015224(ar4 + 0x108,pcVar1,pcVar3,uVar4));
  (vsp = ((unsigned long)(fr0_ - 20)), FUN_8c016410(ar4 + 0x110,pcVar1,pcVar3,uVar4));
  (vsp = ((unsigned long)(fr0_ - 20)), FUN_8c015ab8(ar4 + 0x154,pcVar1,pcVar3,uVar4));
  ({ unsigned long t0_ = (unsigned long)(5); *(unsigned *)((((unsigned long)(fr0_ - 20)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 20)) - 8); FUN_8c010120(ar4 + 0x470,((void *)0x8c0d2050),((void *)0x8c0d336c),0x44); });
  ({ unsigned long t0_ = (unsigned long)(2); *(unsigned *)((((unsigned long)(fr0_ - 20)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 20)) - 8); FUN_8c010120(ar4 + 0x5fc,((void *)0x8c02145c),((void *)0x8c0cffc8),0x18); });
  uVar4 = 0x88;
  pcVar3 = ((void *)0x8c0d3304);
  pcVar1 = ((void *)0x8c0d25b4);
  ({ unsigned long t0_ = (unsigned long)(0x226); *(unsigned *)((((unsigned long)(fr0_ - 20)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 20)) - 8); FUN_8c010120(ar4 + 0x62c,((void *)0x8c0d25b4),((void *)0x8c0d3304),0x88); });
  (vsp = ((unsigned long)(fr0_ - 20)), FUN_8c0153b8(ar4 + 0x12a5c,pcVar1,pcVar3,uVar4));
  *(undefined4 *)(unsigned)(ar4 + 0x2c) = 0;
  *(undefined4 *)(unsigned)(ar4 + 0x14) = 0;
  if (cVar6 == '\0') {
    *(undefined4 *)(unsigned)(ar4 + 0x18) = 0x3ec8c155;
  }
  else {
    in_fr1 = 0x3ec8c155;
    *(undefined8 *)(unsigned)(ar4 + 0x18) = 0x8c13e7803ec8c155;
  }
  ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x10))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 20)); FUN_8c015ad4(ar4 + 0x20,((undefined1 *)(unsigned)0x8c13e780),pcVar3,uVar4); });
  ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x10))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 20)); FUN_8c015ad4(ar4 + 0x24,((undefined1 *)(unsigned)0x8c13ea48),pcVar3,uVar4); });
  ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x10))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 20)); FUN_8c015ad4(ar4 + 0x28,((undefined1 *)(unsigned)0x8c13ed20),pcVar3,uVar4); });
  if (cVar6 == '\0') {
    *(undefined4 *)(unsigned)(ar4 + 0x430) = 0xc3960000;
  }
  else {
    in_fr1 = 0xc3960000;
    *(undefined8 *)(unsigned)(ar4 + 0x430) = 0x434c3960000;
  }
  if (cVar6 == '\0') {
    *(undefined4 *)(unsigned)(ar4 + 0x434) = 0;
    *(undefined4 *)(unsigned)(ar4 + 0x438) = 0xc3960000;
    *(undefined4 *)(unsigned)(ar4 + 0x43c) = 0xc3960000;
  }
  else {
    *(ulonglong *)(unsigned)(ar4 + 0x434) = (ulonglong)in_fr1;
    *(undefined8 *)(unsigned)(ar4 + 0x438) = 0x434c3960000;
    in_fr1 = 0xc3960000;
    *(undefined8 *)(unsigned)(ar4 + 0x43c) = 0x434c3960000;
  }
  if (cVar6 == '\0') {
    *(undefined4 *)(unsigned)(ar4 + 0x440) = 0;
    *(undefined4 *)(unsigned)(ar4 + 0x444) = 0x43960000;
    *(undefined4 *)(unsigned)(ar4 + 0x448) = 0x43960000;
  }
  else {
    *(ulonglong *)(unsigned)(ar4 + 0x440) = (ulonglong)in_fr1;
    *(undefined8 *)(unsigned)(ar4 + 0x444) = 0x44843960000;
    in_fr1 = 0x43960000;
    *(undefined8 *)(unsigned)(ar4 + 0x448) = 0x44843960000;
  }
  if (cVar6 == '\0') {
    *(undefined4 *)(unsigned)(ar4 + 0x44c) = 0;
    *(undefined4 *)(unsigned)(ar4 + 0x450) = 0x43960000;
    uVar5 = CONCAT44(0x43960000,in_fr1);
    *(undefined4 *)(unsigned)(ar4 + 0x454) = 0x43960000;
  }
  else {
    *(ulonglong *)(unsigned)(ar4 + 0x44c) = (ulonglong)in_fr1;
    *(undefined8 *)(unsigned)(ar4 + 0x450) = 0x44843960000;
    uVar5 = 0x44843960000;
    *(undefined8 *)(unsigned)(ar4 + 0x454) = 0x44843960000;
  }
  if (cVar6 == '\0') {
    *(undefined4 *)(unsigned)(ar4 + 0x458) = 0;
    *(undefined4 *)(unsigned)(ar4 + 0x45c) = 0xc3960000;
  }
  else {
    *(ulonglong *)(unsigned)(ar4 + 0x458) = uVar5 & 0xffffffff;
    *(undefined8 *)(unsigned)(ar4 + 0x45c) = 0x434c3960000;
  }
  *(undefined2 *)(unsigned)(ar4 + 0x460) = 0;
  *(undefined2 *)(unsigned)(ar4 + 0x462) = 0xff;
  *(undefined2 *)(unsigned)(ar4 + 0x464) = 0;
  *(undefined2 *)(unsigned)(ar4 + 0x466) = 0;
  *(undefined2 *)(unsigned)(ar4 + 0x468) = 0xff;
  *(undefined2 *)(unsigned)(ar4 + 0x46a) = 0;
  *(undefined2 *)(unsigned)(ar4 + 0x46c) = 0xff;
  *(undefined2 *)(unsigned)(ar4 + 0x46e) = 0xff;
  ar7_00 = 4;
  (vsp = ((unsigned long)(fr0_ - 20)), FUN_8c016464(ar4 + 0x110,ar4 + 0x430,0,4));
  uVar4 = 4;
  iVar2 = ar4 + 0x460;
  (vsp = ((unsigned long)(fr0_ - 20)), FUN_8c0164c8(ar4 + 0x110,iVar2,4,ar7_00));
  (vsp = ((unsigned long)(fr0_ - 20)), FUN_8c014790(ar4 + 0x110,iVar2,uVar4,ar7_00));
  (vsp = ((unsigned long)(fr0_ - 20)), FUN_8c014764(ar4 + 0x110,iVar2,uVar4,ar7_00));
  (vsp = ((unsigned long)(fr0_ - 20)), FUN_8c014a64(ar4 + 0x110,iVar2,uVar4,ar7_00));
  (vsp = ((unsigned long)(fr0_ - 20)), FUN_8c0d56dc(ar4,iVar2,uVar4,ar7_00));
  for (iVar2 = 0; iVar2 < 0x226; iVar2 = iVar2 + 1) {
    (vsp = ((unsigned long)(fr0_ - 20)), FUN_8c0d261c(iVar2 * 0x88 + ar4 + 0x62c,ar4 + 0x12a5c,((undefined1 *)(unsigned)0x8c13f344),ar7_00));
  }
  return ar4;
}

__asm__(".globl _FUN_8c0d2fd8\n.set _FUN_8c0d2fd8, _FUN_8c0d2fd8_def\n");
//@unit 8c0d3304
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
int FUN_8c0d3304_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0d3304";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 16; for (int i_ = 0; i_ < 16; i_++) z_[i_] = 0; }
  undefined4 ar5_00;
  undefined4 ain0;
  
  ain0 = CONCAT22((short)((uint)(*(undefined4 *)(fr0_ - 0xc)) >> 0x10),(undefined2)ar5);
  if (ar4 != 0) {
    (vsp = ((unsigned long)(fr0_ - 16)), FUN_8c0c4b3c(ar4 + 0x48,0xffffffff,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 16)), Vec3_dtor(ar4 + 0x28,0xffffffff,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 16)), Vec3_dtor(ar4 + 0x18,0xffffffff,ar6,ar7));
    ar5_00 = 0xffffffff;
    (vsp = ((unsigned long)(fr0_ - 16)), Vec3_dtor(ar4,0xffffffff,ar6,ar7));
    if (0 < (short)ain0) {
      ({ unsigned long ri0_ = (unsigned long)(ain0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 16)); free_if_nonnull(ar4,ar5_00,ar6,ar7); });
    }
  }
  return ar4;
}

__asm__(".globl _FUN_8c0d3304\n.set _FUN_8c0d3304, _FUN_8c0d3304_def\n");
//@unit 8c0d336c
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
int FUN_8c0d336c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0d336c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 16; for (int i_ = 0; i_ < 16; i_++) z_[i_] = 0; }
  undefined4 ar5_00;
  undefined4 ain0;
  
  ain0 = CONCAT22((short)((uint)(*(undefined4 *)(fr0_ - 0xc)) >> 0x10),(undefined2)ar5);
  if (ar4 != 0) {
    (vsp = ((unsigned long)(fr0_ - 16)), free_if_nonnull_wrap_016ac4(ar4 + 0x10,0xffffffff,ar6,ar7));
    ar5_00 = 0xffffffff;
    (vsp = ((unsigned long)(fr0_ - 16)), Vec3_dtor(ar4,0xffffffff,ar6,ar7));
    if (0 < (short)ain0) {
      ({ unsigned long ri0_ = (unsigned long)(ain0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 16)); free_if_nonnull(ar4,ar5_00,ar6,ar7); });
    }
  }
  return ar4;
}

__asm__(".globl _FUN_8c0d336c\n.set _FUN_8c0d336c, _FUN_8c0d336c_def\n");
//@unit 8c0d33bc
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
undefined4 FUN_8c0d33bc_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0d33bc";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0fe4f8(ar4,(&(*(undefined1 *)(unsigned)0x8c13f7c0)) + 0x15d,ar6,ar7));
  return uVar1;
}

__asm__(".globl _FUN_8c0d33bc\n.set _FUN_8c0d33bc, _FUN_8c0d33bc_def\n");
//@unit 8c0d33e8
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
undefined4 s_GRAPHICS_COMMON_0d33f4_def(double *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "s_GRAPHICS_COMMON_0d33f4";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 88; for (int i_ = 0; i_ < 88; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 uVar2;
  char *ar5_00;
  int iVar3;
  char *pcVar4;
  undefined4 uVar5;
  char *ar6_00;
  undefined4 *puVar6;
  undefined4 uVar7;
  float fVar8;
  double dVar9;
  double in_dr2 = 0;
  undefined8 in_xd0 = 0;
  char cVar10;
  char cVar11;
  
  cVar11 = '\0';
  cVar10 = '\0';
  ((undefined4 *)(fr0_ - 0x20))[0] = 0;
  (*(undefined4 *)(fr0_ - 0x24)) = 0;
  *(undefined4 *)(unsigned)ar4 = 0x44610000;
  iVar1 = (vsp = ((unsigned long)(fr0_ - 88)), FUN_8c0209fc(ar5,((undefined1 *)(unsigned)0x8c13f91e),((undefined1 *)(unsigned)0x8c13f8cb),((undefined4 *)(fr0_ - 0x20))));
  if (iVar1 == 0) {
    report_error_message
              (((undefined1 *)(unsigned)0x8c13f91e),((undefined1 *)(unsigned)0x8c13f932),0,2);
  }
  puVar6 = &(*(undefined4 *)(fr0_ - 0x24));
  pcVar4 = ((undefined1 *)(unsigned)0x8c13f8cb);
  iVar1 = (vsp = ((unsigned long)(fr0_ - 88)), FUN_8c020af4(ar5,((undefined1 *)(unsigned)0x8c13f91e),((undefined1 *)(unsigned)0x8c13f8cb),puVar6));
  if (iVar1 == 0) {
    puVar6 = (undefined4 *)(unsigned)0x2;
    pcVar4 = (char *)(unsigned)0x0;
    report_error_message
              (((undefined1 *)(unsigned)0x8c13f91e),((undefined1 *)(unsigned)0x8c13f95c),0,2);
  }
  ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x58))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 88)); FUN_8c015ad4(ar4 + 2,((undefined4 *)(fr0_ - 0x20))[0],pcVar4,puVar6); });
  iVar1 = (vsp = ((unsigned long)(fr0_ - 88)), FUN_8c0209fc(ar5,((undefined1 *)(unsigned)0x8c13f986),((undefined1 *)(unsigned)0x8c13f8cb),((undefined4 *)(fr0_ - 0x20))));
  if (iVar1 == 0) {
    report_error_message
              (((undefined1 *)(unsigned)0x8c13f986),((undefined1 *)(unsigned)0x8c13f932),0,2);
  }
  puVar6 = &(*(undefined4 *)(fr0_ - 0x24));
  pcVar4 = ((undefined1 *)(unsigned)0x8c13f8cb);
  iVar1 = (vsp = ((unsigned long)(fr0_ - 88)), FUN_8c020af4(ar5,((undefined1 *)(unsigned)0x8c13f986),((undefined1 *)(unsigned)0x8c13f8cb),puVar6));
  if (iVar1 == 0) {
    puVar6 = (undefined4 *)(unsigned)0x2;
    pcVar4 = (char *)(unsigned)0x0;
    report_error_message
              (((undefined1 *)(unsigned)0x8c13f986),((undefined1 *)(unsigned)0x8c13f95c),0,2);
  }
  uVar2 = ((undefined4 *)(fr0_ - 0x20))[0];
  ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x58))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 88)); FUN_8c015ad4((undefined4 *)(unsigned)((int)ar4 + 0x1c),((undefined4 *)(fr0_ - 0x20))[0],pcVar4,puVar6); });
  for (iVar1 = 0; iVar1 < 1; iVar1 = iVar1 + 1) {
    *(undefined4 *)(unsigned)((int)ar4 + iVar1 * 0xc + 0x12a70) = 0;
  }
  uVar2 = (vsp = ((unsigned long)(fr0_ - 88)), get_field_4_0253e4((undefined4 *)(unsigned)((int)ar4 + 0x12a5c),uVar2,pcVar4,puVar6));
  uVar7 = 1;
  uVar5 = 0x8c4312a8;
  puVar6 = (undefined4 *)(unsigned)((int)ar4 + 0x12a6c);
  (vsp = ((unsigned long)(fr0_ - 88)), FUN_8c239170(uVar2,puVar6,0x8c4312a8,1));
  uVar2 = (vsp = ((unsigned long)(fr0_ - 88)), get_field_4_0253e4((undefined4 *)(unsigned)((int)ar4 + 0x12a5c),puVar6,uVar5,uVar7));
  ar6_00 = ((undefined1 *)(unsigned)0x8c13f8cb);
  pcVar4 = ((undefined1 *)(unsigned)0x8c13f997);
  iVar1 = (vsp = ((unsigned long)(fr0_ - 88)), FUN_8c02100c(ar5,((undefined1 *)(unsigned)0x8c13f997),((undefined1 *)(unsigned)0x8c13f8cb),uVar2));
  if (iVar1 == 0) {
    uVar2 = 2;
    ar6_00 = (char *)(unsigned)0x0;
    pcVar4 = ((undefined1 *)(unsigned)0x8c13f9c3);
    report_error_message
              (((undefined1 *)(unsigned)0x8c13f9a3),((undefined1 *)(unsigned)0x8c13f9c3),0,2);
  }
  iVar1 = 0;
  do {
    uVar5 = SUB84(in_dr2,0);
    if (0x59 < iVar1) {
LAB_8c0d3658:
      for (iVar1 = 0; iVar1 < 0x226; iVar1 = iVar1 + 1) {
        (vsp = ((unsigned long)(fr0_ - 88)), FUN_8c0d2690((int)ar4 + iVar1 * 0x88 + 0x62c,pcVar4,ar6_00,uVar2));
      }
      for (iVar1 = 0; iVar1 < 0x3c; iVar1 = iVar1 + 1) {
        uVar7 = 1;
        uVar5 = ar6;
        (vsp = ((unsigned long)(fr0_ - 88)), FUN_8c0d59a4(ar4,1,ar6,uVar2));
        (vsp = ((unsigned long)(fr0_ - 88)), FUN_8c0d5ca8(ar4,uVar7,uVar5,uVar2));
      }
      (vsp = ((unsigned long)(fr0_ - 88)), s_GRAPHICS_ENV_0d39ea(ar4,ar5,((undefined1 *)(unsigned)0x8c13fa03),uVar2));
      return 1;
    }
    uVar7 = 0x8c3e7d30;
    ar5_00 = (char *)(unsigned)(vsp = ((unsigned long)(fr0_ - 88)), FUN_8c0febf0(0x8c3e7d30,pcVar4,ar6_00,uVar2));
    if (ar5_00 == (char *)(unsigned)0x0) {
      uVar2 = 2;
      ar6_00 = (char *)(unsigned)0x1;
      pcVar4 = ((undefined1 *)(unsigned)0x8c13f9e4);
      (vsp = ((unsigned long)(fr0_ - 88)), report_error_message(((undefined1 *)(unsigned)0x8c13f9d6),((undefined1 *)(unsigned)0x8c13f9e4),1,2));
      goto LAB_8c0d3658;
    }
    iVar3 = (vsp = ((unsigned long)(fr0_ - 88)), rand(uVar7,pcVar4,ar6_00,uVar2));
    if (cVar11 == '\0') {
      dVar9 = CONCAT44D(0x47000000,(float)iVar3);
    }
    else {
      dVar9 = 7.971355902106255e+24;
    }
    if (cVar10 == '\0') {
      fVar8 = F32LO(dVar9) / F32HI(dVar9);
    }
    else {
      fVar8 = SUB84(dVar9 / dVar9,0);
    }
    if (cVar11 == '\0') {
      dVar9 = CONCAT44D(0x451a6000,fVar8);
    }
    else {
      dVar9 = 1.2986509772968826e+23;
    }
    if (cVar10 == '\0') {
      fVar8 = F32LO(dVar9) * F32HI(dVar9);
    }
    else {
      fVar8 = SUB84(dVar9 * dVar9,0);
    }
    if (cVar11 == '\0') {
      *(float *)(unsigned)(ar5_00 + 8) = fVar8;
    }
    else {
      *(undefined8 *)(unsigned)(ar5_00 + 8) = in_xd0;
    }
    iVar3 = (vsp = ((unsigned long)(fr0_ - 88)), rand(uVar7,pcVar4,ar6_00,uVar2));
    if (cVar11 == '\0') {
      in_dr2 = CONCAT44D(*(undefined4 *)(unsigned)ar4,uVar5);
    }
    else {
      in_dr2 = *ar4;
    }
    if (cVar11 == '\0') {
      dVar9 = CONCAT44D(0x47000000,(float)iVar3);
    }
    else {
      dVar9 = 7.971355902106255e+24;
    }
    if (cVar10 == '\0') {
      in_dr2 = CONCAT44D(F32HI(in_dr2) *
                                (F32LO(dVar9) / F32HI(dVar9)),SUB84(in_dr2,0)
                               );
    }
    else {
      in_dr2 = in_dr2 * (dVar9 / dVar9);
    }
    if (cVar11 == '\0') {
      *(int *)(unsigned)(ar5_00 + 0xc) = (int)((ulonglong)in_dr2 >> 0x20);
    }
    else {
      *(double *)(unsigned)(ar5_00 + 0xc) = in_dr2;
    }
    iVar3 = (vsp = ((unsigned long)(fr0_ - 88)), rand(uVar7,pcVar4,ar6_00,uVar2));
    if (cVar11 == '\0') {
      dVar9 = CONCAT44D(0x47000000,(float)iVar3);
    }
    else {
      dVar9 = 7.971355902106255e+24;
    }
    if (cVar10 == '\0') {
      fVar8 = F32LO(dVar9) / F32HI(dVar9);
    }
    else {
      fVar8 = SUB84(dVar9 / dVar9,0);
    }
    if (cVar11 == '\0') {
      dVar9 = CONCAT44D(0x44bb8000,fVar8);
    }
    else {
      dVar9 = -1.3922581301884715e-250;
    }
    if (cVar10 == '\0') {
      fVar8 = F32LO(dVar9) * F32HI(dVar9);
    }
    else {
      fVar8 = SUB84(dVar9 * dVar9,0);
    }
    if (cVar11 == '\0') {
      *(float *)(unsigned)(ar5_00 + 0x10) = fVar8;
    }
    else {
      *(undefined8 *)(unsigned)(ar5_00 + 0x10) = in_xd0;
    }
    (vsp = ((unsigned long)(fr0_ - 88)), FUN_8c0fe5f0((undefined4 *)(unsigned)((int)ar4 + 0x34),ar5_00,ar6_00,uVar2));
    iVar1 = iVar1 + 1;
    pcVar4 = ar5_00;
  } while( true );
}

__asm__(".globl _s_GRAPHICS_COMMON_0d33f4\n.set _s_GRAPHICS_COMMON_0d33f4, _s_GRAPHICS_COMMON_0d33f4_def\n");
//@unit 8c0d3770
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
undefined4 s_GRAPHICS_COMMON_0d377a_def(double *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "s_GRAPHICS_COMMON_0d377a";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 64; for (int i_ = 0; i_ < 64; i_++) z_[i_] = 0; }
  int iVar1;
  int ar5_00;
  int iVar2;
  undefined4 ar4_00;
  char *pcVar3;
  undefined4 *puVar4;
  int iVar5;
  float fVar6;
  double dVar7;
  undefined4 uVar8;
  double in_dr2 = 0;
  undefined8 in_xd0 = 0;
  char cVar9;
  char cVar10;
  
  cVar10 = '\0';
  cVar9 = '\0';
  ((int *)(fr0_ - 0x1c))[0] = 0;
  (*(undefined4 *)(fr0_ - 0x20)) = 0;
  *(undefined4 *)(unsigned)ar4 = 0x43200000;
  iVar1 = (vsp = ((unsigned long)(fr0_ - 64)), FUN_8c0209fc(ar5,((undefined1 *)(unsigned)0x8c13fa0c),((undefined1 *)(unsigned)0x8c13f8cb),((int *)(fr0_ - 0x1c))));
  if (iVar1 == 0) {
    report_error_message
              (((undefined1 *)(unsigned)0x8c13fa0c),((undefined1 *)(unsigned)0x8c13fa26),0,2)
    ;
  }
  puVar4 = &(*(undefined4 *)(fr0_ - 0x20));
  pcVar3 = ((undefined1 *)(unsigned)0x8c13f8cb);
  iVar1 = (vsp = ((unsigned long)(fr0_ - 64)), FUN_8c020af4(ar5,((undefined1 *)(unsigned)0x8c13fa0c),((undefined1 *)(unsigned)0x8c13f8cb),puVar4));
  if (iVar1 == 0) {
    puVar4 = (undefined4 *)(unsigned)0x2;
    pcVar3 = (char *)(unsigned)0x0;
    report_error_message
              (((undefined1 *)(unsigned)0x8c13fa0c),((undefined1 *)(unsigned)0x8c13fa50),0,2)
    ;
  }
  ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x40))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 64)); FUN_8c015ad4(ar4 + 2,((int *)(fr0_ - 0x1c))[0],pcVar3,puVar4); });
  iVar1 = (vsp = ((unsigned long)(fr0_ - 64)), FUN_8c0209fc(ar5,((undefined1 *)(unsigned)0x8c13fa7a),((undefined1 *)(unsigned)0x8c13f8cb),((int *)(fr0_ - 0x1c))));
  if (iVar1 == 0) {
    report_error_message
              (((undefined1 *)(unsigned)0x8c13fa7a),((undefined1 *)(unsigned)0x8c13fa26),0,2);
  }
  puVar4 = &(*(undefined4 *)(fr0_ - 0x20));
  pcVar3 = ((undefined1 *)(unsigned)0x8c13f8cb);
  iVar1 = (vsp = ((unsigned long)(fr0_ - 64)), FUN_8c020af4(ar5,((undefined1 *)(unsigned)0x8c13fa7a),((undefined1 *)(unsigned)0x8c13f8cb),puVar4));
  if (iVar1 == 0) {
    puVar4 = (undefined4 *)(unsigned)0x2;
    pcVar3 = (char *)(unsigned)0x0;
    report_error_message
              (((undefined1 *)(unsigned)0x8c13fa7a),((undefined1 *)(unsigned)0x8c13fa50),0,2);
  }
  iVar1 = ((int *)(fr0_ - 0x1c))[0];
  ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x40))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 64)); FUN_8c015ad4((undefined4 *)(unsigned)((int)ar4 + 0x1c),((int *)(fr0_ - 0x1c))[0],pcVar3,puVar4); });
  iVar5 = 0;
  do {
    uVar8 = SUB84(in_dr2,0);
    if (0x31 < iVar5) {
LAB_8c0d395e:
      (vsp = ((unsigned long)(fr0_ - 64)), s_GRAPHICS_ENV_0d39ea(ar4,ar5,((undefined1 *)(unsigned)0x8c13faaa),puVar4));
      return 1;
    }
    ar4_00 = 0x8c3e7d30;
    ar5_00 = (vsp = ((unsigned long)(fr0_ - 64)), FUN_8c0febf0(0x8c3e7d30,iVar1,pcVar3,puVar4));
    if (ar5_00 == 0) {
      puVar4 = (undefined4 *)(unsigned)0x2;
      (vsp = ((unsigned long)(fr0_ - 64)), report_error_message(((undefined1 *)(unsigned)0x8c13f9d6),((undefined1 *)(unsigned)0x8c13fa91),1,2));
      goto LAB_8c0d395e;
    }
    iVar2 = (vsp = ((unsigned long)(fr0_ - 64)), rand(ar4_00,iVar1,pcVar3,puVar4));
    if (cVar10 == '\0') {
      dVar7 = CONCAT44D(0x47000000,(float)iVar2);
    }
    else {
      dVar7 = 1.1215622395287742e+23;
    }
    if (cVar9 == '\0') {
      fVar6 = F32LO(dVar7) / F32HI(dVar7);
    }
    else {
      fVar6 = SUB84(dVar7 / dVar7,0);
    }
    if (cVar10 == '\0') {
      dVar7 = CONCAT44D(0x44b7c000,fVar6);
    }
    else {
      dVar7 = 7.673846743559028e+21;
    }
    if (cVar9 == '\0') {
      fVar6 = F32LO(dVar7) * F32HI(dVar7);
    }
    else {
      fVar6 = SUB84(dVar7 * dVar7,0);
    }
    if (cVar10 == '\0') {
      dVar7 = CONCAT44D(0x447a0000,fVar6);
    }
    else {
      dVar7 = 2.8924499526186286e+22;
    }
    if (cVar9 == '\0') {
      fVar6 = F32LO(dVar7) + F32HI(dVar7);
    }
    else {
      fVar6 = SUB84(dVar7 + dVar7,0);
    }
    if (cVar10 == '\0') {
      *(float *)(unsigned)(ar5_00 + 8) = fVar6;
    }
    else {
      *(undefined8 *)(unsigned)(ar5_00 + 8) = in_xd0;
    }
    iVar2 = (vsp = ((unsigned long)(fr0_ - 64)), rand(ar4_00,iVar1,pcVar3,puVar4));
    if (cVar10 == '\0') {
      in_dr2 = CONCAT44D(*(undefined4 *)(unsigned)ar4,uVar8);
    }
    else {
      in_dr2 = *ar4;
    }
    if (cVar10 == '\0') {
      dVar7 = CONCAT44D(0x47000000,(float)iVar2);
    }
    else {
      dVar7 = 1.1215622395287742e+23;
    }
    if (cVar9 == '\0') {
      in_dr2 = CONCAT44D(F32HI(in_dr2) *
                                (F32LO(dVar7) / F32HI(dVar7)),SUB84(in_dr2,0)
                               );
    }
    else {
      in_dr2 = in_dr2 * (dVar7 / dVar7);
    }
    if (cVar10 == '\0') {
      *(int *)(unsigned)(ar5_00 + 0xc) = (int)((ulonglong)in_dr2 >> 0x20);
    }
    else {
      *(double *)(unsigned)(ar5_00 + 0xc) = in_dr2;
    }
    iVar1 = (vsp = ((unsigned long)(fr0_ - 64)), rand(ar4_00,iVar1,pcVar3,puVar4));
    if (cVar10 == '\0') {
      dVar7 = CONCAT44D(0x47000000,(float)iVar1);
    }
    else {
      dVar7 = 1.1215622395287742e+23;
    }
    if (cVar9 == '\0') {
      fVar6 = F32LO(dVar7) / F32HI(dVar7);
    }
    else {
      fVar6 = SUB84(dVar7 / dVar7,0);
    }
    if (cVar10 == '\0') {
      dVar7 = CONCAT44D(0x44988000,fVar6);
    }
    else {
      dVar7 = 2.5220161595978547e+17;
    }
    if (cVar9 == '\0') {
      fVar6 = F32LO(dVar7) * F32HI(dVar7);
    }
    else {
      fVar6 = SUB84(dVar7 * dVar7,0);
    }
    if (cVar10 == '\0') {
      dVar7 = CONCAT44D(0x438c0000,fVar6);
    }
    else {
      dVar7 = -1.392258127104201e-250;
    }
    if (cVar9 == '\0') {
      fVar6 = F32LO(dVar7) + F32HI(dVar7);
    }
    else {
      fVar6 = SUB84(dVar7 + dVar7,0);
    }
    if (cVar10 == '\0') {
      *(float *)(unsigned)(ar5_00 + 0x10) = fVar6;
    }
    else {
      *(undefined8 *)(unsigned)(ar5_00 + 0x10) = in_xd0;
    }
    (vsp = ((unsigned long)(fr0_ - 64)), FUN_8c0fe5f0((undefined4 *)(unsigned)((int)ar4 + 0x34),ar5_00,pcVar3,puVar4));
    iVar5 = iVar5 + 1;
    iVar1 = ar5_00;
  } while( true );
}

__asm__(".globl _s_GRAPHICS_COMMON_0d377a\n.set _s_GRAPHICS_COMMON_0d377a, _s_GRAPHICS_COMMON_0d377a_def\n");
//@unit 8c0d39e4
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
undefined4 s_GRAPHICS_ENV_0d39ea_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "s_GRAPHICS_ENV_0d39ea";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 28; for (int i_ = 0; i_ < 28; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  undefined *ar5_00;
  undefined4 uVar2;
  char *ar6_00;
  undefined4 a7;
  int iVar3;
  
  (*(undefined4 *)(fr0_ - 0x1c)) = (*(undefined4 *)(unsigned)(unsigned)0x8c13f4e8);
  (*(undefined4 *)(fr0_ - 0x18)) = (*(undefined1 *)(unsigned)0x8c13f4ec);
  (*(undefined4 *)(fr0_ - 0x14)) = (*(undefined1 *)(unsigned)0x8c13f4f0);
  ({ unsigned long ri0_ = (unsigned long)(ar6); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 28)); FUN_8c21279c(0,&(*(undefined4 *)(fr0_ - 0x1c)),ar4 + 0x5d8,ar7); });
  for (iVar3 = 0; iVar3 < 0x19; iVar3 = iVar3 + 1) {
    *(uint *)(unsigned)(iVar3 * 0xc + -0x73bc8950) = *(uint *)(unsigned)(iVar3 * 0xc + -0x73bc8950) | 0x80000000;
  }
  a7 = 0x19;
  uVar2 = 0x8c4312a8;
  (vsp = ((unsigned long)(fr0_ - 28)), FUN_8c239170(0x8c4376a4,0x8c4376ac,0x8c4312a8,0x19));
  uVar1 = 0x8c4376a4;
  (vsp = ((unsigned long)(fr0_ - 28)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(ar4 + 8) + 8))))((int *)(unsigned)(ar4 + 8),0x8c4376a4,uVar2,a7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 28)), get_field_4_0253e4(ar4 + 8,uVar1,uVar2,a7));
  iVar3 = (vsp = ((unsigned long)(fr0_ - 28)), FUN_8c02100c(ar5,ar6,((undefined1 *)(unsigned)0x8c13f8cb),uVar1));
  if (iVar3 == 0) {
    report_error_message
              (((undefined1 *)(unsigned)0x8c13fab9),((undefined1 *)(unsigned)0x8c13fadd),0,2);
  }
  for (iVar3 = 0; iVar3 < 0x3c; iVar3 = iVar3 + 1) {
    *(uint *)(unsigned)(iVar3 * 0xc + ar4 + 0x164) = *(uint *)(unsigned)(iVar3 * 0xc + ar4 + 0x164) | 0x80000000;
  }
  uVar2 = 0x3c;
  uVar1 = 0x8c4312a8;
  (vsp = ((unsigned long)(fr0_ - 28)), FUN_8c239170(ar4 + 0x158,ar4 + 0x160,0x8c4312a8,0x3c));
  iVar3 = ar4 + 0x158;
  (vsp = ((unsigned long)(fr0_ - 28)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(ar4 + 0x108) + 8))))((int *)(unsigned)(ar4 + 0x108),iVar3,uVar1,uVar2));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 28)), get_field_4_0253e4(ar4 + 0x108,iVar3,uVar1,uVar2));
  ar6_00 = ((undefined1 *)(unsigned)0x8c13f8cb);
  iVar3 = (vsp = ((unsigned long)(fr0_ - 28)), FUN_8c02100c(ar5,((undefined1 *)(unsigned)0x8c13faf0),((undefined1 *)(unsigned)0x8c13f8cb),uVar1));
  if (iVar3 == 0) {
    uVar1 = 2;
    ar6_00 = (char *)(unsigned)0x0;
    report_error_message
              (((undefined1 *)(unsigned)0x8c13fafa),((undefined1 *)(unsigned)0x8c13fadd),0,2);
  }
  ar5_00 = ((undefined1 *)(unsigned)0x8c13f164);
  ({ unsigned long ri0_ = (unsigned long)(ar6); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 28)); FUN_8c015ad4(ar4 + 0x154,((undefined1 *)(unsigned)0x8c13f164),ar6_00,uVar1); });
  iVar3 = (vsp = ((unsigned long)(fr0_ - 28)), FUN_8c015bb8(ar4 + 0x1c,ar5_00,ar6_00,uVar1));
  uVar2 = (vsp = ((unsigned long)(fr0_ - 28)), FUN_8c0151fc(*(undefined4 *)(unsigned)(*(int *)(unsigned)(iVar3 + 4) + 4),ar5_00,ar6_00,uVar1));
  *(undefined4 *)(unsigned)(ar4 + 0x2c) = uVar2;
  (vsp = ((unsigned long)(fr0_ - 28)), FUN_8c0d5de0(ar4,ar5_00,ar6_00,uVar1));
  return 1;
}

__asm__(".globl _s_GRAPHICS_ENV_0d39ea\n.set _s_GRAPHICS_ENV_0d39ea, _s_GRAPHICS_ENV_0d39ea_def\n");
//@unit 8c0d3c08
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
undefined4 FUN_8c0d3c08_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0d3c08";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 32; for (int i_ = 0; i_ < 32; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 uVar2;
  undefined4 ar5_00;
  int iVar3;
  
  ar5_00 = 1;
  uVar2 = ar5;
  for (iVar3 = 0; iVar3 < 5; iVar3 = iVar3 + 1) {
    iVar1 = (vsp = ((unsigned long)(fr0_ - 32)), get_field_40_0d3d64(iVar3 * 0x44 + ar4 + 0x470,uVar2,ar6,ar7));
    if (iVar1 != 0) {
      uVar2 = *(undefined4 *)(unsigned)(ar4 + 0x5e8);
      (vsp = ((unsigned long)(fr0_ - 32)), FUN_8c0d21a0(iVar3 * 0x44 + ar4 + 0x470,uVar2,ar6,ar7));
    }
  }
  if (*(int *)(unsigned)(ar4 + 0x30) == 1) {
    if ((*(int *)(unsigned)(ar4 + 0x61c) < 2) &&
       (*(int *)(unsigned)(ar4 + 0x61c) = *(int *)(unsigned)(ar4 + 0x61c) + 2, 2 < *(int *)(unsigned)(ar4 + 0x61c))) {
      *(undefined4 *)(unsigned)(ar4 + 0x61c) = 2;
    }
    ar5_00 = 9;
  }
  else if ((-0x1e < *(int *)(unsigned)(ar4 + 0x61c)) &&
          (*(int *)(unsigned)(ar4 + 0x61c) = *(int *)(unsigned)(ar4 + 0x61c) + -2, *(int *)(unsigned)(ar4 + 0x61c) < -0x1e)) {
    *(undefined4 *)(unsigned)(ar4 + 0x61c) = 0xffffffe2;
  }
  (vsp = ((unsigned long)(fr0_ - 32)), FUN_8c0d59a4(ar4,ar5_00,ar5,ar7));
  uVar2 = (vsp = ((unsigned long)(fr0_ - 32)), FUN_8c0d5ca8(ar4,ar5_00,ar5,ar7));
  *(int *)(unsigned)(ar4 + 0x5e8) = *(int *)(unsigned)(ar4 + 0x5e8) + 1;
  return uVar2;
}

__asm__(".globl _FUN_8c0d3c08\n.set _FUN_8c0d3c08, _FUN_8c0d3c08_def\n");
//@unit 8c0d3d64
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
undefined4 get_field_40_0d3d64_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "get_field_40_0d3d64";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return *(undefined4 *)(unsigned)(ar4 + 0x40);
}

__asm__(".globl _get_field_40_0d3d64\n.set _get_field_40_0d3d64, _get_field_40_0d3d64_def\n");
//@unit 8c0d3d6c
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
undefined4 FUN_8c0d3d6c_def(ulonglong *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0d3d6c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 4; for (int i_ = 0; i_ < 4; i_++) z_[i_] = 0; }
  int iVar1;
  int ar4_00;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  float fVar5;
  double dVar6;
  float fVar9;
  double dVar7;
  ulonglong uVar8;
  code *pcVar10;
  double in_xd0 = 0;
  int ar4_01;
  char cVar11;
  char cVar12;
  
  cVar12 = '\0';
  cVar11 = '\0';
  if (((ar4[0xbd] & 1) == 0) &&
     (*(short *)(unsigned)((int)ar4 + 4) = *(short *)(unsigned)((int)ar4 + 4) + 1, *(short *)(unsigned)((int)ar4 + 4) == 0x19)) {
    *(undefined2 *)(unsigned)((int)ar4 + 4) = 0;
  }
  uVar3 = ar5;
  iVar1 = (vsp = ((unsigned long)(fr0_ - 4)), get_field_d0_0d3f70((int)ar4 + 0x34,ar5,ar6,ar7));
  ar4_00 = (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c0d3f50((int)ar4 + 0x34,ar5,ar6,ar7));
  for (iVar4 = 0; iVar4 < iVar1; iVar4 = iVar4 + 1) {
    if (cVar12 == '\0') {
      dVar6 = CONCAT44D(0x47800000,(*(undefined4 *)(unsigned)(unsigned)0x8c437c68));
    }
    else {
      dVar6 = 1.4411521878487204e+18;
      in_xd0 = (*(undefined4 *)(unsigned)(unsigned)0x8c437c68);
    }
    if (cVar11 == '\0') {
      fVar5 = F32LO(dVar6) * F32HI(dVar6);
    }
    else {
      fVar5 = SUB84(dVar6 * dVar6,0);
    }
    if (cVar12 == '\0') {
      dVar6 = CONCAT44D(0x43b40000,fVar5);
    }
    else {
      dVar6 = -3.745782517784109e-250;
    }
    if (cVar11 == '\0') {
      fVar9 = F32HI(dVar6);
      fVar5 = F32LO(dVar6) / fVar9;
      dVar6 = CONCAT44D(fVar9,fVar5);
      ar4_01 = (int)fVar5;
    }
    else {
      dVar6 = dVar6 / dVar6;
      ar4_01 = (int)dVar6;
    }
    ({ unsigned long ri0_ = (unsigned long)(uVar3); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 4)); FUN_8c25747c(ar4_01,ar5,ar6,ar7); });
    if (cVar12 == '\0') {
      dVar7 = CONCAT44D(0x3f000000,(int)(D2U(dVar6) >> 0x20));
      dVar6 = in_xd0;
    }
    else {
      dVar7 = 3.5242919858872394e-14;
    }
    if (cVar11 == '\0') {
      fVar5 = F32LO(dVar7) * F32HI(dVar7);
    }
    else {
      fVar5 = SUB84(dVar7 * dVar7,0);
    }
    if (cVar12 == '\0') {
      *(float *)(unsigned)(ar4_00 + 0x1c) = fVar5;
      dVar7 = CONCAT44D(*(undefined4 *)(unsigned)(ar4_00 + 0x1c),*(undefined4 *)(unsigned)(ar4_00 + 0xc));
    }
    else {
      *(double *)(unsigned)(ar4_00 + 0x1c) = dVar6;
      dVar6 = *(double *)(unsigned)(ar4_00 + 0xc);
      dVar7 = *(double *)(unsigned)(ar4_00 + 0x1c);
    }
    if (cVar11 == '\0') {
      fVar5 = F32LO(dVar7) + F32HI(dVar7);
    }
    else {
      fVar5 = SUB84(dVar7 + dVar7,0);
    }
    if (cVar12 == '\0') {
      *(float *)(unsigned)(ar4_00 + 0xc) = fVar5;
      uVar8 = CONCAT44((int)*ar4,*(undefined4 *)(unsigned)(ar4_00 + 0xc));
    }
    else {
      *(double *)(unsigned)(ar4_00 + 0xc) = dVar6;
      dVar6 = *(double *)(unsigned)(ar4_00 + 0xc);
      uVar8 = *ar4;
    }
    if (cVar11 != '\0' || (float)uVar8 <= (float)(uVar8 >> 0x20)) {
      if (cVar12 == '\0') {
        uVar8 = (ulonglong)*(uint *)(unsigned)(ar4_00 + 0xc);
      }
      else {
        dVar6 = *(double *)(unsigned)(ar4_00 + 0xc);
      }
      if (cVar11 == '\0' && (float)uVar8 < 0.0) {
        if (cVar12 == '\0') {
          *(undefined4 *)(unsigned)(ar4_00 + 0xc) = 0;
        }
        else {
          *(ulonglong *)(unsigned)(ar4_00 + 0xc) = uVar8 & 0xffffffff;
        }
      }
    }
    else if (cVar12 == '\0') {
      *(int *)(unsigned)(ar4_00 + 0xc) = (int)*ar4;
    }
    else {
      *(ulonglong *)(unsigned)(ar4_00 + 0xc) = *ar4;
    }
    if (cVar12 == '\0') {
      dVar7 = CONCAT44D(0x3d23d70a,(*(undefined4 *)(unsigned)(unsigned)0x8c437c68));
      in_xd0 = dVar6;
    }
    else {
      dVar7 = -1.276550078099057e-250;
      in_xd0 = (*(undefined4 *)(unsigned)(unsigned)0x8c437c68);
    }
    if (cVar11 == '\0') {
      fVar5 = F32LO(dVar7) + F32HI(dVar7);
    }
    else {
      fVar5 = SUB84(dVar7 + dVar7,0);
    }
    if (cVar12 == '\0') {
      (*(undefined4 *)(unsigned)(unsigned)0x8c437c68) = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c437c6c),fVar5);
      pcVar10 = (code *)0x43b40000;
    }
    else {
      fVar5 = 360.0;
      pcVar10 = ((void *)0x8c25747c);
      (*(undefined4 *)(unsigned)(unsigned)0x8c437c68) = in_xd0;
    }
    dVar6 = (*(undefined4 *)(unsigned)(unsigned)0x8c437c68);
    if (cVar11 == '\0' && (float)(uint)pcVar10 < fVar5) {
      if (cVar12 == '\0') {
        dVar6 = CONCAT44D(0x43b40000,SUB84((*(undefined4 *)(unsigned)(unsigned)0x8c437c68),0));
      }
      else {
        dVar6 = -3.745782517784109e-250;
        in_xd0 = (*(undefined4 *)(unsigned)(unsigned)0x8c437c68);
      }
      if (cVar11 == '\0') {
        fVar5 = F32LO(dVar6) - F32HI(dVar6);
      }
      else {
        fVar5 = SUB84(dVar6 - dVar6,0);
      }
      dVar6 = in_xd0;
      if (cVar12 == '\0') {
        (*(undefined4 *)(unsigned)(unsigned)0x8c437c68) = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c437c6c),fVar5);
        dVar6 = (*(undefined4 *)(unsigned)(unsigned)0x8c437c68);
      }
    }
    (*(undefined4 *)(unsigned)(unsigned)0x8c437c68) = dVar6;
    ar4_00 = (vsp = ((unsigned long)(fr0_ - 4)), list_node_next(ar4_00,ar5,ar6,ar7));
  }
  if (((int)ar4[6] == 1) && ((int)ar4[0xc3] == -1)) {
    uVar2 = (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c02190c(0x8c2b59d0,ar5,ar6,ar7));
    *(undefined4 *)(unsigned)(ar4 + 0xc3) = uVar2;
    ar6 = 1;
    (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c021994(0x8c2b59d0,(int)ar4[0xc3],1,ar7));
  }
  if ((int)ar4[0xc3] != -1) {
    ar6 = *(undefined4 *)(unsigned)((int)ar4 + 0x61c);
    (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c021a0c(0x8c2b59d0,(int)ar4[0xc3],ar6,ar7));
  }
  if (((int)ar4[6] == 0) && ((int)ar4[0xc3] != -1)) {
    (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c021a60(0x8c2b59d0,(int)ar4[0xc3],ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c021a8c(0x8c2b59d0,ar4 + 0xc3,ar6,ar7));
    *(undefined4 *)(unsigned)(ar4 + 0xc3) = 0xffffffff;
  }
  uVar3 = (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c0d3c08(ar4,uVar3,ar6,ar7));
  return uVar3;
}

__asm__(".globl _FUN_8c0d3d6c\n.set _FUN_8c0d3d6c, _FUN_8c0d3d6c_def\n");
//@unit 8c0d3f48
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
undefined4 list_node_next_def(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "list_node_next";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return *ar4;
}

__asm__(".globl _list_node_next\n.set _list_node_next, _list_node_next_def\n");
//@unit 8c0d3f50
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
undefined4 FUN_8c0d3f50_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0d3f50";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), list_node_next(ar4,ar5,ar6,ar7));
  return uVar1;
}

__asm__(".globl _FUN_8c0d3f50\n.set _FUN_8c0d3f50, _FUN_8c0d3f50_def\n");
//@unit 8c0d3f70
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
undefined4 get_field_d0_0d3f70_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "get_field_d0_0d3f70";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return *(undefined4 *)(unsigned)(0xd0 + ar4);
}

__asm__(".globl _get_field_d0_0d3f70\n.set _get_field_d0_0d3f70, _get_field_d0_0d3f70_def\n");
//@unit 8c0d3f7c
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
undefined4 FUN_8c0d3f7c_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0d3f7c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = *(int *)(unsigned)(*(int *)(unsigned)(ar5 + 0xc) + 100);
  if (((iVar1 == 3) || (iVar1 == 4)) || (iVar1 == 6)) {
    if (*(float *)(unsigned)(*(int *)(unsigned)(ar5 + 0xc) + 4) <= 900.0) {
      (*(undefined1 *)(unsigned)0x8c13f4f7) = 0xff;
    }
    else {
      (*(undefined1 *)(unsigned)0x8c13f4f7) = 0x78;
    }
  }
  else {
    (*(undefined1 *)(unsigned)0x8c13f4f7) = 0xff;
  }
  *((uint *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x14)) = (uint)(*(undefined1 *)(unsigned)0x8c13f4f7) << 0x18 | 0xffffff;
  uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0d4038(ar4,ar5,ar6,ar7));
  return uVar2;
}

__asm__(".globl _FUN_8c0d3f7c\n.set _FUN_8c0d3f7c, _FUN_8c0d3f7c_def\n");
//@unit 8c0d400c
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
undefined4 FUN_8c0d400c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0d400c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  *((undefined4 *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x14)) = 0x80ffffff;
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0d4038(ar4,ar5,ar6,ar7));
  return uVar1;
}

__asm__(".globl _FUN_8c0d400c\n.set _FUN_8c0d400c, _FUN_8c0d400c_def\n");
//@unit 8c0d4038
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
int FUN_8c0d4038_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0d4038";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  uVar4 = ar5;
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0d4bdc(ar4,ar5,ar6,ar7));
  piVar1 = (int *)(unsigned)(vsp = ((unsigned long)(fr0_ - 0)), get_field_4_0253e4(ar4 + 8,ar5,ar6,ar7));
  uVar3 = *(undefined4 *)(unsigned)(*piVar1 + 8);
  *(undefined4 *)(unsigned)(*piVar1 + 8) = *(undefined4 *)(unsigned)(*(short *)(unsigned)(ar4 + 4) * 0xc + *piVar1 + 8);
  *(undefined4 *)(unsigned)(*(short *)(unsigned)(ar4 + 4) * 0xc + *piVar1 + 8) = uVar3;
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c01538c(ar4 + 8,ar5,ar6,ar7));
  uVar3 = 0;
  ({ unsigned long ri0_ = (unsigned long)(uVar4); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); FUN_8c256328(0,ar5,ar6,ar7); });
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c019058(uVar3,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c015adc(ar4 + 0x10,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c256210(1,ar5,ar6,ar7));
  uVar4 = *(undefined4 *)(unsigned)(*(short *)(unsigned)(ar4 + 4) * 0xc + *piVar1 + 8);
  *(undefined4 *)(unsigned)(*(short *)(unsigned)(ar4 + 4) * 0xc + *piVar1 + 8) = *(undefined4 *)(unsigned)(*piVar1 + 8);
  iVar2 = *piVar1;
  *(undefined4 *)(unsigned)(iVar2 + 8) = uVar4;
  return iVar2;
}

__asm__(".globl _FUN_8c0d4038\n.set _FUN_8c0d4038, _FUN_8c0d4038_def\n");
//@unit 8c0d4124
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
undefined4 * FUN_8c0d4124_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0d4124";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 100; for (int i_ = 0; i_ < 100; i_++) z_[i_] = 0; }
  undefined8 uVar1;
  int *piVar2;
  float *pfVar3;
  int ar5_00;
  undefined4 uVar4;
  int iVar5;
  float fVar6;
  float fVar8;
  code *pcVar9;
  double dVar7;
  undefined8 in_xd0 = 0;
  undefined4 in_PR = 0;
  int ar4_00;
  char cVar10;
  char cVar11;
  
  cVar11 = '\0';
  cVar10 = '\0';
  ar5_00 = ar5;
  (*(undefined4 *)(fr0_ - 0x1c)) = in_PR;
  piVar2 = (int *)(unsigned)(vsp = ((unsigned long)(fr0_ - 100)), get_field_4_0253e4(ar4 + 8,ar5,ar6,ar7));
  uVar4 = *(undefined4 *)(unsigned)(*piVar2 + 8);
  *(undefined4 *)(unsigned)(*piVar2 + 8) = *(undefined4 *)(unsigned)(*(short *)(unsigned)(ar4 + 4) * 0xc + *piVar2 + 8);
  *(undefined4 *)(unsigned)(*(short *)(unsigned)(ar4 + 4) * 0xc + *piVar2 + 8) = uVar4;
  (vsp = ((unsigned long)(fr0_ - 100)), FUN_8c01538c(ar4 + 8,ar5_00,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 100)), FUN_8c015af8(ar4 + 0x1c,ar5_00,ar6,ar7));
  for (iVar5 = 0; iVar5 < 3; iVar5 = iVar5 + 1) {
    (vsp = ((unsigned long)(fr0_ - 100)), FUN_8c0d43cc(&(*(float *)(fr0_ - 0x24)),ar5_00,ar6,ar7));
    if (cVar11 == '\0') {
      fVar8 = -150.0;
      fVar6 = (*(float *)(fr0_ - 0x24));
    }
    else {
      in_xd0 = CONCAT44((*(float *)(fr0_ - 0x20)),(*(float *)(fr0_ - 0x24)));
      fVar6 = -150.0;
      fVar8 = 800.0;
    }
    if (cVar10 != '\0' || fVar8 <= fVar6) {
      if (cVar11 == '\0') {
        fVar8 = 800.0;
        fVar6 = (*(float *)(fr0_ - 0x24));
      }
      else {
        in_xd0 = CONCAT44((*(float *)(fr0_ - 0x20)),(*(float *)(fr0_ - 0x24)));
        fVar6 = 800.0;
        fVar8 = -100.0;
      }
      if (cVar10 != '\0' || fVar6 <= fVar8) {
        if (cVar11 == '\0') {
          fVar8 = -100.0;
          fVar6 = (*(float *)(fr0_ - 0x20));
        }
        else {
          in_xd0 = CONCAT44((*(undefined4 *)(fr0_ - 0x1c)),(*(float *)(fr0_ - 0x20)));
          fVar6 = -100.0;
          fVar8 = 600.0;
        }
        if (cVar10 != '\0' || fVar8 <= fVar6) {
          if (cVar11 == '\0') {
            fVar8 = 600.0;
            fVar6 = (*(float *)(fr0_ - 0x20));
          }
          else {
            in_xd0 = CONCAT44((*(undefined4 *)(fr0_ - 0x1c)),(*(float *)(fr0_ - 0x20)));
            fVar6 = 600.0;
            fVar8 = 4.87652e-43;
          }
          if (cVar10 != '\0' || fVar6 <= fVar8) {
            pfVar3 = (float *)(unsigned)(ar5 + iVar5 * 0x16c + 0x15c);
            if (cVar11 == '\0') {
              fVar6 = *pfVar3;
              pcVar9 = (code *)0xbf6b851f;
            }
            else {
              in_xd0 = *(undefined8 *)(unsigned)pfVar3;
              fVar6 = -0.92;
              pcVar9 = ((void *)0x8c256328);
            }
            if (cVar10 != '\0' || (float)(uint)pcVar9 <= fVar6) {
              uVar4 = 0;
              ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x64))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 100)); FUN_8c256328(0,ar5_00,ar6,ar7); });
              (vsp = ((unsigned long)(fr0_ - 100)), FUN_8c019058(uVar4,ar5_00,ar6,ar7));
              (vsp = ((unsigned long)(fr0_ - 100)), FUN_8c019160(uVar4,ar5_00,ar6,ar7));
              (vsp = ((unsigned long)(fr0_ - 100)), FUN_8c015b30(ar4 + iVar5 * 4 + 0x20,ar5_00,ar6,ar7));
              (vsp = ((unsigned long)(fr0_ - 100)), FUN_8c256210(1,ar5_00,ar6,ar7));
            }
          }
        }
      }
    }
  }
  uVar4 = *(undefined4 *)(unsigned)(*(short *)(unsigned)(ar4 + 4) * 0xc + *piVar2 + 8);
  iVar5 = (int)*(short *)(unsigned)(ar4 + 4);
  *(undefined4 *)(unsigned)(iVar5 * 0xc + *piVar2 + 8) = *(undefined4 *)(unsigned)(*piVar2 + 8);
  *(undefined4 *)(unsigned)(*piVar2 + 8) = uVar4;
  (vsp = ((unsigned long)(fr0_ - 100)), FUN_8c0d49cc(ar4,ar5_00,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 100)), FUN_8c0d4a90(ar4,ar5_00,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 100)), FUN_8c0d5d28(ar4,ar5_00,ar6,ar7));
  if (cVar11 == '\0') {
    dVar7 = CONCAT44D(0x47800000,(*(undefined4 *)(unsigned)(unsigned)0x8c437c6c));
  }
  else {
    dVar7 = 1.4411521878487204e+18;
    in_xd0 = (*(undefined4 *)(unsigned)(unsigned)0x8c437c6c);
  }
  if (cVar10 == '\0') {
    fVar6 = F32LO(dVar7) * F32HI(dVar7);
  }
  else {
    fVar6 = SUB84(dVar7 * dVar7,0);
  }
  if (cVar11 == '\0') {
    dVar7 = CONCAT44D(0x43b40000,fVar6);
  }
  else {
    dVar7 = -3.745782517784109e-250;
  }
  if (cVar10 == '\0') {
    ar4_00 = (int)(F32LO(dVar7) / F32HI(dVar7));
  }
  else {
    ar4_00 = (int)(dVar7 / dVar7);
  }
  ({ unsigned long ri0_ = (unsigned long)(iVar5); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 100)); FUN_8c25747c(ar4_00,ar5_00,ar6,ar7); });
  ({ unsigned long ri0_ = (unsigned long)(iVar5); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 100)); FUN_8c010e38(ar4_00,ar5_00,ar6,ar7); });
  if (cVar11 == '\0') {
    dVar7 = CONCAT44D(0x41200000,(int)(*(undefined4 *)(unsigned)(unsigned)0x8c437c6c));
  }
  else {
    dVar7 = 1.1409237244491948e+308;
    in_xd0 = (*(undefined4 *)(unsigned)(unsigned)0x8c437c6c);
  }
  if (cVar10 == '\0') {
    fVar6 = F32LO(dVar7) + F32HI(dVar7);
  }
  else {
    fVar6 = SUB84(dVar7 + dVar7,0);
  }
  if (cVar11 == '\0') {
    (*(undefined4 *)(unsigned)(unsigned)0x8c437c6c) = CONCAT44((*(undefined4 *)(unsigned)(unsigned)0x8c437c70),fVar6);
    pcVar9 = (code *)0x43b40000;
  }
  else {
    fVar6 = 360.0;
    pcVar9 = ((void *)0x8c25747c);
    (*(undefined4 *)(unsigned)(unsigned)0x8c437c6c) = in_xd0;
  }
  uVar1 = (*(undefined4 *)(unsigned)(unsigned)0x8c437c6c);
  if (cVar10 != '\0' || (float)(uint)pcVar9 <= fVar6) {
    if (cVar11 == '\0') {
      dVar7 = CONCAT44D(0x43b40000,(int)(*(undefined4 *)(unsigned)(unsigned)0x8c437c6c));
    }
    else {
      dVar7 = -3.745782517784109e-250;
      in_xd0 = (*(undefined4 *)(unsigned)(unsigned)0x8c437c6c);
    }
    if (cVar10 == '\0') {
      fVar6 = F32LO(dVar7) - F32HI(dVar7);
    }
    else {
      fVar6 = SUB84(dVar7 - dVar7,0);
    }
    uVar1 = in_xd0;
    if (cVar11 == '\0') {
      (*(undefined4 *)(unsigned)(unsigned)0x8c437c6c) = CONCAT44((*(undefined4 *)(unsigned)(unsigned)0x8c437c70),fVar6);
      uVar1 = (*(undefined4 *)(unsigned)(unsigned)0x8c437c6c);
    }
  }
  (*(undefined4 *)(unsigned)(unsigned)0x8c437c6c) = uVar1;
  return ((undefined4 *)(unsigned)0x8c0d43bc);
}

__asm__(".globl _FUN_8c0d4124\n.set _FUN_8c0d4124, _FUN_8c0d4124_def\n");
//@unit 8c0d43cc
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
undefined4 FUN_8c0d43cc_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0d43cc";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 16; for (int i_ = 0; i_ < 16; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 16)), FUN_8c256294(0,((undefined1 *)(fr0_ - 0x10)),ar4,ar7));
  return uVar1;
}

__asm__(".globl _FUN_8c0d43cc\n.set _FUN_8c0d43cc, _FUN_8c0d43cc_def\n");
//@unit 8c0d4428
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
undefined4 * FUN_8c0d4428_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0d4428";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 100; for (int i_ = 0; i_ < 100; i_++) z_[i_] = 0; }
  undefined8 uVar1;
  int *piVar2;
  float *pfVar3;
  int ar5_00;
  undefined4 uVar4;
  int iVar5;
  float fVar6;
  float fVar8;
  code *pcVar9;
  double dVar7;
  undefined8 in_xd0 = 0;
  undefined4 in_PR = 0;
  int ar4_00;
  char cVar10;
  char cVar11;
  
  cVar11 = '\0';
  cVar10 = '\0';
  ar5_00 = ar5;
  (*(undefined4 *)(fr0_ - 0x1c)) = in_PR;
  piVar2 = (int *)(unsigned)(vsp = ((unsigned long)(fr0_ - 100)), get_field_4_0253e4(ar4 + 8,ar5,ar6,ar7));
  uVar4 = *(undefined4 *)(unsigned)(*piVar2 + 8);
  *(undefined4 *)(unsigned)(*piVar2 + 8) = *(undefined4 *)(unsigned)(*(short *)(unsigned)(ar4 + 4) * 0xc + *piVar2 + 8);
  *(undefined4 *)(unsigned)(*(short *)(unsigned)(ar4 + 4) * 0xc + *piVar2 + 8) = uVar4;
  (vsp = ((unsigned long)(fr0_ - 100)), FUN_8c01538c(ar4 + 8,ar5_00,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 100)), FUN_8c015af8(ar4 + 0x1c,ar5_00,ar6,ar7));
  for (iVar5 = 0; iVar5 < 3; iVar5 = iVar5 + 1) {
    (vsp = ((unsigned long)(fr0_ - 100)), FUN_8c0d43cc(&(*(float *)(fr0_ - 0x24)),ar5_00,ar6,ar7));
    if (cVar11 == '\0') {
      fVar8 = -150.0;
      fVar6 = (*(float *)(fr0_ - 0x24));
    }
    else {
      in_xd0 = CONCAT44((*(float *)(fr0_ - 0x20)),(*(float *)(fr0_ - 0x24)));
      fVar6 = -150.0;
      fVar8 = 800.0;
    }
    if (cVar10 != '\0' || fVar8 <= fVar6) {
      if (cVar11 == '\0') {
        fVar8 = 800.0;
        fVar6 = (*(float *)(fr0_ - 0x24));
      }
      else {
        in_xd0 = CONCAT44((*(float *)(fr0_ - 0x20)),(*(float *)(fr0_ - 0x24)));
        fVar6 = 800.0;
        fVar8 = -100.0;
      }
      if (cVar10 != '\0' || fVar6 <= fVar8) {
        if (cVar11 == '\0') {
          fVar8 = -100.0;
          fVar6 = (*(float *)(fr0_ - 0x20));
        }
        else {
          in_xd0 = CONCAT44((*(undefined4 *)(fr0_ - 0x1c)),(*(float *)(fr0_ - 0x20)));
          fVar6 = -100.0;
          fVar8 = 600.0;
        }
        if (cVar10 != '\0' || fVar8 <= fVar6) {
          if (cVar11 == '\0') {
            fVar8 = 600.0;
            fVar6 = (*(float *)(fr0_ - 0x20));
          }
          else {
            in_xd0 = CONCAT44((*(undefined4 *)(fr0_ - 0x1c)),(*(float *)(fr0_ - 0x20)));
            fVar6 = 600.0;
            fVar8 = 4.87652e-43;
          }
          if (cVar10 != '\0' || fVar6 <= fVar8) {
            pfVar3 = (float *)(unsigned)(ar5 + iVar5 * 0x16c + 0x15c);
            if (cVar11 == '\0') {
              fVar6 = *pfVar3;
              pcVar9 = (code *)0xbf6b851f;
            }
            else {
              in_xd0 = *(undefined8 *)(unsigned)pfVar3;
              fVar6 = -0.92;
              pcVar9 = ((void *)0x8c256328);
            }
            if (cVar10 != '\0' || (float)(uint)pcVar9 <= fVar6) {
              uVar4 = 0;
              ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x64))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 100)); FUN_8c256328(0,ar5_00,ar6,ar7); });
              (vsp = ((unsigned long)(fr0_ - 100)), FUN_8c019058(uVar4,ar5_00,ar6,ar7));
              (vsp = ((unsigned long)(fr0_ - 100)), FUN_8c019160(uVar4,ar5_00,ar6,ar7));
              (vsp = ((unsigned long)(fr0_ - 100)), FUN_8c015af8(ar4 + iVar5 * 4 + 0x20,ar5_00,ar6,ar7));
              (vsp = ((unsigned long)(fr0_ - 100)), FUN_8c256210(1,ar5_00,ar6,ar7));
            }
          }
        }
      }
    }
  }
  uVar4 = *(undefined4 *)(unsigned)(*(short *)(unsigned)(ar4 + 4) * 0xc + *piVar2 + 8);
  iVar5 = (int)*(short *)(unsigned)(ar4 + 4);
  *(undefined4 *)(unsigned)(iVar5 * 0xc + *piVar2 + 8) = *(undefined4 *)(unsigned)(*piVar2 + 8);
  *(undefined4 *)(unsigned)(*piVar2 + 8) = uVar4;
  (vsp = ((unsigned long)(fr0_ - 100)), FUN_8c0d49cc(ar4,ar5_00,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 100)), FUN_8c0d4a90(ar4,ar5_00,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 100)), FUN_8c0d5d28(ar4,ar5_00,ar6,ar7));
  if (cVar11 == '\0') {
    dVar7 = CONCAT44D(0x47800000,(*(undefined4 *)(unsigned)(unsigned)0x8c437c70));
  }
  else {
    dVar7 = 1.4411521878487204e+18;
    in_xd0 = (*(undefined4 *)(unsigned)(unsigned)0x8c437c70);
  }
  if (cVar10 == '\0') {
    fVar6 = F32LO(dVar7) * F32HI(dVar7);
  }
  else {
    fVar6 = SUB84(dVar7 * dVar7,0);
  }
  if (cVar11 == '\0') {
    dVar7 = CONCAT44D(0x43b40000,fVar6);
  }
  else {
    dVar7 = -3.745782517784109e-250;
  }
  if (cVar10 == '\0') {
    ar4_00 = (int)(F32LO(dVar7) / F32HI(dVar7));
  }
  else {
    ar4_00 = (int)(dVar7 / dVar7);
  }
  ({ unsigned long ri0_ = (unsigned long)(iVar5); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 100)); FUN_8c25747c(ar4_00,ar5_00,ar6,ar7); });
  ({ unsigned long ri0_ = (unsigned long)(iVar5); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 100)); FUN_8c010e38(ar4_00,ar5_00,ar6,ar7); });
  if (cVar11 == '\0') {
    dVar7 = CONCAT44D(0x41200000,(int)(*(undefined4 *)(unsigned)(unsigned)0x8c437c70));
  }
  else {
    dVar7 = 6.207226606352174e-78;
    in_xd0 = (*(undefined4 *)(unsigned)(unsigned)0x8c437c70);
  }
  if (cVar10 == '\0') {
    fVar6 = F32LO(dVar7) + F32HI(dVar7);
  }
  else {
    fVar6 = SUB84(dVar7 + dVar7,0);
  }
  if (cVar11 == '\0') {
    (*(undefined4 *)(unsigned)(unsigned)0x8c437c70) = CONCAT44((*(undefined4 *)(unsigned)(unsigned)0x8c437c74),fVar6);
    pcVar9 = (code *)0x43b40000;
  }
  else {
    fVar6 = 360.0;
    pcVar9 = ((void *)0x8c25747c);
    (*(undefined4 *)(unsigned)(unsigned)0x8c437c70) = in_xd0;
  }
  uVar1 = (*(undefined4 *)(unsigned)(unsigned)0x8c437c70);
  if (cVar10 != '\0' || (float)(uint)pcVar9 <= fVar6) {
    if (cVar11 == '\0') {
      dVar7 = CONCAT44D(0x43b40000,(int)(*(undefined4 *)(unsigned)(unsigned)0x8c437c70));
    }
    else {
      dVar7 = -3.745782517784109e-250;
      in_xd0 = (*(undefined4 *)(unsigned)(unsigned)0x8c437c70);
    }
    if (cVar10 == '\0') {
      fVar6 = F32LO(dVar7) - F32HI(dVar7);
    }
    else {
      fVar6 = SUB84(dVar7 - dVar7,0);
    }
    uVar1 = in_xd0;
    if (cVar11 == '\0') {
      (*(undefined4 *)(unsigned)(unsigned)0x8c437c70) = CONCAT44((*(undefined4 *)(unsigned)(unsigned)0x8c437c74),fVar6);
      uVar1 = (*(undefined4 *)(unsigned)(unsigned)0x8c437c70);
    }
  }
  (*(undefined4 *)(unsigned)(unsigned)0x8c437c70) = uVar1;
  return ((undefined4 *)(unsigned)0x8c0d46bc);
}

__asm__(".globl _FUN_8c0d4428\n.set _FUN_8c0d4428, _FUN_8c0d4428_def\n");
//@unit 8c0d46cc
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
undefined4 FUN_8c0d46cc_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0d46cc";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 88; for (int i_ = 0; i_ < 88; i_++) z_[i_] = 0; }
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  code *pcVar6;
  char cVar7;
  char cVar8;
  
  cVar8 = '\0';
  cVar7 = '\0';
  piVar1 = (int *)(unsigned)(vsp = ((unsigned long)(fr0_ - 88)), get_field_4_0253e4(ar4 + 8,ar5,ar6,ar7));
  uVar2 = *(undefined4 *)(unsigned)(*piVar1 + 8);
  *(undefined4 *)(unsigned)(*piVar1 + 8) = *(undefined4 *)(unsigned)(*(short *)(unsigned)(ar4 + 4) * 0xc + *piVar1 + 8);
  *(undefined4 *)(unsigned)(*(short *)(unsigned)(ar4 + 4) * 0xc + *piVar1 + 8) = uVar2;
  (vsp = ((unsigned long)(fr0_ - 88)), FUN_8c01538c(ar4 + 8,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 88)), FUN_8c233dac(ar4 + 0x5ec,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 88)), FUN_8c015af8(ar4 + 0x1c,ar5,ar6,ar7));
  for (iVar3 = 0; iVar3 < 3; iVar3 = iVar3 + 1) {
    (vsp = ((unsigned long)(fr0_ - 88)), FUN_8c0d43cc(&(*(float *)(fr0_ - 0x24)),ar5,ar6,ar7));
    if (cVar8 == '\0') {
      fVar5 = -150.0;
      fVar4 = (*(float *)(fr0_ - 0x24));
    }
    else {
      fVar4 = -150.0;
      fVar5 = 800.0;
    }
    if (cVar7 != '\0' || fVar5 <= fVar4) {
      if (cVar8 == '\0') {
        fVar5 = 800.0;
        fVar4 = (*(float *)(fr0_ - 0x24));
      }
      else {
        fVar4 = 800.0;
        fVar5 = -100.0;
      }
      if (cVar7 != '\0' || fVar4 <= fVar5) {
        if (cVar8 == '\0') {
          fVar5 = -100.0;
          fVar4 = (*(float *)(fr0_ - 0x20));
        }
        else {
          fVar4 = -100.0;
          fVar5 = 600.0;
        }
        if (cVar7 != '\0' || fVar5 <= fVar4) {
          if (cVar8 == '\0') {
            pcVar6 = (code *)0x44160000;
            fVar4 = (*(float *)(fr0_ - 0x20));
          }
          else {
            fVar4 = 600.0;
            pcVar6 = ((void *)0x8c256328);
          }
          if (cVar7 != '\0' || fVar4 <= (float)(uint)pcVar6) {
            uVar2 = 0;
            ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x58))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 88)); FUN_8c256328(0,ar5,ar6,ar7); });
            (vsp = ((unsigned long)(fr0_ - 88)), FUN_8c019058(uVar2,ar5,ar6,ar7));
            (vsp = ((unsigned long)(fr0_ - 88)), FUN_8c019160(uVar2,ar5,ar6,ar7));
            (vsp = ((unsigned long)(fr0_ - 88)), FUN_8c015af8(ar4 + iVar3 * 4 + 0x20,ar5,ar6,ar7));
            (vsp = ((unsigned long)(fr0_ - 88)), FUN_8c256210(1,ar5,ar6,ar7));
          }
        }
      }
    }
  }
  uVar2 = *(undefined4 *)(unsigned)(*(short *)(unsigned)(ar4 + 4) * 0xc + *piVar1 + 8);
  *(undefined4 *)(unsigned)(*(short *)(unsigned)(ar4 + 4) * 0xc + *piVar1 + 8) = *(undefined4 *)(unsigned)(*piVar1 + 8);
  *(undefined4 *)(unsigned)(*piVar1 + 8) = uVar2;
  (vsp = ((unsigned long)(fr0_ - 88)), FUN_8c233dac(((undefined1 *)(unsigned)0x8c13f320),ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 88)), FUN_8c0d49cc(ar4,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 88)), FUN_8c0d4a90(ar4,ar5,ar6,ar7));
  uVar2 = (vsp = ((unsigned long)(fr0_ - 88)), FUN_8c0d5d28(ar4,ar5,ar6,ar7));
  return uVar2;
}

__asm__(".globl _FUN_8c0d46cc\n.set _FUN_8c0d46cc, _FUN_8c0d46cc_def\n");
//@unit 8c0d4900
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
undefined4 FUN_8c0d4900_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0d4900";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)(unsigned)(vsp = ((unsigned long)(fr0_ - 0)), get_field_4_0253e4(ar4 + 8,ar5,ar6,ar7));
  uVar2 = *(undefined4 *)(unsigned)(*piVar1 + 8);
  *(undefined4 *)(unsigned)(*piVar1 + 8) = *(undefined4 *)(unsigned)(*(short *)(unsigned)(ar4 + 4) * 0xc + *piVar1 + 8);
  *(undefined4 *)(unsigned)(*(short *)(unsigned)(ar4 + 4) * 0xc + *piVar1 + 8) = uVar2;
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c01538c(ar4 + 8,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c015af8(ar4 + 0x1c,ar5,ar6,ar7));
  uVar2 = *(undefined4 *)(unsigned)(*(short *)(unsigned)(ar4 + 4) * 0xc + *piVar1 + 8);
  *(undefined4 *)(unsigned)(*(short *)(unsigned)(ar4 + 4) * 0xc + *piVar1 + 8) = *(undefined4 *)(unsigned)(*piVar1 + 8);
  *(undefined4 *)(unsigned)(*piVar1 + 8) = uVar2;
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0d49cc(ar4,ar5,ar6,ar7));
  uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0d4a90(ar4,ar5,ar6,ar7));
  return uVar2;
}

__asm__(".globl _FUN_8c0d4900\n.set _FUN_8c0d4900, _FUN_8c0d4900_def\n");
//@unit 8c0d49cc
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
int FUN_8c0d49cc_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0d49cc";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 52; for (int i_ = 0; i_ < 52; i_++) z_[i_] = 0; }
  int iVar1;
  int ar4_00;
  undefined4 ar5_00;
  undefined4 ar6_00;
  int iVar2;
  undefined4 in_PR = 0;
  char cVar3;
  
  cVar3 = '\0';
  (*(undefined4 *)(fr0_ - 0x34)) = (*(undefined4 *)(unsigned)(unsigned)0x8c13f4f8);
  (*(undefined4 *)(fr0_ - 0x28)) = (*(undefined1 *)(unsigned)0x8c13f504);
  (*(undefined4 *)(fr0_ - 0x24)) = (*(undefined1 *)(unsigned)0x8c13f508);
  (*(unsigned *)(fr0_ - 0x30) = (unsigned)(unsigned long)(&(*(undefined4 *)(fr0_ - 0x20))));
  (*(unsigned *)(fr0_ - 0x2c) = (unsigned)(unsigned long)(&(*(undefined4 *)(fr0_ - 0x34))));
  (*(undefined4 *)(fr0_ - 0x14)) = in_PR;
  iVar1 = (vsp = ((unsigned long)(fr0_ - 52)), get_field_d0_0d3f70(ar4 + 0x34,ar5,ar6,ar7));
  ar4_00 = (vsp = ((unsigned long)(fr0_ - 52)), FUN_8c0d3f50(ar4 + 0x34,ar5,ar6,ar7));
  for (iVar2 = 0; iVar2 < iVar1; iVar2 = iVar2 + 1) {
    if (cVar3 == '\0') {
      (*(undefined4 *)(fr0_ - 0x20)) = *(undefined4 *)(unsigned)(ar4_00 + 8);
      (*(undefined4 *)(fr0_ - 0x1c)) = *(undefined4 *)(unsigned)(ar4_00 + 0xc);
      (*(undefined4 *)(fr0_ - 0x18)) = *(undefined4 *)(unsigned)(ar4_00 + 0x10);
    }
    else {
      (*(undefined4 *)(fr0_ - 0x20)) = (undefined4)*(undefined8 *)(unsigned)(ar4_00 + 8);
      (*(undefined4 *)(fr0_ - 0x1c)) = (undefined4)*(undefined8 *)(unsigned)(ar4_00 + 0xc);
      (*(undefined4 *)(fr0_ - 0x18)) = (undefined4)*(undefined8 *)(unsigned)(ar4_00 + 0x10);
      (*(undefined4 *)(fr0_ - 0x14)) = (undefined4)((ulonglong)*(undefined8 *)(unsigned)(ar4_00 + 0x10) >> 0x20);
    }
    ar6_00 = 0x40;
    ar5_00 = 1;
    (vsp = ((unsigned long)(fr0_ - 52)), FUN_8c234fd0(((undefined4 * *)(fr0_ - 0x30)),1,0x40,ar7));
    ar4_00 = (vsp = ((unsigned long)(fr0_ - 52)), list_node_next(ar4_00,ar5_00,ar6_00,ar7));
  }
  return ar4_00;
}

__asm__(".globl _FUN_8c0d49cc\n.set _FUN_8c0d49cc, _FUN_8c0d49cc_def\n");
//@unit 8c0d4a90
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
undefined4 FUN_8c0d4a90_def(int ar4,int ar5,int ar6,int ar7)

{
  ring[rp++ & 255] = "FUN_8c0d4a90";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  int iVar2;
  float fVar3;
  code *pcVar4;
  char cVar5;
  char cVar6;
  
  cVar6 = '\0';
  cVar5 = '\0';
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c01538c(ar4 + 0x108,ar5,ar6,ar7));
  iVar2 = 0;
  do {
    if (4 < iVar2) {
      return 5;
    }
    iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), get_field_40_0d3d64(iVar2 * 0x44 + ar4 + 0x470,ar5,ar6,ar7));
    if (iVar1 != 0) {
      iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), get_field_40_0d3d64(iVar2 * 0x44 + ar4 + 0x470,ar5,ar6,ar7));
      if (iVar1 == 1) {
        if (cVar6 == '\0') {
          fVar3 = *(float *)(unsigned)(iVar2 * 0x44 + ar4 + 0x478);
          pcVar4 = (code *)0x44960000;
        }
        else {
          fVar3 = 1200.0;
          pcVar4 = ((void *)0x8c0d4bd4);
        }
        if (cVar5 == '\0' && (float)(uint)pcVar4 < fVar3) goto LAB_8c0d4b8e;
      }
      iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), get_field_3c_0d4bd4(iVar2 * 0x44 + ar4 + 0x470,ar5,ar6,ar7));
      if ((iVar1 == 3) || (iVar1 == 4)) {
        ar6 = ar4 + 0x154;
        ar5 = ar4 + 0x108;
        (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0d2264(iVar2 * 0x44 + ar4 + 0x470,ar5,ar6,ar7));
      }
      else {
        ar7 = ar4 + 0x110;
        ar6 = ar4 + 0x430;
        ar5 = ar4 + 0x108;
        (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0d2478(iVar2 * 0x44 + ar4 + 0x470,ar5,ar6,ar7));
      }
    }
LAB_8c0d4b8e:
    iVar2 = iVar2 + 1;
  } while( true );
}

__asm__(".globl _FUN_8c0d4a90\n.set _FUN_8c0d4a90, _FUN_8c0d4a90_def\n");
//@unit 8c0d4bd4
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
undefined4 get_field_3c_0d4bd4_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "get_field_3c_0d4bd4";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return *(undefined4 *)(unsigned)(ar4 + 0x3c);
}

__asm__(".globl _get_field_3c_0d4bd4\n.set _get_field_3c_0d4bd4, _get_field_3c_0d4bd4_def\n");
//@unit 8c0d4bdc
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
undefined4 FUN_8c0d4bdc_def(float *ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0d4bdc";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 32; for (int i_ = 0; i_ < 32; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  undefined4 *ar5_00;
  undefined1 *ar6_00;
  
  if (*(float *)(unsigned)(*(int *)(unsigned)(ar5 + 0xc) + 4) <= *ar4) {
    (*(undefined4 *)(fr0_ - 0x10)) = 0x3f34fdf4;
  }
  else {
    (*(undefined4 *)(fr0_ - 0x10)) = 0xbf34fdf4;
  }
  (*(undefined4 *)(fr0_ - 0xc)) = 0xbf34fdf4;
  (*(undefined4 *)(fr0_ - 0x14)) = 0;
  ar6_00 = ((undefined1 *)(fr0_ - 0x20));
  ar5_00 = &(*(undefined4 *)(fr0_ - 0x14));
  uVar1 = 0;
  ({ unsigned long ri0_ = (unsigned long)(ar4); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 32)); FUN_8c21279c(0,ar5_00,ar6_00,ar7); });
  (vsp = ((unsigned long)(fr0_ - 32)), FUN_8c219038(uVar1,ar5_00,ar6_00,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 32)), FUN_8c219070(uVar1,ar5_00,ar6_00,ar7));
  return uVar1;
}

__asm__(".globl _FUN_8c0d4bdc\n.set _FUN_8c0d4bdc, _FUN_8c0d4bdc_def\n");
//@unit 8c0d4c74
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
undefined4 FUN_8c0d4c74_def(float *ar4,undefined4 *ar5,int ar6,float ar7)

{
  ring[rp++ & 255] = "FUN_8c0d4c74";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 32; for (int i_ = 0; i_ < 32; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 uVar2;
  undefined4 *ar5_00;
  int ar6_00;
  float ar7_00;
  int iVar3;
  float fVar4;
  undefined8 in_dr0 = 0;
  undefined8 in_xd0 = 0;
  char cVar5;
  char cVar6;
  
  cVar6 = '\0';
  cVar5 = '\0';
  iVar3 = 0;
  ar5_00 = ar5;
  ar6_00 = ar6;
  ar7_00 = ar7;
  while( true ) {
    if (4 < iVar3) {
      if (ar6 == 3) {
        ((undefined4 *)(fr0_ - 0x20))[0] = (vsp = ((unsigned long)(fr0_ - 32)), FUN_8c02190c(0x8c2b59d0,ar5_00,ar6_00,ar7_00));
        ar6_00 = 8;
        (vsp = ((unsigned long)(fr0_ - 32)), FUN_8c021994(0x8c2b59d0,((undefined4 *)(fr0_ - 0x20))[0],8,ar7_00));
        ar5_00 = ((undefined4 *)(fr0_ - 0x20));
        (vsp = ((unsigned long)(fr0_ - 32)), FUN_8c021a8c(0x8c2b59d0,ar5_00,ar6_00,ar7_00));
      }
      else if (ar6 == 1) {
        ((undefined4 *)(fr0_ - 0x20))[0] = (vsp = ((unsigned long)(fr0_ - 32)), FUN_8c02190c(0x8c2b59d0,ar5_00,ar6_00,ar7_00));
        ar6_00 = 0x11;
        (vsp = ((unsigned long)(fr0_ - 32)), FUN_8c021994(0x8c2b59d0,((undefined4 *)(fr0_ - 0x20))[0],0x11,ar7_00));
        ar5_00 = ((undefined4 *)(fr0_ - 0x20));
        (vsp = ((unsigned long)(fr0_ - 32)), FUN_8c021a8c(0x8c2b59d0,ar5_00,ar6_00,ar7_00));
      }
      else if (ar6 == 2) {
        ((undefined4 *)(fr0_ - 0x20))[0] = (vsp = ((unsigned long)(fr0_ - 32)), FUN_8c02190c(0x8c2b59d0,ar5_00,ar6_00,ar7_00));
        ar6_00 = 7;
        (vsp = ((unsigned long)(fr0_ - 32)), FUN_8c021994(0x8c2b59d0,((undefined4 *)(fr0_ - 0x20))[0],7,ar7_00));
        ar5_00 = ((undefined4 *)(fr0_ - 0x20));
        (vsp = ((unsigned long)(fr0_ - 32)), FUN_8c021a8c(0x8c2b59d0,ar5_00,ar6_00,ar7_00));
      }
      else if (ar6 == 4) {
        ((undefined4 *)(fr0_ - 0x20))[0] = (vsp = ((unsigned long)(fr0_ - 32)), FUN_8c02190c(0x8c2b59d0,ar5_00,ar6_00,ar7_00));
        ar6_00 = 0x13;
        (vsp = ((unsigned long)(fr0_ - 32)), FUN_8c021994(0x8c2b59d0,((undefined4 *)(fr0_ - 0x20))[0],0x13,ar7_00));
        ar5_00 = ((undefined4 *)(fr0_ - 0x20));
        (vsp = ((unsigned long)(fr0_ - 32)), FUN_8c021a8c(0x8c2b59d0,ar5_00,ar6_00,ar7_00));
      }
      iVar3 = 0;
      while( true ) {
        if (4 < iVar3) {
          return 5;
        }
        iVar1 = (vsp = ((unsigned long)(fr0_ - 32)), get_field_40_0d3d64(ar4 + iVar3 * 0x11 + 0x11c,ar5_00,ar6_00,ar7_00));
        fVar4 = (float)in_dr0;
        if (iVar1 == 0) break;
        iVar3 = iVar3 + 1;
      }
      (vsp = ((unsigned long)(fr0_ - 32)), Vec3_assign(ar4 + iVar3 * 0x11 + 0x11c,ar5,ar6_00,ar7_00));
      if (cVar6 == '\0') {
        fVar4 = *ar4;
      }
      else {
        in_xd0 = *(undefined8 *)(unsigned)ar4;
      }
      if (cVar5 == '\0') {
        fVar4 = fVar4 - 1.0;
      }
      else {
        fVar4 = SUB84(CONCAT44D(0x3f800000,fVar4) - CONCAT44D(0x3f800000,fVar4),0);
      }
      if (cVar6 == '\0') {
        ar4[iVar3 * 0x11 + 0x11d] = fVar4;
      }
      else {
        *(undefined8 *)(unsigned)(ar4 + iVar3 * 0x11 + 0x11d) = in_xd0;
      }
      (vsp = ((unsigned long)(fr0_ - 32)), FUN_8c0d20f0(ar4 + iVar3 * 0x11 + 0x11c,ar7,ar6,ar7_00));
      uVar2 = (vsp = ((unsigned long)(fr0_ - 32)), FUN_8c0d4e7c(ar4 + iVar3 * 0x11 + 0x11c,ar7,ar6,ar7_00));
      return uVar2;
    }
    iVar1 = (vsp = ((unsigned long)(fr0_ - 32)), get_field_40_0d3d64(ar4 + iVar3 * 0x11 + 0x11c,ar5_00,ar6_00,ar7_00));
    if ((iVar1 == 1) && (ar4[iVar3 * 0x11 + 0x126] == ar7)) break;
    iVar3 = iVar3 + 1;
  }
  return ar4[iVar3 * 0x11 + 0x126];
}

__asm__(".globl _FUN_8c0d4c74\n.set _FUN_8c0d4c74, _FUN_8c0d4c74_def\n");
//@unit 8c0d4e7c
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
undefined4 FUN_8c0d4e7c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0d4e7c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  *(undefined4 *)(unsigned)(ar4 + 0x40) = 1;
  return 0x40;
}

__asm__(".globl _FUN_8c0d4e7c\n.set _FUN_8c0d4e7c, _FUN_8c0d4e7c_def\n");
//@unit 8c0d4e88
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
undefined1 * FUN_8c0d4e88_def(undefined4 ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0d4e88";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int ar5_00;
  float fVar1;
  undefined8 in_dr0 = 0;
  undefined4 uVar3;
  undefined1 *puVar4;
  double dVar2;
  float fVar5;
  undefined4 in_fr3 = 0;
  double dVar6;
  double in_xd0 = 0;
  char cVar7;
  char cVar8;
  
  cVar8 = '\0';
  cVar7 = '\0';
  ar5_00 = ar5;
  (vsp = ((unsigned long)(fr0_ - 0)), Class_12c394_m0_102b04(0x8c437a78,ar5,ar6,ar7));
  uVar3 = (undefined4)((ulonglong)in_dr0 >> 0x20);
  if (cVar8 == '\0') {
    fVar1 = *(float *)(unsigned)(ar5 + 8);
    puVar4 = (undefined1 *)(unsigned)0x44bb8000;
    (*(undefined4 *)(unsigned)(unsigned)0x8c437c78) = uVar3;
  }
  else {
    (*(undefined4 *)(unsigned)(unsigned)0x8c437c78) = (undefined4)in_dr0;
    in_xd0 = *(double *)(unsigned)(ar5 + 8);
    fVar1 = 1500.0;
    puVar4 = ((undefined1 *)(unsigned)0x8c437844);
    (*(undefined4 *)(unsigned)(unsigned)0x8c437c7c) = uVar3;
  }
  if (cVar7 != '\0' || fVar1 <= (float)(uint)puVar4) {
    if (cVar8 == '\0') {
      dVar2 = CONCAT44D(0x44bb8000,(*(undefined4 *)(unsigned)(unsigned)0x8c437c78));
    }
    else {
      in_xd0 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c437c7c),(*(undefined4 *)(unsigned)(unsigned)0x8c437c78));
      dVar2 = -1.3596743611313892e-249;
    }
    if (cVar7 == '\0') {
      fVar1 = F32HI(dVar2);
      dVar2 = CONCAT44D(fVar1,F32LO(dVar2) * fVar1);
    }
    else {
      dVar2 = dVar2 * dVar2;
    }
    if (cVar8 == '\0') {
      (*(undefined4 *)(unsigned)(unsigned)0x8c437844) = SUB84(dVar2,0);
    }
    else {
      (*(undefined4 *)(unsigned)(unsigned)0x8c437844) = SUB84(in_xd0,0);
      (*(undefined4 *)(unsigned)(unsigned)0x8c437848) = F32HI(in_xd0);
    }
  }
  else {
    if (cVar8 == '\0') {
      dVar6 = CONCAT44D(*(undefined4 *)(unsigned)(ar5 + 8),in_fr3);
      dVar2 = CONCAT44D(0x44bb8000,fVar1);
    }
    else {
      dVar6 = *(double *)(unsigned)(ar5 + 8);
      dVar2 = -1.3596743611313892e-249;
    }
    if (cVar7 == '\0') {
      dVar6 = CONCAT44D(F32HI(dVar6) - F32HI(dVar2)
                               ,SUB84(dVar6,0));
    }
    else {
      dVar6 = dVar6 - dVar2;
    }
    if (cVar8 == '\0') {
      dVar2 = CONCAT44D(0x44bb8000,(*(undefined4 *)(unsigned)(unsigned)0x8c437c78));
    }
    else {
      in_xd0 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c437c7c),(*(undefined4 *)(unsigned)(unsigned)0x8c437c78));
      dVar2 = -1.3596743611313892e-249;
    }
    if (cVar7 == '\0') {
      fVar5 = F32HI(dVar2);
      fVar1 = F32LO(dVar2) * fVar5;
      dVar2 = CONCAT44D(fVar5,fVar1);
      dVar6 = CONCAT44D(F32HI(dVar6) + fVar1,SUB84(dVar6,0));
    }
    else {
      dVar2 = dVar2 * dVar2;
      dVar6 = dVar6 + dVar2;
    }
    fVar1 = F32HI(dVar6);
    (*(undefined4 *)(unsigned)(unsigned)0x8c437844) = fVar1;
    if (cVar8 != '\0') {
      (*(undefined4 *)(unsigned)(unsigned)0x8c437844) = SUB84(dVar6,0);
      (*(undefined4 *)(unsigned)(unsigned)0x8c437848) = fVar1;
    }
  }
  (vsp = ((unsigned long)(fr0_ - 0)), Class_12c394_m0_102b04(0x8c437aa4,ar5_00,ar6,ar7));
  if (cVar8 == '\0') {
    dVar6 = CONCAT44D(0x44bb8000,(int)(D2U(dVar2) >> 0x20));
    dVar2 = in_xd0;
  }
  else {
    dVar6 = -1.3596743611313892e-249;
  }
  if (cVar7 == '\0') {
    fVar1 = F32LO(dVar6) * F32HI(dVar6);
  }
  else {
    fVar1 = SUB84(dVar6 * dVar6,0);
  }
  fVar5 = (*(undefined4 *)(unsigned)(unsigned)0x8c437844);
  (*(undefined4 *)(unsigned)(unsigned)0x8c437c74) = fVar1;
  if (cVar8 != '\0') {
    (*(undefined4 *)(unsigned)(unsigned)0x8c437c74) = SUB84(dVar2,0);
    (*(undefined4 *)(unsigned)(unsigned)0x8c437c78) = (undefined4)(D2U(dVar2) >> 0x20);
    dVar2 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c437848),(*(undefined4 *)(unsigned)(unsigned)0x8c437844));
    fVar5 = fVar1;
  }
  if (cVar8 == '\0') {
    dVar6 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c437c74),fVar5);
  }
  else {
    dVar6 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c437c78),(*(undefined4 *)(unsigned)(unsigned)0x8c437c74));
  }
  if (cVar7 == '\0') {
    (*(undefined4 *)(unsigned)(unsigned)0x8c437848) = F32LO(dVar6) + F32HI(dVar6);
  }
  else {
    (*(undefined4 *)(unsigned)(unsigned)0x8c437848) = SUB84(dVar6 + dVar6,0);
  }
  if (cVar8 != '\0') {
    (*(undefined4 *)(unsigned)(unsigned)0x8c437848) = SUB84(dVar2,0);
    (*(undefined4 *)(unsigned)(unsigned)0x8c43784c) = (undefined4)(D2U(dVar2) >> 0x20);
  }
  return ((undefined1 *)(unsigned)0x8c437c74);
}

__asm__(".globl _FUN_8c0d4e88\n.set _FUN_8c0d4e88, _FUN_8c0d4e88_def\n");
//@unit 8c0d4f3c
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
undefined4 FUN_8c0d4f3c_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0d4f3c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 4; for (int i_ = 0; i_ < 4; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  ((undefined1 *)(unsigned)2)[0x8c437840] = 0x32;
  ((undefined1 *)(unsigned)1)[0x8c437840] = 0x32;
  *(undefined4 *)(unsigned)0x8c437840 = 0x1f;
  *(undefined4 *)(unsigned)0x8c43783c = 1;
  uVar1 = (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c0d2fc0(0xffffffff,ar5,ar6,ar7));
  return uVar1;
}

__asm__(".globl _FUN_8c0d4f3c\n.set _FUN_8c0d4f3c, _FUN_8c0d4f3c_def\n");
//@unit 8c0d4f70
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
undefined4 FUN_8c0d4f70_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0d4f70";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  ((undefined1 *)(unsigned)2)[0x8c437840] = 10;
  ((undefined1 *)(unsigned)1)[0x8c437840] = 10;
  *(undefined4 *)(unsigned)0x8c437840 = 10;
  *(undefined4 *)(unsigned)0x8c43783c = 1;
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0d2fc0(0xff0f0f0f,ar5,ar6,ar7));
  return uVar1;
}

__asm__(".globl _FUN_8c0d4f70\n.set _FUN_8c0d4f70, _FUN_8c0d4f70_def\n");
//@unit 8c0d4fa8
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
undefined4 FUN_8c0d4fa8_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0d4fa8";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  if ((byte)ar5 < 2) {
    uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), s_40_BUBBLE_MONO_0d4fea(ar4,ar5,ar6,ar7));
  }
  else {
    uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0d5040(ar4,ar5,ar6,ar7));
  }
  return uVar1;
}

__asm__(".globl _FUN_8c0d4fa8\n.set _FUN_8c0d4fa8, _FUN_8c0d4fa8_def\n");
//@unit 8c0d4fe8
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
undefined4 s_40_BUBBLE_MONO_0d4fea_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "s_40_BUBBLE_MONO_0d4fea";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c235f14(ar4,ar5,ar6,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c022068))))
                    (0x8c2b59d0,(&(*(undefined1 *)(unsigned)0x8c13f7c0)) + 0x359,ar6,ar7));
  *(undefined4 *)(unsigned)(0x5e4 + ar4) = uVar1;
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0220d4(0x8c2b59d0,*(undefined4 *)(unsigned)(0x5e4 + ar4),ar6,ar7));
  return uVar1;
}

__asm__(".globl _s_40_BUBBLE_MONO_0d4fea\n.set _s_40_BUBBLE_MONO_0d4fea, _s_40_BUBBLE_MONO_0d4fea_def\n");
//@unit 8c0d5040
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
undefined4 FUN_8c0d5040_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0d5040";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c022068))))
                    (0x8c2b59d0,(&(*(undefined1 *)(unsigned)0x8c13f7c0)) + 0x368,ar6,ar7));
  *(undefined4 *)(unsigned)(0x5e4 + ar4) = uVar1;
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0220d4(0x8c2b59d0,*(undefined4 *)(unsigned)(0x5e4 + ar4),ar6,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c022128(0x8c2b59d0,0x1f4,ar6,ar7));
  return uVar1;
}

__asm__(".globl _FUN_8c0d5040\n.set _FUN_8c0d5040, _FUN_8c0d5040_def\n");
//@unit 8c0d50a0
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
undefined4 FUN_8c0d50a0_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0d50a0";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c235ee4(ar4,ar5,ar6,ar7));
  return uVar1;
}

__asm__(".globl _FUN_8c0d50a0\n.set _FUN_8c0d50a0, _FUN_8c0d50a0_def\n");
//@unit 8c0d50b4
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
undefined4 FUN_8c0d50b4_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0d50b4";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c022104(0x8c2b59d0,*(undefined4 *)(unsigned)(0x5e4 + ar4),ar6,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0220bc(0x8c2b59d0,*(undefined4 *)(unsigned)(0x5e4 + ar4),ar6,ar7));
  return uVar1;
}

__asm__(".globl _FUN_8c0d50b4\n.set _FUN_8c0d50b4, _FUN_8c0d50b4_def\n");
//@unit 8c0d50ec
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
undefined4 FUN_8c0d50ec_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0d50ec";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  if ((byte)ar5 < 2) {
    uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0d512c(ar4,ar5,ar6,ar7));
  }
  else {
    uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0d51ec(ar4,ar5,ar6,ar7));
  }
  return uVar1;
}

__asm__(".globl _FUN_8c0d50ec\n.set _FUN_8c0d50ec, _FUN_8c0d50ec_def\n");
//@unit 8c0d512c
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
undefined4 FUN_8c0d512c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0d512c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 4; for (int i_ = 0; i_ < 4; i_++) z_[i_] = 0; }
  int iVar1;
  
  (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c022104(0x8c2b59d0,*(undefined4 *)(unsigned)(0x5e4 + ar4),ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c0220bc(0x8c2b59d0,*(undefined4 *)(unsigned)(0x5e4 + ar4),ar6,ar7));
  for (iVar1 = 0; iVar1 < 2; iVar1 = iVar1 + 1) {
    if (*(int *)(unsigned)(0x600 + iVar1 * 0x18 + ar4) != -1) {
      (vsp = ((unsigned long)(fr0_ - 4)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c021a60))))
                (0x8c2b59d0,*(undefined4 *)(unsigned)(0x600 + iVar1 * 0x18 + ar4),ar6,ar7));
      (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c021a8c(0x8c2b59d0,iVar1 * 0x18 + ar4 + 0x600,ar6,ar7));
      *(undefined4 *)(unsigned)(0x600 + iVar1 * 0x18 + ar4) = 0xffffffff;
    }
  }
  return 2;
}

__asm__(".globl _FUN_8c0d512c\n.set _FUN_8c0d512c, _FUN_8c0d512c_def\n");
//@unit 8c0d51ec
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
undefined4 FUN_8c0d51ec_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0d51ec";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = 0;
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c022128(0x8c2b59d0,0,ar6,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0d512c(ar4,uVar1,ar6,ar7));
  return uVar1;
}

__asm__(".globl _FUN_8c0d51ec\n.set _FUN_8c0d51ec, _FUN_8c0d51ec_def\n");
//@unit 8c0d5218
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
undefined4 s_GRAPHICS_ENV_0d5220_def(double *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "s_GRAPHICS_ENV_0d5220";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 84; for (int i_ = 0; i_ < 84; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 ar4_00;
  undefined4 ***ar5_00;
  char *pcVar4;
  double *pdVar5;
  undefined4 *puVar6;
  float fVar7;
  undefined4 **ppuVar8;
  double dVar9;
  double in_dr2 = 0;
  undefined8 in_xd0 = 0;
  char cVar10;
  char cVar11;
  
  cVar11 = '\0';
  cVar10 = '\0';
  ((undefined4 ** *)(fr0_ - 0x18))[0] = (undefined4 ***)(unsigned)0x0;
  (*(unsigned *)(fr0_ - 0x1c) = (unsigned)(unsigned long)((undefined4 ***)(unsigned)0x0));
  (*(undefined4 *)(fr0_ - 0x20)) = 0;
  (vsp = ((unsigned long)(fr0_ - 84)), FUN_8c235ee4(ar4,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 84)), FUN_8c020a70(ar5,((undefined1 *)(unsigned)0x8c13f91e),((undefined1 *)(unsigned)0x8c13f8cb),ar4));
  pcVar4 = ((undefined1 *)(unsigned)0x8c13f8cb);
  pdVar5 = ar4;
  (vsp = ((unsigned long)(fr0_ - 84)), FUN_8c020b68(ar5,((undefined1 *)(unsigned)0x8c13f91e),((undefined1 *)(unsigned)0x8c13f8cb),ar4));
  ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x54))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 84)); FUN_8c015ad4(ar4 + 2,0,pcVar4,pdVar5); });
  (vsp = ((unsigned long)(fr0_ - 84)), FUN_8c020a70(ar5,((undefined1 *)(unsigned)0x8c13f986),((undefined1 *)(unsigned)0x8c13f8cb),ar4));
  pcVar4 = ((undefined1 *)(unsigned)0x8c13f8cb);
  pdVar5 = ar4;
  (vsp = ((unsigned long)(fr0_ - 84)), FUN_8c020b68(ar5,((undefined1 *)(unsigned)0x8c13f986),((undefined1 *)(unsigned)0x8c13f8cb),ar4));
  ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x54))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 84)); FUN_8c015ad4((int)ar4 + 0x1c,0,pcVar4,pdVar5); });
  iVar1 = (vsp = ((unsigned long)(fr0_ - 84)), FUN_8c0209fc(ar5,((undefined1 *)(unsigned)0x8c13fa0c),((undefined1 *)(unsigned)0x8c13f8cb),((undefined4 ** *)(fr0_ - 0x1c))
                      ));
  if (iVar1 == 0) {
    report_error_message
              (((undefined1 *)(unsigned)0x8c13fa0c),((undefined1 *)(unsigned)0x8c13fb30),0,2)
    ;
  }
  puVar6 = &(*(undefined4 *)(fr0_ - 0x20));
  pcVar4 = ((undefined1 *)(unsigned)0x8c13f8cb);
  iVar1 = (vsp = ((unsigned long)(fr0_ - 84)), FUN_8c020af4(ar5,((undefined1 *)(unsigned)0x8c13fa0c),((undefined1 *)(unsigned)0x8c13f8cb),puVar6));
  if (iVar1 == 0) {
    puVar6 = (undefined4 *)(unsigned)0x2;
    pcVar4 = (char *)(unsigned)0x0;
    report_error_message
              (((undefined1 *)(unsigned)0x8c13fa0c),((undefined1 *)(unsigned)0x8c13fb67),0,2)
    ;
  }
  ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x54))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 84)); FUN_8c015ad4(ar4 + 2,((undefined4 **)(unsigned long)*(unsigned *)(fr0_ - 0x1c)),pcVar4,puVar6); });
  iVar1 = (vsp = ((unsigned long)(fr0_ - 84)), FUN_8c0209fc(ar5,((undefined1 *)(unsigned)0x8c13fa7a),((undefined1 *)(unsigned)0x8c13f8cb),((undefined4 ** *)(fr0_ - 0x1c))));
  if (iVar1 == 0) {
    report_error_message
              (((undefined1 *)(unsigned)0x8c13fa7a),((undefined1 *)(unsigned)0x8c13fb30),0,2);
  }
  puVar6 = &(*(undefined4 *)(fr0_ - 0x20));
  pcVar4 = ((undefined1 *)(unsigned)0x8c13f8cb);
  iVar1 = (vsp = ((unsigned long)(fr0_ - 84)), FUN_8c020af4(ar5,((undefined1 *)(unsigned)0x8c13fa7a),((undefined1 *)(unsigned)0x8c13f8cb),puVar6));
  if (iVar1 == 0) {
    puVar6 = (undefined4 *)(unsigned)0x2;
    pcVar4 = (char *)(unsigned)0x0;
    report_error_message
              (((undefined1 *)(unsigned)0x8c13fa7a),((undefined1 *)(unsigned)0x8c13fb67),0,2);
  }
  ar5_00 = (undefined4 ***)(unsigned)((undefined4 **)(unsigned long)*(unsigned *)(fr0_ - 0x1c));
  ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x54))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 84)); FUN_8c015ad4((int)ar4 + 0x1c,((undefined4 **)(unsigned long)*(unsigned *)(fr0_ - 0x1c)),pcVar4,puVar6); });
  iVar1 = (vsp = ((unsigned long)(fr0_ - 84)), FUN_8c015bb8((int)ar4 + 0x1c,ar5_00,pcVar4,puVar6));
  uVar2 = (vsp = ((unsigned long)(fr0_ - 84)), FUN_8c0151fc(*(undefined4 *)(unsigned)(*(int *)(unsigned)(iVar1 + 4) + 4),ar5_00,pcVar4,puVar6));
  *(undefined4 *)(unsigned)((int)ar4 + 0x2c) = uVar2;
  (vsp = ((unsigned long)(fr0_ - 84)), FUN_8c0d5de0(ar4,ar5_00,pcVar4,puVar6));
  while (iVar1 = (vsp = ((unsigned long)(fr0_ - 84)), get_field_d0_0d3f70((int)ar4 + 0x34,ar5_00,pcVar4,puVar6)), iVar1 != 0) {
    iVar1 = (vsp = ((unsigned long)(fr0_ - 84)), get_field_d0_0d3f70((int)ar4 + 0x34,ar5_00,pcVar4,puVar6));
    ((undefined4 ** *)(fr0_ - 0x18))[0] =
         (undefined4 **)(unsigned)
         (vsp = ((unsigned long)(fr0_ - 84)), s_CWaterSnowList_GetWaterSnowO_0fe76c((int)ar4 + 0x34,iVar1 + -1,pcVar4,puVar6));
    (vsp = ((unsigned long)(fr0_ - 84)), s_CWaterSnowList_TakeOut_0fe694((int)ar4 + 0x34,((undefined4 ** *)(fr0_ - 0x18))[0],pcVar4,puVar6));
    ar5_00 = ((undefined4 ** *)(fr0_ - 0x18));
    (vsp = ((unsigned long)(fr0_ - 84)), FUN_8c0fec4c(0x8c3e7d30,ar5_00,pcVar4,puVar6));
  }
  (vsp = ((unsigned long)(fr0_ - 84)), FUN_8c0fe7f4((int)ar4 + 0x34,ar5_00,pcVar4,puVar6));
  for (iVar1 = 0; uVar2 = SUB84(in_dr2,0), iVar1 < 0x32; iVar1 = iVar1 + 1) {
    ar4_00 = 0x8c3e7d30;
    ((undefined4 ** *)(fr0_ - 0x18))[0] = (undefined4 **)(unsigned)(vsp = ((unsigned long)(fr0_ - 84)), FUN_8c0febf0(0x8c3e7d30,ar5_00,pcVar4,puVar6));
    if ((undefined4 ***)(unsigned)((undefined4 ** *)(fr0_ - 0x18))[0] == (undefined4 ***)(unsigned)0x0) break;
    iVar3 = (vsp = ((unsigned long)(fr0_ - 84)), rand(ar4_00,ar5_00,pcVar4,puVar6));
    if (cVar11 == '\0') {
      dVar9 = CONCAT44D(0x47000000,(float)iVar3);
    }
    else {
      dVar9 = 1.1215622395287742e+23;
    }
    if (cVar10 == '\0') {
      fVar7 = F32LO(dVar9) / F32HI(dVar9);
    }
    else {
      fVar7 = SUB84(dVar9 / dVar9,0);
    }
    if (cVar11 == '\0') {
      dVar9 = CONCAT44D(0x44b7c000,fVar7);
    }
    else {
      dVar9 = 7.673846743559028e+21;
    }
    if (cVar10 == '\0') {
      fVar7 = F32LO(dVar9) * F32HI(dVar9);
    }
    else {
      fVar7 = SUB84(dVar9 * dVar9,0);
    }
    if (cVar11 == '\0') {
      dVar9 = CONCAT44D(0x447a0000,fVar7);
    }
    else {
      dVar9 = 2.8924499526186286e+22;
    }
    if (cVar10 == '\0') {
      ppuVar8 = (undefined4 **)(unsigned)(uint)(F32LO(dVar9) + F32HI(dVar9));
    }
    else {
      ppuVar8 = SUB84(dVar9 + dVar9,0);
    }
    if (cVar11 == '\0') {
      ((undefined4 ** *)(fr0_ - 0x18))[0][2] = ppuVar8;
    }
    else {
      *(undefined8 *)(unsigned)(((undefined4 ** *)(fr0_ - 0x18))[0] + 2) = in_xd0;
    }
    iVar3 = (vsp = ((unsigned long)(fr0_ - 84)), rand(ar4_00,ar5_00,pcVar4,puVar6));
    if (cVar11 == '\0') {
      in_dr2 = CONCAT44D(*(undefined4 *)(unsigned)ar4,uVar2);
    }
    else {
      in_dr2 = *ar4;
    }
    if (cVar11 == '\0') {
      dVar9 = CONCAT44D(0x47000000,(float)iVar3);
    }
    else {
      dVar9 = 1.1215622395287742e+23;
    }
    if (cVar10 == '\0') {
      in_dr2 = CONCAT44D(F32HI(in_dr2) *
                                (F32LO(dVar9) / F32HI(dVar9)),SUB84(in_dr2,0)
                               );
    }
    else {
      in_dr2 = in_dr2 * (dVar9 / dVar9);
    }
    if (cVar11 == '\0') {
      ((undefined4 ** *)(fr0_ - 0x18))[0][3] = (undefined4 **)(unsigned)((ulonglong)in_dr2 >> 0x20);
    }
    else {
      *(double *)(unsigned)(((undefined4 ** *)(fr0_ - 0x18))[0] + 3) = in_dr2;
    }
    iVar3 = (vsp = ((unsigned long)(fr0_ - 84)), rand(ar4_00,ar5_00,pcVar4,puVar6));
    if (cVar11 == '\0') {
      dVar9 = CONCAT44D(0x47000000,(float)iVar3);
    }
    else {
      dVar9 = 1.1215622395287742e+23;
    }
    if (cVar10 == '\0') {
      fVar7 = F32LO(dVar9) / F32HI(dVar9);
    }
    else {
      fVar7 = SUB84(dVar9 / dVar9,0);
    }
    if (cVar11 == '\0') {
      dVar9 = CONCAT44D(0x44988000,fVar7);
    }
    else {
      dVar9 = 2.5220161595978547e+17;
    }
    if (cVar10 == '\0') {
      fVar7 = F32LO(dVar9) * F32HI(dVar9);
    }
    else {
      fVar7 = SUB84(dVar9 * dVar9,0);
    }
    if (cVar11 == '\0') {
      dVar9 = CONCAT44D(0x438c0000,fVar7);
    }
    else {
      dVar9 = -1.392258127104201e-250;
    }
    if (cVar10 == '\0') {
      ppuVar8 = (undefined4 **)(unsigned)(uint)(F32LO(dVar9) + F32HI(dVar9));
    }
    else {
      ppuVar8 = SUB84(dVar9 + dVar9,0);
    }
    if (cVar11 == '\0') {
      ((undefined4 ** *)(fr0_ - 0x18))[0][4] = ppuVar8;
    }
    else {
      *(undefined8 *)(unsigned)(((undefined4 ** *)(fr0_ - 0x18))[0] + 4) = in_xd0;
    }
    ar5_00 = (undefined4 ***)(unsigned)((undefined4 ** *)(fr0_ - 0x18))[0];
    (vsp = ((unsigned long)(fr0_ - 84)), FUN_8c0fe5f0((int)ar4 + 0x34,((undefined4 ** *)(fr0_ - 0x18))[0],pcVar4,puVar6));
  }
  uVar2 = (vsp = ((unsigned long)(fr0_ - 84)), FUN_8c0d5040(ar4,ar5_00,pcVar4,puVar6));
  return uVar2;
}

__asm__(".globl _s_GRAPHICS_ENV_0d5220\n.set _s_GRAPHICS_ENV_0d5220, _s_GRAPHICS_ENV_0d5220_def\n");
//@unit 8c0d5578
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
undefined4 FUN_8c0d5578_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0d5578";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  (vsp = ((unsigned long)(fr0_ - 0)), s_Failed_to_set_texture_s_015252(ar4 + 8,ar5,ar6,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), s_Failed_to_set_texture_s_015252(ar4 + 0x108,ar5,ar6,ar7));
  return uVar1;
}

__asm__(".globl _FUN_8c0d5578\n.set _FUN_8c0d5578, _FUN_8c0d5578_def\n");
//@unit 8c0d55a4
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
undefined4 FUN_8c0d55a4_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0d55a4";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  (vsp = ((unsigned long)(fr0_ - 0)), s_Failed_s_015312(ar4 + 8,ar5,ar6,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), s_Failed_s_015312(ar4 + 0x108,ar5,ar6,ar7));
  return uVar1;
}

__asm__(".globl _FUN_8c0d55a4\n.set _FUN_8c0d55a4, _FUN_8c0d55a4_def\n");
//@unit 8c0d55d0
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
int FUN_8c0d55d0_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0d55d0";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0220d4(0x8c2b59d0,*(undefined4 *)(unsigned)(0x5e4 + ar4),ar6,ar7));
  iVar1 = *(int *)(unsigned)(0x618 + ar4);
  if (iVar1 != -1) {
    iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c021994(0x8c2b59d0,*(undefined4 *)(unsigned)(0x618 + ar4),1,ar7));
  }
  return iVar1;
}

__asm__(".globl _FUN_8c0d55d0\n.set _FUN_8c0d55d0, _FUN_8c0d55d0_def\n");
//@unit 8c0d5614
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
undefined4 FUN_8c0d5614_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0d5614";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c022104(0x8c2b59d0,*(undefined4 *)(unsigned)(0x5e4 + ar4),ar6,ar7));
  for (iVar1 = 0; iVar1 < 2; iVar1 = iVar1 + 1) {
    if (*(int *)(unsigned)(0x600 + iVar1 * 0x18 + ar4) != -1) {
      (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c021a60))))
                (0x8c2b59d0,*(undefined4 *)(unsigned)(0x600 + iVar1 * 0x18 + ar4),ar6,ar7));
    }
  }
  return 2;
}

__asm__(".globl _FUN_8c0d5614\n.set _FUN_8c0d5614, _FUN_8c0d5614_def\n");
//@unit 8c0d568c
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
undefined4 FUN_8c0d568c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0d568c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0220d4(0x8c2b59d0,*(undefined4 *)(unsigned)(0x5e4 + ar4),ar6,ar7));
  return uVar1;
}

__asm__(".globl _FUN_8c0d568c\n.set _FUN_8c0d568c, _FUN_8c0d568c_def\n");
//@unit 8c0d56b4
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
undefined4 FUN_8c0d56b4_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0d56b4";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c022104(0x8c2b59d0,*(undefined4 *)(unsigned)(0x5e4 + ar4),ar6,ar7));
  return uVar1;
}

__asm__(".globl _FUN_8c0d56b4\n.set _FUN_8c0d56b4, _FUN_8c0d56b4_def\n");
//@unit 8c0d56dc
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
undefined4 FUN_8c0d56dc_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0d56dc";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 32; for (int i_ = 0; i_ < 32; i_++) z_[i_] = 0; }
  int iVar1;
  
  *(undefined4 *)(unsigned)(ar4 + 0x5c4) = 0x3f4ccccd;
  *(undefined4 *)(unsigned)(ar4 + 0x5c8) = 0x3f4ccccd;
  *(undefined4 *)(unsigned)(ar4 + 0x5cc) = 0x3f4ccccd;
  *(undefined2 *)(unsigned)(ar4 + 4) = 0;
  *(undefined4 *)(unsigned)(ar4 + 0x5e8) = 0;
  *(undefined4 *)(unsigned)(ar4 + 0x30) = 0;
  for (iVar1 = 0; iVar1 < 2; iVar1 = iVar1 + 1) {
    if (*(int *)(unsigned)(iVar1 * 0x18 + ar4 + 0x600) != -1) {
      (vsp = ((unsigned long)(fr0_ - 32)), FUN_8c021a60(0x8c2b59d0,*(undefined4 *)(unsigned)(iVar1 * 0x18 + ar4 + 0x600),ar6,ar7));
      (vsp = ((unsigned long)(fr0_ - 32)), FUN_8c021a8c(0x8c2b59d0,iVar1 * 0x18 + ar4 + 0x600,ar6,ar7));
      *(undefined4 *)(unsigned)(iVar1 * 0x18 + ar4 + 0x600) = 0xffffffff;
    }
  }
  *(undefined4 *)(unsigned)(ar4 + 0x61c) = 0xffffffe2;
  (*(undefined1 *)(unsigned)0x8c437843) = 0xff;
  (*(undefined1 *)(unsigned)0x8c437842) = 0x32;
  (*(undefined1 *)(unsigned)0x8c437841) = 0x32;
  (*(undefined1 *)(unsigned)0x8c437840) = 0x1f;
  return 0x1f;
}

__asm__(".globl _FUN_8c0d56dc\n.set _FUN_8c0d56dc, _FUN_8c0d56dc_def\n");
//@unit 8c0d57e8
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
undefined4 s_GRAPHICS_ENV_0d57ee_def(int ar4,undefined4 *ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "s_GRAPHICS_ENV_0d57ee";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 36; for (int i_ = 0; i_ < 36; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 uVar2;
  undefined4 *ar5_00;
  undefined4 ar5_01;
  char *pcVar3;
  
  uVar2 = CONCAT31((int3)((uint)(*(undefined4 *)(fr0_ - 0x24)) >> 8),(char)ar6);
  ((undefined4 *)(fr0_ - 0x14))[0] = 0;
  ar5_00 = ar5;
  while( true ) {
    iVar1 = (vsp = ((unsigned long)(fr0_ - 36)), get_field_d0_0d3f70(ar4 + 0x34,ar5_00,ar6,ar7));
    if (iVar1 == 0) break;
    iVar1 = (vsp = ((unsigned long)(fr0_ - 36)), get_field_d0_0d3f70(ar4 + 0x34,ar5_00,ar6,ar7));
    ((undefined4 *)(fr0_ - 0x14))[0] = (vsp = ((unsigned long)(fr0_ - 36)), s_CWaterSnowList_GetWaterSnowO_0fe76c(ar4 + 0x34,iVar1 + -1,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 36)), s_CWaterSnowList_TakeOut_0fe694(ar4 + 0x34,((undefined4 *)(fr0_ - 0x14))[0],ar6,ar7));
    ar5_00 = ((undefined4 *)(fr0_ - 0x14));
    (vsp = ((unsigned long)(fr0_ - 36)), FUN_8c0fec4c(0x8c3e7d30,ar5_00,ar6,ar7));
  }
  (vsp = ((unsigned long)(fr0_ - 36)), FUN_8c0fe7f4(ar4 + 0x34,ar5_00,ar6,ar7));
  if ((char)uVar2 == '\x02') {
    (vsp = ((unsigned long)(fr0_ - 36)), FUN_8c020a70(ar5,((undefined1 *)(unsigned)0x8c13fa0c),((undefined1 *)(unsigned)0x8c13f8cb),ar4));
    pcVar3 = ((undefined1 *)(unsigned)0x8c13f8cb);
    iVar1 = ar4;
    (vsp = ((unsigned long)(fr0_ - 36)), FUN_8c020b68(ar5,((undefined1 *)(unsigned)0x8c13fa0c),((undefined1 *)(unsigned)0x8c13f8cb),ar4));
    ({ unsigned long ri0_ = (unsigned long)(uVar2); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 36)); FUN_8c015ad4(ar4 + 0x10,0,pcVar3,iVar1); });
    (vsp = ((unsigned long)(fr0_ - 36)), FUN_8c020a70(ar5,((undefined1 *)(unsigned)0x8c13fa7a),((undefined1 *)(unsigned)0x8c13f8cb),ar4));
    pcVar3 = ((undefined1 *)(unsigned)0x8c13f8cb);
    iVar1 = ar4;
    (vsp = ((unsigned long)(fr0_ - 36)), FUN_8c020b68(ar5,((undefined1 *)(unsigned)0x8c13fa7a),((undefined1 *)(unsigned)0x8c13f8cb),ar4));
    uVar2 = ({ unsigned long ri0_ = (unsigned long)(uVar2); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 36)); FUN_8c015ad4(ar4 + 0x1c,0,pcVar3,iVar1); });
  }
  else {
    (vsp = ((unsigned long)(fr0_ - 36)), FUN_8c020a70(ar5,((undefined1 *)(unsigned)0x8c13f91e),((undefined1 *)(unsigned)0x8c13f8cb),ar4));
    pcVar3 = ((undefined1 *)(unsigned)0x8c13f8cb);
    iVar1 = ar4;
    (vsp = ((unsigned long)(fr0_ - 36)), FUN_8c020b68(ar5,((undefined1 *)(unsigned)0x8c13f91e),((undefined1 *)(unsigned)0x8c13f8cb),ar4));
    ({ unsigned long ri0_ = (unsigned long)(uVar2); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 36)); FUN_8c015ad4(ar4 + 0x10,0,pcVar3,iVar1); });
    (vsp = ((unsigned long)(fr0_ - 36)), FUN_8c020a70(ar5,((undefined1 *)(unsigned)0x8c13f986),((undefined1 *)(unsigned)0x8c13f8cb),ar4));
    pcVar3 = ((undefined1 *)(unsigned)0x8c13f8cb);
    iVar1 = ar4;
    (vsp = ((unsigned long)(fr0_ - 36)), FUN_8c020b68(ar5,((undefined1 *)(unsigned)0x8c13f986),((undefined1 *)(unsigned)0x8c13f8cb),ar4));
    ar5_01 = 0;
    ({ unsigned long ri0_ = (unsigned long)(uVar2); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 36)); FUN_8c015ad4(ar4 + 0x1c,0,pcVar3,iVar1); });
    uVar2 = (vsp = ((unsigned long)(fr0_ - 36)), s_Failed_s_015312(ar4 + 0x12a5c,ar5_01,pcVar3,iVar1));
  }
  return uVar2;
}

__asm__(".globl _s_GRAPHICS_ENV_0d57ee\n.set _s_GRAPHICS_ENV_0d57ee, _s_GRAPHICS_ENV_0d57ee_def\n");
//@unit 8c0d59a4
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
undefined4 FUN_8c0d59a4_def(int ar4,int ar5,int ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0d59a4";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 88; for (int i_ = 0; i_ < 88; i_++) z_[i_] = 0; }
  bool bVar1;
  ulonglong uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined1 *ar4_00;
  int ar5_00;
  int ar6_00;
  int iVar5;
  int iVar6;
  float fVar7;
  undefined8 in_dr0 = 0;
  double dVar8;
  float fVar9;
  char cVar10;
  char cVar11;
  
  cVar11 = '\0';
  cVar10 = '\0';
  iVar5 = 0;
  ar5_00 = ar5;
  ar6_00 = ar6;
  (vsp = ((unsigned long)(fr0_ - 88)), Vec3_ctor_zero(((undefined1 *)(fr0_ - 0x34)),ar5,ar6,ar7));
  iVar6 = 0;
  while ((iVar6 < 0x226 && (iVar5 < ar5))) {
    iVar3 = (vsp = ((unsigned long)(fr0_ - 88)), get_field_44_0d5ca0(iVar6 * 0x88 + ar4 + 0x62c,ar5_00,ar6_00,ar7));
    uVar4 = (undefined4)((ulonglong)in_dr0 >> 0x20);
    if (iVar3 == 0) {
      iVar3 = (vsp = ((unsigned long)(fr0_ - 88)), get_field_164_0d5c94(ar6,ar5_00,ar6_00,ar7));
      if (iVar3 == 2) {
        (vsp = ((unsigned long)(fr0_ - 88)), FUN_8c0d26ac(iVar6 * 0x88 + ar4 + 0x62c,ar5_00,ar6_00,ar7));
        (vsp = ((unsigned long)(fr0_ - 88)), FUN_8c0d5c88(iVar6 * 0x88 + ar4 + 0x62c,ar5_00,ar6_00,ar7));
        ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x44))); *(unsigned *)((((unsigned long)(fr0_ - 88)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 88)) - 8); FUN_8c0d5c68(iVar6 * 0x88 + ar4 + 0x62c,ar5_00,ar6_00,ar7); });
        (vsp = ((unsigned long)(fr0_ - 88)), Vec3_assign(((undefined1 *)(fr0_ - 0x34)),((undefined1 *)(fr0_ - 0x44)),ar6_00,ar7));
        ar5_00 = -1;
        ar4_00 = ((undefined1 *)(fr0_ - 0x44));
        (vsp = ((unsigned long)(fr0_ - 88)), Vec3_dtor(ar4_00,0xffffffff,ar6_00,ar7));
        iVar3 = (vsp = ((unsigned long)(fr0_ - 88)), rand(ar4_00,ar5_00,ar6_00,ar7));
        if (cVar11 == '\0') {
          dVar8 = CONCAT44D(0x47000000,(float)iVar3);
        }
        else {
          dVar8 = 3.051758619676548e-05;
        }
        if (cVar10 == '\0') {
          fVar7 = F32LO(dVar8) / F32HI(dVar8);
        }
        else {
          fVar7 = SUB84(dVar8 / dVar8,0);
        }
        if (cVar11 == '\0') {
          fVar9 = 0.5;
        }
        else {
          fVar7 = 0.5;
          fVar9 = 183.0;
        }
        if (cVar10 != '\0' || fVar9 <= fVar7) {
          if (cVar11 == '\0') {
            in_dr0 = CONCAT44(*(undefined4 *)(unsigned)(ar6 + 0x158),fVar7);
          }
          else {
            in_dr0 = *(undefined8 *)(unsigned)(ar6 + 0x158);
          }
          (vsp = ((unsigned long)(fr0_ - 88)), FUN_8c0d5c58(iVar6 * 0x88 + ar4 + 0x62c,ar5_00,ar6_00,ar7));
        }
        else {
          if (cVar11 == '\0') {
            in_dr0 = CONCAT44(*(undefined4 *)(unsigned)(ar6 + 0x158),fVar7);
          }
          else {
            in_dr0 = *(undefined8 *)(unsigned)(ar6 + 0x158);
          }
          (vsp = ((unsigned long)(fr0_ - 88)), FUN_8c0d5c58(iVar6 * 0x88 + ar4 + 0x62c,ar5_00,ar6_00,ar7));
        }
        iVar5 = iVar5 + 1;
      }
      else {
        (vsp = ((unsigned long)(fr0_ - 88)), FUN_8c0d26f0(iVar6 * 0x88 + ar4 + 0x62c,ar5_00,ar6_00,ar7));
        ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x54))); *(unsigned *)((((unsigned long)(fr0_ - 88)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 88)) - 8); FUN_8c0d5c68(iVar6 * 0x88 + ar4 + 0x62c,ar5_00,ar6_00,ar7); });
        (vsp = ((unsigned long)(fr0_ - 88)), FUN_8c022fc0(((undefined1 *)(fr0_ - 0x54)),ar6 + 4,ar6_00,ar7));
        if (cVar11 == '\0') {
          in_dr0 = CONCAT44(*(undefined4 *)(unsigned)(ar6 + 0x158),uVar4);
        }
        else {
          in_dr0 = *(undefined8 *)(unsigned)(ar6 + 0x158);
        }
        bVar1 = cVar10 != '\0';
        fVar7 = (float)in_dr0;
        uVar2 = (ulonglong)in_dr0 >> 0x20;
        ar5_00 = -1;
        (vsp = ((unsigned long)(fr0_ - 88)), Vec3_dtor(((undefined1 *)(fr0_ - 0x54)),0xffffffff,ar6_00,ar7));
        if (bVar1 || (float)uVar2 <= fVar7) {
          (vsp = ((unsigned long)(fr0_ - 88)), FUN_8c0d276c(iVar6 * 0x88 + ar4 + 0x62c,ar5_00,ar6_00,ar7));
          (vsp = ((unsigned long)(fr0_ - 88)), FUN_8c0d5c88(iVar6 * 0x88 + ar4 + 0x62c,ar5_00,ar6_00,ar7));
          iVar5 = iVar5 + 1;
        }
      }
    }
    iVar6 = iVar6 + 1;
  }
  uVar4 = (vsp = ((unsigned long)(fr0_ - 88)), Vec3_dtor(((undefined1 *)(fr0_ - 0x34)),0xffffffff,ar6_00,ar7));
  return uVar4;
}

__asm__(".globl _FUN_8c0d59a4\n.set _FUN_8c0d59a4, _FUN_8c0d59a4_def\n");
//@unit 8c0d5c58
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
undefined4 * FUN_8c0d5c58_def(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0d5c58";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 in_fr5 = 0;
  undefined4 in_fr4 = 0;
  undefined4 in_fr6 = 0;
  
  *ar4 = in_fr4;
  ar4[1] = in_fr5;
  ar4[2] = in_fr6;
  return ar4 + 1;
}

__asm__(".globl _FUN_8c0d5c58\n.set _FUN_8c0d5c58, _FUN_8c0d5c58_def\n");
//@unit 8c0d5c68
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
undefined4 FUN_8c0d5c68_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0d5c68";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;
  undefined4 s0 = *(undefined4 *)(vsp + 0);

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_copy(s0,ar4,ar6,ar7));
  return uVar1;
}

__asm__(".globl _FUN_8c0d5c68\n.set _FUN_8c0d5c68, _FUN_8c0d5c68_def\n");
//@unit 8c0d5c88
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
undefined4 FUN_8c0d5c88_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0d5c88";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  *(undefined4 *)(unsigned)(ar4 + 0x44) = 1;
  return 0x44;
}

__asm__(".globl _FUN_8c0d5c88\n.set _FUN_8c0d5c88, _FUN_8c0d5c88_def\n");
//@unit 8c0d5c94
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
undefined4 get_field_164_0d5c94_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "get_field_164_0d5c94";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return *(undefined4 *)(unsigned)(0x164 + ar4);
}

__asm__(".globl _get_field_164_0d5c94\n.set _get_field_164_0d5c94, _get_field_164_0d5c94_def\n");
//@unit 8c0d5ca0
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
undefined4 get_field_44_0d5ca0_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "get_field_44_0d5ca0";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return *(undefined4 *)(unsigned)(ar4 + 0x44);
}

__asm__(".globl _get_field_44_0d5ca0\n.set _get_field_44_0d5ca0, _get_field_44_0d5ca0_def\n");
//@unit 8c0d5ca8
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
int FUN_8c0d5ca8_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0d5ca8";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = 0;
  for (iVar3 = 0; iVar3 < 0x226; iVar3 = iVar3 + 1) {
    iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c0d5ca0))))
                      (iVar3 * 0x88 + ar4 + 0x62c,ar5,ar6,ar7));
    if (iVar1 == 1) {
      (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0d294c(iVar3 * 0x88 + ar4 + 0x62c,ar5,ar6,ar7));
      iVar2 = iVar2 + 1;
    }
  }
  return iVar2;
}

__asm__(".globl _FUN_8c0d5ca8\n.set _FUN_8c0d5ca8, _FUN_8c0d5ca8_def\n");
//@unit 8c0d5d28
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
undefined4 FUN_8c0d5d28_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0d5d28";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  if (*(char *)(unsigned)(0x8c437840 + 2) == '2') {
    (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c233dac((&(*(undefined1 *)(unsigned)0x8c13f51c)),ar5,ar6,ar7));
  }
  else {
    (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c233dac((&(*(undefined1 *)(unsigned)0x8c13f50c)),ar5,ar6,ar7));
  }
  for (iVar3 = 0; iVar3 < 0x226; iVar3 = iVar3 + 1) {
    iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c0d5ca0))))
                      (iVar3 * 0x88 + ar4 + 0x62c,ar5,ar6,ar7));
    if (iVar1 == 1) {
      ar5 = ar4 + 0x12a5c;
      (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0d2c84(iVar3 * 0x88 + ar4 + 0x62c,ar5,ar6,ar7));
    }
  }
  uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c233dac((&(*(undefined1 *)(unsigned)0x8c13f320)),ar5,ar6,ar7));
  return uVar2;
}

__asm__(".globl _FUN_8c0d5d28\n.set _FUN_8c0d5d28, _FUN_8c0d5d28_def\n");
//@unit 8c0d5de0
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
int FUN_8c0d5de0_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0d5de0";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c015bb8(ar4 + 0x10,ar5,ar6,ar7));
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c0151d0))))
                    (*(undefined4 *)(unsigned)(*(int *)(unsigned)(iVar1 + 4) + 4),0x17,ar6,ar7));
  *(int *)(unsigned)(ar4 + 0x14) = iVar1 + 4;
  return iVar1;
}

__asm__(".globl _FUN_8c0d5de0\n.set _FUN_8c0d5de0, _FUN_8c0d5de0_def\n");
//@unit 8c0d5e2c
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
undefined4 FUN_8c0d5e2c_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0d5e2c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  if (*(undefined4 *)(unsigned)0x8c43783c == 1) {
    (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c257120))))
              ((uint)((undefined1 *)(unsigned)2)[0x8c437840] << 0x10 | 0xff000000 | (uint)((undefined1 *)(unsigned)1)[0x8c437840] << 8 |
               (uint)*(undefined4 *)(unsigned)0x8c437840,ar5,ar6,ar7));
    *(undefined4 *)(unsigned)0x8c43783c = 0;
  }
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c235f84(0x8c43786c,ar5,ar6,ar7));
  return uVar1;
}

__asm__(".globl _FUN_8c0d5e2c\n.set _FUN_8c0d5e2c, _FUN_8c0d5e2c_def\n");
//@unit 8c0d5e9c
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
int FUN_8c0d5e9c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0d5e9c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c015224(ar4,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c015ab8(ar4 + 8,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_zero(ar4 + 0x10,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0d60b8(ar4,ar5,ar6,ar7));
  return ar4;
}

__asm__(".globl _FUN_8c0d5e9c\n.set _FUN_8c0d5e9c, _FUN_8c0d5e9c_def\n");
//@unit 8c0d5ee0
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
int s_GRAPHICS_ENV_0d5ee6_def(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "s_GRAPHICS_ENV_0d5ee6";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 48; for (int i_ = 0; i_ < 48; i_++) z_[i_] = 0; }
  uint uVar1;
  int iVar2;
  undefined4 ar7_00;
  int *ar5_00;
  char *ar6_00;
  int **ar7_01;
  uint uVar3;
  
  ((undefined4 *)(fr0_ - 0x14))[0] = 0;
  (*(unsigned *)(fr0_ - 0x18) = (unsigned)(unsigned long)((int *)(unsigned)0x0));
  iVar2 = (vsp = ((unsigned long)(fr0_ - 48)), FUN_8c0209fc(ar5,((undefined1 *)(unsigned)0x8c13fb9e),((undefined1 *)(unsigned)0x8c13f8cb),((undefined4 *)(fr0_ - 0x14))));
  if (iVar2 == 0) {
    (vsp = ((unsigned long)(fr0_ - 48)), report_error_message(((undefined1 *)(unsigned)0x8c13fb9e),((undefined1 *)(unsigned)0x8c13fbaa),0,2));
  }
  ar7_01 = ((int * *)(fr0_ - 0x18));
  ar6_00 = ((undefined1 *)(unsigned)0x8c13f8cb);
  iVar2 = (vsp = ((unsigned long)(fr0_ - 48)), FUN_8c020af4(ar5,((undefined1 *)(unsigned)0x8c13fb9e),((undefined1 *)(unsigned)0x8c13f8cb),ar7_01));
  if (iVar2 == 0) {
    ar7_01 = (int **)(unsigned)0x2;
    ar6_00 = (char *)(unsigned)0x0;
    (vsp = ((unsigned long)(fr0_ - 48)), report_error_message(((undefined1 *)(unsigned)0x8c13fb9e),((undefined1 *)(unsigned)0x8c13fbd2),0,2));
  }
  uVar1 = 0;
  while (uVar3 = uVar1, uVar3 < (uint)((int *)(unsigned long)*(unsigned *)(fr0_ - 0x18))[1]) {
    *(uint *)(unsigned)(uVar3 * 0xc + *((int *)(unsigned long)*(unsigned *)(fr0_ - 0x18)) + 4) = *(uint *)(unsigned)(uVar3 * 0xc + *((int *)(unsigned long)*(unsigned *)(fr0_ - 0x18)) + 4) | 0x80000000
    ;
    (*(uint *)(fr0_ - 0x30)) = uVar3;
    uVar1 = uVar3 + 1;
  }
  ({ unsigned long ri0_ = (unsigned long)((*(uint *)(fr0_ - 0x30))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 48)); FUN_8c015ad4(ar4 + 2,((undefined4 *)(fr0_ - 0x14))[0],ar6_00,ar7_01); });
  ar5_00 = ((int *)(unsigned long)*(unsigned *)(fr0_ - 0x18));
  (vsp = ((unsigned long)(fr0_ - 48)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*ar4 + 8))))(ar4,((int *)(unsigned long)*(unsigned *)(fr0_ - 0x18)),ar6_00,ar7_01));
  ar7_00 = (vsp = ((unsigned long)(fr0_ - 48)), get_field_4_0253e4(ar4,ar5_00,ar6_00,ar7_01));
  iVar2 = (vsp = ((unsigned long)(fr0_ - 48)), FUN_8c020ef0(ar5,((undefined1 *)(unsigned)0x8c13fbfa),((undefined1 *)(unsigned)0x8c13f8cb),ar7_00));
  if (iVar2 == 0) {
    iVar2 = report_error_message
                      (((undefined1 *)(unsigned)0x8c13fc05),((undefined1 *)(unsigned)0x8c13fc1c),0,2);
  }
  return iVar2;
}

__asm__(".globl _s_GRAPHICS_ENV_0d5ee6\n.set _s_GRAPHICS_ENV_0d5ee6, _s_GRAPHICS_ENV_0d5ee6_def\n");
//@unit 8c0d6058
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
undefined4
s_Failed_to_set_texture_wrap_0d6058_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "s_Failed_to_set_texture_wrap_0d6058";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), s_Failed_to_set_texture_s_015252(ar4,ar5,ar6,ar7));
  return uVar1;
}

__asm__(".globl _s_Failed_to_set_texture_wrap_0d6058\n.set _s_Failed_to_set_texture_wrap_0d6058, _s_Failed_to_set_texture_wrap_0d6058_def\n");
//@unit 8c0d6074
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
undefined4 s_Failed_wrap_0d6074_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "s_Failed_wrap_0d6074";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), s_Failed_s_015312(ar4,ar5,ar6,ar7));
  return uVar1;
}

__asm__(".globl _s_Failed_wrap_0d6074\n.set _s_Failed_wrap_0d6074, _s_Failed_wrap_0d6074_def\n");
//@unit 8c0d6090
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
undefined4 FUN_8c0d6090_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0d6090";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c01538c(ar4,ar5,ar6,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c015adc(ar4 + 8,ar5,ar6,ar7));
  return uVar1;
}

__asm__(".globl _FUN_8c0d6090\n.set _FUN_8c0d6090, _FUN_8c0d6090_def\n");
//@unit 8c0d60b8
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
undefined4 FUN_8c0d60b8_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0d60b8";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  *(undefined4 *)(unsigned)(ar4 + 0xc) = 0;
  *(undefined4 *)(unsigned)(ar4 + 0x20) = 0x3f800000;
  return 0;
}

__asm__(".globl _FUN_8c0d60b8\n.set _FUN_8c0d60b8, _FUN_8c0d60b8_def\n");
//@unit 8c0d60c8
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
undefined4 s_GRAPHICS_ENV_0d60cc_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "s_GRAPHICS_ENV_0d60cc";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c020a70))))
            (ar5,(&(*(undefined1 *)(unsigned)0x8c13f7c0)) + 0x3de,
             (&(*(undefined1 *)(unsigned)0x8c13f7c0)) + 0x10b,ar4));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c020b68))))
                    (ar5,(&(*(undefined1 *)(unsigned)0x8c13f7c0)) + 0x3de,
                     (&(*(undefined1 *)(unsigned)0x8c13f7c0)) + 0x10b,ar4));
  return uVar1;
}

__asm__(".globl _s_GRAPHICS_ENV_0d60cc\n.set _s_GRAPHICS_ENV_0d60cc, _s_GRAPHICS_ENV_0d60cc_def\n");
//@unit 8c0d611c
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
int FUN_8c0d611c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0d611c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  char cVar1;
  
  cVar1 = '\0';
  (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_zero(ar4,ar5,ar6,ar7));
  if (cVar1 == '\0') {
    *(undefined4 *)(unsigned)(ar4 + 0x10) = 0x3dcccccd;
  }
  else {
    *(undefined8 *)(unsigned)(ar4 + 0x10) = 0xffffff3dcccccd;
  }
  *(undefined4 *)(unsigned)(ar4 + 0x1c) = 0xffffff;
  *(undefined4 *)(unsigned)(ar4 + 0x20) = 0;
  if (cVar1 == '\0') {
    *(undefined4 *)(unsigned)(ar4 + 0x14) = 0xbf000000;
  }
  else {
    *(undefined8 *)(unsigned)(ar4 + 0x14) = 0x4f222fe6bf000000;
  }
  *(undefined4 *)(unsigned)(ar4 + 0x18) = 0;
  return ar4;
}

__asm__(".globl _FUN_8c0d611c\n.set _FUN_8c0d611c, _FUN_8c0d611c_def\n");
//@unit 8c0d6164
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
float * FUN_8c0d6164_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0d6164";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 4; for (int i_ = 0; i_ < 4; i_++) z_[i_] = 0; }
  float *pfVar1;
  
  *(float *)(unsigned)(ar4 + 0x14) = *(float *)(unsigned)(ar4 + 0x14) + -0.1;
  *(float *)(unsigned)(ar4 + 4) = *(float *)(unsigned)(ar4 + 4) + *(float *)(unsigned)(ar4 + 0x14);
  *(float *)(unsigned)(ar4 + 8) = *(float *)(unsigned)(ar4 + 8) + -4.0;
  *(float *)(unsigned)(ar4 + 0x10) = *(float *)(unsigned)(ar4 + 0x10) + 0.015;
  pfVar1 = ((float *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x18));
  if (pfVar1 == (float *)(unsigned)0x0) {
    if (*(uint *)(unsigned)(ar4 + 0x1c) < 0xe6ffffff) {
      *(int *)(unsigned)(ar4 + 0x1c) = *(int *)(unsigned)(ar4 + 0x1c) + 0x19000000;
    }
    pfVar1 = (float *)(unsigned)(ar4 + 0x10);
    if (1.0 <= *pfVar1) {
      *(undefined4 *)(unsigned)(ar4 + 0x1c) = 0xffffffff;
      pfVar1 = (float *)(unsigned)0x1;
      *(undefined4 *)(unsigned)(ar4 + 0x18) = 1;
    }
  }
  else if (pfVar1 == (float *)(unsigned)0x1) {
    pfVar1 = (float *)(unsigned)(vsp = ((unsigned long)(fr0_ - 4)), libgcc_divide_helper_0103d0(ar5,0x2d,ar6,ar7));
    if (pfVar1 == (float *)(unsigned)0x0) {
      pfVar1 = (float *)(unsigned)0x2;
      *(undefined4 *)(unsigned)(ar4 + 0x18) = 2;
    }
  }
  else if (pfVar1 == (float *)(unsigned)0x2) {
    if (*(uint *)(unsigned)(ar4 + 0x1c) < 0x7000000) {
      pfVar1 = (float *)(unsigned)0x0;
      *(undefined4 *)(unsigned)(ar4 + 0x20) = 0;
    }
    else {
      pfVar1 = (float *)(unsigned)0x6000000;
      *(int *)(unsigned)(ar4 + 0x1c) = *(int *)(unsigned)(ar4 + 0x1c) + -0x6000000;
    }
  }
  return pfVar1;
}

__asm__(".globl _FUN_8c0d6164\n.set _FUN_8c0d6164, _FUN_8c0d6164_def\n");
//@unit 8c0d6264
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
int FUN_8c0d6264_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0d6264";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 4; for (int i_ = 0; i_ < 4; i_++) z_[i_] = 0; }
  code *ar5_00;
  code *ar6_00;
  undefined4 ar7_00;
  undefined4 in_fr1 = 0;
  ulonglong uVar1;
  char cVar2;
  
  cVar2 = '\0';
  (vsp = ((unsigned long)(fr0_ - 4)), Vec3_ctor_zero(ar4,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 4)), Vec3_ctor_zero(ar4 + 0x10,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 4)), Vec3_ctor_zero(ar4 + 0x20,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 4)), Vec3_ctor_zero(ar4 + 0x30,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 4)), Vec3_ctor_zero(ar4 + 0x40,ar5,ar6,ar7));
  ar7_00 = 0x20;
  ar6_00 = ((void *)0x8c0d6424);
  ar5_00 = ((void *)0x8c0d646c);
  ({ unsigned long t0_ = (unsigned long)(4); *(unsigned *)((((unsigned long)(fr0_ - 4)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 4)) - 8); FUN_8c010120(ar4 + 0x68,((void *)0x8c0d646c),((void *)0x8c0d6424),0x20); });
  (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c0d646c(ar4 + 0xe8,ar5_00,ar6_00,ar7_00));
  (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c0d63f8(ar4 + 0x108,ar5_00,ar6_00,ar7_00));
  (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c0d646c(ar4 + 0x11c,ar5_00,ar6_00,ar7_00));
  if (cVar2 == '\0') {
    *(undefined4 *)(unsigned)(ar4 + 0x54) = 0x459c4000;
    uVar1 = CONCAT44(0x44bb8000,in_fr1);
    *(undefined4 *)(unsigned)(ar4 + 0x58) = 0x44bb8000;
  }
  else {
    *(undefined8 *)(unsigned)(ar4 + 0x54) = 0x44bb8000459c4000;
    uVar1 = 0x13c44bb8000;
    *(undefined8 *)(unsigned)(ar4 + 0x58) = 0x13c44bb8000;
  }
  if (cVar2 == '\0') {
    *(undefined4 *)(unsigned)(ar4 + 0x5c) = 0;
    *(undefined4 *)(unsigned)(ar4 + 0x13c) = 0x42340000;
  }
  else {
    *(ulonglong *)(unsigned)(ar4 + 0x5c) = uVar1 & 0xffffffff;
    *(undefined8 *)(unsigned)(ar4 + 0x13c) = 0x4316000042340000;
  }
  (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c102a7c(ar4 + 0x11c,ar5_00,ar6_00,ar7_00));
  (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c102a7c(ar4 + 0xe8,ar5_00,ar6_00,ar7_00));
  (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c0d6c9c(ar4,ar5_00,ar6_00,ar7_00));
  return ar4;
}

__asm__(".globl _FUN_8c0d6264\n.set _FUN_8c0d6264, _FUN_8c0d6264_def\n");
//@unit 8c0d63c0
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
undefined4 *
free_if_nonnull_wrap_0d63c0_def(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "free_if_nonnull_wrap_0d63c0";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 12; for (int i_ = 0; i_ < 12; i_++) z_[i_] = 0; }
  
  if ((ar4 != (undefined4 *)(unsigned)0x0) && (*ar4 = ((undefined1 *)(unsigned)0x8c12c3a4), 0 < (short)ar5)) {
    ({ unsigned long ri0_ = (unsigned long)(CONCAT22((short)((uint)(*(undefined4 *)(fr0_ - 0xc)) >> 0x10),(short)ar5)); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 12)); free_if_nonnull(ar4,ar5,ar6,ar7); });
  }
  return ar4;
}

__asm__(".globl _free_if_nonnull_wrap_0d63c0\n.set _free_if_nonnull_wrap_0d63c0, _free_if_nonnull_wrap_0d63c0_def\n");
//@unit 8c0d63f8
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
undefined4 FUN_8c0d63f8_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0d63f8";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c10291c(ar4,ar5,ar6,ar7));
  return uVar1;
}

__asm__(".globl _FUN_8c0d63f8\n.set _FUN_8c0d63f8, _FUN_8c0d63f8_def\n");
//@unit 8c0d6424
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
undefined4 * FUN_8c0d6424_def(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0d6424";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 12; for (int i_ = 0; i_ < 12; i_++) z_[i_] = 0; }
  undefined4 ar5_00;
  undefined4 ain0;
  
  ain0 = CONCAT22((short)((uint)(*(undefined4 *)(fr0_ - 0xc)) >> 0x10),(undefined2)ar5);
  if (ar4 != (undefined4 *)(unsigned)0x0) {
    *ar4 = ((undefined1 *)(unsigned)0x8c12c394);
    ar5_00 = 0;
    (vsp = ((unsigned long)(fr0_ - 12)), free_if_nonnull_wrap_0d63c0(ar4,0,ar6,ar7));
    if (0 < (short)ain0) {
      ({ unsigned long ri0_ = (unsigned long)(ain0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 12)); free_if_nonnull(ar4,ar5_00,ar6,ar7); });
    }
  }
  return ar4;
}

__asm__(".globl _FUN_8c0d6424\n.set _FUN_8c0d6424, _FUN_8c0d6424_def\n");
//@unit 8c0d646c
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
undefined4 FUN_8c0d646c_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0d646c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c102a08(ar4,ar5,ar6,ar7));
  return uVar1;
}

__asm__(".globl _FUN_8c0d646c\n.set _FUN_8c0d646c, _FUN_8c0d646c_def\n");
//@unit 8c0d64a0
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
//@unit 8c0d66d8
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
undefined4 FUN_8c0d66d8_def(double *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0d66d8";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 32; for (int i_ = 0; i_ < 32; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  float fVar2;
  float fVar6;
  double dVar3;
  double dVar4;
  double dVar5;
  float in_fr15 = 0;
  undefined4 in_fr14 = 0;
  double in_xd0 = 0;
  double in_xd14 = 0;
  bool bVar7;
  char cVar8;
  char cVar9;
  
  cVar9 = '\0';
  cVar8 = '\0';
  fVar2 = *(float *)(unsigned)(ar4 + 1);
  fVar6 = *(float *)(unsigned)((int)ar4 + 0x54);
  if (fVar6 < fVar2) {
    fVar6 = *(float *)(unsigned)((int)ar4 + 0x54);
    *(float *)(unsigned)(ar4 + 1) = fVar6;
  }
  if (*(float *)(unsigned)((int)ar4 + 100) == 4.2039e-45) {
    if (360.0 <= *(float *)(unsigned)ar4) {
      if (2140.0 < *(float *)(unsigned)ar4) {
        *(float *)(unsigned)ar4 = 2140.0;
      }
    }
    else {
      *(float *)(unsigned)ar4 = 360.0;
    }
    fVar2 = *(float *)(unsigned)(ar4 + 1);
    if (240.0 <= fVar2) {
      fVar2 = *(float *)(unsigned)(ar4 + 1);
      fVar6 = 1300.0;
      if (1300.0 < fVar2) {
        fVar6 = 1300.0;
        *(float *)(unsigned)(ar4 + 1) = 1300.0;
      }
    }
    else {
      fVar6 = 240.0;
      *(float *)(unsigned)(ar4 + 1) = 240.0;
    }
  }
  (vsp = ((unsigned long)(fr0_ - 32)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)(((int)*(float *)(unsigned)(ar4 + 0x15) + 0xc))))(ar4 + 0x15,ar5,ar6,ar7));
  if (cVar9 == '\0') {
    dVar3 = CONCAT44D(*(float *)(unsigned)ar4,fVar2);
    in_fr15 = fVar6;
  }
  else {
    in_xd14 = CONCAT44D(fVar6,fVar2);
    dVar3 = *ar4;
    ((float *)(fr0_ - 0x1c))[0] = fVar6;
  }
  if (cVar8 == '\0') {
    bVar7 = in_fr15 < F32HI(dVar3);
  }
  else {
    bVar7 = CONCAT44D(in_fr14,in_fr15) < dVar3;
  }
  if (bVar7) {
    if (cVar9 == '\0') {
      *(float *)(unsigned)ar4 = in_fr15;
    }
    else {
      *ar4 = in_xd14;
    }
  }
  (vsp = ((unsigned long)(fr0_ - 32)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)(((int)*(float *)(unsigned)(ar4 + 0x19) + 0xc))))(ar4 + 0x19,ar5,ar6,ar7));
  if (cVar9 == '\0') {
    dVar4 = CONCAT44D(*(float *)(unsigned)ar4,SUB84(dVar3,0));
    in_fr15 = F32HI(dVar3);
    dVar3 = in_xd14;
  }
  else {
    dVar4 = *ar4;
  }
  if (cVar8 == '\0') {
    bVar7 = F32HI(dVar4) < in_fr15;
  }
  else {
    bVar7 = dVar4 < CONCAT44D(in_fr14,in_fr15);
  }
  if (bVar7) {
    if (cVar9 == '\0') {
      *(float *)(unsigned)ar4 = in_fr15;
    }
    else {
      *ar4 = dVar3;
    }
  }
  if (((*(float *)(unsigned)((int)ar4 + 100) == 0.0) || (*(float *)(unsigned)((int)ar4 + 100) == 1.4013e-45)) ||
     (dVar5 = dVar4, *(float *)(unsigned)((int)ar4 + 100) == 2.8026e-45)) {
    (vsp = ((unsigned long)(fr0_ - 32)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)(((int)*(float *)(unsigned)(ar4 + 0xd) + 0xc))))(ar4 + 0xd,ar5,ar6,ar7));
    if (cVar9 == '\0') {
      dVar5 = CONCAT44D(*(float *)(unsigned)((int)ar4 + 4),SUB84(dVar4,0));
      in_fr15 = F32HI(dVar4);
    }
    else {
      dVar5 = *(double *)(unsigned)((int)ar4 + 4);
      dVar3 = dVar4;
    }
    if (cVar8 == '\0') {
      bVar7 = in_fr15 < F32HI(dVar5);
    }
    else {
      bVar7 = CONCAT44D(in_fr14,in_fr15) < dVar5;
    }
    if (bVar7) {
      if (cVar9 == '\0') {
        *(float *)(unsigned)((int)ar4 + 4) = in_fr15;
      }
      else {
        *(double *)(unsigned)((int)ar4 + 4) = dVar3;
      }
    }
  }
  (vsp = ((unsigned long)(fr0_ - 32)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)(((int)*(float *)(unsigned)(ar4 + 0x11) + 0xc))))(ar4 + 0x11,ar5,ar6,ar7));
  if (cVar9 == '\0') {
    dVar4 = CONCAT44D(*(float *)(unsigned)((int)ar4 + 4),SUB84(dVar5,0));
    in_fr15 = F32HI(dVar5);
    dVar5 = dVar3;
  }
  else {
    dVar4 = *(double *)(unsigned)((int)ar4 + 4);
  }
  if (cVar8 == '\0') {
    bVar7 = F32HI(dVar4) < in_fr15;
  }
  else {
    bVar7 = dVar4 < CONCAT44D(in_fr14,in_fr15);
  }
  if (bVar7) {
    if (cVar9 == '\0') {
      *(float *)(unsigned)((int)ar4 + 4) = in_fr15;
    }
    else {
      *(double *)(unsigned)((int)ar4 + 4) = dVar5;
    }
  }
  (vsp = ((unsigned long)(fr0_ - 32)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)(((int)*(float *)(unsigned)(ar4 + 0x1d) + 8))))(ar4 + 0x1d,ar5,ar6,ar7));
  if (cVar9 == '\0') {
    dVar3 = CONCAT44D(*(float *)(unsigned)((int)ar4 + 4),SUB84(dVar4,0));
    in_fr15 = F32HI(dVar4);
    dVar4 = dVar5;
  }
  else {
    dVar3 = *(double *)(unsigned)((int)ar4 + 4);
  }
  if (cVar8 == '\0') {
    bVar7 = F32HI(dVar3) < in_fr15;
  }
  else {
    bVar7 = dVar3 < CONCAT44D(in_fr14,in_fr15);
  }
  if (bVar7) {
    if (cVar9 == '\0') {
      *(float *)(unsigned)((int)ar4 + 4) = in_fr15;
    }
    else {
      *(double *)(unsigned)((int)ar4 + 4) = dVar4;
    }
  }
  fVar2 = *(float *)(unsigned)((int)ar4 + 100);
  if (fVar2 == 0.0) {
    (vsp = ((unsigned long)(fr0_ - 32)), Vec3_assign(ar4 + 4,ar4,ar6,ar7));
    fVar2 = F32LO(dVar3);
    if (cVar9 == '\0') {
      fVar2 = *(float *)(unsigned)(ar4 + 5);
    }
    else {
      in_xd0 = ar4[5];
    }
    if (cVar8 == '\0') {
      fVar2 = fVar2 - 1.0;
    }
    else {
      fVar2 = SUB84(CONCAT44D(0x3f800000,fVar2) - CONCAT44D(0x3f800000,fVar2),0);
    }
    if (cVar9 == '\0') {
      *(float *)(unsigned)(ar4 + 5) = fVar2;
    }
    else {
      ar4[5] = in_xd0;
    }
    goto LAB_8c0d68ba;
  }
  if (fVar2 != 2.8026e-45) {
    if (fVar2 == 4.2039e-45) {
      if (cVar9 == '\0') {
        *(float *)(unsigned)(ar4 + 4) = *(float *)(unsigned)ar4;
        dVar3 = (double)(ulonglong)(uint)*(float *)(unsigned)(ar4 + 1);
      }
      else {
        dVar3 = *ar4;
        ar4[4] = dVar3;
        in_xd0 = ar4[1];
      }
      dVar4 = CONCAT44D(0x3f800000,SUB84(dVar3,0));
      if (cVar8 == '\0') {
        fVar2 = F32LO(dVar3) - 1.0;
      }
      else {
        fVar2 = SUB84(dVar4 - dVar4,0);
      }
      if (cVar9 == '\0') {
        *(float *)(unsigned)(ar4 + 5) = fVar2;
      }
      else {
        ar4[5] = in_xd0;
      }
      goto LAB_8c0d68ba;
    }
    if (fVar2 != 7.00649e-45) goto LAB_8c0d68ba;
  }
  (vsp = ((unsigned long)(fr0_ - 32)), Vec3_assign(ar4 + 4,ar4,ar6,ar7));
  fVar2 = F32LO(dVar3);
  if (cVar9 == '\0') {
    fVar2 = *(float *)(unsigned)(ar4 + 5);
  }
  else {
    in_xd0 = ar4[5];
  }
  if (cVar8 == '\0') {
    fVar2 = fVar2 - 1.0;
  }
  else {
    fVar2 = SUB84(CONCAT44D(0x3f800000,fVar2) - CONCAT44D(0x3f800000,fVar2),0);
  }
  if (cVar9 == '\0') {
    *(float *)(unsigned)(ar4 + 5) = fVar2;
  }
  else {
    ar4[5] = in_xd0;
  }
LAB_8c0d68ba:
  ({ unsigned long t0_ = (unsigned long)(((float *)(fr0_ - 0x1c))); *(unsigned *)((((unsigned long)(fr0_ - 32)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 32)) - 8); Vec3_sub(ar4 + 4,ar4,ar6,ar7); });
  (vsp = ((unsigned long)(fr0_ - 32)), Vec3_assign(ar4 + 2,((float *)(fr0_ - 0x1c)),ar6,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 32)), Vec3_dtor(((float *)(fr0_ - 0x1c)),0xffffffff,ar6,ar7));
  return uVar1;
}

__asm__(".globl _FUN_8c0d66d8\n.set _FUN_8c0d66d8, _FUN_8c0d66d8_def\n");
//@unit 8c0d6920
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
undefined4 FUN_8c0d6920_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0d6920";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0d6c9c(ar4,ar5,ar6,ar7));
  return uVar1;
}

__asm__(".globl _FUN_8c0d6920\n.set _FUN_8c0d6920, _FUN_8c0d6920_def\n");
//@unit 8c0d6954
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
undefined4 FUN_8c0d6954_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0d6954";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  (vsp = ((unsigned long)(fr0_ - 0)), Vec3_assign(ar4 + 0x30,ar4,ar6,ar7));
  *(undefined4 *)(unsigned)(ar4 + 0x60) = 0;
  *(undefined4 *)(unsigned)(ar4 + 100) = 0;
  return 100;
}

__asm__(".globl _FUN_8c0d6954\n.set _FUN_8c0d6954, _FUN_8c0d6954_def\n");
//@unit 8c0d6980
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
undefined4 FUN_8c0d6980_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0d6980";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  *(undefined4 *)(unsigned)(ar4 + 100) = 0;
  *(undefined4 *)(unsigned)(ar4 + 0x30) = 0;
  *(undefined4 *)(unsigned)(ar4 + 0x34) = 0;
  *(undefined4 *)(unsigned)(ar4 + 0x38) = 0;
  *(undefined4 *)(unsigned)(ar4 + 0x60) = 0;
  return 0x60;
}

__asm__(".globl _FUN_8c0d6980\n.set _FUN_8c0d6980, _FUN_8c0d6980_def\n");
//@unit 8c0d69a8
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
undefined4 FUN_8c0d69a8_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0d69a8";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 20; for (int i_ = 0; i_ < 20; i_++) z_[i_] = 0; }
  int a5;
  undefined4 extraout_fr1 = 0;
  undefined4 extraout_fr0 = 0;
  char cVar1;
  
  cVar1 = '\0';
  *(undefined4 *)(unsigned)(ar4 + 0x60) = ar5;
  a5 = (int)&(*(undefined8 *)(fr0_ - 0x14)) + 4;
  (vsp = ((unsigned long)(fr0_ - 20)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0x60) + 8) + 0x160))))(*(int *)(unsigned)(ar4 + 0x60),a5,ar6,ar7));
  if (cVar1 == '\0') {
    (*(undefined8 *)(fr0_ - 0x14)) = CONCAT44((*(uint*)((uchar*)&(*(undefined8 *)(fr0_ - 0x14))+4)),extraout_fr0);
  }
  else {
    (*(undefined8 *)(fr0_ - 0x14)) = CONCAT44(extraout_fr0,extraout_fr1);
  }
  (vsp = ((unsigned long)(fr0_ - 20)), FUN_8c102a7c(ar4 + 0x11c,a5,ar6,ar7));
  *(undefined4 *)(unsigned)(ar4 + 100) = 2;
  return 100;
}

__asm__(".globl _FUN_8c0d69a8\n.set _FUN_8c0d69a8, _FUN_8c0d69a8_def\n");
//@unit 8c0d6a20
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
undefined4 FUN_8c0d6a20_def(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0d6a20";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  ar4[0xc] = *ar4;
  ar4[0xd] = 0x44ed8000;
  ar4[0xe] = 0x4445c000;
  if (360.0 <= (float)ar4[0xc]) {
    if (2140.0 < (float)ar4[0xc]) {
      ar4[0xc] = 0x4505c000;
    }
  }
  else {
    ar4[0xc] = 0x43b40000;
  }
  ar4[8] = *ar4;
  ar4[9] = ar4[1];
  ar4[10] = 0x44458000;
  ar4[0x19] = 4;
  return 100;
}

__asm__(".globl _FUN_8c0d6a20\n.set _FUN_8c0d6a20, _FUN_8c0d6a20_def\n");
//@unit 8c0d6aac
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
//@unit 8c0d6c18
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
undefined4 FUN_8c0d6c18_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0d6c18";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined8 in_dr0 = 0;
  double dVar1;
  float in_fr15 = 0;
  undefined4 in_fr14 = 0;
  undefined8 in_xd14 = 0;
  bool bVar2;
  char cVar3;
  char cVar4;
  
  cVar4 = '\0';
  cVar3 = '\0';
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0d6aac(ar4,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(ar4 + 0xe8) + 8))))((int *)(unsigned)(ar4 + 0xe8),ar5,ar6,ar7));
  if (cVar4 == '\0') {
    dVar1 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 0x34),(int)in_dr0);
    in_fr15 = F32HI(in_dr0);
    in_dr0 = in_xd14;
  }
  else {
    dVar1 = *(double *)(unsigned)(ar4 + 0x34);
  }
  if (cVar3 == '\0') {
    bVar2 = F32HI(dVar1) < in_fr15;
  }
  else {
    bVar2 = dVar1 < CONCAT44D(in_fr14,in_fr15);
  }
  if (bVar2) {
    if (cVar4 == '\0') {
      *(float *)(unsigned)(ar4 + 0x34) = in_fr15;
      *(float *)(unsigned)(ar4 + 0x24) = in_fr15;
    }
    else {
      *(undefined8 *)(unsigned)(ar4 + 0x34) = in_dr0;
      *(undefined8 *)(unsigned)(ar4 + 0x24) = in_dr0;
    }
  }
  *(undefined4 *)(unsigned)(ar4 + 100) = 6;
  return 100;
}

__asm__(".globl _FUN_8c0d6c18\n.set _FUN_8c0d6c18, _FUN_8c0d6c18_def\n");
//@unit 8c0d6c9c
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
undefined4 FUN_8c0d6c9c_def(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0d6c9c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 ar5_00;
  float in_fr1 = 0;
  undefined8 in_dr4 = 0;
  undefined8 in_dr6 = 0;
  undefined8 in_xd0 = 0;
  char cVar1;
  char cVar2;
  
  cVar2 = '\0';
  cVar1 = '\0';
  *ar4 = (int)((ulonglong)in_dr4 >> 0x20);
  ar4[1] = (int)in_dr4;
  ar4[2] = (int)((ulonglong)in_dr6 >> 0x20);
  ar5_00 = (vsp = ((unsigned long)(fr0_ - 0)), Vec3_assign(ar4 + 0xc,ar4,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), Vec3_assign(ar4 + 8,ar5_00,ar6,ar7));
  if (cVar2 == '\0') {
    in_fr1 = (float)ar4[10];
  }
  else {
    in_xd0 = *(undefined8 *)(unsigned)(ar4 + 10);
  }
  if (cVar1 == '\0') {
    in_fr1 = in_fr1 - 1.0;
  }
  else {
    in_fr1 = SUB84(CONCAT44D(0x3f800000,in_fr1) - CONCAT44D(0x3f800000,in_fr1),0);
  }
  if (cVar2 == '\0') {
    ar4[10] = in_fr1;
  }
  else {
    *(undefined8 *)(unsigned)(ar4 + 10) = in_xd0;
  }
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c022d04(ar4 + 4,ar5_00,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c022d04(ar4 + 0x10,ar5_00,ar6,ar7));
  ar4[0x18] = 0;
  if (cVar2 == '\0') {
    ar4[0x14] = 0;
  }
  else {
    *(ulonglong *)(unsigned)(ar4 + 0x14) = (ulonglong)(uint)in_fr1;
  }
  ar4[0x19] = 0;
  return 100;
}

__asm__(".globl _FUN_8c0d6c9c\n.set _FUN_8c0d6c9c, _FUN_8c0d6c9c_def\n");
//@unit 8c0d6d58
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
undefined4 FUN_8c0d6d58_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0d6d58";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 64; for (int i_ = 0; i_ < 64; i_++) z_[i_] = 0; }
  ulonglong uVar1;
  undefined4 uVar2;
  undefined4 ar6_00;
  float fVar3;
  ulonglong in_dr0 = 0;
  code *pcVar5;
  double dVar4;
  ulonglong in_xd0 = 0;
  char cVar6;
  char cVar7;
  
  cVar7 = '\0';
  cVar6 = '\0';
  uVar2 = ar5;
  ar6_00 = ar6;
  (vsp = ((unsigned long)(fr0_ - 64)), Vec3_ctor_zero(&(*(undefined4 *)(fr0_ - 0x1c)),ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 64)), Vec3_ctor_zero(&(*(float *)(fr0_ - 0x2c)),uVar2,ar6_00,ar7));
  if ((*(undefined1 *)(unsigned)0x8c437c80) == '\0') {
    in_dr0 = in_dr0 & 0xffffffff;
    uVar1 = in_dr0;
    if (cVar7 == '\0') {
      (*(undefined4 *)(unsigned)(unsigned)0x8c437c7c) = (*(undefined4 *)(unsigned)(unsigned)0x8c437c7c) & 0xffffffff00000000;
      uVar1 = (*(undefined4 *)(unsigned)(unsigned)0x8c437c7c);
    }
    (*(undefined4 *)(unsigned)(unsigned)0x8c437c7c) = uVar1;
    (*(undefined4 *)(unsigned)(unsigned)0x8c437c7c) = CONCAT14(1,(*(undefined4 *)(unsigned)(unsigned)0x8c437c7c));
  }
  if ((*(undefined1 *)(unsigned)0x8c437c88) == '\0') {
    in_dr0 = in_dr0 & 0xffffffff;
    uVar1 = in_dr0;
    if (cVar7 == '\0') {
      (*(undefined4 *)(unsigned)(unsigned)0x8c437c84) = (*(undefined4 *)(unsigned)(unsigned)0x8c437c84) & 0xffffffff00000000;
      uVar1 = (*(undefined4 *)(unsigned)(unsigned)0x8c437c84);
    }
    (*(undefined4 *)(unsigned)(unsigned)0x8c437c84) = uVar1;
    (*(undefined4 *)(unsigned)(unsigned)0x8c437c84) = CONCAT14(1,(*(undefined4 *)(unsigned)(unsigned)0x8c437c84));
  }
  ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x3c))); *(unsigned *)((((unsigned long)(fr0_ - 64)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 64)) - 8); Vec3_sub(ar6,ar5,ar6_00,ar7); });
  (vsp = ((unsigned long)(fr0_ - 64)), Vec3_assign(&(*(undefined4 *)(fr0_ - 0x1c)),((undefined1 *)(fr0_ - 0x3c)),ar6_00,ar7));
  uVar2 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 64)), Vec3_dtor(((undefined1 *)(fr0_ - 0x3c)),0xffffffff,ar6_00,ar7));
  (vsp = ((unsigned long)(fr0_ - 64)), Vec3_length_sq(&(*(undefined4 *)(fr0_ - 0x1c)),uVar2,ar6_00,ar7));
  uVar1 = in_dr0;
  if (cVar7 == '\0') {
    (*(undefined4 *)(unsigned)(unsigned)0x8c437c7c) = CONCAT44((*(undefined4 *)(unsigned)(unsigned)0x8c437c80),(int)(in_dr0 >> 0x20));
    uVar1 = (*(undefined4 *)(unsigned)(unsigned)0x8c437c7c);
  }
  (*(undefined4 *)(unsigned)(unsigned)0x8c437c7c) = uVar1;
  (vsp = ((unsigned long)(fr0_ - 64)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(ar4 + 0x11c) + 8))))((int *)(unsigned)(ar4 + 0x11c),uVar2,ar6_00,ar7));
  fVar3 = (float)(in_dr0 >> 0x20);
  if (cVar7 == '\0') {
    (*(undefined4 *)(unsigned)(unsigned)0x8c437c84) = CONCAT44((*(undefined4 *)(unsigned)(unsigned)0x8c437c88),fVar3);
    pcVar5 = (code *)0x3f000000;
    in_dr0 = in_xd0;
  }
  else {
    fVar3 = 0.5;
    pcVar5 = ((void *)0x8c022f54);
    (*(undefined4 *)(unsigned)(unsigned)0x8c437c84) = in_dr0;
  }
  if (cVar6 == '\0' && (float)(uint)pcVar5 < fVar3) {
    (vsp = ((unsigned long)(fr0_ - 64)), Vec3_length(&(*(undefined4 *)(fr0_ - 0x1c)),uVar2,ar6_00,ar7));
    if (cVar7 == '\0') {
      dVar4 = CONCAT44D((*(undefined4 *)(fr0_ - 0x1c)),(*(undefined4 *)(unsigned)(unsigned)0x8c437c84));
    }
    else {
      dVar4 = CONCAT44D((*(undefined4 *)(fr0_ - 0x18)),(*(undefined4 *)(fr0_ - 0x1c)));
      in_dr0 = (*(undefined4 *)(unsigned)(unsigned)0x8c437c84);
    }
    if (cVar6 == '\0') {
      (*(float *)(fr0_ - 0x2c)) = F32LO(dVar4) * F32HI(dVar4);
    }
    else {
      (*(float *)(fr0_ - 0x2c)) = SUB84(dVar4 * dVar4,0);
    }
    if (cVar7 == '\0') {
      dVar4 = CONCAT44D((*(undefined4 *)(fr0_ - 0x18)),(*(undefined4 *)(unsigned)(unsigned)0x8c437c84));
    }
    else {
      (*(float *)(fr0_ - 0x2c)) = (float)in_dr0;
      dVar4 = CONCAT44D((*(undefined4 *)(fr0_ - 0x14)),(*(undefined4 *)(fr0_ - 0x18)));
      in_dr0 = (*(undefined4 *)(unsigned)(unsigned)0x8c437c84);
    }
    if (cVar6 == '\0') {
      (*(float *)(fr0_ - 0x28)) = F32LO(dVar4) * F32HI(dVar4);
    }
    else {
      (*(float *)(fr0_ - 0x28)) = SUB84(dVar4 * dVar4,0);
    }
    if (cVar7 == '\0') {
      dVar4 = CONCAT44D((*(undefined4 *)(fr0_ - 0x14)),(*(undefined4 *)(unsigned)(unsigned)0x8c437c84));
    }
    else {
      (*(float *)(fr0_ - 0x28)) = (float)in_dr0;
      dVar4 = CONCAT44D((*(undefined4 *)(fr0_ - 0x10)),(*(undefined4 *)(fr0_ - 0x14)));
      in_dr0 = (*(undefined4 *)(unsigned)(unsigned)0x8c437c84);
    }
    if (cVar6 == '\0') {
      (*(float *)(fr0_ - 0x24)) = F32LO(dVar4) * F32HI(dVar4);
    }
    else {
      (*(float *)(fr0_ - 0x24)) = SUB84(dVar4 * dVar4,0);
    }
    if (cVar7 != '\0') {
      (*(float *)(fr0_ - 0x24)) = (float)in_dr0;
      (*(undefined4 *)(fr0_ - 0x20)) = (undefined4)(in_dr0 >> 0x20);
    }
    (vsp = ((unsigned long)(fr0_ - 64)), FUN_8c023aa0(ar5,&(*(float *)(fr0_ - 0x2c)),ar6_00,ar7));
    (vsp = ((unsigned long)(fr0_ - 64)), Vec3_dtor(&(*(float *)(fr0_ - 0x2c)),0xffffffff,ar6_00,ar7));
    (vsp = ((unsigned long)(fr0_ - 64)), Vec3_dtor(&(*(undefined4 *)(fr0_ - 0x1c)),0xffffffff,ar6_00,ar7));
    uVar2 = 2;
  }
  else {
    (vsp = ((unsigned long)(fr0_ - 64)), Vec3_assign(ar5,ar6,ar6_00,ar7));
    (vsp = ((unsigned long)(fr0_ - 64)), Vec3_dtor(&(*(float *)(fr0_ - 0x2c)),0xffffffff,ar6_00,ar7));
    (vsp = ((unsigned long)(fr0_ - 64)), Vec3_dtor(&(*(undefined4 *)(fr0_ - 0x1c)),0xffffffff,ar6_00,ar7));
    uVar2 = 4;
  }
  return uVar2;
}

__asm__(".globl _FUN_8c0d6d58\n.set _FUN_8c0d6d58, _FUN_8c0d6d58_def\n");
//@unit 8c0d6ee0
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
undefined4 * FUN_8c0d6ee0_def(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0d6ee0";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  *ar4 = 0x43160000;
  ar4[1] = 0;
  ar4[2] = 0;
  return ar4;
}

__asm__(".globl _FUN_8c0d6ee0\n.set _FUN_8c0d6ee0, _FUN_8c0d6ee0_def\n");
//@unit 8c0d6ef8
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
int free_if_nonnull_wrap_0d6ef8_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "free_if_nonnull_wrap_0d6ef8";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 12; for (int i_ = 0; i_ < 12; i_++) z_[i_] = 0; }
  
  if ((ar4 != 0) && (0 < (short)ar5)) {
    ({ unsigned long ri0_ = (unsigned long)(CONCAT22((short)((uint)(*(undefined4 *)(fr0_ - 0xc)) >> 0x10),(short)ar5)); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 12)); free_if_nonnull(ar4,ar5,ar6,ar7); });
  }
  return ar4;
}

__asm__(".globl _free_if_nonnull_wrap_0d6ef8\n.set _free_if_nonnull_wrap_0d6ef8, _free_if_nonnull_wrap_0d6ef8_def\n");
//@unit 8c0d6f28
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
undefined4 * FUN_8c0d6f28_def(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0d6f28";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_zero(ar4 + 1,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), Vec3_set_zero(ar4 + 5,ar5,ar6,ar7));
  *ar4 = 0;
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c02a1fc(ar4 + 5,ar5,ar6,ar7));
  return ar4;
}

__asm__(".globl _FUN_8c0d6f28\n.set _FUN_8c0d6f28, _FUN_8c0d6f28_def\n");
//@unit 8c0d6f68
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
int FUN_8c0d6f68_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0d6f68";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 16; for (int i_ = 0; i_ < 16; i_++) z_[i_] = 0; }
  undefined4 ar5_00;
  undefined4 ain0;
  
  ain0 = CONCAT22((short)((uint)(*(undefined4 *)(fr0_ - 0xc)) >> 0x10),(undefined2)ar5);
  if (ar4 != 0) {
    (vsp = ((unsigned long)(fr0_ - 16)), object_dtor_delete(ar4 + 0x14,0xffffffff,ar6,ar7));
    ar5_00 = 0xffffffff;
    (vsp = ((unsigned long)(fr0_ - 16)), Vec3_dtor(ar4 + 4,0xffffffff,ar6,ar7));
    if (0 < (short)ain0) {
      ({ unsigned long ri0_ = (unsigned long)(ain0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 16)); free_if_nonnull(ar4,ar5_00,ar6,ar7); });
    }
  }
  return ar4;
}

__asm__(".globl _FUN_8c0d6f68\n.set _FUN_8c0d6f68, _FUN_8c0d6f68_def\n");
//@unit 8c0d6fb8
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
undefined4 * FUN_8c0d6fb8_def(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0d6fb8";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 *puVar2;
  int ar4_00;
  float fVar3;
  double dVar4;
  undefined8 in_xd0 = 0;
  char cVar5;
  char cVar6;
  
  cVar6 = '\0';
  cVar5 = '\0';
  puVar2 = (undefined4 *)(unsigned)0x0;
  if (*ar4 != 0) {
    ar4_00 = *ar4;
    iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), get_field_24_05c284(ar4_00,ar5,ar6,ar7));
    if ((iVar1 == 0) || (iVar1 == 0xf)) {
      puVar2 = (undefined4 *)(unsigned)(vsp = ((unsigned long)(fr0_ - 0)), FUN_8c02a1fc(ar4 + 5,ar5,ar6,ar7));
    }
    else {
      iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), rand(ar4_00,ar5,ar6,ar7));
      if (cVar6 == '\0') {
        dVar4 = CONCAT44D(0x47000000,(float)iVar1);
      }
      else {
        dVar4 = 1.4411521857012367e+18;
      }
      if (cVar5 == '\0') {
        fVar3 = F32LO(dVar4) / F32HI(dVar4);
      }
      else {
        fVar3 = SUB84(dVar4 / dVar4,0);
      }
      if (cVar6 == '\0') {
        dVar4 = CONCAT44D(0x43b40000,fVar3);
      }
      else {
        dVar4 = -5629500670083072.0;
      }
      if (cVar5 == '\0') {
        fVar3 = F32LO(dVar4) * F32HI(dVar4);
      }
      else {
        fVar3 = SUB84(dVar4 * dVar4,0);
      }
      if (cVar6 == '\0') {
        dVar4 = CONCAT44D(0xc3340000,fVar3);
      }
      else {
        dVar4 = -8.132627540887082e-251;
      }
      if (cVar5 == '\0') {
        fVar3 = F32LO(dVar4) + F32HI(dVar4);
      }
      else {
        fVar3 = SUB84(dVar4 + dVar4,0);
      }
      if (cVar6 == '\0') {
        ar4[6] = (int)fVar3;
      }
      else {
        *(undefined8 *)(unsigned)(ar4 + 6) = in_xd0;
      }
      iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), rand(ar4_00,ar5,ar6,ar7));
      if (cVar6 == '\0') {
        dVar4 = CONCAT44D(0x47000000,(float)iVar1);
      }
      else {
        dVar4 = 1.4411521857012367e+18;
      }
      if (cVar5 == '\0') {
        fVar3 = F32LO(dVar4) / F32HI(dVar4);
      }
      else {
        fVar3 = SUB84(dVar4 / dVar4,0);
      }
      if (cVar6 == '\0') {
        dVar4 = CONCAT44D(0x43b40000,fVar3);
      }
      else {
        dVar4 = -5629500670083072.0;
      }
      if (cVar5 == '\0') {
        fVar3 = F32LO(dVar4) * F32HI(dVar4);
      }
      else {
        fVar3 = SUB84(dVar4 * dVar4,0);
      }
      puVar2 = ((undefined4 *)(unsigned)0x8c0d7058);
      if (cVar6 == '\0') {
        dVar4 = CONCAT44D(0xc3340000,fVar3);
      }
      else {
        dVar4 = -8.132627540887082e-251;
      }
      if (cVar5 == '\0') {
        fVar3 = F32LO(dVar4) + F32HI(dVar4);
      }
      else {
        fVar3 = SUB84(dVar4 + dVar4,0);
      }
      if (cVar6 == '\0') {
        ar4[7] = (int)fVar3;
      }
      else {
        *(undefined8 *)(unsigned)(ar4 + 7) = in_xd0;
      }
    }
  }
  return puVar2;
}

__asm__(".globl _FUN_8c0d6fb8\n.set _FUN_8c0d6fb8, _FUN_8c0d6fb8_def\n");
//@unit 8c0d7060
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
int FUN_8c0d7060_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0d7060";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 extraout_fr1 = 0;
  char cVar1;
  
  cVar1 = '\0';
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c015ab8(ar4,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_zero(ar4 + 4,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_zero(ar4 + 0x14,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), Vec3_set_zero(ar4 + 0x24,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c016fcc(ar4 + 0x30,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c016fcc(ar4 + 0xc4,ar5,ar6,ar7));
  *(undefined4 *)(unsigned)(ar4 + 0x164) = 0;
  if (cVar1 == '\0') {
    *(undefined4 *)(unsigned)(ar4 + 0x158) = 0x3f800000;
  }
  else {
    *(undefined8 *)(unsigned)(ar4 + 0x158) = CONCAT44(0x3f800000,extraout_fr1);
  }
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0d7314(ar4,ar5,ar6,ar7));
  return ar4;
}

__asm__(".globl _FUN_8c0d7060\n.set _FUN_8c0d7060, _FUN_8c0d7060_def\n");
//@unit 8c0d70e4
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
undefined4 FUN_8c0d70e4_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0d70e4";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0d7314(ar4,ar5,ar6,ar7));
  return uVar1;
}

__asm__(".globl _FUN_8c0d70e4\n.set _FUN_8c0d70e4, _FUN_8c0d70e4_def\n");
//@unit 8c0d7100
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
undefined4 FUN_8c0d7100_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0d7100";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 24; for (int i_ = 0; i_ < 24; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  int a5;
  undefined1 *ar6_00;
  int a7;
  
  ar6_00 = ((undefined1 *)(fr0_ - 0x14));
  (vsp = ((unsigned long)(fr0_ - 24)), Vec3_set_zero(((undefined1 *)(fr0_ - 0x14)),ar5,ar6,ar7));
  a7 = ar4 + 0x30;
  a5 = ar4 + 4;
  (vsp = ((unsigned long)(fr0_ - 24)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(ar4 + 0xc4) + 0xc))))((int *)(unsigned)(ar4 + 0xc4),a5,((undefined1 *)(fr0_ - 0x14)),a7));
  (vsp = ((unsigned long)(fr0_ - 24)), FUN_8c0d7154(ar4,a5,ar6_00,a7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 24)), object_dtor_delete(((undefined1 *)(fr0_ - 0x14)),0xffffffff,ar6_00,a7));
  return uVar1;
}

__asm__(".globl _FUN_8c0d7100\n.set _FUN_8c0d7100, _FUN_8c0d7100_def\n");
//@unit 8c0d7154
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
undefined * FUN_8c0d7154_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0d7154";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined *puVar1;
  float fVar2;
  
  if ((*(int *)(unsigned)(ar4 + 0x164) == 2) &&
     (fVar2 = *(float *)(unsigned)(ar4 + 0x2c) - 1.5, *(float *)(unsigned)(ar4 + 0x2c) = fVar2, fVar2 < 0.0)) {
    *(undefined4 *)(unsigned)(ar4 + 0x2c) = 0;
    *(undefined4 *)(unsigned)(ar4 + 0x164) = 0;
  }
  puVar1 = ((undefined *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x160));
  if (puVar1 == (undefined *)(unsigned)0x0) {
    fVar2 = *(float *)(unsigned)(ar4 + 0x15c) + 0.05;
    *(float *)(unsigned)(ar4 + 0x15c) = fVar2;
    puVar1 = (undefined *)(unsigned)0x0;
    if (0.0 < fVar2) {
      *(undefined4 *)(unsigned)(ar4 + 0x15c) = 0;
      puVar1 = (undefined *)(unsigned)0x160;
      *(undefined4 *)(unsigned)(ar4 + 0x160) = 2;
    }
  }
  else if (puVar1 == (undefined *)(unsigned)0x1) {
    fVar2 = *(float *)(unsigned)(ar4 + 0x15c) - 0.05;
    *(float *)(unsigned)(ar4 + 0x15c) = fVar2;
    puVar1 = ((undefined1 *)(unsigned)0x8c0d7238);
    if (fVar2 < -1.0) {
      *(undefined4 *)(unsigned)(ar4 + 0x15c) = 0xbf800000;
      puVar1 = (undefined *)(unsigned)0x160;
      *(undefined4 *)(unsigned)(ar4 + 0x160) = 3;
    }
  }
  return puVar1;
}

__asm__(".globl _FUN_8c0d7154\n.set _FUN_8c0d7154, _FUN_8c0d7154_def\n");
//@unit 8c0d723c
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
int FUN_8c0d723c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0d723c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  uint in_fr1 = 0;
  uint extraout_fr1 = 0;
  char cVar2;
  
  cVar2 = '\0';
  iVar1 = *(int *)(unsigned)(ar4 + 0x168);
  if (0 < iVar1) {
    iVar1 = *(int *)(unsigned)(ar4 + 0x168) + -1;
    *(int *)(unsigned)(ar4 + 0x168) = iVar1;
    if (iVar1 == 0) {
      iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0d7288(ar4,0,ar6,ar7));
      in_fr1 = extraout_fr1;
    }
  }
  if (cVar2 == '\0') {
    *(undefined4 *)(unsigned)(ar4 + 0x2c) = 0;
  }
  else {
    *(ulonglong *)(unsigned)(ar4 + 0x2c) = (ulonglong)in_fr1;
  }
  return iVar1;
}

__asm__(".globl _FUN_8c0d723c\n.set _FUN_8c0d723c, _FUN_8c0d723c_def\n");
//@unit 8c0d7288
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
int FUN_8c0d7288_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0d7288";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  
  iVar1 = 0x164;
  *(undefined4 *)(unsigned)(0x164 + ar4) = ar5;
  return iVar1;
}

__asm__(".globl _FUN_8c0d7288\n.set _FUN_8c0d7288, _FUN_8c0d7288_def\n");
//@unit 8c0d7294
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
int FUN_8c0d7294_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0d7294";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(unsigned)(0x160 + ar4);
  if (iVar1 == 0) {
LAB_8c0d72c0:
    iVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0d75a0(ar4,ar5,ar6,ar7));
    iVar1 = 0x160;
    if (iVar2 == 1) {
      *(undefined4 *)(unsigned)(0x160 + ar4) = 1;
      iVar2 = iVar1;
    }
  }
  else {
    if (iVar1 != 1) {
      if (iVar1 == 2) goto LAB_8c0d72c0;
      if (iVar1 != 3) {
        return iVar1;
      }
    }
    iVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0d75a0(ar4,ar5,ar6,ar7));
    iVar1 = 0x160;
    if (iVar2 == 0) {
      *(undefined4 *)(unsigned)(0x160 + ar4) = 0;
      iVar2 = iVar1;
    }
  }
  return iVar2;
}

__asm__(".globl _FUN_8c0d7294\n.set _FUN_8c0d7294, _FUN_8c0d7294_def\n");
//@unit 8c0d7314
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
undefined4 FUN_8c0d7314_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0d7314";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  uint extraout_fr1 = 0;
  char cVar1;
  
  cVar1 = '\0';
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c02a1fc(ar4 + 0x24,ar5,ar6,ar7));
  *(undefined4 *)(unsigned)(ar4 + 0x168) = 0;
  if (cVar1 == '\0') {
    *(undefined4 *)(unsigned)(ar4 + 0x15c) = 0;
  }
  else {
    *(ulonglong *)(unsigned)(ar4 + 0x15c) = (ulonglong)extraout_fr1;
  }
  *(undefined4 *)(unsigned)(ar4 + 0x160) = 2;
  return 0x160;
}

__asm__(".globl _FUN_8c0d7314\n.set _FUN_8c0d7314, _FUN_8c0d7314_def\n");
//@unit 8c0d7354
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
undefined4 FUN_8c0d7354_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0d7354";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 80; for (int i_ = 0; i_ < 80; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  undefined4 ar4_00;
  
  (*(undefined4 *)(fr0_ - 0x14)) = (*(undefined1 *)(unsigned)0x8c13f530);
  (*(undefined4 *)(fr0_ - 0x10)) = (*(undefined1 *)(unsigned)0x8c13f534);
  (*(undefined4 *)(fr0_ - 0xc)) = (*(undefined1 *)(unsigned)0x8c13f538);
  (*(undefined4 *)(fr0_ - 0x18)) = *(undefined4 *)(unsigned)(ar4 + 0x15c);
  uVar1 = (*(undefined4 *)(unsigned)(unsigned)0x8c13f53c);
  (vsp = ((unsigned long)(fr0_ - 80)), FUN_8c233dac(&(*(undefined4 *)(fr0_ - 0x18)),ar5,ar6,ar7));
  ar4_00 = 0;
  ({ unsigned long ri0_ = (unsigned long)(uVar1); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 80)); FUN_8c256328(0,ar5,ar6,ar7); });
  (vsp = ((unsigned long)(fr0_ - 80)), FUN_8c019058(ar4_00,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 80)), FUN_8c019160(ar4_00,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 80)), FUN_8c015b30(ar4,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 80)), FUN_8c256210(1,ar5,ar6,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 80)), FUN_8c233dac((fr0_ + (int)0xffffffd8),ar5,ar6,ar7));
  return uVar1;
}

__asm__(".globl _FUN_8c0d7354\n.set _FUN_8c0d7354, _FUN_8c0d7354_def\n");
//@unit 8c0d7410
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
undefined4 FUN_8c0d7410_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0d7410";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 80; for (int i_ = 0; i_ < 80; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  undefined4 ar4_00;
  
  (*(undefined4 *)(fr0_ - 0x14)) = (*(undefined1 *)(unsigned)0x8c13f550);
  (*(undefined4 *)(fr0_ - 0x10)) = (*(undefined1 *)(unsigned)0x8c13f554);
  (*(undefined4 *)(fr0_ - 0xc)) = (*(undefined1 *)(unsigned)0x8c13f558);
  (*(undefined4 *)(fr0_ - 0x18)) = *(undefined4 *)(unsigned)(ar4 + 0x15c);
  uVar1 = (*(undefined4 *)(unsigned)(unsigned)0x8c13f55c);
  (vsp = ((unsigned long)(fr0_ - 80)), FUN_8c233dac(&(*(undefined4 *)(fr0_ - 0x18)),ar5,ar6,ar7));
  ar4_00 = 0;
  ({ unsigned long ri0_ = (unsigned long)(uVar1); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 80)); FUN_8c256328(0,ar5,ar6,ar7); });
  (vsp = ((unsigned long)(fr0_ - 80)), FUN_8c019058(ar4_00,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 80)), FUN_8c019160(ar4_00,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 80)), FUN_8c015af8(ar4,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 80)), FUN_8c256210(1,ar5,ar6,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 80)), FUN_8c233dac((fr0_ + (int)0xffffffd8),ar5,ar6,ar7));
  return uVar1;
}

__asm__(".globl _FUN_8c0d7410\n.set _FUN_8c0d7410, _FUN_8c0d7410_def\n");
//@unit 8c0d74cc
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
undefined4 FUN_8c0d74cc_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0d74cc";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 in_fr4 = 0;
  undefined4 in_PR = 0;
  char cVar1;
  
  cVar1 = '\0';
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0d7288(ar4,1,ar6,ar7));
  if (cVar1 == '\0') {
    *(undefined4 *)(unsigned)(ar4 + 0x2c) = in_fr4;
  }
  else {
    *(undefined8 *)(unsigned)(ar4 + 0x2c) = CONCAT44(in_PR,in_fr4);
  }
  *(undefined4 *)(unsigned)(ar4 + 0x168) = 0x1e;
  return 0x168;
}

__asm__(".globl _FUN_8c0d74cc\n.set _FUN_8c0d74cc, _FUN_8c0d74cc_def\n");
//@unit 8c0d7508
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
undefined4 * FUN_8c0d7508_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0d7508";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 16; for (int i_ = 0; i_ < 16; i_++) z_[i_] = 0; }
  undefined4 *puVar1;
  int iVar2;
  undefined4 ar6_00;
  float fVar3;
  double dVar4;
  float fVar5;
  char cVar6;
  char cVar7;
  
  cVar7 = '\0';
  cVar6 = '\0';
  ((undefined4 *)(fr0_ - 0xc))[0] = 0xffffffff;
  puVar1 = ((undefined4 *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x164));
  if (puVar1 == (undefined4 *)(unsigned)0x0) {
    iVar2 = (vsp = ((unsigned long)(fr0_ - 16)), rand(ar4,ar5,ar6,ar7));
    if (cVar7 == '\0') {
      dVar4 = CONCAT44D(0x47000000,(float)iVar2);
    }
    else {
      dVar4 = 5.2386908071071214e-11;
    }
    if (cVar6 == '\0') {
      fVar3 = F32LO(dVar4) / F32HI(dVar4);
    }
    else {
      fVar3 = SUB84(dVar4 / dVar4,0);
    }
    puVar1 = ((undefined4 *)(unsigned)0x8c0d7588);
    if (cVar7 == '\0') {
      fVar5 = 0.1;
    }
    else {
      fVar3 = 0.1;
      fVar5 = -1.3200388e-31;
    }
    if (cVar6 != '\0' || fVar3 <= fVar5) {
      ((undefined4 *)(fr0_ - 0xc))[0] = (vsp = ((unsigned long)(fr0_ - 16)), FUN_8c02190c(0x8c2b59d0,ar5,ar6,ar7));
      ar6_00 = 0x12;
      (vsp = ((unsigned long)(fr0_ - 16)), FUN_8c021994(0x8c2b59d0,((undefined4 *)(fr0_ - 0xc))[0],0x12,ar7));
      (vsp = ((unsigned long)(fr0_ - 16)), FUN_8c021a8c(0x8c2b59d0,((undefined4 *)(fr0_ - 0xc)),ar6_00,ar7));
      *(undefined4 *)(unsigned)(ar4 + 0x164) = 2;
      puVar1 = ((undefined4 *)(unsigned)0x8c0d759c);
      if (cVar7 == '\0') {
        *(undefined4 *)(unsigned)(ar4 + 0x2c) = 0x40400000;
      }
      else {
        *(undefined8 *)(unsigned)(ar4 + 0x2c) = 0x4f222fe640400000;
      }
    }
  }
  return puVar1;
}

__asm__(".globl _FUN_8c0d7508\n.set _FUN_8c0d7508, _FUN_8c0d7508_def\n");
//@unit 8c0d75a0
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
undefined4 FUN_8c0d75a0_def(int ar4,float *ar5,int ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0d75a0";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 104; for (int i_ = 0; i_ < 104; i_++) z_[i_] = 0; }
  float fVar1;
  float fVar2;
  char cVar3;
  char cVar4;
  
  cVar4 = '\0';
  cVar3 = '\0';
  (vsp = ((unsigned long)(fr0_ - 104)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(ar4 + 0xc4) + 0x38))))((int *)(unsigned)(ar4 + 0xc4),&(*(float *)(fr0_ - 0x68)),ar6,ar7));
  fVar1 = (*(float *)(fr0_ - 0x24));
  if (cVar4 == '\0') {
    fVar1 = *(float *)(unsigned)(ar6 + 8);
    (*(float *)(fr0_ - 0x20)) = (*(float *)(fr0_ - 0x24));
  }
  if (cVar3 != '\0' || fVar1 <= (*(float *)(fr0_ - 0x20))) {
    fVar1 = (*(float *)(fr0_ - 0x68));
    fVar2 = (*(float *)(fr0_ - 0x64));
    if (cVar4 == '\0') {
      fVar1 = *ar5;
      fVar2 = (*(float *)(fr0_ - 0x68));
    }
    if (cVar3 != '\0' || fVar2 <= fVar1) {
      fVar1 = (*(float *)(fr0_ - 0x44));
      if (cVar4 == '\0') {
        fVar1 = *ar5;
        (*(float *)(fr0_ - 0x40)) = (*(float *)(fr0_ - 0x44));
      }
      if (cVar3 != '\0' || fVar1 <= (*(float *)(fr0_ - 0x40))) {
        fVar1 = (*(float *)(fr0_ - 0x34));
        if (cVar4 == '\0') {
          fVar1 = ar5[1];
          (*(float *)(fr0_ - 0x30)) = (*(float *)(fr0_ - 0x34));
        }
        if (cVar3 != '\0' || (*(float *)(fr0_ - 0x30)) <= fVar1) {
          fVar1 = (*(float *)(fr0_ - 0x64));
          if (cVar4 == '\0') {
            fVar1 = ar5[1];
            (*(float *)(fr0_ - 0x60)) = (*(float *)(fr0_ - 0x64));
          }
          if (cVar3 != '\0' || fVar1 <= (*(float *)(fr0_ - 0x60))) {
            return 1;
          }
        }
        return 0;
      }
    }
  }
  return 0;
}

__asm__(".globl _FUN_8c0d75a0\n.set _FUN_8c0d75a0, _FUN_8c0d75a0_def\n");
//@unit 8c0d761c
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
undefined4 * FUN_8c0d761c_def(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0d761c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  ar4[2] = 0x3f800000;
  ar4[1] = 0x3f800000;
  *ar4 = 0x3f800000;
  ar4[3] = 0x3f800000;
  ar4[4] = 0x3e6b851f;
  return ar4;
}

__asm__(".globl _FUN_8c0d761c\n.set _FUN_8c0d761c, _FUN_8c0d761c_def\n");
//@unit 8c0d7668
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
undefined4 * FUN_8c0d7668_def(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0d7668";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 in_fr5 = 0;
  undefined4 in_fr4 = 0;
  undefined4 in_fr7 = 0;
  undefined4 in_fr6 = 0;
  undefined4 in_fr8 = 0;
  
  *ar4 = in_fr4;
  ar4[1] = in_fr5;
  ar4[2] = in_fr6;
  ar4[3] = in_fr7;
  ar4[4] = in_fr8;
  return ar4;
}

__asm__(".globl _FUN_8c0d7668\n.set _FUN_8c0d7668, _FUN_8c0d7668_def\n");
//@unit 8c0d7688
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
undefined4 * FUN_8c0d7688_def(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0d7688";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0d761c(ar4 + 3,ar5,ar6,ar7));
  *ar4 = 0;
  ar4[1] = 0;
  ar4[9] = 0;
  ar4[2] = 0;
  return ar4;
}

__asm__(".globl _FUN_8c0d7688\n.set _FUN_8c0d7688, _FUN_8c0d7688_def\n");
//@unit 8c0d76b8
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
int free_if_nonnull_wrap_0d76b8_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "free_if_nonnull_wrap_0d76b8";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 12; for (int i_ = 0; i_ < 12; i_++) z_[i_] = 0; }
  
  if ((ar4 != 0) && (0 < (short)ar5)) {
    ({ unsigned long ri0_ = (unsigned long)(CONCAT22((short)((uint)(*(undefined4 *)(fr0_ - 0xc)) >> 0x10),(short)ar5)); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 12)); free_if_nonnull(ar4,ar5,ar6,ar7); });
  }
  return ar4;
}

__asm__(".globl _free_if_nonnull_wrap_0d76b8\n.set _free_if_nonnull_wrap_0d76b8, _free_if_nonnull_wrap_0d76b8_def\n");
//@unit 8c0d76e8
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
undefined4 FUN_8c0d76e8_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0d76e8";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  *(undefined4 *)(unsigned)0x8c4377fc = 0;
  ((undefined1 *)(unsigned)1)[0x8c4377fc] = 0;
  ((undefined1 *)(unsigned)2)[0x8c4377fc] = 0;
  ((undefined1 *)(unsigned)3)[0x8c4377fc] = 0x7f;
  ((undefined1 *)(unsigned)4)[0x8c4377fc] = 0x7f;
  ((undefined1 *)(unsigned)5)[0x8c4377fc] = 0x7f;
  ((undefined1 *)(unsigned)6)[0x8c4377fc] = 0x7f;
  ((undefined1 *)(unsigned)7)[0x8c4377fc] = 0;
  ((undefined1 *)(unsigned)8)[0x8c4377fc] = (short)0x80;
  ((undefined1 *)(unsigned)9)[0x8c4377fc] = 0;
  ((undefined1 *)(unsigned)10)[0x8c4377fc] = (short)0x80;
  ((undefined1 *)(unsigned)0xb)[0x8c4377fc] = 0x7f;
  ((undefined1 *)(unsigned)0xc)[0x8c4377fc] = (short)0xff;
  ((undefined1 *)(unsigned)0xd)[0x8c4377fc] = 0x7f;
  ((undefined1 *)(unsigned)0xe)[0x8c4377fc] = (short)0xff;
  ((undefined1 *)(unsigned)0xf)[0x8c4377fc] = 0;
  ((undefined1 *)(unsigned)0x10)[0x8c4377fc] = 0;
  ((undefined1 *)(unsigned)0x11)[0x8c4377fc] = (short)0x80;
  ((undefined1 *)(unsigned)0x12)[0x8c4377fc] = 0;
  ((undefined1 *)(unsigned)0x13)[0x8c4377fc] = (short)0xff;
  ((undefined1 *)(unsigned)0x14)[0x8c4377fc] = 0x7f;
  ((undefined1 *)(unsigned)0x15)[0x8c4377fc] = (short)0xff;
  ((undefined1 *)(unsigned)0x16)[0x8c4377fc] = 0x7f;
  ((undefined1 *)(unsigned)0x17)[0x8c4377fc] = (short)0x80;
  ((undefined1 *)(unsigned)0x18)[0x8c4377fc] = (short)0x80;
  ((undefined1 *)(unsigned)0x19)[0x8c4377fc] = (short)0x80;
  ((undefined1 *)(unsigned)0x1a)[0x8c4377fc] = (short)0x80;
  ((undefined1 *)(unsigned)0x1b)[0x8c4377fc] = (short)0xff;
  ((undefined1 *)(unsigned)0x1c)[0x8c4377fc] = (short)0xff;
  ((undefined1 *)(unsigned)0x1d)[0x8c4377fc] = (short)0xff;
  ((undefined1 *)(unsigned)0x1e)[0x8c4377fc] = (short)0xff;
  ((undefined1 *)(unsigned)0x1f)[0x8c4377fc] = (short)0x80;
  return 0x3e;
}

__asm__(".globl _FUN_8c0d76e8\n.set _FUN_8c0d76e8, _FUN_8c0d76e8_def\n");
//@unit 8c0d77d8
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
int * FUN_8c0d77d8_def(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0d77d8";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0146f8(ar4,ar5,ar6,ar7));
  *ar4 = (int)(&(*(undefined1 *)(unsigned)0x8c12bea8));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*ar4 + 0x14))))(ar4,ar5,ar6,ar7));
  return ar4;
}

__asm__(".globl _FUN_8c0d77d8\n.set _FUN_8c0d77d8, _FUN_8c0d77d8_def\n");
//@unit 8c0d780c
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
undefined4 * FUN_8c0d780c_def(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0d780c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 16; for (int i_ = 0; i_ < 16; i_++) z_[i_] = 0; }
  undefined4 ar5_00;
  undefined4 ain0;
  
  ain0 = CONCAT22((short)((uint)(*(undefined4 *)(fr0_ - 0xc)) >> 0x10),(undefined2)ar5);
  if (ar4 != (undefined4 *)(unsigned)0x0) {
    *ar4 = ((undefined1 *)(unsigned)0x8c129808);
    (vsp = ((unsigned long)(fr0_ - 16)), Vec3_dtor(ar4 + 5,0xffffffff,ar6,ar7));
    ar5_00 = 0xffffffff;
    (vsp = ((unsigned long)(fr0_ - 16)), Vec3_dtor(ar4 + 1,0xffffffff,ar6,ar7));
    if (0 < (short)ain0) {
      ({ unsigned long ri0_ = (unsigned long)(ain0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 16)); free_if_nonnull(ar4,ar5_00,ar6,ar7); });
    }
  }
  return ar4;
}

__asm__(".globl _FUN_8c0d780c\n.set _FUN_8c0d780c, _FUN_8c0d780c_def\n");
//@unit 8c0d7860
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
double * Class_12bea8_m1_0d7860_def(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "Class_12bea8_m1_0d7860";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  double *pdVar1;
  int iVar2;
  int *ar4_00;
  int *ar5_00;
  undefined4 in_fr1 = 0;
  double dVar3;
  double dVar4;
  undefined4 in_fr4 = 0;
  float fVar5;
  undefined8 in_dr14 = 0;
  undefined8 in_xd14 = 0;
  bool bVar6;
  char cVar7;
  char cVar8;
  
  cVar8 = '\0';
  cVar7 = '\0';
  dVar4 = CONCAT44D((int)((ulonglong)in_dr14 >> 0x20),in_fr4);
  pdVar1 = (double *)(unsigned)(uint)ar4[0xc];
  if (pdVar1 == (double *)(unsigned)0x0) {
    ar5_00 = ar4 + 5;
    ar4_00 = ar4 + 1;
    (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c023aa0(ar4_00,ar5_00,ar6,ar7));
    pdVar1 = (double *)(unsigned)(ar4 + 2);
    if (cVar8 == '\0') {
      dVar3 = CONCAT44D(*(int *)(unsigned)pdVar1,in_fr1);
    }
    else {
      dVar3 = *pdVar1;
    }
    if (cVar7 == '\0') {
      bVar6 = F32HI(dVar3) < SUB84(dVar4,0);
    }
    else {
      bVar6 = dVar3 < dVar4;
    }
    if (bVar6) {
      if (cVar8 == '\0') {
        dVar3 = CONCAT44D(0x3f000000,SUB84(dVar3,0));
      }
      else {
        dVar3 = -7.532505566649672e-251;
      }
      if (cVar7 == '\0') {
        fVar5 = F32LO(dVar4) + F32HI(dVar3);
      }
      else {
        fVar5 = SUB84(dVar4 + dVar3,0);
      }
      if (cVar8 == '\0') {
        ar4[2] = (int)fVar5;
      }
      else {
        *(undefined8 *)(unsigned)(ar4 + 2) = in_xd14;
      }
      iVar2 = (vsp = ((unsigned long)(fr0_ - 0)), rand(ar4_00,ar5_00,ar6,ar7));
      if (cVar8 == '\0') {
        dVar4 = CONCAT44D(0x47000000,(float)iVar2);
      }
      else {
        dVar4 = 409.60016536712646;
      }
      if (cVar7 == '\0') {
        fVar5 = F32LO(dVar4) / F32HI(dVar4);
      }
      else {
        fVar5 = SUB84(dVar4 / dVar4,0);
      }
      if (cVar8 == '\0') {
        dVar4 = CONCAT44D(0x4079999a,fVar5);
      }
      else {
        dVar4 = 2.99393119985475e-78;
      }
      if (cVar7 == '\0') {
        iVar2 = (int)(F32LO(dVar4) * F32HI(dVar4));
      }
      else {
        iVar2 = (int)(dVar4 * dVar4);
      }
      ar4[0xd] = iVar2;
      pdVar1 = (double *)(unsigned)0x1;
      ar4[0xc] = 1;
    }
  }
  else if (pdVar1 == (double *)(unsigned)0x1) {
    pdVar1 = (double *)(unsigned)0x2;
    ar4[0xc] = 2;
  }
  else if (pdVar1 == (double *)(unsigned)0x2) {
    pdVar1 = (double *)(unsigned)(vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*ar4 + 0x14))))(ar4,ar5,ar6,ar7));
  }
  return pdVar1;
}

__asm__(".globl _Class_12bea8_m1_0d7860\n.set _Class_12bea8_m1_0d7860, _Class_12bea8_m1_0d7860_def\n");
//@unit 8c0d7900
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
int FUN_8c0d7900_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0d7900";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 144; for (int i_ = 0; i_ < 144; i_++) z_[i_] = 0; }
  int iVar1;
  float *ar5_00;
  undefined4 ar5_01;
  undefined4 *ar6_00;
  undefined4 ar6_01;
  undefined4 ar7_00;
  
  (*(float *)(fr0_ - 0x3c)) = *(float *)(unsigned)(ar4 + 4) - 12.0;
  (*(undefined4 *)(fr0_ - 0x38)) = *(undefined4 *)(unsigned)(ar4 + 8);
  (*(float *)(fr0_ - 0x34)) = *(float *)(unsigned)(ar4 + 0xc) - 12.0;
  (*(float *)(fr0_ - 0x30)) = *(float *)(unsigned)(ar4 + 4) - 12.0;
  (*(undefined4 *)(fr0_ - 0x2c)) = *(undefined4 *)(unsigned)(ar4 + 8);
  (*(float *)(fr0_ - 0x28)) = *(float *)(unsigned)(ar4 + 0xc) + 12.0;
  (*(float *)(fr0_ - 0x24)) = *(float *)(unsigned)(ar4 + 4) + 12.0;
  (*(undefined4 *)(fr0_ - 0x20)) = *(undefined4 *)(unsigned)(ar4 + 8);
  (*(float *)(fr0_ - 0x1c)) = *(float *)(unsigned)(ar4 + 0xc) + 12.0;
  (*(float *)(fr0_ - 0x18)) = *(float *)(unsigned)(ar4 + 4) + 12.0;
  (*(undefined4 *)(fr0_ - 0x14)) = *(undefined4 *)(unsigned)(ar4 + 8);
  (*(float *)(fr0_ - 0x10)) = *(float *)(unsigned)(ar4 + 0xc) - 12.0;
  (*(undefined4 *)(fr0_ - 0x4c)) = (*(undefined4 *)(unsigned)(unsigned)0x8c13f59c);
  (*(undefined4 *)(fr0_ - 0x48)) = (*(undefined1 *)(unsigned)0x8c13f5a0);
  (*(undefined4 *)(fr0_ - 0x44)) = (*(undefined1 *)(unsigned)0x8c13f5a4);
  (*(undefined4 *)(fr0_ - 0x40)) = (*(undefined1 *)(unsigned)0x8c13f5a8);
  ar7_00 = 4;
  ar6_00 = &(*(undefined4 *)(fr0_ - 0x4c));
  ar5_00 = &(*(float *)(fr0_ - 0x3c));
  (vsp = ((unsigned long)(fr0_ - 144)), FUN_8c01642c(((undefined1 *)(fr0_ - 0x90)),ar5_00,ar6_00,4));
  iVar1 = *(int *)(unsigned)(ar4 + 0x30);
  if (iVar1 == 0) {
    iVar1 = (vsp = ((unsigned long)(fr0_ - 144)), Class_129808_m2_0148d8(ar4,ar5_00,ar6_00,ar7_00));
  }
  else if (iVar1 == 1) {
    (vsp = ((unsigned long)(fr0_ - 144)), FUN_8c01538c(ar5,ar5_00,ar6_00,ar7_00));
    (vsp = ((unsigned long)(fr0_ - 144)), FUN_8c014a94(ar5,ar6,ar6_00,ar7_00));
    ar6_01 = 4;
    (vsp = ((unsigned long)(fr0_ - 144)), FUN_8c0164c8(((undefined1 *)(fr0_ - 0x90)),((undefined1 *)(unsigned)0x8c4377fc) + *(int *)(unsigned)(ar4 + 0x34) * 0x10,4,ar7_00));
    ar5_01 = 0x80000060;
    ({ unsigned long ri0_ = (unsigned long)(ar6); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 144)); FUN_8c0d1450(((undefined1 *)(fr0_ - 0x90)),0x80000060,ar6_01,ar7_00); });
    iVar1 = (vsp = ((unsigned long)(fr0_ - 144)), FUN_8c016524(((undefined1 *)(fr0_ - 0x90)),ar5_01,ar6_01,ar7_00));
  }
  return iVar1;
}

__asm__(".globl _FUN_8c0d7900\n.set _FUN_8c0d7900, _FUN_8c0d7900_def\n");
//@unit 8c0d7ac0
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
undefined4 Class_12bea8_m3_0d7ac0_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "Class_12bea8_m3_0d7ac0";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  *(undefined4 *)(unsigned)(ar4 + 0x34) = 0;
  *(undefined4 *)(unsigned)(ar4 + 0x30) = 0;
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), Class_129808_m3_014978(ar4,ar5,ar6,ar7));
  return uVar1;
}

__asm__(".globl _Class_12bea8_m3_0d7ac0\n.set _Class_12bea8_m3_0d7ac0, _Class_12bea8_m3_0d7ac0_def\n");
//@unit 8c0d7af8
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
int FUN_8c0d7af8_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0d7af8";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 ar5_00;
  undefined4 ar6_00;
  
  ar6_00 = ar6;
  ar5_00 = ar5;
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0d63f8(ar4 + 0x1c,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0d63f8(ar4 + 0x30,ar5,ar6_00,ar7));
  ({ unsigned long ri0_ = (unsigned long)(ar5_00); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); FUN_8c0d7e78(ar4,ar5_00,ar6,ar7); });
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0d7dcc(ar4,ar5_00,ar6,ar7));
  return ar4;
}

__asm__(".globl _FUN_8c0d7af8\n.set _FUN_8c0d7af8, _FUN_8c0d7af8_def\n");
//@unit 8c0d7b44
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
undefined4 FUN_8c0d7b44_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0d7b44";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0d7dcc(ar4,ar5,ar6,ar7));
  return uVar1;
}

__asm__(".globl _FUN_8c0d7b44\n.set _FUN_8c0d7b44, _FUN_8c0d7b44_def\n");
//@unit 8c0d7b60
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
uint FUN_8c0d7b60_def(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0d7b60";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 96; for (int i_ = 0; i_ < 96; i_++) z_[i_] = 0; }
  float fVar1;
  uint uVar2;
  undefined4 uVar3;
  int *a4;
  int iVar4;
  uint uVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  double in_dr0 = 0;
  float fVar8;
  undefined8 in_dr4 = 0;
  undefined8 in_dr6 = 0;
  undefined8 in_dr8 = 0;
  ulonglong uVar9;
  undefined8 in_xd14 = 0;
  float in_PR = 0;
  int iVar10;
  int ar5_00;
  char cVar11;
  char cVar12;
  
  cVar12 = '\0';
  cVar11 = '\0';
  puVar7 = ((undefined4 *)(fr0_ - 0x5c)) + 1;
  ((undefined4 *)(fr0_ - 0x5c))[1] = (undefined4)((ulonglong)in_dr4 >> 0x20);
  ((undefined4 *)(fr0_ - 0x5c))[2] = (undefined4)in_dr4;
  ((undefined4 *)(fr0_ - 0x5c))[3] = (undefined4)((ulonglong)in_dr6 >> 0x20);
  (*(undefined4 *)(fr0_ - 0x4c)) = (undefined4)in_dr6;
  (*(undefined4 *)(fr0_ - 0x48)) = (undefined4)((ulonglong)in_dr8 >> 0x20);
  uVar9 = (ulonglong)(*(uint *)(fr0_ + 0x00000000));
  iVar4 = 0;
  uVar2 = 0;
  if (*ar4 != 0) {
    (*(float *)(fr0_ - 0x28)) = in_PR;
    (vsp = ((unsigned long)(fr0_ - 96)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((ar4[7] + 8))))(ar4 + 7,ar5,ar6,ar7));
    (*(float *)(fr0_ - 0x2c)) = SUB84(in_dr0,0);
    fVar8 = F32HI(in_dr0);
    fVar1 = fVar8;
    if (cVar12 == '\0') {
      (*(float *)(fr0_ - 0x2c)) = fVar8;
      fVar1 = (*(float *)(fr0_ - 0x28));
    }
    (*(float *)(fr0_ - 0x28)) = fVar1;
    if (cVar11 == '\0') {
      iVar10 = (int)fVar8;
    }
    else {
      iVar10 = (int)in_dr0;
    }
    (vsp = ((unsigned long)(fr0_ - 96)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((ar4[0xc] + 8))))(ar4 + 0xc,ar5,ar6,ar7));
    (*(float *)(fr0_ - 0x30)) = SUB84(in_dr0,0);
    fVar8 = F32HI(in_dr0);
    fVar1 = fVar8;
    if (cVar12 == '\0') {
      (*(float *)(fr0_ - 0x30)) = fVar8;
      fVar1 = (*(float *)(fr0_ - 0x2c));
    }
    (*(float *)(fr0_ - 0x2c)) = fVar1;
    if (cVar11 == '\0') {
      ar5_00 = (int)fVar8;
    }
    else {
      ar5_00 = (int)in_dr0;
    }
    uVar2 = (vsp = ((unsigned long)(fr0_ - 96)), libgcc_divide_helper_0103d0(ar4[1],ar5_00,ar6,ar7));
    if (uVar2 == 0) {
      uVar5 = 0;
      ((uint *)(fr0_ - 0x40))[2] = 0;
      while ((uVar2 = ar4[4], uVar5 < uVar2 && (iVar4 <= iVar10))) {
        puVar7[7] = uVar5;
        uVar3 = (vsp = ((unsigned long)(fr0_ - 96)), get_field_2c_0d7ca8((puVar7[7] * 8 - puVar7[7]) * 8 + ar4[3],ar5_00,ar6,ar7));
        puVar7[9] = uVar3;
        if (puVar7[9] == 0) {
          puVar7[6] = uVar5;
          if (cVar12 == '\0') {
            puVar6 = puVar7 + 0xffffffff;
            puVar7[0xffffffff] = (int)uVar9;
          }
          else {
            puVar6 = puVar7 + 0xfffffffe;
            *(undefined8 *)(unsigned)(puVar7 + 0xfffffffe) = in_xd14;
          }
          a4 = (int *)(unsigned)((*(int *)(unsigned)((int)puVar6 + 0x1c) * 8 - *(int *)(unsigned)((int)puVar6 + 0x1c)) * 8 +
                      ar4[3]);
          (vsp = ((unsigned long)(fr0_ - 96)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*a4 + 8))))(a4,ar5_00,ar6,ar7));
          puVar7 = (undefined4 *)(unsigned)((int)puVar6 + 4);
          *(uint *)(unsigned)((int)puVar6 + 0x18) = uVar5;
          (vsp = ((unsigned long)(fr0_ - 96)), FUN_8c0d7ca0((*(int *)(unsigned)((int)puVar6 + 0x18) * 8 - *(int *)(unsigned)((int)puVar6 + 0x18)) * 8 +
                       ar4[3],ar5_00,ar6,ar7));
          iVar4 = iVar4 + 1;
        }
        uVar5 = uVar5 + 1;
      }
    }
  }
  return uVar2;
}

__asm__(".globl _FUN_8c0d7b60\n.set _FUN_8c0d7b60, _FUN_8c0d7b60_def\n");
//@unit 8c0d7ca0
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
undefined4 FUN_8c0d7ca0_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0d7ca0";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  *(undefined4 *)(unsigned)(ar4 + 0x2c) = 1;
  return 1;
}

__asm__(".globl _FUN_8c0d7ca0\n.set _FUN_8c0d7ca0, _FUN_8c0d7ca0_def\n");
//@unit 8c0d7ca8
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
undefined4 get_field_2c_0d7ca8_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "get_field_2c_0d7ca8";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return *(undefined4 *)(unsigned)(ar4 + 0x2c);
}

__asm__(".globl _get_field_2c_0d7ca8\n.set _get_field_2c_0d7ca8, _get_field_2c_0d7ca8_def\n");
//@unit 8c0d7cb0
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
int * FUN_8c0d7cb0_def(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0d7cb0";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 48; for (int i_ = 0; i_ < 48; i_++) z_[i_] = 0; }
  int iVar1;
  int *piVar2;
  uint uVar3;
  float fVar4;
  undefined8 in_dr0 = 0;
  undefined8 uVar5;
  undefined8 in_xd0 = 0;
  char cVar6;
  char cVar7;
  
  cVar7 = '\0';
  cVar6 = '\0';
  piVar2 = (int *)(unsigned)0x0;
  if (*ar4 != 0) {
    for (uVar3 = 0; fVar4 = (float)in_dr0, uVar3 < (uint)ar4[4]; uVar3 = uVar3 + 1) {
      iVar1 = (vsp = ((unsigned long)(fr0_ - 48)), get_field_2c_0d7ca8(uVar3 * 0x38 + ar4[3],ar5,ar6,ar7));
      if (iVar1 == 1) {
        piVar2 = (int *)(unsigned)(uVar3 * 0x38 + ar4[3]);
        (vsp = ((unsigned long)(fr0_ - 48)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*piVar2 + 0xc))))(piVar2,ar5,ar6,ar7));
      }
    }
    ar4[1] = ar4[1] + 1;
    piVar2 = (int *)(unsigned)*ar4;
    if (piVar2 == (int *)(unsigned)0x1) {
      if (cVar7 == '\0') {
        fVar4 = (float)ar4[5];
      }
      else {
        in_xd0 = *(undefined8 *)(unsigned)(ar4 + 5);
      }
      if (cVar6 == '\0') {
        fVar4 = fVar4 + 1.0;
      }
      else {
        fVar4 = SUB84(CONCAT44D(0x3f800000,fVar4) + CONCAT44D(0x3f800000,fVar4),0);
      }
      (*(undefined8 *)(fr0_ - 0x28)) = in_xd0;
      if (cVar7 == '\0') {
        (*(undefined8 *)(fr0_ - 0x28)) = CONCAT44(ar4,fVar4);
      }
      if (cVar7 == '\0') {
        *(undefined4 *)(unsigned)((*(uint*)((uchar*)&(*(undefined8 *)(fr0_ - 0x28))+4)) + 0x14) = (undefined4)(*(undefined8 *)(fr0_ - 0x28));
        uVar5 = CONCAT44(ar4[6],(undefined4)(*(undefined8 *)(fr0_ - 0x28)));
      }
      else {
        *(undefined8 *)(unsigned)((*(uint*)((uchar*)&(*(undefined8 *)(fr0_ - 0x28))+4)) + 0x14) = (*(undefined8 *)(fr0_ - 0x28));
        uVar5 = *(undefined8 *)(unsigned)(ar4 + 6);
      }
      piVar2 = ar4 + 6;
      if (cVar6 == '\0' && F32HI(uVar5) < (float)uVar5) {
        (*(undefined4 *)(unsigned)(unsigned)0x8c437c8c) = ar4[1];
        if (cVar7 == '\0') {
          ar4[5] = ar4[6];
        }
        else {
          *(undefined8 *)(unsigned)(ar4 + 5) = *(undefined8 *)(unsigned)(ar4 + 6);
        }
        piVar2 = (int *)(unsigned)0x2;
        *ar4 = 2;
      }
    }
    else if (piVar2 == (int *)(unsigned)0x2) {
      piVar2 = (int *)(unsigned)(uint)ar4[2];
      if (piVar2 < (int *)(unsigned)(uint)ar4[1]) {
        piVar2 = (int *)(unsigned)0x3;
        *ar4 = 3;
      }
    }
    else if (piVar2 == (int *)(unsigned)0x3) {
      if (cVar7 == '\0') {
        fVar4 = (float)ar4[5];
      }
      else {
        in_xd0 = *(undefined8 *)(unsigned)(ar4 + 5);
      }
      if (cVar6 == '\0') {
        fVar4 = fVar4 - 1.0;
      }
      else {
        fVar4 = SUB84(CONCAT44D(0x3f800000,fVar4) - CONCAT44D(0x3f800000,fVar4),0);
      }
      (*(undefined8 *)(fr0_ - 0x30)) = in_xd0;
      if (cVar7 == '\0') {
        (*(undefined8 *)(fr0_ - 0x30)) = CONCAT44(ar4,fVar4);
      }
      if (cVar7 == '\0') {
        *(float *)(unsigned)((*(uint*)((uchar*)&(*(undefined8 *)(fr0_ - 0x30))+4)) + 0x14) = (float)(*(undefined8 *)(fr0_ - 0x30));
        uVar5 = CONCAT44((float)(*(undefined8 *)(fr0_ - 0x30)),fVar4);
      }
      else {
        *(undefined8 *)(unsigned)((*(uint*)((uchar*)&(*(undefined8 *)(fr0_ - 0x30))+4)) + 0x14) = (*(undefined8 *)(fr0_ - 0x30));
        uVar5 = (*(undefined8 *)(fr0_ - 0x30));
      }
      fVar4 = (float)uVar5;
      piVar2 = (int *)(unsigned)0x0;
      if (cVar7 == '\0') {
        fVar4 = (float)(*(undefined8 *)(fr0_ - 0x30));
      }
      if (cVar6 == '\0' && fVar4 < 0.0) {
        if (cVar7 == '\0') {
          ar4[5] = 0;
        }
        else {
          *(ulonglong *)(unsigned)(ar4 + 5) = (ulonglong)(uint)fVar4;
        }
        piVar2 = (int *)(unsigned)0x0;
        *ar4 = 0;
      }
    }
  }
  return piVar2;
}

__asm__(".globl _FUN_8c0d7cb0\n.set _FUN_8c0d7cb0, _FUN_8c0d7cb0_def\n");
//@unit 8c0d7dcc
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
undefined4 FUN_8c0d7dcc_def(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0d7dcc";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  uint uVar1;
  uint in_fr1 = 0;
  uint extraout_fr1 = 0;
  char cVar2;
  
  cVar2 = '\0';
  for (uVar1 = 0; uVar1 < (uint)ar4[4]; uVar1 = uVar1 + 1) {
    (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0149d4(uVar1 * 0x38 + ar4[3],ar5,ar6,ar7));
    in_fr1 = extraout_fr1;
  }
  ar4[2] = 4100000000;
  *ar4 = 0;
  ar4[1] = 0;
  if (cVar2 == '\0') {
    ar4[5] = 0;
  }
  else {
    *(ulonglong *)(unsigned)(ar4 + 5) = (ulonglong)in_fr1;
  }
  return 0;
}

__asm__(".globl _FUN_8c0d7dcc\n.set _FUN_8c0d7dcc, _FUN_8c0d7dcc_def\n");
//@unit 8c0d7e24
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
uint FUN_8c0d7e24_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0d7e24";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  uint uVar1;
  
  for (uVar1 = 0; uVar1 < *(uint *)(unsigned)(ar4 + 0x10); uVar1 = uVar1 + 1) {
    (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0149dc(uVar1 * 0x38 + *(int *)(unsigned)(ar4 + 0xc),ar5,ar6,ar7));
  }
  return *(uint *)(unsigned)(ar4 + 0x10);
}

__asm__(".globl _FUN_8c0d7e24\n.set _FUN_8c0d7e24, _FUN_8c0d7e24_def\n");
//@unit 8c0d7e78
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
undefined4 FUN_8c0d7e78_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0d7e78";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 in_r0 = (undefined4)(unsigned long)vin0;
  
  *(undefined4 *)(unsigned)(ar4 + 0xc) = ar5;
  *(undefined4 *)(unsigned)(ar4 + 0x10) = ar6;
  return in_r0 = 0;
}

__asm__(".globl _FUN_8c0d7e78\n.set _FUN_8c0d7e78, _FUN_8c0d7e78_def\n");
//@unit 8c0d7e80
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
undefined4 FUN_8c0d7e80_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0d7e80";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;
  int s0 = *(int *)(vsp + 0);
  int s4 = *(int *)(vsp + 4);

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  undefined4 in_fr1 = 0;
  double dVar2;
  char cVar3;
  char cVar4;
  
  cVar4 = '\0';
  cVar3 = '\0';
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c102974(ar4 + 0x1c,ar5,ar6,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c102974(ar4 + 0x30,ar5,ar6,ar7));
  if (cVar3 == '\0') {
    dVar2 = CONCAT44D((float)s4,in_fr1);
  }
  else {
    dVar2 = (double)s4;
  }
  if (cVar4 == '\0') {
    *(int *)(unsigned)(ar4 + 0x18) = (int)(D2U(dVar2) >> 0x20);
  }
  else {
    *(double *)(unsigned)(ar4 + 0x18) = dVar2;
  }
  return uVar1;
}

__asm__(".globl _FUN_8c0d7e80\n.set _FUN_8c0d7e80, _FUN_8c0d7e80_def\n");
//@unit 8c0d7f04
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
undefined4 FUN_8c0d7f04_def(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0d7f04";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  *ar4 = 1;
  ar4[2] = ar5;
  ar4[1] = 0;
  ar4[5] = 0;
  return 0;
}

__asm__(".globl _FUN_8c0d7f04\n.set _FUN_8c0d7f04, _FUN_8c0d7f04_def\n");
//@unit 8c0d7f18
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
undefined4 * s_66_JUNGLE_RAIN_5_0d7f1a_def(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "s_66_JUNGLE_RAIN_5_0d7f1a";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  code *ar5_00;
  code *ar6_00;
  undefined4 uVar1;
  uint in_fr1 = 0;
  ulonglong uVar2;
  char cVar3;
  
  cVar3 = '\0';
  (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_zero(ar4 + 2,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_zero(ar4 + 6,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), Vec3_set_zero(ar4 + 10,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c102800(ar4 + 0xd,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0d7688(ar4 + 0x14,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0d7af8(ar4 + 0x1e,ar4 + 0x2f,500,ar7));
  ({ unsigned long t0_ = (unsigned long)(500); *(unsigned *)((((unsigned long)(fr0_ - 0)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 0)) - 8); FUN_8c010120(ar4 + 0x2f,((void *)0x8c0d77d8),((void *)0x8c0d8094),0x38); });
  uVar1 = 0x18;
  ar6_00 = ((void *)0x8c0cffc8);
  ar5_00 = ((void *)0x8c02145c);
  ({ unsigned long t0_ = (unsigned long)(2); *(unsigned *)((((unsigned long)(fr0_ - 0)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 0)) - 8); FUN_8c010120(ar4 + 0x1b88,((void *)0x8c02145c),((void *)0x8c0cffc8),0x18); });
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0153b8(ar4 + 0x1b94,ar5_00,ar6_00,uVar1));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0d92b0(ar4,ar5_00,ar6_00,uVar1));
  if (cVar3 == '\0') {
    ar4[6] = 0x3f800000;
  }
  else {
    *(ulonglong *)(unsigned)(ar4 + 6) = CONCAT44(0x3f800000,in_fr1);
  }
  if (cVar3 == '\0') {
    ar4[7] = 0;
  }
  else {
    *(ulonglong *)(unsigned)(ar4 + 7) = (ulonglong)in_fr1;
  }
  uVar2 = (ulonglong)in_fr1;
  if (cVar3 == '\0') {
    ar4[8] = 0;
  }
  else {
    *(ulonglong *)(unsigned)(ar4 + 8) = uVar2;
  }
  (vsp = ((unsigned long)(fr0_ - 0)), Vec3_assign(ar4 + 2,ar4 + 6,ar6_00,uVar1));
  if (cVar3 == '\0') {
    uVar1 = (undefined4)uVar2;
    ar4[0xb] = 0x41700000;
  }
  else {
    uVar1 = 0x41700000;
    *(undefined8 *)(unsigned)(ar4 + 0xb) = 0x3e4ccccd41700000;
  }
  if (cVar3 == '\0') {
    ar4[0xe] = 0x3f800000;
  }
  else {
    *(ulonglong *)(unsigned)(ar4 + 0xe) = CONCAT44(0x3f800000,uVar1);
  }
  if (cVar3 == '\0') {
    ar4[0xf] = 0x3f800000;
  }
  else {
    *(ulonglong *)(unsigned)(ar4 + 0xf) = CONCAT44(0x3f800000,uVar1);
  }
  if (cVar3 == '\0') {
    ar4[0x10] = 0x3f800000;
  }
  else {
    *(ulonglong *)(unsigned)(ar4 + 0x10) = CONCAT44(0x3f800000,uVar1);
  }
  if (cVar3 == '\0') {
    ar4[0x11] = 0x3f800000;
    ar4[0x12] = 0x3e4ccccd;
  }
  else {
    *(ulonglong *)(unsigned)(ar4 + 0x11) = CONCAT44(0x3f800000,uVar1);
    *(undefined8 *)(unsigned)(ar4 + 0x12) = 0x8c13f3083e4ccccd;
  }
  *ar4 = 0;
  ar4[0x1b88] = (*(undefined4 *)(unsigned)(unsigned)0x8c13f308);
  ar4[0x1b8e] = (*(undefined4 *)(unsigned)(unsigned)0x8c13f30c);
  ar4[0x1b91] = 0;
  if (cVar3 == '\0') {
    ar4[0x1b87] = 0x41000000;
  }
  else {
    *(undefined8 *)(unsigned)(ar4 + 0x1b87) = 0x4f222fe641000000;
  }
  return ar4;
}

__asm__(".globl _s_66_JUNGLE_RAIN_5_0d7f1a\n.set _s_66_JUNGLE_RAIN_5_0d7f1a, _s_66_JUNGLE_RAIN_5_0d7f1a_def\n");
//@unit 8c0d8094
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
undefined4 * FUN_8c0d8094_def(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0d8094";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 12; for (int i_ = 0; i_ < 12; i_++) z_[i_] = 0; }
  undefined4 ar5_00;
  undefined4 ain0;
  
  ain0 = CONCAT22((short)((uint)(*(undefined4 *)(fr0_ - 0xc)) >> 0x10),(undefined2)ar5);
  if (ar4 != (undefined4 *)(unsigned)0x0) {
    *ar4 = ((undefined1 *)(unsigned)0x8c12bea8);
    ar5_00 = 0;
    (vsp = ((unsigned long)(fr0_ - 12)), FUN_8c0d780c(ar4,0,ar6,ar7));
    if (0 < (short)ain0) {
      ({ unsigned long ri0_ = (unsigned long)(ain0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 12)); free_if_nonnull(ar4,ar5_00,ar6,ar7); });
    }
  }
  return ar4;
}

__asm__(".globl _FUN_8c0d8094\n.set _FUN_8c0d8094, _FUN_8c0d8094_def\n");
//@unit 8c0d80dc
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
int FUN_8c0d80dc_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0d80dc";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 16; for (int i_ = 0; i_ < 16; i_++) z_[i_] = 0; }
  undefined4 ar5_00;
  undefined4 ain0;
  
  ain0 = CONCAT22((short)((uint)(*(undefined4 *)(fr0_ - 0xc)) >> 0x10),(undefined2)ar5);
  if (ar4 != 0) {
    (vsp = ((unsigned long)(fr0_ - 16)), free_if_nonnull_wrap_0d63c0(ar4 + 0x30,0xffffffff,ar6,ar7));
    ar5_00 = 0xffffffff;
    (vsp = ((unsigned long)(fr0_ - 16)), free_if_nonnull_wrap_0d63c0(ar4 + 0x1c,0xffffffff,ar6,ar7));
    if (0 < (short)ain0) {
      ({ unsigned long ri0_ = (unsigned long)(ain0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 16)); free_if_nonnull(ar4,ar5_00,ar6,ar7); });
    }
  }
  return ar4;
}

__asm__(".globl _FUN_8c0d80dc\n.set _FUN_8c0d80dc, _FUN_8c0d80dc_def\n");
//@unit 8c0d8128
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
int FUN_8c0d8128_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0d8128";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 16; for (int i_ = 0; i_ < 16; i_++) z_[i_] = 0; }
  undefined4 ar5_00;
  undefined4 ain0;
  
  ain0 = CONCAT22((short)((uint)(*(undefined4 *)(fr0_ - 0xc)) >> 0x10),(undefined2)ar5);
  if (ar4 != 0) {
    ar5_00 = 0xffffffff;
    (vsp = ((unsigned long)(fr0_ - 16)), free_if_nonnull_wrap_0d76b8(ar4 + 0xc,0xffffffff,ar6,ar7));
    if (0 < (short)ain0) {
      ({ unsigned long ri0_ = (unsigned long)(ain0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 16)); free_if_nonnull(ar4,ar5_00,ar6,ar7); });
    }
  }
  return ar4;
}

__asm__(".globl _FUN_8c0d8128\n.set _FUN_8c0d8128, _FUN_8c0d8128_def\n");
//@unit 8c0d8168
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
int free_if_nonnull_wrap_0d8168_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "free_if_nonnull_wrap_0d8168";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 12; for (int i_ = 0; i_ < 12; i_++) z_[i_] = 0; }
  
  if ((ar4 != 0) && (0 < (short)ar5)) {
    ({ unsigned long ri0_ = (unsigned long)(CONCAT22((short)((uint)(*(undefined4 *)(fr0_ - 0xc)) >> 0x10),(short)ar5)); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 12)); free_if_nonnull(ar4,ar5,ar6,ar7); });
  }
  return ar4;
}

__asm__(".globl _free_if_nonnull_wrap_0d8168\n.set _free_if_nonnull_wrap_0d8168, _free_if_nonnull_wrap_0d8168_def\n");
//@unit 8c0d8198
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
undefined4 s_GRAPHICS_ENV_0d819c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "s_GRAPHICS_ENV_0d819c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 ar4_00;
  undefined4 uVar1;
  undefined *ar5_00;
  undefined *ar6_00;
  undefined4 ar7_00;
  int iVar2;
  
  uVar1 = 0;
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0d82f0(ar4,0,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), thunk_FUN_8c20a1d0(0x8c43786c,uVar1,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c257120(0xfffafafa,uVar1,ar6,ar7));
  for (iVar2 = 0; iVar2 < 1; iVar2 = iVar2 + 1) {
    *(undefined4 *)(unsigned)(0x6e64 + iVar2 * 0xc + ar4) = 0;
  }
  ar4_00 = (vsp = ((unsigned long)(fr0_ - 0)), get_field_4_0253e4(ar4 + 0x6e50,uVar1,ar6,ar7));
  ar7_00 = 1;
  iVar2 = ar4 + 0x6e60;
  uVar1 = 0x8c4312a8;
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c239170(ar4_00,iVar2,0x8c4312a8,1));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), get_field_4_0253e4(ar4 + 0x6e50,iVar2,uVar1,ar7_00));
  ar6_00 = (&(*(undefined1 *)(unsigned)0x8c13f7c0)) + 0x10b;
  ar5_00 = (&(*(undefined1 *)(unsigned)0x8c13f7c0)) + 0x470;
  iVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c02100c(ar5,ar5_00,ar6_00,uVar1));
  if (iVar2 == 0) {
    uVar1 = 2;
    ar6_00 = (undefined *)(unsigned)0x0;
    ar5_00 = (&(*(undefined1 *)(unsigned)0x8c13f7c0)) + 0x495;
    (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c102828))))
              ((&(*(undefined1 *)(unsigned)0x8c13f7c0)) + 0x480,ar5_00,0,2));
  }
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0d7b44(ar4 + 0x78,ar5_00,ar6_00,uVar1));
  uVar1 = 0x5a;
  ({ unsigned long t0_ = (unsigned long)(1); unsigned long t1_ = (unsigned long)(0xb4); *(unsigned *)((((unsigned long)(fr0_ - 0)) - 8) + 0) = (unsigned)t0_; *(unsigned *)((((unsigned long)(fr0_ - 0)) - 8) + 4) = (unsigned)t1_; vsp = (((unsigned long)(fr0_ - 0)) - 8); FUN_8c0d7e80(ar4 + 0x78,1,0xf,0x5a); });
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0d7e24(ar4 + 0x78,0xf666666,0x6333333,uVar1));
  return uVar1;
}

__asm__(".globl _s_GRAPHICS_ENV_0d819c\n.set _s_GRAPHICS_ENV_0d819c, _s_GRAPHICS_ENV_0d819c_def\n");
//@unit 8c0d82f0
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
undefined4 FUN_8c0d82f0_def(undefined4 ar4,uint ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0d82f0";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  undefined4 in_fr1 = 0;
  undefined8 uVar2;
  double dVar3;
  undefined8 in_dr4 = 0;
  float fVar4;
  float fVar5;
  double dVar6;
  undefined8 in_xd0 = 0;
  bool bVar7;
  char cVar8;
  char cVar9;
  
  cVar9 = '\0';
  cVar8 = '\0';
  fVar4 = F32HI(in_dr4);
  if ((*(undefined1 *)(unsigned)0x8c437c98) == '\0') {
    (*(undefined4 *)(unsigned)(unsigned)0x8c437c94) = fVar4 + 7980.0;
    in_fr1 = 0x45f96000;
    (*(undefined4 *)(unsigned)(unsigned)0x8c437c98) = CONCAT31((*(undefined1 *)(unsigned)0x8c437c98),1);
  }
  if (ar5 < 36000) {
    fVar5 = (float)(int)ar5;
    if (fVar5 < 0.0) {
      fVar5 = fVar5 + 4.2949673e+09;
    }
  }
  else {
    fVar5 = (float)(int)(72000 - ar5);
    if (fVar5 < 0.0) {
      fVar5 = fVar5 + 4.2949673e+09;
    }
  }
  dVar6 = CONCAT44D(fVar4,fVar5 / 4500.0);
  uVar2 = CONCAT44(0x3f800000,in_fr1);
  if (1.0 < fVar5 / 4500.0) {
    dVar6 = CONCAT44D(fVar4,0x3f800000);
  }
  (vsp = ((unsigned long)(fr0_ - 0)), Class_12c3a4_m0_1029d0(0x8c437b28,ar5,ar6,ar7));
  if (cVar9 == '\0') {
    (*(undefined4 *)(unsigned)(unsigned)0x8c437c9c) = CONCAT44((*(undefined4 *)(unsigned)(unsigned)0x8c437ca0),(int)((ulonglong)uVar2 >> 0x20));
    dVar3 = CONCAT44D(0x45034000,(int)uVar2);
  }
  else {
    dVar3 = -1.3608465208426776e-249;
    (*(undefined4 *)(unsigned)(unsigned)0x8c437c9c) = uVar2;
  }
  fVar4 = F32HI(dVar6);
  if (cVar8 == '\0') {
    bVar7 = F32HI(dVar3) < fVar4;
  }
  else {
    bVar7 = dVar3 < dVar6;
  }
  if (bVar7) {
    if (cVar9 == '\0') {
      dVar3 = CONCAT44D(0x45034000,SUB84(dVar3,0));
    }
    else {
      dVar3 = -1.3608465208426776e-249;
    }
    if (cVar8 == '\0') {
      dVar6 = CONCAT44D(fVar4 - F32HI(dVar3),SUB84(dVar6,0));
    }
    else {
      dVar6 = dVar6 - dVar3;
    }
    if (cVar9 == '\0') {
      dVar3 = CONCAT44D(0x45034000,(int)(*(undefined4 *)(unsigned)(unsigned)0x8c437c9c));
    }
    else {
      dVar3 = -1.3608465208426776e-249;
    }
    if (cVar8 == '\0') {
      dVar6 = CONCAT44D(F32HI(dVar6) +
                               F32LO(dVar3) * F32HI(dVar3),SUB84(dVar6,0));
    }
    else {
      dVar6 = dVar6 + dVar3 * dVar3;
    }
    fVar4 = F32HI(dVar6);
    (*(undefined4 *)(unsigned)(unsigned)0x8c437c90) = fVar4;
    if (cVar9 != '\0') {
      (*(undefined4 *)(unsigned)(unsigned)0x8c437c90) = SUB84(dVar6,0);
      (*(undefined4 *)(unsigned)(unsigned)0x8c437c94) = fVar4;
    }
  }
  else {
    if (cVar9 == '\0') {
      dVar6 = CONCAT44D(0x45034000,(int)(*(undefined4 *)(unsigned)(unsigned)0x8c437c9c));
    }
    else {
      dVar6 = -1.3608465208426776e-249;
      in_xd0 = (*(undefined4 *)(unsigned)(unsigned)0x8c437c9c);
    }
    if (cVar8 == '\0') {
      (*(undefined4 *)(unsigned)(unsigned)0x8c437c90) = F32LO(dVar6) * F32HI(dVar6);
    }
    else {
      (*(undefined4 *)(unsigned)(unsigned)0x8c437c90) = SUB84(dVar6 * dVar6,0);
    }
    if (cVar9 != '\0') {
      (*(undefined4 *)(unsigned)(unsigned)0x8c437c90) = (float)in_xd0;
      (*(undefined4 *)(unsigned)(unsigned)0x8c437c94) = F32HI(in_xd0);
    }
  }
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c235f84(0x8c43786c,ar5,ar6,ar7));
  return uVar1;
}

__asm__(".globl _FUN_8c0d82f0\n.set _FUN_8c0d82f0, _FUN_8c0d82f0_def\n");
//@unit 8c0d8400
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
undefined4 FUN_8c0d8400_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0d8400";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = 0;
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0d82f0(ar4,0,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), thunk_FUN_8c20a1d0(0x8c43786c,uVar1,ar6,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c257120(0xfffafafa,uVar1,ar6,ar7));
  return uVar1;
}

__asm__(".globl _FUN_8c0d8400\n.set _FUN_8c0d8400, _FUN_8c0d8400_def\n");
//@unit 8c0d8444
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
undefined4 FUN_8c0d8444_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0d8444";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c235ee4(ar4,ar5,ar6,ar7));
  return uVar1;
}

__asm__(".globl _FUN_8c0d8444\n.set _FUN_8c0d8444, _FUN_8c0d8444_def\n");
//@unit 8c0d8458
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
undefined4 noop_0d8458_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "noop_0d8458";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 in_r0 = (undefined4)(unsigned long)vin0;
  
  return in_r0 = 0;
}

__asm__(".globl _noop_0d8458\n.set _noop_0d8458, _noop_0d8458_def\n");
//@unit 8c0d845c
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
undefined4 noop_0d845c_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "noop_0d845c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 in_r0 = (undefined4)(unsigned long)vin0;
  
  return in_r0 = 0;
}

__asm__(".globl _noop_0d845c\n.set _noop_0d845c, _noop_0d845c_def\n");
//@unit 8c0d8460
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
int FUN_8c0d8460_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0d8460";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  
  if (*(int *)(unsigned)(0x6e24 + ar4) != -1) {
    (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c021ce8))))
              (0x8c2b59d0,*(undefined4 *)(unsigned)(0x6e24 + ar4),ar6,ar7));
  }
  iVar1 = *(int *)(unsigned)(0x6e3c + ar4);
  if (iVar1 != -1) {
    iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c021ce8))))
                      (0x8c2b59d0,*(undefined4 *)(unsigned)(0x6e3c + ar4),ar6,ar7));
  }
  return iVar1;
}

__asm__(".globl _FUN_8c0d8460\n.set _FUN_8c0d8460, _FUN_8c0d8460_def\n");
//@unit 8c0d84a8
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
int FUN_8c0d84a8_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0d84a8";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = *(int *)(unsigned)(0x6e24 + ar4);
  if (iVar1 != -1) {
    uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c021b10))))
                      (0x8c2b59d0,*(undefined4 *)(unsigned)(0x6e20 + ar4),ar6,ar7));
    iVar1 = 0x6e24;
    *(undefined4 *)(unsigned)(0x6e24 + ar4) = uVar2;
  }
  return iVar1;
}

__asm__(".globl _FUN_8c0d84a8\n.set _FUN_8c0d84a8, _FUN_8c0d84a8_def\n");
//@unit 8c0d84e8
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
undefined4 FUN_8c0d84e8_def(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0d84e8";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 4; for (int i_ = 0; i_ < 4; i_++) z_[i_] = 0; }
  int iVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  undefined8 in_dr0 = 0;
  float fVar4;
  undefined4 in_fr14 = 0;
  bool bVar5;
  char cVar6;
  char cVar7;
  
  cVar7 = '\0';
  cVar6 = '\0';
  if ((*(undefined1 *)(unsigned)0x8c437ca4) == '\0') {
    in_dr0 = CONCAT44(0x3e8f5c29,(int)in_dr0);
    (*(undefined4 *)(unsigned)(unsigned)0x8c437ca0) = 0x3e8f5c29;
    (*(undefined4 *)(unsigned)(unsigned)0x8c437ca4) = CONCAT31((*(undefined1 *)(unsigned)0x8c437ca4),1);
  }
  fVar4 = 0.0;
  (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c0d8710(ar4,ar5,ar6,ar7));
  if (ar4[1] == 0) {
    iVar1 = (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c0d8aa0(ar4,*ar4,ar6,ar7));
    puVar2 = (undefined8 *)(unsigned)(iVar1 * 0x14 + -0x73bc6a84);
    if (cVar7 == '\0') {
      ar4[0xe] = *(undefined4 *)(unsigned)puVar2;
    }
    else {
      *(undefined8 *)(unsigned)(ar4 + 0xe) = *puVar2;
    }
    puVar2 = (undefined8 *)(unsigned)(iVar1 * 0x14 + -0x73bc6a80);
    if (cVar7 == '\0') {
      ar4[0xf] = *(undefined4 *)(unsigned)puVar2;
    }
    else {
      *(undefined8 *)(unsigned)(ar4 + 0xf) = *puVar2;
    }
    puVar2 = (undefined8 *)(unsigned)(iVar1 * 0x14 + -0x73bc6a7c);
    if (cVar7 == '\0') {
      ar4[0x10] = *(undefined4 *)(unsigned)puVar2;
    }
    else {
      *(undefined8 *)(unsigned)(ar4 + 0x10) = *puVar2;
    }
    puVar2 = (undefined8 *)(unsigned)(iVar1 * 0x14 + -0x73bc6a78);
    if (cVar7 == '\0') {
      ar4[0x11] = *(undefined4 *)(unsigned)puVar2;
    }
    else {
      *(undefined8 *)(unsigned)(ar4 + 0x11) = *puVar2;
    }
    puVar2 = (undefined8 *)(unsigned)(iVar1 * 0x14 + -0x73bc6a74);
    if (cVar7 == '\0') {
      ar4[0x12] = *(undefined4 *)(unsigned)puVar2;
      in_dr0 = CONCAT44((*(undefined4 *)(unsigned)(unsigned)0x8c437ca0),ar4[0x12]);
    }
    else {
      *(undefined8 *)(unsigned)(ar4 + 0x12) = *puVar2;
      in_dr0 = CONCAT44((*(undefined4 *)(unsigned)(unsigned)0x8c437ca4),(*(undefined4 *)(unsigned)(unsigned)0x8c437ca0));
    }
    if (cVar6 == '\0' && F32HI(in_dr0) < (float)in_dr0) {
      if (cVar7 == '\0') {
        in_dr0 = CONCAT44((*(undefined4 *)(unsigned)(unsigned)0x8c437ca0),(float)in_dr0);
        ar4[0x12] = (*(undefined4 *)(unsigned)(unsigned)0x8c437ca0);
      }
      else {
        in_dr0 = CONCAT44((*(undefined4 *)(unsigned)(unsigned)0x8c437ca4),(*(undefined4 *)(unsigned)(unsigned)0x8c437ca0));
        *(undefined8 *)(unsigned)(ar4 + 0x12) = in_dr0;
      }
    }
  }
  else if (ar4[1] == 1) {
    if (cVar7 == '\0') {
      ar4[0xe] = ar4[0x17];
      ar4[0xf] = ar4[0x18];
      ar4[0x10] = ar4[0x19];
      ar4[0x11] = ar4[0x1a];
      in_dr0 = CONCAT44(ar4[0x1b],(int)in_dr0);
      ar4[0x12] = ar4[0x1b];
    }
    else {
      *(undefined8 *)(unsigned)(ar4 + 0xe) = *(undefined8 *)(unsigned)(ar4 + 0x17);
      *(undefined8 *)(unsigned)(ar4 + 0xf) = *(undefined8 *)(unsigned)(ar4 + 0x18);
      *(undefined8 *)(unsigned)(ar4 + 0x10) = *(undefined8 *)(unsigned)(ar4 + 0x19);
      *(undefined8 *)(unsigned)(ar4 + 0x11) = *(undefined8 *)(unsigned)(ar4 + 0x1a);
      in_dr0 = *(undefined8 *)(unsigned)(ar4 + 0x1b);
      *(undefined8 *)(unsigned)(ar4 + 0x12) = in_dr0;
    }
    if (((ar4[0x1c] == 1) && (ar4[0x1d] == 0)) && (ar4[0x1b8f] == -1)) {
      uVar3 = (vsp = ((unsigned long)(fr0_ - 4)), pack_acquire_entry_handle(0x8c2b59d0,ar4[0x1b8e],ar6,ar7));
      ar4[0x1b8f] = uVar3;
    }
    if (((ar4[0x1c] == 0) && (ar4[0x1b8f] != -1)) && (ar4[0x1b91] == 0)) {
      (vsp = ((unsigned long)(fr0_ - 4)), pack_release_entry_handle(0x8c2b59d0,ar4[0x1b8f],ar6,ar7));
      ar4[0x1b8f] = 0xffffffff;
    }
    if (ar4[0x1b89] != -1) {
      ar7 = ar4[0x1b8a];
      ar6 = 0;
      (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c021d90(0x8c2b59d0,ar4[0x1b89],0,ar7));
    }
  }
  uVar3 = *ar4;
  (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c0d82f0(ar4,uVar3,ar6,ar7));
  if (cVar7 == '\0') {
    fVar4 = F32HI(in_dr0);
  }
  if (cVar6 == '\0') {
    bVar5 = fVar4 < 1.0;
  }
  else {
    bVar5 = CONCAT44D(in_fr14,fVar4) < CONCAT44D(0x3f800000,(int)in_dr0);
  }
  if (bVar5) {
    uVar3 = (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c235f14(ar4,uVar3,ar6,ar7));
  }
  else {
    uVar3 = (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c235ee4(ar4,uVar3,ar6,ar7));
  }
  return uVar3;
}

__asm__(".globl _FUN_8c0d84e8\n.set _FUN_8c0d84e8, _FUN_8c0d84e8_def\n");
//@unit 8c0d8710
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
undefined4 FUN_8c0d8710_def(uint *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0d8710";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 36; for (int i_ = 0; i_ < 36; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 uVar2;
  uint ar5_00;
  undefined8 *puVar3;
  char cVar4;
  
  cVar4 = '\0';
  (*(undefined4 *)(fr0_ - 0x1c)) = ar5;
  if (*ar4 == 0) {
    (vsp = ((unsigned long)(fr0_ - 36)), FUN_8c0d8890(ar4,ar5,ar6,ar7));
  }
  ar5_00 = *ar4;
  iVar1 = (vsp = ((unsigned long)(fr0_ - 36)), FUN_8c0d8bf0(ar4,ar5_00,ar6,ar7));
  if (cVar4 == '\0') {
    puVar3 = (undefined8 *)(unsigned)((int)&(*(undefined8 *)(fr0_ - 0x24)) + 4);
    (*(undefined8 *)(fr0_ - 0x24)) = CONCAT44(ar4[0x1b87],(undefined4)(*(undefined8 *)(fr0_ - 0x24)));
  }
  else {
    (*(undefined8 *)(fr0_ - 0x24)) = *(undefined8 *)(unsigned)(ar4 + 0x1b87);
    puVar3 = &(*(undefined8 *)(fr0_ - 0x24));
  }
  (*(int *)(fr0_ - 0x14)) = iVar1;
  (vsp = ((unsigned long)(fr0_ - 36)), FUN_8c0d7b60(ar4 + 0x1e,ar5_00,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 36)), FUN_8c0d7cb0(ar4 + 0x1e,ar5_00,ar6,ar7));
  if ((iVar1 == 0) || (iVar1 == 1)) {
    ar4[1] = 0;
  }
  else {
    ar4[1] = 1;
  }
  if (ar4[1] == 0) {
    *(unsigned *)(unsigned)((int)puVar3 + 8) = ar4;
    *((int *)(unsigned long)*(unsigned *)(unsigned)((int)puVar3 + 8)) = *((int *)(unsigned long)*(unsigned *)(unsigned)((int)puVar3 + 8)) + 1;
  }
  uVar2 = 72000;
  if (71999 < *ar4) {
    uVar2 = 0;
    *ar4 = 0;
  }
  return uVar2;
}

__asm__(".globl _FUN_8c0d8710\n.set _FUN_8c0d8710, _FUN_8c0d8710_def\n");
//@unit 8c0d8808
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
undefined4 FUN_8c0d8808_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0d8808";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 64; for (int i_ = 0; i_ < 64; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  undefined4 *ar5_00;
  undefined1 *ar6_00;
  
  ar6_00 = (fr0_ + (int)0xffffffe0);
  (*(undefined4 *)(fr0_ - 0x14)) = *(undefined4 *)(unsigned)(ar4 + 0x18);
  (*(undefined4 *)(fr0_ - 0x10)) = *(undefined4 *)(unsigned)(ar4 + 0x1c);
  (*(undefined4 *)(fr0_ - 0xc)) = *(undefined4 *)(unsigned)(ar4 + 0x20);
  ar5_00 = &(*(undefined4 *)(fr0_ - 0x14));
  uVar1 = 0;
  ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x20))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 64)); FUN_8c21279c(0,ar5_00,(fr0_ + (int)0xffffffe0),ar7); });
  (vsp = ((unsigned long)(fr0_ - 64)), FUN_8c219038(uVar1,ar5_00,ar6_00,ar7));
  (vsp = ((unsigned long)(fr0_ - 64)), FUN_8c21907e(uVar1,ar5_00,ar6_00,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 64)), FUN_8c219070(uVar1,ar5_00,ar6_00,ar7));
  return uVar1;
}

__asm__(".globl _FUN_8c0d8808\n.set _FUN_8c0d8808, _FUN_8c0d8808_def\n");
//@unit 8c0d8890
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
undefined4 FUN_8c0d8890_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0d8890";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 24; for (int i_ = 0; i_ < 24; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 *ar5_00;
  undefined4 ar5_01;
  double dVar4;
  float fVar5;
  undefined4 in_fr14 = 0;
  bool bVar6;
  char cVar7;
  char cVar8;
  
  cVar8 = '\0';
  cVar7 = '\0';
  fVar5 = 0.2;
  ar5_00 = ((undefined1 *)(fr0_ - 0x18));
  (vsp = ((unsigned long)(fr0_ - 24)), FUN_8c0b9d14(ar5,ar5_00,ar6,ar7));
  switch((*(undefined1 *)(fr0_ - 0x16))) {
  case 1:
  case 2:
  case 0xb:
  case 0xc:
    if (cVar8 == '\0') {
      fVar5 = 0.1;
    }
    break;
  default:
    if (cVar8 == '\0') {
      fVar5 = 0.2;
    }
    break;
  case 6:
  case 7:
    if (cVar8 == '\0') {
      fVar5 = 0.5;
    }
  }
  iVar1 = (vsp = ((unsigned long)(fr0_ - 24)), rand(ar5,ar5_00,ar6,ar7));
  if (cVar8 == '\0') {
    dVar4 = CONCAT44D(0x47000000,(float)iVar1);
  }
  else {
    dVar4 = 3.05573279121701e-310;
  }
  if (cVar7 == '\0') {
    bVar6 = F32LO(dVar4) / F32HI(dVar4) < fVar5;
  }
  else {
    bVar6 = dVar4 / dVar4 < CONCAT44D(in_fr14,fVar5);
  }
  if (bVar6) {
    *(undefined4 *)(unsigned)(ar4 + 0x58) = 1;
    uVar2 = (vsp = ((unsigned long)(fr0_ - 24)), rand(ar5,ar5_00,ar6,ar7));
    ar5_01 = 0x3840;
    uVar3 = (vsp = ((unsigned long)(fr0_ - 24)), libgcc_divide_helper_0103d0(uVar2,0x3840,ar6,ar7));
    *(undefined4 *)(unsigned)(ar4 + 0x50) = uVar3;
    if (*(uint *)(unsigned)(ar4 + 0x50) < 0x1c20) {
      *(undefined4 *)(unsigned)(ar4 + 0x50) = 0x1c20;
    }
    iVar1 = (vsp = ((unsigned long)(fr0_ - 24)), rand(uVar2,ar5_01,ar6,ar7));
    if (cVar8 == '\0') {
      dVar4 = CONCAT44D(0x47000000,(float)iVar1);
    }
    else {
      dVar4 = 3.05573279121701e-310;
    }
    if (cVar7 == '\0') {
      fVar5 = F32LO(dVar4) / F32HI(dVar4);
    }
    else {
      fVar5 = SUB84(dVar4 / dVar4,0);
    }
    if (cVar8 == '\0') {
      dVar4 = CONCAT44D(0x44610000,fVar5);
    }
    else {
      dVar4 = 3.5336950296991835e+72;
    }
    if (cVar7 == '\0') {
      fVar5 = F32LO(dVar4) * F32HI(dVar4);
    }
    else {
      fVar5 = SUB84(dVar4 * dVar4,0);
    }
    if (cVar8 == '\0') {
      dVar4 = CONCAT44D(0x44610000,fVar5);
    }
    else {
      dVar4 = 3.5336950296991835e+72;
    }
    if (cVar7 == '\0') {
      fVar5 = F32LO(dVar4) + F32HI(dVar4);
    }
    else {
      fVar5 = SUB84(dVar4 + dVar4,0);
    }
    if (cVar8 == '\0') {
      dVar4 = CONCAT44D(0x4f000000,fVar5);
    }
    else {
      dVar4 = -9.046259633960061e+74;
    }
    if (cVar7 == '\0' && F32HI(dVar4) < SUB84(dVar4,0)) {
      if (cVar8 == '\0') {
        dVar4 = CONCAT44D(0xcf800000,SUB84(dVar4,0));
      }
      else {
        dVar4 = 2.9939323502132253e-78;
      }
      if (cVar7 == '\0') {
        fVar5 = F32HI(dVar4);
        dVar4 = CONCAT44D(fVar5,F32LO(dVar4) + fVar5);
      }
      else {
        dVar4 = dVar4 + dVar4;
      }
    }
    if (cVar7 == '\0') {
      iVar1 = (int)SUB84(dVar4,0);
    }
    else {
      iVar1 = (int)dVar4;
    }
    uVar2 = 0x54;
    *(int *)(unsigned)(ar4 + 0x54) = iVar1;
  }
  else {
    uVar2 = 0x58;
    *(undefined4 *)(unsigned)(ar4 + 0x58) = 0;
  }
  return uVar2;
}

__asm__(".globl _FUN_8c0d8890\n.set _FUN_8c0d8890, _FUN_8c0d8890_def\n");
//@unit 8c0d89d8
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
int FUN_8c0d89d8_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0d89d8";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), get_field_10_0d8a98(ar4 + 0x78,ar5,ar6,ar7));
  iVar2 = (vsp = ((unsigned long)(fr0_ - 0)), get_field_c_0d8a90(ar4 + 0x78,ar5,ar6,ar7));
  iVar3 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0d8a88(ar4 + 0x78,ar5,ar6,ar7));
  if (iVar3 != 0) {
    for (iVar4 = 0; iVar4 < iVar1; iVar4 = iVar4 + 1) {
      iVar3 = (vsp = ((unsigned long)(fr0_ - 0)), get_field_2c_0d7ca8(iVar4 * 0x38 + iVar2,ar5,ar6,ar7));
      if (iVar3 == 1) {
        ar6 = 0;
        ar5 = ar4 + 0x6e50;
        iVar3 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0d7900(iVar4 * 0x38 + iVar2,ar5,0,ar7));
      }
    }
  }
  return iVar3;
}

__asm__(".globl _FUN_8c0d89d8\n.set _FUN_8c0d89d8, _FUN_8c0d89d8_def\n");
//@unit 8c0d8a88
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
undefined4 FUN_8c0d8a88_def(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0d8a88";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return *ar4;
}

__asm__(".globl _FUN_8c0d8a88\n.set _FUN_8c0d8a88, _FUN_8c0d8a88_def\n");
//@unit 8c0d8a90
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
undefined4 get_field_c_0d8a90_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "get_field_c_0d8a90";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return *(undefined4 *)(unsigned)(ar4 + 0xc);
}

__asm__(".globl _get_field_c_0d8a90\n.set _get_field_c_0d8a90, _get_field_c_0d8a90_def\n");
//@unit 8c0d8a98
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
undefined4 get_field_10_0d8a98_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "get_field_10_0d8a98";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return *(undefined4 *)(unsigned)(ar4 + 0x10);
}

__asm__(".globl _get_field_10_0d8a98\n.set _get_field_10_0d8a98, _get_field_10_0d8a98_def\n");
//@unit 8c0d8aa0
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
int FUN_8c0d8aa0_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0d8aa0";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 120; for (int i_ = 0; i_ < 120; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 in_fr1 = 0;
  ulonglong uVar2;
  double dVar3;
  float fVar4;
  float fVar5;
  undefined8 in_dr14 = 0;
  undefined4 uVar7;
  double dVar6;
  undefined8 in_xd14 = 0;
  bool bVar8;
  int ar7_00;
  int ar6_00;
  int ar5_00;
  char cVar9;
  char cVar10;
  
  uVar7 = (undefined4)((ulonglong)in_dr14 >> 0x20);
  cVar10 = '\0';
  cVar9 = '\0';
  ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x74))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 120)); FUN_8c25cddc(((undefined4 *)(fr0_ - 0x58)),ar5,ar6,ar7); });
  if (cVar10 == '\0') {
    (*(undefined4 *)(fr0_ - 0x64)) = *(undefined4 *)(unsigned)(ar4 + 8);
    (*(undefined4 *)(fr0_ - 0x60)) = *(undefined4 *)(unsigned)(ar4 + 0xc);
    (*(undefined4 *)(fr0_ - 0x5c)) = *(undefined4 *)(unsigned)(ar4 + 0x10);
    uVar2 = CONCAT44((*(undefined4 *)(fr0_ - 0x5c)),in_fr1);
  }
  else {
    (*(undefined4 *)(fr0_ - 0x64)) = (undefined4)*(undefined8 *)(unsigned)(ar4 + 8);
    (*(undefined4 *)(fr0_ - 0x60)) = (undefined4)*(undefined8 *)(unsigned)(ar4 + 0xc);
    uVar2 = *(ulonglong *)(unsigned)(ar4 + 0x10);
    (*(undefined4 *)(fr0_ - 0x5c)) = (undefined4)uVar2;
    ((undefined4 *)(fr0_ - 0x58))[0] = (undefined4)(uVar2 >> 0x20);
  }
  iVar1 = (vsp = ((unsigned long)(fr0_ - 120)), libgcc_divide_helper_0103d0(ar5,36000,ar6,ar7));
  fVar5 = (float)iVar1;
  dVar6 = CONCAT44D(uVar7,fVar5);
  dVar3 = (double)(uVar2 & 0xffffffff);
  if (cVar9 == '\0') {
    bVar8 = fVar5 < 0.0;
  }
  else {
    bVar8 = dVar6 < dVar3;
  }
  if (bVar8) {
    if (cVar10 == '\0') {
      dVar3 = CONCAT44D(0x4f800000,(int)uVar2);
    }
    else {
      dVar3 = 1.8578690272452215e+34;
    }
    if (cVar9 == '\0') {
      dVar6 = (double)(ulonglong)(uint)(fVar5 + F32HI(dVar3));
    }
    else {
      dVar6 = dVar6 + dVar3;
    }
  }
  if (cVar10 == '\0') {
    uVar2 = CONCAT44(0x470ca000,SUB84(dVar3,0));
  }
  else {
    uVar2 = 0x478ca000470ca000;
  }
  if (cVar9 == '\0') {
    dVar3 = CONCAT44D((float)ar5,F32LO(dVar6) / (float)(uVar2 >> 0x20));
  }
  else {
    dVar3 = (double)ar5;
  }
  dVar6 = (double)(uVar2 & 0xffffffff);
  fVar5 = F32HI(dVar3);
  if (cVar9 == '\0') {
    bVar8 = fVar5 < 0.0;
  }
  else {
    bVar8 = dVar3 < dVar6;
  }
  if (bVar8) {
    if (cVar10 == '\0') {
      dVar6 = CONCAT44D(0x4f800000,(int)uVar2);
    }
    else {
      dVar6 = 1.8578690272452215e+34;
    }
    if (cVar9 == '\0') {
      dVar3 = CONCAT44D(fVar5 + F32HI(dVar6),SUB84(dVar3,0));
    }
    else {
      dVar3 = dVar3 + dVar6;
    }
  }
  if (cVar10 == '\0') {
    dVar6 = CONCAT44D(0x478ca000,SUB84(dVar6,0));
  }
  else {
    dVar6 = 5629500734611456.0;
  }
  if (cVar9 == '\0') {
    dVar3 = CONCAT44D(F32HI(dVar3) / F32HI(dVar6),
                             SUB84(dVar3,0));
  }
  else {
    dVar3 = dVar3 / dVar6;
  }
  if (cVar10 == '\0') {
    dVar6 = CONCAT44D(0x43340000,SUB84(dVar6,0));
  }
  else {
    dVar6 = 2.6584566571173454e+36;
  }
  if (cVar9 == '\0') {
    dVar3 = CONCAT44D((int)(D2U(dVar3) >> 0x20),
                             F32LO(dVar3) * F32HI(dVar6));
  }
  else {
    dVar3 = dVar3 * dVar6;
  }
  dVar6 = CONCAT44D((int)(D2U(dVar3) >> 0x20),-SUB84(dVar3,0));
  if (cVar10 == '\0') {
    *(float *)(unsigned)(ar4 + 0x30) = -SUB84(dVar3,0);
    dVar3 = CONCAT44D(0x47800000,*(undefined4 *)(unsigned)(ar4 + 0x30));
  }
  else {
    *(undefined8 *)(unsigned)(ar4 + 0x30) = in_xd14;
    dVar3 = 1.4411521878487204e+18;
  }
  if (cVar9 == '\0') {
    fVar5 = F32LO(dVar3) * F32HI(dVar3);
  }
  else {
    fVar5 = SUB84(dVar3 * dVar3,0);
  }
  if (cVar10 == '\0') {
    dVar3 = CONCAT44D(0x43b40000,fVar5);
  }
  else {
    dVar3 = -3.739346301775294e-250;
  }
  if (cVar9 == '\0') {
    ar7_00 = (int)(F32LO(dVar3) / F32HI(dVar3));
  }
  else {
    ar7_00 = (int)(dVar3 / dVar3);
  }
  if (cVar10 == '\0') {
    dVar3 = CONCAT44D(0x47800000,*(undefined4 *)(unsigned)(ar4 + 0x2c));
  }
  else {
    dVar3 = 1.4411521878487204e+18;
  }
  if (cVar9 == '\0') {
    fVar5 = F32LO(dVar3) * F32HI(dVar3);
  }
  else {
    fVar5 = SUB84(dVar3 * dVar3,0);
  }
  if (cVar10 == '\0') {
    dVar3 = CONCAT44D(0x43b40000,fVar5);
  }
  else {
    dVar3 = -3.739346301775294e-250;
  }
  if (cVar9 == '\0') {
    ar6_00 = (int)(F32LO(dVar3) / F32HI(dVar3));
  }
  else {
    ar6_00 = (int)(dVar3 / dVar3);
  }
  if (cVar10 == '\0') {
    dVar3 = CONCAT44D(0x47800000,*(undefined4 *)(unsigned)(ar4 + 0x28));
  }
  else {
    dVar3 = 1.4411521878487204e+18;
  }
  if (cVar9 == '\0') {
    fVar5 = F32LO(dVar3) * F32HI(dVar3);
  }
  else {
    fVar5 = SUB84(dVar3 * dVar3,0);
  }
  if (cVar10 == '\0') {
    dVar3 = CONCAT44D(0x43b40000,fVar5);
  }
  else {
    dVar3 = -3.739346301775294e-250;
  }
  if (cVar9 == '\0') {
    fVar4 = F32HI(dVar3);
    fVar5 = F32LO(dVar3) / fVar4;
    dVar3 = CONCAT44D(fVar4,fVar5);
    ar5_00 = (int)fVar5;
  }
  else {
    dVar3 = dVar3 / dVar3;
    ar5_00 = (int)dVar3;
  }
  uVar7 = SUB84(dVar3,0);
  ({ unsigned long ri0_ = (unsigned long)(iVar1); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 120)); FUN_8c256b0c(((undefined4 *)(fr0_ - 0x58)),ar5_00,ar6_00,ar7_00); });
  ({ unsigned long ri0_ = (unsigned long)(iVar1); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 120)); FUN_8c21279c(((undefined4 *)(fr0_ - 0x58)),&(*(undefined4 *)(fr0_ - 0x64)),&(*(undefined4 *)(fr0_ - 0x70)),ar7_00); });
  if (cVar10 == '\0') {
    *(undefined4 *)(unsigned)(ar4 + 0x18) = (*(undefined4 *)(fr0_ - 0x70));
    *(undefined4 *)(unsigned)(ar4 + 0x1c) = (*(undefined4 *)(fr0_ - 0x6c));
    *(undefined4 *)(unsigned)(ar4 + 0x20) = (*(undefined4 *)(fr0_ - 0x68));
    dVar3 = CONCAT44D(0x43b38000,uVar7);
  }
  else {
    *(undefined8 *)(unsigned)(ar4 + 0x18) = CONCAT44((*(undefined4 *)(fr0_ - 0x6c)),(*(undefined4 *)(fr0_ - 0x70)));
    *(ulonglong *)(unsigned)(ar4 + 0x1c) = CONCAT44((*(undefined4 *)(fr0_ - 0x68)),(*(undefined4 *)(fr0_ - 0x6c)));
    *(ulonglong *)(unsigned)(ar4 + 0x20) = CONCAT44((*(undefined4 *)(fr0_ - 0x64)),(*(undefined4 *)(fr0_ - 0x68)));
    dVar3 = 1.606691858090454e+73;
  }
  if (cVar9 == '\0') {
    iVar1 = (int)(F32HI(dVar6) * F32HI(dVar3));
  }
  else {
    iVar1 = (int)(dVar6 * dVar3);
  }
  return iVar1;
}

__asm__(".globl _FUN_8c0d8aa0\n.set _FUN_8c0d8aa0, _FUN_8c0d8aa0_def\n");
//@unit 8c0d8bf0
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
undefined4 FUN_8c0d8bf0_def(int ar4,code *ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0d8bf0";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 4; for (int i_ = 0; i_ < 4; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  int iVar2;
  code *ar5_00;
  float fVar3;
  float fVar5;
  double dVar4;
  undefined1 *puVar6;
  undefined8 in_xd0 = 0;
  char cVar7;
  char cVar8;
  
  cVar8 = '\0';
  cVar7 = '\0';
  ar5_00 = ar5;
  if ((*(undefined1 *)(unsigned)0x8c437cb4) == '\0') {
    uVar1 = (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c0d761c(((undefined1 *)(unsigned)0x8c437cb8),ar5,ar6,ar7));
    ar6 = 0x8c437ca8;
    ar5_00 = ((void *)0x8c0d76b8);
    (vsp = ((unsigned long)(fr0_ - 4)), global_list_push(uVar1,((void *)0x8c0d76b8),0x8c437ca8,ar7));
    (*(undefined1 *)(unsigned)0x8c437cb4) = '\x01';
  }
  if ((*(undefined1 *)(unsigned)0x8c437cd8) == '\0') {
    uVar1 = (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c0d761c(((undefined1 *)(unsigned)0x8c437cdc),ar5_00,ar6,ar7));
    ar6 = 0x8c437ccc;
    ar5_00 = ((void *)0x8c0d76b8);
    (vsp = ((unsigned long)(fr0_ - 4)), global_list_push(uVar1,((void *)0x8c0d76b8),0x8c437ccc,ar7));
    (*(undefined1 *)(unsigned)0x8c437cd8) = '\x01';
  }
  if ((*(undefined1 *)(unsigned)0x8c437cfc) == '\0') {
    (*(undefined4 *)(unsigned)(unsigned)0x8c437cf8) = 0;
    (*(undefined1 *)(unsigned)0x8c437cfc) = '\x01';
  }
  switch(*(undefined4 *)(unsigned)(ar4 + 0x58)) {
  case 1:
    if (ar5 == ((code *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x50))) {
      *(undefined4 *)(unsigned)(ar4 + 0x58) = 2;
      *(undefined4 *)(unsigned)(ar4 + 0x74) = 0;
      if (cVar8 == '\0') {
        *(undefined4 *)(unsigned)(ar4 + 0x5c) = *(undefined4 *)(unsigned)(ar4 + 0x38);
        *(undefined4 *)(unsigned)(ar4 + 0x60) = *(undefined4 *)(unsigned)(ar4 + 0x3c);
        *(undefined4 *)(unsigned)(ar4 + 100) = *(undefined4 *)(unsigned)(ar4 + 0x40);
        *(undefined4 *)(unsigned)(ar4 + 0x68) = *(undefined4 *)(unsigned)(ar4 + 0x44);
        *(undefined4 *)(unsigned)(ar4 + 0x6c) = *(undefined4 *)(unsigned)(ar4 + 0x48);
        dVar4 = CONCAT44D(0x3e4ccccd,*(undefined4 *)(unsigned)(ar4 + 0x68));
      }
      else {
        *(undefined8 *)(unsigned)(ar4 + 0x5c) = *(undefined8 *)(unsigned)(ar4 + 0x38);
        *(undefined8 *)(unsigned)(ar4 + 0x60) = *(undefined8 *)(unsigned)(ar4 + 0x3c);
        *(undefined8 *)(unsigned)(ar4 + 100) = *(undefined8 *)(unsigned)(ar4 + 0x40);
        *(undefined8 *)(unsigned)(ar4 + 0x68) = *(undefined8 *)(unsigned)(ar4 + 0x44);
        *(undefined8 *)(unsigned)(ar4 + 0x6c) = *(undefined8 *)(unsigned)(ar4 + 0x48);
        in_xd0 = *(undefined8 *)(unsigned)(ar4 + 0x68);
        dVar4 = 1548112633213747.2;
      }
      if (cVar7 == '\0') {
        fVar3 = F32LO(dVar4) - F32HI(dVar4);
      }
      else {
        fVar3 = SUB84(dVar4 - dVar4,0);
      }
      if (cVar8 == '\0') {
        dVar4 = CONCAT44D(0x43160000,fVar3);
      }
      else {
        dVar4 = -1.3609530726902538e-249;
      }
      if (cVar7 == '\0') {
        (*(undefined4 *)(unsigned)(unsigned)0x8c437cf0) = F32LO(dVar4) / F32HI(dVar4);
      }
      else {
        (*(undefined4 *)(unsigned)(unsigned)0x8c437cf0) = SUB84(dVar4 / dVar4,0);
      }
      if (cVar8 == '\0') {
        dVar4 = CONCAT44D(0x3e19999a,*(undefined4 *)(unsigned)(ar4 + 0x6c));
      }
      else {
        (*(undefined4 *)(unsigned)(unsigned)0x8c437cf0) = (float)in_xd0;
        in_xd0 = *(undefined8 *)(unsigned)(ar4 + 0x6c);
        dVar4 = -1.3608891160156975e-249;
      }
      if (cVar7 == '\0') {
        fVar3 = F32LO(dVar4) - F32HI(dVar4);
      }
      else {
        fVar3 = SUB84(dVar4 - dVar4,0);
      }
      if (cVar8 == '\0') {
        dVar4 = CONCAT44D(0x43160000,fVar3);
      }
      else {
        dVar4 = -1.3609530726902538e-249;
      }
      if (cVar7 == '\0') {
        (*(undefined4 *)(unsigned)(unsigned)0x8c437cf4) = F32LO(dVar4) / F32HI(dVar4);
      }
      else {
        (*(undefined4 *)(unsigned)(unsigned)0x8c437cf4) = SUB84(dVar4 / dVar4,0);
      }
      if (cVar8 != '\0') {
        (*(undefined4 *)(unsigned)(unsigned)0x8c437cf4) = (float)in_xd0;
        (*(undefined4 *)(unsigned)(unsigned)0x8c437cf8) = (int)((ulonglong)in_xd0 >> 0x20);
      }
      (*(undefined4 *)(unsigned)(unsigned)0x8c437cb8) = *(undefined4 *)(unsigned)(ar4 + 0x5c);
      (*(undefined4 *)(unsigned)(unsigned)0x8c437cbc) = *(undefined4 *)(unsigned)(ar4 + 0x60);
      (*(undefined4 *)(unsigned)(unsigned)0x8c437cc0) = *(undefined4 *)(unsigned)(ar4 + 100);
      (*(undefined4 *)(unsigned)(unsigned)0x8c437cc4) = *(float *)(unsigned)(ar4 + 0x68);
      (*(undefined4 *)(unsigned)(unsigned)0x8c437cc8) = *(float *)(unsigned)(ar4 + 0x6c);
      iVar2 = (vsp = ((unsigned long)(fr0_ - 4)), rand(((undefined1 *)(unsigned)0x8c437cb8),ar5_00,ar6,ar7));
      if (cVar8 == '\0') {
        dVar4 = CONCAT44D(0x47000000,(float)iVar2);
      }
      else {
        dVar4 = 206158466560.0;
      }
      if (cVar7 == '\0') {
        fVar3 = F32LO(dVar4) / F32HI(dVar4);
      }
      else {
        fVar3 = SUB84(dVar4 / dVar4,0);
      }
      if (cVar8 == '\0') {
        dVar4 = CONCAT44D(0x42480000,fVar3);
      }
      else {
        dVar4 = 4.604612304241727e-232;
      }
      if (cVar7 == '\0') {
        (*(undefined4 *)(unsigned)(unsigned)0x8c437cf8) = (int)(F32LO(dVar4) * F32HI(dVar4));
      }
      else {
        (*(undefined4 *)(unsigned)(unsigned)0x8c437cf8) = (int)(dVar4 * dVar4);
      }
    }
    break;
  case 2:
    if (cVar8 == '\0') {
      dVar4 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c437cf0),*(undefined4 *)(unsigned)(ar4 + 0x68));
    }
    else {
      in_xd0 = *(undefined8 *)(unsigned)(ar4 + 0x68);
      dVar4 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c437cf4),(*(undefined4 *)(unsigned)(unsigned)0x8c437cf0));
    }
    if (cVar7 == '\0') {
      fVar3 = F32LO(dVar4) - F32HI(dVar4);
    }
    else {
      fVar3 = SUB84(dVar4 - dVar4,0);
    }
    if (cVar8 == '\0') {
      *(float *)(unsigned)(ar4 + 0x68) = fVar3;
      dVar4 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c437cf4),*(undefined4 *)(unsigned)(ar4 + 0x6c));
    }
    else {
      *(undefined8 *)(unsigned)(ar4 + 0x68) = in_xd0;
      in_xd0 = *(undefined8 *)(unsigned)(ar4 + 0x6c);
      dVar4 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c437cf8),(*(undefined4 *)(unsigned)(unsigned)0x8c437cf4));
    }
    if (cVar7 == '\0') {
      fVar3 = F32LO(dVar4) - F32HI(dVar4);
    }
    else {
      fVar3 = SUB84(dVar4 - dVar4,0);
    }
    if (cVar8 == '\0') {
      *(float *)(unsigned)(ar4 + 0x6c) = fVar3;
      fVar3 = *(float *)(unsigned)(ar4 + 0x68);
      fVar5 = 0.2;
    }
    else {
      *(undefined8 *)(unsigned)(ar4 + 0x6c) = in_xd0;
      in_xd0 = *(undefined8 *)(unsigned)(ar4 + 0x68);
      fVar3 = 0.2;
      fVar5 = 0.15;
    }
    if (cVar7 != '\0' || fVar3 <= fVar5) {
      if (cVar8 == '\0') {
        *(undefined4 *)(unsigned)(ar4 + 0x68) = 0x3e4ccccd;
      }
      else {
        *(undefined8 *)(unsigned)(ar4 + 0x68) = 0x3e19999a3e4ccccd;
      }
    }
    if (cVar8 == '\0') {
      fVar3 = *(float *)(unsigned)(ar4 + 0x6c);
      fVar5 = 0.15;
    }
    else {
      in_xd0 = *(undefined8 *)(unsigned)(ar4 + 0x6c);
      fVar3 = 0.15;
      fVar5 = -7.131649e+31;
    }
    if (cVar7 != '\0' || fVar3 <= fVar5) {
      if (cVar8 == '\0') {
        *(undefined4 *)(unsigned)(ar4 + 0x6c) = 0x3e19999a;
      }
      else {
        *(undefined8 *)(unsigned)(ar4 + 0x6c) = 0xf46109003e19999a;
      }
    }
    if (cVar8 == '\0') {
      fVar3 = *(float *)(unsigned)(ar4 + 0x68);
      fVar5 = 0.2;
    }
    else {
      in_xd0 = *(undefined8 *)(unsigned)(ar4 + 0x68);
      fVar3 = 0.2;
      fVar5 = 0.15;
    }
    if (fVar3 == fVar5) {
      if (cVar8 == '\0') {
        fVar3 = *(float *)(unsigned)(ar4 + 0x6c);
        fVar5 = 0.15;
      }
      else {
        in_xd0 = *(undefined8 *)(unsigned)(ar4 + 0x6c);
        fVar3 = 0.15;
        fVar5 = -7.131649e+31;
      }
      if (fVar3 == fVar5) {
        *(undefined4 *)(unsigned)(ar4 + 0x58) = 3;
        uVar1 = 4100000000;
        iVar2 = ar4 + 0x78;
        (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c0d7f04(iVar2,4100000000,ar6,ar7));
        iVar2 = (vsp = ((unsigned long)(fr0_ - 4)), rand(iVar2,uVar1,ar6,ar7));
        if (cVar8 == '\0') {
          dVar4 = CONCAT44D(0x47000000,(float)iVar2);
        }
        else {
          dVar4 = 33554440.875;
        }
        if (cVar7 == '\0') {
          fVar3 = F32LO(dVar4) / F32HI(dVar4);
        }
        else {
          fVar3 = SUB84(dVar4 / dVar4,0);
        }
        if (cVar8 == '\0') {
          dVar4 = CONCAT44D(0x41800000,fVar3);
        }
        else {
          dVar4 = -131072.03198242188;
        }
        if (cVar7 == '\0') {
          fVar3 = F32LO(dVar4) * F32HI(dVar4);
        }
        else {
          fVar3 = SUB84(dVar4 * dVar4,0);
        }
        if (cVar8 == '\0') {
          dVar4 = CONCAT44D(0xc1000000,fVar3);
        }
        else {
          dVar4 = 5.98249051247822e-310;
        }
        if (cVar7 == '\0') {
          fVar3 = F32LO(dVar4) + F32HI(dVar4);
        }
        else {
          fVar3 = SUB84(dVar4 + dVar4,0);
        }
        if (cVar8 == '\0') {
          *(float *)(unsigned)(ar4 + 0x6e1c) = fVar3;
        }
        else {
          *(undefined8 *)(unsigned)(ar4 + 0x6e1c) = in_xd0;
        }
        uVar1 = (vsp = ((unsigned long)(fr0_ - 4)), pack_acquire_entry_handle(0x8c2b59d0,*(undefined4 *)(unsigned)(ar4 + 0x6e20),ar6,ar7));
        *(undefined4 *)(unsigned)(ar4 + 0x6e24) = uVar1;
        *(undefined4 *)(unsigned)(ar4 + 0x6e28) = 0xbae;
      }
    }
    break;
  case 3:
    *(undefined4 *)(unsigned)(ar4 + 0x58) = 4;
    break;
  case 4:
    if ((500 < *(int *)(unsigned)(ar4 + 0x6e28)) &&
       (iVar2 = *(int *)(unsigned)(ar4 + 0x6e28) + -10, *(int *)(unsigned)(ar4 + 0x6e28) = iVar2, iVar2 < 500)) {
      *(undefined4 *)(unsigned)(ar4 + 0x6e28) = 500;
    }
    if (*(int *)(unsigned)(ar4 + 0x70) == 0) {
      iVar2 = ar4 + 0x78;
      uVar1 = (vsp = ((unsigned long)(fr0_ - 4)), get_field_4_0d92a8(iVar2,ar5_00,ar6,ar7));
      if ((uint)(int)(short)uVar1 < *(uint *)(unsigned)(ar4 + 0x54)) {
        uVar1 = (vsp = ((unsigned long)(fr0_ - 4)), rand(iVar2,ar5_00,ar6,ar7));
        ar5_00 = (code *)0x64;
        iVar2 = (vsp = ((unsigned long)(fr0_ - 4)), libgcc_divide_helper_01031c(uVar1,100,ar6,ar7));
        if ((iVar2 < 0x14) && (*(int *)(unsigned)(ar4 + 0x6e44) == 0)) {
          if (cVar8 == '\0') {
            dVar4 = CONCAT44D(0x40400000,(*(undefined4 *)(unsigned)(unsigned)0x8c437cc4));
          }
          else {
            in_xd0 = CONCAT44((*(undefined4 *)(unsigned)(unsigned)0x8c437cc8),(*(undefined4 *)(unsigned)(unsigned)0x8c437cc4));
            dVar4 = 206158463104.0;
          }
          if (cVar7 == '\0') {
            fVar3 = F32LO(dVar4) - F32HI(dVar4);
          }
          else {
            fVar3 = SUB84(dVar4 - dVar4,0);
          }
          if (cVar8 == '\0') {
            dVar4 = CONCAT44D(0x42480000,fVar3);
          }
          else {
            dVar4 = 9.765628835367579e-05;
          }
          if (cVar7 == '\0') {
            (*(undefined4 *)(unsigned)(unsigned)0x8c437ce8) = F32LO(dVar4) / F32HI(dVar4);
          }
          else {
            (*(undefined4 *)(unsigned)(unsigned)0x8c437ce8) = SUB84(dVar4 / dVar4,0);
          }
          if (cVar8 == '\0') {
            dVar4 = CONCAT44D(0x3f19999a,(*(undefined4 *)(unsigned)(unsigned)0x8c437cb8));
          }
          else {
            (*(undefined4 *)(unsigned)(unsigned)0x8c437ce8) = (float)in_xd0;
            (*(uint *)(unsigned)0x8c437cec) = (undefined4)((ulonglong)in_xd0 >> 0x20);
            in_xd0 = CONCAT44((*(undefined4 *)(unsigned)(unsigned)0x8c437cbc),(*(undefined4 *)(unsigned)(unsigned)0x8c437cb8));
            dVar4 = 3.051758529863946e-05;
          }
          if (cVar7 == '\0') {
            fVar3 = F32LO(dVar4) - F32HI(dVar4);
          }
          else {
            fVar3 = SUB84(dVar4 - dVar4,0);
          }
          if (cVar8 == '\0') {
            dVar4 = CONCAT44D(0x42480000,fVar3);
          }
          else {
            dVar4 = 9.765628835367579e-05;
          }
          if (cVar7 == '\0') {
            (*(undefined4 *)(unsigned)(unsigned)0x8c437cdc) = F32LO(dVar4) / F32HI(dVar4);
          }
          else {
            (*(undefined4 *)(unsigned)(unsigned)0x8c437cdc) = SUB84(dVar4 / dVar4,0);
          }
          if (cVar8 == '\0') {
            dVar4 = CONCAT44D(0x3f19999a,(*(undefined4 *)(unsigned)(unsigned)0x8c437cbc));
          }
          else {
            (*(undefined4 *)(unsigned)(unsigned)0x8c437cdc) = (float)in_xd0;
            in_xd0 = CONCAT44((*(undefined4 *)(unsigned)(unsigned)0x8c437cc0),(*(undefined4 *)(unsigned)(unsigned)0x8c437cbc));
            dVar4 = 3.051758529863946e-05;
          }
          if (cVar7 == '\0') {
            fVar3 = F32LO(dVar4) - F32HI(dVar4);
          }
          else {
            fVar3 = SUB84(dVar4 - dVar4,0);
          }
          if (cVar8 == '\0') {
            dVar4 = CONCAT44D(0x42480000,fVar3);
          }
          else {
            dVar4 = 9.765628835367579e-05;
          }
          if (cVar7 == '\0') {
            (*(undefined4 *)(unsigned)(unsigned)0x8c437ce0) = F32LO(dVar4) / F32HI(dVar4);
          }
          else {
            (*(undefined4 *)(unsigned)(unsigned)0x8c437ce0) = SUB84(dVar4 / dVar4,0);
          }
          if (cVar8 == '\0') {
            dVar4 = CONCAT44D(0x3f000000,(*(undefined4 *)(unsigned)(unsigned)0x8c437cc0));
          }
          else {
            (*(undefined4 *)(unsigned)(unsigned)0x8c437ce0) = (float)in_xd0;
            in_xd0 = CONCAT44((*(undefined4 *)(unsigned)(unsigned)0x8c437cc4),(*(undefined4 *)(unsigned)(unsigned)0x8c437cc0));
            dVar4 = 6.58340905100917e-312;
          }
          if (cVar7 == '\0') {
            fVar3 = F32LO(dVar4) - F32HI(dVar4);
          }
          else {
            fVar3 = SUB84(dVar4 - dVar4,0);
          }
          if (cVar8 == '\0') {
            dVar4 = CONCAT44D(0x42480000,fVar3);
          }
          else {
            dVar4 = 9.765628835367579e-05;
          }
          if (cVar7 == '\0') {
            (*(undefined4 *)(unsigned)(unsigned)0x8c437ce4) = F32LO(dVar4) / F32HI(dVar4);
          }
          else {
            (*(undefined4 *)(unsigned)(unsigned)0x8c437ce4) = SUB84(dVar4 / dVar4,0);
          }
          if (cVar8 == '\0') {
            *(undefined4 *)(unsigned)(ar4 + 0x68) = 0x40400000;
            *(undefined4 *)(unsigned)(ar4 + 0x5c) = 0x3f19999a;
            *(undefined4 *)(unsigned)(ar4 + 0x60) = 0x3f19999a;
            *(undefined4 *)(unsigned)(ar4 + 100) = 0x3f000000;
          }
          else {
            (*(undefined4 *)(unsigned)(unsigned)0x8c437ce4) = (float)in_xd0;
            (*(undefined4 *)(unsigned)(unsigned)0x8c437ce8) = F32HI(in_xd0);
            *(undefined8 *)(unsigned)(ar4 + 0x68) = 0x4248000040400000;
            *(undefined8 *)(unsigned)(ar4 + 0x5c) = 0x3f0000003f19999a;
            *(undefined8 *)(unsigned)(ar4 + 0x60) = 0x3f0000003f19999a;
            *(undefined8 *)(unsigned)(ar4 + 100) = 0x1363f000000;
          }
          *(undefined4 *)(unsigned)(ar4 + 0x70) = 1;
          *(undefined4 *)(unsigned)(ar4 + 0x6e44) = 0x136;
          *(int *)(unsigned)(ar4 + 0x74) = (*(undefined4 *)(unsigned)(unsigned)0x8c437cf8);
        }
      }
    }
    uVar1 = (vsp = ((unsigned long)(fr0_ - 4)), get_field_4_0d92a8(ar4 + 0x78,ar5_00,ar6,ar7));
    if (((*(uint *)(unsigned)(ar4 + 0x54) <= (uint)(int)(short)uVar1) && (*(int *)(unsigned)(ar4 + 0x70) == 0)) &&
       (*(int *)(unsigned)(ar4 + 0x6e44) == 0)) {
      *(undefined4 *)(unsigned)(ar4 + 0x58) = 5;
    }
    break;
  case 5:
    iVar2 = *(int *)(unsigned)(ar4 + 0x6e28);
    *(int *)(unsigned)(ar4 + 0x6e28) = iVar2 + 10;
    if (0xbae < iVar2 + 10) {
      *(undefined4 *)(unsigned)(ar4 + 0x6e28) = 0xbae;
      uVar1 = *(undefined4 *)(unsigned)(ar4 + 0x6e24);
      (vsp = ((unsigned long)(fr0_ - 4)), pack_release_entry_handle(0x8c2b59d0,uVar1,ar6,ar7));
      *(undefined4 *)(unsigned)(ar4 + 0x6e24) = 0xffffffff;
      (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c0d92a0(ar4 + 0x78,uVar1,ar6,ar7));
      *(undefined4 *)(unsigned)(ar4 + 0x58) = 6;
    }
    break;
  case 6:
    if (cVar8 == '\0') {
      dVar4 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c437cf0),*(undefined4 *)(unsigned)(ar4 + 0x68));
    }
    else {
      in_xd0 = *(undefined8 *)(unsigned)(ar4 + 0x68);
      dVar4 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c437cf4),(*(undefined4 *)(unsigned)(unsigned)0x8c437cf0));
    }
    if (cVar7 == '\0') {
      fVar3 = F32LO(dVar4) + F32HI(dVar4);
    }
    else {
      fVar3 = SUB84(dVar4 + dVar4,0);
    }
    if (cVar8 == '\0') {
      *(float *)(unsigned)(ar4 + 0x68) = fVar3;
      dVar4 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c437cf4),*(undefined4 *)(unsigned)(ar4 + 0x6c));
    }
    else {
      *(undefined8 *)(unsigned)(ar4 + 0x68) = in_xd0;
      in_xd0 = *(undefined8 *)(unsigned)(ar4 + 0x6c);
      dVar4 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c437cf8),(*(undefined4 *)(unsigned)(unsigned)0x8c437cf4));
    }
    if (cVar7 == '\0') {
      fVar3 = F32LO(dVar4) + F32HI(dVar4);
    }
    else {
      fVar3 = SUB84(dVar4 + dVar4,0);
    }
    if (cVar8 == '\0') {
      *(float *)(unsigned)(ar4 + 0x6c) = fVar3;
      fVar3 = *(float *)(unsigned)(ar4 + 0x68);
      fVar5 = (*(undefined4 *)(unsigned)(unsigned)0x8c437cc4);
    }
    else {
      *(undefined8 *)(unsigned)(ar4 + 0x6c) = in_xd0;
      in_xd0 = *(undefined8 *)(unsigned)(ar4 + 0x68);
      fVar3 = (*(undefined4 *)(unsigned)(unsigned)0x8c437cc4);
      fVar5 = (*(undefined4 *)(unsigned)(unsigned)0x8c437cc8);
    }
    if (cVar7 != '\0' || fVar5 <= fVar3) {
      if (cVar8 == '\0') {
        *(float *)(unsigned)(ar4 + 0x68) = (*(undefined4 *)(unsigned)(unsigned)0x8c437cc4);
      }
      else {
        *(ulonglong *)(unsigned)(ar4 + 0x68) = CONCAT44((*(undefined4 *)(unsigned)(unsigned)0x8c437cc8),(*(undefined4 *)(unsigned)(unsigned)0x8c437cc4));
      }
    }
    if (cVar8 == '\0') {
      fVar3 = *(float *)(unsigned)(ar4 + 0x6c);
      fVar5 = (*(undefined4 *)(unsigned)(unsigned)0x8c437cc8);
    }
    else {
      in_xd0 = *(undefined8 *)(unsigned)(ar4 + 0x6c);
      fVar3 = (*(undefined4 *)(unsigned)(unsigned)0x8c437cc8);
      fVar5 = (*(float *)(unsigned)0x8c437ccc);
    }
    if (cVar7 != '\0' || fVar5 <= fVar3) {
      if (cVar8 == '\0') {
        *(float *)(unsigned)(ar4 + 0x6c) = (*(undefined4 *)(unsigned)(unsigned)0x8c437cc8);
      }
      else {
        *(ulonglong *)(unsigned)(ar4 + 0x6c) = CONCAT44((*(float *)(unsigned)0x8c437ccc),(*(undefined4 *)(unsigned)(unsigned)0x8c437cc8));
      }
    }
    if (cVar8 == '\0') {
      fVar3 = *(float *)(unsigned)(ar4 + 0x68);
      fVar5 = (*(undefined4 *)(unsigned)(unsigned)0x8c437cc4);
    }
    else {
      in_xd0 = *(undefined8 *)(unsigned)(ar4 + 0x68);
      fVar3 = (*(undefined4 *)(unsigned)(unsigned)0x8c437cc4);
      fVar5 = (*(undefined4 *)(unsigned)(unsigned)0x8c437cc8);
    }
    if (fVar3 == fVar5) {
      if (cVar8 == '\0') {
        fVar3 = *(float *)(unsigned)(ar4 + 0x6c);
        fVar5 = (*(undefined4 *)(unsigned)(unsigned)0x8c437cc8);
      }
      else {
        in_xd0 = *(undefined8 *)(unsigned)(ar4 + 0x6c);
        fVar3 = (*(undefined4 *)(unsigned)(unsigned)0x8c437cc8);
        fVar5 = (*(float *)(unsigned)0x8c437ccc);
      }
      if (fVar3 == fVar5) {
        *(undefined4 *)(unsigned)(ar4 + 0x58) = 0;
      }
    }
  }
  if (*(int *)(unsigned)(ar4 + 0x70) == 1) {
    if (cVar8 == '\0') {
      fVar3 = *(float *)(unsigned)(ar4 + 0x68);
      puVar6 = (undefined1 *)(unsigned)0x3e4ccccd;
    }
    else {
      in_xd0 = *(undefined8 *)(unsigned)(ar4 + 0x68);
      fVar3 = 0.2;
      puVar6 = ((undefined1 *)(unsigned)0x8c437cdc);
    }
    if (cVar7 == '\0' && (float)(uint)puVar6 < fVar3) {
      if (cVar8 == '\0') {
        dVar4 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c437ce8),*(undefined4 *)(unsigned)(ar4 + 0x68));
      }
      else {
        in_xd0 = *(undefined8 *)(unsigned)(ar4 + 0x68);
        dVar4 = CONCAT44D((*(uint *)(unsigned)0x8c437cec),(*(undefined4 *)(unsigned)(unsigned)0x8c437ce8));
      }
      if (cVar7 == '\0') {
        fVar3 = F32LO(dVar4) + F32HI(dVar4);
      }
      else {
        fVar3 = SUB84(dVar4 + dVar4,0);
      }
      if (cVar8 == '\0') {
        *(float *)(unsigned)(ar4 + 0x68) = fVar3;
        dVar4 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c437cdc),*(undefined4 *)(unsigned)(ar4 + 0x5c));
      }
      else {
        *(undefined8 *)(unsigned)(ar4 + 0x68) = in_xd0;
        in_xd0 = *(undefined8 *)(unsigned)(ar4 + 0x5c);
        dVar4 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c437ce0),(*(undefined4 *)(unsigned)(unsigned)0x8c437cdc));
      }
      if (cVar7 == '\0') {
        fVar3 = F32LO(dVar4) + F32HI(dVar4);
      }
      else {
        fVar3 = SUB84(dVar4 + dVar4,0);
      }
      if (cVar8 == '\0') {
        *(float *)(unsigned)(ar4 + 0x5c) = fVar3;
        dVar4 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c437ce0),*(undefined4 *)(unsigned)(ar4 + 0x60));
      }
      else {
        *(undefined8 *)(unsigned)(ar4 + 0x5c) = in_xd0;
        in_xd0 = *(undefined8 *)(unsigned)(ar4 + 0x60);
        dVar4 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c437ce4),(*(undefined4 *)(unsigned)(unsigned)0x8c437ce0));
      }
      if (cVar7 == '\0') {
        fVar3 = F32LO(dVar4) + F32HI(dVar4);
      }
      else {
        fVar3 = SUB84(dVar4 + dVar4,0);
      }
      if (cVar8 == '\0') {
        *(float *)(unsigned)(ar4 + 0x60) = fVar3;
        dVar4 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c437ce4),*(undefined4 *)(unsigned)(ar4 + 100));
      }
      else {
        *(undefined8 *)(unsigned)(ar4 + 0x60) = in_xd0;
        in_xd0 = *(undefined8 *)(unsigned)(ar4 + 100);
        dVar4 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c437ce8),(*(undefined4 *)(unsigned)(unsigned)0x8c437ce4));
      }
      if (cVar7 == '\0') {
        fVar3 = F32LO(dVar4) + F32HI(dVar4);
      }
      else {
        fVar3 = SUB84(dVar4 + dVar4,0);
      }
      if (cVar8 == '\0') {
        *(float *)(unsigned)(ar4 + 100) = fVar3;
        fVar3 = *(float *)(unsigned)(ar4 + 0x68);
        puVar6 = (undefined1 *)(unsigned)0x3e4ccccd;
      }
      else {
        *(undefined8 *)(unsigned)(ar4 + 100) = in_xd0;
        fVar3 = 0.2;
        puVar6 = ((undefined1 *)(unsigned)0x8c437cdc);
      }
      if (cVar7 == '\0' && fVar3 < (float)(uint)puVar6) {
        if (cVar8 == '\0') {
          *(undefined4 *)(unsigned)(ar4 + 0x68) = 0x3e4ccccd;
          *(undefined4 *)(unsigned)(ar4 + 0x5c) = (*(undefined4 *)(unsigned)(unsigned)0x8c437cb8);
          *(undefined4 *)(unsigned)(ar4 + 0x60) = (*(undefined4 *)(unsigned)(unsigned)0x8c437cbc);
          *(undefined4 *)(unsigned)(ar4 + 100) = (*(undefined4 *)(unsigned)(unsigned)0x8c437cc0);
        }
        else {
          *(undefined8 *)(unsigned)(ar4 + 0x68) = 0x8c437cdc3e4ccccd;
          *(ulonglong *)(unsigned)(ar4 + 0x5c) = CONCAT44((*(undefined4 *)(unsigned)(unsigned)0x8c437cbc),(*(undefined4 *)(unsigned)(unsigned)0x8c437cb8));
          *(ulonglong *)(unsigned)(ar4 + 0x60) = CONCAT44((*(undefined4 *)(unsigned)(unsigned)0x8c437cc0),(*(undefined4 *)(unsigned)(unsigned)0x8c437cbc));
          *(ulonglong *)(unsigned)(ar4 + 100) = CONCAT44((*(undefined4 *)(unsigned)(unsigned)0x8c437cc4),(*(undefined4 *)(unsigned)(unsigned)0x8c437cc0));
        }
        *(undefined4 *)(unsigned)(ar4 + 0x70) = 0;
      }
    }
  }
  if ((*(int *)(unsigned)(ar4 + 0x6e44) != 0) &&
     (*(int *)(unsigned)(ar4 + 0x6e44) = *(int *)(unsigned)(ar4 + 0x6e44) + -1, *(int *)(unsigned)(ar4 + 0x6e44) < 0)) {
    *(undefined4 *)(unsigned)(ar4 + 0x6e44) = 0;
  }
  if (0 < *(int *)(unsigned)(ar4 + 0x74)) {
    *(int *)(unsigned)(ar4 + 0x74) = *(int *)(unsigned)(ar4 + 0x74) + -1;
  }
  return *(undefined4 *)(unsigned)(ar4 + 0x58);
}

__asm__(".globl _FUN_8c0d8bf0\n.set _FUN_8c0d8bf0, _FUN_8c0d8bf0_def\n");
//@unit 8c0d92a0
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
undefined4 FUN_8c0d92a0_def(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0d92a0";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  *ar4 = 3;
  return 3;
}

__asm__(".globl _FUN_8c0d92a0\n.set _FUN_8c0d92a0, _FUN_8c0d92a0_def\n");
//@unit 8c0d92a8
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
undefined4 get_field_4_0d92a8_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "get_field_4_0d92a8";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return *(undefined4 *)(unsigned)(ar4 + 4);
}

__asm__(".globl _get_field_4_0d92a8\n.set _get_field_4_0d92a8, _get_field_4_0d92a8_def\n");
//@unit 8c0d92b0
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
undefined4 FUN_8c0d92b0_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0d92b0";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 4; for (int i_ = 0; i_ < 4; i_++) z_[i_] = 0; }
  int iVar1;
  
  *(undefined4 *)(unsigned)(ar4 + 4) = 0;
  (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c0d7dcc(ar4 + 0x78,ar5,ar6,ar7));
  *(undefined4 *)(unsigned)(ar4 + 0x58) = 0;
  *(undefined4 *)(unsigned)(ar4 + 0x54) = 0;
  *(undefined4 *)(unsigned)(ar4 + 0x50) = 0;
  *(undefined4 *)(unsigned)(ar4 + 0x70) = 0;
  for (iVar1 = 0; iVar1 < 2; iVar1 = iVar1 + 1) {
    *(undefined4 *)(unsigned)(0x6e24 + iVar1 * 0x18 + ar4) = 0xffffffff;
  }
  return 2;
}

__asm__(".globl _FUN_8c0d92b0\n.set _FUN_8c0d92b0, _FUN_8c0d92b0_def\n");
//@unit 8c0d931c
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
undefined8 * FUN_8c0d931c_def(undefined8 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0d931c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  code *ar5_00;
  code *ar6_00;
  undefined4 ar7_00;
  char cVar1;
  
  cVar1 = '\0';
  (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_zero(ar4,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c015224(ar4 + 4,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c015ab8(ar4 + 5,ar5,ar6,ar7));
  ar7_00 = 4;
  ar6_00 = ((void *)0x8c0247b0);
  ar5_00 = ((void *)0x8c015b94);
  ({ unsigned long t0_ = (unsigned long)(7); *(unsigned *)((((unsigned long)(fr0_ - 0)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 0)) - 8); FUN_8c010120((undefined4 *)(unsigned)((int)ar4 + 0x2c),((void *)0x8c015b94),((void *)0x8c0247b0),4); });
  if (cVar1 == '\0') {
    *(undefined4 *)(unsigned)ar4 = 0x43a6299a;
    *(undefined4 *)(unsigned)((int)ar4 + 4) = 0x44a05ccd;
    *(undefined4 *)(unsigned)(ar4 + 1) = 0x43557405;
  }
  else {
    *ar4 = 0x44a05ccd43a6299a;
    *(undefined8 *)(unsigned)((int)ar4 + 4) = 0x4355740544a05ccd;
    ar4[1] = 0x8c0d98f843557405;
  }
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0d98f8(ar4,ar5_00,ar6_00,ar7_00));
  return ar4;
}

__asm__(".globl _FUN_8c0d931c\n.set _FUN_8c0d931c, _FUN_8c0d931c_def\n");
//@unit 8c0d93a8
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
undefined4 s_GRAPHICS_ENV_0d93b0_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "s_GRAPHICS_ENV_0d93b0";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 80; for (int i_ = 0; i_ < 80; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 ar7_00;
  char *ar5_00;
  char *pcVar2;
  undefined4 *puVar3;
  int **ar7_01;
  uint uVar4;
  
  ((undefined4 *)(fr0_ - 0x18))[0] = 0;
  (*(unsigned *)(fr0_ - 0x1c) = (unsigned)(unsigned long)((int *)(unsigned)0x0));
  (*(undefined4 *)(fr0_ - 0x20)) = 0;
  puVar3 = ((undefined4 *)(fr0_ - 0x18));
  pcVar2 = ((undefined1 *)(unsigned)0x8c13f8cb);
  iVar1 = (vsp = ((unsigned long)(fr0_ - 80)), FUN_8c0209fc(ar5,((undefined1 *)(unsigned)0x8c13fc74),((undefined1 *)(unsigned)0x8c13f8cb),puVar3));
  if (iVar1 == 0) {
    (vsp = ((unsigned long)(fr0_ - 80)), report_error_message(((undefined1 *)(unsigned)0x8c13fc74),((undefined1 *)(unsigned)0x8c13fc81),0,2));
  }
  else {
    ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x50))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 80)); FUN_8c015ad4(ar4 + 0x28,((undefined4 *)(fr0_ - 0x18))[0],pcVar2,puVar3); });
  }
  ar7_01 = ((int * *)(fr0_ - 0x1c));
  pcVar2 = ((undefined1 *)(unsigned)0x8c13f8cb);
  iVar1 = (vsp = ((unsigned long)(fr0_ - 80)), FUN_8c020af4(ar5,((undefined1 *)(unsigned)0x8c13fc74),((undefined1 *)(unsigned)0x8c13f8cb),ar7_01));
  if (iVar1 == 0) {
    ar7_01 = (int **)(unsigned)0x2;
    pcVar2 = (char *)(unsigned)0x0;
    ar5_00 = ((undefined1 *)(unsigned)0x8c13fcac);
    (vsp = ((unsigned long)(fr0_ - 80)), report_error_message(((undefined1 *)(unsigned)0x8c13fc74),((undefined1 *)(unsigned)0x8c13fcac),0,2));
  }
  else {
    ar5_00 = (char *)(unsigned)((int *)(unsigned long)*(unsigned *)(fr0_ - 0x1c));
    (vsp = ((unsigned long)(fr0_ - 80)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(ar4 + 0x20) + 8))))((int *)(unsigned)(ar4 + 0x20),((int *)(unsigned long)*(unsigned *)(fr0_ - 0x1c)),pcVar2,ar7_01));
  }
  (*(unsigned *)(fr0_ - 0x1c) = (unsigned)(unsigned long)((int *)(unsigned)(vsp = ((unsigned long)(fr0_ - 80)), get_field_4_0253e4(ar4 + 0x20,ar5_00,pcVar2,ar7_01))));
  for (uVar4 = 0; uVar4 < (uint)((int *)(unsigned long)*(unsigned *)(fr0_ - 0x1c))[1]; uVar4 = uVar4 + 1) {
    iVar1 = uVar4 * 0xc + *((int *)(unsigned long)*(unsigned *)(fr0_ - 0x1c));
    *(uint *)(unsigned)(iVar1 + 4) = *(uint *)(unsigned)(iVar1 + 4) | 0x80000000;
  }
  ar7_00 = (vsp = ((unsigned long)(fr0_ - 80)), get_field_4_0253e4(ar4 + 0x20,ar5_00,pcVar2,ar7_01));
  iVar1 = (vsp = ((unsigned long)(fr0_ - 80)), FUN_8c020ef0(ar5,((undefined1 *)(unsigned)0x8c13fcd7),((undefined1 *)(unsigned)0x8c13f8cb),ar7_00));
  if (iVar1 == 0) {
    report_error_message
              (((undefined1 *)(unsigned)0x8c13fcdc),((undefined1 *)(unsigned)0x8c13fcfa),0,2);
  }
  iVar1 = (vsp = ((unsigned long)(fr0_ - 80)), FUN_8c020ddc(ar5,((undefined1 *)(unsigned)0x8c13fd11),((undefined1 *)(unsigned)0x8c13f8cb),ar4));
  if (iVar1 == 0) {
    (vsp = ((unsigned long)(fr0_ - 80)), report_error_message(((undefined1 *)(unsigned)0x8c13fd11),((undefined1 *)(unsigned)0x8c13fd20),0,2));
  }
  for (uVar4 = 0; uVar4 < 7; uVar4 = uVar4 + 1) {
    puVar3 = &(*(undefined4 *)(fr0_ - 0x20));
    pcVar2 = ((undefined1 *)(unsigned)0x8c13f8cb);
    iVar1 = (vsp = ((unsigned long)(fr0_ - 80)), FUN_8c020bec(ar5,(&(*(undefined4 *)(unsigned)(unsigned)0x8c13f394))[uVar4],((undefined1 *)(unsigned)0x8c13f8cb),puVar3))
    ;
    if (iVar1 == 0) {
      report_error_message
                ((&(*(undefined4 *)(unsigned)(unsigned)0x8c13f394))[uVar4],((undefined1 *)(unsigned)0x8c13fd54),0,2);
    }
    else {
      ({ unsigned long ri0_ = (unsigned long)(uVar4); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 80)); FUN_8c015bb0(ar4 + uVar4 * 4 + 0x2c,(*(undefined4 *)(fr0_ - 0x20)),pcVar2,puVar3); });
    }
  }
  return 7;
}

__asm__(".globl _s_GRAPHICS_ENV_0d93b0\n.set _s_GRAPHICS_ENV_0d93b0, _s_GRAPHICS_ENV_0d93b0_def\n");
//@unit 8c0d9600
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
undefined4 * FUN_8c0d9600_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0d9600";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 4; for (int i_ = 0; i_ < 4; i_++) z_[i_] = 0; }
  undefined4 *puVar1;
  int iVar2;
  float fVar3;
  double dVar4;
  undefined4 in_fr3 = 0;
  double dVar5;
  bool bVar6;
  char cVar7;
  char cVar8;
  
  cVar8 = '\0';
  cVar7 = '\0';
  fVar3 = *(float *)(unsigned)(ar4 + 0x14) + 1.0;
  *(float *)(unsigned)(ar4 + 0x14) = fVar3;
  iVar2 = *(int *)(unsigned)(ar4 + 0x10);
  puVar1 = (undefined4 *)(unsigned)0x8;
  if ((iVar2 < 9) && (-1 < iVar2)) {
    puVar1 = (undefined4 *)(unsigned)(&(*(undefined1 *)(unsigned)0x8c0d9634))[iVar2];
                    
    switch(iVar2) {
    default:
      puVar1 = (undefined4 *)(unsigned)(vsp = ((unsigned long)(fr0_ - 4)), FUN_8c031588(ar4 + *(int *)(unsigned)(ar4 + 0x10) * 4 + 0x2c,ar5,ar6,ar7));
      if (cVar8 == '\0') {
        dVar5 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 0x14),in_fr3);
      }
      else {
        dVar5 = *(double *)(unsigned)(ar4 + 0x14);
      }
      fVar3 = (float)(int)puVar1;
      dVar4 = (double)(ulonglong)(uint)fVar3;
      if (cVar7 == '\0' && fVar3 < 0.0) {
        puVar1 = ((undefined4 *)(unsigned)0x8c0d9718);
        if (cVar8 == '\0') {
          dVar4 = CONCAT44D(0x4f800000,fVar3);
        }
        else {
          dVar4 = -1.2916629790996152e-250;
        }
        if (cVar7 == '\0') {
          fVar3 = F32HI(dVar4);
          dVar4 = CONCAT44D(fVar3,F32LO(dVar4) + fVar3);
        }
        else {
          dVar4 = dVar4 + dVar4;
        }
      }
      if (cVar7 == '\0') {
        bVar6 = F32HI(dVar5) < SUB84(dVar4,0);
      }
      else {
        bVar6 = dVar5 < dVar4;
      }
      if (!bVar6) {
        if (cVar8 == '\0') {
          *(undefined4 *)(unsigned)(ar4 + 0x14) = 0;
        }
        else {
          *(ulonglong *)(unsigned)(ar4 + 0x14) = D2U(dVar4) & 0xffffffff;
        }
        *(char *)(unsigned)(ar4 + 0x18) = *(char *)(unsigned)(ar4 + 0x18) + -1;
        puVar1 = (undefined4 *)(unsigned)(uint)*(byte *)(unsigned)(ar4 + 0x18);
        if (puVar1 == (undefined4 *)(unsigned)0x0) {
          puVar1 = (undefined4 *)(unsigned)0x8;
          *(undefined4 *)(unsigned)(ar4 + 0x10) = 8;
        }
      }
      break;
    case 6:
      puVar1 = (undefined4 *)(unsigned)(vsp = ((unsigned long)(fr0_ - 4)), FUN_8c031588(ar4 + *(int *)(unsigned)(ar4 + 0x10) * 4 + 0x2c,ar5,ar6,ar7));
      if (cVar8 == '\0') {
        dVar5 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 0x14),in_fr3);
      }
      else {
        dVar5 = *(double *)(unsigned)(ar4 + 0x14);
      }
      fVar3 = (float)(int)puVar1;
      dVar4 = (double)(ulonglong)(uint)fVar3;
      if (cVar7 == '\0' && fVar3 < 0.0) {
        puVar1 = ((undefined4 *)(unsigned)0x8c0d9718);
        if (cVar8 == '\0') {
          dVar4 = CONCAT44D(0x4f800000,fVar3);
        }
        else {
          dVar4 = -1.2916629790996152e-250;
        }
        if (cVar7 == '\0') {
          fVar3 = F32HI(dVar4);
          dVar4 = CONCAT44D(fVar3,F32LO(dVar4) + fVar3);
        }
        else {
          dVar4 = dVar4 + dVar4;
        }
      }
      if (cVar7 == '\0') {
        bVar6 = F32HI(dVar5) < SUB84(dVar4,0);
      }
      else {
        bVar6 = dVar5 < dVar4;
      }
      if (!bVar6) {
        puVar1 = (undefined4 *)(unsigned)0x8;
        *(undefined4 *)(unsigned)(ar4 + 0x10) = 8;
        if (cVar8 == '\0') {
          *(undefined4 *)(unsigned)(ar4 + 0x14) = 0;
        }
        else {
          *(ulonglong *)(unsigned)(ar4 + 0x14) = D2U(dVar4) & 0xffffffff;
        }
      }
      break;
    case 7:
      break;
    case 8:
      puVar1 = (undefined4 *)(unsigned)(vsp = ((unsigned long)(fr0_ - 4)), FUN_8c0d97ec(ar4,ar5,ar6,ar7));
      if (cVar8 == '\0') {
        *(undefined4 *)(unsigned)(ar4 + 0x14) = 0;
      }
      else {
        *(ulonglong *)(unsigned)(ar4 + 0x14) = (ulonglong)(uint)fVar3;
      }
    }
  }
  return puVar1;
}

__asm__(".globl _FUN_8c0d9600\n.set _FUN_8c0d9600, _FUN_8c0d9600_def\n");
//@unit 8c0d9720
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
undefined4 FUN_8c0d9720_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0d9720";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 12; for (int i_ = 0; i_ < 12; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  (vsp = ((unsigned long)(fr0_ - 12)), FUN_8c01538c(ar4 + 0x20,ar5,ar6,ar7));
  uVar1 = 0;
  ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0xc))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 12)); FUN_8c256328(0,ar5,ar6,ar7); });
  (vsp = ((unsigned long)(fr0_ - 12)), FUN_8c019058(uVar1,ar5,ar6,ar7));
  if (*(int *)(unsigned)(ar4 + 0x10) == 8) {
    (vsp = ((unsigned long)(fr0_ - 12)), FUN_8c015adc(ar4 + 0x28,ar5,ar6,ar7));
  }
  else {
    ar5 = ar4 + *(int *)(unsigned)(ar4 + 0x10) * 4 + 0x2c;
    (vsp = ((unsigned long)(fr0_ - 12)), FUN_8c015b54(ar4 + 0x28,ar5,ar6,ar7));
  }
  uVar1 = (vsp = ((unsigned long)(fr0_ - 12)), FUN_8c256210(1,ar5,ar6,ar7));
  return uVar1;
}

__asm__(".globl _FUN_8c0d9720\n.set _FUN_8c0d9720, _FUN_8c0d9720_def\n");
//@unit 8c0d97b4
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
undefined4 s_Failed_to_set_texture_wrap_0d97b4_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "s_Failed_to_set_texture_wrap_0d97b4";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), s_Failed_to_set_texture_s_015252(ar4 + 0x20,ar5,ar6,ar7));
  return uVar1;
}

__asm__(".globl _s_Failed_to_set_texture_wrap_0d97b4\n.set _s_Failed_to_set_texture_wrap_0d97b4, _s_Failed_to_set_texture_wrap_0d97b4_def\n");
//@unit 8c0d97d0
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
undefined4 s_Failed_wrap_0d97d0_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "s_Failed_wrap_0d97d0";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), s_Failed_s_015312(ar4 + 0x20,ar5,ar6,ar7));
  return uVar1;
}

__asm__(".globl _s_Failed_wrap_0d97d0\n.set _s_Failed_wrap_0d97d0, _s_Failed_wrap_0d97d0_def\n");
//@unit 8c0d97ec
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
int FUN_8c0d97ec_def(int ar4,undefined4 *ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0d97ec";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 ar5_00;
  uint extraout_fr1 = 0;
  char cVar4;
  
  cVar4 = '\0';
  uVar3 = *(undefined4 *)(unsigned)(ar4 + 0x1c);
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), libgcc_divide_helper_0103d0(*ar5,uVar3,ar6,ar7));
  if (iVar1 == 0) {
    uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), get_field_a0_035724(ar5,uVar3,ar6,ar7));
    if ((char)uVar2 == '\x02') {
      *(undefined4 *)(unsigned)(ar4 + 0x10) = 0;
    }
    else {
      *(undefined4 *)(unsigned)(ar4 + 0x10) = 1;
    }
    if (cVar4 == '\0') {
      *(undefined4 *)(unsigned)(ar4 + 0x14) = 0;
    }
    else {
      *(ulonglong *)(unsigned)(ar4 + 0x14) = (ulonglong)extraout_fr1;
    }
    uVar3 = (vsp = ((unsigned long)(fr0_ - 0)), rand(ar5,uVar3,ar6,ar7));
    ar5_00 = 3;
    uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), libgcc_divide_helper_01031c(uVar3,3,ar6,ar7));
    *(char *)(unsigned)(ar4 + 0x18) = (char)uVar2;
    *(char *)(unsigned)(ar4 + 0x18) = *(char *)(unsigned)(ar4 + 0x18) + '\x01';
    uVar3 = (vsp = ((unsigned long)(fr0_ - 0)), rand(uVar3,ar5_00,ar6,ar7));
    iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), libgcc_divide_helper_01031c(uVar3,500,ar6,ar7));
    *(int *)(unsigned)(ar4 + 0x1c) = iVar1;
  }
  return iVar1;
}

__asm__(".globl _FUN_8c0d97ec\n.set _FUN_8c0d97ec, _FUN_8c0d97ec_def\n");
//@unit 8c0d9898
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
int FUN_8c0d9898_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0d9898";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  float in_fr4 = 0;
  
  if (((*(int *)(unsigned)(ar4 + 0x10) == 8) || (*(int *)(unsigned)(ar4 + 0x10) == 0)) ||
     (iVar1 = *(int *)(unsigned)(ar4 + 0x10), iVar1 == 1)) {
    if (in_fr4 <= 5.0) {
      *(undefined4 *)(unsigned)(ar4 + 0x10) = 4;
    }
    else {
      *(undefined4 *)(unsigned)(ar4 + 0x10) = 3;
    }
    *(undefined4 *)(unsigned)(ar4 + 0x14) = 0;
    iVar1 = 0x18;
    *(undefined1 *)(unsigned)(ar4 + 0x18) = 1;
  }
  return iVar1;
}

__asm__(".globl _FUN_8c0d9898\n.set _FUN_8c0d9898, _FUN_8c0d9898_def\n");
//@unit 8c0d98d4
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
undefined4 FUN_8c0d98d4_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0d98d4";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  *(undefined4 *)(unsigned)(ar4 + 0x10) = 6;
  *(undefined4 *)(unsigned)(ar4 + 0x14) = 0;
  return 6;
}

__asm__(".globl _FUN_8c0d98d4\n.set _FUN_8c0d98d4, _FUN_8c0d98d4_def\n");
//@unit 8c0d98e4
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
undefined4 FUN_8c0d98e4_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0d98e4";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  *(undefined4 *)(unsigned)(ar4 + 0x10) = 0;
  *(undefined4 *)(unsigned)(ar4 + 0x14) = 0;
  return 0;
}

__asm__(".globl _FUN_8c0d98e4\n.set _FUN_8c0d98e4, _FUN_8c0d98e4_def\n");
//@unit 8c0d98f4
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
undefined4 noop_0d98f4_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "noop_0d98f4";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 in_r0 = (undefined4)(unsigned long)vin0;
  
  return in_r0 = 0;
}

__asm__(".globl _noop_0d98f4\n.set _noop_0d98f4, _noop_0d98f4_def\n");
//@unit 8c0d98f8
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
undefined4 FUN_8c0d98f8_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0d98f8";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  *(undefined1 *)(unsigned)(ar4 + 0x18) = 0;
  *(undefined4 *)(unsigned)(ar4 + 0x10) = 8;
  *(undefined4 *)(unsigned)(ar4 + 0x14) = 0;
  return 8;
}

__asm__(".globl _FUN_8c0d98f8\n.set _FUN_8c0d98f8, _FUN_8c0d98f8_def\n");
//@unit 8c0d990c
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
undefined4 s_GRAPHICS_ENV_0d9912_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "s_GRAPHICS_ENV_0d9912";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  uint uVar1;
  
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c020a70))))
            (ar5,(&(*(undefined1 *)(unsigned)0x8c13f7c0)) + 0x4b4,
             (&(*(undefined1 *)(unsigned)0x8c13f7c0)) + 0x10b,ar4));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c020b68))))
            (ar5,(&(*(undefined1 *)(unsigned)0x8c13f7c0)) + 0x4b4,
             (&(*(undefined1 *)(unsigned)0x8c13f7c0)) + 0x10b,ar4));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c020e48))))
            (ar5,(&(*(undefined1 *)(unsigned)0x8c13f7c0)) + 0x551,
             (&(*(undefined1 *)(unsigned)0x8c13f7c0)) + 0x10b,ar4));
  for (uVar1 = 0; uVar1 < 7; uVar1 = uVar1 + 1) {
    (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c020c60))))
              (ar5,*(undefined4 *)(unsigned)((&(*(undefined1 *)(unsigned)0x8c13f394)) + uVar1 * 4),
               (&(*(undefined1 *)(unsigned)0x8c13f7c0)) + 0x10b,ar4));
  }
  return 7;
}

__asm__(".globl _s_GRAPHICS_ENV_0d9912\n.set _s_GRAPHICS_ENV_0d9912, _s_GRAPHICS_ENV_0d9912_def\n");
//@unit 8c0d99b8
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
undefined4 * FUN_8c0d99b8_def(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0d99b8";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  *ar4 = 0x3f800000;
  ar4[2] = 0x3f800000;
  ar4[1] = 0x3f800000;
  ar4[3] = 0;
  return ar4;
}

__asm__(".globl _FUN_8c0d99b8\n.set _FUN_8c0d99b8, _FUN_8c0d99b8_def\n");
//@unit 8c0d99e8
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
undefined4 * FUN_8c0d99e8_def(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0d99e8";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 ar6_00;
  
  *ar4 = (&(*(undefined1 *)(unsigned)0x8c12bce0));
  ar6_00 = ar6;
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c015224(ar4 + 1,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c015ab8(ar4 + 3,ar5,ar6_00,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c015224(ar4 + 10,ar5,ar6_00,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c015ab8(ar4 + 0xc,ar5,ar6_00,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c016410(ar4 + 0xd,ar5,ar6_00,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c102748((int)ar4 + 0x80,ar5,ar6_00,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c1026ec((int)ar4 + 0x8c,ar5,ar6_00,ar7));
  ({ unsigned long t0_ = (unsigned long)((&(*(undefined1 *)(unsigned)0x8c13f7c0)) + 0x5a7); *(unsigned *)((((unsigned long)(fr0_ - 0)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 0)) - 8); FUN_8c014334(ar4 + 4,ar5,ar6_00,ar7); });
  ar4[9] = ar6;
  return ar4;
}

__asm__(".globl _FUN_8c0d99e8\n.set _FUN_8c0d99e8, _FUN_8c0d99e8_def\n");
//@unit 8c0d9a98
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
undefined4 * Class_12bce0_m0_0d9a98_def(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "Class_12bce0_m0_0d9a98";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 16; for (int i_ = 0; i_ < 16; i_++) z_[i_] = 0; }
  undefined4 ar5_00;
  undefined4 ain0;
  
  ain0 = CONCAT22((short)((uint)(*(undefined4 *)(fr0_ - 0xc)) >> 0x10),(undefined2)ar5);
  if (ar4 != (undefined4 *)(unsigned)0x0) {
    *ar4 = ((undefined1 *)(unsigned)0x8c12bce0);
    (vsp = ((unsigned long)(fr0_ - 16)), free_if_nonnull_wrap_10270c(ar4 + 0x23,0xffffffff,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 16)), free_if_nonnull_wrap_102790(ar4 + 0x20,0xffffffff,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 16)), free_if_nonnull_wrap_016bfc(ar4 + 0xc,0xffffffff,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 16)), free_if_nonnull_wrap_0153e4(ar4 + 10,0xffffffff,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 16)), free_if_nonnull_wrap_016bfc(ar4 + 3,0xffffffff,ar6,ar7));
    ar5_00 = 0xffffffff;
    (vsp = ((unsigned long)(fr0_ - 16)), free_if_nonnull_wrap_0153e4(ar4 + 1,0xffffffff,ar6,ar7));
    if (0 < (short)ain0) {
      ({ unsigned long ri0_ = (unsigned long)(ain0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 16)); free_if_nonnull(ar4,ar5_00,ar6,ar7); });
    }
  }
  return ar4;
}

__asm__(".globl _Class_12bce0_m0_0d9a98\n.set _Class_12bce0_m0_0d9a98, _Class_12bce0_m0_0d9a98_def\n");
//@unit 8c0d9b34
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
undefined4 FUN_8c0d9b34_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0d9b34";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c01538c(ar4 + 0x28,ar5,ar6,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c015adc(ar4 + 0x30,ar5,ar6,ar7));
  return uVar1;
}

__asm__(".globl _FUN_8c0d9b34\n.set _FUN_8c0d9b34, _FUN_8c0d9b34_def\n");
//@unit 8c0d9b60
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
undefined4 FUN_8c0d9b60_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0d9b60";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  (vsp = ((unsigned long)(fr0_ - 0)), s_Failed_to_set_texture_s_015252(ar4 + 0x28,ar5,ar6,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c01538c(ar4 + 0x28,ar5,ar6,ar7));
  return uVar1;
}

__asm__(".globl _FUN_8c0d9b60\n.set _FUN_8c0d9b60, _FUN_8c0d9b60_def\n");
//@unit 8c0d9b8c
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
undefined4 s_Failed_wrap_0d9b8c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "s_Failed_wrap_0d9b8c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), s_Failed_s_015312(ar4 + 0x28,ar5,ar6,ar7));
  return uVar1;
}

__asm__(".globl _s_Failed_wrap_0d9b8c\n.set _s_Failed_wrap_0d9b8c, _s_Failed_wrap_0d9b8c_def\n");
//@unit 8c0d9ba8
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
undefined4 ret_const_0_0d9ba8_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "ret_const_0_0d9ba8";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return 0;
}

__asm__(".globl _ret_const_0_0d9ba8\n.set _ret_const_0_0d9ba8, _ret_const_0_0d9ba8_def\n");
//@unit 8c0d9bb0
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
undefined4 ret_const_0_0d9bb0_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "ret_const_0_0d9bb0";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return 0;
}

__asm__(".globl _ret_const_0_0d9bb0\n.set _ret_const_0_0d9bb0, _ret_const_0_0d9bb0_def\n");
//@unit 8c0d9bb8
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
undefined4 ret_const_0_0d9bb8_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "ret_const_0_0d9bb8";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return 0;
}

__asm__(".globl _ret_const_0_0d9bb8\n.set _ret_const_0_0d9bb8, _ret_const_0_0d9bb8_def\n");
//@unit 8c0d9bc0
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
undefined4 ret_const_0_0d9bc0_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "ret_const_0_0d9bc0";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return 0;
}

__asm__(".globl _ret_const_0_0d9bc0\n.set _ret_const_0_0d9bc0, _ret_const_0_0d9bc0_def\n");
//@unit 8c0d9bc8
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
undefined4 ret_const_0_0d9bc8_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "ret_const_0_0d9bc8";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return 0;
}

__asm__(".globl _ret_const_0_0d9bc8\n.set _ret_const_0_0d9bc8, _ret_const_0_0d9bc8_def\n");
//@unit 8c0d9bd0
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
undefined4 noop_0d9bd0_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "noop_0d9bd0";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 in_r0 = (undefined4)(unsigned long)vin0;
  
  return in_r0 = 0;
}

__asm__(".globl _noop_0d9bd0\n.set _noop_0d9bd0, _noop_0d9bd0_def\n");
//@unit 8c0d9bd4
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
undefined4 noop_0d9bd4_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "noop_0d9bd4";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 in_r0 = (undefined4)(unsigned long)vin0;
  
  return in_r0 = 0;
}

__asm__(".globl _noop_0d9bd4\n.set _noop_0d9bd4, _noop_0d9bd4_def\n");
//@unit 8c0d9bd8
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
undefined4 noop_0d9bd8_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "noop_0d9bd8";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 in_r0 = (undefined4)(unsigned long)vin0;
  
  return in_r0 = 0;
}

__asm__(".globl _noop_0d9bd8\n.set _noop_0d9bd8, _noop_0d9bd8_def\n");
//@unit 8c0d9bdc
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
undefined4 FUN_8c0d9bdc_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0d9bdc";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return 0x8c125864;
}

__asm__(".globl _FUN_8c0d9bdc\n.set _FUN_8c0d9bdc, _FUN_8c0d9bdc_def\n");
//@unit 8c0d9be8
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
undefined4 FUN_8c0d9be8_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0d9be8";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return 0x8c125864;
}

__asm__(".globl _FUN_8c0d9be8\n.set _FUN_8c0d9be8, _FUN_8c0d9be8_def\n");
//@unit 8c0d9bf4
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
undefined4 FUN_8c0d9bf4_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0d9bf4";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return 0x8c125864;
}

__asm__(".globl _FUN_8c0d9bf4\n.set _FUN_8c0d9bf4, _FUN_8c0d9bf4_def\n");
//@unit 8c0d9c00
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
undefined4 FUN_8c0d9c00_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0d9c00";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return 0x8c125864;
}

__asm__(".globl _FUN_8c0d9c00\n.set _FUN_8c0d9c00, _FUN_8c0d9c00_def\n");
//@unit 8c0d9c0c
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
undefined4 FUN_8c0d9c0c_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0d9c0c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return 0x8c125864;
}

__asm__(".globl _FUN_8c0d9c0c\n.set _FUN_8c0d9c0c, _FUN_8c0d9c0c_def\n");
//@unit 8c0d9c18
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
uint FUN_8c0d9c18_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0d9c18";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;
  uint * s0 = (uint *)(unsigned long)*(unsigned *)(vsp + 0);

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 8; for (int i_ = 0; i_ < 8; i_++) z_[i_] = 0; }
  
  (*(undefined4 *)(fr0_ - 0x4)) = (*(undefined4 *)(fr0_ - 0x4)) & 0xfffffffc;
  *s0 = (*(undefined4 *)(fr0_ - 0x4));
  return (*(undefined4 *)(fr0_ - 0x4));
}

__asm__(".globl _FUN_8c0d9c18\n.set _FUN_8c0d9c18, _FUN_8c0d9c18_def\n");
//@unit 8c0d9c48
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
undefined4
FUN_8c0d9c48_def(undefined4 ar4,undefined4 *ar5,undefined4 *ar6,undefined4 *ar7)

{
  ring[rp++ & 255] = "FUN_8c0d9c48";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;
  undefined4 ain0 = (undefined4)(unsigned long)vin0;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  *ar5 = 0;
  *ar6 = 0;
  *ar7 = 0;
  return ain0;
}

__asm__(".globl _FUN_8c0d9c48\n.set _FUN_8c0d9c48, _FUN_8c0d9c48_def\n");
//@unit 8c0d9c58
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
undefined4 ret_const_1_0d9c58_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "ret_const_1_0d9c58";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return 1;
}

__asm__(".globl _ret_const_1_0d9c58\n.set _ret_const_1_0d9c58, _ret_const_1_0d9c58_def\n");
//@unit 8c0d9c60
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
undefined4 FUN_8c0d9c60_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0d9c60";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c016544(ar4 + 0x34,0,ar6,ar7));
  return 1;
}

__asm__(".globl _FUN_8c0d9c60\n.set _FUN_8c0d9c60, _FUN_8c0d9c60_def\n");
//@unit 8c0d9c80
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
undefined4 * FUN_8c0d9c80_def(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0d9c80";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 4; for (int i_ = 0; i_ < 4; i_++) z_[i_] = 0; }
  code *pcVar1;
  code *pcVar2;
  undefined1 *ar6_00;
  undefined4 uVar3;
  char cVar4;
  undefined4 ain0;
  
  cVar4 = '\0';
  uVar3 = ar7;
  ain0 = ar5;
  (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c0d99e8(ar4,ar5,ar6,ar7));
  *ar4 = ((undefined1 *)(unsigned)0x8c12bb08);
  (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c0da1dc(ar4 + 0x29,ar5,ar6,uVar3));
  uVar3 = 0x3c;
  pcVar2 = ((void *)0x8c0fe250);
  pcVar1 = ((void *)0x8c0da1b0);
  ({ unsigned long t0_ = (unsigned long)(0x11); *(unsigned *)((((unsigned long)(fr0_ - 4)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 4)) - 8); FUN_8c010120(ar4 + 0xea,((void *)0x8c0da1b0),((void *)0x8c0fe250),0x3c); });
  (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c0feb0c(ar4 + 0x1e9,pcVar1,pcVar2,uVar3));
  (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c015520(ar4 + 0x277,pcVar1,pcVar2,uVar3));
  (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c019208(ar4 + 0x27a,pcVar1,pcVar2,uVar3));
  (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c0d6264(ar4 + 0x29a,pcVar1,pcVar2,uVar3));
  (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c10277c(ar4 + 0x2ea,pcVar1,pcVar2,uVar3));
  ar4[0x2ed] = ar7;
  uVar3 = 0x68;
  pcVar2 = ((void *)0x8c0f68c0);
  pcVar1 = ((void *)0x8c0f6870);
  ({ unsigned long t0_ = (unsigned long)(8); *(unsigned *)((((unsigned long)(fr0_ - 4)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 4)) - 8); FUN_8c010120(ar4 + 0x303,((void *)0x8c0f6870),((void *)0x8c0f68c0),0x68); });
  (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c0e91b8(ar4 + 0x3d3,pcVar1,pcVar2,uVar3));
  (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c0162f8(ar4 + 0x40a,pcVar1,pcVar2,uVar3));
  ar4[0x275] = 0;
  ar4[0x276] = 0;
  ar4[0x2b3] = 0;
  uVar3 = (*(undefined1 *)(unsigned)0x8c13f5b0);
  ar4[0x2ee] = (*(undefined4 *)(unsigned)(unsigned)0x8c13f5ac);
  ar4[0x2ef] = uVar3;
  ar4[0x2f0] = (*(undefined4 *)(unsigned)(unsigned)0x8c13f5b4);
  uVar3 = (*(undefined1 *)(unsigned)0x8c13f5bc);
  ar4[0x2f1] = (*(undefined4 *)(unsigned)(unsigned)0x8c13f5b8);
  ar4[0x2f2] = uVar3;
  ar4[0x2f3] = (*(undefined4 *)(unsigned)(unsigned)0x8c13f5c0);
  uVar3 = (*(undefined1 *)(unsigned)0x8c13f5c8);
  ar4[0x2f4] = (*(undefined4 *)(unsigned)(unsigned)0x8c13f5c4);
  ar4[0x2f5] = uVar3;
  ar4[0x2f6] = (*(undefined4 *)(unsigned)(unsigned)0x8c13f5cc);
  uVar3 = (*(undefined1 *)(unsigned)0x8c13f5d4);
  ar4[0x2f7] = (*(undefined4 *)(unsigned)(unsigned)0x8c13f5d0);
  ar4[0x2f8] = uVar3;
  ar4[0x2f9] = (*(undefined4 *)(unsigned)(unsigned)0x8c13f5d8);
  uVar3 = (*(undefined1 *)(unsigned)0x8c13f5e0);
  ar4[0x2fd] = (*(undefined4 *)(unsigned)(unsigned)0x8c13f5dc);
  ar4[0x2fe] = uVar3;
  ar4[0x2ff] = (*(undefined4 *)(unsigned)(unsigned)0x8c13f5e4);
  uVar3 = (*(undefined1 *)(unsigned)0x8c13f5ec);
  ar4[0x300] = (*(undefined4 *)(unsigned)(unsigned)0x8c13f5e8);
  ar4[0x301] = uVar3;
  ar4[0x302] = (*(undefined4 *)(unsigned)(unsigned)0x8c13f5f0);
  uVar3 = (*(undefined1 *)(unsigned)0x8c13f5f8);
  ar4[0x2fa] = (*(undefined4 *)(unsigned)(unsigned)0x8c13f5f4);
  ar4[0x2fb] = uVar3;
  ar4[0x2fc] = (*(undefined4 *)(unsigned)(unsigned)0x8c13f5fc);
  if (cVar4 == '\0') {
    ar4[0x40f] = 0x43480000;
    ar4[0x410] = 0x43de8000;
    ar4[0x411] = 0x43480000;
    ar4[0x412] = 0x43df8000;
    ar4[0x413] = 0x43dc0000;
    ar4[0x414] = 0x43df8000;
    ar4[0x415] = 0x43dc0000;
    ar4[0x416] = 0x43de8000;
  }
  else {
    *(undefined8 *)(unsigned)(ar4 + 0x40f) = 0x104043480000;
    *(undefined8 *)(unsigned)(ar4 + 0x410) = 0x104443de8000;
    *(undefined8 *)(unsigned)(ar4 + 0x411) = 0x104043480000;
    *(undefined8 *)(unsigned)(ar4 + 0x412) = 0x104c43df8000;
    *(undefined8 *)(unsigned)(ar4 + 0x413) = 0x105043dc0000;
    *(undefined8 *)(unsigned)(ar4 + 0x414) = 0x104c43df8000;
    *(undefined8 *)(unsigned)(ar4 + 0x415) = 0x105043dc0000;
    *(undefined8 *)(unsigned)(ar4 + 0x416) = 0x104443de8000;
  }
  *(undefined2 *)(unsigned)(ar4 + 0x417) = 0;
  *(undefined2 *)(unsigned)((int)ar4 + 0x105e) = 0x20;
  *(undefined2 *)(unsigned)(ar4 + 0x418) = 0;
  *(undefined2 *)(unsigned)((int)ar4 + 0x1062) = 0;
  *(undefined2 *)(unsigned)(ar4 + 0x419) = 0x80;
  *(undefined2 *)(unsigned)((int)ar4 + 0x1066) = 0;
  *(undefined2 *)(unsigned)(ar4 + 0x41a) = 0x80;
  *(undefined2 *)(unsigned)((int)ar4 + 0x106a) = 0x20;
  (*(undefined4 *)(unsigned)(unsigned)0x8c4377d8) = 0xffffffff;
  (*(undefined4 *)(unsigned)(unsigned)0x8c4377dc) = 0xffffffff;
  (*(undefined4 *)(unsigned)(unsigned)0x8c4377e0) = 0xffffffff;
  (*(undefined4 *)(unsigned)(unsigned)0x8c4377e4) = 0xffffffff;
  uVar3 = 4;
  ar6_00 = ((undefined1 *)(unsigned)0x8c4377d8);
  ({ unsigned long ri0_ = (unsigned long)(ain0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 4)); FUN_8c016318(ar4 + 0x40a,ar4 + 0x40f,((undefined1 *)(unsigned)0x8c4377d8),4); });
  (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c016324(ar4 + 0x40a,ar4 + 0x417,ar6_00,uVar3));
  ({ unsigned long ri0_ = (unsigned long)(ain0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 4)); FUN_8c015198(ar4 + 0x40a,0x80000060,ar6_00,uVar3); });
  ar4[0x409] = 0;
  return ar4;
}

__asm__(".globl _FUN_8c0d9c80\n.set _FUN_8c0d9c80, _FUN_8c0d9c80_def\n");
//@unit 8c0da028
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
int FUN_8c0da028_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0da028";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 16; for (int i_ = 0; i_ < 16; i_++) z_[i_] = 0; }
  undefined4 ar5_00;
  undefined4 ar6_00;
  undefined4 ar7_00;
  undefined4 ain0;
  
  ain0 = CONCAT22((short)((uint)(*(undefined4 *)(fr0_ - 0xc)) >> 0x10),(undefined2)ar5);
  if (ar4 != 0) {
    (vsp = ((unsigned long)(fr0_ - 16)), FUN_8c0d6424(ar4 + 0x11c,0xffffffff,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 16)), free_if_nonnull_wrap_0d63c0(ar4 + 0x108,0xffffffff,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 16)), FUN_8c0d6424(ar4 + 0xe8,0xffffffff,ar6,ar7));
    ar7_00 = 4;
    ar6_00 = 0x20;
    ({ unsigned long ri0_ = (unsigned long)(ain0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 16)); vec_delete_array(ar4 + 0x68,((void *)0x8c0d6424),0x20,4); });
    (vsp = ((unsigned long)(fr0_ - 16)), Vec3_dtor(ar4 + 0x40,0xffffffff,ar6_00,ar7_00));
    (vsp = ((unsigned long)(fr0_ - 16)), Vec3_dtor(ar4 + 0x30,0xffffffff,ar6_00,ar7_00));
    (vsp = ((unsigned long)(fr0_ - 16)), Vec3_dtor(ar4 + 0x20,0xffffffff,ar6_00,ar7_00));
    (vsp = ((unsigned long)(fr0_ - 16)), Vec3_dtor(ar4 + 0x10,0xffffffff,ar6_00,ar7_00));
    ar5_00 = 0xffffffff;
    (vsp = ((unsigned long)(fr0_ - 16)), Vec3_dtor(ar4,0xffffffff,ar6_00,ar7_00));
    if (0 < (short)ain0) {
      ({ unsigned long ri0_ = (unsigned long)(ain0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 16)); free_if_nonnull(ar4,ar5_00,ar6_00,ar7_00); });
    }
  }
  return ar4;
}

__asm__(".globl _FUN_8c0da028\n.set _FUN_8c0da028, _FUN_8c0da028_def\n");
//@unit 8c0da0e8
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
int FUN_8c0da0e8_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0da0e8";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 12; for (int i_ = 0; i_ < 12; i_++) z_[i_] = 0; }
  code *ar5_00;
  undefined4 ar6_00;
  undefined4 ar7_00;
  undefined4 ain0;
  
  ain0 = CONCAT22((short)((uint)(*(undefined4 *)(fr0_ - 0xc)) >> 0x10),(undefined2)ar5);
  if (ar4 != 0) {
    ar7_00 = 0x23;
    ar6_00 = 0x10;
    ar5_00 = ((void *)0x8c0da130);
    ({ unsigned long ri0_ = (unsigned long)(ain0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 12)); vec_delete_array(ar4,((void *)0x8c0da130),0x10,0x23); });
    if (0 < (short)ain0) {
      ({ unsigned long ri0_ = (unsigned long)(ain0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 12)); free_if_nonnull(ar4,ar5_00,ar6_00,ar7_00); });
    }
  }
  return ar4;
}

__asm__(".globl _FUN_8c0da0e8\n.set _FUN_8c0da0e8, _FUN_8c0da0e8_def\n");
//@unit 8c0da130
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
int FUN_8c0da130_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0da130";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 16; for (int i_ = 0; i_ < 16; i_++) z_[i_] = 0; }
  undefined4 ar5_00;
  undefined4 ain0;
  
  ain0 = CONCAT22((short)((uint)(*(undefined4 *)(fr0_ - 0xc)) >> 0x10),(undefined2)ar5);
  if (ar4 != 0) {
    ar5_00 = 0xffffffff;
    (vsp = ((unsigned long)(fr0_ - 16)), FUN_8c0da170(ar4,0xffffffff,ar6,ar7));
    if (0 < (short)ain0) {
      ({ unsigned long ri0_ = (unsigned long)(ain0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 16)); free_if_nonnull(ar4,ar5_00,ar6,ar7); });
    }
  }
  return ar4;
}

__asm__(".globl _FUN_8c0da130\n.set _FUN_8c0da130, _FUN_8c0da130_def\n");
//@unit 8c0da170
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
int FUN_8c0da170_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0da170";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 12; for (int i_ = 0; i_ < 12; i_++) z_[i_] = 0; }
  undefined4 ar5_00;
  undefined4 ain0;
  
  ain0 = CONCAT22((short)((uint)(*(undefined4 *)(fr0_ - 0xc)) >> 0x10),(undefined2)ar5);
  if (ar4 != 0) {
    ar5_00 = 0;
    (vsp = ((unsigned long)(fr0_ - 12)), free_if_nonnull_wrap_0c0264(ar4,0,ar6,ar7));
    if (0 < (short)ain0) {
      ({ unsigned long ri0_ = (unsigned long)(ain0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 12)); free_if_nonnull(ar4,ar5_00,ar6,ar7); });
    }
  }
  return ar4;
}

__asm__(".globl _FUN_8c0da170\n.set _FUN_8c0da170, _FUN_8c0da170_def\n");
//@unit 8c0da1b0
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
undefined4 FUN_8c0da1b0_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0da1b0";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0fe1b8(ar4,(&(*(undefined1 *)(unsigned)0x8c13f7c0)) + 0x15d,ar6,ar7));
  return uVar1;
}

__asm__(".globl _FUN_8c0da1b0\n.set _FUN_8c0da1b0, _FUN_8c0da1b0_def\n");
//@unit 8c0da1dc
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
undefined4 FUN_8c0da1dc_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0da1dc";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0fde5c(ar4,(&(*(undefined1 *)(unsigned)0x8c13f7c0)) + 0x15d,ar6,ar7));
  return uVar1;
}

__asm__(".globl _FUN_8c0da1dc\n.set _FUN_8c0da1dc, _FUN_8c0da1dc_def\n");
//@unit 8c0da208
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
undefined4 * Class_12bb08_m0_0da208_def(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "Class_12bb08_m0_0da208";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 16; for (int i_ = 0; i_ < 16; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 ar7_00;
  undefined4 ain0;
  
  ain0 = CONCAT22((short)((uint)(*(undefined4 *)(fr0_ - 0xc)) >> 0x10),(undefined2)ar5);
  if (ar4 != (undefined4 *)(unsigned)0x0) {
    *ar4 = ((undefined1 *)(unsigned)0x8c12bb08);
    (vsp = ((unsigned long)(fr0_ - 16)), free_if_nonnull_wrap_0151a0(ar4 + 0x40a,0xffffffff,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 16)), free_if_nonnull_wrap_0e91f0(ar4 + 0x3d3,0xffffffff,ar6,ar7));
    uVar2 = 8;
    uVar1 = 0x68;
    ({ unsigned long ri0_ = (unsigned long)(ain0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 16)); vec_delete_array(ar4 + 0x303,((void *)0x8c0f68c0),0x68,8); });
    (vsp = ((unsigned long)(fr0_ - 16)), free_if_nonnull_wrap_102790(ar4 + 0x2ea,0xffffffff,uVar1,uVar2));
    (vsp = ((unsigned long)(fr0_ - 16)), FUN_8c0da028(ar4 + 0x29a,0xffffffff,uVar1,uVar2));
    (vsp = ((unsigned long)(fr0_ - 16)), free_if_nonnull_wrap_019270(ar4 + 0x27a,0xffffffff,uVar1,uVar2));
    (vsp = ((unsigned long)(fr0_ - 16)), free_if_nonnull_wrap_015544(ar4 + 0x277,0xffffffff,uVar1,uVar2));
    (vsp = ((unsigned long)(fr0_ - 16)), FUN_8c0da0e8(ar4 + 0x1e9,0xffffffff,uVar1,uVar2));
    ar7_00 = 0x11;
    uVar2 = 0x3c;
    ({ unsigned long ri0_ = (unsigned long)(ain0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 16)); vec_delete_array(ar4 + 0xea,((void *)0x8c0fe250),0x3c,0x11); });
    (vsp = ((unsigned long)(fr0_ - 16)), FUN_8c0fdf18(ar4 + 0x29,0xffffffff,uVar2,ar7_00));
    uVar1 = 0;
    (vsp = ((unsigned long)(fr0_ - 16)), Class_12bce0_m0_0d9a98(ar4,0,uVar2,ar7_00));
    if (0 < (short)ain0) {
      ({ unsigned long ri0_ = (unsigned long)(ain0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 16)); free_if_nonnull(ar4,uVar1,uVar2,ar7_00); });
    }
  }
  return ar4;
}

__asm__(".globl _Class_12bb08_m0_0da208\n.set _Class_12bb08_m0_0da208, _Class_12bb08_m0_0da208_def\n");
//@unit 8c0da338
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
undefined4 Class_12bb08_m1_0da338_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "Class_12bb08_m1_0da338";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 ar6_00;
  int ar7_00;
  int iVar4;
  int iVar5;
  
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0da588(ar4 + 0xa4,ar5,ar6,ar7));
  iVar3 = ar5;
  ar6_00 = ar6;
  ar7_00 = ar4;
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0e9220(ar4 + 0xf4c,ar5,ar6,ar4));
  iVar2 = (vsp = ((unsigned long)(fr0_ - 0)), get_field_300_0bf154(ar4 + 0xa4,iVar3,ar6_00,ar7_00));
  *(undefined4 *)(unsigned)0x8c437550 = iVar2;
  if (iVar2 != 0) {
    iVar5 = iVar1;
    for (iVar4 = 0; iVar4 < iVar2; iVar4 = iVar4 + 1) {
      iVar3 = ar5;
      ar6_00 = ar6;
      ar7_00 = ar4;
      (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(iVar5 + 8) + 0x10))))(iVar5,ar5,ar6,ar4));
      iVar5 = (vsp = ((unsigned long)(fr0_ - 0)), list_node_next(iVar5,iVar3,ar6_00,ar7_00));
    }
    iVar5 = iVar1;
    for (iVar4 = 0; iVar4 < iVar2; iVar4 = iVar4 + 1) {
      (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0f4258(iVar5,ar4,ar6_00,ar7_00));
      iVar3 = ar4;
      (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0f43bc(iVar5,ar4,ar6_00,ar7_00));
      iVar5 = (vsp = ((unsigned long)(fr0_ - 0)), list_node_next(iVar5,iVar3,ar6_00,ar7_00));
    }
    iVar5 = iVar1;
    for (iVar4 = 0; iVar4 < iVar2; iVar4 = iVar4 + 1) {
      iVar3 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0da4f8(iVar5,iVar3,ar6_00,ar7_00));
      if (iVar3 == 1) {
        (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0f4974(iVar5,ar4,ar6_00,ar7_00));
      }
      iVar3 = ar4;
      (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(iVar5 + 8) + 0x24))))(iVar5,ar4,ar6_00,ar7_00));
      iVar5 = (vsp = ((unsigned long)(fr0_ - 0)), list_node_next(iVar5,iVar3,ar6_00,ar7_00));
    }
    for (iVar5 = 0; iVar5 < iVar2; iVar5 = iVar5 + 1) {
      iVar3 = ar4;
      (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(iVar1 + 8) + 0x28))))(iVar1,ar4,ar6_00,ar7_00));
      iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), list_node_next(iVar1,iVar3,ar6_00,ar7_00));
    }
    for (iVar1 = 0; iVar1 < 8; iVar1 = iVar1 + 1) {
      iVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0f6ab0(ar4 + iVar1 * 0x68 + 0xc0c,iVar3,ar6_00,ar7_00));
      if (iVar2 == 1) {
        iVar3 = ar4;
        (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0f7258(ar4 + iVar1 * 0x68 + 0xc0c,ar4,ar6_00,ar7_00));
      }
    }
    (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0dbbe8(ar4,iVar3,ar6_00,ar7_00));
  }
  return 1;
}

__asm__(".globl _Class_12bb08_m1_0da338\n.set _Class_12bb08_m1_0da338, _Class_12bb08_m1_0da338_def\n");
//@unit 8c0da4f8
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
undefined4 FUN_8c0da4f8_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0da4f8";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  if ((*(int *)(unsigned)(ar4 + 0x104) != 0) || (*(int *)(unsigned)(ar4 + 0x108) != 0)) {
    return 1;
  }
  if ((*(int *)(unsigned)(ar4 + 0x124) == 0) && (*(int *)(unsigned)(ar4 + 0x128) == 0)) {
    if ((*(float *)(unsigned)(ar4 + 300) == 0.0) &&
       ((*(float *)(unsigned)(ar4 + 0x130) == 0.0 && (*(float *)(unsigned)(ar4 + 0x134) == 0.0)))) {
      if (*(int *)(unsigned)(ar4 + 0x13c) == -1) {
        return 0;
      }
      return 1;
    }
    return 1;
  }
  return 1;
}

__asm__(".globl _FUN_8c0da4f8\n.set _FUN_8c0da4f8, _FUN_8c0da4f8_def\n");
//@unit 8c0da588
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
undefined4 FUN_8c0da588_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0da588";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), list_node_next(ar4,ar5,ar6,ar7));
  return uVar1;
}

__asm__(".globl _FUN_8c0da588\n.set _FUN_8c0da588, _FUN_8c0da588_def\n");
//@unit 8c0da5a8
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
undefined4 Class_12bb08_m2_0da5a8_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "Class_12bb08_m2_0da5a8";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 ar6_00;
  int ar7_00;
  int iVar4;
  int iVar5;
  
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0da588(ar4 + 0xa4,ar5,ar6,ar7));
  iVar3 = ar5;
  ar6_00 = ar6;
  ar7_00 = ar4;
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0e9220(ar4 + 0xf4c,ar5,ar6,ar4));
  iVar2 = (vsp = ((unsigned long)(fr0_ - 0)), get_field_300_0bf154(ar4 + 0xa4,iVar3,ar6_00,ar7_00));
  if (iVar2 != 0) {
    iVar5 = iVar1;
    for (iVar4 = 0; iVar4 < iVar2; iVar4 = iVar4 + 1) {
      iVar3 = ar5;
      ar6_00 = ar6;
      ar7_00 = ar4;
      (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(iVar5 + 8) + 0x14))))(iVar5,ar5,ar6,ar4));
      iVar5 = (vsp = ((unsigned long)(fr0_ - 0)), list_node_next(iVar5,iVar3,ar6_00,ar7_00));
    }
    iVar5 = iVar1;
    for (iVar4 = 0; iVar4 < iVar2; iVar4 = iVar4 + 1) {
      iVar3 = ar4;
      (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0f4258(iVar5,ar4,ar6_00,ar7_00));
      iVar5 = (vsp = ((unsigned long)(fr0_ - 0)), list_node_next(iVar5,iVar3,ar6_00,ar7_00));
    }
    iVar5 = iVar1;
    for (iVar4 = 0; iVar4 < iVar2; iVar4 = iVar4 + 1) {
      iVar3 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0da4f8(iVar5,iVar3,ar6_00,ar7_00));
      if (iVar3 == 1) {
        (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0f4974(iVar5,ar4,ar6_00,ar7_00));
      }
      iVar3 = ar4;
      (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(iVar5 + 8) + 0x24))))(iVar5,ar4,ar6_00,ar7_00));
      iVar5 = (vsp = ((unsigned long)(fr0_ - 0)), list_node_next(iVar5,iVar3,ar6_00,ar7_00));
    }
    for (iVar5 = 0; iVar5 < iVar2; iVar5 = iVar5 + 1) {
      iVar3 = ar4;
      (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(iVar1 + 8) + 0x28))))(iVar1,ar4,ar6_00,ar7_00));
      iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), list_node_next(iVar1,iVar3,ar6_00,ar7_00));
    }
    (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0dbbe8(ar4,iVar3,ar6_00,ar7_00));
    for (iVar1 = 0; iVar1 < 8; iVar1 = iVar1 + 1) {
      iVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0f6ab0(ar4 + iVar1 * 0x68 + 0xc0c,iVar3,ar6_00,ar7_00));
      if (iVar2 == 1) {
        iVar3 = ar4;
        (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0f7204(ar4 + iVar1 * 0x68 + 0xc0c,ar4,ar6_00,ar7_00));
      }
    }
  }
  return 1;
}

__asm__(".globl _Class_12bb08_m2_0da5a8\n.set _Class_12bb08_m2_0da5a8, _Class_12bb08_m2_0da5a8_def\n");
//@unit 8c0da754
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
undefined4 FUN_8c0da754_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0da754";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 40; for (int i_ = 0; i_ < 40; i_++) z_[i_] = 0; }
  int ar4_00;
  int iVar1;
  int iVar2;
  undefined1 *ar5_00;
  float *ar6_00;
  undefined1 *ar7_00;
  int iVar3;
  float fVar4;
  float fVar5;
  char cVar6;
  char cVar7;
  
  cVar7 = '\0';
  cVar6 = '\0';
  ar4_00 = (vsp = ((unsigned long)(fr0_ - 40)), FUN_8c0da588(ar4 + 0xa4,ar5,ar6,ar7));
  iVar1 = (vsp = ((unsigned long)(fr0_ - 40)), get_field_300_0bf154(ar4 + 0xa4,ar5,ar6,ar7));
  if (iVar1 != 0) {
    if ((*(undefined4 *)(unsigned)(unsigned)0x8c437550) < iVar1) {
      iVar1 = (*(undefined4 *)(unsigned)(unsigned)0x8c437550);
    }
    for (iVar3 = 0; iVar3 < iVar1; iVar3 = iVar3 + 1) {
      ar7_00 = ((undefined1 *)(fr0_ - 0x18));
      (vsp = ((unsigned long)(fr0_ - 40)), FUN_8c0507a4(ar4_00,((undefined1 *)(fr0_ - 0x20)),((undefined1 *)(fr0_ - 0x1c)),ar7_00));
      ar6_00 = &(*(float *)(fr0_ - 0x28));
      ar5_00 = ((undefined1 *)(fr0_ - 0x20));
      (vsp = ((unsigned long)(fr0_ - 40)), FUN_8c256294(0,ar5_00,ar6_00,ar7_00));
      if (cVar7 == '\0') {
        fVar5 = -150.0;
        fVar4 = (*(float *)(fr0_ - 0x28));
      }
      else {
        fVar4 = -150.0;
        fVar5 = 800.0;
      }
      if (cVar6 == '\0' && fVar4 < fVar5) {
LAB_8c0da802:
        iVar2 = (vsp = ((unsigned long)(fr0_ - 40)), get_field_24_05c284(ar4_00,ar5_00,ar6_00,ar7_00));
        if (iVar2 == 0xe) goto LAB_8c0da812;
      }
      else {
        if (cVar7 == '\0') {
          fVar5 = 800.0;
          fVar4 = (*(float *)(fr0_ - 0x28));
        }
        else {
          fVar4 = 800.0;
          fVar5 = -100.0;
        }
        if (cVar6 == '\0' && fVar5 < fVar4) goto LAB_8c0da802;
        if (cVar7 == '\0') {
          fVar5 = -100.0;
          fVar4 = (*(float *)(fr0_ - 0x24));
        }
        else {
          fVar4 = -100.0;
          fVar5 = 600.0;
        }
        if (cVar6 == '\0' && fVar4 < fVar5) goto LAB_8c0da802;
        if (cVar7 == '\0') {
          fVar5 = 600.0;
          fVar4 = (*(float *)(fr0_ - 0x24));
        }
        else {
          fVar4 = 600.0;
          fVar5 = 3.52567e-42;
        }
        if ((cVar6 == '\0' && fVar5 < fVar4) || (ar4_00 == *(int *)(unsigned)(ar4 + 0x9d4)))
        goto LAB_8c0da802;
LAB_8c0da812:
        (vsp = ((unsigned long)(fr0_ - 40)), FUN_8c0f4b44(ar4_00,ar5_00,ar6_00,ar7_00));
        (vsp = ((unsigned long)(fr0_ - 40)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(ar4_00 + 8) + 0x34))))(ar4_00,ar5_00,ar6_00,ar7_00));
      }
      ar4_00 = (vsp = ((unsigned long)(fr0_ - 40)), list_node_next(ar4_00,ar5_00,ar6_00,ar7_00));
    }
  }
  return 1;
}

__asm__(".globl _FUN_8c0da754\n.set _FUN_8c0da754, _FUN_8c0da754_def\n");
//@unit 8c0da88c
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
uint FUN_8c0da88c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0da88c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  bool bVar2;
  undefined4 in_PR = 0;
  
  bVar2 = *(int *)(unsigned)(ar4 + 0x9d4) != 0;
  if (bVar2) {
    uVar1 = 1;
    ({ unsigned long ri0_ = (unsigned long)(in_PR); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); FUN_8c22195c(1,ar5,ar6,ar7); });
    (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c219070(uVar1,ar5,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0f4b44(*(undefined4 *)(unsigned)(ar4 + 0x9d4),ar5,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0x9d4) + 8) + 0x34))))(*(int *)(unsigned)(ar4 + 0x9d4),ar5,ar6,ar7));
    uVar1 = 1;
    ({ unsigned long ri0_ = (unsigned long)(in_PR); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); FUN_8c22195c(1,ar5,ar6,ar7); });
    (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c219070(uVar1,ar5,ar6,ar7));
  }
  return (uint)bVar2;
}

__asm__(".globl _FUN_8c0da88c\n.set _FUN_8c0da88c, _FUN_8c0da88c_def\n");
//@unit 8c0da934
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
undefined4 s_CEnv_AddItem_0da93a_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "s_CEnv_AddItem_0da93a";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  int iVar2;
  
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0feb3c(ar4 + 0x7a4,ar5,ar6,ar7));
  if (iVar1 == 0) {
    ar7 = 2;
    ar6 = 1;
    (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c102828))))
              ((&(*(undefined1 *)(unsigned)0x8c13f7c0)) + 0x5b2,
               (&(*(undefined1 *)(unsigned)0x8c13f7c0)) + 0x5c1,1,2));
  }
  iVar2 = ar5;
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0c4da0(ar4,ar5,ar6,ar7));
  *(int *)(unsigned)(iVar1 + 8) = ar5;
  iVar2 = (vsp = ((unsigned long)(fr0_ - 0)), get_field_24_05c284(ar5,iVar2,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0fe2a0(iVar2 * 0x3c + ar4 + 0x3a8,iVar1,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0daa28(ar5,iVar1,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(ar5 + 8) + 0x60))))(ar5,iVar1,ar6,ar7));
  iVar1 = ar5;
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0fdf74(ar4 + 0xa4,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), Vec3_assign_wrap_0f4da4(ar5,iVar1,ar6,ar7));
  return 0;
}

__asm__(".globl _s_CEnv_AddItem_0da93a\n.set _s_CEnv_AddItem_0da93a, _s_CEnv_AddItem_0da93a_def\n");
//@unit 8c0daa28
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
int FUN_8c0daa28_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0daa28";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  
  iVar1 = 0x160;
  *(undefined4 *)(unsigned)(0x160 + ar4) = ar5;
  return iVar1;
}

__asm__(".globl _FUN_8c0daa28\n.set _FUN_8c0daa28, _FUN_8c0daa28_def\n");
//@unit 8c0daa34
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
undefined4 FUN_8c0daa34_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0daa34";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  
  if ((*(int *)(unsigned)(0x9d4 + ar4) != 0) &&
     (iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c05f490))))
                        (*(undefined4 *)(unsigned)(0x9d4 + ar4),ar5,ar6,ar7)), iVar1 == 0)) {
    (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0f4d84(*(undefined4 *)(unsigned)(0x9d4 + ar4),ar5,ar6,ar7));
    *(undefined4 *)(unsigned)(0x9d4 + ar4) = 0;
    return 1;
  }
  return 0;
}

__asm__(".globl _FUN_8c0daa34\n.set _FUN_8c0daa34, _FUN_8c0daa34_def\n");
//@unit 8c0daa88
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
undefined4 FUN_8c0daa88_def(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0daa88";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  if (*(int *)(unsigned)(0x9d4 + (int)ar4) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*ar4 + 0x5c))))(ar4,*(undefined4 *)(unsigned)(0x9d4 + (int)ar4),ar6,ar7));
    *(undefined4 *)(unsigned)(0x9d4 + (int)ar4) = 0;
  }
  return uVar1;
}

__asm__(".globl _FUN_8c0daa88\n.set _FUN_8c0daa88, _FUN_8c0daa88_def\n");
//@unit 8c0daad0
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
int FUN_8c0daad0_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0daad0";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 20; for (int i_ = 0; i_ < 20; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 ar5_00;
  int iVar2;
  
  ((undefined4 *)(fr0_ - 0x14))[0] = 0;
  iVar2 = ar5;
  iVar1 = (vsp = ((unsigned long)(fr0_ - 20)), get_field_24_05c284(ar5,ar5,ar6,ar7));
  ar5_00 = (vsp = ((unsigned long)(fr0_ - 20)), get_field_160_0dab80(ar5,iVar2,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 20)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c0fe334))))
            (iVar1 * 0x3c + ar4 + 0x3a8,ar5_00,ar6,ar7));
  ((undefined4 *)(fr0_ - 0x14))[0] = (vsp = ((unsigned long)(fr0_ - 20)), get_field_160_0dab80(ar5,ar5_00,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 20)), FUN_8c0feb88(ar4 + 0x7a4,((undefined4 *)(fr0_ - 0x14)),ar6,ar7));
  iVar2 = ar5;
  (vsp = ((unsigned long)(fr0_ - 20)), s_Item_pointer_is_NULL_CItemLi_0fe01c(ar4 + 0xa4,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 20)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(ar5 + 8) + 100))))(ar5,iVar2,ar6,ar7));
  return ar5;
}

__asm__(".globl _FUN_8c0daad0\n.set _FUN_8c0daad0, _FUN_8c0daad0_def\n");
//@unit 8c0dab80
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
undefined4 get_field_160_0dab80_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "get_field_160_0dab80";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return *(undefined4 *)(unsigned)(0x160 + ar4);
}

__asm__(".globl _get_field_160_0dab80\n.set _get_field_160_0dab80, _get_field_160_0dab80_def\n");
//@unit 8c0dab8c
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
undefined4 FUN_8c0dab8c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0dab8c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), get_field_300_0bf154(ar4 + 0xa4,ar5,ar6,ar7));
  if (iVar1 != 0) {
    if ((*(int *)(unsigned)(0x9d4 + ar4) == 0) ||
       (iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0dac20(ar4 + 0xa4,ar5,ar6,ar7)),
       *(int *)(unsigned)(0x9d4 + ar4) == iVar1)) {
      uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0da588(ar4 + 0xa4,ar5,ar6,ar7));
      *(undefined4 *)(unsigned)(0x9d4 + ar4) = uVar2;
    }
    else {
      uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c0d3f48))))
                        (*(undefined4 *)(unsigned)(0x9d4 + ar4),ar5,ar6,ar7));
      *(undefined4 *)(unsigned)(0x9d4 + ar4) = uVar2;
    }
    return *(undefined4 *)(unsigned)(0x9d4 + ar4);
  }
  return 0;
}

__asm__(".globl _FUN_8c0dab8c\n.set _FUN_8c0dab8c, _FUN_8c0dab8c_def\n");
//@unit 8c0dac20
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
undefined4 FUN_8c0dac20_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0dac20";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), get_field_4_0dac48(ar4 + 0x170,ar5,ar6,ar7));
  return uVar1;
}

__asm__(".globl _FUN_8c0dac20\n.set _FUN_8c0dac20, _FUN_8c0dac20_def\n");
//@unit 8c0dac48
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
undefined4 get_field_4_0dac48_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "get_field_4_0dac48";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return *(undefined4 *)(unsigned)(ar4 + 4);
}

__asm__(".globl _get_field_4_0dac48\n.set _get_field_4_0dac48, _get_field_4_0dac48_def\n");
//@unit 8c0dac50
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
int FUN_8c0dac50_def(int ar4,float *ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0dac50";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 168; for (int i_ = 0; i_ < 168; i_++) z_[i_] = 0; }
  int ar4_00;
  int iVar1;
  undefined4 uVar2;
  int *a4;
  float *ar5_00;
  undefined4 ar5_01;
  float *ar6_00;
  float fVar3;
  float fVar4;
  code *pcVar5;
  char cVar6;
  char cVar7;
  
  cVar7 = '\0';
  cVar6 = '\0';
  (*(float *)(fr0_ - 0x98)) = 3.4028235e+38;
  (vsp = ((unsigned long)(fr0_ - 168)), Vec3_ctor_zero(((undefined1 *)(fr0_ - 0x84)),ar5,ar6,ar7));
  fVar3 = (*(undefined4 *)(unsigned)(unsigned)0x8c1264b8);
  fVar4 = (*(undefined1 *)(unsigned)0x8c1264bc);
  if (cVar7 == '\0') {
    fVar3 = *ar5;
    fVar4 = (*(undefined4 *)(unsigned)(unsigned)0x8c1264b8);
  }
  if (fVar3 == fVar4) {
    *(undefined4 *)(unsigned)(ar4 + 0x9d4) = 0;
    (vsp = ((unsigned long)(fr0_ - 168)), Vec3_dtor(((undefined1 *)(fr0_ - 0x84)),0xffffffff,ar6,ar7));
    ar4_00 = 0;
  }
  else {
    ar6_00 = &(*(float *)(fr0_ - 0x98));
    ar5_00 = ar5;
    ar4_00 = (vsp = ((unsigned long)(fr0_ - 168)), FUN_8c0dbe24(ar4,ar5,ar6_00,ar7));
    if (ar4_00 == 0) {
      *(undefined4 *)(unsigned)(ar4 + 0x9d4) = 0;
      (vsp = ((unsigned long)(fr0_ - 168)), Vec3_dtor(((undefined1 *)(fr0_ - 0x84)),0xffffffff,ar6_00,ar7));
    }
    else {
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x94))); *(unsigned *)((((unsigned long)(fr0_ - 168)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 168)) - 8); FUN_8c02f670(ar4_00,ar5_00,ar6_00,ar7); });
      (vsp = ((unsigned long)(fr0_ - 168)), Vec3_assign(((undefined1 *)(fr0_ - 0x84)),((undefined1 *)(fr0_ - 0x94)),ar6_00,ar7));
      ar5_01 = 0xffffffff;
      (vsp = ((unsigned long)(fr0_ - 168)), Vec3_dtor(((undefined1 *)(fr0_ - 0x94)),0xffffffff,ar6_00,ar7));
      fVar3 = (*(float *)(fr0_ - 0x7c));
      if (cVar7 == '\0') {
        fVar3 = *(float *)(unsigned)(ar4 + 0xa70);
        (*(float *)(fr0_ - 0x78)) = (*(float *)(fr0_ - 0x7c));
      }
      if (cVar6 != '\0' || (*(float *)(fr0_ - 0x78)) <= fVar3) {
        iVar1 = (vsp = ((unsigned long)(fr0_ - 168)), get_field_24_05c284(ar4_00,ar5_01,ar6_00,ar7));
        if (iVar1 == 0x10) {
          *(undefined4 *)(unsigned)(ar4 + 0x9d4) = 0;
          (vsp = ((unsigned long)(fr0_ - 168)), Vec3_dtor(((undefined1 *)(fr0_ - 0x84)),0xffffffff,ar6_00,ar7));
          ar4_00 = 0;
        }
        else {
          if (iVar1 == 0xe) {
            uVar2 = (vsp = ((unsigned long)(fr0_ - 168)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(ar4_00 + 8) + 0x148))))(ar4_00,ar5_01,ar6_00,ar7));
            (*(int *)(fr0_ - 0x9c)) = (int)(short)uVar2;
            if ((*(int *)(fr0_ - 0x9c)) == 1) {
              *(undefined4 *)(unsigned)(ar4 + 0x9d4) = 0;
              (vsp = ((unsigned long)(fr0_ - 168)), Vec3_dtor(((undefined1 *)(fr0_ - 0x84)),0xffffffff,ar6_00,ar7));
              return 0;
            }
          }
          if (cVar7 == '\0') {
            pcVar5 = (code *)0x42700000;
            fVar3 = (*(float *)(fr0_ - 0x98));
          }
          else {
            fVar3 = 60.0;
            pcVar5 = ((void *)0x8c032154);
          }
          if (cVar6 != '\0' || (float)(uint)pcVar5 <= fVar3) {
            if (cVar7 == '\0') {
              (*(float *)(fr0_ - 0xa4)) = *ar5;
              (*(float *)(fr0_ - 0xa0)) = ar5[1];
            }
            else {
              (*(float *)(fr0_ - 0xa4)) = (float)*(undefined8 *)(unsigned)ar5;
              (*(float *)(fr0_ - 0xa0)) = (float)*(undefined8 *)(unsigned)(ar5 + 1);
              (*(int *)(fr0_ - 0x9c)) = (int)((ulonglong)*(undefined8 *)(unsigned)(ar5 + 1) >> 0x20);
            }
            a4 = (int *)(unsigned)(vsp = ((unsigned long)(fr0_ - 168)), get_field_a4_032154(ar4_00,ar5_01,ar6_00,ar7));
            (vsp = ((unsigned long)(fr0_ - 168)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*a4 + 0x38))))(a4,((undefined1 *)(fr0_ - 0x74)),ar6_00,ar7));
            iVar1 = (vsp = ((unsigned long)(fr0_ - 168)), FUN_8c0d1754(&(*(float *)(fr0_ - 0xa4)),((undefined1 *)(fr0_ - 0x74)),ar6_00,ar7));
            if (iVar1 == 0) {
              ar4_00 = 0;
            }
            *(int *)(unsigned)(ar4 + 0x9d4) = ar4_00;
            (vsp = ((unsigned long)(fr0_ - 168)), Vec3_dtor(((undefined1 *)(fr0_ - 0x84)),0xffffffff,ar6_00,ar7));
          }
          else {
            *(int *)(unsigned)(ar4 + 0x9d4) = ar4_00;
            (vsp = ((unsigned long)(fr0_ - 168)), Vec3_dtor(((undefined1 *)(fr0_ - 0x84)),0xffffffff,ar6_00,ar7));
          }
        }
      }
      else {
        *(undefined4 *)(unsigned)(ar4 + 0x9d4) = 0;
        (vsp = ((unsigned long)(fr0_ - 168)), Vec3_dtor(((undefined1 *)(fr0_ - 0x84)),0xffffffff,ar6_00,ar7));
        ar4_00 = 0;
      }
    }
  }
                    
  return ar4_00;
}

__asm__(".globl _FUN_8c0dac50\n.set _FUN_8c0dac50, _FUN_8c0dac50_def\n");
//@unit 8c0daea8
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
int FUN_8c0daea8_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0daea8";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  int a4;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  
  uVar3 = ar5;
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), get_field_300_0bf154(ar4 + 0xa4,ar5,ar6,ar7));
  a4 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0da588(ar4 + 0xa4,uVar3,ar6,ar7));
  iVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c021720(0x8c2b59d0,0,ar6,ar7));
  if (iVar1 != 0) {
    for (iVar4 = 0; iVar4 < iVar1; iVar4 = iVar4 + 1) {
      uVar3 = ar5;
      (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(a4 + 8) + 0x7c))))(a4,ar5,ar6,ar7));
      iVar2 = (vsp = ((unsigned long)(fr0_ - 0)), list_node_next(a4,uVar3,ar6,ar7));
      a4 = iVar2;
    }
  }
  return iVar2;
}

__asm__(".globl _FUN_8c0daea8\n.set _FUN_8c0daea8, _FUN_8c0daea8_def\n");
//@unit 8c0daf3c
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
undefined4 FUN_8c0daf3c_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0daf3c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  (vsp = ((unsigned long)(fr0_ - 0)), pure_virtual_stub(ar4,ar5,ar6,ar7));
  return 1;
}

__asm__(".globl _FUN_8c0daf3c\n.set _FUN_8c0daf3c, _FUN_8c0daf3c_def\n");
//@unit 8c0daf80
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
int FUN_8c0daf80_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0daf80";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  int a4;
  int iVar2;
  int iVar3;
  
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), get_field_300_0bf154(ar4 + 0xa4,ar5,ar6,ar7));
  a4 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0da588(ar4 + 0xa4,ar5,ar6,ar7));
  iVar2 = 0x1024;
  *(undefined4 *)(unsigned)(0x1024 + ar4) = 0;
  if (iVar1 != 0) {
    for (iVar3 = 0; iVar3 < iVar1; iVar3 = iVar3 + 1) {
      (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(a4 + 8) + 0x60))))(a4,ar5,ar6,ar7));
      iVar2 = (vsp = ((unsigned long)(fr0_ - 0)), list_node_next(a4,ar5,ar6,ar7));
      a4 = iVar2;
    }
  }
  return iVar2;
}

__asm__(".globl _FUN_8c0daf80\n.set _FUN_8c0daf80, _FUN_8c0daf80_def\n");
//@unit 8c0db004
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
undefined4 noop_0db004_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "noop_0db004";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 in_r0 = (undefined4)(unsigned long)vin0;
  
  return in_r0 = 0;
}

__asm__(".globl _noop_0db004\n.set _noop_0db004, _noop_0db004_def\n");
//@unit 8c0db008
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
undefined4 FUN_8c0db008_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0db008";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  int a4;
  int iVar2;
  
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), get_field_300_0bf154(ar4 + 0xa4,ar5,ar6,ar7));
  a4 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0da588(ar4 + 0xa4,ar5,ar6,ar7));
  if (iVar1 != 0) {
    for (iVar2 = 0; iVar2 < iVar1; iVar2 = iVar2 + 1) {
      (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(a4 + 8) + 100))))(a4,ar5,ar6,ar7));
      a4 = (vsp = ((unsigned long)(fr0_ - 0)), list_node_next(a4,ar5,ar6,ar7));
    }
  }
  return 0;
}

__asm__(".globl _FUN_8c0db008\n.set _FUN_8c0db008, _FUN_8c0db008_def\n");
//@unit 8c0db088
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
undefined4 ret_const_0_0db088_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "ret_const_0_0db088";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return 0;
}

__asm__(".globl _ret_const_0_0db088\n.set _ret_const_0_0db088, _ret_const_0_0db088_def\n");
//@unit 8c0db090
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
int FUN_8c0db090_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0db090";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  int a4;
  int iVar2;
  
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), get_field_300_0bf154(ar4 + 0xa4,ar5,ar6,ar7));
  a4 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0da588(ar4 + 0xa4,ar5,ar6,ar7));
  if (iVar1 != 0) {
    for (iVar2 = 0; iVar2 < iVar1; iVar2 = iVar2 + 1) {
      (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((0xa8 + *(int *)(unsigned)(a4 + 8)))))(a4,ar5,ar6,ar7));
      a4 = (vsp = ((unsigned long)(fr0_ - 0)), list_node_next(a4,ar5,ar6,ar7));
    }
  }
  return a4;
}

__asm__(".globl _FUN_8c0db090\n.set _FUN_8c0db090, _FUN_8c0db090_def\n");
//@unit 8c0db10c
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
int FUN_8c0db10c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0db10c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  int a4;
  int iVar2;
  
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), get_field_300_0bf154(ar4 + 0xa4,ar5,ar6,ar7));
  a4 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0da588(ar4 + 0xa4,ar5,ar6,ar7));
  if (iVar1 != 0) {
    for (iVar2 = 0; iVar2 < iVar1; iVar2 = iVar2 + 1) {
      (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(a4 + 8) + 0x68))))(a4,ar5,ar6,ar7));
      a4 = (vsp = ((unsigned long)(fr0_ - 0)), list_node_next(a4,ar5,ar6,ar7));
    }
  }
  return a4;
}

__asm__(".globl _FUN_8c0db10c\n.set _FUN_8c0db10c, _FUN_8c0db10c_def\n");
//@unit 8c0db184
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
undefined4 noop_0db184_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "noop_0db184";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 in_r0 = (undefined4)(unsigned long)vin0;
  
  return in_r0 = 0;
}

__asm__(".globl _noop_0db184\n.set _noop_0db184, _noop_0db184_def\n");
//@unit 8c0db188
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
undefined4 FUN_8c0db188_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0db188";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0d66d8(ar4 + 0xa68,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c019560(ar4 + 0x9e8,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c019574(ar4 + 0x9e8,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(ar4 + 0x9e8) + 0xc))))((int *)(unsigned)(ar4 + 0x9e8),ar5,ar6,ar7));
  return 1;
}

__asm__(".globl _FUN_8c0db188\n.set _FUN_8c0db188, _FUN_8c0db188_def\n");
//@unit 8c0db224
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
undefined4 FUN_8c0db224_def(int ar4,undefined1 *ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0db224";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 92; for (int i_ = 0; i_ < 92; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 ar4_00;
  int *a4;
  int iVar2;
  undefined1 *ar5_00;
  int iVar3;
  
  ar5_00 = ar5;
  iVar1 = (vsp = ((unsigned long)(fr0_ - 92)), get_field_300_0bf154(ar4 + 0xa4,ar5,ar6,ar7));
  ar4_00 = (vsp = ((unsigned long)(fr0_ - 92)), FUN_8c0da588(ar4 + 0xa4,ar5_00,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 92)), FUN_8c0db304(((undefined1 *)(fr0_ - 0x58)),ar5_00,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 92)), FUN_8c018f80(((undefined1 *)(fr0_ - 0x58)),ar5,ar6,ar7));
  iVar3 = 0;
  while( true ) {
    if (iVar1 <= iVar3) {
      (vsp = ((unsigned long)(fr0_ - 92)), Class_129974_m0_016c2c(((undefined1 *)(fr0_ - 0x58)),0xffffffff,ar6,ar7));
      return 0;
    }
    a4 = (int *)(unsigned)(vsp = ((unsigned long)(fr0_ - 92)), get_field_a4_032154(ar4_00,ar5,ar6,ar7));
    ar5 = ((undefined1 *)(fr0_ - 0x58));
    iVar2 = (vsp = ((unsigned long)(fr0_ - 92)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*a4 + 0x14))))(a4,ar5,ar6,ar7));
    if (iVar2 == 1) break;
    ar4_00 = (vsp = ((unsigned long)(fr0_ - 92)), list_node_next(ar4_00,ar5,ar6,ar7));
    iVar3 = iVar3 + 1;
  }
  (vsp = ((unsigned long)(fr0_ - 92)), Class_129974_m0_016c2c(((undefined1 *)(fr0_ - 0x58)),0xffffffff,ar6,ar7));
  return 1;
}

__asm__(".globl _FUN_8c0db224\n.set _FUN_8c0db224, _FUN_8c0db224_def\n");
//@unit 8c0db304
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
undefined4 FUN_8c0db304_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0db304";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c016b64(ar4,ar5,ar6,ar7));
  return uVar1;
}

__asm__(".globl _FUN_8c0db304\n.set _FUN_8c0db304, _FUN_8c0db304_def\n");
//@unit 8c0db32c
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
undefined4 FUN_8c0db32c_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,int ar7)

{
  ring[rp++ & 255] = "FUN_8c0db32c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 16; for (int i_ = 0; i_ < 16; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  if (ar7 == 0xe) {
    uVar1 = (vsp = ((unsigned long)(fr0_ - 16)), FUN_8c02174c(0x8c2b59d0,0x26,ar6,0xe));
  }
  else {
    ((undefined4 *)(fr0_ - 0x10))[0] = (vsp = ((unsigned long)(fr0_ - 16)), FUN_8c02190c(0x8c2b59d0,ar5,ar6,ar7));
    uVar1 = 0xd;
    (vsp = ((unsigned long)(fr0_ - 16)), FUN_8c021994(0x8c2b59d0,((undefined4 *)(fr0_ - 0x10))[0],0xd,ar7));
    uVar1 = (vsp = ((unsigned long)(fr0_ - 16)), FUN_8c021a8c(0x8c2b59d0,((undefined4 *)(fr0_ - 0x10)),uVar1,ar7));
  }
  return uVar1;
}

__asm__(".globl _FUN_8c0db32c\n.set _FUN_8c0db32c, _FUN_8c0db32c_def\n");
//@unit 8c0db3bc
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
int FUN_8c0db3bc_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0db3bc";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 80; for (int i_ = 0; i_ < 80; i_++) z_[i_] = 0; }
  int iVar1;
  int iVar2;
  int ar4_00;
  undefined1 *ar6_00;
  undefined1 *ar7_00;
  int iVar3;
  int iVar4;
  int a4;
  int iVar5;
  uint extraout_fr1 = 0;
  undefined4 extraout_fr1_00 = 0;
  undefined4 extraout_fr0 = 0;
  undefined4 in_fr15 = 0;
  float fVar6;
  undefined8 uVar7;
  undefined8 in_xd14 = 0;
  char cVar8;
  char cVar9;
  
  cVar9 = '\0';
  cVar8 = '\0';
  iVar1 = (vsp = ((unsigned long)(fr0_ - 80)), get_field_300_0bf154(ar4 + 0xa4,ar5,ar6,ar7));
  iVar3 = 0;
  (vsp = ((unsigned long)(fr0_ - 80)), Vec3_ctor_zero(((undefined1 *)(fr0_ - 0x38)),ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 80)), Vec3_ctor_zero((int)&(*(undefined8 *)(fr0_ - 0x4c)) + 4,ar5,ar6,ar7));
  if (cVar9 == '\0') {
    (*(undefined8 *)(fr0_ - 0x4c)) = (ulonglong)(*(uint*)((uchar*)&(*(undefined8 *)(fr0_ - 0x4c))+4)) << 0x20;
    uVar7 = CONCAT44(0x47435000,in_fr15);
  }
  else {
    (*(undefined8 *)(fr0_ - 0x4c)) = (ulonglong)extraout_fr1;
    uVar7 = 0x8c022cb047435000;
  }
  if (iVar1 == 0) {
    (vsp = ((unsigned long)(fr0_ - 80)), Vec3_dtor((int)&(*(undefined8 *)(fr0_ - 0x4c)) + 4,0xffffffff,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 80)), Vec3_dtor(((undefined1 *)(fr0_ - 0x38)),0xffffffff,ar6,ar7));
    iVar3 = 0;
  }
  else {
    (vsp = ((unsigned long)(fr0_ - 80)), FUN_8c0da588(ar4 + 0xa4,ar5,ar6,ar7));
    ar7_00 = ((undefined1 *)(fr0_ - 0x40));
    ar6_00 = ((undefined1 *)(fr0_ - 0x44));
    iVar1 = (int)&(*(undefined8 *)(fr0_ - 0x4c)) + 4;
    (vsp = ((unsigned long)(fr0_ - 80)), FUN_8c0db5a8(ar4 + 0x9e8,iVar1,ar6_00,ar7_00));
    for (iVar4 = 3; iVar4 < 8; iVar4 = iVar4 + 1) {
      iVar2 = (vsp = ((unsigned long)(fr0_ - 80)), get_field_38_0db5a0(iVar4 * 0x3c + ar4 + 0x3a8,iVar1,ar6_00,ar7_00));
      if (iVar2 != 0) {
        ar4_00 = (vsp = ((unsigned long)(fr0_ - 80)), FUN_8c0db580(iVar4 * 0x3c + ar4 + 0x3a8,iVar1,ar6_00,ar7_00));
        a4 = *(int *)(unsigned)(ar4_00 + 8);
        for (iVar5 = 0; iVar5 < iVar2; iVar5 = iVar5 + 1) {
          ar7_00 = ((undefined1 *)(fr0_ - 0x30));
          ar6_00 = ((undefined1 *)(fr0_ - 0x34));
          (vsp = ((unsigned long)(fr0_ - 80)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(a4 + 8) + 0x134))))(a4,((undefined1 *)(fr0_ - 0x38)),ar6_00,ar7_00));
          iVar1 = ar4 + 0xa68;
          (vsp = ((unsigned long)(fr0_ - 80)), FUN_8c023b4c(((undefined1 *)(fr0_ - 0x38)),iVar1,ar6_00,ar7_00));
          (vsp = ((unsigned long)(fr0_ - 80)), Vec3_length_sq(((undefined1 *)(fr0_ - 0x38)),iVar1,ar6_00,ar7_00));
          if (cVar9 == '\0') {
            uVar7 = CONCAT44((int)((ulonglong)uVar7 >> 0x20),extraout_fr0);
          }
          else {
            in_xd14 = CONCAT44(extraout_fr0,extraout_fr1_00);
          }
          fVar6 = (float)uVar7;
          if ((cVar8 == '\0' && fVar6 < F32HI(uVar7)) &&
             (iVar3 = a4, uVar7 = in_xd14, cVar9 == '\0')) {
            uVar7 = CONCAT44(fVar6,fVar6);
          }
          ar4_00 = (vsp = ((unsigned long)(fr0_ - 80)), list_node_next(ar4_00,iVar1,ar6_00,ar7_00));
          a4 = *(int *)(unsigned)(ar4_00 + 8);
        }
      }
    }
    (vsp = ((unsigned long)(fr0_ - 80)), Vec3_dtor((int)&(*(undefined8 *)(fr0_ - 0x4c)) + 4,0xffffffff,ar6_00,ar7_00));
    (vsp = ((unsigned long)(fr0_ - 80)), Vec3_dtor(((undefined1 *)(fr0_ - 0x38)),0xffffffff,ar6_00,ar7_00));
  }
  return iVar3;
}

__asm__(".globl _FUN_8c0db3bc\n.set _FUN_8c0db3bc, _FUN_8c0db3bc_def\n");
//@unit 8c0db580
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
undefined4 FUN_8c0db580_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0db580";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), list_node_next(ar4,ar5,ar6,ar7));
  return uVar1;
}

__asm__(".globl _FUN_8c0db580\n.set _FUN_8c0db580, _FUN_8c0db580_def\n");
//@unit 8c0db5a0
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
undefined4 get_field_38_0db5a0_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "get_field_38_0db5a0";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return *(undefined4 *)(unsigned)(ar4 + 0x38);
}

__asm__(".globl _get_field_38_0db5a0\n.set _get_field_38_0db5a0, _get_field_38_0db5a0_def\n");
//@unit 8c0db5a8
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
undefined4 * FUN_8c0db5a8_def(int ar4,undefined4 *ar5,undefined4 *ar6,undefined4 *ar7)

{
  ring[rp++ & 255] = "FUN_8c0db5a8";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  *ar5 = *(undefined4 *)(unsigned)(ar4 + 0x50);
  *ar6 = *(undefined4 *)(unsigned)(ar4 + 0x54);
  *ar7 = *(undefined4 *)(unsigned)(ar4 + 0x58);
  return (undefined4 *)(unsigned)(ar4 + 0x54);
}

__asm__(".globl _FUN_8c0db5a8\n.set _FUN_8c0db5a8, _FUN_8c0db5a8_def\n");
//@unit 8c0db5c4
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
undefined4 FUN_8c0db5c4_def(int ar4,double *ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0db5c4";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 72; for (int i_ = 0; i_ < 72; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 ar4_00;
  double *ar5_00;
  undefined1 *puVar2;
  int ar5_01;
  undefined1 *ar6_00;
  undefined1 *ar7_00;
  undefined4 uVar3;
  int iVar4;
  float fVar5;
  double in_dr0 = 0;
  double dVar6;
  float fVar7;
  float fVar8;
  undefined4 in_fr12 = 0;
  undefined4 in_fr15 = 0;
  double dVar9;
  double in_xd14 = 0;
  bool bVar10;
  char cVar11;
  char cVar12;
  
  cVar12 = '\0';
  cVar11 = '\0';
  ar5_00 = ar5;
  iVar1 = (vsp = ((unsigned long)(fr0_ - 72)), get_field_300_0bf154(ar4 + 0xa4,ar5,ar6,ar7));
  uVar3 = 0;
  (vsp = ((unsigned long)(fr0_ - 72)), Vec3_ctor_zero(((undefined1 *)(fr0_ - 0x34)),ar5_00,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 72)), Vec3_ctor_zero(((undefined1 *)(fr0_ - 0x44)),ar5_00,ar6,ar7));
  fVar8 = 0.0;
  if (cVar12 == '\0') {
    dVar9 = CONCAT44D(0x47435000,in_fr15);
  }
  else {
    dVar9 = -7.932638084811958e-251;
  }
  if (iVar1 == 0) {
    (vsp = ((unsigned long)(fr0_ - 72)), Vec3_dtor(((undefined1 *)(fr0_ - 0x44)),0xffffffff,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 72)), Vec3_dtor(((undefined1 *)(fr0_ - 0x34)),0xffffffff,ar6,ar7));
    uVar3 = 0;
  }
  else {
    ar7_00 = ((undefined1 *)(fr0_ - 0x3c));
    ar6_00 = ((undefined1 *)(fr0_ - 0x40));
    puVar2 = ((undefined1 *)(fr0_ - 0x44));
    (vsp = ((unsigned long)(fr0_ - 72)), FUN_8c0db5a8(ar4 + 0x9e8,puVar2,ar6_00,ar7_00));
    ar4_00 = (vsp = ((unsigned long)(fr0_ - 72)), FUN_8c0da588(ar4 + 0xa4,puVar2,ar6_00,ar7_00));
    for (iVar4 = 0; iVar4 < iVar1; iVar4 = iVar4 + 1) {
      ar7_00 = ((undefined1 *)(fr0_ - 0x2c));
      ar6_00 = ((undefined1 *)(fr0_ - 0x30));
      (vsp = ((unsigned long)(fr0_ - 72)), FUN_8c0507a4(ar4_00,((undefined1 *)(fr0_ - 0x34)),ar6_00,ar7_00));
      ar5_01 = ar4 + 0xa68;
      (vsp = ((unsigned long)(fr0_ - 72)), FUN_8c023b4c(((undefined1 *)(fr0_ - 0x34)),ar5_01,ar6_00,ar7_00));
      (vsp = ((unsigned long)(fr0_ - 72)), Vec3_length_sq(((undefined1 *)(fr0_ - 0x34)),ar5_01,ar6_00,ar7_00));
      dVar6 = in_dr0;
      if (cVar12 == '\0') {
        dVar9 = CONCAT44D((int)(D2U(dVar9) >> 0x20),(int)((ulonglong)in_dr0 >> 0x20));
        dVar6 = in_xd14;
      }
      in_xd14 = dVar6;
      (vsp = ((unsigned long)(fr0_ - 72)), Vec3_length(((undefined1 *)(fr0_ - 0x34)),ar5_01,ar6_00,ar7_00));
      fVar5 = F32HI(in_dr0);
      puVar2 = ((undefined1 *)(fr0_ - 0x34));
      (vsp = ((unsigned long)(fr0_ - 72)), FUN_8c022dac(((undefined1 *)(fr0_ - 0x44)),puVar2,ar6_00,ar7_00));
      if (cVar12 == '\0') {
        dVar6 = CONCAT44D(0x40000000,*(undefined4 *)(unsigned)(ar4 + 0xba4));
        fVar8 = fVar5;
      }
      else {
        dVar6 = -1.2765500855395165e-250;
      }
      if (cVar11 == '\0') {
        fVar5 = F32LO(dVar6) / F32HI(dVar6);
      }
      else {
        fVar5 = SUB84(dVar6 / dVar6,0);
      }
      if (cVar12 == '\0') {
        in_dr0 = CONCAT44D(0x40000000,fVar5);
      }
      else {
        in_dr0 = -1.2765500855395165e-250;
      }
      if (cVar11 == '\0') {
        fVar7 = F32HI(in_dr0);
        fVar5 = F32LO(in_dr0) + fVar7;
        in_dr0 = CONCAT44D(fVar7,fVar5);
        bVar10 = fVar8 < fVar5;
      }
      else {
        in_dr0 = in_dr0 + in_dr0;
        bVar10 = CONCAT44D(in_fr12,fVar8) < in_dr0;
      }
      if (((bVar10) &&
          (fVar5 = F32LO(dVar9), cVar11 == '\0' && fVar5 < F32HI(dVar9))) &&
         (uVar3 = ar4_00, dVar9 = in_xd14, cVar12 == '\0')) {
        dVar9 = CONCAT44D(fVar5,fVar5);
      }
      ar4_00 = (vsp = ((unsigned long)(fr0_ - 72)), list_node_next(ar4_00,puVar2,ar6_00,ar7_00));
    }
    if (cVar12 == '\0') {
      *(int *)(unsigned)ar5 = (int)(D2U(dVar9) >> 0x20);
    }
    else {
      *ar5 = dVar9;
    }
    (vsp = ((unsigned long)(fr0_ - 72)), Vec3_dtor(((undefined1 *)(fr0_ - 0x44)),0xffffffff,ar6_00,ar7_00));
    (vsp = ((unsigned long)(fr0_ - 72)), Vec3_dtor(((undefined1 *)(fr0_ - 0x34)),0xffffffff,ar6_00,ar7_00));
  }
  return uVar3;
}

__asm__(".globl _FUN_8c0db5c4\n.set _FUN_8c0db5c4, _FUN_8c0db5c4_def\n");
//@unit 8c0db764
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
undefined4 FUN_8c0db764_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0db764";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c0fe108))))
                    (ar4 + 0xa4,ar5,ar6,ar7));
  return uVar1;
}

__asm__(".globl _FUN_8c0db764\n.set _FUN_8c0db764, _FUN_8c0db764_def\n");
//@unit 8c0db790
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
undefined4 FUN_8c0db790_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0db790";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c0fe41c))))
                    (ar5 * 0x3c + ar4 + 0x3a8,ar6,ar6,ar7));
  return *(undefined4 *)(unsigned)(iVar1 + 8);
}

__asm__(".globl _FUN_8c0db790\n.set _FUN_8c0db790, _FUN_8c0db790_def\n");
//@unit 8c0db7d4
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
undefined4 FUN_8c0db7d4_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0db7d4";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), get_field_38_0db5a0(ar5 * 0x3c + ar4 + 0x3a8,ar5,ar6,ar7));
  return uVar1;
}

__asm__(".globl _FUN_8c0db7d4\n.set _FUN_8c0db7d4, _FUN_8c0db7d4_def\n");
//@unit 8c0db810
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
int FUN_8c0db810_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0db810";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int ar4_00;
  int ar5_00;
  int iVar1;
  
  ar5_00 = ar5;
  ar4_00 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0da588(ar4 + 0xa4,ar5,ar6,ar7));
  iVar1 = 1;
  while (ar4_00 != ar5) {
    ar4_00 = (vsp = ((unsigned long)(fr0_ - 0)), list_node_next(ar4_00,ar5_00,ar6,ar7));
    iVar1 = iVar1 + 1;
  }
  return iVar1;
}

__asm__(".globl _FUN_8c0db810\n.set _FUN_8c0db810, _FUN_8c0db810_def\n");
//@unit 8c0db864
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
int FUN_8c0db864_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0db864";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  int iVar2;
  
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0db810(ar4,ar5,ar6,ar7));
  iVar2 = (vsp = ((unsigned long)(fr0_ - 0)), get_field_300_0bf154(ar4 + 0xa4,ar5,ar6,ar7));
  return iVar2 - iVar1;
}

__asm__(".globl _FUN_8c0db864\n.set _FUN_8c0db864, _FUN_8c0db864_def\n");
//@unit 8c0db8a8
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
undefined4 FUN_8c0db8a8_def(int ar4,undefined4 *ar5,undefined4 *ar6,undefined4 *ar7)

{
  ring[rp++ & 255] = "FUN_8c0db8a8";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  *ar5 = *(undefined4 *)(unsigned)(ar4 + 0xa68);
  *ar6 = *(undefined4 *)(unsigned)(ar4 + 0xa6c);
  *ar7 = *(undefined4 *)(unsigned)(ar4 + 0xa70);
  return 0xa70;
}

__asm__(".globl _FUN_8c0db8a8\n.set _FUN_8c0db8a8, _FUN_8c0db8a8_def\n");
//@unit 8c0db8d4
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
undefined4 FUN_8c0db8d4_def(int ar4,undefined4 *ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0db8d4";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 24; for (int i_ = 0; i_ < 24; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 *ar5_00;
  int iVar2;
  
  (*(undefined4 *)(fr0_ - 0xc)) = 0;
  (*(undefined4 *)(fr0_ - 0x18)) = 0;
  ar5_00 = ar5;
  for (iVar2 = 0; iVar2 < 0x11; iVar2 = iVar2 + 1) {
    while (iVar1 = (vsp = ((unsigned long)(fr0_ - 24)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c0db5a0))))
                             (iVar2 * 0x3c + ar4 + 0x3a8,ar5_00,ar6,ar7)), iVar1 != 0) {
      iVar1 = (vsp = ((unsigned long)(fr0_ - 24)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c0db5a0))))
                        (iVar2 * 0x3c + ar4 + 0x3a8,ar5_00,ar6,ar7));
      ((undefined4 *)(fr0_ - 0x14))[0] =
           (vsp = ((unsigned long)(fr0_ - 24)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c0fe41c))))
                     (iVar2 * 0x3c + ar4 + 0x3a8,iVar1 + -1,ar6,ar7));
      (vsp = ((unsigned long)(fr0_ - 24)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c0fe334))))
                (iVar2 * 0x3c + ar4 + 0x3a8,((undefined4 *)(fr0_ - 0x14))[0],ar6,ar7));
      ar5_00 = ((undefined4 *)(fr0_ - 0x14));
      (vsp = ((unsigned long)(fr0_ - 24)), FUN_8c0feb88(ar4 + 0x7a4,ar5_00,ar6,ar7));
    }
    (vsp = ((unsigned long)(fr0_ - 24)), FUN_8c0fe4c4(iVar2 * 0x3c + ar4 + 0x3a8,ar5_00,ar6,ar7));
  }
  while (iVar2 = (vsp = ((unsigned long)(fr0_ - 24)), get_field_300_0bf154(ar4 + 0xa4,ar5_00,ar6,ar7)),
        iVar2 != 0) {
    iVar2 = (vsp = ((unsigned long)(fr0_ - 24)), get_field_300_0bf154(ar4 + 0xa4,ar5_00,ar6,ar7));
    (*(undefined4 *)(fr0_ - 0x18)) = (vsp = ((unsigned long)(fr0_ - 24)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c0fe108))))
                          (ar4 + 0xa4,iVar2 + -1,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 24)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c0fe018))))
              (ar4 + 0xa4,(*(undefined4 *)(fr0_ - 0x18)),ar6,ar7));
    ar5_00 = ar5;
    (vsp = ((unsigned long)(fr0_ - 24)), FUN_8c0d1b90(&(*(undefined4 *)(fr0_ - 0x18)),ar5,ar6,ar7));
  }
  *(undefined4 *)(unsigned)(0x9d4 + ar4) = 0;
  *(undefined4 *)(unsigned)(0x1020 + ar4) = 0;
  *(undefined4 *)(unsigned)(0x1024 + ar4) = 0;
  return 1;
}

__asm__(".globl _FUN_8c0db8d4\n.set _FUN_8c0db8d4, _FUN_8c0db8d4_def\n");
//@unit 8c0dba50
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
undefined4 FUN_8c0dba50_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0dba50";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 60; for (int i_ = 0; i_ < 60; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 ar5_00;
  undefined4 ar6_00;
  undefined1 *ar6_01;
  int iVar2;
  
  iVar2 = 0;
  ar5_00 = ar5;
  ar6_00 = ar6;
  while( true ) {
    if (7 < iVar2) {
      return 0;
    }
    iVar1 = (vsp = ((unsigned long)(fr0_ - 60)), FUN_8c0f6ab0(ar4 + iVar2 * 0x68 + 0xc0c,ar5_00,ar6_00,ar7));
    if (iVar1 == 0) break;
    iVar2 = iVar2 + 1;
  }
  (vsp = ((unsigned long)(fr0_ - 60)), Vec3_ctor_copy(((undefined1 *)(fr0_ - 0x28)),ar5,ar6_00,ar7));
  (vsp = ((unsigned long)(fr0_ - 60)), Vec3_ctor_copy(((undefined1 *)(fr0_ - 0x38)),ar6,ar6_00,ar7));
  ar6_01 = ((undefined1 *)(fr0_ - 0x38));
  (vsp = ((unsigned long)(fr0_ - 60)), FUN_8c0f69ec(ar4 + iVar2 * 0x68 + 0xc0c,((undefined1 *)(fr0_ - 0x28)),ar6_01,ar7));
  (vsp = ((unsigned long)(fr0_ - 60)), Vec3_dtor(((undefined1 *)(fr0_ - 0x38)),0xffffffff,ar6_01,ar7));
  (vsp = ((unsigned long)(fr0_ - 60)), Vec3_dtor(((undefined1 *)(fr0_ - 0x28)),0xffffffff,ar6_01,ar7));
  return 1;
}

__asm__(".globl _FUN_8c0dba50\n.set _FUN_8c0dba50, _FUN_8c0dba50_def\n");
//@unit 8c0dbb14
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
int s_GRAPHICS_COMMON_0dbb1a_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "s_GRAPHICS_COMMON_0dbb1a";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int *ar7_00;
  int iVar1;
  undefined **ar5_00;
  uint uVar2;
  
  ({ unsigned long ri0_ = (unsigned long)(ar5); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); FUN_8c015ad4(ar4 + 0xc,((undefined1 *)(unsigned)0x8c162770),ar6,ar7); });
  ar5_00 = &(*(undefined4 *)(unsigned)(unsigned)0x8c1622e4);
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(ar4 + 4) + 8))))((int *)(unsigned)(ar4 + 4),&(*(undefined4 *)(unsigned)(unsigned)0x8c1622e4),ar6,ar7));
  ar7_00 = (int *)(unsigned)(vsp = ((unsigned long)(fr0_ - 0)), get_field_4_0253e4(ar4 + 4,ar5_00,ar6,ar7));
  for (uVar2 = 0; uVar2 < (uint)ar7_00[1]; uVar2 = uVar2 + 1) {
    iVar1 = uVar2 * 0xc + *ar7_00;
    *(uint *)(unsigned)(iVar1 + 4) = *(uint *)(unsigned)(iVar1 + 4) | 0x80000000;
  }
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c020ef0(ar5,((undefined1 *)(unsigned)0x8c13fd91),((undefined1 *)(unsigned)0x8c13f7c0),ar7_00));
  if (iVar1 == -1) {
    iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), report_error_message(((undefined1 *)(unsigned)0x8c13fd96),((undefined1 *)(unsigned)0x8c13f91d),0,2));
  }
  return iVar1;
}

__asm__(".globl _s_GRAPHICS_COMMON_0dbb1a\n.set _s_GRAPHICS_COMMON_0dbb1a, _s_GRAPHICS_COMMON_0dbb1a_def\n");
//@unit 8c0dbbe8
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
int FUN_8c0dbbe8_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0dbbe8";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 32; for (int i_ = 0; i_ < 32; i_++) z_[i_] = 0; }
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 ar5_00;
  int iVar4;
  
  iVar1 = (vsp = ((unsigned long)(fr0_ - 32)), get_field_300_0bf154(ar4 + 0xa4,ar5,ar6,ar7));
  iVar2 = (vsp = ((unsigned long)(fr0_ - 32)), FUN_8c0da588(ar4 + 0xa4,ar5,ar6,ar7));
  iVar3 = 0;
  for (iVar4 = 0; iVar4 < iVar1; iVar4 = iVar4 + 1) {
    ((int *)(fr0_ - 0x1c))[0] = iVar2;
    iVar3 = (vsp = ((unsigned long)(fr0_ - 32)), FUN_8c0f4d34(iVar2,ar5,ar6,ar7));
    if (iVar3 == 0) {
      iVar2 = (vsp = ((unsigned long)(fr0_ - 32)), get_field_24_05c284(((int *)(fr0_ - 0x1c))[0],ar5,ar6,ar7));
      if (iVar2 == 0xd) {
        *(undefined4 *)(unsigned)0x8c431a54 = 0;
      }
      if (((int *)(fr0_ - 0x1c))[0] == *(int *)(unsigned)(0xac8 + ar4)) {
        *(undefined4 *)(unsigned)(0xac8 + ar4) = 0;
      }
      if (((int *)(fr0_ - 0x1c))[0] == *(int *)(unsigned)(0x9d4 + ar4)) {
        *(undefined4 *)(unsigned)(0x9d4 + ar4) = 0;
      }
      iVar2 = ((int *)(fr0_ - 0x1c))[0];
      iVar3 = (vsp = ((unsigned long)(fr0_ - 32)), get_field_24_05c284(((int *)(fr0_ - 0x1c))[0],ar5,ar6,ar7));
      if (iVar3 != 0xf) {
        (vsp = ((unsigned long)(fr0_ - 32)), FUN_8c0c4e2c(iVar2,ar5,ar6,ar7));
      }
      iVar2 = (vsp = ((unsigned long)(fr0_ - 32)), list_node_next(((int *)(fr0_ - 0x1c))[0],ar5,ar6,ar7));
      iVar3 = (vsp = ((unsigned long)(fr0_ - 32)), get_field_24_05c284(((int *)(fr0_ - 0x1c))[0],ar5,ar6,ar7));
      ar5_00 = (vsp = ((unsigned long)(fr0_ - 32)), get_field_160_0dab80(((int *)(fr0_ - 0x1c))[0],ar5,ar6,ar7));
      (vsp = ((unsigned long)(fr0_ - 32)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c0fe334))))
                (iVar3 * 0x3c + ar4 + 0x3a8,ar5_00,ar6,ar7));
      (*(undefined4 *)(fr0_ - 0x20)) = (vsp = ((unsigned long)(fr0_ - 32)), get_field_160_0dab80(((int *)(fr0_ - 0x1c))[0],ar5_00,ar6,ar7));
      (vsp = ((unsigned long)(fr0_ - 32)), FUN_8c0feb88(ar4 + 0x7a4,&(*(undefined4 *)(fr0_ - 0x20)),ar6,ar7));
      (vsp = ((unsigned long)(fr0_ - 32)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c0fe018))))
                (ar4 + 0xa4,((int *)(fr0_ - 0x1c))[0],ar6,ar7));
      ar5 = 1;
      iVar3 = (vsp = ((unsigned long)(fr0_ - 32)), FUN_8c0d1b90(((int *)(fr0_ - 0x1c)),1,ar6,ar7));
    }
    else {
      iVar3 = (vsp = ((unsigned long)(fr0_ - 32)), list_node_next(iVar2,ar5,ar6,ar7));
      iVar2 = iVar3;
    }
  }
  return iVar3;
}

__asm__(".globl _FUN_8c0dbbe8\n.set _FUN_8c0dbbe8, _FUN_8c0dbbe8_def\n");
//@unit 8c0dbd64
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
undefined4 FUN_8c0dbd64_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0dbd64";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0d9c60(ar4,ar5,ar6,ar7));
  return 1;
}

__asm__(".globl _FUN_8c0dbd64\n.set _FUN_8c0dbd64, _FUN_8c0dbd64_def\n");
//@unit 8c0dbd80
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
undefined4 FUN_8c0dbd80_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0dbd80";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 ar4_00;
  int iVar2;
  
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), get_field_300_0bf154(ar4 + 0xa4,ar5,ar6,ar7));
  ar4_00 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0da588(ar4 + 0xa4,ar5,ar6,ar7));
  for (iVar2 = 0; iVar2 < iVar1; iVar2 = iVar2 + 1) {
    (vsp = ((unsigned long)(fr0_ - 0)), Vec3_assign_wrap_0f4da4(ar4_00,ar5,ar6,ar7));
    ar4_00 = (vsp = ((unsigned long)(fr0_ - 0)), list_node_next(ar4_00,ar5,ar6,ar7));
  }
  return ar4_00;
}

__asm__(".globl _FUN_8c0dbd80\n.set _FUN_8c0dbd80, _FUN_8c0dbd80_def\n");
//@unit 8c0dbdf4
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
undefined4 FUN_8c0dbdf4_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0dbdf4";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0194c0(ar4 + 0x9e8,ar5,ar6,ar7));
  return uVar1;
}

__asm__(".globl _FUN_8c0dbdf4\n.set _FUN_8c0dbdf4, _FUN_8c0dbdf4_def\n");
//@unit 8c0dbe24
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
undefined4 FUN_8c0dbe24_def(int ar4,undefined4 ar5,undefined8 *ar6,int ar7)

{
  ring[rp++ & 255] = "FUN_8c0dbe24";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 200; for (int i_ = 0; i_ < 200; i_++) z_[i_] = 0; }
  undefined8 uVar1;
  int iVar2;
  undefined4 ar4_00;
  undefined4 uVar3;
  undefined8 *ar6_00;
  undefined4 uVar4;
  int iVar5;
  undefined8 in_dr0 = 0;
  undefined4 uVar6;
  undefined8 in_xd14 = 0;
  char cVar7;
  char cVar8;
  
  cVar8 = '\0';
  cVar7 = '\0';
  uVar3 = ar5;
  ar6_00 = ar6;
  iVar2 = (vsp = ((unsigned long)(fr0_ - 200)), get_field_300_0bf154(ar4 + 0xa4,ar5,ar6,ar7));
  uVar4 = 0;
  (vsp = ((unsigned long)(fr0_ - 200)), Vec3_ctor_zero(&(*(undefined8 *)(fr0_ - 0x34)),uVar3,ar6_00,ar7));
  uVar6 = 0;
  (vsp = ((unsigned long)(fr0_ - 200)), FUN_8c0191e4(((undefined1 *)(fr0_ - 0xb4)),uVar3,ar6_00,ar7));
  if (iVar2 == 0) {
    (vsp = ((unsigned long)(fr0_ - 200)), free_if_nonnull_wrap_019270(((undefined1 *)(fr0_ - 0xb4)),0xffffffff,ar6_00,ar7));
    (vsp = ((unsigned long)(fr0_ - 200)), Vec3_dtor(&(*(undefined8 *)(fr0_ - 0x34)),0xffffffff,ar6_00,ar7));
    uVar4 = 0;
  }
  else {
    ar4_00 = (vsp = ((unsigned long)(fr0_ - 200)), FUN_8c0da588(ar4 + 0xa4,uVar3,ar6_00,ar7));
    for (iVar5 = 0; iVar5 < iVar2; iVar5 = iVar5 + 1) {
      uVar3 = (vsp = ((unsigned long)(fr0_ - 200)), FUN_8c0dbf88(ar4_00,uVar3,ar6_00,ar7));
      (vsp = ((unsigned long)(fr0_ - 200)), Vec3_ctor_copy(((undefined1 *)(fr0_ - 0xc4)),uVar3,ar6_00,ar7));
      ar7 = (int)&(*(undefined8 *)(fr0_ - 0x34)) + 4;
      ar6_00 = &(*(undefined8 *)(fr0_ - 0x34));
      (vsp = ((unsigned long)(fr0_ - 200)), FUN_8c019508(((undefined1 *)(fr0_ - 0xb4)),((undefined1 *)(fr0_ - 0xc4)),ar6_00,ar7));
      (vsp = ((unsigned long)(fr0_ - 200)), Vec3_dtor(((undefined1 *)(fr0_ - 0xc4)),0xffffffff,ar6_00,ar7));
      uVar3 = ar5;
      (vsp = ((unsigned long)(fr0_ - 200)), FUN_8c022fc0(&(*(undefined8 *)(fr0_ - 0x34)),ar5,ar6_00,ar7));
      uVar1 = in_dr0;
      if (cVar8 == '\0') {
        uVar6 = (undefined4)((ulonglong)in_dr0 >> 0x20);
        in_dr0 = CONCAT44(uVar6,*(undefined4 *)(unsigned)ar6);
        uVar1 = in_xd14;
      }
      in_xd14 = uVar1;
      if (cVar7 == '\0' && F32HI(in_dr0) < (float)in_dr0) {
        uVar4 = ar4_00;
        if (cVar8 == '\0') {
          *(undefined4 *)(unsigned)ar6 = uVar6;
        }
        else {
          *ar6 = in_xd14;
        }
      }
      ar4_00 = (vsp = ((unsigned long)(fr0_ - 200)), list_node_next(ar4_00,uVar3,ar6_00,ar7));
    }
    (vsp = ((unsigned long)(fr0_ - 200)), free_if_nonnull_wrap_019270(((undefined1 *)(fr0_ - 0xb4)),0xffffffff,ar6_00,ar7));
    (vsp = ((unsigned long)(fr0_ - 200)), Vec3_dtor(&(*(undefined8 *)(fr0_ - 0x34)),0xffffffff,ar6_00,ar7));
  }
  return uVar4;
}

__asm__(".globl _FUN_8c0dbe24\n.set _FUN_8c0dbe24, _FUN_8c0dbe24_def\n");
//@unit 8c0dbf88
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
int FUN_8c0dbf88_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0dbf88";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return ar4 + 0x30;
}

__asm__(".globl _FUN_8c0dbf88\n.set _FUN_8c0dbf88, _FUN_8c0dbf88_def\n");
//@unit 8c0dbf90
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
undefined4 FUN_8c0dbf90_def(int *ar4,int *ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0dbf90";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  int *piVar2;
  float fVar3;
  double in_dr0 = 0;
  double dVar4;
  float fVar5;
  undefined4 in_fr3 = 0;
  double dVar6;
  ulonglong in_dr14 = 0;
  double dVar7;
  double in_xd0 = 0;
  double in_xd14 = 0;
  char cVar8;
  char cVar9;
  
  cVar9 = '\0';
  cVar8 = '\0';
  dVar7 = (double)(in_dr14 & 0xffffffff00000000);
  piVar2 = ar5;
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c100a58(ar5,ar5,ar6,ar7));
  if (iVar1 == 1) {
    piVar2 = (int *)(unsigned)0x0;
    (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0c51a0(ar5,0,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0dc27c(ar5,piVar2,ar6,ar7));
    if (cVar9 == '\0') {
      dVar6 = CONCAT44D(ar4[0x29c],in_fr3);
      dVar4 = CONCAT44D(0x41200000,(int)((ulonglong)in_dr0 >> 0x20));
    }
    else {
      dVar6 = *(double *)(unsigned)(ar4 + 0x29c);
      dVar4 = -1.4003621681683483e-250;
      in_xd0 = in_dr0;
    }
    if (cVar8 == '\0') {
      fVar5 = F32HI(dVar4);
      fVar3 = F32LO(dVar4) * fVar5;
      in_dr0 = CONCAT44D(fVar5,fVar3);
      dVar6 = CONCAT44D(F32HI(dVar6) + fVar3,SUB84(dVar6,0));
    }
    else {
      in_dr0 = dVar4 * dVar4;
      dVar6 = dVar6 + in_dr0;
    }
    if (cVar9 == '\0') {
      ar4[0x29c] = (int)(D2U(dVar6) >> 0x20);
    }
    else {
      *(double *)(unsigned)(ar4 + 0x29c) = dVar6;
    }
  }
  else {
    iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c100abc(ar5,piVar2,ar6,ar7));
    if (iVar1 == 1) {
      piVar2 = (int *)(unsigned)0x0;
      (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0c51a0(ar5,0,ar6,ar7));
      (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0dc27c(ar5,piVar2,ar6,ar7));
      if (cVar9 == '\0') {
        dVar6 = CONCAT44D(ar4[0x29c],in_fr3);
        dVar4 = CONCAT44D(0x41200000,(int)((ulonglong)in_dr0 >> 0x20));
      }
      else {
        dVar6 = *(double *)(unsigned)(ar4 + 0x29c);
        dVar4 = -1.4003621681683483e-250;
        in_xd0 = in_dr0;
      }
      if (cVar8 == '\0') {
        fVar5 = F32HI(dVar4);
        fVar3 = F32LO(dVar4) * fVar5;
        in_dr0 = CONCAT44D(fVar5,fVar3);
        dVar6 = CONCAT44D(F32HI(dVar6) + fVar3,SUB84(dVar6,0));
      }
      else {
        in_dr0 = dVar4 * dVar4;
        dVar6 = dVar6 + in_dr0;
      }
      if (cVar9 == '\0') {
        ar4[0x29c] = (int)(D2U(dVar6) >> 0x20);
      }
      else {
        *(double *)(unsigned)(ar4 + 0x29c) = dVar6;
      }
    }
  }
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((ar4[0x2dc] + 8))))(ar4 + 0x2dc,piVar2,ar6,ar7));
  dVar6 = in_dr0;
  if (cVar9 == '\0') {
    dVar7 = CONCAT44D((int)(D2U(dVar7) >> 0x20),(int)((ulonglong)in_dr0 >> 0x20));
    dVar6 = in_xd14;
  }
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c100b20(ar5,piVar2,ar6,ar7));
  if (iVar1 == 1) {
    (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0dc27c(ar5,piVar2,ar6,ar7));
    if (cVar8 == '\0') {
      in_dr0 = CONCAT44D(-F32HI(in_dr0),SUB84(in_dr0,0));
    }
    else {
      in_dr0 = -in_dr0;
    }
    dVar4 = dVar6;
    if (cVar9 == '\0') {
      in_dr0 = CONCAT44D((int)((ulonglong)in_dr0 >> 0x20),SUB84(dVar7,0));
      dVar4 = in_xd0;
    }
    if (cVar8 == '\0') {
      fVar3 = F32LO(in_dr0) * F32HI(in_dr0);
    }
    else {
      fVar3 = SUB84(in_dr0 * in_dr0,0);
    }
    if (cVar9 == '\0') {
      in_dr0 = CONCAT44D(ar4[0x29b],fVar3);
    }
    else {
      in_dr0 = *(double *)(unsigned)(ar4 + 0x29b);
    }
    if (cVar8 == '\0') {
      fVar3 = F32HI(in_dr0);
      in_dr0 = CONCAT44D(fVar3,F32LO(in_dr0) + fVar3);
    }
    else {
      in_dr0 = in_dr0 + in_dr0;
    }
    if (cVar9 == '\0') {
      ar4[0x29b] = SUB84(in_dr0,0);
    }
    else {
      *(double *)(unsigned)(ar4 + 0x29b) = dVar4;
    }
    (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c1004b4(ar5,piVar2,ar6,ar7));
  }
  else {
    iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c100b84(ar5,piVar2,ar6,ar7));
    if (iVar1 == 1) {
      (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0dc27c(ar5,piVar2,ar6,ar7));
      if (cVar8 == '\0') {
        in_dr0 = CONCAT44D(-F32HI(in_dr0),SUB84(in_dr0,0));
      }
      else {
        in_dr0 = -in_dr0;
      }
      dVar4 = dVar6;
      if (cVar9 == '\0') {
        in_dr0 = CONCAT44D((int)((ulonglong)in_dr0 >> 0x20),SUB84(dVar7,0));
        dVar4 = in_xd0;
      }
      if (cVar8 == '\0') {
        fVar3 = F32LO(in_dr0) * F32HI(in_dr0);
      }
      else {
        fVar3 = SUB84(in_dr0 * in_dr0,0);
      }
      if (cVar9 == '\0') {
        in_dr0 = CONCAT44D(ar4[0x29b],fVar3);
      }
      else {
        in_dr0 = *(double *)(unsigned)(ar4 + 0x29b);
      }
      if (cVar8 == '\0') {
        fVar3 = F32HI(in_dr0);
        in_dr0 = CONCAT44D(fVar3,F32LO(in_dr0) + fVar3);
      }
      else {
        in_dr0 = in_dr0 + in_dr0;
      }
      if (cVar9 == '\0') {
        ar4[0x29b] = SUB84(in_dr0,0);
      }
      else {
        *(double *)(unsigned)(ar4 + 0x29b) = dVar4;
      }
      (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c10052c(ar5,piVar2,ar6,ar7));
    }
  }
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c100be8(ar5,piVar2,ar6,ar7));
  if (iVar1 == 1) {
    (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0dc26c(ar5,piVar2,ar6,ar7));
    if (cVar8 == '\0') {
      dVar7 = CONCAT44D((int)(D2U(dVar7) >> 0x20),
                               F32LO(dVar7) * F32HI(in_dr0));
    }
    else {
      dVar7 = dVar7 * in_dr0;
    }
    if (cVar9 == '\0') {
      dVar4 = CONCAT44D(ar4[0x29a],SUB84(in_dr0,0));
    }
    else {
      dVar4 = *(double *)(unsigned)(ar4 + 0x29a);
    }
    if (cVar8 == '\0') {
      fVar3 = F32LO(dVar7) + F32HI(dVar4);
    }
    else {
      fVar3 = SUB84(dVar7 + dVar4,0);
    }
    if (cVar9 == '\0') {
      ar4[0x29a] = (int)fVar3;
    }
    else {
      *(double *)(unsigned)(ar4 + 0x29a) = dVar6;
    }
    (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c1005a4(ar5,piVar2,ar6,ar7));
  }
  else {
    iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c100c34(ar5,piVar2,ar6,ar7));
    if (iVar1 == 1) {
      (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0dc26c(ar5,piVar2,ar6,ar7));
      if (cVar8 == '\0') {
        dVar7 = CONCAT44D((int)(D2U(dVar7) >> 0x20),
                                 F32LO(dVar7) * F32HI(in_dr0));
      }
      else {
        dVar7 = dVar7 * in_dr0;
      }
      if (cVar9 == '\0') {
        dVar4 = CONCAT44D(ar4[0x29a],SUB84(in_dr0,0));
      }
      else {
        dVar4 = *(double *)(unsigned)(ar4 + 0x29a);
      }
      if (cVar8 == '\0') {
        fVar3 = F32LO(dVar7) + F32HI(dVar4);
      }
      else {
        fVar3 = SUB84(dVar7 + dVar4,0);
      }
      if (cVar9 == '\0') {
        ar4[0x29a] = (int)fVar3;
      }
      else {
        *(double *)(unsigned)(ar4 + 0x29a) = dVar6;
      }
      (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c10061c(ar5,piVar2,ar6,ar7));
    }
  }
  piVar2 = ar5;
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0dc990(ar4,ar5,ar6,ar7));
  if (((ar4[9] != 2) && (ar4[0x275] != 0)) && (iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0dc244(ar5,piVar2,ar6,ar7)), iVar1 == 1)
     ) {
    piVar2 = (int *)(unsigned)(uint)ar4[0x275];
    (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0d69a8(ar4 + 0x29a,piVar2,ar6,ar7));
    ar4[0x275] = 0;
    (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0c51c4(ar5,piVar2,ar6,ar7));
  }
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c10022c(ar5,piVar2,ar6,ar7));
  if (iVar1 == 1) {
    piVar2 = ar4 + 0x29a;
    (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*ar4 + 0x68))))(ar4,piVar2,ar6,ar7));
  }
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c1002a8(ar5,piVar2,ar6,ar7));
  return 1;
}

__asm__(".globl _FUN_8c0dbf90\n.set _FUN_8c0dbf90, _FUN_8c0dbf90_def\n");
//@unit 8c0dc244
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
undefined4 FUN_8c0dc244_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0dc244";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c01f040(*(undefined4 *)(unsigned)(0xcc + ar4),ar5,ar6,ar7));
  return uVar1;
}

__asm__(".globl _FUN_8c0dc244\n.set _FUN_8c0dc244, _FUN_8c0dc244_def\n");
//@unit 8c0dc26c
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
undefined4 FUN_8c0dc26c_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0dc26c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return 0x13c;
}

__asm__(".globl _FUN_8c0dc26c\n.set _FUN_8c0dc26c, _FUN_8c0dc26c_def\n");
//@unit 8c0dc27c
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
undefined4 FUN_8c0dc27c_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0dc27c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return 0x140;
}

__asm__(".globl _FUN_8c0dc27c\n.set _FUN_8c0dc27c, _FUN_8c0dc27c_def\n");
//@unit 8c0dc28c
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
undefined4 FUN_8c0dc28c_def(int *ar4,int *ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0dc28c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  float fVar4;
  undefined8 uVar5;
  double dVar6;
  undefined8 in_xd0 = 0;
  char cVar7;
  char cVar8;
  
  cVar8 = '\0';
  cVar7 = '\0';
  piVar3 = ar5;
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0dc520(ar5,ar5,ar6,ar7));
  if ((((iVar1 == 1) && (ar4[0x275] == ar4[0x2b2])) ||
      ((iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0dc520(ar5,piVar3,ar6,ar7)), iVar1 == 1 && (ar4[0x275] == 0)))) ||
     (ar4[0x2b2] == 0)) {
    if (cVar8 == '\0') {
      uVar5 = CONCAT44(ar4[0x2b0],ar4[0x29c]);
    }
    else {
      in_xd0 = *(undefined8 *)(unsigned)(ar4 + 0x29c);
      uVar5 = *(undefined8 *)(unsigned)(ar4 + 0x2b0);
    }
    if (cVar7 != '\0' || F32HI(uVar5) <= (float)uVar5) {
      if (cVar8 == '\0') {
        dVar6 = CONCAT44D(0x43160000,ar4[0x29c]);
      }
      else {
        in_xd0 = *(undefined8 *)(unsigned)(ar4 + 0x29c);
        dVar6 = 5.66204084872116e-311;
      }
      if (cVar7 == '\0') {
        fVar4 = F32LO(dVar6) + F32HI(dVar6);
      }
      else {
        fVar4 = SUB84(dVar6 + dVar6,0);
      }
      if (cVar8 == '\0') {
        ar4[0x2a8] = (int)fVar4;
      }
      else {
        *(undefined8 *)(unsigned)(ar4 + 0x2a8) = in_xd0;
      }
    }
    else if (cVar8 == '\0') {
      ar4[0x2a8] = ar4[0x2b0];
    }
    else {
      *(undefined8 *)(unsigned)(ar4 + 0x2a8) = *(undefined8 *)(unsigned)(ar4 + 0x2b0);
    }
    (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0dca2c(ar4,ar5,ar6,ar7));
  }
  else {
    iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0dc520(ar5,piVar3,ar6,ar7));
    if ((iVar1 == 1) && (ar4[0x275] != ar4[0x2b2])) {
      piVar3 = (int *)(unsigned)(uint)ar4[0x275];
      (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0d69a8(ar4 + 0x29a,piVar3,ar6,ar7));
      ar4[0x275] = 0;
      (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0c51c4(ar5,piVar3,ar6,ar7));
    }
    iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), get_field_24_05c284(ar4[0x2b2],piVar3,ar6,ar7));
    if ((iVar1 == 0xe) &&
       (uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(ar4[0x2b2] + 8) + 0x148))))(ar4[0x2b2],piVar3,ar6,ar7)),
       (short)uVar2 == 1)) {
      if (cVar8 == '\0') {
        uVar5 = CONCAT44(ar4[0x2b0],ar4[0x29c]);
      }
      else {
        in_xd0 = *(undefined8 *)(unsigned)(ar4 + 0x29c);
        uVar5 = *(undefined8 *)(unsigned)(ar4 + 0x2b0);
      }
      if (cVar7 != '\0' || F32HI(uVar5) <= (float)uVar5) {
        if (cVar8 == '\0') {
          dVar6 = CONCAT44D(0x42480000,ar4[0x29c]);
        }
        else {
          in_xd0 = *(undefined8 *)(unsigned)(ar4 + 0x29c);
          dVar6 = -1.4004953740190736e-250;
        }
        if (cVar7 == '\0') {
          fVar4 = F32LO(dVar6) + F32HI(dVar6);
        }
        else {
          fVar4 = SUB84(dVar6 + dVar6,0);
        }
        if (cVar8 == '\0') {
          ar4[0x2a8] = (int)fVar4;
        }
        else {
          *(undefined8 *)(unsigned)(ar4 + 0x2a8) = in_xd0;
        }
      }
      else if (cVar8 == '\0') {
        ar4[0x2a8] = ar4[0x2b0];
      }
      else {
        *(undefined8 *)(unsigned)(ar4 + 0x2a8) = *(undefined8 *)(unsigned)(ar4 + 0x2b0);
      }
      (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0dca2c(ar4,ar5,ar6,ar7));
    }
    else {
      iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c100b20(ar5,piVar3,ar6,ar7));
      if (iVar1 == 1) {
        (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c1004b4(ar5,piVar3,ar6,ar7));
      }
      else {
        iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c100b84(ar5,piVar3,ar6,ar7));
        if (iVar1 == 1) {
          (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c10052c(ar5,piVar3,ar6,ar7));
        }
      }
      iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c100be8(ar5,piVar3,ar6,ar7));
      if (iVar1 == 1) {
        (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c1005a4(ar5,piVar3,ar6,ar7));
      }
      else {
        iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c100c34(ar5,piVar3,ar6,ar7));
        if (iVar1 == 1) {
          (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c10061c(ar5,piVar3,ar6,ar7));
        }
      }
      piVar3 = ar5;
      (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0dc990(ar4,ar5,ar6,ar7));
      iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c10022c(ar5,piVar3,ar6,ar7));
      if (iVar1 == 1) {
        piVar3 = ar4 + 0x29a;
        (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*ar4 + 0x68))))(ar4,piVar3,ar6,ar7));
      }
      (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c1002a8(ar5,piVar3,ar6,ar7));
    }
  }
  return 1;
}

__asm__(".globl _FUN_8c0dc28c\n.set _FUN_8c0dc28c, _FUN_8c0dc28c_def\n");
//@unit 8c0dc520
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
undefined4 FUN_8c0dc520_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0dc520";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c01f040(*(undefined4 *)(unsigned)(0xcc + ar4),ar5,ar6,ar7));
  return uVar1;
}

__asm__(".globl _FUN_8c0dc520\n.set _FUN_8c0dc520, _FUN_8c0dc520_def\n");
//@unit 8c0dc548
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
undefined4 ret_const_1_0dc548_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "ret_const_1_0dc548";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return 1;
}

__asm__(".globl _ret_const_1_0dc548\n.set _ret_const_1_0dc548, _ret_const_1_0dc548_def\n");
//@unit 8c0dc558
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
undefined4 FUN_8c0dc558_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0dc558";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 ar5_00;
  
  ar5_00 = ar5;
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0dc5d0(ar5,ar5,ar6,ar7));
  if (iVar1 == 1) {
    (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0d6c18(ar4 + 0xa68,ar5_00,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0c51c4(ar5,ar5_00,ar6,ar7));
  }
  return 1;
}

__asm__(".globl _FUN_8c0dc558\n.set _FUN_8c0dc558, _FUN_8c0dc558_def\n");
//@unit 8c0dc5d0
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
undefined4 FUN_8c0dc5d0_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0dc5d0";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c01ebd8))))
                    (*(undefined4 *)(unsigned)(0xcc + ar4),ar5,ar6,ar7));
  if ((iVar1 != 0) &&
     (iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c01ec68))))
                        (*(undefined4 *)(unsigned)(0xcc + ar4),ar5,ar6,ar7)), iVar1 != 0)) {
    return 0;
  }
  return 1;
}

__asm__(".globl _FUN_8c0dc5d0\n.set _FUN_8c0dc5d0, _FUN_8c0dc5d0_def\n");
//@unit 8c0dc61c
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
int FUN_8c0dc61c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0dc61c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  
  uVar3 = ar5;
  if (*(int *)(unsigned)(0x9d4 + ar4) == 0) {
    iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0db3bc(ar4,ar5,ar6,ar7));
    if (iVar1 != 0) {
      uVar3 = 0;
      (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((0x84 + *(int *)(unsigned)(iVar1 + 8)))))(iVar1,0,ar6,ar7));
    }
  }
  else {
    iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c05c284))))
                      (*(undefined4 *)(unsigned)(0x9d4 + ar4),ar5,ar6,ar7));
    if (((iVar1 == 3) || (iVar1 == 5)) || (iVar1 == 7)) {
      uVar3 = 0;
      (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((0x84 + *(int *)(unsigned)(*(int *)(unsigned)(0x9d4 + ar4) + 8)))))
                (*(int *)(unsigned)(0x9d4 + ar4),0,ar6,ar7));
    }
  }
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c100c80(ar5,uVar3,ar6,ar7));
  if (iVar1 == 1) {
    iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), get_field_300_0bf154(ar4 + 0xa4,uVar3,ar6,ar7));
    iVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0da588(ar4 + 0xa4,uVar3,ar6,ar7));
    for (iVar4 = 0; iVar4 < iVar1; iVar4 = iVar4 + 1) {
      uVar3 = 1;
      (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((0x84 + *(int *)(unsigned)(iVar2 + 8)))))(iVar2,1,ar6,ar7));
      iVar2 = (vsp = ((unsigned long)(fr0_ - 0)), list_node_next(iVar2,uVar3,ar6,ar7));
    }
  }
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c100cb4(ar5,uVar3,ar6,ar7));
  if (iVar1 == 1) {
    iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), get_field_300_0bf154(ar4 + 0xa4,uVar3,ar6,ar7));
    iVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0da588(ar4 + 0xa4,uVar3,ar6,ar7));
    for (iVar4 = 0; iVar4 < iVar1; iVar4 = iVar4 + 1) {
      uVar3 = 2;
      (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((0x84 + *(int *)(unsigned)(iVar2 + 8)))))(iVar2,2,ar6,ar7));
      iVar2 = (vsp = ((unsigned long)(fr0_ - 0)), list_node_next(iVar2,uVar3,ar6,ar7));
    }
  }
  iVar1 = 0;
  if (*(int *)(unsigned)(0x9d4 + ar4) != 0) {
    iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0dc7c0(ar5,uVar3,ar6,ar7));
    if (iVar1 == 1) {
      iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0dc7b0(ar5,uVar3,ar6,ar7));
    }
  }
  return iVar1;
}

__asm__(".globl _FUN_8c0dc61c\n.set _FUN_8c0dc61c, _FUN_8c0dc61c_def\n");
//@unit 8c0dc7b0
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
undefined4 FUN_8c0dc7b0_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0dc7b0";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  *(undefined2 *)(unsigned)(0x18c + ar4) = 0x78;
  return 1;
}

__asm__(".globl _FUN_8c0dc7b0\n.set _FUN_8c0dc7b0, _FUN_8c0dc7b0_def\n");
//@unit 8c0dc7c0
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
undefined4 FUN_8c0dc7c0_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0dc7c0";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c01ed88(*(undefined4 *)(unsigned)(0xcc + ar4),ar5,ar6,ar7));
  return uVar1;
}

__asm__(".globl _FUN_8c0dc7c0\n.set _FUN_8c0dc7c0, _FUN_8c0dc7c0_def\n");
//@unit 8c0dc7e8
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
int FUN_8c0dc7e8_def(int ar4,undefined4 *ar5,undefined4 *ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0dc7e8";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 32; for (int i_ = 0; i_ < 32; i_++) z_[i_] = 0; }
  int iVar1;
  int ar4_00;
  int iVar2;
  undefined4 *ar5_00;
  int iVar3;
  
  ((undefined4 *)(fr0_ - 0x1c))[0] = 0;
  (*(undefined4 *)(fr0_ - 0x20)) = 0;
  ar5_00 = ar5;
  iVar1 = (vsp = ((unsigned long)(fr0_ - 32)), FUN_8c100d5c(ar5,ar5,ar6,ar7));
  if ((iVar1 == 1) && (iVar1 = *(int *)(unsigned)(ar4 + 0x9d8), iVar1 == 0)) {
    ar4_00 = (vsp = ((unsigned long)(fr0_ - 32)), FUN_8c0da588(ar4 + 0xa4,ar5_00,ar6,ar7));
    iVar2 = (vsp = ((unsigned long)(fr0_ - 32)), get_field_300_0bf154(ar4 + 0xa4,ar5_00,ar6,ar7));
    iVar1 = iVar2;
    for (iVar3 = 0; iVar3 < iVar2; iVar3 = iVar3 + 1) {
      iVar1 = (vsp = ((unsigned long)(fr0_ - 32)), get_field_24_05c284(ar4_00,ar5_00,ar6,ar7));
      if ((iVar1 == 3) || (iVar1 = (vsp = ((unsigned long)(fr0_ - 32)), get_field_24_05c284(ar4_00,ar5_00,ar6,ar7)), iVar1 == 5)) {
        ar6 = &(*(undefined4 *)(fr0_ - 0x20));
        ar5_00 = ((undefined4 *)(fr0_ - 0x1c));
        (vsp = ((unsigned long)(fr0_ - 32)), FUN_8c101210(ar5,ar5_00,ar6,ar7));
        (vsp = ((unsigned long)(fr0_ - 32)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(ar4_00 + 8) + 0x8c))))(ar4_00,ar5_00,ar6,ar7));
      }
      iVar1 = (vsp = ((unsigned long)(fr0_ - 32)), list_node_next(ar4_00,ar5_00,ar6,ar7));
      ar4_00 = iVar1;
    }
  }
  return iVar1;
}

__asm__(".globl _FUN_8c0dc7e8\n.set _FUN_8c0dc7e8, _FUN_8c0dc7e8_def\n");
//@unit 8c0dc8fc
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
int FUN_8c0dc8fc_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0dc8fc";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int ar4_00;
  int iVar1;
  undefined4 ar5_00;
  int iVar2;
  int iVar3;
  
  ar5_00 = ar5;
  ar4_00 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0db580(ar4 + 0x4d4,ar5,ar6,ar7));
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), get_field_38_0db5a0(ar4 + 0x4d4,ar5_00,ar6,ar7));
  iVar2 = iVar1;
  for (iVar3 = 0; iVar3 < iVar1; iVar3 = iVar3 + 1) {
    ar5_00 = (vsp = ((unsigned long)(fr0_ - 0)), get_field_b0_10113c(ar5,ar5_00,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((0x90 + *(int *)(unsigned)(*(int *)(unsigned)(ar4_00 + 8) + 8)))))
              (*(int *)(unsigned)(ar4_00 + 8),ar5_00,ar6,ar7));
    iVar2 = (vsp = ((unsigned long)(fr0_ - 0)), list_node_next(ar4_00,ar5_00,ar6,ar7));
    ar4_00 = iVar2;
  }
  return iVar2;
}

__asm__(".globl _FUN_8c0dc8fc\n.set _FUN_8c0dc8fc, _FUN_8c0dc8fc_def\n");
//@unit 8c0dc990
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
int FUN_8c0dc990_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0dc990";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 ar5_00;
  
  ar5_00 = ar5;
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c1006d8(ar5,ar5,ar6,ar7));
  if (iVar1 == 1) {
    (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c1004b4(ar5,ar5_00,ar6,ar7));
  }
  else {
    iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c100724(ar5,ar5_00,ar6,ar7));
    if (iVar1 == 1) {
      (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c10052c(ar5,ar5_00,ar6,ar7));
    }
  }
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c100770(ar5,ar5_00,ar6,ar7));
  if (iVar1 == 1) {
    iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c1005a4(ar5,ar5_00,ar6,ar7));
  }
  else {
    iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c1007bc(ar5,ar5_00,ar6,ar7));
    if (iVar1 == 1) {
      iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c10061c(ar5,ar5_00,ar6,ar7));
    }
  }
  return iVar1;
}

__asm__(".globl _FUN_8c0dc990\n.set _FUN_8c0dc990, _FUN_8c0dc990_def\n");
//@unit 8c0dca2c
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
undefined4 FUN_8c0dca2c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0dca2c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = ar5;
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0d6aac(ar4 + 0xa68,ar5,ar6,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0c51c4(ar5,uVar1,ar6,ar7));
  return uVar1;
}

__asm__(".globl _FUN_8c0dca2c\n.set _FUN_8c0dca2c, _FUN_8c0dca2c_def\n");
//@unit 8c0dca74
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
undefined4 FUN_8c0dca74_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0dca74";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 in_fr5 = 0;
  undefined4 in_fr4 = 0;
  undefined4 in_fr6 = 0;
  
  *(undefined4 *)(unsigned)(ar4 + 0xa68) = in_fr4;
  *(undefined4 *)(unsigned)(ar4 + 0xa6c) = in_fr5;
  *(undefined4 *)(unsigned)(ar4 + 0xa70) = in_fr6;
  return 0xa70;
}

__asm__(".globl _FUN_8c0dca74\n.set _FUN_8c0dca74, _FUN_8c0dca74_def\n");
//@unit 8c0dca9c
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
undefined4 * s_WaterTank_0dcaa2_def(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "s_WaterTank_0dcaa2";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 288; for (int i_ = 0; i_ < 288; i_++) z_[i_] = 0; }
  float *pfVar1;
  undefined *ar5_00;
  undefined4 uVar2;
  undefined4 ar6_00;
  code *pcVar3;
  code *pcVar4;
  undefined8 *ar6_01;
  undefined4 *ar4_00;
  undefined4 ar7_00;
  float *pfVar5;
  int iVar6;
  int iVar7;
  undefined4 in_fr1 = 0;
  float fVar8;
  double dVar9;
  undefined8 in_xd0 = 0;
  char cVar10;
  char cVar11;
  
  cVar11 = '\0';
  cVar10 = '\0';
  ar7_00 = 3;
  ar6_00 = 0;
  (vsp = ((unsigned long)(fr0_ - 288)), FUN_8c0d9c80(ar4,((undefined1 *)(unsigned)0x8c13fdb5),0,3));
  ar5_00 = ((undefined1 *)(unsigned)0x8c12b930);
  *ar4 = ((undefined1 *)(unsigned)0x8c12b930);
  (vsp = ((unsigned long)(fr0_ - 288)), FUN_8c015224(ar4 + 0x41b,((undefined1 *)(unsigned)0x8c12b930),ar6_00,ar7_00));
  (vsp = ((unsigned long)(fr0_ - 288)), FUN_8c015ab8(ar4 + 0x41d,ar5_00,ar6_00,ar7_00));
  (vsp = ((unsigned long)(fr0_ - 288)), FUN_8c015ab8(ar4 + 0x41e,ar5_00,ar6_00,ar7_00));
  (vsp = ((unsigned long)(fr0_ - 288)), FUN_8c015ab8(ar4 + 0x41f,ar5_00,ar6_00,ar7_00));
  (vsp = ((unsigned long)(fr0_ - 288)), FUN_8c0d2fd8(ar4 + 0x42b,ar5_00,ar6_00,ar7_00));
  uVar2 = 0x13b24;
  (vsp = ((unsigned long)(fr0_ - 288)), FUN_8c0cff78(ar4 + 0x4ec9,0x13b24,ar6_00,ar7_00));
  (vsp = ((unsigned long)(fr0_ - 288)), FUN_8c0d07b4(ar4 + 0x4edc,uVar2,ar6_00,ar7_00));
  (vsp = ((unsigned long)(fr0_ - 288)), FUN_8c0d0b58(ar4 + 0x4ee3,uVar2,ar6_00,ar7_00));
  (vsp = ((unsigned long)(fr0_ - 288)), FUN_8c015ab8(ar4 + 0x89be,uVar2,ar6_00,ar7_00));
  (vsp = ((unsigned long)(fr0_ - 288)), FUN_8c015224(ar4 + 0x89bf,uVar2,ar6_00,ar7_00));
  (vsp = ((unsigned long)(fr0_ - 288)), FUN_8c0d931c(ar4 + 0x89c1,uVar2,ar6_00,ar7_00));
  (vsp = ((unsigned long)(fr0_ - 288)), FUN_8c017830(ar4 + 0x89d3,uVar2,ar6_00,ar7_00));
  (vsp = ((unsigned long)(fr0_ - 288)), Vec3_ctor_zero(ar4 + 0x89f4,uVar2,ar6_00,ar7_00));
  (vsp = ((unsigned long)(fr0_ - 288)), Vec3_ctor_zero(ar4 + 0x89f8,uVar2,ar6_00,ar7_00));
  (vsp = ((unsigned long)(fr0_ - 288)), Vec3_ctor_zero(ar4 + 0x89fc,uVar2,ar6_00,ar7_00));
  (vsp = ((unsigned long)(fr0_ - 288)), Vec3_ctor_zero(ar4 + 0x8a00,uVar2,ar6_00,ar7_00));
  uVar2 = 0xc;
  pcVar3 = ((void *)0x8c0d6ef8);
  ({ unsigned long t0_ = (unsigned long)(0x6e); *(unsigned *)((((unsigned long)(fr0_ - 288)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 288)) - 8); FUN_8c010120(ar4 + 0x8a06,((void *)0x8c0d6ee0),((void *)0x8c0d6ef8),0xc); });
  (vsp = ((unsigned long)(fr0_ - 288)), FUN_8c015224(ar4 + 0x8b50,((void *)0x8c015224),pcVar3,uVar2));
  ({ unsigned long t0_ = (unsigned long)(3); *(unsigned *)((((unsigned long)(fr0_ - 288)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 288)) - 8); FUN_8c010120(ar4 + 0x8b52,((void *)0x8c0d7060),((void *)0x8c0ddb3c),0x16c); });
  uVar2 = 0x18;
  pcVar4 = ((void *)0x8c0cffc8);
  pcVar3 = ((void *)0x8c02145c);
  ({ unsigned long t0_ = (unsigned long)(2); *(unsigned *)((((unsigned long)(fr0_ - 288)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 288)) - 8); FUN_8c010120(ar4 + 0x8c96,((void *)0x8c02145c),((void *)0x8c0cffc8),0x18); });
  (vsp = ((unsigned long)(fr0_ - 288)), Vec3_ctor_zero(&(*(float *)(fr0_ - 0x90)),pcVar3,pcVar4,uVar2));
  pcVar3 = ((void *)0x8c022c4c);
  (vsp = ((unsigned long)(fr0_ - 288)), Vec3_ctor_zero(&(*(undefined4 *)(fr0_ - 0x80)),((void *)0x8c022c4c),pcVar4,uVar2));
  (vsp = ((unsigned long)(fr0_ - 288)), Vec3_ctor_zero(&(*(undefined4 *)(fr0_ - 0x70)),pcVar3,pcVar4,uVar2));
  (vsp = ((unsigned long)(fr0_ - 288)), Vec3_ctor_zero(&(*(undefined4 *)(fr0_ - 0x60)),pcVar3,pcVar4,uVar2));
  (vsp = ((unsigned long)(fr0_ - 288)), Vec3_ctor_zero(&(*(undefined4 *)(fr0_ - 0x50)),pcVar3,pcVar4,uVar2));
  (vsp = ((unsigned long)(fr0_ - 288)), Vec3_ctor_zero(&(*(undefined4 *)(fr0_ - 0x40)),pcVar3,pcVar4,uVar2));
  (vsp = ((unsigned long)(fr0_ - 288)), Vec3_ctor_zero(&(*(undefined4 *)(fr0_ - 0x30)),pcVar3,pcVar4,uVar2));
  (vsp = ((unsigned long)(fr0_ - 288)), Vec3_ctor_zero(&(*(undefined4 *)(fr0_ - 0x20)),pcVar3,pcVar4,uVar2));
  (*(undefined4 *)(unsigned)(unsigned)0x8c437c38) = 0;
  (*(undefined4 *)(unsigned)(unsigned)0x8c437c3a) = 0xff;
  (*(undefined4 *)(unsigned)(unsigned)0x8c437c3c) = 0;
  (*(undefined4 *)(unsigned)(unsigned)0x8c437c3e) = 0;
  (*(undefined4 *)(unsigned)(unsigned)0x8c437c40) = 0xff;
  (*(undefined4 *)(unsigned)(unsigned)0x8c437c42) = 0;
  (*(undefined4 *)(unsigned)(unsigned)0x8c437c44) = 0xff;
  (*(undefined4 *)(unsigned)(unsigned)0x8c437c46) = 0xff;
  for (iVar6 = 0; iVar6 < 4; iVar6 = iVar6 + 1) {
    *(undefined4 *)(unsigned)(iVar6 * 4 + -0x73bc83b8) = 0xffffffff;
  }
  (vsp = ((unsigned long)(fr0_ - 288)), FUN_8c0e0da4(ar4,pcVar3,pcVar4,uVar2));
  ar4[0x89bd] = 0;
  if (cVar11 == '\0') {
    ar4[0x2e9] = 0x425dae14;
    ar4[0x2af] = 0x4573bfff;
    ar4[0x2b0] = 0x44c80199;
    ar4[0x2b1] = 0x44fd2000;
  }
  else {
    *(undefined8 *)(unsigned)(ar4 + 0x2e9) = 0xabc425dae14;
    *(undefined8 *)(unsigned)(ar4 + 0x2af) = 0xac04573bfff;
    *(undefined8 *)(unsigned)(ar4 + 0x2b0) = 0xac444c80199;
    in_fr1 = 0x44fd2000;
    *(undefined8 *)(unsigned)(ar4 + 0x2b1) = 0xa03cee0044fd2000;
  }
  for (iVar6 = 0; iVar6 < 0xb; iVar6 = iVar6 + 1) {
    for (iVar7 = 0; iVar7 < 10; iVar7 = iVar7 + 1) {
      if (cVar11 == '\0') {
        ar4[iVar6 * 0x1e + iVar7 * 3 + 0x8a06] = 0x43340000;
      }
      else {
        in_fr1 = 0x43340000;
        *(undefined8 *)(unsigned)(ar4 + iVar6 * 0x1e + iVar7 * 3 + 0x8a06) = 0x2281c43340000;
      }
      ar4[iVar6 * 0x1e + iVar7 * 3 + 0x8a07] = 0;
    }
  }
  for (iVar6 = 6; iVar6 < 0xb; iVar6 = iVar6 + 1) {
    for (iVar7 = 3; iVar7 < 10; iVar7 = iVar7 + 1) {
      if (cVar11 == '\0') {
        ar4[iVar6 * 0x1e + iVar7 * 3 + 0x8a06] = 0x40000000;
      }
      else {
        in_fr1 = 0x40000000;
        *(undefined8 *)(unsigned)(ar4 + iVar6 * 0x1e + iVar7 * 3 + 0x8a06) = 0x2281c40000000;
      }
      ar4[iVar6 * 0x1e + iVar7 * 3 + 0x8a07] = 1;
    }
  }
  for (iVar6 = 5; iVar6 < 10; iVar6 = iVar6 + 1) {
    ar4[iVar6 * 3 + 0x8a9d] = 2;
    if (cVar11 == '\0') {
      ar4[iVar6 * 3 + 0x8a9c] = 0x40000000;
    }
    else {
      in_fr1 = 0x40000000;
      *(undefined8 *)(unsigned)(ar4 + iVar6 * 3 + 0x8a9c) = 0xfd6e05c40000000;
    }
  }
  for (iVar6 = 5; iVar6 < 10; iVar6 = iVar6 + 1) {
    ar4[iVar6 * 3 + 0x8abb] = 2;
  }
  for (iVar6 = 6; iVar6 < 0xb; iVar6 = iVar6 + 1) {
    ar4[iVar6 * 0x1e + 0x8a13] = 2;
  }
  for (iVar6 = 6; iVar6 < 0xb; iVar6 = iVar6 + 1) {
    ar4[iVar6 * 0x1e + 0x8a10] = 2;
    if (cVar11 == '\0') {
      ar4[iVar6 * 0x1e + 0x8a0f] = 0x40000000;
    }
    else {
      in_fr1 = 0x40000000;
      *(undefined8 *)(unsigned)(ar4 + iVar6 * 0x1e + 0x8a0f) = 0x22ba040000000;
    }
  }
  ar4[0x8ae8] = 2;
  ar4[0x8ac7] = 2;
  ar4[0x8ac4] = 0;
  if (cVar11 == '\0') {
    ar4[0x8ac3] = 0x43340000;
  }
  else {
    in_fr1 = 0x43340000;
    *(undefined8 *)(unsigned)(ar4 + 0x8ac3) = 0xa024ee0043340000;
  }
  for (iVar6 = 2; iVar6 < 5; iVar6 = iVar6 + 1) {
    for (iVar7 = 0; iVar7 < 6; iVar7 = iVar7 + 1) {
      ar4[iVar6 * 0x1e + iVar7 * 3 + 0x8a08] = 1;
    }
  }
  ar4[0x8a4d] = 0;
  ar4[0x8a6b] = 0;
  ar4[0x8a89] = 0;
  if (cVar11 == '\0') {
    ar4[0x20] = 0x430c0000;
    ar4[0x21] = 0x42c80000;
    ar4[0x23] = 0x43a00000;
    ar4[0x24] = 0x42e00000;
    ar4[0x25] = 0x41000000;
  }
  else {
    *(undefined8 *)(unsigned)(ar4 + 0x20) = 0x84430c0000;
    *(undefined8 *)(unsigned)(ar4 + 0x21) = 0x8c42c80000;
    *(undefined8 *)(unsigned)(ar4 + 0x23) = 0x9043a00000;
    *(undefined8 *)(unsigned)(ar4 + 0x24) = 0x9442e00000;
    in_fr1 = 0x41000000;
    *(undefined8 *)(unsigned)(ar4 + 0x25) = 0x9841000000;
  }
  if (cVar11 == '\0') {
    ar4[0x26] = 0x3f800000;
    ar4[0x27] = 0x41300000;
    ar4[0x28] = 0x40400000;
  }
  else {
    *(ulonglong *)(unsigned)(ar4 + 0x26) = CONCAT44(0x3f800000,in_fr1);
    *(undefined8 *)(unsigned)(ar4 + 0x27) = 0xa041300000;
    in_fr1 = 0x40400000;
    *(undefined8 *)(unsigned)(ar4 + 0x28) = 0x2318c40400000;
  }
  uVar2 = (*(undefined1 *)(unsigned)0x8c13f604);
  ar4[0x8c63] = (*(undefined4 *)(unsigned)(unsigned)0x8c13f600);
  ar4[0x8c64] = uVar2;
  ar4[0x8c65] = (*(undefined4 *)(unsigned)(unsigned)0x8c13f608);
  uVar2 = (*(undefined1 *)(unsigned)0x8c13f610);
  ar4[0x8c66] = (*(undefined4 *)(unsigned)(unsigned)0x8c13f60c);
  ar4[0x8c67] = uVar2;
  ar4[0x8c68] = (*(undefined4 *)(unsigned)(unsigned)0x8c13f614);
  uVar2 = (*(undefined1 *)(unsigned)0x8c13f61c);
  pfVar5 = (float *)(unsigned)(ar4 + 0x8c69);
  ar6_01 = (undefined8 *)(unsigned)((undefined4 *)(unsigned)0x8c13f618);
  *pfVar5 = (*(undefined4 *)(unsigned)(unsigned)0x8c13f618);
  ar4[0x8c6a] = uVar2;
  ar4[0x8c6b] = (*(undefined4 *)(unsigned)(unsigned)0x8c13f620);
  uVar2 = (*(undefined1 *)(unsigned)0x8c13f628);
  ar4[0x8c6c] = (*(undefined4 *)(unsigned)(unsigned)0x8c13f624);
  ar4[0x8c6d] = uVar2;
  ar4[0x8c6e] = (*(undefined4 *)(unsigned)(unsigned)0x8c13f62c);
  uVar2 = (*(undefined1 *)(unsigned)0x8c13f634);
  ar4[0x8c72] = (*(undefined4 *)(unsigned)(unsigned)0x8c13f630);
  ar4[0x8c73] = uVar2;
  ar4[0x8c74] = (*(undefined4 *)(unsigned)(unsigned)0x8c13f638);
  uVar2 = (*(undefined1 *)(unsigned)0x8c13f640);
  ar4[0x8c75] = (*(undefined4 *)(unsigned)(unsigned)0x8c13f63c);
  ar4[0x8c76] = uVar2;
  ar4[0x8c77] = (*(undefined4 *)(unsigned)(unsigned)0x8c13f644);
  uVar2 = (*(undefined1 *)(unsigned)0x8c13f64c);
  ar4[0x8c6f] = (*(undefined4 *)(unsigned)(unsigned)0x8c13f648);
  ar4[0x8c70] = uVar2;
  ar4[0x8c71] = (*(undefined4 *)(unsigned)(unsigned)0x8c13f650);
  uVar2 = (*(undefined1 *)(unsigned)0x8c13f658);
  ar4[0x8c78] = (*(undefined4 *)(unsigned)(unsigned)0x8c13f654);
  ar4[0x8c79] = uVar2;
  ar4[0x8c7a] = (*(undefined4 *)(unsigned)(unsigned)0x8c13f65c);
  uVar2 = (*(undefined1 *)(unsigned)0x8c13f664);
  ar4[0x8c7b] = (*(undefined4 *)(unsigned)(unsigned)0x8c13f660);
  ar4[0x8c7c] = uVar2;
  ar4[0x8c7d] = (*(undefined4 *)(unsigned)(unsigned)0x8c13f668);
  uVar2 = (*(undefined1 *)(unsigned)0x8c13f670);
  ar4[0x8c7e] = (*(undefined4 *)(unsigned)(unsigned)0x8c13f66c);
  ar4[0x8c7f] = uVar2;
  ar4[0x8c80] = (*(undefined4 *)(unsigned)(unsigned)0x8c13f674);
  uVar2 = (*(undefined1 *)(unsigned)0x8c13f67c);
  ar4[0x8c81] = (*(undefined4 *)(unsigned)(unsigned)0x8c13f678);
  ar4[0x8c82] = uVar2;
  ar4[0x8c83] = (*(undefined4 *)(unsigned)(unsigned)0x8c13f680);
  uVar2 = (*(undefined1 *)(unsigned)0x8c13f688);
  ar4[0x8c84] = (*(undefined4 *)(unsigned)(unsigned)0x8c13f684);
  ar4[0x8c85] = uVar2;
  ar4[0x8c86] = (*(undefined4 *)(unsigned)(unsigned)0x8c13f68c);
  uVar2 = (*(undefined1 *)(unsigned)0x8c13f694);
  ar4[0x8c87] = (*(undefined4 *)(unsigned)(unsigned)0x8c13f690);
  ar4[0x8c88] = uVar2;
  ar4[0x8c89] = (*(undefined4 *)(unsigned)(unsigned)0x8c13f698);
  uVar2 = (*(undefined1 *)(unsigned)0x8c13f6a0);
  ar4[0x8c8a] = (*(undefined4 *)(unsigned)(unsigned)0x8c13f69c);
  ar4[0x8c8b] = uVar2;
  ar4[0x8c8c] = (*(undefined4 *)(unsigned)(unsigned)0x8c13f6a4);
  uVar2 = (*(undefined1 *)(unsigned)0x8c13f6ac);
  ar4[0x8c8d] = (*(undefined4 *)(unsigned)(unsigned)0x8c13f6a8);
  ar4[0x8c8e] = uVar2;
  ar4[0x8c8f] = (*(undefined4 *)(unsigned)(unsigned)0x8c13f6b0);
  uVar2 = (*(undefined1 *)(unsigned)0x8c13f6b8);
  ar4[0x8c90] = (*(undefined4 *)(unsigned)(unsigned)0x8c13f6b4);
  ar4[0x8c91] = uVar2;
  ar4[0x8c92] = (*(undefined4 *)(unsigned)(unsigned)0x8c13f6bc);
  (vsp = ((unsigned long)(fr0_ - 288)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((ar4[0x8b50] + 8))))(ar4 + 0x8b50,&(*(undefined4 *)(unsigned)(unsigned)0x8c13da18),((undefined4 *)(unsigned)0x8c13f618),pfVar5));
  ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x11c))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 288)); FUN_8c015ad4(ar4 + 0x8b52,((undefined1 *)(unsigned)0x8c13dde0),ar6_01,pfVar5); });
  if (cVar11 == '\0') {
    ar4[0x8b53] = 0x446a56b8;
    ar4[0x8b54] = 0x43340000;
    ar4[0x8b55] = 0x43557405;
  }
  else {
    *(undefined8 *)(unsigned)(ar4 + 0x8b53) = 0x22d50446a56b8;
    *(undefined8 *)(unsigned)(ar4 + 0x8b54) = 0x22d5443340000;
    in_fr1 = 0x43557405;
    *(undefined8 *)(unsigned)(ar4 + 0x8b55) = 0x22d5c43557405;
  }
  (vsp = ((unsigned long)(fr0_ - 288)), Vec3_assign(ar4 + 0x8b57,ar4 + 0x8b53,ar6_01,pfVar5));
  if (cVar11 == '\0') {
    ar4[0x8ba8] = 0x43160000;
  }
  else {
    *(undefined8 *)(unsigned)(ar4 + 0x8ba8) = 0xc307b33343160000;
    (*(uint*)((uchar*)&(*(undefined8 *)(fr0_ - 0x88))+4)) = 0xc3024ccd;
    (*(undefined4 *)(fr0_ - 0x74)) = 0xa4;
    (*(undefined4 *)(fr0_ - 0x64)) = 0xa4;
    (*(undefined4 *)(fr0_ - 0x54)) = 0xc3024ccd;
    in_fr1 = 0xc307b333;
  }
  (*(undefined4 *)(fr0_ - 0x50)) = 0xc307b333;
  (*(undefined4 *)(fr0_ - 0x58)) = 0x430acccd;
  (*(undefined4 *)(fr0_ - 0x5c)) = 0x4384e666;
  (*(undefined4 *)(fr0_ - 0x60)) = 0x430eb333;
  (*(undefined4 *)(fr0_ - 0x68)) = 0xc3024ccd;
  (*(undefined4 *)(fr0_ - 0x6c)) = 0x4384e666;
  (*(undefined4 *)(fr0_ - 0x70)) = 0x430eb333;
  (*(undefined4 *)(fr0_ - 0x78)) = 0xc3024ccd;
  (*(undefined4 *)(fr0_ - 0x7c)) = 0x4384e666;
  (*(undefined4 *)(fr0_ - 0x80)) = 0xc307b333;
  (*(uint*)((uchar*)&(*(undefined8 *)(fr0_ - 0x88))+0)) = 0x430acccd;
  *(ulonglong *)(unsigned)((undefined1 *)(fr0_ - 0x8c)) = (ulonglong)0x4384e666;
  (*(float *)(fr0_ - 0x90)) = -135.7;
  if (cVar11 == '\0') {
    (*(undefined4 *)(fr0_ - 0x4c)) = 0;
  }
  else {
    (*(undefined4 *)(fr0_ - 0x44)) = 0xc3024ccd;
    in_fr1 = 0xc307b333;
    (*(undefined4 *)(fr0_ - 0x4c)) = in_fr1;
  }
  (*(undefined4 *)(fr0_ - 0x40)) = 0xc307b333;
  (*(undefined4 *)(fr0_ - 0x48)) = 0x430acccd;
  if (cVar11 == '\0') {
    (*(undefined4 *)(fr0_ - 0x3c)) = 0;
  }
  else {
    (*(undefined4 *)(fr0_ - 0x34)) = 0xa4;
    in_fr1 = 0x430eb333;
    (*(undefined4 *)(fr0_ - 0x3c)) = in_fr1;
  }
  (*(undefined4 *)(fr0_ - 0x30)) = 0x430eb333;
  (*(undefined4 *)(fr0_ - 0x38)) = 0xc3024ccd;
  if (cVar11 == '\0') {
    (*(undefined4 *)(fr0_ - 0x2c)) = 0;
  }
  else {
    (*(undefined4 *)(fr0_ - 0x24)) = 0xa4;
    in_fr1 = 0x430eb333;
    (*(undefined4 *)(fr0_ - 0x2c)) = in_fr1;
  }
  (*(undefined4 *)(fr0_ - 0x20)) = 0x430eb333;
  (*(undefined4 *)(fr0_ - 0x28)) = 0xc3024ccd;
  if (cVar11 == '\0') {
    (*(undefined4 *)(fr0_ - 0x1c)) = 0;
    dVar9 = CONCAT44D(0x430acccd,in_fr1);
  }
  else {
    dVar9 = -643874257197465.6;
    (*(undefined4 *)(fr0_ - 0x14)) = 0xc3024ccd;
    (*(undefined4 *)(fr0_ - 0x1c)) = in_fr1;
  }
  (*(undefined4 *)(fr0_ - 0x18)) = 0x430acccd;
  for (iVar6 = 0; uVar2 = SUB84(dVar9,0), iVar6 < 8; iVar6 = iVar6 + 1) {
    pfVar1 = &(*(float *)(fr0_ - 0x90)) + iVar6 * 4;
    if (cVar11 == '\0') {
      dVar9 = CONCAT44D(0x3f666666,*pfVar1);
    }
    else {
      in_xd0 = *(undefined8 *)(unsigned)pfVar1;
      dVar9 = 3.02834788845756e-309;
    }
    if (cVar10 == '\0') {
      fVar8 = F32LO(dVar9) * F32HI(dVar9);
    }
    else {
      fVar8 = SUB84(dVar9 * dVar9,0);
    }
    if (cVar11 == '\0') {
      *pfVar1 = fVar8;
    }
    else {
      *(undefined8 *)(unsigned)pfVar1 = in_xd0;
    }
    if (cVar11 == '\0') {
      dVar9 = CONCAT44D(0x3f666666,*(undefined4 *)(unsigned)(((undefined1 *)(fr0_ - 0x8c)) + iVar6 * 0x10));
    }
    else {
      in_xd0 = *(undefined8 *)(unsigned)(((undefined1 *)(fr0_ - 0x8c)) + iVar6 * 0x10);
      dVar9 = 3.02834788845756e-309;
    }
    if (cVar10 == '\0') {
      fVar8 = F32LO(dVar9) * F32HI(dVar9);
    }
    else {
      fVar8 = SUB84(dVar9 * dVar9,0);
    }
    if (cVar11 == '\0') {
      *(float *)(unsigned)(((undefined1 *)(fr0_ - 0x8c)) + iVar6 * 0x10) = fVar8;
    }
    else {
      *(undefined8 *)(unsigned)(((undefined1 *)(fr0_ - 0x8c)) + iVar6 * 0x10) = in_xd0;
    }
    if (cVar11 == '\0') {
      dVar9 = CONCAT44D(0x3f666666,*(undefined4 *)(unsigned)(&(*(undefined8 *)(fr0_ - 0x88)) + iVar6 * 2));
    }
    else {
      in_xd0 = (&(*(undefined8 *)(fr0_ - 0x88)))[iVar6 * 2];
      dVar9 = 3.02834788845756e-309;
    }
    if (cVar10 == '\0') {
      dVar9 = (double)(ulonglong)(uint)(F32LO(dVar9) * F32HI(dVar9));
    }
    else {
      dVar9 = dVar9 * dVar9;
    }
    if (cVar11 == '\0') {
      *(int *)(unsigned)(&(*(undefined8 *)(fr0_ - 0x88)) + iVar6 * 2) = SUB84(dVar9,0);
    }
    else {
      (&(*(undefined8 *)(fr0_ - 0x88)))[iVar6 * 2] = in_xd0;
    }
  }
  (vsp = ((unsigned long)(fr0_ - 288)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((ar4[0x8b5e] + 0x30))))(ar4 + 0x8b5e,&(*(float *)(fr0_ - 0x90)),ar6_01,pfVar5));
  ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x11c))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 288)); FUN_8c015ad4(ar4 + 0x8bad,((undefined1 *)(unsigned)0x8c13e0c4),ar6_01,pfVar5); });
  if (cVar11 == '\0') {
    ar4[0x8bae] = 0x4475f20c;
    ar4[0x8baf] = 0x43340000;
    ar4[0x8bb0] = 0x44390b33;
  }
  else {
    *(undefined8 *)(unsigned)(ar4 + 0x8bae) = 0x22ebc4475f20c;
    *(undefined8 *)(unsigned)(ar4 + 0x8baf) = 0x22ec043340000;
    uVar2 = 0x44390b33;
    *(undefined8 *)(unsigned)(ar4 + 0x8bb0) = 0x22ec844390b33;
  }
  (vsp = ((unsigned long)(fr0_ - 288)), Vec3_assign(ar4 + 0x8bb2,ar4 + 0x8bae,ar6_01,pfVar5));
  if (cVar11 == '\0') {
    ar4[0x8c03] = 0x428c0000;
  }
  else {
    *(undefined8 *)(unsigned)(ar4 + 0x8c03) = 0xc2780000428c0000;
    (*(uint*)((uchar*)&(*(undefined8 *)(fr0_ - 0x88))+4)) = 0x94;
    (*(undefined4 *)(fr0_ - 0x74)) = 0xa4;
    (*(undefined4 *)(fr0_ - 0x64)) = 0xa4;
    (*(undefined4 *)(fr0_ - 0x54)) = 0x94;
    uVar2 = 0xc2780000;
  }
  (*(undefined4 *)(fr0_ - 0x50)) = 0xc2780000;
  (*(undefined4 *)(fr0_ - 0x58)) = 0x428b0000;
  (*(undefined4 *)(fr0_ - 0x5c)) = 0x429c3333;
  (*(undefined4 *)(fr0_ - 0x60)) = 0x42816666;
  (*(undefined4 *)(fr0_ - 0x68)) = 0xc289999a;
  (*(undefined4 *)(fr0_ - 0x6c)) = 0x429c3333;
  (*(undefined4 *)(fr0_ - 0x70)) = 0x42816666;
  (*(undefined4 *)(fr0_ - 0x78)) = 0xc289999a;
  (*(undefined4 *)(fr0_ - 0x7c)) = 0x429c3333;
  (*(undefined4 *)(fr0_ - 0x80)) = 0xc2780000;
  (*(uint*)((uchar*)&(*(undefined8 *)(fr0_ - 0x88))+0)) = 0x428b0000;
  *(ulonglong *)(unsigned)((undefined1 *)(fr0_ - 0x8c)) = (ulonglong)0x429c3333;
  (*(float *)(fr0_ - 0x90)) = -62.0;
  if (cVar11 == '\0') {
    (*(undefined4 *)(fr0_ - 0x4c)) = 0;
  }
  else {
    (*(undefined4 *)(fr0_ - 0x44)) = 0x94;
    uVar2 = 0xc2780000;
    (*(undefined4 *)(fr0_ - 0x4c)) = uVar2;
  }
  (*(undefined4 *)(fr0_ - 0x40)) = 0xc2780000;
  (*(undefined4 *)(fr0_ - 0x48)) = 0x428b0000;
  if (cVar11 == '\0') {
    (*(undefined4 *)(fr0_ - 0x3c)) = 0;
  }
  else {
    (*(undefined4 *)(fr0_ - 0x34)) = 0xa4;
    uVar2 = 0x42816666;
    (*(undefined4 *)(fr0_ - 0x3c)) = uVar2;
  }
  (*(undefined4 *)(fr0_ - 0x30)) = 0x42816666;
  (*(undefined4 *)(fr0_ - 0x38)) = 0xc289999a;
  if (cVar11 != '\0') {
    (*(undefined4 *)(fr0_ - 0x24)) = 0xa4;
    uVar2 = 0x42816666;
    (*(undefined4 *)(fr0_ - 0x1c)) = 0xac;
  }
  (*(undefined4 *)(fr0_ - 0x20)) = 0x42816666;
  (*(undefined4 *)(fr0_ - 0x28)) = 0xc289999a;
  if (cVar11 == '\0') {
    (*(undefined4 *)(fr0_ - 0x2c)) = 0;
    dVar9 = CONCAT44D(0x428b0000,uVar2);
  }
  else {
    (*(undefined4 *)(fr0_ - 0x28)) = 0;
    dVar9 = 3.14606954795696e-312;
    (*(undefined4 *)(fr0_ - 0x14)) = 0x94;
    (*(undefined4 *)(fr0_ - 0x2c)) = uVar2;
  }
  (*(undefined4 *)(fr0_ - 0x18)) = 0x428b0000;
  for (iVar6 = 0; uVar2 = SUB84(dVar9,0), iVar6 < 8; iVar6 = iVar6 + 1) {
    pfVar5 = &(*(float *)(fr0_ - 0x90)) + iVar6 * 4;
    if (cVar11 == '\0') {
      dVar9 = CONCAT44D(0x3f666666,*pfVar5);
    }
    else {
      in_xd0 = *(undefined8 *)(unsigned)pfVar5;
      dVar9 = 3.03607195313667e-309;
    }
    if (cVar10 == '\0') {
      fVar8 = F32LO(dVar9) * F32HI(dVar9);
    }
    else {
      fVar8 = SUB84(dVar9 * dVar9,0);
    }
    if (cVar11 == '\0') {
      *pfVar5 = fVar8;
    }
    else {
      *(undefined8 *)(unsigned)pfVar5 = in_xd0;
    }
    if (cVar11 == '\0') {
      dVar9 = CONCAT44D(0x3f666666,*(undefined4 *)(unsigned)(((undefined1 *)(fr0_ - 0x8c)) + iVar6 * 0x10));
    }
    else {
      in_xd0 = *(undefined8 *)(unsigned)(((undefined1 *)(fr0_ - 0x8c)) + iVar6 * 0x10);
      dVar9 = 3.03607195313667e-309;
    }
    if (cVar10 == '\0') {
      fVar8 = F32LO(dVar9) * F32HI(dVar9);
    }
    else {
      fVar8 = SUB84(dVar9 * dVar9,0);
    }
    if (cVar11 == '\0') {
      *(float *)(unsigned)(((undefined1 *)(fr0_ - 0x8c)) + iVar6 * 0x10) = fVar8;
    }
    else {
      *(undefined8 *)(unsigned)(((undefined1 *)(fr0_ - 0x8c)) + iVar6 * 0x10) = in_xd0;
    }
    pfVar5 = &(*(float *)(fr0_ - 0x90)) + iVar6 * 4;
    ar6_01 = &(*(undefined8 *)(fr0_ - 0x88)) + iVar6 * 2;
    if (cVar11 == '\0') {
      dVar9 = CONCAT44D(0x3f666666,*(undefined4 *)(unsigned)(&(*(undefined8 *)(fr0_ - 0x88)) + iVar6 * 2));
    }
    else {
      in_xd0 = (&(*(undefined8 *)(fr0_ - 0x88)))[iVar6 * 2];
      dVar9 = 3.03607195313667e-309;
    }
    if (cVar10 == '\0') {
      dVar9 = (double)(ulonglong)(uint)(F32LO(dVar9) * F32HI(dVar9));
    }
    else {
      dVar9 = dVar9 * dVar9;
    }
    if (cVar11 == '\0') {
      *(int *)(unsigned)ar6_01 = SUB84(dVar9,0);
    }
    else {
      *ar6_01 = in_xd0;
    }
  }
  (vsp = ((unsigned long)(fr0_ - 288)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((ar4[0x8bb9] + 0x30))))(ar4 + 0x8bb9,&(*(float *)(fr0_ - 0x90)),ar6_01,pfVar5));
  ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x11c))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 288)); FUN_8c015ad4(ar4 + 0x8c08,((undefined1 *)(unsigned)0x8c13e3c4),ar6_01,pfVar5); });
  if (cVar11 == '\0') {
    ar4[0x8c09] = 0x440a7a8f;
    ar4[0x8c0a] = 0x43340000;
    ar4[0x8c0b] = 0x44406fa8;
  }
  else {
    *(undefined8 *)(unsigned)(ar4 + 0x8c09) = 0x23028440a7a8f;
    *(undefined8 *)(unsigned)(ar4 + 0x8c0a) = 0x2302c43340000;
    uVar2 = 0x44406fa8;
    *(undefined8 *)(unsigned)(ar4 + 0x8c0b) = 0x2303444406fa8;
  }
  (vsp = ((unsigned long)(fr0_ - 288)), Vec3_assign(ar4 + 0x8c0d,ar4 + 0x8c09,ar6_01,pfVar5));
  if (cVar11 == '\0') {
    ar4[0x8c5e] = 0x42480000;
  }
  else {
    *(undefined8 *)(unsigned)(ar4 + 0x8c5e) = 0xc240000042480000;
    (*(uint*)((uchar*)&(*(undefined8 *)(fr0_ - 0x88))+4)) = 0x94;
    (*(undefined4 *)(fr0_ - 0x74)) = 0xa4;
    (*(undefined4 *)(fr0_ - 0x64)) = 0xa4;
    (*(undefined4 *)(fr0_ - 0x54)) = 0x94;
    uVar2 = 0xc2400000;
  }
  (*(undefined4 *)(fr0_ - 0x50)) = 0xc2400000;
  (*(undefined4 *)(fr0_ - 0x58)) = 0x42286666;
  (*(undefined4 *)(fr0_ - 0x5c)) = 0x42ef0000;
  (*(undefined4 *)(fr0_ - 0x60)) = 0x42400000;
  (*(undefined4 *)(fr0_ - 0x68)) = 0xc22ccccd;
  (*(undefined4 *)(fr0_ - 0x6c)) = 0x42ef0000;
  (*(undefined4 *)(fr0_ - 0x70)) = 0x42400000;
  (*(undefined4 *)(fr0_ - 0x78)) = 0xc22ccccd;
  (*(undefined4 *)(fr0_ - 0x7c)) = 0x42ef0000;
  (*(undefined4 *)(fr0_ - 0x80)) = 0xc2400000;
  (*(uint*)((uchar*)&(*(undefined8 *)(fr0_ - 0x88))+0)) = 0x42286666;
  *(ulonglong *)(unsigned)((undefined1 *)(fr0_ - 0x8c)) = (ulonglong)0x42ef0000;
  (*(float *)(fr0_ - 0x90)) = -48.0;
  if (cVar11 == '\0') {
    (*(undefined4 *)(fr0_ - 0x4c)) = 0;
  }
  else {
    (*(undefined4 *)(fr0_ - 0x44)) = 0x94;
    uVar2 = 0xc2400000;
    (*(undefined4 *)(fr0_ - 0x4c)) = uVar2;
  }
  (*(undefined4 *)(fr0_ - 0x40)) = 0xc2400000;
  (*(undefined4 *)(fr0_ - 0x48)) = 0x42286666;
  if (cVar11 == '\0') {
    (*(undefined4 *)(fr0_ - 0x3c)) = 0;
  }
  else {
    (*(undefined4 *)(fr0_ - 0x34)) = 0xa4;
    uVar2 = 0x42400000;
    (*(undefined4 *)(fr0_ - 0x3c)) = uVar2;
  }
  (*(undefined4 *)(fr0_ - 0x30)) = 0x42400000;
  (*(undefined4 *)(fr0_ - 0x38)) = 0xc22ccccd;
  if (cVar11 == '\0') {
    (*(undefined4 *)(fr0_ - 0x2c)) = 0;
    (*(undefined4 *)(fr0_ - 0x1c)) = uVar2;
  }
  else {
    (*(undefined4 *)(fr0_ - 0x24)) = 0xa4;
    (*(undefined4 *)(fr0_ - 0x1c)) = 0x42400000;
    (*(undefined4 *)(fr0_ - 0x2c)) = uVar2;
  }
  (*(undefined4 *)(fr0_ - 0x20)) = 0x42400000;
  (*(undefined4 *)(fr0_ - 0x28)) = 0xc22ccccd;
  if (cVar11 == '\0') {
    (*(undefined4 *)(fr0_ - 0x1c)) = 0;
  }
  else {
    (*(undefined4 *)(fr0_ - 0x14)) = 0x94;
  }
  (*(undefined4 *)(fr0_ - 0x18)) = 0x42286666;
  for (iVar6 = 0; iVar6 < 8; iVar6 = iVar6 + 1) {
    pfVar5 = &(*(float *)(fr0_ - 0x90)) + iVar6 * 4;
    if (cVar11 == '\0') {
      dVar9 = CONCAT44D(0x3f666666,*pfVar5);
    }
    else {
      in_xd0 = *(undefined8 *)(unsigned)pfVar5;
      dVar9 = 3.043796017815786e-309;
    }
    if (cVar10 == '\0') {
      fVar8 = F32LO(dVar9) * F32HI(dVar9);
    }
    else {
      fVar8 = SUB84(dVar9 * dVar9,0);
    }
    if (cVar11 == '\0') {
      *pfVar5 = fVar8;
    }
    else {
      *(undefined8 *)(unsigned)pfVar5 = in_xd0;
    }
    if (cVar11 == '\0') {
      dVar9 = CONCAT44D(0x3f666666,*(undefined4 *)(unsigned)(((undefined1 *)(fr0_ - 0x8c)) + iVar6 * 0x10));
    }
    else {
      in_xd0 = *(undefined8 *)(unsigned)(((undefined1 *)(fr0_ - 0x8c)) + iVar6 * 0x10);
      dVar9 = 3.043796017815786e-309;
    }
    if (cVar10 == '\0') {
      fVar8 = F32LO(dVar9) * F32HI(dVar9);
    }
    else {
      fVar8 = SUB84(dVar9 * dVar9,0);
    }
    if (cVar11 == '\0') {
      *(float *)(unsigned)(((undefined1 *)(fr0_ - 0x8c)) + iVar6 * 0x10) = fVar8;
    }
    else {
      *(undefined8 *)(unsigned)(((undefined1 *)(fr0_ - 0x8c)) + iVar6 * 0x10) = in_xd0;
    }
    if (cVar11 == '\0') {
      dVar9 = CONCAT44D(0x3f666666,*(undefined4 *)(unsigned)(&(*(undefined8 *)(fr0_ - 0x88)) + iVar6 * 2));
    }
    else {
      in_xd0 = (&(*(undefined8 *)(fr0_ - 0x88)))[iVar6 * 2];
      dVar9 = 3.043796017815786e-309;
    }
    if (cVar10 == '\0') {
      fVar8 = F32LO(dVar9) * F32HI(dVar9);
    }
    else {
      fVar8 = SUB84(dVar9 * dVar9,0);
    }
    if (cVar11 == '\0') {
      *(float *)(unsigned)(&(*(undefined8 *)(fr0_ - 0x88)) + iVar6 * 2) = fVar8;
    }
    else {
      (&(*(undefined8 *)(fr0_ - 0x88)))[iVar6 * 2] = in_xd0;
    }
  }
  iVar6 = ar4[0x8c14];
  pcVar3 = ((code *)(unsigned long)*(unsigned *)(unsigned)(iVar6 + 0x30));
  (vsp = ((unsigned long)(fr0_ - 288)), (*(code *)xlat((unsigned long)pcVar3))(ar4 + 0x8c14,&(*(float *)(fr0_ - 0x90)),pcVar3,iVar6));
  ar4[0x8c96] = (*(undefined4 *)(unsigned)(unsigned)0x8c13f2f8);
  (vsp = ((unsigned long)(fr0_ - 288)), Vec3_dtor(&(*(undefined4 *)(fr0_ - 0x20)),0xffffffff,pcVar3,iVar6));
  pcVar4 = ((void *)0x8c022cb0);
  (vsp = ((unsigned long)(fr0_ - 288)), Vec3_dtor(&(*(undefined4 *)(fr0_ - 0x30)),0xffffffff,pcVar3,((void *)0x8c022cb0)));
  uVar2 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 288)), Vec3_dtor(&(*(undefined4 *)(fr0_ - 0x40)),0xffffffff,0xffffffff,pcVar4));
  (vsp = ((unsigned long)(fr0_ - 288)), Vec3_dtor(&(*(undefined4 *)(fr0_ - 0x50)),0xffffffff,uVar2,pcVar4));
  uVar2 = 0xffffffff;
  ar4_00 = &(*(undefined4 *)(fr0_ - 0x60));
  (vsp = ((unsigned long)(fr0_ - 288)), Vec3_dtor(ar4_00,0xffffffff,ar4_00,0xffffffff));
  (vsp = ((unsigned long)(fr0_ - 288)), Vec3_dtor(&(*(undefined4 *)(fr0_ - 0x70)),0xffffffff,ar4_00,uVar2));
  (vsp = ((unsigned long)(fr0_ - 288)), Vec3_dtor(&(*(undefined4 *)(fr0_ - 0x80)),0xffffffff,ar4_00,uVar2));
  (vsp = ((unsigned long)(fr0_ - 288)), Vec3_dtor(&(*(float *)(fr0_ - 0x90)),0xffffffff,ar4_00,uVar2));
  return ar4;
}

__asm__(".globl _s_WaterTank_0dcaa2\n.set _s_WaterTank_0dcaa2, _s_WaterTank_0dcaa2_def\n");
//@unit 8c0ddb3c
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
int FUN_8c0ddb3c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0ddb3c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 16; for (int i_ = 0; i_ < 16; i_++) z_[i_] = 0; }
  undefined4 ar5_00;
  undefined4 ain0;
  
  ain0 = CONCAT22((short)((uint)(*(undefined4 *)(fr0_ - 0xc)) >> 0x10),(undefined2)ar5);
  if (ar4 != 0) {
    (vsp = ((unsigned long)(fr0_ - 16)), Class_129938_m0_017084(ar4 + 0xc4,0xffffffff,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 16)), Class_129938_m0_017084(ar4 + 0x30,0xffffffff,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 16)), object_dtor_delete(ar4 + 0x24,0xffffffff,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 16)), Vec3_dtor(ar4 + 0x14,0xffffffff,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 16)), Vec3_dtor(ar4 + 4,0xffffffff,ar6,ar7));
    ar5_00 = 0xffffffff;
    (vsp = ((unsigned long)(fr0_ - 16)), free_if_nonnull_wrap_016bfc(ar4,0xffffffff,ar6,ar7));
    if (0 < (short)ain0) {
      ({ unsigned long ri0_ = (unsigned long)(ain0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 16)); free_if_nonnull(ar4,ar5_00,ar6,ar7); });
    }
  }
  return ar4;
}

__asm__(".globl _FUN_8c0ddb3c\n.set _FUN_8c0ddb3c, _FUN_8c0ddb3c_def\n");
//@unit 8c0ddbc8
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
int FUN_8c0ddbc8_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0ddbc8";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 16; for (int i_ = 0; i_ < 16; i_++) z_[i_] = 0; }
  undefined4 ar5_00;
  undefined4 ar6_00;
  undefined4 ar7_00;
  undefined4 ain0;
  
  ain0 = CONCAT22((short)((uint)(*(undefined4 *)(fr0_ - 0xc)) >> 0x10),(undefined2)ar5);
  if (ar4 != 0) {
    ar7_00 = 7;
    ar6_00 = 4;
    ({ unsigned long ri0_ = (unsigned long)(ain0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 16)); vec_delete_array(ar4 + 0x2c,((void *)0x8c0247b0),4,7); });
    (vsp = ((unsigned long)(fr0_ - 16)), free_if_nonnull_wrap_016bfc(ar4 + 0x28,0xffffffff,ar6_00,ar7_00));
    (vsp = ((unsigned long)(fr0_ - 16)), free_if_nonnull_wrap_0153e4(ar4 + 0x20,0xffffffff,ar6_00,ar7_00));
    ar5_00 = 0xffffffff;
    (vsp = ((unsigned long)(fr0_ - 16)), Vec3_dtor(ar4,0xffffffff,ar6_00,ar7_00));
    if (0 < (short)ain0) {
      ({ unsigned long ri0_ = (unsigned long)(ain0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 16)); free_if_nonnull(ar4,ar5_00,ar6_00,ar7_00); });
    }
  }
  return ar4;
}

__asm__(".globl _FUN_8c0ddbc8\n.set _FUN_8c0ddbc8, _FUN_8c0ddbc8_def\n");
//@unit 8c0ddc40
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
int FUN_8c0ddc40_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0ddc40";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 16; for (int i_ = 0; i_ < 16; i_++) z_[i_] = 0; }
  undefined4 ar5_00;
  undefined4 ar6_00;
  undefined4 ar7_00;
  undefined4 ain0;
  
  ain0 = CONCAT22((short)((uint)(*(undefined4 *)(fr0_ - 0xc)) >> 0x10),(undefined2)ar5);
  if (ar4 != 0) {
    (vsp = ((unsigned long)(fr0_ - 16)), free_if_nonnull_wrap_0cffc8(ar4 + 0xeb48,0xffffffff,ar6,ar7));
    ar7_00 = 0x15e;
    ar6_00 = 0xac;
    ({ unsigned long ri0_ = (unsigned long)(ain0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 16)); vec_delete_array(ar4 + 0xc,((void *)0x8c0d0abc),0xac,0x15e); });
    (vsp = ((unsigned long)(fr0_ - 16)), free_if_nonnull_wrap_016bfc(ar4 + 8,0xffffffff,ar6_00,ar7_00));
    ar5_00 = 0xffffffff;
    (vsp = ((unsigned long)(fr0_ - 16)), free_if_nonnull_wrap_0153e4(ar4,0xffffffff,ar6_00,ar7_00));
    if (0 < (short)ain0) {
      ({ unsigned long ri0_ = (unsigned long)(ain0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 16)); free_if_nonnull(ar4,ar5_00,ar6_00,ar7_00); });
    }
  }
  return ar4;
}

__asm__(".globl _FUN_8c0ddc40\n.set _FUN_8c0ddc40, _FUN_8c0ddc40_def\n");
//@unit 8c0ddcc4
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
int FUN_8c0ddcc4_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0ddcc4";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 16; for (int i_ = 0; i_ < 16; i_++) z_[i_] = 0; }
  undefined4 ar5_00;
  undefined4 ain0;
  
  ain0 = CONCAT22((short)((uint)(*(undefined4 *)(fr0_ - 0xc)) >> 0x10),(undefined2)ar5);
  if (ar4 != 0) {
    (vsp = ((unsigned long)(fr0_ - 16)), free_if_nonnull_wrap_016bfc(ar4 + 8,0xffffffff,ar6,ar7));
    ar5_00 = 0xffffffff;
    (vsp = ((unsigned long)(fr0_ - 16)), free_if_nonnull_wrap_0153e4(ar4,0xffffffff,ar6,ar7));
    if (0 < (short)ain0) {
      ({ unsigned long ri0_ = (unsigned long)(ain0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 16)); free_if_nonnull(ar4,ar5_00,ar6,ar7); });
    }
  }
  return ar4;
}

__asm__(".globl _FUN_8c0ddcc4\n.set _FUN_8c0ddcc4, _FUN_8c0ddcc4_def\n");
//@unit 8c0ddd14
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
int FUN_8c0ddd14_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0ddd14";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 16; for (int i_ = 0; i_ < 16; i_++) z_[i_] = 0; }
  undefined4 ar5_00;
  undefined4 ain0;
  
  ain0 = CONCAT22((short)((uint)(*(undefined4 *)(fr0_ - 0xc)) >> 0x10),(undefined2)ar5);
  if (ar4 != 0) {
    (vsp = ((unsigned long)(fr0_ - 16)), free_if_nonnull_wrap_0cffc8(ar4 + 0x30,0xffffffff,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 16)), free_if_nonnull_wrap_016bfc(ar4 + 8,0xffffffff,ar6,ar7));
    ar5_00 = 0xffffffff;
    (vsp = ((unsigned long)(fr0_ - 16)), free_if_nonnull_wrap_0153e4(ar4,0xffffffff,ar6,ar7));
    if (0 < (short)ain0) {
      ({ unsigned long ri0_ = (unsigned long)(ain0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 16)); free_if_nonnull(ar4,ar5_00,ar6,ar7); });
    }
  }
  return ar4;
}

__asm__(".globl _FUN_8c0ddd14\n.set _FUN_8c0ddd14, _FUN_8c0ddd14_def\n");
//@unit 8c0ddd74
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
int FUN_8c0ddd74_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0ddd74";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 16; for (int i_ = 0; i_ < 16; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 ar7_00;
  undefined4 ain0;
  
  ain0 = CONCAT22((short)((uint)(*(undefined4 *)(fr0_ - 0xc)) >> 0x10),(undefined2)ar5);
  if (ar4 != 0) {
    (vsp = ((unsigned long)(fr0_ - 16)), FUN_8c015428(ar4 + 0x12a5c,0xffffffff,ar6,ar7));
    ({ unsigned long ri0_ = (unsigned long)(ain0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 16)); vec_delete_array(ar4 + 0x62c,((void *)0x8c0d3304),0x88,0x226); });
    ({ unsigned long ri0_ = (unsigned long)(ain0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 16)); vec_delete_array(ar4 + 0x5fc,((void *)0x8c0cffc8),0x18,2); });
    uVar2 = 5;
    uVar1 = 0x44;
    ({ unsigned long ri0_ = (unsigned long)(ain0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 16)); vec_delete_array(ar4 + 0x470,((void *)0x8c0d336c),0x44,5); });
    (vsp = ((unsigned long)(fr0_ - 16)), free_if_nonnull_wrap_016bfc(ar4 + 0x154,0xffffffff,uVar1,uVar2));
    (vsp = ((unsigned long)(fr0_ - 16)), free_if_nonnull_wrap_0153e4(ar4 + 0x108,0xffffffff,uVar1,uVar2));
    (vsp = ((unsigned long)(fr0_ - 16)), FUN_8c0fe59c(ar4 + 0x34,0xffffffff,uVar1,uVar2));
    ar7_00 = 3;
    uVar2 = 4;
    ({ unsigned long ri0_ = (unsigned long)(ain0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 16)); vec_delete_array(ar4 + 0x20,((void *)0x8c016bfc),4,3); });
    (vsp = ((unsigned long)(fr0_ - 16)), free_if_nonnull_wrap_016bfc(ar4 + 0x1c,0xffffffff,uVar2,ar7_00));
    (vsp = ((unsigned long)(fr0_ - 16)), free_if_nonnull_wrap_016bfc(ar4 + 0x10,0xffffffff,uVar2,ar7_00));
    uVar1 = 0xffffffff;
    (vsp = ((unsigned long)(fr0_ - 16)), free_if_nonnull_wrap_0153e4(ar4 + 8,0xffffffff,uVar2,ar7_00));
    if (0 < (short)ain0) {
      ({ unsigned long ri0_ = (unsigned long)(ain0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 16)); free_if_nonnull(ar4,uVar1,uVar2,ar7_00); });
    }
  }
  return ar4;
}

__asm__(".globl _FUN_8c0ddd74\n.set _FUN_8c0ddd74, _FUN_8c0ddd74_def\n");
//@unit 8c0dde84
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
undefined4 * Class_12b930_m0_0dde84_def(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "Class_12b930_m0_0dde84";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 16; for (int i_ = 0; i_ < 16; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 ar7_00;
  undefined4 ain0;
  
  ain0 = CONCAT22((short)((uint)(*(undefined4 *)(fr0_ - 0xc)) >> 0x10),(undefined2)ar5);
  if (ar4 != (undefined4 *)(unsigned)0x0) {
    *ar4 = ((undefined1 *)(unsigned)0x8c12b930);
    ({ unsigned long ri0_ = (unsigned long)(ain0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 16)); vec_delete_array(ar4 + 0x8c96,((void *)0x8c0cffc8),0x18,2); });
    uVar2 = 3;
    uVar1 = 0x16c;
    ({ unsigned long ri0_ = (unsigned long)(ain0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 16)); vec_delete_array(ar4 + 0x8b52,((void *)0x8c0ddb3c),0x16c,3); });
    (vsp = ((unsigned long)(fr0_ - 16)), free_if_nonnull_wrap_0153e4(ar4 + 0x8b50,0xffffffff,uVar1,uVar2));
    ar7_00 = 0x6e;
    uVar2 = 0xc;
    ({ unsigned long ri0_ = (unsigned long)(ain0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 16)); vec_delete_array(ar4 + 0x8a06,((void *)0x8c0d6ef8),0xc,0x6e); });
    (vsp = ((unsigned long)(fr0_ - 16)), Vec3_dtor(ar4 + 0x8a00,0xffffffff,uVar2,ar7_00));
    (vsp = ((unsigned long)(fr0_ - 16)), Vec3_dtor(ar4 + 0x89fc,0xffffffff,uVar2,ar7_00));
    (vsp = ((unsigned long)(fr0_ - 16)), Vec3_dtor(ar4 + 0x89f8,0xffffffff,uVar2,ar7_00));
    (vsp = ((unsigned long)(fr0_ - 16)), Vec3_dtor(ar4 + 0x89f4,0xffffffff,uVar2,ar7_00));
    (vsp = ((unsigned long)(fr0_ - 16)), free_if_nonnull_wrap_0cfe48(ar4 + 0x89d3,0xffffffff,uVar2,ar7_00));
    (vsp = ((unsigned long)(fr0_ - 16)), FUN_8c0ddbc8(ar4 + 0x89c1,0xffffffff,uVar2,ar7_00));
    (vsp = ((unsigned long)(fr0_ - 16)), free_if_nonnull_wrap_0153e4(ar4 + 0x89bf,0xffffffff,uVar2,ar7_00));
    (vsp = ((unsigned long)(fr0_ - 16)), free_if_nonnull_wrap_016bfc(ar4 + 0x89be,0xffffffff,uVar2,ar7_00));
    (vsp = ((unsigned long)(fr0_ - 16)), FUN_8c0ddc40(ar4 + 0x4ee3,0xffffffff,uVar2,ar7_00));
    (vsp = ((unsigned long)(fr0_ - 16)), FUN_8c0ddcc4(ar4 + 0x4edc,0xffffffff,uVar2,ar7_00));
    (vsp = ((unsigned long)(fr0_ - 16)), FUN_8c0ddd14(ar4 + 0x4ec9,0xffffffff,uVar2,ar7_00));
    (vsp = ((unsigned long)(fr0_ - 16)), FUN_8c0ddd74(ar4 + 0x42b,0xffffffff,uVar2,ar7_00));
    (vsp = ((unsigned long)(fr0_ - 16)), free_if_nonnull_wrap_016bfc(ar4 + 0x41f,0xffffffff,uVar2,ar7_00));
    (vsp = ((unsigned long)(fr0_ - 16)), free_if_nonnull_wrap_016bfc(ar4 + 0x41e,0xffffffff,uVar2,ar7_00));
    (vsp = ((unsigned long)(fr0_ - 16)), free_if_nonnull_wrap_016bfc(ar4 + 0x41d,0xffffffff,uVar2,ar7_00));
    (vsp = ((unsigned long)(fr0_ - 16)), free_if_nonnull_wrap_0153e4(ar4 + 0x41b,0xffffffff,uVar2,ar7_00));
    uVar1 = 0;
    (vsp = ((unsigned long)(fr0_ - 16)), Class_12bb08_m0_0da208(ar4,0,uVar2,ar7_00));
    if (0 < (short)ain0) {
      ({ unsigned long ri0_ = (unsigned long)(ain0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 16)); free_if_nonnull(ar4,uVar1,uVar2,ar7_00); });
    }
  }
  return ar4;
}

__asm__(".globl _Class_12b930_m0_0dde84\n.set _Class_12b930_m0_0dde84, _Class_12b930_m0_0dde84_def\n");
//@unit 8c0de07c
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
undefined4 FUN_8c0de07c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0de07c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 36; for (int i_ = 0; i_ < 36; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 ar5_00;
  int ar6_00;
  undefined4 extraout_fr1 = 0;
  undefined4 extraout_fr0 = 0;
  char cVar2;
  
  cVar2 = '\0';
  (vsp = ((unsigned long)(fr0_ - 36)), s_GRAPHICS_ENV_0e16a0(ar4,ar5,ar6,ar7));
  ar6_00 = ar4 + 0x22eb4;
  (vsp = ((unsigned long)(fr0_ - 36)), s_GRAPHICS_COMMON_0d33f4(ar4 + 0x10ac,ar5,ar6_00,ar7));
  iVar1 = ar4 + 0xa68;
  (vsp = ((unsigned long)(fr0_ - 36)), Vec3_ctor_copy((undefined1 *)(unsigned)((int)register0x0000003c + -0x1c),iVar1,ar6_00,ar7));
  ({ unsigned long ri0_ = (unsigned long)((undefined4)(*(undefined8 *)(fr0_ - 0x20))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 36)); FUN_8c0bf11c(ar4 + 0x13b70,iVar1,ar6_00,ar7); });
  if (cVar2 == '\0') {
    (*(uint*)((uchar*)&(*(undefined8 *)(fr0_ - 0x20))+0)) = extraout_fr0;
  }
  else {
    (*(undefined8 *)(fr0_ - 0x20)) = CONCAT44(extraout_fr0,extraout_fr1);
  }
  (vsp = ((unsigned long)(fr0_ - 36)), FUN_8c0d4e88(ar4 + 0x10ac,(undefined1 *)(unsigned)((int)register0x0000003c + -0x1c),ar6_00,ar7));
  ar5_00 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 36)), Vec3_dtor((undefined1 *)(unsigned)((int)register0x0000003c + -0x1c),0xffffffff,ar6_00,ar7));
  if ((*(int *)(unsigned)(ar4 + 0x22810) == 1) || (*(int *)(unsigned)(ar4 + 0x22814) == 1)) {
    iVar1 = ar4 + 0x10ac;
    (vsp = ((unsigned long)(fr0_ - 36)), FUN_8c0d4f3c(iVar1,ar5_00,ar6_00,ar7));
  }
  else {
    iVar1 = ar4 + 0x10ac;
    (vsp = ((unsigned long)(fr0_ - 36)), FUN_8c0d4f70(iVar1,ar5_00,ar6_00,ar7));
  }
  (vsp = ((unsigned long)(fr0_ - 36)), FUN_8c0d5e2c(iVar1,ar5_00,ar6_00,ar7));
  (*(uint*)((uchar*)&(*(undefined8 *)(fr0_ - 0x20))+0)) = (vsp = ((unsigned long)(fr0_ - 36)), thunk_FUN_8c20a1d0(0x8c43786c,ar5_00,ar6_00,ar7));
  return (undefined4)(*(undefined8 *)(fr0_ - 0x20));
}

__asm__(".globl _FUN_8c0de07c\n.set _FUN_8c0de07c, _FUN_8c0de07c_def\n");
//@unit 8c0de170
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
undefined4 FUN_8c0de170_def(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0de170";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*ar4 + 0x1c))))(ar4,ar5,ar6,ar7));
  return uVar1;
}

__asm__(".globl _FUN_8c0de170\n.set _FUN_8c0de170, _FUN_8c0de170_def\n");
//@unit 8c0de18c
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
undefined4 FUN_8c0de18c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0de18c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  (vsp = ((unsigned long)(fr0_ - 0)), s_GRAPHICS_ENV_0e16a0(ar4,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), s_GRAPHICS_COMMON_0d377a(ar4 + 0x10ac,ar5,ar6,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), s_GRAPHICS_ENV_0d0bd2(ar4 + 0x13b8c,ar5,ar6,ar7));
  return uVar1;
}

__asm__(".globl _FUN_8c0de18c\n.set _FUN_8c0de18c, _FUN_8c0de18c_def\n");
//@unit 8c0de1dc
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
undefined4 Class_12b930_m1_0de1dc_def(int ar4,int ar5,undefined1 *ar6,undefined1 *ar7)

{
  ring[rp++ & 255] = "Class_12b930_m1_0de1dc";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 52; for (int i_ = 0; i_ < 52; i_++) z_[i_] = 0; }
  undefined8 uVar1;
  int iVar2;
  undefined1 *ar6_00;
  int iVar3;
  float fVar4;
  double in_dr0 = 0;
  undefined8 in_xd0 = 0;
  char cVar5;
  char cVar6;
  
  cVar6 = '\0';
  cVar5 = '\0';
  iVar2 = ar5;
  ar6_00 = ar6;
  (vsp = ((unsigned long)(fr0_ - 52)), Vec3_ctor_zero(((undefined1 *)(fr0_ - 0x20)),ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 52)), Vec3_ctor_zero(((undefined1 *)(fr0_ - 0x30)),iVar2,ar6_00,ar7));
  if (*(int *)(unsigned)(ar4 + 0xacc) == 2) {
    ar7 = ((undefined1 *)(fr0_ - 0x18));
    ar6_00 = ((undefined1 *)(fr0_ - 0x1c));
    (vsp = ((unsigned long)(fr0_ - 52)), FUN_8c0db5a8(ar4 + 0x9e8,((undefined1 *)(fr0_ - 0x20)),ar6_00,ar7));
    iVar2 = ar4 + 0xa98;
    (vsp = ((unsigned long)(fr0_ - 52)), Vec3_assign(((undefined1 *)(fr0_ - 0x30)),iVar2,ar6_00,ar7));
    (vsp = ((unsigned long)(fr0_ - 52)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0xac8) + 8) + 0x130))))
              (*(int *)(unsigned)(ar4 + 0xac8),iVar2,ar6_00,ar7));
    uVar1 = (*(undefined8 *)(fr0_ - 0x28));
    if (cVar6 == '\0') {
      in_dr0 = CONCAT44D((int)((ulonglong)in_dr0 >> 0x20),(int)(*(undefined8 *)(fr0_ - 0x28)));
      uVar1 = in_xd0;
    }
    if (cVar5 == '\0') {
      fVar4 = F32LO(in_dr0) - F32HI(in_dr0);
    }
    else {
      fVar4 = SUB84(in_dr0 - in_dr0,0);
    }
    if (cVar6 == '\0') {
      (*(undefined8 *)(fr0_ - 0x28)) = CONCAT44((*(uint*)((uchar*)&(*(undefined8 *)(fr0_ - 0x28))+4)),fVar4);
      uVar1 = (*(undefined8 *)(fr0_ - 0x28));
    }
    (*(undefined8 *)(fr0_ - 0x28)) = uVar1;
    for (iVar3 = 0; iVar3 < 3; iVar3 = iVar3 + 1) {
      ar7 = ((undefined1 *)(fr0_ - 0x20));
      ar6_00 = ((undefined1 *)(fr0_ - 0x30));
      iVar2 = ar4 + 0xa68;
      (vsp = ((unsigned long)(fr0_ - 52)), FUN_8c0d7294(ar4 + iVar3 * 0x16c + 0x22d48,iVar2,ar6_00,ar7));
    }
  }
  for (iVar3 = 0; iVar3 < 3; iVar3 = iVar3 + 1) {
    (vsp = ((unsigned long)(fr0_ - 52)), FUN_8c0d7100(ar4 + iVar3 * 0x16c + 0x22d48,iVar2,ar6_00,ar7));
  }
  (vsp = ((unsigned long)(fr0_ - 52)), FUN_8c0e389c(ar4,iVar2,ar6_00,ar7));
  (vsp = ((unsigned long)(fr0_ - 52)), FUN_8c0d0178(ar4 + 0x13b24,iVar2,ar6_00,ar7));
  iVar2 = ar5;
  (vsp = ((unsigned long)(fr0_ - 52)), FUN_8c0d9600(ar4 + 0x22704,ar5,ar6_00,ar7));
  (vsp = ((unsigned long)(fr0_ - 52)), get_field_a0_035724(ar5,iVar2,ar6_00,ar7));
  (vsp = ((unsigned long)(fr0_ - 52)), pure_virtual_stub(ar4,ar5,ar6_00,ar7));
  (vsp = ((unsigned long)(fr0_ - 52)), Class_12bb08_m1_0da338(ar4,ar5,ar6,ar7));
  iVar2 = ar4 + 0x10ac;
  (vsp = ((unsigned long)(fr0_ - 52)), FUN_8c0e3994(ar4,iVar2,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 52)), FUN_8c0d64a0(ar4 + 0xa68,iVar2,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 52)), FUN_8c0dbd80(ar4,iVar2,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 52)), FUN_8c0d0714(ar4 + 0x13b24,iVar2,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 52)), Vec3_dtor(((undefined1 *)(fr0_ - 0x30)),0xffffffff,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 52)), Vec3_dtor(((undefined1 *)(fr0_ - 0x20)),0xffffffff,ar6,ar7));
  return 1;
}

__asm__(".globl _Class_12b930_m1_0de1dc\n.set _Class_12b930_m1_0de1dc, _Class_12b930_m1_0de1dc_def\n");
//@unit 8c0de3d4
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
undefined4 Class_12b930_m2_0de3d4_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "Class_12b930_m2_0de3d4";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 ar5_00;
  undefined4 ar6_00;
  int iVar1;
  
  ar5_00 = ar5;
  ar6_00 = ar6;
  for (iVar1 = 0; iVar1 < 3; iVar1 = iVar1 + 1) {
    (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0d7154(ar4 + iVar1 * 0x16c + 0x22d48,ar5_00,ar6_00,ar7));
  }
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0d02c8(ar4 + 0x13b24,ar5_00,ar6_00,ar7));
  iVar1 = ar4 + 0x22eb4;
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0d3c08(ar4 + 0x10ac,iVar1,ar6_00,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), get_field_a0_035724(ar5,iVar1,ar6_00,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), pure_virtual_stub(ar4,ar5,ar6_00,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), Class_12bb08_m2_0da5a8(ar4,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0dbd80(ar4,ar5,ar6,ar7));
  return 1;
}

__asm__(".globl _Class_12b930_m2_0de3d4\n.set _Class_12b930_m2_0de3d4, _Class_12b930_m2_0de3d4_def\n");
//@unit 8c0de4b0
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
undefined4 Class_12b930_m3_0de4b0_def(int ar4,int ar5,undefined4 ar6,int ar7)

{
  ring[rp++ & 255] = "Class_12b930_m3_0de4b0";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 76; for (int i_ = 0; i_ < 76; i_++) z_[i_] = 0; }
  int iVar1;
  int a4;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar4 = ar5;
  uVar3 = ar6;
  iVar1 = (vsp = ((unsigned long)(fr0_ - 76)), get_field_300_0bf154(ar4 + 0xa4,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 76)), Vec3_set_zero(((undefined1 *)(fr0_ - 0x2c)),iVar4,uVar3,ar7));
  a4 = (vsp = ((unsigned long)(fr0_ - 76)), FUN_8c0da588(ar4 + 0xa4,iVar4,uVar3,ar7));
  (vsp = ((unsigned long)(fr0_ - 76)), FUN_8c0e389c(ar4,iVar4,uVar3,ar7));
  (vsp = ((unsigned long)(fr0_ - 76)), FUN_8c0d0178(ar4 + 0x13b24,iVar4,uVar3,ar7));
  (vsp = ((unsigned long)(fr0_ - 76)), FUN_8c0d0d1c(ar4 + 0x13b8c,iVar4,uVar3,ar7));
  iVar4 = ar5;
  (vsp = ((unsigned long)(fr0_ - 76)), FUN_8c0d9600(ar4 + 0x22704,ar5,uVar3,ar7));
  ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x48))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 76)); FUN_8c0de6c0(ar4 + 0x13b24,iVar4,uVar3,ar7); });
  ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x48))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 76)); FUN_8c0de6b0(ar4 + 0x13b70,iVar4,uVar3,ar7); });
  iVar6 = a4;
  (*(undefined4 *)(unsigned)(unsigned)0x8c437550) = iVar1;
  for (iVar5 = 0; iVar5 < iVar1; iVar5 = iVar5 + 1) {
    iVar4 = ar5;
    uVar3 = ar6;
    ar7 = ar4;
    (vsp = ((unsigned long)(fr0_ - 76)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(iVar6 + 8) + 0x10))))(iVar6,ar5,ar6,ar4));
    iVar6 = (vsp = ((unsigned long)(fr0_ - 76)), list_node_next(iVar6,iVar4,uVar3,ar7));
  }
  iVar6 = a4;
  for (iVar5 = 0; iVar5 < iVar1; iVar5 = iVar5 + 1) {
    iVar4 = ar4;
    (vsp = ((unsigned long)(fr0_ - 76)), FUN_8c0f4258(iVar6,ar4,uVar3,ar7));
    iVar6 = (vsp = ((unsigned long)(fr0_ - 76)), list_node_next(iVar6,iVar4,uVar3,ar7));
  }
  iVar6 = a4;
  for (iVar5 = 0; iVar5 < iVar1; iVar5 = iVar5 + 1) {
    iVar2 = (vsp = ((unsigned long)(fr0_ - 76)), FUN_8c0da4f8(iVar6,iVar4,uVar3,ar7));
    if (iVar2 == 1) {
      iVar4 = ar4;
      (vsp = ((unsigned long)(fr0_ - 76)), FUN_8c0f4974(iVar6,ar4,uVar3,ar7));
    }
    iVar6 = (vsp = ((unsigned long)(fr0_ - 76)), list_node_next(iVar6,iVar4,uVar3,ar7));
  }
  for (iVar6 = 0; iVar6 < iVar1; iVar6 = iVar6 + 1) {
    iVar4 = ar4;
    (vsp = ((unsigned long)(fr0_ - 76)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(a4 + 8) + 0x28))))(a4,ar4,uVar3,ar7));
    a4 = (vsp = ((unsigned long)(fr0_ - 76)), list_node_next(a4,iVar4,uVar3,ar7));
  }
  (vsp = ((unsigned long)(fr0_ - 76)), FUN_8c0dbbe8(ar4,iVar4,uVar3,ar7));
  (vsp = ((unsigned long)(fr0_ - 76)), FUN_8c0e3994(ar4,ar4 + 0x10ac,uVar3,ar7));
  iVar4 = ar4 + 0x22eb4;
  (vsp = ((unsigned long)(fr0_ - 76)), FUN_8c0d3d6c(ar4 + 0x10ac,iVar4,uVar3,ar7));
  (vsp = ((unsigned long)(fr0_ - 76)), FUN_8c0dbd80(ar4,iVar4,uVar3,ar7));
  uVar3 = (vsp = ((unsigned long)(fr0_ - 76)), object_dtor_delete(((undefined1 *)(fr0_ - 0x2c)),0xffffffff,uVar3,ar7));
  return uVar3;
}

__asm__(".globl _Class_12b930_m3_0de4b0\n.set _Class_12b930_m3_0de4b0, _Class_12b930_m3_0de4b0_def\n");
//@unit 8c0de6b0
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
undefined4 FUN_8c0de6b0_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0de6b0";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;
  undefined4 ain0 = (undefined4)(unsigned long)vin0;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  float in_fr4 = 0;
  
  if (in_fr4 < 0.0) {
    in_fr4 = 0.0;
  }
  *(float *)(unsigned)(ar4 + 0xc) = in_fr4;
  return ain0;
}

__asm__(".globl _FUN_8c0de6b0\n.set _FUN_8c0de6b0, _FUN_8c0de6b0_def\n");
//@unit 8c0de6c0
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
undefined4 FUN_8c0de6c0_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0de6c0";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;
  undefined4 ain0 = (undefined4)(unsigned long)vin0;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  float in_fr4 = 0;
  
  if (in_fr4 < 0.0) {
    in_fr4 = 0.0;
  }
  *(float *)(unsigned)(ar4 + 0xc) = in_fr4;
  return ain0;
}

__asm__(".globl _FUN_8c0de6c0\n.set _FUN_8c0de6c0, _FUN_8c0de6c0_def\n");
//@unit 8c0de6d0
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
//@unit 8c0deb30
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
int free_if_nonnull_wrap_0deb30_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "free_if_nonnull_wrap_0deb30";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 12; for (int i_ = 0; i_ < 12; i_++) z_[i_] = 0; }
  
  if ((ar4 != 0) && (0 < (short)ar5)) {
    ({ unsigned long ri0_ = (unsigned long)(CONCAT22((short)((uint)(*(undefined4 *)(fr0_ - 0xc)) >> 0x10),(short)ar5)); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 12)); free_if_nonnull(ar4,ar5,ar6,ar7); });
  }
  return ar4;
}

__asm__(".globl _free_if_nonnull_wrap_0deb30\n.set _free_if_nonnull_wrap_0deb30, _free_if_nonnull_wrap_0deb30_def\n");
//@unit 8c0deb60
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
undefined4 FUN_8c0deb60_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0deb60";
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
  (vsp = ((unsigned long)(fr0_ - 108)), FUN_8c0d4428(ar4 + 0x10ac,iVar3,puVar5,ar7));
  if (cVar10 == '\0') {
    (*(undefined4 *)(unsigned)(unsigned)0x8c437f34) = CONCAT44((*(undefined1 *)(unsigned)0x8c437f34),(int)((ulonglong)uVar7 >> 0x20));
    uVar7 = (*(undefined4 *)(unsigned)(unsigned)0x8c437f34);
  }
  (*(undefined4 *)(unsigned)(unsigned)0x8c437f34) = uVar7;
  (vsp = ((unsigned long)(fr0_ - 108)), FUN_8c0e157c(ar4,iVar3,puVar5,ar7));
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
            (vsp = ((unsigned long)(fr0_ - 108)), FUN_8c0d7410(ar4 + iVar4 * 0x16c + 0x22d48,iVar3,puVar5,ar7));
          }
        }
      }
    }
  }
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
          (vsp = ((unsigned long)(fr0_ - 108)), FUN_8c0d05d0(ar4 + 0x13b24,iVar3,puVar5,ar7));
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
  (vsp = ((unsigned long)(fr0_ - 108)), FUN_8c0d0990(ar4 + 0x13b70,iVar3,puVar5,ar7));
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

__asm__(".globl _FUN_8c0deb60\n.set _FUN_8c0deb60, _FUN_8c0deb60_def\n");
//@unit 8c0def78
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
undefined4 FUN_8c0def78_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0def78";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 76; for (int i_ = 0; i_ < 76; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined8 in_dr0 = 0;
  code *pcVar6;
  char cVar7;
  
  cVar7 = '\0';
  puVar4 = &(*(undefined4 *)(fr0_ - 0x1c));
  (vsp = ((unsigned long)(fr0_ - 76)), FUN_8c0d99b8(puVar4,ar5,ar6,ar7));
  if (*(int *)(unsigned)(ar4 + 0x1024) != 0) {
    (vsp = ((unsigned long)(fr0_ - 76)), FUN_8c0d2028(puVar4,ar5,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 76)), FUN_8c016340(ar4 + 0x1028,ar5,ar6,ar7));
  }
  if (*(int *)(unsigned)(ar4 + 0x1024) == 2) {
    if (*(int *)(unsigned)(ar4 + 0x1020) == 0) {
      ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x48))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 76)); FUN_8c0bf0e8(ar4 + 0x13b24,ar5,ar6,ar7); });
      uVar2 = (int)((ulonglong)in_dr0 >> 0x20);
      if (cVar7 == '\0') {
        uVar2 = ((undefined4 *)(fr0_ - 0x2c))[0];
      }
      ((undefined4 *)(fr0_ - 0x2c))[0] = uVar2;
      (vsp = ((unsigned long)(fr0_ - 76)), FUN_8c0d1858(((undefined1 *)(unsigned)0x8c13f3b0),ar5,ar6,ar7));
    }
    else if (*(int *)(unsigned)(ar4 + 0x1020) == 1) {
      ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x48))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 76)); FUN_8c0bf11c(ar4 + 0x13b70,ar5,ar6,ar7); });
      (vsp = ((unsigned long)(fr0_ - 76)), FUN_8c0d1858(((undefined1 *)(unsigned)0x8c13f400),ar5,ar6,ar7));
    }
  }
  uVar2 = (undefined4)in_dr0;
  (vsp = ((unsigned long)(fr0_ - 76)), FUN_8c0dbdf4(ar4,ar5,ar6,ar7));
  iVar3 = ar4 + 0xa68;
  (vsp = ((unsigned long)(fr0_ - 76)), Vec3_ctor_copy(((undefined4 *)(fr0_ - 0x2c)),iVar3,ar6,ar7));
  ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x48))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 76)); FUN_8c0bf11c(ar4 + 0x13b70,iVar3,ar6,ar7); });
  (vsp = ((unsigned long)(fr0_ - 76)), FUN_8c0d4e88(ar4 + 0x10ac,((undefined4 *)(fr0_ - 0x2c)),ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 76)), Vec3_dtor(((undefined4 *)(fr0_ - 0x2c)),0xffffffff,ar6,ar7));
  iVar3 = ar4 + 0x7c;
  (vsp = ((unsigned long)(fr0_ - 76)), FUN_8c0e3ebc(ar4,ar4 + 0x78,iVar3,ar7));
  if (cVar7 == '\0') {
    (*(undefined4 *)(fr0_ - 0x1c)) = *(undefined4 *)(unsigned)(ar4 + 0x78);
    (*(undefined4 *)(fr0_ - 0x18)) = *(undefined4 *)(unsigned)(ar4 + 0x7c);
    pcVar6 = (code *)0x42c80000;
  }
  else {
    (*(undefined4 *)(fr0_ - 0x1c)) = (undefined4)*(undefined8 *)(unsigned)(ar4 + 0x78);
    (*(undefined4 *)(fr0_ - 0x18)) = (undefined4)*(undefined8 *)(unsigned)(ar4 + 0x7c);
    uVar2 = 0x42c80000;
    pcVar6 = ((void *)0x8c0d3f7c);
  }
  (*(undefined4 *)(fr0_ - 0x14)) = 0x42c80000;
  (*(int *)(fr0_ - 0x10)) = ar4 + 0xa68;
  puVar4 = &(*(undefined4 *)(fr0_ - 0x1c));
  (vsp = ((unsigned long)(fr0_ - 76)), FUN_8c0d3f7c(ar4 + 0x10ac,puVar4,iVar3,ar7));
  (vsp = ((unsigned long)(fr0_ - 76)), FUN_8c0e3f24(ar4,puVar4,iVar3,ar7));
  puVar4 = &(*(undefined4 *)(fr0_ - 0x1c));
  iVar3 = ar4 + 0x22d48;
  (vsp = ((unsigned long)(fr0_ - 76)), FUN_8c0d46cc(ar4 + 0x10ac,iVar3,puVar4,ar7));
  if (cVar7 == '\0') {
    (*(undefined4 *)(unsigned)(unsigned)0x8c438048) = CONCAT44((*(undefined1 *)(unsigned)0x8c438048),pcVar6);
  }
  else {
    (*(undefined4 *)(unsigned)(unsigned)0x8c438048) = CONCAT44(pcVar6,uVar2);
  }
  (vsp = ((unsigned long)(fr0_ - 76)), FUN_8c0e157c(ar4,iVar3,puVar4,ar7));
  (vsp = ((unsigned long)(fr0_ - 76)), FUN_8c01538c(ar4 + 0x22d40,iVar3,puVar4,ar7));
  (vsp = ((unsigned long)(fr0_ - 76)), FUN_8c0d7410(ar4 + 0x22d48,iVar3,puVar4,ar7));
  (vsp = ((unsigned long)(fr0_ - 76)), FUN_8c0d7410(ar4 + 0x22eb4,iVar3,puVar4,ar7));
  (vsp = ((unsigned long)(fr0_ - 76)), FUN_8c0d7410(ar4 + 0x23020,iVar3,puVar4,ar7));
  (vsp = ((unsigned long)(fr0_ - 76)), FUN_8c0d0990(ar4 + 0x13b70,iVar3,puVar4,ar7));
  (vsp = ((unsigned long)(fr0_ - 76)), FUN_8c0d05d0(ar4 + 0x13b24,iVar3,puVar4,ar7));
  iVar3 = ar4 + 0x226f8;
  (vsp = ((unsigned long)(fr0_ - 76)), FUN_8c0e4198(ar4,iVar3,puVar4,ar7));
  (vsp = ((unsigned long)(fr0_ - 76)), FUN_8c0d9720(ar4 + 0x22704,iVar3,puVar4,ar7));
  for (iVar5 = 0; iVar5 < 8; iVar5 = iVar5 + 1) {
    iVar1 = (vsp = ((unsigned long)(fr0_ - 76)), FUN_8c0f6ab0(ar4 + iVar5 * 0x68 + 0xc0c,iVar3,puVar4,ar7));
    if (iVar1 == 1) {
      puVar4 = (undefined4 *)(unsigned)(ar4 + 4);
      iVar3 = ar4 + 0xc;
      (vsp = ((unsigned long)(fr0_ - 76)), FUN_8c0f7118(ar4 + iVar5 * 0x68 + 0xc0c,iVar3,puVar4,ar7));
    }
  }
  (vsp = ((unsigned long)(fr0_ - 76)), FUN_8c0da754(ar4,iVar3,puVar4,ar7));
  uVar2 = (vsp = ((unsigned long)(fr0_ - 76)), free_if_nonnull_wrap_0deb30(&(*(undefined4 *)(fr0_ - 0x1c)),0xffffffff,puVar4,ar7));
  return uVar2;
}

__asm__(".globl _FUN_8c0def78\n.set _FUN_8c0def78, _FUN_8c0def78_def\n");
//@unit 8c0df250
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
undefined4 FUN_8c0df250_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0df250";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 100; for (int i_ = 0; i_ < 100; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  undefined4 in_fr1 = 0;
  float fVar6;
  undefined8 uVar7;
  undefined4 uVar8;
  float fVar9;
  char cVar10;
  char cVar11;
  
  cVar11 = '\0';
  cVar10 = '\0';
  (vsp = ((unsigned long)(fr0_ - 100)), FUN_8c0d99b8(&(*(undefined4 *)(fr0_ - 0x20)),ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 100)), Vec3_ctor_zero(&(*(undefined4 *)(fr0_ - 0x30)),ar5,ar6,ar7));
  if (cVar11 == '\0') {
    (*(undefined4 *)(fr0_ - 0x30)) = *(undefined4 *)(unsigned)(ar4 + 0x22d4c);
    (*(undefined4 *)(fr0_ - 0x2c)) = *(undefined4 *)(unsigned)(ar4 + 0x22d50);
    (*(undefined4 *)(fr0_ - 0x28)) = *(undefined4 *)(unsigned)(ar4 + 0x22d54);
    uVar7 = CONCAT44((*(undefined4 *)(fr0_ - 0x28)),in_fr1);
  }
  else {
    (*(undefined4 *)(fr0_ - 0x30)) = (undefined4)*(undefined8 *)(unsigned)(ar4 + 0x22d4c);
    (*(undefined4 *)(fr0_ - 0x2c)) = (undefined4)*(undefined8 *)(unsigned)(ar4 + 0x22d50);
    uVar7 = *(undefined8 *)(unsigned)(ar4 + 0x22d54);
    (*(undefined4 *)(fr0_ - 0x28)) = (undefined4)uVar7;
    (*(undefined4 *)(fr0_ - 0x24)) = (undefined4)((ulonglong)uVar7 >> 0x20);
  }
  iVar4 = ar4;
  (vsp = ((unsigned long)(fr0_ - 100)), FUN_8c0dbdf4(ar4,ar5,ar6,ar7));
  if (*(int *)(unsigned)(ar4 + 0x1024) != 0) {
    (vsp = ((unsigned long)(fr0_ - 100)), FUN_8c0d2028(iVar4,ar5,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 100)), FUN_8c016340(ar4 + 0x1028,ar5,ar6,ar7));
  }
  if (*(int *)(unsigned)(ar4 + 0x1024) == 2) {
    if (*(int *)(unsigned)(ar4 + 0x1020) == 0) {
      ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x60))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 100)); FUN_8c0bf0e8(ar4 + 0x13b24,ar5,ar6,ar7); });
      fVar6 = F32HI(uVar7);
      if (cVar11 == '\0') {
        fVar6 = (*(float *)(fr0_ - 0x38));
      }
      (*(float *)(fr0_ - 0x38)) = fVar6;
      (vsp = ((unsigned long)(fr0_ - 100)), FUN_8c0d1858(((undefined1 *)(unsigned)0x8c13f3d8),ar5,ar6,ar7));
    }
    else if (*(int *)(unsigned)(ar4 + 0x1020) == 4) {
      (vsp = ((unsigned long)(fr0_ - 100)), FUN_8c0bf0ac(ar4 + 0x13b8c,ar5,ar6,ar7));
      (vsp = ((unsigned long)(fr0_ - 100)), FUN_8c0d1858(((undefined1 *)(unsigned)0x8c13f428),ar5,ar6,ar7));
    }
  }
  uVar2 = (undefined4)uVar7;
  iVar4 = ar4 + 0x7c;
  (vsp = ((unsigned long)(fr0_ - 100)), FUN_8c0e3ebc(ar4,ar4 + 0x78,iVar4,ar7));
  if (cVar11 == '\0') {
    (*(undefined4 *)(fr0_ - 0x20)) = *(undefined4 *)(unsigned)(ar4 + 0x78);
    (*(undefined4 *)(fr0_ - 0x1c)) = *(undefined4 *)(unsigned)(ar4 + 0x7c);
    uVar8 = 0x42c80000;
  }
  else {
    (*(undefined4 *)(fr0_ - 0x20)) = (undefined4)*(undefined8 *)(unsigned)(ar4 + 0x78);
    (*(undefined4 *)(fr0_ - 0x1c)) = (undefined4)*(undefined8 *)(unsigned)(ar4 + 0x7c);
    uVar2 = 0x42c80000;
    uVar8 = 0xa68;
  }
  (*(undefined4 *)(fr0_ - 0x18)) = 0x42c80000;
  (*(int *)(fr0_ - 0x14)) = ar4 + 0xa68;
  puVar3 = &(*(undefined4 *)(fr0_ - 0x20));
  (vsp = ((unsigned long)(fr0_ - 100)), FUN_8c0d400c(ar4 + 0x10ac,puVar3,iVar4,ar7));
  (vsp = ((unsigned long)(fr0_ - 100)), FUN_8c0e3f24(ar4,puVar3,iVar4,ar7));
  puVar3 = &(*(undefined4 *)(fr0_ - 0x20));
  (vsp = ((unsigned long)(fr0_ - 100)), FUN_8c0d4900(ar4 + 0x10ac,puVar3,iVar4,ar7));
  if (cVar11 == '\0') {
    (*(undefined4 *)(unsigned)(unsigned)0x8c43814c) = CONCAT44((*(undefined1 *)(unsigned)0x8c43814c),uVar8);
  }
  else {
    (*(undefined4 *)(unsigned)(unsigned)0x8c43814c) = CONCAT44(uVar8,uVar2);
  }
  (vsp = ((unsigned long)(fr0_ - 100)), FUN_8c0e15fc(ar4,puVar3,iVar4,ar7));
  (vsp = ((unsigned long)(fr0_ - 100)), FUN_8c01538c(ar4 + 0x22d40,puVar3,iVar4,ar7));
  (vsp = ((unsigned long)(fr0_ - 100)), FUN_8c0d7410(ar4 + 0x22d48,puVar3,iVar4,ar7));
  for (iVar5 = 1; iVar5 < 3; iVar5 = iVar5 + 1) {
    (vsp = ((unsigned long)(fr0_ - 100)), FUN_8c0d43cc(&(*(float *)(fr0_ - 0x38)),puVar3,iVar4,ar7));
    if (cVar11 == '\0') {
      fVar9 = -150.0;
      fVar6 = (*(float *)(fr0_ - 0x38));
    }
    else {
      fVar6 = -150.0;
      fVar9 = 800.0;
    }
    if (cVar10 != '\0' || fVar9 <= fVar6) {
      if (cVar11 == '\0') {
        fVar9 = 800.0;
        fVar6 = (*(float *)(fr0_ - 0x38));
      }
      else {
        fVar6 = 800.0;
        fVar9 = -100.0;
      }
      if (cVar10 != '\0' || fVar6 <= fVar9) {
        if (cVar11 == '\0') {
          fVar9 = -100.0;
          fVar6 = (*(float *)(fr0_ - 0x34));
        }
        else {
          fVar6 = -100.0;
          fVar9 = 600.0;
        }
        if (cVar10 != '\0' || fVar9 <= fVar6) {
          if (cVar11 == '\0') {
            fVar9 = 600.0;
            fVar6 = (*(float *)(fr0_ - 0x34));
          }
          else {
            fVar6 = 600.0;
            fVar9 = 1.99915e-40;
          }
          if (cVar10 != '\0' || fVar6 <= fVar9) {
            (vsp = ((unsigned long)(fr0_ - 100)), FUN_8c0d7410(ar4 + iVar5 * 0x16c + 0x22d48,puVar3,iVar4,ar7));
          }
        }
      }
    }
  }
  (vsp = ((unsigned long)(fr0_ - 100)), FUN_8c0d43cc(&(*(float *)(fr0_ - 0x38)),puVar3,iVar4,ar7));
  if (cVar11 == '\0') {
    fVar9 = -150.0;
    fVar6 = (*(float *)(fr0_ - 0x38));
  }
  else {
    fVar6 = -150.0;
    fVar9 = 800.0;
  }
  if (cVar10 != '\0' || fVar9 <= fVar6) {
    if (cVar11 == '\0') {
      fVar9 = 800.0;
      fVar6 = (*(float *)(fr0_ - 0x38));
    }
    else {
      fVar6 = 800.0;
      fVar9 = -100.0;
    }
    if (cVar10 != '\0' || fVar6 <= fVar9) {
      if (cVar11 == '\0') {
        fVar9 = -100.0;
        fVar6 = (*(float *)(fr0_ - 0x34));
      }
      else {
        fVar6 = -100.0;
        fVar9 = 600.0;
      }
      if (cVar10 != '\0' || fVar9 <= fVar6) {
        if (cVar11 == '\0') {
          fVar6 = 600.0;
        }
        else {
          (*(float *)(fr0_ - 0x34)) = 600.0;
          fVar6 = 1.99915e-40;
        }
        if (cVar10 != '\0' || (*(float *)(fr0_ - 0x34)) <= fVar6) {
          (vsp = ((unsigned long)(fr0_ - 100)), FUN_8c0d05d0(ar4 + 0x13b24,puVar3,iVar4,ar7));
        }
      }
    }
  }
  (vsp = ((unsigned long)(fr0_ - 100)), FUN_8c0d43cc(&(*(float *)(fr0_ - 0x38)),puVar3,iVar4,ar7));
  if (cVar11 == '\0') {
    fVar9 = 650.0;
    fVar6 = (*(float *)(fr0_ - 0x38));
  }
  else {
    fVar6 = 650.0;
    fVar9 = 1.9765e-40;
  }
  if (cVar10 != '\0' || fVar6 <= fVar9) {
    puVar3 = (undefined4 *)(unsigned)(ar4 + 0x226f8);
    (vsp = ((unsigned long)(fr0_ - 100)), FUN_8c0e4198(ar4,puVar3,iVar4,ar7));
  }
  (vsp = ((unsigned long)(fr0_ - 100)), FUN_8c0d9720(ar4 + 0x22704,puVar3,iVar4,ar7));
  (vsp = ((unsigned long)(fr0_ - 100)), FUN_8c0d1168(ar4 + 0x13b8c,puVar3,iVar4,ar7));
  for (iVar5 = 0; iVar5 < 8; iVar5 = iVar5 + 1) {
    iVar1 = (vsp = ((unsigned long)(fr0_ - 100)), FUN_8c0f6ab0(ar4 + iVar5 * 0x68 + 0xc0c,puVar3,iVar4,ar7));
    if (iVar1 == 1) {
      iVar4 = ar4 + 4;
      puVar3 = (undefined4 *)(unsigned)(ar4 + 0xc);
      (vsp = ((unsigned long)(fr0_ - 100)), FUN_8c0f7118(ar4 + iVar5 * 0x68 + 0xc0c,puVar3,iVar4,ar7));
    }
  }
  (vsp = ((unsigned long)(fr0_ - 100)), FUN_8c0da754(ar4,puVar3,iVar4,ar7));
  (vsp = ((unsigned long)(fr0_ - 100)), Vec3_dtor(&(*(undefined4 *)(fr0_ - 0x30)),0xffffffff,iVar4,ar7));
  uVar2 = (vsp = ((unsigned long)(fr0_ - 100)), free_if_nonnull_wrap_0deb30(&(*(undefined4 *)(fr0_ - 0x20)),0xffffffff,iVar4,ar7));
  return uVar2;
}

__asm__(".globl _FUN_8c0df250\n.set _FUN_8c0df250, _FUN_8c0df250_def\n");
//@unit 8c0df668
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
undefined4 FUN_8c0df668_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0df668";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 48; for (int i_ = 0; i_ < 48; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int ar5_00;
  int iVar4;
  int iVar5;
  undefined4 in_fr1 = 0;
  undefined8 uVar6;
  undefined4 uVar7;
  char cVar8;
  
  cVar8 = '\0';
  (vsp = ((unsigned long)(fr0_ - 48)), FUN_8c0d99b8(&(*(undefined4 *)(fr0_ - 0x1c)),ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 48)), Vec3_ctor_zero(&(*(undefined4 *)(fr0_ - 0x2c)),ar5,ar6,ar7));
  if (cVar8 == '\0') {
    (*(undefined4 *)(fr0_ - 0x2c)) = *(undefined4 *)(unsigned)(ar4 + 0x22d4c);
    (*(undefined4 *)(fr0_ - 0x28)) = *(undefined4 *)(unsigned)(ar4 + 0x22d50);
    (*(undefined4 *)(fr0_ - 0x24)) = *(undefined4 *)(unsigned)(ar4 + 0x22d54);
    uVar6 = CONCAT44((*(undefined4 *)(fr0_ - 0x24)),in_fr1);
  }
  else {
    (*(undefined4 *)(fr0_ - 0x2c)) = (undefined4)*(undefined8 *)(unsigned)(ar4 + 0x22d4c);
    (*(undefined4 *)(fr0_ - 0x28)) = (undefined4)*(undefined8 *)(unsigned)(ar4 + 0x22d50);
    uVar6 = *(undefined8 *)(unsigned)(ar4 + 0x22d54);
    (*(undefined4 *)(fr0_ - 0x24)) = (undefined4)uVar6;
    (*(undefined4 *)(fr0_ - 0x20)) = (undefined4)((ulonglong)uVar6 >> 0x20);
  }
  uVar2 = (undefined4)uVar6;
  iVar4 = ar4;
  (vsp = ((unsigned long)(fr0_ - 48)), FUN_8c0dbdf4(ar4,ar5,ar6,ar7));
  if (*(int *)(unsigned)(ar4 + 0x1024) != 0) {
    (vsp = ((unsigned long)(fr0_ - 48)), FUN_8c0d2028(iVar4,ar5,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 48)), FUN_8c016340(ar4 + 0x1028,ar5,ar6,ar7));
  }
  iVar4 = ar4 + 0x7c;
  (vsp = ((unsigned long)(fr0_ - 48)), FUN_8c0e3ebc(ar4,ar4 + 0x78,iVar4,ar7));
  if (cVar8 == '\0') {
    (*(undefined4 *)(fr0_ - 0x1c)) = *(undefined4 *)(unsigned)(ar4 + 0x78);
    (*(undefined4 *)(fr0_ - 0x18)) = *(undefined4 *)(unsigned)(ar4 + 0x7c);
    uVar7 = 0x42c80000;
  }
  else {
    (*(undefined4 *)(fr0_ - 0x1c)) = (undefined4)*(undefined8 *)(unsigned)(ar4 + 0x78);
    (*(undefined4 *)(fr0_ - 0x18)) = (undefined4)*(undefined8 *)(unsigned)(ar4 + 0x7c);
    uVar2 = 0x42c80000;
    uVar7 = 0xa68;
  }
  (*(undefined4 *)(fr0_ - 0x14)) = 0x42c80000;
  (*(int *)(fr0_ - 0x10)) = ar4 + 0xa68;
  puVar3 = &(*(undefined4 *)(fr0_ - 0x1c));
  (vsp = ((unsigned long)(fr0_ - 48)), FUN_8c0d400c(ar4 + 0x10ac,puVar3,iVar4,ar7));
  (vsp = ((unsigned long)(fr0_ - 48)), FUN_8c0e3f24(ar4,puVar3,iVar4,ar7));
  puVar3 = &(*(undefined4 *)(fr0_ - 0x1c));
  (vsp = ((unsigned long)(fr0_ - 48)), FUN_8c0d4900(ar4 + 0x10ac,puVar3,iVar4,ar7));
  if (cVar8 == '\0') {
    (*(undefined4 *)(unsigned)(unsigned)0x8c438250) = CONCAT44((*(undefined4 *)(unsigned)(unsigned)0x8c438254),uVar7);
  }
  else {
    (*(undefined4 *)(unsigned)(unsigned)0x8c438250) = CONCAT44(uVar7,uVar2);
    (*(undefined4 *)(fr0_ - 0x2c)) = uVar7;
  }
  (vsp = ((unsigned long)(fr0_ - 48)), FUN_8c0e15fc(ar4,puVar3,iVar4,ar7));
  (vsp = ((unsigned long)(fr0_ - 48)), FUN_8c01538c(ar4 + 0x22d40,puVar3,iVar4,ar7));
  (vsp = ((unsigned long)(fr0_ - 48)), FUN_8c0d7410(ar4 + 0x22d48,puVar3,iVar4,ar7));
  (vsp = ((unsigned long)(fr0_ - 48)), FUN_8c0d7410(ar4 + 0x22eb4,puVar3,iVar4,ar7));
  (vsp = ((unsigned long)(fr0_ - 48)), FUN_8c0d7410(ar4 + 0x23020,puVar3,iVar4,ar7));
  (vsp = ((unsigned long)(fr0_ - 48)), FUN_8c0d1168(ar4 + 0x13b8c,puVar3,iVar4,ar7));
  (vsp = ((unsigned long)(fr0_ - 48)), FUN_8c0d05d0(ar4 + 0x13b24,puVar3,iVar4,ar7));
  ar5_00 = ar4 + 0x226f8;
  (vsp = ((unsigned long)(fr0_ - 48)), FUN_8c0e4198(ar4,ar5_00,iVar4,ar7));
  (vsp = ((unsigned long)(fr0_ - 48)), FUN_8c0d9720(ar4 + 0x22704,ar5_00,iVar4,ar7));
  for (iVar5 = 0; iVar5 < 8; iVar5 = iVar5 + 1) {
    iVar1 = (vsp = ((unsigned long)(fr0_ - 48)), FUN_8c0f6ab0(ar4 + iVar5 * 0x68 + 0xc0c,ar5_00,iVar4,ar7));
    if (iVar1 == 1) {
      iVar4 = ar4 + 4;
      ar5_00 = ar4 + 0xc;
      (vsp = ((unsigned long)(fr0_ - 48)), FUN_8c0f7118(ar4 + iVar5 * 0x68 + 0xc0c,ar5_00,iVar4,ar7));
    }
  }
  (vsp = ((unsigned long)(fr0_ - 48)), FUN_8c0da754(ar4,ar5_00,iVar4,ar7));
  (vsp = ((unsigned long)(fr0_ - 48)), Vec3_dtor(&(*(undefined4 *)(fr0_ - 0x2c)),0xffffffff,iVar4,ar7));
  uVar2 = (vsp = ((unsigned long)(fr0_ - 48)), free_if_nonnull_wrap_0deb30(&(*(undefined4 *)(fr0_ - 0x1c)),0xffffffff,iVar4,ar7));
  return uVar2;
}

__asm__(".globl _FUN_8c0df668\n.set _FUN_8c0df668, _FUN_8c0df668_def\n");
//@unit 8c0df8d0
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
undefined4 FUN_8c0df8d0_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0df8d0";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  undefined4 in_PR = 0;
  
  if (*(int *)(unsigned)(ar4 + 0x9d4) == 0) {
    uVar1 = 0;
  }
  else {
    if ((*(int *)(unsigned)(ar4 + 0x22810) == 0) && (*(int *)(unsigned)(ar4 + 0x22814) == 0)) {
      uVar1 = 1;
      ({ unsigned long ri0_ = (unsigned long)(in_PR); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); FUN_8c22195c(1,ar5,ar6,ar7); });
      (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c219070(uVar1,ar5,ar6,ar7));
      (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0f4b44(*(undefined4 *)(unsigned)(ar4 + 0x9d4),ar5,ar6,ar7));
      (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0x9d4) + 8) + 0x34))))(*(int *)(unsigned)(ar4 + 0x9d4),ar5,ar6,ar7));
      uVar1 = 1;
      ({ unsigned long ri0_ = (unsigned long)(in_PR); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); FUN_8c22195c(1,ar5,ar6,ar7); });
      (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c219070(uVar1,ar5,ar6,ar7));
    }
    else {
      (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0da88c(ar4,ar5,ar6,ar7));
    }
    uVar1 = 1;
  }
  return uVar1;
}

__asm__(".globl _FUN_8c0df8d0\n.set _FUN_8c0df8d0, _FUN_8c0df8d0_def\n");
//@unit 8c0df998
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
undefined4 FUN_8c0df998_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0df998";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), get_field_300_0bf154(ar4 + 0xa4,ar5,ar6,ar7));
  if (iVar1 != 0x19) {
    ar5 = (vsp = ((unsigned long)(fr0_ - 0)), s_CEnv_AddItem_0da93a(ar4,ar5,ar6,ar7));
  }
  return ar5;
}

__asm__(".globl _FUN_8c0df998\n.set _FUN_8c0df998, _FUN_8c0df998_def\n");
//@unit 8c0df9ec
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
undefined4 FUN_8c0df9ec_def(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0df9ec";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 44; for (int i_ = 0; i_ < 44; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = ar5;
  (vsp = ((unsigned long)(fr0_ - 44)), Vec3_ctor_zero(((undefined1 *)(fr0_ - 0x18)),ar5,ar6,ar7));
  ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x28))); *(unsigned *)((((unsigned long)(fr0_ - 44)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 44)) - 8); FUN_8c02f670(ar5,uVar1,ar6,ar7); });
  (vsp = ((unsigned long)(fr0_ - 44)), Vec3_assign(((undefined1 *)(fr0_ - 0x18)),((undefined1 *)(fr0_ - 0x28)),ar6,ar7));
  uVar1 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 44)), Vec3_dtor(((undefined1 *)(fr0_ - 0x28)),0xffffffff,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 44)), FUN_8c036988(ar5,uVar1,ar6,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 44)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*ar4 + 0x4c))))(ar4,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 44)), Vec3_dtor(((undefined1 *)(fr0_ - 0x18)),0xffffffff,ar6,ar7));
  return uVar1;
}

__asm__(".globl _FUN_8c0df9ec\n.set _FUN_8c0df9ec, _FUN_8c0df9ec_def\n");
//@unit 8c0dfa84
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
undefined4 FUN_8c0dfa84_def(int ar4,undefined4 *ar5,undefined1 *ar6,undefined1 *ar7)

{
  ring[rp++ & 255] = "FUN_8c0dfa84";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 180; for (int i_ = 0; i_ < 180; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  undefined4 *ar5_00;
  int iVar2;
  int iVar3;
  float fVar5;
  double dVar4;
  double in_dr14 = 0;
  bool bVar6;
  char cVar7;
  char cVar8;
  
  cVar8 = '\0';
  cVar7 = '\0';
  ar5_00 = ar5;
  (vsp = ((unsigned long)(fr0_ - 180)), FUN_8c0191e4(((undefined1 *)(fr0_ - 0xa0)),ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 180)), Vec3_ctor_zero(((undefined1 *)(fr0_ - 0xb0)),ar5_00,ar6,ar7));
  if (cVar8 == '\0') {
    in_dr14 = CONCAT44D((int)((ulonglong)in_dr14 >> 0x20),0x7f7fffff);
  }
  iVar3 = 0;
  iVar2 = 0;
  if (*(int *)(unsigned)(ar4 + 0x9d8) == 0) {
    iVar2 = (vsp = ((unsigned long)(fr0_ - 180)), FUN_8c0dac50(ar4,ar5,ar6,ar7));
  }
  if (iVar2 == 0) {
    if (cVar8 == '\0') {
      dVar4 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c1264b8),*ar5);
    }
    else {
      dVar4 = CONCAT44D((*(undefined1 *)(unsigned)0x8c1264bc),(*(undefined4 *)(unsigned)(unsigned)0x8c1264b8));
    }
    if (SUB84(dVar4,0) == F32HI(dVar4)) {
      *(undefined4 *)(unsigned)(ar4 + 0x9d8) = 0;
    }
    else {
      for (iVar2 = 0; iVar2 < 3; iVar2 = iVar2 + 1) {
        ar7 = ((undefined1 *)(fr0_ - 0xac));
        ar6 = ((undefined1 *)(fr0_ - 0xb0));
        (vsp = ((unsigned long)(fr0_ - 180)), FUN_8c019508(((undefined1 *)(fr0_ - 0xa0)),ar4 + iVar2 * 0x16c + 0x22d4c,ar6,ar7));
        uVar1 = SUB84(in_dr14,0);
        (vsp = ((unsigned long)(fr0_ - 180)), FUN_8c022fc0(((undefined1 *)(fr0_ - 0xb0)),ar5,ar6,ar7));
        fVar5 = F32HI(dVar4);
        in_dr14 = dVar4;
        if (cVar8 == '\0') {
          in_dr14 = CONCAT44D(fVar5,uVar1);
        }
        if (cVar7 == '\0') {
          bVar6 = fVar5 < SUB84(in_dr14,0);
        }
        else {
          bVar6 = dVar4 < in_dr14;
        }
        if (bVar6) {
          if (cVar8 == '\0') {
            uVar1 = (undefined4)((ulonglong)in_dr14 >> 0x20);
            in_dr14 = CONCAT44D(uVar1,uVar1);
          }
          iVar3 = ar4 + iVar2 * 0x16c + 0x22d48;
        }
      }
      if (cVar8 == '\0') {
        dVar4 = CONCAT44D(0x428c0000,SUB84(dVar4,0));
      }
      else {
        dVar4 = 5.33949302018055e-311;
      }
      if (cVar7 == '\0') {
        bVar6 = SUB84(in_dr14,0) < F32HI(dVar4);
      }
      else {
        bVar6 = in_dr14 < dVar4;
      }
      if (bVar6) {
        *(int *)(unsigned)(ar4 + 0x9d8) = iVar3;
      }
      else {
        *(undefined4 *)(unsigned)(ar4 + 0x9d8) = 0;
      }
    }
  }
  uVar1 = *(undefined4 *)(unsigned)(ar4 + 0x9d4);
  (vsp = ((unsigned long)(fr0_ - 180)), Vec3_dtor(((undefined1 *)(fr0_ - 0xb0)),0xffffffff,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 180)), free_if_nonnull_wrap_019270(((undefined1 *)(fr0_ - 0xa0)),0xffffffff,ar6,ar7));
  return uVar1;
}

__asm__(".globl _FUN_8c0dfa84\n.set _FUN_8c0dfa84, _FUN_8c0dfa84_def\n");
//@unit 8c0dfbdc
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
undefined4 FUN_8c0dfbdc_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0dfbdc";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 ar4_00;
  undefined4 ar5_00;
  int a4;
  uint extraout_fr1 = 0;
  uint extraout_fr1_00 = 0;
  uint uVar2;
  char cVar3;
  
  cVar3 = '\0';
  ar5_00 = ar5;
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), get_field_38_0db5a0(ar4 + 0x768,ar5,ar6,ar7));
  if (iVar1 != 0) {
    iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0db580(ar4 + 0x768,ar5_00,ar6,ar7));
    a4 = *(int *)(unsigned)(iVar1 + 8);
    iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(a4 + 8) + 0xcc))))(a4,ar5_00,ar6,ar7));
    if ((iVar1 == 1) &&
       (iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(a4 + 8) + 0xd0))))(a4,ar5_00,ar6,ar7)), iVar1 == 1)) {
      ar4_00 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(a4 + 8) + 0x178))))(a4,ar5_00,ar6,ar7));
      ar6 = (vsp = ((unsigned long)(fr0_ - 0)), get_field_4_0253e4(ar4_00,ar5_00,ar6,ar7));
      (vsp = ((unsigned long)(fr0_ - 0)), s_GRAPHICS_SQUIDLINE_0ae646(0x8c3eb334,12000,ar6,ar7));
    }
  }
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0db8d4(ar4,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0e96b8(ar4 + 0xf4c,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0d6920(ar4 + 0xa68,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(ar4 + 0x9e8) + 0x10))))((int *)(unsigned)(ar4 + 0x9e8),ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0d0720(ar4 + 0x13b24,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0d0a84(ar4 + 0x13b70,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0d1548(ar4 + 0x13b8c,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0d98f8(ar4 + 0x22704,ar5,ar6,ar7));
  uVar2 = extraout_fr1;
  for (iVar1 = 0; iVar1 < 3; iVar1 = iVar1 + 1) {
    (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0d7314(ar4 + iVar1 * 0x16c + 0x22d48,ar5,ar6,ar7));
    uVar2 = extraout_fr1_00;
  }
  *(undefined4 *)(unsigned)(ar4 + 0x22810) = 1;
  *(undefined4 *)(unsigned)(ar4 + 0x22814) = 1;
  if (cVar3 == '\0') {
    *(undefined4 *)(unsigned)(ar4 + 0x2324c) = 0;
  }
  else {
    *(ulonglong *)(unsigned)(ar4 + 0x2324c) = (ulonglong)uVar2;
  }
  *(undefined4 *)(unsigned)(ar4 + 0x23250) = 0;
  *(undefined4 *)(unsigned)(ar4 + 0x23254) = 0;
  return 1;
}

__asm__(".globl _FUN_8c0dfbdc\n.set _FUN_8c0dfbdc, _FUN_8c0dfbdc_def\n");
//@unit 8c0dfdc4
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
undefined4 noop_0dfdc4_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "noop_0dfdc4";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 in_r0 = (undefined4)(unsigned long)vin0;
  
  return in_r0 = 0;
}

__asm__(".globl _noop_0dfdc4\n.set _noop_0dfdc4, _noop_0dfdc4_def\n");
//@unit 8c0dfdc8
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
undefined4 noop_0dfdc8_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "noop_0dfdc8";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 in_r0 = (undefined4)(unsigned long)vin0;
  
  return in_r0 = 0;
}

__asm__(".globl _noop_0dfdc8\n.set _noop_0dfdc8, _noop_0dfdc8_def\n");
//@unit 8c0dfdcc
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
undefined4 FUN_8c0dfdcc_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0dfdcc";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 in_PR = 0;
  
  ({ unsigned long ri0_ = (unsigned long)(in_PR); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); FUN_8c0d0a3c(ar4 + 0x13b70,1,ar6,ar7); });
  *(undefined4 *)(unsigned)(ar4 + 0x10dc) = 1;
  return 0x10dc;
}

__asm__(".globl _FUN_8c0dfdcc\n.set _FUN_8c0dfdcc, _FUN_8c0dfdcc_def\n");
//@unit 8c0dfdfc
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
undefined4 FUN_8c0dfdfc_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0dfdfc";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 in_PR = 0;
  
  ({ unsigned long ri0_ = (unsigned long)(in_PR); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); FUN_8c0d0a3c(ar4 + 0x13b70,0,ar6,ar7); });
  *(undefined4 *)(unsigned)(ar4 + 0x10dc) = 0;
  return 0x10dc;
}

__asm__(".globl _FUN_8c0dfdfc\n.set _FUN_8c0dfdfc, _FUN_8c0dfdfc_def\n");
//@unit 8c0dfe2c
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
undefined4 FUN_8c0dfe2c_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0dfe2c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 uVar2;
  undefined4 ar5_00;
  
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0daf3c(ar4,ar5,ar6,ar7));
  ar5_00 = ar5;
  (vsp = ((unsigned long)(fr0_ - 0)), pure_virtual_stub(ar4,ar5,ar6,ar7));
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0dfef4(ar5,ar5_00,ar6,ar7));
  if (iVar1 == 1) {
    uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), get_field_cc_0dfee8(ar5,ar5_00,ar6,ar7));
    uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c01f528(uVar2,ar5_00,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c01da60(uVar2,ar5_00,ar6,ar7));
  }
  (vsp = ((unsigned long)(fr0_ - 0)), pure_virtual_stub(ar4,ar5,ar6,ar7));
  return 1;
}

__asm__(".globl _FUN_8c0dfe2c\n.set _FUN_8c0dfe2c, _FUN_8c0dfe2c_def\n");
//@unit 8c0dfee8
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
undefined4 get_field_cc_0dfee8_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "get_field_cc_0dfee8";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return *(undefined4 *)(unsigned)(0xcc + ar4);
}

__asm__(".globl _get_field_cc_0dfee8\n.set _get_field_cc_0dfee8, _get_field_cc_0dfee8_def\n");
//@unit 8c0dfef4
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
undefined4 FUN_8c0dfef4_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0dfef4";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c01ee10(*(undefined4 *)(unsigned)(0xcc + ar4),ar5,ar6,ar7));
  return uVar1;
}

__asm__(".globl _FUN_8c0dfef4\n.set _FUN_8c0dfef4, _FUN_8c0dfef4_def\n");
//@unit 8c0dff1c
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
undefined4 FUN_8c0dff1c_def(int *ar4,uint ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0dff1c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  uint uVar2;
  
  uVar2 = ar5;
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0daf80(ar4,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0d063c((int)ar4 + 0x13b24,uVar2,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0d98e4((int)ar4 + 0x22704,uVar2,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0d6954((int)ar4 + 0xa68,uVar2,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0dbdf4(ar4,uVar2,ar6,ar7));
  *(undefined4 *)(unsigned)(0x1020 + (int)ar4) = 0;
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0e3f24(ar4,uVar2,ar6,ar7));
  uVar2 = ar5;
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0d4fa8((int)ar4 + 0x10ac,ar5,ar6,ar7));
  if ((ar5 & 0xff) < 2) {
    uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((0x1c0 + *ar4))))(ar4,uVar2,ar6,ar7));
  }
  else {
    uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*ar4 + 0x74))))(ar4,uVar2,ar6,ar7));
  }
  return uVar1;
}

__asm__(".globl _FUN_8c0dff1c\n.set _FUN_8c0dff1c, _FUN_8c0dff1c_def\n");
//@unit 8c0dffe8
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
undefined4 FUN_8c0dffe8_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0dffe8";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = ({ unsigned long ri0_ = (unsigned long)(ar4); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); noop_0d09f4(ar4 + 0x13b70,ar5,ar6,ar7); });
  return uVar1;
}

__asm__(".globl _FUN_8c0dffe8\n.set _FUN_8c0dffe8, _FUN_8c0dffe8_def\n");
