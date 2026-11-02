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
undefined4 FUN_8c1f0d34_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c1f0d34");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 4; for (int i_ = 0; i_ < 4; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = *(le<int>* )(unsigned)(ar4 + 0x24);
  if (iVar1 == 0) {
    iVar1 = (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c1f0c14(ar4,ar5,ar6,ar7));
    if (iVar1 != -10) {
      return iVar1;
    }
    uVar2 = 1;
  }
  else {
    if (iVar1 != 1) {
      if (iVar1 != 2) {
        return 0xfffffffe;
      }
      uVar2 = (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c1f0b58(ar4,ar5,ar6,ar7));
      return uVar2;
    }
    iVar1 = (vsp = ((unsigned long)(fr0_ - 4)), syscall_1f98ec(*(le<undefined4>* )(unsigned)(ar4 + 4),vr5,vr6,vr7));
    if (iVar1 == -1) {
      return 0xfffffffd;
    }
    uVar2 = 2;
  }
  *(le<undefined4>* )(unsigned)(ar4 + 0x24) = uVar2;
  return 1;
}

__asm__(".globl FUN_8c1f0d34\n.set FUN_8c1f0d34, FUN_8c1f0d34_def\n");

}
