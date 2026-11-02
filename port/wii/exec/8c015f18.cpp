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
undefined4 s_Error_015f22_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("s_Error_015f22");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 40; for (int i_ = 0; i_ < 40; i_++) z_[i_] = 0; }
  short sVar1;
  short sVar2;
  undefined4 uVar3;
  int iVar4;
  int ar5_00;
  undefined4 ar6_00;
  undefined4 ar7_00;
  
  sVar1 = *((le<short>* )(unsigned long)*(le<unsigned>* )(unsigned)(ar4 + 0x20));
  sVar2 = *(le<short>* )(unsigned)(*(le<int>* )(unsigned)(ar4 + 0x20) + 2);
  uVar3 = (vsp = ((unsigned long)(fr0_ - 40)), malloc_thunk(0x2000,ar5,ar6,ar7));
  ({ unsigned long t0_ = (unsigned long)((*(le<undefined4>* )(fr0_ - 0x24))); unsigned long ri0_ = (unsigned long)((int)sVar2); *(le<unsigned>* )((((unsigned long)(fr0_ - 40)) - 8) + 0) = (unsigned)t0_; vin0 = (unsigned)ri0_; vsp = (((unsigned long)(fr0_ - 40)) - 8); FUN_8c257188(ar4 + 0x2c,uVar3,0xb01,(int)sVar1); });
  ar7_00 = 0x40800000;
  ar6_00 = 10000;
  ar5_00 = ar4 + 0x2c;
  ({ unsigned long ri0_ = (unsigned long)((*(le<undefined4>* )(fr0_ - 0x24))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 40)); FUN_8c257196(*((le<undefined4>* )(unsigned long)*(le<unsigned>* )(unsigned)(ar4 + 0x1c)),ar5_00,10000,0x40800000); });
  iVar4 = (vsp = ((unsigned long)(fr0_ - 40)), FUN_8c25b3a2(*(le<undefined4>* )(unsigned)(ar4 + 0x1c),ar5_00,ar6_00,ar7_00));
  if (iVar4 == -1) {
    ar7_00 = 0xd;
    ar6_00 = 0;
    ar5_00 = 0;
    ({ unsigned long ri0_ = (unsigned long)(0xffffffff); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 40)); noop_102824("Error",0,0,0xd); });
  }
  (vsp = ((unsigned long)(fr0_ - 40)), FUN_8c25b100((int)*((le<short>* )(unsigned long)*(le<unsigned>* )(unsigned)(ar4 + 0x20)),ar5_00,ar6_00,ar7_00));
  uVar3 = (vsp = ((unsigned long)(fr0_ - 40)), FUN_8c1fb57c(uVar3,ar5_00,ar6_00,ar7_00));
  return uVar3;
}

__asm__(".globl s_Error_015f22\n.set s_Error_015f22, s_Error_015f22_def\n");

}
