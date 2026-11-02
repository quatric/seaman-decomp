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
undefined4 FUN_8c26b092_def(int ar4,int ar5,le<int>* ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c26b092");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 80; for (int i_ = 0; i_ < 80; i_++) z_[i_] = 0; }
  int iVar1;
  le<int>* piVar2;
  int ar5_00;
  int iVar3;
  
  ar5_00 = ar5;
  (*(le<unsigned>* )(fr0_ - 0x20) = (unsigned)(unsigned long)(ar6));
  (vsp = ((unsigned long)(fr0_ - 80)), FUN_8c265ab0(&(*(le<undefined4>* )(fr0_ - 0x24)),ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 80)), FUN_8c265f84(0,ar5_00,ar6,ar7));
  iVar1 = (vsp = ((unsigned long)(fr0_ - 80)), libgcc_divide_helper_010468(0x100,*(le<undefined4>* )(unsigned)(ar4 + 0x10),vr6,vr7));
  iVar1 = iVar1 << 3;
  piVar2 = (le<int>* )(unsigned)(vsp = ((unsigned long)(fr0_ - 80)), libgcc_divide_helper_010468(ar5,iVar1,vr6,vr7));
  iVar3 = (vsp = ((unsigned long)(fr0_ - 80)), libgcc_divide_helper_010614(ar5,iVar1,vr6,vr7));
  iVar1 = (vsp = ((unsigned long)(fr0_ - 80)), libgcc_divide_helper_010614(iVar1 - iVar3,iVar1,vr6,vr7));
  for (iVar3 = 0; iVar3 < *(le<int>* )(unsigned)(ar4 + 0xc); iVar3 = iVar3 + 1) {
    *(le<int>* )(unsigned)(ar4 + 0x44) = iVar1;
    ar6 = piVar2;
    if (0 < iVar1) {
      ar6 = (le<int>* )(unsigned)((int)piVar2 + 1);
    }
    ({ unsigned long ri0_ = (unsigned long)((*(le<undefined4>* )(fr0_ - 0x28))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 80)); FUN_8c26af42(ar5,ar6,(fr0_ + (int)0xffffffd8),ar7); });
    ar7 = (*(le<undefined4>* )(fr0_ - 0x28));
    ar5_00 = iVar3;
    (*(le<undefined4>* )(fr0_ - 0x28)) = ar7;
    (vsp = ((unsigned long)(fr0_ - 80)), FUN_8c26af7a(ar4,iVar3,ar6,ar7));
  }
  (vsp = ((unsigned long)(fr0_ - 80)), FUN_8c265f84((*(le<undefined4>* )(fr0_ - 0x24)),ar5_00,ar6,ar7));
  *((le<int>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0x20)) = ar5 + *(le<int>* )(unsigned)(ar4 + 0x44);
  return *(le<undefined4>* )(unsigned)(ar4 + 0x44);
}

__asm__(".globl FUN_8c26b092\n.set FUN_8c26b092, FUN_8c26b092_def\n");

}
