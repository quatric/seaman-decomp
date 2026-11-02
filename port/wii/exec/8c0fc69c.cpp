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
undefined4 FUN_8c0fc69c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0fc69c");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int unaff_r14 = 0;
  
  iVar4 = *(le<int>* )(unsigned)(ar4 + 0x88);
  for (iVar5 = 0; iVar5 < *(le<int>* )(unsigned)(iVar4 + 0x68); iVar5 = iVar5 + 1) {
    unaff_r14 = 0;
    iVar6 = iVar4 + iVar5 * 0x2c;
    iVar3 = iVar6 + 0x70;
    iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0fcd2c(ar4,iVar3,ar6,ar7));
    if (*(char *)(unsigned)(iVar6 + 0x74) < '\x01') {
      iVar3 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c013bdc(iVar6 + 0x78,iVar3,ar6,ar7));
    }
    else {
      iVar3 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0fcd2c(ar4,iVar6 + 0x74,ar6,ar7));
    }
    iVar6 = *(le<int>* )(unsigned)(iVar6 + 0x6c);
    if ((iVar6 < 6) && (-1 < iVar6)) {
                    
      switch(iVar6) {
      case 0:
        if (iVar1 == iVar3) {
          unaff_r14 = 1;
        }
        break;
      case 1:
        if (iVar1 != iVar3) {
          unaff_r14 = 1;
        }
        break;
      case 2:
        if (iVar1 < iVar3) {
          unaff_r14 = 1;
        }
        break;
      case 3:
        if (iVar1 <= iVar3) {
          unaff_r14 = 1;
        }
        break;
      case 4:
        if (iVar3 < iVar1) {
          unaff_r14 = 1;
        }
        break;
      case 5:
        if (iVar3 <= iVar1) {
          unaff_r14 = 1;
        }
      }
    }
    if (unaff_r14 == 0) break;
  }
  if (unaff_r14 == 1) {
    uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), s_ERROR_0fb0de(ar4,iVar4 + 0x28,ar6,ar7));
  }
  else {
    uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), s_ERROR_0fb0de(ar4,iVar4 + 0x48,ar6,ar7));
  }
  return uVar2;
}

__asm__(".globl FUN_8c0fc69c\n.set FUN_8c0fc69c, FUN_8c0fc69c_def\n");

}
