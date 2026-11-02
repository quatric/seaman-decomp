#include "../decls.h"
undefined4 FUN_8c221a0a_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined4 in_r0;
  uint unaff_r11;
  int a6;
  uint *unaff_r14;
  uint uVar3;
  
  puVar2 = (&FUN_8c21279c);
  puVar1 = (&FUN_8c212740);
  uVar3 = *unaff_r14;
  a6 = 0x8c4c0ee0;
  while( true ) {
    if ((uVar3 & unaff_r11) != 0) {
      if ((uVar3 >> 1 & 1) == 0) {
        in_r0 = (*(code *)puVar2)(0,ar4,a6,ar7);
      }
      else {
        in_r0 = (*(code *)puVar1)(0,ar4,a6,ar7);
      }
    }
    if ((uVar3 >> 2 & 1) != 0) break;
    ar4 = ar4 + 0xc;
    uVar3 = uVar3 >> 3;
    a6 = a6 + 0x20;
  }
  return in_r0;
}

__asm__(".globl _FUN_8c221a0a\n.set _FUN_8c221a0a, _FUN_8c221a0a_def\n");
