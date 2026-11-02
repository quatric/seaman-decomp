#include "../decls.h"
undefined4 FUN_8c02f414_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  if (((*(int *)(ar4 + 0x6c) != 0) &&
      (iVar1 = get_field_6c_02f46c(*(undefined4 *)(ar4 + 0x6c),ar5,ar6,ar7),
      iVar1 != 0)) &&
     (iVar1 = (**(code **)(0xb4 + *(int *)(*(int *)(ar4 + 0x6c) + 8)))
                        (*(int *)(ar4 + 0x6c),ar5,ar6,ar7), iVar1 == 1)) {
    return 1;
  }
  return 0;
}

__asm__(".globl _FUN_8c02f414\n.set _FUN_8c02f414, _FUN_8c02f414_def\n");
