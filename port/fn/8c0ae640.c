#include "../decls.h"
undefined4 s_GRAPHICS_SQUIDLINE_0ae646_def(undefined4 ar4,undefined4 ar5,int ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 ar5_00;
  undefined4 ar6_00;
  
  (*(code *)(&FUN_8c020a70))
            (ar4,*(undefined4 *)(&DATA_8c13b5d8),*(undefined4 *)(&DATA_8c13b4d4),ar5);
  ar6_00 = *(undefined4 *)(&DATA_8c13b4d4);
  ar5_00 = *(undefined4 *)(&DATA_8c13b5d8);
  uVar1 = FUN_8c020b68(ar4,ar5_00,ar6_00,ar5);
  if (ar6 != 0) {
    uVar1 = FUN_8c256670(ar6,ar5_00,ar6_00,ar5);
  }
  return uVar1;
}

__asm__(".globl _s_GRAPHICS_SQUIDLINE_0ae646\n.set _s_GRAPHICS_SQUIDLINE_0ae646, _s_GRAPHICS_SQUIDLINE_0ae646_def\n");
