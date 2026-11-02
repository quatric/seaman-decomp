#include "../decls.h"
undefined4 FUN_8c26b600_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  int in_r0;
  
  if (in_r0 == 1) {
    return *(undefined4 *)(ar4 + 0xc);
  }
  if (ar5 == 0) {
    return *(undefined4 *)(ar4 + 0x10);
  }
  if (*(int *)(ar4 + 0x28) != 0) {
    (**(code **)(ar4 + 0x28))(*(undefined4 *)(ar4 + 0x2c),0xfffffffd,ar6,ar7);
  }
  return 0;
}

__asm__(".globl _FUN_8c26b600\n.set _FUN_8c26b600, _FUN_8c26b600_def\n");
