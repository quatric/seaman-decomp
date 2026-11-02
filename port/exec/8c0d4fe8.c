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
undefined4 s_40_BUBBLE_MONO_0d4fea_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "s_40_BUBBLE_MONO_0d4fea";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c235f14(ar4,ar5,ar6,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c022068))))
                    (0x8c2b59d0,(&(*(undefined1 *)(unsigned)0x8c13f7c0)) + 0x359,ar6,ar7));
  *(undefined4 *)(unsigned)(0x5e4 + ar4) = uVar1;
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0220d4(0x8c2b59d0,*(undefined4 *)(unsigned)(0x5e4 + ar4),ar6,ar7));
  return uVar1;
}

__asm__(".globl _s_40_BUBBLE_MONO_0d4fea\n.set _s_40_BUBBLE_MONO_0d4fea, _s_40_BUBBLE_MONO_0d4fea_def\n");
