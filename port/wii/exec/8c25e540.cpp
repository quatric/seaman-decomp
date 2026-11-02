#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("FUN_8c25e540");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 532; for (int i_ = 0; i_ < 532; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  int ar5_00;
  undefined4 ar6_00;
  undefined4 a7;
  bool bVar2;
  
  ((le<int>* )(fr0_ - 0x118))[7] = 0x35f;
  ((le<int>* )(fr0_ - 0x118))[5] = 0x8d;
  ((le<int>* )(fr0_ - 0x118))[6] = 0x34b;
  uVar1 = 1;
  ((le<int>* )(fr0_ - 0x118))[0xb] = 0x3f;
  if ((((*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9bcc) & 1) == 1) || (((*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9bcc) & 0x2c) == 0)) {
    ((le<int>* )(fr0_ - 0x118))[10] = 0x138;
  }
  else {
    ((le<int>* )(fr0_ - 0x118))[10] = 0x270;
  }
  a7 = 0x42;
  ar6_00 = 0x16;
  if (((*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9bcc) & 0x42) == 0x42) {
    if ((((*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9bcc) & 1) == 1) || (((*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9bcc) & 0x2c) == 0)) {
      ((le<int>* )(fr0_ - 0x118))[8] = 0x16;
      ((le<int>* )(fr0_ - 0x118))[9] = 0x134;
    }
    else {
      ((le<int>* )(fr0_ - 0x118))[8] = 0x2c;
      ((le<int>* )(fr0_ - 0x118))[9] = 0x26c;
    }
    if (((*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9bcc) & 0x20) == 0) {
      (*(le<undefined4>* )(fr0_ - 0x90)) = 0x136;
    }
    else {
      (*(le<undefined4>* )(fr0_ - 0x90)) = 0x134;
    }
  }
  else {
    if ((((*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9bcc) & 1) == 1) || (((*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9bcc) & 0x2c) == 0)) {
      ((le<int>* )(fr0_ - 0x118))[8] = 0x16;
      ((le<int>* )(fr0_ - 0x118))[9] = 0x134;
    }
    else {
      ((le<int>* )(fr0_ - 0x118))[8] = 0x2c;
      ((le<int>* )(fr0_ - 0x118))[9] = 0x26c;
    }
    if (((*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9bcc) & 0x20) == 0) {
      (*(le<undefined4>* )(fr0_ - 0x90)) = 0x136;
    }
    else {
      (*(le<undefined4>* )(fr0_ - 0x90)) = 0x134;
    }
  }
  (*(le<undefined4>* )(fr0_ - 0x8c)) = 0x15;
  if ((((*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9bcc) & 1) == 1) || (((*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9bcc) & 0x2c) == 0)) {
    ((le<int>* )(fr0_ - 0x118))[0xc] = 3;
    (*(le<undefined4>* )(fr0_ - 0xe4)) = 799;
    (*(le<undefined4>* )(fr0_ - 0xe0)) = 0xf;
  }
  else {
    (*(le<undefined4>* )(fr0_ - 0xe4)) = 0x16a;
    (*(le<undefined4>* )(fr0_ - 0xe0)) = 0x1f;
    ((le<int>* )(fr0_ - 0x118))[0xc] = 5;
  }
  if ((((*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9bcc) & 1) == 1) || (((*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9bcc) & 0x2c) == 0)) {
    (*(le<undefined4>* )(fr0_ - 0xd4)) = 0;
  }
  else {
    (*(le<undefined4>* )(fr0_ - 0xd4)) = 1;
  }
  (*(le<undefined4>* )(fr0_ - 0xd0)) = 0;
  (*(le<undefined4>* )(fr0_ - 0xcc)) = 0;
  (*(le<undefined4>* )(fr0_ - 0xc8)) = 0;
  (*(le<undefined4>* )(fr0_ - 0xc4)) = 0;
  if ((((*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9bcc) & 1) == 1) || (((*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9bcc) & 0x2c) == 0)) {
    (*(le<undefined4>* )(fr0_ - 0xc0)) = 2;
  }
  else {
    (*(le<undefined4>* )(fr0_ - 0xc0)) = 0;
  }
  if ((*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9bac) == 6) {
    (*(le<undefined4>* )(fr0_ - 0x94)) = 0x16;
  }
  else {
    (*(le<undefined4>* )(fr0_ - 0x94)) = 0x3f;
  }
  bVar2 = ((*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9bcc) & 0x10) == 0;
  if (bVar2) {
    (*(le<uint>* )(fr0_ - 0x98)) = 1;
  }
  else {
    (*(le<uint>* )(fr0_ - 0x98)) = 0;
  }
  (*(le<uint>* )(fr0_ - 0x98)) = (uint)bVar2;
  (*(le<undefined4>* )(fr0_ - 0xdc)) = 0;
  (*(le<undefined4>* )(fr0_ - 0xd8)) = 1;
  (*(le<undefined4>* )(fr0_ - 0xbc)) = 1;
  (*(le<undefined4>* )(fr0_ - 0xb8)) = 0;
  (*(le<undefined4>* )(fr0_ - 0xb4)) = 0;
  (*(le<undefined4>* )(fr0_ - 0xb0)) = 0;
  (*(le<undefined4>* )(fr0_ - 0xac)) = 0;
  (*(le<undefined4>* )(fr0_ - 0xa8)) = 0;
  (*(le<undefined4>* )(fr0_ - 0x9c)) = 0;
  (*(le<undefined4>* )(fr0_ - 0xa4)) = 0;
  ar5_00 = 0xf0;
  (*(le<undefined4>* )(fr0_ - 0xa0)) = 0xf0;
  (*(le<undefined4>* )(fr0_ - 0xc)) = 0xae;
  if (((*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9bcc) & 0x42) == 0x42) {
    ((le<int>* )(fr0_ - 0x118))[0] = 0x2a;
    ((le<int>* )(fr0_ - 0x118))[1] = 0x26;
    ((le<int>* )(fr0_ - 0x118))[2] = 0x22;
    ((le<int>* )(fr0_ - 0x118))[3] = 0x1e;
    ((le<int>* )(fr0_ - 0x118))[4] = 0x1a;
    (*(le<int>* )(fr0_ - 0x10)) = ((le<int>* )(fr0_ - 0x118))[(*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9bdc)];
    ar5_00 = (*(le<int>* )(fr0_ - 0x10));
    if ((((*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9bcc) & 1) != 1) && (((*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9bcc) & 0x2c) != 0)) {
      ar5_00 = (*(le<int>* )(fr0_ - 0x10)) + -1;
    }
    (*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9ecc) =
         (int)(*(le<int>* )(unsigned)(((undefined1 *)(unsigned)0x8c4aa084) + (*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9bdc) * 4) +
              (uint)(*(le<int>* )(unsigned)(((undefined1 *)(unsigned)0x8c4aa084) + (*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9bdc) * 4) < 0)) >> 1;
    (*(le<int>* )(fr0_ - 0x14)) = ar5_00;
  }
  else {
    ar6_00 = 0x2e;
    if ((((*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9bcc) & 1) == 1) || (((*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9bcc) & 0x2c) == 0)) {
      (*(le<int>* )(fr0_ - 0x14)) = 0x2e;
    }
    else {
      (*(le<int>* )(fr0_ - 0x14)) = 0x2d;
    }
    (*(le<int>* )(fr0_ - 0x10)) = 0x2e;
    (*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9ecc) = 0xf0;
  }
  (*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9ec4) = (((le<int>* )(fr0_ - 0x118))[8] >> 1) + (*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9ecc);
  (*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9ec8) = ((le<int>* )(fr0_ - 0x118))[8];
  ({ unsigned long ri0_ = (unsigned long)((*(le<undefined4>* )(fr0_ - 0x214))); unsigned long ri1_ = (unsigned long)((*(le<undefined4>* )(fr0_ - 0x210))); vin0 = (unsigned)ri0_; vin1 = (unsigned)ri1_; vsp = ((unsigned long)(fr0_ - 532)); FUN_8c010838(1,ar5_00,ar6_00,0x42); });
  uVar1 = (vsp = ((unsigned long)(fr0_ - 532)), FUN_8c25e260(uVar1,ar5_00,ar6_00,a7));
  return uVar1;
}

__asm__(".globl FUN_8c25e540\n.set FUN_8c25e540, FUN_8c25e540_def\n");

}
