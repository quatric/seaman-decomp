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
undefined4 FUN_8c0e8ae0_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0e8ae0");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;
  undefined4 s0 = *(le<undefined4>* )(vsp + 0);

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 32; for (int i_ = 0; i_ < 32; i_++) z_[i_] = 0; }
  undefined4 ar6_00;
  int iVar1;
  int iVar2;
  
  ar6_00 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 32)), FUN_8c10273c(&(*(le<undefined2>* )(fr0_ - 0x1c)),0xffffffff,0xffffffff,ar7));
  iVar1 = 0;
  do {
    if (2 < iVar1) {
LAB_8c0e8b40:
      (vsp = ((unsigned long)(fr0_ - 32)), FUN_8c0e84c8(s0,&(*(le<undefined2>* )(fr0_ - 0x1c)),ar6_00,ar7));
      (vsp = ((unsigned long)(fr0_ - 32)), free_if_nonnull_wrap_016660(&(*(le<undefined2>* )(fr0_ - 0x1c)),0xffffffff,ar6_00,ar7));
      return 0;
    }
    for (iVar2 = 0; iVar2 < 4; iVar2 = iVar2 + 1) {
      (*(le<int>* )(fr0_ - 0x18)) = iVar2;
      (*(le<int>* )(fr0_ - 0x14)) = iVar1;
      if (*(le<int>* )(unsigned)(0xa4 + ar4 + iVar1 * 0x80 + iVar2 * 0x20) == 0) {
        (*(le<undefined2>* )(fr0_ - 0x1c)) = (undefined2)iVar2;
        (*(le<undefined2>* )(fr0_ - 0x1a)) = (undefined2)iVar1;
        goto LAB_8c0e8b40;
      }
    }
    iVar1 = iVar1 + 1;
  } while( true );
}

__asm__(".globl FUN_8c0e8ae0\n.set FUN_8c0e8ae0, FUN_8c0e8ae0_def\n");

}
