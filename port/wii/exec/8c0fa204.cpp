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
undefined4 s_CHAPTER_02d_0fa206_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("s_CHAPTER_02d_0fa206");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 ar6_00;
  
  ar6_00 = ar6;
  ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(unsigned)0x8c140bbd)); *(le<unsigned>* )((((unsigned long)(fr0_ - 0)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 0)) - 8); FUN_8c014334(*(le<undefined4>* )(unsigned)(ar4 + 0x1050),ar5,ar6,ar7); });
  ({ unsigned long ri0_ = (unsigned long)(ar5); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); strcpy(*(le<int>* )(unsigned)(ar4 + 0x1050) + 0x20,*(le<undefined4>* )(unsigned)(ar4 + 0x1050),ar6_00,ar7); });
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c01437c(*(le<int>* )(unsigned)(ar4 + 0x1050) + 0x20,((undefined1 *)(unsigned)0x8c140bc9),ar6_00,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c01437c(*(le<int>* )(unsigned)(ar4 + 0x1050) + 0x20,ar6,ar6_00,ar7));
  ({ unsigned long ri0_ = (unsigned long)(ar5); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); strcpy(*(le<int>* )(unsigned)(ar4 + 0x1050) + 0x40,((undefined1 *)(unsigned)0x8c1408e9),ar6_00,ar7); });
  *(le<undefined4>* )(unsigned)(*(le<int>* )(unsigned)(ar4 + 0x1050) + 0x70) = 0;
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0fda28(ar4 + 0x1054,0,ar6_00,ar7));
  *(le<undefined4>* )(unsigned)(ar4 + 0x89130) = 3;
  return 0x89130;
}

__asm__(".globl s_CHAPTER_02d_0fa206\n.set s_CHAPTER_02d_0fa206, s_CHAPTER_02d_0fa206_def\n");

}
