#include "../decls.h"
undefined4 FUN_8c0c4c84_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = get_field_24_05c284(ar4,ar5,ar6,ar7);
  if (((iVar1 != 0xf) && (iVar1 != 0x10)) &&
     (iVar1 = (**(code **)(0xb4 + *(int *)(ar4 + 8)))(ar4,ar5,ar6,ar7), iVar1 != 0)) {
    return 0;
  }
  return 1;
}

__asm__(".globl _FUN_8c0c4c84\n.set _FUN_8c0c4c84, _FUN_8c0c4c84_def\n");
