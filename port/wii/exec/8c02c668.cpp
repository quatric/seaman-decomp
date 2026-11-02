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
int FUN_8c02c668_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c02c668");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  
  iVar4 = 0;
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c02c518(ar4,ar5,ar6,ar7));
  if (iVar1 != -1) {
    iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c02c518(ar4,ar5,ar6,ar7));
    uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c02e400(iVar1 * 0x18 + ar4,ar5,ar6,ar7));
    if ((char)uVar2 == '\0') {
      iVar4 = 0;
    }
    else {
      iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c02c518(ar4,ar5,ar6,ar7));
      uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c02e400(iVar1 * 0x18 + ar4,ar5,ar6,ar7));
      iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c02c518(ar4,ar5,ar6,ar7));
      uVar3 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c02c5ac(iVar1 * 0x18 + ar4,ar5,ar6,ar7));
      ar5 = (int)(char)uVar2;
      iVar4 = (vsp = ((unsigned long)(fr0_ - 0)), libgcc_divide_helper_0101e4(0x1e,ar5,ar6,ar7));
      iVar4 = iVar4 * (char)uVar3;
    }
  }
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c02c518(ar4,ar5,ar6,ar7));
  return iVar4 + (uint)(iVar1 != -1) * 0x46;
}

__asm__(".globl FUN_8c02c668\n.set FUN_8c02c668, FUN_8c02c668_def\n");

}
