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
uint FUN_8c2140c6_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c2140c6";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 32; for (int i_ = 0; i_ < 32; i_++) z_[i_] = 0; }
  
  (vsp = ((unsigned long)(fr0_ - 32)), FUN_8c0107a0(0x1c,((uint *)(fr0_ - 0x20)),((undefined1 *)(unsigned)0x8c26d764),vr7));
  if (ar5 == 0) {
    (*(undefined4 *)(unsigned)(unsigned)0x8c4c0db0) = (*(undefined4 *)(unsigned)(unsigned)0x8c4c0db0) & ~((uint *)(fr0_ - 0x20))[ar4];
  }
  else {
    (*(undefined4 *)(unsigned)(unsigned)0x8c4c0db0) = (*(undefined4 *)(unsigned)(unsigned)0x8c4c0db0) | ((uint *)(fr0_ - 0x20))[ar4];
  }
  return (*(undefined4 *)(unsigned)(unsigned)0x8c4c0db0);
}

__asm__(".globl _FUN_8c2140c6\n.set _FUN_8c2140c6, _FUN_8c2140c6_def\n");
