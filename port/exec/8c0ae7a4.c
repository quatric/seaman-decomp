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
undefined4 FUN_8c0ae7a4_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0ae7a4";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  
  *(undefined4 *)(unsigned)(ar4 + 4) = 6;
  *(undefined4 *)(unsigned)(ar4 + 8) = 0xc;
  *(undefined4 *)(unsigned)(ar4 + 0xc) = 0;
  *(undefined4 *)(unsigned)(ar4 + 0x10) = 0;
  *(undefined4 *)(unsigned)(ar4 + 0x14) = 0;
  *(undefined1 *)(unsigned)(ar4 + 0x18) = 0;
  *(undefined1 *)(unsigned)(ar4 + 0x19) = 0;
  *(undefined4 *)(unsigned)(ar4 + 0x1c) = 0;
  *(undefined4 *)(unsigned)(ar4 + 0x20) = 0;
  *(undefined4 *)(unsigned)(ar4 + 0x24) = 0;
  *(undefined2 *)(unsigned)(ar4 + 0x28) = 0;
  *(undefined2 *)(unsigned)(ar4 + 0x2a) = 0;
  *(undefined4 *)(unsigned)(ar4 + 0x2c) = 0;
  *(undefined4 *)(unsigned)(ar4 + 0x30) = 0;
  for (iVar1 = 0; iVar1 < 6; iVar1 = iVar1 + 1) {
    *(char *)(unsigned)(iVar1 * 0xc + ar4 + 0x34) = (char)iVar1;
    *(undefined1 *)(unsigned)(iVar1 * 0xc + ar4 + 0x35) = 0;
    *(undefined4 *)(unsigned)(iVar1 * 0xc + ar4 + 0x38) = 0;
    *(undefined1 *)(unsigned)(iVar1 * 0xc + ar4 + 0x3c) = 0;
  }
  return 6;
}

__asm__(".globl _FUN_8c0ae7a4\n.set _FUN_8c0ae7a4, _FUN_8c0ae7a4_def\n");
