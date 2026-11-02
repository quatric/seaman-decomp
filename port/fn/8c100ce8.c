#include "../decls.h"
undefined4 FUN_8c100ce8_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = (*(code *)(&input_is_mask_set_10000_01ec68))
                    (*(undefined4 *)(0xcc + ar4),ar5,ar6,ar7);
  if (iVar1 == 0) {
    iVar1 = FUN_8c101358(ar4,ar5,ar6,ar7);
    if (iVar1 == 1) {
      *(undefined4 *)(0x594 + ar4) = 0xf;
    }
    *(int *)(0x594 + ar4) = *(int *)(0x594 + ar4) + -1;
    if (0 < *(int *)(0x594 + ar4)) {
      return 1;
    }
  }
  *(undefined4 *)(0x594 + ar4) = 0;
  return 0;
}

__asm__(".globl _FUN_8c100ce8\n.set _FUN_8c100ce8, _FUN_8c100ce8_def\n");
