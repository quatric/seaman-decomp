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
undefined4 CAnimBody_CheckThisMotionData_def(int ar4,undefined1 *ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("CAnimBody_CheckThisMotionData");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 28; for (int i_ = 0; i_ < 28; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  undefined1 *ar5_00;
  
  ar5_00 = ar5;
  (*(le<unsigned>* )(fr0_ - 0x10) = (unsigned)(unsigned long)(ar5));
  (*(le<int>* )(fr0_ - 0x8)) = (vsp = ((unsigned long)(fr0_ - 28)), deref_u32(*(le<int>* )(unsigned)(ar4 + 0x14) + (int)ar5 * 4,ar5,ar6,ar7));
  if ((*(le<int>* )(fr0_ - 0x8)) == 0) {
    ({ unsigned long t0_ = (unsigned long)((&(*(undefined1 *)(unsigned)0x8c132c08)) + 0x82); *(le<unsigned>* )((((unsigned long)(fr0_ - 28)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 28)) - 8); (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c014334))))
              (((undefined1 *)(fr0_ - 0x1c)),ar5_00,ar6,ar7); });
    ar7 = 2;
    ar6 = 1;
    ar5_00 = ((undefined1 *)(fr0_ - 0x1c));
    (vsp = ((unsigned long)(fr0_ - 28)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c102828))))
              ((&(*(undefined1 *)(unsigned)0x8c132c08)) + 0x85,ar5_00,1,2));
  }
  (*(le<unsigned>* )(fr0_ - 0x14) = (unsigned)(unsigned long)(ar5));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 28)), FUN_8c031588(*(le<int>* )(unsigned)(ar4 + 0x14) + (int)ar5 * 4,ar5_00,ar6,ar7));
  return uVar1;
}

__asm__(".globl CAnimBody_CheckThisMotionData\n.set CAnimBody_CheckThisMotionData, CAnimBody_CheckThisMotionData_def\n");

}
