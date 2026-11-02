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
undefined4 s_FROG_EGG_038ecc_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "s_FROG_EGG_038ecc";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  
  for (iVar1 = 0; iVar1 < 1; iVar1 = iVar1 + 1) {
    *(undefined4 *)(unsigned)(iVar1 * 0x124 + -0x73d7ffb0) = 0;
    *(undefined ***)(unsigned)(iVar1 * 0x124 + -0x73d7ffac) = &(*(undefined4 *)(unsigned)(unsigned)0x8c1340ec);
    *(undefined ***)(unsigned)(iVar1 * 0x124 + -0x73d7ffa8) = &(*(undefined4 *)(unsigned)(unsigned)0x8c1340f0);
    *(unsigned *)(unsigned)(iVar1 * 0x124 + -0x73d7ffa4) = (*(undefined4 *)(unsigned)(unsigned)0x8c1340e4);
    *(undefined4 *)(unsigned)(iVar1 * 0x124 + -0x73d7ffa0) = 0;
    *(unsigned *)(unsigned)(iVar1 * 0x124 + -0x73d7ff9c) = (*(undefined4 *)(unsigned)(unsigned)0x8c1340e8);
    *(undefined4 *)(unsigned)(iVar1 * 0x124 + -0x73d7ff98) = 0;
    *(undefined4 *)(unsigned)(iVar1 * 0x124 + -0x73d7ff94) = 0;
    *(undefined4 *)(unsigned)(iVar1 * 0x124 + -0x73d7ff10) = 0x8c28019c;
    *(undefined2 *)(unsigned)(iVar1 * 0x124 + -0x73d7ff0c) = 1;
    *(undefined4 *)(unsigned)(iVar1 * 0x124 + -0x73d7ff08) = 0x8c2801ac;
    *(undefined2 *)(unsigned)(iVar1 * 0x124 + -0x73d7ff04) = 1;
    *(undefined4 *)(unsigned)(iVar1 * 0x124 + -0x73d7fefc) = 0x8c28029c;
    *(undefined4 *)(unsigned)(iVar1 * 0x124 + -0x73d7fef4) = 0x3f800000;
    *(undefined4 *)(unsigned)(iVar1 * 0x124 + -0x73d7fee4) = 0x3ca3d70a;
    *(undefined4 *)(unsigned)(iVar1 * 0x124 + -0x73d7fee0) = 0x3f4ccccd;
    *(undefined4 *)(unsigned)(iVar1 * 0x124 + -0x73d7fedc) = 0x42c80000;
  }
  for (iVar1 = 0; iVar1 < 1; iVar1 = iVar1 + 1) {
    *(undefined2 *)(unsigned)(iVar1 * 0x10 + -0x73d7fe80) = 0xffff;
    *(undefined4 *)(unsigned)(iVar1 * 0x10 + -0x73d7fe7c) = 1;
    *(undefined4 *)(unsigned)(iVar1 * 0x10 + -0x73d7fe78) = 0;
    *(undefined4 *)(unsigned)(iVar1 * 0x10 + -0x73d7fe74) = 0;
  }
  return 1;
}

__asm__(".globl _s_FROG_EGG_038ecc\n.set _s_FROG_EGG_038ecc, _s_FROG_EGG_038ecc_def\n");
