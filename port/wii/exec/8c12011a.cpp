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
undefined4 FUN_8c12011a_def(int ar4,uint ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c12011a");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  
  iVar1 = (ar5 & 0xff) - (uint)*(le<ushort>* )(unsigned)(ar4 + 10);
  if ((-1 < iVar1) && (iVar1 < (int)(uint)*(le<ushort>* )(unsigned)(ar4 + 8))) {
    return *(le<undefined4>* )(unsigned)(iVar1 * 4 + *(le<int>* )(unsigned)(ar4 + 0xc));
  }
  return 0;
}

__asm__(".globl FUN_8c12011a\n.set FUN_8c12011a, FUN_8c12011a_def\n");

}
