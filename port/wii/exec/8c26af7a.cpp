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
int FUN_8c26af7a_def(int ar4,undefined4 ar5,uint ar6,int ar7)

{
  TRACE_ENTER("FUN_8c26af7a");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 72; for (int i_ = 0; i_ < 72; i_++) z_[i_] = 0; }
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  (*(le<undefined4>* )(fr0_ - 0x2c)) = 0x100;
  iVar1 = (vsp = ((unsigned long)(fr0_ - 72)), libgcc_divide_helper_010468(0x100,*(le<undefined4>* )(unsigned)(ar4 + 0x10),vr6,vr7));
  (*(le<undefined4>* )(fr0_ - 0x30)) = -0x73b411d8;
  (*(le<undefined4>* )(fr0_ - 0x2c)) = (*(le<undefined4>* )(fr0_ - 0x2c)) + -0x73b411d8;
  (*(le<undefined4>* )(fr0_ - 0x40)) = 0;
  iVar2 = (vsp = ((unsigned long)(fr0_ - 72)), libgcc_divide_helper_010468(0x40,ar7,vr6,vr7));
  iVar3 = iVar2;
  (*(le<undefined4>* )(fr0_ - 0x38)) = ar6;
  for (; (*(le<undefined4>* )(fr0_ - 0x40)) < ar7; (*(le<undefined4>* )(fr0_ - 0x40)) = (*(le<undefined4>* )(fr0_ - 0x40)) + 1) {
    if ((int)(*(le<undefined4>* )(fr0_ - 0x38)) < 0) {
      (*(le<undefined4>* )(fr0_ - 0x28)) = ~(~(*(le<undefined4>* )(fr0_ - 0x38)) + 1 & 0x3f) + 1;
    }
    else {
      (*(le<undefined4>* )(fr0_ - 0x28)) = (*(le<undefined4>* )(fr0_ - 0x38)) & 0x3f;
    }
    iVar3 = (vsp = ((unsigned long)(fr0_ - 72)), s_E1227_sdMoveSndMemToWrkMem_r_26ae04(ar4,ar5,(*(le<undefined4>* )(fr0_ - 0x30)),(*(le<undefined4>* )(fr0_ - 0x28)) * iVar1 * 8));
    (*(le<undefined4>* )(fr0_ - 0x48)) = 0;
    if (0 < iVar2) {
      do {
        iVar5 = (*(le<undefined4>* )(fr0_ - 0x30));
        (*(le<undefined4>* )(fr0_ - 0x28)) = ((*(le<undefined4>* )(fr0_ - 0x28)) - ar6) + 0x40;
        if ((int)(*(le<undefined4>* )(fr0_ - 0x28)) < 0) {
          (*(le<undefined4>* )(fr0_ - 0x28)) = ~(~(*(le<undefined4>* )(fr0_ - 0x28)) + 1 & 0x3f) + 1;
        }
        else {
          (*(le<undefined4>* )(fr0_ - 0x28)) = (*(le<undefined4>* )(fr0_ - 0x28)) & 0x3f;
        }
        iVar3 = (*(le<undefined4>* )(fr0_ - 0x28)) * iVar1 * 8;
        (vsp = ((unsigned long)(fr0_ - 72)), s_E1227_sdMoveSndMemToWrkMem_r_26ae04(ar4,ar5,(*(le<undefined4>* )(fr0_ - 0x2c)),iVar3));
        iVar3 = (vsp = ((unsigned long)(fr0_ - 72)), s_E1242_sdMemBlkSetPrm_return__26abf6(ar4,ar5,iVar3,(*(le<undefined4>* )(fr0_ - 0x30))));
        iVar4 = (*(le<undefined4>* )(fr0_ - 0x2c));
        (*(le<undefined4>* )(fr0_ - 0x30)) = (*(le<undefined4>* )(fr0_ - 0x2c));
        (*(le<undefined4>* )(fr0_ - 0x2c)) = iVar5;
        (*(le<undefined4>* )(fr0_ - 0x48)) = (*(le<undefined4>* )(fr0_ - 0x48)) + 1;
      } while ((*(le<undefined4>* )(fr0_ - 0x48)) < iVar2);
    }
    (*(le<undefined4>* )(fr0_ - 0x38)) = (*(le<undefined4>* )(fr0_ - 0x38)) + 1;
  }
  return iVar3;
}

__asm__(".globl FUN_8c26af7a\n.set FUN_8c26af7a, FUN_8c26af7a_def\n");

}
