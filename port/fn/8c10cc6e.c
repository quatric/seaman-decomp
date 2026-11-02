#include "../decls.h"
undefined4 FUN_8c10cc6e_def(int *ar4,uint ar5,undefined4 ar6,undefined4 ar7)

{
  int a5;
  
  if ((ar5 & 0xff) == (int)0xff) {
    a5 = ar4[0xd];
    (**(code **)(*ar4 + 0x18))(*ar4,a5,ar6,ar7);
    FUN_8c120668(ar4,a5,ar6,ar7);
    return 1;
  }
  return 0;
}

__asm__(".globl _FUN_8c10cc6e\n.set _FUN_8c10cc6e, _FUN_8c10cc6e_def\n");
