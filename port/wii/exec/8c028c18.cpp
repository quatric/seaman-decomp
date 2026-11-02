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
undefined4 s_Failed_wrap_028c18_def(int ar4,undefined4 ar5,int ar6,undefined4 ar7)

{
  TRACE_ENTER("s_Failed_wrap_028c18");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = *(le<int>* )(unsigned)(0x328 + ar4) + ar6 * 0x124;
  (vsp = ((unsigned long)(fr0_ - 0)), s_Failed_s_015312(iVar2 + 0x78,ar5,ar6,ar7));
  if (*(le<int>* )(unsigned)(iVar2 + 0x34) != 0) {
    (vsp = ((unsigned long)(fr0_ - 0)), s_Failed_s_015312(iVar2 + 0x80,ar5,ar6,ar7));
  }
  uVar1 = 0;
  if (*(le<int>* )(unsigned)(iVar2 + 0x10) != 0) {
    (vsp = ((unsigned long)(fr0_ - 0)), s_Failed_s_015312(iVar2 + 0x88,ar5,ar6,ar7));
    uVar1 = 0;
    if (*(le<int>* )(unsigned)(iVar2 + 0x5c) != 0) {
      uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), s_Failed_s_015312(iVar2 + 0x90,ar5,ar6,ar7));
    }
  }
  return uVar1;
}

__asm__(".globl s_Failed_wrap_028c18\n.set s_Failed_wrap_028c18, s_Failed_wrap_028c18_def\n");

}
