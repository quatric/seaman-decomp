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
undefined4 FUN_8c259be8_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c259be8");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 4; for (int i_ = 0; i_ < 4; i_++) z_[i_] = 0; }
  int iVar1;
  
  (*(le<undefined4>* )(unsigned)(unsigned)0x8c4b3338) = (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c1f397e(ar4,0,ar6,ar7));
  if (((*(le<undefined4>* )(unsigned)(unsigned)0x8c4b3338) != 0) &&
     (iVar1 = (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c1f30d4((*(le<undefined4>* )(unsigned)(unsigned)0x8c4b3338),((le<undefined4>* )(unsigned)0x8c277c9c),ar6,ar7)), iVar1 != 0)) {
    (*(le<undefined4>* )(unsigned)(unsigned)0x8c277c98) = (*(le<undefined4>* )(unsigned)(unsigned)0x8c277c9c) + 0x7ff >> 0xb;
    (*(le<undefined4>* )(unsigned)(unsigned)0x8c277c94) = 0;
    (*(le<undefined4>* )(unsigned)(unsigned)0x8c277ca0) = 0;
    (*(le<undefined4>* )(unsigned)(unsigned)0x8c277ca4) = 0;
    (*(le<undefined4>* )(unsigned)(unsigned)0x8c277ca8) = 0;
    (*(le<undefined4>* )(unsigned)(unsigned)0x8c277cac) = 0;
    return 0;
  }
  (*(le<undefined4>* )(unsigned)(unsigned)0x8c4aa6b4) = 2;
  return 0xfffffffe;
}

__asm__(".globl FUN_8c259be8\n.set FUN_8c259be8, FUN_8c259be8_def\n");

}
