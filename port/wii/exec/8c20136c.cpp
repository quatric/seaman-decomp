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
undefined4 FUN_8c20136c_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c20136c");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int in_r0 = (int)(unsigned long)vin0;
  uint uVar1;
  undefined4 a4;
  uint unaff_r12 = 0;
  uint unaff_r13 = 0;
  int unaff_r14 = 0;
  
  a4 = *(le<undefined4>* )(unsigned)(unaff_r14 + 0x28);
  *(le<undefined4>* )(unsigned)(in_r0 + unaff_r14) = *(le<undefined4>* )(unsigned)(unaff_r14 + 0x38);
  while( true ) {
    if (unaff_r12 <= unaff_r13) {
      return *(le<undefined4>* )(unsigned)(unaff_r14 + 0x34);
    }
    if (*(le<int>* )(unsigned)(unaff_r14 + 0x40) == 0xfffa) break;
    if (*(le<int>* )(unsigned)(unaff_r14 + 0x34) == 0) {
      return 0xffff0000;
    }
    uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c2009d0(a4,*(le<undefined4>* )(unsigned)(unaff_r14 + 0x40),ar6,ar7));
    unaff_r13 = unaff_r13 + 1;
    *(le<uint>* )(unsigned)(unaff_r14 + 0x40) = uVar1 & 0xffff;
    *(le<int>* )(unsigned)(unaff_r14 + 0x34) = *(le<int>* )(unsigned)(unaff_r14 + 0x34) + -1;
  }
  if (*(le<int>* )(unsigned)(unaff_r14 + 0x34) != 0) {
    return 0xffff0000;
  }
  return 0;
}

__asm__(".globl FUN_8c20136c\n.set FUN_8c20136c, FUN_8c20136c_def\n");

}
