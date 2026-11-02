#include "../decls.h"
int FUN_8c2634dc_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  if (*(int *)(ar4 + 8) != 0) {
    iVar1 = FUN_8c1f316e(*(undefined4 *)(ar4 + 8));
    return iVar1 - *(int *)(ar4 + 0x10);
  }
  return 0;
}

__asm__(".globl _FUN_8c2634dc\n.set _FUN_8c2634dc, _FUN_8c2634dc_def\n");
