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
undefined4 FUN_8c1f43d2_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c1f43d2";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 4; for (int i_ = 0; i_ < 4; i_++) z_[i_] = 0; }
  byte bVar1;
  int ar4_00;
  undefined4 in_PR = 0;
  
  ar4_00 = (*(undefined4 *)(unsigned)(unsigned)0x8c4727b4);
  if (*(int *)(unsigned)((*(undefined4 *)(unsigned)(unsigned)0x8c4727b4) + 0xfc0) != 0) {
    return 0xfffffffd;
  }
  if ((*(uint *)(unsigned)(*(int *)(unsigned)((*(undefined4 *)(unsigned)(unsigned)0x8c4727b4) + 0x10f4) + 0x18) & 1) != 0) {
    return 0xffffffff;
  }
  bVar1 = *(&(*(undefined1 *)(unsigned)0x8c1f5a2c));
  *(&(*(undefined1 *)(unsigned)0x8c1f5a2c)) = bVar1 | 0x80;
  if (bVar1 != 0) {
    ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(unsigned)0x8c26c6b8)); unsigned long t1_ = (unsigned long)(in_PR); *(unsigned *)((((unsigned long)(fr0_ - 4)) - 8) + 0) = (unsigned)t0_; *(unsigned *)((((unsigned long)(fr0_ - 4)) - 8) + 4) = (unsigned)t1_; vsp = (((unsigned long)(fr0_ - 4)) - 8); FUN_8c1f4570(ar4_00,ar5,ar6,ar7); });
    return 0xfffffffe;
  }
  return 0;
}

__asm__(".globl _FUN_8c1f43d2\n.set _FUN_8c1f43d2, _FUN_8c1f43d2_def\n");
