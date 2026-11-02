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
undefined4 FUN_8c25b440_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c25b440";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 64; for (int i_ = 0; i_ < 64; i_++) z_[i_] = 0; }
  undefined4 *in_r3 = 0;
  int *ar5_00;
  
  ar5_00 = ((int *)(unsigned long)*(unsigned *)(unsigned)(*(int *)(unsigned)*in_r3 + ar4 + 8));
  if ((*ar5_00 != (*(undefined4 *)(unsigned)(unsigned)0x8c277b10)) || ((*(undefined4 *)(unsigned)(unsigned)0x8c277b14) != ar5_00[1])) {
    (*(undefined4 *)(unsigned)(unsigned)0x8c277b10) = *ar5_00;
    (*(undefined4 *)(unsigned)(unsigned)0x8c277b14) = ar5_00[1];
    *(uint *)(unsigned)((*(undefined4 *)(unsigned)(unsigned)0x8c4aabbc) + 0x98) =
         *(uint *)(unsigned)((*(undefined4 *)(unsigned)(unsigned)0x8c4aabbc) + 0x98) & 0xffffffc0 | ar5_00[2] & 0x3fU;
    (*(undefined4 *)(unsigned)(unsigned)0x8c277b1c) = (uint)ar5_00[6] >> 0x10;
    *(int *)(unsigned)((*(undefined4 *)(unsigned)(unsigned)0x8c4aabbc) + 0x9c) = ar5_00[3];
    (vsp = ((unsigned long)(fr0_ - 64)), FUN_8c20fe00((*(undefined4 *)(unsigned)(unsigned)0x8c4aabbc),ar5_00,ar6,ar7));
  }
  return 1;
}

__asm__(".globl _FUN_8c25b440\n.set _FUN_8c25b440, _FUN_8c25b440_def\n");
