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
undefined4 FUN_8c0d1d54_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0d1d54";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  int iVar2;
  
  *(undefined4 *)(unsigned)(ar4 + 0x1a0) = 0;
  *(undefined4 *)(unsigned)(ar4 + 0x1b0) = 0;
  *(undefined4 *)(unsigned)(ar4 + 0x1a4) = 0;
  *(undefined1 *)(unsigned)(ar4 + 0x1b4) = 1;
  *(undefined4 *)(unsigned)(ar4 + 0x1b8) = 0;
  *(undefined4 *)(unsigned)(ar4 + 0x1a8) = 0;
  *(undefined4 *)(unsigned)(ar4 + 0x1ac) = 0;
  *(undefined4 *)(unsigned)(ar4 + 0x1bc) = 0x446a56b8;
  *(undefined4 *)(unsigned)(ar4 + 0x1c0) = 0x43340000;
  *(undefined4 *)(unsigned)(ar4 + 0x1c4) = 0x43557405;
  *(undefined4 *)(unsigned)(ar4 + 0x1cc) = 0x4475f20c;
  *(undefined4 *)(unsigned)(ar4 + 0x1d0) = 0x43340000;
  *(undefined4 *)(unsigned)(ar4 + 0x1d4) = 0x44390b33;
  *(undefined4 *)(unsigned)(ar4 + 0x1dc) = 0x440a7a8f;
  *(undefined4 *)(unsigned)(ar4 + 0x1e0) = 0x43340000;
  *(undefined4 *)(unsigned)(ar4 + 0x1e4) = 0x44406fa8;
  for (iVar2 = 0; iVar2 < 0x14; iVar2 = iVar2 + 1) {
    ar6 = 0xf0;
    ar5 = 0x8c437b48;
    (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c013fb4(iVar2 * 0xf0 + ar4 + 0x1ec,0x8c437b48,0xf0,ar7));
  }
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), s_Nautilus_0ae6a4(ar4 + 0x1ec,ar5,ar6,ar7));
  return uVar1;
}

__asm__(".globl _FUN_8c0d1d54\n.set _FUN_8c0d1d54, _FUN_8c0d1d54_def\n");
