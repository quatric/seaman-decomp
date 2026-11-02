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
undefined4 FUN_8c20136c_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c20136c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int in_r0 = (int)(unsigned long)vin0;
  uint uVar1;
  undefined4 a4;
  uint unaff_r12 = 0;
  uint unaff_r13 = 0;
  int unaff_r14 = 0;
  
  a4 = *(undefined4 *)(unsigned)(unaff_r14 + 0x28);
  *(undefined4 *)(unsigned)(in_r0 + unaff_r14) = *(undefined4 *)(unsigned)(unaff_r14 + 0x38);
  while( true ) {
    if (unaff_r12 <= unaff_r13) {
      return *(undefined4 *)(unsigned)(unaff_r14 + 0x34);
    }
    if (*(int *)(unsigned)(unaff_r14 + 0x40) == 0xfffa) break;
    if (*(int *)(unsigned)(unaff_r14 + 0x34) == 0) {
      return 0xffff0000;
    }
    uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c2009d0(a4,*(undefined4 *)(unsigned)(unaff_r14 + 0x40),ar6,ar7));
    unaff_r13 = unaff_r13 + 1;
    *(uint *)(unsigned)(unaff_r14 + 0x40) = uVar1 & 0xffff;
    *(int *)(unsigned)(unaff_r14 + 0x34) = *(int *)(unsigned)(unaff_r14 + 0x34) + -1;
  }
  if (*(int *)(unsigned)(unaff_r14 + 0x34) != 0) {
    return 0xffff0000;
  }
  return 0;
}

__asm__(".globl _FUN_8c20136c\n.set _FUN_8c20136c, _FUN_8c20136c_def\n");
