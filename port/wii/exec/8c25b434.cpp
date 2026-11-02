#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c25b434_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c25b434");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 64; for (int i_ = 0; i_ < 64; i_++) z_[i_] = 0; }
  le<int>* ar5_00;
  
  ar5_00 = ((le<int>* )(unsigned long)*(le<unsigned>* )(unsigned)(*((le<undefined4>* )(unsigned long)*(le<unsigned>* )0x8c277b04) + ar4 * 0xc + 8));
  if (!ar5_00) return 0;
  if ((*ar5_00 != (*(le<undefined4>* )(unsigned)(unsigned)0x8c277b10)) || ((*(le<undefined4>* )(unsigned)(unsigned)0x8c277b14) != ar5_00[1])) {
    (*(le<undefined4>* )(unsigned)(unsigned)0x8c277b10) = *ar5_00;
    (*(le<undefined4>* )(unsigned)(unsigned)0x8c277b14) = ar5_00[1];
    *(le<uint>* )(unsigned)((*(le<undefined4>* )(unsigned)(unsigned)0x8c4aabbc) + 0x98) =
         *(le<uint>* )(unsigned)((*(le<undefined4>* )(unsigned)(unsigned)0x8c4aabbc) + 0x98) & 0xffffffc0 | ar5_00[2] & 0x3fU;
    (*(le<undefined4>* )(unsigned)(unsigned)0x8c277b1c) = (uint)ar5_00[6] >> 0x10;
    *(le<int>* )(unsigned)((*(le<undefined4>* )(unsigned)(unsigned)0x8c4aabbc) + 0x9c) = ar5_00[3];
    (vsp = ((unsigned long)(fr0_ - 64)), FUN_8c20fe00((*(le<undefined4>* )(unsigned)(unsigned)0x8c4aabbc),ar5_00,ar6,ar7));
  }
  return 1;
}

__asm__(".globl FUN_8c25b434\n.set FUN_8c25b434, FUN_8c25b434_def\n");

}
