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
undefined1 * FUN_8c0fdc98_def(undefined1 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0fdc98";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  
  *ar4 = 0;
  ar4[0x20] = 0;
  ar4[0x40] = 0;
  *(undefined4 *)(unsigned)(ar4 + 0x60) = 0;
  *(undefined4 *)(unsigned)(ar4 + 100) = 0;
  *(undefined4 *)(unsigned)(ar4 + 0x68) = 0;
  *(undefined4 *)(unsigned)(ar4 + 0x6c) = 0;
  *(undefined4 *)(unsigned)(ar4 + 0x70) = 0;
  *(undefined4 *)(unsigned)(ar4 + 0x74) = 0;
  *(undefined4 *)(unsigned)(ar4 + 0x78) = 0;
  *(undefined4 *)(unsigned)(ar4 + 0x7c) = 7;
  for (iVar1 = 0; iVar1 < 0xc; iVar1 = iVar1 + 1) {
    *(undefined4 *)(unsigned)(ar4 + 0x80 + iVar1 * 4) = 0;
  }
  *(undefined4 *)(unsigned)(ar4 + 0xb0) = 0;
  *(undefined4 *)(unsigned)(ar4 + 0xb4) = 0;
  *(undefined4 *)(unsigned)(ar4 + 0xb8) = 0;
  *(undefined4 *)(unsigned)(ar4 + 0xbc) = 0;
  *(undefined4 *)(unsigned)(ar4 + 0xc0) = 0;
  *(undefined4 *)(unsigned)(ar4 + 0xc4) = 0;
  for (iVar1 = 0; iVar1 < 0x10; iVar1 = iVar1 + 1) {
    ar4[0xc8 + iVar1 * 0x20] = 0;
  }
  return ar4;
}

__asm__(".globl _FUN_8c0fdc98\n.set _FUN_8c0fdc98, _FUN_8c0fdc98_def\n");
