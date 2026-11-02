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
int FUN_8c11b666_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c11b666");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  int iVar2;
  
  iVar1 = ({ unsigned long t0_ = (unsigned long)(((void *)(unsigned)0x8c11af7e)); unsigned long t1_ = (unsigned long)((&(*(undefined1 *)(unsigned)0x8c11494a))); unsigned long t2_ = (unsigned long)(((void *)(unsigned)0x8c11b13e)); unsigned long t3_ = (unsigned long)(
                     (int)0x1ec); *(le<unsigned>* )((((unsigned long)(fr0_ - 0)) - 16) + 0) = (unsigned)t0_; *(le<unsigned>* )((((unsigned long)(fr0_ - 0)) - 16) + 4) = (unsigned)t1_; *(le<unsigned>* )((((unsigned long)(fr0_ - 0)) - 16) + 8) = (unsigned)t2_; *(le<unsigned>* )((((unsigned long)(fr0_ - 0)) - 16) + 12) = (unsigned)t3_; vsp = (((unsigned long)(fr0_ - 0)) - 16); (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c120580))))
                    (ar4,ar5,ar7,ar7); });
  if (iVar1 != 0) {
    iVar2 = (int)0x1a8;
    *(le<unsigned>* )(unsigned)(iVar2 + iVar1) = ((void *)(unsigned)0x8c11346c);
    *(le<undefined4>* )(unsigned)(iVar2 + -4 + iVar1) = 0;
  }
  return iVar1;
}

__asm__(".globl FUN_8c11b666\n.set FUN_8c11b666, FUN_8c11b666_def\n");

}
