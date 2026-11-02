#include "../decls.h"
undefined4 FUN_8c027a00_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = (**(code **)(**(int **)(0x308 + ar4) + 0x20))
                    (*(int **)(0x308 + ar4),ar5,ar6,ar7);
  if ((iVar1 != 0) &&
     (iVar1 = (*(code *)(&get_field_214_027a4c))
                        (*(undefined4 *)(0x30c + ar4),ar5,ar6,ar7), iVar1 != 0)) {
    return 1;
  }
  return 0;
}

__asm__(".globl _FUN_8c027a00\n.set _FUN_8c027a00, _FUN_8c027a00_def\n");
