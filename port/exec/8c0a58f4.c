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
undefined4 s_Cpe_Home_nj_0a58f4_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "s_Cpe_Home_nj_0a58f4";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  
  for (iVar1 = 0; iVar1 < 1; iVar1 = iVar1 + 1) {
    *(undefined ***)(unsigned)(iVar1 * 0x124 + -0x73d7a9c0) = &(*(undefined4 *)(unsigned)(unsigned)0x8c13b0f8);
    *(undefined ***)(unsigned)(iVar1 * 0x124 + -0x73d7a9bc) = &(*(undefined4 *)(unsigned)(unsigned)0x8c13b0fc);
    *(unsigned *)(unsigned)(iVar1 * 0x124 + -0x73d7a9b8) = (*(undefined4 *)(unsigned)(unsigned)0x8c13b0f0);
    *(undefined4 *)(unsigned)(iVar1 * 0x124 + -0x73d7a9b4) = 0;
    *(unsigned *)(unsigned)(iVar1 * 0x124 + -0x73d7a9b0) = (*(undefined4 *)(unsigned)(unsigned)0x8c13b0f4);
    *(undefined4 *)(unsigned)(iVar1 * 0x124 + -0x73d7a9ac) = 0;
    *(undefined4 *)(unsigned)(iVar1 * 0x124 + -0x73d7a924) = 0x8c285788;
    *(undefined2 *)(unsigned)(iVar1 * 0x124 + -0x73d7a920) = 1;
    *(undefined4 *)(unsigned)(iVar1 * 0x124 + -0x73d7a91c) = 0x8c285798;
    *(undefined2 *)(unsigned)(iVar1 * 0x124 + -0x73d7a918) = 1;
    *(undefined4 *)(unsigned)(iVar1 * 0x124 + -0x73d7a910) = 0x8c2857a8;
    *(undefined4 *)(unsigned)(iVar1 * 0x124 + -0x73d7a908) = 0x3f800000;
    *(undefined4 *)(unsigned)(iVar1 * 0x124 + -0x73d7a8f8) = 0x3ca3d70a;
    *(undefined4 *)(unsigned)(iVar1 * 0x124 + -0x73d7a8f4) = 0x3f4ccccd;
    *(undefined4 *)(unsigned)(iVar1 * 0x124 + -0x73d7a8f0) = 0x42c80000;
  }
  for (iVar1 = 0; iVar1 < 1; iVar1 = iVar1 + 1) {
    *(undefined2 *)(unsigned)(iVar1 * 0x10 + -0x73d7a894) = 0xffff;
    *(undefined4 *)(unsigned)(iVar1 * 0x10 + -0x73d7a890) = 0;
    *(undefined4 *)(unsigned)(iVar1 * 0x10 + -0x73d7a88c) = 1;
    *(undefined4 *)(unsigned)(iVar1 * 0x10 + -0x73d7a888) = 0;
  }
  return 1;
}

__asm__(".globl _s_Cpe_Home_nj_0a58f4\n.set _s_Cpe_Home_nj_0a58f4, _s_Cpe_Home_nj_0a58f4_def\n");
