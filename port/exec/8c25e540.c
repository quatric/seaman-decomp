#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c25e540_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c25e540";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 532; for (int i_ = 0; i_ < 532; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  int ar5_00;
  undefined4 ar6_00;
  undefined4 a7;
  bool bVar2;
  
  ((int *)(fr0_ - 0x118))[7] = 0x35f;
  ((int *)(fr0_ - 0x118))[5] = 0x8d;
  ((int *)(fr0_ - 0x118))[6] = 0x34b;
  uVar1 = 1;
  ((int *)(fr0_ - 0x118))[0xb] = 0x3f;
  if ((((*(undefined4 *)(unsigned)(unsigned)0x8c4a9bcc) & 1) == 1) || (((*(undefined4 *)(unsigned)(unsigned)0x8c4a9bcc) & 0x2c) == 0)) {
    ((int *)(fr0_ - 0x118))[10] = 0x138;
  }
  else {
    ((int *)(fr0_ - 0x118))[10] = 0x270;
  }
  a7 = 0x42;
  ar6_00 = 0x16;
  if (((*(undefined4 *)(unsigned)(unsigned)0x8c4a9bcc) & 0x42) == 0x42) {
    if ((((*(undefined4 *)(unsigned)(unsigned)0x8c4a9bcc) & 1) == 1) || (((*(undefined4 *)(unsigned)(unsigned)0x8c4a9bcc) & 0x2c) == 0)) {
      ((int *)(fr0_ - 0x118))[8] = 0x16;
      ((int *)(fr0_ - 0x118))[9] = 0x134;
    }
    else {
      ((int *)(fr0_ - 0x118))[8] = 0x2c;
      ((int *)(fr0_ - 0x118))[9] = 0x26c;
    }
    if (((*(undefined4 *)(unsigned)(unsigned)0x8c4a9bcc) & 0x20) == 0) {
      (*(undefined4 *)(fr0_ - 0x90)) = 0x136;
    }
    else {
      (*(undefined4 *)(fr0_ - 0x90)) = 0x134;
    }
  }
  else {
    if ((((*(undefined4 *)(unsigned)(unsigned)0x8c4a9bcc) & 1) == 1) || (((*(undefined4 *)(unsigned)(unsigned)0x8c4a9bcc) & 0x2c) == 0)) {
      ((int *)(fr0_ - 0x118))[8] = 0x16;
      ((int *)(fr0_ - 0x118))[9] = 0x134;
    }
    else {
      ((int *)(fr0_ - 0x118))[8] = 0x2c;
      ((int *)(fr0_ - 0x118))[9] = 0x26c;
    }
    if (((*(undefined4 *)(unsigned)(unsigned)0x8c4a9bcc) & 0x20) == 0) {
      (*(undefined4 *)(fr0_ - 0x90)) = 0x136;
    }
    else {
      (*(undefined4 *)(fr0_ - 0x90)) = 0x134;
    }
  }
  (*(undefined4 *)(fr0_ - 0x8c)) = 0x15;
  if ((((*(undefined4 *)(unsigned)(unsigned)0x8c4a9bcc) & 1) == 1) || (((*(undefined4 *)(unsigned)(unsigned)0x8c4a9bcc) & 0x2c) == 0)) {
    ((int *)(fr0_ - 0x118))[0xc] = 3;
    (*(undefined4 *)(fr0_ - 0xe4)) = 799;
    (*(undefined4 *)(fr0_ - 0xe0)) = 0xf;
  }
  else {
    (*(undefined4 *)(fr0_ - 0xe4)) = 0x16a;
    (*(undefined4 *)(fr0_ - 0xe0)) = 0x1f;
    ((int *)(fr0_ - 0x118))[0xc] = 5;
  }
  if ((((*(undefined4 *)(unsigned)(unsigned)0x8c4a9bcc) & 1) == 1) || (((*(undefined4 *)(unsigned)(unsigned)0x8c4a9bcc) & 0x2c) == 0)) {
    (*(undefined4 *)(fr0_ - 0xd4)) = 0;
  }
  else {
    (*(undefined4 *)(fr0_ - 0xd4)) = 1;
  }
  (*(undefined4 *)(fr0_ - 0xd0)) = 0;
  (*(undefined4 *)(fr0_ - 0xcc)) = 0;
  (*(undefined4 *)(fr0_ - 0xc8)) = 0;
  (*(undefined4 *)(fr0_ - 0xc4)) = 0;
  if ((((*(undefined4 *)(unsigned)(unsigned)0x8c4a9bcc) & 1) == 1) || (((*(undefined4 *)(unsigned)(unsigned)0x8c4a9bcc) & 0x2c) == 0)) {
    (*(undefined4 *)(fr0_ - 0xc0)) = 2;
  }
  else {
    (*(undefined4 *)(fr0_ - 0xc0)) = 0;
  }
  if ((*(undefined4 *)(unsigned)(unsigned)0x8c4a9bac) == 6) {
    (*(undefined4 *)(fr0_ - 0x94)) = 0x16;
  }
  else {
    (*(undefined4 *)(fr0_ - 0x94)) = 0x3f;
  }
  bVar2 = ((*(undefined4 *)(unsigned)(unsigned)0x8c4a9bcc) & 0x10) == 0;
  if (bVar2) {
    (*(uint *)(fr0_ - 0x98)) = 1;
  }
  else {
    (*(uint *)(fr0_ - 0x98)) = 0;
  }
  (*(uint *)(fr0_ - 0x98)) = (uint)bVar2;
  (*(undefined4 *)(fr0_ - 0xdc)) = 0;
  (*(undefined4 *)(fr0_ - 0xd8)) = 1;
  (*(undefined4 *)(fr0_ - 0xbc)) = 1;
  (*(undefined4 *)(fr0_ - 0xb8)) = 0;
  (*(undefined4 *)(fr0_ - 0xb4)) = 0;
  (*(undefined4 *)(fr0_ - 0xb0)) = 0;
  (*(undefined4 *)(fr0_ - 0xac)) = 0;
  (*(undefined4 *)(fr0_ - 0xa8)) = 0;
  (*(undefined4 *)(fr0_ - 0x9c)) = 0;
  (*(undefined4 *)(fr0_ - 0xa4)) = 0;
  ar5_00 = 0xf0;
  (*(undefined4 *)(fr0_ - 0xa0)) = 0xf0;
  (*(undefined4 *)(fr0_ - 0xc)) = 0xae;
  if (((*(undefined4 *)(unsigned)(unsigned)0x8c4a9bcc) & 0x42) == 0x42) {
    ((int *)(fr0_ - 0x118))[0] = 0x2a;
    ((int *)(fr0_ - 0x118))[1] = 0x26;
    ((int *)(fr0_ - 0x118))[2] = 0x22;
    ((int *)(fr0_ - 0x118))[3] = 0x1e;
    ((int *)(fr0_ - 0x118))[4] = 0x1a;
    (*(int *)(fr0_ - 0x10)) = ((int *)(fr0_ - 0x118))[(*(undefined4 *)(unsigned)(unsigned)0x8c4a9bdc)];
    ar5_00 = (*(int *)(fr0_ - 0x10));
    if ((((*(undefined4 *)(unsigned)(unsigned)0x8c4a9bcc) & 1) != 1) && (((*(undefined4 *)(unsigned)(unsigned)0x8c4a9bcc) & 0x2c) != 0)) {
      ar5_00 = (*(int *)(fr0_ - 0x10)) + -1;
    }
    (*(undefined4 *)(unsigned)(unsigned)0x8c4a9ecc) =
         (int)(*(int *)(unsigned)(((undefined1 *)(unsigned)0x8c4aa084) + (*(undefined4 *)(unsigned)(unsigned)0x8c4a9bdc) * 4) +
              (uint)(*(int *)(unsigned)(((undefined1 *)(unsigned)0x8c4aa084) + (*(undefined4 *)(unsigned)(unsigned)0x8c4a9bdc) * 4) < 0)) >> 1;
    (*(int *)(fr0_ - 0x14)) = ar5_00;
  }
  else {
    ar6_00 = 0x2e;
    if ((((*(undefined4 *)(unsigned)(unsigned)0x8c4a9bcc) & 1) == 1) || (((*(undefined4 *)(unsigned)(unsigned)0x8c4a9bcc) & 0x2c) == 0)) {
      (*(int *)(fr0_ - 0x14)) = 0x2e;
    }
    else {
      (*(int *)(fr0_ - 0x14)) = 0x2d;
    }
    (*(int *)(fr0_ - 0x10)) = 0x2e;
    (*(undefined4 *)(unsigned)(unsigned)0x8c4a9ecc) = 0xf0;
  }
  (*(undefined4 *)(unsigned)(unsigned)0x8c4a9ec4) = (((int *)(fr0_ - 0x118))[8] >> 1) + (*(undefined4 *)(unsigned)(unsigned)0x8c4a9ecc);
  (*(undefined4 *)(unsigned)(unsigned)0x8c4a9ec8) = ((int *)(fr0_ - 0x118))[8];
  ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x214))); unsigned long ri1_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x210))); vin0 = (unsigned)ri0_; vin1 = (unsigned)ri1_; vsp = ((unsigned long)(fr0_ - 532)); FUN_8c010838(1,ar5_00,ar6_00,0x42); });
  uVar1 = (vsp = ((unsigned long)(fr0_ - 532)), FUN_8c25e260(uVar1,ar5_00,ar6_00,a7));
  return uVar1;
}

__asm__(".globl _FUN_8c25e540\n.set _FUN_8c25e540, _FUN_8c25e540_def\n");
