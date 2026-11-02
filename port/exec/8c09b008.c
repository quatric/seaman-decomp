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
undefined4 s_Cpe_Home_nj_09b008_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "s_Cpe_Home_nj_09b008";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  
  for (iVar1 = 0; iVar1 < 1; iVar1 = iVar1 + 1) {
    *(undefined ***)(unsigned)(iVar1 * 0x124 + -0x73d7b890) = &(*(undefined4 *)(unsigned)(unsigned)0x8c13a9c8);
    *(undefined ***)(unsigned)(iVar1 * 0x124 + -0x73d7b88c) = &(*(undefined4 *)(unsigned)(unsigned)0x8c13a9cc);
    *(unsigned *)(unsigned)(iVar1 * 0x124 + -0x73d7b888) = (*(undefined4 *)(unsigned)(unsigned)0x8c13a9c0);
    *(undefined4 *)(unsigned)(iVar1 * 0x124 + -0x73d7b884) = 0;
    *(unsigned *)(unsigned)(iVar1 * 0x124 + -0x73d7b880) = (*(undefined4 *)(unsigned)(unsigned)0x8c13a9c4);
    *(undefined4 *)(unsigned)(iVar1 * 0x124 + -0x73d7b87c) = 0;
    *(undefined4 *)(unsigned)(iVar1 * 0x124 + -0x73d7b7f4) = 0x8c2848b8;
    *(undefined2 *)(unsigned)(iVar1 * 0x124 + -0x73d7b7f0) = 1;
    *(undefined4 *)(unsigned)(iVar1 * 0x124 + -0x73d7b7ec) = 0x8c2848c8;
    *(undefined2 *)(unsigned)(iVar1 * 0x124 + -0x73d7b7e8) = 1;
    *(undefined4 *)(unsigned)(iVar1 * 0x124 + -0x73d7b7e0) = 0x8c2849b8;
    *(undefined4 *)(unsigned)(iVar1 * 0x124 + -0x73d7b7d8) = 0x3f800000;
    *(undefined4 *)(unsigned)(iVar1 * 0x124 + -0x73d7b7c8) = 0x3ca3d70a;
    *(undefined4 *)(unsigned)(iVar1 * 0x124 + -0x73d7b7c4) = 0x3f4ccccd;
    *(undefined4 *)(unsigned)(iVar1 * 0x124 + -0x73d7b7c0) = 0x42c80000;
  }
  for (iVar1 = 0; iVar1 < 1; iVar1 = iVar1 + 1) {
    *(undefined2 *)(unsigned)(iVar1 * 0x10 + -0x73d7b764) = 0xffff;
    *(undefined4 *)(unsigned)(iVar1 * 0x10 + -0x73d7b760) = 0;
    *(undefined4 *)(unsigned)(iVar1 * 0x10 + -0x73d7b75c) = 1;
    *(undefined4 *)(unsigned)(iVar1 * 0x10 + -0x73d7b758) = 0;
  }
  return 1;
}

__asm__(".globl _s_Cpe_Home_nj_09b008\n.set _s_Cpe_Home_nj_09b008, _s_Cpe_Home_nj_09b008_def\n");
