#include "../decls.h"
undefined4 FUN_8c0100ec_def(int ar4,code *ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  int unaff_r10;
  int unaff_r11;
  int a4;
  
  a4 = unaff_r10 * unaff_r11 + ar4;
  for (; unaff_r11 != 0; unaff_r11 = unaff_r11 + -1) {
    a4 = a4 - unaff_r10;
    in_r0 = (*ar5)(a4,0xffffffff,ar6,ar7);
  }
  return in_r0;
}

__asm__(".globl _FUN_8c0100ec\n.set _FUN_8c0100ec, _FUN_8c0100ec_def\n");
