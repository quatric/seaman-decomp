#include "../decls.h"
undefined4 FUN_8c0daa34_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  if ((*(int *)(0x9d4 + ar4) != 0) &&
     (iVar1 = (*(code *)(&get_field_70_05f490))
                        (*(undefined4 *)(0x9d4 + ar4),ar5,ar6,ar7), iVar1 == 0)) {
    FUN_8c0f4d84(*(undefined4 *)(0x9d4 + ar4),ar5,ar6,ar7);
    *(undefined4 *)(0x9d4 + ar4) = 0;
    return 1;
  }
  return 0;
}

__asm__(".globl _FUN_8c0daa34\n.set _FUN_8c0daa34, _FUN_8c0daa34_def\n");
