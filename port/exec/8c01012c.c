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
uint FUN_8c01012c_def(int ar4,code *ar5,code *ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c01012c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;
  undefined4 s0 = *(undefined4 *)(vsp + 0);
  undefined4 s4 = *(undefined4 *)(vsp + 4);
  undefined4 s8 = *(undefined4 *)(vsp + 8);
  undefined4 s12 = *(undefined4 *)(vsp + 12);
  undefined4 s16 = *(undefined4 *)(vsp + 16);
  uint s20 = *(uint *)(vsp + 20);

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 12; for (int i_ = 0; i_ < 12; i_++) z_[i_] = 0; }
  code *a6;
  int unaff_r11 = 0;
  int iVar1;
  
  a6 = ar6;
  iVar1 = ar4;
  for ((*(undefined4 *)(fr0_ - 0x8)) = 0; (*(undefined4 *)(fr0_ - 0x8)) < s20; (*(undefined4 *)(fr0_ - 0x8)) = (*(undefined4 *)(fr0_ - 0x8)) + 1) {
    (vsp = ((unsigned long)(fr0_ - 12)), (*(code *)xlat((unsigned long)ar5))(iVar1,1,a6,ar7));
    iVar1 = iVar1 + unaff_r11;
  }
  if (((*(undefined4 *)(fr0_ - 0x8)) < s20) && (s20 = 0, ar6 != (code *)0x0)) {
    iVar1 = unaff_r11 * (*(undefined4 *)(fr0_ - 0x8)) + ar4;
    for (; s20 = 0, (*(undefined4 *)(fr0_ - 0x8)) != 0; (*(undefined4 *)(fr0_ - 0x8)) = (*(undefined4 *)(fr0_ - 0x8)) - 1) {
      iVar1 = iVar1 - unaff_r11;
      (vsp = ((unsigned long)(fr0_ - 12)), (*(code *)xlat((unsigned long)ar6))(iVar1,0xffffffff,a6,ar7));
    }
  }
  return s20;
}

__asm__(".globl _FUN_8c01012c\n.set _FUN_8c01012c, _FUN_8c01012c_def\n");
