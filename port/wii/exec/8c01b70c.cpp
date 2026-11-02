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
int FUN_8c01b70c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c01b70c");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c01ab78(ar4,0,ar5,ar7));
  if (iVar1 < 0) {
    iVar1 = -1;
  }
  else {
    iVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c01b5ac(ar4,ar6,ar5,ar7));
    iVar3 = (vsp = ((unsigned long)(fr0_ - 0)), malloc_thunk(iVar2 << 9,ar6,ar5,ar7));
    if (iVar3 == 0) {
      iVar1 = -1;
    }
    else {
      *(le<int>* )(unsigned)(0x246c + iVar1 * 0x28 + ar4) = iVar2;
      *(le<int>* )(unsigned)(0x2470 + iVar1 * 0x28 + ar4) = iVar3;
    }
  }
  return iVar1;
}

__asm__(".globl FUN_8c01b70c\n.set FUN_8c01b70c, FUN_8c01b70c_def\n");

}
