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
int FUN_8c1f31da_def(undefined4 ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c1f31da");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 unaff_r11 = 0;
  int unaff_r12 = 0;
  int iVar5;
  int unaff_r14 = 0;
  char in_T = 0;
  
  iVar1 = 0xc350;
  iVar2 = 0;
  iVar4 = (int)0x4e20;
  for (iVar5 = 0; iVar5 < iVar4; iVar5 = iVar5 + 1) {
    ar5 = unaff_r12;
    ar6 = unaff_r11;
    if (in_T == '\0') {
      iVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c1f3254(unaff_r14,unaff_r12,unaff_r11,ar7));
    }
    else {
      iVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c1f332c(unaff_r14,unaff_r12,unaff_r11,ar7));
    }
    if (((iVar2 != 0) || (unaff_r12 == 0)) ||
       (iVar3 = iVar1, *(le<int>* )(unsigned)(unaff_r14 + 0x10) <= *(le<int>* )(unsigned)(unaff_r14 + 0x14))) break;
    for (; iVar3 != 0; iVar3 = iVar3 + -1) {
    }
    ar5 = 0;
  }
  if (iVar5 == iVar4) {
    iVar2 = -0x15;
  }
  else if (-1 < iVar2) {
    iVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c1f2f98(unaff_r14,ar5,ar6,ar7));
  }
  return iVar2;
}

__asm__(".globl FUN_8c1f31da\n.set FUN_8c1f31da, FUN_8c1f31da_def\n");

}
