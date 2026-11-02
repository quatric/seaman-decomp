#include "../decls.h"
undefined4 FUN_8c10022c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  iVar1 = FUN_8c01ecf8(*(undefined4 *)(0xcc + ar4),ar5,ar6,ar7);
  if (iVar1 == 1) {
    iVar1 = (*(code *)(&input_is_mask_set_20000_01ebd8))
                      (*(undefined4 *)(0xcc + ar4),ar5,ar6,ar7);
    if (iVar1 == 0) {
      iVar1 = (*(code *)(&input_is_mask_set_400_01ef20))
                        (*(undefined4 *)(0xcc + ar4),ar5,ar6,ar7);
      if ((iVar1 == 0) && (*(int *)(0x188 + ar4) != 3)) {
        FUN_8c0c51a0(ar4,1,ar6,ar7);
        uVar2 = 1;
      }
    }
  }
  return uVar2;
}

__asm__(".globl _FUN_8c10022c\n.set _FUN_8c10022c, _FUN_8c10022c_def\n");
