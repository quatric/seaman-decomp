#include "../decls.h"
undefined4 FUN_8c1208fc_def(undefined4 ar4,undefined4 ar5,int ar6,undefined4 ar7)

{
  undefined4 a4;
  uint uVar1;
  int a6;
  undefined4 a7;
  
  a4 = FUN_8c120890(ar4,ar6,ar6,ar7);
  a7 = 0;
  a6 = ar6;
  uVar1 = FUN_8c1209ec(a4,ar5,ar6,0);
  if ((uVar1 & 0xff) != 0) {
    (**(code **)(ar6 + 0x18))(ar6,a4,a6,a7);
    a4 = 0;
  }
  return a4;
}

__asm__(".globl _FUN_8c1208fc\n.set _FUN_8c1208fc, _FUN_8c1208fc_def\n");
