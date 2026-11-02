#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 * FUN_8c01ca24_def(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c01ca24";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 4; for (int i_ = 0; i_ < 4; i_++) z_[i_] = 0; }
  int iVar1;
  
  for (iVar1 = 0; iVar1 < 0x10; iVar1 = iVar1 + 1) {
    *(undefined4 *)(unsigned)((int)ar4 + 0x5634 + iVar1 * 0x50) = 1;
  }
  *(undefined4 *)(unsigned)(0x5630 + (int)ar4) = 0xffffffff;
  *ar4 = 0xffffffff;
  ar4[1] = 0xffffffff;
  *(undefined4 *)(unsigned)0x8c2791b8 = 0;
  *(undefined4 *)(unsigned)(0x5b38 + (int)ar4) = 0;
  *(undefined4 *)(unsigned)(0x5b3c + (int)ar4) = 0;
  *(undefined4 *)(unsigned)0x8c279254 = 0;
  *(undefined4 *)(unsigned)0x8c279248 = 0;
  *(undefined4 *)(unsigned)(0x6cc0 + (int)ar4) = 0x7000;
  *(undefined4 *)(unsigned)0x8c279280 = 0x1f40;
  *(undefined4 *)(unsigned)0x8c279274 = 0;
  *(undefined4 *)(unsigned)0x8c279278 = 0;
  *(undefined4 *)(unsigned)0x8c27927c = 0;
  *(undefined4 *)(unsigned)0x8c2791bc = 0;
  *(undefined1 *)(unsigned)(0x8c2791bc + 3) = 0;
  *(undefined4 *)(unsigned)0x8c27924c = 0;
  *(undefined4 *)(unsigned)0x8c279284 = 0;
  *(undefined4 *)(unsigned)0x8c279288 = 0;
  *(undefined4 *)(unsigned)0x8c27928c = 0;
  *(undefined4 *)(unsigned)0x8c279290 = 0;
  *(undefined4 *)(unsigned)0x8c279294 = 0;
  return ar4;
}

__asm__(".globl _FUN_8c01ca24\n.set _FUN_8c01ca24, _FUN_8c01ca24_def\n");
