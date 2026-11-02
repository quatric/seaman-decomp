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
int FUN_8c0c4dd0_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0c4dd0");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  undefined4 ar5_00;
  int iVar2;
  
  ar5_00 = ar5;
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((0x148 + *(le<int>* )(unsigned)(ar4 + 8)))))(ar4,ar5,ar6,ar7));
  iVar2 = (int)(short)uVar1;
  if ((iVar2 == 0) || (iVar2 == 1)) {
    iVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c035bc8(ar5,ar5_00,ar6,ar7));
  }
  else if (iVar2 == 3) {
    iVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0996c4(ar5,ar5_00,ar6,ar7));
  }
  return iVar2;
}

__asm__(".globl FUN_8c0c4dd0\n.set FUN_8c0c4dd0, FUN_8c0c4dd0_def\n");

}
