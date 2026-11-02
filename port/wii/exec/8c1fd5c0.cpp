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
FUN_8c1fd5c0_def(undefined4 ar4,uint ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c1fd5c0");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;
  undefined4 s0 = *(le<undefined4>* )(vsp + 0);
  undefined4 s4 = *(le<undefined4>* )(vsp + 4);
  undefined4 s8 = *(le<undefined4>* )(vsp + 8);
  undefined4 s12 = *(le<undefined4>* )(vsp + 12);

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  le<undefined4>* ar6_00;
  
  if ((ar5 & (uint)&s8) == 0) {
    ar6_00 = (le<unsigned int>*)(&s8);
  }
  else {
    ar6_00 = (le<unsigned int>*)(&s12);
  }
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), vsprintf_like(0x8c47e2ec,s4,ar6_00,ar7));
  if (((le<undefined4>* )(unsigned long)*(le<unsigned>* )0x8c273a50) != (code *)0x0) {
    uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(*(le<unsigned>* )0x8c273a50)))(0x8c47e2ec,s4,ar6_00,ar7));
  }
  return uVar1;
}

__asm__(".globl FUN_8c1fd5c0\n.set FUN_8c1fd5c0, FUN_8c1fd5c0_def\n");

}
