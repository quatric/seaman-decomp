#include "../decls.h"
undefined4 FUN_8c035580_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = (**(code **)(**(int **)(ar4 + 0x10) + 0x44))(*(int **)(ar4 + 0x10),ar5,ar6,ar7);
  if ((3 < iVar1) &&
     (iVar1 = (**(code **)(0x180 + *(int *)(*(int *)(ar4 + 4) + 8)))
                        (*(int *)(ar4 + 4),ar5,ar6,ar7), iVar1 != 2)) {
    return 1;
  }
  return 0;
}

__asm__(".globl _FUN_8c035580\n.set _FUN_8c035580, _FUN_8c035580_def\n");
