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
undefined4 FUN_8c1f804e_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c1f804e");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 uVar2;
  int ar5_00;
  
  if (ar4 == 0) {
    return 0;
  }
  uVar2 = 0;
  (vsp = ((unsigned long)(fr0_ - 0)), syscall_1f3b1c(0,ar5,ar6,ar7));
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), syscall_1f3b44(uVar2,ar5,ar6,ar7));
  uVar2 = 6;
  ar5_00 = iVar1 + 2;
  (vsp = ((unsigned long)(fr0_ - 0)), memmove(ar4,ar5_00,6,ar7));
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c1f80d0(iVar1,ar5_00,uVar2,ar7));
  if (iVar1 == 0) {
    uVar2 = 2;
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}

__asm__(".globl FUN_8c1f804e\n.set FUN_8c1f804e, FUN_8c1f804e_def\n");

}
