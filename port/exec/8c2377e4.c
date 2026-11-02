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
undefined4 FUN_8c2377e4_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c2377e4";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 4; for (int i_ = 0; i_ < 4; i_++) z_[i_] = 0; }
  int iVar1;
  uint a4;
  
  a4 = 0;
  while( true ) {
    if (*(uint *)(unsigned)((*(undefined4 *)(unsigned)(unsigned)0x8c277b04) + 4) <= a4) {
      return 1;
    }
    iVar1 = (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c2378a6(a4,ar5,ar6,ar7));
    if (iVar1 < 0) break;
    a4 = a4 + 1;
  }
  (*(undefined4 *)(unsigned)(unsigned)0x8c4aa6ac) = a4;
  return 0xffffffff;
}

__asm__(".globl _FUN_8c2377e4\n.set _FUN_8c2377e4, _FUN_8c2377e4_def\n");
