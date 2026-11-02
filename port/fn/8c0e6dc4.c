#include "../decls.h"
undefined4 FUN_8c0e6dc4_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  FUN_8c0db8d4(ar4,ar5,ar6,ar7);
  FUN_8c0e96b8(ar4 + 0xf4c,ar5,ar6,ar7);
  FUN_8c0d6920(ar4 + 0xa68,ar5,ar6,ar7);
  (**(code **)(*(int *)(ar4 + 0x9e8) + 0x10))((int *)(ar4 + 0x9e8),ar5,ar6,ar7);
  FUN_8c0d92b0(ar4 + 0x10dc,ar5,ar6,ar7);
  if (*(int *)(0x83fc + ar4) != -1) {
    FUN_8c0220bc(0x8c2b59d0,*(undefined4 *)(0x83fc + ar4),ar6,ar7);
    *(undefined4 *)(0x83fc + ar4) = 0xffffffff;
  }
  return 1;
}

__asm__(".globl _FUN_8c0e6dc4\n.set _FUN_8c0e6dc4, _FUN_8c0e6dc4_def\n");
