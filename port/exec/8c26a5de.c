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
undefined4
s_E1230_sdMemBlkDestroy_return_26a5e8_def
          (undefined4 ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "s_E1230_sdMemBlkDestroy_return_26a5e8";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;
  undefined4 ain0 = (undefined4)(unsigned long)vin0;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  int iVar2;
  int unaff_r14 = 0;
  char in_T = 0;
  undefined4 in_PR = 0;
  
  if (in_T != '\x01') {
    for (iVar2 = 0; iVar2 < *(int *)(unsigned)(unaff_r14 + 8); iVar2 = iVar2 + 1) {
      ({ unsigned long ri0_ = (unsigned long)(in_PR); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); FUN_8c26a1f2(*(undefined4 *)(unsigned)(unaff_r14 + 0x18 + iVar2 * 4),ar5,ar6,ar7); });
      iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c265784(*(undefined4 *)(unsigned)(unaff_r14 + 0x20 + iVar2 * 4),ar5,ar6,ar7));
      if (iVar1 != 0) {
        (vsp = ((unsigned long)(fr0_ - 0)), debug_printf(iVar1,ar5,ar6,ar7));
      }
    }
    for (iVar2 = 0; iVar2 < *(int *)(unsigned)(unaff_r14 + 8); iVar2 = iVar2 + 1) {
      iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c265784(*(undefined4 *)(unsigned)(iVar2 * 4 + unaff_r14 + 0x28),ar5,ar6,ar7));
      if (iVar1 != 0) {
        (vsp = ((unsigned long)(fr0_ - 0)), debug_printf(iVar1,ar5,ar6,ar7));
      }
    }
    for (iVar2 = 0; iVar2 < *(int *)(unsigned)(unaff_r14 + 8); iVar2 = iVar2 + 1) {
      ar5 = iVar2;
      iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), thunk_FUN_8c2678a4(*(undefined4 *)(unsigned)(unaff_r14 + 0x30),iVar2,ar6,ar7));
      if (iVar1 != 0) {
        (vsp = ((unsigned long)(fr0_ - 0)), debug_printf(iVar1,ar5,ar6,ar7));
      }
    }
    iVar2 = (vsp = ((unsigned long)(fr0_ - 0)), thunk_FUN_8c266ccc(*(undefined4 *)(unsigned)(unaff_r14 + 0x30),ar5,ar6,ar7));
    if (iVar2 != 0) {
      (vsp = ((unsigned long)(fr0_ - 0)), debug_printf(iVar2,ar5,ar6,ar7));
    }
    *(undefined4 *)(unsigned)(unaff_r14 + 8) = 0;
    *(undefined4 *)(unsigned)(unaff_r14 + 0xc) = 0;
    ain0 = (vsp = ((unsigned long)(fr0_ - 0)), memset(unaff_r14,0,0x54,ar7));
    *(undefined4 *)(unsigned)(unaff_r14 + 4) = 0;
  }
  return ain0;
}

__asm__(".globl _s_E1230_sdMemBlkDestroy_return_26a5e8\n.set _s_E1230_sdMemBlkDestroy_return_26a5e8, _s_E1230_sdMemBlkDestroy_return_26a5e8_def\n");
