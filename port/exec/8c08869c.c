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
undefined4 s_gme_Home_nj_08869c_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "s_gme_Home_nj_08869c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  
  for (iVar1 = 0; iVar1 < 1; iVar1 = iVar1 + 1) {
    *(undefined4 *)(unsigned)(iVar1 * 0x124 + -0x73d7c7fc) = 0;
    *(undefined4 *)(unsigned)(iVar1 * 0x124 + -0x73d7c75c) = 0;
    *(undefined4 *)(unsigned)(iVar1 * 0x124 + -0x73d7c748) = 0;
    *(undefined2 *)(unsigned)(iVar1 * 0x124 + -0x73d7c758) = 0;
    *(undefined2 *)(unsigned)(iVar1 * 0x124 + -0x73d7c750) = 0;
  }
  for (iVar1 = 0; iVar1 < 1; iVar1 = iVar1 + 1) {
    *(undefined ***)(unsigned)(iVar1 * 0x124 + -0x73d7c7f8) = &(*(undefined4 *)(unsigned)(unsigned)0x8c138588);
    *(undefined ***)(unsigned)(iVar1 * 0x124 + -0x73d7c7f4) = &(*(undefined4 *)(unsigned)(unsigned)0x8c13858c);
    *(unsigned *)(unsigned)(iVar1 * 0x124 + -0x73d7c7f0) = (*(undefined4 *)(unsigned)(unsigned)0x8c13857c);
    *(undefined4 *)(unsigned)(iVar1 * 0x124 + -0x73d7c7ec) = 0;
    *(unsigned *)(unsigned)(iVar1 * 0x124 + -0x73d7c7e8) = (*(undefined4 *)(unsigned)(unsigned)0x8c138584);
    *(undefined4 *)(unsigned)(iVar1 * 0x124 + -0x73d7c7e4) = 0;
    *(undefined4 *)(unsigned)(iVar1 * 0x124 + -0x73d7c75c) = 0x8c283950;
    *(undefined2 *)(unsigned)(iVar1 * 0x124 + -0x73d7c758) = 1;
    *(undefined4 *)(unsigned)(iVar1 * 0x124 + -0x73d7c754) = 0x8c283960;
    *(undefined2 *)(unsigned)(iVar1 * 0x124 + -0x73d7c750) = 1;
    *(undefined4 *)(unsigned)(iVar1 * 0x124 + -0x73d7c748) = 0x8c283a50;
    *(undefined4 *)(unsigned)(iVar1 * 0x124 + -0x73d7c740) = 0x3f800000;
    *(undefined4 *)(unsigned)(iVar1 * 0x124 + -0x73d7c730) = 0x3ca3d70a;
    *(undefined4 *)(unsigned)(iVar1 * 0x124 + -0x73d7c72c) = 0x3f4ccccd;
    *(undefined4 *)(unsigned)(iVar1 * 0x124 + -0x73d7c728) = 0x42c80000;
  }
  for (iVar1 = 0; iVar1 < 1; iVar1 = iVar1 + 1) {
    *(undefined2 *)(unsigned)(iVar1 * 0x10 + -0x73d7c6cc) = 0xffff;
    *(undefined4 *)(unsigned)(iVar1 * 0x10 + -0x73d7c6c8) = 1;
    *(undefined4 *)(unsigned)(iVar1 * 0x10 + -0x73d7c6c4) = 0;
    *(undefined4 *)(unsigned)(iVar1 * 0x10 + -0x73d7c6c0) = 0;
  }
  return 1;
}

__asm__(".globl _s_gme_Home_nj_08869c\n.set _s_gme_Home_nj_08869c, _s_gme_Home_nj_08869c_def\n");
