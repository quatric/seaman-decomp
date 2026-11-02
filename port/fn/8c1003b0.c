#include "../decls.h"
int FUN_8c1003b0_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  if (*(undefined4 *)0x8c441430 == '\0') {
    *(undefined4 *)0x8c44142c = 0;
    *(undefined4 *)0x8c441430 = '\x01';
  }
  iVar1 = get_field_4_0637f8(ar4 + 0xd8,ar5,ar6,ar7);
  if (iVar1 == 0) {
    iVar1 = (*(code *)(&input_is_mask_set_10000_01ec68))
                      (*(undefined4 *)(0xcc + ar4),ar5,ar6,ar7);
    if ((iVar1 == 1) && (*(int *)(0x188 + ar4) == 2)) {
      iVar1 = (*(code *)(&input_is_mask_set_10000_01ec68))
                        (*(undefined4 *)(0xcc + ar4),ar5,ar6,ar7);
      if (iVar1 == 0) {
        *(undefined4 *)0x8c44142c = 0;
      }
      else {
        *(undefined4 *)0x8c44142c = 1;
      }
    }
    if ((*(undefined4 *)0x8c44142c == 1) &&
       (iVar1 = (*(code *)(&input_is_mask_set_10000_01ec68))
                          (*(undefined4 *)(0xcc + ar4),ar5,ar6,ar7), iVar1 == 0)) {
      *(undefined4 *)0x8c44142c = 0;
      FUN_8c0c51a0(ar4,2,ar6,ar7);
    }
    else if ((*(undefined4 *)0x8c44142c == 1) &&
            (iVar1 = (*(code *)(&input_is_mask_set_400_01ef20))
                               (*(undefined4 *)(0xcc + ar4),ar5,ar6,ar7), iVar1 == 0)) {
      *(undefined4 *)0x8c44142c = 0;
      FUN_8c0c51a0(ar4,0,ar6,ar7);
    }
    return *(undefined4 *)0x8c44142c;
  }
  *(undefined4 *)0x8c44142c = 0;
  return 0;
}

__asm__(".globl _FUN_8c1003b0\n.set _FUN_8c1003b0, _FUN_8c1003b0_def\n");
