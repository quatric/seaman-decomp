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
undefined4 FUN_8c035a3c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c035a3c");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c02d1c8(*(le<int>* )(unsigned)(ar4 + 8) + 0xa8,ar5,ar6,ar7));
  if (((((char)uVar1 == '\x01') &&
       (iVar2 = (vsp = ((unsigned long)(fr0_ - 0)), get_field_178_035734(*(le<undefined4>* )(unsigned)(ar4 + 0xc),ar5,ar6,ar7))
       , iVar2 == 0)) &&
      (iVar2 = (vsp = ((unsigned long)(fr0_ - 0)), get_field_140_025f70(*(le<undefined4>* )(unsigned)(ar4 + 8),ar5,ar6,ar7)),
      iVar2 == 1)) &&
     (uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c035ab4(*(le<undefined4>* )(unsigned)(ar4 + 0x10),ar5,ar6,ar7)),
     (char)uVar1 == '\x02')) {
    return 1;
  }
  return 0;
}

__asm__(".globl FUN_8c035a3c\n.set FUN_8c035a3c, FUN_8c035a3c_def\n");

}
