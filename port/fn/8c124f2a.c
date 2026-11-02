#include "../decls.h"
undefined4 FUN_8c124f2a_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  if (*(short *)(ar5 + 0x34) != 0) {
    (**(code **)(ar4 + 0x18))(ar4,*(undefined4 *)(ar5 + 0x30),ar6,ar7);
    *(undefined2 *)(ar5 + 0x34) = 0;
  }
  return 0x34;
}

__asm__(".globl _FUN_8c124f2a\n.set _FUN_8c124f2a, _FUN_8c124f2a_def\n");
