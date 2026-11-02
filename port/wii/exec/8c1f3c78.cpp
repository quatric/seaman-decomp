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
undefined4 FUN_8c1f3c78_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c1f3c78");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 4; for (int i_ = 0; i_ < 4; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c1f3d28(ar4,ar5,ar6,ar7));
  if (iVar1 == 0) {
    uVar2 = 0xfffffffe;
  }
  else {
    (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c1f3d9c((uint)(byte)(((undefined1 *)(unsigned)0x8c26c684))[ar4] * 0xc0 + -0x73b8f048,ar5,ar6,ar7));
    iVar1 = (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c1efeac(ar4,4,0,0));
    if (iVar1 < 0) {
      uVar2 = 0xffffffff;
    }
    else {
      uVar2 = 0;
    }
  }
  return uVar2;
}

__asm__(".globl FUN_8c1f3c78\n.set FUN_8c1f3c78, FUN_8c1f3c78_def\n");

}
