#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c237770_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c237770";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 *puVar1;
  uint uVar2;
  
  (*(undefined4 *)(unsigned)(unsigned)0x8c4c1260) = 0;
  (*(undefined4 *)(unsigned)(unsigned)0x8c4c11b0) = 0x3f800000;
  (*(undefined4 *)(unsigned)(unsigned)0x8c4c11b4) = 0x3f000000;
  (*(undefined4 *)(unsigned)(unsigned)0x8c4c11b8) = 0x3f000000;
  (*(undefined4 *)(unsigned)(unsigned)0x8c4c11bc) = 0x3f000000;
  (*(undefined4 *)(unsigned)(unsigned)0x8c4c11c0) = 0x3f800000;
  (*(undefined4 *)(unsigned)(unsigned)0x8c4c11c4) = 0x3f000000;
  (*(undefined4 *)(unsigned)(unsigned)0x8c4c11c8) = 0x3f000000;
  (*(undefined4 *)(unsigned)(unsigned)0x8c4c11cc) = 0x3f000000;
  (*(undefined4 *)(unsigned)(unsigned)0x8c4c11a0) = 0x3f800000;
  (*(undefined4 *)(unsigned)(unsigned)0x8c4c11a4) = 0;
  (*(undefined4 *)(unsigned)(unsigned)0x8c4c11a8) = 0;
  (*(undefined4 *)(unsigned)(unsigned)0x8c4c11ac) = 0;
  (*(undefined4 *)(unsigned)(unsigned)0x8c4c11d0) = 0x40c00000;
  uVar2 = 0;
  (*(undefined4 *)(unsigned)(unsigned)0x8c4c1300) = 0;
  do {
    puVar1 = (undefined4 *)(unsigned)(uVar2 + 0x8c4c1280);
    uVar2 = uVar2 + 4;
    *puVar1 = 0;
  } while (uVar2 < 0x80);
  return 0x80;
}

__asm__(".globl _FUN_8c237770\n.set _FUN_8c237770, _FUN_8c237770_def\n");
