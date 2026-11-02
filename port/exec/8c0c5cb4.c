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
undefined4 FUN_8c0c5cb4_def(undefined4 ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0c5cb4";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 24; for (int i_ = 0; i_ < 24; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  undefined4 ar5_00;
  int ar5_01;
  
  ((int *)(fr0_ - 0x10))[0] = 0;
  ar5_00 = 0;
  (vsp = ((unsigned long)(fr0_ - 24)), FUN_8c0c412c(((undefined1 *)(unsigned)0x8c2b5628),0,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 24)), FUN_8c016340(0x8c431294,ar5_00,ar6,ar7));
  uVar1 = 0x8c35468c;
  (vsp = ((unsigned long)(fr0_ - 24)), FUN_8c0f8134(0x8c35468c,ar5_00,ar6,ar7));
  ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x18))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 24)); FUN_8c2565c4(uVar1,ar5_00,ar6,ar7); });
  ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x18))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 24)); FUN_8c258e0a(0,ar5_00,ar6,ar7); });
  (vsp = ((unsigned long)(fr0_ - 24)), FUN_8c0fef10(*(undefined4 *)(unsigned)(ar5 + 2000),ar5_00,ar6,ar7));
  ((int *)(fr0_ - 0x10))[0] = (vsp = ((unsigned long)(fr0_ - 24)), FUN_8c0c5db0(*(undefined4 *)(unsigned)(ar5 + 0x7cc),ar5_00,ar6,ar7));
  if (((int *)(fr0_ - 0x10))[0] != 0) {
    ar5_00 = 1;
    (vsp = ((unsigned long)(fr0_ - 24)), FUN_8c0d1b90(((int *)(fr0_ - 0x10)),1,ar6,ar7));
  }
  (vsp = ((unsigned long)(fr0_ - 24)), FUN_8c0b936c(ar5,ar5_00,ar6,ar7));
  uVar1 = ar4;
  ar5_01 = ar5;
  (vsp = ((unsigned long)(fr0_ - 24)), FUN_8c0c75f4(ar4,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 24)), FUN_8c0f7ea0(uVar1,ar5_01,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 24)), FUN_8c0ce920(ar4,ar5_01,ar6,ar7));
  *(int *)(unsigned)(ar5 + 0x7e0) = *(int *)(unsigned)(ar5 + 0x7e0) + 1;
  *(undefined4 *)(unsigned)(ar5 + 0x7dc) = 0;
  return 0x7dc;
}

__asm__(".globl _FUN_8c0c5cb4\n.set _FUN_8c0c5cb4, _FUN_8c0c5cb4_def\n");
