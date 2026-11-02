#include "../decls.h"
undefined4 FUN_8c124faa_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)(&FUN_8c120580))
                    (ar4,ar5,1,1,(&DATA_8c124e24),(&DATA_8c124b9c),(&FUN_8c124edc),0x40);
  return uVar1;
}

__asm__(".globl _FUN_8c124faa\n.set _FUN_8c124faa, _FUN_8c124faa_def\n");
