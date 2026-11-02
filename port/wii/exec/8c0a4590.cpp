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
int s_GRAPHICS_SPIDERLINE_0a4592_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("s_GRAPHICS_SPIDERLINE_0a4592");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 ar5_00;
  undefined4 ar6_00;
  undefined4 ar7_00;
  
  ar7_00 = 0x18;
  ar6_00 = 1;
  ar5_00 = 0xd;
  ({ unsigned long t0_ = (unsigned long)(1); unsigned long t1_ = (unsigned long)(ar5); unsigned long t2_ = (unsigned long)(0x8c285370); unsigned long t3_ = (unsigned long)(0x8c2854a0); unsigned long t4_ = (unsigned long)(*(le<undefined4>* )(unsigned)(&(*(undefined1 *)(unsigned)0x8c13b08c))); *(le<unsigned>* )((((unsigned long)(fr0_ - 0)) - 24) + 0) = (unsigned)t0_; *(le<unsigned>* )((((unsigned long)(fr0_ - 0)) - 24) + 4) = (unsigned)t1_; *(le<unsigned>* )((((unsigned long)(fr0_ - 0)) - 24) + 8) = (unsigned)t2_; *(le<unsigned>* )((((unsigned long)(fr0_ - 0)) - 24) + 12) = (unsigned)t3_; *(le<unsigned>* )((((unsigned long)(fr0_ - 0)) - 24) + 16) = (unsigned)t4_; vsp = (((unsigned long)(fr0_ - 0)) - 24); (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c0254d0))))
            (ar4,0xd,1,0x18); });
  *(le<unsigned>* )(unsigned)(ar4 + 8) = (&(*(undefined1 *)(unsigned)0x8c12aeec));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0ab760(ar4 + 0x490,ar5_00,ar6_00,ar7_00));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0a6164(ar4 + 0x53c,ar5_00,ar6_00,ar7_00));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c016fcc(ar4 + 0x26fc,ar5_00,ar6_00,ar7_00));
  ({ unsigned long t0_ = (unsigned long)((&(*(undefined1 *)(unsigned)0x8c13b100)) + 0xe1); *(le<unsigned>* )((((unsigned long)(fr0_ - 0)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 0)) - 8); (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c014334))))
            (ar4 + 0xc,ar5_00,ar6_00,ar7_00); });
  *(le<int>* )(unsigned)(0x308 + ar4) = ar4 + 0x490;
  *(le<int>* )(unsigned)(0x30c + ar4) = ar4 + 0x53c;
  *(le<uint>* )(unsigned)(ar4 + 0x74) = *(le<uint>* )(unsigned)(ar4 + 0x74) | 0x40;
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c0f532c))))
            (ar4,*(le<undefined4>* )(unsigned)(0xb4 + *(le<int>* )(unsigned)(0x328 + ar4)),ar4 + 0x26fc,
             ar7_00));
  return ar4;
}

__asm__(".globl s_GRAPHICS_SPIDERLINE_0a4592\n.set s_GRAPHICS_SPIDERLINE_0a4592, s_GRAPHICS_SPIDERLINE_0a4592_def\n");

}
