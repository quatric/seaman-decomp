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
undefined4 FUN_8c258ac0_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c258ac0";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  (*(undefined4 *)(unsigned)(unsigned)0x8c4aa518) = 0;
  (*(undefined4 *)(unsigned)(unsigned)0x8c4aa51c) = 0;
  (*(undefined4 *)(unsigned)(unsigned)0x8c4aa520) = 0;
  (*(undefined4 *)(unsigned)(unsigned)0x8c4aa4b4) = (*(undefined4 *)(unsigned)(unsigned)0x8c4aa4ac) / 2.0;
  (*(undefined4 *)(unsigned)(unsigned)0x8c4aa4b8) = (*(undefined4 *)(unsigned)(unsigned)0x8c4aa4b0) / 2.0;
  (*(undefined4 *)(unsigned)(unsigned)0x8c4aa4c4) = 0;
  (*(undefined4 *)(unsigned)(unsigned)0x8c4aa4c8) = 0;
  (*(undefined4 *)(unsigned)(unsigned)0x8c4aa4cc) = (*(undefined4 *)(unsigned)(unsigned)0x8c4aa4ac) + -1.0;
  (*(undefined4 *)(unsigned)(unsigned)0x8c4aa4d0) = (*(undefined4 *)(unsigned)(unsigned)0x8c4aa4b0) + -1.0;
  return 4;
}

__asm__(".globl _FUN_8c258ac0\n.set _FUN_8c258ac0, _FUN_8c258ac0_def\n");
