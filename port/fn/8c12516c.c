#include "../decls.h"
undefined4 FUN_8c12516c_def(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int a5;
  
  if ((char)ar5 == '\x01') {
    ar4[0xf] = 0;
    *(undefined1 *)(ar4 + 0x10) = 1;
  }
  else {
    if ((char)ar5 != -1) {
      return 0;
    }
    (**(code **)(*ar4 + 0x18))(*ar4,ar4[10],ar6,ar7);
    a5 = ar4[0x11];
    (**(code **)(*ar4 + 0x18))(*ar4,a5,ar6,ar7);
    FUN_8c120668(ar4,a5,ar6,ar7);
  }
  return 1;
}

__asm__(".globl _FUN_8c12516c\n.set _FUN_8c12516c, _FUN_8c12516c_def\n");
