#include "../decls.h"
undefined4 FUN_8c0dc5d0_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = (*(code *)(&input_is_mask_set_20000_01ebd8))
                    (*(undefined4 *)(0xcc + ar4),ar5,ar6,ar7);
  if ((iVar1 != 0) &&
     (iVar1 = (*(code *)(&input_is_mask_set_10000_01ec68))
                        (*(undefined4 *)(0xcc + ar4),ar5,ar6,ar7), iVar1 != 0)) {
    return 0;
  }
  return 1;
}

__asm__(".globl _FUN_8c0dc5d0\n.set _FUN_8c0dc5d0, _FUN_8c0dc5d0_def\n");
