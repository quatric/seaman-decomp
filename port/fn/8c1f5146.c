#include "../decls.h"
undefined4 FUN_8c1f5146_def(undefined1 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  if (ar4[7] == '\x01') {
    if (ar4[8] == '\x05') {
      *ar4 = 1;
    }
    else {
      *ar4 = 0;
    }
  }
  else if (((byte)ar4[8] == 0xff) || ((byte)ar4[8] == 0)) {
    *ar4 = 0;
  }
  else {
    *ar4 = 1;
  }
  return 0;
}

__asm__(".globl _FUN_8c1f5146\n.set _FUN_8c1f5146, _FUN_8c1f5146_def\n");
