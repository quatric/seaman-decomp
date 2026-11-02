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
undefined4 FUN_8c25603a_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c25603a");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  le<undefined4>* puVar1;
  undefined4 uVar2;
  
  puVar1 = 0x8c4ab138;
  *(le<undefined4>* )(unsigned)0x8c4ab13c = ar4;
  if (ar4 == 0) {
    uVar2 = 0;
  }
  else if (ar4 == 1) {
    uVar2 = 1;
  }
  else if (ar4 == 2) {
    uVar2 = 2;
  }
  else {
    if (ar4 == 6) {
      uVar2 = 3;
      *puVar1 = 0x20;
      goto LAB_8c256072;
    }
    uVar2 = 0;
  }
  *puVar1 = 0x10;
LAB_8c256072:
  uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c20a280(uVar2,vr5,vr6,vr7));
  return uVar2;
}

__asm__(".globl FUN_8c25603a\n.set FUN_8c25603a, FUN_8c25603a_def\n");

}
