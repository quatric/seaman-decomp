#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c25699c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c25699c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  if (ar4 == 0) {
    ar4 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c0cc0);
  }
  *(undefined4 *)(unsigned)(ar4 + 0x40) = *(undefined4 *)(unsigned)(ar4 + 0x5c);
  *(undefined4 *)(unsigned)(ar4 + 0x44) = *(undefined4 *)(unsigned)(ar4 + 0x60);
  *(undefined4 *)(unsigned)(ar4 + 0x48) = *(undefined4 *)(unsigned)(ar4 + 100);
  *(undefined4 *)(unsigned)(ar4 + 0x4c) = *(undefined4 *)(unsigned)(ar4 + 0x68);
  *(undefined4 *)(unsigned)(ar4 + 0x50) = *(undefined4 *)(unsigned)(ar4 + 0x6c);
  *(undefined4 *)(unsigned)(ar4 + 0x54) = *(undefined4 *)(unsigned)(ar4 + 0x70);
  *(undefined4 *)(unsigned)(ar4 + 0x58) = *(undefined4 *)(unsigned)(ar4 + 0x74);
  return 0x58;
}

__asm__(".globl _FUN_8c25699c\n.set _FUN_8c25699c, _FUN_8c25699c_def\n");
