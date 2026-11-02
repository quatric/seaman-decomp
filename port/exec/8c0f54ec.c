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
int FUN_8c0f54ec_def(int ar4,undefined4 ar5,int ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0f54ec";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;
  undefined4 s0 = *(undefined4 *)(vsp + 0);
  undefined4 s4 = *(undefined4 *)(vsp + 4);

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 104; for (int i_ = 0; i_ < 104; i_++) z_[i_] = 0; }
  int ar5_00;
  undefined4 ar6_00;
  undefined4 ar7_00;
  uint *puVar1;
  char cVar2;
  uint uStackY_38;
  
  cVar2 = '\0';
  uStackY_38 = (ulonglong)uStackY_38;
  ar7_00 = 0xffffffff;
  ar6_00 = 2;
  ar5_00 = ar6;
  ({ unsigned long t0_ = (unsigned long)(0); *(unsigned *)((((unsigned long)(fr0_ - 104)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 104)) - 8); FUN_8c0f4040(ar4,ar6,2,0xffffffff); });
  *(unsigned *)(unsigned)(ar4 + 8) = ((undefined1 *)(unsigned)0x8c12c058);
  (vsp = ((unsigned long)(fr0_ - 104)), FUN_8c015224(ar4 + 0x170,ar5_00,ar6_00,ar7_00));
  (vsp = ((unsigned long)(fr0_ - 104)), FUN_8c015ab8(ar4 + 0x178,ar5_00,ar6_00,ar7_00));
  (vsp = ((unsigned long)(fr0_ - 104)), FUN_8c016fcc(ar4 + 0x17c,ar5_00,ar6_00,ar7_00));
  ({ unsigned long ri0_ = (unsigned long)(ar5); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 104)); noop_0f58a0(ar4,ar5_00,ar6_00,ar7_00); });
  if (cVar2 == '\0') {
    puVar1 = (uint *)(unsigned)(fr0_ + (int)0xffffffcc);
    uStackY_38 = CONCAT44(s0,uStackY_38);
  }
  else {
    uStackY_38 = CONCAT44(s4,s0);
    puVar1 = &uStackY_38;
  }
  (vsp = ((unsigned long)(fr0_ - 104)), Class_12c058_m1_0f5660(ar4,*(undefined4 *)(unsigned)((int)puVar1 + 4),ar6_00,ar7_00));
  if (ar6 == 0x10) {
    *(undefined4 *)(unsigned)(ar4 + 0x16c) = 0;
  }
  return ar4;
}

__asm__(".globl _FUN_8c0f54ec\n.set _FUN_8c0f54ec, _FUN_8c0f54ec_def\n");
