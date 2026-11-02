#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c022fc0_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c022fc0";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 44; for (int i_ = 0; i_ < 44; i_++) z_[i_] = 0; }
  undefined4 ar5_00;
  undefined8 in_dr0 = 0;
  undefined4 uVar1;
  char cVar2;
  
  uVar1 = (undefined4)((ulonglong)in_dr0 >> 0x20);
  cVar2 = '\0';
  ({ unsigned long t0_ = (unsigned long)(((undefined4 *)(fr0_ - 0x28))); *(unsigned *)((((unsigned long)(fr0_ - 44)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 44)) - 8); Vec3_sub(ar5,ar4,ar6,ar7); });
  (vsp = ((unsigned long)(fr0_ - 44)), Vec3_ctor_copy(((undefined1 *)(fr0_ - 0x18)),((undefined4 *)(fr0_ - 0x28)),ar6,ar7));
  ar5_00 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 44)), Vec3_dtor(((undefined4 *)(fr0_ - 0x28)),0xffffffff,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 44)), Vec3_length_sq(((undefined1 *)(fr0_ - 0x18)),ar5_00,ar6,ar7));
  if (cVar2 != '\0') {
    ((undefined4 *)(fr0_ - 0x28))[0] = uVar1;
  }
  (vsp = ((unsigned long)(fr0_ - 44)), Vec3_dtor(((undefined1 *)(fr0_ - 0x18)),0xffffffff,ar6,ar7));
  return 0xc;
}

__asm__(".globl _FUN_8c022fc0\n.set _FUN_8c022fc0, _FUN_8c022fc0_def\n");
