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
undefined4 s_MrEgg_Home_nj_09d47c_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "s_MrEgg_Home_nj_09d47c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  
  for (iVar1 = 0; iVar1 < 1; iVar1 = iVar1 + 1) {
    *(undefined4 *)(unsigned)(iVar1 * 0x124 + -0x73d7b570) = 0;
    *(undefined4 *)(unsigned)(iVar1 * 0x124 + -0x73d7b56c) = 0;
    *(unsigned *)(unsigned)(iVar1 * 0x124 + -0x73d7b568) = (*(undefined4 *)(unsigned)(unsigned)0x8c13aa70);
    *(undefined4 *)(unsigned)(iVar1 * 0x124 + -0x73d7b564) = 0;
    *(unsigned *)(unsigned)(iVar1 * 0x124 + -0x73d7b560) = (*(undefined4 *)(unsigned)(unsigned)0x8c13aa74);
    *(undefined4 *)(unsigned)(iVar1 * 0x124 + -0x73d7b55c) = 0;
    *(undefined4 *)(unsigned)(iVar1 * 0x124 + -0x73d7b4c0) = 0x8c284cb8;
    *(undefined4 *)(unsigned)(iVar1 * 0x124 + -0x73d7b4b8) = 0x3f800000;
    *(undefined4 *)(unsigned)(iVar1 * 0x124 + -0x73d7b4a8) = 0x3ca3d70a;
    *(undefined4 *)(unsigned)(iVar1 * 0x124 + -0x73d7b4a4) = 0x3ecccccd;
    *(undefined4 *)(unsigned)(iVar1 * 0x124 + -0x73d7b4a0) = 0x43480000;
    *(undefined4 *)(unsigned)(iVar1 * 0x124 + -0x73d7b4ac) = 0x3eb33333;
    *(undefined4 *)(unsigned)(iVar1 * 0x124 + -0x73d7b454) = 0x43898000;
  }
  for (iVar1 = 0; iVar1 < 1; iVar1 = iVar1 + 1) {
    *(undefined2 *)(unsigned)(iVar1 * 0x10 + -0x73d7b444) = 0xffff;
    *(undefined4 *)(unsigned)(iVar1 * 0x10 + -0x73d7b440) = 1;
    *(undefined4 *)(unsigned)(iVar1 * 0x10 + -0x73d7b43c) = 0;
    *(undefined4 *)(unsigned)(iVar1 * 0x10 + -0x73d7b438) = 0;
  }
  return 1;
}

__asm__(".globl _s_MrEgg_Home_nj_09d47c\n.set _s_MrEgg_Home_nj_09d47c, _s_MrEgg_Home_nj_09d47c_def\n");
