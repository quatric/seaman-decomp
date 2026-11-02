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
undefined4 s_herb_seed_nj_06cb08_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "s_herb_seed_nj_06cb08";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  
  for (iVar1 = 0; iVar1 < 2; iVar1 = iVar1 + 1) {
    *(undefined4 *)(unsigned)(iVar1 * 0x124 + -0x73d7fb10) = 0;
    *(undefined4 *)(unsigned)(iVar1 * 0x124 + -0x73d7fa70) = 0;
    *(undefined4 *)(unsigned)(((undefined1 *)(unsigned)0x8c2805a4) + iVar1 * 0x124) = 0x8c280d68;
    *(undefined4 *)(unsigned)(iVar1 * 0x124 + -0x73d7fb00) = 0;
    *(undefined2 *)(unsigned)(iVar1 * 0x124 + -0x73d7fa6c) = 0;
    *(undefined2 *)(unsigned)(iVar1 * 0x124 + -0x73d7fa64) = 0;
    *(undefined4 *)(unsigned)(iVar1 * 0x124 + -0x73d7fb0c) = 0;
    *(undefined4 *)(unsigned)(iVar1 * 0x124 + -0x73d7fb08) = 0;
    *(undefined4 *)(unsigned)(iVar1 * 0x124 + -0x73d7faf8) = 0;
    *(undefined4 *)(unsigned)(iVar1 * 0x124 + -0x73d7fa70) = 0;
    *(undefined2 *)(unsigned)(iVar1 * 0x124 + -0x73d7fa6c) = 0;
    *(undefined4 *)(unsigned)(iVar1 * 0x124 + -0x73d7fa68) = 0;
    *(undefined2 *)(unsigned)(iVar1 * 0x124 + -0x73d7fa64) = 0;
  }
  (*(undefined4 *)(unsigned)(unsigned)0x8c2804fc) = (*(undefined4 *)(unsigned)(unsigned)0x8c136f50);
  (*(undefined4 *)(unsigned)(unsigned)0x8c280504) = (*(undefined4 *)(unsigned)(unsigned)0x8c136f64);
  (*(undefined4 *)(unsigned)(unsigned)0x8c2805ac) = 0x3f800000;
  (*(undefined4 *)(unsigned)(unsigned)0x8c2805bc) = 0x3ca3d70a;
  (*(undefined4 *)(unsigned)(unsigned)0x8c2805c0) = 0x3f4ccccd;
  (*(undefined4 *)(unsigned)(unsigned)0x8c2805c4) = 0x43c80000;
  for (iVar1 = 1; iVar1 < 2; iVar1 = iVar1 + 1) {
    *(undefined ***)(unsigned)(iVar1 * 0x124 + -0x73d7fb0c) = &(*(undefined4 *)(unsigned)(unsigned)0x8c136f84);
    *(undefined ***)(unsigned)(iVar1 * 0x124 + -0x73d7fb08) = &(*(undefined4 *)(unsigned)(unsigned)0x8c136fb8);
    *(unsigned *)(unsigned)(((undefined1 *)(unsigned)0x8c2804fc) + iVar1 * 0x124) = (*(undefined4 *)(unsigned)(unsigned)0x8c136f54);
    *(unsigned *)(unsigned)(((undefined1 *)(unsigned)0x8c280504) + iVar1 * 0x124) = (*(undefined4 *)(unsigned)(unsigned)0x8c136f68);
    *(unsigned *)(unsigned)(iVar1 * 0x124 + -0x73d7faf8) = (*(undefined4 *)(unsigned)(unsigned)0x8c136f80);
    *(undefined4 *)(unsigned)(((undefined1 *)(unsigned)0x8c2805ac) + iVar1 * 0x124) = 0x3f800000;
    *(undefined4 *)(unsigned)(((undefined1 *)(unsigned)0x8c2805bc) + iVar1 * 0x124) = 0x3ca3d70a;
    *(undefined4 *)(unsigned)(((undefined1 *)(unsigned)0x8c2805c0) + iVar1 * 0x124) = 0x3f4ccccd;
    *(undefined4 *)(unsigned)(((undefined1 *)(unsigned)0x8c2805c4) + iVar1 * 0x124) = 0x43c80000;
    *(undefined4 *)(unsigned)(iVar1 * 0x124 + -0x73d7fa70) = 0x8c280924;
    *(undefined2 *)(unsigned)(iVar1 * 0x124 + -0x73d7fa6c) = 0xd;
    *(undefined4 *)(unsigned)(iVar1 * 0x124 + -0x73d7fa68) = 0x8c280964;
    *(undefined2 *)(unsigned)(iVar1 * 0x124 + -0x73d7fa64) = 0xd;
  }
  return 2;
}

__asm__(".globl _s_herb_seed_nj_06cb08\n.set _s_herb_seed_nj_06cb08, _s_herb_seed_nj_06cb08_def\n");
