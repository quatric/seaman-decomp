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
undefined4 FUN_8c1f1a2a_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c1f1a2a");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar3 = *(le<int>* )(unsigned)(ar4 + 0x1c);
  uVar2 = 0;
  uVar1 = 0;
  if ((iVar3 != 0) && (*(le<int>* )(unsigned)(iVar3 + 0x2c) != 0)) {
    uVar2 = *(le<undefined4>* )(unsigned)(iVar3 + 0x30);
    uVar1 = *(le<undefined4>* )(unsigned)(iVar3 + 0x2c);
  }
                    
                    
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(*(le<unsigned>* )0x8c0000bc)))(uVar1,uVar2,0,5));
  return uVar1;
}

__asm__(".globl FUN_8c1f1a2a\n.set FUN_8c1f1a2a, FUN_8c1f1a2a_def\n");

}
