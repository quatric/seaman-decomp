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
undefined4 s_Sp_Home_njd_0a4af0_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "s_Sp_Home_njd_0a4af0";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  
  for (iVar1 = 0; iVar1 < 1; iVar1 = iVar1 + 1) {
    *(undefined ***)(unsigned)(iVar1 * 0x124 + -0x73d7ac8c) = &(*(undefined4 *)(unsigned)(unsigned)0x8c13b0a4);
    *(undefined ***)(unsigned)(iVar1 * 0x124 + -0x73d7ac88) = &(*(undefined4 *)(unsigned)(unsigned)0x8c13b0c8);
    *(unsigned *)(unsigned)(iVar1 * 0x124 + -0x73d7ac84) = (*(undefined4 *)(unsigned)(unsigned)0x8c13b094);
    *(undefined4 *)(unsigned)(iVar1 * 0x124 + -0x73d7ac80) = 0;
    *(unsigned *)(unsigned)(iVar1 * 0x124 + -0x73d7ac7c) = (*(undefined4 *)(unsigned)(unsigned)0x8c13b09c);
    *(unsigned *)(unsigned)(iVar1 * 0x124 + -0x73d7ac78) = (*(undefined4 *)(unsigned)(unsigned)0x8c13b098);
    *(unsigned *)(unsigned)(iVar1 * 0x124 + -0x73d7ac70) = (*(undefined4 *)(unsigned)(unsigned)0x8c13b0a0);
    *(undefined4 *)(unsigned)(iVar1 * 0x124 + -0x73d7ac6c) = 7;
    *(undefined4 *)(unsigned)(iVar1 * 0x124 + -0x73d7ac60) = 0x8c2852b0;
    *(undefined4 *)(unsigned)(iVar1 * 0x124 + -0x73d7abdc) = 0x8c28559c;
    *(undefined4 *)(unsigned)(iVar1 * 0x124 + -0x73d7abd8) = 0x3f000000;
    *(undefined4 *)(unsigned)(iVar1 * 0x124 + -0x73d7abd4) = 0x3f800000;
    *(undefined4 *)(unsigned)(iVar1 * 0x124 + -0x73d7abc4) = 0x3ca3d70a;
    *(undefined4 *)(unsigned)(iVar1 * 0x124 + -0x73d7abc0) = 0x3f4ccccd;
    *(undefined4 *)(unsigned)(iVar1 * 0x124 + -0x73d7abbc) = 0x43e10000;
    *(undefined4 *)(unsigned)(iVar1 * 0x124 + -0x73d7abf0) = 0x8c285310;
    *(undefined2 *)(unsigned)(iVar1 * 0x124 + -0x73d7abec) = 9;
    *(undefined4 *)(unsigned)(iVar1 * 0x124 + -0x73d7abe8) = 0x8c285340;
    *(undefined2 *)(unsigned)(iVar1 * 0x124 + -0x73d7abe4) = 9;
    *(undefined4 *)(unsigned)(iVar1 * 0x124 + -0x73d7aba0) = 0x43430000;
    *(undefined4 *)(unsigned)(iVar1 * 0x124 + -0x73d7ab9c) = 0x43480000;
    *(float *)(unsigned)(iVar1 * 0x124 + -0x73d7abc8) = *(float *)(unsigned)(iVar1 * 0x124 + -0x73d7abc8) * 0.7;
    *(undefined4 *)(unsigned)(iVar1 * 0x124 + -0x73d7aba4) = 0x41700000;
    *(undefined4 *)(unsigned)(iVar1 * 0x124 + -0x73d7ab70) = 0x433e0000;
  }
  (*(undefined4 *)(unsigned)(unsigned)0x8c2854a0) = 0xffff;
  (*(undefined4 *)(unsigned)(unsigned)0x8c2854a4) = 1;
  (*(undefined4 *)(unsigned)(unsigned)0x8c2854a8) = 1;
  (*(undefined4 *)(unsigned)(unsigned)0x8c2854ac) = 0;
  return 0;
}

__asm__(".globl _s_Sp_Home_njd_0a4af0\n.set _s_Sp_Home_njd_0a4af0, _s_Sp_Home_njd_0a4af0_def\n");
