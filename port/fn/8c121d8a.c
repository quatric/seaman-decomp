#include "../decls.h"
undefined4 FUN_8c121d8a_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int in_r0;
  uint uVar1;
  
  *(undefined4 *)(in_r0 + ar4) = ar5;
  *(undefined4 *)(in_r0 + 4 + ar4) = ar5;
  if ((*(char *)(in_r0 + -4 + ar4) != '\0') &&
     (uVar1 = FUN_8c122060(ar4,ar5,ar6,ar7), (uVar1 & 0xff) != 0)) {
    return 1;
  }
  return 0;
}

__asm__(".globl _FUN_8c121d8a\n.set _FUN_8c121d8a, _FUN_8c121d8a_def\n");
