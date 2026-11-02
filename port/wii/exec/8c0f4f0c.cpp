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
undefined4 FUN_8c0f4f0c_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0f4f0c");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 4; for (int i_ = 0; i_ < 4; i_++) z_[i_] = 0; }
  ({ unsigned long t0_ = (unsigned long)((&(*(undefined1 *)(unsigned)0x8c1401e4)) + 0x16); *(le<unsigned>* )((((unsigned long)(fr0_ - 4)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 4)) - 8); FUN_8c014334(ar5,ar5,ar6,ar7); });
  *(le<undefined4>* )(unsigned)(ar5 + 0x14) = *(le<undefined4>* )(unsigned)(ar4 + 0x20);
  *(le<undefined4>* )(unsigned)(ar5 + 0x18) = *(le<undefined4>* )(unsigned)(ar4 + 0x24);
  (vsp = ((unsigned long)(fr0_ - 4)), Vec3_assign(ar5 + 0x1c,ar4 + 0x30,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 4)), vec3_copy_8c023d8c(ar5 + 0x2c,ar4 + 0x50,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c023e04(ar5 + 0x38,ar4 + 0x5c,ar6,ar7));
  *(le<undefined4>* )(unsigned)(ar5 + 0x44) = *(le<undefined4>* )(unsigned)(ar4 + 0x6c);
  *(le<uint>* )(unsigned)(ar5 + 0x48) = *(le<uint>* )(unsigned)(ar4 + 0x74) & 0xfffffffd;
  return 0x48;
}

__asm__(".globl FUN_8c0f4f0c\n.set FUN_8c0f4f0c, FUN_8c0f4f0c_def\n");

}
