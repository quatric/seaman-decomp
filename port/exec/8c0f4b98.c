#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c0f4b98_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0f4b98";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 24; for (int i_ = 0; i_ < 24; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  int ar5_00;
  
  ar5_00 = ar4 + 0x5c;
  (vsp = ((unsigned long)(fr0_ - 24)), FUN_8c023e24(((undefined1 *)(fr0_ - 0x14)),ar5_00,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 24)), FUN_8c08a9b8(ar4 + 0x5c,ar5_00,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 24)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(ar4 + 8) + 0x34))))(ar4,ar5_00,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 24)), FUN_8c023e04(ar4 + 0x5c,((undefined1 *)(fr0_ - 0x14)),ar6,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 24)), free_if_nonnull_wrap_016ac4(((undefined1 *)(fr0_ - 0x14)),0xffffffff,ar6,ar7));
  return uVar1;
}

__asm__(".globl _FUN_8c0f4b98\n.set _FUN_8c0f4b98, _FUN_8c0f4b98_def\n");
