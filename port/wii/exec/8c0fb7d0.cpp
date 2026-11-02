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
undefined4 FUN_8c0fb7d0_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0fb7d0");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = *(le<int>* )(unsigned)(*(le<int>* )(unsigned)(*(le<int>* )(unsigned)(ar4 + 0x10) + 0x40) + 0x68);
  if ((iVar1 < 5) && (-1 < iVar1)) {
                    
    switch(iVar1) {
    case 0:
      uVar2 = 0x43;
      break;
    case 1:
      uVar2 = 0x55;
      break;
    default:
      goto switchD_8c0fb7f2_caseD_2;
    case 4:
      uVar2 = 0x53;
    }
  }
  else {
switchD_8c0fb7f2_caseD_2:
    uVar2 = 0x4e;
  }
  uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0fb83c(ar4,uVar2,4,ar7));
  return uVar2;
}

__asm__(".globl FUN_8c0fb7d0\n.set FUN_8c0fb7d0, FUN_8c0fb7d0_def\n");

}
