#include "../decls.h"
int FUN_8c2571a8_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  if (ar4 == 8) {
    ar4 = 0;
  }
  else if (ar4 == 0x10) {
    ar4 = 1;
  }
  else if (ar4 == 0x20) {
    ar4 = 2;
  }
  else if (ar4 == 0x40) {
    ar4 = 3;
  }
  else if (ar4 == 0x80) {
    ar4 = 4;
  }
  else if (ar4 == 0x100) {
    ar4 = 5;
  }
  else if (ar4 == 0x200) {
    ar4 = 6;
  }
  else if (ar4 == 0x400) {
    ar4 = 7;
  }
  return ar4;
}

__asm__(".globl _FUN_8c2571a8\n.set _FUN_8c2571a8, _FUN_8c2571a8_def\n");
