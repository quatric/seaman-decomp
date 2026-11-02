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
undefined4 s_E1242_sdMemBlkSetPrm_return__26acaa_def(int ar4,int ar5,int ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "s_E1242_sdMemBlkSetPrm_return__26acaa";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 uVar2;
  int s4;
  int ar5_00;
  undefined4 uVar3;
  undefined4 ar7_00;
  
  ar7_00 = 0;
  uVar3 = 0x20;
  s4 = ar5 * 4;
  iVar1 = ({ unsigned long t0_ = (unsigned long)(0); *(unsigned *)((((unsigned long)(fr0_ - 0)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 0)) - 8); FUN_8c265ea0(*(undefined4 *)(unsigned)(s4 + ar4 + 0x28),ar7,0x20,0); });
  if (iVar1 != 0) {
    uVar3 = ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(unsigned)0x8c2738b0)); unsigned long t1_ = (unsigned long)(s4); *(unsigned *)((((unsigned long)(fr0_ - 0)) - 8) + 0) = (unsigned)t0_; *(unsigned *)((((unsigned long)(fr0_ - 0)) - 8) + 4) = (unsigned)t1_; vsp = (((unsigned long)(fr0_ - 0)) - 8); debug_printf(iVar1,ar7,uVar3,ar7_00); });
    return uVar3;
  }
  iVar1 = ar6 * *(int *)(unsigned)(ar4 + 0x10);
  if (iVar1 < 0) {
    iVar1 = iVar1 + 7;
  }
  ar5_00 = *(int *)(unsigned)(ar4 + 0x38 + s4) + (iVar1 >> 3);
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c265ff4(*(undefined4 *)(unsigned)(ar4 + 0x28 + s4),ar5_00,uVar3,ar7_00));
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar2 = ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(unsigned)0x8c2738e0)); unsigned long t1_ = (unsigned long)(s4); *(unsigned *)((((unsigned long)(fr0_ - 0)) - 8) + 0) = (unsigned)t0_; *(unsigned *)((((unsigned long)(fr0_ - 0)) - 8) + 4) = (unsigned)t1_; vsp = (((unsigned long)(fr0_ - 0)) - 8); debug_printf(iVar1,ar5_00,uVar3,ar7_00); });
  }
  return uVar2;
}

__asm__(".globl _s_E1242_sdMemBlkSetPrm_return__26acaa\n.set _s_E1242_sdMemBlkSetPrm_return__26acaa, _s_E1242_sdMemBlkSetPrm_return__26acaa_def\n");
