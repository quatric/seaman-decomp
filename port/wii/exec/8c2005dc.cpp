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
undefined4 FUN_8c2005dc_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c2005dc");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 4; for (int i_ = 0; i_ < 4; i_++) z_[i_] = 0; }
  int in_r3 = 0;
  int a6;
  byte *a4;
  int iVar1;
  int in_MACL = 0;
  
  a6 = in_MACL + in_r3;
  a4 = ((byte *)(unsigned long)*(le<unsigned>* )(unsigned)(a6 + 0x28));
  iVar1 = 0;
  while( true ) {
    if (*(le<int>* )(unsigned)(*(le<int>* )(unsigned)(a6 + 0x1c) + 0x30) <= iVar1) {
      return 0xffffffff;
    }
    if ((uint)*a4 == (int)0xcc) break;
    a4 = a4 + 0x20;
    iVar1 = iVar1 + 1;
  }
  (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c2004ea(a4,ar5,a6,(uint)*a4));
  return iVar1;
}

__asm__(".globl FUN_8c2005dc\n.set FUN_8c2005dc, FUN_8c2005dc_def\n");

}
