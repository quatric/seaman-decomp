#include "../decls.h"
undefined4 FUN_8c1ef78c_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined *a4;
  undefined4 uVar1;
  undefined4 a5;
  undefined4 a7;
  
  a4 = (&DATA_8c1f5a28);
  *(uint *)(&DATA_8c1f5a28) = *(uint *)(&DATA_8c1f5a28) | 0xa0000000;
  FUN_8c1ef682(a4,ar5,ar6,ar7);
  a5 = 0xc000;
  a7 = 0xc000;
  uVar1 = FUN_8c1f3dd8(ar5,0xc000,ar4,0xc000);
  FUN_8c1ef640(ar5,a5,ar4,a7);
  *(undefined4 *)0x8c470e60 = 1;
  return uVar1;
}

__asm__(".globl _FUN_8c1ef78c\n.set _FUN_8c1ef78c, _FUN_8c1ef78c_def\n");
