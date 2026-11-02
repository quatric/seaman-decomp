#include "../decls.h"
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
FUN_8c0b9afc_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0b9afc";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;
  undefined4 s0 = *(undefined4 *)(vsp + 0);
  undefined4 s4 = *(undefined4 *)(vsp + 4);

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  if (0x17 < (byte)s4) {
    return 8;
  }
                    
  switch((byte)s4) {
  case 0:
  case 1:
    return 6;
  default:
    return 7;
  case 5:
  case 6:
  case 7:
    return 0;
  case 8:
  case 9:
  case 10:
    return 1;
  case 0xb:
  case 0xc:
  case 0xd:
    return 2;
  case 0xe:
  case 0xf:
  case 0x10:
    return 3;
  case 0x11:
  case 0x12:
  case 0x13:
    return 4;
  case 0x14:
    return 5;
  }
}

__asm__(".globl _FUN_8c0b9afc\n.set _FUN_8c0b9afc, _FUN_8c0b9afc_def\n");
