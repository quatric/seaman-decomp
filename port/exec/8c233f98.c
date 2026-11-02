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
undefined4 FUN_8c233f98_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c233f98";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 ar6_00;
  undefined4 ar7_00;
  
  (*(undefined4 *)(unsigned)(unsigned)0x8c4aa390) = 0xffbfbfbf;
  (*(undefined4 *)(unsigned)(unsigned)0x8c4aa394) = 0x41000000;
  if (ar4 == 0) {
    (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c20c90c(0x8c4aa398,0x80,0x80,0x300));
    ar7_00 = 0;
    ar6_00 = 0;
    (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c20cb5a(0x8c4aa398,((undefined1 *)(unsigned)0x8c273be8),0,0));
  }
  else {
    (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c20c90c(0x8c4aa398,ar5,ar5,ar6));
    ar7_00 = 0;
    ar6_00 = 0;
    (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c20cb5a(0x8c4aa398,ar4,0,0));
  }
  (*(undefined4 *)(unsigned)(unsigned)0x8c4aaa3c) = 0xf00608;
  (*(undefined4 *)(unsigned)(unsigned)0x8c4aaa40) = 2;
  (*(undefined4 *)(unsigned)(unsigned)0x8c4aaa44) = 2;
  (*(undefined4 *)(unsigned)(unsigned)0x8c4aaa48) = 0;
  (*(undefined4 *)(unsigned)(unsigned)0x8c4aaa5c) = 2;
  (*(undefined4 *)(unsigned)(unsigned)0x8c4aaaa8) = 0x8c4aa398;
  (*(undefined4 *)(unsigned)(unsigned)0x8c4aaa7c) = 0;
  (*(undefined4 *)(unsigned)(unsigned)0x8c4aaa80) = 1;
  (*(undefined4 *)(unsigned)(unsigned)0x8c4aaa4c) = 1;
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c20f640(((undefined1 *)(unsigned)0x8c4aaa3c),0,ar6_00,ar7_00));
  (*(undefined4 *)(unsigned)(unsigned)0x8c4aa3c8) = (*(undefined4 *)(unsigned)(unsigned)0x8c4aaacc);
  (*(undefined4 *)(unsigned)(unsigned)0x8c4aa3cc) = (*(undefined4 *)(unsigned)(unsigned)0x8c4aaad0);
  (*(undefined4 *)(unsigned)(unsigned)0x8c4aa3c4) = (*(undefined4 *)(unsigned)(unsigned)0x8c4aaad4);
  (*(undefined4 *)(unsigned)(unsigned)0x8c4aa3c0) = (*(undefined4 *)(unsigned)(unsigned)0x8c4aaad8);
  return 0x9c;
}

__asm__(".globl _FUN_8c233f98\n.set _FUN_8c233f98, _FUN_8c233f98_def\n");
