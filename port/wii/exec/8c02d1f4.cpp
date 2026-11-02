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
undefined4 FUN_8c02d1f4_def(int ar4,le<undefined4>* ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c02d1f4");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  le<undefined4>* ar5_00;
  
  ar5_00 = ar5;
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), get_field_134_02d1e8(ar4,ar5,ar6,ar7));
  *ar5 = uVar1;
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), get_field_138_02737c(ar4,ar5_00,ar6,ar7));
  ar5[1] = uVar1;
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), get_field_13c_028d9c(ar4,ar5_00,ar6,ar7));
  ar5[2] = uVar1;
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), get_field_140_025f70(ar4,ar5_00,ar6,ar7));
  ar5[3] = uVar1;
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), get_field_8_02d1c0(ar4 + 0xa8,ar5_00,ar6,ar7));
  ar5[4] = uVar1;
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), get_field_c_02d1b8(ar4 + 0xa8,ar5_00,ar6,ar7));
  ar5[5] = uVar1;
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), get_field_10_02d1b0(ar4 + 0xa8,ar5_00,ar6,ar7));
  ar5[6] = uVar1;
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c02d1a8(ar4 + 0xa8,ar5_00,ar6,ar7));
  *(le<short>* )(unsigned)(ar5 + 7) = (short)uVar1;
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c02bfb4(ar4 + 0xa8,ar5_00,ar6,ar7));
  *(le<short>* )(unsigned)((int)ar5 + 0x1e) = (short)uVar1;
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), get_field_18_02d1a0(ar4 + 0xa8,ar5_00,ar6,ar7));
  ar5[8] = uVar1;
  return uVar1;
}

__asm__(".globl FUN_8c02d1f4\n.set FUN_8c02d1f4, FUN_8c02d1f4_def\n");

}
