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
int FUN_8c01a900_def(le<int>* ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c01a900");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  int iVar2;
  
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c1fc5c4(*(le<undefined4>* )(unsigned)0x8c2791b4,ar5,ar6,ar7));
  if (iVar1 == -1) {
    iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c01c92c(ar4,ar5,ar6,ar7));
  }
  else {
    iVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c1fc5de(*(le<undefined4>* )(unsigned)0x8c2791b4,ar5,ar6,ar7));
    iVar1 = 0x2450;
    if (iVar2 == 0) {
      *(le<undefined4>* )(unsigned)((int)ar4 + 0x2450 + *ar4 * 0x28) = 1;
    }
    else {
      *(le<undefined4>* )(unsigned)((int)ar4 + 0x2450 + *ar4 * 0x28) = 0;
    }
  }
  return iVar1;
}

__asm__(".globl FUN_8c01a900\n.set FUN_8c01a900, FUN_8c01a900_def\n");

}
