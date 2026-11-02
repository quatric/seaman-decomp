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
le<undefined4>*  FUN_8c01a308_def(le<undefined4>* ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c01a308");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 4; for (int i_ = 0; i_ < 4; i_++) z_[i_] = 0; }
  uint uVar1;
  
  for (uVar1 = 0; uVar1 < 0x80; uVar1 = uVar1 + 1) {
    *(le<undefined4>* )(unsigned)((int)ar4 + 0x244c + uVar1 * 0x28) = 0xffffffff;
  }
  *ar4 = 0xffffffff;
  *(le<undefined4>* )(unsigned)0x8c2791b4 = 0xffffffff;
  ar4[1] = 0xffffffff;
  ar4[2] = 0xffffffff;
  *(le<undefined4>* )(unsigned)0x8c2791b0 = 0;
  ar4[3] = 10;
  ar4[6] = 0;
  ar4[7] = 0;
  (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c01c944(ar4,ar5,ar6,ar7));
  return ar4;
}

__asm__(".globl FUN_8c01a308\n.set FUN_8c01a308, FUN_8c01a308_def\n");

}
