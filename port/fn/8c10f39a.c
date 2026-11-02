#include "../decls.h"
undefined4 FUN_8c10f39a_def(int *ar4,int ar5,int *ar6,undefined4 ar7)

{
  int in_r0;
  char in_T;
  
  if (in_T == '\x01') {
    *ar6 = (int)(ar4 + 0x12);
  }
  else {
    if (in_r0 != 0xff) {
      return 0;
    }
    if ((char)ar4[0xf] != '\0') {
      ar5 = ar4[0x11];
      (**(code **)(*ar4 + 0x18))(*ar4,ar5,ar6,ar7);
    }
    FUN_8c120668(ar4,ar5,ar6,ar7);
  }
  return 1;
}

__asm__(".globl _FUN_8c10f39a\n.set _FUN_8c10f39a, _FUN_8c10f39a_def\n");
