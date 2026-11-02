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
undefined4
Class_12ad50_m5_0a5328_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("Class_12ad50_m5_0a5328");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;
  undefined4 s0 = *(le<undefined4>* )(vsp + 0);

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 8; for (int i_ = 0; i_ < 8; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = -0x7d0;
  *(le<undefined4>* )(unsigned)((int)&(*(le<undefined4>* )(fr0_ - 0x4)) + iVar1) = ar4;
  (vsp = ((unsigned long)(fr0_ - 8)), FUN_8c0b7a54((int)&s0 + iVar1,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 8)), FUN_8c0294c0(*(le<undefined4>* )(unsigned)((int)&(*(le<undefined4>* )(fr0_ - 0x4)) + iVar1),(int)&s0 + iVar1,ar6,ar7));
  uVar2 = (vsp = ((unsigned long)(fr0_ - 8)), FUN_8c068818((int)&s0 + iVar1,0xffffffff,ar6,ar7));
  return uVar2;
}

__asm__(".globl Class_12ad50_m5_0a5328\n.set Class_12ad50_m5_0a5328, Class_12ad50_m5_0a5328_def\n");

}
