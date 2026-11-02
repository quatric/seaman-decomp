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
int s_GRAPHICS_MUSHROOMERLINE_09d9c2_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("s_GRAPHICS_MUSHROOMERLINE_09d9c2");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 ar5_00;
  undefined4 ar6_00;
  undefined4 ar7_00;
  
  ar7_00 = 1;
  ar6_00 = 1;
  ar5_00 = 1;
  ({ unsigned long t0_ = (unsigned long)(0); unsigned long t1_ = (unsigned long)(ar5); unsigned long t2_ = (unsigned long)(0x8c284d90); unsigned long t3_ = (unsigned long)(0x8c284ec0); unsigned long t4_ = (unsigned long)(*(le<undefined4>* )(unsigned)(&(*(undefined1 *)(unsigned)0x8c13aafc))); *(le<unsigned>* )((((unsigned long)(fr0_ - 0)) - 24) + 0) = (unsigned)t0_; *(le<unsigned>* )((((unsigned long)(fr0_ - 0)) - 24) + 4) = (unsigned)t1_; *(le<unsigned>* )((((unsigned long)(fr0_ - 0)) - 24) + 8) = (unsigned)t2_; *(le<unsigned>* )((((unsigned long)(fr0_ - 0)) - 24) + 12) = (unsigned)t3_; *(le<unsigned>* )((((unsigned long)(fr0_ - 0)) - 24) + 16) = (unsigned)t4_; vsp = (((unsigned long)(fr0_ - 0)) - 24); (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c0254d0))))
            (ar4,1,1,1); });
  *(le<unsigned>* )(unsigned)(ar4 + 8) = (&(*(undefined1 *)(unsigned)0x8c12ab2c));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c09f3b4(ar4 + 0x490,ar5_00,ar6_00,ar7_00));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0a0818(ar4 + 0xcc4,ar5_00,ar6_00,ar7_00));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c016fcc(ar4 + 0xf3c,ar5_00,ar6_00,ar7_00));
  ({ unsigned long t0_ = (unsigned long)((&(*(undefined1 *)(unsigned)0x8c13ab90)) + 0x256); *(le<unsigned>* )((((unsigned long)(fr0_ - 0)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 0)) - 8); (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c014334))))
            (ar4 + 0xc,ar5_00,ar6_00,ar7_00); });
  *(le<int>* )(unsigned)(0x308 + ar4) = ar4 + 0x490;
  *(le<int>* )(unsigned)(0x30c + ar4) = ar4 + 0xcc4;
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c0f532c))))
            (ar4,*(le<undefined4>* )(unsigned)(0xb4 + *(le<int>* )(unsigned)(0x328 + ar4)),ar4 + 0xf3c,
             ar7_00));
  *(le<undefined4>* )(unsigned)(0xfd0 + ar4) = 0;
  return ar4;
}

__asm__(".globl s_GRAPHICS_MUSHROOMERLINE_09d9c2\n.set s_GRAPHICS_MUSHROOMERLINE_09d9c2, s_GRAPHICS_MUSHROOMERLINE_09d9c2_def\n");

}
