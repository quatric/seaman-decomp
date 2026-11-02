#include "../decls.h"
undefined4 FUN_8c10003c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = FUN_8c01ed88(*(undefined4 *)(0xcc + ar4),ar5,ar6,ar7);
  if ((((iVar1 == 0) &&
       (iVar1 = FUN_8c01ee54(*(undefined4 *)(0xcc + ar4),ar5,ar6,ar7),
       iVar1 == 0)) &&
      (iVar1 = (*(code *)(&input_is_mask_set_400_01ef20))
                         (*(undefined4 *)(0xcc + ar4),ar5,ar6,ar7), iVar1 == 0)) &&
     ((iVar1 = (*(code *)(&input_is_mask_set_200_01eff8))
                         (*(undefined4 *)(0xcc + ar4),ar5,ar6,ar7), iVar1 == 0 &&
      (iVar1 = FUN_8c01eb50(*(undefined4 *)(0xcc + ar4),ar5,ar6,ar7),
      iVar1 == 0)))) {
    return 1;
  }
  return 0;
}

__asm__(".globl _FUN_8c10003c\n.set _FUN_8c10003c, _FUN_8c10003c_def\n");
