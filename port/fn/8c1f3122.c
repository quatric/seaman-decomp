#include "../decls.h"
undefined4 FUN_8c1f3122_def(int ar4,int ar5,int ar6,undefined4 ar7)

{
  if ((ar4 == 0) || (*(short *)(ar4 + 0x4c) == 0)) {
    return 0xfffffff6;
  }
  if (ar6 != 0) {
    if (ar6 == 1) {
      ar5 = *(int *)(ar4 + 0x14) + ar5;
    }
    else {
      if (ar6 != 2) {
        return 0xfffffff0;
      }
      ar5 = ar5 + *(int *)(ar4 + 0x10);
    }
  }
  if ((-1 < ar5) && (ar5 <= *(int *)(ar4 + 0x10))) {
    *(int *)(ar4 + 0x14) = ar5;
    return 0;
  }
  return 0xffffffef;
}

__asm__(".globl _FUN_8c1f3122\n.set _FUN_8c1f3122, _FUN_8c1f3122_def\n");
