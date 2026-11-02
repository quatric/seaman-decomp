#include "../decls.h"
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
