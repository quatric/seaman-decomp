#include "../decls.h"
undefined4 FUN_8c0151e8_def(short *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  while( true ) {
    if (*ar4 == 0xff) {
      return 0;
    }
    if ((char)*ar4 == (char)ar5) break;
    ar4 = ar4 + 1;
  }
  return ar4;
}

__asm__(".globl _FUN_8c0151e8\n.set _FUN_8c0151e8, _FUN_8c0151e8_def\n");
