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
undefined4 FUN_8c0d512c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0d512c");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 4; for (int i_ = 0; i_ < 4; i_++) z_[i_] = 0; }
  int iVar1;
  
  (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c022104(0x8c2b59d0,*(le<undefined4>* )(unsigned)(0x5e4 + ar4),ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c0220bc(0x8c2b59d0,*(le<undefined4>* )(unsigned)(0x5e4 + ar4),ar6,ar7));
  for (iVar1 = 0; iVar1 < 2; iVar1 = iVar1 + 1) {
    if (*(le<int>* )(unsigned)(0x600 + iVar1 * 0x18 + ar4) != -1) {
      (vsp = ((unsigned long)(fr0_ - 4)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c021a60))))
                (0x8c2b59d0,*(le<undefined4>* )(unsigned)(0x600 + iVar1 * 0x18 + ar4),ar6,ar7));
      (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c021a8c(0x8c2b59d0,iVar1 * 0x18 + ar4 + 0x600,ar6,ar7));
      *(le<undefined4>* )(unsigned)(0x600 + iVar1 * 0x18 + ar4) = 0xffffffff;
    }
  }
  return 2;
}

__asm__(".globl FUN_8c0d512c\n.set FUN_8c0d512c, FUN_8c0d512c_def\n");

}
