#include "../decls.h"
int FUN_8c0d9898_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  float in_fr4;
  
  if (((*(int *)(ar4 + 0x10) == 8) || (*(int *)(ar4 + 0x10) == 0)) ||
     (iVar1 = *(int *)(ar4 + 0x10), iVar1 == 1)) {
    if (in_fr4 <= 5.0) {
      *(undefined4 *)(ar4 + 0x10) = 4;
    }
    else {
      *(undefined4 *)(ar4 + 0x10) = 3;
    }
    *(undefined4 *)(ar4 + 0x14) = 0;
    iVar1 = 0x18;
    *(undefined1 *)(ar4 + 0x18) = 1;
  }
  return iVar1;
}

__asm__(".globl _FUN_8c0d9898\n.set _FUN_8c0d9898, _FUN_8c0d9898_def\n");
