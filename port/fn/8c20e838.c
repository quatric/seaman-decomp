#include "../decls.h"
undefined4 FUN_8c20e838_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  if (ar5 <= ar4) {
    ar4 = ar5;
  }
  if (ar4 == 1) {
    return 0;
  }
  if (ar4 == 2) {
    return 1;
  }
  if (ar4 == 4) {
    return 2;
  }
  if (ar4 != 8) {
    if (ar4 == 0x10) {
      return 4;
    }
    if (ar4 == 0x20) {
      return 5;
    }
    if (ar4 == 0x40) {
      return 6;
    }
    if (ar4 == 0x80) {
      return 7;
    }
    if (ar4 == 0x100) {
      return 8;
    }
    if (ar4 == 0x200) {
      return 9;
    }
    if (ar4 == 0x400) {
      return 10;
    }
  }
  return 3;
}

__asm__(".globl _FUN_8c20e838\n.set _FUN_8c20e838, _FUN_8c20e838_def\n");
