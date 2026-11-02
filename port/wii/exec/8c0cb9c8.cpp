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
undefined4 FUN_8c0cb9c8_def(int ar4,undefined1 *ar5,undefined1 *ar6,undefined1 *ar7)

{
  TRACE_ENTER("FUN_8c0cb9c8");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 60; for (int i_ = 0; i_ < 60; i_++) z_[i_] = 0; }
  int iVar1;
  int iVar2;
  le<int>* piVar3;
  undefined1 *ar5_00;
  
  ar5_00 = ar5;
  iVar1 = (vsp = ((unsigned long)(fr0_ - 60)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c0c51fc))))
                    (*(le<undefined4>* )(unsigned)(ar5 + 0x7cc),ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 60)), FUN_8c102748(((undefined1 *)(fr0_ - 0x20)),ar5_00,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 60)), FUN_8c1026ec(((undefined1 *)(fr0_ - 0x38)),ar5_00,ar6,ar7));
  iVar2 = (vsp = ((unsigned long)(fr0_ - 60)), FUN_8c0637d0(*(le<undefined4>* )(unsigned)(ar5 + 0x7cc),ar5_00,ar6,ar7));
  if (iVar2 != 0) {
    (vsp = ((unsigned long)(fr0_ - 60)), FUN_8c0c86d4(*(le<undefined4>* )(unsigned)(ar4 + iVar1 * 4 + 8),((undefined1 *)(fr0_ - 0x20)),ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 60)), FUN_8c0c86c0(*(le<undefined4>* )(unsigned)(ar4 + iVar1 * 4 + 8),((undefined1 *)(fr0_ - 0x38)),ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 60)), FUN_8c0c8698(*(le<undefined4>* )(unsigned)(ar4 + iVar1 * 4 + 8),((undefined1 *)(fr0_ - 0x30)),ar6,ar7));
    ar7 = ((undefined1 *)(fr0_ - 0x30));
    ar6 = ((undefined1 *)(fr0_ - 0x38));
    ar5_00 = ((undefined1 *)(fr0_ - 0x20));
    (vsp = ((unsigned long)(fr0_ - 60)), FUN_8c0fff54(*(le<undefined4>* )(unsigned)(ar5 + 0x7cc),ar5_00,ar6,ar7));
  }
  piVar3 = ((le<int>* )(unsigned long)*(le<unsigned>* )(unsigned)(ar4 + iVar1 * 4 + 8));
  (vsp = ((unsigned long)(fr0_ - 60)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((0xb0 + *piVar3))))(piVar3,ar5_00,ar6,ar7));
  piVar3 = ((le<int>* )(unsigned long)*(le<unsigned>* )(unsigned)(ar4 + iVar1 * 4 + 8));
  (vsp = ((unsigned long)(fr0_ - 60)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((*piVar3 + 0x28))))(piVar3,ar5_00,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 60)), FUN_8c0fff84(*(le<undefined4>* )(unsigned)(ar5 + 0x7cc),ar5_00,ar6,ar7));
  piVar3 = ((le<int>* )(unsigned long)*(le<unsigned>* )(unsigned)(ar4 + iVar1 * 4 + 8));
  (vsp = ((unsigned long)(fr0_ - 60)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((*piVar3 + 0x48))))(piVar3,ar5_00,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 60)), FUN_8c0cf63c(0x8c436a28,ar5_00,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 60)), free_if_nonnull_wrap_10270c(((undefined1 *)(fr0_ - 0x38)),0xffffffff,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 60)), free_if_nonnull_wrap_102790(((undefined1 *)(fr0_ - 0x20)),0xffffffff,ar6,ar7));
  return 0;
}

__asm__(".globl FUN_8c0cb9c8\n.set FUN_8c0cb9c8, FUN_8c0cb9c8_def\n");

}
