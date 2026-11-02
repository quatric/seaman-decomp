#include "../decls.h"
undefined4 FUN_8c110b5c_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  uint uVar1;
  int a4;
  int *unaff_r14;
  
  if (unaff_r14[0xb] != 0) {
    uVar1 = 0;
    a4 = *unaff_r14;
    if (unaff_r14[10] != 0) {
      do {
        (**(code **)(a4 + 0x18))(a4,*(undefined4 *)(unaff_r14[0xb] + uVar1 * 4),ar6,ar7);
        uVar1 = uVar1 + 1;
      } while (uVar1 < (uint)unaff_r14[10]);
    }
    (**(code **)(a4 + 0x18))(a4,unaff_r14[0xb],ar6,ar7);
    (**(code **)(a4 + 0x18))(a4,unaff_r14[0xc],ar6,ar7);
    in_r0 = (**(code **)(a4 + 0x18))(a4,unaff_r14[0xd],ar6,ar7);
    unaff_r14[0xb] = 0;
  }
  return in_r0;
}

__asm__(".globl _FUN_8c110b5c\n.set _FUN_8c110b5c, _FUN_8c110b5c_def\n");
