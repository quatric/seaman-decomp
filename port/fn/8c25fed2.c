#include "../decls.h"
undefined4 FUN_8c25fed2_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  if (*(short *)(0xa8 + ar4) != 0) {
    if (*(short *)(0xa8 + ar4) == 2) {
      if (*(short *)(0xaa + ar4) == 2) {
        return 4;
      }
      if (*(short *)(0xaa + ar4) == 1) {
        return 8;
      }
    }
    else if ((*(short *)(0xa8 + ar4) == 1) && (*(short *)(0xaa + ar4) == 2)) {
      return 4;
    }
  }
  return 0x10;
}

__asm__(".globl _FUN_8c25fed2\n.set _FUN_8c25fed2, _FUN_8c25fed2_def\n");
