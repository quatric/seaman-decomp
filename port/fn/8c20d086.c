#include "../decls.h"
undefined4 FUN_8c20d086_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  uint uVar1;
  uint *unaff_r14;
  
  if ((*unaff_r14 & 3) == 1) {
    FUN_8c20a892(ar4,unaff_r14[7],unaff_r14[5],ar7);
  }
  else if ((*unaff_r14 & 0xffff) == 3) {
    FUN_8c20d7a0(ar4,unaff_r14[7],unaff_r14[3],unaff_r14[6]);
  }
  else {
    uVar1 = unaff_r14[6];
    if (((((uVar1 & 4) == 0) || ((uVar1 & 1) == 0)) || ((uVar1 & 8) != 0)) || ((uVar1 & 0x20) != 0))
    {
      FUN_8c20a9c2(ar4,unaff_r14[7],unaff_r14[5],ar7);
    }
    else {
      FUN_8c20d6ea(ar4,unaff_r14[7],unaff_r14[3],ar7);
    }
  }
  return 0;
}

__asm__(".globl _FUN_8c20d086\n.set _FUN_8c20d086, _FUN_8c20d086_def\n");
