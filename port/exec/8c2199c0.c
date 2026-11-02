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
undefined4 FUN_8c2199c0_def(uint *ar4,uint ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c2199c0";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  uint unaff_r8 = 0;
  uint unaff_r10 = 0;
  uint unaff_r11 = 0;
  uint *unaff_r12 = 0;
  uint unaff_r13 = 0;
  uint uVar2;
  undefined4 in_PR = 0;
  
  do {
    uVar2 = *unaff_r12;
    if ((uVar2 & 7) == 7) {
      uVar1 = 7;
      if ((uVar2 & unaff_r11) == 0) {
        ar4 = (uint *)(unsigned)unaff_r12[1];
        uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c219954(ar4,ar5,ar6,ar7));
      }
      if ((uVar2 & unaff_r10) == 0) {
        ar4 = (uint *)(unsigned)unaff_r12[0xb];
        uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c2199aa(ar4,ar5,ar6,ar7));
      }
    }
    else {
      ({ unsigned long ri0_ = (unsigned long)(in_PR); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); FUN_8c2563ac(ar4,ar5,ar6,ar7); });
      if ((uVar2 & 1) == 0) {
        ar4 = unaff_r12 + 2;
        ({ unsigned long ri0_ = (unsigned long)(in_PR); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); noop_25b638(ar4,ar5,ar6,ar7); });
      }
      if ((uVar2 & 2) == 0) {
        unaff_r13 = uVar2 & 0x20;
        ar4 = unaff_r12 + 5;
        ar5 = unaff_r13;
        ({ unsigned long ri0_ = (unsigned long)(in_PR); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); FUN_8c2569e0(ar4,unaff_r13,ar6,ar7); });
      }
      if ((uVar2 & unaff_r8) == 0) {
        ar4 = unaff_r12 + 8;
        ({ unsigned long ri0_ = (unsigned long)(in_PR); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); FUN_8c257098(ar4,ar5,ar6,ar7); });
      }
      if ((uVar2 & unaff_r11) == 0) {
        ar4 = (uint *)(unsigned)unaff_r12[1];
        unaff_r13 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c219954(ar4,ar5,ar6,ar7));
      }
      if (((uVar2 & unaff_r10) == 0) && (((uVar2 & 0x100) == 0 || (unaff_r13 == 0)))) {
        ar4 = (uint *)(unsigned)unaff_r12[0xb];
        (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c2199aa(ar4,ar5,ar6,ar7));
      }
      uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c256254(ar4,ar5,ar6,ar7));
    }
    unaff_r12 = (uint *)(unsigned)unaff_r12[0xc];
  } while (unaff_r12 != (uint *)(unsigned)0x0);
  return uVar1;
}

__asm__(".globl _FUN_8c2199c0\n.set _FUN_8c2199c0, _FUN_8c2199c0_def\n");
