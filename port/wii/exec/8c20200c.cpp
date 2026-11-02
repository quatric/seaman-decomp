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
undefined4 FUN_8c20200c_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c20200c");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 4; for (int i_ = 0; i_ < 4; i_++) z_[i_] = 0; }
  uint uVar1;
  undefined4 uVar2;
  
  uVar1 = (uint)*(byte *)(unsigned)(*(le<int>* )(unsigned)(ar5 + 8) + 0xb);
  uVar2 = 0;
  if (((*(char *)(unsigned)(ar5 + 4) == '\b') && (uVar1 == 0)) && (*(le<int>* )(unsigned)(ar4 + 0x34) == 0)) {
    uVar2 = 0xffffffff;
  }
  *(le<uint>* )(unsigned)(ar4 + 0x34) = uVar1;
  return uVar2;
}

__asm__(".globl FUN_8c20200c\n.set FUN_8c20200c, FUN_8c20200c_def\n");

}
