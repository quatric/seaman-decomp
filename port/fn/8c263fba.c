#include "../decls.h"
undefined4 FUN_8c263fba_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  if (*(int *)(ar4 + 0x14) != 0) {
    iVar1 = (**(code **)(**(int **)(ar4 + 0x14) + 0x24))(*(int **)(ar4 + 0x14),1,ar6,ar7);
    if ((int)*(short *)(ar4 + 0x3e) << 0xb <= iVar1) {
      return 1;
    }
  }
  return 0;
}

__asm__(".globl _FUN_8c263fba\n.set _FUN_8c263fba, _FUN_8c263fba_def\n");
