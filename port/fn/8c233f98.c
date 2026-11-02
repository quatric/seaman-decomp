#include "../decls.h"
undefined4 FUN_8c233f98_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 ar6_00;
  undefined4 ar7_00;
  
  _DAT_8c4aa390 = 0xffbfbfbf;
  _DAT_8c4aa394 = 0x41000000;
  if (ar4 == 0) {
    FUN_8c20c90c(0x8c4aa398,0x80,0x80,0x300);
    ar7_00 = 0;
    ar6_00 = 0;
    FUN_8c20cb5a(0x8c4aa398,&DAT_8c273be8,0,0);
  }
  else {
    FUN_8c20c90c(0x8c4aa398,ar5,ar5,ar6);
    ar7_00 = 0;
    ar6_00 = 0;
    FUN_8c20cb5a(0x8c4aa398,ar4,0,0);
  }
  _DAT_8c4aaa3c = 0xf00608;
  _DAT_8c4aaa40 = 2;
  _DAT_8c4aaa44 = 2;
  _DAT_8c4aaa48 = 0;
  _DAT_8c4aaa5c = 2;
  _DAT_8c4aaaa8 = 0x8c4aa398;
  _DAT_8c4aaa7c = 0;
  _DAT_8c4aaa80 = 1;
  _DAT_8c4aaa4c = 1;
  FUN_8c20f640(&DAT_8c4aaa3c,0,ar6_00,ar7_00);
  _DAT_8c4aa3c8 = _DAT_8c4aaacc;
  _DAT_8c4aa3cc = _DAT_8c4aaad0;
  _DAT_8c4aa3c4 = _DAT_8c4aaad4;
  _DAT_8c4aa3c0 = _DAT_8c4aaad8;
  return 0x9c;
}

__asm__(".globl _FUN_8c233f98\n.set _FUN_8c233f98, _FUN_8c233f98_def\n");
