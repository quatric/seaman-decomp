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
undefined4 FUN_8c1016f0_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c1016f0");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  undefined1 *puVar2;
  
  *(char *)(unsigned)(0x598 + ar4) = *(char *)(unsigned)(0x598 + ar4) + '\x01';
  puVar2 = (undefined1 *)(unsigned)(ar4 + (uint)*(byte *)(unsigned)(0x598 + ar4) * 4 + 0x190);
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), input_get_word_a538(0x8c3dd7dc,ar5,ar6,ar7));
  *puVar2 = (char)uVar1;
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), input_get_word_a53c(0x8c3dd7dc,ar5,ar6,ar7));
  puVar2[1] = (char)uVar1;
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c01efb0(0x8c3dd7dc,ar5,ar6,ar7));
  puVar2[2] = (char)uVar1;
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), input_is_mask_set_10000_01ec68(0x8c3dd7dc,ar5,ar6,ar7));
  puVar2[3] = (char)uVar1;
  return uVar1;
}

__asm__(".globl FUN_8c1016f0\n.set FUN_8c1016f0, FUN_8c1016f0_def\n");

}
