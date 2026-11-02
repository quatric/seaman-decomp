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
undefined4 s_E1238_sdPstmSetPan_return_er_26a914_def(int ar4,undefined4 ar5,int ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "s_E1238_sdPstmSetPan_return_er_26a914";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 ar6_00;
  int ar4_00;
  undefined4 uVar1;
  undefined4 ar7_00;
  undefined4 s4;
  
  ar6_00 = (vsp = ((unsigned long)(fr0_ - 0)), libgcc_divide_helper_010468(ar6 * 0x7f,0xf,vr6,vr7));
  ar7_00 = 0;
  s4 = ar5;
  ar4_00 = (vsp = ((unsigned long)(fr0_ - 0)), thunk_FUN_8c267b30(*(undefined4 *)(unsigned)(ar4 + 0x30),ar5,ar6_00,0));
  uVar1 = 0;
  if (ar4_00 != 0) {
    uVar1 = ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(unsigned)0x8c2737ac)); unsigned long t1_ = (unsigned long)(s4); *(unsigned *)((((unsigned long)(fr0_ - 0)) - 8) + 0) = (unsigned)t0_; *(unsigned *)((((unsigned long)(fr0_ - 0)) - 8) + 4) = (unsigned)t1_; vsp = (((unsigned long)(fr0_ - 0)) - 8); debug_printf(ar4_00,ar5,ar6_00,ar7_00); });
  }
  return uVar1;
}

__asm__(".globl _s_E1238_sdPstmSetPan_return_er_26a914\n.set _s_E1238_sdPstmSetPan_return_er_26a914, _s_E1238_sdPstmSetPan_return_er_26a914_def\n");
