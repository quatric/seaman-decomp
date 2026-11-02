#include "../decls.h"
undefined4 FUN_8c1ef7e6_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined *a4;
  undefined4 uVar1;
  
  a4 = (&DATA_8c1f5a28);
  *(uint *)(&DATA_8c1f5a28) = *(uint *)(&DATA_8c1f5a28) | 0xa0000000;
  FUN_8c1ef682(a4,ar5,ar6,ar7);
  uVar1 = FUN_8c1f3ef4(ar4,ar5,ar6,ar7);
  FUN_8c1ef640(ar4,ar5,ar6,ar7);
  *(undefined4 *)0x8c470e60 = 1;
  return uVar1;
}

__asm__(".globl _FUN_8c1ef7e6\n.set _FUN_8c1ef7e6, _FUN_8c1ef7e6_def\n");
