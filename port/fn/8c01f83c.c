#include "../decls.h"
undefined4 FUN_8c01f83c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  if (*(undefined4 *)0x8c2792a0 == 6) {
    uVar1 = 1;
  }
  else if (*(undefined4 *)0x8c2792a0 == 7) {
    uVar1 = 2;
  }
  else {
    *(char *)(ar4 + 0x1c) = *(char *)(ar4 + 0x1c) + '\x01';
    if (((*(int *)(ar4 + 4) == 0) && (*(int *)(ar4 + 0x20) == 0)) && (*(char *)(ar4 + 0x1c) == '\0')
       ) {
      FUN_8c1f3a4c(ar4,ar5,ar6,ar7);
    }
    uVar1 = 0;
  }
  return uVar1;
}

__asm__(".globl _FUN_8c01f83c\n.set _FUN_8c01f83c, _FUN_8c01f83c_def\n");
