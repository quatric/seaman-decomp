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
undefined4 FUN_8c266b08_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c266b08";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int ar6_00;
  undefined *ar7_00;
  
  if (*(int *)(unsigned)((*(undefined4 *)(unsigned)(unsigned)0x8c2784c0) + 0x15c) != 0) {
    *(undefined4 *)(unsigned)((*(undefined4 *)(unsigned)(unsigned)0x8c2784c0) + 0x160) = 1;
    if ((*(uint *)(unsigned)((*(undefined4 *)(unsigned)(unsigned)0x8c2784c0) + 0x15c) & 1) != 0) {
      *(int *)(unsigned)((*(undefined4 *)(unsigned)(unsigned)0x8c2784c0) + 0x15c) = *(int *)(unsigned)((*(undefined4 *)(unsigned)(unsigned)0x8c2784c0) + 0x15c) + 1;
    }
    ar7_00 = (undefined *)(unsigned)0x8c266b70;
    ar6_00 = *(int *)(unsigned)((*(undefined4 *)(unsigned)(unsigned)0x8c2784c0) + 0x15c) << 4;
    ({ unsigned long t0_ = (unsigned long)((*(undefined4 *)(unsigned)(unsigned)0x8c2784c0) + 0x158); *(unsigned *)((((unsigned long)(fr0_ - 0)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 0)) - 8); FUN_8c265ea0(*(undefined4 *)(unsigned)((*(undefined4 *)(unsigned)(unsigned)0x8c2784c0) + 0x178),*(undefined4 *)(unsigned)((*(undefined4 *)(unsigned)(unsigned)0x8c2784c0) + 0x158),ar6_00,
                 (undefined *)(unsigned)0x8c266b70); });
    (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c265ff4(*(undefined4 *)(unsigned)((*(undefined4 *)(unsigned)(unsigned)0x8c2784c0) + 0x178),*(undefined4 *)(unsigned)((*(undefined4 *)(unsigned)(unsigned)0x8c2784c0) + 0x1c4),ar6_00,
                 ar7_00));
  }
  return 0;
}

__asm__(".globl _FUN_8c266b08\n.set _FUN_8c266b08, _FUN_8c266b08_def\n");
