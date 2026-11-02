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
undefined4 FUN_8c0fc7c4_def(int ar4,undefined4 ar5,undefined1 *ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0fc7c4");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 112; for (int i_ = 0; i_ < 112; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int ar5_00;
  int ar5_01;
  
  iVar3 = *(le<int>* )(unsigned)(ar4 + 0x88);
  for (iVar4 = 0; iVar4 < *(le<int>* )(unsigned)(iVar3 + 0x48); iVar4 = iVar4 + 1) {
    iVar5 = iVar3 + iVar4 * 0x2c;
    ar5_00 = iVar5 + 0x4c;
    if (*(char *)(unsigned)(iVar5 + 0x74) == '\0') {
      ({ unsigned long ri0_ = (unsigned long)((*(le<undefined4>* )(fr0_ - 0x38))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 112)); strcpy((fr0_ + (int)0xffffffc8),iVar5 + 0x54,ar6,ar7); });
    }
    else {
      ar6 = (fr0_ + (int)0xffffffc8);
      (vsp = ((unsigned long)(fr0_ - 112)), FUN_8c0fd764(ar4,iVar5 + 0x74,(fr0_ + (int)0xffffffc8),ar7));
    }
    if (*(le<int>* )(unsigned)(iVar5 + 0x50) == 0) {
      ar6 = (fr0_ + (int)0xffffffc8);
      (vsp = ((unsigned long)(fr0_ - 112)), FUN_8c0fc94c(ar4,ar5_00,(fr0_ + (int)0xffffffc8),ar7));
    }
    else {
      ar5_01 = ar5_00;
      uVar1 = (vsp = ((unsigned long)(fr0_ - 112)), FUN_8c0fcd2c(ar4,ar5_00,ar6,ar7));
      iVar2 = (vsp = ((unsigned long)(fr0_ - 112)), FUN_8c013bdc((fr0_ + (int)0xffffffc8),ar5_01,ar6,ar7));
      iVar5 = *(le<int>* )(unsigned)(iVar5 + 0x50);
      if ((iVar5 < 6) && (0 < iVar5)) {
                    
        switch(iVar5) {
        case 1:
          break;
        case 2:
          break;
        case 3:
          break;
        case 4:
          ar5_01 = iVar2;
          if (iVar2 < 0) {
            ar5_01 = 1;
          }
          (vsp = ((unsigned long)(fr0_ - 112)), libgcc_divide_helper_0101e4(uVar1,ar5_01,ar6,ar7));
          break;
        case 5:
          ar5_01 = iVar2;
          if (iVar2 < 0) {
            ar5_01 = 1;
          }
          (vsp = ((unsigned long)(fr0_ - 112)), libgcc_divide_helper_01031c(uVar1,ar5_01,ar6,ar7));
        }
      }
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(unsigned)0x8c141e10)); *(le<unsigned>* )((((unsigned long)(fr0_ - 112)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 112)) - 8); FUN_8c014334((fr0_ + (int)0xffffffc8),ar5_01,ar6,ar7); });
      ar6 = (fr0_ + (int)0xffffffc8);
      (vsp = ((unsigned long)(fr0_ - 112)), FUN_8c0fc94c(ar4,ar5_00,(fr0_ + (int)0xffffffc8),ar7));
    }
  }
  uVar1 = (vsp = ((unsigned long)(fr0_ - 112)), s_ERROR_0fb0de(ar4,iVar3 + 0x28,ar6,ar7));
  return uVar1;
}

__asm__(".globl FUN_8c0fc7c4\n.set FUN_8c0fc7c4, FUN_8c0fc7c4_def\n");

}
