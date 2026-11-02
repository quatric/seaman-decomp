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
int FUN_8c0fde5c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0fde5c");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 24; for (int i_ = 0; i_ < 24; i_++) z_[i_] = 0; }
  uint ar6_00;
  undefined4 ar5_00;
  int ar5_01;
  
  ar5_00 = ar5;
  (vsp = ((unsigned long)(fr0_ - 24)), FUN_8c0f3ebc(ar4,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 24)), FUN_8c0f3ebc(ar4 + 0x170,ar5_00,ar6,ar7));
  ({ unsigned long ri0_ = (unsigned long)((*(le<undefined4>* )(fr0_ - 0x18))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 24)); FUN_8c0fdf10(ar4,ar4 + 0x170,ar6,ar7); });
  ar5_01 = ar4;
  ({ unsigned long ri0_ = (unsigned long)((*(le<undefined4>* )(fr0_ - 0x18))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 24)); FUN_8c0fdf08(ar4 + 0x170,ar4,ar6,ar7); });
  ar6_00 = (vsp = ((unsigned long)(fr0_ - 24)), log_message(ar5,ar5_01,ar6,ar7));
  if (0x1d < ar6_00) {
    ar6_00 = 0x1d;
  }
  (vsp = ((unsigned long)(fr0_ - 24)), FUN_8c0143c0(ar4 + 0x2e0,ar5,ar6_00,ar7));
  *(undefined1 *)(unsigned)(ar4 + ar6_00 + 0x2e1) = 0;
  *(le<undefined4>* )(unsigned)(ar4 + 0x300) = 0;
  return ar4;
}

__asm__(".globl FUN_8c0fde5c\n.set FUN_8c0fde5c, FUN_8c0fde5c_def\n");

}
