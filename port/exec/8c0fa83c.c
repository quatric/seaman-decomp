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
undefined4 FUN_8c0fa83c_def(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0fa83c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 20; for (int i_ = 0; i_ < 20; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  int ar5_00;
  
  *(undefined1 *)(unsigned)(ar4 + 5) = 0;
  *(undefined1 *)(unsigned)(ar4 + 0xf) = 0;
  ar4[0xe] = 0;
  ar4[0xd] = 0;
  *(undefined1 *)(unsigned)(ar4 + 0x17) = 0;
  *(undefined4 *)(unsigned)(0x84 + (int)ar4) = 0;
  *(undefined4 *)(unsigned)(0x88 + (int)ar4) = 0;
  *(undefined1 *)(unsigned)(0x90 + (int)ar4) = 0;
  *(undefined4 *)(unsigned)(0xb4 + (int)ar4) = 0;
  *(undefined4 *)(unsigned)(0xb0 + (int)ar4) = 0;
  (vsp = ((unsigned long)(fr0_ - 20)), FUN_8c1f8176(((undefined1 *)(fr0_ - 0x14)),ar5,ar6,ar7));
  ar5_00 = (int)ar4 + 0xc8;
  (vsp = ((unsigned long)(fr0_ - 20)), FUN_8c1f826c(((undefined1 *)(fr0_ - 0x14)),ar5_00,ar6,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 20)), FUN_8c01f528(0x8c3dd7dc,ar5_00,ar6,ar7));
  ar4[2] = uVar1;
  uVar1 = (vsp = ((unsigned long)(fr0_ - 20)), FUN_8c01f520(0x8c3dd7dc,ar5_00,ar6,ar7));
  ar4[3] = uVar1;
  *ar4 = 1;
  (vsp = ((unsigned long)(fr0_ - 20)), FUN_8c0fda80(ar4,ar5_00,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 20)), FUN_8c01c970(ar4[3],(int)ar4 + 0xc4,ar6,ar7));
  return 1;
}

__asm__(".globl _FUN_8c0fa83c\n.set _FUN_8c0fa83c, _FUN_8c0fa83c_def\n");
