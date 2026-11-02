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
undefined4 FUN_8c0d167c_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0d167c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 140; for (int i_ = 0; i_ < 140; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  undefined1 *ar5_00;
  
  uVar1 = ar5;
  (vsp = ((unsigned long)(fr0_ - 140)), FUN_8c023e44(((undefined1 *)(fr0_ - 0x48)),ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 140)), FUN_8c023e44(((undefined1 *)(fr0_ - 0x88)),uVar1,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 140)), FUN_8c023e7c(((undefined1 *)(fr0_ - 0x48)),uVar1,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 140)), FUN_8c023e7c(((undefined1 *)(fr0_ - 0x88)),uVar1,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 140)), FUN_8c023ef8(((undefined1 *)(fr0_ - 0x48)),uVar1,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 140)), FUN_8c023ebc(((undefined1 *)(fr0_ - 0x88)),uVar1,ar6,ar7));
  ar5_00 = ((undefined1 *)(fr0_ - 0x88));
  (vsp = ((unsigned long)(fr0_ - 140)), FUN_8c023e98(((undefined1 *)(fr0_ - 0x48)),ar5_00,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 140)), FUN_8c023e7c(((undefined1 *)(fr0_ - 0x88)),ar5_00,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 140)), FUN_8c023f34(((undefined1 *)(fr0_ - 0x88)),ar5_00,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 140)), FUN_8c023e98(((undefined1 *)(fr0_ - 0x48)),((undefined1 *)(fr0_ - 0x88)),ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 140)), FUN_8c024010(((undefined1 *)(fr0_ - 0x48)),ar5,ar4,ar7));
  (vsp = ((unsigned long)(fr0_ - 140)), free_if_nonnull_wrap_023e4c(((undefined1 *)(fr0_ - 0x88)),0xffffffff,ar4,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 140)), free_if_nonnull_wrap_023e4c(((undefined1 *)(fr0_ - 0x48)),0xffffffff,ar4,ar7));
  return uVar1;
}

__asm__(".globl _FUN_8c0d167c\n.set _FUN_8c0d167c, _FUN_8c0d167c_def\n");
