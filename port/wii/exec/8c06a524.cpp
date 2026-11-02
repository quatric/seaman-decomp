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
undefined4 FUN_8c06a524_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c06a524");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  
  *(le<undefined4>* )(unsigned)0x8c280998 = 0;
  *(le<undefined4>* )(unsigned)0x8c28099c = 0;
  *(le<undefined4>* )(unsigned)0x8c2809a0 = 0;
  *(le<undefined4>* )(unsigned)0x8c2809a4 = 0;
  *(le<undefined4>* )(unsigned)0x8c2809a8 = 0;
  for (iVar1 = 0; iVar1 < 7; iVar1 = iVar1 + 1) {
    *(le<undefined4>* )(unsigned)(0x8c2809b8 + iVar1 * 8) = 0;
    *(le<undefined4>* )(unsigned)(iVar1 * 8 + 0x8c2809b8 + 4) = 0;
  }
  for (iVar1 = 0; iVar1 < 6; iVar1 = iVar1 + 1) {
    *(le<undefined4>* )(unsigned)(0x8c2809fc + iVar1 * 8) = 0;
    *(le<undefined4>* )(unsigned)(iVar1 * 8 + 0x8c2809fc + 4) = 0;
  }
  for (iVar1 = 0; iVar1 < 6; iVar1 = iVar1 + 1) {
    *(le<undefined4>* )(unsigned)(0x8c280a38 + iVar1 * 8) = 0;
    *(le<undefined4>* )(unsigned)(iVar1 * 8 + 0x8c280a38 + 4) = 0;
  }
  return 6;
}

__asm__(".globl FUN_8c06a524\n.set FUN_8c06a524, FUN_8c06a524_def\n");

}
