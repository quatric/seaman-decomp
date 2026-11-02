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
undefined4 FUN_8c109dc4_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c109dc4");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  undefined4 ar5_00;
  
  if (*(char *)(unsigned)(0x98 + ar4) == '\x03') {
    ar5_00 = 1;
    uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c109e34(*(le<undefined4>* )(unsigned)(ar5 + 0x10),1,ar6,ar7));
    if ((((char)uVar1 == '\x05') && (*(le<int>* )(unsigned)(0x874 + ar4) == 0)) &&
       (uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c02d1d0(*(le<int>* )(unsigned)(ar5 + 4) + 0xa8,ar5_00,ar6,ar7)),
       (char)uVar1 == '\x01')) {
      return 1;
    }
  }
  return 0;
}

__asm__(".globl FUN_8c109dc4\n.set FUN_8c109dc4, FUN_8c109dc4_def\n");

}
