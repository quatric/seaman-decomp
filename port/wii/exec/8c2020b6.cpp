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
uint FUN_8c2020b6_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c2020b6");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  uint uVar2;
  
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c1efd14(*(le<undefined4>* )(unsigned)(ar4 + 0x24),vr5,vr6,vr7));
  uVar2 = (uint)*(byte *)(unsigned)(iVar1 + 4);
  if ((uVar2 == 8) && (uVar2 = *(byte *)(unsigned)(*(le<int>* )(unsigned)(iVar1 + 8) + 8) >> 6 & 1, uVar2 == 1)) {
    *(le<undefined4>* )(unsigned)(ar4 + 0x38) = 1;
  }
  else {
    *(le<undefined4>* )(unsigned)(ar4 + 0x38) = 0;
  }
  return uVar2;
}

__asm__(".globl FUN_8c2020b6\n.set FUN_8c2020b6, FUN_8c2020b6_def\n");

}
