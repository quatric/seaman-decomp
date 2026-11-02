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
undefined4 s_HARDWARE_205e00_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "s_HARDWARE_205e00";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 ar6_00;
  
  ar6_00 = ar6;
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c01439c(ar4,((undefined1 *)(unsigned)0x8c26d2a0),ar6,ar7));
  if ((iVar1 == 0) &&
     (iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c01439c(ar5,((undefined1 *)(unsigned)0x8c26d2ac),ar6_00,ar7)), ar6 = ar5, iVar1 == 0)) {
    ar6 = 0;
  }
  return ar6;
}

__asm__(".globl _s_HARDWARE_205e00\n.set _s_HARDWARE_205e00, _s_HARDWARE_205e00_def\n");
