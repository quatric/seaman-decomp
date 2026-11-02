#include "../decls.h"
undefined4 FUN_8c112c9e_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int in_r0;
  uint unaff_r11;
  uint uVar1;
  int a4;
  int *unaff_r14;
  
  a4 = *unaff_r14;
  uVar1 = unaff_r11;
  if (unaff_r11 < *(uint *)(in_r0 + (int)unaff_r14)) {
    do {
      (**(code **)(a4 + 0x18))(a4,*(undefined4 *)(unaff_r14[0x16] + uVar1 * 4),ar6,ar7);
      uVar1 = uVar1 + 1;
    } while (uVar1 < (uint)unaff_r14[0x17]);
  }
  if (unaff_r14[0x16] != 0) {
    (**(code **)(a4 + 0x18))(a4,unaff_r14[0x16],ar6,ar7);
  }
  unaff_r14[0x16] = unaff_r11;
  unaff_r14[0x17] = unaff_r11;
  return 0x5c;
}

__asm__(".globl _FUN_8c112c9e\n.set _FUN_8c112c9e, _FUN_8c112c9e_def\n");
