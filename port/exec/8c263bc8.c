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
undefined4 FUN_8c263bc8_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c263bc8";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;
  int ain0 = (int)(unsigned long)vin0;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  code *in_r3 = 0;
  undefined4 ar5_00;
  int ar6_00;
  int unaff_r14 = 0;
  undefined4 in_PR = 0;
  
  ar6_00 = (int)*(short *)(unsigned)(ain0 + unaff_r14) << 0xb;
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)in_r3))(*(undefined4 *)(unsigned)(unaff_r14 + 8),(int)*(short *)(unsigned)(unaff_r14 + 0x3e) << 0xb,ar6_00,ar7));
  ar5_00 = 0x19;
  ({ unsigned long ri0_ = (unsigned long)(in_PR); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); FUN_8c26357a(*(undefined4 *)(unsigned)(unaff_r14 + 8),0x19,ar6_00,ar7); });
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c26346e(*(undefined4 *)(unsigned)(unaff_r14 + 8),ar5_00,ar6_00,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c263b34(unaff_r14,*(undefined4 *)(unsigned)(unaff_r14 + 0x10),ar6_00,ar7));
  *(undefined1 *)(unsigned)(unaff_r14 + 2) = 0;
  return 0;
}

__asm__(".globl _FUN_8c263bc8\n.set _FUN_8c263bc8, _FUN_8c263bc8_def\n");
