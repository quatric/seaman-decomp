#include "../decls.h"
undefined4 FUN_8c213a04_def(uint ar4,uint ar5,undefined4 ar6,undefined4 ar7)

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
  if (ar4 == 8) {
    return 3;
  }
  if (ar4 == 0x10) {
    return 4;
  }
  if (ar4 == 0x20) {
    return 5;
  }
  if (ar4 != 0x40) {
    if (ar4 == (int)0x80) {
      return 7;
    }
    if (ar4 == (int)0x100) {
      return 8;
    }
    if (ar4 == (int)0x200) {
      return 9;
    }
    if (ar4 != (int)0x400) {
      return 0xffffffff;
    }
    return 10;
  }
  return 6;
}

__asm__(".globl _FUN_8c213a04\n.set _FUN_8c213a04, _FUN_8c213a04_def\n");
