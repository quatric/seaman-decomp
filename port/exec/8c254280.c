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
undefined4 FUN_8c254280_def(int ar4,int ar5,int ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c254280";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;
  int ain0 = (int)(unsigned long)vin0;
  undefined4 * ain1 = (undefined4 *)(unsigned long)vin1;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  uint ain0_00;
  undefined4 uVar1;
  undefined4 *in_r2 = 0;
  int iVar2;
  undefined4 unaff_r13 = 0;
  int *unaff_r14 = 0;
  
  *in_r2 = *(undefined4 *)(unsigned)(ain0 + ar6);
  *ain1 = *(undefined4 *)(unsigned)((int)&(*(undefined4 *)(unsigned)(unsigned)0x8c277c3c) + ar5);
  unaff_r14[6] = ar4;
  ain0_00 = (uint)(*(undefined4 *)(unsigned)(unsigned)0x8c4aad80);
  iVar2 = *unaff_r14;
  if (ain0_00 == 0) {
    (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(*(unsigned *)0x8c4aad34)))(unaff_r13,ar5,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(*(unsigned *)0x8c4aad40)))(unaff_r13,ar5,ar6,ar7));
    ain0_00 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(*(unsigned *)0x8c4aad3c)))(unaff_r13,ar5,ar6,ar7));
  }
  else {
    if (ain0_00 == 1) {
      unaff_r14[1] = iVar2;
      unaff_r14[2] = iVar2 + 4;
      unaff_r14[5] = 0;
      (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(*(unsigned *)0x8c4aad34)))(unaff_r13,ar5,ar6,ar7));
      (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(*(unsigned *)0x8c4aad40)))(unaff_r13,ar5,ar6,ar7));
      ain0_00 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(*(unsigned *)0x8c4aad3c)))(unaff_r13,ar5,ar6,ar7));
      iVar2 = iVar2 + 8;
    }
    else if (ain0_00 == 2) {
      unaff_r14[1] = iVar2;
      unaff_r14[2] = iVar2 + 8;
      unaff_r14[5] = 0;
      (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(*(unsigned *)0x8c4aad34)))(unaff_r13,ar5,ar6,ar7));
      (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(*(unsigned *)0x8c4aad40)))(unaff_r13,ar5,ar6,ar7));
      ain0_00 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(*(unsigned *)0x8c4aad3c)))(unaff_r13,ar5,ar6,ar7));
      iVar2 = iVar2 + 0x10;
    }
    else if (ain0_00 == 3) {
      unaff_r14[1] = iVar2;
      unaff_r14[2] = iVar2 + 0xc;
      unaff_r14[5] = 0;
      (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(*(unsigned *)0x8c4aad34)))(unaff_r13,ar5,ar6,ar7));
      (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(*(unsigned *)0x8c4aad40)))(unaff_r13,ar5,ar6,ar7));
      ain0_00 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(*(unsigned *)0x8c4aad3c)))(unaff_r13,ar5,ar6,ar7));
      iVar2 = iVar2 + 0x18;
    }
    else {
      if (ain0_00 != 4) goto LAB_8c2543be;
      unaff_r14[1] = iVar2;
      unaff_r14[2] = iVar2 + 0x10;
      unaff_r14[5] = 0;
      (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(*(unsigned *)0x8c4aad34)))(unaff_r13,ar5,ar6,ar7));
      (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(*(unsigned *)0x8c4aad40)))(unaff_r13,ar5,ar6,ar7));
      ain0_00 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(*(unsigned *)0x8c4aad3c)))(unaff_r13,ar5,ar6,ar7));
      iVar2 = iVar2 + 0x20;
    }
    *unaff_r14 = iVar2;
  }
LAB_8c2543be:
  if (unaff_r14[6] == 0) {
    return ain0_00;
  }
  uVar1 = ({ unsigned long ri0_ = (unsigned long)(ain0_00); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); FUN_8c255d6c(0,unaff_r14[6],ar6,ar7); });
  return uVar1;
}

__asm__(".globl _FUN_8c254280\n.set _FUN_8c254280, _FUN_8c254280_def\n");
