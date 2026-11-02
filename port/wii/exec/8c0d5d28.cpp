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
undefined4 FUN_8c0d5d28_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0d5d28");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  if (*(char *)(unsigned)(0x8c437840 + 2) == '2') {
    (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c233dac((&(*(undefined1 *)(unsigned)0x8c13f51c)),ar5,ar6,ar7));
  }
  else {
    (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c233dac((&(*(undefined1 *)(unsigned)0x8c13f50c)),ar5,ar6,ar7));
  }
  for (iVar3 = 0; iVar3 < 0x226; iVar3 = iVar3 + 1) {
    iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c0d5ca0))))
                      (iVar3 * 0x88 + ar4 + 0x62c,ar5,ar6,ar7));
    if (iVar1 == 1) {
      ar5 = ar4 + 0x12a5c;
      (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0d2c84(iVar3 * 0x88 + ar4 + 0x62c,ar5,ar6,ar7));
    }
  }
  uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c233dac((&(*(undefined1 *)(unsigned)0x8c13f320)),ar5,ar6,ar7));
  return uVar2;
}

__asm__(".globl FUN_8c0d5d28\n.set FUN_8c0d5d28, FUN_8c0d5d28_def\n");

}
