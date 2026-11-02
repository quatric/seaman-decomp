#include "../decls.h"
undefined4 FUN_8c201fb8_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = *(int *)(ar4 + 0x2c);
  if (iVar1 == 3) {
    if ((char)ar5 != '\b') {
      return 0xffffffff;
    }
  }
  else {
    if (iVar1 == 0) {
      return 0;
    }
    if ((((iVar1 == 1) || (iVar1 == 2)) || (iVar1 == 4)) || (iVar1 == 100)) {
      if ((char)ar5 != '\a') {
        return 0xffffffff;
      }
    }
    else {
      if (iVar1 != 0x65) {
        return 0xffffffff;
      }
      if ((char)ar5 != '\x05') {
        return 0xffffffff;
      }
    }
  }
  return 0;
}

__asm__(".globl _FUN_8c201fb8\n.set _FUN_8c201fb8, _FUN_8c201fb8_def\n");
