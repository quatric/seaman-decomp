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
undefined4 FUN_8c1f026e_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c1f026e");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 4; for (int i_ = 0; i_ < 4; i_++) z_[i_] = 0; }
  int in_r0 = (int)(unsigned long)vin0;
  
  if (in_r0 == 1) {
    (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c1f468a(ar5,ar5,ar6,ar7));
  }
  else if (in_r0 == 2) {
    (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c1f4656(ar5,ar5,ar6,ar7));
  }
  else if (in_r0 == 4) {
    (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c1f46de(ar5,ar5,ar6,ar7));
  }
  else if (in_r0 == 3) {
    (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c1f469e(ar5,ar5,ar6,ar7));
  }
  else if (in_r0 == 6) {
    (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c1f46ca(ar5,ar5,ar6,ar7));
  }
  else if (in_r0 == 5) {
    (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c1f4672(ar5,ar5,ar6,ar7));
  }
  else if (in_r0 == 0) {
    (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c1f46f2(ar5,ar5,ar6,ar7));
  }
  else if (in_r0 == 7) {
    (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c1f4716(ar5,ar5,ar6,ar7));
  }
  else if (in_r0 == 8) {
    (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c1f472a(ar5,ar5,ar6,ar7));
  }
  else {
    if (in_r0 != 9) {
      return 0xffffffff;
    }
    (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c1f4764(ar5,ar5,ar6,ar7));
  }
  return 0;
}

__asm__(".globl FUN_8c1f026e\n.set FUN_8c1f026e, FUN_8c1f026e_def\n");

}
