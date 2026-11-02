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
undefined4 s_SEAMANDC_USR_0c2326_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("s_SEAMANDC_USR_0c2326");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 ar4_00;
  
  ar4_00 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c01f520(0x8c3dd7dc,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c01bb00(ar4_00,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x69,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c01bb00(ar4_00,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x76,ar6,ar7));
  return 4;
}

__asm__(".globl s_SEAMANDC_USR_0c2326\n.set s_SEAMANDC_USR_0c2326, s_SEAMANDC_USR_0c2326_def\n");

}
