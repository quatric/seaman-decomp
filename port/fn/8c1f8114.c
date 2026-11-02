#include "../decls.h"
undefined4 FUN_8c1f8114_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = FUN_8c1f84d8(ar4,ar5,ar6,ar7);
  *(undefined4 *)0x8c474a10 = uVar1;
  *(undefined4 *)0x8c474a14 = 0;
  FUN_8c1f814c(ar4,ar5,ar6,ar7);
  uVar1 = FUN_8c1fa244((int)0x900,(&FUN_8c1f814c),0x5c,0);
  *(undefined4 *)0x8c474a18 = uVar1;
  return 0;
}

__asm__(".globl _FUN_8c1f8114\n.set _FUN_8c1f8114, _FUN_8c1f8114_def\n");
