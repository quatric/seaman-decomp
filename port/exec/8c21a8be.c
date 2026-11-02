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
undefined4 FUN_8c21a8be_def(uint *ar4,uint ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c21a8be";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  uint unaff_r11 = 0;
  uint unaff_r12 = 0;
  uint *unaff_r14 = 0;
  undefined4 in_PR = 0;
  
  do {
    ({ unsigned long ri0_ = (unsigned long)(in_PR); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); FUN_8c2563ac(ar4,ar5,ar6,ar7); });
    if ((*unaff_r14 & unaff_r11) == 0) {
      ar4 = unaff_r14;
      (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(*(unsigned *)0x8c4aa340)))(unaff_r14,ar5,ar6,ar7));
    }
    else {
      ({ unsigned long ri0_ = (unsigned long)(in_PR); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); noop_25b638(unaff_r14 + 2,ar5,ar6,ar7); });
      ar5 = *unaff_r14 & unaff_r12;
      (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c2569e0(unaff_r14 + 5,ar5,ar6,ar7));
      ar4 = unaff_r14 + 8;
      (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c257098(ar4,ar5,ar6,ar7));
    }
    if (((undefined4 *)(unsigned long)*(unsigned *)0x8c4aa358) != (code *)0x0) {
      ar4 = unaff_r14;
      (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(*(unsigned *)0x8c4aa358)))(unaff_r14,ar5,ar6,ar7));
    }
    if ((unaff_r14[1] != 0) && ((*unaff_r14 & 8) == 0)) {
      ar4 = (uint *)(unsigned)unaff_r14[1];
      (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(*(unsigned *)0x8c4aa368)))(ar4,ar5,ar6,ar7));
    }
    if (unaff_r14[0xb] != 0) {
      ar4 = (uint *)(unsigned)unaff_r14[0xb];
      (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c21a8b0(ar4,ar5,ar6,ar7));
    }
    uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c256254(ar4,ar5,ar6,ar7));
    unaff_r14 = (uint *)(unsigned)unaff_r14[0xc];
  } while (unaff_r14 != (uint *)(unsigned)0x0);
  return uVar1;
}

__asm__(".globl _FUN_8c21a8be\n.set _FUN_8c21a8be, _FUN_8c21a8be_def\n");
