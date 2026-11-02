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
undefined4 FUN_8c25b044_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c25b044");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  int ar6_00;
  int ar7_00;
  int iVar2;
  
  uVar1 = 0;
  iVar2 = *(le<int>* )(unsigned)(*((le<undefined4>* )(unsigned long)*(le<unsigned>* )0x8c277b04) + ar4 * 0xc + 8);
  ar6_00 = *(le<int>* )(unsigned)(iVar2 + 0x24) + -1;
  ar7_00 = *(le<int>* )(unsigned)(iVar2 + 0x28) + -1;
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c20a482(0,0,ar6_00,ar7_00));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c20bdc0(iVar2 + 0x18,uVar1,ar6_00,ar7_00));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c20a482(0,0,(*(le<undefined4>* )(unsigned)(unsigned)0x8c4aa508) + -1,(*(le<undefined4>* )(unsigned)(unsigned)0x8c4aa50c) + -1));
  return uVar1;
}

__asm__(".globl FUN_8c25b044\n.set FUN_8c25b044, FUN_8c25b044_def\n");

}
