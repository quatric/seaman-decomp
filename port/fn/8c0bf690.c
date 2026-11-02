#include "../decls.h"
undefined4 FUN_8c0bf690_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = (*(code *)(&get_field_a510_01f538))
                    (*(undefined4 *)(0xcc + ar4),ar5,ar6,ar7);
  if ((iVar1 == 1) ||
     (iVar1 = (*(code *)(&get_field_a510_01f538))
                        (*(undefined4 *)(0xcc + ar4),ar5,ar6,ar7), iVar1 == 2)) {
    return 0;
  }
  iVar1 = FUN_8c01f1e8(*(undefined4 *)(0xcc + ar4),ar5,ar6,ar7);
  if ((iVar1 == 0) &&
     (iVar1 = FUN_8c01ec20(*(undefined4 *)(0xcc + ar4),ar5,ar6,ar7),
     iVar1 == 0)) {
    return 0;
  }
  return 1;
}

__asm__(".globl _FUN_8c0bf690\n.set _FUN_8c0bf690, _FUN_8c0bf690_def\n");
