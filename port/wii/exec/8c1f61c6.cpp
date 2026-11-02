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
undefined4 FUN_8c1f61c6_def(undefined4 ar4,le<uint>* ar5,int ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c1f61c6");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;
  undefined4 ain0 = (undefined4)(unsigned long)vin0;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 4; for (int i_ = 0; i_ < 4; i_++) z_[i_] = 0; }
  int ar6_00;
  le<uint>* ar5_00;
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  int ar4_00;
  int ar4_01;
  int iVar4;
  
  if ((*(le<undefined4>* )(unsigned)(unsigned)0x8c26c7c0) == 0) {
    return ain0;
  }
  ar4_00 = 0;
  do {
    ar6_00 = (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c1efd14(ar4_00,ar5,ar6,ar7));
    ar5_00 = (le<uint>* )(unsigned)(vsp = ((unsigned long)(fr0_ - 4)), FUN_8c1efd26(ar4_00,ar5,ar6,ar7));
    iVar4 = ar4_00 * 0x34;
    ar4_01 = iVar4 + -0x73b8d83c;
    *(le<unsigned>* )(unsigned)(iVar4 + -0x73b8d80c) = ar5_00;
    *(le<undefined4>* )(unsigned)(iVar4 + -0x73b8d810) = *(le<undefined4>* )(unsigned)(iVar4 + -0x73b8d834);
    ar5 = ar5_00;
    ar6 = ar6_00;
    uVar1 = (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c1f6192(ar4_01,ar5_00,ar6_00,ar7));
    *(le<undefined4>* )(unsigned)(((undefined1 *)(unsigned)0x8c472ca4) + ar4_00 * 4) = uVar1;
    iVar2 = (vsp = ((unsigned long)(fr0_ - 4)), libgcc_divide_helper_010614(ar4_00,6,vr6,vr7));
    if (iVar2 == 0) {
      if ((((*ar5_00 & 0x21) == 0) || (*(char *)(unsigned)(ar6_00 + 2) != '\0')) ||
         (*(char *)(unsigned)(ar6_00 + 4) != '\b')) {
        iVar2 = (vsp = ((unsigned long)(fr0_ - 4)), s_no_device_1f5f4e(ar4_01,ar5,ar6,ar7));
      }
      else {
        (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c1f6142(ar4_01,ar5_00,ar6,ar7));
        ar6 = ar4_00;
        iVar2 = (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c1f5f8c(ar4_01,ar6_00,ar4_00,ar7));
      }
      *(le<uint>* )(unsigned)(iVar4 + -0x73b8d830) = ~*(le<uint>* )(unsigned)(iVar4 + -0x73b8d834);
      if ((*(le<undefined4>* )(unsigned)(unsigned)0x8c472d04) == 0) {
        uVar3 = *(le<uint>* )(unsigned)(iVar4 + -0x73b8d810) ^ *(le<uint>* )(unsigned)(iVar4 + -0x73b8d834);
        ar5 = (le<uint>* )(unsigned)(*(le<uint>* )(unsigned)(iVar4 + -0x73b8d834) & uVar3);
        *(le<unsigned>* )(unsigned)(iVar4 + -0x73b8d82c) = ar5;
        uVar3 = uVar3 & *(le<uint>* )(unsigned)(iVar4 + -0x73b8d830);
      }
      else {
        uVar3 = *(le<uint>* )(unsigned)(iVar4 + -0x73b8d810) ^ *(le<uint>* )(unsigned)(iVar4 + -0x73b8d834) ^ 0xffffffff;
        ar5 = (le<uint>* )(unsigned)(*(le<uint>* )(unsigned)(iVar4 + -0x73b8d834) | uVar3);
        *(le<unsigned>* )(unsigned)(iVar4 + -0x73b8d82c) = ar5;
        uVar3 = uVar3 | *(le<uint>* )(unsigned)(iVar4 + -0x73b8d830);
      }
      *(le<uint>* )(unsigned)(iVar4 + -0x73b8d828) = uVar3;
    }
    else {
      *(le<unsigned>* )(unsigned)(iVar4 + -0x73b8d818) = ar5_00 + 5;
    }
    ar4_00 = ar4_00 + 1;
  } while (ar4_00 < 0x18);
  return iVar2;
}

__asm__(".globl FUN_8c1f61c6\n.set FUN_8c1f61c6, FUN_8c1f61c6_def\n");

}
