#include "../decls.h"
undefined4 FUN_8c26b5fc_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  if (ar5 == 1) {
    return *(undefined4 *)(ar4 + 0xc);
  }
  if (ar5 == 0) {
    return *(undefined4 *)(ar4 + 0x10);
  }
  if (*(int *)(ar4 + 0x28) != 0) {
    (**(code **)(ar4 + 0x28))(*(undefined4 *)(ar4 + 0x2c),0xfffffffd);
  }
  return 0;
}

__asm__(".globl _FUN_8c26b5fc\n.set _FUN_8c26b5fc, _FUN_8c26b5fc_def\n");
