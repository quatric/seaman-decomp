#include "../decls.h"
undefined4 FUN_8c21a8be_def(uint *ar4,uint ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  uint unaff_r11;
  uint unaff_r12;
  uint *unaff_r14;
  undefined4 in_PR;
  
  do {
    FUN_8c2563ac(ar4,ar5,ar6,ar7,in_PR);
    if ((*unaff_r14 & unaff_r11) == 0) {
      ar4 = unaff_r14;
      (*_DAT_8c4aa340)(unaff_r14,ar5,ar6,ar7);
    }
    else {
      noop_25b638(unaff_r14 + 2,ar5,ar6,ar7,in_PR);
      ar5 = *unaff_r14 & unaff_r12;
      FUN_8c2569e0(unaff_r14 + 5,ar5,ar6,ar7);
      ar4 = unaff_r14 + 8;
      FUN_8c257098(ar4,ar5,ar6,ar7);
    }
    if (_DAT_8c4aa358 != (code *)0x0) {
      ar4 = unaff_r14;
      (*_DAT_8c4aa358)(unaff_r14,ar5,ar6,ar7);
    }
    if ((unaff_r14[1] != 0) && ((*unaff_r14 & 8) == 0)) {
      ar4 = (uint *)unaff_r14[1];
      (*_DAT_8c4aa368)(ar4,ar5,ar6,ar7);
    }
    if (unaff_r14[0xb] != 0) {
      ar4 = (uint *)unaff_r14[0xb];
      FUN_8c21a8b0(ar4,ar5,ar6,ar7);
    }
    uVar1 = FUN_8c256254(ar4,ar5,ar6,ar7);
    unaff_r14 = (uint *)unaff_r14[0xc];
  } while (unaff_r14 != (uint *)0x0);
  return uVar1;
}

__asm__(".globl _FUN_8c21a8be\n.set _FUN_8c21a8be, _FUN_8c21a8be_def\n");
