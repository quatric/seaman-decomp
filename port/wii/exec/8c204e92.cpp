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
undefined4 FUN_8c204e92_def(le<int>* ar4,le<int>* ar5,int ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c204e92");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 in_r0 = (undefined4)(unsigned long)vin0;
  int iVar1;
  
  if (*ar4 == 0) {
    *(le<undefined4>* )(unsigned)(ar6 + 4) = 0;
    *(le<undefined4>* )(unsigned)(ar6 + 8) = 0;
    *ar4 = ar6;
    *ar5 = ar6;
  }
  else {
    iVar1 = *ar4;
    *(le<undefined4>* )(unsigned)(ar6 + 4) = *(le<undefined4>* )(unsigned)(iVar1 + 4);
    *(le<int>* )(unsigned)(ar6 + 8) = *ar4;
    *(le<int>* )(unsigned)(iVar1 + 4) = ar6;
    *ar4 = ar6;
  }
  return in_r0 = 0;
}

__asm__(".globl FUN_8c204e92\n.set FUN_8c204e92, FUN_8c204e92_def\n");

}
