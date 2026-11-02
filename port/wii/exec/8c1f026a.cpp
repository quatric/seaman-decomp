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
undefined4 FUN_8c1f026a_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c1f026a");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 4; for (int i_ = 0; i_ < 4; i_++) z_[i_] = 0; }
  if (ar4 == 1) {
    (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c1f468a(ar5,vr5,vr6,vr7));
  }
  else if (ar4 == 2) {
    (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c1f4656(ar5,vr5,vr6,vr7));
  }
  else if (ar4 == 4) {
    (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c1f46de(ar5,vr5,vr6,vr7));
  }
  else if (ar4 == 3) {
    (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c1f469e(ar5,vr5,vr6,vr7));
  }
  else if (ar4 == 6) {
    (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c1f46ca(ar5,vr5,vr6,vr7));
  }
  else if (ar4 == 5) {
    (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c1f4672(ar5,vr5,vr6,vr7));
  }
  else if (ar4 == 0) {
    (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c1f46f2(ar5,vr5,vr6,vr7));
  }
  else if (ar4 == 7) {
    (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c1f4716(ar5,vr5,vr6,vr7));
  }
  else if (ar4 == 8) {
    (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c1f472a(ar5,vr5,vr6,vr7));
  }
  else {
    if (ar4 != 9) {
      return 0xffffffff;
    }
    (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c1f4764(ar5,vr5,vr6,vr7));
  }
  return 0;
}

__asm__(".globl FUN_8c1f026a\n.set FUN_8c1f026a, FUN_8c1f026a_def\n");

}
