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
int FUN_8c26b132_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c26b132");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 56; for (int i_ = 0; i_ < 56; i_++) z_[i_] = 0; }
  int iVar1;
  undefined1 *ar5_00;
  int iVar2;
  undefined1 *ar5_01;
  undefined1 *ar6_00;
  undefined1 *a5;
  undefined4 uVar3;
  
  ar6_00 = (fr0_ + (int)0xffffffe4);
  iVar1 = (vsp = ((unsigned long)(fr0_ - 56)), libgcc_divide_helper_010468(0x100,*(le<undefined4>* )(unsigned)(ar4 + 0x10),vr6,vr7));
  iVar1 = iVar1 * 8;
  ar5_00 = (undefined1 *)(unsigned)(vsp = ((unsigned long)(fr0_ - 56)), libgcc_divide_helper_010468(ar5,iVar1,vr6,vr7));
  if ((int)ar5_00 < 1) {
    iVar1 = 0;
  }
  else {
    iVar2 = (vsp = ((unsigned long)(fr0_ - 56)), libgcc_divide_helper_010614(ar5,iVar1,vr6,vr7));
    *(le<int>* )(unsigned)(ar4 + 0x44) = iVar1 - iVar2;
    ar5_01 = ar5_00;
    ({ unsigned long ri0_ = (unsigned long)((*(le<undefined4>* )(fr0_ - 0x1c))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 56)); FUN_8c26af42(ar5,ar5_00,(fr0_ + (int)0xffffffe4),ar7); });
    (vsp = ((unsigned long)(fr0_ - 56)), FUN_8c265ab0(((le<undefined4>* )(fr0_ - 0x18)),ar5_01,ar6_00,ar7));
    (vsp = ((unsigned long)(fr0_ - 56)), FUN_8c265f84(0,ar5_01,ar6_00,ar7));
    for (a5 = (undefined1 *)(unsigned)0x0; (int)a5 < *(le<int>* )(unsigned)(ar4 + 0xc); a5 = a5 + 1) {
      ar5_01 = a5;
      ar6_00 = ar5_00;
      uVar3 = (*(le<undefined4>* )(fr0_ - 0x1c));
      (vsp = ((unsigned long)(fr0_ - 56)), FUN_8c26af7a(ar4,a5,ar5_00,(*(le<undefined4>* )(fr0_ - 0x1c))));
      ar7 = (*(le<undefined4>* )(fr0_ - 0x1c));
      (*(le<undefined4>* )(fr0_ - 0x1c)) = uVar3;
    }
    (vsp = ((unsigned long)(fr0_ - 56)), FUN_8c265f84(((le<undefined4>* )(fr0_ - 0x18))[0],ar5_01,ar6_00,ar7));
    iVar1 = (int)ar5_00 * iVar1;
  }
  return iVar1;
}

__asm__(".globl FUN_8c26b132\n.set FUN_8c26b132, FUN_8c26b132_def\n");

}
