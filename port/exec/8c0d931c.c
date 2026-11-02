#include "../decls.h"
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
