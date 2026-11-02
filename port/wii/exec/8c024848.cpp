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
le<undefined4>*  FUN_8c024848_def(le<undefined4>* ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c024848");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_zero(ar4 + 8,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_zero(ar4 + 0xc,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), Vec3_set_zero(ar4 + 0x10,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_zero(ar4 + 0x13,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_zero(ar4 + 0x17,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), Vec3_set_zero(ar4 + 0x1b,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_zero((int)ar4 + 0x84,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), Vec3_set_zero((int)ar4 + 0xb8,ar5,ar6,ar7));
  ar4[6] = 0;
  ar4[7] = 0;
  ar4[4] = 0;
  ar4[5] = 0;
  ar4[3] = 0;
  ar4[2] = 0;
  ar4[1] = 0;
  *ar4 = 0;
  *(le<undefined4>* )(unsigned)(0x98 + (int)ar4) = 0;
  *(le<undefined4>* )(unsigned)(0x94 + (int)ar4) = 0;
  *(le<undefined4>* )(unsigned)(0x9c + (int)ar4) = 0;
  *(le<undefined4>* )(unsigned)(0xa4 + (int)ar4) = 0;
  *(le<undefined4>* )(unsigned)(0xa0 + (int)ar4) = 0;
  *(le<undefined4>* )(unsigned)(0xa8 + (int)ar4) = 0;
  *(le<undefined2>* )(unsigned)(0xac + (int)ar4) = 0;
  *(le<undefined4>* )(unsigned)(0xb0 + (int)ar4) = 0;
  *(le<undefined2>* )(unsigned)(0xb4 + (int)ar4) = 0;
  *(le<undefined2>* )(unsigned)(0xb6 + (int)ar4) = 0;
  return ar4;
}

__asm__(".globl FUN_8c024848\n.set FUN_8c024848, FUN_8c024848_def\n");

}
