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
undefined4
s_FATAL_ERROR_Cannot_get_semap_1f0446_def(undefined4 ar4,undefined4 ar5,int ar6,undefined4 ar7)

{
  TRACE_ENTER("s_FATAL_ERROR_Cannot_get_semap_1f0446");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 4; for (int i_ = 0; i_ < 4; i_++) z_[i_] = 0; }
  byte bVar1;
  le<int>* piVar2;
  int a6;
  undefined4 a4;
  undefined4 a5;
  
  bVar1 = *((byte *)(unsigned long)*(le<unsigned>* )(unsigned)(&(*(undefined1 *)(unsigned)0x8c1f5a28)));
  *((byte *)(unsigned long)*(le<unsigned>* )(unsigned)(&(*(undefined1 *)(unsigned)0x8c1f5a28))) = bVar1 | 0x80;
  if (bVar1 != 0) {
    ({ unsigned long t0_ = (unsigned long)((&(*(undefined1 *)(unsigned)0x8c26bfb0))); unsigned long t1_ = (unsigned long)(ar4); *(le<unsigned>* )((((unsigned long)(fr0_ - 4)) - 8) + 0) = (unsigned)t0_; *(le<unsigned>* )((((unsigned long)(fr0_ - 4)) - 8) + 4) = (unsigned)t1_; vsp = (((unsigned long)(fr0_ - 4)) - 8); FUN_8c1f4570(ar4,ar5,ar6,ar7); })
    ;
    return 0xfffffffe;
  }
  a5 = ar5;
  a4 = ar4;
  a6 = (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c1f55e4(ar4,ar5,ar6,ar7));
  if (0 < a6) {
    ar6 = a6;
    (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c1f0420(a4,ar5,a6,ar7));
    ar4 = a4;
    a5 = ar5;
  }
  piVar2 = 0x8c4727b4;
  *((undefined1 *)(unsigned long)*(le<unsigned>* )(unsigned)(&(*(undefined1 *)(unsigned)0x8c1f5a28))) = 0;
  if (*(le<int>* )(unsigned)((int)0x10e8 + *piVar2) != 0) {
    (vsp = ((unsigned long)(fr0_ - 4)), pvr_1efaf4(ar4,a5,ar6,ar7));
  }
  return a6;
}

__asm__(".globl s_FATAL_ERROR_Cannot_get_semap_1f0446\n.set s_FATAL_ERROR_Cannot_get_semap_1f0446, s_FATAL_ERROR_Cannot_get_semap_1f0446_def\n");

}
