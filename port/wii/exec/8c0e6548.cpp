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
undefined4 Class_12b580_m2_0e6548_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("Class_12b580_m2_0e6548");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 ar5_00;
  int ar6_00;
  int iVar2;
  
  (vsp = ((unsigned long)(fr0_ - 0)), Class_12bb08_m2_0da5a8(ar4,ar5,ar6,ar7));
  ar5_00 = *(le<undefined4>* )(unsigned)(0x10dc + ar4);
  (vsp = ((unsigned long)(fr0_ - 0)), s_64_JUNGLE_NIGHT_0e7062(ar4,ar5_00,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0dbd80(ar4,ar5_00,ar6,ar7));
  ar6_00 = ar4 + 0xa68;
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0d8710(ar4 + 0x10dc,ar5,ar6_00,ar7));
  for (iVar2 = 0; iVar2 < 8; iVar2 = iVar2 + 1) {
    iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0f6ab0(ar4 + iVar2 * 0x68 + 0xc0c,ar5,ar6_00,ar7));
    if (iVar1 == 1) {
      ar5 = ar4;
      (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0f7204(ar4 + iVar2 * 0x68 + 0xc0c,ar4,ar6_00,ar7));
    }
  }
  return 1;
}

__asm__(".globl Class_12b580_m2_0e6548\n.set Class_12b580_m2_0e6548, Class_12b580_m2_0e6548_def\n");

}
