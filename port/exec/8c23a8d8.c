#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int FUN_8c23a8d8_def(uint ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c23a8d8";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int in_r0 = (int)(unsigned long)vin0;
  
  if (ar4 < 0x11) {
    in_r0 = (int)(short)(&(*(undefined1 *)(unsigned)0x8c23a8e8))[ar4];
    switch((uint)ar4) {
    case 0:
      return in_r0;
    case 1:
      return in_r0;
    case 2:
      return in_r0;
    case 3:
      return in_r0;
    case 4:
      return in_r0;
    case 5:
      return in_r0;
    case 6:
      return in_r0;
    case 7:
      return in_r0;
    case 8:
      return in_r0;
    case 9:
      return in_r0;
    case 10:
      return in_r0;
    case 0xb:
      return in_r0;
    case 0xc:
      return in_r0;
    case 0xd:
      return in_r0;
    case 0xe:
      return in_r0;
    case 0xf:
      return in_r0;
    }
  }
  return in_r0 = 0;
}

__asm__(".globl _FUN_8c23a8d8\n.set _FUN_8c23a8d8, _FUN_8c23a8d8_def\n");
