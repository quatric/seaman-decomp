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
uint FUN_8c0f824c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0f824c");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c0fa944))))
                    (ar4 + 0x1054,ar4 + 0x1010,*(le<undefined4>* )(unsigned)(0x89138 + ar4),ar7));
  if (iVar1 == 0) {
    *(le<undefined4>* )(unsigned)(0x89138 + ar4) = 0;
    *(le<undefined4>* )(unsigned)(0x89134 + ar4) = 0;
  }
  return (uint)(iVar1 != 0);
}

__asm__(".globl FUN_8c0f824c\n.set FUN_8c0f824c, FUN_8c0f824c_def\n");

}
