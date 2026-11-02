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
undefined4 FUN_8c01e04c_def(undefined4 ar4,le<int>* ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c01e04c");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  int iVar2;
  
  *ar5 = *(le<undefined4>* )(unsigned)0x8c27928c;
  for (iVar2 = 0; iVar2 < 0x100; iVar2 = iVar2 + 1) {
    *(undefined1 *)(unsigned)((int)ar5 + iVar2 + 4) = 0;
  }
  uVar1 = 0;
  if (*(le<undefined4>* )(unsigned)0x8c27928c != 0) {
    uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), memmove(ar5 + 1,*(le<undefined4>* )(unsigned)0x8c279288,*(le<undefined4>* )(unsigned)0x8c27928c,ar7));
  }
  return uVar1;
}

__asm__(".globl FUN_8c01e04c\n.set FUN_8c01e04c, FUN_8c01e04c_def\n");

}
