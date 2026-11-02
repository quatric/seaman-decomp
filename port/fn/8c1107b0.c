#include "../decls.h"
undefined4 FUN_8c1107b0_def(int *ar4,uint ar5,undefined4 ar6,int *ar7)

{
  uint uVar1;
  int a5;
  
  uVar1 = ar5 & 0xff;
  if (uVar1 == 1) {
    *(undefined1 *)(ar4 + 10) = 1;
  }
  else if (uVar1 == (int)0xf8) {
    *ar7 = ar4[0x12];
  }
  else {
    if (uVar1 != (int)0xff) {
      return 0;
    }
    a5 = ar4[0xe];
    (**(code **)(*ar4 + 0x18))(*ar4,a5,ar6,ar7);
    FUN_8c120668(ar4,a5,ar6,ar7);
  }
  return 1;
}

__asm__(".globl _FUN_8c1107b0\n.set _FUN_8c1107b0, _FUN_8c1107b0_def\n");
