#include "../decls.h"
undefined4 FUN_8c26b2e8_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  int in_r0;
  
  if (in_r0 == 1) {
    return *(undefined4 *)(ar4 + 0xc);
  }
  if ((ar5 != 0) && (*(int *)(ar4 + 0x1c) != 0)) {
    (**(code **)(ar4 + 0x1c))(*(undefined4 *)(ar4 + 0x20),0xfffffffd,ar6,ar7);
  }
  return 0;
}

__asm__(".globl _FUN_8c26b2e8\n.set _FUN_8c26b2e8, _FUN_8c26b2e8_def\n");
