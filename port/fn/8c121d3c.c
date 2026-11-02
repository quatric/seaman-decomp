#include "../decls.h"
uint FUN_8c121d3c_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int in_r0;
  uint uVar1;
  int unaff_r14;
  
  *(undefined4 *)(in_r0 + unaff_r14) = ar6;
  *(undefined4 *)(in_r0 + 4 + unaff_r14) = ar7;
  *(undefined4 *)(in_r0 + 8 + unaff_r14) = ar5;
  uVar1 = FUN_8c121f72(unaff_r14,ar5,ar6,ar7);
  if ((uVar1 & 0xff) == 0) {
    uVar1 = (**(code **)(0xe0 + unaff_r14))(unaff_r14,0,0,0);
  }
  return uVar1;
}

__asm__(".globl _FUN_8c121d3c\n.set _FUN_8c121d3c, _FUN_8c121d3c_def\n");
