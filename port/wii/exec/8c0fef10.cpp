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
undefined4 FUN_8c0fef10_def(int ar4,le<undefined4>* ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0fef10");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 12; for (int i_ = 0; i_ < 12; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 uVar2;
  
  ((le<undefined4>* )(fr0_ - 0xc))[0] = 0;
  while( true ) {
    iVar1 = (vsp = ((unsigned long)(fr0_ - 12)), get_field_48_0feea8(ar4,ar5,ar6,ar7));
    if (iVar1 == 0) break;
    iVar1 = (vsp = ((unsigned long)(fr0_ - 12)), get_field_48_0feea8(ar4,ar5,ar6,ar7));
    ((le<undefined4>* )(fr0_ - 0xc))[0] = (vsp = ((unsigned long)(fr0_ - 12)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c0fea2c))))
                             (ar4,iVar1 + -1,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 12)), s_CItemGLoadRequestList_TakeOu_0fe960(ar4,((le<undefined4>* )(fr0_ - 0xc))[0],ar6,ar7));
    ar5 = ((le<undefined4>* )(fr0_ - 0xc));
    (vsp = ((unsigned long)(fr0_ - 12)), FUN_8c0fed08(ar4 + 0x4c,ar5,ar6,ar7));
  }
  uVar2 = (vsp = ((unsigned long)(fr0_ - 12)), FUN_8c0feab8(ar4,ar5,ar6,ar7));
  return uVar2;
}

__asm__(".globl FUN_8c0fef10\n.set FUN_8c0fef10, FUN_8c0fef10_def\n");

}
