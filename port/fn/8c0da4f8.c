#include "../decls.h"
undefined4 FUN_8c0da4f8_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  if ((*(int *)(ar4 + 0x104) != 0) || (*(int *)(ar4 + 0x108) != 0)) {
    return 1;
  }
  if ((*(int *)(ar4 + 0x124) == 0) && (*(int *)(ar4 + 0x128) == 0)) {
    if ((*(float *)(ar4 + 300) == 0.0) &&
       ((*(float *)(ar4 + 0x130) == 0.0 && (*(float *)(ar4 + 0x134) == 0.0)))) {
      if (*(int *)(ar4 + 0x13c) == -1) {
        return 0;
      }
      return 1;
    }
    return 1;
  }
  return 1;
}

__asm__(".globl _FUN_8c0da4f8\n.set _FUN_8c0da4f8, _FUN_8c0da4f8_def\n");
