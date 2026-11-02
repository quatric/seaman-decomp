#include "../decls.h"
int FUN_8c263f1a_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  if (*(int *)(ar4 + 0x14) == 0) {
    return 0;
  }
  iVar1 = (**(code **)(**(int **)(ar4 + 0x14) + 0x24))(*(int **)(ar4 + 0x14),1,ar6,ar7);
  if (iVar1 < 0) {
    iVar1 = iVar1 + 0x7ff;
  }
  return iVar1 >> 0xb;
}

__asm__(".globl _FUN_8c263f1a\n.set _FUN_8c263f1a, _FUN_8c263f1a_def\n");
