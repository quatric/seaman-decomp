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
int s_KATANA_FLASH_1f0ea0_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "s_KATANA_FLASH_1f0ea0";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 ar5_00;
  undefined4 ar6_00;
  int *unaff_r14 = 0;
  undefined4 in_PR = 0;
  
  if (*unaff_r14 == 0) {
    iVar1 = -0xb;
  }
  else if ((ar4 == 0) || (ar4 == 1)) {
    iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), syscall_1f98ec(*(undefined4 *)(unsigned)(*unaff_r14 + 4),ar5,ar6,ar7));
    if (iVar1 == 0) {
      iVar1 = *unaff_r14;
      func_0x8c1f0974("KATANA_FLASH____",iVar1 + 0x34,0x10,ar7);
      ar6_00 = 0x12;
      *(short *)(unsigned)(*unaff_r14 + 2) = (short)ar4;
      *(char *)(unsigned)(iVar1 + 0x45) = (char)ar4;
      *(undefined1 *)(unsigned)(iVar1 + 0x44) = *(undefined1 *)(unsigned)*unaff_r14;
      iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), syscall_1f98d8(*(undefined4 *)(unsigned)(*unaff_r14 + 4),iVar1 + 0x34,0x12,ar7));
      if (iVar1 == 0x12) {
        ar5_00 = *(undefined4 *)(unsigned)(*unaff_r14 + 8);
        ({ unsigned long ri0_ = (unsigned long)(in_PR); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); FUN_8c1f0988(*(undefined4 *)(unsigned)(*unaff_r14 + 0xc),ar5_00,ar6_00,ar7); });
        iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c1f0a72(*unaff_r14,ar5_00,ar6_00,ar7));
        if (iVar1 == 0) {
          iVar1 = 0;
        }
      }
      else {
        iVar1 = -2;
      }
    }
    else {
      iVar1 = -3;
    }
  }
  else {
    iVar1 = -6;
  }
  return iVar1;
}

__asm__(".globl _s_KATANA_FLASH_1f0ea0\n.set _s_KATANA_FLASH_1f0ea0, _s_KATANA_FLASH_1f0ea0_def\n");
