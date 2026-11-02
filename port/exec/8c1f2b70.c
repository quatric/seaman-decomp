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
uint FUN_8c1f2b70_def(undefined4 ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c1f2b70";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  uint uVar1;
  undefined4 uVar2;
  int in_r2 = 0;
  int ar5_00;
  uint a6;
  byte *unaff_r13 = 0;
  undefined4 in_PR = 0;
  
  if ((int)(uint)*unaff_r13 < in_r2) {
    uVar1 = 0;
  }
  else {
    ({ unsigned long ri0_ = (unsigned long)(in_PR); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); FUN_8c1f2a5c(unaff_r13 + 2,ar5,4,ar7); });
    ({ unsigned long ri0_ = (unsigned long)(in_PR); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); FUN_8c1f2a5c(unaff_r13 + 10,ar5 + 4,4,ar7); });
    *(byte *)(unsigned)(ar5 + 8) = unaff_r13[0x19];
    uVar1 = (uint)unaff_r13[0x20];
    if ((*(byte *)(unsigned)(ar5 + 8) & 2) == 0) {
      uVar1 = uVar1 - 2;
    }
    ar5_00 = ar5 + 10;
    a6 = uVar1;
    ({ unsigned long ri0_ = (unsigned long)(in_PR); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); FUN_8c1f2a5c(unaff_r13 + 0x21,ar5_00,uVar1,ar7); });
    *(undefined1 *)(unsigned)(uVar1 + ar5 + 10) = 0;
    if ((*(byte *)(unsigned)(ar5 + 8) & 2) != 0) {
      ar5_00 = 0x2e;
      if (*(char *)(unsigned)(ar5 + 10) == '\0') {
        *(undefined1 *)(unsigned)(ar5 + 10) = 0x2e;
      }
      else if (*(char *)(unsigned)(ar5 + 10) == '\x01') {
        *(undefined1 *)(unsigned)(ar5 + 10) = 0x2e;
        *(undefined1 *)(unsigned)(ar5 + 0xb) = 0x2e;
        *(undefined1 *)(unsigned)(ar5 + 0xc) = 0;
      }
    }
    uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c1f2b42(ar5 + 10,ar5_00,a6,ar7));
    *(char *)(unsigned)(ar5 + 9) = (char)uVar2;
    uVar1 = (uint)*unaff_r13;
  }
  return uVar1;
}

__asm__(".globl _FUN_8c1f2b70\n.set _FUN_8c1f2b70, _FUN_8c1f2b70_def\n");
