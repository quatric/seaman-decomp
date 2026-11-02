#include "../decls.h"
undefined4 FUN_8c263472_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int unaff_r14;
  
  if (*(int *)(unaff_r14 + 0x14) == 0) {
    *(undefined4 *)(unaff_r14 + 0x34) = 0;
    *(undefined4 *)(unaff_r14 + 0xc) = 0;
    *(undefined1 *)(unaff_r14 + 1) = 3;
  }
  else {
    *(undefined1 *)(unaff_r14 + 1) = 2;
    *(undefined4 *)(unaff_r14 + 0x34) = 0;
    uVar1 = FUN_8c2634dc(ar4,0,ar6,ar7);
    *(undefined4 *)(unaff_r14 + 0xc) = uVar1;
  }
  return 1;
}

__asm__(".globl _FUN_8c263472\n.set _FUN_8c263472, _FUN_8c263472_def\n");
