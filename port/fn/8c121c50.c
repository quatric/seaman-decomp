#include "../decls.h"
undefined4 FUN_8c121c50_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)(&FUN_8c120580))
                    (ar4,ar5,2,0,(&FUN_8c121896),(&DATA_8c121b38),(&DATA_8c1219f2),0x68);
  return uVar1;
}

__asm__(".globl _FUN_8c121c50\n.set _FUN_8c121c50, _FUN_8c121c50_def\n");
