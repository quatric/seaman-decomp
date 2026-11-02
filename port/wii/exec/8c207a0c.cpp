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
undefined4 s_KAMUI_207a0e_def(uint ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("s_KAMUI_207a0e");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  char *ar4_00;
  char *ar5_00;
  uint ar6_00;
  
  (vsp = ((unsigned long)(fr0_ - 0)), s_r_nCOPYRIGHT_C_NEC_Corporati_205e72(ar4,ar5,ar6,ar7));
  if (((int)ar4 < 3) && (-1 < (int)ar4)) {
    ar4_00 = ((undefined1 *)(unsigned)0x8c26d3a8);
    ar5_00 = ((undefined1 *)(unsigned)0x8c26d3b0);
    ar6_00 = ar4 & 3;
    (*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9bc8) = (vsp = ((unsigned long)(fr0_ - 0)), s_HARDWARE_205e00(((undefined1 *)(unsigned)0x8c26d3a8),((undefined1 *)(unsigned)0x8c26d3b0),ar6_00,ar7));
    (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c206162(ar4_00,ar5_00,ar6_00,ar7));
    return 0;
  }
  return 2;
}

__asm__(".globl s_KAMUI_207a0e\n.set s_KAMUI_207a0e, s_KAMUI_207a0e_def\n");

}
