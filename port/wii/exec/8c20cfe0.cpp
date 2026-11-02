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
undefined4 FUN_8c20cfe0_def(le<int>* ar4,le<undefined4>* ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c20cfe0");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 28; for (int i_ = 0; i_ < 28; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  (*(le<unsigned>* )(fr0_ - 0xc) = (unsigned)(unsigned long)(ar5));
  (*(le<unsigned>* )(fr0_ - 0x8) = (unsigned)(unsigned long)(ar4));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 28)), FUN_8c203de0(&(*(le<int>* )(fr0_ - 0x1c)),&(*(le<int>* )(fr0_ - 0x18)),&(*(le<int>* )(fr0_ - 0x14)),&(*(le<undefined4>* )(fr0_ - 0x10))));
  *((le<int>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0x8)) = (*(le<int>* )(fr0_ - 0x1c)) + (*(le<int>* )(fr0_ - 0x18)) + (*(le<int>* )(fr0_ - 0x14));
  *((le<undefined4>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0xc)) = (*(le<undefined4>* )(fr0_ - 0x10));
  return uVar1;
}

__asm__(".globl FUN_8c20cfe0\n.set FUN_8c20cfe0, FUN_8c20cfe0_def\n");

}
