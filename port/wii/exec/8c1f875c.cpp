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
undefined4 FUN_8c1f875c_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c1f875c");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  uint uVar1;
  undefined4 a5;
  
  a5 = 0;
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c1f6e0c(0,0,ar6,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c1f8710(*(le<undefined4>* )(unsigned)0x8c4748b0,a5,ar6,ar7));
  if ((((uVar1 & 0xff) != (int)0xff) && ((uint)*(byte *)(unsigned)*(le<undefined4>* )(unsigned)0x8c4748b0 == (int)0xff))
     && ((uVar1 & 0xff) != (uint)*(byte *)(unsigned)(*(le<undefined4>* )(unsigned)0x8c4748b0 + 0x3b))) {
    *(le<undefined4>* )(unsigned)0x8c4748a8 = 1;
    return 0;
  }
  (vsp = ((unsigned long)(fr0_ - 0)), memmove(0x8c474a28,*(le<undefined4>* )(unsigned)0x8c4748b0,0x3c,ar7));
  return 1;
}

__asm__(".globl FUN_8c1f875c\n.set FUN_8c1f875c, FUN_8c1f875c_def\n");

}
