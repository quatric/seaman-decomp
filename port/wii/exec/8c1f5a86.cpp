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
undefined4 FUN_8c1f5a86_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c1f5a86");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 12; for (int i_ = 0; i_ < 12; i_++) z_[i_] = 0; }
  le<int>* piVar1;
  int iVar2;
  
  piVar1 = (le<int>* )(unsigned)(vsp = ((unsigned long)(fr0_ - 12)), FUN_8c1f5a5e(((undefined1 *)(fr0_ - 0x8)),ar5,ar6,ar7));
  iVar2 = 0;
  while( true ) {
    if (*piVar1 <= iVar2) {
      return 0xfffffffd;
    }
    if (ar4 == piVar1[iVar2 * 2 + 2]) break;
    iVar2 = iVar2 + 1;
  }
  return iVar2;
}

__asm__(".globl FUN_8c1f5a86\n.set FUN_8c1f5a86, FUN_8c1f5a86_def\n");

}
