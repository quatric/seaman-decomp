#include "../decls.h"
undefined4
FUN_8c1b9902_def(undefined4 ar4,undefined4 ar5,undefined4 *ar6,undefined4 ar7,undefined4 ain0)

{
  byte unaff_r9;
  undefined4 unaff_r11;
  int in_GBR;
  
  *(undefined2 *)(in_GBR + 0x150) = (undefined2)ain0;
  *ar6 = unaff_r11;
  FUN_8c1b9794(ar4,ar5,ar6,ar7,*(undefined4 *)(uint)unaff_r9);
  FUN_8c1b9750(ar4,ar5,(int)DAT_8c1b9aa2,ar7);
                    
  halt_baddata();
}

__asm__(".globl _FUN_8c1b9902\n.set _FUN_8c1b9902, _FUN_8c1b9902_def\n");
