#include "../decls.h"
undefined4 FUN_8c200900_def(undefined4 ar4,undefined4 ar5,int ar6,undefined4 ar7)

{
  int a5;
  int iVar1;
  int unaff_r11;
  undefined4 unaff_r13;
  
  while( true ) {
    a5 = FUN_8c200890(unaff_r13,unaff_r11,ar6,ar7);
    if (a5 < 0) {
      return 0xffffffff;
    }
    iVar1 = FUN_8c20093a(unaff_r13,a5,ar6,ar7);
    if (-1 < iVar1) break;
    ar6 = unaff_r11 + -2;
    FUN_8c20099e(unaff_r13,a5,unaff_r11 + -2,ar7);
  }
  return a5;
}

__asm__(".globl _FUN_8c200900\n.set _FUN_8c200900, _FUN_8c200900_def\n");
