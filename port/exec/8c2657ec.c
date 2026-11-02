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
int aica_ram_2657ec_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "aica_ram_2657ec";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 72; for (int i_ = 0; i_ < 72; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  undefined4 ar5_00;
  int iVar2;
  
  if ((*(undefined4 *)(unsigned)(unsigned)0x8c2784c0) == 0) {
    iVar2 = 0xd000001;
  }
  else if (ar4 == 0) {
    iVar2 = 0x7000103;
  }
  else {
    (vsp = ((unsigned long)(fr0_ - 72)), FUN_8c265a2c(ar4,(fr0_ + (int)0xffffffdc),ar6,ar7));
    if ((*(int *)(fr0_ - 0x24)) == 2) {
      iVar2 = 0x6000001;
    }
    else {
      (*(undefined4 *)(unsigned)(unsigned)0x8c4bd404) = 0;
      *(undefined4 *)(unsigned)(ar4 + 0x18) = 0;
      iVar2 = ar5 + -0x5f800000;
      ar7 = *(undefined4 *)(unsigned)(ar4 + 0xc);
      ar6 = *(undefined4 *)(unsigned)(ar4 + 8);
      uVar1 = *(undefined4 *)(unsigned)((*(undefined4 *)(unsigned)(unsigned)0x8c2784c0) + 0x1ac);
      (*(undefined4 *)(unsigned)(unsigned)0x8c4bd404) = ({ unsigned long t0_ = (unsigned long)(0); unsigned long t1_ = (unsigned long)(1); unsigned long t2_ = (unsigned long)(1); unsigned long t3_ = (unsigned long)(((void *)0x8c26592c)); unsigned long t4_ = (unsigned long)(ar4); *(unsigned *)((((unsigned long)(fr0_ - 72)) - 24) + 0) = (unsigned)t0_; *(unsigned *)((((unsigned long)(fr0_ - 72)) - 24) + 4) = (unsigned)t1_; *(unsigned *)((((unsigned long)(fr0_ - 72)) - 24) + 8) = (unsigned)t2_; *(unsigned *)((((unsigned long)(fr0_ - 72)) - 24) + 12) = (unsigned)t3_; *(unsigned *)((((unsigned long)(fr0_ - 72)) - 24) + 16) = (unsigned)t4_; vsp = (((unsigned long)(fr0_ - 72)) - 24); FUN_8c1f900c(uVar1,iVar2,ar6,ar7); });
      if ((*(undefined4 *)(unsigned)(unsigned)0x8c4bd404) != 0) {
        ({ unsigned long ri0_ = (unsigned long)((*(int *)(fr0_ - 0x24))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 72)); FUN_8c2658e2(uVar1,iVar2,ar6,ar7); });
      }
      iVar2 = (vsp = ((unsigned long)(fr0_ - 72)), FUN_8c265f74(ar4,2,ar6,ar7));
      if (iVar2 == 0) {
        ar5_00 = 0;
        *(int *)(unsigned)((*(undefined4 *)(unsigned)(unsigned)0x8c2784c0) + 400) = ar4;
        *(int *)(unsigned)((*(undefined4 *)(unsigned)(unsigned)0x8c2784c0) + 0x188) = *(int *)(unsigned)((*(undefined4 *)(unsigned)(unsigned)0x8c2784c0) + 0x188) + 1;
        uVar1 = *(undefined4 *)(unsigned)((*(undefined4 *)(unsigned)(unsigned)0x8c2784c0) + 0x1ac);
        (*(undefined4 *)(unsigned)(unsigned)0x8c4bd404) = (vsp = ((unsigned long)(fr0_ - 72)), FUN_8c1f9194(uVar1,0,ar6,ar7));
        if ((*(undefined4 *)(unsigned)(unsigned)0x8c4bd404) != 0) {
          ({ unsigned long ri0_ = (unsigned long)((*(int *)(fr0_ - 0x24))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 72)); FUN_8c2658e2(uVar1,ar5_00,ar6,ar7); });
        }
      }
    }
  }
  if (iVar2 != 0) {
    ({ unsigned long ri0_ = (unsigned long)((*(int *)(fr0_ - 0x24))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 72)); FUN_8c2688a0(((void *)0x8c2657ec),iVar2,ar6,ar7); });
  }
  return iVar2;
}

__asm__(".globl _aica_ram_2657ec\n.set _aica_ram_2657ec, _aica_ram_2657ec_def\n");
