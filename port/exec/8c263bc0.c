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
undefined4 FUN_8c263bc0_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c263bc0";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 ain0;
  undefined4 ar5_00;
  int ar6_00;
  
  ar6_00 = (int)*(short *)(unsigned)(ar4 + 0x3c) << 0xb;
  ain0 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c263798(*(undefined4 *)(unsigned)(ar4 + 8),(int)*(short *)(unsigned)(ar4 + 0x3e) << 0xb,ar6_00,ar7));
  ar5_00 = 0x19;
  ({ unsigned long ri0_ = (unsigned long)(ain0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); FUN_8c26357a(*(undefined4 *)(unsigned)(ar4 + 8),0x19,ar6_00,ar7); });
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c26346e(*(undefined4 *)(unsigned)(ar4 + 8),ar5_00,ar6_00,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c263b34(ar4,*(undefined4 *)(unsigned)(ar4 + 0x10),ar6_00,ar7));
  *(undefined1 *)(unsigned)(ar4 + 2) = 0;
  return 0;
}

__asm__(".globl _FUN_8c263bc0\n.set _FUN_8c263bc0, _FUN_8c263bc0_def\n");
