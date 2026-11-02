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
int FUN_8c0e6c00_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0e6c00");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 uVar2;
  
  (vsp = ((unsigned long)(fr0_ - 0)), s_64_JUNGLE_NIGHT_0e7062(ar4,*(le<undefined4>* )(unsigned)(0x10dc + ar4),ar6,ar7));
  iVar1 = *(le<int>* )(unsigned)(0x83fc + ar4);
  if (iVar1 == -1) {
    uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c022068))))
                      (0x8c2b59d0,*(le<undefined4>* )(unsigned)(0x83f8 + ar4),ar6,ar7));
    iVar1 = 0x83fc;
    *(le<undefined4>* )(unsigned)(0x83fc + ar4) = uVar2;
  }
  return iVar1;
}

__asm__(".globl FUN_8c0e6c00\n.set FUN_8c0e6c00, FUN_8c0e6c00_def\n");

}
